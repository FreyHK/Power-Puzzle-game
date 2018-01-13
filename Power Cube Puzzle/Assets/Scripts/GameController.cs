using System.Collections;
using System.Collections.Generic;
using UnityEngine;

/// <summary>
/// Controls everthing related to game managedment, level switching, loading etc.
/// Is the boss of every other scripts, but mostly controls worldcontroller
/// Should be the only class with a Start method besides visual classes
/// </summary>
public class GameController : MonoBehaviour {

	[SerializeField] WorldController worldController;
	[SerializeField] CameraController cameraController;
	[SerializeField] UIManager uiManager;
	[SerializeField] PlayerInputController playerInput;

	[SerializeField] LevelCollection[] LevelCollections;
	int curLevelCollection = -1;

	void Start () {
		//The manager root gameobject should not be destroyed
		DontDestroyOnLoad (transform.root.gameObject);

		if (LevelCollections.Length == 0) {
			Debug.LogError ("No level collections assigned");
			return;
		}

		//Setup callbacks
		NotificationCenter.DefaultCenter.AddObserver(this, NotificationMessage.OnLevelStart);
		NotificationCenter.DefaultCenter.AddObserver(this, NotificationMessage.OnLevelComplete);
		NotificationCenter.DefaultCenter.AddObserver(this, NotificationMessage.OnLevelQuit);

		NotificationCenter.DefaultCenter.AddObserver (this, NotificationMessage.UI_LoadLevelRequest);
		NotificationCenter.DefaultCenter.AddObserver (this, NotificationMessage.UI_LoadLevelCollectionRequest);

		//Initialization
		worldController.Initialize ();
		uiManager.Initialize (LevelCollections);
		cameraController.Initialize ();

		for (int i = 0; i < LevelCollections.Length; i++) {
			LevelCollections[i].Initialize ();
		}

		//FIXME just temp
		//LoadCurrentLevel();
	}

	void Update () {
		worldController.UpdateBoard ();
	}

	void LoadCurrentLevel () {
		curLevel = LevelCollections[curLevelCollection].GetCurrentLevel();

		worldController.InitializeLevel (curLevel);
	}


	// - - - Events - - -

	//Player finished a level
	void OnLevelComplete (Notification note) {
		curLevel = null;

		//Completed level, increase
		LevelCollections[curLevelCollection].IncreaseLevel ();

		//TODO Ad manager:
		//Maybe show ad at this point?
		//Set ad timer to 5 min
	}

	//Player quit a level
	void OnLevelQuit (Notification note) {
		curLevel = null;
	}

	LevelInfo curLevel = null;

	void UI_LoadLevelRequest (Notification data) {
		//Only switch if we're done with level
		if (curLevel != null) {
			Debug.LogError ("Trying to load level before completing current level!");
			return;
		}
		LoadCurrentLevel ();
	}

	void UI_LoadLevelCollectionRequest (Notification note) {
		LevelCollection collection = (LevelCollection)note.data ["LevelCollection"];
		//Find index
		for (int i = 0; i < LevelCollections.Length; i++) {
			if (LevelCollections [i] == collection) {
				curLevelCollection = i;
				break;
			}
		}

		LoadCurrentLevel ();
	}
}
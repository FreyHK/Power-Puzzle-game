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
	[SerializeField] UIManager uiManager;
	[SerializeField] PlayerInputController playerInput;

	//Temp
	//TODO multiple levelcollections
	//Should be selected by player
	[SerializeField] LevelCollection levelCollection;

	void Start () {
		//The manager root gameobject gameobject should not be destroyed
		DontDestroyOnLoad (transform.root.gameObject);

		//Setup callbacks
		NotificationCenter.DefaultCenter.AddObserver(this, NotificationMessage.OnLevelEnd);
		NotificationCenter.DefaultCenter.AddObserver (this, NotificationMessage.UI_LoadLevelRequest);

		//Initialization
		worldController.Initialize ();
		uiManager.Initialize ();
		levelCollection.Initialize ();

		//FIXME just temp
		LoadCurrentLevel();
	}

	void Update () {
		worldController.UpdateBoard ();
	}

	void LoadCurrentLevel () {
		curLevel = levelCollection.GetCurrentLevel();

		worldController.InitializeLevel (curLevel);
	}


	// - - - Events - - -

	//Player finished or quit a level
	void OnLevelEnd (Notification note) {
		curLevel = null;

		//TODO return to menu or idk

		//We want to open panel showing
		//Victory or whatever
		//Next level button
		//Menu button
		//Retry button

		//TODO add manager:
		//Maybe show add at this point?
		//Set add timer to 5 min
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
}
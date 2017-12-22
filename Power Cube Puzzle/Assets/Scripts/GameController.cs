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

	void Start () {
		//This gameobject should not be destroyed
		DontDestroyOnLoad (gameObject);

		//Setup callbacks
		worldController.RegisterOnLevelEndCallback (OnLevelEnd);
		uiManager.LoadLevelRequest += LoadLevel;

		//Initialization
		worldController.Initialize ();
		uiManager.Initialize (worldController);

		//FIXME just temp
		worldController.InitializeLevel(new LevelInfo(2, 2));
	}

	void Update () {
		worldController.UpdateBoard ();
	}

	//Player finished or quit a level
	void OnLevelEnd (LevelInfo level) {
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

	LevelInfo curLevel;

	void LoadLevel (LevelInfo lastLevel) {
		//Only switch if we're done with level
		if (curLevel != null) {
			Debug.LogError ("Trying to load level before completing current level!");
			return;
		}
		curLevel = lastLevel;
		int nextWidth = Mathf.Clamp(lastLevel.Width + 1, 2, 10);
		int nextHeight = Mathf.Clamp(lastLevel.Width + 1, 2, 10);

		worldController.InitializeLevel (new LevelInfo(nextWidth, nextHeight));
	}
}
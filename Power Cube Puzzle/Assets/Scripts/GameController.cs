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
		//playerInput.OnSpaceDown += StartNextLevel;
		worldController.InitializeLevel(new LevelInfo(2, 2));
	}

	void Update () {
		worldController.UpdateBoard ();
	}

	//Player finished or quit a level
	void OnLevelEnd (LevelInfo level) {
		curLevel = null;

		//playerInput.OnSpaceDown += StartNextLevel;

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

	//FIXME should be startlevel (int level)
	//THIS IS TEMPORARY
	//Keep track of last level and use index to launch next
	//TODO check level is unlocked before starting
	/*void StartNextLevel () {
		playerInput.OnSpaceDown -= StartNextLevel;
		curLevel++;

		if (curLevel >= levelCollection.levels.Length) {
			//Completed all levels
			return;
		}else
			worldController.InitializeLevel(levelCollection.levels[curLevel]);
	}*/

	void LoadLevel (LevelInfo level) {
		//Only switch if we're done with level
		if (curLevel != null) {
			Debug.LogError ("Trying to load level before completing current level!");
			return;
		}
		curLevel = level;
		int nextWidth = Mathf.Clamp(level.Width + 1, 2, 10);
		int nextHeight = Mathf.Clamp(level.Width + 1, 2, 10);

		worldController.InitializeLevel (new LevelInfo(nextWidth, nextHeight));
	}
}

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

	LevelCollection levelCollection;

	void Start () {
		//This object should not be destroyed
		DontDestroyOnLoad (gameObject);

		levelCollection = new LevelCollection ();

		//Initialization
		worldController.Initialize ();

		//Setup callbacks
		worldController.RegisterOnLevelEndCallback (OnLevelEnd);

		//FIXME just temp
		StartNextLevel ();
	}

	void Update () {
		worldController.UpdateBoard ();
	}

	//Player finished or quit a level
	void OnLevelEnd () {
		//TODO return to menu or idk

		//We want to open panel showing
		//Victory or whatever
		//Next level button
		//Menu button
		//Retry button

		//TODO add manager:
		//Maybe show add at this point?
		//Set add timer to 5 min

		//FIXME temp
		StartNextLevel();
	}

	int curLevel = -1;

	void StartNextLevel () {
		curLevel++;

		if (curLevel == levelCollection.levels.Length) {
			//Completed all levels
			return;
		}else
			worldController.InitializeLevel(levelCollection.levels[curLevel]);
	}
}

using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System;
using UnityEngine.UI;

/// <summary>
/// The boss of all UI classes.
/// Manages UI classes like popup-boxes.
/// GameController communicates with this class.
/// </summary>
public class UIManager : MonoBehaviour {

	[SerializeField] Button nextLevelButton;

	public Action<LevelInfo> LoadLevelRequest;

	/// <summary>
	/// Sets up callbacks from UI buttons and classes
	///Called by GameController
	/// </summary>
	public void Initialize (WorldController worldController) {
		worldController.RegisterOnLevelStartCallback (OnLevelStart);
		worldController.RegisterOnLevelEndCallback (OnLevelEnd);


	}

	void Update () {
		
	}

	//- - - Game Events - - -

	void OnLevelStart (LevelInfo level) {
		//Remove old calls so we dont call multiple times
		nextLevelButton.onClick.RemoveAllListeners();
		nextLevelButton.interactable = false;
	}

	void OnLevelEnd (LevelInfo level) {
		//Add listenser to change to next level
		nextLevelButton.onClick.AddListener(delegate{ SelectLevel (level); });
		nextLevelButton.interactable = true;
	}

	//- - - Button events - - -

	void SelectLevel (LevelInfo lastLevel) {
		if (LoadLevelRequest != null)
			LoadLevelRequest (lastLevel);
	}
}

using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System;
using UnityEngine.UI;

/// <summary>
/// The boss of all UI classes.
/// Manages UI classes like popup-boxes.
/// GameController controls this class.
/// </summary>
public class UIManager : MonoBehaviour {

	[SerializeField] PanelManager panelManager;

	//Panels
	[SerializeField] Animator levelWonPanel;
	[SerializeField] Animator LevelLostPanel;

	[SerializeField] Button nextLevelButton;

	/// <summary>
	/// Sets up callbacks from UI buttons and classes
	/// Called by GameController
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

		//Close panels
		panelManager.CloseCurrent ();
	}

	void OnLevelEnd (LevelInfo level) {
		//Add listenser to change to next level
		nextLevelButton.onClick.AddListener(delegate{ SelectLevel (level); });
		nextLevelButton.interactable = true;

		//Open panel for player to switch level
		panelManager.OpenPanel (levelWonPanel);
	}

	//- - - Outside events - - -

	//GameController hooks onto this callback
	public Action<LevelInfo> LoadLevelRequest;

	void SelectLevel (LevelInfo lastLevel) {
		if (LoadLevelRequest != null)
			LoadLevelRequest (lastLevel);
	}
}

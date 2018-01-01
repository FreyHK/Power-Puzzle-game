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
	public void Initialize () {
		NotificationCenter.DefaultCenter.AddObserver(this, NotificationMessage.OnLevelStart);
		NotificationCenter.DefaultCenter.AddObserver(this, NotificationMessage.OnLevelEnd);
	}

	//- - - Game Events - - -

	void OnLevelStart (Notification data) {
		//Remove old calls so we dont call multiple times
		nextLevelButton.onClick.RemoveAllListeners();
		nextLevelButton.interactable = false;

		//Close panels
		panelManager.CloseCurrent ();
	}

	void OnLevelEnd (Notification note) {
		//Add listenser to change to next level
		nextLevelButton.onClick.AddListener(delegate{ SelectLevel ((LevelInfo)note.data["level"]); });
		nextLevelButton.interactable = true;

		//Open panel for player to switch level
		panelManager.OpenPanel (levelWonPanel);
	}

	//- - - Outside events - - -

	void SelectLevel (LevelInfo lastLevel) {
		Hashtable data = new Hashtable() { 
			{ "level", lastLevel }
		};
		NotificationCenter.DefaultCenter.PostNotification (this, NotificationMessage.UI_LoadLevelRequest, data);
	}
}

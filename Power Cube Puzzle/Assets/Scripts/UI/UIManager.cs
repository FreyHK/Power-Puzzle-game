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

	[SerializeField] GameController gameController;

	public void Initialize () {
		NotificationCenter.DefaultCenter.AddObserver(this, NotificationMessage.OnLevelStart);
		NotificationCenter.DefaultCenter.AddObserver(this, NotificationMessage.OnLevelComplete);
	}

	//- - - Game Events - - -

	void OnLevelStart (Notification note) {
	
	}

	void OnLevelComplete (Notification note) {

	}

	//- - - Button events - - -

	public void CurrentLevel () {
		gameController.StartCurrentLevel ();
	}

	public void NextLevel () {
		gameController.StartNextLevel ();
	}

	public void QuitLevel () {
		gameController.QuitLevel ();
	}
}

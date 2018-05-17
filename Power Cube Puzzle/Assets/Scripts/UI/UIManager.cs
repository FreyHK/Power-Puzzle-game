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
	[SerializeField] AdManager adManager; 

	[SerializeField] PauseMenu pauseMenu;

	public void Initialize () {
		NotificationCenter.DefaultCenter.AddObserver(this, NotificationMessage.OnLevelStart);
		NotificationCenter.DefaultCenter.AddObserver(this, NotificationMessage.OnLevelComplete);
	}

    #region Game Events
    void OnLevelStart (Notification note) {
		pauseMenu.SetButtonEnabled(true);
	}

	void OnLevelComplete (Notification note) {
		Invoke("ShowNextLevelUI", 2f);
		//Lock UI elements
		pauseMenu.SetButtonEnabled(false);
	}

	void ShowNextLevelUI () {
		pauseMenu.Toggle(true);

		//Maybe show ad
		adManager.TryShowAd();
	}
    #endregion

    #region Button events
    public void CurrentLevel () {
		gameController.StartCurrentLevel ();
	}

	public void NextLevel () {
		gameController.StartNextLevel ();
	}

	public void QuitLevel () {
		gameController.QuitLevel ();
	}
    #endregion
}

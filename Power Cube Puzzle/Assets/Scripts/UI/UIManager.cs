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

	[SerializeField] PauseMenu pauseMenu;

    AdManager adManager;

    public void Initialize (AdManager adManager) {
        this.adManager = adManager;
	}

    #region Game Events
    public void LevelStart () {
		pauseMenu.SetButtonEnabled(true);
	}

	public void LevelComplete () {
		//Lock UI elements
		pauseMenu.SetButtonEnabled(false);
        pauseMenu.SetOpen(true, true);

        //Show ad
        adManager.TryShowAd();
    }
    #endregion

    #region Button events
	public void NextLevel () {
        print("StartLevel UI Request");
		gameController.StartCurrentLevel ();
	}

	public void QuitLevel () {
		gameController.QuitLevel ();
	}
    #endregion
}

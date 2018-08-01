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

    public void Initialize () {

	}

    #region Game Events
    public void HidePausePanel () {
		pauseMenu.SetButtonEnabled(true);
	}

	public void ShowPausePanel () {
		//Lock UI elements
		pauseMenu.SetButtonEnabled(false);
        pauseMenu.SetOpen(true, true);
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

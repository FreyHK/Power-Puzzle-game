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

    [SerializeField] CameraController cameraController;

    [SerializeField] PauseMenu pauseMenu;

    #region Game Events
    public void HidePausePanel () {
		pauseMenu.SetOpenButtonEnabled(true);
        pauseMenu.HideBestTimeMarker();
    }

	public void ShowPausePanel () {
		//Lock UI elements
		pauseMenu.SetOpenButtonEnabled(false);
        pauseMenu.SetOpen(true, true);
    }

    public void ShowNewBestTimeMarker()
    {
        pauseMenu.ShowBestTimeMarker();
    }
    #endregion

    #region Button events
	public void NextLevel () {
        //print("StartLevel UI Request");
		gameController.StartCurrentLevel ();
	}

	public void QuitLevel () {
		gameController.QuitLevel ();
	}

    public void TogglePauseOverlay () {

        if (pauseMenu.IsOpen) {
            pauseMenu.SetOpen(false, false);
            cameraController.SetTargetZoom(gameController.curLevel.Width, gameController.curLevel.Height, false);
        } else {
            pauseMenu.SetOpen(true, false);
            cameraController.SetTargetZoom(gameController.curLevel.Width, gameController.curLevel.Height, true);
        }

    }
    #endregion
}

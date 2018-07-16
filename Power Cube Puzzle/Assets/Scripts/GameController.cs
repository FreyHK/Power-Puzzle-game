using System.Collections;
using System.Collections.Generic;
using UnityEngine;

/// <summary>
/// Controls everthing related to game manageament, level switching, loading etc.
/// Is the boss of every other script, but mostly controls worldcontroller
/// Should be the only class with a Start and Update methods besides visual classes
/// </summary>
public class GameController : MonoBehaviour {

	[SerializeField] WorldController worldController;
	[SerializeField] TileController tileController;
    [SerializeField] TutorialController tutorialController;
    [Space()]
	[SerializeField] CameraController cameraController;
	[SerializeField] UIManager uiManager;
	[SerializeField] PlayerInputController playerInput;
    [Space()]
    [SerializeField] SaveDataManager saveData;
    [SerializeField] LevelCollection levelCollection;

	void Start () {
		//Initialization
		worldController.Initialize (tileController);
        playerInput.Init(worldController);
        tutorialController.Init(saveData);

        uiManager.Initialize ();
		cameraController.Initialize ();
	}

    void Update () {
		if (GameOver == false) {

            if (worldController.levelEnded) {
                
                //Post notification
                Hashtable data = new Hashtable() { { "level", curLevel } };
                NotificationCenter.DefaultCenter.PostNotification(this, NotificationMessage.OnLevelComplete, data);
                
                GameOver = true;
                //Increase level index
                saveData.SaveLevelIndex(saveData.GetLevelIndex() + 1);

            } else {
                worldController.UpdateBoard();
                CurrentLevelTime += Time.deltaTime;
            }
        }
	}

	public LevelInfo curLevel { get; private set; }

	public static float CurrentLevelTime { get; private set; }
    
    //TODO shouldn't exist
    public static bool GameOver { get; private set; }

    public void StartCurrentLevel () {
		GameOver = false;
		CurrentLevelTime = 0f;
		curLevel = levelCollection.GetLevel (saveData.GetLevelIndex());
		worldController.InitializeLevel (curLevel);

        //Event Callback
        Hashtable data = new Hashtable() {
            { "level", curLevel }
        };
        NotificationCenter.DefaultCenter.PostNotification(this, NotificationMessage.OnLevelStart, data);
    }

	public void QuitLevel () {
		worldController.DestroyLevel ();
        GameOver = true;
    }
}
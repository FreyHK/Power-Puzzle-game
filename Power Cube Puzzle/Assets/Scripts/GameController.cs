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
    [Space()]
    [SerializeField] AdManager adManager;

    void Start () {
		//Initialization
		worldController.Initialize (tileController);
        playerInput.Init(worldController);
        tutorialController.Init(saveData);

        uiManager.Initialize (adManager);
		cameraController.Initialize ();

        state = GameState.InMenu;
    }

    void Update () {
        switch (state) {
            case GameState.InMenu:
                
                break;
            case GameState.InGame:
                StateInGame();
                break;
            case GameState.FinishedLevel:
                
                break;
        }
	}

    void StateInGame () {
        worldController.UpdateBoard();
        CurrentLevelTime += Time.deltaTime;

        if (worldController.IsGameOver() || Input.GetKeyDown(KeyCode.Space)) {
            print("Finished level");

            StartCoroutine(LevelComplete());
        }
    }

    IEnumerator LevelComplete () {
        state = GameState.FinishedLevel;

        //Post notification
        Hashtable data = new Hashtable() {
                    { "level", curLevel }
                };
        NotificationCenter.DefaultCenter.PostNotification(this, NotificationMessage.OnLevelComplete, data);

        //Increase level index
        saveData.SaveLevelIndex(saveData.GetLevelIndex() + 1);

        //Wait
        yield return new WaitForSeconds(2f);

        //Inform UI (opens panel)
        uiManager.LevelComplete();
    }

	public LevelInfo curLevel { get; private set; }

	public static float CurrentLevelTime { get; private set; }
    
    enum GameState {
        //Inside the main menu
        InMenu,
        //Playing a level (but hasn't completed it)
        InGame,
        //Completed a level and is waiting to go to menu or new level
        FinishedLevel
    }

    [SerializeField] GameState state;

    public void StartCurrentLevel () {
        if (state == GameState.InGame) {
            Debug.LogError("Trying to quit level whilst already in level.");
            return;
        }
        print("StartCurrentLevel");

        //Start level
        curLevel = levelCollection.GetLevel (saveData.GetLevelIndex());
		worldController.InitializeLevel (curLevel);
        //Set flags
        CurrentLevelTime = 0f;
        state = GameState.InGame;

        uiManager.LevelStart();

        //Event Callback
        Hashtable data = new Hashtable() {
            { "level", curLevel }
        };
        NotificationCenter.DefaultCenter.PostNotification(this, NotificationMessage.OnLevelStart, data);
    }

	public void QuitLevel () {
        if (state != GameState.InGame) {
            Debug.LogError("Trying to quit level whilst not in game.");
            return;
        }
        print("QuitLevel");
        //worldController.DestroyLevel ();
        state = GameState.InMenu;
    }
}
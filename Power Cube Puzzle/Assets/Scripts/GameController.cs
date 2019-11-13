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
    [Header("Data")]
    [SerializeField] LeaderBoardController leaderBoardController;
    [SerializeField] SaveDataManager saveData;
    [SerializeField] LevelCollection levelCollection;
    [Space()]
    [SerializeField] AdManager adManager;
    [Header("Scene")]
    [SerializeField] LevelSlide levelSlide;

    enum GameState {
        //Inside the main menu
        InMenu,
        //Playing a level (but hasn't completed it)
        InGame,
        //Completed a level and is waiting to go to menu or new level
        FinishedLevel
    }

    [SerializeField] GameState state;

    public LevelInfo curLevel { get; private set; }
    public static float CurrentLevelTime { get; private set; }

    void Start () {
		//Initialization
		worldController.Initialize (tileController);
        playerInput.Init(worldController);
        tutorialController.Init(saveData);
        
		cameraController.Initialize ();

        state = GameState.InMenu;
    }

    void Update () {
        switch (state) {
            case GameState.InMenu:
                
                break;
            case GameState.InGame:
                State_InGame();
                break;
            case GameState.FinishedLevel:
                
                break;
        }
	}

    void State_InGame () {
        playerInput.DoUpdate();
        worldController.UpdateBoard();
        CurrentLevelTime += Time.deltaTime;

        if (worldController.IsGameOver() || Input.GetKeyDown(KeyCode.Space)) {
            StartCoroutine(LevelComplete());
        }
    }

    public void StartCurrentLevel() {
        if (state == GameState.InGame) {
            Debug.LogError("Trying to quit level whilst already in level.");
            return;
        }
        StartCoroutine(StartLevel());
    }

    public IEnumerator StartLevel() {
        //Did we just play a level?
        if (state == GameState.FinishedLevel) {

            //Hide previous level (animation)
            levelSlide.SlideOut();

            //Wait for animation
            yield return new WaitForSeconds(2f);
        }
        //Hide panel
        uiManager.HidePausePanel();
        
        //Create tile map + puzzle
        curLevel = levelCollection.GetLevel(saveData.GetLevelIndex());
        worldController.InitializeLevel(curLevel);

        //Camera needs to be zoomed out (in order to reset correctly)
        cameraController.SetTargetZoom(curLevel.Width, curLevel.Height, true);

        //Broadcast event
        Hashtable data = new Hashtable() {
            { "level", curLevel }
        };
        NotificationCenter.DefaultCenter.PostNotification(this, NotificationMessage.OnLevelStart, data);

        //Show level (takes 2 sec.)
        levelSlide.SlideIn();

        //Wait
        yield return new WaitForSeconds(1.5f);

        //Camera zoom in
        cameraController.SetTargetZoom(curLevel.Width, curLevel.Height);

        //Set low-pass off
        SoundManager.Instance.SetAudioFilter(false);

        //Set correct state
        state = GameState.InGame;

        CurrentLevelTime = 0f;
    }

    IEnumerator LevelComplete () {
        state = GameState.FinishedLevel;

        //Post notification
        Hashtable data = new Hashtable() {
                    { "level", curLevel }
                };
        NotificationCenter.DefaultCenter.PostNotification(this, NotificationMessage.OnLevelComplete, data);

        //Update leaderboard
        leaderBoardController.SubmitScores(CurrentLevelTime, saveData.GetLevelIndex());

        //Increase level index
        saveData.SaveLevelIndex(saveData.GetLevelIndex() + 1);

        //Wait for animations
        yield return new WaitForSeconds(2f);
        //Zoom out
        cameraController.SetTargetZoom(curLevel.Width, curLevel.Height, true);
        //Wait for zoom
        yield return new WaitForSeconds(1f);
        //Inform UI (opens panel)
        uiManager.ShowPausePanel();

        //Change audio filter
        SoundManager.Instance.SetAudioFilter(true);

        //Show ad?
        adManager.TryShowAd();
    }

	public void QuitLevel () {
        if (state != GameState.InGame && state != GameState.FinishedLevel) {
            Debug.LogError("Trying to quit level whilst not in game.");
            return;
        }
        worldController.DestroyLevel ();

        state = GameState.InMenu;

        //Change audio filter
        SoundManager.Instance.SetAudioFilter(false);
    }
}
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

/// <summary>
/// Controls everthing related to game managedment, level switching, loading etc.
/// Is the boss of every other scripts, but mostly controls worldcontroller
/// Should be the only class with a Start method besides visual classes
/// </summary>
public class GameController : MonoBehaviour {

	[SerializeField] WorldController worldController;
	[SerializeField] TileController tileController;
	[SerializeField] TimedTileController timedTileController;
	[Space()]
	[SerializeField] CameraController cameraController;
	[SerializeField] UIManager uiManager;
	[SerializeField] PlayerInputController playerInput;

	[SerializeField] LevelCollection levelCollection;

    public static GameController Instance;

	void Start () {
        Instance = this;

		//The manager root gameobject should not be destroyed
		DontDestroyOnLoad (transform.root.gameObject);

		//Setup callbacks
		NotificationCenter.DefaultCenter.AddObserver(this, NotificationMessage.OnLevelStart);
		NotificationCenter.DefaultCenter.AddObserver(this, NotificationMessage.OnLevelComplete);
		NotificationCenter.DefaultCenter.AddObserver(this, NotificationMessage.OnLevelQuit);

		//Initialization
		worldController.Initialize (tileController);
		timedTileController.Initialize (tileController);

		uiManager.Initialize ();
		cameraController.Initialize ();

        LevelCount = PlayerPrefs.GetInt("CurrentLevelIndex", 0);
	}

    private void OnDestroy() {
        PlayerPrefs.SetInt("CurrentLevelIndex", LevelCount);
    }

    public void ClearSaveData () {
        PlayerPrefs.SetInt("CurrentLevelIndex", 0);
        LevelCount = 0;
    }

    void Update () {
		if (curLevel != null) {
			worldController.UpdateBoard ();
			CurrentLevelTime += Time.deltaTime;
		}
	}

	public LevelInfo curLevel;
	public int LevelCount;

	public static float CurrentLevelTime;
	public static bool GameOver = false;

	public void StartCurrentLevel () {
		GameOver = false;
		CurrentLevelTime = 0f;
		curLevel = levelCollection.GetLevel (LevelCount);
		worldController.InitializeLevel (curLevel);
	}

	public void StartNextLevel () {
		GameOver = false;
		CurrentLevelTime = 0f;
		curLevel = levelCollection.GetLevel (LevelCount);
		worldController.InitializeLevel (curLevel);
	}

	public void QuitLevel () {
		worldController.DestroyLevel ();
	}

	// - - - Events - - -

	//Player finished a level
	void OnLevelComplete (Notification note) {
		curLevel = null;
        GameOver = true;
        LevelCount++;
	}

	//Player quit a level
	void OnLevelQuit (Notification note) {
		curLevel = null;
	}
}
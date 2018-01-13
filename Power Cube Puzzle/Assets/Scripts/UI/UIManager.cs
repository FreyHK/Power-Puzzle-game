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
	[SerializeField] Button quitLevelButton;

	[SerializeField] ScrollRectSnap levelCardScrollSnap;
	[SerializeField] Transform levelCardParent;

	[Header("Prefabs")]
	[SerializeField] LevelCollectionUI levelCardPrefab;

	public void Initialize (LevelCollection[] levels) {
		NotificationCenter.DefaultCenter.AddObserver(this, NotificationMessage.OnLevelStart);
		NotificationCenter.DefaultCenter.AddObserver(this, NotificationMessage.OnLevelComplete);

		RectTransform[] cardTransforms = new RectTransform[levels.Length];
		for (int i = 0; i < levels.Length; i++) {
			LevelCollectionUI lc = Instantiate (levelCardPrefab, levelCardParent);
			cardTransforms [i] = lc.GetComponent<RectTransform> ();

			LevelCollection level = levels [i];
			lc.levelCollection = level;
			//Setup callback
			lc.startButton.onClick.AddListener ( delegate{ SelectLevelCollection(level); });
		}
		levelCardScrollSnap.Initialize (cardTransforms);
	}

	//- - - Game Events - - -

	void OnLevelStart (Notification note) {
		//Remove old calls so we dont call multiple times
		nextLevelButton.onClick.RemoveAllListeners();

		nextLevelButton.interactable = false;

		//Setup quit button's callback
		quitLevelButton.onClick.AddListener (delegate{ QuitLevel((LevelInfo)note.data["level"]); });

		//Close panels
		panelManager.CloseCurrent ();
	}

	void OnLevelComplete (Notification note) {
		//Add listenser to change to next level
		nextLevelButton.onClick.AddListener(delegate{ SelectLevel ((LevelInfo)note.data["level"]); });
		nextLevelButton.interactable = true;

		//Open panel for player to switch level
		panelManager.OpenPanel (levelWonPanel);
	}

	//- - - Outside events - - -

	void SelectLevelCollection (LevelCollection level) {
		Hashtable data = new Hashtable() { 
			{ "LevelCollection", level }
		};
		NotificationCenter.DefaultCenter.PostNotification (this, NotificationMessage.UI_LoadLevelCollectionRequest, data);
	}

	void SelectLevel (LevelInfo lastLevel) {
		Hashtable data = new Hashtable() { 
			{ "level", lastLevel }
		};
		NotificationCenter.DefaultCenter.PostNotification (this, NotificationMessage.UI_LoadLevelRequest, data);
	}

	void QuitLevel (LevelInfo lastLevel) {
		Hashtable data = new Hashtable() { 
			{ "level", lastLevel }
		};
		NotificationCenter.DefaultCenter.PostNotification (this, NotificationMessage.OnLevelQuit, data);
	}
}

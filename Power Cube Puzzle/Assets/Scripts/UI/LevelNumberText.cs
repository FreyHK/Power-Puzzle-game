using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using TMPro;

public class LevelNumberText : MonoBehaviour {

    public SaveDataManager saveData;

    public TextMeshPro text;

    void Start() {
        GameController.OnLevelStart += OnLevelStart;
        GameController.OnLevelComplete += OnLevelComplete;
        //NotificationCenter.DefaultCenter.AddObserver(this, NotificationMessage.OnLevelStart);
        //NotificationCenter.DefaultCenter.AddObserver(this, NotificationMessage.OnLevelComplete);
    }

    private void OnDestroy()
    {
        GameController.OnLevelStart -= OnLevelStart;
        GameController.OnLevelComplete -= OnLevelComplete;
    }

    void OnLevelStart (LevelInfo level) {
        text.enabled = true;
        text.text = (saveData.GetLevelIndex() + 1).ToString();
    }

    void OnLevelComplete (LevelInfo level) {
        text.enabled = false;
    }
}

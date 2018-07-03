using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using TMPro;

public class LevelNumberText : MonoBehaviour {

    public GameController GameController;

    public TextMeshPro text;

    void Start() {
        NotificationCenter.DefaultCenter.AddObserver(this, NotificationMessage.OnLevelStart);
        NotificationCenter.DefaultCenter.AddObserver(this, NotificationMessage.OnLevelComplete);
    }

    void OnLevelStart () {
        text.enabled = true;
        text.text = (GameController.LevelCount + 1).ToString();
    }

    void OnLevelComplete () {
        text.enabled = false;
    }
}

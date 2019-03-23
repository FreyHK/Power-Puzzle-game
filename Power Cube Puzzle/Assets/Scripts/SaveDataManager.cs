using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class SaveDataManager : MonoBehaviour {

    int levelIndex;

    private void Start() {
        GetLevelIndex();
    }

    public int GetLevelIndex () {
        //Load save
        levelIndex = PlayerPrefs.GetInt("CurrentLevelIndex", 0);
        return levelIndex;
    }

    public void SaveLevelIndex (int lvl) {
        //print("SaveLevelIndex: " + lvl);

        levelIndex = lvl;
        PlayerPrefs.SetInt("CurrentLevelIndex", levelIndex);
    }

    public void ClearSaveData() {
        print("ClearSaveData");

        SaveLevelIndex(0);
        //Reset game
        SceneManager.LoadScene(0);
    }
}

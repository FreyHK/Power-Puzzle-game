using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class SaveDataManager : MonoBehaviour {

    int levelIndex;

    [SerializeField] bool PlayMaxLevel = false;

    private void Start() {
        if (PlayMaxLevel)
        {
            PlayerPrefs.SetInt("CurrentLevelIndex", 25);
            return;
        }

        GetLevelIndex();
    }

    public int GetLevelIndex () {
        //Load save
        levelIndex = PlayerPrefs.GetInt("CurrentLevelIndex", 0);
        return levelIndex;
    }

    public void SaveLevelIndex (int lvl) {
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

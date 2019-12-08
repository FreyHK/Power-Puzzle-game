using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class TutorialController : MonoBehaviour {

    SaveDataManager saveData;

    public void Init(SaveDataManager saveData) {
        this.saveData = saveData;

        GameController.OnLevelStart += OnLevelStart;
        GameController.OnLevelComplete += OnLevelComplete;
        //NotificationCenter.DefaultCenter.AddObserver(this, NotificationMessage.OnLevelStart);
        //NotificationCenter.DefaultCenter.AddObserver(this, NotificationMessage.OnLevelComplete);

        //Hide all
        for (int i = 0; i < tutorials.Length; i++)
        {
            tutorials[i].gameObject.SetActive(false);
        }
    }

    private void OnDestroy()
    {
        GameController.OnLevelStart -= OnLevelStart;
        GameController.OnLevelComplete -= OnLevelComplete;
    }

    public SpriteFader[] tutorials;

    int i = 0;

    // - - - Events - - -
    
    //Player starts a level
    void OnLevelStart(LevelInfo level)
    {
        i = saveData.GetLevelIndex();
        //Check if tutorial for this level

        if (i < tutorials.Length)
        {
            //Fade in
            tutorials[i].FadeIn(1f);
        }
    }

    //Player finished a level
    void OnLevelComplete(LevelInfo level)
    {
        //Hide current tutorial
        if (i < tutorials.Length)
        {
            //Fade out
            tutorials[i].FadeOut(.75f, true);
        }
    }
}

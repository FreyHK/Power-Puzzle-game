using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class TutorialController : MonoBehaviour {
    
	void Start () {
        NotificationCenter.DefaultCenter.AddObserver(this, NotificationMessage.OnLevelStart);
        NotificationCenter.DefaultCenter.AddObserver(this, NotificationMessage.OnLevelComplete);

        //Hide all
        for (int i = 0; i < tutorials.Length; i++)
        {
            tutorials[i].gameObject.SetActive(false);
        }
    }

    public SpriteFader[] tutorials;

    int i = 0;

    // - - - Events - - -
    
    //Player starts a level
    void OnLevelStart(Notification note)
    {
        i = GameController.Instance.LevelCount;
        //Check if tutorial for this level

        if (i < tutorials.Length)
        {
            //Fade in
            tutorials[i].FadeIn(1f);
        }
    }

    //Player finished a level
    void OnLevelComplete(Notification note)
    {
        //Hide current tutorial
        if (i < tutorials.Length)
        {
            //Fade out
            tutorials[i].FadeOut(.75f, true);
        }
    }
}

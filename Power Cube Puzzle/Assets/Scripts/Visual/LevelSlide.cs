using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class LevelSlide : MonoBehaviour {

    public Animator anim;

    void Start() {
        NotificationCenter.DefaultCenter.AddObserver(this, NotificationMessage.OnLevelStart);
        NotificationCenter.DefaultCenter.AddObserver(this, NotificationMessage.OnLevelComplete);
    }

    void OnLevelStart () {
        anim.SetTrigger("SlideIn");
    }

    void OnLevelComplete() {
        anim.SetTrigger("SlideOut");
    }
}

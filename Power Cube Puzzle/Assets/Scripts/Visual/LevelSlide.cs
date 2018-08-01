using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class LevelSlide : MonoBehaviour {

    public Animator anim;

    public void SlideIn() {
        anim.SetTrigger("SlideIn");
    }

    public void SlideOut() {
        anim.SetTrigger("SlideOut");
    }
}

using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class StartAnimation : MonoBehaviour {

	public string startAnimationName = "Close";

    Animator anim;

    void Awake () {
        anim = GetComponent<Animator>();
        anim.Play(startAnimationName, 0, 1f);
	}

    public void SetBoolOpen(bool v) {
        anim.SetBool("Open", v);
    }
}

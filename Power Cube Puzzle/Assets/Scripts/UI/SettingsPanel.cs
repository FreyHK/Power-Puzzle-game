using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class SettingsPanel : MonoBehaviour {

    public Animator anim;

	void Start () {
        anim.Play("SettingsClose", 0, 1f);
    }
}

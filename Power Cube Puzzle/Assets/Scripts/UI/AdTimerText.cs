using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using TMPro;

public class AdTimerText : MonoBehaviour {

    public AdManager adManager;
    public TextMeshProUGUI text;
	
	void Update () {
        text.text = "Ad in: " + (AdManager.AdWaitTime - adManager.cooldown).ToString("0");
    }
}

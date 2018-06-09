using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Advertisements;

public class AdManager : MonoBehaviour {

    const float AdWaitTime = 200f;

    void Start () {
        cooldown = PlayerPrefs.GetFloat ("AdCooldown", AdWaitTime);
	}
	
	float cooldown = 0;

	void Update () {
		cooldown -= Time.deltaTime;
	}

	public void TryShowAd () {
		if (cooldown <= 0 && Advertisement.IsReady ()) {
			Advertisement.Show ();
			cooldown = AdWaitTime;
		}
	}
}

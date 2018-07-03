using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Advertisements;


public class AdManager : MonoBehaviour {

    #if UNITY_IOS
    private string gameId = "1735021";
    #elif UNITY_ANDROID
    private string gameId = "1735020";
    #endif
    
    public const float AdWaitTime = 200f;

    void Start() {
	    if (Advertisement.isSupported) {
            Advertisement.Initialize (gameId, true);
        }
        cooldown = (float)PlayerPrefs.GetInt("AdCooldown", 0);
    }

    private void OnDestroy() {
        PlayerPrefs.SetInt("AdCooldown", (int)cooldown);
    }

    public float cooldown { get; private set; }

	void Update () {
		cooldown += Time.deltaTime;
	}

	public void TryShowAd () {
		if (cooldown > AdWaitTime && Advertisement.IsReady ()) {
			Advertisement.Show ();
			cooldown = 0f;
		}
	}
}

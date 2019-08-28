using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class SoundManager : MonoBehaviour {

    public static SoundManager Instance;

    [System.Serializable]
    class SoundClip {
        public string name = "Click";
        public AudioClip[] clips = new AudioClip[1];
        [HideInInspector] public AudioSource source;
    }

    [SerializeField] SoundClip[] clips;
    
    [SerializeField] Image soundToggleImage;
    [SerializeField] Sprite[] soundToggleSprites;

    bool soundOn = true;

    void Start () {
		Instance = this;

        for (int i = 0; i < clips.Length; i++)
        {
            clips[i].source = gameObject.AddComponent<AudioSource>();
        }

        soundOn = PlayerPrefs.GetInt("SoundOn", 0) == 0;
        UpdateSound();
    }

    void OnDestroy()
    {
        PlayerPrefs.SetInt("SoundOn", soundOn ? 0 : 1);
    }

    public void ToggleSound() {
        soundOn = !soundOn;
        UpdateSound();
    }

    public void Play(string name) {
        //Find sound
        for (int i = 0; i < clips.Length; i++) {
            if (clips[i].name == name) {
                //Choose random clip
                int clipIndex = Random.Range(0, clips[i].clips.Length);
                //Assign clip
                clips[i].source.clip = clips[i].clips[clipIndex];

                clips[i].source.Play();
            }
        }
    }

    void UpdateSound()
    {
        for (int i = 0; i < clips.Length; i++)
        {
            clips[i].source.mute = !soundOn;
        }

        soundToggleImage.sprite = soundToggleSprites[soundOn ? 0 : 1];
    }
}

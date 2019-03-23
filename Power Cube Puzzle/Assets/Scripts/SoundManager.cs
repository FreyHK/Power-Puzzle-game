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
    }

    [SerializeField] SoundClip[] sounds;
    
    [SerializeField] AudioSource MasterSource;
    
    [SerializeField] Image soundToggleImage;
    [SerializeField] Sprite[] soundToggleSprites;

    bool musicOn = true;
    bool soundOn = true;

    void Start () {
		Instance = this;
        
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
        for (int i = 0; i < sounds.Length; i++) {
            if (sounds[i].name == name) {
                //Play
                MasterSource.PlayOneShot(sounds[i].clips[Random.Range(0, sounds[i].clips.Length - 1)]);
                return;
            }
        }
    }

    void UpdateSound()
    {
        if (MasterSource != null)
            MasterSource.mute = !soundOn;
        
        soundToggleImage.sprite = soundToggleSprites[soundOn ? 0 : 1];
    }
}

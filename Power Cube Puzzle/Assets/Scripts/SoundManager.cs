using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class SoundManager : MonoBehaviour {

    [System.Serializable]
    class SoundClip {
        public string name = "Click";
        public AudioClip[] clips = new AudioClip[1];
    }

    [SerializeField] SoundClip[] sounds;

    public static SoundManager Instance;

    [SerializeField] AudioSource MusicSource;
    [SerializeField] AudioSource MasterSource;

    [SerializeField] Image musicToggleImage;
    [SerializeField] Sprite[] musicToggleSprites;
    [SerializeField] Image soundToggleImage;
    [SerializeField] Sprite[] soundToggleSprites;

    void Start () {
		Instance = this;

        musicOn = PlayerPrefs.GetInt("MusicOn", 0) == 0;
        soundOn = PlayerPrefs.GetInt("SoundOn", 0) == 0;
        UpdateSound();
    }

    bool musicOn = true;
    bool soundOn = true;

    void OnDestroy()
    {
        PlayerPrefs.SetInt("MusicOn", musicOn ? 0 : 1);
        PlayerPrefs.SetInt("SoundOn", soundOn ? 0 : 1);
    }

    void UpdateSound()
    {
        if (MusicSource != null)
            MusicSource.mute = !musicOn;
        if (MasterSource != null)
            MasterSource.mute = !soundOn;

        musicToggleImage.sprite = musicToggleSprites[musicOn ? 0 : 1];
        soundToggleImage.sprite = soundToggleSprites[soundOn ? 0 : 1];
    }

    public void ToggleMusic()
    {
        musicOn = !musicOn;
        UpdateSound();
    }

    public void ToggleSound()
    {
        soundOn = !soundOn;
        UpdateSound();
    }

    public void Play (string name) {
		//Find sound
		for (int i = 0; i < sounds.Length; i++) {
			if (sounds [i].name == name) {
                //Play
                MasterSource.PlayOneShot (sounds [i].clips[Random.Range(0, sounds[i].clips.Length-1)]);
				return;
			}
		}
	}
}

using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.Audio;

public class SoundManager : MonoBehaviour {

    public static SoundManager Instance;

    [System.Serializable]
    class SoundClip {
        public string name = "Click";
        [Range(0f, 1f)]
        public float volume = .5f;
        public bool looping = false;
        [Space()]
        public AudioClip[] clips = new AudioClip[1];

        [HideInInspector] public AudioSource source;
    }

    [SerializeField] SoundClip[] clips;

    [Header("Audio Mixing")]
    [SerializeField] AudioMixerGroup mixerGroup;
    [SerializeField] AudioMixerSnapshot defaultSnapshot;
    [SerializeField] AudioMixerSnapshot lowPassSnapshot;
    [Space()]
    [SerializeField] Image soundToggleImage;
    [SerializeField] Sprite[] soundToggleSprites;

    bool soundOn = true;

    void Start () {
		Instance = this;

        for (int i = 0; i < clips.Length; i++)
        {
            AudioSource s = gameObject.AddComponent<AudioSource>();
            clips[i].source = s;
            s.outputAudioMixerGroup = mixerGroup;
            s.volume = clips[i].volume;
            s.loop = clips[i].looping;
        }

        soundOn = PlayerPrefs.GetInt("SoundOn", 0) == 0;
        UpdateSoundToggle();

        //FIXME temp
        Play("BackgroundTrack");
    }

    void OnDestroy()
    {
        PlayerPrefs.SetInt("SoundOn", soundOn ? 0 : 1);
    }

    public void ToggleSound() {
        soundOn = !soundOn;
        UpdateSoundToggle();
    }

    public void Play(string name) {
        //Find sound
        for (int i = 0; i < clips.Length; i++) {
            if (clips[i].name == name) {
                //Choose random clip
                int clipIndex = Random.Range(0, clips[i].clips.Length);
                clips[i].source.clip = clips[i].clips[clipIndex];

                clips[i].source.Play();
            }
        }
    }

    public void SetAudioFilter (bool lowpassOn)
    {
        if (lowpassOn)
            lowPassSnapshot.TransitionTo(0.5f);
        else
            defaultSnapshot.TransitionTo(0.5f);
    }

    void UpdateSoundToggle()
    {
        for (int i = 0; i < clips.Length; i++)
        {
            clips[i].source.mute = !soundOn;
        }

        soundToggleImage.sprite = soundToggleSprites[soundOn ? 0 : 1];
    }
}

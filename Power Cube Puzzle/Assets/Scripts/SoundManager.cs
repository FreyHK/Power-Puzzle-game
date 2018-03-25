using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class SoundManager : MonoBehaviour {

	[System.Serializable]
	class SoundClip {
		public string name = "Click";
		public AudioClip[] clips = new AudioClip[1];
	}

	[SerializeField] SoundClip[] sounds;

	public static SoundManager Instance;

	AudioSource source;

	void Start () {
		Instance = this;
		source = GetComponent<AudioSource> ();
	}

	public void Play (string name) {
		//Find sound
		for (int i = 0; i < sounds.Length; i++) {
			if (sounds [i].name == name) {
				//Play
				source.PlayOneShot (sounds [i].clips[Random.Range(0, sounds[i].clips.Length-1)]);
				return;
			}
		}
	}
}

using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using TMPro;

public class LevelTimeText : MonoBehaviour {

	[SerializeField] TextMeshProUGUI text;

	void Update () {
		if (GameController.GameOver)
			return;
		
		float t = GameController.CurrentLevelTime;
		//Minutes
		int m = Mathf.FloorToInt(t/60f);
		string min = (m < 10 ? "0" : "") + m.ToString();

		int s = (int)(t % 60);
		string sec = (s < 10 ? "0" : "") + s.ToString();

		text.text = "Time: " + min + ":" + sec;
	}
}

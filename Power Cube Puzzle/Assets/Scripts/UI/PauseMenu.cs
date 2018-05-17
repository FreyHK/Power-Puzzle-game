using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using TMPro;
using UnityEngine.UI;

public class PauseMenu : MonoBehaviour {

	[SerializeField] PanelAnimator anim;
    [SerializeField] TextMeshProUGUI headerText;
    [SerializeField] TextMeshProUGUI timerText;
    [SerializeField] GameObject nextButton;

    void Start () {
		
	}
	
	void Update () {
		if (!GameController.GameOver)
			UpdateTimer ();
	}

	void UpdateTimer () {
		float t = GameController.CurrentLevelTime;
		//Minutes
		int m = Mathf.FloorToInt(t/60f);
		string min = (m < 10 ? "0" : "") + m.ToString();

		int s = (int)(t % 60);
		string sec = (s < 10 ? "0" : "") + s.ToString();

        timerText.text = "Time: " + min + ":" + sec;
	}

	public void Toggle (bool nextLevel) {
        //Change text depending on game context
        if (nextLevel) {
            headerText.text = "Level " + (GameController.Instance.LevelCount + 1).ToString() + " Completed!";
            nextButton.SetActive(true);
        } else {
            headerText.text = "Level " + (GameController.Instance.LevelCount + 1).ToString();
            nextButton.SetActive(false);
        }

        anim.ToggleOpen ();
	}

	public void SetButtonEnabled (bool v) {
		anim.SetButtonEnabled (v);
	}
}


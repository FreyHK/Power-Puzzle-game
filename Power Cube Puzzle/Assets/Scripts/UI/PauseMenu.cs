using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using TMPro;
using UnityEngine.UI;

public class PauseMenu : MonoBehaviour {

    [SerializeField] SaveDataManager saveData;
    [SerializeField] Animator anim;
    [SerializeField] TextMeshProUGUI headerText;
    [SerializeField] TextMeshProUGUI timerText;

    [SerializeField] Button OpenButton;
    [SerializeField] GameObject nextButton;

    bool isOpen;

	public void SetOpen (bool open, bool nextLevel) {
        //Change text depending on game context
        if (nextLevel) {
            headerText.text = "Level " + (saveData.GetLevelIndex()).ToString() + " Completed!";
            nextButton.SetActive(true);
        } else {
            headerText.text = "Level " + (saveData.GetLevelIndex() + 1).ToString();
            nextButton.SetActive(false);
        }
        //Show timer
        if (open)
            UpdateTimer();

        //Display animation
        anim.SetBool("Open", open);
        isOpen = open;
    }

    void UpdateTimer () {
        float t = GameController.CurrentLevelTime;

        int m = Mathf.FloorToInt(t / 60f);
        string min = (m < 10 ? "0" : "") + m.ToString();

        int s = (int)(t % 60);
        string sec = (s < 10 ? "0" : "") + s.ToString();

        timerText.text = "Time: " + min + ":" + sec;
    }

	public void SetButtonEnabled (bool v) {
        OpenButton.interactable = v;
    }

    //Called by the open/close button
    public void ToggleOpen () {
        SetOpen(!isOpen, false);
    }
}


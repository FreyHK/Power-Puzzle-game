using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using TMPro;
using UnityEngine.UI;
using DG.Tweening;

public class PauseMenu : MonoBehaviour {

    [SerializeField] SaveDataManager saveData;
    [SerializeField] Animator anim;
    [SerializeField] TextMeshProUGUI headerText;
    [SerializeField] TextMeshProUGUI timerText;

    [SerializeField] Button OpenButton;
    [SerializeField] GameObject nextButton;

    public bool IsOpen { get; private set; }

	public void SetOpen (bool open, bool nextLevel) {
        //Change text depending on game context
        if (nextLevel) {
            headerText.text = "LEVEL " + (saveData.GetLevelIndex()).ToString() + " COMPLETE";
            nextButton.SetActive(true);
        } else {
            headerText.text = "LEVEL " + (saveData.GetLevelIndex() + 1).ToString();
            nextButton.SetActive(false);
        }

        //Display animation
        anim.SetBool("Open", open);
        IsOpen = open;
    }

    private void Update() {
        if (IsOpen)
            UpdateTimer();
    }

    void UpdateTimer () {
        float t = GameController.CurrentLevelTime;

        int m = Mathf.FloorToInt(t / 60f);
        string min = (m < 10 ? "0" : "") + m.ToString();

        int s = (int)(t % 60);
        string sec = (s < 10 ? "0" : "") + s.ToString();

        timerText.text = "TIME: " + min + ":" + sec;
    }

	public void SetOpenButtonEnabled (bool v) {
        OpenButton.interactable = v;
    }

    public RectTransform BestTimeMarker;

    public void ShowBestTimeMarker()
    {
        BestTimeMarker.gameObject.SetActive(true);
    }

    public void HideBestTimeMarker()
    {
        BestTimeMarker.gameObject.SetActive(false);
    }
}


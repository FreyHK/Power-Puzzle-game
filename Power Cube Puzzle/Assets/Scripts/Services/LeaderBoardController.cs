using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using CloudOnce;

public class LeaderBoardController : MonoBehaviour
{

    [SerializeField] UIManager UIManager;

    float bestTime;

    void Start()
    {
        Cloud.OnInitializeComplete += CloudOnceInitializeComplete;
        Cloud.Initialize(false, true);

        bestTime = PlayerPrefs.GetFloat("BestTime", 99999f);
        print("Best time: " + bestTime);
    }

    private void OnDestroy()
    {
        PlayerPrefs.SetFloat("BestTime", bestTime);
    }

    void CloudOnceInitializeComplete()
    {
        Cloud.OnInitializeComplete -= CloudOnceInitializeComplete;
        Debug.Log("CloudOnceInitializeComplete");
    }

    public void SubmitScores(float timeScore, int levelProgressScore)
    {
        //ONLY submit highscore for the levels that are max size
        if (levelProgressScore >= 23) {

            if (timeScore < bestTime)
            {
                bestTime = timeScore;
                UIManager.ShowNewBestTimeMarker();
            }

            long timeLong = (long)(timeScore * 100);
            Leaderboards.BestTime.SubmitScore(timeLong);
        }

        Leaderboards.LevelProgress.SubmitScore(levelProgressScore);
    }
}

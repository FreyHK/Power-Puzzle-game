using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class LevelCollectionUI : ThemedUI {

	public LevelCollection levelCollection;

	//FIXME should be loaded from somewhere (playerprefs)
	[SerializeField] bool unlocked = true;

	[SerializeField] Image backgroundImage;
	[SerializeField] Text titleText;

	//Public so uimanager can access
	public Button startButton;

	//Shows if a levelcollection is locked
	[SerializeField] Image lockedImage;
	[SerializeField] Image playableImage;

	[SerializeField] Image progressBarFillImage;
	[SerializeField] Text progressBarText;

	void Start () {
		//Doesn't change during game
		titleText.text = levelCollection.DisplayName;

		UpdateProgressBar ();
	}

	//FIXME not every frame pls
	void Update () {
		UpdateUnlocked ();
	}

	void UpdateProgressBar () {
		float a = (float)levelCollection.currentLevelIndex / levelCollection.LevelCount;
		progressBarFillImage.fillAmount = a;
		progressBarText.text = levelCollection.currentLevelIndex.ToString() + "/" + levelCollection.LevelCount.ToString();
	}

	void UpdateUnlocked () {
		//Check if available now, but wasn't before

		startButton.gameObject.SetActive (unlocked);
		lockedImage.enabled = !unlocked;
		playableImage.enabled = unlocked;
	}

	public override void UpdateTheme (Color[] themeColors) {
		backgroundImage.color = themeColors [0];

		ColorBlock buttonColors = new ColorBlock();
		buttonColors.colorMultiplier = 1f;
		buttonColors.normalColor = themeColors [1];
		buttonColors.pressedColor = themeColors [1];
		buttonColors.highlightedColor = themeColors [1];

		startButton.colors = buttonColors;

		progressBarFillImage.color = themeColors [2];
	}
}

using System.Collections;
using System.Collections.Generic;
using UnityEngine;

/// <summary>
/// Controls data for a certain type of levels in the game.
/// </summary>
public class LevelCollection : MonoBehaviour {

	const int minLevelWidth = 2;
	const int minLevelHeight = 3;
	const int maxLevelWidth = 7;
	const int maxLevelHeight = 8;

	[Header("Visual")]
	public string DisplayName = "Basics";
	public Color DisplayColor = Color.red;
	[Space()]
	[SerializeField] AnimationCurve levelSize;
	[SerializeField] [Range(0f, 1f)] float timedTilePercentage = 0f;

	//How many levels to comlete before they dont get harder
	int levelsToMax = 10;

	public LevelInfo GetLevel (int levelNumber) {
		float sample = Mathf.Clamp01((float)levelNumber / levelsToMax);

		//We add 2 since minimum value is 2
		int width = (int)(levelSize.Evaluate (sample) * maxLevelWidth) + minLevelWidth;
		int height = (int)(levelSize.Evaluate (sample) * maxLevelHeight) + minLevelHeight;

		//Just a number
		float fillAmount = .8f;

		//Clamp values
		width = Mathf.Clamp (width, minLevelWidth, maxLevelWidth);
		height = Mathf.Clamp (height, minLevelHeight, maxLevelHeight);
		return new LevelInfo (width, height, fillAmount, timedTilePercentage);
	}

	//FIXME idk how to do hardcoded levels properly
	/*
	Symbols for tiles

	Bridge:
	(-, |)

	T shape:
	(┬, ┤, ├, ┴)

	Cross:
	(┼)

	L shape:
	(┌, ┐, └, ┘)

	Lamps (Arrow pointing to end where lamp is):
	(←, ↑, →, ↓)

	*/
}

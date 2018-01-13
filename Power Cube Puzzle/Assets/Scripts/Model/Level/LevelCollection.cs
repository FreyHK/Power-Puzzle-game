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

	public string DisplayName = "Basics";
	public int LevelCount;

	[SerializeField] AnimationCurve levelSize;

	//TODO save with playerprefs
	public int currentLevelIndex { get; private set; }

	public void Initialize () {
		//Load curLevel from playerprefs
	}

	void OnDestroy () {
		//Save curLevel to playerprefs
	}

	public LevelInfo GetCurrentLevel () {
		float sample = (float)currentLevelIndex / LevelCount;

		//We add 2 since minimum value is 2
		int width = (int)(levelSize.Evaluate (sample) * maxLevelWidth) + minLevelWidth;
		int height = (int)(levelSize.Evaluate (sample) * maxLevelHeight) + minLevelHeight;

		//Just a number
		float fillAmount = .8f;
		return new LevelInfo (Mathf.Clamp(width, minLevelWidth, maxLevelWidth), Mathf.Clamp(height, minLevelHeight, maxLevelHeight), fillAmount);
	}

	public void IncreaseLevel () {
		currentLevelIndex++;
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

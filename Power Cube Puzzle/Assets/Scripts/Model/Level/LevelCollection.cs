using System.Collections;
using System.Collections.Generic;
using UnityEngine;

/// <summary>
/// Controls data for a collection of levels in the game.
/// </summary>
// TODO misleading name of class
//TODO maybe scriptableObject
public class LevelCollection : MonoBehaviour {

	const int minLevelWidth = 2;
	const int minLevelHeight = 3;
	const int maxLevelWidth = 7;
	const int maxLevelHeight = 8;

	[SerializeField] int levelCount;

	[SerializeField] AnimationCurve levelSize;

	//TODO save with playerprefs
	int curLevel = 0;

	public void Initialize () {
		NotificationCenter.DefaultCenter.AddObserver(this, NotificationMessage.OnLevelEnd);
	}

	public LevelInfo GetCurrentLevel () {
		float sample = (float)curLevel / levelCount;

		//We add 2 since minimum value is 2
		int width = (int)(levelSize.Evaluate (sample) * maxLevelWidth) + minLevelWidth;
		int height = (int)(levelSize.Evaluate (sample) * maxLevelHeight) + minLevelHeight;

		//Add 0.5 since minimum value is 0.5
		float fillAmount = .8f;
			//levelFillAmount.Evaluate (sample) * 0.5f + 0.5f;
		return new LevelInfo (Mathf.Clamp(width, minLevelWidth, maxLevelWidth), Mathf.Clamp(height, minLevelHeight, maxLevelHeight), fillAmount);
	}

	void OnLevelEnd (Notification note) {
		curLevel++;
	}

	//FIXME idk how to do hardcoded level properly
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

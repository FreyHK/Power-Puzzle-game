using System.Collections;
using System.Collections.Generic;
using UnityEngine;

/// <summary>
/// Controls data for a collection of levels in the game.
/// </summary>
// TODO misleading name of class
//TODO maybe scriptableObject
public class LevelCollection : MonoBehaviour {

	const int maxLevelSize = 10;

	[SerializeField] int levelCount;

	[SerializeField] AnimationCurve levelFillAmount;
	[SerializeField] AnimationCurve levelSize;

	//TODO save with playerprefs
	int curLevel = 0;

	public void Initialize (WorldController worldController) {
		worldController.RegisterOnLevelEndCallback (OnLevelEnd);
		print ("Initialize LevelCollection");
	}

	public LevelInfo GetCurrentLevel () {
		
		float sample = (float)curLevel / levelCount;
		print ("GetCurrentLevel LevelCollection: Sample: " + sample.ToString());
		int size = (int)(levelSize.Evaluate (sample) * maxLevelSize);
		float fillAmount = levelFillAmount.Evaluate (sample);

		return new LevelInfo (size, size, fillAmount);
	}

	void OnLevelEnd (LevelInfo level) {
		print ("OnLevelEnd LevelCollection");
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

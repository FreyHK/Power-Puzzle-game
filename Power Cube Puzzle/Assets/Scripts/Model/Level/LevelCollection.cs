using System.Collections;
using System.Collections.Generic;
using UnityEngine;

/// <summary>
/// Controls data for a certain type of levels in the game.
/// </summary>
public class LevelCollection : MonoBehaviour {

	[System.Serializable]
	class LevelPreset {
		[Range(LevelCollection.minLevelWidth, LevelCollection.maxLevelWidth)]
		public int width = LevelCollection.minLevelWidth;
		[Range(LevelCollection.minLevelHeight, LevelCollection.maxLevelHeight)]
		public int height = LevelCollection.minLevelHeight;
	}

	public const int minLevelWidth = 2;
	public const int minLevelHeight = 3;
	public const int maxLevelWidth = 7;
	public const int maxLevelHeight = 8;

	[SerializeField] [Range(0f, 1f)] float timedTilePercentage = 0f;

	[SerializeField] LevelPreset[] levels;

	public LevelInfo GetLevel (int levelNumber) {
		int i = Mathf.Clamp (levelNumber, 0, levels.Length-1);

		//Just a number
		float fillAmount = .8f;

		//Clamp values
		return new LevelInfo (levels [i].width, levels [i].height, fillAmount, timedTilePercentage);
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

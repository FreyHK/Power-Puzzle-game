using System.Collections;
using System.Collections.Generic;
using UnityEngine;

/// <summary>
/// Controls data for a certain type of levels in the game.
/// </summary>
public class LevelCollection : MonoBehaviour {


    public const int minLevelWidth = 2;
    public const int minLevelHeight = 3;
    public const int maxLevelWidth = 7;
    public const int maxLevelHeight = 8;

    [System.Serializable]
	class LevelPreset {

		[Range(LevelCollection.minLevelWidth, LevelCollection.maxLevelWidth)]
		public int width = LevelCollection.minLevelWidth;

		[Range(LevelCollection.minLevelHeight, LevelCollection.maxLevelHeight)]
		public int height = LevelCollection.minLevelHeight;

        public LevelPreset(int width, int height) {
            this.width = width;
            this.height = height;
        }
	}

	public LevelInfo GetLevel (int levelNumber) {
        if (levelNumber < LevelInfo.PresetCount)
        {
            //This is a preset/tutorial level
            return new LevelInfo(levelNumber);
        }

        int i = Mathf.Clamp (levelNumber, 0, LevelInfo.PresetCount + levelPresets.Length-1);

		//Just a number
		float fillAmount = .8f;

		//Clamp values
		return new LevelInfo (levelPresets[i].width, levelPresets[i].height, fillAmount);
	}

    LevelPreset[] levelPresets = new LevelPreset[] {
        new LevelPreset(2, 3),
        new LevelPreset(2, 3),

        new LevelPreset(2, 4),
        new LevelPreset(2, 4),
        new LevelPreset(2, 4),

        new LevelPreset(3, 4),
        new LevelPreset(3, 4),
        new LevelPreset(3, 4),

        new LevelPreset(4, 4),
        new LevelPreset(4, 4),
        new LevelPreset(4, 4),

        new LevelPreset(4, 5),
        new LevelPreset(4, 5),
        new LevelPreset(4, 5),

        new LevelPreset(5, 5),
        new LevelPreset(5, 5),

        new LevelPreset(5, 6),
        new LevelPreset(5, 6),
        new LevelPreset(5, 6),

        new LevelPreset(5, 7),
        new LevelPreset(5, 7),
        new LevelPreset(5, 7),

        new LevelPreset(5, 8)
    };
}

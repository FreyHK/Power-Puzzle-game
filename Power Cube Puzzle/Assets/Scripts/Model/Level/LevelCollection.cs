using System.Collections;
using System.Collections.Generic;
using UnityEngine;

/// <summary>
/// Controls data for a certain type of levels in the game.
/// </summary>
public class LevelCollection : MonoBehaviour {

    [System.Serializable]
	class LevelPreset {
		public int width;
		public int height;

        public LevelPreset(int width, int height) {
            this.width = width;
            this.height = height;
        }
	}

    public LevelInfo GetLevel (int levelIndex) {
        if (levelIndex < LevelInfo.TutorialCount)
        {
            //This is a preset/tutorial level
            return new LevelInfo(levelIndex);
        }

        int i = levelIndex;
        if (i > levelPresets.Length-1)
            i = levelPresets.Length-1;


        //print("GetLevel: " + levelIndex.ToString() + " using preset " + i.ToString());

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

using System.Collections;
using System.Collections.Generic;
using UnityEngine;

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

        int i = Mathf.Clamp(levelIndex, 0, levelPresets.Length - 1);

		//Just a number
		float fillAmount = .8f;

		//Clamp values
		return new LevelInfo (levelPresets[i].width, levelPresets[i].height, fillAmount);
	}

#if PLATFORM_STANDALONE || UNITY_WEBGL
    LevelPreset[] levelPresets = new LevelPreset[] {
        new LevelPreset(2, 3),
        new LevelPreset(3, 3),

        new LevelPreset(3, 4),
        new LevelPreset(5, 4),
        new LevelPreset(5, 5),

        new LevelPreset(6, 5),
        new LevelPreset(6, 6),
        new LevelPreset(6, 7),

        new LevelPreset(7, 7),
        new LevelPreset(8, 8),
        new LevelPreset(9, 8),

        new LevelPreset(10, 8),
        new LevelPreset(11, 8),
        new LevelPreset(12, 8),

        new LevelPreset(13, 8),
        new LevelPreset(14, 8),

        new LevelPreset(15, 8),
        new LevelPreset(16, 8)
    };
#else
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
#endif

}

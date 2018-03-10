using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class TileColorController : MonoBehaviour {

	[System.Serializable]
	public class SpriteColor
	{
		public SpriteRenderer sprite;
		public bool useDefaultColors = true;
		public Color litColor = Color.black;
		public Color unlitColor;
	}

	[SerializeField] SpriteColor[] mainSprites;
	[SerializeField] SpriteColor[] shadowSprites;

	Color defaultLitColor;
	Color defaultUnlitColor;
	Color defaultLitHighlightColor;
	Color defaultUnlitHighlightColor;

	public void Initialize (TileColorData tileColors) {
		this.defaultLitColor = tileColors.litWireColor;
		this.defaultUnlitColor = tileColors.unlitWireColor;
		this.defaultLitHighlightColor = tileColors.litHighlightColor;
		this.defaultUnlitHighlightColor = tileColors.shadowColor;
	}

	public void UpdateVisuals (bool powered) {
		foreach (SpriteColor sc in mainSprites) {
			if (sc.useDefaultColors)
				sc.sprite.color = powered ? defaultLitColor : defaultUnlitColor;
			else
				sc.sprite.color = powered ? sc.litColor : sc.unlitColor;
		}
		foreach (SpriteColor sc in shadowSprites) {
			if (sc.useDefaultColors)
				sc.sprite.color = powered ? defaultLitHighlightColor : defaultUnlitHighlightColor;
			else
				sc.sprite.color = powered ? sc.litColor : sc.unlitColor;
		}
	}
}

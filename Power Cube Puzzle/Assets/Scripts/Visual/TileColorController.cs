using System.Collections;
using System.Collections.Generic;
using UnityEngine;

/// <summary>
/// Also does other shit than control colour.
/// </summary>
public class TileColorController : MonoBehaviour {

	[System.Serializable]
	public class SpriteColor
	{
		public SpriteRenderer sprite;
		public LerpSprite lerpSprite;
		public bool useDefaultColors = true;
		public Color litColor = Color.black;
		public Color unlitColor;
	}

	[SerializeField] SpriteColor[] mainSprites;
	[SerializeField] SpriteColor[] shadowSprites;
	[SerializeField] ParticleSystem gameoverSparks;

	Color defaultLitColor;
	Color defaultUnlitColor;
	Color defaultLitHighlightColor;
	Color defaultUnlitHighlightColor;

	Tile tile;

	public void Initialize (TileColorData tileColors, Tile tile) {
		this.tile = tile;
		this.defaultLitColor = tileColors.litWireColor;
		this.defaultUnlitColor = tileColors.unlitWireColor;
		this.defaultLitHighlightColor = tileColors.litHighlightColor;
		this.defaultUnlitHighlightColor = tileColors.shadowColor;
	}

	public void UpdateVisuals (bool powered) {
		foreach (SpriteColor sc in mainSprites) {
			if (sc.useDefaultColors)
				//sc.sprite.color = powered ? defaultLitColor : defaultUnlitColor;
				sc.lerpSprite.SetColor(powered ? defaultLitColor : defaultUnlitColor);
			else
				//sc.sprite.color = powered ? sc.litColor : sc.unlitColor;
				sc.lerpSprite.SetColor(powered ? sc.litColor : sc.unlitColor);
		}
		foreach (SpriteColor sc in shadowSprites) {
			if (sc.useDefaultColors)
				//sc.sprite.color = powered ? defaultLitHighlightColor : defaultUnlitHighlightColor;
				sc.lerpSprite.SetColor(powered ? defaultLitHighlightColor : defaultUnlitHighlightColor);
			else
				//sc.sprite.color = powered ? sc.litColor : sc.unlitColor;
				sc.lerpSprite.SetColor(powered ? sc.litColor : sc.unlitColor);
		}
	}

	void Update () {
		if (tile.tileType == TileType.Lamp && GameController.GameOver && !gameoverSparks.isPlaying)
			gameoverSparks.Play ();
	}
}

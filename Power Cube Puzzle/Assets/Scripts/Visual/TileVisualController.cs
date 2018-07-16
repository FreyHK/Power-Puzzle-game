using System.Collections;
using System.Collections.Generic;
using UnityEngine;

/// <summary>
/// Also does other shit than control colour.
/// </summary>
public class TileVisualController : MonoBehaviour {

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

    //Color
	Color defaultLitColor;
	Color defaultUnlitColor;
	Color defaultLitHighlightColor;
	Color defaultUnlitHighlightColor;

    //Rotating
    public Animator anim;
    public Transform graphics;

    Tile tile;

	public void Initialize (TileColorData tileColors, Tile tile) {
		this.tile = tile;
        //Color
		this.defaultLitColor = tileColors.litWireColor;
		this.defaultUnlitColor = tileColors.unlitWireColor;
		this.defaultLitHighlightColor = tileColors.litHighlightColor;
		this.defaultUnlitHighlightColor = tileColors.shadowColor;

        //Rotation
        //Match transform rotation with tile rotation
        if (graphics != null)
            graphics.rotation = Quaternion.Euler(0f, 0f, TileMetrics.GetWireRotation(tile.outlets));
    }

    bool isPowered = false;

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

        if (tile.tileType == TileType.Lamp && powered && !isPowered)
            SoundManager.Instance.Play("PowerUp");

        isPowered = powered;
	}

    public bool IsRotating = false;

    float cooldown;

    void Update () {
		if (tile.tileType == TileType.Lamp && GameController.GameOver && !gameoverSparks.isPlaying)
			gameoverSparks.Play ();

        if (IsRotating) {
            cooldown -= Time.deltaTime;
            if (cooldown <= 0f)
                IsRotating = false;

        }
    }

    //Rotates counter-clockwise
    public void Rotate() {
        IsRotating = true;
        cooldown = .5f;
        //Start animation
        anim.SetTrigger("Rotate");
    }

    //Called from animation when it starts rotating
    public void OnRotationStart () {
        //Rotate graphics
        graphics.Rotate(0f, 0f, 90f);
    }
}

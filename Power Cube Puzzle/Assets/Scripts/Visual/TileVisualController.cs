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
	}

	[SerializeField] SpriteColor[] mainSprites;
	[SerializeField] SpriteColor[] shadowSprites;
    [SerializeField] SpriteRenderer LampHandle;
    [SerializeField] SpriteRenderer LampHandleShadow;
    [Space()]
    [SerializeField] ParticleSystem gameOverBubbles;
    [SerializeField] ParticleSystem poweredSparks;


    //Rotating
    [SerializeField] Animator anim;
    [SerializeField] Transform graphics;

    Tile tile;

	public void Initialize (ColorThemeScriptableObject colorTheme, Tile tile) {

        this.tile = tile;

        GameController.OnLevelComplete += OnLevelComplete;

        //Rotation
        //Match transform rotation with tile rotation
        if (graphics != null)
            graphics.rotation = Quaternion.Euler(0f, 0f, TileMetrics.GetWireRotation(tile.outlets));

        ApplyColorTheme(colorTheme);
    }

    private void OnDestroy()
    {
        GameController.OnLevelComplete -= OnLevelComplete;
    }

    ColorThemeScriptableObject colorTheme;

    public void ApplyColorTheme(ColorThemeScriptableObject colorTheme)
    {
        this.colorTheme = colorTheme;

        if (tile.tileType == TileType.Lamp)
        {
            LampHandle.color = colorTheme.LampHandle;
            LampHandleShadow.color = colorTheme.LampHandleShadow;
        }
    }

    bool poweredLastUpdate = false;

	public void UpdateVisuals (bool powered) {
		foreach (SpriteColor sc in mainSprites) {
			sc.lerpSprite.SetColor(powered ? colorTheme.WireLit : colorTheme.WireUnlit);
		}

        foreach (SpriteColor sc in shadowSprites) {
			sc.lerpSprite.SetColor(powered ? colorTheme.WireLitShadow : colorTheme.WireUnlitShadow);
		}

        if (tile.tileType == TileType.Lamp)
        {
            if (powered && !poweredLastUpdate)
                OnLampPowerUp();
            else if (!powered && poweredLastUpdate)
                OnLampPowerOff();
            var main = poweredSparks.main;
            main.startColor = colorTheme.ParticleColor;
            main = gameOverBubbles.main;
            main.startColor = colorTheme.ParticleColor;
        }
            
        poweredLastUpdate = powered;
	}

    /// <summary>
    /// Called when this tile (lamp) is powered
    /// </summary>
    void OnLampPowerUp()
    {
        SoundManager.Instance.Play("LampPowerUp");
        poweredSparks.Play();
    }

    void OnLampPowerOff()
    {
        SoundManager.Instance.Play("LampPowerOff");
        poweredSparks.Play();
    }

    public bool IsRotating = false;

    float cooldown;

    void Update () {
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

    //Triggered by event callback
    void OnLevelComplete(LevelInfo level) {
        if (tile.tileType == TileType.Lamp)
            gameOverBubbles.Play();
    }
}

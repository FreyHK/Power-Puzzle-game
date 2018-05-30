using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class LevelInfo {
	
	public int Width { get; private set; }
	public int Height { get; private set; }

	public bool Procedural { get; private set; }

	public float FillAmount { get; private set; }

	public float TimedTileAmount { get; private set; }

	public int TimedTileDelay { get; private set; }

	/// <summary>
	/// Level is procedurally generated based on width and height.
	/// </summary>
	public LevelInfo (int width, int height, float fillAmount, float timedTileAmount = 0f, int timedTileDelay = 6) {
		this.Width = width;
		this.Height = height;
		this.Procedural = true;
		this.FillAmount = fillAmount;
		this.TimedTileAmount = timedTileAmount;
		this.TimedTileDelay = timedTileDelay;
	}

    public TileType[,] Tiles;

	/// <summary>
	/// Level is predefined.
	/// </summary>
	public LevelInfo (int presetIndex) {
		this.Procedural = false;

        if (presetIndex == 0) {
            this.Width = 2;
            this.Height = 3;
            Tiles = new TileType[Width, Height];
            Tiles[0,0] = TileType.PowerSource;
            Tiles[1,0] = TileType.Empty;
            Tiles[0,1] = TileType.Wire;
            Tiles[1,1] = TileType.Empty;
            Tiles[0,2] = TileType.Wire;
            Tiles[1,2] = TileType.Lamp;
        }
	}
}

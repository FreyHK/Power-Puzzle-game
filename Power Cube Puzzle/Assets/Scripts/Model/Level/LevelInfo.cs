using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class LevelInfo {
	
	public int Width { get; private set; }
	public int Height { get; private set; }

	public bool Procedural { get; private set; }
	public float FillAmount { get; private set; }
	public Tile[,] Tiles { get; private set; }

	/// <summary>
	/// Level is procedurally generated based on width and height.
	/// </summary>
	public LevelInfo (int width, int height, float fillAmount) {
		this.Width = width;
		this.Height = height;
		this.Procedural = true;
		this.FillAmount = fillAmount;
	}

	/// <summary>
	/// Level is predefined.
	/// </summary>
	public LevelInfo (Tile[,] tiles, int width, int height) {
		this.Tiles = tiles;
		this.Width = width;
		this.Height = height;
		this.Procedural = false;
	}
}

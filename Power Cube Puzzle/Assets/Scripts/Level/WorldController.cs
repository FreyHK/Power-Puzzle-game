﻿using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

/// <summary>
/// Controls levels in the game.
/// Is managed by GameController
/// </summary>
public class WorldController : MonoBehaviour {

	[SerializeField] Transform environmentRoot;
	[SerializeField] SpriteRenderer background;

	TileController tileController;
	TileGrid tileGrid;

	float halfGridWidth;
	float halfGridHeight;

	LevelInfo currentLevel;
	bool levelEnded = false;

	/// <summary>
	/// Sets up callbacks
	/// </summary>
	public void Initialize (TileController tileController) {
		this.tileController = tileController;
		NotificationCenter.DefaultCenter.AddObserver (this, NotificationMessage.Input_OnWorldClick);
		NotificationCenter.DefaultCenter.AddObserver (this, NotificationMessage.OnLevelComplete);
	}

	/// <summary>
	/// Creates and starts a level based on LevelInfo data.
	/// </summary>
	public void InitializeLevel (LevelInfo levelInfo) {
		currentLevel = levelInfo;
		levelEnded = false;

		//Setup values
		halfGridWidth = (levelInfo.Width - 1) / 2f;
		halfGridHeight = (levelInfo.Height - 1) / 2f;

		//Make background board correct size
		background.size = new Vector2(levelInfo.Width + 1f, levelInfo.Height + 1f);
		background.enabled = true;

		//Create grid (generates level too)
		tileGrid = new TileGrid (levelInfo);
        if (tileGrid.Lamps.Length == 0) {
            //No lamps, try again
            InitializeLevel(levelInfo);
            return;
        }

        tileGrid.UpdateTilePower ();

		//Setup board
		tileController.CreateTiles (tileGrid, environmentRoot);
		tileController.UpdateTileVisuals (tileGrid);

		//Event Callback
		Hashtable data = new Hashtable() {
			{ "level", levelInfo },
			{ "tileGrid", tileGrid }
		};
		NotificationCenter.DefaultCenter.PostNotification(this, NotificationMessage.OnLevelStart, data);

		//Stop all previous invokes
		CancelInvoke ();
		timeSinceLevelStart = 0;
		InvokeRepeating ("GridUpdate", 0f, 1f);
	}

	public void DestroyLevel () {
		levelEnded = true;
		background.enabled = false;
		CancelInvoke ();
		tileController.ClearTileGameObjects ();
	}

	void OnLevelComplete () {
		
	}

	public void UpdateBoard () {
		if (tileGrid == null)
			return;

		tileController.UpdateTiles (tileGrid);
		CheckForVictory ();
	}

	int timeSinceLevelStart = 0;

	void GridUpdate () {
		if (tileGrid == null)
			return;

		Hashtable data = new Hashtable() {
			{ "time", timeSinceLevelStart }
		};
		NotificationCenter.DefaultCenter.PostNotification (this, NotificationMessage.OnGridUpdate, data);

		timeSinceLevelStart++;
	}

	void CheckForVictory () {
		Tile[] lamps = tileGrid.Lamps;

		if (lamps.Length == 0) {
			Debug.LogError ("No lamps on map!");
			return;
		}

		//Make sure we aren't still rotating tiles
		if (tileController.IsRotatingTiles() == false) {
			bool allLit = true;
			for (int i = 0; i < lamps.Length; i++) {
				if (!lamps [i].IsPowered)
					allLit = false;
			}
			if (allLit && !levelEnded) {
				levelEnded = true;

				Hashtable data = new Hashtable () { { "level", currentLevel } };
				NotificationCenter.DefaultCenter.PostNotification (this, NotificationMessage.OnLevelComplete, data);
			}
		}
	}

	void Input_OnWorldClick (Notification note) {
		Vector3 hitPoint = (Vector3)note.data ["point"];

		int hitX = Mathf.RoundToInt(hitPoint.x + halfGridWidth);
		int hitY = Mathf.RoundToInt(hitPoint.y + halfGridHeight);

		Tile hit = tileGrid.Tiles [hitX, hitY];

		//Check if valid
		if (hitX < 0 || hitX > tileGrid.Width - 1 || hitY < 0 || hitY > tileGrid.Height - 1)
			return;

		if (hit.tileType != TileType.Wire)
			return;

		//Mark tile to be rotated
		tileController.RotateTile(hit);
	}

/*	//Debugging grid in scene window (Don't remove its really useful)
	bool debug = true;

	void OnDrawGizmos () {
		if (tileGrid == null || !debug)
			return;

		Gizmos.color = Color.red;

		for (int x = 0; x < tileGrid.Width; x++) {
			for (int y = 0; y < tileGrid.Height; y++) {
				Tile t = tileGrid.Tiles [x, y];
				Vector3 centre = new Vector3 (x - halfGridWidth, y - halfGridHeight, 1f);

				for (int i = 0; i < 4; i++) {
					if (t.outlets [i]) {
						Vector3 direction = Vector3.zero;
						switch (i) {
						case 0:
							direction = new Vector3 (1f, 0f, 0f);
							break;
						case 1:
							direction = new Vector3 (0f, -1f, 0f);
							break;
						case 2:
							direction = new Vector3 (-1f, 0f, 0f);
							break;
						case 3:
							direction = new Vector3 (0f, 1f, 0f);
							break;
						}

						Gizmos.DrawLine (centre + direction * .5f, centre);
						Gizmos.DrawSphere(centre  + direction * .25f, .1f);
					}
				}
			}
		}
	}*/
}

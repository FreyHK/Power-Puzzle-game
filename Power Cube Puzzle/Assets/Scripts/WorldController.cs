﻿using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

/// <summary>
/// Controls levels in the game.
/// Is managed by GameController
/// </summary>
public class WorldController : MonoBehaviour {

	[Header("Game Info")]
	[SerializeField] int levelWidth = 10;
	[SerializeField] int levelHeight = 10;

	float tileRotateSpeed = 360;

	[Header("Controllers")]
	[SerializeField] PlayerInputController playerInput;
	[SerializeField] CameraController cameraController;

	[Header("Environment")]
	[SerializeField] SpriteRenderer background;
	[SerializeField] Color unlitWireColor = Color.green;
	[SerializeField] Color shadowColor = Color.black;
	[SerializeField] Color litWireColor = Color.white;
	[SerializeField] Color litHighlightColor = Color.black;

	[Header("Prefabs")]
	[SerializeField] Transform[] WirePrefabs;

	[SerializeField] Transform PowerSourcePrefab;
	[SerializeField] Transform LampPrefab;

	Dictionary<Tile, TileGameObjectData> tileGameObjects = new Dictionary<Tile, TileGameObjectData>();

	Queue<Tile> tileTargetRotations = new Queue<Tile>();

	//Callback suff
	Action<LevelInfo> OnLevelStartCallback;
	Action<LevelInfo> OnLevelEndCallback;

	public void RegisterOnLevelStartCallback (Action<LevelInfo> cb) {
		OnLevelStartCallback += cb;
	}

	public void RegisterOnLevelEndCallback (Action<LevelInfo> cb) {
		OnLevelEndCallback += cb;
	}

	TileGrid tileGrid;

	float halfGridWidth;
	float halfGridHeight;

	LevelInfo currentLevel;
	bool levelEnded = false;

	/// <summary>
	/// Sets up callbacks
	/// </summary>
	public void Initialize () {
		playerInput.OnMouseClick += OnPlayerInput;
	}

	/// <summary>
	/// Creates and starts a level based on LevelInfo data.
	/// </summary>
	public void InitializeLevel (LevelInfo levelInfo) {
		currentLevel = levelInfo;
		levelEnded = false;

		//Clear old level
		if (tileGameObjects != null) {
			//Destroy gameobjects
			foreach (KeyValuePair<Tile, TileGameObjectData> pair in tileGameObjects) {
				GameObject go = pair.Value.transform.gameObject;
				Destroy (go);
			}
			//Clear gameObject data (We will be creating new gameobjects)
			tileGameObjects.Clear ();
		}

		//Setup values
		this.levelWidth = levelInfo.Width;
		this.levelHeight = levelInfo.Height;
		halfGridWidth = (levelInfo.Width - 1) / 2f;
		halfGridHeight = (levelInfo.Height - 1) / 2f;

		//Make board correct size
		background.size = new Vector2(levelWidth + 1f, levelHeight + 1f);

		//Set view width
		//TODO lerp or do movetowards
		cameraController.SetViewMinSize(levelWidth + 2f, levelHeight + 2f);

		tileGrid = new TileGrid (levelWidth, levelHeight, levelInfo);

		//Spawn tile gameobjects
		for (int x = 0; x < levelWidth; x++) {
			for (int y = 0; y < levelHeight; y++) {
				Tile tile = tileGrid.tiles [x, y];

				//Spawn right type of tile based on tile type
				Transform prefab = null;
				switch (tile.tileType) {
				case TileType.Wire: 
					WireShape shape = TileMetrics.GetWireShape (tile.outlets);

					//If its empty, we dont want to spawn anything
					//FIXME fix the map generator
					if (shape == WireShape.Empty || shape == WireShape.Single)
						continue;

					prefab = WirePrefabs[(int)shape];
					break;
				case TileType.Lamp: 
					prefab = LampPrefab;
					break;
				case TileType.PowerSource: 
					prefab = PowerSourcePrefab;
					break;
				}

				Transform t = Instantiate (prefab);
				t.position = new Vector3 (x - halfGridWidth, y - halfGridHeight, 0f);

				//Match rotation tile rotation
				t.rotation = Quaternion.Euler(0f, 0f, TileMetrics.GetWireRotation(tile.outlets));

				//Find all main sprites and shadows (will be used to display tile power)
				List<SpriteRenderer> renderers = new List<SpriteRenderer> ();
				List<SpriteRenderer> shadows = new List<SpriteRenderer> ();

				//All children of tile root contain a shadow and a graphic
				for (int i = 0; i < t.childCount; i++) {
					Transform c = t.GetChild (i);
					//Dont include UI stuff
					if (c.name == "UI" || c.childCount < 2)
						continue;

					renderers.Add (c.GetChild (0).GetComponent<SpriteRenderer> ());
					shadows.Add (c.GetChild (1).GetComponent<SpriteRenderer> ());
				}

				TileGameObjectData data = new TileGameObjectData (t, renderers.ToArray(), shadows.ToArray());
				tileGameObjects.Add (tile, data);
			}
		}

		tileGrid.UpdateTilePower ();
		UpdateTileVisuals ();

		//Event Callback
		if (OnLevelStartCallback != null)
			OnLevelStartCallback (currentLevel);
	}

	void UpdateTileVisuals () {
		for (int x = 0; x < tileGrid.width; x++) {
			for (int y = 0; y < tileGrid.height; y++) {
				Tile tile = tileGrid.tiles [x, y];

				//Gameobject might not exist (empty tiles)
				if (!tileGameObjects.ContainsKey (tile))
					continue;

				//Colors of wires
				TileGameObjectData goData = tileGameObjects [tile];
				for (int i = 0; i < goData.renderers.Length; i++) {
					goData.renderers[i].color = tile.IsPowered ? litWireColor : unlitWireColor;
				}
				//Shadows
				for (int i = 0; i < goData.shadowRenderers.Length; i++) {
					goData.shadowRenderers [i].color = tile.IsPowered ? litHighlightColor : shadowColor;
				}
			}
		}
	}
		
	Tile currentTileRotating = null;

	public void UpdateBoard () {
		if (tileGrid == null)
			return;

		//Rotating wires
		if (currentTileRotating == null && tileTargetRotations.Count > 0) {
			//Get a new tile
			currentTileRotating = tileTargetRotations.Dequeue ();
		}
		if (currentTileRotating != null) {
			Quaternion target = Quaternion.Euler (0f, 0f, TileMetrics.GetWireRotation (currentTileRotating.outlets));
			Transform t = tileGameObjects [currentTileRotating].transform;

			//If we aren't at target rotation yet
			if (Quaternion.Angle (t.rotation, target) > .5f) {
				//Rotate
				t.rotation = Quaternion.RotateTowards (t.rotation, target, tileRotateSpeed * Time.deltaTime);
			} else {
				//Set to exact rotation
				t.rotation = target;

				//Set current tile to null to mark that we need a new one
				currentTileRotating = null;

				//Update power
				tileGrid.UpdateTilePower ();
			}
		}

		//Check for victory
		Tile[] lamps = tileGrid.lamps;
		//Make sure we aren't still rotating tiles
		if (lamps.Length > 0 && tileTargetRotations.Count == 0) {
			bool allLit = true;
			for (int i = 0; i < lamps.Length; i++) {
				if (!lamps [i].IsPowered)
					allLit = false;
			}
			if (allLit && !levelEnded) {
				levelEnded = true;
				if (OnLevelEndCallback != null)
					OnLevelEndCallback (currentLevel);

				//We don't want to rotate tiles anymore
				tileTargetRotations.Clear();
				currentTileRotating = null;
			}
		}

		//Update visuals
		UpdateTileVisuals();
	}

	void OnPlayerInput (Vector3 hitPoint) {
		int hitX = Mathf.RoundToInt(hitPoint.x + halfGridWidth);
		int hitY = Mathf.RoundToInt(hitPoint.y + halfGridHeight);

		Tile hit = tileGrid.tiles [hitX, hitY];

		//Check if valid
		if (hitX < 0 || hitX > levelWidth - 1 || hitY < 0 || hitY > levelHeight - 1)
			return;

		if (hit.tileType != TileType.Wire)
			return;
		
		//Rotate tile at point
		hit.Rotate(true);

		//Mark visual to be rotated
		tileTargetRotations.Enqueue(hit);
	}

	//Debugging grid in scene window (Don't remove its really usefull)
	bool debug = true;

	void OnDrawGizmos () {
		if (tileGrid == null || !debug)
			return;

		Gizmos.color = Color.red;

		for (int x = 0; x < tileGrid.width; x++) {
			for (int y = 0; y < tileGrid.height; y++) {
				Tile t = tileGrid.tiles [x, y];
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
	}
}

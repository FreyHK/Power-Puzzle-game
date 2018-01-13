using System;
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

	[SerializeField] Transform environmentRoot;
	[SerializeField] SpriteRenderer background;
	[SerializeField] Color unlitWireColor = Color.green;
	[SerializeField] Color shadowColor = Color.black;
	[SerializeField] Color litWireColor = Color.white;
	[SerializeField] Color litHighlightColor = Color.black;
	[SerializeField] [Range(0f, 1f)] float decorationChance = .3f;

	[Header("Prefabs")]
	[SerializeField] Transform[] WirePrefabs;
	[SerializeField] Transform[] DecorationPrefabs;

	[SerializeField] Transform PowerSourcePrefab;
	[SerializeField] Transform LampPrefab;

	Dictionary<Tile, TileColorController> tileGameObjects = new Dictionary<Tile, TileColorController>();

	Queue<Tile> tileTargetRotations = new Queue<Tile>();

	TileGrid tileGrid;

	float halfGridWidth;
	float halfGridHeight;

	LevelInfo currentLevel;
	bool levelEnded = false;

	/// <summary>
	/// Sets up callbacks
	/// </summary>
	public void Initialize () {
		NotificationCenter.DefaultCenter.AddObserver (this, NotificationMessage.Input_OnWorldClick);
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
			foreach (KeyValuePair<Tile, TileColorController> pair in tileGameObjects) {
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

					//If its empty, we might want to spawn a decoration
					if (shape == WireShape.Single)
						continue;

					if (shape == WireShape.Empty) {
						if (UnityEngine.Random.value < decorationChance) {
							int i = UnityEngine.Random.Range (0, DecorationPrefabs.Length);
							prefab = DecorationPrefabs[i];
							break;
						} else
							continue;
					}

					prefab = WirePrefabs[(int)shape];
					break;
				case TileType.Lamp: 
					prefab = LampPrefab;
					break;
				case TileType.PowerSource: 
					prefab = PowerSourcePrefab;
					break;
				}

				Transform t = Instantiate (prefab, environmentRoot);
				t.position = new Vector3 (x - halfGridWidth, y - halfGridHeight, 0f);

				//Match transform rotation with tile rotation
				t.rotation = Quaternion.Euler(0f, 0f, TileMetrics.GetWireRotation(tile.outlets));

				TileColorController colorController = t.GetComponentInChildren<TileColorController>();
				if (colorController != null) {
					colorController.Initialize (litWireColor, unlitWireColor, litHighlightColor, shadowColor);
					tileGameObjects.Add (tile, colorController);
				}
			}
		}

		tileGrid.UpdateTilePower ();
		UpdateTileVisuals ();

		//Event Callback
		Hashtable data = new Hashtable() {
			{ "level", levelInfo }
		};
		NotificationCenter.DefaultCenter.PostNotification(this, NotificationMessage.OnLevelStart, data);
	}

	void UpdateTileVisuals () {
		for (int x = 0; x < tileGrid.width; x++) {
			for (int y = 0; y < tileGrid.height; y++) {
				Tile tile = tileGrid.tiles [x, y];

				//Gameobject might not exist (empty tiles)
				if (!tileGameObjects.ContainsKey (tile))
					continue;

				//Colors of wires
				if (tileGameObjects.ContainsKey(tile))
					tileGameObjects[tile].UpdateVisuals (tile.IsPowered);
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

				//Mark not rotating (makes sure it can pass power on)
				currentTileRotating.IsRotating = false;

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

				Hashtable data = new Hashtable () { { "level", currentLevel } };
				NotificationCenter.DefaultCenter.PostNotification (this, NotificationMessage.OnLevelComplete, data);

				//We don't want to rotate tiles anymore
				tileTargetRotations.Clear();
				currentTileRotating = null;
			}
		}

		//Update visuals
		UpdateTileVisuals();
	}

	void Input_OnWorldClick (Notification note) {
		Vector3 hitPoint = (Vector3)note.data ["point"];

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

		//Mark as rotating (makes sure it doesn't pass power on)
		hit.IsRotating = true;

		//Mark visual to be rotated
		tileTargetRotations.Enqueue(hit);

		//Update power
		tileGrid.UpdateTilePower ();
	}

	//Debugging grid in scene window (Don't remove its really useful)
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

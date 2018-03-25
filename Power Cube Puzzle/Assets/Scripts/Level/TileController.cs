using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class TileController : MonoBehaviour {

	[SerializeField] TilePrefabManager prefabManager;
	[SerializeField] TileColorData tileColors;

	Dictionary<Tile, TileColorController> tileGameObjects = new Dictionary<Tile, TileColorController>();

	public void CreateTiles (TileGrid tileGrid, Transform environmentRoot) {
		ClearTileGameObjects ();

		float halfWidth = (tileGrid.Width - 1) / 2f;
		float halfHeight = (tileGrid.Height - 1) / 2f;

		//Spawn tile gameobjects
		for (int x = 0; x < tileGrid.Width; x++) {
			for (int y = 0; y < tileGrid.Height; y++) {
				Tile tile = tileGrid.Tiles [x, y];

				//Spawn right type of tile based on tile type
				Transform prefab = prefabManager.GetTilePrefab(tile);
				if (prefab == null)
					continue;

				Transform t = Instantiate (prefab, environmentRoot);
				t.position = new Vector3 (x - halfWidth, y - halfHeight, 0f);

				//Match transform rotation with tile rotation
				t.rotation = Quaternion.Euler(0f, 0f, TileMetrics.GetWireRotation(tile.outlets));

				TileColorController colorController = t.GetComponentInChildren<TileColorController>();
				if (colorController != null) {
					colorController.Initialize (tileColors, tile);
					tileGameObjects.Add (tile, colorController);
				}
			}
		}
	}

	public void ClearTileGameObjects () {
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
	}

	public void UpdateTileVisuals (TileGrid grid) {
		for (int x = 0; x < grid.Width; x++) {
			for (int y = 0; y < grid.Height; y++) {
				Tile tile = grid.Tiles [x, y];

				//Gameobject might not exist (empty tiles)
				if (!tileGameObjects.ContainsKey (tile))
					continue;

				//Colors of wires
				if (tileGameObjects.ContainsKey(tile)) {
					tileGameObjects[tile].UpdateVisuals (tile.IsPowered);
				}
			}
		}
	}

	Queue<Tile> tileTargetRotations = new Queue<Tile>();
	Tile currentTileRotating = null;

	float tileRotateSpeed = 360;

	public void RotateTile (Tile t) {
		if (tileGameObjects.ContainsKey (t)) {
			tileTargetRotations.Enqueue (t);
			SoundManager.Instance.Play ("SwitchTile");
		} else
			Debug.LogError ("Tile doesn't exist in dictionary");
	}

	public void UpdateTiles (TileGrid tileGrid) {
		if (currentTileRotating == null && tileTargetRotations.Count > 0) {
			//Get a new tile
			currentTileRotating = tileTargetRotations.Dequeue ();

			//Rotate tile at point
			currentTileRotating.Rotate(true);

			//Mark as rotating (makes sure it doesn't pass power on)
			currentTileRotating.IsRotating = true;

			tileGrid.UpdateTilePower ();

			//Update visuals
			UpdateTileVisuals(tileGrid);
		}
		if (currentTileRotating != null) {
			if (!tileGameObjects.ContainsKey (currentTileRotating)) {
				currentTileRotating = null;
				return;
			}

			Quaternion target = Quaternion.Euler (0f, 0f, TileMetrics.GetWireRotation (currentTileRotating.outlets));
			Transform t = tileGameObjects [currentTileRotating].transform;

			//If we aren't at target rotation yet
			if (Quaternion.Angle (t.rotation, target) > .5f) {
				t.rotation = Quaternion.RotateTowards (t.rotation, target, tileRotateSpeed * Time.deltaTime);
			} else {
				//Set to exact rotation
				t.rotation = target;

				//Mark not rotating (makes sure it can pass power on)
				currentTileRotating.IsRotating = false;

				//Set current tile to null to mark that we need a new one
				currentTileRotating = null;

				tileGrid.UpdateTilePower ();

				UpdateTileVisuals (tileGrid);
			}
		}
	}

	public bool IsRotatingTiles () {
		return tileTargetRotations.Count > 0;
	}
}

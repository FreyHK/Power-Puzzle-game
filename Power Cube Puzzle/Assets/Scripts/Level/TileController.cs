using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class TileController : MonoBehaviour {

	[SerializeField] TilePrefabManager prefabManager;

	Dictionary<Tile, TileVisualController> tileGameObjects = new Dictionary<Tile, TileVisualController>();

	public void CreateTiles (TileGrid tileGrid, ColorThemeScriptableObject colorTheme, Transform environmentRoot) {
        this.colorTheme = colorTheme;

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
				t.localPosition = new Vector3 (x - halfWidth, y - halfHeight, 0f);
                

                TileVisualController colorController = t.GetComponentInChildren<TileVisualController>();
				if (colorController != null) {
					colorController.Initialize (colorTheme, tile);
					tileGameObjects.Add (tile, colorController);
				}
			}
		}
    }

    ColorThemeScriptableObject colorTheme;

    public void ApplyColorTheme(ColorThemeScriptableObject colorTheme)
    {
        this.colorTheme = colorTheme;

        if (tileGameObjects != null)
        {
            //Destroy gameobjects
            foreach (KeyValuePair<Tile, TileVisualController> pair in tileGameObjects)
            {
                pair.Value.ApplyColorTheme(colorTheme);
            }
        }
    }

	public void ClearTileGameObjects () {
		//Clear old level
		if (tileGameObjects != null) {
			//Destroy gameobjects
			foreach (KeyValuePair<Tile, TileVisualController> pair in tileGameObjects) {
				GameObject go = pair.Value.transform.gameObject;
				Destroy (go);
			}
			//Clear gameObject data (We will be creating new gameobjects)
			tileGameObjects.Clear ();
		}
        currentTileRotating = null;
    }

	public void UpdateTileColors (TileGrid grid) {
		for (int x = 0; x < grid.Width; x++) {
			for (int y = 0; y < grid.Height; y++) {
				Tile tile = grid.Tiles [x, y];

				//Colors of wires
				if (tileGameObjects.ContainsKey(tile)) {
					tileGameObjects[tile].UpdateVisuals (tile.IsPowered);
				}
			}
		}
	}

    Queue<Tile> toRotate = new Queue<Tile>();
	Tile currentTileRotating = null;

	public void RotateTile (Tile t) {
		if (tileGameObjects.ContainsKey (t)) {
            toRotate.Enqueue (t);
            //Play sound
            SoundManager.Instance.Play("TileClick");
        } else
			Debug.LogError ("Tile doesn't exist in dictionary");
	}

	public void OnUpdateBoard (TileGrid tileGrid) {
		if (currentTileRotating == null && toRotate.Count > 0) {
			//Get a new tile
			currentTileRotating = toRotate.Dequeue ();

			//Rotate tile at point
			currentTileRotating.Rotate(true);

			//Mark as rotating (makes sure it doesn't pass power on)
			currentTileRotating.IsRotating = true;

			tileGrid.UpdateTilePower ();

			//Update color
			UpdateTileColors(tileGrid);

            //Rotate visuals
            tileGameObjects[currentTileRotating].Rotate();
		}
		if (currentTileRotating != null && tileGameObjects[currentTileRotating].IsRotating == false) {
            
                //Mark not rotating (makes sure it can pass power on)
                currentTileRotating.IsRotating = false;

                tileGrid.UpdateTilePower();
                
                //Play sound(s)
                if (currentTileRotating.GetConnectedNeighbors().Length > 0) {
                   SoundManager.Instance.Play("TilePlugIn");
                }

                //Set current tile to null to mark that we need a new one
                currentTileRotating = null;

                UpdateTileColors(tileGrid);

                currentTileRotating = null;
        }
	}
    
	public bool IsRotatingTiles () {
		return toRotate.Count > 0 || currentTileRotating != null;
	}
}

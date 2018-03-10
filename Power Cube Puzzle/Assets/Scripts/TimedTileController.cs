using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class TimedTileController : MonoBehaviour {

	public void Initialize (TileController tileController) {
		this.tileController = tileController;
		NotificationCenter.DefaultCenter.AddObserver (this, NotificationMessage.OnLevelStart);
		NotificationCenter.DefaultCenter.AddObserver (this, NotificationMessage.OnLevelComplete);
		NotificationCenter.DefaultCenter.AddObserver (this, NotificationMessage.OnGridUpdate);
	}

	TileController tileController;
	List<Tile> timedTiles = new List<Tile>();
	LevelInfo levelInfo;

	void OnLevelStart (Notification note) {
		levelInfo = (LevelInfo)note.data ["level"];
		rotateDelay = levelInfo.TimedTileDelay;

		TileGrid grid = (TileGrid)note.data ["tileGrid"];

		timedTiles.Clear ();
		for (int x = 0; x < grid.Width; x++) {
			for (int y = 0; y < grid.Height; y++) {
				if (grid.Tiles[x, y].tileType == TileType.Wire && grid.Tiles[x, y].IsTimedTile) {
					timedTiles.Add (grid.Tiles[x, y]);	
				}
			}
		}
	}

	void OnLevelComplete () {
		//Mark as level ended
		levelInfo = null;
	}

	int rotateDelay = 5; //8;
	int toRotateIndex = 0;

	void OnGridUpdate (Notification note) {
		if (timedTiles.Count == 0 || levelInfo == null)
			return;

		//Time in seconds since level beginning
		int time = (int)note.data ["time"];
		//Don't rotate at start of game
		if (time == 0)
			return;
		
		if (time % rotateDelay == 0) {
			tileController.RotateTile (timedTiles[toRotateIndex]);

			if (timedTiles.Count > 1) {
				//We want to rotate another one next
				toRotateIndex = (toRotateIndex + 1) % (timedTiles.Count - 1);
			}
		}
	}
}
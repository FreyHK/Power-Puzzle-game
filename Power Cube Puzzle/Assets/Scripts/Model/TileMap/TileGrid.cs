using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class TileGrid {

	public Tile[,] tiles { get; private set; }
	public Tile[] lamps { get; private set; }

	public Tile powerSource { get; private set; }

	public int width { get; private set; }
	public int height { get; private set; }

	public TileGrid (int width, int height, LevelInfo info) {
		this.width = width;
		this.height = height;

		tiles = new Tile[width, height];

		//Make tiles
		for (int x = 0; x < width; x++) {
			for (int y = 0; y < height; y++) {
				Tile t = new Tile (x, y);
				tiles [x, y] = t;
			}
		}

		//Set neighbors
		for (int x = 0; x < width; x++) {
			for (int y = 0; y < height; y++) {
				Tile t = tiles [x, y];
				if (x > 0) {
					t.neighbors[(int)GridDirection.W] = tiles[x - 1, y];
				}
				if (x < width-1) {
					t.neighbors[(int)GridDirection.E] = tiles[x + 1, y];
				}
				if (y > 0) {
					t.neighbors[(int)GridDirection.N] = tiles[x, y - 1];
				}
				if (y < height-1) {
					t.neighbors[(int)GridDirection.S] = tiles[x, y + 1];
				}
			}
		}

		//Level is procedurally generated
		if (info.Procedural) {
			TileMapGenerator generator = new TileMapGenerator ();

			//Generate map
			generator.GenerateMap(width, height, tiles);

			//Get source position from generator
			powerSource = tiles [generator.sourceX, generator.sourceY];
		} else {
			//Load map from info
			for (int x = 0; x < width; x++) {
				for (int y = 0; y < height; y++) {
					tiles [x, y] = info.Tiles [x, y];
				}
			}
		}

		//Rotate tiles randomly
		for (int x = 0; x < width; x++) {
			for (int y = 0; y < height; y++) {
				//Don't rotate powersources
				if (tiles [x, y].tileType == TileType.PowerSource || tiles [x, y].tileType == TileType.Lamp)
					continue;

				//Rotate between 1 and 3 times(0 or 4 would mean level could possibly be solved)
				int r = Random.Range(1, 3);

				for (int i = 0; i < r; i++) {
					tiles [x, y].Rotate (true);
				}
			}
		}

		//Add lamp tiles to list, so they can be used by worldcontroller
		List<Tile> lampList = new List<Tile>();

		for (int x = 0; x < width; x++) {
			for (int y = 0; y < height; y++) {
				if (tiles[x, y].tileType == TileType.Lamp) {
					lampList.Add (tiles[x, y]);
				}
			}
		}
		lamps = lampList.ToArray ();
	}
		
	//Applies power to tiles connected to power sources
	public void UpdateTilePower () {
		ClearTilePower ();

		Queue<Tile> toVisit = new Queue<Tile>();
		List<Tile> visited = new List<Tile> ();

		toVisit.Enqueue (powerSource);
		visited.Add (powerSource);

		while (toVisit.Count > 0) {
			Tile sourceTile = toVisit.Dequeue ();

			Tile[] neighbors = sourceTile.GetConnectedNeighbors();
			for (int i = 0; i < neighbors.Length; i++) {
				Tile t = neighbors [i];
				if (!visited.Contains (t)) {
					//Mark so we dont visit again
					visited.Add (t);
					//Enqueue to check neighbors
					toVisit.Enqueue (t);
					//Set as powered (the point of this)
					t.IsPowered = true;
				}
			}
		}
	}

	//Sets all lamps and wires power value to false
	//Terrible name
	void ClearTilePower () {
		for (int x = 0; x < width; x++) {
			for (int y = 0; y < height; y++) {
				Tile t = tiles [x, y];

				if (t.tileType != TileType.PowerSource)
					t.IsPowered = false;
			}
		}
	}
}
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class TileGrid {

	public Tile[,] Tiles { get; private set; }
	public Tile[] Lamps { get; private set; }

	public Tile PowerSource { get; private set; }

	public int Width { get; private set; }
	public int Height { get; private set; }

	public TileGrid (LevelInfo info) {
		this.Width = info.Width;
		this.Height = info.Height;

		//Make and fill tilemap
		Tiles = new Tile[Width, Height];
		for (int x = 0; x < Width; x++) {
			for (int y = 0; y < Height; y++) {
				Tile t = new Tile (x, y);
				Tiles [x, y] = t;
			}
		}

		//Set neighbors
		for (int x = 0; x < Width; x++) {
			for (int y = 0; y < Height; y++) {
				Tile t = Tiles [x, y];
				if (x > 0) {
					t.neighbors[(int)GridDirection.W] = Tiles[x - 1, y];
				}
				if (x < Width-1) {
					t.neighbors[(int)GridDirection.E] = Tiles[x + 1, y];
				}
				if (y > 0) {
					t.neighbors[(int)GridDirection.N] = Tiles[x, y - 1];
				}
				if (y < Height-1) {
					t.neighbors[(int)GridDirection.S] = Tiles[x, y + 1];
				}
			}
		}

		FillMap (info);
		ScrambleTileRotations ();

		//Add lamp tiles to list, so they can be used by worldcontroller
		List<Tile> lampList = new List<Tile>();

		for (int x = 0; x < Width; x++) {
			for (int y = 0; y < Height; y++) {
				if (Tiles[x, y].tileType == TileType.Lamp) {
					lampList.Add (Tiles[x, y]);
				}
			}
		}
		Lamps = lampList.ToArray ();
	}

	void FillMap (LevelInfo info) {
		//Level is procedurally generated
		if (info.Procedural) {
			TileMapGenerator generator = new TileMapGenerator ();

			//Generate map
			generator.GenerateMap(info, Tiles);

			//Get source position from generator
			PowerSource = Tiles [generator.sourceX, generator.sourceY];
		} else {
			Debug.LogError ("Not implemented yet!");
		}
	}

	void ScrambleTileRotations () {
		//Rotate tiles randomly
		for (int x = 0; x < Width; x++) {
			for (int y = 0; y < Height; y++) {
				//Don't rotate powersources
				if (Tiles [x, y].tileType == TileType.PowerSource || Tiles [x, y].tileType == TileType.Lamp)
					continue;

				WireShape shape = TileMetrics.GetWireShape (Tiles[x, y].outlets);
				int rots = 0;

				if (shape != WireShape.Empty && shape != WireShape.Cross)
					//Rotate between 1 and 3 times(0 or 4 would mean level could possibly be solved)
					rots = Random.Range (1, 3);

				for (int i = 0; i < rots; i++)
					Tiles [x, y].Rotate (true);
			}
		}
	}
		
	//Applies power to tiles connected to power sources
	public void UpdateTilePower () {
		ResetTilePower ();

		Queue<Tile> toVisit = new Queue<Tile>();
		List<Tile> visited = new List<Tile> ();

		toVisit.Enqueue (PowerSource);
		visited.Add (PowerSource);

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
					//Mark as powered
					t.IsPowered = true;
				}
			}
		}
	}

	//Sets all lamps' and wires' power value to false
	void ResetTilePower () {
		for (int x = 0; x < Width; x++) {
			for (int y = 0; y < Height; y++) {
				Tile t = Tiles [x, y];

				if (t.tileType != TileType.PowerSource)
					t.IsPowered = false;
			}
		}
	}
}
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using IntVectors;

public class TileMapGenerator {

	public int sourceX { get; private set; }
	public int sourceY { get; private set; }

	//Direction coordinates
	private int[] DX = new int[] {
		-1,//E
		0, //N
		1, //W
		0, //S
	};
	private int[] DY = new int[] {
		0, //E
		1, //N
		0, //W
		-1,//S
	};

	//Maybe this isn't the best way
	GridDirection[] RandomDirections () {
		List<int> dirs = new List<int>();
		for (int i = 0; i < 4; i++) {
			dirs.Add (i);
		}

		GridDirection[] randomDirs = new GridDirection[4];
		for (int i = 0; i < 4; i++) {
			int d = Random.Range (0, dirs.Count);
			randomDirs [i] = (GridDirection)dirs [d];
			dirs.RemoveAt (d);
		}
		return randomDirs;
	}

	public void GenerateMap (LevelInfo info, Tile[,] tilemap) {

		//Create visited tiles Map
		bool[,] visited = new bool[info.Width, info.Height];
		List<Tile> allTiles = new List<Tile>();

		for (int x = 0; x < info.Width; x++) {
			for (int y = 0; y < info.Height; y++) {
				if (x == sourceX && y == sourceY)
					continue;
				
				visited [x, y] = false;

				allTiles.Add (tilemap[x, y]);
			}
		}

		int tileCount = info.Width * info.Height;

		//Leave random spots on map empty to add variety
		if (tileCount > 4) {
			//Fill out random tiles and mark as visited, so we dont place anything there
			float fillPercent = Mathf.Clamp01 (info.FillAmount);
			int emptyCount = (int)(tileCount * (1f - fillPercent));

			for (int n = 0; n < emptyCount; n++) {
				//There might not be enough tiles left
				if (allTiles.Count <= 0)
					break;
				
				//Get random tile
				Tile t = allTiles[Random.Range (0, allTiles.Count - 1)];

				//Mark as visited, so algoritm will go around it
				visited [t.X, t.Y] = true;

				//Loop through all neighbors
				for (int x = -1; x < 1; x++) {
					for (int y = -1; y < 1; y++) {

						int nx = t.X + x;
						int ny = t.Y + y;

						//If out of map, skip
						if (nx < 0 || nx > info.Width || ny < 0 || ny > info.Height)
							continue;
						
						//Remove so we dont pick these tiles
						if (allTiles.Contains(tilemap [nx, ny]))
							allTiles.Remove(tilemap [nx, ny]);
					}
				}
			}
		}

		//Choose powersource position
		sourceX = Random.Range(0, info.Width-1);
		sourceY = Random.Range(0, info.Height-1);
			
		//Start algoritm
		CarvePassagesFrom (sourceX, sourceY, info.Width, info.Height, visited, tilemap);

		tilemap[sourceX, sourceY].SetTileType(TileType.PowerSource);

		//Find all wires
		allTiles.Clear();
		for (int x = 0; x < info.Width; x++) {
			for (int y = 0; y < info.Height; y++) {
				if (tilemap [x, y].tileType == TileType.Wire)
					allTiles.Add (tilemap [x, y]);
			}	
		}

		//Set timed tiles
		int timedCount = (int)(tileCount * (info.TimedTileAmount));
		for (int n = 0; n < timedCount; n++) {
			if (allTiles.Count <= 0)
				break;
			Tile t = allTiles[Random.Range (0, allTiles.Count - 1)];
			t.IsTimedTile = true;
			allTiles.Remove (t);
		}
	}

	void CarvePassagesFrom (int cx, int cy, int width, int height, bool[,] visited, Tile[,] tilemap) {
		//Mark this tile as visited
		visited[cx, cy] = true;
		//Set correct tiletype
		tilemap[cx, cy].SetTileType(TileType.Wire);

		GridDirection[] directions = RandomDirections ();

		bool visitedAllNeighbors = true;

		foreach (GridDirection dir in directions) {
			int nx = cx + DX[(int)dir];
			int ny = cy + DY[(int)dir];

			//If not out of map, and we haven't visited this
			if (nx >= 0 && nx < width && ny >= 0 && ny < height && !visited [nx, ny]) {
				visitedAllNeighbors = false;

				//Connect neighbor to current tile
				tilemap [nx, ny].outlets [(int)dir] = true;

				//Connect current tile to neighbor
				tilemap[cx, cy].outlets[(int)dir.Opposite()] = true;

				//Iterate
				CarvePassagesFrom(nx, ny, width, height, visited, tilemap);
			}
		}

		//If this is an end, put a lamp
		if (visitedAllNeighbors) {
			tilemap [cx, cy].SetTileType (TileType.Lamp);
		}
	}
}

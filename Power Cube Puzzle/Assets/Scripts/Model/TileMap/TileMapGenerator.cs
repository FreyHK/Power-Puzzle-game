﻿using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class TileMapGenerator {

	public int sourceX { get; private set; }
	public int sourceY { get; private set; }

	//Direction coordinates
	private int[] DX = new int[] {
		-1, //E
		0, //N
		1, //W
		0, //S
	};
	private int[] DY = new int[] {
		0, //E
		1, //N
		0, //W
		-1, //S
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

	public void GenerateMap (int width, int height, Tile[,] tilemap) {
		bool[,] visited = new bool[width, height];

		for (int x = 0; x < width; x++) {
			for (int y = 0; y < height; y++) {
				visited [x, y] = false;
			}
		}

		//Get powersource position
		sourceX = Random.Range(0, width-1);
		sourceY = Random.Range(0, height-1);

		tilemap[sourceX, sourceY].SetTileType(TileType.PowerSource);

		CarvePassagesFrom (sourceX, sourceY, width, height, visited, tilemap);
	}

	void CarvePassagesFrom (int cx, int cy, int width, int height, bool[,] visited, Tile[,] tilemap) {
		//Mark this tile as visited
		visited[cx, cy] = true;

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

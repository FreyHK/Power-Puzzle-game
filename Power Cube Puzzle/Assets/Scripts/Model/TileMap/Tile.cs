using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Tile {

	public int X { get; private set; }

	public int Y { get; private set; }

	public TileType tileType { get; private set; }

	public Tile[] neighbors = new Tile[4];

	public bool[] outlets = new bool[4];

	public bool IsPowered;

	public Tile (int X, int Y) {
		this.X = X;
		this.Y = Y;
		tileType = TileType.Wire;

		//FIXME might not be necessary
		for (int i = 0; i < 4; i++) {
			outlets [i] = false;
		}
	}

	public void SetTileType (TileType tileType) {
		this.tileType = tileType;

		if (tileType == TileType.PowerSource) {
			IsPowered = true;
			for (int i = 0; i < 4; i++) {
				outlets [i] = true;
			}
		}
	}

	public Tile[] GetConnectedNeighbors () {
		List<Tile> connected = new List<Tile> ();
		//Loop through all neighbors
		for (int i = 0; i < 4; i++) {
			Tile neighbor = neighbors [i];
			if (neighbor == null)
				continue;

			GridDirection dir = (GridDirection)i;
			// && neighbor.outlets[(int)dir.Opposite()]
			GridDirection d = dir.Opposite();
			if (outlets [i] && neighbor.outlets[(int)d])
				connected.Add (neighbors[i]);
		}
		return connected.ToArray ();
	}

	public void SetNeighbor (GridDirection direction, Tile tile) {
		neighbors [(int)direction] = tile;
	}

	public Tile GetNeighbor (GridDirection direction) {
		return neighbors [(int)direction];
	}

	public void Rotate (bool clockwise) {
		bool[] o = new bool[4];

		for (int i = 0; i < 4; i++) {
			int next = (clockwise ? i + 1 : i - 1) % 4;
			o[i] = outlets[next];
		}
		outlets = o;
	}
}

using System.Collections;
using System.Collections.Generic;
using UnityEngine;

/// <summary>
/// Controls data for levels in the game.
/// Everything is hardcoded in.
/// </summary>
// TODO misleading name of class
public class LevelCollection {

	public LevelInfo[] levels { get; private set; }

	public LevelCollection () {
	//FIXME idk how to do hardcoded level properly yet

		/*
		Symbols for tiles

		Bridge:
		(-, |)

		T shape:
		(┬, ┤, ├, ┴)

		Cross:
		(┼)

		L shape:
		(┌, ┐, └, ┘)

		Lamps (Arrow pointing to end where lamp is):
		(←, ↑, →, ↓)

		*/

		levels = new LevelInfo[] { 
			new LevelInfo(2, 2),
			new LevelInfo(3, 3),
			new LevelInfo(5, 5),
			new LevelInfo(8, 5),
			new LevelInfo(8, 8),
			new LevelInfo(10, 8),
			new LevelInfo(20, 5)
		};
	}
}

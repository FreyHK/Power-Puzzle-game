using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class TilePrefabManager : MonoBehaviour {

	[Header("Prefabs")]
	[SerializeField] Transform[] WirePrefabs;
	[SerializeField] Transform[] DecorationPrefabs;
	[SerializeField] Transform PowerSourcePrefab;
	[SerializeField] Transform LampPrefab;

	[Header("Variables")]
	[SerializeField] [Range(0f, 1f)] float decorationChance = .3f;

	public Transform GetTilePrefab (Tile tile) {
		Transform prefab = null;
		switch (tile.tileType) {
		case TileType.Wire: 
			WireShape shape = TileMetrics.GetWireShape (tile.outlets);

			//Wire should never have this shape!
			if (shape == WireShape.Single || shape == WireShape.Empty) 
				break;

			prefab = GetWirePrefab (tile, shape);
			break;
		case TileType.Lamp: 
			prefab = LampPrefab;
			break;
		case TileType.PowerSource: 
			prefab = PowerSourcePrefab;
			break;
		case TileType.Empty:
			//If its empty, we might want to spawn a decoration
			if (UnityEngine.Random.value < decorationChance) {
				int i = UnityEngine.Random.Range (0, DecorationPrefabs.Length);
				prefab = DecorationPrefabs [i];
			}
			break;
		}
		return prefab;
	}

	//TODO maybe make separate prefabs for special wires (timed)
	Transform GetWirePrefab (Tile tile, WireShape shape) {
		return WirePrefabs[(int)shape];
	}
}

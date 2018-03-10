using System.Collections;
using System.Collections.Generic;
using UnityEngine;

[CreateAssetMenu(fileName = "New TileColorData", menuName = "Data/TileColorData")]
public class TileColorData : ScriptableObject {

	public Color unlitWireColor = Color.green;
	public Color shadowColor = Color.black;
	public Color litWireColor = Color.white;
	public Color litHighlightColor = Color.black;
}

using System.Collections;
using System.Collections.Generic;
using UnityEngine;

[CreateAssetMenu(fileName = "New UIColorThemeData", menuName = "Data/UIColorThemeData")]
public class UIColorThemeData : ScriptableObject {

	public Color Main = Color.white;
	public Color Alt = Color.white;

	public Color MainBackground = Color.white;
	public Color AltBackground = Color.white;

	public Color MainButtons = Color.white;
	public Color AltButtons = Color.white;
}

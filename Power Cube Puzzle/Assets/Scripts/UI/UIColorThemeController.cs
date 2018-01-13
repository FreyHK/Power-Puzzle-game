using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class UIColorThemeController : MonoBehaviour {

	[SerializeField] Color[] ThemeColors;

	ThemedUI[] uiObjects;

	void Start () {
		uiObjects = FindObjectsOfType<ThemedUI> ();
		UpdateColorThemes ();
	}
	
	public void UpdateColorThemes () {
		for (int i = 0; i < uiObjects.Length; i++) {
			uiObjects [i].UpdateTheme (ThemeColors);
		}
	}
}

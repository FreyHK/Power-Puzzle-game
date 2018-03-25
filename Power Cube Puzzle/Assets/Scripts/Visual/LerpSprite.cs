using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class LerpSprite : MonoBehaviour {

	public SpriteRenderer sprite;

	Color lastColor;
	Color targetColor;

	public void SetHidden (bool hidden) {
		if (hidden) {
			lastColor = sprite.color;
			targetColor = Color.clear;
		} else {
			targetColor = lastColor;
		}
	}

	public void SetColor (Color c) {
		targetColor = c;
	}

	void Update () {
		
		if (sprite.color != targetColor) {
			sprite.color = Color.Lerp (sprite.color, targetColor, Time.deltaTime * 10f);
		}
	}
}

using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class TileGameObjectData {

	public Transform transform;
	public SpriteRenderer[] renderers;
	public SpriteRenderer[] shadowRenderers;

	public TileGameObjectData(Transform transform, SpriteRenderer[] renderers, SpriteRenderer[] shadowRenderers) {
		this.transform = transform;
		this.renderers = renderers;
		this.shadowRenderers = shadowRenderers;
	}
}

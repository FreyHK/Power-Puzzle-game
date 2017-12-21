using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class SpriteShadow : MonoBehaviour {

	[SerializeField] Transform spriteTransform;
	[SerializeField] Vector2 offset = new Vector2(-.1f, -.1f);

	[SerializeField] bool mirrorScale = true;
	[SerializeField] bool lockRotation = false;
	[SerializeField] Vector3 lockedRotation = Vector3.zero;
	
	void LateUpdate () {
		transform.position = spriteTransform.position + new Vector3 (offset.x, offset.y);
		if (mirrorScale)
			transform.localScale = spriteTransform.localScale;
		if (lockRotation)
			transform.rotation = Quaternion.Euler(lockedRotation);
	}
}

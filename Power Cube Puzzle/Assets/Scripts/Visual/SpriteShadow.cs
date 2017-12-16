using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class SpriteShadow : MonoBehaviour {

	[SerializeField] Transform spriteTransform;
	[SerializeField] Vector2 offset = new Vector2(-.1f, -.1f);

	// Use this for initialization
	void Start () {
		
	}
	
	// Update is called once per frame
	void Update () {
		transform.position = spriteTransform.position + new Vector3 (offset.x, offset.y);
	}
}

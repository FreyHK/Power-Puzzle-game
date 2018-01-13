using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class SpriteZOrder : MonoBehaviour {

	void Awake () {
		SpriteRenderer sr = GetComponent<SpriteRenderer>();
		sr.sortingOrder = Mathf.FloorToInt (transform.position.y);
	}
}

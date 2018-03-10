using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class TileZOrder : MonoBehaviour {

	void Start () {
		int z = Mathf.FloorToInt (transform.position.y);
		transform.position = new Vector3 (transform.position.x, transform.position.y, z/10f); 
	}
}

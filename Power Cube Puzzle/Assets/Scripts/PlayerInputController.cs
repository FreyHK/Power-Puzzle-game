using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System;

public class PlayerInputController : MonoBehaviour {

	public Action<Vector3> OnPlayerInput;

	void Start () {
		
	}

	void Update () {
		if (Input.GetMouseButtonDown (0)) {
			HandleInput ();
		}
	}

	void HandleInput () {
		RaycastHit hit;
		Ray ray = Camera.main.ScreenPointToRay (Input.mousePosition);
		if (Physics.Raycast (ray, out hit)) {
			if (OnPlayerInput != null)
				OnPlayerInput (hit.point);
		}
	}
}

using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System;

public class PlayerInputController : MonoBehaviour {

	public Action<Vector3> OnMouseClick;
	public Action OnSpaceDown;

	void Update () {
		if (Input.GetMouseButtonDown (0)) {
			HandleMouseInput ();
		}
		//FIXME testing
		if (Input.GetKeyDown(KeyCode.Space)) {
			if (OnSpaceDown != null)
				OnSpaceDown();
		}
	}

	void HandleMouseInput () {
		RaycastHit hit;
		Ray ray = Camera.main.ScreenPointToRay (Input.mousePosition);
		if (Physics.Raycast (ray, out hit)) {
			if (OnMouseClick != null)
				OnMouseClick (hit.point);
		}
	}
}

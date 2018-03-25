using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System;
using UnityEngine.EventSystems;

public class PlayerInputController : MonoBehaviour {

	void Update () {
		if (Input.GetMouseButtonDown (0)) {
			HandleMouseInput ();
		}
	}

	void HandleMouseInput () {
		if (EventSystem.current.IsPointerOverGameObject ())
			return;
		
		RaycastHit hit;
		Ray ray = Camera.main.ScreenPointToRay (Input.mousePosition);
		if (Physics.Raycast (ray, out hit)) {
			Hashtable data = new Hashtable ();
			data.Add ("point", hit.point);
			NotificationCenter.DefaultCenter.PostNotification (this, NotificationMessage.Input_OnWorldClick, data);
		}
	}
}

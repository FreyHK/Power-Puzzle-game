using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System;
using UnityEngine.EventSystems;

public class PlayerInputController : MonoBehaviour {

    WorldController worldController;

    public void Init (WorldController worldController) {
        this.worldController = worldController;
    }

	void Update () {
		if (Input.GetMouseButtonDown (0)) {
			HandleMouseInput ();
		}
	}

	void HandleMouseInput () {
		if (EventSystem.current.IsPointerOverGameObject ())
			return;

        Vector3 point = Camera.main.ScreenToWorldPoint(Input.mousePosition);
        worldController.OnWorldClick(point);
	}
}

using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class CameraController : MonoBehaviour {

	Camera cam;

	// Use this for initialization
	void Start () {
		cam = Camera.main;
	}

	float targetOrthographicSize;
	float zoomCooldown;

	public void SetViewMinSize (float minViewWidth, float minViewHeight) {
		//We want the half of the width and height
		float minWidth = minViewWidth / 2f/ Screen.width * Screen.height;
		minViewHeight /= 2f;

		targetOrthographicSize = Mathf.Max (minWidth, minViewHeight);
		zoomCooldown = 1f;
		cam.orthographicSize = targetOrthographicSize + targetOrthographicSize * .4f;
	}

	void Update () {
		zoomCooldown -= Time.deltaTime;
		if (zoomCooldown <= 0f) {
			if (cam.orthographicSize - targetOrthographicSize > .1f)
				cam.orthographicSize = Mathf.Lerp (cam.orthographicSize, targetOrthographicSize, Time.deltaTime * 2f);
		}
	}
}

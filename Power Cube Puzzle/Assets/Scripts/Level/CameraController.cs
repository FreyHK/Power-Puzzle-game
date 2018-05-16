using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class CameraController : MonoBehaviour {

	public Camera cam;

	float zoomedOutPercentage = .4f;
	float viewMargin = 1.25f;

	public void Initialize () {
		NotificationCenter.DefaultCenter.AddObserver(this, NotificationMessage.OnLevelStart);
		NotificationCenter.DefaultCenter.AddObserver(this, NotificationMessage.OnLevelComplete);
	}

	void OnLevelStart (Notification note) {
		LevelInfo level = (LevelInfo)note.data ["level"];
		float size = GetOrthographicSize (level.Width + viewMargin, level.Height + viewMargin);

		//Set view to zoomed out in case it isn't already
		cam.orthographicSize = size + size * zoomedOutPercentage;
			
		//We want to zoom in
		LerpToViewSize(size, .75f);
	}

	void OnLevelComplete (Notification note) {
		LevelInfo level = (LevelInfo)note.data ["level"];
		float size = GetOrthographicSize (level.Width + viewMargin, level.Height + viewMargin);

		//We want to zoom out a bit
		LerpToViewSize(size + size * zoomedOutPercentage, 0f);
	}

	float GetOrthographicSize (float minViewWidth, float minViewHeight) {
		//We want the half of the width and height
		float minWidth = minViewWidth / 2f/ Screen.width * Screen.height;
		minViewHeight /= 2f;

		return Mathf.Max (minWidth, minViewHeight);
	}

	//Zooming stuff
	float targetOrthographicSize = -1;
	float zoomCooldown;

	void LerpToViewSize (float size, float delay) {
		targetOrthographicSize = size;
		zoomCooldown = delay;
	}

	//Smooth moving stuff
	float moveDuration;

	Vector3 targetPos;
	Vector3 velocity = Vector3.zero;

	public void MovePosition (Vector2 target, float duration) {
		targetPos = new Vector3(target.x, target.y, -10);
		moveDuration = duration;
		velocity = Vector3.zero;
	}

	void LateUpdate () {
		//Wait for cooldown
		if (zoomCooldown <= 0f) {
			//Lerp to target zoom
			if (targetOrthographicSize > 0 && Mathf.Abs(cam.orthographicSize - targetOrthographicSize) > .05f)
				cam.orthographicSize = Mathf.Lerp (cam.orthographicSize, targetOrthographicSize, Time.deltaTime * 2f);
		}else
			zoomCooldown -= Time.deltaTime;

		//Smoothly moves towards target position
		if (targetPos != Vector3.zero)
			transform.position = Vector3.SmoothDamp (transform.position, targetPos, ref velocity, moveDuration);
	}
}

using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class CameraController : MonoBehaviour {

	public Camera cam;

	float zoomedOutPercentage = .5f; //We add a little extra margin
	float viewMargin = 1.1f; //1.25f;

	public void Initialize () {
		
	}
    
    public void SetTargetZoom (int width, int height, bool addMargin = false) {
        float size = GetOrthographicSize(width + viewMargin, height + viewMargin);

        //Make sure camera starts ZOOMED IN
        //cam.orthographicSize = size;

        //We want to zoom out
        float scale = addMargin ? (1f + zoomedOutPercentage) : 1f;
        LerpToViewSize(size * scale);
    }

	float GetOrthographicSize (float minViewWidth, float minViewHeight) {
		//We want the half of the width and height
		float minWidth = minViewWidth / 2f/ Screen.width * Screen.height;
		minViewHeight /= 2f;

		return Mathf.Max (minWidth, minViewHeight);
	}

	//Zooming stuff
	float targetOrthographicSize = -1;
    bool isZooming = false;

	void LerpToViewSize (float size) {
		targetOrthographicSize = size;
        isZooming = true;
    }

	void LateUpdate () {
        if (isZooming) {
            //Lerp to target zoom
            cam.orthographicSize = Mathf.Lerp(cam.orthographicSize, targetOrthographicSize, Time.deltaTime * 2f);

            if (Mathf.Abs(cam.orthographicSize - targetOrthographicSize) <= .05f)
                isZooming = false;
        }
	}
}

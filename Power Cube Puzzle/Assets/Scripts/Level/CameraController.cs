using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class CameraController : MonoBehaviour {

	public Camera cam;

	float zoomedOutPercentage = .5f; //We add a little extra margin
	float viewMargin = 1.1f; //1.25f;

	public void Initialize () {
		
	}
    
    public void ZoomOut (int width, int height) {
        float size = GetOrthographicSize(width + viewMargin, height + viewMargin);

        //Make sure camera starts ZOOMED IN
        cam.orthographicSize = size;

        //We want to zoom out
        LerpToViewSize(size * (1f + zoomedOutPercentage));
    }

    public void ZoomIn(int width, int height) {
        float size = GetOrthographicSize(width + viewMargin, height + viewMargin);

        //We want to zoom in
        LerpToViewSize(size);
    }

    public void SetZoom (int width, int height, bool zoomIn) {
        float size = GetOrthographicSize(width + viewMargin, height + viewMargin);

        if (!zoomIn)
            size *= 1f + zoomedOutPercentage;
        //print("Set zoom: zoomIn:" + zoomIn);
        cam.orthographicSize = size;
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

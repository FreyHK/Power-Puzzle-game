using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ScrollRectSnap : MonoBehaviour {

	//Parent of all buttons
	[SerializeField] RectTransform content;

	//Used to compare buttons
	[SerializeField] RectTransform center;

	[SerializeField] RectTransform[] btns;

	//Distance between each button
	int btnDistance;

	//Which button to lerp to when not draggin
	int minBtnIndex = 0;

	bool dragging = false;

	void Start () {
		//What is the distance between buttons?
		btnDistance = (int)Mathf.Abs(btns[1].anchoredPosition.x - btns[0].anchoredPosition.x); 
	}

	void Update () {
		if (!dragging)
			LerpToPosition (minBtnIndex * -btnDistance);
	}

	void LerpToPosition (int x) {
		float newX = Mathf.Lerp (content.anchoredPosition.x, x, Time.deltaTime * 10f);
		Vector2 newPos = new Vector2 (newX, content.anchoredPosition.y);
		content.anchoredPosition = newPos;
	}

	//Called from UI
	public void StartDrag () {
		dragging = true;
	}

	public void EndDrag () {
		dragging = false;

		float minDist = Mathf.Infinity;

		for (int i = 0; i < btns.Length; i++) {
			float dist = Mathf.Abs (center.transform.position.x - btns[i].transform.position.x);
			if (dist < minDist) {
				minDist = dist;
				minBtnIndex = i;
			}
		}
	}
}

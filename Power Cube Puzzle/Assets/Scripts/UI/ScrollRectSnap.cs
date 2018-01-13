using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ScrollRectSnap : MonoBehaviour {

	//Parent of all buttons
	[SerializeField] RectTransform content;

	//Used to compare buttons
	[SerializeField] RectTransform center;

	//Distance between each button
	[SerializeField] int btnDistance = 450;

	RectTransform[] childPanels;

	//Which button to lerp to when not draggin
	int minBtnIndex = 0;

	bool dragging = false;

	public void Initialize (RectTransform[] ChildPanels) {
		this.childPanels = ChildPanels;

		for (int i = 0; i < childPanels.Length; i++) {
			childPanels [i].anchoredPosition = new Vector2 (i * btnDistance, 0f);
		}
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

		for (int i = 0; i < childPanels.Length; i++) {
			float dist = Mathf.Abs (center.transform.position.x - childPanels[i].transform.position.x);
			if (dist < minDist) {
				minDist = dist;
				minBtnIndex = i;
			}
		}
	}
}

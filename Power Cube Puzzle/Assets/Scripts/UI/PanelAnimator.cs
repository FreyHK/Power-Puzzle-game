using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class PanelAnimator : MonoBehaviour {

	[SerializeField] Animator anim;
	[SerializeField] bool isOpen = false;

	public void ToggleOpen () {
		isOpen = !isOpen;
		anim.SetTrigger (isOpen ? "Open" : "Close");
	}
}

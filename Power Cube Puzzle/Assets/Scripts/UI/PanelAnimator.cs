using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class PanelAnimator : MonoBehaviour {

	[SerializeField] Animator anim;
	[SerializeField] Button OpenButton;
	[SerializeField] bool isOpen = false;

	void Awake () {
		if (!isOpen) {
			anim.Play("Close", 0, 1f);
		}else
			anim.Play("Open", 0, 1f);
	}

	public void ToggleOpen () {
		//Don't open/close if already animating
		if (anim.GetCurrentAnimatorStateInfo (0).IsName ("Close -> Open") ||
		    anim.GetCurrentAnimatorStateInfo (0).IsName ("Open -> Close"))
			return;
		
		isOpen = !isOpen;
		anim.SetTrigger (isOpen ? "Open" : "Close");
	}

	public void SetButtonEnabled (bool value) {
		OpenButton.interactable = value;
	}
}

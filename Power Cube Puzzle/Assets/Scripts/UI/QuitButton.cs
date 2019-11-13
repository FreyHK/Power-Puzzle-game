using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class QuitButton : MonoBehaviour
{

#if PLATFORM_STANDALONE || UNITY_WEBGL || UNITY_EDITOR
    private void Awake()
    {
        //Show this button if running on PC
        gameObject.SetActive(true);
    }
#endif

    public void Quit()
    {
        Application.Quit();
    }
}

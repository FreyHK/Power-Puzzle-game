using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class PrivacyPolicyButton : MonoBehaviour
{

    
#if PLATFORM_STANDALONE || UNITY_WEBGL || UNITY_EDITOR
    private void Awake()
    {
        //Hide this button if running on PC
        gameObject.SetActive(false);
    }
#endif

    const string URL = "https://docs.google.com/document/d/1-VxVem0V0WRRmjpu5ShLkYiNcV8Pyffi01CvzVF6Nmk/edit";

    public void OpenLink()
    {
        Application.OpenURL(URL);
    }
}

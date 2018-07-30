using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ScreenshotCreator : MonoBehaviour {

    public int resWidth = 2550;
    public int resHeight = 3300;

    private bool takeHiResShot = false;

    public static string ScreenShotName(int width, int height) {
        return string.Format("{0}/Screenshots/screen_{1}x{2}_{3}.png",
                             Application.dataPath,
                             width, height,
                             System.DateTime.Now.ToString("yyyy-MM-dd_HH-mm-ss"));
    }

    public void TakeHiResShot() {
        takeHiResShot = true;
    }

    void LateUpdate() {
        takeHiResShot |= Input.GetKeyDown("k");
        if (takeHiResShot) {

            string fileName = ScreenShotName(Screen.width, Screen.height);
            ScreenCapture.CaptureScreenshot(fileName);

            Debug.Log(string.Format("Took screenshot to: {0}", fileName));
            takeHiResShot = false;
        }
    }
}

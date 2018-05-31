using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class SpriteFader : MonoBehaviour {

	public SpriteRenderer[] sprites;

    bool fadeIn = false;
    bool fadeOut = false;

    public void FadeIn (float duration)
    {
        gameObject.SetActive(true);
        speed = 1f/duration;
        fadeIn = true;
        fadeOut = false;
        t = 0f;
    }

    public void FadeOut(float duration, bool disableOnFinish)
    {
        gameObject.SetActive(true);
        speed = 1f / duration;
        fadeIn = false;
        fadeOut = true;
        t = 0f;
        this.disableOnFinish = disableOnFinish;
    }

    bool disableOnFinish;
    float speed = 1f;
    float t;

	void Update () {
        if (fadeIn || fadeOut) {
            t += Time.deltaTime * speed;
            
            float a;
            if (fadeIn)
                a = Mathf.Lerp(0f, 1f, t);
            else
                a = Mathf.Lerp(1f, 0f, t);

            for (int i = 0; i < sprites.Length; i++)
            {
                Color c = sprites[i].color;
                sprites[i].color = new Color(c.r, c.g, c.b, a);
            }

            if (t >= 1f)
            {
                fadeIn = false;
                fadeOut = false;
                if (disableOnFinish)
                    gameObject.SetActive(false);
            }
        }
	}
}

using System.Collections;
using System.Collections.Generic;
using UnityEngine;

[CreateAssetMenu(fileName = "New ColorTheme", menuName = "Data/ColorTheme")]
public class ColorThemeScriptableObject : ScriptableObject {

    [Header("In-Game")]
    public Color BoardColor = new Color(.455f, .714f, .439f);
	public Color WireUnlit = Color.green;
	public Color WireUnlitShadow = Color.black;
	public Color WireLit = Color.white;
	public Color WireLitShadow = Color.black;
    public Color LampHandle = Color.grey;
    public Color LampHandleShadow = new Color(.4f, .4f, .4f);

    [Space(5f)]
    public Color ParticleColor = Color.yellow;



    [Header("UI")]
    public Color ButtonSmall = Color.blue;
    public Color TextRegular = Color.black;
}

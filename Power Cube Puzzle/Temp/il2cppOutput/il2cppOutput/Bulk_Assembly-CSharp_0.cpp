#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <cstring>
#include <string.h>
#include <stdio.h>
#include <cmath>
#include <limits>
#include <assert.h>
#include <stdint.h>

#include "il2cpp-class-internals.h"
#include "codegen/il2cpp-codegen.h"
#include "il2cpp-object-internals.h"

template <typename R, typename T1>
struct VirtFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename T1, typename T2>
struct VirtActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename T1>
struct VirtActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};

// AdManager
struct AdManager_t2410889370;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t3962482529;
// System.String
struct String_t;
// CameraController
struct CameraController_t3346819214;
// NotificationCenter
struct NotificationCenter_t2218695229;
// UnityEngine.Component
struct Component_t1923634451;
// Notification
struct Notification_t2099770324;
// LevelInfo
struct LevelInfo_t1513202700;
// UnityEngine.Camera
struct Camera_t4157153871;
// UnityEngine.Transform
struct Transform_t3600365921;
// GameController
struct GameController_t2330501625;
// UnityEngine.GameObject
struct GameObject_t1113636619;
// UnityEngine.Object
struct Object_t631007953;
// WorldController
struct WorldController_t23517691;
// TileController
struct TileController_t1073589649;
// TimedTileController
struct TimedTileController_t3243845658;
// UIManager
struct UIManager_t1042050227;
// LevelCollection
struct LevelCollection_t2422035869;
// LerpSprite
struct LerpSprite_t1901857106;
// UnityEngine.SpriteRenderer
struct SpriteRenderer_t3235626157;
// LevelCollection/LevelPreset
struct LevelPreset_t3313492856;
// System.Collections.Hashtable
struct Hashtable_t1853889766;
// System.Collections.Generic.List`1<UnityEngine.Component>
struct List_1_t3395709193;
// System.Collections.Generic.List`1<System.Object>
struct List_1_t257213610;
// PanelAnimator
struct PanelAnimator_t918022618;
// UnityEngine.Animator
struct Animator_t434523843;
// UnityEngine.UI.Selectable
struct Selectable_t3250028441;
// PauseMenu
struct PauseMenu_t3916167947;
// TMPro.TMP_Text
struct TMP_Text_t2599618874;
// PlayerInputController
struct PlayerInputController_t3825146532;
// UnityEngine.EventSystems.EventSystem
struct EventSystem_t1003666588;
// SoundManager
struct SoundManager_t2102329059;
// UnityEngine.AudioSource
struct AudioSource_t3935305588;
// UnityEngine.UI.Image
struct Image_t2670269651;
// UnityEngine.Sprite
struct Sprite_t280657092;
// UnityEngine.AudioClip
struct AudioClip_t3680889665;
// SoundManager/SoundClip
struct SoundClip_t3378538503;
// SpriteFader
struct SpriteFader_t713818650;
// SpriteShadow
struct SpriteShadow_t829501545;
// Tile
struct Tile_t2634157908;
// System.Boolean[]
struct BooleanU5BU5D_t2897418192;
// Tile[]
struct TileU5BU5D_t3330163933;
// System.Collections.Generic.List`1<Tile>
struct List_1_t4106232650;
// System.Object[]
struct ObjectU5BU5D_t2843939325;
// TileColorController
struct TileColorController_t1573688495;
// TileColorData
struct TileColorData_t4183236388;
// TileColorController/SpriteColor
struct SpriteColor_t3051291064;
// UnityEngine.ParticleSystem
struct ParticleSystem_t1800779281;
// UnityEngine.ScriptableObject
struct ScriptableObject_t2528358522;
// System.Collections.Generic.Dictionary`2<Tile,TileColorController>
struct Dictionary_2_t3407319387;
// System.Collections.Generic.Dictionary`2<System.Object,System.Object>
struct Dictionary_2_t132545152;
// System.Collections.Generic.Queue`1<Tile>
struct Queue_1_t2480417402;
// System.Collections.Generic.Queue`1<System.Object>
struct Queue_1_t2926365658;
// TileGrid
struct TileGrid_t3345275584;
// Tile[0...,0...]
struct TileU5B0___U2C0___U5D_t3330163934;
// TilePrefabManager
struct TilePrefabManager_t293433569;
// System.Boolean[0...,0...]
struct BooleanU5B0___U2C0___U5D_t2897418193;
// TileMapGenerator
struct TileMapGenerator_t1694036907;
// GridDirection[]
struct GridDirectionU5BU5D_t3393422547;
// System.Collections.Generic.List`1<System.Int32>
struct List_1_t128053199;
// TileZOrder
struct TileZOrder_t3349568238;
// TutorialController
struct TutorialController_t1549000916;
// UnityEngine.Renderer
struct Renderer_t2627027031;
// UnityEngine.AudioClip[]
struct AudioClipU5BU5D_t143221404;
// System.Int32[]
struct Int32U5BU5D_t385246372;
// System.Collections.Generic.Link[]
struct LinkU5BU5D_t964245573;
// TileColorController[]
struct TileColorControllerU5BU5D_t184545206;
// System.Collections.Generic.IEqualityComparer`1<Tile>
struct IEqualityComparer_1_t446522630;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t950877179;
// System.Collections.Generic.Dictionary`2/Transform`1<Tile,TileColorController,System.Collections.DictionaryEntry>
struct Transform_1_t1278575381;
// TileType[0...,0...]
struct TileTypeU5B0___U2C0___U5D_t1226088886;
// System.Char[]
struct CharU5BU5D_t3528271667;
// System.Collections.Hashtable/Slot[]
struct SlotU5BU5D_t2994659099;
// System.Collections.Hashtable/HashKeys
struct HashKeys_t1568156503;
// System.Collections.Hashtable/HashValues
struct HashValues_t618387445;
// System.Collections.IHashCodeProvider
struct IHashCodeProvider_t267601189;
// System.Collections.IComparer
struct IComparer_t1540313114;
// System.Collections.IEqualityComparer
struct IEqualityComparer_t1493878338;
// UnityEngine.Component[]
struct ComponentU5BU5D_t3294940482;
// TMPro.TMP_ColorGradient[]
struct TMP_ColorGradientU5BU5D_t2496920137;
// TMPro.TMP_ColorGradient
struct TMP_ColorGradient_t3678055768;
// System.Void
struct Void_t1185182177;
// TMPro.TMP_FontAsset
struct TMP_FontAsset_t364381626;
// TMPro.TMP_SpriteAsset
struct TMP_SpriteAsset_t484820633;
// UnityEngine.Material
struct Material_t340375123;
// System.Single[]
struct SingleU5BU5D_t1444911251;
// TMPro.MaterialReference[]
struct MaterialReferenceU5BU5D_t648826345;
// UnityEngine.Color32[]
struct Color32U5BU5D_t3850468773;
// TMPro.TextAlignmentOptions[]
struct TextAlignmentOptionsU5BU5D_t3552942253;
// UnityEngine.AudioClip/PCMReaderCallback
struct PCMReaderCallback_t1677636661;
// UnityEngine.AudioClip/PCMSetPositionCallback
struct PCMSetPositionCallback_t1059417452;
// TMPro.TMP_TextInfo
struct TMP_TextInfo_t3598145122;
// UnityEngine.Camera/CameraCallback
struct CameraCallback_t190067161;
// SoundManager/SoundClip[]
struct SoundClipU5BU5D_t2720230398;
// UnityEngine.Sprite[]
struct SpriteU5BU5D_t2581906349;
// UnityEngine.AudioSourceExtension
struct AudioSourceExtension_t3064908834;
// TMPro.TextMeshProUGUI
struct TextMeshProUGUI_t529313277;
// UnityEngine.SpriteRenderer[]
struct SpriteRendererU5BU5D_t911335936;
// LevelCollection/LevelPreset[]
struct LevelPresetU5BU5D_t629770153;
// TileColorController/SpriteColor[]
struct SpriteColorU5BU5D_t2190272617;
// SpriteFader[]
struct SpriteFaderU5BU5D_t3833479231;
// UnityEngine.UI.Button
struct Button_t4055032469;
// UnityEngine.Transform[]
struct TransformU5BU5D_t807237628;
// UnityEngine.Texture2D
struct Texture2D_t3840446185;
// UnityEngine.RectTransform
struct RectTransform_t3704657025;
// UnityEngine.CanvasRenderer
struct CanvasRenderer_t2598313366;
// UnityEngine.Canvas
struct Canvas_t3310196443;
// UnityEngine.Events.UnityAction
struct UnityAction_t3245792599;
// UnityEngine.Mesh
struct Mesh_t3648964284;
// UnityEngine.UI.VertexHelper
struct VertexHelper_t2453304189;
// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween>
struct TweenRunner_1_t3055525458;
// System.Collections.Generic.List`1<UnityEngine.UI.Selectable>
struct List_1_t427135887;
// UnityEngine.UI.AnimationTriggers
struct AnimationTriggers_t2532145056;
// UnityEngine.UI.Graphic
struct Graphic_t1660335611;
// System.Collections.Generic.List`1<UnityEngine.CanvasGroup>
struct List_1_t1260619206;
// System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseInputModule>
struct List_1_t3491343620;
// UnityEngine.EventSystems.BaseInputModule
struct BaseInputModule_t2019268878;
// System.Collections.Generic.List`1<UnityEngine.EventSystems.EventSystem>
struct List_1_t2475741330;
// UnityEngine.EventSystems.BaseEventData
struct BaseEventData_t3903027533;
// System.Comparison`1<UnityEngine.EventSystems.RaycastResult>
struct Comparison_1_t3135238028;
// UnityEngine.UI.RectMask2D
struct RectMask2D_t3474889437;
// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent
struct CullStateChangedEvent_t3661388177;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_t1718750761;
// UnityEngine.UI.Button/ButtonClickedEvent
struct ButtonClickedEvent_t48803504;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>
struct Dictionary_2_t1839659084;
// UnityEngine.Material[]
struct MaterialU5BU5D_t561872642;
// TMPro.TMP_SpriteAnimator
struct TMP_SpriteAnimator_t2836635477;
// UnityEngine.UI.LayoutElement
struct LayoutElement_t1785403678;
// TMPro.XML_TagAttribute[]
struct XML_TagAttributeU5BU5D_t284240280;
// TMPro.TMP_CharacterInfo[]
struct TMP_CharacterInfoU5BU5D_t1930184704;
// TMPro.TMP_TextElement
struct TMP_TextElement_t129727469;
// TMPro.TMP_Glyph
struct TMP_Glyph_t581847833;
// UnityEngine.Vector2[]
struct Vector2U5BU5D_t1457185986;
// TMPro.TMP_SubMeshUI[]
struct TMP_SubMeshUIU5BU5D_t3119380694;

extern String_t* _stringLiteral2118094221;
extern const uint32_t AdManager_Start_m658114702_MetadataUsageId;
extern RuntimeClass* Advertisement_t842671397_il2cpp_TypeInfo_var;
extern const uint32_t AdManager_TryShowAd_m2034507698_MetadataUsageId;
extern RuntimeClass* Vector3_t3722313464_il2cpp_TypeInfo_var;
extern const uint32_t CameraController__ctor_m3292347237_MetadataUsageId;
extern String_t* _stringLiteral2286385673;
extern String_t* _stringLiteral2430327460;
extern const uint32_t CameraController_Initialize_m3777996556_MetadataUsageId;
extern RuntimeClass* LevelInfo_t1513202700_il2cpp_TypeInfo_var;
extern String_t* _stringLiteral1232840130;
extern const uint32_t CameraController_OnLevelStart_m1900434523_MetadataUsageId;
extern const uint32_t CameraController_OnLevelComplete_m3337127200_MetadataUsageId;
extern RuntimeClass* Mathf_t3464937446_il2cpp_TypeInfo_var;
extern const uint32_t CameraController_GetOrthographicSize_m277825500_MetadataUsageId;
extern const uint32_t CameraController_MovePosition_m3895605739_MetadataUsageId;
extern const uint32_t CameraController_LateUpdate_m818054945_MetadataUsageId;
extern RuntimeClass* GameController_t2330501625_il2cpp_TypeInfo_var;
extern RuntimeClass* Object_t631007953_il2cpp_TypeInfo_var;
extern String_t* _stringLiteral188005990;
extern const uint32_t GameController_Start_m1173294274_MetadataUsageId;
extern const uint32_t GameController_Update_m217025042_MetadataUsageId;
extern const uint32_t GameController_StartCurrentLevel_m3542281468_MetadataUsageId;
extern const uint32_t GameController_StartNextLevel_m3220157239_MetadataUsageId;
extern const uint32_t GameController_OnLevelComplete_m1635021308_MetadataUsageId;
extern const RuntimeMethod* Component_GetComponent_TisSpriteRenderer_t3235626157_m2253180502_RuntimeMethod_var;
extern const uint32_t LerpSprite_Start_m3752919083_MetadataUsageId;
extern const uint32_t LevelCollection_GetLevel_m3517958994_MetadataUsageId;
extern RuntimeClass* TileTypeU5B0___U2C0___U5D_t1226088886_il2cpp_TypeInfo_var;
extern RuntimeClass* BooleanU5B0___U2C0___U5D_t2897418193_il2cpp_TypeInfo_var;
extern const uint32_t LevelInfo__ctor_m2022729631_MetadataUsageId;
extern RuntimeClass* Hashtable_t1853889766_il2cpp_TypeInfo_var;
extern const uint32_t NotificationCenter__ctor_m2281434081_MetadataUsageId;
extern RuntimeClass* NotificationCenter_t2218695229_il2cpp_TypeInfo_var;
extern RuntimeClass* GameObject_t1113636619_il2cpp_TypeInfo_var;
extern const RuntimeMethod* GameObject_AddComponent_TisNotificationCenter_t2218695229_m4196679536_RuntimeMethod_var;
extern String_t* _stringLiteral2072774192;
extern const uint32_t NotificationCenter_get_DefaultCenter_m4216969841_MetadataUsageId;
extern RuntimeClass* String_t_il2cpp_TypeInfo_var;
extern RuntimeClass* Debug_t3317548046_il2cpp_TypeInfo_var;
extern RuntimeClass* List_1_t3395709193_il2cpp_TypeInfo_var;
extern const RuntimeMethod* List_1__ctor_m504713606_RuntimeMethod_var;
extern const RuntimeMethod* List_1_Contains_m200023965_RuntimeMethod_var;
extern const RuntimeMethod* List_1_Add_m3267405110_RuntimeMethod_var;
extern String_t* _stringLiteral1793134530;
extern const uint32_t NotificationCenter_AddObserver_m571966720_MetadataUsageId;
extern const RuntimeMethod* List_1_Remove_m96541543_RuntimeMethod_var;
extern const RuntimeMethod* List_1_get_Count_m1294235957_RuntimeMethod_var;
extern const uint32_t NotificationCenter_RemoveObserver_m3301975025_MetadataUsageId;
extern RuntimeClass* Notification_t2099770324_il2cpp_TypeInfo_var;
extern const uint32_t NotificationCenter_PostNotification_m2114245645_MetadataUsageId;
extern const RuntimeMethod* List_1_GetEnumerator_m4128318975_RuntimeMethod_var;
extern const RuntimeMethod* Enumerator_get_Current_m1782500462_RuntimeMethod_var;
extern const RuntimeMethod* Enumerator_MoveNext_m4232616038_RuntimeMethod_var;
extern const RuntimeMethod* Enumerator_Dispose_m4132484595_RuntimeMethod_var;
extern String_t* _stringLiteral2067484346;
extern String_t* _stringLiteral1956414792;
extern const uint32_t NotificationCenter_PostNotification_m2079818164_MetadataUsageId;
extern String_t* _stringLiteral3483484711;
extern String_t* _stringLiteral3905732978;
extern const uint32_t PanelAnimator_Awake_m2329624148_MetadataUsageId;
extern String_t* _stringLiteral2628724878;
extern String_t* _stringLiteral2676185457;
extern const uint32_t PanelAnimator_ToggleOpen_m800681097_MetadataUsageId;
extern const uint32_t PauseMenu_Update_m1844139191_MetadataUsageId;
extern String_t* _stringLiteral3452614544;
extern String_t* _stringLiteral3179010853;
extern String_t* _stringLiteral3452614550;
extern const uint32_t PauseMenu_UpdateTimer_m1180594338_MetadataUsageId;
extern String_t* _stringLiteral1234938274;
extern String_t* _stringLiteral3140192811;
extern const uint32_t PauseMenu_Toggle_m2206255916_MetadataUsageId;
extern RuntimeClass* Input_t1431474628_il2cpp_TypeInfo_var;
extern const uint32_t PlayerInputController_Update_m3201225867_MetadataUsageId;
extern RuntimeClass* EventSystem_t1003666588_il2cpp_TypeInfo_var;
extern String_t* _stringLiteral33228063;
extern String_t* _stringLiteral283385980;
extern const uint32_t PlayerInputController_HandleMouseInput_m2991958618_MetadataUsageId;
extern RuntimeClass* SoundManager_t2102329059_il2cpp_TypeInfo_var;
extern String_t* _stringLiteral4042210679;
extern String_t* _stringLiteral668216908;
extern const uint32_t SoundManager_Start_m2990335043_MetadataUsageId;
extern const uint32_t SoundManager_OnDestroy_m459141320_MetadataUsageId;
extern const uint32_t SoundManager_Play_m472215855_MetadataUsageId;
extern RuntimeClass* AudioClipU5BU5D_t143221404_il2cpp_TypeInfo_var;
extern String_t* _stringLiteral1231357559;
extern const uint32_t SoundClip__ctor_m1943900111_MetadataUsageId;
extern const uint32_t SpriteFader_Update_m1061746376_MetadataUsageId;
extern const uint32_t SpriteShadow__ctor_m3094870613_MetadataUsageId;
extern RuntimeClass* Quaternion_t2301928331_il2cpp_TypeInfo_var;
extern const uint32_t SpriteShadow_LateUpdate_m1341448994_MetadataUsageId;
extern RuntimeClass* TileU5BU5D_t3330163933_il2cpp_TypeInfo_var;
extern RuntimeClass* BooleanU5BU5D_t2897418192_il2cpp_TypeInfo_var;
extern const uint32_t Tile__ctor_m1077387618_MetadataUsageId;
extern RuntimeClass* List_1_t4106232650_il2cpp_TypeInfo_var;
extern const RuntimeMethod* List_1__ctor_m855662214_RuntimeMethod_var;
extern const RuntimeMethod* List_1_Add_m1764557302_RuntimeMethod_var;
extern const RuntimeMethod* List_1_ToArray_m1416750410_RuntimeMethod_var;
extern const uint32_t Tile_GetConnectedNeighbors_m2873489518_MetadataUsageId;
extern const uint32_t Tile_Rotate_m3768246377_MetadataUsageId;
extern String_t* _stringLiteral852187533;
extern const uint32_t TileColorController_UpdateVisuals_m3275429678_MetadataUsageId;
extern const uint32_t TileColorController_Update_m773543070_MetadataUsageId;
extern RuntimeClass* Dictionary_2_t3407319387_il2cpp_TypeInfo_var;
extern RuntimeClass* Queue_1_t2480417402_il2cpp_TypeInfo_var;
extern const RuntimeMethod* Dictionary_2__ctor_m1115599464_RuntimeMethod_var;
extern const RuntimeMethod* Queue_1__ctor_m1328433775_RuntimeMethod_var;
extern const uint32_t TileController__ctor_m2109448571_MetadataUsageId;
extern const RuntimeMethod* Object_Instantiate_TisTransform_t3600365921_m3225670752_RuntimeMethod_var;
extern const RuntimeMethod* Component_GetComponentInChildren_TisTileColorController_t1573688495_m4036526529_RuntimeMethod_var;
extern const RuntimeMethod* Dictionary_2_Add_m151662308_RuntimeMethod_var;
extern const uint32_t TileController_CreateTiles_m1433907476_MetadataUsageId;
extern const RuntimeMethod* Dictionary_2_GetEnumerator_m3357386693_RuntimeMethod_var;
extern const RuntimeMethod* Enumerator_get_Current_m3767502163_RuntimeMethod_var;
extern const RuntimeMethod* KeyValuePair_2_get_Value_m2665827663_RuntimeMethod_var;
extern const RuntimeMethod* Enumerator_MoveNext_m3362643134_RuntimeMethod_var;
extern const RuntimeMethod* Enumerator_Dispose_m2707954585_RuntimeMethod_var;
extern const RuntimeMethod* Dictionary_2_Clear_m701984577_RuntimeMethod_var;
extern const uint32_t TileController_ClearTileGameObjects_m540467540_MetadataUsageId;
extern const RuntimeMethod* Dictionary_2_ContainsKey_m2187175349_RuntimeMethod_var;
extern const RuntimeMethod* Dictionary_2_get_Item_m1604855262_RuntimeMethod_var;
extern const uint32_t TileController_UpdateTileVisuals_m3550407352_MetadataUsageId;
extern const RuntimeMethod* Queue_1_Enqueue_m2517726190_RuntimeMethod_var;
extern String_t* _stringLiteral3655881937;
extern String_t* _stringLiteral1355574944;
extern const uint32_t TileController_RotateTile_m2881787778_MetadataUsageId;
extern const RuntimeMethod* Queue_1_get_Count_m3354354946_RuntimeMethod_var;
extern const RuntimeMethod* Queue_1_Dequeue_m4163830294_RuntimeMethod_var;
extern String_t* _stringLiteral3695837802;
extern const uint32_t TileController_UpdateTiles_m1627070111_MetadataUsageId;
extern const uint32_t TileController_IsRotatingTiles_m2868273090_MetadataUsageId;
extern RuntimeClass* TileU5B0___U2C0___U5D_t3330163934_il2cpp_TypeInfo_var;
extern RuntimeClass* Tile_t2634157908_il2cpp_TypeInfo_var;
extern const uint32_t TileGrid__ctor_m2946651068_MetadataUsageId;
extern RuntimeClass* TileMapGenerator_t1694036907_il2cpp_TypeInfo_var;
extern const uint32_t TileGrid_FillMap_m3241352648_MetadataUsageId;
extern const RuntimeMethod* List_1_Contains_m1244656029_RuntimeMethod_var;
extern const uint32_t TileGrid_UpdateTilePower_m3239097173_MetadataUsageId;
extern RuntimeClass* Int32U5BU5D_t385246372_il2cpp_TypeInfo_var;
extern const uint32_t TileMapGenerator__ctor_m3725985903_MetadataUsageId;
extern RuntimeClass* List_1_t128053199_il2cpp_TypeInfo_var;
extern RuntimeClass* GridDirectionU5BU5D_t3393422547_il2cpp_TypeInfo_var;
extern const RuntimeMethod* List_1__ctor_m1628857705_RuntimeMethod_var;
extern const RuntimeMethod* List_1_Add_m697420525_RuntimeMethod_var;
extern const RuntimeMethod* List_1_get_Count_m361000296_RuntimeMethod_var;
extern const RuntimeMethod* List_1_get_Item_m888956288_RuntimeMethod_var;
extern const RuntimeMethod* List_1_RemoveAt_m2770200702_RuntimeMethod_var;
extern const uint32_t TileMapGenerator_RandomDirections_m4194603747_MetadataUsageId;
extern const RuntimeMethod* List_1_get_Count_m1405008821_RuntimeMethod_var;
extern const RuntimeMethod* List_1_get_Item_m2624909818_RuntimeMethod_var;
extern const RuntimeMethod* List_1_Remove_m2860109562_RuntimeMethod_var;
extern const RuntimeMethod* List_1_Clear_m4168133901_RuntimeMethod_var;
extern const uint32_t TileMapGenerator_GenerateMap_m3483659827_MetadataUsageId;
extern const uint32_t TileMetrics_EmptyOutlets_m4184200475_MetadataUsageId;
extern const uint32_t TileZOrder_Start_m1483763135_MetadataUsageId;
extern const uint32_t TimedTileController__ctor_m2623356456_MetadataUsageId;
extern String_t* _stringLiteral2106178105;
extern const uint32_t TimedTileController_Initialize_m196164070_MetadataUsageId;
extern RuntimeClass* TileGrid_t3345275584_il2cpp_TypeInfo_var;
extern String_t* _stringLiteral2340450262;
extern const uint32_t TimedTileController_OnLevelStart_m356000210_MetadataUsageId;
extern RuntimeClass* Int32_t2950945753_il2cpp_TypeInfo_var;
extern String_t* _stringLiteral63249541;
extern const uint32_t TimedTileController_OnGridUpdate_m772622604_MetadataUsageId;
extern const uint32_t TutorialController_Start_m988841314_MetadataUsageId;
extern const uint32_t TutorialController_OnLevelStart_m1224771153_MetadataUsageId;
extern const uint32_t UIManager_Initialize_m1126019099_MetadataUsageId;
extern String_t* _stringLiteral3984493053;
extern const uint32_t UIManager_OnLevelComplete_m2765243169_MetadataUsageId;
extern const uint32_t WorldController_Initialize_m831189363_MetadataUsageId;
extern String_t* _stringLiteral2512479461;
extern const uint32_t WorldController_InitializeLevel_m509353978_MetadataUsageId;
extern const uint32_t WorldController_GridUpdate_m2341492780_MetadataUsageId;
extern String_t* _stringLiteral3252941476;
extern const uint32_t WorldController_CheckForVictory_m1888888687_MetadataUsageId;
extern const uint32_t WorldController_Input_OnWorldClick_m3683419441_MetadataUsageId;

struct LevelPresetU5BU5D_t629770153;
struct TileTypeU5B0___U2C0___U5D_t1226088886;
struct BooleanU5B0___U2C0___U5D_t2897418193;
struct SpriteU5BU5D_t2581906349;
struct SoundClipU5BU5D_t2720230398;
struct AudioClipU5BU5D_t143221404;
struct SpriteRendererU5BU5D_t911335936;
struct TileU5BU5D_t3330163933;
struct BooleanU5BU5D_t2897418192;
struct SpriteColorU5BU5D_t2190272617;
struct TileU5B0___U2C0___U5D_t3330163934;
struct Int32U5BU5D_t385246372;
struct GridDirectionU5BU5D_t3393422547;
struct TransformU5BU5D_t807237628;
struct SpriteFaderU5BU5D_t3833479231;


#ifndef U3CMODULEU3E_T692745547_H
#define U3CMODULEU3E_T692745547_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct  U3CModuleU3E_t692745547 
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CMODULEU3E_T692745547_H
#ifndef RUNTIMEOBJECT_H
#define RUNTIMEOBJECT_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Object

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RUNTIMEOBJECT_H
struct Il2CppArrayBounds;
#ifndef RUNTIMEARRAY_H
#define RUNTIMEARRAY_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Array

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RUNTIMEARRAY_H
#ifndef LEVELPRESET_T3313492856_H
#define LEVELPRESET_T3313492856_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// LevelCollection/LevelPreset
struct  LevelPreset_t3313492856  : public RuntimeObject
{
public:
	// System.Int32 LevelCollection/LevelPreset::width
	int32_t ___width_0;
	// System.Int32 LevelCollection/LevelPreset::height
	int32_t ___height_1;

public:
	inline static int32_t get_offset_of_width_0() { return static_cast<int32_t>(offsetof(LevelPreset_t3313492856, ___width_0)); }
	inline int32_t get_width_0() const { return ___width_0; }
	inline int32_t* get_address_of_width_0() { return &___width_0; }
	inline void set_width_0(int32_t value)
	{
		___width_0 = value;
	}

	inline static int32_t get_offset_of_height_1() { return static_cast<int32_t>(offsetof(LevelPreset_t3313492856, ___height_1)); }
	inline int32_t get_height_1() const { return ___height_1; }
	inline int32_t* get_address_of_height_1() { return &___height_1; }
	inline void set_height_1(int32_t value)
	{
		___height_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LEVELPRESET_T3313492856_H
#ifndef NOTIFICATIONMESSAGE_T3328021310_H
#define NOTIFICATIONMESSAGE_T3328021310_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// NotificationMessage
struct  NotificationMessage_t3328021310  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NOTIFICATIONMESSAGE_T3328021310_H
#ifndef GRIDDIRECTIONEXTENSIONS_T3679292005_H
#define GRIDDIRECTIONEXTENSIONS_T3679292005_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GridDirectionExtensions
struct  GridDirectionExtensions_t3679292005  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GRIDDIRECTIONEXTENSIONS_T3679292005_H
#ifndef SOUNDCLIP_T3378538503_H
#define SOUNDCLIP_T3378538503_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// SoundManager/SoundClip
struct  SoundClip_t3378538503  : public RuntimeObject
{
public:
	// System.String SoundManager/SoundClip::name
	String_t* ___name_0;
	// UnityEngine.AudioClip[] SoundManager/SoundClip::clips
	AudioClipU5BU5D_t143221404* ___clips_1;

public:
	inline static int32_t get_offset_of_name_0() { return static_cast<int32_t>(offsetof(SoundClip_t3378538503, ___name_0)); }
	inline String_t* get_name_0() const { return ___name_0; }
	inline String_t** get_address_of_name_0() { return &___name_0; }
	inline void set_name_0(String_t* value)
	{
		___name_0 = value;
		Il2CppCodeGenWriteBarrier((&___name_0), value);
	}

	inline static int32_t get_offset_of_clips_1() { return static_cast<int32_t>(offsetof(SoundClip_t3378538503, ___clips_1)); }
	inline AudioClipU5BU5D_t143221404* get_clips_1() const { return ___clips_1; }
	inline AudioClipU5BU5D_t143221404** get_address_of_clips_1() { return &___clips_1; }
	inline void set_clips_1(AudioClipU5BU5D_t143221404* value)
	{
		___clips_1 = value;
		Il2CppCodeGenWriteBarrier((&___clips_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SOUNDCLIP_T3378538503_H
#ifndef LIST_1_T4106232650_H
#define LIST_1_T4106232650_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.List`1<Tile>
struct  List_1_t4106232650  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	TileU5BU5D_t3330163933* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t4106232650, ____items_1)); }
	inline TileU5BU5D_t3330163933* get__items_1() const { return ____items_1; }
	inline TileU5BU5D_t3330163933** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(TileU5BU5D_t3330163933* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((&____items_1), value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t4106232650, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t4106232650, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}
};

struct List_1_t4106232650_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::EmptyArray
	TileU5BU5D_t3330163933* ___EmptyArray_4;

public:
	inline static int32_t get_offset_of_EmptyArray_4() { return static_cast<int32_t>(offsetof(List_1_t4106232650_StaticFields, ___EmptyArray_4)); }
	inline TileU5BU5D_t3330163933* get_EmptyArray_4() const { return ___EmptyArray_4; }
	inline TileU5BU5D_t3330163933** get_address_of_EmptyArray_4() { return &___EmptyArray_4; }
	inline void set_EmptyArray_4(TileU5BU5D_t3330163933* value)
	{
		___EmptyArray_4 = value;
		Il2CppCodeGenWriteBarrier((&___EmptyArray_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LIST_1_T4106232650_H
#ifndef DICTIONARY_2_T3407319387_H
#define DICTIONARY_2_T3407319387_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.Dictionary`2<Tile,TileColorController>
struct  Dictionary_2_t3407319387  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.Dictionary`2::table
	Int32U5BU5D_t385246372* ___table_4;
	// System.Collections.Generic.Link[] System.Collections.Generic.Dictionary`2::linkSlots
	LinkU5BU5D_t964245573* ___linkSlots_5;
	// TKey[] System.Collections.Generic.Dictionary`2::keySlots
	TileU5BU5D_t3330163933* ___keySlots_6;
	// TValue[] System.Collections.Generic.Dictionary`2::valueSlots
	TileColorControllerU5BU5D_t184545206* ___valueSlots_7;
	// System.Int32 System.Collections.Generic.Dictionary`2::touchedSlots
	int32_t ___touchedSlots_8;
	// System.Int32 System.Collections.Generic.Dictionary`2::emptySlot
	int32_t ___emptySlot_9;
	// System.Int32 System.Collections.Generic.Dictionary`2::count
	int32_t ___count_10;
	// System.Int32 System.Collections.Generic.Dictionary`2::threshold
	int32_t ___threshold_11;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::hcp
	RuntimeObject* ___hcp_12;
	// System.Runtime.Serialization.SerializationInfo System.Collections.Generic.Dictionary`2::serialization_info
	SerializationInfo_t950877179 * ___serialization_info_13;
	// System.Int32 System.Collections.Generic.Dictionary`2::generation
	int32_t ___generation_14;

public:
	inline static int32_t get_offset_of_table_4() { return static_cast<int32_t>(offsetof(Dictionary_2_t3407319387, ___table_4)); }
	inline Int32U5BU5D_t385246372* get_table_4() const { return ___table_4; }
	inline Int32U5BU5D_t385246372** get_address_of_table_4() { return &___table_4; }
	inline void set_table_4(Int32U5BU5D_t385246372* value)
	{
		___table_4 = value;
		Il2CppCodeGenWriteBarrier((&___table_4), value);
	}

	inline static int32_t get_offset_of_linkSlots_5() { return static_cast<int32_t>(offsetof(Dictionary_2_t3407319387, ___linkSlots_5)); }
	inline LinkU5BU5D_t964245573* get_linkSlots_5() const { return ___linkSlots_5; }
	inline LinkU5BU5D_t964245573** get_address_of_linkSlots_5() { return &___linkSlots_5; }
	inline void set_linkSlots_5(LinkU5BU5D_t964245573* value)
	{
		___linkSlots_5 = value;
		Il2CppCodeGenWriteBarrier((&___linkSlots_5), value);
	}

	inline static int32_t get_offset_of_keySlots_6() { return static_cast<int32_t>(offsetof(Dictionary_2_t3407319387, ___keySlots_6)); }
	inline TileU5BU5D_t3330163933* get_keySlots_6() const { return ___keySlots_6; }
	inline TileU5BU5D_t3330163933** get_address_of_keySlots_6() { return &___keySlots_6; }
	inline void set_keySlots_6(TileU5BU5D_t3330163933* value)
	{
		___keySlots_6 = value;
		Il2CppCodeGenWriteBarrier((&___keySlots_6), value);
	}

	inline static int32_t get_offset_of_valueSlots_7() { return static_cast<int32_t>(offsetof(Dictionary_2_t3407319387, ___valueSlots_7)); }
	inline TileColorControllerU5BU5D_t184545206* get_valueSlots_7() const { return ___valueSlots_7; }
	inline TileColorControllerU5BU5D_t184545206** get_address_of_valueSlots_7() { return &___valueSlots_7; }
	inline void set_valueSlots_7(TileColorControllerU5BU5D_t184545206* value)
	{
		___valueSlots_7 = value;
		Il2CppCodeGenWriteBarrier((&___valueSlots_7), value);
	}

	inline static int32_t get_offset_of_touchedSlots_8() { return static_cast<int32_t>(offsetof(Dictionary_2_t3407319387, ___touchedSlots_8)); }
	inline int32_t get_touchedSlots_8() const { return ___touchedSlots_8; }
	inline int32_t* get_address_of_touchedSlots_8() { return &___touchedSlots_8; }
	inline void set_touchedSlots_8(int32_t value)
	{
		___touchedSlots_8 = value;
	}

	inline static int32_t get_offset_of_emptySlot_9() { return static_cast<int32_t>(offsetof(Dictionary_2_t3407319387, ___emptySlot_9)); }
	inline int32_t get_emptySlot_9() const { return ___emptySlot_9; }
	inline int32_t* get_address_of_emptySlot_9() { return &___emptySlot_9; }
	inline void set_emptySlot_9(int32_t value)
	{
		___emptySlot_9 = value;
	}

	inline static int32_t get_offset_of_count_10() { return static_cast<int32_t>(offsetof(Dictionary_2_t3407319387, ___count_10)); }
	inline int32_t get_count_10() const { return ___count_10; }
	inline int32_t* get_address_of_count_10() { return &___count_10; }
	inline void set_count_10(int32_t value)
	{
		___count_10 = value;
	}

	inline static int32_t get_offset_of_threshold_11() { return static_cast<int32_t>(offsetof(Dictionary_2_t3407319387, ___threshold_11)); }
	inline int32_t get_threshold_11() const { return ___threshold_11; }
	inline int32_t* get_address_of_threshold_11() { return &___threshold_11; }
	inline void set_threshold_11(int32_t value)
	{
		___threshold_11 = value;
	}

	inline static int32_t get_offset_of_hcp_12() { return static_cast<int32_t>(offsetof(Dictionary_2_t3407319387, ___hcp_12)); }
	inline RuntimeObject* get_hcp_12() const { return ___hcp_12; }
	inline RuntimeObject** get_address_of_hcp_12() { return &___hcp_12; }
	inline void set_hcp_12(RuntimeObject* value)
	{
		___hcp_12 = value;
		Il2CppCodeGenWriteBarrier((&___hcp_12), value);
	}

	inline static int32_t get_offset_of_serialization_info_13() { return static_cast<int32_t>(offsetof(Dictionary_2_t3407319387, ___serialization_info_13)); }
	inline SerializationInfo_t950877179 * get_serialization_info_13() const { return ___serialization_info_13; }
	inline SerializationInfo_t950877179 ** get_address_of_serialization_info_13() { return &___serialization_info_13; }
	inline void set_serialization_info_13(SerializationInfo_t950877179 * value)
	{
		___serialization_info_13 = value;
		Il2CppCodeGenWriteBarrier((&___serialization_info_13), value);
	}

	inline static int32_t get_offset_of_generation_14() { return static_cast<int32_t>(offsetof(Dictionary_2_t3407319387, ___generation_14)); }
	inline int32_t get_generation_14() const { return ___generation_14; }
	inline int32_t* get_address_of_generation_14() { return &___generation_14; }
	inline void set_generation_14(int32_t value)
	{
		___generation_14 = value;
	}
};

struct Dictionary_2_t3407319387_StaticFields
{
public:
	// System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,System.Collections.DictionaryEntry> System.Collections.Generic.Dictionary`2::<>f__am$cacheB
	Transform_1_t1278575381 * ___U3CU3Ef__amU24cacheB_15;

public:
	inline static int32_t get_offset_of_U3CU3Ef__amU24cacheB_15() { return static_cast<int32_t>(offsetof(Dictionary_2_t3407319387_StaticFields, ___U3CU3Ef__amU24cacheB_15)); }
	inline Transform_1_t1278575381 * get_U3CU3Ef__amU24cacheB_15() const { return ___U3CU3Ef__amU24cacheB_15; }
	inline Transform_1_t1278575381 ** get_address_of_U3CU3Ef__amU24cacheB_15() { return &___U3CU3Ef__amU24cacheB_15; }
	inline void set_U3CU3Ef__amU24cacheB_15(Transform_1_t1278575381 * value)
	{
		___U3CU3Ef__amU24cacheB_15 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__amU24cacheB_15), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DICTIONARY_2_T3407319387_H
#ifndef QUEUE_1_T2480417402_H
#define QUEUE_1_T2480417402_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.Queue`1<Tile>
struct  Queue_1_t2480417402  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.Queue`1::_array
	TileU5BU5D_t3330163933* ____array_0;
	// System.Int32 System.Collections.Generic.Queue`1::_head
	int32_t ____head_1;
	// System.Int32 System.Collections.Generic.Queue`1::_tail
	int32_t ____tail_2;
	// System.Int32 System.Collections.Generic.Queue`1::_size
	int32_t ____size_3;
	// System.Int32 System.Collections.Generic.Queue`1::_version
	int32_t ____version_4;

public:
	inline static int32_t get_offset_of__array_0() { return static_cast<int32_t>(offsetof(Queue_1_t2480417402, ____array_0)); }
	inline TileU5BU5D_t3330163933* get__array_0() const { return ____array_0; }
	inline TileU5BU5D_t3330163933** get_address_of__array_0() { return &____array_0; }
	inline void set__array_0(TileU5BU5D_t3330163933* value)
	{
		____array_0 = value;
		Il2CppCodeGenWriteBarrier((&____array_0), value);
	}

	inline static int32_t get_offset_of__head_1() { return static_cast<int32_t>(offsetof(Queue_1_t2480417402, ____head_1)); }
	inline int32_t get__head_1() const { return ____head_1; }
	inline int32_t* get_address_of__head_1() { return &____head_1; }
	inline void set__head_1(int32_t value)
	{
		____head_1 = value;
	}

	inline static int32_t get_offset_of__tail_2() { return static_cast<int32_t>(offsetof(Queue_1_t2480417402, ____tail_2)); }
	inline int32_t get__tail_2() const { return ____tail_2; }
	inline int32_t* get_address_of__tail_2() { return &____tail_2; }
	inline void set__tail_2(int32_t value)
	{
		____tail_2 = value;
	}

	inline static int32_t get_offset_of__size_3() { return static_cast<int32_t>(offsetof(Queue_1_t2480417402, ____size_3)); }
	inline int32_t get__size_3() const { return ____size_3; }
	inline int32_t* get_address_of__size_3() { return &____size_3; }
	inline void set__size_3(int32_t value)
	{
		____size_3 = value;
	}

	inline static int32_t get_offset_of__version_4() { return static_cast<int32_t>(offsetof(Queue_1_t2480417402, ____version_4)); }
	inline int32_t get__version_4() const { return ____version_4; }
	inline int32_t* get_address_of__version_4() { return &____version_4; }
	inline void set__version_4(int32_t value)
	{
		____version_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // QUEUE_1_T2480417402_H
#ifndef TILEGRID_T3345275584_H
#define TILEGRID_T3345275584_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// TileGrid
struct  TileGrid_t3345275584  : public RuntimeObject
{
public:
	// Tile[0...,0...] TileGrid::<Tiles>k__BackingField
	TileU5B0___U2C0___U5D_t3330163934* ___U3CTilesU3Ek__BackingField_0;
	// Tile[] TileGrid::<Lamps>k__BackingField
	TileU5BU5D_t3330163933* ___U3CLampsU3Ek__BackingField_1;
	// Tile TileGrid::<PowerSource>k__BackingField
	Tile_t2634157908 * ___U3CPowerSourceU3Ek__BackingField_2;
	// System.Int32 TileGrid::<Width>k__BackingField
	int32_t ___U3CWidthU3Ek__BackingField_3;
	// System.Int32 TileGrid::<Height>k__BackingField
	int32_t ___U3CHeightU3Ek__BackingField_4;

public:
	inline static int32_t get_offset_of_U3CTilesU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(TileGrid_t3345275584, ___U3CTilesU3Ek__BackingField_0)); }
	inline TileU5B0___U2C0___U5D_t3330163934* get_U3CTilesU3Ek__BackingField_0() const { return ___U3CTilesU3Ek__BackingField_0; }
	inline TileU5B0___U2C0___U5D_t3330163934** get_address_of_U3CTilesU3Ek__BackingField_0() { return &___U3CTilesU3Ek__BackingField_0; }
	inline void set_U3CTilesU3Ek__BackingField_0(TileU5B0___U2C0___U5D_t3330163934* value)
	{
		___U3CTilesU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((&___U3CTilesU3Ek__BackingField_0), value);
	}

	inline static int32_t get_offset_of_U3CLampsU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(TileGrid_t3345275584, ___U3CLampsU3Ek__BackingField_1)); }
	inline TileU5BU5D_t3330163933* get_U3CLampsU3Ek__BackingField_1() const { return ___U3CLampsU3Ek__BackingField_1; }
	inline TileU5BU5D_t3330163933** get_address_of_U3CLampsU3Ek__BackingField_1() { return &___U3CLampsU3Ek__BackingField_1; }
	inline void set_U3CLampsU3Ek__BackingField_1(TileU5BU5D_t3330163933* value)
	{
		___U3CLampsU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((&___U3CLampsU3Ek__BackingField_1), value);
	}

	inline static int32_t get_offset_of_U3CPowerSourceU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(TileGrid_t3345275584, ___U3CPowerSourceU3Ek__BackingField_2)); }
	inline Tile_t2634157908 * get_U3CPowerSourceU3Ek__BackingField_2() const { return ___U3CPowerSourceU3Ek__BackingField_2; }
	inline Tile_t2634157908 ** get_address_of_U3CPowerSourceU3Ek__BackingField_2() { return &___U3CPowerSourceU3Ek__BackingField_2; }
	inline void set_U3CPowerSourceU3Ek__BackingField_2(Tile_t2634157908 * value)
	{
		___U3CPowerSourceU3Ek__BackingField_2 = value;
		Il2CppCodeGenWriteBarrier((&___U3CPowerSourceU3Ek__BackingField_2), value);
	}

	inline static int32_t get_offset_of_U3CWidthU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(TileGrid_t3345275584, ___U3CWidthU3Ek__BackingField_3)); }
	inline int32_t get_U3CWidthU3Ek__BackingField_3() const { return ___U3CWidthU3Ek__BackingField_3; }
	inline int32_t* get_address_of_U3CWidthU3Ek__BackingField_3() { return &___U3CWidthU3Ek__BackingField_3; }
	inline void set_U3CWidthU3Ek__BackingField_3(int32_t value)
	{
		___U3CWidthU3Ek__BackingField_3 = value;
	}

	inline static int32_t get_offset_of_U3CHeightU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(TileGrid_t3345275584, ___U3CHeightU3Ek__BackingField_4)); }
	inline int32_t get_U3CHeightU3Ek__BackingField_4() const { return ___U3CHeightU3Ek__BackingField_4; }
	inline int32_t* get_address_of_U3CHeightU3Ek__BackingField_4() { return &___U3CHeightU3Ek__BackingField_4; }
	inline void set_U3CHeightU3Ek__BackingField_4(int32_t value)
	{
		___U3CHeightU3Ek__BackingField_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TILEGRID_T3345275584_H
#ifndef TILEMAPGENERATOR_T1694036907_H
#define TILEMAPGENERATOR_T1694036907_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// TileMapGenerator
struct  TileMapGenerator_t1694036907  : public RuntimeObject
{
public:
	// System.Int32 TileMapGenerator::<sourceX>k__BackingField
	int32_t ___U3CsourceXU3Ek__BackingField_0;
	// System.Int32 TileMapGenerator::<sourceY>k__BackingField
	int32_t ___U3CsourceYU3Ek__BackingField_1;
	// System.Int32[] TileMapGenerator::DX
	Int32U5BU5D_t385246372* ___DX_2;
	// System.Int32[] TileMapGenerator::DY
	Int32U5BU5D_t385246372* ___DY_3;

public:
	inline static int32_t get_offset_of_U3CsourceXU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(TileMapGenerator_t1694036907, ___U3CsourceXU3Ek__BackingField_0)); }
	inline int32_t get_U3CsourceXU3Ek__BackingField_0() const { return ___U3CsourceXU3Ek__BackingField_0; }
	inline int32_t* get_address_of_U3CsourceXU3Ek__BackingField_0() { return &___U3CsourceXU3Ek__BackingField_0; }
	inline void set_U3CsourceXU3Ek__BackingField_0(int32_t value)
	{
		___U3CsourceXU3Ek__BackingField_0 = value;
	}

	inline static int32_t get_offset_of_U3CsourceYU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(TileMapGenerator_t1694036907, ___U3CsourceYU3Ek__BackingField_1)); }
	inline int32_t get_U3CsourceYU3Ek__BackingField_1() const { return ___U3CsourceYU3Ek__BackingField_1; }
	inline int32_t* get_address_of_U3CsourceYU3Ek__BackingField_1() { return &___U3CsourceYU3Ek__BackingField_1; }
	inline void set_U3CsourceYU3Ek__BackingField_1(int32_t value)
	{
		___U3CsourceYU3Ek__BackingField_1 = value;
	}

	inline static int32_t get_offset_of_DX_2() { return static_cast<int32_t>(offsetof(TileMapGenerator_t1694036907, ___DX_2)); }
	inline Int32U5BU5D_t385246372* get_DX_2() const { return ___DX_2; }
	inline Int32U5BU5D_t385246372** get_address_of_DX_2() { return &___DX_2; }
	inline void set_DX_2(Int32U5BU5D_t385246372* value)
	{
		___DX_2 = value;
		Il2CppCodeGenWriteBarrier((&___DX_2), value);
	}

	inline static int32_t get_offset_of_DY_3() { return static_cast<int32_t>(offsetof(TileMapGenerator_t1694036907, ___DY_3)); }
	inline Int32U5BU5D_t385246372* get_DY_3() const { return ___DY_3; }
	inline Int32U5BU5D_t385246372** get_address_of_DY_3() { return &___DY_3; }
	inline void set_DY_3(Int32U5BU5D_t385246372* value)
	{
		___DY_3 = value;
		Il2CppCodeGenWriteBarrier((&___DY_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TILEMAPGENERATOR_T1694036907_H
#ifndef LIST_1_T128053199_H
#define LIST_1_T128053199_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.List`1<System.Int32>
struct  List_1_t128053199  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	Int32U5BU5D_t385246372* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t128053199, ____items_1)); }
	inline Int32U5BU5D_t385246372* get__items_1() const { return ____items_1; }
	inline Int32U5BU5D_t385246372** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(Int32U5BU5D_t385246372* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((&____items_1), value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t128053199, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t128053199, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}
};

struct List_1_t128053199_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::EmptyArray
	Int32U5BU5D_t385246372* ___EmptyArray_4;

public:
	inline static int32_t get_offset_of_EmptyArray_4() { return static_cast<int32_t>(offsetof(List_1_t128053199_StaticFields, ___EmptyArray_4)); }
	inline Int32U5BU5D_t385246372* get_EmptyArray_4() const { return ___EmptyArray_4; }
	inline Int32U5BU5D_t385246372** get_address_of_EmptyArray_4() { return &___EmptyArray_4; }
	inline void set_EmptyArray_4(Int32U5BU5D_t385246372* value)
	{
		___EmptyArray_4 = value;
		Il2CppCodeGenWriteBarrier((&___EmptyArray_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LIST_1_T128053199_H
#ifndef TILEMETRICS_T1749444055_H
#define TILEMETRICS_T1749444055_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// TileMetrics
struct  TileMetrics_t1749444055  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TILEMETRICS_T1749444055_H
#ifndef VALUETYPE_T3640485471_H
#define VALUETYPE_T3640485471_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ValueType
struct  ValueType_t3640485471  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t3640485471_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t3640485471_marshaled_com
{
};
#endif // VALUETYPE_T3640485471_H
#ifndef LEVELINFO_T1513202700_H
#define LEVELINFO_T1513202700_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// LevelInfo
struct  LevelInfo_t1513202700  : public RuntimeObject
{
public:
	// System.Int32 LevelInfo::<Width>k__BackingField
	int32_t ___U3CWidthU3Ek__BackingField_0;
	// System.Int32 LevelInfo::<Height>k__BackingField
	int32_t ___U3CHeightU3Ek__BackingField_1;
	// System.Boolean LevelInfo::<Procedural>k__BackingField
	bool ___U3CProceduralU3Ek__BackingField_2;
	// System.Single LevelInfo::<FillAmount>k__BackingField
	float ___U3CFillAmountU3Ek__BackingField_3;
	// System.Single LevelInfo::<TimedTileAmount>k__BackingField
	float ___U3CTimedTileAmountU3Ek__BackingField_4;
	// System.Int32 LevelInfo::<TimedTileDelay>k__BackingField
	int32_t ___U3CTimedTileDelayU3Ek__BackingField_5;
	// TileType[0...,0...] LevelInfo::Tiles
	TileTypeU5B0___U2C0___U5D_t1226088886* ___Tiles_6;
	// System.Boolean[0...,0...] LevelInfo::RotationIgnore
	BooleanU5B0___U2C0___U5D_t2897418193* ___RotationIgnore_7;

public:
	inline static int32_t get_offset_of_U3CWidthU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(LevelInfo_t1513202700, ___U3CWidthU3Ek__BackingField_0)); }
	inline int32_t get_U3CWidthU3Ek__BackingField_0() const { return ___U3CWidthU3Ek__BackingField_0; }
	inline int32_t* get_address_of_U3CWidthU3Ek__BackingField_0() { return &___U3CWidthU3Ek__BackingField_0; }
	inline void set_U3CWidthU3Ek__BackingField_0(int32_t value)
	{
		___U3CWidthU3Ek__BackingField_0 = value;
	}

	inline static int32_t get_offset_of_U3CHeightU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(LevelInfo_t1513202700, ___U3CHeightU3Ek__BackingField_1)); }
	inline int32_t get_U3CHeightU3Ek__BackingField_1() const { return ___U3CHeightU3Ek__BackingField_1; }
	inline int32_t* get_address_of_U3CHeightU3Ek__BackingField_1() { return &___U3CHeightU3Ek__BackingField_1; }
	inline void set_U3CHeightU3Ek__BackingField_1(int32_t value)
	{
		___U3CHeightU3Ek__BackingField_1 = value;
	}

	inline static int32_t get_offset_of_U3CProceduralU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(LevelInfo_t1513202700, ___U3CProceduralU3Ek__BackingField_2)); }
	inline bool get_U3CProceduralU3Ek__BackingField_2() const { return ___U3CProceduralU3Ek__BackingField_2; }
	inline bool* get_address_of_U3CProceduralU3Ek__BackingField_2() { return &___U3CProceduralU3Ek__BackingField_2; }
	inline void set_U3CProceduralU3Ek__BackingField_2(bool value)
	{
		___U3CProceduralU3Ek__BackingField_2 = value;
	}

	inline static int32_t get_offset_of_U3CFillAmountU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(LevelInfo_t1513202700, ___U3CFillAmountU3Ek__BackingField_3)); }
	inline float get_U3CFillAmountU3Ek__BackingField_3() const { return ___U3CFillAmountU3Ek__BackingField_3; }
	inline float* get_address_of_U3CFillAmountU3Ek__BackingField_3() { return &___U3CFillAmountU3Ek__BackingField_3; }
	inline void set_U3CFillAmountU3Ek__BackingField_3(float value)
	{
		___U3CFillAmountU3Ek__BackingField_3 = value;
	}

	inline static int32_t get_offset_of_U3CTimedTileAmountU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(LevelInfo_t1513202700, ___U3CTimedTileAmountU3Ek__BackingField_4)); }
	inline float get_U3CTimedTileAmountU3Ek__BackingField_4() const { return ___U3CTimedTileAmountU3Ek__BackingField_4; }
	inline float* get_address_of_U3CTimedTileAmountU3Ek__BackingField_4() { return &___U3CTimedTileAmountU3Ek__BackingField_4; }
	inline void set_U3CTimedTileAmountU3Ek__BackingField_4(float value)
	{
		___U3CTimedTileAmountU3Ek__BackingField_4 = value;
	}

	inline static int32_t get_offset_of_U3CTimedTileDelayU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(LevelInfo_t1513202700, ___U3CTimedTileDelayU3Ek__BackingField_5)); }
	inline int32_t get_U3CTimedTileDelayU3Ek__BackingField_5() const { return ___U3CTimedTileDelayU3Ek__BackingField_5; }
	inline int32_t* get_address_of_U3CTimedTileDelayU3Ek__BackingField_5() { return &___U3CTimedTileDelayU3Ek__BackingField_5; }
	inline void set_U3CTimedTileDelayU3Ek__BackingField_5(int32_t value)
	{
		___U3CTimedTileDelayU3Ek__BackingField_5 = value;
	}

	inline static int32_t get_offset_of_Tiles_6() { return static_cast<int32_t>(offsetof(LevelInfo_t1513202700, ___Tiles_6)); }
	inline TileTypeU5B0___U2C0___U5D_t1226088886* get_Tiles_6() const { return ___Tiles_6; }
	inline TileTypeU5B0___U2C0___U5D_t1226088886** get_address_of_Tiles_6() { return &___Tiles_6; }
	inline void set_Tiles_6(TileTypeU5B0___U2C0___U5D_t1226088886* value)
	{
		___Tiles_6 = value;
		Il2CppCodeGenWriteBarrier((&___Tiles_6), value);
	}

	inline static int32_t get_offset_of_RotationIgnore_7() { return static_cast<int32_t>(offsetof(LevelInfo_t1513202700, ___RotationIgnore_7)); }
	inline BooleanU5B0___U2C0___U5D_t2897418193* get_RotationIgnore_7() const { return ___RotationIgnore_7; }
	inline BooleanU5B0___U2C0___U5D_t2897418193** get_address_of_RotationIgnore_7() { return &___RotationIgnore_7; }
	inline void set_RotationIgnore_7(BooleanU5B0___U2C0___U5D_t2897418193* value)
	{
		___RotationIgnore_7 = value;
		Il2CppCodeGenWriteBarrier((&___RotationIgnore_7), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LEVELINFO_T1513202700_H
#ifndef STRING_T_H
#define STRING_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.String
struct  String_t  : public RuntimeObject
{
public:
	// System.Int32 System.String::length
	int32_t ___length_0;
	// System.Char System.String::start_char
	Il2CppChar ___start_char_1;

public:
	inline static int32_t get_offset_of_length_0() { return static_cast<int32_t>(offsetof(String_t, ___length_0)); }
	inline int32_t get_length_0() const { return ___length_0; }
	inline int32_t* get_address_of_length_0() { return &___length_0; }
	inline void set_length_0(int32_t value)
	{
		___length_0 = value;
	}

	inline static int32_t get_offset_of_start_char_1() { return static_cast<int32_t>(offsetof(String_t, ___start_char_1)); }
	inline Il2CppChar get_start_char_1() const { return ___start_char_1; }
	inline Il2CppChar* get_address_of_start_char_1() { return &___start_char_1; }
	inline void set_start_char_1(Il2CppChar value)
	{
		___start_char_1 = value;
	}
};

struct String_t_StaticFields
{
public:
	// System.String System.String::Empty
	String_t* ___Empty_2;
	// System.Char[] System.String::WhiteChars
	CharU5BU5D_t3528271667* ___WhiteChars_3;

public:
	inline static int32_t get_offset_of_Empty_2() { return static_cast<int32_t>(offsetof(String_t_StaticFields, ___Empty_2)); }
	inline String_t* get_Empty_2() const { return ___Empty_2; }
	inline String_t** get_address_of_Empty_2() { return &___Empty_2; }
	inline void set_Empty_2(String_t* value)
	{
		___Empty_2 = value;
		Il2CppCodeGenWriteBarrier((&___Empty_2), value);
	}

	inline static int32_t get_offset_of_WhiteChars_3() { return static_cast<int32_t>(offsetof(String_t_StaticFields, ___WhiteChars_3)); }
	inline CharU5BU5D_t3528271667* get_WhiteChars_3() const { return ___WhiteChars_3; }
	inline CharU5BU5D_t3528271667** get_address_of_WhiteChars_3() { return &___WhiteChars_3; }
	inline void set_WhiteChars_3(CharU5BU5D_t3528271667* value)
	{
		___WhiteChars_3 = value;
		Il2CppCodeGenWriteBarrier((&___WhiteChars_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STRING_T_H
#ifndef HASHTABLE_T1853889766_H
#define HASHTABLE_T1853889766_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Hashtable
struct  Hashtable_t1853889766  : public RuntimeObject
{
public:
	// System.Int32 System.Collections.Hashtable::inUse
	int32_t ___inUse_1;
	// System.Int32 System.Collections.Hashtable::modificationCount
	int32_t ___modificationCount_2;
	// System.Single System.Collections.Hashtable::loadFactor
	float ___loadFactor_3;
	// System.Collections.Hashtable/Slot[] System.Collections.Hashtable::table
	SlotU5BU5D_t2994659099* ___table_4;
	// System.Int32[] System.Collections.Hashtable::hashes
	Int32U5BU5D_t385246372* ___hashes_5;
	// System.Int32 System.Collections.Hashtable::threshold
	int32_t ___threshold_6;
	// System.Collections.Hashtable/HashKeys System.Collections.Hashtable::hashKeys
	HashKeys_t1568156503 * ___hashKeys_7;
	// System.Collections.Hashtable/HashValues System.Collections.Hashtable::hashValues
	HashValues_t618387445 * ___hashValues_8;
	// System.Collections.IHashCodeProvider System.Collections.Hashtable::hcpRef
	RuntimeObject* ___hcpRef_9;
	// System.Collections.IComparer System.Collections.Hashtable::comparerRef
	RuntimeObject* ___comparerRef_10;
	// System.Runtime.Serialization.SerializationInfo System.Collections.Hashtable::serializationInfo
	SerializationInfo_t950877179 * ___serializationInfo_11;
	// System.Collections.IEqualityComparer System.Collections.Hashtable::equalityComparer
	RuntimeObject* ___equalityComparer_12;

public:
	inline static int32_t get_offset_of_inUse_1() { return static_cast<int32_t>(offsetof(Hashtable_t1853889766, ___inUse_1)); }
	inline int32_t get_inUse_1() const { return ___inUse_1; }
	inline int32_t* get_address_of_inUse_1() { return &___inUse_1; }
	inline void set_inUse_1(int32_t value)
	{
		___inUse_1 = value;
	}

	inline static int32_t get_offset_of_modificationCount_2() { return static_cast<int32_t>(offsetof(Hashtable_t1853889766, ___modificationCount_2)); }
	inline int32_t get_modificationCount_2() const { return ___modificationCount_2; }
	inline int32_t* get_address_of_modificationCount_2() { return &___modificationCount_2; }
	inline void set_modificationCount_2(int32_t value)
	{
		___modificationCount_2 = value;
	}

	inline static int32_t get_offset_of_loadFactor_3() { return static_cast<int32_t>(offsetof(Hashtable_t1853889766, ___loadFactor_3)); }
	inline float get_loadFactor_3() const { return ___loadFactor_3; }
	inline float* get_address_of_loadFactor_3() { return &___loadFactor_3; }
	inline void set_loadFactor_3(float value)
	{
		___loadFactor_3 = value;
	}

	inline static int32_t get_offset_of_table_4() { return static_cast<int32_t>(offsetof(Hashtable_t1853889766, ___table_4)); }
	inline SlotU5BU5D_t2994659099* get_table_4() const { return ___table_4; }
	inline SlotU5BU5D_t2994659099** get_address_of_table_4() { return &___table_4; }
	inline void set_table_4(SlotU5BU5D_t2994659099* value)
	{
		___table_4 = value;
		Il2CppCodeGenWriteBarrier((&___table_4), value);
	}

	inline static int32_t get_offset_of_hashes_5() { return static_cast<int32_t>(offsetof(Hashtable_t1853889766, ___hashes_5)); }
	inline Int32U5BU5D_t385246372* get_hashes_5() const { return ___hashes_5; }
	inline Int32U5BU5D_t385246372** get_address_of_hashes_5() { return &___hashes_5; }
	inline void set_hashes_5(Int32U5BU5D_t385246372* value)
	{
		___hashes_5 = value;
		Il2CppCodeGenWriteBarrier((&___hashes_5), value);
	}

	inline static int32_t get_offset_of_threshold_6() { return static_cast<int32_t>(offsetof(Hashtable_t1853889766, ___threshold_6)); }
	inline int32_t get_threshold_6() const { return ___threshold_6; }
	inline int32_t* get_address_of_threshold_6() { return &___threshold_6; }
	inline void set_threshold_6(int32_t value)
	{
		___threshold_6 = value;
	}

	inline static int32_t get_offset_of_hashKeys_7() { return static_cast<int32_t>(offsetof(Hashtable_t1853889766, ___hashKeys_7)); }
	inline HashKeys_t1568156503 * get_hashKeys_7() const { return ___hashKeys_7; }
	inline HashKeys_t1568156503 ** get_address_of_hashKeys_7() { return &___hashKeys_7; }
	inline void set_hashKeys_7(HashKeys_t1568156503 * value)
	{
		___hashKeys_7 = value;
		Il2CppCodeGenWriteBarrier((&___hashKeys_7), value);
	}

	inline static int32_t get_offset_of_hashValues_8() { return static_cast<int32_t>(offsetof(Hashtable_t1853889766, ___hashValues_8)); }
	inline HashValues_t618387445 * get_hashValues_8() const { return ___hashValues_8; }
	inline HashValues_t618387445 ** get_address_of_hashValues_8() { return &___hashValues_8; }
	inline void set_hashValues_8(HashValues_t618387445 * value)
	{
		___hashValues_8 = value;
		Il2CppCodeGenWriteBarrier((&___hashValues_8), value);
	}

	inline static int32_t get_offset_of_hcpRef_9() { return static_cast<int32_t>(offsetof(Hashtable_t1853889766, ___hcpRef_9)); }
	inline RuntimeObject* get_hcpRef_9() const { return ___hcpRef_9; }
	inline RuntimeObject** get_address_of_hcpRef_9() { return &___hcpRef_9; }
	inline void set_hcpRef_9(RuntimeObject* value)
	{
		___hcpRef_9 = value;
		Il2CppCodeGenWriteBarrier((&___hcpRef_9), value);
	}

	inline static int32_t get_offset_of_comparerRef_10() { return static_cast<int32_t>(offsetof(Hashtable_t1853889766, ___comparerRef_10)); }
	inline RuntimeObject* get_comparerRef_10() const { return ___comparerRef_10; }
	inline RuntimeObject** get_address_of_comparerRef_10() { return &___comparerRef_10; }
	inline void set_comparerRef_10(RuntimeObject* value)
	{
		___comparerRef_10 = value;
		Il2CppCodeGenWriteBarrier((&___comparerRef_10), value);
	}

	inline static int32_t get_offset_of_serializationInfo_11() { return static_cast<int32_t>(offsetof(Hashtable_t1853889766, ___serializationInfo_11)); }
	inline SerializationInfo_t950877179 * get_serializationInfo_11() const { return ___serializationInfo_11; }
	inline SerializationInfo_t950877179 ** get_address_of_serializationInfo_11() { return &___serializationInfo_11; }
	inline void set_serializationInfo_11(SerializationInfo_t950877179 * value)
	{
		___serializationInfo_11 = value;
		Il2CppCodeGenWriteBarrier((&___serializationInfo_11), value);
	}

	inline static int32_t get_offset_of_equalityComparer_12() { return static_cast<int32_t>(offsetof(Hashtable_t1853889766, ___equalityComparer_12)); }
	inline RuntimeObject* get_equalityComparer_12() const { return ___equalityComparer_12; }
	inline RuntimeObject** get_address_of_equalityComparer_12() { return &___equalityComparer_12; }
	inline void set_equalityComparer_12(RuntimeObject* value)
	{
		___equalityComparer_12 = value;
		Il2CppCodeGenWriteBarrier((&___equalityComparer_12), value);
	}
};

struct Hashtable_t1853889766_StaticFields
{
public:
	// System.Int32[] System.Collections.Hashtable::primeTbl
	Int32U5BU5D_t385246372* ___primeTbl_13;

public:
	inline static int32_t get_offset_of_primeTbl_13() { return static_cast<int32_t>(offsetof(Hashtable_t1853889766_StaticFields, ___primeTbl_13)); }
	inline Int32U5BU5D_t385246372* get_primeTbl_13() const { return ___primeTbl_13; }
	inline Int32U5BU5D_t385246372** get_address_of_primeTbl_13() { return &___primeTbl_13; }
	inline void set_primeTbl_13(Int32U5BU5D_t385246372* value)
	{
		___primeTbl_13 = value;
		Il2CppCodeGenWriteBarrier((&___primeTbl_13), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // HASHTABLE_T1853889766_H
#ifndef LIST_1_T3395709193_H
#define LIST_1_T3395709193_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.List`1<UnityEngine.Component>
struct  List_1_t3395709193  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	ComponentU5BU5D_t3294940482* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t3395709193, ____items_1)); }
	inline ComponentU5BU5D_t3294940482* get__items_1() const { return ____items_1; }
	inline ComponentU5BU5D_t3294940482** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(ComponentU5BU5D_t3294940482* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((&____items_1), value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t3395709193, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t3395709193, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}
};

struct List_1_t3395709193_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::EmptyArray
	ComponentU5BU5D_t3294940482* ___EmptyArray_4;

public:
	inline static int32_t get_offset_of_EmptyArray_4() { return static_cast<int32_t>(offsetof(List_1_t3395709193_StaticFields, ___EmptyArray_4)); }
	inline ComponentU5BU5D_t3294940482* get_EmptyArray_4() const { return ___EmptyArray_4; }
	inline ComponentU5BU5D_t3294940482** get_address_of_EmptyArray_4() { return &___EmptyArray_4; }
	inline void set_EmptyArray_4(ComponentU5BU5D_t3294940482* value)
	{
		___EmptyArray_4 = value;
		Il2CppCodeGenWriteBarrier((&___EmptyArray_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LIST_1_T3395709193_H
#ifndef NOTIFICATION_T2099770324_H
#define NOTIFICATION_T2099770324_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Notification
struct  Notification_t2099770324  : public RuntimeObject
{
public:
	// UnityEngine.Component Notification::sender
	Component_t1923634451 * ___sender_0;
	// System.String Notification::name
	String_t* ___name_1;
	// System.Collections.Hashtable Notification::data
	Hashtable_t1853889766 * ___data_2;

public:
	inline static int32_t get_offset_of_sender_0() { return static_cast<int32_t>(offsetof(Notification_t2099770324, ___sender_0)); }
	inline Component_t1923634451 * get_sender_0() const { return ___sender_0; }
	inline Component_t1923634451 ** get_address_of_sender_0() { return &___sender_0; }
	inline void set_sender_0(Component_t1923634451 * value)
	{
		___sender_0 = value;
		Il2CppCodeGenWriteBarrier((&___sender_0), value);
	}

	inline static int32_t get_offset_of_name_1() { return static_cast<int32_t>(offsetof(Notification_t2099770324, ___name_1)); }
	inline String_t* get_name_1() const { return ___name_1; }
	inline String_t** get_address_of_name_1() { return &___name_1; }
	inline void set_name_1(String_t* value)
	{
		___name_1 = value;
		Il2CppCodeGenWriteBarrier((&___name_1), value);
	}

	inline static int32_t get_offset_of_data_2() { return static_cast<int32_t>(offsetof(Notification_t2099770324, ___data_2)); }
	inline Hashtable_t1853889766 * get_data_2() const { return ___data_2; }
	inline Hashtable_t1853889766 ** get_address_of_data_2() { return &___data_2; }
	inline void set_data_2(Hashtable_t1853889766 * value)
	{
		___data_2 = value;
		Il2CppCodeGenWriteBarrier((&___data_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NOTIFICATION_T2099770324_H
#ifndef ENUM_T4135868527_H
#define ENUM_T4135868527_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Enum
struct  Enum_t4135868527  : public ValueType_t3640485471
{
public:

public:
};

struct Enum_t4135868527_StaticFields
{
public:
	// System.Char[] System.Enum::split_char
	CharU5BU5D_t3528271667* ___split_char_0;

public:
	inline static int32_t get_offset_of_split_char_0() { return static_cast<int32_t>(offsetof(Enum_t4135868527_StaticFields, ___split_char_0)); }
	inline CharU5BU5D_t3528271667* get_split_char_0() const { return ___split_char_0; }
	inline CharU5BU5D_t3528271667** get_address_of_split_char_0() { return &___split_char_0; }
	inline void set_split_char_0(CharU5BU5D_t3528271667* value)
	{
		___split_char_0 = value;
		Il2CppCodeGenWriteBarrier((&___split_char_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t4135868527_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t4135868527_marshaled_com
{
};
#endif // ENUM_T4135868527_H
#ifndef TMP_XMLTAGSTACK_1_T3241710312_H
#define TMP_XMLTAGSTACK_1_T3241710312_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// TMPro.TMP_XmlTagStack`1<TMPro.TMP_ColorGradient>
struct  TMP_XmlTagStack_1_t3241710312 
{
public:
	// T[] TMPro.TMP_XmlTagStack`1::itemStack
	TMP_ColorGradientU5BU5D_t2496920137* ___itemStack_0;
	// System.Int32 TMPro.TMP_XmlTagStack`1::index
	int32_t ___index_1;
	// System.Int32 TMPro.TMP_XmlTagStack`1::m_capacity
	int32_t ___m_capacity_2;
	// T TMPro.TMP_XmlTagStack`1::m_defaultItem
	TMP_ColorGradient_t3678055768 * ___m_defaultItem_3;

public:
	inline static int32_t get_offset_of_itemStack_0() { return static_cast<int32_t>(offsetof(TMP_XmlTagStack_1_t3241710312, ___itemStack_0)); }
	inline TMP_ColorGradientU5BU5D_t2496920137* get_itemStack_0() const { return ___itemStack_0; }
	inline TMP_ColorGradientU5BU5D_t2496920137** get_address_of_itemStack_0() { return &___itemStack_0; }
	inline void set_itemStack_0(TMP_ColorGradientU5BU5D_t2496920137* value)
	{
		___itemStack_0 = value;
		Il2CppCodeGenWriteBarrier((&___itemStack_0), value);
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(TMP_XmlTagStack_1_t3241710312, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}

	inline static int32_t get_offset_of_m_capacity_2() { return static_cast<int32_t>(offsetof(TMP_XmlTagStack_1_t3241710312, ___m_capacity_2)); }
	inline int32_t get_m_capacity_2() const { return ___m_capacity_2; }
	inline int32_t* get_address_of_m_capacity_2() { return &___m_capacity_2; }
	inline void set_m_capacity_2(int32_t value)
	{
		___m_capacity_2 = value;
	}

	inline static int32_t get_offset_of_m_defaultItem_3() { return static_cast<int32_t>(offsetof(TMP_XmlTagStack_1_t3241710312, ___m_defaultItem_3)); }
	inline TMP_ColorGradient_t3678055768 * get_m_defaultItem_3() const { return ___m_defaultItem_3; }
	inline TMP_ColorGradient_t3678055768 ** get_address_of_m_defaultItem_3() { return &___m_defaultItem_3; }
	inline void set_m_defaultItem_3(TMP_ColorGradient_t3678055768 * value)
	{
		___m_defaultItem_3 = value;
		Il2CppCodeGenWriteBarrier((&___m_defaultItem_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TMP_XMLTAGSTACK_1_T3241710312_H
#ifndef ENUMERATOR_T2146457487_H
#define ENUMERATOR_T2146457487_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.List`1/Enumerator<System.Object>
struct  Enumerator_t2146457487 
{
public:
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::l
	List_1_t257213610 * ___l_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::next
	int32_t ___next_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::ver
	int32_t ___ver_2;
	// T System.Collections.Generic.List`1/Enumerator::current
	RuntimeObject * ___current_3;

public:
	inline static int32_t get_offset_of_l_0() { return static_cast<int32_t>(offsetof(Enumerator_t2146457487, ___l_0)); }
	inline List_1_t257213610 * get_l_0() const { return ___l_0; }
	inline List_1_t257213610 ** get_address_of_l_0() { return &___l_0; }
	inline void set_l_0(List_1_t257213610 * value)
	{
		___l_0 = value;
		Il2CppCodeGenWriteBarrier((&___l_0), value);
	}

	inline static int32_t get_offset_of_next_1() { return static_cast<int32_t>(offsetof(Enumerator_t2146457487, ___next_1)); }
	inline int32_t get_next_1() const { return ___next_1; }
	inline int32_t* get_address_of_next_1() { return &___next_1; }
	inline void set_next_1(int32_t value)
	{
		___next_1 = value;
	}

	inline static int32_t get_offset_of_ver_2() { return static_cast<int32_t>(offsetof(Enumerator_t2146457487, ___ver_2)); }
	inline int32_t get_ver_2() const { return ___ver_2; }
	inline int32_t* get_address_of_ver_2() { return &___ver_2; }
	inline void set_ver_2(int32_t value)
	{
		___ver_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_t2146457487, ___current_3)); }
	inline RuntimeObject * get_current_3() const { return ___current_3; }
	inline RuntimeObject ** get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(RuntimeObject * value)
	{
		___current_3 = value;
		Il2CppCodeGenWriteBarrier((&___current_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENUMERATOR_T2146457487_H
#ifndef TMP_BASICXMLTAGSTACK_T2962628096_H
#define TMP_BASICXMLTAGSTACK_T2962628096_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// TMPro.TMP_BasicXmlTagStack
struct  TMP_BasicXmlTagStack_t2962628096 
{
public:
	// System.Byte TMPro.TMP_BasicXmlTagStack::bold
	uint8_t ___bold_0;
	// System.Byte TMPro.TMP_BasicXmlTagStack::italic
	uint8_t ___italic_1;
	// System.Byte TMPro.TMP_BasicXmlTagStack::underline
	uint8_t ___underline_2;
	// System.Byte TMPro.TMP_BasicXmlTagStack::strikethrough
	uint8_t ___strikethrough_3;
	// System.Byte TMPro.TMP_BasicXmlTagStack::highlight
	uint8_t ___highlight_4;
	// System.Byte TMPro.TMP_BasicXmlTagStack::superscript
	uint8_t ___superscript_5;
	// System.Byte TMPro.TMP_BasicXmlTagStack::subscript
	uint8_t ___subscript_6;
	// System.Byte TMPro.TMP_BasicXmlTagStack::uppercase
	uint8_t ___uppercase_7;
	// System.Byte TMPro.TMP_BasicXmlTagStack::lowercase
	uint8_t ___lowercase_8;
	// System.Byte TMPro.TMP_BasicXmlTagStack::smallcaps
	uint8_t ___smallcaps_9;

public:
	inline static int32_t get_offset_of_bold_0() { return static_cast<int32_t>(offsetof(TMP_BasicXmlTagStack_t2962628096, ___bold_0)); }
	inline uint8_t get_bold_0() const { return ___bold_0; }
	inline uint8_t* get_address_of_bold_0() { return &___bold_0; }
	inline void set_bold_0(uint8_t value)
	{
		___bold_0 = value;
	}

	inline static int32_t get_offset_of_italic_1() { return static_cast<int32_t>(offsetof(TMP_BasicXmlTagStack_t2962628096, ___italic_1)); }
	inline uint8_t get_italic_1() const { return ___italic_1; }
	inline uint8_t* get_address_of_italic_1() { return &___italic_1; }
	inline void set_italic_1(uint8_t value)
	{
		___italic_1 = value;
	}

	inline static int32_t get_offset_of_underline_2() { return static_cast<int32_t>(offsetof(TMP_BasicXmlTagStack_t2962628096, ___underline_2)); }
	inline uint8_t get_underline_2() const { return ___underline_2; }
	inline uint8_t* get_address_of_underline_2() { return &___underline_2; }
	inline void set_underline_2(uint8_t value)
	{
		___underline_2 = value;
	}

	inline static int32_t get_offset_of_strikethrough_3() { return static_cast<int32_t>(offsetof(TMP_BasicXmlTagStack_t2962628096, ___strikethrough_3)); }
	inline uint8_t get_strikethrough_3() const { return ___strikethrough_3; }
	inline uint8_t* get_address_of_strikethrough_3() { return &___strikethrough_3; }
	inline void set_strikethrough_3(uint8_t value)
	{
		___strikethrough_3 = value;
	}

	inline static int32_t get_offset_of_highlight_4() { return static_cast<int32_t>(offsetof(TMP_BasicXmlTagStack_t2962628096, ___highlight_4)); }
	inline uint8_t get_highlight_4() const { return ___highlight_4; }
	inline uint8_t* get_address_of_highlight_4() { return &___highlight_4; }
	inline void set_highlight_4(uint8_t value)
	{
		___highlight_4 = value;
	}

	inline static int32_t get_offset_of_superscript_5() { return static_cast<int32_t>(offsetof(TMP_BasicXmlTagStack_t2962628096, ___superscript_5)); }
	inline uint8_t get_superscript_5() const { return ___superscript_5; }
	inline uint8_t* get_address_of_superscript_5() { return &___superscript_5; }
	inline void set_superscript_5(uint8_t value)
	{
		___superscript_5 = value;
	}

	inline static int32_t get_offset_of_subscript_6() { return static_cast<int32_t>(offsetof(TMP_BasicXmlTagStack_t2962628096, ___subscript_6)); }
	inline uint8_t get_subscript_6() const { return ___subscript_6; }
	inline uint8_t* get_address_of_subscript_6() { return &___subscript_6; }
	inline void set_subscript_6(uint8_t value)
	{
		___subscript_6 = value;
	}

	inline static int32_t get_offset_of_uppercase_7() { return static_cast<int32_t>(offsetof(TMP_BasicXmlTagStack_t2962628096, ___uppercase_7)); }
	inline uint8_t get_uppercase_7() const { return ___uppercase_7; }
	inline uint8_t* get_address_of_uppercase_7() { return &___uppercase_7; }
	inline void set_uppercase_7(uint8_t value)
	{
		___uppercase_7 = value;
	}

	inline static int32_t get_offset_of_lowercase_8() { return static_cast<int32_t>(offsetof(TMP_BasicXmlTagStack_t2962628096, ___lowercase_8)); }
	inline uint8_t get_lowercase_8() const { return ___lowercase_8; }
	inline uint8_t* get_address_of_lowercase_8() { return &___lowercase_8; }
	inline void set_lowercase_8(uint8_t value)
	{
		___lowercase_8 = value;
	}

	inline static int32_t get_offset_of_smallcaps_9() { return static_cast<int32_t>(offsetof(TMP_BasicXmlTagStack_t2962628096, ___smallcaps_9)); }
	inline uint8_t get_smallcaps_9() const { return ___smallcaps_9; }
	inline uint8_t* get_address_of_smallcaps_9() { return &___smallcaps_9; }
	inline void set_smallcaps_9(uint8_t value)
	{
		___smallcaps_9 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TMP_BASICXMLTAGSTACK_T2962628096_H
#ifndef ANIMATORSTATEINFO_T509032636_H
#define ANIMATORSTATEINFO_T509032636_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.AnimatorStateInfo
struct  AnimatorStateInfo_t509032636 
{
public:
	// System.Int32 UnityEngine.AnimatorStateInfo::m_Name
	int32_t ___m_Name_0;
	// System.Int32 UnityEngine.AnimatorStateInfo::m_Path
	int32_t ___m_Path_1;
	// System.Int32 UnityEngine.AnimatorStateInfo::m_FullPath
	int32_t ___m_FullPath_2;
	// System.Single UnityEngine.AnimatorStateInfo::m_NormalizedTime
	float ___m_NormalizedTime_3;
	// System.Single UnityEngine.AnimatorStateInfo::m_Length
	float ___m_Length_4;
	// System.Single UnityEngine.AnimatorStateInfo::m_Speed
	float ___m_Speed_5;
	// System.Single UnityEngine.AnimatorStateInfo::m_SpeedMultiplier
	float ___m_SpeedMultiplier_6;
	// System.Int32 UnityEngine.AnimatorStateInfo::m_Tag
	int32_t ___m_Tag_7;
	// System.Int32 UnityEngine.AnimatorStateInfo::m_Loop
	int32_t ___m_Loop_8;

public:
	inline static int32_t get_offset_of_m_Name_0() { return static_cast<int32_t>(offsetof(AnimatorStateInfo_t509032636, ___m_Name_0)); }
	inline int32_t get_m_Name_0() const { return ___m_Name_0; }
	inline int32_t* get_address_of_m_Name_0() { return &___m_Name_0; }
	inline void set_m_Name_0(int32_t value)
	{
		___m_Name_0 = value;
	}

	inline static int32_t get_offset_of_m_Path_1() { return static_cast<int32_t>(offsetof(AnimatorStateInfo_t509032636, ___m_Path_1)); }
	inline int32_t get_m_Path_1() const { return ___m_Path_1; }
	inline int32_t* get_address_of_m_Path_1() { return &___m_Path_1; }
	inline void set_m_Path_1(int32_t value)
	{
		___m_Path_1 = value;
	}

	inline static int32_t get_offset_of_m_FullPath_2() { return static_cast<int32_t>(offsetof(AnimatorStateInfo_t509032636, ___m_FullPath_2)); }
	inline int32_t get_m_FullPath_2() const { return ___m_FullPath_2; }
	inline int32_t* get_address_of_m_FullPath_2() { return &___m_FullPath_2; }
	inline void set_m_FullPath_2(int32_t value)
	{
		___m_FullPath_2 = value;
	}

	inline static int32_t get_offset_of_m_NormalizedTime_3() { return static_cast<int32_t>(offsetof(AnimatorStateInfo_t509032636, ___m_NormalizedTime_3)); }
	inline float get_m_NormalizedTime_3() const { return ___m_NormalizedTime_3; }
	inline float* get_address_of_m_NormalizedTime_3() { return &___m_NormalizedTime_3; }
	inline void set_m_NormalizedTime_3(float value)
	{
		___m_NormalizedTime_3 = value;
	}

	inline static int32_t get_offset_of_m_Length_4() { return static_cast<int32_t>(offsetof(AnimatorStateInfo_t509032636, ___m_Length_4)); }
	inline float get_m_Length_4() const { return ___m_Length_4; }
	inline float* get_address_of_m_Length_4() { return &___m_Length_4; }
	inline void set_m_Length_4(float value)
	{
		___m_Length_4 = value;
	}

	inline static int32_t get_offset_of_m_Speed_5() { return static_cast<int32_t>(offsetof(AnimatorStateInfo_t509032636, ___m_Speed_5)); }
	inline float get_m_Speed_5() const { return ___m_Speed_5; }
	inline float* get_address_of_m_Speed_5() { return &___m_Speed_5; }
	inline void set_m_Speed_5(float value)
	{
		___m_Speed_5 = value;
	}

	inline static int32_t get_offset_of_m_SpeedMultiplier_6() { return static_cast<int32_t>(offsetof(AnimatorStateInfo_t509032636, ___m_SpeedMultiplier_6)); }
	inline float get_m_SpeedMultiplier_6() const { return ___m_SpeedMultiplier_6; }
	inline float* get_address_of_m_SpeedMultiplier_6() { return &___m_SpeedMultiplier_6; }
	inline void set_m_SpeedMultiplier_6(float value)
	{
		___m_SpeedMultiplier_6 = value;
	}

	inline static int32_t get_offset_of_m_Tag_7() { return static_cast<int32_t>(offsetof(AnimatorStateInfo_t509032636, ___m_Tag_7)); }
	inline int32_t get_m_Tag_7() const { return ___m_Tag_7; }
	inline int32_t* get_address_of_m_Tag_7() { return &___m_Tag_7; }
	inline void set_m_Tag_7(int32_t value)
	{
		___m_Tag_7 = value;
	}

	inline static int32_t get_offset_of_m_Loop_8() { return static_cast<int32_t>(offsetof(AnimatorStateInfo_t509032636, ___m_Loop_8)); }
	inline int32_t get_m_Loop_8() const { return ___m_Loop_8; }
	inline int32_t* get_address_of_m_Loop_8() { return &___m_Loop_8; }
	inline void set_m_Loop_8(int32_t value)
	{
		___m_Loop_8 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ANIMATORSTATEINFO_T509032636_H
#ifndef TMP_XMLTAGSTACK_1_T2514600297_H
#define TMP_XMLTAGSTACK_1_T2514600297_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// TMPro.TMP_XmlTagStack`1<System.Int32>
struct  TMP_XmlTagStack_1_t2514600297 
{
public:
	// T[] TMPro.TMP_XmlTagStack`1::itemStack
	Int32U5BU5D_t385246372* ___itemStack_0;
	// System.Int32 TMPro.TMP_XmlTagStack`1::index
	int32_t ___index_1;
	// System.Int32 TMPro.TMP_XmlTagStack`1::m_capacity
	int32_t ___m_capacity_2;
	// T TMPro.TMP_XmlTagStack`1::m_defaultItem
	int32_t ___m_defaultItem_3;

public:
	inline static int32_t get_offset_of_itemStack_0() { return static_cast<int32_t>(offsetof(TMP_XmlTagStack_1_t2514600297, ___itemStack_0)); }
	inline Int32U5BU5D_t385246372* get_itemStack_0() const { return ___itemStack_0; }
	inline Int32U5BU5D_t385246372** get_address_of_itemStack_0() { return &___itemStack_0; }
	inline void set_itemStack_0(Int32U5BU5D_t385246372* value)
	{
		___itemStack_0 = value;
		Il2CppCodeGenWriteBarrier((&___itemStack_0), value);
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(TMP_XmlTagStack_1_t2514600297, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}

	inline static int32_t get_offset_of_m_capacity_2() { return static_cast<int32_t>(offsetof(TMP_XmlTagStack_1_t2514600297, ___m_capacity_2)); }
	inline int32_t get_m_capacity_2() const { return ___m_capacity_2; }
	inline int32_t* get_address_of_m_capacity_2() { return &___m_capacity_2; }
	inline void set_m_capacity_2(int32_t value)
	{
		___m_capacity_2 = value;
	}

	inline static int32_t get_offset_of_m_defaultItem_3() { return static_cast<int32_t>(offsetof(TMP_XmlTagStack_1_t2514600297, ___m_defaultItem_3)); }
	inline int32_t get_m_defaultItem_3() const { return ___m_defaultItem_3; }
	inline int32_t* get_address_of_m_defaultItem_3() { return &___m_defaultItem_3; }
	inline void set_m_defaultItem_3(int32_t value)
	{
		___m_defaultItem_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TMP_XMLTAGSTACK_1_T2514600297_H
#ifndef INTPTR_T_H
#define INTPTR_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.IntPtr
struct  IntPtr_t 
{
public:
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(IntPtr_t, ___m_value_0)); }
	inline void* get_m_value_0() const { return ___m_value_0; }
	inline void** get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(void* value)
	{
		___m_value_0 = value;
	}
};

struct IntPtr_t_StaticFields
{
public:
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;

public:
	inline static int32_t get_offset_of_Zero_1() { return static_cast<int32_t>(offsetof(IntPtr_t_StaticFields, ___Zero_1)); }
	inline intptr_t get_Zero_1() const { return ___Zero_1; }
	inline intptr_t* get_address_of_Zero_1() { return &___Zero_1; }
	inline void set_Zero_1(intptr_t value)
	{
		___Zero_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INTPTR_T_H
#ifndef MATERIALREFERENCE_T1952344632_H
#define MATERIALREFERENCE_T1952344632_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// TMPro.MaterialReference
struct  MaterialReference_t1952344632 
{
public:
	// System.Int32 TMPro.MaterialReference::index
	int32_t ___index_0;
	// TMPro.TMP_FontAsset TMPro.MaterialReference::fontAsset
	TMP_FontAsset_t364381626 * ___fontAsset_1;
	// TMPro.TMP_SpriteAsset TMPro.MaterialReference::spriteAsset
	TMP_SpriteAsset_t484820633 * ___spriteAsset_2;
	// UnityEngine.Material TMPro.MaterialReference::material
	Material_t340375123 * ___material_3;
	// System.Boolean TMPro.MaterialReference::isDefaultMaterial
	bool ___isDefaultMaterial_4;
	// System.Boolean TMPro.MaterialReference::isFallbackMaterial
	bool ___isFallbackMaterial_5;
	// UnityEngine.Material TMPro.MaterialReference::fallbackMaterial
	Material_t340375123 * ___fallbackMaterial_6;
	// System.Single TMPro.MaterialReference::padding
	float ___padding_7;
	// System.Int32 TMPro.MaterialReference::referenceCount
	int32_t ___referenceCount_8;

public:
	inline static int32_t get_offset_of_index_0() { return static_cast<int32_t>(offsetof(MaterialReference_t1952344632, ___index_0)); }
	inline int32_t get_index_0() const { return ___index_0; }
	inline int32_t* get_address_of_index_0() { return &___index_0; }
	inline void set_index_0(int32_t value)
	{
		___index_0 = value;
	}

	inline static int32_t get_offset_of_fontAsset_1() { return static_cast<int32_t>(offsetof(MaterialReference_t1952344632, ___fontAsset_1)); }
	inline TMP_FontAsset_t364381626 * get_fontAsset_1() const { return ___fontAsset_1; }
	inline TMP_FontAsset_t364381626 ** get_address_of_fontAsset_1() { return &___fontAsset_1; }
	inline void set_fontAsset_1(TMP_FontAsset_t364381626 * value)
	{
		___fontAsset_1 = value;
		Il2CppCodeGenWriteBarrier((&___fontAsset_1), value);
	}

	inline static int32_t get_offset_of_spriteAsset_2() { return static_cast<int32_t>(offsetof(MaterialReference_t1952344632, ___spriteAsset_2)); }
	inline TMP_SpriteAsset_t484820633 * get_spriteAsset_2() const { return ___spriteAsset_2; }
	inline TMP_SpriteAsset_t484820633 ** get_address_of_spriteAsset_2() { return &___spriteAsset_2; }
	inline void set_spriteAsset_2(TMP_SpriteAsset_t484820633 * value)
	{
		___spriteAsset_2 = value;
		Il2CppCodeGenWriteBarrier((&___spriteAsset_2), value);
	}

	inline static int32_t get_offset_of_material_3() { return static_cast<int32_t>(offsetof(MaterialReference_t1952344632, ___material_3)); }
	inline Material_t340375123 * get_material_3() const { return ___material_3; }
	inline Material_t340375123 ** get_address_of_material_3() { return &___material_3; }
	inline void set_material_3(Material_t340375123 * value)
	{
		___material_3 = value;
		Il2CppCodeGenWriteBarrier((&___material_3), value);
	}

	inline static int32_t get_offset_of_isDefaultMaterial_4() { return static_cast<int32_t>(offsetof(MaterialReference_t1952344632, ___isDefaultMaterial_4)); }
	inline bool get_isDefaultMaterial_4() const { return ___isDefaultMaterial_4; }
	inline bool* get_address_of_isDefaultMaterial_4() { return &___isDefaultMaterial_4; }
	inline void set_isDefaultMaterial_4(bool value)
	{
		___isDefaultMaterial_4 = value;
	}

	inline static int32_t get_offset_of_isFallbackMaterial_5() { return static_cast<int32_t>(offsetof(MaterialReference_t1952344632, ___isFallbackMaterial_5)); }
	inline bool get_isFallbackMaterial_5() const { return ___isFallbackMaterial_5; }
	inline bool* get_address_of_isFallbackMaterial_5() { return &___isFallbackMaterial_5; }
	inline void set_isFallbackMaterial_5(bool value)
	{
		___isFallbackMaterial_5 = value;
	}

	inline static int32_t get_offset_of_fallbackMaterial_6() { return static_cast<int32_t>(offsetof(MaterialReference_t1952344632, ___fallbackMaterial_6)); }
	inline Material_t340375123 * get_fallbackMaterial_6() const { return ___fallbackMaterial_6; }
	inline Material_t340375123 ** get_address_of_fallbackMaterial_6() { return &___fallbackMaterial_6; }
	inline void set_fallbackMaterial_6(Material_t340375123 * value)
	{
		___fallbackMaterial_6 = value;
		Il2CppCodeGenWriteBarrier((&___fallbackMaterial_6), value);
	}

	inline static int32_t get_offset_of_padding_7() { return static_cast<int32_t>(offsetof(MaterialReference_t1952344632, ___padding_7)); }
	inline float get_padding_7() const { return ___padding_7; }
	inline float* get_address_of_padding_7() { return &___padding_7; }
	inline void set_padding_7(float value)
	{
		___padding_7 = value;
	}

	inline static int32_t get_offset_of_referenceCount_8() { return static_cast<int32_t>(offsetof(MaterialReference_t1952344632, ___referenceCount_8)); }
	inline int32_t get_referenceCount_8() const { return ___referenceCount_8; }
	inline int32_t* get_address_of_referenceCount_8() { return &___referenceCount_8; }
	inline void set_referenceCount_8(int32_t value)
	{
		___referenceCount_8 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of TMPro.MaterialReference
struct MaterialReference_t1952344632_marshaled_pinvoke
{
	int32_t ___index_0;
	TMP_FontAsset_t364381626 * ___fontAsset_1;
	TMP_SpriteAsset_t484820633 * ___spriteAsset_2;
	Material_t340375123 * ___material_3;
	int32_t ___isDefaultMaterial_4;
	int32_t ___isFallbackMaterial_5;
	Material_t340375123 * ___fallbackMaterial_6;
	float ___padding_7;
	int32_t ___referenceCount_8;
};
// Native definition for COM marshalling of TMPro.MaterialReference
struct MaterialReference_t1952344632_marshaled_com
{
	int32_t ___index_0;
	TMP_FontAsset_t364381626 * ___fontAsset_1;
	TMP_SpriteAsset_t484820633 * ___spriteAsset_2;
	Material_t340375123 * ___material_3;
	int32_t ___isDefaultMaterial_4;
	int32_t ___isFallbackMaterial_5;
	Material_t340375123 * ___fallbackMaterial_6;
	float ___padding_7;
	int32_t ___referenceCount_8;
};
#endif // MATERIALREFERENCE_T1952344632_H
#ifndef ENUMERATOR_T989985774_H
#define ENUMERATOR_T989985774_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.List`1/Enumerator<UnityEngine.Component>
struct  Enumerator_t989985774 
{
public:
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::l
	List_1_t3395709193 * ___l_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::next
	int32_t ___next_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::ver
	int32_t ___ver_2;
	// T System.Collections.Generic.List`1/Enumerator::current
	Component_t1923634451 * ___current_3;

public:
	inline static int32_t get_offset_of_l_0() { return static_cast<int32_t>(offsetof(Enumerator_t989985774, ___l_0)); }
	inline List_1_t3395709193 * get_l_0() const { return ___l_0; }
	inline List_1_t3395709193 ** get_address_of_l_0() { return &___l_0; }
	inline void set_l_0(List_1_t3395709193 * value)
	{
		___l_0 = value;
		Il2CppCodeGenWriteBarrier((&___l_0), value);
	}

	inline static int32_t get_offset_of_next_1() { return static_cast<int32_t>(offsetof(Enumerator_t989985774, ___next_1)); }
	inline int32_t get_next_1() const { return ___next_1; }
	inline int32_t* get_address_of_next_1() { return &___next_1; }
	inline void set_next_1(int32_t value)
	{
		___next_1 = value;
	}

	inline static int32_t get_offset_of_ver_2() { return static_cast<int32_t>(offsetof(Enumerator_t989985774, ___ver_2)); }
	inline int32_t get_ver_2() const { return ___ver_2; }
	inline int32_t* get_address_of_ver_2() { return &___ver_2; }
	inline void set_ver_2(int32_t value)
	{
		___ver_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_t989985774, ___current_3)); }
	inline Component_t1923634451 * get_current_3() const { return ___current_3; }
	inline Component_t1923634451 ** get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(Component_t1923634451 * value)
	{
		___current_3 = value;
		Il2CppCodeGenWriteBarrier((&___current_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENUMERATOR_T989985774_H
#ifndef MATRIX4X4_T1817901843_H
#define MATRIX4X4_T1817901843_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Matrix4x4
struct  Matrix4x4_t1817901843 
{
public:
	// System.Single UnityEngine.Matrix4x4::m00
	float ___m00_0;
	// System.Single UnityEngine.Matrix4x4::m10
	float ___m10_1;
	// System.Single UnityEngine.Matrix4x4::m20
	float ___m20_2;
	// System.Single UnityEngine.Matrix4x4::m30
	float ___m30_3;
	// System.Single UnityEngine.Matrix4x4::m01
	float ___m01_4;
	// System.Single UnityEngine.Matrix4x4::m11
	float ___m11_5;
	// System.Single UnityEngine.Matrix4x4::m21
	float ___m21_6;
	// System.Single UnityEngine.Matrix4x4::m31
	float ___m31_7;
	// System.Single UnityEngine.Matrix4x4::m02
	float ___m02_8;
	// System.Single UnityEngine.Matrix4x4::m12
	float ___m12_9;
	// System.Single UnityEngine.Matrix4x4::m22
	float ___m22_10;
	// System.Single UnityEngine.Matrix4x4::m32
	float ___m32_11;
	// System.Single UnityEngine.Matrix4x4::m03
	float ___m03_12;
	// System.Single UnityEngine.Matrix4x4::m13
	float ___m13_13;
	// System.Single UnityEngine.Matrix4x4::m23
	float ___m23_14;
	// System.Single UnityEngine.Matrix4x4::m33
	float ___m33_15;

public:
	inline static int32_t get_offset_of_m00_0() { return static_cast<int32_t>(offsetof(Matrix4x4_t1817901843, ___m00_0)); }
	inline float get_m00_0() const { return ___m00_0; }
	inline float* get_address_of_m00_0() { return &___m00_0; }
	inline void set_m00_0(float value)
	{
		___m00_0 = value;
	}

	inline static int32_t get_offset_of_m10_1() { return static_cast<int32_t>(offsetof(Matrix4x4_t1817901843, ___m10_1)); }
	inline float get_m10_1() const { return ___m10_1; }
	inline float* get_address_of_m10_1() { return &___m10_1; }
	inline void set_m10_1(float value)
	{
		___m10_1 = value;
	}

	inline static int32_t get_offset_of_m20_2() { return static_cast<int32_t>(offsetof(Matrix4x4_t1817901843, ___m20_2)); }
	inline float get_m20_2() const { return ___m20_2; }
	inline float* get_address_of_m20_2() { return &___m20_2; }
	inline void set_m20_2(float value)
	{
		___m20_2 = value;
	}

	inline static int32_t get_offset_of_m30_3() { return static_cast<int32_t>(offsetof(Matrix4x4_t1817901843, ___m30_3)); }
	inline float get_m30_3() const { return ___m30_3; }
	inline float* get_address_of_m30_3() { return &___m30_3; }
	inline void set_m30_3(float value)
	{
		___m30_3 = value;
	}

	inline static int32_t get_offset_of_m01_4() { return static_cast<int32_t>(offsetof(Matrix4x4_t1817901843, ___m01_4)); }
	inline float get_m01_4() const { return ___m01_4; }
	inline float* get_address_of_m01_4() { return &___m01_4; }
	inline void set_m01_4(float value)
	{
		___m01_4 = value;
	}

	inline static int32_t get_offset_of_m11_5() { return static_cast<int32_t>(offsetof(Matrix4x4_t1817901843, ___m11_5)); }
	inline float get_m11_5() const { return ___m11_5; }
	inline float* get_address_of_m11_5() { return &___m11_5; }
	inline void set_m11_5(float value)
	{
		___m11_5 = value;
	}

	inline static int32_t get_offset_of_m21_6() { return static_cast<int32_t>(offsetof(Matrix4x4_t1817901843, ___m21_6)); }
	inline float get_m21_6() const { return ___m21_6; }
	inline float* get_address_of_m21_6() { return &___m21_6; }
	inline void set_m21_6(float value)
	{
		___m21_6 = value;
	}

	inline static int32_t get_offset_of_m31_7() { return static_cast<int32_t>(offsetof(Matrix4x4_t1817901843, ___m31_7)); }
	inline float get_m31_7() const { return ___m31_7; }
	inline float* get_address_of_m31_7() { return &___m31_7; }
	inline void set_m31_7(float value)
	{
		___m31_7 = value;
	}

	inline static int32_t get_offset_of_m02_8() { return static_cast<int32_t>(offsetof(Matrix4x4_t1817901843, ___m02_8)); }
	inline float get_m02_8() const { return ___m02_8; }
	inline float* get_address_of_m02_8() { return &___m02_8; }
	inline void set_m02_8(float value)
	{
		___m02_8 = value;
	}

	inline static int32_t get_offset_of_m12_9() { return static_cast<int32_t>(offsetof(Matrix4x4_t1817901843, ___m12_9)); }
	inline float get_m12_9() const { return ___m12_9; }
	inline float* get_address_of_m12_9() { return &___m12_9; }
	inline void set_m12_9(float value)
	{
		___m12_9 = value;
	}

	inline static int32_t get_offset_of_m22_10() { return static_cast<int32_t>(offsetof(Matrix4x4_t1817901843, ___m22_10)); }
	inline float get_m22_10() const { return ___m22_10; }
	inline float* get_address_of_m22_10() { return &___m22_10; }
	inline void set_m22_10(float value)
	{
		___m22_10 = value;
	}

	inline static int32_t get_offset_of_m32_11() { return static_cast<int32_t>(offsetof(Matrix4x4_t1817901843, ___m32_11)); }
	inline float get_m32_11() const { return ___m32_11; }
	inline float* get_address_of_m32_11() { return &___m32_11; }
	inline void set_m32_11(float value)
	{
		___m32_11 = value;
	}

	inline static int32_t get_offset_of_m03_12() { return static_cast<int32_t>(offsetof(Matrix4x4_t1817901843, ___m03_12)); }
	inline float get_m03_12() const { return ___m03_12; }
	inline float* get_address_of_m03_12() { return &___m03_12; }
	inline void set_m03_12(float value)
	{
		___m03_12 = value;
	}

	inline static int32_t get_offset_of_m13_13() { return static_cast<int32_t>(offsetof(Matrix4x4_t1817901843, ___m13_13)); }
	inline float get_m13_13() const { return ___m13_13; }
	inline float* get_address_of_m13_13() { return &___m13_13; }
	inline void set_m13_13(float value)
	{
		___m13_13 = value;
	}

	inline static int32_t get_offset_of_m23_14() { return static_cast<int32_t>(offsetof(Matrix4x4_t1817901843, ___m23_14)); }
	inline float get_m23_14() const { return ___m23_14; }
	inline float* get_address_of_m23_14() { return &___m23_14; }
	inline void set_m23_14(float value)
	{
		___m23_14 = value;
	}

	inline static int32_t get_offset_of_m33_15() { return static_cast<int32_t>(offsetof(Matrix4x4_t1817901843, ___m33_15)); }
	inline float get_m33_15() const { return ___m33_15; }
	inline float* get_address_of_m33_15() { return &___m33_15; }
	inline void set_m33_15(float value)
	{
		___m33_15 = value;
	}
};

struct Matrix4x4_t1817901843_StaticFields
{
public:
	// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::zeroMatrix
	Matrix4x4_t1817901843  ___zeroMatrix_16;
	// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::identityMatrix
	Matrix4x4_t1817901843  ___identityMatrix_17;

public:
	inline static int32_t get_offset_of_zeroMatrix_16() { return static_cast<int32_t>(offsetof(Matrix4x4_t1817901843_StaticFields, ___zeroMatrix_16)); }
	inline Matrix4x4_t1817901843  get_zeroMatrix_16() const { return ___zeroMatrix_16; }
	inline Matrix4x4_t1817901843 * get_address_of_zeroMatrix_16() { return &___zeroMatrix_16; }
	inline void set_zeroMatrix_16(Matrix4x4_t1817901843  value)
	{
		___zeroMatrix_16 = value;
	}

	inline static int32_t get_offset_of_identityMatrix_17() { return static_cast<int32_t>(offsetof(Matrix4x4_t1817901843_StaticFields, ___identityMatrix_17)); }
	inline Matrix4x4_t1817901843  get_identityMatrix_17() const { return ___identityMatrix_17; }
	inline Matrix4x4_t1817901843 * get_address_of_identityMatrix_17() { return &___identityMatrix_17; }
	inline void set_identityMatrix_17(Matrix4x4_t1817901843  value)
	{
		___identityMatrix_17 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MATRIX4X4_T1817901843_H
#ifndef VECTOR4_T3319028937_H
#define VECTOR4_T3319028937_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Vector4
struct  Vector4_t3319028937 
{
public:
	// System.Single UnityEngine.Vector4::x
	float ___x_1;
	// System.Single UnityEngine.Vector4::y
	float ___y_2;
	// System.Single UnityEngine.Vector4::z
	float ___z_3;
	// System.Single UnityEngine.Vector4::w
	float ___w_4;

public:
	inline static int32_t get_offset_of_x_1() { return static_cast<int32_t>(offsetof(Vector4_t3319028937, ___x_1)); }
	inline float get_x_1() const { return ___x_1; }
	inline float* get_address_of_x_1() { return &___x_1; }
	inline void set_x_1(float value)
	{
		___x_1 = value;
	}

	inline static int32_t get_offset_of_y_2() { return static_cast<int32_t>(offsetof(Vector4_t3319028937, ___y_2)); }
	inline float get_y_2() const { return ___y_2; }
	inline float* get_address_of_y_2() { return &___y_2; }
	inline void set_y_2(float value)
	{
		___y_2 = value;
	}

	inline static int32_t get_offset_of_z_3() { return static_cast<int32_t>(offsetof(Vector4_t3319028937, ___z_3)); }
	inline float get_z_3() const { return ___z_3; }
	inline float* get_address_of_z_3() { return &___z_3; }
	inline void set_z_3(float value)
	{
		___z_3 = value;
	}

	inline static int32_t get_offset_of_w_4() { return static_cast<int32_t>(offsetof(Vector4_t3319028937, ___w_4)); }
	inline float get_w_4() const { return ___w_4; }
	inline float* get_address_of_w_4() { return &___w_4; }
	inline void set_w_4(float value)
	{
		___w_4 = value;
	}
};

struct Vector4_t3319028937_StaticFields
{
public:
	// UnityEngine.Vector4 UnityEngine.Vector4::zeroVector
	Vector4_t3319028937  ___zeroVector_5;
	// UnityEngine.Vector4 UnityEngine.Vector4::oneVector
	Vector4_t3319028937  ___oneVector_6;
	// UnityEngine.Vector4 UnityEngine.Vector4::positiveInfinityVector
	Vector4_t3319028937  ___positiveInfinityVector_7;
	// UnityEngine.Vector4 UnityEngine.Vector4::negativeInfinityVector
	Vector4_t3319028937  ___negativeInfinityVector_8;

public:
	inline static int32_t get_offset_of_zeroVector_5() { return static_cast<int32_t>(offsetof(Vector4_t3319028937_StaticFields, ___zeroVector_5)); }
	inline Vector4_t3319028937  get_zeroVector_5() const { return ___zeroVector_5; }
	inline Vector4_t3319028937 * get_address_of_zeroVector_5() { return &___zeroVector_5; }
	inline void set_zeroVector_5(Vector4_t3319028937  value)
	{
		___zeroVector_5 = value;
	}

	inline static int32_t get_offset_of_oneVector_6() { return static_cast<int32_t>(offsetof(Vector4_t3319028937_StaticFields, ___oneVector_6)); }
	inline Vector4_t3319028937  get_oneVector_6() const { return ___oneVector_6; }
	inline Vector4_t3319028937 * get_address_of_oneVector_6() { return &___oneVector_6; }
	inline void set_oneVector_6(Vector4_t3319028937  value)
	{
		___oneVector_6 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_7() { return static_cast<int32_t>(offsetof(Vector4_t3319028937_StaticFields, ___positiveInfinityVector_7)); }
	inline Vector4_t3319028937  get_positiveInfinityVector_7() const { return ___positiveInfinityVector_7; }
	inline Vector4_t3319028937 * get_address_of_positiveInfinityVector_7() { return &___positiveInfinityVector_7; }
	inline void set_positiveInfinityVector_7(Vector4_t3319028937  value)
	{
		___positiveInfinityVector_7 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_8() { return static_cast<int32_t>(offsetof(Vector4_t3319028937_StaticFields, ___negativeInfinityVector_8)); }
	inline Vector4_t3319028937  get_negativeInfinityVector_8() const { return ___negativeInfinityVector_8; }
	inline Vector4_t3319028937 * get_address_of_negativeInfinityVector_8() { return &___negativeInfinityVector_8; }
	inline void set_negativeInfinityVector_8(Vector4_t3319028937  value)
	{
		___negativeInfinityVector_8 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VECTOR4_T3319028937_H
#ifndef KEYVALUEPAIR_2_T1510024258_H
#define KEYVALUEPAIR_2_T1510024258_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.KeyValuePair`2<Tile,TileColorController>
struct  KeyValuePair_2_t1510024258 
{
public:
	// TKey System.Collections.Generic.KeyValuePair`2::key
	Tile_t2634157908 * ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	TileColorController_t1573688495 * ___value_1;

public:
	inline static int32_t get_offset_of_key_0() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t1510024258, ___key_0)); }
	inline Tile_t2634157908 * get_key_0() const { return ___key_0; }
	inline Tile_t2634157908 ** get_address_of_key_0() { return &___key_0; }
	inline void set_key_0(Tile_t2634157908 * value)
	{
		___key_0 = value;
		Il2CppCodeGenWriteBarrier((&___key_0), value);
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t1510024258, ___value_1)); }
	inline TileColorController_t1573688495 * get_value_1() const { return ___value_1; }
	inline TileColorController_t1573688495 ** get_address_of_value_1() { return &___value_1; }
	inline void set_value_1(TileColorController_t1573688495 * value)
	{
		___value_1 = value;
		Il2CppCodeGenWriteBarrier((&___value_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // KEYVALUEPAIR_2_T1510024258_H
#ifndef KEYVALUEPAIR_2_T2530217319_H
#define KEYVALUEPAIR_2_T2530217319_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>
struct  KeyValuePair_2_t2530217319 
{
public:
	// TKey System.Collections.Generic.KeyValuePair`2::key
	RuntimeObject * ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	RuntimeObject * ___value_1;

public:
	inline static int32_t get_offset_of_key_0() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t2530217319, ___key_0)); }
	inline RuntimeObject * get_key_0() const { return ___key_0; }
	inline RuntimeObject ** get_address_of_key_0() { return &___key_0; }
	inline void set_key_0(RuntimeObject * value)
	{
		___key_0 = value;
		Il2CppCodeGenWriteBarrier((&___key_0), value);
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t2530217319, ___value_1)); }
	inline RuntimeObject * get_value_1() const { return ___value_1; }
	inline RuntimeObject ** get_address_of_value_1() { return &___value_1; }
	inline void set_value_1(RuntimeObject * value)
	{
		___value_1 = value;
		Il2CppCodeGenWriteBarrier((&___value_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // KEYVALUEPAIR_2_T2530217319_H
#ifndef SPRITESTATE_T1362986479_H
#define SPRITESTATE_T1362986479_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.SpriteState
struct  SpriteState_t1362986479 
{
public:
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_HighlightedSprite
	Sprite_t280657092 * ___m_HighlightedSprite_0;
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_PressedSprite
	Sprite_t280657092 * ___m_PressedSprite_1;
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_DisabledSprite
	Sprite_t280657092 * ___m_DisabledSprite_2;

public:
	inline static int32_t get_offset_of_m_HighlightedSprite_0() { return static_cast<int32_t>(offsetof(SpriteState_t1362986479, ___m_HighlightedSprite_0)); }
	inline Sprite_t280657092 * get_m_HighlightedSprite_0() const { return ___m_HighlightedSprite_0; }
	inline Sprite_t280657092 ** get_address_of_m_HighlightedSprite_0() { return &___m_HighlightedSprite_0; }
	inline void set_m_HighlightedSprite_0(Sprite_t280657092 * value)
	{
		___m_HighlightedSprite_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_HighlightedSprite_0), value);
	}

	inline static int32_t get_offset_of_m_PressedSprite_1() { return static_cast<int32_t>(offsetof(SpriteState_t1362986479, ___m_PressedSprite_1)); }
	inline Sprite_t280657092 * get_m_PressedSprite_1() const { return ___m_PressedSprite_1; }
	inline Sprite_t280657092 ** get_address_of_m_PressedSprite_1() { return &___m_PressedSprite_1; }
	inline void set_m_PressedSprite_1(Sprite_t280657092 * value)
	{
		___m_PressedSprite_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_PressedSprite_1), value);
	}

	inline static int32_t get_offset_of_m_DisabledSprite_2() { return static_cast<int32_t>(offsetof(SpriteState_t1362986479, ___m_DisabledSprite_2)); }
	inline Sprite_t280657092 * get_m_DisabledSprite_2() const { return ___m_DisabledSprite_2; }
	inline Sprite_t280657092 ** get_address_of_m_DisabledSprite_2() { return &___m_DisabledSprite_2; }
	inline void set_m_DisabledSprite_2(Sprite_t280657092 * value)
	{
		___m_DisabledSprite_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_DisabledSprite_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.UI.SpriteState
struct SpriteState_t1362986479_marshaled_pinvoke
{
	Sprite_t280657092 * ___m_HighlightedSprite_0;
	Sprite_t280657092 * ___m_PressedSprite_1;
	Sprite_t280657092 * ___m_DisabledSprite_2;
};
// Native definition for COM marshalling of UnityEngine.UI.SpriteState
struct SpriteState_t1362986479_marshaled_com
{
	Sprite_t280657092 * ___m_HighlightedSprite_0;
	Sprite_t280657092 * ___m_PressedSprite_1;
	Sprite_t280657092 * ___m_DisabledSprite_2;
};
#endif // SPRITESTATE_T1362986479_H
#ifndef TMP_XMLTAGSTACK_1_T960921318_H
#define TMP_XMLTAGSTACK_1_T960921318_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// TMPro.TMP_XmlTagStack`1<System.Single>
struct  TMP_XmlTagStack_1_t960921318 
{
public:
	// T[] TMPro.TMP_XmlTagStack`1::itemStack
	SingleU5BU5D_t1444911251* ___itemStack_0;
	// System.Int32 TMPro.TMP_XmlTagStack`1::index
	int32_t ___index_1;
	// System.Int32 TMPro.TMP_XmlTagStack`1::m_capacity
	int32_t ___m_capacity_2;
	// T TMPro.TMP_XmlTagStack`1::m_defaultItem
	float ___m_defaultItem_3;

public:
	inline static int32_t get_offset_of_itemStack_0() { return static_cast<int32_t>(offsetof(TMP_XmlTagStack_1_t960921318, ___itemStack_0)); }
	inline SingleU5BU5D_t1444911251* get_itemStack_0() const { return ___itemStack_0; }
	inline SingleU5BU5D_t1444911251** get_address_of_itemStack_0() { return &___itemStack_0; }
	inline void set_itemStack_0(SingleU5BU5D_t1444911251* value)
	{
		___itemStack_0 = value;
		Il2CppCodeGenWriteBarrier((&___itemStack_0), value);
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(TMP_XmlTagStack_1_t960921318, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}

	inline static int32_t get_offset_of_m_capacity_2() { return static_cast<int32_t>(offsetof(TMP_XmlTagStack_1_t960921318, ___m_capacity_2)); }
	inline int32_t get_m_capacity_2() const { return ___m_capacity_2; }
	inline int32_t* get_address_of_m_capacity_2() { return &___m_capacity_2; }
	inline void set_m_capacity_2(int32_t value)
	{
		___m_capacity_2 = value;
	}

	inline static int32_t get_offset_of_m_defaultItem_3() { return static_cast<int32_t>(offsetof(TMP_XmlTagStack_1_t960921318, ___m_defaultItem_3)); }
	inline float get_m_defaultItem_3() const { return ___m_defaultItem_3; }
	inline float* get_address_of_m_defaultItem_3() { return &___m_defaultItem_3; }
	inline void set_m_defaultItem_3(float value)
	{
		___m_defaultItem_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TMP_XMLTAGSTACK_1_T960921318_H
#ifndef COLOR32_T2600501292_H
#define COLOR32_T2600501292_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Color32
struct  Color32_t2600501292 
{
public:
	union
	{
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Int32 UnityEngine.Color32::rgba
			int32_t ___rgba_0;
		};
		#pragma pack(pop, tp)
		struct
		{
			int32_t ___rgba_0_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Byte UnityEngine.Color32::r
			uint8_t ___r_1;
		};
		#pragma pack(pop, tp)
		struct
		{
			uint8_t ___r_1_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___g_2_OffsetPadding[1];
			// System.Byte UnityEngine.Color32::g
			uint8_t ___g_2;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___g_2_OffsetPadding_forAlignmentOnly[1];
			uint8_t ___g_2_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___b_3_OffsetPadding[2];
			// System.Byte UnityEngine.Color32::b
			uint8_t ___b_3;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___b_3_OffsetPadding_forAlignmentOnly[2];
			uint8_t ___b_3_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___a_4_OffsetPadding[3];
			// System.Byte UnityEngine.Color32::a
			uint8_t ___a_4;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___a_4_OffsetPadding_forAlignmentOnly[3];
			uint8_t ___a_4_forAlignmentOnly;
		};
	};

public:
	inline static int32_t get_offset_of_rgba_0() { return static_cast<int32_t>(offsetof(Color32_t2600501292, ___rgba_0)); }
	inline int32_t get_rgba_0() const { return ___rgba_0; }
	inline int32_t* get_address_of_rgba_0() { return &___rgba_0; }
	inline void set_rgba_0(int32_t value)
	{
		___rgba_0 = value;
	}

	inline static int32_t get_offset_of_r_1() { return static_cast<int32_t>(offsetof(Color32_t2600501292, ___r_1)); }
	inline uint8_t get_r_1() const { return ___r_1; }
	inline uint8_t* get_address_of_r_1() { return &___r_1; }
	inline void set_r_1(uint8_t value)
	{
		___r_1 = value;
	}

	inline static int32_t get_offset_of_g_2() { return static_cast<int32_t>(offsetof(Color32_t2600501292, ___g_2)); }
	inline uint8_t get_g_2() const { return ___g_2; }
	inline uint8_t* get_address_of_g_2() { return &___g_2; }
	inline void set_g_2(uint8_t value)
	{
		___g_2 = value;
	}

	inline static int32_t get_offset_of_b_3() { return static_cast<int32_t>(offsetof(Color32_t2600501292, ___b_3)); }
	inline uint8_t get_b_3() const { return ___b_3; }
	inline uint8_t* get_address_of_b_3() { return &___b_3; }
	inline void set_b_3(uint8_t value)
	{
		___b_3 = value;
	}

	inline static int32_t get_offset_of_a_4() { return static_cast<int32_t>(offsetof(Color32_t2600501292, ___a_4)); }
	inline uint8_t get_a_4() const { return ___a_4; }
	inline uint8_t* get_address_of_a_4() { return &___a_4; }
	inline void set_a_4(uint8_t value)
	{
		___a_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COLOR32_T2600501292_H
#ifndef QUATERNION_T2301928331_H
#define QUATERNION_T2301928331_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Quaternion
struct  Quaternion_t2301928331 
{
public:
	// System.Single UnityEngine.Quaternion::x
	float ___x_0;
	// System.Single UnityEngine.Quaternion::y
	float ___y_1;
	// System.Single UnityEngine.Quaternion::z
	float ___z_2;
	// System.Single UnityEngine.Quaternion::w
	float ___w_3;

public:
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(Quaternion_t2301928331, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(Quaternion_t2301928331, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}

	inline static int32_t get_offset_of_z_2() { return static_cast<int32_t>(offsetof(Quaternion_t2301928331, ___z_2)); }
	inline float get_z_2() const { return ___z_2; }
	inline float* get_address_of_z_2() { return &___z_2; }
	inline void set_z_2(float value)
	{
		___z_2 = value;
	}

	inline static int32_t get_offset_of_w_3() { return static_cast<int32_t>(offsetof(Quaternion_t2301928331, ___w_3)); }
	inline float get_w_3() const { return ___w_3; }
	inline float* get_address_of_w_3() { return &___w_3; }
	inline void set_w_3(float value)
	{
		___w_3 = value;
	}
};

struct Quaternion_t2301928331_StaticFields
{
public:
	// UnityEngine.Quaternion UnityEngine.Quaternion::identityQuaternion
	Quaternion_t2301928331  ___identityQuaternion_4;

public:
	inline static int32_t get_offset_of_identityQuaternion_4() { return static_cast<int32_t>(offsetof(Quaternion_t2301928331_StaticFields, ___identityQuaternion_4)); }
	inline Quaternion_t2301928331  get_identityQuaternion_4() const { return ___identityQuaternion_4; }
	inline Quaternion_t2301928331 * get_address_of_identityQuaternion_4() { return &___identityQuaternion_4; }
	inline void set_identityQuaternion_4(Quaternion_t2301928331  value)
	{
		___identityQuaternion_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // QUATERNION_T2301928331_H
#ifndef COLOR_T2555686324_H
#define COLOR_T2555686324_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Color
struct  Color_t2555686324 
{
public:
	// System.Single UnityEngine.Color::r
	float ___r_0;
	// System.Single UnityEngine.Color::g
	float ___g_1;
	// System.Single UnityEngine.Color::b
	float ___b_2;
	// System.Single UnityEngine.Color::a
	float ___a_3;

public:
	inline static int32_t get_offset_of_r_0() { return static_cast<int32_t>(offsetof(Color_t2555686324, ___r_0)); }
	inline float get_r_0() const { return ___r_0; }
	inline float* get_address_of_r_0() { return &___r_0; }
	inline void set_r_0(float value)
	{
		___r_0 = value;
	}

	inline static int32_t get_offset_of_g_1() { return static_cast<int32_t>(offsetof(Color_t2555686324, ___g_1)); }
	inline float get_g_1() const { return ___g_1; }
	inline float* get_address_of_g_1() { return &___g_1; }
	inline void set_g_1(float value)
	{
		___g_1 = value;
	}

	inline static int32_t get_offset_of_b_2() { return static_cast<int32_t>(offsetof(Color_t2555686324, ___b_2)); }
	inline float get_b_2() const { return ___b_2; }
	inline float* get_address_of_b_2() { return &___b_2; }
	inline void set_b_2(float value)
	{
		___b_2 = value;
	}

	inline static int32_t get_offset_of_a_3() { return static_cast<int32_t>(offsetof(Color_t2555686324, ___a_3)); }
	inline float get_a_3() const { return ___a_3; }
	inline float* get_address_of_a_3() { return &___a_3; }
	inline void set_a_3(float value)
	{
		___a_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COLOR_T2555686324_H
#ifndef VOID_T1185182177_H
#define VOID_T1185182177_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Void
struct  Void_t1185182177 
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VOID_T1185182177_H
#ifndef SINGLE_T1397266774_H
#define SINGLE_T1397266774_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Single
struct  Single_t1397266774 
{
public:
	// System.Single System.Single::m_value
	float ___m_value_7;

public:
	inline static int32_t get_offset_of_m_value_7() { return static_cast<int32_t>(offsetof(Single_t1397266774, ___m_value_7)); }
	inline float get_m_value_7() const { return ___m_value_7; }
	inline float* get_address_of_m_value_7() { return &___m_value_7; }
	inline void set_m_value_7(float value)
	{
		___m_value_7 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SINGLE_T1397266774_H
#ifndef BOOLEAN_T97287965_H
#define BOOLEAN_T97287965_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Boolean
struct  Boolean_t97287965 
{
public:
	// System.Boolean System.Boolean::m_value
	bool ___m_value_2;

public:
	inline static int32_t get_offset_of_m_value_2() { return static_cast<int32_t>(offsetof(Boolean_t97287965, ___m_value_2)); }
	inline bool get_m_value_2() const { return ___m_value_2; }
	inline bool* get_address_of_m_value_2() { return &___m_value_2; }
	inline void set_m_value_2(bool value)
	{
		___m_value_2 = value;
	}
};

struct Boolean_t97287965_StaticFields
{
public:
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_0;
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_1;

public:
	inline static int32_t get_offset_of_FalseString_0() { return static_cast<int32_t>(offsetof(Boolean_t97287965_StaticFields, ___FalseString_0)); }
	inline String_t* get_FalseString_0() const { return ___FalseString_0; }
	inline String_t** get_address_of_FalseString_0() { return &___FalseString_0; }
	inline void set_FalseString_0(String_t* value)
	{
		___FalseString_0 = value;
		Il2CppCodeGenWriteBarrier((&___FalseString_0), value);
	}

	inline static int32_t get_offset_of_TrueString_1() { return static_cast<int32_t>(offsetof(Boolean_t97287965_StaticFields, ___TrueString_1)); }
	inline String_t* get_TrueString_1() const { return ___TrueString_1; }
	inline String_t** get_address_of_TrueString_1() { return &___TrueString_1; }
	inline void set_TrueString_1(String_t* value)
	{
		___TrueString_1 = value;
		Il2CppCodeGenWriteBarrier((&___TrueString_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BOOLEAN_T97287965_H
#ifndef VECTOR3_T3722313464_H
#define VECTOR3_T3722313464_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Vector3
struct  Vector3_t3722313464 
{
public:
	// System.Single UnityEngine.Vector3::x
	float ___x_1;
	// System.Single UnityEngine.Vector3::y
	float ___y_2;
	// System.Single UnityEngine.Vector3::z
	float ___z_3;

public:
	inline static int32_t get_offset_of_x_1() { return static_cast<int32_t>(offsetof(Vector3_t3722313464, ___x_1)); }
	inline float get_x_1() const { return ___x_1; }
	inline float* get_address_of_x_1() { return &___x_1; }
	inline void set_x_1(float value)
	{
		___x_1 = value;
	}

	inline static int32_t get_offset_of_y_2() { return static_cast<int32_t>(offsetof(Vector3_t3722313464, ___y_2)); }
	inline float get_y_2() const { return ___y_2; }
	inline float* get_address_of_y_2() { return &___y_2; }
	inline void set_y_2(float value)
	{
		___y_2 = value;
	}

	inline static int32_t get_offset_of_z_3() { return static_cast<int32_t>(offsetof(Vector3_t3722313464, ___z_3)); }
	inline float get_z_3() const { return ___z_3; }
	inline float* get_address_of_z_3() { return &___z_3; }
	inline void set_z_3(float value)
	{
		___z_3 = value;
	}
};

struct Vector3_t3722313464_StaticFields
{
public:
	// UnityEngine.Vector3 UnityEngine.Vector3::zeroVector
	Vector3_t3722313464  ___zeroVector_4;
	// UnityEngine.Vector3 UnityEngine.Vector3::oneVector
	Vector3_t3722313464  ___oneVector_5;
	// UnityEngine.Vector3 UnityEngine.Vector3::upVector
	Vector3_t3722313464  ___upVector_6;
	// UnityEngine.Vector3 UnityEngine.Vector3::downVector
	Vector3_t3722313464  ___downVector_7;
	// UnityEngine.Vector3 UnityEngine.Vector3::leftVector
	Vector3_t3722313464  ___leftVector_8;
	// UnityEngine.Vector3 UnityEngine.Vector3::rightVector
	Vector3_t3722313464  ___rightVector_9;
	// UnityEngine.Vector3 UnityEngine.Vector3::forwardVector
	Vector3_t3722313464  ___forwardVector_10;
	// UnityEngine.Vector3 UnityEngine.Vector3::backVector
	Vector3_t3722313464  ___backVector_11;
	// UnityEngine.Vector3 UnityEngine.Vector3::positiveInfinityVector
	Vector3_t3722313464  ___positiveInfinityVector_12;
	// UnityEngine.Vector3 UnityEngine.Vector3::negativeInfinityVector
	Vector3_t3722313464  ___negativeInfinityVector_13;

public:
	inline static int32_t get_offset_of_zeroVector_4() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___zeroVector_4)); }
	inline Vector3_t3722313464  get_zeroVector_4() const { return ___zeroVector_4; }
	inline Vector3_t3722313464 * get_address_of_zeroVector_4() { return &___zeroVector_4; }
	inline void set_zeroVector_4(Vector3_t3722313464  value)
	{
		___zeroVector_4 = value;
	}

	inline static int32_t get_offset_of_oneVector_5() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___oneVector_5)); }
	inline Vector3_t3722313464  get_oneVector_5() const { return ___oneVector_5; }
	inline Vector3_t3722313464 * get_address_of_oneVector_5() { return &___oneVector_5; }
	inline void set_oneVector_5(Vector3_t3722313464  value)
	{
		___oneVector_5 = value;
	}

	inline static int32_t get_offset_of_upVector_6() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___upVector_6)); }
	inline Vector3_t3722313464  get_upVector_6() const { return ___upVector_6; }
	inline Vector3_t3722313464 * get_address_of_upVector_6() { return &___upVector_6; }
	inline void set_upVector_6(Vector3_t3722313464  value)
	{
		___upVector_6 = value;
	}

	inline static int32_t get_offset_of_downVector_7() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___downVector_7)); }
	inline Vector3_t3722313464  get_downVector_7() const { return ___downVector_7; }
	inline Vector3_t3722313464 * get_address_of_downVector_7() { return &___downVector_7; }
	inline void set_downVector_7(Vector3_t3722313464  value)
	{
		___downVector_7 = value;
	}

	inline static int32_t get_offset_of_leftVector_8() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___leftVector_8)); }
	inline Vector3_t3722313464  get_leftVector_8() const { return ___leftVector_8; }
	inline Vector3_t3722313464 * get_address_of_leftVector_8() { return &___leftVector_8; }
	inline void set_leftVector_8(Vector3_t3722313464  value)
	{
		___leftVector_8 = value;
	}

	inline static int32_t get_offset_of_rightVector_9() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___rightVector_9)); }
	inline Vector3_t3722313464  get_rightVector_9() const { return ___rightVector_9; }
	inline Vector3_t3722313464 * get_address_of_rightVector_9() { return &___rightVector_9; }
	inline void set_rightVector_9(Vector3_t3722313464  value)
	{
		___rightVector_9 = value;
	}

	inline static int32_t get_offset_of_forwardVector_10() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___forwardVector_10)); }
	inline Vector3_t3722313464  get_forwardVector_10() const { return ___forwardVector_10; }
	inline Vector3_t3722313464 * get_address_of_forwardVector_10() { return &___forwardVector_10; }
	inline void set_forwardVector_10(Vector3_t3722313464  value)
	{
		___forwardVector_10 = value;
	}

	inline static int32_t get_offset_of_backVector_11() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___backVector_11)); }
	inline Vector3_t3722313464  get_backVector_11() const { return ___backVector_11; }
	inline Vector3_t3722313464 * get_address_of_backVector_11() { return &___backVector_11; }
	inline void set_backVector_11(Vector3_t3722313464  value)
	{
		___backVector_11 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_12() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___positiveInfinityVector_12)); }
	inline Vector3_t3722313464  get_positiveInfinityVector_12() const { return ___positiveInfinityVector_12; }
	inline Vector3_t3722313464 * get_address_of_positiveInfinityVector_12() { return &___positiveInfinityVector_12; }
	inline void set_positiveInfinityVector_12(Vector3_t3722313464  value)
	{
		___positiveInfinityVector_12 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_13() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___negativeInfinityVector_13)); }
	inline Vector3_t3722313464  get_negativeInfinityVector_13() const { return ___negativeInfinityVector_13; }
	inline Vector3_t3722313464 * get_address_of_negativeInfinityVector_13() { return &___negativeInfinityVector_13; }
	inline void set_negativeInfinityVector_13(Vector3_t3722313464  value)
	{
		___negativeInfinityVector_13 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VECTOR3_T3722313464_H
#ifndef INT32_T2950945753_H
#define INT32_T2950945753_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Int32
struct  Int32_t2950945753 
{
public:
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_2;

public:
	inline static int32_t get_offset_of_m_value_2() { return static_cast<int32_t>(offsetof(Int32_t2950945753, ___m_value_2)); }
	inline int32_t get_m_value_2() const { return ___m_value_2; }
	inline int32_t* get_address_of_m_value_2() { return &___m_value_2; }
	inline void set_m_value_2(int32_t value)
	{
		___m_value_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INT32_T2950945753_H
#ifndef VECTOR2_T2156229523_H
#define VECTOR2_T2156229523_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Vector2
struct  Vector2_t2156229523 
{
public:
	// System.Single UnityEngine.Vector2::x
	float ___x_0;
	// System.Single UnityEngine.Vector2::y
	float ___y_1;

public:
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(Vector2_t2156229523, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(Vector2_t2156229523, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}
};

struct Vector2_t2156229523_StaticFields
{
public:
	// UnityEngine.Vector2 UnityEngine.Vector2::zeroVector
	Vector2_t2156229523  ___zeroVector_2;
	// UnityEngine.Vector2 UnityEngine.Vector2::oneVector
	Vector2_t2156229523  ___oneVector_3;
	// UnityEngine.Vector2 UnityEngine.Vector2::upVector
	Vector2_t2156229523  ___upVector_4;
	// UnityEngine.Vector2 UnityEngine.Vector2::downVector
	Vector2_t2156229523  ___downVector_5;
	// UnityEngine.Vector2 UnityEngine.Vector2::leftVector
	Vector2_t2156229523  ___leftVector_6;
	// UnityEngine.Vector2 UnityEngine.Vector2::rightVector
	Vector2_t2156229523  ___rightVector_7;
	// UnityEngine.Vector2 UnityEngine.Vector2::positiveInfinityVector
	Vector2_t2156229523  ___positiveInfinityVector_8;
	// UnityEngine.Vector2 UnityEngine.Vector2::negativeInfinityVector
	Vector2_t2156229523  ___negativeInfinityVector_9;

public:
	inline static int32_t get_offset_of_zeroVector_2() { return static_cast<int32_t>(offsetof(Vector2_t2156229523_StaticFields, ___zeroVector_2)); }
	inline Vector2_t2156229523  get_zeroVector_2() const { return ___zeroVector_2; }
	inline Vector2_t2156229523 * get_address_of_zeroVector_2() { return &___zeroVector_2; }
	inline void set_zeroVector_2(Vector2_t2156229523  value)
	{
		___zeroVector_2 = value;
	}

	inline static int32_t get_offset_of_oneVector_3() { return static_cast<int32_t>(offsetof(Vector2_t2156229523_StaticFields, ___oneVector_3)); }
	inline Vector2_t2156229523  get_oneVector_3() const { return ___oneVector_3; }
	inline Vector2_t2156229523 * get_address_of_oneVector_3() { return &___oneVector_3; }
	inline void set_oneVector_3(Vector2_t2156229523  value)
	{
		___oneVector_3 = value;
	}

	inline static int32_t get_offset_of_upVector_4() { return static_cast<int32_t>(offsetof(Vector2_t2156229523_StaticFields, ___upVector_4)); }
	inline Vector2_t2156229523  get_upVector_4() const { return ___upVector_4; }
	inline Vector2_t2156229523 * get_address_of_upVector_4() { return &___upVector_4; }
	inline void set_upVector_4(Vector2_t2156229523  value)
	{
		___upVector_4 = value;
	}

	inline static int32_t get_offset_of_downVector_5() { return static_cast<int32_t>(offsetof(Vector2_t2156229523_StaticFields, ___downVector_5)); }
	inline Vector2_t2156229523  get_downVector_5() const { return ___downVector_5; }
	inline Vector2_t2156229523 * get_address_of_downVector_5() { return &___downVector_5; }
	inline void set_downVector_5(Vector2_t2156229523  value)
	{
		___downVector_5 = value;
	}

	inline static int32_t get_offset_of_leftVector_6() { return static_cast<int32_t>(offsetof(Vector2_t2156229523_StaticFields, ___leftVector_6)); }
	inline Vector2_t2156229523  get_leftVector_6() const { return ___leftVector_6; }
	inline Vector2_t2156229523 * get_address_of_leftVector_6() { return &___leftVector_6; }
	inline void set_leftVector_6(Vector2_t2156229523  value)
	{
		___leftVector_6 = value;
	}

	inline static int32_t get_offset_of_rightVector_7() { return static_cast<int32_t>(offsetof(Vector2_t2156229523_StaticFields, ___rightVector_7)); }
	inline Vector2_t2156229523  get_rightVector_7() const { return ___rightVector_7; }
	inline Vector2_t2156229523 * get_address_of_rightVector_7() { return &___rightVector_7; }
	inline void set_rightVector_7(Vector2_t2156229523  value)
	{
		___rightVector_7 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_8() { return static_cast<int32_t>(offsetof(Vector2_t2156229523_StaticFields, ___positiveInfinityVector_8)); }
	inline Vector2_t2156229523  get_positiveInfinityVector_8() const { return ___positiveInfinityVector_8; }
	inline Vector2_t2156229523 * get_address_of_positiveInfinityVector_8() { return &___positiveInfinityVector_8; }
	inline void set_positiveInfinityVector_8(Vector2_t2156229523  value)
	{
		___positiveInfinityVector_8 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_9() { return static_cast<int32_t>(offsetof(Vector2_t2156229523_StaticFields, ___negativeInfinityVector_9)); }
	inline Vector2_t2156229523  get_negativeInfinityVector_9() const { return ___negativeInfinityVector_9; }
	inline Vector2_t2156229523 * get_address_of_negativeInfinityVector_9() { return &___negativeInfinityVector_9; }
	inline void set_negativeInfinityVector_9(Vector2_t2156229523  value)
	{
		___negativeInfinityVector_9 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VECTOR2_T2156229523_H
#ifndef VERTEXSORTINGORDER_T2659893934_H
#define VERTEXSORTINGORDER_T2659893934_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// TMPro.VertexSortingOrder
struct  VertexSortingOrder_t2659893934 
{
public:
	// System.Int32 TMPro.VertexSortingOrder::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(VertexSortingOrder_t2659893934, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VERTEXSORTINGORDER_T2659893934_H
#ifndef TMP_XMLTAGSTACK_1_T1515999176_H
#define TMP_XMLTAGSTACK_1_T1515999176_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// TMPro.TMP_XmlTagStack`1<TMPro.MaterialReference>
struct  TMP_XmlTagStack_1_t1515999176 
{
public:
	// T[] TMPro.TMP_XmlTagStack`1::itemStack
	MaterialReferenceU5BU5D_t648826345* ___itemStack_0;
	// System.Int32 TMPro.TMP_XmlTagStack`1::index
	int32_t ___index_1;
	// System.Int32 TMPro.TMP_XmlTagStack`1::m_capacity
	int32_t ___m_capacity_2;
	// T TMPro.TMP_XmlTagStack`1::m_defaultItem
	MaterialReference_t1952344632  ___m_defaultItem_3;

public:
	inline static int32_t get_offset_of_itemStack_0() { return static_cast<int32_t>(offsetof(TMP_XmlTagStack_1_t1515999176, ___itemStack_0)); }
	inline MaterialReferenceU5BU5D_t648826345* get_itemStack_0() const { return ___itemStack_0; }
	inline MaterialReferenceU5BU5D_t648826345** get_address_of_itemStack_0() { return &___itemStack_0; }
	inline void set_itemStack_0(MaterialReferenceU5BU5D_t648826345* value)
	{
		___itemStack_0 = value;
		Il2CppCodeGenWriteBarrier((&___itemStack_0), value);
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(TMP_XmlTagStack_1_t1515999176, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}

	inline static int32_t get_offset_of_m_capacity_2() { return static_cast<int32_t>(offsetof(TMP_XmlTagStack_1_t1515999176, ___m_capacity_2)); }
	inline int32_t get_m_capacity_2() const { return ___m_capacity_2; }
	inline int32_t* get_address_of_m_capacity_2() { return &___m_capacity_2; }
	inline void set_m_capacity_2(int32_t value)
	{
		___m_capacity_2 = value;
	}

	inline static int32_t get_offset_of_m_defaultItem_3() { return static_cast<int32_t>(offsetof(TMP_XmlTagStack_1_t1515999176, ___m_defaultItem_3)); }
	inline MaterialReference_t1952344632  get_m_defaultItem_3() const { return ___m_defaultItem_3; }
	inline MaterialReference_t1952344632 * get_address_of_m_defaultItem_3() { return &___m_defaultItem_3; }
	inline void set_m_defaultItem_3(MaterialReference_t1952344632  value)
	{
		___m_defaultItem_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TMP_XMLTAGSTACK_1_T1515999176_H
#ifndef SELECTIONSTATE_T2656606514_H
#define SELECTIONSTATE_T2656606514_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.Selectable/SelectionState
struct  SelectionState_t2656606514 
{
public:
	// System.Int32 UnityEngine.UI.Selectable/SelectionState::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(SelectionState_t2656606514, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SELECTIONSTATE_T2656606514_H
#ifndef VERTEXGRADIENT_T345148380_H
#define VERTEXGRADIENT_T345148380_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// TMPro.VertexGradient
struct  VertexGradient_t345148380 
{
public:
	// UnityEngine.Color TMPro.VertexGradient::topLeft
	Color_t2555686324  ___topLeft_0;
	// UnityEngine.Color TMPro.VertexGradient::topRight
	Color_t2555686324  ___topRight_1;
	// UnityEngine.Color TMPro.VertexGradient::bottomLeft
	Color_t2555686324  ___bottomLeft_2;
	// UnityEngine.Color TMPro.VertexGradient::bottomRight
	Color_t2555686324  ___bottomRight_3;

public:
	inline static int32_t get_offset_of_topLeft_0() { return static_cast<int32_t>(offsetof(VertexGradient_t345148380, ___topLeft_0)); }
	inline Color_t2555686324  get_topLeft_0() const { return ___topLeft_0; }
	inline Color_t2555686324 * get_address_of_topLeft_0() { return &___topLeft_0; }
	inline void set_topLeft_0(Color_t2555686324  value)
	{
		___topLeft_0 = value;
	}

	inline static int32_t get_offset_of_topRight_1() { return static_cast<int32_t>(offsetof(VertexGradient_t345148380, ___topRight_1)); }
	inline Color_t2555686324  get_topRight_1() const { return ___topRight_1; }
	inline Color_t2555686324 * get_address_of_topRight_1() { return &___topRight_1; }
	inline void set_topRight_1(Color_t2555686324  value)
	{
		___topRight_1 = value;
	}

	inline static int32_t get_offset_of_bottomLeft_2() { return static_cast<int32_t>(offsetof(VertexGradient_t345148380, ___bottomLeft_2)); }
	inline Color_t2555686324  get_bottomLeft_2() const { return ___bottomLeft_2; }
	inline Color_t2555686324 * get_address_of_bottomLeft_2() { return &___bottomLeft_2; }
	inline void set_bottomLeft_2(Color_t2555686324  value)
	{
		___bottomLeft_2 = value;
	}

	inline static int32_t get_offset_of_bottomRight_3() { return static_cast<int32_t>(offsetof(VertexGradient_t345148380, ___bottomRight_3)); }
	inline Color_t2555686324  get_bottomRight_3() const { return ___bottomRight_3; }
	inline Color_t2555686324 * get_address_of_bottomRight_3() { return &___bottomRight_3; }
	inline void set_bottomRight_3(Color_t2555686324  value)
	{
		___bottomRight_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VERTEXGRADIENT_T345148380_H
#ifndef FONTSTYLES_T3828945032_H
#define FONTSTYLES_T3828945032_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// TMPro.FontStyles
struct  FontStyles_t3828945032 
{
public:
	// System.Int32 TMPro.FontStyles::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(FontStyles_t3828945032, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // FONTSTYLES_T3828945032_H
#ifndef OBJECT_T631007953_H
#define OBJECT_T631007953_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Object
struct  Object_t631007953  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;

public:
	inline static int32_t get_offset_of_m_CachedPtr_0() { return static_cast<int32_t>(offsetof(Object_t631007953, ___m_CachedPtr_0)); }
	inline intptr_t get_m_CachedPtr_0() const { return ___m_CachedPtr_0; }
	inline intptr_t* get_address_of_m_CachedPtr_0() { return &___m_CachedPtr_0; }
	inline void set_m_CachedPtr_0(intptr_t value)
	{
		___m_CachedPtr_0 = value;
	}
};

struct Object_t631007953_StaticFields
{
public:
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;

public:
	inline static int32_t get_offset_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return static_cast<int32_t>(offsetof(Object_t631007953_StaticFields, ___OffsetOfInstanceIDInCPlusPlusObject_1)); }
	inline int32_t get_OffsetOfInstanceIDInCPlusPlusObject_1() const { return ___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline int32_t* get_address_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return &___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline void set_OffsetOfInstanceIDInCPlusPlusObject_1(int32_t value)
	{
		___OffsetOfInstanceIDInCPlusPlusObject_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.Object
struct Object_t631007953_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_t631007953_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};
#endif // OBJECT_T631007953_H
#ifndef SENDMESSAGEOPTIONS_T3580193095_H
#define SENDMESSAGEOPTIONS_T3580193095_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.SendMessageOptions
struct  SendMessageOptions_t3580193095 
{
public:
	// System.Int32 UnityEngine.SendMessageOptions::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(SendMessageOptions_t3580193095, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SENDMESSAGEOPTIONS_T3580193095_H
#ifndef SPRITECOLOR_T3051291064_H
#define SPRITECOLOR_T3051291064_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// TileColorController/SpriteColor
struct  SpriteColor_t3051291064  : public RuntimeObject
{
public:
	// UnityEngine.SpriteRenderer TileColorController/SpriteColor::sprite
	SpriteRenderer_t3235626157 * ___sprite_0;
	// LerpSprite TileColorController/SpriteColor::lerpSprite
	LerpSprite_t1901857106 * ___lerpSprite_1;
	// System.Boolean TileColorController/SpriteColor::useDefaultColors
	bool ___useDefaultColors_2;
	// UnityEngine.Color TileColorController/SpriteColor::litColor
	Color_t2555686324  ___litColor_3;
	// UnityEngine.Color TileColorController/SpriteColor::unlitColor
	Color_t2555686324  ___unlitColor_4;

public:
	inline static int32_t get_offset_of_sprite_0() { return static_cast<int32_t>(offsetof(SpriteColor_t3051291064, ___sprite_0)); }
	inline SpriteRenderer_t3235626157 * get_sprite_0() const { return ___sprite_0; }
	inline SpriteRenderer_t3235626157 ** get_address_of_sprite_0() { return &___sprite_0; }
	inline void set_sprite_0(SpriteRenderer_t3235626157 * value)
	{
		___sprite_0 = value;
		Il2CppCodeGenWriteBarrier((&___sprite_0), value);
	}

	inline static int32_t get_offset_of_lerpSprite_1() { return static_cast<int32_t>(offsetof(SpriteColor_t3051291064, ___lerpSprite_1)); }
	inline LerpSprite_t1901857106 * get_lerpSprite_1() const { return ___lerpSprite_1; }
	inline LerpSprite_t1901857106 ** get_address_of_lerpSprite_1() { return &___lerpSprite_1; }
	inline void set_lerpSprite_1(LerpSprite_t1901857106 * value)
	{
		___lerpSprite_1 = value;
		Il2CppCodeGenWriteBarrier((&___lerpSprite_1), value);
	}

	inline static int32_t get_offset_of_useDefaultColors_2() { return static_cast<int32_t>(offsetof(SpriteColor_t3051291064, ___useDefaultColors_2)); }
	inline bool get_useDefaultColors_2() const { return ___useDefaultColors_2; }
	inline bool* get_address_of_useDefaultColors_2() { return &___useDefaultColors_2; }
	inline void set_useDefaultColors_2(bool value)
	{
		___useDefaultColors_2 = value;
	}

	inline static int32_t get_offset_of_litColor_3() { return static_cast<int32_t>(offsetof(SpriteColor_t3051291064, ___litColor_3)); }
	inline Color_t2555686324  get_litColor_3() const { return ___litColor_3; }
	inline Color_t2555686324 * get_address_of_litColor_3() { return &___litColor_3; }
	inline void set_litColor_3(Color_t2555686324  value)
	{
		___litColor_3 = value;
	}

	inline static int32_t get_offset_of_unlitColor_4() { return static_cast<int32_t>(offsetof(SpriteColor_t3051291064, ___unlitColor_4)); }
	inline Color_t2555686324  get_unlitColor_4() const { return ___unlitColor_4; }
	inline Color_t2555686324 * get_address_of_unlitColor_4() { return &___unlitColor_4; }
	inline void set_unlitColor_4(Color_t2555686324  value)
	{
		___unlitColor_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SPRITECOLOR_T3051291064_H
#ifndef TEXTALIGNMENTOPTIONS_T4036791236_H
#define TEXTALIGNMENTOPTIONS_T4036791236_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// TMPro.TextAlignmentOptions
struct  TextAlignmentOptions_t4036791236 
{
public:
	// System.Int32 TMPro.TextAlignmentOptions::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(TextAlignmentOptions_t4036791236, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TEXTALIGNMENTOPTIONS_T4036791236_H
#ifndef TEXTOVERFLOWMODES_T1430035314_H
#define TEXTOVERFLOWMODES_T1430035314_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// TMPro.TextOverflowModes
struct  TextOverflowModes_t1430035314 
{
public:
	// System.Int32 TMPro.TextOverflowModes::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(TextOverflowModes_t1430035314, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TEXTOVERFLOWMODES_T1430035314_H
#ifndef WIRESHAPE_T2587816771_H
#define WIRESHAPE_T2587816771_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// WireShape
struct  WireShape_t2587816771 
{
public:
	// System.Int32 WireShape::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(WireShape_t2587816771, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // WIRESHAPE_T2587816771_H
#ifndef TEXTUREMAPPINGOPTIONS_T270963663_H
#define TEXTUREMAPPINGOPTIONS_T270963663_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// TMPro.TextureMappingOptions
struct  TextureMappingOptions_t270963663 
{
public:
	// System.Int32 TMPro.TextureMappingOptions::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(TextureMappingOptions_t270963663, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TEXTUREMAPPINGOPTIONS_T270963663_H
#ifndef TEXTRENDERFLAGS_T2418684345_H
#define TEXTRENDERFLAGS_T2418684345_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// TMPro.TextRenderFlags
struct  TextRenderFlags_t2418684345 
{
public:
	// System.Int32 TMPro.TextRenderFlags::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(TextRenderFlags_t2418684345, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TEXTRENDERFLAGS_T2418684345_H
#ifndef ENUMERATOR_T1066534866_H
#define ENUMERATOR_T1066534866_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.Dictionary`2/Enumerator<Tile,TileColorController>
struct  Enumerator_t1066534866 
{
public:
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator::dictionary
	Dictionary_2_t3407319387 * ___dictionary_0;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::next
	int32_t ___next_1;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::stamp
	int32_t ___stamp_2;
	// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator::current
	KeyValuePair_2_t1510024258  ___current_3;

public:
	inline static int32_t get_offset_of_dictionary_0() { return static_cast<int32_t>(offsetof(Enumerator_t1066534866, ___dictionary_0)); }
	inline Dictionary_2_t3407319387 * get_dictionary_0() const { return ___dictionary_0; }
	inline Dictionary_2_t3407319387 ** get_address_of_dictionary_0() { return &___dictionary_0; }
	inline void set_dictionary_0(Dictionary_2_t3407319387 * value)
	{
		___dictionary_0 = value;
		Il2CppCodeGenWriteBarrier((&___dictionary_0), value);
	}

	inline static int32_t get_offset_of_next_1() { return static_cast<int32_t>(offsetof(Enumerator_t1066534866, ___next_1)); }
	inline int32_t get_next_1() const { return ___next_1; }
	inline int32_t* get_address_of_next_1() { return &___next_1; }
	inline void set_next_1(int32_t value)
	{
		___next_1 = value;
	}

	inline static int32_t get_offset_of_stamp_2() { return static_cast<int32_t>(offsetof(Enumerator_t1066534866, ___stamp_2)); }
	inline int32_t get_stamp_2() const { return ___stamp_2; }
	inline int32_t* get_address_of_stamp_2() { return &___stamp_2; }
	inline void set_stamp_2(int32_t value)
	{
		___stamp_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_t1066534866, ___current_3)); }
	inline KeyValuePair_2_t1510024258  get_current_3() const { return ___current_3; }
	inline KeyValuePair_2_t1510024258 * get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(KeyValuePair_2_t1510024258  value)
	{
		___current_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENUMERATOR_T1066534866_H
#ifndef ENUMERATOR_T2086727927_H
#define ENUMERATOR_T2086727927_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>
struct  Enumerator_t2086727927 
{
public:
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator::dictionary
	Dictionary_2_t132545152 * ___dictionary_0;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::next
	int32_t ___next_1;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::stamp
	int32_t ___stamp_2;
	// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator::current
	KeyValuePair_2_t2530217319  ___current_3;

public:
	inline static int32_t get_offset_of_dictionary_0() { return static_cast<int32_t>(offsetof(Enumerator_t2086727927, ___dictionary_0)); }
	inline Dictionary_2_t132545152 * get_dictionary_0() const { return ___dictionary_0; }
	inline Dictionary_2_t132545152 ** get_address_of_dictionary_0() { return &___dictionary_0; }
	inline void set_dictionary_0(Dictionary_2_t132545152 * value)
	{
		___dictionary_0 = value;
		Il2CppCodeGenWriteBarrier((&___dictionary_0), value);
	}

	inline static int32_t get_offset_of_next_1() { return static_cast<int32_t>(offsetof(Enumerator_t2086727927, ___next_1)); }
	inline int32_t get_next_1() const { return ___next_1; }
	inline int32_t* get_address_of_next_1() { return &___next_1; }
	inline void set_next_1(int32_t value)
	{
		___next_1 = value;
	}

	inline static int32_t get_offset_of_stamp_2() { return static_cast<int32_t>(offsetof(Enumerator_t2086727927, ___stamp_2)); }
	inline int32_t get_stamp_2() const { return ___stamp_2; }
	inline int32_t* get_address_of_stamp_2() { return &___stamp_2; }
	inline void set_stamp_2(int32_t value)
	{
		___stamp_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_t2086727927, ___current_3)); }
	inline KeyValuePair_2_t2530217319  get_current_3() const { return ___current_3; }
	inline KeyValuePair_2_t2530217319 * get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(KeyValuePair_2_t2530217319  value)
	{
		___current_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENUMERATOR_T2086727927_H
#ifndef COLORBLOCK_T2139031574_H
#define COLORBLOCK_T2139031574_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.ColorBlock
struct  ColorBlock_t2139031574 
{
public:
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_NormalColor
	Color_t2555686324  ___m_NormalColor_0;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_HighlightedColor
	Color_t2555686324  ___m_HighlightedColor_1;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_PressedColor
	Color_t2555686324  ___m_PressedColor_2;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_DisabledColor
	Color_t2555686324  ___m_DisabledColor_3;
	// System.Single UnityEngine.UI.ColorBlock::m_ColorMultiplier
	float ___m_ColorMultiplier_4;
	// System.Single UnityEngine.UI.ColorBlock::m_FadeDuration
	float ___m_FadeDuration_5;

public:
	inline static int32_t get_offset_of_m_NormalColor_0() { return static_cast<int32_t>(offsetof(ColorBlock_t2139031574, ___m_NormalColor_0)); }
	inline Color_t2555686324  get_m_NormalColor_0() const { return ___m_NormalColor_0; }
	inline Color_t2555686324 * get_address_of_m_NormalColor_0() { return &___m_NormalColor_0; }
	inline void set_m_NormalColor_0(Color_t2555686324  value)
	{
		___m_NormalColor_0 = value;
	}

	inline static int32_t get_offset_of_m_HighlightedColor_1() { return static_cast<int32_t>(offsetof(ColorBlock_t2139031574, ___m_HighlightedColor_1)); }
	inline Color_t2555686324  get_m_HighlightedColor_1() const { return ___m_HighlightedColor_1; }
	inline Color_t2555686324 * get_address_of_m_HighlightedColor_1() { return &___m_HighlightedColor_1; }
	inline void set_m_HighlightedColor_1(Color_t2555686324  value)
	{
		___m_HighlightedColor_1 = value;
	}

	inline static int32_t get_offset_of_m_PressedColor_2() { return static_cast<int32_t>(offsetof(ColorBlock_t2139031574, ___m_PressedColor_2)); }
	inline Color_t2555686324  get_m_PressedColor_2() const { return ___m_PressedColor_2; }
	inline Color_t2555686324 * get_address_of_m_PressedColor_2() { return &___m_PressedColor_2; }
	inline void set_m_PressedColor_2(Color_t2555686324  value)
	{
		___m_PressedColor_2 = value;
	}

	inline static int32_t get_offset_of_m_DisabledColor_3() { return static_cast<int32_t>(offsetof(ColorBlock_t2139031574, ___m_DisabledColor_3)); }
	inline Color_t2555686324  get_m_DisabledColor_3() const { return ___m_DisabledColor_3; }
	inline Color_t2555686324 * get_address_of_m_DisabledColor_3() { return &___m_DisabledColor_3; }
	inline void set_m_DisabledColor_3(Color_t2555686324  value)
	{
		___m_DisabledColor_3 = value;
	}

	inline static int32_t get_offset_of_m_ColorMultiplier_4() { return static_cast<int32_t>(offsetof(ColorBlock_t2139031574, ___m_ColorMultiplier_4)); }
	inline float get_m_ColorMultiplier_4() const { return ___m_ColorMultiplier_4; }
	inline float* get_address_of_m_ColorMultiplier_4() { return &___m_ColorMultiplier_4; }
	inline void set_m_ColorMultiplier_4(float value)
	{
		___m_ColorMultiplier_4 = value;
	}

	inline static int32_t get_offset_of_m_FadeDuration_5() { return static_cast<int32_t>(offsetof(ColorBlock_t2139031574, ___m_FadeDuration_5)); }
	inline float get_m_FadeDuration_5() const { return ___m_FadeDuration_5; }
	inline float* get_address_of_m_FadeDuration_5() { return &___m_FadeDuration_5; }
	inline void set_m_FadeDuration_5(float value)
	{
		___m_FadeDuration_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COLORBLOCK_T2139031574_H
#ifndef TEXTINPUTSOURCES_T1522115805_H
#define TEXTINPUTSOURCES_T1522115805_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// TMPro.TMP_Text/TextInputSources
struct  TextInputSources_t1522115805 
{
public:
	// System.Int32 TMPro.TMP_Text/TextInputSources::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(TextInputSources_t1522115805, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TEXTINPUTSOURCES_T1522115805_H
#ifndef TILETYPE_T2216804700_H
#define TILETYPE_T2216804700_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// TileType
struct  TileType_t2216804700 
{
public:
	// System.Int32 TileType::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(TileType_t2216804700, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TILETYPE_T2216804700_H
#ifndef TRANSITION_T1769908631_H
#define TRANSITION_T1769908631_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.Selectable/Transition
struct  Transition_t1769908631 
{
public:
	// System.Int32 UnityEngine.UI.Selectable/Transition::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(Transition_t1769908631, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TRANSITION_T1769908631_H
#ifndef EXTENTS_T3837212874_H
#define EXTENTS_T3837212874_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// TMPro.Extents
struct  Extents_t3837212874 
{
public:
	// UnityEngine.Vector2 TMPro.Extents::min
	Vector2_t2156229523  ___min_0;
	// UnityEngine.Vector2 TMPro.Extents::max
	Vector2_t2156229523  ___max_1;

public:
	inline static int32_t get_offset_of_min_0() { return static_cast<int32_t>(offsetof(Extents_t3837212874, ___min_0)); }
	inline Vector2_t2156229523  get_min_0() const { return ___min_0; }
	inline Vector2_t2156229523 * get_address_of_min_0() { return &___min_0; }
	inline void set_min_0(Vector2_t2156229523  value)
	{
		___min_0 = value;
	}

	inline static int32_t get_offset_of_max_1() { return static_cast<int32_t>(offsetof(Extents_t3837212874, ___max_1)); }
	inline Vector2_t2156229523  get_max_1() const { return ___max_1; }
	inline Vector2_t2156229523 * get_address_of_max_1() { return &___max_1; }
	inline void set_max_1(Vector2_t2156229523  value)
	{
		___max_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EXTENTS_T3837212874_H
#ifndef TMP_XMLTAGSTACK_1_T2164155836_H
#define TMP_XMLTAGSTACK_1_T2164155836_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// TMPro.TMP_XmlTagStack`1<UnityEngine.Color32>
struct  TMP_XmlTagStack_1_t2164155836 
{
public:
	// T[] TMPro.TMP_XmlTagStack`1::itemStack
	Color32U5BU5D_t3850468773* ___itemStack_0;
	// System.Int32 TMPro.TMP_XmlTagStack`1::index
	int32_t ___index_1;
	// System.Int32 TMPro.TMP_XmlTagStack`1::m_capacity
	int32_t ___m_capacity_2;
	// T TMPro.TMP_XmlTagStack`1::m_defaultItem
	Color32_t2600501292  ___m_defaultItem_3;

public:
	inline static int32_t get_offset_of_itemStack_0() { return static_cast<int32_t>(offsetof(TMP_XmlTagStack_1_t2164155836, ___itemStack_0)); }
	inline Color32U5BU5D_t3850468773* get_itemStack_0() const { return ___itemStack_0; }
	inline Color32U5BU5D_t3850468773** get_address_of_itemStack_0() { return &___itemStack_0; }
	inline void set_itemStack_0(Color32U5BU5D_t3850468773* value)
	{
		___itemStack_0 = value;
		Il2CppCodeGenWriteBarrier((&___itemStack_0), value);
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(TMP_XmlTagStack_1_t2164155836, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}

	inline static int32_t get_offset_of_m_capacity_2() { return static_cast<int32_t>(offsetof(TMP_XmlTagStack_1_t2164155836, ___m_capacity_2)); }
	inline int32_t get_m_capacity_2() const { return ___m_capacity_2; }
	inline int32_t* get_address_of_m_capacity_2() { return &___m_capacity_2; }
	inline void set_m_capacity_2(int32_t value)
	{
		___m_capacity_2 = value;
	}

	inline static int32_t get_offset_of_m_defaultItem_3() { return static_cast<int32_t>(offsetof(TMP_XmlTagStack_1_t2164155836, ___m_defaultItem_3)); }
	inline Color32_t2600501292  get_m_defaultItem_3() const { return ___m_defaultItem_3; }
	inline Color32_t2600501292 * get_address_of_m_defaultItem_3() { return &___m_defaultItem_3; }
	inline void set_m_defaultItem_3(Color32_t2600501292  value)
	{
		___m_defaultItem_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TMP_XMLTAGSTACK_1_T2164155836_H
#ifndef RAYCASTHIT_T1056001966_H
#define RAYCASTHIT_T1056001966_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.RaycastHit
struct  RaycastHit_t1056001966 
{
public:
	// UnityEngine.Vector3 UnityEngine.RaycastHit::m_Point
	Vector3_t3722313464  ___m_Point_0;
	// UnityEngine.Vector3 UnityEngine.RaycastHit::m_Normal
	Vector3_t3722313464  ___m_Normal_1;
	// System.Int32 UnityEngine.RaycastHit::m_FaceID
	int32_t ___m_FaceID_2;
	// System.Single UnityEngine.RaycastHit::m_Distance
	float ___m_Distance_3;
	// UnityEngine.Vector2 UnityEngine.RaycastHit::m_UV
	Vector2_t2156229523  ___m_UV_4;
	// System.Int32 UnityEngine.RaycastHit::m_Collider
	int32_t ___m_Collider_5;

public:
	inline static int32_t get_offset_of_m_Point_0() { return static_cast<int32_t>(offsetof(RaycastHit_t1056001966, ___m_Point_0)); }
	inline Vector3_t3722313464  get_m_Point_0() const { return ___m_Point_0; }
	inline Vector3_t3722313464 * get_address_of_m_Point_0() { return &___m_Point_0; }
	inline void set_m_Point_0(Vector3_t3722313464  value)
	{
		___m_Point_0 = value;
	}

	inline static int32_t get_offset_of_m_Normal_1() { return static_cast<int32_t>(offsetof(RaycastHit_t1056001966, ___m_Normal_1)); }
	inline Vector3_t3722313464  get_m_Normal_1() const { return ___m_Normal_1; }
	inline Vector3_t3722313464 * get_address_of_m_Normal_1() { return &___m_Normal_1; }
	inline void set_m_Normal_1(Vector3_t3722313464  value)
	{
		___m_Normal_1 = value;
	}

	inline static int32_t get_offset_of_m_FaceID_2() { return static_cast<int32_t>(offsetof(RaycastHit_t1056001966, ___m_FaceID_2)); }
	inline int32_t get_m_FaceID_2() const { return ___m_FaceID_2; }
	inline int32_t* get_address_of_m_FaceID_2() { return &___m_FaceID_2; }
	inline void set_m_FaceID_2(int32_t value)
	{
		___m_FaceID_2 = value;
	}

	inline static int32_t get_offset_of_m_Distance_3() { return static_cast<int32_t>(offsetof(RaycastHit_t1056001966, ___m_Distance_3)); }
	inline float get_m_Distance_3() const { return ___m_Distance_3; }
	inline float* get_address_of_m_Distance_3() { return &___m_Distance_3; }
	inline void set_m_Distance_3(float value)
	{
		___m_Distance_3 = value;
	}

	inline static int32_t get_offset_of_m_UV_4() { return static_cast<int32_t>(offsetof(RaycastHit_t1056001966, ___m_UV_4)); }
	inline Vector2_t2156229523  get_m_UV_4() const { return ___m_UV_4; }
	inline Vector2_t2156229523 * get_address_of_m_UV_4() { return &___m_UV_4; }
	inline void set_m_UV_4(Vector2_t2156229523  value)
	{
		___m_UV_4 = value;
	}

	inline static int32_t get_offset_of_m_Collider_5() { return static_cast<int32_t>(offsetof(RaycastHit_t1056001966, ___m_Collider_5)); }
	inline int32_t get_m_Collider_5() const { return ___m_Collider_5; }
	inline int32_t* get_address_of_m_Collider_5() { return &___m_Collider_5; }
	inline void set_m_Collider_5(int32_t value)
	{
		___m_Collider_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RAYCASTHIT_T1056001966_H
#ifndef RAY_T3785851493_H
#define RAY_T3785851493_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Ray
struct  Ray_t3785851493 
{
public:
	// UnityEngine.Vector3 UnityEngine.Ray::m_Origin
	Vector3_t3722313464  ___m_Origin_0;
	// UnityEngine.Vector3 UnityEngine.Ray::m_Direction
	Vector3_t3722313464  ___m_Direction_1;

public:
	inline static int32_t get_offset_of_m_Origin_0() { return static_cast<int32_t>(offsetof(Ray_t3785851493, ___m_Origin_0)); }
	inline Vector3_t3722313464  get_m_Origin_0() const { return ___m_Origin_0; }
	inline Vector3_t3722313464 * get_address_of_m_Origin_0() { return &___m_Origin_0; }
	inline void set_m_Origin_0(Vector3_t3722313464  value)
	{
		___m_Origin_0 = value;
	}

	inline static int32_t get_offset_of_m_Direction_1() { return static_cast<int32_t>(offsetof(Ray_t3785851493, ___m_Direction_1)); }
	inline Vector3_t3722313464  get_m_Direction_1() const { return ___m_Direction_1; }
	inline Vector3_t3722313464 * get_address_of_m_Direction_1() { return &___m_Direction_1; }
	inline void set_m_Direction_1(Vector3_t3722313464  value)
	{
		___m_Direction_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RAY_T3785851493_H
#ifndef TMP_TEXTELEMENTTYPE_T1276645592_H
#define TMP_TEXTELEMENTTYPE_T1276645592_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// TMPro.TMP_TextElementType
struct  TMP_TextElementType_t1276645592 
{
public:
	// System.Int32 TMPro.TMP_TextElementType::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(TMP_TextElementType_t1276645592, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TMP_TEXTELEMENTTYPE_T1276645592_H
#ifndef TYPE_T1152881528_H
#define TYPE_T1152881528_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.Image/Type
struct  Type_t1152881528 
{
public:
	// System.Int32 UnityEngine.UI.Image/Type::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(Type_t1152881528, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TYPE_T1152881528_H
#ifndef FILLMETHOD_T1167457570_H
#define FILLMETHOD_T1167457570_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.Image/FillMethod
struct  FillMethod_t1167457570 
{
public:
	// System.Int32 UnityEngine.UI.Image/FillMethod::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(FillMethod_t1167457570, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // FILLMETHOD_T1167457570_H
#ifndef MODE_T1066900953_H
#define MODE_T1066900953_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.Navigation/Mode
struct  Mode_t1066900953 
{
public:
	// System.Int32 UnityEngine.UI.Navigation/Mode::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(Mode_t1066900953, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MODE_T1066900953_H
#ifndef GRIDDIRECTION_T4108087830_H
#define GRIDDIRECTION_T4108087830_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GridDirection
struct  GridDirection_t4108087830 
{
public:
	// System.Int32 GridDirection::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(GridDirection_t4108087830, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GRIDDIRECTION_T4108087830_H
#ifndef COMPONENT_T1923634451_H
#define COMPONENT_T1923634451_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Component
struct  Component_t1923634451  : public Object_t631007953
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COMPONENT_T1923634451_H
#ifndef TMP_LINEINFO_T1079631636_H
#define TMP_LINEINFO_T1079631636_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// TMPro.TMP_LineInfo
struct  TMP_LineInfo_t1079631636 
{
public:
	// System.Int32 TMPro.TMP_LineInfo::characterCount
	int32_t ___characterCount_0;
	// System.Int32 TMPro.TMP_LineInfo::visibleCharacterCount
	int32_t ___visibleCharacterCount_1;
	// System.Int32 TMPro.TMP_LineInfo::spaceCount
	int32_t ___spaceCount_2;
	// System.Int32 TMPro.TMP_LineInfo::wordCount
	int32_t ___wordCount_3;
	// System.Int32 TMPro.TMP_LineInfo::firstCharacterIndex
	int32_t ___firstCharacterIndex_4;
	// System.Int32 TMPro.TMP_LineInfo::firstVisibleCharacterIndex
	int32_t ___firstVisibleCharacterIndex_5;
	// System.Int32 TMPro.TMP_LineInfo::lastCharacterIndex
	int32_t ___lastCharacterIndex_6;
	// System.Int32 TMPro.TMP_LineInfo::lastVisibleCharacterIndex
	int32_t ___lastVisibleCharacterIndex_7;
	// System.Single TMPro.TMP_LineInfo::length
	float ___length_8;
	// System.Single TMPro.TMP_LineInfo::lineHeight
	float ___lineHeight_9;
	// System.Single TMPro.TMP_LineInfo::ascender
	float ___ascender_10;
	// System.Single TMPro.TMP_LineInfo::baseline
	float ___baseline_11;
	// System.Single TMPro.TMP_LineInfo::descender
	float ___descender_12;
	// System.Single TMPro.TMP_LineInfo::maxAdvance
	float ___maxAdvance_13;
	// System.Single TMPro.TMP_LineInfo::width
	float ___width_14;
	// System.Single TMPro.TMP_LineInfo::marginLeft
	float ___marginLeft_15;
	// System.Single TMPro.TMP_LineInfo::marginRight
	float ___marginRight_16;
	// TMPro.TextAlignmentOptions TMPro.TMP_LineInfo::alignment
	int32_t ___alignment_17;
	// TMPro.Extents TMPro.TMP_LineInfo::lineExtents
	Extents_t3837212874  ___lineExtents_18;

public:
	inline static int32_t get_offset_of_characterCount_0() { return static_cast<int32_t>(offsetof(TMP_LineInfo_t1079631636, ___characterCount_0)); }
	inline int32_t get_characterCount_0() const { return ___characterCount_0; }
	inline int32_t* get_address_of_characterCount_0() { return &___characterCount_0; }
	inline void set_characterCount_0(int32_t value)
	{
		___characterCount_0 = value;
	}

	inline static int32_t get_offset_of_visibleCharacterCount_1() { return static_cast<int32_t>(offsetof(TMP_LineInfo_t1079631636, ___visibleCharacterCount_1)); }
	inline int32_t get_visibleCharacterCount_1() const { return ___visibleCharacterCount_1; }
	inline int32_t* get_address_of_visibleCharacterCount_1() { return &___visibleCharacterCount_1; }
	inline void set_visibleCharacterCount_1(int32_t value)
	{
		___visibleCharacterCount_1 = value;
	}

	inline static int32_t get_offset_of_spaceCount_2() { return static_cast<int32_t>(offsetof(TMP_LineInfo_t1079631636, ___spaceCount_2)); }
	inline int32_t get_spaceCount_2() const { return ___spaceCount_2; }
	inline int32_t* get_address_of_spaceCount_2() { return &___spaceCount_2; }
	inline void set_spaceCount_2(int32_t value)
	{
		___spaceCount_2 = value;
	}

	inline static int32_t get_offset_of_wordCount_3() { return static_cast<int32_t>(offsetof(TMP_LineInfo_t1079631636, ___wordCount_3)); }
	inline int32_t get_wordCount_3() const { return ___wordCount_3; }
	inline int32_t* get_address_of_wordCount_3() { return &___wordCount_3; }
	inline void set_wordCount_3(int32_t value)
	{
		___wordCount_3 = value;
	}

	inline static int32_t get_offset_of_firstCharacterIndex_4() { return static_cast<int32_t>(offsetof(TMP_LineInfo_t1079631636, ___firstCharacterIndex_4)); }
	inline int32_t get_firstCharacterIndex_4() const { return ___firstCharacterIndex_4; }
	inline int32_t* get_address_of_firstCharacterIndex_4() { return &___firstCharacterIndex_4; }
	inline void set_firstCharacterIndex_4(int32_t value)
	{
		___firstCharacterIndex_4 = value;
	}

	inline static int32_t get_offset_of_firstVisibleCharacterIndex_5() { return static_cast<int32_t>(offsetof(TMP_LineInfo_t1079631636, ___firstVisibleCharacterIndex_5)); }
	inline int32_t get_firstVisibleCharacterIndex_5() const { return ___firstVisibleCharacterIndex_5; }
	inline int32_t* get_address_of_firstVisibleCharacterIndex_5() { return &___firstVisibleCharacterIndex_5; }
	inline void set_firstVisibleCharacterIndex_5(int32_t value)
	{
		___firstVisibleCharacterIndex_5 = value;
	}

	inline static int32_t get_offset_of_lastCharacterIndex_6() { return static_cast<int32_t>(offsetof(TMP_LineInfo_t1079631636, ___lastCharacterIndex_6)); }
	inline int32_t get_lastCharacterIndex_6() const { return ___lastCharacterIndex_6; }
	inline int32_t* get_address_of_lastCharacterIndex_6() { return &___lastCharacterIndex_6; }
	inline void set_lastCharacterIndex_6(int32_t value)
	{
		___lastCharacterIndex_6 = value;
	}

	inline static int32_t get_offset_of_lastVisibleCharacterIndex_7() { return static_cast<int32_t>(offsetof(TMP_LineInfo_t1079631636, ___lastVisibleCharacterIndex_7)); }
	inline int32_t get_lastVisibleCharacterIndex_7() const { return ___lastVisibleCharacterIndex_7; }
	inline int32_t* get_address_of_lastVisibleCharacterIndex_7() { return &___lastVisibleCharacterIndex_7; }
	inline void set_lastVisibleCharacterIndex_7(int32_t value)
	{
		___lastVisibleCharacterIndex_7 = value;
	}

	inline static int32_t get_offset_of_length_8() { return static_cast<int32_t>(offsetof(TMP_LineInfo_t1079631636, ___length_8)); }
	inline float get_length_8() const { return ___length_8; }
	inline float* get_address_of_length_8() { return &___length_8; }
	inline void set_length_8(float value)
	{
		___length_8 = value;
	}

	inline static int32_t get_offset_of_lineHeight_9() { return static_cast<int32_t>(offsetof(TMP_LineInfo_t1079631636, ___lineHeight_9)); }
	inline float get_lineHeight_9() const { return ___lineHeight_9; }
	inline float* get_address_of_lineHeight_9() { return &___lineHeight_9; }
	inline void set_lineHeight_9(float value)
	{
		___lineHeight_9 = value;
	}

	inline static int32_t get_offset_of_ascender_10() { return static_cast<int32_t>(offsetof(TMP_LineInfo_t1079631636, ___ascender_10)); }
	inline float get_ascender_10() const { return ___ascender_10; }
	inline float* get_address_of_ascender_10() { return &___ascender_10; }
	inline void set_ascender_10(float value)
	{
		___ascender_10 = value;
	}

	inline static int32_t get_offset_of_baseline_11() { return static_cast<int32_t>(offsetof(TMP_LineInfo_t1079631636, ___baseline_11)); }
	inline float get_baseline_11() const { return ___baseline_11; }
	inline float* get_address_of_baseline_11() { return &___baseline_11; }
	inline void set_baseline_11(float value)
	{
		___baseline_11 = value;
	}

	inline static int32_t get_offset_of_descender_12() { return static_cast<int32_t>(offsetof(TMP_LineInfo_t1079631636, ___descender_12)); }
	inline float get_descender_12() const { return ___descender_12; }
	inline float* get_address_of_descender_12() { return &___descender_12; }
	inline void set_descender_12(float value)
	{
		___descender_12 = value;
	}

	inline static int32_t get_offset_of_maxAdvance_13() { return static_cast<int32_t>(offsetof(TMP_LineInfo_t1079631636, ___maxAdvance_13)); }
	inline float get_maxAdvance_13() const { return ___maxAdvance_13; }
	inline float* get_address_of_maxAdvance_13() { return &___maxAdvance_13; }
	inline void set_maxAdvance_13(float value)
	{
		___maxAdvance_13 = value;
	}

	inline static int32_t get_offset_of_width_14() { return static_cast<int32_t>(offsetof(TMP_LineInfo_t1079631636, ___width_14)); }
	inline float get_width_14() const { return ___width_14; }
	inline float* get_address_of_width_14() { return &___width_14; }
	inline void set_width_14(float value)
	{
		___width_14 = value;
	}

	inline static int32_t get_offset_of_marginLeft_15() { return static_cast<int32_t>(offsetof(TMP_LineInfo_t1079631636, ___marginLeft_15)); }
	inline float get_marginLeft_15() const { return ___marginLeft_15; }
	inline float* get_address_of_marginLeft_15() { return &___marginLeft_15; }
	inline void set_marginLeft_15(float value)
	{
		___marginLeft_15 = value;
	}

	inline static int32_t get_offset_of_marginRight_16() { return static_cast<int32_t>(offsetof(TMP_LineInfo_t1079631636, ___marginRight_16)); }
	inline float get_marginRight_16() const { return ___marginRight_16; }
	inline float* get_address_of_marginRight_16() { return &___marginRight_16; }
	inline void set_marginRight_16(float value)
	{
		___marginRight_16 = value;
	}

	inline static int32_t get_offset_of_alignment_17() { return static_cast<int32_t>(offsetof(TMP_LineInfo_t1079631636, ___alignment_17)); }
	inline int32_t get_alignment_17() const { return ___alignment_17; }
	inline int32_t* get_address_of_alignment_17() { return &___alignment_17; }
	inline void set_alignment_17(int32_t value)
	{
		___alignment_17 = value;
	}

	inline static int32_t get_offset_of_lineExtents_18() { return static_cast<int32_t>(offsetof(TMP_LineInfo_t1079631636, ___lineExtents_18)); }
	inline Extents_t3837212874  get_lineExtents_18() const { return ___lineExtents_18; }
	inline Extents_t3837212874 * get_address_of_lineExtents_18() { return &___lineExtents_18; }
	inline void set_lineExtents_18(Extents_t3837212874  value)
	{
		___lineExtents_18 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TMP_LINEINFO_T1079631636_H
#ifndef TMP_XMLTAGSTACK_1_T3600445780_H
#define TMP_XMLTAGSTACK_1_T3600445780_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// TMPro.TMP_XmlTagStack`1<TMPro.TextAlignmentOptions>
struct  TMP_XmlTagStack_1_t3600445780 
{
public:
	// T[] TMPro.TMP_XmlTagStack`1::itemStack
	TextAlignmentOptionsU5BU5D_t3552942253* ___itemStack_0;
	// System.Int32 TMPro.TMP_XmlTagStack`1::index
	int32_t ___index_1;
	// System.Int32 TMPro.TMP_XmlTagStack`1::m_capacity
	int32_t ___m_capacity_2;
	// T TMPro.TMP_XmlTagStack`1::m_defaultItem
	int32_t ___m_defaultItem_3;

public:
	inline static int32_t get_offset_of_itemStack_0() { return static_cast<int32_t>(offsetof(TMP_XmlTagStack_1_t3600445780, ___itemStack_0)); }
	inline TextAlignmentOptionsU5BU5D_t3552942253* get_itemStack_0() const { return ___itemStack_0; }
	inline TextAlignmentOptionsU5BU5D_t3552942253** get_address_of_itemStack_0() { return &___itemStack_0; }
	inline void set_itemStack_0(TextAlignmentOptionsU5BU5D_t3552942253* value)
	{
		___itemStack_0 = value;
		Il2CppCodeGenWriteBarrier((&___itemStack_0), value);
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(TMP_XmlTagStack_1_t3600445780, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}

	inline static int32_t get_offset_of_m_capacity_2() { return static_cast<int32_t>(offsetof(TMP_XmlTagStack_1_t3600445780, ___m_capacity_2)); }
	inline int32_t get_m_capacity_2() const { return ___m_capacity_2; }
	inline int32_t* get_address_of_m_capacity_2() { return &___m_capacity_2; }
	inline void set_m_capacity_2(int32_t value)
	{
		___m_capacity_2 = value;
	}

	inline static int32_t get_offset_of_m_defaultItem_3() { return static_cast<int32_t>(offsetof(TMP_XmlTagStack_1_t3600445780, ___m_defaultItem_3)); }
	inline int32_t get_m_defaultItem_3() const { return ___m_defaultItem_3; }
	inline int32_t* get_address_of_m_defaultItem_3() { return &___m_defaultItem_3; }
	inline void set_m_defaultItem_3(int32_t value)
	{
		___m_defaultItem_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TMP_XMLTAGSTACK_1_T3600445780_H
#ifndef SCRIPTABLEOBJECT_T2528358522_H
#define SCRIPTABLEOBJECT_T2528358522_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.ScriptableObject
struct  ScriptableObject_t2528358522  : public Object_t631007953
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.ScriptableObject
struct ScriptableObject_t2528358522_marshaled_pinvoke : public Object_t631007953_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.ScriptableObject
struct ScriptableObject_t2528358522_marshaled_com : public Object_t631007953_marshaled_com
{
};
#endif // SCRIPTABLEOBJECT_T2528358522_H
#ifndef NAVIGATION_T3049316579_H
#define NAVIGATION_T3049316579_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.Navigation
struct  Navigation_t3049316579 
{
public:
	// UnityEngine.UI.Navigation/Mode UnityEngine.UI.Navigation::m_Mode
	int32_t ___m_Mode_0;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnUp
	Selectable_t3250028441 * ___m_SelectOnUp_1;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnDown
	Selectable_t3250028441 * ___m_SelectOnDown_2;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnLeft
	Selectable_t3250028441 * ___m_SelectOnLeft_3;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnRight
	Selectable_t3250028441 * ___m_SelectOnRight_4;

public:
	inline static int32_t get_offset_of_m_Mode_0() { return static_cast<int32_t>(offsetof(Navigation_t3049316579, ___m_Mode_0)); }
	inline int32_t get_m_Mode_0() const { return ___m_Mode_0; }
	inline int32_t* get_address_of_m_Mode_0() { return &___m_Mode_0; }
	inline void set_m_Mode_0(int32_t value)
	{
		___m_Mode_0 = value;
	}

	inline static int32_t get_offset_of_m_SelectOnUp_1() { return static_cast<int32_t>(offsetof(Navigation_t3049316579, ___m_SelectOnUp_1)); }
	inline Selectable_t3250028441 * get_m_SelectOnUp_1() const { return ___m_SelectOnUp_1; }
	inline Selectable_t3250028441 ** get_address_of_m_SelectOnUp_1() { return &___m_SelectOnUp_1; }
	inline void set_m_SelectOnUp_1(Selectable_t3250028441 * value)
	{
		___m_SelectOnUp_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_SelectOnUp_1), value);
	}

	inline static int32_t get_offset_of_m_SelectOnDown_2() { return static_cast<int32_t>(offsetof(Navigation_t3049316579, ___m_SelectOnDown_2)); }
	inline Selectable_t3250028441 * get_m_SelectOnDown_2() const { return ___m_SelectOnDown_2; }
	inline Selectable_t3250028441 ** get_address_of_m_SelectOnDown_2() { return &___m_SelectOnDown_2; }
	inline void set_m_SelectOnDown_2(Selectable_t3250028441 * value)
	{
		___m_SelectOnDown_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_SelectOnDown_2), value);
	}

	inline static int32_t get_offset_of_m_SelectOnLeft_3() { return static_cast<int32_t>(offsetof(Navigation_t3049316579, ___m_SelectOnLeft_3)); }
	inline Selectable_t3250028441 * get_m_SelectOnLeft_3() const { return ___m_SelectOnLeft_3; }
	inline Selectable_t3250028441 ** get_address_of_m_SelectOnLeft_3() { return &___m_SelectOnLeft_3; }
	inline void set_m_SelectOnLeft_3(Selectable_t3250028441 * value)
	{
		___m_SelectOnLeft_3 = value;
		Il2CppCodeGenWriteBarrier((&___m_SelectOnLeft_3), value);
	}

	inline static int32_t get_offset_of_m_SelectOnRight_4() { return static_cast<int32_t>(offsetof(Navigation_t3049316579, ___m_SelectOnRight_4)); }
	inline Selectable_t3250028441 * get_m_SelectOnRight_4() const { return ___m_SelectOnRight_4; }
	inline Selectable_t3250028441 ** get_address_of_m_SelectOnRight_4() { return &___m_SelectOnRight_4; }
	inline void set_m_SelectOnRight_4(Selectable_t3250028441 * value)
	{
		___m_SelectOnRight_4 = value;
		Il2CppCodeGenWriteBarrier((&___m_SelectOnRight_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.UI.Navigation
struct Navigation_t3049316579_marshaled_pinvoke
{
	int32_t ___m_Mode_0;
	Selectable_t3250028441 * ___m_SelectOnUp_1;
	Selectable_t3250028441 * ___m_SelectOnDown_2;
	Selectable_t3250028441 * ___m_SelectOnLeft_3;
	Selectable_t3250028441 * ___m_SelectOnRight_4;
};
// Native definition for COM marshalling of UnityEngine.UI.Navigation
struct Navigation_t3049316579_marshaled_com
{
	int32_t ___m_Mode_0;
	Selectable_t3250028441 * ___m_SelectOnUp_1;
	Selectable_t3250028441 * ___m_SelectOnDown_2;
	Selectable_t3250028441 * ___m_SelectOnLeft_3;
	Selectable_t3250028441 * ___m_SelectOnRight_4;
};
#endif // NAVIGATION_T3049316579_H
#ifndef TILE_T2634157908_H
#define TILE_T2634157908_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Tile
struct  Tile_t2634157908  : public RuntimeObject
{
public:
	// System.Int32 Tile::<X>k__BackingField
	int32_t ___U3CXU3Ek__BackingField_0;
	// System.Int32 Tile::<Y>k__BackingField
	int32_t ___U3CYU3Ek__BackingField_1;
	// TileType Tile::<tileType>k__BackingField
	int32_t ___U3CtileTypeU3Ek__BackingField_2;
	// Tile[] Tile::neighbors
	TileU5BU5D_t3330163933* ___neighbors_3;
	// System.Boolean[] Tile::outlets
	BooleanU5BU5D_t2897418192* ___outlets_4;
	// System.Boolean Tile::IsPowered
	bool ___IsPowered_5;
	// System.Boolean Tile::IsRotating
	bool ___IsRotating_6;
	// System.Boolean Tile::IsTimedTile
	bool ___IsTimedTile_7;

public:
	inline static int32_t get_offset_of_U3CXU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(Tile_t2634157908, ___U3CXU3Ek__BackingField_0)); }
	inline int32_t get_U3CXU3Ek__BackingField_0() const { return ___U3CXU3Ek__BackingField_0; }
	inline int32_t* get_address_of_U3CXU3Ek__BackingField_0() { return &___U3CXU3Ek__BackingField_0; }
	inline void set_U3CXU3Ek__BackingField_0(int32_t value)
	{
		___U3CXU3Ek__BackingField_0 = value;
	}

	inline static int32_t get_offset_of_U3CYU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(Tile_t2634157908, ___U3CYU3Ek__BackingField_1)); }
	inline int32_t get_U3CYU3Ek__BackingField_1() const { return ___U3CYU3Ek__BackingField_1; }
	inline int32_t* get_address_of_U3CYU3Ek__BackingField_1() { return &___U3CYU3Ek__BackingField_1; }
	inline void set_U3CYU3Ek__BackingField_1(int32_t value)
	{
		___U3CYU3Ek__BackingField_1 = value;
	}

	inline static int32_t get_offset_of_U3CtileTypeU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(Tile_t2634157908, ___U3CtileTypeU3Ek__BackingField_2)); }
	inline int32_t get_U3CtileTypeU3Ek__BackingField_2() const { return ___U3CtileTypeU3Ek__BackingField_2; }
	inline int32_t* get_address_of_U3CtileTypeU3Ek__BackingField_2() { return &___U3CtileTypeU3Ek__BackingField_2; }
	inline void set_U3CtileTypeU3Ek__BackingField_2(int32_t value)
	{
		___U3CtileTypeU3Ek__BackingField_2 = value;
	}

	inline static int32_t get_offset_of_neighbors_3() { return static_cast<int32_t>(offsetof(Tile_t2634157908, ___neighbors_3)); }
	inline TileU5BU5D_t3330163933* get_neighbors_3() const { return ___neighbors_3; }
	inline TileU5BU5D_t3330163933** get_address_of_neighbors_3() { return &___neighbors_3; }
	inline void set_neighbors_3(TileU5BU5D_t3330163933* value)
	{
		___neighbors_3 = value;
		Il2CppCodeGenWriteBarrier((&___neighbors_3), value);
	}

	inline static int32_t get_offset_of_outlets_4() { return static_cast<int32_t>(offsetof(Tile_t2634157908, ___outlets_4)); }
	inline BooleanU5BU5D_t2897418192* get_outlets_4() const { return ___outlets_4; }
	inline BooleanU5BU5D_t2897418192** get_address_of_outlets_4() { return &___outlets_4; }
	inline void set_outlets_4(BooleanU5BU5D_t2897418192* value)
	{
		___outlets_4 = value;
		Il2CppCodeGenWriteBarrier((&___outlets_4), value);
	}

	inline static int32_t get_offset_of_IsPowered_5() { return static_cast<int32_t>(offsetof(Tile_t2634157908, ___IsPowered_5)); }
	inline bool get_IsPowered_5() const { return ___IsPowered_5; }
	inline bool* get_address_of_IsPowered_5() { return &___IsPowered_5; }
	inline void set_IsPowered_5(bool value)
	{
		___IsPowered_5 = value;
	}

	inline static int32_t get_offset_of_IsRotating_6() { return static_cast<int32_t>(offsetof(Tile_t2634157908, ___IsRotating_6)); }
	inline bool get_IsRotating_6() const { return ___IsRotating_6; }
	inline bool* get_address_of_IsRotating_6() { return &___IsRotating_6; }
	inline void set_IsRotating_6(bool value)
	{
		___IsRotating_6 = value;
	}

	inline static int32_t get_offset_of_IsTimedTile_7() { return static_cast<int32_t>(offsetof(Tile_t2634157908, ___IsTimedTile_7)); }
	inline bool get_IsTimedTile_7() const { return ___IsTimedTile_7; }
	inline bool* get_address_of_IsTimedTile_7() { return &___IsTimedTile_7; }
	inline void set_IsTimedTile_7(bool value)
	{
		___IsTimedTile_7 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TILE_T2634157908_H
#ifndef AUDIOCLIP_T3680889665_H
#define AUDIOCLIP_T3680889665_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.AudioClip
struct  AudioClip_t3680889665  : public Object_t631007953
{
public:
	// UnityEngine.AudioClip/PCMReaderCallback UnityEngine.AudioClip::m_PCMReaderCallback
	PCMReaderCallback_t1677636661 * ___m_PCMReaderCallback_2;
	// UnityEngine.AudioClip/PCMSetPositionCallback UnityEngine.AudioClip::m_PCMSetPositionCallback
	PCMSetPositionCallback_t1059417452 * ___m_PCMSetPositionCallback_3;

public:
	inline static int32_t get_offset_of_m_PCMReaderCallback_2() { return static_cast<int32_t>(offsetof(AudioClip_t3680889665, ___m_PCMReaderCallback_2)); }
	inline PCMReaderCallback_t1677636661 * get_m_PCMReaderCallback_2() const { return ___m_PCMReaderCallback_2; }
	inline PCMReaderCallback_t1677636661 ** get_address_of_m_PCMReaderCallback_2() { return &___m_PCMReaderCallback_2; }
	inline void set_m_PCMReaderCallback_2(PCMReaderCallback_t1677636661 * value)
	{
		___m_PCMReaderCallback_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_PCMReaderCallback_2), value);
	}

	inline static int32_t get_offset_of_m_PCMSetPositionCallback_3() { return static_cast<int32_t>(offsetof(AudioClip_t3680889665, ___m_PCMSetPositionCallback_3)); }
	inline PCMSetPositionCallback_t1059417452 * get_m_PCMSetPositionCallback_3() const { return ___m_PCMSetPositionCallback_3; }
	inline PCMSetPositionCallback_t1059417452 ** get_address_of_m_PCMSetPositionCallback_3() { return &___m_PCMSetPositionCallback_3; }
	inline void set_m_PCMSetPositionCallback_3(PCMSetPositionCallback_t1059417452 * value)
	{
		___m_PCMSetPositionCallback_3 = value;
		Il2CppCodeGenWriteBarrier((&___m_PCMSetPositionCallback_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // AUDIOCLIP_T3680889665_H
#ifndef SPRITE_T280657092_H
#define SPRITE_T280657092_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Sprite
struct  Sprite_t280657092  : public Object_t631007953
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SPRITE_T280657092_H
#ifndef GAMEOBJECT_T1113636619_H
#define GAMEOBJECT_T1113636619_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.GameObject
struct  GameObject_t1113636619  : public Object_t631007953
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GAMEOBJECT_T1113636619_H
#ifndef WORDWRAPSTATE_T341939652_H
#define WORDWRAPSTATE_T341939652_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// TMPro.WordWrapState
struct  WordWrapState_t341939652 
{
public:
	// System.Int32 TMPro.WordWrapState::previous_WordBreak
	int32_t ___previous_WordBreak_0;
	// System.Int32 TMPro.WordWrapState::total_CharacterCount
	int32_t ___total_CharacterCount_1;
	// System.Int32 TMPro.WordWrapState::visible_CharacterCount
	int32_t ___visible_CharacterCount_2;
	// System.Int32 TMPro.WordWrapState::visible_SpriteCount
	int32_t ___visible_SpriteCount_3;
	// System.Int32 TMPro.WordWrapState::visible_LinkCount
	int32_t ___visible_LinkCount_4;
	// System.Int32 TMPro.WordWrapState::firstCharacterIndex
	int32_t ___firstCharacterIndex_5;
	// System.Int32 TMPro.WordWrapState::firstVisibleCharacterIndex
	int32_t ___firstVisibleCharacterIndex_6;
	// System.Int32 TMPro.WordWrapState::lastCharacterIndex
	int32_t ___lastCharacterIndex_7;
	// System.Int32 TMPro.WordWrapState::lastVisibleCharIndex
	int32_t ___lastVisibleCharIndex_8;
	// System.Int32 TMPro.WordWrapState::lineNumber
	int32_t ___lineNumber_9;
	// System.Single TMPro.WordWrapState::maxCapHeight
	float ___maxCapHeight_10;
	// System.Single TMPro.WordWrapState::maxAscender
	float ___maxAscender_11;
	// System.Single TMPro.WordWrapState::maxDescender
	float ___maxDescender_12;
	// System.Single TMPro.WordWrapState::maxLineAscender
	float ___maxLineAscender_13;
	// System.Single TMPro.WordWrapState::maxLineDescender
	float ___maxLineDescender_14;
	// System.Single TMPro.WordWrapState::previousLineAscender
	float ___previousLineAscender_15;
	// System.Single TMPro.WordWrapState::xAdvance
	float ___xAdvance_16;
	// System.Single TMPro.WordWrapState::preferredWidth
	float ___preferredWidth_17;
	// System.Single TMPro.WordWrapState::preferredHeight
	float ___preferredHeight_18;
	// System.Single TMPro.WordWrapState::previousLineScale
	float ___previousLineScale_19;
	// System.Int32 TMPro.WordWrapState::wordCount
	int32_t ___wordCount_20;
	// TMPro.FontStyles TMPro.WordWrapState::fontStyle
	int32_t ___fontStyle_21;
	// System.Single TMPro.WordWrapState::fontScale
	float ___fontScale_22;
	// System.Single TMPro.WordWrapState::fontScaleMultiplier
	float ___fontScaleMultiplier_23;
	// System.Single TMPro.WordWrapState::currentFontSize
	float ___currentFontSize_24;
	// System.Single TMPro.WordWrapState::baselineOffset
	float ___baselineOffset_25;
	// System.Single TMPro.WordWrapState::lineOffset
	float ___lineOffset_26;
	// TMPro.TMP_TextInfo TMPro.WordWrapState::textInfo
	TMP_TextInfo_t3598145122 * ___textInfo_27;
	// TMPro.TMP_LineInfo TMPro.WordWrapState::lineInfo
	TMP_LineInfo_t1079631636  ___lineInfo_28;
	// UnityEngine.Color32 TMPro.WordWrapState::vertexColor
	Color32_t2600501292  ___vertexColor_29;
	// UnityEngine.Color32 TMPro.WordWrapState::underlineColor
	Color32_t2600501292  ___underlineColor_30;
	// UnityEngine.Color32 TMPro.WordWrapState::strikethroughColor
	Color32_t2600501292  ___strikethroughColor_31;
	// UnityEngine.Color32 TMPro.WordWrapState::highlightColor
	Color32_t2600501292  ___highlightColor_32;
	// TMPro.TMP_BasicXmlTagStack TMPro.WordWrapState::basicStyleStack
	TMP_BasicXmlTagStack_t2962628096  ___basicStyleStack_33;
	// TMPro.TMP_XmlTagStack`1<UnityEngine.Color32> TMPro.WordWrapState::colorStack
	TMP_XmlTagStack_1_t2164155836  ___colorStack_34;
	// TMPro.TMP_XmlTagStack`1<UnityEngine.Color32> TMPro.WordWrapState::underlineColorStack
	TMP_XmlTagStack_1_t2164155836  ___underlineColorStack_35;
	// TMPro.TMP_XmlTagStack`1<UnityEngine.Color32> TMPro.WordWrapState::strikethroughColorStack
	TMP_XmlTagStack_1_t2164155836  ___strikethroughColorStack_36;
	// TMPro.TMP_XmlTagStack`1<UnityEngine.Color32> TMPro.WordWrapState::highlightColorStack
	TMP_XmlTagStack_1_t2164155836  ___highlightColorStack_37;
	// TMPro.TMP_XmlTagStack`1<TMPro.TMP_ColorGradient> TMPro.WordWrapState::colorGradientStack
	TMP_XmlTagStack_1_t3241710312  ___colorGradientStack_38;
	// TMPro.TMP_XmlTagStack`1<System.Single> TMPro.WordWrapState::sizeStack
	TMP_XmlTagStack_1_t960921318  ___sizeStack_39;
	// TMPro.TMP_XmlTagStack`1<System.Single> TMPro.WordWrapState::indentStack
	TMP_XmlTagStack_1_t960921318  ___indentStack_40;
	// TMPro.TMP_XmlTagStack`1<System.Int32> TMPro.WordWrapState::fontWeightStack
	TMP_XmlTagStack_1_t2514600297  ___fontWeightStack_41;
	// TMPro.TMP_XmlTagStack`1<System.Int32> TMPro.WordWrapState::styleStack
	TMP_XmlTagStack_1_t2514600297  ___styleStack_42;
	// TMPro.TMP_XmlTagStack`1<System.Single> TMPro.WordWrapState::baselineStack
	TMP_XmlTagStack_1_t960921318  ___baselineStack_43;
	// TMPro.TMP_XmlTagStack`1<System.Int32> TMPro.WordWrapState::actionStack
	TMP_XmlTagStack_1_t2514600297  ___actionStack_44;
	// TMPro.TMP_XmlTagStack`1<TMPro.MaterialReference> TMPro.WordWrapState::materialReferenceStack
	TMP_XmlTagStack_1_t1515999176  ___materialReferenceStack_45;
	// TMPro.TMP_XmlTagStack`1<TMPro.TextAlignmentOptions> TMPro.WordWrapState::lineJustificationStack
	TMP_XmlTagStack_1_t3600445780  ___lineJustificationStack_46;
	// System.Int32 TMPro.WordWrapState::spriteAnimationID
	int32_t ___spriteAnimationID_47;
	// TMPro.TMP_FontAsset TMPro.WordWrapState::currentFontAsset
	TMP_FontAsset_t364381626 * ___currentFontAsset_48;
	// TMPro.TMP_SpriteAsset TMPro.WordWrapState::currentSpriteAsset
	TMP_SpriteAsset_t484820633 * ___currentSpriteAsset_49;
	// UnityEngine.Material TMPro.WordWrapState::currentMaterial
	Material_t340375123 * ___currentMaterial_50;
	// System.Int32 TMPro.WordWrapState::currentMaterialIndex
	int32_t ___currentMaterialIndex_51;
	// TMPro.Extents TMPro.WordWrapState::meshExtents
	Extents_t3837212874  ___meshExtents_52;
	// System.Boolean TMPro.WordWrapState::tagNoParsing
	bool ___tagNoParsing_53;
	// System.Boolean TMPro.WordWrapState::isNonBreakingSpace
	bool ___isNonBreakingSpace_54;

public:
	inline static int32_t get_offset_of_previous_WordBreak_0() { return static_cast<int32_t>(offsetof(WordWrapState_t341939652, ___previous_WordBreak_0)); }
	inline int32_t get_previous_WordBreak_0() const { return ___previous_WordBreak_0; }
	inline int32_t* get_address_of_previous_WordBreak_0() { return &___previous_WordBreak_0; }
	inline void set_previous_WordBreak_0(int32_t value)
	{
		___previous_WordBreak_0 = value;
	}

	inline static int32_t get_offset_of_total_CharacterCount_1() { return static_cast<int32_t>(offsetof(WordWrapState_t341939652, ___total_CharacterCount_1)); }
	inline int32_t get_total_CharacterCount_1() const { return ___total_CharacterCount_1; }
	inline int32_t* get_address_of_total_CharacterCount_1() { return &___total_CharacterCount_1; }
	inline void set_total_CharacterCount_1(int32_t value)
	{
		___total_CharacterCount_1 = value;
	}

	inline static int32_t get_offset_of_visible_CharacterCount_2() { return static_cast<int32_t>(offsetof(WordWrapState_t341939652, ___visible_CharacterCount_2)); }
	inline int32_t get_visible_CharacterCount_2() const { return ___visible_CharacterCount_2; }
	inline int32_t* get_address_of_visible_CharacterCount_2() { return &___visible_CharacterCount_2; }
	inline void set_visible_CharacterCount_2(int32_t value)
	{
		___visible_CharacterCount_2 = value;
	}

	inline static int32_t get_offset_of_visible_SpriteCount_3() { return static_cast<int32_t>(offsetof(WordWrapState_t341939652, ___visible_SpriteCount_3)); }
	inline int32_t get_visible_SpriteCount_3() const { return ___visible_SpriteCount_3; }
	inline int32_t* get_address_of_visible_SpriteCount_3() { return &___visible_SpriteCount_3; }
	inline void set_visible_SpriteCount_3(int32_t value)
	{
		___visible_SpriteCount_3 = value;
	}

	inline static int32_t get_offset_of_visible_LinkCount_4() { return static_cast<int32_t>(offsetof(WordWrapState_t341939652, ___visible_LinkCount_4)); }
	inline int32_t get_visible_LinkCount_4() const { return ___visible_LinkCount_4; }
	inline int32_t* get_address_of_visible_LinkCount_4() { return &___visible_LinkCount_4; }
	inline void set_visible_LinkCount_4(int32_t value)
	{
		___visible_LinkCount_4 = value;
	}

	inline static int32_t get_offset_of_firstCharacterIndex_5() { return static_cast<int32_t>(offsetof(WordWrapState_t341939652, ___firstCharacterIndex_5)); }
	inline int32_t get_firstCharacterIndex_5() const { return ___firstCharacterIndex_5; }
	inline int32_t* get_address_of_firstCharacterIndex_5() { return &___firstCharacterIndex_5; }
	inline void set_firstCharacterIndex_5(int32_t value)
	{
		___firstCharacterIndex_5 = value;
	}

	inline static int32_t get_offset_of_firstVisibleCharacterIndex_6() { return static_cast<int32_t>(offsetof(WordWrapState_t341939652, ___firstVisibleCharacterIndex_6)); }
	inline int32_t get_firstVisibleCharacterIndex_6() const { return ___firstVisibleCharacterIndex_6; }
	inline int32_t* get_address_of_firstVisibleCharacterIndex_6() { return &___firstVisibleCharacterIndex_6; }
	inline void set_firstVisibleCharacterIndex_6(int32_t value)
	{
		___firstVisibleCharacterIndex_6 = value;
	}

	inline static int32_t get_offset_of_lastCharacterIndex_7() { return static_cast<int32_t>(offsetof(WordWrapState_t341939652, ___lastCharacterIndex_7)); }
	inline int32_t get_lastCharacterIndex_7() const { return ___lastCharacterIndex_7; }
	inline int32_t* get_address_of_lastCharacterIndex_7() { return &___lastCharacterIndex_7; }
	inline void set_lastCharacterIndex_7(int32_t value)
	{
		___lastCharacterIndex_7 = value;
	}

	inline static int32_t get_offset_of_lastVisibleCharIndex_8() { return static_cast<int32_t>(offsetof(WordWrapState_t341939652, ___lastVisibleCharIndex_8)); }
	inline int32_t get_lastVisibleCharIndex_8() const { return ___lastVisibleCharIndex_8; }
	inline int32_t* get_address_of_lastVisibleCharIndex_8() { return &___lastVisibleCharIndex_8; }
	inline void set_lastVisibleCharIndex_8(int32_t value)
	{
		___lastVisibleCharIndex_8 = value;
	}

	inline static int32_t get_offset_of_lineNumber_9() { return static_cast<int32_t>(offsetof(WordWrapState_t341939652, ___lineNumber_9)); }
	inline int32_t get_lineNumber_9() const { return ___lineNumber_9; }
	inline int32_t* get_address_of_lineNumber_9() { return &___lineNumber_9; }
	inline void set_lineNumber_9(int32_t value)
	{
		___lineNumber_9 = value;
	}

	inline static int32_t get_offset_of_maxCapHeight_10() { return static_cast<int32_t>(offsetof(WordWrapState_t341939652, ___maxCapHeight_10)); }
	inline float get_maxCapHeight_10() const { return ___maxCapHeight_10; }
	inline float* get_address_of_maxCapHeight_10() { return &___maxCapHeight_10; }
	inline void set_maxCapHeight_10(float value)
	{
		___maxCapHeight_10 = value;
	}

	inline static int32_t get_offset_of_maxAscender_11() { return static_cast<int32_t>(offsetof(WordWrapState_t341939652, ___maxAscender_11)); }
	inline float get_maxAscender_11() const { return ___maxAscender_11; }
	inline float* get_address_of_maxAscender_11() { return &___maxAscender_11; }
	inline void set_maxAscender_11(float value)
	{
		___maxAscender_11 = value;
	}

	inline static int32_t get_offset_of_maxDescender_12() { return static_cast<int32_t>(offsetof(WordWrapState_t341939652, ___maxDescender_12)); }
	inline float get_maxDescender_12() const { return ___maxDescender_12; }
	inline float* get_address_of_maxDescender_12() { return &___maxDescender_12; }
	inline void set_maxDescender_12(float value)
	{
		___maxDescender_12 = value;
	}

	inline static int32_t get_offset_of_maxLineAscender_13() { return static_cast<int32_t>(offsetof(WordWrapState_t341939652, ___maxLineAscender_13)); }
	inline float get_maxLineAscender_13() const { return ___maxLineAscender_13; }
	inline float* get_address_of_maxLineAscender_13() { return &___maxLineAscender_13; }
	inline void set_maxLineAscender_13(float value)
	{
		___maxLineAscender_13 = value;
	}

	inline static int32_t get_offset_of_maxLineDescender_14() { return static_cast<int32_t>(offsetof(WordWrapState_t341939652, ___maxLineDescender_14)); }
	inline float get_maxLineDescender_14() const { return ___maxLineDescender_14; }
	inline float* get_address_of_maxLineDescender_14() { return &___maxLineDescender_14; }
	inline void set_maxLineDescender_14(float value)
	{
		___maxLineDescender_14 = value;
	}

	inline static int32_t get_offset_of_previousLineAscender_15() { return static_cast<int32_t>(offsetof(WordWrapState_t341939652, ___previousLineAscender_15)); }
	inline float get_previousLineAscender_15() const { return ___previousLineAscender_15; }
	inline float* get_address_of_previousLineAscender_15() { return &___previousLineAscender_15; }
	inline void set_previousLineAscender_15(float value)
	{
		___previousLineAscender_15 = value;
	}

	inline static int32_t get_offset_of_xAdvance_16() { return static_cast<int32_t>(offsetof(WordWrapState_t341939652, ___xAdvance_16)); }
	inline float get_xAdvance_16() const { return ___xAdvance_16; }
	inline float* get_address_of_xAdvance_16() { return &___xAdvance_16; }
	inline void set_xAdvance_16(float value)
	{
		___xAdvance_16 = value;
	}

	inline static int32_t get_offset_of_preferredWidth_17() { return static_cast<int32_t>(offsetof(WordWrapState_t341939652, ___preferredWidth_17)); }
	inline float get_preferredWidth_17() const { return ___preferredWidth_17; }
	inline float* get_address_of_preferredWidth_17() { return &___preferredWidth_17; }
	inline void set_preferredWidth_17(float value)
	{
		___preferredWidth_17 = value;
	}

	inline static int32_t get_offset_of_preferredHeight_18() { return static_cast<int32_t>(offsetof(WordWrapState_t341939652, ___preferredHeight_18)); }
	inline float get_preferredHeight_18() const { return ___preferredHeight_18; }
	inline float* get_address_of_preferredHeight_18() { return &___preferredHeight_18; }
	inline void set_preferredHeight_18(float value)
	{
		___preferredHeight_18 = value;
	}

	inline static int32_t get_offset_of_previousLineScale_19() { return static_cast<int32_t>(offsetof(WordWrapState_t341939652, ___previousLineScale_19)); }
	inline float get_previousLineScale_19() const { return ___previousLineScale_19; }
	inline float* get_address_of_previousLineScale_19() { return &___previousLineScale_19; }
	inline void set_previousLineScale_19(float value)
	{
		___previousLineScale_19 = value;
	}

	inline static int32_t get_offset_of_wordCount_20() { return static_cast<int32_t>(offsetof(WordWrapState_t341939652, ___wordCount_20)); }
	inline int32_t get_wordCount_20() const { return ___wordCount_20; }
	inline int32_t* get_address_of_wordCount_20() { return &___wordCount_20; }
	inline void set_wordCount_20(int32_t value)
	{
		___wordCount_20 = value;
	}

	inline static int32_t get_offset_of_fontStyle_21() { return static_cast<int32_t>(offsetof(WordWrapState_t341939652, ___fontStyle_21)); }
	inline int32_t get_fontStyle_21() const { return ___fontStyle_21; }
	inline int32_t* get_address_of_fontStyle_21() { return &___fontStyle_21; }
	inline void set_fontStyle_21(int32_t value)
	{
		___fontStyle_21 = value;
	}

	inline static int32_t get_offset_of_fontScale_22() { return static_cast<int32_t>(offsetof(WordWrapState_t341939652, ___fontScale_22)); }
	inline float get_fontScale_22() const { return ___fontScale_22; }
	inline float* get_address_of_fontScale_22() { return &___fontScale_22; }
	inline void set_fontScale_22(float value)
	{
		___fontScale_22 = value;
	}

	inline static int32_t get_offset_of_fontScaleMultiplier_23() { return static_cast<int32_t>(offsetof(WordWrapState_t341939652, ___fontScaleMultiplier_23)); }
	inline float get_fontScaleMultiplier_23() const { return ___fontScaleMultiplier_23; }
	inline float* get_address_of_fontScaleMultiplier_23() { return &___fontScaleMultiplier_23; }
	inline void set_fontScaleMultiplier_23(float value)
	{
		___fontScaleMultiplier_23 = value;
	}

	inline static int32_t get_offset_of_currentFontSize_24() { return static_cast<int32_t>(offsetof(WordWrapState_t341939652, ___currentFontSize_24)); }
	inline float get_currentFontSize_24() const { return ___currentFontSize_24; }
	inline float* get_address_of_currentFontSize_24() { return &___currentFontSize_24; }
	inline void set_currentFontSize_24(float value)
	{
		___currentFontSize_24 = value;
	}

	inline static int32_t get_offset_of_baselineOffset_25() { return static_cast<int32_t>(offsetof(WordWrapState_t341939652, ___baselineOffset_25)); }
	inline float get_baselineOffset_25() const { return ___baselineOffset_25; }
	inline float* get_address_of_baselineOffset_25() { return &___baselineOffset_25; }
	inline void set_baselineOffset_25(float value)
	{
		___baselineOffset_25 = value;
	}

	inline static int32_t get_offset_of_lineOffset_26() { return static_cast<int32_t>(offsetof(WordWrapState_t341939652, ___lineOffset_26)); }
	inline float get_lineOffset_26() const { return ___lineOffset_26; }
	inline float* get_address_of_lineOffset_26() { return &___lineOffset_26; }
	inline void set_lineOffset_26(float value)
	{
		___lineOffset_26 = value;
	}

	inline static int32_t get_offset_of_textInfo_27() { return static_cast<int32_t>(offsetof(WordWrapState_t341939652, ___textInfo_27)); }
	inline TMP_TextInfo_t3598145122 * get_textInfo_27() const { return ___textInfo_27; }
	inline TMP_TextInfo_t3598145122 ** get_address_of_textInfo_27() { return &___textInfo_27; }
	inline void set_textInfo_27(TMP_TextInfo_t3598145122 * value)
	{
		___textInfo_27 = value;
		Il2CppCodeGenWriteBarrier((&___textInfo_27), value);
	}

	inline static int32_t get_offset_of_lineInfo_28() { return static_cast<int32_t>(offsetof(WordWrapState_t341939652, ___lineInfo_28)); }
	inline TMP_LineInfo_t1079631636  get_lineInfo_28() const { return ___lineInfo_28; }
	inline TMP_LineInfo_t1079631636 * get_address_of_lineInfo_28() { return &___lineInfo_28; }
	inline void set_lineInfo_28(TMP_LineInfo_t1079631636  value)
	{
		___lineInfo_28 = value;
	}

	inline static int32_t get_offset_of_vertexColor_29() { return static_cast<int32_t>(offsetof(WordWrapState_t341939652, ___vertexColor_29)); }
	inline Color32_t2600501292  get_vertexColor_29() const { return ___vertexColor_29; }
	inline Color32_t2600501292 * get_address_of_vertexColor_29() { return &___vertexColor_29; }
	inline void set_vertexColor_29(Color32_t2600501292  value)
	{
		___vertexColor_29 = value;
	}

	inline static int32_t get_offset_of_underlineColor_30() { return static_cast<int32_t>(offsetof(WordWrapState_t341939652, ___underlineColor_30)); }
	inline Color32_t2600501292  get_underlineColor_30() const { return ___underlineColor_30; }
	inline Color32_t2600501292 * get_address_of_underlineColor_30() { return &___underlineColor_30; }
	inline void set_underlineColor_30(Color32_t2600501292  value)
	{
		___underlineColor_30 = value;
	}

	inline static int32_t get_offset_of_strikethroughColor_31() { return static_cast<int32_t>(offsetof(WordWrapState_t341939652, ___strikethroughColor_31)); }
	inline Color32_t2600501292  get_strikethroughColor_31() const { return ___strikethroughColor_31; }
	inline Color32_t2600501292 * get_address_of_strikethroughColor_31() { return &___strikethroughColor_31; }
	inline void set_strikethroughColor_31(Color32_t2600501292  value)
	{
		___strikethroughColor_31 = value;
	}

	inline static int32_t get_offset_of_highlightColor_32() { return static_cast<int32_t>(offsetof(WordWrapState_t341939652, ___highlightColor_32)); }
	inline Color32_t2600501292  get_highlightColor_32() const { return ___highlightColor_32; }
	inline Color32_t2600501292 * get_address_of_highlightColor_32() { return &___highlightColor_32; }
	inline void set_highlightColor_32(Color32_t2600501292  value)
	{
		___highlightColor_32 = value;
	}

	inline static int32_t get_offset_of_basicStyleStack_33() { return static_cast<int32_t>(offsetof(WordWrapState_t341939652, ___basicStyleStack_33)); }
	inline TMP_BasicXmlTagStack_t2962628096  get_basicStyleStack_33() const { return ___basicStyleStack_33; }
	inline TMP_BasicXmlTagStack_t2962628096 * get_address_of_basicStyleStack_33() { return &___basicStyleStack_33; }
	inline void set_basicStyleStack_33(TMP_BasicXmlTagStack_t2962628096  value)
	{
		___basicStyleStack_33 = value;
	}

	inline static int32_t get_offset_of_colorStack_34() { return static_cast<int32_t>(offsetof(WordWrapState_t341939652, ___colorStack_34)); }
	inline TMP_XmlTagStack_1_t2164155836  get_colorStack_34() const { return ___colorStack_34; }
	inline TMP_XmlTagStack_1_t2164155836 * get_address_of_colorStack_34() { return &___colorStack_34; }
	inline void set_colorStack_34(TMP_XmlTagStack_1_t2164155836  value)
	{
		___colorStack_34 = value;
	}

	inline static int32_t get_offset_of_underlineColorStack_35() { return static_cast<int32_t>(offsetof(WordWrapState_t341939652, ___underlineColorStack_35)); }
	inline TMP_XmlTagStack_1_t2164155836  get_underlineColorStack_35() const { return ___underlineColorStack_35; }
	inline TMP_XmlTagStack_1_t2164155836 * get_address_of_underlineColorStack_35() { return &___underlineColorStack_35; }
	inline void set_underlineColorStack_35(TMP_XmlTagStack_1_t2164155836  value)
	{
		___underlineColorStack_35 = value;
	}

	inline static int32_t get_offset_of_strikethroughColorStack_36() { return static_cast<int32_t>(offsetof(WordWrapState_t341939652, ___strikethroughColorStack_36)); }
	inline TMP_XmlTagStack_1_t2164155836  get_strikethroughColorStack_36() const { return ___strikethroughColorStack_36; }
	inline TMP_XmlTagStack_1_t2164155836 * get_address_of_strikethroughColorStack_36() { return &___strikethroughColorStack_36; }
	inline void set_strikethroughColorStack_36(TMP_XmlTagStack_1_t2164155836  value)
	{
		___strikethroughColorStack_36 = value;
	}

	inline static int32_t get_offset_of_highlightColorStack_37() { return static_cast<int32_t>(offsetof(WordWrapState_t341939652, ___highlightColorStack_37)); }
	inline TMP_XmlTagStack_1_t2164155836  get_highlightColorStack_37() const { return ___highlightColorStack_37; }
	inline TMP_XmlTagStack_1_t2164155836 * get_address_of_highlightColorStack_37() { return &___highlightColorStack_37; }
	inline void set_highlightColorStack_37(TMP_XmlTagStack_1_t2164155836  value)
	{
		___highlightColorStack_37 = value;
	}

	inline static int32_t get_offset_of_colorGradientStack_38() { return static_cast<int32_t>(offsetof(WordWrapState_t341939652, ___colorGradientStack_38)); }
	inline TMP_XmlTagStack_1_t3241710312  get_colorGradientStack_38() const { return ___colorGradientStack_38; }
	inline TMP_XmlTagStack_1_t3241710312 * get_address_of_colorGradientStack_38() { return &___colorGradientStack_38; }
	inline void set_colorGradientStack_38(TMP_XmlTagStack_1_t3241710312  value)
	{
		___colorGradientStack_38 = value;
	}

	inline static int32_t get_offset_of_sizeStack_39() { return static_cast<int32_t>(offsetof(WordWrapState_t341939652, ___sizeStack_39)); }
	inline TMP_XmlTagStack_1_t960921318  get_sizeStack_39() const { return ___sizeStack_39; }
	inline TMP_XmlTagStack_1_t960921318 * get_address_of_sizeStack_39() { return &___sizeStack_39; }
	inline void set_sizeStack_39(TMP_XmlTagStack_1_t960921318  value)
	{
		___sizeStack_39 = value;
	}

	inline static int32_t get_offset_of_indentStack_40() { return static_cast<int32_t>(offsetof(WordWrapState_t341939652, ___indentStack_40)); }
	inline TMP_XmlTagStack_1_t960921318  get_indentStack_40() const { return ___indentStack_40; }
	inline TMP_XmlTagStack_1_t960921318 * get_address_of_indentStack_40() { return &___indentStack_40; }
	inline void set_indentStack_40(TMP_XmlTagStack_1_t960921318  value)
	{
		___indentStack_40 = value;
	}

	inline static int32_t get_offset_of_fontWeightStack_41() { return static_cast<int32_t>(offsetof(WordWrapState_t341939652, ___fontWeightStack_41)); }
	inline TMP_XmlTagStack_1_t2514600297  get_fontWeightStack_41() const { return ___fontWeightStack_41; }
	inline TMP_XmlTagStack_1_t2514600297 * get_address_of_fontWeightStack_41() { return &___fontWeightStack_41; }
	inline void set_fontWeightStack_41(TMP_XmlTagStack_1_t2514600297  value)
	{
		___fontWeightStack_41 = value;
	}

	inline static int32_t get_offset_of_styleStack_42() { return static_cast<int32_t>(offsetof(WordWrapState_t341939652, ___styleStack_42)); }
	inline TMP_XmlTagStack_1_t2514600297  get_styleStack_42() const { return ___styleStack_42; }
	inline TMP_XmlTagStack_1_t2514600297 * get_address_of_styleStack_42() { return &___styleStack_42; }
	inline void set_styleStack_42(TMP_XmlTagStack_1_t2514600297  value)
	{
		___styleStack_42 = value;
	}

	inline static int32_t get_offset_of_baselineStack_43() { return static_cast<int32_t>(offsetof(WordWrapState_t341939652, ___baselineStack_43)); }
	inline TMP_XmlTagStack_1_t960921318  get_baselineStack_43() const { return ___baselineStack_43; }
	inline TMP_XmlTagStack_1_t960921318 * get_address_of_baselineStack_43() { return &___baselineStack_43; }
	inline void set_baselineStack_43(TMP_XmlTagStack_1_t960921318  value)
	{
		___baselineStack_43 = value;
	}

	inline static int32_t get_offset_of_actionStack_44() { return static_cast<int32_t>(offsetof(WordWrapState_t341939652, ___actionStack_44)); }
	inline TMP_XmlTagStack_1_t2514600297  get_actionStack_44() const { return ___actionStack_44; }
	inline TMP_XmlTagStack_1_t2514600297 * get_address_of_actionStack_44() { return &___actionStack_44; }
	inline void set_actionStack_44(TMP_XmlTagStack_1_t2514600297  value)
	{
		___actionStack_44 = value;
	}

	inline static int32_t get_offset_of_materialReferenceStack_45() { return static_cast<int32_t>(offsetof(WordWrapState_t341939652, ___materialReferenceStack_45)); }
	inline TMP_XmlTagStack_1_t1515999176  get_materialReferenceStack_45() const { return ___materialReferenceStack_45; }
	inline TMP_XmlTagStack_1_t1515999176 * get_address_of_materialReferenceStack_45() { return &___materialReferenceStack_45; }
	inline void set_materialReferenceStack_45(TMP_XmlTagStack_1_t1515999176  value)
	{
		___materialReferenceStack_45 = value;
	}

	inline static int32_t get_offset_of_lineJustificationStack_46() { return static_cast<int32_t>(offsetof(WordWrapState_t341939652, ___lineJustificationStack_46)); }
	inline TMP_XmlTagStack_1_t3600445780  get_lineJustificationStack_46() const { return ___lineJustificationStack_46; }
	inline TMP_XmlTagStack_1_t3600445780 * get_address_of_lineJustificationStack_46() { return &___lineJustificationStack_46; }
	inline void set_lineJustificationStack_46(TMP_XmlTagStack_1_t3600445780  value)
	{
		___lineJustificationStack_46 = value;
	}

	inline static int32_t get_offset_of_spriteAnimationID_47() { return static_cast<int32_t>(offsetof(WordWrapState_t341939652, ___spriteAnimationID_47)); }
	inline int32_t get_spriteAnimationID_47() const { return ___spriteAnimationID_47; }
	inline int32_t* get_address_of_spriteAnimationID_47() { return &___spriteAnimationID_47; }
	inline void set_spriteAnimationID_47(int32_t value)
	{
		___spriteAnimationID_47 = value;
	}

	inline static int32_t get_offset_of_currentFontAsset_48() { return static_cast<int32_t>(offsetof(WordWrapState_t341939652, ___currentFontAsset_48)); }
	inline TMP_FontAsset_t364381626 * get_currentFontAsset_48() const { return ___currentFontAsset_48; }
	inline TMP_FontAsset_t364381626 ** get_address_of_currentFontAsset_48() { return &___currentFontAsset_48; }
	inline void set_currentFontAsset_48(TMP_FontAsset_t364381626 * value)
	{
		___currentFontAsset_48 = value;
		Il2CppCodeGenWriteBarrier((&___currentFontAsset_48), value);
	}

	inline static int32_t get_offset_of_currentSpriteAsset_49() { return static_cast<int32_t>(offsetof(WordWrapState_t341939652, ___currentSpriteAsset_49)); }
	inline TMP_SpriteAsset_t484820633 * get_currentSpriteAsset_49() const { return ___currentSpriteAsset_49; }
	inline TMP_SpriteAsset_t484820633 ** get_address_of_currentSpriteAsset_49() { return &___currentSpriteAsset_49; }
	inline void set_currentSpriteAsset_49(TMP_SpriteAsset_t484820633 * value)
	{
		___currentSpriteAsset_49 = value;
		Il2CppCodeGenWriteBarrier((&___currentSpriteAsset_49), value);
	}

	inline static int32_t get_offset_of_currentMaterial_50() { return static_cast<int32_t>(offsetof(WordWrapState_t341939652, ___currentMaterial_50)); }
	inline Material_t340375123 * get_currentMaterial_50() const { return ___currentMaterial_50; }
	inline Material_t340375123 ** get_address_of_currentMaterial_50() { return &___currentMaterial_50; }
	inline void set_currentMaterial_50(Material_t340375123 * value)
	{
		___currentMaterial_50 = value;
		Il2CppCodeGenWriteBarrier((&___currentMaterial_50), value);
	}

	inline static int32_t get_offset_of_currentMaterialIndex_51() { return static_cast<int32_t>(offsetof(WordWrapState_t341939652, ___currentMaterialIndex_51)); }
	inline int32_t get_currentMaterialIndex_51() const { return ___currentMaterialIndex_51; }
	inline int32_t* get_address_of_currentMaterialIndex_51() { return &___currentMaterialIndex_51; }
	inline void set_currentMaterialIndex_51(int32_t value)
	{
		___currentMaterialIndex_51 = value;
	}

	inline static int32_t get_offset_of_meshExtents_52() { return static_cast<int32_t>(offsetof(WordWrapState_t341939652, ___meshExtents_52)); }
	inline Extents_t3837212874  get_meshExtents_52() const { return ___meshExtents_52; }
	inline Extents_t3837212874 * get_address_of_meshExtents_52() { return &___meshExtents_52; }
	inline void set_meshExtents_52(Extents_t3837212874  value)
	{
		___meshExtents_52 = value;
	}

	inline static int32_t get_offset_of_tagNoParsing_53() { return static_cast<int32_t>(offsetof(WordWrapState_t341939652, ___tagNoParsing_53)); }
	inline bool get_tagNoParsing_53() const { return ___tagNoParsing_53; }
	inline bool* get_address_of_tagNoParsing_53() { return &___tagNoParsing_53; }
	inline void set_tagNoParsing_53(bool value)
	{
		___tagNoParsing_53 = value;
	}

	inline static int32_t get_offset_of_isNonBreakingSpace_54() { return static_cast<int32_t>(offsetof(WordWrapState_t341939652, ___isNonBreakingSpace_54)); }
	inline bool get_isNonBreakingSpace_54() const { return ___isNonBreakingSpace_54; }
	inline bool* get_address_of_isNonBreakingSpace_54() { return &___isNonBreakingSpace_54; }
	inline void set_isNonBreakingSpace_54(bool value)
	{
		___isNonBreakingSpace_54 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of TMPro.WordWrapState
struct WordWrapState_t341939652_marshaled_pinvoke
{
	int32_t ___previous_WordBreak_0;
	int32_t ___total_CharacterCount_1;
	int32_t ___visible_CharacterCount_2;
	int32_t ___visible_SpriteCount_3;
	int32_t ___visible_LinkCount_4;
	int32_t ___firstCharacterIndex_5;
	int32_t ___firstVisibleCharacterIndex_6;
	int32_t ___lastCharacterIndex_7;
	int32_t ___lastVisibleCharIndex_8;
	int32_t ___lineNumber_9;
	float ___maxCapHeight_10;
	float ___maxAscender_11;
	float ___maxDescender_12;
	float ___maxLineAscender_13;
	float ___maxLineDescender_14;
	float ___previousLineAscender_15;
	float ___xAdvance_16;
	float ___preferredWidth_17;
	float ___preferredHeight_18;
	float ___previousLineScale_19;
	int32_t ___wordCount_20;
	int32_t ___fontStyle_21;
	float ___fontScale_22;
	float ___fontScaleMultiplier_23;
	float ___currentFontSize_24;
	float ___baselineOffset_25;
	float ___lineOffset_26;
	TMP_TextInfo_t3598145122 * ___textInfo_27;
	TMP_LineInfo_t1079631636  ___lineInfo_28;
	Color32_t2600501292  ___vertexColor_29;
	Color32_t2600501292  ___underlineColor_30;
	Color32_t2600501292  ___strikethroughColor_31;
	Color32_t2600501292  ___highlightColor_32;
	TMP_BasicXmlTagStack_t2962628096  ___basicStyleStack_33;
	TMP_XmlTagStack_1_t2164155836  ___colorStack_34;
	TMP_XmlTagStack_1_t2164155836  ___underlineColorStack_35;
	TMP_XmlTagStack_1_t2164155836  ___strikethroughColorStack_36;
	TMP_XmlTagStack_1_t2164155836  ___highlightColorStack_37;
	TMP_XmlTagStack_1_t3241710312  ___colorGradientStack_38;
	TMP_XmlTagStack_1_t960921318  ___sizeStack_39;
	TMP_XmlTagStack_1_t960921318  ___indentStack_40;
	TMP_XmlTagStack_1_t2514600297  ___fontWeightStack_41;
	TMP_XmlTagStack_1_t2514600297  ___styleStack_42;
	TMP_XmlTagStack_1_t960921318  ___baselineStack_43;
	TMP_XmlTagStack_1_t2514600297  ___actionStack_44;
	TMP_XmlTagStack_1_t1515999176  ___materialReferenceStack_45;
	TMP_XmlTagStack_1_t3600445780  ___lineJustificationStack_46;
	int32_t ___spriteAnimationID_47;
	TMP_FontAsset_t364381626 * ___currentFontAsset_48;
	TMP_SpriteAsset_t484820633 * ___currentSpriteAsset_49;
	Material_t340375123 * ___currentMaterial_50;
	int32_t ___currentMaterialIndex_51;
	Extents_t3837212874  ___meshExtents_52;
	int32_t ___tagNoParsing_53;
	int32_t ___isNonBreakingSpace_54;
};
// Native definition for COM marshalling of TMPro.WordWrapState
struct WordWrapState_t341939652_marshaled_com
{
	int32_t ___previous_WordBreak_0;
	int32_t ___total_CharacterCount_1;
	int32_t ___visible_CharacterCount_2;
	int32_t ___visible_SpriteCount_3;
	int32_t ___visible_LinkCount_4;
	int32_t ___firstCharacterIndex_5;
	int32_t ___firstVisibleCharacterIndex_6;
	int32_t ___lastCharacterIndex_7;
	int32_t ___lastVisibleCharIndex_8;
	int32_t ___lineNumber_9;
	float ___maxCapHeight_10;
	float ___maxAscender_11;
	float ___maxDescender_12;
	float ___maxLineAscender_13;
	float ___maxLineDescender_14;
	float ___previousLineAscender_15;
	float ___xAdvance_16;
	float ___preferredWidth_17;
	float ___preferredHeight_18;
	float ___previousLineScale_19;
	int32_t ___wordCount_20;
	int32_t ___fontStyle_21;
	float ___fontScale_22;
	float ___fontScaleMultiplier_23;
	float ___currentFontSize_24;
	float ___baselineOffset_25;
	float ___lineOffset_26;
	TMP_TextInfo_t3598145122 * ___textInfo_27;
	TMP_LineInfo_t1079631636  ___lineInfo_28;
	Color32_t2600501292  ___vertexColor_29;
	Color32_t2600501292  ___underlineColor_30;
	Color32_t2600501292  ___strikethroughColor_31;
	Color32_t2600501292  ___highlightColor_32;
	TMP_BasicXmlTagStack_t2962628096  ___basicStyleStack_33;
	TMP_XmlTagStack_1_t2164155836  ___colorStack_34;
	TMP_XmlTagStack_1_t2164155836  ___underlineColorStack_35;
	TMP_XmlTagStack_1_t2164155836  ___strikethroughColorStack_36;
	TMP_XmlTagStack_1_t2164155836  ___highlightColorStack_37;
	TMP_XmlTagStack_1_t3241710312  ___colorGradientStack_38;
	TMP_XmlTagStack_1_t960921318  ___sizeStack_39;
	TMP_XmlTagStack_1_t960921318  ___indentStack_40;
	TMP_XmlTagStack_1_t2514600297  ___fontWeightStack_41;
	TMP_XmlTagStack_1_t2514600297  ___styleStack_42;
	TMP_XmlTagStack_1_t960921318  ___baselineStack_43;
	TMP_XmlTagStack_1_t2514600297  ___actionStack_44;
	TMP_XmlTagStack_1_t1515999176  ___materialReferenceStack_45;
	TMP_XmlTagStack_1_t3600445780  ___lineJustificationStack_46;
	int32_t ___spriteAnimationID_47;
	TMP_FontAsset_t364381626 * ___currentFontAsset_48;
	TMP_SpriteAsset_t484820633 * ___currentSpriteAsset_49;
	Material_t340375123 * ___currentMaterial_50;
	int32_t ___currentMaterialIndex_51;
	Extents_t3837212874  ___meshExtents_52;
	int32_t ___tagNoParsing_53;
	int32_t ___isNonBreakingSpace_54;
};
#endif // WORDWRAPSTATE_T341939652_H
#ifndef BEHAVIOUR_T1437897464_H
#define BEHAVIOUR_T1437897464_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Behaviour
struct  Behaviour_t1437897464  : public Component_t1923634451
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BEHAVIOUR_T1437897464_H
#ifndef RENDERER_T2627027031_H
#define RENDERER_T2627027031_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Renderer
struct  Renderer_t2627027031  : public Component_t1923634451
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RENDERER_T2627027031_H
#ifndef PARTICLESYSTEM_T1800779281_H
#define PARTICLESYSTEM_T1800779281_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.ParticleSystem
struct  ParticleSystem_t1800779281  : public Component_t1923634451
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PARTICLESYSTEM_T1800779281_H
#ifndef TILECOLORDATA_T4183236388_H
#define TILECOLORDATA_T4183236388_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// TileColorData
struct  TileColorData_t4183236388  : public ScriptableObject_t2528358522
{
public:
	// UnityEngine.Color TileColorData::unlitWireColor
	Color_t2555686324  ___unlitWireColor_2;
	// UnityEngine.Color TileColorData::shadowColor
	Color_t2555686324  ___shadowColor_3;
	// UnityEngine.Color TileColorData::litWireColor
	Color_t2555686324  ___litWireColor_4;
	// UnityEngine.Color TileColorData::litHighlightColor
	Color_t2555686324  ___litHighlightColor_5;

public:
	inline static int32_t get_offset_of_unlitWireColor_2() { return static_cast<int32_t>(offsetof(TileColorData_t4183236388, ___unlitWireColor_2)); }
	inline Color_t2555686324  get_unlitWireColor_2() const { return ___unlitWireColor_2; }
	inline Color_t2555686324 * get_address_of_unlitWireColor_2() { return &___unlitWireColor_2; }
	inline void set_unlitWireColor_2(Color_t2555686324  value)
	{
		___unlitWireColor_2 = value;
	}

	inline static int32_t get_offset_of_shadowColor_3() { return static_cast<int32_t>(offsetof(TileColorData_t4183236388, ___shadowColor_3)); }
	inline Color_t2555686324  get_shadowColor_3() const { return ___shadowColor_3; }
	inline Color_t2555686324 * get_address_of_shadowColor_3() { return &___shadowColor_3; }
	inline void set_shadowColor_3(Color_t2555686324  value)
	{
		___shadowColor_3 = value;
	}

	inline static int32_t get_offset_of_litWireColor_4() { return static_cast<int32_t>(offsetof(TileColorData_t4183236388, ___litWireColor_4)); }
	inline Color_t2555686324  get_litWireColor_4() const { return ___litWireColor_4; }
	inline Color_t2555686324 * get_address_of_litWireColor_4() { return &___litWireColor_4; }
	inline void set_litWireColor_4(Color_t2555686324  value)
	{
		___litWireColor_4 = value;
	}

	inline static int32_t get_offset_of_litHighlightColor_5() { return static_cast<int32_t>(offsetof(TileColorData_t4183236388, ___litHighlightColor_5)); }
	inline Color_t2555686324  get_litHighlightColor_5() const { return ___litHighlightColor_5; }
	inline Color_t2555686324 * get_address_of_litHighlightColor_5() { return &___litHighlightColor_5; }
	inline void set_litHighlightColor_5(Color_t2555686324  value)
	{
		___litHighlightColor_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TILECOLORDATA_T4183236388_H
#ifndef TRANSFORM_T3600365921_H
#define TRANSFORM_T3600365921_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Transform
struct  Transform_t3600365921  : public Component_t1923634451
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TRANSFORM_T3600365921_H
#ifndef AUDIOBEHAVIOUR_T2879336574_H
#define AUDIOBEHAVIOUR_T2879336574_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.AudioBehaviour
struct  AudioBehaviour_t2879336574  : public Behaviour_t1437897464
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // AUDIOBEHAVIOUR_T2879336574_H
#ifndef CAMERA_T4157153871_H
#define CAMERA_T4157153871_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Camera
struct  Camera_t4157153871  : public Behaviour_t1437897464
{
public:

public:
};

struct Camera_t4157153871_StaticFields
{
public:
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPreCull
	CameraCallback_t190067161 * ___onPreCull_2;
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPreRender
	CameraCallback_t190067161 * ___onPreRender_3;
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPostRender
	CameraCallback_t190067161 * ___onPostRender_4;

public:
	inline static int32_t get_offset_of_onPreCull_2() { return static_cast<int32_t>(offsetof(Camera_t4157153871_StaticFields, ___onPreCull_2)); }
	inline CameraCallback_t190067161 * get_onPreCull_2() const { return ___onPreCull_2; }
	inline CameraCallback_t190067161 ** get_address_of_onPreCull_2() { return &___onPreCull_2; }
	inline void set_onPreCull_2(CameraCallback_t190067161 * value)
	{
		___onPreCull_2 = value;
		Il2CppCodeGenWriteBarrier((&___onPreCull_2), value);
	}

	inline static int32_t get_offset_of_onPreRender_3() { return static_cast<int32_t>(offsetof(Camera_t4157153871_StaticFields, ___onPreRender_3)); }
	inline CameraCallback_t190067161 * get_onPreRender_3() const { return ___onPreRender_3; }
	inline CameraCallback_t190067161 ** get_address_of_onPreRender_3() { return &___onPreRender_3; }
	inline void set_onPreRender_3(CameraCallback_t190067161 * value)
	{
		___onPreRender_3 = value;
		Il2CppCodeGenWriteBarrier((&___onPreRender_3), value);
	}

	inline static int32_t get_offset_of_onPostRender_4() { return static_cast<int32_t>(offsetof(Camera_t4157153871_StaticFields, ___onPostRender_4)); }
	inline CameraCallback_t190067161 * get_onPostRender_4() const { return ___onPostRender_4; }
	inline CameraCallback_t190067161 ** get_address_of_onPostRender_4() { return &___onPostRender_4; }
	inline void set_onPostRender_4(CameraCallback_t190067161 * value)
	{
		___onPostRender_4 = value;
		Il2CppCodeGenWriteBarrier((&___onPostRender_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CAMERA_T4157153871_H
#ifndef MONOBEHAVIOUR_T3962482529_H
#define MONOBEHAVIOUR_T3962482529_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.MonoBehaviour
struct  MonoBehaviour_t3962482529  : public Behaviour_t1437897464
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MONOBEHAVIOUR_T3962482529_H
#ifndef ANIMATOR_T434523843_H
#define ANIMATOR_T434523843_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Animator
struct  Animator_t434523843  : public Behaviour_t1437897464
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ANIMATOR_T434523843_H
#ifndef SPRITERENDERER_T3235626157_H
#define SPRITERENDERER_T3235626157_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.SpriteRenderer
struct  SpriteRenderer_t3235626157  : public Renderer_t2627027031
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SPRITERENDERER_T3235626157_H
#ifndef TILECONTROLLER_T1073589649_H
#define TILECONTROLLER_T1073589649_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// TileController
struct  TileController_t1073589649  : public MonoBehaviour_t3962482529
{
public:
	// TilePrefabManager TileController::prefabManager
	TilePrefabManager_t293433569 * ___prefabManager_2;
	// TileColorData TileController::tileColors
	TileColorData_t4183236388 * ___tileColors_3;
	// System.Collections.Generic.Dictionary`2<Tile,TileColorController> TileController::tileGameObjects
	Dictionary_2_t3407319387 * ___tileGameObjects_4;
	// System.Collections.Generic.Queue`1<Tile> TileController::tileTargetRotations
	Queue_1_t2480417402 * ___tileTargetRotations_5;
	// Tile TileController::currentTileRotating
	Tile_t2634157908 * ___currentTileRotating_6;
	// System.Single TileController::tileRotateSpeed
	float ___tileRotateSpeed_7;

public:
	inline static int32_t get_offset_of_prefabManager_2() { return static_cast<int32_t>(offsetof(TileController_t1073589649, ___prefabManager_2)); }
	inline TilePrefabManager_t293433569 * get_prefabManager_2() const { return ___prefabManager_2; }
	inline TilePrefabManager_t293433569 ** get_address_of_prefabManager_2() { return &___prefabManager_2; }
	inline void set_prefabManager_2(TilePrefabManager_t293433569 * value)
	{
		___prefabManager_2 = value;
		Il2CppCodeGenWriteBarrier((&___prefabManager_2), value);
	}

	inline static int32_t get_offset_of_tileColors_3() { return static_cast<int32_t>(offsetof(TileController_t1073589649, ___tileColors_3)); }
	inline TileColorData_t4183236388 * get_tileColors_3() const { return ___tileColors_3; }
	inline TileColorData_t4183236388 ** get_address_of_tileColors_3() { return &___tileColors_3; }
	inline void set_tileColors_3(TileColorData_t4183236388 * value)
	{
		___tileColors_3 = value;
		Il2CppCodeGenWriteBarrier((&___tileColors_3), value);
	}

	inline static int32_t get_offset_of_tileGameObjects_4() { return static_cast<int32_t>(offsetof(TileController_t1073589649, ___tileGameObjects_4)); }
	inline Dictionary_2_t3407319387 * get_tileGameObjects_4() const { return ___tileGameObjects_4; }
	inline Dictionary_2_t3407319387 ** get_address_of_tileGameObjects_4() { return &___tileGameObjects_4; }
	inline void set_tileGameObjects_4(Dictionary_2_t3407319387 * value)
	{
		___tileGameObjects_4 = value;
		Il2CppCodeGenWriteBarrier((&___tileGameObjects_4), value);
	}

	inline static int32_t get_offset_of_tileTargetRotations_5() { return static_cast<int32_t>(offsetof(TileController_t1073589649, ___tileTargetRotations_5)); }
	inline Queue_1_t2480417402 * get_tileTargetRotations_5() const { return ___tileTargetRotations_5; }
	inline Queue_1_t2480417402 ** get_address_of_tileTargetRotations_5() { return &___tileTargetRotations_5; }
	inline void set_tileTargetRotations_5(Queue_1_t2480417402 * value)
	{
		___tileTargetRotations_5 = value;
		Il2CppCodeGenWriteBarrier((&___tileTargetRotations_5), value);
	}

	inline static int32_t get_offset_of_currentTileRotating_6() { return static_cast<int32_t>(offsetof(TileController_t1073589649, ___currentTileRotating_6)); }
	inline Tile_t2634157908 * get_currentTileRotating_6() const { return ___currentTileRotating_6; }
	inline Tile_t2634157908 ** get_address_of_currentTileRotating_6() { return &___currentTileRotating_6; }
	inline void set_currentTileRotating_6(Tile_t2634157908 * value)
	{
		___currentTileRotating_6 = value;
		Il2CppCodeGenWriteBarrier((&___currentTileRotating_6), value);
	}

	inline static int32_t get_offset_of_tileRotateSpeed_7() { return static_cast<int32_t>(offsetof(TileController_t1073589649, ___tileRotateSpeed_7)); }
	inline float get_tileRotateSpeed_7() const { return ___tileRotateSpeed_7; }
	inline float* get_address_of_tileRotateSpeed_7() { return &___tileRotateSpeed_7; }
	inline void set_tileRotateSpeed_7(float value)
	{
		___tileRotateSpeed_7 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TILECONTROLLER_T1073589649_H
#ifndef LERPSPRITE_T1901857106_H
#define LERPSPRITE_T1901857106_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// LerpSprite
struct  LerpSprite_t1901857106  : public MonoBehaviour_t3962482529
{
public:
	// UnityEngine.SpriteRenderer LerpSprite::sprite
	SpriteRenderer_t3235626157 * ___sprite_2;
	// UnityEngine.Color LerpSprite::lastColor
	Color_t2555686324  ___lastColor_3;
	// UnityEngine.Color LerpSprite::targetColor
	Color_t2555686324  ___targetColor_4;

public:
	inline static int32_t get_offset_of_sprite_2() { return static_cast<int32_t>(offsetof(LerpSprite_t1901857106, ___sprite_2)); }
	inline SpriteRenderer_t3235626157 * get_sprite_2() const { return ___sprite_2; }
	inline SpriteRenderer_t3235626157 ** get_address_of_sprite_2() { return &___sprite_2; }
	inline void set_sprite_2(SpriteRenderer_t3235626157 * value)
	{
		___sprite_2 = value;
		Il2CppCodeGenWriteBarrier((&___sprite_2), value);
	}

	inline static int32_t get_offset_of_lastColor_3() { return static_cast<int32_t>(offsetof(LerpSprite_t1901857106, ___lastColor_3)); }
	inline Color_t2555686324  get_lastColor_3() const { return ___lastColor_3; }
	inline Color_t2555686324 * get_address_of_lastColor_3() { return &___lastColor_3; }
	inline void set_lastColor_3(Color_t2555686324  value)
	{
		___lastColor_3 = value;
	}

	inline static int32_t get_offset_of_targetColor_4() { return static_cast<int32_t>(offsetof(LerpSprite_t1901857106, ___targetColor_4)); }
	inline Color_t2555686324  get_targetColor_4() const { return ___targetColor_4; }
	inline Color_t2555686324 * get_address_of_targetColor_4() { return &___targetColor_4; }
	inline void set_targetColor_4(Color_t2555686324  value)
	{
		___targetColor_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LERPSPRITE_T1901857106_H
#ifndef SOUNDMANAGER_T2102329059_H
#define SOUNDMANAGER_T2102329059_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// SoundManager
struct  SoundManager_t2102329059  : public MonoBehaviour_t3962482529
{
public:
	// SoundManager/SoundClip[] SoundManager::sounds
	SoundClipU5BU5D_t2720230398* ___sounds_2;
	// UnityEngine.AudioSource SoundManager::MusicSource
	AudioSource_t3935305588 * ___MusicSource_4;
	// UnityEngine.AudioSource SoundManager::MasterSource
	AudioSource_t3935305588 * ___MasterSource_5;
	// UnityEngine.UI.Image SoundManager::musicToggleImage
	Image_t2670269651 * ___musicToggleImage_6;
	// UnityEngine.Sprite[] SoundManager::musicToggleSprites
	SpriteU5BU5D_t2581906349* ___musicToggleSprites_7;
	// UnityEngine.UI.Image SoundManager::soundToggleImage
	Image_t2670269651 * ___soundToggleImage_8;
	// UnityEngine.Sprite[] SoundManager::soundToggleSprites
	SpriteU5BU5D_t2581906349* ___soundToggleSprites_9;
	// System.Boolean SoundManager::musicOn
	bool ___musicOn_10;
	// System.Boolean SoundManager::soundOn
	bool ___soundOn_11;

public:
	inline static int32_t get_offset_of_sounds_2() { return static_cast<int32_t>(offsetof(SoundManager_t2102329059, ___sounds_2)); }
	inline SoundClipU5BU5D_t2720230398* get_sounds_2() const { return ___sounds_2; }
	inline SoundClipU5BU5D_t2720230398** get_address_of_sounds_2() { return &___sounds_2; }
	inline void set_sounds_2(SoundClipU5BU5D_t2720230398* value)
	{
		___sounds_2 = value;
		Il2CppCodeGenWriteBarrier((&___sounds_2), value);
	}

	inline static int32_t get_offset_of_MusicSource_4() { return static_cast<int32_t>(offsetof(SoundManager_t2102329059, ___MusicSource_4)); }
	inline AudioSource_t3935305588 * get_MusicSource_4() const { return ___MusicSource_4; }
	inline AudioSource_t3935305588 ** get_address_of_MusicSource_4() { return &___MusicSource_4; }
	inline void set_MusicSource_4(AudioSource_t3935305588 * value)
	{
		___MusicSource_4 = value;
		Il2CppCodeGenWriteBarrier((&___MusicSource_4), value);
	}

	inline static int32_t get_offset_of_MasterSource_5() { return static_cast<int32_t>(offsetof(SoundManager_t2102329059, ___MasterSource_5)); }
	inline AudioSource_t3935305588 * get_MasterSource_5() const { return ___MasterSource_5; }
	inline AudioSource_t3935305588 ** get_address_of_MasterSource_5() { return &___MasterSource_5; }
	inline void set_MasterSource_5(AudioSource_t3935305588 * value)
	{
		___MasterSource_5 = value;
		Il2CppCodeGenWriteBarrier((&___MasterSource_5), value);
	}

	inline static int32_t get_offset_of_musicToggleImage_6() { return static_cast<int32_t>(offsetof(SoundManager_t2102329059, ___musicToggleImage_6)); }
	inline Image_t2670269651 * get_musicToggleImage_6() const { return ___musicToggleImage_6; }
	inline Image_t2670269651 ** get_address_of_musicToggleImage_6() { return &___musicToggleImage_6; }
	inline void set_musicToggleImage_6(Image_t2670269651 * value)
	{
		___musicToggleImage_6 = value;
		Il2CppCodeGenWriteBarrier((&___musicToggleImage_6), value);
	}

	inline static int32_t get_offset_of_musicToggleSprites_7() { return static_cast<int32_t>(offsetof(SoundManager_t2102329059, ___musicToggleSprites_7)); }
	inline SpriteU5BU5D_t2581906349* get_musicToggleSprites_7() const { return ___musicToggleSprites_7; }
	inline SpriteU5BU5D_t2581906349** get_address_of_musicToggleSprites_7() { return &___musicToggleSprites_7; }
	inline void set_musicToggleSprites_7(SpriteU5BU5D_t2581906349* value)
	{
		___musicToggleSprites_7 = value;
		Il2CppCodeGenWriteBarrier((&___musicToggleSprites_7), value);
	}

	inline static int32_t get_offset_of_soundToggleImage_8() { return static_cast<int32_t>(offsetof(SoundManager_t2102329059, ___soundToggleImage_8)); }
	inline Image_t2670269651 * get_soundToggleImage_8() const { return ___soundToggleImage_8; }
	inline Image_t2670269651 ** get_address_of_soundToggleImage_8() { return &___soundToggleImage_8; }
	inline void set_soundToggleImage_8(Image_t2670269651 * value)
	{
		___soundToggleImage_8 = value;
		Il2CppCodeGenWriteBarrier((&___soundToggleImage_8), value);
	}

	inline static int32_t get_offset_of_soundToggleSprites_9() { return static_cast<int32_t>(offsetof(SoundManager_t2102329059, ___soundToggleSprites_9)); }
	inline SpriteU5BU5D_t2581906349* get_soundToggleSprites_9() const { return ___soundToggleSprites_9; }
	inline SpriteU5BU5D_t2581906349** get_address_of_soundToggleSprites_9() { return &___soundToggleSprites_9; }
	inline void set_soundToggleSprites_9(SpriteU5BU5D_t2581906349* value)
	{
		___soundToggleSprites_9 = value;
		Il2CppCodeGenWriteBarrier((&___soundToggleSprites_9), value);
	}

	inline static int32_t get_offset_of_musicOn_10() { return static_cast<int32_t>(offsetof(SoundManager_t2102329059, ___musicOn_10)); }
	inline bool get_musicOn_10() const { return ___musicOn_10; }
	inline bool* get_address_of_musicOn_10() { return &___musicOn_10; }
	inline void set_musicOn_10(bool value)
	{
		___musicOn_10 = value;
	}

	inline static int32_t get_offset_of_soundOn_11() { return static_cast<int32_t>(offsetof(SoundManager_t2102329059, ___soundOn_11)); }
	inline bool get_soundOn_11() const { return ___soundOn_11; }
	inline bool* get_address_of_soundOn_11() { return &___soundOn_11; }
	inline void set_soundOn_11(bool value)
	{
		___soundOn_11 = value;
	}
};

struct SoundManager_t2102329059_StaticFields
{
public:
	// SoundManager SoundManager::Instance
	SoundManager_t2102329059 * ___Instance_3;

public:
	inline static int32_t get_offset_of_Instance_3() { return static_cast<int32_t>(offsetof(SoundManager_t2102329059_StaticFields, ___Instance_3)); }
	inline SoundManager_t2102329059 * get_Instance_3() const { return ___Instance_3; }
	inline SoundManager_t2102329059 ** get_address_of_Instance_3() { return &___Instance_3; }
	inline void set_Instance_3(SoundManager_t2102329059 * value)
	{
		___Instance_3 = value;
		Il2CppCodeGenWriteBarrier((&___Instance_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SOUNDMANAGER_T2102329059_H
#ifndef AUDIOSOURCE_T3935305588_H
#define AUDIOSOURCE_T3935305588_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.AudioSource
struct  AudioSource_t3935305588  : public AudioBehaviour_t2879336574
{
public:
	// UnityEngine.AudioSourceExtension UnityEngine.AudioSource::spatializerExtension
	AudioSourceExtension_t3064908834 * ___spatializerExtension_2;
	// UnityEngine.AudioSourceExtension UnityEngine.AudioSource::ambisonicExtension
	AudioSourceExtension_t3064908834 * ___ambisonicExtension_3;

public:
	inline static int32_t get_offset_of_spatializerExtension_2() { return static_cast<int32_t>(offsetof(AudioSource_t3935305588, ___spatializerExtension_2)); }
	inline AudioSourceExtension_t3064908834 * get_spatializerExtension_2() const { return ___spatializerExtension_2; }
	inline AudioSourceExtension_t3064908834 ** get_address_of_spatializerExtension_2() { return &___spatializerExtension_2; }
	inline void set_spatializerExtension_2(AudioSourceExtension_t3064908834 * value)
	{
		___spatializerExtension_2 = value;
		Il2CppCodeGenWriteBarrier((&___spatializerExtension_2), value);
	}

	inline static int32_t get_offset_of_ambisonicExtension_3() { return static_cast<int32_t>(offsetof(AudioSource_t3935305588, ___ambisonicExtension_3)); }
	inline AudioSourceExtension_t3064908834 * get_ambisonicExtension_3() const { return ___ambisonicExtension_3; }
	inline AudioSourceExtension_t3064908834 ** get_address_of_ambisonicExtension_3() { return &___ambisonicExtension_3; }
	inline void set_ambisonicExtension_3(AudioSourceExtension_t3064908834 * value)
	{
		___ambisonicExtension_3 = value;
		Il2CppCodeGenWriteBarrier((&___ambisonicExtension_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // AUDIOSOURCE_T3935305588_H
#ifndef PAUSEMENU_T3916167947_H
#define PAUSEMENU_T3916167947_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PauseMenu
struct  PauseMenu_t3916167947  : public MonoBehaviour_t3962482529
{
public:
	// PanelAnimator PauseMenu::anim
	PanelAnimator_t918022618 * ___anim_2;
	// TMPro.TextMeshProUGUI PauseMenu::headerText
	TextMeshProUGUI_t529313277 * ___headerText_3;
	// TMPro.TextMeshProUGUI PauseMenu::timerText
	TextMeshProUGUI_t529313277 * ___timerText_4;
	// UnityEngine.GameObject PauseMenu::nextButton
	GameObject_t1113636619 * ___nextButton_5;

public:
	inline static int32_t get_offset_of_anim_2() { return static_cast<int32_t>(offsetof(PauseMenu_t3916167947, ___anim_2)); }
	inline PanelAnimator_t918022618 * get_anim_2() const { return ___anim_2; }
	inline PanelAnimator_t918022618 ** get_address_of_anim_2() { return &___anim_2; }
	inline void set_anim_2(PanelAnimator_t918022618 * value)
	{
		___anim_2 = value;
		Il2CppCodeGenWriteBarrier((&___anim_2), value);
	}

	inline static int32_t get_offset_of_headerText_3() { return static_cast<int32_t>(offsetof(PauseMenu_t3916167947, ___headerText_3)); }
	inline TextMeshProUGUI_t529313277 * get_headerText_3() const { return ___headerText_3; }
	inline TextMeshProUGUI_t529313277 ** get_address_of_headerText_3() { return &___headerText_3; }
	inline void set_headerText_3(TextMeshProUGUI_t529313277 * value)
	{
		___headerText_3 = value;
		Il2CppCodeGenWriteBarrier((&___headerText_3), value);
	}

	inline static int32_t get_offset_of_timerText_4() { return static_cast<int32_t>(offsetof(PauseMenu_t3916167947, ___timerText_4)); }
	inline TextMeshProUGUI_t529313277 * get_timerText_4() const { return ___timerText_4; }
	inline TextMeshProUGUI_t529313277 ** get_address_of_timerText_4() { return &___timerText_4; }
	inline void set_timerText_4(TextMeshProUGUI_t529313277 * value)
	{
		___timerText_4 = value;
		Il2CppCodeGenWriteBarrier((&___timerText_4), value);
	}

	inline static int32_t get_offset_of_nextButton_5() { return static_cast<int32_t>(offsetof(PauseMenu_t3916167947, ___nextButton_5)); }
	inline GameObject_t1113636619 * get_nextButton_5() const { return ___nextButton_5; }
	inline GameObject_t1113636619 ** get_address_of_nextButton_5() { return &___nextButton_5; }
	inline void set_nextButton_5(GameObject_t1113636619 * value)
	{
		___nextButton_5 = value;
		Il2CppCodeGenWriteBarrier((&___nextButton_5), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PAUSEMENU_T3916167947_H
#ifndef SPRITEFADER_T713818650_H
#define SPRITEFADER_T713818650_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// SpriteFader
struct  SpriteFader_t713818650  : public MonoBehaviour_t3962482529
{
public:
	// UnityEngine.SpriteRenderer[] SpriteFader::sprites
	SpriteRendererU5BU5D_t911335936* ___sprites_2;
	// System.Boolean SpriteFader::fadeIn
	bool ___fadeIn_3;
	// System.Boolean SpriteFader::fadeOut
	bool ___fadeOut_4;
	// System.Boolean SpriteFader::disableOnFinish
	bool ___disableOnFinish_5;
	// System.Single SpriteFader::speed
	float ___speed_6;
	// System.Single SpriteFader::t
	float ___t_7;

public:
	inline static int32_t get_offset_of_sprites_2() { return static_cast<int32_t>(offsetof(SpriteFader_t713818650, ___sprites_2)); }
	inline SpriteRendererU5BU5D_t911335936* get_sprites_2() const { return ___sprites_2; }
	inline SpriteRendererU5BU5D_t911335936** get_address_of_sprites_2() { return &___sprites_2; }
	inline void set_sprites_2(SpriteRendererU5BU5D_t911335936* value)
	{
		___sprites_2 = value;
		Il2CppCodeGenWriteBarrier((&___sprites_2), value);
	}

	inline static int32_t get_offset_of_fadeIn_3() { return static_cast<int32_t>(offsetof(SpriteFader_t713818650, ___fadeIn_3)); }
	inline bool get_fadeIn_3() const { return ___fadeIn_3; }
	inline bool* get_address_of_fadeIn_3() { return &___fadeIn_3; }
	inline void set_fadeIn_3(bool value)
	{
		___fadeIn_3 = value;
	}

	inline static int32_t get_offset_of_fadeOut_4() { return static_cast<int32_t>(offsetof(SpriteFader_t713818650, ___fadeOut_4)); }
	inline bool get_fadeOut_4() const { return ___fadeOut_4; }
	inline bool* get_address_of_fadeOut_4() { return &___fadeOut_4; }
	inline void set_fadeOut_4(bool value)
	{
		___fadeOut_4 = value;
	}

	inline static int32_t get_offset_of_disableOnFinish_5() { return static_cast<int32_t>(offsetof(SpriteFader_t713818650, ___disableOnFinish_5)); }
	inline bool get_disableOnFinish_5() const { return ___disableOnFinish_5; }
	inline bool* get_address_of_disableOnFinish_5() { return &___disableOnFinish_5; }
	inline void set_disableOnFinish_5(bool value)
	{
		___disableOnFinish_5 = value;
	}

	inline static int32_t get_offset_of_speed_6() { return static_cast<int32_t>(offsetof(SpriteFader_t713818650, ___speed_6)); }
	inline float get_speed_6() const { return ___speed_6; }
	inline float* get_address_of_speed_6() { return &___speed_6; }
	inline void set_speed_6(float value)
	{
		___speed_6 = value;
	}

	inline static int32_t get_offset_of_t_7() { return static_cast<int32_t>(offsetof(SpriteFader_t713818650, ___t_7)); }
	inline float get_t_7() const { return ___t_7; }
	inline float* get_address_of_t_7() { return &___t_7; }
	inline void set_t_7(float value)
	{
		___t_7 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SPRITEFADER_T713818650_H
#ifndef SPRITESHADOW_T829501545_H
#define SPRITESHADOW_T829501545_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// SpriteShadow
struct  SpriteShadow_t829501545  : public MonoBehaviour_t3962482529
{
public:
	// UnityEngine.Transform SpriteShadow::spriteTransform
	Transform_t3600365921 * ___spriteTransform_2;
	// UnityEngine.Vector2 SpriteShadow::offset
	Vector2_t2156229523  ___offset_3;
	// System.Boolean SpriteShadow::mirrorScale
	bool ___mirrorScale_4;
	// System.Boolean SpriteShadow::lockRotation
	bool ___lockRotation_5;
	// UnityEngine.Vector3 SpriteShadow::lockedRotation
	Vector3_t3722313464  ___lockedRotation_6;

public:
	inline static int32_t get_offset_of_spriteTransform_2() { return static_cast<int32_t>(offsetof(SpriteShadow_t829501545, ___spriteTransform_2)); }
	inline Transform_t3600365921 * get_spriteTransform_2() const { return ___spriteTransform_2; }
	inline Transform_t3600365921 ** get_address_of_spriteTransform_2() { return &___spriteTransform_2; }
	inline void set_spriteTransform_2(Transform_t3600365921 * value)
	{
		___spriteTransform_2 = value;
		Il2CppCodeGenWriteBarrier((&___spriteTransform_2), value);
	}

	inline static int32_t get_offset_of_offset_3() { return static_cast<int32_t>(offsetof(SpriteShadow_t829501545, ___offset_3)); }
	inline Vector2_t2156229523  get_offset_3() const { return ___offset_3; }
	inline Vector2_t2156229523 * get_address_of_offset_3() { return &___offset_3; }
	inline void set_offset_3(Vector2_t2156229523  value)
	{
		___offset_3 = value;
	}

	inline static int32_t get_offset_of_mirrorScale_4() { return static_cast<int32_t>(offsetof(SpriteShadow_t829501545, ___mirrorScale_4)); }
	inline bool get_mirrorScale_4() const { return ___mirrorScale_4; }
	inline bool* get_address_of_mirrorScale_4() { return &___mirrorScale_4; }
	inline void set_mirrorScale_4(bool value)
	{
		___mirrorScale_4 = value;
	}

	inline static int32_t get_offset_of_lockRotation_5() { return static_cast<int32_t>(offsetof(SpriteShadow_t829501545, ___lockRotation_5)); }
	inline bool get_lockRotation_5() const { return ___lockRotation_5; }
	inline bool* get_address_of_lockRotation_5() { return &___lockRotation_5; }
	inline void set_lockRotation_5(bool value)
	{
		___lockRotation_5 = value;
	}

	inline static int32_t get_offset_of_lockedRotation_6() { return static_cast<int32_t>(offsetof(SpriteShadow_t829501545, ___lockedRotation_6)); }
	inline Vector3_t3722313464  get_lockedRotation_6() const { return ___lockedRotation_6; }
	inline Vector3_t3722313464 * get_address_of_lockedRotation_6() { return &___lockedRotation_6; }
	inline void set_lockedRotation_6(Vector3_t3722313464  value)
	{
		___lockedRotation_6 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SPRITESHADOW_T829501545_H
#ifndef LEVELCOLLECTION_T2422035869_H
#define LEVELCOLLECTION_T2422035869_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// LevelCollection
struct  LevelCollection_t2422035869  : public MonoBehaviour_t3962482529
{
public:
	// System.Single LevelCollection::timedTilePercentage
	float ___timedTilePercentage_6;
	// LevelCollection/LevelPreset[] LevelCollection::levels
	LevelPresetU5BU5D_t629770153* ___levels_7;

public:
	inline static int32_t get_offset_of_timedTilePercentage_6() { return static_cast<int32_t>(offsetof(LevelCollection_t2422035869, ___timedTilePercentage_6)); }
	inline float get_timedTilePercentage_6() const { return ___timedTilePercentage_6; }
	inline float* get_address_of_timedTilePercentage_6() { return &___timedTilePercentage_6; }
	inline void set_timedTilePercentage_6(float value)
	{
		___timedTilePercentage_6 = value;
	}

	inline static int32_t get_offset_of_levels_7() { return static_cast<int32_t>(offsetof(LevelCollection_t2422035869, ___levels_7)); }
	inline LevelPresetU5BU5D_t629770153* get_levels_7() const { return ___levels_7; }
	inline LevelPresetU5BU5D_t629770153** get_address_of_levels_7() { return &___levels_7; }
	inline void set_levels_7(LevelPresetU5BU5D_t629770153* value)
	{
		___levels_7 = value;
		Il2CppCodeGenWriteBarrier((&___levels_7), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LEVELCOLLECTION_T2422035869_H
#ifndef UIMANAGER_T1042050227_H
#define UIMANAGER_T1042050227_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UIManager
struct  UIManager_t1042050227  : public MonoBehaviour_t3962482529
{
public:
	// GameController UIManager::gameController
	GameController_t2330501625 * ___gameController_2;
	// AdManager UIManager::adManager
	AdManager_t2410889370 * ___adManager_3;
	// PauseMenu UIManager::pauseMenu
	PauseMenu_t3916167947 * ___pauseMenu_4;

public:
	inline static int32_t get_offset_of_gameController_2() { return static_cast<int32_t>(offsetof(UIManager_t1042050227, ___gameController_2)); }
	inline GameController_t2330501625 * get_gameController_2() const { return ___gameController_2; }
	inline GameController_t2330501625 ** get_address_of_gameController_2() { return &___gameController_2; }
	inline void set_gameController_2(GameController_t2330501625 * value)
	{
		___gameController_2 = value;
		Il2CppCodeGenWriteBarrier((&___gameController_2), value);
	}

	inline static int32_t get_offset_of_adManager_3() { return static_cast<int32_t>(offsetof(UIManager_t1042050227, ___adManager_3)); }
	inline AdManager_t2410889370 * get_adManager_3() const { return ___adManager_3; }
	inline AdManager_t2410889370 ** get_address_of_adManager_3() { return &___adManager_3; }
	inline void set_adManager_3(AdManager_t2410889370 * value)
	{
		___adManager_3 = value;
		Il2CppCodeGenWriteBarrier((&___adManager_3), value);
	}

	inline static int32_t get_offset_of_pauseMenu_4() { return static_cast<int32_t>(offsetof(UIManager_t1042050227, ___pauseMenu_4)); }
	inline PauseMenu_t3916167947 * get_pauseMenu_4() const { return ___pauseMenu_4; }
	inline PauseMenu_t3916167947 ** get_address_of_pauseMenu_4() { return &___pauseMenu_4; }
	inline void set_pauseMenu_4(PauseMenu_t3916167947 * value)
	{
		___pauseMenu_4 = value;
		Il2CppCodeGenWriteBarrier((&___pauseMenu_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UIMANAGER_T1042050227_H
#ifndef TILECOLORCONTROLLER_T1573688495_H
#define TILECOLORCONTROLLER_T1573688495_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// TileColorController
struct  TileColorController_t1573688495  : public MonoBehaviour_t3962482529
{
public:
	// TileColorController/SpriteColor[] TileColorController::mainSprites
	SpriteColorU5BU5D_t2190272617* ___mainSprites_2;
	// TileColorController/SpriteColor[] TileColorController::shadowSprites
	SpriteColorU5BU5D_t2190272617* ___shadowSprites_3;
	// UnityEngine.ParticleSystem TileColorController::gameoverSparks
	ParticleSystem_t1800779281 * ___gameoverSparks_4;
	// UnityEngine.Color TileColorController::defaultLitColor
	Color_t2555686324  ___defaultLitColor_5;
	// UnityEngine.Color TileColorController::defaultUnlitColor
	Color_t2555686324  ___defaultUnlitColor_6;
	// UnityEngine.Color TileColorController::defaultLitHighlightColor
	Color_t2555686324  ___defaultLitHighlightColor_7;
	// UnityEngine.Color TileColorController::defaultUnlitHighlightColor
	Color_t2555686324  ___defaultUnlitHighlightColor_8;
	// Tile TileColorController::tile
	Tile_t2634157908 * ___tile_9;
	// System.Boolean TileColorController::isPowered
	bool ___isPowered_10;

public:
	inline static int32_t get_offset_of_mainSprites_2() { return static_cast<int32_t>(offsetof(TileColorController_t1573688495, ___mainSprites_2)); }
	inline SpriteColorU5BU5D_t2190272617* get_mainSprites_2() const { return ___mainSprites_2; }
	inline SpriteColorU5BU5D_t2190272617** get_address_of_mainSprites_2() { return &___mainSprites_2; }
	inline void set_mainSprites_2(SpriteColorU5BU5D_t2190272617* value)
	{
		___mainSprites_2 = value;
		Il2CppCodeGenWriteBarrier((&___mainSprites_2), value);
	}

	inline static int32_t get_offset_of_shadowSprites_3() { return static_cast<int32_t>(offsetof(TileColorController_t1573688495, ___shadowSprites_3)); }
	inline SpriteColorU5BU5D_t2190272617* get_shadowSprites_3() const { return ___shadowSprites_3; }
	inline SpriteColorU5BU5D_t2190272617** get_address_of_shadowSprites_3() { return &___shadowSprites_3; }
	inline void set_shadowSprites_3(SpriteColorU5BU5D_t2190272617* value)
	{
		___shadowSprites_3 = value;
		Il2CppCodeGenWriteBarrier((&___shadowSprites_3), value);
	}

	inline static int32_t get_offset_of_gameoverSparks_4() { return static_cast<int32_t>(offsetof(TileColorController_t1573688495, ___gameoverSparks_4)); }
	inline ParticleSystem_t1800779281 * get_gameoverSparks_4() const { return ___gameoverSparks_4; }
	inline ParticleSystem_t1800779281 ** get_address_of_gameoverSparks_4() { return &___gameoverSparks_4; }
	inline void set_gameoverSparks_4(ParticleSystem_t1800779281 * value)
	{
		___gameoverSparks_4 = value;
		Il2CppCodeGenWriteBarrier((&___gameoverSparks_4), value);
	}

	inline static int32_t get_offset_of_defaultLitColor_5() { return static_cast<int32_t>(offsetof(TileColorController_t1573688495, ___defaultLitColor_5)); }
	inline Color_t2555686324  get_defaultLitColor_5() const { return ___defaultLitColor_5; }
	inline Color_t2555686324 * get_address_of_defaultLitColor_5() { return &___defaultLitColor_5; }
	inline void set_defaultLitColor_5(Color_t2555686324  value)
	{
		___defaultLitColor_5 = value;
	}

	inline static int32_t get_offset_of_defaultUnlitColor_6() { return static_cast<int32_t>(offsetof(TileColorController_t1573688495, ___defaultUnlitColor_6)); }
	inline Color_t2555686324  get_defaultUnlitColor_6() const { return ___defaultUnlitColor_6; }
	inline Color_t2555686324 * get_address_of_defaultUnlitColor_6() { return &___defaultUnlitColor_6; }
	inline void set_defaultUnlitColor_6(Color_t2555686324  value)
	{
		___defaultUnlitColor_6 = value;
	}

	inline static int32_t get_offset_of_defaultLitHighlightColor_7() { return static_cast<int32_t>(offsetof(TileColorController_t1573688495, ___defaultLitHighlightColor_7)); }
	inline Color_t2555686324  get_defaultLitHighlightColor_7() const { return ___defaultLitHighlightColor_7; }
	inline Color_t2555686324 * get_address_of_defaultLitHighlightColor_7() { return &___defaultLitHighlightColor_7; }
	inline void set_defaultLitHighlightColor_7(Color_t2555686324  value)
	{
		___defaultLitHighlightColor_7 = value;
	}

	inline static int32_t get_offset_of_defaultUnlitHighlightColor_8() { return static_cast<int32_t>(offsetof(TileColorController_t1573688495, ___defaultUnlitHighlightColor_8)); }
	inline Color_t2555686324  get_defaultUnlitHighlightColor_8() const { return ___defaultUnlitHighlightColor_8; }
	inline Color_t2555686324 * get_address_of_defaultUnlitHighlightColor_8() { return &___defaultUnlitHighlightColor_8; }
	inline void set_defaultUnlitHighlightColor_8(Color_t2555686324  value)
	{
		___defaultUnlitHighlightColor_8 = value;
	}

	inline static int32_t get_offset_of_tile_9() { return static_cast<int32_t>(offsetof(TileColorController_t1573688495, ___tile_9)); }
	inline Tile_t2634157908 * get_tile_9() const { return ___tile_9; }
	inline Tile_t2634157908 ** get_address_of_tile_9() { return &___tile_9; }
	inline void set_tile_9(Tile_t2634157908 * value)
	{
		___tile_9 = value;
		Il2CppCodeGenWriteBarrier((&___tile_9), value);
	}

	inline static int32_t get_offset_of_isPowered_10() { return static_cast<int32_t>(offsetof(TileColorController_t1573688495, ___isPowered_10)); }
	inline bool get_isPowered_10() const { return ___isPowered_10; }
	inline bool* get_address_of_isPowered_10() { return &___isPowered_10; }
	inline void set_isPowered_10(bool value)
	{
		___isPowered_10 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TILECOLORCONTROLLER_T1573688495_H
#ifndef GAMECONTROLLER_T2330501625_H
#define GAMECONTROLLER_T2330501625_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GameController
struct  GameController_t2330501625  : public MonoBehaviour_t3962482529
{
public:
	// WorldController GameController::worldController
	WorldController_t23517691 * ___worldController_2;
	// TileController GameController::tileController
	TileController_t1073589649 * ___tileController_3;
	// TimedTileController GameController::timedTileController
	TimedTileController_t3243845658 * ___timedTileController_4;
	// CameraController GameController::cameraController
	CameraController_t3346819214 * ___cameraController_5;
	// UIManager GameController::uiManager
	UIManager_t1042050227 * ___uiManager_6;
	// PlayerInputController GameController::playerInput
	PlayerInputController_t3825146532 * ___playerInput_7;
	// LevelCollection GameController::levelCollection
	LevelCollection_t2422035869 * ___levelCollection_8;
	// LevelInfo GameController::curLevel
	LevelInfo_t1513202700 * ___curLevel_10;
	// System.Int32 GameController::LevelCount
	int32_t ___LevelCount_11;

public:
	inline static int32_t get_offset_of_worldController_2() { return static_cast<int32_t>(offsetof(GameController_t2330501625, ___worldController_2)); }
	inline WorldController_t23517691 * get_worldController_2() const { return ___worldController_2; }
	inline WorldController_t23517691 ** get_address_of_worldController_2() { return &___worldController_2; }
	inline void set_worldController_2(WorldController_t23517691 * value)
	{
		___worldController_2 = value;
		Il2CppCodeGenWriteBarrier((&___worldController_2), value);
	}

	inline static int32_t get_offset_of_tileController_3() { return static_cast<int32_t>(offsetof(GameController_t2330501625, ___tileController_3)); }
	inline TileController_t1073589649 * get_tileController_3() const { return ___tileController_3; }
	inline TileController_t1073589649 ** get_address_of_tileController_3() { return &___tileController_3; }
	inline void set_tileController_3(TileController_t1073589649 * value)
	{
		___tileController_3 = value;
		Il2CppCodeGenWriteBarrier((&___tileController_3), value);
	}

	inline static int32_t get_offset_of_timedTileController_4() { return static_cast<int32_t>(offsetof(GameController_t2330501625, ___timedTileController_4)); }
	inline TimedTileController_t3243845658 * get_timedTileController_4() const { return ___timedTileController_4; }
	inline TimedTileController_t3243845658 ** get_address_of_timedTileController_4() { return &___timedTileController_4; }
	inline void set_timedTileController_4(TimedTileController_t3243845658 * value)
	{
		___timedTileController_4 = value;
		Il2CppCodeGenWriteBarrier((&___timedTileController_4), value);
	}

	inline static int32_t get_offset_of_cameraController_5() { return static_cast<int32_t>(offsetof(GameController_t2330501625, ___cameraController_5)); }
	inline CameraController_t3346819214 * get_cameraController_5() const { return ___cameraController_5; }
	inline CameraController_t3346819214 ** get_address_of_cameraController_5() { return &___cameraController_5; }
	inline void set_cameraController_5(CameraController_t3346819214 * value)
	{
		___cameraController_5 = value;
		Il2CppCodeGenWriteBarrier((&___cameraController_5), value);
	}

	inline static int32_t get_offset_of_uiManager_6() { return static_cast<int32_t>(offsetof(GameController_t2330501625, ___uiManager_6)); }
	inline UIManager_t1042050227 * get_uiManager_6() const { return ___uiManager_6; }
	inline UIManager_t1042050227 ** get_address_of_uiManager_6() { return &___uiManager_6; }
	inline void set_uiManager_6(UIManager_t1042050227 * value)
	{
		___uiManager_6 = value;
		Il2CppCodeGenWriteBarrier((&___uiManager_6), value);
	}

	inline static int32_t get_offset_of_playerInput_7() { return static_cast<int32_t>(offsetof(GameController_t2330501625, ___playerInput_7)); }
	inline PlayerInputController_t3825146532 * get_playerInput_7() const { return ___playerInput_7; }
	inline PlayerInputController_t3825146532 ** get_address_of_playerInput_7() { return &___playerInput_7; }
	inline void set_playerInput_7(PlayerInputController_t3825146532 * value)
	{
		___playerInput_7 = value;
		Il2CppCodeGenWriteBarrier((&___playerInput_7), value);
	}

	inline static int32_t get_offset_of_levelCollection_8() { return static_cast<int32_t>(offsetof(GameController_t2330501625, ___levelCollection_8)); }
	inline LevelCollection_t2422035869 * get_levelCollection_8() const { return ___levelCollection_8; }
	inline LevelCollection_t2422035869 ** get_address_of_levelCollection_8() { return &___levelCollection_8; }
	inline void set_levelCollection_8(LevelCollection_t2422035869 * value)
	{
		___levelCollection_8 = value;
		Il2CppCodeGenWriteBarrier((&___levelCollection_8), value);
	}

	inline static int32_t get_offset_of_curLevel_10() { return static_cast<int32_t>(offsetof(GameController_t2330501625, ___curLevel_10)); }
	inline LevelInfo_t1513202700 * get_curLevel_10() const { return ___curLevel_10; }
	inline LevelInfo_t1513202700 ** get_address_of_curLevel_10() { return &___curLevel_10; }
	inline void set_curLevel_10(LevelInfo_t1513202700 * value)
	{
		___curLevel_10 = value;
		Il2CppCodeGenWriteBarrier((&___curLevel_10), value);
	}

	inline static int32_t get_offset_of_LevelCount_11() { return static_cast<int32_t>(offsetof(GameController_t2330501625, ___LevelCount_11)); }
	inline int32_t get_LevelCount_11() const { return ___LevelCount_11; }
	inline int32_t* get_address_of_LevelCount_11() { return &___LevelCount_11; }
	inline void set_LevelCount_11(int32_t value)
	{
		___LevelCount_11 = value;
	}
};

struct GameController_t2330501625_StaticFields
{
public:
	// GameController GameController::Instance
	GameController_t2330501625 * ___Instance_9;
	// System.Single GameController::CurrentLevelTime
	float ___CurrentLevelTime_12;
	// System.Boolean GameController::GameOver
	bool ___GameOver_13;

public:
	inline static int32_t get_offset_of_Instance_9() { return static_cast<int32_t>(offsetof(GameController_t2330501625_StaticFields, ___Instance_9)); }
	inline GameController_t2330501625 * get_Instance_9() const { return ___Instance_9; }
	inline GameController_t2330501625 ** get_address_of_Instance_9() { return &___Instance_9; }
	inline void set_Instance_9(GameController_t2330501625 * value)
	{
		___Instance_9 = value;
		Il2CppCodeGenWriteBarrier((&___Instance_9), value);
	}

	inline static int32_t get_offset_of_CurrentLevelTime_12() { return static_cast<int32_t>(offsetof(GameController_t2330501625_StaticFields, ___CurrentLevelTime_12)); }
	inline float get_CurrentLevelTime_12() const { return ___CurrentLevelTime_12; }
	inline float* get_address_of_CurrentLevelTime_12() { return &___CurrentLevelTime_12; }
	inline void set_CurrentLevelTime_12(float value)
	{
		___CurrentLevelTime_12 = value;
	}

	inline static int32_t get_offset_of_GameOver_13() { return static_cast<int32_t>(offsetof(GameController_t2330501625_StaticFields, ___GameOver_13)); }
	inline bool get_GameOver_13() const { return ___GameOver_13; }
	inline bool* get_address_of_GameOver_13() { return &___GameOver_13; }
	inline void set_GameOver_13(bool value)
	{
		___GameOver_13 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GAMECONTROLLER_T2330501625_H
#ifndef NOTIFICATIONCENTER_T2218695229_H
#define NOTIFICATIONCENTER_T2218695229_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// NotificationCenter
struct  NotificationCenter_t2218695229  : public MonoBehaviour_t3962482529
{
public:
	// System.Collections.Hashtable NotificationCenter::notifications
	Hashtable_t1853889766 * ___notifications_3;

public:
	inline static int32_t get_offset_of_notifications_3() { return static_cast<int32_t>(offsetof(NotificationCenter_t2218695229, ___notifications_3)); }
	inline Hashtable_t1853889766 * get_notifications_3() const { return ___notifications_3; }
	inline Hashtable_t1853889766 ** get_address_of_notifications_3() { return &___notifications_3; }
	inline void set_notifications_3(Hashtable_t1853889766 * value)
	{
		___notifications_3 = value;
		Il2CppCodeGenWriteBarrier((&___notifications_3), value);
	}
};

struct NotificationCenter_t2218695229_StaticFields
{
public:
	// NotificationCenter NotificationCenter::defaultCenter
	NotificationCenter_t2218695229 * ___defaultCenter_2;

public:
	inline static int32_t get_offset_of_defaultCenter_2() { return static_cast<int32_t>(offsetof(NotificationCenter_t2218695229_StaticFields, ___defaultCenter_2)); }
	inline NotificationCenter_t2218695229 * get_defaultCenter_2() const { return ___defaultCenter_2; }
	inline NotificationCenter_t2218695229 ** get_address_of_defaultCenter_2() { return &___defaultCenter_2; }
	inline void set_defaultCenter_2(NotificationCenter_t2218695229 * value)
	{
		___defaultCenter_2 = value;
		Il2CppCodeGenWriteBarrier((&___defaultCenter_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NOTIFICATIONCENTER_T2218695229_H
#ifndef TIMEDTILECONTROLLER_T3243845658_H
#define TIMEDTILECONTROLLER_T3243845658_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// TimedTileController
struct  TimedTileController_t3243845658  : public MonoBehaviour_t3962482529
{
public:
	// TileController TimedTileController::tileController
	TileController_t1073589649 * ___tileController_2;
	// System.Collections.Generic.List`1<Tile> TimedTileController::timedTiles
	List_1_t4106232650 * ___timedTiles_3;
	// LevelInfo TimedTileController::levelInfo
	LevelInfo_t1513202700 * ___levelInfo_4;
	// System.Int32 TimedTileController::rotateDelay
	int32_t ___rotateDelay_5;
	// System.Int32 TimedTileController::toRotateIndex
	int32_t ___toRotateIndex_6;

public:
	inline static int32_t get_offset_of_tileController_2() { return static_cast<int32_t>(offsetof(TimedTileController_t3243845658, ___tileController_2)); }
	inline TileController_t1073589649 * get_tileController_2() const { return ___tileController_2; }
	inline TileController_t1073589649 ** get_address_of_tileController_2() { return &___tileController_2; }
	inline void set_tileController_2(TileController_t1073589649 * value)
	{
		___tileController_2 = value;
		Il2CppCodeGenWriteBarrier((&___tileController_2), value);
	}

	inline static int32_t get_offset_of_timedTiles_3() { return static_cast<int32_t>(offsetof(TimedTileController_t3243845658, ___timedTiles_3)); }
	inline List_1_t4106232650 * get_timedTiles_3() const { return ___timedTiles_3; }
	inline List_1_t4106232650 ** get_address_of_timedTiles_3() { return &___timedTiles_3; }
	inline void set_timedTiles_3(List_1_t4106232650 * value)
	{
		___timedTiles_3 = value;
		Il2CppCodeGenWriteBarrier((&___timedTiles_3), value);
	}

	inline static int32_t get_offset_of_levelInfo_4() { return static_cast<int32_t>(offsetof(TimedTileController_t3243845658, ___levelInfo_4)); }
	inline LevelInfo_t1513202700 * get_levelInfo_4() const { return ___levelInfo_4; }
	inline LevelInfo_t1513202700 ** get_address_of_levelInfo_4() { return &___levelInfo_4; }
	inline void set_levelInfo_4(LevelInfo_t1513202700 * value)
	{
		___levelInfo_4 = value;
		Il2CppCodeGenWriteBarrier((&___levelInfo_4), value);
	}

	inline static int32_t get_offset_of_rotateDelay_5() { return static_cast<int32_t>(offsetof(TimedTileController_t3243845658, ___rotateDelay_5)); }
	inline int32_t get_rotateDelay_5() const { return ___rotateDelay_5; }
	inline int32_t* get_address_of_rotateDelay_5() { return &___rotateDelay_5; }
	inline void set_rotateDelay_5(int32_t value)
	{
		___rotateDelay_5 = value;
	}

	inline static int32_t get_offset_of_toRotateIndex_6() { return static_cast<int32_t>(offsetof(TimedTileController_t3243845658, ___toRotateIndex_6)); }
	inline int32_t get_toRotateIndex_6() const { return ___toRotateIndex_6; }
	inline int32_t* get_address_of_toRotateIndex_6() { return &___toRotateIndex_6; }
	inline void set_toRotateIndex_6(int32_t value)
	{
		___toRotateIndex_6 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TIMEDTILECONTROLLER_T3243845658_H
#ifndef TUTORIALCONTROLLER_T1549000916_H
#define TUTORIALCONTROLLER_T1549000916_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// TutorialController
struct  TutorialController_t1549000916  : public MonoBehaviour_t3962482529
{
public:
	// SpriteFader[] TutorialController::tutorials
	SpriteFaderU5BU5D_t3833479231* ___tutorials_2;
	// System.Int32 TutorialController::i
	int32_t ___i_3;

public:
	inline static int32_t get_offset_of_tutorials_2() { return static_cast<int32_t>(offsetof(TutorialController_t1549000916, ___tutorials_2)); }
	inline SpriteFaderU5BU5D_t3833479231* get_tutorials_2() const { return ___tutorials_2; }
	inline SpriteFaderU5BU5D_t3833479231** get_address_of_tutorials_2() { return &___tutorials_2; }
	inline void set_tutorials_2(SpriteFaderU5BU5D_t3833479231* value)
	{
		___tutorials_2 = value;
		Il2CppCodeGenWriteBarrier((&___tutorials_2), value);
	}

	inline static int32_t get_offset_of_i_3() { return static_cast<int32_t>(offsetof(TutorialController_t1549000916, ___i_3)); }
	inline int32_t get_i_3() const { return ___i_3; }
	inline int32_t* get_address_of_i_3() { return &___i_3; }
	inline void set_i_3(int32_t value)
	{
		___i_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TUTORIALCONTROLLER_T1549000916_H
#ifndef ADMANAGER_T2410889370_H
#define ADMANAGER_T2410889370_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// AdManager
struct  AdManager_t2410889370  : public MonoBehaviour_t3962482529
{
public:
	// System.Single AdManager::cooldown
	float ___cooldown_3;

public:
	inline static int32_t get_offset_of_cooldown_3() { return static_cast<int32_t>(offsetof(AdManager_t2410889370, ___cooldown_3)); }
	inline float get_cooldown_3() const { return ___cooldown_3; }
	inline float* get_address_of_cooldown_3() { return &___cooldown_3; }
	inline void set_cooldown_3(float value)
	{
		___cooldown_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ADMANAGER_T2410889370_H
#ifndef WORLDCONTROLLER_T23517691_H
#define WORLDCONTROLLER_T23517691_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// WorldController
struct  WorldController_t23517691  : public MonoBehaviour_t3962482529
{
public:
	// UnityEngine.Transform WorldController::environmentRoot
	Transform_t3600365921 * ___environmentRoot_2;
	// UnityEngine.SpriteRenderer WorldController::background
	SpriteRenderer_t3235626157 * ___background_3;
	// TileController WorldController::tileController
	TileController_t1073589649 * ___tileController_4;
	// TileGrid WorldController::tileGrid
	TileGrid_t3345275584 * ___tileGrid_5;
	// System.Single WorldController::halfGridWidth
	float ___halfGridWidth_6;
	// System.Single WorldController::halfGridHeight
	float ___halfGridHeight_7;
	// LevelInfo WorldController::currentLevel
	LevelInfo_t1513202700 * ___currentLevel_8;
	// System.Boolean WorldController::levelEnded
	bool ___levelEnded_9;
	// System.Int32 WorldController::timeSinceLevelStart
	int32_t ___timeSinceLevelStart_10;

public:
	inline static int32_t get_offset_of_environmentRoot_2() { return static_cast<int32_t>(offsetof(WorldController_t23517691, ___environmentRoot_2)); }
	inline Transform_t3600365921 * get_environmentRoot_2() const { return ___environmentRoot_2; }
	inline Transform_t3600365921 ** get_address_of_environmentRoot_2() { return &___environmentRoot_2; }
	inline void set_environmentRoot_2(Transform_t3600365921 * value)
	{
		___environmentRoot_2 = value;
		Il2CppCodeGenWriteBarrier((&___environmentRoot_2), value);
	}

	inline static int32_t get_offset_of_background_3() { return static_cast<int32_t>(offsetof(WorldController_t23517691, ___background_3)); }
	inline SpriteRenderer_t3235626157 * get_background_3() const { return ___background_3; }
	inline SpriteRenderer_t3235626157 ** get_address_of_background_3() { return &___background_3; }
	inline void set_background_3(SpriteRenderer_t3235626157 * value)
	{
		___background_3 = value;
		Il2CppCodeGenWriteBarrier((&___background_3), value);
	}

	inline static int32_t get_offset_of_tileController_4() { return static_cast<int32_t>(offsetof(WorldController_t23517691, ___tileController_4)); }
	inline TileController_t1073589649 * get_tileController_4() const { return ___tileController_4; }
	inline TileController_t1073589649 ** get_address_of_tileController_4() { return &___tileController_4; }
	inline void set_tileController_4(TileController_t1073589649 * value)
	{
		___tileController_4 = value;
		Il2CppCodeGenWriteBarrier((&___tileController_4), value);
	}

	inline static int32_t get_offset_of_tileGrid_5() { return static_cast<int32_t>(offsetof(WorldController_t23517691, ___tileGrid_5)); }
	inline TileGrid_t3345275584 * get_tileGrid_5() const { return ___tileGrid_5; }
	inline TileGrid_t3345275584 ** get_address_of_tileGrid_5() { return &___tileGrid_5; }
	inline void set_tileGrid_5(TileGrid_t3345275584 * value)
	{
		___tileGrid_5 = value;
		Il2CppCodeGenWriteBarrier((&___tileGrid_5), value);
	}

	inline static int32_t get_offset_of_halfGridWidth_6() { return static_cast<int32_t>(offsetof(WorldController_t23517691, ___halfGridWidth_6)); }
	inline float get_halfGridWidth_6() const { return ___halfGridWidth_6; }
	inline float* get_address_of_halfGridWidth_6() { return &___halfGridWidth_6; }
	inline void set_halfGridWidth_6(float value)
	{
		___halfGridWidth_6 = value;
	}

	inline static int32_t get_offset_of_halfGridHeight_7() { return static_cast<int32_t>(offsetof(WorldController_t23517691, ___halfGridHeight_7)); }
	inline float get_halfGridHeight_7() const { return ___halfGridHeight_7; }
	inline float* get_address_of_halfGridHeight_7() { return &___halfGridHeight_7; }
	inline void set_halfGridHeight_7(float value)
	{
		___halfGridHeight_7 = value;
	}

	inline static int32_t get_offset_of_currentLevel_8() { return static_cast<int32_t>(offsetof(WorldController_t23517691, ___currentLevel_8)); }
	inline LevelInfo_t1513202700 * get_currentLevel_8() const { return ___currentLevel_8; }
	inline LevelInfo_t1513202700 ** get_address_of_currentLevel_8() { return &___currentLevel_8; }
	inline void set_currentLevel_8(LevelInfo_t1513202700 * value)
	{
		___currentLevel_8 = value;
		Il2CppCodeGenWriteBarrier((&___currentLevel_8), value);
	}

	inline static int32_t get_offset_of_levelEnded_9() { return static_cast<int32_t>(offsetof(WorldController_t23517691, ___levelEnded_9)); }
	inline bool get_levelEnded_9() const { return ___levelEnded_9; }
	inline bool* get_address_of_levelEnded_9() { return &___levelEnded_9; }
	inline void set_levelEnded_9(bool value)
	{
		___levelEnded_9 = value;
	}

	inline static int32_t get_offset_of_timeSinceLevelStart_10() { return static_cast<int32_t>(offsetof(WorldController_t23517691, ___timeSinceLevelStart_10)); }
	inline int32_t get_timeSinceLevelStart_10() const { return ___timeSinceLevelStart_10; }
	inline int32_t* get_address_of_timeSinceLevelStart_10() { return &___timeSinceLevelStart_10; }
	inline void set_timeSinceLevelStart_10(int32_t value)
	{
		___timeSinceLevelStart_10 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // WORLDCONTROLLER_T23517691_H
#ifndef PANELANIMATOR_T918022618_H
#define PANELANIMATOR_T918022618_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PanelAnimator
struct  PanelAnimator_t918022618  : public MonoBehaviour_t3962482529
{
public:
	// UnityEngine.Animator PanelAnimator::anim
	Animator_t434523843 * ___anim_2;
	// UnityEngine.UI.Button PanelAnimator::OpenButton
	Button_t4055032469 * ___OpenButton_3;
	// System.Boolean PanelAnimator::isOpen
	bool ___isOpen_4;

public:
	inline static int32_t get_offset_of_anim_2() { return static_cast<int32_t>(offsetof(PanelAnimator_t918022618, ___anim_2)); }
	inline Animator_t434523843 * get_anim_2() const { return ___anim_2; }
	inline Animator_t434523843 ** get_address_of_anim_2() { return &___anim_2; }
	inline void set_anim_2(Animator_t434523843 * value)
	{
		___anim_2 = value;
		Il2CppCodeGenWriteBarrier((&___anim_2), value);
	}

	inline static int32_t get_offset_of_OpenButton_3() { return static_cast<int32_t>(offsetof(PanelAnimator_t918022618, ___OpenButton_3)); }
	inline Button_t4055032469 * get_OpenButton_3() const { return ___OpenButton_3; }
	inline Button_t4055032469 ** get_address_of_OpenButton_3() { return &___OpenButton_3; }
	inline void set_OpenButton_3(Button_t4055032469 * value)
	{
		___OpenButton_3 = value;
		Il2CppCodeGenWriteBarrier((&___OpenButton_3), value);
	}

	inline static int32_t get_offset_of_isOpen_4() { return static_cast<int32_t>(offsetof(PanelAnimator_t918022618, ___isOpen_4)); }
	inline bool get_isOpen_4() const { return ___isOpen_4; }
	inline bool* get_address_of_isOpen_4() { return &___isOpen_4; }
	inline void set_isOpen_4(bool value)
	{
		___isOpen_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PANELANIMATOR_T918022618_H
#ifndef TILEPREFABMANAGER_T293433569_H
#define TILEPREFABMANAGER_T293433569_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// TilePrefabManager
struct  TilePrefabManager_t293433569  : public MonoBehaviour_t3962482529
{
public:
	// UnityEngine.Transform[] TilePrefabManager::WirePrefabs
	TransformU5BU5D_t807237628* ___WirePrefabs_2;
	// UnityEngine.Transform[] TilePrefabManager::DecorationPrefabs
	TransformU5BU5D_t807237628* ___DecorationPrefabs_3;
	// UnityEngine.Transform TilePrefabManager::PowerSourcePrefab
	Transform_t3600365921 * ___PowerSourcePrefab_4;
	// UnityEngine.Transform TilePrefabManager::LampPrefab
	Transform_t3600365921 * ___LampPrefab_5;
	// System.Single TilePrefabManager::decorationChance
	float ___decorationChance_6;

public:
	inline static int32_t get_offset_of_WirePrefabs_2() { return static_cast<int32_t>(offsetof(TilePrefabManager_t293433569, ___WirePrefabs_2)); }
	inline TransformU5BU5D_t807237628* get_WirePrefabs_2() const { return ___WirePrefabs_2; }
	inline TransformU5BU5D_t807237628** get_address_of_WirePrefabs_2() { return &___WirePrefabs_2; }
	inline void set_WirePrefabs_2(TransformU5BU5D_t807237628* value)
	{
		___WirePrefabs_2 = value;
		Il2CppCodeGenWriteBarrier((&___WirePrefabs_2), value);
	}

	inline static int32_t get_offset_of_DecorationPrefabs_3() { return static_cast<int32_t>(offsetof(TilePrefabManager_t293433569, ___DecorationPrefabs_3)); }
	inline TransformU5BU5D_t807237628* get_DecorationPrefabs_3() const { return ___DecorationPrefabs_3; }
	inline TransformU5BU5D_t807237628** get_address_of_DecorationPrefabs_3() { return &___DecorationPrefabs_3; }
	inline void set_DecorationPrefabs_3(TransformU5BU5D_t807237628* value)
	{
		___DecorationPrefabs_3 = value;
		Il2CppCodeGenWriteBarrier((&___DecorationPrefabs_3), value);
	}

	inline static int32_t get_offset_of_PowerSourcePrefab_4() { return static_cast<int32_t>(offsetof(TilePrefabManager_t293433569, ___PowerSourcePrefab_4)); }
	inline Transform_t3600365921 * get_PowerSourcePrefab_4() const { return ___PowerSourcePrefab_4; }
	inline Transform_t3600365921 ** get_address_of_PowerSourcePrefab_4() { return &___PowerSourcePrefab_4; }
	inline void set_PowerSourcePrefab_4(Transform_t3600365921 * value)
	{
		___PowerSourcePrefab_4 = value;
		Il2CppCodeGenWriteBarrier((&___PowerSourcePrefab_4), value);
	}

	inline static int32_t get_offset_of_LampPrefab_5() { return static_cast<int32_t>(offsetof(TilePrefabManager_t293433569, ___LampPrefab_5)); }
	inline Transform_t3600365921 * get_LampPrefab_5() const { return ___LampPrefab_5; }
	inline Transform_t3600365921 ** get_address_of_LampPrefab_5() { return &___LampPrefab_5; }
	inline void set_LampPrefab_5(Transform_t3600365921 * value)
	{
		___LampPrefab_5 = value;
		Il2CppCodeGenWriteBarrier((&___LampPrefab_5), value);
	}

	inline static int32_t get_offset_of_decorationChance_6() { return static_cast<int32_t>(offsetof(TilePrefabManager_t293433569, ___decorationChance_6)); }
	inline float get_decorationChance_6() const { return ___decorationChance_6; }
	inline float* get_address_of_decorationChance_6() { return &___decorationChance_6; }
	inline void set_decorationChance_6(float value)
	{
		___decorationChance_6 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TILEPREFABMANAGER_T293433569_H
#ifndef CAMERACONTROLLER_T3346819214_H
#define CAMERACONTROLLER_T3346819214_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// CameraController
struct  CameraController_t3346819214  : public MonoBehaviour_t3962482529
{
public:
	// UnityEngine.Camera CameraController::cam
	Camera_t4157153871 * ___cam_2;
	// System.Single CameraController::zoomedOutPercentage
	float ___zoomedOutPercentage_3;
	// System.Single CameraController::viewMargin
	float ___viewMargin_4;
	// System.Single CameraController::targetOrthographicSize
	float ___targetOrthographicSize_5;
	// System.Single CameraController::zoomCooldown
	float ___zoomCooldown_6;
	// System.Single CameraController::moveDuration
	float ___moveDuration_7;
	// UnityEngine.Vector3 CameraController::targetPos
	Vector3_t3722313464  ___targetPos_8;
	// UnityEngine.Vector3 CameraController::velocity
	Vector3_t3722313464  ___velocity_9;

public:
	inline static int32_t get_offset_of_cam_2() { return static_cast<int32_t>(offsetof(CameraController_t3346819214, ___cam_2)); }
	inline Camera_t4157153871 * get_cam_2() const { return ___cam_2; }
	inline Camera_t4157153871 ** get_address_of_cam_2() { return &___cam_2; }
	inline void set_cam_2(Camera_t4157153871 * value)
	{
		___cam_2 = value;
		Il2CppCodeGenWriteBarrier((&___cam_2), value);
	}

	inline static int32_t get_offset_of_zoomedOutPercentage_3() { return static_cast<int32_t>(offsetof(CameraController_t3346819214, ___zoomedOutPercentage_3)); }
	inline float get_zoomedOutPercentage_3() const { return ___zoomedOutPercentage_3; }
	inline float* get_address_of_zoomedOutPercentage_3() { return &___zoomedOutPercentage_3; }
	inline void set_zoomedOutPercentage_3(float value)
	{
		___zoomedOutPercentage_3 = value;
	}

	inline static int32_t get_offset_of_viewMargin_4() { return static_cast<int32_t>(offsetof(CameraController_t3346819214, ___viewMargin_4)); }
	inline float get_viewMargin_4() const { return ___viewMargin_4; }
	inline float* get_address_of_viewMargin_4() { return &___viewMargin_4; }
	inline void set_viewMargin_4(float value)
	{
		___viewMargin_4 = value;
	}

	inline static int32_t get_offset_of_targetOrthographicSize_5() { return static_cast<int32_t>(offsetof(CameraController_t3346819214, ___targetOrthographicSize_5)); }
	inline float get_targetOrthographicSize_5() const { return ___targetOrthographicSize_5; }
	inline float* get_address_of_targetOrthographicSize_5() { return &___targetOrthographicSize_5; }
	inline void set_targetOrthographicSize_5(float value)
	{
		___targetOrthographicSize_5 = value;
	}

	inline static int32_t get_offset_of_zoomCooldown_6() { return static_cast<int32_t>(offsetof(CameraController_t3346819214, ___zoomCooldown_6)); }
	inline float get_zoomCooldown_6() const { return ___zoomCooldown_6; }
	inline float* get_address_of_zoomCooldown_6() { return &___zoomCooldown_6; }
	inline void set_zoomCooldown_6(float value)
	{
		___zoomCooldown_6 = value;
	}

	inline static int32_t get_offset_of_moveDuration_7() { return static_cast<int32_t>(offsetof(CameraController_t3346819214, ___moveDuration_7)); }
	inline float get_moveDuration_7() const { return ___moveDuration_7; }
	inline float* get_address_of_moveDuration_7() { return &___moveDuration_7; }
	inline void set_moveDuration_7(float value)
	{
		___moveDuration_7 = value;
	}

	inline static int32_t get_offset_of_targetPos_8() { return static_cast<int32_t>(offsetof(CameraController_t3346819214, ___targetPos_8)); }
	inline Vector3_t3722313464  get_targetPos_8() const { return ___targetPos_8; }
	inline Vector3_t3722313464 * get_address_of_targetPos_8() { return &___targetPos_8; }
	inline void set_targetPos_8(Vector3_t3722313464  value)
	{
		___targetPos_8 = value;
	}

	inline static int32_t get_offset_of_velocity_9() { return static_cast<int32_t>(offsetof(CameraController_t3346819214, ___velocity_9)); }
	inline Vector3_t3722313464  get_velocity_9() const { return ___velocity_9; }
	inline Vector3_t3722313464 * get_address_of_velocity_9() { return &___velocity_9; }
	inline void set_velocity_9(Vector3_t3722313464  value)
	{
		___velocity_9 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CAMERACONTROLLER_T3346819214_H
#ifndef TILEZORDER_T3349568238_H
#define TILEZORDER_T3349568238_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// TileZOrder
struct  TileZOrder_t3349568238  : public MonoBehaviour_t3962482529
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TILEZORDER_T3349568238_H
#ifndef UIBEHAVIOUR_T3495933518_H
#define UIBEHAVIOUR_T3495933518_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.EventSystems.UIBehaviour
struct  UIBehaviour_t3495933518  : public MonoBehaviour_t3962482529
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UIBEHAVIOUR_T3495933518_H
#ifndef PLAYERINPUTCONTROLLER_T3825146532_H
#define PLAYERINPUTCONTROLLER_T3825146532_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PlayerInputController
struct  PlayerInputController_t3825146532  : public MonoBehaviour_t3962482529
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PLAYERINPUTCONTROLLER_T3825146532_H
#ifndef GRAPHIC_T1660335611_H
#define GRAPHIC_T1660335611_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.Graphic
struct  Graphic_t1660335611  : public UIBehaviour_t3495933518
{
public:
	// UnityEngine.Material UnityEngine.UI.Graphic::m_Material
	Material_t340375123 * ___m_Material_4;
	// UnityEngine.Color UnityEngine.UI.Graphic::m_Color
	Color_t2555686324  ___m_Color_5;
	// System.Boolean UnityEngine.UI.Graphic::m_RaycastTarget
	bool ___m_RaycastTarget_6;
	// UnityEngine.RectTransform UnityEngine.UI.Graphic::m_RectTransform
	RectTransform_t3704657025 * ___m_RectTransform_7;
	// UnityEngine.CanvasRenderer UnityEngine.UI.Graphic::m_CanvasRender
	CanvasRenderer_t2598313366 * ___m_CanvasRender_8;
	// UnityEngine.Canvas UnityEngine.UI.Graphic::m_Canvas
	Canvas_t3310196443 * ___m_Canvas_9;
	// System.Boolean UnityEngine.UI.Graphic::m_VertsDirty
	bool ___m_VertsDirty_10;
	// System.Boolean UnityEngine.UI.Graphic::m_MaterialDirty
	bool ___m_MaterialDirty_11;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyLayoutCallback
	UnityAction_t3245792599 * ___m_OnDirtyLayoutCallback_12;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyVertsCallback
	UnityAction_t3245792599 * ___m_OnDirtyVertsCallback_13;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyMaterialCallback
	UnityAction_t3245792599 * ___m_OnDirtyMaterialCallback_14;
	// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween> UnityEngine.UI.Graphic::m_ColorTweenRunner
	TweenRunner_1_t3055525458 * ___m_ColorTweenRunner_17;
	// System.Boolean UnityEngine.UI.Graphic::<useLegacyMeshGeneration>k__BackingField
	bool ___U3CuseLegacyMeshGenerationU3Ek__BackingField_18;

public:
	inline static int32_t get_offset_of_m_Material_4() { return static_cast<int32_t>(offsetof(Graphic_t1660335611, ___m_Material_4)); }
	inline Material_t340375123 * get_m_Material_4() const { return ___m_Material_4; }
	inline Material_t340375123 ** get_address_of_m_Material_4() { return &___m_Material_4; }
	inline void set_m_Material_4(Material_t340375123 * value)
	{
		___m_Material_4 = value;
		Il2CppCodeGenWriteBarrier((&___m_Material_4), value);
	}

	inline static int32_t get_offset_of_m_Color_5() { return static_cast<int32_t>(offsetof(Graphic_t1660335611, ___m_Color_5)); }
	inline Color_t2555686324  get_m_Color_5() const { return ___m_Color_5; }
	inline Color_t2555686324 * get_address_of_m_Color_5() { return &___m_Color_5; }
	inline void set_m_Color_5(Color_t2555686324  value)
	{
		___m_Color_5 = value;
	}

	inline static int32_t get_offset_of_m_RaycastTarget_6() { return static_cast<int32_t>(offsetof(Graphic_t1660335611, ___m_RaycastTarget_6)); }
	inline bool get_m_RaycastTarget_6() const { return ___m_RaycastTarget_6; }
	inline bool* get_address_of_m_RaycastTarget_6() { return &___m_RaycastTarget_6; }
	inline void set_m_RaycastTarget_6(bool value)
	{
		___m_RaycastTarget_6 = value;
	}

	inline static int32_t get_offset_of_m_RectTransform_7() { return static_cast<int32_t>(offsetof(Graphic_t1660335611, ___m_RectTransform_7)); }
	inline RectTransform_t3704657025 * get_m_RectTransform_7() const { return ___m_RectTransform_7; }
	inline RectTransform_t3704657025 ** get_address_of_m_RectTransform_7() { return &___m_RectTransform_7; }
	inline void set_m_RectTransform_7(RectTransform_t3704657025 * value)
	{
		___m_RectTransform_7 = value;
		Il2CppCodeGenWriteBarrier((&___m_RectTransform_7), value);
	}

	inline static int32_t get_offset_of_m_CanvasRender_8() { return static_cast<int32_t>(offsetof(Graphic_t1660335611, ___m_CanvasRender_8)); }
	inline CanvasRenderer_t2598313366 * get_m_CanvasRender_8() const { return ___m_CanvasRender_8; }
	inline CanvasRenderer_t2598313366 ** get_address_of_m_CanvasRender_8() { return &___m_CanvasRender_8; }
	inline void set_m_CanvasRender_8(CanvasRenderer_t2598313366 * value)
	{
		___m_CanvasRender_8 = value;
		Il2CppCodeGenWriteBarrier((&___m_CanvasRender_8), value);
	}

	inline static int32_t get_offset_of_m_Canvas_9() { return static_cast<int32_t>(offsetof(Graphic_t1660335611, ___m_Canvas_9)); }
	inline Canvas_t3310196443 * get_m_Canvas_9() const { return ___m_Canvas_9; }
	inline Canvas_t3310196443 ** get_address_of_m_Canvas_9() { return &___m_Canvas_9; }
	inline void set_m_Canvas_9(Canvas_t3310196443 * value)
	{
		___m_Canvas_9 = value;
		Il2CppCodeGenWriteBarrier((&___m_Canvas_9), value);
	}

	inline static int32_t get_offset_of_m_VertsDirty_10() { return static_cast<int32_t>(offsetof(Graphic_t1660335611, ___m_VertsDirty_10)); }
	inline bool get_m_VertsDirty_10() const { return ___m_VertsDirty_10; }
	inline bool* get_address_of_m_VertsDirty_10() { return &___m_VertsDirty_10; }
	inline void set_m_VertsDirty_10(bool value)
	{
		___m_VertsDirty_10 = value;
	}

	inline static int32_t get_offset_of_m_MaterialDirty_11() { return static_cast<int32_t>(offsetof(Graphic_t1660335611, ___m_MaterialDirty_11)); }
	inline bool get_m_MaterialDirty_11() const { return ___m_MaterialDirty_11; }
	inline bool* get_address_of_m_MaterialDirty_11() { return &___m_MaterialDirty_11; }
	inline void set_m_MaterialDirty_11(bool value)
	{
		___m_MaterialDirty_11 = value;
	}

	inline static int32_t get_offset_of_m_OnDirtyLayoutCallback_12() { return static_cast<int32_t>(offsetof(Graphic_t1660335611, ___m_OnDirtyLayoutCallback_12)); }
	inline UnityAction_t3245792599 * get_m_OnDirtyLayoutCallback_12() const { return ___m_OnDirtyLayoutCallback_12; }
	inline UnityAction_t3245792599 ** get_address_of_m_OnDirtyLayoutCallback_12() { return &___m_OnDirtyLayoutCallback_12; }
	inline void set_m_OnDirtyLayoutCallback_12(UnityAction_t3245792599 * value)
	{
		___m_OnDirtyLayoutCallback_12 = value;
		Il2CppCodeGenWriteBarrier((&___m_OnDirtyLayoutCallback_12), value);
	}

	inline static int32_t get_offset_of_m_OnDirtyVertsCallback_13() { return static_cast<int32_t>(offsetof(Graphic_t1660335611, ___m_OnDirtyVertsCallback_13)); }
	inline UnityAction_t3245792599 * get_m_OnDirtyVertsCallback_13() const { return ___m_OnDirtyVertsCallback_13; }
	inline UnityAction_t3245792599 ** get_address_of_m_OnDirtyVertsCallback_13() { return &___m_OnDirtyVertsCallback_13; }
	inline void set_m_OnDirtyVertsCallback_13(UnityAction_t3245792599 * value)
	{
		___m_OnDirtyVertsCallback_13 = value;
		Il2CppCodeGenWriteBarrier((&___m_OnDirtyVertsCallback_13), value);
	}

	inline static int32_t get_offset_of_m_OnDirtyMaterialCallback_14() { return static_cast<int32_t>(offsetof(Graphic_t1660335611, ___m_OnDirtyMaterialCallback_14)); }
	inline UnityAction_t3245792599 * get_m_OnDirtyMaterialCallback_14() const { return ___m_OnDirtyMaterialCallback_14; }
	inline UnityAction_t3245792599 ** get_address_of_m_OnDirtyMaterialCallback_14() { return &___m_OnDirtyMaterialCallback_14; }
	inline void set_m_OnDirtyMaterialCallback_14(UnityAction_t3245792599 * value)
	{
		___m_OnDirtyMaterialCallback_14 = value;
		Il2CppCodeGenWriteBarrier((&___m_OnDirtyMaterialCallback_14), value);
	}

	inline static int32_t get_offset_of_m_ColorTweenRunner_17() { return static_cast<int32_t>(offsetof(Graphic_t1660335611, ___m_ColorTweenRunner_17)); }
	inline TweenRunner_1_t3055525458 * get_m_ColorTweenRunner_17() const { return ___m_ColorTweenRunner_17; }
	inline TweenRunner_1_t3055525458 ** get_address_of_m_ColorTweenRunner_17() { return &___m_ColorTweenRunner_17; }
	inline void set_m_ColorTweenRunner_17(TweenRunner_1_t3055525458 * value)
	{
		___m_ColorTweenRunner_17 = value;
		Il2CppCodeGenWriteBarrier((&___m_ColorTweenRunner_17), value);
	}

	inline static int32_t get_offset_of_U3CuseLegacyMeshGenerationU3Ek__BackingField_18() { return static_cast<int32_t>(offsetof(Graphic_t1660335611, ___U3CuseLegacyMeshGenerationU3Ek__BackingField_18)); }
	inline bool get_U3CuseLegacyMeshGenerationU3Ek__BackingField_18() const { return ___U3CuseLegacyMeshGenerationU3Ek__BackingField_18; }
	inline bool* get_address_of_U3CuseLegacyMeshGenerationU3Ek__BackingField_18() { return &___U3CuseLegacyMeshGenerationU3Ek__BackingField_18; }
	inline void set_U3CuseLegacyMeshGenerationU3Ek__BackingField_18(bool value)
	{
		___U3CuseLegacyMeshGenerationU3Ek__BackingField_18 = value;
	}
};

struct Graphic_t1660335611_StaticFields
{
public:
	// UnityEngine.Material UnityEngine.UI.Graphic::s_DefaultUI
	Material_t340375123 * ___s_DefaultUI_2;
	// UnityEngine.Texture2D UnityEngine.UI.Graphic::s_WhiteTexture
	Texture2D_t3840446185 * ___s_WhiteTexture_3;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::s_Mesh
	Mesh_t3648964284 * ___s_Mesh_15;
	// UnityEngine.UI.VertexHelper UnityEngine.UI.Graphic::s_VertexHelper
	VertexHelper_t2453304189 * ___s_VertexHelper_16;

public:
	inline static int32_t get_offset_of_s_DefaultUI_2() { return static_cast<int32_t>(offsetof(Graphic_t1660335611_StaticFields, ___s_DefaultUI_2)); }
	inline Material_t340375123 * get_s_DefaultUI_2() const { return ___s_DefaultUI_2; }
	inline Material_t340375123 ** get_address_of_s_DefaultUI_2() { return &___s_DefaultUI_2; }
	inline void set_s_DefaultUI_2(Material_t340375123 * value)
	{
		___s_DefaultUI_2 = value;
		Il2CppCodeGenWriteBarrier((&___s_DefaultUI_2), value);
	}

	inline static int32_t get_offset_of_s_WhiteTexture_3() { return static_cast<int32_t>(offsetof(Graphic_t1660335611_StaticFields, ___s_WhiteTexture_3)); }
	inline Texture2D_t3840446185 * get_s_WhiteTexture_3() const { return ___s_WhiteTexture_3; }
	inline Texture2D_t3840446185 ** get_address_of_s_WhiteTexture_3() { return &___s_WhiteTexture_3; }
	inline void set_s_WhiteTexture_3(Texture2D_t3840446185 * value)
	{
		___s_WhiteTexture_3 = value;
		Il2CppCodeGenWriteBarrier((&___s_WhiteTexture_3), value);
	}

	inline static int32_t get_offset_of_s_Mesh_15() { return static_cast<int32_t>(offsetof(Graphic_t1660335611_StaticFields, ___s_Mesh_15)); }
	inline Mesh_t3648964284 * get_s_Mesh_15() const { return ___s_Mesh_15; }
	inline Mesh_t3648964284 ** get_address_of_s_Mesh_15() { return &___s_Mesh_15; }
	inline void set_s_Mesh_15(Mesh_t3648964284 * value)
	{
		___s_Mesh_15 = value;
		Il2CppCodeGenWriteBarrier((&___s_Mesh_15), value);
	}

	inline static int32_t get_offset_of_s_VertexHelper_16() { return static_cast<int32_t>(offsetof(Graphic_t1660335611_StaticFields, ___s_VertexHelper_16)); }
	inline VertexHelper_t2453304189 * get_s_VertexHelper_16() const { return ___s_VertexHelper_16; }
	inline VertexHelper_t2453304189 ** get_address_of_s_VertexHelper_16() { return &___s_VertexHelper_16; }
	inline void set_s_VertexHelper_16(VertexHelper_t2453304189 * value)
	{
		___s_VertexHelper_16 = value;
		Il2CppCodeGenWriteBarrier((&___s_VertexHelper_16), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GRAPHIC_T1660335611_H
#ifndef SELECTABLE_T3250028441_H
#define SELECTABLE_T3250028441_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.Selectable
struct  Selectable_t3250028441  : public UIBehaviour_t3495933518
{
public:
	// UnityEngine.UI.Navigation UnityEngine.UI.Selectable::m_Navigation
	Navigation_t3049316579  ___m_Navigation_3;
	// UnityEngine.UI.Selectable/Transition UnityEngine.UI.Selectable::m_Transition
	int32_t ___m_Transition_4;
	// UnityEngine.UI.ColorBlock UnityEngine.UI.Selectable::m_Colors
	ColorBlock_t2139031574  ___m_Colors_5;
	// UnityEngine.UI.SpriteState UnityEngine.UI.Selectable::m_SpriteState
	SpriteState_t1362986479  ___m_SpriteState_6;
	// UnityEngine.UI.AnimationTriggers UnityEngine.UI.Selectable::m_AnimationTriggers
	AnimationTriggers_t2532145056 * ___m_AnimationTriggers_7;
	// System.Boolean UnityEngine.UI.Selectable::m_Interactable
	bool ___m_Interactable_8;
	// UnityEngine.UI.Graphic UnityEngine.UI.Selectable::m_TargetGraphic
	Graphic_t1660335611 * ___m_TargetGraphic_9;
	// System.Boolean UnityEngine.UI.Selectable::m_GroupsAllowInteraction
	bool ___m_GroupsAllowInteraction_10;
	// UnityEngine.UI.Selectable/SelectionState UnityEngine.UI.Selectable::m_CurrentSelectionState
	int32_t ___m_CurrentSelectionState_11;
	// System.Boolean UnityEngine.UI.Selectable::<isPointerInside>k__BackingField
	bool ___U3CisPointerInsideU3Ek__BackingField_12;
	// System.Boolean UnityEngine.UI.Selectable::<isPointerDown>k__BackingField
	bool ___U3CisPointerDownU3Ek__BackingField_13;
	// System.Boolean UnityEngine.UI.Selectable::<hasSelection>k__BackingField
	bool ___U3ChasSelectionU3Ek__BackingField_14;
	// System.Collections.Generic.List`1<UnityEngine.CanvasGroup> UnityEngine.UI.Selectable::m_CanvasGroupCache
	List_1_t1260619206 * ___m_CanvasGroupCache_15;

public:
	inline static int32_t get_offset_of_m_Navigation_3() { return static_cast<int32_t>(offsetof(Selectable_t3250028441, ___m_Navigation_3)); }
	inline Navigation_t3049316579  get_m_Navigation_3() const { return ___m_Navigation_3; }
	inline Navigation_t3049316579 * get_address_of_m_Navigation_3() { return &___m_Navigation_3; }
	inline void set_m_Navigation_3(Navigation_t3049316579  value)
	{
		___m_Navigation_3 = value;
	}

	inline static int32_t get_offset_of_m_Transition_4() { return static_cast<int32_t>(offsetof(Selectable_t3250028441, ___m_Transition_4)); }
	inline int32_t get_m_Transition_4() const { return ___m_Transition_4; }
	inline int32_t* get_address_of_m_Transition_4() { return &___m_Transition_4; }
	inline void set_m_Transition_4(int32_t value)
	{
		___m_Transition_4 = value;
	}

	inline static int32_t get_offset_of_m_Colors_5() { return static_cast<int32_t>(offsetof(Selectable_t3250028441, ___m_Colors_5)); }
	inline ColorBlock_t2139031574  get_m_Colors_5() const { return ___m_Colors_5; }
	inline ColorBlock_t2139031574 * get_address_of_m_Colors_5() { return &___m_Colors_5; }
	inline void set_m_Colors_5(ColorBlock_t2139031574  value)
	{
		___m_Colors_5 = value;
	}

	inline static int32_t get_offset_of_m_SpriteState_6() { return static_cast<int32_t>(offsetof(Selectable_t3250028441, ___m_SpriteState_6)); }
	inline SpriteState_t1362986479  get_m_SpriteState_6() const { return ___m_SpriteState_6; }
	inline SpriteState_t1362986479 * get_address_of_m_SpriteState_6() { return &___m_SpriteState_6; }
	inline void set_m_SpriteState_6(SpriteState_t1362986479  value)
	{
		___m_SpriteState_6 = value;
	}

	inline static int32_t get_offset_of_m_AnimationTriggers_7() { return static_cast<int32_t>(offsetof(Selectable_t3250028441, ___m_AnimationTriggers_7)); }
	inline AnimationTriggers_t2532145056 * get_m_AnimationTriggers_7() const { return ___m_AnimationTriggers_7; }
	inline AnimationTriggers_t2532145056 ** get_address_of_m_AnimationTriggers_7() { return &___m_AnimationTriggers_7; }
	inline void set_m_AnimationTriggers_7(AnimationTriggers_t2532145056 * value)
	{
		___m_AnimationTriggers_7 = value;
		Il2CppCodeGenWriteBarrier((&___m_AnimationTriggers_7), value);
	}

	inline static int32_t get_offset_of_m_Interactable_8() { return static_cast<int32_t>(offsetof(Selectable_t3250028441, ___m_Interactable_8)); }
	inline bool get_m_Interactable_8() const { return ___m_Interactable_8; }
	inline bool* get_address_of_m_Interactable_8() { return &___m_Interactable_8; }
	inline void set_m_Interactable_8(bool value)
	{
		___m_Interactable_8 = value;
	}

	inline static int32_t get_offset_of_m_TargetGraphic_9() { return static_cast<int32_t>(offsetof(Selectable_t3250028441, ___m_TargetGraphic_9)); }
	inline Graphic_t1660335611 * get_m_TargetGraphic_9() const { return ___m_TargetGraphic_9; }
	inline Graphic_t1660335611 ** get_address_of_m_TargetGraphic_9() { return &___m_TargetGraphic_9; }
	inline void set_m_TargetGraphic_9(Graphic_t1660335611 * value)
	{
		___m_TargetGraphic_9 = value;
		Il2CppCodeGenWriteBarrier((&___m_TargetGraphic_9), value);
	}

	inline static int32_t get_offset_of_m_GroupsAllowInteraction_10() { return static_cast<int32_t>(offsetof(Selectable_t3250028441, ___m_GroupsAllowInteraction_10)); }
	inline bool get_m_GroupsAllowInteraction_10() const { return ___m_GroupsAllowInteraction_10; }
	inline bool* get_address_of_m_GroupsAllowInteraction_10() { return &___m_GroupsAllowInteraction_10; }
	inline void set_m_GroupsAllowInteraction_10(bool value)
	{
		___m_GroupsAllowInteraction_10 = value;
	}

	inline static int32_t get_offset_of_m_CurrentSelectionState_11() { return static_cast<int32_t>(offsetof(Selectable_t3250028441, ___m_CurrentSelectionState_11)); }
	inline int32_t get_m_CurrentSelectionState_11() const { return ___m_CurrentSelectionState_11; }
	inline int32_t* get_address_of_m_CurrentSelectionState_11() { return &___m_CurrentSelectionState_11; }
	inline void set_m_CurrentSelectionState_11(int32_t value)
	{
		___m_CurrentSelectionState_11 = value;
	}

	inline static int32_t get_offset_of_U3CisPointerInsideU3Ek__BackingField_12() { return static_cast<int32_t>(offsetof(Selectable_t3250028441, ___U3CisPointerInsideU3Ek__BackingField_12)); }
	inline bool get_U3CisPointerInsideU3Ek__BackingField_12() const { return ___U3CisPointerInsideU3Ek__BackingField_12; }
	inline bool* get_address_of_U3CisPointerInsideU3Ek__BackingField_12() { return &___U3CisPointerInsideU3Ek__BackingField_12; }
	inline void set_U3CisPointerInsideU3Ek__BackingField_12(bool value)
	{
		___U3CisPointerInsideU3Ek__BackingField_12 = value;
	}

	inline static int32_t get_offset_of_U3CisPointerDownU3Ek__BackingField_13() { return static_cast<int32_t>(offsetof(Selectable_t3250028441, ___U3CisPointerDownU3Ek__BackingField_13)); }
	inline bool get_U3CisPointerDownU3Ek__BackingField_13() const { return ___U3CisPointerDownU3Ek__BackingField_13; }
	inline bool* get_address_of_U3CisPointerDownU3Ek__BackingField_13() { return &___U3CisPointerDownU3Ek__BackingField_13; }
	inline void set_U3CisPointerDownU3Ek__BackingField_13(bool value)
	{
		___U3CisPointerDownU3Ek__BackingField_13 = value;
	}

	inline static int32_t get_offset_of_U3ChasSelectionU3Ek__BackingField_14() { return static_cast<int32_t>(offsetof(Selectable_t3250028441, ___U3ChasSelectionU3Ek__BackingField_14)); }
	inline bool get_U3ChasSelectionU3Ek__BackingField_14() const { return ___U3ChasSelectionU3Ek__BackingField_14; }
	inline bool* get_address_of_U3ChasSelectionU3Ek__BackingField_14() { return &___U3ChasSelectionU3Ek__BackingField_14; }
	inline void set_U3ChasSelectionU3Ek__BackingField_14(bool value)
	{
		___U3ChasSelectionU3Ek__BackingField_14 = value;
	}

	inline static int32_t get_offset_of_m_CanvasGroupCache_15() { return static_cast<int32_t>(offsetof(Selectable_t3250028441, ___m_CanvasGroupCache_15)); }
	inline List_1_t1260619206 * get_m_CanvasGroupCache_15() const { return ___m_CanvasGroupCache_15; }
	inline List_1_t1260619206 ** get_address_of_m_CanvasGroupCache_15() { return &___m_CanvasGroupCache_15; }
	inline void set_m_CanvasGroupCache_15(List_1_t1260619206 * value)
	{
		___m_CanvasGroupCache_15 = value;
		Il2CppCodeGenWriteBarrier((&___m_CanvasGroupCache_15), value);
	}
};

struct Selectable_t3250028441_StaticFields
{
public:
	// System.Collections.Generic.List`1<UnityEngine.UI.Selectable> UnityEngine.UI.Selectable::s_List
	List_1_t427135887 * ___s_List_2;

public:
	inline static int32_t get_offset_of_s_List_2() { return static_cast<int32_t>(offsetof(Selectable_t3250028441_StaticFields, ___s_List_2)); }
	inline List_1_t427135887 * get_s_List_2() const { return ___s_List_2; }
	inline List_1_t427135887 ** get_address_of_s_List_2() { return &___s_List_2; }
	inline void set_s_List_2(List_1_t427135887 * value)
	{
		___s_List_2 = value;
		Il2CppCodeGenWriteBarrier((&___s_List_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SELECTABLE_T3250028441_H
#ifndef EVENTSYSTEM_T1003666588_H
#define EVENTSYSTEM_T1003666588_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.EventSystems.EventSystem
struct  EventSystem_t1003666588  : public UIBehaviour_t3495933518
{
public:
	// System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseInputModule> UnityEngine.EventSystems.EventSystem::m_SystemInputModules
	List_1_t3491343620 * ___m_SystemInputModules_2;
	// UnityEngine.EventSystems.BaseInputModule UnityEngine.EventSystems.EventSystem::m_CurrentInputModule
	BaseInputModule_t2019268878 * ___m_CurrentInputModule_3;
	// UnityEngine.GameObject UnityEngine.EventSystems.EventSystem::m_FirstSelected
	GameObject_t1113636619 * ___m_FirstSelected_5;
	// System.Boolean UnityEngine.EventSystems.EventSystem::m_sendNavigationEvents
	bool ___m_sendNavigationEvents_6;
	// System.Int32 UnityEngine.EventSystems.EventSystem::m_DragThreshold
	int32_t ___m_DragThreshold_7;
	// UnityEngine.GameObject UnityEngine.EventSystems.EventSystem::m_CurrentSelected
	GameObject_t1113636619 * ___m_CurrentSelected_8;
	// System.Boolean UnityEngine.EventSystems.EventSystem::m_HasFocus
	bool ___m_HasFocus_9;
	// System.Boolean UnityEngine.EventSystems.EventSystem::m_SelectionGuard
	bool ___m_SelectionGuard_10;
	// UnityEngine.EventSystems.BaseEventData UnityEngine.EventSystems.EventSystem::m_DummyData
	BaseEventData_t3903027533 * ___m_DummyData_11;

public:
	inline static int32_t get_offset_of_m_SystemInputModules_2() { return static_cast<int32_t>(offsetof(EventSystem_t1003666588, ___m_SystemInputModules_2)); }
	inline List_1_t3491343620 * get_m_SystemInputModules_2() const { return ___m_SystemInputModules_2; }
	inline List_1_t3491343620 ** get_address_of_m_SystemInputModules_2() { return &___m_SystemInputModules_2; }
	inline void set_m_SystemInputModules_2(List_1_t3491343620 * value)
	{
		___m_SystemInputModules_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_SystemInputModules_2), value);
	}

	inline static int32_t get_offset_of_m_CurrentInputModule_3() { return static_cast<int32_t>(offsetof(EventSystem_t1003666588, ___m_CurrentInputModule_3)); }
	inline BaseInputModule_t2019268878 * get_m_CurrentInputModule_3() const { return ___m_CurrentInputModule_3; }
	inline BaseInputModule_t2019268878 ** get_address_of_m_CurrentInputModule_3() { return &___m_CurrentInputModule_3; }
	inline void set_m_CurrentInputModule_3(BaseInputModule_t2019268878 * value)
	{
		___m_CurrentInputModule_3 = value;
		Il2CppCodeGenWriteBarrier((&___m_CurrentInputModule_3), value);
	}

	inline static int32_t get_offset_of_m_FirstSelected_5() { return static_cast<int32_t>(offsetof(EventSystem_t1003666588, ___m_FirstSelected_5)); }
	inline GameObject_t1113636619 * get_m_FirstSelected_5() const { return ___m_FirstSelected_5; }
	inline GameObject_t1113636619 ** get_address_of_m_FirstSelected_5() { return &___m_FirstSelected_5; }
	inline void set_m_FirstSelected_5(GameObject_t1113636619 * value)
	{
		___m_FirstSelected_5 = value;
		Il2CppCodeGenWriteBarrier((&___m_FirstSelected_5), value);
	}

	inline static int32_t get_offset_of_m_sendNavigationEvents_6() { return static_cast<int32_t>(offsetof(EventSystem_t1003666588, ___m_sendNavigationEvents_6)); }
	inline bool get_m_sendNavigationEvents_6() const { return ___m_sendNavigationEvents_6; }
	inline bool* get_address_of_m_sendNavigationEvents_6() { return &___m_sendNavigationEvents_6; }
	inline void set_m_sendNavigationEvents_6(bool value)
	{
		___m_sendNavigationEvents_6 = value;
	}

	inline static int32_t get_offset_of_m_DragThreshold_7() { return static_cast<int32_t>(offsetof(EventSystem_t1003666588, ___m_DragThreshold_7)); }
	inline int32_t get_m_DragThreshold_7() const { return ___m_DragThreshold_7; }
	inline int32_t* get_address_of_m_DragThreshold_7() { return &___m_DragThreshold_7; }
	inline void set_m_DragThreshold_7(int32_t value)
	{
		___m_DragThreshold_7 = value;
	}

	inline static int32_t get_offset_of_m_CurrentSelected_8() { return static_cast<int32_t>(offsetof(EventSystem_t1003666588, ___m_CurrentSelected_8)); }
	inline GameObject_t1113636619 * get_m_CurrentSelected_8() const { return ___m_CurrentSelected_8; }
	inline GameObject_t1113636619 ** get_address_of_m_CurrentSelected_8() { return &___m_CurrentSelected_8; }
	inline void set_m_CurrentSelected_8(GameObject_t1113636619 * value)
	{
		___m_CurrentSelected_8 = value;
		Il2CppCodeGenWriteBarrier((&___m_CurrentSelected_8), value);
	}

	inline static int32_t get_offset_of_m_HasFocus_9() { return static_cast<int32_t>(offsetof(EventSystem_t1003666588, ___m_HasFocus_9)); }
	inline bool get_m_HasFocus_9() const { return ___m_HasFocus_9; }
	inline bool* get_address_of_m_HasFocus_9() { return &___m_HasFocus_9; }
	inline void set_m_HasFocus_9(bool value)
	{
		___m_HasFocus_9 = value;
	}

	inline static int32_t get_offset_of_m_SelectionGuard_10() { return static_cast<int32_t>(offsetof(EventSystem_t1003666588, ___m_SelectionGuard_10)); }
	inline bool get_m_SelectionGuard_10() const { return ___m_SelectionGuard_10; }
	inline bool* get_address_of_m_SelectionGuard_10() { return &___m_SelectionGuard_10; }
	inline void set_m_SelectionGuard_10(bool value)
	{
		___m_SelectionGuard_10 = value;
	}

	inline static int32_t get_offset_of_m_DummyData_11() { return static_cast<int32_t>(offsetof(EventSystem_t1003666588, ___m_DummyData_11)); }
	inline BaseEventData_t3903027533 * get_m_DummyData_11() const { return ___m_DummyData_11; }
	inline BaseEventData_t3903027533 ** get_address_of_m_DummyData_11() { return &___m_DummyData_11; }
	inline void set_m_DummyData_11(BaseEventData_t3903027533 * value)
	{
		___m_DummyData_11 = value;
		Il2CppCodeGenWriteBarrier((&___m_DummyData_11), value);
	}
};

struct EventSystem_t1003666588_StaticFields
{
public:
	// System.Collections.Generic.List`1<UnityEngine.EventSystems.EventSystem> UnityEngine.EventSystems.EventSystem::m_EventSystems
	List_1_t2475741330 * ___m_EventSystems_4;
	// System.Comparison`1<UnityEngine.EventSystems.RaycastResult> UnityEngine.EventSystems.EventSystem::s_RaycastComparer
	Comparison_1_t3135238028 * ___s_RaycastComparer_12;
	// System.Comparison`1<UnityEngine.EventSystems.RaycastResult> UnityEngine.EventSystems.EventSystem::<>f__mg$cache0
	Comparison_1_t3135238028 * ___U3CU3Ef__mgU24cache0_13;

public:
	inline static int32_t get_offset_of_m_EventSystems_4() { return static_cast<int32_t>(offsetof(EventSystem_t1003666588_StaticFields, ___m_EventSystems_4)); }
	inline List_1_t2475741330 * get_m_EventSystems_4() const { return ___m_EventSystems_4; }
	inline List_1_t2475741330 ** get_address_of_m_EventSystems_4() { return &___m_EventSystems_4; }
	inline void set_m_EventSystems_4(List_1_t2475741330 * value)
	{
		___m_EventSystems_4 = value;
		Il2CppCodeGenWriteBarrier((&___m_EventSystems_4), value);
	}

	inline static int32_t get_offset_of_s_RaycastComparer_12() { return static_cast<int32_t>(offsetof(EventSystem_t1003666588_StaticFields, ___s_RaycastComparer_12)); }
	inline Comparison_1_t3135238028 * get_s_RaycastComparer_12() const { return ___s_RaycastComparer_12; }
	inline Comparison_1_t3135238028 ** get_address_of_s_RaycastComparer_12() { return &___s_RaycastComparer_12; }
	inline void set_s_RaycastComparer_12(Comparison_1_t3135238028 * value)
	{
		___s_RaycastComparer_12 = value;
		Il2CppCodeGenWriteBarrier((&___s_RaycastComparer_12), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cache0_13() { return static_cast<int32_t>(offsetof(EventSystem_t1003666588_StaticFields, ___U3CU3Ef__mgU24cache0_13)); }
	inline Comparison_1_t3135238028 * get_U3CU3Ef__mgU24cache0_13() const { return ___U3CU3Ef__mgU24cache0_13; }
	inline Comparison_1_t3135238028 ** get_address_of_U3CU3Ef__mgU24cache0_13() { return &___U3CU3Ef__mgU24cache0_13; }
	inline void set_U3CU3Ef__mgU24cache0_13(Comparison_1_t3135238028 * value)
	{
		___U3CU3Ef__mgU24cache0_13 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__mgU24cache0_13), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EVENTSYSTEM_T1003666588_H
#ifndef MASKABLEGRAPHIC_T3839221559_H
#define MASKABLEGRAPHIC_T3839221559_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.MaskableGraphic
struct  MaskableGraphic_t3839221559  : public Graphic_t1660335611
{
public:
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculateStencil
	bool ___m_ShouldRecalculateStencil_19;
	// UnityEngine.Material UnityEngine.UI.MaskableGraphic::m_MaskMaterial
	Material_t340375123 * ___m_MaskMaterial_20;
	// UnityEngine.UI.RectMask2D UnityEngine.UI.MaskableGraphic::m_ParentMask
	RectMask2D_t3474889437 * ___m_ParentMask_21;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_Maskable
	bool ___m_Maskable_22;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IncludeForMasking
	bool ___m_IncludeForMasking_23;
	// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent UnityEngine.UI.MaskableGraphic::m_OnCullStateChanged
	CullStateChangedEvent_t3661388177 * ___m_OnCullStateChanged_24;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculate
	bool ___m_ShouldRecalculate_25;
	// System.Int32 UnityEngine.UI.MaskableGraphic::m_StencilValue
	int32_t ___m_StencilValue_26;
	// UnityEngine.Vector3[] UnityEngine.UI.MaskableGraphic::m_Corners
	Vector3U5BU5D_t1718750761* ___m_Corners_27;

public:
	inline static int32_t get_offset_of_m_ShouldRecalculateStencil_19() { return static_cast<int32_t>(offsetof(MaskableGraphic_t3839221559, ___m_ShouldRecalculateStencil_19)); }
	inline bool get_m_ShouldRecalculateStencil_19() const { return ___m_ShouldRecalculateStencil_19; }
	inline bool* get_address_of_m_ShouldRecalculateStencil_19() { return &___m_ShouldRecalculateStencil_19; }
	inline void set_m_ShouldRecalculateStencil_19(bool value)
	{
		___m_ShouldRecalculateStencil_19 = value;
	}

	inline static int32_t get_offset_of_m_MaskMaterial_20() { return static_cast<int32_t>(offsetof(MaskableGraphic_t3839221559, ___m_MaskMaterial_20)); }
	inline Material_t340375123 * get_m_MaskMaterial_20() const { return ___m_MaskMaterial_20; }
	inline Material_t340375123 ** get_address_of_m_MaskMaterial_20() { return &___m_MaskMaterial_20; }
	inline void set_m_MaskMaterial_20(Material_t340375123 * value)
	{
		___m_MaskMaterial_20 = value;
		Il2CppCodeGenWriteBarrier((&___m_MaskMaterial_20), value);
	}

	inline static int32_t get_offset_of_m_ParentMask_21() { return static_cast<int32_t>(offsetof(MaskableGraphic_t3839221559, ___m_ParentMask_21)); }
	inline RectMask2D_t3474889437 * get_m_ParentMask_21() const { return ___m_ParentMask_21; }
	inline RectMask2D_t3474889437 ** get_address_of_m_ParentMask_21() { return &___m_ParentMask_21; }
	inline void set_m_ParentMask_21(RectMask2D_t3474889437 * value)
	{
		___m_ParentMask_21 = value;
		Il2CppCodeGenWriteBarrier((&___m_ParentMask_21), value);
	}

	inline static int32_t get_offset_of_m_Maskable_22() { return static_cast<int32_t>(offsetof(MaskableGraphic_t3839221559, ___m_Maskable_22)); }
	inline bool get_m_Maskable_22() const { return ___m_Maskable_22; }
	inline bool* get_address_of_m_Maskable_22() { return &___m_Maskable_22; }
	inline void set_m_Maskable_22(bool value)
	{
		___m_Maskable_22 = value;
	}

	inline static int32_t get_offset_of_m_IncludeForMasking_23() { return static_cast<int32_t>(offsetof(MaskableGraphic_t3839221559, ___m_IncludeForMasking_23)); }
	inline bool get_m_IncludeForMasking_23() const { return ___m_IncludeForMasking_23; }
	inline bool* get_address_of_m_IncludeForMasking_23() { return &___m_IncludeForMasking_23; }
	inline void set_m_IncludeForMasking_23(bool value)
	{
		___m_IncludeForMasking_23 = value;
	}

	inline static int32_t get_offset_of_m_OnCullStateChanged_24() { return static_cast<int32_t>(offsetof(MaskableGraphic_t3839221559, ___m_OnCullStateChanged_24)); }
	inline CullStateChangedEvent_t3661388177 * get_m_OnCullStateChanged_24() const { return ___m_OnCullStateChanged_24; }
	inline CullStateChangedEvent_t3661388177 ** get_address_of_m_OnCullStateChanged_24() { return &___m_OnCullStateChanged_24; }
	inline void set_m_OnCullStateChanged_24(CullStateChangedEvent_t3661388177 * value)
	{
		___m_OnCullStateChanged_24 = value;
		Il2CppCodeGenWriteBarrier((&___m_OnCullStateChanged_24), value);
	}

	inline static int32_t get_offset_of_m_ShouldRecalculate_25() { return static_cast<int32_t>(offsetof(MaskableGraphic_t3839221559, ___m_ShouldRecalculate_25)); }
	inline bool get_m_ShouldRecalculate_25() const { return ___m_ShouldRecalculate_25; }
	inline bool* get_address_of_m_ShouldRecalculate_25() { return &___m_ShouldRecalculate_25; }
	inline void set_m_ShouldRecalculate_25(bool value)
	{
		___m_ShouldRecalculate_25 = value;
	}

	inline static int32_t get_offset_of_m_StencilValue_26() { return static_cast<int32_t>(offsetof(MaskableGraphic_t3839221559, ___m_StencilValue_26)); }
	inline int32_t get_m_StencilValue_26() const { return ___m_StencilValue_26; }
	inline int32_t* get_address_of_m_StencilValue_26() { return &___m_StencilValue_26; }
	inline void set_m_StencilValue_26(int32_t value)
	{
		___m_StencilValue_26 = value;
	}

	inline static int32_t get_offset_of_m_Corners_27() { return static_cast<int32_t>(offsetof(MaskableGraphic_t3839221559, ___m_Corners_27)); }
	inline Vector3U5BU5D_t1718750761* get_m_Corners_27() const { return ___m_Corners_27; }
	inline Vector3U5BU5D_t1718750761** get_address_of_m_Corners_27() { return &___m_Corners_27; }
	inline void set_m_Corners_27(Vector3U5BU5D_t1718750761* value)
	{
		___m_Corners_27 = value;
		Il2CppCodeGenWriteBarrier((&___m_Corners_27), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MASKABLEGRAPHIC_T3839221559_H
#ifndef BUTTON_T4055032469_H
#define BUTTON_T4055032469_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.Button
struct  Button_t4055032469  : public Selectable_t3250028441
{
public:
	// UnityEngine.UI.Button/ButtonClickedEvent UnityEngine.UI.Button::m_OnClick
	ButtonClickedEvent_t48803504 * ___m_OnClick_16;

public:
	inline static int32_t get_offset_of_m_OnClick_16() { return static_cast<int32_t>(offsetof(Button_t4055032469, ___m_OnClick_16)); }
	inline ButtonClickedEvent_t48803504 * get_m_OnClick_16() const { return ___m_OnClick_16; }
	inline ButtonClickedEvent_t48803504 ** get_address_of_m_OnClick_16() { return &___m_OnClick_16; }
	inline void set_m_OnClick_16(ButtonClickedEvent_t48803504 * value)
	{
		___m_OnClick_16 = value;
		Il2CppCodeGenWriteBarrier((&___m_OnClick_16), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BUTTON_T4055032469_H
#ifndef TMP_TEXT_T2599618874_H
#define TMP_TEXT_T2599618874_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// TMPro.TMP_Text
struct  TMP_Text_t2599618874  : public MaskableGraphic_t3839221559
{
public:
	// System.String TMPro.TMP_Text::m_text
	String_t* ___m_text_28;
	// System.Boolean TMPro.TMP_Text::m_isRightToLeft
	bool ___m_isRightToLeft_29;
	// TMPro.TMP_FontAsset TMPro.TMP_Text::m_fontAsset
	TMP_FontAsset_t364381626 * ___m_fontAsset_30;
	// TMPro.TMP_FontAsset TMPro.TMP_Text::m_currentFontAsset
	TMP_FontAsset_t364381626 * ___m_currentFontAsset_31;
	// System.Boolean TMPro.TMP_Text::m_isSDFShader
	bool ___m_isSDFShader_32;
	// UnityEngine.Material TMPro.TMP_Text::m_sharedMaterial
	Material_t340375123 * ___m_sharedMaterial_33;
	// UnityEngine.Material TMPro.TMP_Text::m_currentMaterial
	Material_t340375123 * ___m_currentMaterial_34;
	// TMPro.MaterialReference[] TMPro.TMP_Text::m_materialReferences
	MaterialReferenceU5BU5D_t648826345* ___m_materialReferences_35;
	// System.Collections.Generic.Dictionary`2<System.Int32,System.Int32> TMPro.TMP_Text::m_materialReferenceIndexLookup
	Dictionary_2_t1839659084 * ___m_materialReferenceIndexLookup_36;
	// TMPro.TMP_XmlTagStack`1<TMPro.MaterialReference> TMPro.TMP_Text::m_materialReferenceStack
	TMP_XmlTagStack_1_t1515999176  ___m_materialReferenceStack_37;
	// System.Int32 TMPro.TMP_Text::m_currentMaterialIndex
	int32_t ___m_currentMaterialIndex_38;
	// UnityEngine.Material[] TMPro.TMP_Text::m_fontSharedMaterials
	MaterialU5BU5D_t561872642* ___m_fontSharedMaterials_39;
	// UnityEngine.Material TMPro.TMP_Text::m_fontMaterial
	Material_t340375123 * ___m_fontMaterial_40;
	// UnityEngine.Material[] TMPro.TMP_Text::m_fontMaterials
	MaterialU5BU5D_t561872642* ___m_fontMaterials_41;
	// System.Boolean TMPro.TMP_Text::m_isMaterialDirty
	bool ___m_isMaterialDirty_42;
	// UnityEngine.Color32 TMPro.TMP_Text::m_fontColor32
	Color32_t2600501292  ___m_fontColor32_43;
	// UnityEngine.Color TMPro.TMP_Text::m_fontColor
	Color_t2555686324  ___m_fontColor_44;
	// UnityEngine.Color32 TMPro.TMP_Text::m_underlineColor
	Color32_t2600501292  ___m_underlineColor_46;
	// UnityEngine.Color32 TMPro.TMP_Text::m_strikethroughColor
	Color32_t2600501292  ___m_strikethroughColor_47;
	// UnityEngine.Color32 TMPro.TMP_Text::m_highlightColor
	Color32_t2600501292  ___m_highlightColor_48;
	// System.Boolean TMPro.TMP_Text::m_enableVertexGradient
	bool ___m_enableVertexGradient_49;
	// TMPro.VertexGradient TMPro.TMP_Text::m_fontColorGradient
	VertexGradient_t345148380  ___m_fontColorGradient_50;
	// TMPro.TMP_ColorGradient TMPro.TMP_Text::m_fontColorGradientPreset
	TMP_ColorGradient_t3678055768 * ___m_fontColorGradientPreset_51;
	// TMPro.TMP_SpriteAsset TMPro.TMP_Text::m_spriteAsset
	TMP_SpriteAsset_t484820633 * ___m_spriteAsset_52;
	// System.Boolean TMPro.TMP_Text::m_tintAllSprites
	bool ___m_tintAllSprites_53;
	// System.Boolean TMPro.TMP_Text::m_tintSprite
	bool ___m_tintSprite_54;
	// UnityEngine.Color32 TMPro.TMP_Text::m_spriteColor
	Color32_t2600501292  ___m_spriteColor_55;
	// System.Boolean TMPro.TMP_Text::m_overrideHtmlColors
	bool ___m_overrideHtmlColors_56;
	// UnityEngine.Color32 TMPro.TMP_Text::m_faceColor
	Color32_t2600501292  ___m_faceColor_57;
	// UnityEngine.Color32 TMPro.TMP_Text::m_outlineColor
	Color32_t2600501292  ___m_outlineColor_58;
	// System.Single TMPro.TMP_Text::m_outlineWidth
	float ___m_outlineWidth_59;
	// System.Single TMPro.TMP_Text::m_fontSize
	float ___m_fontSize_60;
	// System.Single TMPro.TMP_Text::m_currentFontSize
	float ___m_currentFontSize_61;
	// System.Single TMPro.TMP_Text::m_fontSizeBase
	float ___m_fontSizeBase_62;
	// TMPro.TMP_XmlTagStack`1<System.Single> TMPro.TMP_Text::m_sizeStack
	TMP_XmlTagStack_1_t960921318  ___m_sizeStack_63;
	// System.Int32 TMPro.TMP_Text::m_fontWeight
	int32_t ___m_fontWeight_64;
	// System.Int32 TMPro.TMP_Text::m_fontWeightInternal
	int32_t ___m_fontWeightInternal_65;
	// TMPro.TMP_XmlTagStack`1<System.Int32> TMPro.TMP_Text::m_fontWeightStack
	TMP_XmlTagStack_1_t2514600297  ___m_fontWeightStack_66;
	// System.Boolean TMPro.TMP_Text::m_enableAutoSizing
	bool ___m_enableAutoSizing_67;
	// System.Single TMPro.TMP_Text::m_maxFontSize
	float ___m_maxFontSize_68;
	// System.Single TMPro.TMP_Text::m_minFontSize
	float ___m_minFontSize_69;
	// System.Single TMPro.TMP_Text::m_fontSizeMin
	float ___m_fontSizeMin_70;
	// System.Single TMPro.TMP_Text::m_fontSizeMax
	float ___m_fontSizeMax_71;
	// TMPro.FontStyles TMPro.TMP_Text::m_fontStyle
	int32_t ___m_fontStyle_72;
	// TMPro.FontStyles TMPro.TMP_Text::m_style
	int32_t ___m_style_73;
	// TMPro.TMP_BasicXmlTagStack TMPro.TMP_Text::m_fontStyleStack
	TMP_BasicXmlTagStack_t2962628096  ___m_fontStyleStack_74;
	// System.Boolean TMPro.TMP_Text::m_isUsingBold
	bool ___m_isUsingBold_75;
	// TMPro.TextAlignmentOptions TMPro.TMP_Text::m_textAlignment
	int32_t ___m_textAlignment_76;
	// TMPro.TextAlignmentOptions TMPro.TMP_Text::m_lineJustification
	int32_t ___m_lineJustification_77;
	// TMPro.TMP_XmlTagStack`1<TMPro.TextAlignmentOptions> TMPro.TMP_Text::m_lineJustificationStack
	TMP_XmlTagStack_1_t3600445780  ___m_lineJustificationStack_78;
	// UnityEngine.Vector3[] TMPro.TMP_Text::m_textContainerLocalCorners
	Vector3U5BU5D_t1718750761* ___m_textContainerLocalCorners_79;
	// System.Boolean TMPro.TMP_Text::m_isAlignmentEnumConverted
	bool ___m_isAlignmentEnumConverted_80;
	// System.Single TMPro.TMP_Text::m_characterSpacing
	float ___m_characterSpacing_81;
	// System.Single TMPro.TMP_Text::m_cSpacing
	float ___m_cSpacing_82;
	// System.Single TMPro.TMP_Text::m_monoSpacing
	float ___m_monoSpacing_83;
	// System.Single TMPro.TMP_Text::m_wordSpacing
	float ___m_wordSpacing_84;
	// System.Single TMPro.TMP_Text::m_lineSpacing
	float ___m_lineSpacing_85;
	// System.Single TMPro.TMP_Text::m_lineSpacingDelta
	float ___m_lineSpacingDelta_86;
	// System.Single TMPro.TMP_Text::m_lineHeight
	float ___m_lineHeight_87;
	// System.Single TMPro.TMP_Text::m_lineSpacingMax
	float ___m_lineSpacingMax_88;
	// System.Single TMPro.TMP_Text::m_paragraphSpacing
	float ___m_paragraphSpacing_89;
	// System.Single TMPro.TMP_Text::m_charWidthMaxAdj
	float ___m_charWidthMaxAdj_90;
	// System.Single TMPro.TMP_Text::m_charWidthAdjDelta
	float ___m_charWidthAdjDelta_91;
	// System.Boolean TMPro.TMP_Text::m_enableWordWrapping
	bool ___m_enableWordWrapping_92;
	// System.Boolean TMPro.TMP_Text::m_isCharacterWrappingEnabled
	bool ___m_isCharacterWrappingEnabled_93;
	// System.Boolean TMPro.TMP_Text::m_isNonBreakingSpace
	bool ___m_isNonBreakingSpace_94;
	// System.Boolean TMPro.TMP_Text::m_isIgnoringAlignment
	bool ___m_isIgnoringAlignment_95;
	// System.Single TMPro.TMP_Text::m_wordWrappingRatios
	float ___m_wordWrappingRatios_96;
	// TMPro.TextOverflowModes TMPro.TMP_Text::m_overflowMode
	int32_t ___m_overflowMode_97;
	// System.Int32 TMPro.TMP_Text::m_firstOverflowCharacterIndex
	int32_t ___m_firstOverflowCharacterIndex_98;
	// TMPro.TMP_Text TMPro.TMP_Text::m_linkedTextComponent
	TMP_Text_t2599618874 * ___m_linkedTextComponent_99;
	// System.Boolean TMPro.TMP_Text::m_isLinkedTextComponent
	bool ___m_isLinkedTextComponent_100;
	// System.Boolean TMPro.TMP_Text::m_isTextTruncated
	bool ___m_isTextTruncated_101;
	// System.Boolean TMPro.TMP_Text::m_enableKerning
	bool ___m_enableKerning_102;
	// System.Boolean TMPro.TMP_Text::m_enableExtraPadding
	bool ___m_enableExtraPadding_103;
	// System.Boolean TMPro.TMP_Text::checkPaddingRequired
	bool ___checkPaddingRequired_104;
	// System.Boolean TMPro.TMP_Text::m_isRichText
	bool ___m_isRichText_105;
	// System.Boolean TMPro.TMP_Text::m_parseCtrlCharacters
	bool ___m_parseCtrlCharacters_106;
	// System.Boolean TMPro.TMP_Text::m_isOverlay
	bool ___m_isOverlay_107;
	// System.Boolean TMPro.TMP_Text::m_isOrthographic
	bool ___m_isOrthographic_108;
	// System.Boolean TMPro.TMP_Text::m_isCullingEnabled
	bool ___m_isCullingEnabled_109;
	// System.Boolean TMPro.TMP_Text::m_ignoreRectMaskCulling
	bool ___m_ignoreRectMaskCulling_110;
	// System.Boolean TMPro.TMP_Text::m_ignoreCulling
	bool ___m_ignoreCulling_111;
	// TMPro.TextureMappingOptions TMPro.TMP_Text::m_horizontalMapping
	int32_t ___m_horizontalMapping_112;
	// TMPro.TextureMappingOptions TMPro.TMP_Text::m_verticalMapping
	int32_t ___m_verticalMapping_113;
	// System.Single TMPro.TMP_Text::m_uvLineOffset
	float ___m_uvLineOffset_114;
	// TMPro.TextRenderFlags TMPro.TMP_Text::m_renderMode
	int32_t ___m_renderMode_115;
	// TMPro.VertexSortingOrder TMPro.TMP_Text::m_geometrySortingOrder
	int32_t ___m_geometrySortingOrder_116;
	// System.Int32 TMPro.TMP_Text::m_firstVisibleCharacter
	int32_t ___m_firstVisibleCharacter_117;
	// System.Int32 TMPro.TMP_Text::m_maxVisibleCharacters
	int32_t ___m_maxVisibleCharacters_118;
	// System.Int32 TMPro.TMP_Text::m_maxVisibleWords
	int32_t ___m_maxVisibleWords_119;
	// System.Int32 TMPro.TMP_Text::m_maxVisibleLines
	int32_t ___m_maxVisibleLines_120;
	// System.Boolean TMPro.TMP_Text::m_useMaxVisibleDescender
	bool ___m_useMaxVisibleDescender_121;
	// System.Int32 TMPro.TMP_Text::m_pageToDisplay
	int32_t ___m_pageToDisplay_122;
	// System.Boolean TMPro.TMP_Text::m_isNewPage
	bool ___m_isNewPage_123;
	// UnityEngine.Vector4 TMPro.TMP_Text::m_margin
	Vector4_t3319028937  ___m_margin_124;
	// System.Single TMPro.TMP_Text::m_marginLeft
	float ___m_marginLeft_125;
	// System.Single TMPro.TMP_Text::m_marginRight
	float ___m_marginRight_126;
	// System.Single TMPro.TMP_Text::m_marginWidth
	float ___m_marginWidth_127;
	// System.Single TMPro.TMP_Text::m_marginHeight
	float ___m_marginHeight_128;
	// System.Single TMPro.TMP_Text::m_width
	float ___m_width_129;
	// TMPro.TMP_TextInfo TMPro.TMP_Text::m_textInfo
	TMP_TextInfo_t3598145122 * ___m_textInfo_130;
	// System.Boolean TMPro.TMP_Text::m_havePropertiesChanged
	bool ___m_havePropertiesChanged_131;
	// System.Boolean TMPro.TMP_Text::m_isUsingLegacyAnimationComponent
	bool ___m_isUsingLegacyAnimationComponent_132;
	// UnityEngine.Transform TMPro.TMP_Text::m_transform
	Transform_t3600365921 * ___m_transform_133;
	// UnityEngine.RectTransform TMPro.TMP_Text::m_rectTransform
	RectTransform_t3704657025 * ___m_rectTransform_134;
	// System.Boolean TMPro.TMP_Text::<autoSizeTextContainer>k__BackingField
	bool ___U3CautoSizeTextContainerU3Ek__BackingField_135;
	// System.Boolean TMPro.TMP_Text::m_autoSizeTextContainer
	bool ___m_autoSizeTextContainer_136;
	// UnityEngine.Mesh TMPro.TMP_Text::m_mesh
	Mesh_t3648964284 * ___m_mesh_137;
	// System.Boolean TMPro.TMP_Text::m_isVolumetricText
	bool ___m_isVolumetricText_138;
	// TMPro.TMP_SpriteAnimator TMPro.TMP_Text::m_spriteAnimator
	TMP_SpriteAnimator_t2836635477 * ___m_spriteAnimator_139;
	// System.Single TMPro.TMP_Text::m_flexibleHeight
	float ___m_flexibleHeight_140;
	// System.Single TMPro.TMP_Text::m_flexibleWidth
	float ___m_flexibleWidth_141;
	// System.Single TMPro.TMP_Text::m_minWidth
	float ___m_minWidth_142;
	// System.Single TMPro.TMP_Text::m_minHeight
	float ___m_minHeight_143;
	// System.Single TMPro.TMP_Text::m_maxWidth
	float ___m_maxWidth_144;
	// System.Single TMPro.TMP_Text::m_maxHeight
	float ___m_maxHeight_145;
	// UnityEngine.UI.LayoutElement TMPro.TMP_Text::m_LayoutElement
	LayoutElement_t1785403678 * ___m_LayoutElement_146;
	// System.Single TMPro.TMP_Text::m_preferredWidth
	float ___m_preferredWidth_147;
	// System.Single TMPro.TMP_Text::m_renderedWidth
	float ___m_renderedWidth_148;
	// System.Boolean TMPro.TMP_Text::m_isPreferredWidthDirty
	bool ___m_isPreferredWidthDirty_149;
	// System.Single TMPro.TMP_Text::m_preferredHeight
	float ___m_preferredHeight_150;
	// System.Single TMPro.TMP_Text::m_renderedHeight
	float ___m_renderedHeight_151;
	// System.Boolean TMPro.TMP_Text::m_isPreferredHeightDirty
	bool ___m_isPreferredHeightDirty_152;
	// System.Boolean TMPro.TMP_Text::m_isCalculatingPreferredValues
	bool ___m_isCalculatingPreferredValues_153;
	// System.Int32 TMPro.TMP_Text::m_recursiveCount
	int32_t ___m_recursiveCount_154;
	// System.Int32 TMPro.TMP_Text::m_layoutPriority
	int32_t ___m_layoutPriority_155;
	// System.Boolean TMPro.TMP_Text::m_isCalculateSizeRequired
	bool ___m_isCalculateSizeRequired_156;
	// System.Boolean TMPro.TMP_Text::m_isLayoutDirty
	bool ___m_isLayoutDirty_157;
	// System.Boolean TMPro.TMP_Text::m_verticesAlreadyDirty
	bool ___m_verticesAlreadyDirty_158;
	// System.Boolean TMPro.TMP_Text::m_layoutAlreadyDirty
	bool ___m_layoutAlreadyDirty_159;
	// System.Boolean TMPro.TMP_Text::m_isAwake
	bool ___m_isAwake_160;
	// System.Boolean TMPro.TMP_Text::m_isInputParsingRequired
	bool ___m_isInputParsingRequired_161;
	// TMPro.TMP_Text/TextInputSources TMPro.TMP_Text::m_inputSource
	int32_t ___m_inputSource_162;
	// System.String TMPro.TMP_Text::old_text
	String_t* ___old_text_163;
	// System.Single TMPro.TMP_Text::m_fontScale
	float ___m_fontScale_164;
	// System.Single TMPro.TMP_Text::m_fontScaleMultiplier
	float ___m_fontScaleMultiplier_165;
	// System.Char[] TMPro.TMP_Text::m_htmlTag
	CharU5BU5D_t3528271667* ___m_htmlTag_166;
	// TMPro.XML_TagAttribute[] TMPro.TMP_Text::m_xmlAttribute
	XML_TagAttributeU5BU5D_t284240280* ___m_xmlAttribute_167;
	// System.Single[] TMPro.TMP_Text::m_attributeParameterValues
	SingleU5BU5D_t1444911251* ___m_attributeParameterValues_168;
	// System.Single TMPro.TMP_Text::tag_LineIndent
	float ___tag_LineIndent_169;
	// System.Single TMPro.TMP_Text::tag_Indent
	float ___tag_Indent_170;
	// TMPro.TMP_XmlTagStack`1<System.Single> TMPro.TMP_Text::m_indentStack
	TMP_XmlTagStack_1_t960921318  ___m_indentStack_171;
	// System.Boolean TMPro.TMP_Text::tag_NoParsing
	bool ___tag_NoParsing_172;
	// System.Boolean TMPro.TMP_Text::m_isParsingText
	bool ___m_isParsingText_173;
	// UnityEngine.Matrix4x4 TMPro.TMP_Text::m_FXMatrix
	Matrix4x4_t1817901843  ___m_FXMatrix_174;
	// System.Boolean TMPro.TMP_Text::m_isFXMatrixSet
	bool ___m_isFXMatrixSet_175;
	// System.Int32[] TMPro.TMP_Text::m_char_buffer
	Int32U5BU5D_t385246372* ___m_char_buffer_176;
	// TMPro.TMP_CharacterInfo[] TMPro.TMP_Text::m_internalCharacterInfo
	TMP_CharacterInfoU5BU5D_t1930184704* ___m_internalCharacterInfo_177;
	// System.Char[] TMPro.TMP_Text::m_input_CharArray
	CharU5BU5D_t3528271667* ___m_input_CharArray_178;
	// System.Int32 TMPro.TMP_Text::m_charArray_Length
	int32_t ___m_charArray_Length_179;
	// System.Int32 TMPro.TMP_Text::m_totalCharacterCount
	int32_t ___m_totalCharacterCount_180;
	// TMPro.WordWrapState TMPro.TMP_Text::m_SavedWordWrapState
	WordWrapState_t341939652  ___m_SavedWordWrapState_181;
	// TMPro.WordWrapState TMPro.TMP_Text::m_SavedLineState
	WordWrapState_t341939652  ___m_SavedLineState_182;
	// System.Int32 TMPro.TMP_Text::m_characterCount
	int32_t ___m_characterCount_183;
	// System.Int32 TMPro.TMP_Text::m_firstCharacterOfLine
	int32_t ___m_firstCharacterOfLine_184;
	// System.Int32 TMPro.TMP_Text::m_firstVisibleCharacterOfLine
	int32_t ___m_firstVisibleCharacterOfLine_185;
	// System.Int32 TMPro.TMP_Text::m_lastCharacterOfLine
	int32_t ___m_lastCharacterOfLine_186;
	// System.Int32 TMPro.TMP_Text::m_lastVisibleCharacterOfLine
	int32_t ___m_lastVisibleCharacterOfLine_187;
	// System.Int32 TMPro.TMP_Text::m_lineNumber
	int32_t ___m_lineNumber_188;
	// System.Int32 TMPro.TMP_Text::m_lineVisibleCharacterCount
	int32_t ___m_lineVisibleCharacterCount_189;
	// System.Int32 TMPro.TMP_Text::m_pageNumber
	int32_t ___m_pageNumber_190;
	// System.Single TMPro.TMP_Text::m_maxAscender
	float ___m_maxAscender_191;
	// System.Single TMPro.TMP_Text::m_maxCapHeight
	float ___m_maxCapHeight_192;
	// System.Single TMPro.TMP_Text::m_maxDescender
	float ___m_maxDescender_193;
	// System.Single TMPro.TMP_Text::m_maxLineAscender
	float ___m_maxLineAscender_194;
	// System.Single TMPro.TMP_Text::m_maxLineDescender
	float ___m_maxLineDescender_195;
	// System.Single TMPro.TMP_Text::m_startOfLineAscender
	float ___m_startOfLineAscender_196;
	// System.Single TMPro.TMP_Text::m_lineOffset
	float ___m_lineOffset_197;
	// TMPro.Extents TMPro.TMP_Text::m_meshExtents
	Extents_t3837212874  ___m_meshExtents_198;
	// UnityEngine.Color32 TMPro.TMP_Text::m_htmlColor
	Color32_t2600501292  ___m_htmlColor_199;
	// TMPro.TMP_XmlTagStack`1<UnityEngine.Color32> TMPro.TMP_Text::m_colorStack
	TMP_XmlTagStack_1_t2164155836  ___m_colorStack_200;
	// TMPro.TMP_XmlTagStack`1<UnityEngine.Color32> TMPro.TMP_Text::m_underlineColorStack
	TMP_XmlTagStack_1_t2164155836  ___m_underlineColorStack_201;
	// TMPro.TMP_XmlTagStack`1<UnityEngine.Color32> TMPro.TMP_Text::m_strikethroughColorStack
	TMP_XmlTagStack_1_t2164155836  ___m_strikethroughColorStack_202;
	// TMPro.TMP_XmlTagStack`1<UnityEngine.Color32> TMPro.TMP_Text::m_highlightColorStack
	TMP_XmlTagStack_1_t2164155836  ___m_highlightColorStack_203;
	// TMPro.TMP_ColorGradient TMPro.TMP_Text::m_colorGradientPreset
	TMP_ColorGradient_t3678055768 * ___m_colorGradientPreset_204;
	// TMPro.TMP_XmlTagStack`1<TMPro.TMP_ColorGradient> TMPro.TMP_Text::m_colorGradientStack
	TMP_XmlTagStack_1_t3241710312  ___m_colorGradientStack_205;
	// System.Single TMPro.TMP_Text::m_tabSpacing
	float ___m_tabSpacing_206;
	// System.Single TMPro.TMP_Text::m_spacing
	float ___m_spacing_207;
	// TMPro.TMP_XmlTagStack`1<System.Int32> TMPro.TMP_Text::m_styleStack
	TMP_XmlTagStack_1_t2514600297  ___m_styleStack_208;
	// TMPro.TMP_XmlTagStack`1<System.Int32> TMPro.TMP_Text::m_actionStack
	TMP_XmlTagStack_1_t2514600297  ___m_actionStack_209;
	// System.Single TMPro.TMP_Text::m_padding
	float ___m_padding_210;
	// System.Single TMPro.TMP_Text::m_baselineOffset
	float ___m_baselineOffset_211;
	// TMPro.TMP_XmlTagStack`1<System.Single> TMPro.TMP_Text::m_baselineOffsetStack
	TMP_XmlTagStack_1_t960921318  ___m_baselineOffsetStack_212;
	// System.Single TMPro.TMP_Text::m_xAdvance
	float ___m_xAdvance_213;
	// TMPro.TMP_TextElementType TMPro.TMP_Text::m_textElementType
	int32_t ___m_textElementType_214;
	// TMPro.TMP_TextElement TMPro.TMP_Text::m_cached_TextElement
	TMP_TextElement_t129727469 * ___m_cached_TextElement_215;
	// TMPro.TMP_Glyph TMPro.TMP_Text::m_cached_Underline_GlyphInfo
	TMP_Glyph_t581847833 * ___m_cached_Underline_GlyphInfo_216;
	// TMPro.TMP_Glyph TMPro.TMP_Text::m_cached_Ellipsis_GlyphInfo
	TMP_Glyph_t581847833 * ___m_cached_Ellipsis_GlyphInfo_217;
	// TMPro.TMP_SpriteAsset TMPro.TMP_Text::m_defaultSpriteAsset
	TMP_SpriteAsset_t484820633 * ___m_defaultSpriteAsset_218;
	// TMPro.TMP_SpriteAsset TMPro.TMP_Text::m_currentSpriteAsset
	TMP_SpriteAsset_t484820633 * ___m_currentSpriteAsset_219;
	// System.Int32 TMPro.TMP_Text::m_spriteCount
	int32_t ___m_spriteCount_220;
	// System.Int32 TMPro.TMP_Text::m_spriteIndex
	int32_t ___m_spriteIndex_221;
	// System.Int32 TMPro.TMP_Text::m_spriteAnimationID
	int32_t ___m_spriteAnimationID_222;
	// System.Boolean TMPro.TMP_Text::m_ignoreActiveState
	bool ___m_ignoreActiveState_223;
	// System.Single[] TMPro.TMP_Text::k_Power
	SingleU5BU5D_t1444911251* ___k_Power_224;

public:
	inline static int32_t get_offset_of_m_text_28() { return static_cast<int32_t>(offsetof(TMP_Text_t2599618874, ___m_text_28)); }
	inline String_t* get_m_text_28() const { return ___m_text_28; }
	inline String_t** get_address_of_m_text_28() { return &___m_text_28; }
	inline void set_m_text_28(String_t* value)
	{
		___m_text_28 = value;
		Il2CppCodeGenWriteBarrier((&___m_text_28), value);
	}

	inline static int32_t get_offset_of_m_isRightToLeft_29() { return static_cast<int32_t>(offsetof(TMP_Text_t2599618874, ___m_isRightToLeft_29)); }
	inline bool get_m_isRightToLeft_29() const { return ___m_isRightToLeft_29; }
	inline bool* get_address_of_m_isRightToLeft_29() { return &___m_isRightToLeft_29; }
	inline void set_m_isRightToLeft_29(bool value)
	{
		___m_isRightToLeft_29 = value;
	}

	inline static int32_t get_offset_of_m_fontAsset_30() { return static_cast<int32_t>(offsetof(TMP_Text_t2599618874, ___m_fontAsset_30)); }
	inline TMP_FontAsset_t364381626 * get_m_fontAsset_30() const { return ___m_fontAsset_30; }
	inline TMP_FontAsset_t364381626 ** get_address_of_m_fontAsset_30() { return &___m_fontAsset_30; }
	inline void set_m_fontAsset_30(TMP_FontAsset_t364381626 * value)
	{
		___m_fontAsset_30 = value;
		Il2CppCodeGenWriteBarrier((&___m_fontAsset_30), value);
	}

	inline static int32_t get_offset_of_m_currentFontAsset_31() { return static_cast<int32_t>(offsetof(TMP_Text_t2599618874, ___m_currentFontAsset_31)); }
	inline TMP_FontAsset_t364381626 * get_m_currentFontAsset_31() const { return ___m_currentFontAsset_31; }
	inline TMP_FontAsset_t364381626 ** get_address_of_m_currentFontAsset_31() { return &___m_currentFontAsset_31; }
	inline void set_m_currentFontAsset_31(TMP_FontAsset_t364381626 * value)
	{
		___m_currentFontAsset_31 = value;
		Il2CppCodeGenWriteBarrier((&___m_currentFontAsset_31), value);
	}

	inline static int32_t get_offset_of_m_isSDFShader_32() { return static_cast<int32_t>(offsetof(TMP_Text_t2599618874, ___m_isSDFShader_32)); }
	inline bool get_m_isSDFShader_32() const { return ___m_isSDFShader_32; }
	inline bool* get_address_of_m_isSDFShader_32() { return &___m_isSDFShader_32; }
	inline void set_m_isSDFShader_32(bool value)
	{
		___m_isSDFShader_32 = value;
	}

	inline static int32_t get_offset_of_m_sharedMaterial_33() { return static_cast<int32_t>(offsetof(TMP_Text_t2599618874, ___m_sharedMaterial_33)); }
	inline Material_t340375123 * get_m_sharedMaterial_33() const { return ___m_sharedMaterial_33; }
	inline Material_t340375123 ** get_address_of_m_sharedMaterial_33() { return &___m_sharedMaterial_33; }
	inline void set_m_sharedMaterial_33(Material_t340375123 * value)
	{
		___m_sharedMaterial_33 = value;
		Il2CppCodeGenWriteBarrier((&___m_sharedMaterial_33), value);
	}

	inline static int32_t get_offset_of_m_currentMaterial_34() { return static_cast<int32_t>(offsetof(TMP_Text_t2599618874, ___m_currentMaterial_34)); }
	inline Material_t340375123 * get_m_currentMaterial_34() const { return ___m_currentMaterial_34; }
	inline Material_t340375123 ** get_address_of_m_currentMaterial_34() { return &___m_currentMaterial_34; }
	inline void set_m_currentMaterial_34(Material_t340375123 * value)
	{
		___m_currentMaterial_34 = value;
		Il2CppCodeGenWriteBarrier((&___m_currentMaterial_34), value);
	}

	inline static int32_t get_offset_of_m_materialReferences_35() { return static_cast<int32_t>(offsetof(TMP_Text_t2599618874, ___m_materialReferences_35)); }
	inline MaterialReferenceU5BU5D_t648826345* get_m_materialReferences_35() const { return ___m_materialReferences_35; }
	inline MaterialReferenceU5BU5D_t648826345** get_address_of_m_materialReferences_35() { return &___m_materialReferences_35; }
	inline void set_m_materialReferences_35(MaterialReferenceU5BU5D_t648826345* value)
	{
		___m_materialReferences_35 = value;
		Il2CppCodeGenWriteBarrier((&___m_materialReferences_35), value);
	}

	inline static int32_t get_offset_of_m_materialReferenceIndexLookup_36() { return static_cast<int32_t>(offsetof(TMP_Text_t2599618874, ___m_materialReferenceIndexLookup_36)); }
	inline Dictionary_2_t1839659084 * get_m_materialReferenceIndexLookup_36() const { return ___m_materialReferenceIndexLookup_36; }
	inline Dictionary_2_t1839659084 ** get_address_of_m_materialReferenceIndexLookup_36() { return &___m_materialReferenceIndexLookup_36; }
	inline void set_m_materialReferenceIndexLookup_36(Dictionary_2_t1839659084 * value)
	{
		___m_materialReferenceIndexLookup_36 = value;
		Il2CppCodeGenWriteBarrier((&___m_materialReferenceIndexLookup_36), value);
	}

	inline static int32_t get_offset_of_m_materialReferenceStack_37() { return static_cast<int32_t>(offsetof(TMP_Text_t2599618874, ___m_materialReferenceStack_37)); }
	inline TMP_XmlTagStack_1_t1515999176  get_m_materialReferenceStack_37() const { return ___m_materialReferenceStack_37; }
	inline TMP_XmlTagStack_1_t1515999176 * get_address_of_m_materialReferenceStack_37() { return &___m_materialReferenceStack_37; }
	inline void set_m_materialReferenceStack_37(TMP_XmlTagStack_1_t1515999176  value)
	{
		___m_materialReferenceStack_37 = value;
	}

	inline static int32_t get_offset_of_m_currentMaterialIndex_38() { return static_cast<int32_t>(offsetof(TMP_Text_t2599618874, ___m_currentMaterialIndex_38)); }
	inline int32_t get_m_currentMaterialIndex_38() const { return ___m_currentMaterialIndex_38; }
	inline int32_t* get_address_of_m_currentMaterialIndex_38() { return &___m_currentMaterialIndex_38; }
	inline void set_m_currentMaterialIndex_38(int32_t value)
	{
		___m_currentMaterialIndex_38 = value;
	}

	inline static int32_t get_offset_of_m_fontSharedMaterials_39() { return static_cast<int32_t>(offsetof(TMP_Text_t2599618874, ___m_fontSharedMaterials_39)); }
	inline MaterialU5BU5D_t561872642* get_m_fontSharedMaterials_39() const { return ___m_fontSharedMaterials_39; }
	inline MaterialU5BU5D_t561872642** get_address_of_m_fontSharedMaterials_39() { return &___m_fontSharedMaterials_39; }
	inline void set_m_fontSharedMaterials_39(MaterialU5BU5D_t561872642* value)
	{
		___m_fontSharedMaterials_39 = value;
		Il2CppCodeGenWriteBarrier((&___m_fontSharedMaterials_39), value);
	}

	inline static int32_t get_offset_of_m_fontMaterial_40() { return static_cast<int32_t>(offsetof(TMP_Text_t2599618874, ___m_fontMaterial_40)); }
	inline Material_t340375123 * get_m_fontMaterial_40() const { return ___m_fontMaterial_40; }
	inline Material_t340375123 ** get_address_of_m_fontMaterial_40() { return &___m_fontMaterial_40; }
	inline void set_m_fontMaterial_40(Material_t340375123 * value)
	{
		___m_fontMaterial_40 = value;
		Il2CppCodeGenWriteBarrier((&___m_fontMaterial_40), value);
	}

	inline static int32_t get_offset_of_m_fontMaterials_41() { return static_cast<int32_t>(offsetof(TMP_Text_t2599618874, ___m_fontMaterials_41)); }
	inline MaterialU5BU5D_t561872642* get_m_fontMaterials_41() const { return ___m_fontMaterials_41; }
	inline MaterialU5BU5D_t561872642** get_address_of_m_fontMaterials_41() { return &___m_fontMaterials_41; }
	inline void set_m_fontMaterials_41(MaterialU5BU5D_t561872642* value)
	{
		___m_fontMaterials_41 = value;
		Il2CppCodeGenWriteBarrier((&___m_fontMaterials_41), value);
	}

	inline static int32_t get_offset_of_m_isMaterialDirty_42() { return static_cast<int32_t>(offsetof(TMP_Text_t2599618874, ___m_isMaterialDirty_42)); }
	inline bool get_m_isMaterialDirty_42() const { return ___m_isMaterialDirty_42; }
	inline bool* get_address_of_m_isMaterialDirty_42() { return &___m_isMaterialDirty_42; }
	inline void set_m_isMaterialDirty_42(bool value)
	{
		___m_isMaterialDirty_42 = value;
	}

	inline static int32_t get_offset_of_m_fontColor32_43() { return static_cast<int32_t>(offsetof(TMP_Text_t2599618874, ___m_fontColor32_43)); }
	inline Color32_t2600501292  get_m_fontColor32_43() const { return ___m_fontColor32_43; }
	inline Color32_t2600501292 * get_address_of_m_fontColor32_43() { return &___m_fontColor32_43; }
	inline void set_m_fontColor32_43(Color32_t2600501292  value)
	{
		___m_fontColor32_43 = value;
	}

	inline static int32_t get_offset_of_m_fontColor_44() { return static_cast<int32_t>(offsetof(TMP_Text_t2599618874, ___m_fontColor_44)); }
	inline Color_t2555686324  get_m_fontColor_44() const { return ___m_fontColor_44; }
	inline Color_t2555686324 * get_address_of_m_fontColor_44() { return &___m_fontColor_44; }
	inline void set_m_fontColor_44(Color_t2555686324  value)
	{
		___m_fontColor_44 = value;
	}

	inline static int32_t get_offset_of_m_underlineColor_46() { return static_cast<int32_t>(offsetof(TMP_Text_t2599618874, ___m_underlineColor_46)); }
	inline Color32_t2600501292  get_m_underlineColor_46() const { return ___m_underlineColor_46; }
	inline Color32_t2600501292 * get_address_of_m_underlineColor_46() { return &___m_underlineColor_46; }
	inline void set_m_underlineColor_46(Color32_t2600501292  value)
	{
		___m_underlineColor_46 = value;
	}

	inline static int32_t get_offset_of_m_strikethroughColor_47() { return static_cast<int32_t>(offsetof(TMP_Text_t2599618874, ___m_strikethroughColor_47)); }
	inline Color32_t2600501292  get_m_strikethroughColor_47() const { return ___m_strikethroughColor_47; }
	inline Color32_t2600501292 * get_address_of_m_strikethroughColor_47() { return &___m_strikethroughColor_47; }
	inline void set_m_strikethroughColor_47(Color32_t2600501292  value)
	{
		___m_strikethroughColor_47 = value;
	}

	inline static int32_t get_offset_of_m_highlightColor_48() { return static_cast<int32_t>(offsetof(TMP_Text_t2599618874, ___m_highlightColor_48)); }
	inline Color32_t2600501292  get_m_highlightColor_48() const { return ___m_highlightColor_48; }
	inline Color32_t2600501292 * get_address_of_m_highlightColor_48() { return &___m_highlightColor_48; }
	inline void set_m_highlightColor_48(Color32_t2600501292  value)
	{
		___m_highlightColor_48 = value;
	}

	inline static int32_t get_offset_of_m_enableVertexGradient_49() { return static_cast<int32_t>(offsetof(TMP_Text_t2599618874, ___m_enableVertexGradient_49)); }
	inline bool get_m_enableVertexGradient_49() const { return ___m_enableVertexGradient_49; }
	inline bool* get_address_of_m_enableVertexGradient_49() { return &___m_enableVertexGradient_49; }
	inline void set_m_enableVertexGradient_49(bool value)
	{
		___m_enableVertexGradient_49 = value;
	}

	inline static int32_t get_offset_of_m_fontColorGradient_50() { return static_cast<int32_t>(offsetof(TMP_Text_t2599618874, ___m_fontColorGradient_50)); }
	inline VertexGradient_t345148380  get_m_fontColorGradient_50() const { return ___m_fontColorGradient_50; }
	inline VertexGradient_t345148380 * get_address_of_m_fontColorGradient_50() { return &___m_fontColorGradient_50; }
	inline void set_m_fontColorGradient_50(VertexGradient_t345148380  value)
	{
		___m_fontColorGradient_50 = value;
	}

	inline static int32_t get_offset_of_m_fontColorGradientPreset_51() { return static_cast<int32_t>(offsetof(TMP_Text_t2599618874, ___m_fontColorGradientPreset_51)); }
	inline TMP_ColorGradient_t3678055768 * get_m_fontColorGradientPreset_51() const { return ___m_fontColorGradientPreset_51; }
	inline TMP_ColorGradient_t3678055768 ** get_address_of_m_fontColorGradientPreset_51() { return &___m_fontColorGradientPreset_51; }
	inline void set_m_fontColorGradientPreset_51(TMP_ColorGradient_t3678055768 * value)
	{
		___m_fontColorGradientPreset_51 = value;
		Il2CppCodeGenWriteBarrier((&___m_fontColorGradientPreset_51), value);
	}

	inline static int32_t get_offset_of_m_spriteAsset_52() { return static_cast<int32_t>(offsetof(TMP_Text_t2599618874, ___m_spriteAsset_52)); }
	inline TMP_SpriteAsset_t484820633 * get_m_spriteAsset_52() const { return ___m_spriteAsset_52; }
	inline TMP_SpriteAsset_t484820633 ** get_address_of_m_spriteAsset_52() { return &___m_spriteAsset_52; }
	inline void set_m_spriteAsset_52(TMP_SpriteAsset_t484820633 * value)
	{
		___m_spriteAsset_52 = value;
		Il2CppCodeGenWriteBarrier((&___m_spriteAsset_52), value);
	}

	inline static int32_t get_offset_of_m_tintAllSprites_53() { return static_cast<int32_t>(offsetof(TMP_Text_t2599618874, ___m_tintAllSprites_53)); }
	inline bool get_m_tintAllSprites_53() const { return ___m_tintAllSprites_53; }
	inline bool* get_address_of_m_tintAllSprites_53() { return &___m_tintAllSprites_53; }
	inline void set_m_tintAllSprites_53(bool value)
	{
		___m_tintAllSprites_53 = value;
	}

	inline static int32_t get_offset_of_m_tintSprite_54() { return static_cast<int32_t>(offsetof(TMP_Text_t2599618874, ___m_tintSprite_54)); }
	inline bool get_m_tintSprite_54() const { return ___m_tintSprite_54; }
	inline bool* get_address_of_m_tintSprite_54() { return &___m_tintSprite_54; }
	inline void set_m_tintSprite_54(bool value)
	{
		___m_tintSprite_54 = value;
	}

	inline static int32_t get_offset_of_m_spriteColor_55() { return static_cast<int32_t>(offsetof(TMP_Text_t2599618874, ___m_spriteColor_55)); }
	inline Color32_t2600501292  get_m_spriteColor_55() const { return ___m_spriteColor_55; }
	inline Color32_t2600501292 * get_address_of_m_spriteColor_55() { return &___m_spriteColor_55; }
	inline void set_m_spriteColor_55(Color32_t2600501292  value)
	{
		___m_spriteColor_55 = value;
	}

	inline static int32_t get_offset_of_m_overrideHtmlColors_56() { return static_cast<int32_t>(offsetof(TMP_Text_t2599618874, ___m_overrideHtmlColors_56)); }
	inline bool get_m_overrideHtmlColors_56() const { return ___m_overrideHtmlColors_56; }
	inline bool* get_address_of_m_overrideHtmlColors_56() { return &___m_overrideHtmlColors_56; }
	inline void set_m_overrideHtmlColors_56(bool value)
	{
		___m_overrideHtmlColors_56 = value;
	}

	inline static int32_t get_offset_of_m_faceColor_57() { return static_cast<int32_t>(offsetof(TMP_Text_t2599618874, ___m_faceColor_57)); }
	inline Color32_t2600501292  get_m_faceColor_57() const { return ___m_faceColor_57; }
	inline Color32_t2600501292 * get_address_of_m_faceColor_57() { return &___m_faceColor_57; }
	inline void set_m_faceColor_57(Color32_t2600501292  value)
	{
		___m_faceColor_57 = value;
	}

	inline static int32_t get_offset_of_m_outlineColor_58() { return static_cast<int32_t>(offsetof(TMP_Text_t2599618874, ___m_outlineColor_58)); }
	inline Color32_t2600501292  get_m_outlineColor_58() const { return ___m_outlineColor_58; }
	inline Color32_t2600501292 * get_address_of_m_outlineColor_58() { return &___m_outlineColor_58; }
	inline void set_m_outlineColor_58(Color32_t2600501292  value)
	{
		___m_outlineColor_58 = value;
	}

	inline static int32_t get_offset_of_m_outlineWidth_59() { return static_cast<int32_t>(offsetof(TMP_Text_t2599618874, ___m_outlineWidth_59)); }
	inline float get_m_outlineWidth_59() const { return ___m_outlineWidth_59; }
	inline float* get_address_of_m_outlineWidth_59() { return &___m_outlineWidth_59; }
	inline void set_m_outlineWidth_59(float value)
	{
		___m_outlineWidth_59 = value;
	}

	inline static int32_t get_offset_of_m_fontSize_60() { return static_cast<int32_t>(offsetof(TMP_Text_t2599618874, ___m_fontSize_60)); }
	inline float get_m_fontSize_60() const { return ___m_fontSize_60; }
	inline float* get_address_of_m_fontSize_60() { return &___m_fontSize_60; }
	inline void set_m_fontSize_60(float value)
	{
		___m_fontSize_60 = value;
	}

	inline static int32_t get_offset_of_m_currentFontSize_61() { return static_cast<int32_t>(offsetof(TMP_Text_t2599618874, ___m_currentFontSize_61)); }
	inline float get_m_currentFontSize_61() const { return ___m_currentFontSize_61; }
	inline float* get_address_of_m_currentFontSize_61() { return &___m_currentFontSize_61; }
	inline void set_m_currentFontSize_61(float value)
	{
		___m_currentFontSize_61 = value;
	}

	inline static int32_t get_offset_of_m_fontSizeBase_62() { return static_cast<int32_t>(offsetof(TMP_Text_t2599618874, ___m_fontSizeBase_62)); }
	inline float get_m_fontSizeBase_62() const { return ___m_fontSizeBase_62; }
	inline float* get_address_of_m_fontSizeBase_62() { return &___m_fontSizeBase_62; }
	inline void set_m_fontSizeBase_62(float value)
	{
		___m_fontSizeBase_62 = value;
	}

	inline static int32_t get_offset_of_m_sizeStack_63() { return static_cast<int32_t>(offsetof(TMP_Text_t2599618874, ___m_sizeStack_63)); }
	inline TMP_XmlTagStack_1_t960921318  get_m_sizeStack_63() const { return ___m_sizeStack_63; }
	inline TMP_XmlTagStack_1_t960921318 * get_address_of_m_sizeStack_63() { return &___m_sizeStack_63; }
	inline void set_m_sizeStack_63(TMP_XmlTagStack_1_t960921318  value)
	{
		___m_sizeStack_63 = value;
	}

	inline static int32_t get_offset_of_m_fontWeight_64() { return static_cast<int32_t>(offsetof(TMP_Text_t2599618874, ___m_fontWeight_64)); }
	inline int32_t get_m_fontWeight_64() const { return ___m_fontWeight_64; }
	inline int32_t* get_address_of_m_fontWeight_64() { return &___m_fontWeight_64; }
	inline void set_m_fontWeight_64(int32_t value)
	{
		___m_fontWeight_64 = value;
	}

	inline static int32_t get_offset_of_m_fontWeightInternal_65() { return static_cast<int32_t>(offsetof(TMP_Text_t2599618874, ___m_fontWeightInternal_65)); }
	inline int32_t get_m_fontWeightInternal_65() const { return ___m_fontWeightInternal_65; }
	inline int32_t* get_address_of_m_fontWeightInternal_65() { return &___m_fontWeightInternal_65; }
	inline void set_m_fontWeightInternal_65(int32_t value)
	{
		___m_fontWeightInternal_65 = value;
	}

	inline static int32_t get_offset_of_m_fontWeightStack_66() { return static_cast<int32_t>(offsetof(TMP_Text_t2599618874, ___m_fontWeightStack_66)); }
	inline TMP_XmlTagStack_1_t2514600297  get_m_fontWeightStack_66() const { return ___m_fontWeightStack_66; }
	inline TMP_XmlTagStack_1_t2514600297 * get_address_of_m_fontWeightStack_66() { return &___m_fontWeightStack_66; }
	inline void set_m_fontWeightStack_66(TMP_XmlTagStack_1_t2514600297  value)
	{
		___m_fontWeightStack_66 = value;
	}

	inline static int32_t get_offset_of_m_enableAutoSizing_67() { return static_cast<int32_t>(offsetof(TMP_Text_t2599618874, ___m_enableAutoSizing_67)); }
	inline bool get_m_enableAutoSizing_67() const { return ___m_enableAutoSizing_67; }
	inline bool* get_address_of_m_enableAutoSizing_67() { return &___m_enableAutoSizing_67; }
	inline void set_m_enableAutoSizing_67(bool value)
	{
		___m_enableAutoSizing_67 = value;
	}

	inline static int32_t get_offset_of_m_maxFontSize_68() { return static_cast<int32_t>(offsetof(TMP_Text_t2599618874, ___m_maxFontSize_68)); }
	inline float get_m_maxFontSize_68() const { return ___m_maxFontSize_68; }
	inline float* get_address_of_m_maxFontSize_68() { return &___m_maxFontSize_68; }
	inline void set_m_maxFontSize_68(float value)
	{
		___m_maxFontSize_68 = value;
	}

	inline static int32_t get_offset_of_m_minFontSize_69() { return static_cast<int32_t>(offsetof(TMP_Text_t2599618874, ___m_minFontSize_69)); }
	inline float get_m_minFontSize_69() const { return ___m_minFontSize_69; }
	inline float* get_address_of_m_minFontSize_69() { return &___m_minFontSize_69; }
	inline void set_m_minFontSize_69(float value)
	{
		___m_minFontSize_69 = value;
	}

	inline static int32_t get_offset_of_m_fontSizeMin_70() { return static_cast<int32_t>(offsetof(TMP_Text_t2599618874, ___m_fontSizeMin_70)); }
	inline float get_m_fontSizeMin_70() const { return ___m_fontSizeMin_70; }
	inline float* get_address_of_m_fontSizeMin_70() { return &___m_fontSizeMin_70; }
	inline void set_m_fontSizeMin_70(float value)
	{
		___m_fontSizeMin_70 = value;
	}

	inline static int32_t get_offset_of_m_fontSizeMax_71() { return static_cast<int32_t>(offsetof(TMP_Text_t2599618874, ___m_fontSizeMax_71)); }
	inline float get_m_fontSizeMax_71() const { return ___m_fontSizeMax_71; }
	inline float* get_address_of_m_fontSizeMax_71() { return &___m_fontSizeMax_71; }
	inline void set_m_fontSizeMax_71(float value)
	{
		___m_fontSizeMax_71 = value;
	}

	inline static int32_t get_offset_of_m_fontStyle_72() { return static_cast<int32_t>(offsetof(TMP_Text_t2599618874, ___m_fontStyle_72)); }
	inline int32_t get_m_fontStyle_72() const { return ___m_fontStyle_72; }
	inline int32_t* get_address_of_m_fontStyle_72() { return &___m_fontStyle_72; }
	inline void set_m_fontStyle_72(int32_t value)
	{
		___m_fontStyle_72 = value;
	}

	inline static int32_t get_offset_of_m_style_73() { return static_cast<int32_t>(offsetof(TMP_Text_t2599618874, ___m_style_73)); }
	inline int32_t get_m_style_73() const { return ___m_style_73; }
	inline int32_t* get_address_of_m_style_73() { return &___m_style_73; }
	inline void set_m_style_73(int32_t value)
	{
		___m_style_73 = value;
	}

	inline static int32_t get_offset_of_m_fontStyleStack_74() { return static_cast<int32_t>(offsetof(TMP_Text_t2599618874, ___m_fontStyleStack_74)); }
	inline TMP_BasicXmlTagStack_t2962628096  get_m_fontStyleStack_74() const { return ___m_fontStyleStack_74; }
	inline TMP_BasicXmlTagStack_t2962628096 * get_address_of_m_fontStyleStack_74() { return &___m_fontStyleStack_74; }
	inline void set_m_fontStyleStack_74(TMP_BasicXmlTagStack_t2962628096  value)
	{
		___m_fontStyleStack_74 = value;
	}

	inline static int32_t get_offset_of_m_isUsingBold_75() { return static_cast<int32_t>(offsetof(TMP_Text_t2599618874, ___m_isUsingBold_75)); }
	inline bool get_m_isUsingBold_75() const { return ___m_isUsingBold_75; }
	inline bool* get_address_of_m_isUsingBold_75() { return &___m_isUsingBold_75; }
	inline void set_m_isUsingBold_75(bool value)
	{
		___m_isUsingBold_75 = value;
	}

	inline static int32_t get_offset_of_m_textAlignment_76() { return static_cast<int32_t>(offsetof(TMP_Text_t2599618874, ___m_textAlignment_76)); }
	inline int32_t get_m_textAlignment_76() const { return ___m_textAlignment_76; }
	inline int32_t* get_address_of_m_textAlignment_76() { return &___m_textAlignment_76; }
	inline void set_m_textAlignment_76(int32_t value)
	{
		___m_textAlignment_76 = value;
	}

	inline static int32_t get_offset_of_m_lineJustification_77() { return static_cast<int32_t>(offsetof(TMP_Text_t2599618874, ___m_lineJustification_77)); }
	inline int32_t get_m_lineJustification_77() const { return ___m_lineJustification_77; }
	inline int32_t* get_address_of_m_lineJustification_77() { return &___m_lineJustification_77; }
	inline void set_m_lineJustification_77(int32_t value)
	{
		___m_lineJustification_77 = value;
	}

	inline static int32_t get_offset_of_m_lineJustificationStack_78() { return static_cast<int32_t>(offsetof(TMP_Text_t2599618874, ___m_lineJustificationStack_78)); }
	inline TMP_XmlTagStack_1_t3600445780  get_m_lineJustificationStack_78() const { return ___m_lineJustificationStack_78; }
	inline TMP_XmlTagStack_1_t3600445780 * get_address_of_m_lineJustificationStack_78() { return &___m_lineJustificationStack_78; }
	inline void set_m_lineJustificationStack_78(TMP_XmlTagStack_1_t3600445780  value)
	{
		___m_lineJustificationStack_78 = value;
	}

	inline static int32_t get_offset_of_m_textContainerLocalCorners_79() { return static_cast<int32_t>(offsetof(TMP_Text_t2599618874, ___m_textContainerLocalCorners_79)); }
	inline Vector3U5BU5D_t1718750761* get_m_textContainerLocalCorners_79() const { return ___m_textContainerLocalCorners_79; }
	inline Vector3U5BU5D_t1718750761** get_address_of_m_textContainerLocalCorners_79() { return &___m_textContainerLocalCorners_79; }
	inline void set_m_textContainerLocalCorners_79(Vector3U5BU5D_t1718750761* value)
	{
		___m_textContainerLocalCorners_79 = value;
		Il2CppCodeGenWriteBarrier((&___m_textContainerLocalCorners_79), value);
	}

	inline static int32_t get_offset_of_m_isAlignmentEnumConverted_80() { return static_cast<int32_t>(offsetof(TMP_Text_t2599618874, ___m_isAlignmentEnumConverted_80)); }
	inline bool get_m_isAlignmentEnumConverted_80() const { return ___m_isAlignmentEnumConverted_80; }
	inline bool* get_address_of_m_isAlignmentEnumConverted_80() { return &___m_isAlignmentEnumConverted_80; }
	inline void set_m_isAlignmentEnumConverted_80(bool value)
	{
		___m_isAlignmentEnumConverted_80 = value;
	}

	inline static int32_t get_offset_of_m_characterSpacing_81() { return static_cast<int32_t>(offsetof(TMP_Text_t2599618874, ___m_characterSpacing_81)); }
	inline float get_m_characterSpacing_81() const { return ___m_characterSpacing_81; }
	inline float* get_address_of_m_characterSpacing_81() { return &___m_characterSpacing_81; }
	inline void set_m_characterSpacing_81(float value)
	{
		___m_characterSpacing_81 = value;
	}

	inline static int32_t get_offset_of_m_cSpacing_82() { return static_cast<int32_t>(offsetof(TMP_Text_t2599618874, ___m_cSpacing_82)); }
	inline float get_m_cSpacing_82() const { return ___m_cSpacing_82; }
	inline float* get_address_of_m_cSpacing_82() { return &___m_cSpacing_82; }
	inline void set_m_cSpacing_82(float value)
	{
		___m_cSpacing_82 = value;
	}

	inline static int32_t get_offset_of_m_monoSpacing_83() { return static_cast<int32_t>(offsetof(TMP_Text_t2599618874, ___m_monoSpacing_83)); }
	inline float get_m_monoSpacing_83() const { return ___m_monoSpacing_83; }
	inline float* get_address_of_m_monoSpacing_83() { return &___m_monoSpacing_83; }
	inline void set_m_monoSpacing_83(float value)
	{
		___m_monoSpacing_83 = value;
	}

	inline static int32_t get_offset_of_m_wordSpacing_84() { return static_cast<int32_t>(offsetof(TMP_Text_t2599618874, ___m_wordSpacing_84)); }
	inline float get_m_wordSpacing_84() const { return ___m_wordSpacing_84; }
	inline float* get_address_of_m_wordSpacing_84() { return &___m_wordSpacing_84; }
	inline void set_m_wordSpacing_84(float value)
	{
		___m_wordSpacing_84 = value;
	}

	inline static int32_t get_offset_of_m_lineSpacing_85() { return static_cast<int32_t>(offsetof(TMP_Text_t2599618874, ___m_lineSpacing_85)); }
	inline float get_m_lineSpacing_85() const { return ___m_lineSpacing_85; }
	inline float* get_address_of_m_lineSpacing_85() { return &___m_lineSpacing_85; }
	inline void set_m_lineSpacing_85(float value)
	{
		___m_lineSpacing_85 = value;
	}

	inline static int32_t get_offset_of_m_lineSpacingDelta_86() { return static_cast<int32_t>(offsetof(TMP_Text_t2599618874, ___m_lineSpacingDelta_86)); }
	inline float get_m_lineSpacingDelta_86() const { return ___m_lineSpacingDelta_86; }
	inline float* get_address_of_m_lineSpacingDelta_86() { return &___m_lineSpacingDelta_86; }
	inline void set_m_lineSpacingDelta_86(float value)
	{
		___m_lineSpacingDelta_86 = value;
	}

	inline static int32_t get_offset_of_m_lineHeight_87() { return static_cast<int32_t>(offsetof(TMP_Text_t2599618874, ___m_lineHeight_87)); }
	inline float get_m_lineHeight_87() const { return ___m_lineHeight_87; }
	inline float* get_address_of_m_lineHeight_87() { return &___m_lineHeight_87; }
	inline void set_m_lineHeight_87(float value)
	{
		___m_lineHeight_87 = value;
	}

	inline static int32_t get_offset_of_m_lineSpacingMax_88() { return static_cast<int32_t>(offsetof(TMP_Text_t2599618874, ___m_lineSpacingMax_88)); }
	inline float get_m_lineSpacingMax_88() const { return ___m_lineSpacingMax_88; }
	inline float* get_address_of_m_lineSpacingMax_88() { return &___m_lineSpacingMax_88; }
	inline void set_m_lineSpacingMax_88(float value)
	{
		___m_lineSpacingMax_88 = value;
	}

	inline static int32_t get_offset_of_m_paragraphSpacing_89() { return static_cast<int32_t>(offsetof(TMP_Text_t2599618874, ___m_paragraphSpacing_89)); }
	inline float get_m_paragraphSpacing_89() const { return ___m_paragraphSpacing_89; }
	inline float* get_address_of_m_paragraphSpacing_89() { return &___m_paragraphSpacing_89; }
	inline void set_m_paragraphSpacing_89(float value)
	{
		___m_paragraphSpacing_89 = value;
	}

	inline static int32_t get_offset_of_m_charWidthMaxAdj_90() { return static_cast<int32_t>(offsetof(TMP_Text_t2599618874, ___m_charWidthMaxAdj_90)); }
	inline float get_m_charWidthMaxAdj_90() const { return ___m_charWidthMaxAdj_90; }
	inline float* get_address_of_m_charWidthMaxAdj_90() { return &___m_charWidthMaxAdj_90; }
	inline void set_m_charWidthMaxAdj_90(float value)
	{
		___m_charWidthMaxAdj_90 = value;
	}

	inline static int32_t get_offset_of_m_charWidthAdjDelta_91() { return static_cast<int32_t>(offsetof(TMP_Text_t2599618874, ___m_charWidthAdjDelta_91)); }
	inline float get_m_charWidthAdjDelta_91() const { return ___m_charWidthAdjDelta_91; }
	inline float* get_address_of_m_charWidthAdjDelta_91() { return &___m_charWidthAdjDelta_91; }
	inline void set_m_charWidthAdjDelta_91(float value)
	{
		___m_charWidthAdjDelta_91 = value;
	}

	inline static int32_t get_offset_of_m_enableWordWrapping_92() { return static_cast<int32_t>(offsetof(TMP_Text_t2599618874, ___m_enableWordWrapping_92)); }
	inline bool get_m_enableWordWrapping_92() const { return ___m_enableWordWrapping_92; }
	inline bool* get_address_of_m_enableWordWrapping_92() { return &___m_enableWordWrapping_92; }
	inline void set_m_enableWordWrapping_92(bool value)
	{
		___m_enableWordWrapping_92 = value;
	}

	inline static int32_t get_offset_of_m_isCharacterWrappingEnabled_93() { return static_cast<int32_t>(offsetof(TMP_Text_t2599618874, ___m_isCharacterWrappingEnabled_93)); }
	inline bool get_m_isCharacterWrappingEnabled_93() const { return ___m_isCharacterWrappingEnabled_93; }
	inline bool* get_address_of_m_isCharacterWrappingEnabled_93() { return &___m_isCharacterWrappingEnabled_93; }
	inline void set_m_isCharacterWrappingEnabled_93(bool value)
	{
		___m_isCharacterWrappingEnabled_93 = value;
	}

	inline static int32_t get_offset_of_m_isNonBreakingSpace_94() { return static_cast<int32_t>(offsetof(TMP_Text_t2599618874, ___m_isNonBreakingSpace_94)); }
	inline bool get_m_isNonBreakingSpace_94() const { return ___m_isNonBreakingSpace_94; }
	inline bool* get_address_of_m_isNonBreakingSpace_94() { return &___m_isNonBreakingSpace_94; }
	inline void set_m_isNonBreakingSpace_94(bool value)
	{
		___m_isNonBreakingSpace_94 = value;
	}

	inline static int32_t get_offset_of_m_isIgnoringAlignment_95() { return static_cast<int32_t>(offsetof(TMP_Text_t2599618874, ___m_isIgnoringAlignment_95)); }
	inline bool get_m_isIgnoringAlignment_95() const { return ___m_isIgnoringAlignment_95; }
	inline bool* get_address_of_m_isIgnoringAlignment_95() { return &___m_isIgnoringAlignment_95; }
	inline void set_m_isIgnoringAlignment_95(bool value)
	{
		___m_isIgnoringAlignment_95 = value;
	}

	inline static int32_t get_offset_of_m_wordWrappingRatios_96() { return static_cast<int32_t>(offsetof(TMP_Text_t2599618874, ___m_wordWrappingRatios_96)); }
	inline float get_m_wordWrappingRatios_96() const { return ___m_wordWrappingRatios_96; }
	inline float* get_address_of_m_wordWrappingRatios_96() { return &___m_wordWrappingRatios_96; }
	inline void set_m_wordWrappingRatios_96(float value)
	{
		___m_wordWrappingRatios_96 = value;
	}

	inline static int32_t get_offset_of_m_overflowMode_97() { return static_cast<int32_t>(offsetof(TMP_Text_t2599618874, ___m_overflowMode_97)); }
	inline int32_t get_m_overflowMode_97() const { return ___m_overflowMode_97; }
	inline int32_t* get_address_of_m_overflowMode_97() { return &___m_overflowMode_97; }
	inline void set_m_overflowMode_97(int32_t value)
	{
		___m_overflowMode_97 = value;
	}

	inline static int32_t get_offset_of_m_firstOverflowCharacterIndex_98() { return static_cast<int32_t>(offsetof(TMP_Text_t2599618874, ___m_firstOverflowCharacterIndex_98)); }
	inline int32_t get_m_firstOverflowCharacterIndex_98() const { return ___m_firstOverflowCharacterIndex_98; }
	inline int32_t* get_address_of_m_firstOverflowCharacterIndex_98() { return &___m_firstOverflowCharacterIndex_98; }
	inline void set_m_firstOverflowCharacterIndex_98(int32_t value)
	{
		___m_firstOverflowCharacterIndex_98 = value;
	}

	inline static int32_t get_offset_of_m_linkedTextComponent_99() { return static_cast<int32_t>(offsetof(TMP_Text_t2599618874, ___m_linkedTextComponent_99)); }
	inline TMP_Text_t2599618874 * get_m_linkedTextComponent_99() const { return ___m_linkedTextComponent_99; }
	inline TMP_Text_t2599618874 ** get_address_of_m_linkedTextComponent_99() { return &___m_linkedTextComponent_99; }
	inline void set_m_linkedTextComponent_99(TMP_Text_t2599618874 * value)
	{
		___m_linkedTextComponent_99 = value;
		Il2CppCodeGenWriteBarrier((&___m_linkedTextComponent_99), value);
	}

	inline static int32_t get_offset_of_m_isLinkedTextComponent_100() { return static_cast<int32_t>(offsetof(TMP_Text_t2599618874, ___m_isLinkedTextComponent_100)); }
	inline bool get_m_isLinkedTextComponent_100() const { return ___m_isLinkedTextComponent_100; }
	inline bool* get_address_of_m_isLinkedTextComponent_100() { return &___m_isLinkedTextComponent_100; }
	inline void set_m_isLinkedTextComponent_100(bool value)
	{
		___m_isLinkedTextComponent_100 = value;
	}

	inline static int32_t get_offset_of_m_isTextTruncated_101() { return static_cast<int32_t>(offsetof(TMP_Text_t2599618874, ___m_isTextTruncated_101)); }
	inline bool get_m_isTextTruncated_101() const { return ___m_isTextTruncated_101; }
	inline bool* get_address_of_m_isTextTruncated_101() { return &___m_isTextTruncated_101; }
	inline void set_m_isTextTruncated_101(bool value)
	{
		___m_isTextTruncated_101 = value;
	}

	inline static int32_t get_offset_of_m_enableKerning_102() { return static_cast<int32_t>(offsetof(TMP_Text_t2599618874, ___m_enableKerning_102)); }
	inline bool get_m_enableKerning_102() const { return ___m_enableKerning_102; }
	inline bool* get_address_of_m_enableKerning_102() { return &___m_enableKerning_102; }
	inline void set_m_enableKerning_102(bool value)
	{
		___m_enableKerning_102 = value;
	}

	inline static int32_t get_offset_of_m_enableExtraPadding_103() { return static_cast<int32_t>(offsetof(TMP_Text_t2599618874, ___m_enableExtraPadding_103)); }
	inline bool get_m_enableExtraPadding_103() const { return ___m_enableExtraPadding_103; }
	inline bool* get_address_of_m_enableExtraPadding_103() { return &___m_enableExtraPadding_103; }
	inline void set_m_enableExtraPadding_103(bool value)
	{
		___m_enableExtraPadding_103 = value;
	}

	inline static int32_t get_offset_of_checkPaddingRequired_104() { return static_cast<int32_t>(offsetof(TMP_Text_t2599618874, ___checkPaddingRequired_104)); }
	inline bool get_checkPaddingRequired_104() const { return ___checkPaddingRequired_104; }
	inline bool* get_address_of_checkPaddingRequired_104() { return &___checkPaddingRequired_104; }
	inline void set_checkPaddingRequired_104(bool value)
	{
		___checkPaddingRequired_104 = value;
	}

	inline static int32_t get_offset_of_m_isRichText_105() { return static_cast<int32_t>(offsetof(TMP_Text_t2599618874, ___m_isRichText_105)); }
	inline bool get_m_isRichText_105() const { return ___m_isRichText_105; }
	inline bool* get_address_of_m_isRichText_105() { return &___m_isRichText_105; }
	inline void set_m_isRichText_105(bool value)
	{
		___m_isRichText_105 = value;
	}

	inline static int32_t get_offset_of_m_parseCtrlCharacters_106() { return static_cast<int32_t>(offsetof(TMP_Text_t2599618874, ___m_parseCtrlCharacters_106)); }
	inline bool get_m_parseCtrlCharacters_106() const { return ___m_parseCtrlCharacters_106; }
	inline bool* get_address_of_m_parseCtrlCharacters_106() { return &___m_parseCtrlCharacters_106; }
	inline void set_m_parseCtrlCharacters_106(bool value)
	{
		___m_parseCtrlCharacters_106 = value;
	}

	inline static int32_t get_offset_of_m_isOverlay_107() { return static_cast<int32_t>(offsetof(TMP_Text_t2599618874, ___m_isOverlay_107)); }
	inline bool get_m_isOverlay_107() const { return ___m_isOverlay_107; }
	inline bool* get_address_of_m_isOverlay_107() { return &___m_isOverlay_107; }
	inline void set_m_isOverlay_107(bool value)
	{
		___m_isOverlay_107 = value;
	}

	inline static int32_t get_offset_of_m_isOrthographic_108() { return static_cast<int32_t>(offsetof(TMP_Text_t2599618874, ___m_isOrthographic_108)); }
	inline bool get_m_isOrthographic_108() const { return ___m_isOrthographic_108; }
	inline bool* get_address_of_m_isOrthographic_108() { return &___m_isOrthographic_108; }
	inline void set_m_isOrthographic_108(bool value)
	{
		___m_isOrthographic_108 = value;
	}

	inline static int32_t get_offset_of_m_isCullingEnabled_109() { return static_cast<int32_t>(offsetof(TMP_Text_t2599618874, ___m_isCullingEnabled_109)); }
	inline bool get_m_isCullingEnabled_109() const { return ___m_isCullingEnabled_109; }
	inline bool* get_address_of_m_isCullingEnabled_109() { return &___m_isCullingEnabled_109; }
	inline void set_m_isCullingEnabled_109(bool value)
	{
		___m_isCullingEnabled_109 = value;
	}

	inline static int32_t get_offset_of_m_ignoreRectMaskCulling_110() { return static_cast<int32_t>(offsetof(TMP_Text_t2599618874, ___m_ignoreRectMaskCulling_110)); }
	inline bool get_m_ignoreRectMaskCulling_110() const { return ___m_ignoreRectMaskCulling_110; }
	inline bool* get_address_of_m_ignoreRectMaskCulling_110() { return &___m_ignoreRectMaskCulling_110; }
	inline void set_m_ignoreRectMaskCulling_110(bool value)
	{
		___m_ignoreRectMaskCulling_110 = value;
	}

	inline static int32_t get_offset_of_m_ignoreCulling_111() { return static_cast<int32_t>(offsetof(TMP_Text_t2599618874, ___m_ignoreCulling_111)); }
	inline bool get_m_ignoreCulling_111() const { return ___m_ignoreCulling_111; }
	inline bool* get_address_of_m_ignoreCulling_111() { return &___m_ignoreCulling_111; }
	inline void set_m_ignoreCulling_111(bool value)
	{
		___m_ignoreCulling_111 = value;
	}

	inline static int32_t get_offset_of_m_horizontalMapping_112() { return static_cast<int32_t>(offsetof(TMP_Text_t2599618874, ___m_horizontalMapping_112)); }
	inline int32_t get_m_horizontalMapping_112() const { return ___m_horizontalMapping_112; }
	inline int32_t* get_address_of_m_horizontalMapping_112() { return &___m_horizontalMapping_112; }
	inline void set_m_horizontalMapping_112(int32_t value)
	{
		___m_horizontalMapping_112 = value;
	}

	inline static int32_t get_offset_of_m_verticalMapping_113() { return static_cast<int32_t>(offsetof(TMP_Text_t2599618874, ___m_verticalMapping_113)); }
	inline int32_t get_m_verticalMapping_113() const { return ___m_verticalMapping_113; }
	inline int32_t* get_address_of_m_verticalMapping_113() { return &___m_verticalMapping_113; }
	inline void set_m_verticalMapping_113(int32_t value)
	{
		___m_verticalMapping_113 = value;
	}

	inline static int32_t get_offset_of_m_uvLineOffset_114() { return static_cast<int32_t>(offsetof(TMP_Text_t2599618874, ___m_uvLineOffset_114)); }
	inline float get_m_uvLineOffset_114() const { return ___m_uvLineOffset_114; }
	inline float* get_address_of_m_uvLineOffset_114() { return &___m_uvLineOffset_114; }
	inline void set_m_uvLineOffset_114(float value)
	{
		___m_uvLineOffset_114 = value;
	}

	inline static int32_t get_offset_of_m_renderMode_115() { return static_cast<int32_t>(offsetof(TMP_Text_t2599618874, ___m_renderMode_115)); }
	inline int32_t get_m_renderMode_115() const { return ___m_renderMode_115; }
	inline int32_t* get_address_of_m_renderMode_115() { return &___m_renderMode_115; }
	inline void set_m_renderMode_115(int32_t value)
	{
		___m_renderMode_115 = value;
	}

	inline static int32_t get_offset_of_m_geometrySortingOrder_116() { return static_cast<int32_t>(offsetof(TMP_Text_t2599618874, ___m_geometrySortingOrder_116)); }
	inline int32_t get_m_geometrySortingOrder_116() const { return ___m_geometrySortingOrder_116; }
	inline int32_t* get_address_of_m_geometrySortingOrder_116() { return &___m_geometrySortingOrder_116; }
	inline void set_m_geometrySortingOrder_116(int32_t value)
	{
		___m_geometrySortingOrder_116 = value;
	}

	inline static int32_t get_offset_of_m_firstVisibleCharacter_117() { return static_cast<int32_t>(offsetof(TMP_Text_t2599618874, ___m_firstVisibleCharacter_117)); }
	inline int32_t get_m_firstVisibleCharacter_117() const { return ___m_firstVisibleCharacter_117; }
	inline int32_t* get_address_of_m_firstVisibleCharacter_117() { return &___m_firstVisibleCharacter_117; }
	inline void set_m_firstVisibleCharacter_117(int32_t value)
	{
		___m_firstVisibleCharacter_117 = value;
	}

	inline static int32_t get_offset_of_m_maxVisibleCharacters_118() { return static_cast<int32_t>(offsetof(TMP_Text_t2599618874, ___m_maxVisibleCharacters_118)); }
	inline int32_t get_m_maxVisibleCharacters_118() const { return ___m_maxVisibleCharacters_118; }
	inline int32_t* get_address_of_m_maxVisibleCharacters_118() { return &___m_maxVisibleCharacters_118; }
	inline void set_m_maxVisibleCharacters_118(int32_t value)
	{
		___m_maxVisibleCharacters_118 = value;
	}

	inline static int32_t get_offset_of_m_maxVisibleWords_119() { return static_cast<int32_t>(offsetof(TMP_Text_t2599618874, ___m_maxVisibleWords_119)); }
	inline int32_t get_m_maxVisibleWords_119() const { return ___m_maxVisibleWords_119; }
	inline int32_t* get_address_of_m_maxVisibleWords_119() { return &___m_maxVisibleWords_119; }
	inline void set_m_maxVisibleWords_119(int32_t value)
	{
		___m_maxVisibleWords_119 = value;
	}

	inline static int32_t get_offset_of_m_maxVisibleLines_120() { return static_cast<int32_t>(offsetof(TMP_Text_t2599618874, ___m_maxVisibleLines_120)); }
	inline int32_t get_m_maxVisibleLines_120() const { return ___m_maxVisibleLines_120; }
	inline int32_t* get_address_of_m_maxVisibleLines_120() { return &___m_maxVisibleLines_120; }
	inline void set_m_maxVisibleLines_120(int32_t value)
	{
		___m_maxVisibleLines_120 = value;
	}

	inline static int32_t get_offset_of_m_useMaxVisibleDescender_121() { return static_cast<int32_t>(offsetof(TMP_Text_t2599618874, ___m_useMaxVisibleDescender_121)); }
	inline bool get_m_useMaxVisibleDescender_121() const { return ___m_useMaxVisibleDescender_121; }
	inline bool* get_address_of_m_useMaxVisibleDescender_121() { return &___m_useMaxVisibleDescender_121; }
	inline void set_m_useMaxVisibleDescender_121(bool value)
	{
		___m_useMaxVisibleDescender_121 = value;
	}

	inline static int32_t get_offset_of_m_pageToDisplay_122() { return static_cast<int32_t>(offsetof(TMP_Text_t2599618874, ___m_pageToDisplay_122)); }
	inline int32_t get_m_pageToDisplay_122() const { return ___m_pageToDisplay_122; }
	inline int32_t* get_address_of_m_pageToDisplay_122() { return &___m_pageToDisplay_122; }
	inline void set_m_pageToDisplay_122(int32_t value)
	{
		___m_pageToDisplay_122 = value;
	}

	inline static int32_t get_offset_of_m_isNewPage_123() { return static_cast<int32_t>(offsetof(TMP_Text_t2599618874, ___m_isNewPage_123)); }
	inline bool get_m_isNewPage_123() const { return ___m_isNewPage_123; }
	inline bool* get_address_of_m_isNewPage_123() { return &___m_isNewPage_123; }
	inline void set_m_isNewPage_123(bool value)
	{
		___m_isNewPage_123 = value;
	}

	inline static int32_t get_offset_of_m_margin_124() { return static_cast<int32_t>(offsetof(TMP_Text_t2599618874, ___m_margin_124)); }
	inline Vector4_t3319028937  get_m_margin_124() const { return ___m_margin_124; }
	inline Vector4_t3319028937 * get_address_of_m_margin_124() { return &___m_margin_124; }
	inline void set_m_margin_124(Vector4_t3319028937  value)
	{
		___m_margin_124 = value;
	}

	inline static int32_t get_offset_of_m_marginLeft_125() { return static_cast<int32_t>(offsetof(TMP_Text_t2599618874, ___m_marginLeft_125)); }
	inline float get_m_marginLeft_125() const { return ___m_marginLeft_125; }
	inline float* get_address_of_m_marginLeft_125() { return &___m_marginLeft_125; }
	inline void set_m_marginLeft_125(float value)
	{
		___m_marginLeft_125 = value;
	}

	inline static int32_t get_offset_of_m_marginRight_126() { return static_cast<int32_t>(offsetof(TMP_Text_t2599618874, ___m_marginRight_126)); }
	inline float get_m_marginRight_126() const { return ___m_marginRight_126; }
	inline float* get_address_of_m_marginRight_126() { return &___m_marginRight_126; }
	inline void set_m_marginRight_126(float value)
	{
		___m_marginRight_126 = value;
	}

	inline static int32_t get_offset_of_m_marginWidth_127() { return static_cast<int32_t>(offsetof(TMP_Text_t2599618874, ___m_marginWidth_127)); }
	inline float get_m_marginWidth_127() const { return ___m_marginWidth_127; }
	inline float* get_address_of_m_marginWidth_127() { return &___m_marginWidth_127; }
	inline void set_m_marginWidth_127(float value)
	{
		___m_marginWidth_127 = value;
	}

	inline static int32_t get_offset_of_m_marginHeight_128() { return static_cast<int32_t>(offsetof(TMP_Text_t2599618874, ___m_marginHeight_128)); }
	inline float get_m_marginHeight_128() const { return ___m_marginHeight_128; }
	inline float* get_address_of_m_marginHeight_128() { return &___m_marginHeight_128; }
	inline void set_m_marginHeight_128(float value)
	{
		___m_marginHeight_128 = value;
	}

	inline static int32_t get_offset_of_m_width_129() { return static_cast<int32_t>(offsetof(TMP_Text_t2599618874, ___m_width_129)); }
	inline float get_m_width_129() const { return ___m_width_129; }
	inline float* get_address_of_m_width_129() { return &___m_width_129; }
	inline void set_m_width_129(float value)
	{
		___m_width_129 = value;
	}

	inline static int32_t get_offset_of_m_textInfo_130() { return static_cast<int32_t>(offsetof(TMP_Text_t2599618874, ___m_textInfo_130)); }
	inline TMP_TextInfo_t3598145122 * get_m_textInfo_130() const { return ___m_textInfo_130; }
	inline TMP_TextInfo_t3598145122 ** get_address_of_m_textInfo_130() { return &___m_textInfo_130; }
	inline void set_m_textInfo_130(TMP_TextInfo_t3598145122 * value)
	{
		___m_textInfo_130 = value;
		Il2CppCodeGenWriteBarrier((&___m_textInfo_130), value);
	}

	inline static int32_t get_offset_of_m_havePropertiesChanged_131() { return static_cast<int32_t>(offsetof(TMP_Text_t2599618874, ___m_havePropertiesChanged_131)); }
	inline bool get_m_havePropertiesChanged_131() const { return ___m_havePropertiesChanged_131; }
	inline bool* get_address_of_m_havePropertiesChanged_131() { return &___m_havePropertiesChanged_131; }
	inline void set_m_havePropertiesChanged_131(bool value)
	{
		___m_havePropertiesChanged_131 = value;
	}

	inline static int32_t get_offset_of_m_isUsingLegacyAnimationComponent_132() { return static_cast<int32_t>(offsetof(TMP_Text_t2599618874, ___m_isUsingLegacyAnimationComponent_132)); }
	inline bool get_m_isUsingLegacyAnimationComponent_132() const { return ___m_isUsingLegacyAnimationComponent_132; }
	inline bool* get_address_of_m_isUsingLegacyAnimationComponent_132() { return &___m_isUsingLegacyAnimationComponent_132; }
	inline void set_m_isUsingLegacyAnimationComponent_132(bool value)
	{
		___m_isUsingLegacyAnimationComponent_132 = value;
	}

	inline static int32_t get_offset_of_m_transform_133() { return static_cast<int32_t>(offsetof(TMP_Text_t2599618874, ___m_transform_133)); }
	inline Transform_t3600365921 * get_m_transform_133() const { return ___m_transform_133; }
	inline Transform_t3600365921 ** get_address_of_m_transform_133() { return &___m_transform_133; }
	inline void set_m_transform_133(Transform_t3600365921 * value)
	{
		___m_transform_133 = value;
		Il2CppCodeGenWriteBarrier((&___m_transform_133), value);
	}

	inline static int32_t get_offset_of_m_rectTransform_134() { return static_cast<int32_t>(offsetof(TMP_Text_t2599618874, ___m_rectTransform_134)); }
	inline RectTransform_t3704657025 * get_m_rectTransform_134() const { return ___m_rectTransform_134; }
	inline RectTransform_t3704657025 ** get_address_of_m_rectTransform_134() { return &___m_rectTransform_134; }
	inline void set_m_rectTransform_134(RectTransform_t3704657025 * value)
	{
		___m_rectTransform_134 = value;
		Il2CppCodeGenWriteBarrier((&___m_rectTransform_134), value);
	}

	inline static int32_t get_offset_of_U3CautoSizeTextContainerU3Ek__BackingField_135() { return static_cast<int32_t>(offsetof(TMP_Text_t2599618874, ___U3CautoSizeTextContainerU3Ek__BackingField_135)); }
	inline bool get_U3CautoSizeTextContainerU3Ek__BackingField_135() const { return ___U3CautoSizeTextContainerU3Ek__BackingField_135; }
	inline bool* get_address_of_U3CautoSizeTextContainerU3Ek__BackingField_135() { return &___U3CautoSizeTextContainerU3Ek__BackingField_135; }
	inline void set_U3CautoSizeTextContainerU3Ek__BackingField_135(bool value)
	{
		___U3CautoSizeTextContainerU3Ek__BackingField_135 = value;
	}

	inline static int32_t get_offset_of_m_autoSizeTextContainer_136() { return static_cast<int32_t>(offsetof(TMP_Text_t2599618874, ___m_autoSizeTextContainer_136)); }
	inline bool get_m_autoSizeTextContainer_136() const { return ___m_autoSizeTextContainer_136; }
	inline bool* get_address_of_m_autoSizeTextContainer_136() { return &___m_autoSizeTextContainer_136; }
	inline void set_m_autoSizeTextContainer_136(bool value)
	{
		___m_autoSizeTextContainer_136 = value;
	}

	inline static int32_t get_offset_of_m_mesh_137() { return static_cast<int32_t>(offsetof(TMP_Text_t2599618874, ___m_mesh_137)); }
	inline Mesh_t3648964284 * get_m_mesh_137() const { return ___m_mesh_137; }
	inline Mesh_t3648964284 ** get_address_of_m_mesh_137() { return &___m_mesh_137; }
	inline void set_m_mesh_137(Mesh_t3648964284 * value)
	{
		___m_mesh_137 = value;
		Il2CppCodeGenWriteBarrier((&___m_mesh_137), value);
	}

	inline static int32_t get_offset_of_m_isVolumetricText_138() { return static_cast<int32_t>(offsetof(TMP_Text_t2599618874, ___m_isVolumetricText_138)); }
	inline bool get_m_isVolumetricText_138() const { return ___m_isVolumetricText_138; }
	inline bool* get_address_of_m_isVolumetricText_138() { return &___m_isVolumetricText_138; }
	inline void set_m_isVolumetricText_138(bool value)
	{
		___m_isVolumetricText_138 = value;
	}

	inline static int32_t get_offset_of_m_spriteAnimator_139() { return static_cast<int32_t>(offsetof(TMP_Text_t2599618874, ___m_spriteAnimator_139)); }
	inline TMP_SpriteAnimator_t2836635477 * get_m_spriteAnimator_139() const { return ___m_spriteAnimator_139; }
	inline TMP_SpriteAnimator_t2836635477 ** get_address_of_m_spriteAnimator_139() { return &___m_spriteAnimator_139; }
	inline void set_m_spriteAnimator_139(TMP_SpriteAnimator_t2836635477 * value)
	{
		___m_spriteAnimator_139 = value;
		Il2CppCodeGenWriteBarrier((&___m_spriteAnimator_139), value);
	}

	inline static int32_t get_offset_of_m_flexibleHeight_140() { return static_cast<int32_t>(offsetof(TMP_Text_t2599618874, ___m_flexibleHeight_140)); }
	inline float get_m_flexibleHeight_140() const { return ___m_flexibleHeight_140; }
	inline float* get_address_of_m_flexibleHeight_140() { return &___m_flexibleHeight_140; }
	inline void set_m_flexibleHeight_140(float value)
	{
		___m_flexibleHeight_140 = value;
	}

	inline static int32_t get_offset_of_m_flexibleWidth_141() { return static_cast<int32_t>(offsetof(TMP_Text_t2599618874, ___m_flexibleWidth_141)); }
	inline float get_m_flexibleWidth_141() const { return ___m_flexibleWidth_141; }
	inline float* get_address_of_m_flexibleWidth_141() { return &___m_flexibleWidth_141; }
	inline void set_m_flexibleWidth_141(float value)
	{
		___m_flexibleWidth_141 = value;
	}

	inline static int32_t get_offset_of_m_minWidth_142() { return static_cast<int32_t>(offsetof(TMP_Text_t2599618874, ___m_minWidth_142)); }
	inline float get_m_minWidth_142() const { return ___m_minWidth_142; }
	inline float* get_address_of_m_minWidth_142() { return &___m_minWidth_142; }
	inline void set_m_minWidth_142(float value)
	{
		___m_minWidth_142 = value;
	}

	inline static int32_t get_offset_of_m_minHeight_143() { return static_cast<int32_t>(offsetof(TMP_Text_t2599618874, ___m_minHeight_143)); }
	inline float get_m_minHeight_143() const { return ___m_minHeight_143; }
	inline float* get_address_of_m_minHeight_143() { return &___m_minHeight_143; }
	inline void set_m_minHeight_143(float value)
	{
		___m_minHeight_143 = value;
	}

	inline static int32_t get_offset_of_m_maxWidth_144() { return static_cast<int32_t>(offsetof(TMP_Text_t2599618874, ___m_maxWidth_144)); }
	inline float get_m_maxWidth_144() const { return ___m_maxWidth_144; }
	inline float* get_address_of_m_maxWidth_144() { return &___m_maxWidth_144; }
	inline void set_m_maxWidth_144(float value)
	{
		___m_maxWidth_144 = value;
	}

	inline static int32_t get_offset_of_m_maxHeight_145() { return static_cast<int32_t>(offsetof(TMP_Text_t2599618874, ___m_maxHeight_145)); }
	inline float get_m_maxHeight_145() const { return ___m_maxHeight_145; }
	inline float* get_address_of_m_maxHeight_145() { return &___m_maxHeight_145; }
	inline void set_m_maxHeight_145(float value)
	{
		___m_maxHeight_145 = value;
	}

	inline static int32_t get_offset_of_m_LayoutElement_146() { return static_cast<int32_t>(offsetof(TMP_Text_t2599618874, ___m_LayoutElement_146)); }
	inline LayoutElement_t1785403678 * get_m_LayoutElement_146() const { return ___m_LayoutElement_146; }
	inline LayoutElement_t1785403678 ** get_address_of_m_LayoutElement_146() { return &___m_LayoutElement_146; }
	inline void set_m_LayoutElement_146(LayoutElement_t1785403678 * value)
	{
		___m_LayoutElement_146 = value;
		Il2CppCodeGenWriteBarrier((&___m_LayoutElement_146), value);
	}

	inline static int32_t get_offset_of_m_preferredWidth_147() { return static_cast<int32_t>(offsetof(TMP_Text_t2599618874, ___m_preferredWidth_147)); }
	inline float get_m_preferredWidth_147() const { return ___m_preferredWidth_147; }
	inline float* get_address_of_m_preferredWidth_147() { return &___m_preferredWidth_147; }
	inline void set_m_preferredWidth_147(float value)
	{
		___m_preferredWidth_147 = value;
	}

	inline static int32_t get_offset_of_m_renderedWidth_148() { return static_cast<int32_t>(offsetof(TMP_Text_t2599618874, ___m_renderedWidth_148)); }
	inline float get_m_renderedWidth_148() const { return ___m_renderedWidth_148; }
	inline float* get_address_of_m_renderedWidth_148() { return &___m_renderedWidth_148; }
	inline void set_m_renderedWidth_148(float value)
	{
		___m_renderedWidth_148 = value;
	}

	inline static int32_t get_offset_of_m_isPreferredWidthDirty_149() { return static_cast<int32_t>(offsetof(TMP_Text_t2599618874, ___m_isPreferredWidthDirty_149)); }
	inline bool get_m_isPreferredWidthDirty_149() const { return ___m_isPreferredWidthDirty_149; }
	inline bool* get_address_of_m_isPreferredWidthDirty_149() { return &___m_isPreferredWidthDirty_149; }
	inline void set_m_isPreferredWidthDirty_149(bool value)
	{
		___m_isPreferredWidthDirty_149 = value;
	}

	inline static int32_t get_offset_of_m_preferredHeight_150() { return static_cast<int32_t>(offsetof(TMP_Text_t2599618874, ___m_preferredHeight_150)); }
	inline float get_m_preferredHeight_150() const { return ___m_preferredHeight_150; }
	inline float* get_address_of_m_preferredHeight_150() { return &___m_preferredHeight_150; }
	inline void set_m_preferredHeight_150(float value)
	{
		___m_preferredHeight_150 = value;
	}

	inline static int32_t get_offset_of_m_renderedHeight_151() { return static_cast<int32_t>(offsetof(TMP_Text_t2599618874, ___m_renderedHeight_151)); }
	inline float get_m_renderedHeight_151() const { return ___m_renderedHeight_151; }
	inline float* get_address_of_m_renderedHeight_151() { return &___m_renderedHeight_151; }
	inline void set_m_renderedHeight_151(float value)
	{
		___m_renderedHeight_151 = value;
	}

	inline static int32_t get_offset_of_m_isPreferredHeightDirty_152() { return static_cast<int32_t>(offsetof(TMP_Text_t2599618874, ___m_isPreferredHeightDirty_152)); }
	inline bool get_m_isPreferredHeightDirty_152() const { return ___m_isPreferredHeightDirty_152; }
	inline bool* get_address_of_m_isPreferredHeightDirty_152() { return &___m_isPreferredHeightDirty_152; }
	inline void set_m_isPreferredHeightDirty_152(bool value)
	{
		___m_isPreferredHeightDirty_152 = value;
	}

	inline static int32_t get_offset_of_m_isCalculatingPreferredValues_153() { return static_cast<int32_t>(offsetof(TMP_Text_t2599618874, ___m_isCalculatingPreferredValues_153)); }
	inline bool get_m_isCalculatingPreferredValues_153() const { return ___m_isCalculatingPreferredValues_153; }
	inline bool* get_address_of_m_isCalculatingPreferredValues_153() { return &___m_isCalculatingPreferredValues_153; }
	inline void set_m_isCalculatingPreferredValues_153(bool value)
	{
		___m_isCalculatingPreferredValues_153 = value;
	}

	inline static int32_t get_offset_of_m_recursiveCount_154() { return static_cast<int32_t>(offsetof(TMP_Text_t2599618874, ___m_recursiveCount_154)); }
	inline int32_t get_m_recursiveCount_154() const { return ___m_recursiveCount_154; }
	inline int32_t* get_address_of_m_recursiveCount_154() { return &___m_recursiveCount_154; }
	inline void set_m_recursiveCount_154(int32_t value)
	{
		___m_recursiveCount_154 = value;
	}

	inline static int32_t get_offset_of_m_layoutPriority_155() { return static_cast<int32_t>(offsetof(TMP_Text_t2599618874, ___m_layoutPriority_155)); }
	inline int32_t get_m_layoutPriority_155() const { return ___m_layoutPriority_155; }
	inline int32_t* get_address_of_m_layoutPriority_155() { return &___m_layoutPriority_155; }
	inline void set_m_layoutPriority_155(int32_t value)
	{
		___m_layoutPriority_155 = value;
	}

	inline static int32_t get_offset_of_m_isCalculateSizeRequired_156() { return static_cast<int32_t>(offsetof(TMP_Text_t2599618874, ___m_isCalculateSizeRequired_156)); }
	inline bool get_m_isCalculateSizeRequired_156() const { return ___m_isCalculateSizeRequired_156; }
	inline bool* get_address_of_m_isCalculateSizeRequired_156() { return &___m_isCalculateSizeRequired_156; }
	inline void set_m_isCalculateSizeRequired_156(bool value)
	{
		___m_isCalculateSizeRequired_156 = value;
	}

	inline static int32_t get_offset_of_m_isLayoutDirty_157() { return static_cast<int32_t>(offsetof(TMP_Text_t2599618874, ___m_isLayoutDirty_157)); }
	inline bool get_m_isLayoutDirty_157() const { return ___m_isLayoutDirty_157; }
	inline bool* get_address_of_m_isLayoutDirty_157() { return &___m_isLayoutDirty_157; }
	inline void set_m_isLayoutDirty_157(bool value)
	{
		___m_isLayoutDirty_157 = value;
	}

	inline static int32_t get_offset_of_m_verticesAlreadyDirty_158() { return static_cast<int32_t>(offsetof(TMP_Text_t2599618874, ___m_verticesAlreadyDirty_158)); }
	inline bool get_m_verticesAlreadyDirty_158() const { return ___m_verticesAlreadyDirty_158; }
	inline bool* get_address_of_m_verticesAlreadyDirty_158() { return &___m_verticesAlreadyDirty_158; }
	inline void set_m_verticesAlreadyDirty_158(bool value)
	{
		___m_verticesAlreadyDirty_158 = value;
	}

	inline static int32_t get_offset_of_m_layoutAlreadyDirty_159() { return static_cast<int32_t>(offsetof(TMP_Text_t2599618874, ___m_layoutAlreadyDirty_159)); }
	inline bool get_m_layoutAlreadyDirty_159() const { return ___m_layoutAlreadyDirty_159; }
	inline bool* get_address_of_m_layoutAlreadyDirty_159() { return &___m_layoutAlreadyDirty_159; }
	inline void set_m_layoutAlreadyDirty_159(bool value)
	{
		___m_layoutAlreadyDirty_159 = value;
	}

	inline static int32_t get_offset_of_m_isAwake_160() { return static_cast<int32_t>(offsetof(TMP_Text_t2599618874, ___m_isAwake_160)); }
	inline bool get_m_isAwake_160() const { return ___m_isAwake_160; }
	inline bool* get_address_of_m_isAwake_160() { return &___m_isAwake_160; }
	inline void set_m_isAwake_160(bool value)
	{
		___m_isAwake_160 = value;
	}

	inline static int32_t get_offset_of_m_isInputParsingRequired_161() { return static_cast<int32_t>(offsetof(TMP_Text_t2599618874, ___m_isInputParsingRequired_161)); }
	inline bool get_m_isInputParsingRequired_161() const { return ___m_isInputParsingRequired_161; }
	inline bool* get_address_of_m_isInputParsingRequired_161() { return &___m_isInputParsingRequired_161; }
	inline void set_m_isInputParsingRequired_161(bool value)
	{
		___m_isInputParsingRequired_161 = value;
	}

	inline static int32_t get_offset_of_m_inputSource_162() { return static_cast<int32_t>(offsetof(TMP_Text_t2599618874, ___m_inputSource_162)); }
	inline int32_t get_m_inputSource_162() const { return ___m_inputSource_162; }
	inline int32_t* get_address_of_m_inputSource_162() { return &___m_inputSource_162; }
	inline void set_m_inputSource_162(int32_t value)
	{
		___m_inputSource_162 = value;
	}

	inline static int32_t get_offset_of_old_text_163() { return static_cast<int32_t>(offsetof(TMP_Text_t2599618874, ___old_text_163)); }
	inline String_t* get_old_text_163() const { return ___old_text_163; }
	inline String_t** get_address_of_old_text_163() { return &___old_text_163; }
	inline void set_old_text_163(String_t* value)
	{
		___old_text_163 = value;
		Il2CppCodeGenWriteBarrier((&___old_text_163), value);
	}

	inline static int32_t get_offset_of_m_fontScale_164() { return static_cast<int32_t>(offsetof(TMP_Text_t2599618874, ___m_fontScale_164)); }
	inline float get_m_fontScale_164() const { return ___m_fontScale_164; }
	inline float* get_address_of_m_fontScale_164() { return &___m_fontScale_164; }
	inline void set_m_fontScale_164(float value)
	{
		___m_fontScale_164 = value;
	}

	inline static int32_t get_offset_of_m_fontScaleMultiplier_165() { return static_cast<int32_t>(offsetof(TMP_Text_t2599618874, ___m_fontScaleMultiplier_165)); }
	inline float get_m_fontScaleMultiplier_165() const { return ___m_fontScaleMultiplier_165; }
	inline float* get_address_of_m_fontScaleMultiplier_165() { return &___m_fontScaleMultiplier_165; }
	inline void set_m_fontScaleMultiplier_165(float value)
	{
		___m_fontScaleMultiplier_165 = value;
	}

	inline static int32_t get_offset_of_m_htmlTag_166() { return static_cast<int32_t>(offsetof(TMP_Text_t2599618874, ___m_htmlTag_166)); }
	inline CharU5BU5D_t3528271667* get_m_htmlTag_166() const { return ___m_htmlTag_166; }
	inline CharU5BU5D_t3528271667** get_address_of_m_htmlTag_166() { return &___m_htmlTag_166; }
	inline void set_m_htmlTag_166(CharU5BU5D_t3528271667* value)
	{
		___m_htmlTag_166 = value;
		Il2CppCodeGenWriteBarrier((&___m_htmlTag_166), value);
	}

	inline static int32_t get_offset_of_m_xmlAttribute_167() { return static_cast<int32_t>(offsetof(TMP_Text_t2599618874, ___m_xmlAttribute_167)); }
	inline XML_TagAttributeU5BU5D_t284240280* get_m_xmlAttribute_167() const { return ___m_xmlAttribute_167; }
	inline XML_TagAttributeU5BU5D_t284240280** get_address_of_m_xmlAttribute_167() { return &___m_xmlAttribute_167; }
	inline void set_m_xmlAttribute_167(XML_TagAttributeU5BU5D_t284240280* value)
	{
		___m_xmlAttribute_167 = value;
		Il2CppCodeGenWriteBarrier((&___m_xmlAttribute_167), value);
	}

	inline static int32_t get_offset_of_m_attributeParameterValues_168() { return static_cast<int32_t>(offsetof(TMP_Text_t2599618874, ___m_attributeParameterValues_168)); }
	inline SingleU5BU5D_t1444911251* get_m_attributeParameterValues_168() const { return ___m_attributeParameterValues_168; }
	inline SingleU5BU5D_t1444911251** get_address_of_m_attributeParameterValues_168() { return &___m_attributeParameterValues_168; }
	inline void set_m_attributeParameterValues_168(SingleU5BU5D_t1444911251* value)
	{
		___m_attributeParameterValues_168 = value;
		Il2CppCodeGenWriteBarrier((&___m_attributeParameterValues_168), value);
	}

	inline static int32_t get_offset_of_tag_LineIndent_169() { return static_cast<int32_t>(offsetof(TMP_Text_t2599618874, ___tag_LineIndent_169)); }
	inline float get_tag_LineIndent_169() const { return ___tag_LineIndent_169; }
	inline float* get_address_of_tag_LineIndent_169() { return &___tag_LineIndent_169; }
	inline void set_tag_LineIndent_169(float value)
	{
		___tag_LineIndent_169 = value;
	}

	inline static int32_t get_offset_of_tag_Indent_170() { return static_cast<int32_t>(offsetof(TMP_Text_t2599618874, ___tag_Indent_170)); }
	inline float get_tag_Indent_170() const { return ___tag_Indent_170; }
	inline float* get_address_of_tag_Indent_170() { return &___tag_Indent_170; }
	inline void set_tag_Indent_170(float value)
	{
		___tag_Indent_170 = value;
	}

	inline static int32_t get_offset_of_m_indentStack_171() { return static_cast<int32_t>(offsetof(TMP_Text_t2599618874, ___m_indentStack_171)); }
	inline TMP_XmlTagStack_1_t960921318  get_m_indentStack_171() const { return ___m_indentStack_171; }
	inline TMP_XmlTagStack_1_t960921318 * get_address_of_m_indentStack_171() { return &___m_indentStack_171; }
	inline void set_m_indentStack_171(TMP_XmlTagStack_1_t960921318  value)
	{
		___m_indentStack_171 = value;
	}

	inline static int32_t get_offset_of_tag_NoParsing_172() { return static_cast<int32_t>(offsetof(TMP_Text_t2599618874, ___tag_NoParsing_172)); }
	inline bool get_tag_NoParsing_172() const { return ___tag_NoParsing_172; }
	inline bool* get_address_of_tag_NoParsing_172() { return &___tag_NoParsing_172; }
	inline void set_tag_NoParsing_172(bool value)
	{
		___tag_NoParsing_172 = value;
	}

	inline static int32_t get_offset_of_m_isParsingText_173() { return static_cast<int32_t>(offsetof(TMP_Text_t2599618874, ___m_isParsingText_173)); }
	inline bool get_m_isParsingText_173() const { return ___m_isParsingText_173; }
	inline bool* get_address_of_m_isParsingText_173() { return &___m_isParsingText_173; }
	inline void set_m_isParsingText_173(bool value)
	{
		___m_isParsingText_173 = value;
	}

	inline static int32_t get_offset_of_m_FXMatrix_174() { return static_cast<int32_t>(offsetof(TMP_Text_t2599618874, ___m_FXMatrix_174)); }
	inline Matrix4x4_t1817901843  get_m_FXMatrix_174() const { return ___m_FXMatrix_174; }
	inline Matrix4x4_t1817901843 * get_address_of_m_FXMatrix_174() { return &___m_FXMatrix_174; }
	inline void set_m_FXMatrix_174(Matrix4x4_t1817901843  value)
	{
		___m_FXMatrix_174 = value;
	}

	inline static int32_t get_offset_of_m_isFXMatrixSet_175() { return static_cast<int32_t>(offsetof(TMP_Text_t2599618874, ___m_isFXMatrixSet_175)); }
	inline bool get_m_isFXMatrixSet_175() const { return ___m_isFXMatrixSet_175; }
	inline bool* get_address_of_m_isFXMatrixSet_175() { return &___m_isFXMatrixSet_175; }
	inline void set_m_isFXMatrixSet_175(bool value)
	{
		___m_isFXMatrixSet_175 = value;
	}

	inline static int32_t get_offset_of_m_char_buffer_176() { return static_cast<int32_t>(offsetof(TMP_Text_t2599618874, ___m_char_buffer_176)); }
	inline Int32U5BU5D_t385246372* get_m_char_buffer_176() const { return ___m_char_buffer_176; }
	inline Int32U5BU5D_t385246372** get_address_of_m_char_buffer_176() { return &___m_char_buffer_176; }
	inline void set_m_char_buffer_176(Int32U5BU5D_t385246372* value)
	{
		___m_char_buffer_176 = value;
		Il2CppCodeGenWriteBarrier((&___m_char_buffer_176), value);
	}

	inline static int32_t get_offset_of_m_internalCharacterInfo_177() { return static_cast<int32_t>(offsetof(TMP_Text_t2599618874, ___m_internalCharacterInfo_177)); }
	inline TMP_CharacterInfoU5BU5D_t1930184704* get_m_internalCharacterInfo_177() const { return ___m_internalCharacterInfo_177; }
	inline TMP_CharacterInfoU5BU5D_t1930184704** get_address_of_m_internalCharacterInfo_177() { return &___m_internalCharacterInfo_177; }
	inline void set_m_internalCharacterInfo_177(TMP_CharacterInfoU5BU5D_t1930184704* value)
	{
		___m_internalCharacterInfo_177 = value;
		Il2CppCodeGenWriteBarrier((&___m_internalCharacterInfo_177), value);
	}

	inline static int32_t get_offset_of_m_input_CharArray_178() { return static_cast<int32_t>(offsetof(TMP_Text_t2599618874, ___m_input_CharArray_178)); }
	inline CharU5BU5D_t3528271667* get_m_input_CharArray_178() const { return ___m_input_CharArray_178; }
	inline CharU5BU5D_t3528271667** get_address_of_m_input_CharArray_178() { return &___m_input_CharArray_178; }
	inline void set_m_input_CharArray_178(CharU5BU5D_t3528271667* value)
	{
		___m_input_CharArray_178 = value;
		Il2CppCodeGenWriteBarrier((&___m_input_CharArray_178), value);
	}

	inline static int32_t get_offset_of_m_charArray_Length_179() { return static_cast<int32_t>(offsetof(TMP_Text_t2599618874, ___m_charArray_Length_179)); }
	inline int32_t get_m_charArray_Length_179() const { return ___m_charArray_Length_179; }
	inline int32_t* get_address_of_m_charArray_Length_179() { return &___m_charArray_Length_179; }
	inline void set_m_charArray_Length_179(int32_t value)
	{
		___m_charArray_Length_179 = value;
	}

	inline static int32_t get_offset_of_m_totalCharacterCount_180() { return static_cast<int32_t>(offsetof(TMP_Text_t2599618874, ___m_totalCharacterCount_180)); }
	inline int32_t get_m_totalCharacterCount_180() const { return ___m_totalCharacterCount_180; }
	inline int32_t* get_address_of_m_totalCharacterCount_180() { return &___m_totalCharacterCount_180; }
	inline void set_m_totalCharacterCount_180(int32_t value)
	{
		___m_totalCharacterCount_180 = value;
	}

	inline static int32_t get_offset_of_m_SavedWordWrapState_181() { return static_cast<int32_t>(offsetof(TMP_Text_t2599618874, ___m_SavedWordWrapState_181)); }
	inline WordWrapState_t341939652  get_m_SavedWordWrapState_181() const { return ___m_SavedWordWrapState_181; }
	inline WordWrapState_t341939652 * get_address_of_m_SavedWordWrapState_181() { return &___m_SavedWordWrapState_181; }
	inline void set_m_SavedWordWrapState_181(WordWrapState_t341939652  value)
	{
		___m_SavedWordWrapState_181 = value;
	}

	inline static int32_t get_offset_of_m_SavedLineState_182() { return static_cast<int32_t>(offsetof(TMP_Text_t2599618874, ___m_SavedLineState_182)); }
	inline WordWrapState_t341939652  get_m_SavedLineState_182() const { return ___m_SavedLineState_182; }
	inline WordWrapState_t341939652 * get_address_of_m_SavedLineState_182() { return &___m_SavedLineState_182; }
	inline void set_m_SavedLineState_182(WordWrapState_t341939652  value)
	{
		___m_SavedLineState_182 = value;
	}

	inline static int32_t get_offset_of_m_characterCount_183() { return static_cast<int32_t>(offsetof(TMP_Text_t2599618874, ___m_characterCount_183)); }
	inline int32_t get_m_characterCount_183() const { return ___m_characterCount_183; }
	inline int32_t* get_address_of_m_characterCount_183() { return &___m_characterCount_183; }
	inline void set_m_characterCount_183(int32_t value)
	{
		___m_characterCount_183 = value;
	}

	inline static int32_t get_offset_of_m_firstCharacterOfLine_184() { return static_cast<int32_t>(offsetof(TMP_Text_t2599618874, ___m_firstCharacterOfLine_184)); }
	inline int32_t get_m_firstCharacterOfLine_184() const { return ___m_firstCharacterOfLine_184; }
	inline int32_t* get_address_of_m_firstCharacterOfLine_184() { return &___m_firstCharacterOfLine_184; }
	inline void set_m_firstCharacterOfLine_184(int32_t value)
	{
		___m_firstCharacterOfLine_184 = value;
	}

	inline static int32_t get_offset_of_m_firstVisibleCharacterOfLine_185() { return static_cast<int32_t>(offsetof(TMP_Text_t2599618874, ___m_firstVisibleCharacterOfLine_185)); }
	inline int32_t get_m_firstVisibleCharacterOfLine_185() const { return ___m_firstVisibleCharacterOfLine_185; }
	inline int32_t* get_address_of_m_firstVisibleCharacterOfLine_185() { return &___m_firstVisibleCharacterOfLine_185; }
	inline void set_m_firstVisibleCharacterOfLine_185(int32_t value)
	{
		___m_firstVisibleCharacterOfLine_185 = value;
	}

	inline static int32_t get_offset_of_m_lastCharacterOfLine_186() { return static_cast<int32_t>(offsetof(TMP_Text_t2599618874, ___m_lastCharacterOfLine_186)); }
	inline int32_t get_m_lastCharacterOfLine_186() const { return ___m_lastCharacterOfLine_186; }
	inline int32_t* get_address_of_m_lastCharacterOfLine_186() { return &___m_lastCharacterOfLine_186; }
	inline void set_m_lastCharacterOfLine_186(int32_t value)
	{
		___m_lastCharacterOfLine_186 = value;
	}

	inline static int32_t get_offset_of_m_lastVisibleCharacterOfLine_187() { return static_cast<int32_t>(offsetof(TMP_Text_t2599618874, ___m_lastVisibleCharacterOfLine_187)); }
	inline int32_t get_m_lastVisibleCharacterOfLine_187() const { return ___m_lastVisibleCharacterOfLine_187; }
	inline int32_t* get_address_of_m_lastVisibleCharacterOfLine_187() { return &___m_lastVisibleCharacterOfLine_187; }
	inline void set_m_lastVisibleCharacterOfLine_187(int32_t value)
	{
		___m_lastVisibleCharacterOfLine_187 = value;
	}

	inline static int32_t get_offset_of_m_lineNumber_188() { return static_cast<int32_t>(offsetof(TMP_Text_t2599618874, ___m_lineNumber_188)); }
	inline int32_t get_m_lineNumber_188() const { return ___m_lineNumber_188; }
	inline int32_t* get_address_of_m_lineNumber_188() { return &___m_lineNumber_188; }
	inline void set_m_lineNumber_188(int32_t value)
	{
		___m_lineNumber_188 = value;
	}

	inline static int32_t get_offset_of_m_lineVisibleCharacterCount_189() { return static_cast<int32_t>(offsetof(TMP_Text_t2599618874, ___m_lineVisibleCharacterCount_189)); }
	inline int32_t get_m_lineVisibleCharacterCount_189() const { return ___m_lineVisibleCharacterCount_189; }
	inline int32_t* get_address_of_m_lineVisibleCharacterCount_189() { return &___m_lineVisibleCharacterCount_189; }
	inline void set_m_lineVisibleCharacterCount_189(int32_t value)
	{
		___m_lineVisibleCharacterCount_189 = value;
	}

	inline static int32_t get_offset_of_m_pageNumber_190() { return static_cast<int32_t>(offsetof(TMP_Text_t2599618874, ___m_pageNumber_190)); }
	inline int32_t get_m_pageNumber_190() const { return ___m_pageNumber_190; }
	inline int32_t* get_address_of_m_pageNumber_190() { return &___m_pageNumber_190; }
	inline void set_m_pageNumber_190(int32_t value)
	{
		___m_pageNumber_190 = value;
	}

	inline static int32_t get_offset_of_m_maxAscender_191() { return static_cast<int32_t>(offsetof(TMP_Text_t2599618874, ___m_maxAscender_191)); }
	inline float get_m_maxAscender_191() const { return ___m_maxAscender_191; }
	inline float* get_address_of_m_maxAscender_191() { return &___m_maxAscender_191; }
	inline void set_m_maxAscender_191(float value)
	{
		___m_maxAscender_191 = value;
	}

	inline static int32_t get_offset_of_m_maxCapHeight_192() { return static_cast<int32_t>(offsetof(TMP_Text_t2599618874, ___m_maxCapHeight_192)); }
	inline float get_m_maxCapHeight_192() const { return ___m_maxCapHeight_192; }
	inline float* get_address_of_m_maxCapHeight_192() { return &___m_maxCapHeight_192; }
	inline void set_m_maxCapHeight_192(float value)
	{
		___m_maxCapHeight_192 = value;
	}

	inline static int32_t get_offset_of_m_maxDescender_193() { return static_cast<int32_t>(offsetof(TMP_Text_t2599618874, ___m_maxDescender_193)); }
	inline float get_m_maxDescender_193() const { return ___m_maxDescender_193; }
	inline float* get_address_of_m_maxDescender_193() { return &___m_maxDescender_193; }
	inline void set_m_maxDescender_193(float value)
	{
		___m_maxDescender_193 = value;
	}

	inline static int32_t get_offset_of_m_maxLineAscender_194() { return static_cast<int32_t>(offsetof(TMP_Text_t2599618874, ___m_maxLineAscender_194)); }
	inline float get_m_maxLineAscender_194() const { return ___m_maxLineAscender_194; }
	inline float* get_address_of_m_maxLineAscender_194() { return &___m_maxLineAscender_194; }
	inline void set_m_maxLineAscender_194(float value)
	{
		___m_maxLineAscender_194 = value;
	}

	inline static int32_t get_offset_of_m_maxLineDescender_195() { return static_cast<int32_t>(offsetof(TMP_Text_t2599618874, ___m_maxLineDescender_195)); }
	inline float get_m_maxLineDescender_195() const { return ___m_maxLineDescender_195; }
	inline float* get_address_of_m_maxLineDescender_195() { return &___m_maxLineDescender_195; }
	inline void set_m_maxLineDescender_195(float value)
	{
		___m_maxLineDescender_195 = value;
	}

	inline static int32_t get_offset_of_m_startOfLineAscender_196() { return static_cast<int32_t>(offsetof(TMP_Text_t2599618874, ___m_startOfLineAscender_196)); }
	inline float get_m_startOfLineAscender_196() const { return ___m_startOfLineAscender_196; }
	inline float* get_address_of_m_startOfLineAscender_196() { return &___m_startOfLineAscender_196; }
	inline void set_m_startOfLineAscender_196(float value)
	{
		___m_startOfLineAscender_196 = value;
	}

	inline static int32_t get_offset_of_m_lineOffset_197() { return static_cast<int32_t>(offsetof(TMP_Text_t2599618874, ___m_lineOffset_197)); }
	inline float get_m_lineOffset_197() const { return ___m_lineOffset_197; }
	inline float* get_address_of_m_lineOffset_197() { return &___m_lineOffset_197; }
	inline void set_m_lineOffset_197(float value)
	{
		___m_lineOffset_197 = value;
	}

	inline static int32_t get_offset_of_m_meshExtents_198() { return static_cast<int32_t>(offsetof(TMP_Text_t2599618874, ___m_meshExtents_198)); }
	inline Extents_t3837212874  get_m_meshExtents_198() const { return ___m_meshExtents_198; }
	inline Extents_t3837212874 * get_address_of_m_meshExtents_198() { return &___m_meshExtents_198; }
	inline void set_m_meshExtents_198(Extents_t3837212874  value)
	{
		___m_meshExtents_198 = value;
	}

	inline static int32_t get_offset_of_m_htmlColor_199() { return static_cast<int32_t>(offsetof(TMP_Text_t2599618874, ___m_htmlColor_199)); }
	inline Color32_t2600501292  get_m_htmlColor_199() const { return ___m_htmlColor_199; }
	inline Color32_t2600501292 * get_address_of_m_htmlColor_199() { return &___m_htmlColor_199; }
	inline void set_m_htmlColor_199(Color32_t2600501292  value)
	{
		___m_htmlColor_199 = value;
	}

	inline static int32_t get_offset_of_m_colorStack_200() { return static_cast<int32_t>(offsetof(TMP_Text_t2599618874, ___m_colorStack_200)); }
	inline TMP_XmlTagStack_1_t2164155836  get_m_colorStack_200() const { return ___m_colorStack_200; }
	inline TMP_XmlTagStack_1_t2164155836 * get_address_of_m_colorStack_200() { return &___m_colorStack_200; }
	inline void set_m_colorStack_200(TMP_XmlTagStack_1_t2164155836  value)
	{
		___m_colorStack_200 = value;
	}

	inline static int32_t get_offset_of_m_underlineColorStack_201() { return static_cast<int32_t>(offsetof(TMP_Text_t2599618874, ___m_underlineColorStack_201)); }
	inline TMP_XmlTagStack_1_t2164155836  get_m_underlineColorStack_201() const { return ___m_underlineColorStack_201; }
	inline TMP_XmlTagStack_1_t2164155836 * get_address_of_m_underlineColorStack_201() { return &___m_underlineColorStack_201; }
	inline void set_m_underlineColorStack_201(TMP_XmlTagStack_1_t2164155836  value)
	{
		___m_underlineColorStack_201 = value;
	}

	inline static int32_t get_offset_of_m_strikethroughColorStack_202() { return static_cast<int32_t>(offsetof(TMP_Text_t2599618874, ___m_strikethroughColorStack_202)); }
	inline TMP_XmlTagStack_1_t2164155836  get_m_strikethroughColorStack_202() const { return ___m_strikethroughColorStack_202; }
	inline TMP_XmlTagStack_1_t2164155836 * get_address_of_m_strikethroughColorStack_202() { return &___m_strikethroughColorStack_202; }
	inline void set_m_strikethroughColorStack_202(TMP_XmlTagStack_1_t2164155836  value)
	{
		___m_strikethroughColorStack_202 = value;
	}

	inline static int32_t get_offset_of_m_highlightColorStack_203() { return static_cast<int32_t>(offsetof(TMP_Text_t2599618874, ___m_highlightColorStack_203)); }
	inline TMP_XmlTagStack_1_t2164155836  get_m_highlightColorStack_203() const { return ___m_highlightColorStack_203; }
	inline TMP_XmlTagStack_1_t2164155836 * get_address_of_m_highlightColorStack_203() { return &___m_highlightColorStack_203; }
	inline void set_m_highlightColorStack_203(TMP_XmlTagStack_1_t2164155836  value)
	{
		___m_highlightColorStack_203 = value;
	}

	inline static int32_t get_offset_of_m_colorGradientPreset_204() { return static_cast<int32_t>(offsetof(TMP_Text_t2599618874, ___m_colorGradientPreset_204)); }
	inline TMP_ColorGradient_t3678055768 * get_m_colorGradientPreset_204() const { return ___m_colorGradientPreset_204; }
	inline TMP_ColorGradient_t3678055768 ** get_address_of_m_colorGradientPreset_204() { return &___m_colorGradientPreset_204; }
	inline void set_m_colorGradientPreset_204(TMP_ColorGradient_t3678055768 * value)
	{
		___m_colorGradientPreset_204 = value;
		Il2CppCodeGenWriteBarrier((&___m_colorGradientPreset_204), value);
	}

	inline static int32_t get_offset_of_m_colorGradientStack_205() { return static_cast<int32_t>(offsetof(TMP_Text_t2599618874, ___m_colorGradientStack_205)); }
	inline TMP_XmlTagStack_1_t3241710312  get_m_colorGradientStack_205() const { return ___m_colorGradientStack_205; }
	inline TMP_XmlTagStack_1_t3241710312 * get_address_of_m_colorGradientStack_205() { return &___m_colorGradientStack_205; }
	inline void set_m_colorGradientStack_205(TMP_XmlTagStack_1_t3241710312  value)
	{
		___m_colorGradientStack_205 = value;
	}

	inline static int32_t get_offset_of_m_tabSpacing_206() { return static_cast<int32_t>(offsetof(TMP_Text_t2599618874, ___m_tabSpacing_206)); }
	inline float get_m_tabSpacing_206() const { return ___m_tabSpacing_206; }
	inline float* get_address_of_m_tabSpacing_206() { return &___m_tabSpacing_206; }
	inline void set_m_tabSpacing_206(float value)
	{
		___m_tabSpacing_206 = value;
	}

	inline static int32_t get_offset_of_m_spacing_207() { return static_cast<int32_t>(offsetof(TMP_Text_t2599618874, ___m_spacing_207)); }
	inline float get_m_spacing_207() const { return ___m_spacing_207; }
	inline float* get_address_of_m_spacing_207() { return &___m_spacing_207; }
	inline void set_m_spacing_207(float value)
	{
		___m_spacing_207 = value;
	}

	inline static int32_t get_offset_of_m_styleStack_208() { return static_cast<int32_t>(offsetof(TMP_Text_t2599618874, ___m_styleStack_208)); }
	inline TMP_XmlTagStack_1_t2514600297  get_m_styleStack_208() const { return ___m_styleStack_208; }
	inline TMP_XmlTagStack_1_t2514600297 * get_address_of_m_styleStack_208() { return &___m_styleStack_208; }
	inline void set_m_styleStack_208(TMP_XmlTagStack_1_t2514600297  value)
	{
		___m_styleStack_208 = value;
	}

	inline static int32_t get_offset_of_m_actionStack_209() { return static_cast<int32_t>(offsetof(TMP_Text_t2599618874, ___m_actionStack_209)); }
	inline TMP_XmlTagStack_1_t2514600297  get_m_actionStack_209() const { return ___m_actionStack_209; }
	inline TMP_XmlTagStack_1_t2514600297 * get_address_of_m_actionStack_209() { return &___m_actionStack_209; }
	inline void set_m_actionStack_209(TMP_XmlTagStack_1_t2514600297  value)
	{
		___m_actionStack_209 = value;
	}

	inline static int32_t get_offset_of_m_padding_210() { return static_cast<int32_t>(offsetof(TMP_Text_t2599618874, ___m_padding_210)); }
	inline float get_m_padding_210() const { return ___m_padding_210; }
	inline float* get_address_of_m_padding_210() { return &___m_padding_210; }
	inline void set_m_padding_210(float value)
	{
		___m_padding_210 = value;
	}

	inline static int32_t get_offset_of_m_baselineOffset_211() { return static_cast<int32_t>(offsetof(TMP_Text_t2599618874, ___m_baselineOffset_211)); }
	inline float get_m_baselineOffset_211() const { return ___m_baselineOffset_211; }
	inline float* get_address_of_m_baselineOffset_211() { return &___m_baselineOffset_211; }
	inline void set_m_baselineOffset_211(float value)
	{
		___m_baselineOffset_211 = value;
	}

	inline static int32_t get_offset_of_m_baselineOffsetStack_212() { return static_cast<int32_t>(offsetof(TMP_Text_t2599618874, ___m_baselineOffsetStack_212)); }
	inline TMP_XmlTagStack_1_t960921318  get_m_baselineOffsetStack_212() const { return ___m_baselineOffsetStack_212; }
	inline TMP_XmlTagStack_1_t960921318 * get_address_of_m_baselineOffsetStack_212() { return &___m_baselineOffsetStack_212; }
	inline void set_m_baselineOffsetStack_212(TMP_XmlTagStack_1_t960921318  value)
	{
		___m_baselineOffsetStack_212 = value;
	}

	inline static int32_t get_offset_of_m_xAdvance_213() { return static_cast<int32_t>(offsetof(TMP_Text_t2599618874, ___m_xAdvance_213)); }
	inline float get_m_xAdvance_213() const { return ___m_xAdvance_213; }
	inline float* get_address_of_m_xAdvance_213() { return &___m_xAdvance_213; }
	inline void set_m_xAdvance_213(float value)
	{
		___m_xAdvance_213 = value;
	}

	inline static int32_t get_offset_of_m_textElementType_214() { return static_cast<int32_t>(offsetof(TMP_Text_t2599618874, ___m_textElementType_214)); }
	inline int32_t get_m_textElementType_214() const { return ___m_textElementType_214; }
	inline int32_t* get_address_of_m_textElementType_214() { return &___m_textElementType_214; }
	inline void set_m_textElementType_214(int32_t value)
	{
		___m_textElementType_214 = value;
	}

	inline static int32_t get_offset_of_m_cached_TextElement_215() { return static_cast<int32_t>(offsetof(TMP_Text_t2599618874, ___m_cached_TextElement_215)); }
	inline TMP_TextElement_t129727469 * get_m_cached_TextElement_215() const { return ___m_cached_TextElement_215; }
	inline TMP_TextElement_t129727469 ** get_address_of_m_cached_TextElement_215() { return &___m_cached_TextElement_215; }
	inline void set_m_cached_TextElement_215(TMP_TextElement_t129727469 * value)
	{
		___m_cached_TextElement_215 = value;
		Il2CppCodeGenWriteBarrier((&___m_cached_TextElement_215), value);
	}

	inline static int32_t get_offset_of_m_cached_Underline_GlyphInfo_216() { return static_cast<int32_t>(offsetof(TMP_Text_t2599618874, ___m_cached_Underline_GlyphInfo_216)); }
	inline TMP_Glyph_t581847833 * get_m_cached_Underline_GlyphInfo_216() const { return ___m_cached_Underline_GlyphInfo_216; }
	inline TMP_Glyph_t581847833 ** get_address_of_m_cached_Underline_GlyphInfo_216() { return &___m_cached_Underline_GlyphInfo_216; }
	inline void set_m_cached_Underline_GlyphInfo_216(TMP_Glyph_t581847833 * value)
	{
		___m_cached_Underline_GlyphInfo_216 = value;
		Il2CppCodeGenWriteBarrier((&___m_cached_Underline_GlyphInfo_216), value);
	}

	inline static int32_t get_offset_of_m_cached_Ellipsis_GlyphInfo_217() { return static_cast<int32_t>(offsetof(TMP_Text_t2599618874, ___m_cached_Ellipsis_GlyphInfo_217)); }
	inline TMP_Glyph_t581847833 * get_m_cached_Ellipsis_GlyphInfo_217() const { return ___m_cached_Ellipsis_GlyphInfo_217; }
	inline TMP_Glyph_t581847833 ** get_address_of_m_cached_Ellipsis_GlyphInfo_217() { return &___m_cached_Ellipsis_GlyphInfo_217; }
	inline void set_m_cached_Ellipsis_GlyphInfo_217(TMP_Glyph_t581847833 * value)
	{
		___m_cached_Ellipsis_GlyphInfo_217 = value;
		Il2CppCodeGenWriteBarrier((&___m_cached_Ellipsis_GlyphInfo_217), value);
	}

	inline static int32_t get_offset_of_m_defaultSpriteAsset_218() { return static_cast<int32_t>(offsetof(TMP_Text_t2599618874, ___m_defaultSpriteAsset_218)); }
	inline TMP_SpriteAsset_t484820633 * get_m_defaultSpriteAsset_218() const { return ___m_defaultSpriteAsset_218; }
	inline TMP_SpriteAsset_t484820633 ** get_address_of_m_defaultSpriteAsset_218() { return &___m_defaultSpriteAsset_218; }
	inline void set_m_defaultSpriteAsset_218(TMP_SpriteAsset_t484820633 * value)
	{
		___m_defaultSpriteAsset_218 = value;
		Il2CppCodeGenWriteBarrier((&___m_defaultSpriteAsset_218), value);
	}

	inline static int32_t get_offset_of_m_currentSpriteAsset_219() { return static_cast<int32_t>(offsetof(TMP_Text_t2599618874, ___m_currentSpriteAsset_219)); }
	inline TMP_SpriteAsset_t484820633 * get_m_currentSpriteAsset_219() const { return ___m_currentSpriteAsset_219; }
	inline TMP_SpriteAsset_t484820633 ** get_address_of_m_currentSpriteAsset_219() { return &___m_currentSpriteAsset_219; }
	inline void set_m_currentSpriteAsset_219(TMP_SpriteAsset_t484820633 * value)
	{
		___m_currentSpriteAsset_219 = value;
		Il2CppCodeGenWriteBarrier((&___m_currentSpriteAsset_219), value);
	}

	inline static int32_t get_offset_of_m_spriteCount_220() { return static_cast<int32_t>(offsetof(TMP_Text_t2599618874, ___m_spriteCount_220)); }
	inline int32_t get_m_spriteCount_220() const { return ___m_spriteCount_220; }
	inline int32_t* get_address_of_m_spriteCount_220() { return &___m_spriteCount_220; }
	inline void set_m_spriteCount_220(int32_t value)
	{
		___m_spriteCount_220 = value;
	}

	inline static int32_t get_offset_of_m_spriteIndex_221() { return static_cast<int32_t>(offsetof(TMP_Text_t2599618874, ___m_spriteIndex_221)); }
	inline int32_t get_m_spriteIndex_221() const { return ___m_spriteIndex_221; }
	inline int32_t* get_address_of_m_spriteIndex_221() { return &___m_spriteIndex_221; }
	inline void set_m_spriteIndex_221(int32_t value)
	{
		___m_spriteIndex_221 = value;
	}

	inline static int32_t get_offset_of_m_spriteAnimationID_222() { return static_cast<int32_t>(offsetof(TMP_Text_t2599618874, ___m_spriteAnimationID_222)); }
	inline int32_t get_m_spriteAnimationID_222() const { return ___m_spriteAnimationID_222; }
	inline int32_t* get_address_of_m_spriteAnimationID_222() { return &___m_spriteAnimationID_222; }
	inline void set_m_spriteAnimationID_222(int32_t value)
	{
		___m_spriteAnimationID_222 = value;
	}

	inline static int32_t get_offset_of_m_ignoreActiveState_223() { return static_cast<int32_t>(offsetof(TMP_Text_t2599618874, ___m_ignoreActiveState_223)); }
	inline bool get_m_ignoreActiveState_223() const { return ___m_ignoreActiveState_223; }
	inline bool* get_address_of_m_ignoreActiveState_223() { return &___m_ignoreActiveState_223; }
	inline void set_m_ignoreActiveState_223(bool value)
	{
		___m_ignoreActiveState_223 = value;
	}

	inline static int32_t get_offset_of_k_Power_224() { return static_cast<int32_t>(offsetof(TMP_Text_t2599618874, ___k_Power_224)); }
	inline SingleU5BU5D_t1444911251* get_k_Power_224() const { return ___k_Power_224; }
	inline SingleU5BU5D_t1444911251** get_address_of_k_Power_224() { return &___k_Power_224; }
	inline void set_k_Power_224(SingleU5BU5D_t1444911251* value)
	{
		___k_Power_224 = value;
		Il2CppCodeGenWriteBarrier((&___k_Power_224), value);
	}
};

struct TMP_Text_t2599618874_StaticFields
{
public:
	// UnityEngine.Color32 TMPro.TMP_Text::s_colorWhite
	Color32_t2600501292  ___s_colorWhite_45;
	// UnityEngine.Vector2 TMPro.TMP_Text::k_LargePositiveVector2
	Vector2_t2156229523  ___k_LargePositiveVector2_225;
	// UnityEngine.Vector2 TMPro.TMP_Text::k_LargeNegativeVector2
	Vector2_t2156229523  ___k_LargeNegativeVector2_226;
	// System.Single TMPro.TMP_Text::k_LargePositiveFloat
	float ___k_LargePositiveFloat_227;
	// System.Single TMPro.TMP_Text::k_LargeNegativeFloat
	float ___k_LargeNegativeFloat_228;
	// System.Int32 TMPro.TMP_Text::k_LargePositiveInt
	int32_t ___k_LargePositiveInt_229;
	// System.Int32 TMPro.TMP_Text::k_LargeNegativeInt
	int32_t ___k_LargeNegativeInt_230;

public:
	inline static int32_t get_offset_of_s_colorWhite_45() { return static_cast<int32_t>(offsetof(TMP_Text_t2599618874_StaticFields, ___s_colorWhite_45)); }
	inline Color32_t2600501292  get_s_colorWhite_45() const { return ___s_colorWhite_45; }
	inline Color32_t2600501292 * get_address_of_s_colorWhite_45() { return &___s_colorWhite_45; }
	inline void set_s_colorWhite_45(Color32_t2600501292  value)
	{
		___s_colorWhite_45 = value;
	}

	inline static int32_t get_offset_of_k_LargePositiveVector2_225() { return static_cast<int32_t>(offsetof(TMP_Text_t2599618874_StaticFields, ___k_LargePositiveVector2_225)); }
	inline Vector2_t2156229523  get_k_LargePositiveVector2_225() const { return ___k_LargePositiveVector2_225; }
	inline Vector2_t2156229523 * get_address_of_k_LargePositiveVector2_225() { return &___k_LargePositiveVector2_225; }
	inline void set_k_LargePositiveVector2_225(Vector2_t2156229523  value)
	{
		___k_LargePositiveVector2_225 = value;
	}

	inline static int32_t get_offset_of_k_LargeNegativeVector2_226() { return static_cast<int32_t>(offsetof(TMP_Text_t2599618874_StaticFields, ___k_LargeNegativeVector2_226)); }
	inline Vector2_t2156229523  get_k_LargeNegativeVector2_226() const { return ___k_LargeNegativeVector2_226; }
	inline Vector2_t2156229523 * get_address_of_k_LargeNegativeVector2_226() { return &___k_LargeNegativeVector2_226; }
	inline void set_k_LargeNegativeVector2_226(Vector2_t2156229523  value)
	{
		___k_LargeNegativeVector2_226 = value;
	}

	inline static int32_t get_offset_of_k_LargePositiveFloat_227() { return static_cast<int32_t>(offsetof(TMP_Text_t2599618874_StaticFields, ___k_LargePositiveFloat_227)); }
	inline float get_k_LargePositiveFloat_227() const { return ___k_LargePositiveFloat_227; }
	inline float* get_address_of_k_LargePositiveFloat_227() { return &___k_LargePositiveFloat_227; }
	inline void set_k_LargePositiveFloat_227(float value)
	{
		___k_LargePositiveFloat_227 = value;
	}

	inline static int32_t get_offset_of_k_LargeNegativeFloat_228() { return static_cast<int32_t>(offsetof(TMP_Text_t2599618874_StaticFields, ___k_LargeNegativeFloat_228)); }
	inline float get_k_LargeNegativeFloat_228() const { return ___k_LargeNegativeFloat_228; }
	inline float* get_address_of_k_LargeNegativeFloat_228() { return &___k_LargeNegativeFloat_228; }
	inline void set_k_LargeNegativeFloat_228(float value)
	{
		___k_LargeNegativeFloat_228 = value;
	}

	inline static int32_t get_offset_of_k_LargePositiveInt_229() { return static_cast<int32_t>(offsetof(TMP_Text_t2599618874_StaticFields, ___k_LargePositiveInt_229)); }
	inline int32_t get_k_LargePositiveInt_229() const { return ___k_LargePositiveInt_229; }
	inline int32_t* get_address_of_k_LargePositiveInt_229() { return &___k_LargePositiveInt_229; }
	inline void set_k_LargePositiveInt_229(int32_t value)
	{
		___k_LargePositiveInt_229 = value;
	}

	inline static int32_t get_offset_of_k_LargeNegativeInt_230() { return static_cast<int32_t>(offsetof(TMP_Text_t2599618874_StaticFields, ___k_LargeNegativeInt_230)); }
	inline int32_t get_k_LargeNegativeInt_230() const { return ___k_LargeNegativeInt_230; }
	inline int32_t* get_address_of_k_LargeNegativeInt_230() { return &___k_LargeNegativeInt_230; }
	inline void set_k_LargeNegativeInt_230(int32_t value)
	{
		___k_LargeNegativeInt_230 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TMP_TEXT_T2599618874_H
#ifndef IMAGE_T2670269651_H
#define IMAGE_T2670269651_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.Image
struct  Image_t2670269651  : public MaskableGraphic_t3839221559
{
public:
	// UnityEngine.Sprite UnityEngine.UI.Image::m_Sprite
	Sprite_t280657092 * ___m_Sprite_29;
	// UnityEngine.Sprite UnityEngine.UI.Image::m_OverrideSprite
	Sprite_t280657092 * ___m_OverrideSprite_30;
	// UnityEngine.UI.Image/Type UnityEngine.UI.Image::m_Type
	int32_t ___m_Type_31;
	// System.Boolean UnityEngine.UI.Image::m_PreserveAspect
	bool ___m_PreserveAspect_32;
	// System.Boolean UnityEngine.UI.Image::m_FillCenter
	bool ___m_FillCenter_33;
	// UnityEngine.UI.Image/FillMethod UnityEngine.UI.Image::m_FillMethod
	int32_t ___m_FillMethod_34;
	// System.Single UnityEngine.UI.Image::m_FillAmount
	float ___m_FillAmount_35;
	// System.Boolean UnityEngine.UI.Image::m_FillClockwise
	bool ___m_FillClockwise_36;
	// System.Int32 UnityEngine.UI.Image::m_FillOrigin
	int32_t ___m_FillOrigin_37;
	// System.Single UnityEngine.UI.Image::m_AlphaHitTestMinimumThreshold
	float ___m_AlphaHitTestMinimumThreshold_38;

public:
	inline static int32_t get_offset_of_m_Sprite_29() { return static_cast<int32_t>(offsetof(Image_t2670269651, ___m_Sprite_29)); }
	inline Sprite_t280657092 * get_m_Sprite_29() const { return ___m_Sprite_29; }
	inline Sprite_t280657092 ** get_address_of_m_Sprite_29() { return &___m_Sprite_29; }
	inline void set_m_Sprite_29(Sprite_t280657092 * value)
	{
		___m_Sprite_29 = value;
		Il2CppCodeGenWriteBarrier((&___m_Sprite_29), value);
	}

	inline static int32_t get_offset_of_m_OverrideSprite_30() { return static_cast<int32_t>(offsetof(Image_t2670269651, ___m_OverrideSprite_30)); }
	inline Sprite_t280657092 * get_m_OverrideSprite_30() const { return ___m_OverrideSprite_30; }
	inline Sprite_t280657092 ** get_address_of_m_OverrideSprite_30() { return &___m_OverrideSprite_30; }
	inline void set_m_OverrideSprite_30(Sprite_t280657092 * value)
	{
		___m_OverrideSprite_30 = value;
		Il2CppCodeGenWriteBarrier((&___m_OverrideSprite_30), value);
	}

	inline static int32_t get_offset_of_m_Type_31() { return static_cast<int32_t>(offsetof(Image_t2670269651, ___m_Type_31)); }
	inline int32_t get_m_Type_31() const { return ___m_Type_31; }
	inline int32_t* get_address_of_m_Type_31() { return &___m_Type_31; }
	inline void set_m_Type_31(int32_t value)
	{
		___m_Type_31 = value;
	}

	inline static int32_t get_offset_of_m_PreserveAspect_32() { return static_cast<int32_t>(offsetof(Image_t2670269651, ___m_PreserveAspect_32)); }
	inline bool get_m_PreserveAspect_32() const { return ___m_PreserveAspect_32; }
	inline bool* get_address_of_m_PreserveAspect_32() { return &___m_PreserveAspect_32; }
	inline void set_m_PreserveAspect_32(bool value)
	{
		___m_PreserveAspect_32 = value;
	}

	inline static int32_t get_offset_of_m_FillCenter_33() { return static_cast<int32_t>(offsetof(Image_t2670269651, ___m_FillCenter_33)); }
	inline bool get_m_FillCenter_33() const { return ___m_FillCenter_33; }
	inline bool* get_address_of_m_FillCenter_33() { return &___m_FillCenter_33; }
	inline void set_m_FillCenter_33(bool value)
	{
		___m_FillCenter_33 = value;
	}

	inline static int32_t get_offset_of_m_FillMethod_34() { return static_cast<int32_t>(offsetof(Image_t2670269651, ___m_FillMethod_34)); }
	inline int32_t get_m_FillMethod_34() const { return ___m_FillMethod_34; }
	inline int32_t* get_address_of_m_FillMethod_34() { return &___m_FillMethod_34; }
	inline void set_m_FillMethod_34(int32_t value)
	{
		___m_FillMethod_34 = value;
	}

	inline static int32_t get_offset_of_m_FillAmount_35() { return static_cast<int32_t>(offsetof(Image_t2670269651, ___m_FillAmount_35)); }
	inline float get_m_FillAmount_35() const { return ___m_FillAmount_35; }
	inline float* get_address_of_m_FillAmount_35() { return &___m_FillAmount_35; }
	inline void set_m_FillAmount_35(float value)
	{
		___m_FillAmount_35 = value;
	}

	inline static int32_t get_offset_of_m_FillClockwise_36() { return static_cast<int32_t>(offsetof(Image_t2670269651, ___m_FillClockwise_36)); }
	inline bool get_m_FillClockwise_36() const { return ___m_FillClockwise_36; }
	inline bool* get_address_of_m_FillClockwise_36() { return &___m_FillClockwise_36; }
	inline void set_m_FillClockwise_36(bool value)
	{
		___m_FillClockwise_36 = value;
	}

	inline static int32_t get_offset_of_m_FillOrigin_37() { return static_cast<int32_t>(offsetof(Image_t2670269651, ___m_FillOrigin_37)); }
	inline int32_t get_m_FillOrigin_37() const { return ___m_FillOrigin_37; }
	inline int32_t* get_address_of_m_FillOrigin_37() { return &___m_FillOrigin_37; }
	inline void set_m_FillOrigin_37(int32_t value)
	{
		___m_FillOrigin_37 = value;
	}

	inline static int32_t get_offset_of_m_AlphaHitTestMinimumThreshold_38() { return static_cast<int32_t>(offsetof(Image_t2670269651, ___m_AlphaHitTestMinimumThreshold_38)); }
	inline float get_m_AlphaHitTestMinimumThreshold_38() const { return ___m_AlphaHitTestMinimumThreshold_38; }
	inline float* get_address_of_m_AlphaHitTestMinimumThreshold_38() { return &___m_AlphaHitTestMinimumThreshold_38; }
	inline void set_m_AlphaHitTestMinimumThreshold_38(float value)
	{
		___m_AlphaHitTestMinimumThreshold_38 = value;
	}
};

struct Image_t2670269651_StaticFields
{
public:
	// UnityEngine.Material UnityEngine.UI.Image::s_ETC1DefaultUI
	Material_t340375123 * ___s_ETC1DefaultUI_28;
	// UnityEngine.Vector2[] UnityEngine.UI.Image::s_VertScratch
	Vector2U5BU5D_t1457185986* ___s_VertScratch_39;
	// UnityEngine.Vector2[] UnityEngine.UI.Image::s_UVScratch
	Vector2U5BU5D_t1457185986* ___s_UVScratch_40;
	// UnityEngine.Vector3[] UnityEngine.UI.Image::s_Xy
	Vector3U5BU5D_t1718750761* ___s_Xy_41;
	// UnityEngine.Vector3[] UnityEngine.UI.Image::s_Uv
	Vector3U5BU5D_t1718750761* ___s_Uv_42;

public:
	inline static int32_t get_offset_of_s_ETC1DefaultUI_28() { return static_cast<int32_t>(offsetof(Image_t2670269651_StaticFields, ___s_ETC1DefaultUI_28)); }
	inline Material_t340375123 * get_s_ETC1DefaultUI_28() const { return ___s_ETC1DefaultUI_28; }
	inline Material_t340375123 ** get_address_of_s_ETC1DefaultUI_28() { return &___s_ETC1DefaultUI_28; }
	inline void set_s_ETC1DefaultUI_28(Material_t340375123 * value)
	{
		___s_ETC1DefaultUI_28 = value;
		Il2CppCodeGenWriteBarrier((&___s_ETC1DefaultUI_28), value);
	}

	inline static int32_t get_offset_of_s_VertScratch_39() { return static_cast<int32_t>(offsetof(Image_t2670269651_StaticFields, ___s_VertScratch_39)); }
	inline Vector2U5BU5D_t1457185986* get_s_VertScratch_39() const { return ___s_VertScratch_39; }
	inline Vector2U5BU5D_t1457185986** get_address_of_s_VertScratch_39() { return &___s_VertScratch_39; }
	inline void set_s_VertScratch_39(Vector2U5BU5D_t1457185986* value)
	{
		___s_VertScratch_39 = value;
		Il2CppCodeGenWriteBarrier((&___s_VertScratch_39), value);
	}

	inline static int32_t get_offset_of_s_UVScratch_40() { return static_cast<int32_t>(offsetof(Image_t2670269651_StaticFields, ___s_UVScratch_40)); }
	inline Vector2U5BU5D_t1457185986* get_s_UVScratch_40() const { return ___s_UVScratch_40; }
	inline Vector2U5BU5D_t1457185986** get_address_of_s_UVScratch_40() { return &___s_UVScratch_40; }
	inline void set_s_UVScratch_40(Vector2U5BU5D_t1457185986* value)
	{
		___s_UVScratch_40 = value;
		Il2CppCodeGenWriteBarrier((&___s_UVScratch_40), value);
	}

	inline static int32_t get_offset_of_s_Xy_41() { return static_cast<int32_t>(offsetof(Image_t2670269651_StaticFields, ___s_Xy_41)); }
	inline Vector3U5BU5D_t1718750761* get_s_Xy_41() const { return ___s_Xy_41; }
	inline Vector3U5BU5D_t1718750761** get_address_of_s_Xy_41() { return &___s_Xy_41; }
	inline void set_s_Xy_41(Vector3U5BU5D_t1718750761* value)
	{
		___s_Xy_41 = value;
		Il2CppCodeGenWriteBarrier((&___s_Xy_41), value);
	}

	inline static int32_t get_offset_of_s_Uv_42() { return static_cast<int32_t>(offsetof(Image_t2670269651_StaticFields, ___s_Uv_42)); }
	inline Vector3U5BU5D_t1718750761* get_s_Uv_42() const { return ___s_Uv_42; }
	inline Vector3U5BU5D_t1718750761** get_address_of_s_Uv_42() { return &___s_Uv_42; }
	inline void set_s_Uv_42(Vector3U5BU5D_t1718750761* value)
	{
		___s_Uv_42 = value;
		Il2CppCodeGenWriteBarrier((&___s_Uv_42), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // IMAGE_T2670269651_H
#ifndef TEXTMESHPROUGUI_T529313277_H
#define TEXTMESHPROUGUI_T529313277_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// TMPro.TextMeshProUGUI
struct  TextMeshProUGUI_t529313277  : public TMP_Text_t2599618874
{
public:
	// System.Boolean TMPro.TextMeshProUGUI::m_isRebuildingLayout
	bool ___m_isRebuildingLayout_231;
	// System.Boolean TMPro.TextMeshProUGUI::m_hasFontAssetChanged
	bool ___m_hasFontAssetChanged_232;
	// TMPro.TMP_SubMeshUI[] TMPro.TextMeshProUGUI::m_subTextObjects
	TMP_SubMeshUIU5BU5D_t3119380694* ___m_subTextObjects_233;
	// System.Single TMPro.TextMeshProUGUI::m_previousLossyScaleY
	float ___m_previousLossyScaleY_234;
	// UnityEngine.Vector3[] TMPro.TextMeshProUGUI::m_RectTransformCorners
	Vector3U5BU5D_t1718750761* ___m_RectTransformCorners_235;
	// UnityEngine.CanvasRenderer TMPro.TextMeshProUGUI::m_canvasRenderer
	CanvasRenderer_t2598313366 * ___m_canvasRenderer_236;
	// UnityEngine.Canvas TMPro.TextMeshProUGUI::m_canvas
	Canvas_t3310196443 * ___m_canvas_237;
	// System.Boolean TMPro.TextMeshProUGUI::m_isFirstAllocation
	bool ___m_isFirstAllocation_238;
	// System.Int32 TMPro.TextMeshProUGUI::m_max_characters
	int32_t ___m_max_characters_239;
	// System.Boolean TMPro.TextMeshProUGUI::m_isMaskingEnabled
	bool ___m_isMaskingEnabled_240;
	// UnityEngine.Material TMPro.TextMeshProUGUI::m_baseMaterial
	Material_t340375123 * ___m_baseMaterial_241;
	// System.Boolean TMPro.TextMeshProUGUI::m_isScrollRegionSet
	bool ___m_isScrollRegionSet_242;
	// System.Int32 TMPro.TextMeshProUGUI::m_stencilID
	int32_t ___m_stencilID_243;
	// UnityEngine.Vector4 TMPro.TextMeshProUGUI::m_maskOffset
	Vector4_t3319028937  ___m_maskOffset_244;
	// UnityEngine.Matrix4x4 TMPro.TextMeshProUGUI::m_EnvMapMatrix
	Matrix4x4_t1817901843  ___m_EnvMapMatrix_245;
	// System.Boolean TMPro.TextMeshProUGUI::m_isRegisteredForEvents
	bool ___m_isRegisteredForEvents_246;
	// System.Int32 TMPro.TextMeshProUGUI::m_recursiveCountA
	int32_t ___m_recursiveCountA_247;
	// System.Int32 TMPro.TextMeshProUGUI::loopCountA
	int32_t ___loopCountA_248;

public:
	inline static int32_t get_offset_of_m_isRebuildingLayout_231() { return static_cast<int32_t>(offsetof(TextMeshProUGUI_t529313277, ___m_isRebuildingLayout_231)); }
	inline bool get_m_isRebuildingLayout_231() const { return ___m_isRebuildingLayout_231; }
	inline bool* get_address_of_m_isRebuildingLayout_231() { return &___m_isRebuildingLayout_231; }
	inline void set_m_isRebuildingLayout_231(bool value)
	{
		___m_isRebuildingLayout_231 = value;
	}

	inline static int32_t get_offset_of_m_hasFontAssetChanged_232() { return static_cast<int32_t>(offsetof(TextMeshProUGUI_t529313277, ___m_hasFontAssetChanged_232)); }
	inline bool get_m_hasFontAssetChanged_232() const { return ___m_hasFontAssetChanged_232; }
	inline bool* get_address_of_m_hasFontAssetChanged_232() { return &___m_hasFontAssetChanged_232; }
	inline void set_m_hasFontAssetChanged_232(bool value)
	{
		___m_hasFontAssetChanged_232 = value;
	}

	inline static int32_t get_offset_of_m_subTextObjects_233() { return static_cast<int32_t>(offsetof(TextMeshProUGUI_t529313277, ___m_subTextObjects_233)); }
	inline TMP_SubMeshUIU5BU5D_t3119380694* get_m_subTextObjects_233() const { return ___m_subTextObjects_233; }
	inline TMP_SubMeshUIU5BU5D_t3119380694** get_address_of_m_subTextObjects_233() { return &___m_subTextObjects_233; }
	inline void set_m_subTextObjects_233(TMP_SubMeshUIU5BU5D_t3119380694* value)
	{
		___m_subTextObjects_233 = value;
		Il2CppCodeGenWriteBarrier((&___m_subTextObjects_233), value);
	}

	inline static int32_t get_offset_of_m_previousLossyScaleY_234() { return static_cast<int32_t>(offsetof(TextMeshProUGUI_t529313277, ___m_previousLossyScaleY_234)); }
	inline float get_m_previousLossyScaleY_234() const { return ___m_previousLossyScaleY_234; }
	inline float* get_address_of_m_previousLossyScaleY_234() { return &___m_previousLossyScaleY_234; }
	inline void set_m_previousLossyScaleY_234(float value)
	{
		___m_previousLossyScaleY_234 = value;
	}

	inline static int32_t get_offset_of_m_RectTransformCorners_235() { return static_cast<int32_t>(offsetof(TextMeshProUGUI_t529313277, ___m_RectTransformCorners_235)); }
	inline Vector3U5BU5D_t1718750761* get_m_RectTransformCorners_235() const { return ___m_RectTransformCorners_235; }
	inline Vector3U5BU5D_t1718750761** get_address_of_m_RectTransformCorners_235() { return &___m_RectTransformCorners_235; }
	inline void set_m_RectTransformCorners_235(Vector3U5BU5D_t1718750761* value)
	{
		___m_RectTransformCorners_235 = value;
		Il2CppCodeGenWriteBarrier((&___m_RectTransformCorners_235), value);
	}

	inline static int32_t get_offset_of_m_canvasRenderer_236() { return static_cast<int32_t>(offsetof(TextMeshProUGUI_t529313277, ___m_canvasRenderer_236)); }
	inline CanvasRenderer_t2598313366 * get_m_canvasRenderer_236() const { return ___m_canvasRenderer_236; }
	inline CanvasRenderer_t2598313366 ** get_address_of_m_canvasRenderer_236() { return &___m_canvasRenderer_236; }
	inline void set_m_canvasRenderer_236(CanvasRenderer_t2598313366 * value)
	{
		___m_canvasRenderer_236 = value;
		Il2CppCodeGenWriteBarrier((&___m_canvasRenderer_236), value);
	}

	inline static int32_t get_offset_of_m_canvas_237() { return static_cast<int32_t>(offsetof(TextMeshProUGUI_t529313277, ___m_canvas_237)); }
	inline Canvas_t3310196443 * get_m_canvas_237() const { return ___m_canvas_237; }
	inline Canvas_t3310196443 ** get_address_of_m_canvas_237() { return &___m_canvas_237; }
	inline void set_m_canvas_237(Canvas_t3310196443 * value)
	{
		___m_canvas_237 = value;
		Il2CppCodeGenWriteBarrier((&___m_canvas_237), value);
	}

	inline static int32_t get_offset_of_m_isFirstAllocation_238() { return static_cast<int32_t>(offsetof(TextMeshProUGUI_t529313277, ___m_isFirstAllocation_238)); }
	inline bool get_m_isFirstAllocation_238() const { return ___m_isFirstAllocation_238; }
	inline bool* get_address_of_m_isFirstAllocation_238() { return &___m_isFirstAllocation_238; }
	inline void set_m_isFirstAllocation_238(bool value)
	{
		___m_isFirstAllocation_238 = value;
	}

	inline static int32_t get_offset_of_m_max_characters_239() { return static_cast<int32_t>(offsetof(TextMeshProUGUI_t529313277, ___m_max_characters_239)); }
	inline int32_t get_m_max_characters_239() const { return ___m_max_characters_239; }
	inline int32_t* get_address_of_m_max_characters_239() { return &___m_max_characters_239; }
	inline void set_m_max_characters_239(int32_t value)
	{
		___m_max_characters_239 = value;
	}

	inline static int32_t get_offset_of_m_isMaskingEnabled_240() { return static_cast<int32_t>(offsetof(TextMeshProUGUI_t529313277, ___m_isMaskingEnabled_240)); }
	inline bool get_m_isMaskingEnabled_240() const { return ___m_isMaskingEnabled_240; }
	inline bool* get_address_of_m_isMaskingEnabled_240() { return &___m_isMaskingEnabled_240; }
	inline void set_m_isMaskingEnabled_240(bool value)
	{
		___m_isMaskingEnabled_240 = value;
	}

	inline static int32_t get_offset_of_m_baseMaterial_241() { return static_cast<int32_t>(offsetof(TextMeshProUGUI_t529313277, ___m_baseMaterial_241)); }
	inline Material_t340375123 * get_m_baseMaterial_241() const { return ___m_baseMaterial_241; }
	inline Material_t340375123 ** get_address_of_m_baseMaterial_241() { return &___m_baseMaterial_241; }
	inline void set_m_baseMaterial_241(Material_t340375123 * value)
	{
		___m_baseMaterial_241 = value;
		Il2CppCodeGenWriteBarrier((&___m_baseMaterial_241), value);
	}

	inline static int32_t get_offset_of_m_isScrollRegionSet_242() { return static_cast<int32_t>(offsetof(TextMeshProUGUI_t529313277, ___m_isScrollRegionSet_242)); }
	inline bool get_m_isScrollRegionSet_242() const { return ___m_isScrollRegionSet_242; }
	inline bool* get_address_of_m_isScrollRegionSet_242() { return &___m_isScrollRegionSet_242; }
	inline void set_m_isScrollRegionSet_242(bool value)
	{
		___m_isScrollRegionSet_242 = value;
	}

	inline static int32_t get_offset_of_m_stencilID_243() { return static_cast<int32_t>(offsetof(TextMeshProUGUI_t529313277, ___m_stencilID_243)); }
	inline int32_t get_m_stencilID_243() const { return ___m_stencilID_243; }
	inline int32_t* get_address_of_m_stencilID_243() { return &___m_stencilID_243; }
	inline void set_m_stencilID_243(int32_t value)
	{
		___m_stencilID_243 = value;
	}

	inline static int32_t get_offset_of_m_maskOffset_244() { return static_cast<int32_t>(offsetof(TextMeshProUGUI_t529313277, ___m_maskOffset_244)); }
	inline Vector4_t3319028937  get_m_maskOffset_244() const { return ___m_maskOffset_244; }
	inline Vector4_t3319028937 * get_address_of_m_maskOffset_244() { return &___m_maskOffset_244; }
	inline void set_m_maskOffset_244(Vector4_t3319028937  value)
	{
		___m_maskOffset_244 = value;
	}

	inline static int32_t get_offset_of_m_EnvMapMatrix_245() { return static_cast<int32_t>(offsetof(TextMeshProUGUI_t529313277, ___m_EnvMapMatrix_245)); }
	inline Matrix4x4_t1817901843  get_m_EnvMapMatrix_245() const { return ___m_EnvMapMatrix_245; }
	inline Matrix4x4_t1817901843 * get_address_of_m_EnvMapMatrix_245() { return &___m_EnvMapMatrix_245; }
	inline void set_m_EnvMapMatrix_245(Matrix4x4_t1817901843  value)
	{
		___m_EnvMapMatrix_245 = value;
	}

	inline static int32_t get_offset_of_m_isRegisteredForEvents_246() { return static_cast<int32_t>(offsetof(TextMeshProUGUI_t529313277, ___m_isRegisteredForEvents_246)); }
	inline bool get_m_isRegisteredForEvents_246() const { return ___m_isRegisteredForEvents_246; }
	inline bool* get_address_of_m_isRegisteredForEvents_246() { return &___m_isRegisteredForEvents_246; }
	inline void set_m_isRegisteredForEvents_246(bool value)
	{
		___m_isRegisteredForEvents_246 = value;
	}

	inline static int32_t get_offset_of_m_recursiveCountA_247() { return static_cast<int32_t>(offsetof(TextMeshProUGUI_t529313277, ___m_recursiveCountA_247)); }
	inline int32_t get_m_recursiveCountA_247() const { return ___m_recursiveCountA_247; }
	inline int32_t* get_address_of_m_recursiveCountA_247() { return &___m_recursiveCountA_247; }
	inline void set_m_recursiveCountA_247(int32_t value)
	{
		___m_recursiveCountA_247 = value;
	}

	inline static int32_t get_offset_of_loopCountA_248() { return static_cast<int32_t>(offsetof(TextMeshProUGUI_t529313277, ___loopCountA_248)); }
	inline int32_t get_loopCountA_248() const { return ___loopCountA_248; }
	inline int32_t* get_address_of_loopCountA_248() { return &___loopCountA_248; }
	inline void set_loopCountA_248(int32_t value)
	{
		___loopCountA_248 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TEXTMESHPROUGUI_T529313277_H
// LevelCollection/LevelPreset[]
struct LevelPresetU5BU5D_t629770153  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) LevelPreset_t3313492856 * m_Items[1];

public:
	inline LevelPreset_t3313492856 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline LevelPreset_t3313492856 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, LevelPreset_t3313492856 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
	inline LevelPreset_t3313492856 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline LevelPreset_t3313492856 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, LevelPreset_t3313492856 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};
// TileType[0...,0...]
struct TileTypeU5B0___U2C0___U5D_t1226088886  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) int32_t m_Items[1];

public:
	inline int32_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline int32_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, int32_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline int32_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline int32_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, int32_t value)
	{
		m_Items[index] = value;
	}
	inline int32_t GetAt(il2cpp_array_size_t i, il2cpp_array_size_t j) const
	{
		il2cpp_array_size_t iBound = bounds[0].length;
		IL2CPP_ARRAY_BOUNDS_CHECK(i, iBound);
		il2cpp_array_size_t jBound = bounds[1].length;
		IL2CPP_ARRAY_BOUNDS_CHECK(j, jBound);

		il2cpp_array_size_t index = i * jBound + j;
		return m_Items[index];
	}
	inline int32_t* GetAddressAt(il2cpp_array_size_t i, il2cpp_array_size_t j)
	{
		il2cpp_array_size_t iBound = bounds[0].length;
		IL2CPP_ARRAY_BOUNDS_CHECK(i, iBound);
		il2cpp_array_size_t jBound = bounds[1].length;
		IL2CPP_ARRAY_BOUNDS_CHECK(j, jBound);

		il2cpp_array_size_t index = i * jBound + j;
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t i, il2cpp_array_size_t j, int32_t value)
	{
		il2cpp_array_size_t iBound = bounds[0].length;
		IL2CPP_ARRAY_BOUNDS_CHECK(i, iBound);
		il2cpp_array_size_t jBound = bounds[1].length;
		IL2CPP_ARRAY_BOUNDS_CHECK(j, jBound);

		il2cpp_array_size_t index = i * jBound + j;
		m_Items[index] = value;
	}
	inline int32_t GetAtUnchecked(il2cpp_array_size_t i, il2cpp_array_size_t j) const
	{
		il2cpp_array_size_t jBound = bounds[1].length;

		il2cpp_array_size_t index = i * jBound + j;
		return m_Items[index];
	}
	inline int32_t* GetAddressAtUnchecked(il2cpp_array_size_t i, il2cpp_array_size_t j)
	{
		il2cpp_array_size_t jBound = bounds[1].length;

		il2cpp_array_size_t index = i * jBound + j;
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t i, il2cpp_array_size_t j, int32_t value)
	{
		il2cpp_array_size_t jBound = bounds[1].length;

		il2cpp_array_size_t index = i * jBound + j;
		m_Items[index] = value;
	}
};
// System.Boolean[0...,0...]
struct BooleanU5B0___U2C0___U5D_t2897418193  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) bool m_Items[1];

public:
	inline bool GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline bool* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, bool value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline bool GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline bool* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, bool value)
	{
		m_Items[index] = value;
	}
	inline bool GetAt(il2cpp_array_size_t i, il2cpp_array_size_t j) const
	{
		il2cpp_array_size_t iBound = bounds[0].length;
		IL2CPP_ARRAY_BOUNDS_CHECK(i, iBound);
		il2cpp_array_size_t jBound = bounds[1].length;
		IL2CPP_ARRAY_BOUNDS_CHECK(j, jBound);

		il2cpp_array_size_t index = i * jBound + j;
		return m_Items[index];
	}
	inline bool* GetAddressAt(il2cpp_array_size_t i, il2cpp_array_size_t j)
	{
		il2cpp_array_size_t iBound = bounds[0].length;
		IL2CPP_ARRAY_BOUNDS_CHECK(i, iBound);
		il2cpp_array_size_t jBound = bounds[1].length;
		IL2CPP_ARRAY_BOUNDS_CHECK(j, jBound);

		il2cpp_array_size_t index = i * jBound + j;
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t i, il2cpp_array_size_t j, bool value)
	{
		il2cpp_array_size_t iBound = bounds[0].length;
		IL2CPP_ARRAY_BOUNDS_CHECK(i, iBound);
		il2cpp_array_size_t jBound = bounds[1].length;
		IL2CPP_ARRAY_BOUNDS_CHECK(j, jBound);

		il2cpp_array_size_t index = i * jBound + j;
		m_Items[index] = value;
	}
	inline bool GetAtUnchecked(il2cpp_array_size_t i, il2cpp_array_size_t j) const
	{
		il2cpp_array_size_t jBound = bounds[1].length;

		il2cpp_array_size_t index = i * jBound + j;
		return m_Items[index];
	}
	inline bool* GetAddressAtUnchecked(il2cpp_array_size_t i, il2cpp_array_size_t j)
	{
		il2cpp_array_size_t jBound = bounds[1].length;

		il2cpp_array_size_t index = i * jBound + j;
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t i, il2cpp_array_size_t j, bool value)
	{
		il2cpp_array_size_t jBound = bounds[1].length;

		il2cpp_array_size_t index = i * jBound + j;
		m_Items[index] = value;
	}
};
// UnityEngine.Sprite[]
struct SpriteU5BU5D_t2581906349  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Sprite_t280657092 * m_Items[1];

public:
	inline Sprite_t280657092 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Sprite_t280657092 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Sprite_t280657092 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
	inline Sprite_t280657092 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Sprite_t280657092 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Sprite_t280657092 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};
// SoundManager/SoundClip[]
struct SoundClipU5BU5D_t2720230398  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) SoundClip_t3378538503 * m_Items[1];

public:
	inline SoundClip_t3378538503 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline SoundClip_t3378538503 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, SoundClip_t3378538503 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
	inline SoundClip_t3378538503 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline SoundClip_t3378538503 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, SoundClip_t3378538503 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};
// UnityEngine.AudioClip[]
struct AudioClipU5BU5D_t143221404  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) AudioClip_t3680889665 * m_Items[1];

public:
	inline AudioClip_t3680889665 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline AudioClip_t3680889665 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, AudioClip_t3680889665 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
	inline AudioClip_t3680889665 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline AudioClip_t3680889665 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, AudioClip_t3680889665 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};
// UnityEngine.SpriteRenderer[]
struct SpriteRendererU5BU5D_t911335936  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) SpriteRenderer_t3235626157 * m_Items[1];

public:
	inline SpriteRenderer_t3235626157 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline SpriteRenderer_t3235626157 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, SpriteRenderer_t3235626157 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
	inline SpriteRenderer_t3235626157 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline SpriteRenderer_t3235626157 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, SpriteRenderer_t3235626157 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};
// Tile[]
struct TileU5BU5D_t3330163933  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Tile_t2634157908 * m_Items[1];

public:
	inline Tile_t2634157908 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Tile_t2634157908 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Tile_t2634157908 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
	inline Tile_t2634157908 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Tile_t2634157908 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Tile_t2634157908 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};
// System.Boolean[]
struct BooleanU5BU5D_t2897418192  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) bool m_Items[1];

public:
	inline bool GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline bool* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, bool value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline bool GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline bool* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, bool value)
	{
		m_Items[index] = value;
	}
};
// TileColorController/SpriteColor[]
struct SpriteColorU5BU5D_t2190272617  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) SpriteColor_t3051291064 * m_Items[1];

public:
	inline SpriteColor_t3051291064 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline SpriteColor_t3051291064 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, SpriteColor_t3051291064 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
	inline SpriteColor_t3051291064 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline SpriteColor_t3051291064 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, SpriteColor_t3051291064 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};
// Tile[0...,0...]
struct TileU5B0___U2C0___U5D_t3330163934  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Tile_t2634157908 * m_Items[1];

public:
	inline Tile_t2634157908 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Tile_t2634157908 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Tile_t2634157908 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
	inline Tile_t2634157908 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Tile_t2634157908 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Tile_t2634157908 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
	inline Tile_t2634157908 * GetAt(il2cpp_array_size_t i, il2cpp_array_size_t j) const
	{
		il2cpp_array_size_t iBound = bounds[0].length;
		IL2CPP_ARRAY_BOUNDS_CHECK(i, iBound);
		il2cpp_array_size_t jBound = bounds[1].length;
		IL2CPP_ARRAY_BOUNDS_CHECK(j, jBound);

		il2cpp_array_size_t index = i * jBound + j;
		return m_Items[index];
	}
	inline Tile_t2634157908 ** GetAddressAt(il2cpp_array_size_t i, il2cpp_array_size_t j)
	{
		il2cpp_array_size_t iBound = bounds[0].length;
		IL2CPP_ARRAY_BOUNDS_CHECK(i, iBound);
		il2cpp_array_size_t jBound = bounds[1].length;
		IL2CPP_ARRAY_BOUNDS_CHECK(j, jBound);

		il2cpp_array_size_t index = i * jBound + j;
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t i, il2cpp_array_size_t j, Tile_t2634157908 * value)
	{
		il2cpp_array_size_t iBound = bounds[0].length;
		IL2CPP_ARRAY_BOUNDS_CHECK(i, iBound);
		il2cpp_array_size_t jBound = bounds[1].length;
		IL2CPP_ARRAY_BOUNDS_CHECK(j, jBound);

		il2cpp_array_size_t index = i * jBound + j;
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
	inline Tile_t2634157908 * GetAtUnchecked(il2cpp_array_size_t i, il2cpp_array_size_t j) const
	{
		il2cpp_array_size_t jBound = bounds[1].length;

		il2cpp_array_size_t index = i * jBound + j;
		return m_Items[index];
	}
	inline Tile_t2634157908 ** GetAddressAtUnchecked(il2cpp_array_size_t i, il2cpp_array_size_t j)
	{
		il2cpp_array_size_t jBound = bounds[1].length;

		il2cpp_array_size_t index = i * jBound + j;
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t i, il2cpp_array_size_t j, Tile_t2634157908 * value)
	{
		il2cpp_array_size_t jBound = bounds[1].length;

		il2cpp_array_size_t index = i * jBound + j;
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};
// System.Int32[]
struct Int32U5BU5D_t385246372  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) int32_t m_Items[1];

public:
	inline int32_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline int32_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, int32_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline int32_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline int32_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, int32_t value)
	{
		m_Items[index] = value;
	}
};
// GridDirection[]
struct GridDirectionU5BU5D_t3393422547  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) int32_t m_Items[1];

public:
	inline int32_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline int32_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, int32_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline int32_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline int32_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, int32_t value)
	{
		m_Items[index] = value;
	}
};
// UnityEngine.Transform[]
struct TransformU5BU5D_t807237628  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Transform_t3600365921 * m_Items[1];

public:
	inline Transform_t3600365921 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Transform_t3600365921 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Transform_t3600365921 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
	inline Transform_t3600365921 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Transform_t3600365921 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Transform_t3600365921 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};
// SpriteFader[]
struct SpriteFaderU5BU5D_t3833479231  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) SpriteFader_t713818650 * m_Items[1];

public:
	inline SpriteFader_t713818650 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline SpriteFader_t713818650 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, SpriteFader_t713818650 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
	inline SpriteFader_t713818650 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline SpriteFader_t713818650 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, SpriteFader_t713818650 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};


// !!0 UnityEngine.Component::GetComponent<System.Object>()
extern "C"  RuntimeObject * Component_GetComponent_TisRuntimeObject_m2906321015_gshared (Component_t1923634451 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::AddComponent<System.Object>()
extern "C"  RuntimeObject * GameObject_AddComponent_TisRuntimeObject_m3469369570_gshared (GameObject_t1113636619 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
extern "C"  void List_1__ctor_m2321703786_gshared (List_1_t257213610 * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.List`1<System.Object>::Contains(!0)
extern "C"  bool List_1_Contains_m2654125393_gshared (List_1_t257213610 * __this, RuntimeObject * p0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::Add(!0)
extern "C"  void List_1_Add_m3338814081_gshared (List_1_t257213610 * __this, RuntimeObject * p0, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.List`1<System.Object>::Remove(!0)
extern "C"  bool List_1_Remove_m1416767016_gshared (List_1_t257213610 * __this, RuntimeObject * p0, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<System.Object>::get_Count()
extern "C"  int32_t List_1_get_Count_m2934127733_gshared (List_1_t257213610 * __this, const RuntimeMethod* method);
// System.Collections.Generic.List`1/Enumerator<!0> System.Collections.Generic.List`1<System.Object>::GetEnumerator()
extern "C"  Enumerator_t2146457487  List_1_GetEnumerator_m2930774921_gshared (List_1_t257213610 * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1/Enumerator<System.Object>::get_Current()
extern "C"  RuntimeObject * Enumerator_get_Current_m470245444_gshared (Enumerator_t2146457487 * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.List`1/Enumerator<System.Object>::MoveNext()
extern "C"  bool Enumerator_MoveNext_m2142368520_gshared (Enumerator_t2146457487 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1/Enumerator<System.Object>::Dispose()
extern "C"  void Enumerator_Dispose_m3007748546_gshared (Enumerator_t2146457487 * __this, const RuntimeMethod* method);
// !0[] System.Collections.Generic.List`1<System.Object>::ToArray()
extern "C"  ObjectU5BU5D_t2843939325* List_1_ToArray_m4168020446_gshared (List_1_t257213610 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::.ctor()
extern "C"  void Dictionary_2__ctor_m518943619_gshared (Dictionary_2_t132545152 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Queue`1<System.Object>::.ctor()
extern "C"  void Queue_1__ctor_m3749217910_gshared (Queue_1_t2926365658 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.Object::Instantiate<System.Object>(!!0,UnityEngine.Transform)
extern "C"  RuntimeObject * Object_Instantiate_TisRuntimeObject_m1061214600_gshared (RuntimeObject * __this /* static, unused */, RuntimeObject * p0, Transform_t3600365921 * p1, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponentInChildren<System.Object>()
extern "C"  RuntimeObject * Component_GetComponentInChildren_TisRuntimeObject_m1033527003_gshared (Component_t1923634451 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::Add(!0,!1)
extern "C"  void Dictionary_2_Add_m2387223709_gshared (Dictionary_2_t132545152 * __this, RuntimeObject * p0, RuntimeObject * p1, const RuntimeMethod* method);
// System.Collections.Generic.Dictionary`2/Enumerator<!0,!1> System.Collections.Generic.Dictionary`2<System.Object,System.Object>::GetEnumerator()
extern "C"  Enumerator_t2086727927  Dictionary_2_GetEnumerator_m3278257048_gshared (Dictionary_2_t132545152 * __this, const RuntimeMethod* method);
// System.Collections.Generic.KeyValuePair`2<!0,!1> System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::get_Current()
extern "C"  KeyValuePair_2_t2530217319  Enumerator_get_Current_m2655181939_gshared (Enumerator_t2086727927 * __this, const RuntimeMethod* method);
// !1 System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>::get_Value()
extern "C"  RuntimeObject * KeyValuePair_2_get_Value_m3464904234_gshared (KeyValuePair_2_t2530217319 * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::MoveNext()
extern "C"  bool Enumerator_MoveNext_m1107569389_gshared (Enumerator_t2086727927 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::Dispose()
extern "C"  void Enumerator_Dispose_m3885012575_gshared (Enumerator_t2086727927 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::Clear()
extern "C"  void Dictionary_2_Clear_m1938428402_gshared (Dictionary_2_t132545152 * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::ContainsKey(!0)
extern "C"  bool Dictionary_2_ContainsKey_m2278349286_gshared (Dictionary_2_t132545152 * __this, RuntimeObject * p0, const RuntimeMethod* method);
// !1 System.Collections.Generic.Dictionary`2<System.Object,System.Object>::get_Item(!0)
extern "C"  RuntimeObject * Dictionary_2_get_Item_m2714930061_gshared (Dictionary_2_t132545152 * __this, RuntimeObject * p0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Queue`1<System.Object>::Enqueue(!0)
extern "C"  void Queue_1_Enqueue_m1868480850_gshared (Queue_1_t2926365658 * __this, RuntimeObject * p0, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.Queue`1<System.Object>::get_Count()
extern "C"  int32_t Queue_1_get_Count_m2496300460_gshared (Queue_1_t2926365658 * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.Queue`1<System.Object>::Dequeue()
extern "C"  RuntimeObject * Queue_1_Dequeue_m3550993416_gshared (Queue_1_t2926365658 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Int32>::.ctor()
extern "C"  void List_1__ctor_m1628857705_gshared (List_1_t128053199 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Int32>::Add(!0)
extern "C"  void List_1_Add_m697420525_gshared (List_1_t128053199 * __this, int32_t p0, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<System.Int32>::get_Count()
extern "C"  int32_t List_1_get_Count_m361000296_gshared (List_1_t128053199 * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1<System.Int32>::get_Item(System.Int32)
extern "C"  int32_t List_1_get_Item_m888956288_gshared (List_1_t128053199 * __this, int32_t p0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Int32>::RemoveAt(System.Int32)
extern "C"  void List_1_RemoveAt_m2770200702_gshared (List_1_t128053199 * __this, int32_t p0, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1<System.Object>::get_Item(System.Int32)
extern "C"  RuntimeObject * List_1_get_Item_m2287542950_gshared (List_1_t257213610 * __this, int32_t p0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::Clear()
extern "C"  void List_1_Clear_m3697625829_gshared (List_1_t257213610 * __this, const RuntimeMethod* method);

// System.Void UnityEngine.MonoBehaviour::.ctor()
extern "C"  void MonoBehaviour__ctor_m1579109191 (MonoBehaviour_t3962482529 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.PlayerPrefs::GetFloat(System.String,System.Single)
extern "C"  float PlayerPrefs_GetFloat_m3293813615 (RuntimeObject * __this /* static, unused */, String_t* p0, float p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Time::get_deltaTime()
extern "C"  float Time_get_deltaTime_m372706562 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Advertisements.Advertisement::IsReady()
extern "C"  bool Advertisement_IsReady_m2792558112 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Advertisements.Advertisement::Show()
extern "C"  void Advertisement_Show_m2619871676 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Vector3::get_zero()
extern "C"  Vector3_t3722313464  Vector3_get_zero_m1409827619 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// NotificationCenter NotificationCenter::get_DefaultCenter()
extern "C"  NotificationCenter_t2218695229 * NotificationCenter_get_DefaultCenter_m4216969841 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void NotificationCenter::AddObserver(UnityEngine.Component,System.String)
extern "C"  void NotificationCenter_AddObserver_m3680884127 (NotificationCenter_t2218695229 * __this, Component_t1923634451 * ___observer0, String_t* ___name1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int32 LevelInfo::get_Width()
extern "C"  int32_t LevelInfo_get_Width_m854074050 (LevelInfo_t1513202700 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int32 LevelInfo::get_Height()
extern "C"  int32_t LevelInfo_get_Height_m1243796757 (LevelInfo_t1513202700 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Single CameraController::GetOrthographicSize(System.Single,System.Single)
extern "C"  float CameraController_GetOrthographicSize_m277825500 (CameraController_t3346819214 * __this, float ___minViewWidth0, float ___minViewHeight1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Camera::set_orthographicSize(System.Single)
extern "C"  void Camera_set_orthographicSize_m76971700 (Camera_t4157153871 * __this, float p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void CameraController::LerpToViewSize(System.Single,System.Single)
extern "C"  void CameraController_LerpToViewSize_m3503177015 (CameraController_t3346819214 * __this, float ___size0, float ___delay1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Screen::get_width()
extern "C"  int32_t Screen_get_width_m345039817 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Screen::get_height()
extern "C"  int32_t Screen_get_height_m1623532518 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Mathf::Max(System.Single,System.Single)
extern "C"  float Mathf_Max_m3146388979 (RuntimeObject * __this /* static, unused */, float p0, float p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
extern "C"  void Vector3__ctor_m3353183577 (Vector3_t3722313464 * __this, float p0, float p1, float p2, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Camera::get_orthographicSize()
extern "C"  float Camera_get_orthographicSize_m3903216845 (Camera_t4157153871 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Mathf::Lerp(System.Single,System.Single,System.Single)
extern "C"  float Mathf_Lerp_m1004423579 (RuntimeObject * __this /* static, unused */, float p0, float p1, float p2, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Vector3::op_Inequality(UnityEngine.Vector3,UnityEngine.Vector3)
extern "C"  bool Vector3_op_Inequality_m315980366 (RuntimeObject * __this /* static, unused */, Vector3_t3722313464  p0, Vector3_t3722313464  p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Transform UnityEngine.Component::get_transform()
extern "C"  Transform_t3600365921 * Component_get_transform_m3162698980 (Component_t1923634451 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Transform::get_position()
extern "C"  Vector3_t3722313464  Transform_get_position_m36019626 (Transform_t3600365921 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Vector3::SmoothDamp(UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Vector3&,System.Single)
extern "C"  Vector3_t3722313464  Vector3_SmoothDamp_m1123559802 (RuntimeObject * __this /* static, unused */, Vector3_t3722313464  p0, Vector3_t3722313464  p1, Vector3_t3722313464 * p2, float p3, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Transform::set_position(UnityEngine.Vector3)
extern "C"  void Transform_set_position_m3387557959 (Transform_t3600365921 * __this, Vector3_t3722313464  p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Transform UnityEngine.Transform::get_root()
extern "C"  Transform_t3600365921 * Transform_get_root_m2450402596 (Transform_t3600365921 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
extern "C"  GameObject_t1113636619 * Component_get_gameObject_m442555142 (Component_t1923634451 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Object::DontDestroyOnLoad(UnityEngine.Object)
extern "C"  void Object_DontDestroyOnLoad_m166252750 (RuntimeObject * __this /* static, unused */, Object_t631007953 * p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void WorldController::Initialize(TileController)
extern "C"  void WorldController_Initialize_m831189363 (WorldController_t23517691 * __this, TileController_t1073589649 * ___tileController0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void TimedTileController::Initialize(TileController)
extern "C"  void TimedTileController_Initialize_m196164070 (TimedTileController_t3243845658 * __this, TileController_t1073589649 * ___tileController0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UIManager::Initialize()
extern "C"  void UIManager_Initialize_m1126019099 (UIManager_t1042050227 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void CameraController::Initialize()
extern "C"  void CameraController_Initialize_m3777996556 (CameraController_t3346819214 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void WorldController::UpdateBoard()
extern "C"  void WorldController_UpdateBoard_m3954357331 (WorldController_t23517691 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// LevelInfo LevelCollection::GetLevel(System.Int32)
extern "C"  LevelInfo_t1513202700 * LevelCollection_GetLevel_m3517958994 (LevelCollection_t2422035869 * __this, int32_t ___levelNumber0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void WorldController::InitializeLevel(LevelInfo)
extern "C"  void WorldController_InitializeLevel_m509353978 (WorldController_t23517691 * __this, LevelInfo_t1513202700 * ___levelInfo0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void WorldController::DestroyLevel()
extern "C"  void WorldController_DestroyLevel_m2759154792 (WorldController_t23517691 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// !!0 UnityEngine.Component::GetComponent<UnityEngine.SpriteRenderer>()
#define Component_GetComponent_TisSpriteRenderer_t3235626157_m2253180502(__this, method) ((  SpriteRenderer_t3235626157 * (*) (Component_t1923634451 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m2906321015_gshared)(__this, method)
// UnityEngine.Color UnityEngine.SpriteRenderer::get_color()
extern "C"  Color_t2555686324  SpriteRenderer_get_color_m904197748 (SpriteRenderer_t3235626157 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Color UnityEngine.Color::get_clear()
extern "C"  Color_t2555686324  Color_get_clear_m1016382534 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Color::op_Inequality(UnityEngine.Color,UnityEngine.Color)
extern "C"  bool Color_op_Inequality_m3353772181 (RuntimeObject * __this /* static, unused */, Color_t2555686324  p0, Color_t2555686324  p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Color UnityEngine.Color::Lerp(UnityEngine.Color,UnityEngine.Color,System.Single)
extern "C"  Color_t2555686324  Color_Lerp_m973389909 (RuntimeObject * __this /* static, unused */, Color_t2555686324  p0, Color_t2555686324  p1, float p2, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.SpriteRenderer::set_color(UnityEngine.Color)
extern "C"  void SpriteRenderer_set_color_m3056777566 (SpriteRenderer_t3235626157 * __this, Color_t2555686324  p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void LevelInfo::.ctor(System.Int32)
extern "C"  void LevelInfo__ctor_m2022729631 (LevelInfo_t1513202700 * __this, int32_t ___presetIndex0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Mathf::Clamp(System.Int32,System.Int32,System.Int32)
extern "C"  int32_t Mathf_Clamp_m2756574208 (RuntimeObject * __this /* static, unused */, int32_t p0, int32_t p1, int32_t p2, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void LevelInfo::.ctor(System.Int32,System.Int32,System.Single,System.Single,System.Int32)
extern "C"  void LevelInfo__ctor_m3282575238 (LevelInfo_t1513202700 * __this, int32_t ___width0, int32_t ___height1, float ___fillAmount2, float ___timedTileAmount3, int32_t ___timedTileDelay4, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Object::.ctor()
extern "C"  void Object__ctor_m297566312 (RuntimeObject * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void LevelInfo::set_Width(System.Int32)
extern "C"  void LevelInfo_set_Width_m3036091243 (LevelInfo_t1513202700 * __this, int32_t ___value0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void LevelInfo::set_Height(System.Int32)
extern "C"  void LevelInfo_set_Height_m1478154003 (LevelInfo_t1513202700 * __this, int32_t ___value0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void LevelInfo::set_Procedural(System.Boolean)
extern "C"  void LevelInfo_set_Procedural_m743385710 (LevelInfo_t1513202700 * __this, bool ___value0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void LevelInfo::set_FillAmount(System.Single)
extern "C"  void LevelInfo_set_FillAmount_m372411279 (LevelInfo_t1513202700 * __this, float ___value0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void LevelInfo::set_TimedTileAmount(System.Single)
extern "C"  void LevelInfo_set_TimedTileAmount_m484924067 (LevelInfo_t1513202700 * __this, float ___value0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void LevelInfo::set_TimedTileDelay(System.Int32)
extern "C"  void LevelInfo_set_TimedTileDelay_m2193783153 (LevelInfo_t1513202700 * __this, int32_t ___value0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Hashtable::.ctor()
extern "C"  void Hashtable__ctor_m1815022027 (Hashtable_t1853889766 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Object::op_Implicit(UnityEngine.Object)
extern "C"  bool Object_op_Implicit_m3574996620 (RuntimeObject * __this /* static, unused */, Object_t631007953 * p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GameObject::.ctor(System.String)
extern "C"  void GameObject__ctor_m2093116449 (GameObject_t1113636619 * __this, String_t* p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// !!0 UnityEngine.GameObject::AddComponent<NotificationCenter>()
#define GameObject_AddComponent_TisNotificationCenter_t2218695229_m4196679536(__this, method) ((  NotificationCenter_t2218695229 * (*) (GameObject_t1113636619 *, const RuntimeMethod*))GameObject_AddComponent_TisRuntimeObject_m3469369570_gshared)(__this, method)
// System.Void NotificationCenter::AddObserver(UnityEngine.Component,System.String,UnityEngine.Component)
extern "C"  void NotificationCenter_AddObserver_m571966720 (NotificationCenter_t2218695229 * __this, Component_t1923634451 * ___observer0, String_t* ___name1, Component_t1923634451 * ___sender2, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.String::IsNullOrEmpty(System.String)
extern "C"  bool String_IsNullOrEmpty_m2969720369 (RuntimeObject * __this /* static, unused */, String_t* p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Debug::Log(System.Object)
extern "C"  void Debug_Log_m4051431634 (RuntimeObject * __this /* static, unused */, RuntimeObject * p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.List`1<UnityEngine.Component>::.ctor()
#define List_1__ctor_m504713606(__this, method) ((  void (*) (List_1_t3395709193 *, const RuntimeMethod*))List_1__ctor_m2321703786_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.Component>::Contains(!0)
#define List_1_Contains_m200023965(__this, p0, method) ((  bool (*) (List_1_t3395709193 *, Component_t1923634451 *, const RuntimeMethod*))List_1_Contains_m2654125393_gshared)(__this, p0, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Component>::Add(!0)
#define List_1_Add_m3267405110(__this, p0, method) ((  void (*) (List_1_t3395709193 *, Component_t1923634451 *, const RuntimeMethod*))List_1_Add_m3338814081_gshared)(__this, p0, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.Component>::Remove(!0)
#define List_1_Remove_m96541543(__this, p0, method) ((  bool (*) (List_1_t3395709193 *, Component_t1923634451 *, const RuntimeMethod*))List_1_Remove_m1416767016_gshared)(__this, p0, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Component>::get_Count()
#define List_1_get_Count_m1294235957(__this, method) ((  int32_t (*) (List_1_t3395709193 *, const RuntimeMethod*))List_1_get_Count_m2934127733_gshared)(__this, method)
// System.Void NotificationCenter::PostNotification(UnityEngine.Component,System.String,System.Collections.Hashtable)
extern "C"  void NotificationCenter_PostNotification_m2114245645 (NotificationCenter_t2218695229 * __this, Component_t1923634451 * ___aSender0, String_t* ___aName1, Hashtable_t1853889766 * ___aData2, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Notification::.ctor(UnityEngine.Component,System.String,System.Collections.Hashtable)
extern "C"  void Notification__ctor_m3705588632 (Notification_t2099770324 * __this, Component_t1923634451 * ___aSender0, String_t* ___aName1, Hashtable_t1853889766 * ___aData2, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void NotificationCenter::PostNotification(Notification)
extern "C"  void NotificationCenter_PostNotification_m2079818164 (NotificationCenter_t2218695229 * __this, Notification_t2099770324 * ___aNotification0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String System.String::Concat(System.String,System.String)
extern "C"  String_t* String_Concat_m3937257545 (RuntimeObject * __this /* static, unused */, String_t* p0, String_t* p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1/Enumerator<!0> System.Collections.Generic.List`1<UnityEngine.Component>::GetEnumerator()
#define List_1_GetEnumerator_m4128318975(__this, method) ((  Enumerator_t989985774  (*) (List_1_t3395709193 *, const RuntimeMethod*))List_1_GetEnumerator_m2930774921_gshared)(__this, method)
// !0 System.Collections.Generic.List`1/Enumerator<UnityEngine.Component>::get_Current()
#define Enumerator_get_Current_m1782500462(__this, method) ((  Component_t1923634451 * (*) (Enumerator_t989985774 *, const RuntimeMethod*))Enumerator_get_Current_m470245444_gshared)(__this, method)
// System.Void UnityEngine.Component::SendMessage(System.String,System.Object,UnityEngine.SendMessageOptions)
extern "C"  void Component_SendMessage_m2905932203 (Component_t1923634451 * __this, String_t* p0, RuntimeObject * p1, int32_t p2, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.Generic.List`1/Enumerator<UnityEngine.Component>::MoveNext()
#define Enumerator_MoveNext_m4232616038(__this, method) ((  bool (*) (Enumerator_t989985774 *, const RuntimeMethod*))Enumerator_MoveNext_m2142368520_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1/Enumerator<UnityEngine.Component>::Dispose()
#define Enumerator_Dispose_m4132484595(__this, method) ((  void (*) (Enumerator_t989985774 *, const RuntimeMethod*))Enumerator_Dispose_m3007748546_gshared)(__this, method)
// System.Void UnityEngine.Animator::Play(System.String,System.Int32,System.Single)
extern "C"  void Animator_Play_m2835034014 (Animator_t434523843 * __this, String_t* p0, int32_t p1, float p2, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.AnimatorStateInfo UnityEngine.Animator::GetCurrentAnimatorStateInfo(System.Int32)
extern "C"  AnimatorStateInfo_t509032636  Animator_GetCurrentAnimatorStateInfo_m18694920 (Animator_t434523843 * __this, int32_t p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.AnimatorStateInfo::IsName(System.String)
extern "C"  bool AnimatorStateInfo_IsName_m3393819976 (AnimatorStateInfo_t509032636 * __this, String_t* p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Animator::SetTrigger(System.String)
extern "C"  void Animator_SetTrigger_m2134052629 (Animator_t434523843 * __this, String_t* p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Selectable::set_interactable(System.Boolean)
extern "C"  void Selectable_set_interactable_m3105888815 (Selectable_t3250028441 * __this, bool p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void PauseMenu::UpdateTimer()
extern "C"  void PauseMenu_UpdateTimer_m1180594338 (PauseMenu_t3916167947 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Mathf::FloorToInt(System.Single)
extern "C"  int32_t Mathf_FloorToInt_m1870542928 (RuntimeObject * __this /* static, unused */, float p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String System.Int32::ToString()
extern "C"  String_t* Int32_ToString_m141394615 (int32_t* __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String System.String::Concat(System.String,System.String,System.String,System.String)
extern "C"  String_t* String_Concat_m2163913788 (RuntimeObject * __this /* static, unused */, String_t* p0, String_t* p1, String_t* p2, String_t* p3, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void TMPro.TMP_Text::set_text(System.String)
extern "C"  void TMP_Text_set_text_m1135430243 (TMP_Text_t2599618874 * __this, String_t* p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String System.String::Concat(System.String,System.String,System.String)
extern "C"  String_t* String_Concat_m3755062657 (RuntimeObject * __this /* static, unused */, String_t* p0, String_t* p1, String_t* p2, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GameObject::SetActive(System.Boolean)
extern "C"  void GameObject_SetActive_m796801857 (GameObject_t1113636619 * __this, bool p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void PanelAnimator::ToggleOpen()
extern "C"  void PanelAnimator_ToggleOpen_m800681097 (PanelAnimator_t918022618 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void PanelAnimator::SetButtonEnabled(System.Boolean)
extern "C"  void PanelAnimator_SetButtonEnabled_m1545979629 (PanelAnimator_t918022618 * __this, bool ___value0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Input::GetMouseButtonDown(System.Int32)
extern "C"  bool Input_GetMouseButtonDown_m2081676745 (RuntimeObject * __this /* static, unused */, int32_t p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void PlayerInputController::HandleMouseInput()
extern "C"  void PlayerInputController_HandleMouseInput_m2991958618 (PlayerInputController_t3825146532 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.EventSystems.EventSystem UnityEngine.EventSystems.EventSystem::get_current()
extern "C"  EventSystem_t1003666588 * EventSystem_get_current_m1416377559 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.EventSystems.EventSystem::IsPointerOverGameObject()
extern "C"  bool EventSystem_IsPointerOverGameObject_m1911785875 (EventSystem_t1003666588 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Camera UnityEngine.Camera::get_main()
extern "C"  Camera_t4157153871 * Camera_get_main_m3643453163 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Input::get_mousePosition()
extern "C"  Vector3_t3722313464  Input_get_mousePosition_m1616496925 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Ray UnityEngine.Camera::ScreenPointToRay(UnityEngine.Vector3)
extern "C"  Ray_t3785851493  Camera_ScreenPointToRay_m3764635188 (Camera_t4157153871 * __this, Vector3_t3722313464  p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Physics::Raycast(UnityEngine.Ray,UnityEngine.RaycastHit&)
extern "C"  bool Physics_Raycast_m447436869 (RuntimeObject * __this /* static, unused */, Ray_t3785851493  p0, RaycastHit_t1056001966 * p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.RaycastHit::get_point()
extern "C"  Vector3_t3722313464  RaycastHit_get_point_m2236647085 (RaycastHit_t1056001966 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.PlayerPrefs::GetInt(System.String,System.Int32)
extern "C"  int32_t PlayerPrefs_GetInt_m1299643124 (RuntimeObject * __this /* static, unused */, String_t* p0, int32_t p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void SoundManager::UpdateSound()
extern "C"  void SoundManager_UpdateSound_m3982669470 (SoundManager_t2102329059 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.PlayerPrefs::SetInt(System.String,System.Int32)
extern "C"  void PlayerPrefs_SetInt_m2842000469 (RuntimeObject * __this /* static, unused */, String_t* p0, int32_t p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AudioSource::set_mute(System.Boolean)
extern "C"  void AudioSource_set_mute_m3553377094 (AudioSource_t3935305588 * __this, bool p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Image::set_sprite(UnityEngine.Sprite)
extern "C"  void Image_set_sprite_m2369174689 (Image_t2670269651 * __this, Sprite_t280657092 * p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.String::op_Equality(System.String,System.String)
extern "C"  bool String_op_Equality_m920492651 (RuntimeObject * __this /* static, unused */, String_t* p0, String_t* p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Random::Range(System.Int32,System.Int32)
extern "C"  int32_t Random_Range_m4054026115 (RuntimeObject * __this /* static, unused */, int32_t p0, int32_t p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AudioSource::PlayOneShot(UnityEngine.AudioClip)
extern "C"  void AudioSource_PlayOneShot_m1688286683 (AudioSource_t3935305588 * __this, AudioClip_t3680889665 * p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Color::.ctor(System.Single,System.Single,System.Single,System.Single)
extern "C"  void Color__ctor_m2943235014 (Color_t2555686324 * __this, float p0, float p1, float p2, float p3, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Vector2::.ctor(System.Single,System.Single)
extern "C"  void Vector2__ctor_m3970636864 (Vector2_t2156229523 * __this, float p0, float p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single)
extern "C"  void Vector3__ctor_m1719387948 (Vector3_t3722313464 * __this, float p0, float p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Addition(UnityEngine.Vector3,UnityEngine.Vector3)
extern "C"  Vector3_t3722313464  Vector3_op_Addition_m779775034 (RuntimeObject * __this /* static, unused */, Vector3_t3722313464  p0, Vector3_t3722313464  p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Transform::get_localScale()
extern "C"  Vector3_t3722313464  Transform_get_localScale_m129152068 (Transform_t3600365921 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Transform::set_localScale(UnityEngine.Vector3)
extern "C"  void Transform_set_localScale_m3053443106 (Transform_t3600365921 * __this, Vector3_t3722313464  p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Quaternion UnityEngine.Quaternion::Euler(UnityEngine.Vector3)
extern "C"  Quaternion_t2301928331  Quaternion_Euler_m1803555822 (RuntimeObject * __this /* static, unused */, Vector3_t3722313464  p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Transform::set_rotation(UnityEngine.Quaternion)
extern "C"  void Transform_set_rotation_m3524318132 (Transform_t3600365921 * __this, Quaternion_t2301928331  p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Tile::set_X(System.Int32)
extern "C"  void Tile_set_X_m2221814279 (Tile_t2634157908 * __this, int32_t ___value0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Tile::set_Y(System.Int32)
extern "C"  void Tile_set_Y_m3872790262 (Tile_t2634157908 * __this, int32_t ___value0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Tile::set_tileType(TileType)
extern "C"  void Tile_set_tileType_m694343582 (Tile_t2634157908 * __this, int32_t ___value0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean[] TileMetrics::EmptyOutlets()
extern "C"  BooleanU5BU5D_t2897418192* TileMetrics_EmptyOutlets_m4184200475 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.List`1<Tile>::.ctor()
#define List_1__ctor_m855662214(__this, method) ((  void (*) (List_1_t4106232650 *, const RuntimeMethod*))List_1__ctor_m2321703786_gshared)(__this, method)
// GridDirection GridDirectionExtensions::Opposite(GridDirection)
extern "C"  int32_t GridDirectionExtensions_Opposite_m3925076718 (RuntimeObject * __this /* static, unused */, int32_t ___direction0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.List`1<Tile>::Add(!0)
#define List_1_Add_m1764557302(__this, p0, method) ((  void (*) (List_1_t4106232650 *, Tile_t2634157908 *, const RuntimeMethod*))List_1_Add_m3338814081_gshared)(__this, p0, method)
// !0[] System.Collections.Generic.List`1<Tile>::ToArray()
#define List_1_ToArray_m1416750410(__this, method) ((  TileU5BU5D_t3330163933* (*) (List_1_t4106232650 *, const RuntimeMethod*))List_1_ToArray_m4168020446_gshared)(__this, method)
// System.Void LerpSprite::SetColor(UnityEngine.Color)
extern "C"  void LerpSprite_SetColor_m2158911657 (LerpSprite_t1901857106 * __this, Color_t2555686324  ___c0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// TileType Tile::get_tileType()
extern "C"  int32_t Tile_get_tileType_m4198153530 (Tile_t2634157908 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void SoundManager::Play(System.String)
extern "C"  void SoundManager_Play_m472215855 (SoundManager_t2102329059 * __this, String_t* ___name0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.ParticleSystem::get_isPlaying()
extern "C"  bool ParticleSystem_get_isPlaying_m1820717466 (ParticleSystem_t1800779281 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.ParticleSystem::Play()
extern "C"  void ParticleSystem_Play_m882713458 (ParticleSystem_t1800779281 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Color UnityEngine.Color::get_black()
extern "C"  Color_t2555686324  Color_get_black_m719512684 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Color UnityEngine.Color::get_green()
extern "C"  Color_t2555686324  Color_get_green_m490390750 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Color UnityEngine.Color::get_white()
extern "C"  Color_t2555686324  Color_get_white_m332174077 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.ScriptableObject::.ctor()
extern "C"  void ScriptableObject__ctor_m1310743131 (ScriptableObject_t2528358522 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.Dictionary`2<Tile,TileColorController>::.ctor()
#define Dictionary_2__ctor_m1115599464(__this, method) ((  void (*) (Dictionary_2_t3407319387 *, const RuntimeMethod*))Dictionary_2__ctor_m518943619_gshared)(__this, method)
// System.Void System.Collections.Generic.Queue`1<Tile>::.ctor()
#define Queue_1__ctor_m1328433775(__this, method) ((  void (*) (Queue_1_t2480417402 *, const RuntimeMethod*))Queue_1__ctor_m3749217910_gshared)(__this, method)
// System.Void TileController::ClearTileGameObjects()
extern "C"  void TileController_ClearTileGameObjects_m540467540 (TileController_t1073589649 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int32 TileGrid::get_Width()
extern "C"  int32_t TileGrid_get_Width_m2046657162 (TileGrid_t3345275584 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int32 TileGrid::get_Height()
extern "C"  int32_t TileGrid_get_Height_m1447994140 (TileGrid_t3345275584 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// Tile[0...,0...] TileGrid::get_Tiles()
extern "C"  TileU5B0___U2C0___U5D_t3330163934* TileGrid_get_Tiles_m2970482344 (TileGrid_t3345275584 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Transform TilePrefabManager::GetTilePrefab(Tile)
extern "C"  Transform_t3600365921 * TilePrefabManager_GetTilePrefab_m1797596600 (TilePrefabManager_t293433569 * __this, Tile_t2634157908 * ___tile0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
extern "C"  bool Object_op_Equality_m1810815630 (RuntimeObject * __this /* static, unused */, Object_t631007953 * p0, Object_t631007953 * p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// !!0 UnityEngine.Object::Instantiate<UnityEngine.Transform>(!!0,UnityEngine.Transform)
#define Object_Instantiate_TisTransform_t3600365921_m3225670752(__this /* static, unused */, p0, p1, method) ((  Transform_t3600365921 * (*) (RuntimeObject * /* static, unused */, Transform_t3600365921 *, Transform_t3600365921 *, const RuntimeMethod*))Object_Instantiate_TisRuntimeObject_m1061214600_gshared)(__this /* static, unused */, p0, p1, method)
// System.Single TileMetrics::GetWireRotation(System.Boolean[])
extern "C"  float TileMetrics_GetWireRotation_m1792594508 (RuntimeObject * __this /* static, unused */, BooleanU5BU5D_t2897418192* ___outlets0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Quaternion UnityEngine.Quaternion::Euler(System.Single,System.Single,System.Single)
extern "C"  Quaternion_t2301928331  Quaternion_Euler_m3049309462 (RuntimeObject * __this /* static, unused */, float p0, float p1, float p2, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// !!0 UnityEngine.Component::GetComponentInChildren<TileColorController>()
#define Component_GetComponentInChildren_TisTileColorController_t1573688495_m4036526529(__this, method) ((  TileColorController_t1573688495 * (*) (Component_t1923634451 *, const RuntimeMethod*))Component_GetComponentInChildren_TisRuntimeObject_m1033527003_gshared)(__this, method)
// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
extern "C"  bool Object_op_Inequality_m4071470834 (RuntimeObject * __this /* static, unused */, Object_t631007953 * p0, Object_t631007953 * p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void TileColorController::Initialize(TileColorData,Tile)
extern "C"  void TileColorController_Initialize_m475512654 (TileColorController_t1573688495 * __this, TileColorData_t4183236388 * ___tileColors0, Tile_t2634157908 * ___tile1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.Dictionary`2<Tile,TileColorController>::Add(!0,!1)
#define Dictionary_2_Add_m151662308(__this, p0, p1, method) ((  void (*) (Dictionary_2_t3407319387 *, Tile_t2634157908 *, TileColorController_t1573688495 *, const RuntimeMethod*))Dictionary_2_Add_m2387223709_gshared)(__this, p0, p1, method)
// System.Collections.Generic.Dictionary`2/Enumerator<!0,!1> System.Collections.Generic.Dictionary`2<Tile,TileColorController>::GetEnumerator()
#define Dictionary_2_GetEnumerator_m3357386693(__this, method) ((  Enumerator_t1066534866  (*) (Dictionary_2_t3407319387 *, const RuntimeMethod*))Dictionary_2_GetEnumerator_m3278257048_gshared)(__this, method)
// System.Collections.Generic.KeyValuePair`2<!0,!1> System.Collections.Generic.Dictionary`2/Enumerator<Tile,TileColorController>::get_Current()
#define Enumerator_get_Current_m3767502163(__this, method) ((  KeyValuePair_2_t1510024258  (*) (Enumerator_t1066534866 *, const RuntimeMethod*))Enumerator_get_Current_m2655181939_gshared)(__this, method)
// !1 System.Collections.Generic.KeyValuePair`2<Tile,TileColorController>::get_Value()
#define KeyValuePair_2_get_Value_m2665827663(__this, method) ((  TileColorController_t1573688495 * (*) (KeyValuePair_2_t1510024258 *, const RuntimeMethod*))KeyValuePair_2_get_Value_m3464904234_gshared)(__this, method)
// System.Void UnityEngine.Object::Destroy(UnityEngine.Object)
extern "C"  void Object_Destroy_m565254235 (RuntimeObject * __this /* static, unused */, Object_t631007953 * p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<Tile,TileColorController>::MoveNext()
#define Enumerator_MoveNext_m3362643134(__this, method) ((  bool (*) (Enumerator_t1066534866 *, const RuntimeMethod*))Enumerator_MoveNext_m1107569389_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<Tile,TileColorController>::Dispose()
#define Enumerator_Dispose_m2707954585(__this, method) ((  void (*) (Enumerator_t1066534866 *, const RuntimeMethod*))Enumerator_Dispose_m3885012575_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<Tile,TileColorController>::Clear()
#define Dictionary_2_Clear_m701984577(__this, method) ((  void (*) (Dictionary_2_t3407319387 *, const RuntimeMethod*))Dictionary_2_Clear_m1938428402_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<Tile,TileColorController>::ContainsKey(!0)
#define Dictionary_2_ContainsKey_m2187175349(__this, p0, method) ((  bool (*) (Dictionary_2_t3407319387 *, Tile_t2634157908 *, const RuntimeMethod*))Dictionary_2_ContainsKey_m2278349286_gshared)(__this, p0, method)
// !1 System.Collections.Generic.Dictionary`2<Tile,TileColorController>::get_Item(!0)
#define Dictionary_2_get_Item_m1604855262(__this, p0, method) ((  TileColorController_t1573688495 * (*) (Dictionary_2_t3407319387 *, Tile_t2634157908 *, const RuntimeMethod*))Dictionary_2_get_Item_m2714930061_gshared)(__this, p0, method)
// System.Void TileColorController::UpdateVisuals(System.Boolean)
extern "C"  void TileColorController_UpdateVisuals_m3275429678 (TileColorController_t1573688495 * __this, bool ___powered0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.Queue`1<Tile>::Enqueue(!0)
#define Queue_1_Enqueue_m2517726190(__this, p0, method) ((  void (*) (Queue_1_t2480417402 *, Tile_t2634157908 *, const RuntimeMethod*))Queue_1_Enqueue_m1868480850_gshared)(__this, p0, method)
// System.Void UnityEngine.Debug::LogError(System.Object)
extern "C"  void Debug_LogError_m2850623458 (RuntimeObject * __this /* static, unused */, RuntimeObject * p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Collections.Generic.Queue`1<Tile>::get_Count()
#define Queue_1_get_Count_m3354354946(__this, method) ((  int32_t (*) (Queue_1_t2480417402 *, const RuntimeMethod*))Queue_1_get_Count_m2496300460_gshared)(__this, method)
// !0 System.Collections.Generic.Queue`1<Tile>::Dequeue()
#define Queue_1_Dequeue_m4163830294(__this, method) ((  Tile_t2634157908 * (*) (Queue_1_t2480417402 *, const RuntimeMethod*))Queue_1_Dequeue_m3550993416_gshared)(__this, method)
// System.Void Tile::Rotate(System.Boolean)
extern "C"  void Tile_Rotate_m3768246377 (Tile_t2634157908 * __this, bool ___clockwise0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void TileGrid::UpdateTilePower()
extern "C"  void TileGrid_UpdateTilePower_m3239097173 (TileGrid_t3345275584 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void TileController::UpdateTileVisuals(TileGrid)
extern "C"  void TileController_UpdateTileVisuals_m3550407352 (TileController_t1073589649 * __this, TileGrid_t3345275584 * ___grid0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Quaternion UnityEngine.Transform::get_rotation()
extern "C"  Quaternion_t2301928331  Transform_get_rotation_m3502953881 (Transform_t3600365921 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Quaternion::Angle(UnityEngine.Quaternion,UnityEngine.Quaternion)
extern "C"  float Quaternion_Angle_m1586774072 (RuntimeObject * __this /* static, unused */, Quaternion_t2301928331  p0, Quaternion_t2301928331  p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Quaternion UnityEngine.Quaternion::RotateTowards(UnityEngine.Quaternion,UnityEngine.Quaternion,System.Single)
extern "C"  Quaternion_t2301928331  Quaternion_RotateTowards_m3102912458 (RuntimeObject * __this /* static, unused */, Quaternion_t2301928331  p0, Quaternion_t2301928331  p1, float p2, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// Tile[] Tile::GetConnectedNeighbors()
extern "C"  TileU5BU5D_t3330163933* Tile_GetConnectedNeighbors_m2873489518 (Tile_t2634157908 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void TileGrid::set_Width(System.Int32)
extern "C"  void TileGrid_set_Width_m2885525837 (TileGrid_t3345275584 * __this, int32_t ___value0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void TileGrid::set_Height(System.Int32)
extern "C"  void TileGrid_set_Height_m4168955144 (TileGrid_t3345275584 * __this, int32_t ___value0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void TileGrid::set_Tiles(Tile[0...,0...])
extern "C"  void TileGrid_set_Tiles_m2673310519 (TileGrid_t3345275584 * __this, TileU5B0___U2C0___U5D_t3330163934* ___value0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Tile::.ctor(System.Int32,System.Int32,System.Boolean)
extern "C"  void Tile__ctor_m1077387618 (Tile_t2634157908 * __this, int32_t ___X0, int32_t ___Y1, bool ___timedTile2, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void TileGrid::FillMap(LevelInfo)
extern "C"  void TileGrid_FillMap_m3241352648 (TileGrid_t3345275584 * __this, LevelInfo_t1513202700 * ___info0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void TileGrid::ScrambleTileRotations(System.Boolean[0...,0...])
extern "C"  void TileGrid_ScrambleTileRotations_m2002745099 (TileGrid_t3345275584 * __this, BooleanU5B0___U2C0___U5D_t2897418193* ___ignore0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void TileGrid::set_Lamps(Tile[])
extern "C"  void TileGrid_set_Lamps_m1880883898 (TileGrid_t3345275584 * __this, TileU5BU5D_t3330163933* ___value0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean LevelInfo::get_Procedural()
extern "C"  bool LevelInfo_get_Procedural_m3103714944 (LevelInfo_t1513202700 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void TileMapGenerator::.ctor()
extern "C"  void TileMapGenerator__ctor_m3725985903 (TileMapGenerator_t1694036907 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void TileMapGenerator::GenerateMap(LevelInfo,Tile[0...,0...])
extern "C"  void TileMapGenerator_GenerateMap_m3483659827 (TileMapGenerator_t1694036907 * __this, LevelInfo_t1513202700 * ___info0, TileU5B0___U2C0___U5D_t3330163934* ___tilemap1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int32 TileMapGenerator::get_sourceX()
extern "C"  int32_t TileMapGenerator_get_sourceX_m704511154 (TileMapGenerator_t1694036907 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int32 TileMapGenerator::get_sourceY()
extern "C"  int32_t TileMapGenerator_get_sourceY_m704445618 (TileMapGenerator_t1694036907 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void TileGrid::set_PowerSource(Tile)
extern "C"  void TileGrid_set_PowerSource_m3997759099 (TileGrid_t3345275584 * __this, Tile_t2634157908 * ___value0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Tile::SetTileType(TileType)
extern "C"  void Tile_SetTileType_m424980802 (Tile_t2634157908 * __this, int32_t ___tileType0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// WireShape TileMetrics::GetWireShape(System.Boolean[])
extern "C"  int32_t TileMetrics_GetWireShape_m126416825 (RuntimeObject * __this /* static, unused */, BooleanU5BU5D_t2897418192* ___outlets0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void TileGrid::ResetTilePower()
extern "C"  void TileGrid_ResetTilePower_m3921631594 (TileGrid_t3345275584 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// Tile TileGrid::get_PowerSource()
extern "C"  Tile_t2634157908 * TileGrid_get_PowerSource_m102512175 (TileGrid_t3345275584 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.Generic.List`1<Tile>::Contains(!0)
#define List_1_Contains_m1244656029(__this, p0, method) ((  bool (*) (List_1_t4106232650 *, Tile_t2634157908 *, const RuntimeMethod*))List_1_Contains_m2654125393_gshared)(__this, p0, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::.ctor()
#define List_1__ctor_m1628857705(__this, method) ((  void (*) (List_1_t128053199 *, const RuntimeMethod*))List_1__ctor_m1628857705_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::Add(!0)
#define List_1_Add_m697420525(__this, p0, method) ((  void (*) (List_1_t128053199 *, int32_t, const RuntimeMethod*))List_1_Add_m697420525_gshared)(__this, p0, method)
// System.Int32 System.Collections.Generic.List`1<System.Int32>::get_Count()
#define List_1_get_Count_m361000296(__this, method) ((  int32_t (*) (List_1_t128053199 *, const RuntimeMethod*))List_1_get_Count_m361000296_gshared)(__this, method)
// !0 System.Collections.Generic.List`1<System.Int32>::get_Item(System.Int32)
#define List_1_get_Item_m888956288(__this, p0, method) ((  int32_t (*) (List_1_t128053199 *, int32_t, const RuntimeMethod*))List_1_get_Item_m888956288_gshared)(__this, p0, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::RemoveAt(System.Int32)
#define List_1_RemoveAt_m2770200702(__this, p0, method) ((  void (*) (List_1_t128053199 *, int32_t, const RuntimeMethod*))List_1_RemoveAt_m2770200702_gshared)(__this, p0, method)
// System.Single LevelInfo::get_FillAmount()
extern "C"  float LevelInfo_get_FillAmount_m3059614925 (LevelInfo_t1513202700 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Mathf::Clamp01(System.Single)
extern "C"  float Mathf_Clamp01_m56433566 (RuntimeObject * __this /* static, unused */, float p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Collections.Generic.List`1<Tile>::get_Count()
#define List_1_get_Count_m1405008821(__this, method) ((  int32_t (*) (List_1_t4106232650 *, const RuntimeMethod*))List_1_get_Count_m2934127733_gshared)(__this, method)
// !0 System.Collections.Generic.List`1<Tile>::get_Item(System.Int32)
#define List_1_get_Item_m2624909818(__this, p0, method) ((  Tile_t2634157908 * (*) (List_1_t4106232650 *, int32_t, const RuntimeMethod*))List_1_get_Item_m2287542950_gshared)(__this, p0, method)
// System.Int32 Tile::get_X()
extern "C"  int32_t Tile_get_X_m3000455159 (Tile_t2634157908 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int32 Tile::get_Y()
extern "C"  int32_t Tile_get_Y_m1044140023 (Tile_t2634157908 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.Generic.List`1<Tile>::Remove(!0)
#define List_1_Remove_m2860109562(__this, p0, method) ((  bool (*) (List_1_t4106232650 *, Tile_t2634157908 *, const RuntimeMethod*))List_1_Remove_m1416767016_gshared)(__this, p0, method)
// System.Void TileMapGenerator::set_sourceX(System.Int32)
extern "C"  void TileMapGenerator_set_sourceX_m2403543050 (TileMapGenerator_t1694036907 * __this, int32_t ___value0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void TileMapGenerator::set_sourceY(System.Int32)
extern "C"  void TileMapGenerator_set_sourceY_m2403578925 (TileMapGenerator_t1694036907 * __this, int32_t ___value0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void TileMapGenerator::CarvePassagesFrom(System.Int32,System.Int32,System.Int32,System.Int32,System.Boolean[0...,0...],Tile[0...,0...])
extern "C"  void TileMapGenerator_CarvePassagesFrom_m3739355988 (TileMapGenerator_t1694036907 * __this, int32_t ___cx0, int32_t ___cy1, int32_t ___width2, int32_t ___height3, BooleanU5B0___U2C0___U5D_t2897418193* ___visited4, TileU5B0___U2C0___U5D_t3330163934* ___tilemap5, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.List`1<Tile>::Clear()
#define List_1_Clear_m4168133901(__this, method) ((  void (*) (List_1_t4106232650 *, const RuntimeMethod*))List_1_Clear_m3697625829_gshared)(__this, method)
// System.Single LevelInfo::get_TimedTileAmount()
extern "C"  float LevelInfo_get_TimedTileAmount_m917445596 (LevelInfo_t1513202700 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// GridDirection[] TileMapGenerator::RandomDirections()
extern "C"  GridDirectionU5BU5D_t3393422547* TileMapGenerator_RandomDirections_m4194603747 (TileMapGenerator_t1694036907 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Transform TilePrefabManager::GetWirePrefab(Tile,WireShape)
extern "C"  Transform_t3600365921 * TilePrefabManager_GetWirePrefab_m3463700425 (TilePrefabManager_t293433569 * __this, Tile_t2634157908 * ___tile0, int32_t ___shape1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Random::get_value()
extern "C"  float Random_get_value_m3115885645 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int32 LevelInfo::get_TimedTileDelay()
extern "C"  int32_t LevelInfo_get_TimedTileDelay_m2454384926 (LevelInfo_t1513202700 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void TileController::RotateTile(Tile)
extern "C"  void TileController_RotateTile_m2881787778 (TileController_t1073589649 * __this, Tile_t2634157908 * ___t0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void SpriteFader::FadeIn(System.Single)
extern "C"  void SpriteFader_FadeIn_m3207520779 (SpriteFader_t713818650 * __this, float ___duration0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void SpriteFader::FadeOut(System.Single,System.Boolean)
extern "C"  void SpriteFader_FadeOut_m3444412511 (SpriteFader_t713818650 * __this, float ___duration0, bool ___disableOnFinish1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void PauseMenu::SetButtonEnabled(System.Boolean)
extern "C"  void PauseMenu_SetButtonEnabled_m2380140973 (PauseMenu_t3916167947 * __this, bool ___v0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.MonoBehaviour::Invoke(System.String,System.Single)
extern "C"  void MonoBehaviour_Invoke_m4227543964 (MonoBehaviour_t3962482529 * __this, String_t* p0, float p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void PauseMenu::Toggle(System.Boolean)
extern "C"  void PauseMenu_Toggle_m2206255916 (PauseMenu_t3916167947 * __this, bool ___nextLevel0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void AdManager::TryShowAd()
extern "C"  void AdManager_TryShowAd_m2034507698 (AdManager_t2410889370 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void GameController::StartCurrentLevel()
extern "C"  void GameController_StartCurrentLevel_m3542281468 (GameController_t2330501625 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void GameController::StartNextLevel()
extern "C"  void GameController_StartNextLevel_m3220157239 (GameController_t2330501625 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void GameController::QuitLevel()
extern "C"  void GameController_QuitLevel_m1934953300 (GameController_t2330501625 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.SpriteRenderer::set_size(UnityEngine.Vector2)
extern "C"  void SpriteRenderer_set_size_m3853552092 (SpriteRenderer_t3235626157 * __this, Vector2_t2156229523  p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Renderer::set_enabled(System.Boolean)
extern "C"  void Renderer_set_enabled_m1727253150 (Renderer_t2627027031 * __this, bool p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void TileGrid::.ctor(LevelInfo)
extern "C"  void TileGrid__ctor_m2946651068 (TileGrid_t3345275584 * __this, LevelInfo_t1513202700 * ___info0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// Tile[] TileGrid::get_Lamps()
extern "C"  TileU5BU5D_t3330163933* TileGrid_get_Lamps_m4230366176 (TileGrid_t3345275584 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void TileController::CreateTiles(TileGrid,UnityEngine.Transform)
extern "C"  void TileController_CreateTiles_m1433907476 (TileController_t1073589649 * __this, TileGrid_t3345275584 * ___tileGrid0, Transform_t3600365921 * ___environmentRoot1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.MonoBehaviour::CancelInvoke()
extern "C"  void MonoBehaviour_CancelInvoke_m4090783926 (MonoBehaviour_t3962482529 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.MonoBehaviour::InvokeRepeating(System.String,System.Single,System.Single)
extern "C"  void MonoBehaviour_InvokeRepeating_m650519629 (MonoBehaviour_t3962482529 * __this, String_t* p0, float p1, float p2, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void TileController::UpdateTiles(TileGrid)
extern "C"  void TileController_UpdateTiles_m1627070111 (TileController_t1073589649 * __this, TileGrid_t3345275584 * ___tileGrid0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void WorldController::CheckForVictory()
extern "C"  void WorldController_CheckForVictory_m1888888687 (WorldController_t23517691 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean TileController::IsRotatingTiles()
extern "C"  bool TileController_IsRotatingTiles_m2868273090 (TileController_t1073589649 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Mathf::RoundToInt(System.Single)
extern "C"  int32_t Mathf_RoundToInt_m1874334613 (RuntimeObject * __this /* static, unused */, float p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void AdManager::.ctor()
extern "C"  void AdManager__ctor_m319963082 (AdManager_t2410889370 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_m1579109191(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void AdManager::Start()
extern "C"  void AdManager_Start_m658114702 (AdManager_t2410889370 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (AdManager_Start_m658114702_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		float L_0 = PlayerPrefs_GetFloat_m3293813615(NULL /*static, unused*/, _stringLiteral2118094221, (200.0f), /*hidden argument*/NULL);
		__this->set_cooldown_3(L_0);
		return;
	}
}
// System.Void AdManager::Update()
extern "C"  void AdManager_Update_m531418223 (AdManager_t2410889370 * __this, const RuntimeMethod* method)
{
	{
		float L_0 = __this->get_cooldown_3();
		float L_1 = Time_get_deltaTime_m372706562(NULL /*static, unused*/, /*hidden argument*/NULL);
		__this->set_cooldown_3(((float)il2cpp_codegen_subtract((float)L_0, (float)L_1)));
		return;
	}
}
// System.Void AdManager::TryShowAd()
extern "C"  void AdManager_TryShowAd_m2034507698 (AdManager_t2410889370 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (AdManager_TryShowAd_m2034507698_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		float L_0 = __this->get_cooldown_3();
		if ((!(((float)L_0) <= ((float)(0.0f)))))
		{
			goto IL_002a;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Advertisement_t842671397_il2cpp_TypeInfo_var);
		bool L_1 = Advertisement_IsReady_m2792558112(NULL /*static, unused*/, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_002a;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Advertisement_t842671397_il2cpp_TypeInfo_var);
		Advertisement_Show_m2619871676(NULL /*static, unused*/, /*hidden argument*/NULL);
		__this->set_cooldown_3((200.0f));
	}

IL_002a:
	{
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void CameraController::.ctor()
extern "C"  void CameraController__ctor_m3292347237 (CameraController_t3346819214 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (CameraController__ctor_m3292347237_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		__this->set_zoomedOutPercentage_3((0.4f));
		__this->set_viewMargin_4((1.25f));
		__this->set_targetOrthographicSize_5((-1.0f));
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_t3722313464_il2cpp_TypeInfo_var);
		Vector3_t3722313464  L_0 = Vector3_get_zero_m1409827619(NULL /*static, unused*/, /*hidden argument*/NULL);
		__this->set_velocity_9(L_0);
		MonoBehaviour__ctor_m1579109191(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void CameraController::Initialize()
extern "C"  void CameraController_Initialize_m3777996556 (CameraController_t3346819214 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (CameraController_Initialize_m3777996556_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		NotificationCenter_t2218695229 * L_0 = NotificationCenter_get_DefaultCenter_m4216969841(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_0);
		NotificationCenter_AddObserver_m3680884127(L_0, __this, _stringLiteral2286385673, /*hidden argument*/NULL);
		NotificationCenter_t2218695229 * L_1 = NotificationCenter_get_DefaultCenter_m4216969841(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_1);
		NotificationCenter_AddObserver_m3680884127(L_1, __this, _stringLiteral2430327460, /*hidden argument*/NULL);
		return;
	}
}
// System.Void CameraController::OnLevelStart(Notification)
extern "C"  void CameraController_OnLevelStart_m1900434523 (CameraController_t3346819214 * __this, Notification_t2099770324 * ___note0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (CameraController_OnLevelStart_m1900434523_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	LevelInfo_t1513202700 * V_0 = NULL;
	float V_1 = 0.0f;
	{
		Notification_t2099770324 * L_0 = ___note0;
		NullCheck(L_0);
		Hashtable_t1853889766 * L_1 = L_0->get_data_2();
		NullCheck(L_1);
		RuntimeObject * L_2 = VirtFuncInvoker1< RuntimeObject *, RuntimeObject * >::Invoke(21 /* System.Object System.Collections.Hashtable::get_Item(System.Object) */, L_1, _stringLiteral1232840130);
		V_0 = ((LevelInfo_t1513202700 *)CastclassClass((RuntimeObject*)L_2, LevelInfo_t1513202700_il2cpp_TypeInfo_var));
		LevelInfo_t1513202700 * L_3 = V_0;
		NullCheck(L_3);
		int32_t L_4 = LevelInfo_get_Width_m854074050(L_3, /*hidden argument*/NULL);
		float L_5 = __this->get_viewMargin_4();
		LevelInfo_t1513202700 * L_6 = V_0;
		NullCheck(L_6);
		int32_t L_7 = LevelInfo_get_Height_m1243796757(L_6, /*hidden argument*/NULL);
		float L_8 = __this->get_viewMargin_4();
		float L_9 = CameraController_GetOrthographicSize_m277825500(__this, ((float)il2cpp_codegen_add((float)(((float)((float)L_4))), (float)L_5)), ((float)il2cpp_codegen_add((float)(((float)((float)L_7))), (float)L_8)), /*hidden argument*/NULL);
		V_1 = L_9;
		Camera_t4157153871 * L_10 = __this->get_cam_2();
		float L_11 = V_1;
		float L_12 = V_1;
		float L_13 = __this->get_zoomedOutPercentage_3();
		NullCheck(L_10);
		Camera_set_orthographicSize_m76971700(L_10, ((float)il2cpp_codegen_add((float)L_11, (float)((float)il2cpp_codegen_multiply((float)L_12, (float)L_13)))), /*hidden argument*/NULL);
		float L_14 = V_1;
		CameraController_LerpToViewSize_m3503177015(__this, L_14, (0.75f), /*hidden argument*/NULL);
		return;
	}
}
// System.Void CameraController::OnLevelComplete(Notification)
extern "C"  void CameraController_OnLevelComplete_m3337127200 (CameraController_t3346819214 * __this, Notification_t2099770324 * ___note0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (CameraController_OnLevelComplete_m3337127200_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	LevelInfo_t1513202700 * V_0 = NULL;
	float V_1 = 0.0f;
	{
		Notification_t2099770324 * L_0 = ___note0;
		NullCheck(L_0);
		Hashtable_t1853889766 * L_1 = L_0->get_data_2();
		NullCheck(L_1);
		RuntimeObject * L_2 = VirtFuncInvoker1< RuntimeObject *, RuntimeObject * >::Invoke(21 /* System.Object System.Collections.Hashtable::get_Item(System.Object) */, L_1, _stringLiteral1232840130);
		V_0 = ((LevelInfo_t1513202700 *)CastclassClass((RuntimeObject*)L_2, LevelInfo_t1513202700_il2cpp_TypeInfo_var));
		LevelInfo_t1513202700 * L_3 = V_0;
		NullCheck(L_3);
		int32_t L_4 = LevelInfo_get_Width_m854074050(L_3, /*hidden argument*/NULL);
		float L_5 = __this->get_viewMargin_4();
		LevelInfo_t1513202700 * L_6 = V_0;
		NullCheck(L_6);
		int32_t L_7 = LevelInfo_get_Height_m1243796757(L_6, /*hidden argument*/NULL);
		float L_8 = __this->get_viewMargin_4();
		float L_9 = CameraController_GetOrthographicSize_m277825500(__this, ((float)il2cpp_codegen_add((float)(((float)((float)L_4))), (float)L_5)), ((float)il2cpp_codegen_add((float)(((float)((float)L_7))), (float)L_8)), /*hidden argument*/NULL);
		V_1 = L_9;
		float L_10 = V_1;
		float L_11 = V_1;
		float L_12 = __this->get_zoomedOutPercentage_3();
		CameraController_LerpToViewSize_m3503177015(__this, ((float)il2cpp_codegen_add((float)L_10, (float)((float)il2cpp_codegen_multiply((float)L_11, (float)L_12)))), (0.0f), /*hidden argument*/NULL);
		return;
	}
}
// System.Single CameraController::GetOrthographicSize(System.Single,System.Single)
extern "C"  float CameraController_GetOrthographicSize_m277825500 (CameraController_t3346819214 * __this, float ___minViewWidth0, float ___minViewHeight1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (CameraController_GetOrthographicSize_m277825500_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	{
		float L_0 = ___minViewWidth0;
		int32_t L_1 = Screen_get_width_m345039817(NULL /*static, unused*/, /*hidden argument*/NULL);
		int32_t L_2 = Screen_get_height_m1623532518(NULL /*static, unused*/, /*hidden argument*/NULL);
		V_0 = ((float)il2cpp_codegen_multiply((float)((float)((float)((float)((float)L_0/(float)(2.0f)))/(float)(((float)((float)L_1))))), (float)(((float)((float)L_2)))));
		float L_3 = ___minViewHeight1;
		___minViewHeight1 = ((float)((float)L_3/(float)(2.0f)));
		float L_4 = V_0;
		float L_5 = ___minViewHeight1;
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t3464937446_il2cpp_TypeInfo_var);
		float L_6 = Mathf_Max_m3146388979(NULL /*static, unused*/, L_4, L_5, /*hidden argument*/NULL);
		return L_6;
	}
}
// System.Void CameraController::LerpToViewSize(System.Single,System.Single)
extern "C"  void CameraController_LerpToViewSize_m3503177015 (CameraController_t3346819214 * __this, float ___size0, float ___delay1, const RuntimeMethod* method)
{
	{
		float L_0 = ___size0;
		__this->set_targetOrthographicSize_5(L_0);
		float L_1 = ___delay1;
		__this->set_zoomCooldown_6(L_1);
		return;
	}
}
// System.Void CameraController::MovePosition(UnityEngine.Vector2,System.Single)
extern "C"  void CameraController_MovePosition_m3895605739 (CameraController_t3346819214 * __this, Vector2_t2156229523  ___target0, float ___duration1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (CameraController_MovePosition_m3895605739_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		float L_0 = (&___target0)->get_x_0();
		float L_1 = (&___target0)->get_y_1();
		Vector3_t3722313464  L_2;
		memset(&L_2, 0, sizeof(L_2));
		Vector3__ctor_m3353183577((&L_2), L_0, L_1, (-10.0f), /*hidden argument*/NULL);
		__this->set_targetPos_8(L_2);
		float L_3 = ___duration1;
		__this->set_moveDuration_7(L_3);
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_t3722313464_il2cpp_TypeInfo_var);
		Vector3_t3722313464  L_4 = Vector3_get_zero_m1409827619(NULL /*static, unused*/, /*hidden argument*/NULL);
		__this->set_velocity_9(L_4);
		return;
	}
}
// System.Void CameraController::LateUpdate()
extern "C"  void CameraController_LateUpdate_m818054945 (CameraController_t3346819214 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (CameraController_LateUpdate_m818054945_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		float L_0 = __this->get_zoomCooldown_6();
		if ((!(((float)L_0) <= ((float)(0.0f)))))
		{
			goto IL_0072;
		}
	}
	{
		float L_1 = __this->get_targetOrthographicSize_5();
		if ((!(((float)L_1) > ((float)(0.0f)))))
		{
			goto IL_006d;
		}
	}
	{
		Camera_t4157153871 * L_2 = __this->get_cam_2();
		NullCheck(L_2);
		float L_3 = Camera_get_orthographicSize_m3903216845(L_2, /*hidden argument*/NULL);
		float L_4 = __this->get_targetOrthographicSize_5();
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t3464937446_il2cpp_TypeInfo_var);
		float L_5 = fabsf(((float)il2cpp_codegen_subtract((float)L_3, (float)L_4)));
		if ((!(((float)L_5) > ((float)(0.05f)))))
		{
			goto IL_006d;
		}
	}
	{
		Camera_t4157153871 * L_6 = __this->get_cam_2();
		Camera_t4157153871 * L_7 = __this->get_cam_2();
		NullCheck(L_7);
		float L_8 = Camera_get_orthographicSize_m3903216845(L_7, /*hidden argument*/NULL);
		float L_9 = __this->get_targetOrthographicSize_5();
		float L_10 = Time_get_deltaTime_m372706562(NULL /*static, unused*/, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t3464937446_il2cpp_TypeInfo_var);
		float L_11 = Mathf_Lerp_m1004423579(NULL /*static, unused*/, L_8, L_9, ((float)il2cpp_codegen_multiply((float)L_10, (float)(2.0f))), /*hidden argument*/NULL);
		NullCheck(L_6);
		Camera_set_orthographicSize_m76971700(L_6, L_11, /*hidden argument*/NULL);
	}

IL_006d:
	{
		goto IL_0084;
	}

IL_0072:
	{
		float L_12 = __this->get_zoomCooldown_6();
		float L_13 = Time_get_deltaTime_m372706562(NULL /*static, unused*/, /*hidden argument*/NULL);
		__this->set_zoomCooldown_6(((float)il2cpp_codegen_subtract((float)L_12, (float)L_13)));
	}

IL_0084:
	{
		Vector3_t3722313464  L_14 = __this->get_targetPos_8();
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_t3722313464_il2cpp_TypeInfo_var);
		Vector3_t3722313464  L_15 = Vector3_get_zero_m1409827619(NULL /*static, unused*/, /*hidden argument*/NULL);
		bool L_16 = Vector3_op_Inequality_m315980366(NULL /*static, unused*/, L_14, L_15, /*hidden argument*/NULL);
		if (!L_16)
		{
			goto IL_00c6;
		}
	}
	{
		Transform_t3600365921 * L_17 = Component_get_transform_m3162698980(__this, /*hidden argument*/NULL);
		Transform_t3600365921 * L_18 = Component_get_transform_m3162698980(__this, /*hidden argument*/NULL);
		NullCheck(L_18);
		Vector3_t3722313464  L_19 = Transform_get_position_m36019626(L_18, /*hidden argument*/NULL);
		Vector3_t3722313464  L_20 = __this->get_targetPos_8();
		Vector3_t3722313464 * L_21 = __this->get_address_of_velocity_9();
		float L_22 = __this->get_moveDuration_7();
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_t3722313464_il2cpp_TypeInfo_var);
		Vector3_t3722313464  L_23 = Vector3_SmoothDamp_m1123559802(NULL /*static, unused*/, L_19, L_20, (Vector3_t3722313464 *)L_21, L_22, /*hidden argument*/NULL);
		NullCheck(L_17);
		Transform_set_position_m3387557959(L_17, L_23, /*hidden argument*/NULL);
	}

IL_00c6:
	{
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void GameController::.ctor()
extern "C"  void GameController__ctor_m1587060996 (GameController_t2330501625 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_m1579109191(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void GameController::Start()
extern "C"  void GameController_Start_m1173294274 (GameController_t2330501625 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GameController_Start_m1173294274_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(GameController_t2330501625_il2cpp_TypeInfo_var);
		((GameController_t2330501625_StaticFields*)il2cpp_codegen_static_fields_for(GameController_t2330501625_il2cpp_TypeInfo_var))->set_Instance_9(__this);
		Transform_t3600365921 * L_0 = Component_get_transform_m3162698980(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		Transform_t3600365921 * L_1 = Transform_get_root_m2450402596(L_0, /*hidden argument*/NULL);
		NullCheck(L_1);
		GameObject_t1113636619 * L_2 = Component_get_gameObject_m442555142(L_1, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		Object_DontDestroyOnLoad_m166252750(NULL /*static, unused*/, L_2, /*hidden argument*/NULL);
		NotificationCenter_t2218695229 * L_3 = NotificationCenter_get_DefaultCenter_m4216969841(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_3);
		NotificationCenter_AddObserver_m3680884127(L_3, __this, _stringLiteral2286385673, /*hidden argument*/NULL);
		NotificationCenter_t2218695229 * L_4 = NotificationCenter_get_DefaultCenter_m4216969841(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_4);
		NotificationCenter_AddObserver_m3680884127(L_4, __this, _stringLiteral2430327460, /*hidden argument*/NULL);
		NotificationCenter_t2218695229 * L_5 = NotificationCenter_get_DefaultCenter_m4216969841(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_5);
		NotificationCenter_AddObserver_m3680884127(L_5, __this, _stringLiteral188005990, /*hidden argument*/NULL);
		WorldController_t23517691 * L_6 = __this->get_worldController_2();
		TileController_t1073589649 * L_7 = __this->get_tileController_3();
		NullCheck(L_6);
		WorldController_Initialize_m831189363(L_6, L_7, /*hidden argument*/NULL);
		TimedTileController_t3243845658 * L_8 = __this->get_timedTileController_4();
		TileController_t1073589649 * L_9 = __this->get_tileController_3();
		NullCheck(L_8);
		TimedTileController_Initialize_m196164070(L_8, L_9, /*hidden argument*/NULL);
		UIManager_t1042050227 * L_10 = __this->get_uiManager_6();
		NullCheck(L_10);
		UIManager_Initialize_m1126019099(L_10, /*hidden argument*/NULL);
		CameraController_t3346819214 * L_11 = __this->get_cameraController_5();
		NullCheck(L_11);
		CameraController_Initialize_m3777996556(L_11, /*hidden argument*/NULL);
		return;
	}
}
// System.Void GameController::Update()
extern "C"  void GameController_Update_m217025042 (GameController_t2330501625 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GameController_Update_m217025042_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		LevelInfo_t1513202700 * L_0 = __this->get_curLevel_10();
		if (!L_0)
		{
			goto IL_0026;
		}
	}
	{
		WorldController_t23517691 * L_1 = __this->get_worldController_2();
		NullCheck(L_1);
		WorldController_UpdateBoard_m3954357331(L_1, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(GameController_t2330501625_il2cpp_TypeInfo_var);
		float L_2 = ((GameController_t2330501625_StaticFields*)il2cpp_codegen_static_fields_for(GameController_t2330501625_il2cpp_TypeInfo_var))->get_CurrentLevelTime_12();
		float L_3 = Time_get_deltaTime_m372706562(NULL /*static, unused*/, /*hidden argument*/NULL);
		((GameController_t2330501625_StaticFields*)il2cpp_codegen_static_fields_for(GameController_t2330501625_il2cpp_TypeInfo_var))->set_CurrentLevelTime_12(((float)il2cpp_codegen_add((float)L_2, (float)L_3)));
	}

IL_0026:
	{
		return;
	}
}
// System.Void GameController::StartCurrentLevel()
extern "C"  void GameController_StartCurrentLevel_m3542281468 (GameController_t2330501625 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GameController_StartCurrentLevel_m3542281468_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(GameController_t2330501625_il2cpp_TypeInfo_var);
		((GameController_t2330501625_StaticFields*)il2cpp_codegen_static_fields_for(GameController_t2330501625_il2cpp_TypeInfo_var))->set_GameOver_13((bool)0);
		((GameController_t2330501625_StaticFields*)il2cpp_codegen_static_fields_for(GameController_t2330501625_il2cpp_TypeInfo_var))->set_CurrentLevelTime_12((0.0f));
		LevelCollection_t2422035869 * L_0 = __this->get_levelCollection_8();
		int32_t L_1 = __this->get_LevelCount_11();
		NullCheck(L_0);
		LevelInfo_t1513202700 * L_2 = LevelCollection_GetLevel_m3517958994(L_0, L_1, /*hidden argument*/NULL);
		__this->set_curLevel_10(L_2);
		WorldController_t23517691 * L_3 = __this->get_worldController_2();
		LevelInfo_t1513202700 * L_4 = __this->get_curLevel_10();
		NullCheck(L_3);
		WorldController_InitializeLevel_m509353978(L_3, L_4, /*hidden argument*/NULL);
		return;
	}
}
// System.Void GameController::StartNextLevel()
extern "C"  void GameController_StartNextLevel_m3220157239 (GameController_t2330501625 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GameController_StartNextLevel_m3220157239_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(GameController_t2330501625_il2cpp_TypeInfo_var);
		((GameController_t2330501625_StaticFields*)il2cpp_codegen_static_fields_for(GameController_t2330501625_il2cpp_TypeInfo_var))->set_GameOver_13((bool)0);
		((GameController_t2330501625_StaticFields*)il2cpp_codegen_static_fields_for(GameController_t2330501625_il2cpp_TypeInfo_var))->set_CurrentLevelTime_12((0.0f));
		int32_t L_0 = __this->get_LevelCount_11();
		__this->set_LevelCount_11(((int32_t)il2cpp_codegen_add((int32_t)L_0, (int32_t)1)));
		LevelCollection_t2422035869 * L_1 = __this->get_levelCollection_8();
		int32_t L_2 = __this->get_LevelCount_11();
		NullCheck(L_1);
		LevelInfo_t1513202700 * L_3 = LevelCollection_GetLevel_m3517958994(L_1, L_2, /*hidden argument*/NULL);
		__this->set_curLevel_10(L_3);
		WorldController_t23517691 * L_4 = __this->get_worldController_2();
		LevelInfo_t1513202700 * L_5 = __this->get_curLevel_10();
		NullCheck(L_4);
		WorldController_InitializeLevel_m509353978(L_4, L_5, /*hidden argument*/NULL);
		return;
	}
}
// System.Void GameController::QuitLevel()
extern "C"  void GameController_QuitLevel_m1934953300 (GameController_t2330501625 * __this, const RuntimeMethod* method)
{
	{
		WorldController_t23517691 * L_0 = __this->get_worldController_2();
		NullCheck(L_0);
		WorldController_DestroyLevel_m2759154792(L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void GameController::OnLevelComplete(Notification)
extern "C"  void GameController_OnLevelComplete_m1635021308 (GameController_t2330501625 * __this, Notification_t2099770324 * ___note0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GameController_OnLevelComplete_m1635021308_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		__this->set_curLevel_10((LevelInfo_t1513202700 *)NULL);
		IL2CPP_RUNTIME_CLASS_INIT(GameController_t2330501625_il2cpp_TypeInfo_var);
		((GameController_t2330501625_StaticFields*)il2cpp_codegen_static_fields_for(GameController_t2330501625_il2cpp_TypeInfo_var))->set_GameOver_13((bool)1);
		return;
	}
}
// System.Void GameController::OnLevelQuit(Notification)
extern "C"  void GameController_OnLevelQuit_m2281085251 (GameController_t2330501625 * __this, Notification_t2099770324 * ___note0, const RuntimeMethod* method)
{
	{
		__this->set_curLevel_10((LevelInfo_t1513202700 *)NULL);
		return;
	}
}
// System.Void GameController::.cctor()
extern "C"  void GameController__cctor_m3263796283 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	{
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// GridDirection GridDirectionExtensions::Opposite(GridDirection)
extern "C"  int32_t GridDirectionExtensions_Opposite_m3925076718 (RuntimeObject * __this /* static, unused */, int32_t ___direction0, const RuntimeMethod* method)
{
	int32_t G_B3_0 = 0;
	{
		int32_t L_0 = ___direction0;
		if ((((int32_t)L_0) >= ((int32_t)2)))
		{
			goto IL_000f;
		}
	}
	{
		int32_t L_1 = ___direction0;
		G_B3_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_1, (int32_t)2));
		goto IL_0012;
	}

IL_000f:
	{
		int32_t L_2 = ___direction0;
		G_B3_0 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_2, (int32_t)2));
	}

IL_0012:
	{
		return (int32_t)(G_B3_0);
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void LerpSprite::.ctor()
extern "C"  void LerpSprite__ctor_m40495407 (LerpSprite_t1901857106 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_m1579109191(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void LerpSprite::Start()
extern "C"  void LerpSprite_Start_m3752919083 (LerpSprite_t1901857106 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (LerpSprite_Start_m3752919083_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		SpriteRenderer_t3235626157 * L_0 = Component_GetComponent_TisSpriteRenderer_t3235626157_m2253180502(__this, /*hidden argument*/Component_GetComponent_TisSpriteRenderer_t3235626157_m2253180502_RuntimeMethod_var);
		__this->set_sprite_2(L_0);
		return;
	}
}
// System.Void LerpSprite::SetHidden(System.Boolean)
extern "C"  void LerpSprite_SetHidden_m1770633494 (LerpSprite_t1901857106 * __this, bool ___hidden0, const RuntimeMethod* method)
{
	{
		bool L_0 = ___hidden0;
		if (!L_0)
		{
			goto IL_0027;
		}
	}
	{
		SpriteRenderer_t3235626157 * L_1 = __this->get_sprite_2();
		NullCheck(L_1);
		Color_t2555686324  L_2 = SpriteRenderer_get_color_m904197748(L_1, /*hidden argument*/NULL);
		__this->set_lastColor_3(L_2);
		Color_t2555686324  L_3 = Color_get_clear_m1016382534(NULL /*static, unused*/, /*hidden argument*/NULL);
		__this->set_targetColor_4(L_3);
		goto IL_0033;
	}

IL_0027:
	{
		Color_t2555686324  L_4 = __this->get_lastColor_3();
		__this->set_targetColor_4(L_4);
	}

IL_0033:
	{
		return;
	}
}
// System.Void LerpSprite::SetColor(UnityEngine.Color)
extern "C"  void LerpSprite_SetColor_m2158911657 (LerpSprite_t1901857106 * __this, Color_t2555686324  ___c0, const RuntimeMethod* method)
{
	{
		Color_t2555686324  L_0 = ___c0;
		__this->set_targetColor_4(L_0);
		return;
	}
}
// System.Void LerpSprite::Update()
extern "C"  void LerpSprite_Update_m1571553909 (LerpSprite_t1901857106 * __this, const RuntimeMethod* method)
{
	{
		SpriteRenderer_t3235626157 * L_0 = __this->get_sprite_2();
		NullCheck(L_0);
		Color_t2555686324  L_1 = SpriteRenderer_get_color_m904197748(L_0, /*hidden argument*/NULL);
		Color_t2555686324  L_2 = __this->get_targetColor_4();
		bool L_3 = Color_op_Inequality_m3353772181(NULL /*static, unused*/, L_1, L_2, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_0047;
		}
	}
	{
		SpriteRenderer_t3235626157 * L_4 = __this->get_sprite_2();
		SpriteRenderer_t3235626157 * L_5 = __this->get_sprite_2();
		NullCheck(L_5);
		Color_t2555686324  L_6 = SpriteRenderer_get_color_m904197748(L_5, /*hidden argument*/NULL);
		Color_t2555686324  L_7 = __this->get_targetColor_4();
		float L_8 = Time_get_deltaTime_m372706562(NULL /*static, unused*/, /*hidden argument*/NULL);
		Color_t2555686324  L_9 = Color_Lerp_m973389909(NULL /*static, unused*/, L_6, L_7, ((float)il2cpp_codegen_multiply((float)L_8, (float)(15.0f))), /*hidden argument*/NULL);
		NullCheck(L_4);
		SpriteRenderer_set_color_m3056777566(L_4, L_9, /*hidden argument*/NULL);
	}

IL_0047:
	{
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void LevelCollection::.ctor()
extern "C"  void LevelCollection__ctor_m2090295303 (LevelCollection_t2422035869 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_m1579109191(__this, /*hidden argument*/NULL);
		return;
	}
}
// LevelInfo LevelCollection::GetLevel(System.Int32)
extern "C"  LevelInfo_t1513202700 * LevelCollection_GetLevel_m3517958994 (LevelCollection_t2422035869 * __this, int32_t ___levelNumber0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (LevelCollection_GetLevel_m3517958994_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	float V_1 = 0.0f;
	{
		int32_t L_0 = ___levelNumber0;
		if ((((int32_t)L_0) >= ((int32_t)1)))
		{
			goto IL_000e;
		}
	}
	{
		int32_t L_1 = ___levelNumber0;
		LevelInfo_t1513202700 * L_2 = (LevelInfo_t1513202700 *)il2cpp_codegen_object_new(LevelInfo_t1513202700_il2cpp_TypeInfo_var);
		LevelInfo__ctor_m2022729631(L_2, L_1, /*hidden argument*/NULL);
		return L_2;
	}

IL_000e:
	{
		int32_t L_3 = ___levelNumber0;
		LevelPresetU5BU5D_t629770153* L_4 = __this->get_levels_7();
		NullCheck(L_4);
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t3464937446_il2cpp_TypeInfo_var);
		int32_t L_5 = Mathf_Clamp_m2756574208(NULL /*static, unused*/, L_3, 0, ((int32_t)il2cpp_codegen_subtract((int32_t)((int32_t)il2cpp_codegen_add((int32_t)1, (int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_4)->max_length)))))), (int32_t)1)), /*hidden argument*/NULL);
		V_0 = L_5;
		V_1 = (0.8f);
		LevelPresetU5BU5D_t629770153* L_6 = __this->get_levels_7();
		int32_t L_7 = V_0;
		NullCheck(L_6);
		int32_t L_8 = L_7;
		LevelPreset_t3313492856 * L_9 = (L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_8));
		NullCheck(L_9);
		int32_t L_10 = L_9->get_width_0();
		LevelPresetU5BU5D_t629770153* L_11 = __this->get_levels_7();
		int32_t L_12 = V_0;
		NullCheck(L_11);
		int32_t L_13 = L_12;
		LevelPreset_t3313492856 * L_14 = (L_11)->GetAt(static_cast<il2cpp_array_size_t>(L_13));
		NullCheck(L_14);
		int32_t L_15 = L_14->get_height_1();
		float L_16 = V_1;
		float L_17 = __this->get_timedTilePercentage_6();
		LevelInfo_t1513202700 * L_18 = (LevelInfo_t1513202700 *)il2cpp_codegen_object_new(LevelInfo_t1513202700_il2cpp_TypeInfo_var);
		LevelInfo__ctor_m3282575238(L_18, L_10, L_15, L_16, L_17, 6, /*hidden argument*/NULL);
		return L_18;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void LevelCollection/LevelPreset::.ctor()
extern "C"  void LevelPreset__ctor_m481058571 (LevelPreset_t3313492856 * __this, const RuntimeMethod* method)
{
	{
		__this->set_width_0(2);
		__this->set_height_1(3);
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void LevelInfo::.ctor(System.Int32,System.Int32,System.Single,System.Single,System.Int32)
extern "C"  void LevelInfo__ctor_m3282575238 (LevelInfo_t1513202700 * __this, int32_t ___width0, int32_t ___height1, float ___fillAmount2, float ___timedTileAmount3, int32_t ___timedTileDelay4, const RuntimeMethod* method)
{
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___width0;
		LevelInfo_set_Width_m3036091243(__this, L_0, /*hidden argument*/NULL);
		int32_t L_1 = ___height1;
		LevelInfo_set_Height_m1478154003(__this, L_1, /*hidden argument*/NULL);
		LevelInfo_set_Procedural_m743385710(__this, (bool)1, /*hidden argument*/NULL);
		float L_2 = ___fillAmount2;
		LevelInfo_set_FillAmount_m372411279(__this, L_2, /*hidden argument*/NULL);
		float L_3 = ___timedTileAmount3;
		LevelInfo_set_TimedTileAmount_m484924067(__this, L_3, /*hidden argument*/NULL);
		int32_t L_4 = ___timedTileDelay4;
		LevelInfo_set_TimedTileDelay_m2193783153(__this, L_4, /*hidden argument*/NULL);
		return;
	}
}
// System.Void LevelInfo::.ctor(System.Int32)
extern "C"  void LevelInfo__ctor_m2022729631 (LevelInfo_t1513202700 * __this, int32_t ___presetIndex0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (LevelInfo__ctor_m2022729631_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		LevelInfo_set_Procedural_m743385710(__this, (bool)0, /*hidden argument*/NULL);
		int32_t L_0 = ___presetIndex0;
		if (L_0)
		{
			goto IL_00b1;
		}
	}
	{
		LevelInfo_set_Width_m3036091243(__this, 2, /*hidden argument*/NULL);
		LevelInfo_set_Height_m1478154003(__this, 3, /*hidden argument*/NULL);
		int32_t L_1 = LevelInfo_get_Width_m854074050(__this, /*hidden argument*/NULL);
		int32_t L_2 = LevelInfo_get_Height_m1243796757(__this, /*hidden argument*/NULL);
		il2cpp_array_size_t L_4[] = { (il2cpp_array_size_t)L_1, (il2cpp_array_size_t)L_2 };
		TileTypeU5B0___U2C0___U5D_t1226088886* L_3 = (TileTypeU5B0___U2C0___U5D_t1226088886*)GenArrayNew(TileTypeU5B0___U2C0___U5D_t1226088886_il2cpp_TypeInfo_var, L_4);
		__this->set_Tiles_6((TileTypeU5B0___U2C0___U5D_t1226088886*)L_3);
		int32_t L_5 = LevelInfo_get_Width_m854074050(__this, /*hidden argument*/NULL);
		int32_t L_6 = LevelInfo_get_Height_m1243796757(__this, /*hidden argument*/NULL);
		il2cpp_array_size_t L_8[] = { (il2cpp_array_size_t)L_5, (il2cpp_array_size_t)L_6 };
		BooleanU5B0___U2C0___U5D_t2897418193* L_7 = (BooleanU5B0___U2C0___U5D_t2897418193*)GenArrayNew(BooleanU5B0___U2C0___U5D_t2897418193_il2cpp_TypeInfo_var, L_8);
		__this->set_RotationIgnore_7((BooleanU5B0___U2C0___U5D_t2897418193*)L_7);
		TileTypeU5B0___U2C0___U5D_t1226088886* L_9 = __this->get_Tiles_6();
		NullCheck((TileTypeU5B0___U2C0___U5D_t1226088886*)(TileTypeU5B0___U2C0___U5D_t1226088886*)L_9);
		((TileTypeU5B0___U2C0___U5D_t1226088886*)(TileTypeU5B0___U2C0___U5D_t1226088886*)L_9)->SetAt(0, 0, 1);
		TileTypeU5B0___U2C0___U5D_t1226088886* L_10 = __this->get_Tiles_6();
		NullCheck((TileTypeU5B0___U2C0___U5D_t1226088886*)(TileTypeU5B0___U2C0___U5D_t1226088886*)L_10);
		((TileTypeU5B0___U2C0___U5D_t1226088886*)(TileTypeU5B0___U2C0___U5D_t1226088886*)L_10)->SetAt(1, 0, 3);
		TileTypeU5B0___U2C0___U5D_t1226088886* L_11 = __this->get_Tiles_6();
		NullCheck((TileTypeU5B0___U2C0___U5D_t1226088886*)(TileTypeU5B0___U2C0___U5D_t1226088886*)L_11);
		((TileTypeU5B0___U2C0___U5D_t1226088886*)(TileTypeU5B0___U2C0___U5D_t1226088886*)L_11)->SetAt(0, 1, 0);
		TileTypeU5B0___U2C0___U5D_t1226088886* L_12 = __this->get_Tiles_6();
		NullCheck((TileTypeU5B0___U2C0___U5D_t1226088886*)(TileTypeU5B0___U2C0___U5D_t1226088886*)L_12);
		((TileTypeU5B0___U2C0___U5D_t1226088886*)(TileTypeU5B0___U2C0___U5D_t1226088886*)L_12)->SetAt(1, 1, 3);
		TileTypeU5B0___U2C0___U5D_t1226088886* L_13 = __this->get_Tiles_6();
		NullCheck((TileTypeU5B0___U2C0___U5D_t1226088886*)(TileTypeU5B0___U2C0___U5D_t1226088886*)L_13);
		((TileTypeU5B0___U2C0___U5D_t1226088886*)(TileTypeU5B0___U2C0___U5D_t1226088886*)L_13)->SetAt(0, 2, 0);
		TileTypeU5B0___U2C0___U5D_t1226088886* L_14 = __this->get_Tiles_6();
		NullCheck((TileTypeU5B0___U2C0___U5D_t1226088886*)(TileTypeU5B0___U2C0___U5D_t1226088886*)L_14);
		((TileTypeU5B0___U2C0___U5D_t1226088886*)(TileTypeU5B0___U2C0___U5D_t1226088886*)L_14)->SetAt(1, 2, 2);
		BooleanU5B0___U2C0___U5D_t2897418193* L_15 = __this->get_RotationIgnore_7();
		NullCheck((BooleanU5B0___U2C0___U5D_t2897418193*)(BooleanU5B0___U2C0___U5D_t2897418193*)L_15);
		((BooleanU5B0___U2C0___U5D_t2897418193*)(BooleanU5B0___U2C0___U5D_t2897418193*)L_15)->SetAt(0, 1, (bool)1);
	}

IL_00b1:
	{
		return;
	}
}
// System.Int32 LevelInfo::get_Width()
extern "C"  int32_t LevelInfo_get_Width_m854074050 (LevelInfo_t1513202700 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_U3CWidthU3Ek__BackingField_0();
		return L_0;
	}
}
// System.Void LevelInfo::set_Width(System.Int32)
extern "C"  void LevelInfo_set_Width_m3036091243 (LevelInfo_t1513202700 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___value0;
		__this->set_U3CWidthU3Ek__BackingField_0(L_0);
		return;
	}
}
// System.Int32 LevelInfo::get_Height()
extern "C"  int32_t LevelInfo_get_Height_m1243796757 (LevelInfo_t1513202700 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_U3CHeightU3Ek__BackingField_1();
		return L_0;
	}
}
// System.Void LevelInfo::set_Height(System.Int32)
extern "C"  void LevelInfo_set_Height_m1478154003 (LevelInfo_t1513202700 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___value0;
		__this->set_U3CHeightU3Ek__BackingField_1(L_0);
		return;
	}
}
// System.Boolean LevelInfo::get_Procedural()
extern "C"  bool LevelInfo_get_Procedural_m3103714944 (LevelInfo_t1513202700 * __this, const RuntimeMethod* method)
{
	{
		bool L_0 = __this->get_U3CProceduralU3Ek__BackingField_2();
		return L_0;
	}
}
// System.Void LevelInfo::set_Procedural(System.Boolean)
extern "C"  void LevelInfo_set_Procedural_m743385710 (LevelInfo_t1513202700 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		bool L_0 = ___value0;
		__this->set_U3CProceduralU3Ek__BackingField_2(L_0);
		return;
	}
}
// System.Single LevelInfo::get_FillAmount()
extern "C"  float LevelInfo_get_FillAmount_m3059614925 (LevelInfo_t1513202700 * __this, const RuntimeMethod* method)
{
	{
		float L_0 = __this->get_U3CFillAmountU3Ek__BackingField_3();
		return L_0;
	}
}
// System.Void LevelInfo::set_FillAmount(System.Single)
extern "C"  void LevelInfo_set_FillAmount_m372411279 (LevelInfo_t1513202700 * __this, float ___value0, const RuntimeMethod* method)
{
	{
		float L_0 = ___value0;
		__this->set_U3CFillAmountU3Ek__BackingField_3(L_0);
		return;
	}
}
// System.Single LevelInfo::get_TimedTileAmount()
extern "C"  float LevelInfo_get_TimedTileAmount_m917445596 (LevelInfo_t1513202700 * __this, const RuntimeMethod* method)
{
	{
		float L_0 = __this->get_U3CTimedTileAmountU3Ek__BackingField_4();
		return L_0;
	}
}
// System.Void LevelInfo::set_TimedTileAmount(System.Single)
extern "C"  void LevelInfo_set_TimedTileAmount_m484924067 (LevelInfo_t1513202700 * __this, float ___value0, const RuntimeMethod* method)
{
	{
		float L_0 = ___value0;
		__this->set_U3CTimedTileAmountU3Ek__BackingField_4(L_0);
		return;
	}
}
// System.Int32 LevelInfo::get_TimedTileDelay()
extern "C"  int32_t LevelInfo_get_TimedTileDelay_m2454384926 (LevelInfo_t1513202700 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_U3CTimedTileDelayU3Ek__BackingField_5();
		return L_0;
	}
}
// System.Void LevelInfo::set_TimedTileDelay(System.Int32)
extern "C"  void LevelInfo_set_TimedTileDelay_m2193783153 (LevelInfo_t1513202700 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___value0;
		__this->set_U3CTimedTileDelayU3Ek__BackingField_5(L_0);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Notification::.ctor(UnityEngine.Component,System.String)
extern "C"  void Notification__ctor_m1723798862 (Notification_t2099770324 * __this, Component_t1923634451 * ___aSender0, String_t* ___aName1, const RuntimeMethod* method)
{
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		Component_t1923634451 * L_0 = ___aSender0;
		__this->set_sender_0(L_0);
		String_t* L_1 = ___aName1;
		__this->set_name_1(L_1);
		__this->set_data_2((Hashtable_t1853889766 *)NULL);
		return;
	}
}
// System.Void Notification::.ctor(UnityEngine.Component,System.String,System.Collections.Hashtable)
extern "C"  void Notification__ctor_m3705588632 (Notification_t2099770324 * __this, Component_t1923634451 * ___aSender0, String_t* ___aName1, Hashtable_t1853889766 * ___aData2, const RuntimeMethod* method)
{
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		Component_t1923634451 * L_0 = ___aSender0;
		__this->set_sender_0(L_0);
		String_t* L_1 = ___aName1;
		__this->set_name_1(L_1);
		Hashtable_t1853889766 * L_2 = ___aData2;
		__this->set_data_2(L_2);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void NotificationCenter::.ctor()
extern "C"  void NotificationCenter__ctor_m2281434081 (NotificationCenter_t2218695229 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (NotificationCenter__ctor_m2281434081_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Hashtable_t1853889766 * L_0 = (Hashtable_t1853889766 *)il2cpp_codegen_object_new(Hashtable_t1853889766_il2cpp_TypeInfo_var);
		Hashtable__ctor_m1815022027(L_0, /*hidden argument*/NULL);
		__this->set_notifications_3(L_0);
		MonoBehaviour__ctor_m1579109191(__this, /*hidden argument*/NULL);
		return;
	}
}
// NotificationCenter NotificationCenter::get_DefaultCenter()
extern "C"  NotificationCenter_t2218695229 * NotificationCenter_get_DefaultCenter_m4216969841 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (NotificationCenter_get_DefaultCenter_m4216969841_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	GameObject_t1113636619 * V_0 = NULL;
	{
		NotificationCenter_t2218695229 * L_0 = ((NotificationCenter_t2218695229_StaticFields*)il2cpp_codegen_static_fields_for(NotificationCenter_t2218695229_il2cpp_TypeInfo_var))->get_defaultCenter_2();
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_1 = Object_op_Implicit_m3574996620(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		if (L_1)
		{
			goto IL_0025;
		}
	}
	{
		GameObject_t1113636619 * L_2 = (GameObject_t1113636619 *)il2cpp_codegen_object_new(GameObject_t1113636619_il2cpp_TypeInfo_var);
		GameObject__ctor_m2093116449(L_2, _stringLiteral2072774192, /*hidden argument*/NULL);
		V_0 = L_2;
		GameObject_t1113636619 * L_3 = V_0;
		NullCheck(L_3);
		NotificationCenter_t2218695229 * L_4 = GameObject_AddComponent_TisNotificationCenter_t2218695229_m4196679536(L_3, /*hidden argument*/GameObject_AddComponent_TisNotificationCenter_t2218695229_m4196679536_RuntimeMethod_var);
		((NotificationCenter_t2218695229_StaticFields*)il2cpp_codegen_static_fields_for(NotificationCenter_t2218695229_il2cpp_TypeInfo_var))->set_defaultCenter_2(L_4);
	}

IL_0025:
	{
		NotificationCenter_t2218695229 * L_5 = ((NotificationCenter_t2218695229_StaticFields*)il2cpp_codegen_static_fields_for(NotificationCenter_t2218695229_il2cpp_TypeInfo_var))->get_defaultCenter_2();
		return L_5;
	}
}
// System.Void NotificationCenter::AddObserver(UnityEngine.Component,System.String)
extern "C"  void NotificationCenter_AddObserver_m3680884127 (NotificationCenter_t2218695229 * __this, Component_t1923634451 * ___observer0, String_t* ___name1, const RuntimeMethod* method)
{
	{
		Component_t1923634451 * L_0 = ___observer0;
		String_t* L_1 = ___name1;
		NotificationCenter_AddObserver_m571966720(__this, L_0, L_1, (Component_t1923634451 *)NULL, /*hidden argument*/NULL);
		return;
	}
}
// System.Void NotificationCenter::AddObserver(UnityEngine.Component,System.String,UnityEngine.Component)
extern "C"  void NotificationCenter_AddObserver_m571966720 (NotificationCenter_t2218695229 * __this, Component_t1923634451 * ___observer0, String_t* ___name1, Component_t1923634451 * ___sender2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (NotificationCenter_AddObserver_m571966720_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	List_1_t3395709193 * V_0 = NULL;
	{
		String_t* L_0 = ___name1;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_1 = String_IsNullOrEmpty_m2969720369(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0016;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t3317548046_il2cpp_TypeInfo_var);
		Debug_Log_m4051431634(NULL /*static, unused*/, _stringLiteral1793134530, /*hidden argument*/NULL);
		return;
	}

IL_0016:
	{
		Hashtable_t1853889766 * L_2 = __this->get_notifications_3();
		String_t* L_3 = ___name1;
		NullCheck(L_2);
		RuntimeObject * L_4 = VirtFuncInvoker1< RuntimeObject *, RuntimeObject * >::Invoke(21 /* System.Object System.Collections.Hashtable::get_Item(System.Object) */, L_2, L_3);
		if (L_4)
		{
			goto IL_0038;
		}
	}
	{
		Hashtable_t1853889766 * L_5 = __this->get_notifications_3();
		String_t* L_6 = ___name1;
		List_1_t3395709193 * L_7 = (List_1_t3395709193 *)il2cpp_codegen_object_new(List_1_t3395709193_il2cpp_TypeInfo_var);
		List_1__ctor_m504713606(L_7, /*hidden argument*/List_1__ctor_m504713606_RuntimeMethod_var);
		NullCheck(L_5);
		VirtActionInvoker2< RuntimeObject *, RuntimeObject * >::Invoke(22 /* System.Void System.Collections.Hashtable::set_Item(System.Object,System.Object) */, L_5, L_6, L_7);
	}

IL_0038:
	{
		Hashtable_t1853889766 * L_8 = __this->get_notifications_3();
		String_t* L_9 = ___name1;
		NullCheck(L_8);
		RuntimeObject * L_10 = VirtFuncInvoker1< RuntimeObject *, RuntimeObject * >::Invoke(21 /* System.Object System.Collections.Hashtable::get_Item(System.Object) */, L_8, L_9);
		V_0 = ((List_1_t3395709193 *)IsInstClass((RuntimeObject*)L_10, List_1_t3395709193_il2cpp_TypeInfo_var));
		List_1_t3395709193 * L_11 = V_0;
		Component_t1923634451 * L_12 = ___observer0;
		NullCheck(L_11);
		bool L_13 = List_1_Contains_m200023965(L_11, L_12, /*hidden argument*/List_1_Contains_m200023965_RuntimeMethod_var);
		if (L_13)
		{
			goto IL_005d;
		}
	}
	{
		List_1_t3395709193 * L_14 = V_0;
		Component_t1923634451 * L_15 = ___observer0;
		NullCheck(L_14);
		List_1_Add_m3267405110(L_14, L_15, /*hidden argument*/List_1_Add_m3267405110_RuntimeMethod_var);
	}

IL_005d:
	{
		return;
	}
}
// System.Void NotificationCenter::RemoveObserver(UnityEngine.Component,System.String)
extern "C"  void NotificationCenter_RemoveObserver_m3301975025 (NotificationCenter_t2218695229 * __this, Component_t1923634451 * ___observer0, String_t* ___name1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (NotificationCenter_RemoveObserver_m3301975025_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	List_1_t3395709193 * V_0 = NULL;
	{
		Hashtable_t1853889766 * L_0 = __this->get_notifications_3();
		String_t* L_1 = ___name1;
		NullCheck(L_0);
		RuntimeObject * L_2 = VirtFuncInvoker1< RuntimeObject *, RuntimeObject * >::Invoke(21 /* System.Object System.Collections.Hashtable::get_Item(System.Object) */, L_0, L_1);
		V_0 = ((List_1_t3395709193 *)CastclassClass((RuntimeObject*)L_2, List_1_t3395709193_il2cpp_TypeInfo_var));
		List_1_t3395709193 * L_3 = V_0;
		if (!L_3)
		{
			goto IL_0043;
		}
	}
	{
		List_1_t3395709193 * L_4 = V_0;
		Component_t1923634451 * L_5 = ___observer0;
		NullCheck(L_4);
		bool L_6 = List_1_Contains_m200023965(L_4, L_5, /*hidden argument*/List_1_Contains_m200023965_RuntimeMethod_var);
		if (!L_6)
		{
			goto IL_002c;
		}
	}
	{
		List_1_t3395709193 * L_7 = V_0;
		Component_t1923634451 * L_8 = ___observer0;
		NullCheck(L_7);
		List_1_Remove_m96541543(L_7, L_8, /*hidden argument*/List_1_Remove_m96541543_RuntimeMethod_var);
	}

IL_002c:
	{
		List_1_t3395709193 * L_9 = V_0;
		NullCheck(L_9);
		int32_t L_10 = List_1_get_Count_m1294235957(L_9, /*hidden argument*/List_1_get_Count_m1294235957_RuntimeMethod_var);
		if (L_10)
		{
			goto IL_0043;
		}
	}
	{
		Hashtable_t1853889766 * L_11 = __this->get_notifications_3();
		String_t* L_12 = ___name1;
		NullCheck(L_11);
		VirtActionInvoker1< RuntimeObject * >::Invoke(28 /* System.Void System.Collections.Hashtable::Remove(System.Object) */, L_11, L_12);
	}

IL_0043:
	{
		return;
	}
}
// System.Void NotificationCenter::PostNotification(UnityEngine.Component,System.String)
extern "C"  void NotificationCenter_PostNotification_m3791781737 (NotificationCenter_t2218695229 * __this, Component_t1923634451 * ___aSender0, String_t* ___aName1, const RuntimeMethod* method)
{
	{
		Component_t1923634451 * L_0 = ___aSender0;
		String_t* L_1 = ___aName1;
		NotificationCenter_PostNotification_m2114245645(__this, L_0, L_1, (Hashtable_t1853889766 *)NULL, /*hidden argument*/NULL);
		return;
	}
}
// System.Void NotificationCenter::PostNotification(UnityEngine.Component,System.String,System.Collections.Hashtable)
extern "C"  void NotificationCenter_PostNotification_m2114245645 (NotificationCenter_t2218695229 * __this, Component_t1923634451 * ___aSender0, String_t* ___aName1, Hashtable_t1853889766 * ___aData2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (NotificationCenter_PostNotification_m2114245645_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Component_t1923634451 * L_0 = ___aSender0;
		String_t* L_1 = ___aName1;
		Hashtable_t1853889766 * L_2 = ___aData2;
		Notification_t2099770324 * L_3 = (Notification_t2099770324 *)il2cpp_codegen_object_new(Notification_t2099770324_il2cpp_TypeInfo_var);
		Notification__ctor_m3705588632(L_3, L_0, L_1, L_2, /*hidden argument*/NULL);
		NotificationCenter_PostNotification_m2079818164(__this, L_3, /*hidden argument*/NULL);
		return;
	}
}
// System.Void NotificationCenter::PostNotification(Notification)
extern "C"  void NotificationCenter_PostNotification_m2079818164 (NotificationCenter_t2218695229 * __this, Notification_t2099770324 * ___aNotification0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (NotificationCenter_PostNotification_m2079818164_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	List_1_t3395709193 * V_0 = NULL;
	List_1_t3395709193 * V_1 = NULL;
	Component_t1923634451 * V_2 = NULL;
	Enumerator_t989985774  V_3;
	memset(&V_3, 0, sizeof(V_3));
	Component_t1923634451 * V_4 = NULL;
	Enumerator_t989985774  V_5;
	memset(&V_5, 0, sizeof(V_5));
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		Notification_t2099770324 * L_0 = ___aNotification0;
		NullCheck(L_0);
		String_t* L_1 = L_0->get_name_1();
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_2 = String_IsNullOrEmpty_m2969720369(NULL /*static, unused*/, L_1, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_001b;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t3317548046_il2cpp_TypeInfo_var);
		Debug_Log_m4051431634(NULL /*static, unused*/, _stringLiteral2067484346, /*hidden argument*/NULL);
		return;
	}

IL_001b:
	{
		Hashtable_t1853889766 * L_3 = __this->get_notifications_3();
		Notification_t2099770324 * L_4 = ___aNotification0;
		NullCheck(L_4);
		String_t* L_5 = L_4->get_name_1();
		NullCheck(L_3);
		RuntimeObject * L_6 = VirtFuncInvoker1< RuntimeObject *, RuntimeObject * >::Invoke(21 /* System.Object System.Collections.Hashtable::get_Item(System.Object) */, L_3, L_5);
		V_0 = ((List_1_t3395709193 *)CastclassClass((RuntimeObject*)L_6, List_1_t3395709193_il2cpp_TypeInfo_var));
		List_1_t3395709193 * L_7 = V_0;
		if (L_7)
		{
			goto IL_004e;
		}
	}
	{
		Notification_t2099770324 * L_8 = ___aNotification0;
		NullCheck(L_8);
		String_t* L_9 = L_8->get_name_1();
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_10 = String_Concat_m3937257545(NULL /*static, unused*/, _stringLiteral1956414792, L_9, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t3317548046_il2cpp_TypeInfo_var);
		Debug_Log_m4051431634(NULL /*static, unused*/, L_10, /*hidden argument*/NULL);
		return;
	}

IL_004e:
	{
		List_1_t3395709193 * L_11 = (List_1_t3395709193 *)il2cpp_codegen_object_new(List_1_t3395709193_il2cpp_TypeInfo_var);
		List_1__ctor_m504713606(L_11, /*hidden argument*/List_1__ctor_m504713606_RuntimeMethod_var);
		V_1 = L_11;
		List_1_t3395709193 * L_12 = V_0;
		NullCheck(L_12);
		Enumerator_t989985774  L_13 = List_1_GetEnumerator_m4128318975(L_12, /*hidden argument*/List_1_GetEnumerator_m4128318975_RuntimeMethod_var);
		V_3 = L_13;
	}

IL_005b:
	try
	{ // begin try (depth: 1)
		{
			goto IL_008d;
		}

IL_0060:
		{
			Component_t1923634451 * L_14 = Enumerator_get_Current_m1782500462((Enumerator_t989985774 *)(&V_3), /*hidden argument*/Enumerator_get_Current_m1782500462_RuntimeMethod_var);
			V_2 = L_14;
			Component_t1923634451 * L_15 = V_2;
			IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
			bool L_16 = Object_op_Implicit_m3574996620(NULL /*static, unused*/, L_15, /*hidden argument*/NULL);
			if (L_16)
			{
				goto IL_007f;
			}
		}

IL_0073:
		{
			List_1_t3395709193 * L_17 = V_1;
			Component_t1923634451 * L_18 = V_2;
			NullCheck(L_17);
			List_1_Add_m3267405110(L_17, L_18, /*hidden argument*/List_1_Add_m3267405110_RuntimeMethod_var);
			goto IL_008d;
		}

IL_007f:
		{
			Component_t1923634451 * L_19 = V_2;
			Notification_t2099770324 * L_20 = ___aNotification0;
			NullCheck(L_20);
			String_t* L_21 = L_20->get_name_1();
			Notification_t2099770324 * L_22 = ___aNotification0;
			NullCheck(L_19);
			Component_SendMessage_m2905932203(L_19, L_21, L_22, 1, /*hidden argument*/NULL);
		}

IL_008d:
		{
			bool L_23 = Enumerator_MoveNext_m4232616038((Enumerator_t989985774 *)(&V_3), /*hidden argument*/Enumerator_MoveNext_m4232616038_RuntimeMethod_var);
			if (L_23)
			{
				goto IL_0060;
			}
		}

IL_0099:
		{
			IL2CPP_LEAVE(0xAC, FINALLY_009e);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_009e;
	}

FINALLY_009e:
	{ // begin finally (depth: 1)
		Enumerator_Dispose_m4132484595((Enumerator_t989985774 *)(&V_3), /*hidden argument*/Enumerator_Dispose_m4132484595_RuntimeMethod_var);
		IL2CPP_END_FINALLY(158)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(158)
	{
		IL2CPP_JUMP_TBL(0xAC, IL_00ac)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_00ac:
	{
		List_1_t3395709193 * L_24 = V_1;
		NullCheck(L_24);
		Enumerator_t989985774  L_25 = List_1_GetEnumerator_m4128318975(L_24, /*hidden argument*/List_1_GetEnumerator_m4128318975_RuntimeMethod_var);
		V_5 = L_25;
	}

IL_00b4:
	try
	{ // begin try (depth: 1)
		{
			goto IL_00cb;
		}

IL_00b9:
		{
			Component_t1923634451 * L_26 = Enumerator_get_Current_m1782500462((Enumerator_t989985774 *)(&V_5), /*hidden argument*/Enumerator_get_Current_m1782500462_RuntimeMethod_var);
			V_4 = L_26;
			List_1_t3395709193 * L_27 = V_0;
			Component_t1923634451 * L_28 = V_4;
			NullCheck(L_27);
			List_1_Remove_m96541543(L_27, L_28, /*hidden argument*/List_1_Remove_m96541543_RuntimeMethod_var);
		}

IL_00cb:
		{
			bool L_29 = Enumerator_MoveNext_m4232616038((Enumerator_t989985774 *)(&V_5), /*hidden argument*/Enumerator_MoveNext_m4232616038_RuntimeMethod_var);
			if (L_29)
			{
				goto IL_00b9;
			}
		}

IL_00d7:
		{
			IL2CPP_LEAVE(0xEA, FINALLY_00dc);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_00dc;
	}

FINALLY_00dc:
	{ // begin finally (depth: 1)
		Enumerator_Dispose_m4132484595((Enumerator_t989985774 *)(&V_5), /*hidden argument*/Enumerator_Dispose_m4132484595_RuntimeMethod_var);
		IL2CPP_END_FINALLY(220)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(220)
	{
		IL2CPP_JUMP_TBL(0xEA, IL_00ea)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_00ea:
	{
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void PanelAnimator::.ctor()
extern "C"  void PanelAnimator__ctor_m111177076 (PanelAnimator_t918022618 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_m1579109191(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void PanelAnimator::Awake()
extern "C"  void PanelAnimator_Awake_m2329624148 (PanelAnimator_t918022618 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PanelAnimator_Awake_m2329624148_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		bool L_0 = __this->get_isOpen_4();
		if (L_0)
		{
			goto IL_0026;
		}
	}
	{
		Animator_t434523843 * L_1 = __this->get_anim_2();
		NullCheck(L_1);
		Animator_Play_m2835034014(L_1, _stringLiteral3483484711, 0, (1.0f), /*hidden argument*/NULL);
		goto IL_003c;
	}

IL_0026:
	{
		Animator_t434523843 * L_2 = __this->get_anim_2();
		NullCheck(L_2);
		Animator_Play_m2835034014(L_2, _stringLiteral3905732978, 0, (1.0f), /*hidden argument*/NULL);
	}

IL_003c:
	{
		return;
	}
}
// System.Void PanelAnimator::ToggleOpen()
extern "C"  void PanelAnimator_ToggleOpen_m800681097 (PanelAnimator_t918022618 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PanelAnimator_ToggleOpen_m800681097_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	AnimatorStateInfo_t509032636  V_0;
	memset(&V_0, 0, sizeof(V_0));
	AnimatorStateInfo_t509032636  V_1;
	memset(&V_1, 0, sizeof(V_1));
	Animator_t434523843 * G_B5_0 = NULL;
	Animator_t434523843 * G_B4_0 = NULL;
	String_t* G_B6_0 = NULL;
	Animator_t434523843 * G_B6_1 = NULL;
	{
		Animator_t434523843 * L_0 = __this->get_anim_2();
		NullCheck(L_0);
		AnimatorStateInfo_t509032636  L_1 = Animator_GetCurrentAnimatorStateInfo_m18694920(L_0, 0, /*hidden argument*/NULL);
		V_0 = L_1;
		bool L_2 = AnimatorStateInfo_IsName_m3393819976((AnimatorStateInfo_t509032636 *)(&V_0), _stringLiteral2628724878, /*hidden argument*/NULL);
		if (L_2)
		{
			goto IL_003c;
		}
	}
	{
		Animator_t434523843 * L_3 = __this->get_anim_2();
		NullCheck(L_3);
		AnimatorStateInfo_t509032636  L_4 = Animator_GetCurrentAnimatorStateInfo_m18694920(L_3, 0, /*hidden argument*/NULL);
		V_1 = L_4;
		bool L_5 = AnimatorStateInfo_IsName_m3393819976((AnimatorStateInfo_t509032636 *)(&V_1), _stringLiteral2676185457, /*hidden argument*/NULL);
		if (!L_5)
		{
			goto IL_003d;
		}
	}

IL_003c:
	{
		return;
	}

IL_003d:
	{
		bool L_6 = __this->get_isOpen_4();
		__this->set_isOpen_4((bool)((((int32_t)L_6) == ((int32_t)0))? 1 : 0));
		Animator_t434523843 * L_7 = __this->get_anim_2();
		bool L_8 = __this->get_isOpen_4();
		G_B4_0 = L_7;
		if (!L_8)
		{
			G_B5_0 = L_7;
			goto IL_0067;
		}
	}
	{
		G_B6_0 = _stringLiteral3905732978;
		G_B6_1 = G_B4_0;
		goto IL_006c;
	}

IL_0067:
	{
		G_B6_0 = _stringLiteral3483484711;
		G_B6_1 = G_B5_0;
	}

IL_006c:
	{
		NullCheck(G_B6_1);
		Animator_SetTrigger_m2134052629(G_B6_1, G_B6_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void PanelAnimator::SetButtonEnabled(System.Boolean)
extern "C"  void PanelAnimator_SetButtonEnabled_m1545979629 (PanelAnimator_t918022618 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		Button_t4055032469 * L_0 = __this->get_OpenButton_3();
		bool L_1 = ___value0;
		NullCheck(L_0);
		Selectable_set_interactable_m3105888815(L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void PauseMenu::.ctor()
extern "C"  void PauseMenu__ctor_m3854158124 (PauseMenu_t3916167947 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_m1579109191(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void PauseMenu::Start()
extern "C"  void PauseMenu_Start_m517218302 (PauseMenu_t3916167947 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Void PauseMenu::Update()
extern "C"  void PauseMenu_Update_m1844139191 (PauseMenu_t3916167947 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PauseMenu_Update_m1844139191_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(GameController_t2330501625_il2cpp_TypeInfo_var);
		bool L_0 = ((GameController_t2330501625_StaticFields*)il2cpp_codegen_static_fields_for(GameController_t2330501625_il2cpp_TypeInfo_var))->get_GameOver_13();
		if (L_0)
		{
			goto IL_0010;
		}
	}
	{
		PauseMenu_UpdateTimer_m1180594338(__this, /*hidden argument*/NULL);
	}

IL_0010:
	{
		return;
	}
}
// System.Void PauseMenu::UpdateTimer()
extern "C"  void PauseMenu_UpdateTimer_m1180594338 (PauseMenu_t3916167947 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PauseMenu_UpdateTimer_m1180594338_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	int32_t V_1 = 0;
	String_t* V_2 = NULL;
	int32_t V_3 = 0;
	String_t* V_4 = NULL;
	String_t* G_B3_0 = NULL;
	String_t* G_B6_0 = NULL;
	{
		IL2CPP_RUNTIME_CLASS_INIT(GameController_t2330501625_il2cpp_TypeInfo_var);
		float L_0 = ((GameController_t2330501625_StaticFields*)il2cpp_codegen_static_fields_for(GameController_t2330501625_il2cpp_TypeInfo_var))->get_CurrentLevelTime_12();
		V_0 = L_0;
		float L_1 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t3464937446_il2cpp_TypeInfo_var);
		int32_t L_2 = Mathf_FloorToInt_m1870542928(NULL /*static, unused*/, ((float)((float)L_1/(float)(60.0f))), /*hidden argument*/NULL);
		V_1 = L_2;
		int32_t L_3 = V_1;
		if ((((int32_t)L_3) >= ((int32_t)((int32_t)10))))
		{
			goto IL_0025;
		}
	}
	{
		G_B3_0 = _stringLiteral3452614544;
		goto IL_002a;
	}

IL_0025:
	{
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_4 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_2();
		G_B3_0 = L_4;
	}

IL_002a:
	{
		String_t* L_5 = Int32_ToString_m141394615((int32_t*)(&V_1), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_6 = String_Concat_m3937257545(NULL /*static, unused*/, G_B3_0, L_5, /*hidden argument*/NULL);
		V_2 = L_6;
		float L_7 = V_0;
		V_3 = (((int32_t)((int32_t)(fmodf(L_7, (60.0f))))));
		int32_t L_8 = V_3;
		if ((((int32_t)L_8) >= ((int32_t)((int32_t)10))))
		{
			goto IL_0058;
		}
	}
	{
		G_B6_0 = _stringLiteral3452614544;
		goto IL_005d;
	}

IL_0058:
	{
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_9 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_2();
		G_B6_0 = L_9;
	}

IL_005d:
	{
		String_t* L_10 = Int32_ToString_m141394615((int32_t*)(&V_3), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_11 = String_Concat_m3937257545(NULL /*static, unused*/, G_B6_0, L_10, /*hidden argument*/NULL);
		V_4 = L_11;
		TextMeshProUGUI_t529313277 * L_12 = __this->get_timerText_4();
		String_t* L_13 = V_2;
		String_t* L_14 = V_4;
		String_t* L_15 = String_Concat_m2163913788(NULL /*static, unused*/, _stringLiteral3179010853, L_13, _stringLiteral3452614550, L_14, /*hidden argument*/NULL);
		NullCheck(L_12);
		TMP_Text_set_text_m1135430243(L_12, L_15, /*hidden argument*/NULL);
		return;
	}
}
// System.Void PauseMenu::Toggle(System.Boolean)
extern "C"  void PauseMenu_Toggle_m2206255916 (PauseMenu_t3916167947 * __this, bool ___nextLevel0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PauseMenu_Toggle_m2206255916_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		bool L_0 = ___nextLevel0;
		if (!L_0)
		{
			goto IL_004b;
		}
	}
	{
		TextMeshProUGUI_t529313277 * L_1 = __this->get_headerText_3();
		IL2CPP_RUNTIME_CLASS_INIT(GameController_t2330501625_il2cpp_TypeInfo_var);
		GameController_t2330501625 * L_2 = ((GameController_t2330501625_StaticFields*)il2cpp_codegen_static_fields_for(GameController_t2330501625_il2cpp_TypeInfo_var))->get_Instance_9();
		NullCheck(L_2);
		int32_t L_3 = L_2->get_LevelCount_11();
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_3, (int32_t)1));
		String_t* L_4 = Int32_ToString_m141394615((int32_t*)(&V_0), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_5 = String_Concat_m3755062657(NULL /*static, unused*/, _stringLiteral1234938274, L_4, _stringLiteral3140192811, /*hidden argument*/NULL);
		NullCheck(L_1);
		TMP_Text_set_text_m1135430243(L_1, L_5, /*hidden argument*/NULL);
		GameObject_t1113636619 * L_6 = __this->get_nextButton_5();
		NullCheck(L_6);
		GameObject_SetActive_m796801857(L_6, (bool)1, /*hidden argument*/NULL);
		goto IL_0086;
	}

IL_004b:
	{
		TextMeshProUGUI_t529313277 * L_7 = __this->get_headerText_3();
		IL2CPP_RUNTIME_CLASS_INIT(GameController_t2330501625_il2cpp_TypeInfo_var);
		GameController_t2330501625 * L_8 = ((GameController_t2330501625_StaticFields*)il2cpp_codegen_static_fields_for(GameController_t2330501625_il2cpp_TypeInfo_var))->get_Instance_9();
		NullCheck(L_8);
		int32_t L_9 = L_8->get_LevelCount_11();
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_9, (int32_t)1));
		String_t* L_10 = Int32_ToString_m141394615((int32_t*)(&V_1), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_11 = String_Concat_m3937257545(NULL /*static, unused*/, _stringLiteral1234938274, L_10, /*hidden argument*/NULL);
		NullCheck(L_7);
		TMP_Text_set_text_m1135430243(L_7, L_11, /*hidden argument*/NULL);
		GameObject_t1113636619 * L_12 = __this->get_nextButton_5();
		NullCheck(L_12);
		GameObject_SetActive_m796801857(L_12, (bool)0, /*hidden argument*/NULL);
	}

IL_0086:
	{
		PanelAnimator_t918022618 * L_13 = __this->get_anim_2();
		NullCheck(L_13);
		PanelAnimator_ToggleOpen_m800681097(L_13, /*hidden argument*/NULL);
		return;
	}
}
// System.Void PauseMenu::SetButtonEnabled(System.Boolean)
extern "C"  void PauseMenu_SetButtonEnabled_m2380140973 (PauseMenu_t3916167947 * __this, bool ___v0, const RuntimeMethod* method)
{
	{
		PanelAnimator_t918022618 * L_0 = __this->get_anim_2();
		bool L_1 = ___v0;
		NullCheck(L_0);
		PanelAnimator_SetButtonEnabled_m1545979629(L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void PlayerInputController::.ctor()
extern "C"  void PlayerInputController__ctor_m3560311405 (PlayerInputController_t3825146532 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_m1579109191(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void PlayerInputController::Update()
extern "C"  void PlayerInputController_Update_m3201225867 (PlayerInputController_t3825146532 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PlayerInputController_Update_m3201225867_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Input_t1431474628_il2cpp_TypeInfo_var);
		bool L_0 = Input_GetMouseButtonDown_m2081676745(NULL /*static, unused*/, 0, /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_0011;
		}
	}
	{
		PlayerInputController_HandleMouseInput_m2991958618(__this, /*hidden argument*/NULL);
	}

IL_0011:
	{
		return;
	}
}
// System.Void PlayerInputController::HandleMouseInput()
extern "C"  void PlayerInputController_HandleMouseInput_m2991958618 (PlayerInputController_t3825146532 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PlayerInputController_HandleMouseInput_m2991958618_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RaycastHit_t1056001966  V_0;
	memset(&V_0, 0, sizeof(V_0));
	Ray_t3785851493  V_1;
	memset(&V_1, 0, sizeof(V_1));
	Hashtable_t1853889766 * V_2 = NULL;
	{
		IL2CPP_RUNTIME_CLASS_INIT(EventSystem_t1003666588_il2cpp_TypeInfo_var);
		EventSystem_t1003666588 * L_0 = EventSystem_get_current_m1416377559(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_0);
		bool L_1 = EventSystem_IsPointerOverGameObject_m1911785875(L_0, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0010;
		}
	}
	{
		return;
	}

IL_0010:
	{
		Camera_t4157153871 * L_2 = Camera_get_main_m3643453163(NULL /*static, unused*/, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Input_t1431474628_il2cpp_TypeInfo_var);
		Vector3_t3722313464  L_3 = Input_get_mousePosition_m1616496925(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_2);
		Ray_t3785851493  L_4 = Camera_ScreenPointToRay_m3764635188(L_2, L_3, /*hidden argument*/NULL);
		V_1 = L_4;
		Ray_t3785851493  L_5 = V_1;
		bool L_6 = Physics_Raycast_m447436869(NULL /*static, unused*/, L_5, (RaycastHit_t1056001966 *)(&V_0), /*hidden argument*/NULL);
		if (!L_6)
		{
			goto IL_005b;
		}
	}
	{
		Hashtable_t1853889766 * L_7 = (Hashtable_t1853889766 *)il2cpp_codegen_object_new(Hashtable_t1853889766_il2cpp_TypeInfo_var);
		Hashtable__ctor_m1815022027(L_7, /*hidden argument*/NULL);
		V_2 = L_7;
		Hashtable_t1853889766 * L_8 = V_2;
		Vector3_t3722313464  L_9 = RaycastHit_get_point_m2236647085((RaycastHit_t1056001966 *)(&V_0), /*hidden argument*/NULL);
		Vector3_t3722313464  L_10 = L_9;
		RuntimeObject * L_11 = Box(Vector3_t3722313464_il2cpp_TypeInfo_var, &L_10);
		NullCheck(L_8);
		VirtActionInvoker2< RuntimeObject *, RuntimeObject * >::Invoke(24 /* System.Void System.Collections.Hashtable::Add(System.Object,System.Object) */, L_8, _stringLiteral33228063, L_11);
		NotificationCenter_t2218695229 * L_12 = NotificationCenter_get_DefaultCenter_m4216969841(NULL /*static, unused*/, /*hidden argument*/NULL);
		Hashtable_t1853889766 * L_13 = V_2;
		NullCheck(L_12);
		NotificationCenter_PostNotification_m2114245645(L_12, __this, _stringLiteral283385980, L_13, /*hidden argument*/NULL);
	}

IL_005b:
	{
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void SoundManager::.ctor()
extern "C"  void SoundManager__ctor_m1311707663 (SoundManager_t2102329059 * __this, const RuntimeMethod* method)
{
	{
		__this->set_musicOn_10((bool)1);
		__this->set_soundOn_11((bool)1);
		MonoBehaviour__ctor_m1579109191(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void SoundManager::Start()
extern "C"  void SoundManager_Start_m2990335043 (SoundManager_t2102329059 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SoundManager_Start_m2990335043_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		((SoundManager_t2102329059_StaticFields*)il2cpp_codegen_static_fields_for(SoundManager_t2102329059_il2cpp_TypeInfo_var))->set_Instance_3(__this);
		int32_t L_0 = PlayerPrefs_GetInt_m1299643124(NULL /*static, unused*/, _stringLiteral4042210679, 0, /*hidden argument*/NULL);
		__this->set_musicOn_10((bool)((((int32_t)L_0) == ((int32_t)0))? 1 : 0));
		int32_t L_1 = PlayerPrefs_GetInt_m1299643124(NULL /*static, unused*/, _stringLiteral668216908, 0, /*hidden argument*/NULL);
		__this->set_soundOn_11((bool)((((int32_t)L_1) == ((int32_t)0))? 1 : 0));
		SoundManager_UpdateSound_m3982669470(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void SoundManager::OnDestroy()
extern "C"  void SoundManager_OnDestroy_m459141320 (SoundManager_t2102329059 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SoundManager_OnDestroy_m459141320_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	String_t* G_B2_0 = NULL;
	String_t* G_B1_0 = NULL;
	int32_t G_B3_0 = 0;
	String_t* G_B3_1 = NULL;
	String_t* G_B5_0 = NULL;
	String_t* G_B4_0 = NULL;
	int32_t G_B6_0 = 0;
	String_t* G_B6_1 = NULL;
	{
		bool L_0 = __this->get_musicOn_10();
		G_B1_0 = _stringLiteral4042210679;
		if (!L_0)
		{
			G_B2_0 = _stringLiteral4042210679;
			goto IL_0016;
		}
	}
	{
		G_B3_0 = 0;
		G_B3_1 = G_B1_0;
		goto IL_0017;
	}

IL_0016:
	{
		G_B3_0 = 1;
		G_B3_1 = G_B2_0;
	}

IL_0017:
	{
		PlayerPrefs_SetInt_m2842000469(NULL /*static, unused*/, G_B3_1, G_B3_0, /*hidden argument*/NULL);
		bool L_1 = __this->get_soundOn_11();
		G_B4_0 = _stringLiteral668216908;
		if (!L_1)
		{
			G_B5_0 = _stringLiteral668216908;
			goto IL_0032;
		}
	}
	{
		G_B6_0 = 0;
		G_B6_1 = G_B4_0;
		goto IL_0033;
	}

IL_0032:
	{
		G_B6_0 = 1;
		G_B6_1 = G_B5_0;
	}

IL_0033:
	{
		PlayerPrefs_SetInt_m2842000469(NULL /*static, unused*/, G_B6_1, G_B6_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void SoundManager::UpdateSound()
extern "C"  void SoundManager_UpdateSound_m3982669470 (SoundManager_t2102329059 * __this, const RuntimeMethod* method)
{
	SpriteU5BU5D_t2581906349* G_B2_0 = NULL;
	Image_t2670269651 * G_B2_1 = NULL;
	SpriteU5BU5D_t2581906349* G_B1_0 = NULL;
	Image_t2670269651 * G_B1_1 = NULL;
	int32_t G_B3_0 = 0;
	SpriteU5BU5D_t2581906349* G_B3_1 = NULL;
	Image_t2670269651 * G_B3_2 = NULL;
	SpriteU5BU5D_t2581906349* G_B5_0 = NULL;
	Image_t2670269651 * G_B5_1 = NULL;
	SpriteU5BU5D_t2581906349* G_B4_0 = NULL;
	Image_t2670269651 * G_B4_1 = NULL;
	int32_t G_B6_0 = 0;
	SpriteU5BU5D_t2581906349* G_B6_1 = NULL;
	Image_t2670269651 * G_B6_2 = NULL;
	{
		AudioSource_t3935305588 * L_0 = __this->get_MusicSource_4();
		bool L_1 = __this->get_musicOn_10();
		NullCheck(L_0);
		AudioSource_set_mute_m3553377094(L_0, (bool)((((int32_t)L_1) == ((int32_t)0))? 1 : 0), /*hidden argument*/NULL);
		AudioSource_t3935305588 * L_2 = __this->get_MasterSource_5();
		bool L_3 = __this->get_soundOn_11();
		NullCheck(L_2);
		AudioSource_set_mute_m3553377094(L_2, (bool)((((int32_t)L_3) == ((int32_t)0))? 1 : 0), /*hidden argument*/NULL);
		Image_t2670269651 * L_4 = __this->get_musicToggleImage_6();
		SpriteU5BU5D_t2581906349* L_5 = __this->get_musicToggleSprites_7();
		bool L_6 = __this->get_musicOn_10();
		G_B1_0 = L_5;
		G_B1_1 = L_4;
		if (!L_6)
		{
			G_B2_0 = L_5;
			G_B2_1 = L_4;
			goto IL_0045;
		}
	}
	{
		G_B3_0 = 0;
		G_B3_1 = G_B1_0;
		G_B3_2 = G_B1_1;
		goto IL_0046;
	}

IL_0045:
	{
		G_B3_0 = 1;
		G_B3_1 = G_B2_0;
		G_B3_2 = G_B2_1;
	}

IL_0046:
	{
		NullCheck(G_B3_1);
		int32_t L_7 = G_B3_0;
		Sprite_t280657092 * L_8 = (G_B3_1)->GetAt(static_cast<il2cpp_array_size_t>(L_7));
		NullCheck(G_B3_2);
		Image_set_sprite_m2369174689(G_B3_2, L_8, /*hidden argument*/NULL);
		Image_t2670269651 * L_9 = __this->get_soundToggleImage_8();
		SpriteU5BU5D_t2581906349* L_10 = __this->get_soundToggleSprites_9();
		bool L_11 = __this->get_soundOn_11();
		G_B4_0 = L_10;
		G_B4_1 = L_9;
		if (!L_11)
		{
			G_B5_0 = L_10;
			G_B5_1 = L_9;
			goto IL_0069;
		}
	}
	{
		G_B6_0 = 0;
		G_B6_1 = G_B4_0;
		G_B6_2 = G_B4_1;
		goto IL_006a;
	}

IL_0069:
	{
		G_B6_0 = 1;
		G_B6_1 = G_B5_0;
		G_B6_2 = G_B5_1;
	}

IL_006a:
	{
		NullCheck(G_B6_1);
		int32_t L_12 = G_B6_0;
		Sprite_t280657092 * L_13 = (G_B6_1)->GetAt(static_cast<il2cpp_array_size_t>(L_12));
		NullCheck(G_B6_2);
		Image_set_sprite_m2369174689(G_B6_2, L_13, /*hidden argument*/NULL);
		return;
	}
}
// System.Void SoundManager::ToggleMusic()
extern "C"  void SoundManager_ToggleMusic_m2122268486 (SoundManager_t2102329059 * __this, const RuntimeMethod* method)
{
	{
		bool L_0 = __this->get_musicOn_10();
		__this->set_musicOn_10((bool)((((int32_t)L_0) == ((int32_t)0))? 1 : 0));
		SoundManager_UpdateSound_m3982669470(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void SoundManager::ToggleSound()
extern "C"  void SoundManager_ToggleSound_m2735962835 (SoundManager_t2102329059 * __this, const RuntimeMethod* method)
{
	{
		bool L_0 = __this->get_soundOn_11();
		__this->set_soundOn_11((bool)((((int32_t)L_0) == ((int32_t)0))? 1 : 0));
		SoundManager_UpdateSound_m3982669470(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void SoundManager::Play(System.String)
extern "C"  void SoundManager_Play_m472215855 (SoundManager_t2102329059 * __this, String_t* ___name0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SoundManager_Play_m472215855_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		V_0 = 0;
		goto IL_0054;
	}

IL_0007:
	{
		SoundClipU5BU5D_t2720230398* L_0 = __this->get_sounds_2();
		int32_t L_1 = V_0;
		NullCheck(L_0);
		int32_t L_2 = L_1;
		SoundClip_t3378538503 * L_3 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		NullCheck(L_3);
		String_t* L_4 = L_3->get_name_0();
		String_t* L_5 = ___name0;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_6 = String_op_Equality_m920492651(NULL /*static, unused*/, L_4, L_5, /*hidden argument*/NULL);
		if (!L_6)
		{
			goto IL_0050;
		}
	}
	{
		AudioSource_t3935305588 * L_7 = __this->get_MasterSource_5();
		SoundClipU5BU5D_t2720230398* L_8 = __this->get_sounds_2();
		int32_t L_9 = V_0;
		NullCheck(L_8);
		int32_t L_10 = L_9;
		SoundClip_t3378538503 * L_11 = (L_8)->GetAt(static_cast<il2cpp_array_size_t>(L_10));
		NullCheck(L_11);
		AudioClipU5BU5D_t143221404* L_12 = L_11->get_clips_1();
		SoundClipU5BU5D_t2720230398* L_13 = __this->get_sounds_2();
		int32_t L_14 = V_0;
		NullCheck(L_13);
		int32_t L_15 = L_14;
		SoundClip_t3378538503 * L_16 = (L_13)->GetAt(static_cast<il2cpp_array_size_t>(L_15));
		NullCheck(L_16);
		AudioClipU5BU5D_t143221404* L_17 = L_16->get_clips_1();
		NullCheck(L_17);
		int32_t L_18 = Random_Range_m4054026115(NULL /*static, unused*/, 0, ((int32_t)il2cpp_codegen_subtract((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_17)->max_length)))), (int32_t)1)), /*hidden argument*/NULL);
		NullCheck(L_12);
		int32_t L_19 = L_18;
		AudioClip_t3680889665 * L_20 = (L_12)->GetAt(static_cast<il2cpp_array_size_t>(L_19));
		NullCheck(L_7);
		AudioSource_PlayOneShot_m1688286683(L_7, L_20, /*hidden argument*/NULL);
		return;
	}

IL_0050:
	{
		int32_t L_21 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_21, (int32_t)1));
	}

IL_0054:
	{
		int32_t L_22 = V_0;
		SoundClipU5BU5D_t2720230398* L_23 = __this->get_sounds_2();
		NullCheck(L_23);
		if ((((int32_t)L_22) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_23)->max_length)))))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void SoundManager/SoundClip::.ctor()
extern "C"  void SoundClip__ctor_m1943900111 (SoundClip_t3378538503 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SoundClip__ctor_m1943900111_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		__this->set_name_0(_stringLiteral1231357559);
		__this->set_clips_1(((AudioClipU5BU5D_t143221404*)SZArrayNew(AudioClipU5BU5D_t143221404_il2cpp_TypeInfo_var, (uint32_t)1)));
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void SpriteFader::.ctor()
extern "C"  void SpriteFader__ctor_m4161012202 (SpriteFader_t713818650 * __this, const RuntimeMethod* method)
{
	{
		__this->set_speed_6((1.0f));
		MonoBehaviour__ctor_m1579109191(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void SpriteFader::FadeIn(System.Single)
extern "C"  void SpriteFader_FadeIn_m3207520779 (SpriteFader_t713818650 * __this, float ___duration0, const RuntimeMethod* method)
{
	{
		GameObject_t1113636619 * L_0 = Component_get_gameObject_m442555142(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		GameObject_SetActive_m796801857(L_0, (bool)1, /*hidden argument*/NULL);
		float L_1 = ___duration0;
		__this->set_speed_6(((float)((float)(1.0f)/(float)L_1)));
		__this->set_fadeIn_3((bool)1);
		__this->set_fadeOut_4((bool)0);
		__this->set_t_7((0.0f));
		return;
	}
}
// System.Void SpriteFader::FadeOut(System.Single,System.Boolean)
extern "C"  void SpriteFader_FadeOut_m3444412511 (SpriteFader_t713818650 * __this, float ___duration0, bool ___disableOnFinish1, const RuntimeMethod* method)
{
	{
		GameObject_t1113636619 * L_0 = Component_get_gameObject_m442555142(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		GameObject_SetActive_m796801857(L_0, (bool)1, /*hidden argument*/NULL);
		float L_1 = ___duration0;
		__this->set_speed_6(((float)((float)(1.0f)/(float)L_1)));
		__this->set_fadeIn_3((bool)0);
		__this->set_fadeOut_4((bool)1);
		__this->set_t_7((0.0f));
		bool L_2 = ___disableOnFinish1;
		__this->set_disableOnFinish_5(L_2);
		return;
	}
}
// System.Void SpriteFader::Update()
extern "C"  void SpriteFader_Update_m1061746376 (SpriteFader_t713818650 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SpriteFader_Update_m1061746376_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	int32_t V_1 = 0;
	Color_t2555686324  V_2;
	memset(&V_2, 0, sizeof(V_2));
	{
		bool L_0 = __this->get_fadeIn_3();
		if (L_0)
		{
			goto IL_0016;
		}
	}
	{
		bool L_1 = __this->get_fadeOut_4();
		if (!L_1)
		{
			goto IL_00ef;
		}
	}

IL_0016:
	{
		float L_2 = __this->get_t_7();
		float L_3 = Time_get_deltaTime_m372706562(NULL /*static, unused*/, /*hidden argument*/NULL);
		float L_4 = __this->get_speed_6();
		__this->set_t_7(((float)il2cpp_codegen_add((float)L_2, (float)((float)il2cpp_codegen_multiply((float)L_3, (float)L_4)))));
		bool L_5 = __this->get_fadeIn_3();
		if (!L_5)
		{
			goto IL_0055;
		}
	}
	{
		float L_6 = __this->get_t_7();
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t3464937446_il2cpp_TypeInfo_var);
		float L_7 = Mathf_Lerp_m1004423579(NULL /*static, unused*/, (0.0f), (1.0f), L_6, /*hidden argument*/NULL);
		V_0 = L_7;
		goto IL_006b;
	}

IL_0055:
	{
		float L_8 = __this->get_t_7();
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t3464937446_il2cpp_TypeInfo_var);
		float L_9 = Mathf_Lerp_m1004423579(NULL /*static, unused*/, (1.0f), (0.0f), L_8, /*hidden argument*/NULL);
		V_0 = L_9;
	}

IL_006b:
	{
		V_1 = 0;
		goto IL_00ac;
	}

IL_0072:
	{
		SpriteRendererU5BU5D_t911335936* L_10 = __this->get_sprites_2();
		int32_t L_11 = V_1;
		NullCheck(L_10);
		int32_t L_12 = L_11;
		SpriteRenderer_t3235626157 * L_13 = (L_10)->GetAt(static_cast<il2cpp_array_size_t>(L_12));
		NullCheck(L_13);
		Color_t2555686324  L_14 = SpriteRenderer_get_color_m904197748(L_13, /*hidden argument*/NULL);
		V_2 = L_14;
		SpriteRendererU5BU5D_t911335936* L_15 = __this->get_sprites_2();
		int32_t L_16 = V_1;
		NullCheck(L_15);
		int32_t L_17 = L_16;
		SpriteRenderer_t3235626157 * L_18 = (L_15)->GetAt(static_cast<il2cpp_array_size_t>(L_17));
		float L_19 = (&V_2)->get_r_0();
		float L_20 = (&V_2)->get_g_1();
		float L_21 = (&V_2)->get_b_2();
		float L_22 = V_0;
		Color_t2555686324  L_23;
		memset(&L_23, 0, sizeof(L_23));
		Color__ctor_m2943235014((&L_23), L_19, L_20, L_21, L_22, /*hidden argument*/NULL);
		NullCheck(L_18);
		SpriteRenderer_set_color_m3056777566(L_18, L_23, /*hidden argument*/NULL);
		int32_t L_24 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_24, (int32_t)1));
	}

IL_00ac:
	{
		int32_t L_25 = V_1;
		SpriteRendererU5BU5D_t911335936* L_26 = __this->get_sprites_2();
		NullCheck(L_26);
		if ((((int32_t)L_25) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_26)->max_length)))))))
		{
			goto IL_0072;
		}
	}
	{
		float L_27 = __this->get_t_7();
		if ((!(((float)L_27) >= ((float)(1.0f)))))
		{
			goto IL_00ef;
		}
	}
	{
		__this->set_fadeIn_3((bool)0);
		__this->set_fadeOut_4((bool)0);
		bool L_28 = __this->get_disableOnFinish_5();
		if (!L_28)
		{
			goto IL_00ef;
		}
	}
	{
		GameObject_t1113636619 * L_29 = Component_get_gameObject_m442555142(__this, /*hidden argument*/NULL);
		NullCheck(L_29);
		GameObject_SetActive_m796801857(L_29, (bool)0, /*hidden argument*/NULL);
	}

IL_00ef:
	{
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void SpriteShadow::.ctor()
extern "C"  void SpriteShadow__ctor_m3094870613 (SpriteShadow_t829501545 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SpriteShadow__ctor_m3094870613_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Vector2_t2156229523  L_0;
		memset(&L_0, 0, sizeof(L_0));
		Vector2__ctor_m3970636864((&L_0), (-0.1f), (-0.1f), /*hidden argument*/NULL);
		__this->set_offset_3(L_0);
		__this->set_mirrorScale_4((bool)1);
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_t3722313464_il2cpp_TypeInfo_var);
		Vector3_t3722313464  L_1 = Vector3_get_zero_m1409827619(NULL /*static, unused*/, /*hidden argument*/NULL);
		__this->set_lockedRotation_6(L_1);
		MonoBehaviour__ctor_m1579109191(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void SpriteShadow::LateUpdate()
extern "C"  void SpriteShadow_LateUpdate_m1341448994 (SpriteShadow_t829501545 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SpriteShadow_LateUpdate_m1341448994_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Transform_t3600365921 * L_0 = Component_get_transform_m3162698980(__this, /*hidden argument*/NULL);
		Transform_t3600365921 * L_1 = __this->get_spriteTransform_2();
		NullCheck(L_1);
		Vector3_t3722313464  L_2 = Transform_get_position_m36019626(L_1, /*hidden argument*/NULL);
		Vector2_t2156229523 * L_3 = __this->get_address_of_offset_3();
		float L_4 = L_3->get_x_0();
		Vector2_t2156229523 * L_5 = __this->get_address_of_offset_3();
		float L_6 = L_5->get_y_1();
		Vector3_t3722313464  L_7;
		memset(&L_7, 0, sizeof(L_7));
		Vector3__ctor_m1719387948((&L_7), L_4, L_6, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_t3722313464_il2cpp_TypeInfo_var);
		Vector3_t3722313464  L_8 = Vector3_op_Addition_m779775034(NULL /*static, unused*/, L_2, L_7, /*hidden argument*/NULL);
		NullCheck(L_0);
		Transform_set_position_m3387557959(L_0, L_8, /*hidden argument*/NULL);
		bool L_9 = __this->get_mirrorScale_4();
		if (!L_9)
		{
			goto IL_0057;
		}
	}
	{
		Transform_t3600365921 * L_10 = Component_get_transform_m3162698980(__this, /*hidden argument*/NULL);
		Transform_t3600365921 * L_11 = __this->get_spriteTransform_2();
		NullCheck(L_11);
		Vector3_t3722313464  L_12 = Transform_get_localScale_m129152068(L_11, /*hidden argument*/NULL);
		NullCheck(L_10);
		Transform_set_localScale_m3053443106(L_10, L_12, /*hidden argument*/NULL);
	}

IL_0057:
	{
		bool L_13 = __this->get_lockRotation_5();
		if (!L_13)
		{
			goto IL_0078;
		}
	}
	{
		Transform_t3600365921 * L_14 = Component_get_transform_m3162698980(__this, /*hidden argument*/NULL);
		Vector3_t3722313464  L_15 = __this->get_lockedRotation_6();
		IL2CPP_RUNTIME_CLASS_INIT(Quaternion_t2301928331_il2cpp_TypeInfo_var);
		Quaternion_t2301928331  L_16 = Quaternion_Euler_m1803555822(NULL /*static, unused*/, L_15, /*hidden argument*/NULL);
		NullCheck(L_14);
		Transform_set_rotation_m3524318132(L_14, L_16, /*hidden argument*/NULL);
	}

IL_0078:
	{
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Tile::.ctor(System.Int32,System.Int32,System.Boolean)
extern "C"  void Tile__ctor_m1077387618 (Tile_t2634157908 * __this, int32_t ___X0, int32_t ___Y1, bool ___timedTile2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Tile__ctor_m1077387618_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		__this->set_neighbors_3(((TileU5BU5D_t3330163933*)SZArrayNew(TileU5BU5D_t3330163933_il2cpp_TypeInfo_var, (uint32_t)4)));
		__this->set_outlets_4(((BooleanU5BU5D_t2897418192*)SZArrayNew(BooleanU5BU5D_t2897418192_il2cpp_TypeInfo_var, (uint32_t)4)));
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___X0;
		Tile_set_X_m2221814279(__this, L_0, /*hidden argument*/NULL);
		int32_t L_1 = ___Y1;
		Tile_set_Y_m3872790262(__this, L_1, /*hidden argument*/NULL);
		bool L_2 = ___timedTile2;
		__this->set_IsTimedTile_7(L_2);
		Tile_set_tileType_m694343582(__this, 3, /*hidden argument*/NULL);
		BooleanU5BU5D_t2897418192* L_3 = TileMetrics_EmptyOutlets_m4184200475(NULL /*static, unused*/, /*hidden argument*/NULL);
		__this->set_outlets_4(L_3);
		return;
	}
}
// System.Int32 Tile::get_X()
extern "C"  int32_t Tile_get_X_m3000455159 (Tile_t2634157908 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_U3CXU3Ek__BackingField_0();
		return L_0;
	}
}
// System.Void Tile::set_X(System.Int32)
extern "C"  void Tile_set_X_m2221814279 (Tile_t2634157908 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___value0;
		__this->set_U3CXU3Ek__BackingField_0(L_0);
		return;
	}
}
// System.Int32 Tile::get_Y()
extern "C"  int32_t Tile_get_Y_m1044140023 (Tile_t2634157908 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_U3CYU3Ek__BackingField_1();
		return L_0;
	}
}
// System.Void Tile::set_Y(System.Int32)
extern "C"  void Tile_set_Y_m3872790262 (Tile_t2634157908 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___value0;
		__this->set_U3CYU3Ek__BackingField_1(L_0);
		return;
	}
}
// TileType Tile::get_tileType()
extern "C"  int32_t Tile_get_tileType_m4198153530 (Tile_t2634157908 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_U3CtileTypeU3Ek__BackingField_2();
		return L_0;
	}
}
// System.Void Tile::set_tileType(TileType)
extern "C"  void Tile_set_tileType_m694343582 (Tile_t2634157908 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___value0;
		__this->set_U3CtileTypeU3Ek__BackingField_2(L_0);
		return;
	}
}
// System.Void Tile::SetTileType(TileType)
extern "C"  void Tile_SetTileType_m424980802 (Tile_t2634157908 * __this, int32_t ___tileType0, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = ___tileType0;
		Tile_set_tileType_m694343582(__this, L_0, /*hidden argument*/NULL);
		int32_t L_1 = ___tileType0;
		if ((!(((uint32_t)L_1) == ((uint32_t)1))))
		{
			goto IL_0030;
		}
	}
	{
		__this->set_IsPowered_5((bool)1);
		V_0 = 0;
		goto IL_0029;
	}

IL_001c:
	{
		BooleanU5BU5D_t2897418192* L_2 = __this->get_outlets_4();
		int32_t L_3 = V_0;
		NullCheck(L_2);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(L_3), (bool)1);
		int32_t L_4 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_4, (int32_t)1));
	}

IL_0029:
	{
		int32_t L_5 = V_0;
		if ((((int32_t)L_5) < ((int32_t)4)))
		{
			goto IL_001c;
		}
	}

IL_0030:
	{
		return;
	}
}
// Tile[] Tile::GetConnectedNeighbors()
extern "C"  TileU5BU5D_t3330163933* Tile_GetConnectedNeighbors_m2873489518 (Tile_t2634157908 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Tile_GetConnectedNeighbors_m2873489518_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	List_1_t4106232650 * V_0 = NULL;
	int32_t V_1 = 0;
	Tile_t2634157908 * V_2 = NULL;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	{
		List_1_t4106232650 * L_0 = (List_1_t4106232650 *)il2cpp_codegen_object_new(List_1_t4106232650_il2cpp_TypeInfo_var);
		List_1__ctor_m855662214(L_0, /*hidden argument*/List_1__ctor_m855662214_RuntimeMethod_var);
		V_0 = L_0;
		V_1 = 0;
		goto IL_0068;
	}

IL_000d:
	{
		TileU5BU5D_t3330163933* L_1 = __this->get_neighbors_3();
		int32_t L_2 = V_1;
		NullCheck(L_1);
		int32_t L_3 = L_2;
		Tile_t2634157908 * L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		V_2 = L_4;
		Tile_t2634157908 * L_5 = V_2;
		if (L_5)
		{
			goto IL_0021;
		}
	}
	{
		goto IL_0064;
	}

IL_0021:
	{
		Tile_t2634157908 * L_6 = V_2;
		NullCheck(L_6);
		bool L_7 = L_6->get_IsRotating_6();
		if (!L_7)
		{
			goto IL_0031;
		}
	}
	{
		goto IL_0064;
	}

IL_0031:
	{
		int32_t L_8 = V_1;
		V_3 = L_8;
		int32_t L_9 = V_3;
		int32_t L_10 = GridDirectionExtensions_Opposite_m3925076718(NULL /*static, unused*/, L_9, /*hidden argument*/NULL);
		V_4 = L_10;
		BooleanU5BU5D_t2897418192* L_11 = __this->get_outlets_4();
		int32_t L_12 = V_1;
		NullCheck(L_11);
		int32_t L_13 = L_12;
		uint8_t L_14 = (L_11)->GetAt(static_cast<il2cpp_array_size_t>(L_13));
		if (!L_14)
		{
			goto IL_0064;
		}
	}
	{
		Tile_t2634157908 * L_15 = V_2;
		NullCheck(L_15);
		BooleanU5BU5D_t2897418192* L_16 = L_15->get_outlets_4();
		int32_t L_17 = V_4;
		NullCheck(L_16);
		int32_t L_18 = L_17;
		uint8_t L_19 = (L_16)->GetAt(static_cast<il2cpp_array_size_t>(L_18));
		if (!L_19)
		{
			goto IL_0064;
		}
	}
	{
		List_1_t4106232650 * L_20 = V_0;
		TileU5BU5D_t3330163933* L_21 = __this->get_neighbors_3();
		int32_t L_22 = V_1;
		NullCheck(L_21);
		int32_t L_23 = L_22;
		Tile_t2634157908 * L_24 = (L_21)->GetAt(static_cast<il2cpp_array_size_t>(L_23));
		NullCheck(L_20);
		List_1_Add_m1764557302(L_20, L_24, /*hidden argument*/List_1_Add_m1764557302_RuntimeMethod_var);
	}

IL_0064:
	{
		int32_t L_25 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_25, (int32_t)1));
	}

IL_0068:
	{
		int32_t L_26 = V_1;
		if ((((int32_t)L_26) < ((int32_t)4)))
		{
			goto IL_000d;
		}
	}
	{
		List_1_t4106232650 * L_27 = V_0;
		NullCheck(L_27);
		TileU5BU5D_t3330163933* L_28 = List_1_ToArray_m1416750410(L_27, /*hidden argument*/List_1_ToArray_m1416750410_RuntimeMethod_var);
		return L_28;
	}
}
// System.Void Tile::SetNeighbor(GridDirection,Tile)
extern "C"  void Tile_SetNeighbor_m2141624738 (Tile_t2634157908 * __this, int32_t ___direction0, Tile_t2634157908 * ___tile1, const RuntimeMethod* method)
{
	{
		TileU5BU5D_t3330163933* L_0 = __this->get_neighbors_3();
		int32_t L_1 = ___direction0;
		Tile_t2634157908 * L_2 = ___tile1;
		NullCheck(L_0);
		ArrayElementTypeCheck (L_0, L_2);
		(L_0)->SetAt(static_cast<il2cpp_array_size_t>(L_1), (Tile_t2634157908 *)L_2);
		return;
	}
}
// System.Void Tile::Rotate(System.Boolean)
extern "C"  void Tile_Rotate_m3768246377 (Tile_t2634157908 * __this, bool ___clockwise0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Tile_Rotate_m3768246377_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	BooleanU5BU5D_t2897418192* V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t G_B4_0 = 0;
	{
		V_0 = ((BooleanU5BU5D_t2897418192*)SZArrayNew(BooleanU5BU5D_t2897418192_il2cpp_TypeInfo_var, (uint32_t)4));
		V_1 = 0;
		goto IL_0033;
	}

IL_000e:
	{
		bool L_0 = ___clockwise0;
		if (!L_0)
		{
			goto IL_001c;
		}
	}
	{
		int32_t L_1 = V_1;
		G_B4_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_1, (int32_t)1));
		goto IL_001f;
	}

IL_001c:
	{
		int32_t L_2 = V_1;
		G_B4_0 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_2, (int32_t)1));
	}

IL_001f:
	{
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)G_B4_0, (int32_t)4));
		BooleanU5BU5D_t2897418192* L_3 = V_0;
		int32_t L_4 = V_1;
		BooleanU5BU5D_t2897418192* L_5 = __this->get_outlets_4();
		int32_t L_6 = V_2;
		NullCheck(L_5);
		int32_t L_7 = ((int32_t)((int32_t)L_6%(int32_t)4));
		uint8_t L_8 = (L_5)->GetAt(static_cast<il2cpp_array_size_t>(L_7));
		NullCheck(L_3);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(L_4), (bool)L_8);
		int32_t L_9 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_9, (int32_t)1));
	}

IL_0033:
	{
		int32_t L_10 = V_1;
		if ((((int32_t)L_10) < ((int32_t)4)))
		{
			goto IL_000e;
		}
	}
	{
		BooleanU5BU5D_t2897418192* L_11 = V_0;
		__this->set_outlets_4(L_11);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void TileColorController::.ctor()
extern "C"  void TileColorController__ctor_m1960643656 (TileColorController_t1573688495 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_m1579109191(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void TileColorController::Initialize(TileColorData,Tile)
extern "C"  void TileColorController_Initialize_m475512654 (TileColorController_t1573688495 * __this, TileColorData_t4183236388 * ___tileColors0, Tile_t2634157908 * ___tile1, const RuntimeMethod* method)
{
	{
		Tile_t2634157908 * L_0 = ___tile1;
		__this->set_tile_9(L_0);
		TileColorData_t4183236388 * L_1 = ___tileColors0;
		NullCheck(L_1);
		Color_t2555686324  L_2 = L_1->get_litWireColor_4();
		__this->set_defaultLitColor_5(L_2);
		TileColorData_t4183236388 * L_3 = ___tileColors0;
		NullCheck(L_3);
		Color_t2555686324  L_4 = L_3->get_unlitWireColor_2();
		__this->set_defaultUnlitColor_6(L_4);
		TileColorData_t4183236388 * L_5 = ___tileColors0;
		NullCheck(L_5);
		Color_t2555686324  L_6 = L_5->get_litHighlightColor_5();
		__this->set_defaultLitHighlightColor_7(L_6);
		TileColorData_t4183236388 * L_7 = ___tileColors0;
		NullCheck(L_7);
		Color_t2555686324  L_8 = L_7->get_shadowColor_3();
		__this->set_defaultUnlitHighlightColor_8(L_8);
		return;
	}
}
// System.Void TileColorController::UpdateVisuals(System.Boolean)
extern "C"  void TileColorController_UpdateVisuals_m3275429678 (TileColorController_t1573688495 * __this, bool ___powered0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TileColorController_UpdateVisuals_m3275429678_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	SpriteColor_t3051291064 * V_0 = NULL;
	SpriteColorU5BU5D_t2190272617* V_1 = NULL;
	int32_t V_2 = 0;
	SpriteColor_t3051291064 * V_3 = NULL;
	SpriteColorU5BU5D_t2190272617* V_4 = NULL;
	int32_t V_5 = 0;
	LerpSprite_t1901857106 * G_B4_0 = NULL;
	LerpSprite_t1901857106 * G_B3_0 = NULL;
	Color_t2555686324  G_B5_0;
	memset(&G_B5_0, 0, sizeof(G_B5_0));
	LerpSprite_t1901857106 * G_B5_1 = NULL;
	LerpSprite_t1901857106 * G_B8_0 = NULL;
	LerpSprite_t1901857106 * G_B7_0 = NULL;
	Color_t2555686324  G_B9_0;
	memset(&G_B9_0, 0, sizeof(G_B9_0));
	LerpSprite_t1901857106 * G_B9_1 = NULL;
	LerpSprite_t1901857106 * G_B16_0 = NULL;
	LerpSprite_t1901857106 * G_B15_0 = NULL;
	Color_t2555686324  G_B17_0;
	memset(&G_B17_0, 0, sizeof(G_B17_0));
	LerpSprite_t1901857106 * G_B17_1 = NULL;
	LerpSprite_t1901857106 * G_B20_0 = NULL;
	LerpSprite_t1901857106 * G_B19_0 = NULL;
	Color_t2555686324  G_B21_0;
	memset(&G_B21_0, 0, sizeof(G_B21_0));
	LerpSprite_t1901857106 * G_B21_1 = NULL;
	{
		SpriteColorU5BU5D_t2190272617* L_0 = __this->get_mainSprites_2();
		V_1 = L_0;
		V_2 = 0;
		goto IL_006a;
	}

IL_000e:
	{
		SpriteColorU5BU5D_t2190272617* L_1 = V_1;
		int32_t L_2 = V_2;
		NullCheck(L_1);
		int32_t L_3 = L_2;
		SpriteColor_t3051291064 * L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		V_0 = L_4;
		SpriteColor_t3051291064 * L_5 = V_0;
		NullCheck(L_5);
		bool L_6 = L_5->get_useDefaultColors_2();
		if (!L_6)
		{
			goto IL_0044;
		}
	}
	{
		SpriteColor_t3051291064 * L_7 = V_0;
		NullCheck(L_7);
		LerpSprite_t1901857106 * L_8 = L_7->get_lerpSprite_1();
		bool L_9 = ___powered0;
		G_B3_0 = L_8;
		if (!L_9)
		{
			G_B4_0 = L_8;
			goto IL_0034;
		}
	}
	{
		Color_t2555686324  L_10 = __this->get_defaultLitColor_5();
		G_B5_0 = L_10;
		G_B5_1 = G_B3_0;
		goto IL_003a;
	}

IL_0034:
	{
		Color_t2555686324  L_11 = __this->get_defaultUnlitColor_6();
		G_B5_0 = L_11;
		G_B5_1 = G_B4_0;
	}

IL_003a:
	{
		NullCheck(G_B5_1);
		LerpSprite_SetColor_m2158911657(G_B5_1, G_B5_0, /*hidden argument*/NULL);
		goto IL_0066;
	}

IL_0044:
	{
		SpriteColor_t3051291064 * L_12 = V_0;
		NullCheck(L_12);
		LerpSprite_t1901857106 * L_13 = L_12->get_lerpSprite_1();
		bool L_14 = ___powered0;
		G_B7_0 = L_13;
		if (!L_14)
		{
			G_B8_0 = L_13;
			goto IL_005b;
		}
	}
	{
		SpriteColor_t3051291064 * L_15 = V_0;
		NullCheck(L_15);
		Color_t2555686324  L_16 = L_15->get_litColor_3();
		G_B9_0 = L_16;
		G_B9_1 = G_B7_0;
		goto IL_0061;
	}

IL_005b:
	{
		SpriteColor_t3051291064 * L_17 = V_0;
		NullCheck(L_17);
		Color_t2555686324  L_18 = L_17->get_unlitColor_4();
		G_B9_0 = L_18;
		G_B9_1 = G_B8_0;
	}

IL_0061:
	{
		NullCheck(G_B9_1);
		LerpSprite_SetColor_m2158911657(G_B9_1, G_B9_0, /*hidden argument*/NULL);
	}

IL_0066:
	{
		int32_t L_19 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_19, (int32_t)1));
	}

IL_006a:
	{
		int32_t L_20 = V_2;
		SpriteColorU5BU5D_t2190272617* L_21 = V_1;
		NullCheck(L_21);
		if ((((int32_t)L_20) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_21)->max_length)))))))
		{
			goto IL_000e;
		}
	}
	{
		SpriteColorU5BU5D_t2190272617* L_22 = __this->get_shadowSprites_3();
		V_4 = L_22;
		V_5 = 0;
		goto IL_00e3;
	}

IL_0083:
	{
		SpriteColorU5BU5D_t2190272617* L_23 = V_4;
		int32_t L_24 = V_5;
		NullCheck(L_23);
		int32_t L_25 = L_24;
		SpriteColor_t3051291064 * L_26 = (L_23)->GetAt(static_cast<il2cpp_array_size_t>(L_25));
		V_3 = L_26;
		SpriteColor_t3051291064 * L_27 = V_3;
		NullCheck(L_27);
		bool L_28 = L_27->get_useDefaultColors_2();
		if (!L_28)
		{
			goto IL_00bb;
		}
	}
	{
		SpriteColor_t3051291064 * L_29 = V_3;
		NullCheck(L_29);
		LerpSprite_t1901857106 * L_30 = L_29->get_lerpSprite_1();
		bool L_31 = ___powered0;
		G_B15_0 = L_30;
		if (!L_31)
		{
			G_B16_0 = L_30;
			goto IL_00ab;
		}
	}
	{
		Color_t2555686324  L_32 = __this->get_defaultLitHighlightColor_7();
		G_B17_0 = L_32;
		G_B17_1 = G_B15_0;
		goto IL_00b1;
	}

IL_00ab:
	{
		Color_t2555686324  L_33 = __this->get_defaultUnlitHighlightColor_8();
		G_B17_0 = L_33;
		G_B17_1 = G_B16_0;
	}

IL_00b1:
	{
		NullCheck(G_B17_1);
		LerpSprite_SetColor_m2158911657(G_B17_1, G_B17_0, /*hidden argument*/NULL);
		goto IL_00dd;
	}

IL_00bb:
	{
		SpriteColor_t3051291064 * L_34 = V_3;
		NullCheck(L_34);
		LerpSprite_t1901857106 * L_35 = L_34->get_lerpSprite_1();
		bool L_36 = ___powered0;
		G_B19_0 = L_35;
		if (!L_36)
		{
			G_B20_0 = L_35;
			goto IL_00d2;
		}
	}
	{
		SpriteColor_t3051291064 * L_37 = V_3;
		NullCheck(L_37);
		Color_t2555686324  L_38 = L_37->get_litColor_3();
		G_B21_0 = L_38;
		G_B21_1 = G_B19_0;
		goto IL_00d8;
	}

IL_00d2:
	{
		SpriteColor_t3051291064 * L_39 = V_3;
		NullCheck(L_39);
		Color_t2555686324  L_40 = L_39->get_unlitColor_4();
		G_B21_0 = L_40;
		G_B21_1 = G_B20_0;
	}

IL_00d8:
	{
		NullCheck(G_B21_1);
		LerpSprite_SetColor_m2158911657(G_B21_1, G_B21_0, /*hidden argument*/NULL);
	}

IL_00dd:
	{
		int32_t L_41 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add((int32_t)L_41, (int32_t)1));
	}

IL_00e3:
	{
		int32_t L_42 = V_5;
		SpriteColorU5BU5D_t2190272617* L_43 = V_4;
		NullCheck(L_43);
		if ((((int32_t)L_42) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_43)->max_length)))))))
		{
			goto IL_0083;
		}
	}
	{
		Tile_t2634157908 * L_44 = __this->get_tile_9();
		NullCheck(L_44);
		int32_t L_45 = Tile_get_tileType_m4198153530(L_44, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_45) == ((uint32_t)2))))
		{
			goto IL_011f;
		}
	}
	{
		bool L_46 = ___powered0;
		if (!L_46)
		{
			goto IL_011f;
		}
	}
	{
		bool L_47 = __this->get_isPowered_10();
		if (L_47)
		{
			goto IL_011f;
		}
	}
	{
		SoundManager_t2102329059 * L_48 = ((SoundManager_t2102329059_StaticFields*)il2cpp_codegen_static_fields_for(SoundManager_t2102329059_il2cpp_TypeInfo_var))->get_Instance_3();
		NullCheck(L_48);
		SoundManager_Play_m472215855(L_48, _stringLiteral852187533, /*hidden argument*/NULL);
	}

IL_011f:
	{
		bool L_49 = ___powered0;
		__this->set_isPowered_10(L_49);
		return;
	}
}
// System.Void TileColorController::Update()
extern "C"  void TileColorController_Update_m773543070 (TileColorController_t1573688495 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TileColorController_Update_m773543070_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Tile_t2634157908 * L_0 = __this->get_tile_9();
		NullCheck(L_0);
		int32_t L_1 = Tile_get_tileType_m4198153530(L_0, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_1) == ((uint32_t)2))))
		{
			goto IL_0036;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(GameController_t2330501625_il2cpp_TypeInfo_var);
		bool L_2 = ((GameController_t2330501625_StaticFields*)il2cpp_codegen_static_fields_for(GameController_t2330501625_il2cpp_TypeInfo_var))->get_GameOver_13();
		if (!L_2)
		{
			goto IL_0036;
		}
	}
	{
		ParticleSystem_t1800779281 * L_3 = __this->get_gameoverSparks_4();
		NullCheck(L_3);
		bool L_4 = ParticleSystem_get_isPlaying_m1820717466(L_3, /*hidden argument*/NULL);
		if (L_4)
		{
			goto IL_0036;
		}
	}
	{
		ParticleSystem_t1800779281 * L_5 = __this->get_gameoverSparks_4();
		NullCheck(L_5);
		ParticleSystem_Play_m882713458(L_5, /*hidden argument*/NULL);
	}

IL_0036:
	{
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void TileColorController/SpriteColor::.ctor()
extern "C"  void SpriteColor__ctor_m275057498 (SpriteColor_t3051291064 * __this, const RuntimeMethod* method)
{
	{
		__this->set_useDefaultColors_2((bool)1);
		Color_t2555686324  L_0 = Color_get_black_m719512684(NULL /*static, unused*/, /*hidden argument*/NULL);
		__this->set_litColor_3(L_0);
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void TileColorData::.ctor()
extern "C"  void TileColorData__ctor_m3003929204 (TileColorData_t4183236388 * __this, const RuntimeMethod* method)
{
	{
		Color_t2555686324  L_0 = Color_get_green_m490390750(NULL /*static, unused*/, /*hidden argument*/NULL);
		__this->set_unlitWireColor_2(L_0);
		Color_t2555686324  L_1 = Color_get_black_m719512684(NULL /*static, unused*/, /*hidden argument*/NULL);
		__this->set_shadowColor_3(L_1);
		Color_t2555686324  L_2 = Color_get_white_m332174077(NULL /*static, unused*/, /*hidden argument*/NULL);
		__this->set_litWireColor_4(L_2);
		Color_t2555686324  L_3 = Color_get_black_m719512684(NULL /*static, unused*/, /*hidden argument*/NULL);
		__this->set_litHighlightColor_5(L_3);
		ScriptableObject__ctor_m1310743131(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void TileController::.ctor()
extern "C"  void TileController__ctor_m2109448571 (TileController_t1073589649 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TileController__ctor_m2109448571_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Dictionary_2_t3407319387 * L_0 = (Dictionary_2_t3407319387 *)il2cpp_codegen_object_new(Dictionary_2_t3407319387_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m1115599464(L_0, /*hidden argument*/Dictionary_2__ctor_m1115599464_RuntimeMethod_var);
		__this->set_tileGameObjects_4(L_0);
		Queue_1_t2480417402 * L_1 = (Queue_1_t2480417402 *)il2cpp_codegen_object_new(Queue_1_t2480417402_il2cpp_TypeInfo_var);
		Queue_1__ctor_m1328433775(L_1, /*hidden argument*/Queue_1__ctor_m1328433775_RuntimeMethod_var);
		__this->set_tileTargetRotations_5(L_1);
		__this->set_tileRotateSpeed_7((360.0f));
		MonoBehaviour__ctor_m1579109191(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void TileController::CreateTiles(TileGrid,UnityEngine.Transform)
extern "C"  void TileController_CreateTiles_m1433907476 (TileController_t1073589649 * __this, TileGrid_t3345275584 * ___tileGrid0, Transform_t3600365921 * ___environmentRoot1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TileController_CreateTiles_m1433907476_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	Tile_t2634157908 * V_4 = NULL;
	Transform_t3600365921 * V_5 = NULL;
	Transform_t3600365921 * V_6 = NULL;
	TileColorController_t1573688495 * V_7 = NULL;
	{
		TileController_ClearTileGameObjects_m540467540(__this, /*hidden argument*/NULL);
		TileGrid_t3345275584 * L_0 = ___tileGrid0;
		NullCheck(L_0);
		int32_t L_1 = TileGrid_get_Width_m2046657162(L_0, /*hidden argument*/NULL);
		V_0 = ((float)((float)(((float)((float)((int32_t)il2cpp_codegen_subtract((int32_t)L_1, (int32_t)1)))))/(float)(2.0f)));
		TileGrid_t3345275584 * L_2 = ___tileGrid0;
		NullCheck(L_2);
		int32_t L_3 = TileGrid_get_Height_m1447994140(L_2, /*hidden argument*/NULL);
		V_1 = ((float)((float)(((float)((float)((int32_t)il2cpp_codegen_subtract((int32_t)L_3, (int32_t)1)))))/(float)(2.0f)));
		V_2 = 0;
		goto IL_00f1;
	}

IL_002d:
	{
		V_3 = 0;
		goto IL_00e1;
	}

IL_0034:
	{
		TileGrid_t3345275584 * L_4 = ___tileGrid0;
		NullCheck(L_4);
		TileU5B0___U2C0___U5D_t3330163934* L_5 = TileGrid_get_Tiles_m2970482344(L_4, /*hidden argument*/NULL);
		int32_t L_6 = V_2;
		int32_t L_7 = V_3;
		NullCheck(L_5);
		Tile_t2634157908 * L_8 = (L_5)->GetAt(L_6, L_7);
		V_4 = L_8;
		TilePrefabManager_t293433569 * L_9 = __this->get_prefabManager_2();
		Tile_t2634157908 * L_10 = V_4;
		NullCheck(L_9);
		Transform_t3600365921 * L_11 = TilePrefabManager_GetTilePrefab_m1797596600(L_9, L_10, /*hidden argument*/NULL);
		V_5 = L_11;
		Transform_t3600365921 * L_12 = V_5;
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_13 = Object_op_Equality_m1810815630(NULL /*static, unused*/, L_12, (Object_t631007953 *)NULL, /*hidden argument*/NULL);
		if (!L_13)
		{
			goto IL_0064;
		}
	}
	{
		goto IL_00dd;
	}

IL_0064:
	{
		Transform_t3600365921 * L_14 = V_5;
		Transform_t3600365921 * L_15 = ___environmentRoot1;
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		Transform_t3600365921 * L_16 = Object_Instantiate_TisTransform_t3600365921_m3225670752(NULL /*static, unused*/, L_14, L_15, /*hidden argument*/Object_Instantiate_TisTransform_t3600365921_m3225670752_RuntimeMethod_var);
		V_6 = L_16;
		Transform_t3600365921 * L_17 = V_6;
		int32_t L_18 = V_2;
		float L_19 = V_0;
		int32_t L_20 = V_3;
		float L_21 = V_1;
		Vector3_t3722313464  L_22;
		memset(&L_22, 0, sizeof(L_22));
		Vector3__ctor_m3353183577((&L_22), ((float)il2cpp_codegen_subtract((float)(((float)((float)L_18))), (float)L_19)), ((float)il2cpp_codegen_subtract((float)(((float)((float)L_20))), (float)L_21)), (0.0f), /*hidden argument*/NULL);
		NullCheck(L_17);
		Transform_set_position_m3387557959(L_17, L_22, /*hidden argument*/NULL);
		Transform_t3600365921 * L_23 = V_6;
		Tile_t2634157908 * L_24 = V_4;
		NullCheck(L_24);
		BooleanU5BU5D_t2897418192* L_25 = L_24->get_outlets_4();
		float L_26 = TileMetrics_GetWireRotation_m1792594508(NULL /*static, unused*/, L_25, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Quaternion_t2301928331_il2cpp_TypeInfo_var);
		Quaternion_t2301928331  L_27 = Quaternion_Euler_m3049309462(NULL /*static, unused*/, (0.0f), (0.0f), L_26, /*hidden argument*/NULL);
		NullCheck(L_23);
		Transform_set_rotation_m3524318132(L_23, L_27, /*hidden argument*/NULL);
		Transform_t3600365921 * L_28 = V_6;
		NullCheck(L_28);
		TileColorController_t1573688495 * L_29 = Component_GetComponentInChildren_TisTileColorController_t1573688495_m4036526529(L_28, /*hidden argument*/Component_GetComponentInChildren_TisTileColorController_t1573688495_m4036526529_RuntimeMethod_var);
		V_7 = L_29;
		TileColorController_t1573688495 * L_30 = V_7;
		bool L_31 = Object_op_Inequality_m4071470834(NULL /*static, unused*/, L_30, (Object_t631007953 *)NULL, /*hidden argument*/NULL);
		if (!L_31)
		{
			goto IL_00dd;
		}
	}
	{
		TileColorController_t1573688495 * L_32 = V_7;
		TileColorData_t4183236388 * L_33 = __this->get_tileColors_3();
		Tile_t2634157908 * L_34 = V_4;
		NullCheck(L_32);
		TileColorController_Initialize_m475512654(L_32, L_33, L_34, /*hidden argument*/NULL);
		Dictionary_2_t3407319387 * L_35 = __this->get_tileGameObjects_4();
		Tile_t2634157908 * L_36 = V_4;
		TileColorController_t1573688495 * L_37 = V_7;
		NullCheck(L_35);
		Dictionary_2_Add_m151662308(L_35, L_36, L_37, /*hidden argument*/Dictionary_2_Add_m151662308_RuntimeMethod_var);
	}

IL_00dd:
	{
		int32_t L_38 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add((int32_t)L_38, (int32_t)1));
	}

IL_00e1:
	{
		int32_t L_39 = V_3;
		TileGrid_t3345275584 * L_40 = ___tileGrid0;
		NullCheck(L_40);
		int32_t L_41 = TileGrid_get_Height_m1447994140(L_40, /*hidden argument*/NULL);
		if ((((int32_t)L_39) < ((int32_t)L_41)))
		{
			goto IL_0034;
		}
	}
	{
		int32_t L_42 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_42, (int32_t)1));
	}

IL_00f1:
	{
		int32_t L_43 = V_2;
		TileGrid_t3345275584 * L_44 = ___tileGrid0;
		NullCheck(L_44);
		int32_t L_45 = TileGrid_get_Width_m2046657162(L_44, /*hidden argument*/NULL);
		if ((((int32_t)L_43) < ((int32_t)L_45)))
		{
			goto IL_002d;
		}
	}
	{
		return;
	}
}
// System.Void TileController::ClearTileGameObjects()
extern "C"  void TileController_ClearTileGameObjects_m540467540 (TileController_t1073589649 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TileController_ClearTileGameObjects_m540467540_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	KeyValuePair_2_t1510024258  V_0;
	memset(&V_0, 0, sizeof(V_0));
	Enumerator_t1066534866  V_1;
	memset(&V_1, 0, sizeof(V_1));
	GameObject_t1113636619 * V_2 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		Dictionary_2_t3407319387 * L_0 = __this->get_tileGameObjects_4();
		if (!L_0)
		{
			goto IL_0066;
		}
	}
	{
		Dictionary_2_t3407319387 * L_1 = __this->get_tileGameObjects_4();
		NullCheck(L_1);
		Enumerator_t1066534866  L_2 = Dictionary_2_GetEnumerator_m3357386693(L_1, /*hidden argument*/Dictionary_2_GetEnumerator_m3357386693_RuntimeMethod_var);
		V_1 = L_2;
	}

IL_0017:
	try
	{ // begin try (depth: 1)
		{
			goto IL_003c;
		}

IL_001c:
		{
			KeyValuePair_2_t1510024258  L_3 = Enumerator_get_Current_m3767502163((Enumerator_t1066534866 *)(&V_1), /*hidden argument*/Enumerator_get_Current_m3767502163_RuntimeMethod_var);
			V_0 = L_3;
			TileColorController_t1573688495 * L_4 = KeyValuePair_2_get_Value_m2665827663((KeyValuePair_2_t1510024258 *)(&V_0), /*hidden argument*/KeyValuePair_2_get_Value_m2665827663_RuntimeMethod_var);
			NullCheck(L_4);
			Transform_t3600365921 * L_5 = Component_get_transform_m3162698980(L_4, /*hidden argument*/NULL);
			NullCheck(L_5);
			GameObject_t1113636619 * L_6 = Component_get_gameObject_m442555142(L_5, /*hidden argument*/NULL);
			V_2 = L_6;
			GameObject_t1113636619 * L_7 = V_2;
			IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
			Object_Destroy_m565254235(NULL /*static, unused*/, L_7, /*hidden argument*/NULL);
		}

IL_003c:
		{
			bool L_8 = Enumerator_MoveNext_m3362643134((Enumerator_t1066534866 *)(&V_1), /*hidden argument*/Enumerator_MoveNext_m3362643134_RuntimeMethod_var);
			if (L_8)
			{
				goto IL_001c;
			}
		}

IL_0048:
		{
			IL2CPP_LEAVE(0x5B, FINALLY_004d);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_004d;
	}

FINALLY_004d:
	{ // begin finally (depth: 1)
		Enumerator_Dispose_m2707954585((Enumerator_t1066534866 *)(&V_1), /*hidden argument*/Enumerator_Dispose_m2707954585_RuntimeMethod_var);
		IL2CPP_END_FINALLY(77)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(77)
	{
		IL2CPP_JUMP_TBL(0x5B, IL_005b)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_005b:
	{
		Dictionary_2_t3407319387 * L_9 = __this->get_tileGameObjects_4();
		NullCheck(L_9);
		Dictionary_2_Clear_m701984577(L_9, /*hidden argument*/Dictionary_2_Clear_m701984577_RuntimeMethod_var);
	}

IL_0066:
	{
		return;
	}
}
// System.Void TileController::UpdateTileVisuals(TileGrid)
extern "C"  void TileController_UpdateTileVisuals_m3550407352 (TileController_t1073589649 * __this, TileGrid_t3345275584 * ___grid0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TileController_UpdateTileVisuals_m3550407352_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	Tile_t2634157908 * V_2 = NULL;
	{
		V_0 = 0;
		goto IL_006e;
	}

IL_0007:
	{
		V_1 = 0;
		goto IL_005e;
	}

IL_000e:
	{
		TileGrid_t3345275584 * L_0 = ___grid0;
		NullCheck(L_0);
		TileU5B0___U2C0___U5D_t3330163934* L_1 = TileGrid_get_Tiles_m2970482344(L_0, /*hidden argument*/NULL);
		int32_t L_2 = V_0;
		int32_t L_3 = V_1;
		NullCheck(L_1);
		Tile_t2634157908 * L_4 = (L_1)->GetAt(L_2, L_3);
		V_2 = L_4;
		Dictionary_2_t3407319387 * L_5 = __this->get_tileGameObjects_4();
		Tile_t2634157908 * L_6 = V_2;
		NullCheck(L_5);
		bool L_7 = Dictionary_2_ContainsKey_m2187175349(L_5, L_6, /*hidden argument*/Dictionary_2_ContainsKey_m2187175349_RuntimeMethod_var);
		if (L_7)
		{
			goto IL_0032;
		}
	}
	{
		goto IL_005a;
	}

IL_0032:
	{
		Dictionary_2_t3407319387 * L_8 = __this->get_tileGameObjects_4();
		Tile_t2634157908 * L_9 = V_2;
		NullCheck(L_8);
		bool L_10 = Dictionary_2_ContainsKey_m2187175349(L_8, L_9, /*hidden argument*/Dictionary_2_ContainsKey_m2187175349_RuntimeMethod_var);
		if (!L_10)
		{
			goto IL_005a;
		}
	}
	{
		Dictionary_2_t3407319387 * L_11 = __this->get_tileGameObjects_4();
		Tile_t2634157908 * L_12 = V_2;
		NullCheck(L_11);
		TileColorController_t1573688495 * L_13 = Dictionary_2_get_Item_m1604855262(L_11, L_12, /*hidden argument*/Dictionary_2_get_Item_m1604855262_RuntimeMethod_var);
		Tile_t2634157908 * L_14 = V_2;
		NullCheck(L_14);
		bool L_15 = L_14->get_IsPowered_5();
		NullCheck(L_13);
		TileColorController_UpdateVisuals_m3275429678(L_13, L_15, /*hidden argument*/NULL);
	}

IL_005a:
	{
		int32_t L_16 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_16, (int32_t)1));
	}

IL_005e:
	{
		int32_t L_17 = V_1;
		TileGrid_t3345275584 * L_18 = ___grid0;
		NullCheck(L_18);
		int32_t L_19 = TileGrid_get_Height_m1447994140(L_18, /*hidden argument*/NULL);
		if ((((int32_t)L_17) < ((int32_t)L_19)))
		{
			goto IL_000e;
		}
	}
	{
		int32_t L_20 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_20, (int32_t)1));
	}

IL_006e:
	{
		int32_t L_21 = V_0;
		TileGrid_t3345275584 * L_22 = ___grid0;
		NullCheck(L_22);
		int32_t L_23 = TileGrid_get_Width_m2046657162(L_22, /*hidden argument*/NULL);
		if ((((int32_t)L_21) < ((int32_t)L_23)))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void TileController::RotateTile(Tile)
extern "C"  void TileController_RotateTile_m2881787778 (TileController_t1073589649 * __this, Tile_t2634157908 * ___t0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TileController_RotateTile_m2881787778_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Dictionary_2_t3407319387 * L_0 = __this->get_tileGameObjects_4();
		Tile_t2634157908 * L_1 = ___t0;
		NullCheck(L_0);
		bool L_2 = Dictionary_2_ContainsKey_m2187175349(L_0, L_1, /*hidden argument*/Dictionary_2_ContainsKey_m2187175349_RuntimeMethod_var);
		if (!L_2)
		{
			goto IL_0031;
		}
	}
	{
		Queue_1_t2480417402 * L_3 = __this->get_tileTargetRotations_5();
		Tile_t2634157908 * L_4 = ___t0;
		NullCheck(L_3);
		Queue_1_Enqueue_m2517726190(L_3, L_4, /*hidden argument*/Queue_1_Enqueue_m2517726190_RuntimeMethod_var);
		SoundManager_t2102329059 * L_5 = ((SoundManager_t2102329059_StaticFields*)il2cpp_codegen_static_fields_for(SoundManager_t2102329059_il2cpp_TypeInfo_var))->get_Instance_3();
		NullCheck(L_5);
		SoundManager_Play_m472215855(L_5, _stringLiteral3655881937, /*hidden argument*/NULL);
		goto IL_003b;
	}

IL_0031:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t3317548046_il2cpp_TypeInfo_var);
		Debug_LogError_m2850623458(NULL /*static, unused*/, _stringLiteral1355574944, /*hidden argument*/NULL);
	}

IL_003b:
	{
		return;
	}
}
// System.Void TileController::UpdateTiles(TileGrid)
extern "C"  void TileController_UpdateTiles_m1627070111 (TileController_t1073589649 * __this, TileGrid_t3345275584 * ___tileGrid0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TileController_UpdateTiles_m1627070111_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Quaternion_t2301928331  V_0;
	memset(&V_0, 0, sizeof(V_0));
	Transform_t3600365921 * V_1 = NULL;
	{
		Tile_t2634157908 * L_0 = __this->get_currentTileRotating_6();
		if (L_0)
		{
			goto IL_0052;
		}
	}
	{
		Queue_1_t2480417402 * L_1 = __this->get_tileTargetRotations_5();
		NullCheck(L_1);
		int32_t L_2 = Queue_1_get_Count_m3354354946(L_1, /*hidden argument*/Queue_1_get_Count_m3354354946_RuntimeMethod_var);
		if ((((int32_t)L_2) <= ((int32_t)0)))
		{
			goto IL_0052;
		}
	}
	{
		Queue_1_t2480417402 * L_3 = __this->get_tileTargetRotations_5();
		NullCheck(L_3);
		Tile_t2634157908 * L_4 = Queue_1_Dequeue_m4163830294(L_3, /*hidden argument*/Queue_1_Dequeue_m4163830294_RuntimeMethod_var);
		__this->set_currentTileRotating_6(L_4);
		Tile_t2634157908 * L_5 = __this->get_currentTileRotating_6();
		NullCheck(L_5);
		Tile_Rotate_m3768246377(L_5, (bool)1, /*hidden argument*/NULL);
		Tile_t2634157908 * L_6 = __this->get_currentTileRotating_6();
		NullCheck(L_6);
		L_6->set_IsRotating_6((bool)1);
		TileGrid_t3345275584 * L_7 = ___tileGrid0;
		NullCheck(L_7);
		TileGrid_UpdateTilePower_m3239097173(L_7, /*hidden argument*/NULL);
		TileGrid_t3345275584 * L_8 = ___tileGrid0;
		TileController_UpdateTileVisuals_m3550407352(__this, L_8, /*hidden argument*/NULL);
	}

IL_0052:
	{
		Tile_t2634157908 * L_9 = __this->get_currentTileRotating_6();
		if (!L_9)
		{
			goto IL_0134;
		}
	}
	{
		Dictionary_2_t3407319387 * L_10 = __this->get_tileGameObjects_4();
		Tile_t2634157908 * L_11 = __this->get_currentTileRotating_6();
		NullCheck(L_10);
		bool L_12 = Dictionary_2_ContainsKey_m2187175349(L_10, L_11, /*hidden argument*/Dictionary_2_ContainsKey_m2187175349_RuntimeMethod_var);
		if (L_12)
		{
			goto IL_007b;
		}
	}
	{
		__this->set_currentTileRotating_6((Tile_t2634157908 *)NULL);
		return;
	}

IL_007b:
	{
		Tile_t2634157908 * L_13 = __this->get_currentTileRotating_6();
		NullCheck(L_13);
		BooleanU5BU5D_t2897418192* L_14 = L_13->get_outlets_4();
		float L_15 = TileMetrics_GetWireRotation_m1792594508(NULL /*static, unused*/, L_14, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Quaternion_t2301928331_il2cpp_TypeInfo_var);
		Quaternion_t2301928331  L_16 = Quaternion_Euler_m3049309462(NULL /*static, unused*/, (0.0f), (0.0f), L_15, /*hidden argument*/NULL);
		V_0 = L_16;
		Dictionary_2_t3407319387 * L_17 = __this->get_tileGameObjects_4();
		Tile_t2634157908 * L_18 = __this->get_currentTileRotating_6();
		NullCheck(L_17);
		TileColorController_t1573688495 * L_19 = Dictionary_2_get_Item_m1604855262(L_17, L_18, /*hidden argument*/Dictionary_2_get_Item_m1604855262_RuntimeMethod_var);
		NullCheck(L_19);
		Transform_t3600365921 * L_20 = Component_get_transform_m3162698980(L_19, /*hidden argument*/NULL);
		V_1 = L_20;
		Transform_t3600365921 * L_21 = V_1;
		NullCheck(L_21);
		Quaternion_t2301928331  L_22 = Transform_get_rotation_m3502953881(L_21, /*hidden argument*/NULL);
		Quaternion_t2301928331  L_23 = V_0;
		float L_24 = Quaternion_Angle_m1586774072(NULL /*static, unused*/, L_22, L_23, /*hidden argument*/NULL);
		if ((!(((float)L_24) > ((float)(0.5f)))))
		{
			goto IL_00eb;
		}
	}
	{
		Transform_t3600365921 * L_25 = V_1;
		Transform_t3600365921 * L_26 = V_1;
		NullCheck(L_26);
		Quaternion_t2301928331  L_27 = Transform_get_rotation_m3502953881(L_26, /*hidden argument*/NULL);
		Quaternion_t2301928331  L_28 = V_0;
		float L_29 = __this->get_tileRotateSpeed_7();
		float L_30 = Time_get_deltaTime_m372706562(NULL /*static, unused*/, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Quaternion_t2301928331_il2cpp_TypeInfo_var);
		Quaternion_t2301928331  L_31 = Quaternion_RotateTowards_m3102912458(NULL /*static, unused*/, L_27, L_28, ((float)il2cpp_codegen_multiply((float)L_29, (float)L_30)), /*hidden argument*/NULL);
		NullCheck(L_25);
		Transform_set_rotation_m3524318132(L_25, L_31, /*hidden argument*/NULL);
		goto IL_0134;
	}

IL_00eb:
	{
		Transform_t3600365921 * L_32 = V_1;
		Quaternion_t2301928331  L_33 = V_0;
		NullCheck(L_32);
		Transform_set_rotation_m3524318132(L_32, L_33, /*hidden argument*/NULL);
		Tile_t2634157908 * L_34 = __this->get_currentTileRotating_6();
		NullCheck(L_34);
		L_34->set_IsRotating_6((bool)0);
		TileGrid_t3345275584 * L_35 = ___tileGrid0;
		NullCheck(L_35);
		TileGrid_UpdateTilePower_m3239097173(L_35, /*hidden argument*/NULL);
		Tile_t2634157908 * L_36 = __this->get_currentTileRotating_6();
		NullCheck(L_36);
		TileU5BU5D_t3330163933* L_37 = Tile_GetConnectedNeighbors_m2873489518(L_36, /*hidden argument*/NULL);
		NullCheck(L_37);
		if ((((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_37)->max_length))))) <= ((int32_t)0)))
		{
			goto IL_0126;
		}
	}
	{
		SoundManager_t2102329059 * L_38 = ((SoundManager_t2102329059_StaticFields*)il2cpp_codegen_static_fields_for(SoundManager_t2102329059_il2cpp_TypeInfo_var))->get_Instance_3();
		NullCheck(L_38);
		SoundManager_Play_m472215855(L_38, _stringLiteral3695837802, /*hidden argument*/NULL);
	}

IL_0126:
	{
		__this->set_currentTileRotating_6((Tile_t2634157908 *)NULL);
		TileGrid_t3345275584 * L_39 = ___tileGrid0;
		TileController_UpdateTileVisuals_m3550407352(__this, L_39, /*hidden argument*/NULL);
	}

IL_0134:
	{
		return;
	}
}
// System.Boolean TileController::IsRotatingTiles()
extern "C"  bool TileController_IsRotatingTiles_m2868273090 (TileController_t1073589649 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TileController_IsRotatingTiles_m2868273090_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Queue_1_t2480417402 * L_0 = __this->get_tileTargetRotations_5();
		NullCheck(L_0);
		int32_t L_1 = Queue_1_get_Count_m3354354946(L_0, /*hidden argument*/Queue_1_get_Count_m3354354946_RuntimeMethod_var);
		return (bool)((((int32_t)L_1) > ((int32_t)0))? 1 : 0);
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void TileGrid::.ctor(LevelInfo)
extern "C"  void TileGrid__ctor_m2946651068 (TileGrid_t3345275584 * __this, LevelInfo_t1513202700 * ___info0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TileGrid__ctor_m2946651068_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	Tile_t2634157908 * V_2 = NULL;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	Tile_t2634157908 * V_5 = NULL;
	List_1_t4106232650 * V_6 = NULL;
	int32_t V_7 = 0;
	int32_t V_8 = 0;
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		LevelInfo_t1513202700 * L_0 = ___info0;
		NullCheck(L_0);
		int32_t L_1 = LevelInfo_get_Width_m854074050(L_0, /*hidden argument*/NULL);
		TileGrid_set_Width_m2885525837(__this, L_1, /*hidden argument*/NULL);
		LevelInfo_t1513202700 * L_2 = ___info0;
		NullCheck(L_2);
		int32_t L_3 = LevelInfo_get_Height_m1243796757(L_2, /*hidden argument*/NULL);
		TileGrid_set_Height_m4168955144(__this, L_3, /*hidden argument*/NULL);
		int32_t L_4 = TileGrid_get_Width_m2046657162(__this, /*hidden argument*/NULL);
		int32_t L_5 = TileGrid_get_Height_m1447994140(__this, /*hidden argument*/NULL);
		il2cpp_array_size_t L_7[] = { (il2cpp_array_size_t)L_4, (il2cpp_array_size_t)L_5 };
		TileU5B0___U2C0___U5D_t3330163934* L_6 = (TileU5B0___U2C0___U5D_t3330163934*)GenArrayNew(TileU5B0___U2C0___U5D_t3330163934_il2cpp_TypeInfo_var, L_7);
		TileGrid_set_Tiles_m2673310519(__this, L_6, /*hidden argument*/NULL);
		V_0 = 0;
		goto IL_006e;
	}

IL_003c:
	{
		V_1 = 0;
		goto IL_005e;
	}

IL_0043:
	{
		int32_t L_8 = V_0;
		int32_t L_9 = V_1;
		Tile_t2634157908 * L_10 = (Tile_t2634157908 *)il2cpp_codegen_object_new(Tile_t2634157908_il2cpp_TypeInfo_var);
		Tile__ctor_m1077387618(L_10, L_8, L_9, (bool)0, /*hidden argument*/NULL);
		V_2 = L_10;
		TileU5B0___U2C0___U5D_t3330163934* L_11 = TileGrid_get_Tiles_m2970482344(__this, /*hidden argument*/NULL);
		int32_t L_12 = V_0;
		int32_t L_13 = V_1;
		Tile_t2634157908 * L_14 = V_2;
		NullCheck(L_11);
		(L_11)->SetAt(L_12, L_13, L_14);
		int32_t L_15 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_15, (int32_t)1));
	}

IL_005e:
	{
		int32_t L_16 = V_1;
		int32_t L_17 = TileGrid_get_Height_m1447994140(__this, /*hidden argument*/NULL);
		if ((((int32_t)L_16) < ((int32_t)L_17)))
		{
			goto IL_0043;
		}
	}
	{
		int32_t L_18 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_18, (int32_t)1));
	}

IL_006e:
	{
		int32_t L_19 = V_0;
		int32_t L_20 = TileGrid_get_Width_m2046657162(__this, /*hidden argument*/NULL);
		if ((((int32_t)L_19) < ((int32_t)L_20)))
		{
			goto IL_003c;
		}
	}
	{
		V_3 = 0;
		goto IL_0140;
	}

IL_0081:
	{
		V_4 = 0;
		goto IL_012f;
	}

IL_0089:
	{
		TileU5B0___U2C0___U5D_t3330163934* L_21 = TileGrid_get_Tiles_m2970482344(__this, /*hidden argument*/NULL);
		int32_t L_22 = V_3;
		int32_t L_23 = V_4;
		NullCheck(L_21);
		Tile_t2634157908 * L_24 = (L_21)->GetAt(L_22, L_23);
		V_5 = L_24;
		int32_t L_25 = V_3;
		if ((((int32_t)L_25) <= ((int32_t)0)))
		{
			goto IL_00b9;
		}
	}
	{
		Tile_t2634157908 * L_26 = V_5;
		NullCheck(L_26);
		TileU5BU5D_t3330163933* L_27 = L_26->get_neighbors_3();
		TileU5B0___U2C0___U5D_t3330163934* L_28 = TileGrid_get_Tiles_m2970482344(__this, /*hidden argument*/NULL);
		int32_t L_29 = V_3;
		int32_t L_30 = V_4;
		NullCheck(L_28);
		Tile_t2634157908 * L_31 = (L_28)->GetAt(((int32_t)il2cpp_codegen_subtract((int32_t)L_29, (int32_t)1)), L_30);
		NullCheck(L_27);
		ArrayElementTypeCheck (L_27, L_31);
		(L_27)->SetAt(static_cast<il2cpp_array_size_t>(2), (Tile_t2634157908 *)L_31);
	}

IL_00b9:
	{
		int32_t L_32 = V_3;
		int32_t L_33 = TileGrid_get_Width_m2046657162(__this, /*hidden argument*/NULL);
		if ((((int32_t)L_32) >= ((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_33, (int32_t)1)))))
		{
			goto IL_00e0;
		}
	}
	{
		Tile_t2634157908 * L_34 = V_5;
		NullCheck(L_34);
		TileU5BU5D_t3330163933* L_35 = L_34->get_neighbors_3();
		TileU5B0___U2C0___U5D_t3330163934* L_36 = TileGrid_get_Tiles_m2970482344(__this, /*hidden argument*/NULL);
		int32_t L_37 = V_3;
		int32_t L_38 = V_4;
		NullCheck(L_36);
		Tile_t2634157908 * L_39 = (L_36)->GetAt(((int32_t)il2cpp_codegen_add((int32_t)L_37, (int32_t)1)), L_38);
		NullCheck(L_35);
		ArrayElementTypeCheck (L_35, L_39);
		(L_35)->SetAt(static_cast<il2cpp_array_size_t>(0), (Tile_t2634157908 *)L_39);
	}

IL_00e0:
	{
		int32_t L_40 = V_4;
		if ((((int32_t)L_40) <= ((int32_t)0)))
		{
			goto IL_0101;
		}
	}
	{
		Tile_t2634157908 * L_41 = V_5;
		NullCheck(L_41);
		TileU5BU5D_t3330163933* L_42 = L_41->get_neighbors_3();
		TileU5B0___U2C0___U5D_t3330163934* L_43 = TileGrid_get_Tiles_m2970482344(__this, /*hidden argument*/NULL);
		int32_t L_44 = V_3;
		int32_t L_45 = V_4;
		NullCheck(L_43);
		Tile_t2634157908 * L_46 = (L_43)->GetAt(L_44, ((int32_t)il2cpp_codegen_subtract((int32_t)L_45, (int32_t)1)));
		NullCheck(L_42);
		ArrayElementTypeCheck (L_42, L_46);
		(L_42)->SetAt(static_cast<il2cpp_array_size_t>(1), (Tile_t2634157908 *)L_46);
	}

IL_0101:
	{
		int32_t L_47 = V_4;
		int32_t L_48 = TileGrid_get_Height_m1447994140(__this, /*hidden argument*/NULL);
		if ((((int32_t)L_47) >= ((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_48, (int32_t)1)))))
		{
			goto IL_0129;
		}
	}
	{
		Tile_t2634157908 * L_49 = V_5;
		NullCheck(L_49);
		TileU5BU5D_t3330163933* L_50 = L_49->get_neighbors_3();
		TileU5B0___U2C0___U5D_t3330163934* L_51 = TileGrid_get_Tiles_m2970482344(__this, /*hidden argument*/NULL);
		int32_t L_52 = V_3;
		int32_t L_53 = V_4;
		NullCheck(L_51);
		Tile_t2634157908 * L_54 = (L_51)->GetAt(L_52, ((int32_t)il2cpp_codegen_add((int32_t)L_53, (int32_t)1)));
		NullCheck(L_50);
		ArrayElementTypeCheck (L_50, L_54);
		(L_50)->SetAt(static_cast<il2cpp_array_size_t>(3), (Tile_t2634157908 *)L_54);
	}

IL_0129:
	{
		int32_t L_55 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add((int32_t)L_55, (int32_t)1));
	}

IL_012f:
	{
		int32_t L_56 = V_4;
		int32_t L_57 = TileGrid_get_Height_m1447994140(__this, /*hidden argument*/NULL);
		if ((((int32_t)L_56) < ((int32_t)L_57)))
		{
			goto IL_0089;
		}
	}
	{
		int32_t L_58 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add((int32_t)L_58, (int32_t)1));
	}

IL_0140:
	{
		int32_t L_59 = V_3;
		int32_t L_60 = TileGrid_get_Width_m2046657162(__this, /*hidden argument*/NULL);
		if ((((int32_t)L_59) < ((int32_t)L_60)))
		{
			goto IL_0081;
		}
	}
	{
		LevelInfo_t1513202700 * L_61 = ___info0;
		TileGrid_FillMap_m3241352648(__this, L_61, /*hidden argument*/NULL);
		LevelInfo_t1513202700 * L_62 = ___info0;
		NullCheck(L_62);
		BooleanU5B0___U2C0___U5D_t2897418193* L_63 = L_62->get_RotationIgnore_7();
		TileGrid_ScrambleTileRotations_m2002745099(__this, (BooleanU5B0___U2C0___U5D_t2897418193*)(BooleanU5B0___U2C0___U5D_t2897418193*)L_63, /*hidden argument*/NULL);
		List_1_t4106232650 * L_64 = (List_1_t4106232650 *)il2cpp_codegen_object_new(List_1_t4106232650_il2cpp_TypeInfo_var);
		List_1__ctor_m855662214(L_64, /*hidden argument*/List_1__ctor_m855662214_RuntimeMethod_var);
		V_6 = L_64;
		V_7 = 0;
		goto IL_01bf;
	}

IL_016e:
	{
		V_8 = 0;
		goto IL_01ac;
	}

IL_0176:
	{
		TileU5B0___U2C0___U5D_t3330163934* L_65 = TileGrid_get_Tiles_m2970482344(__this, /*hidden argument*/NULL);
		int32_t L_66 = V_7;
		int32_t L_67 = V_8;
		NullCheck(L_65);
		Tile_t2634157908 * L_68 = (L_65)->GetAt(L_66, L_67);
		NullCheck(L_68);
		int32_t L_69 = Tile_get_tileType_m4198153530(L_68, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_69) == ((uint32_t)2))))
		{
			goto IL_01a6;
		}
	}
	{
		List_1_t4106232650 * L_70 = V_6;
		TileU5B0___U2C0___U5D_t3330163934* L_71 = TileGrid_get_Tiles_m2970482344(__this, /*hidden argument*/NULL);
		int32_t L_72 = V_7;
		int32_t L_73 = V_8;
		NullCheck(L_71);
		Tile_t2634157908 * L_74 = (L_71)->GetAt(L_72, L_73);
		NullCheck(L_70);
		List_1_Add_m1764557302(L_70, L_74, /*hidden argument*/List_1_Add_m1764557302_RuntimeMethod_var);
	}

IL_01a6:
	{
		int32_t L_75 = V_8;
		V_8 = ((int32_t)il2cpp_codegen_add((int32_t)L_75, (int32_t)1));
	}

IL_01ac:
	{
		int32_t L_76 = V_8;
		int32_t L_77 = TileGrid_get_Height_m1447994140(__this, /*hidden argument*/NULL);
		if ((((int32_t)L_76) < ((int32_t)L_77)))
		{
			goto IL_0176;
		}
	}
	{
		int32_t L_78 = V_7;
		V_7 = ((int32_t)il2cpp_codegen_add((int32_t)L_78, (int32_t)1));
	}

IL_01bf:
	{
		int32_t L_79 = V_7;
		int32_t L_80 = TileGrid_get_Width_m2046657162(__this, /*hidden argument*/NULL);
		if ((((int32_t)L_79) < ((int32_t)L_80)))
		{
			goto IL_016e;
		}
	}
	{
		List_1_t4106232650 * L_81 = V_6;
		NullCheck(L_81);
		TileU5BU5D_t3330163933* L_82 = List_1_ToArray_m1416750410(L_81, /*hidden argument*/List_1_ToArray_m1416750410_RuntimeMethod_var);
		TileGrid_set_Lamps_m1880883898(__this, L_82, /*hidden argument*/NULL);
		return;
	}
}
// Tile[0...,0...] TileGrid::get_Tiles()
extern "C"  TileU5B0___U2C0___U5D_t3330163934* TileGrid_get_Tiles_m2970482344 (TileGrid_t3345275584 * __this, const RuntimeMethod* method)
{
	{
		TileU5B0___U2C0___U5D_t3330163934* L_0 = __this->get_U3CTilesU3Ek__BackingField_0();
		return (TileU5B0___U2C0___U5D_t3330163934*)L_0;
	}
}
// System.Void TileGrid::set_Tiles(Tile[0...,0...])
extern "C"  void TileGrid_set_Tiles_m2673310519 (TileGrid_t3345275584 * __this, TileU5B0___U2C0___U5D_t3330163934* ___value0, const RuntimeMethod* method)
{
	{
		TileU5B0___U2C0___U5D_t3330163934* L_0 = ___value0;
		__this->set_U3CTilesU3Ek__BackingField_0((TileU5B0___U2C0___U5D_t3330163934*)L_0);
		return;
	}
}
// Tile[] TileGrid::get_Lamps()
extern "C"  TileU5BU5D_t3330163933* TileGrid_get_Lamps_m4230366176 (TileGrid_t3345275584 * __this, const RuntimeMethod* method)
{
	{
		TileU5BU5D_t3330163933* L_0 = __this->get_U3CLampsU3Ek__BackingField_1();
		return L_0;
	}
}
// System.Void TileGrid::set_Lamps(Tile[])
extern "C"  void TileGrid_set_Lamps_m1880883898 (TileGrid_t3345275584 * __this, TileU5BU5D_t3330163933* ___value0, const RuntimeMethod* method)
{
	{
		TileU5BU5D_t3330163933* L_0 = ___value0;
		__this->set_U3CLampsU3Ek__BackingField_1(L_0);
		return;
	}
}
// Tile TileGrid::get_PowerSource()
extern "C"  Tile_t2634157908 * TileGrid_get_PowerSource_m102512175 (TileGrid_t3345275584 * __this, const RuntimeMethod* method)
{
	{
		Tile_t2634157908 * L_0 = __this->get_U3CPowerSourceU3Ek__BackingField_2();
		return L_0;
	}
}
// System.Void TileGrid::set_PowerSource(Tile)
extern "C"  void TileGrid_set_PowerSource_m3997759099 (TileGrid_t3345275584 * __this, Tile_t2634157908 * ___value0, const RuntimeMethod* method)
{
	{
		Tile_t2634157908 * L_0 = ___value0;
		__this->set_U3CPowerSourceU3Ek__BackingField_2(L_0);
		return;
	}
}
// System.Int32 TileGrid::get_Width()
extern "C"  int32_t TileGrid_get_Width_m2046657162 (TileGrid_t3345275584 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_U3CWidthU3Ek__BackingField_3();
		return L_0;
	}
}
// System.Void TileGrid::set_Width(System.Int32)
extern "C"  void TileGrid_set_Width_m2885525837 (TileGrid_t3345275584 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___value0;
		__this->set_U3CWidthU3Ek__BackingField_3(L_0);
		return;
	}
}
// System.Int32 TileGrid::get_Height()
extern "C"  int32_t TileGrid_get_Height_m1447994140 (TileGrid_t3345275584 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_U3CHeightU3Ek__BackingField_4();
		return L_0;
	}
}
// System.Void TileGrid::set_Height(System.Int32)
extern "C"  void TileGrid_set_Height_m4168955144 (TileGrid_t3345275584 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___value0;
		__this->set_U3CHeightU3Ek__BackingField_4(L_0);
		return;
	}
}
// System.Void TileGrid::FillMap(LevelInfo)
extern "C"  void TileGrid_FillMap_m3241352648 (TileGrid_t3345275584 * __this, LevelInfo_t1513202700 * ___info0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TileGrid_FillMap_m3241352648_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	TileMapGenerator_t1694036907 * V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	Tile_t2634157908 * V_6 = NULL;
	int32_t V_7 = 0;
	{
		LevelInfo_t1513202700 * L_0 = ___info0;
		NullCheck(L_0);
		bool L_1 = LevelInfo_get_Procedural_m3103714944(L_0, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0040;
		}
	}
	{
		TileMapGenerator_t1694036907 * L_2 = (TileMapGenerator_t1694036907 *)il2cpp_codegen_object_new(TileMapGenerator_t1694036907_il2cpp_TypeInfo_var);
		TileMapGenerator__ctor_m3725985903(L_2, /*hidden argument*/NULL);
		V_0 = L_2;
		TileMapGenerator_t1694036907 * L_3 = V_0;
		LevelInfo_t1513202700 * L_4 = ___info0;
		TileU5B0___U2C0___U5D_t3330163934* L_5 = TileGrid_get_Tiles_m2970482344(__this, /*hidden argument*/NULL);
		NullCheck(L_3);
		TileMapGenerator_GenerateMap_m3483659827(L_3, L_4, L_5, /*hidden argument*/NULL);
		TileU5B0___U2C0___U5D_t3330163934* L_6 = TileGrid_get_Tiles_m2970482344(__this, /*hidden argument*/NULL);
		TileMapGenerator_t1694036907 * L_7 = V_0;
		NullCheck(L_7);
		int32_t L_8 = TileMapGenerator_get_sourceX_m704511154(L_7, /*hidden argument*/NULL);
		TileMapGenerator_t1694036907 * L_9 = V_0;
		NullCheck(L_9);
		int32_t L_10 = TileMapGenerator_get_sourceY_m704445618(L_9, /*hidden argument*/NULL);
		NullCheck(L_6);
		Tile_t2634157908 * L_11 = (L_6)->GetAt(L_8, L_10);
		TileGrid_set_PowerSource_m3997759099(__this, L_11, /*hidden argument*/NULL);
		goto IL_013c;
	}

IL_0040:
	{
		V_1 = 0;
		goto IL_0081;
	}

IL_0047:
	{
		V_2 = 0;
		goto IL_0071;
	}

IL_004e:
	{
		TileU5B0___U2C0___U5D_t3330163934* L_12 = TileGrid_get_Tiles_m2970482344(__this, /*hidden argument*/NULL);
		int32_t L_13 = V_1;
		int32_t L_14 = V_2;
		NullCheck(L_12);
		Tile_t2634157908 * L_15 = (L_12)->GetAt(L_13, L_14);
		LevelInfo_t1513202700 * L_16 = ___info0;
		NullCheck(L_16);
		TileTypeU5B0___U2C0___U5D_t1226088886* L_17 = L_16->get_Tiles_6();
		int32_t L_18 = V_1;
		int32_t L_19 = V_2;
		NullCheck((TileTypeU5B0___U2C0___U5D_t1226088886*)(TileTypeU5B0___U2C0___U5D_t1226088886*)L_17);
		int32_t L_20 = ((TileTypeU5B0___U2C0___U5D_t1226088886*)(TileTypeU5B0___U2C0___U5D_t1226088886*)L_17)->GetAt(L_18, L_19);
		NullCheck(L_15);
		Tile_SetTileType_m424980802(L_15, L_20, /*hidden argument*/NULL);
		int32_t L_21 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_21, (int32_t)1));
	}

IL_0071:
	{
		int32_t L_22 = V_2;
		LevelInfo_t1513202700 * L_23 = ___info0;
		NullCheck(L_23);
		int32_t L_24 = LevelInfo_get_Height_m1243796757(L_23, /*hidden argument*/NULL);
		if ((((int32_t)L_22) < ((int32_t)L_24)))
		{
			goto IL_004e;
		}
	}
	{
		int32_t L_25 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_25, (int32_t)1));
	}

IL_0081:
	{
		int32_t L_26 = V_1;
		LevelInfo_t1513202700 * L_27 = ___info0;
		NullCheck(L_27);
		int32_t L_28 = LevelInfo_get_Width_m854074050(L_27, /*hidden argument*/NULL);
		if ((((int32_t)L_26) < ((int32_t)L_28)))
		{
			goto IL_0047;
		}
	}
	{
		V_3 = 0;
		goto IL_0130;
	}

IL_0094:
	{
		V_4 = 0;
		goto IL_011f;
	}

IL_009c:
	{
		LevelInfo_t1513202700 * L_29 = ___info0;
		NullCheck(L_29);
		TileTypeU5B0___U2C0___U5D_t1226088886* L_30 = L_29->get_Tiles_6();
		int32_t L_31 = V_3;
		int32_t L_32 = V_4;
		NullCheck((TileTypeU5B0___U2C0___U5D_t1226088886*)(TileTypeU5B0___U2C0___U5D_t1226088886*)L_30);
		int32_t L_33 = ((TileTypeU5B0___U2C0___U5D_t1226088886*)(TileTypeU5B0___U2C0___U5D_t1226088886*)L_30)->GetAt(L_31, L_32);
		V_5 = L_33;
		TileU5B0___U2C0___U5D_t3330163934* L_34 = TileGrid_get_Tiles_m2970482344(__this, /*hidden argument*/NULL);
		int32_t L_35 = V_3;
		int32_t L_36 = V_4;
		NullCheck(L_34);
		Tile_t2634157908 * L_37 = (L_34)->GetAt(L_35, L_36);
		V_6 = L_37;
		int32_t L_38 = V_5;
		if ((((int32_t)L_38) == ((int32_t)3)))
		{
			goto IL_0109;
		}
	}
	{
		V_7 = 0;
		goto IL_0101;
	}

IL_00cc:
	{
		Tile_t2634157908 * L_39 = V_6;
		NullCheck(L_39);
		TileU5BU5D_t3330163933* L_40 = L_39->get_neighbors_3();
		int32_t L_41 = V_7;
		NullCheck(L_40);
		int32_t L_42 = L_41;
		Tile_t2634157908 * L_43 = (L_40)->GetAt(static_cast<il2cpp_array_size_t>(L_42));
		if (!L_43)
		{
			goto IL_00fb;
		}
	}
	{
		Tile_t2634157908 * L_44 = V_6;
		NullCheck(L_44);
		TileU5BU5D_t3330163933* L_45 = L_44->get_neighbors_3();
		int32_t L_46 = V_7;
		NullCheck(L_45);
		int32_t L_47 = L_46;
		Tile_t2634157908 * L_48 = (L_45)->GetAt(static_cast<il2cpp_array_size_t>(L_47));
		NullCheck(L_48);
		int32_t L_49 = Tile_get_tileType_m4198153530(L_48, /*hidden argument*/NULL);
		if ((((int32_t)L_49) == ((int32_t)3)))
		{
			goto IL_00fb;
		}
	}
	{
		Tile_t2634157908 * L_50 = V_6;
		NullCheck(L_50);
		BooleanU5BU5D_t2897418192* L_51 = L_50->get_outlets_4();
		int32_t L_52 = V_7;
		NullCheck(L_51);
		(L_51)->SetAt(static_cast<il2cpp_array_size_t>(L_52), (bool)1);
	}

IL_00fb:
	{
		int32_t L_53 = V_7;
		V_7 = ((int32_t)il2cpp_codegen_add((int32_t)L_53, (int32_t)1));
	}

IL_0101:
	{
		int32_t L_54 = V_7;
		if ((((int32_t)L_54) < ((int32_t)4)))
		{
			goto IL_00cc;
		}
	}

IL_0109:
	{
		int32_t L_55 = V_5;
		if ((!(((uint32_t)L_55) == ((uint32_t)1))))
		{
			goto IL_0119;
		}
	}
	{
		Tile_t2634157908 * L_56 = V_6;
		TileGrid_set_PowerSource_m3997759099(__this, L_56, /*hidden argument*/NULL);
	}

IL_0119:
	{
		int32_t L_57 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add((int32_t)L_57, (int32_t)1));
	}

IL_011f:
	{
		int32_t L_58 = V_4;
		LevelInfo_t1513202700 * L_59 = ___info0;
		NullCheck(L_59);
		int32_t L_60 = LevelInfo_get_Height_m1243796757(L_59, /*hidden argument*/NULL);
		if ((((int32_t)L_58) < ((int32_t)L_60)))
		{
			goto IL_009c;
		}
	}
	{
		int32_t L_61 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add((int32_t)L_61, (int32_t)1));
	}

IL_0130:
	{
		int32_t L_62 = V_3;
		LevelInfo_t1513202700 * L_63 = ___info0;
		NullCheck(L_63);
		int32_t L_64 = LevelInfo_get_Width_m854074050(L_63, /*hidden argument*/NULL);
		if ((((int32_t)L_62) < ((int32_t)L_64)))
		{
			goto IL_0094;
		}
	}

IL_013c:
	{
		return;
	}
}
// System.Void TileGrid::ScrambleTileRotations(System.Boolean[0...,0...])
extern "C"  void TileGrid_ScrambleTileRotations_m2002745099 (TileGrid_t3345275584 * __this, BooleanU5B0___U2C0___U5D_t2897418193* ___ignore0, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	{
		V_0 = 0;
		goto IL_00c3;
	}

IL_0007:
	{
		V_1 = 0;
		goto IL_00b3;
	}

IL_000e:
	{
		TileU5B0___U2C0___U5D_t3330163934* L_0 = TileGrid_get_Tiles_m2970482344(__this, /*hidden argument*/NULL);
		int32_t L_1 = V_0;
		int32_t L_2 = V_1;
		NullCheck(L_0);
		Tile_t2634157908 * L_3 = (L_0)->GetAt(L_1, L_2);
		NullCheck(L_3);
		int32_t L_4 = Tile_get_tileType_m4198153530(L_3, /*hidden argument*/NULL);
		if ((((int32_t)L_4) == ((int32_t)1)))
		{
			goto IL_0051;
		}
	}
	{
		TileU5B0___U2C0___U5D_t3330163934* L_5 = TileGrid_get_Tiles_m2970482344(__this, /*hidden argument*/NULL);
		int32_t L_6 = V_0;
		int32_t L_7 = V_1;
		NullCheck(L_5);
		Tile_t2634157908 * L_8 = (L_5)->GetAt(L_6, L_7);
		NullCheck(L_8);
		int32_t L_9 = Tile_get_tileType_m4198153530(L_8, /*hidden argument*/NULL);
		if ((((int32_t)L_9) == ((int32_t)2)))
		{
			goto IL_0051;
		}
	}
	{
		BooleanU5B0___U2C0___U5D_t2897418193* L_10 = ___ignore0;
		if (!L_10)
		{
			goto IL_0056;
		}
	}
	{
		BooleanU5B0___U2C0___U5D_t2897418193* L_11 = ___ignore0;
		int32_t L_12 = V_0;
		int32_t L_13 = V_1;
		NullCheck(L_11);
		bool L_14 = (L_11)->GetAt(L_12, L_13);
		if (!L_14)
		{
			goto IL_0056;
		}
	}

IL_0051:
	{
		goto IL_00af;
	}

IL_0056:
	{
		TileU5B0___U2C0___U5D_t3330163934* L_15 = TileGrid_get_Tiles_m2970482344(__this, /*hidden argument*/NULL);
		int32_t L_16 = V_0;
		int32_t L_17 = V_1;
		NullCheck(L_15);
		Tile_t2634157908 * L_18 = (L_15)->GetAt(L_16, L_17);
		NullCheck(L_18);
		BooleanU5BU5D_t2897418192* L_19 = L_18->get_outlets_4();
		int32_t L_20 = TileMetrics_GetWireShape_m126416825(NULL /*static, unused*/, L_19, /*hidden argument*/NULL);
		V_2 = L_20;
		V_3 = 0;
		int32_t L_21 = V_2;
		if ((((int32_t)L_21) == ((int32_t)5)))
		{
			goto IL_0086;
		}
	}
	{
		int32_t L_22 = V_2;
		if ((((int32_t)L_22) == ((int32_t)3)))
		{
			goto IL_0086;
		}
	}
	{
		int32_t L_23 = Random_Range_m4054026115(NULL /*static, unused*/, 1, 3, /*hidden argument*/NULL);
		V_3 = L_23;
	}

IL_0086:
	{
		V_4 = 0;
		goto IL_00a7;
	}

IL_008e:
	{
		TileU5B0___U2C0___U5D_t3330163934* L_24 = TileGrid_get_Tiles_m2970482344(__this, /*hidden argument*/NULL);
		int32_t L_25 = V_0;
		int32_t L_26 = V_1;
		NullCheck(L_24);
		Tile_t2634157908 * L_27 = (L_24)->GetAt(L_25, L_26);
		NullCheck(L_27);
		Tile_Rotate_m3768246377(L_27, (bool)1, /*hidden argument*/NULL);
		int32_t L_28 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add((int32_t)L_28, (int32_t)1));
	}

IL_00a7:
	{
		int32_t L_29 = V_4;
		int32_t L_30 = V_3;
		if ((((int32_t)L_29) < ((int32_t)L_30)))
		{
			goto IL_008e;
		}
	}

IL_00af:
	{
		int32_t L_31 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_31, (int32_t)1));
	}

IL_00b3:
	{
		int32_t L_32 = V_1;
		int32_t L_33 = TileGrid_get_Height_m1447994140(__this, /*hidden argument*/NULL);
		if ((((int32_t)L_32) < ((int32_t)L_33)))
		{
			goto IL_000e;
		}
	}
	{
		int32_t L_34 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_34, (int32_t)1));
	}

IL_00c3:
	{
		int32_t L_35 = V_0;
		int32_t L_36 = TileGrid_get_Width_m2046657162(__this, /*hidden argument*/NULL);
		if ((((int32_t)L_35) < ((int32_t)L_36)))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void TileGrid::UpdateTilePower()
extern "C"  void TileGrid_UpdateTilePower_m3239097173 (TileGrid_t3345275584 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TileGrid_UpdateTilePower_m3239097173_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Queue_1_t2480417402 * V_0 = NULL;
	List_1_t4106232650 * V_1 = NULL;
	Tile_t2634157908 * V_2 = NULL;
	TileU5BU5D_t3330163933* V_3 = NULL;
	int32_t V_4 = 0;
	Tile_t2634157908 * V_5 = NULL;
	{
		TileGrid_ResetTilePower_m3921631594(__this, /*hidden argument*/NULL);
		Queue_1_t2480417402 * L_0 = (Queue_1_t2480417402 *)il2cpp_codegen_object_new(Queue_1_t2480417402_il2cpp_TypeInfo_var);
		Queue_1__ctor_m1328433775(L_0, /*hidden argument*/Queue_1__ctor_m1328433775_RuntimeMethod_var);
		V_0 = L_0;
		List_1_t4106232650 * L_1 = (List_1_t4106232650 *)il2cpp_codegen_object_new(List_1_t4106232650_il2cpp_TypeInfo_var);
		List_1__ctor_m855662214(L_1, /*hidden argument*/List_1__ctor_m855662214_RuntimeMethod_var);
		V_1 = L_1;
		Queue_1_t2480417402 * L_2 = V_0;
		Tile_t2634157908 * L_3 = TileGrid_get_PowerSource_m102512175(__this, /*hidden argument*/NULL);
		NullCheck(L_2);
		Queue_1_Enqueue_m2517726190(L_2, L_3, /*hidden argument*/Queue_1_Enqueue_m2517726190_RuntimeMethod_var);
		List_1_t4106232650 * L_4 = V_1;
		Tile_t2634157908 * L_5 = TileGrid_get_PowerSource_m102512175(__this, /*hidden argument*/NULL);
		NullCheck(L_4);
		List_1_Add_m1764557302(L_4, L_5, /*hidden argument*/List_1_Add_m1764557302_RuntimeMethod_var);
		goto IL_0080;
	}

IL_002f:
	{
		Queue_1_t2480417402 * L_6 = V_0;
		NullCheck(L_6);
		Tile_t2634157908 * L_7 = Queue_1_Dequeue_m4163830294(L_6, /*hidden argument*/Queue_1_Dequeue_m4163830294_RuntimeMethod_var);
		V_2 = L_7;
		Tile_t2634157908 * L_8 = V_2;
		NullCheck(L_8);
		TileU5BU5D_t3330163933* L_9 = Tile_GetConnectedNeighbors_m2873489518(L_8, /*hidden argument*/NULL);
		V_3 = L_9;
		V_4 = 0;
		goto IL_0076;
	}

IL_0045:
	{
		TileU5BU5D_t3330163933* L_10 = V_3;
		int32_t L_11 = V_4;
		NullCheck(L_10);
		int32_t L_12 = L_11;
		Tile_t2634157908 * L_13 = (L_10)->GetAt(static_cast<il2cpp_array_size_t>(L_12));
		V_5 = L_13;
		List_1_t4106232650 * L_14 = V_1;
		Tile_t2634157908 * L_15 = V_5;
		NullCheck(L_14);
		bool L_16 = List_1_Contains_m1244656029(L_14, L_15, /*hidden argument*/List_1_Contains_m1244656029_RuntimeMethod_var);
		if (L_16)
		{
			goto IL_0070;
		}
	}
	{
		List_1_t4106232650 * L_17 = V_1;
		Tile_t2634157908 * L_18 = V_5;
		NullCheck(L_17);
		List_1_Add_m1764557302(L_17, L_18, /*hidden argument*/List_1_Add_m1764557302_RuntimeMethod_var);
		Queue_1_t2480417402 * L_19 = V_0;
		Tile_t2634157908 * L_20 = V_5;
		NullCheck(L_19);
		Queue_1_Enqueue_m2517726190(L_19, L_20, /*hidden argument*/Queue_1_Enqueue_m2517726190_RuntimeMethod_var);
		Tile_t2634157908 * L_21 = V_5;
		NullCheck(L_21);
		L_21->set_IsPowered_5((bool)1);
	}

IL_0070:
	{
		int32_t L_22 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add((int32_t)L_22, (int32_t)1));
	}

IL_0076:
	{
		int32_t L_23 = V_4;
		TileU5BU5D_t3330163933* L_24 = V_3;
		NullCheck(L_24);
		if ((((int32_t)L_23) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_24)->max_length)))))))
		{
			goto IL_0045;
		}
	}

IL_0080:
	{
		Queue_1_t2480417402 * L_25 = V_0;
		NullCheck(L_25);
		int32_t L_26 = Queue_1_get_Count_m3354354946(L_25, /*hidden argument*/Queue_1_get_Count_m3354354946_RuntimeMethod_var);
		if ((((int32_t)L_26) > ((int32_t)0)))
		{
			goto IL_002f;
		}
	}
	{
		return;
	}
}
// System.Void TileGrid::ResetTilePower()
extern "C"  void TileGrid_ResetTilePower_m3921631594 (TileGrid_t3345275584 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	Tile_t2634157908 * V_2 = NULL;
	{
		V_0 = 0;
		goto IL_0043;
	}

IL_0007:
	{
		V_1 = 0;
		goto IL_0033;
	}

IL_000e:
	{
		TileU5B0___U2C0___U5D_t3330163934* L_0 = TileGrid_get_Tiles_m2970482344(__this, /*hidden argument*/NULL);
		int32_t L_1 = V_0;
		int32_t L_2 = V_1;
		NullCheck(L_0);
		Tile_t2634157908 * L_3 = (L_0)->GetAt(L_1, L_2);
		V_2 = L_3;
		Tile_t2634157908 * L_4 = V_2;
		NullCheck(L_4);
		int32_t L_5 = Tile_get_tileType_m4198153530(L_4, /*hidden argument*/NULL);
		if ((((int32_t)L_5) == ((int32_t)1)))
		{
			goto IL_002f;
		}
	}
	{
		Tile_t2634157908 * L_6 = V_2;
		NullCheck(L_6);
		L_6->set_IsPowered_5((bool)0);
	}

IL_002f:
	{
		int32_t L_7 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_7, (int32_t)1));
	}

IL_0033:
	{
		int32_t L_8 = V_1;
		int32_t L_9 = TileGrid_get_Height_m1447994140(__this, /*hidden argument*/NULL);
		if ((((int32_t)L_8) < ((int32_t)L_9)))
		{
			goto IL_000e;
		}
	}
	{
		int32_t L_10 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_10, (int32_t)1));
	}

IL_0043:
	{
		int32_t L_11 = V_0;
		int32_t L_12 = TileGrid_get_Width_m2046657162(__this, /*hidden argument*/NULL);
		if ((((int32_t)L_11) < ((int32_t)L_12)))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void TileMapGenerator::.ctor()
extern "C"  void TileMapGenerator__ctor_m3725985903 (TileMapGenerator_t1694036907 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TileMapGenerator__ctor_m3725985903_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Int32U5BU5D_t385246372* L_0 = ((Int32U5BU5D_t385246372*)SZArrayNew(Int32U5BU5D_t385246372_il2cpp_TypeInfo_var, (uint32_t)4));
		NullCheck(L_0);
		(L_0)->SetAt(static_cast<il2cpp_array_size_t>(0), (int32_t)(-1));
		Int32U5BU5D_t385246372* L_1 = L_0;
		NullCheck(L_1);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(2), (int32_t)1);
		__this->set_DX_2(L_1);
		Int32U5BU5D_t385246372* L_2 = ((Int32U5BU5D_t385246372*)SZArrayNew(Int32U5BU5D_t385246372_il2cpp_TypeInfo_var, (uint32_t)4));
		NullCheck(L_2);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(1), (int32_t)1);
		Int32U5BU5D_t385246372* L_3 = L_2;
		NullCheck(L_3);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(3), (int32_t)(-1));
		__this->set_DY_3(L_3);
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Int32 TileMapGenerator::get_sourceX()
extern "C"  int32_t TileMapGenerator_get_sourceX_m704511154 (TileMapGenerator_t1694036907 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_U3CsourceXU3Ek__BackingField_0();
		return L_0;
	}
}
// System.Void TileMapGenerator::set_sourceX(System.Int32)
extern "C"  void TileMapGenerator_set_sourceX_m2403543050 (TileMapGenerator_t1694036907 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___value0;
		__this->set_U3CsourceXU3Ek__BackingField_0(L_0);
		return;
	}
}
// System.Int32 TileMapGenerator::get_sourceY()
extern "C"  int32_t TileMapGenerator_get_sourceY_m704445618 (TileMapGenerator_t1694036907 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_U3CsourceYU3Ek__BackingField_1();
		return L_0;
	}
}
// System.Void TileMapGenerator::set_sourceY(System.Int32)
extern "C"  void TileMapGenerator_set_sourceY_m2403578925 (TileMapGenerator_t1694036907 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___value0;
		__this->set_U3CsourceYU3Ek__BackingField_1(L_0);
		return;
	}
}
// GridDirection[] TileMapGenerator::RandomDirections()
extern "C"  GridDirectionU5BU5D_t3393422547* TileMapGenerator_RandomDirections_m4194603747 (TileMapGenerator_t1694036907 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TileMapGenerator_RandomDirections_m4194603747_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	List_1_t128053199 * V_0 = NULL;
	int32_t V_1 = 0;
	GridDirectionU5BU5D_t3393422547* V_2 = NULL;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	{
		List_1_t128053199 * L_0 = (List_1_t128053199 *)il2cpp_codegen_object_new(List_1_t128053199_il2cpp_TypeInfo_var);
		List_1__ctor_m1628857705(L_0, /*hidden argument*/List_1__ctor_m1628857705_RuntimeMethod_var);
		V_0 = L_0;
		V_1 = 0;
		goto IL_0018;
	}

IL_000d:
	{
		List_1_t128053199 * L_1 = V_0;
		int32_t L_2 = V_1;
		NullCheck(L_1);
		List_1_Add_m697420525(L_1, L_2, /*hidden argument*/List_1_Add_m697420525_RuntimeMethod_var);
		int32_t L_3 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_3, (int32_t)1));
	}

IL_0018:
	{
		int32_t L_4 = V_1;
		if ((((int32_t)L_4) < ((int32_t)4)))
		{
			goto IL_000d;
		}
	}
	{
		V_2 = ((GridDirectionU5BU5D_t3393422547*)SZArrayNew(GridDirectionU5BU5D_t3393422547_il2cpp_TypeInfo_var, (uint32_t)4));
		V_3 = 0;
		goto IL_0052;
	}

IL_002d:
	{
		List_1_t128053199 * L_5 = V_0;
		NullCheck(L_5);
		int32_t L_6 = List_1_get_Count_m361000296(L_5, /*hidden argument*/List_1_get_Count_m361000296_RuntimeMethod_var);
		int32_t L_7 = Random_Range_m4054026115(NULL /*static, unused*/, 0, L_6, /*hidden argument*/NULL);
		V_4 = L_7;
		GridDirectionU5BU5D_t3393422547* L_8 = V_2;
		int32_t L_9 = V_3;
		List_1_t128053199 * L_10 = V_0;
		int32_t L_11 = V_4;
		NullCheck(L_10);
		int32_t L_12 = List_1_get_Item_m888956288(L_10, L_11, /*hidden argument*/List_1_get_Item_m888956288_RuntimeMethod_var);
		NullCheck(L_8);
		(L_8)->SetAt(static_cast<il2cpp_array_size_t>(L_9), (int32_t)L_12);
		List_1_t128053199 * L_13 = V_0;
		int32_t L_14 = V_4;
		NullCheck(L_13);
		List_1_RemoveAt_m2770200702(L_13, L_14, /*hidden argument*/List_1_RemoveAt_m2770200702_RuntimeMethod_var);
		int32_t L_15 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add((int32_t)L_15, (int32_t)1));
	}

IL_0052:
	{
		int32_t L_16 = V_3;
		if ((((int32_t)L_16) < ((int32_t)4)))
		{
			goto IL_002d;
		}
	}
	{
		GridDirectionU5BU5D_t3393422547* L_17 = V_2;
		return L_17;
	}
}
// System.Void TileMapGenerator::GenerateMap(LevelInfo,Tile[0...,0...])
extern "C"  void TileMapGenerator_GenerateMap_m3483659827 (TileMapGenerator_t1694036907 * __this, LevelInfo_t1513202700 * ___info0, TileU5B0___U2C0___U5D_t3330163934* ___tilemap1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TileMapGenerator_GenerateMap_m3483659827_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	BooleanU5B0___U2C0___U5D_t2897418193* V_0 = NULL;
	List_1_t4106232650 * V_1 = NULL;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	float V_5 = 0.0f;
	int32_t V_6 = 0;
	int32_t V_7 = 0;
	Tile_t2634157908 * V_8 = NULL;
	int32_t V_9 = 0;
	int32_t V_10 = 0;
	int32_t V_11 = 0;
	int32_t V_12 = 0;
	Tile_t2634157908 * V_13 = NULL;
	int32_t V_14 = 0;
	int32_t V_15 = 0;
	int32_t V_16 = 0;
	int32_t V_17 = 0;
	Tile_t2634157908 * V_18 = NULL;
	{
		LevelInfo_t1513202700 * L_0 = ___info0;
		NullCheck(L_0);
		int32_t L_1 = LevelInfo_get_Width_m854074050(L_0, /*hidden argument*/NULL);
		LevelInfo_t1513202700 * L_2 = ___info0;
		NullCheck(L_2);
		int32_t L_3 = LevelInfo_get_Height_m1243796757(L_2, /*hidden argument*/NULL);
		il2cpp_array_size_t L_5[] = { (il2cpp_array_size_t)L_1, (il2cpp_array_size_t)L_3 };
		BooleanU5B0___U2C0___U5D_t2897418193* L_4 = (BooleanU5B0___U2C0___U5D_t2897418193*)GenArrayNew(BooleanU5B0___U2C0___U5D_t2897418193_il2cpp_TypeInfo_var, L_5);
		V_0 = L_4;
		List_1_t4106232650 * L_6 = (List_1_t4106232650 *)il2cpp_codegen_object_new(List_1_t4106232650_il2cpp_TypeInfo_var);
		List_1__ctor_m855662214(L_6, /*hidden argument*/List_1__ctor_m855662214_RuntimeMethod_var);
		V_1 = L_6;
		V_2 = 0;
		goto IL_0051;
	}

IL_001f:
	{
		V_3 = 0;
		goto IL_0041;
	}

IL_0026:
	{
		BooleanU5B0___U2C0___U5D_t2897418193* L_7 = V_0;
		int32_t L_8 = V_2;
		int32_t L_9 = V_3;
		NullCheck(L_7);
		(L_7)->SetAt(L_8, L_9, (bool)0);
		List_1_t4106232650 * L_10 = V_1;
		TileU5B0___U2C0___U5D_t3330163934* L_11 = ___tilemap1;
		int32_t L_12 = V_2;
		int32_t L_13 = V_3;
		NullCheck(L_11);
		Tile_t2634157908 * L_14 = (L_11)->GetAt(L_12, L_13);
		NullCheck(L_10);
		List_1_Add_m1764557302(L_10, L_14, /*hidden argument*/List_1_Add_m1764557302_RuntimeMethod_var);
		int32_t L_15 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add((int32_t)L_15, (int32_t)1));
	}

IL_0041:
	{
		int32_t L_16 = V_3;
		LevelInfo_t1513202700 * L_17 = ___info0;
		NullCheck(L_17);
		int32_t L_18 = LevelInfo_get_Height_m1243796757(L_17, /*hidden argument*/NULL);
		if ((((int32_t)L_16) < ((int32_t)L_18)))
		{
			goto IL_0026;
		}
	}
	{
		int32_t L_19 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_19, (int32_t)1));
	}

IL_0051:
	{
		int32_t L_20 = V_2;
		LevelInfo_t1513202700 * L_21 = ___info0;
		NullCheck(L_21);
		int32_t L_22 = LevelInfo_get_Width_m854074050(L_21, /*hidden argument*/NULL);
		if ((((int32_t)L_20) < ((int32_t)L_22)))
		{
			goto IL_001f;
		}
	}
	{
		LevelInfo_t1513202700 * L_23 = ___info0;
		NullCheck(L_23);
		int32_t L_24 = LevelInfo_get_Width_m854074050(L_23, /*hidden argument*/NULL);
		LevelInfo_t1513202700 * L_25 = ___info0;
		NullCheck(L_25);
		int32_t L_26 = LevelInfo_get_Height_m1243796757(L_25, /*hidden argument*/NULL);
		V_4 = ((int32_t)il2cpp_codegen_multiply((int32_t)L_24, (int32_t)L_26));
		int32_t L_27 = V_4;
		if ((((int32_t)L_27) <= ((int32_t)4)))
		{
			goto IL_017c;
		}
	}
	{
		LevelInfo_t1513202700 * L_28 = ___info0;
		NullCheck(L_28);
		float L_29 = LevelInfo_get_FillAmount_m3059614925(L_28, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t3464937446_il2cpp_TypeInfo_var);
		float L_30 = Mathf_Clamp01_m56433566(NULL /*static, unused*/, L_29, /*hidden argument*/NULL);
		V_5 = L_30;
		int32_t L_31 = V_4;
		float L_32 = V_5;
		V_6 = (((int32_t)((int32_t)((float)il2cpp_codegen_multiply((float)(((float)((float)L_31))), (float)((float)il2cpp_codegen_subtract((float)(1.0f), (float)L_32)))))));
		V_7 = 0;
		goto IL_0173;
	}

IL_0098:
	{
		List_1_t4106232650 * L_33 = V_1;
		NullCheck(L_33);
		int32_t L_34 = List_1_get_Count_m1405008821(L_33, /*hidden argument*/List_1_get_Count_m1405008821_RuntimeMethod_var);
		if ((((int32_t)L_34) > ((int32_t)0)))
		{
			goto IL_00a9;
		}
	}
	{
		goto IL_017c;
	}

IL_00a9:
	{
		List_1_t4106232650 * L_35 = V_1;
		List_1_t4106232650 * L_36 = V_1;
		NullCheck(L_36);
		int32_t L_37 = List_1_get_Count_m1405008821(L_36, /*hidden argument*/List_1_get_Count_m1405008821_RuntimeMethod_var);
		int32_t L_38 = Random_Range_m4054026115(NULL /*static, unused*/, 0, ((int32_t)il2cpp_codegen_subtract((int32_t)L_37, (int32_t)1)), /*hidden argument*/NULL);
		NullCheck(L_35);
		Tile_t2634157908 * L_39 = List_1_get_Item_m2624909818(L_35, L_38, /*hidden argument*/List_1_get_Item_m2624909818_RuntimeMethod_var);
		V_8 = L_39;
		BooleanU5B0___U2C0___U5D_t2897418193* L_40 = V_0;
		Tile_t2634157908 * L_41 = V_8;
		NullCheck(L_41);
		int32_t L_42 = Tile_get_X_m3000455159(L_41, /*hidden argument*/NULL);
		Tile_t2634157908 * L_43 = V_8;
		NullCheck(L_43);
		int32_t L_44 = Tile_get_Y_m1044140023(L_43, /*hidden argument*/NULL);
		NullCheck(L_40);
		(L_40)->SetAt(L_42, L_44, (bool)1);
		V_9 = (-1);
		goto IL_0165;
	}

IL_00dc:
	{
		V_10 = (-1);
		goto IL_0157;
	}

IL_00e4:
	{
		Tile_t2634157908 * L_45 = V_8;
		NullCheck(L_45);
		int32_t L_46 = Tile_get_X_m3000455159(L_45, /*hidden argument*/NULL);
		int32_t L_47 = V_9;
		V_11 = ((int32_t)il2cpp_codegen_add((int32_t)L_46, (int32_t)L_47));
		Tile_t2634157908 * L_48 = V_8;
		NullCheck(L_48);
		int32_t L_49 = Tile_get_Y_m1044140023(L_48, /*hidden argument*/NULL);
		int32_t L_50 = V_10;
		V_12 = ((int32_t)il2cpp_codegen_add((int32_t)L_49, (int32_t)L_50));
		int32_t L_51 = V_11;
		if ((((int32_t)L_51) < ((int32_t)0)))
		{
			goto IL_0126;
		}
	}
	{
		int32_t L_52 = V_11;
		LevelInfo_t1513202700 * L_53 = ___info0;
		NullCheck(L_53);
		int32_t L_54 = LevelInfo_get_Width_m854074050(L_53, /*hidden argument*/NULL);
		if ((((int32_t)L_52) > ((int32_t)L_54)))
		{
			goto IL_0126;
		}
	}
	{
		int32_t L_55 = V_12;
		if ((((int32_t)L_55) < ((int32_t)0)))
		{
			goto IL_0126;
		}
	}
	{
		int32_t L_56 = V_12;
		LevelInfo_t1513202700 * L_57 = ___info0;
		NullCheck(L_57);
		int32_t L_58 = LevelInfo_get_Height_m1243796757(L_57, /*hidden argument*/NULL);
		if ((((int32_t)L_56) <= ((int32_t)L_58)))
		{
			goto IL_012b;
		}
	}

IL_0126:
	{
		goto IL_0151;
	}

IL_012b:
	{
		List_1_t4106232650 * L_59 = V_1;
		TileU5B0___U2C0___U5D_t3330163934* L_60 = ___tilemap1;
		int32_t L_61 = V_11;
		int32_t L_62 = V_12;
		NullCheck(L_60);
		Tile_t2634157908 * L_63 = (L_60)->GetAt(L_61, L_62);
		NullCheck(L_59);
		bool L_64 = List_1_Contains_m1244656029(L_59, L_63, /*hidden argument*/List_1_Contains_m1244656029_RuntimeMethod_var);
		if (!L_64)
		{
			goto IL_0151;
		}
	}
	{
		List_1_t4106232650 * L_65 = V_1;
		TileU5B0___U2C0___U5D_t3330163934* L_66 = ___tilemap1;
		int32_t L_67 = V_11;
		int32_t L_68 = V_12;
		NullCheck(L_66);
		Tile_t2634157908 * L_69 = (L_66)->GetAt(L_67, L_68);
		NullCheck(L_65);
		List_1_Remove_m2860109562(L_65, L_69, /*hidden argument*/List_1_Remove_m2860109562_RuntimeMethod_var);
	}

IL_0151:
	{
		int32_t L_70 = V_10;
		V_10 = ((int32_t)il2cpp_codegen_add((int32_t)L_70, (int32_t)1));
	}

IL_0157:
	{
		int32_t L_71 = V_10;
		if ((((int32_t)L_71) < ((int32_t)1)))
		{
			goto IL_00e4;
		}
	}
	{
		int32_t L_72 = V_9;
		V_9 = ((int32_t)il2cpp_codegen_add((int32_t)L_72, (int32_t)1));
	}

IL_0165:
	{
		int32_t L_73 = V_9;
		if ((((int32_t)L_73) < ((int32_t)1)))
		{
			goto IL_00dc;
		}
	}
	{
		int32_t L_74 = V_7;
		V_7 = ((int32_t)il2cpp_codegen_add((int32_t)L_74, (int32_t)1));
	}

IL_0173:
	{
		int32_t L_75 = V_7;
		int32_t L_76 = V_6;
		if ((((int32_t)L_75) < ((int32_t)L_76)))
		{
			goto IL_0098;
		}
	}

IL_017c:
	{
		List_1_t4106232650 * L_77 = V_1;
		List_1_t4106232650 * L_78 = V_1;
		NullCheck(L_78);
		int32_t L_79 = List_1_get_Count_m1405008821(L_78, /*hidden argument*/List_1_get_Count_m1405008821_RuntimeMethod_var);
		int32_t L_80 = Random_Range_m4054026115(NULL /*static, unused*/, 0, ((int32_t)il2cpp_codegen_subtract((int32_t)L_79, (int32_t)1)), /*hidden argument*/NULL);
		NullCheck(L_77);
		Tile_t2634157908 * L_81 = List_1_get_Item_m2624909818(L_77, L_80, /*hidden argument*/List_1_get_Item_m2624909818_RuntimeMethod_var);
		V_13 = L_81;
		Tile_t2634157908 * L_82 = V_13;
		NullCheck(L_82);
		int32_t L_83 = Tile_get_X_m3000455159(L_82, /*hidden argument*/NULL);
		TileMapGenerator_set_sourceX_m2403543050(__this, L_83, /*hidden argument*/NULL);
		Tile_t2634157908 * L_84 = V_13;
		NullCheck(L_84);
		int32_t L_85 = Tile_get_Y_m1044140023(L_84, /*hidden argument*/NULL);
		TileMapGenerator_set_sourceY_m2403578925(__this, L_85, /*hidden argument*/NULL);
		int32_t L_86 = TileMapGenerator_get_sourceX_m704511154(__this, /*hidden argument*/NULL);
		int32_t L_87 = TileMapGenerator_get_sourceY_m704445618(__this, /*hidden argument*/NULL);
		LevelInfo_t1513202700 * L_88 = ___info0;
		NullCheck(L_88);
		int32_t L_89 = LevelInfo_get_Width_m854074050(L_88, /*hidden argument*/NULL);
		LevelInfo_t1513202700 * L_90 = ___info0;
		NullCheck(L_90);
		int32_t L_91 = LevelInfo_get_Height_m1243796757(L_90, /*hidden argument*/NULL);
		BooleanU5B0___U2C0___U5D_t2897418193* L_92 = V_0;
		TileU5B0___U2C0___U5D_t3330163934* L_93 = ___tilemap1;
		TileMapGenerator_CarvePassagesFrom_m3739355988(__this, L_86, L_87, L_89, L_91, L_92, L_93, /*hidden argument*/NULL);
		TileU5B0___U2C0___U5D_t3330163934* L_94 = ___tilemap1;
		int32_t L_95 = TileMapGenerator_get_sourceX_m704511154(__this, /*hidden argument*/NULL);
		int32_t L_96 = TileMapGenerator_get_sourceY_m704445618(__this, /*hidden argument*/NULL);
		NullCheck(L_94);
		Tile_t2634157908 * L_97 = (L_94)->GetAt(L_95, L_96);
		NullCheck(L_97);
		Tile_SetTileType_m424980802(L_97, 1, /*hidden argument*/NULL);
		List_1_t4106232650 * L_98 = V_1;
		NullCheck(L_98);
		List_1_Clear_m4168133901(L_98, /*hidden argument*/List_1_Clear_m4168133901_RuntimeMethod_var);
		V_14 = 0;
		goto IL_0237;
	}

IL_01f2:
	{
		V_15 = 0;
		goto IL_0224;
	}

IL_01fa:
	{
		TileU5B0___U2C0___U5D_t3330163934* L_99 = ___tilemap1;
		int32_t L_100 = V_14;
		int32_t L_101 = V_15;
		NullCheck(L_99);
		Tile_t2634157908 * L_102 = (L_99)->GetAt(L_100, L_101);
		NullCheck(L_102);
		int32_t L_103 = Tile_get_tileType_m4198153530(L_102, /*hidden argument*/NULL);
		if (L_103)
		{
			goto IL_021e;
		}
	}
	{
		List_1_t4106232650 * L_104 = V_1;
		TileU5B0___U2C0___U5D_t3330163934* L_105 = ___tilemap1;
		int32_t L_106 = V_14;
		int32_t L_107 = V_15;
		NullCheck(L_105);
		Tile_t2634157908 * L_108 = (L_105)->GetAt(L_106, L_107);
		NullCheck(L_104);
		List_1_Add_m1764557302(L_104, L_108, /*hidden argument*/List_1_Add_m1764557302_RuntimeMethod_var);
	}

IL_021e:
	{
		int32_t L_109 = V_15;
		V_15 = ((int32_t)il2cpp_codegen_add((int32_t)L_109, (int32_t)1));
	}

IL_0224:
	{
		int32_t L_110 = V_15;
		LevelInfo_t1513202700 * L_111 = ___info0;
		NullCheck(L_111);
		int32_t L_112 = LevelInfo_get_Height_m1243796757(L_111, /*hidden argument*/NULL);
		if ((((int32_t)L_110) < ((int32_t)L_112)))
		{
			goto IL_01fa;
		}
	}
	{
		int32_t L_113 = V_14;
		V_14 = ((int32_t)il2cpp_codegen_add((int32_t)L_113, (int32_t)1));
	}

IL_0237:
	{
		int32_t L_114 = V_14;
		LevelInfo_t1513202700 * L_115 = ___info0;
		NullCheck(L_115);
		int32_t L_116 = LevelInfo_get_Width_m854074050(L_115, /*hidden argument*/NULL);
		if ((((int32_t)L_114) < ((int32_t)L_116)))
		{
			goto IL_01f2;
		}
	}
	{
		int32_t L_117 = V_4;
		LevelInfo_t1513202700 * L_118 = ___info0;
		NullCheck(L_118);
		float L_119 = LevelInfo_get_TimedTileAmount_m917445596(L_118, /*hidden argument*/NULL);
		V_16 = (((int32_t)((int32_t)((float)il2cpp_codegen_multiply((float)(((float)((float)L_117))), (float)L_119)))));
		V_17 = 0;
		goto IL_0297;
	}

IL_0259:
	{
		List_1_t4106232650 * L_120 = V_1;
		NullCheck(L_120);
		int32_t L_121 = List_1_get_Count_m1405008821(L_120, /*hidden argument*/List_1_get_Count_m1405008821_RuntimeMethod_var);
		if ((((int32_t)L_121) > ((int32_t)0)))
		{
			goto IL_026a;
		}
	}
	{
		goto IL_02a0;
	}

IL_026a:
	{
		List_1_t4106232650 * L_122 = V_1;
		List_1_t4106232650 * L_123 = V_1;
		NullCheck(L_123);
		int32_t L_124 = List_1_get_Count_m1405008821(L_123, /*hidden argument*/List_1_get_Count_m1405008821_RuntimeMethod_var);
		int32_t L_125 = Random_Range_m4054026115(NULL /*static, unused*/, 0, ((int32_t)il2cpp_codegen_subtract((int32_t)L_124, (int32_t)1)), /*hidden argument*/NULL);
		NullCheck(L_122);
		Tile_t2634157908 * L_126 = List_1_get_Item_m2624909818(L_122, L_125, /*hidden argument*/List_1_get_Item_m2624909818_RuntimeMethod_var);
		V_18 = L_126;
		Tile_t2634157908 * L_127 = V_18;
		NullCheck(L_127);
		L_127->set_IsTimedTile_7((bool)1);
		List_1_t4106232650 * L_128 = V_1;
		Tile_t2634157908 * L_129 = V_18;
		NullCheck(L_128);
		List_1_Remove_m2860109562(L_128, L_129, /*hidden argument*/List_1_Remove_m2860109562_RuntimeMethod_var);
		int32_t L_130 = V_17;
		V_17 = ((int32_t)il2cpp_codegen_add((int32_t)L_130, (int32_t)1));
	}

IL_0297:
	{
		int32_t L_131 = V_17;
		int32_t L_132 = V_16;
		if ((((int32_t)L_131) < ((int32_t)L_132)))
		{
			goto IL_0259;
		}
	}

IL_02a0:
	{
		return;
	}
}
// System.Void TileMapGenerator::CarvePassagesFrom(System.Int32,System.Int32,System.Int32,System.Int32,System.Boolean[0...,0...],Tile[0...,0...])
extern "C"  void TileMapGenerator_CarvePassagesFrom_m3739355988 (TileMapGenerator_t1694036907 * __this, int32_t ___cx0, int32_t ___cy1, int32_t ___width2, int32_t ___height3, BooleanU5B0___U2C0___U5D_t2897418193* ___visited4, TileU5B0___U2C0___U5D_t3330163934* ___tilemap5, const RuntimeMethod* method)
{
	GridDirectionU5BU5D_t3393422547* V_0 = NULL;
	bool V_1 = false;
	int32_t V_2 = 0;
	GridDirectionU5BU5D_t3393422547* V_3 = NULL;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	{
		BooleanU5B0___U2C0___U5D_t2897418193* L_0 = ___visited4;
		int32_t L_1 = ___cx0;
		int32_t L_2 = ___cy1;
		NullCheck(L_0);
		(L_0)->SetAt(L_1, L_2, (bool)1);
		TileU5B0___U2C0___U5D_t3330163934* L_3 = ___tilemap5;
		int32_t L_4 = ___cx0;
		int32_t L_5 = ___cy1;
		NullCheck(L_3);
		Tile_t2634157908 * L_6 = (L_3)->GetAt(L_4, L_5);
		NullCheck(L_6);
		Tile_SetTileType_m424980802(L_6, 0, /*hidden argument*/NULL);
		GridDirectionU5BU5D_t3393422547* L_7 = TileMapGenerator_RandomDirections_m4194603747(__this, /*hidden argument*/NULL);
		V_0 = L_7;
		V_1 = (bool)1;
		GridDirectionU5BU5D_t3393422547* L_8 = V_0;
		V_3 = L_8;
		V_4 = 0;
		goto IL_00bc;
	}

IL_002c:
	{
		GridDirectionU5BU5D_t3393422547* L_9 = V_3;
		int32_t L_10 = V_4;
		NullCheck(L_9);
		int32_t L_11 = L_10;
		int32_t L_12 = (L_9)->GetAt(static_cast<il2cpp_array_size_t>(L_11));
		V_2 = L_12;
		int32_t L_13 = ___cx0;
		Int32U5BU5D_t385246372* L_14 = __this->get_DX_2();
		int32_t L_15 = V_2;
		NullCheck(L_14);
		int32_t L_16 = L_15;
		int32_t L_17 = (L_14)->GetAt(static_cast<il2cpp_array_size_t>(L_16));
		V_5 = ((int32_t)il2cpp_codegen_add((int32_t)L_13, (int32_t)L_17));
		int32_t L_18 = ___cy1;
		Int32U5BU5D_t385246372* L_19 = __this->get_DY_3();
		int32_t L_20 = V_2;
		NullCheck(L_19);
		int32_t L_21 = L_20;
		int32_t L_22 = (L_19)->GetAt(static_cast<il2cpp_array_size_t>(L_21));
		V_6 = ((int32_t)il2cpp_codegen_add((int32_t)L_18, (int32_t)L_22));
		int32_t L_23 = V_5;
		if ((((int32_t)L_23) < ((int32_t)0)))
		{
			goto IL_00b6;
		}
	}
	{
		int32_t L_24 = V_5;
		int32_t L_25 = ___width2;
		if ((((int32_t)L_24) >= ((int32_t)L_25)))
		{
			goto IL_00b6;
		}
	}
	{
		int32_t L_26 = V_6;
		if ((((int32_t)L_26) < ((int32_t)0)))
		{
			goto IL_00b6;
		}
	}
	{
		int32_t L_27 = V_6;
		int32_t L_28 = ___height3;
		if ((((int32_t)L_27) >= ((int32_t)L_28)))
		{
			goto IL_00b6;
		}
	}
	{
		BooleanU5B0___U2C0___U5D_t2897418193* L_29 = ___visited4;
		int32_t L_30 = V_5;
		int32_t L_31 = V_6;
		NullCheck(L_29);
		bool L_32 = (L_29)->GetAt(L_30, L_31);
		if (L_32)
		{
			goto IL_00b6;
		}
	}
	{
		V_1 = (bool)0;
		TileU5B0___U2C0___U5D_t3330163934* L_33 = ___tilemap5;
		int32_t L_34 = V_5;
		int32_t L_35 = V_6;
		NullCheck(L_33);
		Tile_t2634157908 * L_36 = (L_33)->GetAt(L_34, L_35);
		NullCheck(L_36);
		BooleanU5BU5D_t2897418192* L_37 = L_36->get_outlets_4();
		int32_t L_38 = V_2;
		NullCheck(L_37);
		(L_37)->SetAt(static_cast<il2cpp_array_size_t>(L_38), (bool)1);
		TileU5B0___U2C0___U5D_t3330163934* L_39 = ___tilemap5;
		int32_t L_40 = ___cx0;
		int32_t L_41 = ___cy1;
		NullCheck(L_39);
		Tile_t2634157908 * L_42 = (L_39)->GetAt(L_40, L_41);
		NullCheck(L_42);
		BooleanU5BU5D_t2897418192* L_43 = L_42->get_outlets_4();
		int32_t L_44 = V_2;
		int32_t L_45 = GridDirectionExtensions_Opposite_m3925076718(NULL /*static, unused*/, L_44, /*hidden argument*/NULL);
		NullCheck(L_43);
		(L_43)->SetAt(static_cast<il2cpp_array_size_t>(L_45), (bool)1);
		int32_t L_46 = V_5;
		int32_t L_47 = V_6;
		int32_t L_48 = ___width2;
		int32_t L_49 = ___height3;
		BooleanU5B0___U2C0___U5D_t2897418193* L_50 = ___visited4;
		TileU5B0___U2C0___U5D_t3330163934* L_51 = ___tilemap5;
		TileMapGenerator_CarvePassagesFrom_m3739355988(__this, L_46, L_47, L_48, L_49, L_50, L_51, /*hidden argument*/NULL);
	}

IL_00b6:
	{
		int32_t L_52 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add((int32_t)L_52, (int32_t)1));
	}

IL_00bc:
	{
		int32_t L_53 = V_4;
		GridDirectionU5BU5D_t3393422547* L_54 = V_3;
		NullCheck(L_54);
		if ((((int32_t)L_53) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_54)->max_length)))))))
		{
			goto IL_002c;
		}
	}
	{
		bool L_55 = V_1;
		if (!L_55)
		{
			goto IL_00db;
		}
	}
	{
		TileU5B0___U2C0___U5D_t3330163934* L_56 = ___tilemap5;
		int32_t L_57 = ___cx0;
		int32_t L_58 = ___cy1;
		NullCheck(L_56);
		Tile_t2634157908 * L_59 = (L_56)->GetAt(L_57, L_58);
		NullCheck(L_59);
		Tile_SetTileType_m424980802(L_59, 2, /*hidden argument*/NULL);
	}

IL_00db:
	{
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// WireShape TileMetrics::GetWireShape(System.Boolean[])
extern "C"  int32_t TileMetrics_GetWireShape_m126416825 (RuntimeObject * __this /* static, unused */, BooleanU5BU5D_t2897418192* ___outlets0, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	int32_t G_B3_0 = 0;
	int32_t G_B5_0 = 0;
	int32_t G_B4_0 = 0;
	int32_t G_B6_0 = 0;
	int32_t G_B6_1 = 0;
	int32_t G_B8_0 = 0;
	int32_t G_B7_0 = 0;
	int32_t G_B9_0 = 0;
	int32_t G_B9_1 = 0;
	int32_t G_B11_0 = 0;
	int32_t G_B10_0 = 0;
	int32_t G_B12_0 = 0;
	int32_t G_B12_1 = 0;
	{
		BooleanU5BU5D_t2897418192* L_0 = ___outlets0;
		NullCheck(L_0);
		int32_t L_1 = 0;
		uint8_t L_2 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_1));
		if (!L_2)
		{
			goto IL_000e;
		}
	}
	{
		G_B3_0 = 1;
		goto IL_000f;
	}

IL_000e:
	{
		G_B3_0 = 0;
	}

IL_000f:
	{
		BooleanU5BU5D_t2897418192* L_3 = ___outlets0;
		NullCheck(L_3);
		int32_t L_4 = 1;
		uint8_t L_5 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		G_B4_0 = G_B3_0;
		if (!L_5)
		{
			G_B5_0 = G_B3_0;
			goto IL_001d;
		}
	}
	{
		G_B6_0 = 1;
		G_B6_1 = G_B4_0;
		goto IL_001e;
	}

IL_001d:
	{
		G_B6_0 = 0;
		G_B6_1 = G_B5_0;
	}

IL_001e:
	{
		BooleanU5BU5D_t2897418192* L_6 = ___outlets0;
		NullCheck(L_6);
		int32_t L_7 = 2;
		uint8_t L_8 = (L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_7));
		G_B7_0 = ((int32_t)il2cpp_codegen_add((int32_t)G_B6_1, (int32_t)G_B6_0));
		if (!L_8)
		{
			G_B8_0 = ((int32_t)il2cpp_codegen_add((int32_t)G_B6_1, (int32_t)G_B6_0));
			goto IL_002d;
		}
	}
	{
		G_B9_0 = 1;
		G_B9_1 = G_B7_0;
		goto IL_002e;
	}

IL_002d:
	{
		G_B9_0 = 0;
		G_B9_1 = G_B8_0;
	}

IL_002e:
	{
		BooleanU5BU5D_t2897418192* L_9 = ___outlets0;
		NullCheck(L_9);
		int32_t L_10 = 3;
		uint8_t L_11 = (L_9)->GetAt(static_cast<il2cpp_array_size_t>(L_10));
		G_B10_0 = ((int32_t)il2cpp_codegen_add((int32_t)G_B9_1, (int32_t)G_B9_0));
		if (!L_11)
		{
			G_B11_0 = ((int32_t)il2cpp_codegen_add((int32_t)G_B9_1, (int32_t)G_B9_0));
			goto IL_003d;
		}
	}
	{
		G_B12_0 = 1;
		G_B12_1 = G_B10_0;
		goto IL_003e;
	}

IL_003d:
	{
		G_B12_0 = 0;
		G_B12_1 = G_B11_0;
	}

IL_003e:
	{
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)G_B12_1, (int32_t)G_B12_0));
		int32_t L_12 = V_0;
		if (L_12)
		{
			goto IL_0048;
		}
	}
	{
		return (int32_t)(5);
	}

IL_0048:
	{
		int32_t L_13 = V_0;
		if ((!(((uint32_t)L_13) == ((uint32_t)1))))
		{
			goto IL_0051;
		}
	}
	{
		return (int32_t)(4);
	}

IL_0051:
	{
		int32_t L_14 = V_0;
		if ((!(((uint32_t)L_14) == ((uint32_t)3))))
		{
			goto IL_005a;
		}
	}
	{
		return (int32_t)(2);
	}

IL_005a:
	{
		int32_t L_15 = V_0;
		if ((!(((uint32_t)L_15) == ((uint32_t)4))))
		{
			goto IL_0063;
		}
	}
	{
		return (int32_t)(3);
	}

IL_0063:
	{
		BooleanU5BU5D_t2897418192* L_16 = ___outlets0;
		NullCheck(L_16);
		int32_t L_17 = 0;
		uint8_t L_18 = (L_16)->GetAt(static_cast<il2cpp_array_size_t>(L_17));
		if (!L_18)
		{
			goto IL_0073;
		}
	}
	{
		BooleanU5BU5D_t2897418192* L_19 = ___outlets0;
		NullCheck(L_19);
		int32_t L_20 = 2;
		uint8_t L_21 = (L_19)->GetAt(static_cast<il2cpp_array_size_t>(L_20));
		if (L_21)
		{
			goto IL_0083;
		}
	}

IL_0073:
	{
		BooleanU5BU5D_t2897418192* L_22 = ___outlets0;
		NullCheck(L_22);
		int32_t L_23 = 1;
		uint8_t L_24 = (L_22)->GetAt(static_cast<il2cpp_array_size_t>(L_23));
		if (!L_24)
		{
			goto IL_0085;
		}
	}
	{
		BooleanU5BU5D_t2897418192* L_25 = ___outlets0;
		NullCheck(L_25);
		int32_t L_26 = 3;
		uint8_t L_27 = (L_25)->GetAt(static_cast<il2cpp_array_size_t>(L_26));
		if (!L_27)
		{
			goto IL_0085;
		}
	}

IL_0083:
	{
		return (int32_t)(0);
	}

IL_0085:
	{
		return (int32_t)(1);
	}
}
// System.Single TileMetrics::GetWireRotation(System.Boolean[])
extern "C"  float TileMetrics_GetWireRotation_m1792594508 (RuntimeObject * __this /* static, unused */, BooleanU5BU5D_t2897418192* ___outlets0, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t G_B11_0 = 0;
	{
		V_0 = 0;
		BooleanU5BU5D_t2897418192* L_0 = ___outlets0;
		int32_t L_1 = TileMetrics_GetWireShape_m126416825(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		V_1 = L_1;
		int32_t L_2 = V_1;
		switch (L_2)
		{
			case 0:
			{
				goto IL_004e;
			}
			case 1:
			{
				goto IL_0063;
			}
			case 2:
			{
				goto IL_0094;
			}
			case 3:
			{
				goto IL_00c0;
			}
			case 4:
			{
				goto IL_0028;
			}
		}
	}
	{
		goto IL_00c0;
	}

IL_0028:
	{
		V_2 = 0;
		goto IL_0042;
	}

IL_002f:
	{
		BooleanU5BU5D_t2897418192* L_3 = ___outlets0;
		int32_t L_4 = V_2;
		NullCheck(L_3);
		int32_t L_5 = L_4;
		uint8_t L_6 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
		if (!L_6)
		{
			goto IL_003e;
		}
	}
	{
		int32_t L_7 = V_2;
		V_0 = L_7;
		goto IL_0049;
	}

IL_003e:
	{
		int32_t L_8 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_8, (int32_t)1));
	}

IL_0042:
	{
		int32_t L_9 = V_2;
		if ((((int32_t)L_9) < ((int32_t)4)))
		{
			goto IL_002f;
		}
	}

IL_0049:
	{
		goto IL_00c0;
	}

IL_004e:
	{
		BooleanU5BU5D_t2897418192* L_10 = ___outlets0;
		NullCheck(L_10);
		int32_t L_11 = 0;
		uint8_t L_12 = (L_10)->GetAt(static_cast<il2cpp_array_size_t>(L_11));
		if (!L_12)
		{
			goto IL_005c;
		}
	}
	{
		G_B11_0 = 1;
		goto IL_005d;
	}

IL_005c:
	{
		G_B11_0 = 0;
	}

IL_005d:
	{
		V_0 = G_B11_0;
		goto IL_00c0;
	}

IL_0063:
	{
		V_3 = 0;
		goto IL_0088;
	}

IL_006a:
	{
		int32_t L_13 = V_3;
		V_4 = ((int32_t)((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_13, (int32_t)1))%(int32_t)4));
		BooleanU5BU5D_t2897418192* L_14 = ___outlets0;
		int32_t L_15 = V_3;
		NullCheck(L_14);
		int32_t L_16 = L_15;
		uint8_t L_17 = (L_14)->GetAt(static_cast<il2cpp_array_size_t>(L_16));
		if (!L_17)
		{
			goto IL_0084;
		}
	}
	{
		BooleanU5BU5D_t2897418192* L_18 = ___outlets0;
		int32_t L_19 = V_4;
		NullCheck(L_18);
		int32_t L_20 = L_19;
		uint8_t L_21 = (L_18)->GetAt(static_cast<il2cpp_array_size_t>(L_20));
		if (!L_21)
		{
			goto IL_0084;
		}
	}
	{
		int32_t L_22 = V_3;
		V_0 = L_22;
	}

IL_0084:
	{
		int32_t L_23 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add((int32_t)L_23, (int32_t)1));
	}

IL_0088:
	{
		int32_t L_24 = V_3;
		if ((((int32_t)L_24) < ((int32_t)4)))
		{
			goto IL_006a;
		}
	}
	{
		goto IL_00c0;
	}

IL_0094:
	{
		V_5 = 0;
		goto IL_00b3;
	}

IL_009c:
	{
		BooleanU5BU5D_t2897418192* L_25 = ___outlets0;
		int32_t L_26 = V_5;
		NullCheck(L_25);
		int32_t L_27 = L_26;
		uint8_t L_28 = (L_25)->GetAt(static_cast<il2cpp_array_size_t>(L_27));
		if (L_28)
		{
			goto IL_00ad;
		}
	}
	{
		int32_t L_29 = V_5;
		V_0 = L_29;
		goto IL_00bb;
	}

IL_00ad:
	{
		int32_t L_30 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add((int32_t)L_30, (int32_t)1));
	}

IL_00b3:
	{
		int32_t L_31 = V_5;
		if ((((int32_t)L_31) < ((int32_t)4)))
		{
			goto IL_009c;
		}
	}

IL_00bb:
	{
		goto IL_00c0;
	}

IL_00c0:
	{
		int32_t L_32 = V_0;
		return ((float)il2cpp_codegen_multiply((float)(-90.0f), (float)(((float)((float)L_32)))));
	}
}
// System.Boolean[] TileMetrics::EmptyOutlets()
extern "C"  BooleanU5BU5D_t2897418192* TileMetrics_EmptyOutlets_m4184200475 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TileMetrics_EmptyOutlets_m4184200475_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	BooleanU5BU5D_t2897418192* V_0 = NULL;
	int32_t V_1 = 0;
	{
		V_0 = ((BooleanU5BU5D_t2897418192*)SZArrayNew(BooleanU5BU5D_t2897418192_il2cpp_TypeInfo_var, (uint32_t)4));
		V_1 = 0;
		goto IL_0016;
	}

IL_000e:
	{
		BooleanU5BU5D_t2897418192* L_0 = V_0;
		int32_t L_1 = V_1;
		NullCheck(L_0);
		(L_0)->SetAt(static_cast<il2cpp_array_size_t>(L_1), (bool)0);
		int32_t L_2 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_2, (int32_t)1));
	}

IL_0016:
	{
		int32_t L_3 = V_1;
		if ((((int32_t)L_3) < ((int32_t)4)))
		{
			goto IL_000e;
		}
	}
	{
		BooleanU5BU5D_t2897418192* L_4 = V_0;
		return L_4;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void TilePrefabManager::.ctor()
extern "C"  void TilePrefabManager__ctor_m3953590648 (TilePrefabManager_t293433569 * __this, const RuntimeMethod* method)
{
	{
		__this->set_decorationChance_6((0.3f));
		MonoBehaviour__ctor_m1579109191(__this, /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.Transform TilePrefabManager::GetTilePrefab(Tile)
extern "C"  Transform_t3600365921 * TilePrefabManager_GetTilePrefab_m1797596600 (TilePrefabManager_t293433569 * __this, Tile_t2634157908 * ___tile0, const RuntimeMethod* method)
{
	Transform_t3600365921 * V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	{
		V_0 = (Transform_t3600365921 *)NULL;
		Tile_t2634157908 * L_0 = ___tile0;
		NullCheck(L_0);
		int32_t L_1 = Tile_get_tileType_m4198153530(L_0, /*hidden argument*/NULL);
		V_1 = L_1;
		int32_t L_2 = V_1;
		switch (L_2)
		{
			case 0:
			{
				goto IL_0024;
			}
			case 1:
			{
				goto IL_005d;
			}
			case 2:
			{
				goto IL_0051;
			}
			case 3:
			{
				goto IL_0069;
			}
		}
	}
	{
		goto IL_0096;
	}

IL_0024:
	{
		Tile_t2634157908 * L_3 = ___tile0;
		NullCheck(L_3);
		BooleanU5BU5D_t2897418192* L_4 = L_3->get_outlets_4();
		int32_t L_5 = TileMetrics_GetWireShape_m126416825(NULL /*static, unused*/, L_4, /*hidden argument*/NULL);
		V_2 = L_5;
		int32_t L_6 = V_2;
		if ((((int32_t)L_6) == ((int32_t)4)))
		{
			goto IL_003e;
		}
	}
	{
		int32_t L_7 = V_2;
		if ((!(((uint32_t)L_7) == ((uint32_t)5))))
		{
			goto IL_0043;
		}
	}

IL_003e:
	{
		goto IL_0096;
	}

IL_0043:
	{
		Tile_t2634157908 * L_8 = ___tile0;
		int32_t L_9 = V_2;
		Transform_t3600365921 * L_10 = TilePrefabManager_GetWirePrefab_m3463700425(__this, L_8, L_9, /*hidden argument*/NULL);
		V_0 = L_10;
		goto IL_0096;
	}

IL_0051:
	{
		Transform_t3600365921 * L_11 = __this->get_LampPrefab_5();
		V_0 = L_11;
		goto IL_0096;
	}

IL_005d:
	{
		Transform_t3600365921 * L_12 = __this->get_PowerSourcePrefab_4();
		V_0 = L_12;
		goto IL_0096;
	}

IL_0069:
	{
		float L_13 = Random_get_value_m3115885645(NULL /*static, unused*/, /*hidden argument*/NULL);
		float L_14 = __this->get_decorationChance_6();
		if ((!(((float)L_13) < ((float)L_14))))
		{
			goto IL_0091;
		}
	}
	{
		TransformU5BU5D_t807237628* L_15 = __this->get_DecorationPrefabs_3();
		NullCheck(L_15);
		int32_t L_16 = Random_Range_m4054026115(NULL /*static, unused*/, 0, (((int32_t)((int32_t)(((RuntimeArray *)L_15)->max_length)))), /*hidden argument*/NULL);
		V_3 = L_16;
		TransformU5BU5D_t807237628* L_17 = __this->get_DecorationPrefabs_3();
		int32_t L_18 = V_3;
		NullCheck(L_17);
		int32_t L_19 = L_18;
		Transform_t3600365921 * L_20 = (L_17)->GetAt(static_cast<il2cpp_array_size_t>(L_19));
		V_0 = L_20;
	}

IL_0091:
	{
		goto IL_0096;
	}

IL_0096:
	{
		Transform_t3600365921 * L_21 = V_0;
		return L_21;
	}
}
// UnityEngine.Transform TilePrefabManager::GetWirePrefab(Tile,WireShape)
extern "C"  Transform_t3600365921 * TilePrefabManager_GetWirePrefab_m3463700425 (TilePrefabManager_t293433569 * __this, Tile_t2634157908 * ___tile0, int32_t ___shape1, const RuntimeMethod* method)
{
	{
		TransformU5BU5D_t807237628* L_0 = __this->get_WirePrefabs_2();
		int32_t L_1 = ___shape1;
		NullCheck(L_0);
		int32_t L_2 = L_1;
		Transform_t3600365921 * L_3 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		return L_3;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void TileZOrder::.ctor()
extern "C"  void TileZOrder__ctor_m3126948819 (TileZOrder_t3349568238 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_m1579109191(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void TileZOrder::Start()
extern "C"  void TileZOrder_Start_m1483763135 (TileZOrder_t3349568238 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TileZOrder_Start_m1483763135_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	Vector3_t3722313464  V_1;
	memset(&V_1, 0, sizeof(V_1));
	Vector3_t3722313464  V_2;
	memset(&V_2, 0, sizeof(V_2));
	Vector3_t3722313464  V_3;
	memset(&V_3, 0, sizeof(V_3));
	{
		Transform_t3600365921 * L_0 = Component_get_transform_m3162698980(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		Vector3_t3722313464  L_1 = Transform_get_position_m36019626(L_0, /*hidden argument*/NULL);
		V_1 = L_1;
		float L_2 = (&V_1)->get_y_2();
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t3464937446_il2cpp_TypeInfo_var);
		int32_t L_3 = Mathf_FloorToInt_m1870542928(NULL /*static, unused*/, L_2, /*hidden argument*/NULL);
		V_0 = L_3;
		Transform_t3600365921 * L_4 = Component_get_transform_m3162698980(__this, /*hidden argument*/NULL);
		Transform_t3600365921 * L_5 = Component_get_transform_m3162698980(__this, /*hidden argument*/NULL);
		NullCheck(L_5);
		Vector3_t3722313464  L_6 = Transform_get_position_m36019626(L_5, /*hidden argument*/NULL);
		V_2 = L_6;
		float L_7 = (&V_2)->get_x_1();
		Transform_t3600365921 * L_8 = Component_get_transform_m3162698980(__this, /*hidden argument*/NULL);
		NullCheck(L_8);
		Vector3_t3722313464  L_9 = Transform_get_position_m36019626(L_8, /*hidden argument*/NULL);
		V_3 = L_9;
		float L_10 = (&V_3)->get_y_2();
		int32_t L_11 = V_0;
		Vector3_t3722313464  L_12;
		memset(&L_12, 0, sizeof(L_12));
		Vector3__ctor_m3353183577((&L_12), L_7, L_10, ((float)((float)(((float)((float)L_11)))/(float)(10.0f))), /*hidden argument*/NULL);
		NullCheck(L_4);
		Transform_set_position_m3387557959(L_4, L_12, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void TimedTileController::.ctor()
extern "C"  void TimedTileController__ctor_m2623356456 (TimedTileController_t3243845658 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TimedTileController__ctor_m2623356456_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		List_1_t4106232650 * L_0 = (List_1_t4106232650 *)il2cpp_codegen_object_new(List_1_t4106232650_il2cpp_TypeInfo_var);
		List_1__ctor_m855662214(L_0, /*hidden argument*/List_1__ctor_m855662214_RuntimeMethod_var);
		__this->set_timedTiles_3(L_0);
		__this->set_rotateDelay_5(5);
		MonoBehaviour__ctor_m1579109191(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void TimedTileController::Initialize(TileController)
extern "C"  void TimedTileController_Initialize_m196164070 (TimedTileController_t3243845658 * __this, TileController_t1073589649 * ___tileController0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TimedTileController_Initialize_m196164070_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		TileController_t1073589649 * L_0 = ___tileController0;
		__this->set_tileController_2(L_0);
		NotificationCenter_t2218695229 * L_1 = NotificationCenter_get_DefaultCenter_m4216969841(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_1);
		NotificationCenter_AddObserver_m3680884127(L_1, __this, _stringLiteral2286385673, /*hidden argument*/NULL);
		NotificationCenter_t2218695229 * L_2 = NotificationCenter_get_DefaultCenter_m4216969841(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_2);
		NotificationCenter_AddObserver_m3680884127(L_2, __this, _stringLiteral2430327460, /*hidden argument*/NULL);
		NotificationCenter_t2218695229 * L_3 = NotificationCenter_get_DefaultCenter_m4216969841(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_3);
		NotificationCenter_AddObserver_m3680884127(L_3, __this, _stringLiteral2106178105, /*hidden argument*/NULL);
		return;
	}
}
// System.Void TimedTileController::OnLevelStart(Notification)
extern "C"  void TimedTileController_OnLevelStart_m356000210 (TimedTileController_t3243845658 * __this, Notification_t2099770324 * ___note0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TimedTileController_OnLevelStart_m356000210_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	TileGrid_t3345275584 * V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		Notification_t2099770324 * L_0 = ___note0;
		NullCheck(L_0);
		Hashtable_t1853889766 * L_1 = L_0->get_data_2();
		NullCheck(L_1);
		RuntimeObject * L_2 = VirtFuncInvoker1< RuntimeObject *, RuntimeObject * >::Invoke(21 /* System.Object System.Collections.Hashtable::get_Item(System.Object) */, L_1, _stringLiteral1232840130);
		__this->set_levelInfo_4(((LevelInfo_t1513202700 *)CastclassClass((RuntimeObject*)L_2, LevelInfo_t1513202700_il2cpp_TypeInfo_var)));
		LevelInfo_t1513202700 * L_3 = __this->get_levelInfo_4();
		NullCheck(L_3);
		int32_t L_4 = LevelInfo_get_TimedTileDelay_m2454384926(L_3, /*hidden argument*/NULL);
		__this->set_rotateDelay_5(L_4);
		Notification_t2099770324 * L_5 = ___note0;
		NullCheck(L_5);
		Hashtable_t1853889766 * L_6 = L_5->get_data_2();
		NullCheck(L_6);
		RuntimeObject * L_7 = VirtFuncInvoker1< RuntimeObject *, RuntimeObject * >::Invoke(21 /* System.Object System.Collections.Hashtable::get_Item(System.Object) */, L_6, _stringLiteral2340450262);
		V_0 = ((TileGrid_t3345275584 *)CastclassClass((RuntimeObject*)L_7, TileGrid_t3345275584_il2cpp_TypeInfo_var));
		List_1_t4106232650 * L_8 = __this->get_timedTiles_3();
		NullCheck(L_8);
		List_1_Clear_m4168133901(L_8, /*hidden argument*/List_1_Clear_m4168133901_RuntimeMethod_var);
		V_1 = 0;
		goto IL_00b5;
	}

IL_0054:
	{
		V_2 = 0;
		goto IL_00a5;
	}

IL_005b:
	{
		TileGrid_t3345275584 * L_9 = V_0;
		NullCheck(L_9);
		TileU5B0___U2C0___U5D_t3330163934* L_10 = TileGrid_get_Tiles_m2970482344(L_9, /*hidden argument*/NULL);
		int32_t L_11 = V_1;
		int32_t L_12 = V_2;
		NullCheck(L_10);
		Tile_t2634157908 * L_13 = (L_10)->GetAt(L_11, L_12);
		NullCheck(L_13);
		int32_t L_14 = Tile_get_tileType_m4198153530(L_13, /*hidden argument*/NULL);
		if (L_14)
		{
			goto IL_00a1;
		}
	}
	{
		TileGrid_t3345275584 * L_15 = V_0;
		NullCheck(L_15);
		TileU5B0___U2C0___U5D_t3330163934* L_16 = TileGrid_get_Tiles_m2970482344(L_15, /*hidden argument*/NULL);
		int32_t L_17 = V_1;
		int32_t L_18 = V_2;
		NullCheck(L_16);
		Tile_t2634157908 * L_19 = (L_16)->GetAt(L_17, L_18);
		NullCheck(L_19);
		bool L_20 = L_19->get_IsTimedTile_7();
		if (!L_20)
		{
			goto IL_00a1;
		}
	}
	{
		List_1_t4106232650 * L_21 = __this->get_timedTiles_3();
		TileGrid_t3345275584 * L_22 = V_0;
		NullCheck(L_22);
		TileU5B0___U2C0___U5D_t3330163934* L_23 = TileGrid_get_Tiles_m2970482344(L_22, /*hidden argument*/NULL);
		int32_t L_24 = V_1;
		int32_t L_25 = V_2;
		NullCheck(L_23);
		Tile_t2634157908 * L_26 = (L_23)->GetAt(L_24, L_25);
		NullCheck(L_21);
		List_1_Add_m1764557302(L_21, L_26, /*hidden argument*/List_1_Add_m1764557302_RuntimeMethod_var);
	}

IL_00a1:
	{
		int32_t L_27 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_27, (int32_t)1));
	}

IL_00a5:
	{
		int32_t L_28 = V_2;
		TileGrid_t3345275584 * L_29 = V_0;
		NullCheck(L_29);
		int32_t L_30 = TileGrid_get_Height_m1447994140(L_29, /*hidden argument*/NULL);
		if ((((int32_t)L_28) < ((int32_t)L_30)))
		{
			goto IL_005b;
		}
	}
	{
		int32_t L_31 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_31, (int32_t)1));
	}

IL_00b5:
	{
		int32_t L_32 = V_1;
		TileGrid_t3345275584 * L_33 = V_0;
		NullCheck(L_33);
		int32_t L_34 = TileGrid_get_Width_m2046657162(L_33, /*hidden argument*/NULL);
		if ((((int32_t)L_32) < ((int32_t)L_34)))
		{
			goto IL_0054;
		}
	}
	{
		return;
	}
}
// System.Void TimedTileController::OnLevelComplete()
extern "C"  void TimedTileController_OnLevelComplete_m4103077205 (TimedTileController_t3243845658 * __this, const RuntimeMethod* method)
{
	{
		__this->set_levelInfo_4((LevelInfo_t1513202700 *)NULL);
		return;
	}
}
// System.Void TimedTileController::OnGridUpdate(Notification)
extern "C"  void TimedTileController_OnGridUpdate_m772622604 (TimedTileController_t3243845658 * __this, Notification_t2099770324 * ___note0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TimedTileController_OnGridUpdate_m772622604_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		List_1_t4106232650 * L_0 = __this->get_timedTiles_3();
		NullCheck(L_0);
		int32_t L_1 = List_1_get_Count_m1405008821(L_0, /*hidden argument*/List_1_get_Count_m1405008821_RuntimeMethod_var);
		if (!L_1)
		{
			goto IL_001b;
		}
	}
	{
		LevelInfo_t1513202700 * L_2 = __this->get_levelInfo_4();
		if (L_2)
		{
			goto IL_001c;
		}
	}

IL_001b:
	{
		return;
	}

IL_001c:
	{
		Notification_t2099770324 * L_3 = ___note0;
		NullCheck(L_3);
		Hashtable_t1853889766 * L_4 = L_3->get_data_2();
		NullCheck(L_4);
		RuntimeObject * L_5 = VirtFuncInvoker1< RuntimeObject *, RuntimeObject * >::Invoke(21 /* System.Object System.Collections.Hashtable::get_Item(System.Object) */, L_4, _stringLiteral63249541);
		V_0 = ((*(int32_t*)((int32_t*)UnBox(L_5, Int32_t2950945753_il2cpp_TypeInfo_var))));
		int32_t L_6 = V_0;
		if (L_6)
		{
			goto IL_0039;
		}
	}
	{
		return;
	}

IL_0039:
	{
		int32_t L_7 = V_0;
		int32_t L_8 = __this->get_rotateDelay_5();
		if (((int32_t)((int32_t)L_7%(int32_t)L_8)))
		{
			goto IL_008f;
		}
	}
	{
		TileController_t1073589649 * L_9 = __this->get_tileController_2();
		List_1_t4106232650 * L_10 = __this->get_timedTiles_3();
		int32_t L_11 = __this->get_toRotateIndex_6();
		NullCheck(L_10);
		Tile_t2634157908 * L_12 = List_1_get_Item_m2624909818(L_10, L_11, /*hidden argument*/List_1_get_Item_m2624909818_RuntimeMethod_var);
		NullCheck(L_9);
		TileController_RotateTile_m2881787778(L_9, L_12, /*hidden argument*/NULL);
		List_1_t4106232650 * L_13 = __this->get_timedTiles_3();
		NullCheck(L_13);
		int32_t L_14 = List_1_get_Count_m1405008821(L_13, /*hidden argument*/List_1_get_Count_m1405008821_RuntimeMethod_var);
		if ((((int32_t)L_14) <= ((int32_t)1)))
		{
			goto IL_008f;
		}
	}
	{
		int32_t L_15 = __this->get_toRotateIndex_6();
		List_1_t4106232650 * L_16 = __this->get_timedTiles_3();
		NullCheck(L_16);
		int32_t L_17 = List_1_get_Count_m1405008821(L_16, /*hidden argument*/List_1_get_Count_m1405008821_RuntimeMethod_var);
		__this->set_toRotateIndex_6(((int32_t)((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_15, (int32_t)1))%(int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_17, (int32_t)1)))));
	}

IL_008f:
	{
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void TutorialController::.ctor()
extern "C"  void TutorialController__ctor_m3440229000 (TutorialController_t1549000916 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_m1579109191(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void TutorialController::Start()
extern "C"  void TutorialController_Start_m988841314 (TutorialController_t1549000916 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TutorialController_Start_m988841314_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		NotificationCenter_t2218695229 * L_0 = NotificationCenter_get_DefaultCenter_m4216969841(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_0);
		NotificationCenter_AddObserver_m3680884127(L_0, __this, _stringLiteral2286385673, /*hidden argument*/NULL);
		NotificationCenter_t2218695229 * L_1 = NotificationCenter_get_DefaultCenter_m4216969841(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_1);
		NotificationCenter_AddObserver_m3680884127(L_1, __this, _stringLiteral2430327460, /*hidden argument*/NULL);
		V_0 = 0;
		goto IL_003e;
	}

IL_0027:
	{
		SpriteFaderU5BU5D_t3833479231* L_2 = __this->get_tutorials_2();
		int32_t L_3 = V_0;
		NullCheck(L_2);
		int32_t L_4 = L_3;
		SpriteFader_t713818650 * L_5 = (L_2)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		NullCheck(L_5);
		GameObject_t1113636619 * L_6 = Component_get_gameObject_m442555142(L_5, /*hidden argument*/NULL);
		NullCheck(L_6);
		GameObject_SetActive_m796801857(L_6, (bool)0, /*hidden argument*/NULL);
		int32_t L_7 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_7, (int32_t)1));
	}

IL_003e:
	{
		int32_t L_8 = V_0;
		SpriteFaderU5BU5D_t3833479231* L_9 = __this->get_tutorials_2();
		NullCheck(L_9);
		if ((((int32_t)L_8) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_9)->max_length)))))))
		{
			goto IL_0027;
		}
	}
	{
		return;
	}
}
// System.Void TutorialController::OnLevelStart(Notification)
extern "C"  void TutorialController_OnLevelStart_m1224771153 (TutorialController_t1549000916 * __this, Notification_t2099770324 * ___note0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TutorialController_OnLevelStart_m1224771153_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(GameController_t2330501625_il2cpp_TypeInfo_var);
		GameController_t2330501625 * L_0 = ((GameController_t2330501625_StaticFields*)il2cpp_codegen_static_fields_for(GameController_t2330501625_il2cpp_TypeInfo_var))->get_Instance_9();
		NullCheck(L_0);
		int32_t L_1 = L_0->get_LevelCount_11();
		__this->set_i_3(L_1);
		int32_t L_2 = __this->get_i_3();
		SpriteFaderU5BU5D_t3833479231* L_3 = __this->get_tutorials_2();
		NullCheck(L_3);
		if ((((int32_t)L_2) >= ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_3)->max_length)))))))
		{
			goto IL_003a;
		}
	}
	{
		SpriteFaderU5BU5D_t3833479231* L_4 = __this->get_tutorials_2();
		int32_t L_5 = __this->get_i_3();
		NullCheck(L_4);
		int32_t L_6 = L_5;
		SpriteFader_t713818650 * L_7 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		NullCheck(L_7);
		SpriteFader_FadeIn_m3207520779(L_7, (1.0f), /*hidden argument*/NULL);
	}

IL_003a:
	{
		return;
	}
}
// System.Void TutorialController::OnLevelComplete(Notification)
extern "C"  void TutorialController_OnLevelComplete_m2175162703 (TutorialController_t1549000916 * __this, Notification_t2099770324 * ___note0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_i_3();
		SpriteFaderU5BU5D_t3833479231* L_1 = __this->get_tutorials_2();
		NullCheck(L_1);
		if ((((int32_t)L_0) >= ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_1)->max_length)))))))
		{
			goto IL_002b;
		}
	}
	{
		SpriteFaderU5BU5D_t3833479231* L_2 = __this->get_tutorials_2();
		int32_t L_3 = __this->get_i_3();
		NullCheck(L_2);
		int32_t L_4 = L_3;
		SpriteFader_t713818650 * L_5 = (L_2)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		NullCheck(L_5);
		SpriteFader_FadeOut_m3444412511(L_5, (0.75f), (bool)1, /*hidden argument*/NULL);
	}

IL_002b:
	{
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UIManager::.ctor()
extern "C"  void UIManager__ctor_m873742767 (UIManager_t1042050227 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_m1579109191(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UIManager::Initialize()
extern "C"  void UIManager_Initialize_m1126019099 (UIManager_t1042050227 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UIManager_Initialize_m1126019099_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		NotificationCenter_t2218695229 * L_0 = NotificationCenter_get_DefaultCenter_m4216969841(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_0);
		NotificationCenter_AddObserver_m3680884127(L_0, __this, _stringLiteral2286385673, /*hidden argument*/NULL);
		NotificationCenter_t2218695229 * L_1 = NotificationCenter_get_DefaultCenter_m4216969841(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_1);
		NotificationCenter_AddObserver_m3680884127(L_1, __this, _stringLiteral2430327460, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UIManager::OnLevelStart(Notification)
extern "C"  void UIManager_OnLevelStart_m2596330756 (UIManager_t1042050227 * __this, Notification_t2099770324 * ___note0, const RuntimeMethod* method)
{
	{
		PauseMenu_t3916167947 * L_0 = __this->get_pauseMenu_4();
		NullCheck(L_0);
		PauseMenu_SetButtonEnabled_m2380140973(L_0, (bool)1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UIManager::OnLevelComplete(Notification)
extern "C"  void UIManager_OnLevelComplete_m2765243169 (UIManager_t1042050227 * __this, Notification_t2099770324 * ___note0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UIManager_OnLevelComplete_m2765243169_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		MonoBehaviour_Invoke_m4227543964(__this, _stringLiteral3984493053, (2.0f), /*hidden argument*/NULL);
		PauseMenu_t3916167947 * L_0 = __this->get_pauseMenu_4();
		NullCheck(L_0);
		PauseMenu_SetButtonEnabled_m2380140973(L_0, (bool)0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UIManager::ShowNextLevelUI()
extern "C"  void UIManager_ShowNextLevelUI_m1680362598 (UIManager_t1042050227 * __this, const RuntimeMethod* method)
{
	{
		PauseMenu_t3916167947 * L_0 = __this->get_pauseMenu_4();
		NullCheck(L_0);
		PauseMenu_Toggle_m2206255916(L_0, (bool)1, /*hidden argument*/NULL);
		AdManager_t2410889370 * L_1 = __this->get_adManager_3();
		NullCheck(L_1);
		AdManager_TryShowAd_m2034507698(L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UIManager::CurrentLevel()
extern "C"  void UIManager_CurrentLevel_m3445022911 (UIManager_t1042050227 * __this, const RuntimeMethod* method)
{
	{
		GameController_t2330501625 * L_0 = __this->get_gameController_2();
		NullCheck(L_0);
		GameController_StartCurrentLevel_m3542281468(L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UIManager::NextLevel()
extern "C"  void UIManager_NextLevel_m2604131019 (UIManager_t1042050227 * __this, const RuntimeMethod* method)
{
	{
		GameController_t2330501625 * L_0 = __this->get_gameController_2();
		NullCheck(L_0);
		GameController_StartNextLevel_m3220157239(L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UIManager::QuitLevel()
extern "C"  void UIManager_QuitLevel_m2861147962 (UIManager_t1042050227 * __this, const RuntimeMethod* method)
{
	{
		GameController_t2330501625 * L_0 = __this->get_gameController_2();
		NullCheck(L_0);
		GameController_QuitLevel_m1934953300(L_0, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void WorldController::.ctor()
extern "C"  void WorldController__ctor_m2401813632 (WorldController_t23517691 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_m1579109191(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void WorldController::Initialize(TileController)
extern "C"  void WorldController_Initialize_m831189363 (WorldController_t23517691 * __this, TileController_t1073589649 * ___tileController0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WorldController_Initialize_m831189363_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		TileController_t1073589649 * L_0 = ___tileController0;
		__this->set_tileController_4(L_0);
		NotificationCenter_t2218695229 * L_1 = NotificationCenter_get_DefaultCenter_m4216969841(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_1);
		NotificationCenter_AddObserver_m3680884127(L_1, __this, _stringLiteral283385980, /*hidden argument*/NULL);
		NotificationCenter_t2218695229 * L_2 = NotificationCenter_get_DefaultCenter_m4216969841(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_2);
		NotificationCenter_AddObserver_m3680884127(L_2, __this, _stringLiteral2430327460, /*hidden argument*/NULL);
		return;
	}
}
// System.Void WorldController::InitializeLevel(LevelInfo)
extern "C"  void WorldController_InitializeLevel_m509353978 (WorldController_t23517691 * __this, LevelInfo_t1513202700 * ___levelInfo0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WorldController_InitializeLevel_m509353978_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Hashtable_t1853889766 * V_0 = NULL;
	Hashtable_t1853889766 * V_1 = NULL;
	{
		LevelInfo_t1513202700 * L_0 = ___levelInfo0;
		__this->set_currentLevel_8(L_0);
		__this->set_levelEnded_9((bool)0);
		LevelInfo_t1513202700 * L_1 = ___levelInfo0;
		NullCheck(L_1);
		int32_t L_2 = LevelInfo_get_Width_m854074050(L_1, /*hidden argument*/NULL);
		__this->set_halfGridWidth_6(((float)((float)(((float)((float)((int32_t)il2cpp_codegen_subtract((int32_t)L_2, (int32_t)1)))))/(float)(2.0f))));
		LevelInfo_t1513202700 * L_3 = ___levelInfo0;
		NullCheck(L_3);
		int32_t L_4 = LevelInfo_get_Height_m1243796757(L_3, /*hidden argument*/NULL);
		__this->set_halfGridHeight_7(((float)((float)(((float)((float)((int32_t)il2cpp_codegen_subtract((int32_t)L_4, (int32_t)1)))))/(float)(2.0f))));
		SpriteRenderer_t3235626157 * L_5 = __this->get_background_3();
		LevelInfo_t1513202700 * L_6 = ___levelInfo0;
		NullCheck(L_6);
		int32_t L_7 = LevelInfo_get_Width_m854074050(L_6, /*hidden argument*/NULL);
		LevelInfo_t1513202700 * L_8 = ___levelInfo0;
		NullCheck(L_8);
		int32_t L_9 = LevelInfo_get_Height_m1243796757(L_8, /*hidden argument*/NULL);
		Vector2_t2156229523  L_10;
		memset(&L_10, 0, sizeof(L_10));
		Vector2__ctor_m3970636864((&L_10), ((float)il2cpp_codegen_add((float)(((float)((float)L_7))), (float)(1.0f))), ((float)il2cpp_codegen_add((float)(((float)((float)L_9))), (float)(1.0f))), /*hidden argument*/NULL);
		NullCheck(L_5);
		SpriteRenderer_set_size_m3853552092(L_5, L_10, /*hidden argument*/NULL);
		SpriteRenderer_t3235626157 * L_11 = __this->get_background_3();
		NullCheck(L_11);
		Renderer_set_enabled_m1727253150(L_11, (bool)1, /*hidden argument*/NULL);
		LevelInfo_t1513202700 * L_12 = ___levelInfo0;
		TileGrid_t3345275584 * L_13 = (TileGrid_t3345275584 *)il2cpp_codegen_object_new(TileGrid_t3345275584_il2cpp_TypeInfo_var);
		TileGrid__ctor_m2946651068(L_13, L_12, /*hidden argument*/NULL);
		__this->set_tileGrid_5(L_13);
		TileGrid_t3345275584 * L_14 = __this->get_tileGrid_5();
		NullCheck(L_14);
		TileU5BU5D_t3330163933* L_15 = TileGrid_get_Lamps_m4230366176(L_14, /*hidden argument*/NULL);
		NullCheck(L_15);
		if ((((int32_t)((int32_t)(((RuntimeArray *)L_15)->max_length)))))
		{
			goto IL_0094;
		}
	}
	{
		LevelInfo_t1513202700 * L_16 = ___levelInfo0;
		WorldController_InitializeLevel_m509353978(__this, L_16, /*hidden argument*/NULL);
		return;
	}

IL_0094:
	{
		TileGrid_t3345275584 * L_17 = __this->get_tileGrid_5();
		NullCheck(L_17);
		TileGrid_UpdateTilePower_m3239097173(L_17, /*hidden argument*/NULL);
		TileController_t1073589649 * L_18 = __this->get_tileController_4();
		TileGrid_t3345275584 * L_19 = __this->get_tileGrid_5();
		Transform_t3600365921 * L_20 = __this->get_environmentRoot_2();
		NullCheck(L_18);
		TileController_CreateTiles_m1433907476(L_18, L_19, L_20, /*hidden argument*/NULL);
		TileController_t1073589649 * L_21 = __this->get_tileController_4();
		TileGrid_t3345275584 * L_22 = __this->get_tileGrid_5();
		NullCheck(L_21);
		TileController_UpdateTileVisuals_m3550407352(L_21, L_22, /*hidden argument*/NULL);
		Hashtable_t1853889766 * L_23 = (Hashtable_t1853889766 *)il2cpp_codegen_object_new(Hashtable_t1853889766_il2cpp_TypeInfo_var);
		Hashtable__ctor_m1815022027(L_23, /*hidden argument*/NULL);
		V_1 = L_23;
		Hashtable_t1853889766 * L_24 = V_1;
		LevelInfo_t1513202700 * L_25 = ___levelInfo0;
		NullCheck(L_24);
		VirtActionInvoker2< RuntimeObject *, RuntimeObject * >::Invoke(24 /* System.Void System.Collections.Hashtable::Add(System.Object,System.Object) */, L_24, _stringLiteral1232840130, L_25);
		Hashtable_t1853889766 * L_26 = V_1;
		TileGrid_t3345275584 * L_27 = __this->get_tileGrid_5();
		NullCheck(L_26);
		VirtActionInvoker2< RuntimeObject *, RuntimeObject * >::Invoke(24 /* System.Void System.Collections.Hashtable::Add(System.Object,System.Object) */, L_26, _stringLiteral2340450262, L_27);
		Hashtable_t1853889766 * L_28 = V_1;
		V_0 = L_28;
		NotificationCenter_t2218695229 * L_29 = NotificationCenter_get_DefaultCenter_m4216969841(NULL /*static, unused*/, /*hidden argument*/NULL);
		Hashtable_t1853889766 * L_30 = V_0;
		NullCheck(L_29);
		NotificationCenter_PostNotification_m2114245645(L_29, __this, _stringLiteral2286385673, L_30, /*hidden argument*/NULL);
		MonoBehaviour_CancelInvoke_m4090783926(__this, /*hidden argument*/NULL);
		__this->set_timeSinceLevelStart_10(0);
		MonoBehaviour_InvokeRepeating_m650519629(__this, _stringLiteral2512479461, (0.0f), (1.0f), /*hidden argument*/NULL);
		return;
	}
}
// System.Void WorldController::DestroyLevel()
extern "C"  void WorldController_DestroyLevel_m2759154792 (WorldController_t23517691 * __this, const RuntimeMethod* method)
{
	{
		__this->set_levelEnded_9((bool)1);
		SpriteRenderer_t3235626157 * L_0 = __this->get_background_3();
		NullCheck(L_0);
		Renderer_set_enabled_m1727253150(L_0, (bool)0, /*hidden argument*/NULL);
		MonoBehaviour_CancelInvoke_m4090783926(__this, /*hidden argument*/NULL);
		TileController_t1073589649 * L_1 = __this->get_tileController_4();
		NullCheck(L_1);
		TileController_ClearTileGameObjects_m540467540(L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void WorldController::OnLevelComplete()
extern "C"  void WorldController_OnLevelComplete_m1095637084 (WorldController_t23517691 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Void WorldController::UpdateBoard()
extern "C"  void WorldController_UpdateBoard_m3954357331 (WorldController_t23517691 * __this, const RuntimeMethod* method)
{
	{
		TileGrid_t3345275584 * L_0 = __this->get_tileGrid_5();
		if (L_0)
		{
			goto IL_000c;
		}
	}
	{
		return;
	}

IL_000c:
	{
		TileController_t1073589649 * L_1 = __this->get_tileController_4();
		TileGrid_t3345275584 * L_2 = __this->get_tileGrid_5();
		NullCheck(L_1);
		TileController_UpdateTiles_m1627070111(L_1, L_2, /*hidden argument*/NULL);
		WorldController_CheckForVictory_m1888888687(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void WorldController::GridUpdate()
extern "C"  void WorldController_GridUpdate_m2341492780 (WorldController_t23517691 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WorldController_GridUpdate_m2341492780_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Hashtable_t1853889766 * V_0 = NULL;
	Hashtable_t1853889766 * V_1 = NULL;
	{
		TileGrid_t3345275584 * L_0 = __this->get_tileGrid_5();
		if (L_0)
		{
			goto IL_000c;
		}
	}
	{
		return;
	}

IL_000c:
	{
		Hashtable_t1853889766 * L_1 = (Hashtable_t1853889766 *)il2cpp_codegen_object_new(Hashtable_t1853889766_il2cpp_TypeInfo_var);
		Hashtable__ctor_m1815022027(L_1, /*hidden argument*/NULL);
		V_1 = L_1;
		Hashtable_t1853889766 * L_2 = V_1;
		int32_t L_3 = __this->get_timeSinceLevelStart_10();
		int32_t L_4 = L_3;
		RuntimeObject * L_5 = Box(Int32_t2950945753_il2cpp_TypeInfo_var, &L_4);
		NullCheck(L_2);
		VirtActionInvoker2< RuntimeObject *, RuntimeObject * >::Invoke(24 /* System.Void System.Collections.Hashtable::Add(System.Object,System.Object) */, L_2, _stringLiteral63249541, L_5);
		Hashtable_t1853889766 * L_6 = V_1;
		V_0 = L_6;
		NotificationCenter_t2218695229 * L_7 = NotificationCenter_get_DefaultCenter_m4216969841(NULL /*static, unused*/, /*hidden argument*/NULL);
		Hashtable_t1853889766 * L_8 = V_0;
		NullCheck(L_7);
		NotificationCenter_PostNotification_m2114245645(L_7, __this, _stringLiteral2106178105, L_8, /*hidden argument*/NULL);
		int32_t L_9 = __this->get_timeSinceLevelStart_10();
		__this->set_timeSinceLevelStart_10(((int32_t)il2cpp_codegen_add((int32_t)L_9, (int32_t)1)));
		return;
	}
}
// System.Void WorldController::CheckForVictory()
extern "C"  void WorldController_CheckForVictory_m1888888687 (WorldController_t23517691 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WorldController_CheckForVictory_m1888888687_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	TileU5BU5D_t3330163933* V_0 = NULL;
	bool V_1 = false;
	int32_t V_2 = 0;
	Hashtable_t1853889766 * V_3 = NULL;
	Hashtable_t1853889766 * V_4 = NULL;
	{
		TileGrid_t3345275584 * L_0 = __this->get_tileGrid_5();
		NullCheck(L_0);
		TileU5BU5D_t3330163933* L_1 = TileGrid_get_Lamps_m4230366176(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		TileU5BU5D_t3330163933* L_2 = V_0;
		NullCheck(L_2);
		if ((((int32_t)((int32_t)(((RuntimeArray *)L_2)->max_length)))))
		{
			goto IL_001f;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t3317548046_il2cpp_TypeInfo_var);
		Debug_LogError_m2850623458(NULL /*static, unused*/, _stringLiteral3252941476, /*hidden argument*/NULL);
		return;
	}

IL_001f:
	{
		TileController_t1073589649 * L_3 = __this->get_tileController_4();
		NullCheck(L_3);
		bool L_4 = TileController_IsRotatingTiles_m2868273090(L_3, /*hidden argument*/NULL);
		if (L_4)
		{
			goto IL_0099;
		}
	}
	{
		V_1 = (bool)1;
		V_2 = 0;
		goto IL_004b;
	}

IL_0038:
	{
		TileU5BU5D_t3330163933* L_5 = V_0;
		int32_t L_6 = V_2;
		NullCheck(L_5);
		int32_t L_7 = L_6;
		Tile_t2634157908 * L_8 = (L_5)->GetAt(static_cast<il2cpp_array_size_t>(L_7));
		NullCheck(L_8);
		bool L_9 = L_8->get_IsPowered_5();
		if (L_9)
		{
			goto IL_0047;
		}
	}
	{
		V_1 = (bool)0;
	}

IL_0047:
	{
		int32_t L_10 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_10, (int32_t)1));
	}

IL_004b:
	{
		int32_t L_11 = V_2;
		TileU5BU5D_t3330163933* L_12 = V_0;
		NullCheck(L_12);
		if ((((int32_t)L_11) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_12)->max_length)))))))
		{
			goto IL_0038;
		}
	}
	{
		bool L_13 = V_1;
		if (!L_13)
		{
			goto IL_0099;
		}
	}
	{
		bool L_14 = __this->get_levelEnded_9();
		if (L_14)
		{
			goto IL_0099;
		}
	}
	{
		__this->set_levelEnded_9((bool)1);
		Hashtable_t1853889766 * L_15 = (Hashtable_t1853889766 *)il2cpp_codegen_object_new(Hashtable_t1853889766_il2cpp_TypeInfo_var);
		Hashtable__ctor_m1815022027(L_15, /*hidden argument*/NULL);
		V_4 = L_15;
		Hashtable_t1853889766 * L_16 = V_4;
		LevelInfo_t1513202700 * L_17 = __this->get_currentLevel_8();
		NullCheck(L_16);
		VirtActionInvoker2< RuntimeObject *, RuntimeObject * >::Invoke(24 /* System.Void System.Collections.Hashtable::Add(System.Object,System.Object) */, L_16, _stringLiteral1232840130, L_17);
		Hashtable_t1853889766 * L_18 = V_4;
		V_3 = L_18;
		NotificationCenter_t2218695229 * L_19 = NotificationCenter_get_DefaultCenter_m4216969841(NULL /*static, unused*/, /*hidden argument*/NULL);
		Hashtable_t1853889766 * L_20 = V_3;
		NullCheck(L_19);
		NotificationCenter_PostNotification_m2114245645(L_19, __this, _stringLiteral2430327460, L_20, /*hidden argument*/NULL);
	}

IL_0099:
	{
		return;
	}
}
// System.Void WorldController::Input_OnWorldClick(Notification)
extern "C"  void WorldController_Input_OnWorldClick_m3683419441 (WorldController_t23517691 * __this, Notification_t2099770324 * ___note0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WorldController_Input_OnWorldClick_m3683419441_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t3722313464  V_0;
	memset(&V_0, 0, sizeof(V_0));
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	Tile_t2634157908 * V_3 = NULL;
	{
		Notification_t2099770324 * L_0 = ___note0;
		NullCheck(L_0);
		Hashtable_t1853889766 * L_1 = L_0->get_data_2();
		NullCheck(L_1);
		RuntimeObject * L_2 = VirtFuncInvoker1< RuntimeObject *, RuntimeObject * >::Invoke(21 /* System.Object System.Collections.Hashtable::get_Item(System.Object) */, L_1, _stringLiteral33228063);
		V_0 = ((*(Vector3_t3722313464 *)((Vector3_t3722313464 *)UnBox(L_2, Vector3_t3722313464_il2cpp_TypeInfo_var))));
		float L_3 = (&V_0)->get_x_1();
		float L_4 = __this->get_halfGridWidth_6();
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t3464937446_il2cpp_TypeInfo_var);
		int32_t L_5 = Mathf_RoundToInt_m1874334613(NULL /*static, unused*/, ((float)il2cpp_codegen_add((float)L_3, (float)L_4)), /*hidden argument*/NULL);
		V_1 = L_5;
		float L_6 = (&V_0)->get_y_2();
		float L_7 = __this->get_halfGridHeight_7();
		int32_t L_8 = Mathf_RoundToInt_m1874334613(NULL /*static, unused*/, ((float)il2cpp_codegen_add((float)L_6, (float)L_7)), /*hidden argument*/NULL);
		V_2 = L_8;
		TileGrid_t3345275584 * L_9 = __this->get_tileGrid_5();
		NullCheck(L_9);
		TileU5B0___U2C0___U5D_t3330163934* L_10 = TileGrid_get_Tiles_m2970482344(L_9, /*hidden argument*/NULL);
		int32_t L_11 = V_1;
		int32_t L_12 = V_2;
		NullCheck(L_10);
		Tile_t2634157908 * L_13 = (L_10)->GetAt(L_11, L_12);
		V_3 = L_13;
		int32_t L_14 = V_1;
		if ((((int32_t)L_14) < ((int32_t)0)))
		{
			goto IL_0085;
		}
	}
	{
		int32_t L_15 = V_1;
		TileGrid_t3345275584 * L_16 = __this->get_tileGrid_5();
		NullCheck(L_16);
		int32_t L_17 = TileGrid_get_Width_m2046657162(L_16, /*hidden argument*/NULL);
		if ((((int32_t)L_15) > ((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_17, (int32_t)1)))))
		{
			goto IL_0085;
		}
	}
	{
		int32_t L_18 = V_2;
		if ((((int32_t)L_18) < ((int32_t)0)))
		{
			goto IL_0085;
		}
	}
	{
		int32_t L_19 = V_2;
		TileGrid_t3345275584 * L_20 = __this->get_tileGrid_5();
		NullCheck(L_20);
		int32_t L_21 = TileGrid_get_Height_m1447994140(L_20, /*hidden argument*/NULL);
		if ((((int32_t)L_19) <= ((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_21, (int32_t)1)))))
		{
			goto IL_0086;
		}
	}

IL_0085:
	{
		return;
	}

IL_0086:
	{
		Tile_t2634157908 * L_22 = V_3;
		NullCheck(L_22);
		int32_t L_23 = Tile_get_tileType_m4198153530(L_22, /*hidden argument*/NULL);
		if (!L_23)
		{
			goto IL_0092;
		}
	}
	{
		return;
	}

IL_0092:
	{
		TileController_t1073589649 * L_24 = __this->get_tileController_4();
		Tile_t2634157908 * L_25 = V_3;
		NullCheck(L_24);
		TileController_RotateTile_m2881787778(L_24, L_25, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif

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

template <typename R>
struct VirtFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
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
template <typename R, typename T1, typename T2>
struct VirtFuncInvoker2
{
	typedef R (*Func)(void*, T1, T2, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename R>
struct InterfaceFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
struct InterfaceActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};

// AlgorithmChooser
struct AlgorithmChooser_t2834305195;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t3962482529;
// UnityEngine.Component
struct Component_t1923634451;
// UnityEngine.UI.Dropdown
struct Dropdown_t2274391225;
// System.Collections.Generic.List`1<UnityEngine.UI.Dropdown/OptionData>
struct List_1_t447389798;
// UnityEngine.UI.Dropdown/OptionData
struct OptionData_t3270282352;
// System.String
struct String_t;
// System.Collections.Generic.List`1<System.Object>
struct List_1_t257213610;
// System.Type
struct Type_t;
// System.Collections.Generic.IEnumerable`1<AlgorithmChooser/AlgorithmType>
struct IEnumerable_1_t3919670480;
// System.Collections.IEnumerable
struct IEnumerable_t1941168011;
// CheckMesh
struct CheckMesh_t3175980401;
// UnityEngine.MeshFilter
struct MeshFilter_t3523625662;
// UnityEngine.Mesh
struct Mesh_t3648964284;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_t1718750761;
// System.Int32[]
struct Int32U5BU5D_t385246372;
// Junction
struct Junction_t651368113;
// System.String[]
struct StringU5BU5D_t1281789340;
// System.Char[]
struct CharU5BU5D_t3528271667;
// System.Collections.Generic.List`1<System.String>
struct List_1_t3319525431;
// System.Collections.Generic.IEnumerable`1<System.String>
struct IEnumerable_1_t827303578;
// System.Collections.Generic.IEnumerable`1<System.Object>
struct IEnumerable_1_t2059959053;
// Lane
struct Lane_t3796433026;
// System.Collections.Generic.List`1<UnityEngine.LineRenderer>
struct List_1_t331457716;
// UnityEngine.LineRenderer
struct LineRenderer_t3154350270;
// MapAndSimulationChangeButton
struct MapAndSimulationChangeButton_t3111073902;
// MapXmlParser
struct MapXmlParser_t3144498968;
// SimulationXmlParser
struct SimulationXmlParser_t3990157828;
// MapChooser
struct MapChooser_t1481971204;
// UnityEngine.EventSystems.PointerEventData
struct PointerEventData_t3807901092;
// UnityEngine.UI.InputField
struct InputField_t3762917431;
// UnityEngine.GameObject
struct GameObject_t1113636619;
// System.Collections.Generic.List`1<Lane>
struct List_1_t973540472;
// System.Collections.Generic.List`1<Junction>
struct List_1_t2123442855;
// System.Xml.XmlDocument
struct XmlDocument_t2837193595;
// System.Xml.XmlAttributeCollection
struct XmlAttributeCollection_t2316283784;
// System.Xml.XmlAttribute
struct XmlAttribute_t1173852259;
// System.Collections.Generic.List`1<UnityEngine.Vector3>
struct List_1_t899420910;
// UnityEngine.Camera
struct Camera_t4157153871;
// UnityEngine.Transform
struct Transform_t3600365921;
// System.Collections.Generic.List`1<System.Int32>
struct List_1_t128053199;
// System.Collections.Generic.IEnumerable`1<UnityEngine.Vector3>
struct IEnumerable_1_t2702166353;
// UnityEngine.UI.Button
struct Button_t4055032469;
// UnityEngine.UI.Button/ButtonClickedEvent
struct ButtonClickedEvent_t48803504;
// UnityEngine.Events.UnityAction
struct UnityAction_t3245792599;
// UnityEngine.Events.UnityEvent
struct UnityEvent_t2581268647;
// UnityEngine.Events.UnityEventBase
struct UnityEventBase_t3960448221;
// UnityEngine.UI.Text
struct Text_t1901882714;
// System.Collections.Generic.List`1<UnityEngine.GameObject>
struct List_1_t2585711361;
// Vehicle
struct Vehicle_t3024892526;
// System.Xml.XmlNode
struct XmlNode_t3767805227;
// UnityEngine.Object
struct Object_t631007953;
// SimulationXmlParser/<determineLight>c__AnonStorey0
struct U3CdetermineLightU3Ec__AnonStorey0_t2577330775;
// System.Predicate`1<Junction>
struct Predicate_1_t1476662237;
// System.Predicate`1<System.Object>
struct Predicate_1_t3905400288;
// SimulationXmlParser/<determineLight>c__AnonStorey1
struct U3CdetermineLightU3Ec__AnonStorey1_t2577396311;
// System.Predicate`1<Lane>
struct Predicate_1_t326759854;
// UnityEngine.Renderer
struct Renderer_t2627027031;
// UnityEngine.Material
struct Material_t340375123;
// System.Random
struct Random_t108471755;
// System.Xml.XmlNode/EmptyNodeList
struct EmptyNodeList_t139615908;
// System.Xml.XmlNodeListChildren
struct XmlNodeListChildren_t1082692789;
// System.Collections.Generic.Dictionary`2<System.String,System.Int32>
struct Dictionary_2_t2736202052;
// UnityEngine.LineRenderer[]
struct LineRendererU5BU5D_t976293515;
// Junction[]
struct JunctionU5BU5D_t1338665836;
// UnityEngine.UI.Dropdown/OptionData[]
struct OptionDataU5BU5D_t3600483281;
// UnityEngine.GameObject[]
struct GameObjectU5BU5D_t3328599146;
// UnityEngine.Sprite
struct Sprite_t280657092;
// System.Collections.IEnumerator
struct IEnumerator_t1853284238;
// System.Collections.ArrayList
struct ArrayList_t2718874744;
// UnityEngine.Events.InvokableCallList
struct InvokableCallList_t2498835369;
// UnityEngine.Events.PersistentCallGroup
struct PersistentCallGroup_t3050769227;
// Lane[]
struct LaneU5BU5D_t2829245239;
// System.Object[]
struct ObjectU5BU5D_t2843939325;
// System.Void
struct Void_t1185182177;
// System.Xml.XmlNameEntry
struct XmlNameEntry_t1073099671;
// System.Xml.XmlLinkedNode
struct XmlLinkedNode_t1437094927;
// System.Xml.Schema.IXmlSchemaInfo
struct IXmlSchemaInfo_t934654762;
// System.Xml.XmlElement
struct XmlElement_t561603118;
// System.Type[]
struct TypeU5BU5D_t3940880105;
// System.Xml.XmlNameTable
struct XmlNameTable_t71772148;
// System.Xml.XmlImplementation
struct XmlImplementation_t254178875;
// System.Xml.XmlResolver
struct XmlResolver_t626023767;
// System.Collections.Hashtable
struct Hashtable_t1853889766;
// System.Xml.XmlNameEntryCache
struct XmlNameEntryCache_t2890546907;
// System.Xml.Schema.XmlSchemaSet
struct XmlSchemaSet_t266093086;
// System.Xml.XmlNodeChangedEventHandler
struct XmlNodeChangedEventHandler_t1533444722;
// UnityEngine.EventSystems.EventSystem
struct EventSystem_t1003666588;
// System.Byte
struct Byte_t1134296376;
// System.Double
struct Double_t594665363;
// System.UInt16
struct UInt16_t2177724958;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.DelegateData
struct DelegateData_t1677132599;
// UnityEngine.EventSystems.BaseRaycaster
struct BaseRaycaster_t4150874583;
// UnityEngine.UI.Selectable
struct Selectable_t3250028441;
// System.Reflection.MemberFilter
struct MemberFilter_t426314064;
// System.IAsyncResult
struct IAsyncResult_t767004451;
// System.AsyncCallback
struct AsyncCallback_t3962456242;
// UnityEngine.Camera/CameraCallback
struct CameraCallback_t190067161;
// System.Xml.XmlNodeList
struct XmlNodeList_t2551693786;
// System.Collections.Generic.List`1<UnityEngine.UI.Selectable>
struct List_1_t427135887;
// UnityEngine.UI.AnimationTriggers
struct AnimationTriggers_t2532145056;
// UnityEngine.UI.Graphic
struct Graphic_t1660335611;
// System.Collections.Generic.List`1<UnityEngine.CanvasGroup>
struct List_1_t1260619206;
// UnityEngine.Texture2D
struct Texture2D_t3840446185;
// UnityEngine.RectTransform
struct RectTransform_t3704657025;
// UnityEngine.CanvasRenderer
struct CanvasRenderer_t2598313366;
// UnityEngine.Canvas
struct Canvas_t3310196443;
// UnityEngine.UI.VertexHelper
struct VertexHelper_t2453304189;
// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween>
struct TweenRunner_1_t3055525458;
// UnityEngine.UI.RectMask2D
struct RectMask2D_t3474889437;
// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent
struct CullStateChangedEvent_t3661388177;
// UnityEngine.UI.Image
struct Image_t2670269651;
// UnityEngine.UI.Dropdown/OptionDataList
struct OptionDataList_t1438173104;
// UnityEngine.UI.Dropdown/DropdownEvent
struct DropdownEvent_t4040729994;
// System.Collections.Generic.List`1<UnityEngine.UI.Dropdown/DropdownItem>
struct List_1_t2924027637;
// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.FloatTween>
struct TweenRunner_1_t3520241082;
// UnityEngine.TouchScreenKeyboard
struct TouchScreenKeyboard_t731888065;
// UnityEngine.UI.InputField/SubmitEvent
struct SubmitEvent_t648412432;
// UnityEngine.UI.InputField/OnChangeEvent
struct OnChangeEvent_t467195904;
// UnityEngine.UI.InputField/OnValidateInput
struct OnValidateInput_t2355412304;
// UnityEngine.UIVertex[]
struct UIVertexU5BU5D_t1981460040;
// UnityEngine.TextGenerator
struct TextGenerator_t3211863866;
// UnityEngine.Coroutine
struct Coroutine_t3829159415;
// UnityEngine.Event
struct Event_t2956885303;
// UnityEngine.UI.FontData
struct FontData_t746620069;

extern const RuntimeType* AlgorithmType_t644850295_0_0_0_var;
extern RuntimeClass* OptionData_t3270282352_il2cpp_TypeInfo_var;
extern RuntimeClass* Type_t_il2cpp_TypeInfo_var;
extern RuntimeClass* Enum_t4135868527_il2cpp_TypeInfo_var;
extern RuntimeClass* AlgorithmType_t644850295_il2cpp_TypeInfo_var;
extern const RuntimeMethod* Component_GetComponent_TisDropdown_t2274391225_m1954154383_RuntimeMethod_var;
extern const RuntimeMethod* List_1_Add_m3700962105_RuntimeMethod_var;
extern const RuntimeMethod* Enumerable_Cast_TisAlgorithmType_t644850295_m717376125_RuntimeMethod_var;
extern const RuntimeMethod* Enumerable_ElementAt_TisAlgorithmType_t644850295_m1012687098_RuntimeMethod_var;
extern const RuntimeMethod* Enumerable_Count_TisAlgorithmType_t644850295_m3970683133_RuntimeMethod_var;
extern String_t* _stringLiteral2632576235;
extern const uint32_t AlgorithmChooser_Start_m1995924704_MetadataUsageId;
extern RuntimeClass* AlgorithmChooser_t2834305195_il2cpp_TypeInfo_var;
extern const uint32_t AlgorithmChooser_onChange_m578937384_MetadataUsageId;
extern RuntimeClass* Mesh_t3648964284_il2cpp_TypeInfo_var;
extern RuntimeClass* Vector3U5BU5D_t1718750761_il2cpp_TypeInfo_var;
extern RuntimeClass* Int32U5BU5D_t385246372_il2cpp_TypeInfo_var;
extern RuntimeClass* Vector3_t3722313464_il2cpp_TypeInfo_var;
extern const RuntimeMethod* Component_GetComponent_TisMeshFilter_t3523625662_m1718783796_RuntimeMethod_var;
extern const uint32_t CheckMesh_Start_m2059452952_MetadataUsageId;
extern RuntimeClass* CharU5BU5D_t3528271667_il2cpp_TypeInfo_var;
extern RuntimeClass* List_1_t3319525431_il2cpp_TypeInfo_var;
extern const RuntimeMethod* List_1__ctor_m864250344_RuntimeMethod_var;
extern const uint32_t Junction__ctor_m2256413868_MetadataUsageId;
extern RuntimeClass* List_1_t331457716_il2cpp_TypeInfo_var;
extern const RuntimeMethod* List_1__ctor_m1710227863_RuntimeMethod_var;
extern const uint32_t Lane__ctor_m715788684_MetadataUsageId;
extern const RuntimeMethod* List_1_Add_m2439754159_RuntimeMethod_var;
extern const uint32_t Lane_addLine_m2539890349_MetadataUsageId;
extern String_t* _stringLiteral638743437;
extern const uint32_t MapAndSimulationChangeButton_getPathFromType_m1713043568_MetadataUsageId;
extern RuntimeClass* Debug_t3317548046_il2cpp_TypeInfo_var;
extern RuntimeClass* MapChooser_t1481971204_il2cpp_TypeInfo_var;
extern String_t* _stringLiteral3092710847;
extern String_t* _stringLiteral1903018118;
extern String_t* _stringLiteral3092710827;
extern const uint32_t MapAndSimulationChangeButton_onClick_m3647358106_MetadataUsageId;
extern RuntimeClass* String_t_il2cpp_TypeInfo_var;
extern RuntimeClass* Boolean_t97287965_il2cpp_TypeInfo_var;
extern RuntimeClass* Path_t1605229823_il2cpp_TypeInfo_var;
extern String_t* _stringLiteral249465722;
extern String_t* _stringLiteral2058722228;
extern String_t* _stringLiteral1269782862;
extern String_t* _stringLiteral2058656692;
extern String_t* _stringLiteral2998221401;
extern String_t* _stringLiteral2058591156;
extern String_t* _stringLiteral132419186;
extern String_t* _stringLiteral2058525620;
extern String_t* _stringLiteral607675389;
extern String_t* _stringLiteral1874753564;
extern String_t* _stringLiteral3452614530;
extern String_t* _stringLiteral355807170;
extern const uint32_t MapChooser_OnPointerClick_m891393910_MetadataUsageId;
extern const RuntimeMethod* Component_GetComponent_TisInputField_t3762917431_m3342128916_RuntimeMethod_var;
extern const uint32_t MapChooser_Start_m854486562_MetadataUsageId;
extern RuntimeClass* List_1_t973540472_il2cpp_TypeInfo_var;
extern RuntimeClass* List_1_t2123442855_il2cpp_TypeInfo_var;
extern const RuntimeMethod* GameObject_GetComponent_TisMeshFilter_t3523625662_m3102725183_RuntimeMethod_var;
extern const RuntimeMethod* List_1__ctor_m3427140098_RuntimeMethod_var;
extern const RuntimeMethod* List_1__ctor_m2010698488_RuntimeMethod_var;
extern const uint32_t MapXmlParser_Start_m3101452522_MetadataUsageId;
extern RuntimeClass* XmlDocument_t2837193595_il2cpp_TypeInfo_var;
extern const uint32_t MapXmlParser_parseMap_m784539563_MetadataUsageId;
extern RuntimeClass* IEnumerator_t1853284238_il2cpp_TypeInfo_var;
extern RuntimeClass* XmlNode_t3767805227_il2cpp_TypeInfo_var;
extern RuntimeClass* List_1_t899420910_il2cpp_TypeInfo_var;
extern RuntimeClass* Lane_t3796433026_il2cpp_TypeInfo_var;
extern RuntimeClass* Object_t631007953_il2cpp_TypeInfo_var;
extern RuntimeClass* IDisposable_t3640265483_il2cpp_TypeInfo_var;
extern const RuntimeMethod* List_1__ctor_m1536473967_RuntimeMethod_var;
extern const RuntimeMethod* List_1_Add_m1524640104_RuntimeMethod_var;
extern const RuntimeMethod* List_1_get_Item_m200663048_RuntimeMethod_var;
extern const RuntimeMethod* Object_Instantiate_TisLineRenderer_t3154350270_m542278554_RuntimeMethod_var;
extern const RuntimeMethod* List_1_get_Count_m576380744_RuntimeMethod_var;
extern const RuntimeMethod* List_1_Add_m691185006_RuntimeMethod_var;
extern String_t* _stringLiteral803282398;
extern String_t* _stringLiteral2706142996;
extern String_t* _stringLiteral1581558402;
extern String_t* _stringLiteral3941509395;
extern String_t* _stringLiteral3080956237;
extern String_t* _stringLiteral3454449607;
extern const uint32_t MapXmlParser_InitializeLanesAsLines_m3375149012_MetadataUsageId;
extern RuntimeClass* List_1_t128053199_il2cpp_TypeInfo_var;
extern RuntimeClass* Junction_t651368113_il2cpp_TypeInfo_var;
extern const RuntimeMethod* List_1_ToArray_m1691996104_RuntimeMethod_var;
extern const RuntimeMethod* List_1__ctor_m1628857705_RuntimeMethod_var;
extern const RuntimeMethod* List_1_Add_m697420525_RuntimeMethod_var;
extern const RuntimeMethod* List_1_ToArray_m3295195900_RuntimeMethod_var;
extern const RuntimeMethod* Enumerable_Repeat_TisVector3_t3722313464_m724486136_RuntimeMethod_var;
extern const RuntimeMethod* Enumerable_ToArray_TisVector3_t3722313464_m1824456213_RuntimeMethod_var;
extern const RuntimeMethod* Object_Instantiate_TisGameObject_t1113636619_m4070250708_RuntimeMethod_var;
extern const RuntimeMethod* List_1_Add_m253759266_RuntimeMethod_var;
extern String_t* _stringLiteral3941509767;
extern String_t* _stringLiteral2204697057;
extern const uint32_t MapXmlParser_InitializeJunctionsAsMesh_m2696785309_MetadataUsageId;
extern String_t* _stringLiteral3243520166;
extern String_t* _stringLiteral2679218528;
extern const uint32_t MapXmlParser_InitializeJunctionsAsLines_m4063586724_MetadataUsageId;
extern RuntimeClass* Mathf_t3464937446_il2cpp_TypeInfo_var;
extern RuntimeClass* UnityAction_t3245792599_il2cpp_TypeInfo_var;
extern const RuntimeMethod* Component_GetComponent_TisButton_t4055032469_m1381873113_RuntimeMethod_var;
extern const RuntimeMethod* SimulationXmlParser_playSimulation_m1991821138_RuntimeMethod_var;
extern const RuntimeMethod* SimulationXmlParser_readXml_m21601932_RuntimeMethod_var;
extern String_t* _stringLiteral2037252866;
extern const uint32_t SimulationXmlParser_parseSimulation_m857131844_MetadataUsageId;
extern const RuntimeMethod* SimulationXmlParser_stopSimulation_m2322440394_RuntimeMethod_var;
extern const RuntimeMethod* Component_GetComponentInChildren_TisText_t1901882714_m396351542_RuntimeMethod_var;
extern String_t* _stringLiteral1254395011;
extern String_t* _stringLiteral3093431772;
extern const uint32_t SimulationXmlParser_playSimulation_m1991821138_MetadataUsageId;
extern String_t* _stringLiteral3446402837;
extern const uint32_t SimulationXmlParser_stopSimulation_m2322440394_MetadataUsageId;
extern const RuntimeMethod* List_1_GetEnumerator_m1750140655_RuntimeMethod_var;
extern const RuntimeMethod* Enumerator_get_Current_m4179928398_RuntimeMethod_var;
extern const RuntimeMethod* GameObject_GetComponent_TisVehicle_t3024892526_m809803388_RuntimeMethod_var;
extern const RuntimeMethod* Enumerator_MoveNext_m4286844348_RuntimeMethod_var;
extern const RuntimeMethod* Enumerator_Dispose_m1341201278_RuntimeMethod_var;
extern const uint32_t SimulationXmlParser_readXml_m21601932_MetadataUsageId;
extern String_t* _stringLiteral649905732;
extern String_t* _stringLiteral4119891575;
extern const uint32_t SimulationXmlParser_readTimeStep_m2465967149_MetadataUsageId;
extern RuntimeClass* Convert_t2465617642_il2cpp_TypeInfo_var;
extern const RuntimeMethod* Object_Instantiate_TisGameObject_t1113636619_m3006960551_RuntimeMethod_var;
extern const RuntimeMethod* List_1_Add_m2765963565_RuntimeMethod_var;
extern String_t* _stringLiteral3452614616;
extern String_t* _stringLiteral3452614615;
extern String_t* _stringLiteral4262355673;
extern String_t* _stringLiteral3556801464;
extern const uint32_t SimulationXmlParser_determineCar_m227194893_MetadataUsageId;
extern RuntimeClass* U3CdetermineLightU3Ec__AnonStorey0_t2577330775_il2cpp_TypeInfo_var;
extern RuntimeClass* Predicate_1_t1476662237_il2cpp_TypeInfo_var;
extern RuntimeClass* U3CdetermineLightU3Ec__AnonStorey1_t2577396311_il2cpp_TypeInfo_var;
extern RuntimeClass* Predicate_1_t326759854_il2cpp_TypeInfo_var;
extern const RuntimeMethod* GameObject_GetComponent_TisMapXmlParser_t3144498968_m627506226_RuntimeMethod_var;
extern const RuntimeMethod* U3CdetermineLightU3Ec__AnonStorey0_U3CU3Em__0_m4276751557_RuntimeMethod_var;
extern const RuntimeMethod* Predicate_1__ctor_m1340340098_RuntimeMethod_var;
extern const RuntimeMethod* List_1_Find_m1598379345_RuntimeMethod_var;
extern const RuntimeMethod* List_1_GetEnumerator_m1955908099_RuntimeMethod_var;
extern const RuntimeMethod* Enumerator_get_Current_m236733038_RuntimeMethod_var;
extern const RuntimeMethod* U3CdetermineLightU3Ec__AnonStorey1_U3CU3Em__0_m1983843048_RuntimeMethod_var;
extern const RuntimeMethod* Predicate_1__ctor_m3711714686_RuntimeMethod_var;
extern const RuntimeMethod* List_1_Find_m1540475052_RuntimeMethod_var;
extern const RuntimeMethod* List_1_GetEnumerator_m2371351222_RuntimeMethod_var;
extern const RuntimeMethod* Enumerator_get_Current_m551545990_RuntimeMethod_var;
extern const RuntimeMethod* Enumerator_MoveNext_m3596597031_RuntimeMethod_var;
extern const RuntimeMethod* Enumerator_Dispose_m995875212_RuntimeMethod_var;
extern const RuntimeMethod* Enumerator_MoveNext_m4158182743_RuntimeMethod_var;
extern const RuntimeMethod* Enumerator_Dispose_m2026665411_RuntimeMethod_var;
extern String_t* _stringLiteral2324932941;
extern const uint32_t SimulationXmlParser_determineLight_m2540190358_MetadataUsageId;
extern RuntimeClass* Random_t108471755_il2cpp_TypeInfo_var;
extern const uint32_t SimulationXmlParser_getCarData_m3190637446_MetadataUsageId;
extern const uint32_t SimulationXmlParser_alive_m683940935_MetadataUsageId;
extern RuntimeClass* List_1_t2585711361_il2cpp_TypeInfo_var;
extern const RuntimeMethod* List_1__ctor_m1424466557_RuntimeMethod_var;
extern const uint32_t SimulationXmlParser_deleteObjects_m2991781533_MetadataUsageId;
extern RuntimeClass* Input_t1431474628_il2cpp_TypeInfo_var;
extern String_t* _stringLiteral1891098395;
extern String_t* _stringLiteral3228161487;
extern String_t* _stringLiteral674676282;
extern String_t* _stringLiteral3403559637;
extern const uint32_t SimulationXmlParser_Update_m2869978122_MetadataUsageId;
extern const uint32_t U3CdetermineLightU3Ec__AnonStorey0_U3CU3Em__0_m4276751557_MetadataUsageId;
extern const uint32_t U3CdetermineLightU3Ec__AnonStorey1_U3CU3Em__0_m1983843048_MetadataUsageId;

struct Vector3U5BU5D_t1718750761;
struct Int32U5BU5D_t385246372;
struct CharU5BU5D_t3528271667;
struct StringU5BU5D_t1281789340;


#ifndef U3CMODULEU3E_T692745546_H
#define U3CMODULEU3E_T692745546_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct  U3CModuleU3E_t692745546 
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CMODULEU3E_T692745546_H
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
#ifndef XMLNODE_T3767805227_H
#define XMLNODE_T3767805227_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.XmlNode
struct  XmlNode_t3767805227  : public RuntimeObject
{
public:
	// System.Xml.XmlDocument System.Xml.XmlNode::ownerDocument
	XmlDocument_t2837193595 * ___ownerDocument_1;
	// System.Xml.XmlNode System.Xml.XmlNode::parentNode
	XmlNode_t3767805227 * ___parentNode_2;
	// System.Xml.XmlNodeListChildren System.Xml.XmlNode::childNodes
	XmlNodeListChildren_t1082692789 * ___childNodes_3;

public:
	inline static int32_t get_offset_of_ownerDocument_1() { return static_cast<int32_t>(offsetof(XmlNode_t3767805227, ___ownerDocument_1)); }
	inline XmlDocument_t2837193595 * get_ownerDocument_1() const { return ___ownerDocument_1; }
	inline XmlDocument_t2837193595 ** get_address_of_ownerDocument_1() { return &___ownerDocument_1; }
	inline void set_ownerDocument_1(XmlDocument_t2837193595 * value)
	{
		___ownerDocument_1 = value;
		Il2CppCodeGenWriteBarrier((&___ownerDocument_1), value);
	}

	inline static int32_t get_offset_of_parentNode_2() { return static_cast<int32_t>(offsetof(XmlNode_t3767805227, ___parentNode_2)); }
	inline XmlNode_t3767805227 * get_parentNode_2() const { return ___parentNode_2; }
	inline XmlNode_t3767805227 ** get_address_of_parentNode_2() { return &___parentNode_2; }
	inline void set_parentNode_2(XmlNode_t3767805227 * value)
	{
		___parentNode_2 = value;
		Il2CppCodeGenWriteBarrier((&___parentNode_2), value);
	}

	inline static int32_t get_offset_of_childNodes_3() { return static_cast<int32_t>(offsetof(XmlNode_t3767805227, ___childNodes_3)); }
	inline XmlNodeListChildren_t1082692789 * get_childNodes_3() const { return ___childNodes_3; }
	inline XmlNodeListChildren_t1082692789 ** get_address_of_childNodes_3() { return &___childNodes_3; }
	inline void set_childNodes_3(XmlNodeListChildren_t1082692789 * value)
	{
		___childNodes_3 = value;
		Il2CppCodeGenWriteBarrier((&___childNodes_3), value);
	}
};

struct XmlNode_t3767805227_StaticFields
{
public:
	// System.Xml.XmlNode/EmptyNodeList System.Xml.XmlNode::emptyList
	EmptyNodeList_t139615908 * ___emptyList_0;
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> System.Xml.XmlNode::<>f__switch$map44
	Dictionary_2_t2736202052 * ___U3CU3Ef__switchU24map44_4;

public:
	inline static int32_t get_offset_of_emptyList_0() { return static_cast<int32_t>(offsetof(XmlNode_t3767805227_StaticFields, ___emptyList_0)); }
	inline EmptyNodeList_t139615908 * get_emptyList_0() const { return ___emptyList_0; }
	inline EmptyNodeList_t139615908 ** get_address_of_emptyList_0() { return &___emptyList_0; }
	inline void set_emptyList_0(EmptyNodeList_t139615908 * value)
	{
		___emptyList_0 = value;
		Il2CppCodeGenWriteBarrier((&___emptyList_0), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__switchU24map44_4() { return static_cast<int32_t>(offsetof(XmlNode_t3767805227_StaticFields, ___U3CU3Ef__switchU24map44_4)); }
	inline Dictionary_2_t2736202052 * get_U3CU3Ef__switchU24map44_4() const { return ___U3CU3Ef__switchU24map44_4; }
	inline Dictionary_2_t2736202052 ** get_address_of_U3CU3Ef__switchU24map44_4() { return &___U3CU3Ef__switchU24map44_4; }
	inline void set_U3CU3Ef__switchU24map44_4(Dictionary_2_t2736202052 * value)
	{
		___U3CU3Ef__switchU24map44_4 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__switchU24map44_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // XMLNODE_T3767805227_H
#ifndef XMLNODELIST_T2551693786_H
#define XMLNODELIST_T2551693786_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.XmlNodeList
struct  XmlNodeList_t2551693786  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // XMLNODELIST_T2551693786_H
#ifndef LIST_1_T899420910_H
#define LIST_1_T899420910_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.List`1<UnityEngine.Vector3>
struct  List_1_t899420910  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	Vector3U5BU5D_t1718750761* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t899420910, ____items_1)); }
	inline Vector3U5BU5D_t1718750761* get__items_1() const { return ____items_1; }
	inline Vector3U5BU5D_t1718750761** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(Vector3U5BU5D_t1718750761* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((&____items_1), value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t899420910, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t899420910, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}
};

struct List_1_t899420910_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::EmptyArray
	Vector3U5BU5D_t1718750761* ___EmptyArray_4;

public:
	inline static int32_t get_offset_of_EmptyArray_4() { return static_cast<int32_t>(offsetof(List_1_t899420910_StaticFields, ___EmptyArray_4)); }
	inline Vector3U5BU5D_t1718750761* get_EmptyArray_4() const { return ___EmptyArray_4; }
	inline Vector3U5BU5D_t1718750761** get_address_of_EmptyArray_4() { return &___EmptyArray_4; }
	inline void set_EmptyArray_4(Vector3U5BU5D_t1718750761* value)
	{
		___EmptyArray_4 = value;
		Il2CppCodeGenWriteBarrier((&___EmptyArray_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LIST_1_T899420910_H
#ifndef MEMBERINFO_T_H
#define MEMBERINFO_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.MemberInfo
struct  MemberInfo_t  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MEMBERINFO_T_H
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
#ifndef LIST_1_T331457716_H
#define LIST_1_T331457716_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.List`1<UnityEngine.LineRenderer>
struct  List_1_t331457716  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	LineRendererU5BU5D_t976293515* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t331457716, ____items_1)); }
	inline LineRendererU5BU5D_t976293515* get__items_1() const { return ____items_1; }
	inline LineRendererU5BU5D_t976293515** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(LineRendererU5BU5D_t976293515* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((&____items_1), value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t331457716, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t331457716, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}
};

struct List_1_t331457716_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::EmptyArray
	LineRendererU5BU5D_t976293515* ___EmptyArray_4;

public:
	inline static int32_t get_offset_of_EmptyArray_4() { return static_cast<int32_t>(offsetof(List_1_t331457716_StaticFields, ___EmptyArray_4)); }
	inline LineRendererU5BU5D_t976293515* get_EmptyArray_4() const { return ___EmptyArray_4; }
	inline LineRendererU5BU5D_t976293515** get_address_of_EmptyArray_4() { return &___EmptyArray_4; }
	inline void set_EmptyArray_4(LineRendererU5BU5D_t976293515* value)
	{
		___EmptyArray_4 = value;
		Il2CppCodeGenWriteBarrier((&___EmptyArray_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LIST_1_T331457716_H
#ifndef LANE_T3796433026_H
#define LANE_T3796433026_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Lane
struct  Lane_t3796433026  : public RuntimeObject
{
public:
	// System.String Lane::_id
	String_t* ____id_0;
	// System.Collections.Generic.List`1<UnityEngine.LineRenderer> Lane::_lines
	List_1_t331457716 * ____lines_1;

public:
	inline static int32_t get_offset_of__id_0() { return static_cast<int32_t>(offsetof(Lane_t3796433026, ____id_0)); }
	inline String_t* get__id_0() const { return ____id_0; }
	inline String_t** get_address_of__id_0() { return &____id_0; }
	inline void set__id_0(String_t* value)
	{
		____id_0 = value;
		Il2CppCodeGenWriteBarrier((&____id_0), value);
	}

	inline static int32_t get_offset_of__lines_1() { return static_cast<int32_t>(offsetof(Lane_t3796433026, ____lines_1)); }
	inline List_1_t331457716 * get__lines_1() const { return ____lines_1; }
	inline List_1_t331457716 ** get_address_of__lines_1() { return &____lines_1; }
	inline void set__lines_1(List_1_t331457716 * value)
	{
		____lines_1 = value;
		Il2CppCodeGenWriteBarrier((&____lines_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LANE_T3796433026_H
#ifndef LIST_1_T3319525431_H
#define LIST_1_T3319525431_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.List`1<System.String>
struct  List_1_t3319525431  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	StringU5BU5D_t1281789340* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t3319525431, ____items_1)); }
	inline StringU5BU5D_t1281789340* get__items_1() const { return ____items_1; }
	inline StringU5BU5D_t1281789340** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(StringU5BU5D_t1281789340* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((&____items_1), value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t3319525431, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t3319525431, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}
};

struct List_1_t3319525431_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::EmptyArray
	StringU5BU5D_t1281789340* ___EmptyArray_4;

public:
	inline static int32_t get_offset_of_EmptyArray_4() { return static_cast<int32_t>(offsetof(List_1_t3319525431_StaticFields, ___EmptyArray_4)); }
	inline StringU5BU5D_t1281789340* get_EmptyArray_4() const { return ___EmptyArray_4; }
	inline StringU5BU5D_t1281789340** get_address_of_EmptyArray_4() { return &___EmptyArray_4; }
	inline void set_EmptyArray_4(StringU5BU5D_t1281789340* value)
	{
		___EmptyArray_4 = value;
		Il2CppCodeGenWriteBarrier((&___EmptyArray_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LIST_1_T3319525431_H
#ifndef JUNCTION_T651368113_H
#define JUNCTION_T651368113_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Junction
struct  Junction_t651368113  : public RuntimeObject
{
public:
	// System.String Junction::_id
	String_t* ____id_0;
	// System.Collections.Generic.List`1<System.String> Junction::_intLanes
	List_1_t3319525431 * ____intLanes_1;

public:
	inline static int32_t get_offset_of__id_0() { return static_cast<int32_t>(offsetof(Junction_t651368113, ____id_0)); }
	inline String_t* get__id_0() const { return ____id_0; }
	inline String_t** get_address_of__id_0() { return &____id_0; }
	inline void set__id_0(String_t* value)
	{
		____id_0 = value;
		Il2CppCodeGenWriteBarrier((&____id_0), value);
	}

	inline static int32_t get_offset_of__intLanes_1() { return static_cast<int32_t>(offsetof(Junction_t651368113, ____intLanes_1)); }
	inline List_1_t3319525431 * get__intLanes_1() const { return ____intLanes_1; }
	inline List_1_t3319525431 ** get_address_of__intLanes_1() { return &____intLanes_1; }
	inline void set__intLanes_1(List_1_t3319525431 * value)
	{
		____intLanes_1 = value;
		Il2CppCodeGenWriteBarrier((&____intLanes_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // JUNCTION_T651368113_H
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
#ifndef RANDOM_T108471755_H
#define RANDOM_T108471755_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Random
struct  Random_t108471755  : public RuntimeObject
{
public:
	// System.Int32 System.Random::inext
	int32_t ___inext_0;
	// System.Int32 System.Random::inextp
	int32_t ___inextp_1;
	// System.Int32[] System.Random::SeedArray
	Int32U5BU5D_t385246372* ___SeedArray_2;

public:
	inline static int32_t get_offset_of_inext_0() { return static_cast<int32_t>(offsetof(Random_t108471755, ___inext_0)); }
	inline int32_t get_inext_0() const { return ___inext_0; }
	inline int32_t* get_address_of_inext_0() { return &___inext_0; }
	inline void set_inext_0(int32_t value)
	{
		___inext_0 = value;
	}

	inline static int32_t get_offset_of_inextp_1() { return static_cast<int32_t>(offsetof(Random_t108471755, ___inextp_1)); }
	inline int32_t get_inextp_1() const { return ___inextp_1; }
	inline int32_t* get_address_of_inextp_1() { return &___inextp_1; }
	inline void set_inextp_1(int32_t value)
	{
		___inextp_1 = value;
	}

	inline static int32_t get_offset_of_SeedArray_2() { return static_cast<int32_t>(offsetof(Random_t108471755, ___SeedArray_2)); }
	inline Int32U5BU5D_t385246372* get_SeedArray_2() const { return ___SeedArray_2; }
	inline Int32U5BU5D_t385246372** get_address_of_SeedArray_2() { return &___SeedArray_2; }
	inline void set_SeedArray_2(Int32U5BU5D_t385246372* value)
	{
		___SeedArray_2 = value;
		Il2CppCodeGenWriteBarrier((&___SeedArray_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RANDOM_T108471755_H
#ifndef LIST_1_T2123442855_H
#define LIST_1_T2123442855_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.List`1<Junction>
struct  List_1_t2123442855  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	JunctionU5BU5D_t1338665836* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t2123442855, ____items_1)); }
	inline JunctionU5BU5D_t1338665836* get__items_1() const { return ____items_1; }
	inline JunctionU5BU5D_t1338665836** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(JunctionU5BU5D_t1338665836* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((&____items_1), value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t2123442855, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t2123442855, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}
};

struct List_1_t2123442855_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::EmptyArray
	JunctionU5BU5D_t1338665836* ___EmptyArray_4;

public:
	inline static int32_t get_offset_of_EmptyArray_4() { return static_cast<int32_t>(offsetof(List_1_t2123442855_StaticFields, ___EmptyArray_4)); }
	inline JunctionU5BU5D_t1338665836* get_EmptyArray_4() const { return ___EmptyArray_4; }
	inline JunctionU5BU5D_t1338665836** get_address_of_EmptyArray_4() { return &___EmptyArray_4; }
	inline void set_EmptyArray_4(JunctionU5BU5D_t1338665836* value)
	{
		___EmptyArray_4 = value;
		Il2CppCodeGenWriteBarrier((&___EmptyArray_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LIST_1_T2123442855_H
#ifndef U3CDETERMINELIGHTU3EC__ANONSTOREY0_T2577330775_H
#define U3CDETERMINELIGHTU3EC__ANONSTOREY0_T2577330775_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// SimulationXmlParser/<determineLight>c__AnonStorey0
struct  U3CdetermineLightU3Ec__AnonStorey0_t2577330775  : public RuntimeObject
{
public:
	// System.String SimulationXmlParser/<determineLight>c__AnonStorey0::id
	String_t* ___id_0;

public:
	inline static int32_t get_offset_of_id_0() { return static_cast<int32_t>(offsetof(U3CdetermineLightU3Ec__AnonStorey0_t2577330775, ___id_0)); }
	inline String_t* get_id_0() const { return ___id_0; }
	inline String_t** get_address_of_id_0() { return &___id_0; }
	inline void set_id_0(String_t* value)
	{
		___id_0 = value;
		Il2CppCodeGenWriteBarrier((&___id_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CDETERMINELIGHTU3EC__ANONSTOREY0_T2577330775_H
#ifndef U3CDETERMINELIGHTU3EC__ANONSTOREY1_T2577396311_H
#define U3CDETERMINELIGHTU3EC__ANONSTOREY1_T2577396311_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// SimulationXmlParser/<determineLight>c__AnonStorey1
struct  U3CdetermineLightU3Ec__AnonStorey1_t2577396311  : public RuntimeObject
{
public:
	// System.String SimulationXmlParser/<determineLight>c__AnonStorey1::l
	String_t* ___l_0;

public:
	inline static int32_t get_offset_of_l_0() { return static_cast<int32_t>(offsetof(U3CdetermineLightU3Ec__AnonStorey1_t2577396311, ___l_0)); }
	inline String_t* get_l_0() const { return ___l_0; }
	inline String_t** get_address_of_l_0() { return &___l_0; }
	inline void set_l_0(String_t* value)
	{
		___l_0 = value;
		Il2CppCodeGenWriteBarrier((&___l_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CDETERMINELIGHTU3EC__ANONSTOREY1_T2577396311_H
#ifndef LIST_1_T447389798_H
#define LIST_1_T447389798_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.List`1<UnityEngine.UI.Dropdown/OptionData>
struct  List_1_t447389798  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	OptionDataU5BU5D_t3600483281* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t447389798, ____items_1)); }
	inline OptionDataU5BU5D_t3600483281* get__items_1() const { return ____items_1; }
	inline OptionDataU5BU5D_t3600483281** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(OptionDataU5BU5D_t3600483281* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((&____items_1), value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t447389798, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t447389798, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}
};

struct List_1_t447389798_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::EmptyArray
	OptionDataU5BU5D_t3600483281* ___EmptyArray_4;

public:
	inline static int32_t get_offset_of_EmptyArray_4() { return static_cast<int32_t>(offsetof(List_1_t447389798_StaticFields, ___EmptyArray_4)); }
	inline OptionDataU5BU5D_t3600483281* get_EmptyArray_4() const { return ___EmptyArray_4; }
	inline OptionDataU5BU5D_t3600483281** get_address_of_EmptyArray_4() { return &___EmptyArray_4; }
	inline void set_EmptyArray_4(OptionDataU5BU5D_t3600483281* value)
	{
		___EmptyArray_4 = value;
		Il2CppCodeGenWriteBarrier((&___EmptyArray_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LIST_1_T447389798_H
#ifndef ABSTRACTEVENTDATA_T4171500731_H
#define ABSTRACTEVENTDATA_T4171500731_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.EventSystems.AbstractEventData
struct  AbstractEventData_t4171500731  : public RuntimeObject
{
public:
	// System.Boolean UnityEngine.EventSystems.AbstractEventData::m_Used
	bool ___m_Used_0;

public:
	inline static int32_t get_offset_of_m_Used_0() { return static_cast<int32_t>(offsetof(AbstractEventData_t4171500731, ___m_Used_0)); }
	inline bool get_m_Used_0() const { return ___m_Used_0; }
	inline bool* get_address_of_m_Used_0() { return &___m_Used_0; }
	inline void set_m_Used_0(bool value)
	{
		___m_Used_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ABSTRACTEVENTDATA_T4171500731_H
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
#ifndef LIST_1_T2585711361_H
#define LIST_1_T2585711361_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.List`1<UnityEngine.GameObject>
struct  List_1_t2585711361  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	GameObjectU5BU5D_t3328599146* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t2585711361, ____items_1)); }
	inline GameObjectU5BU5D_t3328599146* get__items_1() const { return ____items_1; }
	inline GameObjectU5BU5D_t3328599146** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(GameObjectU5BU5D_t3328599146* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((&____items_1), value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t2585711361, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t2585711361, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}
};

struct List_1_t2585711361_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::EmptyArray
	GameObjectU5BU5D_t3328599146* ___EmptyArray_4;

public:
	inline static int32_t get_offset_of_EmptyArray_4() { return static_cast<int32_t>(offsetof(List_1_t2585711361_StaticFields, ___EmptyArray_4)); }
	inline GameObjectU5BU5D_t3328599146* get_EmptyArray_4() const { return ___EmptyArray_4; }
	inline GameObjectU5BU5D_t3328599146** get_address_of_EmptyArray_4() { return &___EmptyArray_4; }
	inline void set_EmptyArray_4(GameObjectU5BU5D_t3328599146* value)
	{
		___EmptyArray_4 = value;
		Il2CppCodeGenWriteBarrier((&___EmptyArray_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LIST_1_T2585711361_H
#ifndef OPTIONDATA_T3270282352_H
#define OPTIONDATA_T3270282352_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.Dropdown/OptionData
struct  OptionData_t3270282352  : public RuntimeObject
{
public:
	// System.String UnityEngine.UI.Dropdown/OptionData::m_Text
	String_t* ___m_Text_0;
	// UnityEngine.Sprite UnityEngine.UI.Dropdown/OptionData::m_Image
	Sprite_t280657092 * ___m_Image_1;

public:
	inline static int32_t get_offset_of_m_Text_0() { return static_cast<int32_t>(offsetof(OptionData_t3270282352, ___m_Text_0)); }
	inline String_t* get_m_Text_0() const { return ___m_Text_0; }
	inline String_t** get_address_of_m_Text_0() { return &___m_Text_0; }
	inline void set_m_Text_0(String_t* value)
	{
		___m_Text_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_Text_0), value);
	}

	inline static int32_t get_offset_of_m_Image_1() { return static_cast<int32_t>(offsetof(OptionData_t3270282352, ___m_Image_1)); }
	inline Sprite_t280657092 * get_m_Image_1() const { return ___m_Image_1; }
	inline Sprite_t280657092 ** get_address_of_m_Image_1() { return &___m_Image_1; }
	inline void set_m_Image_1(Sprite_t280657092 * value)
	{
		___m_Image_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_Image_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // OPTIONDATA_T3270282352_H
#ifndef XMLNAMEDNODEMAP_T2821286253_H
#define XMLNAMEDNODEMAP_T2821286253_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.XmlNamedNodeMap
struct  XmlNamedNodeMap_t2821286253  : public RuntimeObject
{
public:
	// System.Xml.XmlNode System.Xml.XmlNamedNodeMap::parent
	XmlNode_t3767805227 * ___parent_1;
	// System.Collections.ArrayList System.Xml.XmlNamedNodeMap::nodeList
	ArrayList_t2718874744 * ___nodeList_2;
	// System.Boolean System.Xml.XmlNamedNodeMap::readOnly
	bool ___readOnly_3;

public:
	inline static int32_t get_offset_of_parent_1() { return static_cast<int32_t>(offsetof(XmlNamedNodeMap_t2821286253, ___parent_1)); }
	inline XmlNode_t3767805227 * get_parent_1() const { return ___parent_1; }
	inline XmlNode_t3767805227 ** get_address_of_parent_1() { return &___parent_1; }
	inline void set_parent_1(XmlNode_t3767805227 * value)
	{
		___parent_1 = value;
		Il2CppCodeGenWriteBarrier((&___parent_1), value);
	}

	inline static int32_t get_offset_of_nodeList_2() { return static_cast<int32_t>(offsetof(XmlNamedNodeMap_t2821286253, ___nodeList_2)); }
	inline ArrayList_t2718874744 * get_nodeList_2() const { return ___nodeList_2; }
	inline ArrayList_t2718874744 ** get_address_of_nodeList_2() { return &___nodeList_2; }
	inline void set_nodeList_2(ArrayList_t2718874744 * value)
	{
		___nodeList_2 = value;
		Il2CppCodeGenWriteBarrier((&___nodeList_2), value);
	}

	inline static int32_t get_offset_of_readOnly_3() { return static_cast<int32_t>(offsetof(XmlNamedNodeMap_t2821286253, ___readOnly_3)); }
	inline bool get_readOnly_3() const { return ___readOnly_3; }
	inline bool* get_address_of_readOnly_3() { return &___readOnly_3; }
	inline void set_readOnly_3(bool value)
	{
		___readOnly_3 = value;
	}
};

struct XmlNamedNodeMap_t2821286253_StaticFields
{
public:
	// System.Collections.IEnumerator System.Xml.XmlNamedNodeMap::emptyEnumerator
	RuntimeObject* ___emptyEnumerator_0;

public:
	inline static int32_t get_offset_of_emptyEnumerator_0() { return static_cast<int32_t>(offsetof(XmlNamedNodeMap_t2821286253_StaticFields, ___emptyEnumerator_0)); }
	inline RuntimeObject* get_emptyEnumerator_0() const { return ___emptyEnumerator_0; }
	inline RuntimeObject** get_address_of_emptyEnumerator_0() { return &___emptyEnumerator_0; }
	inline void set_emptyEnumerator_0(RuntimeObject* value)
	{
		___emptyEnumerator_0 = value;
		Il2CppCodeGenWriteBarrier((&___emptyEnumerator_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // XMLNAMEDNODEMAP_T2821286253_H
#ifndef UNITYEVENTBASE_T3960448221_H
#define UNITYEVENTBASE_T3960448221_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Events.UnityEventBase
struct  UnityEventBase_t3960448221  : public RuntimeObject
{
public:
	// UnityEngine.Events.InvokableCallList UnityEngine.Events.UnityEventBase::m_Calls
	InvokableCallList_t2498835369 * ___m_Calls_0;
	// UnityEngine.Events.PersistentCallGroup UnityEngine.Events.UnityEventBase::m_PersistentCalls
	PersistentCallGroup_t3050769227 * ___m_PersistentCalls_1;
	// System.String UnityEngine.Events.UnityEventBase::m_TypeName
	String_t* ___m_TypeName_2;
	// System.Boolean UnityEngine.Events.UnityEventBase::m_CallsDirty
	bool ___m_CallsDirty_3;

public:
	inline static int32_t get_offset_of_m_Calls_0() { return static_cast<int32_t>(offsetof(UnityEventBase_t3960448221, ___m_Calls_0)); }
	inline InvokableCallList_t2498835369 * get_m_Calls_0() const { return ___m_Calls_0; }
	inline InvokableCallList_t2498835369 ** get_address_of_m_Calls_0() { return &___m_Calls_0; }
	inline void set_m_Calls_0(InvokableCallList_t2498835369 * value)
	{
		___m_Calls_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_Calls_0), value);
	}

	inline static int32_t get_offset_of_m_PersistentCalls_1() { return static_cast<int32_t>(offsetof(UnityEventBase_t3960448221, ___m_PersistentCalls_1)); }
	inline PersistentCallGroup_t3050769227 * get_m_PersistentCalls_1() const { return ___m_PersistentCalls_1; }
	inline PersistentCallGroup_t3050769227 ** get_address_of_m_PersistentCalls_1() { return &___m_PersistentCalls_1; }
	inline void set_m_PersistentCalls_1(PersistentCallGroup_t3050769227 * value)
	{
		___m_PersistentCalls_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_PersistentCalls_1), value);
	}

	inline static int32_t get_offset_of_m_TypeName_2() { return static_cast<int32_t>(offsetof(UnityEventBase_t3960448221, ___m_TypeName_2)); }
	inline String_t* get_m_TypeName_2() const { return ___m_TypeName_2; }
	inline String_t** get_address_of_m_TypeName_2() { return &___m_TypeName_2; }
	inline void set_m_TypeName_2(String_t* value)
	{
		___m_TypeName_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_TypeName_2), value);
	}

	inline static int32_t get_offset_of_m_CallsDirty_3() { return static_cast<int32_t>(offsetof(UnityEventBase_t3960448221, ___m_CallsDirty_3)); }
	inline bool get_m_CallsDirty_3() const { return ___m_CallsDirty_3; }
	inline bool* get_address_of_m_CallsDirty_3() { return &___m_CallsDirty_3; }
	inline void set_m_CallsDirty_3(bool value)
	{
		___m_CallsDirty_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNITYEVENTBASE_T3960448221_H
#ifndef LIST_1_T973540472_H
#define LIST_1_T973540472_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.List`1<Lane>
struct  List_1_t973540472  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	LaneU5BU5D_t2829245239* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t973540472, ____items_1)); }
	inline LaneU5BU5D_t2829245239* get__items_1() const { return ____items_1; }
	inline LaneU5BU5D_t2829245239** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(LaneU5BU5D_t2829245239* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((&____items_1), value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t973540472, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t973540472, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}
};

struct List_1_t973540472_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::EmptyArray
	LaneU5BU5D_t2829245239* ___EmptyArray_4;

public:
	inline static int32_t get_offset_of_EmptyArray_4() { return static_cast<int32_t>(offsetof(List_1_t973540472_StaticFields, ___EmptyArray_4)); }
	inline LaneU5BU5D_t2829245239* get_EmptyArray_4() const { return ___EmptyArray_4; }
	inline LaneU5BU5D_t2829245239** get_address_of_EmptyArray_4() { return &___EmptyArray_4; }
	inline void set_EmptyArray_4(LaneU5BU5D_t2829245239* value)
	{
		___EmptyArray_4 = value;
		Il2CppCodeGenWriteBarrier((&___EmptyArray_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LIST_1_T973540472_H
#ifndef ENUMERATOR_T179987942_H
#define ENUMERATOR_T179987942_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.List`1/Enumerator<UnityEngine.GameObject>
struct  Enumerator_t179987942 
{
public:
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::l
	List_1_t2585711361 * ___l_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::next
	int32_t ___next_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::ver
	int32_t ___ver_2;
	// T System.Collections.Generic.List`1/Enumerator::current
	GameObject_t1113636619 * ___current_3;

public:
	inline static int32_t get_offset_of_l_0() { return static_cast<int32_t>(offsetof(Enumerator_t179987942, ___l_0)); }
	inline List_1_t2585711361 * get_l_0() const { return ___l_0; }
	inline List_1_t2585711361 ** get_address_of_l_0() { return &___l_0; }
	inline void set_l_0(List_1_t2585711361 * value)
	{
		___l_0 = value;
		Il2CppCodeGenWriteBarrier((&___l_0), value);
	}

	inline static int32_t get_offset_of_next_1() { return static_cast<int32_t>(offsetof(Enumerator_t179987942, ___next_1)); }
	inline int32_t get_next_1() const { return ___next_1; }
	inline int32_t* get_address_of_next_1() { return &___next_1; }
	inline void set_next_1(int32_t value)
	{
		___next_1 = value;
	}

	inline static int32_t get_offset_of_ver_2() { return static_cast<int32_t>(offsetof(Enumerator_t179987942, ___ver_2)); }
	inline int32_t get_ver_2() const { return ___ver_2; }
	inline int32_t* get_address_of_ver_2() { return &___ver_2; }
	inline void set_ver_2(int32_t value)
	{
		___ver_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_t179987942, ___current_3)); }
	inline GameObject_t1113636619 * get_current_3() const { return ___current_3; }
	inline GameObject_t1113636619 ** get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(GameObject_t1113636619 * value)
	{
		___current_3 = value;
		Il2CppCodeGenWriteBarrier((&___current_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENUMERATOR_T179987942_H
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
#ifndef ENUMERATOR_T2220701593_H
#define ENUMERATOR_T2220701593_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.List`1/Enumerator<UnityEngine.LineRenderer>
struct  Enumerator_t2220701593 
{
public:
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::l
	List_1_t331457716 * ___l_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::next
	int32_t ___next_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::ver
	int32_t ___ver_2;
	// T System.Collections.Generic.List`1/Enumerator::current
	LineRenderer_t3154350270 * ___current_3;

public:
	inline static int32_t get_offset_of_l_0() { return static_cast<int32_t>(offsetof(Enumerator_t2220701593, ___l_0)); }
	inline List_1_t331457716 * get_l_0() const { return ___l_0; }
	inline List_1_t331457716 ** get_address_of_l_0() { return &___l_0; }
	inline void set_l_0(List_1_t331457716 * value)
	{
		___l_0 = value;
		Il2CppCodeGenWriteBarrier((&___l_0), value);
	}

	inline static int32_t get_offset_of_next_1() { return static_cast<int32_t>(offsetof(Enumerator_t2220701593, ___next_1)); }
	inline int32_t get_next_1() const { return ___next_1; }
	inline int32_t* get_address_of_next_1() { return &___next_1; }
	inline void set_next_1(int32_t value)
	{
		___next_1 = value;
	}

	inline static int32_t get_offset_of_ver_2() { return static_cast<int32_t>(offsetof(Enumerator_t2220701593, ___ver_2)); }
	inline int32_t get_ver_2() const { return ___ver_2; }
	inline int32_t* get_address_of_ver_2() { return &___ver_2; }
	inline void set_ver_2(int32_t value)
	{
		___ver_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_t2220701593, ___current_3)); }
	inline LineRenderer_t3154350270 * get_current_3() const { return ___current_3; }
	inline LineRenderer_t3154350270 ** get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(LineRenderer_t3154350270 * value)
	{
		___current_3 = value;
		Il2CppCodeGenWriteBarrier((&___current_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENUMERATOR_T2220701593_H
#ifndef UNITYEVENT_T2581268647_H
#define UNITYEVENT_T2581268647_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Events.UnityEvent
struct  UnityEvent_t2581268647  : public UnityEventBase_t3960448221
{
public:
	// System.Object[] UnityEngine.Events.UnityEvent::m_InvokeArray
	ObjectU5BU5D_t2843939325* ___m_InvokeArray_4;

public:
	inline static int32_t get_offset_of_m_InvokeArray_4() { return static_cast<int32_t>(offsetof(UnityEvent_t2581268647, ___m_InvokeArray_4)); }
	inline ObjectU5BU5D_t2843939325* get_m_InvokeArray_4() const { return ___m_InvokeArray_4; }
	inline ObjectU5BU5D_t2843939325** get_address_of_m_InvokeArray_4() { return &___m_InvokeArray_4; }
	inline void set_m_InvokeArray_4(ObjectU5BU5D_t2843939325* value)
	{
		___m_InvokeArray_4 = value;
		Il2CppCodeGenWriteBarrier((&___m_InvokeArray_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNITYEVENT_T2581268647_H
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
#ifndef XMLATTRIBUTE_T1173852259_H
#define XMLATTRIBUTE_T1173852259_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.XmlAttribute
struct  XmlAttribute_t1173852259  : public XmlNode_t3767805227
{
public:
	// System.Xml.XmlNameEntry System.Xml.XmlAttribute::name
	XmlNameEntry_t1073099671 * ___name_5;
	// System.Boolean System.Xml.XmlAttribute::isDefault
	bool ___isDefault_6;
	// System.Xml.XmlLinkedNode System.Xml.XmlAttribute::lastLinkedChild
	XmlLinkedNode_t1437094927 * ___lastLinkedChild_7;
	// System.Xml.Schema.IXmlSchemaInfo System.Xml.XmlAttribute::schemaInfo
	RuntimeObject* ___schemaInfo_8;

public:
	inline static int32_t get_offset_of_name_5() { return static_cast<int32_t>(offsetof(XmlAttribute_t1173852259, ___name_5)); }
	inline XmlNameEntry_t1073099671 * get_name_5() const { return ___name_5; }
	inline XmlNameEntry_t1073099671 ** get_address_of_name_5() { return &___name_5; }
	inline void set_name_5(XmlNameEntry_t1073099671 * value)
	{
		___name_5 = value;
		Il2CppCodeGenWriteBarrier((&___name_5), value);
	}

	inline static int32_t get_offset_of_isDefault_6() { return static_cast<int32_t>(offsetof(XmlAttribute_t1173852259, ___isDefault_6)); }
	inline bool get_isDefault_6() const { return ___isDefault_6; }
	inline bool* get_address_of_isDefault_6() { return &___isDefault_6; }
	inline void set_isDefault_6(bool value)
	{
		___isDefault_6 = value;
	}

	inline static int32_t get_offset_of_lastLinkedChild_7() { return static_cast<int32_t>(offsetof(XmlAttribute_t1173852259, ___lastLinkedChild_7)); }
	inline XmlLinkedNode_t1437094927 * get_lastLinkedChild_7() const { return ___lastLinkedChild_7; }
	inline XmlLinkedNode_t1437094927 ** get_address_of_lastLinkedChild_7() { return &___lastLinkedChild_7; }
	inline void set_lastLinkedChild_7(XmlLinkedNode_t1437094927 * value)
	{
		___lastLinkedChild_7 = value;
		Il2CppCodeGenWriteBarrier((&___lastLinkedChild_7), value);
	}

	inline static int32_t get_offset_of_schemaInfo_8() { return static_cast<int32_t>(offsetof(XmlAttribute_t1173852259, ___schemaInfo_8)); }
	inline RuntimeObject* get_schemaInfo_8() const { return ___schemaInfo_8; }
	inline RuntimeObject** get_address_of_schemaInfo_8() { return &___schemaInfo_8; }
	inline void set_schemaInfo_8(RuntimeObject* value)
	{
		___schemaInfo_8 = value;
		Il2CppCodeGenWriteBarrier((&___schemaInfo_8), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // XMLATTRIBUTE_T1173852259_H
#ifndef XMLATTRIBUTECOLLECTION_T2316283784_H
#define XMLATTRIBUTECOLLECTION_T2316283784_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.XmlAttributeCollection
struct  XmlAttributeCollection_t2316283784  : public XmlNamedNodeMap_t2821286253
{
public:
	// System.Xml.XmlElement System.Xml.XmlAttributeCollection::ownerElement
	XmlElement_t561603118 * ___ownerElement_4;
	// System.Xml.XmlDocument System.Xml.XmlAttributeCollection::ownerDocument
	XmlDocument_t2837193595 * ___ownerDocument_5;

public:
	inline static int32_t get_offset_of_ownerElement_4() { return static_cast<int32_t>(offsetof(XmlAttributeCollection_t2316283784, ___ownerElement_4)); }
	inline XmlElement_t561603118 * get_ownerElement_4() const { return ___ownerElement_4; }
	inline XmlElement_t561603118 ** get_address_of_ownerElement_4() { return &___ownerElement_4; }
	inline void set_ownerElement_4(XmlElement_t561603118 * value)
	{
		___ownerElement_4 = value;
		Il2CppCodeGenWriteBarrier((&___ownerElement_4), value);
	}

	inline static int32_t get_offset_of_ownerDocument_5() { return static_cast<int32_t>(offsetof(XmlAttributeCollection_t2316283784, ___ownerDocument_5)); }
	inline XmlDocument_t2837193595 * get_ownerDocument_5() const { return ___ownerDocument_5; }
	inline XmlDocument_t2837193595 ** get_address_of_ownerDocument_5() { return &___ownerDocument_5; }
	inline void set_ownerDocument_5(XmlDocument_t2837193595 * value)
	{
		___ownerDocument_5 = value;
		Il2CppCodeGenWriteBarrier((&___ownerDocument_5), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // XMLATTRIBUTECOLLECTION_T2316283784_H
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
#ifndef ENUMERATOR_T913802012_H
#define ENUMERATOR_T913802012_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.List`1/Enumerator<System.String>
struct  Enumerator_t913802012 
{
public:
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::l
	List_1_t3319525431 * ___l_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::next
	int32_t ___next_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::ver
	int32_t ___ver_2;
	// T System.Collections.Generic.List`1/Enumerator::current
	String_t* ___current_3;

public:
	inline static int32_t get_offset_of_l_0() { return static_cast<int32_t>(offsetof(Enumerator_t913802012, ___l_0)); }
	inline List_1_t3319525431 * get_l_0() const { return ___l_0; }
	inline List_1_t3319525431 ** get_address_of_l_0() { return &___l_0; }
	inline void set_l_0(List_1_t3319525431 * value)
	{
		___l_0 = value;
		Il2CppCodeGenWriteBarrier((&___l_0), value);
	}

	inline static int32_t get_offset_of_next_1() { return static_cast<int32_t>(offsetof(Enumerator_t913802012, ___next_1)); }
	inline int32_t get_next_1() const { return ___next_1; }
	inline int32_t* get_address_of_next_1() { return &___next_1; }
	inline void set_next_1(int32_t value)
	{
		___next_1 = value;
	}

	inline static int32_t get_offset_of_ver_2() { return static_cast<int32_t>(offsetof(Enumerator_t913802012, ___ver_2)); }
	inline int32_t get_ver_2() const { return ___ver_2; }
	inline int32_t* get_address_of_ver_2() { return &___ver_2; }
	inline void set_ver_2(int32_t value)
	{
		___ver_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_t913802012, ___current_3)); }
	inline String_t* get_current_3() const { return ___current_3; }
	inline String_t** get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(String_t* value)
	{
		___current_3 = value;
		Il2CppCodeGenWriteBarrier((&___current_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENUMERATOR_T913802012_H
#ifndef XMLDOCUMENT_T2837193595_H
#define XMLDOCUMENT_T2837193595_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.XmlDocument
struct  XmlDocument_t2837193595  : public XmlNode_t3767805227
{
public:
	// System.Boolean System.Xml.XmlDocument::optimal_create_element
	bool ___optimal_create_element_6;
	// System.Boolean System.Xml.XmlDocument::optimal_create_attribute
	bool ___optimal_create_attribute_7;
	// System.Xml.XmlNameTable System.Xml.XmlDocument::nameTable
	XmlNameTable_t71772148 * ___nameTable_8;
	// System.String System.Xml.XmlDocument::baseURI
	String_t* ___baseURI_9;
	// System.Xml.XmlImplementation System.Xml.XmlDocument::implementation
	XmlImplementation_t254178875 * ___implementation_10;
	// System.Boolean System.Xml.XmlDocument::preserveWhitespace
	bool ___preserveWhitespace_11;
	// System.Xml.XmlResolver System.Xml.XmlDocument::resolver
	XmlResolver_t626023767 * ___resolver_12;
	// System.Collections.Hashtable System.Xml.XmlDocument::idTable
	Hashtable_t1853889766 * ___idTable_13;
	// System.Xml.XmlNameEntryCache System.Xml.XmlDocument::nameCache
	XmlNameEntryCache_t2890546907 * ___nameCache_14;
	// System.Xml.XmlLinkedNode System.Xml.XmlDocument::lastLinkedChild
	XmlLinkedNode_t1437094927 * ___lastLinkedChild_15;
	// System.Xml.XmlAttribute System.Xml.XmlDocument::nsNodeXml
	XmlAttribute_t1173852259 * ___nsNodeXml_16;
	// System.Xml.Schema.XmlSchemaSet System.Xml.XmlDocument::schemas
	XmlSchemaSet_t266093086 * ___schemas_17;
	// System.Xml.Schema.IXmlSchemaInfo System.Xml.XmlDocument::schemaInfo
	RuntimeObject* ___schemaInfo_18;
	// System.Boolean System.Xml.XmlDocument::loadMode
	bool ___loadMode_19;
	// System.Xml.XmlNodeChangedEventHandler System.Xml.XmlDocument::NodeChanged
	XmlNodeChangedEventHandler_t1533444722 * ___NodeChanged_20;
	// System.Xml.XmlNodeChangedEventHandler System.Xml.XmlDocument::NodeChanging
	XmlNodeChangedEventHandler_t1533444722 * ___NodeChanging_21;
	// System.Xml.XmlNodeChangedEventHandler System.Xml.XmlDocument::NodeInserted
	XmlNodeChangedEventHandler_t1533444722 * ___NodeInserted_22;
	// System.Xml.XmlNodeChangedEventHandler System.Xml.XmlDocument::NodeInserting
	XmlNodeChangedEventHandler_t1533444722 * ___NodeInserting_23;
	// System.Xml.XmlNodeChangedEventHandler System.Xml.XmlDocument::NodeRemoved
	XmlNodeChangedEventHandler_t1533444722 * ___NodeRemoved_24;
	// System.Xml.XmlNodeChangedEventHandler System.Xml.XmlDocument::NodeRemoving
	XmlNodeChangedEventHandler_t1533444722 * ___NodeRemoving_25;

public:
	inline static int32_t get_offset_of_optimal_create_element_6() { return static_cast<int32_t>(offsetof(XmlDocument_t2837193595, ___optimal_create_element_6)); }
	inline bool get_optimal_create_element_6() const { return ___optimal_create_element_6; }
	inline bool* get_address_of_optimal_create_element_6() { return &___optimal_create_element_6; }
	inline void set_optimal_create_element_6(bool value)
	{
		___optimal_create_element_6 = value;
	}

	inline static int32_t get_offset_of_optimal_create_attribute_7() { return static_cast<int32_t>(offsetof(XmlDocument_t2837193595, ___optimal_create_attribute_7)); }
	inline bool get_optimal_create_attribute_7() const { return ___optimal_create_attribute_7; }
	inline bool* get_address_of_optimal_create_attribute_7() { return &___optimal_create_attribute_7; }
	inline void set_optimal_create_attribute_7(bool value)
	{
		___optimal_create_attribute_7 = value;
	}

	inline static int32_t get_offset_of_nameTable_8() { return static_cast<int32_t>(offsetof(XmlDocument_t2837193595, ___nameTable_8)); }
	inline XmlNameTable_t71772148 * get_nameTable_8() const { return ___nameTable_8; }
	inline XmlNameTable_t71772148 ** get_address_of_nameTable_8() { return &___nameTable_8; }
	inline void set_nameTable_8(XmlNameTable_t71772148 * value)
	{
		___nameTable_8 = value;
		Il2CppCodeGenWriteBarrier((&___nameTable_8), value);
	}

	inline static int32_t get_offset_of_baseURI_9() { return static_cast<int32_t>(offsetof(XmlDocument_t2837193595, ___baseURI_9)); }
	inline String_t* get_baseURI_9() const { return ___baseURI_9; }
	inline String_t** get_address_of_baseURI_9() { return &___baseURI_9; }
	inline void set_baseURI_9(String_t* value)
	{
		___baseURI_9 = value;
		Il2CppCodeGenWriteBarrier((&___baseURI_9), value);
	}

	inline static int32_t get_offset_of_implementation_10() { return static_cast<int32_t>(offsetof(XmlDocument_t2837193595, ___implementation_10)); }
	inline XmlImplementation_t254178875 * get_implementation_10() const { return ___implementation_10; }
	inline XmlImplementation_t254178875 ** get_address_of_implementation_10() { return &___implementation_10; }
	inline void set_implementation_10(XmlImplementation_t254178875 * value)
	{
		___implementation_10 = value;
		Il2CppCodeGenWriteBarrier((&___implementation_10), value);
	}

	inline static int32_t get_offset_of_preserveWhitespace_11() { return static_cast<int32_t>(offsetof(XmlDocument_t2837193595, ___preserveWhitespace_11)); }
	inline bool get_preserveWhitespace_11() const { return ___preserveWhitespace_11; }
	inline bool* get_address_of_preserveWhitespace_11() { return &___preserveWhitespace_11; }
	inline void set_preserveWhitespace_11(bool value)
	{
		___preserveWhitespace_11 = value;
	}

	inline static int32_t get_offset_of_resolver_12() { return static_cast<int32_t>(offsetof(XmlDocument_t2837193595, ___resolver_12)); }
	inline XmlResolver_t626023767 * get_resolver_12() const { return ___resolver_12; }
	inline XmlResolver_t626023767 ** get_address_of_resolver_12() { return &___resolver_12; }
	inline void set_resolver_12(XmlResolver_t626023767 * value)
	{
		___resolver_12 = value;
		Il2CppCodeGenWriteBarrier((&___resolver_12), value);
	}

	inline static int32_t get_offset_of_idTable_13() { return static_cast<int32_t>(offsetof(XmlDocument_t2837193595, ___idTable_13)); }
	inline Hashtable_t1853889766 * get_idTable_13() const { return ___idTable_13; }
	inline Hashtable_t1853889766 ** get_address_of_idTable_13() { return &___idTable_13; }
	inline void set_idTable_13(Hashtable_t1853889766 * value)
	{
		___idTable_13 = value;
		Il2CppCodeGenWriteBarrier((&___idTable_13), value);
	}

	inline static int32_t get_offset_of_nameCache_14() { return static_cast<int32_t>(offsetof(XmlDocument_t2837193595, ___nameCache_14)); }
	inline XmlNameEntryCache_t2890546907 * get_nameCache_14() const { return ___nameCache_14; }
	inline XmlNameEntryCache_t2890546907 ** get_address_of_nameCache_14() { return &___nameCache_14; }
	inline void set_nameCache_14(XmlNameEntryCache_t2890546907 * value)
	{
		___nameCache_14 = value;
		Il2CppCodeGenWriteBarrier((&___nameCache_14), value);
	}

	inline static int32_t get_offset_of_lastLinkedChild_15() { return static_cast<int32_t>(offsetof(XmlDocument_t2837193595, ___lastLinkedChild_15)); }
	inline XmlLinkedNode_t1437094927 * get_lastLinkedChild_15() const { return ___lastLinkedChild_15; }
	inline XmlLinkedNode_t1437094927 ** get_address_of_lastLinkedChild_15() { return &___lastLinkedChild_15; }
	inline void set_lastLinkedChild_15(XmlLinkedNode_t1437094927 * value)
	{
		___lastLinkedChild_15 = value;
		Il2CppCodeGenWriteBarrier((&___lastLinkedChild_15), value);
	}

	inline static int32_t get_offset_of_nsNodeXml_16() { return static_cast<int32_t>(offsetof(XmlDocument_t2837193595, ___nsNodeXml_16)); }
	inline XmlAttribute_t1173852259 * get_nsNodeXml_16() const { return ___nsNodeXml_16; }
	inline XmlAttribute_t1173852259 ** get_address_of_nsNodeXml_16() { return &___nsNodeXml_16; }
	inline void set_nsNodeXml_16(XmlAttribute_t1173852259 * value)
	{
		___nsNodeXml_16 = value;
		Il2CppCodeGenWriteBarrier((&___nsNodeXml_16), value);
	}

	inline static int32_t get_offset_of_schemas_17() { return static_cast<int32_t>(offsetof(XmlDocument_t2837193595, ___schemas_17)); }
	inline XmlSchemaSet_t266093086 * get_schemas_17() const { return ___schemas_17; }
	inline XmlSchemaSet_t266093086 ** get_address_of_schemas_17() { return &___schemas_17; }
	inline void set_schemas_17(XmlSchemaSet_t266093086 * value)
	{
		___schemas_17 = value;
		Il2CppCodeGenWriteBarrier((&___schemas_17), value);
	}

	inline static int32_t get_offset_of_schemaInfo_18() { return static_cast<int32_t>(offsetof(XmlDocument_t2837193595, ___schemaInfo_18)); }
	inline RuntimeObject* get_schemaInfo_18() const { return ___schemaInfo_18; }
	inline RuntimeObject** get_address_of_schemaInfo_18() { return &___schemaInfo_18; }
	inline void set_schemaInfo_18(RuntimeObject* value)
	{
		___schemaInfo_18 = value;
		Il2CppCodeGenWriteBarrier((&___schemaInfo_18), value);
	}

	inline static int32_t get_offset_of_loadMode_19() { return static_cast<int32_t>(offsetof(XmlDocument_t2837193595, ___loadMode_19)); }
	inline bool get_loadMode_19() const { return ___loadMode_19; }
	inline bool* get_address_of_loadMode_19() { return &___loadMode_19; }
	inline void set_loadMode_19(bool value)
	{
		___loadMode_19 = value;
	}

	inline static int32_t get_offset_of_NodeChanged_20() { return static_cast<int32_t>(offsetof(XmlDocument_t2837193595, ___NodeChanged_20)); }
	inline XmlNodeChangedEventHandler_t1533444722 * get_NodeChanged_20() const { return ___NodeChanged_20; }
	inline XmlNodeChangedEventHandler_t1533444722 ** get_address_of_NodeChanged_20() { return &___NodeChanged_20; }
	inline void set_NodeChanged_20(XmlNodeChangedEventHandler_t1533444722 * value)
	{
		___NodeChanged_20 = value;
		Il2CppCodeGenWriteBarrier((&___NodeChanged_20), value);
	}

	inline static int32_t get_offset_of_NodeChanging_21() { return static_cast<int32_t>(offsetof(XmlDocument_t2837193595, ___NodeChanging_21)); }
	inline XmlNodeChangedEventHandler_t1533444722 * get_NodeChanging_21() const { return ___NodeChanging_21; }
	inline XmlNodeChangedEventHandler_t1533444722 ** get_address_of_NodeChanging_21() { return &___NodeChanging_21; }
	inline void set_NodeChanging_21(XmlNodeChangedEventHandler_t1533444722 * value)
	{
		___NodeChanging_21 = value;
		Il2CppCodeGenWriteBarrier((&___NodeChanging_21), value);
	}

	inline static int32_t get_offset_of_NodeInserted_22() { return static_cast<int32_t>(offsetof(XmlDocument_t2837193595, ___NodeInserted_22)); }
	inline XmlNodeChangedEventHandler_t1533444722 * get_NodeInserted_22() const { return ___NodeInserted_22; }
	inline XmlNodeChangedEventHandler_t1533444722 ** get_address_of_NodeInserted_22() { return &___NodeInserted_22; }
	inline void set_NodeInserted_22(XmlNodeChangedEventHandler_t1533444722 * value)
	{
		___NodeInserted_22 = value;
		Il2CppCodeGenWriteBarrier((&___NodeInserted_22), value);
	}

	inline static int32_t get_offset_of_NodeInserting_23() { return static_cast<int32_t>(offsetof(XmlDocument_t2837193595, ___NodeInserting_23)); }
	inline XmlNodeChangedEventHandler_t1533444722 * get_NodeInserting_23() const { return ___NodeInserting_23; }
	inline XmlNodeChangedEventHandler_t1533444722 ** get_address_of_NodeInserting_23() { return &___NodeInserting_23; }
	inline void set_NodeInserting_23(XmlNodeChangedEventHandler_t1533444722 * value)
	{
		___NodeInserting_23 = value;
		Il2CppCodeGenWriteBarrier((&___NodeInserting_23), value);
	}

	inline static int32_t get_offset_of_NodeRemoved_24() { return static_cast<int32_t>(offsetof(XmlDocument_t2837193595, ___NodeRemoved_24)); }
	inline XmlNodeChangedEventHandler_t1533444722 * get_NodeRemoved_24() const { return ___NodeRemoved_24; }
	inline XmlNodeChangedEventHandler_t1533444722 ** get_address_of_NodeRemoved_24() { return &___NodeRemoved_24; }
	inline void set_NodeRemoved_24(XmlNodeChangedEventHandler_t1533444722 * value)
	{
		___NodeRemoved_24 = value;
		Il2CppCodeGenWriteBarrier((&___NodeRemoved_24), value);
	}

	inline static int32_t get_offset_of_NodeRemoving_25() { return static_cast<int32_t>(offsetof(XmlDocument_t2837193595, ___NodeRemoving_25)); }
	inline XmlNodeChangedEventHandler_t1533444722 * get_NodeRemoving_25() const { return ___NodeRemoving_25; }
	inline XmlNodeChangedEventHandler_t1533444722 ** get_address_of_NodeRemoving_25() { return &___NodeRemoving_25; }
	inline void set_NodeRemoving_25(XmlNodeChangedEventHandler_t1533444722 * value)
	{
		___NodeRemoving_25 = value;
		Il2CppCodeGenWriteBarrier((&___NodeRemoving_25), value);
	}
};

struct XmlDocument_t2837193595_StaticFields
{
public:
	// System.Type[] System.Xml.XmlDocument::optimal_create_types
	TypeU5BU5D_t3940880105* ___optimal_create_types_5;

public:
	inline static int32_t get_offset_of_optimal_create_types_5() { return static_cast<int32_t>(offsetof(XmlDocument_t2837193595_StaticFields, ___optimal_create_types_5)); }
	inline TypeU5BU5D_t3940880105* get_optimal_create_types_5() const { return ___optimal_create_types_5; }
	inline TypeU5BU5D_t3940880105** get_address_of_optimal_create_types_5() { return &___optimal_create_types_5; }
	inline void set_optimal_create_types_5(TypeU5BU5D_t3940880105* value)
	{
		___optimal_create_types_5 = value;
		Il2CppCodeGenWriteBarrier((&___optimal_create_types_5), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // XMLDOCUMENT_T2837193595_H
#ifndef DOUBLE_T594665363_H
#define DOUBLE_T594665363_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Double
struct  Double_t594665363 
{
public:
	// System.Double System.Double::m_value
	double ___m_value_13;

public:
	inline static int32_t get_offset_of_m_value_13() { return static_cast<int32_t>(offsetof(Double_t594665363, ___m_value_13)); }
	inline double get_m_value_13() const { return ___m_value_13; }
	inline double* get_address_of_m_value_13() { return &___m_value_13; }
	inline void set_m_value_13(double value)
	{
		___m_value_13 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DOUBLE_T594665363_H
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
#ifndef BASEEVENTDATA_T3903027533_H
#define BASEEVENTDATA_T3903027533_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.EventSystems.BaseEventData
struct  BaseEventData_t3903027533  : public AbstractEventData_t4171500731
{
public:
	// UnityEngine.EventSystems.EventSystem UnityEngine.EventSystems.BaseEventData::m_EventSystem
	EventSystem_t1003666588 * ___m_EventSystem_1;

public:
	inline static int32_t get_offset_of_m_EventSystem_1() { return static_cast<int32_t>(offsetof(BaseEventData_t3903027533, ___m_EventSystem_1)); }
	inline EventSystem_t1003666588 * get_m_EventSystem_1() const { return ___m_EventSystem_1; }
	inline EventSystem_t1003666588 ** get_address_of_m_EventSystem_1() { return &___m_EventSystem_1; }
	inline void set_m_EventSystem_1(EventSystem_t1003666588 * value)
	{
		___m_EventSystem_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_EventSystem_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BASEEVENTDATA_T3903027533_H
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
#ifndef CHAR_T3634460470_H
#define CHAR_T3634460470_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Char
struct  Char_t3634460470 
{
public:
	// System.Char System.Char::m_value
	Il2CppChar ___m_value_2;

public:
	inline static int32_t get_offset_of_m_value_2() { return static_cast<int32_t>(offsetof(Char_t3634460470, ___m_value_2)); }
	inline Il2CppChar get_m_value_2() const { return ___m_value_2; }
	inline Il2CppChar* get_address_of_m_value_2() { return &___m_value_2; }
	inline void set_m_value_2(Il2CppChar value)
	{
		___m_value_2 = value;
	}
};

struct Char_t3634460470_StaticFields
{
public:
	// System.Byte* System.Char::category_data
	uint8_t* ___category_data_3;
	// System.Byte* System.Char::numeric_data
	uint8_t* ___numeric_data_4;
	// System.Double* System.Char::numeric_data_values
	double* ___numeric_data_values_5;
	// System.UInt16* System.Char::to_lower_data_low
	uint16_t* ___to_lower_data_low_6;
	// System.UInt16* System.Char::to_lower_data_high
	uint16_t* ___to_lower_data_high_7;
	// System.UInt16* System.Char::to_upper_data_low
	uint16_t* ___to_upper_data_low_8;
	// System.UInt16* System.Char::to_upper_data_high
	uint16_t* ___to_upper_data_high_9;

public:
	inline static int32_t get_offset_of_category_data_3() { return static_cast<int32_t>(offsetof(Char_t3634460470_StaticFields, ___category_data_3)); }
	inline uint8_t* get_category_data_3() const { return ___category_data_3; }
	inline uint8_t** get_address_of_category_data_3() { return &___category_data_3; }
	inline void set_category_data_3(uint8_t* value)
	{
		___category_data_3 = value;
	}

	inline static int32_t get_offset_of_numeric_data_4() { return static_cast<int32_t>(offsetof(Char_t3634460470_StaticFields, ___numeric_data_4)); }
	inline uint8_t* get_numeric_data_4() const { return ___numeric_data_4; }
	inline uint8_t** get_address_of_numeric_data_4() { return &___numeric_data_4; }
	inline void set_numeric_data_4(uint8_t* value)
	{
		___numeric_data_4 = value;
	}

	inline static int32_t get_offset_of_numeric_data_values_5() { return static_cast<int32_t>(offsetof(Char_t3634460470_StaticFields, ___numeric_data_values_5)); }
	inline double* get_numeric_data_values_5() const { return ___numeric_data_values_5; }
	inline double** get_address_of_numeric_data_values_5() { return &___numeric_data_values_5; }
	inline void set_numeric_data_values_5(double* value)
	{
		___numeric_data_values_5 = value;
	}

	inline static int32_t get_offset_of_to_lower_data_low_6() { return static_cast<int32_t>(offsetof(Char_t3634460470_StaticFields, ___to_lower_data_low_6)); }
	inline uint16_t* get_to_lower_data_low_6() const { return ___to_lower_data_low_6; }
	inline uint16_t** get_address_of_to_lower_data_low_6() { return &___to_lower_data_low_6; }
	inline void set_to_lower_data_low_6(uint16_t* value)
	{
		___to_lower_data_low_6 = value;
	}

	inline static int32_t get_offset_of_to_lower_data_high_7() { return static_cast<int32_t>(offsetof(Char_t3634460470_StaticFields, ___to_lower_data_high_7)); }
	inline uint16_t* get_to_lower_data_high_7() const { return ___to_lower_data_high_7; }
	inline uint16_t** get_address_of_to_lower_data_high_7() { return &___to_lower_data_high_7; }
	inline void set_to_lower_data_high_7(uint16_t* value)
	{
		___to_lower_data_high_7 = value;
	}

	inline static int32_t get_offset_of_to_upper_data_low_8() { return static_cast<int32_t>(offsetof(Char_t3634460470_StaticFields, ___to_upper_data_low_8)); }
	inline uint16_t* get_to_upper_data_low_8() const { return ___to_upper_data_low_8; }
	inline uint16_t** get_address_of_to_upper_data_low_8() { return &___to_upper_data_low_8; }
	inline void set_to_upper_data_low_8(uint16_t* value)
	{
		___to_upper_data_low_8 = value;
	}

	inline static int32_t get_offset_of_to_upper_data_high_9() { return static_cast<int32_t>(offsetof(Char_t3634460470_StaticFields, ___to_upper_data_high_9)); }
	inline uint16_t* get_to_upper_data_high_9() const { return ___to_upper_data_high_9; }
	inline uint16_t** get_address_of_to_upper_data_high_9() { return &___to_upper_data_high_9; }
	inline void set_to_upper_data_high_9(uint16_t* value)
	{
		___to_upper_data_high_9 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CHAR_T3634460470_H
#ifndef DELEGATE_T1188392813_H
#define DELEGATE_T1188392813_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Delegate
struct  Delegate_t1188392813  : public RuntimeObject
{
public:
	// System.IntPtr System.Delegate::method_ptr
	Il2CppMethodPointer ___method_ptr_0;
	// System.IntPtr System.Delegate::invoke_impl
	intptr_t ___invoke_impl_1;
	// System.Object System.Delegate::m_target
	RuntimeObject * ___m_target_2;
	// System.IntPtr System.Delegate::method
	intptr_t ___method_3;
	// System.IntPtr System.Delegate::delegate_trampoline
	intptr_t ___delegate_trampoline_4;
	// System.IntPtr System.Delegate::method_code
	intptr_t ___method_code_5;
	// System.Reflection.MethodInfo System.Delegate::method_info
	MethodInfo_t * ___method_info_6;
	// System.Reflection.MethodInfo System.Delegate::original_method_info
	MethodInfo_t * ___original_method_info_7;
	// System.DelegateData System.Delegate::data
	DelegateData_t1677132599 * ___data_8;

public:
	inline static int32_t get_offset_of_method_ptr_0() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___method_ptr_0)); }
	inline Il2CppMethodPointer get_method_ptr_0() const { return ___method_ptr_0; }
	inline Il2CppMethodPointer* get_address_of_method_ptr_0() { return &___method_ptr_0; }
	inline void set_method_ptr_0(Il2CppMethodPointer value)
	{
		___method_ptr_0 = value;
	}

	inline static int32_t get_offset_of_invoke_impl_1() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___invoke_impl_1)); }
	inline intptr_t get_invoke_impl_1() const { return ___invoke_impl_1; }
	inline intptr_t* get_address_of_invoke_impl_1() { return &___invoke_impl_1; }
	inline void set_invoke_impl_1(intptr_t value)
	{
		___invoke_impl_1 = value;
	}

	inline static int32_t get_offset_of_m_target_2() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___m_target_2)); }
	inline RuntimeObject * get_m_target_2() const { return ___m_target_2; }
	inline RuntimeObject ** get_address_of_m_target_2() { return &___m_target_2; }
	inline void set_m_target_2(RuntimeObject * value)
	{
		___m_target_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_target_2), value);
	}

	inline static int32_t get_offset_of_method_3() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___method_3)); }
	inline intptr_t get_method_3() const { return ___method_3; }
	inline intptr_t* get_address_of_method_3() { return &___method_3; }
	inline void set_method_3(intptr_t value)
	{
		___method_3 = value;
	}

	inline static int32_t get_offset_of_delegate_trampoline_4() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___delegate_trampoline_4)); }
	inline intptr_t get_delegate_trampoline_4() const { return ___delegate_trampoline_4; }
	inline intptr_t* get_address_of_delegate_trampoline_4() { return &___delegate_trampoline_4; }
	inline void set_delegate_trampoline_4(intptr_t value)
	{
		___delegate_trampoline_4 = value;
	}

	inline static int32_t get_offset_of_method_code_5() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___method_code_5)); }
	inline intptr_t get_method_code_5() const { return ___method_code_5; }
	inline intptr_t* get_address_of_method_code_5() { return &___method_code_5; }
	inline void set_method_code_5(intptr_t value)
	{
		___method_code_5 = value;
	}

	inline static int32_t get_offset_of_method_info_6() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___method_info_6)); }
	inline MethodInfo_t * get_method_info_6() const { return ___method_info_6; }
	inline MethodInfo_t ** get_address_of_method_info_6() { return &___method_info_6; }
	inline void set_method_info_6(MethodInfo_t * value)
	{
		___method_info_6 = value;
		Il2CppCodeGenWriteBarrier((&___method_info_6), value);
	}

	inline static int32_t get_offset_of_original_method_info_7() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___original_method_info_7)); }
	inline MethodInfo_t * get_original_method_info_7() const { return ___original_method_info_7; }
	inline MethodInfo_t ** get_address_of_original_method_info_7() { return &___original_method_info_7; }
	inline void set_original_method_info_7(MethodInfo_t * value)
	{
		___original_method_info_7 = value;
		Il2CppCodeGenWriteBarrier((&___original_method_info_7), value);
	}

	inline static int32_t get_offset_of_data_8() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___data_8)); }
	inline DelegateData_t1677132599 * get_data_8() const { return ___data_8; }
	inline DelegateData_t1677132599 ** get_address_of_data_8() { return &___data_8; }
	inline void set_data_8(DelegateData_t1677132599 * value)
	{
		___data_8 = value;
		Il2CppCodeGenWriteBarrier((&___data_8), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DELEGATE_T1188392813_H
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
#ifndef LINETYPE_T4214648469_H
#define LINETYPE_T4214648469_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.InputField/LineType
struct  LineType_t4214648469 
{
public:
	// System.Int32 UnityEngine.UI.InputField/LineType::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(LineType_t4214648469, ___value___1)); }
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
#endif // LINETYPE_T4214648469_H
#ifndef CHARACTERVALIDATION_T4051914437_H
#define CHARACTERVALIDATION_T4051914437_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.InputField/CharacterValidation
struct  CharacterValidation_t4051914437 
{
public:
	// System.Int32 UnityEngine.UI.InputField/CharacterValidation::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(CharacterValidation_t4051914437, ___value___1)); }
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
#endif // CHARACTERVALIDATION_T4051914437_H
#ifndef BINDINGFLAGS_T2721792723_H
#define BINDINGFLAGS_T2721792723_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.BindingFlags
struct  BindingFlags_t2721792723 
{
public:
	// System.Int32 System.Reflection.BindingFlags::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(BindingFlags_t2721792723, ___value___1)); }
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
#endif // BINDINGFLAGS_T2721792723_H
#ifndef TOUCHSCREENKEYBOARDTYPE_T1530597702_H
#define TOUCHSCREENKEYBOARDTYPE_T1530597702_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.TouchScreenKeyboardType
struct  TouchScreenKeyboardType_t1530597702 
{
public:
	// System.Int32 UnityEngine.TouchScreenKeyboardType::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(TouchScreenKeyboardType_t1530597702, ___value___1)); }
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
#endif // TOUCHSCREENKEYBOARDTYPE_T1530597702_H
#ifndef INPUTTYPE_T1770400679_H
#define INPUTTYPE_T1770400679_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.InputField/InputType
struct  InputType_t1770400679 
{
public:
	// System.Int32 UnityEngine.UI.InputField/InputType::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(InputType_t1770400679, ___value___1)); }
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
#endif // INPUTTYPE_T1770400679_H
#ifndef CONTENTTYPE_T1787303396_H
#define CONTENTTYPE_T1787303396_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.InputField/ContentType
struct  ContentType_t1787303396 
{
public:
	// System.Int32 UnityEngine.UI.InputField/ContentType::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(ContentType_t1787303396, ___value___1)); }
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
#endif // CONTENTTYPE_T1787303396_H
#ifndef INPUTBUTTON_T3704011348_H
#define INPUTBUTTON_T3704011348_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.EventSystems.PointerEventData/InputButton
struct  InputButton_t3704011348 
{
public:
	// System.Int32 UnityEngine.EventSystems.PointerEventData/InputButton::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(InputButton_t3704011348, ___value___1)); }
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
#endif // INPUTBUTTON_T3704011348_H
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
#ifndef RAYCASTRESULT_T3360306849_H
#define RAYCASTRESULT_T3360306849_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.EventSystems.RaycastResult
struct  RaycastResult_t3360306849 
{
public:
	// UnityEngine.GameObject UnityEngine.EventSystems.RaycastResult::m_GameObject
	GameObject_t1113636619 * ___m_GameObject_0;
	// UnityEngine.EventSystems.BaseRaycaster UnityEngine.EventSystems.RaycastResult::module
	BaseRaycaster_t4150874583 * ___module_1;
	// System.Single UnityEngine.EventSystems.RaycastResult::distance
	float ___distance_2;
	// System.Single UnityEngine.EventSystems.RaycastResult::index
	float ___index_3;
	// System.Int32 UnityEngine.EventSystems.RaycastResult::depth
	int32_t ___depth_4;
	// System.Int32 UnityEngine.EventSystems.RaycastResult::sortingLayer
	int32_t ___sortingLayer_5;
	// System.Int32 UnityEngine.EventSystems.RaycastResult::sortingOrder
	int32_t ___sortingOrder_6;
	// UnityEngine.Vector3 UnityEngine.EventSystems.RaycastResult::worldPosition
	Vector3_t3722313464  ___worldPosition_7;
	// UnityEngine.Vector3 UnityEngine.EventSystems.RaycastResult::worldNormal
	Vector3_t3722313464  ___worldNormal_8;
	// UnityEngine.Vector2 UnityEngine.EventSystems.RaycastResult::screenPosition
	Vector2_t2156229523  ___screenPosition_9;

public:
	inline static int32_t get_offset_of_m_GameObject_0() { return static_cast<int32_t>(offsetof(RaycastResult_t3360306849, ___m_GameObject_0)); }
	inline GameObject_t1113636619 * get_m_GameObject_0() const { return ___m_GameObject_0; }
	inline GameObject_t1113636619 ** get_address_of_m_GameObject_0() { return &___m_GameObject_0; }
	inline void set_m_GameObject_0(GameObject_t1113636619 * value)
	{
		___m_GameObject_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_GameObject_0), value);
	}

	inline static int32_t get_offset_of_module_1() { return static_cast<int32_t>(offsetof(RaycastResult_t3360306849, ___module_1)); }
	inline BaseRaycaster_t4150874583 * get_module_1() const { return ___module_1; }
	inline BaseRaycaster_t4150874583 ** get_address_of_module_1() { return &___module_1; }
	inline void set_module_1(BaseRaycaster_t4150874583 * value)
	{
		___module_1 = value;
		Il2CppCodeGenWriteBarrier((&___module_1), value);
	}

	inline static int32_t get_offset_of_distance_2() { return static_cast<int32_t>(offsetof(RaycastResult_t3360306849, ___distance_2)); }
	inline float get_distance_2() const { return ___distance_2; }
	inline float* get_address_of_distance_2() { return &___distance_2; }
	inline void set_distance_2(float value)
	{
		___distance_2 = value;
	}

	inline static int32_t get_offset_of_index_3() { return static_cast<int32_t>(offsetof(RaycastResult_t3360306849, ___index_3)); }
	inline float get_index_3() const { return ___index_3; }
	inline float* get_address_of_index_3() { return &___index_3; }
	inline void set_index_3(float value)
	{
		___index_3 = value;
	}

	inline static int32_t get_offset_of_depth_4() { return static_cast<int32_t>(offsetof(RaycastResult_t3360306849, ___depth_4)); }
	inline int32_t get_depth_4() const { return ___depth_4; }
	inline int32_t* get_address_of_depth_4() { return &___depth_4; }
	inline void set_depth_4(int32_t value)
	{
		___depth_4 = value;
	}

	inline static int32_t get_offset_of_sortingLayer_5() { return static_cast<int32_t>(offsetof(RaycastResult_t3360306849, ___sortingLayer_5)); }
	inline int32_t get_sortingLayer_5() const { return ___sortingLayer_5; }
	inline int32_t* get_address_of_sortingLayer_5() { return &___sortingLayer_5; }
	inline void set_sortingLayer_5(int32_t value)
	{
		___sortingLayer_5 = value;
	}

	inline static int32_t get_offset_of_sortingOrder_6() { return static_cast<int32_t>(offsetof(RaycastResult_t3360306849, ___sortingOrder_6)); }
	inline int32_t get_sortingOrder_6() const { return ___sortingOrder_6; }
	inline int32_t* get_address_of_sortingOrder_6() { return &___sortingOrder_6; }
	inline void set_sortingOrder_6(int32_t value)
	{
		___sortingOrder_6 = value;
	}

	inline static int32_t get_offset_of_worldPosition_7() { return static_cast<int32_t>(offsetof(RaycastResult_t3360306849, ___worldPosition_7)); }
	inline Vector3_t3722313464  get_worldPosition_7() const { return ___worldPosition_7; }
	inline Vector3_t3722313464 * get_address_of_worldPosition_7() { return &___worldPosition_7; }
	inline void set_worldPosition_7(Vector3_t3722313464  value)
	{
		___worldPosition_7 = value;
	}

	inline static int32_t get_offset_of_worldNormal_8() { return static_cast<int32_t>(offsetof(RaycastResult_t3360306849, ___worldNormal_8)); }
	inline Vector3_t3722313464  get_worldNormal_8() const { return ___worldNormal_8; }
	inline Vector3_t3722313464 * get_address_of_worldNormal_8() { return &___worldNormal_8; }
	inline void set_worldNormal_8(Vector3_t3722313464  value)
	{
		___worldNormal_8 = value;
	}

	inline static int32_t get_offset_of_screenPosition_9() { return static_cast<int32_t>(offsetof(RaycastResult_t3360306849, ___screenPosition_9)); }
	inline Vector2_t2156229523  get_screenPosition_9() const { return ___screenPosition_9; }
	inline Vector2_t2156229523 * get_address_of_screenPosition_9() { return &___screenPosition_9; }
	inline void set_screenPosition_9(Vector2_t2156229523  value)
	{
		___screenPosition_9 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.EventSystems.RaycastResult
struct RaycastResult_t3360306849_marshaled_pinvoke
{
	GameObject_t1113636619 * ___m_GameObject_0;
	BaseRaycaster_t4150874583 * ___module_1;
	float ___distance_2;
	float ___index_3;
	int32_t ___depth_4;
	int32_t ___sortingLayer_5;
	int32_t ___sortingOrder_6;
	Vector3_t3722313464  ___worldPosition_7;
	Vector3_t3722313464  ___worldNormal_8;
	Vector2_t2156229523  ___screenPosition_9;
};
// Native definition for COM marshalling of UnityEngine.EventSystems.RaycastResult
struct RaycastResult_t3360306849_marshaled_com
{
	GameObject_t1113636619 * ___m_GameObject_0;
	BaseRaycaster_t4150874583 * ___module_1;
	float ___distance_2;
	float ___index_3;
	int32_t ___depth_4;
	int32_t ___sortingLayer_5;
	int32_t ___sortingOrder_6;
	Vector3_t3722313464  ___worldPosition_7;
	Vector3_t3722313464  ___worldNormal_8;
	Vector2_t2156229523  ___screenPosition_9;
};
#endif // RAYCASTRESULT_T3360306849_H
#ifndef BUTTONCLICKEDEVENT_T48803504_H
#define BUTTONCLICKEDEVENT_T48803504_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.Button/ButtonClickedEvent
struct  ButtonClickedEvent_t48803504  : public UnityEvent_t2581268647
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BUTTONCLICKEDEVENT_T48803504_H
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
#ifndef RUNTIMETYPEHANDLE_T3027515415_H
#define RUNTIMETYPEHANDLE_T3027515415_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.RuntimeTypeHandle
struct  RuntimeTypeHandle_t3027515415 
{
public:
	// System.IntPtr System.RuntimeTypeHandle::value
	intptr_t ___value_0;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(RuntimeTypeHandle_t3027515415, ___value_0)); }
	inline intptr_t get_value_0() const { return ___value_0; }
	inline intptr_t* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(intptr_t value)
	{
		___value_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RUNTIMETYPEHANDLE_T3027515415_H
#ifndef ALGORITHMTYPE_T644850295_H
#define ALGORITHMTYPE_T644850295_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// AlgorithmChooser/AlgorithmType
struct  AlgorithmType_t644850295 
{
public:
	// System.Int32 AlgorithmChooser/AlgorithmType::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(AlgorithmType_t644850295, ___value___1)); }
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
#endif // ALGORITHMTYPE_T644850295_H
#ifndef MULTICASTDELEGATE_T_H
#define MULTICASTDELEGATE_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.MulticastDelegate
struct  MulticastDelegate_t  : public Delegate_t1188392813
{
public:
	// System.MulticastDelegate System.MulticastDelegate::prev
	MulticastDelegate_t * ___prev_9;
	// System.MulticastDelegate System.MulticastDelegate::kpm_next
	MulticastDelegate_t * ___kpm_next_10;

public:
	inline static int32_t get_offset_of_prev_9() { return static_cast<int32_t>(offsetof(MulticastDelegate_t, ___prev_9)); }
	inline MulticastDelegate_t * get_prev_9() const { return ___prev_9; }
	inline MulticastDelegate_t ** get_address_of_prev_9() { return &___prev_9; }
	inline void set_prev_9(MulticastDelegate_t * value)
	{
		___prev_9 = value;
		Il2CppCodeGenWriteBarrier((&___prev_9), value);
	}

	inline static int32_t get_offset_of_kpm_next_10() { return static_cast<int32_t>(offsetof(MulticastDelegate_t, ___kpm_next_10)); }
	inline MulticastDelegate_t * get_kpm_next_10() const { return ___kpm_next_10; }
	inline MulticastDelegate_t ** get_address_of_kpm_next_10() { return &___kpm_next_10; }
	inline void set_kpm_next_10(MulticastDelegate_t * value)
	{
		___kpm_next_10 = value;
		Il2CppCodeGenWriteBarrier((&___kpm_next_10), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MULTICASTDELEGATE_T_H
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
#ifndef POINTEREVENTDATA_T3807901092_H
#define POINTEREVENTDATA_T3807901092_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.EventSystems.PointerEventData
struct  PointerEventData_t3807901092  : public BaseEventData_t3903027533
{
public:
	// UnityEngine.GameObject UnityEngine.EventSystems.PointerEventData::<pointerEnter>k__BackingField
	GameObject_t1113636619 * ___U3CpointerEnterU3Ek__BackingField_2;
	// UnityEngine.GameObject UnityEngine.EventSystems.PointerEventData::m_PointerPress
	GameObject_t1113636619 * ___m_PointerPress_3;
	// UnityEngine.GameObject UnityEngine.EventSystems.PointerEventData::<lastPress>k__BackingField
	GameObject_t1113636619 * ___U3ClastPressU3Ek__BackingField_4;
	// UnityEngine.GameObject UnityEngine.EventSystems.PointerEventData::<rawPointerPress>k__BackingField
	GameObject_t1113636619 * ___U3CrawPointerPressU3Ek__BackingField_5;
	// UnityEngine.GameObject UnityEngine.EventSystems.PointerEventData::<pointerDrag>k__BackingField
	GameObject_t1113636619 * ___U3CpointerDragU3Ek__BackingField_6;
	// UnityEngine.EventSystems.RaycastResult UnityEngine.EventSystems.PointerEventData::<pointerCurrentRaycast>k__BackingField
	RaycastResult_t3360306849  ___U3CpointerCurrentRaycastU3Ek__BackingField_7;
	// UnityEngine.EventSystems.RaycastResult UnityEngine.EventSystems.PointerEventData::<pointerPressRaycast>k__BackingField
	RaycastResult_t3360306849  ___U3CpointerPressRaycastU3Ek__BackingField_8;
	// System.Collections.Generic.List`1<UnityEngine.GameObject> UnityEngine.EventSystems.PointerEventData::hovered
	List_1_t2585711361 * ___hovered_9;
	// System.Boolean UnityEngine.EventSystems.PointerEventData::<eligibleForClick>k__BackingField
	bool ___U3CeligibleForClickU3Ek__BackingField_10;
	// System.Int32 UnityEngine.EventSystems.PointerEventData::<pointerId>k__BackingField
	int32_t ___U3CpointerIdU3Ek__BackingField_11;
	// UnityEngine.Vector2 UnityEngine.EventSystems.PointerEventData::<position>k__BackingField
	Vector2_t2156229523  ___U3CpositionU3Ek__BackingField_12;
	// UnityEngine.Vector2 UnityEngine.EventSystems.PointerEventData::<delta>k__BackingField
	Vector2_t2156229523  ___U3CdeltaU3Ek__BackingField_13;
	// UnityEngine.Vector2 UnityEngine.EventSystems.PointerEventData::<pressPosition>k__BackingField
	Vector2_t2156229523  ___U3CpressPositionU3Ek__BackingField_14;
	// UnityEngine.Vector3 UnityEngine.EventSystems.PointerEventData::<worldPosition>k__BackingField
	Vector3_t3722313464  ___U3CworldPositionU3Ek__BackingField_15;
	// UnityEngine.Vector3 UnityEngine.EventSystems.PointerEventData::<worldNormal>k__BackingField
	Vector3_t3722313464  ___U3CworldNormalU3Ek__BackingField_16;
	// System.Single UnityEngine.EventSystems.PointerEventData::<clickTime>k__BackingField
	float ___U3CclickTimeU3Ek__BackingField_17;
	// System.Int32 UnityEngine.EventSystems.PointerEventData::<clickCount>k__BackingField
	int32_t ___U3CclickCountU3Ek__BackingField_18;
	// UnityEngine.Vector2 UnityEngine.EventSystems.PointerEventData::<scrollDelta>k__BackingField
	Vector2_t2156229523  ___U3CscrollDeltaU3Ek__BackingField_19;
	// System.Boolean UnityEngine.EventSystems.PointerEventData::<useDragThreshold>k__BackingField
	bool ___U3CuseDragThresholdU3Ek__BackingField_20;
	// System.Boolean UnityEngine.EventSystems.PointerEventData::<dragging>k__BackingField
	bool ___U3CdraggingU3Ek__BackingField_21;
	// UnityEngine.EventSystems.PointerEventData/InputButton UnityEngine.EventSystems.PointerEventData::<button>k__BackingField
	int32_t ___U3CbuttonU3Ek__BackingField_22;

public:
	inline static int32_t get_offset_of_U3CpointerEnterU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(PointerEventData_t3807901092, ___U3CpointerEnterU3Ek__BackingField_2)); }
	inline GameObject_t1113636619 * get_U3CpointerEnterU3Ek__BackingField_2() const { return ___U3CpointerEnterU3Ek__BackingField_2; }
	inline GameObject_t1113636619 ** get_address_of_U3CpointerEnterU3Ek__BackingField_2() { return &___U3CpointerEnterU3Ek__BackingField_2; }
	inline void set_U3CpointerEnterU3Ek__BackingField_2(GameObject_t1113636619 * value)
	{
		___U3CpointerEnterU3Ek__BackingField_2 = value;
		Il2CppCodeGenWriteBarrier((&___U3CpointerEnterU3Ek__BackingField_2), value);
	}

	inline static int32_t get_offset_of_m_PointerPress_3() { return static_cast<int32_t>(offsetof(PointerEventData_t3807901092, ___m_PointerPress_3)); }
	inline GameObject_t1113636619 * get_m_PointerPress_3() const { return ___m_PointerPress_3; }
	inline GameObject_t1113636619 ** get_address_of_m_PointerPress_3() { return &___m_PointerPress_3; }
	inline void set_m_PointerPress_3(GameObject_t1113636619 * value)
	{
		___m_PointerPress_3 = value;
		Il2CppCodeGenWriteBarrier((&___m_PointerPress_3), value);
	}

	inline static int32_t get_offset_of_U3ClastPressU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(PointerEventData_t3807901092, ___U3ClastPressU3Ek__BackingField_4)); }
	inline GameObject_t1113636619 * get_U3ClastPressU3Ek__BackingField_4() const { return ___U3ClastPressU3Ek__BackingField_4; }
	inline GameObject_t1113636619 ** get_address_of_U3ClastPressU3Ek__BackingField_4() { return &___U3ClastPressU3Ek__BackingField_4; }
	inline void set_U3ClastPressU3Ek__BackingField_4(GameObject_t1113636619 * value)
	{
		___U3ClastPressU3Ek__BackingField_4 = value;
		Il2CppCodeGenWriteBarrier((&___U3ClastPressU3Ek__BackingField_4), value);
	}

	inline static int32_t get_offset_of_U3CrawPointerPressU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(PointerEventData_t3807901092, ___U3CrawPointerPressU3Ek__BackingField_5)); }
	inline GameObject_t1113636619 * get_U3CrawPointerPressU3Ek__BackingField_5() const { return ___U3CrawPointerPressU3Ek__BackingField_5; }
	inline GameObject_t1113636619 ** get_address_of_U3CrawPointerPressU3Ek__BackingField_5() { return &___U3CrawPointerPressU3Ek__BackingField_5; }
	inline void set_U3CrawPointerPressU3Ek__BackingField_5(GameObject_t1113636619 * value)
	{
		___U3CrawPointerPressU3Ek__BackingField_5 = value;
		Il2CppCodeGenWriteBarrier((&___U3CrawPointerPressU3Ek__BackingField_5), value);
	}

	inline static int32_t get_offset_of_U3CpointerDragU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(PointerEventData_t3807901092, ___U3CpointerDragU3Ek__BackingField_6)); }
	inline GameObject_t1113636619 * get_U3CpointerDragU3Ek__BackingField_6() const { return ___U3CpointerDragU3Ek__BackingField_6; }
	inline GameObject_t1113636619 ** get_address_of_U3CpointerDragU3Ek__BackingField_6() { return &___U3CpointerDragU3Ek__BackingField_6; }
	inline void set_U3CpointerDragU3Ek__BackingField_6(GameObject_t1113636619 * value)
	{
		___U3CpointerDragU3Ek__BackingField_6 = value;
		Il2CppCodeGenWriteBarrier((&___U3CpointerDragU3Ek__BackingField_6), value);
	}

	inline static int32_t get_offset_of_U3CpointerCurrentRaycastU3Ek__BackingField_7() { return static_cast<int32_t>(offsetof(PointerEventData_t3807901092, ___U3CpointerCurrentRaycastU3Ek__BackingField_7)); }
	inline RaycastResult_t3360306849  get_U3CpointerCurrentRaycastU3Ek__BackingField_7() const { return ___U3CpointerCurrentRaycastU3Ek__BackingField_7; }
	inline RaycastResult_t3360306849 * get_address_of_U3CpointerCurrentRaycastU3Ek__BackingField_7() { return &___U3CpointerCurrentRaycastU3Ek__BackingField_7; }
	inline void set_U3CpointerCurrentRaycastU3Ek__BackingField_7(RaycastResult_t3360306849  value)
	{
		___U3CpointerCurrentRaycastU3Ek__BackingField_7 = value;
	}

	inline static int32_t get_offset_of_U3CpointerPressRaycastU3Ek__BackingField_8() { return static_cast<int32_t>(offsetof(PointerEventData_t3807901092, ___U3CpointerPressRaycastU3Ek__BackingField_8)); }
	inline RaycastResult_t3360306849  get_U3CpointerPressRaycastU3Ek__BackingField_8() const { return ___U3CpointerPressRaycastU3Ek__BackingField_8; }
	inline RaycastResult_t3360306849 * get_address_of_U3CpointerPressRaycastU3Ek__BackingField_8() { return &___U3CpointerPressRaycastU3Ek__BackingField_8; }
	inline void set_U3CpointerPressRaycastU3Ek__BackingField_8(RaycastResult_t3360306849  value)
	{
		___U3CpointerPressRaycastU3Ek__BackingField_8 = value;
	}

	inline static int32_t get_offset_of_hovered_9() { return static_cast<int32_t>(offsetof(PointerEventData_t3807901092, ___hovered_9)); }
	inline List_1_t2585711361 * get_hovered_9() const { return ___hovered_9; }
	inline List_1_t2585711361 ** get_address_of_hovered_9() { return &___hovered_9; }
	inline void set_hovered_9(List_1_t2585711361 * value)
	{
		___hovered_9 = value;
		Il2CppCodeGenWriteBarrier((&___hovered_9), value);
	}

	inline static int32_t get_offset_of_U3CeligibleForClickU3Ek__BackingField_10() { return static_cast<int32_t>(offsetof(PointerEventData_t3807901092, ___U3CeligibleForClickU3Ek__BackingField_10)); }
	inline bool get_U3CeligibleForClickU3Ek__BackingField_10() const { return ___U3CeligibleForClickU3Ek__BackingField_10; }
	inline bool* get_address_of_U3CeligibleForClickU3Ek__BackingField_10() { return &___U3CeligibleForClickU3Ek__BackingField_10; }
	inline void set_U3CeligibleForClickU3Ek__BackingField_10(bool value)
	{
		___U3CeligibleForClickU3Ek__BackingField_10 = value;
	}

	inline static int32_t get_offset_of_U3CpointerIdU3Ek__BackingField_11() { return static_cast<int32_t>(offsetof(PointerEventData_t3807901092, ___U3CpointerIdU3Ek__BackingField_11)); }
	inline int32_t get_U3CpointerIdU3Ek__BackingField_11() const { return ___U3CpointerIdU3Ek__BackingField_11; }
	inline int32_t* get_address_of_U3CpointerIdU3Ek__BackingField_11() { return &___U3CpointerIdU3Ek__BackingField_11; }
	inline void set_U3CpointerIdU3Ek__BackingField_11(int32_t value)
	{
		___U3CpointerIdU3Ek__BackingField_11 = value;
	}

	inline static int32_t get_offset_of_U3CpositionU3Ek__BackingField_12() { return static_cast<int32_t>(offsetof(PointerEventData_t3807901092, ___U3CpositionU3Ek__BackingField_12)); }
	inline Vector2_t2156229523  get_U3CpositionU3Ek__BackingField_12() const { return ___U3CpositionU3Ek__BackingField_12; }
	inline Vector2_t2156229523 * get_address_of_U3CpositionU3Ek__BackingField_12() { return &___U3CpositionU3Ek__BackingField_12; }
	inline void set_U3CpositionU3Ek__BackingField_12(Vector2_t2156229523  value)
	{
		___U3CpositionU3Ek__BackingField_12 = value;
	}

	inline static int32_t get_offset_of_U3CdeltaU3Ek__BackingField_13() { return static_cast<int32_t>(offsetof(PointerEventData_t3807901092, ___U3CdeltaU3Ek__BackingField_13)); }
	inline Vector2_t2156229523  get_U3CdeltaU3Ek__BackingField_13() const { return ___U3CdeltaU3Ek__BackingField_13; }
	inline Vector2_t2156229523 * get_address_of_U3CdeltaU3Ek__BackingField_13() { return &___U3CdeltaU3Ek__BackingField_13; }
	inline void set_U3CdeltaU3Ek__BackingField_13(Vector2_t2156229523  value)
	{
		___U3CdeltaU3Ek__BackingField_13 = value;
	}

	inline static int32_t get_offset_of_U3CpressPositionU3Ek__BackingField_14() { return static_cast<int32_t>(offsetof(PointerEventData_t3807901092, ___U3CpressPositionU3Ek__BackingField_14)); }
	inline Vector2_t2156229523  get_U3CpressPositionU3Ek__BackingField_14() const { return ___U3CpressPositionU3Ek__BackingField_14; }
	inline Vector2_t2156229523 * get_address_of_U3CpressPositionU3Ek__BackingField_14() { return &___U3CpressPositionU3Ek__BackingField_14; }
	inline void set_U3CpressPositionU3Ek__BackingField_14(Vector2_t2156229523  value)
	{
		___U3CpressPositionU3Ek__BackingField_14 = value;
	}

	inline static int32_t get_offset_of_U3CworldPositionU3Ek__BackingField_15() { return static_cast<int32_t>(offsetof(PointerEventData_t3807901092, ___U3CworldPositionU3Ek__BackingField_15)); }
	inline Vector3_t3722313464  get_U3CworldPositionU3Ek__BackingField_15() const { return ___U3CworldPositionU3Ek__BackingField_15; }
	inline Vector3_t3722313464 * get_address_of_U3CworldPositionU3Ek__BackingField_15() { return &___U3CworldPositionU3Ek__BackingField_15; }
	inline void set_U3CworldPositionU3Ek__BackingField_15(Vector3_t3722313464  value)
	{
		___U3CworldPositionU3Ek__BackingField_15 = value;
	}

	inline static int32_t get_offset_of_U3CworldNormalU3Ek__BackingField_16() { return static_cast<int32_t>(offsetof(PointerEventData_t3807901092, ___U3CworldNormalU3Ek__BackingField_16)); }
	inline Vector3_t3722313464  get_U3CworldNormalU3Ek__BackingField_16() const { return ___U3CworldNormalU3Ek__BackingField_16; }
	inline Vector3_t3722313464 * get_address_of_U3CworldNormalU3Ek__BackingField_16() { return &___U3CworldNormalU3Ek__BackingField_16; }
	inline void set_U3CworldNormalU3Ek__BackingField_16(Vector3_t3722313464  value)
	{
		___U3CworldNormalU3Ek__BackingField_16 = value;
	}

	inline static int32_t get_offset_of_U3CclickTimeU3Ek__BackingField_17() { return static_cast<int32_t>(offsetof(PointerEventData_t3807901092, ___U3CclickTimeU3Ek__BackingField_17)); }
	inline float get_U3CclickTimeU3Ek__BackingField_17() const { return ___U3CclickTimeU3Ek__BackingField_17; }
	inline float* get_address_of_U3CclickTimeU3Ek__BackingField_17() { return &___U3CclickTimeU3Ek__BackingField_17; }
	inline void set_U3CclickTimeU3Ek__BackingField_17(float value)
	{
		___U3CclickTimeU3Ek__BackingField_17 = value;
	}

	inline static int32_t get_offset_of_U3CclickCountU3Ek__BackingField_18() { return static_cast<int32_t>(offsetof(PointerEventData_t3807901092, ___U3CclickCountU3Ek__BackingField_18)); }
	inline int32_t get_U3CclickCountU3Ek__BackingField_18() const { return ___U3CclickCountU3Ek__BackingField_18; }
	inline int32_t* get_address_of_U3CclickCountU3Ek__BackingField_18() { return &___U3CclickCountU3Ek__BackingField_18; }
	inline void set_U3CclickCountU3Ek__BackingField_18(int32_t value)
	{
		___U3CclickCountU3Ek__BackingField_18 = value;
	}

	inline static int32_t get_offset_of_U3CscrollDeltaU3Ek__BackingField_19() { return static_cast<int32_t>(offsetof(PointerEventData_t3807901092, ___U3CscrollDeltaU3Ek__BackingField_19)); }
	inline Vector2_t2156229523  get_U3CscrollDeltaU3Ek__BackingField_19() const { return ___U3CscrollDeltaU3Ek__BackingField_19; }
	inline Vector2_t2156229523 * get_address_of_U3CscrollDeltaU3Ek__BackingField_19() { return &___U3CscrollDeltaU3Ek__BackingField_19; }
	inline void set_U3CscrollDeltaU3Ek__BackingField_19(Vector2_t2156229523  value)
	{
		___U3CscrollDeltaU3Ek__BackingField_19 = value;
	}

	inline static int32_t get_offset_of_U3CuseDragThresholdU3Ek__BackingField_20() { return static_cast<int32_t>(offsetof(PointerEventData_t3807901092, ___U3CuseDragThresholdU3Ek__BackingField_20)); }
	inline bool get_U3CuseDragThresholdU3Ek__BackingField_20() const { return ___U3CuseDragThresholdU3Ek__BackingField_20; }
	inline bool* get_address_of_U3CuseDragThresholdU3Ek__BackingField_20() { return &___U3CuseDragThresholdU3Ek__BackingField_20; }
	inline void set_U3CuseDragThresholdU3Ek__BackingField_20(bool value)
	{
		___U3CuseDragThresholdU3Ek__BackingField_20 = value;
	}

	inline static int32_t get_offset_of_U3CdraggingU3Ek__BackingField_21() { return static_cast<int32_t>(offsetof(PointerEventData_t3807901092, ___U3CdraggingU3Ek__BackingField_21)); }
	inline bool get_U3CdraggingU3Ek__BackingField_21() const { return ___U3CdraggingU3Ek__BackingField_21; }
	inline bool* get_address_of_U3CdraggingU3Ek__BackingField_21() { return &___U3CdraggingU3Ek__BackingField_21; }
	inline void set_U3CdraggingU3Ek__BackingField_21(bool value)
	{
		___U3CdraggingU3Ek__BackingField_21 = value;
	}

	inline static int32_t get_offset_of_U3CbuttonU3Ek__BackingField_22() { return static_cast<int32_t>(offsetof(PointerEventData_t3807901092, ___U3CbuttonU3Ek__BackingField_22)); }
	inline int32_t get_U3CbuttonU3Ek__BackingField_22() const { return ___U3CbuttonU3Ek__BackingField_22; }
	inline int32_t* get_address_of_U3CbuttonU3Ek__BackingField_22() { return &___U3CbuttonU3Ek__BackingField_22; }
	inline void set_U3CbuttonU3Ek__BackingField_22(int32_t value)
	{
		___U3CbuttonU3Ek__BackingField_22 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // POINTEREVENTDATA_T3807901092_H
#ifndef TYPE_T_H
#define TYPE_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Type
struct  Type_t  : public MemberInfo_t
{
public:
	// System.RuntimeTypeHandle System.Type::_impl
	RuntimeTypeHandle_t3027515415  ____impl_1;

public:
	inline static int32_t get_offset_of__impl_1() { return static_cast<int32_t>(offsetof(Type_t, ____impl_1)); }
	inline RuntimeTypeHandle_t3027515415  get__impl_1() const { return ____impl_1; }
	inline RuntimeTypeHandle_t3027515415 * get_address_of__impl_1() { return &____impl_1; }
	inline void set__impl_1(RuntimeTypeHandle_t3027515415  value)
	{
		____impl_1 = value;
	}
};

struct Type_t_StaticFields
{
public:
	// System.Char System.Type::Delimiter
	Il2CppChar ___Delimiter_2;
	// System.Type[] System.Type::EmptyTypes
	TypeU5BU5D_t3940880105* ___EmptyTypes_3;
	// System.Reflection.MemberFilter System.Type::FilterAttribute
	MemberFilter_t426314064 * ___FilterAttribute_4;
	// System.Reflection.MemberFilter System.Type::FilterName
	MemberFilter_t426314064 * ___FilterName_5;
	// System.Reflection.MemberFilter System.Type::FilterNameIgnoreCase
	MemberFilter_t426314064 * ___FilterNameIgnoreCase_6;
	// System.Object System.Type::Missing
	RuntimeObject * ___Missing_7;

public:
	inline static int32_t get_offset_of_Delimiter_2() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___Delimiter_2)); }
	inline Il2CppChar get_Delimiter_2() const { return ___Delimiter_2; }
	inline Il2CppChar* get_address_of_Delimiter_2() { return &___Delimiter_2; }
	inline void set_Delimiter_2(Il2CppChar value)
	{
		___Delimiter_2 = value;
	}

	inline static int32_t get_offset_of_EmptyTypes_3() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___EmptyTypes_3)); }
	inline TypeU5BU5D_t3940880105* get_EmptyTypes_3() const { return ___EmptyTypes_3; }
	inline TypeU5BU5D_t3940880105** get_address_of_EmptyTypes_3() { return &___EmptyTypes_3; }
	inline void set_EmptyTypes_3(TypeU5BU5D_t3940880105* value)
	{
		___EmptyTypes_3 = value;
		Il2CppCodeGenWriteBarrier((&___EmptyTypes_3), value);
	}

	inline static int32_t get_offset_of_FilterAttribute_4() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterAttribute_4)); }
	inline MemberFilter_t426314064 * get_FilterAttribute_4() const { return ___FilterAttribute_4; }
	inline MemberFilter_t426314064 ** get_address_of_FilterAttribute_4() { return &___FilterAttribute_4; }
	inline void set_FilterAttribute_4(MemberFilter_t426314064 * value)
	{
		___FilterAttribute_4 = value;
		Il2CppCodeGenWriteBarrier((&___FilterAttribute_4), value);
	}

	inline static int32_t get_offset_of_FilterName_5() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterName_5)); }
	inline MemberFilter_t426314064 * get_FilterName_5() const { return ___FilterName_5; }
	inline MemberFilter_t426314064 ** get_address_of_FilterName_5() { return &___FilterName_5; }
	inline void set_FilterName_5(MemberFilter_t426314064 * value)
	{
		___FilterName_5 = value;
		Il2CppCodeGenWriteBarrier((&___FilterName_5), value);
	}

	inline static int32_t get_offset_of_FilterNameIgnoreCase_6() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterNameIgnoreCase_6)); }
	inline MemberFilter_t426314064 * get_FilterNameIgnoreCase_6() const { return ___FilterNameIgnoreCase_6; }
	inline MemberFilter_t426314064 ** get_address_of_FilterNameIgnoreCase_6() { return &___FilterNameIgnoreCase_6; }
	inline void set_FilterNameIgnoreCase_6(MemberFilter_t426314064 * value)
	{
		___FilterNameIgnoreCase_6 = value;
		Il2CppCodeGenWriteBarrier((&___FilterNameIgnoreCase_6), value);
	}

	inline static int32_t get_offset_of_Missing_7() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___Missing_7)); }
	inline RuntimeObject * get_Missing_7() const { return ___Missing_7; }
	inline RuntimeObject ** get_address_of_Missing_7() { return &___Missing_7; }
	inline void set_Missing_7(RuntimeObject * value)
	{
		___Missing_7 = value;
		Il2CppCodeGenWriteBarrier((&___Missing_7), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TYPE_T_H
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
#ifndef MESH_T3648964284_H
#define MESH_T3648964284_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Mesh
struct  Mesh_t3648964284  : public Object_t631007953
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MESH_T3648964284_H
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
#ifndef MATERIAL_T340375123_H
#define MATERIAL_T340375123_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Material
struct  Material_t340375123  : public Object_t631007953
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MATERIAL_T340375123_H
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
#ifndef UNITYACTION_T3245792599_H
#define UNITYACTION_T3245792599_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Events.UnityAction
struct  UnityAction_t3245792599  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNITYACTION_T3245792599_H
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
#ifndef PREDICATE_1_T326759854_H
#define PREDICATE_1_T326759854_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Predicate`1<Lane>
struct  Predicate_1_t326759854  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PREDICATE_1_T326759854_H
#ifndef PREDICATE_1_T1476662237_H
#define PREDICATE_1_T1476662237_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Predicate`1<Junction>
struct  Predicate_1_t1476662237  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PREDICATE_1_T1476662237_H
#ifndef MESHFILTER_T3523625662_H
#define MESHFILTER_T3523625662_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.MeshFilter
struct  MeshFilter_t3523625662  : public Component_t1923634451
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MESHFILTER_T3523625662_H
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
#ifndef LINERENDERER_T3154350270_H
#define LINERENDERER_T3154350270_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.LineRenderer
struct  LineRenderer_t3154350270  : public Renderer_t2627027031
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LINERENDERER_T3154350270_H
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
#ifndef ALGORITHMCHOOSER_T2834305195_H
#define ALGORITHMCHOOSER_T2834305195_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// AlgorithmChooser
struct  AlgorithmChooser_t2834305195  : public MonoBehaviour_t3962482529
{
public:
	// UnityEngine.UI.Dropdown AlgorithmChooser::m_dropDown
	Dropdown_t2274391225 * ___m_dropDown_2;

public:
	inline static int32_t get_offset_of_m_dropDown_2() { return static_cast<int32_t>(offsetof(AlgorithmChooser_t2834305195, ___m_dropDown_2)); }
	inline Dropdown_t2274391225 * get_m_dropDown_2() const { return ___m_dropDown_2; }
	inline Dropdown_t2274391225 ** get_address_of_m_dropDown_2() { return &___m_dropDown_2; }
	inline void set_m_dropDown_2(Dropdown_t2274391225 * value)
	{
		___m_dropDown_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_dropDown_2), value);
	}
};

struct AlgorithmChooser_t2834305195_StaticFields
{
public:
	// AlgorithmChooser/AlgorithmType AlgorithmChooser::algorithmType
	int32_t ___algorithmType_3;

public:
	inline static int32_t get_offset_of_algorithmType_3() { return static_cast<int32_t>(offsetof(AlgorithmChooser_t2834305195_StaticFields, ___algorithmType_3)); }
	inline int32_t get_algorithmType_3() const { return ___algorithmType_3; }
	inline int32_t* get_address_of_algorithmType_3() { return &___algorithmType_3; }
	inline void set_algorithmType_3(int32_t value)
	{
		___algorithmType_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ALGORITHMCHOOSER_T2834305195_H
#ifndef MAPXMLPARSER_T3144498968_H
#define MAPXMLPARSER_T3144498968_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MapXmlParser
struct  MapXmlParser_t3144498968  : public MonoBehaviour_t3962482529
{
public:
	// UnityEngine.GameObject MapXmlParser::roadObject
	GameObject_t1113636619 * ___roadObject_2;
	// UnityEngine.GameObject MapXmlParser::junctionObject
	GameObject_t1113636619 * ___junctionObject_3;
	// UnityEngine.LineRenderer MapXmlParser::roadLines
	LineRenderer_t3154350270 * ___roadLines_4;
	// UnityEngine.GameObject MapXmlParser::quad
	GameObject_t1113636619 * ___quad_5;
	// System.Collections.Generic.List`1<Lane> MapXmlParser::lanes
	List_1_t973540472 * ___lanes_6;
	// System.Collections.Generic.List`1<Junction> MapXmlParser::junctions
	List_1_t2123442855 * ___junctions_7;
	// UnityEngine.MeshFilter MapXmlParser::mf
	MeshFilter_t3523625662 * ___mf_8;

public:
	inline static int32_t get_offset_of_roadObject_2() { return static_cast<int32_t>(offsetof(MapXmlParser_t3144498968, ___roadObject_2)); }
	inline GameObject_t1113636619 * get_roadObject_2() const { return ___roadObject_2; }
	inline GameObject_t1113636619 ** get_address_of_roadObject_2() { return &___roadObject_2; }
	inline void set_roadObject_2(GameObject_t1113636619 * value)
	{
		___roadObject_2 = value;
		Il2CppCodeGenWriteBarrier((&___roadObject_2), value);
	}

	inline static int32_t get_offset_of_junctionObject_3() { return static_cast<int32_t>(offsetof(MapXmlParser_t3144498968, ___junctionObject_3)); }
	inline GameObject_t1113636619 * get_junctionObject_3() const { return ___junctionObject_3; }
	inline GameObject_t1113636619 ** get_address_of_junctionObject_3() { return &___junctionObject_3; }
	inline void set_junctionObject_3(GameObject_t1113636619 * value)
	{
		___junctionObject_3 = value;
		Il2CppCodeGenWriteBarrier((&___junctionObject_3), value);
	}

	inline static int32_t get_offset_of_roadLines_4() { return static_cast<int32_t>(offsetof(MapXmlParser_t3144498968, ___roadLines_4)); }
	inline LineRenderer_t3154350270 * get_roadLines_4() const { return ___roadLines_4; }
	inline LineRenderer_t3154350270 ** get_address_of_roadLines_4() { return &___roadLines_4; }
	inline void set_roadLines_4(LineRenderer_t3154350270 * value)
	{
		___roadLines_4 = value;
		Il2CppCodeGenWriteBarrier((&___roadLines_4), value);
	}

	inline static int32_t get_offset_of_quad_5() { return static_cast<int32_t>(offsetof(MapXmlParser_t3144498968, ___quad_5)); }
	inline GameObject_t1113636619 * get_quad_5() const { return ___quad_5; }
	inline GameObject_t1113636619 ** get_address_of_quad_5() { return &___quad_5; }
	inline void set_quad_5(GameObject_t1113636619 * value)
	{
		___quad_5 = value;
		Il2CppCodeGenWriteBarrier((&___quad_5), value);
	}

	inline static int32_t get_offset_of_lanes_6() { return static_cast<int32_t>(offsetof(MapXmlParser_t3144498968, ___lanes_6)); }
	inline List_1_t973540472 * get_lanes_6() const { return ___lanes_6; }
	inline List_1_t973540472 ** get_address_of_lanes_6() { return &___lanes_6; }
	inline void set_lanes_6(List_1_t973540472 * value)
	{
		___lanes_6 = value;
		Il2CppCodeGenWriteBarrier((&___lanes_6), value);
	}

	inline static int32_t get_offset_of_junctions_7() { return static_cast<int32_t>(offsetof(MapXmlParser_t3144498968, ___junctions_7)); }
	inline List_1_t2123442855 * get_junctions_7() const { return ___junctions_7; }
	inline List_1_t2123442855 ** get_address_of_junctions_7() { return &___junctions_7; }
	inline void set_junctions_7(List_1_t2123442855 * value)
	{
		___junctions_7 = value;
		Il2CppCodeGenWriteBarrier((&___junctions_7), value);
	}

	inline static int32_t get_offset_of_mf_8() { return static_cast<int32_t>(offsetof(MapXmlParser_t3144498968, ___mf_8)); }
	inline MeshFilter_t3523625662 * get_mf_8() const { return ___mf_8; }
	inline MeshFilter_t3523625662 ** get_address_of_mf_8() { return &___mf_8; }
	inline void set_mf_8(MeshFilter_t3523625662 * value)
	{
		___mf_8 = value;
		Il2CppCodeGenWriteBarrier((&___mf_8), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MAPXMLPARSER_T3144498968_H
#ifndef MAPANDSIMULATIONCHANGEBUTTON_T3111073902_H
#define MAPANDSIMULATIONCHANGEBUTTON_T3111073902_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MapAndSimulationChangeButton
struct  MapAndSimulationChangeButton_t3111073902  : public MonoBehaviour_t3962482529
{
public:
	// MapXmlParser MapAndSimulationChangeButton::m_mapXmlParser
	MapXmlParser_t3144498968 * ___m_mapXmlParser_2;
	// SimulationXmlParser MapAndSimulationChangeButton::m_simXmlParser
	SimulationXmlParser_t3990157828 * ___m_simXmlParser_3;

public:
	inline static int32_t get_offset_of_m_mapXmlParser_2() { return static_cast<int32_t>(offsetof(MapAndSimulationChangeButton_t3111073902, ___m_mapXmlParser_2)); }
	inline MapXmlParser_t3144498968 * get_m_mapXmlParser_2() const { return ___m_mapXmlParser_2; }
	inline MapXmlParser_t3144498968 ** get_address_of_m_mapXmlParser_2() { return &___m_mapXmlParser_2; }
	inline void set_m_mapXmlParser_2(MapXmlParser_t3144498968 * value)
	{
		___m_mapXmlParser_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_mapXmlParser_2), value);
	}

	inline static int32_t get_offset_of_m_simXmlParser_3() { return static_cast<int32_t>(offsetof(MapAndSimulationChangeButton_t3111073902, ___m_simXmlParser_3)); }
	inline SimulationXmlParser_t3990157828 * get_m_simXmlParser_3() const { return ___m_simXmlParser_3; }
	inline SimulationXmlParser_t3990157828 ** get_address_of_m_simXmlParser_3() { return &___m_simXmlParser_3; }
	inline void set_m_simXmlParser_3(SimulationXmlParser_t3990157828 * value)
	{
		___m_simXmlParser_3 = value;
		Il2CppCodeGenWriteBarrier((&___m_simXmlParser_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MAPANDSIMULATIONCHANGEBUTTON_T3111073902_H
#ifndef MAPCHOOSER_T1481971204_H
#define MAPCHOOSER_T1481971204_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MapChooser
struct  MapChooser_t1481971204  : public MonoBehaviour_t3962482529
{
public:
	// UnityEngine.UI.InputField MapChooser::m_InputField
	InputField_t3762917431 * ___m_InputField_3;

public:
	inline static int32_t get_offset_of_m_InputField_3() { return static_cast<int32_t>(offsetof(MapChooser_t1481971204, ___m_InputField_3)); }
	inline InputField_t3762917431 * get_m_InputField_3() const { return ___m_InputField_3; }
	inline InputField_t3762917431 ** get_address_of_m_InputField_3() { return &___m_InputField_3; }
	inline void set_m_InputField_3(InputField_t3762917431 * value)
	{
		___m_InputField_3 = value;
		Il2CppCodeGenWriteBarrier((&___m_InputField_3), value);
	}
};

struct MapChooser_t1481971204_StaticFields
{
public:
	// System.String MapChooser::mapPath
	String_t* ___mapPath_2;

public:
	inline static int32_t get_offset_of_mapPath_2() { return static_cast<int32_t>(offsetof(MapChooser_t1481971204_StaticFields, ___mapPath_2)); }
	inline String_t* get_mapPath_2() const { return ___mapPath_2; }
	inline String_t** get_address_of_mapPath_2() { return &___mapPath_2; }
	inline void set_mapPath_2(String_t* value)
	{
		___mapPath_2 = value;
		Il2CppCodeGenWriteBarrier((&___mapPath_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MAPCHOOSER_T1481971204_H
#ifndef SIMULATIONXMLPARSER_T3990157828_H
#define SIMULATIONXMLPARSER_T3990157828_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// SimulationXmlParser
struct  SimulationXmlParser_t3990157828  : public MonoBehaviour_t3962482529
{
public:
	// System.Collections.Generic.List`1<UnityEngine.GameObject> SimulationXmlParser::activeCars
	List_1_t2585711361 * ___activeCars_2;
	// UnityEngine.GameObject SimulationXmlParser::carModel1
	GameObject_t1113636619 * ___carModel1_3;
	// UnityEngine.GameObject SimulationXmlParser::carModel2
	GameObject_t1113636619 * ___carModel2_4;
	// UnityEngine.UI.Button SimulationXmlParser::playButton
	Button_t4055032469 * ___playButton_5;
	// UnityEngine.UI.Button SimulationXmlParser::nextButton
	Button_t4055032469 * ___nextButton_6;
	// UnityEngine.GameObject SimulationXmlParser::cityParser
	GameObject_t1113636619 * ___cityParser_7;
	// System.Single SimulationXmlParser::mouseSensitivity
	float ___mouseSensitivity_8;
	// System.Xml.XmlNodeList SimulationXmlParser::nodeList
	XmlNodeList_t2551693786 * ___nodeList_9;
	// System.Int32 SimulationXmlParser::readTime
	int32_t ___readTime_10;
	// UnityEngine.Vector3 SimulationXmlParser::offset
	Vector3_t3722313464  ___offset_11;

public:
	inline static int32_t get_offset_of_activeCars_2() { return static_cast<int32_t>(offsetof(SimulationXmlParser_t3990157828, ___activeCars_2)); }
	inline List_1_t2585711361 * get_activeCars_2() const { return ___activeCars_2; }
	inline List_1_t2585711361 ** get_address_of_activeCars_2() { return &___activeCars_2; }
	inline void set_activeCars_2(List_1_t2585711361 * value)
	{
		___activeCars_2 = value;
		Il2CppCodeGenWriteBarrier((&___activeCars_2), value);
	}

	inline static int32_t get_offset_of_carModel1_3() { return static_cast<int32_t>(offsetof(SimulationXmlParser_t3990157828, ___carModel1_3)); }
	inline GameObject_t1113636619 * get_carModel1_3() const { return ___carModel1_3; }
	inline GameObject_t1113636619 ** get_address_of_carModel1_3() { return &___carModel1_3; }
	inline void set_carModel1_3(GameObject_t1113636619 * value)
	{
		___carModel1_3 = value;
		Il2CppCodeGenWriteBarrier((&___carModel1_3), value);
	}

	inline static int32_t get_offset_of_carModel2_4() { return static_cast<int32_t>(offsetof(SimulationXmlParser_t3990157828, ___carModel2_4)); }
	inline GameObject_t1113636619 * get_carModel2_4() const { return ___carModel2_4; }
	inline GameObject_t1113636619 ** get_address_of_carModel2_4() { return &___carModel2_4; }
	inline void set_carModel2_4(GameObject_t1113636619 * value)
	{
		___carModel2_4 = value;
		Il2CppCodeGenWriteBarrier((&___carModel2_4), value);
	}

	inline static int32_t get_offset_of_playButton_5() { return static_cast<int32_t>(offsetof(SimulationXmlParser_t3990157828, ___playButton_5)); }
	inline Button_t4055032469 * get_playButton_5() const { return ___playButton_5; }
	inline Button_t4055032469 ** get_address_of_playButton_5() { return &___playButton_5; }
	inline void set_playButton_5(Button_t4055032469 * value)
	{
		___playButton_5 = value;
		Il2CppCodeGenWriteBarrier((&___playButton_5), value);
	}

	inline static int32_t get_offset_of_nextButton_6() { return static_cast<int32_t>(offsetof(SimulationXmlParser_t3990157828, ___nextButton_6)); }
	inline Button_t4055032469 * get_nextButton_6() const { return ___nextButton_6; }
	inline Button_t4055032469 ** get_address_of_nextButton_6() { return &___nextButton_6; }
	inline void set_nextButton_6(Button_t4055032469 * value)
	{
		___nextButton_6 = value;
		Il2CppCodeGenWriteBarrier((&___nextButton_6), value);
	}

	inline static int32_t get_offset_of_cityParser_7() { return static_cast<int32_t>(offsetof(SimulationXmlParser_t3990157828, ___cityParser_7)); }
	inline GameObject_t1113636619 * get_cityParser_7() const { return ___cityParser_7; }
	inline GameObject_t1113636619 ** get_address_of_cityParser_7() { return &___cityParser_7; }
	inline void set_cityParser_7(GameObject_t1113636619 * value)
	{
		___cityParser_7 = value;
		Il2CppCodeGenWriteBarrier((&___cityParser_7), value);
	}

	inline static int32_t get_offset_of_mouseSensitivity_8() { return static_cast<int32_t>(offsetof(SimulationXmlParser_t3990157828, ___mouseSensitivity_8)); }
	inline float get_mouseSensitivity_8() const { return ___mouseSensitivity_8; }
	inline float* get_address_of_mouseSensitivity_8() { return &___mouseSensitivity_8; }
	inline void set_mouseSensitivity_8(float value)
	{
		___mouseSensitivity_8 = value;
	}

	inline static int32_t get_offset_of_nodeList_9() { return static_cast<int32_t>(offsetof(SimulationXmlParser_t3990157828, ___nodeList_9)); }
	inline XmlNodeList_t2551693786 * get_nodeList_9() const { return ___nodeList_9; }
	inline XmlNodeList_t2551693786 ** get_address_of_nodeList_9() { return &___nodeList_9; }
	inline void set_nodeList_9(XmlNodeList_t2551693786 * value)
	{
		___nodeList_9 = value;
		Il2CppCodeGenWriteBarrier((&___nodeList_9), value);
	}

	inline static int32_t get_offset_of_readTime_10() { return static_cast<int32_t>(offsetof(SimulationXmlParser_t3990157828, ___readTime_10)); }
	inline int32_t get_readTime_10() const { return ___readTime_10; }
	inline int32_t* get_address_of_readTime_10() { return &___readTime_10; }
	inline void set_readTime_10(int32_t value)
	{
		___readTime_10 = value;
	}

	inline static int32_t get_offset_of_offset_11() { return static_cast<int32_t>(offsetof(SimulationXmlParser_t3990157828, ___offset_11)); }
	inline Vector3_t3722313464  get_offset_11() const { return ___offset_11; }
	inline Vector3_t3722313464 * get_address_of_offset_11() { return &___offset_11; }
	inline void set_offset_11(Vector3_t3722313464  value)
	{
		___offset_11 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SIMULATIONXMLPARSER_T3990157828_H
#ifndef CHECKMESH_T3175980401_H
#define CHECKMESH_T3175980401_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// CheckMesh
struct  CheckMesh_t3175980401  : public MonoBehaviour_t3962482529
{
public:
	// UnityEngine.MeshFilter CheckMesh::mf
	MeshFilter_t3523625662 * ___mf_2;

public:
	inline static int32_t get_offset_of_mf_2() { return static_cast<int32_t>(offsetof(CheckMesh_t3175980401, ___mf_2)); }
	inline MeshFilter_t3523625662 * get_mf_2() const { return ___mf_2; }
	inline MeshFilter_t3523625662 ** get_address_of_mf_2() { return &___mf_2; }
	inline void set_mf_2(MeshFilter_t3523625662 * value)
	{
		___mf_2 = value;
		Il2CppCodeGenWriteBarrier((&___mf_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CHECKMESH_T3175980401_H
#ifndef VEHICLE_T3024892526_H
#define VEHICLE_T3024892526_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vehicle
struct  Vehicle_t3024892526  : public MonoBehaviour_t3962482529
{
public:
	// System.String Vehicle::id
	String_t* ___id_2;
	// System.Single Vehicle::x
	float ___x_3;
	// System.Single Vehicle::y
	float ___y_4;
	// System.Single Vehicle::angle
	float ___angle_5;
	// System.Double Vehicle::speed
	double ___speed_6;
	// System.Boolean Vehicle::visited
	bool ___visited_7;

public:
	inline static int32_t get_offset_of_id_2() { return static_cast<int32_t>(offsetof(Vehicle_t3024892526, ___id_2)); }
	inline String_t* get_id_2() const { return ___id_2; }
	inline String_t** get_address_of_id_2() { return &___id_2; }
	inline void set_id_2(String_t* value)
	{
		___id_2 = value;
		Il2CppCodeGenWriteBarrier((&___id_2), value);
	}

	inline static int32_t get_offset_of_x_3() { return static_cast<int32_t>(offsetof(Vehicle_t3024892526, ___x_3)); }
	inline float get_x_3() const { return ___x_3; }
	inline float* get_address_of_x_3() { return &___x_3; }
	inline void set_x_3(float value)
	{
		___x_3 = value;
	}

	inline static int32_t get_offset_of_y_4() { return static_cast<int32_t>(offsetof(Vehicle_t3024892526, ___y_4)); }
	inline float get_y_4() const { return ___y_4; }
	inline float* get_address_of_y_4() { return &___y_4; }
	inline void set_y_4(float value)
	{
		___y_4 = value;
	}

	inline static int32_t get_offset_of_angle_5() { return static_cast<int32_t>(offsetof(Vehicle_t3024892526, ___angle_5)); }
	inline float get_angle_5() const { return ___angle_5; }
	inline float* get_address_of_angle_5() { return &___angle_5; }
	inline void set_angle_5(float value)
	{
		___angle_5 = value;
	}

	inline static int32_t get_offset_of_speed_6() { return static_cast<int32_t>(offsetof(Vehicle_t3024892526, ___speed_6)); }
	inline double get_speed_6() const { return ___speed_6; }
	inline double* get_address_of_speed_6() { return &___speed_6; }
	inline void set_speed_6(double value)
	{
		___speed_6 = value;
	}

	inline static int32_t get_offset_of_visited_7() { return static_cast<int32_t>(offsetof(Vehicle_t3024892526, ___visited_7)); }
	inline bool get_visited_7() const { return ___visited_7; }
	inline bool* get_address_of_visited_7() { return &___visited_7; }
	inline void set_visited_7(bool value)
	{
		___visited_7 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VEHICLE_T3024892526_H
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
	// UnityEngine.CanvasRenderer UnityEngine.UI.Graphic::m_CanvasRenderer
	CanvasRenderer_t2598313366 * ___m_CanvasRenderer_8;
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

	inline static int32_t get_offset_of_m_CanvasRenderer_8() { return static_cast<int32_t>(offsetof(Graphic_t1660335611, ___m_CanvasRenderer_8)); }
	inline CanvasRenderer_t2598313366 * get_m_CanvasRenderer_8() const { return ___m_CanvasRenderer_8; }
	inline CanvasRenderer_t2598313366 ** get_address_of_m_CanvasRenderer_8() { return &___m_CanvasRenderer_8; }
	inline void set_m_CanvasRenderer_8(CanvasRenderer_t2598313366 * value)
	{
		___m_CanvasRenderer_8 = value;
		Il2CppCodeGenWriteBarrier((&___m_CanvasRenderer_8), value);
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
#ifndef DROPDOWN_T2274391225_H
#define DROPDOWN_T2274391225_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.Dropdown
struct  Dropdown_t2274391225  : public Selectable_t3250028441
{
public:
	// UnityEngine.RectTransform UnityEngine.UI.Dropdown::m_Template
	RectTransform_t3704657025 * ___m_Template_16;
	// UnityEngine.UI.Text UnityEngine.UI.Dropdown::m_CaptionText
	Text_t1901882714 * ___m_CaptionText_17;
	// UnityEngine.UI.Image UnityEngine.UI.Dropdown::m_CaptionImage
	Image_t2670269651 * ___m_CaptionImage_18;
	// UnityEngine.UI.Text UnityEngine.UI.Dropdown::m_ItemText
	Text_t1901882714 * ___m_ItemText_19;
	// UnityEngine.UI.Image UnityEngine.UI.Dropdown::m_ItemImage
	Image_t2670269651 * ___m_ItemImage_20;
	// System.Int32 UnityEngine.UI.Dropdown::m_Value
	int32_t ___m_Value_21;
	// UnityEngine.UI.Dropdown/OptionDataList UnityEngine.UI.Dropdown::m_Options
	OptionDataList_t1438173104 * ___m_Options_22;
	// UnityEngine.UI.Dropdown/DropdownEvent UnityEngine.UI.Dropdown::m_OnValueChanged
	DropdownEvent_t4040729994 * ___m_OnValueChanged_23;
	// UnityEngine.GameObject UnityEngine.UI.Dropdown::m_Dropdown
	GameObject_t1113636619 * ___m_Dropdown_24;
	// UnityEngine.GameObject UnityEngine.UI.Dropdown::m_Blocker
	GameObject_t1113636619 * ___m_Blocker_25;
	// System.Collections.Generic.List`1<UnityEngine.UI.Dropdown/DropdownItem> UnityEngine.UI.Dropdown::m_Items
	List_1_t2924027637 * ___m_Items_26;
	// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.FloatTween> UnityEngine.UI.Dropdown::m_AlphaTweenRunner
	TweenRunner_1_t3520241082 * ___m_AlphaTweenRunner_27;
	// System.Boolean UnityEngine.UI.Dropdown::validTemplate
	bool ___validTemplate_28;

public:
	inline static int32_t get_offset_of_m_Template_16() { return static_cast<int32_t>(offsetof(Dropdown_t2274391225, ___m_Template_16)); }
	inline RectTransform_t3704657025 * get_m_Template_16() const { return ___m_Template_16; }
	inline RectTransform_t3704657025 ** get_address_of_m_Template_16() { return &___m_Template_16; }
	inline void set_m_Template_16(RectTransform_t3704657025 * value)
	{
		___m_Template_16 = value;
		Il2CppCodeGenWriteBarrier((&___m_Template_16), value);
	}

	inline static int32_t get_offset_of_m_CaptionText_17() { return static_cast<int32_t>(offsetof(Dropdown_t2274391225, ___m_CaptionText_17)); }
	inline Text_t1901882714 * get_m_CaptionText_17() const { return ___m_CaptionText_17; }
	inline Text_t1901882714 ** get_address_of_m_CaptionText_17() { return &___m_CaptionText_17; }
	inline void set_m_CaptionText_17(Text_t1901882714 * value)
	{
		___m_CaptionText_17 = value;
		Il2CppCodeGenWriteBarrier((&___m_CaptionText_17), value);
	}

	inline static int32_t get_offset_of_m_CaptionImage_18() { return static_cast<int32_t>(offsetof(Dropdown_t2274391225, ___m_CaptionImage_18)); }
	inline Image_t2670269651 * get_m_CaptionImage_18() const { return ___m_CaptionImage_18; }
	inline Image_t2670269651 ** get_address_of_m_CaptionImage_18() { return &___m_CaptionImage_18; }
	inline void set_m_CaptionImage_18(Image_t2670269651 * value)
	{
		___m_CaptionImage_18 = value;
		Il2CppCodeGenWriteBarrier((&___m_CaptionImage_18), value);
	}

	inline static int32_t get_offset_of_m_ItemText_19() { return static_cast<int32_t>(offsetof(Dropdown_t2274391225, ___m_ItemText_19)); }
	inline Text_t1901882714 * get_m_ItemText_19() const { return ___m_ItemText_19; }
	inline Text_t1901882714 ** get_address_of_m_ItemText_19() { return &___m_ItemText_19; }
	inline void set_m_ItemText_19(Text_t1901882714 * value)
	{
		___m_ItemText_19 = value;
		Il2CppCodeGenWriteBarrier((&___m_ItemText_19), value);
	}

	inline static int32_t get_offset_of_m_ItemImage_20() { return static_cast<int32_t>(offsetof(Dropdown_t2274391225, ___m_ItemImage_20)); }
	inline Image_t2670269651 * get_m_ItemImage_20() const { return ___m_ItemImage_20; }
	inline Image_t2670269651 ** get_address_of_m_ItemImage_20() { return &___m_ItemImage_20; }
	inline void set_m_ItemImage_20(Image_t2670269651 * value)
	{
		___m_ItemImage_20 = value;
		Il2CppCodeGenWriteBarrier((&___m_ItemImage_20), value);
	}

	inline static int32_t get_offset_of_m_Value_21() { return static_cast<int32_t>(offsetof(Dropdown_t2274391225, ___m_Value_21)); }
	inline int32_t get_m_Value_21() const { return ___m_Value_21; }
	inline int32_t* get_address_of_m_Value_21() { return &___m_Value_21; }
	inline void set_m_Value_21(int32_t value)
	{
		___m_Value_21 = value;
	}

	inline static int32_t get_offset_of_m_Options_22() { return static_cast<int32_t>(offsetof(Dropdown_t2274391225, ___m_Options_22)); }
	inline OptionDataList_t1438173104 * get_m_Options_22() const { return ___m_Options_22; }
	inline OptionDataList_t1438173104 ** get_address_of_m_Options_22() { return &___m_Options_22; }
	inline void set_m_Options_22(OptionDataList_t1438173104 * value)
	{
		___m_Options_22 = value;
		Il2CppCodeGenWriteBarrier((&___m_Options_22), value);
	}

	inline static int32_t get_offset_of_m_OnValueChanged_23() { return static_cast<int32_t>(offsetof(Dropdown_t2274391225, ___m_OnValueChanged_23)); }
	inline DropdownEvent_t4040729994 * get_m_OnValueChanged_23() const { return ___m_OnValueChanged_23; }
	inline DropdownEvent_t4040729994 ** get_address_of_m_OnValueChanged_23() { return &___m_OnValueChanged_23; }
	inline void set_m_OnValueChanged_23(DropdownEvent_t4040729994 * value)
	{
		___m_OnValueChanged_23 = value;
		Il2CppCodeGenWriteBarrier((&___m_OnValueChanged_23), value);
	}

	inline static int32_t get_offset_of_m_Dropdown_24() { return static_cast<int32_t>(offsetof(Dropdown_t2274391225, ___m_Dropdown_24)); }
	inline GameObject_t1113636619 * get_m_Dropdown_24() const { return ___m_Dropdown_24; }
	inline GameObject_t1113636619 ** get_address_of_m_Dropdown_24() { return &___m_Dropdown_24; }
	inline void set_m_Dropdown_24(GameObject_t1113636619 * value)
	{
		___m_Dropdown_24 = value;
		Il2CppCodeGenWriteBarrier((&___m_Dropdown_24), value);
	}

	inline static int32_t get_offset_of_m_Blocker_25() { return static_cast<int32_t>(offsetof(Dropdown_t2274391225, ___m_Blocker_25)); }
	inline GameObject_t1113636619 * get_m_Blocker_25() const { return ___m_Blocker_25; }
	inline GameObject_t1113636619 ** get_address_of_m_Blocker_25() { return &___m_Blocker_25; }
	inline void set_m_Blocker_25(GameObject_t1113636619 * value)
	{
		___m_Blocker_25 = value;
		Il2CppCodeGenWriteBarrier((&___m_Blocker_25), value);
	}

	inline static int32_t get_offset_of_m_Items_26() { return static_cast<int32_t>(offsetof(Dropdown_t2274391225, ___m_Items_26)); }
	inline List_1_t2924027637 * get_m_Items_26() const { return ___m_Items_26; }
	inline List_1_t2924027637 ** get_address_of_m_Items_26() { return &___m_Items_26; }
	inline void set_m_Items_26(List_1_t2924027637 * value)
	{
		___m_Items_26 = value;
		Il2CppCodeGenWriteBarrier((&___m_Items_26), value);
	}

	inline static int32_t get_offset_of_m_AlphaTweenRunner_27() { return static_cast<int32_t>(offsetof(Dropdown_t2274391225, ___m_AlphaTweenRunner_27)); }
	inline TweenRunner_1_t3520241082 * get_m_AlphaTweenRunner_27() const { return ___m_AlphaTweenRunner_27; }
	inline TweenRunner_1_t3520241082 ** get_address_of_m_AlphaTweenRunner_27() { return &___m_AlphaTweenRunner_27; }
	inline void set_m_AlphaTweenRunner_27(TweenRunner_1_t3520241082 * value)
	{
		___m_AlphaTweenRunner_27 = value;
		Il2CppCodeGenWriteBarrier((&___m_AlphaTweenRunner_27), value);
	}

	inline static int32_t get_offset_of_validTemplate_28() { return static_cast<int32_t>(offsetof(Dropdown_t2274391225, ___validTemplate_28)); }
	inline bool get_validTemplate_28() const { return ___validTemplate_28; }
	inline bool* get_address_of_validTemplate_28() { return &___validTemplate_28; }
	inline void set_validTemplate_28(bool value)
	{
		___validTemplate_28 = value;
	}
};

struct Dropdown_t2274391225_StaticFields
{
public:
	// UnityEngine.UI.Dropdown/OptionData UnityEngine.UI.Dropdown::s_NoOptionData
	OptionData_t3270282352 * ___s_NoOptionData_29;

public:
	inline static int32_t get_offset_of_s_NoOptionData_29() { return static_cast<int32_t>(offsetof(Dropdown_t2274391225_StaticFields, ___s_NoOptionData_29)); }
	inline OptionData_t3270282352 * get_s_NoOptionData_29() const { return ___s_NoOptionData_29; }
	inline OptionData_t3270282352 ** get_address_of_s_NoOptionData_29() { return &___s_NoOptionData_29; }
	inline void set_s_NoOptionData_29(OptionData_t3270282352 * value)
	{
		___s_NoOptionData_29 = value;
		Il2CppCodeGenWriteBarrier((&___s_NoOptionData_29), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DROPDOWN_T2274391225_H
#ifndef INPUTFIELD_T3762917431_H
#define INPUTFIELD_T3762917431_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.InputField
struct  InputField_t3762917431  : public Selectable_t3250028441
{
public:
	// UnityEngine.TouchScreenKeyboard UnityEngine.UI.InputField::m_Keyboard
	TouchScreenKeyboard_t731888065 * ___m_Keyboard_16;
	// UnityEngine.UI.Text UnityEngine.UI.InputField::m_TextComponent
	Text_t1901882714 * ___m_TextComponent_18;
	// UnityEngine.UI.Graphic UnityEngine.UI.InputField::m_Placeholder
	Graphic_t1660335611 * ___m_Placeholder_19;
	// UnityEngine.UI.InputField/ContentType UnityEngine.UI.InputField::m_ContentType
	int32_t ___m_ContentType_20;
	// UnityEngine.UI.InputField/InputType UnityEngine.UI.InputField::m_InputType
	int32_t ___m_InputType_21;
	// System.Char UnityEngine.UI.InputField::m_AsteriskChar
	Il2CppChar ___m_AsteriskChar_22;
	// UnityEngine.TouchScreenKeyboardType UnityEngine.UI.InputField::m_KeyboardType
	int32_t ___m_KeyboardType_23;
	// UnityEngine.UI.InputField/LineType UnityEngine.UI.InputField::m_LineType
	int32_t ___m_LineType_24;
	// System.Boolean UnityEngine.UI.InputField::m_HideMobileInput
	bool ___m_HideMobileInput_25;
	// UnityEngine.UI.InputField/CharacterValidation UnityEngine.UI.InputField::m_CharacterValidation
	int32_t ___m_CharacterValidation_26;
	// System.Int32 UnityEngine.UI.InputField::m_CharacterLimit
	int32_t ___m_CharacterLimit_27;
	// UnityEngine.UI.InputField/SubmitEvent UnityEngine.UI.InputField::m_OnEndEdit
	SubmitEvent_t648412432 * ___m_OnEndEdit_28;
	// UnityEngine.UI.InputField/OnChangeEvent UnityEngine.UI.InputField::m_OnValueChanged
	OnChangeEvent_t467195904 * ___m_OnValueChanged_29;
	// UnityEngine.UI.InputField/OnValidateInput UnityEngine.UI.InputField::m_OnValidateInput
	OnValidateInput_t2355412304 * ___m_OnValidateInput_30;
	// UnityEngine.Color UnityEngine.UI.InputField::m_CaretColor
	Color_t2555686324  ___m_CaretColor_31;
	// System.Boolean UnityEngine.UI.InputField::m_CustomCaretColor
	bool ___m_CustomCaretColor_32;
	// UnityEngine.Color UnityEngine.UI.InputField::m_SelectionColor
	Color_t2555686324  ___m_SelectionColor_33;
	// System.String UnityEngine.UI.InputField::m_Text
	String_t* ___m_Text_34;
	// System.Single UnityEngine.UI.InputField::m_CaretBlinkRate
	float ___m_CaretBlinkRate_35;
	// System.Int32 UnityEngine.UI.InputField::m_CaretWidth
	int32_t ___m_CaretWidth_36;
	// System.Boolean UnityEngine.UI.InputField::m_ReadOnly
	bool ___m_ReadOnly_37;
	// System.Int32 UnityEngine.UI.InputField::m_CaretPosition
	int32_t ___m_CaretPosition_38;
	// System.Int32 UnityEngine.UI.InputField::m_CaretSelectPosition
	int32_t ___m_CaretSelectPosition_39;
	// UnityEngine.RectTransform UnityEngine.UI.InputField::caretRectTrans
	RectTransform_t3704657025 * ___caretRectTrans_40;
	// UnityEngine.UIVertex[] UnityEngine.UI.InputField::m_CursorVerts
	UIVertexU5BU5D_t1981460040* ___m_CursorVerts_41;
	// UnityEngine.TextGenerator UnityEngine.UI.InputField::m_InputTextCache
	TextGenerator_t3211863866 * ___m_InputTextCache_42;
	// UnityEngine.CanvasRenderer UnityEngine.UI.InputField::m_CachedInputRenderer
	CanvasRenderer_t2598313366 * ___m_CachedInputRenderer_43;
	// System.Boolean UnityEngine.UI.InputField::m_PreventFontCallback
	bool ___m_PreventFontCallback_44;
	// UnityEngine.Mesh UnityEngine.UI.InputField::m_Mesh
	Mesh_t3648964284 * ___m_Mesh_45;
	// System.Boolean UnityEngine.UI.InputField::m_AllowInput
	bool ___m_AllowInput_46;
	// System.Boolean UnityEngine.UI.InputField::m_ShouldActivateNextUpdate
	bool ___m_ShouldActivateNextUpdate_47;
	// System.Boolean UnityEngine.UI.InputField::m_UpdateDrag
	bool ___m_UpdateDrag_48;
	// System.Boolean UnityEngine.UI.InputField::m_DragPositionOutOfBounds
	bool ___m_DragPositionOutOfBounds_49;
	// System.Boolean UnityEngine.UI.InputField::m_CaretVisible
	bool ___m_CaretVisible_52;
	// UnityEngine.Coroutine UnityEngine.UI.InputField::m_BlinkCoroutine
	Coroutine_t3829159415 * ___m_BlinkCoroutine_53;
	// System.Single UnityEngine.UI.InputField::m_BlinkStartTime
	float ___m_BlinkStartTime_54;
	// System.Int32 UnityEngine.UI.InputField::m_DrawStart
	int32_t ___m_DrawStart_55;
	// System.Int32 UnityEngine.UI.InputField::m_DrawEnd
	int32_t ___m_DrawEnd_56;
	// UnityEngine.Coroutine UnityEngine.UI.InputField::m_DragCoroutine
	Coroutine_t3829159415 * ___m_DragCoroutine_57;
	// System.String UnityEngine.UI.InputField::m_OriginalText
	String_t* ___m_OriginalText_58;
	// System.Boolean UnityEngine.UI.InputField::m_WasCanceled
	bool ___m_WasCanceled_59;
	// System.Boolean UnityEngine.UI.InputField::m_HasDoneFocusTransition
	bool ___m_HasDoneFocusTransition_60;
	// UnityEngine.Event UnityEngine.UI.InputField::m_ProcessingEvent
	Event_t2956885303 * ___m_ProcessingEvent_62;

public:
	inline static int32_t get_offset_of_m_Keyboard_16() { return static_cast<int32_t>(offsetof(InputField_t3762917431, ___m_Keyboard_16)); }
	inline TouchScreenKeyboard_t731888065 * get_m_Keyboard_16() const { return ___m_Keyboard_16; }
	inline TouchScreenKeyboard_t731888065 ** get_address_of_m_Keyboard_16() { return &___m_Keyboard_16; }
	inline void set_m_Keyboard_16(TouchScreenKeyboard_t731888065 * value)
	{
		___m_Keyboard_16 = value;
		Il2CppCodeGenWriteBarrier((&___m_Keyboard_16), value);
	}

	inline static int32_t get_offset_of_m_TextComponent_18() { return static_cast<int32_t>(offsetof(InputField_t3762917431, ___m_TextComponent_18)); }
	inline Text_t1901882714 * get_m_TextComponent_18() const { return ___m_TextComponent_18; }
	inline Text_t1901882714 ** get_address_of_m_TextComponent_18() { return &___m_TextComponent_18; }
	inline void set_m_TextComponent_18(Text_t1901882714 * value)
	{
		___m_TextComponent_18 = value;
		Il2CppCodeGenWriteBarrier((&___m_TextComponent_18), value);
	}

	inline static int32_t get_offset_of_m_Placeholder_19() { return static_cast<int32_t>(offsetof(InputField_t3762917431, ___m_Placeholder_19)); }
	inline Graphic_t1660335611 * get_m_Placeholder_19() const { return ___m_Placeholder_19; }
	inline Graphic_t1660335611 ** get_address_of_m_Placeholder_19() { return &___m_Placeholder_19; }
	inline void set_m_Placeholder_19(Graphic_t1660335611 * value)
	{
		___m_Placeholder_19 = value;
		Il2CppCodeGenWriteBarrier((&___m_Placeholder_19), value);
	}

	inline static int32_t get_offset_of_m_ContentType_20() { return static_cast<int32_t>(offsetof(InputField_t3762917431, ___m_ContentType_20)); }
	inline int32_t get_m_ContentType_20() const { return ___m_ContentType_20; }
	inline int32_t* get_address_of_m_ContentType_20() { return &___m_ContentType_20; }
	inline void set_m_ContentType_20(int32_t value)
	{
		___m_ContentType_20 = value;
	}

	inline static int32_t get_offset_of_m_InputType_21() { return static_cast<int32_t>(offsetof(InputField_t3762917431, ___m_InputType_21)); }
	inline int32_t get_m_InputType_21() const { return ___m_InputType_21; }
	inline int32_t* get_address_of_m_InputType_21() { return &___m_InputType_21; }
	inline void set_m_InputType_21(int32_t value)
	{
		___m_InputType_21 = value;
	}

	inline static int32_t get_offset_of_m_AsteriskChar_22() { return static_cast<int32_t>(offsetof(InputField_t3762917431, ___m_AsteriskChar_22)); }
	inline Il2CppChar get_m_AsteriskChar_22() const { return ___m_AsteriskChar_22; }
	inline Il2CppChar* get_address_of_m_AsteriskChar_22() { return &___m_AsteriskChar_22; }
	inline void set_m_AsteriskChar_22(Il2CppChar value)
	{
		___m_AsteriskChar_22 = value;
	}

	inline static int32_t get_offset_of_m_KeyboardType_23() { return static_cast<int32_t>(offsetof(InputField_t3762917431, ___m_KeyboardType_23)); }
	inline int32_t get_m_KeyboardType_23() const { return ___m_KeyboardType_23; }
	inline int32_t* get_address_of_m_KeyboardType_23() { return &___m_KeyboardType_23; }
	inline void set_m_KeyboardType_23(int32_t value)
	{
		___m_KeyboardType_23 = value;
	}

	inline static int32_t get_offset_of_m_LineType_24() { return static_cast<int32_t>(offsetof(InputField_t3762917431, ___m_LineType_24)); }
	inline int32_t get_m_LineType_24() const { return ___m_LineType_24; }
	inline int32_t* get_address_of_m_LineType_24() { return &___m_LineType_24; }
	inline void set_m_LineType_24(int32_t value)
	{
		___m_LineType_24 = value;
	}

	inline static int32_t get_offset_of_m_HideMobileInput_25() { return static_cast<int32_t>(offsetof(InputField_t3762917431, ___m_HideMobileInput_25)); }
	inline bool get_m_HideMobileInput_25() const { return ___m_HideMobileInput_25; }
	inline bool* get_address_of_m_HideMobileInput_25() { return &___m_HideMobileInput_25; }
	inline void set_m_HideMobileInput_25(bool value)
	{
		___m_HideMobileInput_25 = value;
	}

	inline static int32_t get_offset_of_m_CharacterValidation_26() { return static_cast<int32_t>(offsetof(InputField_t3762917431, ___m_CharacterValidation_26)); }
	inline int32_t get_m_CharacterValidation_26() const { return ___m_CharacterValidation_26; }
	inline int32_t* get_address_of_m_CharacterValidation_26() { return &___m_CharacterValidation_26; }
	inline void set_m_CharacterValidation_26(int32_t value)
	{
		___m_CharacterValidation_26 = value;
	}

	inline static int32_t get_offset_of_m_CharacterLimit_27() { return static_cast<int32_t>(offsetof(InputField_t3762917431, ___m_CharacterLimit_27)); }
	inline int32_t get_m_CharacterLimit_27() const { return ___m_CharacterLimit_27; }
	inline int32_t* get_address_of_m_CharacterLimit_27() { return &___m_CharacterLimit_27; }
	inline void set_m_CharacterLimit_27(int32_t value)
	{
		___m_CharacterLimit_27 = value;
	}

	inline static int32_t get_offset_of_m_OnEndEdit_28() { return static_cast<int32_t>(offsetof(InputField_t3762917431, ___m_OnEndEdit_28)); }
	inline SubmitEvent_t648412432 * get_m_OnEndEdit_28() const { return ___m_OnEndEdit_28; }
	inline SubmitEvent_t648412432 ** get_address_of_m_OnEndEdit_28() { return &___m_OnEndEdit_28; }
	inline void set_m_OnEndEdit_28(SubmitEvent_t648412432 * value)
	{
		___m_OnEndEdit_28 = value;
		Il2CppCodeGenWriteBarrier((&___m_OnEndEdit_28), value);
	}

	inline static int32_t get_offset_of_m_OnValueChanged_29() { return static_cast<int32_t>(offsetof(InputField_t3762917431, ___m_OnValueChanged_29)); }
	inline OnChangeEvent_t467195904 * get_m_OnValueChanged_29() const { return ___m_OnValueChanged_29; }
	inline OnChangeEvent_t467195904 ** get_address_of_m_OnValueChanged_29() { return &___m_OnValueChanged_29; }
	inline void set_m_OnValueChanged_29(OnChangeEvent_t467195904 * value)
	{
		___m_OnValueChanged_29 = value;
		Il2CppCodeGenWriteBarrier((&___m_OnValueChanged_29), value);
	}

	inline static int32_t get_offset_of_m_OnValidateInput_30() { return static_cast<int32_t>(offsetof(InputField_t3762917431, ___m_OnValidateInput_30)); }
	inline OnValidateInput_t2355412304 * get_m_OnValidateInput_30() const { return ___m_OnValidateInput_30; }
	inline OnValidateInput_t2355412304 ** get_address_of_m_OnValidateInput_30() { return &___m_OnValidateInput_30; }
	inline void set_m_OnValidateInput_30(OnValidateInput_t2355412304 * value)
	{
		___m_OnValidateInput_30 = value;
		Il2CppCodeGenWriteBarrier((&___m_OnValidateInput_30), value);
	}

	inline static int32_t get_offset_of_m_CaretColor_31() { return static_cast<int32_t>(offsetof(InputField_t3762917431, ___m_CaretColor_31)); }
	inline Color_t2555686324  get_m_CaretColor_31() const { return ___m_CaretColor_31; }
	inline Color_t2555686324 * get_address_of_m_CaretColor_31() { return &___m_CaretColor_31; }
	inline void set_m_CaretColor_31(Color_t2555686324  value)
	{
		___m_CaretColor_31 = value;
	}

	inline static int32_t get_offset_of_m_CustomCaretColor_32() { return static_cast<int32_t>(offsetof(InputField_t3762917431, ___m_CustomCaretColor_32)); }
	inline bool get_m_CustomCaretColor_32() const { return ___m_CustomCaretColor_32; }
	inline bool* get_address_of_m_CustomCaretColor_32() { return &___m_CustomCaretColor_32; }
	inline void set_m_CustomCaretColor_32(bool value)
	{
		___m_CustomCaretColor_32 = value;
	}

	inline static int32_t get_offset_of_m_SelectionColor_33() { return static_cast<int32_t>(offsetof(InputField_t3762917431, ___m_SelectionColor_33)); }
	inline Color_t2555686324  get_m_SelectionColor_33() const { return ___m_SelectionColor_33; }
	inline Color_t2555686324 * get_address_of_m_SelectionColor_33() { return &___m_SelectionColor_33; }
	inline void set_m_SelectionColor_33(Color_t2555686324  value)
	{
		___m_SelectionColor_33 = value;
	}

	inline static int32_t get_offset_of_m_Text_34() { return static_cast<int32_t>(offsetof(InputField_t3762917431, ___m_Text_34)); }
	inline String_t* get_m_Text_34() const { return ___m_Text_34; }
	inline String_t** get_address_of_m_Text_34() { return &___m_Text_34; }
	inline void set_m_Text_34(String_t* value)
	{
		___m_Text_34 = value;
		Il2CppCodeGenWriteBarrier((&___m_Text_34), value);
	}

	inline static int32_t get_offset_of_m_CaretBlinkRate_35() { return static_cast<int32_t>(offsetof(InputField_t3762917431, ___m_CaretBlinkRate_35)); }
	inline float get_m_CaretBlinkRate_35() const { return ___m_CaretBlinkRate_35; }
	inline float* get_address_of_m_CaretBlinkRate_35() { return &___m_CaretBlinkRate_35; }
	inline void set_m_CaretBlinkRate_35(float value)
	{
		___m_CaretBlinkRate_35 = value;
	}

	inline static int32_t get_offset_of_m_CaretWidth_36() { return static_cast<int32_t>(offsetof(InputField_t3762917431, ___m_CaretWidth_36)); }
	inline int32_t get_m_CaretWidth_36() const { return ___m_CaretWidth_36; }
	inline int32_t* get_address_of_m_CaretWidth_36() { return &___m_CaretWidth_36; }
	inline void set_m_CaretWidth_36(int32_t value)
	{
		___m_CaretWidth_36 = value;
	}

	inline static int32_t get_offset_of_m_ReadOnly_37() { return static_cast<int32_t>(offsetof(InputField_t3762917431, ___m_ReadOnly_37)); }
	inline bool get_m_ReadOnly_37() const { return ___m_ReadOnly_37; }
	inline bool* get_address_of_m_ReadOnly_37() { return &___m_ReadOnly_37; }
	inline void set_m_ReadOnly_37(bool value)
	{
		___m_ReadOnly_37 = value;
	}

	inline static int32_t get_offset_of_m_CaretPosition_38() { return static_cast<int32_t>(offsetof(InputField_t3762917431, ___m_CaretPosition_38)); }
	inline int32_t get_m_CaretPosition_38() const { return ___m_CaretPosition_38; }
	inline int32_t* get_address_of_m_CaretPosition_38() { return &___m_CaretPosition_38; }
	inline void set_m_CaretPosition_38(int32_t value)
	{
		___m_CaretPosition_38 = value;
	}

	inline static int32_t get_offset_of_m_CaretSelectPosition_39() { return static_cast<int32_t>(offsetof(InputField_t3762917431, ___m_CaretSelectPosition_39)); }
	inline int32_t get_m_CaretSelectPosition_39() const { return ___m_CaretSelectPosition_39; }
	inline int32_t* get_address_of_m_CaretSelectPosition_39() { return &___m_CaretSelectPosition_39; }
	inline void set_m_CaretSelectPosition_39(int32_t value)
	{
		___m_CaretSelectPosition_39 = value;
	}

	inline static int32_t get_offset_of_caretRectTrans_40() { return static_cast<int32_t>(offsetof(InputField_t3762917431, ___caretRectTrans_40)); }
	inline RectTransform_t3704657025 * get_caretRectTrans_40() const { return ___caretRectTrans_40; }
	inline RectTransform_t3704657025 ** get_address_of_caretRectTrans_40() { return &___caretRectTrans_40; }
	inline void set_caretRectTrans_40(RectTransform_t3704657025 * value)
	{
		___caretRectTrans_40 = value;
		Il2CppCodeGenWriteBarrier((&___caretRectTrans_40), value);
	}

	inline static int32_t get_offset_of_m_CursorVerts_41() { return static_cast<int32_t>(offsetof(InputField_t3762917431, ___m_CursorVerts_41)); }
	inline UIVertexU5BU5D_t1981460040* get_m_CursorVerts_41() const { return ___m_CursorVerts_41; }
	inline UIVertexU5BU5D_t1981460040** get_address_of_m_CursorVerts_41() { return &___m_CursorVerts_41; }
	inline void set_m_CursorVerts_41(UIVertexU5BU5D_t1981460040* value)
	{
		___m_CursorVerts_41 = value;
		Il2CppCodeGenWriteBarrier((&___m_CursorVerts_41), value);
	}

	inline static int32_t get_offset_of_m_InputTextCache_42() { return static_cast<int32_t>(offsetof(InputField_t3762917431, ___m_InputTextCache_42)); }
	inline TextGenerator_t3211863866 * get_m_InputTextCache_42() const { return ___m_InputTextCache_42; }
	inline TextGenerator_t3211863866 ** get_address_of_m_InputTextCache_42() { return &___m_InputTextCache_42; }
	inline void set_m_InputTextCache_42(TextGenerator_t3211863866 * value)
	{
		___m_InputTextCache_42 = value;
		Il2CppCodeGenWriteBarrier((&___m_InputTextCache_42), value);
	}

	inline static int32_t get_offset_of_m_CachedInputRenderer_43() { return static_cast<int32_t>(offsetof(InputField_t3762917431, ___m_CachedInputRenderer_43)); }
	inline CanvasRenderer_t2598313366 * get_m_CachedInputRenderer_43() const { return ___m_CachedInputRenderer_43; }
	inline CanvasRenderer_t2598313366 ** get_address_of_m_CachedInputRenderer_43() { return &___m_CachedInputRenderer_43; }
	inline void set_m_CachedInputRenderer_43(CanvasRenderer_t2598313366 * value)
	{
		___m_CachedInputRenderer_43 = value;
		Il2CppCodeGenWriteBarrier((&___m_CachedInputRenderer_43), value);
	}

	inline static int32_t get_offset_of_m_PreventFontCallback_44() { return static_cast<int32_t>(offsetof(InputField_t3762917431, ___m_PreventFontCallback_44)); }
	inline bool get_m_PreventFontCallback_44() const { return ___m_PreventFontCallback_44; }
	inline bool* get_address_of_m_PreventFontCallback_44() { return &___m_PreventFontCallback_44; }
	inline void set_m_PreventFontCallback_44(bool value)
	{
		___m_PreventFontCallback_44 = value;
	}

	inline static int32_t get_offset_of_m_Mesh_45() { return static_cast<int32_t>(offsetof(InputField_t3762917431, ___m_Mesh_45)); }
	inline Mesh_t3648964284 * get_m_Mesh_45() const { return ___m_Mesh_45; }
	inline Mesh_t3648964284 ** get_address_of_m_Mesh_45() { return &___m_Mesh_45; }
	inline void set_m_Mesh_45(Mesh_t3648964284 * value)
	{
		___m_Mesh_45 = value;
		Il2CppCodeGenWriteBarrier((&___m_Mesh_45), value);
	}

	inline static int32_t get_offset_of_m_AllowInput_46() { return static_cast<int32_t>(offsetof(InputField_t3762917431, ___m_AllowInput_46)); }
	inline bool get_m_AllowInput_46() const { return ___m_AllowInput_46; }
	inline bool* get_address_of_m_AllowInput_46() { return &___m_AllowInput_46; }
	inline void set_m_AllowInput_46(bool value)
	{
		___m_AllowInput_46 = value;
	}

	inline static int32_t get_offset_of_m_ShouldActivateNextUpdate_47() { return static_cast<int32_t>(offsetof(InputField_t3762917431, ___m_ShouldActivateNextUpdate_47)); }
	inline bool get_m_ShouldActivateNextUpdate_47() const { return ___m_ShouldActivateNextUpdate_47; }
	inline bool* get_address_of_m_ShouldActivateNextUpdate_47() { return &___m_ShouldActivateNextUpdate_47; }
	inline void set_m_ShouldActivateNextUpdate_47(bool value)
	{
		___m_ShouldActivateNextUpdate_47 = value;
	}

	inline static int32_t get_offset_of_m_UpdateDrag_48() { return static_cast<int32_t>(offsetof(InputField_t3762917431, ___m_UpdateDrag_48)); }
	inline bool get_m_UpdateDrag_48() const { return ___m_UpdateDrag_48; }
	inline bool* get_address_of_m_UpdateDrag_48() { return &___m_UpdateDrag_48; }
	inline void set_m_UpdateDrag_48(bool value)
	{
		___m_UpdateDrag_48 = value;
	}

	inline static int32_t get_offset_of_m_DragPositionOutOfBounds_49() { return static_cast<int32_t>(offsetof(InputField_t3762917431, ___m_DragPositionOutOfBounds_49)); }
	inline bool get_m_DragPositionOutOfBounds_49() const { return ___m_DragPositionOutOfBounds_49; }
	inline bool* get_address_of_m_DragPositionOutOfBounds_49() { return &___m_DragPositionOutOfBounds_49; }
	inline void set_m_DragPositionOutOfBounds_49(bool value)
	{
		___m_DragPositionOutOfBounds_49 = value;
	}

	inline static int32_t get_offset_of_m_CaretVisible_52() { return static_cast<int32_t>(offsetof(InputField_t3762917431, ___m_CaretVisible_52)); }
	inline bool get_m_CaretVisible_52() const { return ___m_CaretVisible_52; }
	inline bool* get_address_of_m_CaretVisible_52() { return &___m_CaretVisible_52; }
	inline void set_m_CaretVisible_52(bool value)
	{
		___m_CaretVisible_52 = value;
	}

	inline static int32_t get_offset_of_m_BlinkCoroutine_53() { return static_cast<int32_t>(offsetof(InputField_t3762917431, ___m_BlinkCoroutine_53)); }
	inline Coroutine_t3829159415 * get_m_BlinkCoroutine_53() const { return ___m_BlinkCoroutine_53; }
	inline Coroutine_t3829159415 ** get_address_of_m_BlinkCoroutine_53() { return &___m_BlinkCoroutine_53; }
	inline void set_m_BlinkCoroutine_53(Coroutine_t3829159415 * value)
	{
		___m_BlinkCoroutine_53 = value;
		Il2CppCodeGenWriteBarrier((&___m_BlinkCoroutine_53), value);
	}

	inline static int32_t get_offset_of_m_BlinkStartTime_54() { return static_cast<int32_t>(offsetof(InputField_t3762917431, ___m_BlinkStartTime_54)); }
	inline float get_m_BlinkStartTime_54() const { return ___m_BlinkStartTime_54; }
	inline float* get_address_of_m_BlinkStartTime_54() { return &___m_BlinkStartTime_54; }
	inline void set_m_BlinkStartTime_54(float value)
	{
		___m_BlinkStartTime_54 = value;
	}

	inline static int32_t get_offset_of_m_DrawStart_55() { return static_cast<int32_t>(offsetof(InputField_t3762917431, ___m_DrawStart_55)); }
	inline int32_t get_m_DrawStart_55() const { return ___m_DrawStart_55; }
	inline int32_t* get_address_of_m_DrawStart_55() { return &___m_DrawStart_55; }
	inline void set_m_DrawStart_55(int32_t value)
	{
		___m_DrawStart_55 = value;
	}

	inline static int32_t get_offset_of_m_DrawEnd_56() { return static_cast<int32_t>(offsetof(InputField_t3762917431, ___m_DrawEnd_56)); }
	inline int32_t get_m_DrawEnd_56() const { return ___m_DrawEnd_56; }
	inline int32_t* get_address_of_m_DrawEnd_56() { return &___m_DrawEnd_56; }
	inline void set_m_DrawEnd_56(int32_t value)
	{
		___m_DrawEnd_56 = value;
	}

	inline static int32_t get_offset_of_m_DragCoroutine_57() { return static_cast<int32_t>(offsetof(InputField_t3762917431, ___m_DragCoroutine_57)); }
	inline Coroutine_t3829159415 * get_m_DragCoroutine_57() const { return ___m_DragCoroutine_57; }
	inline Coroutine_t3829159415 ** get_address_of_m_DragCoroutine_57() { return &___m_DragCoroutine_57; }
	inline void set_m_DragCoroutine_57(Coroutine_t3829159415 * value)
	{
		___m_DragCoroutine_57 = value;
		Il2CppCodeGenWriteBarrier((&___m_DragCoroutine_57), value);
	}

	inline static int32_t get_offset_of_m_OriginalText_58() { return static_cast<int32_t>(offsetof(InputField_t3762917431, ___m_OriginalText_58)); }
	inline String_t* get_m_OriginalText_58() const { return ___m_OriginalText_58; }
	inline String_t** get_address_of_m_OriginalText_58() { return &___m_OriginalText_58; }
	inline void set_m_OriginalText_58(String_t* value)
	{
		___m_OriginalText_58 = value;
		Il2CppCodeGenWriteBarrier((&___m_OriginalText_58), value);
	}

	inline static int32_t get_offset_of_m_WasCanceled_59() { return static_cast<int32_t>(offsetof(InputField_t3762917431, ___m_WasCanceled_59)); }
	inline bool get_m_WasCanceled_59() const { return ___m_WasCanceled_59; }
	inline bool* get_address_of_m_WasCanceled_59() { return &___m_WasCanceled_59; }
	inline void set_m_WasCanceled_59(bool value)
	{
		___m_WasCanceled_59 = value;
	}

	inline static int32_t get_offset_of_m_HasDoneFocusTransition_60() { return static_cast<int32_t>(offsetof(InputField_t3762917431, ___m_HasDoneFocusTransition_60)); }
	inline bool get_m_HasDoneFocusTransition_60() const { return ___m_HasDoneFocusTransition_60; }
	inline bool* get_address_of_m_HasDoneFocusTransition_60() { return &___m_HasDoneFocusTransition_60; }
	inline void set_m_HasDoneFocusTransition_60(bool value)
	{
		___m_HasDoneFocusTransition_60 = value;
	}

	inline static int32_t get_offset_of_m_ProcessingEvent_62() { return static_cast<int32_t>(offsetof(InputField_t3762917431, ___m_ProcessingEvent_62)); }
	inline Event_t2956885303 * get_m_ProcessingEvent_62() const { return ___m_ProcessingEvent_62; }
	inline Event_t2956885303 ** get_address_of_m_ProcessingEvent_62() { return &___m_ProcessingEvent_62; }
	inline void set_m_ProcessingEvent_62(Event_t2956885303 * value)
	{
		___m_ProcessingEvent_62 = value;
		Il2CppCodeGenWriteBarrier((&___m_ProcessingEvent_62), value);
	}
};

struct InputField_t3762917431_StaticFields
{
public:
	// System.Char[] UnityEngine.UI.InputField::kSeparators
	CharU5BU5D_t3528271667* ___kSeparators_17;

public:
	inline static int32_t get_offset_of_kSeparators_17() { return static_cast<int32_t>(offsetof(InputField_t3762917431_StaticFields, ___kSeparators_17)); }
	inline CharU5BU5D_t3528271667* get_kSeparators_17() const { return ___kSeparators_17; }
	inline CharU5BU5D_t3528271667** get_address_of_kSeparators_17() { return &___kSeparators_17; }
	inline void set_kSeparators_17(CharU5BU5D_t3528271667* value)
	{
		___kSeparators_17 = value;
		Il2CppCodeGenWriteBarrier((&___kSeparators_17), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INPUTFIELD_T3762917431_H
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
#ifndef TEXT_T1901882714_H
#define TEXT_T1901882714_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.Text
struct  Text_t1901882714  : public MaskableGraphic_t3839221559
{
public:
	// UnityEngine.UI.FontData UnityEngine.UI.Text::m_FontData
	FontData_t746620069 * ___m_FontData_28;
	// System.String UnityEngine.UI.Text::m_Text
	String_t* ___m_Text_29;
	// UnityEngine.TextGenerator UnityEngine.UI.Text::m_TextCache
	TextGenerator_t3211863866 * ___m_TextCache_30;
	// UnityEngine.TextGenerator UnityEngine.UI.Text::m_TextCacheForLayout
	TextGenerator_t3211863866 * ___m_TextCacheForLayout_31;
	// System.Boolean UnityEngine.UI.Text::m_DisableFontTextureRebuiltCallback
	bool ___m_DisableFontTextureRebuiltCallback_33;
	// UnityEngine.UIVertex[] UnityEngine.UI.Text::m_TempVerts
	UIVertexU5BU5D_t1981460040* ___m_TempVerts_34;

public:
	inline static int32_t get_offset_of_m_FontData_28() { return static_cast<int32_t>(offsetof(Text_t1901882714, ___m_FontData_28)); }
	inline FontData_t746620069 * get_m_FontData_28() const { return ___m_FontData_28; }
	inline FontData_t746620069 ** get_address_of_m_FontData_28() { return &___m_FontData_28; }
	inline void set_m_FontData_28(FontData_t746620069 * value)
	{
		___m_FontData_28 = value;
		Il2CppCodeGenWriteBarrier((&___m_FontData_28), value);
	}

	inline static int32_t get_offset_of_m_Text_29() { return static_cast<int32_t>(offsetof(Text_t1901882714, ___m_Text_29)); }
	inline String_t* get_m_Text_29() const { return ___m_Text_29; }
	inline String_t** get_address_of_m_Text_29() { return &___m_Text_29; }
	inline void set_m_Text_29(String_t* value)
	{
		___m_Text_29 = value;
		Il2CppCodeGenWriteBarrier((&___m_Text_29), value);
	}

	inline static int32_t get_offset_of_m_TextCache_30() { return static_cast<int32_t>(offsetof(Text_t1901882714, ___m_TextCache_30)); }
	inline TextGenerator_t3211863866 * get_m_TextCache_30() const { return ___m_TextCache_30; }
	inline TextGenerator_t3211863866 ** get_address_of_m_TextCache_30() { return &___m_TextCache_30; }
	inline void set_m_TextCache_30(TextGenerator_t3211863866 * value)
	{
		___m_TextCache_30 = value;
		Il2CppCodeGenWriteBarrier((&___m_TextCache_30), value);
	}

	inline static int32_t get_offset_of_m_TextCacheForLayout_31() { return static_cast<int32_t>(offsetof(Text_t1901882714, ___m_TextCacheForLayout_31)); }
	inline TextGenerator_t3211863866 * get_m_TextCacheForLayout_31() const { return ___m_TextCacheForLayout_31; }
	inline TextGenerator_t3211863866 ** get_address_of_m_TextCacheForLayout_31() { return &___m_TextCacheForLayout_31; }
	inline void set_m_TextCacheForLayout_31(TextGenerator_t3211863866 * value)
	{
		___m_TextCacheForLayout_31 = value;
		Il2CppCodeGenWriteBarrier((&___m_TextCacheForLayout_31), value);
	}

	inline static int32_t get_offset_of_m_DisableFontTextureRebuiltCallback_33() { return static_cast<int32_t>(offsetof(Text_t1901882714, ___m_DisableFontTextureRebuiltCallback_33)); }
	inline bool get_m_DisableFontTextureRebuiltCallback_33() const { return ___m_DisableFontTextureRebuiltCallback_33; }
	inline bool* get_address_of_m_DisableFontTextureRebuiltCallback_33() { return &___m_DisableFontTextureRebuiltCallback_33; }
	inline void set_m_DisableFontTextureRebuiltCallback_33(bool value)
	{
		___m_DisableFontTextureRebuiltCallback_33 = value;
	}

	inline static int32_t get_offset_of_m_TempVerts_34() { return static_cast<int32_t>(offsetof(Text_t1901882714, ___m_TempVerts_34)); }
	inline UIVertexU5BU5D_t1981460040* get_m_TempVerts_34() const { return ___m_TempVerts_34; }
	inline UIVertexU5BU5D_t1981460040** get_address_of_m_TempVerts_34() { return &___m_TempVerts_34; }
	inline void set_m_TempVerts_34(UIVertexU5BU5D_t1981460040* value)
	{
		___m_TempVerts_34 = value;
		Il2CppCodeGenWriteBarrier((&___m_TempVerts_34), value);
	}
};

struct Text_t1901882714_StaticFields
{
public:
	// UnityEngine.Material UnityEngine.UI.Text::s_DefaultText
	Material_t340375123 * ___s_DefaultText_32;

public:
	inline static int32_t get_offset_of_s_DefaultText_32() { return static_cast<int32_t>(offsetof(Text_t1901882714_StaticFields, ___s_DefaultText_32)); }
	inline Material_t340375123 * get_s_DefaultText_32() const { return ___s_DefaultText_32; }
	inline Material_t340375123 ** get_address_of_s_DefaultText_32() { return &___s_DefaultText_32; }
	inline void set_s_DefaultText_32(Material_t340375123 * value)
	{
		___s_DefaultText_32 = value;
		Il2CppCodeGenWriteBarrier((&___s_DefaultText_32), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TEXT_T1901882714_H
// UnityEngine.Vector3[]
struct Vector3U5BU5D_t1718750761  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Vector3_t3722313464  m_Items[1];

public:
	inline Vector3_t3722313464  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Vector3_t3722313464 * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Vector3_t3722313464  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Vector3_t3722313464  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Vector3_t3722313464 * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Vector3_t3722313464  value)
	{
		m_Items[index] = value;
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
// System.Char[]
struct CharU5BU5D_t3528271667  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Il2CppChar m_Items[1];

public:
	inline Il2CppChar GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Il2CppChar* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Il2CppChar value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Il2CppChar GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Il2CppChar* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Il2CppChar value)
	{
		m_Items[index] = value;
	}
};
// System.String[]
struct StringU5BU5D_t1281789340  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) String_t* m_Items[1];

public:
	inline String_t* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline String_t** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, String_t* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
	inline String_t* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline String_t** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, String_t* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};


// !!0 UnityEngine.Component::GetComponent<System.Object>()
extern "C"  RuntimeObject * Component_GetComponent_TisRuntimeObject_m2906321015_gshared (Component_t1923634451 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::Add(!0)
extern "C"  void List_1_Add_m3338814081_gshared (List_1_t257213610 * __this, RuntimeObject * p0, const RuntimeMethod* method);
// System.Collections.Generic.IEnumerable`1<!!0> System.Linq.Enumerable::Cast<AlgorithmChooser/AlgorithmType>(System.Collections.IEnumerable)
extern "C"  RuntimeObject* Enumerable_Cast_TisAlgorithmType_t644850295_m717376125_gshared (RuntimeObject * __this /* static, unused */, RuntimeObject* p0, const RuntimeMethod* method);
// !!0 System.Linq.Enumerable::ElementAt<AlgorithmChooser/AlgorithmType>(System.Collections.Generic.IEnumerable`1<!!0>,System.Int32)
extern "C"  int32_t Enumerable_ElementAt_TisAlgorithmType_t644850295_m1012687098_gshared (RuntimeObject * __this /* static, unused */, RuntimeObject* p0, int32_t p1, const RuntimeMethod* method);
// System.Int32 System.Linq.Enumerable::Count<AlgorithmChooser/AlgorithmType>(System.Collections.Generic.IEnumerable`1<!!0>)
extern "C"  int32_t Enumerable_Count_TisAlgorithmType_t644850295_m3970683133_gshared (RuntimeObject * __this /* static, unused */, RuntimeObject* p0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor(System.Collections.Generic.IEnumerable`1<!0>)
extern "C"  void List_1__ctor_m1328752868_gshared (List_1_t257213610 * __this, RuntimeObject* p0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
extern "C"  void List_1__ctor_m2321703786_gshared (List_1_t257213610 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponent<System.Object>()
extern "C"  RuntimeObject * GameObject_GetComponent_TisRuntimeObject_m2049753423_gshared (GameObject_t1113636619 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector3>::.ctor()
extern "C"  void List_1__ctor_m1536473967_gshared (List_1_t899420910 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector3>::Add(!0)
extern "C"  void List_1_Add_m1524640104_gshared (List_1_t899420910 * __this, Vector3_t3722313464  p0, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1<UnityEngine.Vector3>::get_Item(System.Int32)
extern "C"  Vector3_t3722313464  List_1_get_Item_m200663048_gshared (List_1_t899420910 * __this, int32_t p0, const RuntimeMethod* method);
// !!0 UnityEngine.Object::Instantiate<System.Object>(!!0)
extern "C"  RuntimeObject * Object_Instantiate_TisRuntimeObject_m2446893047_gshared (RuntimeObject * __this /* static, unused */, RuntimeObject * p0, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Vector3>::get_Count()
extern "C"  int32_t List_1_get_Count_m576380744_gshared (List_1_t899420910 * __this, const RuntimeMethod* method);
// !0[] System.Collections.Generic.List`1<UnityEngine.Vector3>::ToArray()
extern "C"  Vector3U5BU5D_t1718750761* List_1_ToArray_m1691996104_gshared (List_1_t899420910 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Int32>::.ctor()
extern "C"  void List_1__ctor_m1628857705_gshared (List_1_t128053199 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Int32>::Add(!0)
extern "C"  void List_1_Add_m697420525_gshared (List_1_t128053199 * __this, int32_t p0, const RuntimeMethod* method);
// !0[] System.Collections.Generic.List`1<System.Int32>::ToArray()
extern "C"  Int32U5BU5D_t385246372* List_1_ToArray_m3295195900_gshared (List_1_t128053199 * __this, const RuntimeMethod* method);
// System.Collections.Generic.IEnumerable`1<!!0> System.Linq.Enumerable::Repeat<UnityEngine.Vector3>(!!0,System.Int32)
extern "C"  RuntimeObject* Enumerable_Repeat_TisVector3_t3722313464_m724486136_gshared (RuntimeObject * __this /* static, unused */, Vector3_t3722313464  p0, int32_t p1, const RuntimeMethod* method);
// !!0[] System.Linq.Enumerable::ToArray<UnityEngine.Vector3>(System.Collections.Generic.IEnumerable`1<!!0>)
extern "C"  Vector3U5BU5D_t1718750761* Enumerable_ToArray_TisVector3_t3722313464_m1824456213_gshared (RuntimeObject * __this /* static, unused */, RuntimeObject* p0, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponentInChildren<System.Object>()
extern "C"  RuntimeObject * Component_GetComponentInChildren_TisRuntimeObject_m1033527003_gshared (Component_t1923634451 * __this, const RuntimeMethod* method);
// System.Collections.Generic.List`1/Enumerator<!0> System.Collections.Generic.List`1<System.Object>::GetEnumerator()
extern "C"  Enumerator_t2146457487  List_1_GetEnumerator_m2930774921_gshared (List_1_t257213610 * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1/Enumerator<System.Object>::get_Current()
extern "C"  RuntimeObject * Enumerator_get_Current_m470245444_gshared (Enumerator_t2146457487 * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.List`1/Enumerator<System.Object>::MoveNext()
extern "C"  bool Enumerator_MoveNext_m2142368520_gshared (Enumerator_t2146457487 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1/Enumerator<System.Object>::Dispose()
extern "C"  void Enumerator_Dispose_m3007748546_gshared (Enumerator_t2146457487 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.Object::Instantiate<System.Object>(!!0,UnityEngine.Vector3,UnityEngine.Quaternion)
extern "C"  RuntimeObject * Object_Instantiate_TisRuntimeObject_m1135049463_gshared (RuntimeObject * __this /* static, unused */, RuntimeObject * p0, Vector3_t3722313464  p1, Quaternion_t2301928331  p2, const RuntimeMethod* method);
// System.Void System.Predicate`1<System.Object>::.ctor(System.Object,System.IntPtr)
extern "C"  void Predicate_1__ctor_m327447107_gshared (Predicate_1_t3905400288 * __this, RuntimeObject * p0, intptr_t p1, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1<System.Object>::Find(System.Predicate`1<!0>)
extern "C"  RuntimeObject * List_1_Find_m2048854920_gshared (List_1_t257213610 * __this, Predicate_1_t3905400288 * p0, const RuntimeMethod* method);

// System.Void UnityEngine.MonoBehaviour::.ctor()
extern "C"  void MonoBehaviour__ctor_m1579109191 (MonoBehaviour_t3962482529 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// !!0 UnityEngine.Component::GetComponent<UnityEngine.UI.Dropdown>()
#define Component_GetComponent_TisDropdown_t2274391225_m1954154383(__this, method) ((  Dropdown_t2274391225 * (*) (Component_t1923634451 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m2906321015_gshared)(__this, method)
// System.Collections.Generic.List`1<UnityEngine.UI.Dropdown/OptionData> UnityEngine.UI.Dropdown::get_options()
extern "C"  List_1_t447389798 * Dropdown_get_options_m2762539965 (Dropdown_t2274391225 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Dropdown/OptionData::.ctor(System.String)
extern "C"  void OptionData__ctor_m2696491456 (OptionData_t3270282352 * __this, String_t* p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Dropdown/OptionData>::Add(!0)
#define List_1_Add_m3700962105(__this, p0, method) ((  void (*) (List_1_t447389798 *, OptionData_t3270282352 *, const RuntimeMethod*))List_1_Add_m3338814081_gshared)(__this, p0, method)
// System.Type System.Type::GetTypeFromHandle(System.RuntimeTypeHandle)
extern "C"  Type_t * Type_GetTypeFromHandle_m1620074514 (RuntimeObject * __this /* static, unused */, RuntimeTypeHandle_t3027515415  p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Array System.Enum::GetValues(System.Type)
extern "C"  RuntimeArray * Enum_GetValues_m4192343468 (RuntimeObject * __this /* static, unused */, Type_t * p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IEnumerable`1<!!0> System.Linq.Enumerable::Cast<AlgorithmChooser/AlgorithmType>(System.Collections.IEnumerable)
#define Enumerable_Cast_TisAlgorithmType_t644850295_m717376125(__this /* static, unused */, p0, method) ((  RuntimeObject* (*) (RuntimeObject * /* static, unused */, RuntimeObject*, const RuntimeMethod*))Enumerable_Cast_TisAlgorithmType_t644850295_m717376125_gshared)(__this /* static, unused */, p0, method)
// !!0 System.Linq.Enumerable::ElementAt<AlgorithmChooser/AlgorithmType>(System.Collections.Generic.IEnumerable`1<!!0>,System.Int32)
#define Enumerable_ElementAt_TisAlgorithmType_t644850295_m1012687098(__this /* static, unused */, p0, p1, method) ((  int32_t (*) (RuntimeObject * /* static, unused */, RuntimeObject*, int32_t, const RuntimeMethod*))Enumerable_ElementAt_TisAlgorithmType_t644850295_m1012687098_gshared)(__this /* static, unused */, p0, p1, method)
// System.String System.String::Replace(System.Char,System.Char)
extern "C"  String_t* String_Replace_m3726209165 (String_t* __this, Il2CppChar p0, Il2CppChar p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Linq.Enumerable::Count<AlgorithmChooser/AlgorithmType>(System.Collections.Generic.IEnumerable`1<!!0>)
#define Enumerable_Count_TisAlgorithmType_t644850295_m3970683133(__this /* static, unused */, p0, method) ((  int32_t (*) (RuntimeObject * /* static, unused */, RuntimeObject*, const RuntimeMethod*))Enumerable_Count_TisAlgorithmType_t644850295_m3970683133_gshared)(__this /* static, unused */, p0, method)
// System.Int32 UnityEngine.UI.Dropdown::get_value()
extern "C"  int32_t Dropdown_get_value_m1555353112 (Dropdown_t2274391225 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// !!0 UnityEngine.Component::GetComponent<UnityEngine.MeshFilter>()
#define Component_GetComponent_TisMeshFilter_t3523625662_m1718783796(__this, method) ((  MeshFilter_t3523625662 * (*) (Component_t1923634451 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m2906321015_gshared)(__this, method)
// System.Void UnityEngine.Mesh::.ctor()
extern "C"  void Mesh__ctor_m2533762929 (Mesh_t3648964284 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.MeshFilter::set_mesh(UnityEngine.Mesh)
extern "C"  void MeshFilter_set_mesh_m1415871686 (MeshFilter_t3523625662 * __this, Mesh_t3648964284 * p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
extern "C"  void Vector3__ctor_m3353183577 (Vector3_t3722313464 * __this, float p0, float p1, float p2, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Mesh::set_vertices(UnityEngine.Vector3[])
extern "C"  void Mesh_set_vertices_m2084450642 (Mesh_t3648964284 * __this, Vector3U5BU5D_t1718750761* p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Mesh::set_triangles(System.Int32[])
extern "C"  void Mesh_set_triangles_m255556250 (Mesh_t3648964284 * __this, Int32U5BU5D_t385246372* p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Vector3::get_up()
extern "C"  Vector3_t3722313464  Vector3_get_up_m3584168373 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Vector3::op_UnaryNegation(UnityEngine.Vector3)
extern "C"  Vector3_t3722313464  Vector3_op_UnaryNegation_m1951478815 (RuntimeObject * __this /* static, unused */, Vector3_t3722313464  p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Mesh::set_normals(UnityEngine.Vector3[])
extern "C"  void Mesh_set_normals_m332514528 (Mesh_t3648964284 * __this, Vector3U5BU5D_t1718750761* p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Object::.ctor()
extern "C"  void Object__ctor_m297566312 (RuntimeObject * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String[] System.String::Split(System.Char[])
extern "C"  StringU5BU5D_t1281789340* String_Split_m3646115398 (String_t* __this, CharU5BU5D_t3528271667* p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.List`1<System.String>::.ctor(System.Collections.Generic.IEnumerable`1<!0>)
#define List_1__ctor_m864250344(__this, p0, method) ((  void (*) (List_1_t3319525431 *, RuntimeObject*, const RuntimeMethod*))List_1__ctor_m1328752868_gshared)(__this, p0, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.LineRenderer>::.ctor()
#define List_1__ctor_m1710227863(__this, method) ((  void (*) (List_1_t331457716 *, const RuntimeMethod*))List_1__ctor_m2321703786_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.LineRenderer>::Add(!0)
#define List_1_Add_m2439754159(__this, p0, method) ((  void (*) (List_1_t331457716 *, LineRenderer_t3154350270 *, const RuntimeMethod*))List_1_Add_m3338814081_gshared)(__this, p0, method)
// System.Void UnityEngine.Debug::Log(System.Object)
extern "C"  void Debug_Log_m4051431634 (RuntimeObject * __this /* static, unused */, RuntimeObject * p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void MapXmlParser::parseMap(System.String)
extern "C"  void MapXmlParser_parseMap_m784539563 (MapXmlParser_t3144498968 * __this, String_t* ___path0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String MapAndSimulationChangeButton::getPathFromType(AlgorithmChooser/AlgorithmType)
extern "C"  String_t* MapAndSimulationChangeButton_getPathFromType_m1713043568 (MapAndSimulationChangeButton_t3111073902 * __this, int32_t ___type0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void SimulationXmlParser::parseSimulation(System.String,System.String)
extern "C"  void SimulationXmlParser_parseSimulation_m857131844 (SimulationXmlParser_t3990157828 * __this, String_t* ___mapPath0, String_t* ___simPath1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.Application::get_dataPath()
extern "C"  String_t* Application_get_dataPath_m4232621142 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String System.String::Concat(System.String,System.String)
extern "C"  String_t* String_Concat_m3937257545 (RuntimeObject * __this /* static, unused */, String_t* p0, String_t* p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.IO.File::Exists(System.String)
extern "C"  bool File_Exists_m3943585060 (RuntimeObject * __this /* static, unused */, String_t* p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String System.String::Concat(System.Object,System.Object)
extern "C"  String_t* String_Concat_m904156431 (RuntimeObject * __this /* static, unused */, RuntimeObject * p0, RuntimeObject * p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String System.IO.Path::GetFullPath(System.String)
extern "C"  String_t* Path_GetFullPath_m4142135635 (RuntimeObject * __this /* static, unused */, String_t* p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String[] System.IO.Directory::GetFiles(System.String)
extern "C"  StringU5BU5D_t1281789340* Directory_GetFiles_m932257245 (RuntimeObject * __this /* static, unused */, String_t* p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.InputField::set_text(System.String)
extern "C"  void InputField_set_text_m1877260015 (InputField_t3762917431 * __this, String_t* p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// !!0 UnityEngine.Component::GetComponent<UnityEngine.UI.InputField>()
#define Component_GetComponent_TisInputField_t3762917431_m3342128916(__this, method) ((  InputField_t3762917431 * (*) (Component_t1923634451 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m2906321015_gshared)(__this, method)
// !!0 UnityEngine.GameObject::GetComponent<UnityEngine.MeshFilter>()
#define GameObject_GetComponent_TisMeshFilter_t3523625662_m3102725183(__this, method) ((  MeshFilter_t3523625662 * (*) (GameObject_t1113636619 *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m2049753423_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<Lane>::.ctor()
#define List_1__ctor_m3427140098(__this, method) ((  void (*) (List_1_t973540472 *, const RuntimeMethod*))List_1__ctor_m2321703786_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<Junction>::.ctor()
#define List_1__ctor_m2010698488(__this, method) ((  void (*) (List_1_t2123442855 *, const RuntimeMethod*))List_1__ctor_m2321703786_gshared)(__this, method)
// System.Void System.Xml.XmlDocument::.ctor()
extern "C"  void XmlDocument__ctor_m1447119458 (XmlDocument_t2837193595 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void MapXmlParser::InitializeJunctionsAsMesh(System.Xml.XmlDocument)
extern "C"  void MapXmlParser_InitializeJunctionsAsMesh_m2696785309 (MapXmlParser_t3144498968 * __this, XmlDocument_t2837193595 * ___doc0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void MapXmlParser::InitializeLanesAsLines(System.Xml.XmlDocument)
extern "C"  void MapXmlParser_InitializeLanesAsLines_m3375149012 (MapXmlParser_t3144498968 * __this, XmlDocument_t2837193595 * ___doc0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlAttribute System.Xml.XmlAttributeCollection::get_ItemOf(System.String)
extern "C"  XmlAttribute_t1173852259 * XmlAttributeCollection_get_ItemOf_m952828905 (XmlAttributeCollection_t2316283784 * __this, String_t* p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Single System.Single::Parse(System.String)
extern "C"  float Single_Parse_m364357836 (RuntimeObject * __this /* static, unused */, String_t* p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector3>::.ctor()
#define List_1__ctor_m1536473967(__this, method) ((  void (*) (List_1_t899420910 *, const RuntimeMethod*))List_1__ctor_m1536473967_gshared)(__this, method)
// UnityEngine.Vector3 UnityEngine.Vector3::op_Subtraction(UnityEngine.Vector3,UnityEngine.Vector3)
extern "C"  Vector3_t3722313464  Vector3_op_Subtraction_m3073674971 (RuntimeObject * __this /* static, unused */, Vector3_t3722313464  p0, Vector3_t3722313464  p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector3>::Add(!0)
#define List_1_Add_m1524640104(__this, p0, method) ((  void (*) (List_1_t899420910 *, Vector3_t3722313464 , const RuntimeMethod*))List_1_Add_m1524640104_gshared)(__this, p0, method)
// System.Void Lane::.ctor(System.String)
extern "C"  void Lane__ctor_m715788684 (Lane_t3796433026 * __this, String_t* ___id0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// !0 System.Collections.Generic.List`1<UnityEngine.Vector3>::get_Item(System.Int32)
#define List_1_get_Item_m200663048(__this, p0, method) ((  Vector3_t3722313464  (*) (List_1_t899420910 *, int32_t, const RuntimeMethod*))List_1_get_Item_m200663048_gshared)(__this, p0, method)
// System.Void UnityEngine.LineRenderer::SetPositions(UnityEngine.Vector3[])
extern "C"  void LineRenderer_SetPositions_m1969530996 (LineRenderer_t3154350270 * __this, Vector3U5BU5D_t1718750761* p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// !!0 UnityEngine.Object::Instantiate<UnityEngine.LineRenderer>(!!0)
#define Object_Instantiate_TisLineRenderer_t3154350270_m542278554(__this /* static, unused */, p0, method) ((  LineRenderer_t3154350270 * (*) (RuntimeObject * /* static, unused */, LineRenderer_t3154350270 *, const RuntimeMethod*))Object_Instantiate_TisRuntimeObject_m2446893047_gshared)(__this /* static, unused */, p0, method)
// UnityEngine.Camera UnityEngine.Camera::get_main()
extern "C"  Camera_t4157153871 * Camera_get_main_m3643453163 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Transform UnityEngine.Component::get_transform()
extern "C"  Transform_t3600365921 * Component_get_transform_m3162698980 (Component_t1923634451 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Transform::set_position(UnityEngine.Vector3)
extern "C"  void Transform_set_position_m3387557959 (Transform_t3600365921 * __this, Vector3_t3722313464  p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.LineRenderer::set_startWidth(System.Single)
extern "C"  void LineRenderer_set_startWidth_m1093267133 (LineRenderer_t3154350270 * __this, float p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.LineRenderer::set_endWidth(System.Single)
extern "C"  void LineRenderer_set_endWidth_m4252049505 (LineRenderer_t3154350270 * __this, float p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Lane::addLine(UnityEngine.LineRenderer)
extern "C"  void Lane_addLine_m2539890349 (Lane_t3796433026 * __this, LineRenderer_t3154350270 * ___l0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Vector3>::get_Count()
#define List_1_get_Count_m576380744(__this, method) ((  int32_t (*) (List_1_t899420910 *, const RuntimeMethod*))List_1_get_Count_m576380744_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<Lane>::Add(!0)
#define List_1_Add_m691185006(__this, p0, method) ((  void (*) (List_1_t973540472 *, Lane_t3796433026 *, const RuntimeMethod*))List_1_Add_m3338814081_gshared)(__this, p0, method)
// !0[] System.Collections.Generic.List`1<UnityEngine.Vector3>::ToArray()
#define List_1_ToArray_m1691996104(__this, method) ((  Vector3U5BU5D_t1718750761* (*) (List_1_t899420910 *, const RuntimeMethod*))List_1_ToArray_m1691996104_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::.ctor()
#define List_1__ctor_m1628857705(__this, method) ((  void (*) (List_1_t128053199 *, const RuntimeMethod*))List_1__ctor_m1628857705_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::Add(!0)
#define List_1_Add_m697420525(__this, p0, method) ((  void (*) (List_1_t128053199 *, int32_t, const RuntimeMethod*))List_1_Add_m697420525_gshared)(__this, p0, method)
// !0[] System.Collections.Generic.List`1<System.Int32>::ToArray()
#define List_1_ToArray_m3295195900(__this, method) ((  Int32U5BU5D_t385246372* (*) (List_1_t128053199 *, const RuntimeMethod*))List_1_ToArray_m3295195900_gshared)(__this, method)
// System.Collections.Generic.IEnumerable`1<!!0> System.Linq.Enumerable::Repeat<UnityEngine.Vector3>(!!0,System.Int32)
#define Enumerable_Repeat_TisVector3_t3722313464_m724486136(__this /* static, unused */, p0, p1, method) ((  RuntimeObject* (*) (RuntimeObject * /* static, unused */, Vector3_t3722313464 , int32_t, const RuntimeMethod*))Enumerable_Repeat_TisVector3_t3722313464_m724486136_gshared)(__this /* static, unused */, p0, p1, method)
// !!0[] System.Linq.Enumerable::ToArray<UnityEngine.Vector3>(System.Collections.Generic.IEnumerable`1<!!0>)
#define Enumerable_ToArray_TisVector3_t3722313464_m1824456213(__this /* static, unused */, p0, method) ((  Vector3U5BU5D_t1718750761* (*) (RuntimeObject * /* static, unused */, RuntimeObject*, const RuntimeMethod*))Enumerable_ToArray_TisVector3_t3722313464_m1824456213_gshared)(__this /* static, unused */, p0, method)
// !!0 UnityEngine.Object::Instantiate<UnityEngine.GameObject>(!!0)
#define Object_Instantiate_TisGameObject_t1113636619_m4070250708(__this /* static, unused */, p0, method) ((  GameObject_t1113636619 * (*) (RuntimeObject * /* static, unused */, GameObject_t1113636619 *, const RuntimeMethod*))Object_Instantiate_TisRuntimeObject_m2446893047_gshared)(__this /* static, unused */, p0, method)
// System.Boolean System.String::op_Inequality(System.String,System.String)
extern "C"  bool String_op_Inequality_m215368492 (RuntimeObject * __this /* static, unused */, String_t* p0, String_t* p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Junction::.ctor(System.String,System.String)
extern "C"  void Junction__ctor_m2256413868 (Junction_t651368113 * __this, String_t* ___id0, String_t* ___intLanes1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.List`1<Junction>::Add(!0)
#define List_1_Add_m253759266(__this, p0, method) ((  void (*) (List_1_t2123442855 *, Junction_t651368113 *, const RuntimeMethod*))List_1_Add_m3338814081_gshared)(__this, p0, method)
// System.Boolean System.String::op_Equality(System.String,System.String)
extern "C"  bool String_op_Equality_m920492651 (RuntimeObject * __this /* static, unused */, String_t* p0, String_t* p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Mathf::Max(System.Single,System.Single)
extern "C"  float Mathf_Max_m3146388979 (RuntimeObject * __this /* static, unused */, float p0, float p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Camera::set_orthographicSize(System.Single)
extern "C"  void Camera_set_orthographicSize_m76971700 (Camera_t4157153871 * __this, float p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// !!0 UnityEngine.Component::GetComponent<UnityEngine.UI.Button>()
#define Component_GetComponent_TisButton_t4055032469_m1381873113(__this, method) ((  Button_t4055032469 * (*) (Component_t1923634451 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m2906321015_gshared)(__this, method)
// UnityEngine.UI.Button/ButtonClickedEvent UnityEngine.UI.Button::get_onClick()
extern "C"  ButtonClickedEvent_t48803504 * Button_get_onClick_m2332132945 (Button_t4055032469 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Events.UnityAction::.ctor(System.Object,System.IntPtr)
extern "C"  void UnityAction__ctor_m772160306 (UnityAction_t3245792599 * __this, RuntimeObject * p0, intptr_t p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Events.UnityEvent::AddListener(UnityEngine.Events.UnityAction)
extern "C"  void UnityEvent_AddListener_m2276267359 (UnityEvent_t2581268647 * __this, UnityAction_t3245792599 * p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.MonoBehaviour::InvokeRepeating(System.String,System.Single,System.Single)
extern "C"  void MonoBehaviour_InvokeRepeating_m650519629 (MonoBehaviour_t3962482529 * __this, String_t* p0, float p1, float p2, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Events.UnityEventBase::RemoveAllListeners()
extern "C"  void UnityEventBase_RemoveAllListeners_m858411973 (UnityEventBase_t3960448221 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// !!0 UnityEngine.Component::GetComponentInChildren<UnityEngine.UI.Text>()
#define Component_GetComponentInChildren_TisText_t1901882714_m396351542(__this, method) ((  Text_t1901882714 * (*) (Component_t1923634451 *, const RuntimeMethod*))Component_GetComponentInChildren_TisRuntimeObject_m1033527003_gshared)(__this, method)
// System.Void UnityEngine.MonoBehaviour::CancelInvoke(System.String)
extern "C"  void MonoBehaviour_CancelInvoke_m2180046661 (MonoBehaviour_t3962482529 * __this, String_t* p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1/Enumerator<!0> System.Collections.Generic.List`1<UnityEngine.GameObject>::GetEnumerator()
#define List_1_GetEnumerator_m1750140655(__this, method) ((  Enumerator_t179987942  (*) (List_1_t2585711361 *, const RuntimeMethod*))List_1_GetEnumerator_m2930774921_gshared)(__this, method)
// !0 System.Collections.Generic.List`1/Enumerator<UnityEngine.GameObject>::get_Current()
#define Enumerator_get_Current_m4179928398(__this, method) ((  GameObject_t1113636619 * (*) (Enumerator_t179987942 *, const RuntimeMethod*))Enumerator_get_Current_m470245444_gshared)(__this, method)
// !!0 UnityEngine.GameObject::GetComponent<Vehicle>()
#define GameObject_GetComponent_TisVehicle_t3024892526_m809803388(__this, method) ((  Vehicle_t3024892526 * (*) (GameObject_t1113636619 *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m2049753423_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1/Enumerator<UnityEngine.GameObject>::MoveNext()
#define Enumerator_MoveNext_m4286844348(__this, method) ((  bool (*) (Enumerator_t179987942 *, const RuntimeMethod*))Enumerator_MoveNext_m2142368520_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1/Enumerator<UnityEngine.GameObject>::Dispose()
#define Enumerator_Dispose_m1341201278(__this, method) ((  void (*) (Enumerator_t179987942 *, const RuntimeMethod*))Enumerator_Dispose_m3007748546_gshared)(__this, method)
// System.Void SimulationXmlParser::readTimeStep()
extern "C"  void SimulationXmlParser_readTimeStep_m2465967149 (SimulationXmlParser_t3990157828 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void SimulationXmlParser::deleteObjects()
extern "C"  void SimulationXmlParser_deleteObjects_m2991781533 (SimulationXmlParser_t3990157828 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlNode System.Xml.XmlNode::SelectSingleNode(System.String)
extern "C"  XmlNode_t3767805227 * XmlNode_SelectSingleNode_m2944339946 (XmlNode_t3767805227 * __this, String_t* p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void SimulationXmlParser::determineCar(System.Xml.XmlNode)
extern "C"  void SimulationXmlParser_determineCar_m227194893 (SimulationXmlParser_t3990157828 * __this, XmlNode_t3767805227 * ___curNode0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void SimulationXmlParser::determineLight(System.Xml.XmlNode)
extern "C"  void SimulationXmlParser_determineLight_m2540190358 (SimulationXmlParser_t3990157828 * __this, XmlNode_t3767805227 * ___curNode0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject SimulationXmlParser::alive(System.Xml.XmlNode)
extern "C"  GameObject_t1113636619 * SimulationXmlParser_alive_m683940935 (SimulationXmlParser_t3990157828 * __this, XmlNode_t3767805227 * ___curNode0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Object::op_Implicit(UnityEngine.Object)
extern "C"  bool Object_op_Implicit_m3574996620 (RuntimeObject * __this /* static, unused */, Object_t631007953 * p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Double System.Convert::ToDouble(System.String)
extern "C"  double Convert_ToDouble_m1364128555 (RuntimeObject * __this /* static, unused */, String_t* p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Vehicle::updateCarPosition(System.Single,System.Single,System.Single,System.Double)
extern "C"  void Vehicle_updateCarPosition_m1968675102 (Vehicle_t3024892526 * __this, float ___x0, float ___y1, float ___angle2, double ___speed3, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject SimulationXmlParser::getCarData(System.Xml.XmlNode)
extern "C"  GameObject_t1113636619 * SimulationXmlParser_getCarData_m3190637446 (SimulationXmlParser_t3990157828 * __this, XmlNode_t3767805227 * ___curNode0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Quaternion::.ctor(System.Single,System.Single,System.Single,System.Single)
extern "C"  void Quaternion__ctor_m435141806 (Quaternion_t2301928331 * __this, float p0, float p1, float p2, float p3, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// !!0 UnityEngine.Object::Instantiate<UnityEngine.GameObject>(!!0,UnityEngine.Vector3,UnityEngine.Quaternion)
#define Object_Instantiate_TisGameObject_t1113636619_m3006960551(__this /* static, unused */, p0, p1, p2, method) ((  GameObject_t1113636619 * (*) (RuntimeObject * /* static, unused */, GameObject_t1113636619 *, Vector3_t3722313464 , Quaternion_t2301928331 , const RuntimeMethod*))Object_Instantiate_TisRuntimeObject_m1135049463_gshared)(__this /* static, unused */, p0, p1, p2, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.GameObject>::Add(!0)
#define List_1_Add_m2765963565(__this, p0, method) ((  void (*) (List_1_t2585711361 *, GameObject_t1113636619 *, const RuntimeMethod*))List_1_Add_m3338814081_gshared)(__this, p0, method)
// System.Void SimulationXmlParser/<determineLight>c__AnonStorey0::.ctor()
extern "C"  void U3CdetermineLightU3Ec__AnonStorey0__ctor_m825618670 (U3CdetermineLightU3Ec__AnonStorey0_t2577330775 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// !!0 UnityEngine.GameObject::GetComponent<MapXmlParser>()
#define GameObject_GetComponent_TisMapXmlParser_t3144498968_m627506226(__this, method) ((  MapXmlParser_t3144498968 * (*) (GameObject_t1113636619 *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m2049753423_gshared)(__this, method)
// System.Void System.Predicate`1<Junction>::.ctor(System.Object,System.IntPtr)
#define Predicate_1__ctor_m1340340098(__this, p0, p1, method) ((  void (*) (Predicate_1_t1476662237 *, RuntimeObject *, intptr_t, const RuntimeMethod*))Predicate_1__ctor_m327447107_gshared)(__this, p0, p1, method)
// !0 System.Collections.Generic.List`1<Junction>::Find(System.Predicate`1<!0>)
#define List_1_Find_m1598379345(__this, p0, method) ((  Junction_t651368113 * (*) (List_1_t2123442855 *, Predicate_1_t1476662237 *, const RuntimeMethod*))List_1_Find_m2048854920_gshared)(__this, p0, method)
// System.Collections.Generic.List`1<System.String> Junction::getLanes()
extern "C"  List_1_t3319525431 * Junction_getLanes_m1263919175 (Junction_t651368113 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1/Enumerator<!0> System.Collections.Generic.List`1<System.String>::GetEnumerator()
#define List_1_GetEnumerator_m1955908099(__this, method) ((  Enumerator_t913802012  (*) (List_1_t3319525431 *, const RuntimeMethod*))List_1_GetEnumerator_m2930774921_gshared)(__this, method)
// System.Void SimulationXmlParser/<determineLight>c__AnonStorey1::.ctor()
extern "C"  void U3CdetermineLightU3Ec__AnonStorey1__ctor_m772600046 (U3CdetermineLightU3Ec__AnonStorey1_t2577396311 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// !0 System.Collections.Generic.List`1/Enumerator<System.String>::get_Current()
#define Enumerator_get_Current_m236733038(__this, method) ((  String_t* (*) (Enumerator_t913802012 *, const RuntimeMethod*))Enumerator_get_Current_m470245444_gshared)(__this, method)
// System.Char System.String::get_Chars(System.Int32)
extern "C"  Il2CppChar String_get_Chars_m2986988803 (String_t* __this, int32_t p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Color UnityEngine.Color::get_green()
extern "C"  Color_t2555686324  Color_get_green_m490390750 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Color::.ctor(System.Single,System.Single,System.Single)
extern "C"  void Color__ctor_m286683560 (Color_t2555686324 * __this, float p0, float p1, float p2, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Color UnityEngine.Color::get_yellow()
extern "C"  Color_t2555686324  Color_get_yellow_m1287957903 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Color UnityEngine.Color::get_red()
extern "C"  Color_t2555686324  Color_get_red_m3227813939 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Predicate`1<Lane>::.ctor(System.Object,System.IntPtr)
#define Predicate_1__ctor_m3711714686(__this, p0, p1, method) ((  void (*) (Predicate_1_t326759854 *, RuntimeObject *, intptr_t, const RuntimeMethod*))Predicate_1__ctor_m327447107_gshared)(__this, p0, p1, method)
// !0 System.Collections.Generic.List`1<Lane>::Find(System.Predicate`1<!0>)
#define List_1_Find_m1540475052(__this, p0, method) ((  Lane_t3796433026 * (*) (List_1_t973540472 *, Predicate_1_t326759854 *, const RuntimeMethod*))List_1_Find_m2048854920_gshared)(__this, p0, method)
// System.Collections.Generic.List`1<UnityEngine.LineRenderer> Lane::getLines()
extern "C"  List_1_t331457716 * Lane_getLines_m598379578 (Lane_t3796433026 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1/Enumerator<!0> System.Collections.Generic.List`1<UnityEngine.LineRenderer>::GetEnumerator()
#define List_1_GetEnumerator_m2371351222(__this, method) ((  Enumerator_t2220701593  (*) (List_1_t331457716 *, const RuntimeMethod*))List_1_GetEnumerator_m2930774921_gshared)(__this, method)
// !0 System.Collections.Generic.List`1/Enumerator<UnityEngine.LineRenderer>::get_Current()
#define Enumerator_get_Current_m551545990(__this, method) ((  LineRenderer_t3154350270 * (*) (Enumerator_t2220701593 *, const RuntimeMethod*))Enumerator_get_Current_m470245444_gshared)(__this, method)
// UnityEngine.Material UnityEngine.Renderer::get_material()
extern "C"  Material_t340375123 * Renderer_get_material_m4171603682 (Renderer_t2627027031 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Material::set_color(UnityEngine.Color)
extern "C"  void Material_set_color_m1794818007 (Material_t340375123 * __this, Color_t2555686324  p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.Generic.List`1/Enumerator<UnityEngine.LineRenderer>::MoveNext()
#define Enumerator_MoveNext_m3596597031(__this, method) ((  bool (*) (Enumerator_t2220701593 *, const RuntimeMethod*))Enumerator_MoveNext_m2142368520_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1/Enumerator<UnityEngine.LineRenderer>::Dispose()
#define Enumerator_Dispose_m995875212(__this, method) ((  void (*) (Enumerator_t2220701593 *, const RuntimeMethod*))Enumerator_Dispose_m3007748546_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1/Enumerator<System.String>::MoveNext()
#define Enumerator_MoveNext_m4158182743(__this, method) ((  bool (*) (Enumerator_t913802012 *, const RuntimeMethod*))Enumerator_MoveNext_m2142368520_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1/Enumerator<System.String>::Dispose()
#define Enumerator_Dispose_m2026665411(__this, method) ((  void (*) (Enumerator_t913802012 *, const RuntimeMethod*))Enumerator_Dispose_m3007748546_gshared)(__this, method)
// System.Void System.Random::.ctor()
extern "C"  void Random__ctor_m4122933043 (Random_t108471755 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.List`1<UnityEngine.GameObject>::.ctor()
#define List_1__ctor_m1424466557(__this, method) ((  void (*) (List_1_t2585711361 *, const RuntimeMethod*))List_1__ctor_m2321703786_gshared)(__this, method)
// System.Void UnityEngine.Object::Destroy(UnityEngine.Object)
extern "C"  void Object_Destroy_m565254235 (RuntimeObject * __this /* static, unused */, Object_t631007953 * p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Camera::get_orthographicSize()
extern "C"  float Camera_get_orthographicSize_m3903216845 (Camera_t4157153871 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Input::GetAxis(System.String)
extern "C"  float Input_GetAxis_m4009438427 (RuntimeObject * __this /* static, unused */, String_t* p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Mathf::Clamp(System.Single,System.Single,System.Single)
extern "C"  float Mathf_Clamp_m3350697880 (RuntimeObject * __this /* static, unused */, float p0, float p1, float p2, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Input::GetButton(System.String)
extern "C"  bool Input_GetButton_m2064261504 (RuntimeObject * __this /* static, unused */, String_t* p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Transform::Translate(System.Single,System.Single,System.Single)
extern "C"  void Transform_Translate_m3762500149 (Transform_t3600365921 * __this, float p0, float p1, float p2, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String Junction::getId()
extern "C"  String_t* Junction_getId_m3477164959 (Junction_t651368113 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String Lane::getId()
extern "C"  String_t* Lane_getId_m2958478789 (Lane_t3796433026 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Vehicle::changeOrientation(System.Single,System.Single,System.Single,System.Double)
extern "C"  void Vehicle_changeOrientation_m3989541646 (Vehicle_t3024892526 * __this, float ___x0, float ___y1, float ___angle2, double ___speed3, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Transform::LookAt(UnityEngine.Vector3)
extern "C"  void Transform_LookAt_m3649447396 (Transform_t3600365921 * __this, Vector3_t3722313464  p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
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
// System.Void AlgorithmChooser::.ctor()
extern "C"  void AlgorithmChooser__ctor_m1005225038 (AlgorithmChooser_t2834305195 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_m1579109191(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void AlgorithmChooser::Start()
extern "C"  void AlgorithmChooser_Start_m1995924704 (AlgorithmChooser_t2834305195 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (AlgorithmChooser_Start_m1995924704_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		Dropdown_t2274391225 * L_0 = Component_GetComponent_TisDropdown_t2274391225_m1954154383(__this, /*hidden argument*/Component_GetComponent_TisDropdown_t2274391225_m1954154383_RuntimeMethod_var);
		__this->set_m_dropDown_2(L_0);
		Dropdown_t2274391225 * L_1 = __this->get_m_dropDown_2();
		List_1_t447389798 * L_2 = Dropdown_get_options_m2762539965(L_1, /*hidden argument*/NULL);
		OptionData_t3270282352 * L_3 = (OptionData_t3270282352 *)il2cpp_codegen_object_new(OptionData_t3270282352_il2cpp_TypeInfo_var);
		OptionData__ctor_m2696491456(L_3, _stringLiteral2632576235, /*hidden argument*/NULL);
		List_1_Add_m3700962105(L_2, L_3, /*hidden argument*/List_1_Add_m3700962105_RuntimeMethod_var);
		RuntimeTypeHandle_t3027515415  L_4 = { reinterpret_cast<intptr_t> (AlgorithmType_t644850295_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_5 = Type_GetTypeFromHandle_m1620074514(NULL /*static, unused*/, L_4, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Enum_t4135868527_il2cpp_TypeInfo_var);
		RuntimeArray * L_6 = Enum_GetValues_m4192343468(NULL /*static, unused*/, L_5, /*hidden argument*/NULL);
		RuntimeObject* L_7 = Enumerable_Cast_TisAlgorithmType_t644850295_m717376125(NULL /*static, unused*/, L_6, /*hidden argument*/Enumerable_Cast_TisAlgorithmType_t644850295_m717376125_RuntimeMethod_var);
		V_0 = L_7;
		V_1 = 1;
		goto IL_0079;
	}

IL_0042:
	{
		Dropdown_t2274391225 * L_8 = __this->get_m_dropDown_2();
		List_1_t447389798 * L_9 = Dropdown_get_options_m2762539965(L_8, /*hidden argument*/NULL);
		RuntimeObject* L_10 = V_0;
		int32_t L_11 = V_1;
		int32_t L_12 = Enumerable_ElementAt_TisAlgorithmType_t644850295_m1012687098(NULL /*static, unused*/, L_10, L_11, /*hidden argument*/Enumerable_ElementAt_TisAlgorithmType_t644850295_m1012687098_RuntimeMethod_var);
		V_2 = L_12;
		RuntimeObject * L_13 = Box(AlgorithmType_t644850295_il2cpp_TypeInfo_var, (&V_2));
		String_t* L_14 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_13);
		V_2 = *(int32_t*)UnBox(L_13);
		String_t* L_15 = String_Replace_m3726209165(L_14, ((int32_t)95), ((int32_t)32), /*hidden argument*/NULL);
		OptionData_t3270282352 * L_16 = (OptionData_t3270282352 *)il2cpp_codegen_object_new(OptionData_t3270282352_il2cpp_TypeInfo_var);
		OptionData__ctor_m2696491456(L_16, L_15, /*hidden argument*/NULL);
		List_1_Add_m3700962105(L_9, L_16, /*hidden argument*/List_1_Add_m3700962105_RuntimeMethod_var);
		int32_t L_17 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_17, (int32_t)1));
	}

IL_0079:
	{
		int32_t L_18 = V_1;
		RuntimeObject* L_19 = V_0;
		int32_t L_20 = Enumerable_Count_TisAlgorithmType_t644850295_m3970683133(NULL /*static, unused*/, L_19, /*hidden argument*/Enumerable_Count_TisAlgorithmType_t644850295_m3970683133_RuntimeMethod_var);
		if ((((int32_t)L_18) < ((int32_t)L_20)))
		{
			goto IL_0042;
		}
	}
	{
		return;
	}
}
// System.Void AlgorithmChooser::onChange()
extern "C"  void AlgorithmChooser_onChange_m578937384 (AlgorithmChooser_t2834305195 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (AlgorithmChooser_onChange_m578937384_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Dropdown_t2274391225 * L_0 = __this->get_m_dropDown_2();
		int32_t L_1 = Dropdown_get_value_m1555353112(L_0, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(AlgorithmChooser_t2834305195_il2cpp_TypeInfo_var);
		((AlgorithmChooser_t2834305195_StaticFields*)il2cpp_codegen_static_fields_for(AlgorithmChooser_t2834305195_il2cpp_TypeInfo_var))->set_algorithmType_3(L_1);
		return;
	}
}
// System.Void AlgorithmChooser::Update()
extern "C"  void AlgorithmChooser_Update_m458623040 (AlgorithmChooser_t2834305195 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Void AlgorithmChooser::.cctor()
extern "C"  void AlgorithmChooser__cctor_m2860563221 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
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
// System.Void CheckMesh::.ctor()
extern "C"  void CheckMesh__ctor_m1712228820 (CheckMesh_t3175980401 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_m1579109191(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void CheckMesh::Start()
extern "C"  void CheckMesh_Start_m2059452952 (CheckMesh_t3175980401 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (CheckMesh_Start_m2059452952_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Mesh_t3648964284 * V_0 = NULL;
	Vector3U5BU5D_t1718750761* V_1 = NULL;
	Int32U5BU5D_t385246372* V_2 = NULL;
	Vector3U5BU5D_t1718750761* V_3 = NULL;
	{
		MeshFilter_t3523625662 * L_0 = Component_GetComponent_TisMeshFilter_t3523625662_m1718783796(__this, /*hidden argument*/Component_GetComponent_TisMeshFilter_t3523625662_m1718783796_RuntimeMethod_var);
		__this->set_mf_2(L_0);
		Mesh_t3648964284 * L_1 = (Mesh_t3648964284 *)il2cpp_codegen_object_new(Mesh_t3648964284_il2cpp_TypeInfo_var);
		Mesh__ctor_m2533762929(L_1, /*hidden argument*/NULL);
		V_0 = L_1;
		MeshFilter_t3523625662 * L_2 = __this->get_mf_2();
		Mesh_t3648964284 * L_3 = V_0;
		MeshFilter_set_mesh_m1415871686(L_2, L_3, /*hidden argument*/NULL);
		V_1 = ((Vector3U5BU5D_t1718750761*)SZArrayNew(Vector3U5BU5D_t1718750761_il2cpp_TypeInfo_var, (uint32_t)4));
		Vector3U5BU5D_t1718750761* L_4 = V_1;
		Vector3_t3722313464  L_5;
		memset(&L_5, 0, sizeof(L_5));
		Vector3__ctor_m3353183577((&L_5), (0.0f), (0.0f), (0.0f), /*hidden argument*/NULL);
		*(Vector3_t3722313464 *)((L_4)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(0))) = L_5;
		Vector3U5BU5D_t1718750761* L_6 = V_1;
		Vector3_t3722313464  L_7;
		memset(&L_7, 0, sizeof(L_7));
		Vector3__ctor_m3353183577((&L_7), (10.0f), (0.0f), (0.0f), /*hidden argument*/NULL);
		*(Vector3_t3722313464 *)((L_6)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(1))) = L_7;
		Vector3U5BU5D_t1718750761* L_8 = V_1;
		Vector3_t3722313464  L_9;
		memset(&L_9, 0, sizeof(L_9));
		Vector3__ctor_m3353183577((&L_9), (0.0f), (0.0f), (10.0f), /*hidden argument*/NULL);
		*(Vector3_t3722313464 *)((L_8)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(2))) = L_9;
		Vector3U5BU5D_t1718750761* L_10 = V_1;
		Vector3_t3722313464  L_11;
		memset(&L_11, 0, sizeof(L_11));
		Vector3__ctor_m3353183577((&L_11), (10.0f), (0.0f), (10.0f), /*hidden argument*/NULL);
		*(Vector3_t3722313464 *)((L_10)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(3))) = L_11;
		Mesh_t3648964284 * L_12 = V_0;
		Vector3U5BU5D_t1718750761* L_13 = V_1;
		Mesh_set_vertices_m2084450642(L_12, L_13, /*hidden argument*/NULL);
		V_2 = ((Int32U5BU5D_t385246372*)SZArrayNew(Int32U5BU5D_t385246372_il2cpp_TypeInfo_var, (uint32_t)6));
		Int32U5BU5D_t385246372* L_14 = V_2;
		(L_14)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (int32_t)0);
		Int32U5BU5D_t385246372* L_15 = V_2;
		(L_15)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(1), (int32_t)2);
		Int32U5BU5D_t385246372* L_16 = V_2;
		(L_16)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(2), (int32_t)1);
		Int32U5BU5D_t385246372* L_17 = V_2;
		(L_17)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(3), (int32_t)2);
		Int32U5BU5D_t385246372* L_18 = V_2;
		(L_18)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(4), (int32_t)3);
		Int32U5BU5D_t385246372* L_19 = V_2;
		(L_19)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(5), (int32_t)1);
		Mesh_t3648964284 * L_20 = V_0;
		Int32U5BU5D_t385246372* L_21 = V_2;
		Mesh_set_triangles_m255556250(L_20, L_21, /*hidden argument*/NULL);
		V_3 = ((Vector3U5BU5D_t1718750761*)SZArrayNew(Vector3U5BU5D_t1718750761_il2cpp_TypeInfo_var, (uint32_t)4));
		Vector3U5BU5D_t1718750761* L_22 = V_3;
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_t3722313464_il2cpp_TypeInfo_var);
		Vector3_t3722313464  L_23 = Vector3_get_up_m3584168373(NULL /*static, unused*/, /*hidden argument*/NULL);
		Vector3_t3722313464  L_24 = Vector3_op_UnaryNegation_m1951478815(NULL /*static, unused*/, L_23, /*hidden argument*/NULL);
		*(Vector3_t3722313464 *)((L_22)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(0))) = L_24;
		Vector3U5BU5D_t1718750761* L_25 = V_3;
		Vector3_t3722313464  L_26 = Vector3_get_up_m3584168373(NULL /*static, unused*/, /*hidden argument*/NULL);
		Vector3_t3722313464  L_27 = Vector3_op_UnaryNegation_m1951478815(NULL /*static, unused*/, L_26, /*hidden argument*/NULL);
		*(Vector3_t3722313464 *)((L_25)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(1))) = L_27;
		Vector3U5BU5D_t1718750761* L_28 = V_3;
		Vector3_t3722313464  L_29 = Vector3_get_up_m3584168373(NULL /*static, unused*/, /*hidden argument*/NULL);
		Vector3_t3722313464  L_30 = Vector3_op_UnaryNegation_m1951478815(NULL /*static, unused*/, L_29, /*hidden argument*/NULL);
		*(Vector3_t3722313464 *)((L_28)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(2))) = L_30;
		Vector3U5BU5D_t1718750761* L_31 = V_3;
		Vector3_t3722313464  L_32 = Vector3_get_up_m3584168373(NULL /*static, unused*/, /*hidden argument*/NULL);
		Vector3_t3722313464  L_33 = Vector3_op_UnaryNegation_m1951478815(NULL /*static, unused*/, L_32, /*hidden argument*/NULL);
		*(Vector3_t3722313464 *)((L_31)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(3))) = L_33;
		Mesh_t3648964284 * L_34 = V_0;
		Vector3U5BU5D_t1718750761* L_35 = V_3;
		Mesh_set_normals_m332514528(L_34, L_35, /*hidden argument*/NULL);
		return;
	}
}
// System.Void CheckMesh::Update()
extern "C"  void CheckMesh_Update_m4143231996 (CheckMesh_t3175980401 * __this, const RuntimeMethod* method)
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
// System.Void Junction::.ctor(System.String,System.String)
extern "C"  void Junction__ctor_m2256413868 (Junction_t651368113 * __this, String_t* ___id0, String_t* ___intLanes1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Junction__ctor_m2256413868_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		String_t* L_0 = ___id0;
		__this->set__id_0(L_0);
		String_t* L_1 = ___intLanes1;
		CharU5BU5D_t3528271667* L_2 = ((CharU5BU5D_t3528271667*)SZArrayNew(CharU5BU5D_t3528271667_il2cpp_TypeInfo_var, (uint32_t)1));
		(L_2)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (Il2CppChar)((int32_t)32));
		StringU5BU5D_t1281789340* L_3 = String_Split_m3646115398(L_1, L_2, /*hidden argument*/NULL);
		List_1_t3319525431 * L_4 = (List_1_t3319525431 *)il2cpp_codegen_object_new(List_1_t3319525431_il2cpp_TypeInfo_var);
		List_1__ctor_m864250344(L_4, (RuntimeObject*)(RuntimeObject*)L_3, /*hidden argument*/List_1__ctor_m864250344_RuntimeMethod_var);
		__this->set__intLanes_1(L_4);
		return;
	}
}
// System.String Junction::getId()
extern "C"  String_t* Junction_getId_m3477164959 (Junction_t651368113 * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0 = __this->get__id_0();
		return L_0;
	}
}
// System.Collections.Generic.List`1<System.String> Junction::getLanes()
extern "C"  List_1_t3319525431 * Junction_getLanes_m1263919175 (Junction_t651368113 * __this, const RuntimeMethod* method)
{
	{
		List_1_t3319525431 * L_0 = __this->get__intLanes_1();
		return L_0;
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
// System.Void Lane::.ctor(System.String)
extern "C"  void Lane__ctor_m715788684 (Lane_t3796433026 * __this, String_t* ___id0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Lane__ctor_m715788684_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		String_t* L_0 = ___id0;
		__this->set__id_0(L_0);
		List_1_t331457716 * L_1 = (List_1_t331457716 *)il2cpp_codegen_object_new(List_1_t331457716_il2cpp_TypeInfo_var);
		List_1__ctor_m1710227863(L_1, /*hidden argument*/List_1__ctor_m1710227863_RuntimeMethod_var);
		__this->set__lines_1(L_1);
		return;
	}
}
// System.String Lane::getId()
extern "C"  String_t* Lane_getId_m2958478789 (Lane_t3796433026 * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0 = __this->get__id_0();
		return L_0;
	}
}
// System.Void Lane::addLine(UnityEngine.LineRenderer)
extern "C"  void Lane_addLine_m2539890349 (Lane_t3796433026 * __this, LineRenderer_t3154350270 * ___l0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Lane_addLine_m2539890349_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		List_1_t331457716 * L_0 = __this->get__lines_1();
		LineRenderer_t3154350270 * L_1 = ___l0;
		List_1_Add_m2439754159(L_0, L_1, /*hidden argument*/List_1_Add_m2439754159_RuntimeMethod_var);
		return;
	}
}
// System.Collections.Generic.List`1<UnityEngine.LineRenderer> Lane::getLines()
extern "C"  List_1_t331457716 * Lane_getLines_m598379578 (Lane_t3796433026 * __this, const RuntimeMethod* method)
{
	{
		List_1_t331457716 * L_0 = __this->get__lines_1();
		return L_0;
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
// System.Void MapAndSimulationChangeButton::.ctor()
extern "C"  void MapAndSimulationChangeButton__ctor_m1231054129 (MapAndSimulationChangeButton_t3111073902 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_m1579109191(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void MapAndSimulationChangeButton::Start()
extern "C"  void MapAndSimulationChangeButton_Start_m2360238945 (MapAndSimulationChangeButton_t3111073902 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.String MapAndSimulationChangeButton::getPathFromType(AlgorithmChooser/AlgorithmType)
extern "C"  String_t* MapAndSimulationChangeButton_getPathFromType_m1713043568 (MapAndSimulationChangeButton_t3111073902 * __this, int32_t ___type0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MapAndSimulationChangeButton_getPathFromType_m1713043568_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		return _stringLiteral638743437;
	}
}
// System.Void MapAndSimulationChangeButton::onClick()
extern "C"  void MapAndSimulationChangeButton_onClick_m3647358106 (MapAndSimulationChangeButton_t3111073902 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MapAndSimulationChangeButton_onClick_m3647358106_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t3317548046_il2cpp_TypeInfo_var);
		Debug_Log_m4051431634(NULL /*static, unused*/, _stringLiteral3092710847, /*hidden argument*/NULL);
		Debug_Log_m4051431634(NULL /*static, unused*/, _stringLiteral1903018118, /*hidden argument*/NULL);
		MapXmlParser_t3144498968 * L_0 = __this->get_m_mapXmlParser_2();
		IL2CPP_RUNTIME_CLASS_INIT(MapChooser_t1481971204_il2cpp_TypeInfo_var);
		String_t* L_1 = ((MapChooser_t1481971204_StaticFields*)il2cpp_codegen_static_fields_for(MapChooser_t1481971204_il2cpp_TypeInfo_var))->get_mapPath_2();
		MapXmlParser_parseMap_m784539563(L_0, L_1, /*hidden argument*/NULL);
		Debug_Log_m4051431634(NULL /*static, unused*/, _stringLiteral3092710827, /*hidden argument*/NULL);
		SimulationXmlParser_t3990157828 * L_2 = __this->get_m_simXmlParser_3();
		String_t* L_3 = ((MapChooser_t1481971204_StaticFields*)il2cpp_codegen_static_fields_for(MapChooser_t1481971204_il2cpp_TypeInfo_var))->get_mapPath_2();
		IL2CPP_RUNTIME_CLASS_INIT(AlgorithmChooser_t2834305195_il2cpp_TypeInfo_var);
		int32_t L_4 = ((AlgorithmChooser_t2834305195_StaticFields*)il2cpp_codegen_static_fields_for(AlgorithmChooser_t2834305195_il2cpp_TypeInfo_var))->get_algorithmType_3();
		String_t* L_5 = MapAndSimulationChangeButton_getPathFromType_m1713043568(__this, L_4, /*hidden argument*/NULL);
		SimulationXmlParser_parseSimulation_m857131844(L_2, L_3, L_5, /*hidden argument*/NULL);
		return;
	}
}
// System.Void MapAndSimulationChangeButton::Update()
extern "C"  void MapAndSimulationChangeButton_Update_m2921170169 (MapAndSimulationChangeButton_t3111073902 * __this, const RuntimeMethod* method)
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
// System.Void MapChooser::.ctor()
extern "C"  void MapChooser__ctor_m1145230656 (MapChooser_t1481971204 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_m1579109191(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void MapChooser::OnPointerClick(UnityEngine.EventSystems.PointerEventData)
extern "C"  void MapChooser_OnPointerClick_m891393910 (MapChooser_t1481971204 * __this, PointerEventData_t3807901092 * ___eventData0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MapChooser_OnPointerClick_m891393910_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	StringU5BU5D_t1281789340* V_1 = NULL;
	{
		String_t* L_0 = Application_get_dataPath_m4232621142(NULL /*static, unused*/, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_1 = String_Concat_m3937257545(NULL /*static, unused*/, _stringLiteral249465722, L_0, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t3317548046_il2cpp_TypeInfo_var);
		Debug_Log_m4051431634(NULL /*static, unused*/, L_1, /*hidden argument*/NULL);
		bool L_2 = File_Exists_m3943585060(NULL /*static, unused*/, _stringLiteral1269782862, /*hidden argument*/NULL);
		bool L_3 = L_2;
		RuntimeObject * L_4 = Box(Boolean_t97287965_il2cpp_TypeInfo_var, &L_3);
		String_t* L_5 = String_Concat_m904156431(NULL /*static, unused*/, _stringLiteral2058722228, L_4, /*hidden argument*/NULL);
		Debug_Log_m4051431634(NULL /*static, unused*/, L_5, /*hidden argument*/NULL);
		bool L_6 = File_Exists_m3943585060(NULL /*static, unused*/, _stringLiteral2998221401, /*hidden argument*/NULL);
		bool L_7 = L_6;
		RuntimeObject * L_8 = Box(Boolean_t97287965_il2cpp_TypeInfo_var, &L_7);
		String_t* L_9 = String_Concat_m904156431(NULL /*static, unused*/, _stringLiteral2058656692, L_8, /*hidden argument*/NULL);
		Debug_Log_m4051431634(NULL /*static, unused*/, L_9, /*hidden argument*/NULL);
		bool L_10 = File_Exists_m3943585060(NULL /*static, unused*/, _stringLiteral132419186, /*hidden argument*/NULL);
		bool L_11 = L_10;
		RuntimeObject * L_12 = Box(Boolean_t97287965_il2cpp_TypeInfo_var, &L_11);
		String_t* L_13 = String_Concat_m904156431(NULL /*static, unused*/, _stringLiteral2058591156, L_12, /*hidden argument*/NULL);
		Debug_Log_m4051431634(NULL /*static, unused*/, L_13, /*hidden argument*/NULL);
		bool L_14 = File_Exists_m3943585060(NULL /*static, unused*/, _stringLiteral607675389, /*hidden argument*/NULL);
		bool L_15 = L_14;
		RuntimeObject * L_16 = Box(Boolean_t97287965_il2cpp_TypeInfo_var, &L_15);
		String_t* L_17 = String_Concat_m904156431(NULL /*static, unused*/, _stringLiteral2058525620, L_16, /*hidden argument*/NULL);
		Debug_Log_m4051431634(NULL /*static, unused*/, L_17, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Path_t1605229823_il2cpp_TypeInfo_var);
		String_t* L_18 = Path_GetFullPath_m4142135635(NULL /*static, unused*/, _stringLiteral3452614530, /*hidden argument*/NULL);
		String_t* L_19 = String_Concat_m3937257545(NULL /*static, unused*/, _stringLiteral1874753564, L_18, /*hidden argument*/NULL);
		Debug_Log_m4051431634(NULL /*static, unused*/, L_19, /*hidden argument*/NULL);
		StringU5BU5D_t1281789340* L_20 = Directory_GetFiles_m932257245(NULL /*static, unused*/, _stringLiteral3452614530, /*hidden argument*/NULL);
		String_t* L_21 = String_Concat_m904156431(NULL /*static, unused*/, _stringLiteral355807170, (RuntimeObject *)(RuntimeObject *)L_20, /*hidden argument*/NULL);
		Debug_Log_m4051431634(NULL /*static, unused*/, L_21, /*hidden argument*/NULL);
		V_0 = _stringLiteral132419186;
		String_t* L_22 = V_0;
		CharU5BU5D_t3528271667* L_23 = ((CharU5BU5D_t3528271667*)SZArrayNew(CharU5BU5D_t3528271667_il2cpp_TypeInfo_var, (uint32_t)1));
		(L_23)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (Il2CppChar)((int32_t)47));
		StringU5BU5D_t1281789340* L_24 = String_Split_m3646115398(L_22, L_23, /*hidden argument*/NULL);
		V_1 = L_24;
		InputField_t3762917431 * L_25 = __this->get_m_InputField_3();
		StringU5BU5D_t1281789340* L_26 = V_1;
		StringU5BU5D_t1281789340* L_27 = V_1;
		int32_t L_28 = ((int32_t)il2cpp_codegen_subtract((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_27)->max_length)))), (int32_t)1));
		String_t* L_29 = (L_26)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_28));
		InputField_set_text_m1877260015(L_25, L_29, /*hidden argument*/NULL);
		String_t* L_30 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(MapChooser_t1481971204_il2cpp_TypeInfo_var);
		((MapChooser_t1481971204_StaticFields*)il2cpp_codegen_static_fields_for(MapChooser_t1481971204_il2cpp_TypeInfo_var))->set_mapPath_2(L_30);
		return;
	}
}
// System.Void MapChooser::Start()
extern "C"  void MapChooser_Start_m854486562 (MapChooser_t1481971204 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MapChooser_Start_m854486562_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		InputField_t3762917431 * L_0 = Component_GetComponent_TisInputField_t3762917431_m3342128916(__this, /*hidden argument*/Component_GetComponent_TisInputField_t3762917431_m3342128916_RuntimeMethod_var);
		__this->set_m_InputField_3(L_0);
		return;
	}
}
// System.Void MapChooser::Update()
extern "C"  void MapChooser_Update_m3701855028 (MapChooser_t1481971204 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Void MapChooser::.cctor()
extern "C"  void MapChooser__cctor_m3860201383 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
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
// System.Void MapXmlParser::.ctor()
extern "C"  void MapXmlParser__ctor_m811290290 (MapXmlParser_t3144498968 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_m1579109191(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void MapXmlParser::Start()
extern "C"  void MapXmlParser_Start_m3101452522 (MapXmlParser_t3144498968 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MapXmlParser_Start_m3101452522_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		GameObject_t1113636619 * L_0 = __this->get_quad_5();
		MeshFilter_t3523625662 * L_1 = GameObject_GetComponent_TisMeshFilter_t3523625662_m3102725183(L_0, /*hidden argument*/GameObject_GetComponent_TisMeshFilter_t3523625662_m3102725183_RuntimeMethod_var);
		__this->set_mf_8(L_1);
		List_1_t973540472 * L_2 = (List_1_t973540472 *)il2cpp_codegen_object_new(List_1_t973540472_il2cpp_TypeInfo_var);
		List_1__ctor_m3427140098(L_2, /*hidden argument*/List_1__ctor_m3427140098_RuntimeMethod_var);
		__this->set_lanes_6(L_2);
		List_1_t2123442855 * L_3 = (List_1_t2123442855 *)il2cpp_codegen_object_new(List_1_t2123442855_il2cpp_TypeInfo_var);
		List_1__ctor_m2010698488(L_3, /*hidden argument*/List_1__ctor_m2010698488_RuntimeMethod_var);
		__this->set_junctions_7(L_3);
		return;
	}
}
// System.Void MapXmlParser::parseMap(System.String)
extern "C"  void MapXmlParser_parseMap_m784539563 (MapXmlParser_t3144498968 * __this, String_t* ___path0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MapXmlParser_parseMap_m784539563_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	XmlDocument_t2837193595 * V_0 = NULL;
	{
		XmlDocument_t2837193595 * L_0 = (XmlDocument_t2837193595 *)il2cpp_codegen_object_new(XmlDocument_t2837193595_il2cpp_TypeInfo_var);
		XmlDocument__ctor_m1447119458(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		XmlDocument_t2837193595 * L_1 = V_0;
		String_t* L_2 = ___path0;
		VirtActionInvoker1< String_t* >::Invoke(57 /* System.Void System.Xml.XmlDocument::Load(System.String) */, L_1, L_2);
		XmlDocument_t2837193595 * L_3 = V_0;
		MapXmlParser_InitializeJunctionsAsMesh_m2696785309(__this, L_3, /*hidden argument*/NULL);
		XmlDocument_t2837193595 * L_4 = V_0;
		MapXmlParser_InitializeLanesAsLines_m3375149012(__this, L_4, /*hidden argument*/NULL);
		return;
	}
}
// System.Void MapXmlParser::InitializeLanesAsLines(System.Xml.XmlDocument)
extern "C"  void MapXmlParser_InitializeLanesAsLines_m3375149012 (MapXmlParser_t3144498968 * __this, XmlDocument_t2837193595 * ___doc0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MapXmlParser_InitializeLanesAsLines_m3375149012_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	XmlNode_t3767805227 * V_0 = NULL;
	Vector3_t3722313464  V_1;
	memset(&V_1, 0, sizeof(V_1));
	XmlNodeList_t2551693786 * V_2 = NULL;
	bool V_3 = false;
	XmlNode_t3767805227 * V_4 = NULL;
	RuntimeObject* V_5 = NULL;
	float V_6 = 0.0f;
	XmlNodeList_t2551693786 * V_7 = NULL;
	XmlNode_t3767805227 * V_8 = NULL;
	RuntimeObject* V_9 = NULL;
	List_1_t899420910 * V_10 = NULL;
	String_t* V_11 = NULL;
	StringU5BU5D_t1281789340* V_12 = NULL;
	String_t* V_13 = NULL;
	StringU5BU5D_t1281789340* V_14 = NULL;
	int32_t V_15 = 0;
	StringU5BU5D_t1281789340* V_16 = NULL;
	Lane_t3796433026 * V_17 = NULL;
	int32_t V_18 = 0;
	LineRenderer_t3154350270 * V_19 = NULL;
	Vector3_t3722313464  V_20;
	memset(&V_20, 0, sizeof(V_20));
	Vector3_t3722313464  V_21;
	memset(&V_21, 0, sizeof(V_21));
	RuntimeObject* V_22 = NULL;
	RuntimeObject* V_23 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		XmlDocument_t2837193595 * L_0 = ___doc0;
		XmlNodeList_t2551693786 * L_1 = VirtFuncInvoker1< XmlNodeList_t2551693786 *, String_t* >::Invoke(55 /* System.Xml.XmlNodeList System.Xml.XmlDocument::GetElementsByTagName(System.String) */, L_0, _stringLiteral803282398);
		XmlNode_t3767805227 * L_2 = VirtFuncInvoker1< XmlNode_t3767805227 *, int32_t >::Invoke(6 /* System.Xml.XmlNode System.Xml.XmlNodeList::get_ItemOf(System.Int32) */, L_1, 0);
		V_0 = L_2;
		XmlNode_t3767805227 * L_3 = V_0;
		XmlAttributeCollection_t2316283784 * L_4 = VirtFuncInvoker0< XmlAttributeCollection_t2316283784 * >::Invoke(6 /* System.Xml.XmlAttributeCollection System.Xml.XmlNode::get_Attributes() */, L_3);
		XmlAttribute_t1173852259 * L_5 = XmlAttributeCollection_get_ItemOf_m952828905(L_4, _stringLiteral2706142996, /*hidden argument*/NULL);
		String_t* L_6 = VirtFuncInvoker0< String_t* >::Invoke(25 /* System.String System.Xml.XmlNode::get_Value() */, L_5);
		CharU5BU5D_t3528271667* L_7 = ((CharU5BU5D_t3528271667*)SZArrayNew(CharU5BU5D_t3528271667_il2cpp_TypeInfo_var, (uint32_t)1));
		(L_7)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (Il2CppChar)((int32_t)44));
		StringU5BU5D_t1281789340* L_8 = String_Split_m3646115398(L_6, L_7, /*hidden argument*/NULL);
		int32_t L_9 = 0;
		String_t* L_10 = (L_8)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_9));
		float L_11 = Single_Parse_m364357836(NULL /*static, unused*/, L_10, /*hidden argument*/NULL);
		XmlNode_t3767805227 * L_12 = V_0;
		XmlAttributeCollection_t2316283784 * L_13 = VirtFuncInvoker0< XmlAttributeCollection_t2316283784 * >::Invoke(6 /* System.Xml.XmlAttributeCollection System.Xml.XmlNode::get_Attributes() */, L_12);
		XmlAttribute_t1173852259 * L_14 = XmlAttributeCollection_get_ItemOf_m952828905(L_13, _stringLiteral2706142996, /*hidden argument*/NULL);
		String_t* L_15 = VirtFuncInvoker0< String_t* >::Invoke(25 /* System.String System.Xml.XmlNode::get_Value() */, L_14);
		CharU5BU5D_t3528271667* L_16 = ((CharU5BU5D_t3528271667*)SZArrayNew(CharU5BU5D_t3528271667_il2cpp_TypeInfo_var, (uint32_t)1));
		(L_16)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (Il2CppChar)((int32_t)44));
		StringU5BU5D_t1281789340* L_17 = String_Split_m3646115398(L_15, L_16, /*hidden argument*/NULL);
		int32_t L_18 = 1;
		String_t* L_19 = (L_17)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_18));
		float L_20 = Single_Parse_m364357836(NULL /*static, unused*/, L_19, /*hidden argument*/NULL);
		Vector3__ctor_m3353183577((Vector3_t3722313464 *)(&V_1), L_11, (0.0f), L_20, /*hidden argument*/NULL);
		XmlDocument_t2837193595 * L_21 = ___doc0;
		XmlNodeList_t2551693786 * L_22 = VirtFuncInvoker1< XmlNodeList_t2551693786 *, String_t* >::Invoke(55 /* System.Xml.XmlNodeList System.Xml.XmlDocument::GetElementsByTagName(System.String) */, L_21, _stringLiteral1581558402);
		V_2 = L_22;
		V_3 = (bool)1;
		XmlNodeList_t2551693786 * L_23 = V_2;
		RuntimeObject* L_24 = VirtFuncInvoker0< RuntimeObject* >::Invoke(7 /* System.Collections.IEnumerator System.Xml.XmlNodeList::GetEnumerator() */, L_23);
		V_5 = L_24;
	}

IL_008c:
	try
	{ // begin try (depth: 1)
		{
			goto IL_02af;
		}

IL_0091:
		{
			RuntimeObject* L_25 = V_5;
			RuntimeObject * L_26 = InterfaceFuncInvoker0< RuntimeObject * >::Invoke(0 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t1853284238_il2cpp_TypeInfo_var, L_25);
			V_4 = ((XmlNode_t3767805227 *)CastclassClass((RuntimeObject*)L_26, XmlNode_t3767805227_il2cpp_TypeInfo_var));
			V_6 = (0.0f);
			XmlNode_t3767805227 * L_27 = V_4;
			XmlAttributeCollection_t2316283784 * L_28 = VirtFuncInvoker0< XmlAttributeCollection_t2316283784 * >::Invoke(6 /* System.Xml.XmlAttributeCollection System.Xml.XmlNode::get_Attributes() */, L_27);
			XmlAttribute_t1173852259 * L_29 = XmlAttributeCollection_get_ItemOf_m952828905(L_28, _stringLiteral3941509395, /*hidden argument*/NULL);
			if (!L_29)
			{
				goto IL_00c3;
			}
		}

IL_00bc:
		{
			V_6 = (1.0f);
		}

IL_00c3:
		{
			XmlNode_t3767805227 * L_30 = V_4;
			XmlNodeList_t2551693786 * L_31 = VirtFuncInvoker0< XmlNodeList_t2551693786 * >::Invoke(9 /* System.Xml.XmlNodeList System.Xml.XmlNode::get_ChildNodes() */, L_30);
			V_7 = L_31;
			XmlNodeList_t2551693786 * L_32 = V_7;
			RuntimeObject* L_33 = VirtFuncInvoker0< RuntimeObject* >::Invoke(7 /* System.Collections.IEnumerator System.Xml.XmlNodeList::GetEnumerator() */, L_32);
			V_9 = L_33;
		}

IL_00d5:
		try
		{ // begin try (depth: 2)
			{
				goto IL_0287;
			}

IL_00da:
			{
				RuntimeObject* L_34 = V_9;
				RuntimeObject * L_35 = InterfaceFuncInvoker0< RuntimeObject * >::Invoke(0 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t1853284238_il2cpp_TypeInfo_var, L_34);
				V_8 = ((XmlNode_t3767805227 *)CastclassClass((RuntimeObject*)L_35, XmlNode_t3767805227_il2cpp_TypeInfo_var));
				List_1_t899420910 * L_36 = (List_1_t899420910 *)il2cpp_codegen_object_new(List_1_t899420910_il2cpp_TypeInfo_var);
				List_1__ctor_m1536473967(L_36, /*hidden argument*/List_1__ctor_m1536473967_RuntimeMethod_var);
				V_10 = L_36;
				XmlNode_t3767805227 * L_37 = V_8;
				XmlAttributeCollection_t2316283784 * L_38 = VirtFuncInvoker0< XmlAttributeCollection_t2316283784 * >::Invoke(6 /* System.Xml.XmlAttributeCollection System.Xml.XmlNode::get_Attributes() */, L_37);
				XmlAttribute_t1173852259 * L_39 = XmlAttributeCollection_get_ItemOf_m952828905(L_38, _stringLiteral3080956237, /*hidden argument*/NULL);
				String_t* L_40 = VirtFuncInvoker0< String_t* >::Invoke(25 /* System.String System.Xml.XmlNode::get_Value() */, L_39);
				V_11 = L_40;
				String_t* L_41 = V_11;
				CharU5BU5D_t3528271667* L_42 = ((CharU5BU5D_t3528271667*)SZArrayNew(CharU5BU5D_t3528271667_il2cpp_TypeInfo_var, (uint32_t)1));
				(L_42)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (Il2CppChar)((int32_t)32));
				StringU5BU5D_t1281789340* L_43 = String_Split_m3646115398(L_41, L_42, /*hidden argument*/NULL);
				V_12 = L_43;
				StringU5BU5D_t1281789340* L_44 = V_12;
				V_14 = L_44;
				V_15 = 0;
				goto IL_016e;
			}

IL_0127:
			{
				StringU5BU5D_t1281789340* L_45 = V_14;
				int32_t L_46 = V_15;
				int32_t L_47 = L_46;
				String_t* L_48 = (L_45)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_47));
				V_13 = L_48;
				String_t* L_49 = V_13;
				CharU5BU5D_t3528271667* L_50 = ((CharU5BU5D_t3528271667*)SZArrayNew(CharU5BU5D_t3528271667_il2cpp_TypeInfo_var, (uint32_t)1));
				(L_50)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (Il2CppChar)((int32_t)44));
				StringU5BU5D_t1281789340* L_51 = String_Split_m3646115398(L_49, L_50, /*hidden argument*/NULL);
				V_16 = L_51;
				List_1_t899420910 * L_52 = V_10;
				StringU5BU5D_t1281789340* L_53 = V_16;
				int32_t L_54 = 0;
				String_t* L_55 = (L_53)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_54));
				float L_56 = Single_Parse_m364357836(NULL /*static, unused*/, L_55, /*hidden argument*/NULL);
				float L_57 = V_6;
				StringU5BU5D_t1281789340* L_58 = V_16;
				int32_t L_59 = 1;
				String_t* L_60 = (L_58)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_59));
				float L_61 = Single_Parse_m364357836(NULL /*static, unused*/, L_60, /*hidden argument*/NULL);
				Vector3_t3722313464  L_62;
				memset(&L_62, 0, sizeof(L_62));
				Vector3__ctor_m3353183577((&L_62), L_56, L_57, L_61, /*hidden argument*/NULL);
				Vector3_t3722313464  L_63 = V_1;
				IL2CPP_RUNTIME_CLASS_INIT(Vector3_t3722313464_il2cpp_TypeInfo_var);
				Vector3_t3722313464  L_64 = Vector3_op_Subtraction_m3073674971(NULL /*static, unused*/, L_62, L_63, /*hidden argument*/NULL);
				List_1_Add_m1524640104(L_52, L_64, /*hidden argument*/List_1_Add_m1524640104_RuntimeMethod_var);
				int32_t L_65 = V_15;
				V_15 = ((int32_t)il2cpp_codegen_add((int32_t)L_65, (int32_t)1));
			}

IL_016e:
			{
				int32_t L_66 = V_15;
				StringU5BU5D_t1281789340* L_67 = V_14;
				if ((((int32_t)L_66) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_67)->max_length)))))))
				{
					goto IL_0127;
				}
			}

IL_0179:
			{
				XmlNode_t3767805227 * L_68 = V_8;
				XmlAttributeCollection_t2316283784 * L_69 = VirtFuncInvoker0< XmlAttributeCollection_t2316283784 * >::Invoke(6 /* System.Xml.XmlAttributeCollection System.Xml.XmlNode::get_Attributes() */, L_68);
				XmlAttribute_t1173852259 * L_70 = XmlAttributeCollection_get_ItemOf_m952828905(L_69, _stringLiteral3454449607, /*hidden argument*/NULL);
				String_t* L_71 = VirtFuncInvoker0< String_t* >::Invoke(25 /* System.String System.Xml.XmlNode::get_Value() */, L_70);
				Lane_t3796433026 * L_72 = (Lane_t3796433026 *)il2cpp_codegen_object_new(Lane_t3796433026_il2cpp_TypeInfo_var);
				Lane__ctor_m715788684(L_72, L_71, /*hidden argument*/NULL);
				V_17 = L_72;
				V_18 = 0;
				goto IL_026a;
			}

IL_019e:
			{
				LineRenderer_t3154350270 * L_73 = __this->get_roadLines_4();
				Vector3U5BU5D_t1718750761* L_74 = ((Vector3U5BU5D_t1718750761*)SZArrayNew(Vector3U5BU5D_t1718750761_il2cpp_TypeInfo_var, (uint32_t)2));
				List_1_t899420910 * L_75 = V_10;
				int32_t L_76 = V_18;
				Vector3_t3722313464  L_77 = List_1_get_Item_m200663048(L_75, L_76, /*hidden argument*/List_1_get_Item_m200663048_RuntimeMethod_var);
				*(Vector3_t3722313464 *)((L_74)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(0))) = L_77;
				Vector3U5BU5D_t1718750761* L_78 = L_74;
				List_1_t899420910 * L_79 = V_10;
				int32_t L_80 = V_18;
				Vector3_t3722313464  L_81 = List_1_get_Item_m200663048(L_79, ((int32_t)il2cpp_codegen_add((int32_t)L_80, (int32_t)1)), /*hidden argument*/List_1_get_Item_m200663048_RuntimeMethod_var);
				*(Vector3_t3722313464 *)((L_78)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(1))) = L_81;
				LineRenderer_SetPositions_m1969530996(L_73, L_78, /*hidden argument*/NULL);
				LineRenderer_t3154350270 * L_82 = __this->get_roadLines_4();
				IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
				LineRenderer_t3154350270 * L_83 = Object_Instantiate_TisLineRenderer_t3154350270_m542278554(NULL /*static, unused*/, L_82, /*hidden argument*/Object_Instantiate_TisLineRenderer_t3154350270_m542278554_RuntimeMethod_var);
				V_19 = L_83;
				bool L_84 = V_3;
				if (!L_84)
				{
					goto IL_022d;
				}
			}

IL_01ee:
			{
				Camera_t4157153871 * L_85 = Camera_get_main_m3643453163(NULL /*static, unused*/, /*hidden argument*/NULL);
				Transform_t3600365921 * L_86 = Component_get_transform_m3162698980(L_85, /*hidden argument*/NULL);
				List_1_t899420910 * L_87 = V_10;
				int32_t L_88 = V_18;
				Vector3_t3722313464  L_89 = List_1_get_Item_m200663048(L_87, L_88, /*hidden argument*/List_1_get_Item_m200663048_RuntimeMethod_var);
				V_20 = L_89;
				float L_90 = (&V_20)->get_x_1();
				List_1_t899420910 * L_91 = V_10;
				int32_t L_92 = V_18;
				Vector3_t3722313464  L_93 = List_1_get_Item_m200663048(L_91, L_92, /*hidden argument*/List_1_get_Item_m200663048_RuntimeMethod_var);
				V_21 = L_93;
				float L_94 = (&V_21)->get_z_3();
				Vector3_t3722313464  L_95;
				memset(&L_95, 0, sizeof(L_95));
				Vector3__ctor_m3353183577((&L_95), L_90, (10.0f), L_94, /*hidden argument*/NULL);
				Transform_set_position_m3387557959(L_86, L_95, /*hidden argument*/NULL);
				V_3 = (bool)0;
			}

IL_022d:
			{
				XmlNode_t3767805227 * L_96 = V_4;
				XmlAttributeCollection_t2316283784 * L_97 = VirtFuncInvoker0< XmlAttributeCollection_t2316283784 * >::Invoke(6 /* System.Xml.XmlAttributeCollection System.Xml.XmlNode::get_Attributes() */, L_96);
				XmlAttribute_t1173852259 * L_98 = XmlAttributeCollection_get_ItemOf_m952828905(L_97, _stringLiteral3941509395, /*hidden argument*/NULL);
				if (!L_98)
				{
					goto IL_025b;
				}
			}

IL_0243:
			{
				LineRenderer_t3154350270 * L_99 = V_19;
				LineRenderer_set_startWidth_m1093267133(L_99, (0.5f), /*hidden argument*/NULL);
				LineRenderer_t3154350270 * L_100 = V_19;
				LineRenderer_set_endWidth_m4252049505(L_100, (0.5f), /*hidden argument*/NULL);
			}

IL_025b:
			{
				Lane_t3796433026 * L_101 = V_17;
				LineRenderer_t3154350270 * L_102 = V_19;
				Lane_addLine_m2539890349(L_101, L_102, /*hidden argument*/NULL);
				int32_t L_103 = V_18;
				V_18 = ((int32_t)il2cpp_codegen_add((int32_t)L_103, (int32_t)1));
			}

IL_026a:
			{
				int32_t L_104 = V_18;
				List_1_t899420910 * L_105 = V_10;
				int32_t L_106 = List_1_get_Count_m576380744(L_105, /*hidden argument*/List_1_get_Count_m576380744_RuntimeMethod_var);
				if ((((int32_t)L_104) < ((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_106, (int32_t)1)))))
				{
					goto IL_019e;
				}
			}

IL_027a:
			{
				List_1_t973540472 * L_107 = __this->get_lanes_6();
				Lane_t3796433026 * L_108 = V_17;
				List_1_Add_m691185006(L_107, L_108, /*hidden argument*/List_1_Add_m691185006_RuntimeMethod_var);
			}

IL_0287:
			{
				RuntimeObject* L_109 = V_9;
				bool L_110 = InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t1853284238_il2cpp_TypeInfo_var, L_109);
				if (L_110)
				{
					goto IL_00da;
				}
			}

IL_0293:
			{
				IL2CPP_LEAVE(0x2AF, FINALLY_0298);
			}
		} // end try (depth: 2)
		catch(Il2CppExceptionWrapper& e)
		{
			__last_unhandled_exception = (Exception_t *)e.ex;
			goto FINALLY_0298;
		}

FINALLY_0298:
		{ // begin finally (depth: 2)
			{
				RuntimeObject* L_111 = V_9;
				RuntimeObject* L_112 = ((RuntimeObject*)IsInst((RuntimeObject*)L_111, IDisposable_t3640265483_il2cpp_TypeInfo_var));
				V_22 = L_112;
				if (!L_112)
				{
					goto IL_02ae;
				}
			}

IL_02a7:
			{
				RuntimeObject* L_113 = V_22;
				InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t3640265483_il2cpp_TypeInfo_var, L_113);
			}

IL_02ae:
			{
				IL2CPP_END_FINALLY(664)
			}
		} // end finally (depth: 2)
		IL2CPP_CLEANUP(664)
		{
			IL2CPP_JUMP_TBL(0x2AF, IL_02af)
			IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		}

IL_02af:
		{
			RuntimeObject* L_114 = V_5;
			bool L_115 = InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t1853284238_il2cpp_TypeInfo_var, L_114);
			if (L_115)
			{
				goto IL_0091;
			}
		}

IL_02bb:
		{
			IL2CPP_LEAVE(0x2D7, FINALLY_02c0);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_02c0;
	}

FINALLY_02c0:
	{ // begin finally (depth: 1)
		{
			RuntimeObject* L_116 = V_5;
			RuntimeObject* L_117 = ((RuntimeObject*)IsInst((RuntimeObject*)L_116, IDisposable_t3640265483_il2cpp_TypeInfo_var));
			V_23 = L_117;
			if (!L_117)
			{
				goto IL_02d6;
			}
		}

IL_02cf:
		{
			RuntimeObject* L_118 = V_23;
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t3640265483_il2cpp_TypeInfo_var, L_118);
		}

IL_02d6:
		{
			IL2CPP_END_FINALLY(704)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(704)
	{
		IL2CPP_JUMP_TBL(0x2D7, IL_02d7)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_02d7:
	{
		return;
	}
}
// System.Void MapXmlParser::InitializeJunctionsAsMesh(System.Xml.XmlDocument)
extern "C"  void MapXmlParser_InitializeJunctionsAsMesh_m2696785309 (MapXmlParser_t3144498968 * __this, XmlDocument_t2837193595 * ___doc0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MapXmlParser_InitializeJunctionsAsMesh_m2696785309_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	XmlNode_t3767805227 * V_0 = NULL;
	Vector3_t3722313464  V_1;
	memset(&V_1, 0, sizeof(V_1));
	XmlNodeList_t2551693786 * V_2 = NULL;
	XmlNode_t3767805227 * V_3 = NULL;
	RuntimeObject* V_4 = NULL;
	List_1_t899420910 * V_5 = NULL;
	XmlAttribute_t1173852259 * V_6 = NULL;
	String_t* V_7 = NULL;
	StringU5BU5D_t1281789340* V_8 = NULL;
	String_t* V_9 = NULL;
	StringU5BU5D_t1281789340* V_10 = NULL;
	int32_t V_11 = 0;
	StringU5BU5D_t1281789340* V_12 = NULL;
	Vector3_t3722313464  V_13;
	memset(&V_13, 0, sizeof(V_13));
	Mesh_t3648964284 * V_14 = NULL;
	List_1_t128053199 * V_15 = NULL;
	int32_t V_16 = 0;
	RuntimeObject* V_17 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		XmlDocument_t2837193595 * L_0 = ___doc0;
		XmlNodeList_t2551693786 * L_1 = VirtFuncInvoker1< XmlNodeList_t2551693786 *, String_t* >::Invoke(55 /* System.Xml.XmlNodeList System.Xml.XmlDocument::GetElementsByTagName(System.String) */, L_0, _stringLiteral803282398);
		XmlNode_t3767805227 * L_2 = VirtFuncInvoker1< XmlNode_t3767805227 *, int32_t >::Invoke(6 /* System.Xml.XmlNode System.Xml.XmlNodeList::get_ItemOf(System.Int32) */, L_1, 0);
		V_0 = L_2;
		XmlNode_t3767805227 * L_3 = V_0;
		XmlAttributeCollection_t2316283784 * L_4 = VirtFuncInvoker0< XmlAttributeCollection_t2316283784 * >::Invoke(6 /* System.Xml.XmlAttributeCollection System.Xml.XmlNode::get_Attributes() */, L_3);
		XmlAttribute_t1173852259 * L_5 = XmlAttributeCollection_get_ItemOf_m952828905(L_4, _stringLiteral2706142996, /*hidden argument*/NULL);
		String_t* L_6 = VirtFuncInvoker0< String_t* >::Invoke(25 /* System.String System.Xml.XmlNode::get_Value() */, L_5);
		CharU5BU5D_t3528271667* L_7 = ((CharU5BU5D_t3528271667*)SZArrayNew(CharU5BU5D_t3528271667_il2cpp_TypeInfo_var, (uint32_t)1));
		(L_7)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (Il2CppChar)((int32_t)44));
		StringU5BU5D_t1281789340* L_8 = String_Split_m3646115398(L_6, L_7, /*hidden argument*/NULL);
		int32_t L_9 = 0;
		String_t* L_10 = (L_8)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_9));
		float L_11 = Single_Parse_m364357836(NULL /*static, unused*/, L_10, /*hidden argument*/NULL);
		XmlNode_t3767805227 * L_12 = V_0;
		XmlAttributeCollection_t2316283784 * L_13 = VirtFuncInvoker0< XmlAttributeCollection_t2316283784 * >::Invoke(6 /* System.Xml.XmlAttributeCollection System.Xml.XmlNode::get_Attributes() */, L_12);
		XmlAttribute_t1173852259 * L_14 = XmlAttributeCollection_get_ItemOf_m952828905(L_13, _stringLiteral2706142996, /*hidden argument*/NULL);
		String_t* L_15 = VirtFuncInvoker0< String_t* >::Invoke(25 /* System.String System.Xml.XmlNode::get_Value() */, L_14);
		CharU5BU5D_t3528271667* L_16 = ((CharU5BU5D_t3528271667*)SZArrayNew(CharU5BU5D_t3528271667_il2cpp_TypeInfo_var, (uint32_t)1));
		(L_16)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (Il2CppChar)((int32_t)44));
		StringU5BU5D_t1281789340* L_17 = String_Split_m3646115398(L_15, L_16, /*hidden argument*/NULL);
		int32_t L_18 = 1;
		String_t* L_19 = (L_17)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_18));
		float L_20 = Single_Parse_m364357836(NULL /*static, unused*/, L_19, /*hidden argument*/NULL);
		Vector3__ctor_m3353183577((Vector3_t3722313464 *)(&V_1), L_11, (0.0f), L_20, /*hidden argument*/NULL);
		XmlDocument_t2837193595 * L_21 = ___doc0;
		XmlNodeList_t2551693786 * L_22 = VirtFuncInvoker1< XmlNodeList_t2551693786 *, String_t* >::Invoke(55 /* System.Xml.XmlNodeList System.Xml.XmlDocument::GetElementsByTagName(System.String) */, L_21, _stringLiteral3941509767);
		V_2 = L_22;
		XmlNodeList_t2551693786 * L_23 = V_2;
		RuntimeObject* L_24 = VirtFuncInvoker0< RuntimeObject* >::Invoke(7 /* System.Collections.IEnumerator System.Xml.XmlNodeList::GetEnumerator() */, L_23);
		V_4 = L_24;
	}

IL_008a:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0246;
		}

IL_008f:
		{
			RuntimeObject* L_25 = V_4;
			RuntimeObject * L_26 = InterfaceFuncInvoker0< RuntimeObject * >::Invoke(0 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t1853284238_il2cpp_TypeInfo_var, L_25);
			V_3 = ((XmlNode_t3767805227 *)CastclassClass((RuntimeObject*)L_26, XmlNode_t3767805227_il2cpp_TypeInfo_var));
			List_1_t899420910 * L_27 = (List_1_t899420910 *)il2cpp_codegen_object_new(List_1_t899420910_il2cpp_TypeInfo_var);
			List_1__ctor_m1536473967(L_27, /*hidden argument*/List_1__ctor_m1536473967_RuntimeMethod_var);
			V_5 = L_27;
			XmlNode_t3767805227 * L_28 = V_3;
			XmlAttributeCollection_t2316283784 * L_29 = VirtFuncInvoker0< XmlAttributeCollection_t2316283784 * >::Invoke(6 /* System.Xml.XmlAttributeCollection System.Xml.XmlNode::get_Attributes() */, L_28);
			XmlAttribute_t1173852259 * L_30 = XmlAttributeCollection_get_ItemOf_m952828905(L_29, _stringLiteral3080956237, /*hidden argument*/NULL);
			V_6 = L_30;
			XmlAttribute_t1173852259 * L_31 = V_6;
			if (L_31)
			{
				goto IL_00c1;
			}
		}

IL_00bc:
		{
			goto IL_0246;
		}

IL_00c1:
		{
			XmlAttribute_t1173852259 * L_32 = V_6;
			String_t* L_33 = VirtFuncInvoker0< String_t* >::Invoke(25 /* System.String System.Xml.XmlNode::get_Value() */, L_32);
			V_7 = L_33;
			String_t* L_34 = V_7;
			CharU5BU5D_t3528271667* L_35 = ((CharU5BU5D_t3528271667*)SZArrayNew(CharU5BU5D_t3528271667_il2cpp_TypeInfo_var, (uint32_t)1));
			(L_35)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (Il2CppChar)((int32_t)32));
			StringU5BU5D_t1281789340* L_36 = String_Split_m3646115398(L_34, L_35, /*hidden argument*/NULL);
			V_8 = L_36;
			StringU5BU5D_t1281789340* L_37 = V_8;
			V_10 = L_37;
			V_11 = 0;
			goto IL_0134;
		}

IL_00ea:
		{
			StringU5BU5D_t1281789340* L_38 = V_10;
			int32_t L_39 = V_11;
			int32_t L_40 = L_39;
			String_t* L_41 = (L_38)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_40));
			V_9 = L_41;
			String_t* L_42 = V_9;
			CharU5BU5D_t3528271667* L_43 = ((CharU5BU5D_t3528271667*)SZArrayNew(CharU5BU5D_t3528271667_il2cpp_TypeInfo_var, (uint32_t)1));
			(L_43)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (Il2CppChar)((int32_t)44));
			StringU5BU5D_t1281789340* L_44 = String_Split_m3646115398(L_42, L_43, /*hidden argument*/NULL);
			V_12 = L_44;
			List_1_t899420910 * L_45 = V_5;
			StringU5BU5D_t1281789340* L_46 = V_12;
			int32_t L_47 = 0;
			String_t* L_48 = (L_46)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_47));
			float L_49 = Single_Parse_m364357836(NULL /*static, unused*/, L_48, /*hidden argument*/NULL);
			StringU5BU5D_t1281789340* L_50 = V_12;
			int32_t L_51 = 1;
			String_t* L_52 = (L_50)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_51));
			float L_53 = Single_Parse_m364357836(NULL /*static, unused*/, L_52, /*hidden argument*/NULL);
			Vector3_t3722313464  L_54;
			memset(&L_54, 0, sizeof(L_54));
			Vector3__ctor_m3353183577((&L_54), L_49, (0.0f), L_53, /*hidden argument*/NULL);
			Vector3_t3722313464  L_55 = V_1;
			IL2CPP_RUNTIME_CLASS_INIT(Vector3_t3722313464_il2cpp_TypeInfo_var);
			Vector3_t3722313464  L_56 = Vector3_op_Subtraction_m3073674971(NULL /*static, unused*/, L_54, L_55, /*hidden argument*/NULL);
			List_1_Add_m1524640104(L_45, L_56, /*hidden argument*/List_1_Add_m1524640104_RuntimeMethod_var);
			int32_t L_57 = V_11;
			V_11 = ((int32_t)il2cpp_codegen_add((int32_t)L_57, (int32_t)1));
		}

IL_0134:
		{
			int32_t L_58 = V_11;
			StringU5BU5D_t1281789340* L_59 = V_10;
			if ((((int32_t)L_58) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_59)->max_length)))))))
			{
				goto IL_00ea;
			}
		}

IL_013f:
		{
			List_1_t899420910 * L_60 = V_5;
			Vector3_t3722313464  L_61 = List_1_get_Item_m200663048(L_60, 0, /*hidden argument*/List_1_get_Item_m200663048_RuntimeMethod_var);
			V_13 = L_61;
			Mesh_t3648964284 * L_62 = (Mesh_t3648964284 *)il2cpp_codegen_object_new(Mesh_t3648964284_il2cpp_TypeInfo_var);
			Mesh__ctor_m2533762929(L_62, /*hidden argument*/NULL);
			V_14 = L_62;
			MeshFilter_t3523625662 * L_63 = __this->get_mf_8();
			Mesh_t3648964284 * L_64 = V_14;
			MeshFilter_set_mesh_m1415871686(L_63, L_64, /*hidden argument*/NULL);
			Mesh_t3648964284 * L_65 = V_14;
			List_1_t899420910 * L_66 = V_5;
			Vector3U5BU5D_t1718750761* L_67 = List_1_ToArray_m1691996104(L_66, /*hidden argument*/List_1_ToArray_m1691996104_RuntimeMethod_var);
			Mesh_set_vertices_m2084450642(L_65, L_67, /*hidden argument*/NULL);
			List_1_t128053199 * L_68 = (List_1_t128053199 *)il2cpp_codegen_object_new(List_1_t128053199_il2cpp_TypeInfo_var);
			List_1__ctor_m1628857705(L_68, /*hidden argument*/List_1__ctor_m1628857705_RuntimeMethod_var);
			V_15 = L_68;
			V_16 = 1;
			goto IL_019c;
		}

IL_017a:
		{
			List_1_t128053199 * L_69 = V_15;
			List_1_Add_m697420525(L_69, 0, /*hidden argument*/List_1_Add_m697420525_RuntimeMethod_var);
			List_1_t128053199 * L_70 = V_15;
			int32_t L_71 = V_16;
			List_1_Add_m697420525(L_70, L_71, /*hidden argument*/List_1_Add_m697420525_RuntimeMethod_var);
			List_1_t128053199 * L_72 = V_15;
			int32_t L_73 = V_16;
			List_1_Add_m697420525(L_72, ((int32_t)il2cpp_codegen_add((int32_t)L_73, (int32_t)1)), /*hidden argument*/List_1_Add_m697420525_RuntimeMethod_var);
			int32_t L_74 = V_16;
			V_16 = ((int32_t)il2cpp_codegen_add((int32_t)L_74, (int32_t)1));
		}

IL_019c:
		{
			int32_t L_75 = V_16;
			List_1_t899420910 * L_76 = V_5;
			int32_t L_77 = List_1_get_Count_m576380744(L_76, /*hidden argument*/List_1_get_Count_m576380744_RuntimeMethod_var);
			if ((((int32_t)L_75) < ((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_77, (int32_t)1)))))
			{
				goto IL_017a;
			}
		}

IL_01ac:
		{
			Mesh_t3648964284 * L_78 = V_14;
			List_1_t128053199 * L_79 = V_15;
			Int32U5BU5D_t385246372* L_80 = List_1_ToArray_m3295195900(L_79, /*hidden argument*/List_1_ToArray_m3295195900_RuntimeMethod_var);
			Mesh_set_triangles_m255556250(L_78, L_80, /*hidden argument*/NULL);
			Mesh_t3648964284 * L_81 = V_14;
			IL2CPP_RUNTIME_CLASS_INIT(Vector3_t3722313464_il2cpp_TypeInfo_var);
			Vector3_t3722313464  L_82 = Vector3_get_up_m3584168373(NULL /*static, unused*/, /*hidden argument*/NULL);
			Vector3_t3722313464  L_83 = Vector3_op_UnaryNegation_m1951478815(NULL /*static, unused*/, L_82, /*hidden argument*/NULL);
			List_1_t899420910 * L_84 = V_5;
			int32_t L_85 = List_1_get_Count_m576380744(L_84, /*hidden argument*/List_1_get_Count_m576380744_RuntimeMethod_var);
			RuntimeObject* L_86 = Enumerable_Repeat_TisVector3_t3722313464_m724486136(NULL /*static, unused*/, L_83, L_85, /*hidden argument*/Enumerable_Repeat_TisVector3_t3722313464_m724486136_RuntimeMethod_var);
			Vector3U5BU5D_t1718750761* L_87 = Enumerable_ToArray_TisVector3_t3722313464_m1824456213(NULL /*static, unused*/, L_86, /*hidden argument*/Enumerable_ToArray_TisVector3_t3722313464_m1824456213_RuntimeMethod_var);
			Mesh_set_normals_m332514528(L_81, L_87, /*hidden argument*/NULL);
			GameObject_t1113636619 * L_88 = __this->get_quad_5();
			IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
			Object_Instantiate_TisGameObject_t1113636619_m4070250708(NULL /*static, unused*/, L_88, /*hidden argument*/Object_Instantiate_TisGameObject_t1113636619_m4070250708_RuntimeMethod_var);
			XmlNode_t3767805227 * L_89 = V_3;
			XmlAttributeCollection_t2316283784 * L_90 = VirtFuncInvoker0< XmlAttributeCollection_t2316283784 * >::Invoke(6 /* System.Xml.XmlAttributeCollection System.Xml.XmlNode::get_Attributes() */, L_89);
			XmlAttribute_t1173852259 * L_91 = XmlAttributeCollection_get_ItemOf_m952828905(L_90, _stringLiteral2204697057, /*hidden argument*/NULL);
			String_t* L_92 = VirtFuncInvoker0< String_t* >::Invoke(25 /* System.String System.Xml.XmlNode::get_Value() */, L_91);
			IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
			String_t* L_93 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_2();
			bool L_94 = String_op_Inequality_m215368492(NULL /*static, unused*/, L_92, L_93, /*hidden argument*/NULL);
			if (!L_94)
			{
				goto IL_0246;
			}
		}

IL_020c:
		{
			List_1_t2123442855 * L_95 = __this->get_junctions_7();
			XmlNode_t3767805227 * L_96 = V_3;
			XmlAttributeCollection_t2316283784 * L_97 = VirtFuncInvoker0< XmlAttributeCollection_t2316283784 * >::Invoke(6 /* System.Xml.XmlAttributeCollection System.Xml.XmlNode::get_Attributes() */, L_96);
			XmlAttribute_t1173852259 * L_98 = XmlAttributeCollection_get_ItemOf_m952828905(L_97, _stringLiteral3454449607, /*hidden argument*/NULL);
			String_t* L_99 = VirtFuncInvoker0< String_t* >::Invoke(25 /* System.String System.Xml.XmlNode::get_Value() */, L_98);
			XmlNode_t3767805227 * L_100 = V_3;
			XmlAttributeCollection_t2316283784 * L_101 = VirtFuncInvoker0< XmlAttributeCollection_t2316283784 * >::Invoke(6 /* System.Xml.XmlAttributeCollection System.Xml.XmlNode::get_Attributes() */, L_100);
			XmlAttribute_t1173852259 * L_102 = XmlAttributeCollection_get_ItemOf_m952828905(L_101, _stringLiteral2204697057, /*hidden argument*/NULL);
			String_t* L_103 = VirtFuncInvoker0< String_t* >::Invoke(25 /* System.String System.Xml.XmlNode::get_Value() */, L_102);
			Junction_t651368113 * L_104 = (Junction_t651368113 *)il2cpp_codegen_object_new(Junction_t651368113_il2cpp_TypeInfo_var);
			Junction__ctor_m2256413868(L_104, L_99, L_103, /*hidden argument*/NULL);
			List_1_Add_m253759266(L_95, L_104, /*hidden argument*/List_1_Add_m253759266_RuntimeMethod_var);
		}

IL_0246:
		{
			RuntimeObject* L_105 = V_4;
			bool L_106 = InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t1853284238_il2cpp_TypeInfo_var, L_105);
			if (L_106)
			{
				goto IL_008f;
			}
		}

IL_0252:
		{
			IL2CPP_LEAVE(0x26E, FINALLY_0257);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0257;
	}

FINALLY_0257:
	{ // begin finally (depth: 1)
		{
			RuntimeObject* L_107 = V_4;
			RuntimeObject* L_108 = ((RuntimeObject*)IsInst((RuntimeObject*)L_107, IDisposable_t3640265483_il2cpp_TypeInfo_var));
			V_17 = L_108;
			if (!L_108)
			{
				goto IL_026d;
			}
		}

IL_0266:
		{
			RuntimeObject* L_109 = V_17;
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t3640265483_il2cpp_TypeInfo_var, L_109);
		}

IL_026d:
		{
			IL2CPP_END_FINALLY(599)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(599)
	{
		IL2CPP_JUMP_TBL(0x26E, IL_026e)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_026e:
	{
		return;
	}
}
// System.Void MapXmlParser::InitializeJunctionsAsLines(System.Xml.XmlDocument)
extern "C"  void MapXmlParser_InitializeJunctionsAsLines_m4063586724 (MapXmlParser_t3144498968 * __this, XmlDocument_t2837193595 * ___doc0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MapXmlParser_InitializeJunctionsAsLines_m4063586724_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	XmlNode_t3767805227 * V_0 = NULL;
	Vector3_t3722313464  V_1;
	memset(&V_1, 0, sizeof(V_1));
	XmlNodeList_t2551693786 * V_2 = NULL;
	XmlNode_t3767805227 * V_3 = NULL;
	RuntimeObject* V_4 = NULL;
	List_1_t899420910 * V_5 = NULL;
	XmlAttribute_t1173852259 * V_6 = NULL;
	String_t* V_7 = NULL;
	StringU5BU5D_t1281789340* V_8 = NULL;
	String_t* V_9 = NULL;
	StringU5BU5D_t1281789340* V_10 = NULL;
	int32_t V_11 = 0;
	StringU5BU5D_t1281789340* V_12 = NULL;
	int32_t V_13 = 0;
	int32_t V_14 = 0;
	RuntimeObject* V_15 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		XmlDocument_t2837193595 * L_0 = ___doc0;
		XmlNodeList_t2551693786 * L_1 = VirtFuncInvoker1< XmlNodeList_t2551693786 *, String_t* >::Invoke(55 /* System.Xml.XmlNodeList System.Xml.XmlDocument::GetElementsByTagName(System.String) */, L_0, _stringLiteral803282398);
		XmlNode_t3767805227 * L_2 = VirtFuncInvoker1< XmlNode_t3767805227 *, int32_t >::Invoke(6 /* System.Xml.XmlNode System.Xml.XmlNodeList::get_ItemOf(System.Int32) */, L_1, 0);
		V_0 = L_2;
		XmlNode_t3767805227 * L_3 = V_0;
		XmlAttributeCollection_t2316283784 * L_4 = VirtFuncInvoker0< XmlAttributeCollection_t2316283784 * >::Invoke(6 /* System.Xml.XmlAttributeCollection System.Xml.XmlNode::get_Attributes() */, L_3);
		XmlAttribute_t1173852259 * L_5 = XmlAttributeCollection_get_ItemOf_m952828905(L_4, _stringLiteral2706142996, /*hidden argument*/NULL);
		String_t* L_6 = VirtFuncInvoker0< String_t* >::Invoke(25 /* System.String System.Xml.XmlNode::get_Value() */, L_5);
		CharU5BU5D_t3528271667* L_7 = ((CharU5BU5D_t3528271667*)SZArrayNew(CharU5BU5D_t3528271667_il2cpp_TypeInfo_var, (uint32_t)1));
		(L_7)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (Il2CppChar)((int32_t)44));
		StringU5BU5D_t1281789340* L_8 = String_Split_m3646115398(L_6, L_7, /*hidden argument*/NULL);
		int32_t L_9 = 0;
		String_t* L_10 = (L_8)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_9));
		float L_11 = Single_Parse_m364357836(NULL /*static, unused*/, L_10, /*hidden argument*/NULL);
		XmlNode_t3767805227 * L_12 = V_0;
		XmlAttributeCollection_t2316283784 * L_13 = VirtFuncInvoker0< XmlAttributeCollection_t2316283784 * >::Invoke(6 /* System.Xml.XmlAttributeCollection System.Xml.XmlNode::get_Attributes() */, L_12);
		XmlAttribute_t1173852259 * L_14 = XmlAttributeCollection_get_ItemOf_m952828905(L_13, _stringLiteral2706142996, /*hidden argument*/NULL);
		String_t* L_15 = VirtFuncInvoker0< String_t* >::Invoke(25 /* System.String System.Xml.XmlNode::get_Value() */, L_14);
		CharU5BU5D_t3528271667* L_16 = ((CharU5BU5D_t3528271667*)SZArrayNew(CharU5BU5D_t3528271667_il2cpp_TypeInfo_var, (uint32_t)1));
		(L_16)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (Il2CppChar)((int32_t)44));
		StringU5BU5D_t1281789340* L_17 = String_Split_m3646115398(L_15, L_16, /*hidden argument*/NULL);
		int32_t L_18 = 1;
		String_t* L_19 = (L_17)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_18));
		float L_20 = Single_Parse_m364357836(NULL /*static, unused*/, L_19, /*hidden argument*/NULL);
		Vector3__ctor_m3353183577((Vector3_t3722313464 *)(&V_1), L_11, (0.0f), L_20, /*hidden argument*/NULL);
		XmlDocument_t2837193595 * L_21 = ___doc0;
		XmlNodeList_t2551693786 * L_22 = VirtFuncInvoker1< XmlNodeList_t2551693786 *, String_t* >::Invoke(55 /* System.Xml.XmlNodeList System.Xml.XmlDocument::GetElementsByTagName(System.String) */, L_21, _stringLiteral3941509767);
		V_2 = L_22;
		XmlNodeList_t2551693786 * L_23 = V_2;
		RuntimeObject* L_24 = VirtFuncInvoker0< RuntimeObject* >::Invoke(7 /* System.Collections.IEnumerator System.Xml.XmlNodeList::GetEnumerator() */, L_23);
		V_4 = L_24;
	}

IL_008a:
	try
	{ // begin try (depth: 1)
		{
			goto IL_01ef;
		}

IL_008f:
		{
			RuntimeObject* L_25 = V_4;
			RuntimeObject * L_26 = InterfaceFuncInvoker0< RuntimeObject * >::Invoke(0 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t1853284238_il2cpp_TypeInfo_var, L_25);
			V_3 = ((XmlNode_t3767805227 *)CastclassClass((RuntimeObject*)L_26, XmlNode_t3767805227_il2cpp_TypeInfo_var));
			XmlNode_t3767805227 * L_27 = V_3;
			XmlAttributeCollection_t2316283784 * L_28 = VirtFuncInvoker0< XmlAttributeCollection_t2316283784 * >::Invoke(6 /* System.Xml.XmlAttributeCollection System.Xml.XmlNode::get_Attributes() */, L_27);
			XmlAttribute_t1173852259 * L_29 = XmlAttributeCollection_get_ItemOf_m952828905(L_28, _stringLiteral3243520166, /*hidden argument*/NULL);
			String_t* L_30 = VirtFuncInvoker0< String_t* >::Invoke(25 /* System.String System.Xml.XmlNode::get_Value() */, L_29);
			IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
			bool L_31 = String_op_Equality_m920492651(NULL /*static, unused*/, L_30, _stringLiteral2679218528, /*hidden argument*/NULL);
			if (!L_31)
			{
				goto IL_00c5;
			}
		}

IL_00c0:
		{
			goto IL_01ef;
		}

IL_00c5:
		{
			List_1_t899420910 * L_32 = (List_1_t899420910 *)il2cpp_codegen_object_new(List_1_t899420910_il2cpp_TypeInfo_var);
			List_1__ctor_m1536473967(L_32, /*hidden argument*/List_1__ctor_m1536473967_RuntimeMethod_var);
			V_5 = L_32;
			XmlNode_t3767805227 * L_33 = V_3;
			XmlAttributeCollection_t2316283784 * L_34 = VirtFuncInvoker0< XmlAttributeCollection_t2316283784 * >::Invoke(6 /* System.Xml.XmlAttributeCollection System.Xml.XmlNode::get_Attributes() */, L_33);
			XmlAttribute_t1173852259 * L_35 = XmlAttributeCollection_get_ItemOf_m952828905(L_34, _stringLiteral3080956237, /*hidden argument*/NULL);
			V_6 = L_35;
			XmlAttribute_t1173852259 * L_36 = V_6;
			if (L_36)
			{
				goto IL_00ea;
			}
		}

IL_00e5:
		{
			goto IL_01ef;
		}

IL_00ea:
		{
			XmlAttribute_t1173852259 * L_37 = V_6;
			String_t* L_38 = VirtFuncInvoker0< String_t* >::Invoke(25 /* System.String System.Xml.XmlNode::get_Value() */, L_37);
			V_7 = L_38;
			String_t* L_39 = V_7;
			CharU5BU5D_t3528271667* L_40 = ((CharU5BU5D_t3528271667*)SZArrayNew(CharU5BU5D_t3528271667_il2cpp_TypeInfo_var, (uint32_t)1));
			(L_40)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (Il2CppChar)((int32_t)32));
			StringU5BU5D_t1281789340* L_41 = String_Split_m3646115398(L_39, L_40, /*hidden argument*/NULL);
			V_8 = L_41;
			StringU5BU5D_t1281789340* L_42 = V_8;
			V_10 = L_42;
			V_11 = 0;
			goto IL_015d;
		}

IL_0113:
		{
			StringU5BU5D_t1281789340* L_43 = V_10;
			int32_t L_44 = V_11;
			int32_t L_45 = L_44;
			String_t* L_46 = (L_43)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_45));
			V_9 = L_46;
			String_t* L_47 = V_9;
			CharU5BU5D_t3528271667* L_48 = ((CharU5BU5D_t3528271667*)SZArrayNew(CharU5BU5D_t3528271667_il2cpp_TypeInfo_var, (uint32_t)1));
			(L_48)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (Il2CppChar)((int32_t)44));
			StringU5BU5D_t1281789340* L_49 = String_Split_m3646115398(L_47, L_48, /*hidden argument*/NULL);
			V_12 = L_49;
			List_1_t899420910 * L_50 = V_5;
			StringU5BU5D_t1281789340* L_51 = V_12;
			int32_t L_52 = 0;
			String_t* L_53 = (L_51)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_52));
			float L_54 = Single_Parse_m364357836(NULL /*static, unused*/, L_53, /*hidden argument*/NULL);
			StringU5BU5D_t1281789340* L_55 = V_12;
			int32_t L_56 = 1;
			String_t* L_57 = (L_55)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_56));
			float L_58 = Single_Parse_m364357836(NULL /*static, unused*/, L_57, /*hidden argument*/NULL);
			Vector3_t3722313464  L_59;
			memset(&L_59, 0, sizeof(L_59));
			Vector3__ctor_m3353183577((&L_59), L_54, (0.0f), L_58, /*hidden argument*/NULL);
			Vector3_t3722313464  L_60 = V_1;
			IL2CPP_RUNTIME_CLASS_INIT(Vector3_t3722313464_il2cpp_TypeInfo_var);
			Vector3_t3722313464  L_61 = Vector3_op_Subtraction_m3073674971(NULL /*static, unused*/, L_59, L_60, /*hidden argument*/NULL);
			List_1_Add_m1524640104(L_50, L_61, /*hidden argument*/List_1_Add_m1524640104_RuntimeMethod_var);
			int32_t L_62 = V_11;
			V_11 = ((int32_t)il2cpp_codegen_add((int32_t)L_62, (int32_t)1));
		}

IL_015d:
		{
			int32_t L_63 = V_11;
			StringU5BU5D_t1281789340* L_64 = V_10;
			if ((((int32_t)L_63) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_64)->max_length)))))))
			{
				goto IL_0113;
			}
		}

IL_0168:
		{
			V_13 = 1;
			goto IL_01df;
		}

IL_0170:
		{
			V_14 = 0;
			goto IL_01c8;
		}

IL_0178:
		{
			LineRenderer_t3154350270 * L_65 = __this->get_roadLines_4();
			Vector3U5BU5D_t1718750761* L_66 = ((Vector3U5BU5D_t1718750761*)SZArrayNew(Vector3U5BU5D_t1718750761_il2cpp_TypeInfo_var, (uint32_t)2));
			List_1_t899420910 * L_67 = V_5;
			int32_t L_68 = V_14;
			Vector3_t3722313464  L_69 = List_1_get_Item_m200663048(L_67, L_68, /*hidden argument*/List_1_get_Item_m200663048_RuntimeMethod_var);
			*(Vector3_t3722313464 *)((L_66)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(0))) = L_69;
			Vector3U5BU5D_t1718750761* L_70 = L_66;
			List_1_t899420910 * L_71 = V_5;
			int32_t L_72 = V_14;
			int32_t L_73 = V_13;
			Vector3_t3722313464  L_74 = List_1_get_Item_m200663048(L_71, ((int32_t)il2cpp_codegen_add((int32_t)L_72, (int32_t)L_73)), /*hidden argument*/List_1_get_Item_m200663048_RuntimeMethod_var);
			*(Vector3_t3722313464 *)((L_70)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(1))) = L_74;
			LineRenderer_SetPositions_m1969530996(L_65, L_70, /*hidden argument*/NULL);
			LineRenderer_t3154350270 * L_75 = __this->get_roadLines_4();
			IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
			Object_Instantiate_TisLineRenderer_t3154350270_m542278554(NULL /*static, unused*/, L_75, /*hidden argument*/Object_Instantiate_TisLineRenderer_t3154350270_m542278554_RuntimeMethod_var);
			int32_t L_76 = V_14;
			V_14 = ((int32_t)il2cpp_codegen_add((int32_t)L_76, (int32_t)1));
		}

IL_01c8:
		{
			int32_t L_77 = V_14;
			List_1_t899420910 * L_78 = V_5;
			int32_t L_79 = List_1_get_Count_m576380744(L_78, /*hidden argument*/List_1_get_Count_m576380744_RuntimeMethod_var);
			int32_t L_80 = V_13;
			if ((((int32_t)L_77) < ((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_79, (int32_t)L_80)))))
			{
				goto IL_0178;
			}
		}

IL_01d9:
		{
			int32_t L_81 = V_13;
			V_13 = ((int32_t)il2cpp_codegen_add((int32_t)L_81, (int32_t)1));
		}

IL_01df:
		{
			int32_t L_82 = V_13;
			List_1_t899420910 * L_83 = V_5;
			int32_t L_84 = List_1_get_Count_m576380744(L_83, /*hidden argument*/List_1_get_Count_m576380744_RuntimeMethod_var);
			if ((((int32_t)L_82) <= ((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_84, (int32_t)1)))))
			{
				goto IL_0170;
			}
		}

IL_01ef:
		{
			RuntimeObject* L_85 = V_4;
			bool L_86 = InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t1853284238_il2cpp_TypeInfo_var, L_85);
			if (L_86)
			{
				goto IL_008f;
			}
		}

IL_01fb:
		{
			IL2CPP_LEAVE(0x217, FINALLY_0200);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0200;
	}

FINALLY_0200:
	{ // begin finally (depth: 1)
		{
			RuntimeObject* L_87 = V_4;
			RuntimeObject* L_88 = ((RuntimeObject*)IsInst((RuntimeObject*)L_87, IDisposable_t3640265483_il2cpp_TypeInfo_var));
			V_15 = L_88;
			if (!L_88)
			{
				goto IL_0216;
			}
		}

IL_020f:
		{
			RuntimeObject* L_89 = V_15;
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t3640265483_il2cpp_TypeInfo_var, L_89);
		}

IL_0216:
		{
			IL2CPP_END_FINALLY(512)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(512)
	{
		IL2CPP_JUMP_TBL(0x217, IL_0217)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_0217:
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
// System.Void SimulationXmlParser::.ctor()
extern "C"  void SimulationXmlParser__ctor_m1675777462 (SimulationXmlParser_t3990157828 * __this, const RuntimeMethod* method)
{
	{
		__this->set_readTime_10((-1));
		MonoBehaviour__ctor_m1579109191(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void SimulationXmlParser::parseSimulation(System.String,System.String)
extern "C"  void SimulationXmlParser_parseSimulation_m857131844 (SimulationXmlParser_t3990157828 * __this, String_t* ___mapPath0, String_t* ___simPath1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SimulationXmlParser_parseSimulation_m857131844_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	XmlDocument_t2837193595 * V_0 = NULL;
	XmlDocument_t2837193595 * V_1 = NULL;
	XmlNode_t3767805227 * V_2 = NULL;
	float V_3 = 0.0f;
	Button_t4055032469 * V_4 = NULL;
	Button_t4055032469 * V_5 = NULL;
	{
		XmlDocument_t2837193595 * L_0 = (XmlDocument_t2837193595 *)il2cpp_codegen_object_new(XmlDocument_t2837193595_il2cpp_TypeInfo_var);
		XmlDocument__ctor_m1447119458(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		XmlDocument_t2837193595 * L_1 = V_0;
		String_t* L_2 = ___simPath1;
		VirtActionInvoker1< String_t* >::Invoke(57 /* System.Void System.Xml.XmlDocument::Load(System.String) */, L_1, L_2);
		XmlDocument_t2837193595 * L_3 = (XmlDocument_t2837193595 *)il2cpp_codegen_object_new(XmlDocument_t2837193595_il2cpp_TypeInfo_var);
		XmlDocument__ctor_m1447119458(L_3, /*hidden argument*/NULL);
		V_1 = L_3;
		XmlDocument_t2837193595 * L_4 = V_1;
		String_t* L_5 = ___mapPath0;
		VirtActionInvoker1< String_t* >::Invoke(57 /* System.Void System.Xml.XmlDocument::Load(System.String) */, L_4, L_5);
		XmlDocument_t2837193595 * L_6 = V_1;
		XmlNodeList_t2551693786 * L_7 = VirtFuncInvoker1< XmlNodeList_t2551693786 *, String_t* >::Invoke(55 /* System.Xml.XmlNodeList System.Xml.XmlDocument::GetElementsByTagName(System.String) */, L_6, _stringLiteral803282398);
		XmlNode_t3767805227 * L_8 = VirtFuncInvoker1< XmlNode_t3767805227 *, int32_t >::Invoke(6 /* System.Xml.XmlNode System.Xml.XmlNodeList::get_ItemOf(System.Int32) */, L_7, 0);
		V_2 = L_8;
		XmlNode_t3767805227 * L_9 = V_2;
		XmlAttributeCollection_t2316283784 * L_10 = VirtFuncInvoker0< XmlAttributeCollection_t2316283784 * >::Invoke(6 /* System.Xml.XmlAttributeCollection System.Xml.XmlNode::get_Attributes() */, L_9);
		XmlAttribute_t1173852259 * L_11 = XmlAttributeCollection_get_ItemOf_m952828905(L_10, _stringLiteral2706142996, /*hidden argument*/NULL);
		String_t* L_12 = VirtFuncInvoker0< String_t* >::Invoke(25 /* System.String System.Xml.XmlNode::get_Value() */, L_11);
		CharU5BU5D_t3528271667* L_13 = ((CharU5BU5D_t3528271667*)SZArrayNew(CharU5BU5D_t3528271667_il2cpp_TypeInfo_var, (uint32_t)1));
		(L_13)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (Il2CppChar)((int32_t)44));
		StringU5BU5D_t1281789340* L_14 = String_Split_m3646115398(L_12, L_13, /*hidden argument*/NULL);
		int32_t L_15 = 0;
		String_t* L_16 = (L_14)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_15));
		float L_17 = Single_Parse_m364357836(NULL /*static, unused*/, L_16, /*hidden argument*/NULL);
		XmlNode_t3767805227 * L_18 = V_2;
		XmlAttributeCollection_t2316283784 * L_19 = VirtFuncInvoker0< XmlAttributeCollection_t2316283784 * >::Invoke(6 /* System.Xml.XmlAttributeCollection System.Xml.XmlNode::get_Attributes() */, L_18);
		XmlAttribute_t1173852259 * L_20 = XmlAttributeCollection_get_ItemOf_m952828905(L_19, _stringLiteral2706142996, /*hidden argument*/NULL);
		String_t* L_21 = VirtFuncInvoker0< String_t* >::Invoke(25 /* System.String System.Xml.XmlNode::get_Value() */, L_20);
		CharU5BU5D_t3528271667* L_22 = ((CharU5BU5D_t3528271667*)SZArrayNew(CharU5BU5D_t3528271667_il2cpp_TypeInfo_var, (uint32_t)1));
		(L_22)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (Il2CppChar)((int32_t)44));
		StringU5BU5D_t1281789340* L_23 = String_Split_m3646115398(L_21, L_22, /*hidden argument*/NULL);
		int32_t L_24 = 1;
		String_t* L_25 = (L_23)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_24));
		float L_26 = Single_Parse_m364357836(NULL /*static, unused*/, L_25, /*hidden argument*/NULL);
		Vector3_t3722313464  L_27;
		memset(&L_27, 0, sizeof(L_27));
		Vector3__ctor_m3353183577((&L_27), L_17, (0.0f), L_26, /*hidden argument*/NULL);
		__this->set_offset_11(L_27);
		XmlDocument_t2837193595 * L_28 = V_0;
		XmlNodeList_t2551693786 * L_29 = VirtFuncInvoker1< XmlNodeList_t2551693786 *, String_t* >::Invoke(55 /* System.Xml.XmlNodeList System.Xml.XmlDocument::GetElementsByTagName(System.String) */, L_28, _stringLiteral2037252866);
		__this->set_nodeList_9(L_29);
		Vector3_t3722313464 * L_30 = __this->get_address_of_offset_11();
		float L_31 = L_30->get_x_1();
		Vector3_t3722313464 * L_32 = __this->get_address_of_offset_11();
		float L_33 = L_32->get_z_3();
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t3464937446_il2cpp_TypeInfo_var);
		float L_34 = Mathf_Max_m3146388979(NULL /*static, unused*/, L_31, L_33, /*hidden argument*/NULL);
		V_3 = L_34;
		Camera_t4157153871 * L_35 = Camera_get_main_m3643453163(NULL /*static, unused*/, /*hidden argument*/NULL);
		float L_36 = V_3;
		Camera_set_orthographicSize_m76971700(L_35, L_36, /*hidden argument*/NULL);
		float L_37 = V_3;
		__this->set_mouseSensitivity_8(((float)((float)L_37/(float)(10.0f))));
		Button_t4055032469 * L_38 = __this->get_playButton_5();
		Button_t4055032469 * L_39 = Component_GetComponent_TisButton_t4055032469_m1381873113(L_38, /*hidden argument*/Component_GetComponent_TisButton_t4055032469_m1381873113_RuntimeMethod_var);
		V_4 = L_39;
		Button_t4055032469 * L_40 = V_4;
		ButtonClickedEvent_t48803504 * L_41 = Button_get_onClick_m2332132945(L_40, /*hidden argument*/NULL);
		intptr_t L_42 = (intptr_t)SimulationXmlParser_playSimulation_m1991821138_RuntimeMethod_var;
		UnityAction_t3245792599 * L_43 = (UnityAction_t3245792599 *)il2cpp_codegen_object_new(UnityAction_t3245792599_il2cpp_TypeInfo_var);
		UnityAction__ctor_m772160306(L_43, __this, L_42, /*hidden argument*/NULL);
		UnityEvent_AddListener_m2276267359(L_41, L_43, /*hidden argument*/NULL);
		Button_t4055032469 * L_44 = __this->get_nextButton_6();
		Button_t4055032469 * L_45 = Component_GetComponent_TisButton_t4055032469_m1381873113(L_44, /*hidden argument*/Component_GetComponent_TisButton_t4055032469_m1381873113_RuntimeMethod_var);
		V_5 = L_45;
		Button_t4055032469 * L_46 = V_5;
		ButtonClickedEvent_t48803504 * L_47 = Button_get_onClick_m2332132945(L_46, /*hidden argument*/NULL);
		intptr_t L_48 = (intptr_t)SimulationXmlParser_readXml_m21601932_RuntimeMethod_var;
		UnityAction_t3245792599 * L_49 = (UnityAction_t3245792599 *)il2cpp_codegen_object_new(UnityAction_t3245792599_il2cpp_TypeInfo_var);
		UnityAction__ctor_m772160306(L_49, __this, L_48, /*hidden argument*/NULL);
		UnityEvent_AddListener_m2276267359(L_47, L_49, /*hidden argument*/NULL);
		return;
	}
}
// System.Void SimulationXmlParser::playSimulation()
extern "C"  void SimulationXmlParser_playSimulation_m1991821138 (SimulationXmlParser_t3990157828 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SimulationXmlParser_playSimulation_m1991821138_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Button_t4055032469 * V_0 = NULL;
	Text_t1901882714 * V_1 = NULL;
	{
		MonoBehaviour_InvokeRepeating_m650519629(__this, _stringLiteral1254395011, (0.0f), (0.2f), /*hidden argument*/NULL);
		Button_t4055032469 * L_0 = __this->get_playButton_5();
		Button_t4055032469 * L_1 = Component_GetComponent_TisButton_t4055032469_m1381873113(L_0, /*hidden argument*/Component_GetComponent_TisButton_t4055032469_m1381873113_RuntimeMethod_var);
		V_0 = L_1;
		Button_t4055032469 * L_2 = V_0;
		ButtonClickedEvent_t48803504 * L_3 = Button_get_onClick_m2332132945(L_2, /*hidden argument*/NULL);
		UnityEventBase_RemoveAllListeners_m858411973(L_3, /*hidden argument*/NULL);
		Button_t4055032469 * L_4 = V_0;
		ButtonClickedEvent_t48803504 * L_5 = Button_get_onClick_m2332132945(L_4, /*hidden argument*/NULL);
		intptr_t L_6 = (intptr_t)SimulationXmlParser_stopSimulation_m2322440394_RuntimeMethod_var;
		UnityAction_t3245792599 * L_7 = (UnityAction_t3245792599 *)il2cpp_codegen_object_new(UnityAction_t3245792599_il2cpp_TypeInfo_var);
		UnityAction__ctor_m772160306(L_7, __this, L_6, /*hidden argument*/NULL);
		UnityEvent_AddListener_m2276267359(L_5, L_7, /*hidden argument*/NULL);
		Button_t4055032469 * L_8 = __this->get_playButton_5();
		Text_t1901882714 * L_9 = Component_GetComponentInChildren_TisText_t1901882714_m396351542(L_8, /*hidden argument*/Component_GetComponentInChildren_TisText_t1901882714_m396351542_RuntimeMethod_var);
		V_1 = L_9;
		Text_t1901882714 * L_10 = V_1;
		VirtActionInvoker1< String_t* >::Invoke(73 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_10, _stringLiteral3093431772);
		return;
	}
}
// System.Void SimulationXmlParser::stopSimulation()
extern "C"  void SimulationXmlParser_stopSimulation_m2322440394 (SimulationXmlParser_t3990157828 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SimulationXmlParser_stopSimulation_m2322440394_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Button_t4055032469 * V_0 = NULL;
	Text_t1901882714 * V_1 = NULL;
	{
		MonoBehaviour_CancelInvoke_m2180046661(__this, _stringLiteral1254395011, /*hidden argument*/NULL);
		Button_t4055032469 * L_0 = __this->get_playButton_5();
		Button_t4055032469 * L_1 = Component_GetComponent_TisButton_t4055032469_m1381873113(L_0, /*hidden argument*/Component_GetComponent_TisButton_t4055032469_m1381873113_RuntimeMethod_var);
		V_0 = L_1;
		Button_t4055032469 * L_2 = V_0;
		ButtonClickedEvent_t48803504 * L_3 = Button_get_onClick_m2332132945(L_2, /*hidden argument*/NULL);
		UnityEventBase_RemoveAllListeners_m858411973(L_3, /*hidden argument*/NULL);
		Button_t4055032469 * L_4 = V_0;
		ButtonClickedEvent_t48803504 * L_5 = Button_get_onClick_m2332132945(L_4, /*hidden argument*/NULL);
		intptr_t L_6 = (intptr_t)SimulationXmlParser_playSimulation_m1991821138_RuntimeMethod_var;
		UnityAction_t3245792599 * L_7 = (UnityAction_t3245792599 *)il2cpp_codegen_object_new(UnityAction_t3245792599_il2cpp_TypeInfo_var);
		UnityAction__ctor_m772160306(L_7, __this, L_6, /*hidden argument*/NULL);
		UnityEvent_AddListener_m2276267359(L_5, L_7, /*hidden argument*/NULL);
		Button_t4055032469 * L_8 = __this->get_playButton_5();
		Text_t1901882714 * L_9 = Component_GetComponentInChildren_TisText_t1901882714_m396351542(L_8, /*hidden argument*/Component_GetComponentInChildren_TisText_t1901882714_m396351542_RuntimeMethod_var);
		V_1 = L_9;
		Text_t1901882714 * L_10 = V_1;
		VirtActionInvoker1< String_t* >::Invoke(73 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_10, _stringLiteral3446402837);
		return;
	}
}
// System.Void SimulationXmlParser::readXml()
extern "C"  void SimulationXmlParser_readXml_m21601932 (SimulationXmlParser_t3990157828 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SimulationXmlParser_readXml_m21601932_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	GameObject_t1113636619 * V_0 = NULL;
	Enumerator_t179987942  V_1;
	memset(&V_1, 0, sizeof(V_1));
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		int32_t L_0 = __this->get_readTime_10();
		__this->set_readTime_10(((int32_t)il2cpp_codegen_add((int32_t)L_0, (int32_t)1)));
		List_1_t2585711361 * L_1 = __this->get_activeCars_2();
		Enumerator_t179987942  L_2 = List_1_GetEnumerator_m1750140655(L_1, /*hidden argument*/List_1_GetEnumerator_m1750140655_RuntimeMethod_var);
		V_1 = L_2;
	}

IL_001a:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0033;
		}

IL_001f:
		{
			GameObject_t1113636619 * L_3 = Enumerator_get_Current_m4179928398((Enumerator_t179987942 *)(&V_1), /*hidden argument*/Enumerator_get_Current_m4179928398_RuntimeMethod_var);
			V_0 = L_3;
			GameObject_t1113636619 * L_4 = V_0;
			Vehicle_t3024892526 * L_5 = GameObject_GetComponent_TisVehicle_t3024892526_m809803388(L_4, /*hidden argument*/GameObject_GetComponent_TisVehicle_t3024892526_m809803388_RuntimeMethod_var);
			L_5->set_visited_7((bool)0);
		}

IL_0033:
		{
			bool L_6 = Enumerator_MoveNext_m4286844348((Enumerator_t179987942 *)(&V_1), /*hidden argument*/Enumerator_MoveNext_m4286844348_RuntimeMethod_var);
			if (L_6)
			{
				goto IL_001f;
			}
		}

IL_003f:
		{
			IL2CPP_LEAVE(0x52, FINALLY_0044);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0044;
	}

FINALLY_0044:
	{ // begin finally (depth: 1)
		Enumerator_Dispose_m1341201278((Enumerator_t179987942 *)(&V_1), /*hidden argument*/Enumerator_Dispose_m1341201278_RuntimeMethod_var);
		IL2CPP_END_FINALLY(68)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(68)
	{
		IL2CPP_JUMP_TBL(0x52, IL_0052)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_0052:
	{
		SimulationXmlParser_readTimeStep_m2465967149(__this, /*hidden argument*/NULL);
		SimulationXmlParser_deleteObjects_m2991781533(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void SimulationXmlParser::readTimeStep()
extern "C"  void SimulationXmlParser_readTimeStep_m2465967149 (SimulationXmlParser_t3990157828 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SimulationXmlParser_readTimeStep_m2465967149_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	XmlNode_t3767805227 * V_1 = NULL;
	RuntimeObject* V_2 = NULL;
	XmlNodeList_t2551693786 * V_3 = NULL;
	XmlNode_t3767805227 * V_4 = NULL;
	RuntimeObject* V_5 = NULL;
	RuntimeObject* V_6 = NULL;
	XmlNodeList_t2551693786 * V_7 = NULL;
	XmlNode_t3767805227 * V_8 = NULL;
	RuntimeObject* V_9 = NULL;
	RuntimeObject* V_10 = NULL;
	RuntimeObject* V_11 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		V_0 = 0;
		XmlNodeList_t2551693786 * L_0 = __this->get_nodeList_9();
		RuntimeObject* L_1 = VirtFuncInvoker0< RuntimeObject* >::Invoke(7 /* System.Collections.IEnumerator System.Xml.XmlNodeList::GetEnumerator() */, L_0);
		V_2 = L_1;
	}

IL_000e:
	try
	{ // begin try (depth: 1)
		{
			goto IL_00ee;
		}

IL_0013:
		{
			RuntimeObject* L_2 = V_2;
			RuntimeObject * L_3 = InterfaceFuncInvoker0< RuntimeObject * >::Invoke(0 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t1853284238_il2cpp_TypeInfo_var, L_2);
			V_1 = ((XmlNode_t3767805227 *)CastclassClass((RuntimeObject*)L_3, XmlNode_t3767805227_il2cpp_TypeInfo_var));
			int32_t L_4 = V_0;
			int32_t L_5 = __this->get_readTime_10();
			if ((!(((uint32_t)L_4) == ((uint32_t)L_5))))
			{
				goto IL_00ea;
			}
		}

IL_002b:
		{
			XmlNode_t3767805227 * L_6 = V_1;
			XmlNode_t3767805227 * L_7 = XmlNode_SelectSingleNode_m2944339946(L_6, _stringLiteral649905732, /*hidden argument*/NULL);
			XmlNodeList_t2551693786 * L_8 = VirtFuncInvoker0< XmlNodeList_t2551693786 * >::Invoke(9 /* System.Xml.XmlNodeList System.Xml.XmlNode::get_ChildNodes() */, L_7);
			V_3 = L_8;
			XmlNodeList_t2551693786 * L_9 = V_3;
			RuntimeObject* L_10 = VirtFuncInvoker0< RuntimeObject* >::Invoke(7 /* System.Collections.IEnumerator System.Xml.XmlNodeList::GetEnumerator() */, L_9);
			V_5 = L_10;
		}

IL_0044:
		try
		{ // begin try (depth: 2)
			{
				goto IL_005f;
			}

IL_0049:
			{
				RuntimeObject* L_11 = V_5;
				RuntimeObject * L_12 = InterfaceFuncInvoker0< RuntimeObject * >::Invoke(0 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t1853284238_il2cpp_TypeInfo_var, L_11);
				V_4 = ((XmlNode_t3767805227 *)CastclassClass((RuntimeObject*)L_12, XmlNode_t3767805227_il2cpp_TypeInfo_var));
				XmlNode_t3767805227 * L_13 = V_4;
				SimulationXmlParser_determineCar_m227194893(__this, L_13, /*hidden argument*/NULL);
			}

IL_005f:
			{
				RuntimeObject* L_14 = V_5;
				bool L_15 = InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t1853284238_il2cpp_TypeInfo_var, L_14);
				if (L_15)
				{
					goto IL_0049;
				}
			}

IL_006b:
			{
				IL2CPP_LEAVE(0x87, FINALLY_0070);
			}
		} // end try (depth: 2)
		catch(Il2CppExceptionWrapper& e)
		{
			__last_unhandled_exception = (Exception_t *)e.ex;
			goto FINALLY_0070;
		}

FINALLY_0070:
		{ // begin finally (depth: 2)
			{
				RuntimeObject* L_16 = V_5;
				RuntimeObject* L_17 = ((RuntimeObject*)IsInst((RuntimeObject*)L_16, IDisposable_t3640265483_il2cpp_TypeInfo_var));
				V_6 = L_17;
				if (!L_17)
				{
					goto IL_0086;
				}
			}

IL_007f:
			{
				RuntimeObject* L_18 = V_6;
				InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t3640265483_il2cpp_TypeInfo_var, L_18);
			}

IL_0086:
			{
				IL2CPP_END_FINALLY(112)
			}
		} // end finally (depth: 2)
		IL2CPP_CLEANUP(112)
		{
			IL2CPP_JUMP_TBL(0x87, IL_0087)
			IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		}

IL_0087:
		{
			XmlNode_t3767805227 * L_19 = V_1;
			XmlNode_t3767805227 * L_20 = XmlNode_SelectSingleNode_m2944339946(L_19, _stringLiteral4119891575, /*hidden argument*/NULL);
			XmlNodeList_t2551693786 * L_21 = VirtFuncInvoker0< XmlNodeList_t2551693786 * >::Invoke(9 /* System.Xml.XmlNodeList System.Xml.XmlNode::get_ChildNodes() */, L_20);
			V_7 = L_21;
			XmlNodeList_t2551693786 * L_22 = V_7;
			RuntimeObject* L_23 = VirtFuncInvoker0< RuntimeObject* >::Invoke(7 /* System.Collections.IEnumerator System.Xml.XmlNodeList::GetEnumerator() */, L_22);
			V_9 = L_23;
		}

IL_00a2:
		try
		{ // begin try (depth: 2)
			{
				goto IL_00bd;
			}

IL_00a7:
			{
				RuntimeObject* L_24 = V_9;
				RuntimeObject * L_25 = InterfaceFuncInvoker0< RuntimeObject * >::Invoke(0 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t1853284238_il2cpp_TypeInfo_var, L_24);
				V_8 = ((XmlNode_t3767805227 *)CastclassClass((RuntimeObject*)L_25, XmlNode_t3767805227_il2cpp_TypeInfo_var));
				XmlNode_t3767805227 * L_26 = V_8;
				SimulationXmlParser_determineLight_m2540190358(__this, L_26, /*hidden argument*/NULL);
			}

IL_00bd:
			{
				RuntimeObject* L_27 = V_9;
				bool L_28 = InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t1853284238_il2cpp_TypeInfo_var, L_27);
				if (L_28)
				{
					goto IL_00a7;
				}
			}

IL_00c9:
			{
				IL2CPP_LEAVE(0xE5, FINALLY_00ce);
			}
		} // end try (depth: 2)
		catch(Il2CppExceptionWrapper& e)
		{
			__last_unhandled_exception = (Exception_t *)e.ex;
			goto FINALLY_00ce;
		}

FINALLY_00ce:
		{ // begin finally (depth: 2)
			{
				RuntimeObject* L_29 = V_9;
				RuntimeObject* L_30 = ((RuntimeObject*)IsInst((RuntimeObject*)L_29, IDisposable_t3640265483_il2cpp_TypeInfo_var));
				V_10 = L_30;
				if (!L_30)
				{
					goto IL_00e4;
				}
			}

IL_00dd:
			{
				RuntimeObject* L_31 = V_10;
				InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t3640265483_il2cpp_TypeInfo_var, L_31);
			}

IL_00e4:
			{
				IL2CPP_END_FINALLY(206)
			}
		} // end finally (depth: 2)
		IL2CPP_CLEANUP(206)
		{
			IL2CPP_JUMP_TBL(0xE5, IL_00e5)
			IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		}

IL_00e5:
		{
			goto IL_00f9;
		}

IL_00ea:
		{
			int32_t L_32 = V_0;
			V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_32, (int32_t)1));
		}

IL_00ee:
		{
			RuntimeObject* L_33 = V_2;
			bool L_34 = InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t1853284238_il2cpp_TypeInfo_var, L_33);
			if (L_34)
			{
				goto IL_0013;
			}
		}

IL_00f9:
		{
			IL2CPP_LEAVE(0x114, FINALLY_00fe);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_00fe;
	}

FINALLY_00fe:
	{ // begin finally (depth: 1)
		{
			RuntimeObject* L_35 = V_2;
			RuntimeObject* L_36 = ((RuntimeObject*)IsInst((RuntimeObject*)L_35, IDisposable_t3640265483_il2cpp_TypeInfo_var));
			V_11 = L_36;
			if (!L_36)
			{
				goto IL_0113;
			}
		}

IL_010c:
		{
			RuntimeObject* L_37 = V_11;
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t3640265483_il2cpp_TypeInfo_var, L_37);
		}

IL_0113:
		{
			IL2CPP_END_FINALLY(254)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(254)
	{
		IL2CPP_JUMP_TBL(0x114, IL_0114)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_0114:
	{
		return;
	}
}
// System.Void SimulationXmlParser::determineCar(System.Xml.XmlNode)
extern "C"  void SimulationXmlParser_determineCar_m227194893 (SimulationXmlParser_t3990157828 * __this, XmlNode_t3767805227 * ___curNode0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SimulationXmlParser_determineCar_m227194893_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	GameObject_t1113636619 * V_0 = NULL;
	{
		XmlNode_t3767805227 * L_0 = ___curNode0;
		GameObject_t1113636619 * L_1 = SimulationXmlParser_alive_m683940935(__this, L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		GameObject_t1113636619 * L_2 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_3 = Object_op_Implicit_m3574996620(NULL /*static, unused*/, L_2, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_00a3;
		}
	}
	{
		GameObject_t1113636619 * L_4 = V_0;
		Vehicle_t3024892526 * L_5 = GameObject_GetComponent_TisVehicle_t3024892526_m809803388(L_4, /*hidden argument*/GameObject_GetComponent_TisVehicle_t3024892526_m809803388_RuntimeMethod_var);
		XmlNode_t3767805227 * L_6 = ___curNode0;
		XmlAttributeCollection_t2316283784 * L_7 = VirtFuncInvoker0< XmlAttributeCollection_t2316283784 * >::Invoke(6 /* System.Xml.XmlAttributeCollection System.Xml.XmlNode::get_Attributes() */, L_6);
		XmlAttribute_t1173852259 * L_8 = XmlAttributeCollection_get_ItemOf_m952828905(L_7, _stringLiteral3452614616, /*hidden argument*/NULL);
		String_t* L_9 = VirtFuncInvoker0< String_t* >::Invoke(25 /* System.String System.Xml.XmlNode::get_Value() */, L_8);
		float L_10 = Single_Parse_m364357836(NULL /*static, unused*/, L_9, /*hidden argument*/NULL);
		Vector3_t3722313464 * L_11 = __this->get_address_of_offset_11();
		float L_12 = L_11->get_x_1();
		XmlNode_t3767805227 * L_13 = ___curNode0;
		XmlAttributeCollection_t2316283784 * L_14 = VirtFuncInvoker0< XmlAttributeCollection_t2316283784 * >::Invoke(6 /* System.Xml.XmlAttributeCollection System.Xml.XmlNode::get_Attributes() */, L_13);
		XmlAttribute_t1173852259 * L_15 = XmlAttributeCollection_get_ItemOf_m952828905(L_14, _stringLiteral3452614615, /*hidden argument*/NULL);
		String_t* L_16 = VirtFuncInvoker0< String_t* >::Invoke(25 /* System.String System.Xml.XmlNode::get_Value() */, L_15);
		float L_17 = Single_Parse_m364357836(NULL /*static, unused*/, L_16, /*hidden argument*/NULL);
		Vector3_t3722313464 * L_18 = __this->get_address_of_offset_11();
		float L_19 = L_18->get_z_3();
		XmlNode_t3767805227 * L_20 = ___curNode0;
		XmlAttributeCollection_t2316283784 * L_21 = VirtFuncInvoker0< XmlAttributeCollection_t2316283784 * >::Invoke(6 /* System.Xml.XmlAttributeCollection System.Xml.XmlNode::get_Attributes() */, L_20);
		XmlAttribute_t1173852259 * L_22 = XmlAttributeCollection_get_ItemOf_m952828905(L_21, _stringLiteral4262355673, /*hidden argument*/NULL);
		String_t* L_23 = VirtFuncInvoker0< String_t* >::Invoke(25 /* System.String System.Xml.XmlNode::get_Value() */, L_22);
		float L_24 = Single_Parse_m364357836(NULL /*static, unused*/, L_23, /*hidden argument*/NULL);
		XmlNode_t3767805227 * L_25 = ___curNode0;
		XmlAttributeCollection_t2316283784 * L_26 = VirtFuncInvoker0< XmlAttributeCollection_t2316283784 * >::Invoke(6 /* System.Xml.XmlAttributeCollection System.Xml.XmlNode::get_Attributes() */, L_25);
		XmlAttribute_t1173852259 * L_27 = XmlAttributeCollection_get_ItemOf_m952828905(L_26, _stringLiteral3556801464, /*hidden argument*/NULL);
		String_t* L_28 = VirtFuncInvoker0< String_t* >::Invoke(25 /* System.String System.Xml.XmlNode::get_Value() */, L_27);
		IL2CPP_RUNTIME_CLASS_INIT(Convert_t2465617642_il2cpp_TypeInfo_var);
		double L_29 = Convert_ToDouble_m1364128555(NULL /*static, unused*/, L_28, /*hidden argument*/NULL);
		Vehicle_updateCarPosition_m1968675102(L_5, ((float)il2cpp_codegen_subtract((float)L_10, (float)L_12)), ((float)il2cpp_codegen_subtract((float)L_17, (float)L_19)), L_24, L_29, /*hidden argument*/NULL);
		goto IL_011e;
	}

IL_00a3:
	{
		XmlNode_t3767805227 * L_30 = ___curNode0;
		GameObject_t1113636619 * L_31 = SimulationXmlParser_getCarData_m3190637446(__this, L_30, /*hidden argument*/NULL);
		XmlNode_t3767805227 * L_32 = ___curNode0;
		XmlAttributeCollection_t2316283784 * L_33 = VirtFuncInvoker0< XmlAttributeCollection_t2316283784 * >::Invoke(6 /* System.Xml.XmlAttributeCollection System.Xml.XmlNode::get_Attributes() */, L_32);
		XmlAttribute_t1173852259 * L_34 = XmlAttributeCollection_get_ItemOf_m952828905(L_33, _stringLiteral3452614616, /*hidden argument*/NULL);
		String_t* L_35 = VirtFuncInvoker0< String_t* >::Invoke(25 /* System.String System.Xml.XmlNode::get_Value() */, L_34);
		float L_36 = Single_Parse_m364357836(NULL /*static, unused*/, L_35, /*hidden argument*/NULL);
		XmlNode_t3767805227 * L_37 = ___curNode0;
		XmlAttributeCollection_t2316283784 * L_38 = VirtFuncInvoker0< XmlAttributeCollection_t2316283784 * >::Invoke(6 /* System.Xml.XmlAttributeCollection System.Xml.XmlNode::get_Attributes() */, L_37);
		XmlAttribute_t1173852259 * L_39 = XmlAttributeCollection_get_ItemOf_m952828905(L_38, _stringLiteral3452614615, /*hidden argument*/NULL);
		String_t* L_40 = VirtFuncInvoker0< String_t* >::Invoke(25 /* System.String System.Xml.XmlNode::get_Value() */, L_39);
		float L_41 = Single_Parse_m364357836(NULL /*static, unused*/, L_40, /*hidden argument*/NULL);
		Vector3_t3722313464  L_42;
		memset(&L_42, 0, sizeof(L_42));
		Vector3__ctor_m3353183577((&L_42), L_36, (2.0f), L_41, /*hidden argument*/NULL);
		Vector3_t3722313464  L_43 = __this->get_offset_11();
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_t3722313464_il2cpp_TypeInfo_var);
		Vector3_t3722313464  L_44 = Vector3_op_Subtraction_m3073674971(NULL /*static, unused*/, L_42, L_43, /*hidden argument*/NULL);
		Quaternion_t2301928331  L_45;
		memset(&L_45, 0, sizeof(L_45));
		Quaternion__ctor_m435141806((&L_45), (0.0f), (0.0f), (0.0f), (0.0f), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		GameObject_t1113636619 * L_46 = Object_Instantiate_TisGameObject_t1113636619_m3006960551(NULL /*static, unused*/, L_31, L_44, L_45, /*hidden argument*/Object_Instantiate_TisGameObject_t1113636619_m3006960551_RuntimeMethod_var);
		V_0 = L_46;
		List_1_t2585711361 * L_47 = __this->get_activeCars_2();
		GameObject_t1113636619 * L_48 = V_0;
		List_1_Add_m2765963565(L_47, L_48, /*hidden argument*/List_1_Add_m2765963565_RuntimeMethod_var);
	}

IL_011e:
	{
		return;
	}
}
// System.Void SimulationXmlParser::determineLight(System.Xml.XmlNode)
extern "C"  void SimulationXmlParser_determineLight_m2540190358 (SimulationXmlParser_t3990157828 * __this, XmlNode_t3767805227 * ___curNode0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SimulationXmlParser_determineLight_m2540190358_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	U3CdetermineLightU3Ec__AnonStorey0_t2577330775 * V_0 = NULL;
	String_t* V_1 = NULL;
	Junction_t651368113 * V_2 = NULL;
	List_1_t3319525431 * V_3 = NULL;
	List_1_t973540472 * V_4 = NULL;
	int32_t V_5 = 0;
	Enumerator_t913802012  V_6;
	memset(&V_6, 0, sizeof(V_6));
	U3CdetermineLightU3Ec__AnonStorey1_t2577396311 * V_7 = NULL;
	Color_t2555686324  V_8;
	memset(&V_8, 0, sizeof(V_8));
	Il2CppChar V_9 = 0x0;
	Lane_t3796433026 * V_10 = NULL;
	LineRenderer_t3154350270 * V_11 = NULL;
	Enumerator_t2220701593  V_12;
	memset(&V_12, 0, sizeof(V_12));
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		U3CdetermineLightU3Ec__AnonStorey0_t2577330775 * L_0 = (U3CdetermineLightU3Ec__AnonStorey0_t2577330775 *)il2cpp_codegen_object_new(U3CdetermineLightU3Ec__AnonStorey0_t2577330775_il2cpp_TypeInfo_var);
		U3CdetermineLightU3Ec__AnonStorey0__ctor_m825618670(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		U3CdetermineLightU3Ec__AnonStorey0_t2577330775 * L_1 = V_0;
		XmlNode_t3767805227 * L_2 = ___curNode0;
		XmlAttributeCollection_t2316283784 * L_3 = VirtFuncInvoker0< XmlAttributeCollection_t2316283784 * >::Invoke(6 /* System.Xml.XmlAttributeCollection System.Xml.XmlNode::get_Attributes() */, L_2);
		XmlAttribute_t1173852259 * L_4 = XmlAttributeCollection_get_ItemOf_m952828905(L_3, _stringLiteral3454449607, /*hidden argument*/NULL);
		String_t* L_5 = VirtFuncInvoker0< String_t* >::Invoke(25 /* System.String System.Xml.XmlNode::get_Value() */, L_4);
		L_1->set_id_0(L_5);
		XmlNode_t3767805227 * L_6 = ___curNode0;
		XmlAttributeCollection_t2316283784 * L_7 = VirtFuncInvoker0< XmlAttributeCollection_t2316283784 * >::Invoke(6 /* System.Xml.XmlAttributeCollection System.Xml.XmlNode::get_Attributes() */, L_6);
		XmlAttribute_t1173852259 * L_8 = XmlAttributeCollection_get_ItemOf_m952828905(L_7, _stringLiteral2324932941, /*hidden argument*/NULL);
		String_t* L_9 = VirtFuncInvoker0< String_t* >::Invoke(25 /* System.String System.Xml.XmlNode::get_Value() */, L_8);
		V_1 = L_9;
		GameObject_t1113636619 * L_10 = __this->get_cityParser_7();
		MapXmlParser_t3144498968 * L_11 = GameObject_GetComponent_TisMapXmlParser_t3144498968_m627506226(L_10, /*hidden argument*/GameObject_GetComponent_TisMapXmlParser_t3144498968_m627506226_RuntimeMethod_var);
		List_1_t2123442855 * L_12 = L_11->get_junctions_7();
		U3CdetermineLightU3Ec__AnonStorey0_t2577330775 * L_13 = V_0;
		intptr_t L_14 = (intptr_t)U3CdetermineLightU3Ec__AnonStorey0_U3CU3Em__0_m4276751557_RuntimeMethod_var;
		Predicate_1_t1476662237 * L_15 = (Predicate_1_t1476662237 *)il2cpp_codegen_object_new(Predicate_1_t1476662237_il2cpp_TypeInfo_var);
		Predicate_1__ctor_m1340340098(L_15, L_13, L_14, /*hidden argument*/Predicate_1__ctor_m1340340098_RuntimeMethod_var);
		Junction_t651368113 * L_16 = List_1_Find_m1598379345(L_12, L_15, /*hidden argument*/List_1_Find_m1598379345_RuntimeMethod_var);
		V_2 = L_16;
		Junction_t651368113 * L_17 = V_2;
		List_1_t3319525431 * L_18 = Junction_getLanes_m1263919175(L_17, /*hidden argument*/NULL);
		V_3 = L_18;
		GameObject_t1113636619 * L_19 = __this->get_cityParser_7();
		MapXmlParser_t3144498968 * L_20 = GameObject_GetComponent_TisMapXmlParser_t3144498968_m627506226(L_19, /*hidden argument*/GameObject_GetComponent_TisMapXmlParser_t3144498968_m627506226_RuntimeMethod_var);
		List_1_t973540472 * L_21 = L_20->get_lanes_6();
		V_4 = L_21;
		V_5 = 0;
		List_1_t3319525431 * L_22 = V_3;
		Enumerator_t913802012  L_23 = List_1_GetEnumerator_m1955908099(L_22, /*hidden argument*/List_1_GetEnumerator_m1955908099_RuntimeMethod_var);
		V_6 = L_23;
	}

IL_007d:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0165;
		}

IL_0082:
		{
			U3CdetermineLightU3Ec__AnonStorey1_t2577396311 * L_24 = (U3CdetermineLightU3Ec__AnonStorey1_t2577396311 *)il2cpp_codegen_object_new(U3CdetermineLightU3Ec__AnonStorey1_t2577396311_il2cpp_TypeInfo_var);
			U3CdetermineLightU3Ec__AnonStorey1__ctor_m772600046(L_24, /*hidden argument*/NULL);
			V_7 = L_24;
			U3CdetermineLightU3Ec__AnonStorey1_t2577396311 * L_25 = V_7;
			String_t* L_26 = Enumerator_get_Current_m236733038((Enumerator_t913802012 *)(&V_6), /*hidden argument*/Enumerator_get_Current_m236733038_RuntimeMethod_var);
			L_25->set_l_0(L_26);
			String_t* L_27 = V_1;
			int32_t L_28 = V_5;
			Il2CppChar L_29 = String_get_Chars_m2986988803(L_27, L_28, /*hidden argument*/NULL);
			V_9 = L_29;
			Il2CppChar L_30 = V_9;
			if ((((int32_t)L_30) == ((int32_t)((int32_t)71))))
			{
				goto IL_00c1;
			}
		}

IL_00aa:
		{
			Il2CppChar L_31 = V_9;
			if ((((int32_t)L_31) == ((int32_t)((int32_t)103))))
			{
				goto IL_00cd;
			}
		}

IL_00b3:
		{
			Il2CppChar L_32 = V_9;
			if ((((int32_t)L_32) == ((int32_t)((int32_t)121))))
			{
				goto IL_00e8;
			}
		}

IL_00bc:
		{
			goto IL_00f4;
		}

IL_00c1:
		{
			Color_t2555686324  L_33 = Color_get_green_m490390750(NULL /*static, unused*/, /*hidden argument*/NULL);
			V_8 = L_33;
			goto IL_0100;
		}

IL_00cd:
		{
			Color__ctor_m286683560((Color_t2555686324 *)(&V_8), (0.0f), (77.0f), (3.0f), /*hidden argument*/NULL);
			goto IL_0100;
		}

IL_00e8:
		{
			Color_t2555686324  L_34 = Color_get_yellow_m1287957903(NULL /*static, unused*/, /*hidden argument*/NULL);
			V_8 = L_34;
			goto IL_0100;
		}

IL_00f4:
		{
			Color_t2555686324  L_35 = Color_get_red_m3227813939(NULL /*static, unused*/, /*hidden argument*/NULL);
			V_8 = L_35;
			goto IL_0100;
		}

IL_0100:
		{
			int32_t L_36 = V_5;
			V_5 = ((int32_t)il2cpp_codegen_add((int32_t)L_36, (int32_t)1));
			List_1_t973540472 * L_37 = V_4;
			U3CdetermineLightU3Ec__AnonStorey1_t2577396311 * L_38 = V_7;
			intptr_t L_39 = (intptr_t)U3CdetermineLightU3Ec__AnonStorey1_U3CU3Em__0_m1983843048_RuntimeMethod_var;
			Predicate_1_t326759854 * L_40 = (Predicate_1_t326759854 *)il2cpp_codegen_object_new(Predicate_1_t326759854_il2cpp_TypeInfo_var);
			Predicate_1__ctor_m3711714686(L_40, L_38, L_39, /*hidden argument*/Predicate_1__ctor_m3711714686_RuntimeMethod_var);
			Lane_t3796433026 * L_41 = List_1_Find_m1540475052(L_37, L_40, /*hidden argument*/List_1_Find_m1540475052_RuntimeMethod_var);
			V_10 = L_41;
			Lane_t3796433026 * L_42 = V_10;
			List_1_t331457716 * L_43 = Lane_getLines_m598379578(L_42, /*hidden argument*/NULL);
			Enumerator_t2220701593  L_44 = List_1_GetEnumerator_m2371351222(L_43, /*hidden argument*/List_1_GetEnumerator_m2371351222_RuntimeMethod_var);
			V_12 = L_44;
		}

IL_012a:
		try
		{ // begin try (depth: 2)
			{
				goto IL_0146;
			}

IL_012f:
			{
				LineRenderer_t3154350270 * L_45 = Enumerator_get_Current_m551545990((Enumerator_t2220701593 *)(&V_12), /*hidden argument*/Enumerator_get_Current_m551545990_RuntimeMethod_var);
				V_11 = L_45;
				LineRenderer_t3154350270 * L_46 = V_11;
				Material_t340375123 * L_47 = Renderer_get_material_m4171603682(L_46, /*hidden argument*/NULL);
				Color_t2555686324  L_48 = V_8;
				Material_set_color_m1794818007(L_47, L_48, /*hidden argument*/NULL);
			}

IL_0146:
			{
				bool L_49 = Enumerator_MoveNext_m3596597031((Enumerator_t2220701593 *)(&V_12), /*hidden argument*/Enumerator_MoveNext_m3596597031_RuntimeMethod_var);
				if (L_49)
				{
					goto IL_012f;
				}
			}

IL_0152:
			{
				IL2CPP_LEAVE(0x165, FINALLY_0157);
			}
		} // end try (depth: 2)
		catch(Il2CppExceptionWrapper& e)
		{
			__last_unhandled_exception = (Exception_t *)e.ex;
			goto FINALLY_0157;
		}

FINALLY_0157:
		{ // begin finally (depth: 2)
			Enumerator_Dispose_m995875212((Enumerator_t2220701593 *)(&V_12), /*hidden argument*/Enumerator_Dispose_m995875212_RuntimeMethod_var);
			IL2CPP_END_FINALLY(343)
		} // end finally (depth: 2)
		IL2CPP_CLEANUP(343)
		{
			IL2CPP_JUMP_TBL(0x165, IL_0165)
			IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		}

IL_0165:
		{
			bool L_50 = Enumerator_MoveNext_m4158182743((Enumerator_t913802012 *)(&V_6), /*hidden argument*/Enumerator_MoveNext_m4158182743_RuntimeMethod_var);
			if (L_50)
			{
				goto IL_0082;
			}
		}

IL_0171:
		{
			IL2CPP_LEAVE(0x184, FINALLY_0176);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0176;
	}

FINALLY_0176:
	{ // begin finally (depth: 1)
		Enumerator_Dispose_m2026665411((Enumerator_t913802012 *)(&V_6), /*hidden argument*/Enumerator_Dispose_m2026665411_RuntimeMethod_var);
		IL2CPP_END_FINALLY(374)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(374)
	{
		IL2CPP_JUMP_TBL(0x184, IL_0184)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_0184:
	{
		return;
	}
}
// UnityEngine.GameObject SimulationXmlParser::getCarData(System.Xml.XmlNode)
extern "C"  GameObject_t1113636619 * SimulationXmlParser_getCarData_m3190637446 (SimulationXmlParser_t3990157828 * __this, XmlNode_t3767805227 * ___curNode0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SimulationXmlParser_getCarData_m3190637446_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Random_t108471755 * V_0 = NULL;
	GameObject_t1113636619 * V_1 = NULL;
	{
		Random_t108471755 * L_0 = (Random_t108471755 *)il2cpp_codegen_object_new(Random_t108471755_il2cpp_TypeInfo_var);
		Random__ctor_m4122933043(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		Random_t108471755 * L_1 = V_0;
		int32_t L_2 = VirtFuncInvoker2< int32_t, int32_t, int32_t >::Invoke(5 /* System.Int32 System.Random::Next(System.Int32,System.Int32) */, L_1, 1, 3);
		if ((!(((uint32_t)L_2) == ((uint32_t)1))))
		{
			goto IL_0020;
		}
	}
	{
		GameObject_t1113636619 * L_3 = __this->get_carModel1_3();
		V_1 = L_3;
		goto IL_0027;
	}

IL_0020:
	{
		GameObject_t1113636619 * L_4 = __this->get_carModel2_4();
		V_1 = L_4;
	}

IL_0027:
	{
		GameObject_t1113636619 * L_5 = V_1;
		Vehicle_t3024892526 * L_6 = GameObject_GetComponent_TisVehicle_t3024892526_m809803388(L_5, /*hidden argument*/GameObject_GetComponent_TisVehicle_t3024892526_m809803388_RuntimeMethod_var);
		XmlNode_t3767805227 * L_7 = ___curNode0;
		XmlAttributeCollection_t2316283784 * L_8 = VirtFuncInvoker0< XmlAttributeCollection_t2316283784 * >::Invoke(6 /* System.Xml.XmlAttributeCollection System.Xml.XmlNode::get_Attributes() */, L_7);
		XmlAttribute_t1173852259 * L_9 = XmlAttributeCollection_get_ItemOf_m952828905(L_8, _stringLiteral3454449607, /*hidden argument*/NULL);
		String_t* L_10 = VirtFuncInvoker0< String_t* >::Invoke(25 /* System.String System.Xml.XmlNode::get_Value() */, L_9);
		L_6->set_id_2(L_10);
		GameObject_t1113636619 * L_11 = V_1;
		Vehicle_t3024892526 * L_12 = GameObject_GetComponent_TisVehicle_t3024892526_m809803388(L_11, /*hidden argument*/GameObject_GetComponent_TisVehicle_t3024892526_m809803388_RuntimeMethod_var);
		XmlNode_t3767805227 * L_13 = ___curNode0;
		XmlAttributeCollection_t2316283784 * L_14 = VirtFuncInvoker0< XmlAttributeCollection_t2316283784 * >::Invoke(6 /* System.Xml.XmlAttributeCollection System.Xml.XmlNode::get_Attributes() */, L_13);
		XmlAttribute_t1173852259 * L_15 = XmlAttributeCollection_get_ItemOf_m952828905(L_14, _stringLiteral3452614616, /*hidden argument*/NULL);
		String_t* L_16 = VirtFuncInvoker0< String_t* >::Invoke(25 /* System.String System.Xml.XmlNode::get_Value() */, L_15);
		float L_17 = Single_Parse_m364357836(NULL /*static, unused*/, L_16, /*hidden argument*/NULL);
		Vector3_t3722313464 * L_18 = __this->get_address_of_offset_11();
		float L_19 = L_18->get_x_1();
		L_12->set_x_3(((float)il2cpp_codegen_subtract((float)L_17, (float)L_19)));
		GameObject_t1113636619 * L_20 = V_1;
		Vehicle_t3024892526 * L_21 = GameObject_GetComponent_TisVehicle_t3024892526_m809803388(L_20, /*hidden argument*/GameObject_GetComponent_TisVehicle_t3024892526_m809803388_RuntimeMethod_var);
		XmlNode_t3767805227 * L_22 = ___curNode0;
		XmlAttributeCollection_t2316283784 * L_23 = VirtFuncInvoker0< XmlAttributeCollection_t2316283784 * >::Invoke(6 /* System.Xml.XmlAttributeCollection System.Xml.XmlNode::get_Attributes() */, L_22);
		XmlAttribute_t1173852259 * L_24 = XmlAttributeCollection_get_ItemOf_m952828905(L_23, _stringLiteral3452614615, /*hidden argument*/NULL);
		String_t* L_25 = VirtFuncInvoker0< String_t* >::Invoke(25 /* System.String System.Xml.XmlNode::get_Value() */, L_24);
		float L_26 = Single_Parse_m364357836(NULL /*static, unused*/, L_25, /*hidden argument*/NULL);
		Vector3_t3722313464 * L_27 = __this->get_address_of_offset_11();
		float L_28 = L_27->get_z_3();
		L_21->set_y_4(((float)il2cpp_codegen_subtract((float)L_26, (float)L_28)));
		GameObject_t1113636619 * L_29 = V_1;
		Vehicle_t3024892526 * L_30 = GameObject_GetComponent_TisVehicle_t3024892526_m809803388(L_29, /*hidden argument*/GameObject_GetComponent_TisVehicle_t3024892526_m809803388_RuntimeMethod_var);
		XmlNode_t3767805227 * L_31 = ___curNode0;
		XmlAttributeCollection_t2316283784 * L_32 = VirtFuncInvoker0< XmlAttributeCollection_t2316283784 * >::Invoke(6 /* System.Xml.XmlAttributeCollection System.Xml.XmlNode::get_Attributes() */, L_31);
		XmlAttribute_t1173852259 * L_33 = XmlAttributeCollection_get_ItemOf_m952828905(L_32, _stringLiteral4262355673, /*hidden argument*/NULL);
		String_t* L_34 = VirtFuncInvoker0< String_t* >::Invoke(25 /* System.String System.Xml.XmlNode::get_Value() */, L_33);
		float L_35 = Single_Parse_m364357836(NULL /*static, unused*/, L_34, /*hidden argument*/NULL);
		L_30->set_angle_5(L_35);
		GameObject_t1113636619 * L_36 = V_1;
		Vehicle_t3024892526 * L_37 = GameObject_GetComponent_TisVehicle_t3024892526_m809803388(L_36, /*hidden argument*/GameObject_GetComponent_TisVehicle_t3024892526_m809803388_RuntimeMethod_var);
		XmlNode_t3767805227 * L_38 = ___curNode0;
		XmlAttributeCollection_t2316283784 * L_39 = VirtFuncInvoker0< XmlAttributeCollection_t2316283784 * >::Invoke(6 /* System.Xml.XmlAttributeCollection System.Xml.XmlNode::get_Attributes() */, L_38);
		XmlAttribute_t1173852259 * L_40 = XmlAttributeCollection_get_ItemOf_m952828905(L_39, _stringLiteral3556801464, /*hidden argument*/NULL);
		String_t* L_41 = VirtFuncInvoker0< String_t* >::Invoke(25 /* System.String System.Xml.XmlNode::get_Value() */, L_40);
		IL2CPP_RUNTIME_CLASS_INIT(Convert_t2465617642_il2cpp_TypeInfo_var);
		double L_42 = Convert_ToDouble_m1364128555(NULL /*static, unused*/, L_41, /*hidden argument*/NULL);
		L_37->set_speed_6(L_42);
		GameObject_t1113636619 * L_43 = V_1;
		Vehicle_t3024892526 * L_44 = GameObject_GetComponent_TisVehicle_t3024892526_m809803388(L_43, /*hidden argument*/GameObject_GetComponent_TisVehicle_t3024892526_m809803388_RuntimeMethod_var);
		L_44->set_visited_7((bool)1);
		GameObject_t1113636619 * L_45 = V_1;
		return L_45;
	}
}
// UnityEngine.GameObject SimulationXmlParser::alive(System.Xml.XmlNode)
extern "C"  GameObject_t1113636619 * SimulationXmlParser_alive_m683940935 (SimulationXmlParser_t3990157828 * __this, XmlNode_t3767805227 * ___curNode0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SimulationXmlParser_alive_m683940935_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	GameObject_t1113636619 * V_0 = NULL;
	Enumerator_t179987942  V_1;
	memset(&V_1, 0, sizeof(V_1));
	GameObject_t1113636619 * V_2 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		List_1_t2585711361 * L_0 = __this->get_activeCars_2();
		Enumerator_t179987942  L_1 = List_1_GetEnumerator_m1750140655(L_0, /*hidden argument*/List_1_GetEnumerator_m1750140655_RuntimeMethod_var);
		V_1 = L_1;
	}

IL_000c:
	try
	{ // begin try (depth: 1)
		{
			goto IL_004a;
		}

IL_0011:
		{
			GameObject_t1113636619 * L_2 = Enumerator_get_Current_m4179928398((Enumerator_t179987942 *)(&V_1), /*hidden argument*/Enumerator_get_Current_m4179928398_RuntimeMethod_var);
			V_0 = L_2;
			XmlNode_t3767805227 * L_3 = ___curNode0;
			XmlAttributeCollection_t2316283784 * L_4 = VirtFuncInvoker0< XmlAttributeCollection_t2316283784 * >::Invoke(6 /* System.Xml.XmlAttributeCollection System.Xml.XmlNode::get_Attributes() */, L_3);
			XmlAttribute_t1173852259 * L_5 = XmlAttributeCollection_get_ItemOf_m952828905(L_4, _stringLiteral3454449607, /*hidden argument*/NULL);
			String_t* L_6 = VirtFuncInvoker0< String_t* >::Invoke(25 /* System.String System.Xml.XmlNode::get_Value() */, L_5);
			GameObject_t1113636619 * L_7 = V_0;
			Vehicle_t3024892526 * L_8 = GameObject_GetComponent_TisVehicle_t3024892526_m809803388(L_7, /*hidden argument*/GameObject_GetComponent_TisVehicle_t3024892526_m809803388_RuntimeMethod_var);
			String_t* L_9 = L_8->get_id_2();
			IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
			bool L_10 = String_op_Equality_m920492651(NULL /*static, unused*/, L_6, L_9, /*hidden argument*/NULL);
			if (!L_10)
			{
				goto IL_004a;
			}
		}

IL_0043:
		{
			GameObject_t1113636619 * L_11 = V_0;
			V_2 = L_11;
			IL2CPP_LEAVE(0x6B, FINALLY_005b);
		}

IL_004a:
		{
			bool L_12 = Enumerator_MoveNext_m4286844348((Enumerator_t179987942 *)(&V_1), /*hidden argument*/Enumerator_MoveNext_m4286844348_RuntimeMethod_var);
			if (L_12)
			{
				goto IL_0011;
			}
		}

IL_0056:
		{
			IL2CPP_LEAVE(0x69, FINALLY_005b);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_005b;
	}

FINALLY_005b:
	{ // begin finally (depth: 1)
		Enumerator_Dispose_m1341201278((Enumerator_t179987942 *)(&V_1), /*hidden argument*/Enumerator_Dispose_m1341201278_RuntimeMethod_var);
		IL2CPP_END_FINALLY(91)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(91)
	{
		IL2CPP_JUMP_TBL(0x6B, IL_006b)
		IL2CPP_JUMP_TBL(0x69, IL_0069)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_0069:
	{
		return (GameObject_t1113636619 *)NULL;
	}

IL_006b:
	{
		GameObject_t1113636619 * L_13 = V_2;
		return L_13;
	}
}
// System.Void SimulationXmlParser::deleteObjects()
extern "C"  void SimulationXmlParser_deleteObjects_m2991781533 (SimulationXmlParser_t3990157828 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SimulationXmlParser_deleteObjects_m2991781533_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	List_1_t2585711361 * V_0 = NULL;
	GameObject_t1113636619 * V_1 = NULL;
	Enumerator_t179987942  V_2;
	memset(&V_2, 0, sizeof(V_2));
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		List_1_t2585711361 * L_0 = (List_1_t2585711361 *)il2cpp_codegen_object_new(List_1_t2585711361_il2cpp_TypeInfo_var);
		List_1__ctor_m1424466557(L_0, /*hidden argument*/List_1__ctor_m1424466557_RuntimeMethod_var);
		V_0 = L_0;
		List_1_t2585711361 * L_1 = __this->get_activeCars_2();
		Enumerator_t179987942  L_2 = List_1_GetEnumerator_m1750140655(L_1, /*hidden argument*/List_1_GetEnumerator_m1750140655_RuntimeMethod_var);
		V_2 = L_2;
	}

IL_0012:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0041;
		}

IL_0017:
		{
			GameObject_t1113636619 * L_3 = Enumerator_get_Current_m4179928398((Enumerator_t179987942 *)(&V_2), /*hidden argument*/Enumerator_get_Current_m4179928398_RuntimeMethod_var);
			V_1 = L_3;
			GameObject_t1113636619 * L_4 = V_1;
			Vehicle_t3024892526 * L_5 = GameObject_GetComponent_TisVehicle_t3024892526_m809803388(L_4, /*hidden argument*/GameObject_GetComponent_TisVehicle_t3024892526_m809803388_RuntimeMethod_var);
			bool L_6 = L_5->get_visited_7();
			if (!L_6)
			{
				goto IL_003b;
			}
		}

IL_002f:
		{
			List_1_t2585711361 * L_7 = V_0;
			GameObject_t1113636619 * L_8 = V_1;
			List_1_Add_m2765963565(L_7, L_8, /*hidden argument*/List_1_Add_m2765963565_RuntimeMethod_var);
			goto IL_0041;
		}

IL_003b:
		{
			GameObject_t1113636619 * L_9 = V_1;
			IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
			Object_Destroy_m565254235(NULL /*static, unused*/, L_9, /*hidden argument*/NULL);
		}

IL_0041:
		{
			bool L_10 = Enumerator_MoveNext_m4286844348((Enumerator_t179987942 *)(&V_2), /*hidden argument*/Enumerator_MoveNext_m4286844348_RuntimeMethod_var);
			if (L_10)
			{
				goto IL_0017;
			}
		}

IL_004d:
		{
			IL2CPP_LEAVE(0x60, FINALLY_0052);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0052;
	}

FINALLY_0052:
	{ // begin finally (depth: 1)
		Enumerator_Dispose_m1341201278((Enumerator_t179987942 *)(&V_2), /*hidden argument*/Enumerator_Dispose_m1341201278_RuntimeMethod_var);
		IL2CPP_END_FINALLY(82)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(82)
	{
		IL2CPP_JUMP_TBL(0x60, IL_0060)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_0060:
	{
		List_1_t2585711361 * L_11 = V_0;
		__this->set_activeCars_2(L_11);
		return;
	}
}
// System.Void SimulationXmlParser::Update()
extern "C"  void SimulationXmlParser_Update_m2869978122 (SimulationXmlParser_t3990157828 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SimulationXmlParser_Update_m2869978122_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	float V_4 = 0.0f;
	{
		Camera_t4157153871 * L_0 = Camera_get_main_m3643453163(NULL /*static, unused*/, /*hidden argument*/NULL);
		float L_1 = Camera_get_orthographicSize_m3903216845(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		float L_2 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Input_t1431474628_il2cpp_TypeInfo_var);
		float L_3 = Input_GetAxis_m4009438427(NULL /*static, unused*/, _stringLiteral1891098395, /*hidden argument*/NULL);
		float L_4 = __this->get_mouseSensitivity_8();
		V_0 = ((float)il2cpp_codegen_add((float)L_2, (float)((float)il2cpp_codegen_multiply((float)L_3, (float)((-L_4))))));
		float L_5 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t3464937446_il2cpp_TypeInfo_var);
		float L_6 = Mathf_Clamp_m3350697880(NULL /*static, unused*/, L_5, (1.0f), (10000.0f), /*hidden argument*/NULL);
		V_0 = L_6;
		Camera_t4157153871 * L_7 = Camera_get_main_m3643453163(NULL /*static, unused*/, /*hidden argument*/NULL);
		float L_8 = V_0;
		Camera_set_orthographicSize_m76971700(L_7, L_8, /*hidden argument*/NULL);
		V_1 = (40.0f);
		V_2 = (40.0f);
		bool L_9 = Input_GetButton_m2064261504(NULL /*static, unused*/, _stringLiteral3228161487, /*hidden argument*/NULL);
		if (!L_9)
		{
			goto IL_008b;
		}
	}
	{
		float L_10 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(Input_t1431474628_il2cpp_TypeInfo_var);
		float L_11 = Input_GetAxis_m4009438427(NULL /*static, unused*/, _stringLiteral674676282, /*hidden argument*/NULL);
		V_3 = ((float)il2cpp_codegen_multiply((float)((-L_10)), (float)L_11));
		float L_12 = V_2;
		float L_13 = Input_GetAxis_m4009438427(NULL /*static, unused*/, _stringLiteral3403559637, /*hidden argument*/NULL);
		V_4 = ((float)il2cpp_codegen_multiply((float)((-L_12)), (float)L_13));
		Camera_t4157153871 * L_14 = Camera_get_main_m3643453163(NULL /*static, unused*/, /*hidden argument*/NULL);
		Transform_t3600365921 * L_15 = Component_get_transform_m3162698980(L_14, /*hidden argument*/NULL);
		float L_16 = V_4;
		float L_17 = V_3;
		Transform_Translate_m3762500149(L_15, L_16, L_17, (0.0f), /*hidden argument*/NULL);
	}

IL_008b:
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
// System.Void SimulationXmlParser/<determineLight>c__AnonStorey0::.ctor()
extern "C"  void U3CdetermineLightU3Ec__AnonStorey0__ctor_m825618670 (U3CdetermineLightU3Ec__AnonStorey0_t2577330775 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean SimulationXmlParser/<determineLight>c__AnonStorey0::<>m__0(Junction)
extern "C"  bool U3CdetermineLightU3Ec__AnonStorey0_U3CU3Em__0_m4276751557 (U3CdetermineLightU3Ec__AnonStorey0_t2577330775 * __this, Junction_t651368113 * ___x0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CdetermineLightU3Ec__AnonStorey0_U3CU3Em__0_m4276751557_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Junction_t651368113 * L_0 = ___x0;
		String_t* L_1 = Junction_getId_m3477164959(L_0, /*hidden argument*/NULL);
		String_t* L_2 = __this->get_id_0();
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_3 = String_op_Equality_m920492651(NULL /*static, unused*/, L_1, L_2, /*hidden argument*/NULL);
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
// System.Void SimulationXmlParser/<determineLight>c__AnonStorey1::.ctor()
extern "C"  void U3CdetermineLightU3Ec__AnonStorey1__ctor_m772600046 (U3CdetermineLightU3Ec__AnonStorey1_t2577396311 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean SimulationXmlParser/<determineLight>c__AnonStorey1::<>m__0(Lane)
extern "C"  bool U3CdetermineLightU3Ec__AnonStorey1_U3CU3Em__0_m1983843048 (U3CdetermineLightU3Ec__AnonStorey1_t2577396311 * __this, Lane_t3796433026 * ___x0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CdetermineLightU3Ec__AnonStorey1_U3CU3Em__0_m1983843048_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Lane_t3796433026 * L_0 = ___x0;
		String_t* L_1 = Lane_getId_m2958478789(L_0, /*hidden argument*/NULL);
		String_t* L_2 = __this->get_l_0();
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_3 = String_op_Equality_m920492651(NULL /*static, unused*/, L_1, L_2, /*hidden argument*/NULL);
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
// System.Void Vehicle::.ctor()
extern "C"  void Vehicle__ctor_m2908657167 (Vehicle_t3024892526 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_m1579109191(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Vehicle::updateCarPosition(System.Single,System.Single,System.Single,System.Double)
extern "C"  void Vehicle_updateCarPosition_m1968675102 (Vehicle_t3024892526 * __this, float ___x0, float ___y1, float ___angle2, double ___speed3, const RuntimeMethod* method)
{
	{
		float L_0 = ___x0;
		float L_1 = ___y1;
		float L_2 = ___angle2;
		double L_3 = ___speed3;
		Vehicle_changeOrientation_m3989541646(__this, L_0, L_1, L_2, L_3, /*hidden argument*/NULL);
		float L_4 = ___x0;
		__this->set_x_3(L_4);
		float L_5 = ___y1;
		__this->set_y_4(L_5);
		float L_6 = ___angle2;
		__this->set_angle_5(L_6);
		double L_7 = ___speed3;
		__this->set_speed_6(L_7);
		__this->set_visited_7((bool)1);
		Transform_t3600365921 * L_8 = Component_get_transform_m3162698980(__this, /*hidden argument*/NULL);
		float L_9 = ___x0;
		float L_10 = ___y1;
		Vector3_t3722313464  L_11;
		memset(&L_11, 0, sizeof(L_11));
		Vector3__ctor_m3353183577((&L_11), L_9, (2.0f), L_10, /*hidden argument*/NULL);
		Transform_set_position_m3387557959(L_8, L_11, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Vehicle::changeOrientation(System.Single,System.Single,System.Single,System.Double)
extern "C"  void Vehicle_changeOrientation_m3989541646 (Vehicle_t3024892526 * __this, float ___x0, float ___y1, float ___angle2, double ___speed3, const RuntimeMethod* method)
{
	{
		float L_0 = __this->get_x_3();
		float L_1 = ___x0;
		if ((((float)L_0) == ((float)L_1)))
		{
			goto IL_0034;
		}
	}
	{
		float L_2 = __this->get_y_4();
		float L_3 = ___y1;
		if ((((float)L_2) == ((float)L_3)))
		{
			goto IL_0034;
		}
	}
	{
		Transform_t3600365921 * L_4 = Component_get_transform_m3162698980(__this, /*hidden argument*/NULL);
		float L_5 = ___x0;
		float L_6 = ___y1;
		Vector3_t3722313464  L_7;
		memset(&L_7, 0, sizeof(L_7));
		Vector3__ctor_m3353183577((&L_7), L_5, (2.0f), L_6, /*hidden argument*/NULL);
		Transform_LookAt_m3649447396(L_4, L_7, /*hidden argument*/NULL);
		goto IL_0089;
	}

IL_0034:
	{
		float L_8 = __this->get_x_3();
		float L_9 = ___x0;
		if ((((float)L_8) == ((float)L_9)))
		{
			goto IL_0061;
		}
	}
	{
		Transform_t3600365921 * L_10 = Component_get_transform_m3162698980(__this, /*hidden argument*/NULL);
		float L_11 = ___x0;
		float L_12 = __this->get_y_4();
		Vector3_t3722313464  L_13;
		memset(&L_13, 0, sizeof(L_13));
		Vector3__ctor_m3353183577((&L_13), L_11, (2.0f), L_12, /*hidden argument*/NULL);
		Transform_LookAt_m3649447396(L_10, L_13, /*hidden argument*/NULL);
		goto IL_0089;
	}

IL_0061:
	{
		float L_14 = __this->get_y_4();
		float L_15 = ___y1;
		if ((((float)L_14) == ((float)L_15)))
		{
			goto IL_0089;
		}
	}
	{
		Transform_t3600365921 * L_16 = Component_get_transform_m3162698980(__this, /*hidden argument*/NULL);
		float L_17 = __this->get_x_3();
		float L_18 = ___y1;
		Vector3_t3722313464  L_19;
		memset(&L_19, 0, sizeof(L_19));
		Vector3__ctor_m3353183577((&L_19), L_17, (2.0f), L_18, /*hidden argument*/NULL);
		Transform_LookAt_m3649447396(L_16, L_19, /*hidden argument*/NULL);
	}

IL_0089:
	{
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif

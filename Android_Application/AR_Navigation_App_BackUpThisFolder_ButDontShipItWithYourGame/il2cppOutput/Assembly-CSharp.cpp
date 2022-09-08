#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


struct VirtualActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1>
struct VirtualActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename R>
struct VirtualFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
struct GenericVirtualActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
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
template <typename T1>
struct InterfaceActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
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
template <typename R, typename T1, typename T2, typename T3>
struct InterfaceFuncInvoker3
{
	typedef R (*Func)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
	}
};
struct GenericInterfaceActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1>
struct InvokerActionInvoker1;
template <typename T1>
struct InvokerActionInvoker1<T1*>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1)
	{
		void* params[1] = { p1 };
		method->invoker_method(methodPtr, method, obj, params, NULL);
	}
};
template <typename T1, typename T2>
struct InvokerActionInvoker2;
template <typename T1, typename T2>
struct InvokerActionInvoker2<T1*, T2*>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2* p2)
	{
		void* params[2] = { p1, p2 };
		method->invoker_method(methodPtr, method, obj, params, NULL);
	}
};

// System.Action`1<UnityEngine.XR.ARFoundation.ARCameraFrameEventArgs>
struct Action_1_t54327BAFA15E24E002EFAE48D1AFFC020D368735;
// System.Action`1<UnityEngine.XR.ARFoundation.ARSessionStateChangedEventArgs>
struct Action_1_t325C602D999E964DB72210E493635E83F8D6CE68;
// System.Action`1<UnityEngine.XR.ARFoundation.ARTrackablesParentTransformChangedEventArgs>
struct Action_1_t2096FCE7327B89C5101BFB38155839F3166605FB;
// System.Action`1<UnityEngine.AsyncOperation>
struct Action_1_tE8693FF0E67CDBA52BAFB211BFF1844D076ABAFB;
// System.Action`1<System.Int32>
struct Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404;
// System.Action`1<System.Object>
struct Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87;
// System.Action`1<ZXing.Result>
struct Action_1_t9C15D36035E0EC25EC6E91220DFFEA5436DBBFC6;
// System.Action`1<ZXing.ResultPoint>
struct Action_1_t70238D061BFFA7D49D2FF0ED8B4054E39AAE50BF;
// System.Action`1<TMPro.TMP_TextInfo>
struct Action_1_tB93AB717F9D419A1BEC832FF76E74EAA32184CC1;
// System.Action`2<System.Int32,System.Int32>
struct Action_2_tD7438462601D3939500ED67463331FE00CFFBDB8;
// System.Action`2<System.Int32,System.Object>
struct Action_2_tF55503802357CB8A9E95ED4B00CEEEE6BDEC9166;
// System.Action`2<System.Int32,System.String>
struct Action_2_t6AAF2E215E74E16A4EEF0A0749A4A325D99F5BA6;
// System.Comparison`1<UnityEngine.EventSystems.RaycastResult>
struct Comparison_1_t9FCAC8C8CE160A96C5AAD2DE1D353DCE8A2FEEFC;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>
struct Dictionary_2_tABE19B9C5C52F1DE14F0D3287B2696E7D7419180;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Object>
struct Dictionary_2_tA75D1125AC9BE8F005BA9B868B373398E643C907;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Threading.Tasks.Task>
struct Dictionary_2_t403063CE4960B4F46C688912237C6A27E550FF55;
// System.Collections.Generic.Dictionary`2<System.Int32,WebGLSupport.WebGLInput>
struct Dictionary_2_t02972806B8AE7773FA4016F73A171E1AEAB527C6;
// System.Collections.Generic.Dictionary`2<System.Int32,WebGLSupport.WebGLInputMobile>
struct Dictionary_2_tCC64C94C8DF1B73C6C7A4649650F9A9C33BF7925;
// System.Func`1<System.Threading.Tasks.Task/ContingentProperties>
struct Func_1_tD59A12717D79BFB403BF973694B1BE5B85474BD1;
// System.Func`2<ZXing.LuminanceSource,ZXing.Binarizer>
struct Func_2_t614D64FDB2EE48EB260F302A6131FFD71CE502F1;
// System.Func`2<System.Object,System.Object>
struct Func_2_tACBF5A1656250800CE861707354491F0611F6624;
// System.Func`2<TargetFacade,TMPro.TMP_Dropdown/OptionData>
struct Func_2_t3D46D586EBA225BB058345919E08F21E6E068C13;
// System.Func`3<System.Int32,System.String,TMPro.TMP_FontAsset>
struct Func_3_tC721DF8CDD07ED66A4833A19A2ED2302608C906C;
// System.Func`3<System.Int32,System.String,TMPro.TMP_SpriteAsset>
struct Func_3_t6F6D9932638EA1A5A45303C6626C818C25D164E5;
// System.Func`4<UnityEngine.Color32[],System.Int32,System.Int32,ZXing.LuminanceSource>
struct Func_4_t40AE4BEC39AB141DFFA74DE46D7D5D8DA2A28102;
// System.Func`5<System.Byte[],System.Int32,System.Int32,ZXing.RGBLuminanceSource/BitmapFormat,ZXing.LuminanceSource>
struct Func_5_t805EE5CC6AD8843F029E475B624A67448B7A7364;
// System.Collections.Generic.IDictionary`2<ZXing.ResultMetadataType,System.Object>
struct IDictionary_2_t3B68EF519427E7FE95A7242758F0B03628B9AA64;
// System.Collections.Generic.IEnumerable`1<System.Object>
struct IEnumerable_1_tF95C9E01A913DD50575531C8305932628663D9E9;
// System.Collections.Generic.IEnumerable`1<Target>
struct IEnumerable_1_t8A1655C83646F83C546E94928B0786709A780996;
// System.Collections.Generic.IEnumerable`1<TargetFacade>
struct IEnumerable_1_tF3B8FD5596FA13C92B5ED485F4835E2D2D158A6D;
// System.Collections.Generic.IEnumerable`1<TMPro.TMP_Dropdown/OptionData>
struct IEnumerable_1_tA6A98529A099A09F113B700F78085F2959AE4BB6;
// System.Collections.Generic.IEqualityComparer`1<System.Int32>
struct IEqualityComparer_1_tDBFC8496F14612776AF930DBF84AFE7D06D1F0E9;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Int32,WebGLSupport.WebGLInput>
struct KeyCollection_t80681E6F048AA44A057A7140CD872AAA36DAD0E2;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Int32,WebGLSupport.WebGLInputMobile>
struct KeyCollection_tE27B5446596348F9D23A26C12F4641E58CB9BF4E;
// System.Collections.Generic.List`1<UnityEngine.XR.ARFoundation.ARTextureInfo>
struct List_1_tBEE41A3C84ED348850866AD76B66E9D9B19767FF;
// System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseInputModule>
struct List_1_tA5BDE435C735A082941CD33D212F97F4AE9FA55F;
// System.Collections.Generic.List`1<UnityEngine.CanvasGroup>
struct List_1_t2CDCA768E7F493F5EDEBC75AEB200FD621354E35;
// System.Collections.Generic.List`1<UnityEngine.EventSystems.EventSystem>
struct List_1_tF2FE88545EFEC788CAAE6C74EC2F78E937FCCAC3;
// System.Collections.Generic.List`1<UnityEngine.GameObject>
struct List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B;
// System.Collections.Generic.List`1<System.Int32>
struct List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73;
// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D;
// System.Collections.Generic.List`1<System.String>
struct List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD;
// System.Collections.Generic.List`1<Target>
struct List_1_tFB3A1D83FA1EFCD81B10C01A5395798068BCE79A;
// System.Collections.Generic.List`1<TargetFacade>
struct List_1_tD7576C87B68BC6CE723331751C2CE61223447FBE;
// System.Collections.Generic.List`1<UnityEngine.Texture2D>
struct List_1_t0F231C3F13EBA1FF9081BD61489D01AA3CBE59D4;
// System.Collections.Generic.List`1<WebGLSupport.WebGLInput>
struct List_1_tDD7B1080B0F1C545C5FBF897D24700DEAD1AE4A4;
// System.Collections.Generic.List`1<UnityEngine.XR.ARSubsystems.XRCameraSubsystem>
struct List_1_t1C988AEFF3BCCFEF103EACA601923CD56DBB593C;
// System.Collections.Generic.List`1<UnityEngine.XR.ARSubsystems.XRCameraSubsystemDescriptor>
struct List_1_tB62E7DBB1A743CF013D1542F79F59C2BB105B7AC;
// System.Collections.Generic.List`1<UnityEngine.XR.ARSubsystems.XRSessionSubsystem>
struct List_1_t3903923EFB501C3A0672A0E60558673B85435D8E;
// System.Collections.Generic.List`1<UnityEngine.XR.ARSubsystems.XRSessionSubsystemDescriptor>
struct List_1_tC86363A0A1DF8199DB382C6CDB5A1254F8660A34;
// System.Collections.Generic.List`1<TMPro.TMP_Dropdown/DropdownItem>
struct List_1_tA7EEECF976A6B4957450A4D235070C9324ED1A97;
// System.Collections.Generic.List`1<TMPro.TMP_Dropdown/OptionData>
struct List_1_tCADFA900711C24701A9C70EE674B91FC45D42A52;
// System.Predicate`1<System.Object>
struct Predicate_1_t8342C85FF4E41CD1F7024AC0CDC3E5312A32CB12;
// System.Predicate`1<System.Threading.Tasks.Task>
struct Predicate_1_t7F48518B008C1472339EEEBABA3DE203FE1F26ED;
// ARWT.Core.Singleton`1<ARWT.Marker.DetectionManager>
struct Singleton_1_t30651B76710BA3532D2E3A14E07D5BDBA4E16542;
// ARWT.Core.Singleton`1<System.Object>
struct Singleton_1_tF8B1281734A623264A4A9B8B886ACF5FAD594222;
// System.Threading.Tasks.Task`1<System.Object>
struct Task_1_t0C4CD3A5BB93A184420D73218644C56C70FDA7E2;
// System.Threading.Tasks.Task`1<System.String>
struct Task_1_t3D7638C82ED289AF156EDBAE76842D8DF4C4A9E0;
// TMPro.TweenRunner`1<TMPro.FloatTween>
struct TweenRunner_1_tF277B20625C8B1939DC85508C4679C690757395E;
// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween>
struct TweenRunner_1_t5BB0582F926E75E2FE795492679A6CF55A4B4BC4;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,WebGLSupport.WebGLInput>
struct ValueCollection_tD01FC0616347ED1109584F9DDD3FDFFEB7C69612;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,WebGLSupport.WebGLInputMobile>
struct ValueCollection_t55F1E982BF7FD86CBA6E3C27AA51407E71B19594;
// System.Collections.Generic.Dictionary`2/Entry<System.Int32,WebGLSupport.WebGLInput>[]
struct EntryU5BU5D_t70BBD523732DDA633701CE29D9C4B38C8A615E60;
// System.Collections.Generic.Dictionary`2/Entry<System.Int32,WebGLSupport.WebGLInputMobile>[]
struct EntryU5BU5D_t5ECC54796CEA4ACE46BFCEEA0E53AAEB7F1609A3;
// TMPro.TMP_TextProcessingStack`1<System.Int32>[]
struct TMP_TextProcessingStack_1U5BU5D_t08293E0BB072311BB96170F351D1083BCA97B9B2;
// System.Byte[]
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
// System.Char[]
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
// UnityEngine.Color32[]
struct Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259;
// System.Decimal[]
struct DecimalU5BU5D_t93BA0C88FA80728F73B792EE1A5199D0C060B615;
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
// TMPro.FontWeight[]
struct FontWeightU5BU5D_t2A406B5BAB0DD0F06E7F1773DB062E4AF98067BA;
// UnityEngine.GameObject[]
struct GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF;
// TMPro.HighlightState[]
struct HighlightStateU5BU5D_tA878A0AF1F4F52882ACD29515AADC277EE135622;
// TMPro.HorizontalAlignmentOptions[]
struct HorizontalAlignmentOptionsU5BU5D_t4D185662282BFB910D8B9A8199E91578E9422658;
// System.Int32[]
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
// System.IntPtr[]
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
// UnityEngine.Material[]
struct MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D;
// TMPro.MaterialReference[]
struct MaterialReferenceU5BU5D_t7491D335AB3E3E13CE9C0F5E931F396F6A02E1F2;
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
// ZXing.ResultPoint[]
struct ResultPointU5BU5D_t98ED51EB991985ED1768D88FD09F826256CB6CB0;
// TMPro.RichTextTagAttribute[]
struct RichTextTagAttributeU5BU5D_t5816316EFD8F59DBC30B9F88E15828C564E47B6D;
// UnityEngine.UI.Selectable[]
struct SelectableU5BU5D_t4160E135F02A40F75A63F787D36F31FEC6FE91A9;
// System.Single[]
struct SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
// System.String[]
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
// TMPro.TMP_CharacterInfo[]
struct TMP_CharacterInfoU5BU5D_t297D56FCF66DAA99D8FEA7C30F9F3926902C5B99;
// TMPro.TMP_ColorGradient[]
struct TMP_ColorGradientU5BU5D_t2F65E8C42F268DFF33BB1392D94BCF5B5087308A;
// Target[]
struct TargetU5BU5D_t3617959FFC066149C517739390E51D1F9E793E6B;
// TargetFacade[]
struct TargetFacadeU5BU5D_tA07775D25A314998C9ED87C1F8C564199F9B4BC6;
// UnityEngine.Transform[]
struct TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24;
// System.Type[]
struct TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB;
// UnityEngine.UIVertex[]
struct UIVertexU5BU5D_tBC532486B45D071A520751A90E819C77BA4E3D2F;
// System.UInt32[]
struct UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA;
// UnityEngine.Vector2[]
struct Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C;
// WebGLSupport.WebGLInput[]
struct WebGLInputU5BU5D_tC813567C9E3C72CC3C01E5923ED9146279CD1484;
// TMPro.WordWrapState[]
struct WordWrapStateU5BU5D_t473D59C9DBCC949CE72EF1EB471CBA152A6CEAC9;
// TMPro.TMP_Dropdown/OptionData[]
struct OptionDataU5BU5D_tEB78063B7582A72D41E99569EB93D519AC75F615;
// TMPro.TMP_Text/UnicodeChar[]
struct UnicodeCharU5BU5D_t67F27D09F8EB28D2C42DFF16FE60054F157012F5;
// UnityEngine.XR.ARFoundation.ARCameraManager
struct ARCameraManager_t6E957EA922911B8447D086D9FB1F860EC967BD9F;
// UnityEngine.XR.ARFoundation.ARSession
struct ARSession_t13374A44A01F2C6D90578F93E0F0DA2482BE3014;
// UnityEngine.XR.ARFoundation.ARSessionOrigin
struct ARSessionOrigin_tE7B28A1A19500BCC02711397A19E330425830BC3;
// System.Action
struct Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07;
// UnityEngine.UI.AnimationTriggers
struct AnimationTriggers_tA0DC06F89C5280C6DD972F6F4C8A56D7F4F79074;
// System.AsyncCallback
struct AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C;
// ZXing.BarcodeReader
struct BarcodeReader_t3750E77E97439AA095CFBB5FD3B791E4349885DB;
// UnityEngine.EventSystems.BaseEventData
struct BaseEventData_tE03A848325C0AE8E76C6CA15FD86395EBF83364F;
// UnityEngine.EventSystems.BaseInputModule
struct BaseInputModule_tF3B7C22AF1419B2AC9ECE6589357DC1B88ED96B1;
// UnityEngine.EventSystems.BaseRaycaster
struct BaseRaycaster_t7DC8158FD3CA0193455344379DD5FF7CD5F1F832;
// UnityEngine.Behaviour
struct Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA;
// System.Reflection.Binder
struct Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235;
// System.Byte
struct Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3;
// UnityEngine.Camera
struct Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184;
// ARWT.Core.CameraController
struct CameraController_t0B540EC84654F847C56C1CA21F47B421EEAFD4B5;
// UnityEngine.Canvas
struct Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26;
// UnityEngine.CanvasRenderer
struct CanvasRenderer_tAB9A55A976C4E3B2B37D0CE5616E5685A8B43860;
// UnityEngine.Networking.CertificateHandler
struct CertificateHandler_t148B524FA5DB39F3ABADB181CD420FC505C33804;
// CheckAdminPanel
struct CheckAdminPanel_t26E243FA4203846AD328049A026A939B9C97477C;
// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3;
// System.Threading.ContextCallback
struct ContextCallback_tE8AFBDBFCC040FDA8DA8C1EEFE9BD66B16BDA007;
// UnityEngine.Coroutine
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B;
// ZXing.Common.DecodingOptions
struct DecodingOptions_t062639B46A59B4B5ABA29D42F15F248D1BC771DB;
// System.Delegate
struct Delegate_t;
// System.DelegateData
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
// ARWT.Marker.DetectionManager
struct DetectionManager_t070257CC1E0A2BBC84FC7DD8960C34BF8A13DA16;
// UnityEngine.Networking.DownloadHandler
struct DownloadHandler_t1B56C7D3F65D97A1E4B566A14A1E783EA8AE4EBB;
// UnityEngine.Networking.DownloadHandlerBuffer
struct DownloadHandlerBuffer_t34C626F6513FA9A44FDDDEE85455CF2CD9DA5974;
// System.Enum
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2;
// UnityEngine.Event
struct Event_tEBC6F24B56CE22B9C9AD1AC6C24A6B83BC3860CB;
// UnityEngine.EventSystems.EventSystem
struct EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707;
// System.Exception
struct Exception_t;
// ARWT.Core.FPSDisplay
struct FPSDisplay_tB19E85610E87C89C0B0DD56FCD19F90DE901A1F9;
// UnityEngine.UI.FontData
struct FontData_tB8E562846C6CB59C43260F69AE346B9BF3157224;
// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F;
// ARWT.Marker.GenericController
struct GenericController_t2AD20ABC5479AD3A29E145A09CE1B5784E92BF10;
// UnityEngine.UI.Graphic
struct Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931;
// System.IAsyncResult
struct IAsyncResult_t7B9B5A0ECB35DCEC31B8A8122C37D687369253B5;
// System.Runtime.CompilerServices.IAsyncStateMachine
struct IAsyncStateMachine_t0680C7F905C553076B552D5A1A6E39E2F0F36AA2;
// ZXing.IBarcodeReader
struct IBarcodeReader_t7C5A059E4DA3A0B4F7FA68ABD7131229C8DFF1AB;
// System.Collections.IDictionary
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
// System.Collections.IEnumerator
struct IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA;
// WebGLSupport.IInputField
struct IInputField_t04870BDDFD3EBDFA93CB0E713DE6829FC99BFF65;
// UnityEngine.EventSystems.IScrollHandler
struct IScrollHandler_t762CB73017D561E11CF6759ED9FD8C9F24B3D13F;
// TMPro.ITextPreprocessor
struct ITextPreprocessor_tDBB49C8B68D7B80E8D233B9D9666C43981EFAAB9;
// UnityEngine.UI.Image
struct Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E;
// UnityEngine.UI.InputField
struct InputField_tABEA115F23FBD374EBE80D4FAC1D15BD6E37A140;
// UnityEngine.UI.LayoutElement
struct LayoutElement_tB1F24CC11AF4AA87015C8D8EE06D22349C5BF40A;
// UnityEngine.UI.LayoutGroup
struct LayoutGroup_t32417833C700E77EDFA7C20034DAFD26604E05CE;
// UnityEngine.LineRenderer
struct LineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D;
// ARWT.Marker.MarkerInfo
struct MarkerInfo_tF1D3B769CFABECC5F1524196971229B99448B57F;
// UnityEngine.Material
struct Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3;
// System.Reflection.MemberFilter
struct MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553;
// UnityEngine.Mesh
struct Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71;
// ARWT.Marker.MultiMarkerController
struct MultiMarkerController_tF884F15CCA4084E58B5A2D87001B42041C0927D4;
// UnityEngine.AI.NavMeshPath
struct NavMeshPath_tC77ABF4A25FC0F0A94E8A70E304E114FE690A3A7;
// NavigationController
struct NavigationController_t70EC9C7C9A12D38AD5902657C952B7B5B09985B8;
// System.NotSupportedException
struct NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A;
// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C;
// PasswordController
struct PasswordController_t9127B978A2ACFF05C4C8A8591A2F0339EC9FB0D8;
// UnityEngine.EventSystems.PointerEventData
struct PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB;
// ARWT.Core.PostBuildActions
struct PostBuildActions_t9E7519FD8BFA04819D698562F818BBE611E8218A;
// PulsingLine
struct PulsingLine_tBE3A736CB8C97095F7E4B670E40E849D2D1E40AD;
// QrCodeRecenter
struct QrCodeRecenter_t48659C9EF1C81DDBDB76ECBB3F4181E7C175D365;
// ZXing.Reader
struct Reader_t1A9C7CADF7A2C1EDCB670DAA63F259E7B798FE4C;
// WebGLSupport.Detail.RebuildChecker
struct RebuildChecker_t655BE8F346B22370339BAE56B91783950CAAC807;
// UnityEngine.UI.RectMask2D
struct RectMask2D_tACF92BE999C791A665BD1ADEABF5BCEB82846670;
// UnityEngine.RectTransform
struct RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5;
// UnityEngine.RenderTexture
struct RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27;
// UnityEngine.Renderer
struct Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF;
// ZXing.Result
struct Result_tF578DE3ECC8EB51CFB66605B8ADCD433C837EBAF;
// ARWT.Example.Rotator
struct Rotator_t0E916AEA08E506FFFFABEA3166AA92404DACB657;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
// UnityEngine.UI.Scrollbar
struct Scrollbar_t7CDC9B956698D9385A11E4C12964CD51477072C3;
// UnityEngine.UI.Selectable
struct Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712;
// System.Threading.SendOrPostCallback
struct SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E;
// SetUiText
struct SetUiText_t138DAB61BB52772194BAD42D32248EE7C549BEC9;
// UnityEngine.UI.Slider
struct Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F;
// UnityEngine.Sprite
struct Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99;
// System.Threading.Tasks.StackGuard
struct StackGuard_tACE063A1B7374BDF4AD472DE4585D05AD8745352;
// System.String
struct String_t;
// System.Threading.SynchronizationContext
struct SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0;
// TMPro.TMP_Character
struct TMP_Character_t7D37A55EF1A9FF6D0BFE6D50E86A00F80E7FAF35;
// TMPro.TMP_ColorGradient
struct TMP_ColorGradient_t17B51752B4E9499A1FF7D875DCEC1D15A0F4AEBB;
// TMPro.TMP_Dropdown
struct TMP_Dropdown_t73B37BFDA0D005451C7B750938AFB1748E5EA504;
// TMPro.TMP_FontAsset
struct TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160;
// TMPro.TMP_InputField
struct TMP_InputField_t3488E0EE8C3DF56C6A328EC95D1BEEA2DF4A7D5F;
// TMPro.TMP_InputValidator
struct TMP_InputValidator_t3429AF61284AE19180C3FB81C0C7D2F90165EA98;
// TMPro.TMP_ScrollbarEventHandler
struct TMP_ScrollbarEventHandler_t84C389ED6800977DAEA8C025E18C9F3321888F4D;
// TMPro.TMP_SpriteAnimator
struct TMP_SpriteAnimator_t2E0F016A61CA343E3222FF51E7CF0E53F9F256E4;
// TMPro.TMP_SpriteAsset
struct TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39;
// TMPro.TMP_Style
struct TMP_Style_tA9E5B1B35EBFE24EF980CEA03251B638282E120C;
// TMPro.TMP_StyleSheet
struct TMP_StyleSheet_t70C71699F5CB2D855C361DBB78A44C901236C859;
// TMPro.TMP_Text
struct TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9;
// TMPro.TMP_TextElement
struct TMP_TextElement_t262A55214F712D4274485ABE5676E5254B84D0A5;
// TMPro.TMP_TextInfo
struct TMP_TextInfo_t09A8E906329422C3F0C059876801DD695B8D524D;
// Target
struct Target_t5E0C0864CEA07701AF639C0AFAC19928DB873FC5;
// TargetFacade
struct TargetFacade_tAA52A697AACAC6BBC707F8B97B5975CD124D9CB1;
// TargetHandler
struct TargetHandler_t26EBF84B13B13596F2259A92408AE301B247E751;
// TargetWrapper
struct TargetWrapper_t7CCA6EA84DFD8C48A2F98E96C300B0EE111C1DFE;
// System.Threading.Tasks.Task
struct Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572;
// System.Threading.Tasks.TaskFactory
struct TaskFactory_tF781BD37BE23917412AD83424D1497C7C1509DF0;
// System.Threading.Tasks.TaskScheduler
struct TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E;
// UnityEngine.UI.Text
struct Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62;
// UnityEngine.TextGenerator
struct TextGenerator_t85D00417640A53953556C01F9D4E7DDE1ABD8FEC;
// UnityEngine.Texture
struct Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700;
// UnityEngine.Texture2D
struct Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4;
// ARWT.Marker.TextureScaler
struct TextureScaler_t20DD1B353B1A0E57F30574F69D69784580378E32;
// UnityEngine.TouchScreenKeyboard
struct TouchScreenKeyboard_tE87B78A3DAED69816B44C99270A734682E093E7A;
// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1;
// System.Type
struct Type_t;
// ARWT.Marker.UIHandler
struct UIHandler_t8B96B7F863FD3DA2D297F60EE6AC384195DE5469;
// ARWT.Marker.UIScaler
struct UIScaler_t2B477AD4FC6FDD2F13458D97C5C5663890E528D5;
// UnityEngine.Events.UnityAction
struct UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7;
// UnityEngine.Networking.UnityWebRequest
struct UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F;
// UnityEngine.Networking.UnityWebRequestAsyncOperation
struct UnityWebRequestAsyncOperation_t14BE94558FF3A2CFC2EFBE2511A3A88252042B8C;
// UnityEngine.Networking.UploadHandler
struct UploadHandler_t7E504B1A83346248A0C8C4AF73A893226CB83EF6;
// System.Uri
struct Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E;
// UnityEngine.UI.VertexHelper
struct VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// System.Threading.WaitCallback
struct WaitCallback_tFB2C7FD58D024BBC2B0333DC7A4CB63B8DEBD5D3;
// UnityEngine.WaitForSecondsRealtime
struct WaitForSecondsRealtime_tA8CE0AAB4B0C872B843E7973637037D17682BA01;
// WebGLSupport.WebGLInput
struct WebGLInput_t20A7ED221656A06B7688C4010D4E7E8E74C4CE16;
// WebGLSupport.WebGLInputMobile
struct WebGLInputMobile_t98BD6DEA2871F796049970F99FBBFCBACF318ACF;
// WebGLSupport.WebGLInputMobilePlugin
struct WebGLInputMobilePlugin_t4EFA8014C22823D359F9C025EFF2D1F5E802A26A;
// WebGLSupport.WebGLInputPlugin
struct WebGLInputPlugin_tB11B29E0162074CE67EA0AF5FC9A4247F32DE4B1;
// WebGLSupport.WrappedInputField
struct WrappedInputField_tA9A06E487260394507CAA4C83E9E1E0239B4B6AE;
// WebGLSupport.WrappedTMPInputField
struct WrappedTMPInputField_t5812136E49D051CA7D0F72155950CB226F87247F;
// UnityEngine.XR.ARSubsystems.XRCameraSubsystem
struct XRCameraSubsystem_t1F15E4BAEF03223F63AB57E49D1B5DE06749D140;
// UnityEngine.XR.ARSubsystems.XRSessionSubsystem
struct XRSessionSubsystem_t1E6E6CD0C279BA8BC4E4ED94E539552036B9C399;
// UnityEngine.Camera/CameraCallback
struct CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD;
// UnityEngine.Canvas/WillRenderCanvases
struct WillRenderCanvases_tA4A6E66DBA797DCB45B995DBA449A9D1D80D0FBC;
// ARWT.Marker.DetectionManager/MarkerDetection
struct MarkerDetection_tB2B8E475144ED5AE5A0BAFC42F3F79C6E57A9DA9;
// UnityEngine.UI.InputField/EndEditEvent
struct EndEditEvent_t946A962BA13CF60BB0BE7AD091DA041FD788E655;
// UnityEngine.UI.InputField/OnChangeEvent
struct OnChangeEvent_tE4829F88300B0E0E0D1B78B453AF25FC1AA55E2F;
// UnityEngine.UI.InputField/OnValidateInput
struct OnValidateInput_t48916A4E9C9FD6204401FF0808C2B7A93D73418B;
// UnityEngine.UI.InputField/SubmitEvent
struct SubmitEvent_t1E0F5A2AB28D0DB55AE18E8DA99147D86492DD5D;
// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent
struct CullStateChangedEvent_t6073CD0D951EC1256BF74B8F9107D68FC89B99B8;
// UnityEngine.RectTransform/ReapplyDrivenProperties
struct ReapplyDrivenProperties_t3482EA130A01FF7EE2EEFE37F66A5215D08CFE24;
// UnityEngine.UI.Slider/SliderEvent
struct SliderEvent_t92A82EF6C62E15AF92B640FE2D960E877E8C6555;
// TMPro.TMP_Dropdown/DropdownEvent
struct DropdownEvent_tFD4609E80240BC887A6D31F9F3C252A8A6843E91;
// TMPro.TMP_Dropdown/OptionData
struct OptionData_tFDFBCB4A5FB860E95AE46FDAC112DB4140A8525E;
// TMPro.TMP_Dropdown/OptionDataList
struct OptionDataList_tF66EA4801BFA499F010E6EFF89ED760BF4F0BEE1;
// TMPro.TMP_InputField/OnChangeEvent
struct OnChangeEvent_tDBB13012ABF81899E4DFDD82258EB7E9BB7A9F1D;
// TMPro.TMP_InputField/OnValidateInput
struct OnValidateInput_t88ECDC5C12A807AF2A5761369563B0FAA6A25530;
// TMPro.TMP_InputField/SelectionEvent
struct SelectionEvent_t8FC75B869F70C9F0BF13390AD0237AD310511119;
// TMPro.TMP_InputField/SubmitEvent
struct SubmitEvent_tF7E2843B6A79D94B8EEEA259707F77BD1773B500;
// TMPro.TMP_InputField/TextSelectionEvent
struct TextSelectionEvent_t6C496DAA6DAF01754C27C58A94A5FBA562BA9401;
// TMPro.TMP_InputField/TouchScreenKeyboardEvent
struct TouchScreenKeyboardEvent_tB9BEBEF5D6F2B52547EF3861FF437AC25BC06AF1;
// TargetHandler/<>c
struct U3CU3Ec_t70AD3AFEE444A985AD7890EC330EE5AF8DAF2A47;
// TargetHandler/<sendjson>d__23
struct U3CsendjsonU3Ed__23_tE0AAF5BB9AB2FBB6848F337C0DD6B12894900758;
// System.Threading.Tasks.Task/ContingentProperties
struct ContingentProperties_t3FA59480914505CEA917B1002EC675F29D0CB540;
// WebGLSupport.WebGLInput/<Blur>d__21
struct U3CBlurU3Ed__21_t758693716AB460F60B691592D89A9DD3AE6F69DE;
// WebGLSupport.WebGLInputMobile/<ExecFocusOut>d__7
struct U3CExecFocusOutU3Ed__7_tBECE39214FAE8EC1642050ADC8BABE4CD5E1C842;
// WebGLSupport.WebGLInputMobile/<RegisterOnFocusOut>d__5
struct U3CRegisterOnFocusOutU3Ed__5_tFB92D52720A36A315F2C7494680146EDAB93E2B8;
// WebGLSupport.WebGLWindow/<>c
struct U3CU3Ec_tD04EC24521C276620AF53A1530384866DCB3622D;
// UnityEngine.XR.ARSubsystems.XRCpuImage/Api
struct Api_tAE210A8378E537AFD1FA4B99562229CE842377FB;
// UnityEngine.XR.ARSubsystems.XRCpuImage/Api/OnImageRequestCompleteDelegate
struct OnImageRequestCompleteDelegate_tCD7B27E0C5D492FB984F05869FB527372CB70995;

IL2CPP_EXTERN_C RuntimeClass* Action_1_t54327BAFA15E24E002EFAE48D1AFFC020D368735_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Action_2_t6AAF2E215E74E16A4EEF0A0749A4A325D99F5BA6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Action_2_tD7438462601D3939500ED67463331FE00CFFBDB8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AsyncTaskMethodBuilder_1_tA28B0962049DC249BEC0054E2394B1962E28E90E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* BarcodeReader_t3750E77E97439AA095CFBB5FD3B791E4349885DB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CharacterValidation_t14B82768014D219C74BC91657D6B013A0CAFF2B9_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CharacterValidation_t5DAA94F9780B40CCF419821363E89B30E2EF7380_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ContentType_t7E546E516F92E955324D479BB71667931F1A7956_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ContentType_tC6315BB238AB8B34EEAC496ECDA3F92692694276_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DetectionManager_t070257CC1E0A2BBC84FC7DD8960C34BF8A13DA16_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_t02972806B8AE7773FA4016F73A171E1AEAB527C6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_tCC64C94C8DF1B73C6C7A4649650F9A9C33BF7925_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DownloadHandlerBuffer_t34C626F6513FA9A44FDDDEE85455CF2CD9DA5974_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Exception_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Func_2_t3D46D586EBA225BB058345919E08F21E6E068C13_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GameObject_t76FEDD663AB33C991A9C9A23129337651094216F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Graphics_t99CD970FFEA58171C70F54DF0C06D315BD452F2C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IBarcodeReader_t7C5A059E4DA3A0B4F7FA68ABD7131229C8DFF1AB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IInputField_t04870BDDFD3EBDFA93CB0E713DE6829FC99BFF65_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InputType_t036D7DF2772E6C8C7DB969C7501F6513339572D4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InputType_tF2224DC7469AAC22BF653D00F6E29F8739175DA1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* LineType_t004C9AD8E9A2D86ABDE2F2F55F09446F6E46AF6E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* LineType_tC4DBAA8629361B209A2BA0625320B24FC4566B6B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tD7576C87B68BC6CE723331751C2CE61223447FBE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tDD7B1080B0F1C545C5FBF897D24700DEAD1AE4A4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MarkerDetection_tB2B8E475144ED5AE5A0BAFC42F3F79C6E57A9DA9_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MarkerInfo_tF1D3B769CFABECC5F1524196971229B99448B57F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NavMeshPath_tC77ABF4A25FC0F0A94E8A70E304E114FE690A3A7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* OptionData_tFDFBCB4A5FB860E95AE46FDAC112DB4140A8525E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RebuildChecker_t655BE8F346B22370339BAE56B91783950CAAC807_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Target_t5E0C0864CEA07701AF639C0AFAC19928DB873FC5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Type_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CBlurU3Ed__21_t758693716AB460F60B691592D89A9DD3AE6F69DE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CExecFocusOutU3Ed__7_tBECE39214FAE8EC1642050ADC8BABE4CD5E1C842_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CRegisterOnFocusOutU3Ed__5_tFB92D52720A36A315F2C7494680146EDAB93E2B8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_t70AD3AFEE444A985AD7890EC330EE5AF8DAF2A47_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_tD04EC24521C276620AF53A1530384866DCB3622D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CsendjsonU3Ed__23_tE0AAF5BB9AB2FBB6848F337C0DD6B12894900758_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WebGLInputMobile_t98BD6DEA2871F796049970F99FBBFCBACF318ACF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WebGLInputTabFocus_tE6406DD8FFC4C0341C1B9306BDBD56BFA68FE40E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WebGLInput_t20A7ED221656A06B7688C4010D4E7E8E74C4CE16_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WebGLWindow_t360F95487A76FFDFAD43C992ACEBF9CF8FA4D3A3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WrappedInputField_tA9A06E487260394507CAA4C83E9E1E0239B4B6AE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WrappedTMPInputField_t5812136E49D051CA7D0F72155950CB226F87247F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral06AD5CB9EB9AF73D2A081A90D8F6591C4B23494A;
IL2CPP_EXTERN_C String_t* _stringLiteral0C3C6829C3CCF8020C6AC45B87963ADC095CD44A;
IL2CPP_EXTERN_C String_t* _stringLiteral0D826BE62D2522578D59617EC851B24D0305671F;
IL2CPP_EXTERN_C String_t* _stringLiteral11B9C4F53A6E5D46679127787C65F0C3AEF7700C;
IL2CPP_EXTERN_C String_t* _stringLiteral20C69ED804A96A83021B0D5C0514DAB63AA7FB2D;
IL2CPP_EXTERN_C String_t* _stringLiteral2F2416BA3BCF5DB18362CAD20CA90089515ABE0F;
IL2CPP_EXTERN_C String_t* _stringLiteral2F9DC8E454E50AAE6DCECBAE4DADB483EC854490;
IL2CPP_EXTERN_C String_t* _stringLiteral2FC6981F2D59F338DA48E1FC23ED6372B90BF38D;
IL2CPP_EXTERN_C String_t* _stringLiteral3B89A1F5430D44B5B62ABF2C78062B5AFF891013;
IL2CPP_EXTERN_C String_t* _stringLiteral4036CB682368F57A752F1AE948975DAB7499EACE;
IL2CPP_EXTERN_C String_t* _stringLiteral576325BB8631FD6AFAFD211086427229DE95E8F8;
IL2CPP_EXTERN_C String_t* _stringLiteral5B58EBE31E594BF8FA4BEA3CD075473149322B18;
IL2CPP_EXTERN_C String_t* _stringLiteral635EA7D63954EE84193479144A5CBEE2D129A2D3;
IL2CPP_EXTERN_C String_t* _stringLiteral64058CC688A96A90239811EF06C9D20DB0499C3E;
IL2CPP_EXTERN_C String_t* _stringLiteral6790F5A313E4F3D7D9EE743046C665DE8D5FE0F2;
IL2CPP_EXTERN_C String_t* _stringLiteral67C7BC5F8233F1CBB6671616A06491BD8980DD72;
IL2CPP_EXTERN_C String_t* _stringLiteral689CC422ADFE701983B544F0AFD66CD1B901A48D;
IL2CPP_EXTERN_C String_t* _stringLiteral73FD286EB9001C752356E4523B7876C96C5EA312;
IL2CPP_EXTERN_C String_t* _stringLiteral782601D9835BF9992A5F131203DC948C52C34F0A;
IL2CPP_EXTERN_C String_t* _stringLiteral79FE8172D5881795A1C7CD4285991E1807BCE00E;
IL2CPP_EXTERN_C String_t* _stringLiteral7BCEF2993AEE2C84A744A0ABD67F5AE45E34ED37;
IL2CPP_EXTERN_C String_t* _stringLiteral876C4B39B6E4D0187090400768899C71D99DE90D;
IL2CPP_EXTERN_C String_t* _stringLiteral99187D3D262E808774C71BD63810589041809388;
IL2CPP_EXTERN_C String_t* _stringLiteral9A1918AE07705464F03119461F76729A8A4AC384;
IL2CPP_EXTERN_C String_t* _stringLiteralAA36BB4523CE39D7BF5CEF3CFA56B6F5EA9E505B;
IL2CPP_EXTERN_C String_t* _stringLiteralADDE2A5B1B0A14B3309C5B42F69F0EB5DC226C28;
IL2CPP_EXTERN_C String_t* _stringLiteralC18C9BB6DF0D5C60CE5A5D2D3D6111BEB6F8CCEB;
IL2CPP_EXTERN_C String_t* _stringLiteralC62C64F00567C5368CAE37F4E64E1E82FF785677;
IL2CPP_EXTERN_C String_t* _stringLiteralCA4EAD358FD9149975248831FFDB6398B9E3E34E;
IL2CPP_EXTERN_C String_t* _stringLiteralCA865455948A6585C99F08AAE4C564A0F4992F78;
IL2CPP_EXTERN_C String_t* _stringLiteralD9691C4FD8A1F6B09DB1147CA32B442772FB46A1;
IL2CPP_EXTERN_C String_t* _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
IL2CPP_EXTERN_C String_t* _stringLiteralEB0F79A6ABD88DB20E08561FCEEA8E62C21B8875;
IL2CPP_EXTERN_C const RuntimeMethod* Array_Empty_TisRuntimeObject_m55011E8360A8199FB239A5787BA8631CDD6116FC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisYieldAwaiter_t5F0A81DC85227C01FFC38D53139B5C19D920B52A_TisU3CasyncGetRequestU3Ed__31_t3A8924764B9CFA6477D0B1E6C51AE990E58B4F07_mEAB7EF9DB43C271471248DA9AF3BAE59D6AEBD00_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_Create_m4CB15D06286C7AA0BA8318800D23A9D574CBE0E8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_SetException_m897218C2DB8D7BA446EB263573085805B8F0638C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_SetResult_mB79121C0ACAC704500FAA7350ED0FE6604DDA05E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_SetStateMachine_mE4D48B78E50CA2A3650A856ACF86A3CFBA249C30_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_Start_TisU3CasyncGetRequestU3Ed__31_t3A8924764B9CFA6477D0B1E6C51AE990E58B4F07_m846F6646BF093DF8EE19B6A597A8D4B4A8EB7926_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_get_Task_m01EB243CF4396C9A2645F71572B47CF12151974E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t254638BB1FAD695D9A9542E098A189D438A000F6_TisU3CGenerateTargetItemsU3Ed__32_t022CBBF6C6A16E5E4426916B9827B634513DE9CC_m9B3E927037E3E174069A0E024ED53B2E8DB35A53_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncVoidMethodBuilder_Start_TisU3CGenerateTargetItemsU3Ed__32_t022CBBF6C6A16E5E4426916B9827B634513DE9CC_mBCA1E50253ABC84F73050E99DA68775726AD0F5D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponentInParent_TisCanvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26_m5FB554DD7C0F662DAB84C0F292B221CAE3F0A5B3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisCamera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184_m64AC6C06DD93C5FB249091FEC84FA8475457CCC4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisInputField_tABEA115F23FBD374EBE80D4FAC1D15BD6E37A140_m08978F3683B8CCF83910BA8BB0A4F786A6361896_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisRectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_m0640480E7E38BB88B0D1F6AD59E697C8EE6AAFA4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_mC91ACC92AD57CA6CA00991DAF1DB3830BCE07AF8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisTMP_InputField_t3488E0EE8C3DF56C6A328EC95D1BEEA2DF4A7D5F_m638A3878EFC37F712EE8D8F0A24B543B256F7A28_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisTMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9_m0C4C5268B54C7097888C6B109527A680772EBCB5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisText_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62_mB85C5C0EEF6535E3FC0DBFC14E39FA5A51B6F888_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisWebGLInput_t20A7ED221656A06B7688C4010D4E7E8E74C4CE16_m3856F168FBC1AD6FC988BE4D85C5F3928B79795E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_ContainsKey_m7F72E314213887650CD6F6CBFAAF1344D1F07B85_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Remove_m0507E915ED1AEBF6BEB38EDE3E17B54F7943C195_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Remove_m057099BE5B700D4EBE18CCA3148D0E24A0552E0C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_m8068039ED8A7EDC0E36FBF878873B00D4B0E5AF9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_m9F06C20D0FD27B7F09C6DB65CFC3CEA79BF181D1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_get_Item_m930DCD8CEFA743C98FAB7799CE35113DA70B379A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_get_Item_mCDA5380AEA99F0E7C38C9A7C020DFCD9167FC755_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_set_Item_m54EDBFC5A43C72CF7D0B25CEA2C03096788D277C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_set_Item_m9AB8A5EFFD68EF12D1CDA65041EF049F912068EE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_Select_TisTargetFacade_tAA52A697AACAC6BBC707F8B97B5975CD124D9CB1_TisOptionData_tFDFBCB4A5FB860E95AE46FDAC112DB4140A8525E_m28F07A67DD36131343CD268CC29CCBD8DF67ABF1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_ToList_TisOptionData_tFDFBCB4A5FB860E95AE46FDAC112DB4140A8525E_mE82209F24B9E56F232FFEDC8CCB5D4E59D8EED30_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_ToList_TisTargetFacade_tAA52A697AACAC6BBC707F8B97B5975CD124D9CB1_mFE05F58A8DE77DD8A5A906EAC71F876EA5BB9667_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_ToList_TisTarget_t5E0C0864CEA07701AF639C0AFAC19928DB873FC5_mD6A2D9656F0626A34D0EC960BE8D5DDB99E44976_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_m43EBD82C27E159FCDA48274F7B0834E8FFA3BFA6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_m865474A9CADD1F2CBF3E1D44253129BCDAAE9CFC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_m27D3CC24299A5914B982AA443D26A73093D96963_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_AddComponent_TisInputField_tABEA115F23FBD374EBE80D4FAC1D15BD6E37A140_m932E2AB0AA903C34FABFD908BC6509C17FFE693E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_AddComponent_TisWebGLInputMobile_t98BD6DEA2871F796049970F99FBBFCBACF318ACF_m898CEA8A0288360923BFF1030637B12BD251633D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisLineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D_mE703918F1B04E115CCE78A5FF891A12648B04D75_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisPasswordController_t9127B978A2ACFF05C4C8A8591A2F0339EC9FB0D8_m748461478B5391AA9A7AD5AFF4076A6AB9BDF49C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_m026EB44DB6238F13E2AFBECF1FBBE924CB1B040A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisTargetFacade_tAA52A697AACAC6BBC707F8B97B5975CD124D9CB1_mA95C94F77A14A1DB93AC5D1A5402EF7976A868C9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GenericController_onMarkerLost_m517264E1C1D1210237CF349DFED77F59390DE54E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GenericController_onMarkerVisible_mFA701A0645235EC4F4F2AEF4ACA57635121DA706_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* JsonUtility_FromJson_TisTargetWrapper_t7CCA6EA84DFD8C48A2F98E96C300B0EE111C1DFE_m9E1E8CB15ECDE2AF98E02B109A480F9E17026AAE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m5765993ABE587F1195934629E7D160FF603FFE50_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_mD96A24F4E6DE395990A2DA04969DCCDF05BF2F93_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_mE6174CF409FF796DB81E0BC4EDC13FB84F13DA91_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Clear_m46550048EF02C799D7AFEDEAB9C2A4F2F259F268_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Contains_m359254483BE42CAD4DCA8FBAFB87473FB4CF00E1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_GetEnumerator_m282A9362896D76C23F2DE587B3DAED300C1B6C30_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_IndexOf_mC37A93DEE8F3410664601580F5C5036961A67F5A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Remove_m7D2CF28D9949C827FBAB3B319B49D9F9F57E8F72_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Remove_m8739674B1C80901ECFE42608BD578C879A18F26E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Remove_m9BFBD30B346EC11CCE34EE97E0DB06B2431A0A95_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Sort_m2735B8FE0432B95637A539B43DB6F51370E664E2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_ToArray_m20B42A5569FEAF96516D430D0F8364BAB17CD475_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m0EEDC2175ABFE2B54EB4416CB6D8EAE10254F98C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m512FB9059CA3B6A06A5E85FC5470FB1543A1D4A4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_m6310535726D2DA028F28BFC53DE44EDB18EF4A8C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_mE1369B2DAE3EB26605AEE44BB961736D985796A5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_m669D5F7031367A0D30C4203C8A38F02A0B50454D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_m9084470EFC68CF5F29E62A677DD9D8BC900ED8CE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_mBE3176F40529BACB1E6DBB68BDFD5894B04BD1BA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MultiMarkerController_onMarkerLost_m028CDBF5DC6C57BD4EB8A23DD69CEBA25E2D9D74_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MultiMarkerController_onMarkerVisible_m33FB0B6C930293F38557943BD7CFAF6CC17C5E36_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NativeArray_1_Dispose_m8B0F342847ECB90EB814E1F6AA5BF7DC2F271AEA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NativeArray_1__ctor_m981CC7E27B6C9946024877F2696920951443B04F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NativeSlice_1_op_Implicit_m3AB491D87E0962137FD43426C9363FE25C239A73_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m8CC4225774108D732B4BF9D4B204835A2DBA6EC5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* QrCodeRecenter_OnCameraFrameReceived_m237F79EBAE06CE0FD717BD86C189C5EF4B210A99_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Singleton_1__ctor_mA8A4725A8FFA16B3251C2BB3061EA80EE43BEAC6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TaskAwaiter_1_GetResult_m82A392802A854576DC9525B87B0053B56201ABB9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TaskAwaiter_1_get_IsCompleted_mE207C5509602B0BB59366E53CED6CC9B10A1F8A8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Task_1_GetAwaiter_m7727657658441E9D4CE9D3F8B532F9D65CB9CE1F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Texture2D_LoadRawTextureData_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mDA75074E580F4DE5D4F322EBF5542EA73FFBADE3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CBlurU3Ed__21_System_Collections_IEnumerator_Reset_m5DB19749F3AB23A43D14A5D6FBA9C8F9B4942FA4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CExecFocusOutU3Ed__7_System_Collections_IEnumerator_Reset_m9869536B4ACE932E796BFB101CC6211F4400AB9B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CRegisterOnFocusOutU3Ed__5_System_Collections_IEnumerator_Reset_m1D3772143720448452F8982D8A4A871393A03E9B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3CFillDropdownWithTargetItemsU3Eb__34_0_mA9FB680F89D1D6EA2B73BB78265A1986D10B77A5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3C_cctorU3Eb__0_0_m1D2F44D721E7B2CC93FC553D38718F0ED1E02A5F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3C_cctorU3Eb__0_1_mC2E47AB89795244D3DCF29192253A2F455A956B2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3C_cctorU3Eb__0_2_m8515844916DA936DB04853841DB7932ABB5262C1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CsendjsonU3Ed__23_System_Collections_IEnumerator_Reset_mA32F8B09A89835CE40096F681746DBB863759E0D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* WebGLInputMobile_OnFocusOut_m920DE6E8C07CDE2C46DF00C7511C86D8C3713D6F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* WebGLInputMobile_OnTouchEnd_m978A0707F6A1C683D43974DF7F58438DBE65F866_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* WebGLInput_OnBlur_mCFFB178E96DC6F40021B960A740AB053AEB9B8BE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* WebGLInput_OnEditEnd_mD46937A7A64BC00B06AB18DC7B1532677AEBB4AE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* WebGLInput_OnFocus_m54DB80C07B523F13C6259FFCFD90BA552CF2FE64_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* WebGLInput_OnSelect_mCBFF3C8DB21F48A4837D26AB9F4D8833FFDA040A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* WebGLInput_OnTab_m0F80B563448F8A140E4A704DC2501BF4A56DD20D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* WebGLInput_OnValueChange_m625C675A2330B92B5E7ED45ECD14E920A2CE5357_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* WebGLInput_OnWindowBlur_m9488E769E35C9A4CB5620EAC612B54B4733B093A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* WebGLInput_Setup_mF23CA9F5059938C23251F0F1CEFB2C9D5D6B4A06_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* WebGLWindow_OnWindowBlur_m12D443C9E80538273D5FF583B71CF8FBD1BADC1F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* WebGLWindow_OnWindowFocus_m9AA354E343431758C618658FE8AC209BAF3A7444_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* WebGLWindow_OnWindowResize_m30932521D2D74219E34C250A6C64EE29B252082F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeType* CharacterValidation_t5DAA94F9780B40CCF419821363E89B30E2EF7380_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* ContentType_t7E546E516F92E955324D479BB71667931F1A7956_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* InputType_t036D7DF2772E6C8C7DB969C7501F6513339572D4_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* LineType_tC4DBAA8629361B209A2BA0625320B24FC4566B6B_0_0_0_var;
struct CertificateHandler_t148B524FA5DB39F3ABADB181CD420FC505C33804_marshaled_com;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct DownloadHandler_t1B56C7D3F65D97A1E4B566A14A1E783EA8AE4EBB_marshaled_com;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;
struct UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F_marshaled_com;
struct UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F_marshaled_pinvoke;
struct UploadHandler_t7E504B1A83346248A0C8C4AF73A893226CB83EF6_marshaled_com;
struct Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2;

struct Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259;
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
struct GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF;
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
struct TargetU5BU5D_t3617959FFC066149C517739390E51D1F9E793E6B;
struct TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24;
struct Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_tBB65183F1134474D09FF49B95625D25472B9BA8B 
{
};

// System.Collections.Generic.Dictionary`2<System.Int32,WebGLSupport.WebGLInput>
struct Dictionary_2_t02972806B8AE7773FA4016F73A171E1AEAB527C6  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.Dictionary`2::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::_entries
	EntryU5BU5D_t70BBD523732DDA633701CE29D9C4B38C8A615E60* ____entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::_count
	int32_t ____count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeList
	int32_t ____freeList_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeCount
	int32_t ____freeCount_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::_version
	int32_t ____version_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::_comparer
	RuntimeObject* ____comparer_6;
	// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_keys
	KeyCollection_t80681E6F048AA44A057A7140CD872AAA36DAD0E2* ____keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_values
	ValueCollection_tD01FC0616347ED1109584F9DDD3FDFFEB7C69612* ____values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject* ____syncRoot_9;
};

// System.Collections.Generic.Dictionary`2<System.Int32,WebGLSupport.WebGLInputMobile>
struct Dictionary_2_tCC64C94C8DF1B73C6C7A4649650F9A9C33BF7925  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.Dictionary`2::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::_entries
	EntryU5BU5D_t5ECC54796CEA4ACE46BFCEEA0E53AAEB7F1609A3* ____entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::_count
	int32_t ____count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeList
	int32_t ____freeList_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeCount
	int32_t ____freeCount_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::_version
	int32_t ____version_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::_comparer
	RuntimeObject* ____comparer_6;
	// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_keys
	KeyCollection_tE27B5446596348F9D23A26C12F4641E58CB9BF4E* ____keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_values
	ValueCollection_t55F1E982BF7FD86CBA6E3C27AA51407E71B19594* ____values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject* ____syncRoot_9;
};

// System.EmptyArray`1<System.Object>
struct EmptyArray_1_tDF0DD7256B115243AA6BD5558417387A734240EE  : public RuntimeObject
{
};

struct EmptyArray_1_tDF0DD7256B115243AA6BD5558417387A734240EE_StaticFields
{
	// T[] System.EmptyArray`1::Value
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___Value_0;
};

// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<System.String>
struct List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<Target>
struct List_1_tFB3A1D83FA1EFCD81B10C01A5395798068BCE79A  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	TargetU5BU5D_t3617959FFC066149C517739390E51D1F9E793E6B* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_tFB3A1D83FA1EFCD81B10C01A5395798068BCE79A_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	TargetU5BU5D_t3617959FFC066149C517739390E51D1F9E793E6B* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<TargetFacade>
struct List_1_tD7576C87B68BC6CE723331751C2CE61223447FBE  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	TargetFacadeU5BU5D_tA07775D25A314998C9ED87C1F8C564199F9B4BC6* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_tD7576C87B68BC6CE723331751C2CE61223447FBE_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	TargetFacadeU5BU5D_tA07775D25A314998C9ED87C1F8C564199F9B4BC6* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<WebGLSupport.WebGLInput>
struct List_1_tDD7B1080B0F1C545C5FBF897D24700DEAD1AE4A4  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	WebGLInputU5BU5D_tC813567C9E3C72CC3C01E5923ED9146279CD1484* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_tDD7B1080B0F1C545C5FBF897D24700DEAD1AE4A4_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	WebGLInputU5BU5D_tC813567C9E3C72CC3C01E5923ED9146279CD1484* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<TMPro.TMP_Dropdown/OptionData>
struct List_1_tCADFA900711C24701A9C70EE674B91FC45D42A52  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	OptionDataU5BU5D_tEB78063B7582A72D41E99569EB93D519AC75F615* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_tCADFA900711C24701A9C70EE674B91FC45D42A52_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	OptionDataU5BU5D_tEB78063B7582A72D41E99569EB93D519AC75F615* ___s_emptyArray_5;
};

// UnityEngine.EventSystems.AbstractEventData
struct AbstractEventData_tAE1A127ED657117548181D29FFE4B1B14D8E67F7  : public RuntimeObject
{
	// System.Boolean UnityEngine.EventSystems.AbstractEventData::m_Used
	bool ___m_Used_0;
};
struct Il2CppArrayBounds;

// ZXing.BarcodeReaderGeneric
struct BarcodeReaderGeneric_t7B149EF324490F1EA50994B1002027E502D8C254  : public RuntimeObject
{
	// ZXing.Reader ZXing.BarcodeReaderGeneric::reader
	RuntimeObject* ___reader_2;
	// System.Func`5<System.Byte[],System.Int32,System.Int32,ZXing.RGBLuminanceSource/BitmapFormat,ZXing.LuminanceSource> ZXing.BarcodeReaderGeneric::createRGBLuminanceSource
	Func_5_t805EE5CC6AD8843F029E475B624A67448B7A7364* ___createRGBLuminanceSource_3;
	// System.Func`2<ZXing.LuminanceSource,ZXing.Binarizer> ZXing.BarcodeReaderGeneric::createBinarizer
	Func_2_t614D64FDB2EE48EB260F302A6131FFD71CE502F1* ___createBinarizer_4;
	// System.Boolean ZXing.BarcodeReaderGeneric::usePreviousState
	bool ___usePreviousState_5;
	// ZXing.Common.DecodingOptions ZXing.BarcodeReaderGeneric::options
	DecodingOptions_t062639B46A59B4B5ABA29D42F15F248D1BC771DB* ___options_6;
	// System.Action`1<ZXing.ResultPoint> ZXing.BarcodeReaderGeneric::explicitResultPointFound
	Action_1_t70238D061BFFA7D49D2FF0ED8B4054E39AAE50BF* ___explicitResultPointFound_7;
	// System.Action`1<ZXing.Result> ZXing.BarcodeReaderGeneric::ResultFound
	Action_1_t9C15D36035E0EC25EC6E91220DFFEA5436DBBFC6* ___ResultFound_8;
	// System.Boolean ZXing.BarcodeReaderGeneric::<AutoRotate>k__BackingField
	bool ___U3CAutoRotateU3Ek__BackingField_9;
};

struct BarcodeReaderGeneric_t7B149EF324490F1EA50994B1002027E502D8C254_StaticFields
{
	// System.Func`2<ZXing.LuminanceSource,ZXing.Binarizer> ZXing.BarcodeReaderGeneric::defaultCreateBinarizer
	Func_2_t614D64FDB2EE48EB260F302A6131FFD71CE502F1* ___defaultCreateBinarizer_0;
	// System.Func`5<System.Byte[],System.Int32,System.Int32,ZXing.RGBLuminanceSource/BitmapFormat,ZXing.LuminanceSource> ZXing.BarcodeReaderGeneric::defaultCreateRGBLuminanceSource
	Func_5_t805EE5CC6AD8843F029E475B624A67448B7A7364* ___defaultCreateRGBLuminanceSource_1;
};

// System.Reflection.MemberInfo
struct MemberInfo_t  : public RuntimeObject
{
};

// ARWT.Core.PostBuildActions
struct PostBuildActions_t9E7519FD8BFA04819D698562F818BBE611E8218A  : public RuntimeObject
{
};

// WebGLSupport.Detail.RebuildChecker
struct RebuildChecker_t655BE8F346B22370339BAE56B91783950CAAC807  : public RuntimeObject
{
	// WebGLSupport.IInputField WebGLSupport.Detail.RebuildChecker::input
	RuntimeObject* ___input_0;
	// System.String WebGLSupport.Detail.RebuildChecker::beforeString
	String_t* ___beforeString_1;
	// System.Int32 WebGLSupport.Detail.RebuildChecker::beforeCaretPosition
	int32_t ___beforeCaretPosition_2;
	// System.Int32 WebGLSupport.Detail.RebuildChecker::beforeSelectionFocusPosition
	int32_t ___beforeSelectionFocusPosition_3;
	// System.Int32 WebGLSupport.Detail.RebuildChecker::beforeSelectionAnchorPosition
	int32_t ___beforeSelectionAnchorPosition_4;
};

// System.String
struct String_t  : public RuntimeObject
{
	// System.Int32 System.String::_stringLength
	int32_t ____stringLength_4;
	// System.Char System.String::_firstChar
	Il2CppChar ____firstChar_5;
};

struct String_t_StaticFields
{
	// System.String System.String::Empty
	String_t* ___Empty_6;
};

// TargetWrapper
struct TargetWrapper_t7CCA6EA84DFD8C48A2F98E96C300B0EE111C1DFE  : public RuntimeObject
{
	// Target[] TargetWrapper::TargetList
	TargetU5BU5D_t3617959FFC066149C517739390E51D1F9E793E6B* ___TargetList_0;
};

// ARWT.Marker.TextureScaler
struct TextureScaler_t20DD1B353B1A0E57F30574F69D69784580378E32  : public RuntimeObject
{
};

// System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F  : public RuntimeObject
{
};
// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_com
{
};

// WebGLSupport.WebGLInputMobilePlugin
struct WebGLInputMobilePlugin_t4EFA8014C22823D359F9C025EFF2D1F5E802A26A  : public RuntimeObject
{
};

// WebGLSupport.WebGLInputPlugin
struct WebGLInputPlugin_tB11B29E0162074CE67EA0AF5FC9A4247F32DE4B1  : public RuntimeObject
{
};

// WebGLSupport.WebGLWindow
struct WebGLWindow_t360F95487A76FFDFAD43C992ACEBF9CF8FA4D3A3  : public RuntimeObject
{
};

struct WebGLWindow_t360F95487A76FFDFAD43C992ACEBF9CF8FA4D3A3_StaticFields
{
	// System.Boolean WebGLSupport.WebGLWindow::<Focus>k__BackingField
	bool ___U3CFocusU3Ek__BackingField_0;
	// System.Action WebGLSupport.WebGLWindow::OnFocusEvent
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___OnFocusEvent_1;
	// System.Action WebGLSupport.WebGLWindow::OnBlurEvent
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___OnBlurEvent_2;
	// System.Action WebGLSupport.WebGLWindow::OnResizeEvent
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___OnResizeEvent_3;
	// System.String WebGLSupport.WebGLWindow::ViewportContent
	String_t* ___ViewportContent_4;
};

// WebGLSupport.WebGLWindowPlugin
struct WebGLWindowPlugin_tD5B8C3EC1E2E93B7E8AD2AD64AC53A70A832C526  : public RuntimeObject
{
};

// WebGLSupport.WrappedInputField
struct WrappedInputField_tA9A06E487260394507CAA4C83E9E1E0239B4B6AE  : public RuntimeObject
{
	// UnityEngine.UI.InputField WebGLSupport.WrappedInputField::input
	InputField_tABEA115F23FBD374EBE80D4FAC1D15BD6E37A140* ___input_0;
	// WebGLSupport.Detail.RebuildChecker WebGLSupport.WrappedInputField::checker
	RebuildChecker_t655BE8F346B22370339BAE56B91783950CAAC807* ___checker_1;
};

// WebGLSupport.WrappedTMPInputField
struct WrappedTMPInputField_t5812136E49D051CA7D0F72155950CB226F87247F  : public RuntimeObject
{
	// TMPro.TMP_InputField WebGLSupport.WrappedTMPInputField::input
	TMP_InputField_t3488E0EE8C3DF56C6A328EC95D1BEEA2DF4A7D5F* ___input_0;
	// WebGLSupport.Detail.RebuildChecker WebGLSupport.WrappedTMPInputField::checker
	RebuildChecker_t655BE8F346B22370339BAE56B91783950CAAC807* ___checker_1;
	// UnityEngine.Coroutine WebGLSupport.WrappedTMPInputField::delayedGraphicRebuild
	Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* ___delayedGraphicRebuild_2;
};

// UnityEngine.YieldInstruction
struct YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D  : public RuntimeObject
{
};
// Native definition for P/Invoke marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_com
{
};

// TMPro.TMP_Dropdown/OptionData
struct OptionData_tFDFBCB4A5FB860E95AE46FDAC112DB4140A8525E  : public RuntimeObject
{
	// System.String TMPro.TMP_Dropdown/OptionData::m_Text
	String_t* ___m_Text_0;
	// UnityEngine.Sprite TMPro.TMP_Dropdown/OptionData::m_Image
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_Image_1;
};

// TargetHandler/<>c
struct U3CU3Ec_t70AD3AFEE444A985AD7890EC330EE5AF8DAF2A47  : public RuntimeObject
{
};

struct U3CU3Ec_t70AD3AFEE444A985AD7890EC330EE5AF8DAF2A47_StaticFields
{
	// TargetHandler/<>c TargetHandler/<>c::<>9
	U3CU3Ec_t70AD3AFEE444A985AD7890EC330EE5AF8DAF2A47* ___U3CU3E9_0;
	// System.Func`2<TargetFacade,TMPro.TMP_Dropdown/OptionData> TargetHandler/<>c::<>9__34_0
	Func_2_t3D46D586EBA225BB058345919E08F21E6E068C13* ___U3CU3E9__34_0_1;
};

// TargetHandler/<sendjson>d__23
struct U3CsendjsonU3Ed__23_tE0AAF5BB9AB2FBB6848F337C0DD6B12894900758  : public RuntimeObject
{
	// System.Int32 TargetHandler/<sendjson>d__23::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object TargetHandler/<sendjson>d__23::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// TargetHandler TargetHandler/<sendjson>d__23::<>4__this
	TargetHandler_t26EBF84B13B13596F2259A92408AE301B247E751* ___U3CU3E4__this_2;
	// UnityEngine.Networking.UnityWebRequest TargetHandler/<sendjson>d__23::<www>5__2
	UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* ___U3CwwwU3E5__2_3;
};

// WebGLSupport.WebGLInput/<Blur>d__21
struct U3CBlurU3Ed__21_t758693716AB460F60B691592D89A9DD3AE6F69DE  : public RuntimeObject
{
	// System.Int32 WebGLSupport.WebGLInput/<Blur>d__21::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object WebGLSupport.WebGLInput/<Blur>d__21::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// System.Int32 WebGLSupport.WebGLInput/<Blur>d__21::id
	int32_t ___id_2;
};

// WebGLSupport.WebGLInput/WebGLInputTabFocus
struct WebGLInputTabFocus_tE6406DD8FFC4C0341C1B9306BDBD56BFA68FE40E  : public RuntimeObject
{
};

struct WebGLInputTabFocus_tE6406DD8FFC4C0341C1B9306BDBD56BFA68FE40E_StaticFields
{
	// System.Collections.Generic.List`1<WebGLSupport.WebGLInput> WebGLSupport.WebGLInput/WebGLInputTabFocus::inputs
	List_1_tDD7B1080B0F1C545C5FBF897D24700DEAD1AE4A4* ___inputs_0;
};

// WebGLSupport.WebGLInputMobile/<ExecFocusOut>d__7
struct U3CExecFocusOutU3Ed__7_tBECE39214FAE8EC1642050ADC8BABE4CD5E1C842  : public RuntimeObject
{
	// System.Int32 WebGLSupport.WebGLInputMobile/<ExecFocusOut>d__7::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object WebGLSupport.WebGLInputMobile/<ExecFocusOut>d__7::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// System.Int32 WebGLSupport.WebGLInputMobile/<ExecFocusOut>d__7::id
	int32_t ___id_2;
};

// WebGLSupport.WebGLInputMobile/<RegisterOnFocusOut>d__5
struct U3CRegisterOnFocusOutU3Ed__5_tFB92D52720A36A315F2C7494680146EDAB93E2B8  : public RuntimeObject
{
	// System.Int32 WebGLSupport.WebGLInputMobile/<RegisterOnFocusOut>d__5::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object WebGLSupport.WebGLInputMobile/<RegisterOnFocusOut>d__5::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// System.Int32 WebGLSupport.WebGLInputMobile/<RegisterOnFocusOut>d__5::id
	int32_t ___id_2;
};

// WebGLSupport.WebGLWindow/<>c
struct U3CU3Ec_tD04EC24521C276620AF53A1530384866DCB3622D  : public RuntimeObject
{
};

struct U3CU3Ec_tD04EC24521C276620AF53A1530384866DCB3622D_StaticFields
{
	// WebGLSupport.WebGLWindow/<>c WebGLSupport.WebGLWindow/<>c::<>9
	U3CU3Ec_tD04EC24521C276620AF53A1530384866DCB3622D* ___U3CU3E9_0;
};

// System.Collections.Generic.List`1/Enumerator<System.Object>
struct Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A 
{
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::_list
	List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* ____list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_version
	int32_t ____version_2;
	// T System.Collections.Generic.List`1/Enumerator::_current
	RuntimeObject* ____current_3;
};

// System.Collections.Generic.List`1/Enumerator<TargetFacade>
struct Enumerator_t8B20BFEE313F615312F7EC1F77EE57DDFDBBEE8D 
{
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::_list
	List_1_tD7576C87B68BC6CE723331751C2CE61223447FBE* ____list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_version
	int32_t ____version_2;
	// T System.Collections.Generic.List`1/Enumerator::_current
	TargetFacade_tAA52A697AACAC6BBC707F8B97B5975CD124D9CB1* ____current_3;
};

// Unity.Collections.NativeSlice`1<System.Byte>
struct NativeSlice_1_tCEC4B2B900638EC1820BB61FE436766204DFD8DA 
{
	// System.Byte* Unity.Collections.NativeSlice`1::m_Buffer
	uint8_t* ___m_Buffer_0;
	// System.Int32 Unity.Collections.NativeSlice`1::m_Stride
	int32_t ___m_Stride_1;
	// System.Int32 Unity.Collections.NativeSlice`1::m_Length
	int32_t ___m_Length_2;
};

// System.Nullable`1<System.Double>
struct Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165 
{
	// System.Boolean System.Nullable`1::hasValue
	bool ___hasValue_0;
	// T System.Nullable`1::value
	double ___value_1;
};

// System.Nullable`1<System.Int64>
struct Nullable_1_t365991B3904FDA7642A788423B28692FDC7CDB17 
{
	// System.Boolean System.Nullable`1::hasValue
	bool ___hasValue_0;
	// T System.Nullable`1::value
	int64_t ___value_1;
};

// System.Nullable`1<System.Single>
struct Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75 
{
	// System.Boolean System.Nullable`1::hasValue
	bool ___hasValue_0;
	// T System.Nullable`1::value
	float ___value_1;
};

// TMPro.TMP_TextProcessingStack`1<System.Int32>
struct TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	int32_t ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// TMPro.TMP_TextProcessingStack`1<System.Single>
struct TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	float ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// TMPro.TMP_TextProcessingStack`1<TMPro.TMP_ColorGradient>
struct TMP_TextProcessingStack_1_tC8FAEB17246D3B171EFD11165A5761AE39B40D0C 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	TMP_ColorGradientU5BU5D_t2F65E8C42F268DFF33BB1392D94BCF5B5087308A* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	TMP_ColorGradient_t17B51752B4E9499A1FF7D875DCEC1D15A0F4AEBB* ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// System.Runtime.CompilerServices.TaskAwaiter`1<System.Object>
struct TaskAwaiter_1_t0B808409CD8201F13AAC85F29D646518C4857BEA 
{
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.TaskAwaiter`1::m_task
	Task_1_t0C4CD3A5BB93A184420D73218644C56C70FDA7E2* ___m_task_0;
};

// System.Runtime.CompilerServices.TaskAwaiter`1<System.String>
struct TaskAwaiter_1_t254638BB1FAD695D9A9542E098A189D438A000F6 
{
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.TaskAwaiter`1::m_task
	Task_1_t3D7638C82ED289AF156EDBAE76842D8DF4C4A9E0* ___m_task_0;
};

// System.Runtime.CompilerServices.AsyncMethodBuilderCore
struct AsyncMethodBuilderCore_tD5ABB3A2536319A3345B32A5481E37E23DD8CEDF 
{
	// System.Runtime.CompilerServices.IAsyncStateMachine System.Runtime.CompilerServices.AsyncMethodBuilderCore::m_stateMachine
	RuntimeObject* ___m_stateMachine_0;
	// System.Action System.Runtime.CompilerServices.AsyncMethodBuilderCore::m_defaultContextAction
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___m_defaultContextAction_1;
};
// Native definition for P/Invoke marshalling of System.Runtime.CompilerServices.AsyncMethodBuilderCore
struct AsyncMethodBuilderCore_tD5ABB3A2536319A3345B32A5481E37E23DD8CEDF_marshaled_pinvoke
{
	RuntimeObject* ___m_stateMachine_0;
	Il2CppMethodPointer ___m_defaultContextAction_1;
};
// Native definition for COM marshalling of System.Runtime.CompilerServices.AsyncMethodBuilderCore
struct AsyncMethodBuilderCore_tD5ABB3A2536319A3345B32A5481E37E23DD8CEDF_marshaled_com
{
	RuntimeObject* ___m_stateMachine_0;
	Il2CppMethodPointer ___m_defaultContextAction_1;
};

// ZXing.BarcodeReader
struct BarcodeReader_t3750E77E97439AA095CFBB5FD3B791E4349885DB  : public BarcodeReaderGeneric_t7B149EF324490F1EA50994B1002027E502D8C254
{
	// System.Func`4<UnityEngine.Color32[],System.Int32,System.Int32,ZXing.LuminanceSource> ZXing.BarcodeReader::createLuminanceSource
	Func_4_t40AE4BEC39AB141DFFA74DE46D7D5D8DA2A28102* ___createLuminanceSource_11;
};

struct BarcodeReader_t3750E77E97439AA095CFBB5FD3B791E4349885DB_StaticFields
{
	// System.Func`4<UnityEngine.Color32[],System.Int32,System.Int32,ZXing.LuminanceSource> ZXing.BarcodeReader::defaultCreateLuminanceSource
	Func_4_t40AE4BEC39AB141DFFA74DE46D7D5D8DA2A28102* ___defaultCreateLuminanceSource_10;
};

// UnityEngine.EventSystems.BaseEventData
struct BaseEventData_tE03A848325C0AE8E76C6CA15FD86395EBF83364F  : public AbstractEventData_tAE1A127ED657117548181D29FFE4B1B14D8E67F7
{
	// UnityEngine.EventSystems.EventSystem UnityEngine.EventSystems.BaseEventData::m_EventSystem
	EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707* ___m_EventSystem_1;
};

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22 
{
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;
};

struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_StaticFields
{
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;
};

// System.Byte
struct Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3 
{
	// System.Byte System.Byte::m_value
	uint8_t ___m_value_0;
};

// System.Char
struct Char_t521A6F19B456D956AF452D926C32709DC03D6B17 
{
	// System.Char System.Char::m_value
	Il2CppChar ___m_value_0;
};

struct Char_t521A6F19B456D956AF452D926C32709DC03D6B17_StaticFields
{
	// System.Byte[] System.Char::s_categoryForLatin1
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___s_categoryForLatin1_3;
};

// UnityEngine.Color
struct Color_tD001788D726C3A7F1379BEED0260B9591F440C1F 
{
	// System.Single UnityEngine.Color::r
	float ___r_0;
	// System.Single UnityEngine.Color::g
	float ___g_1;
	// System.Single UnityEngine.Color::b
	float ___b_2;
	// System.Single UnityEngine.Color::a
	float ___a_3;
};

// UnityEngine.Color32
struct Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B 
{
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
};

// System.Double
struct Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F 
{
	// System.Double System.Double::m_value
	double ___m_value_0;
};

// UnityEngine.DrivenRectTransformTracker
struct DrivenRectTransformTracker_tFB0706C933E3C68E4F377C204FCEEF091F1EE0B1 
{
	union
	{
		struct
		{
		};
		uint8_t DrivenRectTransformTracker_tFB0706C933E3C68E4F377C204FCEEF091F1EE0B1__padding[1];
	};
};

// System.Enum
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2  : public ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F
{
};

struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_StaticFields
{
	// System.Char[] System.Enum::enumSeperatorCharArray
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___enumSeperatorCharArray_0;
};
// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_marshaled_com
{
};

// System.Int32
struct Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C 
{
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;
};

// System.IntPtr
struct IntPtr_t 
{
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;
};

struct IntPtr_t_StaticFields
{
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;
};

// TMPro.MaterialReference
struct MaterialReference_tFD98FFFBBDF168028E637446C6676507186F4D0B 
{
	// System.Int32 TMPro.MaterialReference::index
	int32_t ___index_0;
	// TMPro.TMP_FontAsset TMPro.MaterialReference::fontAsset
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___fontAsset_1;
	// TMPro.TMP_SpriteAsset TMPro.MaterialReference::spriteAsset
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___spriteAsset_2;
	// UnityEngine.Material TMPro.MaterialReference::material
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material_3;
	// System.Boolean TMPro.MaterialReference::isDefaultMaterial
	bool ___isDefaultMaterial_4;
	// System.Boolean TMPro.MaterialReference::isFallbackMaterial
	bool ___isFallbackMaterial_5;
	// UnityEngine.Material TMPro.MaterialReference::fallbackMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___fallbackMaterial_6;
	// System.Single TMPro.MaterialReference::padding
	float ___padding_7;
	// System.Int32 TMPro.MaterialReference::referenceCount
	int32_t ___referenceCount_8;
};
// Native definition for P/Invoke marshalling of TMPro.MaterialReference
struct MaterialReference_tFD98FFFBBDF168028E637446C6676507186F4D0B_marshaled_pinvoke
{
	int32_t ___index_0;
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___fontAsset_1;
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___spriteAsset_2;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material_3;
	int32_t ___isDefaultMaterial_4;
	int32_t ___isFallbackMaterial_5;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___fallbackMaterial_6;
	float ___padding_7;
	int32_t ___referenceCount_8;
};
// Native definition for COM marshalling of TMPro.MaterialReference
struct MaterialReference_tFD98FFFBBDF168028E637446C6676507186F4D0B_marshaled_com
{
	int32_t ___index_0;
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___fontAsset_1;
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___spriteAsset_2;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material_3;
	int32_t ___isDefaultMaterial_4;
	int32_t ___isFallbackMaterial_5;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___fallbackMaterial_6;
	float ___padding_7;
	int32_t ___referenceCount_8;
};

// UnityEngine.Matrix4x4
struct Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 
{
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
};

struct Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6_StaticFields
{
	// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::zeroMatrix
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___zeroMatrix_16;
	// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::identityMatrix
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___identityMatrix_17;
};

// UnityEngine.Quaternion
struct Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 
{
	// System.Single UnityEngine.Quaternion::x
	float ___x_0;
	// System.Single UnityEngine.Quaternion::y
	float ___y_1;
	// System.Single UnityEngine.Quaternion::z
	float ___z_2;
	// System.Single UnityEngine.Quaternion::w
	float ___w_3;
};

struct Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_StaticFields
{
	// UnityEngine.Quaternion UnityEngine.Quaternion::identityQuaternion
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___identityQuaternion_4;
};

// UnityEngine.Rect
struct Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D 
{
	// System.Single UnityEngine.Rect::m_XMin
	float ___m_XMin_0;
	// System.Single UnityEngine.Rect::m_YMin
	float ___m_YMin_1;
	// System.Single UnityEngine.Rect::m_Width
	float ___m_Width_2;
	// System.Single UnityEngine.Rect::m_Height
	float ___m_Height_3;
};

// UnityEngine.RectInt
struct RectInt_t1744D10E1063135DA9D574F95205B98DAC600CB8 
{
	// System.Int32 UnityEngine.RectInt::m_XMin
	int32_t ___m_XMin_0;
	// System.Int32 UnityEngine.RectInt::m_YMin
	int32_t ___m_YMin_1;
	// System.Int32 UnityEngine.RectInt::m_Width
	int32_t ___m_Width_2;
	// System.Int32 UnityEngine.RectInt::m_Height
	int32_t ___m_Height_3;
};

// System.Single
struct Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C 
{
	// System.Single System.Single::m_value
	float ___m_value_0;
};

// UnityEngine.Rendering.SphericalHarmonicsL2
struct SphericalHarmonicsL2_tCBFB646455D2069E738976E5B745C6DF023B6BA2 
{
	// System.Single UnityEngine.Rendering.SphericalHarmonicsL2::shr0
	float ___shr0_0;
	// System.Single UnityEngine.Rendering.SphericalHarmonicsL2::shr1
	float ___shr1_1;
	// System.Single UnityEngine.Rendering.SphericalHarmonicsL2::shr2
	float ___shr2_2;
	// System.Single UnityEngine.Rendering.SphericalHarmonicsL2::shr3
	float ___shr3_3;
	// System.Single UnityEngine.Rendering.SphericalHarmonicsL2::shr4
	float ___shr4_4;
	// System.Single UnityEngine.Rendering.SphericalHarmonicsL2::shr5
	float ___shr5_5;
	// System.Single UnityEngine.Rendering.SphericalHarmonicsL2::shr6
	float ___shr6_6;
	// System.Single UnityEngine.Rendering.SphericalHarmonicsL2::shr7
	float ___shr7_7;
	// System.Single UnityEngine.Rendering.SphericalHarmonicsL2::shr8
	float ___shr8_8;
	// System.Single UnityEngine.Rendering.SphericalHarmonicsL2::shg0
	float ___shg0_9;
	// System.Single UnityEngine.Rendering.SphericalHarmonicsL2::shg1
	float ___shg1_10;
	// System.Single UnityEngine.Rendering.SphericalHarmonicsL2::shg2
	float ___shg2_11;
	// System.Single UnityEngine.Rendering.SphericalHarmonicsL2::shg3
	float ___shg3_12;
	// System.Single UnityEngine.Rendering.SphericalHarmonicsL2::shg4
	float ___shg4_13;
	// System.Single UnityEngine.Rendering.SphericalHarmonicsL2::shg5
	float ___shg5_14;
	// System.Single UnityEngine.Rendering.SphericalHarmonicsL2::shg6
	float ___shg6_15;
	// System.Single UnityEngine.Rendering.SphericalHarmonicsL2::shg7
	float ___shg7_16;
	// System.Single UnityEngine.Rendering.SphericalHarmonicsL2::shg8
	float ___shg8_17;
	// System.Single UnityEngine.Rendering.SphericalHarmonicsL2::shb0
	float ___shb0_18;
	// System.Single UnityEngine.Rendering.SphericalHarmonicsL2::shb1
	float ___shb1_19;
	// System.Single UnityEngine.Rendering.SphericalHarmonicsL2::shb2
	float ___shb2_20;
	// System.Single UnityEngine.Rendering.SphericalHarmonicsL2::shb3
	float ___shb3_21;
	// System.Single UnityEngine.Rendering.SphericalHarmonicsL2::shb4
	float ___shb4_22;
	// System.Single UnityEngine.Rendering.SphericalHarmonicsL2::shb5
	float ___shb5_23;
	// System.Single UnityEngine.Rendering.SphericalHarmonicsL2::shb6
	float ___shb6_24;
	// System.Single UnityEngine.Rendering.SphericalHarmonicsL2::shb7
	float ___shb7_25;
	// System.Single UnityEngine.Rendering.SphericalHarmonicsL2::shb8
	float ___shb8_26;
};

// UnityEngine.UI.SpriteState
struct SpriteState_tC8199570BE6337FB5C49347C97892B4222E5AACD 
{
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_HighlightedSprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_HighlightedSprite_0;
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_PressedSprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_PressedSprite_1;
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_SelectedSprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_SelectedSprite_2;
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_DisabledSprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_DisabledSprite_3;
};
// Native definition for P/Invoke marshalling of UnityEngine.UI.SpriteState
struct SpriteState_tC8199570BE6337FB5C49347C97892B4222E5AACD_marshaled_pinvoke
{
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_HighlightedSprite_0;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_PressedSprite_1;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_SelectedSprite_2;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_DisabledSprite_3;
};
// Native definition for COM marshalling of UnityEngine.UI.SpriteState
struct SpriteState_tC8199570BE6337FB5C49347C97892B4222E5AACD_marshaled_com
{
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_HighlightedSprite_0;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_PressedSprite_1;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_SelectedSprite_2;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_DisabledSprite_3;
};

// TMPro.TMP_FontStyleStack
struct TMP_FontStyleStack_t52885F172FADBC21346C835B5302167BDA8020DC 
{
	// System.Byte TMPro.TMP_FontStyleStack::bold
	uint8_t ___bold_0;
	// System.Byte TMPro.TMP_FontStyleStack::italic
	uint8_t ___italic_1;
	// System.Byte TMPro.TMP_FontStyleStack::underline
	uint8_t ___underline_2;
	// System.Byte TMPro.TMP_FontStyleStack::strikethrough
	uint8_t ___strikethrough_3;
	// System.Byte TMPro.TMP_FontStyleStack::highlight
	uint8_t ___highlight_4;
	// System.Byte TMPro.TMP_FontStyleStack::superscript
	uint8_t ___superscript_5;
	// System.Byte TMPro.TMP_FontStyleStack::subscript
	uint8_t ___subscript_6;
	// System.Byte TMPro.TMP_FontStyleStack::uppercase
	uint8_t ___uppercase_7;
	// System.Byte TMPro.TMP_FontStyleStack::lowercase
	uint8_t ___lowercase_8;
	// System.Byte TMPro.TMP_FontStyleStack::smallcaps
	uint8_t ___smallcaps_9;
};

// TMPro.TMP_Offset
struct TMP_Offset_t2262BE4E87D9662487777FF8FFE1B17B0E4438C6 
{
	// System.Single TMPro.TMP_Offset::m_Left
	float ___m_Left_0;
	// System.Single TMPro.TMP_Offset::m_Right
	float ___m_Right_1;
	// System.Single TMPro.TMP_Offset::m_Top
	float ___m_Top_2;
	// System.Single TMPro.TMP_Offset::m_Bottom
	float ___m_Bottom_3;
};

struct TMP_Offset_t2262BE4E87D9662487777FF8FFE1B17B0E4438C6_StaticFields
{
	// TMPro.TMP_Offset TMPro.TMP_Offset::k_ZeroOffset
	TMP_Offset_t2262BE4E87D9662487777FF8FFE1B17B0E4438C6 ___k_ZeroOffset_4;
};

// UnityEngine.Vector2
struct Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 
{
	// System.Single UnityEngine.Vector2::x
	float ___x_0;
	// System.Single UnityEngine.Vector2::y
	float ___y_1;
};

struct Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_StaticFields
{
	// UnityEngine.Vector2 UnityEngine.Vector2::zeroVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___zeroVector_2;
	// UnityEngine.Vector2 UnityEngine.Vector2::oneVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___oneVector_3;
	// UnityEngine.Vector2 UnityEngine.Vector2::upVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___upVector_4;
	// UnityEngine.Vector2 UnityEngine.Vector2::downVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___downVector_5;
	// UnityEngine.Vector2 UnityEngine.Vector2::leftVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___leftVector_6;
	// UnityEngine.Vector2 UnityEngine.Vector2::rightVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___rightVector_7;
	// UnityEngine.Vector2 UnityEngine.Vector2::positiveInfinityVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___positiveInfinityVector_8;
	// UnityEngine.Vector2 UnityEngine.Vector2::negativeInfinityVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___negativeInfinityVector_9;
};

// UnityEngine.Vector2Int
struct Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A 
{
	// System.Int32 UnityEngine.Vector2Int::m_X
	int32_t ___m_X_0;
	// System.Int32 UnityEngine.Vector2Int::m_Y
	int32_t ___m_Y_1;
};

struct Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A_StaticFields
{
	// UnityEngine.Vector2Int UnityEngine.Vector2Int::s_Zero
	Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A ___s_Zero_2;
	// UnityEngine.Vector2Int UnityEngine.Vector2Int::s_One
	Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A ___s_One_3;
	// UnityEngine.Vector2Int UnityEngine.Vector2Int::s_Up
	Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A ___s_Up_4;
	// UnityEngine.Vector2Int UnityEngine.Vector2Int::s_Down
	Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A ___s_Down_5;
	// UnityEngine.Vector2Int UnityEngine.Vector2Int::s_Left
	Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A ___s_Left_6;
	// UnityEngine.Vector2Int UnityEngine.Vector2Int::s_Right
	Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A ___s_Right_7;
};

// UnityEngine.Vector3
struct Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 
{
	// System.Single UnityEngine.Vector3::x
	float ___x_2;
	// System.Single UnityEngine.Vector3::y
	float ___y_3;
	// System.Single UnityEngine.Vector3::z
	float ___z_4;
};

struct Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields
{
	// UnityEngine.Vector3 UnityEngine.Vector3::zeroVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___zeroVector_5;
	// UnityEngine.Vector3 UnityEngine.Vector3::oneVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___oneVector_6;
	// UnityEngine.Vector3 UnityEngine.Vector3::upVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___upVector_7;
	// UnityEngine.Vector3 UnityEngine.Vector3::downVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___downVector_8;
	// UnityEngine.Vector3 UnityEngine.Vector3::leftVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___leftVector_9;
	// UnityEngine.Vector3 UnityEngine.Vector3::rightVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___rightVector_10;
	// UnityEngine.Vector3 UnityEngine.Vector3::forwardVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___forwardVector_11;
	// UnityEngine.Vector3 UnityEngine.Vector3::backVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___backVector_12;
	// UnityEngine.Vector3 UnityEngine.Vector3::positiveInfinityVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___positiveInfinityVector_13;
	// UnityEngine.Vector3 UnityEngine.Vector3::negativeInfinityVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___negativeInfinityVector_14;
};

// UnityEngine.Vector4
struct Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 
{
	// System.Single UnityEngine.Vector4::x
	float ___x_1;
	// System.Single UnityEngine.Vector4::y
	float ___y_2;
	// System.Single UnityEngine.Vector4::z
	float ___z_3;
	// System.Single UnityEngine.Vector4::w
	float ___w_4;
};

struct Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_StaticFields
{
	// UnityEngine.Vector4 UnityEngine.Vector4::zeroVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___zeroVector_5;
	// UnityEngine.Vector4 UnityEngine.Vector4::oneVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___oneVector_6;
	// UnityEngine.Vector4 UnityEngine.Vector4::positiveInfinityVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___positiveInfinityVector_7;
	// UnityEngine.Vector4 UnityEngine.Vector4::negativeInfinityVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___negativeInfinityVector_8;
};

// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915 
{
	union
	{
		struct
		{
		};
		uint8_t Void_t4861ACF8F4594C3437BB48B6E56783494B843915__padding[1];
	};
};

// System.Runtime.CompilerServices.YieldAwaitable
struct YieldAwaitable_tFEA898DB9022A953958C3CF531E1477D135D3DAB 
{
	union
	{
		struct
		{
		};
		uint8_t YieldAwaitable_tFEA898DB9022A953958C3CF531E1477D135D3DAB__padding[1];
	};
};

// UnityEngine.EventSystems.EventSystem/UIToolkitOverrideConfig
struct UIToolkitOverrideConfig_t4E6B4528E38BCA7DA72C45424634806200A50182 
{
	// UnityEngine.EventSystems.EventSystem UnityEngine.EventSystems.EventSystem/UIToolkitOverrideConfig::activeEventSystem
	EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707* ___activeEventSystem_0;
	// System.Boolean UnityEngine.EventSystems.EventSystem/UIToolkitOverrideConfig::sendEvents
	bool ___sendEvents_1;
	// System.Boolean UnityEngine.EventSystems.EventSystem/UIToolkitOverrideConfig::createPanelGameObjectsOnStart
	bool ___createPanelGameObjectsOnStart_2;
};
// Native definition for P/Invoke marshalling of UnityEngine.EventSystems.EventSystem/UIToolkitOverrideConfig
struct UIToolkitOverrideConfig_t4E6B4528E38BCA7DA72C45424634806200A50182_marshaled_pinvoke
{
	EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707* ___activeEventSystem_0;
	int32_t ___sendEvents_1;
	int32_t ___createPanelGameObjectsOnStart_2;
};
// Native definition for COM marshalling of UnityEngine.EventSystems.EventSystem/UIToolkitOverrideConfig
struct UIToolkitOverrideConfig_t4E6B4528E38BCA7DA72C45424634806200A50182_marshaled_com
{
	EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707* ___activeEventSystem_0;
	int32_t ___sendEvents_1;
	int32_t ___createPanelGameObjectsOnStart_2;
};

// TMPro.TMP_Text/SpecialCharacter
struct SpecialCharacter_t6C1DBE8C490706D1620899BAB7F0B8091AD26777 
{
	// TMPro.TMP_Character TMPro.TMP_Text/SpecialCharacter::character
	TMP_Character_t7D37A55EF1A9FF6D0BFE6D50E86A00F80E7FAF35* ___character_0;
	// TMPro.TMP_FontAsset TMPro.TMP_Text/SpecialCharacter::fontAsset
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___fontAsset_1;
	// UnityEngine.Material TMPro.TMP_Text/SpecialCharacter::material
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material_2;
	// System.Int32 TMPro.TMP_Text/SpecialCharacter::materialIndex
	int32_t ___materialIndex_3;
};
// Native definition for P/Invoke marshalling of TMPro.TMP_Text/SpecialCharacter
struct SpecialCharacter_t6C1DBE8C490706D1620899BAB7F0B8091AD26777_marshaled_pinvoke
{
	TMP_Character_t7D37A55EF1A9FF6D0BFE6D50E86A00F80E7FAF35* ___character_0;
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___fontAsset_1;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material_2;
	int32_t ___materialIndex_3;
};
// Native definition for COM marshalling of TMPro.TMP_Text/SpecialCharacter
struct SpecialCharacter_t6C1DBE8C490706D1620899BAB7F0B8091AD26777_marshaled_com
{
	TMP_Character_t7D37A55EF1A9FF6D0BFE6D50E86A00F80E7FAF35* ___character_0;
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___fontAsset_1;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material_2;
	int32_t ___materialIndex_3;
};

// TMPro.TMP_Text/TextBackingContainer
struct TextBackingContainer_t33D1CE628E7B26C45EDAC1D87BEF2DD22A5C6361 
{
	// System.UInt32[] TMPro.TMP_Text/TextBackingContainer::m_Array
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___m_Array_0;
	// System.Int32 TMPro.TMP_Text/TextBackingContainer::m_Count
	int32_t ___m_Count_1;
};
// Native definition for P/Invoke marshalling of TMPro.TMP_Text/TextBackingContainer
struct TextBackingContainer_t33D1CE628E7B26C45EDAC1D87BEF2DD22A5C6361_marshaled_pinvoke
{
	Il2CppSafeArray/*NONE*/* ___m_Array_0;
	int32_t ___m_Count_1;
};
// Native definition for COM marshalling of TMPro.TMP_Text/TextBackingContainer
struct TextBackingContainer_t33D1CE628E7B26C45EDAC1D87BEF2DD22A5C6361_marshaled_com
{
	Il2CppSafeArray/*NONE*/* ___m_Array_0;
	int32_t ___m_Count_1;
};

// System.Runtime.CompilerServices.YieldAwaitable/YieldAwaiter
struct YieldAwaiter_t5F0A81DC85227C01FFC38D53139B5C19D920B52A 
{
	union
	{
		struct
		{
		};
		uint8_t YieldAwaiter_t5F0A81DC85227C01FFC38D53139B5C19D920B52A__padding[1];
	};
};

struct YieldAwaiter_t5F0A81DC85227C01FFC38D53139B5C19D920B52A_StaticFields
{
	// System.Threading.WaitCallback System.Runtime.CompilerServices.YieldAwaitable/YieldAwaiter::s_waitCallbackRunAction
	WaitCallback_tFB2C7FD58D024BBC2B0333DC7A4CB63B8DEBD5D3* ___s_waitCallbackRunAction_0;
	// System.Threading.SendOrPostCallback System.Runtime.CompilerServices.YieldAwaitable/YieldAwaiter::s_sendOrPostCallbackRunAction
	SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E* ___s_sendOrPostCallbackRunAction_1;
};

// System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Object>
struct AsyncTaskMethodBuilder_1_tE810F083929D7952F192036D298085BD4B048AD0 
{
	// System.Runtime.CompilerServices.AsyncMethodBuilderCore System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1::m_coreState
	AsyncMethodBuilderCore_tD5ABB3A2536319A3345B32A5481E37E23DD8CEDF ___m_coreState_1;
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1::m_task
	Task_1_t0C4CD3A5BB93A184420D73218644C56C70FDA7E2* ___m_task_2;
};

struct AsyncTaskMethodBuilder_1_tE810F083929D7952F192036D298085BD4B048AD0_StaticFields
{
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1::s_defaultResultTask
	Task_1_t0C4CD3A5BB93A184420D73218644C56C70FDA7E2* ___s_defaultResultTask_0;
};

// System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.String>
struct AsyncTaskMethodBuilder_1_tA28B0962049DC249BEC0054E2394B1962E28E90E 
{
	// System.Runtime.CompilerServices.AsyncMethodBuilderCore System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1::m_coreState
	AsyncMethodBuilderCore_tD5ABB3A2536319A3345B32A5481E37E23DD8CEDF ___m_coreState_1;
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1::m_task
	Task_1_t3D7638C82ED289AF156EDBAE76842D8DF4C4A9E0* ___m_task_2;
};

struct AsyncTaskMethodBuilder_1_tA28B0962049DC249BEC0054E2394B1962E28E90E_StaticFields
{
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1::s_defaultResultTask
	Task_1_t3D7638C82ED289AF156EDBAE76842D8DF4C4A9E0* ___s_defaultResultTask_0;
};

// System.Nullable`1<UnityEngine.Color>
struct Nullable_1_tEE83D90B507D40B6C58B5EEF5B9D44D377B44F11 
{
	// System.Boolean System.Nullable`1::hasValue
	bool ___hasValue_0;
	// T System.Nullable`1::value
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___value_1;
};

// System.Nullable`1<UnityEngine.Matrix4x4>
struct Nullable_1_t4DE2D2A1D2B73B95E813201AC08E1041435836AA 
{
	// System.Boolean System.Nullable`1::hasValue
	bool ___hasValue_0;
	// T System.Nullable`1::value
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___value_1;
};

// System.Nullable`1<UnityEngine.Rendering.SphericalHarmonicsL2>
struct Nullable_1_t4C9CB95ACA9906A61C759884064F60858BF7E798 
{
	// System.Boolean System.Nullable`1::hasValue
	bool ___hasValue_0;
	// T System.Nullable`1::value
	SphericalHarmonicsL2_tCBFB646455D2069E738976E5B745C6DF023B6BA2 ___value_1;
};

// System.Nullable`1<UnityEngine.Vector3>
struct Nullable_1_t9C51B084784B716FFF4ED4575C63CFD8A71A86FE 
{
	// System.Boolean System.Nullable`1::hasValue
	bool ___hasValue_0;
	// T System.Nullable`1::value
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value_1;
};

// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32>
struct TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// TMPro.TMP_TextProcessingStack`1<TMPro.MaterialReference>
struct TMP_TextProcessingStack_1_tB03E08F69415B281A5A81138F09E49EE58402DF9 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	MaterialReferenceU5BU5D_t7491D335AB3E3E13CE9C0F5E931F396F6A02E1F2* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	MaterialReference_tFD98FFFBBDF168028E637446C6676507186F4D0B ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// UnityEngine.XR.ARFoundation.ARSessionState
struct ARSessionState_tAAADC649886D67F7134A0D9A665953D764A115D7 
{
	// System.Int32 UnityEngine.XR.ARFoundation.ARSessionState::value__
	int32_t ___value___2;
};

// Unity.Collections.Allocator
struct Allocator_t996642592271AAD9EE688F142741D512C07B5824 
{
	// System.Int32 Unity.Collections.Allocator::value__
	int32_t ___value___2;
};

// UnityEngine.AsyncOperation
struct AsyncOperation_tD2789250E4B098DEDA92B366A577E500A92D2D3C  : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D
{
	// System.IntPtr UnityEngine.AsyncOperation::m_Ptr
	intptr_t ___m_Ptr_0;
	// System.Action`1<UnityEngine.AsyncOperation> UnityEngine.AsyncOperation::m_completeCallback
	Action_1_tE8693FF0E67CDBA52BAFB211BFF1844D076ABAFB* ___m_completeCallback_1;
};
// Native definition for P/Invoke marshalling of UnityEngine.AsyncOperation
struct AsyncOperation_tD2789250E4B098DEDA92B366A577E500A92D2D3C_marshaled_pinvoke : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
	Il2CppMethodPointer ___m_completeCallback_1;
};
// Native definition for COM marshalling of UnityEngine.AsyncOperation
struct AsyncOperation_tD2789250E4B098DEDA92B366A577E500A92D2D3C_marshaled_com : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_com
{
	intptr_t ___m_Ptr_0;
	Il2CppMethodPointer ___m_completeCallback_1;
};

// System.Runtime.CompilerServices.AsyncVoidMethodBuilder
struct AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D 
{
	// System.Threading.SynchronizationContext System.Runtime.CompilerServices.AsyncVoidMethodBuilder::m_synchronizationContext
	SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0* ___m_synchronizationContext_0;
	// System.Runtime.CompilerServices.AsyncMethodBuilderCore System.Runtime.CompilerServices.AsyncVoidMethodBuilder::m_coreState
	AsyncMethodBuilderCore_tD5ABB3A2536319A3345B32A5481E37E23DD8CEDF ___m_coreState_1;
	// System.Threading.Tasks.Task System.Runtime.CompilerServices.AsyncVoidMethodBuilder::m_task
	Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* ___m_task_2;
};
// Native definition for P/Invoke marshalling of System.Runtime.CompilerServices.AsyncVoidMethodBuilder
struct AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D_marshaled_pinvoke
{
	SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0* ___m_synchronizationContext_0;
	AsyncMethodBuilderCore_tD5ABB3A2536319A3345B32A5481E37E23DD8CEDF_marshaled_pinvoke ___m_coreState_1;
	Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* ___m_task_2;
};
// Native definition for COM marshalling of System.Runtime.CompilerServices.AsyncVoidMethodBuilder
struct AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D_marshaled_com
{
	SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0* ___m_synchronizationContext_0;
	AsyncMethodBuilderCore_tD5ABB3A2536319A3345B32A5481E37E23DD8CEDF_marshaled_com ___m_coreState_1;
	Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* ___m_task_2;
};

// ZXing.BarcodeFormat
struct BarcodeFormat_t6AAFC3C9FCD9667A068874AE1559A09723CA3282 
{
	// System.Int32 ZXing.BarcodeFormat::value__
	int32_t ___value___2;
};

// System.Reflection.BindingFlags
struct BindingFlags_t5DC2835E4AE9C1862B3AD172EF35B6A5F4F1812C 
{
	// System.Int32 System.Reflection.BindingFlags::value__
	int32_t ___value___2;
};

// UnityEngine.XR.ARFoundation.CameraFacingDirection
struct CameraFacingDirection_t905450A3655BD064DF73761018AB558D4FDA1247 
{
	// System.Int32 UnityEngine.XR.ARFoundation.CameraFacingDirection::value__
	int32_t ___value___2;
};

// UnityEngine.XR.ARSubsystems.CameraFocusMode
struct CameraFocusMode_t36A1BEB1F122D191F22FF6AB596CF8240EAE9668 
{
	// System.Int32 UnityEngine.XR.ARSubsystems.CameraFocusMode::value__
	int32_t ___value___2;
};

// UnityEngine.UI.CanvasUpdate
struct CanvasUpdate_t4E5A2D5E0D6AC13BA8437F7176FB3E52E86F2AA6 
{
	// System.Int32 UnityEngine.UI.CanvasUpdate::value__
	int32_t ___value___2;
};

// UnityEngine.Networking.CertificateHandler
struct CertificateHandler_t148B524FA5DB39F3ABADB181CD420FC505C33804  : public RuntimeObject
{
	// System.IntPtr UnityEngine.Networking.CertificateHandler::m_Ptr
	intptr_t ___m_Ptr_0;
};
// Native definition for P/Invoke marshalling of UnityEngine.Networking.CertificateHandler
struct CertificateHandler_t148B524FA5DB39F3ABADB181CD420FC505C33804_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.Networking.CertificateHandler
struct CertificateHandler_t148B524FA5DB39F3ABADB181CD420FC505C33804_marshaled_com
{
	intptr_t ___m_Ptr_0;
};

// UnityEngine.UI.ColorBlock
struct ColorBlock_tDD7C62E7AFE442652FC98F8D058CE8AE6BFD7C11 
{
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_NormalColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_NormalColor_0;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_HighlightedColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_HighlightedColor_1;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_PressedColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_PressedColor_2;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_SelectedColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_SelectedColor_3;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_DisabledColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_DisabledColor_4;
	// System.Single UnityEngine.UI.ColorBlock::m_ColorMultiplier
	float ___m_ColorMultiplier_5;
	// System.Single UnityEngine.UI.ColorBlock::m_FadeDuration
	float ___m_FadeDuration_6;
};

struct ColorBlock_tDD7C62E7AFE442652FC98F8D058CE8AE6BFD7C11_StaticFields
{
	// UnityEngine.UI.ColorBlock UnityEngine.UI.ColorBlock::defaultColorBlock
	ColorBlock_tDD7C62E7AFE442652FC98F8D058CE8AE6BFD7C11 ___defaultColorBlock_7;
};

// TMPro.ColorMode
struct ColorMode_tA7A815AAB9F175EFBA0AE0814E55728432A880BF 
{
	// System.Int32 TMPro.ColorMode::value__
	int32_t ___value___2;
};

// WebGLSupport.ContentType
struct ContentType_t04B9B94264817DD9393CE8F308261246CA14F522 
{
	// System.Int32 WebGLSupport.ContentType::value__
	int32_t ___value___2;
};

// UnityEngine.Coroutine
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B  : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D
{
	// System.IntPtr UnityEngine.Coroutine::m_Ptr
	intptr_t ___m_Ptr_0;
};
// Native definition for P/Invoke marshalling of UnityEngine.Coroutine
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B_marshaled_pinvoke : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.Coroutine
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B_marshaled_com : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_com
{
	intptr_t ___m_Ptr_0;
};

// System.Delegate
struct Delegate_t  : public RuntimeObject
{
	// System.IntPtr System.Delegate::method_ptr
	Il2CppMethodPointer ___method_ptr_0;
	// System.IntPtr System.Delegate::invoke_impl
	intptr_t ___invoke_impl_1;
	// System.Object System.Delegate::m_target
	RuntimeObject* ___m_target_2;
	// System.IntPtr System.Delegate::method
	intptr_t ___method_3;
	// System.IntPtr System.Delegate::delegate_trampoline
	intptr_t ___delegate_trampoline_4;
	// System.IntPtr System.Delegate::extra_arg
	intptr_t ___extra_arg_5;
	// System.IntPtr System.Delegate::method_code
	intptr_t ___method_code_6;
	// System.IntPtr System.Delegate::interp_method
	intptr_t ___interp_method_7;
	// System.IntPtr System.Delegate::interp_invoke_impl
	intptr_t ___interp_invoke_impl_8;
	// System.Reflection.MethodInfo System.Delegate::method_info
	MethodInfo_t* ___method_info_9;
	// System.Reflection.MethodInfo System.Delegate::original_method_info
	MethodInfo_t* ___original_method_info_10;
	// System.DelegateData System.Delegate::data
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	// System.Boolean System.Delegate::method_is_virtual
	bool ___method_is_virtual_12;
};
// Native definition for P/Invoke marshalling of System.Delegate
struct Delegate_t_marshaled_pinvoke
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	intptr_t ___interp_method_7;
	intptr_t ___interp_invoke_impl_8;
	MethodInfo_t* ___method_info_9;
	MethodInfo_t* ___original_method_info_10;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	int32_t ___method_is_virtual_12;
};
// Native definition for COM marshalling of System.Delegate
struct Delegate_t_marshaled_com
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	intptr_t ___interp_method_7;
	intptr_t ___interp_invoke_impl_8;
	MethodInfo_t* ___method_info_9;
	MethodInfo_t* ___original_method_info_10;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	int32_t ___method_is_virtual_12;
};

// UnityEngine.Networking.DownloadHandler
struct DownloadHandler_t1B56C7D3F65D97A1E4B566A14A1E783EA8AE4EBB  : public RuntimeObject
{
	// System.IntPtr UnityEngine.Networking.DownloadHandler::m_Ptr
	intptr_t ___m_Ptr_0;
};
// Native definition for P/Invoke marshalling of UnityEngine.Networking.DownloadHandler
struct DownloadHandler_t1B56C7D3F65D97A1E4B566A14A1E783EA8AE4EBB_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.Networking.DownloadHandler
struct DownloadHandler_t1B56C7D3F65D97A1E4B566A14A1E783EA8AE4EBB_marshaled_com
{
	intptr_t ___m_Ptr_0;
};

// System.Exception
struct Exception_t  : public RuntimeObject
{
	// System.String System.Exception::_className
	String_t* ____className_1;
	// System.String System.Exception::_message
	String_t* ____message_2;
	// System.Collections.IDictionary System.Exception::_data
	RuntimeObject* ____data_3;
	// System.Exception System.Exception::_innerException
	Exception_t* ____innerException_4;
	// System.String System.Exception::_helpURL
	String_t* ____helpURL_5;
	// System.Object System.Exception::_stackTrace
	RuntimeObject* ____stackTrace_6;
	// System.String System.Exception::_stackTraceString
	String_t* ____stackTraceString_7;
	// System.String System.Exception::_remoteStackTraceString
	String_t* ____remoteStackTraceString_8;
	// System.Int32 System.Exception::_remoteStackIndex
	int32_t ____remoteStackIndex_9;
	// System.Object System.Exception::_dynamicMethods
	RuntimeObject* ____dynamicMethods_10;
	// System.Int32 System.Exception::_HResult
	int32_t ____HResult_11;
	// System.String System.Exception::_source
	String_t* ____source_12;
	// System.Runtime.Serialization.SafeSerializationManager System.Exception::_safeSerializationManager
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	// System.Diagnostics.StackTrace[] System.Exception::captured_traces
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	// System.IntPtr[] System.Exception::native_trace_ips
	IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832* ___native_trace_ips_15;
	// System.Int32 System.Exception::caught_in_unmanaged
	int32_t ___caught_in_unmanaged_16;
};

struct Exception_t_StaticFields
{
	// System.Object System.Exception::s_EDILock
	RuntimeObject* ___s_EDILock_0;
};
// Native definition for P/Invoke marshalling of System.Exception
struct Exception_t_marshaled_pinvoke
{
	char* ____className_1;
	char* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_pinvoke* ____innerException_4;
	char* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	char* ____stackTraceString_7;
	char* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	char* ____source_12;
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
	int32_t ___caught_in_unmanaged_16;
};
// Native definition for COM marshalling of System.Exception
struct Exception_t_marshaled_com
{
	Il2CppChar* ____className_1;
	Il2CppChar* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_com* ____innerException_4;
	Il2CppChar* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	Il2CppChar* ____stackTraceString_7;
	Il2CppChar* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	Il2CppChar* ____source_12;
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
	int32_t ___caught_in_unmanaged_16;
};

// TMPro.Extents
struct Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 
{
	// UnityEngine.Vector2 TMPro.Extents::min
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___min_2;
	// UnityEngine.Vector2 TMPro.Extents::max
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___max_3;
};

struct Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8_StaticFields
{
	// TMPro.Extents TMPro.Extents::zero
	Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 ___zero_0;
	// TMPro.Extents TMPro.Extents::uninitialized
	Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 ___uninitialized_1;
};

// UnityEngine.FilterMode
struct FilterMode_t4AD57F1A3FE272D650E0E688BA044AE872BD2A34 
{
	// System.Int32 UnityEngine.FilterMode::value__
	int32_t ___value___2;
};

// TMPro.FontStyles
struct FontStyles_t9E611EE6BBE6E192A73EAFF7872596517C527FF5 
{
	// System.Int32 TMPro.FontStyles::value__
	int32_t ___value___2;
};

// TMPro.FontWeight
struct FontWeight_tA2585C0A73B70D31CE71E7843149098A5E16BC80 
{
	// System.Int32 TMPro.FontWeight::value__
	int32_t ___value___2;
};

// TMPro.HighlightState
struct HighlightState_tE4F50287E5E2E91D42AB77DEA281D88D3AD6A28B 
{
	// UnityEngine.Color32 TMPro.HighlightState::color
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___color_0;
	// TMPro.TMP_Offset TMPro.HighlightState::padding
	TMP_Offset_t2262BE4E87D9662487777FF8FFE1B17B0E4438C6 ___padding_1;
};

// TMPro.HorizontalAlignmentOptions
struct HorizontalAlignmentOptions_tCC21260E9FBEC656BA7783643ED5F44AFF7955A1 
{
	// System.Int32 TMPro.HorizontalAlignmentOptions::value__
	int32_t ___value___2;
};

// UnityEngine.KeyCode
struct KeyCode_t75B9ECCC26D858F55040DDFF9523681E996D17E9 
{
	// System.Int32 UnityEngine.KeyCode::value__
	int32_t ___value___2;
};

// UnityEngine.XR.ARFoundation.LightEstimation
struct LightEstimation_tF3690F58E54F4FB0A4759BB0A694E887C0052683 
{
	// System.Int32 UnityEngine.XR.ARFoundation.LightEstimation::value__
	int32_t ___value___2;
};

// UnityEngine.XR.ARSubsystems.LightEstimationMode
struct LightEstimationMode_t9B424276A66D6FD146A6B15E9C17004869E784A8 
{
	// System.Int32 UnityEngine.XR.ARSubsystems.LightEstimationMode::value__
	int32_t ___value___2;
};

// WebGLSupport.LineType
struct LineType_t5B64A04A8DF1DC3D623E7E9AE30C5294DDD23AC1 
{
	// System.Int32 WebGLSupport.LineType::value__
	int32_t ___value___2;
};

// ARWT.Marker.MarkerInfo
struct MarkerInfo_tF1D3B769CFABECC5F1524196971229B99448B57F  : public RuntimeObject
{
	// System.String ARWT.Marker.MarkerInfo::name
	String_t* ___name_0;
	// System.Boolean ARWT.Marker.MarkerInfo::isVisible
	bool ___isVisible_1;
	// UnityEngine.Vector3 ARWT.Marker.MarkerInfo::position
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position_2;
	// UnityEngine.Quaternion ARWT.Marker.MarkerInfo::rotation
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___rotation_3;
	// UnityEngine.Vector3 ARWT.Marker.MarkerInfo::scale
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___scale_4;
};

// System.MidpointRounding
struct MidpointRounding_tD36CC4DADEF14C2D917E671961CEF65DB159DC30 
{
	// System.Int32 System.MidpointRounding::value__
	int32_t ___value___2;
};

// Unity.Collections.NativeArrayOptions
struct NativeArrayOptions_t3E979EEF4B4840228A7692A97DA07553C6465F1D 
{
	// System.Int32 Unity.Collections.NativeArrayOptions::value__
	int32_t ___value___2;
};

// UnityEngine.AI.NavMeshPath
struct NavMeshPath_tC77ABF4A25FC0F0A94E8A70E304E114FE690A3A7  : public RuntimeObject
{
	// System.IntPtr UnityEngine.AI.NavMeshPath::m_Ptr
	intptr_t ___m_Ptr_0;
	// UnityEngine.Vector3[] UnityEngine.AI.NavMeshPath::m_Corners
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___m_Corners_1;
};
// Native definition for P/Invoke marshalling of UnityEngine.AI.NavMeshPath
struct NavMeshPath_tC77ABF4A25FC0F0A94E8A70E304E114FE690A3A7_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___m_Corners_1;
};
// Native definition for COM marshalling of UnityEngine.AI.NavMeshPath
struct NavMeshPath_tC77ABF4A25FC0F0A94E8A70E304E114FE690A3A7_marshaled_com
{
	intptr_t ___m_Ptr_0;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___m_Corners_1;
};

// UnityEngine.XR.ARSubsystems.NotTrackingReason
struct NotTrackingReason_t03B4F5F62D4AF16340686F7F424704E5A5EBBE20 
{
	// System.Int32 UnityEngine.XR.ARSubsystems.NotTrackingReason::value__
	int32_t ___value___2;
};

// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C  : public RuntimeObject
{
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;
};

struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_StaticFields
{
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;
};
// Native definition for P/Invoke marshalling of UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};

// Unity.Profiling.ProfilerMarker
struct ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD 
{
	// System.IntPtr Unity.Profiling.ProfilerMarker::m_Ptr
	intptr_t ___m_Ptr_0;
};

// UnityEngine.EventSystems.RaycastResult
struct RaycastResult_tEC6A7B7CABA99C386F054F01E498AEC426CF8023 
{
	// UnityEngine.GameObject UnityEngine.EventSystems.RaycastResult::m_GameObject
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___m_GameObject_0;
	// UnityEngine.EventSystems.BaseRaycaster UnityEngine.EventSystems.RaycastResult::module
	BaseRaycaster_t7DC8158FD3CA0193455344379DD5FF7CD5F1F832* ___module_1;
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
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___worldPosition_7;
	// UnityEngine.Vector3 UnityEngine.EventSystems.RaycastResult::worldNormal
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___worldNormal_8;
	// UnityEngine.Vector2 UnityEngine.EventSystems.RaycastResult::screenPosition
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___screenPosition_9;
	// System.Int32 UnityEngine.EventSystems.RaycastResult::displayIndex
	int32_t ___displayIndex_10;
};
// Native definition for P/Invoke marshalling of UnityEngine.EventSystems.RaycastResult
struct RaycastResult_tEC6A7B7CABA99C386F054F01E498AEC426CF8023_marshaled_pinvoke
{
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___m_GameObject_0;
	BaseRaycaster_t7DC8158FD3CA0193455344379DD5FF7CD5F1F832* ___module_1;
	float ___distance_2;
	float ___index_3;
	int32_t ___depth_4;
	int32_t ___sortingLayer_5;
	int32_t ___sortingOrder_6;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___worldPosition_7;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___worldNormal_8;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___screenPosition_9;
	int32_t ___displayIndex_10;
};
// Native definition for COM marshalling of UnityEngine.EventSystems.RaycastResult
struct RaycastResult_tEC6A7B7CABA99C386F054F01E498AEC426CF8023_marshaled_com
{
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___m_GameObject_0;
	BaseRaycaster_t7DC8158FD3CA0193455344379DD5FF7CD5F1F832* ___module_1;
	float ___distance_2;
	float ___index_3;
	int32_t ___depth_4;
	int32_t ___sortingLayer_5;
	int32_t ___sortingOrder_6;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___worldPosition_7;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___worldNormal_8;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___screenPosition_9;
	int32_t ___displayIndex_10;
};

// UnityEngine.RenderMode
struct RenderMode_tB63553E26C26A0B62C47B995F86AC41768494633 
{
	// System.Int32 UnityEngine.RenderMode::value__
	int32_t ___value___2;
};

// System.RuntimeTypeHandle
struct RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B 
{
	// System.IntPtr System.RuntimeTypeHandle::value
	intptr_t ___value_0;
};

// UnityEngine.XR.ARSubsystems.SessionAvailability
struct SessionAvailability_t01F7B649A99735E8895479D291EB177ADC8B4255 
{
	// System.Int32 UnityEngine.XR.ARSubsystems.SessionAvailability::value__
	int32_t ___value___2;
};

// System.StringSplitOptions
struct StringSplitOptions_t4DD892C76C70DD4800FC1B76054D69826F770062 
{
	// System.Int32 System.StringSplitOptions::value__
	int32_t ___value___2;
};

// TMPro.TMP_TextElementType
struct TMP_TextElementType_t51EE6662436732F22C6B599F5757B7F35F706342 
{
	// System.Int32 TMPro.TMP_TextElementType::value__
	int32_t ___value___2;
};

// Target
struct Target_t5E0C0864CEA07701AF639C0AFAC19928DB873FC5  : public RuntimeObject
{
	// System.String Target::Name
	String_t* ___Name_0;
	// UnityEngine.Vector3 Target::Position
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___Position_1;
};

// System.Threading.Tasks.Task
struct Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572  : public RuntimeObject
{
	// System.Int32 modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.Tasks.Task::m_taskId
	int32_t ___m_taskId_1;
	// System.Delegate System.Threading.Tasks.Task::m_action
	Delegate_t* ___m_action_2;
	// System.Object System.Threading.Tasks.Task::m_stateObject
	RuntimeObject* ___m_stateObject_3;
	// System.Threading.Tasks.TaskScheduler System.Threading.Tasks.Task::m_taskScheduler
	TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E* ___m_taskScheduler_4;
	// System.Threading.Tasks.Task System.Threading.Tasks.Task::m_parent
	Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* ___m_parent_5;
	// System.Int32 modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.Tasks.Task::m_stateFlags
	int32_t ___m_stateFlags_6;
	// System.Object modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.Tasks.Task::m_continuationObject
	RuntimeObject* ___m_continuationObject_7;
	// System.Threading.Tasks.Task/ContingentProperties modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.Tasks.Task::m_contingentProperties
	ContingentProperties_t3FA59480914505CEA917B1002EC675F29D0CB540* ___m_contingentProperties_10;
};

struct Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_StaticFields
{
	// System.Int32 System.Threading.Tasks.Task::s_taskIdCounter
	int32_t ___s_taskIdCounter_0;
	// System.Object System.Threading.Tasks.Task::s_taskCompletionSentinel
	RuntimeObject* ___s_taskCompletionSentinel_8;
	// System.Boolean System.Threading.Tasks.Task::s_asyncDebuggingEnabled
	bool ___s_asyncDebuggingEnabled_9;
	// System.Action`1<System.Object> System.Threading.Tasks.Task::s_taskCancelCallback
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___s_taskCancelCallback_11;
	// System.Func`1<System.Threading.Tasks.Task/ContingentProperties> System.Threading.Tasks.Task::s_createContingentProperties
	Func_1_tD59A12717D79BFB403BF973694B1BE5B85474BD1* ___s_createContingentProperties_14;
	// System.Threading.Tasks.TaskFactory System.Threading.Tasks.Task::<Factory>k__BackingField
	TaskFactory_tF781BD37BE23917412AD83424D1497C7C1509DF0* ___U3CFactoryU3Ek__BackingField_15;
	// System.Threading.Tasks.Task System.Threading.Tasks.Task::<CompletedTask>k__BackingField
	Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* ___U3CCompletedTaskU3Ek__BackingField_16;
	// System.Predicate`1<System.Threading.Tasks.Task> System.Threading.Tasks.Task::s_IsExceptionObservedByParentPredicate
	Predicate_1_t7F48518B008C1472339EEEBABA3DE203FE1F26ED* ___s_IsExceptionObservedByParentPredicate_17;
	// System.Threading.ContextCallback System.Threading.Tasks.Task::s_ecCallback
	ContextCallback_tE8AFBDBFCC040FDA8DA8C1EEFE9BD66B16BDA007* ___s_ecCallback_18;
	// System.Predicate`1<System.Object> System.Threading.Tasks.Task::s_IsTaskContinuationNullPredicate
	Predicate_1_t8342C85FF4E41CD1F7024AC0CDC3E5312A32CB12* ___s_IsTaskContinuationNullPredicate_19;
	// System.Collections.Generic.Dictionary`2<System.Int32,System.Threading.Tasks.Task> System.Threading.Tasks.Task::s_currentActiveTasks
	Dictionary_2_t403063CE4960B4F46C688912237C6A27E550FF55* ___s_currentActiveTasks_20;
	// System.Object System.Threading.Tasks.Task::s_activeTasksLock
	RuntimeObject* ___s_activeTasksLock_21;
};

struct Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_ThreadStaticFields
{
	// System.Threading.Tasks.Task System.Threading.Tasks.Task::t_currentTask
	Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* ___t_currentTask_12;
	// System.Threading.Tasks.StackGuard System.Threading.Tasks.Task::t_stackGuard
	StackGuard_tACE063A1B7374BDF4AD472DE4585D05AD8745352* ___t_stackGuard_13;
};

// TMPro.TextAlignmentOptions
struct TextAlignmentOptions_tF3FA9020F7E2AF1A48660044540254009A22EF01 
{
	// System.Int32 TMPro.TextAlignmentOptions::value__
	int32_t ___value___2;
};

// TMPro.TextOverflowModes
struct TextOverflowModes_t7DCCD00C16E3223CE50CDDCC53F785C0405BE203 
{
	// System.Int32 TMPro.TextOverflowModes::value__
	int32_t ___value___2;
};

// TMPro.TextRenderFlags
struct TextRenderFlags_tE023FF398ECFE57A1DBC6FD2A1AF4AE9620F6E1C 
{
	// System.Int32 TMPro.TextRenderFlags::value__
	int32_t ___value___2;
};

// UnityEngine.Rendering.TextureDimension
struct TextureDimension_t8D7148B9168256EE1E9AF91378ABA148888CE642 
{
	// System.Int32 UnityEngine.Rendering.TextureDimension::value__
	int32_t ___value___2;
};

// UnityEngine.TextureFormat
struct TextureFormat_t87A73E4A3850D3410DC211676FC14B94226C1C1D 
{
	// System.Int32 UnityEngine.TextureFormat::value__
	int32_t ___value___2;
};

// TMPro.TextureMappingOptions
struct TextureMappingOptions_t0E1A47C529DEB45A875486256E7026E97C940DAE 
{
	// System.Int32 TMPro.TextureMappingOptions::value__
	int32_t ___value___2;
};

// UnityEngine.TouchScreenKeyboardType
struct TouchScreenKeyboardType_t3F5A06315B263282460BE67DE01393B6FB3780C1 
{
	// System.Int32 UnityEngine.TouchScreenKeyboardType::value__
	int32_t ___value___2;
};

// UnityEngine.XR.ARFoundation.TrackingMode
struct TrackingMode_tC095904BA2A31037812CC727FBDCC76D11D300B2 
{
	// System.Int32 UnityEngine.XR.ARFoundation.TrackingMode::value__
	int32_t ___value___2;
};

// UnityEngine.Networking.UploadHandler
struct UploadHandler_t7E504B1A83346248A0C8C4AF73A893226CB83EF6  : public RuntimeObject
{
	// System.IntPtr UnityEngine.Networking.UploadHandler::m_Ptr
	intptr_t ___m_Ptr_0;
};
// Native definition for P/Invoke marshalling of UnityEngine.Networking.UploadHandler
struct UploadHandler_t7E504B1A83346248A0C8C4AF73A893226CB83EF6_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.Networking.UploadHandler
struct UploadHandler_t7E504B1A83346248A0C8C4AF73A893226CB83EF6_marshaled_com
{
	intptr_t ___m_Ptr_0;
};

// TMPro.VertexGradient
struct VertexGradient_t2C057B53C0EA6E987C2B7BAB0305E686DA1C9A8F 
{
	// UnityEngine.Color TMPro.VertexGradient::topLeft
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___topLeft_0;
	// UnityEngine.Color TMPro.VertexGradient::topRight
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___topRight_1;
	// UnityEngine.Color TMPro.VertexGradient::bottomLeft
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___bottomLeft_2;
	// UnityEngine.Color TMPro.VertexGradient::bottomRight
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___bottomRight_3;
};

// TMPro.VertexSortingOrder
struct VertexSortingOrder_t95B7AEDBDCAACC3459B6476E5CCC594A6422FFA8 
{
	// System.Int32 TMPro.VertexSortingOrder::value__
	int32_t ___value___2;
};

// TMPro.VerticalAlignmentOptions
struct VerticalAlignmentOptions_tCEF70AF60282B71AEEE14D51253CE6A61E72D855 
{
	// System.Int32 TMPro.VerticalAlignmentOptions::value__
	int32_t ___value___2;
};

// UnityEngine.UI.InputField/CharacterValidation
struct CharacterValidation_t5DAA94F9780B40CCF419821363E89B30E2EF7380 
{
	// System.Int32 UnityEngine.UI.InputField/CharacterValidation::value__
	int32_t ___value___2;
};

// UnityEngine.UI.InputField/ContentType
struct ContentType_t7E546E516F92E955324D479BB71667931F1A7956 
{
	// System.Int32 UnityEngine.UI.InputField/ContentType::value__
	int32_t ___value___2;
};

// UnityEngine.UI.InputField/InputType
struct InputType_t036D7DF2772E6C8C7DB969C7501F6513339572D4 
{
	// System.Int32 UnityEngine.UI.InputField/InputType::value__
	int32_t ___value___2;
};

// UnityEngine.UI.InputField/LineType
struct LineType_tC4DBAA8629361B209A2BA0625320B24FC4566B6B 
{
	// System.Int32 UnityEngine.UI.InputField/LineType::value__
	int32_t ___value___2;
};

// UnityEngine.UI.Navigation/Mode
struct Mode_t2D49D0E10E2FDA0026278C2400C16033888D0542 
{
	// System.Int32 UnityEngine.UI.Navigation/Mode::value__
	int32_t ___value___2;
};

// UnityEngine.EventSystems.PointerEventData/InputButton
struct InputButton_t7F40241CC7C406EBD574D426F736CB744DE86CDA 
{
	// System.Int32 UnityEngine.EventSystems.PointerEventData/InputButton::value__
	int32_t ___value___2;
};

// UnityEngine.UI.Selectable/Transition
struct Transition_tF856A77C9FAC6D26EA3CA158CF68B739D35397B3 
{
	// System.Int32 UnityEngine.UI.Selectable/Transition::value__
	int32_t ___value___2;
};

// UnityEngine.UI.Slider/Direction
struct Direction_t4C81D17BB6C089A0EC1C4934525B86E75E693EFA 
{
	// System.Int32 UnityEngine.UI.Slider/Direction::value__
	int32_t ___value___2;
};

// TMPro.TMP_InputField/CharacterValidation
struct CharacterValidation_t14B82768014D219C74BC91657D6B013A0CAFF2B9 
{
	// System.Int32 TMPro.TMP_InputField/CharacterValidation::value__
	int32_t ___value___2;
};

// TMPro.TMP_InputField/ContentType
struct ContentType_tC6315BB238AB8B34EEAC496ECDA3F92692694276 
{
	// System.Int32 TMPro.TMP_InputField/ContentType::value__
	int32_t ___value___2;
};

// TMPro.TMP_InputField/InputType
struct InputType_tF2224DC7469AAC22BF653D00F6E29F8739175DA1 
{
	// System.Int32 TMPro.TMP_InputField/InputType::value__
	int32_t ___value___2;
};

// TMPro.TMP_InputField/LineType
struct LineType_t004C9AD8E9A2D86ABDE2F2F55F09446F6E46AF6E 
{
	// System.Int32 TMPro.TMP_InputField/LineType::value__
	int32_t ___value___2;
};

// TMPro.TMP_Text/TextInputSources
struct TextInputSources_t41387D6C9CB16E60390F47A15AEB8185BE966D26 
{
	// System.Int32 TMPro.TMP_Text/TextInputSources::value__
	int32_t ___value___2;
};

// UnityEngine.Networking.UnityWebRequest/Result
struct Result_tFB98154F15BF37A66902802D441FEFADC68D4C87 
{
	// System.Int32 UnityEngine.Networking.UnityWebRequest/Result::value__
	int32_t ___value___2;
};

// UnityEngine.XR.ARSubsystems.XRCpuImage/Format
struct Format_tC705C89E270CB1D8439274E837145FE806F3DCC7 
{
	// System.Int32 UnityEngine.XR.ARSubsystems.XRCpuImage/Format::value__
	int32_t ___value___2;
};

// UnityEngine.XR.ARSubsystems.XRCpuImage/Transformation
struct Transformation_t26ED8CF20E035506740A8504E00ECD67AF5FD137 
{
	// System.Int32 UnityEngine.XR.ARSubsystems.XRCpuImage/Transformation::value__
	int32_t ___value___2;
};

// Unity.Collections.NativeArray`1<System.Byte>
struct NativeArray_1_t81F55263465517B73C455D3400CF67B4BADD85CF 
{
	// System.Void* Unity.Collections.NativeArray`1::m_Buffer
	void* ___m_Buffer_0;
	// System.Int32 Unity.Collections.NativeArray`1::m_Length
	int32_t ___m_Length_1;
	// Unity.Collections.Allocator Unity.Collections.NativeArray`1::m_AllocatorLabel
	int32_t ___m_AllocatorLabel_2;
};

// TMPro.TMP_TextProcessingStack`1<TMPro.FontWeight>
struct TMP_TextProcessingStack_1_tA5C8CED87DD9E73F6359E23B334FFB5B6F813FD4 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	FontWeightU5BU5D_t2A406B5BAB0DD0F06E7F1773DB062E4AF98067BA* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	int32_t ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// TMPro.TMP_TextProcessingStack`1<TMPro.HighlightState>
struct TMP_TextProcessingStack_1_t57AECDCC936A7FF1D6CF66CA11560B28A675648D 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	HighlightStateU5BU5D_tA878A0AF1F4F52882ACD29515AADC277EE135622* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	HighlightState_tE4F50287E5E2E91D42AB77DEA281D88D3AD6A28B ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// TMPro.TMP_TextProcessingStack`1<TMPro.HorizontalAlignmentOptions>
struct TMP_TextProcessingStack_1_t243EA1B5D7FD2295D6533B953F0BBE8F52EFB8A0 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	HorizontalAlignmentOptionsU5BU5D_t4D185662282BFB910D8B9A8199E91578E9422658* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	int32_t ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// System.Threading.Tasks.Task`1<System.String>
struct Task_1_t3D7638C82ED289AF156EDBAE76842D8DF4C4A9E0  : public Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572
{
	// TResult System.Threading.Tasks.Task`1::m_result
	String_t* ___m_result_22;
};

// UnityEngine.XR.ARFoundation.ARLightEstimationData
struct ARLightEstimationData_tE622C47E05EBA84E05326E72C9D258F0200D5CE7 
{
	// System.Nullable`1<System.Single> UnityEngine.XR.ARFoundation.ARLightEstimationData::<averageColorTemperature>k__BackingField
	Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75 ___U3CaverageColorTemperatureU3Ek__BackingField_0;
	// System.Nullable`1<UnityEngine.Color> UnityEngine.XR.ARFoundation.ARLightEstimationData::<colorCorrection>k__BackingField
	Nullable_1_tEE83D90B507D40B6C58B5EEF5B9D44D377B44F11 ___U3CcolorCorrectionU3Ek__BackingField_1;
	// System.Nullable`1<System.Single> UnityEngine.XR.ARFoundation.ARLightEstimationData::<mainLightIntensityLumens>k__BackingField
	Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75 ___U3CmainLightIntensityLumensU3Ek__BackingField_2;
	// System.Nullable`1<UnityEngine.Color> UnityEngine.XR.ARFoundation.ARLightEstimationData::<mainLightColor>k__BackingField
	Nullable_1_tEE83D90B507D40B6C58B5EEF5B9D44D377B44F11 ___U3CmainLightColorU3Ek__BackingField_3;
	// System.Nullable`1<UnityEngine.Vector3> UnityEngine.XR.ARFoundation.ARLightEstimationData::<mainLightDirection>k__BackingField
	Nullable_1_t9C51B084784B716FFF4ED4575C63CFD8A71A86FE ___U3CmainLightDirectionU3Ek__BackingField_4;
	// System.Nullable`1<UnityEngine.Rendering.SphericalHarmonicsL2> UnityEngine.XR.ARFoundation.ARLightEstimationData::<ambientSphericalHarmonics>k__BackingField
	Nullable_1_t4C9CB95ACA9906A61C759884064F60858BF7E798 ___U3CambientSphericalHarmonicsU3Ek__BackingField_5;
	// System.Nullable`1<System.Single> UnityEngine.XR.ARFoundation.ARLightEstimationData::m_AverageBrightness
	Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75 ___m_AverageBrightness_6;
	// System.Nullable`1<System.Single> UnityEngine.XR.ARFoundation.ARLightEstimationData::m_AverageIntensityInLumens
	Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75 ___m_AverageIntensityInLumens_7;
	// System.Nullable`1<System.Single> UnityEngine.XR.ARFoundation.ARLightEstimationData::m_MainLightBrightness
	Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75 ___m_MainLightBrightness_8;
};
// Native definition for P/Invoke marshalling of UnityEngine.XR.ARFoundation.ARLightEstimationData
struct ARLightEstimationData_tE622C47E05EBA84E05326E72C9D258F0200D5CE7_marshaled_pinvoke
{
	Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75 ___U3CaverageColorTemperatureU3Ek__BackingField_0;
	Nullable_1_tEE83D90B507D40B6C58B5EEF5B9D44D377B44F11 ___U3CcolorCorrectionU3Ek__BackingField_1;
	Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75 ___U3CmainLightIntensityLumensU3Ek__BackingField_2;
	Nullable_1_tEE83D90B507D40B6C58B5EEF5B9D44D377B44F11 ___U3CmainLightColorU3Ek__BackingField_3;
	Nullable_1_t9C51B084784B716FFF4ED4575C63CFD8A71A86FE ___U3CmainLightDirectionU3Ek__BackingField_4;
	Nullable_1_t4C9CB95ACA9906A61C759884064F60858BF7E798 ___U3CambientSphericalHarmonicsU3Ek__BackingField_5;
	Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75 ___m_AverageBrightness_6;
	Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75 ___m_AverageIntensityInLumens_7;
	Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75 ___m_MainLightBrightness_8;
};
// Native definition for COM marshalling of UnityEngine.XR.ARFoundation.ARLightEstimationData
struct ARLightEstimationData_tE622C47E05EBA84E05326E72C9D258F0200D5CE7_marshaled_com
{
	Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75 ___U3CaverageColorTemperatureU3Ek__BackingField_0;
	Nullable_1_tEE83D90B507D40B6C58B5EEF5B9D44D377B44F11 ___U3CcolorCorrectionU3Ek__BackingField_1;
	Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75 ___U3CmainLightIntensityLumensU3Ek__BackingField_2;
	Nullable_1_tEE83D90B507D40B6C58B5EEF5B9D44D377B44F11 ___U3CmainLightColorU3Ek__BackingField_3;
	Nullable_1_t9C51B084784B716FFF4ED4575C63CFD8A71A86FE ___U3CmainLightDirectionU3Ek__BackingField_4;
	Nullable_1_t4C9CB95ACA9906A61C759884064F60858BF7E798 ___U3CambientSphericalHarmonicsU3Ek__BackingField_5;
	Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75 ___m_AverageBrightness_6;
	Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75 ___m_AverageIntensityInLumens_7;
	Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75 ___m_MainLightBrightness_8;
};

// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// UnityEngine.Material
struct Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// System.MulticastDelegate
struct MulticastDelegate_t  : public Delegate_t
{
	// System.Delegate[] System.MulticastDelegate::delegates
	DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771* ___delegates_13;
};
// Native definition for P/Invoke marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_pinvoke : public Delegate_t_marshaled_pinvoke
{
	Delegate_t_marshaled_pinvoke** ___delegates_13;
};
// Native definition for COM marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_com : public Delegate_t_marshaled_com
{
	Delegate_t_marshaled_com** ___delegates_13;
};

// UnityEngine.UI.Navigation
struct Navigation_t4D2E201D65749CF4E104E8AC1232CF1D6F14795C 
{
	// UnityEngine.UI.Navigation/Mode UnityEngine.UI.Navigation::m_Mode
	int32_t ___m_Mode_0;
	// System.Boolean UnityEngine.UI.Navigation::m_WrapAround
	bool ___m_WrapAround_1;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnUp
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnUp_2;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnDown
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnDown_3;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnLeft
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnLeft_4;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnRight
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnRight_5;
};
// Native definition for P/Invoke marshalling of UnityEngine.UI.Navigation
struct Navigation_t4D2E201D65749CF4E104E8AC1232CF1D6F14795C_marshaled_pinvoke
{
	int32_t ___m_Mode_0;
	int32_t ___m_WrapAround_1;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnUp_2;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnDown_3;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnLeft_4;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnRight_5;
};
// Native definition for COM marshalling of UnityEngine.UI.Navigation
struct Navigation_t4D2E201D65749CF4E104E8AC1232CF1D6F14795C_marshaled_com
{
	int32_t ___m_Mode_0;
	int32_t ___m_WrapAround_1;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnUp_2;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnDown_3;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnLeft_4;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnRight_5;
};

// UnityEngine.EventSystems.PointerEventData
struct PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB  : public BaseEventData_tE03A848325C0AE8E76C6CA15FD86395EBF83364F
{
	// UnityEngine.GameObject UnityEngine.EventSystems.PointerEventData::<pointerEnter>k__BackingField
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___U3CpointerEnterU3Ek__BackingField_2;
	// UnityEngine.GameObject UnityEngine.EventSystems.PointerEventData::m_PointerPress
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___m_PointerPress_3;
	// UnityEngine.GameObject UnityEngine.EventSystems.PointerEventData::<lastPress>k__BackingField
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___U3ClastPressU3Ek__BackingField_4;
	// UnityEngine.GameObject UnityEngine.EventSystems.PointerEventData::<rawPointerPress>k__BackingField
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___U3CrawPointerPressU3Ek__BackingField_5;
	// UnityEngine.GameObject UnityEngine.EventSystems.PointerEventData::<pointerDrag>k__BackingField
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___U3CpointerDragU3Ek__BackingField_6;
	// UnityEngine.GameObject UnityEngine.EventSystems.PointerEventData::<pointerClick>k__BackingField
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___U3CpointerClickU3Ek__BackingField_7;
	// UnityEngine.EventSystems.RaycastResult UnityEngine.EventSystems.PointerEventData::<pointerCurrentRaycast>k__BackingField
	RaycastResult_tEC6A7B7CABA99C386F054F01E498AEC426CF8023 ___U3CpointerCurrentRaycastU3Ek__BackingField_8;
	// UnityEngine.EventSystems.RaycastResult UnityEngine.EventSystems.PointerEventData::<pointerPressRaycast>k__BackingField
	RaycastResult_tEC6A7B7CABA99C386F054F01E498AEC426CF8023 ___U3CpointerPressRaycastU3Ek__BackingField_9;
	// System.Collections.Generic.List`1<UnityEngine.GameObject> UnityEngine.EventSystems.PointerEventData::hovered
	List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* ___hovered_10;
	// System.Boolean UnityEngine.EventSystems.PointerEventData::<eligibleForClick>k__BackingField
	bool ___U3CeligibleForClickU3Ek__BackingField_11;
	// System.Int32 UnityEngine.EventSystems.PointerEventData::<pointerId>k__BackingField
	int32_t ___U3CpointerIdU3Ek__BackingField_12;
	// UnityEngine.Vector2 UnityEngine.EventSystems.PointerEventData::<position>k__BackingField
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___U3CpositionU3Ek__BackingField_13;
	// UnityEngine.Vector2 UnityEngine.EventSystems.PointerEventData::<delta>k__BackingField
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___U3CdeltaU3Ek__BackingField_14;
	// UnityEngine.Vector2 UnityEngine.EventSystems.PointerEventData::<pressPosition>k__BackingField
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___U3CpressPositionU3Ek__BackingField_15;
	// UnityEngine.Vector3 UnityEngine.EventSystems.PointerEventData::<worldPosition>k__BackingField
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___U3CworldPositionU3Ek__BackingField_16;
	// UnityEngine.Vector3 UnityEngine.EventSystems.PointerEventData::<worldNormal>k__BackingField
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___U3CworldNormalU3Ek__BackingField_17;
	// System.Single UnityEngine.EventSystems.PointerEventData::<clickTime>k__BackingField
	float ___U3CclickTimeU3Ek__BackingField_18;
	// System.Int32 UnityEngine.EventSystems.PointerEventData::<clickCount>k__BackingField
	int32_t ___U3CclickCountU3Ek__BackingField_19;
	// UnityEngine.Vector2 UnityEngine.EventSystems.PointerEventData::<scrollDelta>k__BackingField
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___U3CscrollDeltaU3Ek__BackingField_20;
	// System.Boolean UnityEngine.EventSystems.PointerEventData::<useDragThreshold>k__BackingField
	bool ___U3CuseDragThresholdU3Ek__BackingField_21;
	// System.Boolean UnityEngine.EventSystems.PointerEventData::<dragging>k__BackingField
	bool ___U3CdraggingU3Ek__BackingField_22;
	// UnityEngine.EventSystems.PointerEventData/InputButton UnityEngine.EventSystems.PointerEventData::<button>k__BackingField
	int32_t ___U3CbuttonU3Ek__BackingField_23;
	// System.Single UnityEngine.EventSystems.PointerEventData::<pressure>k__BackingField
	float ___U3CpressureU3Ek__BackingField_24;
	// System.Single UnityEngine.EventSystems.PointerEventData::<tangentialPressure>k__BackingField
	float ___U3CtangentialPressureU3Ek__BackingField_25;
	// System.Single UnityEngine.EventSystems.PointerEventData::<altitudeAngle>k__BackingField
	float ___U3CaltitudeAngleU3Ek__BackingField_26;
	// System.Single UnityEngine.EventSystems.PointerEventData::<azimuthAngle>k__BackingField
	float ___U3CazimuthAngleU3Ek__BackingField_27;
	// System.Single UnityEngine.EventSystems.PointerEventData::<twist>k__BackingField
	float ___U3CtwistU3Ek__BackingField_28;
	// UnityEngine.Vector2 UnityEngine.EventSystems.PointerEventData::<radius>k__BackingField
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___U3CradiusU3Ek__BackingField_29;
	// UnityEngine.Vector2 UnityEngine.EventSystems.PointerEventData::<radiusVariance>k__BackingField
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___U3CradiusVarianceU3Ek__BackingField_30;
};

// ZXing.Result
struct Result_tF578DE3ECC8EB51CFB66605B8ADCD433C837EBAF  : public RuntimeObject
{
	// System.String ZXing.Result::<Text>k__BackingField
	String_t* ___U3CTextU3Ek__BackingField_0;
	// System.Byte[] ZXing.Result::<RawBytes>k__BackingField
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___U3CRawBytesU3Ek__BackingField_1;
	// ZXing.ResultPoint[] ZXing.Result::<ResultPoints>k__BackingField
	ResultPointU5BU5D_t98ED51EB991985ED1768D88FD09F826256CB6CB0* ___U3CResultPointsU3Ek__BackingField_2;
	// ZXing.BarcodeFormat ZXing.Result::<BarcodeFormat>k__BackingField
	int32_t ___U3CBarcodeFormatU3Ek__BackingField_3;
	// System.Collections.Generic.IDictionary`2<ZXing.ResultMetadataType,System.Object> ZXing.Result::<ResultMetadata>k__BackingField
	RuntimeObject* ___U3CResultMetadataU3Ek__BackingField_4;
	// System.Int64 ZXing.Result::<Timestamp>k__BackingField
	int64_t ___U3CTimestampU3Ek__BackingField_5;
	// System.Int32 ZXing.Result::<NumBits>k__BackingField
	int32_t ___U3CNumBitsU3Ek__BackingField_6;
};

// System.SystemException
struct SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295  : public Exception_t
{
};

// TMPro.TMP_LineInfo
struct TMP_LineInfo_tB75C1965B58DB7B3A046C8CA55AD6AB92B6B17B3 
{
	// System.Int32 TMPro.TMP_LineInfo::controlCharacterCount
	int32_t ___controlCharacterCount_0;
	// System.Int32 TMPro.TMP_LineInfo::characterCount
	int32_t ___characterCount_1;
	// System.Int32 TMPro.TMP_LineInfo::visibleCharacterCount
	int32_t ___visibleCharacterCount_2;
	// System.Int32 TMPro.TMP_LineInfo::spaceCount
	int32_t ___spaceCount_3;
	// System.Int32 TMPro.TMP_LineInfo::wordCount
	int32_t ___wordCount_4;
	// System.Int32 TMPro.TMP_LineInfo::firstCharacterIndex
	int32_t ___firstCharacterIndex_5;
	// System.Int32 TMPro.TMP_LineInfo::firstVisibleCharacterIndex
	int32_t ___firstVisibleCharacterIndex_6;
	// System.Int32 TMPro.TMP_LineInfo::lastCharacterIndex
	int32_t ___lastCharacterIndex_7;
	// System.Int32 TMPro.TMP_LineInfo::lastVisibleCharacterIndex
	int32_t ___lastVisibleCharacterIndex_8;
	// System.Single TMPro.TMP_LineInfo::length
	float ___length_9;
	// System.Single TMPro.TMP_LineInfo::lineHeight
	float ___lineHeight_10;
	// System.Single TMPro.TMP_LineInfo::ascender
	float ___ascender_11;
	// System.Single TMPro.TMP_LineInfo::baseline
	float ___baseline_12;
	// System.Single TMPro.TMP_LineInfo::descender
	float ___descender_13;
	// System.Single TMPro.TMP_LineInfo::maxAdvance
	float ___maxAdvance_14;
	// System.Single TMPro.TMP_LineInfo::width
	float ___width_15;
	// System.Single TMPro.TMP_LineInfo::marginLeft
	float ___marginLeft_16;
	// System.Single TMPro.TMP_LineInfo::marginRight
	float ___marginRight_17;
	// TMPro.HorizontalAlignmentOptions TMPro.TMP_LineInfo::alignment
	int32_t ___alignment_18;
	// TMPro.Extents TMPro.TMP_LineInfo::lineExtents
	Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 ___lineExtents_19;
};

// UnityEngine.Texture
struct Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

struct Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700_StaticFields
{
	// System.Int32 UnityEngine.Texture::GenerateAllMips
	int32_t ___GenerateAllMips_4;
};

// System.Type
struct Type_t  : public MemberInfo_t
{
	// System.RuntimeTypeHandle System.Type::_impl
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ____impl_8;
};

struct Type_t_StaticFields
{
	// System.Reflection.Binder modreq(System.Runtime.CompilerServices.IsVolatile) System.Type::s_defaultBinder
	Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235* ___s_defaultBinder_0;
	// System.Char System.Type::Delimiter
	Il2CppChar ___Delimiter_1;
	// System.Type[] System.Type::EmptyTypes
	TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* ___EmptyTypes_2;
	// System.Object System.Type::Missing
	RuntimeObject* ___Missing_3;
	// System.Reflection.MemberFilter System.Type::FilterAttribute
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterAttribute_4;
	// System.Reflection.MemberFilter System.Type::FilterName
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterName_5;
	// System.Reflection.MemberFilter System.Type::FilterNameIgnoreCase
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterNameIgnoreCase_6;
};

// UnityEngine.Networking.UnityWebRequest
struct UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F  : public RuntimeObject
{
	// System.IntPtr UnityEngine.Networking.UnityWebRequest::m_Ptr
	intptr_t ___m_Ptr_0;
	// UnityEngine.Networking.DownloadHandler UnityEngine.Networking.UnityWebRequest::m_DownloadHandler
	DownloadHandler_t1B56C7D3F65D97A1E4B566A14A1E783EA8AE4EBB* ___m_DownloadHandler_1;
	// UnityEngine.Networking.UploadHandler UnityEngine.Networking.UnityWebRequest::m_UploadHandler
	UploadHandler_t7E504B1A83346248A0C8C4AF73A893226CB83EF6* ___m_UploadHandler_2;
	// UnityEngine.Networking.CertificateHandler UnityEngine.Networking.UnityWebRequest::m_CertificateHandler
	CertificateHandler_t148B524FA5DB39F3ABADB181CD420FC505C33804* ___m_CertificateHandler_3;
	// System.Uri UnityEngine.Networking.UnityWebRequest::m_Uri
	Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E* ___m_Uri_4;
	// System.Boolean UnityEngine.Networking.UnityWebRequest::<disposeCertificateHandlerOnDispose>k__BackingField
	bool ___U3CdisposeCertificateHandlerOnDisposeU3Ek__BackingField_5;
	// System.Boolean UnityEngine.Networking.UnityWebRequest::<disposeDownloadHandlerOnDispose>k__BackingField
	bool ___U3CdisposeDownloadHandlerOnDisposeU3Ek__BackingField_6;
	// System.Boolean UnityEngine.Networking.UnityWebRequest::<disposeUploadHandlerOnDispose>k__BackingField
	bool ___U3CdisposeUploadHandlerOnDisposeU3Ek__BackingField_7;
};
// Native definition for P/Invoke marshalling of UnityEngine.Networking.UnityWebRequest
struct UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
	DownloadHandler_t1B56C7D3F65D97A1E4B566A14A1E783EA8AE4EBB_marshaled_pinvoke ___m_DownloadHandler_1;
	UploadHandler_t7E504B1A83346248A0C8C4AF73A893226CB83EF6_marshaled_pinvoke ___m_UploadHandler_2;
	CertificateHandler_t148B524FA5DB39F3ABADB181CD420FC505C33804_marshaled_pinvoke ___m_CertificateHandler_3;
	Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E* ___m_Uri_4;
	int32_t ___U3CdisposeCertificateHandlerOnDisposeU3Ek__BackingField_5;
	int32_t ___U3CdisposeDownloadHandlerOnDisposeU3Ek__BackingField_6;
	int32_t ___U3CdisposeUploadHandlerOnDisposeU3Ek__BackingField_7;
};
// Native definition for COM marshalling of UnityEngine.Networking.UnityWebRequest
struct UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F_marshaled_com
{
	intptr_t ___m_Ptr_0;
	DownloadHandler_t1B56C7D3F65D97A1E4B566A14A1E783EA8AE4EBB_marshaled_com* ___m_DownloadHandler_1;
	UploadHandler_t7E504B1A83346248A0C8C4AF73A893226CB83EF6_marshaled_com* ___m_UploadHandler_2;
	CertificateHandler_t148B524FA5DB39F3ABADB181CD420FC505C33804_marshaled_com* ___m_CertificateHandler_3;
	Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E* ___m_Uri_4;
	int32_t ___U3CdisposeCertificateHandlerOnDisposeU3Ek__BackingField_5;
	int32_t ___U3CdisposeDownloadHandlerOnDisposeU3Ek__BackingField_6;
	int32_t ___U3CdisposeUploadHandlerOnDisposeU3Ek__BackingField_7;
};

// UnityEngine.Networking.UnityWebRequestAsyncOperation
struct UnityWebRequestAsyncOperation_t14BE94558FF3A2CFC2EFBE2511A3A88252042B8C  : public AsyncOperation_tD2789250E4B098DEDA92B366A577E500A92D2D3C
{
	// UnityEngine.Networking.UnityWebRequest UnityEngine.Networking.UnityWebRequestAsyncOperation::<webRequest>k__BackingField
	UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* ___U3CwebRequestU3Ek__BackingField_2;
};
// Native definition for P/Invoke marshalling of UnityEngine.Networking.UnityWebRequestAsyncOperation
struct UnityWebRequestAsyncOperation_t14BE94558FF3A2CFC2EFBE2511A3A88252042B8C_marshaled_pinvoke : public AsyncOperation_tD2789250E4B098DEDA92B366A577E500A92D2D3C_marshaled_pinvoke
{
	UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F_marshaled_pinvoke* ___U3CwebRequestU3Ek__BackingField_2;
};
// Native definition for COM marshalling of UnityEngine.Networking.UnityWebRequestAsyncOperation
struct UnityWebRequestAsyncOperation_t14BE94558FF3A2CFC2EFBE2511A3A88252042B8C_marshaled_com : public AsyncOperation_tD2789250E4B098DEDA92B366A577E500A92D2D3C_marshaled_com
{
	UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F_marshaled_com* ___U3CwebRequestU3Ek__BackingField_2;
};

// UnityEngine.XR.ARSubsystems.XRCpuImage
struct XRCpuImage_t36F512AD65D5B0AA1CC458C3666873D741C60A57 
{
	// System.Int32 UnityEngine.XR.ARSubsystems.XRCpuImage::m_NativeHandle
	int32_t ___m_NativeHandle_0;
	// UnityEngine.XR.ARSubsystems.XRCpuImage/Api UnityEngine.XR.ARSubsystems.XRCpuImage::m_Api
	Api_tAE210A8378E537AFD1FA4B99562229CE842377FB* ___m_Api_1;
	// UnityEngine.Vector2Int UnityEngine.XR.ARSubsystems.XRCpuImage::<dimensions>k__BackingField
	Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A ___U3CdimensionsU3Ek__BackingField_3;
	// System.Int32 UnityEngine.XR.ARSubsystems.XRCpuImage::<planeCount>k__BackingField
	int32_t ___U3CplaneCountU3Ek__BackingField_4;
	// UnityEngine.XR.ARSubsystems.XRCpuImage/Format UnityEngine.XR.ARSubsystems.XRCpuImage::<format>k__BackingField
	int32_t ___U3CformatU3Ek__BackingField_5;
	// System.Double UnityEngine.XR.ARSubsystems.XRCpuImage::<timestamp>k__BackingField
	double ___U3CtimestampU3Ek__BackingField_6;
};

struct XRCpuImage_t36F512AD65D5B0AA1CC458C3666873D741C60A57_StaticFields
{
	// UnityEngine.XR.ARSubsystems.XRCpuImage/Api/OnImageRequestCompleteDelegate UnityEngine.XR.ARSubsystems.XRCpuImage::s_OnAsyncConversionCompleteDelegate
	OnImageRequestCompleteDelegate_tCD7B27E0C5D492FB984F05869FB527372CB70995* ___s_OnAsyncConversionCompleteDelegate_2;
};
// Native definition for P/Invoke marshalling of UnityEngine.XR.ARSubsystems.XRCpuImage
struct XRCpuImage_t36F512AD65D5B0AA1CC458C3666873D741C60A57_marshaled_pinvoke
{
	int32_t ___m_NativeHandle_0;
	Api_tAE210A8378E537AFD1FA4B99562229CE842377FB* ___m_Api_1;
	Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A ___U3CdimensionsU3Ek__BackingField_3;
	int32_t ___U3CplaneCountU3Ek__BackingField_4;
	int32_t ___U3CformatU3Ek__BackingField_5;
	double ___U3CtimestampU3Ek__BackingField_6;
};
// Native definition for COM marshalling of UnityEngine.XR.ARSubsystems.XRCpuImage
struct XRCpuImage_t36F512AD65D5B0AA1CC458C3666873D741C60A57_marshaled_com
{
	int32_t ___m_NativeHandle_0;
	Api_tAE210A8378E537AFD1FA4B99562229CE842377FB* ___m_Api_1;
	Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A ___U3CdimensionsU3Ek__BackingField_3;
	int32_t ___U3CplaneCountU3Ek__BackingField_4;
	int32_t ___U3CformatU3Ek__BackingField_5;
	double ___U3CtimestampU3Ek__BackingField_6;
};

// UnityEngine.XR.ARSubsystems.XRTextureDescriptor
struct XRTextureDescriptor_t699023EDE6E2593F61CE969A68B5E56CD04CFA19 
{
	// System.IntPtr UnityEngine.XR.ARSubsystems.XRTextureDescriptor::m_NativeTexture
	intptr_t ___m_NativeTexture_0;
	// System.Int32 UnityEngine.XR.ARSubsystems.XRTextureDescriptor::m_Width
	int32_t ___m_Width_1;
	// System.Int32 UnityEngine.XR.ARSubsystems.XRTextureDescriptor::m_Height
	int32_t ___m_Height_2;
	// System.Int32 UnityEngine.XR.ARSubsystems.XRTextureDescriptor::m_MipmapCount
	int32_t ___m_MipmapCount_3;
	// UnityEngine.TextureFormat UnityEngine.XR.ARSubsystems.XRTextureDescriptor::m_Format
	int32_t ___m_Format_4;
	// System.Int32 UnityEngine.XR.ARSubsystems.XRTextureDescriptor::m_PropertyNameId
	int32_t ___m_PropertyNameId_5;
	// System.Int32 UnityEngine.XR.ARSubsystems.XRTextureDescriptor::m_Depth
	int32_t ___m_Depth_6;
	// UnityEngine.Rendering.TextureDimension UnityEngine.XR.ARSubsystems.XRTextureDescriptor::m_Dimension
	int32_t ___m_Dimension_7;
};

// TargetHandler/<GenerateTargetItems>d__32
struct U3CGenerateTargetItemsU3Ed__32_t022CBBF6C6A16E5E4426916B9827B634513DE9CC 
{
	// System.Int32 TargetHandler/<GenerateTargetItems>d__32::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Runtime.CompilerServices.AsyncVoidMethodBuilder TargetHandler/<GenerateTargetItems>d__32::<>t__builder
	AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D ___U3CU3Et__builder_1;
	// TargetHandler TargetHandler/<GenerateTargetItems>d__32::<>4__this
	TargetHandler_t26EBF84B13B13596F2259A92408AE301B247E751* ___U3CU3E4__this_2;
	// System.Runtime.CompilerServices.TaskAwaiter`1<System.String> TargetHandler/<GenerateTargetItems>d__32::<>u__1
	TaskAwaiter_1_t254638BB1FAD695D9A9542E098A189D438A000F6 ___U3CU3Eu__1_3;
};

// TargetHandler/<asyncGetRequest>d__31
struct U3CasyncGetRequestU3Ed__31_t3A8924764B9CFA6477D0B1E6C51AE990E58B4F07 
{
	// System.Int32 TargetHandler/<asyncGetRequest>d__31::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.String> TargetHandler/<asyncGetRequest>d__31::<>t__builder
	AsyncTaskMethodBuilder_1_tA28B0962049DC249BEC0054E2394B1962E28E90E ___U3CU3Et__builder_1;
	// UnityEngine.Networking.UnityWebRequest TargetHandler/<asyncGetRequest>d__31::<request>5__2
	UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* ___U3CrequestU3E5__2_2;
	// System.Runtime.CompilerServices.YieldAwaitable/YieldAwaiter TargetHandler/<asyncGetRequest>d__31::<>u__1
	YieldAwaiter_t5F0A81DC85227C01FFC38D53139B5C19D920B52A ___U3CU3Eu__1_3;
};

// UnityEngine.XR.ARSubsystems.XRCpuImage/ConversionParams
struct ConversionParams_t062706B15E2C508C54473A1FD72013C4381CCB62 
{
	// UnityEngine.RectInt UnityEngine.XR.ARSubsystems.XRCpuImage/ConversionParams::m_InputRect
	RectInt_t1744D10E1063135DA9D574F95205B98DAC600CB8 ___m_InputRect_0;
	// UnityEngine.Vector2Int UnityEngine.XR.ARSubsystems.XRCpuImage/ConversionParams::m_OutputDimensions
	Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A ___m_OutputDimensions_1;
	// UnityEngine.TextureFormat UnityEngine.XR.ARSubsystems.XRCpuImage/ConversionParams::m_Format
	int32_t ___m_Format_2;
	// UnityEngine.XR.ARSubsystems.XRCpuImage/Transformation UnityEngine.XR.ARSubsystems.XRCpuImage/ConversionParams::m_Transformation
	int32_t ___m_Transformation_3;
};

// System.Action`1<System.Int32>
struct Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404  : public MulticastDelegate_t
{
};

// System.Action`2<System.Int32,System.Int32>
struct Action_2_tD7438462601D3939500ED67463331FE00CFFBDB8  : public MulticastDelegate_t
{
};

// System.Action`2<System.Int32,System.String>
struct Action_2_t6AAF2E215E74E16A4EEF0A0749A4A325D99F5BA6  : public MulticastDelegate_t
{
};

// System.Func`2<TargetFacade,TMPro.TMP_Dropdown/OptionData>
struct Func_2_t3D46D586EBA225BB058345919E08F21E6E068C13  : public MulticastDelegate_t
{
};

// UnityEngine.XR.ARFoundation.ARCameraFrameEventArgs
struct ARCameraFrameEventArgs_t4060608C37C2B7248AFC908876309CC36D53E0EC 
{
	// UnityEngine.XR.ARFoundation.ARLightEstimationData UnityEngine.XR.ARFoundation.ARCameraFrameEventArgs::<lightEstimation>k__BackingField
	ARLightEstimationData_tE622C47E05EBA84E05326E72C9D258F0200D5CE7 ___U3ClightEstimationU3Ek__BackingField_0;
	// System.Nullable`1<System.Int64> UnityEngine.XR.ARFoundation.ARCameraFrameEventArgs::<timestampNs>k__BackingField
	Nullable_1_t365991B3904FDA7642A788423B28692FDC7CDB17 ___U3CtimestampNsU3Ek__BackingField_1;
	// System.Nullable`1<UnityEngine.Matrix4x4> UnityEngine.XR.ARFoundation.ARCameraFrameEventArgs::<projectionMatrix>k__BackingField
	Nullable_1_t4DE2D2A1D2B73B95E813201AC08E1041435836AA ___U3CprojectionMatrixU3Ek__BackingField_2;
	// System.Nullable`1<UnityEngine.Matrix4x4> UnityEngine.XR.ARFoundation.ARCameraFrameEventArgs::<displayMatrix>k__BackingField
	Nullable_1_t4DE2D2A1D2B73B95E813201AC08E1041435836AA ___U3CdisplayMatrixU3Ek__BackingField_3;
	// System.Collections.Generic.List`1<UnityEngine.Texture2D> UnityEngine.XR.ARFoundation.ARCameraFrameEventArgs::<textures>k__BackingField
	List_1_t0F231C3F13EBA1FF9081BD61489D01AA3CBE59D4* ___U3CtexturesU3Ek__BackingField_4;
	// System.Collections.Generic.List`1<System.Int32> UnityEngine.XR.ARFoundation.ARCameraFrameEventArgs::<propertyNameIds>k__BackingField
	List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* ___U3CpropertyNameIdsU3Ek__BackingField_5;
	// System.Nullable`1<System.Double> UnityEngine.XR.ARFoundation.ARCameraFrameEventArgs::<exposureDuration>k__BackingField
	Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165 ___U3CexposureDurationU3Ek__BackingField_6;
	// System.Nullable`1<System.Single> UnityEngine.XR.ARFoundation.ARCameraFrameEventArgs::<exposureOffset>k__BackingField
	Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75 ___U3CexposureOffsetU3Ek__BackingField_7;
	// System.Collections.Generic.List`1<System.String> UnityEngine.XR.ARFoundation.ARCameraFrameEventArgs::<enabledMaterialKeywords>k__BackingField
	List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* ___U3CenabledMaterialKeywordsU3Ek__BackingField_8;
	// System.Collections.Generic.List`1<System.String> UnityEngine.XR.ARFoundation.ARCameraFrameEventArgs::<disabledMaterialKeywords>k__BackingField
	List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* ___U3CdisabledMaterialKeywordsU3Ek__BackingField_9;
	// UnityEngine.Texture UnityEngine.XR.ARFoundation.ARCameraFrameEventArgs::<cameraGrainTexture>k__BackingField
	Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* ___U3CcameraGrainTextureU3Ek__BackingField_10;
	// System.Single UnityEngine.XR.ARFoundation.ARCameraFrameEventArgs::<noiseIntensity>k__BackingField
	float ___U3CnoiseIntensityU3Ek__BackingField_11;
};
// Native definition for P/Invoke marshalling of UnityEngine.XR.ARFoundation.ARCameraFrameEventArgs
struct ARCameraFrameEventArgs_t4060608C37C2B7248AFC908876309CC36D53E0EC_marshaled_pinvoke
{
	ARLightEstimationData_tE622C47E05EBA84E05326E72C9D258F0200D5CE7_marshaled_pinvoke ___U3ClightEstimationU3Ek__BackingField_0;
	Nullable_1_t365991B3904FDA7642A788423B28692FDC7CDB17 ___U3CtimestampNsU3Ek__BackingField_1;
	Nullable_1_t4DE2D2A1D2B73B95E813201AC08E1041435836AA ___U3CprojectionMatrixU3Ek__BackingField_2;
	Nullable_1_t4DE2D2A1D2B73B95E813201AC08E1041435836AA ___U3CdisplayMatrixU3Ek__BackingField_3;
	List_1_t0F231C3F13EBA1FF9081BD61489D01AA3CBE59D4* ___U3CtexturesU3Ek__BackingField_4;
	List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* ___U3CpropertyNameIdsU3Ek__BackingField_5;
	Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165 ___U3CexposureDurationU3Ek__BackingField_6;
	Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75 ___U3CexposureOffsetU3Ek__BackingField_7;
	List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* ___U3CenabledMaterialKeywordsU3Ek__BackingField_8;
	List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* ___U3CdisabledMaterialKeywordsU3Ek__BackingField_9;
	Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* ___U3CcameraGrainTextureU3Ek__BackingField_10;
	float ___U3CnoiseIntensityU3Ek__BackingField_11;
};
// Native definition for COM marshalling of UnityEngine.XR.ARFoundation.ARCameraFrameEventArgs
struct ARCameraFrameEventArgs_t4060608C37C2B7248AFC908876309CC36D53E0EC_marshaled_com
{
	ARLightEstimationData_tE622C47E05EBA84E05326E72C9D258F0200D5CE7_marshaled_com ___U3ClightEstimationU3Ek__BackingField_0;
	Nullable_1_t365991B3904FDA7642A788423B28692FDC7CDB17 ___U3CtimestampNsU3Ek__BackingField_1;
	Nullable_1_t4DE2D2A1D2B73B95E813201AC08E1041435836AA ___U3CprojectionMatrixU3Ek__BackingField_2;
	Nullable_1_t4DE2D2A1D2B73B95E813201AC08E1041435836AA ___U3CdisplayMatrixU3Ek__BackingField_3;
	List_1_t0F231C3F13EBA1FF9081BD61489D01AA3CBE59D4* ___U3CtexturesU3Ek__BackingField_4;
	List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* ___U3CpropertyNameIdsU3Ek__BackingField_5;
	Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165 ___U3CexposureDurationU3Ek__BackingField_6;
	Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75 ___U3CexposureOffsetU3Ek__BackingField_7;
	List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* ___U3CenabledMaterialKeywordsU3Ek__BackingField_8;
	List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* ___U3CdisabledMaterialKeywordsU3Ek__BackingField_9;
	Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* ___U3CcameraGrainTextureU3Ek__BackingField_10;
	float ___U3CnoiseIntensityU3Ek__BackingField_11;
};

// UnityEngine.XR.ARFoundation.ARTextureInfo
struct ARTextureInfo_t008DA41DF9555306803303A0353619E5C0917261 
{
	// UnityEngine.XR.ARSubsystems.XRTextureDescriptor UnityEngine.XR.ARFoundation.ARTextureInfo::m_Descriptor
	XRTextureDescriptor_t699023EDE6E2593F61CE969A68B5E56CD04CFA19 ___m_Descriptor_1;
	// UnityEngine.Texture UnityEngine.XR.ARFoundation.ARTextureInfo::m_Texture
	Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* ___m_Texture_2;
};
// Native definition for P/Invoke marshalling of UnityEngine.XR.ARFoundation.ARTextureInfo
struct ARTextureInfo_t008DA41DF9555306803303A0353619E5C0917261_marshaled_pinvoke
{
	XRTextureDescriptor_t699023EDE6E2593F61CE969A68B5E56CD04CFA19 ___m_Descriptor_1;
	Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* ___m_Texture_2;
};
// Native definition for COM marshalling of UnityEngine.XR.ARFoundation.ARTextureInfo
struct ARTextureInfo_t008DA41DF9555306803303A0353619E5C0917261_marshaled_com
{
	XRTextureDescriptor_t699023EDE6E2593F61CE969A68B5E56CD04CFA19 ___m_Descriptor_1;
	Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* ___m_Texture_2;
};

// System.Action
struct Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07  : public MulticastDelegate_t
{
};

// System.AsyncCallback
struct AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C  : public MulticastDelegate_t
{
};

// UnityEngine.Behaviour
struct Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.Networking.DownloadHandlerBuffer
struct DownloadHandlerBuffer_t34C626F6513FA9A44FDDDEE85455CF2CD9DA5974  : public DownloadHandler_t1B56C7D3F65D97A1E4B566A14A1E783EA8AE4EBB
{
	// Unity.Collections.NativeArray`1<System.Byte> UnityEngine.Networking.DownloadHandlerBuffer::m_NativeData
	NativeArray_1_t81F55263465517B73C455D3400CF67B4BADD85CF ___m_NativeData_1;
};
// Native definition for P/Invoke marshalling of UnityEngine.Networking.DownloadHandlerBuffer
struct DownloadHandlerBuffer_t34C626F6513FA9A44FDDDEE85455CF2CD9DA5974_marshaled_pinvoke : public DownloadHandler_t1B56C7D3F65D97A1E4B566A14A1E783EA8AE4EBB_marshaled_pinvoke
{
	NativeArray_1_t81F55263465517B73C455D3400CF67B4BADD85CF ___m_NativeData_1;
};
// Native definition for COM marshalling of UnityEngine.Networking.DownloadHandlerBuffer
struct DownloadHandlerBuffer_t34C626F6513FA9A44FDDDEE85455CF2CD9DA5974_marshaled_com : public DownloadHandler_t1B56C7D3F65D97A1E4B566A14A1E783EA8AE4EBB_marshaled_com
{
	NativeArray_1_t81F55263465517B73C455D3400CF67B4BADD85CF ___m_NativeData_1;
};

// System.NotSupportedException
struct NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};

// UnityEngine.RenderTexture
struct RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27  : public Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700
{
};

// UnityEngine.Renderer
struct Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.Texture2D
struct Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4  : public Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700
{
};

// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// TMPro.WordWrapState
struct WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A 
{
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
	// System.Single TMPro.WordWrapState::startOfLineAscender
	float ___startOfLineAscender_13;
	// System.Single TMPro.WordWrapState::maxLineAscender
	float ___maxLineAscender_14;
	// System.Single TMPro.WordWrapState::maxLineDescender
	float ___maxLineDescender_15;
	// System.Single TMPro.WordWrapState::pageAscender
	float ___pageAscender_16;
	// TMPro.HorizontalAlignmentOptions TMPro.WordWrapState::horizontalAlignment
	int32_t ___horizontalAlignment_17;
	// System.Single TMPro.WordWrapState::marginLeft
	float ___marginLeft_18;
	// System.Single TMPro.WordWrapState::marginRight
	float ___marginRight_19;
	// System.Single TMPro.WordWrapState::xAdvance
	float ___xAdvance_20;
	// System.Single TMPro.WordWrapState::preferredWidth
	float ___preferredWidth_21;
	// System.Single TMPro.WordWrapState::preferredHeight
	float ___preferredHeight_22;
	// System.Single TMPro.WordWrapState::previousLineScale
	float ___previousLineScale_23;
	// System.Int32 TMPro.WordWrapState::wordCount
	int32_t ___wordCount_24;
	// TMPro.FontStyles TMPro.WordWrapState::fontStyle
	int32_t ___fontStyle_25;
	// System.Int32 TMPro.WordWrapState::italicAngle
	int32_t ___italicAngle_26;
	// System.Single TMPro.WordWrapState::fontScaleMultiplier
	float ___fontScaleMultiplier_27;
	// System.Single TMPro.WordWrapState::currentFontSize
	float ___currentFontSize_28;
	// System.Single TMPro.WordWrapState::baselineOffset
	float ___baselineOffset_29;
	// System.Single TMPro.WordWrapState::lineOffset
	float ___lineOffset_30;
	// System.Boolean TMPro.WordWrapState::isDrivenLineSpacing
	bool ___isDrivenLineSpacing_31;
	// System.Single TMPro.WordWrapState::glyphHorizontalAdvanceAdjustment
	float ___glyphHorizontalAdvanceAdjustment_32;
	// System.Single TMPro.WordWrapState::cSpace
	float ___cSpace_33;
	// System.Single TMPro.WordWrapState::mSpace
	float ___mSpace_34;
	// TMPro.TMP_TextInfo TMPro.WordWrapState::textInfo
	TMP_TextInfo_t09A8E906329422C3F0C059876801DD695B8D524D* ___textInfo_35;
	// TMPro.TMP_LineInfo TMPro.WordWrapState::lineInfo
	TMP_LineInfo_tB75C1965B58DB7B3A046C8CA55AD6AB92B6B17B3 ___lineInfo_36;
	// UnityEngine.Color32 TMPro.WordWrapState::vertexColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___vertexColor_37;
	// UnityEngine.Color32 TMPro.WordWrapState::underlineColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___underlineColor_38;
	// UnityEngine.Color32 TMPro.WordWrapState::strikethroughColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___strikethroughColor_39;
	// UnityEngine.Color32 TMPro.WordWrapState::highlightColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___highlightColor_40;
	// TMPro.TMP_FontStyleStack TMPro.WordWrapState::basicStyleStack
	TMP_FontStyleStack_t52885F172FADBC21346C835B5302167BDA8020DC ___basicStyleStack_41;
	// TMPro.TMP_TextProcessingStack`1<System.Int32> TMPro.WordWrapState::italicAngleStack
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___italicAngleStack_42;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.WordWrapState::colorStack
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___colorStack_43;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.WordWrapState::underlineColorStack
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___underlineColorStack_44;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.WordWrapState::strikethroughColorStack
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___strikethroughColorStack_45;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.WordWrapState::highlightColorStack
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___highlightColorStack_46;
	// TMPro.TMP_TextProcessingStack`1<TMPro.HighlightState> TMPro.WordWrapState::highlightStateStack
	TMP_TextProcessingStack_1_t57AECDCC936A7FF1D6CF66CA11560B28A675648D ___highlightStateStack_47;
	// TMPro.TMP_TextProcessingStack`1<TMPro.TMP_ColorGradient> TMPro.WordWrapState::colorGradientStack
	TMP_TextProcessingStack_1_tC8FAEB17246D3B171EFD11165A5761AE39B40D0C ___colorGradientStack_48;
	// TMPro.TMP_TextProcessingStack`1<System.Single> TMPro.WordWrapState::sizeStack
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___sizeStack_49;
	// TMPro.TMP_TextProcessingStack`1<System.Single> TMPro.WordWrapState::indentStack
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___indentStack_50;
	// TMPro.TMP_TextProcessingStack`1<TMPro.FontWeight> TMPro.WordWrapState::fontWeightStack
	TMP_TextProcessingStack_1_tA5C8CED87DD9E73F6359E23B334FFB5B6F813FD4 ___fontWeightStack_51;
	// TMPro.TMP_TextProcessingStack`1<System.Int32> TMPro.WordWrapState::styleStack
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___styleStack_52;
	// TMPro.TMP_TextProcessingStack`1<System.Single> TMPro.WordWrapState::baselineStack
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___baselineStack_53;
	// TMPro.TMP_TextProcessingStack`1<System.Int32> TMPro.WordWrapState::actionStack
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___actionStack_54;
	// TMPro.TMP_TextProcessingStack`1<TMPro.MaterialReference> TMPro.WordWrapState::materialReferenceStack
	TMP_TextProcessingStack_1_tB03E08F69415B281A5A81138F09E49EE58402DF9 ___materialReferenceStack_55;
	// TMPro.TMP_TextProcessingStack`1<TMPro.HorizontalAlignmentOptions> TMPro.WordWrapState::lineJustificationStack
	TMP_TextProcessingStack_1_t243EA1B5D7FD2295D6533B953F0BBE8F52EFB8A0 ___lineJustificationStack_56;
	// System.Int32 TMPro.WordWrapState::spriteAnimationID
	int32_t ___spriteAnimationID_57;
	// TMPro.TMP_FontAsset TMPro.WordWrapState::currentFontAsset
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___currentFontAsset_58;
	// TMPro.TMP_SpriteAsset TMPro.WordWrapState::currentSpriteAsset
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___currentSpriteAsset_59;
	// UnityEngine.Material TMPro.WordWrapState::currentMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___currentMaterial_60;
	// System.Int32 TMPro.WordWrapState::currentMaterialIndex
	int32_t ___currentMaterialIndex_61;
	// TMPro.Extents TMPro.WordWrapState::meshExtents
	Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 ___meshExtents_62;
	// System.Boolean TMPro.WordWrapState::tagNoParsing
	bool ___tagNoParsing_63;
	// System.Boolean TMPro.WordWrapState::isNonBreakingSpace
	bool ___isNonBreakingSpace_64;
};
// Native definition for P/Invoke marshalling of TMPro.WordWrapState
struct WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A_marshaled_pinvoke
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
	float ___startOfLineAscender_13;
	float ___maxLineAscender_14;
	float ___maxLineDescender_15;
	float ___pageAscender_16;
	int32_t ___horizontalAlignment_17;
	float ___marginLeft_18;
	float ___marginRight_19;
	float ___xAdvance_20;
	float ___preferredWidth_21;
	float ___preferredHeight_22;
	float ___previousLineScale_23;
	int32_t ___wordCount_24;
	int32_t ___fontStyle_25;
	int32_t ___italicAngle_26;
	float ___fontScaleMultiplier_27;
	float ___currentFontSize_28;
	float ___baselineOffset_29;
	float ___lineOffset_30;
	int32_t ___isDrivenLineSpacing_31;
	float ___glyphHorizontalAdvanceAdjustment_32;
	float ___cSpace_33;
	float ___mSpace_34;
	TMP_TextInfo_t09A8E906329422C3F0C059876801DD695B8D524D* ___textInfo_35;
	TMP_LineInfo_tB75C1965B58DB7B3A046C8CA55AD6AB92B6B17B3 ___lineInfo_36;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___vertexColor_37;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___underlineColor_38;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___strikethroughColor_39;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___highlightColor_40;
	TMP_FontStyleStack_t52885F172FADBC21346C835B5302167BDA8020DC ___basicStyleStack_41;
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___italicAngleStack_42;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___colorStack_43;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___underlineColorStack_44;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___strikethroughColorStack_45;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___highlightColorStack_46;
	TMP_TextProcessingStack_1_t57AECDCC936A7FF1D6CF66CA11560B28A675648D ___highlightStateStack_47;
	TMP_TextProcessingStack_1_tC8FAEB17246D3B171EFD11165A5761AE39B40D0C ___colorGradientStack_48;
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___sizeStack_49;
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___indentStack_50;
	TMP_TextProcessingStack_1_tA5C8CED87DD9E73F6359E23B334FFB5B6F813FD4 ___fontWeightStack_51;
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___styleStack_52;
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___baselineStack_53;
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___actionStack_54;
	TMP_TextProcessingStack_1_tB03E08F69415B281A5A81138F09E49EE58402DF9 ___materialReferenceStack_55;
	TMP_TextProcessingStack_1_t243EA1B5D7FD2295D6533B953F0BBE8F52EFB8A0 ___lineJustificationStack_56;
	int32_t ___spriteAnimationID_57;
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___currentFontAsset_58;
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___currentSpriteAsset_59;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___currentMaterial_60;
	int32_t ___currentMaterialIndex_61;
	Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 ___meshExtents_62;
	int32_t ___tagNoParsing_63;
	int32_t ___isNonBreakingSpace_64;
};
// Native definition for COM marshalling of TMPro.WordWrapState
struct WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A_marshaled_com
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
	float ___startOfLineAscender_13;
	float ___maxLineAscender_14;
	float ___maxLineDescender_15;
	float ___pageAscender_16;
	int32_t ___horizontalAlignment_17;
	float ___marginLeft_18;
	float ___marginRight_19;
	float ___xAdvance_20;
	float ___preferredWidth_21;
	float ___preferredHeight_22;
	float ___previousLineScale_23;
	int32_t ___wordCount_24;
	int32_t ___fontStyle_25;
	int32_t ___italicAngle_26;
	float ___fontScaleMultiplier_27;
	float ___currentFontSize_28;
	float ___baselineOffset_29;
	float ___lineOffset_30;
	int32_t ___isDrivenLineSpacing_31;
	float ___glyphHorizontalAdvanceAdjustment_32;
	float ___cSpace_33;
	float ___mSpace_34;
	TMP_TextInfo_t09A8E906329422C3F0C059876801DD695B8D524D* ___textInfo_35;
	TMP_LineInfo_tB75C1965B58DB7B3A046C8CA55AD6AB92B6B17B3 ___lineInfo_36;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___vertexColor_37;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___underlineColor_38;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___strikethroughColor_39;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___highlightColor_40;
	TMP_FontStyleStack_t52885F172FADBC21346C835B5302167BDA8020DC ___basicStyleStack_41;
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___italicAngleStack_42;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___colorStack_43;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___underlineColorStack_44;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___strikethroughColorStack_45;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___highlightColorStack_46;
	TMP_TextProcessingStack_1_t57AECDCC936A7FF1D6CF66CA11560B28A675648D ___highlightStateStack_47;
	TMP_TextProcessingStack_1_tC8FAEB17246D3B171EFD11165A5761AE39B40D0C ___colorGradientStack_48;
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___sizeStack_49;
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___indentStack_50;
	TMP_TextProcessingStack_1_tA5C8CED87DD9E73F6359E23B334FFB5B6F813FD4 ___fontWeightStack_51;
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___styleStack_52;
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___baselineStack_53;
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___actionStack_54;
	TMP_TextProcessingStack_1_tB03E08F69415B281A5A81138F09E49EE58402DF9 ___materialReferenceStack_55;
	TMP_TextProcessingStack_1_t243EA1B5D7FD2295D6533B953F0BBE8F52EFB8A0 ___lineJustificationStack_56;
	int32_t ___spriteAnimationID_57;
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___currentFontAsset_58;
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___currentSpriteAsset_59;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___currentMaterial_60;
	int32_t ___currentMaterialIndex_61;
	Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 ___meshExtents_62;
	int32_t ___tagNoParsing_63;
	int32_t ___isNonBreakingSpace_64;
};

// ARWT.Marker.DetectionManager/MarkerDetection
struct MarkerDetection_tB2B8E475144ED5AE5A0BAFC42F3F79C6E57A9DA9  : public MulticastDelegate_t
{
};

// System.Action`1<UnityEngine.XR.ARFoundation.ARCameraFrameEventArgs>
struct Action_1_t54327BAFA15E24E002EFAE48D1AFFC020D368735  : public MulticastDelegate_t
{
};

// TMPro.TMP_TextProcessingStack`1<TMPro.WordWrapState>
struct TMP_TextProcessingStack_1_t2DDA00FFC64AF6E3AFD475AB2086D16C34787E0F 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	WordWrapStateU5BU5D_t473D59C9DBCC949CE72EF1EB471CBA152A6CEAC9* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// UnityEngine.Camera
struct Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

struct Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184_StaticFields
{
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPreCull
	CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD* ___onPreCull_4;
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPreRender
	CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD* ___onPreRender_5;
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPostRender
	CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD* ___onPostRender_6;
};

// UnityEngine.Canvas
struct Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

struct Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26_StaticFields
{
	// UnityEngine.Canvas/WillRenderCanvases UnityEngine.Canvas::preWillRenderCanvases
	WillRenderCanvases_tA4A6E66DBA797DCB45B995DBA449A9D1D80D0FBC* ___preWillRenderCanvases_4;
	// UnityEngine.Canvas/WillRenderCanvases UnityEngine.Canvas::willRenderCanvases
	WillRenderCanvases_tA4A6E66DBA797DCB45B995DBA449A9D1D80D0FBC* ___willRenderCanvases_5;
	// System.Action`1<System.Int32> UnityEngine.Canvas::<externBeginRenderOverlays>k__BackingField
	Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404* ___U3CexternBeginRenderOverlaysU3Ek__BackingField_6;
	// System.Action`2<System.Int32,System.Int32> UnityEngine.Canvas::<externRenderOverlaysBefore>k__BackingField
	Action_2_tD7438462601D3939500ED67463331FE00CFFBDB8* ___U3CexternRenderOverlaysBeforeU3Ek__BackingField_7;
	// System.Action`1<System.Int32> UnityEngine.Canvas::<externEndRenderOverlays>k__BackingField
	Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404* ___U3CexternEndRenderOverlaysU3Ek__BackingField_8;
};

// UnityEngine.LineRenderer
struct LineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D  : public Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF
{
};

// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// UnityEngine.RectTransform
struct RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5  : public Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1
{
};

struct RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_StaticFields
{
	// UnityEngine.RectTransform/ReapplyDrivenProperties UnityEngine.RectTransform::reapplyDrivenProperties
	ReapplyDrivenProperties_t3482EA130A01FF7EE2EEFE37F66A5215D08CFE24* ___reapplyDrivenProperties_4;
};

// ARWT.Core.Singleton`1<ARWT.Marker.DetectionManager>
struct Singleton_1_t30651B76710BA3532D2E3A14E07D5BDBA4E16542  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

struct Singleton_1_t30651B76710BA3532D2E3A14E07D5BDBA4E16542_StaticFields
{
	// System.Boolean ARWT.Core.Singleton`1::verbose
	bool ___verbose_4;
	// T ARWT.Core.Singleton`1::_instance
	DetectionManager_t070257CC1E0A2BBC84FC7DD8960C34BF8A13DA16* ____instance_5;
};

// UnityEngine.XR.ARFoundation.SubsystemLifecycleManager`3<UnityEngine.XR.ARSubsystems.XRCameraSubsystem,UnityEngine.XR.ARSubsystems.XRCameraSubsystemDescriptor,UnityEngine.XR.ARSubsystems.XRCameraSubsystem/Provider>
struct SubsystemLifecycleManager_3_t2810F2EBBCBEAEE830830E20CF311EBAD8EA983B  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// TSubsystem UnityEngine.XR.ARFoundation.SubsystemLifecycleManager`3::<subsystem>k__BackingField
	XRCameraSubsystem_t1F15E4BAEF03223F63AB57E49D1B5DE06749D140* ___U3CsubsystemU3Ek__BackingField_4;
};

struct SubsystemLifecycleManager_3_t2810F2EBBCBEAEE830830E20CF311EBAD8EA983B_StaticFields
{
	// System.Collections.Generic.List`1<TSubsystemDescriptor> UnityEngine.XR.ARFoundation.SubsystemLifecycleManager`3::s_SubsystemDescriptors
	List_1_tB62E7DBB1A743CF013D1542F79F59C2BB105B7AC* ___s_SubsystemDescriptors_5;
	// System.Collections.Generic.List`1<TSubsystem> UnityEngine.XR.ARFoundation.SubsystemLifecycleManager`3::s_SubsystemInstances
	List_1_t1C988AEFF3BCCFEF103EACA601923CD56DBB593C* ___s_SubsystemInstances_6;
};

// UnityEngine.XR.ARFoundation.SubsystemLifecycleManager`3<UnityEngine.XR.ARSubsystems.XRSessionSubsystem,UnityEngine.XR.ARSubsystems.XRSessionSubsystemDescriptor,UnityEngine.XR.ARSubsystems.XRSessionSubsystem/Provider>
struct SubsystemLifecycleManager_3_t7AC7A0198786D712CE4FE49E3789EE14BCC2DFD5  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// TSubsystem UnityEngine.XR.ARFoundation.SubsystemLifecycleManager`3::<subsystem>k__BackingField
	XRSessionSubsystem_t1E6E6CD0C279BA8BC4E4ED94E539552036B9C399* ___U3CsubsystemU3Ek__BackingField_4;
};

struct SubsystemLifecycleManager_3_t7AC7A0198786D712CE4FE49E3789EE14BCC2DFD5_StaticFields
{
	// System.Collections.Generic.List`1<TSubsystemDescriptor> UnityEngine.XR.ARFoundation.SubsystemLifecycleManager`3::s_SubsystemDescriptors
	List_1_tC86363A0A1DF8199DB382C6CDB5A1254F8660A34* ___s_SubsystemDescriptors_5;
	// System.Collections.Generic.List`1<TSubsystem> UnityEngine.XR.ARFoundation.SubsystemLifecycleManager`3::s_SubsystemInstances
	List_1_t3903923EFB501C3A0672A0E60558673B85435D8E* ___s_SubsystemInstances_6;
};

// UnityEngine.XR.ARFoundation.ARSessionOrigin
struct ARSessionOrigin_tE7B28A1A19500BCC02711397A19E330425830BC3  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.Camera UnityEngine.XR.ARFoundation.ARSessionOrigin::m_Camera
	Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* ___m_Camera_4;
	// UnityEngine.Transform UnityEngine.XR.ARFoundation.ARSessionOrigin::<trackablesParent>k__BackingField
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___U3CtrackablesParentU3Ek__BackingField_5;
	// System.Action`1<UnityEngine.XR.ARFoundation.ARTrackablesParentTransformChangedEventArgs> UnityEngine.XR.ARFoundation.ARSessionOrigin::trackablesParentTransformChanged
	Action_1_t2096FCE7327B89C5101BFB38155839F3166605FB* ___trackablesParentTransformChanged_6;
	// UnityEngine.GameObject UnityEngine.XR.ARFoundation.ARSessionOrigin::m_ContentOffsetGameObject
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___m_ContentOffsetGameObject_7;
};

// ARWT.Core.CameraController
struct CameraController_t0B540EC84654F847C56C1CA21F47B421EEAFD4B5  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.Matrix4x4 ARWT.Core.CameraController::defProj
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___defProj_4;
	// UnityEngine.Camera ARWT.Core.CameraController::cam
	Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* ___cam_5;
};

// CheckAdminPanel
struct CheckAdminPanel_t26E243FA4203846AD328049A026A939B9C97477C  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.GameObject CheckAdminPanel::PasswordHandling
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___PasswordHandling_4;
	// UnityEngine.GameObject CheckAdminPanel::PasswordItems
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___PasswordItems_5;
	// UnityEngine.GameObject CheckAdminPanel::AdminOptionsPanel
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___AdminOptionsPanel_6;
	// UnityEngine.GameObject CheckAdminPanel::Menu
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___Menu_7;
};

// ARWT.Core.FPSDisplay
struct FPSDisplay_tB19E85610E87C89C0B0DD56FCD19F90DE901A1F9  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.UI.Text ARWT.Core.FPSDisplay::fpsText
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___fpsText_4;
	// System.Single ARWT.Core.FPSDisplay::deltaTime
	float ___deltaTime_5;
};

// ARWT.Marker.GenericController
struct GenericController_t2AD20ABC5479AD3A29E145A09CE1B5784E92BF10  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.String ARWT.Marker.GenericController::markerToListen
	String_t* ___markerToListen_4;
	// UnityEngine.GameObject ARWT.Marker.GenericController::child
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___child_5;
	// System.Single ARWT.Marker.GenericController::updateSpeed
	float ___updateSpeed_6;
	// System.Single ARWT.Marker.GenericController::positionThreshold
	float ___positionThreshold_7;
	// UnityEngine.GameObject ARWT.Marker.GenericController::uiHelper
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___uiHelper_8;
	// UnityEngine.GameObject ARWT.Marker.GenericController::gameUI
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___gameUI_9;
	// System.Boolean ARWT.Marker.GenericController::firstTime
	bool ___firstTime_10;
};

// ARWT.Marker.MultiMarkerController
struct MultiMarkerController_tF884F15CCA4084E58B5A2D87001B42041C0927D4  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Collections.Generic.List`1<System.String> ARWT.Marker.MultiMarkerController::markers
	List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* ___markers_4;
	// UnityEngine.GameObject ARWT.Marker.MultiMarkerController::child
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___child_5;
	// System.Single ARWT.Marker.MultiMarkerController::updateSpeed
	float ___updateSpeed_6;
	// System.String ARWT.Marker.MultiMarkerController::currentMarker
	String_t* ___currentMarker_7;
	// System.Boolean ARWT.Marker.MultiMarkerController::firstTime
	bool ___firstTime_8;
};

// NavigationController
struct NavigationController_t70EC9C7C9A12D38AD5902657C952B7B5B09985B8  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.Vector3 NavigationController::<TargetPosition>k__BackingField
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___U3CTargetPositionU3Ek__BackingField_4;
	// UnityEngine.LineRenderer NavigationController::line
	LineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D* ___line_5;
	// UnityEngine.UI.Slider NavigationController::navigationYOffset
	Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F* ___navigationYOffset_6;
	// UnityEngine.AI.NavMeshPath NavigationController::path
	NavMeshPath_tC77ABF4A25FC0F0A94E8A70E304E114FE690A3A7* ___path_7;
};

// PasswordController
struct PasswordController_t9127B978A2ACFF05C4C8A8591A2F0339EC9FB0D8  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.UI.InputField PasswordController::PasswordInput
	InputField_tABEA115F23FBD374EBE80D4FAC1D15BD6E37A140* ___PasswordInput_4;
	// UnityEngine.GameObject PasswordController::adminoptionspanel
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___adminoptionspanel_5;
	// UnityEngine.GameObject PasswordController::delbutton
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___delbutton_6;
	// System.Int32 PasswordController::passwordconfirmed
	int32_t ___passwordconfirmed_7;
};

// PulsingLine
struct PulsingLine_tBE3A736CB8C97095F7E4B670E40E849D2D1E40AD  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.LineRenderer PulsingLine::r
	LineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D* ___r_4;
	// UnityEngine.Color32 PulsingLine::startColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___startColor_5;
	// UnityEngine.Color32 PulsingLine::endColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___endColor_6;
	// System.Single PulsingLine::lastColorChangeTime
	float ___lastColorChangeTime_7;
	// UnityEngine.Material PulsingLine::material
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material_8;
	// UnityEngine.Vector3 PulsingLine::startPos
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___startPos_9;
	// UnityEngine.Vector3 PulsingLine::endPos
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___endPos_10;
	// UnityEngine.Vector3[] PulsingLine::myPointsInLine
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___myPointsInLine_11;
};

// QrCodeRecenter
struct QrCodeRecenter_t48659C9EF1C81DDBDB76ECBB3F4181E7C175D365  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.XR.ARFoundation.ARSession QrCodeRecenter::session
	ARSession_t13374A44A01F2C6D90578F93E0F0DA2482BE3014* ___session_4;
	// UnityEngine.XR.ARFoundation.ARSessionOrigin QrCodeRecenter::sessionOrigin
	ARSessionOrigin_tE7B28A1A19500BCC02711397A19E330425830BC3* ___sessionOrigin_5;
	// UnityEngine.XR.ARFoundation.ARCameraManager QrCodeRecenter::cameraManager
	ARCameraManager_t6E957EA922911B8447D086D9FB1F860EC967BD9F* ___cameraManager_6;
	// UnityEngine.GameObject QrCodeRecenter::qrCodeScanningPanel
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___qrCodeScanningPanel_7;
	// UnityEngine.Texture2D QrCodeRecenter::cameraImageTexture
	Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ___cameraImageTexture_8;
	// ZXing.IBarcodeReader QrCodeRecenter::reader
	RuntimeObject* ___reader_9;
	// System.Boolean QrCodeRecenter::scanningEnabled
	bool ___scanningEnabled_10;
	// TargetFacade QrCodeRecenter::startitem
	TargetFacade_tAA52A697AACAC6BBC707F8B97B5975CD124D9CB1* ___startitem_11;
};

// ARWT.Example.Rotator
struct Rotator_t0E916AEA08E506FFFFABEA3166AA92404DACB657  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Single ARWT.Example.Rotator::speed
	float ___speed_4;
};

// SetUiText
struct SetUiText_t138DAB61BB52772194BAD42D32248EE7C549BEC9  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// TMPro.TMP_Text SetUiText::textField
	TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* ___textField_4;
};

// TargetFacade
struct TargetFacade_tAA52A697AACAC6BBC707F8B97B5975CD124D9CB1  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.String TargetFacade::Name
	String_t* ___Name_4;
};

// TargetHandler
struct TargetHandler_t26EBF84B13B13596F2259A92408AE301B247E751  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// NavigationController TargetHandler::navigationController
	NavigationController_t70EC9C7C9A12D38AD5902657C952B7B5B09985B8* ___navigationController_4;
	// TMPro.TMP_Dropdown TargetHandler::targetDataDropdown1
	TMP_Dropdown_t73B37BFDA0D005451C7B750938AFB1748E5EA504* ___targetDataDropdown1_5;
	// TMPro.TMP_Dropdown TargetHandler::targetDataDropdown2
	TMP_Dropdown_t73B37BFDA0D005451C7B750938AFB1748E5EA504* ___targetDataDropdown2_6;
	// TMPro.TMP_Dropdown TargetHandler::targetDataDropdown3
	TMP_Dropdown_t73B37BFDA0D005451C7B750938AFB1748E5EA504* ___targetDataDropdown3_7;
	// UnityEngine.UI.Slider TargetHandler::navigationZOffset
	Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F* ___navigationZOffset_8;
	// UnityEngine.UI.Slider TargetHandler::navigationXOffset
	Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F* ___navigationXOffset_9;
	// System.String TargetHandler::item
	String_t* ___item_10;
	// System.Int32 TargetHandler::value
	int32_t ___value_11;
	// UnityEngine.GameObject TargetHandler::targetObjectPrefab
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___targetObjectPrefab_12;
	// UnityEngine.Transform[] TargetHandler::targetObjectsParentTransforms
	TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24* ___targetObjectsParentTransforms_13;
	// System.Collections.Generic.List`1<TargetFacade> TargetHandler::currentTargetItems
	List_1_tD7576C87B68BC6CE723331751C2CE61223447FBE* ___currentTargetItems_14;
	// Target[] TargetHandler::targets
	TargetU5BU5D_t3617959FFC066149C517739390E51D1F9E793E6B* ___targets_15;
	// System.Collections.Generic.List`1<Target> TargetHandler::targetlist
	List_1_tFB3A1D83FA1EFCD81B10C01A5395798068BCE79A* ___targetlist_16;
	// System.Int32 TargetHandler::selected
	int32_t ___selected_17;
	// System.String TargetHandler::saveprevious
	String_t* ___saveprevious_18;
	// UnityEngine.Color32 TargetHandler::unired
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___unired_19;
	// UnityEngine.Color32 TargetHandler::uniblue
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___uniblue_20;
	// UnityEngine.UI.InputField TargetHandler::NewTargetNameInput
	InputField_tABEA115F23FBD374EBE80D4FAC1D15BD6E37A140* ___NewTargetNameInput_21;
	// System.String TargetHandler::outputstring
	String_t* ___outputstring_22;
};

// UnityEngine.EventSystems.UIBehaviour
struct UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

// ARWT.Marker.UIHandler
struct UIHandler_t8B96B7F863FD3DA2D297F60EE6AC384195DE5469  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.GameObject ARWT.Marker.UIHandler::parent
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___parent_4;
	// UnityEngine.GameObject ARWT.Marker.UIHandler::UI
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___UI_5;
};

// ARWT.Marker.UIScaler
struct UIScaler_t2B477AD4FC6FDD2F13458D97C5C5663890E528D5  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.RectTransform ARWT.Marker.UIScaler::panel
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___panel_4;
};

// WebGLSupport.WebGLInput
struct WebGLInput_t20A7ED221656A06B7688C4010D4E7E8E74C4CE16  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Int32 WebGLSupport.WebGLInput::id
	int32_t ___id_6;
	// WebGLSupport.IInputField WebGLSupport.WebGLInput::input
	RuntimeObject* ___input_7;
	// System.Boolean WebGLSupport.WebGLInput::blurBlock
	bool ___blurBlock_8;
	// System.Boolean WebGLSupport.WebGLInput::showHtmlElement
	bool ___showHtmlElement_9;
};

struct WebGLInput_t20A7ED221656A06B7688C4010D4E7E8E74C4CE16_StaticFields
{
	// System.Collections.Generic.Dictionary`2<System.Int32,WebGLSupport.WebGLInput> WebGLSupport.WebGLInput::instances
	Dictionary_2_t02972806B8AE7773FA4016F73A171E1AEAB527C6* ___instances_4;
	// System.String WebGLSupport.WebGLInput::<CanvasId>k__BackingField
	String_t* ___U3CCanvasIdU3Ek__BackingField_5;
};

// WebGLSupport.WebGLInputMobile
struct WebGLInputMobile_t98BD6DEA2871F796049970F99FBBFCBACF318ACF  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Int32 WebGLSupport.WebGLInputMobile::id
	int32_t ___id_5;
};

struct WebGLInputMobile_t98BD6DEA2871F796049970F99FBBFCBACF318ACF_StaticFields
{
	// System.Collections.Generic.Dictionary`2<System.Int32,WebGLSupport.WebGLInputMobile> WebGLSupport.WebGLInputMobile::instances
	Dictionary_2_tCC64C94C8DF1B73C6C7A4649650F9A9C33BF7925* ___instances_4;
};

// UnityEngine.XR.ARFoundation.ARCameraManager
struct ARCameraManager_t6E957EA922911B8447D086D9FB1F860EC967BD9F  : public SubsystemLifecycleManager_3_t2810F2EBBCBEAEE830830E20CF311EBAD8EA983B
{
	// UnityEngine.XR.ARSubsystems.CameraFocusMode UnityEngine.XR.ARFoundation.ARCameraManager::m_FocusMode
	int32_t ___m_FocusMode_7;
	// UnityEngine.XR.ARSubsystems.LightEstimationMode UnityEngine.XR.ARFoundation.ARCameraManager::m_LightEstimationMode
	int32_t ___m_LightEstimationMode_8;
	// System.Boolean UnityEngine.XR.ARFoundation.ARCameraManager::m_AutoFocus
	bool ___m_AutoFocus_9;
	// UnityEngine.XR.ARFoundation.LightEstimation UnityEngine.XR.ARFoundation.ARCameraManager::m_LightEstimation
	int32_t ___m_LightEstimation_10;
	// UnityEngine.XR.ARFoundation.CameraFacingDirection UnityEngine.XR.ARFoundation.ARCameraManager::m_FacingDirection
	int32_t ___m_FacingDirection_11;
	// System.Action`1<UnityEngine.XR.ARFoundation.ARCameraFrameEventArgs> UnityEngine.XR.ARFoundation.ARCameraManager::frameReceived
	Action_1_t54327BAFA15E24E002EFAE48D1AFFC020D368735* ___frameReceived_12;
	// System.Collections.Generic.List`1<UnityEngine.XR.ARFoundation.ARTextureInfo> UnityEngine.XR.ARFoundation.ARCameraManager::m_TextureInfos
	List_1_tBEE41A3C84ED348850866AD76B66E9D9B19767FF* ___m_TextureInfos_15;
	// UnityEngine.Camera UnityEngine.XR.ARFoundation.ARCameraManager::m_Camera
	Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* ___m_Camera_16;
	// System.Boolean UnityEngine.XR.ARFoundation.ARCameraManager::m_PreRenderInvertCullingValue
	bool ___m_PreRenderInvertCullingValue_17;
	// UnityEngine.XR.ARFoundation.ARTextureInfo UnityEngine.XR.ARFoundation.ARCameraManager::m_CameraGrainInfo
	ARTextureInfo_t008DA41DF9555306803303A0353619E5C0917261 ___m_CameraGrainInfo_18;
};

struct ARCameraManager_t6E957EA922911B8447D086D9FB1F860EC967BD9F_StaticFields
{
	// System.Collections.Generic.List`1<UnityEngine.Texture2D> UnityEngine.XR.ARFoundation.ARCameraManager::s_Textures
	List_1_t0F231C3F13EBA1FF9081BD61489D01AA3CBE59D4* ___s_Textures_13;
	// System.Collections.Generic.List`1<System.Int32> UnityEngine.XR.ARFoundation.ARCameraManager::s_PropertyIds
	List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* ___s_PropertyIds_14;
};

// UnityEngine.XR.ARFoundation.ARSession
struct ARSession_t13374A44A01F2C6D90578F93E0F0DA2482BE3014  : public SubsystemLifecycleManager_3_t7AC7A0198786D712CE4FE49E3789EE14BCC2DFD5
{
	// System.Boolean UnityEngine.XR.ARFoundation.ARSession::m_AttemptUpdate
	bool ___m_AttemptUpdate_7;
	// System.Boolean UnityEngine.XR.ARFoundation.ARSession::m_MatchFrameRate
	bool ___m_MatchFrameRate_8;
	// UnityEngine.XR.ARFoundation.TrackingMode UnityEngine.XR.ARFoundation.ARSession::m_TrackingMode
	int32_t ___m_TrackingMode_9;
	// System.Int32 UnityEngine.XR.ARFoundation.ARSession::m_VSyncCount
	int32_t ___m_VSyncCount_11;
	// System.Int32 UnityEngine.XR.ARFoundation.ARSession::m_TargetFrameRate
	int32_t ___m_TargetFrameRate_12;
	// System.Boolean UnityEngine.XR.ARFoundation.ARSession::m_WasFrameRateSet
	bool ___m_WasFrameRateSet_13;
};

struct ARSession_t13374A44A01F2C6D90578F93E0F0DA2482BE3014_StaticFields
{
	// System.Action`1<UnityEngine.XR.ARFoundation.ARSessionStateChangedEventArgs> UnityEngine.XR.ARFoundation.ARSession::stateChanged
	Action_1_t325C602D999E964DB72210E493635E83F8D6CE68* ___stateChanged_10;
	// UnityEngine.XR.ARFoundation.ARSessionState UnityEngine.XR.ARFoundation.ARSession::s_State
	int32_t ___s_State_14;
	// UnityEngine.XR.ARSubsystems.NotTrackingReason UnityEngine.XR.ARFoundation.ARSession::s_NotTrackingReason
	int32_t ___s_NotTrackingReason_15;
	// UnityEngine.XR.ARSubsystems.SessionAvailability UnityEngine.XR.ARFoundation.ARSession::s_Availability
	int32_t ___s_Availability_16;
};

// ARWT.Marker.DetectionManager
struct DetectionManager_t070257CC1E0A2BBC84FC7DD8960C34BF8A13DA16  : public Singleton_1_t30651B76710BA3532D2E3A14E07D5BDBA4E16542
{
};

struct DetectionManager_t070257CC1E0A2BBC84FC7DD8960C34BF8A13DA16_StaticFields
{
	// ARWT.Marker.DetectionManager/MarkerDetection ARWT.Marker.DetectionManager::onMarkerDetected
	MarkerDetection_tB2B8E475144ED5AE5A0BAFC42F3F79C6E57A9DA9* ___onMarkerDetected_6;
	// ARWT.Marker.DetectionManager/MarkerDetection ARWT.Marker.DetectionManager::onMarkerVisible
	MarkerDetection_tB2B8E475144ED5AE5A0BAFC42F3F79C6E57A9DA9* ___onMarkerVisible_7;
	// ARWT.Marker.DetectionManager/MarkerDetection ARWT.Marker.DetectionManager::onMarkerLost
	MarkerDetection_tB2B8E475144ED5AE5A0BAFC42F3F79C6E57A9DA9* ___onMarkerLost_8;
};

// UnityEngine.EventSystems.EventSystem
struct EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707  : public UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D
{
	// System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseInputModule> UnityEngine.EventSystems.EventSystem::m_SystemInputModules
	List_1_tA5BDE435C735A082941CD33D212F97F4AE9FA55F* ___m_SystemInputModules_4;
	// UnityEngine.EventSystems.BaseInputModule UnityEngine.EventSystems.EventSystem::m_CurrentInputModule
	BaseInputModule_tF3B7C22AF1419B2AC9ECE6589357DC1B88ED96B1* ___m_CurrentInputModule_5;
	// UnityEngine.GameObject UnityEngine.EventSystems.EventSystem::m_FirstSelected
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___m_FirstSelected_7;
	// System.Boolean UnityEngine.EventSystems.EventSystem::m_sendNavigationEvents
	bool ___m_sendNavigationEvents_8;
	// System.Int32 UnityEngine.EventSystems.EventSystem::m_DragThreshold
	int32_t ___m_DragThreshold_9;
	// UnityEngine.GameObject UnityEngine.EventSystems.EventSystem::m_CurrentSelected
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___m_CurrentSelected_10;
	// System.Boolean UnityEngine.EventSystems.EventSystem::m_HasFocus
	bool ___m_HasFocus_11;
	// System.Boolean UnityEngine.EventSystems.EventSystem::m_SelectionGuard
	bool ___m_SelectionGuard_12;
	// UnityEngine.EventSystems.BaseEventData UnityEngine.EventSystems.EventSystem::m_DummyData
	BaseEventData_tE03A848325C0AE8E76C6CA15FD86395EBF83364F* ___m_DummyData_13;
};

struct EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707_StaticFields
{
	// System.Collections.Generic.List`1<UnityEngine.EventSystems.EventSystem> UnityEngine.EventSystems.EventSystem::m_EventSystems
	List_1_tF2FE88545EFEC788CAAE6C74EC2F78E937FCCAC3* ___m_EventSystems_6;
	// System.Comparison`1<UnityEngine.EventSystems.RaycastResult> UnityEngine.EventSystems.EventSystem::s_RaycastComparer
	Comparison_1_t9FCAC8C8CE160A96C5AAD2DE1D353DCE8A2FEEFC* ___s_RaycastComparer_14;
	// UnityEngine.EventSystems.EventSystem/UIToolkitOverrideConfig UnityEngine.EventSystems.EventSystem::s_UIToolkitOverride
	UIToolkitOverrideConfig_t4E6B4528E38BCA7DA72C45424634806200A50182 ___s_UIToolkitOverride_15;
};

// UnityEngine.UI.Graphic
struct Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931  : public UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D
{
	// UnityEngine.Material UnityEngine.UI.Graphic::m_Material
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_Material_6;
	// UnityEngine.Color UnityEngine.UI.Graphic::m_Color
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_Color_7;
	// System.Boolean UnityEngine.UI.Graphic::m_SkipLayoutUpdate
	bool ___m_SkipLayoutUpdate_8;
	// System.Boolean UnityEngine.UI.Graphic::m_SkipMaterialUpdate
	bool ___m_SkipMaterialUpdate_9;
	// System.Boolean UnityEngine.UI.Graphic::m_RaycastTarget
	bool ___m_RaycastTarget_10;
	// UnityEngine.Vector4 UnityEngine.UI.Graphic::m_RaycastPadding
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___m_RaycastPadding_11;
	// UnityEngine.RectTransform UnityEngine.UI.Graphic::m_RectTransform
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_RectTransform_12;
	// UnityEngine.CanvasRenderer UnityEngine.UI.Graphic::m_CanvasRenderer
	CanvasRenderer_tAB9A55A976C4E3B2B37D0CE5616E5685A8B43860* ___m_CanvasRenderer_13;
	// UnityEngine.Canvas UnityEngine.UI.Graphic::m_Canvas
	Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* ___m_Canvas_14;
	// System.Boolean UnityEngine.UI.Graphic::m_VertsDirty
	bool ___m_VertsDirty_15;
	// System.Boolean UnityEngine.UI.Graphic::m_MaterialDirty
	bool ___m_MaterialDirty_16;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyLayoutCallback
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___m_OnDirtyLayoutCallback_17;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyVertsCallback
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___m_OnDirtyVertsCallback_18;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyMaterialCallback
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___m_OnDirtyMaterialCallback_19;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::m_CachedMesh
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___m_CachedMesh_22;
	// UnityEngine.Vector2[] UnityEngine.UI.Graphic::m_CachedUvs
	Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* ___m_CachedUvs_23;
	// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween> UnityEngine.UI.Graphic::m_ColorTweenRunner
	TweenRunner_1_t5BB0582F926E75E2FE795492679A6CF55A4B4BC4* ___m_ColorTweenRunner_24;
	// System.Boolean UnityEngine.UI.Graphic::<useLegacyMeshGeneration>k__BackingField
	bool ___U3CuseLegacyMeshGenerationU3Ek__BackingField_25;
};

struct Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931_StaticFields
{
	// UnityEngine.Material UnityEngine.UI.Graphic::s_DefaultUI
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___s_DefaultUI_4;
	// UnityEngine.Texture2D UnityEngine.UI.Graphic::s_WhiteTexture
	Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ___s_WhiteTexture_5;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::s_Mesh
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___s_Mesh_20;
	// UnityEngine.UI.VertexHelper UnityEngine.UI.Graphic::s_VertexHelper
	VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE* ___s_VertexHelper_21;
};

// UnityEngine.UI.Selectable
struct Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712  : public UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D
{
	// System.Boolean UnityEngine.UI.Selectable::m_EnableCalled
	bool ___m_EnableCalled_6;
	// UnityEngine.UI.Navigation UnityEngine.UI.Selectable::m_Navigation
	Navigation_t4D2E201D65749CF4E104E8AC1232CF1D6F14795C ___m_Navigation_7;
	// UnityEngine.UI.Selectable/Transition UnityEngine.UI.Selectable::m_Transition
	int32_t ___m_Transition_8;
	// UnityEngine.UI.ColorBlock UnityEngine.UI.Selectable::m_Colors
	ColorBlock_tDD7C62E7AFE442652FC98F8D058CE8AE6BFD7C11 ___m_Colors_9;
	// UnityEngine.UI.SpriteState UnityEngine.UI.Selectable::m_SpriteState
	SpriteState_tC8199570BE6337FB5C49347C97892B4222E5AACD ___m_SpriteState_10;
	// UnityEngine.UI.AnimationTriggers UnityEngine.UI.Selectable::m_AnimationTriggers
	AnimationTriggers_tA0DC06F89C5280C6DD972F6F4C8A56D7F4F79074* ___m_AnimationTriggers_11;
	// System.Boolean UnityEngine.UI.Selectable::m_Interactable
	bool ___m_Interactable_12;
	// UnityEngine.UI.Graphic UnityEngine.UI.Selectable::m_TargetGraphic
	Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931* ___m_TargetGraphic_13;
	// System.Boolean UnityEngine.UI.Selectable::m_GroupsAllowInteraction
	bool ___m_GroupsAllowInteraction_14;
	// System.Int32 UnityEngine.UI.Selectable::m_CurrentIndex
	int32_t ___m_CurrentIndex_15;
	// System.Boolean UnityEngine.UI.Selectable::<isPointerInside>k__BackingField
	bool ___U3CisPointerInsideU3Ek__BackingField_16;
	// System.Boolean UnityEngine.UI.Selectable::<isPointerDown>k__BackingField
	bool ___U3CisPointerDownU3Ek__BackingField_17;
	// System.Boolean UnityEngine.UI.Selectable::<hasSelection>k__BackingField
	bool ___U3ChasSelectionU3Ek__BackingField_18;
	// System.Collections.Generic.List`1<UnityEngine.CanvasGroup> UnityEngine.UI.Selectable::m_CanvasGroupCache
	List_1_t2CDCA768E7F493F5EDEBC75AEB200FD621354E35* ___m_CanvasGroupCache_19;
};

struct Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712_StaticFields
{
	// UnityEngine.UI.Selectable[] UnityEngine.UI.Selectable::s_Selectables
	SelectableU5BU5D_t4160E135F02A40F75A63F787D36F31FEC6FE91A9* ___s_Selectables_4;
	// System.Int32 UnityEngine.UI.Selectable::s_SelectableCount
	int32_t ___s_SelectableCount_5;
};

// UnityEngine.UI.InputField
struct InputField_tABEA115F23FBD374EBE80D4FAC1D15BD6E37A140  : public Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712
{
	// UnityEngine.TouchScreenKeyboard UnityEngine.UI.InputField::m_Keyboard
	TouchScreenKeyboard_tE87B78A3DAED69816B44C99270A734682E093E7A* ___m_Keyboard_20;
	// UnityEngine.UI.Text UnityEngine.UI.InputField::m_TextComponent
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___m_TextComponent_22;
	// UnityEngine.UI.Graphic UnityEngine.UI.InputField::m_Placeholder
	Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931* ___m_Placeholder_23;
	// UnityEngine.UI.InputField/ContentType UnityEngine.UI.InputField::m_ContentType
	int32_t ___m_ContentType_24;
	// UnityEngine.UI.InputField/InputType UnityEngine.UI.InputField::m_InputType
	int32_t ___m_InputType_25;
	// System.Char UnityEngine.UI.InputField::m_AsteriskChar
	Il2CppChar ___m_AsteriskChar_26;
	// UnityEngine.TouchScreenKeyboardType UnityEngine.UI.InputField::m_KeyboardType
	int32_t ___m_KeyboardType_27;
	// UnityEngine.UI.InputField/LineType UnityEngine.UI.InputField::m_LineType
	int32_t ___m_LineType_28;
	// System.Boolean UnityEngine.UI.InputField::m_HideMobileInput
	bool ___m_HideMobileInput_29;
	// UnityEngine.UI.InputField/CharacterValidation UnityEngine.UI.InputField::m_CharacterValidation
	int32_t ___m_CharacterValidation_30;
	// System.Int32 UnityEngine.UI.InputField::m_CharacterLimit
	int32_t ___m_CharacterLimit_31;
	// UnityEngine.UI.InputField/SubmitEvent UnityEngine.UI.InputField::m_OnSubmit
	SubmitEvent_t1E0F5A2AB28D0DB55AE18E8DA99147D86492DD5D* ___m_OnSubmit_32;
	// UnityEngine.UI.InputField/EndEditEvent UnityEngine.UI.InputField::m_OnDidEndEdit
	EndEditEvent_t946A962BA13CF60BB0BE7AD091DA041FD788E655* ___m_OnDidEndEdit_33;
	// UnityEngine.UI.InputField/OnChangeEvent UnityEngine.UI.InputField::m_OnValueChanged
	OnChangeEvent_tE4829F88300B0E0E0D1B78B453AF25FC1AA55E2F* ___m_OnValueChanged_34;
	// UnityEngine.UI.InputField/OnValidateInput UnityEngine.UI.InputField::m_OnValidateInput
	OnValidateInput_t48916A4E9C9FD6204401FF0808C2B7A93D73418B* ___m_OnValidateInput_35;
	// UnityEngine.Color UnityEngine.UI.InputField::m_CaretColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_CaretColor_36;
	// System.Boolean UnityEngine.UI.InputField::m_CustomCaretColor
	bool ___m_CustomCaretColor_37;
	// UnityEngine.Color UnityEngine.UI.InputField::m_SelectionColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_SelectionColor_38;
	// System.String UnityEngine.UI.InputField::m_Text
	String_t* ___m_Text_39;
	// System.Single UnityEngine.UI.InputField::m_CaretBlinkRate
	float ___m_CaretBlinkRate_40;
	// System.Int32 UnityEngine.UI.InputField::m_CaretWidth
	int32_t ___m_CaretWidth_41;
	// System.Boolean UnityEngine.UI.InputField::m_ReadOnly
	bool ___m_ReadOnly_42;
	// System.Boolean UnityEngine.UI.InputField::m_ShouldActivateOnSelect
	bool ___m_ShouldActivateOnSelect_43;
	// System.Int32 UnityEngine.UI.InputField::m_CaretPosition
	int32_t ___m_CaretPosition_44;
	// System.Int32 UnityEngine.UI.InputField::m_CaretSelectPosition
	int32_t ___m_CaretSelectPosition_45;
	// UnityEngine.RectTransform UnityEngine.UI.InputField::caretRectTrans
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___caretRectTrans_46;
	// UnityEngine.UIVertex[] UnityEngine.UI.InputField::m_CursorVerts
	UIVertexU5BU5D_tBC532486B45D071A520751A90E819C77BA4E3D2F* ___m_CursorVerts_47;
	// UnityEngine.TextGenerator UnityEngine.UI.InputField::m_InputTextCache
	TextGenerator_t85D00417640A53953556C01F9D4E7DDE1ABD8FEC* ___m_InputTextCache_48;
	// UnityEngine.CanvasRenderer UnityEngine.UI.InputField::m_CachedInputRenderer
	CanvasRenderer_tAB9A55A976C4E3B2B37D0CE5616E5685A8B43860* ___m_CachedInputRenderer_49;
	// System.Boolean UnityEngine.UI.InputField::m_PreventFontCallback
	bool ___m_PreventFontCallback_50;
	// UnityEngine.Mesh UnityEngine.UI.InputField::m_Mesh
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___m_Mesh_51;
	// System.Boolean UnityEngine.UI.InputField::m_AllowInput
	bool ___m_AllowInput_52;
	// System.Boolean UnityEngine.UI.InputField::m_ShouldActivateNextUpdate
	bool ___m_ShouldActivateNextUpdate_53;
	// System.Boolean UnityEngine.UI.InputField::m_UpdateDrag
	bool ___m_UpdateDrag_54;
	// System.Boolean UnityEngine.UI.InputField::m_DragPositionOutOfBounds
	bool ___m_DragPositionOutOfBounds_55;
	// System.Boolean UnityEngine.UI.InputField::m_CaretVisible
	bool ___m_CaretVisible_58;
	// UnityEngine.Coroutine UnityEngine.UI.InputField::m_BlinkCoroutine
	Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* ___m_BlinkCoroutine_59;
	// System.Single UnityEngine.UI.InputField::m_BlinkStartTime
	float ___m_BlinkStartTime_60;
	// System.Int32 UnityEngine.UI.InputField::m_DrawStart
	int32_t ___m_DrawStart_61;
	// System.Int32 UnityEngine.UI.InputField::m_DrawEnd
	int32_t ___m_DrawEnd_62;
	// UnityEngine.Coroutine UnityEngine.UI.InputField::m_DragCoroutine
	Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* ___m_DragCoroutine_63;
	// System.String UnityEngine.UI.InputField::m_OriginalText
	String_t* ___m_OriginalText_64;
	// System.Boolean UnityEngine.UI.InputField::m_WasCanceled
	bool ___m_WasCanceled_65;
	// System.Boolean UnityEngine.UI.InputField::m_HasDoneFocusTransition
	bool ___m_HasDoneFocusTransition_66;
	// UnityEngine.WaitForSecondsRealtime UnityEngine.UI.InputField::m_WaitForSecondsRealtime
	WaitForSecondsRealtime_tA8CE0AAB4B0C872B843E7973637037D17682BA01* ___m_WaitForSecondsRealtime_67;
	// System.Boolean UnityEngine.UI.InputField::m_TouchKeyboardAllowsInPlaceEditing
	bool ___m_TouchKeyboardAllowsInPlaceEditing_68;
	// UnityEngine.Event UnityEngine.UI.InputField::m_ProcessingEvent
	Event_tEBC6F24B56CE22B9C9AD1AC6C24A6B83BC3860CB* ___m_ProcessingEvent_70;
};

struct InputField_tABEA115F23FBD374EBE80D4FAC1D15BD6E37A140_StaticFields
{
	// System.Char[] UnityEngine.UI.InputField::kSeparators
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___kSeparators_21;
};

// UnityEngine.UI.MaskableGraphic
struct MaskableGraphic_tFC5B6BE351C90DE53744DF2A70940242774B361E  : public Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931
{
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculateStencil
	bool ___m_ShouldRecalculateStencil_26;
	// UnityEngine.Material UnityEngine.UI.MaskableGraphic::m_MaskMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_MaskMaterial_27;
	// UnityEngine.UI.RectMask2D UnityEngine.UI.MaskableGraphic::m_ParentMask
	RectMask2D_tACF92BE999C791A665BD1ADEABF5BCEB82846670* ___m_ParentMask_28;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_Maskable
	bool ___m_Maskable_29;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IsMaskingGraphic
	bool ___m_IsMaskingGraphic_30;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IncludeForMasking
	bool ___m_IncludeForMasking_31;
	// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent UnityEngine.UI.MaskableGraphic::m_OnCullStateChanged
	CullStateChangedEvent_t6073CD0D951EC1256BF74B8F9107D68FC89B99B8* ___m_OnCullStateChanged_32;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculate
	bool ___m_ShouldRecalculate_33;
	// System.Int32 UnityEngine.UI.MaskableGraphic::m_StencilValue
	int32_t ___m_StencilValue_34;
	// UnityEngine.Vector3[] UnityEngine.UI.MaskableGraphic::m_Corners
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___m_Corners_35;
};

// UnityEngine.UI.Slider
struct Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F  : public Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712
{
	// UnityEngine.RectTransform UnityEngine.UI.Slider::m_FillRect
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_FillRect_20;
	// UnityEngine.RectTransform UnityEngine.UI.Slider::m_HandleRect
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_HandleRect_21;
	// UnityEngine.UI.Slider/Direction UnityEngine.UI.Slider::m_Direction
	int32_t ___m_Direction_22;
	// System.Single UnityEngine.UI.Slider::m_MinValue
	float ___m_MinValue_23;
	// System.Single UnityEngine.UI.Slider::m_MaxValue
	float ___m_MaxValue_24;
	// System.Boolean UnityEngine.UI.Slider::m_WholeNumbers
	bool ___m_WholeNumbers_25;
	// System.Single UnityEngine.UI.Slider::m_Value
	float ___m_Value_26;
	// UnityEngine.UI.Slider/SliderEvent UnityEngine.UI.Slider::m_OnValueChanged
	SliderEvent_t92A82EF6C62E15AF92B640FE2D960E877E8C6555* ___m_OnValueChanged_27;
	// UnityEngine.UI.Image UnityEngine.UI.Slider::m_FillImage
	Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* ___m_FillImage_28;
	// UnityEngine.Transform UnityEngine.UI.Slider::m_FillTransform
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___m_FillTransform_29;
	// UnityEngine.RectTransform UnityEngine.UI.Slider::m_FillContainerRect
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_FillContainerRect_30;
	// UnityEngine.Transform UnityEngine.UI.Slider::m_HandleTransform
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___m_HandleTransform_31;
	// UnityEngine.RectTransform UnityEngine.UI.Slider::m_HandleContainerRect
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_HandleContainerRect_32;
	// UnityEngine.Vector2 UnityEngine.UI.Slider::m_Offset
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_Offset_33;
	// UnityEngine.DrivenRectTransformTracker UnityEngine.UI.Slider::m_Tracker
	DrivenRectTransformTracker_tFB0706C933E3C68E4F377C204FCEEF091F1EE0B1 ___m_Tracker_34;
	// System.Boolean UnityEngine.UI.Slider::m_DelayedUpdateVisuals
	bool ___m_DelayedUpdateVisuals_35;
};

// TMPro.TMP_Dropdown
struct TMP_Dropdown_t73B37BFDA0D005451C7B750938AFB1748E5EA504  : public Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712
{
	// UnityEngine.RectTransform TMPro.TMP_Dropdown::m_Template
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_Template_20;
	// TMPro.TMP_Text TMPro.TMP_Dropdown::m_CaptionText
	TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* ___m_CaptionText_21;
	// UnityEngine.UI.Image TMPro.TMP_Dropdown::m_CaptionImage
	Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* ___m_CaptionImage_22;
	// UnityEngine.UI.Graphic TMPro.TMP_Dropdown::m_Placeholder
	Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931* ___m_Placeholder_23;
	// TMPro.TMP_Text TMPro.TMP_Dropdown::m_ItemText
	TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* ___m_ItemText_24;
	// UnityEngine.UI.Image TMPro.TMP_Dropdown::m_ItemImage
	Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* ___m_ItemImage_25;
	// System.Int32 TMPro.TMP_Dropdown::m_Value
	int32_t ___m_Value_26;
	// TMPro.TMP_Dropdown/OptionDataList TMPro.TMP_Dropdown::m_Options
	OptionDataList_tF66EA4801BFA499F010E6EFF89ED760BF4F0BEE1* ___m_Options_27;
	// TMPro.TMP_Dropdown/DropdownEvent TMPro.TMP_Dropdown::m_OnValueChanged
	DropdownEvent_tFD4609E80240BC887A6D31F9F3C252A8A6843E91* ___m_OnValueChanged_28;
	// System.Single TMPro.TMP_Dropdown::m_AlphaFadeSpeed
	float ___m_AlphaFadeSpeed_29;
	// UnityEngine.GameObject TMPro.TMP_Dropdown::m_Dropdown
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___m_Dropdown_30;
	// UnityEngine.GameObject TMPro.TMP_Dropdown::m_Blocker
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___m_Blocker_31;
	// System.Collections.Generic.List`1<TMPro.TMP_Dropdown/DropdownItem> TMPro.TMP_Dropdown::m_Items
	List_1_tA7EEECF976A6B4957450A4D235070C9324ED1A97* ___m_Items_32;
	// TMPro.TweenRunner`1<TMPro.FloatTween> TMPro.TMP_Dropdown::m_AlphaTweenRunner
	TweenRunner_1_tF277B20625C8B1939DC85508C4679C690757395E* ___m_AlphaTweenRunner_33;
	// System.Boolean TMPro.TMP_Dropdown::validTemplate
	bool ___validTemplate_34;
	// UnityEngine.Coroutine TMPro.TMP_Dropdown::m_Coroutine
	Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* ___m_Coroutine_35;
};

struct TMP_Dropdown_t73B37BFDA0D005451C7B750938AFB1748E5EA504_StaticFields
{
	// TMPro.TMP_Dropdown/OptionData TMPro.TMP_Dropdown::s_NoOptionData
	OptionData_tFDFBCB4A5FB860E95AE46FDAC112DB4140A8525E* ___s_NoOptionData_36;
};

// TMPro.TMP_InputField
struct TMP_InputField_t3488E0EE8C3DF56C6A328EC95D1BEEA2DF4A7D5F  : public Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712
{
	// UnityEngine.TouchScreenKeyboard TMPro.TMP_InputField::m_SoftKeyboard
	TouchScreenKeyboard_tE87B78A3DAED69816B44C99270A734682E093E7A* ___m_SoftKeyboard_20;
	// UnityEngine.RectTransform TMPro.TMP_InputField::m_RectTransform
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_RectTransform_22;
	// UnityEngine.RectTransform TMPro.TMP_InputField::m_TextViewport
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_TextViewport_23;
	// UnityEngine.UI.RectMask2D TMPro.TMP_InputField::m_TextComponentRectMask
	RectMask2D_tACF92BE999C791A665BD1ADEABF5BCEB82846670* ___m_TextComponentRectMask_24;
	// UnityEngine.UI.RectMask2D TMPro.TMP_InputField::m_TextViewportRectMask
	RectMask2D_tACF92BE999C791A665BD1ADEABF5BCEB82846670* ___m_TextViewportRectMask_25;
	// UnityEngine.Rect TMPro.TMP_InputField::m_CachedViewportRect
	Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___m_CachedViewportRect_26;
	// TMPro.TMP_Text TMPro.TMP_InputField::m_TextComponent
	TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* ___m_TextComponent_27;
	// UnityEngine.RectTransform TMPro.TMP_InputField::m_TextComponentRectTransform
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_TextComponentRectTransform_28;
	// UnityEngine.UI.Graphic TMPro.TMP_InputField::m_Placeholder
	Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931* ___m_Placeholder_29;
	// UnityEngine.UI.Scrollbar TMPro.TMP_InputField::m_VerticalScrollbar
	Scrollbar_t7CDC9B956698D9385A11E4C12964CD51477072C3* ___m_VerticalScrollbar_30;
	// TMPro.TMP_ScrollbarEventHandler TMPro.TMP_InputField::m_VerticalScrollbarEventHandler
	TMP_ScrollbarEventHandler_t84C389ED6800977DAEA8C025E18C9F3321888F4D* ___m_VerticalScrollbarEventHandler_31;
	// System.Boolean TMPro.TMP_InputField::m_IsDrivenByLayoutComponents
	bool ___m_IsDrivenByLayoutComponents_32;
	// UnityEngine.UI.LayoutGroup TMPro.TMP_InputField::m_LayoutGroup
	LayoutGroup_t32417833C700E77EDFA7C20034DAFD26604E05CE* ___m_LayoutGroup_33;
	// UnityEngine.EventSystems.IScrollHandler TMPro.TMP_InputField::m_IScrollHandlerParent
	RuntimeObject* ___m_IScrollHandlerParent_34;
	// System.Single TMPro.TMP_InputField::m_ScrollPosition
	float ___m_ScrollPosition_35;
	// System.Single TMPro.TMP_InputField::m_ScrollSensitivity
	float ___m_ScrollSensitivity_36;
	// TMPro.TMP_InputField/ContentType TMPro.TMP_InputField::m_ContentType
	int32_t ___m_ContentType_37;
	// TMPro.TMP_InputField/InputType TMPro.TMP_InputField::m_InputType
	int32_t ___m_InputType_38;
	// System.Char TMPro.TMP_InputField::m_AsteriskChar
	Il2CppChar ___m_AsteriskChar_39;
	// UnityEngine.TouchScreenKeyboardType TMPro.TMP_InputField::m_KeyboardType
	int32_t ___m_KeyboardType_40;
	// TMPro.TMP_InputField/LineType TMPro.TMP_InputField::m_LineType
	int32_t ___m_LineType_41;
	// System.Boolean TMPro.TMP_InputField::m_HideMobileInput
	bool ___m_HideMobileInput_42;
	// System.Boolean TMPro.TMP_InputField::m_HideSoftKeyboard
	bool ___m_HideSoftKeyboard_43;
	// TMPro.TMP_InputField/CharacterValidation TMPro.TMP_InputField::m_CharacterValidation
	int32_t ___m_CharacterValidation_44;
	// System.String TMPro.TMP_InputField::m_RegexValue
	String_t* ___m_RegexValue_45;
	// System.Single TMPro.TMP_InputField::m_GlobalPointSize
	float ___m_GlobalPointSize_46;
	// System.Int32 TMPro.TMP_InputField::m_CharacterLimit
	int32_t ___m_CharacterLimit_47;
	// TMPro.TMP_InputField/SubmitEvent TMPro.TMP_InputField::m_OnEndEdit
	SubmitEvent_tF7E2843B6A79D94B8EEEA259707F77BD1773B500* ___m_OnEndEdit_48;
	// TMPro.TMP_InputField/SubmitEvent TMPro.TMP_InputField::m_OnSubmit
	SubmitEvent_tF7E2843B6A79D94B8EEEA259707F77BD1773B500* ___m_OnSubmit_49;
	// TMPro.TMP_InputField/SelectionEvent TMPro.TMP_InputField::m_OnSelect
	SelectionEvent_t8FC75B869F70C9F0BF13390AD0237AD310511119* ___m_OnSelect_50;
	// TMPro.TMP_InputField/SelectionEvent TMPro.TMP_InputField::m_OnDeselect
	SelectionEvent_t8FC75B869F70C9F0BF13390AD0237AD310511119* ___m_OnDeselect_51;
	// TMPro.TMP_InputField/TextSelectionEvent TMPro.TMP_InputField::m_OnTextSelection
	TextSelectionEvent_t6C496DAA6DAF01754C27C58A94A5FBA562BA9401* ___m_OnTextSelection_52;
	// TMPro.TMP_InputField/TextSelectionEvent TMPro.TMP_InputField::m_OnEndTextSelection
	TextSelectionEvent_t6C496DAA6DAF01754C27C58A94A5FBA562BA9401* ___m_OnEndTextSelection_53;
	// TMPro.TMP_InputField/OnChangeEvent TMPro.TMP_InputField::m_OnValueChanged
	OnChangeEvent_tDBB13012ABF81899E4DFDD82258EB7E9BB7A9F1D* ___m_OnValueChanged_54;
	// TMPro.TMP_InputField/TouchScreenKeyboardEvent TMPro.TMP_InputField::m_OnTouchScreenKeyboardStatusChanged
	TouchScreenKeyboardEvent_tB9BEBEF5D6F2B52547EF3861FF437AC25BC06AF1* ___m_OnTouchScreenKeyboardStatusChanged_55;
	// TMPro.TMP_InputField/OnValidateInput TMPro.TMP_InputField::m_OnValidateInput
	OnValidateInput_t88ECDC5C12A807AF2A5761369563B0FAA6A25530* ___m_OnValidateInput_56;
	// UnityEngine.Color TMPro.TMP_InputField::m_CaretColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_CaretColor_57;
	// System.Boolean TMPro.TMP_InputField::m_CustomCaretColor
	bool ___m_CustomCaretColor_58;
	// UnityEngine.Color TMPro.TMP_InputField::m_SelectionColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_SelectionColor_59;
	// System.String TMPro.TMP_InputField::m_Text
	String_t* ___m_Text_60;
	// System.Single TMPro.TMP_InputField::m_CaretBlinkRate
	float ___m_CaretBlinkRate_61;
	// System.Int32 TMPro.TMP_InputField::m_CaretWidth
	int32_t ___m_CaretWidth_62;
	// System.Boolean TMPro.TMP_InputField::m_ReadOnly
	bool ___m_ReadOnly_63;
	// System.Boolean TMPro.TMP_InputField::m_RichText
	bool ___m_RichText_64;
	// System.Int32 TMPro.TMP_InputField::m_StringPosition
	int32_t ___m_StringPosition_65;
	// System.Int32 TMPro.TMP_InputField::m_StringSelectPosition
	int32_t ___m_StringSelectPosition_66;
	// System.Int32 TMPro.TMP_InputField::m_CaretPosition
	int32_t ___m_CaretPosition_67;
	// System.Int32 TMPro.TMP_InputField::m_CaretSelectPosition
	int32_t ___m_CaretSelectPosition_68;
	// UnityEngine.RectTransform TMPro.TMP_InputField::caretRectTrans
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___caretRectTrans_69;
	// UnityEngine.UIVertex[] TMPro.TMP_InputField::m_CursorVerts
	UIVertexU5BU5D_tBC532486B45D071A520751A90E819C77BA4E3D2F* ___m_CursorVerts_70;
	// UnityEngine.CanvasRenderer TMPro.TMP_InputField::m_CachedInputRenderer
	CanvasRenderer_tAB9A55A976C4E3B2B37D0CE5616E5685A8B43860* ___m_CachedInputRenderer_71;
	// UnityEngine.Vector2 TMPro.TMP_InputField::m_LastPosition
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_LastPosition_72;
	// UnityEngine.Mesh TMPro.TMP_InputField::m_Mesh
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___m_Mesh_73;
	// System.Boolean TMPro.TMP_InputField::m_AllowInput
	bool ___m_AllowInput_74;
	// System.Boolean TMPro.TMP_InputField::m_ShouldActivateNextUpdate
	bool ___m_ShouldActivateNextUpdate_75;
	// System.Boolean TMPro.TMP_InputField::m_UpdateDrag
	bool ___m_UpdateDrag_76;
	// System.Boolean TMPro.TMP_InputField::m_DragPositionOutOfBounds
	bool ___m_DragPositionOutOfBounds_77;
	// System.Boolean TMPro.TMP_InputField::m_CaretVisible
	bool ___m_CaretVisible_80;
	// UnityEngine.Coroutine TMPro.TMP_InputField::m_BlinkCoroutine
	Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* ___m_BlinkCoroutine_81;
	// System.Single TMPro.TMP_InputField::m_BlinkStartTime
	float ___m_BlinkStartTime_82;
	// UnityEngine.Coroutine TMPro.TMP_InputField::m_DragCoroutine
	Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* ___m_DragCoroutine_83;
	// System.String TMPro.TMP_InputField::m_OriginalText
	String_t* ___m_OriginalText_84;
	// System.Boolean TMPro.TMP_InputField::m_WasCanceled
	bool ___m_WasCanceled_85;
	// System.Boolean TMPro.TMP_InputField::m_HasDoneFocusTransition
	bool ___m_HasDoneFocusTransition_86;
	// UnityEngine.WaitForSecondsRealtime TMPro.TMP_InputField::m_WaitForSecondsRealtime
	WaitForSecondsRealtime_tA8CE0AAB4B0C872B843E7973637037D17682BA01* ___m_WaitForSecondsRealtime_87;
	// System.Boolean TMPro.TMP_InputField::m_PreventCallback
	bool ___m_PreventCallback_88;
	// System.Boolean TMPro.TMP_InputField::m_TouchKeyboardAllowsInPlaceEditing
	bool ___m_TouchKeyboardAllowsInPlaceEditing_89;
	// System.Boolean TMPro.TMP_InputField::m_IsTextComponentUpdateRequired
	bool ___m_IsTextComponentUpdateRequired_90;
	// System.Boolean TMPro.TMP_InputField::m_isLastKeyBackspace
	bool ___m_isLastKeyBackspace_91;
	// System.Single TMPro.TMP_InputField::m_PointerDownClickStartTime
	float ___m_PointerDownClickStartTime_92;
	// System.Single TMPro.TMP_InputField::m_KeyDownStartTime
	float ___m_KeyDownStartTime_93;
	// System.Single TMPro.TMP_InputField::m_DoubleClickDelay
	float ___m_DoubleClickDelay_94;
	// System.Boolean TMPro.TMP_InputField::m_IsCompositionActive
	bool ___m_IsCompositionActive_96;
	// System.Boolean TMPro.TMP_InputField::m_ShouldUpdateIMEWindowPosition
	bool ___m_ShouldUpdateIMEWindowPosition_97;
	// System.Int32 TMPro.TMP_InputField::m_PreviousIMEInsertionLine
	int32_t ___m_PreviousIMEInsertionLine_98;
	// TMPro.TMP_FontAsset TMPro.TMP_InputField::m_GlobalFontAsset
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___m_GlobalFontAsset_99;
	// System.Boolean TMPro.TMP_InputField::m_OnFocusSelectAll
	bool ___m_OnFocusSelectAll_100;
	// System.Boolean TMPro.TMP_InputField::m_isSelectAll
	bool ___m_isSelectAll_101;
	// System.Boolean TMPro.TMP_InputField::m_ResetOnDeActivation
	bool ___m_ResetOnDeActivation_102;
	// System.Boolean TMPro.TMP_InputField::m_SelectionStillActive
	bool ___m_SelectionStillActive_103;
	// System.Boolean TMPro.TMP_InputField::m_ReleaseSelection
	bool ___m_ReleaseSelection_104;
	// UnityEngine.GameObject TMPro.TMP_InputField::m_PreviouslySelectedObject
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___m_PreviouslySelectedObject_105;
	// System.Boolean TMPro.TMP_InputField::m_RestoreOriginalTextOnEscape
	bool ___m_RestoreOriginalTextOnEscape_106;
	// System.Boolean TMPro.TMP_InputField::m_isRichTextEditingAllowed
	bool ___m_isRichTextEditingAllowed_107;
	// System.Int32 TMPro.TMP_InputField::m_LineLimit
	int32_t ___m_LineLimit_108;
	// TMPro.TMP_InputValidator TMPro.TMP_InputField::m_InputValidator
	TMP_InputValidator_t3429AF61284AE19180C3FB81C0C7D2F90165EA98* ___m_InputValidator_109;
	// System.Boolean TMPro.TMP_InputField::m_isSelected
	bool ___m_isSelected_110;
	// System.Boolean TMPro.TMP_InputField::m_IsStringPositionDirty
	bool ___m_IsStringPositionDirty_111;
	// System.Boolean TMPro.TMP_InputField::m_IsCaretPositionDirty
	bool ___m_IsCaretPositionDirty_112;
	// System.Boolean TMPro.TMP_InputField::m_forceRectTransformAdjustment
	bool ___m_forceRectTransformAdjustment_113;
	// UnityEngine.Event TMPro.TMP_InputField::m_ProcessingEvent
	Event_tEBC6F24B56CE22B9C9AD1AC6C24A6B83BC3860CB* ___m_ProcessingEvent_114;
};

struct TMP_InputField_t3488E0EE8C3DF56C6A328EC95D1BEEA2DF4A7D5F_StaticFields
{
	// System.Char[] TMPro.TMP_InputField::kSeparators
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___kSeparators_21;
};

// TMPro.TMP_Text
struct TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9  : public MaskableGraphic_tFC5B6BE351C90DE53744DF2A70940242774B361E
{
	// System.String TMPro.TMP_Text::m_text
	String_t* ___m_text_36;
	// System.Boolean TMPro.TMP_Text::m_IsTextBackingStringDirty
	bool ___m_IsTextBackingStringDirty_37;
	// TMPro.ITextPreprocessor TMPro.TMP_Text::m_TextPreprocessor
	RuntimeObject* ___m_TextPreprocessor_38;
	// System.Boolean TMPro.TMP_Text::m_isRightToLeft
	bool ___m_isRightToLeft_39;
	// TMPro.TMP_FontAsset TMPro.TMP_Text::m_fontAsset
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___m_fontAsset_40;
	// TMPro.TMP_FontAsset TMPro.TMP_Text::m_currentFontAsset
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___m_currentFontAsset_41;
	// System.Boolean TMPro.TMP_Text::m_isSDFShader
	bool ___m_isSDFShader_42;
	// UnityEngine.Material TMPro.TMP_Text::m_sharedMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_sharedMaterial_43;
	// UnityEngine.Material TMPro.TMP_Text::m_currentMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_currentMaterial_44;
	// System.Int32 TMPro.TMP_Text::m_currentMaterialIndex
	int32_t ___m_currentMaterialIndex_48;
	// UnityEngine.Material[] TMPro.TMP_Text::m_fontSharedMaterials
	MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D* ___m_fontSharedMaterials_49;
	// UnityEngine.Material TMPro.TMP_Text::m_fontMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_fontMaterial_50;
	// UnityEngine.Material[] TMPro.TMP_Text::m_fontMaterials
	MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D* ___m_fontMaterials_51;
	// System.Boolean TMPro.TMP_Text::m_isMaterialDirty
	bool ___m_isMaterialDirty_52;
	// UnityEngine.Color32 TMPro.TMP_Text::m_fontColor32
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_fontColor32_53;
	// UnityEngine.Color TMPro.TMP_Text::m_fontColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_fontColor_54;
	// UnityEngine.Color32 TMPro.TMP_Text::m_underlineColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_underlineColor_56;
	// UnityEngine.Color32 TMPro.TMP_Text::m_strikethroughColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_strikethroughColor_57;
	// System.Boolean TMPro.TMP_Text::m_enableVertexGradient
	bool ___m_enableVertexGradient_58;
	// TMPro.ColorMode TMPro.TMP_Text::m_colorMode
	int32_t ___m_colorMode_59;
	// TMPro.VertexGradient TMPro.TMP_Text::m_fontColorGradient
	VertexGradient_t2C057B53C0EA6E987C2B7BAB0305E686DA1C9A8F ___m_fontColorGradient_60;
	// TMPro.TMP_ColorGradient TMPro.TMP_Text::m_fontColorGradientPreset
	TMP_ColorGradient_t17B51752B4E9499A1FF7D875DCEC1D15A0F4AEBB* ___m_fontColorGradientPreset_61;
	// TMPro.TMP_SpriteAsset TMPro.TMP_Text::m_spriteAsset
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___m_spriteAsset_62;
	// System.Boolean TMPro.TMP_Text::m_tintAllSprites
	bool ___m_tintAllSprites_63;
	// System.Boolean TMPro.TMP_Text::m_tintSprite
	bool ___m_tintSprite_64;
	// UnityEngine.Color32 TMPro.TMP_Text::m_spriteColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_spriteColor_65;
	// TMPro.TMP_StyleSheet TMPro.TMP_Text::m_StyleSheet
	TMP_StyleSheet_t70C71699F5CB2D855C361DBB78A44C901236C859* ___m_StyleSheet_66;
	// TMPro.TMP_Style TMPro.TMP_Text::m_TextStyle
	TMP_Style_tA9E5B1B35EBFE24EF980CEA03251B638282E120C* ___m_TextStyle_67;
	// System.Int32 TMPro.TMP_Text::m_TextStyleHashCode
	int32_t ___m_TextStyleHashCode_68;
	// System.Boolean TMPro.TMP_Text::m_overrideHtmlColors
	bool ___m_overrideHtmlColors_69;
	// UnityEngine.Color32 TMPro.TMP_Text::m_faceColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_faceColor_70;
	// UnityEngine.Color32 TMPro.TMP_Text::m_outlineColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_outlineColor_71;
	// System.Single TMPro.TMP_Text::m_outlineWidth
	float ___m_outlineWidth_72;
	// System.Single TMPro.TMP_Text::m_fontSize
	float ___m_fontSize_73;
	// System.Single TMPro.TMP_Text::m_currentFontSize
	float ___m_currentFontSize_74;
	// System.Single TMPro.TMP_Text::m_fontSizeBase
	float ___m_fontSizeBase_75;
	// TMPro.TMP_TextProcessingStack`1<System.Single> TMPro.TMP_Text::m_sizeStack
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___m_sizeStack_76;
	// TMPro.FontWeight TMPro.TMP_Text::m_fontWeight
	int32_t ___m_fontWeight_77;
	// TMPro.FontWeight TMPro.TMP_Text::m_FontWeightInternal
	int32_t ___m_FontWeightInternal_78;
	// TMPro.TMP_TextProcessingStack`1<TMPro.FontWeight> TMPro.TMP_Text::m_FontWeightStack
	TMP_TextProcessingStack_1_tA5C8CED87DD9E73F6359E23B334FFB5B6F813FD4 ___m_FontWeightStack_79;
	// System.Boolean TMPro.TMP_Text::m_enableAutoSizing
	bool ___m_enableAutoSizing_80;
	// System.Single TMPro.TMP_Text::m_maxFontSize
	float ___m_maxFontSize_81;
	// System.Single TMPro.TMP_Text::m_minFontSize
	float ___m_minFontSize_82;
	// System.Int32 TMPro.TMP_Text::m_AutoSizeIterationCount
	int32_t ___m_AutoSizeIterationCount_83;
	// System.Int32 TMPro.TMP_Text::m_AutoSizeMaxIterationCount
	int32_t ___m_AutoSizeMaxIterationCount_84;
	// System.Boolean TMPro.TMP_Text::m_IsAutoSizePointSizeSet
	bool ___m_IsAutoSizePointSizeSet_85;
	// System.Single TMPro.TMP_Text::m_fontSizeMin
	float ___m_fontSizeMin_86;
	// System.Single TMPro.TMP_Text::m_fontSizeMax
	float ___m_fontSizeMax_87;
	// TMPro.FontStyles TMPro.TMP_Text::m_fontStyle
	int32_t ___m_fontStyle_88;
	// TMPro.FontStyles TMPro.TMP_Text::m_FontStyleInternal
	int32_t ___m_FontStyleInternal_89;
	// TMPro.TMP_FontStyleStack TMPro.TMP_Text::m_fontStyleStack
	TMP_FontStyleStack_t52885F172FADBC21346C835B5302167BDA8020DC ___m_fontStyleStack_90;
	// System.Boolean TMPro.TMP_Text::m_isUsingBold
	bool ___m_isUsingBold_91;
	// TMPro.HorizontalAlignmentOptions TMPro.TMP_Text::m_HorizontalAlignment
	int32_t ___m_HorizontalAlignment_92;
	// TMPro.VerticalAlignmentOptions TMPro.TMP_Text::m_VerticalAlignment
	int32_t ___m_VerticalAlignment_93;
	// TMPro.TextAlignmentOptions TMPro.TMP_Text::m_textAlignment
	int32_t ___m_textAlignment_94;
	// TMPro.HorizontalAlignmentOptions TMPro.TMP_Text::m_lineJustification
	int32_t ___m_lineJustification_95;
	// TMPro.TMP_TextProcessingStack`1<TMPro.HorizontalAlignmentOptions> TMPro.TMP_Text::m_lineJustificationStack
	TMP_TextProcessingStack_1_t243EA1B5D7FD2295D6533B953F0BBE8F52EFB8A0 ___m_lineJustificationStack_96;
	// UnityEngine.Vector3[] TMPro.TMP_Text::m_textContainerLocalCorners
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___m_textContainerLocalCorners_97;
	// System.Single TMPro.TMP_Text::m_characterSpacing
	float ___m_characterSpacing_98;
	// System.Single TMPro.TMP_Text::m_cSpacing
	float ___m_cSpacing_99;
	// System.Single TMPro.TMP_Text::m_monoSpacing
	float ___m_monoSpacing_100;
	// System.Single TMPro.TMP_Text::m_wordSpacing
	float ___m_wordSpacing_101;
	// System.Single TMPro.TMP_Text::m_lineSpacing
	float ___m_lineSpacing_102;
	// System.Single TMPro.TMP_Text::m_lineSpacingDelta
	float ___m_lineSpacingDelta_103;
	// System.Single TMPro.TMP_Text::m_lineHeight
	float ___m_lineHeight_104;
	// System.Boolean TMPro.TMP_Text::m_IsDrivenLineSpacing
	bool ___m_IsDrivenLineSpacing_105;
	// System.Single TMPro.TMP_Text::m_lineSpacingMax
	float ___m_lineSpacingMax_106;
	// System.Single TMPro.TMP_Text::m_paragraphSpacing
	float ___m_paragraphSpacing_107;
	// System.Single TMPro.TMP_Text::m_charWidthMaxAdj
	float ___m_charWidthMaxAdj_108;
	// System.Single TMPro.TMP_Text::m_charWidthAdjDelta
	float ___m_charWidthAdjDelta_109;
	// System.Boolean TMPro.TMP_Text::m_enableWordWrapping
	bool ___m_enableWordWrapping_110;
	// System.Boolean TMPro.TMP_Text::m_isCharacterWrappingEnabled
	bool ___m_isCharacterWrappingEnabled_111;
	// System.Boolean TMPro.TMP_Text::m_isNonBreakingSpace
	bool ___m_isNonBreakingSpace_112;
	// System.Boolean TMPro.TMP_Text::m_isIgnoringAlignment
	bool ___m_isIgnoringAlignment_113;
	// System.Single TMPro.TMP_Text::m_wordWrappingRatios
	float ___m_wordWrappingRatios_114;
	// TMPro.TextOverflowModes TMPro.TMP_Text::m_overflowMode
	int32_t ___m_overflowMode_115;
	// System.Int32 TMPro.TMP_Text::m_firstOverflowCharacterIndex
	int32_t ___m_firstOverflowCharacterIndex_116;
	// TMPro.TMP_Text TMPro.TMP_Text::m_linkedTextComponent
	TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* ___m_linkedTextComponent_117;
	// TMPro.TMP_Text TMPro.TMP_Text::parentLinkedComponent
	TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* ___parentLinkedComponent_118;
	// System.Boolean TMPro.TMP_Text::m_isTextTruncated
	bool ___m_isTextTruncated_119;
	// System.Boolean TMPro.TMP_Text::m_enableKerning
	bool ___m_enableKerning_120;
	// System.Single TMPro.TMP_Text::m_GlyphHorizontalAdvanceAdjustment
	float ___m_GlyphHorizontalAdvanceAdjustment_121;
	// System.Boolean TMPro.TMP_Text::m_enableExtraPadding
	bool ___m_enableExtraPadding_122;
	// System.Boolean TMPro.TMP_Text::checkPaddingRequired
	bool ___checkPaddingRequired_123;
	// System.Boolean TMPro.TMP_Text::m_isRichText
	bool ___m_isRichText_124;
	// System.Boolean TMPro.TMP_Text::m_parseCtrlCharacters
	bool ___m_parseCtrlCharacters_125;
	// System.Boolean TMPro.TMP_Text::m_isOverlay
	bool ___m_isOverlay_126;
	// System.Boolean TMPro.TMP_Text::m_isOrthographic
	bool ___m_isOrthographic_127;
	// System.Boolean TMPro.TMP_Text::m_isCullingEnabled
	bool ___m_isCullingEnabled_128;
	// System.Boolean TMPro.TMP_Text::m_isMaskingEnabled
	bool ___m_isMaskingEnabled_129;
	// System.Boolean TMPro.TMP_Text::isMaskUpdateRequired
	bool ___isMaskUpdateRequired_130;
	// System.Boolean TMPro.TMP_Text::m_ignoreCulling
	bool ___m_ignoreCulling_131;
	// TMPro.TextureMappingOptions TMPro.TMP_Text::m_horizontalMapping
	int32_t ___m_horizontalMapping_132;
	// TMPro.TextureMappingOptions TMPro.TMP_Text::m_verticalMapping
	int32_t ___m_verticalMapping_133;
	// System.Single TMPro.TMP_Text::m_uvLineOffset
	float ___m_uvLineOffset_134;
	// TMPro.TextRenderFlags TMPro.TMP_Text::m_renderMode
	int32_t ___m_renderMode_135;
	// TMPro.VertexSortingOrder TMPro.TMP_Text::m_geometrySortingOrder
	int32_t ___m_geometrySortingOrder_136;
	// System.Boolean TMPro.TMP_Text::m_IsTextObjectScaleStatic
	bool ___m_IsTextObjectScaleStatic_137;
	// System.Boolean TMPro.TMP_Text::m_VertexBufferAutoSizeReduction
	bool ___m_VertexBufferAutoSizeReduction_138;
	// System.Int32 TMPro.TMP_Text::m_firstVisibleCharacter
	int32_t ___m_firstVisibleCharacter_139;
	// System.Int32 TMPro.TMP_Text::m_maxVisibleCharacters
	int32_t ___m_maxVisibleCharacters_140;
	// System.Int32 TMPro.TMP_Text::m_maxVisibleWords
	int32_t ___m_maxVisibleWords_141;
	// System.Int32 TMPro.TMP_Text::m_maxVisibleLines
	int32_t ___m_maxVisibleLines_142;
	// System.Boolean TMPro.TMP_Text::m_useMaxVisibleDescender
	bool ___m_useMaxVisibleDescender_143;
	// System.Int32 TMPro.TMP_Text::m_pageToDisplay
	int32_t ___m_pageToDisplay_144;
	// System.Boolean TMPro.TMP_Text::m_isNewPage
	bool ___m_isNewPage_145;
	// UnityEngine.Vector4 TMPro.TMP_Text::m_margin
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___m_margin_146;
	// System.Single TMPro.TMP_Text::m_marginLeft
	float ___m_marginLeft_147;
	// System.Single TMPro.TMP_Text::m_marginRight
	float ___m_marginRight_148;
	// System.Single TMPro.TMP_Text::m_marginWidth
	float ___m_marginWidth_149;
	// System.Single TMPro.TMP_Text::m_marginHeight
	float ___m_marginHeight_150;
	// System.Single TMPro.TMP_Text::m_width
	float ___m_width_151;
	// TMPro.TMP_TextInfo TMPro.TMP_Text::m_textInfo
	TMP_TextInfo_t09A8E906329422C3F0C059876801DD695B8D524D* ___m_textInfo_152;
	// System.Boolean TMPro.TMP_Text::m_havePropertiesChanged
	bool ___m_havePropertiesChanged_153;
	// System.Boolean TMPro.TMP_Text::m_isUsingLegacyAnimationComponent
	bool ___m_isUsingLegacyAnimationComponent_154;
	// UnityEngine.Transform TMPro.TMP_Text::m_transform
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___m_transform_155;
	// UnityEngine.RectTransform TMPro.TMP_Text::m_rectTransform
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_rectTransform_156;
	// UnityEngine.Vector2 TMPro.TMP_Text::m_PreviousRectTransformSize
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_PreviousRectTransformSize_157;
	// UnityEngine.Vector2 TMPro.TMP_Text::m_PreviousPivotPosition
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_PreviousPivotPosition_158;
	// System.Boolean TMPro.TMP_Text::<autoSizeTextContainer>k__BackingField
	bool ___U3CautoSizeTextContainerU3Ek__BackingField_159;
	// System.Boolean TMPro.TMP_Text::m_autoSizeTextContainer
	bool ___m_autoSizeTextContainer_160;
	// UnityEngine.Mesh TMPro.TMP_Text::m_mesh
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___m_mesh_161;
	// System.Boolean TMPro.TMP_Text::m_isVolumetricText
	bool ___m_isVolumetricText_162;
	// System.Action`1<TMPro.TMP_TextInfo> TMPro.TMP_Text::OnPreRenderText
	Action_1_tB93AB717F9D419A1BEC832FF76E74EAA32184CC1* ___OnPreRenderText_165;
	// TMPro.TMP_SpriteAnimator TMPro.TMP_Text::m_spriteAnimator
	TMP_SpriteAnimator_t2E0F016A61CA343E3222FF51E7CF0E53F9F256E4* ___m_spriteAnimator_166;
	// System.Single TMPro.TMP_Text::m_flexibleHeight
	float ___m_flexibleHeight_167;
	// System.Single TMPro.TMP_Text::m_flexibleWidth
	float ___m_flexibleWidth_168;
	// System.Single TMPro.TMP_Text::m_minWidth
	float ___m_minWidth_169;
	// System.Single TMPro.TMP_Text::m_minHeight
	float ___m_minHeight_170;
	// System.Single TMPro.TMP_Text::m_maxWidth
	float ___m_maxWidth_171;
	// System.Single TMPro.TMP_Text::m_maxHeight
	float ___m_maxHeight_172;
	// UnityEngine.UI.LayoutElement TMPro.TMP_Text::m_LayoutElement
	LayoutElement_tB1F24CC11AF4AA87015C8D8EE06D22349C5BF40A* ___m_LayoutElement_173;
	// System.Single TMPro.TMP_Text::m_preferredWidth
	float ___m_preferredWidth_174;
	// System.Single TMPro.TMP_Text::m_renderedWidth
	float ___m_renderedWidth_175;
	// System.Boolean TMPro.TMP_Text::m_isPreferredWidthDirty
	bool ___m_isPreferredWidthDirty_176;
	// System.Single TMPro.TMP_Text::m_preferredHeight
	float ___m_preferredHeight_177;
	// System.Single TMPro.TMP_Text::m_renderedHeight
	float ___m_renderedHeight_178;
	// System.Boolean TMPro.TMP_Text::m_isPreferredHeightDirty
	bool ___m_isPreferredHeightDirty_179;
	// System.Boolean TMPro.TMP_Text::m_isCalculatingPreferredValues
	bool ___m_isCalculatingPreferredValues_180;
	// System.Int32 TMPro.TMP_Text::m_layoutPriority
	int32_t ___m_layoutPriority_181;
	// System.Boolean TMPro.TMP_Text::m_isLayoutDirty
	bool ___m_isLayoutDirty_182;
	// System.Boolean TMPro.TMP_Text::m_isAwake
	bool ___m_isAwake_183;
	// System.Boolean TMPro.TMP_Text::m_isWaitingOnResourceLoad
	bool ___m_isWaitingOnResourceLoad_184;
	// TMPro.TMP_Text/TextInputSources TMPro.TMP_Text::m_inputSource
	int32_t ___m_inputSource_185;
	// System.Single TMPro.TMP_Text::m_fontScaleMultiplier
	float ___m_fontScaleMultiplier_186;
	// System.Single TMPro.TMP_Text::tag_LineIndent
	float ___tag_LineIndent_190;
	// System.Single TMPro.TMP_Text::tag_Indent
	float ___tag_Indent_191;
	// TMPro.TMP_TextProcessingStack`1<System.Single> TMPro.TMP_Text::m_indentStack
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___m_indentStack_192;
	// System.Boolean TMPro.TMP_Text::tag_NoParsing
	bool ___tag_NoParsing_193;
	// System.Boolean TMPro.TMP_Text::m_isParsingText
	bool ___m_isParsingText_194;
	// UnityEngine.Matrix4x4 TMPro.TMP_Text::m_FXMatrix
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___m_FXMatrix_195;
	// System.Boolean TMPro.TMP_Text::m_isFXMatrixSet
	bool ___m_isFXMatrixSet_196;
	// TMPro.TMP_Text/UnicodeChar[] TMPro.TMP_Text::m_TextProcessingArray
	UnicodeCharU5BU5D_t67F27D09F8EB28D2C42DFF16FE60054F157012F5* ___m_TextProcessingArray_197;
	// System.Int32 TMPro.TMP_Text::m_InternalTextProcessingArraySize
	int32_t ___m_InternalTextProcessingArraySize_198;
	// TMPro.TMP_CharacterInfo[] TMPro.TMP_Text::m_internalCharacterInfo
	TMP_CharacterInfoU5BU5D_t297D56FCF66DAA99D8FEA7C30F9F3926902C5B99* ___m_internalCharacterInfo_199;
	// System.Int32 TMPro.TMP_Text::m_totalCharacterCount
	int32_t ___m_totalCharacterCount_200;
	// System.Int32 TMPro.TMP_Text::m_characterCount
	int32_t ___m_characterCount_207;
	// System.Int32 TMPro.TMP_Text::m_firstCharacterOfLine
	int32_t ___m_firstCharacterOfLine_208;
	// System.Int32 TMPro.TMP_Text::m_firstVisibleCharacterOfLine
	int32_t ___m_firstVisibleCharacterOfLine_209;
	// System.Int32 TMPro.TMP_Text::m_lastCharacterOfLine
	int32_t ___m_lastCharacterOfLine_210;
	// System.Int32 TMPro.TMP_Text::m_lastVisibleCharacterOfLine
	int32_t ___m_lastVisibleCharacterOfLine_211;
	// System.Int32 TMPro.TMP_Text::m_lineNumber
	int32_t ___m_lineNumber_212;
	// System.Int32 TMPro.TMP_Text::m_lineVisibleCharacterCount
	int32_t ___m_lineVisibleCharacterCount_213;
	// System.Int32 TMPro.TMP_Text::m_pageNumber
	int32_t ___m_pageNumber_214;
	// System.Single TMPro.TMP_Text::m_PageAscender
	float ___m_PageAscender_215;
	// System.Single TMPro.TMP_Text::m_maxTextAscender
	float ___m_maxTextAscender_216;
	// System.Single TMPro.TMP_Text::m_maxCapHeight
	float ___m_maxCapHeight_217;
	// System.Single TMPro.TMP_Text::m_ElementAscender
	float ___m_ElementAscender_218;
	// System.Single TMPro.TMP_Text::m_ElementDescender
	float ___m_ElementDescender_219;
	// System.Single TMPro.TMP_Text::m_maxLineAscender
	float ___m_maxLineAscender_220;
	// System.Single TMPro.TMP_Text::m_maxLineDescender
	float ___m_maxLineDescender_221;
	// System.Single TMPro.TMP_Text::m_startOfLineAscender
	float ___m_startOfLineAscender_222;
	// System.Single TMPro.TMP_Text::m_startOfLineDescender
	float ___m_startOfLineDescender_223;
	// System.Single TMPro.TMP_Text::m_lineOffset
	float ___m_lineOffset_224;
	// TMPro.Extents TMPro.TMP_Text::m_meshExtents
	Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 ___m_meshExtents_225;
	// UnityEngine.Color32 TMPro.TMP_Text::m_htmlColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_htmlColor_226;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.TMP_Text::m_colorStack
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___m_colorStack_227;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.TMP_Text::m_underlineColorStack
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___m_underlineColorStack_228;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.TMP_Text::m_strikethroughColorStack
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___m_strikethroughColorStack_229;
	// TMPro.TMP_TextProcessingStack`1<TMPro.HighlightState> TMPro.TMP_Text::m_HighlightStateStack
	TMP_TextProcessingStack_1_t57AECDCC936A7FF1D6CF66CA11560B28A675648D ___m_HighlightStateStack_230;
	// TMPro.TMP_ColorGradient TMPro.TMP_Text::m_colorGradientPreset
	TMP_ColorGradient_t17B51752B4E9499A1FF7D875DCEC1D15A0F4AEBB* ___m_colorGradientPreset_231;
	// TMPro.TMP_TextProcessingStack`1<TMPro.TMP_ColorGradient> TMPro.TMP_Text::m_colorGradientStack
	TMP_TextProcessingStack_1_tC8FAEB17246D3B171EFD11165A5761AE39B40D0C ___m_colorGradientStack_232;
	// System.Boolean TMPro.TMP_Text::m_colorGradientPresetIsTinted
	bool ___m_colorGradientPresetIsTinted_233;
	// System.Single TMPro.TMP_Text::m_tabSpacing
	float ___m_tabSpacing_234;
	// System.Single TMPro.TMP_Text::m_spacing
	float ___m_spacing_235;
	// TMPro.TMP_TextProcessingStack`1<System.Int32>[] TMPro.TMP_Text::m_TextStyleStacks
	TMP_TextProcessingStack_1U5BU5D_t08293E0BB072311BB96170F351D1083BCA97B9B2* ___m_TextStyleStacks_236;
	// System.Int32 TMPro.TMP_Text::m_TextStyleStackDepth
	int32_t ___m_TextStyleStackDepth_237;
	// TMPro.TMP_TextProcessingStack`1<System.Int32> TMPro.TMP_Text::m_ItalicAngleStack
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___m_ItalicAngleStack_238;
	// System.Int32 TMPro.TMP_Text::m_ItalicAngle
	int32_t ___m_ItalicAngle_239;
	// TMPro.TMP_TextProcessingStack`1<System.Int32> TMPro.TMP_Text::m_actionStack
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___m_actionStack_240;
	// System.Single TMPro.TMP_Text::m_padding
	float ___m_padding_241;
	// System.Single TMPro.TMP_Text::m_baselineOffset
	float ___m_baselineOffset_242;
	// TMPro.TMP_TextProcessingStack`1<System.Single> TMPro.TMP_Text::m_baselineOffsetStack
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___m_baselineOffsetStack_243;
	// System.Single TMPro.TMP_Text::m_xAdvance
	float ___m_xAdvance_244;
	// TMPro.TMP_TextElementType TMPro.TMP_Text::m_textElementType
	int32_t ___m_textElementType_245;
	// TMPro.TMP_TextElement TMPro.TMP_Text::m_cached_TextElement
	TMP_TextElement_t262A55214F712D4274485ABE5676E5254B84D0A5* ___m_cached_TextElement_246;
	// TMPro.TMP_Text/SpecialCharacter TMPro.TMP_Text::m_Ellipsis
	SpecialCharacter_t6C1DBE8C490706D1620899BAB7F0B8091AD26777 ___m_Ellipsis_247;
	// TMPro.TMP_Text/SpecialCharacter TMPro.TMP_Text::m_Underline
	SpecialCharacter_t6C1DBE8C490706D1620899BAB7F0B8091AD26777 ___m_Underline_248;
	// TMPro.TMP_SpriteAsset TMPro.TMP_Text::m_defaultSpriteAsset
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___m_defaultSpriteAsset_249;
	// TMPro.TMP_SpriteAsset TMPro.TMP_Text::m_currentSpriteAsset
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___m_currentSpriteAsset_250;
	// System.Int32 TMPro.TMP_Text::m_spriteCount
	int32_t ___m_spriteCount_251;
	// System.Int32 TMPro.TMP_Text::m_spriteIndex
	int32_t ___m_spriteIndex_252;
	// System.Int32 TMPro.TMP_Text::m_spriteAnimationID
	int32_t ___m_spriteAnimationID_253;
	// System.Boolean TMPro.TMP_Text::m_ignoreActiveState
	bool ___m_ignoreActiveState_256;
	// TMPro.TMP_Text/TextBackingContainer TMPro.TMP_Text::m_TextBackingArray
	TextBackingContainer_t33D1CE628E7B26C45EDAC1D87BEF2DD22A5C6361 ___m_TextBackingArray_257;
	// System.Decimal[] TMPro.TMP_Text::k_Power
	DecimalU5BU5D_t93BA0C88FA80728F73B792EE1A5199D0C060B615* ___k_Power_258;
};

struct TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9_StaticFields
{
	// TMPro.MaterialReference[] TMPro.TMP_Text::m_materialReferences
	MaterialReferenceU5BU5D_t7491D335AB3E3E13CE9C0F5E931F396F6A02E1F2* ___m_materialReferences_45;
	// System.Collections.Generic.Dictionary`2<System.Int32,System.Int32> TMPro.TMP_Text::m_materialReferenceIndexLookup
	Dictionary_2_tABE19B9C5C52F1DE14F0D3287B2696E7D7419180* ___m_materialReferenceIndexLookup_46;
	// TMPro.TMP_TextProcessingStack`1<TMPro.MaterialReference> TMPro.TMP_Text::m_materialReferenceStack
	TMP_TextProcessingStack_1_tB03E08F69415B281A5A81138F09E49EE58402DF9 ___m_materialReferenceStack_47;
	// UnityEngine.Color32 TMPro.TMP_Text::s_colorWhite
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___s_colorWhite_55;
	// System.Func`3<System.Int32,System.String,TMPro.TMP_FontAsset> TMPro.TMP_Text::OnFontAssetRequest
	Func_3_tC721DF8CDD07ED66A4833A19A2ED2302608C906C* ___OnFontAssetRequest_163;
	// System.Func`3<System.Int32,System.String,TMPro.TMP_SpriteAsset> TMPro.TMP_Text::OnSpriteAssetRequest
	Func_3_t6F6D9932638EA1A5A45303C6626C818C25D164E5* ___OnSpriteAssetRequest_164;
	// System.Char[] TMPro.TMP_Text::m_htmlTag
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___m_htmlTag_187;
	// TMPro.RichTextTagAttribute[] TMPro.TMP_Text::m_xmlAttribute
	RichTextTagAttributeU5BU5D_t5816316EFD8F59DBC30B9F88E15828C564E47B6D* ___m_xmlAttribute_188;
	// System.Single[] TMPro.TMP_Text::m_attributeParameterValues
	SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___m_attributeParameterValues_189;
	// TMPro.WordWrapState TMPro.TMP_Text::m_SavedWordWrapState
	WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A ___m_SavedWordWrapState_201;
	// TMPro.WordWrapState TMPro.TMP_Text::m_SavedLineState
	WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A ___m_SavedLineState_202;
	// TMPro.WordWrapState TMPro.TMP_Text::m_SavedEllipsisState
	WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A ___m_SavedEllipsisState_203;
	// TMPro.WordWrapState TMPro.TMP_Text::m_SavedLastValidState
	WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A ___m_SavedLastValidState_204;
	// TMPro.WordWrapState TMPro.TMP_Text::m_SavedSoftLineBreakState
	WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A ___m_SavedSoftLineBreakState_205;
	// TMPro.TMP_TextProcessingStack`1<TMPro.WordWrapState> TMPro.TMP_Text::m_EllipsisInsertionCandidateStack
	TMP_TextProcessingStack_1_t2DDA00FFC64AF6E3AFD475AB2086D16C34787E0F ___m_EllipsisInsertionCandidateStack_206;
	// Unity.Profiling.ProfilerMarker TMPro.TMP_Text::k_ParseTextMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_ParseTextMarker_254;
	// Unity.Profiling.ProfilerMarker TMPro.TMP_Text::k_InsertNewLineMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_InsertNewLineMarker_255;
	// UnityEngine.Vector2 TMPro.TMP_Text::k_LargePositiveVector2
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___k_LargePositiveVector2_259;
	// UnityEngine.Vector2 TMPro.TMP_Text::k_LargeNegativeVector2
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___k_LargeNegativeVector2_260;
	// System.Single TMPro.TMP_Text::k_LargePositiveFloat
	float ___k_LargePositiveFloat_261;
	// System.Single TMPro.TMP_Text::k_LargeNegativeFloat
	float ___k_LargeNegativeFloat_262;
	// System.Int32 TMPro.TMP_Text::k_LargePositiveInt
	int32_t ___k_LargePositiveInt_263;
	// System.Int32 TMPro.TMP_Text::k_LargeNegativeInt
	int32_t ___k_LargeNegativeInt_264;
};

// UnityEngine.UI.Text
struct Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62  : public MaskableGraphic_tFC5B6BE351C90DE53744DF2A70940242774B361E
{
	// UnityEngine.UI.FontData UnityEngine.UI.Text::m_FontData
	FontData_tB8E562846C6CB59C43260F69AE346B9BF3157224* ___m_FontData_36;
	// System.String UnityEngine.UI.Text::m_Text
	String_t* ___m_Text_37;
	// UnityEngine.TextGenerator UnityEngine.UI.Text::m_TextCache
	TextGenerator_t85D00417640A53953556C01F9D4E7DDE1ABD8FEC* ___m_TextCache_38;
	// UnityEngine.TextGenerator UnityEngine.UI.Text::m_TextCacheForLayout
	TextGenerator_t85D00417640A53953556C01F9D4E7DDE1ABD8FEC* ___m_TextCacheForLayout_39;
	// System.Boolean UnityEngine.UI.Text::m_DisableFontTextureRebuiltCallback
	bool ___m_DisableFontTextureRebuiltCallback_41;
	// UnityEngine.UIVertex[] UnityEngine.UI.Text::m_TempVerts
	UIVertexU5BU5D_tBC532486B45D071A520751A90E819C77BA4E3D2F* ___m_TempVerts_42;
};

struct Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62_StaticFields
{
	// UnityEngine.Material UnityEngine.UI.Text::s_DefaultText
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___s_DefaultText_40;
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
// UnityEngine.Vector3[]
struct Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C  : public RuntimeArray
{
	ALIGN_FIELD (8) Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 m_Items[1];

	inline Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 value)
	{
		m_Items[index] = value;
	}
};
// UnityEngine.Color32[]
struct Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259  : public RuntimeArray
{
	ALIGN_FIELD (8) Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B m_Items[1];

	inline Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B value)
	{
		m_Items[index] = value;
	}
};
// UnityEngine.GameObject[]
struct GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF  : public RuntimeArray
{
	ALIGN_FIELD (8) GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* m_Items[1];

	inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// Target[]
struct TargetU5BU5D_t3617959FFC066149C517739390E51D1F9E793E6B  : public RuntimeArray
{
	ALIGN_FIELD (8) Target_t5E0C0864CEA07701AF639C0AFAC19928DB873FC5* m_Items[1];

	inline Target_t5E0C0864CEA07701AF639C0AFAC19928DB873FC5* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Target_t5E0C0864CEA07701AF639C0AFAC19928DB873FC5** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Target_t5E0C0864CEA07701AF639C0AFAC19928DB873FC5* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Target_t5E0C0864CEA07701AF639C0AFAC19928DB873FC5* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Target_t5E0C0864CEA07701AF639C0AFAC19928DB873FC5** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Target_t5E0C0864CEA07701AF639C0AFAC19928DB873FC5* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// UnityEngine.Transform[]
struct TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24  : public RuntimeArray
{
	ALIGN_FIELD (8) Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* m_Items[1];

	inline Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918  : public RuntimeArray
{
	ALIGN_FIELD (8) RuntimeObject* m_Items[1];

	inline RuntimeObject* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline RuntimeObject** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, RuntimeObject* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline RuntimeObject* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline RuntimeObject** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, RuntimeObject* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.String[]
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248  : public RuntimeArray
{
	ALIGN_FIELD (8) String_t* m_Items[1];

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
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
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
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771  : public RuntimeArray
{
	ALIGN_FIELD (8) Delegate_t* m_Items[1];

	inline Delegate_t* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Delegate_t** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Delegate_t* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Delegate_t* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Delegate_t** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Delegate_t* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};


// T UnityEngine.GameObject::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// System.Void System.Action`1<UnityEngine.XR.ARFoundation.ARCameraFrameEventArgs>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_1__ctor_mDFD48034EFC4DF74EEB44B18C74DD7BAF391814E_gshared (Action_1_t54327BAFA15E24E002EFAE48D1AFFC020D368735* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Void Unity.Collections.NativeArray`1<System.Byte>::.ctor(System.Int32,Unity.Collections.Allocator,Unity.Collections.NativeArrayOptions)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeArray_1__ctor_m981CC7E27B6C9946024877F2696920951443B04F_gshared (NativeArray_1_t81F55263465517B73C455D3400CF67B4BADD85CF* __this, int32_t ___length0, int32_t ___allocator1, int32_t ___options2, const RuntimeMethod* method) ;
// Unity.Collections.NativeSlice`1<T> Unity.Collections.NativeSlice`1<System.Byte>::op_Implicit(Unity.Collections.NativeArray`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeSlice_1_tCEC4B2B900638EC1820BB61FE436766204DFD8DA NativeSlice_1_op_Implicit_m3AB491D87E0962137FD43426C9363FE25C239A73_gshared (NativeArray_1_t81F55263465517B73C455D3400CF67B4BADD85CF ___array0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Texture2D::LoadRawTextureData<System.Byte>(Unity.Collections.NativeArray`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Texture2D_LoadRawTextureData_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mDA75074E580F4DE5D4F322EBF5542EA73FFBADE3_gshared (Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* __this, NativeArray_1_t81F55263465517B73C455D3400CF67B4BADD85CF ___data0, const RuntimeMethod* method) ;
// System.Void Unity.Collections.NativeArray`1<System.Byte>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeArray_1_Dispose_m8B0F342847ECB90EB814E1F6AA5BF7DC2F271AEA_gshared (NativeArray_1_t81F55263465517B73C455D3400CF67B4BADD85CF* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::Clear()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Clear_m16C1F2C61FED5955F10EB36BC1CB2DF34B128994_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.List`1<TSource> System.Linq.Enumerable::ToList<System.Object>(System.Collections.Generic.IEnumerable`1<TSource>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* Enumerable_ToList_TisRuntimeObject_mBDB9895C2D14F2A92043507996018A329BD32A64_gshared (RuntimeObject* ___source0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::Add(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___item0, const RuntimeMethod* method) ;
// T[] System.Collections.Generic.List`1<System.Object>::ToArray()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* List_1_ToArray_mD7E4F8E7C11C3C67CB5739FCC0A6E86106A6291F_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1<System.Object>::Remove(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_Remove_m4DFA48F4CEB9169601E75FC28517C5C06EFA5AD7_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___item0, const RuntimeMethod* method) ;
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<System.Object>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A List_1_GetEnumerator_mD8294A7FA2BEB1929487127D476F8EC1CDC23BFC_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1/Enumerator<System.Object>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_mD9DC3E3C3697830A4823047AB29A77DBBB5ED419_gshared (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1/Enumerator<System.Object>::get_Current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1/Enumerator<System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_mE921CC8F29FBBDE7CC3209A0ED0D921D58D00BCB_gshared (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1<System.Object>::get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, int32_t ___index0, const RuntimeMethod* method) ;
// System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<TResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Object>::Create()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AsyncTaskMethodBuilder_1_tE810F083929D7952F192036D298085BD4B048AD0 AsyncTaskMethodBuilder_1_Create_mAFCDBB3F3D94DC87243FAB2D72DD85D1EFB68441_gshared (const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Object>::Start<TargetHandler/<asyncGetRequest>d__31>(TStateMachine&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_Start_TisU3CasyncGetRequestU3Ed__31_t3A8924764B9CFA6477D0B1E6C51AE990E58B4F07_m845603DA60C1CBB3E32D23298D7AAC0D6D1D6675_gshared (AsyncTaskMethodBuilder_1_tE810F083929D7952F192036D298085BD4B048AD0* __this, U3CasyncGetRequestU3Ed__31_t3A8924764B9CFA6477D0B1E6C51AE990E58B4F07* ___stateMachine0, const RuntimeMethod* method) ;
// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Object>::get_Task()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_t0C4CD3A5BB93A184420D73218644C56C70FDA7E2* AsyncTaskMethodBuilder_1_get_Task_mEA092EC6F1324A9D694CF6056FA8583F2A2BDC89_gshared (AsyncTaskMethodBuilder_1_tE810F083929D7952F192036D298085BD4B048AD0* __this, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder::Start<TargetHandler/<GenerateTargetItems>d__32>(TStateMachine&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncVoidMethodBuilder_Start_TisU3CGenerateTargetItemsU3Ed__32_t022CBBF6C6A16E5E4426916B9827B634513DE9CC_mBCA1E50253ABC84F73050E99DA68775726AD0F5D_gshared (AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D* __this, U3CGenerateTargetItemsU3Ed__32_t022CBBF6C6A16E5E4426916B9827B634513DE9CC* ___stateMachine0, const RuntimeMethod* method) ;
// T UnityEngine.Object::Instantiate<System.Object>(T,UnityEngine.Transform,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Object_Instantiate_TisRuntimeObject_m8784E2833D9F115FD2B2BED6615426E8CD75EE9B_gshared (RuntimeObject* ___original0, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___parent1, bool ___worldPositionStays2, const RuntimeMethod* method) ;
// System.Void System.Func`2<System.Object,System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Func_2__ctor_m7F8A01C0B02BC1D4063F4EB1E817F7A48562A398_gshared (Func_2_tACBF5A1656250800CE861707354491F0611F6624* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable::Select<System.Object,System.Object>(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,TResult>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Enumerable_Select_TisRuntimeObject_TisRuntimeObject_m960CFE6ABFCB6C2399B69DEDFB27765D1FCE57A6_gshared (RuntimeObject* ___source0, Func_2_tACBF5A1656250800CE861707354491F0611F6624* ___selector1, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<System.Object>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Object>::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.YieldAwaitable/YieldAwaiter,TargetHandler/<asyncGetRequest>d__31>(TAwaiter&,TStateMachine&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisYieldAwaiter_t5F0A81DC85227C01FFC38D53139B5C19D920B52A_TisU3CasyncGetRequestU3Ed__31_t3A8924764B9CFA6477D0B1E6C51AE990E58B4F07_mEE3460291A391BC2F5D981C9111A20CD68CCF3AA_gshared (AsyncTaskMethodBuilder_1_tE810F083929D7952F192036D298085BD4B048AD0* __this, YieldAwaiter_t5F0A81DC85227C01FFC38D53139B5C19D920B52A* ___awaiter0, U3CasyncGetRequestU3Ed__31_t3A8924764B9CFA6477D0B1E6C51AE990E58B4F07* ___stateMachine1, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Object>::SetException(System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_SetException_mC2F74B26F5303F9F960965220E2866D777F1A5C6_gshared (AsyncTaskMethodBuilder_1_tE810F083929D7952F192036D298085BD4B048AD0* __this, Exception_t* ___exception0, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Object>::SetResult(TResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_SetResult_m0D83195F995F9825D7A6DCDC3835D6917C43B5A6_gshared (AsyncTaskMethodBuilder_1_tE810F083929D7952F192036D298085BD4B048AD0* __this, RuntimeObject* ___result0, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Object>::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_SetStateMachine_m3BE54983634ABF5BE05200C7894AD0F9F20BDD65_gshared (AsyncTaskMethodBuilder_1_tE810F083929D7952F192036D298085BD4B048AD0* __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method) ;
// System.Runtime.CompilerServices.TaskAwaiter`1<TResult> System.Threading.Tasks.Task`1<System.Object>::GetAwaiter()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TaskAwaiter_1_t0B808409CD8201F13AAC85F29D646518C4857BEA Task_1_GetAwaiter_mD80ED263BF3F1F8DBDBD177BA3401A0AAAFA38E3_gshared (Task_1_t0C4CD3A5BB93A184420D73218644C56C70FDA7E2* __this, const RuntimeMethod* method) ;
// System.Boolean System.Runtime.CompilerServices.TaskAwaiter`1<System.Object>::get_IsCompleted()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TaskAwaiter_1_get_IsCompleted_mEEBB09E26F4165A0F864D92E1890CFCD2C8CFD54_gshared (TaskAwaiter_1_t0B808409CD8201F13AAC85F29D646518C4857BEA* __this, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter`1<System.Object>,TargetHandler/<GenerateTargetItems>d__32>(TAwaiter&,TStateMachine&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t0B808409CD8201F13AAC85F29D646518C4857BEA_TisU3CGenerateTargetItemsU3Ed__32_t022CBBF6C6A16E5E4426916B9827B634513DE9CC_m700E008CCC1AABEFDB244BFED9FF63E76B1BB73E_gshared (AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D* __this, TaskAwaiter_1_t0B808409CD8201F13AAC85F29D646518C4857BEA* ___awaiter0, U3CGenerateTargetItemsU3Ed__32_t022CBBF6C6A16E5E4426916B9827B634513DE9CC* ___stateMachine1, const RuntimeMethod* method) ;
// TResult System.Runtime.CompilerServices.TaskAwaiter`1<System.Object>::GetResult()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TaskAwaiter_1_GetResult_mA4A8A1F43A456B40DDA251D00026C60919AED85B_gshared (TaskAwaiter_1_t0B808409CD8201F13AAC85F29D646518C4857BEA* __this, const RuntimeMethod* method) ;
// T UnityEngine.JsonUtility::FromJson<System.Object>(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* JsonUtility_FromJson_TisRuntimeObject_m3A645CB2B6525E4A5835EA8A8CEBD39C7E2C444A_gshared (String_t* ___json0, const RuntimeMethod* method) ;
// System.Void System.Action`1<System.Int32>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_1__ctor_m1BA854F3F4319EA4A4294DDFDA21C395B8D0FF87_gshared (Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::set_Item(TKey,TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_set_Item_m2888D71A14F2B8510102F24FEE90552E91B124C1_gshared (Dictionary_2_tA75D1125AC9BE8F005BA9B868B373398E643C907* __this, int32_t ___key0, RuntimeObject* ___value1, const RuntimeMethod* method) ;
// TValue System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::get_Item(TKey)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_get_Item_mC3FEA647E750C27367C990777D8890E0E712E514_gshared (Dictionary_2_tA75D1125AC9BE8F005BA9B868B373398E643C907* __this, int32_t ___key0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m92E9AB321FBD7147CA109C822D99C8B0610C27B7_gshared (Dictionary_2_tA75D1125AC9BE8F005BA9B868B373398E643C907* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::Remove(TKey)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_Remove_m12BAB2F82E34CAA21A7245AB61E48F106340C1A4_gshared (Dictionary_2_tA75D1125AC9BE8F005BA9B868B373398E643C907* __this, int32_t ___key0, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::AddComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GameObject_AddComponent_TisRuntimeObject_m69B93700FACCF372F5753371C6E8FB780800B824_gshared (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// System.Void System.Action`2<System.Int32,System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_2__ctor_mE8DA76229BFE3CE94CA3DEF078C8B6F71B3615BF_gshared (Action_2_tF55503802357CB8A9E95ED4B00CEEEE6BDEC9166* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Void System.Action`2<System.Int32,System.Int32>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_2__ctor_m83CEE170A5B9427B596A04F9F50676B044223927_gshared (Action_2_tD7438462601D3939500ED67463331FE00CFFBDB8* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponentInParent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Component_GetComponentInParent_TisRuntimeObject_m6746D6BB99912B1B509746C993906492F86CD119_gshared (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::ContainsKey(TKey)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_ContainsKey_mED5C451F158CDDD2B3F4B0720CD248DA9DB27B25_gshared (Dictionary_2_tA75D1125AC9BE8F005BA9B868B373398E643C907* __this, int32_t ___key0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::Sort()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Sort_m31071C3C6DF1FAD770119031BEA9315A2E3C1298_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<System.Object>::IndexOf(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t List_1_IndexOf_m378F61BA812B79DEE58D86FE8AA9F20E3FC7D85F_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___item0, const RuntimeMethod* method) ;
// T[] System.Array::Empty<System.Object>()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* Array_Empty_TisRuntimeObject_m55011E8360A8199FB239A5787BA8631CDD6116FC_gshared_inline (const RuntimeMethod* method) ;
// System.Void ARWT.Core.Singleton`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Singleton_1__ctor_mC62FC78F85D36C77E2023BFF892EA3DEDAE29D85_gshared (Singleton_1_tF8B1281734A623264A4A9B8B886ACF5FAD594222* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1<System.Object>::Contains(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_Contains_m4C9139C2A6B23E9343D3F87807B32C6E2CFE660D_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___item0, const RuntimeMethod* method) ;

// T UnityEngine.GameObject::GetComponent<PasswordController>()
inline PasswordController_t9127B978A2ACFF05C4C8A8591A2F0339EC9FB0D8* GameObject_GetComponent_TisPasswordController_t9127B978A2ACFF05C4C8A8591A2F0339EC9FB0D8_m748461478B5391AA9A7AD5AFF4076A6AB9BDF49C (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  PasswordController_t9127B978A2ACFF05C4C8A8591A2F0339EC9FB0D8* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// System.Void UnityEngine.GameObject::SetActive(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.AI.NavMeshPath::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NavMeshPath__ctor_mEA40BFC2492814FFC97A71C3AEC2154A9415C37F (NavMeshPath_tC77ABF4A25FC0F0A94E8A70E304E114FE690A3A7* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Screen::set_sleepTimeout(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Screen_set_sleepTimeout_m82D427509929D2F21494141B9BE5D3E3CE96A22A (int32_t ___value0, const RuntimeMethod* method) ;
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.GameObject::get_activeSelf()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GameObject_get_activeSelf_m4F3E5240E138B66AAA080EA30759A3D0517DA368 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 NavigationController::get_TargetPosition()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 NavigationController_get_TargetPosition_m2BA98D0EB195B580AD14C3B04A680DEF2C47C60D_inline (NavigationController_t70EC9C7C9A12D38AD5902657C952B7B5B09985B8* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::get_zero()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_zero_m9D7F7B580B5A276411267E96AA3425736D9BDC83_inline (const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Vector3::op_Inequality(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Vector3_op_Inequality_m6A7FB1C9E9DE194708997BFA24C6E238D92D908E_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___lhs0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___rhs1, const RuntimeMethod* method) ;
// UnityEngine.Transform UnityEngine.Component::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::get_position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.AI.NavMesh::CalculatePath(UnityEngine.Vector3,UnityEngine.Vector3,System.Int32,UnityEngine.AI.NavMeshPath)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NavMesh_CalculatePath_m2D0FF786CDEA88E7490ABA4582967087006F6E5E (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___sourcePosition0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___targetPosition1, int32_t ___areaMask2, NavMeshPath_tC77ABF4A25FC0F0A94E8A70E304E114FE690A3A7* ___path3, const RuntimeMethod* method) ;
// UnityEngine.Vector3[] UnityEngine.AI.NavMeshPath::get_corners()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* NavMeshPath_get_corners_m469237DE430A001BE7050BEF5D05A20B94D76F3E (NavMeshPath_tC77ABF4A25FC0F0A94E8A70E304E114FE690A3A7* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.LineRenderer::set_positionCount(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LineRenderer_set_positionCount_m2001FB4044053895ECBE897AB833284F3300B205 (LineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D* __this, int32_t ___value0, const RuntimeMethod* method) ;
// UnityEngine.Vector3[] NavigationController::AddLineOffset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* NavigationController_AddLineOffset_m6038AA3D0A2BCEDDB6DB0D0E7E7F3C2D47A4B29E (NavigationController_t70EC9C7C9A12D38AD5902657C952B7B5B09985B8* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.LineRenderer::SetPositions(UnityEngine.Vector3[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LineRenderer_SetPositions_m7F7B7B54428437D0BF5256D4C82F92180B577B02 (LineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D* __this, Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___positions0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Addition(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Addition_m087D6F0EC60843D455F9F83D25FE42B2433AAD1D_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Renderer::get_enabled()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Renderer_get_enabled_mFDDF363859AEC88105A925FA7EA341C077B09B54 (Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Renderer::set_enabled(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Renderer_set_enabled_m015E6D7B825528A31182F267234CC6A925F71DA8 (Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* __this, bool ___value0, const RuntimeMethod* method) ;
// System.String UnityEngine.UI.InputField::get_text()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* InputField_get_text_m6E0796350FF559505E4DF17311803962699D6704_inline (InputField_tABEA115F23FBD374EBE80D4FAC1D15BD6E37A140* __this, const RuntimeMethod* method) ;
// System.Boolean System.String::Equals(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_Equals_m7DE16FCF923076866D20D9053B774E67F2AF8D09 (String_t* ___a0, String_t* ___b1, const RuntimeMethod* method) ;
// UnityEngine.GameObject UnityEngine.GameObject::Find(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* GameObject_Find_mFF1D6C65A7E2CD82443F4DCE4C53472FB30B7F51 (String_t* ___name0, const RuntimeMethod* method) ;
// System.Void UnityEngine.UI.InputField::set_text(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputField_set_text_m28B1C806BBCAC44F3ACCDC3B550509CA0C7D257F (InputField_tABEA115F23FBD374EBE80D4FAC1D15BD6E37A140* __this, String_t* ___value0, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<UnityEngine.LineRenderer>()
inline LineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D* GameObject_GetComponent_TisLineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D_mE703918F1B04E115CCE78A5FF891A12648B04D75 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  LineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// T UnityEngine.Component::GetComponent<UnityEngine.Renderer>()
inline Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* Component_GetComponent_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_mC91ACC92AD57CA6CA00991DAF1DB3830BCE07AF8 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// UnityEngine.Material UnityEngine.Renderer::get_material()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* Renderer_get_material_m5BA2A00816C4CC66580D4B2E409CF10718C15656 (Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* __this, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.LineRenderer::get_positionCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t LineRenderer_get_positionCount_m4A22C49D951AB145A0AB133FCEA5C10880390FE4 (LineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D* __this, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.LineRenderer::GetPositions(UnityEngine.Vector3[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t LineRenderer_GetPositions_m22BED8498DA2527EC806F389B82EFD0E2574C840 (LineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D* __this, Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___positions0, const RuntimeMethod* method) ;
// System.Double System.Math::Pow(System.Double,System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double Math_Pow_mC4D86D57FB3DB07BB24147700CAF77DB15EA2EB3 (double ___x0, double ___y1, const RuntimeMethod* method) ;
// System.Void PulsingLine::changecolor(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PulsingLine_changecolor_m76AC23B03AA68E9137E49691B905BED77B70A06D (PulsingLine_tBE3A736CB8C97095F7E4B670E40E849D2D1E40AD* __this, float ___Fadeduration0, const RuntimeMethod* method) ;
// System.Single UnityEngine.Time::get_time()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_time_m0BEE9AACD0723FE414465B77C9C64D12263675F3 (const RuntimeMethod* method) ;
// System.Single UnityEngine.Mathf::Clamp01(System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Clamp01_mD921B23F47F5347996C56DC789D1DE16EE27D9B1_inline (float ___value0, const RuntimeMethod* method) ;
// UnityEngine.Color UnityEngine.Color32::op_Implicit(UnityEngine.Color32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color32_op_Implicit_m203A634DBB77053C9400C68065CA29529103D172_inline (Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___c0, const RuntimeMethod* method) ;
// UnityEngine.Color UnityEngine.Color::Lerp(UnityEngine.Color,UnityEngine.Color,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_Lerp_mCE0CF50E59713C5A8F6AAC2C6648CF0EDBEEB27B_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___a0, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___b1, float ___t2, const RuntimeMethod* method) ;
// System.Void UnityEngine.Material::set_color(UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Material_set_color_m5C32DEBB215FF9EE35E7B575297D8C2F29CC2A2D (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* __this, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Color32::.ctor(System.Byte,System.Byte,System.Byte,System.Byte)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Color32__ctor_mC9C6B443F0C7CA3F8B174158B2AF6F05E18EAC4E_inline (Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B* __this, uint8_t ___r0, uint8_t ___g1, uint8_t ___b2, uint8_t ___a3, const RuntimeMethod* method) ;
// System.Void System.Action`1<UnityEngine.XR.ARFoundation.ARCameraFrameEventArgs>::.ctor(System.Object,System.IntPtr)
inline void Action_1__ctor_mDFD48034EFC4DF74EEB44B18C74DD7BAF391814E (Action_1_t54327BAFA15E24E002EFAE48D1AFFC020D368735* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t54327BAFA15E24E002EFAE48D1AFFC020D368735*, RuntimeObject*, intptr_t, const RuntimeMethod*))Action_1__ctor_mDFD48034EFC4DF74EEB44B18C74DD7BAF391814E_gshared)(__this, ___object0, ___method1, method);
}
// System.Void UnityEngine.XR.ARFoundation.ARCameraManager::add_frameReceived(System.Action`1<UnityEngine.XR.ARFoundation.ARCameraFrameEventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARCameraManager_add_frameReceived_mB30CD73DB7A25A6E7BC486BA289DBB99CBA3B7A1 (ARCameraManager_t6E957EA922911B8447D086D9FB1F860EC967BD9F* __this, Action_1_t54327BAFA15E24E002EFAE48D1AFFC020D368735* ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.XR.ARFoundation.ARCameraManager::remove_frameReceived(System.Action`1<UnityEngine.XR.ARFoundation.ARCameraFrameEventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARCameraManager_remove_frameReceived_m8D9C301201B5079323169510656821F0286AA67D (ARCameraManager_t6E957EA922911B8447D086D9FB1F860EC967BD9F* __this, Action_1_t54327BAFA15E24E002EFAE48D1AFFC020D368735* ___value0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.XR.ARFoundation.ARCameraManager::TryAcquireLatestCpuImage(UnityEngine.XR.ARSubsystems.XRCpuImage&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ARCameraManager_TryAcquireLatestCpuImage_m79247340777701FCF1E9CF274D1FC6EAFE0AA874 (ARCameraManager_t6E957EA922911B8447D086D9FB1F860EC967BD9F* __this, XRCpuImage_t36F512AD65D5B0AA1CC458C3666873D741C60A57* ___cpuImage0, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.XR.ARSubsystems.XRCpuImage::get_width()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t XRCpuImage_get_width_m176240EBEBBD41DC5AEF33F945C88E9492370AFA (XRCpuImage_t36F512AD65D5B0AA1CC458C3666873D741C60A57* __this, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.XR.ARSubsystems.XRCpuImage::get_height()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t XRCpuImage_get_height_m139489AD26B264FA46EE5659258BBF9C6584E5E9 (XRCpuImage_t36F512AD65D5B0AA1CC458C3666873D741C60A57* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.RectInt::.ctor(System.Int32,System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RectInt__ctor_m6E8B3A6C7EE11257A6B438E36274116FE39B5B42 (RectInt_t1744D10E1063135DA9D574F95205B98DAC600CB8* __this, int32_t ___xMin0, int32_t ___yMin1, int32_t ___width2, int32_t ___height3, const RuntimeMethod* method) ;
// System.Void UnityEngine.XR.ARSubsystems.XRCpuImage/ConversionParams::set_inputRect(UnityEngine.RectInt)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ConversionParams_set_inputRect_m7965864AED4C5176D58F3766D6BBB35DFF7BC903_inline (ConversionParams_t062706B15E2C508C54473A1FD72013C4381CCB62* __this, RectInt_t1744D10E1063135DA9D574F95205B98DAC600CB8 ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector2Int::.ctor(System.Int32,System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2Int__ctor_mC20D1312133EB8CB63EC11067088B043660F11CE_inline (Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A* __this, int32_t ___x0, int32_t ___y1, const RuntimeMethod* method) ;
// System.Void UnityEngine.XR.ARSubsystems.XRCpuImage/ConversionParams::set_outputDimensions(UnityEngine.Vector2Int)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ConversionParams_set_outputDimensions_m97EC09EE536EA456A18894311BF75AC9D5A90A3B_inline (ConversionParams_t062706B15E2C508C54473A1FD72013C4381CCB62* __this, Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.XR.ARSubsystems.XRCpuImage/ConversionParams::set_outputFormat(UnityEngine.TextureFormat)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ConversionParams_set_outputFormat_mA82EA0ECC19D14AECBA318B9B485D08CFB46A1F4_inline (ConversionParams_t062706B15E2C508C54473A1FD72013C4381CCB62* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.XR.ARSubsystems.XRCpuImage/ConversionParams::set_transformation(UnityEngine.XR.ARSubsystems.XRCpuImage/Transformation)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ConversionParams_set_transformation_mBCE73B14CCE8A31A258C6B8F6104446A2D495A0F_inline (ConversionParams_t062706B15E2C508C54473A1FD72013C4381CCB62* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.XR.ARSubsystems.XRCpuImage::GetConvertedDataSize(UnityEngine.XR.ARSubsystems.XRCpuImage/ConversionParams)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t XRCpuImage_GetConvertedDataSize_m1A292AE01390513BEA935CC4C19A0F8FD52341DE (XRCpuImage_t36F512AD65D5B0AA1CC458C3666873D741C60A57* __this, ConversionParams_t062706B15E2C508C54473A1FD72013C4381CCB62 ___conversionParams0, const RuntimeMethod* method) ;
// System.Void Unity.Collections.NativeArray`1<System.Byte>::.ctor(System.Int32,Unity.Collections.Allocator,Unity.Collections.NativeArrayOptions)
inline void NativeArray_1__ctor_m981CC7E27B6C9946024877F2696920951443B04F (NativeArray_1_t81F55263465517B73C455D3400CF67B4BADD85CF* __this, int32_t ___length0, int32_t ___allocator1, int32_t ___options2, const RuntimeMethod* method)
{
	((  void (*) (NativeArray_1_t81F55263465517B73C455D3400CF67B4BADD85CF*, int32_t, int32_t, int32_t, const RuntimeMethod*))NativeArray_1__ctor_m981CC7E27B6C9946024877F2696920951443B04F_gshared)(__this, ___length0, ___allocator1, ___options2, method);
}
// Unity.Collections.NativeSlice`1<T> Unity.Collections.NativeSlice`1<System.Byte>::op_Implicit(Unity.Collections.NativeArray`1<T>)
inline NativeSlice_1_tCEC4B2B900638EC1820BB61FE436766204DFD8DA NativeSlice_1_op_Implicit_m3AB491D87E0962137FD43426C9363FE25C239A73 (NativeArray_1_t81F55263465517B73C455D3400CF67B4BADD85CF ___array0, const RuntimeMethod* method)
{
	return ((  NativeSlice_1_tCEC4B2B900638EC1820BB61FE436766204DFD8DA (*) (NativeArray_1_t81F55263465517B73C455D3400CF67B4BADD85CF, const RuntimeMethod*))NativeSlice_1_op_Implicit_m3AB491D87E0962137FD43426C9363FE25C239A73_gshared)(___array0, method);
}
// System.Void UnityEngine.XR.ARSubsystems.XRCpuImage::Convert(UnityEngine.XR.ARSubsystems.XRCpuImage/ConversionParams,Unity.Collections.NativeSlice`1<System.Byte>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRCpuImage_Convert_mFE71425F0E4FD4ADB839551590FE9728BA037EE1 (XRCpuImage_t36F512AD65D5B0AA1CC458C3666873D741C60A57* __this, ConversionParams_t062706B15E2C508C54473A1FD72013C4381CCB62 ___conversionParams0, NativeSlice_1_tCEC4B2B900638EC1820BB61FE436766204DFD8DA ___destinationBuffer1, const RuntimeMethod* method) ;
// System.Void UnityEngine.XR.ARSubsystems.XRCpuImage::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRCpuImage_Dispose_m80B8CA56700DD5EB8A5613AA42F6F389D86A746B (XRCpuImage_t36F512AD65D5B0AA1CC458C3666873D741C60A57* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector2Int UnityEngine.XR.ARSubsystems.XRCpuImage/ConversionParams::get_outputDimensions()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A ConversionParams_get_outputDimensions_m6295F96DCE9B406AB6D79E8CD86A6FF388CF5035_inline (ConversionParams_t062706B15E2C508C54473A1FD72013C4381CCB62* __this, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Vector2Int::get_x()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Vector2Int_get_x_mA2CACB1B6E6B5AD0CCC32B2CD2EDCE3ECEB50576_inline (Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A* __this, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Vector2Int::get_y()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Vector2Int_get_y_m48454163ECF0B463FB5A16A0C4FC4B14DB0768B3_inline (Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A* __this, const RuntimeMethod* method) ;
// UnityEngine.TextureFormat UnityEngine.XR.ARSubsystems.XRCpuImage/ConversionParams::get_outputFormat()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t ConversionParams_get_outputFormat_m8CD52ADADE8FFE505A90E02D9BD6C7D9EE1C8715_inline (ConversionParams_t062706B15E2C508C54473A1FD72013C4381CCB62* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Texture2D::.ctor(System.Int32,System.Int32,UnityEngine.TextureFormat,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Texture2D__ctor_mECF60A9EC0638EC353C02C8E99B6B465D23BE917 (Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* __this, int32_t ___width0, int32_t ___height1, int32_t ___textureFormat2, bool ___mipChain3, const RuntimeMethod* method) ;
// System.Void UnityEngine.Texture2D::LoadRawTextureData<System.Byte>(Unity.Collections.NativeArray`1<T>)
inline void Texture2D_LoadRawTextureData_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mDA75074E580F4DE5D4F322EBF5542EA73FFBADE3 (Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* __this, NativeArray_1_t81F55263465517B73C455D3400CF67B4BADD85CF ___data0, const RuntimeMethod* method)
{
	((  void (*) (Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4*, NativeArray_1_t81F55263465517B73C455D3400CF67B4BADD85CF, const RuntimeMethod*))Texture2D_LoadRawTextureData_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mDA75074E580F4DE5D4F322EBF5542EA73FFBADE3_gshared)(__this, ___data0, method);
}
// System.Void UnityEngine.Texture2D::Apply()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Texture2D_Apply_mA014182C9EE0BBF6EEE3B286854F29E50EB972DC (Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* __this, const RuntimeMethod* method) ;
// System.Void Unity.Collections.NativeArray`1<System.Byte>::Dispose()
inline void NativeArray_1_Dispose_m8B0F342847ECB90EB814E1F6AA5BF7DC2F271AEA (NativeArray_1_t81F55263465517B73C455D3400CF67B4BADD85CF* __this, const RuntimeMethod* method)
{
	((  void (*) (NativeArray_1_t81F55263465517B73C455D3400CF67B4BADD85CF*, const RuntimeMethod*))NativeArray_1_Dispose_m8B0F342847ECB90EB814E1F6AA5BF7DC2F271AEA_gshared)(__this, method);
}
// UnityEngine.Color32[] UnityEngine.Texture2D::GetPixels32()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259* Texture2D_GetPixels32_m48230192E7543765C1A517F251D1D9BFCFB58C3D (Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* __this, const RuntimeMethod* method) ;
// System.String ZXing.Result::get_Text()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* Result_get_Text_m65A52D001505F5311D513F3CDD86D3BB72103E89_inline (Result_tF578DE3ECC8EB51CFB66605B8ADCD433C837EBAF* __this, const RuntimeMethod* method) ;
// System.Void QrCodeRecenter::SetQrCodeRecenterTarget(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void QrCodeRecenter_SetQrCodeRecenterTarget_m463B72B4D4C980733F169BBFF1B1D7E9E8A873DD (QrCodeRecenter_t48659C9EF1C81DDBDB76ECBB3F4181E7C175D365* __this, String_t* ___targetText0, const RuntimeMethod* method) ;
// System.Void QrCodeRecenter::ToggleScanning()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void QrCodeRecenter_ToggleScanning_m5E6B7D386B78B96BAAFB74DC83B270194C29A3AD (QrCodeRecenter_t48659C9EF1C81DDBDB76ECBB3F4181E7C175D365* __this, const RuntimeMethod* method) ;
// System.Boolean System.String::Equals(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_Equals_mCD5F35DEDCAFE51ACD4E033726FC2EF8DF7E9B4D (String_t* __this, String_t* ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.XR.ARFoundation.ARSession::Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARSession_Reset_mE905496B8400CB5BF1EB50A01C675771FCCF9A91 (ARSession_t13374A44A01F2C6D90578F93E0F0DA2482BE3014* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_position(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Transform::get_rotation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_rotation(UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_rotation_m61340DE74726CF0F9946743A727C4D444397331D (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___value0, const RuntimeMethod* method) ;
// System.Void ZXing.BarcodeReader::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BarcodeReader__ctor_mCD1732A2FA39D8C385CDCDEF5348B60F02E7E30D (BarcodeReader_t3750E77E97439AA095CFBB5FD3B791E4349885DB* __this, const RuntimeMethod* method) ;
// System.Double System.Math::Round(System.Double,System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR double Math_Round_mAE7072AE69091258FAA8BD5923CE4A0E492B5B7D_inline (double ___value0, int32_t ___digits1, const RuntimeMethod* method) ;
// System.String System.String::Format(System.String,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_m8C122B26BC5AA10E2550AECA16E57DAE10F07E30 (String_t* ___format0, RuntimeObject* ___arg01, const RuntimeMethod* method) ;
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Void TargetHandler::GenerateTargetItems()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TargetHandler_GenerateTargetItems_mA0260A08770044FBA6CE69412B7E1CFBECD71E0D (TargetHandler_t26EBF84B13B13596F2259A92408AE301B247E751* __this, const RuntimeMethod* method) ;
// UnityEngine.Transform UnityEngine.GameObject::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<UnityEngine.Renderer>()
inline Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* GameObject_GetComponent_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_m026EB44DB6238F13E2AFBECF1FBBE924CB1B040A (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// System.Boolean System.String::op_Inequality(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Inequality_m0FBE5AC4931D312E5B347BAA603755676E6DA2FE (String_t* ___a0, String_t* ___b1, const RuntimeMethod* method) ;
// System.Void TargetHandler/<sendjson>d__23::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CsendjsonU3Ed__23__ctor_m4F2CDECB0E0FCCC5D42AF497AA6FFA2BC3A6005C (U3CsendjsonU3Ed__23_tE0AAF5BB9AB2FBB6848F337C0DD6B12894900758* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) ;
// UnityEngine.GameObject[] UnityEngine.GameObject::FindGameObjectsWithTag(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* GameObject_FindGameObjectsWithTag_m63AB9863553265F03EDE4C11AEA98AF591CAEA1E (String_t* ___tag0, const RuntimeMethod* method) ;
// System.Void TMPro.TMP_Dropdown::set_value(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TMP_Dropdown_set_value_m8362A866D571975FECFD1FE47D3C4D83559795BF (TMP_Dropdown_t73B37BFDA0D005451C7B750938AFB1748E5EA504* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Void TargetHandler::makeallunselected()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TargetHandler_makeallunselected_m3DCE64D42D783F8D2DF0856B262705C1966AEB6F (TargetHandler_t26EBF84B13B13596F2259A92408AE301B247E751* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Object::Destroy(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_Destroy_mFCDAE6333522488F60597AF019EA90BB1207A5AA (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___obj0, const RuntimeMethod* method) ;
// System.Void System.Array::Clear(System.Array,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Clear_m48B57EC27CADC3463CA98A33373D557DA587FF1B (RuntimeArray* ___array0, int32_t ___index1, int32_t ___length2, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<TargetFacade>::Clear()
inline void List_1_Clear_m46550048EF02C799D7AFEDEAB9C2A4F2F259F268_inline (List_1_tD7576C87B68BC6CE723331751C2CE61223447FBE* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tD7576C87B68BC6CE723331751C2CE61223447FBE*, const RuntimeMethod*))List_1_Clear_m16C1F2C61FED5955F10EB36BC1CB2DF34B128994_gshared_inline)(__this, method);
}
// System.Void Target::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Target__ctor_m5524C5EEF36FA6DB1E6B5BFA323B37E68635C216 (Target_t5E0C0864CEA07701AF639C0AFAC19928DB873FC5* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.List`1<TSource> System.Linq.Enumerable::ToList<Target>(System.Collections.Generic.IEnumerable`1<TSource>)
inline List_1_tFB3A1D83FA1EFCD81B10C01A5395798068BCE79A* Enumerable_ToList_TisTarget_t5E0C0864CEA07701AF639C0AFAC19928DB873FC5_mD6A2D9656F0626A34D0EC960BE8D5DDB99E44976 (RuntimeObject* ___source0, const RuntimeMethod* method)
{
	return ((  List_1_tFB3A1D83FA1EFCD81B10C01A5395798068BCE79A* (*) (RuntimeObject*, const RuntimeMethod*))Enumerable_ToList_TisRuntimeObject_mBDB9895C2D14F2A92043507996018A329BD32A64_gshared)(___source0, method);
}
// System.Void System.Collections.Generic.List`1<Target>::Add(T)
inline void List_1_Add_m5765993ABE587F1195934629E7D160FF603FFE50_inline (List_1_tFB3A1D83FA1EFCD81B10C01A5395798068BCE79A* __this, Target_t5E0C0864CEA07701AF639C0AFAC19928DB873FC5* ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_tFB3A1D83FA1EFCD81B10C01A5395798068BCE79A*, Target_t5E0C0864CEA07701AF639C0AFAC19928DB873FC5*, const RuntimeMethod*))List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline)(__this, ___item0, method);
}
// T[] System.Collections.Generic.List`1<Target>::ToArray()
inline TargetU5BU5D_t3617959FFC066149C517739390E51D1F9E793E6B* List_1_ToArray_m20B42A5569FEAF96516D430D0F8364BAB17CD475 (List_1_tFB3A1D83FA1EFCD81B10C01A5395798068BCE79A* __this, const RuntimeMethod* method)
{
	return ((  TargetU5BU5D_t3617959FFC066149C517739390E51D1F9E793E6B* (*) (List_1_tFB3A1D83FA1EFCD81B10C01A5395798068BCE79A*, const RuntimeMethod*))List_1_ToArray_mD7E4F8E7C11C3C67CB5739FCC0A6E86106A6291F_gshared)(__this, method);
}
// System.Void UnityEngine.Debug::Log(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_Log_m86567BCF22BBE7809747817453CACA0E41E68219 (RuntimeObject* ___message0, const RuntimeMethod* method) ;
// TargetFacade TargetHandler::CreateTargetFacade(Target)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TargetFacade_tAA52A697AACAC6BBC707F8B97B5975CD124D9CB1* TargetHandler_CreateTargetFacade_m67536F4040123449F003797A7E2D0C5E4536C91A (TargetHandler_t26EBF84B13B13596F2259A92408AE301B247E751* __this, Target_t5E0C0864CEA07701AF639C0AFAC19928DB873FC5* ___target0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<TargetFacade>::Add(T)
inline void List_1_Add_mE6174CF409FF796DB81E0BC4EDC13FB84F13DA91_inline (List_1_tD7576C87B68BC6CE723331751C2CE61223447FBE* __this, TargetFacade_tAA52A697AACAC6BBC707F8B97B5975CD124D9CB1* ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_tD7576C87B68BC6CE723331751C2CE61223447FBE*, TargetFacade_tAA52A697AACAC6BBC707F8B97B5975CD124D9CB1*, const RuntimeMethod*))List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline)(__this, ___item0, method);
}
// System.Void TargetHandler::FillDropdownWithTargetItems()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TargetHandler_FillDropdownWithTargetItems_mBA0544F9D4B121606039D902695E4F7092A9DC7D (TargetHandler_t26EBF84B13B13596F2259A92408AE301B247E751* __this, const RuntimeMethod* method) ;
// System.Boolean System.String::op_Equality(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0 (String_t* ___a0, String_t* ___b1, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1<Target>::Remove(T)
inline bool List_1_Remove_m9BFBD30B346EC11CCE34EE97E0DB06B2431A0A95 (List_1_tFB3A1D83FA1EFCD81B10C01A5395798068BCE79A* __this, Target_t5E0C0864CEA07701AF639C0AFAC19928DB873FC5* ___item0, const RuntimeMethod* method)
{
	return ((  bool (*) (List_1_tFB3A1D83FA1EFCD81B10C01A5395798068BCE79A*, Target_t5E0C0864CEA07701AF639C0AFAC19928DB873FC5*, const RuntimeMethod*))List_1_Remove_m4DFA48F4CEB9169601E75FC28517C5C06EFA5AD7_gshared)(__this, ___item0, method);
}
// System.Collections.Generic.List`1<TSource> System.Linq.Enumerable::ToList<TargetFacade>(System.Collections.Generic.IEnumerable`1<TSource>)
inline List_1_tD7576C87B68BC6CE723331751C2CE61223447FBE* Enumerable_ToList_TisTargetFacade_tAA52A697AACAC6BBC707F8B97B5975CD124D9CB1_mFE05F58A8DE77DD8A5A906EAC71F876EA5BB9667 (RuntimeObject* ___source0, const RuntimeMethod* method)
{
	return ((  List_1_tD7576C87B68BC6CE723331751C2CE61223447FBE* (*) (RuntimeObject*, const RuntimeMethod*))Enumerable_ToList_TisRuntimeObject_mBDB9895C2D14F2A92043507996018A329BD32A64_gshared)(___source0, method);
}
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<TargetFacade>::GetEnumerator()
inline Enumerator_t8B20BFEE313F615312F7EC1F77EE57DDFDBBEE8D List_1_GetEnumerator_m282A9362896D76C23F2DE587B3DAED300C1B6C30 (List_1_tD7576C87B68BC6CE723331751C2CE61223447FBE* __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t8B20BFEE313F615312F7EC1F77EE57DDFDBBEE8D (*) (List_1_tD7576C87B68BC6CE723331751C2CE61223447FBE*, const RuntimeMethod*))List_1_GetEnumerator_mD8294A7FA2BEB1929487127D476F8EC1CDC23BFC_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1/Enumerator<TargetFacade>::Dispose()
inline void Enumerator_Dispose_m43EBD82C27E159FCDA48274F7B0834E8FFA3BFA6 (Enumerator_t8B20BFEE313F615312F7EC1F77EE57DDFDBBEE8D* __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t8B20BFEE313F615312F7EC1F77EE57DDFDBBEE8D*, const RuntimeMethod*))Enumerator_Dispose_mD9DC3E3C3697830A4823047AB29A77DBBB5ED419_gshared)(__this, method);
}
// T System.Collections.Generic.List`1/Enumerator<TargetFacade>::get_Current()
inline TargetFacade_tAA52A697AACAC6BBC707F8B97B5975CD124D9CB1* Enumerator_get_Current_m27D3CC24299A5914B982AA443D26A73093D96963_inline (Enumerator_t8B20BFEE313F615312F7EC1F77EE57DDFDBBEE8D* __this, const RuntimeMethod* method)
{
	return ((  TargetFacade_tAA52A697AACAC6BBC707F8B97B5975CD124D9CB1* (*) (Enumerator_t8B20BFEE313F615312F7EC1F77EE57DDFDBBEE8D*, const RuntimeMethod*))Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline)(__this, method);
}
// System.Boolean System.Collections.Generic.List`1<TargetFacade>::Remove(T)
inline bool List_1_Remove_m8739674B1C80901ECFE42608BD578C879A18F26E (List_1_tD7576C87B68BC6CE723331751C2CE61223447FBE* __this, TargetFacade_tAA52A697AACAC6BBC707F8B97B5975CD124D9CB1* ___item0, const RuntimeMethod* method)
{
	return ((  bool (*) (List_1_tD7576C87B68BC6CE723331751C2CE61223447FBE*, TargetFacade_tAA52A697AACAC6BBC707F8B97B5975CD124D9CB1*, const RuntimeMethod*))List_1_Remove_m4DFA48F4CEB9169601E75FC28517C5C06EFA5AD7_gshared)(__this, ___item0, method);
}
// UnityEngine.GameObject UnityEngine.GameObject::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* GameObject_get_gameObject_m0878015B8CF7F5D432B583C187725810D27B57DC (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1/Enumerator<TargetFacade>::MoveNext()
inline bool Enumerator_MoveNext_m865474A9CADD1F2CBF3E1D44253129BCDAAE9CFC (Enumerator_t8B20BFEE313F615312F7EC1F77EE57DDFDBBEE8D* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t8B20BFEE313F615312F7EC1F77EE57DDFDBBEE8D*, const RuntimeMethod*))Enumerator_MoveNext_mE921CC8F29FBBDE7CC3209A0ED0D921D58D00BCB_gshared)(__this, method);
}
// System.String System.String::Concat(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D (String_t* ___str00, String_t* ___str11, const RuntimeMethod* method) ;
// System.String UnityEngine.JsonUtility::ToJson(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* JsonUtility_ToJson_mD0FB24DC5A8621A2473FC208E9B15AF43944EBCD (RuntimeObject* ___obj0, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m9B13B47FCB3DF61144D9647DDA05F527377251B0 (String_t* ___str00, String_t* ___str11, String_t* ___str22, const RuntimeMethod* method) ;
// System.Int32 System.String::get_Length()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline (String_t* __this, const RuntimeMethod* method) ;
// System.String System.String::Remove(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Remove_m8266E0BF5D8565D4CDC850F21E9178AE254C3E85 (String_t* __this, int32_t ___startIndex0, const RuntimeMethod* method) ;
// System.Void UnityEngine.MonoBehaviour::print(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour_print_mED815C779E369787B3E9646A6DE96FBC2944BF0B (RuntimeObject* ___message0, const RuntimeMethod* method) ;
// System.Collections.IEnumerator TargetHandler::sendjson()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TargetHandler_sendjson_mCC9261FC1C5FF3CD7876EB46D0DED2A0F9586A58 (TargetHandler_t26EBF84B13B13596F2259A92408AE301B247E751* __this, const RuntimeMethod* method) ;
// UnityEngine.Coroutine UnityEngine.MonoBehaviour::StartCoroutine(System.Collections.IEnumerator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812 (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, RuntimeObject* ___routine0, const RuntimeMethod* method) ;
// System.Collections.Generic.List`1<TMPro.TMP_Dropdown/OptionData> TMPro.TMP_Dropdown::get_options()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_tCADFA900711C24701A9C70EE674B91FC45D42A52* TMP_Dropdown_get_options_mA543A0EFE4D1953E73C6F60ECA8CE177182571C5 (TMP_Dropdown_t73B37BFDA0D005451C7B750938AFB1748E5EA504* __this, const RuntimeMethod* method) ;
// System.Int32 TMPro.TMP_Dropdown::get_value()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t TMP_Dropdown_get_value_m5916A6D1897431E8ED789FEC24551A311D1B5C70_inline (TMP_Dropdown_t73B37BFDA0D005451C7B750938AFB1748E5EA504* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1<TMPro.TMP_Dropdown/OptionData>::get_Item(System.Int32)
inline OptionData_tFDFBCB4A5FB860E95AE46FDAC112DB4140A8525E* List_1_get_Item_mBE3176F40529BACB1E6DBB68BDFD5894B04BD1BA (List_1_tCADFA900711C24701A9C70EE674B91FC45D42A52* __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  OptionData_tFDFBCB4A5FB860E95AE46FDAC112DB4140A8525E* (*) (List_1_tCADFA900711C24701A9C70EE674B91FC45D42A52*, int32_t, const RuntimeMethod*))List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38_gshared)(__this, ___index0, method);
}
// System.String TMPro.TMP_Dropdown/OptionData::get_text()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* OptionData_get_text_m2E822D5D50B597BFBA7AB3485EF15B526A726A1A_inline (OptionData_tFDFBCB4A5FB860E95AE46FDAC112DB4140A8525E* __this, const RuntimeMethod* method) ;
// System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<TResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.String>::Create()
inline AsyncTaskMethodBuilder_1_tA28B0962049DC249BEC0054E2394B1962E28E90E AsyncTaskMethodBuilder_1_Create_m4CB15D06286C7AA0BA8318800D23A9D574CBE0E8 (const RuntimeMethod* method)
{
	return ((  AsyncTaskMethodBuilder_1_tA28B0962049DC249BEC0054E2394B1962E28E90E (*) (const RuntimeMethod*))AsyncTaskMethodBuilder_1_Create_mAFCDBB3F3D94DC87243FAB2D72DD85D1EFB68441_gshared)(method);
}
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.String>::Start<TargetHandler/<asyncGetRequest>d__31>(TStateMachine&)
inline void AsyncTaskMethodBuilder_1_Start_TisU3CasyncGetRequestU3Ed__31_t3A8924764B9CFA6477D0B1E6C51AE990E58B4F07_m846F6646BF093DF8EE19B6A597A8D4B4A8EB7926 (AsyncTaskMethodBuilder_1_tA28B0962049DC249BEC0054E2394B1962E28E90E* __this, U3CasyncGetRequestU3Ed__31_t3A8924764B9CFA6477D0B1E6C51AE990E58B4F07* ___stateMachine0, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_tA28B0962049DC249BEC0054E2394B1962E28E90E*, U3CasyncGetRequestU3Ed__31_t3A8924764B9CFA6477D0B1E6C51AE990E58B4F07*, const RuntimeMethod*))AsyncTaskMethodBuilder_1_Start_TisU3CasyncGetRequestU3Ed__31_t3A8924764B9CFA6477D0B1E6C51AE990E58B4F07_m845603DA60C1CBB3E32D23298D7AAC0D6D1D6675_gshared)(__this, ___stateMachine0, method);
}
// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.String>::get_Task()
inline Task_1_t3D7638C82ED289AF156EDBAE76842D8DF4C4A9E0* AsyncTaskMethodBuilder_1_get_Task_m01EB243CF4396C9A2645F71572B47CF12151974E (AsyncTaskMethodBuilder_1_tA28B0962049DC249BEC0054E2394B1962E28E90E* __this, const RuntimeMethod* method)
{
	return ((  Task_1_t3D7638C82ED289AF156EDBAE76842D8DF4C4A9E0* (*) (AsyncTaskMethodBuilder_1_tA28B0962049DC249BEC0054E2394B1962E28E90E*, const RuntimeMethod*))AsyncTaskMethodBuilder_1_get_Task_mEA092EC6F1324A9D694CF6056FA8583F2A2BDC89_gshared)(__this, method);
}
// System.Runtime.CompilerServices.AsyncVoidMethodBuilder System.Runtime.CompilerServices.AsyncVoidMethodBuilder::Create()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D AsyncVoidMethodBuilder_Create_mE6D291637BF7B4B6D3F8BFCA14920B9200D7A502 (const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder::Start<TargetHandler/<GenerateTargetItems>d__32>(TStateMachine&)
inline void AsyncVoidMethodBuilder_Start_TisU3CGenerateTargetItemsU3Ed__32_t022CBBF6C6A16E5E4426916B9827B634513DE9CC_mBCA1E50253ABC84F73050E99DA68775726AD0F5D (AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D* __this, U3CGenerateTargetItemsU3Ed__32_t022CBBF6C6A16E5E4426916B9827B634513DE9CC* ___stateMachine0, const RuntimeMethod* method)
{
	((  void (*) (AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D*, U3CGenerateTargetItemsU3Ed__32_t022CBBF6C6A16E5E4426916B9827B634513DE9CC*, const RuntimeMethod*))AsyncVoidMethodBuilder_Start_TisU3CGenerateTargetItemsU3Ed__32_t022CBBF6C6A16E5E4426916B9827B634513DE9CC_mBCA1E50253ABC84F73050E99DA68775726AD0F5D_gshared)(__this, ___stateMachine0, method);
}
// T UnityEngine.Object::Instantiate<UnityEngine.GameObject>(T,UnityEngine.Transform,System.Boolean)
inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m8CC4225774108D732B4BF9D4B204835A2DBA6EC5 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___original0, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___parent1, bool ___worldPositionStays2, const RuntimeMethod* method)
{
	return ((  GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1*, bool, const RuntimeMethod*))Object_Instantiate_TisRuntimeObject_m8784E2833D9F115FD2B2BED6615426E8CD75EE9B_gshared)(___original0, ___parent1, ___worldPositionStays2, method);
}
// System.Void UnityEngine.Object::set_name(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_set_name_mC79E6DC8FFD72479C90F0C4CC7F42A0FEAF5AE47 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* __this, String_t* ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_localPosition(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_localPosition_mDE1C997F7D79C0885210B7732B4BA50EE7D73134 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<TargetFacade>()
inline TargetFacade_tAA52A697AACAC6BBC707F8B97B5975CD124D9CB1* GameObject_GetComponent_TisTargetFacade_tAA52A697AACAC6BBC707F8B97B5975CD124D9CB1_mA95C94F77A14A1DB93AC5D1A5402EF7976A868C9 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  TargetFacade_tAA52A697AACAC6BBC707F8B97B5975CD124D9CB1* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// System.Void System.Func`2<TargetFacade,TMPro.TMP_Dropdown/OptionData>::.ctor(System.Object,System.IntPtr)
inline void Func_2__ctor_m7C41A97BBBCE52B7BC10772C8DFE11EC79C08548 (Func_2_t3D46D586EBA225BB058345919E08F21E6E068C13* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Func_2_t3D46D586EBA225BB058345919E08F21E6E068C13*, RuntimeObject*, intptr_t, const RuntimeMethod*))Func_2__ctor_m7F8A01C0B02BC1D4063F4EB1E817F7A48562A398_gshared)(__this, ___object0, ___method1, method);
}
// System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable::Select<TargetFacade,TMPro.TMP_Dropdown/OptionData>(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,TResult>)
inline RuntimeObject* Enumerable_Select_TisTargetFacade_tAA52A697AACAC6BBC707F8B97B5975CD124D9CB1_TisOptionData_tFDFBCB4A5FB860E95AE46FDAC112DB4140A8525E_m28F07A67DD36131343CD268CC29CCBD8DF67ABF1 (RuntimeObject* ___source0, Func_2_t3D46D586EBA225BB058345919E08F21E6E068C13* ___selector1, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (RuntimeObject*, Func_2_t3D46D586EBA225BB058345919E08F21E6E068C13*, const RuntimeMethod*))Enumerable_Select_TisRuntimeObject_TisRuntimeObject_m960CFE6ABFCB6C2399B69DEDFB27765D1FCE57A6_gshared)(___source0, ___selector1, method);
}
// System.Collections.Generic.List`1<TSource> System.Linq.Enumerable::ToList<TMPro.TMP_Dropdown/OptionData>(System.Collections.Generic.IEnumerable`1<TSource>)
inline List_1_tCADFA900711C24701A9C70EE674B91FC45D42A52* Enumerable_ToList_TisOptionData_tFDFBCB4A5FB860E95AE46FDAC112DB4140A8525E_mE82209F24B9E56F232FFEDC8CCB5D4E59D8EED30 (RuntimeObject* ___source0, const RuntimeMethod* method)
{
	return ((  List_1_tCADFA900711C24701A9C70EE674B91FC45D42A52* (*) (RuntimeObject*, const RuntimeMethod*))Enumerable_ToList_TisRuntimeObject_mBDB9895C2D14F2A92043507996018A329BD32A64_gshared)(___source0, method);
}
// System.Void TMPro.TMP_Dropdown::ClearOptions()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TMP_Dropdown_ClearOptions_m9888C23BC3033268E5C2D8613C0854661E7BDEB5 (TMP_Dropdown_t73B37BFDA0D005451C7B750938AFB1748E5EA504* __this, const RuntimeMethod* method) ;
// System.Void TMPro.TMP_Dropdown::AddOptions(System.Collections.Generic.List`1<TMPro.TMP_Dropdown/OptionData>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TMP_Dropdown_AddOptions_m0552A59BC909364951E1661FABADBC076715E4DD (TMP_Dropdown_t73B37BFDA0D005451C7B750938AFB1748E5EA504* __this, List_1_tCADFA900711C24701A9C70EE674B91FC45D42A52* ___options0, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<TargetFacade>::get_Count()
inline int32_t List_1_get_Count_mE1369B2DAE3EB26605AEE44BB961736D985796A5_inline (List_1_tD7576C87B68BC6CE723331751C2CE61223447FBE* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_tD7576C87B68BC6CE723331751C2CE61223447FBE*, const RuntimeMethod*))List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline)(__this, method);
}
// T System.Collections.Generic.List`1<TargetFacade>::get_Item(System.Int32)
inline TargetFacade_tAA52A697AACAC6BBC707F8B97B5975CD124D9CB1* List_1_get_Item_m669D5F7031367A0D30C4203C8A38F02A0B50454D (List_1_tD7576C87B68BC6CE723331751C2CE61223447FBE* __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  TargetFacade_tAA52A697AACAC6BBC707F8B97B5975CD124D9CB1* (*) (List_1_tD7576C87B68BC6CE723331751C2CE61223447FBE*, int32_t, const RuntimeMethod*))List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38_gshared)(__this, ___index0, method);
}
// UnityEngine.Vector3 TargetHandler::GetCurrentlySelectedTarget(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 TargetHandler_GetCurrentlySelectedTarget_m7D5B2EEF55CB81E3298BBEFFD5156D8F05212847 (TargetHandler_t26EBF84B13B13596F2259A92408AE301B247E751* __this, int32_t ___selectedValue0, const RuntimeMethod* method) ;
// System.Void NavigationController::set_TargetPosition(UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void NavigationController_set_TargetPosition_m0673F8F68766F112505E5C70114786D362CCCA70_inline (NavigationController_t70EC9C7C9A12D38AD5902657C952B7B5B09985B8* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<TargetFacade>::.ctor()
inline void List_1__ctor_m512FB9059CA3B6A06A5E85FC5470FB1543A1D4A4 (List_1_tD7576C87B68BC6CE723331751C2CE61223447FBE* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tD7576C87B68BC6CE723331751C2CE61223447FBE*, const RuntimeMethod*))List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared)(__this, method);
}
// UnityEngine.Networking.UnityWebRequest UnityEngine.Networking.UnityWebRequest::Put(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* UnityWebRequest_Put_mE7E6896080B10B3F70626EC3BF66274148232CDA (String_t* ___uri0, String_t* ___bodyData1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Networking.UnityWebRequest::SetRequestHeader(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityWebRequest_SetRequestHeader_m099734EB787B7269B62AB2236A5A4F7D35AF8BC5 (UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* __this, String_t* ___name0, String_t* ___value1, const RuntimeMethod* method) ;
// UnityEngine.Networking.UnityWebRequestAsyncOperation UnityEngine.Networking.UnityWebRequest::SendWebRequest()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UnityWebRequestAsyncOperation_t14BE94558FF3A2CFC2EFBE2511A3A88252042B8C* UnityWebRequest_SendWebRequest_mA3CD13983BAA5074A0640EDD661B1E46E6DB6C13 (UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Networking.UnityWebRequest::get_isNetworkError()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UnityWebRequest_get_isNetworkError_m036684411466688E71E67CDD3703BAC9035A56F0 (UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Networking.UnityWebRequest::get_isHttpError()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UnityWebRequest_get_isHttpError_m945BA480A179E05CC9659846414D9521ED648ED5 (UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* __this, const RuntimeMethod* method) ;
// System.String UnityEngine.Networking.UnityWebRequest::get_error()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* UnityWebRequest_get_error_m20A5D813ED59118B7AA1D1E2EB5250178B1F5B6F (UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* __this, const RuntimeMethod* method) ;
// System.Void System.NotSupportedException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Networking.UnityWebRequest::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityWebRequest__ctor_mBCA80EFFB8AF50480F0093BC8CB34EDB4337A5FB (UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* __this, String_t* ___url0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Networking.DownloadHandlerBuffer::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DownloadHandlerBuffer__ctor_m5EE7C9E8AB468B2B937A7C9C66B4176A884147AF (DownloadHandlerBuffer_t34C626F6513FA9A44FDDDEE85455CF2CD9DA5974* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Networking.UnityWebRequest::set_downloadHandler(UnityEngine.Networking.DownloadHandler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityWebRequest_set_downloadHandler_m6CB94492012097DFC44E5773D1A627753788292F (UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* __this, DownloadHandler_t1B56C7D3F65D97A1E4B566A14A1E783EA8AE4EBB* ___value0, const RuntimeMethod* method) ;
// System.Runtime.CompilerServices.YieldAwaitable System.Threading.Tasks.Task::Yield()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR YieldAwaitable_tFEA898DB9022A953958C3CF531E1477D135D3DAB Task_Yield_m243FF1482B112E594401BAC859F9084753C4E653 (const RuntimeMethod* method) ;
// System.Runtime.CompilerServices.YieldAwaitable/YieldAwaiter System.Runtime.CompilerServices.YieldAwaitable::GetAwaiter()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR YieldAwaiter_t5F0A81DC85227C01FFC38D53139B5C19D920B52A YieldAwaitable_GetAwaiter_m359A05B8C1B9F3F1E9CAE29AD231C0987718DE5E (YieldAwaitable_tFEA898DB9022A953958C3CF531E1477D135D3DAB* __this, const RuntimeMethod* method) ;
// System.Boolean System.Runtime.CompilerServices.YieldAwaitable/YieldAwaiter::get_IsCompleted()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool YieldAwaiter_get_IsCompleted_m783B6E67654FDBF490A65AC59972AF6B985A9286 (YieldAwaiter_t5F0A81DC85227C01FFC38D53139B5C19D920B52A* __this, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.String>::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.YieldAwaitable/YieldAwaiter,TargetHandler/<asyncGetRequest>d__31>(TAwaiter&,TStateMachine&)
inline void AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisYieldAwaiter_t5F0A81DC85227C01FFC38D53139B5C19D920B52A_TisU3CasyncGetRequestU3Ed__31_t3A8924764B9CFA6477D0B1E6C51AE990E58B4F07_mEAB7EF9DB43C271471248DA9AF3BAE59D6AEBD00 (AsyncTaskMethodBuilder_1_tA28B0962049DC249BEC0054E2394B1962E28E90E* __this, YieldAwaiter_t5F0A81DC85227C01FFC38D53139B5C19D920B52A* ___awaiter0, U3CasyncGetRequestU3Ed__31_t3A8924764B9CFA6477D0B1E6C51AE990E58B4F07* ___stateMachine1, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_tA28B0962049DC249BEC0054E2394B1962E28E90E*, YieldAwaiter_t5F0A81DC85227C01FFC38D53139B5C19D920B52A*, U3CasyncGetRequestU3Ed__31_t3A8924764B9CFA6477D0B1E6C51AE990E58B4F07*, const RuntimeMethod*))AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisYieldAwaiter_t5F0A81DC85227C01FFC38D53139B5C19D920B52A_TisU3CasyncGetRequestU3Ed__31_t3A8924764B9CFA6477D0B1E6C51AE990E58B4F07_mEE3460291A391BC2F5D981C9111A20CD68CCF3AA_gshared)(__this, ___awaiter0, ___stateMachine1, method);
}
// System.Void System.Runtime.CompilerServices.YieldAwaitable/YieldAwaiter::GetResult()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void YieldAwaiter_GetResult_m83C9B35D4BBEB09AC5B560912436454D69794F07 (YieldAwaiter_t5F0A81DC85227C01FFC38D53139B5C19D920B52A* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Networking.UnityWebRequest::get_isDone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UnityWebRequest_get_isDone_m3079B53A1CAFD8D5B334C635761E7B7E10B14123 (UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* __this, const RuntimeMethod* method) ;
// UnityEngine.Networking.UnityWebRequest/Result UnityEngine.Networking.UnityWebRequest::get_result()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnityWebRequest_get_result_mEF83848C5FCFB5E307CE4B57E42BF02FC9AED449 (UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* __this, const RuntimeMethod* method) ;
// UnityEngine.Networking.DownloadHandler UnityEngine.Networking.UnityWebRequest::get_downloadHandler()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DownloadHandler_t1B56C7D3F65D97A1E4B566A14A1E783EA8AE4EBB* UnityWebRequest_get_downloadHandler_m1AA91B23D9D594A4F4FE2975FC356C508528F1D5 (UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* __this, const RuntimeMethod* method) ;
// System.String UnityEngine.Networking.DownloadHandler::get_text()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* DownloadHandler_get_text_mA6DE5CB2647A21E577B963708DC3D0DA4DBFE7D8 (DownloadHandler_t1B56C7D3F65D97A1E4B566A14A1E783EA8AE4EBB* __this, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.String>::SetException(System.Exception)
inline void AsyncTaskMethodBuilder_1_SetException_m897218C2DB8D7BA446EB263573085805B8F0638C (AsyncTaskMethodBuilder_1_tA28B0962049DC249BEC0054E2394B1962E28E90E* __this, Exception_t* ___exception0, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_tA28B0962049DC249BEC0054E2394B1962E28E90E*, Exception_t*, const RuntimeMethod*))AsyncTaskMethodBuilder_1_SetException_mC2F74B26F5303F9F960965220E2866D777F1A5C6_gshared)(__this, ___exception0, method);
}
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.String>::SetResult(TResult)
inline void AsyncTaskMethodBuilder_1_SetResult_mB79121C0ACAC704500FAA7350ED0FE6604DDA05E (AsyncTaskMethodBuilder_1_tA28B0962049DC249BEC0054E2394B1962E28E90E* __this, String_t* ___result0, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_tA28B0962049DC249BEC0054E2394B1962E28E90E*, String_t*, const RuntimeMethod*))AsyncTaskMethodBuilder_1_SetResult_m0D83195F995F9825D7A6DCDC3835D6917C43B5A6_gshared)(__this, ___result0, method);
}
// System.Void TargetHandler/<asyncGetRequest>d__31::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CasyncGetRequestU3Ed__31_MoveNext_m2FDEFDFA9130EC4D73D65537D9C3C33DF5B409BC (U3CasyncGetRequestU3Ed__31_t3A8924764B9CFA6477D0B1E6C51AE990E58B4F07* __this, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.String>::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
inline void AsyncTaskMethodBuilder_1_SetStateMachine_mE4D48B78E50CA2A3650A856ACF86A3CFBA249C30 (AsyncTaskMethodBuilder_1_tA28B0962049DC249BEC0054E2394B1962E28E90E* __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_tA28B0962049DC249BEC0054E2394B1962E28E90E*, RuntimeObject*, const RuntimeMethod*))AsyncTaskMethodBuilder_1_SetStateMachine_m3BE54983634ABF5BE05200C7894AD0F9F20BDD65_gshared)(__this, ___stateMachine0, method);
}
// System.Void TargetHandler/<asyncGetRequest>d__31::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CasyncGetRequestU3Ed__31_SetStateMachine_m0C1C4967A45DFD18F989B2C748ABB73129145656 (U3CasyncGetRequestU3Ed__31_t3A8924764B9CFA6477D0B1E6C51AE990E58B4F07* __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method) ;
// System.Threading.Tasks.Task`1<System.String> TargetHandler::asyncGetRequest()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_t3D7638C82ED289AF156EDBAE76842D8DF4C4A9E0* TargetHandler_asyncGetRequest_m10745638E4610F8636CA64BB80F7A3BD7C286918 (TargetHandler_t26EBF84B13B13596F2259A92408AE301B247E751* __this, const RuntimeMethod* method) ;
// System.Runtime.CompilerServices.TaskAwaiter`1<TResult> System.Threading.Tasks.Task`1<System.String>::GetAwaiter()
inline TaskAwaiter_1_t254638BB1FAD695D9A9542E098A189D438A000F6 Task_1_GetAwaiter_m7727657658441E9D4CE9D3F8B532F9D65CB9CE1F (Task_1_t3D7638C82ED289AF156EDBAE76842D8DF4C4A9E0* __this, const RuntimeMethod* method)
{
	return ((  TaskAwaiter_1_t254638BB1FAD695D9A9542E098A189D438A000F6 (*) (Task_1_t3D7638C82ED289AF156EDBAE76842D8DF4C4A9E0*, const RuntimeMethod*))Task_1_GetAwaiter_mD80ED263BF3F1F8DBDBD177BA3401A0AAAFA38E3_gshared)(__this, method);
}
// System.Boolean System.Runtime.CompilerServices.TaskAwaiter`1<System.String>::get_IsCompleted()
inline bool TaskAwaiter_1_get_IsCompleted_mE207C5509602B0BB59366E53CED6CC9B10A1F8A8 (TaskAwaiter_1_t254638BB1FAD695D9A9542E098A189D438A000F6* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (TaskAwaiter_1_t254638BB1FAD695D9A9542E098A189D438A000F6*, const RuntimeMethod*))TaskAwaiter_1_get_IsCompleted_mEEBB09E26F4165A0F864D92E1890CFCD2C8CFD54_gshared)(__this, method);
}
// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter`1<System.String>,TargetHandler/<GenerateTargetItems>d__32>(TAwaiter&,TStateMachine&)
inline void AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t254638BB1FAD695D9A9542E098A189D438A000F6_TisU3CGenerateTargetItemsU3Ed__32_t022CBBF6C6A16E5E4426916B9827B634513DE9CC_m9B3E927037E3E174069A0E024ED53B2E8DB35A53 (AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D* __this, TaskAwaiter_1_t254638BB1FAD695D9A9542E098A189D438A000F6* ___awaiter0, U3CGenerateTargetItemsU3Ed__32_t022CBBF6C6A16E5E4426916B9827B634513DE9CC* ___stateMachine1, const RuntimeMethod* method)
{
	((  void (*) (AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D*, TaskAwaiter_1_t254638BB1FAD695D9A9542E098A189D438A000F6*, U3CGenerateTargetItemsU3Ed__32_t022CBBF6C6A16E5E4426916B9827B634513DE9CC*, const RuntimeMethod*))AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t0B808409CD8201F13AAC85F29D646518C4857BEA_TisU3CGenerateTargetItemsU3Ed__32_t022CBBF6C6A16E5E4426916B9827B634513DE9CC_m700E008CCC1AABEFDB244BFED9FF63E76B1BB73E_gshared)(__this, ___awaiter0, ___stateMachine1, method);
}
// TResult System.Runtime.CompilerServices.TaskAwaiter`1<System.String>::GetResult()
inline String_t* TaskAwaiter_1_GetResult_m82A392802A854576DC9525B87B0053B56201ABB9 (TaskAwaiter_1_t254638BB1FAD695D9A9542E098A189D438A000F6* __this, const RuntimeMethod* method)
{
	return ((  String_t* (*) (TaskAwaiter_1_t254638BB1FAD695D9A9542E098A189D438A000F6*, const RuntimeMethod*))TaskAwaiter_1_GetResult_mA4A8A1F43A456B40DDA251D00026C60919AED85B_gshared)(__this, method);
}
// T UnityEngine.JsonUtility::FromJson<TargetWrapper>(System.String)
inline TargetWrapper_t7CCA6EA84DFD8C48A2F98E96C300B0EE111C1DFE* JsonUtility_FromJson_TisTargetWrapper_t7CCA6EA84DFD8C48A2F98E96C300B0EE111C1DFE_m9E1E8CB15ECDE2AF98E02B109A480F9E17026AAE (String_t* ___json0, const RuntimeMethod* method)
{
	return ((  TargetWrapper_t7CCA6EA84DFD8C48A2F98E96C300B0EE111C1DFE* (*) (String_t*, const RuntimeMethod*))JsonUtility_FromJson_TisRuntimeObject_m3A645CB2B6525E4A5835EA8A8CEBD39C7E2C444A_gshared)(___json0, method);
}
// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder::SetException(System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncVoidMethodBuilder_SetException_mD9A6F5D1A99A62AC9DF322901BFDE05193CB177B (AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D* __this, Exception_t* ___exception0, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder::SetResult()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncVoidMethodBuilder_SetResult_m008490FDF057D5F5D871F537C7A58BE36027F3DC (AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D* __this, const RuntimeMethod* method) ;
// System.Void TargetHandler/<GenerateTargetItems>d__32::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGenerateTargetItemsU3Ed__32_MoveNext_m4C59416E4F678A538716AF7D08E497893C12F86F (U3CGenerateTargetItemsU3Ed__32_t022CBBF6C6A16E5E4426916B9827B634513DE9CC* __this, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncVoidMethodBuilder_SetStateMachine_m48640FB81C34D4C2B5A5BBA7F5AE17DC50BF1A25 (AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D* __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method) ;
// System.Void TargetHandler/<GenerateTargetItems>d__32::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGenerateTargetItemsU3Ed__32_SetStateMachine_m5D18D1CBC2CF33B468436EE94005BB29C6463B17 (U3CGenerateTargetItemsU3Ed__32_t022CBBF6C6A16E5E4426916B9827B634513DE9CC* __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method) ;
// System.Void TargetHandler/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m3F106270047E49B19139213968298E333C8F218D (U3CU3Ec_t70AD3AFEE444A985AD7890EC330EE5AF8DAF2A47* __this, const RuntimeMethod* method) ;
// System.Void TMPro.TMP_Dropdown/OptionData::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OptionData__ctor_m5B8E6B683070AB406FA738E689E2FD4055697FB6 (OptionData_tFDFBCB4A5FB860E95AE46FDAC112DB4140A8525E* __this, const RuntimeMethod* method) ;
// System.Void TMPro.TMP_Dropdown/OptionData::set_text(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void OptionData_set_text_mFF1E8A215A399CB9EA9DDFB0C6F3B9F068837226_inline (OptionData_tFDFBCB4A5FB860E95AE46FDAC112DB4140A8525E* __this, String_t* ___value0, const RuntimeMethod* method) ;
// System.Void WebGLSupport.WebGLInputMobile::OnTouchEnd(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebGLInputMobile_OnTouchEnd_m978A0707F6A1C683D43974DF7F58438DBE65F866 (int32_t ___id0, const RuntimeMethod* method) ;
// System.Void WebGLSupport.WebGLInputMobile::OnFocusOut(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebGLInputMobile_OnFocusOut_m920DE6E8C07CDE2C46DF00C7511C86D8C3713D6F (int32_t ___id0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Behaviour::set_enabled(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A (Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Void System.Action`1<System.Int32>::.ctor(System.Object,System.IntPtr)
inline void Action_1__ctor_m1BA854F3F4319EA4A4294DDFDA21C395B8D0FF87 (Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404*, RuntimeObject*, intptr_t, const RuntimeMethod*))Action_1__ctor_m1BA854F3F4319EA4A4294DDFDA21C395B8D0FF87_gshared)(__this, ___object0, ___method1, method);
}
// System.Int32 WebGLSupport.WebGLInputMobilePlugin::WebGLInputMobileRegister(System.Action`1<System.Int32>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t WebGLInputMobilePlugin_WebGLInputMobileRegister_mBD9139A5F83CB20590F1F6018DCF763476EE4CCF (Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404* ___OnTouchEnd0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,WebGLSupport.WebGLInputMobile>::set_Item(TKey,TValue)
inline void Dictionary_2_set_Item_m9AB8A5EFFD68EF12D1CDA65041EF049F912068EE (Dictionary_2_tCC64C94C8DF1B73C6C7A4649650F9A9C33BF7925* __this, int32_t ___key0, WebGLInputMobile_t98BD6DEA2871F796049970F99FBBFCBACF318ACF* ___value1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tCC64C94C8DF1B73C6C7A4649650F9A9C33BF7925*, int32_t, WebGLInputMobile_t98BD6DEA2871F796049970F99FBBFCBACF318ACF*, const RuntimeMethod*))Dictionary_2_set_Item_m2888D71A14F2B8510102F24FEE90552E91B124C1_gshared)(__this, ___key0, ___value1, method);
}
// TValue System.Collections.Generic.Dictionary`2<System.Int32,WebGLSupport.WebGLInputMobile>::get_Item(TKey)
inline WebGLInputMobile_t98BD6DEA2871F796049970F99FBBFCBACF318ACF* Dictionary_2_get_Item_mCDA5380AEA99F0E7C38C9A7C020DFCD9167FC755 (Dictionary_2_tCC64C94C8DF1B73C6C7A4649650F9A9C33BF7925* __this, int32_t ___key0, const RuntimeMethod* method)
{
	return ((  WebGLInputMobile_t98BD6DEA2871F796049970F99FBBFCBACF318ACF* (*) (Dictionary_2_tCC64C94C8DF1B73C6C7A4649650F9A9C33BF7925*, int32_t, const RuntimeMethod*))Dictionary_2_get_Item_mC3FEA647E750C27367C990777D8890E0E712E514_gshared)(__this, ___key0, method);
}
// T UnityEngine.Component::GetComponent<WebGLSupport.WebGLInput>()
inline WebGLInput_t20A7ED221656A06B7688C4010D4E7E8E74C4CE16* Component_GetComponent_TisWebGLInput_t20A7ED221656A06B7688C4010D4E7E8E74C4CE16_m3856F168FBC1AD6FC988BE4D85C5F3928B79795E (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  WebGLInput_t20A7ED221656A06B7688C4010D4E7E8E74C4CE16* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// System.Void WebGLSupport.WebGLInput::OnSelect()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebGLInput_OnSelect_mCBFF3C8DB21F48A4837D26AB9F4D8833FFDA040A (WebGLInput_t20A7ED221656A06B7688C4010D4E7E8E74C4CE16* __this, const RuntimeMethod* method) ;
// System.Collections.IEnumerator WebGLSupport.WebGLInputMobile::RegisterOnFocusOut(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WebGLInputMobile_RegisterOnFocusOut_mC3B0E6778773C51B63EA9532255A2EA2C41AF93D (int32_t ___id0, const RuntimeMethod* method) ;
// System.Void WebGLSupport.WebGLInputMobile/<RegisterOnFocusOut>d__5::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CRegisterOnFocusOutU3Ed__5__ctor_m693FCC1F6B0A96840D65CCB7185B0605E5DBA7E1 (U3CRegisterOnFocusOutU3Ed__5_tFB92D52720A36A315F2C7494680146EDAB93E2B8* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) ;
// System.Collections.IEnumerator WebGLSupport.WebGLInputMobile::ExecFocusOut(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WebGLInputMobile_ExecFocusOut_mE4DB41B75E9D904B66BDCCEC90E4ED3D30AA7C6D (int32_t ___id0, const RuntimeMethod* method) ;
// System.Void WebGLSupport.WebGLInputMobile/<ExecFocusOut>d__7::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CExecFocusOutU3Ed__7__ctor_m82A422FA606AEFADBFD51EED7DB1A17833DAEA4D (U3CExecFocusOutU3Ed__7_tBECE39214FAE8EC1642050ADC8BABE4CD5E1C842* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,WebGLSupport.WebGLInputMobile>::.ctor()
inline void Dictionary_2__ctor_m8068039ED8A7EDC0E36FBF878873B00D4B0E5AF9 (Dictionary_2_tCC64C94C8DF1B73C6C7A4649650F9A9C33BF7925* __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tCC64C94C8DF1B73C6C7A4649650F9A9C33BF7925*, const RuntimeMethod*))Dictionary_2__ctor_m92E9AB321FBD7147CA109C822D99C8B0610C27B7_gshared)(__this, method);
}
// System.Void WebGLSupport.WebGLInputMobilePlugin::WebGLInputMobileOnFocusOut(System.Int32,System.Action`1<System.Int32>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebGLInputMobilePlugin_WebGLInputMobileOnFocusOut_mF9880D622BD9FE4537F9D09AD288B7DBA55364A1 (int32_t ___id0, Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404* ___OnFocusOut1, const RuntimeMethod* method) ;
// System.Void WebGLSupport.WebGLInput::DeactivateInputField()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebGLInput_DeactivateInputField_m4E87EA2F6D4E0DF331A4D5AA564EB25375E90981 (WebGLInput_t20A7ED221656A06B7688C4010D4E7E8E74C4CE16* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,WebGLSupport.WebGLInputMobile>::Remove(TKey)
inline bool Dictionary_2_Remove_m057099BE5B700D4EBE18CCA3148D0E24A0552E0C (Dictionary_2_tCC64C94C8DF1B73C6C7A4649650F9A9C33BF7925* __this, int32_t ___key0, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_tCC64C94C8DF1B73C6C7A4649650F9A9C33BF7925*, int32_t, const RuntimeMethod*))Dictionary_2_Remove_m12BAB2F82E34CAA21A7245AB61E48F106340C1A4_gshared)(__this, ___key0, method);
}
// System.Void WebGLSupport.WebGLInput::OnFocus(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebGLInput_OnFocus_m54DB80C07B523F13C6259FFCFD90BA552CF2FE64 (int32_t ___id0, const RuntimeMethod* method) ;
// System.Void WebGLSupport.WebGLInput::OnBlur(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebGLInput_OnBlur_mCFFB178E96DC6F40021B960A740AB053AEB9B8BE (int32_t ___id0, const RuntimeMethod* method) ;
// System.Void WebGLSupport.WebGLInput::OnValueChange(System.Int32,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebGLInput_OnValueChange_m625C675A2330B92B5E7ED45ECD14E920A2CE5357 (int32_t ___id0, String_t* ___value1, const RuntimeMethod* method) ;
// System.Void WebGLSupport.WebGLInput::OnEditEnd(System.Int32,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebGLInput_OnEditEnd_mD46937A7A64BC00B06AB18DC7B1532677AEBB4AE (int32_t ___id0, String_t* ___value1, const RuntimeMethod* method) ;
// System.Void WebGLSupport.WebGLInput::OnTab(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebGLInput_OnTab_m0F80B563448F8A140E4A704DC2501BF4A56DD20D (int32_t ___id0, int32_t ___value1, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,WebGLSupport.WebGLInput>::.ctor()
inline void Dictionary_2__ctor_m9F06C20D0FD27B7F09C6DB65CFC3CEA79BF181D1 (Dictionary_2_t02972806B8AE7773FA4016F73A171E1AEAB527C6* __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t02972806B8AE7773FA4016F73A171E1AEAB527C6*, const RuntimeMethod*))Dictionary_2__ctor_m92E9AB321FBD7147CA109C822D99C8B0610C27B7_gshared)(__this, method);
}
// System.Void WebGLSupport.WebGLInput::set_CanvasId(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void WebGLInput_set_CanvasId_m15A832E612CDD43815FD67279F5E879CE6277988_inline (String_t* ___value0, const RuntimeMethod* method) ;
// System.Void WebGLSupport.WebGLInputPlugin::WebGLInputInit()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebGLInputPlugin_WebGLInputInit_m2472A962E58DC673E575A68A88D5D61E28BB95A3 (const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<UnityEngine.UI.InputField>()
inline InputField_tABEA115F23FBD374EBE80D4FAC1D15BD6E37A140* Component_GetComponent_TisInputField_tABEA115F23FBD374EBE80D4FAC1D15BD6E37A140_m08978F3683B8CCF83910BA8BB0A4F786A6361896 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  InputField_tABEA115F23FBD374EBE80D4FAC1D15BD6E37A140* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// System.Boolean UnityEngine.Object::op_Implicit(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Implicit_m18E1885C296CC868AC918101523697CFE6413C79 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___exists0, const RuntimeMethod* method) ;
// System.Void WebGLSupport.WrappedInputField::.ctor(UnityEngine.UI.InputField)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WrappedInputField__ctor_m6F3A6F9F206C5736E3EB8A299AEB18BB7F7B8567 (WrappedInputField_tA9A06E487260394507CAA4C83E9E1E0239B4B6AE* __this, InputField_tABEA115F23FBD374EBE80D4FAC1D15BD6E37A140* ___input0, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<TMPro.TMP_InputField>()
inline TMP_InputField_t3488E0EE8C3DF56C6A328EC95D1BEEA2DF4A7D5F* Component_GetComponent_TisTMP_InputField_t3488E0EE8C3DF56C6A328EC95D1BEEA2DF4A7D5F_m638A3878EFC37F712EE8D8F0A24B543B256F7A28 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  TMP_InputField_t3488E0EE8C3DF56C6A328EC95D1BEEA2DF4A7D5F* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// System.Void WebGLSupport.WrappedTMPInputField::.ctor(TMPro.TMP_InputField)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WrappedTMPInputField__ctor_mA4A41F6731D79FF01B9716498B593502DC0131F3 (WrappedTMPInputField_t5812136E49D051CA7D0F72155950CB226F87247F* __this, TMP_InputField_t3488E0EE8C3DF56C6A328EC95D1BEEA2DF4A7D5F* ___input0, const RuntimeMethod* method) ;
// System.Void System.Exception::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F (Exception_t* __this, String_t* ___message0, const RuntimeMethod* method) ;
// WebGLSupport.IInputField WebGLSupport.WebGLInput::Setup()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WebGLInput_Setup_mF23CA9F5059938C23251F0F1CEFB2C9D5D6B4A06 (WebGLInput_t20A7ED221656A06B7688C4010D4E7E8E74C4CE16* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Application::get_isMobilePlatform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Application_get_isMobilePlatform_mBFFD8F419C7FB2FF99C84497C135007BFB5F8B53 (const RuntimeMethod* method) ;
// T UnityEngine.GameObject::AddComponent<WebGLSupport.WebGLInputMobile>()
inline WebGLInputMobile_t98BD6DEA2871F796049970F99FBBFCBACF318ACF* GameObject_AddComponent_TisWebGLInputMobile_t98BD6DEA2871F796049970F99FBBFCBACF318ACF_m898CEA8A0288360923BFF1030637B12BD251633D (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  WebGLInputMobile_t98BD6DEA2871F796049970F99FBBFCBACF318ACF* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_AddComponent_TisRuntimeObject_m69B93700FACCF372F5753371C6E8FB780800B824_gshared)(__this, method);
}
// UnityEngine.Rect WebGLSupport.WebGLInput::GetScreenCoordinates(UnityEngine.RectTransform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D WebGLInput_GetScreenCoordinates_m5955BB63E635EC9808E2ECB80C721BA39FD693FF (WebGLInput_t20A7ED221656A06B7688C4010D4E7E8E74C4CE16* __this, RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___uiElement0, const RuntimeMethod* method) ;
// System.Single UnityEngine.Rect::get_x()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Rect_get_x_mB267B718E0D067F2BAE31BA477647FBF964916EB (Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* __this, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Screen::get_height()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Screen_get_height_m624DD2D53F34087064E3B9D09AC2207DB4E86CA8 (const RuntimeMethod* method) ;
// System.Single UnityEngine.Rect::get_y()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Rect_get_y_mC733E8D49F3CE21B2A3D40A1B72D687F22C97F49 (Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Rect::get_height()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Rect_get_height_mE1AA6C6C725CCD2D317BD2157396D3CF7D47C9D8 (Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Rect::get_width()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Rect_get_width_m620D67551372073C9C32C4C4624C2A5713F7F9A9 (Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* __this, const RuntimeMethod* method) ;
// UnityEngine.RectInt WebGLSupport.WebGLInput::GetElemetRect()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RectInt_t1744D10E1063135DA9D574F95205B98DAC600CB8 WebGLInput_GetElemetRect_m1F0509C0B774E2E3B01A506E80508FA46BB14E78 (WebGLInput_t20A7ED221656A06B7688C4010D4E7E8E74C4CE16* __this, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Mathf::Max(System.Int32,System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Mathf_Max_m8A4C189A6749DFE3ED8B66D9D3CACD8DB333974F_inline (int32_t ___a0, int32_t ___b1, const RuntimeMethod* method) ;
// System.String WebGLSupport.WebGLInput::get_CanvasId()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* WebGLInput_get_CanvasId_mCE5D4CCA8E8D30C50D142C5238FB889AAEFBEF83_inline (const RuntimeMethod* method) ;
// System.Int32 UnityEngine.RectInt::get_x()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RectInt_get_x_mA1E7EF6DEAD2E900D7D56B7A3957C05081EBA9CA (RectInt_t1744D10E1063135DA9D574F95205B98DAC600CB8* __this, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.RectInt::get_y()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RectInt_get_y_m440422264E6FCAA91E01F81486A78037AC29D878 (RectInt_t1744D10E1063135DA9D574F95205B98DAC600CB8* __this, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.RectInt::get_width()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RectInt_get_width_m6B7B2FB764EAE83B7F63E7F77FA33973606761A7 (RectInt_t1744D10E1063135DA9D574F95205B98DAC600CB8* __this, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.RectInt::get_height()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RectInt_get_height_mE25FB938714942D7A3BA0B3C21BC5CB913D5709C (RectInt_t1744D10E1063135DA9D574F95205B98DAC600CB8* __this, const RuntimeMethod* method) ;
// System.Int32 WebGLSupport.WebGLInputPlugin::WebGLInputCreate(System.String,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.String,System.String,System.Boolean,System.Boolean,System.Boolean,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t WebGLInputPlugin_WebGLInputCreate_mA7FD6FE11D839E684A570D05BC7F57FA2FF21940 (String_t* ___canvasId0, int32_t ___x1, int32_t ___y2, int32_t ___width3, int32_t ___height4, int32_t ___fontsize5, String_t* ___text6, String_t* ___placeholder7, bool ___isMultiLine8, bool ___isPassword9, bool ___isHidden10, bool ___isMobile11, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,WebGLSupport.WebGLInput>::set_Item(TKey,TValue)
inline void Dictionary_2_set_Item_m54EDBFC5A43C72CF7D0B25CEA2C03096788D277C (Dictionary_2_t02972806B8AE7773FA4016F73A171E1AEAB527C6* __this, int32_t ___key0, WebGLInput_t20A7ED221656A06B7688C4010D4E7E8E74C4CE16* ___value1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t02972806B8AE7773FA4016F73A171E1AEAB527C6*, int32_t, WebGLInput_t20A7ED221656A06B7688C4010D4E7E8E74C4CE16*, const RuntimeMethod*))Dictionary_2_set_Item_m2888D71A14F2B8510102F24FEE90552E91B124C1_gshared)(__this, ___key0, ___value1, method);
}
// System.Void WebGLSupport.WebGLInputPlugin::WebGLInputEnterSubmit(System.Int32,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebGLInputPlugin_WebGLInputEnterSubmit_m3070A973649704FA89A3BD8EE49B67F7BE7FE545 (int32_t ___id0, bool ___flag1, const RuntimeMethod* method) ;
// System.Void WebGLSupport.WebGLInputPlugin::WebGLInputOnFocus(System.Int32,System.Action`1<System.Int32>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebGLInputPlugin_WebGLInputOnFocus_mDEB278E47A5763BB3AF842970C5208C9F6972DE7 (int32_t ___id0, Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404* ___cb1, const RuntimeMethod* method) ;
// System.Void WebGLSupport.WebGLInputPlugin::WebGLInputOnBlur(System.Int32,System.Action`1<System.Int32>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebGLInputPlugin_WebGLInputOnBlur_mA7AD07048CD4E76D4C68BE928F1725F410510BC7 (int32_t ___id0, Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404* ___cb1, const RuntimeMethod* method) ;
// System.Void System.Action`2<System.Int32,System.String>::.ctor(System.Object,System.IntPtr)
inline void Action_2__ctor_mECAF7244ADE81BED22587EECD7FD59AD4BC5CE05 (Action_2_t6AAF2E215E74E16A4EEF0A0749A4A325D99F5BA6* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Action_2_t6AAF2E215E74E16A4EEF0A0749A4A325D99F5BA6*, RuntimeObject*, intptr_t, const RuntimeMethod*))Action_2__ctor_mE8DA76229BFE3CE94CA3DEF078C8B6F71B3615BF_gshared)(__this, ___object0, ___method1, method);
}
// System.Void WebGLSupport.WebGLInputPlugin::WebGLInputOnValueChange(System.Int32,System.Action`2<System.Int32,System.String>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebGLInputPlugin_WebGLInputOnValueChange_m757285F50B012805F5B56E914A9C14A8430A85EB (int32_t ___id0, Action_2_t6AAF2E215E74E16A4EEF0A0749A4A325D99F5BA6* ___cb1, const RuntimeMethod* method) ;
// System.Void WebGLSupport.WebGLInputPlugin::WebGLInputOnEditEnd(System.Int32,System.Action`2<System.Int32,System.String>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebGLInputPlugin_WebGLInputOnEditEnd_mA2EF5284E4139109F2C1AF6535DE3A998C623B6A (int32_t ___id0, Action_2_t6AAF2E215E74E16A4EEF0A0749A4A325D99F5BA6* ___cb1, const RuntimeMethod* method) ;
// System.Void System.Action`2<System.Int32,System.Int32>::.ctor(System.Object,System.IntPtr)
inline void Action_2__ctor_m83CEE170A5B9427B596A04F9F50676B044223927 (Action_2_tD7438462601D3939500ED67463331FE00CFFBDB8* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Action_2_tD7438462601D3939500ED67463331FE00CFFBDB8*, RuntimeObject*, intptr_t, const RuntimeMethod*))Action_2__ctor_m83CEE170A5B9427B596A04F9F50676B044223927_gshared)(__this, ___object0, ___method1, method);
}
// System.Void WebGLSupport.WebGLInputPlugin::WebGLInputTab(System.Int32,System.Action`2<System.Int32,System.Int32>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebGLInputPlugin_WebGLInputTab_mE0098C4E894B6CC801E33A7407DA66ECDC3EA0F5 (int32_t ___id0, Action_2_tD7438462601D3939500ED67463331FE00CFFBDB8* ___cb1, const RuntimeMethod* method) ;
// System.Void WebGLSupport.WebGLInputPlugin::WebGLInputMaxLength(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebGLInputPlugin_WebGLInputMaxLength_mFD33ED6C71A6622CBF8114AF1CFD063EDEB3A542 (int32_t ___id0, int32_t ___maxlength1, const RuntimeMethod* method) ;
// System.Void WebGLSupport.WebGLInputPlugin::WebGLInputFocus(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebGLInputPlugin_WebGLInputFocus_m0B04B16B180EECDACB732CB1A7D8F56AFD605D2C (int32_t ___id0, const RuntimeMethod* method) ;
// System.Void WebGLSupport.WebGLInputPlugin::WebGLInputSetSelectionRange(System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebGLInputPlugin_WebGLInputSetSelectionRange_m7DEBA2D9B4B6E35AFA7F251EA8CDA1DCB4DE13D1 (int32_t ___id0, int32_t ___start1, int32_t ___end2, const RuntimeMethod* method) ;
// System.Void System.Action::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action__ctor_mBDC7B0B4A3F583B64C2896F01BDED360772F67DC (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Void WebGLSupport.WebGLWindow::add_OnBlurEvent(System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebGLWindow_add_OnBlurEvent_mAD3A05ED7219F7DBDCDE211AD302AFF6AAEC76AF (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.RectTransform::GetWorldCorners(UnityEngine.Vector3[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RectTransform_GetWorldCorners_m6E15303C3B065B2F65E0A7F0E0217695564C2E09 (RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* __this, Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___fourCornersArray0, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponentInParent<UnityEngine.Canvas>()
inline Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* Component_GetComponentInParent_TisCanvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26_m5FB554DD7C0F662DAB84C0F292B221CAE3F0A5B3 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponentInParent_TisRuntimeObject_m6746D6BB99912B1B509746C993906492F86CD119_gshared)(__this, method);
}
// UnityEngine.RenderMode UnityEngine.Canvas::get_renderMode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Canvas_get_renderMode_m1BEF259548C6CAD27E4466F31D20752D246688CC (Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* __this, const RuntimeMethod* method) ;
// UnityEngine.Camera UnityEngine.Canvas::get_worldCamera()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* Canvas_get_worldCamera_mD2FDE13B61A5213F4E64B40008EB0A8D2D07B853 (Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* __this, const RuntimeMethod* method) ;
// UnityEngine.Camera UnityEngine.Camera::get_main()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* Camera_get_main_mF222B707D3BF8CC9C7544609EFC71CFB62E81D43 (const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Camera::WorldToScreenPoint(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Camera_WorldToScreenPoint_m26B4C8945C3B5731F1CC5944CFD96BF17126BAA3 (Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m5F87930F9B0828E5652E2D9D01ED907C01122C86_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___x0, float ___y1, const RuntimeMethod* method) ;
// System.Single UnityEngine.Mathf::Min(System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Min_m4F2A9C5128DC3F9E84865EE7ADA8DB5DA6B8B507_inline (float ___a0, float ___b1, const RuntimeMethod* method) ;
// System.Single UnityEngine.Mathf::Max(System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Max_mA9DCA91E87D6D27034F56ABA52606A9090406016_inline (float ___a0, float ___b1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Rect::.ctor(System.Single,System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rect__ctor_m18C3033D135097BEE424AAA68D91C706D2647F23 (Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* __this, float ___x0, float ___y1, float ___width2, float ___height3, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,WebGLSupport.WebGLInput>::ContainsKey(TKey)
inline bool Dictionary_2_ContainsKey_m7F72E314213887650CD6F6CBFAAF1344D1F07B85 (Dictionary_2_t02972806B8AE7773FA4016F73A171E1AEAB527C6* __this, int32_t ___key0, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t02972806B8AE7773FA4016F73A171E1AEAB527C6*, int32_t, const RuntimeMethod*))Dictionary_2_ContainsKey_mED5C451F158CDDD2B3F4B0720CD248DA9DB27B25_gshared)(__this, ___key0, method);
}
// System.Void WebGLSupport.WebGLInputPlugin::WebGLInputDelete(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebGLInputPlugin_WebGLInputDelete_mC60D7EA1110F3FFBC368CE45F0A5DDF2953876D7 (int32_t ___id0, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,WebGLSupport.WebGLInput>::Remove(TKey)
inline bool Dictionary_2_Remove_m0507E915ED1AEBF6BEB38EDE3E17B54F7943C195 (Dictionary_2_t02972806B8AE7773FA4016F73A171E1AEAB527C6* __this, int32_t ___key0, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t02972806B8AE7773FA4016F73A171E1AEAB527C6*, int32_t, const RuntimeMethod*))Dictionary_2_Remove_m12BAB2F82E34CAA21A7245AB61E48F106340C1A4_gshared)(__this, ___key0, method);
}
// System.Void WebGLSupport.WebGLWindow::remove_OnBlurEvent(System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebGLWindow_remove_OnBlurEvent_m263FC52D6E9E0214C0E7EA8CE947FC5C336BCE79 (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___value0, const RuntimeMethod* method) ;
// TValue System.Collections.Generic.Dictionary`2<System.Int32,WebGLSupport.WebGLInput>::get_Item(TKey)
inline WebGLInput_t20A7ED221656A06B7688C4010D4E7E8E74C4CE16* Dictionary_2_get_Item_m930DCD8CEFA743C98FAB7799CE35113DA70B379A (Dictionary_2_t02972806B8AE7773FA4016F73A171E1AEAB527C6* __this, int32_t ___key0, const RuntimeMethod* method)
{
	return ((  WebGLInput_t20A7ED221656A06B7688C4010D4E7E8E74C4CE16* (*) (Dictionary_2_t02972806B8AE7773FA4016F73A171E1AEAB527C6*, int32_t, const RuntimeMethod*))Dictionary_2_get_Item_mC3FEA647E750C27367C990777D8890E0E712E514_gshared)(__this, ___key0, method);
}
// System.Collections.IEnumerator WebGLSupport.WebGLInput::Blur(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WebGLInput_Blur_m7C2CDB09E0E3A835FCDF57F4F712760455086124 (int32_t ___id0, const RuntimeMethod* method) ;
// System.Void WebGLSupport.WebGLInput/<Blur>d__21::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CBlurU3Ed__21__ctor_m0CC57EF6BDE5728AC9D840929E667403172CB4EC (U3CBlurU3Ed__21_t758693716AB460F60B691592D89A9DD3AE6F69DE* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) ;
// System.Int32 System.String::Compare(System.String,System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t String_Compare_mA1B6FACF0E4A9B45FFECF215BF15A040C2DA9A34 (String_t* ___strA0, String_t* ___strB1, bool ___ignoreCase2, const RuntimeMethod* method) ;
// System.Int32 WebGLSupport.WebGLInputPlugin::WebGLInputSelectionStart(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t WebGLInputPlugin_WebGLInputSelectionStart_m3AA87E082F4338544E8878E64DC454B648EACAB1 (int32_t ___id0, const RuntimeMethod* method) ;
// System.Int32 WebGLSupport.WebGLInputPlugin::WebGLInputSelectionEnd(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t WebGLInputPlugin_WebGLInputSelectionEnd_mCDDD6F02146F520976A2B10EBC9DD9D3023DC21B (int32_t ___id0, const RuntimeMethod* method) ;
// System.Void WebGLSupport.WebGLInputPlugin::WebGLInputText(System.Int32,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebGLInputPlugin_WebGLInputText_m4F6B1ACC17624AB94E5222CB6A30764E03C67F75 (int32_t ___id0, String_t* ___text1, const RuntimeMethod* method) ;
// System.Void WebGLSupport.WebGLInput/WebGLInputTabFocus::OnTab(WebGLSupport.WebGLInput,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebGLInputTabFocus_OnTab_m2FF5D1868D2B2FA9A5315910236E63AE0E907341 (WebGLInput_t20A7ED221656A06B7688C4010D4E7E8E74C4CE16* ___input0, int32_t ___value1, const RuntimeMethod* method) ;
// System.Void WebGLSupport.WebGLInput::CheckOutFocus()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebGLInput_CheckOutFocus_mCF0504E016AA68B54E676EA8089F35856DFB8170 (WebGLInput_t20A7ED221656A06B7688C4010D4E7E8E74C4CE16* __this, const RuntimeMethod* method) ;
// System.Boolean WebGLSupport.WebGLInputPlugin::WebGLInputIsFocus(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WebGLInputPlugin_WebGLInputIsFocus_m8C82A2A1EBFC699255358BB93DBA9603B8C8E418 (int32_t ___id0, const RuntimeMethod* method) ;
// System.Int32 WebGLSupport.WebGLInputPlugin::WebGLInputSelectionDirection(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t WebGLInputPlugin_WebGLInputSelectionDirection_m032D107EFC91EB87ECE22BFC9E3174CB7B540906 (int32_t ___id0, const RuntimeMethod* method) ;
// System.Void WebGLSupport.WebGLInput/WebGLInputTabFocus::Add(WebGLSupport.WebGLInput)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebGLInputTabFocus_Add_m559CF3ECEF31308C59B021A231768FC1F16E7565 (WebGLInput_t20A7ED221656A06B7688C4010D4E7E8E74C4CE16* ___input0, const RuntimeMethod* method) ;
// System.Void WebGLSupport.WebGLInput/WebGLInputTabFocus::Remove(WebGLSupport.WebGLInput)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebGLInputTabFocus_Remove_m02A48E2F2B5EDCF092DAACC24B396A8D2D9CF713 (WebGLInput_t20A7ED221656A06B7688C4010D4E7E8E74C4CE16* ___input0, const RuntimeMethod* method) ;
// System.Int32 System.Single::CompareTo(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Single_CompareTo_m06F7868162EB392D3E99103D1A0BD27463C9E66F (float* __this, float ___value0, const RuntimeMethod* method) ;
// UnityEngine.EventSystems.EventSystem UnityEngine.EventSystems.EventSystem::get_current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707* EventSystem_get_current_mD15EA86304E070D175EF359A051A7DB807CA26C0 (const RuntimeMethod* method) ;
// UnityEngine.GameObject UnityEngine.EventSystems.EventSystem::get_currentSelectedGameObject()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* EventSystem_get_currentSelectedGameObject_mD606FFACF3E72755298A523CBB709535CF08C98A_inline (EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___x0, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___y1, const RuntimeMethod* method) ;
// System.Void WebGLSupport.WebGLInputPlugin::WebGLInputForceBlur(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebGLInputPlugin_WebGLInputForceBlur_m1D1EF257EC368AFC54306A5E5429F8DF11501097 (int32_t ___id0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<WebGLSupport.WebGLInput>::Add(T)
inline void List_1_Add_mD96A24F4E6DE395990A2DA04969DCCDF05BF2F93_inline (List_1_tDD7B1080B0F1C545C5FBF897D24700DEAD1AE4A4* __this, WebGLInput_t20A7ED221656A06B7688C4010D4E7E8E74C4CE16* ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_tDD7B1080B0F1C545C5FBF897D24700DEAD1AE4A4*, WebGLInput_t20A7ED221656A06B7688C4010D4E7E8E74C4CE16*, const RuntimeMethod*))List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline)(__this, ___item0, method);
}
// System.Void System.Collections.Generic.List`1<WebGLSupport.WebGLInput>::Sort()
inline void List_1_Sort_m2735B8FE0432B95637A539B43DB6F51370E664E2 (List_1_tDD7B1080B0F1C545C5FBF897D24700DEAD1AE4A4* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tDD7B1080B0F1C545C5FBF897D24700DEAD1AE4A4*, const RuntimeMethod*))List_1_Sort_m31071C3C6DF1FAD770119031BEA9315A2E3C1298_gshared)(__this, method);
}
// System.Boolean System.Collections.Generic.List`1<WebGLSupport.WebGLInput>::Remove(T)
inline bool List_1_Remove_m7D2CF28D9949C827FBAB3B319B49D9F9F57E8F72 (List_1_tDD7B1080B0F1C545C5FBF897D24700DEAD1AE4A4* __this, WebGLInput_t20A7ED221656A06B7688C4010D4E7E8E74C4CE16* ___item0, const RuntimeMethod* method)
{
	return ((  bool (*) (List_1_tDD7B1080B0F1C545C5FBF897D24700DEAD1AE4A4*, WebGLInput_t20A7ED221656A06B7688C4010D4E7E8E74C4CE16*, const RuntimeMethod*))List_1_Remove_m4DFA48F4CEB9169601E75FC28517C5C06EFA5AD7_gshared)(__this, ___item0, method);
}
// System.Int32 System.Collections.Generic.List`1<WebGLSupport.WebGLInput>::get_Count()
inline int32_t List_1_get_Count_m6310535726D2DA028F28BFC53DE44EDB18EF4A8C_inline (List_1_tDD7B1080B0F1C545C5FBF897D24700DEAD1AE4A4* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_tDD7B1080B0F1C545C5FBF897D24700DEAD1AE4A4*, const RuntimeMethod*))List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline)(__this, method);
}
// System.Int32 System.Collections.Generic.List`1<WebGLSupport.WebGLInput>::IndexOf(T)
inline int32_t List_1_IndexOf_mC37A93DEE8F3410664601580F5C5036961A67F5A (List_1_tDD7B1080B0F1C545C5FBF897D24700DEAD1AE4A4* __this, WebGLInput_t20A7ED221656A06B7688C4010D4E7E8E74C4CE16* ___item0, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_tDD7B1080B0F1C545C5FBF897D24700DEAD1AE4A4*, WebGLInput_t20A7ED221656A06B7688C4010D4E7E8E74C4CE16*, const RuntimeMethod*))List_1_IndexOf_m378F61BA812B79DEE58D86FE8AA9F20E3FC7D85F_gshared)(__this, ___item0, method);
}
// T System.Collections.Generic.List`1<WebGLSupport.WebGLInput>::get_Item(System.Int32)
inline WebGLInput_t20A7ED221656A06B7688C4010D4E7E8E74C4CE16* List_1_get_Item_m9084470EFC68CF5F29E62A677DD9D8BC900ED8CE (List_1_tDD7B1080B0F1C545C5FBF897D24700DEAD1AE4A4* __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  WebGLInput_t20A7ED221656A06B7688C4010D4E7E8E74C4CE16* (*) (List_1_tDD7B1080B0F1C545C5FBF897D24700DEAD1AE4A4*, int32_t, const RuntimeMethod*))List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38_gshared)(__this, ___index0, method);
}
// System.Void System.Collections.Generic.List`1<WebGLSupport.WebGLInput>::.ctor()
inline void List_1__ctor_m0EEDC2175ABFE2B54EB4416CB6D8EAE10254F98C (List_1_tDD7B1080B0F1C545C5FBF897D24700DEAD1AE4A4* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tDD7B1080B0F1C545C5FBF897D24700DEAD1AE4A4*, const RuntimeMethod*))List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared)(__this, method);
}
// System.Boolean UnityEngine.UI.InputField::get_readOnly()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool InputField_get_readOnly_m37800B8623CB744D99E5F5607C80AEBE6C7043B3_inline (InputField_tABEA115F23FBD374EBE80D4FAC1D15BD6E37A140* __this, const RuntimeMethod* method) ;
// UnityEngine.UI.Graphic UnityEngine.UI.InputField::get_placeholder()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931* InputField_get_placeholder_m84C2F2E414B8A03B372C7CEB3C97A2AE72F3A39F_inline (InputField_tABEA115F23FBD374EBE80D4FAC1D15BD6E37A140* __this, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<UnityEngine.UI.Text>()
inline Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* Component_GetComponent_TisText_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62_mB85C5C0EEF6535E3FC0DBFC14E39FA5A51B6F888 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// UnityEngine.UI.Text UnityEngine.UI.InputField::get_textComponent()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* InputField_get_textComponent_m319EF4B9B24056AF25327874A2455362FF7B7A85_inline (InputField_tABEA115F23FBD374EBE80D4FAC1D15BD6E37A140* __this, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.UI.Text::get_fontSize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Text_get_fontSize_m837C0618E78D0FDA972D11DDE3015DC888E93993 (Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* __this, const RuntimeMethod* method) ;
// UnityEngine.UI.InputField/ContentType UnityEngine.UI.InputField::get_contentType()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t InputField_get_contentType_m8C589B15987EB8852D5F4948A79084186935B19B_inline (InputField_tABEA115F23FBD374EBE80D4FAC1D15BD6E37A140* __this, const RuntimeMethod* method) ;
// UnityEngine.UI.InputField/LineType UnityEngine.UI.InputField::get_lineType()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t InputField_get_lineType_m6CEA63D8FCACAEC05D3499577ED0771EFFF33377_inline (InputField_tABEA115F23FBD374EBE80D4FAC1D15BD6E37A140* __this, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.UI.InputField::get_characterLimit()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t InputField_get_characterLimit_m7FE26FC66741545B89BFFDCAD8E8B34EB1274403_inline (InputField_tABEA115F23FBD374EBE80D4FAC1D15BD6E37A140* __this, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.UI.InputField::get_caretPosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t InputField_get_caretPosition_mC43674CCFF5BF7D047C2D4682B2CD7DE8A179EA7 (InputField_tABEA115F23FBD374EBE80D4FAC1D15BD6E37A140* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.UI.InputField::get_isFocused()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool InputField_get_isFocused_m19BD51E842077CA087824025F294C4078B2DAC50_inline (InputField_tABEA115F23FBD374EBE80D4FAC1D15BD6E37A140* __this, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.UI.InputField::get_selectionFocusPosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t InputField_get_selectionFocusPosition_m14D662A0A20FF6952E73CFAB7C1F21FD7CF4298A (InputField_tABEA115F23FBD374EBE80D4FAC1D15BD6E37A140* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.UI.InputField::set_selectionFocusPosition(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputField_set_selectionFocusPosition_mE9E0E491C5AC1B89B4F9272EC3B67617A4F7DFEB (InputField_tABEA115F23FBD374EBE80D4FAC1D15BD6E37A140* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.UI.InputField::get_selectionAnchorPosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t InputField_get_selectionAnchorPosition_mF5CB19025C29DECEA0EBA8C6EC3D6D5687A1D65E (InputField_tABEA115F23FBD374EBE80D4FAC1D15BD6E37A140* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.UI.InputField::set_selectionAnchorPosition(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputField_set_selectionAnchorPosition_mE57B85DBF03991E694729ED36283B44A8D7D1E68 (InputField_tABEA115F23FBD374EBE80D4FAC1D15BD6E37A140* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Void WebGLSupport.Detail.RebuildChecker::.ctor(WebGLSupport.IInputField)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RebuildChecker__ctor_mC68C7B0720DF8D5826A5244189C46C2C9D1E5299 (RebuildChecker_t655BE8F346B22370339BAE56B91783950CAAC807* __this, RuntimeObject* ___input0, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<UnityEngine.RectTransform>()
inline RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* Component_GetComponent_TisRectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_m0640480E7E38BB88B0D1F6AD59E697C8EE6AAFA4 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// System.Void UnityEngine.UI.InputField::ActivateInputField()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputField_ActivateInputField_m4986DE5488FE44D93DE1D906C140D6500134DF05 (InputField_tABEA115F23FBD374EBE80D4FAC1D15BD6E37A140* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.UI.InputField::DeactivateInputField()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputField_DeactivateInputField_m58D0B3BF095094A0963A9CE8BABF1979F7D1254D (InputField_tABEA115F23FBD374EBE80D4FAC1D15BD6E37A140* __this, const RuntimeMethod* method) ;
// System.Boolean WebGLSupport.Detail.RebuildChecker::NeedRebuild(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RebuildChecker_NeedRebuild_m84BFC0E6654441869C9D4B25718564302A977781 (RebuildChecker_t655BE8F346B22370339BAE56B91783950CAAC807* __this, bool ___debug0, const RuntimeMethod* method) ;
// System.Boolean TMPro.TMP_InputField::get_readOnly()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TMP_InputField_get_readOnly_m551BFA0AB64EBD12F49C0993305274BC8176E0A5_inline (TMP_InputField_t3488E0EE8C3DF56C6A328EC95D1BEEA2DF4A7D5F* __this, const RuntimeMethod* method) ;
// System.String TMPro.TMP_InputField::get_text()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* TMP_InputField_get_text_mA4ACBF52435893D9DFD822A492454301740B3C6A_inline (TMP_InputField_t3488E0EE8C3DF56C6A328EC95D1BEEA2DF4A7D5F* __this, const RuntimeMethod* method) ;
// System.String WebGLSupport.WrappedTMPInputField::FixContentTypeByInputField(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* WrappedTMPInputField_FixContentTypeByInputField_mE995B6FEAE819075B95F77C5EED9BF02AE46E8AB (WrappedTMPInputField_t5812136E49D051CA7D0F72155950CB226F87247F* __this, String_t* ___inText0, const RuntimeMethod* method) ;
// System.Void TMPro.TMP_InputField::set_text(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TMP_InputField_set_text_m684E9CDA2D9E82D1C497B5E03DBE79C00584FF62 (TMP_InputField_t3488E0EE8C3DF56C6A328EC95D1BEEA2DF4A7D5F* __this, String_t* ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.GameObject::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject__ctor_m37D512B05D292F954792225E6C6EEE95293A9B88 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, String_t* ___name0, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::AddComponent<UnityEngine.UI.InputField>()
inline InputField_tABEA115F23FBD374EBE80D4FAC1D15BD6E37A140* GameObject_AddComponent_TisInputField_tABEA115F23FBD374EBE80D4FAC1D15BD6E37A140_m932E2AB0AA903C34FABFD908BC6509C17FFE693E (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  InputField_tABEA115F23FBD374EBE80D4FAC1D15BD6E37A140* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_AddComponent_TisRuntimeObject_m69B93700FACCF372F5753371C6E8FB780800B824_gshared)(__this, method);
}
// System.Type System.Type::GetTypeFromHandle(System.RuntimeTypeHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E (RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ___handle0, const RuntimeMethod* method) ;
// TMPro.TMP_InputField/ContentType TMPro.TMP_InputField::get_contentType()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t TMP_InputField_get_contentType_m32EEDFC275E9CB6C759A4F117EBAA40336B9030D_inline (TMP_InputField_t3488E0EE8C3DF56C6A328EC95D1BEEA2DF4A7D5F* __this, const RuntimeMethod* method) ;
// System.String System.Enum::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Enum_ToString_m946B0B83C4470457D0FF555D862022C72BB55741 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Object System.Enum::Parse(System.Type,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Enum_Parse_m2E810F090FE2D6D78D29D87EA6773F8C616E0257 (Type_t* ___enumType0, String_t* ___value1, const RuntimeMethod* method) ;
// System.Void UnityEngine.UI.InputField::set_contentType(UnityEngine.UI.InputField/ContentType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputField_set_contentType_m5C3DDD7C14781E963BFFC88F7A8A537919F34C59 (InputField_tABEA115F23FBD374EBE80D4FAC1D15BD6E37A140* __this, int32_t ___value0, const RuntimeMethod* method) ;
// TMPro.TMP_InputField/LineType TMPro.TMP_InputField::get_lineType()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t TMP_InputField_get_lineType_mE221F133A310EB6C93DA24E1F5900E948771D64C_inline (TMP_InputField_t3488E0EE8C3DF56C6A328EC95D1BEEA2DF4A7D5F* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.UI.InputField::set_lineType(UnityEngine.UI.InputField/LineType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputField_set_lineType_m06BE148366DF8F17E0F91C3CF094628C201B5FD8 (InputField_tABEA115F23FBD374EBE80D4FAC1D15BD6E37A140* __this, int32_t ___value0, const RuntimeMethod* method) ;
// TMPro.TMP_InputField/InputType TMPro.TMP_InputField::get_inputType()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t TMP_InputField_get_inputType_m93A6CC8FF76412F46471D91952323CE4C63B7D34_inline (TMP_InputField_t3488E0EE8C3DF56C6A328EC95D1BEEA2DF4A7D5F* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.UI.InputField::set_inputType(UnityEngine.UI.InputField/InputType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputField_set_inputType_mB2A3B667DC710AD1F9E1C046659AC35720AB0313 (InputField_tABEA115F23FBD374EBE80D4FAC1D15BD6E37A140* __this, int32_t ___value0, const RuntimeMethod* method) ;
// UnityEngine.TouchScreenKeyboardType TMPro.TMP_InputField::get_keyboardType()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t TMP_InputField_get_keyboardType_m8B616A743B2FAB03C6263F1582171BB390F94F8B_inline (TMP_InputField_t3488E0EE8C3DF56C6A328EC95D1BEEA2DF4A7D5F* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.UI.InputField::set_keyboardType(UnityEngine.TouchScreenKeyboardType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputField_set_keyboardType_m9DD165B20CF12F93BD85140D8D1F54371FF4E9F3 (InputField_tABEA115F23FBD374EBE80D4FAC1D15BD6E37A140* __this, int32_t ___value0, const RuntimeMethod* method) ;
// TMPro.TMP_InputField/CharacterValidation TMPro.TMP_InputField::get_characterValidation()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t TMP_InputField_get_characterValidation_m57E36C62FC9E23DB17F440BA4325A314EF0B0679_inline (TMP_InputField_t3488E0EE8C3DF56C6A328EC95D1BEEA2DF4A7D5F* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.UI.InputField::set_characterValidation(UnityEngine.UI.InputField/CharacterValidation)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputField_set_characterValidation_m9DE08B33714B9D97F570853ADB56C070C2DD4072 (InputField_tABEA115F23FBD374EBE80D4FAC1D15BD6E37A140* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Int32 TMPro.TMP_InputField::get_characterLimit()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t TMP_InputField_get_characterLimit_m59833E0A22BACBDF3EDA6A70A30B87272FBAA409_inline (TMP_InputField_t3488E0EE8C3DF56C6A328EC95D1BEEA2DF4A7D5F* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.UI.InputField::set_characterLimit(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputField_set_characterLimit_m98A2187FF493DB170821C39A6D069731F3AFFF2B (InputField_tABEA115F23FBD374EBE80D4FAC1D15BD6E37A140* __this, int32_t ___value0, const RuntimeMethod* method) ;
// UnityEngine.UI.Graphic TMPro.TMP_InputField::get_placeholder()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931* TMP_InputField_get_placeholder_m6C5FDEB031E2900A1792B928E4864B21B144AB3C_inline (TMP_InputField_t3488E0EE8C3DF56C6A328EC95D1BEEA2DF4A7D5F* __this, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<TMPro.TMP_Text>()
inline TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* Component_GetComponent_TisTMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9_m0C4C5268B54C7097888C6B109527A680772EBCB5 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// TMPro.TMP_Text TMPro.TMP_InputField::get_textComponent()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* TMP_InputField_get_textComponent_m85C4BC3F4C18206B3B942F03DB0B953B028EE1CE_inline (TMP_InputField_t3488E0EE8C3DF56C6A328EC95D1BEEA2DF4A7D5F* __this, const RuntimeMethod* method) ;
// System.Single TMPro.TMP_Text::get_fontSize()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float TMP_Text_get_fontSize_m13A8365A56EA2B726EAD826B4A69C8918A528731_inline (TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* __this, const RuntimeMethod* method) ;
// System.Int32 TMPro.TMP_InputField::get_caretPosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TMP_InputField_get_caretPosition_m1F103634776349DFA375AC8C64F1D2535A693A15 (TMP_InputField_t3488E0EE8C3DF56C6A328EC95D1BEEA2DF4A7D5F* __this, const RuntimeMethod* method) ;
// System.Boolean TMPro.TMP_InputField::get_isFocused()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TMP_InputField_get_isFocused_m7FD1AA3B92404C30596FF6EE5F644757A2F060DE_inline (TMP_InputField_t3488E0EE8C3DF56C6A328EC95D1BEEA2DF4A7D5F* __this, const RuntimeMethod* method) ;
// System.Int32 TMPro.TMP_InputField::get_selectionStringFocusPosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TMP_InputField_get_selectionStringFocusPosition_mA044AFF5699E8B61BF3CBE271522AC8CA7088B0F (TMP_InputField_t3488E0EE8C3DF56C6A328EC95D1BEEA2DF4A7D5F* __this, const RuntimeMethod* method) ;
// System.Void TMPro.TMP_InputField::set_selectionStringFocusPosition(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TMP_InputField_set_selectionStringFocusPosition_mB23FDE5288C4F033028320FE4DBDEB096AAB3917 (TMP_InputField_t3488E0EE8C3DF56C6A328EC95D1BEEA2DF4A7D5F* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Int32 TMPro.TMP_InputField::get_selectionStringAnchorPosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TMP_InputField_get_selectionStringAnchorPosition_m321370B1A913B9B619DE5C5A5E5FA8D251C0B8F2 (TMP_InputField_t3488E0EE8C3DF56C6A328EC95D1BEEA2DF4A7D5F* __this, const RuntimeMethod* method) ;
// System.Void TMPro.TMP_InputField::set_selectionStringAnchorPosition(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TMP_InputField_set_selectionStringAnchorPosition_m60E8DEBD9389373AD410E7E868D3C36CCA202B8E (TMP_InputField_t3488E0EE8C3DF56C6A328EC95D1BEEA2DF4A7D5F* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Boolean TMPro.TMP_InputField::get_onFocusSelectAll()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TMP_InputField_get_onFocusSelectAll_m6A1A06461D6B01EE2E68624B9D7E5E3C7D092CDC_inline (TMP_InputField_t3488E0EE8C3DF56C6A328EC95D1BEEA2DF4A7D5F* __this, const RuntimeMethod* method) ;
// System.Void TMPro.TMP_InputField::ActivateInputField()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TMP_InputField_ActivateInputField_m9471012A606F201DF838539F5400D072A827914F (TMP_InputField_t3488E0EE8C3DF56C6A328EC95D1BEEA2DF4A7D5F* __this, const RuntimeMethod* method) ;
// System.Void TMPro.TMP_InputField::DeactivateInputField(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TMP_InputField_DeactivateInputField_m1C829676E9DC0D3E5DAE85D1869D26FBF748184D (TMP_InputField_t3488E0EE8C3DF56C6A328EC95D1BEEA2DF4A7D5F* __this, bool ___clearSelection0, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::get_localPosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_localPosition_mA9C86B990DF0685EA1061A120218993FDCC60A95 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// UnityEngine.Rect UnityEngine.RectTransform::get_rect()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D RectTransform_get_rect_mC82A60F8C3805ED9833508CCC233689641207488 (RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Rect::Overlaps(UnityEngine.Rect)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Rect_Overlaps_m5A540A24DAD3327006A3A2E209CC17992173B572 (Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* __this, Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___other0, const RuntimeMethod* method) ;
// System.Void WebGLSupport.WebGLWindow::OnWindowFocus()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebGLWindow_OnWindowFocus_m9AA354E343431758C618658FE8AC209BAF3A7444 (const RuntimeMethod* method) ;
// System.Void WebGLSupport.WebGLWindow::OnWindowBlur()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebGLWindow_OnWindowBlur_m12D443C9E80538273D5FF583B71CF8FBD1BADC1F (const RuntimeMethod* method) ;
// System.Void WebGLSupport.WebGLWindow::OnWindowResize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebGLWindow_OnWindowResize_m30932521D2D74219E34C250A6C64EE29B252082F (const RuntimeMethod* method) ;
// System.Void WebGLSupport.WebGLWindowPlugin::WebGLWindowInit()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebGLWindowPlugin_WebGLWindowInit_m960C490362803DA0BEF73F234AF0E688D1C0A7FE (const RuntimeMethod* method) ;
// System.Delegate System.Delegate::Combine(System.Delegate,System.Delegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Delegate_t* Delegate_Combine_m8B9D24CED35033C7FC56501DFE650F5CB7FF012C (Delegate_t* ___a0, Delegate_t* ___b1, const RuntimeMethod* method) ;
// System.Delegate System.Delegate::Remove(System.Delegate,System.Delegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Delegate_t* Delegate_Remove_m40506877934EC1AD4ADAE57F5E97AF0BC0F96116 (Delegate_t* ___source0, Delegate_t* ___value1, const RuntimeMethod* method) ;
// System.Void WebGLSupport.WebGLWindow::set_Focus(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void WebGLWindow_set_Focus_m82255B46ADB7EA97A137CB6ECEBE33B361945D6F_inline (bool ___value0, const RuntimeMethod* method) ;
// System.Void WebGLSupport.WebGLWindowPlugin::WebGLWindowOnFocus(System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebGLWindowPlugin_WebGLWindowOnFocus_m6EC6CB7E44C6D2DBB917B13D512B90E2ABC7118E (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___cb0, const RuntimeMethod* method) ;
// System.Void WebGLSupport.WebGLWindowPlugin::WebGLWindowOnBlur(System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebGLWindowPlugin_WebGLWindowOnBlur_m99A095D32B0008DA26F567597347BC7F523C7394 (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___cb0, const RuntimeMethod* method) ;
// System.Void WebGLSupport.WebGLWindowPlugin::WebGLWindowOnResize(System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebGLWindowPlugin_WebGLWindowOnResize_m892E6783D761CAC20C59E5F3BA66645CDCD6DC34 (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___cb0, const RuntimeMethod* method) ;
// System.Void WebGLSupport.WebGLWindowPlugin::WebGLWindowInjectFullscreen()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebGLWindowPlugin_WebGLWindowInjectFullscreen_m5D7D5958519649542BB4BEE0C6FF21104D322FAC (const RuntimeMethod* method) ;
// System.Void System.Action::Invoke()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_Invoke_m7126A54DACA72B845424072887B5F3A51FC3808E_inline (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* __this, const RuntimeMethod* method) ;
// System.Void WebGLSupport.WebGLWindow::Init()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebGLWindow_Init_m6200E44B96DBC40EE10629679A8770E1E667870E (const RuntimeMethod* method) ;
// System.Void WebGLSupport.WebGLWindow/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m30CF9E5D46771CE4478A30788595DD0D94F52162 (U3CU3Ec_tD04EC24521C276620AF53A1530384866DCB3622D* __this, const RuntimeMethod* method) ;
// System.String System.String::Format(System.String,System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_m9499958F4B0BB6089C75760AB647AB3CA4D55806 (String_t* ___format0, RuntimeObject* ___arg01, RuntimeObject* ___arg12, const RuntimeMethod* method) ;
// T[] System.Array::Empty<System.Object>()
inline ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* Array_Empty_TisRuntimeObject_m55011E8360A8199FB239A5787BA8631CDD6116FC_inline (const RuntimeMethod* method)
{
	return ((  ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* (*) (const RuntimeMethod*))Array_Empty_TisRuntimeObject_m55011E8360A8199FB239A5787BA8631CDD6116FC_gshared_inline)(method);
}
// System.Void UnityEngine.Application::ExternalCall(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Application_ExternalCall_mAC569E16BBB6EF873FCECBA90823FA383D120585 (String_t* ___functionName0, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___args1, const RuntimeMethod* method) ;
// System.Char System.String::get_Chars(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppChar String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3 (String_t* __this, int32_t ___index0, const RuntimeMethod* method) ;
// System.String[] System.String::Split(System.Char,System.StringSplitOptions)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* String_Split_m9530B73D02054692283BF35C3A27C8F2230946F4 (String_t* __this, Il2CppChar ___separator0, int32_t ___options1, const RuntimeMethod* method) ;
// System.String System.String::Trim()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Trim_mCD6D8C6D4CFD15225D12DB7D3E0544CA80FB8DA5 (String_t* __this, const RuntimeMethod* method) ;
// System.Boolean System.Boolean::Parse(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Boolean_Parse_mE3D8860431C87FBE1D7C6EACA665548AFE144F38 (String_t* ___value0, const RuntimeMethod* method) ;
// System.Single System.Single::Parse(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Single_Parse_m349A7F699C77834259812ABE86909825C1F93CF4 (String_t* ___s0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Quaternion::.ctor(System.Single,System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Quaternion__ctor_m868FD60AA65DD5A8AC0C5DEB0608381A8D85FCD8_inline (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* __this, float ___x0, float ___y1, float ___z2, float ___w3, const RuntimeMethod* method) ;
// System.Void ARWT.Marker.MarkerInfo::.ctor(System.String,System.Boolean,UnityEngine.Vector3,UnityEngine.Quaternion,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MarkerInfo__ctor_m4BC5E7095925127B01A81D968B004F2F689D22EA (MarkerInfo_tF1D3B769CFABECC5F1524196971229B99448B57F* __this, String_t* ___name0, bool ___isVisible1, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position2, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___rotation3, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___scale4, const RuntimeMethod* method) ;
// System.Void ARWT.Marker.DetectionManager/MarkerDetection::Invoke(ARWT.Marker.MarkerInfo)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void MarkerDetection_Invoke_m30EED64E7C27ABF3C1F15B445A2976A617795B2D_inline (MarkerDetection_tB2B8E475144ED5AE5A0BAFC42F3F79C6E57A9DA9* __this, MarkerInfo_tF1D3B769CFABECC5F1524196971229B99448B57F* ___m0, const RuntimeMethod* method) ;
// System.Void ARWT.Core.Singleton`1<ARWT.Marker.DetectionManager>::.ctor()
inline void Singleton_1__ctor_mA8A4725A8FFA16B3251C2BB3061EA80EE43BEAC6 (Singleton_1_t30651B76710BA3532D2E3A14E07D5BDBA4E16542* __this, const RuntimeMethod* method)
{
	((  void (*) (Singleton_1_t30651B76710BA3532D2E3A14E07D5BDBA4E16542*, const RuntimeMethod*))Singleton_1__ctor_mC62FC78F85D36C77E2023BFF892EA3DEDAE29D85_gshared)(__this, method);
}
// System.Void ARWT.Marker.DetectionManager/MarkerDetection::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MarkerDetection__ctor_mCA29C02D7EA4B7C263C4480234F4DDF0460F86AD (MarkerDetection_tB2B8E475144ED5AE5A0BAFC42F3F79C6E57A9DA9* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Void ARWT.Marker.DetectionManager::add_onMarkerVisible(ARWT.Marker.DetectionManager/MarkerDetection)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DetectionManager_add_onMarkerVisible_m7734FE145336E45C86316AC2F5D9EB2976ADE057 (MarkerDetection_tB2B8E475144ED5AE5A0BAFC42F3F79C6E57A9DA9* ___value0, const RuntimeMethod* method) ;
// System.Void ARWT.Marker.DetectionManager::add_onMarkerLost(ARWT.Marker.DetectionManager/MarkerDetection)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DetectionManager_add_onMarkerLost_mDAC14075B5862FC82521DFE4AFEB7EF332D7A3DE (MarkerDetection_tB2B8E475144ED5AE5A0BAFC42F3F79C6E57A9DA9* ___value0, const RuntimeMethod* method) ;
// System.Single UnityEngine.Vector3::Distance(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_Distance_m99C722723EDD875852EF854AD7B7C4F8AC4F84AB_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, const RuntimeMethod* method) ;
// System.Single UnityEngine.Time::get_deltaTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_deltaTime_m7AB6BFA101D83E1D8F2EF3D5A128AEE9DDBF1A6D (const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::Lerp(UnityEngine.Vector3,UnityEngine.Vector3,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_Lerp_m57EE8D709A93B2B0FF8D499FA2947B1D61CB1FD6_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, float ___t2, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_localScale(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_localScale_mBA79E811BAF6C47B80FF76414C12B47B3CD03633 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) ;
// System.Void ARWT.Marker.TextureScaler::scaleGPU(UnityEngine.Texture2D,System.Int32,System.Int32,UnityEngine.FilterMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextureScaler_scaleGPU_mFF8F8413B5A805F53FE2B3284DE62299B53A65DF (Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ___src0, int32_t ___width1, int32_t ___height2, int32_t ___fmode3, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Texture2D::Reinitialize(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Texture2D_Reinitialize_m9AB4169DA359C18BB4102F8E00C4321B53714E6B (Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* __this, int32_t ___width0, int32_t ___height1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Texture2D::ReadPixels(UnityEngine.Rect,System.Int32,System.Int32,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Texture2D_ReadPixels_m7483DB211233F02E46418E9A6077487925F0024C (Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* __this, Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___source0, int32_t ___destX1, int32_t ___destY2, bool ___recalculateMipMaps3, const RuntimeMethod* method) ;
// System.Void UnityEngine.Texture2D::Apply(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Texture2D_Apply_mCC369BCAB2D3AD3EE50EE01DA67AF227865FA2B3 (Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* __this, bool ___updateMipmaps0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Texture::set_filterMode(UnityEngine.FilterMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Texture_set_filterMode_mE423E58C0C16D059EA62BA87AD70F44AEA50CCC9 (Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.RenderTexture::.ctor(System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RenderTexture__ctor_m45EACC89DDF408948889586516B3CA7AA8B73BFA (RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* __this, int32_t ___width0, int32_t ___height1, int32_t ___depth2, const RuntimeMethod* method) ;
// System.Void UnityEngine.Graphics::SetRenderTarget(UnityEngine.RenderTexture)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Graphics_SetRenderTarget_mDA2F41245400E50551268368F6C551FFFDCC9CAC (RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* ___rt0, const RuntimeMethod* method) ;
// System.Void UnityEngine.GL::LoadPixelMatrix(System.Single,System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GL_LoadPixelMatrix_m4E6F7BAFD87A2FE91048B0F602519811690CAA63 (float ___left0, float ___right1, float ___bottom2, float ___top3, const RuntimeMethod* method) ;
// System.Void UnityEngine.Color::.ctor(System.Single,System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* __this, float ___r0, float ___g1, float ___b2, float ___a3, const RuntimeMethod* method) ;
// System.Void UnityEngine.GL::Clear(System.Boolean,System.Boolean,UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GL_Clear_m303329453ADB3495208897E282FD24910878F537 (bool ___clearDepth0, bool ___clearColor1, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___backgroundColor2, const RuntimeMethod* method) ;
// System.Void UnityEngine.Graphics::DrawTexture(UnityEngine.Rect,UnityEngine.Texture)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Graphics_DrawTexture_m6DB7BD44609FE7693C0ED0A6BAC8E71954884118 (Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___screenRect0, Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* ___texture1, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1<System.String>::Contains(T)
inline bool List_1_Contains_m359254483BE42CAD4DCA8FBAFB87473FB4CF00E1 (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* __this, String_t* ___item0, const RuntimeMethod* method)
{
	return ((  bool (*) (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD*, String_t*, const RuntimeMethod*))List_1_Contains_m4C9139C2A6B23E9343D3F87807B32C6E2CFE660D_gshared)(__this, ___item0, method);
}
// System.Boolean UnityEngine.Application::get_isEditor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Application_get_isEditor_m0377DB707B566C8E21DA3CD99963210F6D57D234 (const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Screen::get_width()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Screen_get_width_mCA5D955A53CF6D29C8C7118D517D0FC84AE8056C (const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector2::.ctor(System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, float ___x0, float ___y1, const RuntimeMethod* method) ;
// System.Void UnityEngine.RectTransform::set_sizeDelta(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RectTransform_set_sizeDelta_mC9A980EA6036E6725EF24CEDF3EE80A9B2B50EE5 (RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___value0, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::get_eulerAngles()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_eulerAngles_mCAAF48EFCF628F1ED91C2FFE75A4FD19C039DD6A (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::get_up()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_up_mAB5269BFCBCB1BD241450C9BF2F156303D30E0C3_inline (const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Multiply(UnityEngine.Vector3,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Multiply_m516FE285F5342F922C6EB3FCB33197E9017FF484_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, float ___d1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_eulerAngles(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_eulerAngles_m9F0BC484A7915A51FAB87230644229B75BACA004 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<UnityEngine.Camera>()
inline Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* Component_GetComponent_TisCamera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184_m64AC6C06DD93C5FB249091FEC84FA8475457CCC4 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// UnityEngine.Matrix4x4 UnityEngine.Camera::get_projectionMatrix()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 Camera_get_projectionMatrix_m9B943EFDD6418528A055321E14F75F1511DD9B4A (Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Input::GetKeyUp(UnityEngine.KeyCode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Input_GetKeyUp_m4A66DE48A7B1B25374D4FDD31208EFE43C972842 (int32_t ___key0, const RuntimeMethod* method) ;
// System.Single UnityEngine.Camera::get_fieldOfView()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Camera_get_fieldOfView_m9A93F17BBF89F496AE231C21817AFD1C1E833FBB (Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* __this, const RuntimeMethod* method) ;
// System.String System.Single::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Single_ToString_mE282EDA9CA4F7DF88432D807732837A629D04972 (float* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Camera::get_aspect()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Camera_get_aspect_m48BF8820EA2D55BE0D154BC5546819FB65BE257D (Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Camera::set_fieldOfView(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Camera_set_fieldOfView_m5AA9EED4D1603A1DEDBF883D9C42814B2BDEB777 (Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* __this, float ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Camera::set_aspect(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Camera_set_aspect_m537F21B48FDD5C060DFF9D87F34F4FB2B0F9BEB6 (Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* __this, float ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Matrix4x4::set_Item(System.Int32,System.Int32,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Matrix4x4_set_Item_mE84FC43629907DD1872E3100BCFF4A8EB671B603_inline (Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6* __this, int32_t ___row0, int32_t ___column1, float ___value2, const RuntimeMethod* method) ;
// System.Single UnityEngine.Matrix4x4::get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Matrix4x4_get_Item_m771C2EE3A3BFFBAC9F2AD07FFCAAF6146C1BE92A (Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6* __this, int32_t ___index0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Camera::set_projectionMatrix(UnityEngine.Matrix4x4)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Camera_set_projectionMatrix_m351820E6903139402FFFF40221B32D0C52B5A094 (Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* __this, Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___value0, const RuntimeMethod* method) ;
// System.Single UnityEngine.Time::get_unscaledDeltaTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_unscaledDeltaTime_m89252D23CC5AA295CFA4EB2BCB417A831AC51652 (const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Vector3::op_Equality(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Vector3_op_Equality_m15951D1B53E3BE36C9D265E229090020FBD72EBB_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___lhs0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___rhs1, const RuntimeMethod* method) ;
// System.Double System.Math::Round(System.Double,System.Int32,System.MidpointRounding)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double Math_Round_mA90F6B1668D55BC6C538EBF0302B30E406E242B0 (double ___value0, int32_t ___digits1, int32_t ___mode2, const RuntimeMethod* method) ;
// System.Void UnityEngine.Matrix4x4::set_Item(System.Int32,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Matrix4x4_set_Item_m47C4DDBFAE6578D6008AEF433777D4B2FACB62B0 (Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6* __this, int32_t ___index0, float ___value1, const RuntimeMethod* method) ;
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
// System.Void CheckAdminPanel::allreadycommitedpassword()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CheckAdminPanel_allreadycommitedpassword_m625AAD2B936B38CE21B28F8A2AE796DADF45A5F1 (CheckAdminPanel_t26E243FA4203846AD328049A026A939B9C97477C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisPasswordController_t9127B978A2ACFF05C4C8A8591A2F0339EC9FB0D8_m748461478B5391AA9A7AD5AFF4076A6AB9BDF49C_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if(PasswordHandling.GetComponent<PasswordController>().passwordconfirmed == 1){
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___PasswordHandling_4;
		NullCheck(L_0);
		PasswordController_t9127B978A2ACFF05C4C8A8591A2F0339EC9FB0D8* L_1;
		L_1 = GameObject_GetComponent_TisPasswordController_t9127B978A2ACFF05C4C8A8591A2F0339EC9FB0D8_m748461478B5391AA9A7AD5AFF4076A6AB9BDF49C(L_0, GameObject_GetComponent_TisPasswordController_t9127B978A2ACFF05C4C8A8591A2F0339EC9FB0D8_m748461478B5391AA9A7AD5AFF4076A6AB9BDF49C_RuntimeMethod_var);
		NullCheck(L_1);
		int32_t L_2 = L_1->___passwordconfirmed_7;
		if ((!(((uint32_t)L_2) == ((uint32_t)1))))
		{
			goto IL_0038;
		}
	}
	{
		// AdminOptionsPanel.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3 = __this->___AdminOptionsPanel_6;
		NullCheck(L_3);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_3, (bool)1, NULL);
		// PasswordItems.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4 = __this->___PasswordItems_5;
		NullCheck(L_4);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_4, (bool)0, NULL);
		// Menu.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_5 = __this->___Menu_7;
		NullCheck(L_5);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_5, (bool)0, NULL);
		return;
	}

IL_0038:
	{
		// PasswordItems.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_6 = __this->___PasswordItems_5;
		NullCheck(L_6);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_6, (bool)1, NULL);
		// Menu.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_7 = __this->___Menu_7;
		NullCheck(L_7);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_7, (bool)0, NULL);
		// }
		return;
	}
}
// System.Void CheckAdminPanel::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CheckAdminPanel__ctor_mF164EFA234706912A742E2365D2DDB05AE157CCF (CheckAdminPanel_t26E243FA4203846AD328049A026A939B9C97477C* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// UnityEngine.Vector3 NavigationController::get_TargetPosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 NavigationController_get_TargetPosition_m2BA98D0EB195B580AD14C3B04A680DEF2C47C60D (NavigationController_t70EC9C7C9A12D38AD5902657C952B7B5B09985B8* __this, const RuntimeMethod* method) 
{
	{
		// public Vector3 TargetPosition { get; set; } = Vector3.zero; /// Position of the selected target.
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = __this->___U3CTargetPositionU3Ek__BackingField_4;
		return L_0;
	}
}
// System.Void NavigationController::set_TargetPosition(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NavigationController_set_TargetPosition_m0673F8F68766F112505E5C70114786D362CCCA70 (NavigationController_t70EC9C7C9A12D38AD5902657C952B7B5B09985B8* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) 
{
	{
		// public Vector3 TargetPosition { get; set; } = Vector3.zero; /// Position of the selected target.
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___value0;
		__this->___U3CTargetPositionU3Ek__BackingField_4 = L_0;
		return;
	}
}
// System.Void NavigationController::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NavigationController_Start_mD61804247723EB264D8C4B9DEDC264306DB32792 (NavigationController_t70EC9C7C9A12D38AD5902657C952B7B5B09985B8* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NavMeshPath_tC77ABF4A25FC0F0A94E8A70E304E114FE690A3A7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// path = new NavMeshPath();
		NavMeshPath_tC77ABF4A25FC0F0A94E8A70E304E114FE690A3A7* L_0 = (NavMeshPath_tC77ABF4A25FC0F0A94E8A70E304E114FE690A3A7*)il2cpp_codegen_object_new(NavMeshPath_tC77ABF4A25FC0F0A94E8A70E304E114FE690A3A7_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		NavMeshPath__ctor_mEA40BFC2492814FFC97A71C3AEC2154A9415C37F(L_0, NULL);
		__this->___path_7 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___path_7), (void*)L_0);
		// Screen.sleepTimeout = SleepTimeout.NeverSleep;
		Screen_set_sleepTimeout_m82D427509929D2F21494141B9BE5D3E3CE96A22A((-1), NULL);
		// }
		return;
	}
}
// System.Void NavigationController::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NavigationController_Update_m225B1D786B920C330F53FC0608E836C3EE4AE160 (NavigationController_t70EC9C7C9A12D38AD5902657C952B7B5B09985B8* __this, const RuntimeMethod* method) 
{
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* V_0 = NULL;
	{
		// if (line.gameObject.activeSelf && TargetPosition != Vector3.zero) {
		LineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D* L_0 = __this->___line_5;
		NullCheck(L_0);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1;
		L_1 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_0, NULL);
		NullCheck(L_1);
		bool L_2;
		L_2 = GameObject_get_activeSelf_m4F3E5240E138B66AAA080EA30759A3D0517DA368(L_1, NULL);
		if (!L_2)
		{
			goto IL_006d;
		}
	}
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = NavigationController_get_TargetPosition_m2BA98D0EB195B580AD14C3B04A680DEF2C47C60D_inline(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		L_4 = Vector3_get_zero_m9D7F7B580B5A276411267E96AA3425736D9BDC83_inline(NULL);
		bool L_5;
		L_5 = Vector3_op_Inequality_m6A7FB1C9E9DE194708997BFA24C6E238D92D908E_inline(L_3, L_4, NULL);
		if (!L_5)
		{
			goto IL_006d;
		}
	}
	{
		// NavMesh.CalculatePath(transform.position, TargetPosition, NavMesh.AllAreas, path);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_6;
		L_6 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_6);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7;
		L_7 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_6, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8;
		L_8 = NavigationController_get_TargetPosition_m2BA98D0EB195B580AD14C3B04A680DEF2C47C60D_inline(__this, NULL);
		NavMeshPath_tC77ABF4A25FC0F0A94E8A70E304E114FE690A3A7* L_9 = __this->___path_7;
		bool L_10;
		L_10 = NavMesh_CalculatePath_m2D0FF786CDEA88E7490ABA4582967087006F6E5E(L_7, L_8, (-1), L_9, NULL);
		// line.positionCount = path.corners.Length;
		LineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D* L_11 = __this->___line_5;
		NavMeshPath_tC77ABF4A25FC0F0A94E8A70E304E114FE690A3A7* L_12 = __this->___path_7;
		NullCheck(L_12);
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_13;
		L_13 = NavMeshPath_get_corners_m469237DE430A001BE7050BEF5D05A20B94D76F3E(L_12, NULL);
		NullCheck(L_13);
		NullCheck(L_11);
		LineRenderer_set_positionCount_m2001FB4044053895ECBE897AB833284F3300B205(L_11, ((int32_t)(((RuntimeArray*)L_13)->max_length)), NULL);
		// Vector3[] calculatedPathAndOffset = AddLineOffset();
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_14;
		L_14 = NavigationController_AddLineOffset_m6038AA3D0A2BCEDDB6DB0D0E7E7F3C2D47A4B29E(__this, NULL);
		V_0 = L_14;
		// line.SetPositions(calculatedPathAndOffset);
		LineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D* L_15 = __this->___line_5;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_16 = V_0;
		NullCheck(L_15);
		LineRenderer_SetPositions_m7F7B7B54428437D0BF5256D4C82F92180B577B02(L_15, L_16, NULL);
	}

IL_006d:
	{
		// }
		return;
	}
}
// UnityEngine.Vector3[] NavigationController::AddLineOffset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* NavigationController_AddLineOffset_m6038AA3D0A2BCEDDB6DB0D0E7E7F3C2D47A4B29E (NavigationController_t70EC9C7C9A12D38AD5902657C952B7B5B09985B8* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* V_0 = NULL;
	int32_t V_1 = 0;
	{
		// if (navigationYOffset.value == 0) {
		Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F* L_0 = __this->___navigationYOffset_6;
		NullCheck(L_0);
		float L_1;
		L_1 = VirtualFuncInvoker0< float >::Invoke(46 /* System.Single UnityEngine.UI.Slider::get_value() */, L_0);
		if ((!(((float)L_1) == ((float)(0.0f)))))
		{
			goto IL_001e;
		}
	}
	{
		// return path.corners;
		NavMeshPath_tC77ABF4A25FC0F0A94E8A70E304E114FE690A3A7* L_2 = __this->___path_7;
		NullCheck(L_2);
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_3;
		L_3 = NavMeshPath_get_corners_m469237DE430A001BE7050BEF5D05A20B94D76F3E(L_2, NULL);
		return L_3;
	}

IL_001e:
	{
		// Vector3[] offsettedLine = new Vector3[path.corners.Length];
		NavMeshPath_tC77ABF4A25FC0F0A94E8A70E304E114FE690A3A7* L_4 = __this->___path_7;
		NullCheck(L_4);
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_5;
		L_5 = NavMeshPath_get_corners_m469237DE430A001BE7050BEF5D05A20B94D76F3E(L_4, NULL);
		NullCheck(L_5);
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_6 = (Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C*)(Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C*)SZArrayNew(Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C_il2cpp_TypeInfo_var, (uint32_t)((int32_t)(((RuntimeArray*)L_5)->max_length)));
		V_0 = L_6;
		// for (int i = 0; i < path.corners.Length; i++) {
		V_1 = 0;
		goto IL_0070;
	}

IL_0035:
	{
		// offsettedLine[i] = path.corners[i] + new Vector3(0, navigationYOffset.value, 0);
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_7 = V_0;
		int32_t L_8 = V_1;
		NavMeshPath_tC77ABF4A25FC0F0A94E8A70E304E114FE690A3A7* L_9 = __this->___path_7;
		NullCheck(L_9);
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_10;
		L_10 = NavMeshPath_get_corners_m469237DE430A001BE7050BEF5D05A20B94D76F3E(L_9, NULL);
		int32_t L_11 = V_1;
		NullCheck(L_10);
		int32_t L_12 = L_11;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13 = (L_10)->GetAt(static_cast<il2cpp_array_size_t>(L_12));
		Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F* L_14 = __this->___navigationYOffset_6;
		NullCheck(L_14);
		float L_15;
		L_15 = VirtualFuncInvoker0< float >::Invoke(46 /* System.Single UnityEngine.UI.Slider::get_value() */, L_14);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_16;
		memset((&L_16), 0, sizeof(L_16));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_16), (0.0f), L_15, (0.0f), /*hidden argument*/NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_17;
		L_17 = Vector3_op_Addition_m087D6F0EC60843D455F9F83D25FE42B2433AAD1D_inline(L_13, L_16, NULL);
		NullCheck(L_7);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(L_8), (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2)L_17);
		// for (int i = 0; i < path.corners.Length; i++) {
		int32_t L_18 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_18, 1));
	}

IL_0070:
	{
		// for (int i = 0; i < path.corners.Length; i++) {
		int32_t L_19 = V_1;
		NavMeshPath_tC77ABF4A25FC0F0A94E8A70E304E114FE690A3A7* L_20 = __this->___path_7;
		NullCheck(L_20);
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_21;
		L_21 = NavMeshPath_get_corners_m469237DE430A001BE7050BEF5D05A20B94D76F3E(L_20, NULL);
		NullCheck(L_21);
		if ((((int32_t)L_19) < ((int32_t)((int32_t)(((RuntimeArray*)L_21)->max_length)))))
		{
			goto IL_0035;
		}
	}
	{
		// return offsettedLine;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_22 = V_0;
		return L_22;
	}
}
// System.Void NavigationController::ToggleLineVisibility()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NavigationController_ToggleLineVisibility_m075CE6828A89554F79A04CB529358631FED40147 (NavigationController_t70EC9C7C9A12D38AD5902657C952B7B5B09985B8* __this, const RuntimeMethod* method) 
{
	{
		// line.enabled = !line.enabled;
		LineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D* L_0 = __this->___line_5;
		LineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D* L_1 = __this->___line_5;
		NullCheck(L_1);
		bool L_2;
		L_2 = Renderer_get_enabled_mFDDF363859AEC88105A925FA7EA341C077B09B54(L_1, NULL);
		NullCheck(L_0);
		Renderer_set_enabled_m015E6D7B825528A31182F267234CC6A925F71DA8(L_0, (bool)((((int32_t)L_2) == ((int32_t)0))? 1 : 0), NULL);
		// }
		return;
	}
}
// System.Void NavigationController::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NavigationController__ctor_mAF12F851C3ECFC21B433A29BAEE0F98D3D2A70BF (NavigationController_t70EC9C7C9A12D38AD5902657C952B7B5B09985B8* __this, const RuntimeMethod* method) 
{
	{
		// public Vector3 TargetPosition { get; set; } = Vector3.zero; /// Position of the selected target.
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0;
		L_0 = Vector3_get_zero_m9D7F7B580B5A276411267E96AA3425736D9BDC83_inline(NULL);
		__this->___U3CTargetPositionU3Ek__BackingField_4 = L_0;
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void PasswordController::CheckPasswordCondition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PasswordController_CheckPasswordCondition_m64F02A0A87487AB881EB271E2F2B453E336F9ADA (PasswordController_t9127B978A2ACFF05C4C8A8591A2F0339EC9FB0D8* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2F2416BA3BCF5DB18362CAD20CA90089515ABE0F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4036CB682368F57A752F1AE948975DAB7499EACE);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral79FE8172D5881795A1C7CD4285991E1807BCE00E);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		// string ReceivedString = PasswordInput.text;
		InputField_tABEA115F23FBD374EBE80D4FAC1D15BD6E37A140* L_0 = __this->___PasswordInput_4;
		NullCheck(L_0);
		String_t* L_1;
		L_1 = InputField_get_text_m6E0796350FF559505E4DF17311803962699D6704_inline(L_0, NULL);
		// string Password = "12345";
		V_0 = _stringLiteral2F2416BA3BCF5DB18362CAD20CA90089515ABE0F;
		// if(string.Equals(ReceivedString,Password)){
		String_t* L_2 = V_0;
		bool L_3;
		L_3 = String_Equals_m7DE16FCF923076866D20D9053B774E67F2AF8D09(L_1, L_2, NULL);
		if (!L_3)
		{
			goto IL_0049;
		}
	}
	{
		// adminoptionspanel.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4 = __this->___adminoptionspanel_5;
		NullCheck(L_4);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_4, (bool)1, NULL);
		// delbutton.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_5 = __this->___delbutton_6;
		NullCheck(L_5);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_5, (bool)1, NULL);
		// GameObject.Find("PasswordItems").SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_6;
		L_6 = GameObject_Find_mFF1D6C65A7E2CD82443F4DCE4C53472FB30B7F51(_stringLiteral79FE8172D5881795A1C7CD4285991E1807BCE00E, NULL);
		NullCheck(L_6);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_6, (bool)0, NULL);
		// passwordconfirmed = 1;
		__this->___passwordconfirmed_7 = 1;
		return;
	}

IL_0049:
	{
		// PasswordInput.text = "Wrong Password";
		InputField_tABEA115F23FBD374EBE80D4FAC1D15BD6E37A140* L_7 = __this->___PasswordInput_4;
		NullCheck(L_7);
		InputField_set_text_m28B1C806BBCAC44F3ACCDC3B550509CA0C7D257F(L_7, _stringLiteral4036CB682368F57A752F1AE948975DAB7499EACE, NULL);
		// }
		return;
	}
}
// System.Void PasswordController::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PasswordController__ctor_mAC5BDD143E72EE3C399D767BB36B5F834B7B9AEF (PasswordController_t9127B978A2ACFF05C4C8A8591A2F0339EC9FB0D8* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void PulsingLine::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PulsingLine_Start_mEA232E20555789020622101A988991DD3AF9B0BC (PulsingLine_tBE3A736CB8C97095F7E4B670E40E849D2D1E40AD* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_mC91ACC92AD57CA6CA00991DAF1DB3830BCE07AF8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisLineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D_mE703918F1B04E115CCE78A5FF891A12648B04D75_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// r = gameObject.GetComponent<LineRenderer>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0;
		L_0 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_0);
		LineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D* L_1;
		L_1 = GameObject_GetComponent_TisLineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D_mE703918F1B04E115CCE78A5FF891A12648B04D75(L_0, GameObject_GetComponent_TisLineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D_mE703918F1B04E115CCE78A5FF891A12648B04D75_RuntimeMethod_var);
		__this->___r_4 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___r_4), (void*)L_1);
		// material = GetComponent<Renderer>().material;
		Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* L_2;
		L_2 = Component_GetComponent_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_mC91ACC92AD57CA6CA00991DAF1DB3830BCE07AF8(__this, Component_GetComponent_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_mC91ACC92AD57CA6CA00991DAF1DB3830BCE07AF8_RuntimeMethod_var);
		NullCheck(L_2);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_3;
		L_3 = Renderer_get_material_m5BA2A00816C4CC66580D4B2E409CF10718C15656(L_2, NULL);
		__this->___material_8 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___material_8), (void*)L_3);
		// }
		return;
	}
}
// System.Void PulsingLine::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PulsingLine_Update_m772AA6FB44CAAEF24CF67619828C671B4CA3AA79 (PulsingLine_tBE3A736CB8C97095F7E4B670E40E849D2D1E40AD* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	double V_0 = 0.0;
	double V_1 = 0.0;
	{
		// myPointsInLine = new Vector3[r.positionCount];
		LineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D* L_0 = __this->___r_4;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = LineRenderer_get_positionCount_m4A22C49D951AB145A0AB133FCEA5C10880390FE4(L_0, NULL);
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_2 = (Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C*)(Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C*)SZArrayNew(Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C_il2cpp_TypeInfo_var, (uint32_t)L_1);
		__this->___myPointsInLine_11 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___myPointsInLine_11), (void*)L_2);
		// r.GetPositions(myPointsInLine);
		LineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D* L_3 = __this->___r_4;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_4 = __this->___myPointsInLine_11;
		NullCheck(L_3);
		int32_t L_5;
		L_5 = LineRenderer_GetPositions_m22BED8498DA2527EC806F389B82EFD0E2574C840(L_3, L_4, NULL);
		// if(myPointsInLine.Length > 2){
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_6 = __this->___myPointsInLine_11;
		NullCheck(L_6);
		if ((((int32_t)((int32_t)(((RuntimeArray*)L_6)->max_length))) <= ((int32_t)2)))
		{
			goto IL_0166;
		}
	}
	{
		// startPos = myPointsInLine[0];
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_7 = __this->___myPointsInLine_11;
		NullCheck(L_7);
		int32_t L_8 = 0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9 = (L_7)->GetAt(static_cast<il2cpp_array_size_t>(L_8));
		__this->___startPos_9 = L_9;
		// endPos = myPointsInLine[myPointsInLine.Length-1];
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_10 = __this->___myPointsInLine_11;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_11 = __this->___myPointsInLine_11;
		NullCheck(L_11);
		NullCheck(L_10);
		int32_t L_12 = ((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_11)->max_length)), 1));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13 = (L_10)->GetAt(static_cast<il2cpp_array_size_t>(L_12));
		__this->___endPos_10 = L_13;
		// double x = Math.Pow(endPos.x - startPos.x, 2);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_14 = (&__this->___endPos_10);
		float L_15 = L_14->___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_16 = (&__this->___startPos_9);
		float L_17 = L_16->___x_2;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_18;
		L_18 = Math_Pow_mC4D86D57FB3DB07BB24147700CAF77DB15EA2EB3(((double)((float)il2cpp_codegen_subtract(L_15, L_17))), (2.0), NULL);
		// double y = Math.Pow(endPos.z - startPos.z, 2);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_19 = (&__this->___endPos_10);
		float L_20 = L_19->___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_21 = (&__this->___startPos_9);
		float L_22 = L_21->___z_4;
		double L_23;
		L_23 = Math_Pow_mC4D86D57FB3DB07BB24147700CAF77DB15EA2EB3(((double)((float)il2cpp_codegen_subtract(L_20, L_22))), (2.0), NULL);
		V_0 = L_23;
		// double distance = x + y;
		double L_24 = V_0;
		V_1 = ((double)il2cpp_codegen_add(L_18, L_24));
		// if((distance > 0) && (distance <= 16)){
		double L_25 = V_1;
		if ((!(((double)L_25) > ((double)(0.0)))))
		{
			goto IL_00d7;
		}
	}
	{
		double L_26 = V_1;
		if ((!(((double)L_26) <= ((double)(16.0)))))
		{
			goto IL_00d7;
		}
	}
	{
		// changecolor(0.0f);
		PulsingLine_changecolor_m76AC23B03AA68E9137E49691B905BED77B70A06D(__this, (0.0f), NULL);
		return;
	}

IL_00d7:
	{
		// }else if((distance > 16) && (distance <= 32)){
		double L_27 = V_1;
		if ((!(((double)L_27) > ((double)(16.0)))))
		{
			goto IL_00fb;
		}
	}
	{
		double L_28 = V_1;
		if ((!(((double)L_28) <= ((double)(32.0)))))
		{
			goto IL_00fb;
		}
	}
	{
		// changecolor(1.0f);
		PulsingLine_changecolor_m76AC23B03AA68E9137E49691B905BED77B70A06D(__this, (1.0f), NULL);
		return;
	}

IL_00fb:
	{
		// }else if((distance > 32) && (distance <= 48)){
		double L_29 = V_1;
		if ((!(((double)L_29) > ((double)(32.0)))))
		{
			goto IL_011f;
		}
	}
	{
		double L_30 = V_1;
		if ((!(((double)L_30) <= ((double)(48.0)))))
		{
			goto IL_011f;
		}
	}
	{
		// changecolor(2.0f);
		PulsingLine_changecolor_m76AC23B03AA68E9137E49691B905BED77B70A06D(__this, (2.0f), NULL);
		return;
	}

IL_011f:
	{
		// }else if((distance >48) && (distance <= 64)){
		double L_31 = V_1;
		if ((!(((double)L_31) > ((double)(48.0)))))
		{
			goto IL_0143;
		}
	}
	{
		double L_32 = V_1;
		if ((!(((double)L_32) <= ((double)(64.0)))))
		{
			goto IL_0143;
		}
	}
	{
		// changecolor(4.0f);
		PulsingLine_changecolor_m76AC23B03AA68E9137E49691B905BED77B70A06D(__this, (4.0f), NULL);
		return;
	}

IL_0143:
	{
		// }else if((distance > 64) && (distance <= 80)){
		double L_33 = V_1;
		if ((!(((double)L_33) > ((double)(64.0)))))
		{
			goto IL_0166;
		}
	}
	{
		double L_34 = V_1;
		if ((!(((double)L_34) <= ((double)(80.0)))))
		{
			goto IL_0166;
		}
	}
	{
		// changecolor(6.0f);
		PulsingLine_changecolor_m76AC23B03AA68E9137E49691B905BED77B70A06D(__this, (6.0f), NULL);
	}

IL_0166:
	{
		// }
		return;
	}
}
// System.Void PulsingLine::changecolor(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PulsingLine_changecolor_m76AC23B03AA68E9137E49691B905BED77B70A06D (PulsingLine_tBE3A736CB8C97095F7E4B670E40E849D2D1E40AD* __this, float ___Fadeduration0, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// var ratio = (Time.time - lastColorChangeTime) / Fadeduration;
		float L_0;
		L_0 = Time_get_time_m0BEE9AACD0723FE414465B77C9C64D12263675F3(NULL);
		float L_1 = __this->___lastColorChangeTime_7;
		float L_2 = ___Fadeduration0;
		V_0 = ((float)(((float)il2cpp_codegen_subtract(L_0, L_1))/L_2));
		// ratio = Mathf.Clamp01(ratio);
		float L_3 = V_0;
		float L_4;
		L_4 = Mathf_Clamp01_mD921B23F47F5347996C56DC789D1DE16EE27D9B1_inline(L_3, NULL);
		V_0 = L_4;
		// material.color = Color.Lerp(startColor, endColor, ratio);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_5 = __this->___material_8;
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_6 = __this->___startColor_5;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_7;
		L_7 = Color32_op_Implicit_m203A634DBB77053C9400C68065CA29529103D172_inline(L_6, NULL);
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_8 = __this->___endColor_6;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_9;
		L_9 = Color32_op_Implicit_m203A634DBB77053C9400C68065CA29529103D172_inline(L_8, NULL);
		float L_10 = V_0;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_11;
		L_11 = Color_Lerp_mCE0CF50E59713C5A8F6AAC2C6648CF0EDBEEB27B_inline(L_7, L_9, L_10, NULL);
		NullCheck(L_5);
		Material_set_color_m5C32DEBB215FF9EE35E7B575297D8C2F29CC2A2D(L_5, L_11, NULL);
		// if (ratio == 1f)
		float L_12 = V_0;
		if ((!(((float)L_12) == ((float)(1.0f)))))
		{
			goto IL_006a;
		}
	}
	{
		// lastColorChangeTime = Time.time;
		float L_13;
		L_13 = Time_get_time_m0BEE9AACD0723FE414465B77C9C64D12263675F3(NULL);
		__this->___lastColorChangeTime_7 = L_13;
		// var temp = startColor;
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_14 = __this->___startColor_5;
		V_1 = L_14;
		// startColor = endColor;
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_15 = __this->___endColor_6;
		__this->___startColor_5 = L_15;
		// endColor = temp;
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_16 = V_1;
		__this->___endColor_6 = L_16;
	}

IL_006a:
	{
		// }
		return;
	}
}
// System.Void PulsingLine::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PulsingLine__ctor_m341C44696C1747A0148ACD9AE9F53F19EA7D0C87 (PulsingLine_tBE3A736CB8C97095F7E4B670E40E849D2D1E40AD* __this, const RuntimeMethod* method) 
{
	{
		// private Color32 startColor = new Color32(196,0,15,60); /// First color to be shown
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_0;
		memset((&L_0), 0, sizeof(L_0));
		Color32__ctor_mC9C6B443F0C7CA3F8B174158B2AF6F05E18EAC4E_inline((&L_0), (uint8_t)((int32_t)196), (uint8_t)0, (uint8_t)((int32_t)15), (uint8_t)((int32_t)60), /*hidden argument*/NULL);
		__this->___startColor_5 = L_0;
		// private Color32 endColor = new Color32(250,0,15,60); /// Second color to be shown
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_1;
		memset((&L_1), 0, sizeof(L_1));
		Color32__ctor_mC9C6B443F0C7CA3F8B174158B2AF6F05E18EAC4E_inline((&L_1), (uint8_t)((int32_t)250), (uint8_t)0, (uint8_t)((int32_t)15), (uint8_t)((int32_t)60), /*hidden argument*/NULL);
		__this->___endColor_6 = L_1;
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void QrCodeRecenter::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void QrCodeRecenter_OnEnable_mD1D7D5F40B155C306E1818A862E4CCD33A54A51F (QrCodeRecenter_t48659C9EF1C81DDBDB76ECBB3F4181E7C175D365* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_t54327BAFA15E24E002EFAE48D1AFFC020D368735_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&QrCodeRecenter_OnCameraFrameReceived_m237F79EBAE06CE0FD717BD86C189C5EF4B210A99_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// cameraManager.frameReceived += OnCameraFrameReceived;
		ARCameraManager_t6E957EA922911B8447D086D9FB1F860EC967BD9F* L_0 = __this->___cameraManager_6;
		Action_1_t54327BAFA15E24E002EFAE48D1AFFC020D368735* L_1 = (Action_1_t54327BAFA15E24E002EFAE48D1AFFC020D368735*)il2cpp_codegen_object_new(Action_1_t54327BAFA15E24E002EFAE48D1AFFC020D368735_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		Action_1__ctor_mDFD48034EFC4DF74EEB44B18C74DD7BAF391814E(L_1, __this, (intptr_t)((void*)QrCodeRecenter_OnCameraFrameReceived_m237F79EBAE06CE0FD717BD86C189C5EF4B210A99_RuntimeMethod_var), NULL);
		NullCheck(L_0);
		ARCameraManager_add_frameReceived_mB30CD73DB7A25A6E7BC486BA289DBB99CBA3B7A1(L_0, L_1, NULL);
		// }
		return;
	}
}
// System.Void QrCodeRecenter::OnDisable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void QrCodeRecenter_OnDisable_m13A17AC01263D9EE1E2DC0B2CAEA646DFE939BC8 (QrCodeRecenter_t48659C9EF1C81DDBDB76ECBB3F4181E7C175D365* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_t54327BAFA15E24E002EFAE48D1AFFC020D368735_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&QrCodeRecenter_OnCameraFrameReceived_m237F79EBAE06CE0FD717BD86C189C5EF4B210A99_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// cameraManager.frameReceived -= OnCameraFrameReceived;
		ARCameraManager_t6E957EA922911B8447D086D9FB1F860EC967BD9F* L_0 = __this->___cameraManager_6;
		Action_1_t54327BAFA15E24E002EFAE48D1AFFC020D368735* L_1 = (Action_1_t54327BAFA15E24E002EFAE48D1AFFC020D368735*)il2cpp_codegen_object_new(Action_1_t54327BAFA15E24E002EFAE48D1AFFC020D368735_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		Action_1__ctor_mDFD48034EFC4DF74EEB44B18C74DD7BAF391814E(L_1, __this, (intptr_t)((void*)QrCodeRecenter_OnCameraFrameReceived_m237F79EBAE06CE0FD717BD86C189C5EF4B210A99_RuntimeMethod_var), NULL);
		NullCheck(L_0);
		ARCameraManager_remove_frameReceived_m8D9C301201B5079323169510656821F0286AA67D(L_0, L_1, NULL);
		// }
		return;
	}
}
// System.Void QrCodeRecenter::OnCameraFrameReceived(UnityEngine.XR.ARFoundation.ARCameraFrameEventArgs)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void QrCodeRecenter_OnCameraFrameReceived_m237F79EBAE06CE0FD717BD86C189C5EF4B210A99 (QrCodeRecenter_t48659C9EF1C81DDBDB76ECBB3F4181E7C175D365* __this, ARCameraFrameEventArgs_t4060608C37C2B7248AFC908876309CC36D53E0EC ___eventArgs0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IBarcodeReader_t7C5A059E4DA3A0B4F7FA68ABD7131229C8DFF1AB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeArray_1_Dispose_m8B0F342847ECB90EB814E1F6AA5BF7DC2F271AEA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeArray_1__ctor_m981CC7E27B6C9946024877F2696920951443B04F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeSlice_1_op_Implicit_m3AB491D87E0962137FD43426C9363FE25C239A73_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Texture2D_LoadRawTextureData_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mDA75074E580F4DE5D4F322EBF5542EA73FFBADE3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	XRCpuImage_t36F512AD65D5B0AA1CC458C3666873D741C60A57 V_0;
	memset((&V_0), 0, sizeof(V_0));
	ConversionParams_t062706B15E2C508C54473A1FD72013C4381CCB62 V_1;
	memset((&V_1), 0, sizeof(V_1));
	int32_t V_2 = 0;
	NativeArray_1_t81F55263465517B73C455D3400CF67B4BADD85CF V_3;
	memset((&V_3), 0, sizeof(V_3));
	Result_tF578DE3ECC8EB51CFB66605B8ADCD433C837EBAF* V_4 = NULL;
	ConversionParams_t062706B15E2C508C54473A1FD72013C4381CCB62 V_5;
	memset((&V_5), 0, sizeof(V_5));
	Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A V_6;
	memset((&V_6), 0, sizeof(V_6));
	{
		// if (!scanningEnabled) {
		bool L_0 = __this->___scanningEnabled_10;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		// return;
		return;
	}

IL_0009:
	{
		// if (!cameraManager.TryAcquireLatestCpuImage(out XRCpuImage image)) {
		ARCameraManager_t6E957EA922911B8447D086D9FB1F860EC967BD9F* L_1 = __this->___cameraManager_6;
		NullCheck(L_1);
		bool L_2;
		L_2 = ARCameraManager_TryAcquireLatestCpuImage_m79247340777701FCF1E9CF274D1FC6EAFE0AA874(L_1, (&V_0), NULL);
		if (L_2)
		{
			goto IL_0019;
		}
	}
	{
		// return;
		return;
	}

IL_0019:
	{
		// var conversionParams = new XRCpuImage.ConversionParams {
		//     // Get the entire image.
		//     inputRect = new RectInt(0, 0, image.width, image.height),
		// 
		//     // Downsample by 2.
		//     outputDimensions = new Vector2Int(image.width / 2, image.height / 2),
		// 
		//     // Choose RGBA format.
		//     outputFormat = TextureFormat.RGBA32,
		// 
		//     // Flip across the vertical axis (mirror image).
		//     transformation = XRCpuImage.Transformation.MirrorY
		// };
		il2cpp_codegen_initobj((&V_5), sizeof(ConversionParams_t062706B15E2C508C54473A1FD72013C4381CCB62));
		int32_t L_3;
		L_3 = XRCpuImage_get_width_m176240EBEBBD41DC5AEF33F945C88E9492370AFA((&V_0), NULL);
		int32_t L_4;
		L_4 = XRCpuImage_get_height_m139489AD26B264FA46EE5659258BBF9C6584E5E9((&V_0), NULL);
		RectInt_t1744D10E1063135DA9D574F95205B98DAC600CB8 L_5;
		memset((&L_5), 0, sizeof(L_5));
		RectInt__ctor_m6E8B3A6C7EE11257A6B438E36274116FE39B5B42((&L_5), 0, 0, L_3, L_4, /*hidden argument*/NULL);
		ConversionParams_set_inputRect_m7965864AED4C5176D58F3766D6BBB35DFF7BC903_inline((&V_5), L_5, NULL);
		int32_t L_6;
		L_6 = XRCpuImage_get_width_m176240EBEBBD41DC5AEF33F945C88E9492370AFA((&V_0), NULL);
		int32_t L_7;
		L_7 = XRCpuImage_get_height_m139489AD26B264FA46EE5659258BBF9C6584E5E9((&V_0), NULL);
		Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A L_8;
		memset((&L_8), 0, sizeof(L_8));
		Vector2Int__ctor_mC20D1312133EB8CB63EC11067088B043660F11CE_inline((&L_8), ((int32_t)(L_6/2)), ((int32_t)(L_7/2)), /*hidden argument*/NULL);
		ConversionParams_set_outputDimensions_m97EC09EE536EA456A18894311BF75AC9D5A90A3B_inline((&V_5), L_8, NULL);
		ConversionParams_set_outputFormat_mA82EA0ECC19D14AECBA318B9B485D08CFB46A1F4_inline((&V_5), 4, NULL);
		ConversionParams_set_transformation_mBCE73B14CCE8A31A258C6B8F6104446A2D495A0F_inline((&V_5), 2, NULL);
		ConversionParams_t062706B15E2C508C54473A1FD72013C4381CCB62 L_9 = V_5;
		V_1 = L_9;
		// int size = image.GetConvertedDataSize(conversionParams);
		ConversionParams_t062706B15E2C508C54473A1FD72013C4381CCB62 L_10 = V_1;
		int32_t L_11;
		L_11 = XRCpuImage_GetConvertedDataSize_m1A292AE01390513BEA935CC4C19A0F8FD52341DE((&V_0), L_10, NULL);
		V_2 = L_11;
		// var buffer = new NativeArray<byte>(size, Allocator.Temp);
		int32_t L_12 = V_2;
		NativeArray_1__ctor_m981CC7E27B6C9946024877F2696920951443B04F((&V_3), L_12, 2, 1, NativeArray_1__ctor_m981CC7E27B6C9946024877F2696920951443B04F_RuntimeMethod_var);
		// image.Convert(conversionParams, buffer);
		ConversionParams_t062706B15E2C508C54473A1FD72013C4381CCB62 L_13 = V_1;
		NativeArray_1_t81F55263465517B73C455D3400CF67B4BADD85CF L_14 = V_3;
		NativeSlice_1_tCEC4B2B900638EC1820BB61FE436766204DFD8DA L_15;
		L_15 = NativeSlice_1_op_Implicit_m3AB491D87E0962137FD43426C9363FE25C239A73(L_14, NativeSlice_1_op_Implicit_m3AB491D87E0962137FD43426C9363FE25C239A73_RuntimeMethod_var);
		XRCpuImage_Convert_mFE71425F0E4FD4ADB839551590FE9728BA037EE1((&V_0), L_13, L_15, NULL);
		// image.Dispose();
		XRCpuImage_Dispose_m80B8CA56700DD5EB8A5613AA42F6F389D86A746B((&V_0), NULL);
		// cameraImageTexture = new Texture2D(
		//     conversionParams.outputDimensions.x,
		//     conversionParams.outputDimensions.y,
		//     conversionParams.outputFormat,
		//     false);
		Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A L_16;
		L_16 = ConversionParams_get_outputDimensions_m6295F96DCE9B406AB6D79E8CD86A6FF388CF5035_inline((&V_1), NULL);
		V_6 = L_16;
		int32_t L_17;
		L_17 = Vector2Int_get_x_mA2CACB1B6E6B5AD0CCC32B2CD2EDCE3ECEB50576_inline((&V_6), NULL);
		Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A L_18;
		L_18 = ConversionParams_get_outputDimensions_m6295F96DCE9B406AB6D79E8CD86A6FF388CF5035_inline((&V_1), NULL);
		V_6 = L_18;
		int32_t L_19;
		L_19 = Vector2Int_get_y_m48454163ECF0B463FB5A16A0C4FC4B14DB0768B3_inline((&V_6), NULL);
		int32_t L_20;
		L_20 = ConversionParams_get_outputFormat_m8CD52ADADE8FFE505A90E02D9BD6C7D9EE1C8715_inline((&V_1), NULL);
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_21 = (Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4*)il2cpp_codegen_object_new(Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4_il2cpp_TypeInfo_var);
		NullCheck(L_21);
		Texture2D__ctor_mECF60A9EC0638EC353C02C8E99B6B465D23BE917(L_21, L_17, L_19, L_20, (bool)0, NULL);
		__this->___cameraImageTexture_8 = L_21;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___cameraImageTexture_8), (void*)L_21);
		// cameraImageTexture.LoadRawTextureData(buffer);
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_22 = __this->___cameraImageTexture_8;
		NativeArray_1_t81F55263465517B73C455D3400CF67B4BADD85CF L_23 = V_3;
		NullCheck(L_22);
		Texture2D_LoadRawTextureData_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mDA75074E580F4DE5D4F322EBF5542EA73FFBADE3(L_22, L_23, Texture2D_LoadRawTextureData_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mDA75074E580F4DE5D4F322EBF5542EA73FFBADE3_RuntimeMethod_var);
		// cameraImageTexture.Apply();
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_24 = __this->___cameraImageTexture_8;
		NullCheck(L_24);
		Texture2D_Apply_mA014182C9EE0BBF6EEE3B286854F29E50EB972DC(L_24, NULL);
		// buffer.Dispose();
		NativeArray_1_Dispose_m8B0F342847ECB90EB814E1F6AA5BF7DC2F271AEA((&V_3), NativeArray_1_Dispose_m8B0F342847ECB90EB814E1F6AA5BF7DC2F271AEA_RuntimeMethod_var);
		// var result = reader.Decode(cameraImageTexture.GetPixels32(), cameraImageTexture.width, cameraImageTexture.height);
		RuntimeObject* L_25 = __this->___reader_9;
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_26 = __this->___cameraImageTexture_8;
		NullCheck(L_26);
		Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259* L_27;
		L_27 = Texture2D_GetPixels32_m48230192E7543765C1A517F251D1D9BFCFB58C3D(L_26, NULL);
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_28 = __this->___cameraImageTexture_8;
		NullCheck(L_28);
		int32_t L_29;
		L_29 = VirtualFuncInvoker0< int32_t >::Invoke(4 /* System.Int32 UnityEngine.Texture::get_width() */, L_28);
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_30 = __this->___cameraImageTexture_8;
		NullCheck(L_30);
		int32_t L_31;
		L_31 = VirtualFuncInvoker0< int32_t >::Invoke(6 /* System.Int32 UnityEngine.Texture::get_height() */, L_30);
		NullCheck(L_25);
		Result_tF578DE3ECC8EB51CFB66605B8ADCD433C837EBAF* L_32;
		L_32 = InterfaceFuncInvoker3< Result_tF578DE3ECC8EB51CFB66605B8ADCD433C837EBAF*, Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259*, int32_t, int32_t >::Invoke(0 /* ZXing.Result ZXing.IBarcodeReader::Decode(UnityEngine.Color32[],System.Int32,System.Int32) */, IBarcodeReader_t7C5A059E4DA3A0B4F7FA68ABD7131229C8DFF1AB_il2cpp_TypeInfo_var, L_25, L_27, L_29, L_31);
		V_4 = L_32;
		// if (result != null) {
		Result_tF578DE3ECC8EB51CFB66605B8ADCD433C837EBAF* L_33 = V_4;
		if (!L_33)
		{
			goto IL_012c;
		}
	}
	{
		// SetQrCodeRecenterTarget(result.Text);
		Result_tF578DE3ECC8EB51CFB66605B8ADCD433C837EBAF* L_34 = V_4;
		NullCheck(L_34);
		String_t* L_35;
		L_35 = Result_get_Text_m65A52D001505F5311D513F3CDD86D3BB72103E89_inline(L_34, NULL);
		QrCodeRecenter_SetQrCodeRecenterTarget_m463B72B4D4C980733F169BBFF1B1D7E9E8A873DD(__this, L_35, NULL);
		// ToggleScanning();
		QrCodeRecenter_ToggleScanning_m5E6B7D386B78B96BAAFB74DC83B270194C29A3AD(__this, NULL);
	}

IL_012c:
	{
		// }
		return;
	}
}
// System.Void QrCodeRecenter::SetQrCodeRecenterTarget(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void QrCodeRecenter_SetQrCodeRecenterTarget_m463B72B4D4C980733F169BBFF1B1D7E9E8A873DD (QrCodeRecenter_t48659C9EF1C81DDBDB76ECBB3F4181E7C175D365* __this, String_t* ___targetText0, const RuntimeMethod* method) 
{
	{
		// if (startitem.Name.Equals(targetText)) {
		TargetFacade_tAA52A697AACAC6BBC707F8B97B5975CD124D9CB1* L_0 = __this->___startitem_11;
		NullCheck(L_0);
		String_t* L_1 = L_0->___Name_4;
		String_t* L_2 = ___targetText0;
		NullCheck(L_1);
		bool L_3;
		L_3 = String_Equals_mCD5F35DEDCAFE51ACD4E033726FC2EF8DF7E9B4D(L_1, L_2, NULL);
		if (!L_3)
		{
			goto IL_005e;
		}
	}
	{
		// session.Reset();
		ARSession_t13374A44A01F2C6D90578F93E0F0DA2482BE3014* L_4 = __this->___session_4;
		NullCheck(L_4);
		ARSession_Reset_mE905496B8400CB5BF1EB50A01C675771FCCF9A91(L_4, NULL);
		// sessionOrigin.transform.position = startitem.transform.position;
		ARSessionOrigin_tE7B28A1A19500BCC02711397A19E330425830BC3* L_5 = __this->___sessionOrigin_5;
		NullCheck(L_5);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_6;
		L_6 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_5, NULL);
		TargetFacade_tAA52A697AACAC6BBC707F8B97B5975CD124D9CB1* L_7 = __this->___startitem_11;
		NullCheck(L_7);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_8;
		L_8 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_7, NULL);
		NullCheck(L_8);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		L_9 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_8, NULL);
		NullCheck(L_6);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_6, L_9, NULL);
		// sessionOrigin.transform.rotation = startitem.transform.rotation;
		ARSessionOrigin_tE7B28A1A19500BCC02711397A19E330425830BC3* L_10 = __this->___sessionOrigin_5;
		NullCheck(L_10);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_11;
		L_11 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_10, NULL);
		TargetFacade_tAA52A697AACAC6BBC707F8B97B5975CD124D9CB1* L_12 = __this->___startitem_11;
		NullCheck(L_12);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_13;
		L_13 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_12, NULL);
		NullCheck(L_13);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_14;
		L_14 = Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C(L_13, NULL);
		NullCheck(L_11);
		Transform_set_rotation_m61340DE74726CF0F9946743A727C4D444397331D(L_11, L_14, NULL);
	}

IL_005e:
	{
		// }
		return;
	}
}
// System.Void QrCodeRecenter::ToggleScanning()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void QrCodeRecenter_ToggleScanning_m5E6B7D386B78B96BAAFB74DC83B270194C29A3AD (QrCodeRecenter_t48659C9EF1C81DDBDB76ECBB3F4181E7C175D365* __this, const RuntimeMethod* method) 
{
	{
		// scanningEnabled = !scanningEnabled;
		bool L_0 = __this->___scanningEnabled_10;
		__this->___scanningEnabled_10 = (bool)((((int32_t)L_0) == ((int32_t)0))? 1 : 0);
		// qrCodeScanningPanel.SetActive(scanningEnabled);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1 = __this->___qrCodeScanningPanel_7;
		bool L_2 = __this->___scanningEnabled_10;
		NullCheck(L_1);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_1, L_2, NULL);
		// }
		return;
	}
}
// System.Void QrCodeRecenter::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void QrCodeRecenter__ctor_mA089181E2E59AC0F2538D1DF51D403784D4D5EDD (QrCodeRecenter_t48659C9EF1C81DDBDB76ECBB3F4181E7C175D365* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BarcodeReader_t3750E77E97439AA095CFBB5FD3B791E4349885DB_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private IBarcodeReader reader = new BarcodeReader(); /// Create a barcode reader instance
		BarcodeReader_t3750E77E97439AA095CFBB5FD3B791E4349885DB* L_0 = (BarcodeReader_t3750E77E97439AA095CFBB5FD3B791E4349885DB*)il2cpp_codegen_object_new(BarcodeReader_t3750E77E97439AA095CFBB5FD3B791E4349885DB_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		BarcodeReader__ctor_mCD1732A2FA39D8C385CDCDEF5348B60F02E7E30D(L_0, NULL);
		__this->___reader_9 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___reader_9), (void*)L_0);
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void SetUiText::OnSliderValueChanged(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SetUiText_OnSliderValueChanged_m9C32EF2F88025DB4A630C44B8518F58296FA675A (SetUiText_t138DAB61BB52772194BAD42D32248EE7C549BEC9* __this, float ___numericValue0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7BCEF2993AEE2C84A744A0ABD67F5AE45E34ED37);
		s_Il2CppMethodInitialized = true;
	}
	double V_0 = 0.0;
	{
		// double value = Math.Round(numericValue, 2);
		float L_0 = ___numericValue0;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_1;
		L_1 = Math_Round_mAE7072AE69091258FAA8BD5923CE4A0E492B5B7D_inline(((double)L_0), 2, NULL);
		V_0 = L_1;
		// textField.text = $"Line Height: \n {value} m";
		TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* L_2 = __this->___textField_4;
		double L_3 = V_0;
		double L_4 = L_3;
		RuntimeObject* L_5 = Box(Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_il2cpp_TypeInfo_var, &L_4);
		String_t* L_6;
		L_6 = String_Format_m8C122B26BC5AA10E2550AECA16E57DAE10F07E30(_stringLiteral7BCEF2993AEE2C84A744A0ABD67F5AE45E34ED37, L_5, NULL);
		NullCheck(L_2);
		VirtualActionInvoker1< String_t* >::Invoke(66 /* System.Void TMPro.TMP_Text::set_text(System.String) */, L_2, L_6);
		// }
		return;
	}
}
// System.Void SetUiText::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SetUiText__ctor_m3BD6A154A5D8584BF04C389DFE529114D76DA8D3 (SetUiText_t138DAB61BB52772194BAD42D32248EE7C549BEC9* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void Target::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Target__ctor_m5524C5EEF36FA6DB1E6B5BFA323B37E68635C216 (Target_t5E0C0864CEA07701AF639C0AFAC19928DB873FC5* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
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
// System.Void TargetFacade::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TargetFacade__ctor_mE11CAF4E53BAE3BECF7DE207337FDD38C30002A6 (TargetFacade_tAA52A697AACAC6BBC707F8B97B5975CD124D9CB1* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void TargetHandler::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TargetHandler_Start_m56B9094E87064E32320FF4212D9B2E415580A4E5 (TargetHandler_t26EBF84B13B13596F2259A92408AE301B247E751* __this, const RuntimeMethod* method) 
{
	{
		// GenerateTargetItems();
		TargetHandler_GenerateTargetItems_mA0260A08770044FBA6CE69412B7E1CFBECD71E0D(__this, NULL);
		// }
		return;
	}
}
// System.Void TargetHandler::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TargetHandler_Update_mCFE57A417B3AB22B562ED85043D7389523EAE066 (TargetHandler_t26EBF84B13B13596F2259A92408AE301B247E751* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_m026EB44DB6238F13E2AFBECF1FBBE924CB1B040A_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if(item != null){
		String_t* L_0 = __this->___item_10;
		if (!L_0)
		{
			goto IL_0052;
		}
	}
	{
		// GameObject.Find(item).transform.position = new Vector3(navigationXOffset.value, GameObject.Find(item).transform.position.y, navigationZOffset.value);
		String_t* L_1 = __this->___item_10;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2;
		L_2 = GameObject_Find_mFF1D6C65A7E2CD82443F4DCE4C53472FB30B7F51(L_1, NULL);
		NullCheck(L_2);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_3;
		L_3 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_2, NULL);
		Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F* L_4 = __this->___navigationXOffset_9;
		NullCheck(L_4);
		float L_5;
		L_5 = VirtualFuncInvoker0< float >::Invoke(46 /* System.Single UnityEngine.UI.Slider::get_value() */, L_4);
		String_t* L_6 = __this->___item_10;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_7;
		L_7 = GameObject_Find_mFF1D6C65A7E2CD82443F4DCE4C53472FB30B7F51(L_6, NULL);
		NullCheck(L_7);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_8;
		L_8 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_7, NULL);
		NullCheck(L_8);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		L_9 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_8, NULL);
		float L_10 = L_9.___y_3;
		Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F* L_11 = __this->___navigationZOffset_8;
		NullCheck(L_11);
		float L_12;
		L_12 = VirtualFuncInvoker0< float >::Invoke(46 /* System.Single UnityEngine.UI.Slider::get_value() */, L_11);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13;
		memset((&L_13), 0, sizeof(L_13));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_13), L_5, L_10, L_12, /*hidden argument*/NULL);
		NullCheck(L_3);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_3, L_13, NULL);
	}

IL_0052:
	{
		// if(item != null && selected == 0){
		String_t* L_14 = __this->___item_10;
		if (!L_14)
		{
			goto IL_009a;
		}
	}
	{
		int32_t L_15 = __this->___selected_17;
		if (L_15)
		{
			goto IL_009a;
		}
	}
	{
		// GameObject.Find(item).GetComponent<Renderer>().material.color = uniblue;
		String_t* L_16 = __this->___item_10;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_17;
		L_17 = GameObject_Find_mFF1D6C65A7E2CD82443F4DCE4C53472FB30B7F51(L_16, NULL);
		NullCheck(L_17);
		Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* L_18;
		L_18 = GameObject_GetComponent_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_m026EB44DB6238F13E2AFBECF1FBBE924CB1B040A(L_17, GameObject_GetComponent_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_m026EB44DB6238F13E2AFBECF1FBBE924CB1B040A_RuntimeMethod_var);
		NullCheck(L_18);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_19;
		L_19 = Renderer_get_material_m5BA2A00816C4CC66580D4B2E409CF10718C15656(L_18, NULL);
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_20 = __this->___uniblue_20;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_21;
		L_21 = Color32_op_Implicit_m203A634DBB77053C9400C68065CA29529103D172_inline(L_20, NULL);
		NullCheck(L_19);
		Material_set_color_m5C32DEBB215FF9EE35E7B575297D8C2F29CC2A2D(L_19, L_21, NULL);
		// selected = 1;
		__this->___selected_17 = 1;
		// saveprevious = item;
		String_t* L_22 = __this->___item_10;
		__this->___saveprevious_18 = L_22;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___saveprevious_18), (void*)L_22);
	}

IL_009a:
	{
		// if(selected == 1 && saveprevious != item){
		int32_t L_23 = __this->___selected_17;
		if ((!(((uint32_t)L_23) == ((uint32_t)1))))
		{
			goto IL_00e2;
		}
	}
	{
		String_t* L_24 = __this->___saveprevious_18;
		String_t* L_25 = __this->___item_10;
		bool L_26;
		L_26 = String_op_Inequality_m0FBE5AC4931D312E5B347BAA603755676E6DA2FE(L_24, L_25, NULL);
		if (!L_26)
		{
			goto IL_00e2;
		}
	}
	{
		// GameObject.Find(saveprevious).GetComponent<Renderer>().material.color = unired;
		String_t* L_27 = __this->___saveprevious_18;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_28;
		L_28 = GameObject_Find_mFF1D6C65A7E2CD82443F4DCE4C53472FB30B7F51(L_27, NULL);
		NullCheck(L_28);
		Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* L_29;
		L_29 = GameObject_GetComponent_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_m026EB44DB6238F13E2AFBECF1FBBE924CB1B040A(L_28, GameObject_GetComponent_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_m026EB44DB6238F13E2AFBECF1FBBE924CB1B040A_RuntimeMethod_var);
		NullCheck(L_29);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_30;
		L_30 = Renderer_get_material_m5BA2A00816C4CC66580D4B2E409CF10718C15656(L_29, NULL);
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_31 = __this->___unired_19;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_32;
		L_32 = Color32_op_Implicit_m203A634DBB77053C9400C68065CA29529103D172_inline(L_31, NULL);
		NullCheck(L_30);
		Material_set_color_m5C32DEBB215FF9EE35E7B575297D8C2F29CC2A2D(L_30, L_32, NULL);
		// selected = 0;
		__this->___selected_17 = 0;
	}

IL_00e2:
	{
		// }
		return;
	}
}
// System.Collections.IEnumerator TargetHandler::sendjson()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TargetHandler_sendjson_mCC9261FC1C5FF3CD7876EB46D0DED2A0F9586A58 (TargetHandler_t26EBF84B13B13596F2259A92408AE301B247E751* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CsendjsonU3Ed__23_tE0AAF5BB9AB2FBB6848F337C0DD6B12894900758_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CsendjsonU3Ed__23_tE0AAF5BB9AB2FBB6848F337C0DD6B12894900758* L_0 = (U3CsendjsonU3Ed__23_tE0AAF5BB9AB2FBB6848F337C0DD6B12894900758*)il2cpp_codegen_object_new(U3CsendjsonU3Ed__23_tE0AAF5BB9AB2FBB6848F337C0DD6B12894900758_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CsendjsonU3Ed__23__ctor_m4F2CDECB0E0FCCC5D42AF497AA6FFA2BC3A6005C(L_0, 0, NULL);
		U3CsendjsonU3Ed__23_tE0AAF5BB9AB2FBB6848F337C0DD6B12894900758* L_1 = L_0;
		NullCheck(L_1);
		L_1->___U3CU3E4__this_2 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_2), (void*)__this);
		return L_1;
	}
}
// System.Void TargetHandler::makeallunselected()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TargetHandler_makeallunselected_m3DCE64D42D783F8D2DF0856B262705C1966AEB6F (TargetHandler_t26EBF84B13B13596F2259A92408AE301B247E751* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_m026EB44DB6238F13E2AFBECF1FBBE924CB1B040A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6790F5A313E4F3D7D9EE743046C665DE8D5FE0F2);
		s_Il2CppMethodInitialized = true;
	}
	GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* V_0 = NULL;
	int32_t V_1 = 0;
	{
		// item = null;
		__this->___item_10 = (String_t*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___item_10), (void*)(String_t*)NULL);
		// selected = 0;
		__this->___selected_17 = 0;
		// GameObject[] taggedObjects = GameObject.FindGameObjectsWithTag("Target");
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_0;
		L_0 = GameObject_FindGameObjectsWithTag_m63AB9863553265F03EDE4C11AEA98AF591CAEA1E(_stringLiteral6790F5A313E4F3D7D9EE743046C665DE8D5FE0F2, NULL);
		// foreach (GameObject o in taggedObjects) {
		V_0 = L_0;
		V_1 = 0;
		goto IL_003e;
	}

IL_001d:
	{
		// foreach (GameObject o in taggedObjects) {
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_1 = V_0;
		int32_t L_2 = V_1;
		NullCheck(L_1);
		int32_t L_3 = L_2;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		// o.GetComponent<Renderer>().material.color = unired;
		NullCheck(L_4);
		Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* L_5;
		L_5 = GameObject_GetComponent_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_m026EB44DB6238F13E2AFBECF1FBBE924CB1B040A(L_4, GameObject_GetComponent_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_m026EB44DB6238F13E2AFBECF1FBBE924CB1B040A_RuntimeMethod_var);
		NullCheck(L_5);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_6;
		L_6 = Renderer_get_material_m5BA2A00816C4CC66580D4B2E409CF10718C15656(L_5, NULL);
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_7 = __this->___unired_19;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_8;
		L_8 = Color32_op_Implicit_m203A634DBB77053C9400C68065CA29529103D172_inline(L_7, NULL);
		NullCheck(L_6);
		Material_set_color_m5C32DEBB215FF9EE35E7B575297D8C2F29CC2A2D(L_6, L_8, NULL);
		int32_t L_9 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_9, 1));
	}

IL_003e:
	{
		// foreach (GameObject o in taggedObjects) {
		int32_t L_10 = V_1;
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_11 = V_0;
		NullCheck(L_11);
		if ((((int32_t)L_10) < ((int32_t)((int32_t)(((RuntimeArray*)L_11)->max_length)))))
		{
			goto IL_001d;
		}
	}
	{
		// }
		return;
	}
}
// System.Void TargetHandler::restartpositions()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TargetHandler_restartpositions_mCD5EF7068A6BFF469ED74BD46D9AEDE8E9091937 (TargetHandler_t26EBF84B13B13596F2259A92408AE301B247E751* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Clear_m46550048EF02C799D7AFEDEAB9C2A4F2F259F268_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6790F5A313E4F3D7D9EE743046C665DE8D5FE0F2);
		s_Il2CppMethodInitialized = true;
	}
	GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* V_0 = NULL;
	int32_t V_1 = 0;
	{
		// targetDataDropdown1.value = 0;
		TMP_Dropdown_t73B37BFDA0D005451C7B750938AFB1748E5EA504* L_0 = __this->___targetDataDropdown1_5;
		NullCheck(L_0);
		TMP_Dropdown_set_value_m8362A866D571975FECFD1FE47D3C4D83559795BF(L_0, 0, NULL);
		// targetDataDropdown2.value = 0;
		TMP_Dropdown_t73B37BFDA0D005451C7B750938AFB1748E5EA504* L_1 = __this->___targetDataDropdown2_6;
		NullCheck(L_1);
		TMP_Dropdown_set_value_m8362A866D571975FECFD1FE47D3C4D83559795BF(L_1, 0, NULL);
		// targetDataDropdown3.value = 0;
		TMP_Dropdown_t73B37BFDA0D005451C7B750938AFB1748E5EA504* L_2 = __this->___targetDataDropdown3_7;
		NullCheck(L_2);
		TMP_Dropdown_set_value_m8362A866D571975FECFD1FE47D3C4D83559795BF(L_2, 0, NULL);
		// makeallunselected();
		TargetHandler_makeallunselected_m3DCE64D42D783F8D2DF0856B262705C1966AEB6F(__this, NULL);
		// GameObject[] taggedObjects = GameObject.FindGameObjectsWithTag("Target");
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_3;
		L_3 = GameObject_FindGameObjectsWithTag_m63AB9863553265F03EDE4C11AEA98AF591CAEA1E(_stringLiteral6790F5A313E4F3D7D9EE743046C665DE8D5FE0F2, NULL);
		// foreach (GameObject o in taggedObjects) {
		V_0 = L_3;
		V_1 = 0;
		goto IL_0045;
	}

IL_0039:
	{
		// foreach (GameObject o in taggedObjects) {
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_4 = V_0;
		int32_t L_5 = V_1;
		NullCheck(L_4);
		int32_t L_6 = L_5;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_7 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		// GameObject.Destroy(o);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_Destroy_mFCDAE6333522488F60597AF019EA90BB1207A5AA(L_7, NULL);
		int32_t L_8 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_8, 1));
	}

IL_0045:
	{
		// foreach (GameObject o in taggedObjects) {
		int32_t L_9 = V_1;
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_10 = V_0;
		NullCheck(L_10);
		if ((((int32_t)L_9) < ((int32_t)((int32_t)(((RuntimeArray*)L_10)->max_length)))))
		{
			goto IL_0039;
		}
	}
	{
		// Array.Clear(targets, 0, targets.Length);
		TargetU5BU5D_t3617959FFC066149C517739390E51D1F9E793E6B* L_11 = __this->___targets_15;
		TargetU5BU5D_t3617959FFC066149C517739390E51D1F9E793E6B* L_12 = __this->___targets_15;
		NullCheck(L_12);
		Array_Clear_m48B57EC27CADC3463CA98A33373D557DA587FF1B((RuntimeArray*)L_11, 0, ((int32_t)(((RuntimeArray*)L_12)->max_length)), NULL);
		// currentTargetItems.Clear();
		List_1_tD7576C87B68BC6CE723331751C2CE61223447FBE* L_13 = __this->___currentTargetItems_14;
		NullCheck(L_13);
		List_1_Clear_m46550048EF02C799D7AFEDEAB9C2A4F2F259F268_inline(L_13, List_1_Clear_m46550048EF02C799D7AFEDEAB9C2A4F2F259F268_RuntimeMethod_var);
		// GenerateTargetItems();
		TargetHandler_GenerateTargetItems_mA0260A08770044FBA6CE69412B7E1CFBECD71E0D(__this, NULL);
		// }
		return;
	}
}
// System.Void TargetHandler::addTarget()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TargetHandler_addTarget_m1408D4D27E7CEE2A4A4337CD493D1B6E4DC45B54 (TargetHandler_t26EBF84B13B13596F2259A92408AE301B247E751* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_ToList_TisTarget_t5E0C0864CEA07701AF639C0AFAC19928DB873FC5_mD6A2D9656F0626A34D0EC960BE8D5DDB99E44976_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m5765993ABE587F1195934629E7D160FF603FFE50_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mE6174CF409FF796DB81E0BC4EDC13FB84F13DA91_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_ToArray_m20B42A5569FEAF96516D430D0F8364BAB17CD475_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Target_t5E0C0864CEA07701AF639C0AFAC19928DB873FC5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	Target_t5E0C0864CEA07701AF639C0AFAC19928DB873FC5* V_1 = NULL;
	List_1_tFB3A1D83FA1EFCD81B10C01A5395798068BCE79A* V_2 = NULL;
	TargetU5BU5D_t3617959FFC066149C517739390E51D1F9E793E6B* V_3 = NULL;
	int32_t V_4 = 0;
	{
		// string name = NewTargetNameInput.text;
		InputField_tABEA115F23FBD374EBE80D4FAC1D15BD6E37A140* L_0 = __this->___NewTargetNameInput_21;
		NullCheck(L_0);
		String_t* L_1;
		L_1 = InputField_get_text_m6E0796350FF559505E4DF17311803962699D6704_inline(L_0, NULL);
		V_0 = L_1;
		// NewTargetNameInput.text = "";
		InputField_tABEA115F23FBD374EBE80D4FAC1D15BD6E37A140* L_2 = __this->___NewTargetNameInput_21;
		NullCheck(L_2);
		InputField_set_text_m28B1C806BBCAC44F3ACCDC3B550509CA0C7D257F(L_2, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709, NULL);
		// Target newtarget = new Target();
		Target_t5E0C0864CEA07701AF639C0AFAC19928DB873FC5* L_3 = (Target_t5E0C0864CEA07701AF639C0AFAC19928DB873FC5*)il2cpp_codegen_object_new(Target_t5E0C0864CEA07701AF639C0AFAC19928DB873FC5_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		Target__ctor_m5524C5EEF36FA6DB1E6B5BFA323B37E68635C216(L_3, NULL);
		V_1 = L_3;
		// newtarget.Name = name;
		Target_t5E0C0864CEA07701AF639C0AFAC19928DB873FC5* L_4 = V_1;
		String_t* L_5 = V_0;
		NullCheck(L_4);
		L_4->___Name_0 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&L_4->___Name_0), (void*)L_5);
		// newtarget.Position.x = 8;
		Target_t5E0C0864CEA07701AF639C0AFAC19928DB873FC5* L_6 = V_1;
		NullCheck(L_6);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_7 = (&L_6->___Position_1);
		L_7->___x_2 = (8.0f);
		// newtarget.Position.y = 0.1f;
		Target_t5E0C0864CEA07701AF639C0AFAC19928DB873FC5* L_8 = V_1;
		NullCheck(L_8);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_9 = (&L_8->___Position_1);
		L_9->___y_3 = (0.100000001f);
		// newtarget.Position.z = 2;
		Target_t5E0C0864CEA07701AF639C0AFAC19928DB873FC5* L_10 = V_1;
		NullCheck(L_10);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_11 = (&L_10->___Position_1);
		L_11->___z_4 = (2.0f);
		// List<Target> targetslist = targets.ToList();
		TargetU5BU5D_t3617959FFC066149C517739390E51D1F9E793E6B* L_12 = __this->___targets_15;
		List_1_tFB3A1D83FA1EFCD81B10C01A5395798068BCE79A* L_13;
		L_13 = Enumerable_ToList_TisTarget_t5E0C0864CEA07701AF639C0AFAC19928DB873FC5_mD6A2D9656F0626A34D0EC960BE8D5DDB99E44976((RuntimeObject*)L_12, Enumerable_ToList_TisTarget_t5E0C0864CEA07701AF639C0AFAC19928DB873FC5_mD6A2D9656F0626A34D0EC960BE8D5DDB99E44976_RuntimeMethod_var);
		V_2 = L_13;
		// targetslist.Add(newtarget);
		List_1_tFB3A1D83FA1EFCD81B10C01A5395798068BCE79A* L_14 = V_2;
		Target_t5E0C0864CEA07701AF639C0AFAC19928DB873FC5* L_15 = V_1;
		NullCheck(L_14);
		List_1_Add_m5765993ABE587F1195934629E7D160FF603FFE50_inline(L_14, L_15, List_1_Add_m5765993ABE587F1195934629E7D160FF603FFE50_RuntimeMethod_var);
		// targets = targetslist.ToArray();
		List_1_tFB3A1D83FA1EFCD81B10C01A5395798068BCE79A* L_16 = V_2;
		NullCheck(L_16);
		TargetU5BU5D_t3617959FFC066149C517739390E51D1F9E793E6B* L_17;
		L_17 = List_1_ToArray_m20B42A5569FEAF96516D430D0F8364BAB17CD475(L_16, List_1_ToArray_m20B42A5569FEAF96516D430D0F8364BAB17CD475_RuntimeMethod_var);
		__this->___targets_15 = L_17;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___targets_15), (void*)L_17);
		// foreach(Target target in targets){
		TargetU5BU5D_t3617959FFC066149C517739390E51D1F9E793E6B* L_18 = __this->___targets_15;
		V_3 = L_18;
		V_4 = 0;
		goto IL_0098;
	}

IL_0084:
	{
		// foreach(Target target in targets){
		TargetU5BU5D_t3617959FFC066149C517739390E51D1F9E793E6B* L_19 = V_3;
		int32_t L_20 = V_4;
		NullCheck(L_19);
		int32_t L_21 = L_20;
		Target_t5E0C0864CEA07701AF639C0AFAC19928DB873FC5* L_22 = (L_19)->GetAt(static_cast<il2cpp_array_size_t>(L_21));
		// Debug.Log(target.Name);
		NullCheck(L_22);
		String_t* L_23 = L_22->___Name_0;
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m86567BCF22BBE7809747817453CACA0E41E68219(L_23, NULL);
		int32_t L_24 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_24, 1));
	}

IL_0098:
	{
		// foreach(Target target in targets){
		int32_t L_25 = V_4;
		TargetU5BU5D_t3617959FFC066149C517739390E51D1F9E793E6B* L_26 = V_3;
		NullCheck(L_26);
		if ((((int32_t)L_25) < ((int32_t)((int32_t)(((RuntimeArray*)L_26)->max_length)))))
		{
			goto IL_0084;
		}
	}
	{
		// currentTargetItems.Add(CreateTargetFacade(newtarget));
		List_1_tD7576C87B68BC6CE723331751C2CE61223447FBE* L_27 = __this->___currentTargetItems_14;
		Target_t5E0C0864CEA07701AF639C0AFAC19928DB873FC5* L_28 = V_1;
		TargetFacade_tAA52A697AACAC6BBC707F8B97B5975CD124D9CB1* L_29;
		L_29 = TargetHandler_CreateTargetFacade_m67536F4040123449F003797A7E2D0C5E4536C91A(__this, L_28, NULL);
		NullCheck(L_27);
		List_1_Add_mE6174CF409FF796DB81E0BC4EDC13FB84F13DA91_inline(L_27, L_29, List_1_Add_mE6174CF409FF796DB81E0BC4EDC13FB84F13DA91_RuntimeMethod_var);
		// FillDropdownWithTargetItems();
		TargetHandler_FillDropdownWithTargetItems_mBA0544F9D4B121606039D902695E4F7092A9DC7D(__this, NULL);
		// }
		return;
	}
}
// System.Void TargetHandler::removeTarget()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TargetHandler_removeTarget_m0E78FB7036E66D7F458486A1EA0FCE34FFAC04CD (TargetHandler_t26EBF84B13B13596F2259A92408AE301B247E751* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_ToList_TisTargetFacade_tAA52A697AACAC6BBC707F8B97B5975CD124D9CB1_mFE05F58A8DE77DD8A5A906EAC71F876EA5BB9667_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_ToList_TisTarget_t5E0C0864CEA07701AF639C0AFAC19928DB873FC5_mD6A2D9656F0626A34D0EC960BE8D5DDB99E44976_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m43EBD82C27E159FCDA48274F7B0834E8FFA3BFA6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m865474A9CADD1F2CBF3E1D44253129BCDAAE9CFC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m27D3CC24299A5914B982AA443D26A73093D96963_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_m282A9362896D76C23F2DE587B3DAED300C1B6C30_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Remove_m8739674B1C80901ECFE42608BD578C879A18F26E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Remove_m9BFBD30B346EC11CCE34EE97E0DB06B2431A0A95_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_ToArray_m20B42A5569FEAF96516D430D0F8364BAB17CD475_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	List_1_tFB3A1D83FA1EFCD81B10C01A5395798068BCE79A* V_0 = NULL;
	TargetU5BU5D_t3617959FFC066149C517739390E51D1F9E793E6B* V_1 = NULL;
	int32_t V_2 = 0;
	Target_t5E0C0864CEA07701AF639C0AFAC19928DB873FC5* V_3 = NULL;
	Target_t5E0C0864CEA07701AF639C0AFAC19928DB873FC5* V_4 = NULL;
	Enumerator_t8B20BFEE313F615312F7EC1F77EE57DDFDBBEE8D V_5;
	memset((&V_5), 0, sizeof(V_5));
	TargetFacade_tAA52A697AACAC6BBC707F8B97B5975CD124D9CB1* V_6 = NULL;
	{
		// List<Target> removelist = targets.ToList();
		TargetU5BU5D_t3617959FFC066149C517739390E51D1F9E793E6B* L_0 = __this->___targets_15;
		List_1_tFB3A1D83FA1EFCD81B10C01A5395798068BCE79A* L_1;
		L_1 = Enumerable_ToList_TisTarget_t5E0C0864CEA07701AF639C0AFAC19928DB873FC5_mD6A2D9656F0626A34D0EC960BE8D5DDB99E44976((RuntimeObject*)L_0, Enumerable_ToList_TisTarget_t5E0C0864CEA07701AF639C0AFAC19928DB873FC5_mD6A2D9656F0626A34D0EC960BE8D5DDB99E44976_RuntimeMethod_var);
		V_0 = L_1;
		// foreach (Target t in targets){
		TargetU5BU5D_t3617959FFC066149C517739390E51D1F9E793E6B* L_2 = __this->___targets_15;
		V_1 = L_2;
		V_2 = 0;
		goto IL_00f0;
	}

IL_001a:
	{
		// foreach (Target t in targets){
		TargetU5BU5D_t3617959FFC066149C517739390E51D1F9E793E6B* L_3 = V_1;
		int32_t L_4 = V_2;
		NullCheck(L_3);
		int32_t L_5 = L_4;
		Target_t5E0C0864CEA07701AF639C0AFAC19928DB873FC5* L_6 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
		V_3 = L_6;
		// if(t.Name == item){
		Target_t5E0C0864CEA07701AF639C0AFAC19928DB873FC5* L_7 = V_3;
		NullCheck(L_7);
		String_t* L_8 = L_7->___Name_0;
		String_t* L_9 = __this->___item_10;
		bool L_10;
		L_10 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_8, L_9, NULL);
		if (!L_10)
		{
			goto IL_00ec;
		}
	}
	{
		// Target saveitemtoremove = t;
		Target_t5E0C0864CEA07701AF639C0AFAC19928DB873FC5* L_11 = V_3;
		V_4 = L_11;
		// removelist.Remove(saveitemtoremove);
		List_1_tFB3A1D83FA1EFCD81B10C01A5395798068BCE79A* L_12 = V_0;
		Target_t5E0C0864CEA07701AF639C0AFAC19928DB873FC5* L_13 = V_4;
		NullCheck(L_12);
		bool L_14;
		L_14 = List_1_Remove_m9BFBD30B346EC11CCE34EE97E0DB06B2431A0A95(L_12, L_13, List_1_Remove_m9BFBD30B346EC11CCE34EE97E0DB06B2431A0A95_RuntimeMethod_var);
		// foreach(TargetFacade tf in currentTargetItems.ToList()){
		List_1_tD7576C87B68BC6CE723331751C2CE61223447FBE* L_15 = __this->___currentTargetItems_14;
		List_1_tD7576C87B68BC6CE723331751C2CE61223447FBE* L_16;
		L_16 = Enumerable_ToList_TisTargetFacade_tAA52A697AACAC6BBC707F8B97B5975CD124D9CB1_mFE05F58A8DE77DD8A5A906EAC71F876EA5BB9667(L_15, Enumerable_ToList_TisTargetFacade_tAA52A697AACAC6BBC707F8B97B5975CD124D9CB1_mFE05F58A8DE77DD8A5A906EAC71F876EA5BB9667_RuntimeMethod_var);
		NullCheck(L_16);
		Enumerator_t8B20BFEE313F615312F7EC1F77EE57DDFDBBEE8D L_17;
		L_17 = List_1_GetEnumerator_m282A9362896D76C23F2DE587B3DAED300C1B6C30(L_16, List_1_GetEnumerator_m282A9362896D76C23F2DE587B3DAED300C1B6C30_RuntimeMethod_var);
		V_5 = L_17;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_00de:
			{// begin finally (depth: 1)
				Enumerator_Dispose_m43EBD82C27E159FCDA48274F7B0834E8FFA3BFA6((&V_5), Enumerator_Dispose_m43EBD82C27E159FCDA48274F7B0834E8FFA3BFA6_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_00d0_1;
			}

IL_0054_1:
			{
				// foreach(TargetFacade tf in currentTargetItems.ToList()){
				TargetFacade_tAA52A697AACAC6BBC707F8B97B5975CD124D9CB1* L_18;
				L_18 = Enumerator_get_Current_m27D3CC24299A5914B982AA443D26A73093D96963_inline((&V_5), Enumerator_get_Current_m27D3CC24299A5914B982AA443D26A73093D96963_RuntimeMethod_var);
				V_6 = L_18;
				// if(tf.Name == item){
				TargetFacade_tAA52A697AACAC6BBC707F8B97B5975CD124D9CB1* L_19 = V_6;
				NullCheck(L_19);
				String_t* L_20 = L_19->___Name_4;
				String_t* L_21 = __this->___item_10;
				bool L_22;
				L_22 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_20, L_21, NULL);
				if (!L_22)
				{
					goto IL_00d0_1;
				}
			}
			{
				// currentTargetItems.Remove(tf);
				List_1_tD7576C87B68BC6CE723331751C2CE61223447FBE* L_23 = __this->___currentTargetItems_14;
				TargetFacade_tAA52A697AACAC6BBC707F8B97B5975CD124D9CB1* L_24 = V_6;
				NullCheck(L_23);
				bool L_25;
				L_25 = List_1_Remove_m8739674B1C80901ECFE42608BD578C879A18F26E(L_23, L_24, List_1_Remove_m8739674B1C80901ECFE42608BD578C879A18F26E_RuntimeMethod_var);
				// GameObject remove = GameObject.Find(item);
				String_t* L_26 = __this->___item_10;
				GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_27;
				L_27 = GameObject_Find_mFF1D6C65A7E2CD82443F4DCE4C53472FB30B7F51(L_26, NULL);
				// Destroy(remove.gameObject);
				NullCheck(L_27);
				GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_28;
				L_28 = GameObject_get_gameObject_m0878015B8CF7F5D432B583C187725810D27B57DC(L_27, NULL);
				il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
				Object_Destroy_mFCDAE6333522488F60597AF019EA90BB1207A5AA(L_28, NULL);
				// FillDropdownWithTargetItems();
				TargetHandler_FillDropdownWithTargetItems_mBA0544F9D4B121606039D902695E4F7092A9DC7D(__this, NULL);
				// targets = removelist.ToArray();
				List_1_tFB3A1D83FA1EFCD81B10C01A5395798068BCE79A* L_29 = V_0;
				NullCheck(L_29);
				TargetU5BU5D_t3617959FFC066149C517739390E51D1F9E793E6B* L_30;
				L_30 = List_1_ToArray_m20B42A5569FEAF96516D430D0F8364BAB17CD475(L_29, List_1_ToArray_m20B42A5569FEAF96516D430D0F8364BAB17CD475_RuntimeMethod_var);
				__this->___targets_15 = L_30;
				Il2CppCodeGenWriteBarrier((void**)(&__this->___targets_15), (void*)L_30);
				// targetDataDropdown1.value = 0;
				TMP_Dropdown_t73B37BFDA0D005451C7B750938AFB1748E5EA504* L_31 = __this->___targetDataDropdown1_5;
				NullCheck(L_31);
				TMP_Dropdown_set_value_m8362A866D571975FECFD1FE47D3C4D83559795BF(L_31, 0, NULL);
				// targetDataDropdown2.value = 0;
				TMP_Dropdown_t73B37BFDA0D005451C7B750938AFB1748E5EA504* L_32 = __this->___targetDataDropdown2_6;
				NullCheck(L_32);
				TMP_Dropdown_set_value_m8362A866D571975FECFD1FE47D3C4D83559795BF(L_32, 0, NULL);
				// targetDataDropdown3.value = 0;
				TMP_Dropdown_t73B37BFDA0D005451C7B750938AFB1748E5EA504* L_33 = __this->___targetDataDropdown3_7;
				NullCheck(L_33);
				TMP_Dropdown_set_value_m8362A866D571975FECFD1FE47D3C4D83559795BF(L_33, 0, NULL);
				// makeallunselected();
				TargetHandler_makeallunselected_m3DCE64D42D783F8D2DF0856B262705C1966AEB6F(__this, NULL);
			}

IL_00d0_1:
			{
				// foreach(TargetFacade tf in currentTargetItems.ToList()){
				bool L_34;
				L_34 = Enumerator_MoveNext_m865474A9CADD1F2CBF3E1D44253129BCDAAE9CFC((&V_5), Enumerator_MoveNext_m865474A9CADD1F2CBF3E1D44253129BCDAAE9CFC_RuntimeMethod_var);
				if (L_34)
				{
					goto IL_0054_1;
				}
			}
			{
				goto IL_00ec;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00ec:
	{
		int32_t L_35 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_35, 1));
	}

IL_00f0:
	{
		// foreach (Target t in targets){
		int32_t L_36 = V_2;
		TargetU5BU5D_t3617959FFC066149C517739390E51D1F9E793E6B* L_37 = V_1;
		NullCheck(L_37);
		if ((((int32_t)L_36) < ((int32_t)((int32_t)(((RuntimeArray*)L_37)->max_length)))))
		{
			goto IL_001a;
		}
	}
	{
		// }
		return;
	}
}
// System.Void TargetHandler::SaveData()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TargetHandler_SaveData_mF120BEA533FDF9D93D3A5A903FDFBF23CF69773D (TargetHandler_t26EBF84B13B13596F2259A92408AE301B247E751* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0C3C6829C3CCF8020C6AC45B87963ADC095CD44A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2FC6981F2D59F338DA48E1FC23ED6372B90BF38D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral782601D9835BF9992A5F131203DC948C52C34F0A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral876C4B39B6E4D0187090400768899C71D99DE90D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC18C9BB6DF0D5C60CE5A5D2D3D6111BEB6F8CCEB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC62C64F00567C5368CAE37F4E64E1E82FF785677);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD9691C4FD8A1F6B09DB1147CA32B442772FB46A1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEB0F79A6ABD88DB20E08561FCEEA8E62C21B8875);
		s_Il2CppMethodInitialized = true;
	}
	TargetU5BU5D_t3617959FFC066149C517739390E51D1F9E793E6B* V_0 = NULL;
	int32_t V_1 = 0;
	TargetU5BU5D_t3617959FFC066149C517739390E51D1F9E793E6B* V_2 = NULL;
	int32_t V_3 = 0;
	Target_t5E0C0864CEA07701AF639C0AFAC19928DB873FC5* V_4 = NULL;
	{
		// Target[] ta = targets;
		TargetU5BU5D_t3617959FFC066149C517739390E51D1F9E793E6B* L_0 = __this->___targets_15;
		V_0 = L_0;
		// for(int i = 0; i < ta.Length; i++){
		V_1 = 0;
		goto IL_0061;
	}

IL_000b:
	{
		// ta[i].Position.x = GameObject.Find(ta[i].Name).transform.position.x;
		TargetU5BU5D_t3617959FFC066149C517739390E51D1F9E793E6B* L_1 = V_0;
		int32_t L_2 = V_1;
		NullCheck(L_1);
		int32_t L_3 = L_2;
		Target_t5E0C0864CEA07701AF639C0AFAC19928DB873FC5* L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		NullCheck(L_4);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_5 = (&L_4->___Position_1);
		TargetU5BU5D_t3617959FFC066149C517739390E51D1F9E793E6B* L_6 = V_0;
		int32_t L_7 = V_1;
		NullCheck(L_6);
		int32_t L_8 = L_7;
		Target_t5E0C0864CEA07701AF639C0AFAC19928DB873FC5* L_9 = (L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_8));
		NullCheck(L_9);
		String_t* L_10 = L_9->___Name_0;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_11;
		L_11 = GameObject_Find_mFF1D6C65A7E2CD82443F4DCE4C53472FB30B7F51(L_10, NULL);
		NullCheck(L_11);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_12;
		L_12 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_11, NULL);
		NullCheck(L_12);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13;
		L_13 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_12, NULL);
		float L_14 = L_13.___x_2;
		L_5->___x_2 = L_14;
		// ta[i].Position.z = GameObject.Find(ta[i].Name).transform.position.z;
		TargetU5BU5D_t3617959FFC066149C517739390E51D1F9E793E6B* L_15 = V_0;
		int32_t L_16 = V_1;
		NullCheck(L_15);
		int32_t L_17 = L_16;
		Target_t5E0C0864CEA07701AF639C0AFAC19928DB873FC5* L_18 = (L_15)->GetAt(static_cast<il2cpp_array_size_t>(L_17));
		NullCheck(L_18);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_19 = (&L_18->___Position_1);
		TargetU5BU5D_t3617959FFC066149C517739390E51D1F9E793E6B* L_20 = V_0;
		int32_t L_21 = V_1;
		NullCheck(L_20);
		int32_t L_22 = L_21;
		Target_t5E0C0864CEA07701AF639C0AFAC19928DB873FC5* L_23 = (L_20)->GetAt(static_cast<il2cpp_array_size_t>(L_22));
		NullCheck(L_23);
		String_t* L_24 = L_23->___Name_0;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_25;
		L_25 = GameObject_Find_mFF1D6C65A7E2CD82443F4DCE4C53472FB30B7F51(L_24, NULL);
		NullCheck(L_25);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_26;
		L_26 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_25, NULL);
		NullCheck(L_26);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_27;
		L_27 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_26, NULL);
		float L_28 = L_27.___z_4;
		L_19->___z_4 = L_28;
		// for(int i = 0; i < ta.Length; i++){
		int32_t L_29 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_29, 1));
	}

IL_0061:
	{
		// for(int i = 0; i < ta.Length; i++){
		int32_t L_30 = V_1;
		TargetU5BU5D_t3617959FFC066149C517739390E51D1F9E793E6B* L_31 = V_0;
		NullCheck(L_31);
		if ((((int32_t)L_30) < ((int32_t)((int32_t)(((RuntimeArray*)L_31)->max_length)))))
		{
			goto IL_000b;
		}
	}
	{
		// outputstring = "{";
		__this->___outputstring_22 = _stringLiteral0C3C6829C3CCF8020C6AC45B87963ADC095CD44A;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___outputstring_22), (void*)_stringLiteral0C3C6829C3CCF8020C6AC45B87963ADC095CD44A);
		// outputstring += '"';
		String_t* L_32 = __this->___outputstring_22;
		String_t* L_33;
		L_33 = String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D(L_32, _stringLiteralC62C64F00567C5368CAE37F4E64E1E82FF785677, NULL);
		__this->___outputstring_22 = L_33;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___outputstring_22), (void*)L_33);
		// outputstring += "TargetList";
		String_t* L_34 = __this->___outputstring_22;
		String_t* L_35;
		L_35 = String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D(L_34, _stringLiteral782601D9835BF9992A5F131203DC948C52C34F0A, NULL);
		__this->___outputstring_22 = L_35;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___outputstring_22), (void*)L_35);
		// outputstring += '"';
		String_t* L_36 = __this->___outputstring_22;
		String_t* L_37;
		L_37 = String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D(L_36, _stringLiteralC62C64F00567C5368CAE37F4E64E1E82FF785677, NULL);
		__this->___outputstring_22 = L_37;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___outputstring_22), (void*)L_37);
		// outputstring += ':';
		String_t* L_38 = __this->___outputstring_22;
		String_t* L_39;
		L_39 = String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D(L_38, _stringLiteral876C4B39B6E4D0187090400768899C71D99DE90D, NULL);
		__this->___outputstring_22 = L_39;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___outputstring_22), (void*)L_39);
		// outputstring += '[';
		String_t* L_40 = __this->___outputstring_22;
		String_t* L_41;
		L_41 = String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D(L_40, _stringLiteralD9691C4FD8A1F6B09DB1147CA32B442772FB46A1, NULL);
		__this->___outputstring_22 = L_41;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___outputstring_22), (void*)L_41);
		// foreach (Target target in ta){
		TargetU5BU5D_t3617959FFC066149C517739390E51D1F9E793E6B* L_42 = V_0;
		V_2 = L_42;
		V_3 = 0;
		goto IL_010c;
	}

IL_00e6:
	{
		// foreach (Target target in ta){
		TargetU5BU5D_t3617959FFC066149C517739390E51D1F9E793E6B* L_43 = V_2;
		int32_t L_44 = V_3;
		NullCheck(L_43);
		int32_t L_45 = L_44;
		Target_t5E0C0864CEA07701AF639C0AFAC19928DB873FC5* L_46 = (L_43)->GetAt(static_cast<il2cpp_array_size_t>(L_45));
		V_4 = L_46;
		// outputstring = outputstring + JsonUtility.ToJson(target) + ",";
		String_t* L_47 = __this->___outputstring_22;
		Target_t5E0C0864CEA07701AF639C0AFAC19928DB873FC5* L_48 = V_4;
		String_t* L_49;
		L_49 = JsonUtility_ToJson_mD0FB24DC5A8621A2473FC208E9B15AF43944EBCD(L_48, NULL);
		String_t* L_50;
		L_50 = String_Concat_m9B13B47FCB3DF61144D9647DDA05F527377251B0(L_47, L_49, _stringLiteralC18C9BB6DF0D5C60CE5A5D2D3D6111BEB6F8CCEB, NULL);
		__this->___outputstring_22 = L_50;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___outputstring_22), (void*)L_50);
		int32_t L_51 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_51, 1));
	}

IL_010c:
	{
		// foreach (Target target in ta){
		int32_t L_52 = V_3;
		TargetU5BU5D_t3617959FFC066149C517739390E51D1F9E793E6B* L_53 = V_2;
		NullCheck(L_53);
		if ((((int32_t)L_52) < ((int32_t)((int32_t)(((RuntimeArray*)L_53)->max_length)))))
		{
			goto IL_00e6;
		}
	}
	{
		// outputstring = outputstring.Remove(outputstring.Length - 1);
		String_t* L_54 = __this->___outputstring_22;
		String_t* L_55 = __this->___outputstring_22;
		NullCheck(L_55);
		int32_t L_56;
		L_56 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_55, NULL);
		NullCheck(L_54);
		String_t* L_57;
		L_57 = String_Remove_m8266E0BF5D8565D4CDC850F21E9178AE254C3E85(L_54, ((int32_t)il2cpp_codegen_subtract(L_56, 1)), NULL);
		__this->___outputstring_22 = L_57;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___outputstring_22), (void*)L_57);
		// outputstring +=  "]}";
		String_t* L_58 = __this->___outputstring_22;
		String_t* L_59;
		L_59 = String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D(L_58, _stringLiteralEB0F79A6ABD88DB20E08561FCEEA8E62C21B8875, NULL);
		__this->___outputstring_22 = L_59;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___outputstring_22), (void*)L_59);
		// print("Saved OutputString: " + outputstring);
		String_t* L_60 = __this->___outputstring_22;
		String_t* L_61;
		L_61 = String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D(_stringLiteral2FC6981F2D59F338DA48E1FC23ED6372B90BF38D, L_60, NULL);
		MonoBehaviour_print_mED815C779E369787B3E9646A6DE96FBC2944BF0B(L_61, NULL);
		// StartCoroutine(sendjson());
		RuntimeObject* L_62;
		L_62 = TargetHandler_sendjson_mCC9261FC1C5FF3CD7876EB46D0DED2A0F9586A58(__this, NULL);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_63;
		L_63 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(__this, L_62, NULL);
		// }
		return;
	}
}
// System.Void TargetHandler::SetSelectedChange2(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TargetHandler_SetSelectedChange2_m3F8D976EB480802845B73E81D515A31E75E44772 (TargetHandler_t26EBF84B13B13596F2259A92408AE301B247E751* __this, int32_t ___selectedValue0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_mBE3176F40529BACB1E6DBB68BDFD5894B04BD1BA_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// item = targetDataDropdown2.options[targetDataDropdown2.value].text;
		TMP_Dropdown_t73B37BFDA0D005451C7B750938AFB1748E5EA504* L_0 = __this->___targetDataDropdown2_6;
		NullCheck(L_0);
		List_1_tCADFA900711C24701A9C70EE674B91FC45D42A52* L_1;
		L_1 = TMP_Dropdown_get_options_mA543A0EFE4D1953E73C6F60ECA8CE177182571C5(L_0, NULL);
		TMP_Dropdown_t73B37BFDA0D005451C7B750938AFB1748E5EA504* L_2 = __this->___targetDataDropdown2_6;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = TMP_Dropdown_get_value_m5916A6D1897431E8ED789FEC24551A311D1B5C70_inline(L_2, NULL);
		NullCheck(L_1);
		OptionData_tFDFBCB4A5FB860E95AE46FDAC112DB4140A8525E* L_4;
		L_4 = List_1_get_Item_mBE3176F40529BACB1E6DBB68BDFD5894B04BD1BA(L_1, L_3, List_1_get_Item_mBE3176F40529BACB1E6DBB68BDFD5894B04BD1BA_RuntimeMethod_var);
		NullCheck(L_4);
		String_t* L_5;
		L_5 = OptionData_get_text_m2E822D5D50B597BFBA7AB3485EF15B526A726A1A_inline(L_4, NULL);
		__this->___item_10 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___item_10), (void*)L_5);
		// value = selectedValue;
		int32_t L_6 = ___selectedValue0;
		__this->___value_11 = L_6;
		// navigationXOffset.value = GameObject.Find(item).transform.position.x;
		Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F* L_7 = __this->___navigationXOffset_9;
		String_t* L_8 = __this->___item_10;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_9;
		L_9 = GameObject_Find_mFF1D6C65A7E2CD82443F4DCE4C53472FB30B7F51(L_8, NULL);
		NullCheck(L_9);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_10;
		L_10 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_9, NULL);
		NullCheck(L_10);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_11;
		L_11 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_10, NULL);
		float L_12 = L_11.___x_2;
		NullCheck(L_7);
		VirtualActionInvoker1< float >::Invoke(47 /* System.Void UnityEngine.UI.Slider::set_value(System.Single) */, L_7, L_12);
		// navigationZOffset.value = GameObject.Find(item).transform.position.z;
		Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F* L_13 = __this->___navigationZOffset_8;
		String_t* L_14 = __this->___item_10;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_15;
		L_15 = GameObject_Find_mFF1D6C65A7E2CD82443F4DCE4C53472FB30B7F51(L_14, NULL);
		NullCheck(L_15);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_16;
		L_16 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_15, NULL);
		NullCheck(L_16);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_17;
		L_17 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_16, NULL);
		float L_18 = L_17.___z_4;
		NullCheck(L_13);
		VirtualActionInvoker1< float >::Invoke(47 /* System.Void UnityEngine.UI.Slider::set_value(System.Single) */, L_13, L_18);
		// }
		return;
	}
}
// System.Void TargetHandler::SetSelectedChange3(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TargetHandler_SetSelectedChange3_m4E4AC123AB6B9A8707E556738B97E4C22BD33052 (TargetHandler_t26EBF84B13B13596F2259A92408AE301B247E751* __this, int32_t ___selectedValue0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_mBE3176F40529BACB1E6DBB68BDFD5894B04BD1BA_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// item = targetDataDropdown3.options[targetDataDropdown3.value].text;
		TMP_Dropdown_t73B37BFDA0D005451C7B750938AFB1748E5EA504* L_0 = __this->___targetDataDropdown3_7;
		NullCheck(L_0);
		List_1_tCADFA900711C24701A9C70EE674B91FC45D42A52* L_1;
		L_1 = TMP_Dropdown_get_options_mA543A0EFE4D1953E73C6F60ECA8CE177182571C5(L_0, NULL);
		TMP_Dropdown_t73B37BFDA0D005451C7B750938AFB1748E5EA504* L_2 = __this->___targetDataDropdown3_7;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = TMP_Dropdown_get_value_m5916A6D1897431E8ED789FEC24551A311D1B5C70_inline(L_2, NULL);
		NullCheck(L_1);
		OptionData_tFDFBCB4A5FB860E95AE46FDAC112DB4140A8525E* L_4;
		L_4 = List_1_get_Item_mBE3176F40529BACB1E6DBB68BDFD5894B04BD1BA(L_1, L_3, List_1_get_Item_mBE3176F40529BACB1E6DBB68BDFD5894B04BD1BA_RuntimeMethod_var);
		NullCheck(L_4);
		String_t* L_5;
		L_5 = OptionData_get_text_m2E822D5D50B597BFBA7AB3485EF15B526A726A1A_inline(L_4, NULL);
		__this->___item_10 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___item_10), (void*)L_5);
		// value = selectedValue;
		int32_t L_6 = ___selectedValue0;
		__this->___value_11 = L_6;
		// navigationXOffset.value = GameObject.Find(item).transform.position.x;
		Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F* L_7 = __this->___navigationXOffset_9;
		String_t* L_8 = __this->___item_10;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_9;
		L_9 = GameObject_Find_mFF1D6C65A7E2CD82443F4DCE4C53472FB30B7F51(L_8, NULL);
		NullCheck(L_9);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_10;
		L_10 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_9, NULL);
		NullCheck(L_10);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_11;
		L_11 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_10, NULL);
		float L_12 = L_11.___x_2;
		NullCheck(L_7);
		VirtualActionInvoker1< float >::Invoke(47 /* System.Void UnityEngine.UI.Slider::set_value(System.Single) */, L_7, L_12);
		// navigationZOffset.value = GameObject.Find(item).transform.position.z;
		Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F* L_13 = __this->___navigationZOffset_8;
		String_t* L_14 = __this->___item_10;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_15;
		L_15 = GameObject_Find_mFF1D6C65A7E2CD82443F4DCE4C53472FB30B7F51(L_14, NULL);
		NullCheck(L_15);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_16;
		L_16 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_15, NULL);
		NullCheck(L_16);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_17;
		L_17 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_16, NULL);
		float L_18 = L_17.___z_4;
		NullCheck(L_13);
		VirtualActionInvoker1< float >::Invoke(47 /* System.Void UnityEngine.UI.Slider::set_value(System.Single) */, L_13, L_18);
		// }
		return;
	}
}
// System.Threading.Tasks.Task`1<System.String> TargetHandler::asyncGetRequest()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_t3D7638C82ED289AF156EDBAE76842D8DF4C4A9E0* TargetHandler_asyncGetRequest_m10745638E4610F8636CA64BB80F7A3BD7C286918 (TargetHandler_t26EBF84B13B13596F2259A92408AE301B247E751* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_Create_m4CB15D06286C7AA0BA8318800D23A9D574CBE0E8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_Start_TisU3CasyncGetRequestU3Ed__31_t3A8924764B9CFA6477D0B1E6C51AE990E58B4F07_m846F6646BF093DF8EE19B6A597A8D4B4A8EB7926_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_get_Task_m01EB243CF4396C9A2645F71572B47CF12151974E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_tA28B0962049DC249BEC0054E2394B1962E28E90E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CasyncGetRequestU3Ed__31_t3A8924764B9CFA6477D0B1E6C51AE990E58B4F07 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		il2cpp_codegen_runtime_class_init_inline(AsyncTaskMethodBuilder_1_tA28B0962049DC249BEC0054E2394B1962E28E90E_il2cpp_TypeInfo_var);
		AsyncTaskMethodBuilder_1_tA28B0962049DC249BEC0054E2394B1962E28E90E L_0;
		L_0 = AsyncTaskMethodBuilder_1_Create_m4CB15D06286C7AA0BA8318800D23A9D574CBE0E8(AsyncTaskMethodBuilder_1_Create_m4CB15D06286C7AA0BA8318800D23A9D574CBE0E8_RuntimeMethod_var);
		(&V_0)->___U3CU3Et__builder_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)&((&(((&(&V_0)->___U3CU3Et__builder_1))->___m_coreState_1))->___m_stateMachine_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&(&V_0)->___U3CU3Et__builder_1))->___m_coreState_1))->___m_defaultContextAction_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&(&V_0)->___U3CU3Et__builder_1))->___m_task_2), (void*)NULL);
		#endif
		(&V_0)->___U3CU3E1__state_0 = (-1);
		AsyncTaskMethodBuilder_1_tA28B0962049DC249BEC0054E2394B1962E28E90E* L_1 = (&(&V_0)->___U3CU3Et__builder_1);
		AsyncTaskMethodBuilder_1_Start_TisU3CasyncGetRequestU3Ed__31_t3A8924764B9CFA6477D0B1E6C51AE990E58B4F07_m846F6646BF093DF8EE19B6A597A8D4B4A8EB7926(L_1, (&V_0), AsyncTaskMethodBuilder_1_Start_TisU3CasyncGetRequestU3Ed__31_t3A8924764B9CFA6477D0B1E6C51AE990E58B4F07_m846F6646BF093DF8EE19B6A597A8D4B4A8EB7926_RuntimeMethod_var);
		AsyncTaskMethodBuilder_1_tA28B0962049DC249BEC0054E2394B1962E28E90E* L_2 = (&(&V_0)->___U3CU3Et__builder_1);
		Task_1_t3D7638C82ED289AF156EDBAE76842D8DF4C4A9E0* L_3;
		L_3 = AsyncTaskMethodBuilder_1_get_Task_m01EB243CF4396C9A2645F71572B47CF12151974E(L_2, AsyncTaskMethodBuilder_1_get_Task_m01EB243CF4396C9A2645F71572B47CF12151974E_RuntimeMethod_var);
		return L_3;
	}
}
// System.Void TargetHandler::GenerateTargetItems()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TargetHandler_GenerateTargetItems_mA0260A08770044FBA6CE69412B7E1CFBECD71E0D (TargetHandler_t26EBF84B13B13596F2259A92408AE301B247E751* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncVoidMethodBuilder_Start_TisU3CGenerateTargetItemsU3Ed__32_t022CBBF6C6A16E5E4426916B9827B634513DE9CC_mBCA1E50253ABC84F73050E99DA68775726AD0F5D_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CGenerateTargetItemsU3Ed__32_t022CBBF6C6A16E5E4426916B9827B634513DE9CC V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D L_0;
		L_0 = AsyncVoidMethodBuilder_Create_mE6D291637BF7B4B6D3F8BFCA14920B9200D7A502(NULL);
		(&V_0)->___U3CU3Et__builder_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)&(((&(&V_0)->___U3CU3Et__builder_1))->___m_synchronizationContext_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&(&V_0)->___U3CU3Et__builder_1))->___m_coreState_1))->___m_stateMachine_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&(&V_0)->___U3CU3Et__builder_1))->___m_coreState_1))->___m_defaultContextAction_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&(&V_0)->___U3CU3Et__builder_1))->___m_task_2), (void*)NULL);
		#endif
		(&V_0)->___U3CU3E4__this_2 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_0)->___U3CU3E4__this_2), (void*)__this);
		(&V_0)->___U3CU3E1__state_0 = (-1);
		AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D* L_1 = (&(&V_0)->___U3CU3Et__builder_1);
		AsyncVoidMethodBuilder_Start_TisU3CGenerateTargetItemsU3Ed__32_t022CBBF6C6A16E5E4426916B9827B634513DE9CC_mBCA1E50253ABC84F73050E99DA68775726AD0F5D(L_1, (&V_0), AsyncVoidMethodBuilder_Start_TisU3CGenerateTargetItemsU3Ed__32_t022CBBF6C6A16E5E4426916B9827B634513DE9CC_mBCA1E50253ABC84F73050E99DA68775726AD0F5D_RuntimeMethod_var);
		return;
	}
}
// TargetFacade TargetHandler::CreateTargetFacade(Target)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TargetFacade_tAA52A697AACAC6BBC707F8B97B5975CD124D9CB1* TargetHandler_CreateTargetFacade_m67536F4040123449F003797A7E2D0C5E4536C91A (TargetHandler_t26EBF84B13B13596F2259A92408AE301B247E751* __this, Target_t5E0C0864CEA07701AF639C0AFAC19928DB873FC5* ___target0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisTargetFacade_tAA52A697AACAC6BBC707F8B97B5975CD124D9CB1_mA95C94F77A14A1DB93AC5D1A5402EF7976A868C9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m8CC4225774108D732B4BF9D4B204835A2DBA6EC5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		s_Il2CppMethodInitialized = true;
	}
	String_t* G_B2_0 = NULL;
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* G_B2_1 = NULL;
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* G_B2_2 = NULL;
	String_t* G_B1_0 = NULL;
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* G_B1_1 = NULL;
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* G_B1_2 = NULL;
	{
		// GameObject targetObject = Instantiate(targetObjectPrefab, targetObjectsParentTransforms[0], false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___targetObjectPrefab_12;
		TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24* L_1 = __this->___targetObjectsParentTransforms_13;
		NullCheck(L_1);
		int32_t L_2 = 0;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_3 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4;
		L_4 = Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m8CC4225774108D732B4BF9D4B204835A2DBA6EC5(L_0, L_3, (bool)0, Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m8CC4225774108D732B4BF9D4B204835A2DBA6EC5_RuntimeMethod_var);
		// targetObject.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_5 = L_4;
		NullCheck(L_5);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_5, (bool)1, NULL);
		// targetObject.name = $"{target.Name}";
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_6 = L_5;
		Target_t5E0C0864CEA07701AF639C0AFAC19928DB873FC5* L_7 = ___target0;
		NullCheck(L_7);
		String_t* L_8 = L_7->___Name_0;
		String_t* L_9 = L_8;
		G_B1_0 = L_9;
		G_B1_1 = L_6;
		G_B1_2 = L_6;
		if (L_9)
		{
			G_B2_0 = L_9;
			G_B2_1 = L_6;
			G_B2_2 = L_6;
			goto IL_002b;
		}
	}
	{
		G_B2_0 = _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
		G_B2_1 = G_B1_1;
		G_B2_2 = G_B1_2;
	}

IL_002b:
	{
		NullCheck(G_B2_1);
		Object_set_name_mC79E6DC8FFD72479C90F0C4CC7F42A0FEAF5AE47(G_B2_1, G_B2_0, NULL);
		// targetObject.transform.localPosition = target.Position;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_10 = G_B2_2;
		NullCheck(L_10);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_11;
		L_11 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_10, NULL);
		Target_t5E0C0864CEA07701AF639C0AFAC19928DB873FC5* L_12 = ___target0;
		NullCheck(L_12);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13 = L_12->___Position_1;
		NullCheck(L_11);
		Transform_set_localPosition_mDE1C997F7D79C0885210B7732B4BA50EE7D73134(L_11, L_13, NULL);
		// TargetFacade targetData = targetObject.GetComponent<TargetFacade>();
		NullCheck(L_10);
		TargetFacade_tAA52A697AACAC6BBC707F8B97B5975CD124D9CB1* L_14;
		L_14 = GameObject_GetComponent_TisTargetFacade_tAA52A697AACAC6BBC707F8B97B5975CD124D9CB1_mA95C94F77A14A1DB93AC5D1A5402EF7976A868C9(L_10, GameObject_GetComponent_TisTargetFacade_tAA52A697AACAC6BBC707F8B97B5975CD124D9CB1_mA95C94F77A14A1DB93AC5D1A5402EF7976A868C9_RuntimeMethod_var);
		// targetData.Name = target.Name;
		TargetFacade_tAA52A697AACAC6BBC707F8B97B5975CD124D9CB1* L_15 = L_14;
		Target_t5E0C0864CEA07701AF639C0AFAC19928DB873FC5* L_16 = ___target0;
		NullCheck(L_16);
		String_t* L_17 = L_16->___Name_0;
		NullCheck(L_15);
		L_15->___Name_4 = L_17;
		Il2CppCodeGenWriteBarrier((void**)(&L_15->___Name_4), (void*)L_17);
		// return targetData;
		return L_15;
	}
}
// System.Void TargetHandler::FillDropdownWithTargetItems()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TargetHandler_FillDropdownWithTargetItems_mBA0544F9D4B121606039D902695E4F7092A9DC7D (TargetHandler_t26EBF84B13B13596F2259A92408AE301B247E751* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_Select_TisTargetFacade_tAA52A697AACAC6BBC707F8B97B5975CD124D9CB1_TisOptionData_tFDFBCB4A5FB860E95AE46FDAC112DB4140A8525E_m28F07A67DD36131343CD268CC29CCBD8DF67ABF1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_ToList_TisOptionData_tFDFBCB4A5FB860E95AE46FDAC112DB4140A8525E_mE82209F24B9E56F232FFEDC8CCB5D4E59D8EED30_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m43EBD82C27E159FCDA48274F7B0834E8FFA3BFA6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m865474A9CADD1F2CBF3E1D44253129BCDAAE9CFC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m27D3CC24299A5914B982AA443D26A73093D96963_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_2_t3D46D586EBA225BB058345919E08F21E6E068C13_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_m282A9362896D76C23F2DE587B3DAED300C1B6C30_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3CFillDropdownWithTargetItemsU3Eb__34_0_mA9FB680F89D1D6EA2B73BB78265A1986D10B77A5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t70AD3AFEE444A985AD7890EC330EE5AF8DAF2A47_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	List_1_tCADFA900711C24701A9C70EE674B91FC45D42A52* V_0 = NULL;
	Enumerator_t8B20BFEE313F615312F7EC1F77EE57DDFDBBEE8D V_1;
	memset((&V_1), 0, sizeof(V_1));
	Func_2_t3D46D586EBA225BB058345919E08F21E6E068C13* G_B2_0 = NULL;
	List_1_tD7576C87B68BC6CE723331751C2CE61223447FBE* G_B2_1 = NULL;
	Func_2_t3D46D586EBA225BB058345919E08F21E6E068C13* G_B1_0 = NULL;
	List_1_tD7576C87B68BC6CE723331751C2CE61223447FBE* G_B1_1 = NULL;
	{
		// List<TMP_Dropdown.OptionData> targetFacadeOptionData =
		//     currentTargetItems.Select(x => new TMP_Dropdown.OptionData {
		//         text = $"{x.Name}"
		//     }).ToList();
		List_1_tD7576C87B68BC6CE723331751C2CE61223447FBE* L_0 = __this->___currentTargetItems_14;
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_t70AD3AFEE444A985AD7890EC330EE5AF8DAF2A47_il2cpp_TypeInfo_var);
		Func_2_t3D46D586EBA225BB058345919E08F21E6E068C13* L_1 = ((U3CU3Ec_t70AD3AFEE444A985AD7890EC330EE5AF8DAF2A47_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t70AD3AFEE444A985AD7890EC330EE5AF8DAF2A47_il2cpp_TypeInfo_var))->___U3CU3E9__34_0_1;
		Func_2_t3D46D586EBA225BB058345919E08F21E6E068C13* L_2 = L_1;
		G_B1_0 = L_2;
		G_B1_1 = L_0;
		if (L_2)
		{
			G_B2_0 = L_2;
			G_B2_1 = L_0;
			goto IL_0025;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_t70AD3AFEE444A985AD7890EC330EE5AF8DAF2A47_il2cpp_TypeInfo_var);
		U3CU3Ec_t70AD3AFEE444A985AD7890EC330EE5AF8DAF2A47* L_3 = ((U3CU3Ec_t70AD3AFEE444A985AD7890EC330EE5AF8DAF2A47_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t70AD3AFEE444A985AD7890EC330EE5AF8DAF2A47_il2cpp_TypeInfo_var))->___U3CU3E9_0;
		Func_2_t3D46D586EBA225BB058345919E08F21E6E068C13* L_4 = (Func_2_t3D46D586EBA225BB058345919E08F21E6E068C13*)il2cpp_codegen_object_new(Func_2_t3D46D586EBA225BB058345919E08F21E6E068C13_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		Func_2__ctor_m7C41A97BBBCE52B7BC10772C8DFE11EC79C08548(L_4, L_3, (intptr_t)((void*)U3CU3Ec_U3CFillDropdownWithTargetItemsU3Eb__34_0_mA9FB680F89D1D6EA2B73BB78265A1986D10B77A5_RuntimeMethod_var), NULL);
		Func_2_t3D46D586EBA225BB058345919E08F21E6E068C13* L_5 = L_4;
		((U3CU3Ec_t70AD3AFEE444A985AD7890EC330EE5AF8DAF2A47_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t70AD3AFEE444A985AD7890EC330EE5AF8DAF2A47_il2cpp_TypeInfo_var))->___U3CU3E9__34_0_1 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_t70AD3AFEE444A985AD7890EC330EE5AF8DAF2A47_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t70AD3AFEE444A985AD7890EC330EE5AF8DAF2A47_il2cpp_TypeInfo_var))->___U3CU3E9__34_0_1), (void*)L_5);
		G_B2_0 = L_5;
		G_B2_1 = G_B1_1;
	}

IL_0025:
	{
		RuntimeObject* L_6;
		L_6 = Enumerable_Select_TisTargetFacade_tAA52A697AACAC6BBC707F8B97B5975CD124D9CB1_TisOptionData_tFDFBCB4A5FB860E95AE46FDAC112DB4140A8525E_m28F07A67DD36131343CD268CC29CCBD8DF67ABF1(G_B2_1, G_B2_0, Enumerable_Select_TisTargetFacade_tAA52A697AACAC6BBC707F8B97B5975CD124D9CB1_TisOptionData_tFDFBCB4A5FB860E95AE46FDAC112DB4140A8525E_m28F07A67DD36131343CD268CC29CCBD8DF67ABF1_RuntimeMethod_var);
		List_1_tCADFA900711C24701A9C70EE674B91FC45D42A52* L_7;
		L_7 = Enumerable_ToList_TisOptionData_tFDFBCB4A5FB860E95AE46FDAC112DB4140A8525E_mE82209F24B9E56F232FFEDC8CCB5D4E59D8EED30(L_6, Enumerable_ToList_TisOptionData_tFDFBCB4A5FB860E95AE46FDAC112DB4140A8525E_mE82209F24B9E56F232FFEDC8CCB5D4E59D8EED30_RuntimeMethod_var);
		V_0 = L_7;
		// foreach (var m in currentTargetItems) {
		List_1_tD7576C87B68BC6CE723331751C2CE61223447FBE* L_8 = __this->___currentTargetItems_14;
		NullCheck(L_8);
		Enumerator_t8B20BFEE313F615312F7EC1F77EE57DDFDBBEE8D L_9;
		L_9 = List_1_GetEnumerator_m282A9362896D76C23F2DE587B3DAED300C1B6C30(L_8, List_1_GetEnumerator_m282A9362896D76C23F2DE587B3DAED300C1B6C30_RuntimeMethod_var);
		V_1 = L_9;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_005a:
			{// begin finally (depth: 1)
				Enumerator_Dispose_m43EBD82C27E159FCDA48274F7B0834E8FFA3BFA6((&V_1), Enumerator_Dispose_m43EBD82C27E159FCDA48274F7B0834E8FFA3BFA6_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_004f_1;
			}

IL_003e_1:
			{
				// foreach (var m in currentTargetItems) {
				TargetFacade_tAA52A697AACAC6BBC707F8B97B5975CD124D9CB1* L_10;
				L_10 = Enumerator_get_Current_m27D3CC24299A5914B982AA443D26A73093D96963_inline((&V_1), Enumerator_get_Current_m27D3CC24299A5914B982AA443D26A73093D96963_RuntimeMethod_var);
				// Debug.Log(m.Name);
				NullCheck(L_10);
				String_t* L_11 = L_10->___Name_4;
				il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
				Debug_Log_m86567BCF22BBE7809747817453CACA0E41E68219(L_11, NULL);
			}

IL_004f_1:
			{
				// foreach (var m in currentTargetItems) {
				bool L_12;
				L_12 = Enumerator_MoveNext_m865474A9CADD1F2CBF3E1D44253129BCDAAE9CFC((&V_1), Enumerator_MoveNext_m865474A9CADD1F2CBF3E1D44253129BCDAAE9CFC_RuntimeMethod_var);
				if (L_12)
				{
					goto IL_003e_1;
				}
			}
			{
				goto IL_0068;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0068:
	{
		// targetDataDropdown1.ClearOptions();
		TMP_Dropdown_t73B37BFDA0D005451C7B750938AFB1748E5EA504* L_13 = __this->___targetDataDropdown1_5;
		NullCheck(L_13);
		TMP_Dropdown_ClearOptions_m9888C23BC3033268E5C2D8613C0854661E7BDEB5(L_13, NULL);
		// targetDataDropdown1.AddOptions(targetFacadeOptionData);
		TMP_Dropdown_t73B37BFDA0D005451C7B750938AFB1748E5EA504* L_14 = __this->___targetDataDropdown1_5;
		List_1_tCADFA900711C24701A9C70EE674B91FC45D42A52* L_15 = V_0;
		NullCheck(L_14);
		TMP_Dropdown_AddOptions_m0552A59BC909364951E1661FABADBC076715E4DD(L_14, L_15, NULL);
		// targetDataDropdown2.ClearOptions();
		TMP_Dropdown_t73B37BFDA0D005451C7B750938AFB1748E5EA504* L_16 = __this->___targetDataDropdown2_6;
		NullCheck(L_16);
		TMP_Dropdown_ClearOptions_m9888C23BC3033268E5C2D8613C0854661E7BDEB5(L_16, NULL);
		// targetDataDropdown2.AddOptions(targetFacadeOptionData);
		TMP_Dropdown_t73B37BFDA0D005451C7B750938AFB1748E5EA504* L_17 = __this->___targetDataDropdown2_6;
		List_1_tCADFA900711C24701A9C70EE674B91FC45D42A52* L_18 = V_0;
		NullCheck(L_17);
		TMP_Dropdown_AddOptions_m0552A59BC909364951E1661FABADBC076715E4DD(L_17, L_18, NULL);
		// targetDataDropdown3.ClearOptions();
		TMP_Dropdown_t73B37BFDA0D005451C7B750938AFB1748E5EA504* L_19 = __this->___targetDataDropdown3_7;
		NullCheck(L_19);
		TMP_Dropdown_ClearOptions_m9888C23BC3033268E5C2D8613C0854661E7BDEB5(L_19, NULL);
		// targetDataDropdown3.AddOptions(targetFacadeOptionData);
		TMP_Dropdown_t73B37BFDA0D005451C7B750938AFB1748E5EA504* L_20 = __this->___targetDataDropdown3_7;
		List_1_tCADFA900711C24701A9C70EE674B91FC45D42A52* L_21 = V_0;
		NullCheck(L_20);
		TMP_Dropdown_AddOptions_m0552A59BC909364951E1661FABADBC076715E4DD(L_20, L_21, NULL);
		// }
		return;
	}
}
// UnityEngine.Vector3 TargetHandler::GetCurrentlySelectedTarget(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 TargetHandler_GetCurrentlySelectedTarget_m7D5B2EEF55CB81E3298BBEFFD5156D8F05212847 (TargetHandler_t26EBF84B13B13596F2259A92408AE301B247E751* __this, int32_t ___selectedValue0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_mE1369B2DAE3EB26605AEE44BB961736D985796A5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m669D5F7031367A0D30C4203C8A38F02A0B50454D_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (selectedValue >= currentTargetItems.Count) {
		int32_t L_0 = ___selectedValue0;
		List_1_tD7576C87B68BC6CE723331751C2CE61223447FBE* L_1 = __this->___currentTargetItems_14;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = List_1_get_Count_mE1369B2DAE3EB26605AEE44BB961736D985796A5_inline(L_1, List_1_get_Count_mE1369B2DAE3EB26605AEE44BB961736D985796A5_RuntimeMethod_var);
		if ((((int32_t)L_0) < ((int32_t)L_2)))
		{
			goto IL_0014;
		}
	}
	{
		// return Vector3.zero;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = Vector3_get_zero_m9D7F7B580B5A276411267E96AA3425736D9BDC83_inline(NULL);
		return L_3;
	}

IL_0014:
	{
		// return currentTargetItems[selectedValue].transform.position;
		List_1_tD7576C87B68BC6CE723331751C2CE61223447FBE* L_4 = __this->___currentTargetItems_14;
		int32_t L_5 = ___selectedValue0;
		NullCheck(L_4);
		TargetFacade_tAA52A697AACAC6BBC707F8B97B5975CD124D9CB1* L_6;
		L_6 = List_1_get_Item_m669D5F7031367A0D30C4203C8A38F02A0B50454D(L_4, L_5, List_1_get_Item_m669D5F7031367A0D30C4203C8A38F02A0B50454D_RuntimeMethod_var);
		NullCheck(L_6);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_7;
		L_7 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_6, NULL);
		NullCheck(L_7);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8;
		L_8 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_7, NULL);
		return L_8;
	}
}
// System.Void TargetHandler::SetSelectedTargetPositionWithDropdown(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TargetHandler_SetSelectedTargetPositionWithDropdown_mF065641E0F1AA3710569A24A543535AC7A269CE3 (TargetHandler_t26EBF84B13B13596F2259A92408AE301B247E751* __this, int32_t ___selectedValue0, const RuntimeMethod* method) 
{
	{
		// navigationController.TargetPosition = GetCurrentlySelectedTarget(selectedValue);
		NavigationController_t70EC9C7C9A12D38AD5902657C952B7B5B09985B8* L_0 = __this->___navigationController_4;
		int32_t L_1 = ___selectedValue0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = TargetHandler_GetCurrentlySelectedTarget_m7D5B2EEF55CB81E3298BBEFFD5156D8F05212847(__this, L_1, NULL);
		NullCheck(L_0);
		NavigationController_set_TargetPosition_m0673F8F68766F112505E5C70114786D362CCCA70_inline(L_0, L_2, NULL);
		// }
		return;
	}
}
// System.Void TargetHandler::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TargetHandler__ctor_m4960DCAB72C0C58A6E03EA5ED0DE395C8B8B34D4 (TargetHandler_t26EBF84B13B13596F2259A92408AE301B247E751* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m512FB9059CA3B6A06A5E85FC5470FB1543A1D4A4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tD7576C87B68BC6CE723331751C2CE61223447FBE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private List<TargetFacade> currentTargetItems = new List<TargetFacade>(); /// List to store current targets
		List_1_tD7576C87B68BC6CE723331751C2CE61223447FBE* L_0 = (List_1_tD7576C87B68BC6CE723331751C2CE61223447FBE*)il2cpp_codegen_object_new(List_1_tD7576C87B68BC6CE723331751C2CE61223447FBE_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		List_1__ctor_m512FB9059CA3B6A06A5E85FC5470FB1543A1D4A4(L_0, List_1__ctor_m512FB9059CA3B6A06A5E85FC5470FB1543A1D4A4_RuntimeMethod_var);
		__this->___currentTargetItems_14 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___currentTargetItems_14), (void*)L_0);
		// Color32 unired = new Color32(196,0,15,60); /// color of the red used by the university
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_1;
		memset((&L_1), 0, sizeof(L_1));
		Color32__ctor_mC9C6B443F0C7CA3F8B174158B2AF6F05E18EAC4E_inline((&L_1), (uint8_t)((int32_t)196), (uint8_t)0, (uint8_t)((int32_t)15), (uint8_t)((int32_t)60), /*hidden argument*/NULL);
		__this->___unired_19 = L_1;
		// Color32 uniblue = new Color32(1,0,47,107); /// color of the blue used by the university
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_2;
		memset((&L_2), 0, sizeof(L_2));
		Color32__ctor_mC9C6B443F0C7CA3F8B174158B2AF6F05E18EAC4E_inline((&L_2), (uint8_t)1, (uint8_t)0, (uint8_t)((int32_t)47), (uint8_t)((int32_t)107), /*hidden argument*/NULL);
		__this->___uniblue_20 = L_2;
		// private string outputstring = ""; /// String for the JSON ulpoaded to server when save gets clicked
		__this->___outputstring_22 = _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___outputstring_22), (void*)_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void TargetHandler/<sendjson>d__23::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CsendjsonU3Ed__23__ctor_m4F2CDECB0E0FCCC5D42AF497AA6FFA2BC3A6005C (U3CsendjsonU3Ed__23_tE0AAF5BB9AB2FBB6848F337C0DD6B12894900758* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void TargetHandler/<sendjson>d__23::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CsendjsonU3Ed__23_System_IDisposable_Dispose_m4736B28C0ADB9F5E8346BE1F1A4AD35CF6E1BBC7 (U3CsendjsonU3Ed__23_tE0AAF5BB9AB2FBB6848F337C0DD6B12894900758* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean TargetHandler/<sendjson>d__23::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CsendjsonU3Ed__23_MoveNext_mD04AB260EFBC73686E51B0BB60FEFC1F6FC31ECF (U3CsendjsonU3Ed__23_tE0AAF5BB9AB2FBB6848F337C0DD6B12894900758* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0D826BE62D2522578D59617EC851B24D0305671F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3B89A1F5430D44B5B62ABF2C78062B5AFF891013);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5B58EBE31E594BF8FA4BEA3CD075473149322B18);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral64058CC688A96A90239811EF06C9D20DB0499C3E);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	TargetHandler_t26EBF84B13B13596F2259A92408AE301B247E751* V_1 = NULL;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		TargetHandler_t26EBF84B13B13596F2259A92408AE301B247E751* L_1 = __this->___U3CU3E4__this_2;
		V_1 = L_1;
		int32_t L_2 = V_0;
		if (!L_2)
		{
			goto IL_0017;
		}
	}
	{
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_0063;
		}
	}
	{
		return (bool)0;
	}

IL_0017:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// UnityWebRequest www = UnityWebRequest.Put(SaveURL, outputstring);
		TargetHandler_t26EBF84B13B13596F2259A92408AE301B247E751* L_4 = V_1;
		NullCheck(L_4);
		String_t* L_5 = L_4->___outputstring_22;
		UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* L_6;
		L_6 = UnityWebRequest_Put_mE7E6896080B10B3F70626EC3BF66274148232CDA(_stringLiteral3B89A1F5430D44B5B62ABF2C78062B5AFF891013, L_5, NULL);
		__this->___U3CwwwU3E5__2_3 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CwwwU3E5__2_3), (void*)L_6);
		// www.SetRequestHeader ("Content-Type", "application/json");
		UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* L_7 = __this->___U3CwwwU3E5__2_3;
		NullCheck(L_7);
		UnityWebRequest_SetRequestHeader_m099734EB787B7269B62AB2236A5A4F7D35AF8BC5(L_7, _stringLiteral5B58EBE31E594BF8FA4BEA3CD075473149322B18, _stringLiteral64058CC688A96A90239811EF06C9D20DB0499C3E, NULL);
		// yield return www.SendWebRequest();
		UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* L_8 = __this->___U3CwwwU3E5__2_3;
		NullCheck(L_8);
		UnityWebRequestAsyncOperation_t14BE94558FF3A2CFC2EFBE2511A3A88252042B8C* L_9;
		L_9 = UnityWebRequest_SendWebRequest_mA3CD13983BAA5074A0640EDD661B1E46E6DB6C13(L_8, NULL);
		__this->___U3CU3E2__current_1 = L_9;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_9);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_0063:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// if (www.isNetworkError || www.isHttpError)
		UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* L_10 = __this->___U3CwwwU3E5__2_3;
		NullCheck(L_10);
		bool L_11;
		L_11 = UnityWebRequest_get_isNetworkError_m036684411466688E71E67CDD3703BAC9035A56F0(L_10, NULL);
		if (L_11)
		{
			goto IL_0084;
		}
	}
	{
		UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* L_12 = __this->___U3CwwwU3E5__2_3;
		NullCheck(L_12);
		bool L_13;
		L_13 = UnityWebRequest_get_isHttpError_m945BA480A179E05CC9659846414D9521ED648ED5(L_12, NULL);
		if (!L_13)
		{
			goto IL_0096;
		}
	}

IL_0084:
	{
		// Debug.Log(www.error);
		UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* L_14 = __this->___U3CwwwU3E5__2_3;
		NullCheck(L_14);
		String_t* L_15;
		L_15 = UnityWebRequest_get_error_m20A5D813ED59118B7AA1D1E2EB5250178B1F5B6F(L_14, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m86567BCF22BBE7809747817453CACA0E41E68219(L_15, NULL);
		goto IL_00a0;
	}

IL_0096:
	{
		// Debug.Log("Form upload complete!");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m86567BCF22BBE7809747817453CACA0E41E68219(_stringLiteral0D826BE62D2522578D59617EC851B24D0305671F, NULL);
	}

IL_00a0:
	{
		// }
		return (bool)0;
	}
}
// System.Object TargetHandler/<sendjson>d__23::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CsendjsonU3Ed__23_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_mD4593EC16A31D521543CCE1E87B6B12655D9362E (U3CsendjsonU3Ed__23_tE0AAF5BB9AB2FBB6848F337C0DD6B12894900758* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void TargetHandler/<sendjson>d__23::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CsendjsonU3Ed__23_System_Collections_IEnumerator_Reset_mA32F8B09A89835CE40096F681746DBB863759E0D (U3CsendjsonU3Ed__23_tE0AAF5BB9AB2FBB6848F337C0DD6B12894900758* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CsendjsonU3Ed__23_System_Collections_IEnumerator_Reset_mA32F8B09A89835CE40096F681746DBB863759E0D_RuntimeMethod_var)));
	}
}
// System.Object TargetHandler/<sendjson>d__23::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CsendjsonU3Ed__23_System_Collections_IEnumerator_get_Current_mB19A29769E08AF57639C6A271D428F8027FCF792 (U3CsendjsonU3Ed__23_tE0AAF5BB9AB2FBB6848F337C0DD6B12894900758* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
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
// System.Void TargetHandler/<asyncGetRequest>d__31::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CasyncGetRequestU3Ed__31_MoveNext_m2FDEFDFA9130EC4D73D65537D9C3C33DF5B409BC (U3CasyncGetRequestU3Ed__31_t3A8924764B9CFA6477D0B1E6C51AE990E58B4F07* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisYieldAwaiter_t5F0A81DC85227C01FFC38D53139B5C19D920B52A_TisU3CasyncGetRequestU3Ed__31_t3A8924764B9CFA6477D0B1E6C51AE990E58B4F07_mEAB7EF9DB43C271471248DA9AF3BAE59D6AEBD00_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_SetResult_mB79121C0ACAC704500FAA7350ED0FE6604DDA05E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DownloadHandlerBuffer_t34C626F6513FA9A44FDDDEE85455CF2CD9DA5974_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAA36BB4523CE39D7BF5CEF3CFA56B6F5EA9E505B);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	String_t* V_1 = NULL;
	YieldAwaiter_t5F0A81DC85227C01FFC38D53139B5C19D920B52A V_2;
	memset((&V_2), 0, sizeof(V_2));
	YieldAwaitable_tFEA898DB9022A953958C3CF531E1477D135D3DAB V_3;
	memset((&V_3), 0, sizeof(V_3));
	Exception_t* V_4 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
	}
	try
	{// begin try (depth: 1)
		{
			int32_t L_1 = V_0;
			if (!L_1)
			{
				goto IL_0072_1;
			}
		}
		{
			// UnityWebRequest request = new UnityWebRequest(LoadURL);
			UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* L_2 = (UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F*)il2cpp_codegen_object_new(UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F_il2cpp_TypeInfo_var);
			NullCheck(L_2);
			UnityWebRequest__ctor_mBCA80EFFB8AF50480F0093BC8CB34EDB4337A5FB(L_2, _stringLiteralAA36BB4523CE39D7BF5CEF3CFA56B6F5EA9E505B, NULL);
			__this->___U3CrequestU3E5__2_2 = L_2;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CrequestU3E5__2_2), (void*)L_2);
			// request.downloadHandler = new DownloadHandlerBuffer();
			UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* L_3 = __this->___U3CrequestU3E5__2_2;
			DownloadHandlerBuffer_t34C626F6513FA9A44FDDDEE85455CF2CD9DA5974* L_4 = (DownloadHandlerBuffer_t34C626F6513FA9A44FDDDEE85455CF2CD9DA5974*)il2cpp_codegen_object_new(DownloadHandlerBuffer_t34C626F6513FA9A44FDDDEE85455CF2CD9DA5974_il2cpp_TypeInfo_var);
			NullCheck(L_4);
			DownloadHandlerBuffer__ctor_m5EE7C9E8AB468B2B937A7C9C66B4176A884147AF(L_4, NULL);
			NullCheck(L_3);
			UnityWebRequest_set_downloadHandler_m6CB94492012097DFC44E5773D1A627753788292F(L_3, L_4, NULL);
			// request.SendWebRequest();
			UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* L_5 = __this->___U3CrequestU3E5__2_2;
			NullCheck(L_5);
			UnityWebRequestAsyncOperation_t14BE94558FF3A2CFC2EFBE2511A3A88252042B8C* L_6;
			L_6 = UnityWebRequest_SendWebRequest_mA3CD13983BAA5074A0640EDD661B1E46E6DB6C13(L_5, NULL);
			goto IL_0095_1;
		}

IL_0038_1:
		{
			// await Task.Yield();
			il2cpp_codegen_runtime_class_init_inline(Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_il2cpp_TypeInfo_var);
			YieldAwaitable_tFEA898DB9022A953958C3CF531E1477D135D3DAB L_7;
			L_7 = Task_Yield_m243FF1482B112E594401BAC859F9084753C4E653(NULL);
			V_3 = L_7;
			YieldAwaiter_t5F0A81DC85227C01FFC38D53139B5C19D920B52A L_8;
			L_8 = YieldAwaitable_GetAwaiter_m359A05B8C1B9F3F1E9CAE29AD231C0987718DE5E((&V_3), NULL);
			V_2 = L_8;
			bool L_9;
			L_9 = YieldAwaiter_get_IsCompleted_m783B6E67654FDBF490A65AC59972AF6B985A9286((&V_2), NULL);
			if (L_9)
			{
				goto IL_008e_1;
			}
		}
		{
			int32_t L_10 = 0;
			V_0 = L_10;
			__this->___U3CU3E1__state_0 = L_10;
			YieldAwaiter_t5F0A81DC85227C01FFC38D53139B5C19D920B52A L_11 = V_2;
			__this->___U3CU3Eu__1_3 = L_11;
			AsyncTaskMethodBuilder_1_tA28B0962049DC249BEC0054E2394B1962E28E90E* L_12 = (&__this->___U3CU3Et__builder_1);
			AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisYieldAwaiter_t5F0A81DC85227C01FFC38D53139B5C19D920B52A_TisU3CasyncGetRequestU3Ed__31_t3A8924764B9CFA6477D0B1E6C51AE990E58B4F07_mEAB7EF9DB43C271471248DA9AF3BAE59D6AEBD00(L_12, (&V_2), __this, AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisYieldAwaiter_t5F0A81DC85227C01FFC38D53139B5C19D920B52A_TisU3CasyncGetRequestU3Ed__31_t3A8924764B9CFA6477D0B1E6C51AE990E58B4F07_mEAB7EF9DB43C271471248DA9AF3BAE59D6AEBD00_RuntimeMethod_var);
			goto IL_011c;
		}

IL_0072_1:
		{
			YieldAwaiter_t5F0A81DC85227C01FFC38D53139B5C19D920B52A L_13 = __this->___U3CU3Eu__1_3;
			V_2 = L_13;
			YieldAwaiter_t5F0A81DC85227C01FFC38D53139B5C19D920B52A* L_14 = (&__this->___U3CU3Eu__1_3);
			il2cpp_codegen_initobj(L_14, sizeof(YieldAwaiter_t5F0A81DC85227C01FFC38D53139B5C19D920B52A));
			int32_t L_15 = (-1);
			V_0 = L_15;
			__this->___U3CU3E1__state_0 = L_15;
		}

IL_008e_1:
		{
			YieldAwaiter_GetResult_m83C9B35D4BBEB09AC5B560912436454D69794F07((&V_2), NULL);
		}

IL_0095_1:
		{
			// while(!request.isDone){
			UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* L_16 = __this->___U3CrequestU3E5__2_2;
			NullCheck(L_16);
			bool L_17;
			L_17 = UnityWebRequest_get_isDone_m3079B53A1CAFD8D5B334C635761E7B7E10B14123(L_16, NULL);
			if (!L_17)
			{
				goto IL_0038_1;
			}
		}
		{
			// if (request.result == UnityWebRequest.Result.ConnectionError)
			UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* L_18 = __this->___U3CrequestU3E5__2_2;
			NullCheck(L_18);
			int32_t L_19;
			L_19 = UnityWebRequest_get_result_mEF83848C5FCFB5E307CE4B57E42BF02FC9AED449(L_18, NULL);
			if ((!(((uint32_t)L_19) == ((uint32_t)2))))
			{
				goto IL_00ce_1;
			}
		}
		{
			// Debug.Log(request.error);
			UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* L_20 = __this->___U3CrequestU3E5__2_2;
			NullCheck(L_20);
			String_t* L_21;
			L_21 = UnityWebRequest_get_error_m20A5D813ED59118B7AA1D1E2EB5250178B1F5B6F(L_20, NULL);
			il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
			Debug_Log_m86567BCF22BBE7809747817453CACA0E41E68219(L_21, NULL);
			// return request.error;
			UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* L_22 = __this->___U3CrequestU3E5__2_2;
			NullCheck(L_22);
			String_t* L_23;
			L_23 = UnityWebRequest_get_error_m20A5D813ED59118B7AA1D1E2EB5250178B1F5B6F(L_22, NULL);
			V_1 = L_23;
			goto IL_0101;
		}

IL_00ce_1:
		{
			// return request.downloadHandler.text;
			UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* L_24 = __this->___U3CrequestU3E5__2_2;
			NullCheck(L_24);
			DownloadHandler_t1B56C7D3F65D97A1E4B566A14A1E783EA8AE4EBB* L_25;
			L_25 = UnityWebRequest_get_downloadHandler_m1AA91B23D9D594A4F4FE2975FC356C508528F1D5(L_24, NULL);
			NullCheck(L_25);
			String_t* L_26;
			L_26 = DownloadHandler_get_text_mA6DE5CB2647A21E577B963708DC3D0DA4DBFE7D8(L_25, NULL);
			V_1 = L_26;
			goto IL_0101;
		}
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_00e1;
		}
		throw e;
	}

CATCH_00e1:
	{// begin catch(System.Exception)
		V_4 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));
		__this->___U3CU3E1__state_0 = ((int32_t)-2);
		__this->___U3CrequestU3E5__2_2 = (UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CrequestU3E5__2_2), (void*)(UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F*)NULL);
		AsyncTaskMethodBuilder_1_tA28B0962049DC249BEC0054E2394B1962E28E90E* L_27 = (&__this->___U3CU3Et__builder_1);
		Exception_t* L_28 = V_4;
		AsyncTaskMethodBuilder_1_SetException_m897218C2DB8D7BA446EB263573085805B8F0638C(L_27, L_28, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&AsyncTaskMethodBuilder_1_SetException_m897218C2DB8D7BA446EB263573085805B8F0638C_RuntimeMethod_var)));
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_011c;
	}// end catch (depth: 1)

IL_0101:
	{
		// }
		__this->___U3CU3E1__state_0 = ((int32_t)-2);
		__this->___U3CrequestU3E5__2_2 = (UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CrequestU3E5__2_2), (void*)(UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F*)NULL);
		AsyncTaskMethodBuilder_1_tA28B0962049DC249BEC0054E2394B1962E28E90E* L_29 = (&__this->___U3CU3Et__builder_1);
		String_t* L_30 = V_1;
		AsyncTaskMethodBuilder_1_SetResult_mB79121C0ACAC704500FAA7350ED0FE6604DDA05E(L_29, L_30, AsyncTaskMethodBuilder_1_SetResult_mB79121C0ACAC704500FAA7350ED0FE6604DDA05E_RuntimeMethod_var);
	}

IL_011c:
	{
		return;
	}
}
IL2CPP_EXTERN_C  void U3CasyncGetRequestU3Ed__31_MoveNext_m2FDEFDFA9130EC4D73D65537D9C3C33DF5B409BC_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	U3CasyncGetRequestU3Ed__31_t3A8924764B9CFA6477D0B1E6C51AE990E58B4F07* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<U3CasyncGetRequestU3Ed__31_t3A8924764B9CFA6477D0B1E6C51AE990E58B4F07*>(__this + _offset);
	U3CasyncGetRequestU3Ed__31_MoveNext_m2FDEFDFA9130EC4D73D65537D9C3C33DF5B409BC(_thisAdjusted, method);
}
// System.Void TargetHandler/<asyncGetRequest>d__31::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CasyncGetRequestU3Ed__31_SetStateMachine_m0C1C4967A45DFD18F989B2C748ABB73129145656 (U3CasyncGetRequestU3Ed__31_t3A8924764B9CFA6477D0B1E6C51AE990E58B4F07* __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_SetStateMachine_mE4D48B78E50CA2A3650A856ACF86A3CFBA249C30_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		AsyncTaskMethodBuilder_1_tA28B0962049DC249BEC0054E2394B1962E28E90E* L_0 = (&__this->___U3CU3Et__builder_1);
		RuntimeObject* L_1 = ___stateMachine0;
		AsyncTaskMethodBuilder_1_SetStateMachine_mE4D48B78E50CA2A3650A856ACF86A3CFBA249C30(L_0, L_1, AsyncTaskMethodBuilder_1_SetStateMachine_mE4D48B78E50CA2A3650A856ACF86A3CFBA249C30_RuntimeMethod_var);
		return;
	}
}
IL2CPP_EXTERN_C  void U3CasyncGetRequestU3Ed__31_SetStateMachine_m0C1C4967A45DFD18F989B2C748ABB73129145656_AdjustorThunk (RuntimeObject* __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
{
	U3CasyncGetRequestU3Ed__31_t3A8924764B9CFA6477D0B1E6C51AE990E58B4F07* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<U3CasyncGetRequestU3Ed__31_t3A8924764B9CFA6477D0B1E6C51AE990E58B4F07*>(__this + _offset);
	U3CasyncGetRequestU3Ed__31_SetStateMachine_m0C1C4967A45DFD18F989B2C748ABB73129145656(_thisAdjusted, ___stateMachine0, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void TargetHandler/<GenerateTargetItems>d__32::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGenerateTargetItemsU3Ed__32_MoveNext_m4C59416E4F678A538716AF7D08E497893C12F86F (U3CGenerateTargetItemsU3Ed__32_t022CBBF6C6A16E5E4426916B9827B634513DE9CC* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t254638BB1FAD695D9A9542E098A189D438A000F6_TisU3CGenerateTargetItemsU3Ed__32_t022CBBF6C6A16E5E4426916B9827B634513DE9CC_m9B3E927037E3E174069A0E024ED53B2E8DB35A53_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonUtility_FromJson_TisTargetWrapper_t7CCA6EA84DFD8C48A2F98E96C300B0EE111C1DFE_m9E1E8CB15ECDE2AF98E02B109A480F9E17026AAE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mE6174CF409FF796DB81E0BC4EDC13FB84F13DA91_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskAwaiter_1_GetResult_m82A392802A854576DC9525B87B0053B56201ABB9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskAwaiter_1_get_IsCompleted_mE207C5509602B0BB59366E53CED6CC9B10A1F8A8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Task_1_GetAwaiter_m7727657658441E9D4CE9D3F8B532F9D65CB9CE1F_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	TargetHandler_t26EBF84B13B13596F2259A92408AE301B247E751* V_1 = NULL;
	String_t* V_2 = NULL;
	TaskAwaiter_1_t254638BB1FAD695D9A9542E098A189D438A000F6 V_3;
	memset((&V_3), 0, sizeof(V_3));
	TargetU5BU5D_t3617959FFC066149C517739390E51D1F9E793E6B* V_4 = NULL;
	int32_t V_5 = 0;
	Target_t5E0C0864CEA07701AF639C0AFAC19928DB873FC5* V_6 = NULL;
	Exception_t* V_7 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		TargetHandler_t26EBF84B13B13596F2259A92408AE301B247E751* L_1 = __this->___U3CU3E4__this_2;
		V_1 = L_1;
	}
	try
	{// begin try (depth: 1)
		{
			int32_t L_2 = V_0;
			if (!L_2)
			{
				goto IL_0049_1;
			}
		}
		{
			// var response = await asyncGetRequest();
			TargetHandler_t26EBF84B13B13596F2259A92408AE301B247E751* L_3 = V_1;
			NullCheck(L_3);
			Task_1_t3D7638C82ED289AF156EDBAE76842D8DF4C4A9E0* L_4;
			L_4 = TargetHandler_asyncGetRequest_m10745638E4610F8636CA64BB80F7A3BD7C286918(L_3, NULL);
			NullCheck(L_4);
			TaskAwaiter_1_t254638BB1FAD695D9A9542E098A189D438A000F6 L_5;
			L_5 = Task_1_GetAwaiter_m7727657658441E9D4CE9D3F8B532F9D65CB9CE1F(L_4, Task_1_GetAwaiter_m7727657658441E9D4CE9D3F8B532F9D65CB9CE1F_RuntimeMethod_var);
			V_3 = L_5;
			bool L_6;
			L_6 = TaskAwaiter_1_get_IsCompleted_mE207C5509602B0BB59366E53CED6CC9B10A1F8A8((&V_3), TaskAwaiter_1_get_IsCompleted_mE207C5509602B0BB59366E53CED6CC9B10A1F8A8_RuntimeMethod_var);
			if (L_6)
			{
				goto IL_0065_1;
			}
		}
		{
			int32_t L_7 = 0;
			V_0 = L_7;
			__this->___U3CU3E1__state_0 = L_7;
			TaskAwaiter_1_t254638BB1FAD695D9A9542E098A189D438A000F6 L_8 = V_3;
			__this->___U3CU3Eu__1_3 = L_8;
			Il2CppCodeGenWriteBarrier((void**)&(((&__this->___U3CU3Eu__1_3))->___m_task_0), (void*)NULL);
			AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D* L_9 = (&__this->___U3CU3Et__builder_1);
			AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t254638BB1FAD695D9A9542E098A189D438A000F6_TisU3CGenerateTargetItemsU3Ed__32_t022CBBF6C6A16E5E4426916B9827B634513DE9CC_m9B3E927037E3E174069A0E024ED53B2E8DB35A53(L_9, (&V_3), __this, AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t254638BB1FAD695D9A9542E098A189D438A000F6_TisU3CGenerateTargetItemsU3Ed__32_t022CBBF6C6A16E5E4426916B9827B634513DE9CC_m9B3E927037E3E174069A0E024ED53B2E8DB35A53_RuntimeMethod_var);
			goto IL_00f2;
		}

IL_0049_1:
		{
			TaskAwaiter_1_t254638BB1FAD695D9A9542E098A189D438A000F6 L_10 = __this->___U3CU3Eu__1_3;
			V_3 = L_10;
			TaskAwaiter_1_t254638BB1FAD695D9A9542E098A189D438A000F6* L_11 = (&__this->___U3CU3Eu__1_3);
			il2cpp_codegen_initobj(L_11, sizeof(TaskAwaiter_1_t254638BB1FAD695D9A9542E098A189D438A000F6));
			int32_t L_12 = (-1);
			V_0 = L_12;
			__this->___U3CU3E1__state_0 = L_12;
		}

IL_0065_1:
		{
			String_t* L_13;
			L_13 = TaskAwaiter_1_GetResult_m82A392802A854576DC9525B87B0053B56201ABB9((&V_3), TaskAwaiter_1_GetResult_m82A392802A854576DC9525B87B0053B56201ABB9_RuntimeMethod_var);
			V_2 = L_13;
			// targets = JsonUtility.FromJson<TargetWrapper>(response.ToString()).TargetList;
			TargetHandler_t26EBF84B13B13596F2259A92408AE301B247E751* L_14 = V_1;
			String_t* L_15 = V_2;
			NullCheck(L_15);
			String_t* L_16;
			L_16 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_15);
			TargetWrapper_t7CCA6EA84DFD8C48A2F98E96C300B0EE111C1DFE* L_17;
			L_17 = JsonUtility_FromJson_TisTargetWrapper_t7CCA6EA84DFD8C48A2F98E96C300B0EE111C1DFE_m9E1E8CB15ECDE2AF98E02B109A480F9E17026AAE(L_16, JsonUtility_FromJson_TisTargetWrapper_t7CCA6EA84DFD8C48A2F98E96C300B0EE111C1DFE_m9E1E8CB15ECDE2AF98E02B109A480F9E17026AAE_RuntimeMethod_var);
			NullCheck(L_17);
			TargetU5BU5D_t3617959FFC066149C517739390E51D1F9E793E6B* L_18 = L_17->___TargetList_0;
			NullCheck(L_14);
			L_14->___targets_15 = L_18;
			Il2CppCodeGenWriteBarrier((void**)(&L_14->___targets_15), (void*)L_18);
			// foreach (Target target in targets) {
			TargetHandler_t26EBF84B13B13596F2259A92408AE301B247E751* L_19 = V_1;
			NullCheck(L_19);
			TargetU5BU5D_t3617959FFC066149C517739390E51D1F9E793E6B* L_20 = L_19->___targets_15;
			V_4 = L_20;
			V_5 = 0;
			goto IL_00b0_1;
		}

IL_0090_1:
		{
			// foreach (Target target in targets) {
			TargetU5BU5D_t3617959FFC066149C517739390E51D1F9E793E6B* L_21 = V_4;
			int32_t L_22 = V_5;
			NullCheck(L_21);
			int32_t L_23 = L_22;
			Target_t5E0C0864CEA07701AF639C0AFAC19928DB873FC5* L_24 = (L_21)->GetAt(static_cast<il2cpp_array_size_t>(L_23));
			V_6 = L_24;
			// currentTargetItems.Add(CreateTargetFacade(target));
			TargetHandler_t26EBF84B13B13596F2259A92408AE301B247E751* L_25 = V_1;
			NullCheck(L_25);
			List_1_tD7576C87B68BC6CE723331751C2CE61223447FBE* L_26 = L_25->___currentTargetItems_14;
			TargetHandler_t26EBF84B13B13596F2259A92408AE301B247E751* L_27 = V_1;
			Target_t5E0C0864CEA07701AF639C0AFAC19928DB873FC5* L_28 = V_6;
			NullCheck(L_27);
			TargetFacade_tAA52A697AACAC6BBC707F8B97B5975CD124D9CB1* L_29;
			L_29 = TargetHandler_CreateTargetFacade_m67536F4040123449F003797A7E2D0C5E4536C91A(L_27, L_28, NULL);
			NullCheck(L_26);
			List_1_Add_mE6174CF409FF796DB81E0BC4EDC13FB84F13DA91_inline(L_26, L_29, List_1_Add_mE6174CF409FF796DB81E0BC4EDC13FB84F13DA91_RuntimeMethod_var);
			int32_t L_30 = V_5;
			V_5 = ((int32_t)il2cpp_codegen_add(L_30, 1));
		}

IL_00b0_1:
		{
			// foreach (Target target in targets) {
			int32_t L_31 = V_5;
			TargetU5BU5D_t3617959FFC066149C517739390E51D1F9E793E6B* L_32 = V_4;
			NullCheck(L_32);
			if ((((int32_t)L_31) < ((int32_t)((int32_t)(((RuntimeArray*)L_32)->max_length)))))
			{
				goto IL_0090_1;
			}
		}
		{
			// FillDropdownWithTargetItems();
			TargetHandler_t26EBF84B13B13596F2259A92408AE301B247E751* L_33 = V_1;
			NullCheck(L_33);
			TargetHandler_FillDropdownWithTargetItems_mBA0544F9D4B121606039D902695E4F7092A9DC7D(L_33, NULL);
			// makeallunselected();
			TargetHandler_t26EBF84B13B13596F2259A92408AE301B247E751* L_34 = V_1;
			NullCheck(L_34);
			TargetHandler_makeallunselected_m3DCE64D42D783F8D2DF0856B262705C1966AEB6F(L_34, NULL);
			goto IL_00df;
		}
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_00c6;
		}
		throw e;
	}

CATCH_00c6:
	{// begin catch(System.Exception)
		V_7 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));
		__this->___U3CU3E1__state_0 = ((int32_t)-2);
		AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D* L_35 = (&__this->___U3CU3Et__builder_1);
		Exception_t* L_36 = V_7;
		AsyncVoidMethodBuilder_SetException_mD9A6F5D1A99A62AC9DF322901BFDE05193CB177B(L_35, L_36, NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_00f2;
	}// end catch (depth: 1)

IL_00df:
	{
		// }
		__this->___U3CU3E1__state_0 = ((int32_t)-2);
		AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D* L_37 = (&__this->___U3CU3Et__builder_1);
		AsyncVoidMethodBuilder_SetResult_m008490FDF057D5F5D871F537C7A58BE36027F3DC(L_37, NULL);
	}

IL_00f2:
	{
		return;
	}
}
IL2CPP_EXTERN_C  void U3CGenerateTargetItemsU3Ed__32_MoveNext_m4C59416E4F678A538716AF7D08E497893C12F86F_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	U3CGenerateTargetItemsU3Ed__32_t022CBBF6C6A16E5E4426916B9827B634513DE9CC* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<U3CGenerateTargetItemsU3Ed__32_t022CBBF6C6A16E5E4426916B9827B634513DE9CC*>(__this + _offset);
	U3CGenerateTargetItemsU3Ed__32_MoveNext_m4C59416E4F678A538716AF7D08E497893C12F86F(_thisAdjusted, method);
}
// System.Void TargetHandler/<GenerateTargetItems>d__32::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGenerateTargetItemsU3Ed__32_SetStateMachine_m5D18D1CBC2CF33B468436EE94005BB29C6463B17 (U3CGenerateTargetItemsU3Ed__32_t022CBBF6C6A16E5E4426916B9827B634513DE9CC* __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method) 
{
	{
		AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D* L_0 = (&__this->___U3CU3Et__builder_1);
		RuntimeObject* L_1 = ___stateMachine0;
		AsyncVoidMethodBuilder_SetStateMachine_m48640FB81C34D4C2B5A5BBA7F5AE17DC50BF1A25(L_0, L_1, NULL);
		return;
	}
}
IL2CPP_EXTERN_C  void U3CGenerateTargetItemsU3Ed__32_SetStateMachine_m5D18D1CBC2CF33B468436EE94005BB29C6463B17_AdjustorThunk (RuntimeObject* __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
{
	U3CGenerateTargetItemsU3Ed__32_t022CBBF6C6A16E5E4426916B9827B634513DE9CC* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<U3CGenerateTargetItemsU3Ed__32_t022CBBF6C6A16E5E4426916B9827B634513DE9CC*>(__this + _offset);
	U3CGenerateTargetItemsU3Ed__32_SetStateMachine_m5D18D1CBC2CF33B468436EE94005BB29C6463B17(_thisAdjusted, ___stateMachine0, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void TargetHandler/<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_mD91864D9863E45E24B985B31CC5BE54CEA80DEAB (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t70AD3AFEE444A985AD7890EC330EE5AF8DAF2A47_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_t70AD3AFEE444A985AD7890EC330EE5AF8DAF2A47* L_0 = (U3CU3Ec_t70AD3AFEE444A985AD7890EC330EE5AF8DAF2A47*)il2cpp_codegen_object_new(U3CU3Ec_t70AD3AFEE444A985AD7890EC330EE5AF8DAF2A47_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CU3Ec__ctor_m3F106270047E49B19139213968298E333C8F218D(L_0, NULL);
		((U3CU3Ec_t70AD3AFEE444A985AD7890EC330EE5AF8DAF2A47_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t70AD3AFEE444A985AD7890EC330EE5AF8DAF2A47_il2cpp_TypeInfo_var))->___U3CU3E9_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_t70AD3AFEE444A985AD7890EC330EE5AF8DAF2A47_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t70AD3AFEE444A985AD7890EC330EE5AF8DAF2A47_il2cpp_TypeInfo_var))->___U3CU3E9_0), (void*)L_0);
		return;
	}
}
// System.Void TargetHandler/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m3F106270047E49B19139213968298E333C8F218D (U3CU3Ec_t70AD3AFEE444A985AD7890EC330EE5AF8DAF2A47* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// TMPro.TMP_Dropdown/OptionData TargetHandler/<>c::<FillDropdownWithTargetItems>b__34_0(TargetFacade)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR OptionData_tFDFBCB4A5FB860E95AE46FDAC112DB4140A8525E* U3CU3Ec_U3CFillDropdownWithTargetItemsU3Eb__34_0_mA9FB680F89D1D6EA2B73BB78265A1986D10B77A5 (U3CU3Ec_t70AD3AFEE444A985AD7890EC330EE5AF8DAF2A47* __this, TargetFacade_tAA52A697AACAC6BBC707F8B97B5975CD124D9CB1* ___x0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OptionData_tFDFBCB4A5FB860E95AE46FDAC112DB4140A8525E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		s_Il2CppMethodInitialized = true;
	}
	String_t* G_B2_0 = NULL;
	OptionData_tFDFBCB4A5FB860E95AE46FDAC112DB4140A8525E* G_B2_1 = NULL;
	OptionData_tFDFBCB4A5FB860E95AE46FDAC112DB4140A8525E* G_B2_2 = NULL;
	String_t* G_B1_0 = NULL;
	OptionData_tFDFBCB4A5FB860E95AE46FDAC112DB4140A8525E* G_B1_1 = NULL;
	OptionData_tFDFBCB4A5FB860E95AE46FDAC112DB4140A8525E* G_B1_2 = NULL;
	{
		// currentTargetItems.Select(x => new TMP_Dropdown.OptionData {
		//     text = $"{x.Name}"
		// }).ToList();
		OptionData_tFDFBCB4A5FB860E95AE46FDAC112DB4140A8525E* L_0 = (OptionData_tFDFBCB4A5FB860E95AE46FDAC112DB4140A8525E*)il2cpp_codegen_object_new(OptionData_tFDFBCB4A5FB860E95AE46FDAC112DB4140A8525E_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		OptionData__ctor_m5B8E6B683070AB406FA738E689E2FD4055697FB6(L_0, NULL);
		OptionData_tFDFBCB4A5FB860E95AE46FDAC112DB4140A8525E* L_1 = L_0;
		TargetFacade_tAA52A697AACAC6BBC707F8B97B5975CD124D9CB1* L_2 = ___x0;
		NullCheck(L_2);
		String_t* L_3 = L_2->___Name_4;
		String_t* L_4 = L_3;
		G_B1_0 = L_4;
		G_B1_1 = L_1;
		G_B1_2 = L_1;
		if (L_4)
		{
			G_B2_0 = L_4;
			G_B2_1 = L_1;
			G_B2_2 = L_1;
			goto IL_0015;
		}
	}
	{
		G_B2_0 = _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
		G_B2_1 = G_B1_1;
		G_B2_2 = G_B1_2;
	}

IL_0015:
	{
		NullCheck(G_B2_1);
		OptionData_set_text_mFF1E8A215A399CB9EA9DDFB0C6F3B9F068837226_inline(G_B2_1, G_B2_0, NULL);
		return G_B2_2;
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
// System.Void TargetWrapper::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TargetWrapper__ctor_mCFEF636C6168DA23D079B9D639C2BACA9829D288 (TargetWrapper_t7CCA6EA84DFD8C48A2F98E96C300B0EE111C1DFE* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
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
// System.Int32 WebGLSupport.WebGLInputMobilePlugin::WebGLInputMobileRegister(System.Action`1<System.Int32>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t WebGLInputMobilePlugin_WebGLInputMobileRegister_mBD9139A5F83CB20590F1F6018DCF763476EE4CCF (Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404* ___OnTouchEnd0, const RuntimeMethod* method) 
{
	{
		// public static int WebGLInputMobileRegister(Action<int> OnTouchEnd) { return 0; }
		return 0;
	}
}
// System.Void WebGLSupport.WebGLInputMobilePlugin::WebGLInputMobileOnFocusOut(System.Int32,System.Action`1<System.Int32>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebGLInputMobilePlugin_WebGLInputMobileOnFocusOut_mF9880D622BD9FE4537F9D09AD288B7DBA55364A1 (int32_t ___id0, Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404* ___OnFocusOut1, const RuntimeMethod* method) 
{
	{
		// public static void WebGLInputMobileOnFocusOut(int id, Action<int> OnFocusOut) {}
		return;
	}
}
// System.Void WebGLSupport.WebGLInputMobilePlugin::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebGLInputMobilePlugin__ctor_mCECA136B6F0D4361DD402CFE28D21217E3A8CA77 (WebGLInputMobilePlugin_t4EFA8014C22823D359F9C025EFF2D1F5E802A26A* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
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
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_WebGLInputMobile_OnTouchEnd_m978A0707F6A1C683D43974DF7F58438DBE65F866(int32_t ___id0)
{
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Managed method invocation
	WebGLInputMobile_OnTouchEnd_m978A0707F6A1C683D43974DF7F58438DBE65F866(___id0, NULL);

}
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_WebGLInputMobile_OnFocusOut_m920DE6E8C07CDE2C46DF00C7511C86D8C3713D6F(int32_t ___id0)
{
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Managed method invocation
	WebGLInputMobile_OnFocusOut_m920DE6E8C07CDE2C46DF00C7511C86D8C3713D6F(___id0, NULL);

}
// System.Void WebGLSupport.WebGLInputMobile::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebGLInputMobile_Awake_m5EA21AEB00E732C4CA1FD8678A4693530EEDAED0 (WebGLInputMobile_t98BD6DEA2871F796049970F99FBBFCBACF318ACF* __this, const RuntimeMethod* method) 
{
	{
		// enabled = false;
		Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(__this, (bool)0, NULL);
		// }
		return;
	}
}
// System.Void WebGLSupport.WebGLInputMobile::OnPointerDown(UnityEngine.EventSystems.PointerEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebGLInputMobile_OnPointerDown_mDA0A75272D6363AAB99FA221F4A745B6FBEA20D7 (WebGLInputMobile_t98BD6DEA2871F796049970F99FBBFCBACF318ACF* __this, PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* ___eventData0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_set_Item_m9AB8A5EFFD68EF12D1CDA65041EF049F912068EE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WebGLInputMobile_OnTouchEnd_m978A0707F6A1C683D43974DF7F58438DBE65F866_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WebGLInputMobile_t98BD6DEA2871F796049970F99FBBFCBACF318ACF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (id != -1) return;
		int32_t L_0 = __this->___id_5;
		if ((((int32_t)L_0) == ((int32_t)(-1))))
		{
			goto IL_000a;
		}
	}
	{
		// if (id != -1) return;
		return;
	}

IL_000a:
	{
		// id = WebGLInputMobilePlugin.WebGLInputMobileRegister(OnTouchEnd);
		Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404* L_1 = (Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404*)il2cpp_codegen_object_new(Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		Action_1__ctor_m1BA854F3F4319EA4A4294DDFDA21C395B8D0FF87(L_1, NULL, (intptr_t)((void*)WebGLInputMobile_OnTouchEnd_m978A0707F6A1C683D43974DF7F58438DBE65F866_RuntimeMethod_var), NULL);
		int32_t L_2;
		L_2 = WebGLInputMobilePlugin_WebGLInputMobileRegister_mBD9139A5F83CB20590F1F6018DCF763476EE4CCF(L_1, NULL);
		__this->___id_5 = L_2;
		// instances[id] = this;
		il2cpp_codegen_runtime_class_init_inline(WebGLInputMobile_t98BD6DEA2871F796049970F99FBBFCBACF318ACF_il2cpp_TypeInfo_var);
		Dictionary_2_tCC64C94C8DF1B73C6C7A4649650F9A9C33BF7925* L_3 = ((WebGLInputMobile_t98BD6DEA2871F796049970F99FBBFCBACF318ACF_StaticFields*)il2cpp_codegen_static_fields_for(WebGLInputMobile_t98BD6DEA2871F796049970F99FBBFCBACF318ACF_il2cpp_TypeInfo_var))->___instances_4;
		int32_t L_4 = __this->___id_5;
		NullCheck(L_3);
		Dictionary_2_set_Item_m9AB8A5EFFD68EF12D1CDA65041EF049F912068EE(L_3, L_4, __this, Dictionary_2_set_Item_m9AB8A5EFFD68EF12D1CDA65041EF049F912068EE_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void WebGLSupport.WebGLInputMobile::OnTouchEnd(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebGLInputMobile_OnTouchEnd_m978A0707F6A1C683D43974DF7F58438DBE65F866 (int32_t ___id0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisWebGLInput_t20A7ED221656A06B7688C4010D4E7E8E74C4CE16_m3856F168FBC1AD6FC988BE4D85C5F3928B79795E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Item_mCDA5380AEA99F0E7C38C9A7C020DFCD9167FC755_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WebGLInputMobile_t98BD6DEA2871F796049970F99FBBFCBACF318ACF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// var @this = instances[id];
		il2cpp_codegen_runtime_class_init_inline(WebGLInputMobile_t98BD6DEA2871F796049970F99FBBFCBACF318ACF_il2cpp_TypeInfo_var);
		Dictionary_2_tCC64C94C8DF1B73C6C7A4649650F9A9C33BF7925* L_0 = ((WebGLInputMobile_t98BD6DEA2871F796049970F99FBBFCBACF318ACF_StaticFields*)il2cpp_codegen_static_fields_for(WebGLInputMobile_t98BD6DEA2871F796049970F99FBBFCBACF318ACF_il2cpp_TypeInfo_var))->___instances_4;
		int32_t L_1 = ___id0;
		NullCheck(L_0);
		WebGLInputMobile_t98BD6DEA2871F796049970F99FBBFCBACF318ACF* L_2;
		L_2 = Dictionary_2_get_Item_mCDA5380AEA99F0E7C38C9A7C020DFCD9167FC755(L_0, L_1, Dictionary_2_get_Item_mCDA5380AEA99F0E7C38C9A7C020DFCD9167FC755_RuntimeMethod_var);
		// @this.GetComponent<WebGLInput>().OnSelect();
		WebGLInputMobile_t98BD6DEA2871F796049970F99FBBFCBACF318ACF* L_3 = L_2;
		NullCheck(L_3);
		WebGLInput_t20A7ED221656A06B7688C4010D4E7E8E74C4CE16* L_4;
		L_4 = Component_GetComponent_TisWebGLInput_t20A7ED221656A06B7688C4010D4E7E8E74C4CE16_m3856F168FBC1AD6FC988BE4D85C5F3928B79795E(L_3, Component_GetComponent_TisWebGLInput_t20A7ED221656A06B7688C4010D4E7E8E74C4CE16_m3856F168FBC1AD6FC988BE4D85C5F3928B79795E_RuntimeMethod_var);
		NullCheck(L_4);
		WebGLInput_OnSelect_mCBFF3C8DB21F48A4837D26AB9F4D8833FFDA040A(L_4, NULL);
		// @this.StartCoroutine(RegisterOnFocusOut(id));
		int32_t L_5 = ___id0;
		RuntimeObject* L_6;
		L_6 = WebGLInputMobile_RegisterOnFocusOut_mC3B0E6778773C51B63EA9532255A2EA2C41AF93D(L_5, NULL);
		NullCheck(L_3);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_7;
		L_7 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(L_3, L_6, NULL);
		// }
		return;
	}
}
// System.Collections.IEnumerator WebGLSupport.WebGLInputMobile::RegisterOnFocusOut(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WebGLInputMobile_RegisterOnFocusOut_mC3B0E6778773C51B63EA9532255A2EA2C41AF93D (int32_t ___id0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CRegisterOnFocusOutU3Ed__5_tFB92D52720A36A315F2C7494680146EDAB93E2B8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CRegisterOnFocusOutU3Ed__5_tFB92D52720A36A315F2C7494680146EDAB93E2B8* L_0 = (U3CRegisterOnFocusOutU3Ed__5_tFB92D52720A36A315F2C7494680146EDAB93E2B8*)il2cpp_codegen_object_new(U3CRegisterOnFocusOutU3Ed__5_tFB92D52720A36A315F2C7494680146EDAB93E2B8_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CRegisterOnFocusOutU3Ed__5__ctor_m693FCC1F6B0A96840D65CCB7185B0605E5DBA7E1(L_0, 0, NULL);
		U3CRegisterOnFocusOutU3Ed__5_tFB92D52720A36A315F2C7494680146EDAB93E2B8* L_1 = L_0;
		int32_t L_2 = ___id0;
		NullCheck(L_1);
		L_1->___id_2 = L_2;
		return L_1;
	}
}
// System.Void WebGLSupport.WebGLInputMobile::OnFocusOut(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebGLInputMobile_OnFocusOut_m920DE6E8C07CDE2C46DF00C7511C86D8C3713D6F (int32_t ___id0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Item_mCDA5380AEA99F0E7C38C9A7C020DFCD9167FC755_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WebGLInputMobile_t98BD6DEA2871F796049970F99FBBFCBACF318ACF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// var @this = instances[id];
		il2cpp_codegen_runtime_class_init_inline(WebGLInputMobile_t98BD6DEA2871F796049970F99FBBFCBACF318ACF_il2cpp_TypeInfo_var);
		Dictionary_2_tCC64C94C8DF1B73C6C7A4649650F9A9C33BF7925* L_0 = ((WebGLInputMobile_t98BD6DEA2871F796049970F99FBBFCBACF318ACF_StaticFields*)il2cpp_codegen_static_fields_for(WebGLInputMobile_t98BD6DEA2871F796049970F99FBBFCBACF318ACF_il2cpp_TypeInfo_var))->___instances_4;
		int32_t L_1 = ___id0;
		NullCheck(L_0);
		WebGLInputMobile_t98BD6DEA2871F796049970F99FBBFCBACF318ACF* L_2;
		L_2 = Dictionary_2_get_Item_mCDA5380AEA99F0E7C38C9A7C020DFCD9167FC755(L_0, L_1, Dictionary_2_get_Item_mCDA5380AEA99F0E7C38C9A7C020DFCD9167FC755_RuntimeMethod_var);
		// @this.StartCoroutine(ExecFocusOut(id));
		int32_t L_3 = ___id0;
		RuntimeObject* L_4;
		L_4 = WebGLInputMobile_ExecFocusOut_mE4DB41B75E9D904B66BDCCEC90E4ED3D30AA7C6D(L_3, NULL);
		NullCheck(L_2);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_5;
		L_5 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(L_2, L_4, NULL);
		// }
		return;
	}
}
// System.Collections.IEnumerator WebGLSupport.WebGLInputMobile::ExecFocusOut(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WebGLInputMobile_ExecFocusOut_mE4DB41B75E9D904B66BDCCEC90E4ED3D30AA7C6D (int32_t ___id0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CExecFocusOutU3Ed__7_tBECE39214FAE8EC1642050ADC8BABE4CD5E1C842_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CExecFocusOutU3Ed__7_tBECE39214FAE8EC1642050ADC8BABE4CD5E1C842* L_0 = (U3CExecFocusOutU3Ed__7_tBECE39214FAE8EC1642050ADC8BABE4CD5E1C842*)il2cpp_codegen_object_new(U3CExecFocusOutU3Ed__7_tBECE39214FAE8EC1642050ADC8BABE4CD5E1C842_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CExecFocusOutU3Ed__7__ctor_m82A422FA606AEFADBFD51EED7DB1A17833DAEA4D(L_0, 0, NULL);
		U3CExecFocusOutU3Ed__7_tBECE39214FAE8EC1642050ADC8BABE4CD5E1C842* L_1 = L_0;
		int32_t L_2 = ___id0;
		NullCheck(L_1);
		L_1->___id_2 = L_2;
		return L_1;
	}
}
// System.Void WebGLSupport.WebGLInputMobile::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebGLInputMobile__ctor_mC30D10F4F153D4E8DD6EC3C5ECA697FB81343270 (WebGLInputMobile_t98BD6DEA2871F796049970F99FBBFCBACF318ACF* __this, const RuntimeMethod* method) 
{
	{
		// int id = -1;
		__this->___id_5 = (-1);
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
// System.Void WebGLSupport.WebGLInputMobile::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebGLInputMobile__cctor_m1B088FEEB4FC6C7E0BDEA3E8A4D4E75EE93A9553 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_m8068039ED8A7EDC0E36FBF878873B00D4B0E5AF9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_tCC64C94C8DF1B73C6C7A4649650F9A9C33BF7925_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WebGLInputMobile_t98BD6DEA2871F796049970F99FBBFCBACF318ACF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// static Dictionary<int, WebGLInputMobile> instances = new Dictionary<int, WebGLInputMobile>();
		Dictionary_2_tCC64C94C8DF1B73C6C7A4649650F9A9C33BF7925* L_0 = (Dictionary_2_tCC64C94C8DF1B73C6C7A4649650F9A9C33BF7925*)il2cpp_codegen_object_new(Dictionary_2_tCC64C94C8DF1B73C6C7A4649650F9A9C33BF7925_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		Dictionary_2__ctor_m8068039ED8A7EDC0E36FBF878873B00D4B0E5AF9(L_0, Dictionary_2__ctor_m8068039ED8A7EDC0E36FBF878873B00D4B0E5AF9_RuntimeMethod_var);
		((WebGLInputMobile_t98BD6DEA2871F796049970F99FBBFCBACF318ACF_StaticFields*)il2cpp_codegen_static_fields_for(WebGLInputMobile_t98BD6DEA2871F796049970F99FBBFCBACF318ACF_il2cpp_TypeInfo_var))->___instances_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((WebGLInputMobile_t98BD6DEA2871F796049970F99FBBFCBACF318ACF_StaticFields*)il2cpp_codegen_static_fields_for(WebGLInputMobile_t98BD6DEA2871F796049970F99FBBFCBACF318ACF_il2cpp_TypeInfo_var))->___instances_4), (void*)L_0);
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
// System.Void WebGLSupport.WebGLInputMobile/<RegisterOnFocusOut>d__5::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CRegisterOnFocusOutU3Ed__5__ctor_m693FCC1F6B0A96840D65CCB7185B0605E5DBA7E1 (U3CRegisterOnFocusOutU3Ed__5_tFB92D52720A36A315F2C7494680146EDAB93E2B8* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void WebGLSupport.WebGLInputMobile/<RegisterOnFocusOut>d__5::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CRegisterOnFocusOutU3Ed__5_System_IDisposable_Dispose_m2F10FA8E49EF4944DF4AA6A8287C1571BAFACBA1 (U3CRegisterOnFocusOutU3Ed__5_tFB92D52720A36A315F2C7494680146EDAB93E2B8* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean WebGLSupport.WebGLInputMobile/<RegisterOnFocusOut>d__5::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CRegisterOnFocusOutU3Ed__5_MoveNext_m277F1B65EC78A09F0DF7043FF6370DA3C8399CA1 (U3CRegisterOnFocusOutU3Ed__5_tFB92D52720A36A315F2C7494680146EDAB93E2B8* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WebGLInputMobile_OnFocusOut_m920DE6E8C07CDE2C46DF00C7511C86D8C3713D6F_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if (!L_1)
		{
			goto IL_0010;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)1)))
		{
			goto IL_0027;
		}
	}
	{
		return (bool)0;
	}

IL_0010:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// yield return null;  // wait one frame.
		__this->___U3CU3E2__current_1 = NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)NULL);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_0027:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// WebGLInputMobilePlugin.WebGLInputMobileOnFocusOut(id, OnFocusOut);
		int32_t L_3 = __this->___id_2;
		Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404* L_4 = (Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404*)il2cpp_codegen_object_new(Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		Action_1__ctor_m1BA854F3F4319EA4A4294DDFDA21C395B8D0FF87(L_4, NULL, (intptr_t)((void*)WebGLInputMobile_OnFocusOut_m920DE6E8C07CDE2C46DF00C7511C86D8C3713D6F_RuntimeMethod_var), NULL);
		WebGLInputMobilePlugin_WebGLInputMobileOnFocusOut_mF9880D622BD9FE4537F9D09AD288B7DBA55364A1(L_3, L_4, NULL);
		// }
		return (bool)0;
	}
}
// System.Object WebGLSupport.WebGLInputMobile/<RegisterOnFocusOut>d__5::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CRegisterOnFocusOutU3Ed__5_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m2A9163EF1B1A4D5E0954F4DBA2DC474B771A8355 (U3CRegisterOnFocusOutU3Ed__5_tFB92D52720A36A315F2C7494680146EDAB93E2B8* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void WebGLSupport.WebGLInputMobile/<RegisterOnFocusOut>d__5::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CRegisterOnFocusOutU3Ed__5_System_Collections_IEnumerator_Reset_m1D3772143720448452F8982D8A4A871393A03E9B (U3CRegisterOnFocusOutU3Ed__5_tFB92D52720A36A315F2C7494680146EDAB93E2B8* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CRegisterOnFocusOutU3Ed__5_System_Collections_IEnumerator_Reset_m1D3772143720448452F8982D8A4A871393A03E9B_RuntimeMethod_var)));
	}
}
// System.Object WebGLSupport.WebGLInputMobile/<RegisterOnFocusOut>d__5::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CRegisterOnFocusOutU3Ed__5_System_Collections_IEnumerator_get_Current_m1F8B6DC20836D7DEC29EBBFF63E366BA6D7079AE (U3CRegisterOnFocusOutU3Ed__5_tFB92D52720A36A315F2C7494680146EDAB93E2B8* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
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
// System.Void WebGLSupport.WebGLInputMobile/<ExecFocusOut>d__7::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CExecFocusOutU3Ed__7__ctor_m82A422FA606AEFADBFD51EED7DB1A17833DAEA4D (U3CExecFocusOutU3Ed__7_tBECE39214FAE8EC1642050ADC8BABE4CD5E1C842* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void WebGLSupport.WebGLInputMobile/<ExecFocusOut>d__7::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CExecFocusOutU3Ed__7_System_IDisposable_Dispose_mD249396715DC9B2708045A156FD63AE947B6D791 (U3CExecFocusOutU3Ed__7_tBECE39214FAE8EC1642050ADC8BABE4CD5E1C842* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean WebGLSupport.WebGLInputMobile/<ExecFocusOut>d__7::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CExecFocusOutU3Ed__7_MoveNext_m288B826AF02F675AC0883C887A332D5237A7E373 (U3CExecFocusOutU3Ed__7_tBECE39214FAE8EC1642050ADC8BABE4CD5E1C842* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisWebGLInput_t20A7ED221656A06B7688C4010D4E7E8E74C4CE16_m3856F168FBC1AD6FC988BE4D85C5F3928B79795E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Remove_m057099BE5B700D4EBE18CCA3148D0E24A0552E0C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Item_mCDA5380AEA99F0E7C38C9A7C020DFCD9167FC755_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WebGLInputMobile_t98BD6DEA2871F796049970F99FBBFCBACF318ACF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if (!L_1)
		{
			goto IL_0010;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)1)))
		{
			goto IL_0027;
		}
	}
	{
		return (bool)0;
	}

IL_0010:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// yield return null;  // wait one frame.
		__this->___U3CU3E2__current_1 = NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)NULL);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_0027:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// var @this = instances[id];
		il2cpp_codegen_runtime_class_init_inline(WebGLInputMobile_t98BD6DEA2871F796049970F99FBBFCBACF318ACF_il2cpp_TypeInfo_var);
		Dictionary_2_tCC64C94C8DF1B73C6C7A4649650F9A9C33BF7925* L_3 = ((WebGLInputMobile_t98BD6DEA2871F796049970F99FBBFCBACF318ACF_StaticFields*)il2cpp_codegen_static_fields_for(WebGLInputMobile_t98BD6DEA2871F796049970F99FBBFCBACF318ACF_il2cpp_TypeInfo_var))->___instances_4;
		int32_t L_4 = __this->___id_2;
		NullCheck(L_3);
		WebGLInputMobile_t98BD6DEA2871F796049970F99FBBFCBACF318ACF* L_5;
		L_5 = Dictionary_2_get_Item_mCDA5380AEA99F0E7C38C9A7C020DFCD9167FC755(L_3, L_4, Dictionary_2_get_Item_mCDA5380AEA99F0E7C38C9A7C020DFCD9167FC755_RuntimeMethod_var);
		// @this.GetComponent<WebGLInput>().DeactivateInputField();
		WebGLInputMobile_t98BD6DEA2871F796049970F99FBBFCBACF318ACF* L_6 = L_5;
		NullCheck(L_6);
		WebGLInput_t20A7ED221656A06B7688C4010D4E7E8E74C4CE16* L_7;
		L_7 = Component_GetComponent_TisWebGLInput_t20A7ED221656A06B7688C4010D4E7E8E74C4CE16_m3856F168FBC1AD6FC988BE4D85C5F3928B79795E(L_6, Component_GetComponent_TisWebGLInput_t20A7ED221656A06B7688C4010D4E7E8E74C4CE16_m3856F168FBC1AD6FC988BE4D85C5F3928B79795E_RuntimeMethod_var);
		NullCheck(L_7);
		WebGLInput_DeactivateInputField_m4E87EA2F6D4E0DF331A4D5AA564EB25375E90981(L_7, NULL);
		// @this.id = -1;
		NullCheck(L_6);
		L_6->___id_5 = (-1);
		// instances.Remove(id);
		Dictionary_2_tCC64C94C8DF1B73C6C7A4649650F9A9C33BF7925* L_8 = ((WebGLInputMobile_t98BD6DEA2871F796049970F99FBBFCBACF318ACF_StaticFields*)il2cpp_codegen_static_fields_for(WebGLInputMobile_t98BD6DEA2871F796049970F99FBBFCBACF318ACF_il2cpp_TypeInfo_var))->___instances_4;
		int32_t L_9 = __this->___id_2;
		NullCheck(L_8);
		bool L_10;
		L_10 = Dictionary_2_Remove_m057099BE5B700D4EBE18CCA3148D0E24A0552E0C(L_8, L_9, Dictionary_2_Remove_m057099BE5B700D4EBE18CCA3148D0E24A0552E0C_RuntimeMethod_var);
		// }
		return (bool)0;
	}
}
// System.Object WebGLSupport.WebGLInputMobile/<ExecFocusOut>d__7::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CExecFocusOutU3Ed__7_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_mE06CBCBFC5F1DB0ECE69EB40BB96D296974992A7 (U3CExecFocusOutU3Ed__7_tBECE39214FAE8EC1642050ADC8BABE4CD5E1C842* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void WebGLSupport.WebGLInputMobile/<ExecFocusOut>d__7::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CExecFocusOutU3Ed__7_System_Collections_IEnumerator_Reset_m9869536B4ACE932E796BFB101CC6211F4400AB9B (U3CExecFocusOutU3Ed__7_tBECE39214FAE8EC1642050ADC8BABE4CD5E1C842* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CExecFocusOutU3Ed__7_System_Collections_IEnumerator_Reset_m9869536B4ACE932E796BFB101CC6211F4400AB9B_RuntimeMethod_var)));
	}
}
// System.Object WebGLSupport.WebGLInputMobile/<ExecFocusOut>d__7::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CExecFocusOutU3Ed__7_System_Collections_IEnumerator_get_Current_mC7366101AC36C3158096514AFCFAB8A4E575B319 (U3CExecFocusOutU3Ed__7_tBECE39214FAE8EC1642050ADC8BABE4CD5E1C842* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
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
// System.Void WebGLSupport.WebGLInputPlugin::WebGLInputInit()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebGLInputPlugin_WebGLInputInit_m2472A962E58DC673E575A68A88D5D61E28BB95A3 (const RuntimeMethod* method) 
{
	{
		// public static void WebGLInputInit() {}
		return;
	}
}
// System.Int32 WebGLSupport.WebGLInputPlugin::WebGLInputCreate(System.String,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.String,System.String,System.Boolean,System.Boolean,System.Boolean,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t WebGLInputPlugin_WebGLInputCreate_mA7FD6FE11D839E684A570D05BC7F57FA2FF21940 (String_t* ___canvasId0, int32_t ___x1, int32_t ___y2, int32_t ___width3, int32_t ___height4, int32_t ___fontsize5, String_t* ___text6, String_t* ___placeholder7, bool ___isMultiLine8, bool ___isPassword9, bool ___isHidden10, bool ___isMobile11, const RuntimeMethod* method) 
{
	{
		// public static int WebGLInputCreate(string canvasId, int x, int y, int width, int height, int fontsize, string text, string placeholder, bool isMultiLine, bool isPassword, bool isHidden, bool isMobile) { return 0; }
		return 0;
	}
}
// System.Void WebGLSupport.WebGLInputPlugin::WebGLInputEnterSubmit(System.Int32,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebGLInputPlugin_WebGLInputEnterSubmit_m3070A973649704FA89A3BD8EE49B67F7BE7FE545 (int32_t ___id0, bool ___flag1, const RuntimeMethod* method) 
{
	{
		// public static void WebGLInputEnterSubmit(int id, bool flag) { }
		return;
	}
}
// System.Void WebGLSupport.WebGLInputPlugin::WebGLInputTab(System.Int32,System.Action`2<System.Int32,System.Int32>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebGLInputPlugin_WebGLInputTab_mE0098C4E894B6CC801E33A7407DA66ECDC3EA0F5 (int32_t ___id0, Action_2_tD7438462601D3939500ED67463331FE00CFFBDB8* ___cb1, const RuntimeMethod* method) 
{
	{
		// public static void WebGLInputTab(int id, Action<int, int> cb) { }
		return;
	}
}
// System.Void WebGLSupport.WebGLInputPlugin::WebGLInputFocus(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebGLInputPlugin_WebGLInputFocus_m0B04B16B180EECDACB732CB1A7D8F56AFD605D2C (int32_t ___id0, const RuntimeMethod* method) 
{
	{
		// public static void WebGLInputFocus(int id) { }
		return;
	}
}
// System.Void WebGLSupport.WebGLInputPlugin::WebGLInputOnFocus(System.Int32,System.Action`1<System.Int32>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebGLInputPlugin_WebGLInputOnFocus_mDEB278E47A5763BB3AF842970C5208C9F6972DE7 (int32_t ___id0, Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404* ___cb1, const RuntimeMethod* method) 
{
	{
		// public static void WebGLInputOnFocus(int id, Action<int> cb) { }
		return;
	}
}
// System.Void WebGLSupport.WebGLInputPlugin::WebGLInputOnBlur(System.Int32,System.Action`1<System.Int32>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebGLInputPlugin_WebGLInputOnBlur_mA7AD07048CD4E76D4C68BE928F1725F410510BC7 (int32_t ___id0, Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404* ___cb1, const RuntimeMethod* method) 
{
	{
		// public static void WebGLInputOnBlur(int id, Action<int> cb) { }
		return;
	}
}
// System.Void WebGLSupport.WebGLInputPlugin::WebGLInputOnValueChange(System.Int32,System.Action`2<System.Int32,System.String>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebGLInputPlugin_WebGLInputOnValueChange_m757285F50B012805F5B56E914A9C14A8430A85EB (int32_t ___id0, Action_2_t6AAF2E215E74E16A4EEF0A0749A4A325D99F5BA6* ___cb1, const RuntimeMethod* method) 
{
	{
		// public static void WebGLInputOnValueChange(int id, Action<int, string> cb) { }
		return;
	}
}
// System.Void WebGLSupport.WebGLInputPlugin::WebGLInputOnEditEnd(System.Int32,System.Action`2<System.Int32,System.String>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebGLInputPlugin_WebGLInputOnEditEnd_mA2EF5284E4139109F2C1AF6535DE3A998C623B6A (int32_t ___id0, Action_2_t6AAF2E215E74E16A4EEF0A0749A4A325D99F5BA6* ___cb1, const RuntimeMethod* method) 
{
	{
		// public static void WebGLInputOnEditEnd(int id, Action<int, string> cb) { }
		return;
	}
}
// System.Int32 WebGLSupport.WebGLInputPlugin::WebGLInputSelectionStart(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t WebGLInputPlugin_WebGLInputSelectionStart_m3AA87E082F4338544E8878E64DC454B648EACAB1 (int32_t ___id0, const RuntimeMethod* method) 
{
	{
		// public static int WebGLInputSelectionStart(int id) { return 0; }
		return 0;
	}
}
// System.Int32 WebGLSupport.WebGLInputPlugin::WebGLInputSelectionEnd(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t WebGLInputPlugin_WebGLInputSelectionEnd_mCDDD6F02146F520976A2B10EBC9DD9D3023DC21B (int32_t ___id0, const RuntimeMethod* method) 
{
	{
		// public static int WebGLInputSelectionEnd(int id) { return 0; }
		return 0;
	}
}
// System.Int32 WebGLSupport.WebGLInputPlugin::WebGLInputSelectionDirection(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t WebGLInputPlugin_WebGLInputSelectionDirection_m032D107EFC91EB87ECE22BFC9E3174CB7B540906 (int32_t ___id0, const RuntimeMethod* method) 
{
	{
		// public static int WebGLInputSelectionDirection(int id) { return 0; }
		return 0;
	}
}
// System.Void WebGLSupport.WebGLInputPlugin::WebGLInputSetSelectionRange(System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebGLInputPlugin_WebGLInputSetSelectionRange_m7DEBA2D9B4B6E35AFA7F251EA8CDA1DCB4DE13D1 (int32_t ___id0, int32_t ___start1, int32_t ___end2, const RuntimeMethod* method) 
{
	{
		// public static void WebGLInputSetSelectionRange(int id, int start, int end) { }
		return;
	}
}
// System.Void WebGLSupport.WebGLInputPlugin::WebGLInputMaxLength(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebGLInputPlugin_WebGLInputMaxLength_mFD33ED6C71A6622CBF8114AF1CFD063EDEB3A542 (int32_t ___id0, int32_t ___maxlength1, const RuntimeMethod* method) 
{
	{
		// public static void WebGLInputMaxLength(int id, int maxlength) { }
		return;
	}
}
// System.Void WebGLSupport.WebGLInputPlugin::WebGLInputText(System.Int32,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebGLInputPlugin_WebGLInputText_m4F6B1ACC17624AB94E5222CB6A30764E03C67F75 (int32_t ___id0, String_t* ___text1, const RuntimeMethod* method) 
{
	{
		// public static void WebGLInputText(int id, string text) { }
		return;
	}
}
// System.Boolean WebGLSupport.WebGLInputPlugin::WebGLInputIsFocus(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WebGLInputPlugin_WebGLInputIsFocus_m8C82A2A1EBFC699255358BB93DBA9603B8C8E418 (int32_t ___id0, const RuntimeMethod* method) 
{
	{
		// public static bool WebGLInputIsFocus(int id) { return false; }
		return (bool)0;
	}
}
// System.Void WebGLSupport.WebGLInputPlugin::WebGLInputDelete(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebGLInputPlugin_WebGLInputDelete_mC60D7EA1110F3FFBC368CE45F0A5DDF2953876D7 (int32_t ___id0, const RuntimeMethod* method) 
{
	{
		// public static void WebGLInputDelete(int id) { }
		return;
	}
}
// System.Void WebGLSupport.WebGLInputPlugin::WebGLInputForceBlur(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebGLInputPlugin_WebGLInputForceBlur_m1D1EF257EC368AFC54306A5E5429F8DF11501097 (int32_t ___id0, const RuntimeMethod* method) 
{
	{
		// public static void WebGLInputForceBlur(int id) { }
		return;
	}
}
// System.Void WebGLSupport.WebGLInputPlugin::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebGLInputPlugin__ctor_mE30C6A6EDFA3CE8009B84135071B73EA3F1C3C03 (WebGLInputPlugin_tB11B29E0162074CE67EA0AF5FC9A4247F32DE4B1* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
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
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_WebGLInput_OnFocus_m54DB80C07B523F13C6259FFCFD90BA552CF2FE64(int32_t ___id0)
{
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Managed method invocation
	WebGLInput_OnFocus_m54DB80C07B523F13C6259FFCFD90BA552CF2FE64(___id0, NULL);

}
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_WebGLInput_OnBlur_mCFFB178E96DC6F40021B960A740AB053AEB9B8BE(int32_t ___id0)
{
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Managed method invocation
	WebGLInput_OnBlur_mCFFB178E96DC6F40021B960A740AB053AEB9B8BE(___id0, NULL);

}
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_WebGLInput_OnValueChange_m625C675A2330B92B5E7ED45ECD14E920A2CE5357(int32_t ___id0, char* ___value1)
{
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Marshaling of parameter '___value1' to managed representation
	String_t* ____value1_unmarshaled = NULL;
	____value1_unmarshaled = il2cpp_codegen_marshal_string_result(___value1);

	// Managed method invocation
	WebGLInput_OnValueChange_m625C675A2330B92B5E7ED45ECD14E920A2CE5357(___id0, ____value1_unmarshaled, NULL);

}
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_WebGLInput_OnEditEnd_mD46937A7A64BC00B06AB18DC7B1532677AEBB4AE(int32_t ___id0, char* ___value1)
{
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Marshaling of parameter '___value1' to managed representation
	String_t* ____value1_unmarshaled = NULL;
	____value1_unmarshaled = il2cpp_codegen_marshal_string_result(___value1);

	// Managed method invocation
	WebGLInput_OnEditEnd_mD46937A7A64BC00B06AB18DC7B1532677AEBB4AE(___id0, ____value1_unmarshaled, NULL);

}
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_WebGLInput_OnTab_m0F80B563448F8A140E4A704DC2501BF4A56DD20D(int32_t ___id0, int32_t ___value1)
{
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Managed method invocation
	WebGLInput_OnTab_m0F80B563448F8A140E4A704DC2501BF4A56DD20D(___id0, ___value1, NULL);

}
// System.String WebGLSupport.WebGLInput::get_CanvasId()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* WebGLInput_get_CanvasId_mCE5D4CCA8E8D30C50D142C5238FB889AAEFBEF83 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WebGLInput_t20A7ED221656A06B7688C4010D4E7E8E74C4CE16_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static string CanvasId { get; set; }
		il2cpp_codegen_runtime_class_init_inline(WebGLInput_t20A7ED221656A06B7688C4010D4E7E8E74C4CE16_il2cpp_TypeInfo_var);
		String_t* L_0 = ((WebGLInput_t20A7ED221656A06B7688C4010D4E7E8E74C4CE16_StaticFields*)il2cpp_codegen_static_fields_for(WebGLInput_t20A7ED221656A06B7688C4010D4E7E8E74C4CE16_il2cpp_TypeInfo_var))->___U3CCanvasIdU3Ek__BackingField_5;
		return L_0;
	}
}
// System.Void WebGLSupport.WebGLInput::set_CanvasId(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebGLInput_set_CanvasId_m15A832E612CDD43815FD67279F5E879CE6277988 (String_t* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WebGLInput_t20A7ED221656A06B7688C4010D4E7E8E74C4CE16_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static string CanvasId { get; set; }
		String_t* L_0 = ___value0;
		il2cpp_codegen_runtime_class_init_inline(WebGLInput_t20A7ED221656A06B7688C4010D4E7E8E74C4CE16_il2cpp_TypeInfo_var);
		((WebGLInput_t20A7ED221656A06B7688C4010D4E7E8E74C4CE16_StaticFields*)il2cpp_codegen_static_fields_for(WebGLInput_t20A7ED221656A06B7688C4010D4E7E8E74C4CE16_il2cpp_TypeInfo_var))->___U3CCanvasIdU3Ek__BackingField_5 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((WebGLInput_t20A7ED221656A06B7688C4010D4E7E8E74C4CE16_StaticFields*)il2cpp_codegen_static_fields_for(WebGLInput_t20A7ED221656A06B7688C4010D4E7E8E74C4CE16_il2cpp_TypeInfo_var))->___U3CCanvasIdU3Ek__BackingField_5), (void*)L_0);
		return;
	}
}
// System.Void WebGLSupport.WebGLInput::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebGLInput__cctor_mBEDA5B952ADC2DDCF50C24EA0D205B4906EF71CE (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_m9F06C20D0FD27B7F09C6DB65CFC3CEA79BF181D1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_t02972806B8AE7773FA4016F73A171E1AEAB527C6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WebGLInput_t20A7ED221656A06B7688C4010D4E7E8E74C4CE16_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral689CC422ADFE701983B544F0AFD66CD1B901A48D);
		s_Il2CppMethodInitialized = true;
	}
	{
		// static Dictionary<int, WebGLInput> instances = new Dictionary<int, WebGLInput>();
		Dictionary_2_t02972806B8AE7773FA4016F73A171E1AEAB527C6* L_0 = (Dictionary_2_t02972806B8AE7773FA4016F73A171E1AEAB527C6*)il2cpp_codegen_object_new(Dictionary_2_t02972806B8AE7773FA4016F73A171E1AEAB527C6_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		Dictionary_2__ctor_m9F06C20D0FD27B7F09C6DB65CFC3CEA79BF181D1(L_0, Dictionary_2__ctor_m9F06C20D0FD27B7F09C6DB65CFC3CEA79BF181D1_RuntimeMethod_var);
		((WebGLInput_t20A7ED221656A06B7688C4010D4E7E8E74C4CE16_StaticFields*)il2cpp_codegen_static_fields_for(WebGLInput_t20A7ED221656A06B7688C4010D4E7E8E74C4CE16_il2cpp_TypeInfo_var))->___instances_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((WebGLInput_t20A7ED221656A06B7688C4010D4E7E8E74C4CE16_StaticFields*)il2cpp_codegen_static_fields_for(WebGLInput_t20A7ED221656A06B7688C4010D4E7E8E74C4CE16_il2cpp_TypeInfo_var))->___instances_4), (void*)L_0);
		// WebGLInput.CanvasId = "unity-container";
		WebGLInput_set_CanvasId_m15A832E612CDD43815FD67279F5E879CE6277988_inline(_stringLiteral689CC422ADFE701983B544F0AFD66CD1B901A48D, NULL);
		// WebGLInputPlugin.WebGLInputInit();
		WebGLInputPlugin_WebGLInputInit_m2472A962E58DC673E575A68A88D5D61E28BB95A3(NULL);
		// }
		return;
	}
}
// System.Int32 WebGLSupport.WebGLInput::get_Id()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t WebGLInput_get_Id_m39C8BBD16C25EBC4C5DAA14428ADFB7D9917980A (WebGLInput_t20A7ED221656A06B7688C4010D4E7E8E74C4CE16* __this, const RuntimeMethod* method) 
{
	{
		// public int Id { get { return id; } }
		int32_t L_0 = __this->___id_6;
		return L_0;
	}
}
// WebGLSupport.IInputField WebGLSupport.WebGLInput::Setup()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WebGLInput_Setup_mF23CA9F5059938C23251F0F1CEFB2C9D5D6B4A06 (WebGLInput_t20A7ED221656A06B7688C4010D4E7E8E74C4CE16* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisInputField_tABEA115F23FBD374EBE80D4FAC1D15BD6E37A140_m08978F3683B8CCF83910BA8BB0A4F786A6361896_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisTMP_InputField_t3488E0EE8C3DF56C6A328EC95D1BEEA2DF4A7D5F_m638A3878EFC37F712EE8D8F0A24B543B256F7A28_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WrappedInputField_tA9A06E487260394507CAA4C83E9E1E0239B4B6AE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WrappedTMPInputField_t5812136E49D051CA7D0F72155950CB226F87247F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (GetComponent<InputField>()) return new WrappedInputField(GetComponent<InputField>());
		InputField_tABEA115F23FBD374EBE80D4FAC1D15BD6E37A140* L_0;
		L_0 = Component_GetComponent_TisInputField_tABEA115F23FBD374EBE80D4FAC1D15BD6E37A140_m08978F3683B8CCF83910BA8BB0A4F786A6361896(__this, Component_GetComponent_TisInputField_tABEA115F23FBD374EBE80D4FAC1D15BD6E37A140_m08978F3683B8CCF83910BA8BB0A4F786A6361896_RuntimeMethod_var);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Implicit_m18E1885C296CC868AC918101523697CFE6413C79(L_0, NULL);
		if (!L_1)
		{
			goto IL_0019;
		}
	}
	{
		// if (GetComponent<InputField>()) return new WrappedInputField(GetComponent<InputField>());
		InputField_tABEA115F23FBD374EBE80D4FAC1D15BD6E37A140* L_2;
		L_2 = Component_GetComponent_TisInputField_tABEA115F23FBD374EBE80D4FAC1D15BD6E37A140_m08978F3683B8CCF83910BA8BB0A4F786A6361896(__this, Component_GetComponent_TisInputField_tABEA115F23FBD374EBE80D4FAC1D15BD6E37A140_m08978F3683B8CCF83910BA8BB0A4F786A6361896_RuntimeMethod_var);
		WrappedInputField_tA9A06E487260394507CAA4C83E9E1E0239B4B6AE* L_3 = (WrappedInputField_tA9A06E487260394507CAA4C83E9E1E0239B4B6AE*)il2cpp_codegen_object_new(WrappedInputField_tA9A06E487260394507CAA4C83E9E1E0239B4B6AE_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		WrappedInputField__ctor_m6F3A6F9F206C5736E3EB8A299AEB18BB7F7B8567(L_3, L_2, NULL);
		return L_3;
	}

IL_0019:
	{
		// if (GetComponent<TMPro.TMP_InputField>()) return new WrappedTMPInputField(GetComponent<TMPro.TMP_InputField>());
		TMP_InputField_t3488E0EE8C3DF56C6A328EC95D1BEEA2DF4A7D5F* L_4;
		L_4 = Component_GetComponent_TisTMP_InputField_t3488E0EE8C3DF56C6A328EC95D1BEEA2DF4A7D5F_m638A3878EFC37F712EE8D8F0A24B543B256F7A28(__this, Component_GetComponent_TisTMP_InputField_t3488E0EE8C3DF56C6A328EC95D1BEEA2DF4A7D5F_m638A3878EFC37F712EE8D8F0A24B543B256F7A28_RuntimeMethod_var);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_5;
		L_5 = Object_op_Implicit_m18E1885C296CC868AC918101523697CFE6413C79(L_4, NULL);
		if (!L_5)
		{
			goto IL_0032;
		}
	}
	{
		// if (GetComponent<TMPro.TMP_InputField>()) return new WrappedTMPInputField(GetComponent<TMPro.TMP_InputField>());
		TMP_InputField_t3488E0EE8C3DF56C6A328EC95D1BEEA2DF4A7D5F* L_6;
		L_6 = Component_GetComponent_TisTMP_InputField_t3488E0EE8C3DF56C6A328EC95D1BEEA2DF4A7D5F_m638A3878EFC37F712EE8D8F0A24B543B256F7A28(__this, Component_GetComponent_TisTMP_InputField_t3488E0EE8C3DF56C6A328EC95D1BEEA2DF4A7D5F_m638A3878EFC37F712EE8D8F0A24B543B256F7A28_RuntimeMethod_var);
		WrappedTMPInputField_t5812136E49D051CA7D0F72155950CB226F87247F* L_7 = (WrappedTMPInputField_t5812136E49D051CA7D0F72155950CB226F87247F*)il2cpp_codegen_object_new(WrappedTMPInputField_t5812136E49D051CA7D0F72155950CB226F87247F_il2cpp_TypeInfo_var);
		NullCheck(L_7);
		WrappedTMPInputField__ctor_mA4A41F6731D79FF01B9716498B593502DC0131F3(L_7, L_6, NULL);
		return L_7;
	}

IL_0032:
	{
		// throw new Exception("Can not Setup WebGLInput!!");
		Exception_t* L_8 = (Exception_t*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)));
		NullCheck(L_8);
		Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F(L_8, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral635EA7D63954EE84193479144A5CBEE2D129A2D3)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_8, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&WebGLInput_Setup_mF23CA9F5059938C23251F0F1CEFB2C9D5D6B4A06_RuntimeMethod_var)));
	}
}
// System.Void WebGLSupport.WebGLInput::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebGLInput_Awake_m20E160156F33635F204D6B98DA4B4A2A81FBD67A (WebGLInput_t20A7ED221656A06B7688C4010D4E7E8E74C4CE16* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_AddComponent_TisWebGLInputMobile_t98BD6DEA2871F796049970F99FBBFCBACF318ACF_m898CEA8A0288360923BFF1030637B12BD251633D_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// input = Setup();
		RuntimeObject* L_0;
		L_0 = WebGLInput_Setup_mF23CA9F5059938C23251F0F1CEFB2C9D5D6B4A06(__this, NULL);
		__this->___input_7 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___input_7), (void*)L_0);
		// enabled = false;
		Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(__this, (bool)0, NULL);
		// if (Application.isMobilePlatform)
		bool L_1;
		L_1 = Application_get_isMobilePlatform_mBFFD8F419C7FB2FF99C84497C135007BFB5F8B53(NULL);
		if (!L_1)
		{
			goto IL_0026;
		}
	}
	{
		// gameObject.AddComponent<WebGLInputMobile>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2;
		L_2 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_2);
		WebGLInputMobile_t98BD6DEA2871F796049970F99FBBFCBACF318ACF* L_3;
		L_3 = GameObject_AddComponent_TisWebGLInputMobile_t98BD6DEA2871F796049970F99FBBFCBACF318ACF_m898CEA8A0288360923BFF1030637B12BD251633D(L_2, GameObject_AddComponent_TisWebGLInputMobile_t98BD6DEA2871F796049970F99FBBFCBACF318ACF_m898CEA8A0288360923BFF1030637B12BD251633D_RuntimeMethod_var);
	}

IL_0026:
	{
		// }
		return;
	}
}
// UnityEngine.RectInt WebGLSupport.WebGLInput::GetElemetRect()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RectInt_t1744D10E1063135DA9D574F95205B98DAC600CB8 WebGLInput_GetElemetRect_m1F0509C0B774E2E3B01A506E80508FA46BB14E78 (WebGLInput_t20A7ED221656A06B7688C4010D4E7E8E74C4CE16* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IInputField_t04870BDDFD3EBDFA93CB0E713DE6829FC99BFF65_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D V_0;
	memset((&V_0), 0, sizeof(V_0));
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		// var rect = GetScreenCoordinates(input.RectTransform());
		RuntimeObject* L_0 = __this->___input_7;
		NullCheck(L_0);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_1;
		L_1 = InterfaceFuncInvoker0< RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* >::Invoke(15 /* UnityEngine.RectTransform WebGLSupport.IInputField::RectTransform() */, IInputField_t04870BDDFD3EBDFA93CB0E713DE6829FC99BFF65_il2cpp_TypeInfo_var, L_0);
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_2;
		L_2 = WebGLInput_GetScreenCoordinates_m5955BB63E635EC9808E2ECB80C721BA39FD693FF(__this, L_1, NULL);
		V_0 = L_2;
		// if (showHtmlElement || Application.isMobilePlatform)
		bool L_3 = __this->___showHtmlElement_9;
		if (L_3)
		{
			goto IL_0021;
		}
	}
	{
		bool L_4;
		L_4 = Application_get_isMobilePlatform_mBFFD8F419C7FB2FF99C84497C135007BFB5F8B53(NULL);
		if (!L_4)
		{
			goto IL_0058;
		}
	}

IL_0021:
	{
		// var x = (int)(rect.x);
		float L_5;
		L_5 = Rect_get_x_mB267B718E0D067F2BAE31BA477647FBF964916EB((&V_0), NULL);
		// var y = (int)(Screen.height - (rect.y + rect.height));
		int32_t L_6;
		L_6 = Screen_get_height_m624DD2D53F34087064E3B9D09AC2207DB4E86CA8(NULL);
		float L_7;
		L_7 = Rect_get_y_mC733E8D49F3CE21B2A3D40A1B72D687F22C97F49((&V_0), NULL);
		float L_8;
		L_8 = Rect_get_height_mE1AA6C6C725CCD2D317BD2157396D3CF7D47C9D8((&V_0), NULL);
		V_1 = il2cpp_codegen_cast_double_to_int<int32_t>(((float)il2cpp_codegen_subtract(((float)L_6), ((float)il2cpp_codegen_add(L_7, L_8)))));
		// return new RectInt(x, y, (int)rect.width, (int)rect.height);
		int32_t L_9 = V_1;
		float L_10;
		L_10 = Rect_get_width_m620D67551372073C9C32C4C4624C2A5713F7F9A9((&V_0), NULL);
		float L_11;
		L_11 = Rect_get_height_mE1AA6C6C725CCD2D317BD2157396D3CF7D47C9D8((&V_0), NULL);
		RectInt_t1744D10E1063135DA9D574F95205B98DAC600CB8 L_12;
		memset((&L_12), 0, sizeof(L_12));
		RectInt__ctor_m6E8B3A6C7EE11257A6B438E36274116FE39B5B42((&L_12), il2cpp_codegen_cast_double_to_int<int32_t>(L_5), L_9, il2cpp_codegen_cast_double_to_int<int32_t>(L_10), il2cpp_codegen_cast_double_to_int<int32_t>(L_11), /*hidden argument*/NULL);
		return L_12;
	}

IL_0058:
	{
		// var x = (int)(rect.x);
		float L_13;
		L_13 = Rect_get_x_mB267B718E0D067F2BAE31BA477647FBF964916EB((&V_0), NULL);
		// var y = (int)(Screen.height - (rect.y));
		int32_t L_14;
		L_14 = Screen_get_height_m624DD2D53F34087064E3B9D09AC2207DB4E86CA8(NULL);
		float L_15;
		L_15 = Rect_get_y_mC733E8D49F3CE21B2A3D40A1B72D687F22C97F49((&V_0), NULL);
		V_2 = il2cpp_codegen_cast_double_to_int<int32_t>(((float)il2cpp_codegen_subtract(((float)L_14), L_15)));
		// return new RectInt(x, y, (int)rect.width, (int)1);
		int32_t L_16 = V_2;
		float L_17;
		L_17 = Rect_get_width_m620D67551372073C9C32C4C4624C2A5713F7F9A9((&V_0), NULL);
		RectInt_t1744D10E1063135DA9D574F95205B98DAC600CB8 L_18;
		memset((&L_18), 0, sizeof(L_18));
		RectInt__ctor_m6E8B3A6C7EE11257A6B438E36274116FE39B5B42((&L_18), il2cpp_codegen_cast_double_to_int<int32_t>(L_13), L_16, il2cpp_codegen_cast_double_to_int<int32_t>(L_17), 1, /*hidden argument*/NULL);
		return L_18;
	}
}
// System.Void WebGLSupport.WebGLInput::OnSelect()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebGLInput_OnSelect_mCBFF3C8DB21F48A4837D26AB9F4D8833FFDA040A (WebGLInput_t20A7ED221656A06B7688C4010D4E7E8E74C4CE16* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_2_t6AAF2E215E74E16A4EEF0A0749A4A325D99F5BA6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_2_tD7438462601D3939500ED67463331FE00CFFBDB8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_set_Item_m54EDBFC5A43C72CF7D0B25CEA2C03096788D277C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IInputField_t04870BDDFD3EBDFA93CB0E713DE6829FC99BFF65_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WebGLInput_OnBlur_mCFFB178E96DC6F40021B960A740AB053AEB9B8BE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WebGLInput_OnEditEnd_mD46937A7A64BC00B06AB18DC7B1532677AEBB4AE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WebGLInput_OnFocus_m54DB80C07B523F13C6259FFCFD90BA552CF2FE64_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WebGLInput_OnTab_m0F80B563448F8A140E4A704DC2501BF4A56DD20D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WebGLInput_OnValueChange_m625C675A2330B92B5E7ED45ECD14E920A2CE5357_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WebGLInput_OnWindowBlur_m9488E769E35C9A4CB5620EAC612B54B4733B093A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WebGLInput_t20A7ED221656A06B7688C4010D4E7E8E74C4CE16_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WebGLWindow_t360F95487A76FFDFAD43C992ACEBF9CF8FA4D3A3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RectInt_t1744D10E1063135DA9D574F95205B98DAC600CB8 V_0;
	memset((&V_0), 0, sizeof(V_0));
	bool V_1 = false;
	int32_t V_2 = 0;
	bool V_3 = false;
	int32_t G_B5_0 = 0;
	int32_t G_B7_0 = 0;
	int32_t G_B6_0 = 0;
	int32_t G_B8_0 = 0;
	int32_t G_B8_1 = 0;
	{
		// if (id != -1) throw new Exception("OnSelect : id != -1");
		int32_t L_0 = __this->___id_6;
		if ((((int32_t)L_0) == ((int32_t)(-1))))
		{
			goto IL_0014;
		}
	}
	{
		// if (id != -1) throw new Exception("OnSelect : id != -1");
		Exception_t* L_1 = (Exception_t*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)));
		NullCheck(L_1);
		Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral67C7BC5F8233F1CBB6671616A06491BD8980DD72)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&WebGLInput_OnSelect_mCBFF3C8DB21F48A4837D26AB9F4D8833FFDA040A_RuntimeMethod_var)));
	}

IL_0014:
	{
		// var rect = GetElemetRect();
		RectInt_t1744D10E1063135DA9D574F95205B98DAC600CB8 L_2;
		L_2 = WebGLInput_GetElemetRect_m1F0509C0B774E2E3B01A506E80508FA46BB14E78(__this, NULL);
		V_0 = L_2;
		// bool isPassword = input.contentType == ContentType.Password;
		RuntimeObject* L_3 = __this->___input_7;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = InterfaceFuncInvoker0< int32_t >::Invoke(0 /* WebGLSupport.ContentType WebGLSupport.IInputField::get_contentType() */, IInputField_t04870BDDFD3EBDFA93CB0E713DE6829FC99BFF65_il2cpp_TypeInfo_var, L_3);
		V_1 = (bool)((((int32_t)L_4) == ((int32_t)7))? 1 : 0);
		// var fontSize = Mathf.Max(14, input.fontSize); // limit font size : 14 !!
		RuntimeObject* L_5 = __this->___input_7;
		NullCheck(L_5);
		int32_t L_6;
		L_6 = InterfaceFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 WebGLSupport.IInputField::get_fontSize() */, IInputField_t04870BDDFD3EBDFA93CB0E713DE6829FC99BFF65_il2cpp_TypeInfo_var, L_5);
		int32_t L_7;
		L_7 = Mathf_Max_m8A4C189A6749DFE3ED8B66D9D3CACD8DB333974F_inline(((int32_t)14), L_6, NULL);
		V_2 = L_7;
		// var isHidden = !(showHtmlElement || Application.isMobilePlatform);
		bool L_8 = __this->___showHtmlElement_9;
		if (L_8)
		{
			goto IL_004f;
		}
	}
	{
		bool L_9;
		L_9 = Application_get_isMobilePlatform_mBFFD8F419C7FB2FF99C84497C135007BFB5F8B53(NULL);
		G_B5_0 = ((((int32_t)L_9) == ((int32_t)0))? 1 : 0);
		goto IL_0050;
	}

IL_004f:
	{
		G_B5_0 = 0;
	}

IL_0050:
	{
		V_3 = (bool)G_B5_0;
		// id = WebGLInputPlugin.WebGLInputCreate(WebGLInput.CanvasId, rect.x, rect.y, rect.width, rect.height, fontSize, input.text, input.placeholder, input.lineType != LineType.SingleLine, isPassword, isHidden, Application.isMobilePlatform);
		il2cpp_codegen_runtime_class_init_inline(WebGLInput_t20A7ED221656A06B7688C4010D4E7E8E74C4CE16_il2cpp_TypeInfo_var);
		String_t* L_10;
		L_10 = WebGLInput_get_CanvasId_mCE5D4CCA8E8D30C50D142C5238FB889AAEFBEF83_inline(NULL);
		int32_t L_11;
		L_11 = RectInt_get_x_mA1E7EF6DEAD2E900D7D56B7A3957C05081EBA9CA((&V_0), NULL);
		int32_t L_12;
		L_12 = RectInt_get_y_m440422264E6FCAA91E01F81486A78037AC29D878((&V_0), NULL);
		int32_t L_13;
		L_13 = RectInt_get_width_m6B7B2FB764EAE83B7F63E7F77FA33973606761A7((&V_0), NULL);
		int32_t L_14;
		L_14 = RectInt_get_height_mE25FB938714942D7A3BA0B3C21BC5CB913D5709C((&V_0), NULL);
		int32_t L_15 = V_2;
		RuntimeObject* L_16 = __this->___input_7;
		NullCheck(L_16);
		String_t* L_17;
		L_17 = InterfaceFuncInvoker0< String_t* >::Invoke(3 /* System.String WebGLSupport.IInputField::get_text() */, IInputField_t04870BDDFD3EBDFA93CB0E713DE6829FC99BFF65_il2cpp_TypeInfo_var, L_16);
		RuntimeObject* L_18 = __this->___input_7;
		NullCheck(L_18);
		String_t* L_19;
		L_19 = InterfaceFuncInvoker0< String_t* >::Invoke(5 /* System.String WebGLSupport.IInputField::get_placeholder() */, IInputField_t04870BDDFD3EBDFA93CB0E713DE6829FC99BFF65_il2cpp_TypeInfo_var, L_18);
		RuntimeObject* L_20 = __this->___input_7;
		NullCheck(L_20);
		int32_t L_21;
		L_21 = InterfaceFuncInvoker0< int32_t >::Invoke(1 /* WebGLSupport.LineType WebGLSupport.IInputField::get_lineType() */, IInputField_t04870BDDFD3EBDFA93CB0E713DE6829FC99BFF65_il2cpp_TypeInfo_var, L_20);
		bool L_22 = V_1;
		bool L_23 = V_3;
		bool L_24;
		L_24 = Application_get_isMobilePlatform_mBFFD8F419C7FB2FF99C84497C135007BFB5F8B53(NULL);
		int32_t L_25;
		L_25 = WebGLInputPlugin_WebGLInputCreate_mA7FD6FE11D839E684A570D05BC7F57FA2FF21940(L_10, L_11, L_12, L_13, L_14, L_15, L_17, L_19, (bool)((!(((uint32_t)L_21) <= ((uint32_t)0)))? 1 : 0), L_22, L_23, L_24, NULL);
		__this->___id_6 = L_25;
		// instances[id] = this;
		Dictionary_2_t02972806B8AE7773FA4016F73A171E1AEAB527C6* L_26 = ((WebGLInput_t20A7ED221656A06B7688C4010D4E7E8E74C4CE16_StaticFields*)il2cpp_codegen_static_fields_for(WebGLInput_t20A7ED221656A06B7688C4010D4E7E8E74C4CE16_il2cpp_TypeInfo_var))->___instances_4;
		int32_t L_27 = __this->___id_6;
		NullCheck(L_26);
		Dictionary_2_set_Item_m54EDBFC5A43C72CF7D0B25CEA2C03096788D277C(L_26, L_27, __this, Dictionary_2_set_Item_m54EDBFC5A43C72CF7D0B25CEA2C03096788D277C_RuntimeMethod_var);
		// WebGLInputPlugin.WebGLInputEnterSubmit(id, input.lineType != LineType.MultiLineNewline);
		int32_t L_28 = __this->___id_6;
		RuntimeObject* L_29 = __this->___input_7;
		NullCheck(L_29);
		int32_t L_30;
		L_30 = InterfaceFuncInvoker0< int32_t >::Invoke(1 /* WebGLSupport.LineType WebGLSupport.IInputField::get_lineType() */, IInputField_t04870BDDFD3EBDFA93CB0E713DE6829FC99BFF65_il2cpp_TypeInfo_var, L_29);
		WebGLInputPlugin_WebGLInputEnterSubmit_m3070A973649704FA89A3BD8EE49B67F7BE7FE545(L_28, (bool)((((int32_t)((((int32_t)L_30) == ((int32_t)2))? 1 : 0)) == ((int32_t)0))? 1 : 0), NULL);
		// WebGLInputPlugin.WebGLInputOnFocus(id, OnFocus);
		int32_t L_31 = __this->___id_6;
		Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404* L_32 = (Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404*)il2cpp_codegen_object_new(Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404_il2cpp_TypeInfo_var);
		NullCheck(L_32);
		Action_1__ctor_m1BA854F3F4319EA4A4294DDFDA21C395B8D0FF87(L_32, NULL, (intptr_t)((void*)WebGLInput_OnFocus_m54DB80C07B523F13C6259FFCFD90BA552CF2FE64_RuntimeMethod_var), NULL);
		WebGLInputPlugin_WebGLInputOnFocus_mDEB278E47A5763BB3AF842970C5208C9F6972DE7(L_31, L_32, NULL);
		// WebGLInputPlugin.WebGLInputOnBlur(id, OnBlur);
		int32_t L_33 = __this->___id_6;
		Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404* L_34 = (Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404*)il2cpp_codegen_object_new(Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404_il2cpp_TypeInfo_var);
		NullCheck(L_34);
		Action_1__ctor_m1BA854F3F4319EA4A4294DDFDA21C395B8D0FF87(L_34, NULL, (intptr_t)((void*)WebGLInput_OnBlur_mCFFB178E96DC6F40021B960A740AB053AEB9B8BE_RuntimeMethod_var), NULL);
		WebGLInputPlugin_WebGLInputOnBlur_mA7AD07048CD4E76D4C68BE928F1725F410510BC7(L_33, L_34, NULL);
		// WebGLInputPlugin.WebGLInputOnValueChange(id, OnValueChange);
		int32_t L_35 = __this->___id_6;
		Action_2_t6AAF2E215E74E16A4EEF0A0749A4A325D99F5BA6* L_36 = (Action_2_t6AAF2E215E74E16A4EEF0A0749A4A325D99F5BA6*)il2cpp_codegen_object_new(Action_2_t6AAF2E215E74E16A4EEF0A0749A4A325D99F5BA6_il2cpp_TypeInfo_var);
		NullCheck(L_36);
		Action_2__ctor_mECAF7244ADE81BED22587EECD7FD59AD4BC5CE05(L_36, NULL, (intptr_t)((void*)WebGLInput_OnValueChange_m625C675A2330B92B5E7ED45ECD14E920A2CE5357_RuntimeMethod_var), NULL);
		WebGLInputPlugin_WebGLInputOnValueChange_m757285F50B012805F5B56E914A9C14A8430A85EB(L_35, L_36, NULL);
		// WebGLInputPlugin.WebGLInputOnEditEnd(id, OnEditEnd);
		int32_t L_37 = __this->___id_6;
		Action_2_t6AAF2E215E74E16A4EEF0A0749A4A325D99F5BA6* L_38 = (Action_2_t6AAF2E215E74E16A4EEF0A0749A4A325D99F5BA6*)il2cpp_codegen_object_new(Action_2_t6AAF2E215E74E16A4EEF0A0749A4A325D99F5BA6_il2cpp_TypeInfo_var);
		NullCheck(L_38);
		Action_2__ctor_mECAF7244ADE81BED22587EECD7FD59AD4BC5CE05(L_38, NULL, (intptr_t)((void*)WebGLInput_OnEditEnd_mD46937A7A64BC00B06AB18DC7B1532677AEBB4AE_RuntimeMethod_var), NULL);
		WebGLInputPlugin_WebGLInputOnEditEnd_mA2EF5284E4139109F2C1AF6535DE3A998C623B6A(L_37, L_38, NULL);
		// WebGLInputPlugin.WebGLInputTab(id, OnTab);
		int32_t L_39 = __this->___id_6;
		Action_2_tD7438462601D3939500ED67463331FE00CFFBDB8* L_40 = (Action_2_tD7438462601D3939500ED67463331FE00CFFBDB8*)il2cpp_codegen_object_new(Action_2_tD7438462601D3939500ED67463331FE00CFFBDB8_il2cpp_TypeInfo_var);
		NullCheck(L_40);
		Action_2__ctor_m83CEE170A5B9427B596A04F9F50676B044223927(L_40, NULL, (intptr_t)((void*)WebGLInput_OnTab_m0F80B563448F8A140E4A704DC2501BF4A56DD20D_RuntimeMethod_var), NULL);
		WebGLInputPlugin_WebGLInputTab_mE0098C4E894B6CC801E33A7407DA66ECDC3EA0F5(L_39, L_40, NULL);
		// WebGLInputPlugin.WebGLInputMaxLength(id, (input.characterLimit > 0) ? input.characterLimit : 524288);
		int32_t L_41 = __this->___id_6;
		RuntimeObject* L_42 = __this->___input_7;
		NullCheck(L_42);
		int32_t L_43;
		L_43 = InterfaceFuncInvoker0< int32_t >::Invoke(6 /* System.Int32 WebGLSupport.IInputField::get_characterLimit() */, IInputField_t04870BDDFD3EBDFA93CB0E713DE6829FC99BFF65_il2cpp_TypeInfo_var, L_42);
		G_B6_0 = L_41;
		if ((((int32_t)L_43) > ((int32_t)0)))
		{
			G_B7_0 = L_41;
			goto IL_0164;
		}
	}
	{
		G_B8_0 = ((int32_t)524288);
		G_B8_1 = G_B6_0;
		goto IL_016f;
	}

IL_0164:
	{
		RuntimeObject* L_44 = __this->___input_7;
		NullCheck(L_44);
		int32_t L_45;
		L_45 = InterfaceFuncInvoker0< int32_t >::Invoke(6 /* System.Int32 WebGLSupport.IInputField::get_characterLimit() */, IInputField_t04870BDDFD3EBDFA93CB0E713DE6829FC99BFF65_il2cpp_TypeInfo_var, L_44);
		G_B8_0 = L_45;
		G_B8_1 = G_B7_0;
	}

IL_016f:
	{
		WebGLInputPlugin_WebGLInputMaxLength_mFD33ED6C71A6622CBF8114AF1CFD063EDEB3A542(G_B8_1, G_B8_0, NULL);
		// WebGLInputPlugin.WebGLInputFocus(id);
		int32_t L_46 = __this->___id_6;
		WebGLInputPlugin_WebGLInputFocus_m0B04B16B180EECDACB732CB1A7D8F56AFD605D2C(L_46, NULL);
		// if (input.OnFocusSelectAll)
		RuntimeObject* L_47 = __this->___input_7;
		NullCheck(L_47);
		bool L_48;
		L_48 = InterfaceFuncInvoker0< bool >::Invoke(14 /* System.Boolean WebGLSupport.IInputField::get_OnFocusSelectAll() */, IInputField_t04870BDDFD3EBDFA93CB0E713DE6829FC99BFF65_il2cpp_TypeInfo_var, L_47);
		if (!L_48)
		{
			goto IL_01a8;
		}
	}
	{
		// WebGLInputPlugin.WebGLInputSetSelectionRange(id, 0, input.text.Length);
		int32_t L_49 = __this->___id_6;
		RuntimeObject* L_50 = __this->___input_7;
		NullCheck(L_50);
		String_t* L_51;
		L_51 = InterfaceFuncInvoker0< String_t* >::Invoke(3 /* System.String WebGLSupport.IInputField::get_text() */, IInputField_t04870BDDFD3EBDFA93CB0E713DE6829FC99BFF65_il2cpp_TypeInfo_var, L_50);
		NullCheck(L_51);
		int32_t L_52;
		L_52 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_51, NULL);
		WebGLInputPlugin_WebGLInputSetSelectionRange_m7DEBA2D9B4B6E35AFA7F251EA8CDA1DCB4DE13D1(L_49, 0, L_52, NULL);
	}

IL_01a8:
	{
		// WebGLWindow.OnBlurEvent += OnWindowBlur;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_53 = (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)il2cpp_codegen_object_new(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		NullCheck(L_53);
		Action__ctor_mBDC7B0B4A3F583B64C2896F01BDED360772F67DC(L_53, __this, (intptr_t)((void*)WebGLInput_OnWindowBlur_m9488E769E35C9A4CB5620EAC612B54B4733B093A_RuntimeMethod_var), NULL);
		il2cpp_codegen_runtime_class_init_inline(WebGLWindow_t360F95487A76FFDFAD43C992ACEBF9CF8FA4D3A3_il2cpp_TypeInfo_var);
		WebGLWindow_add_OnBlurEvent_mAD3A05ED7219F7DBDCDE211AD302AFF6AAEC76AF(L_53, NULL);
		// }
		return;
	}
}
// System.Void WebGLSupport.WebGLInput::OnWindowBlur()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebGLInput_OnWindowBlur_m9488E769E35C9A4CB5620EAC612B54B4733B093A (WebGLInput_t20A7ED221656A06B7688C4010D4E7E8E74C4CE16* __this, const RuntimeMethod* method) 
{
	{
		// blurBlock = true;
		__this->___blurBlock_8 = (bool)1;
		// }
		return;
	}
}
// UnityEngine.Rect WebGLSupport.WebGLInput::GetScreenCoordinates(UnityEngine.RectTransform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D WebGLInput_GetScreenCoordinates_m5955BB63E635EC9808E2ECB80C721BA39FD693FF (WebGLInput_t20A7ED221656A06B7688C4010D4E7E8E74C4CE16* __this, RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___uiElement0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponentInParent_TisCanvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26_m5FB554DD7C0F662DAB84C0F292B221CAE3F0A5B3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* V_0 = NULL;
	Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* V_1 = NULL;
	bool V_2 = false;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_3;
	memset((&V_3), 0, sizeof(V_3));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_4;
	memset((&V_4), 0, sizeof(V_4));
	Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* V_5 = NULL;
	int32_t V_6 = 0;
	int32_t V_7 = 0;
	{
		// var worldCorners = new Vector3[4];
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_0 = (Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C*)(Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C*)SZArrayNew(Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C_il2cpp_TypeInfo_var, (uint32_t)4);
		V_0 = L_0;
		// uiElement.GetWorldCorners(worldCorners);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_1 = ___uiElement0;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_2 = V_0;
		NullCheck(L_1);
		RectTransform_GetWorldCorners_m6E15303C3B065B2F65E0A7F0E0217695564C2E09(L_1, L_2, NULL);
		// var canvas = uiElement.GetComponentInParent<Canvas>();
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_3 = ___uiElement0;
		NullCheck(L_3);
		Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* L_4;
		L_4 = Component_GetComponentInParent_TisCanvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26_m5FB554DD7C0F662DAB84C0F292B221CAE3F0A5B3(L_3, Component_GetComponentInParent_TisCanvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26_m5FB554DD7C0F662DAB84C0F292B221CAE3F0A5B3_RuntimeMethod_var);
		V_1 = L_4;
		// var useCamera = (canvas.renderMode != RenderMode.ScreenSpaceOverlay);
		Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* L_5 = V_1;
		NullCheck(L_5);
		int32_t L_6;
		L_6 = Canvas_get_renderMode_m1BEF259548C6CAD27E4466F31D20752D246688CC(L_5, NULL);
		V_2 = (bool)((!(((uint32_t)L_6) <= ((uint32_t)0)))? 1 : 0);
		// if (canvas && useCamera)
		Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* L_7 = V_1;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_8;
		L_8 = Object_op_Implicit_m18E1885C296CC868AC918101523697CFE6413C79(L_7, NULL);
		bool L_9 = V_2;
		if (!((int32_t)((int32_t)L_8&(int32_t)L_9)))
		{
			goto IL_006a;
		}
	}
	{
		// var camera = canvas.worldCamera;
		Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* L_10 = V_1;
		NullCheck(L_10);
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_11;
		L_11 = Canvas_get_worldCamera_mD2FDE13B61A5213F4E64B40008EB0A8D2D07B853(L_10, NULL);
		V_5 = L_11;
		// if (!camera) camera = Camera.main;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_12 = V_5;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_13;
		L_13 = Object_op_Implicit_m18E1885C296CC868AC918101523697CFE6413C79(L_12, NULL);
		if (L_13)
		{
			goto IL_0041;
		}
	}
	{
		// if (!camera) camera = Camera.main;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_14;
		L_14 = Camera_get_main_mF222B707D3BF8CC9C7544609EFC71CFB62E81D43(NULL);
		V_5 = L_14;
	}

IL_0041:
	{
		// for (var i = 0; i < worldCorners.Length; i++)
		V_6 = 0;
		goto IL_0063;
	}

IL_0046:
	{
		// worldCorners[i] = camera.WorldToScreenPoint(worldCorners[i]);
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_15 = V_0;
		int32_t L_16 = V_6;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_17 = V_5;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_18 = V_0;
		int32_t L_19 = V_6;
		NullCheck(L_18);
		int32_t L_20 = L_19;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_21 = (L_18)->GetAt(static_cast<il2cpp_array_size_t>(L_20));
		NullCheck(L_17);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_22;
		L_22 = Camera_WorldToScreenPoint_m26B4C8945C3B5731F1CC5944CFD96BF17126BAA3(L_17, L_21, NULL);
		NullCheck(L_15);
		(L_15)->SetAt(static_cast<il2cpp_array_size_t>(L_16), (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2)L_22);
		// for (var i = 0; i < worldCorners.Length; i++)
		int32_t L_23 = V_6;
		V_6 = ((int32_t)il2cpp_codegen_add(L_23, 1));
	}

IL_0063:
	{
		// for (var i = 0; i < worldCorners.Length; i++)
		int32_t L_24 = V_6;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_25 = V_0;
		NullCheck(L_25);
		if ((((int32_t)L_24) < ((int32_t)((int32_t)(((RuntimeArray*)L_25)->max_length)))))
		{
			goto IL_0046;
		}
	}

IL_006a:
	{
		// var min = new Vector3(float.MaxValue, float.MaxValue);
		Vector3__ctor_m5F87930F9B0828E5652E2D9D01ED907C01122C86_inline((&V_3), ((std::numeric_limits<float>::max)()), ((std::numeric_limits<float>::max)()), NULL);
		// var max = new Vector3(float.MinValue, float.MinValue);
		Vector3__ctor_m5F87930F9B0828E5652E2D9D01ED907C01122C86_inline((&V_4), (-(std::numeric_limits<float>::max)()), (-(std::numeric_limits<float>::max)()), NULL);
		// for (var i = 0; i < worldCorners.Length; i++)
		V_7 = 0;
		goto IL_0118;
	}

IL_0094:
	{
		// min.x = Mathf.Min(min.x, worldCorners[i].x);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_26 = V_3;
		float L_27 = L_26.___x_2;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_28 = V_0;
		int32_t L_29 = V_7;
		NullCheck(L_28);
		float L_30 = ((L_28)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_29)))->___x_2;
		float L_31;
		L_31 = Mathf_Min_m4F2A9C5128DC3F9E84865EE7ADA8DB5DA6B8B507_inline(L_27, L_30, NULL);
		(&V_3)->___x_2 = L_31;
		// min.y = Mathf.Min(min.y, worldCorners[i].y);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_32 = V_3;
		float L_33 = L_32.___y_3;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_34 = V_0;
		int32_t L_35 = V_7;
		NullCheck(L_34);
		float L_36 = ((L_34)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_35)))->___y_3;
		float L_37;
		L_37 = Mathf_Min_m4F2A9C5128DC3F9E84865EE7ADA8DB5DA6B8B507_inline(L_33, L_36, NULL);
		(&V_3)->___y_3 = L_37;
		// max.x = Mathf.Max(max.x, worldCorners[i].x);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_38 = V_4;
		float L_39 = L_38.___x_2;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_40 = V_0;
		int32_t L_41 = V_7;
		NullCheck(L_40);
		float L_42 = ((L_40)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_41)))->___x_2;
		float L_43;
		L_43 = Mathf_Max_mA9DCA91E87D6D27034F56ABA52606A9090406016_inline(L_39, L_42, NULL);
		(&V_4)->___x_2 = L_43;
		// max.y = Mathf.Max(max.y, worldCorners[i].y);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_44 = V_4;
		float L_45 = L_44.___y_3;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_46 = V_0;
		int32_t L_47 = V_7;
		NullCheck(L_46);
		float L_48 = ((L_46)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_47)))->___y_3;
		float L_49;
		L_49 = Mathf_Max_mA9DCA91E87D6D27034F56ABA52606A9090406016_inline(L_45, L_48, NULL);
		(&V_4)->___y_3 = L_49;
		// for (var i = 0; i < worldCorners.Length; i++)
		int32_t L_50 = V_7;
		V_7 = ((int32_t)il2cpp_codegen_add(L_50, 1));
	}

IL_0118:
	{
		// for (var i = 0; i < worldCorners.Length; i++)
		int32_t L_51 = V_7;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_52 = V_0;
		NullCheck(L_52);
		if ((((int32_t)L_51) < ((int32_t)((int32_t)(((RuntimeArray*)L_52)->max_length)))))
		{
			goto IL_0094;
		}
	}
	{
		// return new Rect(min.x, min.y, max.x - min.x, max.y - min.y);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_53 = V_3;
		float L_54 = L_53.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_55 = V_3;
		float L_56 = L_55.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_57 = V_4;
		float L_58 = L_57.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_59 = V_3;
		float L_60 = L_59.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_61 = V_4;
		float L_62 = L_61.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_63 = V_3;
		float L_64 = L_63.___y_3;
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_65;
		memset((&L_65), 0, sizeof(L_65));
		Rect__ctor_m18C3033D135097BEE424AAA68D91C706D2647F23((&L_65), L_54, L_56, ((float)il2cpp_codegen_subtract(L_58, L_60)), ((float)il2cpp_codegen_subtract(L_62, L_64)), /*hidden argument*/NULL);
		return L_65;
	}
}
// System.Void WebGLSupport.WebGLInput::DeactivateInputField()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebGLInput_DeactivateInputField_m4E87EA2F6D4E0DF331A4D5AA564EB25375E90981 (WebGLInput_t20A7ED221656A06B7688C4010D4E7E8E74C4CE16* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_ContainsKey_m7F72E314213887650CD6F6CBFAAF1344D1F07B85_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Remove_m0507E915ED1AEBF6BEB38EDE3E17B54F7943C195_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IInputField_t04870BDDFD3EBDFA93CB0E713DE6829FC99BFF65_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WebGLInput_OnWindowBlur_m9488E769E35C9A4CB5620EAC612B54B4733B093A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WebGLInput_t20A7ED221656A06B7688C4010D4E7E8E74C4CE16_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WebGLWindow_t360F95487A76FFDFAD43C992ACEBF9CF8FA4D3A3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (!instances.ContainsKey(id)) return;
		il2cpp_codegen_runtime_class_init_inline(WebGLInput_t20A7ED221656A06B7688C4010D4E7E8E74C4CE16_il2cpp_TypeInfo_var);
		Dictionary_2_t02972806B8AE7773FA4016F73A171E1AEAB527C6* L_0 = ((WebGLInput_t20A7ED221656A06B7688C4010D4E7E8E74C4CE16_StaticFields*)il2cpp_codegen_static_fields_for(WebGLInput_t20A7ED221656A06B7688C4010D4E7E8E74C4CE16_il2cpp_TypeInfo_var))->___instances_4;
		int32_t L_1 = __this->___id_6;
		NullCheck(L_0);
		bool L_2;
		L_2 = Dictionary_2_ContainsKey_m7F72E314213887650CD6F6CBFAAF1344D1F07B85(L_0, L_1, Dictionary_2_ContainsKey_m7F72E314213887650CD6F6CBFAAF1344D1F07B85_RuntimeMethod_var);
		if (L_2)
		{
			goto IL_0013;
		}
	}
	{
		// if (!instances.ContainsKey(id)) return;
		return;
	}

IL_0013:
	{
		// WebGLInputPlugin.WebGLInputDelete(id);
		int32_t L_3 = __this->___id_6;
		WebGLInputPlugin_WebGLInputDelete_mC60D7EA1110F3FFBC368CE45F0A5DDF2953876D7(L_3, NULL);
		// input.DeactivateInputField();
		RuntimeObject* L_4 = __this->___input_7;
		NullCheck(L_4);
		InterfaceActionInvoker0::Invoke(17 /* System.Void WebGLSupport.IInputField::DeactivateInputField() */, IInputField_t04870BDDFD3EBDFA93CB0E713DE6829FC99BFF65_il2cpp_TypeInfo_var, L_4);
		// instances.Remove(id);
		il2cpp_codegen_runtime_class_init_inline(WebGLInput_t20A7ED221656A06B7688C4010D4E7E8E74C4CE16_il2cpp_TypeInfo_var);
		Dictionary_2_t02972806B8AE7773FA4016F73A171E1AEAB527C6* L_5 = ((WebGLInput_t20A7ED221656A06B7688C4010D4E7E8E74C4CE16_StaticFields*)il2cpp_codegen_static_fields_for(WebGLInput_t20A7ED221656A06B7688C4010D4E7E8E74C4CE16_il2cpp_TypeInfo_var))->___instances_4;
		int32_t L_6 = __this->___id_6;
		NullCheck(L_5);
		bool L_7;
		L_7 = Dictionary_2_Remove_m0507E915ED1AEBF6BEB38EDE3E17B54F7943C195(L_5, L_6, Dictionary_2_Remove_m0507E915ED1AEBF6BEB38EDE3E17B54F7943C195_RuntimeMethod_var);
		// id = -1;    // reset id to -1;
		__this->___id_6 = (-1);
		// WebGLWindow.OnBlurEvent -= OnWindowBlur;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_8 = (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)il2cpp_codegen_object_new(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		NullCheck(L_8);
		Action__ctor_mBDC7B0B4A3F583B64C2896F01BDED360772F67DC(L_8, __this, (intptr_t)((void*)WebGLInput_OnWindowBlur_m9488E769E35C9A4CB5620EAC612B54B4733B093A_RuntimeMethod_var), NULL);
		il2cpp_codegen_runtime_class_init_inline(WebGLWindow_t360F95487A76FFDFAD43C992ACEBF9CF8FA4D3A3_il2cpp_TypeInfo_var);
		WebGLWindow_remove_OnBlurEvent_m263FC52D6E9E0214C0E7EA8CE947FC5C336BCE79(L_8, NULL);
		// }
		return;
	}
}
// System.Void WebGLSupport.WebGLInput::OnFocus(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebGLInput_OnFocus_m54DB80C07B523F13C6259FFCFD90BA552CF2FE64 (int32_t ___id0, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void WebGLSupport.WebGLInput::OnBlur(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebGLInput_OnBlur_mCFFB178E96DC6F40021B960A740AB053AEB9B8BE (int32_t ___id0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Item_m930DCD8CEFA743C98FAB7799CE35113DA70B379A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WebGLInput_t20A7ED221656A06B7688C4010D4E7E8E74C4CE16_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// instances[id].StartCoroutine(Blur(id));
		il2cpp_codegen_runtime_class_init_inline(WebGLInput_t20A7ED221656A06B7688C4010D4E7E8E74C4CE16_il2cpp_TypeInfo_var);
		Dictionary_2_t02972806B8AE7773FA4016F73A171E1AEAB527C6* L_0 = ((WebGLInput_t20A7ED221656A06B7688C4010D4E7E8E74C4CE16_StaticFields*)il2cpp_codegen_static_fields_for(WebGLInput_t20A7ED221656A06B7688C4010D4E7E8E74C4CE16_il2cpp_TypeInfo_var))->___instances_4;
		int32_t L_1 = ___id0;
		NullCheck(L_0);
		WebGLInput_t20A7ED221656A06B7688C4010D4E7E8E74C4CE16* L_2;
		L_2 = Dictionary_2_get_Item_m930DCD8CEFA743C98FAB7799CE35113DA70B379A(L_0, L_1, Dictionary_2_get_Item_m930DCD8CEFA743C98FAB7799CE35113DA70B379A_RuntimeMethod_var);
		int32_t L_3 = ___id0;
		RuntimeObject* L_4;
		L_4 = WebGLInput_Blur_m7C2CDB09E0E3A835FCDF57F4F712760455086124(L_3, NULL);
		NullCheck(L_2);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_5;
		L_5 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(L_2, L_4, NULL);
		// }
		return;
	}
}
// System.Collections.IEnumerator WebGLSupport.WebGLInput::Blur(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WebGLInput_Blur_m7C2CDB09E0E3A835FCDF57F4F712760455086124 (int32_t ___id0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CBlurU3Ed__21_t758693716AB460F60B691592D89A9DD3AE6F69DE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CBlurU3Ed__21_t758693716AB460F60B691592D89A9DD3AE6F69DE* L_0 = (U3CBlurU3Ed__21_t758693716AB460F60B691592D89A9DD3AE6F69DE*)il2cpp_codegen_object_new(U3CBlurU3Ed__21_t758693716AB460F60B691592D89A9DD3AE6F69DE_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CBlurU3Ed__21__ctor_m0CC57EF6BDE5728AC9D840929E667403172CB4EC(L_0, 0, NULL);
		U3CBlurU3Ed__21_t758693716AB460F60B691592D89A9DD3AE6F69DE* L_1 = L_0;
		int32_t L_2 = ___id0;
		NullCheck(L_1);
		L_1->___id_2 = L_2;
		return L_1;
	}
}
// System.Void WebGLSupport.WebGLInput::OnValueChange(System.Int32,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebGLInput_OnValueChange_m625C675A2330B92B5E7ED45ECD14E920A2CE5357 (int32_t ___id0, String_t* ___value1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_ContainsKey_m7F72E314213887650CD6F6CBFAAF1344D1F07B85_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Item_m930DCD8CEFA743C98FAB7799CE35113DA70B379A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IInputField_t04870BDDFD3EBDFA93CB0E713DE6829FC99BFF65_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WebGLInput_t20A7ED221656A06B7688C4010D4E7E8E74C4CE16_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	WebGLInput_t20A7ED221656A06B7688C4010D4E7E8E74C4CE16* V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	{
		// if (!instances.ContainsKey(id)) return;
		il2cpp_codegen_runtime_class_init_inline(WebGLInput_t20A7ED221656A06B7688C4010D4E7E8E74C4CE16_il2cpp_TypeInfo_var);
		Dictionary_2_t02972806B8AE7773FA4016F73A171E1AEAB527C6* L_0 = ((WebGLInput_t20A7ED221656A06B7688C4010D4E7E8E74C4CE16_StaticFields*)il2cpp_codegen_static_fields_for(WebGLInput_t20A7ED221656A06B7688C4010D4E7E8E74C4CE16_il2cpp_TypeInfo_var))->___instances_4;
		int32_t L_1 = ___id0;
		NullCheck(L_0);
		bool L_2;
		L_2 = Dictionary_2_ContainsKey_m7F72E314213887650CD6F6CBFAAF1344D1F07B85(L_0, L_1, Dictionary_2_ContainsKey_m7F72E314213887650CD6F6CBFAAF1344D1F07B85_RuntimeMethod_var);
		if (L_2)
		{
			goto IL_000e;
		}
	}
	{
		// if (!instances.ContainsKey(id)) return;
		return;
	}

IL_000e:
	{
		// var instance = instances[id];
		il2cpp_codegen_runtime_class_init_inline(WebGLInput_t20A7ED221656A06B7688C4010D4E7E8E74C4CE16_il2cpp_TypeInfo_var);
		Dictionary_2_t02972806B8AE7773FA4016F73A171E1AEAB527C6* L_3 = ((WebGLInput_t20A7ED221656A06B7688C4010D4E7E8E74C4CE16_StaticFields*)il2cpp_codegen_static_fields_for(WebGLInput_t20A7ED221656A06B7688C4010D4E7E8E74C4CE16_il2cpp_TypeInfo_var))->___instances_4;
		int32_t L_4 = ___id0;
		NullCheck(L_3);
		WebGLInput_t20A7ED221656A06B7688C4010D4E7E8E74C4CE16* L_5;
		L_5 = Dictionary_2_get_Item_m930DCD8CEFA743C98FAB7799CE35113DA70B379A(L_3, L_4, Dictionary_2_get_Item_m930DCD8CEFA743C98FAB7799CE35113DA70B379A_RuntimeMethod_var);
		V_0 = L_5;
		// if (!instance.input.ReadOnly)
		WebGLInput_t20A7ED221656A06B7688C4010D4E7E8E74C4CE16* L_6 = V_0;
		NullCheck(L_6);
		RuntimeObject* L_7 = L_6->___input_7;
		NullCheck(L_7);
		bool L_8;
		L_8 = InterfaceFuncInvoker0< bool >::Invoke(13 /* System.Boolean WebGLSupport.IInputField::get_ReadOnly() */, IInputField_t04870BDDFD3EBDFA93CB0E713DE6829FC99BFF65_il2cpp_TypeInfo_var, L_7);
		if (L_8)
		{
			goto IL_0033;
		}
	}
	{
		// instance.input.text = value;
		WebGLInput_t20A7ED221656A06B7688C4010D4E7E8E74C4CE16* L_9 = V_0;
		NullCheck(L_9);
		RuntimeObject* L_10 = L_9->___input_7;
		String_t* L_11 = ___value1;
		NullCheck(L_10);
		InterfaceActionInvoker1< String_t* >::Invoke(4 /* System.Void WebGLSupport.IInputField::set_text(System.String) */, IInputField_t04870BDDFD3EBDFA93CB0E713DE6829FC99BFF65_il2cpp_TypeInfo_var, L_10, L_11);
	}

IL_0033:
	{
		// if (instance.input.contentType == ContentType.Name)
		WebGLInput_t20A7ED221656A06B7688C4010D4E7E8E74C4CE16* L_12 = V_0;
		NullCheck(L_12);
		RuntimeObject* L_13 = L_12->___input_7;
		NullCheck(L_13);
		int32_t L_14;
		L_14 = InterfaceFuncInvoker0< int32_t >::Invoke(0 /* WebGLSupport.ContentType WebGLSupport.IInputField::get_contentType() */, IInputField_t04870BDDFD3EBDFA93CB0E713DE6829FC99BFF65_il2cpp_TypeInfo_var, L_13);
		if ((!(((uint32_t)L_14) == ((uint32_t)5))))
		{
			goto IL_0062;
		}
	}
	{
		// if (string.Compare(instance.input.text, value, true) == 0)
		WebGLInput_t20A7ED221656A06B7688C4010D4E7E8E74C4CE16* L_15 = V_0;
		NullCheck(L_15);
		RuntimeObject* L_16 = L_15->___input_7;
		NullCheck(L_16);
		String_t* L_17;
		L_17 = InterfaceFuncInvoker0< String_t* >::Invoke(3 /* System.String WebGLSupport.IInputField::get_text() */, IInputField_t04870BDDFD3EBDFA93CB0E713DE6829FC99BFF65_il2cpp_TypeInfo_var, L_16);
		String_t* L_18 = ___value1;
		int32_t L_19;
		L_19 = String_Compare_mA1B6FACF0E4A9B45FFECF215BF15A040C2DA9A34(L_17, L_18, (bool)1, NULL);
		if (L_19)
		{
			goto IL_0062;
		}
	}
	{
		// value = instance.input.text;
		WebGLInput_t20A7ED221656A06B7688C4010D4E7E8E74C4CE16* L_20 = V_0;
		NullCheck(L_20);
		RuntimeObject* L_21 = L_20->___input_7;
		NullCheck(L_21);
		String_t* L_22;
		L_22 = InterfaceFuncInvoker0< String_t* >::Invoke(3 /* System.String WebGLSupport.IInputField::get_text() */, IInputField_t04870BDDFD3EBDFA93CB0E713DE6829FC99BFF65_il2cpp_TypeInfo_var, L_21);
		___value1 = L_22;
	}

IL_0062:
	{
		// if (value != instance.input.text)
		String_t* L_23 = ___value1;
		WebGLInput_t20A7ED221656A06B7688C4010D4E7E8E74C4CE16* L_24 = V_0;
		NullCheck(L_24);
		RuntimeObject* L_25 = L_24->___input_7;
		NullCheck(L_25);
		String_t* L_26;
		L_26 = InterfaceFuncInvoker0< String_t* >::Invoke(3 /* System.String WebGLSupport.IInputField::get_text() */, IInputField_t04870BDDFD3EBDFA93CB0E713DE6829FC99BFF65_il2cpp_TypeInfo_var, L_25);
		bool L_27;
		L_27 = String_op_Inequality_m0FBE5AC4931D312E5B347BAA603755676E6DA2FE(L_23, L_26, NULL);
		if (!L_27)
		{
			goto IL_00b8;
		}
	}
	{
		// var start = WebGLInputPlugin.WebGLInputSelectionStart(id);
		int32_t L_28 = ___id0;
		int32_t L_29;
		L_29 = WebGLInputPlugin_WebGLInputSelectionStart_m3AA87E082F4338544E8878E64DC454B648EACAB1(L_28, NULL);
		V_1 = L_29;
		// var end = WebGLInputPlugin.WebGLInputSelectionEnd(id);
		int32_t L_30 = ___id0;
		int32_t L_31;
		L_31 = WebGLInputPlugin_WebGLInputSelectionEnd_mCDDD6F02146F520976A2B10EBC9DD9D3023DC21B(L_30, NULL);
		V_2 = L_31;
		// var offset = instance.input.text.Length - value.Length;
		WebGLInput_t20A7ED221656A06B7688C4010D4E7E8E74C4CE16* L_32 = V_0;
		NullCheck(L_32);
		RuntimeObject* L_33 = L_32->___input_7;
		NullCheck(L_33);
		String_t* L_34;
		L_34 = InterfaceFuncInvoker0< String_t* >::Invoke(3 /* System.String WebGLSupport.IInputField::get_text() */, IInputField_t04870BDDFD3EBDFA93CB0E713DE6829FC99BFF65_il2cpp_TypeInfo_var, L_33);
		NullCheck(L_34);
		int32_t L_35;
		L_35 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_34, NULL);
		String_t* L_36 = ___value1;
		NullCheck(L_36);
		int32_t L_37;
		L_37 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_36, NULL);
		V_3 = ((int32_t)il2cpp_codegen_subtract(L_35, L_37));
		// WebGLInputPlugin.WebGLInputText(id, instance.input.text);
		int32_t L_38 = ___id0;
		WebGLInput_t20A7ED221656A06B7688C4010D4E7E8E74C4CE16* L_39 = V_0;
		NullCheck(L_39);
		RuntimeObject* L_40 = L_39->___input_7;
		NullCheck(L_40);
		String_t* L_41;
		L_41 = InterfaceFuncInvoker0< String_t* >::Invoke(3 /* System.String WebGLSupport.IInputField::get_text() */, IInputField_t04870BDDFD3EBDFA93CB0E713DE6829FC99BFF65_il2cpp_TypeInfo_var, L_40);
		WebGLInputPlugin_WebGLInputText_m4F6B1ACC17624AB94E5222CB6A30764E03C67F75(L_38, L_41, NULL);
		// WebGLInputPlugin.WebGLInputSetSelectionRange(id, start + offset, end + offset);
		int32_t L_42 = ___id0;
		int32_t L_43 = V_1;
		int32_t L_44 = V_3;
		int32_t L_45 = V_2;
		int32_t L_46 = V_3;
		WebGLInputPlugin_WebGLInputSetSelectionRange_m7DEBA2D9B4B6E35AFA7F251EA8CDA1DCB4DE13D1(L_42, ((int32_t)il2cpp_codegen_add(L_43, L_44)), ((int32_t)il2cpp_codegen_add(L_45, L_46)), NULL);
	}

IL_00b8:
	{
		// }
		return;
	}
}
// System.Void WebGLSupport.WebGLInput::OnEditEnd(System.Int32,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebGLInput_OnEditEnd_mD46937A7A64BC00B06AB18DC7B1532677AEBB4AE (int32_t ___id0, String_t* ___value1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Item_m930DCD8CEFA743C98FAB7799CE35113DA70B379A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IInputField_t04870BDDFD3EBDFA93CB0E713DE6829FC99BFF65_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WebGLInput_t20A7ED221656A06B7688C4010D4E7E8E74C4CE16_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (!instances[id].input.ReadOnly)
		il2cpp_codegen_runtime_class_init_inline(WebGLInput_t20A7ED221656A06B7688C4010D4E7E8E74C4CE16_il2cpp_TypeInfo_var);
		Dictionary_2_t02972806B8AE7773FA4016F73A171E1AEAB527C6* L_0 = ((WebGLInput_t20A7ED221656A06B7688C4010D4E7E8E74C4CE16_StaticFields*)il2cpp_codegen_static_fields_for(WebGLInput_t20A7ED221656A06B7688C4010D4E7E8E74C4CE16_il2cpp_TypeInfo_var))->___instances_4;
		int32_t L_1 = ___id0;
		NullCheck(L_0);
		WebGLInput_t20A7ED221656A06B7688C4010D4E7E8E74C4CE16* L_2;
		L_2 = Dictionary_2_get_Item_m930DCD8CEFA743C98FAB7799CE35113DA70B379A(L_0, L_1, Dictionary_2_get_Item_m930DCD8CEFA743C98FAB7799CE35113DA70B379A_RuntimeMethod_var);
		NullCheck(L_2);
		RuntimeObject* L_3 = L_2->___input_7;
		NullCheck(L_3);
		bool L_4;
		L_4 = InterfaceFuncInvoker0< bool >::Invoke(13 /* System.Boolean WebGLSupport.IInputField::get_ReadOnly() */, IInputField_t04870BDDFD3EBDFA93CB0E713DE6829FC99BFF65_il2cpp_TypeInfo_var, L_3);
		if (L_4)
		{
			goto IL_002d;
		}
	}
	{
		// instances[id].input.text = value;
		il2cpp_codegen_runtime_class_init_inline(WebGLInput_t20A7ED221656A06B7688C4010D4E7E8E74C4CE16_il2cpp_TypeInfo_var);
		Dictionary_2_t02972806B8AE7773FA4016F73A171E1AEAB527C6* L_5 = ((WebGLInput_t20A7ED221656A06B7688C4010D4E7E8E74C4CE16_StaticFields*)il2cpp_codegen_static_fields_for(WebGLInput_t20A7ED221656A06B7688C4010D4E7E8E74C4CE16_il2cpp_TypeInfo_var))->___instances_4;
		int32_t L_6 = ___id0;
		NullCheck(L_5);
		WebGLInput_t20A7ED221656A06B7688C4010D4E7E8E74C4CE16* L_7;
		L_7 = Dictionary_2_get_Item_m930DCD8CEFA743C98FAB7799CE35113DA70B379A(L_5, L_6, Dictionary_2_get_Item_m930DCD8CEFA743C98FAB7799CE35113DA70B379A_RuntimeMethod_var);
		NullCheck(L_7);
		RuntimeObject* L_8 = L_7->___input_7;
		String_t* L_9 = ___value1;
		NullCheck(L_8);
		InterfaceActionInvoker1< String_t* >::Invoke(4 /* System.Void WebGLSupport.IInputField::set_text(System.String) */, IInputField_t04870BDDFD3EBDFA93CB0E713DE6829FC99BFF65_il2cpp_TypeInfo_var, L_8, L_9);
	}

IL_002d:
	{
		// }
		return;
	}
}
// System.Void WebGLSupport.WebGLInput::OnTab(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebGLInput_OnTab_m0F80B563448F8A140E4A704DC2501BF4A56DD20D (int32_t ___id0, int32_t ___value1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Item_m930DCD8CEFA743C98FAB7799CE35113DA70B379A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WebGLInputTabFocus_tE6406DD8FFC4C0341C1B9306BDBD56BFA68FE40E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WebGLInput_t20A7ED221656A06B7688C4010D4E7E8E74C4CE16_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// WebGLInputTabFocus.OnTab(instances[id], value);
		il2cpp_codegen_runtime_class_init_inline(WebGLInput_t20A7ED221656A06B7688C4010D4E7E8E74C4CE16_il2cpp_TypeInfo_var);
		Dictionary_2_t02972806B8AE7773FA4016F73A171E1AEAB527C6* L_0 = ((WebGLInput_t20A7ED221656A06B7688C4010D4E7E8E74C4CE16_StaticFields*)il2cpp_codegen_static_fields_for(WebGLInput_t20A7ED221656A06B7688C4010D4E7E8E74C4CE16_il2cpp_TypeInfo_var))->___instances_4;
		int32_t L_1 = ___id0;
		NullCheck(L_0);
		WebGLInput_t20A7ED221656A06B7688C4010D4E7E8E74C4CE16* L_2;
		L_2 = Dictionary_2_get_Item_m930DCD8CEFA743C98FAB7799CE35113DA70B379A(L_0, L_1, Dictionary_2_get_Item_m930DCD8CEFA743C98FAB7799CE35113DA70B379A_RuntimeMethod_var);
		int32_t L_3 = ___value1;
		il2cpp_codegen_runtime_class_init_inline(WebGLInputTabFocus_tE6406DD8FFC4C0341C1B9306BDBD56BFA68FE40E_il2cpp_TypeInfo_var);
		WebGLInputTabFocus_OnTab_m2FF5D1868D2B2FA9A5315910236E63AE0E907341(L_2, L_3, NULL);
		// }
		return;
	}
}
// System.Void WebGLSupport.WebGLInput::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebGLInput_Update_m6C0C61A3862B07FF199D4147D5FA03770913FA91 (WebGLInput_t20A7ED221656A06B7688C4010D4E7E8E74C4CE16* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_ContainsKey_m7F72E314213887650CD6F6CBFAAF1344D1F07B85_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IInputField_t04870BDDFD3EBDFA93CB0E713DE6829FC99BFF65_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WebGLInput_t20A7ED221656A06B7688C4010D4E7E8E74C4CE16_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		// if (input == null || !input.isFocused)
		RuntimeObject* L_0 = __this->___input_7;
		if (!L_0)
		{
			goto IL_0015;
		}
	}
	{
		RuntimeObject* L_1 = __this->___input_7;
		NullCheck(L_1);
		bool L_2;
		L_2 = InterfaceFuncInvoker0< bool >::Invoke(8 /* System.Boolean WebGLSupport.IInputField::get_isFocused() */, IInputField_t04870BDDFD3EBDFA93CB0E713DE6829FC99BFF65_il2cpp_TypeInfo_var, L_1);
		if (L_2)
		{
			goto IL_001c;
		}
	}

IL_0015:
	{
		// CheckOutFocus();
		WebGLInput_CheckOutFocus_mCF0504E016AA68B54E676EA8089F35856DFB8170(__this, NULL);
		// return;
		return;
	}

IL_001c:
	{
		// if (!instances.ContainsKey(id))
		il2cpp_codegen_runtime_class_init_inline(WebGLInput_t20A7ED221656A06B7688C4010D4E7E8E74C4CE16_il2cpp_TypeInfo_var);
		Dictionary_2_t02972806B8AE7773FA4016F73A171E1AEAB527C6* L_3 = ((WebGLInput_t20A7ED221656A06B7688C4010D4E7E8E74C4CE16_StaticFields*)il2cpp_codegen_static_fields_for(WebGLInput_t20A7ED221656A06B7688C4010D4E7E8E74C4CE16_il2cpp_TypeInfo_var))->___instances_4;
		int32_t L_4 = __this->___id_6;
		NullCheck(L_3);
		bool L_5;
		L_5 = Dictionary_2_ContainsKey_m7F72E314213887650CD6F6CBFAAF1344D1F07B85(L_3, L_4, Dictionary_2_ContainsKey_m7F72E314213887650CD6F6CBFAAF1344D1F07B85_RuntimeMethod_var);
		if (L_5)
		{
			goto IL_003e;
		}
	}
	{
		// if (Application.isMobilePlatform)
		bool L_6;
		L_6 = Application_get_isMobilePlatform_mBFFD8F419C7FB2FF99C84497C135007BFB5F8B53(NULL);
		if (!L_6)
		{
			goto IL_0036;
		}
	}
	{
		// return;
		return;
	}

IL_0036:
	{
		// OnSelect();
		WebGLInput_OnSelect_mCBFF3C8DB21F48A4837D26AB9F4D8833FFDA040A(__this, NULL);
		goto IL_005e;
	}

IL_003e:
	{
		// else if (!WebGLInputPlugin.WebGLInputIsFocus(id))
		int32_t L_7 = __this->___id_6;
		bool L_8;
		L_8 = WebGLInputPlugin_WebGLInputIsFocus_m8C82A2A1EBFC699255358BB93DBA9603B8C8E418(L_7, NULL);
		if (L_8)
		{
			goto IL_005e;
		}
	}
	{
		// if (Application.isMobilePlatform)
		bool L_9;
		L_9 = Application_get_isMobilePlatform_mBFFD8F419C7FB2FF99C84497C135007BFB5F8B53(NULL);
		if (!L_9)
		{
			goto IL_0053;
		}
	}
	{
		// return;
		return;
	}

IL_0053:
	{
		// WebGLInputPlugin.WebGLInputFocus(id);
		int32_t L_10 = __this->___id_6;
		WebGLInputPlugin_WebGLInputFocus_m0B04B16B180EECDACB732CB1A7D8F56AFD605D2C(L_10, NULL);
	}

IL_005e:
	{
		// var start = WebGLInputPlugin.WebGLInputSelectionStart(id);
		int32_t L_11 = __this->___id_6;
		int32_t L_12;
		L_12 = WebGLInputPlugin_WebGLInputSelectionStart_m3AA87E082F4338544E8878E64DC454B648EACAB1(L_11, NULL);
		V_0 = L_12;
		// var end = WebGLInputPlugin.WebGLInputSelectionEnd(id);
		int32_t L_13 = __this->___id_6;
		int32_t L_14;
		L_14 = WebGLInputPlugin_WebGLInputSelectionEnd_mCDDD6F02146F520976A2B10EBC9DD9D3023DC21B(L_13, NULL);
		V_1 = L_14;
		// if (WebGLInputPlugin.WebGLInputSelectionDirection(id) == -1)
		int32_t L_15 = __this->___id_6;
		int32_t L_16;
		L_16 = WebGLInputPlugin_WebGLInputSelectionDirection_m032D107EFC91EB87ECE22BFC9E3174CB7B540906(L_15, NULL);
		if ((!(((uint32_t)L_16) == ((uint32_t)(-1)))))
		{
			goto IL_009e;
		}
	}
	{
		// input.selectionFocusPosition = start;
		RuntimeObject* L_17 = __this->___input_7;
		int32_t L_18 = V_0;
		NullCheck(L_17);
		InterfaceActionInvoker1< int32_t >::Invoke(10 /* System.Void WebGLSupport.IInputField::set_selectionFocusPosition(System.Int32) */, IInputField_t04870BDDFD3EBDFA93CB0E713DE6829FC99BFF65_il2cpp_TypeInfo_var, L_17, L_18);
		// input.selectionAnchorPosition = end;
		RuntimeObject* L_19 = __this->___input_7;
		int32_t L_20 = V_1;
		NullCheck(L_19);
		InterfaceActionInvoker1< int32_t >::Invoke(12 /* System.Void WebGLSupport.IInputField::set_selectionAnchorPosition(System.Int32) */, IInputField_t04870BDDFD3EBDFA93CB0E713DE6829FC99BFF65_il2cpp_TypeInfo_var, L_19, L_20);
		goto IL_00b6;
	}

IL_009e:
	{
		// input.selectionFocusPosition = end;
		RuntimeObject* L_21 = __this->___input_7;
		int32_t L_22 = V_1;
		NullCheck(L_21);
		InterfaceActionInvoker1< int32_t >::Invoke(10 /* System.Void WebGLSupport.IInputField::set_selectionFocusPosition(System.Int32) */, IInputField_t04870BDDFD3EBDFA93CB0E713DE6829FC99BFF65_il2cpp_TypeInfo_var, L_21, L_22);
		// input.selectionAnchorPosition = start;
		RuntimeObject* L_23 = __this->___input_7;
		int32_t L_24 = V_0;
		NullCheck(L_23);
		InterfaceActionInvoker1< int32_t >::Invoke(12 /* System.Void WebGLSupport.IInputField::set_selectionAnchorPosition(System.Int32) */, IInputField_t04870BDDFD3EBDFA93CB0E713DE6829FC99BFF65_il2cpp_TypeInfo_var, L_23, L_24);
	}

IL_00b6:
	{
		// input.Rebuild();
		RuntimeObject* L_25 = __this->___input_7;
		NullCheck(L_25);
		InterfaceActionInvoker0::Invoke(18 /* System.Void WebGLSupport.IInputField::Rebuild() */, IInputField_t04870BDDFD3EBDFA93CB0E713DE6829FC99BFF65_il2cpp_TypeInfo_var, L_25);
		// }
		return;
	}
}
// System.Void WebGLSupport.WebGLInput::OnDestroy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebGLInput_OnDestroy_m9ED21A4E5C159E613B86736A65E1E8216445BE3E (WebGLInput_t20A7ED221656A06B7688C4010D4E7E8E74C4CE16* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_ContainsKey_m7F72E314213887650CD6F6CBFAAF1344D1F07B85_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WebGLInput_t20A7ED221656A06B7688C4010D4E7E8E74C4CE16_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (!instances.ContainsKey(id)) return;
		il2cpp_codegen_runtime_class_init_inline(WebGLInput_t20A7ED221656A06B7688C4010D4E7E8E74C4CE16_il2cpp_TypeInfo_var);
		Dictionary_2_t02972806B8AE7773FA4016F73A171E1AEAB527C6* L_0 = ((WebGLInput_t20A7ED221656A06B7688C4010D4E7E8E74C4CE16_StaticFields*)il2cpp_codegen_static_fields_for(WebGLInput_t20A7ED221656A06B7688C4010D4E7E8E74C4CE16_il2cpp_TypeInfo_var))->___instances_4;
		int32_t L_1 = __this->___id_6;
		NullCheck(L_0);
		bool L_2;
		L_2 = Dictionary_2_ContainsKey_m7F72E314213887650CD6F6CBFAAF1344D1F07B85(L_0, L_1, Dictionary_2_ContainsKey_m7F72E314213887650CD6F6CBFAAF1344D1F07B85_RuntimeMethod_var);
		if (L_2)
		{
			goto IL_0013;
		}
	}
	{
		// if (!instances.ContainsKey(id)) return;
		return;
	}

IL_0013:
	{
		// DeactivateInputField();
		WebGLInput_DeactivateInputField_m4E87EA2F6D4E0DF331A4D5AA564EB25375E90981(__this, NULL);
		// }
		return;
	}
}
// System.Void WebGLSupport.WebGLInput::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebGLInput_OnEnable_mCD77EA7BB4A095709F3664974265082C788AFCEF (WebGLInput_t20A7ED221656A06B7688C4010D4E7E8E74C4CE16* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WebGLInputTabFocus_tE6406DD8FFC4C0341C1B9306BDBD56BFA68FE40E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// WebGLInputTabFocus.Add(this);
		il2cpp_codegen_runtime_class_init_inline(WebGLInputTabFocus_tE6406DD8FFC4C0341C1B9306BDBD56BFA68FE40E_il2cpp_TypeInfo_var);
		WebGLInputTabFocus_Add_m559CF3ECEF31308C59B021A231768FC1F16E7565(__this, NULL);
		// }
		return;
	}
}
// System.Void WebGLSupport.WebGLInput::OnDisable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebGLInput_OnDisable_m169E096A04A09A58D0C83D61092FD0AD46D4A072 (WebGLInput_t20A7ED221656A06B7688C4010D4E7E8E74C4CE16* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WebGLInputTabFocus_tE6406DD8FFC4C0341C1B9306BDBD56BFA68FE40E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// WebGLInputTabFocus.Remove(this);
		il2cpp_codegen_runtime_class_init_inline(WebGLInputTabFocus_tE6406DD8FFC4C0341C1B9306BDBD56BFA68FE40E_il2cpp_TypeInfo_var);
		WebGLInputTabFocus_Remove_m02A48E2F2B5EDCF092DAACC24B396A8D2D9CF713(__this, NULL);
		// }
		return;
	}
}
// System.Int32 WebGLSupport.WebGLInput::CompareTo(WebGLSupport.WebGLInput)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t WebGLInput_CompareTo_m5CD13617E1D0F034554D0CB72CF0B3E97C1D74A2 (WebGLInput_t20A7ED221656A06B7688C4010D4E7E8E74C4CE16* __this, WebGLInput_t20A7ED221656A06B7688C4010D4E7E8E74C4CE16* ___other0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IInputField_t04870BDDFD3EBDFA93CB0E713DE6829FC99BFF65_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D V_0;
	memset((&V_0), 0, sizeof(V_0));
	Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D V_1;
	memset((&V_1), 0, sizeof(V_1));
	int32_t V_2 = 0;
	float V_3 = 0.0f;
	{
		// var a = GetScreenCoordinates(input.RectTransform());
		RuntimeObject* L_0 = __this->___input_7;
		NullCheck(L_0);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_1;
		L_1 = InterfaceFuncInvoker0< RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* >::Invoke(15 /* UnityEngine.RectTransform WebGLSupport.IInputField::RectTransform() */, IInputField_t04870BDDFD3EBDFA93CB0E713DE6829FC99BFF65_il2cpp_TypeInfo_var, L_0);
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_2;
		L_2 = WebGLInput_GetScreenCoordinates_m5955BB63E635EC9808E2ECB80C721BA39FD693FF(__this, L_1, NULL);
		V_0 = L_2;
		// var b = GetScreenCoordinates(other.input.RectTransform());
		WebGLInput_t20A7ED221656A06B7688C4010D4E7E8E74C4CE16* L_3 = ___other0;
		NullCheck(L_3);
		RuntimeObject* L_4 = L_3->___input_7;
		NullCheck(L_4);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_5;
		L_5 = InterfaceFuncInvoker0< RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* >::Invoke(15 /* UnityEngine.RectTransform WebGLSupport.IInputField::RectTransform() */, IInputField_t04870BDDFD3EBDFA93CB0E713DE6829FC99BFF65_il2cpp_TypeInfo_var, L_4);
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_6;
		L_6 = WebGLInput_GetScreenCoordinates_m5955BB63E635EC9808E2ECB80C721BA39FD693FF(__this, L_5, NULL);
		V_1 = L_6;
		// var res = b.y.CompareTo(a.y);
		float L_7;
		L_7 = Rect_get_y_mC733E8D49F3CE21B2A3D40A1B72D687F22C97F49((&V_1), NULL);
		V_3 = L_7;
		float L_8;
		L_8 = Rect_get_y_mC733E8D49F3CE21B2A3D40A1B72D687F22C97F49((&V_0), NULL);
		int32_t L_9;
		L_9 = Single_CompareTo_m06F7868162EB392D3E99103D1A0BD27463C9E66F((&V_3), L_8, NULL);
		V_2 = L_9;
		// if (res == 0) res = a.x.CompareTo(b.x);
		int32_t L_10 = V_2;
		if (L_10)
		{
			goto IL_0055;
		}
	}
	{
		// if (res == 0) res = a.x.CompareTo(b.x);
		float L_11;
		L_11 = Rect_get_x_mB267B718E0D067F2BAE31BA477647FBF964916EB((&V_0), NULL);
		V_3 = L_11;
		float L_12;
		L_12 = Rect_get_x_mB267B718E0D067F2BAE31BA477647FBF964916EB((&V_1), NULL);
		int32_t L_13;
		L_13 = Single_CompareTo_m06F7868162EB392D3E99103D1A0BD27463C9E66F((&V_3), L_12, NULL);
		V_2 = L_13;
	}

IL_0055:
	{
		// return res;
		int32_t L_14 = V_2;
		return L_14;
	}
}
// System.Void WebGLSupport.WebGLInput::CheckOutFocus()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebGLInput_CheckOutFocus_mCF0504E016AA68B54E676EA8089F35856DFB8170 (WebGLInput_t20A7ED221656A06B7688C4010D4E7E8E74C4CE16* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_ContainsKey_m7F72E314213887650CD6F6CBFAAF1344D1F07B85_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WebGLInput_t20A7ED221656A06B7688C4010D4E7E8E74C4CE16_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (!Application.isMobilePlatform) return;
		bool L_0;
		L_0 = Application_get_isMobilePlatform_mBFFD8F419C7FB2FF99C84497C135007BFB5F8B53(NULL);
		if (L_0)
		{
			goto IL_0008;
		}
	}
	{
		// if (!Application.isMobilePlatform) return;
		return;
	}

IL_0008:
	{
		// if (!instances.ContainsKey(id)) return;
		il2cpp_codegen_runtime_class_init_inline(WebGLInput_t20A7ED221656A06B7688C4010D4E7E8E74C4CE16_il2cpp_TypeInfo_var);
		Dictionary_2_t02972806B8AE7773FA4016F73A171E1AEAB527C6* L_1 = ((WebGLInput_t20A7ED221656A06B7688C4010D4E7E8E74C4CE16_StaticFields*)il2cpp_codegen_static_fields_for(WebGLInput_t20A7ED221656A06B7688C4010D4E7E8E74C4CE16_il2cpp_TypeInfo_var))->___instances_4;
		int32_t L_2 = __this->___id_6;
		NullCheck(L_1);
		bool L_3;
		L_3 = Dictionary_2_ContainsKey_m7F72E314213887650CD6F6CBFAAF1344D1F07B85(L_1, L_2, Dictionary_2_ContainsKey_m7F72E314213887650CD6F6CBFAAF1344D1F07B85_RuntimeMethod_var);
		if (L_3)
		{
			goto IL_001b;
		}
	}
	{
		// if (!instances.ContainsKey(id)) return;
		return;
	}

IL_001b:
	{
		// var current = EventSystem.current.currentSelectedGameObject;
		il2cpp_codegen_runtime_class_init_inline(EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707_il2cpp_TypeInfo_var);
		EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707* L_4;
		L_4 = EventSystem_get_current_mD15EA86304E070D175EF359A051A7DB807CA26C0(NULL);
		NullCheck(L_4);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_5;
		L_5 = EventSystem_get_currentSelectedGameObject_mD606FFACF3E72755298A523CBB709535CF08C98A_inline(L_4, NULL);
		// if (current != null) return;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_6;
		L_6 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_5, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_6)
		{
			goto IL_002e;
		}
	}
	{
		// if (current != null) return;
		return;
	}

IL_002e:
	{
		// WebGLInputPlugin.WebGLInputForceBlur(id);   // Input ???????????????
		int32_t L_7 = __this->___id_6;
		WebGLInputPlugin_WebGLInputForceBlur_m1D1EF257EC368AFC54306A5E5429F8DF11501097(L_7, NULL);
		// }
		return;
	}
}
// System.Void WebGLSupport.WebGLInput::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebGLInput__ctor_mE60FE1C8FFD8BDCA1B607DA36AC1E2BCE11D4862 (WebGLInput_t20A7ED221656A06B7688C4010D4E7E8E74C4CE16* __this, const RuntimeMethod* method) 
{
	{
		// internal int id = -1;
		__this->___id_6 = (-1);
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void WebGLSupport.WebGLInput/WebGLInputTabFocus::Add(WebGLSupport.WebGLInput)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebGLInputTabFocus_Add_m559CF3ECEF31308C59B021A231768FC1F16E7565 (WebGLInput_t20A7ED221656A06B7688C4010D4E7E8E74C4CE16* ___input0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mD96A24F4E6DE395990A2DA04969DCCDF05BF2F93_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Sort_m2735B8FE0432B95637A539B43DB6F51370E664E2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WebGLInputTabFocus_tE6406DD8FFC4C0341C1B9306BDBD56BFA68FE40E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// inputs.Add(input);
		il2cpp_codegen_runtime_class_init_inline(WebGLInputTabFocus_tE6406DD8FFC4C0341C1B9306BDBD56BFA68FE40E_il2cpp_TypeInfo_var);
		List_1_tDD7B1080B0F1C545C5FBF897D24700DEAD1AE4A4* L_0 = ((WebGLInputTabFocus_tE6406DD8FFC4C0341C1B9306BDBD56BFA68FE40E_StaticFields*)il2cpp_codegen_static_fields_for(WebGLInputTabFocus_tE6406DD8FFC4C0341C1B9306BDBD56BFA68FE40E_il2cpp_TypeInfo_var))->___inputs_0;
		WebGLInput_t20A7ED221656A06B7688C4010D4E7E8E74C4CE16* L_1 = ___input0;
		NullCheck(L_0);
		List_1_Add_mD96A24F4E6DE395990A2DA04969DCCDF05BF2F93_inline(L_0, L_1, List_1_Add_mD96A24F4E6DE395990A2DA04969DCCDF05BF2F93_RuntimeMethod_var);
		// inputs.Sort();
		List_1_tDD7B1080B0F1C545C5FBF897D24700DEAD1AE4A4* L_2 = ((WebGLInputTabFocus_tE6406DD8FFC4C0341C1B9306BDBD56BFA68FE40E_StaticFields*)il2cpp_codegen_static_fields_for(WebGLInputTabFocus_tE6406DD8FFC4C0341C1B9306BDBD56BFA68FE40E_il2cpp_TypeInfo_var))->___inputs_0;
		NullCheck(L_2);
		List_1_Sort_m2735B8FE0432B95637A539B43DB6F51370E664E2(L_2, List_1_Sort_m2735B8FE0432B95637A539B43DB6F51370E664E2_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void WebGLSupport.WebGLInput/WebGLInputTabFocus::Remove(WebGLSupport.WebGLInput)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebGLInputTabFocus_Remove_m02A48E2F2B5EDCF092DAACC24B396A8D2D9CF713 (WebGLInput_t20A7ED221656A06B7688C4010D4E7E8E74C4CE16* ___input0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Remove_m7D2CF28D9949C827FBAB3B319B49D9F9F57E8F72_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WebGLInputTabFocus_tE6406DD8FFC4C0341C1B9306BDBD56BFA68FE40E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// inputs.Remove(input);
		il2cpp_codegen_runtime_class_init_inline(WebGLInputTabFocus_tE6406DD8FFC4C0341C1B9306BDBD56BFA68FE40E_il2cpp_TypeInfo_var);
		List_1_tDD7B1080B0F1C545C5FBF897D24700DEAD1AE4A4* L_0 = ((WebGLInputTabFocus_tE6406DD8FFC4C0341C1B9306BDBD56BFA68FE40E_StaticFields*)il2cpp_codegen_static_fields_for(WebGLInputTabFocus_tE6406DD8FFC4C0341C1B9306BDBD56BFA68FE40E_il2cpp_TypeInfo_var))->___inputs_0;
		WebGLInput_t20A7ED221656A06B7688C4010D4E7E8E74C4CE16* L_1 = ___input0;
		NullCheck(L_0);
		bool L_2;
		L_2 = List_1_Remove_m7D2CF28D9949C827FBAB3B319B49D9F9F57E8F72(L_0, L_1, List_1_Remove_m7D2CF28D9949C827FBAB3B319B49D9F9F57E8F72_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void WebGLSupport.WebGLInput/WebGLInputTabFocus::OnTab(WebGLSupport.WebGLInput,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebGLInputTabFocus_OnTab_m2FF5D1868D2B2FA9A5315910236E63AE0E907341 (WebGLInput_t20A7ED221656A06B7688C4010D4E7E8E74C4CE16* ___input0, int32_t ___value1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IInputField_t04870BDDFD3EBDFA93CB0E713DE6829FC99BFF65_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_IndexOf_mC37A93DEE8F3410664601580F5C5036961A67F5A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m6310535726D2DA028F28BFC53DE44EDB18EF4A8C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m9084470EFC68CF5F29E62A677DD9D8BC900ED8CE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WebGLInputTabFocus_tE6406DD8FFC4C0341C1B9306BDBD56BFA68FE40E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// if (inputs.Count <= 1) return;
		il2cpp_codegen_runtime_class_init_inline(WebGLInputTabFocus_tE6406DD8FFC4C0341C1B9306BDBD56BFA68FE40E_il2cpp_TypeInfo_var);
		List_1_tDD7B1080B0F1C545C5FBF897D24700DEAD1AE4A4* L_0 = ((WebGLInputTabFocus_tE6406DD8FFC4C0341C1B9306BDBD56BFA68FE40E_StaticFields*)il2cpp_codegen_static_fields_for(WebGLInputTabFocus_tE6406DD8FFC4C0341C1B9306BDBD56BFA68FE40E_il2cpp_TypeInfo_var))->___inputs_0;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = List_1_get_Count_m6310535726D2DA028F28BFC53DE44EDB18EF4A8C_inline(L_0, List_1_get_Count_m6310535726D2DA028F28BFC53DE44EDB18EF4A8C_RuntimeMethod_var);
		if ((((int32_t)L_1) > ((int32_t)1)))
		{
			goto IL_000e;
		}
	}
	{
		// if (inputs.Count <= 1) return;
		return;
	}

IL_000e:
	{
		// var index = inputs.IndexOf(input);
		il2cpp_codegen_runtime_class_init_inline(WebGLInputTabFocus_tE6406DD8FFC4C0341C1B9306BDBD56BFA68FE40E_il2cpp_TypeInfo_var);
		List_1_tDD7B1080B0F1C545C5FBF897D24700DEAD1AE4A4* L_2 = ((WebGLInputTabFocus_tE6406DD8FFC4C0341C1B9306BDBD56BFA68FE40E_StaticFields*)il2cpp_codegen_static_fields_for(WebGLInputTabFocus_tE6406DD8FFC4C0341C1B9306BDBD56BFA68FE40E_il2cpp_TypeInfo_var))->___inputs_0;
		WebGLInput_t20A7ED221656A06B7688C4010D4E7E8E74C4CE16* L_3 = ___input0;
		NullCheck(L_2);
		int32_t L_4;
		L_4 = List_1_IndexOf_mC37A93DEE8F3410664601580F5C5036961A67F5A(L_2, L_3, List_1_IndexOf_mC37A93DEE8F3410664601580F5C5036961A67F5A_RuntimeMethod_var);
		V_0 = L_4;
		// index += value;
		int32_t L_5 = V_0;
		int32_t L_6 = ___value1;
		V_0 = ((int32_t)il2cpp_codegen_add(L_5, L_6));
		// if (index < 0) index = inputs.Count - 1;
		int32_t L_7 = V_0;
		if ((((int32_t)L_7) >= ((int32_t)0)))
		{
			goto IL_0031;
		}
	}
	{
		// if (index < 0) index = inputs.Count - 1;
		il2cpp_codegen_runtime_class_init_inline(WebGLInputTabFocus_tE6406DD8FFC4C0341C1B9306BDBD56BFA68FE40E_il2cpp_TypeInfo_var);
		List_1_tDD7B1080B0F1C545C5FBF897D24700DEAD1AE4A4* L_8 = ((WebGLInputTabFocus_tE6406DD8FFC4C0341C1B9306BDBD56BFA68FE40E_StaticFields*)il2cpp_codegen_static_fields_for(WebGLInputTabFocus_tE6406DD8FFC4C0341C1B9306BDBD56BFA68FE40E_il2cpp_TypeInfo_var))->___inputs_0;
		NullCheck(L_8);
		int32_t L_9;
		L_9 = List_1_get_Count_m6310535726D2DA028F28BFC53DE44EDB18EF4A8C_inline(L_8, List_1_get_Count_m6310535726D2DA028F28BFC53DE44EDB18EF4A8C_RuntimeMethod_var);
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_9, 1));
		goto IL_0040;
	}

IL_0031:
	{
		// else if (index >= inputs.Count) index = 0;
		int32_t L_10 = V_0;
		il2cpp_codegen_runtime_class_init_inline(WebGLInputTabFocus_tE6406DD8FFC4C0341C1B9306BDBD56BFA68FE40E_il2cpp_TypeInfo_var);
		List_1_tDD7B1080B0F1C545C5FBF897D24700DEAD1AE4A4* L_11 = ((WebGLInputTabFocus_tE6406DD8FFC4C0341C1B9306BDBD56BFA68FE40E_StaticFields*)il2cpp_codegen_static_fields_for(WebGLInputTabFocus_tE6406DD8FFC4C0341C1B9306BDBD56BFA68FE40E_il2cpp_TypeInfo_var))->___inputs_0;
		NullCheck(L_11);
		int32_t L_12;
		L_12 = List_1_get_Count_m6310535726D2DA028F28BFC53DE44EDB18EF4A8C_inline(L_11, List_1_get_Count_m6310535726D2DA028F28BFC53DE44EDB18EF4A8C_RuntimeMethod_var);
		if ((((int32_t)L_10) < ((int32_t)L_12)))
		{
			goto IL_0040;
		}
	}
	{
		// else if (index >= inputs.Count) index = 0;
		V_0 = 0;
	}

IL_0040:
	{
		// inputs[index].input.ActivateInputField();
		il2cpp_codegen_runtime_class_init_inline(WebGLInputTabFocus_tE6406DD8FFC4C0341C1B9306BDBD56BFA68FE40E_il2cpp_TypeInfo_var);
		List_1_tDD7B1080B0F1C545C5FBF897D24700DEAD1AE4A4* L_13 = ((WebGLInputTabFocus_tE6406DD8FFC4C0341C1B9306BDBD56BFA68FE40E_StaticFields*)il2cpp_codegen_static_fields_for(WebGLInputTabFocus_tE6406DD8FFC4C0341C1B9306BDBD56BFA68FE40E_il2cpp_TypeInfo_var))->___inputs_0;
		int32_t L_14 = V_0;
		NullCheck(L_13);
		WebGLInput_t20A7ED221656A06B7688C4010D4E7E8E74C4CE16* L_15;
		L_15 = List_1_get_Item_m9084470EFC68CF5F29E62A677DD9D8BC900ED8CE(L_13, L_14, List_1_get_Item_m9084470EFC68CF5F29E62A677DD9D8BC900ED8CE_RuntimeMethod_var);
		NullCheck(L_15);
		RuntimeObject* L_16 = L_15->___input_7;
		NullCheck(L_16);
		InterfaceActionInvoker0::Invoke(16 /* System.Void WebGLSupport.IInputField::ActivateInputField() */, IInputField_t04870BDDFD3EBDFA93CB0E713DE6829FC99BFF65_il2cpp_TypeInfo_var, L_16);
		// }
		return;
	}
}
// System.Void WebGLSupport.WebGLInput/WebGLInputTabFocus::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebGLInputTabFocus__cctor_m21F69C695951472016D7AE923FF7B9E85027029D (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m0EEDC2175ABFE2B54EB4416CB6D8EAE10254F98C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tDD7B1080B0F1C545C5FBF897D24700DEAD1AE4A4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WebGLInputTabFocus_tE6406DD8FFC4C0341C1B9306BDBD56BFA68FE40E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// static List<WebGLInput> inputs = new List<WebGLInput>();
		List_1_tDD7B1080B0F1C545C5FBF897D24700DEAD1AE4A4* L_0 = (List_1_tDD7B1080B0F1C545C5FBF897D24700DEAD1AE4A4*)il2cpp_codegen_object_new(List_1_tDD7B1080B0F1C545C5FBF897D24700DEAD1AE4A4_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		List_1__ctor_m0EEDC2175ABFE2B54EB4416CB6D8EAE10254F98C(L_0, List_1__ctor_m0EEDC2175ABFE2B54EB4416CB6D8EAE10254F98C_RuntimeMethod_var);
		((WebGLInputTabFocus_tE6406DD8FFC4C0341C1B9306BDBD56BFA68FE40E_StaticFields*)il2cpp_codegen_static_fields_for(WebGLInputTabFocus_tE6406DD8FFC4C0341C1B9306BDBD56BFA68FE40E_il2cpp_TypeInfo_var))->___inputs_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((WebGLInputTabFocus_tE6406DD8FFC4C0341C1B9306BDBD56BFA68FE40E_StaticFields*)il2cpp_codegen_static_fields_for(WebGLInputTabFocus_tE6406DD8FFC4C0341C1B9306BDBD56BFA68FE40E_il2cpp_TypeInfo_var))->___inputs_0), (void*)L_0);
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
// System.Void WebGLSupport.WebGLInput/<Blur>d__21::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CBlurU3Ed__21__ctor_m0CC57EF6BDE5728AC9D840929E667403172CB4EC (U3CBlurU3Ed__21_t758693716AB460F60B691592D89A9DD3AE6F69DE* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void WebGLSupport.WebGLInput/<Blur>d__21::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CBlurU3Ed__21_System_IDisposable_Dispose_mF53C0FC2A7811248F58E181D3418802968A307E3 (U3CBlurU3Ed__21_t758693716AB460F60B691592D89A9DD3AE6F69DE* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean WebGLSupport.WebGLInput/<Blur>d__21::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CBlurU3Ed__21_MoveNext_m60DD563F2216AC3B3D45907AE8E2966EA5CE3071 (U3CBlurU3Ed__21_t758693716AB460F60B691592D89A9DD3AE6F69DE* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_ContainsKey_m7F72E314213887650CD6F6CBFAAF1344D1F07B85_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Item_m930DCD8CEFA743C98FAB7799CE35113DA70B379A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WebGLInput_t20A7ED221656A06B7688C4010D4E7E8E74C4CE16_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if (!L_1)
		{
			goto IL_0010;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)1)))
		{
			goto IL_0027;
		}
	}
	{
		return (bool)0;
	}

IL_0010:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// yield return null;
		__this->___U3CU3E2__current_1 = NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)NULL);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_0027:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// if (!instances.ContainsKey(id)) yield break;
		il2cpp_codegen_runtime_class_init_inline(WebGLInput_t20A7ED221656A06B7688C4010D4E7E8E74C4CE16_il2cpp_TypeInfo_var);
		Dictionary_2_t02972806B8AE7773FA4016F73A171E1AEAB527C6* L_3 = ((WebGLInput_t20A7ED221656A06B7688C4010D4E7E8E74C4CE16_StaticFields*)il2cpp_codegen_static_fields_for(WebGLInput_t20A7ED221656A06B7688C4010D4E7E8E74C4CE16_il2cpp_TypeInfo_var))->___instances_4;
		int32_t L_4 = __this->___id_2;
		NullCheck(L_3);
		bool L_5;
		L_5 = Dictionary_2_ContainsKey_m7F72E314213887650CD6F6CBFAAF1344D1F07B85(L_3, L_4, Dictionary_2_ContainsKey_m7F72E314213887650CD6F6CBFAAF1344D1F07B85_RuntimeMethod_var);
		if (L_5)
		{
			goto IL_0042;
		}
	}
	{
		// if (!instances.ContainsKey(id)) yield break;
		return (bool)0;
	}

IL_0042:
	{
		// var block = instances[id].blurBlock;    // get blur block state
		il2cpp_codegen_runtime_class_init_inline(WebGLInput_t20A7ED221656A06B7688C4010D4E7E8E74C4CE16_il2cpp_TypeInfo_var);
		Dictionary_2_t02972806B8AE7773FA4016F73A171E1AEAB527C6* L_6 = ((WebGLInput_t20A7ED221656A06B7688C4010D4E7E8E74C4CE16_StaticFields*)il2cpp_codegen_static_fields_for(WebGLInput_t20A7ED221656A06B7688C4010D4E7E8E74C4CE16_il2cpp_TypeInfo_var))->___instances_4;
		int32_t L_7 = __this->___id_2;
		NullCheck(L_6);
		WebGLInput_t20A7ED221656A06B7688C4010D4E7E8E74C4CE16* L_8;
		L_8 = Dictionary_2_get_Item_m930DCD8CEFA743C98FAB7799CE35113DA70B379A(L_6, L_7, Dictionary_2_get_Item_m930DCD8CEFA743C98FAB7799CE35113DA70B379A_RuntimeMethod_var);
		NullCheck(L_8);
		bool L_9 = L_8->___blurBlock_8;
		// instances[id].blurBlock = false;        // reset instalce block state
		Dictionary_2_t02972806B8AE7773FA4016F73A171E1AEAB527C6* L_10 = ((WebGLInput_t20A7ED221656A06B7688C4010D4E7E8E74C4CE16_StaticFields*)il2cpp_codegen_static_fields_for(WebGLInput_t20A7ED221656A06B7688C4010D4E7E8E74C4CE16_il2cpp_TypeInfo_var))->___instances_4;
		int32_t L_11 = __this->___id_2;
		NullCheck(L_10);
		WebGLInput_t20A7ED221656A06B7688C4010D4E7E8E74C4CE16* L_12;
		L_12 = Dictionary_2_get_Item_m930DCD8CEFA743C98FAB7799CE35113DA70B379A(L_10, L_11, Dictionary_2_get_Item_m930DCD8CEFA743C98FAB7799CE35113DA70B379A_RuntimeMethod_var);
		NullCheck(L_12);
		L_12->___blurBlock_8 = (bool)0;
		// if (block) yield break;                 // if block. break it!!
		if (!L_9)
		{
			goto IL_0071;
		}
	}
	{
		// if (block) yield break;                 // if block. break it!!
		return (bool)0;
	}

IL_0071:
	{
		// instances[id].DeactivateInputField();
		il2cpp_codegen_runtime_class_init_inline(WebGLInput_t20A7ED221656A06B7688C4010D4E7E8E74C4CE16_il2cpp_TypeInfo_var);
		Dictionary_2_t02972806B8AE7773FA4016F73A171E1AEAB527C6* L_13 = ((WebGLInput_t20A7ED221656A06B7688C4010D4E7E8E74C4CE16_StaticFields*)il2cpp_codegen_static_fields_for(WebGLInput_t20A7ED221656A06B7688C4010D4E7E8E74C4CE16_il2cpp_TypeInfo_var))->___instances_4;
		int32_t L_14 = __this->___id_2;
		NullCheck(L_13);
		WebGLInput_t20A7ED221656A06B7688C4010D4E7E8E74C4CE16* L_15;
		L_15 = Dictionary_2_get_Item_m930DCD8CEFA743C98FAB7799CE35113DA70B379A(L_13, L_14, Dictionary_2_get_Item_m930DCD8CEFA743C98FAB7799CE35113DA70B379A_RuntimeMethod_var);
		NullCheck(L_15);
		WebGLInput_DeactivateInputField_m4E87EA2F6D4E0DF331A4D5AA564EB25375E90981(L_15, NULL);
		// }
		return (bool)0;
	}
}
// System.Object WebGLSupport.WebGLInput/<Blur>d__21::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CBlurU3Ed__21_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m4B5C9A20065F2E62EC7EE434EB4C919B509FB311 (U3CBlurU3Ed__21_t758693716AB460F60B691592D89A9DD3AE6F69DE* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void WebGLSupport.WebGLInput/<Blur>d__21::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CBlurU3Ed__21_System_Collections_IEnumerator_Reset_m5DB19749F3AB23A43D14A5D6FBA9C8F9B4942FA4 (U3CBlurU3Ed__21_t758693716AB460F60B691592D89A9DD3AE6F69DE* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CBlurU3Ed__21_System_Collections_IEnumerator_Reset_m5DB19749F3AB23A43D14A5D6FBA9C8F9B4942FA4_RuntimeMethod_var)));
	}
}
// System.Object WebGLSupport.WebGLInput/<Blur>d__21::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CBlurU3Ed__21_System_Collections_IEnumerator_get_Current_mABE55E9016C75D775305F651923F65F10C4E22EC (U3CBlurU3Ed__21_t758693716AB460F60B691592D89A9DD3AE6F69DE* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
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
// System.Boolean WebGLSupport.WrappedInputField::get_ReadOnly()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WrappedInputField_get_ReadOnly_mDA1B03DFBB905D1446E73D9A6B2533A195F8BB4D (WrappedInputField_tA9A06E487260394507CAA4C83E9E1E0239B4B6AE* __this, const RuntimeMethod* method) 
{
	{
		// public bool ReadOnly { get { return input.readOnly; } }
		InputField_tABEA115F23FBD374EBE80D4FAC1D15BD6E37A140* L_0 = __this->___input_0;
		NullCheck(L_0);
		bool L_1;
		L_1 = InputField_get_readOnly_m37800B8623CB744D99E5F5607C80AEBE6C7043B3_inline(L_0, NULL);
		return L_1;
	}
}
// System.String WebGLSupport.WrappedInputField::get_text()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* WrappedInputField_get_text_mE009C03CA47BAE4E696E69D5E90EBCC78EF4B2B6 (WrappedInputField_tA9A06E487260394507CAA4C83E9E1E0239B4B6AE* __this, const RuntimeMethod* method) 
{
	{
		// get { return input.text; }
		InputField_tABEA115F23FBD374EBE80D4FAC1D15BD6E37A140* L_0 = __this->___input_0;
		NullCheck(L_0);
		String_t* L_1;
		L_1 = InputField_get_text_m6E0796350FF559505E4DF17311803962699D6704_inline(L_0, NULL);
		return L_1;
	}
}
// System.Void WebGLSupport.WrappedInputField::set_text(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WrappedInputField_set_text_mE37E16F0BE8AACCD212A52CCFAA51FBE63E2EC02 (WrappedInputField_tA9A06E487260394507CAA4C83E9E1E0239B4B6AE* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		// set { input.text = value; }
		InputField_tABEA115F23FBD374EBE80D4FAC1D15BD6E37A140* L_0 = __this->___input_0;
		String_t* L_1 = ___value0;
		NullCheck(L_0);
		InputField_set_text_m28B1C806BBCAC44F3ACCDC3B550509CA0C7D257F(L_0, L_1, NULL);
		// set { input.text = value; }
		return;
	}
}
// System.String WebGLSupport.WrappedInputField::get_placeholder()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* WrappedInputField_get_placeholder_mC1F819AE6F48314E9C1D8E2F9B0C669EF2B5B98F (WrappedInputField_tA9A06E487260394507CAA4C83E9E1E0239B4B6AE* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisText_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62_mB85C5C0EEF6535E3FC0DBFC14E39FA5A51B6F888_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		s_Il2CppMethodInitialized = true;
	}
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* V_0 = NULL;
	{
		// if (!input.placeholder) return "";
		InputField_tABEA115F23FBD374EBE80D4FAC1D15BD6E37A140* L_0 = __this->___input_0;
		NullCheck(L_0);
		Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931* L_1;
		L_1 = InputField_get_placeholder_m84C2F2E414B8A03B372C7CEB3C97A2AE72F3A39F_inline(L_0, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = Object_op_Implicit_m18E1885C296CC868AC918101523697CFE6413C79(L_1, NULL);
		if (L_2)
		{
			goto IL_0018;
		}
	}
	{
		// if (!input.placeholder) return "";
		return _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
	}

IL_0018:
	{
		// var text = input.placeholder.GetComponent<Text>();
		InputField_tABEA115F23FBD374EBE80D4FAC1D15BD6E37A140* L_3 = __this->___input_0;
		NullCheck(L_3);
		Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931* L_4;
		L_4 = InputField_get_placeholder_m84C2F2E414B8A03B372C7CEB3C97A2AE72F3A39F_inline(L_3, NULL);
		NullCheck(L_4);
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_5;
		L_5 = Component_GetComponent_TisText_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62_mB85C5C0EEF6535E3FC0DBFC14E39FA5A51B6F888(L_4, Component_GetComponent_TisText_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62_mB85C5C0EEF6535E3FC0DBFC14E39FA5A51B6F888_RuntimeMethod_var);
		V_0 = L_5;
		// return text ? text.text : "";
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_6 = V_0;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_7;
		L_7 = Object_op_Implicit_m18E1885C296CC868AC918101523697CFE6413C79(L_6, NULL);
		if (L_7)
		{
			goto IL_0037;
		}
	}
	{
		return _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
	}

IL_0037:
	{
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_8 = V_0;
		NullCheck(L_8);
		String_t* L_9;
		L_9 = VirtualFuncInvoker0< String_t* >::Invoke(74 /* System.String UnityEngine.UI.Text::get_text() */, L_8);
		return L_9;
	}
}
// System.Int32 WebGLSupport.WrappedInputField::get_fontSize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t WrappedInputField_get_fontSize_m151511F9F4FBFCAB71C4DCF9FB36A86637D93249 (WrappedInputField_tA9A06E487260394507CAA4C83E9E1E0239B4B6AE* __this, const RuntimeMethod* method) 
{
	{
		// get { return input.textComponent.fontSize; }
		InputField_tABEA115F23FBD374EBE80D4FAC1D15BD6E37A140* L_0 = __this->___input_0;
		NullCheck(L_0);
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_1;
		L_1 = InputField_get_textComponent_m319EF4B9B24056AF25327874A2455362FF7B7A85_inline(L_0, NULL);
		NullCheck(L_1);
		int32_t L_2;
		L_2 = Text_get_fontSize_m837C0618E78D0FDA972D11DDE3015DC888E93993(L_1, NULL);
		return L_2;
	}
}
// WebGLSupport.ContentType WebGLSupport.WrappedInputField::get_contentType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t WrappedInputField_get_contentType_mFE2C89A5F8809C6139F826FE0ED43DAB84D692A5 (WrappedInputField_tA9A06E487260394507CAA4C83E9E1E0239B4B6AE* __this, const RuntimeMethod* method) 
{
	{
		// get { return (ContentType)input.contentType; }
		InputField_tABEA115F23FBD374EBE80D4FAC1D15BD6E37A140* L_0 = __this->___input_0;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = InputField_get_contentType_m8C589B15987EB8852D5F4948A79084186935B19B_inline(L_0, NULL);
		return (int32_t)(L_1);
	}
}
// WebGLSupport.LineType WebGLSupport.WrappedInputField::get_lineType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t WrappedInputField_get_lineType_mB0AA7862CD5051CD927C5F4613F35AEA9562E8E3 (WrappedInputField_tA9A06E487260394507CAA4C83E9E1E0239B4B6AE* __this, const RuntimeMethod* method) 
{
	{
		// get { return (LineType)input.lineType; }
		InputField_tABEA115F23FBD374EBE80D4FAC1D15BD6E37A140* L_0 = __this->___input_0;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = InputField_get_lineType_m6CEA63D8FCACAEC05D3499577ED0771EFFF33377_inline(L_0, NULL);
		return (int32_t)(L_1);
	}
}
// System.Int32 WebGLSupport.WrappedInputField::get_characterLimit()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t WrappedInputField_get_characterLimit_m09DA0F1E9CB5D6CCC2B5B0077B0C8A467BD63BF4 (WrappedInputField_tA9A06E487260394507CAA4C83E9E1E0239B4B6AE* __this, const RuntimeMethod* method) 
{
	{
		// get { return input.characterLimit; }
		InputField_tABEA115F23FBD374EBE80D4FAC1D15BD6E37A140* L_0 = __this->___input_0;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = InputField_get_characterLimit_m7FE26FC66741545B89BFFDCAD8E8B34EB1274403_inline(L_0, NULL);
		return L_1;
	}
}
// System.Int32 WebGLSupport.WrappedInputField::get_caretPosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t WrappedInputField_get_caretPosition_mC255B3D6C4B59B86718F1FB95DA3F860192B6EDB (WrappedInputField_tA9A06E487260394507CAA4C83E9E1E0239B4B6AE* __this, const RuntimeMethod* method) 
{
	{
		// get { return input.caretPosition; }
		InputField_tABEA115F23FBD374EBE80D4FAC1D15BD6E37A140* L_0 = __this->___input_0;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = InputField_get_caretPosition_mC43674CCFF5BF7D047C2D4682B2CD7DE8A179EA7(L_0, NULL);
		return L_1;
	}
}
// System.Boolean WebGLSupport.WrappedInputField::get_isFocused()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WrappedInputField_get_isFocused_m59289003D504AB647181A1ABA4E80F584FC22E84 (WrappedInputField_tA9A06E487260394507CAA4C83E9E1E0239B4B6AE* __this, const RuntimeMethod* method) 
{
	{
		// get { return input.isFocused; }
		InputField_tABEA115F23FBD374EBE80D4FAC1D15BD6E37A140* L_0 = __this->___input_0;
		NullCheck(L_0);
		bool L_1;
		L_1 = InputField_get_isFocused_m19BD51E842077CA087824025F294C4078B2DAC50_inline(L_0, NULL);
		return L_1;
	}
}
// System.Int32 WebGLSupport.WrappedInputField::get_selectionFocusPosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t WrappedInputField_get_selectionFocusPosition_m6D4BB0BC7205A422C6B4659678D01D0C14413163 (WrappedInputField_tA9A06E487260394507CAA4C83E9E1E0239B4B6AE* __this, const RuntimeMethod* method) 
{
	{
		// get { return input.selectionFocusPosition; }
		InputField_tABEA115F23FBD374EBE80D4FAC1D15BD6E37A140* L_0 = __this->___input_0;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = InputField_get_selectionFocusPosition_m14D662A0A20FF6952E73CFAB7C1F21FD7CF4298A(L_0, NULL);
		return L_1;
	}
}
// System.Void WebGLSupport.WrappedInputField::set_selectionFocusPosition(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WrappedInputField_set_selectionFocusPosition_m0CEF93FB97925EEC5BDB2C96B36E76BF0DD11E07 (WrappedInputField_tA9A06E487260394507CAA4C83E9E1E0239B4B6AE* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	{
		// set { input.selectionFocusPosition = value; }
		InputField_tABEA115F23FBD374EBE80D4FAC1D15BD6E37A140* L_0 = __this->___input_0;
		int32_t L_1 = ___value0;
		NullCheck(L_0);
		InputField_set_selectionFocusPosition_mE9E0E491C5AC1B89B4F9272EC3B67617A4F7DFEB(L_0, L_1, NULL);
		// set { input.selectionFocusPosition = value; }
		return;
	}
}
// System.Int32 WebGLSupport.WrappedInputField::get_selectionAnchorPosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t WrappedInputField_get_selectionAnchorPosition_m49A82D72B5AD663262E85BB2C8D038AA5080B017 (WrappedInputField_tA9A06E487260394507CAA4C83E9E1E0239B4B6AE* __this, const RuntimeMethod* method) 
{
	{
		// get { return input.selectionAnchorPosition; }
		InputField_tABEA115F23FBD374EBE80D4FAC1D15BD6E37A140* L_0 = __this->___input_0;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = InputField_get_selectionAnchorPosition_mF5CB19025C29DECEA0EBA8C6EC3D6D5687A1D65E(L_0, NULL);
		return L_1;
	}
}
// System.Void WebGLSupport.WrappedInputField::set_selectionAnchorPosition(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WrappedInputField_set_selectionAnchorPosition_mAB328FE70CA1E201650AB6109F935B2510283457 (WrappedInputField_tA9A06E487260394507CAA4C83E9E1E0239B4B6AE* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	{
		// set { input.selectionAnchorPosition = value; }
		InputField_tABEA115F23FBD374EBE80D4FAC1D15BD6E37A140* L_0 = __this->___input_0;
		int32_t L_1 = ___value0;
		NullCheck(L_0);
		InputField_set_selectionAnchorPosition_mE57B85DBF03991E694729ED36283B44A8D7D1E68(L_0, L_1, NULL);
		// set { input.selectionAnchorPosition = value; }
		return;
	}
}
// System.Boolean WebGLSupport.WrappedInputField::get_OnFocusSelectAll()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WrappedInputField_get_OnFocusSelectAll_m575AD97901C0D3FAFB0C72C4D599DB40B7F39638 (WrappedInputField_tA9A06E487260394507CAA4C83E9E1E0239B4B6AE* __this, const RuntimeMethod* method) 
{
	{
		// get { return true; }
		return (bool)1;
	}
}
// System.Void WebGLSupport.WrappedInputField::.ctor(UnityEngine.UI.InputField)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WrappedInputField__ctor_m6F3A6F9F206C5736E3EB8A299AEB18BB7F7B8567 (WrappedInputField_tA9A06E487260394507CAA4C83E9E1E0239B4B6AE* __this, InputField_tABEA115F23FBD374EBE80D4FAC1D15BD6E37A140* ___input0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RebuildChecker_t655BE8F346B22370339BAE56B91783950CAAC807_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public WrappedInputField(InputField input)
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// this.input = input;
		InputField_tABEA115F23FBD374EBE80D4FAC1D15BD6E37A140* L_0 = ___input0;
		__this->___input_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___input_0), (void*)L_0);
		// checker = new RebuildChecker(this);
		RebuildChecker_t655BE8F346B22370339BAE56B91783950CAAC807* L_1 = (RebuildChecker_t655BE8F346B22370339BAE56B91783950CAAC807*)il2cpp_codegen_object_new(RebuildChecker_t655BE8F346B22370339BAE56B91783950CAAC807_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		RebuildChecker__ctor_mC68C7B0720DF8D5826A5244189C46C2C9D1E5299(L_1, __this, NULL);
		__this->___checker_1 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___checker_1), (void*)L_1);
		// }
		return;
	}
}
// UnityEngine.RectTransform WebGLSupport.WrappedInputField::RectTransform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* WrappedInputField_RectTransform_mEA85D28C977C3488C5ED7435CB258FD00A5C30D7 (WrappedInputField_tA9A06E487260394507CAA4C83E9E1E0239B4B6AE* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisRectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_m0640480E7E38BB88B0D1F6AD59E697C8EE6AAFA4_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return input.GetComponent<RectTransform>();
		InputField_tABEA115F23FBD374EBE80D4FAC1D15BD6E37A140* L_0 = __this->___input_0;
		NullCheck(L_0);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_1;
		L_1 = Component_GetComponent_TisRectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_m0640480E7E38BB88B0D1F6AD59E697C8EE6AAFA4(L_0, Component_GetComponent_TisRectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_m0640480E7E38BB88B0D1F6AD59E697C8EE6AAFA4_RuntimeMethod_var);
		return L_1;
	}
}
// System.Void WebGLSupport.WrappedInputField::ActivateInputField()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WrappedInputField_ActivateInputField_m6A72BB55B086BE200ED2D5EDBA2359A3C33DFF80 (WrappedInputField_tA9A06E487260394507CAA4C83E9E1E0239B4B6AE* __this, const RuntimeMethod* method) 
{
	{
		// input.ActivateInputField();
		InputField_tABEA115F23FBD374EBE80D4FAC1D15BD6E37A140* L_0 = __this->___input_0;
		NullCheck(L_0);
		InputField_ActivateInputField_m4986DE5488FE44D93DE1D906C140D6500134DF05(L_0, NULL);
		// }
		return;
	}
}
// System.Void WebGLSupport.WrappedInputField::DeactivateInputField()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WrappedInputField_DeactivateInputField_mF890B729806517980B6A9AFA8F53E45613B0B394 (WrappedInputField_tA9A06E487260394507CAA4C83E9E1E0239B4B6AE* __this, const RuntimeMethod* method) 
{
	{
		// input.DeactivateInputField();
		InputField_tABEA115F23FBD374EBE80D4FAC1D15BD6E37A140* L_0 = __this->___input_0;
		NullCheck(L_0);
		InputField_DeactivateInputField_m58D0B3BF095094A0963A9CE8BABF1979F7D1254D(L_0, NULL);
		// }
		return;
	}
}
// System.Void WebGLSupport.WrappedInputField::Rebuild()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WrappedInputField_Rebuild_m7E12D8B7D59BCB7E11138594EC0F05C8AC007CC1 (WrappedInputField_tA9A06E487260394507CAA4C83E9E1E0239B4B6AE* __this, const RuntimeMethod* method) 
{
	{
		// if (checker.NeedRebuild())
		RebuildChecker_t655BE8F346B22370339BAE56B91783950CAAC807* L_0 = __this->___checker_1;
		NullCheck(L_0);
		bool L_1;
		L_1 = RebuildChecker_NeedRebuild_m84BFC0E6654441869C9D4B25718564302A977781(L_0, (bool)0, NULL);
		if (!L_1)
		{
			goto IL_002a;
		}
	}
	{
		// input.textComponent.SetAllDirty();
		InputField_tABEA115F23FBD374EBE80D4FAC1D15BD6E37A140* L_2 = __this->___input_0;
		NullCheck(L_2);
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_3;
		L_3 = InputField_get_textComponent_m319EF4B9B24056AF25327874A2455362FF7B7A85_inline(L_2, NULL);
		NullCheck(L_3);
		VirtualActionInvoker0::Invoke(26 /* System.Void UnityEngine.UI.Graphic::SetAllDirty() */, L_3);
		// input.Rebuild(CanvasUpdate.LatePreRender);
		InputField_tABEA115F23FBD374EBE80D4FAC1D15BD6E37A140* L_4 = __this->___input_0;
		NullCheck(L_4);
		VirtualActionInvoker1< int32_t >::Invoke(68 /* System.Void UnityEngine.UI.InputField::Rebuild(UnityEngine.UI.CanvasUpdate) */, L_4, 4);
	}

IL_002a:
	{
		// }
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
// System.Boolean WebGLSupport.WrappedTMPInputField::get_ReadOnly()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WrappedTMPInputField_get_ReadOnly_mB2F2B2C3112A1D3E8E76FD8DA57C041CDE160DE5 (WrappedTMPInputField_t5812136E49D051CA7D0F72155950CB226F87247F* __this, const RuntimeMethod* method) 
{
	{
		// public bool ReadOnly { get { return input.readOnly; } }
		TMP_InputField_t3488E0EE8C3DF56C6A328EC95D1BEEA2DF4A7D5F* L_0 = __this->___input_0;
		NullCheck(L_0);
		bool L_1;
		L_1 = TMP_InputField_get_readOnly_m551BFA0AB64EBD12F49C0993305274BC8176E0A5_inline(L_0, NULL);
		return L_1;
	}
}
// System.String WebGLSupport.WrappedTMPInputField::get_text()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* WrappedTMPInputField_get_text_m9B354A6A2EDEAA25EAF86FC5B735DA267840C5B0 (WrappedTMPInputField_t5812136E49D051CA7D0F72155950CB226F87247F* __this, const RuntimeMethod* method) 
{
	{
		// get { return input.text; }
		TMP_InputField_t3488E0EE8C3DF56C6A328EC95D1BEEA2DF4A7D5F* L_0 = __this->___input_0;
		NullCheck(L_0);
		String_t* L_1;
		L_1 = TMP_InputField_get_text_mA4ACBF52435893D9DFD822A492454301740B3C6A_inline(L_0, NULL);
		return L_1;
	}
}
// System.Void WebGLSupport.WrappedTMPInputField::set_text(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WrappedTMPInputField_set_text_mDC9A682C95939439ACB15F82B4E64654AAFA391A (WrappedTMPInputField_t5812136E49D051CA7D0F72155950CB226F87247F* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		// set { input.text = FixContentTypeByInputField(value); }
		TMP_InputField_t3488E0EE8C3DF56C6A328EC95D1BEEA2DF4A7D5F* L_0 = __this->___input_0;
		String_t* L_1 = ___value0;
		String_t* L_2;
		L_2 = WrappedTMPInputField_FixContentTypeByInputField_mE995B6FEAE819075B95F77C5EED9BF02AE46E8AB(__this, L_1, NULL);
		NullCheck(L_0);
		TMP_InputField_set_text_m684E9CDA2D9E82D1C497B5E03DBE79C00584FF62(L_0, L_2, NULL);
		// set { input.text = FixContentTypeByInputField(value); }
		return;
	}
}
// System.String WebGLSupport.WrappedTMPInputField::FixContentTypeByInputField(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* WrappedTMPInputField_FixContentTypeByInputField_mE995B6FEAE819075B95F77C5EED9BF02AE46E8AB (WrappedTMPInputField_t5812136E49D051CA7D0F72155950CB226F87247F* __this, String_t* ___inText0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CharacterValidation_t14B82768014D219C74BC91657D6B013A0CAFF2B9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CharacterValidation_t5DAA94F9780B40CCF419821363E89B30E2EF7380_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CharacterValidation_t5DAA94F9780B40CCF419821363E89B30E2EF7380_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ContentType_t7E546E516F92E955324D479BB71667931F1A7956_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ContentType_t7E546E516F92E955324D479BB71667931F1A7956_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ContentType_tC6315BB238AB8B34EEAC496ECDA3F92692694276_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_AddComponent_TisInputField_tABEA115F23FBD374EBE80D4FAC1D15BD6E37A140_m932E2AB0AA903C34FABFD908BC6509C17FFE693E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_t76FEDD663AB33C991A9C9A23129337651094216F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InputType_t036D7DF2772E6C8C7DB969C7501F6513339572D4_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InputType_t036D7DF2772E6C8C7DB969C7501F6513339572D4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InputType_tF2224DC7469AAC22BF653D00F6E29F8739175DA1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LineType_t004C9AD8E9A2D86ABDE2F2F55F09446F6E46AF6E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LineType_tC4DBAA8629361B209A2BA0625320B24FC4566B6B_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LineType_tC4DBAA8629361B209A2BA0625320B24FC4566B6B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral73FD286EB9001C752356E4523B7876C96C5EA312);
		s_Il2CppMethodInitialized = true;
	}
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	{
		// var go = new GameObject("FixContentTypeByInputField for WebGLInput");
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*)il2cpp_codegen_object_new(GameObject_t76FEDD663AB33C991A9C9A23129337651094216F_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		GameObject__ctor_m37D512B05D292F954792225E6C6EEE95293A9B88(L_0, _stringLiteral73FD286EB9001C752356E4523B7876C96C5EA312, NULL);
		V_0 = L_0;
		// go.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1 = V_0;
		NullCheck(L_1);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_1, (bool)0, NULL);
		// var i = go.AddComponent<InputField>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2 = V_0;
		NullCheck(L_2);
		InputField_tABEA115F23FBD374EBE80D4FAC1D15BD6E37A140* L_3;
		L_3 = GameObject_AddComponent_TisInputField_tABEA115F23FBD374EBE80D4FAC1D15BD6E37A140_m932E2AB0AA903C34FABFD908BC6509C17FFE693E(L_2, GameObject_AddComponent_TisInputField_tABEA115F23FBD374EBE80D4FAC1D15BD6E37A140_m932E2AB0AA903C34FABFD908BC6509C17FFE693E_RuntimeMethod_var);
		// i.contentType = (InputField.ContentType)Enum.Parse(typeof(InputField.ContentType), input.contentType.ToString());
		InputField_tABEA115F23FBD374EBE80D4FAC1D15BD6E37A140* L_4 = L_3;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_5 = { reinterpret_cast<intptr_t> (ContentType_t7E546E516F92E955324D479BB71667931F1A7956_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_6;
		L_6 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_5, NULL);
		TMP_InputField_t3488E0EE8C3DF56C6A328EC95D1BEEA2DF4A7D5F* L_7 = __this->___input_0;
		NullCheck(L_7);
		int32_t L_8;
		L_8 = TMP_InputField_get_contentType_m32EEDFC275E9CB6C759A4F117EBAA40336B9030D_inline(L_7, NULL);
		V_1 = L_8;
		Il2CppFakeBox<int32_t> L_9(ContentType_tC6315BB238AB8B34EEAC496ECDA3F92692694276_il2cpp_TypeInfo_var, (&V_1));
		String_t* L_10;
		L_10 = Enum_ToString_m946B0B83C4470457D0FF555D862022C72BB55741((Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2*)(&L_9), NULL);
		il2cpp_codegen_runtime_class_init_inline(Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_il2cpp_TypeInfo_var);
		RuntimeObject* L_11;
		L_11 = Enum_Parse_m2E810F090FE2D6D78D29D87EA6773F8C616E0257(L_6, L_10, NULL);
		NullCheck(L_4);
		InputField_set_contentType_m5C3DDD7C14781E963BFFC88F7A8A537919F34C59(L_4, ((*(int32_t*)((int32_t*)(int32_t*)UnBox(L_11, ContentType_t7E546E516F92E955324D479BB71667931F1A7956_il2cpp_TypeInfo_var)))), NULL);
		// i.lineType = (InputField.LineType)Enum.Parse(typeof(InputField.LineType), input.lineType.ToString());
		InputField_tABEA115F23FBD374EBE80D4FAC1D15BD6E37A140* L_12 = L_4;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_13 = { reinterpret_cast<intptr_t> (LineType_tC4DBAA8629361B209A2BA0625320B24FC4566B6B_0_0_0_var) };
		Type_t* L_14;
		L_14 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_13, NULL);
		TMP_InputField_t3488E0EE8C3DF56C6A328EC95D1BEEA2DF4A7D5F* L_15 = __this->___input_0;
		NullCheck(L_15);
		int32_t L_16;
		L_16 = TMP_InputField_get_lineType_mE221F133A310EB6C93DA24E1F5900E948771D64C_inline(L_15, NULL);
		V_2 = L_16;
		Il2CppFakeBox<int32_t> L_17(LineType_t004C9AD8E9A2D86ABDE2F2F55F09446F6E46AF6E_il2cpp_TypeInfo_var, (&V_2));
		String_t* L_18;
		L_18 = Enum_ToString_m946B0B83C4470457D0FF555D862022C72BB55741((Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2*)(&L_17), NULL);
		RuntimeObject* L_19;
		L_19 = Enum_Parse_m2E810F090FE2D6D78D29D87EA6773F8C616E0257(L_14, L_18, NULL);
		NullCheck(L_12);
		InputField_set_lineType_m06BE148366DF8F17E0F91C3CF094628C201B5FD8(L_12, ((*(int32_t*)((int32_t*)(int32_t*)UnBox(L_19, LineType_tC4DBAA8629361B209A2BA0625320B24FC4566B6B_il2cpp_TypeInfo_var)))), NULL);
		// i.inputType = (InputField.InputType)Enum.Parse(typeof(InputField.InputType), input.inputType.ToString());
		InputField_tABEA115F23FBD374EBE80D4FAC1D15BD6E37A140* L_20 = L_12;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_21 = { reinterpret_cast<intptr_t> (InputType_t036D7DF2772E6C8C7DB969C7501F6513339572D4_0_0_0_var) };
		Type_t* L_22;
		L_22 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_21, NULL);
		TMP_InputField_t3488E0EE8C3DF56C6A328EC95D1BEEA2DF4A7D5F* L_23 = __this->___input_0;
		NullCheck(L_23);
		int32_t L_24;
		L_24 = TMP_InputField_get_inputType_m93A6CC8FF76412F46471D91952323CE4C63B7D34_inline(L_23, NULL);
		V_3 = L_24;
		Il2CppFakeBox<int32_t> L_25(InputType_tF2224DC7469AAC22BF653D00F6E29F8739175DA1_il2cpp_TypeInfo_var, (&V_3));
		String_t* L_26;
		L_26 = Enum_ToString_m946B0B83C4470457D0FF555D862022C72BB55741((Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2*)(&L_25), NULL);
		RuntimeObject* L_27;
		L_27 = Enum_Parse_m2E810F090FE2D6D78D29D87EA6773F8C616E0257(L_22, L_26, NULL);
		NullCheck(L_20);
		InputField_set_inputType_mB2A3B667DC710AD1F9E1C046659AC35720AB0313(L_20, ((*(int32_t*)((int32_t*)(int32_t*)UnBox(L_27, InputType_t036D7DF2772E6C8C7DB969C7501F6513339572D4_il2cpp_TypeInfo_var)))), NULL);
		// i.keyboardType = input.keyboardType;
		InputField_tABEA115F23FBD374EBE80D4FAC1D15BD6E37A140* L_28 = L_20;
		TMP_InputField_t3488E0EE8C3DF56C6A328EC95D1BEEA2DF4A7D5F* L_29 = __this->___input_0;
		NullCheck(L_29);
		int32_t L_30;
		L_30 = TMP_InputField_get_keyboardType_m8B616A743B2FAB03C6263F1582171BB390F94F8B_inline(L_29, NULL);
		NullCheck(L_28);
		InputField_set_keyboardType_m9DD165B20CF12F93BD85140D8D1F54371FF4E9F3(L_28, L_30, NULL);
		// i.characterValidation = (InputField.CharacterValidation)Enum.Parse(typeof(InputField.CharacterValidation), input.characterValidation.ToString());
		InputField_tABEA115F23FBD374EBE80D4FAC1D15BD6E37A140* L_31 = L_28;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_32 = { reinterpret_cast<intptr_t> (CharacterValidation_t5DAA94F9780B40CCF419821363E89B30E2EF7380_0_0_0_var) };
		Type_t* L_33;
		L_33 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_32, NULL);
		TMP_InputField_t3488E0EE8C3DF56C6A328EC95D1BEEA2DF4A7D5F* L_34 = __this->___input_0;
		NullCheck(L_34);
		int32_t L_35;
		L_35 = TMP_InputField_get_characterValidation_m57E36C62FC9E23DB17F440BA4325A314EF0B0679_inline(L_34, NULL);
		V_4 = L_35;
		Il2CppFakeBox<int32_t> L_36(CharacterValidation_t14B82768014D219C74BC91657D6B013A0CAFF2B9_il2cpp_TypeInfo_var, (&V_4));
		String_t* L_37;
		L_37 = Enum_ToString_m946B0B83C4470457D0FF555D862022C72BB55741((Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2*)(&L_36), NULL);
		RuntimeObject* L_38;
		L_38 = Enum_Parse_m2E810F090FE2D6D78D29D87EA6773F8C616E0257(L_33, L_37, NULL);
		NullCheck(L_31);
		InputField_set_characterValidation_m9DE08B33714B9D97F570853ADB56C070C2DD4072(L_31, ((*(int32_t*)((int32_t*)(int32_t*)UnBox(L_38, CharacterValidation_t5DAA94F9780B40CCF419821363E89B30E2EF7380_il2cpp_TypeInfo_var)))), NULL);
		// i.characterLimit = input.characterLimit;
		InputField_tABEA115F23FBD374EBE80D4FAC1D15BD6E37A140* L_39 = L_31;
		TMP_InputField_t3488E0EE8C3DF56C6A328EC95D1BEEA2DF4A7D5F* L_40 = __this->___input_0;
		NullCheck(L_40);
		int32_t L_41;
		L_41 = TMP_InputField_get_characterLimit_m59833E0A22BACBDF3EDA6A70A30B87272FBAA409_inline(L_40, NULL);
		NullCheck(L_39);
		InputField_set_characterLimit_m98A2187FF493DB170821C39A6D069731F3AFFF2B(L_39, L_41, NULL);
		// i.text = inText;
		InputField_tABEA115F23FBD374EBE80D4FAC1D15BD6E37A140* L_42 = L_39;
		String_t* L_43 = ___inText0;
		NullCheck(L_42);
		InputField_set_text_m28B1C806BBCAC44F3ACCDC3B550509CA0C7D257F(L_42, L_43, NULL);
		// var res = i.text;
		NullCheck(L_42);
		String_t* L_44;
		L_44 = InputField_get_text_m6E0796350FF559505E4DF17311803962699D6704_inline(L_42, NULL);
		// GameObject.Destroy(go);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_45 = V_0;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_Destroy_mFCDAE6333522488F60597AF019EA90BB1207A5AA(L_45, NULL);
		// return res;
		return L_44;
	}
}
// System.String WebGLSupport.WrappedTMPInputField::get_placeholder()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* WrappedTMPInputField_get_placeholder_m4948ECC8AB24FE69BF6D3A2C9614C063C8AA32DB (WrappedTMPInputField_t5812136E49D051CA7D0F72155950CB226F87247F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisTMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9_m0C4C5268B54C7097888C6B109527A680772EBCB5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		s_Il2CppMethodInitialized = true;
	}
	TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* V_0 = NULL;
	{
		// if (!input.placeholder) return "";
		TMP_InputField_t3488E0EE8C3DF56C6A328EC95D1BEEA2DF4A7D5F* L_0 = __this->___input_0;
		NullCheck(L_0);
		Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931* L_1;
		L_1 = TMP_InputField_get_placeholder_m6C5FDEB031E2900A1792B928E4864B21B144AB3C_inline(L_0, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = Object_op_Implicit_m18E1885C296CC868AC918101523697CFE6413C79(L_1, NULL);
		if (L_2)
		{
			goto IL_0018;
		}
	}
	{
		// if (!input.placeholder) return "";
		return _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
	}

IL_0018:
	{
		// var text = input.placeholder.GetComponent<TMP_Text>();
		TMP_InputField_t3488E0EE8C3DF56C6A328EC95D1BEEA2DF4A7D5F* L_3 = __this->___input_0;
		NullCheck(L_3);
		Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931* L_4;
		L_4 = TMP_InputField_get_placeholder_m6C5FDEB031E2900A1792B928E4864B21B144AB3C_inline(L_3, NULL);
		NullCheck(L_4);
		TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* L_5;
		L_5 = Component_GetComponent_TisTMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9_m0C4C5268B54C7097888C6B109527A680772EBCB5(L_4, Component_GetComponent_TisTMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9_m0C4C5268B54C7097888C6B109527A680772EBCB5_RuntimeMethod_var);
		V_0 = L_5;
		// return text ? text.text : "";
		TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* L_6 = V_0;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_7;
		L_7 = Object_op_Implicit_m18E1885C296CC868AC918101523697CFE6413C79(L_6, NULL);
		if (L_7)
		{
			goto IL_0037;
		}
	}
	{
		return _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
	}

IL_0037:
	{
		TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* L_8 = V_0;
		NullCheck(L_8);
		String_t* L_9;
		L_9 = VirtualFuncInvoker0< String_t* >::Invoke(65 /* System.String TMPro.TMP_Text::get_text() */, L_8);
		return L_9;
	}
}
// System.Int32 WebGLSupport.WrappedTMPInputField::get_fontSize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t WrappedTMPInputField_get_fontSize_mE7C1367744FEE7EF9417DAB961F83293CBAE0609 (WrappedTMPInputField_t5812136E49D051CA7D0F72155950CB226F87247F* __this, const RuntimeMethod* method) 
{
	{
		// get { return (int)input.textComponent.fontSize; }
		TMP_InputField_t3488E0EE8C3DF56C6A328EC95D1BEEA2DF4A7D5F* L_0 = __this->___input_0;
		NullCheck(L_0);
		TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* L_1;
		L_1 = TMP_InputField_get_textComponent_m85C4BC3F4C18206B3B942F03DB0B953B028EE1CE_inline(L_0, NULL);
		NullCheck(L_1);
		float L_2;
		L_2 = TMP_Text_get_fontSize_m13A8365A56EA2B726EAD826B4A69C8918A528731_inline(L_1, NULL);
		return il2cpp_codegen_cast_double_to_int<int32_t>(L_2);
	}
}
// WebGLSupport.ContentType WebGLSupport.WrappedTMPInputField::get_contentType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t WrappedTMPInputField_get_contentType_m7F5BF8EFC658B40CFC0E270FE378177BF9651EFE (WrappedTMPInputField_t5812136E49D051CA7D0F72155950CB226F87247F* __this, const RuntimeMethod* method) 
{
	{
		// get { return (ContentType)input.contentType; }
		TMP_InputField_t3488E0EE8C3DF56C6A328EC95D1BEEA2DF4A7D5F* L_0 = __this->___input_0;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = TMP_InputField_get_contentType_m32EEDFC275E9CB6C759A4F117EBAA40336B9030D_inline(L_0, NULL);
		return (int32_t)(L_1);
	}
}
// WebGLSupport.LineType WebGLSupport.WrappedTMPInputField::get_lineType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t WrappedTMPInputField_get_lineType_m4F3479B865564D64B6458CA9582E1FF150864FC0 (WrappedTMPInputField_t5812136E49D051CA7D0F72155950CB226F87247F* __this, const RuntimeMethod* method) 
{
	{
		// get { return (LineType)input.lineType; }
		TMP_InputField_t3488E0EE8C3DF56C6A328EC95D1BEEA2DF4A7D5F* L_0 = __this->___input_0;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = TMP_InputField_get_lineType_mE221F133A310EB6C93DA24E1F5900E948771D64C_inline(L_0, NULL);
		return (int32_t)(L_1);
	}
}
// System.Int32 WebGLSupport.WrappedTMPInputField::get_characterLimit()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t WrappedTMPInputField_get_characterLimit_m452ED09B184B63C9183B5521FE6AC10D17430501 (WrappedTMPInputField_t5812136E49D051CA7D0F72155950CB226F87247F* __this, const RuntimeMethod* method) 
{
	{
		// get { return input.characterLimit; }
		TMP_InputField_t3488E0EE8C3DF56C6A328EC95D1BEEA2DF4A7D5F* L_0 = __this->___input_0;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = TMP_InputField_get_characterLimit_m59833E0A22BACBDF3EDA6A70A30B87272FBAA409_inline(L_0, NULL);
		return L_1;
	}
}
// System.Int32 WebGLSupport.WrappedTMPInputField::get_caretPosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t WrappedTMPInputField_get_caretPosition_mE066CAC49456AA680340D3FC7467D739BF6377ED (WrappedTMPInputField_t5812136E49D051CA7D0F72155950CB226F87247F* __this, const RuntimeMethod* method) 
{
	{
		// get { return input.caretPosition; }
		TMP_InputField_t3488E0EE8C3DF56C6A328EC95D1BEEA2DF4A7D5F* L_0 = __this->___input_0;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = TMP_InputField_get_caretPosition_m1F103634776349DFA375AC8C64F1D2535A693A15(L_0, NULL);
		return L_1;
	}
}
// System.Boolean WebGLSupport.WrappedTMPInputField::get_isFocused()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WrappedTMPInputField_get_isFocused_m1F3E052B7497BCFC31357803E3F37D7CAC8D4F64 (WrappedTMPInputField_t5812136E49D051CA7D0F72155950CB226F87247F* __this, const RuntimeMethod* method) 
{
	{
		// get { return input.isFocused; }
		TMP_InputField_t3488E0EE8C3DF56C6A328EC95D1BEEA2DF4A7D5F* L_0 = __this->___input_0;
		NullCheck(L_0);
		bool L_1;
		L_1 = TMP_InputField_get_isFocused_m7FD1AA3B92404C30596FF6EE5F644757A2F060DE_inline(L_0, NULL);
		return L_1;
	}
}
// System.Int32 WebGLSupport.WrappedTMPInputField::get_selectionFocusPosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t WrappedTMPInputField_get_selectionFocusPosition_mC9F7BDDD849EA796763F213E3C195C5501BA5C06 (WrappedTMPInputField_t5812136E49D051CA7D0F72155950CB226F87247F* __this, const RuntimeMethod* method) 
{
	{
		// get { return input.selectionStringFocusPosition; }
		TMP_InputField_t3488E0EE8C3DF56C6A328EC95D1BEEA2DF4A7D5F* L_0 = __this->___input_0;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = TMP_InputField_get_selectionStringFocusPosition_mA044AFF5699E8B61BF3CBE271522AC8CA7088B0F(L_0, NULL);
		return L_1;
	}
}
// System.Void WebGLSupport.WrappedTMPInputField::set_selectionFocusPosition(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WrappedTMPInputField_set_selectionFocusPosition_mCD9107E820A9C9911BB648BFB8386BADCE4EE853 (WrappedTMPInputField_t5812136E49D051CA7D0F72155950CB226F87247F* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	{
		// set { input.selectionStringFocusPosition = value; }
		TMP_InputField_t3488E0EE8C3DF56C6A328EC95D1BEEA2DF4A7D5F* L_0 = __this->___input_0;
		int32_t L_1 = ___value0;
		NullCheck(L_0);
		TMP_InputField_set_selectionStringFocusPosition_mB23FDE5288C4F033028320FE4DBDEB096AAB3917(L_0, L_1, NULL);
		// set { input.selectionStringFocusPosition = value; }
		return;
	}
}
// System.Int32 WebGLSupport.WrappedTMPInputField::get_selectionAnchorPosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t WrappedTMPInputField_get_selectionAnchorPosition_mCEFD85591D1F8B379A69713DAB7282991F6228AD (WrappedTMPInputField_t5812136E49D051CA7D0F72155950CB226F87247F* __this, const RuntimeMethod* method) 
{
	{
		// get { return input.selectionStringAnchorPosition; }
		TMP_InputField_t3488E0EE8C3DF56C6A328EC95D1BEEA2DF4A7D5F* L_0 = __this->___input_0;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = TMP_InputField_get_selectionStringAnchorPosition_m321370B1A913B9B619DE5C5A5E5FA8D251C0B8F2(L_0, NULL);
		return L_1;
	}
}
// System.Void WebGLSupport.WrappedTMPInputField::set_selectionAnchorPosition(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WrappedTMPInputField_set_selectionAnchorPosition_m7E2B80DB50A7B5FA9F2CE956BDE32C23565E249B (WrappedTMPInputField_t5812136E49D051CA7D0F72155950CB226F87247F* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	{
		// set { input.selectionStringAnchorPosition = value; }
		TMP_InputField_t3488E0EE8C3DF56C6A328EC95D1BEEA2DF4A7D5F* L_0 = __this->___input_0;
		int32_t L_1 = ___value0;
		NullCheck(L_0);
		TMP_InputField_set_selectionStringAnchorPosition_m60E8DEBD9389373AD410E7E868D3C36CCA202B8E(L_0, L_1, NULL);
		// set { input.selectionStringAnchorPosition = value; }
		return;
	}
}
// System.Boolean WebGLSupport.WrappedTMPInputField::get_OnFocusSelectAll()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WrappedTMPInputField_get_OnFocusSelectAll_mFFCA7DCBACDA3AD1A554957D8467AF5C790C09EE (WrappedTMPInputField_t5812136E49D051CA7D0F72155950CB226F87247F* __this, const RuntimeMethod* method) 
{
	{
		// get { return input.onFocusSelectAll; }
		TMP_InputField_t3488E0EE8C3DF56C6A328EC95D1BEEA2DF4A7D5F* L_0 = __this->___input_0;
		NullCheck(L_0);
		bool L_1;
		L_1 = TMP_InputField_get_onFocusSelectAll_m6A1A06461D6B01EE2E68624B9D7E5E3C7D092CDC_inline(L_0, NULL);
		return L_1;
	}
}
// System.Void WebGLSupport.WrappedTMPInputField::.ctor(TMPro.TMP_InputField)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WrappedTMPInputField__ctor_mA4A41F6731D79FF01B9716498B593502DC0131F3 (WrappedTMPInputField_t5812136E49D051CA7D0F72155950CB226F87247F* __this, TMP_InputField_t3488E0EE8C3DF56C6A328EC95D1BEEA2DF4A7D5F* ___input0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RebuildChecker_t655BE8F346B22370339BAE56B91783950CAAC807_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public WrappedTMPInputField(TMP_InputField input)
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// this.input = input;
		TMP_InputField_t3488E0EE8C3DF56C6A328EC95D1BEEA2DF4A7D5F* L_0 = ___input0;
		__this->___input_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___input_0), (void*)L_0);
		// checker = new RebuildChecker(this);
		RebuildChecker_t655BE8F346B22370339BAE56B91783950CAAC807* L_1 = (RebuildChecker_t655BE8F346B22370339BAE56B91783950CAAC807*)il2cpp_codegen_object_new(RebuildChecker_t655BE8F346B22370339BAE56B91783950CAAC807_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		RebuildChecker__ctor_mC68C7B0720DF8D5826A5244189C46C2C9D1E5299(L_1, __this, NULL);
		__this->___checker_1 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___checker_1), (void*)L_1);
		// }
		return;
	}
}
// UnityEngine.RectTransform WebGLSupport.WrappedTMPInputField::RectTransform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* WrappedTMPInputField_RectTransform_m0D8B64B736508FEC9D272E7AA7A7274EAE68AA10 (WrappedTMPInputField_t5812136E49D051CA7D0F72155950CB226F87247F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisRectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_m0640480E7E38BB88B0D1F6AD59E697C8EE6AAFA4_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return input.GetComponent<RectTransform>();
		TMP_InputField_t3488E0EE8C3DF56C6A328EC95D1BEEA2DF4A7D5F* L_0 = __this->___input_0;
		NullCheck(L_0);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_1;
		L_1 = Component_GetComponent_TisRectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_m0640480E7E38BB88B0D1F6AD59E697C8EE6AAFA4(L_0, Component_GetComponent_TisRectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_m0640480E7E38BB88B0D1F6AD59E697C8EE6AAFA4_RuntimeMethod_var);
		return L_1;
	}
}
// System.Void WebGLSupport.WrappedTMPInputField::ActivateInputField()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WrappedTMPInputField_ActivateInputField_mFDE8BAFDD23DA8DFF394F61C321287C81A78CD2D (WrappedTMPInputField_t5812136E49D051CA7D0F72155950CB226F87247F* __this, const RuntimeMethod* method) 
{
	{
		// input.ActivateInputField();
		TMP_InputField_t3488E0EE8C3DF56C6A328EC95D1BEEA2DF4A7D5F* L_0 = __this->___input_0;
		NullCheck(L_0);
		TMP_InputField_ActivateInputField_m9471012A606F201DF838539F5400D072A827914F(L_0, NULL);
		// }
		return;
	}
}
// System.Void WebGLSupport.WrappedTMPInputField::DeactivateInputField()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WrappedTMPInputField_DeactivateInputField_m2E3B229E71C8C4E9248AD8BACC8F1DE7054312E7 (WrappedTMPInputField_t5812136E49D051CA7D0F72155950CB226F87247F* __this, const RuntimeMethod* method) 
{
	{
		// input.DeactivateInputField();
		TMP_InputField_t3488E0EE8C3DF56C6A328EC95D1BEEA2DF4A7D5F* L_0 = __this->___input_0;
		NullCheck(L_0);
		TMP_InputField_DeactivateInputField_m1C829676E9DC0D3E5DAE85D1869D26FBF748184D(L_0, (bool)0, NULL);
		// }
		return;
	}
}
// System.Void WebGLSupport.WrappedTMPInputField::Rebuild()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WrappedTMPInputField_Rebuild_m4B3918D9D5EA8B9E2EA0A21CD90A111B2C3C68AC (WrappedTMPInputField_t5812136E49D051CA7D0F72155950CB226F87247F* __this, const RuntimeMethod* method) 
{
	{
		// if (checker.NeedRebuild())
		RebuildChecker_t655BE8F346B22370339BAE56B91783950CAAC807* L_0 = __this->___checker_1;
		NullCheck(L_0);
		bool L_1;
		L_1 = RebuildChecker_NeedRebuild_m84BFC0E6654441869C9D4B25718564302A977781(L_0, (bool)0, NULL);
		if (!L_1)
		{
			goto IL_003a;
		}
	}
	{
		// input.textComponent.SetVerticesDirty();
		TMP_InputField_t3488E0EE8C3DF56C6A328EC95D1BEEA2DF4A7D5F* L_2 = __this->___input_0;
		NullCheck(L_2);
		TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* L_3;
		L_3 = TMP_InputField_get_textComponent_m85C4BC3F4C18206B3B942F03DB0B953B028EE1CE_inline(L_2, NULL);
		NullCheck(L_3);
		VirtualActionInvoker0::Invoke(28 /* System.Void UnityEngine.UI.Graphic::SetVerticesDirty() */, L_3);
		// input.textComponent.SetLayoutDirty();
		TMP_InputField_t3488E0EE8C3DF56C6A328EC95D1BEEA2DF4A7D5F* L_4 = __this->___input_0;
		NullCheck(L_4);
		TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* L_5;
		L_5 = TMP_InputField_get_textComponent_m85C4BC3F4C18206B3B942F03DB0B953B028EE1CE_inline(L_4, NULL);
		NullCheck(L_5);
		VirtualActionInvoker0::Invoke(27 /* System.Void UnityEngine.UI.Graphic::SetLayoutDirty() */, L_5);
		// input.Rebuild(CanvasUpdate.LatePreRender);
		TMP_InputField_t3488E0EE8C3DF56C6A328EC95D1BEEA2DF4A7D5F* L_6 = __this->___input_0;
		NullCheck(L_6);
		VirtualActionInvoker1< int32_t >::Invoke(69 /* System.Void TMPro.TMP_InputField::Rebuild(UnityEngine.UI.CanvasUpdate) */, L_6, 4);
	}

IL_003a:
	{
		// }
		return;
	}
}
// System.Boolean WebGLSupport.WrappedTMPInputField::rectOverlaps(UnityEngine.RectTransform,UnityEngine.RectTransform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WrappedTMPInputField_rectOverlaps_mAC93C03C635F0DAB8116A74588DCC8E75E14B7E5 (WrappedTMPInputField_t5812136E49D051CA7D0F72155950CB226F87247F* __this, RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___rectTrans10, RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___rectTrans21, const RuntimeMethod* method) 
{
	Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D V_0;
	memset((&V_0), 0, sizeof(V_0));
	Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D V_1;
	memset((&V_1), 0, sizeof(V_1));
	Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		// Rect rect1 = new Rect(rectTrans1.localPosition.x, rectTrans1.localPosition.y, rectTrans1.rect.width, rectTrans1.rect.height);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_0 = ___rectTrans10;
		NullCheck(L_0);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Transform_get_localPosition_mA9C86B990DF0685EA1061A120218993FDCC60A95(L_0, NULL);
		float L_2 = L_1.___x_2;
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_3 = ___rectTrans10;
		NullCheck(L_3);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		L_4 = Transform_get_localPosition_mA9C86B990DF0685EA1061A120218993FDCC60A95(L_3, NULL);
		float L_5 = L_4.___y_3;
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_6 = ___rectTrans10;
		NullCheck(L_6);
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_7;
		L_7 = RectTransform_get_rect_mC82A60F8C3805ED9833508CCC233689641207488(L_6, NULL);
		V_2 = L_7;
		float L_8;
		L_8 = Rect_get_width_m620D67551372073C9C32C4C4624C2A5713F7F9A9((&V_2), NULL);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_9 = ___rectTrans10;
		NullCheck(L_9);
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_10;
		L_10 = RectTransform_get_rect_mC82A60F8C3805ED9833508CCC233689641207488(L_9, NULL);
		V_2 = L_10;
		float L_11;
		L_11 = Rect_get_height_mE1AA6C6C725CCD2D317BD2157396D3CF7D47C9D8((&V_2), NULL);
		Rect__ctor_m18C3033D135097BEE424AAA68D91C706D2647F23((&V_0), L_2, L_5, L_8, L_11, NULL);
		// Rect rect2 = new Rect(rectTrans2.localPosition.x, rectTrans2.localPosition.y, rectTrans2.rect.width, rectTrans2.rect.height);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_12 = ___rectTrans21;
		NullCheck(L_12);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13;
		L_13 = Transform_get_localPosition_mA9C86B990DF0685EA1061A120218993FDCC60A95(L_12, NULL);
		float L_14 = L_13.___x_2;
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_15 = ___rectTrans21;
		NullCheck(L_15);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_16;
		L_16 = Transform_get_localPosition_mA9C86B990DF0685EA1061A120218993FDCC60A95(L_15, NULL);
		float L_17 = L_16.___y_3;
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_18 = ___rectTrans21;
		NullCheck(L_18);
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_19;
		L_19 = RectTransform_get_rect_mC82A60F8C3805ED9833508CCC233689641207488(L_18, NULL);
		V_2 = L_19;
		float L_20;
		L_20 = Rect_get_width_m620D67551372073C9C32C4C4624C2A5713F7F9A9((&V_2), NULL);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_21 = ___rectTrans21;
		NullCheck(L_21);
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_22;
		L_22 = RectTransform_get_rect_mC82A60F8C3805ED9833508CCC233689641207488(L_21, NULL);
		V_2 = L_22;
		float L_23;
		L_23 = Rect_get_height_mE1AA6C6C725CCD2D317BD2157396D3CF7D47C9D8((&V_2), NULL);
		Rect__ctor_m18C3033D135097BEE424AAA68D91C706D2647F23((&V_1), L_14, L_17, L_20, L_23, NULL);
		// return rect1.Overlaps(rect2);
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_24 = V_1;
		bool L_25;
		L_25 = Rect_Overlaps_m5A540A24DAD3327006A3A2E209CC17992173B572((&V_0), L_24, NULL);
		return L_25;
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
// System.Void WebGLSupport.WebGLWindowPlugin::WebGLWindowInit()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebGLWindowPlugin_WebGLWindowInit_m960C490362803DA0BEF73F234AF0E688D1C0A7FE (const RuntimeMethod* method) 
{
	{
		// public static void WebGLWindowInit() { }
		return;
	}
}
// System.Void WebGLSupport.WebGLWindowPlugin::WebGLWindowOnFocus(System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebGLWindowPlugin_WebGLWindowOnFocus_m6EC6CB7E44C6D2DBB917B13D512B90E2ABC7118E (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___cb0, const RuntimeMethod* method) 
{
	{
		// public static void WebGLWindowOnFocus(Action cb) { }
		return;
	}
}
// System.Void WebGLSupport.WebGLWindowPlugin::WebGLWindowOnBlur(System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebGLWindowPlugin_WebGLWindowOnBlur_m99A095D32B0008DA26F567597347BC7F523C7394 (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___cb0, const RuntimeMethod* method) 
{
	{
		// public static void WebGLWindowOnBlur(Action cb) { }
		return;
	}
}
// System.Void WebGLSupport.WebGLWindowPlugin::WebGLWindowOnResize(System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebGLWindowPlugin_WebGLWindowOnResize_m892E6783D761CAC20C59E5F3BA66645CDCD6DC34 (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___cb0, const RuntimeMethod* method) 
{
	{
		// public static void WebGLWindowOnResize(Action cb) { }
		return;
	}
}
// System.Void WebGLSupport.WebGLWindowPlugin::WebGLWindowInjectFullscreen()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebGLWindowPlugin_WebGLWindowInjectFullscreen_m5D7D5958519649542BB4BEE0C6FF21104D322FAC (const RuntimeMethod* method) 
{
	{
		// public static void WebGLWindowInjectFullscreen() { }
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
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_WebGLWindow_OnWindowFocus_m9AA354E343431758C618658FE8AC209BAF3A7444()
{
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Managed method invocation
	WebGLWindow_OnWindowFocus_m9AA354E343431758C618658FE8AC209BAF3A7444(NULL);

}
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_WebGLWindow_OnWindowBlur_m12D443C9E80538273D5FF583B71CF8FBD1BADC1F()
{
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Managed method invocation
	WebGLWindow_OnWindowBlur_m12D443C9E80538273D5FF583B71CF8FBD1BADC1F(NULL);

}
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_WebGLWindow_OnWindowResize_m30932521D2D74219E34C250A6C64EE29B252082F()
{
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Managed method invocation
	WebGLWindow_OnWindowResize_m30932521D2D74219E34C250A6C64EE29B252082F(NULL);

}
// System.Void WebGLSupport.WebGLWindow::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebGLWindow__cctor_m26D2E32305C45A1E4B6229400CC42F51D684D11D (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3C_cctorU3Eb__0_0_m1D2F44D721E7B2CC93FC553D38718F0ED1E02A5F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3C_cctorU3Eb__0_1_mC2E47AB89795244D3DCF29192253A2F455A956B2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3C_cctorU3Eb__0_2_m8515844916DA936DB04853841DB7932ABB5262C1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_tD04EC24521C276620AF53A1530384866DCB3622D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WebGLWindow_t360F95487A76FFDFAD43C992ACEBF9CF8FA4D3A3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static event Action OnFocusEvent = () => { };
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_tD04EC24521C276620AF53A1530384866DCB3622D_il2cpp_TypeInfo_var);
		U3CU3Ec_tD04EC24521C276620AF53A1530384866DCB3622D* L_0 = ((U3CU3Ec_tD04EC24521C276620AF53A1530384866DCB3622D_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tD04EC24521C276620AF53A1530384866DCB3622D_il2cpp_TypeInfo_var))->___U3CU3E9_0;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_1 = (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)il2cpp_codegen_object_new(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		Action__ctor_mBDC7B0B4A3F583B64C2896F01BDED360772F67DC(L_1, L_0, (intptr_t)((void*)U3CU3Ec_U3C_cctorU3Eb__0_0_m1D2F44D721E7B2CC93FC553D38718F0ED1E02A5F_RuntimeMethod_var), NULL);
		((WebGLWindow_t360F95487A76FFDFAD43C992ACEBF9CF8FA4D3A3_StaticFields*)il2cpp_codegen_static_fields_for(WebGLWindow_t360F95487A76FFDFAD43C992ACEBF9CF8FA4D3A3_il2cpp_TypeInfo_var))->___OnFocusEvent_1 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&((WebGLWindow_t360F95487A76FFDFAD43C992ACEBF9CF8FA4D3A3_StaticFields*)il2cpp_codegen_static_fields_for(WebGLWindow_t360F95487A76FFDFAD43C992ACEBF9CF8FA4D3A3_il2cpp_TypeInfo_var))->___OnFocusEvent_1), (void*)L_1);
		// public static event Action OnBlurEvent = () => { };
		U3CU3Ec_tD04EC24521C276620AF53A1530384866DCB3622D* L_2 = ((U3CU3Ec_tD04EC24521C276620AF53A1530384866DCB3622D_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tD04EC24521C276620AF53A1530384866DCB3622D_il2cpp_TypeInfo_var))->___U3CU3E9_0;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_3 = (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)il2cpp_codegen_object_new(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		Action__ctor_mBDC7B0B4A3F583B64C2896F01BDED360772F67DC(L_3, L_2, (intptr_t)((void*)U3CU3Ec_U3C_cctorU3Eb__0_1_mC2E47AB89795244D3DCF29192253A2F455A956B2_RuntimeMethod_var), NULL);
		((WebGLWindow_t360F95487A76FFDFAD43C992ACEBF9CF8FA4D3A3_StaticFields*)il2cpp_codegen_static_fields_for(WebGLWindow_t360F95487A76FFDFAD43C992ACEBF9CF8FA4D3A3_il2cpp_TypeInfo_var))->___OnBlurEvent_2 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&((WebGLWindow_t360F95487A76FFDFAD43C992ACEBF9CF8FA4D3A3_StaticFields*)il2cpp_codegen_static_fields_for(WebGLWindow_t360F95487A76FFDFAD43C992ACEBF9CF8FA4D3A3_il2cpp_TypeInfo_var))->___OnBlurEvent_2), (void*)L_3);
		// public static event Action OnResizeEvent = () => { };
		U3CU3Ec_tD04EC24521C276620AF53A1530384866DCB3622D* L_4 = ((U3CU3Ec_tD04EC24521C276620AF53A1530384866DCB3622D_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tD04EC24521C276620AF53A1530384866DCB3622D_il2cpp_TypeInfo_var))->___U3CU3E9_0;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_5 = (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)il2cpp_codegen_object_new(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		NullCheck(L_5);
		Action__ctor_mBDC7B0B4A3F583B64C2896F01BDED360772F67DC(L_5, L_4, (intptr_t)((void*)U3CU3Ec_U3C_cctorU3Eb__0_2_m8515844916DA936DB04853841DB7932ABB5262C1_RuntimeMethod_var), NULL);
		((WebGLWindow_t360F95487A76FFDFAD43C992ACEBF9CF8FA4D3A3_StaticFields*)il2cpp_codegen_static_fields_for(WebGLWindow_t360F95487A76FFDFAD43C992ACEBF9CF8FA4D3A3_il2cpp_TypeInfo_var))->___OnResizeEvent_3 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&((WebGLWindow_t360F95487A76FFDFAD43C992ACEBF9CF8FA4D3A3_StaticFields*)il2cpp_codegen_static_fields_for(WebGLWindow_t360F95487A76FFDFAD43C992ACEBF9CF8FA4D3A3_il2cpp_TypeInfo_var))->___OnResizeEvent_3), (void*)L_5);
		// WebGLWindowPlugin.WebGLWindowInit();
		WebGLWindowPlugin_WebGLWindowInit_m960C490362803DA0BEF73F234AF0E688D1C0A7FE(NULL);
		// }
		return;
	}
}
// System.Boolean WebGLSupport.WebGLWindow::get_Focus()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WebGLWindow_get_Focus_m208123F57C26744447C4A137DF835528409D0DB3 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WebGLWindow_t360F95487A76FFDFAD43C992ACEBF9CF8FA4D3A3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static bool Focus { get; private set; }
		il2cpp_codegen_runtime_class_init_inline(WebGLWindow_t360F95487A76FFDFAD43C992ACEBF9CF8FA4D3A3_il2cpp_TypeInfo_var);
		bool L_0 = ((WebGLWindow_t360F95487A76FFDFAD43C992ACEBF9CF8FA4D3A3_StaticFields*)il2cpp_codegen_static_fields_for(WebGLWindow_t360F95487A76FFDFAD43C992ACEBF9CF8FA4D3A3_il2cpp_TypeInfo_var))->___U3CFocusU3Ek__BackingField_0;
		return L_0;
	}
}
// System.Void WebGLSupport.WebGLWindow::set_Focus(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebGLWindow_set_Focus_m82255B46ADB7EA97A137CB6ECEBE33B361945D6F (bool ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WebGLWindow_t360F95487A76FFDFAD43C992ACEBF9CF8FA4D3A3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static bool Focus { get; private set; }
		bool L_0 = ___value0;
		il2cpp_codegen_runtime_class_init_inline(WebGLWindow_t360F95487A76FFDFAD43C992ACEBF9CF8FA4D3A3_il2cpp_TypeInfo_var);
		((WebGLWindow_t360F95487A76FFDFAD43C992ACEBF9CF8FA4D3A3_StaticFields*)il2cpp_codegen_static_fields_for(WebGLWindow_t360F95487A76FFDFAD43C992ACEBF9CF8FA4D3A3_il2cpp_TypeInfo_var))->___U3CFocusU3Ek__BackingField_0 = L_0;
		return;
	}
}
// System.Void WebGLSupport.WebGLWindow::add_OnFocusEvent(System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebGLWindow_add_OnFocusEvent_m07D0C4886B8DB874B6849031CCE26F9C7ED6285E (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WebGLWindow_t360F95487A76FFDFAD43C992ACEBF9CF8FA4D3A3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* V_0 = NULL;
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* V_1 = NULL;
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* V_2 = NULL;
	{
		il2cpp_codegen_runtime_class_init_inline(WebGLWindow_t360F95487A76FFDFAD43C992ACEBF9CF8FA4D3A3_il2cpp_TypeInfo_var);
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_0 = ((WebGLWindow_t360F95487A76FFDFAD43C992ACEBF9CF8FA4D3A3_StaticFields*)il2cpp_codegen_static_fields_for(WebGLWindow_t360F95487A76FFDFAD43C992ACEBF9CF8FA4D3A3_il2cpp_TypeInfo_var))->___OnFocusEvent_1;
		V_0 = L_0;
	}

IL_0006:
	{
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_1 = V_0;
		V_1 = L_1;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_2 = V_1;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_3 = ___value0;
		Delegate_t* L_4;
		L_4 = Delegate_Combine_m8B9D24CED35033C7FC56501DFE650F5CB7FF012C(L_2, L_3, NULL);
		V_2 = ((Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)CastclassSealed((RuntimeObject*)L_4, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var));
		il2cpp_codegen_runtime_class_init_inline(WebGLWindow_t360F95487A76FFDFAD43C992ACEBF9CF8FA4D3A3_il2cpp_TypeInfo_var);
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_5 = V_2;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_6 = V_1;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_7;
		L_7 = InterlockedCompareExchangeImpl<Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*>((&((WebGLWindow_t360F95487A76FFDFAD43C992ACEBF9CF8FA4D3A3_StaticFields*)il2cpp_codegen_static_fields_for(WebGLWindow_t360F95487A76FFDFAD43C992ACEBF9CF8FA4D3A3_il2cpp_TypeInfo_var))->___OnFocusEvent_1), L_5, L_6);
		V_0 = L_7;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_8 = V_0;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_9 = V_1;
		if ((!(((RuntimeObject*)(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)L_8) == ((RuntimeObject*)(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)L_9))))
		{
			goto IL_0006;
		}
	}
	{
		return;
	}
}
// System.Void WebGLSupport.WebGLWindow::remove_OnFocusEvent(System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebGLWindow_remove_OnFocusEvent_m31E03BACAF2274B9395046E246B286D8C2B8091B (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WebGLWindow_t360F95487A76FFDFAD43C992ACEBF9CF8FA4D3A3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* V_0 = NULL;
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* V_1 = NULL;
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* V_2 = NULL;
	{
		il2cpp_codegen_runtime_class_init_inline(WebGLWindow_t360F95487A76FFDFAD43C992ACEBF9CF8FA4D3A3_il2cpp_TypeInfo_var);
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_0 = ((WebGLWindow_t360F95487A76FFDFAD43C992ACEBF9CF8FA4D3A3_StaticFields*)il2cpp_codegen_static_fields_for(WebGLWindow_t360F95487A76FFDFAD43C992ACEBF9CF8FA4D3A3_il2cpp_TypeInfo_var))->___OnFocusEvent_1;
		V_0 = L_0;
	}

IL_0006:
	{
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_1 = V_0;
		V_1 = L_1;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_2 = V_1;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_3 = ___value0;
		Delegate_t* L_4;
		L_4 = Delegate_Remove_m40506877934EC1AD4ADAE57F5E97AF0BC0F96116(L_2, L_3, NULL);
		V_2 = ((Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)CastclassSealed((RuntimeObject*)L_4, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var));
		il2cpp_codegen_runtime_class_init_inline(WebGLWindow_t360F95487A76FFDFAD43C992ACEBF9CF8FA4D3A3_il2cpp_TypeInfo_var);
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_5 = V_2;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_6 = V_1;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_7;
		L_7 = InterlockedCompareExchangeImpl<Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*>((&((WebGLWindow_t360F95487A76FFDFAD43C992ACEBF9CF8FA4D3A3_StaticFields*)il2cpp_codegen_static_fields_for(WebGLWindow_t360F95487A76FFDFAD43C992ACEBF9CF8FA4D3A3_il2cpp_TypeInfo_var))->___OnFocusEvent_1), L_5, L_6);
		V_0 = L_7;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_8 = V_0;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_9 = V_1;
		if ((!(((RuntimeObject*)(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)L_8) == ((RuntimeObject*)(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)L_9))))
		{
			goto IL_0006;
		}
	}
	{
		return;
	}
}
// System.Void WebGLSupport.WebGLWindow::add_OnBlurEvent(System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebGLWindow_add_OnBlurEvent_mAD3A05ED7219F7DBDCDE211AD302AFF6AAEC76AF (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WebGLWindow_t360F95487A76FFDFAD43C992ACEBF9CF8FA4D3A3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* V_0 = NULL;
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* V_1 = NULL;
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* V_2 = NULL;
	{
		il2cpp_codegen_runtime_class_init_inline(WebGLWindow_t360F95487A76FFDFAD43C992ACEBF9CF8FA4D3A3_il2cpp_TypeInfo_var);
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_0 = ((WebGLWindow_t360F95487A76FFDFAD43C992ACEBF9CF8FA4D3A3_StaticFields*)il2cpp_codegen_static_fields_for(WebGLWindow_t360F95487A76FFDFAD43C992ACEBF9CF8FA4D3A3_il2cpp_TypeInfo_var))->___OnBlurEvent_2;
		V_0 = L_0;
	}

IL_0006:
	{
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_1 = V_0;
		V_1 = L_1;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_2 = V_1;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_3 = ___value0;
		Delegate_t* L_4;
		L_4 = Delegate_Combine_m8B9D24CED35033C7FC56501DFE650F5CB7FF012C(L_2, L_3, NULL);
		V_2 = ((Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)CastclassSealed((RuntimeObject*)L_4, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var));
		il2cpp_codegen_runtime_class_init_inline(WebGLWindow_t360F95487A76FFDFAD43C992ACEBF9CF8FA4D3A3_il2cpp_TypeInfo_var);
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_5 = V_2;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_6 = V_1;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_7;
		L_7 = InterlockedCompareExchangeImpl<Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*>((&((WebGLWindow_t360F95487A76FFDFAD43C992ACEBF9CF8FA4D3A3_StaticFields*)il2cpp_codegen_static_fields_for(WebGLWindow_t360F95487A76FFDFAD43C992ACEBF9CF8FA4D3A3_il2cpp_TypeInfo_var))->___OnBlurEvent_2), L_5, L_6);
		V_0 = L_7;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_8 = V_0;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_9 = V_1;
		if ((!(((RuntimeObject*)(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)L_8) == ((RuntimeObject*)(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)L_9))))
		{
			goto IL_0006;
		}
	}
	{
		return;
	}
}
// System.Void WebGLSupport.WebGLWindow::remove_OnBlurEvent(System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebGLWindow_remove_OnBlurEvent_m263FC52D6E9E0214C0E7EA8CE947FC5C336BCE79 (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WebGLWindow_t360F95487A76FFDFAD43C992ACEBF9CF8FA4D3A3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* V_0 = NULL;
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* V_1 = NULL;
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* V_2 = NULL;
	{
		il2cpp_codegen_runtime_class_init_inline(WebGLWindow_t360F95487A76FFDFAD43C992ACEBF9CF8FA4D3A3_il2cpp_TypeInfo_var);
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_0 = ((WebGLWindow_t360F95487A76FFDFAD43C992ACEBF9CF8FA4D3A3_StaticFields*)il2cpp_codegen_static_fields_for(WebGLWindow_t360F95487A76FFDFAD43C992ACEBF9CF8FA4D3A3_il2cpp_TypeInfo_var))->___OnBlurEvent_2;
		V_0 = L_0;
	}

IL_0006:
	{
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_1 = V_0;
		V_1 = L_1;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_2 = V_1;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_3 = ___value0;
		Delegate_t* L_4;
		L_4 = Delegate_Remove_m40506877934EC1AD4ADAE57F5E97AF0BC0F96116(L_2, L_3, NULL);
		V_2 = ((Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)CastclassSealed((RuntimeObject*)L_4, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var));
		il2cpp_codegen_runtime_class_init_inline(WebGLWindow_t360F95487A76FFDFAD43C992ACEBF9CF8FA4D3A3_il2cpp_TypeInfo_var);
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_5 = V_2;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_6 = V_1;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_7;
		L_7 = InterlockedCompareExchangeImpl<Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*>((&((WebGLWindow_t360F95487A76FFDFAD43C992ACEBF9CF8FA4D3A3_StaticFields*)il2cpp_codegen_static_fields_for(WebGLWindow_t360F95487A76FFDFAD43C992ACEBF9CF8FA4D3A3_il2cpp_TypeInfo_var))->___OnBlurEvent_2), L_5, L_6);
		V_0 = L_7;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_8 = V_0;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_9 = V_1;
		if ((!(((RuntimeObject*)(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)L_8) == ((RuntimeObject*)(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)L_9))))
		{
			goto IL_0006;
		}
	}
	{
		return;
	}
}
// System.Void WebGLSupport.WebGLWindow::add_OnResizeEvent(System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebGLWindow_add_OnResizeEvent_m01C45B788B352F00CDAA1A7FC34286E194464E1B (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WebGLWindow_t360F95487A76FFDFAD43C992ACEBF9CF8FA4D3A3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* V_0 = NULL;
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* V_1 = NULL;
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* V_2 = NULL;
	{
		il2cpp_codegen_runtime_class_init_inline(WebGLWindow_t360F95487A76FFDFAD43C992ACEBF9CF8FA4D3A3_il2cpp_TypeInfo_var);
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_0 = ((WebGLWindow_t360F95487A76FFDFAD43C992ACEBF9CF8FA4D3A3_StaticFields*)il2cpp_codegen_static_fields_for(WebGLWindow_t360F95487A76FFDFAD43C992ACEBF9CF8FA4D3A3_il2cpp_TypeInfo_var))->___OnResizeEvent_3;
		V_0 = L_0;
	}

IL_0006:
	{
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_1 = V_0;
		V_1 = L_1;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_2 = V_1;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_3 = ___value0;
		Delegate_t* L_4;
		L_4 = Delegate_Combine_m8B9D24CED35033C7FC56501DFE650F5CB7FF012C(L_2, L_3, NULL);
		V_2 = ((Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)CastclassSealed((RuntimeObject*)L_4, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var));
		il2cpp_codegen_runtime_class_init_inline(WebGLWindow_t360F95487A76FFDFAD43C992ACEBF9CF8FA4D3A3_il2cpp_TypeInfo_var);
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_5 = V_2;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_6 = V_1;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_7;
		L_7 = InterlockedCompareExchangeImpl<Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*>((&((WebGLWindow_t360F95487A76FFDFAD43C992ACEBF9CF8FA4D3A3_StaticFields*)il2cpp_codegen_static_fields_for(WebGLWindow_t360F95487A76FFDFAD43C992ACEBF9CF8FA4D3A3_il2cpp_TypeInfo_var))->___OnResizeEvent_3), L_5, L_6);
		V_0 = L_7;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_8 = V_0;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_9 = V_1;
		if ((!(((RuntimeObject*)(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)L_8) == ((RuntimeObject*)(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)L_9))))
		{
			goto IL_0006;
		}
	}
	{
		return;
	}
}
// System.Void WebGLSupport.WebGLWindow::remove_OnResizeEvent(System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebGLWindow_remove_OnResizeEvent_m76829C2E645BF601248EA41472A7A2526D905117 (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WebGLWindow_t360F95487A76FFDFAD43C992ACEBF9CF8FA4D3A3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* V_0 = NULL;
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* V_1 = NULL;
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* V_2 = NULL;
	{
		il2cpp_codegen_runtime_class_init_inline(WebGLWindow_t360F95487A76FFDFAD43C992ACEBF9CF8FA4D3A3_il2cpp_TypeInfo_var);
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_0 = ((WebGLWindow_t360F95487A76FFDFAD43C992ACEBF9CF8FA4D3A3_StaticFields*)il2cpp_codegen_static_fields_for(WebGLWindow_t360F95487A76FFDFAD43C992ACEBF9CF8FA4D3A3_il2cpp_TypeInfo_var))->___OnResizeEvent_3;
		V_0 = L_0;
	}

IL_0006:
	{
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_1 = V_0;
		V_1 = L_1;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_2 = V_1;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_3 = ___value0;
		Delegate_t* L_4;
		L_4 = Delegate_Remove_m40506877934EC1AD4ADAE57F5E97AF0BC0F96116(L_2, L_3, NULL);
		V_2 = ((Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)CastclassSealed((RuntimeObject*)L_4, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var));
		il2cpp_codegen_runtime_class_init_inline(WebGLWindow_t360F95487A76FFDFAD43C992ACEBF9CF8FA4D3A3_il2cpp_TypeInfo_var);
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_5 = V_2;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_6 = V_1;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_7;
		L_7 = InterlockedCompareExchangeImpl<Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*>((&((WebGLWindow_t360F95487A76FFDFAD43C992ACEBF9CF8FA4D3A3_StaticFields*)il2cpp_codegen_static_fields_for(WebGLWindow_t360F95487A76FFDFAD43C992ACEBF9CF8FA4D3A3_il2cpp_TypeInfo_var))->___OnResizeEvent_3), L_5, L_6);
		V_0 = L_7;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_8 = V_0;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_9 = V_1;
		if ((!(((RuntimeObject*)(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)L_8) == ((RuntimeObject*)(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)L_9))))
		{
			goto IL_0006;
		}
	}
	{
		return;
	}
}
// System.Void WebGLSupport.WebGLWindow::Init()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebGLWindow_Init_m6200E44B96DBC40EE10629679A8770E1E667870E (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WebGLWindow_OnWindowBlur_m12D443C9E80538273D5FF583B71CF8FBD1BADC1F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WebGLWindow_OnWindowFocus_m9AA354E343431758C618658FE8AC209BAF3A7444_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WebGLWindow_OnWindowResize_m30932521D2D74219E34C250A6C64EE29B252082F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WebGLWindow_t360F95487A76FFDFAD43C992ACEBF9CF8FA4D3A3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Focus = true;
		il2cpp_codegen_runtime_class_init_inline(WebGLWindow_t360F95487A76FFDFAD43C992ACEBF9CF8FA4D3A3_il2cpp_TypeInfo_var);
		WebGLWindow_set_Focus_m82255B46ADB7EA97A137CB6ECEBE33B361945D6F_inline((bool)1, NULL);
		// WebGLWindowPlugin.WebGLWindowOnFocus(OnWindowFocus);
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_0 = (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)il2cpp_codegen_object_new(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		Action__ctor_mBDC7B0B4A3F583B64C2896F01BDED360772F67DC(L_0, NULL, (intptr_t)((void*)WebGLWindow_OnWindowFocus_m9AA354E343431758C618658FE8AC209BAF3A7444_RuntimeMethod_var), NULL);
		WebGLWindowPlugin_WebGLWindowOnFocus_m6EC6CB7E44C6D2DBB917B13D512B90E2ABC7118E(L_0, NULL);
		// WebGLWindowPlugin.WebGLWindowOnBlur(OnWindowBlur);
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_1 = (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)il2cpp_codegen_object_new(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		Action__ctor_mBDC7B0B4A3F583B64C2896F01BDED360772F67DC(L_1, NULL, (intptr_t)((void*)WebGLWindow_OnWindowBlur_m12D443C9E80538273D5FF583B71CF8FBD1BADC1F_RuntimeMethod_var), NULL);
		WebGLWindowPlugin_WebGLWindowOnBlur_m99A095D32B0008DA26F567597347BC7F523C7394(L_1, NULL);
		// WebGLWindowPlugin.WebGLWindowOnResize(OnWindowResize);
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_2 = (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)il2cpp_codegen_object_new(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		Action__ctor_mBDC7B0B4A3F583B64C2896F01BDED360772F67DC(L_2, NULL, (intptr_t)((void*)WebGLWindow_OnWindowResize_m30932521D2D74219E34C250A6C64EE29B252082F_RuntimeMethod_var), NULL);
		WebGLWindowPlugin_WebGLWindowOnResize_m892E6783D761CAC20C59E5F3BA66645CDCD6DC34(L_2, NULL);
		// WebGLWindowPlugin.WebGLWindowInjectFullscreen();
		WebGLWindowPlugin_WebGLWindowInjectFullscreen_m5D7D5958519649542BB4BEE0C6FF21104D322FAC(NULL);
		// }
		return;
	}
}
// System.Void WebGLSupport.WebGLWindow::OnWindowFocus()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebGLWindow_OnWindowFocus_m9AA354E343431758C618658FE8AC209BAF3A7444 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WebGLWindow_t360F95487A76FFDFAD43C992ACEBF9CF8FA4D3A3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Focus = true;
		il2cpp_codegen_runtime_class_init_inline(WebGLWindow_t360F95487A76FFDFAD43C992ACEBF9CF8FA4D3A3_il2cpp_TypeInfo_var);
		WebGLWindow_set_Focus_m82255B46ADB7EA97A137CB6ECEBE33B361945D6F_inline((bool)1, NULL);
		// OnFocusEvent();
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_0 = ((WebGLWindow_t360F95487A76FFDFAD43C992ACEBF9CF8FA4D3A3_StaticFields*)il2cpp_codegen_static_fields_for(WebGLWindow_t360F95487A76FFDFAD43C992ACEBF9CF8FA4D3A3_il2cpp_TypeInfo_var))->___OnFocusEvent_1;
		NullCheck(L_0);
		Action_Invoke_m7126A54DACA72B845424072887B5F3A51FC3808E_inline(L_0, NULL);
		// }
		return;
	}
}
// System.Void WebGLSupport.WebGLWindow::OnWindowBlur()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebGLWindow_OnWindowBlur_m12D443C9E80538273D5FF583B71CF8FBD1BADC1F (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WebGLWindow_t360F95487A76FFDFAD43C992ACEBF9CF8FA4D3A3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Focus = false;
		il2cpp_codegen_runtime_class_init_inline(WebGLWindow_t360F95487A76FFDFAD43C992ACEBF9CF8FA4D3A3_il2cpp_TypeInfo_var);
		WebGLWindow_set_Focus_m82255B46ADB7EA97A137CB6ECEBE33B361945D6F_inline((bool)0, NULL);
		// OnBlurEvent();
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_0 = ((WebGLWindow_t360F95487A76FFDFAD43C992ACEBF9CF8FA4D3A3_StaticFields*)il2cpp_codegen_static_fields_for(WebGLWindow_t360F95487A76FFDFAD43C992ACEBF9CF8FA4D3A3_il2cpp_TypeInfo_var))->___OnBlurEvent_2;
		NullCheck(L_0);
		Action_Invoke_m7126A54DACA72B845424072887B5F3A51FC3808E_inline(L_0, NULL);
		// }
		return;
	}
}
// System.Void WebGLSupport.WebGLWindow::OnWindowResize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebGLWindow_OnWindowResize_m30932521D2D74219E34C250A6C64EE29B252082F (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WebGLWindow_t360F95487A76FFDFAD43C992ACEBF9CF8FA4D3A3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// OnResizeEvent();
		il2cpp_codegen_runtime_class_init_inline(WebGLWindow_t360F95487A76FFDFAD43C992ACEBF9CF8FA4D3A3_il2cpp_TypeInfo_var);
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_0 = ((WebGLWindow_t360F95487A76FFDFAD43C992ACEBF9CF8FA4D3A3_StaticFields*)il2cpp_codegen_static_fields_for(WebGLWindow_t360F95487A76FFDFAD43C992ACEBF9CF8FA4D3A3_il2cpp_TypeInfo_var))->___OnResizeEvent_3;
		NullCheck(L_0);
		Action_Invoke_m7126A54DACA72B845424072887B5F3A51FC3808E_inline(L_0, NULL);
		// }
		return;
	}
}
// System.Void WebGLSupport.WebGLWindow::RuntimeInitializeOnLoadMethod()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebGLWindow_RuntimeInitializeOnLoadMethod_mF24BA45FE6B9F579592FA8CCCCCEB5B68C3DD62D (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WebGLWindow_t360F95487A76FFDFAD43C992ACEBF9CF8FA4D3A3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Init();
		il2cpp_codegen_runtime_class_init_inline(WebGLWindow_t360F95487A76FFDFAD43C992ACEBF9CF8FA4D3A3_il2cpp_TypeInfo_var);
		WebGLWindow_Init_m6200E44B96DBC40EE10629679A8770E1E667870E(NULL);
		// }
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
// System.Void WebGLSupport.WebGLWindow/<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_mEAD944F431484933DD1BD9EEF2D3C873AB3CF8A2 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_tD04EC24521C276620AF53A1530384866DCB3622D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_tD04EC24521C276620AF53A1530384866DCB3622D* L_0 = (U3CU3Ec_tD04EC24521C276620AF53A1530384866DCB3622D*)il2cpp_codegen_object_new(U3CU3Ec_tD04EC24521C276620AF53A1530384866DCB3622D_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CU3Ec__ctor_m30CF9E5D46771CE4478A30788595DD0D94F52162(L_0, NULL);
		((U3CU3Ec_tD04EC24521C276620AF53A1530384866DCB3622D_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tD04EC24521C276620AF53A1530384866DCB3622D_il2cpp_TypeInfo_var))->___U3CU3E9_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_tD04EC24521C276620AF53A1530384866DCB3622D_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tD04EC24521C276620AF53A1530384866DCB3622D_il2cpp_TypeInfo_var))->___U3CU3E9_0), (void*)L_0);
		return;
	}
}
// System.Void WebGLSupport.WebGLWindow/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m30CF9E5D46771CE4478A30788595DD0D94F52162 (U3CU3Ec_tD04EC24521C276620AF53A1530384866DCB3622D* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Void WebGLSupport.WebGLWindow/<>c::<.cctor>b__0_0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec_U3C_cctorU3Eb__0_0_m1D2F44D721E7B2CC93FC553D38718F0ED1E02A5F (U3CU3Ec_tD04EC24521C276620AF53A1530384866DCB3622D* __this, const RuntimeMethod* method) 
{
	{
		// public static event Action OnFocusEvent = () => { };
		return;
	}
}
// System.Void WebGLSupport.WebGLWindow/<>c::<.cctor>b__0_1()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec_U3C_cctorU3Eb__0_1_mC2E47AB89795244D3DCF29192253A2F455A956B2 (U3CU3Ec_tD04EC24521C276620AF53A1530384866DCB3622D* __this, const RuntimeMethod* method) 
{
	{
		// public static event Action OnBlurEvent = () => { };
		return;
	}
}
// System.Void WebGLSupport.WebGLWindow/<>c::<.cctor>b__0_2()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec_U3C_cctorU3Eb__0_2_m8515844916DA936DB04853841DB7932ABB5262C1 (U3CU3Ec_tD04EC24521C276620AF53A1530384866DCB3622D* __this, const RuntimeMethod* method) 
{
	{
		// public static event Action OnResizeEvent = () => { };
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
// System.Void WebGLSupport.Detail.RebuildChecker::.ctor(WebGLSupport.IInputField)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RebuildChecker__ctor_mC68C7B0720DF8D5826A5244189C46C2C9D1E5299 (RebuildChecker_t655BE8F346B22370339BAE56B91783950CAAC807* __this, RuntimeObject* ___input0, const RuntimeMethod* method) 
{
	{
		// public RebuildChecker(IInputField input)
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// this.input = input;
		RuntimeObject* L_0 = ___input0;
		__this->___input_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___input_0), (void*)L_0);
		// }
		return;
	}
}
// System.Boolean WebGLSupport.Detail.RebuildChecker::NeedRebuild(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RebuildChecker_NeedRebuild_m84BFC0E6654441869C9D4B25718564302A977781 (RebuildChecker_t655BE8F346B22370339BAE56B91783950CAAC807* __this, bool ___debug0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IInputField_t04870BDDFD3EBDFA93CB0E713DE6829FC99BFF65_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral576325BB8631FD6AFAFD211086427229DE95E8F8);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9A1918AE07705464F03119461F76729A8A4AC384);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralADDE2A5B1B0A14B3309C5B42F69F0EB5DC226C28);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCA4EAD358FD9149975248831FFDB6398B9E3E34E);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		// var res = false;
		V_0 = (bool)0;
		// if (beforeString != input.text)
		String_t* L_0 = __this->___beforeString_1;
		RuntimeObject* L_1 = __this->___input_0;
		NullCheck(L_1);
		String_t* L_2;
		L_2 = InterfaceFuncInvoker0< String_t* >::Invoke(3 /* System.String WebGLSupport.IInputField::get_text() */, IInputField_t04870BDDFD3EBDFA93CB0E713DE6829FC99BFF65_il2cpp_TypeInfo_var, L_1);
		bool L_3;
		L_3 = String_op_Inequality_m0FBE5AC4931D312E5B347BAA603755676E6DA2FE(L_0, L_2, NULL);
		if (!L_3)
		{
			goto IL_0050;
		}
	}
	{
		// if(debug) Debug.Log(string.Format("beforeString : {0} != {1}", beforeString, input.text));
		bool L_4 = ___debug0;
		if (!L_4)
		{
			goto IL_003d;
		}
	}
	{
		// if(debug) Debug.Log(string.Format("beforeString : {0} != {1}", beforeString, input.text));
		String_t* L_5 = __this->___beforeString_1;
		RuntimeObject* L_6 = __this->___input_0;
		NullCheck(L_6);
		String_t* L_7;
		L_7 = InterfaceFuncInvoker0< String_t* >::Invoke(3 /* System.String WebGLSupport.IInputField::get_text() */, IInputField_t04870BDDFD3EBDFA93CB0E713DE6829FC99BFF65_il2cpp_TypeInfo_var, L_6);
		String_t* L_8;
		L_8 = String_Format_m9499958F4B0BB6089C75760AB647AB3CA4D55806(_stringLiteral9A1918AE07705464F03119461F76729A8A4AC384, L_5, L_7, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m86567BCF22BBE7809747817453CACA0E41E68219(L_8, NULL);
	}

IL_003d:
	{
		// beforeString = input.text;
		RuntimeObject* L_9 = __this->___input_0;
		NullCheck(L_9);
		String_t* L_10;
		L_10 = InterfaceFuncInvoker0< String_t* >::Invoke(3 /* System.String WebGLSupport.IInputField::get_text() */, IInputField_t04870BDDFD3EBDFA93CB0E713DE6829FC99BFF65_il2cpp_TypeInfo_var, L_9);
		__this->___beforeString_1 = L_10;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___beforeString_1), (void*)L_10);
		// res = true;
		V_0 = (bool)1;
	}

IL_0050:
	{
		// if (beforeCaretPosition != input.caretPosition)
		int32_t L_11 = __this->___beforeCaretPosition_2;
		RuntimeObject* L_12 = __this->___input_0;
		NullCheck(L_12);
		int32_t L_13;
		L_13 = InterfaceFuncInvoker0< int32_t >::Invoke(7 /* System.Int32 WebGLSupport.IInputField::get_caretPosition() */, IInputField_t04870BDDFD3EBDFA93CB0E713DE6829FC99BFF65_il2cpp_TypeInfo_var, L_12);
		if ((((int32_t)L_11) == ((int32_t)L_13)))
		{
			goto IL_00a3;
		}
	}
	{
		// if (debug) Debug.Log(string.Format("beforeCaretPosition : {0} != {1}", beforeCaretPosition, input.caretPosition));
		bool L_14 = ___debug0;
		if (!L_14)
		{
			goto IL_0090;
		}
	}
	{
		// if (debug) Debug.Log(string.Format("beforeCaretPosition : {0} != {1}", beforeCaretPosition, input.caretPosition));
		int32_t L_15 = __this->___beforeCaretPosition_2;
		int32_t L_16 = L_15;
		RuntimeObject* L_17 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_16);
		RuntimeObject* L_18 = __this->___input_0;
		NullCheck(L_18);
		int32_t L_19;
		L_19 = InterfaceFuncInvoker0< int32_t >::Invoke(7 /* System.Int32 WebGLSupport.IInputField::get_caretPosition() */, IInputField_t04870BDDFD3EBDFA93CB0E713DE6829FC99BFF65_il2cpp_TypeInfo_var, L_18);
		int32_t L_20 = L_19;
		RuntimeObject* L_21 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_20);
		String_t* L_22;
		L_22 = String_Format_m9499958F4B0BB6089C75760AB647AB3CA4D55806(_stringLiteral576325BB8631FD6AFAFD211086427229DE95E8F8, L_17, L_21, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m86567BCF22BBE7809747817453CACA0E41E68219(L_22, NULL);
	}

IL_0090:
	{
		// beforeCaretPosition = input.caretPosition;
		RuntimeObject* L_23 = __this->___input_0;
		NullCheck(L_23);
		int32_t L_24;
		L_24 = InterfaceFuncInvoker0< int32_t >::Invoke(7 /* System.Int32 WebGLSupport.IInputField::get_caretPosition() */, IInputField_t04870BDDFD3EBDFA93CB0E713DE6829FC99BFF65_il2cpp_TypeInfo_var, L_23);
		__this->___beforeCaretPosition_2 = L_24;
		// res = true;
		V_0 = (bool)1;
	}

IL_00a3:
	{
		// if (beforeSelectionFocusPosition != input.selectionFocusPosition)
		int32_t L_25 = __this->___beforeSelectionFocusPosition_3;
		RuntimeObject* L_26 = __this->___input_0;
		NullCheck(L_26);
		int32_t L_27;
		L_27 = InterfaceFuncInvoker0< int32_t >::Invoke(9 /* System.Int32 WebGLSupport.IInputField::get_selectionFocusPosition() */, IInputField_t04870BDDFD3EBDFA93CB0E713DE6829FC99BFF65_il2cpp_TypeInfo_var, L_26);
		if ((((int32_t)L_25) == ((int32_t)L_27)))
		{
			goto IL_00f6;
		}
	}
	{
		// if (debug) Debug.Log(string.Format("beforeSelectionFocusPosition : {0} != {1}", beforeSelectionFocusPosition, input.selectionFocusPosition));
		bool L_28 = ___debug0;
		if (!L_28)
		{
			goto IL_00e3;
		}
	}
	{
		// if (debug) Debug.Log(string.Format("beforeSelectionFocusPosition : {0} != {1}", beforeSelectionFocusPosition, input.selectionFocusPosition));
		int32_t L_29 = __this->___beforeSelectionFocusPosition_3;
		int32_t L_30 = L_29;
		RuntimeObject* L_31 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_30);
		RuntimeObject* L_32 = __this->___input_0;
		NullCheck(L_32);
		int32_t L_33;
		L_33 = InterfaceFuncInvoker0< int32_t >::Invoke(9 /* System.Int32 WebGLSupport.IInputField::get_selectionFocusPosition() */, IInputField_t04870BDDFD3EBDFA93CB0E713DE6829FC99BFF65_il2cpp_TypeInfo_var, L_32);
		int32_t L_34 = L_33;
		RuntimeObject* L_35 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_34);
		String_t* L_36;
		L_36 = String_Format_m9499958F4B0BB6089C75760AB647AB3CA4D55806(_stringLiteralCA4EAD358FD9149975248831FFDB6398B9E3E34E, L_31, L_35, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m86567BCF22BBE7809747817453CACA0E41E68219(L_36, NULL);
	}

IL_00e3:
	{
		// beforeSelectionFocusPosition = input.selectionFocusPosition;
		RuntimeObject* L_37 = __this->___input_0;
		NullCheck(L_37);
		int32_t L_38;
		L_38 = InterfaceFuncInvoker0< int32_t >::Invoke(9 /* System.Int32 WebGLSupport.IInputField::get_selectionFocusPosition() */, IInputField_t04870BDDFD3EBDFA93CB0E713DE6829FC99BFF65_il2cpp_TypeInfo_var, L_37);
		__this->___beforeSelectionFocusPosition_3 = L_38;
		// res = true;
		V_0 = (bool)1;
	}

IL_00f6:
	{
		// if (beforeSelectionAnchorPosition != input.selectionAnchorPosition)
		int32_t L_39 = __this->___beforeSelectionAnchorPosition_4;
		RuntimeObject* L_40 = __this->___input_0;
		NullCheck(L_40);
		int32_t L_41;
		L_41 = InterfaceFuncInvoker0< int32_t >::Invoke(11 /* System.Int32 WebGLSupport.IInputField::get_selectionAnchorPosition() */, IInputField_t04870BDDFD3EBDFA93CB0E713DE6829FC99BFF65_il2cpp_TypeInfo_var, L_40);
		if ((((int32_t)L_39) == ((int32_t)L_41)))
		{
			goto IL_0149;
		}
	}
	{
		// if (debug) Debug.Log(string.Format("beforeSelectionAnchorPosition : {0} != {1}", beforeSelectionAnchorPosition, input.selectionAnchorPosition));
		bool L_42 = ___debug0;
		if (!L_42)
		{
			goto IL_0136;
		}
	}
	{
		// if (debug) Debug.Log(string.Format("beforeSelectionAnchorPosition : {0} != {1}", beforeSelectionAnchorPosition, input.selectionAnchorPosition));
		int32_t L_43 = __this->___beforeSelectionAnchorPosition_4;
		int32_t L_44 = L_43;
		RuntimeObject* L_45 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_44);
		RuntimeObject* L_46 = __this->___input_0;
		NullCheck(L_46);
		int32_t L_47;
		L_47 = InterfaceFuncInvoker0< int32_t >::Invoke(11 /* System.Int32 WebGLSupport.IInputField::get_selectionAnchorPosition() */, IInputField_t04870BDDFD3EBDFA93CB0E713DE6829FC99BFF65_il2cpp_TypeInfo_var, L_46);
		int32_t L_48 = L_47;
		RuntimeObject* L_49 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_48);
		String_t* L_50;
		L_50 = String_Format_m9499958F4B0BB6089C75760AB647AB3CA4D55806(_stringLiteralADDE2A5B1B0A14B3309C5B42F69F0EB5DC226C28, L_45, L_49, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m86567BCF22BBE7809747817453CACA0E41E68219(L_50, NULL);
	}

IL_0136:
	{
		// beforeSelectionAnchorPosition = input.selectionAnchorPosition;
		RuntimeObject* L_51 = __this->___input_0;
		NullCheck(L_51);
		int32_t L_52;
		L_52 = InterfaceFuncInvoker0< int32_t >::Invoke(11 /* System.Int32 WebGLSupport.IInputField::get_selectionAnchorPosition() */, IInputField_t04870BDDFD3EBDFA93CB0E713DE6829FC99BFF65_il2cpp_TypeInfo_var, L_51);
		__this->___beforeSelectionAnchorPosition_4 = L_52;
		// res = true;
		V_0 = (bool)1;
	}

IL_0149:
	{
		// return res;
		bool L_53 = V_0;
		return L_53;
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
// System.Void ARWT.Marker.MarkerInfo::.ctor(System.String,System.Boolean,UnityEngine.Vector3,UnityEngine.Quaternion,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MarkerInfo__ctor_m4BC5E7095925127B01A81D968B004F2F689D22EA (MarkerInfo_tF1D3B769CFABECC5F1524196971229B99448B57F* __this, String_t* ___name0, bool ___isVisible1, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position2, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___rotation3, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___scale4, const RuntimeMethod* method) 
{
	{
		// public MarkerInfo(string name, bool isVisible, Vector3 position, Quaternion rotation, Vector3 scale){
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// this.name = name;
		String_t* L_0 = ___name0;
		__this->___name_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___name_0), (void*)L_0);
		// this.isVisible = isVisible;
		bool L_1 = ___isVisible1;
		__this->___isVisible_1 = L_1;
		// this.position = position;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___position2;
		__this->___position_2 = L_2;
		// this.rotation = rotation;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_3 = ___rotation3;
		__this->___rotation_3 = L_3;
		// this.scale = scale;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___scale4;
		__this->___scale_4 = L_4;
		// }
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
// System.Void ARWT.Marker.DetectionManager::add_onMarkerDetected(ARWT.Marker.DetectionManager/MarkerDetection)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DetectionManager_add_onMarkerDetected_m43AE337BD9A66A54F6A81F1584963A9565D926D2 (MarkerDetection_tB2B8E475144ED5AE5A0BAFC42F3F79C6E57A9DA9* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DetectionManager_t070257CC1E0A2BBC84FC7DD8960C34BF8A13DA16_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MarkerDetection_tB2B8E475144ED5AE5A0BAFC42F3F79C6E57A9DA9_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	MarkerDetection_tB2B8E475144ED5AE5A0BAFC42F3F79C6E57A9DA9* V_0 = NULL;
	MarkerDetection_tB2B8E475144ED5AE5A0BAFC42F3F79C6E57A9DA9* V_1 = NULL;
	MarkerDetection_tB2B8E475144ED5AE5A0BAFC42F3F79C6E57A9DA9* V_2 = NULL;
	{
		MarkerDetection_tB2B8E475144ED5AE5A0BAFC42F3F79C6E57A9DA9* L_0 = ((DetectionManager_t070257CC1E0A2BBC84FC7DD8960C34BF8A13DA16_StaticFields*)il2cpp_codegen_static_fields_for(DetectionManager_t070257CC1E0A2BBC84FC7DD8960C34BF8A13DA16_il2cpp_TypeInfo_var))->___onMarkerDetected_6;
		V_0 = L_0;
	}

IL_0006:
	{
		MarkerDetection_tB2B8E475144ED5AE5A0BAFC42F3F79C6E57A9DA9* L_1 = V_0;
		V_1 = L_1;
		MarkerDetection_tB2B8E475144ED5AE5A0BAFC42F3F79C6E57A9DA9* L_2 = V_1;
		MarkerDetection_tB2B8E475144ED5AE5A0BAFC42F3F79C6E57A9DA9* L_3 = ___value0;
		Delegate_t* L_4;
		L_4 = Delegate_Combine_m8B9D24CED35033C7FC56501DFE650F5CB7FF012C(L_2, L_3, NULL);
		V_2 = ((MarkerDetection_tB2B8E475144ED5AE5A0BAFC42F3F79C6E57A9DA9*)CastclassSealed((RuntimeObject*)L_4, MarkerDetection_tB2B8E475144ED5AE5A0BAFC42F3F79C6E57A9DA9_il2cpp_TypeInfo_var));
		MarkerDetection_tB2B8E475144ED5AE5A0BAFC42F3F79C6E57A9DA9* L_5 = V_2;
		MarkerDetection_tB2B8E475144ED5AE5A0BAFC42F3F79C6E57A9DA9* L_6 = V_1;
		MarkerDetection_tB2B8E475144ED5AE5A0BAFC42F3F79C6E57A9DA9* L_7;
		L_7 = InterlockedCompareExchangeImpl<MarkerDetection_tB2B8E475144ED5AE5A0BAFC42F3F79C6E57A9DA9*>((&((DetectionManager_t070257CC1E0A2BBC84FC7DD8960C34BF8A13DA16_StaticFields*)il2cpp_codegen_static_fields_for(DetectionManager_t070257CC1E0A2BBC84FC7DD8960C34BF8A13DA16_il2cpp_TypeInfo_var))->___onMarkerDetected_6), L_5, L_6);
		V_0 = L_7;
		MarkerDetection_tB2B8E475144ED5AE5A0BAFC42F3F79C6E57A9DA9* L_8 = V_0;
		MarkerDetection_tB2B8E475144ED5AE5A0BAFC42F3F79C6E57A9DA9* L_9 = V_1;
		if ((!(((RuntimeObject*)(MarkerDetection_tB2B8E475144ED5AE5A0BAFC42F3F79C6E57A9DA9*)L_8) == ((RuntimeObject*)(MarkerDetection_tB2B8E475144ED5AE5A0BAFC42F3F79C6E57A9DA9*)L_9))))
		{
			goto IL_0006;
		}
	}
	{
		return;
	}
}
// System.Void ARWT.Marker.DetectionManager::remove_onMarkerDetected(ARWT.Marker.DetectionManager/MarkerDetection)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DetectionManager_remove_onMarkerDetected_m6F7370574D90B85B812A37B61F02F3FF5AAACC90 (MarkerDetection_tB2B8E475144ED5AE5A0BAFC42F3F79C6E57A9DA9* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DetectionManager_t070257CC1E0A2BBC84FC7DD8960C34BF8A13DA16_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MarkerDetection_tB2B8E475144ED5AE5A0BAFC42F3F79C6E57A9DA9_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	MarkerDetection_tB2B8E475144ED5AE5A0BAFC42F3F79C6E57A9DA9* V_0 = NULL;
	MarkerDetection_tB2B8E475144ED5AE5A0BAFC42F3F79C6E57A9DA9* V_1 = NULL;
	MarkerDetection_tB2B8E475144ED5AE5A0BAFC42F3F79C6E57A9DA9* V_2 = NULL;
	{
		MarkerDetection_tB2B8E475144ED5AE5A0BAFC42F3F79C6E57A9DA9* L_0 = ((DetectionManager_t070257CC1E0A2BBC84FC7DD8960C34BF8A13DA16_StaticFields*)il2cpp_codegen_static_fields_for(DetectionManager_t070257CC1E0A2BBC84FC7DD8960C34BF8A13DA16_il2cpp_TypeInfo_var))->___onMarkerDetected_6;
		V_0 = L_0;
	}

IL_0006:
	{
		MarkerDetection_tB2B8E475144ED5AE5A0BAFC42F3F79C6E57A9DA9* L_1 = V_0;
		V_1 = L_1;
		MarkerDetection_tB2B8E475144ED5AE5A0BAFC42F3F79C6E57A9DA9* L_2 = V_1;
		MarkerDetection_tB2B8E475144ED5AE5A0BAFC42F3F79C6E57A9DA9* L_3 = ___value0;
		Delegate_t* L_4;
		L_4 = Delegate_Remove_m40506877934EC1AD4ADAE57F5E97AF0BC0F96116(L_2, L_3, NULL);
		V_2 = ((MarkerDetection_tB2B8E475144ED5AE5A0BAFC42F3F79C6E57A9DA9*)CastclassSealed((RuntimeObject*)L_4, MarkerDetection_tB2B8E475144ED5AE5A0BAFC42F3F79C6E57A9DA9_il2cpp_TypeInfo_var));
		MarkerDetection_tB2B8E475144ED5AE5A0BAFC42F3F79C6E57A9DA9* L_5 = V_2;
		MarkerDetection_tB2B8E475144ED5AE5A0BAFC42F3F79C6E57A9DA9* L_6 = V_1;
		MarkerDetection_tB2B8E475144ED5AE5A0BAFC42F3F79C6E57A9DA9* L_7;
		L_7 = InterlockedCompareExchangeImpl<MarkerDetection_tB2B8E475144ED5AE5A0BAFC42F3F79C6E57A9DA9*>((&((DetectionManager_t070257CC1E0A2BBC84FC7DD8960C34BF8A13DA16_StaticFields*)il2cpp_codegen_static_fields_for(DetectionManager_t070257CC1E0A2BBC84FC7DD8960C34BF8A13DA16_il2cpp_TypeInfo_var))->___onMarkerDetected_6), L_5, L_6);
		V_0 = L_7;
		MarkerDetection_tB2B8E475144ED5AE5A0BAFC42F3F79C6E57A9DA9* L_8 = V_0;
		MarkerDetection_tB2B8E475144ED5AE5A0BAFC42F3F79C6E57A9DA9* L_9 = V_1;
		if ((!(((RuntimeObject*)(MarkerDetection_tB2B8E475144ED5AE5A0BAFC42F3F79C6E57A9DA9*)L_8) == ((RuntimeObject*)(MarkerDetection_tB2B8E475144ED5AE5A0BAFC42F3F79C6E57A9DA9*)L_9))))
		{
			goto IL_0006;
		}
	}
	{
		return;
	}
}
// System.Void ARWT.Marker.DetectionManager::add_onMarkerVisible(ARWT.Marker.DetectionManager/MarkerDetection)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DetectionManager_add_onMarkerVisible_m7734FE145336E45C86316AC2F5D9EB2976ADE057 (MarkerDetection_tB2B8E475144ED5AE5A0BAFC42F3F79C6E57A9DA9* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DetectionManager_t070257CC1E0A2BBC84FC7DD8960C34BF8A13DA16_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MarkerDetection_tB2B8E475144ED5AE5A0BAFC42F3F79C6E57A9DA9_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	MarkerDetection_tB2B8E475144ED5AE5A0BAFC42F3F79C6E57A9DA9* V_0 = NULL;
	MarkerDetection_tB2B8E475144ED5AE5A0BAFC42F3F79C6E57A9DA9* V_1 = NULL;
	MarkerDetection_tB2B8E475144ED5AE5A0BAFC42F3F79C6E57A9DA9* V_2 = NULL;
	{
		MarkerDetection_tB2B8E475144ED5AE5A0BAFC42F3F79C6E57A9DA9* L_0 = ((DetectionManager_t070257CC1E0A2BBC84FC7DD8960C34BF8A13DA16_StaticFields*)il2cpp_codegen_static_fields_for(DetectionManager_t070257CC1E0A2BBC84FC7DD8960C34BF8A13DA16_il2cpp_TypeInfo_var))->___onMarkerVisible_7;
		V_0 = L_0;
	}

IL_0006:
	{
		MarkerDetection_tB2B8E475144ED5AE5A0BAFC42F3F79C6E57A9DA9* L_1 = V_0;
		V_1 = L_1;
		MarkerDetection_tB2B8E475144ED5AE5A0BAFC42F3F79C6E57A9DA9* L_2 = V_1;
		MarkerDetection_tB2B8E475144ED5AE5A0BAFC42F3F79C6E57A9DA9* L_3 = ___value0;
		Delegate_t* L_4;
		L_4 = Delegate_Combine_m8B9D24CED35033C7FC56501DFE650F5CB7FF012C(L_2, L_3, NULL);
		V_2 = ((MarkerDetection_tB2B8E475144ED5AE5A0BAFC42F3F79C6E57A9DA9*)CastclassSealed((RuntimeObject*)L_4, MarkerDetection_tB2B8E475144ED5AE5A0BAFC42F3F79C6E57A9DA9_il2cpp_TypeInfo_var));
		MarkerDetection_tB2B8E475144ED5AE5A0BAFC42F3F79C6E57A9DA9* L_5 = V_2;
		MarkerDetection_tB2B8E475144ED5AE5A0BAFC42F3F79C6E57A9DA9* L_6 = V_1;
		MarkerDetection_tB2B8E475144ED5AE5A0BAFC42F3F79C6E57A9DA9* L_7;
		L_7 = InterlockedCompareExchangeImpl<MarkerDetection_tB2B8E475144ED5AE5A0BAFC42F3F79C6E57A9DA9*>((&((DetectionManager_t070257CC1E0A2BBC84FC7DD8960C34BF8A13DA16_StaticFields*)il2cpp_codegen_static_fields_for(DetectionManager_t070257CC1E0A2BBC84FC7DD8960C34BF8A13DA16_il2cpp_TypeInfo_var))->___onMarkerVisible_7), L_5, L_6);
		V_0 = L_7;
		MarkerDetection_tB2B8E475144ED5AE5A0BAFC42F3F79C6E57A9DA9* L_8 = V_0;
		MarkerDetection_tB2B8E475144ED5AE5A0BAFC42F3F79C6E57A9DA9* L_9 = V_1;
		if ((!(((RuntimeObject*)(MarkerDetection_tB2B8E475144ED5AE5A0BAFC42F3F79C6E57A9DA9*)L_8) == ((RuntimeObject*)(MarkerDetection_tB2B8E475144ED5AE5A0BAFC42F3F79C6E57A9DA9*)L_9))))
		{
			goto IL_0006;
		}
	}
	{
		return;
	}
}
// System.Void ARWT.Marker.DetectionManager::remove_onMarkerVisible(ARWT.Marker.DetectionManager/MarkerDetection)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DetectionManager_remove_onMarkerVisible_mDC5DBCEFF869BBA38EE760ED4871891C8A8A72CF (MarkerDetection_tB2B8E475144ED5AE5A0BAFC42F3F79C6E57A9DA9* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DetectionManager_t070257CC1E0A2BBC84FC7DD8960C34BF8A13DA16_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MarkerDetection_tB2B8E475144ED5AE5A0BAFC42F3F79C6E57A9DA9_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	MarkerDetection_tB2B8E475144ED5AE5A0BAFC42F3F79C6E57A9DA9* V_0 = NULL;
	MarkerDetection_tB2B8E475144ED5AE5A0BAFC42F3F79C6E57A9DA9* V_1 = NULL;
	MarkerDetection_tB2B8E475144ED5AE5A0BAFC42F3F79C6E57A9DA9* V_2 = NULL;
	{
		MarkerDetection_tB2B8E475144ED5AE5A0BAFC42F3F79C6E57A9DA9* L_0 = ((DetectionManager_t070257CC1E0A2BBC84FC7DD8960C34BF8A13DA16_StaticFields*)il2cpp_codegen_static_fields_for(DetectionManager_t070257CC1E0A2BBC84FC7DD8960C34BF8A13DA16_il2cpp_TypeInfo_var))->___onMarkerVisible_7;
		V_0 = L_0;
	}

IL_0006:
	{
		MarkerDetection_tB2B8E475144ED5AE5A0BAFC42F3F79C6E57A9DA9* L_1 = V_0;
		V_1 = L_1;
		MarkerDetection_tB2B8E475144ED5AE5A0BAFC42F3F79C6E57A9DA9* L_2 = V_1;
		MarkerDetection_tB2B8E475144ED5AE5A0BAFC42F3F79C6E57A9DA9* L_3 = ___value0;
		Delegate_t* L_4;
		L_4 = Delegate_Remove_m40506877934EC1AD4ADAE57F5E97AF0BC0F96116(L_2, L_3, NULL);
		V_2 = ((MarkerDetection_tB2B8E475144ED5AE5A0BAFC42F3F79C6E57A9DA9*)CastclassSealed((RuntimeObject*)L_4, MarkerDetection_tB2B8E475144ED5AE5A0BAFC42F3F79C6E57A9DA9_il2cpp_TypeInfo_var));
		MarkerDetection_tB2B8E475144ED5AE5A0BAFC42F3F79C6E57A9DA9* L_5 = V_2;
		MarkerDetection_tB2B8E475144ED5AE5A0BAFC42F3F79C6E57A9DA9* L_6 = V_1;
		MarkerDetection_tB2B8E475144ED5AE5A0BAFC42F3F79C6E57A9DA9* L_7;
		L_7 = InterlockedCompareExchangeImpl<MarkerDetection_tB2B8E475144ED5AE5A0BAFC42F3F79C6E57A9DA9*>((&((DetectionManager_t070257CC1E0A2BBC84FC7DD8960C34BF8A13DA16_StaticFields*)il2cpp_codegen_static_fields_for(DetectionManager_t070257CC1E0A2BBC84FC7DD8960C34BF8A13DA16_il2cpp_TypeInfo_var))->___onMarkerVisible_7), L_5, L_6);
		V_0 = L_7;
		MarkerDetection_tB2B8E475144ED5AE5A0BAFC42F3F79C6E57A9DA9* L_8 = V_0;
		MarkerDetection_tB2B8E475144ED5AE5A0BAFC42F3F79C6E57A9DA9* L_9 = V_1;
		if ((!(((RuntimeObject*)(MarkerDetection_tB2B8E475144ED5AE5A0BAFC42F3F79C6E57A9DA9*)L_8) == ((RuntimeObject*)(MarkerDetection_tB2B8E475144ED5AE5A0BAFC42F3F79C6E57A9DA9*)L_9))))
		{
			goto IL_0006;
		}
	}
	{
		return;
	}
}
// System.Void ARWT.Marker.DetectionManager::add_onMarkerLost(ARWT.Marker.DetectionManager/MarkerDetection)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DetectionManager_add_onMarkerLost_mDAC14075B5862FC82521DFE4AFEB7EF332D7A3DE (MarkerDetection_tB2B8E475144ED5AE5A0BAFC42F3F79C6E57A9DA9* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DetectionManager_t070257CC1E0A2BBC84FC7DD8960C34BF8A13DA16_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MarkerDetection_tB2B8E475144ED5AE5A0BAFC42F3F79C6E57A9DA9_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	MarkerDetection_tB2B8E475144ED5AE5A0BAFC42F3F79C6E57A9DA9* V_0 = NULL;
	MarkerDetection_tB2B8E475144ED5AE5A0BAFC42F3F79C6E57A9DA9* V_1 = NULL;
	MarkerDetection_tB2B8E475144ED5AE5A0BAFC42F3F79C6E57A9DA9* V_2 = NULL;
	{
		MarkerDetection_tB2B8E475144ED5AE5A0BAFC42F3F79C6E57A9DA9* L_0 = ((DetectionManager_t070257CC1E0A2BBC84FC7DD8960C34BF8A13DA16_StaticFields*)il2cpp_codegen_static_fields_for(DetectionManager_t070257CC1E0A2BBC84FC7DD8960C34BF8A13DA16_il2cpp_TypeInfo_var))->___onMarkerLost_8;
		V_0 = L_0;
	}

IL_0006:
	{
		MarkerDetection_tB2B8E475144ED5AE5A0BAFC42F3F79C6E57A9DA9* L_1 = V_0;
		V_1 = L_1;
		MarkerDetection_tB2B8E475144ED5AE5A0BAFC42F3F79C6E57A9DA9* L_2 = V_1;
		MarkerDetection_tB2B8E475144ED5AE5A0BAFC42F3F79C6E57A9DA9* L_3 = ___value0;
		Delegate_t* L_4;
		L_4 = Delegate_Combine_m8B9D24CED35033C7FC56501DFE650F5CB7FF012C(L_2, L_3, NULL);
		V_2 = ((MarkerDetection_tB2B8E475144ED5AE5A0BAFC42F3F79C6E57A9DA9*)CastclassSealed((RuntimeObject*)L_4, MarkerDetection_tB2B8E475144ED5AE5A0BAFC42F3F79C6E57A9DA9_il2cpp_TypeInfo_var));
		MarkerDetection_tB2B8E475144ED5AE5A0BAFC42F3F79C6E57A9DA9* L_5 = V_2;
		MarkerDetection_tB2B8E475144ED5AE5A0BAFC42F3F79C6E57A9DA9* L_6 = V_1;
		MarkerDetection_tB2B8E475144ED5AE5A0BAFC42F3F79C6E57A9DA9* L_7;
		L_7 = InterlockedCompareExchangeImpl<MarkerDetection_tB2B8E475144ED5AE5A0BAFC42F3F79C6E57A9DA9*>((&((DetectionManager_t070257CC1E0A2BBC84FC7DD8960C34BF8A13DA16_StaticFields*)il2cpp_codegen_static_fields_for(DetectionManager_t070257CC1E0A2BBC84FC7DD8960C34BF8A13DA16_il2cpp_TypeInfo_var))->___onMarkerLost_8), L_5, L_6);
		V_0 = L_7;
		MarkerDetection_tB2B8E475144ED5AE5A0BAFC42F3F79C6E57A9DA9* L_8 = V_0;
		MarkerDetection_tB2B8E475144ED5AE5A0BAFC42F3F79C6E57A9DA9* L_9 = V_1;
		if ((!(((RuntimeObject*)(MarkerDetection_tB2B8E475144ED5AE5A0BAFC42F3F79C6E57A9DA9*)L_8) == ((RuntimeObject*)(MarkerDetection_tB2B8E475144ED5AE5A0BAFC42F3F79C6E57A9DA9*)L_9))))
		{
			goto IL_0006;
		}
	}
	{
		return;
	}
}
// System.Void ARWT.Marker.DetectionManager::remove_onMarkerLost(ARWT.Marker.DetectionManager/MarkerDetection)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DetectionManager_remove_onMarkerLost_m4520AC9F035F410488C804B95E972D54D0A6A3AE (MarkerDetection_tB2B8E475144ED5AE5A0BAFC42F3F79C6E57A9DA9* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DetectionManager_t070257CC1E0A2BBC84FC7DD8960C34BF8A13DA16_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MarkerDetection_tB2B8E475144ED5AE5A0BAFC42F3F79C6E57A9DA9_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	MarkerDetection_tB2B8E475144ED5AE5A0BAFC42F3F79C6E57A9DA9* V_0 = NULL;
	MarkerDetection_tB2B8E475144ED5AE5A0BAFC42F3F79C6E57A9DA9* V_1 = NULL;
	MarkerDetection_tB2B8E475144ED5AE5A0BAFC42F3F79C6E57A9DA9* V_2 = NULL;
	{
		MarkerDetection_tB2B8E475144ED5AE5A0BAFC42F3F79C6E57A9DA9* L_0 = ((DetectionManager_t070257CC1E0A2BBC84FC7DD8960C34BF8A13DA16_StaticFields*)il2cpp_codegen_static_fields_for(DetectionManager_t070257CC1E0A2BBC84FC7DD8960C34BF8A13DA16_il2cpp_TypeInfo_var))->___onMarkerLost_8;
		V_0 = L_0;
	}

IL_0006:
	{
		MarkerDetection_tB2B8E475144ED5AE5A0BAFC42F3F79C6E57A9DA9* L_1 = V_0;
		V_1 = L_1;
		MarkerDetection_tB2B8E475144ED5AE5A0BAFC42F3F79C6E57A9DA9* L_2 = V_1;
		MarkerDetection_tB2B8E475144ED5AE5A0BAFC42F3F79C6E57A9DA9* L_3 = ___value0;
		Delegate_t* L_4;
		L_4 = Delegate_Remove_m40506877934EC1AD4ADAE57F5E97AF0BC0F96116(L_2, L_3, NULL);
		V_2 = ((MarkerDetection_tB2B8E475144ED5AE5A0BAFC42F3F79C6E57A9DA9*)CastclassSealed((RuntimeObject*)L_4, MarkerDetection_tB2B8E475144ED5AE5A0BAFC42F3F79C6E57A9DA9_il2cpp_TypeInfo_var));
		MarkerDetection_tB2B8E475144ED5AE5A0BAFC42F3F79C6E57A9DA9* L_5 = V_2;
		MarkerDetection_tB2B8E475144ED5AE5A0BAFC42F3F79C6E57A9DA9* L_6 = V_1;
		MarkerDetection_tB2B8E475144ED5AE5A0BAFC42F3F79C6E57A9DA9* L_7;
		L_7 = InterlockedCompareExchangeImpl<MarkerDetection_tB2B8E475144ED5AE5A0BAFC42F3F79C6E57A9DA9*>((&((DetectionManager_t070257CC1E0A2BBC84FC7DD8960C34BF8A13DA16_StaticFields*)il2cpp_codegen_static_fields_for(DetectionManager_t070257CC1E0A2BBC84FC7DD8960C34BF8A13DA16_il2cpp_TypeInfo_var))->___onMarkerLost_8), L_5, L_6);
		V_0 = L_7;
		MarkerDetection_tB2B8E475144ED5AE5A0BAFC42F3F79C6E57A9DA9* L_8 = V_0;
		MarkerDetection_tB2B8E475144ED5AE5A0BAFC42F3F79C6E57A9DA9* L_9 = V_1;
		if ((!(((RuntimeObject*)(MarkerDetection_tB2B8E475144ED5AE5A0BAFC42F3F79C6E57A9DA9*)L_8) == ((RuntimeObject*)(MarkerDetection_tB2B8E475144ED5AE5A0BAFC42F3F79C6E57A9DA9*)L_9))))
		{
			goto IL_0006;
		}
	}
	{
		return;
	}
}
// System.Void ARWT.Marker.DetectionManager::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DetectionManager_Start_mE488EFD856F21DDE12C9BA42F62BA169622933AB (DetectionManager_t070257CC1E0A2BBC84FC7DD8960C34BF8A13DA16* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Empty_TisRuntimeObject_m55011E8360A8199FB239A5787BA8631CDD6116FC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2F9DC8E454E50AAE6DCECBAE4DADB483EC854490);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Application.ExternalCall("detectionManagerReady");
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_0;
		L_0 = Array_Empty_TisRuntimeObject_m55011E8360A8199FB239A5787BA8631CDD6116FC_inline(Array_Empty_TisRuntimeObject_m55011E8360A8199FB239A5787BA8631CDD6116FC_RuntimeMethod_var);
		Application_ExternalCall_mAC569E16BBB6EF873FCECBA90823FA383D120585(_stringLiteral2F9DC8E454E50AAE6DCECBAE4DADB483EC854490, L_0, NULL);
		// }
		return;
	}
}
// System.Void ARWT.Marker.DetectionManager::markerInfos(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DetectionManager_markerInfos_mB042703564AB15A362B4D12ADA1C400015982FE7 (DetectionManager_t070257CC1E0A2BBC84FC7DD8960C34BF8A13DA16* __this, String_t* ___infos0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DetectionManager_t070257CC1E0A2BBC84FC7DD8960C34BF8A13DA16_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MarkerInfo_tF1D3B769CFABECC5F1524196971229B99448B57F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC18C9BB6DF0D5C60CE5A5D2D3D6111BEB6F8CCEB);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	bool V_1 = false;
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	float V_4 = 0.0f;
	float V_5 = 0.0f;
	float V_6 = 0.0f;
	float V_7 = 0.0f;
	float V_8 = 0.0f;
	float V_9 = 0.0f;
	float V_10 = 0.0f;
	float V_11 = 0.0f;
	MarkerInfo_tF1D3B769CFABECC5F1524196971229B99448B57F* V_12 = NULL;
	{
		// string[] datas =  infos.Split(","[0]);
		String_t* L_0 = ___infos0;
		NullCheck(_stringLiteralC18C9BB6DF0D5C60CE5A5D2D3D6111BEB6F8CCEB);
		Il2CppChar L_1;
		L_1 = String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3(_stringLiteralC18C9BB6DF0D5C60CE5A5D2D3D6111BEB6F8CCEB, 0, NULL);
		NullCheck(L_0);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_2;
		L_2 = String_Split_m9530B73D02054692283BF35C3A27C8F2230946F4(L_0, L_1, 0, NULL);
		// string name = datas[0].Trim();
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_3 = L_2;
		NullCheck(L_3);
		int32_t L_4 = 0;
		String_t* L_5 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		NullCheck(L_5);
		String_t* L_6;
		L_6 = String_Trim_mCD6D8C6D4CFD15225D12DB7D3E0544CA80FB8DA5(L_5, NULL);
		V_0 = L_6;
		// bool isVisible = bool.Parse(datas[1]);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_7 = L_3;
		NullCheck(L_7);
		int32_t L_8 = 1;
		String_t* L_9 = (L_7)->GetAt(static_cast<il2cpp_array_size_t>(L_8));
		il2cpp_codegen_runtime_class_init_inline(Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var);
		bool L_10;
		L_10 = Boolean_Parse_mE3D8860431C87FBE1D7C6EACA665548AFE144F38(L_9, NULL);
		V_1 = L_10;
		// float posX = float.Parse(datas[2].ToString());
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_11 = L_7;
		NullCheck(L_11);
		int32_t L_12 = 2;
		String_t* L_13 = (L_11)->GetAt(static_cast<il2cpp_array_size_t>(L_12));
		NullCheck(L_13);
		String_t* L_14;
		L_14 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_13);
		float L_15;
		L_15 = Single_Parse_m349A7F699C77834259812ABE86909825C1F93CF4(L_14, NULL);
		V_2 = L_15;
		// float posY = float.Parse(datas[3].ToString());
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_16 = L_11;
		NullCheck(L_16);
		int32_t L_17 = 3;
		String_t* L_18 = (L_16)->GetAt(static_cast<il2cpp_array_size_t>(L_17));
		NullCheck(L_18);
		String_t* L_19;
		L_19 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_18);
		float L_20;
		L_20 = Single_Parse_m349A7F699C77834259812ABE86909825C1F93CF4(L_19, NULL);
		V_3 = L_20;
		// float posZ = float.Parse(datas[4].ToString());
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_21 = L_16;
		NullCheck(L_21);
		int32_t L_22 = 4;
		String_t* L_23 = (L_21)->GetAt(static_cast<il2cpp_array_size_t>(L_22));
		NullCheck(L_23);
		String_t* L_24;
		L_24 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_23);
		float L_25;
		L_25 = Single_Parse_m349A7F699C77834259812ABE86909825C1F93CF4(L_24, NULL);
		V_4 = L_25;
		// float rotX = float.Parse(datas[5].ToString());
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_26 = L_21;
		NullCheck(L_26);
		int32_t L_27 = 5;
		String_t* L_28 = (L_26)->GetAt(static_cast<il2cpp_array_size_t>(L_27));
		NullCheck(L_28);
		String_t* L_29;
		L_29 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_28);
		float L_30;
		L_30 = Single_Parse_m349A7F699C77834259812ABE86909825C1F93CF4(L_29, NULL);
		V_5 = L_30;
		// float rotY = float.Parse(datas[6].ToString());
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_31 = L_26;
		NullCheck(L_31);
		int32_t L_32 = 6;
		String_t* L_33 = (L_31)->GetAt(static_cast<il2cpp_array_size_t>(L_32));
		NullCheck(L_33);
		String_t* L_34;
		L_34 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_33);
		float L_35;
		L_35 = Single_Parse_m349A7F699C77834259812ABE86909825C1F93CF4(L_34, NULL);
		V_6 = L_35;
		// float rotZ = float.Parse(datas[7].ToString());
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_36 = L_31;
		NullCheck(L_36);
		int32_t L_37 = 7;
		String_t* L_38 = (L_36)->GetAt(static_cast<il2cpp_array_size_t>(L_37));
		NullCheck(L_38);
		String_t* L_39;
		L_39 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_38);
		float L_40;
		L_40 = Single_Parse_m349A7F699C77834259812ABE86909825C1F93CF4(L_39, NULL);
		V_7 = L_40;
		// float rotW = float.Parse(datas[8].ToString());
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_41 = L_36;
		NullCheck(L_41);
		int32_t L_42 = 8;
		String_t* L_43 = (L_41)->GetAt(static_cast<il2cpp_array_size_t>(L_42));
		NullCheck(L_43);
		String_t* L_44;
		L_44 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_43);
		float L_45;
		L_45 = Single_Parse_m349A7F699C77834259812ABE86909825C1F93CF4(L_44, NULL);
		V_8 = L_45;
		// float scaX = float.Parse(datas[9].ToString());
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_46 = L_41;
		NullCheck(L_46);
		int32_t L_47 = ((int32_t)9);
		String_t* L_48 = (L_46)->GetAt(static_cast<il2cpp_array_size_t>(L_47));
		NullCheck(L_48);
		String_t* L_49;
		L_49 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_48);
		float L_50;
		L_50 = Single_Parse_m349A7F699C77834259812ABE86909825C1F93CF4(L_49, NULL);
		V_9 = L_50;
		// float scaY = float.Parse(datas[10].ToString());
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_51 = L_46;
		NullCheck(L_51);
		int32_t L_52 = ((int32_t)10);
		String_t* L_53 = (L_51)->GetAt(static_cast<il2cpp_array_size_t>(L_52));
		NullCheck(L_53);
		String_t* L_54;
		L_54 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_53);
		float L_55;
		L_55 = Single_Parse_m349A7F699C77834259812ABE86909825C1F93CF4(L_54, NULL);
		V_10 = L_55;
		// float scaZ = float.Parse(datas[11].ToString());
		NullCheck(L_51);
		int32_t L_56 = ((int32_t)11);
		String_t* L_57 = (L_51)->GetAt(static_cast<il2cpp_array_size_t>(L_56));
		NullCheck(L_57);
		String_t* L_58;
		L_58 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_57);
		float L_59;
		L_59 = Single_Parse_m349A7F699C77834259812ABE86909825C1F93CF4(L_58, NULL);
		V_11 = L_59;
		// MarkerInfo m = new MarkerInfo(
		//     name,
		//     isVisible,
		//     new Vector3(posX, posY, posZ),
		//     new Quaternion(rotX, rotY, rotZ, rotW),
		//     new Vector3(scaX, scaY, scaZ)
		// );
		String_t* L_60 = V_0;
		bool L_61 = V_1;
		float L_62 = V_2;
		float L_63 = V_3;
		float L_64 = V_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_65;
		memset((&L_65), 0, sizeof(L_65));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_65), L_62, L_63, L_64, /*hidden argument*/NULL);
		float L_66 = V_5;
		float L_67 = V_6;
		float L_68 = V_7;
		float L_69 = V_8;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_70;
		memset((&L_70), 0, sizeof(L_70));
		Quaternion__ctor_m868FD60AA65DD5A8AC0C5DEB0608381A8D85FCD8_inline((&L_70), L_66, L_67, L_68, L_69, /*hidden argument*/NULL);
		float L_71 = V_9;
		float L_72 = V_10;
		float L_73 = V_11;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_74;
		memset((&L_74), 0, sizeof(L_74));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_74), L_71, L_72, L_73, /*hidden argument*/NULL);
		MarkerInfo_tF1D3B769CFABECC5F1524196971229B99448B57F* L_75 = (MarkerInfo_tF1D3B769CFABECC5F1524196971229B99448B57F*)il2cpp_codegen_object_new(MarkerInfo_tF1D3B769CFABECC5F1524196971229B99448B57F_il2cpp_TypeInfo_var);
		NullCheck(L_75);
		MarkerInfo__ctor_m4BC5E7095925127B01A81D968B004F2F689D22EA(L_75, L_60, L_61, L_65, L_70, L_74, NULL);
		V_12 = L_75;
		// if(onMarkerDetected != null){
		MarkerDetection_tB2B8E475144ED5AE5A0BAFC42F3F79C6E57A9DA9* L_76 = ((DetectionManager_t070257CC1E0A2BBC84FC7DD8960C34BF8A13DA16_StaticFields*)il2cpp_codegen_static_fields_for(DetectionManager_t070257CC1E0A2BBC84FC7DD8960C34BF8A13DA16_il2cpp_TypeInfo_var))->___onMarkerDetected_6;
		if (!L_76)
		{
			goto IL_00f7;
		}
	}
	{
		// onMarkerDetected(m);
		MarkerDetection_tB2B8E475144ED5AE5A0BAFC42F3F79C6E57A9DA9* L_77 = ((DetectionManager_t070257CC1E0A2BBC84FC7DD8960C34BF8A13DA16_StaticFields*)il2cpp_codegen_static_fields_for(DetectionManager_t070257CC1E0A2BBC84FC7DD8960C34BF8A13DA16_il2cpp_TypeInfo_var))->___onMarkerDetected_6;
		MarkerInfo_tF1D3B769CFABECC5F1524196971229B99448B57F* L_78 = V_12;
		NullCheck(L_77);
		MarkerDetection_Invoke_m30EED64E7C27ABF3C1F15B445A2976A617795B2D_inline(L_77, L_78, NULL);
	}

IL_00f7:
	{
		// if (onMarkerVisible != null && m.isVisible){
		MarkerDetection_tB2B8E475144ED5AE5A0BAFC42F3F79C6E57A9DA9* L_79 = ((DetectionManager_t070257CC1E0A2BBC84FC7DD8960C34BF8A13DA16_StaticFields*)il2cpp_codegen_static_fields_for(DetectionManager_t070257CC1E0A2BBC84FC7DD8960C34BF8A13DA16_il2cpp_TypeInfo_var))->___onMarkerVisible_7;
		if (!L_79)
		{
			goto IL_0113;
		}
	}
	{
		MarkerInfo_tF1D3B769CFABECC5F1524196971229B99448B57F* L_80 = V_12;
		NullCheck(L_80);
		bool L_81 = L_80->___isVisible_1;
		if (!L_81)
		{
			goto IL_0113;
		}
	}
	{
		// onMarkerVisible(m);
		MarkerDetection_tB2B8E475144ED5AE5A0BAFC42F3F79C6E57A9DA9* L_82 = ((DetectionManager_t070257CC1E0A2BBC84FC7DD8960C34BF8A13DA16_StaticFields*)il2cpp_codegen_static_fields_for(DetectionManager_t070257CC1E0A2BBC84FC7DD8960C34BF8A13DA16_il2cpp_TypeInfo_var))->___onMarkerVisible_7;
		MarkerInfo_tF1D3B769CFABECC5F1524196971229B99448B57F* L_83 = V_12;
		NullCheck(L_82);
		MarkerDetection_Invoke_m30EED64E7C27ABF3C1F15B445A2976A617795B2D_inline(L_82, L_83, NULL);
	}

IL_0113:
	{
		// if (onMarkerLost != null && !m.isVisible){
		MarkerDetection_tB2B8E475144ED5AE5A0BAFC42F3F79C6E57A9DA9* L_84 = ((DetectionManager_t070257CC1E0A2BBC84FC7DD8960C34BF8A13DA16_StaticFields*)il2cpp_codegen_static_fields_for(DetectionManager_t070257CC1E0A2BBC84FC7DD8960C34BF8A13DA16_il2cpp_TypeInfo_var))->___onMarkerLost_8;
		if (!L_84)
		{
			goto IL_012f;
		}
	}
	{
		MarkerInfo_tF1D3B769CFABECC5F1524196971229B99448B57F* L_85 = V_12;
		NullCheck(L_85);
		bool L_86 = L_85->___isVisible_1;
		if (L_86)
		{
			goto IL_012f;
		}
	}
	{
		// onMarkerLost(m);
		MarkerDetection_tB2B8E475144ED5AE5A0BAFC42F3F79C6E57A9DA9* L_87 = ((DetectionManager_t070257CC1E0A2BBC84FC7DD8960C34BF8A13DA16_StaticFields*)il2cpp_codegen_static_fields_for(DetectionManager_t070257CC1E0A2BBC84FC7DD8960C34BF8A13DA16_il2cpp_TypeInfo_var))->___onMarkerLost_8;
		MarkerInfo_tF1D3B769CFABECC5F1524196971229B99448B57F* L_88 = V_12;
		NullCheck(L_87);
		MarkerDetection_Invoke_m30EED64E7C27ABF3C1F15B445A2976A617795B2D_inline(L_87, L_88, NULL);
	}

IL_012f:
	{
		// }
		return;
	}
}
// System.Void ARWT.Marker.DetectionManager::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DetectionManager__ctor_mBB5BD4B6A73A440EF4738E8BD67DF28D5ADF076D (DetectionManager_t070257CC1E0A2BBC84FC7DD8960C34BF8A13DA16* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Singleton_1__ctor_mA8A4725A8FFA16B3251C2BB3061EA80EE43BEAC6_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Singleton_1__ctor_mA8A4725A8FFA16B3251C2BB3061EA80EE43BEAC6(__this, Singleton_1__ctor_mA8A4725A8FFA16B3251C2BB3061EA80EE43BEAC6_RuntimeMethod_var);
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
void MarkerDetection_Invoke_m30EED64E7C27ABF3C1F15B445A2976A617795B2D_Multicast(MarkerDetection_tB2B8E475144ED5AE5A0BAFC42F3F79C6E57A9DA9* __this, MarkerInfo_tF1D3B769CFABECC5F1524196971229B99448B57F* ___m0, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	typedef void (*FunctionPointerType) (MarkerDetection_tB2B8E475144ED5AE5A0BAFC42F3F79C6E57A9DA9* __this, MarkerInfo_tF1D3B769CFABECC5F1524196971229B99448B57F* ___m0, const RuntimeMethod* method);
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		MarkerDetection_tB2B8E475144ED5AE5A0BAFC42F3F79C6E57A9DA9* currentDelegate = reinterpret_cast<MarkerDetection_tB2B8E475144ED5AE5A0BAFC42F3F79C6E57A9DA9*>(delegatesToInvoke[i]);
		((FunctionPointerType)currentDelegate->___invoke_impl_1)(currentDelegate, ___m0, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
}
void MarkerDetection_Invoke_m30EED64E7C27ABF3C1F15B445A2976A617795B2D_Open(MarkerDetection_tB2B8E475144ED5AE5A0BAFC42F3F79C6E57A9DA9* __this, MarkerInfo_tF1D3B769CFABECC5F1524196971229B99448B57F* ___m0, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (MarkerInfo_tF1D3B769CFABECC5F1524196971229B99448B57F*, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___m0, method);
}
void MarkerDetection_Invoke_m30EED64E7C27ABF3C1F15B445A2976A617795B2D_Closed(MarkerDetection_tB2B8E475144ED5AE5A0BAFC42F3F79C6E57A9DA9* __this, MarkerInfo_tF1D3B769CFABECC5F1524196971229B99448B57F* ___m0, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (RuntimeObject*, MarkerInfo_tF1D3B769CFABECC5F1524196971229B99448B57F*, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(__this->___m_target_2, ___m0, method);
}
void MarkerDetection_Invoke_m30EED64E7C27ABF3C1F15B445A2976A617795B2D_OpenStaticInvoker(MarkerDetection_tB2B8E475144ED5AE5A0BAFC42F3F79C6E57A9DA9* __this, MarkerInfo_tF1D3B769CFABECC5F1524196971229B99448B57F* ___m0, const RuntimeMethod* method)
{
	InvokerActionInvoker1< MarkerInfo_tF1D3B769CFABECC5F1524196971229B99448B57F* >::Invoke(__this->___method_ptr_0, method, NULL, ___m0);
}
void MarkerDetection_Invoke_m30EED64E7C27ABF3C1F15B445A2976A617795B2D_ClosedStaticInvoker(MarkerDetection_tB2B8E475144ED5AE5A0BAFC42F3F79C6E57A9DA9* __this, MarkerInfo_tF1D3B769CFABECC5F1524196971229B99448B57F* ___m0, const RuntimeMethod* method)
{
	InvokerActionInvoker2< RuntimeObject*, MarkerInfo_tF1D3B769CFABECC5F1524196971229B99448B57F* >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___m0);
}
void MarkerDetection_Invoke_m30EED64E7C27ABF3C1F15B445A2976A617795B2D_OpenVirtual(MarkerDetection_tB2B8E475144ED5AE5A0BAFC42F3F79C6E57A9DA9* __this, MarkerInfo_tF1D3B769CFABECC5F1524196971229B99448B57F* ___m0, const RuntimeMethod* method)
{
	VirtualActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(method), ___m0);
}
void MarkerDetection_Invoke_m30EED64E7C27ABF3C1F15B445A2976A617795B2D_OpenInterface(MarkerDetection_tB2B8E475144ED5AE5A0BAFC42F3F79C6E57A9DA9* __this, MarkerInfo_tF1D3B769CFABECC5F1524196971229B99448B57F* ___m0, const RuntimeMethod* method)
{
	InterfaceActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(method), il2cpp_codegen_method_get_declaring_type(method), ___m0);
}
void MarkerDetection_Invoke_m30EED64E7C27ABF3C1F15B445A2976A617795B2D_OpenGenericVirtual(MarkerDetection_tB2B8E475144ED5AE5A0BAFC42F3F79C6E57A9DA9* __this, MarkerInfo_tF1D3B769CFABECC5F1524196971229B99448B57F* ___m0, const RuntimeMethod* method)
{
	GenericVirtualActionInvoker0::Invoke(method, ___m0);
}
void MarkerDetection_Invoke_m30EED64E7C27ABF3C1F15B445A2976A617795B2D_OpenGenericInterface(MarkerDetection_tB2B8E475144ED5AE5A0BAFC42F3F79C6E57A9DA9* __this, MarkerInfo_tF1D3B769CFABECC5F1524196971229B99448B57F* ___m0, const RuntimeMethod* method)
{
	GenericInterfaceActionInvoker0::Invoke(method, ___m0);
}
// System.Void ARWT.Marker.DetectionManager/MarkerDetection::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MarkerDetection__ctor_mCA29C02D7EA4B7C263C4480234F4DDF0460F86AD (MarkerDetection_tB2B8E475144ED5AE5A0BAFC42F3F79C6E57A9DA9* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___method1);
	__this->___method_3 = ___method1;
	__this->___m_target_2 = ___object0;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___object0);
	int methodCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___method1);
	if (MethodIsStatic((RuntimeMethod*)___method1))
	{
		bool isOpen = methodCount == 1;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___method1))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&MarkerDetection_Invoke_m30EED64E7C27ABF3C1F15B445A2976A617795B2D_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&MarkerDetection_Invoke_m30EED64E7C27ABF3C1F15B445A2976A617795B2D_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&MarkerDetection_Invoke_m30EED64E7C27ABF3C1F15B445A2976A617795B2D_Open;
			else
				__this->___invoke_impl_1 = (intptr_t)&MarkerDetection_Invoke_m30EED64E7C27ABF3C1F15B445A2976A617795B2D_Closed;
	}
	else
	{
		bool isOpen = methodCount == 0;
		if (isOpen)
		{
			if (__this->___method_is_virtual_12)
			{
				if (il2cpp_codegen_method_is_generic_instance_method((RuntimeMethod*)___method1))
					if (il2cpp_codegen_method_is_interface_method((RuntimeMethod*)___method1))
						__this->___invoke_impl_1 = (intptr_t)&MarkerDetection_Invoke_m30EED64E7C27ABF3C1F15B445A2976A617795B2D_OpenGenericInterface;
					else
						__this->___invoke_impl_1 = (intptr_t)&MarkerDetection_Invoke_m30EED64E7C27ABF3C1F15B445A2976A617795B2D_OpenGenericVirtual;
				else
					if (il2cpp_codegen_method_is_interface_method((RuntimeMethod*)___method1))
						__this->___invoke_impl_1 = (intptr_t)&MarkerDetection_Invoke_m30EED64E7C27ABF3C1F15B445A2976A617795B2D_OpenInterface;
					else
						__this->___invoke_impl_1 = (intptr_t)&MarkerDetection_Invoke_m30EED64E7C27ABF3C1F15B445A2976A617795B2D_OpenVirtual;
			}
			else
			{
				__this->___invoke_impl_1 = (intptr_t)&MarkerDetection_Invoke_m30EED64E7C27ABF3C1F15B445A2976A617795B2D_Open;
			}
		}
		else
		{
			__this->___invoke_impl_1 = (intptr_t)&MarkerDetection_Invoke_m30EED64E7C27ABF3C1F15B445A2976A617795B2D_Closed;
		}
	}
	__this->___extra_arg_5 = (intptr_t)&MarkerDetection_Invoke_m30EED64E7C27ABF3C1F15B445A2976A617795B2D_Multicast;
}
// System.Void ARWT.Marker.DetectionManager/MarkerDetection::Invoke(ARWT.Marker.MarkerInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MarkerDetection_Invoke_m30EED64E7C27ABF3C1F15B445A2976A617795B2D (MarkerDetection_tB2B8E475144ED5AE5A0BAFC42F3F79C6E57A9DA9* __this, MarkerInfo_tF1D3B769CFABECC5F1524196971229B99448B57F* ___m0, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (MarkerDetection_tB2B8E475144ED5AE5A0BAFC42F3F79C6E57A9DA9* __this, MarkerInfo_tF1D3B769CFABECC5F1524196971229B99448B57F* ___m0, const RuntimeMethod* method);
	((FunctionPointerType)__this->___invoke_impl_1)(__this, ___m0, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult ARWT.Marker.DetectionManager/MarkerDetection::BeginInvoke(ARWT.Marker.MarkerInfo,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* MarkerDetection_BeginInvoke_m53D2332E0FF498B600FDA0858606F33D8991E92F (MarkerDetection_tB2B8E475144ED5AE5A0BAFC42F3F79C6E57A9DA9* __this, MarkerInfo_tF1D3B769CFABECC5F1524196971229B99448B57F* ___m0, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___callback1, RuntimeObject* ___object2, const RuntimeMethod* method) 
{
	void *__d_args[2] = {0};
	__d_args[0] = ___m0;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);;
}
// System.Void ARWT.Marker.DetectionManager/MarkerDetection::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MarkerDetection_EndInvoke_mB7214E963CFD92EC3640D5ED1EFBF36C5743A41B (MarkerDetection_tB2B8E475144ED5AE5A0BAFC42F3F79C6E57A9DA9* __this, RuntimeObject* ___result0, const RuntimeMethod* method) 
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void ARWT.Marker.GenericController::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GenericController_Start_mED8D20A25AE7C4C1D946B12C2C5B5417D6857DD1 (GenericController_t2AD20ABC5479AD3A29E145A09CE1B5784E92BF10* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GenericController_onMarkerLost_m517264E1C1D1210237CF349DFED77F59390DE54E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GenericController_onMarkerVisible_mFA701A0645235EC4F4F2AEF4ACA57635121DA706_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MarkerDetection_tB2B8E475144ED5AE5A0BAFC42F3F79C6E57A9DA9_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// DetectionManager.onMarkerVisible += onMarkerVisible;
		MarkerDetection_tB2B8E475144ED5AE5A0BAFC42F3F79C6E57A9DA9* L_0 = (MarkerDetection_tB2B8E475144ED5AE5A0BAFC42F3F79C6E57A9DA9*)il2cpp_codegen_object_new(MarkerDetection_tB2B8E475144ED5AE5A0BAFC42F3F79C6E57A9DA9_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		MarkerDetection__ctor_mCA29C02D7EA4B7C263C4480234F4DDF0460F86AD(L_0, __this, (intptr_t)((void*)GenericController_onMarkerVisible_mFA701A0645235EC4F4F2AEF4ACA57635121DA706_RuntimeMethod_var), NULL);
		DetectionManager_add_onMarkerVisible_m7734FE145336E45C86316AC2F5D9EB2976ADE057(L_0, NULL);
		// DetectionManager.onMarkerLost += onMarkerLost;
		MarkerDetection_tB2B8E475144ED5AE5A0BAFC42F3F79C6E57A9DA9* L_1 = (MarkerDetection_tB2B8E475144ED5AE5A0BAFC42F3F79C6E57A9DA9*)il2cpp_codegen_object_new(MarkerDetection_tB2B8E475144ED5AE5A0BAFC42F3F79C6E57A9DA9_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		MarkerDetection__ctor_mCA29C02D7EA4B7C263C4480234F4DDF0460F86AD(L_1, __this, (intptr_t)((void*)GenericController_onMarkerLost_m517264E1C1D1210237CF349DFED77F59390DE54E_RuntimeMethod_var), NULL);
		DetectionManager_add_onMarkerLost_mDAC14075B5862FC82521DFE4AFEB7EF332D7A3DE(L_1, NULL);
		// }
		return;
	}
}
// System.Void ARWT.Marker.GenericController::onMarkerVisible(ARWT.Marker.MarkerInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GenericController_onMarkerVisible_mFA701A0645235EC4F4F2AEF4ACA57635121DA706 (GenericController_t2AD20ABC5479AD3A29E145A09CE1B5784E92BF10* __this, MarkerInfo_tF1D3B769CFABECC5F1524196971229B99448B57F* ___m0, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* G_B3_0 = NULL;
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* G_B2_0 = NULL;
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* G_B6_0 = NULL;
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* G_B5_0 = NULL;
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* G_B9_0 = NULL;
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* G_B8_0 = NULL;
	{
		// if(m.name == markerToListen){
		MarkerInfo_tF1D3B769CFABECC5F1524196971229B99448B57F* L_0 = ___m0;
		NullCheck(L_0);
		String_t* L_1 = L_0->___name_0;
		String_t* L_2 = __this->___markerToListen_4;
		bool L_3;
		L_3 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_1, L_2, NULL);
		if (!L_3)
		{
			goto IL_010d;
		}
	}
	{
		// child?.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4 = __this->___child_5;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_5 = L_4;
		G_B2_0 = L_5;
		if (L_5)
		{
			G_B3_0 = L_5;
			goto IL_0022;
		}
	}
	{
		goto IL_0028;
	}

IL_0022:
	{
		NullCheck(G_B3_0);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(G_B3_0, (bool)1, NULL);
	}

IL_0028:
	{
		// uiHelper?.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_6 = __this->___uiHelper_8;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_7 = L_6;
		G_B5_0 = L_7;
		if (L_7)
		{
			G_B6_0 = L_7;
			goto IL_0034;
		}
	}
	{
		goto IL_003a;
	}

IL_0034:
	{
		NullCheck(G_B6_0);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(G_B6_0, (bool)0, NULL);
	}

IL_003a:
	{
		// gameUI?.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_8 = __this->___gameUI_9;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_9 = L_8;
		G_B8_0 = L_9;
		if (L_9)
		{
			G_B9_0 = L_9;
			goto IL_0046;
		}
	}
	{
		goto IL_004c;
	}

IL_0046:
	{
		NullCheck(G_B9_0);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(G_B9_0, (bool)1, NULL);
	}

IL_004c:
	{
		// if (!firstTime){
		bool L_10 = __this->___firstTime_10;
		if (L_10)
		{
			goto IL_00a1;
		}
	}
	{
		// if(Vector3.Distance(m.position, transform.position) > positionThreshold){
		MarkerInfo_tF1D3B769CFABECC5F1524196971229B99448B57F* L_11 = ___m0;
		NullCheck(L_11);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12 = L_11->___position_2;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_13;
		L_13 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_13);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_14;
		L_14 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_13, NULL);
		float L_15;
		L_15 = Vector3_Distance_m99C722723EDD875852EF854AD7B7C4F8AC4F84AB_inline(L_12, L_14, NULL);
		float L_16 = __this->___positionThreshold_7;
		if ((!(((float)L_15) > ((float)L_16))))
		{
			goto IL_00b9;
		}
	}
	{
		// transform.position = Vector3.Lerp(transform.position, m.position, Time.deltaTime * updateSpeed);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_17;
		L_17 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_18;
		L_18 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_18);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_19;
		L_19 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_18, NULL);
		MarkerInfo_tF1D3B769CFABECC5F1524196971229B99448B57F* L_20 = ___m0;
		NullCheck(L_20);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_21 = L_20->___position_2;
		float L_22;
		L_22 = Time_get_deltaTime_m7AB6BFA101D83E1D8F2EF3D5A128AEE9DDBF1A6D(NULL);
		float L_23 = __this->___updateSpeed_6;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_24;
		L_24 = Vector3_Lerp_m57EE8D709A93B2B0FF8D499FA2947B1D61CB1FD6_inline(L_19, L_21, ((float)il2cpp_codegen_multiply(L_22, L_23)), NULL);
		NullCheck(L_17);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_17, L_24, NULL);
		goto IL_00b9;
	}

IL_00a1:
	{
		// transform.position = m.position;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_25;
		L_25 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		MarkerInfo_tF1D3B769CFABECC5F1524196971229B99448B57F* L_26 = ___m0;
		NullCheck(L_26);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_27 = L_26->___position_2;
		NullCheck(L_25);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_25, L_27, NULL);
		// firstTime = false;
		__this->___firstTime_10 = (bool)0;
	}

IL_00b9:
	{
		// transform.rotation = m.rotation;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_28;
		L_28 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		MarkerInfo_tF1D3B769CFABECC5F1524196971229B99448B57F* L_29 = ___m0;
		NullCheck(L_29);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_30 = L_29->___rotation_3;
		NullCheck(L_28);
		Transform_set_rotation_m61340DE74726CF0F9946743A727C4D444397331D(L_28, L_30, NULL);
		// Vector3 absScale = new Vector3(
		//     Mathf.Abs(m.scale.x),
		//     Mathf.Abs(m.scale.y),
		//     Mathf.Abs(m.scale.z)
		// );
		MarkerInfo_tF1D3B769CFABECC5F1524196971229B99448B57F* L_31 = ___m0;
		NullCheck(L_31);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_32 = (&L_31->___scale_4);
		float L_33 = L_32->___x_2;
		float L_34;
		L_34 = fabsf(L_33);
		MarkerInfo_tF1D3B769CFABECC5F1524196971229B99448B57F* L_35 = ___m0;
		NullCheck(L_35);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_36 = (&L_35->___scale_4);
		float L_37 = L_36->___y_3;
		float L_38;
		L_38 = fabsf(L_37);
		MarkerInfo_tF1D3B769CFABECC5F1524196971229B99448B57F* L_39 = ___m0;
		NullCheck(L_39);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_40 = (&L_39->___scale_4);
		float L_41 = L_40->___z_4;
		float L_42;
		L_42 = fabsf(L_41);
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&V_0), L_34, L_38, L_42, NULL);
		// transform.localScale = absScale;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_43;
		L_43 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_44 = V_0;
		NullCheck(L_43);
		Transform_set_localScale_mBA79E811BAF6C47B80FF76414C12B47B3CD03633(L_43, L_44, NULL);
	}

IL_010d:
	{
		// }
		return;
	}
}
// System.Void ARWT.Marker.GenericController::onMarkerLost(ARWT.Marker.MarkerInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GenericController_onMarkerLost_m517264E1C1D1210237CF349DFED77F59390DE54E (GenericController_t2AD20ABC5479AD3A29E145A09CE1B5784E92BF10* __this, MarkerInfo_tF1D3B769CFABECC5F1524196971229B99448B57F* ___m0, const RuntimeMethod* method) 
{
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* G_B3_0 = NULL;
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* G_B2_0 = NULL;
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* G_B6_0 = NULL;
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* G_B5_0 = NULL;
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* G_B9_0 = NULL;
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* G_B8_0 = NULL;
	{
		// if(m.name == markerToListen){
		MarkerInfo_tF1D3B769CFABECC5F1524196971229B99448B57F* L_0 = ___m0;
		NullCheck(L_0);
		String_t* L_1 = L_0->___name_0;
		String_t* L_2 = __this->___markerToListen_4;
		bool L_3;
		L_3 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_1, L_2, NULL);
		if (!L_3)
		{
			goto IL_0050;
		}
	}
	{
		// child?.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4 = __this->___child_5;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_5 = L_4;
		G_B2_0 = L_5;
		if (L_5)
		{
			G_B3_0 = L_5;
			goto IL_001f;
		}
	}
	{
		goto IL_0025;
	}

IL_001f:
	{
		NullCheck(G_B3_0);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(G_B3_0, (bool)0, NULL);
	}

IL_0025:
	{
		// uiHelper?.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_6 = __this->___uiHelper_8;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_7 = L_6;
		G_B5_0 = L_7;
		if (L_7)
		{
			G_B6_0 = L_7;
			goto IL_0031;
		}
	}
	{
		goto IL_0037;
	}

IL_0031:
	{
		NullCheck(G_B6_0);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(G_B6_0, (bool)1, NULL);
	}

IL_0037:
	{
		// gameUI?.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_8 = __this->___gameUI_9;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_9 = L_8;
		G_B8_0 = L_9;
		if (L_9)
		{
			G_B9_0 = L_9;
			goto IL_0043;
		}
	}
	{
		goto IL_0049;
	}

IL_0043:
	{
		NullCheck(G_B9_0);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(G_B9_0, (bool)0, NULL);
	}

IL_0049:
	{
		// firstTime = true;
		__this->___firstTime_10 = (bool)1;
	}

IL_0050:
	{
		// }
		return;
	}
}
// System.Void ARWT.Marker.GenericController::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GenericController__ctor_m56AABEDF14451ED730FE7F85FECD4CDCD133AA1F (GenericController_t2AD20ABC5479AD3A29E145A09CE1B5784E92BF10* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral20C69ED804A96A83021B0D5C0514DAB63AA7FB2D);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public string markerToListen = "hiro";
		__this->___markerToListen_4 = _stringLiteral20C69ED804A96A83021B0D5C0514DAB63AA7FB2D;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___markerToListen_4), (void*)_stringLiteral20C69ED804A96A83021B0D5C0514DAB63AA7FB2D);
		// public float updateSpeed = 10;
		__this->___updateSpeed_6 = (10.0f);
		// bool firstTime = true;
		__this->___firstTime_10 = (bool)1;
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// UnityEngine.Texture2D ARWT.Marker.TextureScaler::scaled(UnityEngine.Texture2D,System.Int32,System.Int32,UnityEngine.FilterMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* TextureScaler_scaled_mEDFEA9D47992890534D79E6E3A10F08051A33E54 (Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ___src0, int32_t ___width1, int32_t ___height2, int32_t ___mode3, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// Rect texR = new Rect(0, 0, width, height);
		int32_t L_0 = ___width1;
		int32_t L_1 = ___height2;
		Rect__ctor_m18C3033D135097BEE424AAA68D91C706D2647F23((&V_0), (0.0f), (0.0f), ((float)L_0), ((float)L_1), NULL);
		// scaleGPU(src, width, height, mode);
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_2 = ___src0;
		int32_t L_3 = ___width1;
		int32_t L_4 = ___height2;
		int32_t L_5 = ___mode3;
		TextureScaler_scaleGPU_mFF8F8413B5A805F53FE2B3284DE62299B53A65DF(L_2, L_3, L_4, L_5, NULL);
		// Texture2D result = new Texture2D(width, height, TextureFormat.RGB24, true);
		int32_t L_6 = ___width1;
		int32_t L_7 = ___height2;
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_8 = (Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4*)il2cpp_codegen_object_new(Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4_il2cpp_TypeInfo_var);
		NullCheck(L_8);
		Texture2D__ctor_mECF60A9EC0638EC353C02C8E99B6B465D23BE917(L_8, L_6, L_7, 3, (bool)1, NULL);
		// result.Reinitialize(width, height);
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_9 = L_8;
		int32_t L_10 = ___width1;
		int32_t L_11 = ___height2;
		NullCheck(L_9);
		bool L_12;
		L_12 = Texture2D_Reinitialize_m9AB4169DA359C18BB4102F8E00C4321B53714E6B(L_9, L_10, L_11, NULL);
		// result.ReadPixels(texR, 0, 0, true);
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_13 = L_9;
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_14 = V_0;
		NullCheck(L_13);
		Texture2D_ReadPixels_m7483DB211233F02E46418E9A6077487925F0024C(L_13, L_14, 0, 0, (bool)1, NULL);
		// result.Apply();
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_15 = L_13;
		NullCheck(L_15);
		Texture2D_Apply_mA014182C9EE0BBF6EEE3B286854F29E50EB972DC(L_15, NULL);
		// return result;
		return L_15;
	}
}
// System.Void ARWT.Marker.TextureScaler::scale(UnityEngine.Texture2D,System.Int32,System.Int32,UnityEngine.FilterMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextureScaler_scale_m9EB1A42724A1E2031E016D8E28CE47CFFFE9BCBE (Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ___tex0, int32_t ___width1, int32_t ___height2, int32_t ___mode3, const RuntimeMethod* method) 
{
	Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// Rect texR = new Rect(0, 0, width, height);
		int32_t L_0 = ___width1;
		int32_t L_1 = ___height2;
		Rect__ctor_m18C3033D135097BEE424AAA68D91C706D2647F23((&V_0), (0.0f), (0.0f), ((float)L_0), ((float)L_1), NULL);
		// scaleGPU(tex, width, height, mode);
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_2 = ___tex0;
		int32_t L_3 = ___width1;
		int32_t L_4 = ___height2;
		int32_t L_5 = ___mode3;
		TextureScaler_scaleGPU_mFF8F8413B5A805F53FE2B3284DE62299B53A65DF(L_2, L_3, L_4, L_5, NULL);
		// tex.Reinitialize(width, height);
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_6 = ___tex0;
		int32_t L_7 = ___width1;
		int32_t L_8 = ___height2;
		NullCheck(L_6);
		bool L_9;
		L_9 = Texture2D_Reinitialize_m9AB4169DA359C18BB4102F8E00C4321B53714E6B(L_6, L_7, L_8, NULL);
		// tex.ReadPixels(texR, 0, 0, true);
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_10 = ___tex0;
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_11 = V_0;
		NullCheck(L_10);
		Texture2D_ReadPixels_m7483DB211233F02E46418E9A6077487925F0024C(L_10, L_11, 0, 0, (bool)1, NULL);
		// tex.Apply(true);
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_12 = ___tex0;
		NullCheck(L_12);
		Texture2D_Apply_mCC369BCAB2D3AD3EE50EE01DA67AF227865FA2B3(L_12, (bool)1, NULL);
		// }
		return;
	}
}
// System.Void ARWT.Marker.TextureScaler::scaleGPU(UnityEngine.Texture2D,System.Int32,System.Int32,UnityEngine.FilterMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextureScaler_scaleGPU_mFF8F8413B5A805F53FE2B3284DE62299B53A65DF (Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ___src0, int32_t ___width1, int32_t ___height2, int32_t ___fmode3, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Graphics_t99CD970FFEA58171C70F54DF0C06D315BD452F2C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// src.filterMode = fmode;
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_0 = ___src0;
		int32_t L_1 = ___fmode3;
		NullCheck(L_0);
		Texture_set_filterMode_mE423E58C0C16D059EA62BA87AD70F44AEA50CCC9(L_0, L_1, NULL);
		// src.Apply(true);
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_2 = ___src0;
		NullCheck(L_2);
		Texture2D_Apply_mCC369BCAB2D3AD3EE50EE01DA67AF227865FA2B3(L_2, (bool)1, NULL);
		// RenderTexture rtt = new RenderTexture(width, height, 32);
		int32_t L_3 = ___width1;
		int32_t L_4 = ___height2;
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_5 = (RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27*)il2cpp_codegen_object_new(RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27_il2cpp_TypeInfo_var);
		NullCheck(L_5);
		RenderTexture__ctor_m45EACC89DDF408948889586516B3CA7AA8B73BFA(L_5, L_3, L_4, ((int32_t)32), NULL);
		// Graphics.SetRenderTarget(rtt);
		il2cpp_codegen_runtime_class_init_inline(Graphics_t99CD970FFEA58171C70F54DF0C06D315BD452F2C_il2cpp_TypeInfo_var);
		Graphics_SetRenderTarget_mDA2F41245400E50551268368F6C551FFFDCC9CAC(L_5, NULL);
		// GL.LoadPixelMatrix(0, 1, 1, 0);
		GL_LoadPixelMatrix_m4E6F7BAFD87A2FE91048B0F602519811690CAA63((0.0f), (1.0f), (1.0f), (0.0f), NULL);
		// GL.Clear(true, true, new Color(0, 0, 0, 0));
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_6;
		memset((&L_6), 0, sizeof(L_6));
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&L_6), (0.0f), (0.0f), (0.0f), (0.0f), /*hidden argument*/NULL);
		GL_Clear_m303329453ADB3495208897E282FD24910878F537((bool)1, (bool)1, L_6, NULL);
		// Graphics.DrawTexture(new Rect(0, 0, 1, 1), src);
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_7;
		memset((&L_7), 0, sizeof(L_7));
		Rect__ctor_m18C3033D135097BEE424AAA68D91C706D2647F23((&L_7), (0.0f), (0.0f), (1.0f), (1.0f), /*hidden argument*/NULL);
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_8 = ___src0;
		Graphics_DrawTexture_m6DB7BD44609FE7693C0ED0A6BAC8E71954884118(L_7, L_8, NULL);
		// }
		return;
	}
}
// System.Void ARWT.Marker.TextureScaler::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextureScaler__ctor_m3029D4E4C148460ACF855695289AF1F344D4B10C (TextureScaler_t20DD1B353B1A0E57F30574F69D69784580378E32* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
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
// System.Void ARWT.Marker.MultiMarkerController::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MultiMarkerController_Start_m564C8585B9FC9B357FD8387C9A47B9DA8CF7EE70 (MultiMarkerController_tF884F15CCA4084E58B5A2D87001B42041C0927D4* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MarkerDetection_tB2B8E475144ED5AE5A0BAFC42F3F79C6E57A9DA9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MultiMarkerController_onMarkerLost_m028CDBF5DC6C57BD4EB8A23DD69CEBA25E2D9D74_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MultiMarkerController_onMarkerVisible_m33FB0B6C930293F38557943BD7CFAF6CC17C5E36_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// DetectionManager.onMarkerVisible += onMarkerVisible;
		MarkerDetection_tB2B8E475144ED5AE5A0BAFC42F3F79C6E57A9DA9* L_0 = (MarkerDetection_tB2B8E475144ED5AE5A0BAFC42F3F79C6E57A9DA9*)il2cpp_codegen_object_new(MarkerDetection_tB2B8E475144ED5AE5A0BAFC42F3F79C6E57A9DA9_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		MarkerDetection__ctor_mCA29C02D7EA4B7C263C4480234F4DDF0460F86AD(L_0, __this, (intptr_t)((void*)MultiMarkerController_onMarkerVisible_m33FB0B6C930293F38557943BD7CFAF6CC17C5E36_RuntimeMethod_var), NULL);
		DetectionManager_add_onMarkerVisible_m7734FE145336E45C86316AC2F5D9EB2976ADE057(L_0, NULL);
		// DetectionManager.onMarkerLost += onMarkerLost;
		MarkerDetection_tB2B8E475144ED5AE5A0BAFC42F3F79C6E57A9DA9* L_1 = (MarkerDetection_tB2B8E475144ED5AE5A0BAFC42F3F79C6E57A9DA9*)il2cpp_codegen_object_new(MarkerDetection_tB2B8E475144ED5AE5A0BAFC42F3F79C6E57A9DA9_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		MarkerDetection__ctor_mCA29C02D7EA4B7C263C4480234F4DDF0460F86AD(L_1, __this, (intptr_t)((void*)MultiMarkerController_onMarkerLost_m028CDBF5DC6C57BD4EB8A23DD69CEBA25E2D9D74_RuntimeMethod_var), NULL);
		DetectionManager_add_onMarkerLost_mDAC14075B5862FC82521DFE4AFEB7EF332D7A3DE(L_1, NULL);
		// }
		return;
	}
}
// System.Void ARWT.Marker.MultiMarkerController::onMarkerVisible(ARWT.Marker.MarkerInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MultiMarkerController_onMarkerVisible_m33FB0B6C930293F38557943BD7CFAF6CC17C5E36 (MultiMarkerController_tF884F15CCA4084E58B5A2D87001B42041C0927D4* __this, MarkerInfo_tF1D3B769CFABECC5F1524196971229B99448B57F* ___m0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Contains_m359254483BE42CAD4DCA8FBAFB87473FB4CF00E1_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if(markers.Contains (m.name)){
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_0 = __this->___markers_4;
		MarkerInfo_tF1D3B769CFABECC5F1524196971229B99448B57F* L_1 = ___m0;
		NullCheck(L_1);
		String_t* L_2 = L_1->___name_0;
		NullCheck(L_0);
		bool L_3;
		L_3 = List_1_Contains_m359254483BE42CAD4DCA8FBAFB87473FB4CF00E1(L_0, L_2, List_1_Contains_m359254483BE42CAD4DCA8FBAFB87473FB4CF00E1_RuntimeMethod_var);
		if (!L_3)
		{
			goto IL_009f;
		}
	}
	{
		// currentMarker = m.name;
		MarkerInfo_tF1D3B769CFABECC5F1524196971229B99448B57F* L_4 = ___m0;
		NullCheck(L_4);
		String_t* L_5 = L_4->___name_0;
		__this->___currentMarker_7 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___currentMarker_7), (void*)L_5);
		// child.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_6 = __this->___child_5;
		NullCheck(L_6);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_6, (bool)1, NULL);
		// if (!firstTime){
		bool L_7 = __this->___firstTime_8;
		if (L_7)
		{
			goto IL_0065;
		}
	}
	{
		// transform.position = Vector3.Lerp(transform.position, m.position, Time.deltaTime * updateSpeed);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_8;
		L_8 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_9;
		L_9 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_9);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10;
		L_10 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_9, NULL);
		MarkerInfo_tF1D3B769CFABECC5F1524196971229B99448B57F* L_11 = ___m0;
		NullCheck(L_11);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12 = L_11->___position_2;
		float L_13;
		L_13 = Time_get_deltaTime_m7AB6BFA101D83E1D8F2EF3D5A128AEE9DDBF1A6D(NULL);
		float L_14 = __this->___updateSpeed_6;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_15;
		L_15 = Vector3_Lerp_m57EE8D709A93B2B0FF8D499FA2947B1D61CB1FD6_inline(L_10, L_12, ((float)il2cpp_codegen_multiply(L_13, L_14)), NULL);
		NullCheck(L_8);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_8, L_15, NULL);
		goto IL_007d;
	}

IL_0065:
	{
		// transform.position = m.position;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_16;
		L_16 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		MarkerInfo_tF1D3B769CFABECC5F1524196971229B99448B57F* L_17 = ___m0;
		NullCheck(L_17);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_18 = L_17->___position_2;
		NullCheck(L_16);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_16, L_18, NULL);
		// firstTime = false;
		__this->___firstTime_8 = (bool)0;
	}

IL_007d:
	{
		// transform.rotation = m.rotation;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_19;
		L_19 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		MarkerInfo_tF1D3B769CFABECC5F1524196971229B99448B57F* L_20 = ___m0;
		NullCheck(L_20);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_21 = L_20->___rotation_3;
		NullCheck(L_19);
		Transform_set_rotation_m61340DE74726CF0F9946743A727C4D444397331D(L_19, L_21, NULL);
		// transform.localScale = m.scale;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_22;
		L_22 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		MarkerInfo_tF1D3B769CFABECC5F1524196971229B99448B57F* L_23 = ___m0;
		NullCheck(L_23);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_24 = L_23->___scale_4;
		NullCheck(L_22);
		Transform_set_localScale_mBA79E811BAF6C47B80FF76414C12B47B3CD03633(L_22, L_24, NULL);
	}

IL_009f:
	{
		// }
		return;
	}
}
// System.Void ARWT.Marker.MultiMarkerController::onMarkerLost(ARWT.Marker.MarkerInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MultiMarkerController_onMarkerLost_m028CDBF5DC6C57BD4EB8A23DD69CEBA25E2D9D74 (MultiMarkerController_tF884F15CCA4084E58B5A2D87001B42041C0927D4* __this, MarkerInfo_tF1D3B769CFABECC5F1524196971229B99448B57F* ___m0, const RuntimeMethod* method) 
{
	{
		// if(m.name == currentMarker){
		MarkerInfo_tF1D3B769CFABECC5F1524196971229B99448B57F* L_0 = ___m0;
		NullCheck(L_0);
		String_t* L_1 = L_0->___name_0;
		String_t* L_2 = __this->___currentMarker_7;
		bool L_3;
		L_3 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_1, L_2, NULL);
		if (!L_3)
		{
			goto IL_0026;
		}
	}
	{
		// child.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4 = __this->___child_5;
		NullCheck(L_4);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_4, (bool)0, NULL);
		// firstTime = true;
		__this->___firstTime_8 = (bool)1;
	}

IL_0026:
	{
		// }
		return;
	}
}
// System.Void ARWT.Marker.MultiMarkerController::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MultiMarkerController__ctor_m10A9194C4DA605D57915D86299742B4DB5780230 (MultiMarkerController_tF884F15CCA4084E58B5A2D87001B42041C0927D4* __this, const RuntimeMethod* method) 
{
	{
		// public float updateSpeed = 10;
		__this->___updateSpeed_6 = (10.0f);
		// bool firstTime = true;
		__this->___firstTime_8 = (bool)1;
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void ARWT.Marker.UIHandler::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIHandler_Update_mD17B75BF09D7C9C61D0EEA5C583547F879D58E3A (UIHandler_t8B96B7F863FD3DA2D297F60EE6AC384195DE5469* __this, const RuntimeMethod* method) 
{
	{
		// UI.SetActive(parent.activeSelf);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___UI_5;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1 = __this->___parent_4;
		NullCheck(L_1);
		bool L_2;
		L_2 = GameObject_get_activeSelf_m4F3E5240E138B66AAA080EA30759A3D0517DA368(L_1, NULL);
		NullCheck(L_0);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_0, L_2, NULL);
		// }
		return;
	}
}
// System.Void ARWT.Marker.UIHandler::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIHandler__ctor_mA416168A60BE6CA968A908595430C1024E67CCB7 (UIHandler_t8B96B7F863FD3DA2D297F60EE6AC384195DE5469* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void ARWT.Marker.UIScaler::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIScaler_Update_m6B6776486135A713411A9A03BD849D117728ED93 (UIScaler_t2B477AD4FC6FDD2F13458D97C5C5663890E528D5* __this, const RuntimeMethod* method) 
{
	{
		// if (Application.isEditor){
		bool L_0;
		L_0 = Application_get_isEditor_m0377DB707B566C8E21DA3CD99963210F6D57D234(NULL);
		if (!L_0)
		{
			goto IL_0023;
		}
	}
	{
		// panel.sizeDelta = new Vector2(
		//     Screen.width,
		//     Screen.height
		// );
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_1 = __this->___panel_4;
		int32_t L_2;
		L_2 = Screen_get_width_mCA5D955A53CF6D29C8C7118D517D0FC84AE8056C(NULL);
		int32_t L_3;
		L_3 = Screen_get_height_m624DD2D53F34087064E3B9D09AC2207DB4E86CA8(NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_4;
		memset((&L_4), 0, sizeof(L_4));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_4), ((float)L_2), ((float)L_3), /*hidden argument*/NULL);
		NullCheck(L_1);
		RectTransform_set_sizeDelta_mC9A980EA6036E6725EF24CEDF3EE80A9B2B50EE5(L_1, L_4, NULL);
	}

IL_0023:
	{
		// }
		return;
	}
}
// System.Void ARWT.Marker.UIScaler::setSize(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIScaler_setSize_m11C6A5FBE365EA7CA7D40F4F893D1C12F53CB137 (UIScaler_t2B477AD4FC6FDD2F13458D97C5C5663890E528D5* __this, String_t* ___xy0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC18C9BB6DF0D5C60CE5A5D2D3D6111BEB6F8CCEB);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	{
		// string[] dim =  xy.Split(","[0]);
		String_t* L_0 = ___xy0;
		NullCheck(_stringLiteralC18C9BB6DF0D5C60CE5A5D2D3D6111BEB6F8CCEB);
		Il2CppChar L_1;
		L_1 = String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3(_stringLiteralC18C9BB6DF0D5C60CE5A5D2D3D6111BEB6F8CCEB, 0, NULL);
		NullCheck(L_0);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_2;
		L_2 = String_Split_m9530B73D02054692283BF35C3A27C8F2230946F4(L_0, L_1, 0, NULL);
		// float width = float.Parse(dim[0].ToString());
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_3 = L_2;
		NullCheck(L_3);
		int32_t L_4 = 0;
		String_t* L_5 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		NullCheck(L_5);
		String_t* L_6;
		L_6 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_5);
		float L_7;
		L_7 = Single_Parse_m349A7F699C77834259812ABE86909825C1F93CF4(L_6, NULL);
		V_0 = L_7;
		// float height = float.Parse(dim[1].ToString());
		NullCheck(L_3);
		int32_t L_8 = 1;
		String_t* L_9 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_8));
		NullCheck(L_9);
		String_t* L_10;
		L_10 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_9);
		float L_11;
		L_11 = Single_Parse_m349A7F699C77834259812ABE86909825C1F93CF4(L_10, NULL);
		V_1 = L_11;
		// panel.sizeDelta = new Vector2(
		//     width,
		//     height
		// );
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_12 = __this->___panel_4;
		float L_13 = V_0;
		float L_14 = V_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_15;
		memset((&L_15), 0, sizeof(L_15));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_15), L_13, L_14, /*hidden argument*/NULL);
		NullCheck(L_12);
		RectTransform_set_sizeDelta_mC9A980EA6036E6725EF24CEDF3EE80A9B2B50EE5(L_12, L_15, NULL);
		// }
		return;
	}
}
// System.Void ARWT.Marker.UIScaler::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIScaler__ctor_m10DDBF179DA9441FDD4E1290C44B7F61CF4DC5C8 (UIScaler_t2B477AD4FC6FDD2F13458D97C5C5663890E528D5* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void ARWT.Example.Rotator::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rotator_Update_mA75BE1B509849E5B81E006526E5E25AF45C1D3FD (Rotator_t0E916AEA08E506FFFFABEA3166AA92404DACB657* __this, const RuntimeMethod* method) 
{
	{
		// transform.eulerAngles += Vector3.up * speed;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0;
		L_0 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1 = L_0;
		NullCheck(L_1);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = Transform_get_eulerAngles_mCAAF48EFCF628F1ED91C2FFE75A4FD19C039DD6A(L_1, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = Vector3_get_up_mAB5269BFCBCB1BD241450C9BF2F156303D30E0C3_inline(NULL);
		float L_4 = __this->___speed_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5;
		L_5 = Vector3_op_Multiply_m516FE285F5342F922C6EB3FCB33197E9017FF484_inline(L_3, L_4, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		L_6 = Vector3_op_Addition_m087D6F0EC60843D455F9F83D25FE42B2433AAD1D_inline(L_2, L_5, NULL);
		NullCheck(L_1);
		Transform_set_eulerAngles_m9F0BC484A7915A51FAB87230644229B75BACA004(L_1, L_6, NULL);
		// }
		return;
	}
}
// System.Void ARWT.Example.Rotator::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rotator__ctor_m5B45F20472D075471067328EEB40C75F0AA0F86A (Rotator_t0E916AEA08E506FFFFABEA3166AA92404DACB657* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void ARWT.Core.CameraController::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraController_Start_mA3AB742F7A990798E2D9EE93464D310AC52B71FE (CameraController_t0B540EC84654F847C56C1CA21F47B421EEAFD4B5* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Empty_TisRuntimeObject_m55011E8360A8199FB239A5787BA8631CDD6116FC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisCamera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184_m64AC6C06DD93C5FB249091FEC84FA8475457CCC4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral99187D3D262E808774C71BD63810589041809388);
		s_Il2CppMethodInitialized = true;
	}
	{
		// cam = GetComponent<Camera>();
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_0;
		L_0 = Component_GetComponent_TisCamera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184_m64AC6C06DD93C5FB249091FEC84FA8475457CCC4(__this, Component_GetComponent_TisCamera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184_m64AC6C06DD93C5FB249091FEC84FA8475457CCC4_RuntimeMethod_var);
		__this->___cam_5 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___cam_5), (void*)L_0);
		// Application.ExternalCall("cameraReady");
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1;
		L_1 = Array_Empty_TisRuntimeObject_m55011E8360A8199FB239A5787BA8631CDD6116FC_inline(Array_Empty_TisRuntimeObject_m55011E8360A8199FB239A5787BA8631CDD6116FC_RuntimeMethod_var);
		Application_ExternalCall_mAC569E16BBB6EF873FCECBA90823FA383D120585(_stringLiteral99187D3D262E808774C71BD63810589041809388, L_1, NULL);
		// defProj = cam.projectionMatrix;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_2 = __this->___cam_5;
		NullCheck(L_2);
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_3;
		L_3 = Camera_get_projectionMatrix_m9B943EFDD6418528A055321E14F75F1511DD9B4A(L_2, NULL);
		__this->___defProj_4 = L_3;
		// }
		return;
	}
}
// System.Void ARWT.Core.CameraController::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraController_Update_m48D2AC4231B80A2B2D8D386982C78EB7574C00A7 (CameraController_t0B540EC84654F847C56C1CA21F47B421EEAFD4B5* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral06AD5CB9EB9AF73D2A081A90D8F6591C4B23494A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral11B9C4F53A6E5D46679127787C65F0C3AEF7700C);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	{
		// if(Input.GetKeyUp(KeyCode.C)){
		bool L_0;
		L_0 = Input_GetKeyUp_m4A66DE48A7B1B25374D4FDD31208EFE43C972842(((int32_t)99), NULL);
		if (!L_0)
		{
			goto IL_004d;
		}
	}
	{
		// print("fov : " + cam.fieldOfView);
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_1 = __this->___cam_5;
		NullCheck(L_1);
		float L_2;
		L_2 = Camera_get_fieldOfView_m9A93F17BBF89F496AE231C21817AFD1C1E833FBB(L_1, NULL);
		V_0 = L_2;
		String_t* L_3;
		L_3 = Single_ToString_mE282EDA9CA4F7DF88432D807732837A629D04972((&V_0), NULL);
		String_t* L_4;
		L_4 = String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D(_stringLiteral06AD5CB9EB9AF73D2A081A90D8F6591C4B23494A, L_3, NULL);
		MonoBehaviour_print_mED815C779E369787B3E9646A6DE96FBC2944BF0B(L_4, NULL);
		// print("aspect : " + cam.aspect);
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_5 = __this->___cam_5;
		NullCheck(L_5);
		float L_6;
		L_6 = Camera_get_aspect_m48BF8820EA2D55BE0D154BC5546819FB65BE257D(L_5, NULL);
		V_0 = L_6;
		String_t* L_7;
		L_7 = Single_ToString_mE282EDA9CA4F7DF88432D807732837A629D04972((&V_0), NULL);
		String_t* L_8;
		L_8 = String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D(_stringLiteral11B9C4F53A6E5D46679127787C65F0C3AEF7700C, L_7, NULL);
		MonoBehaviour_print_mED815C779E369787B3E9646A6DE96FBC2944BF0B(L_8, NULL);
	}

IL_004d:
	{
		// }
		return;
	}
}
// System.Void ARWT.Core.CameraController::setFov(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraController_setFov_m6E85B5229D8FDF1F789BAD69A03EBC773C74EB5C (CameraController_t0B540EC84654F847C56C1CA21F47B421EEAFD4B5* __this, float ___val0, const RuntimeMethod* method) 
{
	{
		// cam.fieldOfView = val;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_0 = __this->___cam_5;
		float L_1 = ___val0;
		NullCheck(L_0);
		Camera_set_fieldOfView_m5AA9EED4D1603A1DEDBF883D9C42814B2BDEB777(L_0, L_1, NULL);
		// }
		return;
	}
}
// System.Void ARWT.Core.CameraController::setAspect(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraController_setAspect_mA84EC95CBD8460797E4987867380BF88D1ED6F1E (CameraController_t0B540EC84654F847C56C1CA21F47B421EEAFD4B5* __this, float ___val0, const RuntimeMethod* method) 
{
	{
		// cam.aspect = val;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_0 = __this->___cam_5;
		float L_1 = ___val0;
		NullCheck(L_0);
		Camera_set_aspect_m537F21B48FDD5C060DFF9D87F34F4FB2B0F9BEB6(L_0, L_1, NULL);
		// }
		return;
	}
}
// System.Void ARWT.Core.CameraController::setProjection(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraController_setProjection_m263523FE2F113444960574D9856BECAB810DE59E (CameraController_t0B540EC84654F847C56C1CA21F47B421EEAFD4B5* __this, String_t* ___val0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC18C9BB6DF0D5C60CE5A5D2D3D6111BEB6F8CCEB);
		s_Il2CppMethodInitialized = true;
	}
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 V_0;
	memset((&V_0), 0, sizeof(V_0));
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* V_1 = NULL;
	{
		// Matrix4x4 p = new Matrix4x4();
		il2cpp_codegen_initobj((&V_0), sizeof(Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6));
		// string[] proj =  val.Split(","[0]);
		String_t* L_0 = ___val0;
		NullCheck(_stringLiteralC18C9BB6DF0D5C60CE5A5D2D3D6111BEB6F8CCEB);
		Il2CppChar L_1;
		L_1 = String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3(_stringLiteralC18C9BB6DF0D5C60CE5A5D2D3D6111BEB6F8CCEB, 0, NULL);
		NullCheck(L_0);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_2;
		L_2 = String_Split_m9530B73D02054692283BF35C3A27C8F2230946F4(L_0, L_1, 0, NULL);
		V_1 = L_2;
		// p[0, 0] = float.Parse(proj[0].ToString()); //x
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_3 = V_1;
		NullCheck(L_3);
		int32_t L_4 = 0;
		String_t* L_5 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		NullCheck(L_5);
		String_t* L_6;
		L_6 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_5);
		float L_7;
		L_7 = Single_Parse_m349A7F699C77834259812ABE86909825C1F93CF4(L_6, NULL);
		Matrix4x4_set_Item_mE84FC43629907DD1872E3100BCFF4A8EB671B603_inline((&V_0), 0, 0, L_7, NULL);
		// p[0, 1] = float.Parse(proj[4].ToString());
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_8 = V_1;
		NullCheck(L_8);
		int32_t L_9 = 4;
		String_t* L_10 = (L_8)->GetAt(static_cast<il2cpp_array_size_t>(L_9));
		NullCheck(L_10);
		String_t* L_11;
		L_11 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_10);
		float L_12;
		L_12 = Single_Parse_m349A7F699C77834259812ABE86909825C1F93CF4(L_11, NULL);
		Matrix4x4_set_Item_mE84FC43629907DD1872E3100BCFF4A8EB671B603_inline((&V_0), 0, 1, L_12, NULL);
		// p[0, 2] = float.Parse(proj[8].ToString()); //a
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_13 = V_1;
		NullCheck(L_13);
		int32_t L_14 = 8;
		String_t* L_15 = (L_13)->GetAt(static_cast<il2cpp_array_size_t>(L_14));
		NullCheck(L_15);
		String_t* L_16;
		L_16 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_15);
		float L_17;
		L_17 = Single_Parse_m349A7F699C77834259812ABE86909825C1F93CF4(L_16, NULL);
		Matrix4x4_set_Item_mE84FC43629907DD1872E3100BCFF4A8EB671B603_inline((&V_0), 0, 2, L_17, NULL);
		// p[0, 3] = float.Parse(proj[12].ToString());
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_18 = V_1;
		NullCheck(L_18);
		int32_t L_19 = ((int32_t)12);
		String_t* L_20 = (L_18)->GetAt(static_cast<il2cpp_array_size_t>(L_19));
		NullCheck(L_20);
		String_t* L_21;
		L_21 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_20);
		float L_22;
		L_22 = Single_Parse_m349A7F699C77834259812ABE86909825C1F93CF4(L_21, NULL);
		Matrix4x4_set_Item_mE84FC43629907DD1872E3100BCFF4A8EB671B603_inline((&V_0), 0, 3, L_22, NULL);
		// p[1, 0] = float.Parse(proj[1].ToString());
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_23 = V_1;
		NullCheck(L_23);
		int32_t L_24 = 1;
		String_t* L_25 = (L_23)->GetAt(static_cast<il2cpp_array_size_t>(L_24));
		NullCheck(L_25);
		String_t* L_26;
		L_26 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_25);
		float L_27;
		L_27 = Single_Parse_m349A7F699C77834259812ABE86909825C1F93CF4(L_26, NULL);
		Matrix4x4_set_Item_mE84FC43629907DD1872E3100BCFF4A8EB671B603_inline((&V_0), 1, 0, L_27, NULL);
		// p[1, 1] = float.Parse(proj[5].ToString()); //y
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_28 = V_1;
		NullCheck(L_28);
		int32_t L_29 = 5;
		String_t* L_30 = (L_28)->GetAt(static_cast<il2cpp_array_size_t>(L_29));
		NullCheck(L_30);
		String_t* L_31;
		L_31 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_30);
		float L_32;
		L_32 = Single_Parse_m349A7F699C77834259812ABE86909825C1F93CF4(L_31, NULL);
		Matrix4x4_set_Item_mE84FC43629907DD1872E3100BCFF4A8EB671B603_inline((&V_0), 1, 1, L_32, NULL);
		// p[1, 2] = float.Parse(proj[9].ToString()); //b
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_33 = V_1;
		NullCheck(L_33);
		int32_t L_34 = ((int32_t)9);
		String_t* L_35 = (L_33)->GetAt(static_cast<il2cpp_array_size_t>(L_34));
		NullCheck(L_35);
		String_t* L_36;
		L_36 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_35);
		float L_37;
		L_37 = Single_Parse_m349A7F699C77834259812ABE86909825C1F93CF4(L_36, NULL);
		Matrix4x4_set_Item_mE84FC43629907DD1872E3100BCFF4A8EB671B603_inline((&V_0), 1, 2, L_37, NULL);
		// p[1, 3] = float.Parse(proj[13].ToString());
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_38 = V_1;
		NullCheck(L_38);
		int32_t L_39 = ((int32_t)13);
		String_t* L_40 = (L_38)->GetAt(static_cast<il2cpp_array_size_t>(L_39));
		NullCheck(L_40);
		String_t* L_41;
		L_41 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_40);
		float L_42;
		L_42 = Single_Parse_m349A7F699C77834259812ABE86909825C1F93CF4(L_41, NULL);
		Matrix4x4_set_Item_mE84FC43629907DD1872E3100BCFF4A8EB671B603_inline((&V_0), 1, 3, L_42, NULL);
		// p[2, 0] = float.Parse(proj[2].ToString());
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_43 = V_1;
		NullCheck(L_43);
		int32_t L_44 = 2;
		String_t* L_45 = (L_43)->GetAt(static_cast<il2cpp_array_size_t>(L_44));
		NullCheck(L_45);
		String_t* L_46;
		L_46 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_45);
		float L_47;
		L_47 = Single_Parse_m349A7F699C77834259812ABE86909825C1F93CF4(L_46, NULL);
		Matrix4x4_set_Item_mE84FC43629907DD1872E3100BCFF4A8EB671B603_inline((&V_0), 2, 0, L_47, NULL);
		// p[2, 1] = float.Parse(proj[6].ToString());
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_48 = V_1;
		NullCheck(L_48);
		int32_t L_49 = 6;
		String_t* L_50 = (L_48)->GetAt(static_cast<il2cpp_array_size_t>(L_49));
		NullCheck(L_50);
		String_t* L_51;
		L_51 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_50);
		float L_52;
		L_52 = Single_Parse_m349A7F699C77834259812ABE86909825C1F93CF4(L_51, NULL);
		Matrix4x4_set_Item_mE84FC43629907DD1872E3100BCFF4A8EB671B603_inline((&V_0), 2, 1, L_52, NULL);
		// p[2, 2] = float.Parse(proj[10].ToString()); //c
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_53 = V_1;
		NullCheck(L_53);
		int32_t L_54 = ((int32_t)10);
		String_t* L_55 = (L_53)->GetAt(static_cast<il2cpp_array_size_t>(L_54));
		NullCheck(L_55);
		String_t* L_56;
		L_56 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_55);
		float L_57;
		L_57 = Single_Parse_m349A7F699C77834259812ABE86909825C1F93CF4(L_56, NULL);
		Matrix4x4_set_Item_mE84FC43629907DD1872E3100BCFF4A8EB671B603_inline((&V_0), 2, 2, L_57, NULL);
		// p[2, 3] = float.Parse(proj[14].ToString()); //d
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_58 = V_1;
		NullCheck(L_58);
		int32_t L_59 = ((int32_t)14);
		String_t* L_60 = (L_58)->GetAt(static_cast<il2cpp_array_size_t>(L_59));
		NullCheck(L_60);
		String_t* L_61;
		L_61 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_60);
		float L_62;
		L_62 = Single_Parse_m349A7F699C77834259812ABE86909825C1F93CF4(L_61, NULL);
		Matrix4x4_set_Item_mE84FC43629907DD1872E3100BCFF4A8EB671B603_inline((&V_0), 2, 3, L_62, NULL);
		// p[3, 0] = float.Parse(proj[3].ToString());
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_63 = V_1;
		NullCheck(L_63);
		int32_t L_64 = 3;
		String_t* L_65 = (L_63)->GetAt(static_cast<il2cpp_array_size_t>(L_64));
		NullCheck(L_65);
		String_t* L_66;
		L_66 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_65);
		float L_67;
		L_67 = Single_Parse_m349A7F699C77834259812ABE86909825C1F93CF4(L_66, NULL);
		Matrix4x4_set_Item_mE84FC43629907DD1872E3100BCFF4A8EB671B603_inline((&V_0), 3, 0, L_67, NULL);
		// p[3, 1] = float.Parse(proj[7].ToString());
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_68 = V_1;
		NullCheck(L_68);
		int32_t L_69 = 7;
		String_t* L_70 = (L_68)->GetAt(static_cast<il2cpp_array_size_t>(L_69));
		NullCheck(L_70);
		String_t* L_71;
		L_71 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_70);
		float L_72;
		L_72 = Single_Parse_m349A7F699C77834259812ABE86909825C1F93CF4(L_71, NULL);
		Matrix4x4_set_Item_mE84FC43629907DD1872E3100BCFF4A8EB671B603_inline((&V_0), 3, 1, L_72, NULL);
		// p[3, 2] = float.Parse(proj[11].ToString()); //e
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_73 = V_1;
		NullCheck(L_73);
		int32_t L_74 = ((int32_t)11);
		String_t* L_75 = (L_73)->GetAt(static_cast<il2cpp_array_size_t>(L_74));
		NullCheck(L_75);
		String_t* L_76;
		L_76 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_75);
		float L_77;
		L_77 = Single_Parse_m349A7F699C77834259812ABE86909825C1F93CF4(L_76, NULL);
		Matrix4x4_set_Item_mE84FC43629907DD1872E3100BCFF4A8EB671B603_inline((&V_0), 3, 2, L_77, NULL);
		// p[3, 3] = float.Parse(proj[15].ToString());
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_78 = V_1;
		NullCheck(L_78);
		int32_t L_79 = ((int32_t)15);
		String_t* L_80 = (L_78)->GetAt(static_cast<il2cpp_array_size_t>(L_79));
		NullCheck(L_80);
		String_t* L_81;
		L_81 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_80);
		float L_82;
		L_82 = Single_Parse_m349A7F699C77834259812ABE86909825C1F93CF4(L_81, NULL);
		Matrix4x4_set_Item_mE84FC43629907DD1872E3100BCFF4A8EB671B603_inline((&V_0), 3, 3, L_82, NULL);
		// p[2, 2] = defProj[10];
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6* L_83 = (&__this->___defProj_4);
		float L_84;
		L_84 = Matrix4x4_get_Item_m771C2EE3A3BFFBAC9F2AD07FFCAAF6146C1BE92A(L_83, ((int32_t)10), NULL);
		Matrix4x4_set_Item_mE84FC43629907DD1872E3100BCFF4A8EB671B603_inline((&V_0), 2, 2, L_84, NULL);
		// p[2, 3] = defProj[14];
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6* L_85 = (&__this->___defProj_4);
		float L_86;
		L_86 = Matrix4x4_get_Item_m771C2EE3A3BFFBAC9F2AD07FFCAAF6146C1BE92A(L_85, ((int32_t)14), NULL);
		Matrix4x4_set_Item_mE84FC43629907DD1872E3100BCFF4A8EB671B603_inline((&V_0), 2, 3, L_86, NULL);
		// cam.projectionMatrix = p;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_87 = __this->___cam_5;
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_88 = V_0;
		NullCheck(L_87);
		Camera_set_projectionMatrix_m351820E6903139402FFFF40221B32D0C52B5A094(L_87, L_88, NULL);
		// }
		return;
	}
}
// System.Void ARWT.Core.CameraController::setPosition(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraController_setPosition_mC77A9D4AD57BD57DE973D79797572E64C714BDAA (CameraController_t0B540EC84654F847C56C1CA21F47B421EEAFD4B5* __this, String_t* ___val0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC18C9BB6DF0D5C60CE5A5D2D3D6111BEB6F8CCEB);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	{
		// string[] pos =  val.Split(","[0]);
		String_t* L_0 = ___val0;
		NullCheck(_stringLiteralC18C9BB6DF0D5C60CE5A5D2D3D6111BEB6F8CCEB);
		Il2CppChar L_1;
		L_1 = String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3(_stringLiteralC18C9BB6DF0D5C60CE5A5D2D3D6111BEB6F8CCEB, 0, NULL);
		NullCheck(L_0);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_2;
		L_2 = String_Split_m9530B73D02054692283BF35C3A27C8F2230946F4(L_0, L_1, 0, NULL);
		// float x = float.Parse(pos[0].ToString());
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_3 = L_2;
		NullCheck(L_3);
		int32_t L_4 = 0;
		String_t* L_5 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		NullCheck(L_5);
		String_t* L_6;
		L_6 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_5);
		float L_7;
		L_7 = Single_Parse_m349A7F699C77834259812ABE86909825C1F93CF4(L_6, NULL);
		V_0 = L_7;
		// float y = float.Parse(pos[1].ToString());
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_8 = L_3;
		NullCheck(L_8);
		int32_t L_9 = 1;
		String_t* L_10 = (L_8)->GetAt(static_cast<il2cpp_array_size_t>(L_9));
		NullCheck(L_10);
		String_t* L_11;
		L_11 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_10);
		float L_12;
		L_12 = Single_Parse_m349A7F699C77834259812ABE86909825C1F93CF4(L_11, NULL);
		V_1 = L_12;
		// float z = float.Parse(pos[2].ToString());
		NullCheck(L_8);
		int32_t L_13 = 2;
		String_t* L_14 = (L_8)->GetAt(static_cast<il2cpp_array_size_t>(L_13));
		NullCheck(L_14);
		String_t* L_15;
		L_15 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_14);
		float L_16;
		L_16 = Single_Parse_m349A7F699C77834259812ABE86909825C1F93CF4(L_15, NULL);
		V_2 = L_16;
		// transform.position = new Vector3(x, y, z);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_17;
		L_17 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		float L_18 = V_0;
		float L_19 = V_1;
		float L_20 = V_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_21;
		memset((&L_21), 0, sizeof(L_21));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_21), L_18, L_19, L_20, /*hidden argument*/NULL);
		NullCheck(L_17);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_17, L_21, NULL);
		// }
		return;
	}
}
// System.Void ARWT.Core.CameraController::setRotation(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraController_setRotation_m0A2D78192CC8320B8CEDEAF96A2AF990D03D57DE (CameraController_t0B540EC84654F847C56C1CA21F47B421EEAFD4B5* __this, String_t* ___val0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC18C9BB6DF0D5C60CE5A5D2D3D6111BEB6F8CCEB);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	{
		// string[] rot =  val.Split(","[0]);
		String_t* L_0 = ___val0;
		NullCheck(_stringLiteralC18C9BB6DF0D5C60CE5A5D2D3D6111BEB6F8CCEB);
		Il2CppChar L_1;
		L_1 = String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3(_stringLiteralC18C9BB6DF0D5C60CE5A5D2D3D6111BEB6F8CCEB, 0, NULL);
		NullCheck(L_0);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_2;
		L_2 = String_Split_m9530B73D02054692283BF35C3A27C8F2230946F4(L_0, L_1, 0, NULL);
		// float x = float.Parse(rot[0].ToString());
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_3 = L_2;
		NullCheck(L_3);
		int32_t L_4 = 0;
		String_t* L_5 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		NullCheck(L_5);
		String_t* L_6;
		L_6 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_5);
		float L_7;
		L_7 = Single_Parse_m349A7F699C77834259812ABE86909825C1F93CF4(L_6, NULL);
		V_0 = L_7;
		// float y = float.Parse(rot[1].ToString());
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_8 = L_3;
		NullCheck(L_8);
		int32_t L_9 = 1;
		String_t* L_10 = (L_8)->GetAt(static_cast<il2cpp_array_size_t>(L_9));
		NullCheck(L_10);
		String_t* L_11;
		L_11 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_10);
		float L_12;
		L_12 = Single_Parse_m349A7F699C77834259812ABE86909825C1F93CF4(L_11, NULL);
		V_1 = L_12;
		// float z = float.Parse(rot[2].ToString());
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_13 = L_8;
		NullCheck(L_13);
		int32_t L_14 = 2;
		String_t* L_15 = (L_13)->GetAt(static_cast<il2cpp_array_size_t>(L_14));
		NullCheck(L_15);
		String_t* L_16;
		L_16 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_15);
		float L_17;
		L_17 = Single_Parse_m349A7F699C77834259812ABE86909825C1F93CF4(L_16, NULL);
		V_2 = L_17;
		// float w = float.Parse(rot[3].ToString());
		NullCheck(L_13);
		int32_t L_18 = 3;
		String_t* L_19 = (L_13)->GetAt(static_cast<il2cpp_array_size_t>(L_18));
		NullCheck(L_19);
		String_t* L_20;
		L_20 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_19);
		float L_21;
		L_21 = Single_Parse_m349A7F699C77834259812ABE86909825C1F93CF4(L_20, NULL);
		V_3 = L_21;
		// transform.rotation = new Quaternion(x, y, z,w);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_22;
		L_22 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		float L_23 = V_0;
		float L_24 = V_1;
		float L_25 = V_2;
		float L_26 = V_3;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_27;
		memset((&L_27), 0, sizeof(L_27));
		Quaternion__ctor_m868FD60AA65DD5A8AC0C5DEB0608381A8D85FCD8_inline((&L_27), L_23, L_24, L_25, L_26, /*hidden argument*/NULL);
		NullCheck(L_22);
		Transform_set_rotation_m61340DE74726CF0F9946743A727C4D444397331D(L_22, L_27, NULL);
		// }
		return;
	}
}
// System.Void ARWT.Core.CameraController::setEuler(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraController_setEuler_m4F71DC7B89B1B3415D4B741BA3BAC2CA7628DE06 (CameraController_t0B540EC84654F847C56C1CA21F47B421EEAFD4B5* __this, String_t* ___val0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC18C9BB6DF0D5C60CE5A5D2D3D6111BEB6F8CCEB);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	{
		// string[] rot =  val.Split(","[0]);
		String_t* L_0 = ___val0;
		NullCheck(_stringLiteralC18C9BB6DF0D5C60CE5A5D2D3D6111BEB6F8CCEB);
		Il2CppChar L_1;
		L_1 = String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3(_stringLiteralC18C9BB6DF0D5C60CE5A5D2D3D6111BEB6F8CCEB, 0, NULL);
		NullCheck(L_0);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_2;
		L_2 = String_Split_m9530B73D02054692283BF35C3A27C8F2230946F4(L_0, L_1, 0, NULL);
		// float x = float.Parse(rot[0].ToString());
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_3 = L_2;
		NullCheck(L_3);
		int32_t L_4 = 0;
		String_t* L_5 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		NullCheck(L_5);
		String_t* L_6;
		L_6 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_5);
		float L_7;
		L_7 = Single_Parse_m349A7F699C77834259812ABE86909825C1F93CF4(L_6, NULL);
		V_0 = L_7;
		// float y = float.Parse(rot[1].ToString());
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_8 = L_3;
		NullCheck(L_8);
		int32_t L_9 = 1;
		String_t* L_10 = (L_8)->GetAt(static_cast<il2cpp_array_size_t>(L_9));
		NullCheck(L_10);
		String_t* L_11;
		L_11 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_10);
		float L_12;
		L_12 = Single_Parse_m349A7F699C77834259812ABE86909825C1F93CF4(L_11, NULL);
		V_1 = L_12;
		// float z = float.Parse(rot[2].ToString());
		NullCheck(L_8);
		int32_t L_13 = 2;
		String_t* L_14 = (L_8)->GetAt(static_cast<il2cpp_array_size_t>(L_13));
		NullCheck(L_14);
		String_t* L_15;
		L_15 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_14);
		float L_16;
		L_16 = Single_Parse_m349A7F699C77834259812ABE86909825C1F93CF4(L_15, NULL);
		V_2 = L_16;
		// transform.eulerAngles = new Vector3(x, y, z);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_17;
		L_17 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		float L_18 = V_0;
		float L_19 = V_1;
		float L_20 = V_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_21;
		memset((&L_21), 0, sizeof(L_21));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_21), L_18, L_19, L_20, /*hidden argument*/NULL);
		NullCheck(L_17);
		Transform_set_eulerAngles_m9F0BC484A7915A51FAB87230644229B75BACA004(L_17, L_21, NULL);
		// }
		return;
	}
}
// System.Void ARWT.Core.CameraController::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraController__ctor_mBC97DA7428BAA91114C4A7E23E178AFE6D79643B (CameraController_t0B540EC84654F847C56C1CA21F47B421EEAFD4B5* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void ARWT.Core.PostBuildActions::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PostBuildActions__ctor_m9A38A4676F1B1C4AC79E6B27D2A9ADD892AA026F (PostBuildActions_t9E7519FD8BFA04819D698562F818BBE611E8218A* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
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
// System.Void ARWT.Core.FPSDisplay::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FPSDisplay_Update_mF9AA3284112B832BC2450B5D421449D153556092 (FPSDisplay_tB19E85610E87C89C0B0DD56FCD19F90DE901A1F9* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCA865455948A6585C99F08AAE4C564A0F4992F78);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	String_t* V_2 = NULL;
	{
		// deltaTime += (Time.unscaledDeltaTime - deltaTime) * 0.1f;
		float L_0 = __this->___deltaTime_5;
		float L_1;
		L_1 = Time_get_unscaledDeltaTime_m89252D23CC5AA295CFA4EB2BCB417A831AC51652(NULL);
		float L_2 = __this->___deltaTime_5;
		__this->___deltaTime_5 = ((float)il2cpp_codegen_add(L_0, ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract(L_1, L_2)), (0.100000001f)))));
		// float msec = deltaTime * 1000.0f;
		float L_3 = __this->___deltaTime_5;
		V_0 = ((float)il2cpp_codegen_multiply(L_3, (1000.0f)));
		// float fps = 1.0f / deltaTime;
		float L_4 = __this->___deltaTime_5;
		V_1 = ((float)((1.0f)/L_4));
		// string text = string.Format("{0:0.0} ms ({1:0.} fps)", msec, fps);
		float L_5 = V_0;
		float L_6 = L_5;
		RuntimeObject* L_7 = Box(Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var, &L_6);
		float L_8 = V_1;
		float L_9 = L_8;
		RuntimeObject* L_10 = Box(Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var, &L_9);
		String_t* L_11;
		L_11 = String_Format_m9499958F4B0BB6089C75760AB647AB3CA4D55806(_stringLiteralCA865455948A6585C99F08AAE4C564A0F4992F78, L_7, L_10, NULL);
		V_2 = L_11;
		// fpsText.text = text;
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_12 = __this->___fpsText_4;
		String_t* L_13 = V_2;
		NullCheck(L_12);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_12, L_13);
		// }
		return;
	}
}
// System.Void ARWT.Core.FPSDisplay::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FPSDisplay__ctor_m4773881E55FB486DF386E9FC67946B3E4A0339B5 (FPSDisplay_tB19E85610E87C89C0B0DD56FCD19F90DE901A1F9* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 NavigationController_get_TargetPosition_m2BA98D0EB195B580AD14C3B04A680DEF2C47C60D_inline (NavigationController_t70EC9C7C9A12D38AD5902657C952B7B5B09985B8* __this, const RuntimeMethod* method) 
{
	{
		// public Vector3 TargetPosition { get; set; } = Vector3.zero; /// Position of the selected target.
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = __this->___U3CTargetPositionU3Ek__BackingField_4;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_zero_m9D7F7B580B5A276411267E96AA3425736D9BDC83_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ((Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields*)il2cpp_codegen_static_fields_for(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var))->___zeroVector_5;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Vector3_op_Inequality_m6A7FB1C9E9DE194708997BFA24C6E238D92D908E_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___lhs0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___rhs1, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___lhs0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = ___rhs1;
		bool L_2;
		L_2 = Vector3_op_Equality_m15951D1B53E3BE36C9D265E229090020FBD72EBB_inline(L_0, L_1, NULL);
		V_0 = (bool)((((int32_t)L_2) == ((int32_t)0))? 1 : 0);
		goto IL_000e;
	}

IL_000e:
	{
		bool L_3 = V_0;
		return L_3;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method) 
{
	{
		float L_0 = ___x0;
		__this->___x_2 = L_0;
		float L_1 = ___y1;
		__this->___y_3 = L_1;
		float L_2 = ___z2;
		__this->___z_4 = L_2;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Addition_m087D6F0EC60843D455F9F83D25FE42B2433AAD1D_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___a0;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___b1;
		float L_3 = L_2.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___a0;
		float L_5 = L_4.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___b1;
		float L_7 = L_6.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___a0;
		float L_9 = L_8.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___b1;
		float L_11 = L_10.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12;
		memset((&L_12), 0, sizeof(L_12));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_12), ((float)il2cpp_codegen_add(L_1, L_3)), ((float)il2cpp_codegen_add(L_5, L_7)), ((float)il2cpp_codegen_add(L_9, L_11)), /*hidden argument*/NULL);
		V_0 = L_12;
		goto IL_0030;
	}

IL_0030:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13 = V_0;
		return L_13;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* InputField_get_text_m6E0796350FF559505E4DF17311803962699D6704_inline (InputField_tABEA115F23FBD374EBE80D4FAC1D15BD6E37A140* __this, const RuntimeMethod* method) 
{
	{
		// return m_Text;
		String_t* L_0 = __this->___m_Text_39;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Clamp01_mD921B23F47F5347996C56DC789D1DE16EE27D9B1_inline (float ___value0, const RuntimeMethod* method) 
{
	bool V_0 = false;
	float V_1 = 0.0f;
	bool V_2 = false;
	{
		float L_0 = ___value0;
		V_0 = (bool)((((float)L_0) < ((float)(0.0f)))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		V_1 = (0.0f);
		goto IL_002d;
	}

IL_0015:
	{
		float L_2 = ___value0;
		V_2 = (bool)((((float)L_2) > ((float)(1.0f)))? 1 : 0);
		bool L_3 = V_2;
		if (!L_3)
		{
			goto IL_0029;
		}
	}
	{
		V_1 = (1.0f);
		goto IL_002d;
	}

IL_0029:
	{
		float L_4 = ___value0;
		V_1 = L_4;
		goto IL_002d;
	}

IL_002d:
	{
		float L_5 = V_1;
		return L_5;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color32_op_Implicit_m203A634DBB77053C9400C68065CA29529103D172_inline (Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___c0, const RuntimeMethod* method) 
{
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_0 = ___c0;
		uint8_t L_1 = L_0.___r_1;
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_2 = ___c0;
		uint8_t L_3 = L_2.___g_2;
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_4 = ___c0;
		uint8_t L_5 = L_4.___b_3;
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_6 = ___c0;
		uint8_t L_7 = L_6.___a_4;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_8;
		memset((&L_8), 0, sizeof(L_8));
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&L_8), ((float)(((float)L_1)/(255.0f))), ((float)(((float)L_3)/(255.0f))), ((float)(((float)L_5)/(255.0f))), ((float)(((float)L_7)/(255.0f))), /*hidden argument*/NULL);
		V_0 = L_8;
		goto IL_003d;
	}

IL_003d:
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_9 = V_0;
		return L_9;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_Lerp_mCE0CF50E59713C5A8F6AAC2C6648CF0EDBEEB27B_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___a0, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___b1, float ___t2, const RuntimeMethod* method) 
{
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		float L_0 = ___t2;
		float L_1;
		L_1 = Mathf_Clamp01_mD921B23F47F5347996C56DC789D1DE16EE27D9B1_inline(L_0, NULL);
		___t2 = L_1;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_2 = ___a0;
		float L_3 = L_2.___r_0;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_4 = ___b1;
		float L_5 = L_4.___r_0;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_6 = ___a0;
		float L_7 = L_6.___r_0;
		float L_8 = ___t2;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_9 = ___a0;
		float L_10 = L_9.___g_1;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_11 = ___b1;
		float L_12 = L_11.___g_1;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_13 = ___a0;
		float L_14 = L_13.___g_1;
		float L_15 = ___t2;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_16 = ___a0;
		float L_17 = L_16.___b_2;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_18 = ___b1;
		float L_19 = L_18.___b_2;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_20 = ___a0;
		float L_21 = L_20.___b_2;
		float L_22 = ___t2;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_23 = ___a0;
		float L_24 = L_23.___a_3;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_25 = ___b1;
		float L_26 = L_25.___a_3;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_27 = ___a0;
		float L_28 = L_27.___a_3;
		float L_29 = ___t2;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_30;
		memset((&L_30), 0, sizeof(L_30));
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&L_30), ((float)il2cpp_codegen_add(L_3, ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract(L_5, L_7)), L_8)))), ((float)il2cpp_codegen_add(L_10, ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract(L_12, L_14)), L_15)))), ((float)il2cpp_codegen_add(L_17, ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract(L_19, L_21)), L_22)))), ((float)il2cpp_codegen_add(L_24, ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract(L_26, L_28)), L_29)))), /*hidden argument*/NULL);
		V_0 = L_30;
		goto IL_0069;
	}

IL_0069:
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_31 = V_0;
		return L_31;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Color32__ctor_mC9C6B443F0C7CA3F8B174158B2AF6F05E18EAC4E_inline (Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B* __this, uint8_t ___r0, uint8_t ___g1, uint8_t ___b2, uint8_t ___a3, const RuntimeMethod* method) 
{
	{
		__this->___rgba_0 = 0;
		uint8_t L_0 = ___r0;
		__this->___r_1 = L_0;
		uint8_t L_1 = ___g1;
		__this->___g_2 = L_1;
		uint8_t L_2 = ___b2;
		__this->___b_3 = L_2;
		uint8_t L_3 = ___a3;
		__this->___a_4 = L_3;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ConversionParams_set_inputRect_m7965864AED4C5176D58F3766D6BBB35DFF7BC903_inline (ConversionParams_t062706B15E2C508C54473A1FD72013C4381CCB62* __this, RectInt_t1744D10E1063135DA9D574F95205B98DAC600CB8 ___value0, const RuntimeMethod* method) 
{
	{
		// set => m_InputRect = value;
		RectInt_t1744D10E1063135DA9D574F95205B98DAC600CB8 L_0 = ___value0;
		__this->___m_InputRect_0 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2Int__ctor_mC20D1312133EB8CB63EC11067088B043660F11CE_inline (Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A* __this, int32_t ___x0, int32_t ___y1, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___x0;
		__this->___m_X_0 = L_0;
		int32_t L_1 = ___y1;
		__this->___m_Y_1 = L_1;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ConversionParams_set_outputDimensions_m97EC09EE536EA456A18894311BF75AC9D5A90A3B_inline (ConversionParams_t062706B15E2C508C54473A1FD72013C4381CCB62* __this, Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A ___value0, const RuntimeMethod* method) 
{
	{
		// set => m_OutputDimensions = value;
		Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A L_0 = ___value0;
		__this->___m_OutputDimensions_1 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ConversionParams_set_outputFormat_mA82EA0ECC19D14AECBA318B9B485D08CFB46A1F4_inline (ConversionParams_t062706B15E2C508C54473A1FD72013C4381CCB62* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	{
		// set => m_Format = value;
		int32_t L_0 = ___value0;
		__this->___m_Format_2 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ConversionParams_set_transformation_mBCE73B14CCE8A31A258C6B8F6104446A2D495A0F_inline (ConversionParams_t062706B15E2C508C54473A1FD72013C4381CCB62* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	{
		// set => m_Transformation = value;
		int32_t L_0 = ___value0;
		__this->___m_Transformation_3 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A ConversionParams_get_outputDimensions_m6295F96DCE9B406AB6D79E8CD86A6FF388CF5035_inline (ConversionParams_t062706B15E2C508C54473A1FD72013C4381CCB62* __this, const RuntimeMethod* method) 
{
	{
		// get => m_OutputDimensions;
		Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A L_0 = __this->___m_OutputDimensions_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Vector2Int_get_x_mA2CACB1B6E6B5AD0CCC32B2CD2EDCE3ECEB50576_inline (Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->___m_X_0;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		int32_t L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Vector2Int_get_y_m48454163ECF0B463FB5A16A0C4FC4B14DB0768B3_inline (Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->___m_Y_1;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		int32_t L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t ConversionParams_get_outputFormat_m8CD52ADADE8FFE505A90E02D9BD6C7D9EE1C8715_inline (ConversionParams_t062706B15E2C508C54473A1FD72013C4381CCB62* __this, const RuntimeMethod* method) 
{
	{
		// get => m_Format;
		int32_t L_0 = __this->___m_Format_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* Result_get_Text_m65A52D001505F5311D513F3CDD86D3BB72103E89_inline (Result_tF578DE3ECC8EB51CFB66605B8ADCD433C837EBAF* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___U3CTextU3Ek__BackingField_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR double Math_Round_mAE7072AE69091258FAA8BD5923CE4A0E492B5B7D_inline (double ___value0, int32_t ___digits1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		double L_0 = ___value0;
		int32_t L_1 = ___digits1;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_2;
		L_2 = Math_Round_mA90F6B1668D55BC6C538EBF0302B30E406E242B0(L_0, L_1, 0, NULL);
		return L_2;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline (String_t* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____stringLength_4;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t TMP_Dropdown_get_value_m5916A6D1897431E8ED789FEC24551A311D1B5C70_inline (TMP_Dropdown_t73B37BFDA0D005451C7B750938AFB1748E5EA504* __this, const RuntimeMethod* method) 
{
	{
		// return m_Value;
		int32_t L_0 = __this->___m_Value_26;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* OptionData_get_text_m2E822D5D50B597BFBA7AB3485EF15B526A726A1A_inline (OptionData_tFDFBCB4A5FB860E95AE46FDAC112DB4140A8525E* __this, const RuntimeMethod* method) 
{
	{
		// public string text { get { return m_Text; } set { m_Text = value; } }
		String_t* L_0 = __this->___m_Text_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void NavigationController_set_TargetPosition_m0673F8F68766F112505E5C70114786D362CCCA70_inline (NavigationController_t70EC9C7C9A12D38AD5902657C952B7B5B09985B8* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) 
{
	{
		// public Vector3 TargetPosition { get; set; } = Vector3.zero; /// Position of the selected target.
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___value0;
		__this->___U3CTargetPositionU3Ek__BackingField_4 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void OptionData_set_text_mFF1E8A215A399CB9EA9DDFB0C6F3B9F068837226_inline (OptionData_tFDFBCB4A5FB860E95AE46FDAC112DB4140A8525E* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		// public string text { get { return m_Text; } set { m_Text = value; } }
		String_t* L_0 = ___value0;
		__this->___m_Text_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Text_0), (void*)L_0);
		// public string text { get { return m_Text; } set { m_Text = value; } }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void WebGLInput_set_CanvasId_m15A832E612CDD43815FD67279F5E879CE6277988_inline (String_t* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WebGLInput_t20A7ED221656A06B7688C4010D4E7E8E74C4CE16_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static string CanvasId { get; set; }
		String_t* L_0 = ___value0;
		il2cpp_codegen_runtime_class_init_inline(WebGLInput_t20A7ED221656A06B7688C4010D4E7E8E74C4CE16_il2cpp_TypeInfo_var);
		((WebGLInput_t20A7ED221656A06B7688C4010D4E7E8E74C4CE16_StaticFields*)il2cpp_codegen_static_fields_for(WebGLInput_t20A7ED221656A06B7688C4010D4E7E8E74C4CE16_il2cpp_TypeInfo_var))->___U3CCanvasIdU3Ek__BackingField_5 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((WebGLInput_t20A7ED221656A06B7688C4010D4E7E8E74C4CE16_StaticFields*)il2cpp_codegen_static_fields_for(WebGLInput_t20A7ED221656A06B7688C4010D4E7E8E74C4CE16_il2cpp_TypeInfo_var))->___U3CCanvasIdU3Ek__BackingField_5), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Mathf_Max_m8A4C189A6749DFE3ED8B66D9D3CACD8DB333974F_inline (int32_t ___a0, int32_t ___b1, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t G_B3_0 = 0;
	{
		int32_t L_0 = ___a0;
		int32_t L_1 = ___b1;
		if ((((int32_t)L_0) > ((int32_t)L_1)))
		{
			goto IL_0008;
		}
	}
	{
		int32_t L_2 = ___b1;
		G_B3_0 = L_2;
		goto IL_0009;
	}

IL_0008:
	{
		int32_t L_3 = ___a0;
		G_B3_0 = L_3;
	}

IL_0009:
	{
		V_0 = G_B3_0;
		goto IL_000c;
	}

IL_000c:
	{
		int32_t L_4 = V_0;
		return L_4;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* WebGLInput_get_CanvasId_mCE5D4CCA8E8D30C50D142C5238FB889AAEFBEF83_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WebGLInput_t20A7ED221656A06B7688C4010D4E7E8E74C4CE16_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static string CanvasId { get; set; }
		il2cpp_codegen_runtime_class_init_inline(WebGLInput_t20A7ED221656A06B7688C4010D4E7E8E74C4CE16_il2cpp_TypeInfo_var);
		String_t* L_0 = ((WebGLInput_t20A7ED221656A06B7688C4010D4E7E8E74C4CE16_StaticFields*)il2cpp_codegen_static_fields_for(WebGLInput_t20A7ED221656A06B7688C4010D4E7E8E74C4CE16_il2cpp_TypeInfo_var))->___U3CCanvasIdU3Ek__BackingField_5;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m5F87930F9B0828E5652E2D9D01ED907C01122C86_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___x0, float ___y1, const RuntimeMethod* method) 
{
	{
		float L_0 = ___x0;
		__this->___x_2 = L_0;
		float L_1 = ___y1;
		__this->___y_3 = L_1;
		__this->___z_4 = (0.0f);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Min_m4F2A9C5128DC3F9E84865EE7ADA8DB5DA6B8B507_inline (float ___a0, float ___b1, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	float G_B3_0 = 0.0f;
	{
		float L_0 = ___a0;
		float L_1 = ___b1;
		if ((((float)L_0) < ((float)L_1)))
		{
			goto IL_0008;
		}
	}
	{
		float L_2 = ___b1;
		G_B3_0 = L_2;
		goto IL_0009;
	}

IL_0008:
	{
		float L_3 = ___a0;
		G_B3_0 = L_3;
	}

IL_0009:
	{
		V_0 = G_B3_0;
		goto IL_000c;
	}

IL_000c:
	{
		float L_4 = V_0;
		return L_4;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Max_mA9DCA91E87D6D27034F56ABA52606A9090406016_inline (float ___a0, float ___b1, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	float G_B3_0 = 0.0f;
	{
		float L_0 = ___a0;
		float L_1 = ___b1;
		if ((((float)L_0) > ((float)L_1)))
		{
			goto IL_0008;
		}
	}
	{
		float L_2 = ___b1;
		G_B3_0 = L_2;
		goto IL_0009;
	}

IL_0008:
	{
		float L_3 = ___a0;
		G_B3_0 = L_3;
	}

IL_0009:
	{
		V_0 = G_B3_0;
		goto IL_000c;
	}

IL_000c:
	{
		float L_4 = V_0;
		return L_4;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* EventSystem_get_currentSelectedGameObject_mD606FFACF3E72755298A523CBB709535CF08C98A_inline (EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707* __this, const RuntimeMethod* method) 
{
	{
		// get { return m_CurrentSelected; }
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___m_CurrentSelected_10;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool InputField_get_readOnly_m37800B8623CB744D99E5F5607C80AEBE6C7043B3_inline (InputField_tABEA115F23FBD374EBE80D4FAC1D15BD6E37A140* __this, const RuntimeMethod* method) 
{
	{
		// public bool readOnly { get { return m_ReadOnly; } set { m_ReadOnly = value; } }
		bool L_0 = __this->___m_ReadOnly_42;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931* InputField_get_placeholder_m84C2F2E414B8A03B372C7CEB3C97A2AE72F3A39F_inline (InputField_tABEA115F23FBD374EBE80D4FAC1D15BD6E37A140* __this, const RuntimeMethod* method) 
{
	{
		// public Graphic placeholder { get { return m_Placeholder; } set { SetPropertyUtility.SetClass(ref m_Placeholder, value); } }
		Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931* L_0 = __this->___m_Placeholder_23;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* InputField_get_textComponent_m319EF4B9B24056AF25327874A2455362FF7B7A85_inline (InputField_tABEA115F23FBD374EBE80D4FAC1D15BD6E37A140* __this, const RuntimeMethod* method) 
{
	{
		// get { return m_TextComponent; }
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_0 = __this->___m_TextComponent_22;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t InputField_get_contentType_m8C589B15987EB8852D5F4948A79084186935B19B_inline (InputField_tABEA115F23FBD374EBE80D4FAC1D15BD6E37A140* __this, const RuntimeMethod* method) 
{
	{
		// public ContentType contentType { get { return m_ContentType; } set { if (SetPropertyUtility.SetStruct(ref m_ContentType, value)) EnforceContentType(); } }
		int32_t L_0 = __this->___m_ContentType_24;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t InputField_get_lineType_m6CEA63D8FCACAEC05D3499577ED0771EFFF33377_inline (InputField_tABEA115F23FBD374EBE80D4FAC1D15BD6E37A140* __this, const RuntimeMethod* method) 
{
	{
		// get { return m_LineType; }
		int32_t L_0 = __this->___m_LineType_28;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t InputField_get_characterLimit_m7FE26FC66741545B89BFFDCAD8E8B34EB1274403_inline (InputField_tABEA115F23FBD374EBE80D4FAC1D15BD6E37A140* __this, const RuntimeMethod* method) 
{
	{
		// get { return m_CharacterLimit; }
		int32_t L_0 = __this->___m_CharacterLimit_31;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool InputField_get_isFocused_m19BD51E842077CA087824025F294C4078B2DAC50_inline (InputField_tABEA115F23FBD374EBE80D4FAC1D15BD6E37A140* __this, const RuntimeMethod* method) 
{
	{
		// get { return m_AllowInput; }
		bool L_0 = __this->___m_AllowInput_52;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TMP_InputField_get_readOnly_m551BFA0AB64EBD12F49C0993305274BC8176E0A5_inline (TMP_InputField_t3488E0EE8C3DF56C6A328EC95D1BEEA2DF4A7D5F* __this, const RuntimeMethod* method) 
{
	{
		// public bool readOnly { get { return m_ReadOnly; } set { m_ReadOnly = value; } }
		bool L_0 = __this->___m_ReadOnly_63;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* TMP_InputField_get_text_mA4ACBF52435893D9DFD822A492454301740B3C6A_inline (TMP_InputField_t3488E0EE8C3DF56C6A328EC95D1BEEA2DF4A7D5F* __this, const RuntimeMethod* method) 
{
	{
		// return m_Text;
		String_t* L_0 = __this->___m_Text_60;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t TMP_InputField_get_contentType_m32EEDFC275E9CB6C759A4F117EBAA40336B9030D_inline (TMP_InputField_t3488E0EE8C3DF56C6A328EC95D1BEEA2DF4A7D5F* __this, const RuntimeMethod* method) 
{
	{
		// public ContentType contentType { get { return m_ContentType; } set { if (SetPropertyUtility.SetStruct(ref m_ContentType, value)) EnforceContentType(); } }
		int32_t L_0 = __this->___m_ContentType_37;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t TMP_InputField_get_lineType_mE221F133A310EB6C93DA24E1F5900E948771D64C_inline (TMP_InputField_t3488E0EE8C3DF56C6A328EC95D1BEEA2DF4A7D5F* __this, const RuntimeMethod* method) 
{
	{
		// get { return m_LineType; }
		int32_t L_0 = __this->___m_LineType_41;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t TMP_InputField_get_inputType_m93A6CC8FF76412F46471D91952323CE4C63B7D34_inline (TMP_InputField_t3488E0EE8C3DF56C6A328EC95D1BEEA2DF4A7D5F* __this, const RuntimeMethod* method) 
{
	{
		// public InputType inputType { get { return m_InputType; } set { if (SetPropertyUtility.SetStruct(ref m_InputType, value)) SetToCustom(); } }
		int32_t L_0 = __this->___m_InputType_38;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t TMP_InputField_get_keyboardType_m8B616A743B2FAB03C6263F1582171BB390F94F8B_inline (TMP_InputField_t3488E0EE8C3DF56C6A328EC95D1BEEA2DF4A7D5F* __this, const RuntimeMethod* method) 
{
	{
		// get { return m_KeyboardType; }
		int32_t L_0 = __this->___m_KeyboardType_40;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t TMP_InputField_get_characterValidation_m57E36C62FC9E23DB17F440BA4325A314EF0B0679_inline (TMP_InputField_t3488E0EE8C3DF56C6A328EC95D1BEEA2DF4A7D5F* __this, const RuntimeMethod* method) 
{
	{
		// public CharacterValidation characterValidation { get { return m_CharacterValidation; } set { if (SetPropertyUtility.SetStruct(ref m_CharacterValidation, value)) SetToCustom(); } }
		int32_t L_0 = __this->___m_CharacterValidation_44;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t TMP_InputField_get_characterLimit_m59833E0A22BACBDF3EDA6A70A30B87272FBAA409_inline (TMP_InputField_t3488E0EE8C3DF56C6A328EC95D1BEEA2DF4A7D5F* __this, const RuntimeMethod* method) 
{
	{
		// get { return m_CharacterLimit; }
		int32_t L_0 = __this->___m_CharacterLimit_47;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931* TMP_InputField_get_placeholder_m6C5FDEB031E2900A1792B928E4864B21B144AB3C_inline (TMP_InputField_t3488E0EE8C3DF56C6A328EC95D1BEEA2DF4A7D5F* __this, const RuntimeMethod* method) 
{
	{
		// public Graphic placeholder { get { return m_Placeholder; } set { SetPropertyUtility.SetClass(ref m_Placeholder, value); } }
		Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931* L_0 = __this->___m_Placeholder_29;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* TMP_InputField_get_textComponent_m85C4BC3F4C18206B3B942F03DB0B953B028EE1CE_inline (TMP_InputField_t3488E0EE8C3DF56C6A328EC95D1BEEA2DF4A7D5F* __this, const RuntimeMethod* method) 
{
	{
		// get { return m_TextComponent; }
		TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* L_0 = __this->___m_TextComponent_27;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float TMP_Text_get_fontSize_m13A8365A56EA2B726EAD826B4A69C8918A528731_inline (TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* __this, const RuntimeMethod* method) 
{
	{
		// get { return m_fontSize; }
		float L_0 = __this->___m_fontSize_73;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TMP_InputField_get_isFocused_m7FD1AA3B92404C30596FF6EE5F644757A2F060DE_inline (TMP_InputField_t3488E0EE8C3DF56C6A328EC95D1BEEA2DF4A7D5F* __this, const RuntimeMethod* method) 
{
	{
		// get { return m_AllowInput; }
		bool L_0 = __this->___m_AllowInput_74;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TMP_InputField_get_onFocusSelectAll_m6A1A06461D6B01EE2E68624B9D7E5E3C7D092CDC_inline (TMP_InputField_t3488E0EE8C3DF56C6A328EC95D1BEEA2DF4A7D5F* __this, const RuntimeMethod* method) 
{
	{
		// get { return m_OnFocusSelectAll; }
		bool L_0 = __this->___m_OnFocusSelectAll_100;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void WebGLWindow_set_Focus_m82255B46ADB7EA97A137CB6ECEBE33B361945D6F_inline (bool ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WebGLWindow_t360F95487A76FFDFAD43C992ACEBF9CF8FA4D3A3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static bool Focus { get; private set; }
		bool L_0 = ___value0;
		il2cpp_codegen_runtime_class_init_inline(WebGLWindow_t360F95487A76FFDFAD43C992ACEBF9CF8FA4D3A3_il2cpp_TypeInfo_var);
		((WebGLWindow_t360F95487A76FFDFAD43C992ACEBF9CF8FA4D3A3_StaticFields*)il2cpp_codegen_static_fields_for(WebGLWindow_t360F95487A76FFDFAD43C992ACEBF9CF8FA4D3A3_il2cpp_TypeInfo_var))->___U3CFocusU3Ek__BackingField_0 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_Invoke_m7126A54DACA72B845424072887B5F3A51FC3808E_inline (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* __this, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* __this, const RuntimeMethod* method);
	((FunctionPointerType)__this->___invoke_impl_1)(__this, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Quaternion__ctor_m868FD60AA65DD5A8AC0C5DEB0608381A8D85FCD8_inline (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* __this, float ___x0, float ___y1, float ___z2, float ___w3, const RuntimeMethod* method) 
{
	{
		float L_0 = ___x0;
		__this->___x_0 = L_0;
		float L_1 = ___y1;
		__this->___y_1 = L_1;
		float L_2 = ___z2;
		__this->___z_2 = L_2;
		float L_3 = ___w3;
		__this->___w_3 = L_3;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void MarkerDetection_Invoke_m30EED64E7C27ABF3C1F15B445A2976A617795B2D_inline (MarkerDetection_tB2B8E475144ED5AE5A0BAFC42F3F79C6E57A9DA9* __this, MarkerInfo_tF1D3B769CFABECC5F1524196971229B99448B57F* ___m0, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (MarkerDetection_tB2B8E475144ED5AE5A0BAFC42F3F79C6E57A9DA9* __this, MarkerInfo_tF1D3B769CFABECC5F1524196971229B99448B57F* ___m0, const RuntimeMethod* method);
	((FunctionPointerType)__this->___invoke_impl_1)(__this, ___m0, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_Distance_m99C722723EDD875852EF854AD7B7C4F8AC4F84AB_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___a0;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___b1;
		float L_3 = L_2.___x_2;
		V_0 = ((float)il2cpp_codegen_subtract(L_1, L_3));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___a0;
		float L_5 = L_4.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___b1;
		float L_7 = L_6.___y_3;
		V_1 = ((float)il2cpp_codegen_subtract(L_5, L_7));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___a0;
		float L_9 = L_8.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___b1;
		float L_11 = L_10.___z_4;
		V_2 = ((float)il2cpp_codegen_subtract(L_9, L_11));
		float L_12 = V_0;
		float L_13 = V_0;
		float L_14 = V_1;
		float L_15 = V_1;
		float L_16 = V_2;
		float L_17 = V_2;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_18;
		L_18 = sqrt(((double)((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_12, L_13)), ((float)il2cpp_codegen_multiply(L_14, L_15)))), ((float)il2cpp_codegen_multiply(L_16, L_17))))));
		V_3 = ((float)L_18);
		goto IL_0040;
	}

IL_0040:
	{
		float L_19 = V_3;
		return L_19;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_Lerp_m57EE8D709A93B2B0FF8D499FA2947B1D61CB1FD6_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, float ___t2, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		float L_0 = ___t2;
		float L_1;
		L_1 = Mathf_Clamp01_mD921B23F47F5347996C56DC789D1DE16EE27D9B1_inline(L_0, NULL);
		___t2 = L_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___a0;
		float L_3 = L_2.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___b1;
		float L_5 = L_4.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___a0;
		float L_7 = L_6.___x_2;
		float L_8 = ___t2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9 = ___a0;
		float L_10 = L_9.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_11 = ___b1;
		float L_12 = L_11.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13 = ___a0;
		float L_14 = L_13.___y_3;
		float L_15 = ___t2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_16 = ___a0;
		float L_17 = L_16.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_18 = ___b1;
		float L_19 = L_18.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_20 = ___a0;
		float L_21 = L_20.___z_4;
		float L_22 = ___t2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_23;
		memset((&L_23), 0, sizeof(L_23));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_23), ((float)il2cpp_codegen_add(L_3, ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract(L_5, L_7)), L_8)))), ((float)il2cpp_codegen_add(L_10, ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract(L_12, L_14)), L_15)))), ((float)il2cpp_codegen_add(L_17, ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract(L_19, L_21)), L_22)))), /*hidden argument*/NULL);
		V_0 = L_23;
		goto IL_0053;
	}

IL_0053:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_24 = V_0;
		return L_24;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* __this, float ___r0, float ___g1, float ___b2, float ___a3, const RuntimeMethod* method) 
{
	{
		float L_0 = ___r0;
		__this->___r_0 = L_0;
		float L_1 = ___g1;
		__this->___g_1 = L_1;
		float L_2 = ___b2;
		__this->___b_2 = L_2;
		float L_3 = ___a3;
		__this->___a_3 = L_3;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, float ___x0, float ___y1, const RuntimeMethod* method) 
{
	{
		float L_0 = ___x0;
		__this->___x_0 = L_0;
		float L_1 = ___y1;
		__this->___y_1 = L_1;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_up_mAB5269BFCBCB1BD241450C9BF2F156303D30E0C3_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ((Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields*)il2cpp_codegen_static_fields_for(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var))->___upVector_7;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Multiply_m516FE285F5342F922C6EB3FCB33197E9017FF484_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, float ___d1, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___a0;
		float L_1 = L_0.___x_2;
		float L_2 = ___d1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3 = ___a0;
		float L_4 = L_3.___y_3;
		float L_5 = ___d1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___a0;
		float L_7 = L_6.___z_4;
		float L_8 = ___d1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		memset((&L_9), 0, sizeof(L_9));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_9), ((float)il2cpp_codegen_multiply(L_1, L_2)), ((float)il2cpp_codegen_multiply(L_4, L_5)), ((float)il2cpp_codegen_multiply(L_7, L_8)), /*hidden argument*/NULL);
		V_0 = L_9;
		goto IL_0021;
	}

IL_0021:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = V_0;
		return L_10;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Matrix4x4_set_Item_mE84FC43629907DD1872E3100BCFF4A8EB671B603_inline (Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6* __this, int32_t ___row0, int32_t ___column1, float ___value2, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___row0;
		int32_t L_1 = ___column1;
		float L_2 = ___value2;
		Matrix4x4_set_Item_m47C4DDBFAE6578D6008AEF433777D4B2FACB62B0(__this, ((int32_t)il2cpp_codegen_add(L_0, ((int32_t)il2cpp_codegen_multiply(L_1, 4)))), L_2, NULL);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Clear_m16C1F2C61FED5955F10EB36BC1CB2DF34B128994_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = (int32_t)__this->____version_3;
		__this->____version_3 = ((int32_t)il2cpp_codegen_add(L_0, 1));
		if (!true)
		{
			goto IL_0035;
		}
	}
	{
		int32_t L_1 = (int32_t)__this->____size_2;
		V_0 = L_1;
		__this->____size_2 = 0;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) <= ((int32_t)0)))
		{
			goto IL_003c;
		}
	}
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_3 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)__this->____items_1;
		int32_t L_4 = V_0;
		Array_Clear_m48B57EC27CADC3463CA98A33373D557DA587FF1B((RuntimeArray*)L_3, 0, L_4, NULL);
		return;
	}

IL_0035:
	{
		__this->____size_2 = 0;
	}

IL_003c:
	{
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___item0, const RuntimeMethod* method) 
{
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_0 = NULL;
	int32_t V_1 = 0;
	{
		int32_t L_0 = (int32_t)__this->____version_3;
		__this->____version_3 = ((int32_t)il2cpp_codegen_add(L_0, 1));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)__this->____items_1;
		V_0 = L_1;
		int32_t L_2 = (int32_t)__this->____size_2;
		V_1 = L_2;
		int32_t L_3 = V_1;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = V_0;
		NullCheck(L_4);
		if ((!(((uint32_t)L_3) < ((uint32_t)((int32_t)(((RuntimeArray*)L_4)->max_length))))))
		{
			goto IL_0034;
		}
	}
	{
		int32_t L_5 = V_1;
		__this->____size_2 = ((int32_t)il2cpp_codegen_add(L_5, 1));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_6 = V_0;
		int32_t L_7 = V_1;
		RuntimeObject* L_8 = ___item0;
		NullCheck(L_6);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(L_7), (RuntimeObject*)L_8);
		return;
	}

IL_0034:
	{
		RuntimeObject* L_9 = ___item0;
		((  void (*) (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 11)))(__this, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->____current_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = (int32_t)__this->____size_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* Array_Empty_TisRuntimeObject_m55011E8360A8199FB239A5787BA8631CDD6116FC_gshared_inline (const RuntimeMethod* method) 
{
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 0));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_0 = ((EmptyArray_1_tDF0DD7256B115243AA6BD5558417387A734240EE_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 0)))->___Value_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Vector3_op_Equality_m15951D1B53E3BE36C9D265E229090020FBD72EBB_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___lhs0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___rhs1, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	bool V_4 = false;
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___lhs0;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___rhs1;
		float L_3 = L_2.___x_2;
		V_0 = ((float)il2cpp_codegen_subtract(L_1, L_3));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___lhs0;
		float L_5 = L_4.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___rhs1;
		float L_7 = L_6.___y_3;
		V_1 = ((float)il2cpp_codegen_subtract(L_5, L_7));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___lhs0;
		float L_9 = L_8.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___rhs1;
		float L_11 = L_10.___z_4;
		V_2 = ((float)il2cpp_codegen_subtract(L_9, L_11));
		float L_12 = V_0;
		float L_13 = V_0;
		float L_14 = V_1;
		float L_15 = V_1;
		float L_16 = V_2;
		float L_17 = V_2;
		V_3 = ((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_12, L_13)), ((float)il2cpp_codegen_multiply(L_14, L_15)))), ((float)il2cpp_codegen_multiply(L_16, L_17))));
		float L_18 = V_3;
		V_4 = (bool)((((float)L_18) < ((float)(9.99999944E-11f)))? 1 : 0);
		goto IL_0043;
	}

IL_0043:
	{
		bool L_19 = V_4;
		return L_19;
	}
}

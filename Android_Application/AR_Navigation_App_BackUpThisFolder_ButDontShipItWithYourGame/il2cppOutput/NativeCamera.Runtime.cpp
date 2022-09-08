#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


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

// System.Collections.Generic.Dictionary`2<System.Int32,System.Globalization.CultureInfo>
struct Dictionary_2_t9FA6D82CAFC18769F7515BB51D1C56DAE09381C3;
// System.Collections.Generic.Dictionary`2<System.String,System.Globalization.CultureInfo>
struct Dictionary_2_tE1603CE612C16451D1E56FF4D4859D4FE4087C28;
// System.Byte[]
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
// System.Char[]
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
// System.IntPtr[]
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
// System.String[]
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
// System.Action
struct Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07;
// UnityEngine.AndroidJavaClass
struct AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03;
// UnityEngine.AndroidJavaObject
struct AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0;
// UnityEngine.AndroidJavaProxy
struct AndroidJavaProxy_tE5521F9761F7B95444B9C39FB15FDFC23F80A78D;
// System.ArgumentException
struct ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263;
// System.AsyncCallback
struct AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C;
// System.Globalization.Calendar
struct Calendar_t0A117CC7532A54C17188C2EFEA1F79DB20DF3A3B;
// System.Globalization.CompareInfo
struct CompareInfo_t1B1A6AC3486B570C76ABA52149C9BD4CD82F9E57;
// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3;
// System.Globalization.CultureData
struct CultureData_tEEFDCF4ECA1BBF6C0C8C94EB3541657245598F9D;
// System.Globalization.CultureInfo
struct CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0;
// System.Globalization.DateTimeFormatInfo
struct DateTimeFormatInfo_t0457520F9FA7B5C8EAAEB3AD50413B6AEEB7458A;
// System.Delegate
struct Delegate_t;
// System.DelegateData
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
// System.IO.DirectoryInfo
struct DirectoryInfo_tEAEEC018EB49B4A71907FFEAFE935FAA8F9C1FE2;
// System.Exception
struct Exception_t;
// System.IO.FileNotFoundException
struct FileNotFoundException_t17F1B49AD996E4A60C87C7ADC9D3A25EB5808A9A;
// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F;
// UnityEngine.GlobalJavaObjectRef
struct GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8;
// System.IAsyncResult
struct IAsyncResult_t7B9B5A0ECB35DCEC31B8A8122C37D687369253B5;
// System.Collections.IDictionary
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
// System.IFormatProvider
struct IFormatProvider_tC202922D43BFF3525109ABF3FB79625F5646AB52;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71;
// NativeCameraNamespace.NCCallbackHelper
struct NCCallbackHelper_tBA518C908F8A8D4DD1D896CC9C11AE23888F67CA;
// NativeCameraNamespace.NCCameraCallbackAndroid
struct NCCameraCallbackAndroid_t6321AB2CC0C23E0A0A06CD0D72847CE9149F9378;
// NativeCameraNamespace.NCPermissionCallbackAndroid
struct NCPermissionCallbackAndroid_t018A82939BD516F7AC1B1295721A0EDB10B55D91;
// System.Globalization.NumberFormatInfo
struct NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472;
// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
// System.String
struct String_t;
// System.Globalization.TextInfo
struct TextInfo_tD3BAFCFD77418851E7D5CB8D2588F47019E414B4;
// UnityEngine.Texture2D
struct Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// NativeCameraNamespace.NCCameraCallbackAndroid/<>c__DisplayClass3_0
struct U3CU3Ec__DisplayClass3_0_t6F61CA2BBD832CB410C9365B047308C3CAC6B850;
// NativeCamera/CameraCallback
struct CameraCallback_tF33A274B891CCEC46FF206A2C3907F370B4FF771;

IL2CPP_EXTERN_C RuntimeClass* Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AndroidJavaProxy_tE5521F9761F7B95444B9C39FB15FDFC23F80A78D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Exception_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* FileNotFoundException_t17F1B49AD996E4A60C87C7ADC9D3A25EB5808A9A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GameObject_t76FEDD663AB33C991A9C9A23129337651094216F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NCCameraCallbackAndroid_t6321AB2CC0C23E0A0A06CD0D72847CE9149F9378_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NCPermissionCallbackAndroid_t018A82939BD516F7AC1B1295721A0EDB10B55D91_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NativeCamera_tE85F6A2EFD4BDD17480FD3FC273A67753E6C629F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Path_t8A38A801D0219E8209C1B1D90D82D4D755D998BC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RuntimeObject_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass3_0_t6F61CA2BBD832CB410C9365B047308C3CAC6B850_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral0443845674FDE6986E4ECC72A8C096004DF51FC6;
IL2CPP_EXTERN_C String_t* _stringLiteral0A051229B6EA622EA0A0C01F91FB09E1623476AA;
IL2CPP_EXTERN_C String_t* _stringLiteral0CA4721FC9D82D780671DE2AB61257837402697D;
IL2CPP_EXTERN_C String_t* _stringLiteral1256BD059A8D156C0578EF505C83E5862F0EFCD2;
IL2CPP_EXTERN_C String_t* _stringLiteral17A2974EBDD10F9D99410DD81D1AD62BFB8922B8;
IL2CPP_EXTERN_C String_t* _stringLiteral18B82B6B7DC4FE1988BA61A3784D1768F6C925DF;
IL2CPP_EXTERN_C String_t* _stringLiteral22965B1EE1F6EB152925F32087BD48959BA8C1BC;
IL2CPP_EXTERN_C String_t* _stringLiteral23DF9991B71463C240582D176E347E7E47AEFF5A;
IL2CPP_EXTERN_C String_t* _stringLiteral3E96C9BB1B953A85290371E8CE7BB3F3ABB307CC;
IL2CPP_EXTERN_C String_t* _stringLiteral491B4D9271839F0BD63211437BF7CEE5B2C6ADE9;
IL2CPP_EXTERN_C String_t* _stringLiteral4B9B40AAD718882F5C0B95FE844E4AA92BD49C42;
IL2CPP_EXTERN_C String_t* _stringLiteral4D613657609485AE586A3379BA0E3FC13C1E1078;
IL2CPP_EXTERN_C String_t* _stringLiteral5D67C2D23D0E67BA40CD70B037A9F218807BB46F;
IL2CPP_EXTERN_C String_t* _stringLiteral60765CA56083EB814A8E566B08E35D91D1000DEC;
IL2CPP_EXTERN_C String_t* _stringLiteral660F6D5965E09393894520A3BBDDAE9F5DEF81D2;
IL2CPP_EXTERN_C String_t* _stringLiteral75E05143EB132AAA8A22B48813DB8E6047380821;
IL2CPP_EXTERN_C String_t* _stringLiteral811A5CF8DF2E4D4CA546FECCBB9A503DC8D89283;
IL2CPP_EXTERN_C String_t* _stringLiteral8A4D2503591255173AC6769BB8A784B9CC5B5BC6;
IL2CPP_EXTERN_C String_t* _stringLiteral985B72B30ECE05DD4EF5FE142CEE0FB8BF53A98C;
IL2CPP_EXTERN_C String_t* _stringLiteralA15C898F015A9B0BC3268E8883CD03008A56DE26;
IL2CPP_EXTERN_C String_t* _stringLiteralA3A21FB44DD18299A19A0B86BA27CEB4EDA6A941;
IL2CPP_EXTERN_C String_t* _stringLiteralAFF4AA19F30B5DC5A240F413D92917103536F1AD;
IL2CPP_EXTERN_C String_t* _stringLiteralBB89381AF6FA67A07F15BA3C2582693F59E071ED;
IL2CPP_EXTERN_C String_t* _stringLiteralCB4507437E3E619ECBAD84410155675EBEB3DB3F;
IL2CPP_EXTERN_C String_t* _stringLiteralDD146CE30524569A8784D1FFE34EA505C910727D;
IL2CPP_EXTERN_C String_t* _stringLiteralF0750A05DD548EB8E0F9CD56A424497F03563B9D;
IL2CPP_EXTERN_C String_t* _stringLiteralF811A8F3778A439E75478C3728BE25A7853EAF83;
IL2CPP_EXTERN_C String_t* _stringLiteralFB4AE4F77150C3A8E8E4F8B23E734E0C7277B7D9;
IL2CPP_EXTERN_C String_t* _stringLiteralFFB00AB07E4FD5417BED928D76EA5DBF492DFDAE;
IL2CPP_EXTERN_C const RuntimeMethod* AndroidJavaObject_CallStatic_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mE956BC9A30BEC746DE593C53C1B8DB6A685185A6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AndroidJavaObject_CallStatic_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m6619B03C8DA4F5A66785845A2E5B39DAEF36642A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AndroidJavaObject_CallStatic_TisString_t_mB5DC41208BD7C326A089C20F4F1C2B8B2444ACC3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AndroidJavaObject_GetStatic_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_mD7D192A35EB2B2DA3775FAB081958B72088251DD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_AddComponent_TisNCCallbackHelper_tBA518C908F8A8D4DD1D896CC9C11AE23888F67CA_m58F9A27F8E2E59C5DA67176DBC1DDEE4B50743EE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NativeCamera_GetImageProperties_mA0EF15B8F3C7392235349C4385E894C0660D4DEB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NativeCamera_GetVideoProperties_mD107E884F139248DA25009699EBB789077BA08AB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NativeCamera_LoadImageAtPath_mE8E129DF8079EE8F032E1D1BEAD7CF65D8E42741_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass3_0_U3COnMediaReceivedU3Eb__0_m2F42366AEBB844734D6B392AF6A392BF2BF19458_RuntimeMethod_var;
struct CultureData_tEEFDCF4ECA1BBF6C0C8C94EB3541657245598F9D_marshaled_com;
struct CultureData_tEEFDCF4ECA1BBF6C0C8C94EB3541657245598F9D_marshaled_pinvoke;
struct CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_marshaled_com;
struct CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_marshaled_pinvoke;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_tF0E9D9D49305425E48612F9F1BC145ECE6B9E574 
{
};

// UnityEngine.AndroidJavaObject
struct AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0  : public RuntimeObject
{
	// UnityEngine.GlobalJavaObjectRef UnityEngine.AndroidJavaObject::m_jobject
	GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* ___m_jobject_1;
	// UnityEngine.GlobalJavaObjectRef UnityEngine.AndroidJavaObject::m_jclass
	GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* ___m_jclass_2;
};

struct AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_StaticFields
{
	// System.Boolean UnityEngine.AndroidJavaObject::enableDebugPrints
	bool ___enableDebugPrints_0;
};
struct Il2CppArrayBounds;

// System.Globalization.CultureInfo
struct CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0  : public RuntimeObject
{
	// System.Boolean System.Globalization.CultureInfo::m_isReadOnly
	bool ___m_isReadOnly_3;
	// System.Int32 System.Globalization.CultureInfo::cultureID
	int32_t ___cultureID_4;
	// System.Int32 System.Globalization.CultureInfo::parent_lcid
	int32_t ___parent_lcid_5;
	// System.Int32 System.Globalization.CultureInfo::datetime_index
	int32_t ___datetime_index_6;
	// System.Int32 System.Globalization.CultureInfo::number_index
	int32_t ___number_index_7;
	// System.Int32 System.Globalization.CultureInfo::default_calendar_type
	int32_t ___default_calendar_type_8;
	// System.Boolean System.Globalization.CultureInfo::m_useUserOverride
	bool ___m_useUserOverride_9;
	// System.Globalization.NumberFormatInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::numInfo
	NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472* ___numInfo_10;
	// System.Globalization.DateTimeFormatInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::dateTimeInfo
	DateTimeFormatInfo_t0457520F9FA7B5C8EAAEB3AD50413B6AEEB7458A* ___dateTimeInfo_11;
	// System.Globalization.TextInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::textInfo
	TextInfo_tD3BAFCFD77418851E7D5CB8D2588F47019E414B4* ___textInfo_12;
	// System.String System.Globalization.CultureInfo::m_name
	String_t* ___m_name_13;
	// System.String System.Globalization.CultureInfo::englishname
	String_t* ___englishname_14;
	// System.String System.Globalization.CultureInfo::nativename
	String_t* ___nativename_15;
	// System.String System.Globalization.CultureInfo::iso3lang
	String_t* ___iso3lang_16;
	// System.String System.Globalization.CultureInfo::iso2lang
	String_t* ___iso2lang_17;
	// System.String System.Globalization.CultureInfo::win3lang
	String_t* ___win3lang_18;
	// System.String System.Globalization.CultureInfo::territory
	String_t* ___territory_19;
	// System.String[] System.Globalization.CultureInfo::native_calendar_names
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___native_calendar_names_20;
	// System.Globalization.CompareInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::compareInfo
	CompareInfo_t1B1A6AC3486B570C76ABA52149C9BD4CD82F9E57* ___compareInfo_21;
	// System.Void* System.Globalization.CultureInfo::textinfo_data
	void* ___textinfo_data_22;
	// System.Int32 System.Globalization.CultureInfo::m_dataItem
	int32_t ___m_dataItem_23;
	// System.Globalization.Calendar System.Globalization.CultureInfo::calendar
	Calendar_t0A117CC7532A54C17188C2EFEA1F79DB20DF3A3B* ___calendar_24;
	// System.Globalization.CultureInfo System.Globalization.CultureInfo::parent_culture
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* ___parent_culture_25;
	// System.Boolean System.Globalization.CultureInfo::constructed
	bool ___constructed_26;
	// System.Byte[] System.Globalization.CultureInfo::cached_serialized_form
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___cached_serialized_form_27;
	// System.Globalization.CultureData System.Globalization.CultureInfo::m_cultureData
	CultureData_tEEFDCF4ECA1BBF6C0C8C94EB3541657245598F9D* ___m_cultureData_28;
	// System.Boolean System.Globalization.CultureInfo::m_isInherited
	bool ___m_isInherited_29;
};

struct CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_StaticFields
{
	// System.Globalization.CultureInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::invariant_culture_info
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* ___invariant_culture_info_0;
	// System.Object System.Globalization.CultureInfo::shared_table_lock
	RuntimeObject* ___shared_table_lock_1;
	// System.Globalization.CultureInfo System.Globalization.CultureInfo::default_current_culture
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* ___default_current_culture_2;
	// System.Globalization.CultureInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::s_DefaultThreadCurrentUICulture
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* ___s_DefaultThreadCurrentUICulture_34;
	// System.Globalization.CultureInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::s_DefaultThreadCurrentCulture
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* ___s_DefaultThreadCurrentCulture_35;
	// System.Collections.Generic.Dictionary`2<System.Int32,System.Globalization.CultureInfo> System.Globalization.CultureInfo::shared_by_number
	Dictionary_2_t9FA6D82CAFC18769F7515BB51D1C56DAE09381C3* ___shared_by_number_36;
	// System.Collections.Generic.Dictionary`2<System.String,System.Globalization.CultureInfo> System.Globalization.CultureInfo::shared_by_name
	Dictionary_2_tE1603CE612C16451D1E56FF4D4859D4FE4087C28* ___shared_by_name_37;
	// System.Globalization.CultureInfo System.Globalization.CultureInfo::s_UserPreferredCultureInfoInAppX
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* ___s_UserPreferredCultureInfoInAppX_38;
	// System.Boolean System.Globalization.CultureInfo::IsTaiwanSku
	bool ___IsTaiwanSku_39;
};
// Native definition for P/Invoke marshalling of System.Globalization.CultureInfo
struct CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_marshaled_pinvoke
{
	int32_t ___m_isReadOnly_3;
	int32_t ___cultureID_4;
	int32_t ___parent_lcid_5;
	int32_t ___datetime_index_6;
	int32_t ___number_index_7;
	int32_t ___default_calendar_type_8;
	int32_t ___m_useUserOverride_9;
	NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472* ___numInfo_10;
	DateTimeFormatInfo_t0457520F9FA7B5C8EAAEB3AD50413B6AEEB7458A* ___dateTimeInfo_11;
	TextInfo_tD3BAFCFD77418851E7D5CB8D2588F47019E414B4* ___textInfo_12;
	char* ___m_name_13;
	char* ___englishname_14;
	char* ___nativename_15;
	char* ___iso3lang_16;
	char* ___iso2lang_17;
	char* ___win3lang_18;
	char* ___territory_19;
	char** ___native_calendar_names_20;
	CompareInfo_t1B1A6AC3486B570C76ABA52149C9BD4CD82F9E57* ___compareInfo_21;
	void* ___textinfo_data_22;
	int32_t ___m_dataItem_23;
	Calendar_t0A117CC7532A54C17188C2EFEA1F79DB20DF3A3B* ___calendar_24;
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_marshaled_pinvoke* ___parent_culture_25;
	int32_t ___constructed_26;
	Il2CppSafeArray/*NONE*/* ___cached_serialized_form_27;
	CultureData_tEEFDCF4ECA1BBF6C0C8C94EB3541657245598F9D_marshaled_pinvoke* ___m_cultureData_28;
	int32_t ___m_isInherited_29;
};
// Native definition for COM marshalling of System.Globalization.CultureInfo
struct CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_marshaled_com
{
	int32_t ___m_isReadOnly_3;
	int32_t ___cultureID_4;
	int32_t ___parent_lcid_5;
	int32_t ___datetime_index_6;
	int32_t ___number_index_7;
	int32_t ___default_calendar_type_8;
	int32_t ___m_useUserOverride_9;
	NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472* ___numInfo_10;
	DateTimeFormatInfo_t0457520F9FA7B5C8EAAEB3AD50413B6AEEB7458A* ___dateTimeInfo_11;
	TextInfo_tD3BAFCFD77418851E7D5CB8D2588F47019E414B4* ___textInfo_12;
	Il2CppChar* ___m_name_13;
	Il2CppChar* ___englishname_14;
	Il2CppChar* ___nativename_15;
	Il2CppChar* ___iso3lang_16;
	Il2CppChar* ___iso2lang_17;
	Il2CppChar* ___win3lang_18;
	Il2CppChar* ___territory_19;
	Il2CppChar** ___native_calendar_names_20;
	CompareInfo_t1B1A6AC3486B570C76ABA52149C9BD4CD82F9E57* ___compareInfo_21;
	void* ___textinfo_data_22;
	int32_t ___m_dataItem_23;
	Calendar_t0A117CC7532A54C17188C2EFEA1F79DB20DF3A3B* ___calendar_24;
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_marshaled_com* ___parent_culture_25;
	int32_t ___constructed_26;
	Il2CppSafeArray/*NONE*/* ___cached_serialized_form_27;
	CultureData_tEEFDCF4ECA1BBF6C0C8C94EB3541657245598F9D_marshaled_com* ___m_cultureData_28;
	int32_t ___m_isInherited_29;
};

// System.MarshalByRefObject
struct MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE  : public RuntimeObject
{
	// System.Object System.MarshalByRefObject::_identity
	RuntimeObject* ____identity_0;
};
// Native definition for P/Invoke marshalling of System.MarshalByRefObject
struct MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE_marshaled_pinvoke
{
	Il2CppIUnknown* ____identity_0;
};
// Native definition for COM marshalling of System.MarshalByRefObject
struct MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE_marshaled_com
{
	Il2CppIUnknown* ____identity_0;
};

// NativeCamera
struct NativeCamera_tE85F6A2EFD4BDD17480FD3FC273A67753E6C629F  : public RuntimeObject
{
};

struct NativeCamera_tE85F6A2EFD4BDD17480FD3FC273A67753E6C629F_StaticFields
{
	// UnityEngine.AndroidJavaClass NativeCamera::m_ajc
	AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* ___m_ajc_0;
	// UnityEngine.AndroidJavaObject NativeCamera::m_context
	AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* ___m_context_1;
	// System.String NativeCamera::m_temporaryImagePath
	String_t* ___m_temporaryImagePath_2;
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

// NativeCameraNamespace.NCCameraCallbackAndroid/<>c__DisplayClass3_0
struct U3CU3Ec__DisplayClass3_0_t6F61CA2BBD832CB410C9365B047308C3CAC6B850  : public RuntimeObject
{
	// NativeCameraNamespace.NCCameraCallbackAndroid NativeCameraNamespace.NCCameraCallbackAndroid/<>c__DisplayClass3_0::<>4__this
	NCCameraCallbackAndroid_t6321AB2CC0C23E0A0A06CD0D72847CE9149F9378* ___U3CU3E4__this_0;
	// System.String NativeCameraNamespace.NCCameraCallbackAndroid/<>c__DisplayClass3_0::path
	String_t* ___path_1;
};

// UnityEngine.AndroidJavaClass
struct AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03  : public AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0
{
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

// System.Double
struct Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F 
{
	// System.Double System.Double::m_value
	double ___m_value_0;
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

// System.Int64
struct Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3 
{
	// System.Int64 System.Int64::m_value
	int64_t ___m_value_0;
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

// System.Single
struct Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C 
{
	// System.Single System.Single::m_value
	float ___m_value_0;
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

// NativeCamera/VideoProperties
struct VideoProperties_t6D7A73E485C96B765AD8710810E46D38907DFC0E 
{
	// System.Int32 NativeCamera/VideoProperties::width
	int32_t ___width_0;
	// System.Int32 NativeCamera/VideoProperties::height
	int32_t ___height_1;
	// System.Int64 NativeCamera/VideoProperties::duration
	int64_t ___duration_2;
	// System.Single NativeCamera/VideoProperties::rotation
	float ___rotation_3;
};

// UnityEngine.AndroidJavaProxy
struct AndroidJavaProxy_tE5521F9761F7B95444B9C39FB15FDFC23F80A78D  : public RuntimeObject
{
	// UnityEngine.AndroidJavaClass UnityEngine.AndroidJavaProxy::javaInterface
	AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* ___javaInterface_0;
	// System.IntPtr UnityEngine.AndroidJavaProxy::proxyObject
	intptr_t ___proxyObject_1;
};

struct AndroidJavaProxy_tE5521F9761F7B95444B9C39FB15FDFC23F80A78D_StaticFields
{
	// UnityEngine.GlobalJavaObjectRef UnityEngine.AndroidJavaProxy::s_JavaLangSystemClass
	GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* ___s_JavaLangSystemClass_2;
	// System.IntPtr UnityEngine.AndroidJavaProxy::s_HashCodeMethodID
	intptr_t ___s_HashCodeMethodID_3;
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

// System.Globalization.NumberStyles
struct NumberStyles_t567C6CBC2A2B5B5A2C43B2855D158949984A810C 
{
	// System.Int32 System.Globalization.NumberStyles::value__
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

// System.StringSplitOptions
struct StringSplitOptions_t4DD892C76C70DD4800FC1B76054D69826F770062 
{
	// System.Int32 System.StringSplitOptions::value__
	int32_t ___value___2;
};

// UnityEngine.TextureFormat
struct TextureFormat_t87A73E4A3850D3410DC211676FC14B94226C1C1D 
{
	// System.Int32 UnityEngine.TextureFormat::value__
	int32_t ___value___2;
};

// NativeCamera/ImageOrientation
struct ImageOrientation_t048D6899D5DD4F58B814817F24C2A8C8384B4173 
{
	// System.Int32 NativeCamera/ImageOrientation::value__
	int32_t ___value___2;
};

// NativeCamera/Permission
struct Permission_t1EEFB992D4BAC04AB077BD49556F33B8B6E0E9F8 
{
	// System.Int32 NativeCamera/Permission::value__
	int32_t ___value___2;
};

// NativeCamera/PreferredCamera
struct PreferredCamera_t4F13D40BC6F684E77EDD06E39DD959349FD239DF 
{
	// System.Int32 NativeCamera/PreferredCamera::value__
	int32_t ___value___2;
};

// NativeCamera/Quality
struct Quality_t664F5D3435BCC9AE80318CDB46E1213A4CF0FC15 
{
	// System.Int32 NativeCamera/Quality::value__
	int32_t ___value___2;
};

// Interop/Sys/FileStatusFlags
struct FileStatusFlags_tB53E2B9A54305CDCEA49884DEEDB8C62C8ACC9C9 
{
	// System.Int32 Interop/Sys/FileStatusFlags::value__
	int32_t ___value___2;
};

// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
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

// NativeCameraNamespace.NCCameraCallbackAndroid
struct NCCameraCallbackAndroid_t6321AB2CC0C23E0A0A06CD0D72847CE9149F9378  : public AndroidJavaProxy_tE5521F9761F7B95444B9C39FB15FDFC23F80A78D
{
	// NativeCamera/CameraCallback NativeCameraNamespace.NCCameraCallbackAndroid::callback
	CameraCallback_tF33A274B891CCEC46FF206A2C3907F370B4FF771* ___callback_4;
	// NativeCameraNamespace.NCCallbackHelper NativeCameraNamespace.NCCameraCallbackAndroid::callbackHelper
	NCCallbackHelper_tBA518C908F8A8D4DD1D896CC9C11AE23888F67CA* ___callbackHelper_5;
};

// NativeCameraNamespace.NCPermissionCallbackAndroid
struct NCPermissionCallbackAndroid_t018A82939BD516F7AC1B1295721A0EDB10B55D91  : public AndroidJavaProxy_tE5521F9761F7B95444B9C39FB15FDFC23F80A78D
{
	// System.Object NativeCameraNamespace.NCPermissionCallbackAndroid::threadLock
	RuntimeObject* ___threadLock_4;
	// System.Int32 NativeCameraNamespace.NCPermissionCallbackAndroid::<Result>k__BackingField
	int32_t ___U3CResultU3Ek__BackingField_5;
};

// System.SystemException
struct SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295  : public Exception_t
{
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

// NativeCamera/ImageProperties
struct ImageProperties_t58867341A9993287DFFDD26325DE0EE68DD52E46 
{
	// System.Int32 NativeCamera/ImageProperties::width
	int32_t ___width_0;
	// System.Int32 NativeCamera/ImageProperties::height
	int32_t ___height_1;
	// System.String NativeCamera/ImageProperties::mimeType
	String_t* ___mimeType_2;
	// NativeCamera/ImageOrientation NativeCamera/ImageProperties::orientation
	int32_t ___orientation_3;
};
// Native definition for P/Invoke marshalling of NativeCamera/ImageProperties
struct ImageProperties_t58867341A9993287DFFDD26325DE0EE68DD52E46_marshaled_pinvoke
{
	int32_t ___width_0;
	int32_t ___height_1;
	char* ___mimeType_2;
	int32_t ___orientation_3;
};
// Native definition for COM marshalling of NativeCamera/ImageProperties
struct ImageProperties_t58867341A9993287DFFDD26325DE0EE68DD52E46_marshaled_com
{
	int32_t ___width_0;
	int32_t ___height_1;
	Il2CppChar* ___mimeType_2;
	int32_t ___orientation_3;
};

// Interop/Sys/FileStatus
struct FileStatus_tCB96EDE0D0F945F685B9BBED6DBF0731207458C2 
{
	// Interop/Sys/FileStatusFlags Interop/Sys/FileStatus::Flags
	int32_t ___Flags_0;
	// System.Int32 Interop/Sys/FileStatus::Mode
	int32_t ___Mode_1;
	// System.UInt32 Interop/Sys/FileStatus::Uid
	uint32_t ___Uid_2;
	// System.UInt32 Interop/Sys/FileStatus::Gid
	uint32_t ___Gid_3;
	// System.Int64 Interop/Sys/FileStatus::Size
	int64_t ___Size_4;
	// System.Int64 Interop/Sys/FileStatus::ATime
	int64_t ___ATime_5;
	// System.Int64 Interop/Sys/FileStatus::ATimeNsec
	int64_t ___ATimeNsec_6;
	// System.Int64 Interop/Sys/FileStatus::MTime
	int64_t ___MTime_7;
	// System.Int64 Interop/Sys/FileStatus::MTimeNsec
	int64_t ___MTimeNsec_8;
	// System.Int64 Interop/Sys/FileStatus::CTime
	int64_t ___CTime_9;
	// System.Int64 Interop/Sys/FileStatus::CTimeNsec
	int64_t ___CTimeNsec_10;
	// System.Int64 Interop/Sys/FileStatus::BirthTime
	int64_t ___BirthTime_11;
	// System.Int64 Interop/Sys/FileStatus::BirthTimeNsec
	int64_t ___BirthTimeNsec_12;
	// System.Int64 Interop/Sys/FileStatus::Dev
	int64_t ___Dev_13;
	// System.Int64 Interop/Sys/FileStatus::Ino
	int64_t ___Ino_14;
	// System.UInt32 Interop/Sys/FileStatus::UserFlags
	uint32_t ___UserFlags_15;
};

// System.Action
struct Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07  : public MulticastDelegate_t
{
};

// System.ArgumentException
struct ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
	// System.String System.ArgumentException::_paramName
	String_t* ____paramName_18;
};

// System.AsyncCallback
struct AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C  : public MulticastDelegate_t
{
};

// UnityEngine.Behaviour
struct Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// System.IO.FileStatus
struct FileStatus_tABB5F252F1E597EC95E9041035DC424EF66712A5 
{
	// Interop/Sys/FileStatus System.IO.FileStatus::_fileStatus
	FileStatus_tCB96EDE0D0F945F685B9BBED6DBF0731207458C2 ____fileStatus_0;
	// System.Int32 System.IO.FileStatus::_fileStatusInitialized
	int32_t ____fileStatusInitialized_1;
	// System.Boolean System.IO.FileStatus::<InitiallyDirectory>k__BackingField
	bool ___U3CInitiallyDirectoryU3Ek__BackingField_2;
	// System.Boolean System.IO.FileStatus::_isDirectory
	bool ____isDirectory_3;
	// System.Boolean System.IO.FileStatus::_exists
	bool ____exists_4;
};
// Native definition for P/Invoke marshalling of System.IO.FileStatus
struct FileStatus_tABB5F252F1E597EC95E9041035DC424EF66712A5_marshaled_pinvoke
{
	FileStatus_tCB96EDE0D0F945F685B9BBED6DBF0731207458C2 ____fileStatus_0;
	int32_t ____fileStatusInitialized_1;
	int32_t ___U3CInitiallyDirectoryU3Ek__BackingField_2;
	int32_t ____isDirectory_3;
	int32_t ____exists_4;
};
// Native definition for COM marshalling of System.IO.FileStatus
struct FileStatus_tABB5F252F1E597EC95E9041035DC424EF66712A5_marshaled_com
{
	FileStatus_tCB96EDE0D0F945F685B9BBED6DBF0731207458C2 ____fileStatus_0;
	int32_t ____fileStatusInitialized_1;
	int32_t ___U3CInitiallyDirectoryU3Ek__BackingField_2;
	int32_t ____isDirectory_3;
	int32_t ____exists_4;
};

// System.IO.IOException
struct IOException_t5D599190B003D41D45D4839A9B6B9AB53A755910  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};

// UnityEngine.Texture2D
struct Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4  : public Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700
{
};

// NativeCamera/CameraCallback
struct CameraCallback_tF33A274B891CCEC46FF206A2C3907F370B4FF771  : public MulticastDelegate_t
{
};

// System.IO.FileNotFoundException
struct FileNotFoundException_t17F1B49AD996E4A60C87C7ADC9D3A25EB5808A9A  : public IOException_t5D599190B003D41D45D4839A9B6B9AB53A755910
{
	// System.String System.IO.FileNotFoundException::<FileName>k__BackingField
	String_t* ___U3CFileNameU3Ek__BackingField_18;
	// System.String System.IO.FileNotFoundException::<FusionLog>k__BackingField
	String_t* ___U3CFusionLogU3Ek__BackingField_19;
};

// System.IO.FileSystemInfo
struct FileSystemInfo_tE3063B9229F46B05A5F6D018C8C4CA510104E8E9  : public MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE
{
	// System.IO.FileStatus System.IO.FileSystemInfo::_fileStatus
	FileStatus_tABB5F252F1E597EC95E9041035DC424EF66712A5 ____fileStatus_1;
	// System.String System.IO.FileSystemInfo::FullPath
	String_t* ___FullPath_2;
	// System.String System.IO.FileSystemInfo::OriginalPath
	String_t* ___OriginalPath_3;
	// System.String System.IO.FileSystemInfo::_name
	String_t* ____name_4;
};

// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// System.IO.DirectoryInfo
struct DirectoryInfo_tEAEEC018EB49B4A71907FFEAFE935FAA8F9C1FE2  : public FileSystemInfo_tE3063B9229F46B05A5F6D018C8C4CA510104E8E9
{
};

// NativeCameraNamespace.NCCallbackHelper
struct NCCallbackHelper_tBA518C908F8A8D4DD1D896CC9C11AE23888F67CA  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Action NativeCameraNamespace.NCCallbackHelper::mainThreadAction
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___mainThreadAction_4;
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
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
// System.Byte[]
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031  : public RuntimeArray
{
	ALIGN_FIELD (8) uint8_t m_Items[1];

	inline uint8_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline uint8_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, uint8_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline uint8_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline uint8_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, uint8_t value)
	{
		m_Items[index] = value;
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


// FieldType UnityEngine.AndroidJavaObject::GetStatic<System.Object>(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* AndroidJavaObject_GetStatic_TisRuntimeObject_m4EF4E4761A0A6E99E0A298F653E8129B1494E4C9_gshared (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___fieldName0, const RuntimeMethod* method) ;
// ReturnType UnityEngine.AndroidJavaObject::CallStatic<System.Int32>(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AndroidJavaObject_CallStatic_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m6619B03C8DA4F5A66785845A2E5B39DAEF36642A_gshared (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___methodName0, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___args1, const RuntimeMethod* method) ;
// ReturnType UnityEngine.AndroidJavaObject::CallStatic<System.Boolean>(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AndroidJavaObject_CallStatic_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mE956BC9A30BEC746DE593C53C1B8DB6A685185A6_gshared (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___methodName0, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___args1, const RuntimeMethod* method) ;
// ReturnType UnityEngine.AndroidJavaObject::CallStatic<System.Object>(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* AndroidJavaObject_CallStatic_TisRuntimeObject_mCAFE27630F6092C4910E14592B050DACFCBE146F_gshared (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___methodName0, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___args1, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::AddComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GameObject_AddComponent_TisRuntimeObject_m69B93700FACCF372F5753371C6E8FB780800B824_gshared (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;

// System.Void UnityEngine.AndroidJavaClass::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidJavaClass__ctor_mB5466169E1151B8CC44C8FED234D79984B431389 (AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* __this, String_t* ___className0, const RuntimeMethod* method) ;
// FieldType UnityEngine.AndroidJavaObject::GetStatic<UnityEngine.AndroidJavaObject>(System.String)
inline AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* AndroidJavaObject_GetStatic_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_mD7D192A35EB2B2DA3775FAB081958B72088251DD (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___fieldName0, const RuntimeMethod* method)
{
	return ((  AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* (*) (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0*, String_t*, const RuntimeMethod*))AndroidJavaObject_GetStatic_TisRuntimeObject_m4EF4E4761A0A6E99E0A298F653E8129B1494E4C9_gshared)(__this, ___fieldName0, method);
}
// System.String UnityEngine.Application::get_temporaryCachePath()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Application_get_temporaryCachePath_m1C071883726EAFA66324E50FE73A1145272A4C60 (const RuntimeMethod* method) ;
// System.String System.IO.Path::Combine(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Path_Combine_m64754D4E08990CE1EBC41CDF197807EE4B115474 (String_t* ___path10, String_t* ___path21, const RuntimeMethod* method) ;
// System.IO.DirectoryInfo System.IO.Directory::CreateDirectory(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DirectoryInfo_tEAEEC018EB49B4A71907FFEAFE935FAA8F9C1FE2* Directory_CreateDirectory_mD89FECDFB25BC52F866DC0B1BB8552334FB249D2 (String_t* ___path0, const RuntimeMethod* method) ;
// UnityEngine.AndroidJavaClass NativeCamera::get_AJC()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* NativeCamera_get_AJC_m73CFDF32E808503B9DA45584853DF691A8A5DF46 (const RuntimeMethod* method) ;
// UnityEngine.AndroidJavaObject NativeCamera::get_Context()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* NativeCamera_get_Context_mD85212EE2053033FFED6C4FD2181F7E69142132D (const RuntimeMethod* method) ;
// ReturnType UnityEngine.AndroidJavaObject::CallStatic<System.Int32>(System.String,System.Object[])
inline int32_t AndroidJavaObject_CallStatic_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m6619B03C8DA4F5A66785845A2E5B39DAEF36642A (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___methodName0, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___args1, const RuntimeMethod* method)
{
	return ((  int32_t (*) (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0*, String_t*, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*, const RuntimeMethod*))AndroidJavaObject_CallStatic_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m6619B03C8DA4F5A66785845A2E5B39DAEF36642A_gshared)(__this, ___methodName0, ___args1, method);
}
// System.Int32 UnityEngine.PlayerPrefs::GetInt(System.String,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t PlayerPrefs_GetInt_mDCAA431AEC7CBAA6AF58857A8773E5B6B472285C (String_t* ___key0, int32_t ___defaultValue1, const RuntimeMethod* method) ;
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Void System.Threading.Monitor::Exit(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Monitor_Exit_m25A154960F91391E10E4CDA245ECDF4BA94D56A9 (RuntimeObject* ___obj0, const RuntimeMethod* method) ;
// System.Void System.Threading.Monitor::Enter(System.Object,System.Boolean&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Monitor_Enter_m00506757392936AA62DBE2C5FFBEE69EE920C4D4 (RuntimeObject* ___obj0, bool* ___lockTaken1, const RuntimeMethod* method) ;
// System.Void NativeCameraNamespace.NCPermissionCallbackAndroid::.ctor(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NCPermissionCallbackAndroid__ctor_mEE399CA43702611369BBFD6E72E3147E4C962FDC (NCPermissionCallbackAndroid_t018A82939BD516F7AC1B1295721A0EDB10B55D91* __this, RuntimeObject* ___threadLock0, const RuntimeMethod* method) ;
// System.Void UnityEngine.AndroidJavaObject::CallStatic(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidJavaObject_CallStatic_mB677DE04369EDD8E6DECAF2F233116EE1F06555C (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___methodName0, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___args1, const RuntimeMethod* method) ;
// System.Int32 NativeCameraNamespace.NCPermissionCallbackAndroid::get_Result()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t NCPermissionCallbackAndroid_get_Result_m0FBAA6C84093FCD7833C957E5C7CE381668100DF_inline (NCPermissionCallbackAndroid_t018A82939BD516F7AC1B1295721A0EDB10B55D91* __this, const RuntimeMethod* method) ;
// System.Boolean System.Threading.Monitor::Wait(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Monitor_Wait_m4E2A910D043438CDD5F8B9B9E82213C1E3CC8A78 (RuntimeObject* ___obj0, const RuntimeMethod* method) ;
// System.Void UnityEngine.PlayerPrefs::SetInt(System.String,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerPrefs_SetInt_mDC9617BFD56FEC670626A1002D9A5FE963D8D175 (String_t* ___key0, int32_t ___value1, const RuntimeMethod* method) ;
// System.Void UnityEngine.PlayerPrefs::Save()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerPrefs_Save_mCC9D4FCE00EA315AC967771D5D993E04CB742DFB (const RuntimeMethod* method) ;
// NativeCamera/Permission NativeCamera::RequestPermission()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeCamera_RequestPermission_m46ABC92C5CD86175902A684172A504F52C033701 (const RuntimeMethod* method) ;
// System.Boolean NativeCamera::IsCameraBusy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NativeCamera_IsCameraBusy_m51CF5A4EDD20433B30EA160508B3FFE07468B545 (const RuntimeMethod* method) ;
// System.Void NativeCameraNamespace.NCCameraCallbackAndroid::.ctor(NativeCamera/CameraCallback)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NCCameraCallbackAndroid__ctor_m7A49A723EBFBFC7215432493733AFCF632A8F5AA (NCCameraCallbackAndroid_t6321AB2CC0C23E0A0A06CD0D72847CE9149F9378* __this, CameraCallback_tF33A274B891CCEC46FF206A2C3907F370B4FF771* ___callback0, const RuntimeMethod* method) ;
// ReturnType UnityEngine.AndroidJavaObject::CallStatic<System.Boolean>(System.String,System.Object[])
inline bool AndroidJavaObject_CallStatic_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mE956BC9A30BEC746DE593C53C1B8DB6A685185A6 (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___methodName0, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___args1, const RuntimeMethod* method)
{
	return ((  bool (*) (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0*, String_t*, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*, const RuntimeMethod*))AndroidJavaObject_CallStatic_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mE956BC9A30BEC746DE593C53C1B8DB6A685185A6_gshared)(__this, ___methodName0, ___args1, method);
}
// System.Boolean System.String::IsNullOrEmpty(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_IsNullOrEmpty_m54CF0907E7C4F3AFB2E796A13DC751ECBB8DB64A (String_t* ___value0, const RuntimeMethod* method) ;
// System.Void System.ArgumentException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465 (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* __this, String_t* ___message0, const RuntimeMethod* method) ;
// System.Boolean System.IO.File::Exists(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool File_Exists_mD7E7A84A6B9E9A9BADBDA7C46AAE0624EF106D85 (String_t* ___path0, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D (String_t* ___str00, String_t* ___str11, const RuntimeMethod* method) ;
// System.Void System.IO.FileNotFoundException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FileNotFoundException__ctor_mA8C9C93DB8C5B96D6B5E59B2AE07154F265FB1A1 (FileNotFoundException_t17F1B49AD996E4A60C87C7ADC9D3A25EB5808A9A* __this, String_t* ___message0, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.SystemInfo::get_maxTextureSize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SystemInfo_get_maxTextureSize_mB4272D4D85179CEF11FF1CDB3E8F3786D10CA04E (const RuntimeMethod* method) ;
// System.String NativeCamera::get_TemporaryImagePath()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* NativeCamera_get_TemporaryImagePath_m221B228110E5AB222AAED3E1506E1D397A1A5995 (const RuntimeMethod* method) ;
// ReturnType UnityEngine.AndroidJavaObject::CallStatic<System.String>(System.String,System.Object[])
inline String_t* AndroidJavaObject_CallStatic_TisString_t_mB5DC41208BD7C326A089C20F4F1C2B8B2444ACC3 (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___methodName0, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___args1, const RuntimeMethod* method)
{
	return ((  String_t* (*) (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0*, String_t*, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*, const RuntimeMethod*))AndroidJavaObject_CallStatic_TisRuntimeObject_mCAFE27630F6092C4910E14592B050DACFCBE146F_gshared)(__this, ___methodName0, ___args1, method);
}
// System.String System.IO.Path::GetExtension(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Path_GetExtension_m52A28295599B87FA550D0654E531B56354C540C7 (String_t* ___path0, const RuntimeMethod* method) ;
// System.String System.String::ToLowerInvariant()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_ToLowerInvariant_mBE32C93DE27C5353FEA3FA654FC1DDBE3D0EB0F2 (String_t* __this, const RuntimeMethod* method) ;
// System.Boolean System.String::op_Equality(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0 (String_t* ___a0, String_t* ___b1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Texture2D::.ctor(System.Int32,System.Int32,UnityEngine.TextureFormat,System.Boolean,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Texture2D__ctor_mC3F84195D1DCEFC0536B3FBD40A8F8E865A4F32A (Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* __this, int32_t ___width0, int32_t ___height1, int32_t ___textureFormat2, bool ___mipChain3, bool ___linear4, const RuntimeMethod* method) ;
// System.Boolean System.String::op_Inequality(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Inequality_m0FBE5AC4931D312E5B347BAA603755676E6DA2FE (String_t* ___a0, String_t* ___b1, const RuntimeMethod* method) ;
// System.Void System.IO.File::Delete(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void File_Delete_mB5CB249F5370D49747243BCA9C56CCC48D3E6A08 (String_t* ___path0, const RuntimeMethod* method) ;
// System.Byte[] System.IO.File::ReadAllBytes(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* File_ReadAllBytes_mE0C2C5A0270CD40C496E85B1D8BA15C607E7011E (String_t* ___path0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.ImageConversion::LoadImage(UnityEngine.Texture2D,System.Byte[],System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ImageConversion_LoadImage_mE2D612F3895FDD7A87805E1C9D77A79C019213E2 (Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ___tex0, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___data1, bool ___markNonReadable2, const RuntimeMethod* method) ;
// System.Void UnityEngine.Object::DestroyImmediate(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_DestroyImmediate_m8249CABCDF344BE3A67EE765122EBB415DC2BC57 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___obj0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::LogException(System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogException_m82E44FEC6B03BC34AFC2CAF6583051570C60CB9E (Exception_t* ___exception0, const RuntimeMethod* method) ;
// UnityEngine.Texture2D NativeCamera::LoadImageAtPath(System.String,System.Int32,System.Boolean,System.Boolean,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* NativeCamera_LoadImageAtPath_mE8E129DF8079EE8F032E1D1BEAD7CF65D8E42741 (String_t* ___imagePath0, int32_t ___maxSize1, bool ___markTextureNonReadable2, bool ___generateMipmaps3, bool ___linearColorSpace4, const RuntimeMethod* method) ;
// System.String[] System.String::Split(System.Char,System.StringSplitOptions)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* String_Split_m9530B73D02054692283BF35C3A27C8F2230946F4 (String_t* __this, Il2CppChar ___separator0, int32_t ___options1, const RuntimeMethod* method) ;
// System.String System.String::Trim()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Trim_mCD6D8C6D4CFD15225D12DB7D3E0544CA80FB8DA5 (String_t* __this, const RuntimeMethod* method) ;
// System.Boolean System.Int32::TryParse(System.String,System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Int32_TryParse_mFC6BFCB86964E2BCA4052155B10983837A695EA4 (String_t* ___s0, int32_t* ___result1, const RuntimeMethod* method) ;
// System.Int32 System.String::get_Length()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline (String_t* __this, const RuntimeMethod* method) ;
// System.Void NativeCamera/ImageProperties::.ctor(System.Int32,System.Int32,System.String,NativeCamera/ImageOrientation)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ImageProperties__ctor_mDB1459622F0FFEEA741B63898D7CE5B41AA4F9EC (ImageProperties_t58867341A9993287DFFDD26325DE0EE68DD52E46* __this, int32_t ___width0, int32_t ___height1, String_t* ___mimeType2, int32_t ___orientation3, const RuntimeMethod* method) ;
// System.Boolean System.Int64::TryParse(System.String,System.Int64&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Int64_TryParse_m61AAE5CC4A0B716556765798C22FE12D87554986 (String_t* ___s0, int64_t* ___result1, const RuntimeMethod* method) ;
// System.String System.String::Replace(System.Char,System.Char)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Replace_m86403DC5F422D8D5E1CFAAF255B103CB807EDAAF (String_t* __this, Il2CppChar ___oldChar0, Il2CppChar ___newChar1, const RuntimeMethod* method) ;
// System.Globalization.CultureInfo System.Globalization.CultureInfo::get_InvariantCulture()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* CultureInfo_get_InvariantCulture_m78DAB8CBE8766445310782B6E61FB7A9983AD425 (const RuntimeMethod* method) ;
// System.Boolean System.Single::TryParse(System.String,System.Globalization.NumberStyles,System.IFormatProvider,System.Single&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Single_TryParse_m5920BF3A60EE1FFF0CC117021B4BF2A8114D1AE5 (String_t* ___s0, int32_t ___style1, RuntimeObject* ___provider2, float* ___result3, const RuntimeMethod* method) ;
// System.Void NativeCamera/VideoProperties::.ctor(System.Int32,System.Int32,System.Int64,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VideoProperties__ctor_m61A493A9C32C95FE9B3F84709AC0A2E92283F97D (VideoProperties_t6D7A73E485C96B765AD8710810E46D38907DFC0E* __this, int32_t ___width0, int32_t ___height1, int64_t ___duration2, float ___rotation3, const RuntimeMethod* method) ;
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Object::DontDestroyOnLoad(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_DontDestroyOnLoad_m303AA1C4DC810349F285B4809E426CBBA8F834F9 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___target0, const RuntimeMethod* method) ;
// System.Void System.Action::Invoke()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_Invoke_m7126A54DACA72B845424072887B5F3A51FC3808E_inline (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.AndroidJavaProxy::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidJavaProxy__ctor_m2832886A0E1BBF6702653A7C6A4609F11FB712C7 (AndroidJavaProxy_tE5521F9761F7B95444B9C39FB15FDFC23F80A78D* __this, String_t* ___javaInterface0, const RuntimeMethod* method) ;
// System.Void UnityEngine.GameObject::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject__ctor_m37D512B05D292F954792225E6C6EEE95293A9B88 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, String_t* ___name0, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::AddComponent<NativeCameraNamespace.NCCallbackHelper>()
inline NCCallbackHelper_tBA518C908F8A8D4DD1D896CC9C11AE23888F67CA* GameObject_AddComponent_TisNCCallbackHelper_tBA518C908F8A8D4DD1D896CC9C11AE23888F67CA_m58F9A27F8E2E59C5DA67176DBC1DDEE4B50743EE (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  NCCallbackHelper_tBA518C908F8A8D4DD1D896CC9C11AE23888F67CA* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_AddComponent_TisRuntimeObject_m69B93700FACCF372F5753371C6E8FB780800B824_gshared)(__this, method);
}
// System.Void NativeCameraNamespace.NCCameraCallbackAndroid/<>c__DisplayClass3_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass3_0__ctor_mAEE97D12D327C8C28EAB45ACDCB50E5DC04F50FB (U3CU3Ec__DisplayClass3_0_t6F61CA2BBD832CB410C9365B047308C3CAC6B850* __this, const RuntimeMethod* method) ;
// System.Void System.Action::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action__ctor_mBDC7B0B4A3F583B64C2896F01BDED360772F67DC (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Void NativeCameraNamespace.NCCallbackHelper::CallOnMainThread(System.Action)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void NCCallbackHelper_CallOnMainThread_mF4C7C68F199FEE8034F6E1EFFE293DB4D92D5192_inline (NCCallbackHelper_tBA518C908F8A8D4DD1D896CC9C11AE23888F67CA* __this, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___function0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Object::Destroy(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_Destroy_mFCDAE6333522488F60597AF019EA90BB1207A5AA (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___obj0, const RuntimeMethod* method) ;
// System.Void NativeCamera/CameraCallback::Invoke(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void CameraCallback_Invoke_mE8BD077A2F42B9DBC93521F630A1461381D3BB1A_inline (CameraCallback_tF33A274B891CCEC46FF206A2C3907F370B4FF771* __this, String_t* ___path0, const RuntimeMethod* method) ;
// System.Void NativeCameraNamespace.NCCameraCallbackAndroid::MediaReceiveCallback(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NCCameraCallbackAndroid_MediaReceiveCallback_m4D9DC4F284214D4860573AE1709C0CF0FC7E8ACA (NCCameraCallbackAndroid_t6321AB2CC0C23E0A0A06CD0D72847CE9149F9378* __this, String_t* ___path0, const RuntimeMethod* method) ;
// System.Void NativeCameraNamespace.NCPermissionCallbackAndroid::set_Result(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void NCPermissionCallbackAndroid_set_Result_m875E1D987FD8099207FD71BC8FCCE424DEA1DC6A_inline (NCPermissionCallbackAndroid_t018A82939BD516F7AC1B1295721A0EDB10B55D91* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Void System.Threading.Monitor::Pulse(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Monitor_Pulse_mCCD5C110AC8E4CD538E367C3414CA4E93F045419 (RuntimeObject* ___obj0, const RuntimeMethod* method) ;
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
// UnityEngine.AndroidJavaClass NativeCamera::get_AJC()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* NativeCamera_get_AJC_m73CFDF32E808503B9DA45584853DF691A8A5DF46 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeCamera_tE85F6A2EFD4BDD17480FD3FC273A67753E6C629F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral60765CA56083EB814A8E566B08E35D91D1000DEC);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if( m_ajc == null )
		AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* L_0 = ((NativeCamera_tE85F6A2EFD4BDD17480FD3FC273A67753E6C629F_StaticFields*)il2cpp_codegen_static_fields_for(NativeCamera_tE85F6A2EFD4BDD17480FD3FC273A67753E6C629F_il2cpp_TypeInfo_var))->___m_ajc_0;
		if (L_0)
		{
			goto IL_0016;
		}
	}
	{
		// m_ajc = new AndroidJavaClass( "com.yasirkula.unity.NativeCamera" );
		AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* L_1 = (AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03*)il2cpp_codegen_object_new(AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		AndroidJavaClass__ctor_mB5466169E1151B8CC44C8FED234D79984B431389(L_1, _stringLiteral60765CA56083EB814A8E566B08E35D91D1000DEC, NULL);
		((NativeCamera_tE85F6A2EFD4BDD17480FD3FC273A67753E6C629F_StaticFields*)il2cpp_codegen_static_fields_for(NativeCamera_tE85F6A2EFD4BDD17480FD3FC273A67753E6C629F_il2cpp_TypeInfo_var))->___m_ajc_0 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&((NativeCamera_tE85F6A2EFD4BDD17480FD3FC273A67753E6C629F_StaticFields*)il2cpp_codegen_static_fields_for(NativeCamera_tE85F6A2EFD4BDD17480FD3FC273A67753E6C629F_il2cpp_TypeInfo_var))->___m_ajc_0), (void*)L_1);
	}

IL_0016:
	{
		// return m_ajc;
		AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* L_2 = ((NativeCamera_tE85F6A2EFD4BDD17480FD3FC273A67753E6C629F_StaticFields*)il2cpp_codegen_static_fields_for(NativeCamera_tE85F6A2EFD4BDD17480FD3FC273A67753E6C629F_il2cpp_TypeInfo_var))->___m_ajc_0;
		return L_2;
	}
}
// UnityEngine.AndroidJavaObject NativeCamera::get_Context()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* NativeCamera_get_Context_mD85212EE2053033FFED6C4FD2181F7E69142132D (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_GetStatic_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_mD7D192A35EB2B2DA3775FAB081958B72088251DD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeCamera_tE85F6A2EFD4BDD17480FD3FC273A67753E6C629F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4D613657609485AE586A3379BA0E3FC13C1E1078);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFB4AE4F77150C3A8E8E4F8B23E734E0C7277B7D9);
		s_Il2CppMethodInitialized = true;
	}
	AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* V_0 = NULL;
	{
		// if( m_context == null )
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_0 = ((NativeCamera_tE85F6A2EFD4BDD17480FD3FC273A67753E6C629F_StaticFields*)il2cpp_codegen_static_fields_for(NativeCamera_tE85F6A2EFD4BDD17480FD3FC273A67753E6C629F_il2cpp_TypeInfo_var))->___m_context_1;
		if (L_0)
		{
			goto IL_002e;
		}
	}
	{
		// using( AndroidJavaObject unityClass = new AndroidJavaClass( "com.unity3d.player.UnityPlayer" ) )
		AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* L_1 = (AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03*)il2cpp_codegen_object_new(AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		AndroidJavaClass__ctor_mB5466169E1151B8CC44C8FED234D79984B431389(L_1, _stringLiteral4D613657609485AE586A3379BA0E3FC13C1E1078, NULL);
		V_0 = L_1;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0024:
			{// begin finally (depth: 1)
				{
					AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_2 = V_0;
					if (!L_2)
					{
						goto IL_002d;
					}
				}
				{
					AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_3 = V_0;
					NullCheck(L_3);
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_3);
				}

IL_002d:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			// m_context = unityClass.GetStatic<AndroidJavaObject>( "currentActivity" );
			AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_4 = V_0;
			NullCheck(L_4);
			AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_5;
			L_5 = AndroidJavaObject_GetStatic_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_mD7D192A35EB2B2DA3775FAB081958B72088251DD(L_4, _stringLiteralFB4AE4F77150C3A8E8E4F8B23E734E0C7277B7D9, AndroidJavaObject_GetStatic_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_mD7D192A35EB2B2DA3775FAB081958B72088251DD_RuntimeMethod_var);
			((NativeCamera_tE85F6A2EFD4BDD17480FD3FC273A67753E6C629F_StaticFields*)il2cpp_codegen_static_fields_for(NativeCamera_tE85F6A2EFD4BDD17480FD3FC273A67753E6C629F_il2cpp_TypeInfo_var))->___m_context_1 = L_5;
			Il2CppCodeGenWriteBarrier((void**)(&((NativeCamera_tE85F6A2EFD4BDD17480FD3FC273A67753E6C629F_StaticFields*)il2cpp_codegen_static_fields_for(NativeCamera_tE85F6A2EFD4BDD17480FD3FC273A67753E6C629F_il2cpp_TypeInfo_var))->___m_context_1), (void*)L_5);
			// }
			goto IL_002e;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_002e:
	{
		// return m_context;
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_6 = ((NativeCamera_tE85F6A2EFD4BDD17480FD3FC273A67753E6C629F_StaticFields*)il2cpp_codegen_static_fields_for(NativeCamera_tE85F6A2EFD4BDD17480FD3FC273A67753E6C629F_il2cpp_TypeInfo_var))->___m_context_1;
		return L_6;
	}
}
// System.String NativeCamera::get_TemporaryImagePath()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* NativeCamera_get_TemporaryImagePath_m221B228110E5AB222AAED3E1506E1D397A1A5995 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeCamera_tE85F6A2EFD4BDD17480FD3FC273A67753E6C629F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Path_t8A38A801D0219E8209C1B1D90D82D4D755D998BC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1256BD059A8D156C0578EF505C83E5862F0EFCD2);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if( m_temporaryImagePath == null )
		String_t* L_0 = ((NativeCamera_tE85F6A2EFD4BDD17480FD3FC273A67753E6C629F_StaticFields*)il2cpp_codegen_static_fields_for(NativeCamera_tE85F6A2EFD4BDD17480FD3FC273A67753E6C629F_il2cpp_TypeInfo_var))->___m_temporaryImagePath_2;
		if (L_0)
		{
			goto IL_0026;
		}
	}
	{
		// m_temporaryImagePath = Path.Combine( Application.temporaryCachePath, "tmpImg" );
		String_t* L_1;
		L_1 = Application_get_temporaryCachePath_m1C071883726EAFA66324E50FE73A1145272A4C60(NULL);
		il2cpp_codegen_runtime_class_init_inline(Path_t8A38A801D0219E8209C1B1D90D82D4D755D998BC_il2cpp_TypeInfo_var);
		String_t* L_2;
		L_2 = Path_Combine_m64754D4E08990CE1EBC41CDF197807EE4B115474(L_1, _stringLiteral1256BD059A8D156C0578EF505C83E5862F0EFCD2, NULL);
		((NativeCamera_tE85F6A2EFD4BDD17480FD3FC273A67753E6C629F_StaticFields*)il2cpp_codegen_static_fields_for(NativeCamera_tE85F6A2EFD4BDD17480FD3FC273A67753E6C629F_il2cpp_TypeInfo_var))->___m_temporaryImagePath_2 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&((NativeCamera_tE85F6A2EFD4BDD17480FD3FC273A67753E6C629F_StaticFields*)il2cpp_codegen_static_fields_for(NativeCamera_tE85F6A2EFD4BDD17480FD3FC273A67753E6C629F_il2cpp_TypeInfo_var))->___m_temporaryImagePath_2), (void*)L_2);
		// Directory.CreateDirectory( Application.temporaryCachePath );
		String_t* L_3;
		L_3 = Application_get_temporaryCachePath_m1C071883726EAFA66324E50FE73A1145272A4C60(NULL);
		DirectoryInfo_tEAEEC018EB49B4A71907FFEAFE935FAA8F9C1FE2* L_4;
		L_4 = Directory_CreateDirectory_mD89FECDFB25BC52F866DC0B1BB8552334FB249D2(L_3, NULL);
	}

IL_0026:
	{
		// return m_temporaryImagePath;
		String_t* L_5 = ((NativeCamera_tE85F6A2EFD4BDD17480FD3FC273A67753E6C629F_StaticFields*)il2cpp_codegen_static_fields_for(NativeCamera_tE85F6A2EFD4BDD17480FD3FC273A67753E6C629F_il2cpp_TypeInfo_var))->___m_temporaryImagePath_2;
		return L_5;
	}
}
// NativeCamera/Permission NativeCamera::CheckPermission()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeCamera_CheckPermission_m06A30246907F2F6461DD1217DE7CF5C18EF850BA (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_CallStatic_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m6619B03C8DA4F5A66785845A2E5B39DAEF36642A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral17A2974EBDD10F9D99410DD81D1AD62BFB8922B8);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral660F6D5965E09393894520A3BBDDAE9F5DEF81D2);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// Permission result = (Permission) AJC.CallStatic<int>( "CheckPermission", Context );
		AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* L_0;
		L_0 = NativeCamera_get_AJC_m73CFDF32E808503B9DA45584853DF691A8A5DF46(NULL);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = L_1;
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_3;
		L_3 = NativeCamera_get_Context_mD85212EE2053033FFED6C4FD2181F7E69142132D(NULL);
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, L_3);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_3);
		NullCheck(L_0);
		int32_t L_4;
		L_4 = AndroidJavaObject_CallStatic_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m6619B03C8DA4F5A66785845A2E5B39DAEF36642A(L_0, _stringLiteral660F6D5965E09393894520A3BBDDAE9F5DEF81D2, L_2, AndroidJavaObject_CallStatic_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m6619B03C8DA4F5A66785845A2E5B39DAEF36642A_RuntimeMethod_var);
		V_0 = L_4;
		// if( result == Permission.Denied && (Permission) PlayerPrefs.GetInt( "NativeCameraPermission", (int) Permission.ShouldAsk ) == Permission.ShouldAsk )
		int32_t L_5 = V_0;
		if (L_5)
		{
			goto IL_0031;
		}
	}
	{
		int32_t L_6;
		L_6 = PlayerPrefs_GetInt_mDCAA431AEC7CBAA6AF58857A8773E5B6B472285C(_stringLiteral17A2974EBDD10F9D99410DD81D1AD62BFB8922B8, 2, NULL);
		if ((!(((uint32_t)L_6) == ((uint32_t)2))))
		{
			goto IL_0031;
		}
	}
	{
		// result = Permission.ShouldAsk;
		V_0 = 2;
	}

IL_0031:
	{
		// return result;
		int32_t L_7 = V_0;
		return L_7;
	}
}
// NativeCamera/Permission NativeCamera::RequestPermission()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeCamera_RequestPermission_m46ABC92C5CD86175902A684172A504F52C033701 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NCPermissionCallbackAndroid_t018A82939BD516F7AC1B1295721A0EDB10B55D91_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0443845674FDE6986E4ECC72A8C096004DF51FC6);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral17A2974EBDD10F9D99410DD81D1AD62BFB8922B8);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	bool V_2 = false;
	NCPermissionCallbackAndroid_t018A82939BD516F7AC1B1295721A0EDB10B55D91* V_3 = NULL;
	int32_t V_4 = 0;
	{
		// object threadLock = new object();
		RuntimeObject* L_0 = (RuntimeObject*)il2cpp_codegen_object_new(RuntimeObject_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(L_0, NULL);
		V_0 = L_0;
		// lock( threadLock )
		RuntimeObject* L_1 = V_0;
		V_1 = L_1;
		V_2 = (bool)0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0098:
			{// begin finally (depth: 1)
				{
					bool L_2 = V_2;
					if (!L_2)
					{
						goto IL_00a1;
					}
				}
				{
					RuntimeObject* L_3 = V_1;
					Monitor_Exit_m25A154960F91391E10E4CDA245ECDF4BA94D56A9(L_3, NULL);
				}

IL_00a1:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				RuntimeObject* L_4 = V_1;
				Monitor_Enter_m00506757392936AA62DBE2C5FFBEE69EE920C4D4(L_4, (&V_2), NULL);
				// NCPermissionCallbackAndroid nativeCallback = new NCPermissionCallbackAndroid( threadLock );
				RuntimeObject* L_5 = V_0;
				NCPermissionCallbackAndroid_t018A82939BD516F7AC1B1295721A0EDB10B55D91* L_6 = (NCPermissionCallbackAndroid_t018A82939BD516F7AC1B1295721A0EDB10B55D91*)il2cpp_codegen_object_new(NCPermissionCallbackAndroid_t018A82939BD516F7AC1B1295721A0EDB10B55D91_il2cpp_TypeInfo_var);
				NullCheck(L_6);
				NCPermissionCallbackAndroid__ctor_mEE399CA43702611369BBFD6E72E3147E4C962FDC(L_6, L_5, NULL);
				V_3 = L_6;
				// AJC.CallStatic( "RequestPermission", Context, nativeCallback, PlayerPrefs.GetInt( "NativeCameraPermission", (int) Permission.ShouldAsk ) );
				AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* L_7;
				L_7 = NativeCamera_get_AJC_m73CFDF32E808503B9DA45584853DF691A8A5DF46(NULL);
				ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_8 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)3);
				ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_9 = L_8;
				AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_10;
				L_10 = NativeCamera_get_Context_mD85212EE2053033FFED6C4FD2181F7E69142132D(NULL);
				NullCheck(L_9);
				ArrayElementTypeCheck (L_9, L_10);
				(L_9)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_10);
				ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_11 = L_9;
				NCPermissionCallbackAndroid_t018A82939BD516F7AC1B1295721A0EDB10B55D91* L_12 = V_3;
				NullCheck(L_11);
				ArrayElementTypeCheck (L_11, L_12);
				(L_11)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)L_12);
				ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_13 = L_11;
				int32_t L_14;
				L_14 = PlayerPrefs_GetInt_mDCAA431AEC7CBAA6AF58857A8773E5B6B472285C(_stringLiteral17A2974EBDD10F9D99410DD81D1AD62BFB8922B8, 2, NULL);
				int32_t L_15 = L_14;
				RuntimeObject* L_16 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_15);
				NullCheck(L_13);
				ArrayElementTypeCheck (L_13, L_16);
				(L_13)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject*)L_16);
				NullCheck(L_7);
				AndroidJavaObject_CallStatic_mB677DE04369EDD8E6DECAF2F233116EE1F06555C(L_7, _stringLiteral0443845674FDE6986E4ECC72A8C096004DF51FC6, L_13, NULL);
				// if( nativeCallback.Result == -1 )
				NCPermissionCallbackAndroid_t018A82939BD516F7AC1B1295721A0EDB10B55D91* L_17 = V_3;
				NullCheck(L_17);
				int32_t L_18;
				L_18 = NCPermissionCallbackAndroid_get_Result_m0FBAA6C84093FCD7833C957E5C7CE381668100DF_inline(L_17, NULL);
				if ((!(((uint32_t)L_18) == ((uint32_t)(-1)))))
				{
					goto IL_005d_1;
				}
			}
			{
				// System.Threading.Monitor.Wait( threadLock );
				RuntimeObject* L_19 = V_0;
				bool L_20;
				L_20 = Monitor_Wait_m4E2A910D043438CDD5F8B9B9E82213C1E3CC8A78(L_19, NULL);
			}

IL_005d_1:
			{
				// if( (Permission) nativeCallback.Result != Permission.ShouldAsk && PlayerPrefs.GetInt( "NativeCameraPermission", -1 ) != nativeCallback.Result )
				NCPermissionCallbackAndroid_t018A82939BD516F7AC1B1295721A0EDB10B55D91* L_21 = V_3;
				NullCheck(L_21);
				int32_t L_22;
				L_22 = NCPermissionCallbackAndroid_get_Result_m0FBAA6C84093FCD7833C957E5C7CE381668100DF_inline(L_21, NULL);
				if ((((int32_t)L_22) == ((int32_t)2)))
				{
					goto IL_008e_1;
				}
			}
			{
				int32_t L_23;
				L_23 = PlayerPrefs_GetInt_mDCAA431AEC7CBAA6AF58857A8773E5B6B472285C(_stringLiteral17A2974EBDD10F9D99410DD81D1AD62BFB8922B8, (-1), NULL);
				NCPermissionCallbackAndroid_t018A82939BD516F7AC1B1295721A0EDB10B55D91* L_24 = V_3;
				NullCheck(L_24);
				int32_t L_25;
				L_25 = NCPermissionCallbackAndroid_get_Result_m0FBAA6C84093FCD7833C957E5C7CE381668100DF_inline(L_24, NULL);
				if ((((int32_t)L_23) == ((int32_t)L_25)))
				{
					goto IL_008e_1;
				}
			}
			{
				// PlayerPrefs.SetInt( "NativeCameraPermission", nativeCallback.Result );
				NCPermissionCallbackAndroid_t018A82939BD516F7AC1B1295721A0EDB10B55D91* L_26 = V_3;
				NullCheck(L_26);
				int32_t L_27;
				L_27 = NCPermissionCallbackAndroid_get_Result_m0FBAA6C84093FCD7833C957E5C7CE381668100DF_inline(L_26, NULL);
				PlayerPrefs_SetInt_mDC9617BFD56FEC670626A1002D9A5FE963D8D175(_stringLiteral17A2974EBDD10F9D99410DD81D1AD62BFB8922B8, L_27, NULL);
				// PlayerPrefs.Save();
				PlayerPrefs_Save_mCC9D4FCE00EA315AC967771D5D993E04CB742DFB(NULL);
			}

IL_008e_1:
			{
				// return (Permission) nativeCallback.Result;
				NCPermissionCallbackAndroid_t018A82939BD516F7AC1B1295721A0EDB10B55D91* L_28 = V_3;
				NullCheck(L_28);
				int32_t L_29;
				L_29 = NCPermissionCallbackAndroid_get_Result_m0FBAA6C84093FCD7833C957E5C7CE381668100DF_inline(L_28, NULL);
				V_4 = L_29;
				goto IL_00a2;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00a2:
	{
		// }
		int32_t L_30 = V_4;
		return L_30;
	}
}
// System.Boolean NativeCamera::CanOpenSettings()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NativeCamera_CanOpenSettings_m02AE37C921735B5D7D509F1B1083BE6CC2AA29A2 (const RuntimeMethod* method) 
{
	{
		// return true;
		return (bool)1;
	}
}
// System.Void NativeCamera::OpenSettings()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeCamera_OpenSettings_m28E2951F044CC27EE395AA724EB509FA3F1B6D8A (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8A4D2503591255173AC6769BB8A784B9CC5B5BC6);
		s_Il2CppMethodInitialized = true;
	}
	{
		// AJC.CallStatic( "OpenSettings", Context );
		AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* L_0;
		L_0 = NativeCamera_get_AJC_m73CFDF32E808503B9DA45584853DF691A8A5DF46(NULL);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = L_1;
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_3;
		L_3 = NativeCamera_get_Context_mD85212EE2053033FFED6C4FD2181F7E69142132D(NULL);
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, L_3);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_3);
		NullCheck(L_0);
		AndroidJavaObject_CallStatic_mB677DE04369EDD8E6DECAF2F233116EE1F06555C(L_0, _stringLiteral8A4D2503591255173AC6769BB8A784B9CC5B5BC6, L_2, NULL);
		// }
		return;
	}
}
// NativeCamera/Permission NativeCamera::TakePicture(NativeCamera/CameraCallback,System.Int32,System.Boolean,NativeCamera/PreferredCamera)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeCamera_TakePicture_m9A05C992E5CC9533034843E031609DAFFAAD5A22 (CameraCallback_tF33A274B891CCEC46FF206A2C3907F370B4FF771* ___callback0, int32_t ___maxSize1, bool ___saveAsJPEG2, int32_t ___preferredCamera3, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NCCameraCallbackAndroid_t6321AB2CC0C23E0A0A06CD0D72847CE9149F9378_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral811A5CF8DF2E4D4CA546FECCBB9A503DC8D89283);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// Permission result = RequestPermission();
		int32_t L_0;
		L_0 = NativeCamera_RequestPermission_m46ABC92C5CD86175902A684172A504F52C033701(NULL);
		V_0 = L_0;
		// if( result == Permission.Granted && !IsCameraBusy() )
		int32_t L_1 = V_0;
		if ((!(((uint32_t)L_1) == ((uint32_t)1))))
		{
			goto IL_0040;
		}
	}
	{
		bool L_2;
		L_2 = NativeCamera_IsCameraBusy_m51CF5A4EDD20433B30EA160508B3FFE07468B545(NULL);
		if (L_2)
		{
			goto IL_0040;
		}
	}
	{
		// AJC.CallStatic( "TakePicture", Context, new NCCameraCallbackAndroid( callback ), (int) preferredCamera );
		AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* L_3;
		L_3 = NativeCamera_get_AJC_m73CFDF32E808503B9DA45584853DF691A8A5DF46(NULL);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)3);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_5 = L_4;
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_6;
		L_6 = NativeCamera_get_Context_mD85212EE2053033FFED6C4FD2181F7E69142132D(NULL);
		NullCheck(L_5);
		ArrayElementTypeCheck (L_5, L_6);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_6);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_7 = L_5;
		CameraCallback_tF33A274B891CCEC46FF206A2C3907F370B4FF771* L_8 = ___callback0;
		NCCameraCallbackAndroid_t6321AB2CC0C23E0A0A06CD0D72847CE9149F9378* L_9 = (NCCameraCallbackAndroid_t6321AB2CC0C23E0A0A06CD0D72847CE9149F9378*)il2cpp_codegen_object_new(NCCameraCallbackAndroid_t6321AB2CC0C23E0A0A06CD0D72847CE9149F9378_il2cpp_TypeInfo_var);
		NullCheck(L_9);
		NCCameraCallbackAndroid__ctor_m7A49A723EBFBFC7215432493733AFCF632A8F5AA(L_9, L_8, NULL);
		NullCheck(L_7);
		ArrayElementTypeCheck (L_7, L_9);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)L_9);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_10 = L_7;
		int32_t L_11 = ___preferredCamera3;
		int32_t L_12 = ((int32_t)L_11);
		RuntimeObject* L_13 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_12);
		NullCheck(L_10);
		ArrayElementTypeCheck (L_10, L_13);
		(L_10)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject*)L_13);
		NullCheck(L_3);
		AndroidJavaObject_CallStatic_mB677DE04369EDD8E6DECAF2F233116EE1F06555C(L_3, _stringLiteral811A5CF8DF2E4D4CA546FECCBB9A503DC8D89283, L_10, NULL);
	}

IL_0040:
	{
		// return result;
		int32_t L_14 = V_0;
		return L_14;
	}
}
// NativeCamera/Permission NativeCamera::RecordVideo(NativeCamera/CameraCallback,NativeCamera/Quality,System.Int32,System.Int64,NativeCamera/PreferredCamera)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeCamera_RecordVideo_mB0C5B35FD93199AF7FE6F0A61748740770F58A35 (CameraCallback_tF33A274B891CCEC46FF206A2C3907F370B4FF771* ___callback0, int32_t ___quality1, int32_t ___maxDuration2, int64_t ___maxSizeBytes3, int32_t ___preferredCamera4, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NCCameraCallbackAndroid_t6321AB2CC0C23E0A0A06CD0D72847CE9149F9378_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFFB00AB07E4FD5417BED928D76EA5DBF492DFDAE);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// Permission result = RequestPermission();
		int32_t L_0;
		L_0 = NativeCamera_RequestPermission_m46ABC92C5CD86175902A684172A504F52C033701(NULL);
		V_0 = L_0;
		// if( result == Permission.Granted && !IsCameraBusy() )
		int32_t L_1 = V_0;
		if ((!(((uint32_t)L_1) == ((uint32_t)1))))
		{
			goto IL_005c;
		}
	}
	{
		bool L_2;
		L_2 = NativeCamera_IsCameraBusy_m51CF5A4EDD20433B30EA160508B3FFE07468B545(NULL);
		if (L_2)
		{
			goto IL_005c;
		}
	}
	{
		// AJC.CallStatic( "RecordVideo", Context, new NCCameraCallbackAndroid( callback ), (int) preferredCamera, (int) quality, maxDuration, maxSizeBytes );
		AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* L_3;
		L_3 = NativeCamera_get_AJC_m73CFDF32E808503B9DA45584853DF691A8A5DF46(NULL);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)6);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_5 = L_4;
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_6;
		L_6 = NativeCamera_get_Context_mD85212EE2053033FFED6C4FD2181F7E69142132D(NULL);
		NullCheck(L_5);
		ArrayElementTypeCheck (L_5, L_6);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_6);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_7 = L_5;
		CameraCallback_tF33A274B891CCEC46FF206A2C3907F370B4FF771* L_8 = ___callback0;
		NCCameraCallbackAndroid_t6321AB2CC0C23E0A0A06CD0D72847CE9149F9378* L_9 = (NCCameraCallbackAndroid_t6321AB2CC0C23E0A0A06CD0D72847CE9149F9378*)il2cpp_codegen_object_new(NCCameraCallbackAndroid_t6321AB2CC0C23E0A0A06CD0D72847CE9149F9378_il2cpp_TypeInfo_var);
		NullCheck(L_9);
		NCCameraCallbackAndroid__ctor_m7A49A723EBFBFC7215432493733AFCF632A8F5AA(L_9, L_8, NULL);
		NullCheck(L_7);
		ArrayElementTypeCheck (L_7, L_9);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)L_9);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_10 = L_7;
		int32_t L_11 = ___preferredCamera4;
		int32_t L_12 = ((int32_t)L_11);
		RuntimeObject* L_13 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_12);
		NullCheck(L_10);
		ArrayElementTypeCheck (L_10, L_13);
		(L_10)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject*)L_13);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_14 = L_10;
		int32_t L_15 = ___quality1;
		int32_t L_16 = ((int32_t)L_15);
		RuntimeObject* L_17 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_16);
		NullCheck(L_14);
		ArrayElementTypeCheck (L_14, L_17);
		(L_14)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject*)L_17);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_18 = L_14;
		int32_t L_19 = ___maxDuration2;
		int32_t L_20 = L_19;
		RuntimeObject* L_21 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_20);
		NullCheck(L_18);
		ArrayElementTypeCheck (L_18, L_21);
		(L_18)->SetAt(static_cast<il2cpp_array_size_t>(4), (RuntimeObject*)L_21);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_22 = L_18;
		int64_t L_23 = ___maxSizeBytes3;
		int64_t L_24 = L_23;
		RuntimeObject* L_25 = Box(Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_il2cpp_TypeInfo_var, &L_24);
		NullCheck(L_22);
		ArrayElementTypeCheck (L_22, L_25);
		(L_22)->SetAt(static_cast<il2cpp_array_size_t>(5), (RuntimeObject*)L_25);
		NullCheck(L_3);
		AndroidJavaObject_CallStatic_mB677DE04369EDD8E6DECAF2F233116EE1F06555C(L_3, _stringLiteralFFB00AB07E4FD5417BED928D76EA5DBF492DFDAE, L_22, NULL);
	}

IL_005c:
	{
		// return result;
		int32_t L_26 = V_0;
		return L_26;
	}
}
// System.Boolean NativeCamera::DeviceHasCamera()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NativeCamera_DeviceHasCamera_mCB870670CBFFA6FA474DDD4BA92CBBC2F1E1915F (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_CallStatic_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mE956BC9A30BEC746DE593C53C1B8DB6A685185A6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBB89381AF6FA67A07F15BA3C2582693F59E071ED);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return AJC.CallStatic<bool>( "HasCamera", Context );
		AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* L_0;
		L_0 = NativeCamera_get_AJC_m73CFDF32E808503B9DA45584853DF691A8A5DF46(NULL);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = L_1;
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_3;
		L_3 = NativeCamera_get_Context_mD85212EE2053033FFED6C4FD2181F7E69142132D(NULL);
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, L_3);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_3);
		NullCheck(L_0);
		bool L_4;
		L_4 = AndroidJavaObject_CallStatic_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mE956BC9A30BEC746DE593C53C1B8DB6A685185A6(L_0, _stringLiteralBB89381AF6FA67A07F15BA3C2582693F59E071ED, L_2, AndroidJavaObject_CallStatic_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mE956BC9A30BEC746DE593C53C1B8DB6A685185A6_RuntimeMethod_var);
		return L_4;
	}
}
// System.Boolean NativeCamera::IsCameraBusy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NativeCamera_IsCameraBusy_m51CF5A4EDD20433B30EA160508B3FFE07468B545 (const RuntimeMethod* method) 
{
	{
		// return false;
		return (bool)0;
	}
}
// UnityEngine.Texture2D NativeCamera::LoadImageAtPath(System.String,System.Int32,System.Boolean,System.Boolean,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* NativeCamera_LoadImageAtPath_mE8E129DF8079EE8F032E1D1BEAD7CF65D8E42741 (String_t* ___imagePath0, int32_t ___maxSize1, bool ___markTextureNonReadable2, bool ___generateMipmaps3, bool ___linearColorSpace4, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_CallStatic_TisString_t_mB5DC41208BD7C326A089C20F4F1C2B8B2444ACC3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Path_t8A38A801D0219E8209C1B1D90D82D4D755D998BC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral23DF9991B71463C240582D176E347E7E47AEFF5A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4B9B40AAD718882F5C0B95FE844E4AA92BD49C42);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDD146CE30524569A8784D1FFE34EA505C910727D);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	String_t* V_1 = NULL;
	int32_t V_2 = 0;
	Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* V_3 = NULL;
	Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* V_4 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	int32_t G_B10_0 = 0;
	{
		// if( string.IsNullOrEmpty( imagePath ) )
		String_t* L_0 = ___imagePath0;
		bool L_1;
		L_1 = String_IsNullOrEmpty_m54CF0907E7C4F3AFB2E796A13DC751ECBB8DB64A(L_0, NULL);
		if (!L_1)
		{
			goto IL_0013;
		}
	}
	{
		// throw new ArgumentException( "Parameter 'imagePath' is null or empty!" );
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_2 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		NullCheck(L_2);
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral18B82B6B7DC4FE1988BA61A3784D1768F6C925DF)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NativeCamera_LoadImageAtPath_mE8E129DF8079EE8F032E1D1BEAD7CF65D8E42741_RuntimeMethod_var)));
	}

IL_0013:
	{
		// if( !File.Exists( imagePath ) )
		String_t* L_3 = ___imagePath0;
		bool L_4;
		L_4 = File_Exists_mD7E7A84A6B9E9A9BADBDA7C46AAE0624EF106D85(L_3, NULL);
		if (L_4)
		{
			goto IL_002c;
		}
	}
	{
		// throw new FileNotFoundException( "File not found at " + imagePath );
		String_t* L_5 = ___imagePath0;
		String_t* L_6;
		L_6 = String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral491B4D9271839F0BD63211437BF7CEE5B2C6ADE9)), L_5, NULL);
		FileNotFoundException_t17F1B49AD996E4A60C87C7ADC9D3A25EB5808A9A* L_7 = (FileNotFoundException_t17F1B49AD996E4A60C87C7ADC9D3A25EB5808A9A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&FileNotFoundException_t17F1B49AD996E4A60C87C7ADC9D3A25EB5808A9A_il2cpp_TypeInfo_var)));
		NullCheck(L_7);
		FileNotFoundException__ctor_mA8C9C93DB8C5B96D6B5E59B2AE07154F265FB1A1(L_7, L_6, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_7, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NativeCamera_LoadImageAtPath_mE8E129DF8079EE8F032E1D1BEAD7CF65D8E42741_RuntimeMethod_var)));
	}

IL_002c:
	{
		// if( maxSize <= 0 )
		int32_t L_8 = ___maxSize1;
		if ((((int32_t)L_8) > ((int32_t)0)))
		{
			goto IL_0037;
		}
	}
	{
		// maxSize = SystemInfo.maxTextureSize;
		int32_t L_9;
		L_9 = SystemInfo_get_maxTextureSize_mB4272D4D85179CEF11FF1CDB3E8F3786D10CA04E(NULL);
		___maxSize1 = L_9;
	}

IL_0037:
	{
		// string loadPath = AJC.CallStatic<string>( "LoadImageAtPath", Context, imagePath, TemporaryImagePath, maxSize );
		AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* L_10;
		L_10 = NativeCamera_get_AJC_m73CFDF32E808503B9DA45584853DF691A8A5DF46(NULL);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_11 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)4);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_12 = L_11;
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_13;
		L_13 = NativeCamera_get_Context_mD85212EE2053033FFED6C4FD2181F7E69142132D(NULL);
		NullCheck(L_12);
		ArrayElementTypeCheck (L_12, L_13);
		(L_12)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_13);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_14 = L_12;
		String_t* L_15 = ___imagePath0;
		NullCheck(L_14);
		ArrayElementTypeCheck (L_14, L_15);
		(L_14)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)L_15);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_16 = L_14;
		String_t* L_17;
		L_17 = NativeCamera_get_TemporaryImagePath_m221B228110E5AB222AAED3E1506E1D397A1A5995(NULL);
		NullCheck(L_16);
		ArrayElementTypeCheck (L_16, L_17);
		(L_16)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject*)L_17);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_18 = L_16;
		int32_t L_19 = ___maxSize1;
		int32_t L_20 = L_19;
		RuntimeObject* L_21 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_20);
		NullCheck(L_18);
		ArrayElementTypeCheck (L_18, L_21);
		(L_18)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject*)L_21);
		NullCheck(L_10);
		String_t* L_22;
		L_22 = AndroidJavaObject_CallStatic_TisString_t_mB5DC41208BD7C326A089C20F4F1C2B8B2444ACC3(L_10, _stringLiteralDD146CE30524569A8784D1FFE34EA505C910727D, L_18, AndroidJavaObject_CallStatic_TisString_t_mB5DC41208BD7C326A089C20F4F1C2B8B2444ACC3_RuntimeMethod_var);
		V_0 = L_22;
		// string extension = Path.GetExtension( imagePath ).ToLowerInvariant();
		String_t* L_23 = ___imagePath0;
		il2cpp_codegen_runtime_class_init_inline(Path_t8A38A801D0219E8209C1B1D90D82D4D755D998BC_il2cpp_TypeInfo_var);
		String_t* L_24;
		L_24 = Path_GetExtension_m52A28295599B87FA550D0654E531B56354C540C7(L_23, NULL);
		NullCheck(L_24);
		String_t* L_25;
		L_25 = String_ToLowerInvariant_mBE32C93DE27C5353FEA3FA654FC1DDBE3D0EB0F2(L_24, NULL);
		V_1 = L_25;
		// TextureFormat format = ( extension == ".jpg" || extension == ".jpeg" ) ? TextureFormat.RGB24 : TextureFormat.RGBA32;
		String_t* L_26 = V_1;
		bool L_27;
		L_27 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_26, _stringLiteral23DF9991B71463C240582D176E347E7E47AEFF5A, NULL);
		if (L_27)
		{
			goto IL_0093;
		}
	}
	{
		String_t* L_28 = V_1;
		bool L_29;
		L_29 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_28, _stringLiteral4B9B40AAD718882F5C0B95FE844E4AA92BD49C42, NULL);
		if (L_29)
		{
			goto IL_0093;
		}
	}
	{
		G_B10_0 = 4;
		goto IL_0094;
	}

IL_0093:
	{
		G_B10_0 = 3;
	}

IL_0094:
	{
		V_2 = G_B10_0;
		// Texture2D result = new Texture2D( 2, 2, format, generateMipmaps, linearColorSpace );
		int32_t L_30 = V_2;
		bool L_31 = ___generateMipmaps3;
		bool L_32 = ___linearColorSpace4;
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_33 = (Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4*)il2cpp_codegen_object_new(Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4_il2cpp_TypeInfo_var);
		NullCheck(L_33);
		Texture2D__ctor_mC3F84195D1DCEFC0536B3FBD40A8F8E865A4F32A(L_33, 2, 2, L_30, L_31, L_32, NULL);
		V_3 = L_33;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_00cd:
			{// begin finally (depth: 1)
				{
					// if( loadPath != imagePath )
					String_t* L_34 = V_0;
					String_t* L_35 = ___imagePath0;
					bool L_36;
					L_36 = String_op_Inequality_m0FBE5AC4931D312E5B347BAA603755676E6DA2FE(L_34, L_35, NULL);
					if (!L_36)
					{
						goto IL_00e1;
					}
				}
				try
				{// begin try (depth: 2)
					// File.Delete( loadPath );
					String_t* L_37 = V_0;
					File_Delete_mB5CB249F5370D49747243BCA9C56CCC48D3E6A08(L_37, NULL);
					// }
					goto IL_00e1;
				}// end try (depth: 2)
				catch(Il2CppExceptionWrapper& e)
				{
					if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
					{
						IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
						goto CATCH_00de;
					}
					throw e;
				}

CATCH_00de:
				{// begin catch(System.Object)
					// catch { }
					// catch { }
					IL2CPP_POP_ACTIVE_EXCEPTION();
					goto IL_00e1;
				}// end catch (depth: 2)

IL_00e1:
				{
					// }
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			try
			{// begin try (depth: 2)
				{
					// if( !result.LoadImage( File.ReadAllBytes( loadPath ), markTextureNonReadable ) )
					Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_38 = V_3;
					String_t* L_39 = V_0;
					ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_40;
					L_40 = File_ReadAllBytes_mE0C2C5A0270CD40C496E85B1D8BA15C607E7011E(L_39, NULL);
					bool L_41 = ___markTextureNonReadable2;
					bool L_42;
					L_42 = ImageConversion_LoadImage_mE2D612F3895FDD7A87805E1C9D77A79C019213E2(L_38, L_40, L_41, NULL);
					if (L_42)
					{
						goto IL_00bb_2;
					}
				}
				{
					// Object.DestroyImmediate( result );
					Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_43 = V_3;
					il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
					Object_DestroyImmediate_m8249CABCDF344BE3A67EE765122EBB415DC2BC57(L_43, NULL);
					// return null;
					V_4 = (Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4*)NULL;
					goto IL_00e4;
				}

IL_00bb_2:
				{
					// }
					goto IL_00e2;
				}
			}// end try (depth: 2)
			catch(Il2CppExceptionWrapper& e)
			{
				if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
				{
					IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
					goto CATCH_00bd_1;
				}
				throw e;
			}

CATCH_00bd_1:
			{// begin catch(System.Exception)
				// Debug.LogException( e );
				il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var)));
				Debug_LogException_m82E44FEC6B03BC34AFC2CAF6583051570C60CB9E(((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*)), NULL);
				// Object.DestroyImmediate( result );
				Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_44 = V_3;
				il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var)));
				Object_DestroyImmediate_m8249CABCDF344BE3A67EE765122EBB415DC2BC57(L_44, NULL);
				// return null;
				V_4 = (Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4*)NULL;
				IL2CPP_POP_ACTIVE_EXCEPTION();
				goto IL_00e4;
			}// end catch (depth: 2)
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00e2:
	{
		// return result;
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_45 = V_3;
		return L_45;
	}

IL_00e4:
	{
		// }
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_46 = V_4;
		return L_46;
	}
}
// UnityEngine.Texture2D NativeCamera::GetVideoThumbnail(System.String,System.Int32,System.Double,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* NativeCamera_GetVideoThumbnail_m7E7FAAD172E6668E0CADB5142D354314C8C0103B (String_t* ___videoPath0, int32_t ___maxSize1, double ___captureTimeInSeconds2, bool ___markTextureNonReadable3, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_CallStatic_TisString_t_mB5DC41208BD7C326A089C20F4F1C2B8B2444ACC3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5D67C2D23D0E67BA40CD70B037A9F218807BB46F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA15C898F015A9B0BC3268E8883CD03008A56DE26);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		// if( maxSize <= 0 )
		int32_t L_0 = ___maxSize1;
		if ((((int32_t)L_0) > ((int32_t)0)))
		{
			goto IL_000b;
		}
	}
	{
		// maxSize = SystemInfo.maxTextureSize;
		int32_t L_1;
		L_1 = SystemInfo_get_maxTextureSize_mB4272D4D85179CEF11FF1CDB3E8F3786D10CA04E(NULL);
		___maxSize1 = L_1;
	}

IL_000b:
	{
		// string thumbnailPath = AJC.CallStatic<string>( "GetVideoThumbnail", Context, videoPath, TemporaryImagePath + ".png", false, maxSize, captureTimeInSeconds );
		AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* L_2;
		L_2 = NativeCamera_get_AJC_m73CFDF32E808503B9DA45584853DF691A8A5DF46(NULL);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_3 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)6);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = L_3;
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_5;
		L_5 = NativeCamera_get_Context_mD85212EE2053033FFED6C4FD2181F7E69142132D(NULL);
		NullCheck(L_4);
		ArrayElementTypeCheck (L_4, L_5);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_5);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_6 = L_4;
		String_t* L_7 = ___videoPath0;
		NullCheck(L_6);
		ArrayElementTypeCheck (L_6, L_7);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)L_7);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_8 = L_6;
		String_t* L_9;
		L_9 = NativeCamera_get_TemporaryImagePath_m221B228110E5AB222AAED3E1506E1D397A1A5995(NULL);
		String_t* L_10;
		L_10 = String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D(L_9, _stringLiteralA15C898F015A9B0BC3268E8883CD03008A56DE26, NULL);
		NullCheck(L_8);
		ArrayElementTypeCheck (L_8, L_10);
		(L_8)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject*)L_10);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_11 = L_8;
		bool L_12 = ((bool)0);
		RuntimeObject* L_13 = Box(Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var, &L_12);
		NullCheck(L_11);
		ArrayElementTypeCheck (L_11, L_13);
		(L_11)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject*)L_13);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_14 = L_11;
		int32_t L_15 = ___maxSize1;
		int32_t L_16 = L_15;
		RuntimeObject* L_17 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_16);
		NullCheck(L_14);
		ArrayElementTypeCheck (L_14, L_17);
		(L_14)->SetAt(static_cast<il2cpp_array_size_t>(4), (RuntimeObject*)L_17);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_18 = L_14;
		double L_19 = ___captureTimeInSeconds2;
		double L_20 = L_19;
		RuntimeObject* L_21 = Box(Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_il2cpp_TypeInfo_var, &L_20);
		NullCheck(L_18);
		ArrayElementTypeCheck (L_18, L_21);
		(L_18)->SetAt(static_cast<il2cpp_array_size_t>(5), (RuntimeObject*)L_21);
		NullCheck(L_2);
		String_t* L_22;
		L_22 = AndroidJavaObject_CallStatic_TisString_t_mB5DC41208BD7C326A089C20F4F1C2B8B2444ACC3(L_2, _stringLiteral5D67C2D23D0E67BA40CD70B037A9F218807BB46F, L_18, AndroidJavaObject_CallStatic_TisString_t_mB5DC41208BD7C326A089C20F4F1C2B8B2444ACC3_RuntimeMethod_var);
		V_0 = L_22;
		// if( !string.IsNullOrEmpty( thumbnailPath ) )
		String_t* L_23 = V_0;
		bool L_24;
		L_24 = String_IsNullOrEmpty_m54CF0907E7C4F3AFB2E796A13DC751ECBB8DB64A(L_23, NULL);
		if (L_24)
		{
			goto IL_006d;
		}
	}
	{
		// return LoadImageAtPath( thumbnailPath, maxSize, markTextureNonReadable );
		String_t* L_25 = V_0;
		int32_t L_26 = ___maxSize1;
		bool L_27 = ___markTextureNonReadable3;
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_28;
		L_28 = NativeCamera_LoadImageAtPath_mE8E129DF8079EE8F032E1D1BEAD7CF65D8E42741(L_25, L_26, L_27, (bool)1, (bool)0, NULL);
		return L_28;
	}

IL_006d:
	{
		// return null;
		return (Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4*)NULL;
	}
}
// NativeCamera/ImageProperties NativeCamera::GetImageProperties(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ImageProperties_t58867341A9993287DFFDD26325DE0EE68DD52E46 NativeCamera_GetImageProperties_mA0EF15B8F3C7392235349C4385E894C0660D4DEB (String_t* ___imagePath0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_CallStatic_TisString_t_mB5DC41208BD7C326A089C20F4F1C2B8B2444ACC3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Path_t8A38A801D0219E8209C1B1D90D82D4D755D998BC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0CA4721FC9D82D780671DE2AB61257837402697D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral23DF9991B71463C240582D176E347E7E47AEFF5A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3E96C9BB1B953A85290371E8CE7BB3F3ABB307CC);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4B9B40AAD718882F5C0B95FE844E4AA92BD49C42);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral75E05143EB132AAA8A22B48813DB8E6047380821);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral985B72B30ECE05DD4EF5FE142CEE0FB8BF53A98C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA15C898F015A9B0BC3268E8883CD03008A56DE26);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA3A21FB44DD18299A19A0B86BA27CEB4EDA6A941);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAFF4AA19F30B5DC5A240F413D92917103536F1AD);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCB4507437E3E619ECBAD84410155675EBEB3DB3F);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	String_t* V_3 = NULL;
	int32_t V_4 = 0;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* V_5 = NULL;
	int32_t V_6 = 0;
	String_t* V_7 = NULL;
	{
		// if( !File.Exists( imagePath ) )
		String_t* L_0 = ___imagePath0;
		bool L_1;
		L_1 = File_Exists_mD7E7A84A6B9E9A9BADBDA7C46AAE0624EF106D85(L_0, NULL);
		if (L_1)
		{
			goto IL_0019;
		}
	}
	{
		// throw new FileNotFoundException( "File not found at " + imagePath );
		String_t* L_2 = ___imagePath0;
		String_t* L_3;
		L_3 = String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral491B4D9271839F0BD63211437BF7CEE5B2C6ADE9)), L_2, NULL);
		FileNotFoundException_t17F1B49AD996E4A60C87C7ADC9D3A25EB5808A9A* L_4 = (FileNotFoundException_t17F1B49AD996E4A60C87C7ADC9D3A25EB5808A9A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&FileNotFoundException_t17F1B49AD996E4A60C87C7ADC9D3A25EB5808A9A_il2cpp_TypeInfo_var)));
		NullCheck(L_4);
		FileNotFoundException__ctor_mA8C9C93DB8C5B96D6B5E59B2AE07154F265FB1A1(L_4, L_3, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NativeCamera_GetImageProperties_mA0EF15B8F3C7392235349C4385E894C0660D4DEB_RuntimeMethod_var)));
	}

IL_0019:
	{
		// string value = AJC.CallStatic<string>( "GetImageProperties", Context, imagePath );
		AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* L_5;
		L_5 = NativeCamera_get_AJC_m73CFDF32E808503B9DA45584853DF691A8A5DF46(NULL);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_6 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)2);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_7 = L_6;
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_8;
		L_8 = NativeCamera_get_Context_mD85212EE2053033FFED6C4FD2181F7E69142132D(NULL);
		NullCheck(L_7);
		ArrayElementTypeCheck (L_7, L_8);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_8);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_9 = L_7;
		String_t* L_10 = ___imagePath0;
		NullCheck(L_9);
		ArrayElementTypeCheck (L_9, L_10);
		(L_9)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)L_10);
		NullCheck(L_5);
		String_t* L_11;
		L_11 = AndroidJavaObject_CallStatic_TisString_t_mB5DC41208BD7C326A089C20F4F1C2B8B2444ACC3(L_5, _stringLiteralA3A21FB44DD18299A19A0B86BA27CEB4EDA6A941, L_9, AndroidJavaObject_CallStatic_TisString_t_mB5DC41208BD7C326A089C20F4F1C2B8B2444ACC3_RuntimeMethod_var);
		V_0 = L_11;
		// int width = 0, height = 0;
		V_1 = 0;
		// int width = 0, height = 0;
		V_2 = 0;
		// string mimeType = null;
		V_3 = (String_t*)NULL;
		// ImageOrientation orientation = ImageOrientation.Unknown;
		V_4 = (-1);
		// if( !string.IsNullOrEmpty( value ) )
		String_t* L_12 = V_0;
		bool L_13;
		L_13 = String_IsNullOrEmpty_m54CF0907E7C4F3AFB2E796A13DC751ECBB8DB64A(L_12, NULL);
		if (L_13)
		{
			goto IL_0130;
		}
	}
	{
		// string[] properties = value.Split( '>' );
		String_t* L_14 = V_0;
		NullCheck(L_14);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_15;
		L_15 = String_Split_m9530B73D02054692283BF35C3A27C8F2230946F4(L_14, ((int32_t)62), 0, NULL);
		V_5 = L_15;
		// if( properties != null && properties.Length >= 4 )
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_16 = V_5;
		if (!L_16)
		{
			goto IL_0130;
		}
	}
	{
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_17 = V_5;
		NullCheck(L_17);
		if ((((int32_t)((int32_t)(((RuntimeArray*)L_17)->max_length))) < ((int32_t)4)))
		{
			goto IL_0130;
		}
	}
	{
		// if( !int.TryParse( properties[0].Trim(), out width ) )
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_18 = V_5;
		NullCheck(L_18);
		int32_t L_19 = 0;
		String_t* L_20 = (L_18)->GetAt(static_cast<il2cpp_array_size_t>(L_19));
		NullCheck(L_20);
		String_t* L_21;
		L_21 = String_Trim_mCD6D8C6D4CFD15225D12DB7D3E0544CA80FB8DA5(L_20, NULL);
		bool L_22;
		L_22 = Int32_TryParse_mFC6BFCB86964E2BCA4052155B10983837A695EA4(L_21, (&V_1), NULL);
		if (L_22)
		{
			goto IL_007f;
		}
	}
	{
		// width = 0;
		V_1 = 0;
	}

IL_007f:
	{
		// if( !int.TryParse( properties[1].Trim(), out height ) )
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_23 = V_5;
		NullCheck(L_23);
		int32_t L_24 = 1;
		String_t* L_25 = (L_23)->GetAt(static_cast<il2cpp_array_size_t>(L_24));
		NullCheck(L_25);
		String_t* L_26;
		L_26 = String_Trim_mCD6D8C6D4CFD15225D12DB7D3E0544CA80FB8DA5(L_25, NULL);
		bool L_27;
		L_27 = Int32_TryParse_mFC6BFCB86964E2BCA4052155B10983837A695EA4(L_26, (&V_2), NULL);
		if (L_27)
		{
			goto IL_0093;
		}
	}
	{
		// height = 0;
		V_2 = 0;
	}

IL_0093:
	{
		// mimeType = properties[2].Trim();
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_28 = V_5;
		NullCheck(L_28);
		int32_t L_29 = 2;
		String_t* L_30 = (L_28)->GetAt(static_cast<il2cpp_array_size_t>(L_29));
		NullCheck(L_30);
		String_t* L_31;
		L_31 = String_Trim_mCD6D8C6D4CFD15225D12DB7D3E0544CA80FB8DA5(L_30, NULL);
		V_3 = L_31;
		// if( mimeType.Length == 0 )
		String_t* L_32 = V_3;
		NullCheck(L_32);
		int32_t L_33;
		L_33 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_32, NULL);
		if (L_33)
		{
			goto IL_011a;
		}
	}
	{
		// string extension = Path.GetExtension( imagePath ).ToLowerInvariant();
		String_t* L_34 = ___imagePath0;
		il2cpp_codegen_runtime_class_init_inline(Path_t8A38A801D0219E8209C1B1D90D82D4D755D998BC_il2cpp_TypeInfo_var);
		String_t* L_35;
		L_35 = Path_GetExtension_m52A28295599B87FA550D0654E531B56354C540C7(L_34, NULL);
		NullCheck(L_35);
		String_t* L_36;
		L_36 = String_ToLowerInvariant_mBE32C93DE27C5353FEA3FA654FC1DDBE3D0EB0F2(L_35, NULL);
		V_7 = L_36;
		// if( extension == ".png" )
		String_t* L_37 = V_7;
		bool L_38;
		L_38 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_37, _stringLiteralA15C898F015A9B0BC3268E8883CD03008A56DE26, NULL);
		if (!L_38)
		{
			goto IL_00c8;
		}
	}
	{
		// mimeType = "image/png";
		V_3 = _stringLiteral75E05143EB132AAA8A22B48813DB8E6047380821;
		goto IL_011a;
	}

IL_00c8:
	{
		// else if( extension == ".jpg" || extension == ".jpeg" )
		String_t* L_39 = V_7;
		bool L_40;
		L_40 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_39, _stringLiteral23DF9991B71463C240582D176E347E7E47AEFF5A, NULL);
		if (L_40)
		{
			goto IL_00e4;
		}
	}
	{
		String_t* L_41 = V_7;
		bool L_42;
		L_42 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_41, _stringLiteral4B9B40AAD718882F5C0B95FE844E4AA92BD49C42, NULL);
		if (!L_42)
		{
			goto IL_00ec;
		}
	}

IL_00e4:
	{
		// mimeType = "image/jpeg";
		V_3 = _stringLiteral3E96C9BB1B953A85290371E8CE7BB3F3ABB307CC;
		goto IL_011a;
	}

IL_00ec:
	{
		// else if( extension == ".gif" )
		String_t* L_43 = V_7;
		bool L_44;
		L_44 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_43, _stringLiteral0CA4721FC9D82D780671DE2AB61257837402697D, NULL);
		if (!L_44)
		{
			goto IL_0102;
		}
	}
	{
		// mimeType = "image/gif";
		V_3 = _stringLiteralAFF4AA19F30B5DC5A240F413D92917103536F1AD;
		goto IL_011a;
	}

IL_0102:
	{
		// else if( extension == ".bmp" )
		String_t* L_45 = V_7;
		bool L_46;
		L_46 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_45, _stringLiteral985B72B30ECE05DD4EF5FE142CEE0FB8BF53A98C, NULL);
		if (!L_46)
		{
			goto IL_0118;
		}
	}
	{
		// mimeType = "image/bmp";
		V_3 = _stringLiteralCB4507437E3E619ECBAD84410155675EBEB3DB3F;
		goto IL_011a;
	}

IL_0118:
	{
		// mimeType = null;
		V_3 = (String_t*)NULL;
	}

IL_011a:
	{
		// if( int.TryParse( properties[3].Trim(), out orientationInt ) )
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_47 = V_5;
		NullCheck(L_47);
		int32_t L_48 = 3;
		String_t* L_49 = (L_47)->GetAt(static_cast<il2cpp_array_size_t>(L_48));
		NullCheck(L_49);
		String_t* L_50;
		L_50 = String_Trim_mCD6D8C6D4CFD15225D12DB7D3E0544CA80FB8DA5(L_49, NULL);
		bool L_51;
		L_51 = Int32_TryParse_mFC6BFCB86964E2BCA4052155B10983837A695EA4(L_50, (&V_6), NULL);
		if (!L_51)
		{
			goto IL_0130;
		}
	}
	{
		// orientation = (ImageOrientation) orientationInt;
		int32_t L_52 = V_6;
		V_4 = L_52;
	}

IL_0130:
	{
		// return new ImageProperties( width, height, mimeType, orientation );
		int32_t L_53 = V_1;
		int32_t L_54 = V_2;
		String_t* L_55 = V_3;
		int32_t L_56 = V_4;
		ImageProperties_t58867341A9993287DFFDD26325DE0EE68DD52E46 L_57;
		memset((&L_57), 0, sizeof(L_57));
		ImageProperties__ctor_mDB1459622F0FFEEA741B63898D7CE5B41AA4F9EC((&L_57), L_53, L_54, L_55, L_56, /*hidden argument*/NULL);
		return L_57;
	}
}
// NativeCamera/VideoProperties NativeCamera::GetVideoProperties(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR VideoProperties_t6D7A73E485C96B765AD8710810E46D38907DFC0E NativeCamera_GetVideoProperties_mD107E884F139248DA25009699EBB789077BA08AB (String_t* ___videoPath0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_CallStatic_TisString_t_mB5DC41208BD7C326A089C20F4F1C2B8B2444ACC3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF811A8F3778A439E75478C3728BE25A7853EAF83);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int64_t V_3 = 0;
	float V_4 = 0.0f;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* V_5 = NULL;
	{
		// if( !File.Exists( videoPath ) )
		String_t* L_0 = ___videoPath0;
		bool L_1;
		L_1 = File_Exists_mD7E7A84A6B9E9A9BADBDA7C46AAE0624EF106D85(L_0, NULL);
		if (L_1)
		{
			goto IL_0019;
		}
	}
	{
		// throw new FileNotFoundException( "File not found at " + videoPath );
		String_t* L_2 = ___videoPath0;
		String_t* L_3;
		L_3 = String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral491B4D9271839F0BD63211437BF7CEE5B2C6ADE9)), L_2, NULL);
		FileNotFoundException_t17F1B49AD996E4A60C87C7ADC9D3A25EB5808A9A* L_4 = (FileNotFoundException_t17F1B49AD996E4A60C87C7ADC9D3A25EB5808A9A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&FileNotFoundException_t17F1B49AD996E4A60C87C7ADC9D3A25EB5808A9A_il2cpp_TypeInfo_var)));
		NullCheck(L_4);
		FileNotFoundException__ctor_mA8C9C93DB8C5B96D6B5E59B2AE07154F265FB1A1(L_4, L_3, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NativeCamera_GetVideoProperties_mD107E884F139248DA25009699EBB789077BA08AB_RuntimeMethod_var)));
	}

IL_0019:
	{
		// string value = AJC.CallStatic<string>( "GetVideoProperties", Context, videoPath );
		AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* L_5;
		L_5 = NativeCamera_get_AJC_m73CFDF32E808503B9DA45584853DF691A8A5DF46(NULL);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_6 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)2);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_7 = L_6;
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_8;
		L_8 = NativeCamera_get_Context_mD85212EE2053033FFED6C4FD2181F7E69142132D(NULL);
		NullCheck(L_7);
		ArrayElementTypeCheck (L_7, L_8);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_8);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_9 = L_7;
		String_t* L_10 = ___videoPath0;
		NullCheck(L_9);
		ArrayElementTypeCheck (L_9, L_10);
		(L_9)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)L_10);
		NullCheck(L_5);
		String_t* L_11;
		L_11 = AndroidJavaObject_CallStatic_TisString_t_mB5DC41208BD7C326A089C20F4F1C2B8B2444ACC3(L_5, _stringLiteralF811A8F3778A439E75478C3728BE25A7853EAF83, L_9, AndroidJavaObject_CallStatic_TisString_t_mB5DC41208BD7C326A089C20F4F1C2B8B2444ACC3_RuntimeMethod_var);
		V_0 = L_11;
		// int width = 0, height = 0;
		V_1 = 0;
		// int width = 0, height = 0;
		V_2 = 0;
		// long duration = 0L;
		V_3 = ((int64_t)0);
		// float rotation = 0f;
		V_4 = (0.0f);
		// if( !string.IsNullOrEmpty( value ) )
		String_t* L_12 = V_0;
		bool L_13;
		L_13 = String_IsNullOrEmpty_m54CF0907E7C4F3AFB2E796A13DC751ECBB8DB64A(L_12, NULL);
		if (L_13)
		{
			goto IL_00d0;
		}
	}
	{
		// string[] properties = value.Split( '>' );
		String_t* L_14 = V_0;
		NullCheck(L_14);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_15;
		L_15 = String_Split_m9530B73D02054692283BF35C3A27C8F2230946F4(L_14, ((int32_t)62), 0, NULL);
		V_5 = L_15;
		// if( properties != null && properties.Length >= 4 )
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_16 = V_5;
		if (!L_16)
		{
			goto IL_00d0;
		}
	}
	{
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_17 = V_5;
		NullCheck(L_17);
		if ((((int32_t)((int32_t)(((RuntimeArray*)L_17)->max_length))) < ((int32_t)4)))
		{
			goto IL_00d0;
		}
	}
	{
		// if( !int.TryParse( properties[0].Trim(), out width ) )
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_18 = V_5;
		NullCheck(L_18);
		int32_t L_19 = 0;
		String_t* L_20 = (L_18)->GetAt(static_cast<il2cpp_array_size_t>(L_19));
		NullCheck(L_20);
		String_t* L_21;
		L_21 = String_Trim_mCD6D8C6D4CFD15225D12DB7D3E0544CA80FB8DA5(L_20, NULL);
		bool L_22;
		L_22 = Int32_TryParse_mFC6BFCB86964E2BCA4052155B10983837A695EA4(L_21, (&V_1), NULL);
		if (L_22)
		{
			goto IL_007b;
		}
	}
	{
		// width = 0;
		V_1 = 0;
	}

IL_007b:
	{
		// if( !int.TryParse( properties[1].Trim(), out height ) )
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_23 = V_5;
		NullCheck(L_23);
		int32_t L_24 = 1;
		String_t* L_25 = (L_23)->GetAt(static_cast<il2cpp_array_size_t>(L_24));
		NullCheck(L_25);
		String_t* L_26;
		L_26 = String_Trim_mCD6D8C6D4CFD15225D12DB7D3E0544CA80FB8DA5(L_25, NULL);
		bool L_27;
		L_27 = Int32_TryParse_mFC6BFCB86964E2BCA4052155B10983837A695EA4(L_26, (&V_2), NULL);
		if (L_27)
		{
			goto IL_008f;
		}
	}
	{
		// height = 0;
		V_2 = 0;
	}

IL_008f:
	{
		// if( !long.TryParse( properties[2].Trim(), out duration ) )
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_28 = V_5;
		NullCheck(L_28);
		int32_t L_29 = 2;
		String_t* L_30 = (L_28)->GetAt(static_cast<il2cpp_array_size_t>(L_29));
		NullCheck(L_30);
		String_t* L_31;
		L_31 = String_Trim_mCD6D8C6D4CFD15225D12DB7D3E0544CA80FB8DA5(L_30, NULL);
		bool L_32;
		L_32 = Int64_TryParse_m61AAE5CC4A0B716556765798C22FE12D87554986(L_31, (&V_3), NULL);
		if (L_32)
		{
			goto IL_00a4;
		}
	}
	{
		// duration = 0L;
		V_3 = ((int64_t)0);
	}

IL_00a4:
	{
		// if( !float.TryParse( properties[3].Trim().Replace( ',', '.' ), NumberStyles.Float, CultureInfo.InvariantCulture, out rotation ) )
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_33 = V_5;
		NullCheck(L_33);
		int32_t L_34 = 3;
		String_t* L_35 = (L_33)->GetAt(static_cast<il2cpp_array_size_t>(L_34));
		NullCheck(L_35);
		String_t* L_36;
		L_36 = String_Trim_mCD6D8C6D4CFD15225D12DB7D3E0544CA80FB8DA5(L_35, NULL);
		NullCheck(L_36);
		String_t* L_37;
		L_37 = String_Replace_m86403DC5F422D8D5E1CFAAF255B103CB807EDAAF(L_36, ((int32_t)44), ((int32_t)46), NULL);
		il2cpp_codegen_runtime_class_init_inline(CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_il2cpp_TypeInfo_var);
		CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* L_38;
		L_38 = CultureInfo_get_InvariantCulture_m78DAB8CBE8766445310782B6E61FB7A9983AD425(NULL);
		bool L_39;
		L_39 = Single_TryParse_m5920BF3A60EE1FFF0CC117021B4BF2A8114D1AE5(L_37, ((int32_t)167), L_38, (&V_4), NULL);
		if (L_39)
		{
			goto IL_00d0;
		}
	}
	{
		// rotation = 0f;
		V_4 = (0.0f);
	}

IL_00d0:
	{
		// if( rotation == -90f )
		float L_40 = V_4;
		if ((!(((float)L_40) == ((float)(-90.0f)))))
		{
			goto IL_00e0;
		}
	}
	{
		// rotation = 270f;
		V_4 = (270.0f);
	}

IL_00e0:
	{
		// return new VideoProperties( width, height, duration, rotation );
		int32_t L_41 = V_1;
		int32_t L_42 = V_2;
		int64_t L_43 = V_3;
		float L_44 = V_4;
		VideoProperties_t6D7A73E485C96B765AD8710810E46D38907DFC0E L_45;
		memset((&L_45), 0, sizeof(L_45));
		VideoProperties__ctor_m61A493A9C32C95FE9B3F84709AC0A2E92283F97D((&L_45), L_41, L_42, L_43, L_44, /*hidden argument*/NULL);
		return L_45;
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
// Conversion methods for marshalling of: NativeCamera/ImageProperties
IL2CPP_EXTERN_C void ImageProperties_t58867341A9993287DFFDD26325DE0EE68DD52E46_marshal_pinvoke(const ImageProperties_t58867341A9993287DFFDD26325DE0EE68DD52E46& unmarshaled, ImageProperties_t58867341A9993287DFFDD26325DE0EE68DD52E46_marshaled_pinvoke& marshaled)
{
	marshaled.___width_0 = unmarshaled.___width_0;
	marshaled.___height_1 = unmarshaled.___height_1;
	marshaled.___mimeType_2 = il2cpp_codegen_marshal_string(unmarshaled.___mimeType_2);
	marshaled.___orientation_3 = unmarshaled.___orientation_3;
}
IL2CPP_EXTERN_C void ImageProperties_t58867341A9993287DFFDD26325DE0EE68DD52E46_marshal_pinvoke_back(const ImageProperties_t58867341A9993287DFFDD26325DE0EE68DD52E46_marshaled_pinvoke& marshaled, ImageProperties_t58867341A9993287DFFDD26325DE0EE68DD52E46& unmarshaled)
{
	int32_t unmarshaledwidth_temp_0 = 0;
	unmarshaledwidth_temp_0 = marshaled.___width_0;
	unmarshaled.___width_0 = unmarshaledwidth_temp_0;
	int32_t unmarshaledheight_temp_1 = 0;
	unmarshaledheight_temp_1 = marshaled.___height_1;
	unmarshaled.___height_1 = unmarshaledheight_temp_1;
	unmarshaled.___mimeType_2 = il2cpp_codegen_marshal_string_result(marshaled.___mimeType_2);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___mimeType_2), (void*)il2cpp_codegen_marshal_string_result(marshaled.___mimeType_2));
	int32_t unmarshaledorientation_temp_3 = 0;
	unmarshaledorientation_temp_3 = marshaled.___orientation_3;
	unmarshaled.___orientation_3 = unmarshaledorientation_temp_3;
}
// Conversion method for clean up from marshalling of: NativeCamera/ImageProperties
IL2CPP_EXTERN_C void ImageProperties_t58867341A9993287DFFDD26325DE0EE68DD52E46_marshal_pinvoke_cleanup(ImageProperties_t58867341A9993287DFFDD26325DE0EE68DD52E46_marshaled_pinvoke& marshaled)
{
	il2cpp_codegen_marshal_free(marshaled.___mimeType_2);
	marshaled.___mimeType_2 = NULL;
}
// Conversion methods for marshalling of: NativeCamera/ImageProperties
IL2CPP_EXTERN_C void ImageProperties_t58867341A9993287DFFDD26325DE0EE68DD52E46_marshal_com(const ImageProperties_t58867341A9993287DFFDD26325DE0EE68DD52E46& unmarshaled, ImageProperties_t58867341A9993287DFFDD26325DE0EE68DD52E46_marshaled_com& marshaled)
{
	marshaled.___width_0 = unmarshaled.___width_0;
	marshaled.___height_1 = unmarshaled.___height_1;
	marshaled.___mimeType_2 = il2cpp_codegen_marshal_bstring(unmarshaled.___mimeType_2);
	marshaled.___orientation_3 = unmarshaled.___orientation_3;
}
IL2CPP_EXTERN_C void ImageProperties_t58867341A9993287DFFDD26325DE0EE68DD52E46_marshal_com_back(const ImageProperties_t58867341A9993287DFFDD26325DE0EE68DD52E46_marshaled_com& marshaled, ImageProperties_t58867341A9993287DFFDD26325DE0EE68DD52E46& unmarshaled)
{
	int32_t unmarshaledwidth_temp_0 = 0;
	unmarshaledwidth_temp_0 = marshaled.___width_0;
	unmarshaled.___width_0 = unmarshaledwidth_temp_0;
	int32_t unmarshaledheight_temp_1 = 0;
	unmarshaledheight_temp_1 = marshaled.___height_1;
	unmarshaled.___height_1 = unmarshaledheight_temp_1;
	unmarshaled.___mimeType_2 = il2cpp_codegen_marshal_bstring_result(marshaled.___mimeType_2);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___mimeType_2), (void*)il2cpp_codegen_marshal_bstring_result(marshaled.___mimeType_2));
	int32_t unmarshaledorientation_temp_3 = 0;
	unmarshaledorientation_temp_3 = marshaled.___orientation_3;
	unmarshaled.___orientation_3 = unmarshaledorientation_temp_3;
}
// Conversion method for clean up from marshalling of: NativeCamera/ImageProperties
IL2CPP_EXTERN_C void ImageProperties_t58867341A9993287DFFDD26325DE0EE68DD52E46_marshal_com_cleanup(ImageProperties_t58867341A9993287DFFDD26325DE0EE68DD52E46_marshaled_com& marshaled)
{
	il2cpp_codegen_marshal_free_bstring(marshaled.___mimeType_2);
	marshaled.___mimeType_2 = NULL;
}
// System.Void NativeCamera/ImageProperties::.ctor(System.Int32,System.Int32,System.String,NativeCamera/ImageOrientation)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ImageProperties__ctor_mDB1459622F0FFEEA741B63898D7CE5B41AA4F9EC (ImageProperties_t58867341A9993287DFFDD26325DE0EE68DD52E46* __this, int32_t ___width0, int32_t ___height1, String_t* ___mimeType2, int32_t ___orientation3, const RuntimeMethod* method) 
{
	{
		// this.width = width;
		int32_t L_0 = ___width0;
		__this->___width_0 = L_0;
		// this.height = height;
		int32_t L_1 = ___height1;
		__this->___height_1 = L_1;
		// this.mimeType = mimeType;
		String_t* L_2 = ___mimeType2;
		__this->___mimeType_2 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___mimeType_2), (void*)L_2);
		// this.orientation = orientation;
		int32_t L_3 = ___orientation3;
		__this->___orientation_3 = L_3;
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void ImageProperties__ctor_mDB1459622F0FFEEA741B63898D7CE5B41AA4F9EC_AdjustorThunk (RuntimeObject* __this, int32_t ___width0, int32_t ___height1, String_t* ___mimeType2, int32_t ___orientation3, const RuntimeMethod* method)
{
	ImageProperties_t58867341A9993287DFFDD26325DE0EE68DD52E46* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<ImageProperties_t58867341A9993287DFFDD26325DE0EE68DD52E46*>(__this + _offset);
	ImageProperties__ctor_mDB1459622F0FFEEA741B63898D7CE5B41AA4F9EC(_thisAdjusted, ___width0, ___height1, ___mimeType2, ___orientation3, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void NativeCamera/VideoProperties::.ctor(System.Int32,System.Int32,System.Int64,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VideoProperties__ctor_m61A493A9C32C95FE9B3F84709AC0A2E92283F97D (VideoProperties_t6D7A73E485C96B765AD8710810E46D38907DFC0E* __this, int32_t ___width0, int32_t ___height1, int64_t ___duration2, float ___rotation3, const RuntimeMethod* method) 
{
	{
		// this.width = width;
		int32_t L_0 = ___width0;
		__this->___width_0 = L_0;
		// this.height = height;
		int32_t L_1 = ___height1;
		__this->___height_1 = L_1;
		// this.duration = duration;
		int64_t L_2 = ___duration2;
		__this->___duration_2 = L_2;
		// this.rotation = rotation;
		float L_3 = ___rotation3;
		__this->___rotation_3 = L_3;
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void VideoProperties__ctor_m61A493A9C32C95FE9B3F84709AC0A2E92283F97D_AdjustorThunk (RuntimeObject* __this, int32_t ___width0, int32_t ___height1, int64_t ___duration2, float ___rotation3, const RuntimeMethod* method)
{
	VideoProperties_t6D7A73E485C96B765AD8710810E46D38907DFC0E* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<VideoProperties_t6D7A73E485C96B765AD8710810E46D38907DFC0E*>(__this + _offset);
	VideoProperties__ctor_m61A493A9C32C95FE9B3F84709AC0A2E92283F97D(_thisAdjusted, ___width0, ___height1, ___duration2, ___rotation3, method);
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
void CameraCallback_Invoke_mE8BD077A2F42B9DBC93521F630A1461381D3BB1A_Multicast(CameraCallback_tF33A274B891CCEC46FF206A2C3907F370B4FF771* __this, String_t* ___path0, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	typedef void (*FunctionPointerType) (CameraCallback_tF33A274B891CCEC46FF206A2C3907F370B4FF771* __this, String_t* ___path0, const RuntimeMethod* method);
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		CameraCallback_tF33A274B891CCEC46FF206A2C3907F370B4FF771* currentDelegate = reinterpret_cast<CameraCallback_tF33A274B891CCEC46FF206A2C3907F370B4FF771*>(delegatesToInvoke[i]);
		((FunctionPointerType)currentDelegate->___invoke_impl_1)(currentDelegate, ___path0, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
}
void CameraCallback_Invoke_mE8BD077A2F42B9DBC93521F630A1461381D3BB1A_Open(CameraCallback_tF33A274B891CCEC46FF206A2C3907F370B4FF771* __this, String_t* ___path0, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (String_t*, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___path0, method);
}
void CameraCallback_Invoke_mE8BD077A2F42B9DBC93521F630A1461381D3BB1A_Closed(CameraCallback_tF33A274B891CCEC46FF206A2C3907F370B4FF771* __this, String_t* ___path0, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (RuntimeObject*, String_t*, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(__this->___m_target_2, ___path0, method);
}
void CameraCallback_Invoke_mE8BD077A2F42B9DBC93521F630A1461381D3BB1A_OpenStaticInvoker(CameraCallback_tF33A274B891CCEC46FF206A2C3907F370B4FF771* __this, String_t* ___path0, const RuntimeMethod* method)
{
	InvokerActionInvoker1< String_t* >::Invoke(__this->___method_ptr_0, method, NULL, ___path0);
}
void CameraCallback_Invoke_mE8BD077A2F42B9DBC93521F630A1461381D3BB1A_ClosedStaticInvoker(CameraCallback_tF33A274B891CCEC46FF206A2C3907F370B4FF771* __this, String_t* ___path0, const RuntimeMethod* method)
{
	InvokerActionInvoker2< RuntimeObject*, String_t* >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___path0);
}
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_CameraCallback_tF33A274B891CCEC46FF206A2C3907F370B4FF771 (CameraCallback_tF33A274B891CCEC46FF206A2C3907F370B4FF771* __this, String_t* ___path0, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)(char*);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	// Marshaling of parameter '___path0' to native representation
	char* ____path0_marshaled = NULL;
	____path0_marshaled = il2cpp_codegen_marshal_string(___path0);

	// Native function invocation
	il2cppPInvokeFunc(____path0_marshaled);

	// Marshaling cleanup of parameter '___path0' native representation
	il2cpp_codegen_marshal_free(____path0_marshaled);
	____path0_marshaled = NULL;

}
// System.Void NativeCamera/CameraCallback::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraCallback__ctor_m39376148047C9B1A537BC5DB202E142431A77AFE (CameraCallback_tF33A274B891CCEC46FF206A2C3907F370B4FF771* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) 
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
				__this->___invoke_impl_1 = (intptr_t)&CameraCallback_Invoke_mE8BD077A2F42B9DBC93521F630A1461381D3BB1A_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&CameraCallback_Invoke_mE8BD077A2F42B9DBC93521F630A1461381D3BB1A_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&CameraCallback_Invoke_mE8BD077A2F42B9DBC93521F630A1461381D3BB1A_Open;
			else
				__this->___invoke_impl_1 = (intptr_t)&CameraCallback_Invoke_mE8BD077A2F42B9DBC93521F630A1461381D3BB1A_Closed;
	}
	else
	{
		bool isOpen = methodCount == 0;
		if (isOpen)
		{
			__this->___invoke_impl_1 = (intptr_t)&CameraCallback_Invoke_mE8BD077A2F42B9DBC93521F630A1461381D3BB1A_Open;
		}
		else
		{
			__this->___invoke_impl_1 = (intptr_t)&CameraCallback_Invoke_mE8BD077A2F42B9DBC93521F630A1461381D3BB1A_Closed;
		}
	}
	__this->___extra_arg_5 = (intptr_t)&CameraCallback_Invoke_mE8BD077A2F42B9DBC93521F630A1461381D3BB1A_Multicast;
}
// System.Void NativeCamera/CameraCallback::Invoke(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraCallback_Invoke_mE8BD077A2F42B9DBC93521F630A1461381D3BB1A (CameraCallback_tF33A274B891CCEC46FF206A2C3907F370B4FF771* __this, String_t* ___path0, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (CameraCallback_tF33A274B891CCEC46FF206A2C3907F370B4FF771* __this, String_t* ___path0, const RuntimeMethod* method);
	((FunctionPointerType)__this->___invoke_impl_1)(__this, ___path0, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult NativeCamera/CameraCallback::BeginInvoke(System.String,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* CameraCallback_BeginInvoke_m690E44108A53130266E7C1A57DC6E62F2B0BDCDF (CameraCallback_tF33A274B891CCEC46FF206A2C3907F370B4FF771* __this, String_t* ___path0, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___callback1, RuntimeObject* ___object2, const RuntimeMethod* method) 
{
	void *__d_args[2] = {0};
	__d_args[0] = ___path0;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);;
}
// System.Void NativeCamera/CameraCallback::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraCallback_EndInvoke_m64D370EA45BBA56CF1B29C19E1B766B43542D7A6 (CameraCallback_tF33A274B891CCEC46FF206A2C3907F370B4FF771* __this, RuntimeObject* ___result0, const RuntimeMethod* method) 
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
// System.Void NativeCameraNamespace.NCCallbackHelper::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NCCallbackHelper_Awake_mE3A63B5B9F2BF8D9380A10938C023518513C42DA (NCCallbackHelper_tBA518C908F8A8D4DD1D896CC9C11AE23888F67CA* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// DontDestroyOnLoad( gameObject );
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0;
		L_0 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_DontDestroyOnLoad_m303AA1C4DC810349F285B4809E426CBBA8F834F9(L_0, NULL);
		// }
		return;
	}
}
// System.Void NativeCameraNamespace.NCCallbackHelper::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NCCallbackHelper_Update_mB751E20E799C93573FD3AF0BE18DECA33BAA6A9C (NCCallbackHelper_tBA518C908F8A8D4DD1D896CC9C11AE23888F67CA* __this, const RuntimeMethod* method) 
{
	{
		// if( mainThreadAction != null )
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_0 = __this->___mainThreadAction_4;
		if (!L_0)
		{
			goto IL_001a;
		}
	}
	{
		// System.Action temp = mainThreadAction;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_1 = __this->___mainThreadAction_4;
		// mainThreadAction = null;
		__this->___mainThreadAction_4 = (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___mainThreadAction_4), (void*)(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)NULL);
		// temp();
		NullCheck(L_1);
		Action_Invoke_m7126A54DACA72B845424072887B5F3A51FC3808E_inline(L_1, NULL);
	}

IL_001a:
	{
		// }
		return;
	}
}
// System.Void NativeCameraNamespace.NCCallbackHelper::CallOnMainThread(System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NCCallbackHelper_CallOnMainThread_mF4C7C68F199FEE8034F6E1EFFE293DB4D92D5192 (NCCallbackHelper_tBA518C908F8A8D4DD1D896CC9C11AE23888F67CA* __this, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___function0, const RuntimeMethod* method) 
{
	{
		// mainThreadAction = function;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_0 = ___function0;
		__this->___mainThreadAction_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___mainThreadAction_4), (void*)L_0);
		// }
		return;
	}
}
// System.Void NativeCameraNamespace.NCCallbackHelper::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NCCallbackHelper__ctor_m079DDE184188CCFE394DA8337BB081D1E9E087A5 (NCCallbackHelper_tBA518C908F8A8D4DD1D896CC9C11AE23888F67CA* __this, const RuntimeMethod* method) 
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
// System.Void NativeCameraNamespace.NCCameraCallbackAndroid::.ctor(NativeCamera/CameraCallback)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NCCameraCallbackAndroid__ctor_m7A49A723EBFBFC7215432493733AFCF632A8F5AA (NCCameraCallbackAndroid_t6321AB2CC0C23E0A0A06CD0D72847CE9149F9378* __this, CameraCallback_tF33A274B891CCEC46FF206A2C3907F370B4FF771* ___callback0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaProxy_tE5521F9761F7B95444B9C39FB15FDFC23F80A78D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_AddComponent_TisNCCallbackHelper_tBA518C908F8A8D4DD1D896CC9C11AE23888F67CA_m58F9A27F8E2E59C5DA67176DBC1DDEE4B50743EE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_t76FEDD663AB33C991A9C9A23129337651094216F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0A051229B6EA622EA0A0C01F91FB09E1623476AA);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral22965B1EE1F6EB152925F32087BD48959BA8C1BC);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public NCCameraCallbackAndroid( NativeCamera.CameraCallback callback ) : base( "com.yasirkula.unity.NativeCameraMediaReceiver" )
		il2cpp_codegen_runtime_class_init_inline(AndroidJavaProxy_tE5521F9761F7B95444B9C39FB15FDFC23F80A78D_il2cpp_TypeInfo_var);
		AndroidJavaProxy__ctor_m2832886A0E1BBF6702653A7C6A4609F11FB712C7(__this, _stringLiteral0A051229B6EA622EA0A0C01F91FB09E1623476AA, NULL);
		// this.callback = callback;
		CameraCallback_tF33A274B891CCEC46FF206A2C3907F370B4FF771* L_0 = ___callback0;
		__this->___callback_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___callback_4), (void*)L_0);
		// callbackHelper = new GameObject( "NCCallbackHelper" ).AddComponent<NCCallbackHelper>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1 = (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*)il2cpp_codegen_object_new(GameObject_t76FEDD663AB33C991A9C9A23129337651094216F_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		GameObject__ctor_m37D512B05D292F954792225E6C6EEE95293A9B88(L_1, _stringLiteral22965B1EE1F6EB152925F32087BD48959BA8C1BC, NULL);
		NullCheck(L_1);
		NCCallbackHelper_tBA518C908F8A8D4DD1D896CC9C11AE23888F67CA* L_2;
		L_2 = GameObject_AddComponent_TisNCCallbackHelper_tBA518C908F8A8D4DD1D896CC9C11AE23888F67CA_m58F9A27F8E2E59C5DA67176DBC1DDEE4B50743EE(L_1, GameObject_AddComponent_TisNCCallbackHelper_tBA518C908F8A8D4DD1D896CC9C11AE23888F67CA_m58F9A27F8E2E59C5DA67176DBC1DDEE4B50743EE_RuntimeMethod_var);
		__this->___callbackHelper_5 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___callbackHelper_5), (void*)L_2);
		// }
		return;
	}
}
// System.Void NativeCameraNamespace.NCCameraCallbackAndroid::OnMediaReceived(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NCCameraCallbackAndroid_OnMediaReceived_mA794170C46D6C0CB63A52483CDA830D08530E62A (NCCameraCallbackAndroid_t6321AB2CC0C23E0A0A06CD0D72847CE9149F9378* __this, String_t* ___path0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass3_0_U3COnMediaReceivedU3Eb__0_m2F42366AEBB844734D6B392AF6A392BF2BF19458_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass3_0_t6F61CA2BBD832CB410C9365B047308C3CAC6B850_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CU3Ec__DisplayClass3_0_t6F61CA2BBD832CB410C9365B047308C3CAC6B850* V_0 = NULL;
	{
		U3CU3Ec__DisplayClass3_0_t6F61CA2BBD832CB410C9365B047308C3CAC6B850* L_0 = (U3CU3Ec__DisplayClass3_0_t6F61CA2BBD832CB410C9365B047308C3CAC6B850*)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass3_0_t6F61CA2BBD832CB410C9365B047308C3CAC6B850_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CU3Ec__DisplayClass3_0__ctor_mAEE97D12D327C8C28EAB45ACDCB50E5DC04F50FB(L_0, NULL);
		V_0 = L_0;
		U3CU3Ec__DisplayClass3_0_t6F61CA2BBD832CB410C9365B047308C3CAC6B850* L_1 = V_0;
		NullCheck(L_1);
		L_1->___U3CU3E4__this_0 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_0), (void*)__this);
		U3CU3Ec__DisplayClass3_0_t6F61CA2BBD832CB410C9365B047308C3CAC6B850* L_2 = V_0;
		String_t* L_3 = ___path0;
		NullCheck(L_2);
		L_2->___path_1 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&L_2->___path_1), (void*)L_3);
		// callbackHelper.CallOnMainThread( () => MediaReceiveCallback( path ) );
		NCCallbackHelper_tBA518C908F8A8D4DD1D896CC9C11AE23888F67CA* L_4 = __this->___callbackHelper_5;
		U3CU3Ec__DisplayClass3_0_t6F61CA2BBD832CB410C9365B047308C3CAC6B850* L_5 = V_0;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_6 = (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)il2cpp_codegen_object_new(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		NullCheck(L_6);
		Action__ctor_mBDC7B0B4A3F583B64C2896F01BDED360772F67DC(L_6, L_5, (intptr_t)((void*)U3CU3Ec__DisplayClass3_0_U3COnMediaReceivedU3Eb__0_m2F42366AEBB844734D6B392AF6A392BF2BF19458_RuntimeMethod_var), NULL);
		NullCheck(L_4);
		NCCallbackHelper_CallOnMainThread_mF4C7C68F199FEE8034F6E1EFFE293DB4D92D5192_inline(L_4, L_6, NULL);
		// }
		return;
	}
}
// System.Void NativeCameraNamespace.NCCameraCallbackAndroid::MediaReceiveCallback(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NCCameraCallbackAndroid_MediaReceiveCallback_m4D9DC4F284214D4860573AE1709C0CF0FC7E8ACA (NCCameraCallbackAndroid_t6321AB2CC0C23E0A0A06CD0D72847CE9149F9378* __this, String_t* ___path0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if( string.IsNullOrEmpty( path ) )
		String_t* L_0 = ___path0;
		bool L_1;
		L_1 = String_IsNullOrEmpty_m54CF0907E7C4F3AFB2E796A13DC751ECBB8DB64A(L_0, NULL);
		if (!L_1)
		{
			goto IL_000b;
		}
	}
	{
		// path = null;
		___path0 = (String_t*)NULL;
	}

IL_000b:
	{
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0022:
			{// begin finally (depth: 1)
				// Object.Destroy( callbackHelper.gameObject );
				NCCallbackHelper_tBA518C908F8A8D4DD1D896CC9C11AE23888F67CA* L_2 = __this->___callbackHelper_5;
				NullCheck(L_2);
				GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3;
				L_3 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_2, NULL);
				il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
				Object_Destroy_mFCDAE6333522488F60597AF019EA90BB1207A5AA(L_3, NULL);
				// }
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				// if( callback != null )
				CameraCallback_tF33A274B891CCEC46FF206A2C3907F370B4FF771* L_4 = __this->___callback_4;
				if (!L_4)
				{
					goto IL_0020_1;
				}
			}
			{
				// callback( path );
				CameraCallback_tF33A274B891CCEC46FF206A2C3907F370B4FF771* L_5 = __this->___callback_4;
				String_t* L_6 = ___path0;
				NullCheck(L_5);
				CameraCallback_Invoke_mE8BD077A2F42B9DBC93521F630A1461381D3BB1A_inline(L_5, L_6, NULL);
			}

IL_0020_1:
			{
				// }
				goto IL_0033;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0033:
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
// System.Void NativeCameraNamespace.NCCameraCallbackAndroid/<>c__DisplayClass3_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass3_0__ctor_mAEE97D12D327C8C28EAB45ACDCB50E5DC04F50FB (U3CU3Ec__DisplayClass3_0_t6F61CA2BBD832CB410C9365B047308C3CAC6B850* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Void NativeCameraNamespace.NCCameraCallbackAndroid/<>c__DisplayClass3_0::<OnMediaReceived>b__0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass3_0_U3COnMediaReceivedU3Eb__0_m2F42366AEBB844734D6B392AF6A392BF2BF19458 (U3CU3Ec__DisplayClass3_0_t6F61CA2BBD832CB410C9365B047308C3CAC6B850* __this, const RuntimeMethod* method) 
{
	{
		// callbackHelper.CallOnMainThread( () => MediaReceiveCallback( path ) );
		NCCameraCallbackAndroid_t6321AB2CC0C23E0A0A06CD0D72847CE9149F9378* L_0 = __this->___U3CU3E4__this_0;
		String_t* L_1 = __this->___path_1;
		NullCheck(L_0);
		NCCameraCallbackAndroid_MediaReceiveCallback_m4D9DC4F284214D4860573AE1709C0CF0FC7E8ACA(L_0, L_1, NULL);
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
// System.Int32 NativeCameraNamespace.NCPermissionCallbackAndroid::get_Result()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NCPermissionCallbackAndroid_get_Result_m0FBAA6C84093FCD7833C957E5C7CE381668100DF (NCPermissionCallbackAndroid_t018A82939BD516F7AC1B1295721A0EDB10B55D91* __this, const RuntimeMethod* method) 
{
	{
		// public int Result { get; private set; }
		int32_t L_0 = __this->___U3CResultU3Ek__BackingField_5;
		return L_0;
	}
}
// System.Void NativeCameraNamespace.NCPermissionCallbackAndroid::set_Result(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NCPermissionCallbackAndroid_set_Result_m875E1D987FD8099207FD71BC8FCCE424DEA1DC6A (NCPermissionCallbackAndroid_t018A82939BD516F7AC1B1295721A0EDB10B55D91* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	{
		// public int Result { get; private set; }
		int32_t L_0 = ___value0;
		__this->___U3CResultU3Ek__BackingField_5 = L_0;
		return;
	}
}
// System.Void NativeCameraNamespace.NCPermissionCallbackAndroid::.ctor(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NCPermissionCallbackAndroid__ctor_mEE399CA43702611369BBFD6E72E3147E4C962FDC (NCPermissionCallbackAndroid_t018A82939BD516F7AC1B1295721A0EDB10B55D91* __this, RuntimeObject* ___threadLock0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaProxy_tE5521F9761F7B95444B9C39FB15FDFC23F80A78D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF0750A05DD548EB8E0F9CD56A424497F03563B9D);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public NCPermissionCallbackAndroid( object threadLock ) : base( "com.yasirkula.unity.NativeCameraPermissionReceiver" )
		il2cpp_codegen_runtime_class_init_inline(AndroidJavaProxy_tE5521F9761F7B95444B9C39FB15FDFC23F80A78D_il2cpp_TypeInfo_var);
		AndroidJavaProxy__ctor_m2832886A0E1BBF6702653A7C6A4609F11FB712C7(__this, _stringLiteralF0750A05DD548EB8E0F9CD56A424497F03563B9D, NULL);
		// Result = -1;
		NCPermissionCallbackAndroid_set_Result_m875E1D987FD8099207FD71BC8FCCE424DEA1DC6A_inline(__this, (-1), NULL);
		// this.threadLock = threadLock;
		RuntimeObject* L_0 = ___threadLock0;
		__this->___threadLock_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___threadLock_4), (void*)L_0);
		// }
		return;
	}
}
// System.Void NativeCameraNamespace.NCPermissionCallbackAndroid::OnPermissionResult(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NCPermissionCallbackAndroid_OnPermissionResult_m1133986BD48E36D9A799B42BD73C67EC51D3319D (NCPermissionCallbackAndroid_t018A82939BD516F7AC1B1295721A0EDB10B55D91* __this, int32_t ___result0, const RuntimeMethod* method) 
{
	RuntimeObject* V_0 = NULL;
	bool V_1 = false;
	{
		// Result = result;
		int32_t L_0 = ___result0;
		NCPermissionCallbackAndroid_set_Result_m875E1D987FD8099207FD71BC8FCCE424DEA1DC6A_inline(__this, L_0, NULL);
		// lock( threadLock )
		RuntimeObject* L_1 = __this->___threadLock_4;
		V_0 = L_1;
		V_1 = (bool)0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0025:
			{// begin finally (depth: 1)
				{
					bool L_2 = V_1;
					if (!L_2)
					{
						goto IL_002e;
					}
				}
				{
					RuntimeObject* L_3 = V_0;
					Monitor_Exit_m25A154960F91391E10E4CDA245ECDF4BA94D56A9(L_3, NULL);
				}

IL_002e:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			RuntimeObject* L_4 = V_0;
			Monitor_Enter_m00506757392936AA62DBE2C5FFBEE69EE920C4D4(L_4, (&V_1), NULL);
			// Monitor.Pulse( threadLock );
			RuntimeObject* L_5 = __this->___threadLock_4;
			Monitor_Pulse_mCCD5C110AC8E4CD538E367C3414CA4E93F045419(L_5, NULL);
			// }
			goto IL_002f;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_002f:
	{
		// }
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t NCPermissionCallbackAndroid_get_Result_m0FBAA6C84093FCD7833C957E5C7CE381668100DF_inline (NCPermissionCallbackAndroid_t018A82939BD516F7AC1B1295721A0EDB10B55D91* __this, const RuntimeMethod* method) 
{
	{
		// public int Result { get; private set; }
		int32_t L_0 = __this->___U3CResultU3Ek__BackingField_5;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline (String_t* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____stringLength_4;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_Invoke_m7126A54DACA72B845424072887B5F3A51FC3808E_inline (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* __this, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* __this, const RuntimeMethod* method);
	((FunctionPointerType)__this->___invoke_impl_1)(__this, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void NCCallbackHelper_CallOnMainThread_mF4C7C68F199FEE8034F6E1EFFE293DB4D92D5192_inline (NCCallbackHelper_tBA518C908F8A8D4DD1D896CC9C11AE23888F67CA* __this, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___function0, const RuntimeMethod* method) 
{
	{
		// mainThreadAction = function;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_0 = ___function0;
		__this->___mainThreadAction_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___mainThreadAction_4), (void*)L_0);
		// }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void CameraCallback_Invoke_mE8BD077A2F42B9DBC93521F630A1461381D3BB1A_inline (CameraCallback_tF33A274B891CCEC46FF206A2C3907F370B4FF771* __this, String_t* ___path0, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (CameraCallback_tF33A274B891CCEC46FF206A2C3907F370B4FF771* __this, String_t* ___path0, const RuntimeMethod* method);
	((FunctionPointerType)__this->___invoke_impl_1)(__this, ___path0, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void NCPermissionCallbackAndroid_set_Result_m875E1D987FD8099207FD71BC8FCCE424DEA1DC6A_inline (NCPermissionCallbackAndroid_t018A82939BD516F7AC1B1295721A0EDB10B55D91* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	{
		// public int Result { get; private set; }
		int32_t L_0 = ___value0;
		__this->___U3CResultU3Ek__BackingField_5 = L_0;
		return;
	}
}

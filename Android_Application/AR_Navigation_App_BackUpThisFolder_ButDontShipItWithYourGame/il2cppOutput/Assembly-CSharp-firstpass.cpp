#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


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
template <typename T1, typename T2>
struct VirtualActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3, typename T4>
struct VirtualActionInvoker4
{
	typedef void (*Action)(void*, T1, T2, T3, T4, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, p4, invokeData.method);
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
template <typename R, typename T1>
struct VirtualFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
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

// System.Collections.Generic.Dictionary`2<System.Int32,System.Globalization.CultureInfo>
struct Dictionary_2_t9FA6D82CAFC18769F7515BB51D1C56DAE09381C3;
// System.Collections.Generic.Dictionary`2<System.Object,System.Object>
struct Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA;
// System.Collections.Generic.Dictionary`2<System.String,System.Globalization.CultureInfo>
struct Dictionary_2_tE1603CE612C16451D1E56FF4D4859D4FE4087C28;
// System.Collections.Generic.Dictionary`2<System.String,SimpleJSON.JSONNode>
struct Dictionary_2_t12C70EF76A4D27675DBF4B2F8A83098ABB9DBC33;
// System.Func`2<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>,System.Boolean>
struct Func_2_t9364FA627D95BAC4CDA1FB83D8857B61F71B1858;
// System.Func`2<System.Collections.Generic.KeyValuePair`2<System.String,SimpleJSON.JSONNode>,System.Boolean>
struct Func_2_t8A99FF3F64B7CF9CFC4EE2DF270BD1703B76DC50;
// System.Collections.Generic.IEnumerable`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct IEnumerable_1_t60509816D8966320E2A9660FC756B6C440ADFC50;
// System.Collections.Generic.IEnumerable`1<System.Collections.Generic.KeyValuePair`2<System.String,SimpleJSON.JSONNode>>
struct IEnumerable_1_tFCF77471BC357F1DA198C04336E8CB5C4ACFEF8A;
// System.Collections.Generic.IEnumerable`1<SimpleJSON.JSONNode>
struct IEnumerable_1_tBB6E2A615DFE00A6FE5AE919A482CC24C97ABB04;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,SimpleJSON.JSONNode>>
struct IEnumerator_1_tB769356DCFDAF6A746C57D79B05BEE9D1325FE8E;
// System.Collections.Generic.IEnumerator`1<SimpleJSON.JSONNode>
struct IEnumerator_1_t49DDBC5AAD0D2D43999136BA0A280005097DCDFD;
// System.Collections.Generic.IEqualityComparer`1<System.String>
struct IEqualityComparer_1_tAE94C8F24AD5B94D4EE85CA9FC59E3409D41CAF7;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,SimpleJSON.JSONNode>
struct KeyCollection_tDE3ABC0784C3B1BCD31D575082F7C20EC70286B2;
// System.Collections.Generic.List`1<SimpleJSON.JSONNode>
struct List_1_t82186C961793D19A01F84E3AB82A2146C6F979C4;
// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D;
// System.Collections.Generic.Stack`1<SimpleJSON.JSONNode>
struct Stack_1_tD714EE61707D6A5034DEA764FF7763C53B9946B8;
// System.Collections.Generic.Stack`1<System.Object>
struct Stack_1_tAD790A47551563636908E21E4F08C54C0C323EB5;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,SimpleJSON.JSONNode>
struct ValueCollection_t76434FB4E445EE3387D3FC6DEAA1DB600E4B39B5;
// System.Collections.Generic.Dictionary`2/Entry<System.String,SimpleJSON.JSONNode>[]
struct EntryU5BU5D_t86D52525E21109390C2D6C0572544D4268F95576;
// System.Byte[]
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
// System.Char[]
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
// System.Int32[]
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
// System.IntPtr[]
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
// SimpleJSON.JSONNode[]
struct JSONNodeU5BU5D_t2C7B030008A25DEF9AC8F1A737F9D2DD4EA01B40;
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
// System.String[]
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
// System.Globalization.Calendar
struct Calendar_t0A117CC7532A54C17188C2EFEA1F79DB20DF3A3B;
// System.Globalization.CompareInfo
struct CompareInfo_t1B1A6AC3486B570C76ABA52149C9BD4CD82F9E57;
// System.Globalization.CultureData
struct CultureData_tEEFDCF4ECA1BBF6C0C8C94EB3541657245598F9D;
// System.Globalization.CultureInfo
struct CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0;
// System.Globalization.DateTimeFormatInfo
struct DateTimeFormatInfo_t0457520F9FA7B5C8EAAEB3AD50413B6AEEB7458A;
// System.DelegateData
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
// System.Exception
struct Exception_t;
// System.Collections.IDictionary
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
// System.Collections.IEnumerator
struct IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA;
// System.IFormatProvider
struct IFormatProvider_tC202922D43BFF3525109ABF3FB79625F5646AB52;
// SimpleJSON.JSONArray
struct JSONArray_tDB47C85E2DDB2CB4A972E4C0685D82E00490CB25;
// SimpleJSON.JSONBool
struct JSONBool_tD24D984AAB7A652E0241CA0111547A9A9F66B5C9;
// SimpleJSON.JSONLazyCreator
struct JSONLazyCreator_t67A874365EE690A6837C36B8C9214BCBD04C1C00;
// SimpleJSON.JSONNode
struct JSONNode_tD29E53D2E1C8F91FF9FEA40F4F3A540857651D3B;
// SimpleJSON.JSONNull
struct JSONNull_tEE66558FCE6029B3F1414C062F5E38E0530BD69A;
// SimpleJSON.JSONNumber
struct JSONNumber_tE274A557833A3AE0CDC6C7E563CEAD2A38355688;
// SimpleJSON.JSONObject
struct JSONObject_tEA00D19860E34865B3D16312DD382C0901CAB654;
// SimpleJSON.JSONString
struct JSONString_t1A1090FC5863846C80D0BDEF4E63FE23D7AC437D;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.NotSupportedException
struct NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A;
// System.Globalization.NumberFormatInfo
struct NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
// System.String
struct String_t;
// System.Text.StringBuilder
struct StringBuilder_t;
// System.Globalization.TextInfo
struct TextInfo_tD3BAFCFD77418851E7D5CB8D2588F47019E414B4;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// SimpleJSON.JSONArray/<get_Children>d__24
struct U3Cget_ChildrenU3Ed__24_t2556BF7E4766181D4B361F546D8C3C38CC3F56F5;
// SimpleJSON.JSONNode/<get_Children>d__43
struct U3Cget_ChildrenU3Ed__43_t5205FD2B072EA35613DB00E54067D4BE6FA9EDBF;
// SimpleJSON.JSONNode/<get_DeepChildren>d__45
struct U3Cget_DeepChildrenU3Ed__45_tB8D5A24DD52825340B1A0A9505719E91C72CE533;
// SimpleJSON.JSONNode/Enumerator
struct Enumerator_tA1F999D27FB3CE7FB0AC8D9BD4084CBA9E687C1F;
// SimpleJSON.JSONNode/LinqEnumerator
struct LinqEnumerator_t569E03B1C27DEBBF7549F3136EE88777AA5A3AD3;
// SimpleJSON.JSONObject/<>c__DisplayClass21_0
struct U3CU3Ec__DisplayClass21_0_t310B9E292689B6B4824DD285356EF9A1CDA716DD;
// SimpleJSON.JSONObject/<get_Children>d__27
struct U3Cget_ChildrenU3Ed__27_t89EE8560565615C4B0D27D10FF05ED6CB2C81A7A;

IL2CPP_EXTERN_C RuntimeClass* BitConverter_t6E99605185963BC12B3D369E13F2B88997E64A27_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_t12C70EF76A4D27675DBF4B2F8A83098ABB9DBC33_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Exception_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Func_2_t8A99FF3F64B7CF9CFC4EE2DF270BD1703B76DC50_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerable_1_tBB6E2A615DFE00A6FE5AE919A482CC24C97ABB04_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_1_t49DDBC5AAD0D2D43999136BA0A280005097DCDFD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* JSONArray_tDB47C85E2DDB2CB4A972E4C0685D82E00490CB25_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* JSONBool_tD24D984AAB7A652E0241CA0111547A9A9F66B5C9_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* JSONLazyCreator_t67A874365EE690A6837C36B8C9214BCBD04C1C00_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* JSONNode_tD29E53D2E1C8F91FF9FEA40F4F3A540857651D3B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* JSONNull_tEE66558FCE6029B3F1414C062F5E38E0530BD69A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* JSONNumber_tE274A557833A3AE0CDC6C7E563CEAD2A38355688_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* JSONObject_tEA00D19860E34865B3D16312DD382C0901CAB654_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* JSONString_t1A1090FC5863846C80D0BDEF4E63FE23D7AC437D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* KeyValuePair_2_tD59618B150F9D38FE8CF312BB48DB72E7ECC4E9C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* LinqEnumerator_t569E03B1C27DEBBF7549F3136EE88777AA5A3AD3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t82186C961793D19A01F84E3AB82A2146C6F979C4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RuntimeObject_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Stack_1_tD714EE61707D6A5034DEA764FF7763C53B9946B8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringBuilder_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* String_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass21_0_t310B9E292689B6B4824DD285356EF9A1CDA716DD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3Cget_ChildrenU3Ed__24_t2556BF7E4766181D4B361F546D8C3C38CC3F56F5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3Cget_ChildrenU3Ed__27_t89EE8560565615C4B0D27D10FF05ED6CB2C81A7A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3Cget_ChildrenU3Ed__43_t5205FD2B072EA35613DB00E54067D4BE6FA9EDBF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3Cget_DeepChildrenU3Ed__45_tB8D5A24DD52825340B1A0A9505719E91C72CE533_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral0767326DBE1DD31063256737FD019DC6682353E2;
IL2CPP_EXTERN_C String_t* _stringLiteral5962E944D7340CE47999BF097B4AFD70C1501FB9;
IL2CPP_EXTERN_C String_t* _stringLiteral5BEFD8CC60A79699B5BB00E37BAC5B62D371E174;
IL2CPP_EXTERN_C String_t* _stringLiteral77D38C0623F92B292B925F6E72CF5CF99A20D4EB;
IL2CPP_EXTERN_C String_t* _stringLiteral785F17F45C331C415D0A7458E6AAC36966399C51;
IL2CPP_EXTERN_C String_t* _stringLiteral7F3238CD8C342B06FB9AB185C610175C84625462;
IL2CPP_EXTERN_C String_t* _stringLiteral848E5ED630B3142F565DD995C6E8D30187ED33CD;
IL2CPP_EXTERN_C String_t* _stringLiteral870C43A28360ADF668EFBACF63A4553351C7FA4C;
IL2CPP_EXTERN_C String_t* _stringLiteralA7C3FCA8C63E127B542B38A5CA5E3FEEDDD1B122;
IL2CPP_EXTERN_C String_t* _stringLiteralB78F235D4291950A7D101307609C259F3E1F033F;
IL2CPP_EXTERN_C String_t* _stringLiteralB7C45DD316C68ABF3429C20058C2981C652192F2;
IL2CPP_EXTERN_C String_t* _stringLiteralBF00FC1AEA59DE3445148D940526441AD4E1FFA7;
IL2CPP_EXTERN_C String_t* _stringLiteralD68508B50CDE1B2E777400476044304CB8149311;
IL2CPP_EXTERN_C String_t* _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
IL2CPP_EXTERN_C String_t* _stringLiteralDA666908BB15F4E1D2649752EC5DCBD0D5C64699;
IL2CPP_EXTERN_C String_t* _stringLiteralF18840F490E42D3CE48CDCBF47229C1C240F8ABE;
IL2CPP_EXTERN_C String_t* _stringLiteralF944DCD635F9801F7AC90A407FBC479964DEC024;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Add_m647A845263DF322FB4262AE7C9D120FAC128C8B6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Clear_mB30427E3A804F7FB320A4D8929972DF27FCF9DCA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_ContainsKey_m3DDBDDAE0E6275C571FECD17CB1AF92061D2C693_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_GetEnumerator_mF7EC8BBAB3CD7EE5642E71681FBDB4A884B05780_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Remove_m76681FCFCB5A12781F4025FC31BE3FF70F1C6470_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_TryGetValue_m1FF64870279BEF55007411D7CB05F5DD991396BC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_m3039782D3F8D2BBEBABB511BC6FA48187E22008A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_get_Count_m7F2AE40DF045D2505F47E6416C1E6EA48C765C17_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_get_Item_mFFD3A96BCF327EA058B849F1973D14E1BB173C8B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_set_Item_m6D37E9D9CD14A99AC08894824FE5F3D82B9CD62A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_ElementAt_TisKeyValuePair_2_tD59618B150F9D38FE8CF312BB48DB72E7ECC4E9C_mFDA649241C748243A89276A017893C462B2A2114_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_First_TisKeyValuePair_2_tD59618B150F9D38FE8CF312BB48DB72E7ECC4E9C_m9971C479DDD6CA68E54EDF39EC02A748B937BAC2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_Where_TisKeyValuePair_2_tD59618B150F9D38FE8CF312BB48DB72E7ECC4E9C_mB3AB8B8230FB048784669A99491FFED031B28398_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_m844831FF3F93A9E3EEDFFF0186465A21BA38BE18_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_mE0AEC0BF430B01595C081CE7115C6CBE413D16D0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_m5BE8E9A6A9A88CC3FF48EA3466675ED35B0CC160_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_mB1C31B2A291986F6CD5A79C9F75196088363BF2D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_m44F4D4F7899D0688C1E68E1457EBDBC2D26F91CC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_m588061B1765C95AD6BDEC8EA8FBE37BDA51EAC5E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* JSONLazyCreator_Set_TisJSONArray_tDB47C85E2DDB2CB4A972E4C0685D82E00490CB25_m7D3A237E093665EDAA099018EAD7FCF9FB769A9B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* JSONLazyCreator_Set_TisJSONBool_tD24D984AAB7A652E0241CA0111547A9A9F66B5C9_m4F55FE6F4423B1007E8D5802037174BE6A61D4C8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* JSONLazyCreator_Set_TisJSONNumber_tE274A557833A3AE0CDC6C7E563CEAD2A38355688_mB38332B5E61CF823BFA62D3DC8FC75C398775866_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* JSONLazyCreator_Set_TisJSONObject_tEA00D19860E34865B3D16312DD382C0901CAB654_mF8CEE128BB1DCFC3C42A7158743827420DCDFB91_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* JSONLazyCreator_Set_TisJSONString_t1A1090FC5863846C80D0BDEF4E63FE23D7AC437D_m99A1733E07636B9540AF6CA596217D6F8480F96A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* JSONNode_Parse_mD88F392BA303CB1BE616FA5B44E6ED8D7C2E7432_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* KeyValuePair_2__ctor_mE106F3C8BA6A87DA978B202073346ACDBCECA0D8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* KeyValuePair_2_get_Key_m8460F8B92343281177F3C22FD70CC4BADACA8112_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* KeyValuePair_2_get_Value_mDEC839FB9359C1DC5F359FEB68C324657E5216DD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_mAED0B3BF4DD4391B86D3FAECFD32599267E7588B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Clear_m45B21862637CFCBDDD2387CF514BE027051639CE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_GetEnumerator_m2ABBF46AA2F1090503EFFF7B8ECCD8FB679D0168_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_RemoveAt_mCF3139E1292366D334488D1F33EEDD213F87B66A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Remove_m0448185622BC57438A12CA8BE28F0AB3505C1651_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m38909E0CD0BF81B3E450AF123312D588B61C29D3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Capacity_m161E64B32DBB42C60E2FBF39B39675DA3B96F533_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_m6F60F98E27BD1E63972A86B9EE94FAF256598C4A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_m39B501262E2772265E587E27634C346A3B31C74B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_set_Capacity_mB03AF377BCE94EB246C2D3DB5E48F6E32F8DB272_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_set_Item_mBE1F797497EC203914E95B1F5DE445D9DB8BCD09_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Stack_1_Peek_m85C942EF95437C87FCCE1BBD7F166192CE341D5D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Stack_1_Pop_m68E783CC815DA7056E83DBD8DEC3C550CD932DFB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Stack_1_Push_m4C5E04D7BA9297399CBD489C611AAD4840626FE9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Stack_1__ctor_m732686422E4C72ACBAD8662B06F74B702B1498D2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Stack_1_get_Count_m37B27F2261D562BBD092A5424B43E4F857CD561F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass21_0_U3CRemoveU3Eb__0_m20DEDAFB58EF2F7E18B1B538508AFD75E7D6AA37_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3Cget_ChildrenU3Ed__24_System_Collections_IEnumerator_Reset_m2342D9BF9811C4FBF32417D5BD671E744DAA044D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3Cget_ChildrenU3Ed__27_System_Collections_IEnumerator_Reset_m3759FAC342B4011A236A1F8C8C8712D0EE16CA60_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3Cget_ChildrenU3Ed__43_System_Collections_IEnumerator_Reset_m9AFC505E4DEDC40D1D02673A77BDB28414D58364_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3Cget_DeepChildrenU3Ed__45_System_Collections_IEnumerator_Reset_m7567A00E7D5529C7D739EA350A62C378748DCDFC_RuntimeMethod_var;
struct CultureData_tEEFDCF4ECA1BBF6C0C8C94EB3541657245598F9D_marshaled_com;
struct CultureData_tEEFDCF4ECA1BBF6C0C8C94EB3541657245598F9D_marshaled_pinvoke;
struct CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_marshaled_com;
struct CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_marshaled_pinvoke;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Enumerator_tA1F999D27FB3CE7FB0AC8D9BD4084CBA9E687C1F;;
struct Enumerator_tA1F999D27FB3CE7FB0AC8D9BD4084CBA9E687C1F_marshaled_com;
struct Enumerator_tA1F999D27FB3CE7FB0AC8D9BD4084CBA9E687C1F_marshaled_com;;
struct Enumerator_tA1F999D27FB3CE7FB0AC8D9BD4084CBA9E687C1F_marshaled_pinvoke;
struct Enumerator_tA1F999D27FB3CE7FB0AC8D9BD4084CBA9E687C1F_marshaled_pinvoke;;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_tF062866229C4952B8051AD32AB6E9D931142CC95 
{
};

// System.Collections.Generic.Dictionary`2<System.String,SimpleJSON.JSONNode>
struct Dictionary_2_t12C70EF76A4D27675DBF4B2F8A83098ABB9DBC33  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.Dictionary`2::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::_entries
	EntryU5BU5D_t86D52525E21109390C2D6C0572544D4268F95576* ____entries_1;
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
	KeyCollection_tDE3ABC0784C3B1BCD31D575082F7C20EC70286B2* ____keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_values
	ValueCollection_t76434FB4E445EE3387D3FC6DEAA1DB600E4B39B5* ____values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject* ____syncRoot_9;
};

// System.Collections.Generic.List`1<SimpleJSON.JSONNode>
struct List_1_t82186C961793D19A01F84E3AB82A2146C6F979C4  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	JSONNodeU5BU5D_t2C7B030008A25DEF9AC8F1A737F9D2DD4EA01B40* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_t82186C961793D19A01F84E3AB82A2146C6F979C4_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	JSONNodeU5BU5D_t2C7B030008A25DEF9AC8F1A737F9D2DD4EA01B40* ___s_emptyArray_5;
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

// System.Collections.Generic.Stack`1<SimpleJSON.JSONNode>
struct Stack_1_tD714EE61707D6A5034DEA764FF7763C53B9946B8  : public RuntimeObject
{
	// T[] System.Collections.Generic.Stack`1::_array
	JSONNodeU5BU5D_t2C7B030008A25DEF9AC8F1A737F9D2DD4EA01B40* ____array_0;
	// System.Int32 System.Collections.Generic.Stack`1::_size
	int32_t ____size_1;
	// System.Int32 System.Collections.Generic.Stack`1::_version
	int32_t ____version_2;
	// System.Object System.Collections.Generic.Stack`1::_syncRoot
	RuntimeObject* ____syncRoot_3;
};

// System.Collections.Generic.Stack`1<System.Object>
struct Stack_1_tAD790A47551563636908E21E4F08C54C0C323EB5  : public RuntimeObject
{
	// T[] System.Collections.Generic.Stack`1::_array
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ____array_0;
	// System.Int32 System.Collections.Generic.Stack`1::_size
	int32_t ____size_1;
	// System.Int32 System.Collections.Generic.Stack`1::_version
	int32_t ____version_2;
	// System.Object System.Collections.Generic.Stack`1::_syncRoot
	RuntimeObject* ____syncRoot_3;
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

// SimpleJSON.JSON
struct JSON_tE3B5FF47112F2BB30DF81C8CA516B06E9112E591  : public RuntimeObject
{
};

// SimpleJSON.JSONNode
struct JSONNode_tD29E53D2E1C8F91FF9FEA40F4F3A540857651D3B  : public RuntimeObject
{
};

struct JSONNode_tD29E53D2E1C8F91FF9FEA40F4F3A540857651D3B_StaticFields
{
	// System.Boolean SimpleJSON.JSONNode::forceASCII
	bool ___forceASCII_0;
	// System.Boolean SimpleJSON.JSONNode::longAsString
	bool ___longAsString_1;
	// System.Boolean SimpleJSON.JSONNode::allowLineComments
	bool ___allowLineComments_2;
};

struct JSONNode_tD29E53D2E1C8F91FF9FEA40F4F3A540857651D3B_ThreadStaticFields
{
	// System.Text.StringBuilder SimpleJSON.JSONNode::m_EscapeBuilder
	StringBuilder_t* ___m_EscapeBuilder_3;
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

// System.Text.StringBuilder
struct StringBuilder_t  : public RuntimeObject
{
	// System.Char[] System.Text.StringBuilder::m_ChunkChars
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___m_ChunkChars_0;
	// System.Text.StringBuilder System.Text.StringBuilder::m_ChunkPrevious
	StringBuilder_t* ___m_ChunkPrevious_1;
	// System.Int32 System.Text.StringBuilder::m_ChunkLength
	int32_t ___m_ChunkLength_2;
	// System.Int32 System.Text.StringBuilder::m_ChunkOffset
	int32_t ___m_ChunkOffset_3;
	// System.Int32 System.Text.StringBuilder::m_MaxCapacity
	int32_t ___m_MaxCapacity_4;
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

// SimpleJSON.JSONNode/<get_Children>d__43
struct U3Cget_ChildrenU3Ed__43_t5205FD2B072EA35613DB00E54067D4BE6FA9EDBF  : public RuntimeObject
{
	// System.Int32 SimpleJSON.JSONNode/<get_Children>d__43::<>1__state
	int32_t ___U3CU3E1__state_0;
	// SimpleJSON.JSONNode SimpleJSON.JSONNode/<get_Children>d__43::<>2__current
	JSONNode_tD29E53D2E1C8F91FF9FEA40F4F3A540857651D3B* ___U3CU3E2__current_1;
	// System.Int32 SimpleJSON.JSONNode/<get_Children>d__43::<>l__initialThreadId
	int32_t ___U3CU3El__initialThreadId_2;
};

// SimpleJSON.JSONNode/<get_DeepChildren>d__45
struct U3Cget_DeepChildrenU3Ed__45_tB8D5A24DD52825340B1A0A9505719E91C72CE533  : public RuntimeObject
{
	// System.Int32 SimpleJSON.JSONNode/<get_DeepChildren>d__45::<>1__state
	int32_t ___U3CU3E1__state_0;
	// SimpleJSON.JSONNode SimpleJSON.JSONNode/<get_DeepChildren>d__45::<>2__current
	JSONNode_tD29E53D2E1C8F91FF9FEA40F4F3A540857651D3B* ___U3CU3E2__current_1;
	// System.Int32 SimpleJSON.JSONNode/<get_DeepChildren>d__45::<>l__initialThreadId
	int32_t ___U3CU3El__initialThreadId_2;
	// SimpleJSON.JSONNode SimpleJSON.JSONNode/<get_DeepChildren>d__45::<>4__this
	JSONNode_tD29E53D2E1C8F91FF9FEA40F4F3A540857651D3B* ___U3CU3E4__this_3;
	// System.Collections.Generic.IEnumerator`1<SimpleJSON.JSONNode> SimpleJSON.JSONNode/<get_DeepChildren>d__45::<>7__wrap1
	RuntimeObject* ___U3CU3E7__wrap1_4;
	// System.Collections.Generic.IEnumerator`1<SimpleJSON.JSONNode> SimpleJSON.JSONNode/<get_DeepChildren>d__45::<>7__wrap2
	RuntimeObject* ___U3CU3E7__wrap2_5;
};

// SimpleJSON.JSONObject/<>c__DisplayClass21_0
struct U3CU3Ec__DisplayClass21_0_t310B9E292689B6B4824DD285356EF9A1CDA716DD  : public RuntimeObject
{
	// SimpleJSON.JSONNode SimpleJSON.JSONObject/<>c__DisplayClass21_0::aNode
	JSONNode_tD29E53D2E1C8F91FF9FEA40F4F3A540857651D3B* ___aNode_0;
};

// System.Collections.Generic.List`1/Enumerator<SimpleJSON.JSONNode>
struct Enumerator_t81A423E0F04B93279CA04B31DF14EDE9DE3F30AA 
{
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::_list
	List_1_t82186C961793D19A01F84E3AB82A2146C6F979C4* ____list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_version
	int32_t ____version_2;
	// T System.Collections.Generic.List`1/Enumerator::_current
	JSONNode_tD29E53D2E1C8F91FF9FEA40F4F3A540857651D3B* ____current_3;
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

// System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>
struct KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230 
{
	// TKey System.Collections.Generic.KeyValuePair`2::key
	RuntimeObject* ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	RuntimeObject* ___value_1;
};

// System.Collections.Generic.KeyValuePair`2<System.String,SimpleJSON.JSONNode>
struct KeyValuePair_2_tD59618B150F9D38FE8CF312BB48DB72E7ECC4E9C 
{
	// TKey System.Collections.Generic.KeyValuePair`2::key
	String_t* ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	JSONNode_tD29E53D2E1C8F91FF9FEA40F4F3A540857651D3B* ___value_1;
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

// System.Decimal
struct Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F 
{
	union
	{
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Int32 System.Decimal::flags
			int32_t ___flags_8;
		};
		#pragma pack(pop, tp)
		struct
		{
			int32_t ___flags_8_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___hi_9_OffsetPadding[4];
			// System.Int32 System.Decimal::hi
			int32_t ___hi_9;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___hi_9_OffsetPadding_forAlignmentOnly[4];
			int32_t ___hi_9_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___lo_10_OffsetPadding[8];
			// System.Int32 System.Decimal::lo
			int32_t ___lo_10;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___lo_10_OffsetPadding_forAlignmentOnly[8];
			int32_t ___lo_10_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___mid_11_OffsetPadding[12];
			// System.Int32 System.Decimal::mid
			int32_t ___mid_11;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___mid_11_OffsetPadding_forAlignmentOnly[12];
			int32_t ___mid_11_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___ulomidLE_12_OffsetPadding[8];
			// System.UInt64 System.Decimal::ulomidLE
			uint64_t ___ulomidLE_12;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___ulomidLE_12_OffsetPadding_forAlignmentOnly[8];
			uint64_t ___ulomidLE_12_forAlignmentOnly;
		};
	};
};

struct Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F_StaticFields
{
	// System.Decimal System.Decimal::Zero
	Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F ___Zero_3;
	// System.Decimal System.Decimal::One
	Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F ___One_4;
	// System.Decimal System.Decimal::MinusOne
	Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F ___MinusOne_5;
	// System.Decimal System.Decimal::MaxValue
	Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F ___MaxValue_6;
	// System.Decimal System.Decimal::MinValue
	Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F ___MinValue_7;
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

// System.Guid
struct Guid_t 
{
	// System.Int32 System.Guid::_a
	int32_t ____a_1;
	// System.Int16 System.Guid::_b
	int16_t ____b_2;
	// System.Int16 System.Guid::_c
	int16_t ____c_3;
	// System.Byte System.Guid::_d
	uint8_t ____d_4;
	// System.Byte System.Guid::_e
	uint8_t ____e_5;
	// System.Byte System.Guid::_f
	uint8_t ____f_6;
	// System.Byte System.Guid::_g
	uint8_t ____g_7;
	// System.Byte System.Guid::_h
	uint8_t ____h_8;
	// System.Byte System.Guid::_i
	uint8_t ____i_9;
	// System.Byte System.Guid::_j
	uint8_t ____j_10;
	// System.Byte System.Guid::_k
	uint8_t ____k_11;
};

struct Guid_t_StaticFields
{
	// System.Guid System.Guid::Empty
	Guid_t ___Empty_0;
};

// System.Int16
struct Int16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175 
{
	// System.Int16 System.Int16::m_value
	int16_t ___m_value_0;
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

// SimpleJSON.JSONArray
struct JSONArray_tDB47C85E2DDB2CB4A972E4C0685D82E00490CB25  : public JSONNode_tD29E53D2E1C8F91FF9FEA40F4F3A540857651D3B
{
	// System.Collections.Generic.List`1<SimpleJSON.JSONNode> SimpleJSON.JSONArray::m_List
	List_1_t82186C961793D19A01F84E3AB82A2146C6F979C4* ___m_List_4;
	// System.Boolean SimpleJSON.JSONArray::inline
	bool ___inline_5;
};

// SimpleJSON.JSONBool
struct JSONBool_tD24D984AAB7A652E0241CA0111547A9A9F66B5C9  : public JSONNode_tD29E53D2E1C8F91FF9FEA40F4F3A540857651D3B
{
	// System.Boolean SimpleJSON.JSONBool::m_Data
	bool ___m_Data_4;
};

// SimpleJSON.JSONLazyCreator
struct JSONLazyCreator_t67A874365EE690A6837C36B8C9214BCBD04C1C00  : public JSONNode_tD29E53D2E1C8F91FF9FEA40F4F3A540857651D3B
{
	// SimpleJSON.JSONNode SimpleJSON.JSONLazyCreator::m_Node
	JSONNode_tD29E53D2E1C8F91FF9FEA40F4F3A540857651D3B* ___m_Node_4;
	// System.String SimpleJSON.JSONLazyCreator::m_Key
	String_t* ___m_Key_5;
};

// SimpleJSON.JSONNull
struct JSONNull_tEE66558FCE6029B3F1414C062F5E38E0530BD69A  : public JSONNode_tD29E53D2E1C8F91FF9FEA40F4F3A540857651D3B
{
};

struct JSONNull_tEE66558FCE6029B3F1414C062F5E38E0530BD69A_StaticFields
{
	// SimpleJSON.JSONNull SimpleJSON.JSONNull::m_StaticInstance
	JSONNull_tEE66558FCE6029B3F1414C062F5E38E0530BD69A* ___m_StaticInstance_4;
	// System.Boolean SimpleJSON.JSONNull::reuseSameInstance
	bool ___reuseSameInstance_5;
};

// SimpleJSON.JSONNumber
struct JSONNumber_tE274A557833A3AE0CDC6C7E563CEAD2A38355688  : public JSONNode_tD29E53D2E1C8F91FF9FEA40F4F3A540857651D3B
{
	// System.Double SimpleJSON.JSONNumber::m_Data
	double ___m_Data_4;
};

// SimpleJSON.JSONObject
struct JSONObject_tEA00D19860E34865B3D16312DD382C0901CAB654  : public JSONNode_tD29E53D2E1C8F91FF9FEA40F4F3A540857651D3B
{
	// System.Collections.Generic.Dictionary`2<System.String,SimpleJSON.JSONNode> SimpleJSON.JSONObject::m_Dict
	Dictionary_2_t12C70EF76A4D27675DBF4B2F8A83098ABB9DBC33* ___m_Dict_4;
	// System.Boolean SimpleJSON.JSONObject::inline
	bool ___inline_5;
};

// SimpleJSON.JSONString
struct JSONString_t1A1090FC5863846C80D0BDEF4E63FE23D7AC437D  : public JSONNode_tD29E53D2E1C8F91FF9FEA40F4F3A540857651D3B
{
	// System.String SimpleJSON.JSONString::m_Data
	String_t* ___m_Data_4;
};

// System.SByte
struct SByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5 
{
	// System.SByte System.SByte::m_value
	int8_t ___m_value_0;
};

// System.Single
struct Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C 
{
	// System.Single System.Single::m_value
	float ___m_value_0;
};

// System.UInt16
struct UInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455 
{
	// System.UInt16 System.UInt16::m_value
	uint16_t ___m_value_0;
};

// System.UInt32
struct UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B 
{
	// System.UInt32 System.UInt32::m_value
	uint32_t ___m_value_0;
};

// System.UInt64
struct UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF 
{
	// System.UInt64 System.UInt64::m_value
	uint64_t ___m_value_0;
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

// System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>
struct Enumerator_tEA93FE2B778D098F590CA168BEFC4CD85D73A6B9 
{
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator::_dictionary
	Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* ____dictionary_0;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::_version
	int32_t ____version_1;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::_index
	int32_t ____index_2;
	// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator::_current
	KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230 ____current_3;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::_getEnumeratorRetType
	int32_t ____getEnumeratorRetType_4;
};

// System.Collections.Generic.Dictionary`2/Enumerator<System.String,SimpleJSON.JSONNode>
struct Enumerator_t1B0916EAA662F17AFF7BDA682F6213FDBE55A48F 
{
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator::_dictionary
	Dictionary_2_t12C70EF76A4D27675DBF4B2F8A83098ABB9DBC33* ____dictionary_0;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::_version
	int32_t ____version_1;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::_index
	int32_t ____index_2;
	// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator::_current
	KeyValuePair_2_tD59618B150F9D38FE8CF312BB48DB72E7ECC4E9C ____current_3;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::_getEnumeratorRetType
	int32_t ____getEnumeratorRetType_4;
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

// SimpleJSON.JSONNodeType
struct JSONNodeType_tF84D3DC58261067BE68B822CB32D55FEBDE10064 
{
	// System.Int32 SimpleJSON.JSONNodeType::value__
	int32_t ___value___2;
};

// SimpleJSON.JSONTextMode
struct JSONTextMode_t247C936557A236B07C199D733D1F049F77C65239 
{
	// System.Int32 SimpleJSON.JSONTextMode::value__
	int32_t ___value___2;
};

// System.Globalization.NumberStyles
struct NumberStyles_t567C6CBC2A2B5B5A2C43B2855D158949984A810C 
{
	// System.Int32 System.Globalization.NumberStyles::value__
	int32_t ___value___2;
};

// SimpleJSON.JSONArray/<get_Children>d__24
struct U3Cget_ChildrenU3Ed__24_t2556BF7E4766181D4B361F546D8C3C38CC3F56F5  : public RuntimeObject
{
	// System.Int32 SimpleJSON.JSONArray/<get_Children>d__24::<>1__state
	int32_t ___U3CU3E1__state_0;
	// SimpleJSON.JSONNode SimpleJSON.JSONArray/<get_Children>d__24::<>2__current
	JSONNode_tD29E53D2E1C8F91FF9FEA40F4F3A540857651D3B* ___U3CU3E2__current_1;
	// System.Int32 SimpleJSON.JSONArray/<get_Children>d__24::<>l__initialThreadId
	int32_t ___U3CU3El__initialThreadId_2;
	// SimpleJSON.JSONArray SimpleJSON.JSONArray/<get_Children>d__24::<>4__this
	JSONArray_tDB47C85E2DDB2CB4A972E4C0685D82E00490CB25* ___U3CU3E4__this_3;
	// System.Collections.Generic.List`1/Enumerator<SimpleJSON.JSONNode> SimpleJSON.JSONArray/<get_Children>d__24::<>7__wrap1
	Enumerator_t81A423E0F04B93279CA04B31DF14EDE9DE3F30AA ___U3CU3E7__wrap1_4;
};

// SimpleJSON.JSONNode/Enumerator/Type
struct Type_tCA48820B111B2E3EE681DFE6FD435684DE6A75DA 
{
	// System.Int32 SimpleJSON.JSONNode/Enumerator/Type::value__
	int32_t ___value___2;
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

// System.SystemException
struct SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295  : public Exception_t
{
};

// SimpleJSON.JSONNode/Enumerator
struct Enumerator_tA1F999D27FB3CE7FB0AC8D9BD4084CBA9E687C1F 
{
	// SimpleJSON.JSONNode/Enumerator/Type SimpleJSON.JSONNode/Enumerator::type
	int32_t ___type_0;
	// System.Collections.Generic.Dictionary`2/Enumerator<System.String,SimpleJSON.JSONNode> SimpleJSON.JSONNode/Enumerator::m_Object
	Enumerator_t1B0916EAA662F17AFF7BDA682F6213FDBE55A48F ___m_Object_1;
	// System.Collections.Generic.List`1/Enumerator<SimpleJSON.JSONNode> SimpleJSON.JSONNode/Enumerator::m_Array
	Enumerator_t81A423E0F04B93279CA04B31DF14EDE9DE3F30AA ___m_Array_2;
};
// Native definition for P/Invoke marshalling of SimpleJSON.JSONNode/Enumerator
struct Enumerator_tA1F999D27FB3CE7FB0AC8D9BD4084CBA9E687C1F_marshaled_pinvoke
{
	int32_t ___type_0;
	Enumerator_t1B0916EAA662F17AFF7BDA682F6213FDBE55A48F ___m_Object_1;
	Enumerator_t81A423E0F04B93279CA04B31DF14EDE9DE3F30AA ___m_Array_2;
};
// Native definition for COM marshalling of SimpleJSON.JSONNode/Enumerator
struct Enumerator_tA1F999D27FB3CE7FB0AC8D9BD4084CBA9E687C1F_marshaled_com
{
	int32_t ___type_0;
	Enumerator_t1B0916EAA662F17AFF7BDA682F6213FDBE55A48F ___m_Object_1;
	Enumerator_t81A423E0F04B93279CA04B31DF14EDE9DE3F30AA ___m_Array_2;
};

// SimpleJSON.JSONObject/<get_Children>d__27
struct U3Cget_ChildrenU3Ed__27_t89EE8560565615C4B0D27D10FF05ED6CB2C81A7A  : public RuntimeObject
{
	// System.Int32 SimpleJSON.JSONObject/<get_Children>d__27::<>1__state
	int32_t ___U3CU3E1__state_0;
	// SimpleJSON.JSONNode SimpleJSON.JSONObject/<get_Children>d__27::<>2__current
	JSONNode_tD29E53D2E1C8F91FF9FEA40F4F3A540857651D3B* ___U3CU3E2__current_1;
	// System.Int32 SimpleJSON.JSONObject/<get_Children>d__27::<>l__initialThreadId
	int32_t ___U3CU3El__initialThreadId_2;
	// SimpleJSON.JSONObject SimpleJSON.JSONObject/<get_Children>d__27::<>4__this
	JSONObject_tEA00D19860E34865B3D16312DD382C0901CAB654* ___U3CU3E4__this_3;
	// System.Collections.Generic.Dictionary`2/Enumerator<System.String,SimpleJSON.JSONNode> SimpleJSON.JSONObject/<get_Children>d__27::<>7__wrap1
	Enumerator_t1B0916EAA662F17AFF7BDA682F6213FDBE55A48F ___U3CU3E7__wrap1_4;
};

// System.Func`2<System.Collections.Generic.KeyValuePair`2<System.String,SimpleJSON.JSONNode>,System.Boolean>
struct Func_2_t8A99FF3F64B7CF9CFC4EE2DF270BD1703B76DC50  : public MulticastDelegate_t
{
};

// System.NotSupportedException
struct NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};

// SimpleJSON.JSONNode/KeyEnumerator
struct KeyEnumerator_t75897CC29A0BD54DD4F75DA1922448A65DEC4458 
{
	// SimpleJSON.JSONNode/Enumerator SimpleJSON.JSONNode/KeyEnumerator::m_Enumerator
	Enumerator_tA1F999D27FB3CE7FB0AC8D9BD4084CBA9E687C1F ___m_Enumerator_0;
};
// Native definition for P/Invoke marshalling of SimpleJSON.JSONNode/KeyEnumerator
struct KeyEnumerator_t75897CC29A0BD54DD4F75DA1922448A65DEC4458_marshaled_pinvoke
{
	Enumerator_tA1F999D27FB3CE7FB0AC8D9BD4084CBA9E687C1F_marshaled_pinvoke ___m_Enumerator_0;
};
// Native definition for COM marshalling of SimpleJSON.JSONNode/KeyEnumerator
struct KeyEnumerator_t75897CC29A0BD54DD4F75DA1922448A65DEC4458_marshaled_com
{
	Enumerator_tA1F999D27FB3CE7FB0AC8D9BD4084CBA9E687C1F_marshaled_com ___m_Enumerator_0;
};

// SimpleJSON.JSONNode/LinqEnumerator
struct LinqEnumerator_t569E03B1C27DEBBF7549F3136EE88777AA5A3AD3  : public RuntimeObject
{
	// SimpleJSON.JSONNode SimpleJSON.JSONNode/LinqEnumerator::m_Node
	JSONNode_tD29E53D2E1C8F91FF9FEA40F4F3A540857651D3B* ___m_Node_0;
	// SimpleJSON.JSONNode/Enumerator SimpleJSON.JSONNode/LinqEnumerator::m_Enumerator
	Enumerator_tA1F999D27FB3CE7FB0AC8D9BD4084CBA9E687C1F ___m_Enumerator_1;
};

// SimpleJSON.JSONNode/ValueEnumerator
struct ValueEnumerator_tEA9D0EC3AED2B1854EAA656A2ECA719D051F774E 
{
	// SimpleJSON.JSONNode/Enumerator SimpleJSON.JSONNode/ValueEnumerator::m_Enumerator
	Enumerator_tA1F999D27FB3CE7FB0AC8D9BD4084CBA9E687C1F ___m_Enumerator_0;
};
// Native definition for P/Invoke marshalling of SimpleJSON.JSONNode/ValueEnumerator
struct ValueEnumerator_tEA9D0EC3AED2B1854EAA656A2ECA719D051F774E_marshaled_pinvoke
{
	Enumerator_tA1F999D27FB3CE7FB0AC8D9BD4084CBA9E687C1F_marshaled_pinvoke ___m_Enumerator_0;
};
// Native definition for COM marshalling of SimpleJSON.JSONNode/ValueEnumerator
struct ValueEnumerator_tEA9D0EC3AED2B1854EAA656A2ECA719D051F774E_marshaled_com
{
	Enumerator_tA1F999D27FB3CE7FB0AC8D9BD4084CBA9E687C1F_marshaled_com ___m_Enumerator_0;
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

IL2CPP_EXTERN_C void Enumerator_tA1F999D27FB3CE7FB0AC8D9BD4084CBA9E687C1F_marshal_pinvoke(const Enumerator_tA1F999D27FB3CE7FB0AC8D9BD4084CBA9E687C1F& unmarshaled, Enumerator_tA1F999D27FB3CE7FB0AC8D9BD4084CBA9E687C1F_marshaled_pinvoke& marshaled);
IL2CPP_EXTERN_C void Enumerator_tA1F999D27FB3CE7FB0AC8D9BD4084CBA9E687C1F_marshal_pinvoke_back(const Enumerator_tA1F999D27FB3CE7FB0AC8D9BD4084CBA9E687C1F_marshaled_pinvoke& marshaled, Enumerator_tA1F999D27FB3CE7FB0AC8D9BD4084CBA9E687C1F& unmarshaled);
IL2CPP_EXTERN_C void Enumerator_tA1F999D27FB3CE7FB0AC8D9BD4084CBA9E687C1F_marshal_pinvoke_cleanup(Enumerator_tA1F999D27FB3CE7FB0AC8D9BD4084CBA9E687C1F_marshaled_pinvoke& marshaled);
IL2CPP_EXTERN_C void Enumerator_tA1F999D27FB3CE7FB0AC8D9BD4084CBA9E687C1F_marshal_com(const Enumerator_tA1F999D27FB3CE7FB0AC8D9BD4084CBA9E687C1F& unmarshaled, Enumerator_tA1F999D27FB3CE7FB0AC8D9BD4084CBA9E687C1F_marshaled_com& marshaled);
IL2CPP_EXTERN_C void Enumerator_tA1F999D27FB3CE7FB0AC8D9BD4084CBA9E687C1F_marshal_com_back(const Enumerator_tA1F999D27FB3CE7FB0AC8D9BD4084CBA9E687C1F_marshaled_com& marshaled, Enumerator_tA1F999D27FB3CE7FB0AC8D9BD4084CBA9E687C1F& unmarshaled);
IL2CPP_EXTERN_C void Enumerator_tA1F999D27FB3CE7FB0AC8D9BD4084CBA9E687C1F_marshal_com_cleanup(Enumerator_tA1F999D27FB3CE7FB0AC8D9BD4084CBA9E687C1F_marshaled_com& marshaled);

// TValue System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>::get_Value()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* KeyValuePair_2_get_Value_mC6BD8075F9C9DDEF7B4D731E5C38EC19103988E7_gshared_inline (KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Stack`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Stack_1__ctor_m70E8EDA96A608CE9BAB7FC8313B233AADA573BD4_gshared (Stack_1_tAD790A47551563636908E21E4F08C54C0C323EB5* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Stack`1<System.Object>::Push(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Stack_1_Push_m709DD11BC1291A905814182CF9A367DE7399A778_gshared (Stack_1_tAD790A47551563636908E21E4F08C54C0C323EB5* __this, RuntimeObject* ___item0, const RuntimeMethod* method) ;
// T System.Collections.Generic.Stack`1<System.Object>::Peek()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Stack_1_Peek_mF0ECF6A61726B66E6D9B33D8C4DEAA47E586E6E4_gshared (Stack_1_tAD790A47551563636908E21E4F08C54C0C323EB5* __this, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.Stack`1<System.Object>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Stack_1_get_Count_mD08AE71D49787D30DDD9D484BCD323D646744D2E_gshared_inline (Stack_1_tAD790A47551563636908E21E4F08C54C0C323EB5* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.Stack`1<System.Object>::Pop()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Stack_1_Pop_m2AFF69249659372F07EE25817DBCAFE74E1CF778_gshared (Stack_1_tAD790A47551563636908E21E4F08C54C0C323EB5* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1/Enumerator<System.Object>::get_Current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>::.ctor(TKey,TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KeyValuePair_2__ctor_m0D5C3E0BE2D37252D3F4E0F0EA9A13C9458D4950_gshared (KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230* __this, RuntimeObject* ___key0, RuntimeObject* ___value1, const RuntimeMethod* method) ;
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::get_Current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230 Enumerator_get_Current_mE3475384B761E1C7971D3639BD09117FE8363422_gshared_inline (Enumerator_tEA93FE2B778D098F590CA168BEFC4CD85D73A6B9* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1/Enumerator<System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_mE921CC8F29FBBDE7CC3209A0ED0D921D58D00BCB_gshared (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_mCD4950A75FFADD54AF354D48C6C0DB0B5A22A5F4_gshared (Enumerator_tEA93FE2B778D098F590CA168BEFC4CD85D73A6B9* __this, const RuntimeMethod* method) ;
// TKey System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>::get_Key()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* KeyValuePair_2_get_Key_mBD8EA7557C27E6956F2AF29DA3F7499B2F51A282_gshared_inline (KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<System.Object>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A List_1_GetEnumerator_mD8294A7FA2BEB1929487127D476F8EC1CDC23BFC_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<System.Object>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1<System.Object>::get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, int32_t ___index0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::Add(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___item0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::set_Item(System.Int32,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_set_Item_m3C58DBC69A321AF2826595584FF3E9F43C07EA56_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, int32_t ___index0, RuntimeObject* ___value1, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::RemoveAt(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_RemoveAt_m54F62297ADEE4D4FDA697F49ED807BF901201B54_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, int32_t ___index0, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1<System.Object>::Remove(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_Remove_m4DFA48F4CEB9169601E75FC28517C5C06EFA5AD7_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___item0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::Clear()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Clear_m16C1F2C61FED5955F10EB36BC1CB2DF34B128994_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<System.Object>::get_Capacity()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t List_1_get_Capacity_mF05ADA0EC0B9CC71EDE6D06F6A33A50705EEA32D_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::set_Capacity(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_set_Capacity_mD826E33A9E5EBC19C714653217071790693E0B95_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1/Enumerator<System.Object>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_mD9DC3E3C3697830A4823047AB29A77DBBB5ED419_gshared (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Object>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_tEA93FE2B778D098F590CA168BEFC4CD85D73A6B9 Dictionary_2_GetEnumerator_m52AB12790B0B9B46B1DFB1F861C9DBEAB07C1FDA_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::ContainsKey(TKey)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_ContainsKey_m703047C213F7AB55C9DC346596287773A1F670CD_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, RuntimeObject* ___key0, const RuntimeMethod* method) ;
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Object>::get_Item(TKey)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_get_Item_m4AAAECBE902A211BF2126E6AFA280AEF73A3E0D6_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, RuntimeObject* ___key0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::set_Item(TKey,TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_set_Item_m1A840355E8EDAECEA9D0C6F5E51B248FAA449CBD_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, RuntimeObject* ___key0, RuntimeObject* ___value1, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::Add(TKey,TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Add_m93FFFABE8FCE7FA9793F0915E2A8842C7CD0C0C1_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, RuntimeObject* ___key0, RuntimeObject* ___value1, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.Dictionary`2<System.Object,System.Object>::get_Count()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_get_Count_m4DDA9442C238A443489115E22B026AD366851549_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, const RuntimeMethod* method) ;
// TSource System.Linq.Enumerable::ElementAt<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>(System.Collections.Generic.IEnumerable`1<TSource>,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230 Enumerable_ElementAt_TisKeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230_mD78C04A7CBBD94F962638610BF19A5097A7E0ECD_gshared (RuntimeObject* ___source0, int32_t ___index1, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::Remove(TKey)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_Remove_m5C7C45E75D951A75843F3F7AADD56ECD64F6BC86_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, RuntimeObject* ___key0, const RuntimeMethod* method) ;
// System.Void System.Func`2<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>,System.Boolean>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Func_2__ctor_m999A10C26DDF74143AD155662D58037B37AB83F7_gshared (Func_2_t9364FA627D95BAC4CDA1FB83D8857B61F71B1858* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable::Where<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Enumerable_Where_TisKeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230_mB0DE37F992A224BD3B6FCB4EEF30FDDEA7540412_gshared (RuntimeObject* ___source0, Func_2_t9364FA627D95BAC4CDA1FB83D8857B61F71B1858* ___predicate1, const RuntimeMethod* method) ;
// TSource System.Linq.Enumerable::First<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>(System.Collections.Generic.IEnumerable`1<TSource>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230 Enumerable_First_TisKeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230_m4EDB83358F4E30FA0404D7F760F652673F6787F1_gshared (RuntimeObject* ___source0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Clear_mCFB5EA7351D5860D2B91592B91A84CA265A41433_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_mEA5E01B81EB943B7003D87CEC1B6040524F0402C_gshared (Enumerator_tEA93FE2B778D098F590CA168BEFC4CD85D73A6B9* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::TryGetValue(TKey,TValue&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryGetValue_mD15380A4ED7CDEE99EA45881577D26BA9CE1B849_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, RuntimeObject* ___key0, RuntimeObject** ___value1, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m5B32FBC624618211EB461D59CFBB10E987FD1329_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, const RuntimeMethod* method) ;
// T SimpleJSON.JSONLazyCreator::Set<System.Object>(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* JSONLazyCreator_Set_TisRuntimeObject_mE7495CE5BA5EF6F34319B09A94C50EC714342FA6_gshared (JSONLazyCreator_t67A874365EE690A6837C36B8C9214BCBD04C1C00* __this, RuntimeObject* ___aVal0, const RuntimeMethod* method) ;

// System.Void SimpleJSON.JSONNode/<get_Children>d__43::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3Cget_ChildrenU3Ed__43__ctor_m57C5EBE36D1BF2225E71F1B54E80212CCC17A46B (U3Cget_ChildrenU3Ed__43_t5205FD2B072EA35613DB00E54067D4BE6FA9EDBF* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) ;
// System.Void SimpleJSON.JSONNode/<get_DeepChildren>d__45::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3Cget_DeepChildrenU3Ed__45__ctor_m0B6485C3B6916E6C6AE17ED440C882ECF25D0C31 (U3Cget_DeepChildrenU3Ed__45_tB8D5A24DD52825340B1A0A9505719E91C72CE533* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) ;
// System.Void System.Text.StringBuilder::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StringBuilder__ctor_m1D99713357DE05DAFA296633639DB55F8C30587D (StringBuilder_t* __this, const RuntimeMethod* method) ;
// System.Void SimpleJSON.JSONNode/LinqEnumerator::.ctor(SimpleJSON.JSONNode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LinqEnumerator__ctor_m94D1481CEA35FD6B775A03351ACCAE7BECFDA8D3 (LinqEnumerator_t569E03B1C27DEBBF7549F3136EE88777AA5A3AD3* __this, JSONNode_tD29E53D2E1C8F91FF9FEA40F4F3A540857651D3B* ___aNode0, const RuntimeMethod* method) ;
// System.Void SimpleJSON.JSONNode/KeyEnumerator::.ctor(SimpleJSON.JSONNode/Enumerator)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void KeyEnumerator__ctor_mA74E36BD7D862BD0CAA6A40ABA8EA9B8E96BC09B_inline (KeyEnumerator_t75897CC29A0BD54DD4F75DA1922448A65DEC4458* __this, Enumerator_tA1F999D27FB3CE7FB0AC8D9BD4084CBA9E687C1F ___aEnumerator0, const RuntimeMethod* method) ;
// System.Void SimpleJSON.JSONNode/ValueEnumerator::.ctor(SimpleJSON.JSONNode/Enumerator)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ValueEnumerator__ctor_m38A55BFC57441736052296F0B4C582FCFFAD5EF3_inline (ValueEnumerator_tEA9D0EC3AED2B1854EAA656A2ECA719D051F774E* __this, Enumerator_tA1F999D27FB3CE7FB0AC8D9BD4084CBA9E687C1F ___aEnumerator0, const RuntimeMethod* method) ;
// System.Globalization.CultureInfo System.Globalization.CultureInfo::get_InvariantCulture()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* CultureInfo_get_InvariantCulture_m78DAB8CBE8766445310782B6E61FB7A9983AD425 (const RuntimeMethod* method) ;
// System.Boolean System.Double::TryParse(System.String,System.Globalization.NumberStyles,System.IFormatProvider,System.Double&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Double_TryParse_m6038C4DBF1789F1954938FF7F6D3459359CD7718 (String_t* ___s0, int32_t ___style1, RuntimeObject* ___provider2, double* ___result3, const RuntimeMethod* method) ;
// System.String System.Double::ToString(System.IFormatProvider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Double_ToString_m4318830D9F771852FDCF21C14CF9E8ABC7E77357 (double* __this, RuntimeObject* ___provider0, const RuntimeMethod* method) ;
// System.Boolean System.Boolean::TryParse(System.String,System.Boolean&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Boolean_TryParse_mACDFEB12D4D8B25F9AAA56678FEFC0724D49776F (String_t* ___value0, bool* ___result1, const RuntimeMethod* method) ;
// System.Boolean System.String::IsNullOrEmpty(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_IsNullOrEmpty_m54CF0907E7C4F3AFB2E796A13DC751ECBB8DB64A (String_t* ___value0, const RuntimeMethod* method) ;
// System.Boolean System.Int64::TryParse(System.String,System.Globalization.NumberStyles,System.IFormatProvider,System.Int64&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Int64_TryParse_m280F0E3C898A7C3A57F35E3B136D4BFACE12122A (String_t* ___s0, int32_t ___style1, RuntimeObject* ___provider2, int64_t* ___result3, const RuntimeMethod* method) ;
// System.String System.Int64::ToString(System.IFormatProvider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Int64_ToString_m5250B67D3E89B8EB829FB26136E744F1F141B7FD (int64_t* __this, RuntimeObject* ___provider0, const RuntimeMethod* method) ;
// System.Boolean System.UInt64::TryParse(System.String,System.Globalization.NumberStyles,System.IFormatProvider,System.UInt64&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UInt64_TryParse_mFF6D2B2F9EFC729CB42EDC35E105CFADBD254819 (String_t* ___s0, int32_t ___style1, RuntimeObject* ___provider2, uint64_t* ___result3, const RuntimeMethod* method) ;
// System.String System.UInt64::ToString(System.IFormatProvider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* UInt64_ToString_mCDDACF05D6B5B3ECB10B1FEEE58ED3407973E7A7 (uint64_t* __this, RuntimeObject* ___provider0, const RuntimeMethod* method) ;
// System.Void SimpleJSON.JSONString::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JSONString__ctor_mAD5BB3D8B2193F8B64CD62C52F5EF2D51F7A2742 (JSONString_t1A1090FC5863846C80D0BDEF4E63FE23D7AC437D* __this, String_t* ___aData0, const RuntimeMethod* method) ;
// SimpleJSON.JSONNull SimpleJSON.JSONNull::CreateOrGet()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR JSONNull_tEE66558FCE6029B3F1414C062F5E38E0530BD69A* JSONNull_CreateOrGet_m8A46E28FE2DA1E537F51FA071E580ABC21DB5701 (const RuntimeMethod* method) ;
// System.Boolean SimpleJSON.JSONNode::op_Equality(SimpleJSON.JSONNode,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool JSONNode_op_Equality_mA07D467DFB678DC61E7B2A43E87B7D4F6CB5B556 (JSONNode_tD29E53D2E1C8F91FF9FEA40F4F3A540857651D3B* ___a0, RuntimeObject* ___b1, const RuntimeMethod* method) ;
// System.Void SimpleJSON.JSONNumber::.ctor(System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JSONNumber__ctor_mCBCEBE5C94CA62FF6A45B6F37850DBCE5D2648D8 (JSONNumber_tE274A557833A3AE0CDC6C7E563CEAD2A38355688* __this, double ___aData0, const RuntimeMethod* method) ;
// System.Void SimpleJSON.JSONBool::.ctor(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JSONBool__ctor_mE760DC3E6BCC0DDF8900363A7DFB69FB7C08C96B (JSONBool_tD24D984AAB7A652E0241CA0111547A9A9F66B5C9* __this, bool ___aData0, const RuntimeMethod* method) ;
// TValue System.Collections.Generic.KeyValuePair`2<System.String,SimpleJSON.JSONNode>::get_Value()
inline JSONNode_tD29E53D2E1C8F91FF9FEA40F4F3A540857651D3B* KeyValuePair_2_get_Value_mDEC839FB9359C1DC5F359FEB68C324657E5216DD_inline (KeyValuePair_2_tD59618B150F9D38FE8CF312BB48DB72E7ECC4E9C* __this, const RuntimeMethod* method)
{
	return ((  JSONNode_tD29E53D2E1C8F91FF9FEA40F4F3A540857651D3B* (*) (KeyValuePair_2_tD59618B150F9D38FE8CF312BB48DB72E7ECC4E9C*, const RuntimeMethod*))KeyValuePair_2_get_Value_mC6BD8075F9C9DDEF7B4D731E5C38EC19103988E7_gshared_inline)(__this, method);
}
// System.Int32 System.Object::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Object_GetHashCode_m372C5A7AB16CAC13307C11C4256D706CE57E090C (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Text.StringBuilder SimpleJSON.JSONNode::get_EscapeBuilder()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringBuilder_t* JSONNode_get_EscapeBuilder_mA5A3EE698139EFAA36C725E8A3FD3064D4345C86 (const RuntimeMethod* method) ;
// System.Void System.Text.StringBuilder::set_Length(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StringBuilder_set_Length_mE2427BDAEF91C4E4A6C80F3BDF1F6E01DBCC2414 (StringBuilder_t* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Int32 System.Text.StringBuilder::get_Capacity()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t StringBuilder_get_Capacity_m9DBF3B3940BC0BB882CA26F0EDB53896A491AD1E (StringBuilder_t* __this, const RuntimeMethod* method) ;
// System.Int32 System.String::get_Length()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline (String_t* __this, const RuntimeMethod* method) ;
// System.Void System.Text.StringBuilder::set_Capacity(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StringBuilder_set_Capacity_m11BD24481D70C842320ADF7C959CC674D18AF574 (StringBuilder_t* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Char System.String::get_Chars(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppChar String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3 (String_t* __this, int32_t ___index0, const RuntimeMethod* method) ;
// System.Text.StringBuilder System.Text.StringBuilder::Append(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringBuilder_t* StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D (StringBuilder_t* __this, String_t* ___value0, const RuntimeMethod* method) ;
// System.String System.UInt16::ToString(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* UInt16_ToString_m75C61173B6A4DCF2D678D8A03EA713FEE29CC98C (uint16_t* __this, String_t* ___format0, const RuntimeMethod* method) ;
// System.Text.StringBuilder System.Text.StringBuilder::Append(System.Char)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringBuilder_t* StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1 (StringBuilder_t* __this, Il2CppChar ___value0, const RuntimeMethod* method) ;
// SimpleJSON.JSONNode SimpleJSON.JSONNode::op_Implicit(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR JSONNode_tD29E53D2E1C8F91FF9FEA40F4F3A540857651D3B* JSONNode_op_Implicit_m0273CFAA09D60AEFC1AAFE649B2802394FC772E6 (String_t* ___s0, const RuntimeMethod* method) ;
// System.String System.String::ToLower()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_ToLower_m6191ABA3DC514ED47C10BDA23FD0DDCEAE7ACFBD (String_t* __this, const RuntimeMethod* method) ;
// System.Boolean System.String::op_Equality(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0 (String_t* ___a0, String_t* ___b1, const RuntimeMethod* method) ;
// SimpleJSON.JSONNode SimpleJSON.JSONNode::op_Implicit(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR JSONNode_tD29E53D2E1C8F91FF9FEA40F4F3A540857651D3B* JSONNode_op_Implicit_mB28D7F9C01D11BDC03113BBCAA6A209AC7F5BD69 (bool ___b0, const RuntimeMethod* method) ;
// SimpleJSON.JSONNode SimpleJSON.JSONNode::op_Implicit(System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR JSONNode_tD29E53D2E1C8F91FF9FEA40F4F3A540857651D3B* JSONNode_op_Implicit_m88A137DBE16A359B2E1B549953A8E45A8D757D8B (double ___n0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Stack`1<SimpleJSON.JSONNode>::.ctor()
inline void Stack_1__ctor_m732686422E4C72ACBAD8662B06F74B702B1498D2 (Stack_1_tD714EE61707D6A5034DEA764FF7763C53B9946B8* __this, const RuntimeMethod* method)
{
	((  void (*) (Stack_1_tD714EE61707D6A5034DEA764FF7763C53B9946B8*, const RuntimeMethod*))Stack_1__ctor_m70E8EDA96A608CE9BAB7FC8313B233AADA573BD4_gshared)(__this, method);
}
// System.Void SimpleJSON.JSONObject::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JSONObject__ctor_m8AA5877BC05D1BFF9F50D151C0ECF1E3F5C6BE2F (JSONObject_tEA00D19860E34865B3D16312DD382C0901CAB654* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Stack`1<SimpleJSON.JSONNode>::Push(T)
inline void Stack_1_Push_m4C5E04D7BA9297399CBD489C611AAD4840626FE9 (Stack_1_tD714EE61707D6A5034DEA764FF7763C53B9946B8* __this, JSONNode_tD29E53D2E1C8F91FF9FEA40F4F3A540857651D3B* ___item0, const RuntimeMethod* method)
{
	((  void (*) (Stack_1_tD714EE61707D6A5034DEA764FF7763C53B9946B8*, JSONNode_tD29E53D2E1C8F91FF9FEA40F4F3A540857651D3B*, const RuntimeMethod*))Stack_1_Push_m709DD11BC1291A905814182CF9A367DE7399A778_gshared)(__this, ___item0, method);
}
// System.Boolean SimpleJSON.JSONNode::op_Inequality(SimpleJSON.JSONNode,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool JSONNode_op_Inequality_m7050845D0269F25ED099612FACF1BB706EB45D30 (JSONNode_tD29E53D2E1C8F91FF9FEA40F4F3A540857651D3B* ___a0, RuntimeObject* ___b1, const RuntimeMethod* method) ;
// T System.Collections.Generic.Stack`1<SimpleJSON.JSONNode>::Peek()
inline JSONNode_tD29E53D2E1C8F91FF9FEA40F4F3A540857651D3B* Stack_1_Peek_m85C942EF95437C87FCCE1BBD7F166192CE341D5D (Stack_1_tD714EE61707D6A5034DEA764FF7763C53B9946B8* __this, const RuntimeMethod* method)
{
	return ((  JSONNode_tD29E53D2E1C8F91FF9FEA40F4F3A540857651D3B* (*) (Stack_1_tD714EE61707D6A5034DEA764FF7763C53B9946B8*, const RuntimeMethod*))Stack_1_Peek_mF0ECF6A61726B66E6D9B33D8C4DEAA47E586E6E4_gshared)(__this, method);
}
// System.Void SimpleJSON.JSONArray::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JSONArray__ctor_m19BBACE404D8C75AC41AC9CB4702C0943401D071 (JSONArray_tDB47C85E2DDB2CB4A972E4C0685D82E00490CB25* __this, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.Stack`1<SimpleJSON.JSONNode>::get_Count()
inline int32_t Stack_1_get_Count_m37B27F2261D562BBD092A5424B43E4F857CD561F_inline (Stack_1_tD714EE61707D6A5034DEA764FF7763C53B9946B8* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Stack_1_tD714EE61707D6A5034DEA764FF7763C53B9946B8*, const RuntimeMethod*))Stack_1_get_Count_mD08AE71D49787D30DDD9D484BCD323D646744D2E_gshared_inline)(__this, method);
}
// System.Void System.Exception::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F (Exception_t* __this, String_t* ___message0, const RuntimeMethod* method) ;
// T System.Collections.Generic.Stack`1<SimpleJSON.JSONNode>::Pop()
inline JSONNode_tD29E53D2E1C8F91FF9FEA40F4F3A540857651D3B* Stack_1_Pop_m68E783CC815DA7056E83DBD8DEC3C550CD932DFB (Stack_1_tD714EE61707D6A5034DEA764FF7763C53B9946B8* __this, const RuntimeMethod* method)
{
	return ((  JSONNode_tD29E53D2E1C8F91FF9FEA40F4F3A540857651D3B* (*) (Stack_1_tD714EE61707D6A5034DEA764FF7763C53B9946B8*, const RuntimeMethod*))Stack_1_Pop_m2AFF69249659372F07EE25817DBCAFE74E1CF778_gshared)(__this, method);
}
// System.Int32 System.Text.StringBuilder::get_Length()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t StringBuilder_get_Length_mDEA041E7357C68CC3B5885276BB403676DAAE0D8 (StringBuilder_t* __this, const RuntimeMethod* method) ;
// SimpleJSON.JSONNode SimpleJSON.JSONNode::ParseElement(System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR JSONNode_tD29E53D2E1C8F91FF9FEA40F4F3A540857651D3B* JSONNode_ParseElement_mEF537365D834DC136A62FE8C63255D4762B0EB63 (String_t* ___token0, bool ___quoted1, const RuntimeMethod* method) ;
// System.String System.String::Substring(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Substring_mB1D94F47935D22E130FF2C01DBB6A4135FBB76CE (String_t* __this, int32_t ___startIndex0, int32_t ___length1, const RuntimeMethod* method) ;
// System.Int32 System.Int32::Parse(System.String,System.Globalization.NumberStyles)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Int32_Parse_m12C1D8F205085184F8D676DD7A1A39F1495B613A (String_t* ___s0, int32_t ___style1, const RuntimeMethod* method) ;
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Boolean SimpleJSON.JSONNode/Enumerator::get_IsValid()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_get_IsValid_mA6F7A33BCEC4C31BBEBF2D467944A119F2D15075 (Enumerator_tA1F999D27FB3CE7FB0AC8D9BD4084CBA9E687C1F* __this, const RuntimeMethod* method) ;
// System.Void SimpleJSON.JSONNode/Enumerator::.ctor(System.Collections.Generic.List`1/Enumerator<SimpleJSON.JSONNode>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator__ctor_m2D9317706FE33C279EEE64ADBA3A301F86CBD5A4 (Enumerator_tA1F999D27FB3CE7FB0AC8D9BD4084CBA9E687C1F* __this, Enumerator_t81A423E0F04B93279CA04B31DF14EDE9DE3F30AA ___aArrayEnum0, const RuntimeMethod* method) ;
// System.Void SimpleJSON.JSONNode/Enumerator::.ctor(System.Collections.Generic.Dictionary`2/Enumerator<System.String,SimpleJSON.JSONNode>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator__ctor_m1A8A3ED7B68073F1236B0EDBA01A2D96DDB55885 (Enumerator_tA1F999D27FB3CE7FB0AC8D9BD4084CBA9E687C1F* __this, Enumerator_t1B0916EAA662F17AFF7BDA682F6213FDBE55A48F ___aDictEnum0, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1/Enumerator<SimpleJSON.JSONNode>::get_Current()
inline JSONNode_tD29E53D2E1C8F91FF9FEA40F4F3A540857651D3B* Enumerator_get_Current_m44F4D4F7899D0688C1E68E1457EBDBC2D26F91CC_inline (Enumerator_t81A423E0F04B93279CA04B31DF14EDE9DE3F30AA* __this, const RuntimeMethod* method)
{
	return ((  JSONNode_tD29E53D2E1C8F91FF9FEA40F4F3A540857651D3B* (*) (Enumerator_t81A423E0F04B93279CA04B31DF14EDE9DE3F30AA*, const RuntimeMethod*))Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline)(__this, method);
}
// System.Void System.Collections.Generic.KeyValuePair`2<System.String,SimpleJSON.JSONNode>::.ctor(TKey,TValue)
inline void KeyValuePair_2__ctor_mE106F3C8BA6A87DA978B202073346ACDBCECA0D8 (KeyValuePair_2_tD59618B150F9D38FE8CF312BB48DB72E7ECC4E9C* __this, String_t* ___key0, JSONNode_tD29E53D2E1C8F91FF9FEA40F4F3A540857651D3B* ___value1, const RuntimeMethod* method)
{
	((  void (*) (KeyValuePair_2_tD59618B150F9D38FE8CF312BB48DB72E7ECC4E9C*, String_t*, JSONNode_tD29E53D2E1C8F91FF9FEA40F4F3A540857651D3B*, const RuntimeMethod*))KeyValuePair_2__ctor_m0D5C3E0BE2D37252D3F4E0F0EA9A13C9458D4950_gshared)(__this, ___key0, ___value1, method);
}
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator<System.String,SimpleJSON.JSONNode>::get_Current()
inline KeyValuePair_2_tD59618B150F9D38FE8CF312BB48DB72E7ECC4E9C Enumerator_get_Current_m588061B1765C95AD6BDEC8EA8FBE37BDA51EAC5E_inline (Enumerator_t1B0916EAA662F17AFF7BDA682F6213FDBE55A48F* __this, const RuntimeMethod* method)
{
	return ((  KeyValuePair_2_tD59618B150F9D38FE8CF312BB48DB72E7ECC4E9C (*) (Enumerator_t1B0916EAA662F17AFF7BDA682F6213FDBE55A48F*, const RuntimeMethod*))Enumerator_get_Current_mE3475384B761E1C7971D3639BD09117FE8363422_gshared_inline)(__this, method);
}
// System.Collections.Generic.KeyValuePair`2<System.String,SimpleJSON.JSONNode> SimpleJSON.JSONNode/Enumerator::get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR KeyValuePair_2_tD59618B150F9D38FE8CF312BB48DB72E7ECC4E9C Enumerator_get_Current_m1CC1D772B74212E0E3C2F6951EDCC16336A51CE0 (Enumerator_tA1F999D27FB3CE7FB0AC8D9BD4084CBA9E687C1F* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1/Enumerator<SimpleJSON.JSONNode>::MoveNext()
inline bool Enumerator_MoveNext_mB1C31B2A291986F6CD5A79C9F75196088363BF2D (Enumerator_t81A423E0F04B93279CA04B31DF14EDE9DE3F30AA* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t81A423E0F04B93279CA04B31DF14EDE9DE3F30AA*, const RuntimeMethod*))Enumerator_MoveNext_mE921CC8F29FBBDE7CC3209A0ED0D921D58D00BCB_gshared)(__this, method);
}
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<System.String,SimpleJSON.JSONNode>::MoveNext()
inline bool Enumerator_MoveNext_m5BE8E9A6A9A88CC3FF48EA3466675ED35B0CC160 (Enumerator_t1B0916EAA662F17AFF7BDA682F6213FDBE55A48F* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t1B0916EAA662F17AFF7BDA682F6213FDBE55A48F*, const RuntimeMethod*))Enumerator_MoveNext_mCD4950A75FFADD54AF354D48C6C0DB0B5A22A5F4_gshared)(__this, method);
}
// System.Boolean SimpleJSON.JSONNode/Enumerator::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_m5DE5C658C3E070C5C7B9E9026E674EAA0455E708 (Enumerator_tA1F999D27FB3CE7FB0AC8D9BD4084CBA9E687C1F* __this, const RuntimeMethod* method) ;
// System.Void SimpleJSON.JSONNode/ValueEnumerator::.ctor(System.Collections.Generic.List`1/Enumerator<SimpleJSON.JSONNode>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ValueEnumerator__ctor_m634B79D3C83B9484F252CFF884DB6D889260D6D0 (ValueEnumerator_tEA9D0EC3AED2B1854EAA656A2ECA719D051F774E* __this, Enumerator_t81A423E0F04B93279CA04B31DF14EDE9DE3F30AA ___aArrayEnum0, const RuntimeMethod* method) ;
// System.Void SimpleJSON.JSONNode/ValueEnumerator::.ctor(System.Collections.Generic.Dictionary`2/Enumerator<System.String,SimpleJSON.JSONNode>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ValueEnumerator__ctor_m30A64BE0D3632F74D6C7364EC9B987FD3BE873CE (ValueEnumerator_tEA9D0EC3AED2B1854EAA656A2ECA719D051F774E* __this, Enumerator_t1B0916EAA662F17AFF7BDA682F6213FDBE55A48F ___aDictEnum0, const RuntimeMethod* method) ;
// SimpleJSON.JSONNode SimpleJSON.JSONNode/ValueEnumerator::get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR JSONNode_tD29E53D2E1C8F91FF9FEA40F4F3A540857651D3B* ValueEnumerator_get_Current_m8CEC3C8505471BAD8B3154504997960AF5F8CC9F (ValueEnumerator_tEA9D0EC3AED2B1854EAA656A2ECA719D051F774E* __this, const RuntimeMethod* method) ;
// System.Boolean SimpleJSON.JSONNode/ValueEnumerator::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ValueEnumerator_MoveNext_m3F080D79F2AF504B57C1DFB6F2C86C5AC51DB0D1 (ValueEnumerator_tEA9D0EC3AED2B1854EAA656A2ECA719D051F774E* __this, const RuntimeMethod* method) ;
// SimpleJSON.JSONNode/ValueEnumerator SimpleJSON.JSONNode/ValueEnumerator::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ValueEnumerator_tEA9D0EC3AED2B1854EAA656A2ECA719D051F774E ValueEnumerator_GetEnumerator_m40FC11FE7C33A746CD0C2D768394E3690B385E57 (ValueEnumerator_tEA9D0EC3AED2B1854EAA656A2ECA719D051F774E* __this, const RuntimeMethod* method) ;
// System.Void SimpleJSON.JSONNode/KeyEnumerator::.ctor(System.Collections.Generic.List`1/Enumerator<SimpleJSON.JSONNode>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KeyEnumerator__ctor_m02F5FAFA3533AF6B9540816175966B615D03C8D4 (KeyEnumerator_t75897CC29A0BD54DD4F75DA1922448A65DEC4458* __this, Enumerator_t81A423E0F04B93279CA04B31DF14EDE9DE3F30AA ___aArrayEnum0, const RuntimeMethod* method) ;
// System.Void SimpleJSON.JSONNode/KeyEnumerator::.ctor(System.Collections.Generic.Dictionary`2/Enumerator<System.String,SimpleJSON.JSONNode>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KeyEnumerator__ctor_m6CBE0246826ABAB99C37446FAE05F36124F296D9 (KeyEnumerator_t75897CC29A0BD54DD4F75DA1922448A65DEC4458* __this, Enumerator_t1B0916EAA662F17AFF7BDA682F6213FDBE55A48F ___aDictEnum0, const RuntimeMethod* method) ;
// TKey System.Collections.Generic.KeyValuePair`2<System.String,SimpleJSON.JSONNode>::get_Key()
inline String_t* KeyValuePair_2_get_Key_m8460F8B92343281177F3C22FD70CC4BADACA8112_inline (KeyValuePair_2_tD59618B150F9D38FE8CF312BB48DB72E7ECC4E9C* __this, const RuntimeMethod* method)
{
	return ((  String_t* (*) (KeyValuePair_2_tD59618B150F9D38FE8CF312BB48DB72E7ECC4E9C*, const RuntimeMethod*))KeyValuePair_2_get_Key_mBD8EA7557C27E6956F2AF29DA3F7499B2F51A282_gshared_inline)(__this, method);
}
// System.String SimpleJSON.JSONNode/KeyEnumerator::get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* KeyEnumerator_get_Current_mA4BEA3DE642CCF1A11DA3E58FD1A03A52BE4353A (KeyEnumerator_t75897CC29A0BD54DD4F75DA1922448A65DEC4458* __this, const RuntimeMethod* method) ;
// System.Boolean SimpleJSON.JSONNode/KeyEnumerator::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool KeyEnumerator_MoveNext_m55499EF43B3B5A612C199967489F24108E55C0A4 (KeyEnumerator_t75897CC29A0BD54DD4F75DA1922448A65DEC4458* __this, const RuntimeMethod* method) ;
// SimpleJSON.JSONNode/KeyEnumerator SimpleJSON.JSONNode/KeyEnumerator::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR KeyEnumerator_t75897CC29A0BD54DD4F75DA1922448A65DEC4458 KeyEnumerator_GetEnumerator_m5B4D61EDA55C18A752058A1245C4D6AAF31036E0 (KeyEnumerator_t75897CC29A0BD54DD4F75DA1922448A65DEC4458* __this, const RuntimeMethod* method) ;
// System.Int32 System.Environment::get_CurrentManagedThreadId()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Environment_get_CurrentManagedThreadId_mEC09D20ED666BC3277AC9D16B68AA287E5AFE1B2 (const RuntimeMethod* method) ;
// System.Void System.NotSupportedException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.IEnumerator`1<SimpleJSON.JSONNode> SimpleJSON.JSONNode/<get_Children>d__43::System.Collections.Generic.IEnumerable<SimpleJSON.JSONNode>.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3Cget_ChildrenU3Ed__43_System_Collections_Generic_IEnumerableU3CSimpleJSON_JSONNodeU3E_GetEnumerator_mB80DF4460BB1C8E28223E3D9EAA60754DFC32B68 (U3Cget_ChildrenU3Ed__43_t5205FD2B072EA35613DB00E54067D4BE6FA9EDBF* __this, const RuntimeMethod* method) ;
// System.Void SimpleJSON.JSONNode/<get_DeepChildren>d__45::<>m__Finally1()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3Cget_DeepChildrenU3Ed__45_U3CU3Em__Finally1_m0FDB38B46AB417AB10B0E107EA0C1968D6E8F593 (U3Cget_DeepChildrenU3Ed__45_tB8D5A24DD52825340B1A0A9505719E91C72CE533* __this, const RuntimeMethod* method) ;
// System.Void SimpleJSON.JSONNode/<get_DeepChildren>d__45::<>m__Finally2()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3Cget_DeepChildrenU3Ed__45_U3CU3Em__Finally2_mCB1A856D0AB5D410AB35053750B48C44723E5F3F (U3Cget_DeepChildrenU3Ed__45_tB8D5A24DD52825340B1A0A9505719E91C72CE533* __this, const RuntimeMethod* method) ;
// System.Void SimpleJSON.JSONNode/<get_DeepChildren>d__45::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3Cget_DeepChildrenU3Ed__45_System_IDisposable_Dispose_m7D7FF2430933259DB3BF2FF4F1239F737F381FB7 (U3Cget_DeepChildrenU3Ed__45_tB8D5A24DD52825340B1A0A9505719E91C72CE533* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.IEnumerable`1<SimpleJSON.JSONNode> SimpleJSON.JSONNode::get_DeepChildren()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* JSONNode_get_DeepChildren_mD1D3C914FF8BCFA0E5AB2754D4C078419872382C (JSONNode_tD29E53D2E1C8F91FF9FEA40F4F3A540857651D3B* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.IEnumerator`1<SimpleJSON.JSONNode> SimpleJSON.JSONNode/<get_DeepChildren>d__45::System.Collections.Generic.IEnumerable<SimpleJSON.JSONNode>.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3Cget_DeepChildrenU3Ed__45_System_Collections_Generic_IEnumerableU3CSimpleJSON_JSONNodeU3E_GetEnumerator_m70890544EB63E0647333BEAAA1F3C6D40E198C78 (U3Cget_DeepChildrenU3Ed__45_tB8D5A24DD52825340B1A0A9505719E91C72CE533* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<SimpleJSON.JSONNode>::GetEnumerator()
inline Enumerator_t81A423E0F04B93279CA04B31DF14EDE9DE3F30AA List_1_GetEnumerator_m2ABBF46AA2F1090503EFFF7B8ECCD8FB679D0168 (List_1_t82186C961793D19A01F84E3AB82A2146C6F979C4* __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t81A423E0F04B93279CA04B31DF14EDE9DE3F30AA (*) (List_1_t82186C961793D19A01F84E3AB82A2146C6F979C4*, const RuntimeMethod*))List_1_GetEnumerator_mD8294A7FA2BEB1929487127D476F8EC1CDC23BFC_gshared)(__this, method);
}
// System.Int32 System.Collections.Generic.List`1<SimpleJSON.JSONNode>::get_Count()
inline int32_t List_1_get_Count_m6F60F98E27BD1E63972A86B9EE94FAF256598C4A_inline (List_1_t82186C961793D19A01F84E3AB82A2146C6F979C4* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t82186C961793D19A01F84E3AB82A2146C6F979C4*, const RuntimeMethod*))List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline)(__this, method);
}
// System.Void SimpleJSON.JSONLazyCreator::.ctor(SimpleJSON.JSONNode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JSONLazyCreator__ctor_mF05058E0DB09E0C896205345A7E6C44B6DE814D1 (JSONLazyCreator_t67A874365EE690A6837C36B8C9214BCBD04C1C00* __this, JSONNode_tD29E53D2E1C8F91FF9FEA40F4F3A540857651D3B* ___aNode0, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1<SimpleJSON.JSONNode>::get_Item(System.Int32)
inline JSONNode_tD29E53D2E1C8F91FF9FEA40F4F3A540857651D3B* List_1_get_Item_m39B501262E2772265E587E27634C346A3B31C74B (List_1_t82186C961793D19A01F84E3AB82A2146C6F979C4* __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  JSONNode_tD29E53D2E1C8F91FF9FEA40F4F3A540857651D3B* (*) (List_1_t82186C961793D19A01F84E3AB82A2146C6F979C4*, int32_t, const RuntimeMethod*))List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38_gshared)(__this, ___index0, method);
}
// System.Void System.Collections.Generic.List`1<SimpleJSON.JSONNode>::Add(T)
inline void List_1_Add_mAED0B3BF4DD4391B86D3FAECFD32599267E7588B_inline (List_1_t82186C961793D19A01F84E3AB82A2146C6F979C4* __this, JSONNode_tD29E53D2E1C8F91FF9FEA40F4F3A540857651D3B* ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t82186C961793D19A01F84E3AB82A2146C6F979C4*, JSONNode_tD29E53D2E1C8F91FF9FEA40F4F3A540857651D3B*, const RuntimeMethod*))List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline)(__this, ___item0, method);
}
// System.Void System.Collections.Generic.List`1<SimpleJSON.JSONNode>::set_Item(System.Int32,T)
inline void List_1_set_Item_mBE1F797497EC203914E95B1F5DE445D9DB8BCD09 (List_1_t82186C961793D19A01F84E3AB82A2146C6F979C4* __this, int32_t ___index0, JSONNode_tD29E53D2E1C8F91FF9FEA40F4F3A540857651D3B* ___value1, const RuntimeMethod* method)
{
	((  void (*) (List_1_t82186C961793D19A01F84E3AB82A2146C6F979C4*, int32_t, JSONNode_tD29E53D2E1C8F91FF9FEA40F4F3A540857651D3B*, const RuntimeMethod*))List_1_set_Item_m3C58DBC69A321AF2826595584FF3E9F43C07EA56_gshared)(__this, ___index0, ___value1, method);
}
// System.Void System.Collections.Generic.List`1<SimpleJSON.JSONNode>::RemoveAt(System.Int32)
inline void List_1_RemoveAt_mCF3139E1292366D334488D1F33EEDD213F87B66A (List_1_t82186C961793D19A01F84E3AB82A2146C6F979C4* __this, int32_t ___index0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t82186C961793D19A01F84E3AB82A2146C6F979C4*, int32_t, const RuntimeMethod*))List_1_RemoveAt_m54F62297ADEE4D4FDA697F49ED807BF901201B54_gshared)(__this, ___index0, method);
}
// System.Boolean System.Collections.Generic.List`1<SimpleJSON.JSONNode>::Remove(T)
inline bool List_1_Remove_m0448185622BC57438A12CA8BE28F0AB3505C1651 (List_1_t82186C961793D19A01F84E3AB82A2146C6F979C4* __this, JSONNode_tD29E53D2E1C8F91FF9FEA40F4F3A540857651D3B* ___item0, const RuntimeMethod* method)
{
	return ((  bool (*) (List_1_t82186C961793D19A01F84E3AB82A2146C6F979C4*, JSONNode_tD29E53D2E1C8F91FF9FEA40F4F3A540857651D3B*, const RuntimeMethod*))List_1_Remove_m4DFA48F4CEB9169601E75FC28517C5C06EFA5AD7_gshared)(__this, ___item0, method);
}
// System.Void System.Collections.Generic.List`1<SimpleJSON.JSONNode>::Clear()
inline void List_1_Clear_m45B21862637CFCBDDD2387CF514BE027051639CE_inline (List_1_t82186C961793D19A01F84E3AB82A2146C6F979C4* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t82186C961793D19A01F84E3AB82A2146C6F979C4*, const RuntimeMethod*))List_1_Clear_m16C1F2C61FED5955F10EB36BC1CB2DF34B128994_gshared_inline)(__this, method);
}
// System.Int32 System.Collections.Generic.List`1<SimpleJSON.JSONNode>::get_Capacity()
inline int32_t List_1_get_Capacity_m161E64B32DBB42C60E2FBF39B39675DA3B96F533 (List_1_t82186C961793D19A01F84E3AB82A2146C6F979C4* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t82186C961793D19A01F84E3AB82A2146C6F979C4*, const RuntimeMethod*))List_1_get_Capacity_mF05ADA0EC0B9CC71EDE6D06F6A33A50705EEA32D_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<SimpleJSON.JSONNode>::set_Capacity(System.Int32)
inline void List_1_set_Capacity_mB03AF377BCE94EB246C2D3DB5E48F6E32F8DB272 (List_1_t82186C961793D19A01F84E3AB82A2146C6F979C4* __this, int32_t ___value0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t82186C961793D19A01F84E3AB82A2146C6F979C4*, int32_t, const RuntimeMethod*))List_1_set_Capacity_mD826E33A9E5EBC19C714653217071790693E0B95_gshared)(__this, ___value0, method);
}
// System.Void System.Collections.Generic.List`1/Enumerator<SimpleJSON.JSONNode>::Dispose()
inline void Enumerator_Dispose_mE0AEC0BF430B01595C081CE7115C6CBE413D16D0 (Enumerator_t81A423E0F04B93279CA04B31DF14EDE9DE3F30AA* __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t81A423E0F04B93279CA04B31DF14EDE9DE3F30AA*, const RuntimeMethod*))Enumerator_Dispose_mD9DC3E3C3697830A4823047AB29A77DBBB5ED419_gshared)(__this, method);
}
// System.Void SimpleJSON.JSONArray/<get_Children>d__24::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3Cget_ChildrenU3Ed__24__ctor_m23E8A656E0A6CF03A56EE0446B20D9539FD2374E (U3Cget_ChildrenU3Ed__24_t2556BF7E4766181D4B361F546D8C3C38CC3F56F5* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) ;
// System.Text.StringBuilder System.Text.StringBuilder::AppendLine()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringBuilder_t* StringBuilder_AppendLine_m3BC704C4E6A8531027D8C9287D0AB2AA0188AC4E (StringBuilder_t* __this, const RuntimeMethod* method) ;
// System.Text.StringBuilder System.Text.StringBuilder::Append(System.Char,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringBuilder_t* StringBuilder_Append_mE20F6CD28FC8E8C9FD65987DBD32E6087CCE1CF3 (StringBuilder_t* __this, Il2CppChar ___value0, int32_t ___repeatCount1, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<SimpleJSON.JSONNode>::.ctor()
inline void List_1__ctor_m38909E0CD0BF81B3E450AF123312D588B61C29D3 (List_1_t82186C961793D19A01F84E3AB82A2146C6F979C4* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t82186C961793D19A01F84E3AB82A2146C6F979C4*, const RuntimeMethod*))List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared)(__this, method);
}
// System.Void SimpleJSON.JSONNode::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JSONNode__ctor_m4019E01BCFB43E3848591C3E8C97534BA8BC6C49 (JSONNode_tD29E53D2E1C8F91FF9FEA40F4F3A540857651D3B* __this, const RuntimeMethod* method) ;
// System.Void SimpleJSON.JSONArray/<get_Children>d__24::<>m__Finally1()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3Cget_ChildrenU3Ed__24_U3CU3Em__Finally1_mA9CD111E2829513DE869E1736B8AE568A615607C (U3Cget_ChildrenU3Ed__24_t2556BF7E4766181D4B361F546D8C3C38CC3F56F5* __this, const RuntimeMethod* method) ;
// System.Void SimpleJSON.JSONArray/<get_Children>d__24::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3Cget_ChildrenU3Ed__24_System_IDisposable_Dispose_mF75DFD59588C1DBD190A99829AEAEFE5F0F416B5 (U3Cget_ChildrenU3Ed__24_t2556BF7E4766181D4B361F546D8C3C38CC3F56F5* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.IEnumerator`1<SimpleJSON.JSONNode> SimpleJSON.JSONArray/<get_Children>d__24::System.Collections.Generic.IEnumerable<SimpleJSON.JSONNode>.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3Cget_ChildrenU3Ed__24_System_Collections_Generic_IEnumerableU3CSimpleJSON_JSONNodeU3E_GetEnumerator_mB06C6840D137C0D51E363646428B3A3106AA1955 (U3Cget_ChildrenU3Ed__24_t2556BF7E4766181D4B361F546D8C3C38CC3F56F5* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.String,SimpleJSON.JSONNode>::GetEnumerator()
inline Enumerator_t1B0916EAA662F17AFF7BDA682F6213FDBE55A48F Dictionary_2_GetEnumerator_mF7EC8BBAB3CD7EE5642E71681FBDB4A884B05780 (Dictionary_2_t12C70EF76A4D27675DBF4B2F8A83098ABB9DBC33* __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t1B0916EAA662F17AFF7BDA682F6213FDBE55A48F (*) (Dictionary_2_t12C70EF76A4D27675DBF4B2F8A83098ABB9DBC33*, const RuntimeMethod*))Dictionary_2_GetEnumerator_m52AB12790B0B9B46B1DFB1F861C9DBEAB07C1FDA_gshared)(__this, method);
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,SimpleJSON.JSONNode>::ContainsKey(TKey)
inline bool Dictionary_2_ContainsKey_m3DDBDDAE0E6275C571FECD17CB1AF92061D2C693 (Dictionary_2_t12C70EF76A4D27675DBF4B2F8A83098ABB9DBC33* __this, String_t* ___key0, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t12C70EF76A4D27675DBF4B2F8A83098ABB9DBC33*, String_t*, const RuntimeMethod*))Dictionary_2_ContainsKey_m703047C213F7AB55C9DC346596287773A1F670CD_gshared)(__this, ___key0, method);
}
// TValue System.Collections.Generic.Dictionary`2<System.String,SimpleJSON.JSONNode>::get_Item(TKey)
inline JSONNode_tD29E53D2E1C8F91FF9FEA40F4F3A540857651D3B* Dictionary_2_get_Item_mFFD3A96BCF327EA058B849F1973D14E1BB173C8B (Dictionary_2_t12C70EF76A4D27675DBF4B2F8A83098ABB9DBC33* __this, String_t* ___key0, const RuntimeMethod* method)
{
	return ((  JSONNode_tD29E53D2E1C8F91FF9FEA40F4F3A540857651D3B* (*) (Dictionary_2_t12C70EF76A4D27675DBF4B2F8A83098ABB9DBC33*, String_t*, const RuntimeMethod*))Dictionary_2_get_Item_m4AAAECBE902A211BF2126E6AFA280AEF73A3E0D6_gshared)(__this, ___key0, method);
}
// System.Void SimpleJSON.JSONLazyCreator::.ctor(SimpleJSON.JSONNode,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JSONLazyCreator__ctor_mF29014985A3ABE849B34039EAA68BF363508438A (JSONLazyCreator_t67A874365EE690A6837C36B8C9214BCBD04C1C00* __this, JSONNode_tD29E53D2E1C8F91FF9FEA40F4F3A540857651D3B* ___aNode0, String_t* ___aKey1, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.String,SimpleJSON.JSONNode>::set_Item(TKey,TValue)
inline void Dictionary_2_set_Item_m6D37E9D9CD14A99AC08894824FE5F3D82B9CD62A (Dictionary_2_t12C70EF76A4D27675DBF4B2F8A83098ABB9DBC33* __this, String_t* ___key0, JSONNode_tD29E53D2E1C8F91FF9FEA40F4F3A540857651D3B* ___value1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t12C70EF76A4D27675DBF4B2F8A83098ABB9DBC33*, String_t*, JSONNode_tD29E53D2E1C8F91FF9FEA40F4F3A540857651D3B*, const RuntimeMethod*))Dictionary_2_set_Item_m1A840355E8EDAECEA9D0C6F5E51B248FAA449CBD_gshared)(__this, ___key0, ___value1, method);
}
// System.Void System.Collections.Generic.Dictionary`2<System.String,SimpleJSON.JSONNode>::Add(TKey,TValue)
inline void Dictionary_2_Add_m647A845263DF322FB4262AE7C9D120FAC128C8B6 (Dictionary_2_t12C70EF76A4D27675DBF4B2F8A83098ABB9DBC33* __this, String_t* ___key0, JSONNode_tD29E53D2E1C8F91FF9FEA40F4F3A540857651D3B* ___value1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t12C70EF76A4D27675DBF4B2F8A83098ABB9DBC33*, String_t*, JSONNode_tD29E53D2E1C8F91FF9FEA40F4F3A540857651D3B*, const RuntimeMethod*))Dictionary_2_Add_m93FFFABE8FCE7FA9793F0915E2A8842C7CD0C0C1_gshared)(__this, ___key0, ___value1, method);
}
// System.Int32 System.Collections.Generic.Dictionary`2<System.String,SimpleJSON.JSONNode>::get_Count()
inline int32_t Dictionary_2_get_Count_m7F2AE40DF045D2505F47E6416C1E6EA48C765C17 (Dictionary_2_t12C70EF76A4D27675DBF4B2F8A83098ABB9DBC33* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Dictionary_2_t12C70EF76A4D27675DBF4B2F8A83098ABB9DBC33*, const RuntimeMethod*))Dictionary_2_get_Count_m4DDA9442C238A443489115E22B026AD366851549_gshared)(__this, method);
}
// TSource System.Linq.Enumerable::ElementAt<System.Collections.Generic.KeyValuePair`2<System.String,SimpleJSON.JSONNode>>(System.Collections.Generic.IEnumerable`1<TSource>,System.Int32)
inline KeyValuePair_2_tD59618B150F9D38FE8CF312BB48DB72E7ECC4E9C Enumerable_ElementAt_TisKeyValuePair_2_tD59618B150F9D38FE8CF312BB48DB72E7ECC4E9C_mFDA649241C748243A89276A017893C462B2A2114 (RuntimeObject* ___source0, int32_t ___index1, const RuntimeMethod* method)
{
	return ((  KeyValuePair_2_tD59618B150F9D38FE8CF312BB48DB72E7ECC4E9C (*) (RuntimeObject*, int32_t, const RuntimeMethod*))Enumerable_ElementAt_TisKeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230_mD78C04A7CBBD94F962638610BF19A5097A7E0ECD_gshared)(___source0, ___index1, method);
}
// System.Guid System.Guid::NewGuid()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Guid_t Guid_NewGuid_m1827D92D71326C3F3C263F057F6E90F907617903 (const RuntimeMethod* method) ;
// System.String System.Guid::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Guid_ToString_m2BFFD5FA726E03FA707AAFCCF065896C46D5290C (Guid_t* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,SimpleJSON.JSONNode>::Remove(TKey)
inline bool Dictionary_2_Remove_m76681FCFCB5A12781F4025FC31BE3FF70F1C6470 (Dictionary_2_t12C70EF76A4D27675DBF4B2F8A83098ABB9DBC33* __this, String_t* ___key0, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t12C70EF76A4D27675DBF4B2F8A83098ABB9DBC33*, String_t*, const RuntimeMethod*))Dictionary_2_Remove_m5C7C45E75D951A75843F3F7AADD56ECD64F6BC86_gshared)(__this, ___key0, method);
}
// System.Void SimpleJSON.JSONObject/<>c__DisplayClass21_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass21_0__ctor_mBABFF200A657B735639C010A37AE0D6AB84664C8 (U3CU3Ec__DisplayClass21_0_t310B9E292689B6B4824DD285356EF9A1CDA716DD* __this, const RuntimeMethod* method) ;
// System.Void System.Func`2<System.Collections.Generic.KeyValuePair`2<System.String,SimpleJSON.JSONNode>,System.Boolean>::.ctor(System.Object,System.IntPtr)
inline void Func_2__ctor_m6FE32D0006D2D3129CDC46B55635C4D205C3FDBF (Func_2_t8A99FF3F64B7CF9CFC4EE2DF270BD1703B76DC50* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Func_2_t8A99FF3F64B7CF9CFC4EE2DF270BD1703B76DC50*, RuntimeObject*, intptr_t, const RuntimeMethod*))Func_2__ctor_m999A10C26DDF74143AD155662D58037B37AB83F7_gshared)(__this, ___object0, ___method1, method);
}
// System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable::Where<System.Collections.Generic.KeyValuePair`2<System.String,SimpleJSON.JSONNode>>(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>)
inline RuntimeObject* Enumerable_Where_TisKeyValuePair_2_tD59618B150F9D38FE8CF312BB48DB72E7ECC4E9C_mB3AB8B8230FB048784669A99491FFED031B28398 (RuntimeObject* ___source0, Func_2_t8A99FF3F64B7CF9CFC4EE2DF270BD1703B76DC50* ___predicate1, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (RuntimeObject*, Func_2_t8A99FF3F64B7CF9CFC4EE2DF270BD1703B76DC50*, const RuntimeMethod*))Enumerable_Where_TisKeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230_mB0DE37F992A224BD3B6FCB4EEF30FDDEA7540412_gshared)(___source0, ___predicate1, method);
}
// TSource System.Linq.Enumerable::First<System.Collections.Generic.KeyValuePair`2<System.String,SimpleJSON.JSONNode>>(System.Collections.Generic.IEnumerable`1<TSource>)
inline KeyValuePair_2_tD59618B150F9D38FE8CF312BB48DB72E7ECC4E9C Enumerable_First_TisKeyValuePair_2_tD59618B150F9D38FE8CF312BB48DB72E7ECC4E9C_m9971C479DDD6CA68E54EDF39EC02A748B937BAC2 (RuntimeObject* ___source0, const RuntimeMethod* method)
{
	return ((  KeyValuePair_2_tD59618B150F9D38FE8CF312BB48DB72E7ECC4E9C (*) (RuntimeObject*, const RuntimeMethod*))Enumerable_First_TisKeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230_m4EDB83358F4E30FA0404D7F760F652673F6787F1_gshared)(___source0, method);
}
// System.Void System.Collections.Generic.Dictionary`2<System.String,SimpleJSON.JSONNode>::Clear()
inline void Dictionary_2_Clear_mB30427E3A804F7FB320A4D8929972DF27FCF9DCA (Dictionary_2_t12C70EF76A4D27675DBF4B2F8A83098ABB9DBC33* __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t12C70EF76A4D27675DBF4B2F8A83098ABB9DBC33*, const RuntimeMethod*))Dictionary_2_Clear_mCFB5EA7351D5860D2B91592B91A84CA265A41433_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.String,SimpleJSON.JSONNode>::Dispose()
inline void Enumerator_Dispose_m844831FF3F93A9E3EEDFFF0186465A21BA38BE18 (Enumerator_t1B0916EAA662F17AFF7BDA682F6213FDBE55A48F* __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t1B0916EAA662F17AFF7BDA682F6213FDBE55A48F*, const RuntimeMethod*))Enumerator_Dispose_mEA5E01B81EB943B7003D87CEC1B6040524F0402C_gshared)(__this, method);
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,SimpleJSON.JSONNode>::TryGetValue(TKey,TValue&)
inline bool Dictionary_2_TryGetValue_m1FF64870279BEF55007411D7CB05F5DD991396BC (Dictionary_2_t12C70EF76A4D27675DBF4B2F8A83098ABB9DBC33* __this, String_t* ___key0, JSONNode_tD29E53D2E1C8F91FF9FEA40F4F3A540857651D3B** ___value1, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t12C70EF76A4D27675DBF4B2F8A83098ABB9DBC33*, String_t*, JSONNode_tD29E53D2E1C8F91FF9FEA40F4F3A540857651D3B**, const RuntimeMethod*))Dictionary_2_TryGetValue_mD15380A4ED7CDEE99EA45881577D26BA9CE1B849_gshared)(__this, ___key0, ___value1, method);
}
// System.Void SimpleJSON.JSONObject/<get_Children>d__27::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3Cget_ChildrenU3Ed__27__ctor_m9CDCA1C141BC8A71F035E6D4B5D029AD75759040 (U3Cget_ChildrenU3Ed__27_t89EE8560565615C4B0D27D10FF05ED6CB2C81A7A* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) ;
// System.String SimpleJSON.JSONNode::Escape(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* JSONNode_Escape_m0ED072BC7DE866EC611694D65B6AFCF9E9E3A34E (String_t* ___aText0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.String,SimpleJSON.JSONNode>::.ctor()
inline void Dictionary_2__ctor_m3039782D3F8D2BBEBABB511BC6FA48187E22008A (Dictionary_2_t12C70EF76A4D27675DBF4B2F8A83098ABB9DBC33* __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t12C70EF76A4D27675DBF4B2F8A83098ABB9DBC33*, const RuntimeMethod*))Dictionary_2__ctor_m5B32FBC624618211EB461D59CFBB10E987FD1329_gshared)(__this, method);
}
// System.Void SimpleJSON.JSONObject/<get_Children>d__27::<>m__Finally1()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3Cget_ChildrenU3Ed__27_U3CU3Em__Finally1_m497320D48364432214EF5E922912F9EFC8729D3E (U3Cget_ChildrenU3Ed__27_t89EE8560565615C4B0D27D10FF05ED6CB2C81A7A* __this, const RuntimeMethod* method) ;
// System.Void SimpleJSON.JSONObject/<get_Children>d__27::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3Cget_ChildrenU3Ed__27_System_IDisposable_Dispose_mDD77C52E23B4B21D48AE74368F86BA3C31F2EF44 (U3Cget_ChildrenU3Ed__27_t89EE8560565615C4B0D27D10FF05ED6CB2C81A7A* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.IEnumerator`1<SimpleJSON.JSONNode> SimpleJSON.JSONObject/<get_Children>d__27::System.Collections.Generic.IEnumerable<SimpleJSON.JSONNode>.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3Cget_ChildrenU3Ed__27_System_Collections_Generic_IEnumerableU3CSimpleJSON_JSONNodeU3E_GetEnumerator_m79E89DCB9A525C6B9D5861F40DD5258E72DD16D0 (U3Cget_ChildrenU3Ed__27_t89EE8560565615C4B0D27D10FF05ED6CB2C81A7A* __this, const RuntimeMethod* method) ;
// System.Boolean SimpleJSON.JSONNode::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool JSONNode_Equals_m514369EEC7080C896FA83D32F67980881C4B4823 (JSONNode_tD29E53D2E1C8F91FF9FEA40F4F3A540857651D3B* __this, RuntimeObject* ___obj0, const RuntimeMethod* method) ;
// System.Boolean SimpleJSON.JSONNumber::IsNumeric(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool JSONNumber_IsNumeric_m20828DB244E4533C5712A379B65138FF2EF0384F (RuntimeObject* ___value0, const RuntimeMethod* method) ;
// System.Double System.Convert::ToDouble(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double Convert_ToDouble_mE64ED1A9412EA3B16E4C7F1C74655F53DE71C71A (RuntimeObject* ___value0, const RuntimeMethod* method) ;
// System.Int32 System.Double::GetHashCode()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Double_GetHashCode_m3761FC05AD24D97A68FA1E8412A9454DF3880E32_inline (double* __this, const RuntimeMethod* method) ;
// System.String System.Boolean::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Boolean_ToString_m6646C8026B1DF381A1EE8CD13549175E9703CC63 (bool* __this, const RuntimeMethod* method) ;
// System.Int32 System.Boolean::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Boolean_GetHashCode_mEDB6904770C962BAF4510E5D24F08083C33900E3 (bool* __this, const RuntimeMethod* method) ;
// System.Void SimpleJSON.JSONNull::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JSONNull__ctor_mC77B5B6A93E1F03687401D5CCE7C748443A4FB3E (JSONNull_tEE66558FCE6029B3F1414C062F5E38E0530BD69A* __this, const RuntimeMethod* method) ;
// T SimpleJSON.JSONLazyCreator::Set<SimpleJSON.JSONArray>(T)
inline JSONArray_tDB47C85E2DDB2CB4A972E4C0685D82E00490CB25* JSONLazyCreator_Set_TisJSONArray_tDB47C85E2DDB2CB4A972E4C0685D82E00490CB25_m7D3A237E093665EDAA099018EAD7FCF9FB769A9B (JSONLazyCreator_t67A874365EE690A6837C36B8C9214BCBD04C1C00* __this, JSONArray_tDB47C85E2DDB2CB4A972E4C0685D82E00490CB25* ___aVal0, const RuntimeMethod* method)
{
	return ((  JSONArray_tDB47C85E2DDB2CB4A972E4C0685D82E00490CB25* (*) (JSONLazyCreator_t67A874365EE690A6837C36B8C9214BCBD04C1C00*, JSONArray_tDB47C85E2DDB2CB4A972E4C0685D82E00490CB25*, const RuntimeMethod*))JSONLazyCreator_Set_TisRuntimeObject_mE7495CE5BA5EF6F34319B09A94C50EC714342FA6_gshared)(__this, ___aVal0, method);
}
// T SimpleJSON.JSONLazyCreator::Set<SimpleJSON.JSONObject>(T)
inline JSONObject_tEA00D19860E34865B3D16312DD382C0901CAB654* JSONLazyCreator_Set_TisJSONObject_tEA00D19860E34865B3D16312DD382C0901CAB654_mF8CEE128BB1DCFC3C42A7158743827420DCDFB91 (JSONLazyCreator_t67A874365EE690A6837C36B8C9214BCBD04C1C00* __this, JSONObject_tEA00D19860E34865B3D16312DD382C0901CAB654* ___aVal0, const RuntimeMethod* method)
{
	return ((  JSONObject_tEA00D19860E34865B3D16312DD382C0901CAB654* (*) (JSONLazyCreator_t67A874365EE690A6837C36B8C9214BCBD04C1C00*, JSONObject_tEA00D19860E34865B3D16312DD382C0901CAB654*, const RuntimeMethod*))JSONLazyCreator_Set_TisRuntimeObject_mE7495CE5BA5EF6F34319B09A94C50EC714342FA6_gshared)(__this, ___aVal0, method);
}
// System.Boolean SimpleJSON.JSONLazyCreator::op_Equality(SimpleJSON.JSONLazyCreator,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool JSONLazyCreator_op_Equality_m720AC8675F0E1B18C334B576B9125906D1DB672B (JSONLazyCreator_t67A874365EE690A6837C36B8C9214BCBD04C1C00* ___a0, RuntimeObject* ___b1, const RuntimeMethod* method) ;
// T SimpleJSON.JSONLazyCreator::Set<SimpleJSON.JSONNumber>(T)
inline JSONNumber_tE274A557833A3AE0CDC6C7E563CEAD2A38355688* JSONLazyCreator_Set_TisJSONNumber_tE274A557833A3AE0CDC6C7E563CEAD2A38355688_mB38332B5E61CF823BFA62D3DC8FC75C398775866 (JSONLazyCreator_t67A874365EE690A6837C36B8C9214BCBD04C1C00* __this, JSONNumber_tE274A557833A3AE0CDC6C7E563CEAD2A38355688* ___aVal0, const RuntimeMethod* method)
{
	return ((  JSONNumber_tE274A557833A3AE0CDC6C7E563CEAD2A38355688* (*) (JSONLazyCreator_t67A874365EE690A6837C36B8C9214BCBD04C1C00*, JSONNumber_tE274A557833A3AE0CDC6C7E563CEAD2A38355688*, const RuntimeMethod*))JSONLazyCreator_Set_TisRuntimeObject_mE7495CE5BA5EF6F34319B09A94C50EC714342FA6_gshared)(__this, ___aVal0, method);
}
// T SimpleJSON.JSONLazyCreator::Set<SimpleJSON.JSONString>(T)
inline JSONString_t1A1090FC5863846C80D0BDEF4E63FE23D7AC437D* JSONLazyCreator_Set_TisJSONString_t1A1090FC5863846C80D0BDEF4E63FE23D7AC437D_m99A1733E07636B9540AF6CA596217D6F8480F96A (JSONLazyCreator_t67A874365EE690A6837C36B8C9214BCBD04C1C00* __this, JSONString_t1A1090FC5863846C80D0BDEF4E63FE23D7AC437D* ___aVal0, const RuntimeMethod* method)
{
	return ((  JSONString_t1A1090FC5863846C80D0BDEF4E63FE23D7AC437D* (*) (JSONLazyCreator_t67A874365EE690A6837C36B8C9214BCBD04C1C00*, JSONString_t1A1090FC5863846C80D0BDEF4E63FE23D7AC437D*, const RuntimeMethod*))JSONLazyCreator_Set_TisRuntimeObject_mE7495CE5BA5EF6F34319B09A94C50EC714342FA6_gshared)(__this, ___aVal0, method);
}
// T SimpleJSON.JSONLazyCreator::Set<SimpleJSON.JSONBool>(T)
inline JSONBool_tD24D984AAB7A652E0241CA0111547A9A9F66B5C9* JSONLazyCreator_Set_TisJSONBool_tD24D984AAB7A652E0241CA0111547A9A9F66B5C9_m4F55FE6F4423B1007E8D5802037174BE6A61D4C8 (JSONLazyCreator_t67A874365EE690A6837C36B8C9214BCBD04C1C00* __this, JSONBool_tD24D984AAB7A652E0241CA0111547A9A9F66B5C9* ___aVal0, const RuntimeMethod* method)
{
	return ((  JSONBool_tD24D984AAB7A652E0241CA0111547A9A9F66B5C9* (*) (JSONLazyCreator_t67A874365EE690A6837C36B8C9214BCBD04C1C00*, JSONBool_tD24D984AAB7A652E0241CA0111547A9A9F66B5C9*, const RuntimeMethod*))JSONLazyCreator_Set_TisRuntimeObject_mE7495CE5BA5EF6F34319B09A94C50EC714342FA6_gshared)(__this, ___aVal0, method);
}
// SimpleJSON.JSONNode SimpleJSON.JSONNode::Parse(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR JSONNode_tD29E53D2E1C8F91FF9FEA40F4F3A540857651D3B* JSONNode_Parse_mD88F392BA303CB1BE616FA5B44E6ED8D7C2E7432 (String_t* ___aJSON0, const RuntimeMethod* method) ;
// System.Int64 System.BitConverter::DoubleToInt64Bits(System.Double)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int64_t BitConverter_DoubleToInt64Bits_m45D911F884F3B09BF39C02044EDC9BDA8084C80B_inline (double ___value0, const RuntimeMethod* method) ;
// System.Void System.Array::Clear(System.Array,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Clear_m48B57EC27CADC3463CA98A33373D557DA587FF1B (RuntimeArray* ___array0, int32_t ___index1, int32_t ___length2, const RuntimeMethod* method) ;
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
// SimpleJSON.JSONNode SimpleJSON.JSONNode::get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR JSONNode_tD29E53D2E1C8F91FF9FEA40F4F3A540857651D3B* JSONNode_get_Item_m7C387567D3EB881EF7B8F63BAA55EB6F8D3FD585 (JSONNode_tD29E53D2E1C8F91FF9FEA40F4F3A540857651D3B* __this, int32_t ___aIndex0, const RuntimeMethod* method) 
{
	{
		// public virtual JSONNode this[int aIndex] { get { return null; } set { } }
		return (JSONNode_tD29E53D2E1C8F91FF9FEA40F4F3A540857651D3B*)NULL;
	}
}
// System.Void SimpleJSON.JSONNode::set_Item(System.Int32,SimpleJSON.JSONNode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JSONNode_set_Item_m4A6549C822E571FBAFE56CA09FFA9CC70153C89E (JSONNode_tD29E53D2E1C8F91FF9FEA40F4F3A540857651D3B* __this, int32_t ___aIndex0, JSONNode_tD29E53D2E1C8F91FF9FEA40F4F3A540857651D3B* ___value1, const RuntimeMethod* method) 
{
	{
		// public virtual JSONNode this[int aIndex] { get { return null; } set { } }
		return;
	}
}
// SimpleJSON.JSONNode SimpleJSON.JSONNode::get_Item(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR JSONNode_tD29E53D2E1C8F91FF9FEA40F4F3A540857651D3B* JSONNode_get_Item_m767225424FD48588B83B1C72FE76C2718A3C0417 (JSONNode_tD29E53D2E1C8F91FF9FEA40F4F3A540857651D3B* __this, String_t* ___aKey0, const RuntimeMethod* method) 
{
	{
		// public virtual JSONNode this[string aKey] { get { return null; } set { } }
		return (JSONNode_tD29E53D2E1C8F91FF9FEA40F4F3A540857651D3B*)NULL;
	}
}
// System.Void SimpleJSON.JSONNode::set_Item(System.String,SimpleJSON.JSONNode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JSONNode_set_Item_mF5D2BEFB370402701AE98F5034B69F139D289809 (JSONNode_tD29E53D2E1C8F91FF9FEA40F4F3A540857651D3B* __this, String_t* ___aKey0, JSONNode_tD29E53D2E1C8F91FF9FEA40F4F3A540857651D3B* ___value1, const RuntimeMethod* method) 
{
	{
		// public virtual JSONNode this[string aKey] { get { return null; } set { } }
		return;
	}
}
// System.String SimpleJSON.JSONNode::get_Value()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* JSONNode_get_Value_mC3C078F44CF3F52EE2A2EB2DFF93F4BFB3E010BF (JSONNode_tD29E53D2E1C8F91FF9FEA40F4F3A540857651D3B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public virtual string Value { get { return ""; } set { } }
		return _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
	}
}
// System.Void SimpleJSON.JSONNode::set_Value(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JSONNode_set_Value_m195029E6C361420D07109F31545A418DEE7948AB (JSONNode_tD29E53D2E1C8F91FF9FEA40F4F3A540857651D3B* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		// public virtual string Value { get { return ""; } set { } }
		return;
	}
}
// System.Int32 SimpleJSON.JSONNode::get_Count()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t JSONNode_get_Count_mBCEFCB9EDB2A08B59AA096A4741BF701D5D6E542 (JSONNode_tD29E53D2E1C8F91FF9FEA40F4F3A540857651D3B* __this, const RuntimeMethod* method) 
{
	{
		// public virtual int Count { get { return 0; } }
		return 0;
	}
}
// System.Boolean SimpleJSON.JSONNode::get_IsNumber()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool JSONNode_get_IsNumber_m6E5747109DC13D228107F25EBC808D0FEBA6E19E (JSONNode_tD29E53D2E1C8F91FF9FEA40F4F3A540857651D3B* __this, const RuntimeMethod* method) 
{
	{
		// public virtual bool IsNumber { get { return false; } }
		return (bool)0;
	}
}
// System.Boolean SimpleJSON.JSONNode::get_IsString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool JSONNode_get_IsString_m233B0559544992C0892100D75CE6545514016C75 (JSONNode_tD29E53D2E1C8F91FF9FEA40F4F3A540857651D3B* __this, const RuntimeMethod* method) 
{
	{
		// public virtual bool IsString { get { return false; } }
		return (bool)0;
	}
}
// System.Boolean SimpleJSON.JSONNode::get_IsBoolean()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool JSONNode_get_IsBoolean_m3F51C1C2BCA149E60753A683736AA0BAD026D140 (JSONNode_tD29E53D2E1C8F91FF9FEA40F4F3A540857651D3B* __this, const RuntimeMethod* method) 
{
	{
		// public virtual bool IsBoolean { get { return false; } }
		return (bool)0;
	}
}
// System.Boolean SimpleJSON.JSONNode::get_IsNull()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool JSONNode_get_IsNull_mA5D359048C5CCFBF10BBB53F60A5195EFF85F3AE (JSONNode_tD29E53D2E1C8F91FF9FEA40F4F3A540857651D3B* __this, const RuntimeMethod* method) 
{
	{
		// public virtual bool IsNull { get { return false; } }
		return (bool)0;
	}
}
// System.Boolean SimpleJSON.JSONNode::get_IsArray()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool JSONNode_get_IsArray_m177B081186B21785D148C650A97957CEAF9F1C8B (JSONNode_tD29E53D2E1C8F91FF9FEA40F4F3A540857651D3B* __this, const RuntimeMethod* method) 
{
	{
		// public virtual bool IsArray { get { return false; } }
		return (bool)0;
	}
}
// System.Boolean SimpleJSON.JSONNode::get_IsObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool JSONNode_get_IsObject_m7E9992FA2AA3A50324720D56234585187834626F (JSONNode_tD29E53D2E1C8F91FF9FEA40F4F3A540857651D3B* __this, const RuntimeMethod* method) 
{
	{
		// public virtual bool IsObject { get { return false; } }
		return (bool)0;
	}
}
// System.Boolean SimpleJSON.JSONNode::get_Inline()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool JSONNode_get_Inline_mCA653ADD7BEF974EFE63984BA9B951D3EF62382A (JSONNode_tD29E53D2E1C8F91FF9FEA40F4F3A540857651D3B* __this, const RuntimeMethod* method) 
{
	{
		// public virtual bool Inline { get { return false; } set { } }
		return (bool)0;
	}
}
// System.Void SimpleJSON.JSONNode::set_Inline(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JSONNode_set_Inline_m8FD5B0B7A884C877F498E99B615FEBC35476BD9F (JSONNode_tD29E53D2E1C8F91FF9FEA40F4F3A540857651D3B* __this, bool ___value0, const RuntimeMethod* method) 
{
	{
		// public virtual bool Inline { get { return false; } set { } }
		return;
	}
}
// System.Void SimpleJSON.JSONNode::Add(System.String,SimpleJSON.JSONNode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JSONNode_Add_mCDED462C02B740D60B3B5CED37897C6C9FE62000 (JSONNode_tD29E53D2E1C8F91FF9FEA40F4F3A540857651D3B* __this, String_t* ___aKey0, JSONNode_tD29E53D2E1C8F91FF9FEA40F4F3A540857651D3B* ___aItem1, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void SimpleJSON.JSONNode::Add(SimpleJSON.JSONNode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JSONNode_Add_mE451AD072D206FDE5BD2E48477273A074B142F08 (JSONNode_tD29E53D2E1C8F91FF9FEA40F4F3A540857651D3B* __this, JSONNode_tD29E53D2E1C8F91FF9FEA40F4F3A540857651D3B* ___aItem0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Add("", aItem);
		JSONNode_tD29E53D2E1C8F91FF9FEA40F4F3A540857651D3B* L_0 = ___aItem0;
		VirtualActionInvoker2< String_t*, JSONNode_tD29E53D2E1C8F91FF9FEA40F4F3A540857651D3B* >::Invoke(20 /* System.Void SimpleJSON.JSONNode::Add(System.String,SimpleJSON.JSONNode) */, __this, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709, L_0);
		// }
		return;
	}
}
// SimpleJSON.JSONNode SimpleJSON.JSONNode::Remove(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR JSONNode_tD29E53D2E1C8F91FF9FEA40F4F3A540857651D3B* JSONNode_Remove_m4074456D5E376FF293D91109B3C13692BE518DFF (JSONNode_tD29E53D2E1C8F91FF9FEA40F4F3A540857651D3B* __this, String_t* ___aKey0, const RuntimeMethod* method) 
{
	{
		// return null;
		return (JSONNode_tD29E53D2E1C8F91FF9FEA40F4F3A540857651D3B*)NULL;
	}
}
// SimpleJSON.JSONNode SimpleJSON.JSONNode::Remove(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR JSONNode_tD29E53D2E1C8F91FF9FEA40F4F3A540857651D3B* JSONNode_Remove_m358D47B33FA872F41D4D3DB502A1D03EF2BDB1D1 (JSONNode_tD29E53D2E1C8F91FF9FEA40F4F3A540857651D3B* __this, int32_t ___aIndex0, const RuntimeMethod* method) 
{
	{
		// return null;
		return (JSONNode_tD29E53D2E1C8F91FF9FEA40F4F3A540857651D3B*)NULL;
	}
}
// SimpleJSON.JSONNode SimpleJSON.JSONNode::Remove(SimpleJSON.JSONNode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR JSONNode_tD29E53D2E1C8F91FF9FEA40F4F3A540857651D3B* JSONNode_Remove_mB8E8B67B5B4F7EC526909B009308C7E67A6E8CEE (JSONNode_tD29E53D2E1C8F91FF9FEA40F4F3A540857651D3B* __this, JSONNode_tD29E53D2E1C8F91FF9FEA40F4F3A540857651D3B* ___aNode0, const RuntimeMethod* method) 
{
	{
		// return aNode;
		JSONNode_tD29E53D2E1C8F91FF9FEA40F4F3A540857651D3B* L_0 = ___aNode0;
		return L_0;
	}
}
// System.Void SimpleJSON.JSONNode::Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JSONNode_Clear_mADA562F3826A272F822D822391B35720822AC964 (JSONNode_tD29E53D2E1C8F91FF9FEA40F4F3A540857651D3B* __this, const RuntimeMethod* method) 
{
	{
		// public virtual void Clear() { }
		return;
	}
}
// SimpleJSON.JSONNode SimpleJSON.JSONNode::Clone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR JSONNode_tD29E53D2E1C8F91FF9FEA40F4F3A540857651D3B* JSONNode_Clone_mF979774ED340D70B974BF00FA67219E1877DD038 (JSONNode_tD29E53D2E1C8F91FF9FEA40F4F3A540857651D3B* __this, const RuntimeMethod* method) 
{
	{
		// return null;
		return (JSONNode_tD29E53D2E1C8F91FF9FEA40F4F3A540857651D3B*)NULL;
	}
}
// System.Collections.Generic.IEnumerable`1<SimpleJSON.JSONNode> SimpleJSON.JSONNode::get_Children()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* JSONNode_get_Children_mAA4A4646D93C1298E0FA25D7B48B0030898D8C3E (JSONNode_tD29E53D2E1C8F91FF9FEA40F4F3A540857651D3B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3Cget_ChildrenU3Ed__43_t5205FD2B072EA35613DB00E54067D4BE6FA9EDBF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3Cget_ChildrenU3Ed__43_t5205FD2B072EA35613DB00E54067D4BE6FA9EDBF* L_0 = (U3Cget_ChildrenU3Ed__43_t5205FD2B072EA35613DB00E54067D4BE6FA9EDBF*)il2cpp_codegen_object_new(U3Cget_ChildrenU3Ed__43_t5205FD2B072EA35613DB00E54067D4BE6FA9EDBF_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3Cget_ChildrenU3Ed__43__ctor_m57C5EBE36D1BF2225E71F1B54E80212CCC17A46B(L_0, ((int32_t)-2), NULL);
		return L_0;
	}
}
// System.Collections.Generic.IEnumerable`1<SimpleJSON.JSONNode> SimpleJSON.JSONNode::get_DeepChildren()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* JSONNode_get_DeepChildren_mD1D3C914FF8BCFA0E5AB2754D4C078419872382C (JSONNode_tD29E53D2E1C8F91FF9FEA40F4F3A540857651D3B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3Cget_DeepChildrenU3Ed__45_tB8D5A24DD52825340B1A0A9505719E91C72CE533_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3Cget_DeepChildrenU3Ed__45_tB8D5A24DD52825340B1A0A9505719E91C72CE533* L_0 = (U3Cget_DeepChildrenU3Ed__45_tB8D5A24DD52825340B1A0A9505719E91C72CE533*)il2cpp_codegen_object_new(U3Cget_DeepChildrenU3Ed__45_tB8D5A24DD52825340B1A0A9505719E91C72CE533_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3Cget_DeepChildrenU3Ed__45__ctor_m0B6485C3B6916E6C6AE17ED440C882ECF25D0C31(L_0, ((int32_t)-2), NULL);
		U3Cget_DeepChildrenU3Ed__45_tB8D5A24DD52825340B1A0A9505719E91C72CE533* L_1 = L_0;
		NullCheck(L_1);
		L_1->___U3CU3E4__this_3 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_3), (void*)__this);
		return L_1;
	}
}
// System.Boolean SimpleJSON.JSONNode::HasKey(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool JSONNode_HasKey_m5F2AB78103836F649E48766A260AB9E910E1DD5C (JSONNode_tD29E53D2E1C8F91FF9FEA40F4F3A540857651D3B* __this, String_t* ___aKey0, const RuntimeMethod* method) 
{
	{
		// return false;
		return (bool)0;
	}
}
// SimpleJSON.JSONNode SimpleJSON.JSONNode::GetValueOrDefault(System.String,SimpleJSON.JSONNode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR JSONNode_tD29E53D2E1C8F91FF9FEA40F4F3A540857651D3B* JSONNode_GetValueOrDefault_m52DA0960921915D41337DC89C18AE254098A90D0 (JSONNode_tD29E53D2E1C8F91FF9FEA40F4F3A540857651D3B* __this, String_t* ___aKey0, JSONNode_tD29E53D2E1C8F91FF9FEA40F4F3A540857651D3B* ___aDefault1, const RuntimeMethod* method) 
{
	{
		// return aDefault;
		JSONNode_tD29E53D2E1C8F91FF9FEA40F4F3A540857651D3B* L_0 = ___aDefault1;
		return L_0;
	}
}
// System.String SimpleJSON.JSONNode::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* JSONNode_ToString_m4915C34B9F78A766FA1B6F9035C6BF5A8949A5DC (JSONNode_tD29E53D2E1C8F91FF9FEA40F4F3A540857651D3B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringBuilder_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	StringBuilder_t* V_0 = NULL;
	{
		// StringBuilder sb = new StringBuilder();
		StringBuilder_t* L_0 = (StringBuilder_t*)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		StringBuilder__ctor_m1D99713357DE05DAFA296633639DB55F8C30587D(L_0, NULL);
		V_0 = L_0;
		// WriteToStringBuilder(sb, 0, 0, JSONTextMode.Compact);
		StringBuilder_t* L_1 = V_0;
		VirtualActionInvoker4< StringBuilder_t*, int32_t, int32_t, int32_t >::Invoke(31 /* System.Void SimpleJSON.JSONNode::WriteToStringBuilder(System.Text.StringBuilder,System.Int32,System.Int32,SimpleJSON.JSONTextMode) */, __this, L_1, 0, 0, 0);
		// return sb.ToString();
		StringBuilder_t* L_2 = V_0;
		NullCheck(L_2);
		String_t* L_3;
		L_3 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_2);
		return L_3;
	}
}
// System.String SimpleJSON.JSONNode::ToString(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* JSONNode_ToString_mC65EB53235D96E35BD3D27CE23366417310ECEDC (JSONNode_tD29E53D2E1C8F91FF9FEA40F4F3A540857651D3B* __this, int32_t ___aIndent0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringBuilder_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	StringBuilder_t* V_0 = NULL;
	{
		// StringBuilder sb = new StringBuilder();
		StringBuilder_t* L_0 = (StringBuilder_t*)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		StringBuilder__ctor_m1D99713357DE05DAFA296633639DB55F8C30587D(L_0, NULL);
		V_0 = L_0;
		// WriteToStringBuilder(sb, 0, aIndent, JSONTextMode.Indent);
		StringBuilder_t* L_1 = V_0;
		int32_t L_2 = ___aIndent0;
		VirtualActionInvoker4< StringBuilder_t*, int32_t, int32_t, int32_t >::Invoke(31 /* System.Void SimpleJSON.JSONNode::WriteToStringBuilder(System.Text.StringBuilder,System.Int32,System.Int32,SimpleJSON.JSONTextMode) */, __this, L_1, 0, L_2, 1);
		// return sb.ToString();
		StringBuilder_t* L_3 = V_0;
		NullCheck(L_3);
		String_t* L_4;
		L_4 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_3);
		return L_4;
	}
}
// System.Collections.Generic.IEnumerable`1<System.Collections.Generic.KeyValuePair`2<System.String,SimpleJSON.JSONNode>> SimpleJSON.JSONNode::get_Linq()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* JSONNode_get_Linq_mE5F1F43CE07BEFFE4F076D9D62E6FBD1CD119E78 (JSONNode_tD29E53D2E1C8F91FF9FEA40F4F3A540857651D3B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LinqEnumerator_t569E03B1C27DEBBF7549F3136EE88777AA5A3AD3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public IEnumerable<KeyValuePair<string, JSONNode>> Linq { get { return new LinqEnumerator(this); } }
		LinqEnumerator_t569E03B1C27DEBBF7549F3136EE88777AA5A3AD3* L_0 = (LinqEnumerator_t569E03B1C27DEBBF7549F3136EE88777AA5A3AD3*)il2cpp_codegen_object_new(LinqEnumerator_t569E03B1C27DEBBF7549F3136EE88777AA5A3AD3_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		LinqEnumerator__ctor_m94D1481CEA35FD6B775A03351ACCAE7BECFDA8D3(L_0, __this, NULL);
		return L_0;
	}
}
// SimpleJSON.JSONNode/KeyEnumerator SimpleJSON.JSONNode::get_Keys()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR KeyEnumerator_t75897CC29A0BD54DD4F75DA1922448A65DEC4458 JSONNode_get_Keys_mD472E178B0598E291FD303A263A8910B66BE6E87 (JSONNode_tD29E53D2E1C8F91FF9FEA40F4F3A540857651D3B* __this, const RuntimeMethod* method) 
{
	{
		// public KeyEnumerator Keys { get { return new KeyEnumerator(GetEnumerator()); } }
		Enumerator_tA1F999D27FB3CE7FB0AC8D9BD4084CBA9E687C1F L_0;
		L_0 = VirtualFuncInvoker0< Enumerator_tA1F999D27FB3CE7FB0AC8D9BD4084CBA9E687C1F >::Invoke(32 /* SimpleJSON.JSONNode/Enumerator SimpleJSON.JSONNode::GetEnumerator() */, __this);
		KeyEnumerator_t75897CC29A0BD54DD4F75DA1922448A65DEC4458 L_1;
		memset((&L_1), 0, sizeof(L_1));
		KeyEnumerator__ctor_mA74E36BD7D862BD0CAA6A40ABA8EA9B8E96BC09B_inline((&L_1), L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// SimpleJSON.JSONNode/ValueEnumerator SimpleJSON.JSONNode::get_Values()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ValueEnumerator_tEA9D0EC3AED2B1854EAA656A2ECA719D051F774E JSONNode_get_Values_mD3E56C173B55DC59D2516995324A46D1E5AB7084 (JSONNode_tD29E53D2E1C8F91FF9FEA40F4F3A540857651D3B* __this, const RuntimeMethod* method) 
{
	{
		// public ValueEnumerator Values { get { return new ValueEnumerator(GetEnumerator()); } }
		Enumerator_tA1F999D27FB3CE7FB0AC8D9BD4084CBA9E687C1F L_0;
		L_0 = VirtualFuncInvoker0< Enumerator_tA1F999D27FB3CE7FB0AC8D9BD4084CBA9E687C1F >::Invoke(32 /* SimpleJSON.JSONNode/Enumerator SimpleJSON.JSONNode::GetEnumerator() */, __this);
		ValueEnumerator_tEA9D0EC3AED2B1854EAA656A2ECA719D051F774E L_1;
		memset((&L_1), 0, sizeof(L_1));
		ValueEnumerator__ctor_m38A55BFC57441736052296F0B4C582FCFFAD5EF3_inline((&L_1), L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Double SimpleJSON.JSONNode::get_AsDouble()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double JSONNode_get_AsDouble_mA1913DCCCF58AFCEADE867045FAE7ED390A47F8C (JSONNode_tD29E53D2E1C8F91FF9FEA40F4F3A540857651D3B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	double V_0 = 0.0;
	{
		// double v = 0.0;
		V_0 = (0.0);
		// if (double.TryParse(Value, NumberStyles.Float, CultureInfo.InvariantCulture, out v))
		String_t* L_0;
		L_0 = VirtualFuncInvoker0< String_t* >::Invoke(9 /* System.String SimpleJSON.JSONNode::get_Value() */, __this);
		il2cpp_codegen_runtime_class_init_inline(CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_il2cpp_TypeInfo_var);
		CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* L_1;
		L_1 = CultureInfo_get_InvariantCulture_m78DAB8CBE8766445310782B6E61FB7A9983AD425(NULL);
		bool L_2;
		L_2 = Double_TryParse_m6038C4DBF1789F1954938FF7F6D3459359CD7718(L_0, ((int32_t)167), L_1, (&V_0), NULL);
		if (!L_2)
		{
			goto IL_0025;
		}
	}
	{
		// return v;
		double L_3 = V_0;
		return L_3;
	}

IL_0025:
	{
		// return 0.0;
		return (0.0);
	}
}
// System.Void SimpleJSON.JSONNode::set_AsDouble(System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JSONNode_set_AsDouble_m28362D60F98B5882166C1361DC1C9B7EFF59B595 (JSONNode_tD29E53D2E1C8F91FF9FEA40F4F3A540857651D3B* __this, double ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Value = value.ToString(CultureInfo.InvariantCulture);
		il2cpp_codegen_runtime_class_init_inline(CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_il2cpp_TypeInfo_var);
		CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* L_0;
		L_0 = CultureInfo_get_InvariantCulture_m78DAB8CBE8766445310782B6E61FB7A9983AD425(NULL);
		String_t* L_1;
		L_1 = Double_ToString_m4318830D9F771852FDCF21C14CF9E8ABC7E77357((&___value0), L_0, NULL);
		VirtualActionInvoker1< String_t* >::Invoke(10 /* System.Void SimpleJSON.JSONNode::set_Value(System.String) */, __this, L_1);
		// }
		return;
	}
}
// System.Int32 SimpleJSON.JSONNode::get_AsInt()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t JSONNode_get_AsInt_m44B362541D34F3B77BC68D139F040AA5EF520439 (JSONNode_tD29E53D2E1C8F91FF9FEA40F4F3A540857651D3B* __this, const RuntimeMethod* method) 
{
	{
		// get { return (int)AsDouble; }
		double L_0;
		L_0 = VirtualFuncInvoker0< double >::Invoke(33 /* System.Double SimpleJSON.JSONNode::get_AsDouble() */, __this);
		return il2cpp_codegen_cast_double_to_int<int32_t>(L_0);
	}
}
// System.Void SimpleJSON.JSONNode::set_AsInt(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JSONNode_set_AsInt_m5D1961A65EF6CD9938FFDA3236D3ABA96E04B918 (JSONNode_tD29E53D2E1C8F91FF9FEA40F4F3A540857651D3B* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	{
		// set { AsDouble = value; }
		int32_t L_0 = ___value0;
		VirtualActionInvoker1< double >::Invoke(34 /* System.Void SimpleJSON.JSONNode::set_AsDouble(System.Double) */, __this, ((double)L_0));
		// set { AsDouble = value; }
		return;
	}
}
// System.Single SimpleJSON.JSONNode::get_AsFloat()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float JSONNode_get_AsFloat_mA0DE40E688ECA0838EB53DEB33CD1967C7255281 (JSONNode_tD29E53D2E1C8F91FF9FEA40F4F3A540857651D3B* __this, const RuntimeMethod* method) 
{
	{
		// get { return (float)AsDouble; }
		double L_0;
		L_0 = VirtualFuncInvoker0< double >::Invoke(33 /* System.Double SimpleJSON.JSONNode::get_AsDouble() */, __this);
		return ((float)L_0);
	}
}
// System.Void SimpleJSON.JSONNode::set_AsFloat(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JSONNode_set_AsFloat_m0ECEF5DD09F539D3AF37D87B5097FCAE2D30A785 (JSONNode_tD29E53D2E1C8F91FF9FEA40F4F3A540857651D3B* __this, float ___value0, const RuntimeMethod* method) 
{
	{
		// set { AsDouble = value; }
		float L_0 = ___value0;
		VirtualActionInvoker1< double >::Invoke(34 /* System.Void SimpleJSON.JSONNode::set_AsDouble(System.Double) */, __this, ((double)L_0));
		// set { AsDouble = value; }
		return;
	}
}
// System.Boolean SimpleJSON.JSONNode::get_AsBool()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool JSONNode_get_AsBool_mFCD3668B13EAAB86D137EF1D1459703E6269CE4E (JSONNode_tD29E53D2E1C8F91FF9FEA40F4F3A540857651D3B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		// bool v = false;
		V_0 = (bool)0;
		// if (bool.TryParse(Value, out v))
		String_t* L_0;
		L_0 = VirtualFuncInvoker0< String_t* >::Invoke(9 /* System.String SimpleJSON.JSONNode::get_Value() */, __this);
		il2cpp_codegen_runtime_class_init_inline(Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Boolean_TryParse_mACDFEB12D4D8B25F9AAA56678FEFC0724D49776F(L_0, (&V_0), NULL);
		if (!L_1)
		{
			goto IL_0013;
		}
	}
	{
		// return v;
		bool L_2 = V_0;
		return L_2;
	}

IL_0013:
	{
		// return !string.IsNullOrEmpty(Value);
		String_t* L_3;
		L_3 = VirtualFuncInvoker0< String_t* >::Invoke(9 /* System.String SimpleJSON.JSONNode::get_Value() */, __this);
		bool L_4;
		L_4 = String_IsNullOrEmpty_m54CF0907E7C4F3AFB2E796A13DC751ECBB8DB64A(L_3, NULL);
		return (bool)((((int32_t)L_4) == ((int32_t)0))? 1 : 0);
	}
}
// System.Void SimpleJSON.JSONNode::set_AsBool(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JSONNode_set_AsBool_mC1FE39521B8A4A0E65030A459536E426FD393FA5 (JSONNode_tD29E53D2E1C8F91FF9FEA40F4F3A540857651D3B* __this, bool ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral77D38C0623F92B292B925F6E72CF5CF99A20D4EB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB7C45DD316C68ABF3429C20058C2981C652192F2);
		s_Il2CppMethodInitialized = true;
	}
	JSONNode_tD29E53D2E1C8F91FF9FEA40F4F3A540857651D3B* G_B2_0 = NULL;
	JSONNode_tD29E53D2E1C8F91FF9FEA40F4F3A540857651D3B* G_B1_0 = NULL;
	String_t* G_B3_0 = NULL;
	JSONNode_tD29E53D2E1C8F91FF9FEA40F4F3A540857651D3B* G_B3_1 = NULL;
	{
		// Value = (value) ? "true" : "false";
		bool L_0 = ___value0;
		G_B1_0 = __this;
		if (L_0)
		{
			G_B2_0 = __this;
			goto IL_000b;
		}
	}
	{
		G_B3_0 = _stringLiteral77D38C0623F92B292B925F6E72CF5CF99A20D4EB;
		G_B3_1 = G_B1_0;
		goto IL_0010;
	}

IL_000b:
	{
		G_B3_0 = _stringLiteralB7C45DD316C68ABF3429C20058C2981C652192F2;
		G_B3_1 = G_B2_0;
	}

IL_0010:
	{
		NullCheck(G_B3_1);
		VirtualActionInvoker1< String_t* >::Invoke(10 /* System.Void SimpleJSON.JSONNode::set_Value(System.String) */, G_B3_1, G_B3_0);
		// }
		return;
	}
}
// System.Int64 SimpleJSON.JSONNode::get_AsLong()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t JSONNode_get_AsLong_m577C8180A70EFF1154B916F506216D22FE69653C (JSONNode_tD29E53D2E1C8F91FF9FEA40F4F3A540857651D3B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int64_t V_0 = 0;
	{
		// long val = 0;
		V_0 = ((int64_t)0);
		// if (long.TryParse(Value, NumberStyles.Integer, CultureInfo.InvariantCulture, out val))
		String_t* L_0;
		L_0 = VirtualFuncInvoker0< String_t* >::Invoke(9 /* System.String SimpleJSON.JSONNode::get_Value() */, __this);
		il2cpp_codegen_runtime_class_init_inline(CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_il2cpp_TypeInfo_var);
		CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* L_1;
		L_1 = CultureInfo_get_InvariantCulture_m78DAB8CBE8766445310782B6E61FB7A9983AD425(NULL);
		bool L_2;
		L_2 = Int64_TryParse_m280F0E3C898A7C3A57F35E3B136D4BFACE12122A(L_0, 7, L_1, (&V_0), NULL);
		if (!L_2)
		{
			goto IL_001a;
		}
	}
	{
		// return val;
		int64_t L_3 = V_0;
		return L_3;
	}

IL_001a:
	{
		// return 0L;
		return ((int64_t)0);
	}
}
// System.Void SimpleJSON.JSONNode::set_AsLong(System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JSONNode_set_AsLong_m4C8EA8E74CE08B99FB68E35ABB1713AC2661A6F0 (JSONNode_tD29E53D2E1C8F91FF9FEA40F4F3A540857651D3B* __this, int64_t ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Value = value.ToString(CultureInfo.InvariantCulture);
		il2cpp_codegen_runtime_class_init_inline(CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_il2cpp_TypeInfo_var);
		CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* L_0;
		L_0 = CultureInfo_get_InvariantCulture_m78DAB8CBE8766445310782B6E61FB7A9983AD425(NULL);
		String_t* L_1;
		L_1 = Int64_ToString_m5250B67D3E89B8EB829FB26136E744F1F141B7FD((&___value0), L_0, NULL);
		VirtualActionInvoker1< String_t* >::Invoke(10 /* System.Void SimpleJSON.JSONNode::set_Value(System.String) */, __this, L_1);
		// }
		return;
	}
}
// System.UInt64 SimpleJSON.JSONNode::get_AsULong()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t JSONNode_get_AsULong_m91CA36FF3C4CF209A2416C25AF8707DB783FF7E0 (JSONNode_tD29E53D2E1C8F91FF9FEA40F4F3A540857651D3B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	uint64_t V_0 = 0;
	{
		// ulong val = 0;
		V_0 = ((int64_t)0);
		// if (ulong.TryParse(Value, NumberStyles.Integer, CultureInfo.InvariantCulture, out val))
		String_t* L_0;
		L_0 = VirtualFuncInvoker0< String_t* >::Invoke(9 /* System.String SimpleJSON.JSONNode::get_Value() */, __this);
		il2cpp_codegen_runtime_class_init_inline(CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_il2cpp_TypeInfo_var);
		CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* L_1;
		L_1 = CultureInfo_get_InvariantCulture_m78DAB8CBE8766445310782B6E61FB7A9983AD425(NULL);
		bool L_2;
		L_2 = UInt64_TryParse_mFF6D2B2F9EFC729CB42EDC35E105CFADBD254819(L_0, 7, L_1, (&V_0), NULL);
		if (!L_2)
		{
			goto IL_001a;
		}
	}
	{
		// return val;
		uint64_t L_3 = V_0;
		return L_3;
	}

IL_001a:
	{
		// return 0;
		return ((int64_t)0);
	}
}
// System.Void SimpleJSON.JSONNode::set_AsULong(System.UInt64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JSONNode_set_AsULong_m739AACDB52AD02F5D25E229DB4F0B9DF2CE28E88 (JSONNode_tD29E53D2E1C8F91FF9FEA40F4F3A540857651D3B* __this, uint64_t ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Value = value.ToString(CultureInfo.InvariantCulture);
		il2cpp_codegen_runtime_class_init_inline(CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_il2cpp_TypeInfo_var);
		CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* L_0;
		L_0 = CultureInfo_get_InvariantCulture_m78DAB8CBE8766445310782B6E61FB7A9983AD425(NULL);
		String_t* L_1;
		L_1 = UInt64_ToString_mCDDACF05D6B5B3ECB10B1FEEE58ED3407973E7A7((&___value0), L_0, NULL);
		VirtualActionInvoker1< String_t* >::Invoke(10 /* System.Void SimpleJSON.JSONNode::set_Value(System.String) */, __this, L_1);
		// }
		return;
	}
}
// SimpleJSON.JSONArray SimpleJSON.JSONNode::get_AsArray()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR JSONArray_tDB47C85E2DDB2CB4A972E4C0685D82E00490CB25* JSONNode_get_AsArray_m57C5E7664B0D4EE1D983EE736A152BCAC6CE986E (JSONNode_tD29E53D2E1C8F91FF9FEA40F4F3A540857651D3B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JSONArray_tDB47C85E2DDB2CB4A972E4C0685D82E00490CB25_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return this as JSONArray;
		return ((JSONArray_tDB47C85E2DDB2CB4A972E4C0685D82E00490CB25*)IsInstClass((RuntimeObject*)__this, JSONArray_tDB47C85E2DDB2CB4A972E4C0685D82E00490CB25_il2cpp_TypeInfo_var));
	}
}
// SimpleJSON.JSONObject SimpleJSON.JSONNode::get_AsObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR JSONObject_tEA00D19860E34865B3D16312DD382C0901CAB654* JSONNode_get_AsObject_m4709713E65CED519A4F5F7344CA0E7DAC3472A6C (JSONNode_tD29E53D2E1C8F91FF9FEA40F4F3A540857651D3B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JSONObject_tEA00D19860E34865B3D16312DD382C0901CAB654_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return this as JSONObject;
		return ((JSONObject_tEA00D19860E34865B3D16312DD382C0901CAB654*)IsInstClass((RuntimeObject*)__this, JSONObject_tEA00D19860E34865B3D16312DD382C0901CAB654_il2cpp_TypeInfo_var));
	}
}
// SimpleJSON.JSONNode SimpleJSON.JSONNode::op_Implicit(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR JSONNode_tD29E53D2E1C8F91FF9FEA40F4F3A540857651D3B* JSONNode_op_Implicit_m0273CFAA09D60AEFC1AAFE649B2802394FC772E6 (String_t* ___s0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JSONNull_tEE66558FCE6029B3F1414C062F5E38E0530BD69A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JSONString_t1A1090FC5863846C80D0BDEF4E63FE23D7AC437D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return (s == null) ? (JSONNode)JSONNull.CreateOrGet() : new JSONString(s);
		String_t* L_0 = ___s0;
		if (!L_0)
		{
			goto IL_000a;
		}
	}
	{
		String_t* L_1 = ___s0;
		JSONString_t1A1090FC5863846C80D0BDEF4E63FE23D7AC437D* L_2 = (JSONString_t1A1090FC5863846C80D0BDEF4E63FE23D7AC437D*)il2cpp_codegen_object_new(JSONString_t1A1090FC5863846C80D0BDEF4E63FE23D7AC437D_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		JSONString__ctor_mAD5BB3D8B2193F8B64CD62C52F5EF2D51F7A2742(L_2, L_1, NULL);
		return L_2;
	}

IL_000a:
	{
		il2cpp_codegen_runtime_class_init_inline(JSONNull_tEE66558FCE6029B3F1414C062F5E38E0530BD69A_il2cpp_TypeInfo_var);
		JSONNull_tEE66558FCE6029B3F1414C062F5E38E0530BD69A* L_3;
		L_3 = JSONNull_CreateOrGet_m8A46E28FE2DA1E537F51FA071E580ABC21DB5701(NULL);
		return L_3;
	}
}
// System.String SimpleJSON.JSONNode::op_Implicit(SimpleJSON.JSONNode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* JSONNode_op_Implicit_m59100B518E1805F74022BD02D56A61B3C5614C72 (JSONNode_tD29E53D2E1C8F91FF9FEA40F4F3A540857651D3B* ___d0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JSONNode_tD29E53D2E1C8F91FF9FEA40F4F3A540857651D3B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return (d == null) ? null : d.Value;
		JSONNode_tD29E53D2E1C8F91FF9FEA40F4F3A540857651D3B* L_0 = ___d0;
		il2cpp_codegen_runtime_class_init_inline(JSONNode_tD29E53D2E1C8F91FF9FEA40F4F3A540857651D3B_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = JSONNode_op_Equality_mA07D467DFB678DC61E7B2A43E87B7D4F6CB5B556(L_0, NULL, NULL);
		if (L_1)
		{
			goto IL_0010;
		}
	}
	{
		JSONNode_tD29E53D2E1C8F91FF9FEA40F4F3A540857651D3B* L_2 = ___d0;
		NullCheck(L_2);
		String_t* L_3;
		L_3 = VirtualFuncInvoker0< String_t* >::Invoke(9 /* System.String SimpleJSON.JSONNode::get_Value() */, L_2);
		return L_3;
	}

IL_0010:
	{
		return (String_t*)NULL;
	}
}
// SimpleJSON.JSONNode SimpleJSON.JSONNode::op_Implicit(System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR JSONNode_tD29E53D2E1C8F91FF9FEA40F4F3A540857651D3B* JSONNode_op_Implicit_m88A137DBE16A359B2E1B549953A8E45A8D757D8B (double ___n0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JSONNumber_tE274A557833A3AE0CDC6C7E563CEAD2A38355688_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return new JSONNumber(n);
		double L_0 = ___n0;
		JSONNumber_tE274A557833A3AE0CDC6C7E563CEAD2A38355688* L_1 = (JSONNumber_tE274A557833A3AE0CDC6C7E563CEAD2A38355688*)il2cpp_codegen_object_new(JSONNumber_tE274A557833A3AE0CDC6C7E563CEAD2A38355688_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		JSONNumber__ctor_mCBCEBE5C94CA62FF6A45B6F37850DBCE5D2648D8(L_1, L_0, NULL);
		return L_1;
	}
}
// System.Double SimpleJSON.JSONNode::op_Implicit(SimpleJSON.JSONNode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double JSONNode_op_Implicit_mC2DC8E55D8BDBB414BCBF01713A3D93BE0910E34 (JSONNode_tD29E53D2E1C8F91FF9FEA40F4F3A540857651D3B* ___d0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JSONNode_tD29E53D2E1C8F91FF9FEA40F4F3A540857651D3B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return (d == null) ? 0 : d.AsDouble;
		JSONNode_tD29E53D2E1C8F91FF9FEA40F4F3A540857651D3B* L_0 = ___d0;
		il2cpp_codegen_runtime_class_init_inline(JSONNode_tD29E53D2E1C8F91FF9FEA40F4F3A540857651D3B_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = JSONNode_op_Equality_mA07D467DFB678DC61E7B2A43E87B7D4F6CB5B556(L_0, NULL, NULL);
		if (L_1)
		{
			goto IL_0010;
		}
	}
	{
		JSONNode_tD29E53D2E1C8F91FF9FEA40F4F3A540857651D3B* L_2 = ___d0;
		NullCheck(L_2);
		double L_3;
		L_3 = VirtualFuncInvoker0< double >::Invoke(33 /* System.Double SimpleJSON.JSONNode::get_AsDouble() */, L_2);
		return L_3;
	}

IL_0010:
	{
		return (0.0);
	}
}
// SimpleJSON.JSONNode SimpleJSON.JSONNode::op_Implicit(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR JSONNode_tD29E53D2E1C8F91FF9FEA40F4F3A540857651D3B* JSONNode_op_Implicit_mD1F8824A7EA1108D574F07262E5A83BE68F07459 (float ___n0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JSONNumber_tE274A557833A3AE0CDC6C7E563CEAD2A38355688_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return new JSONNumber(n);
		float L_0 = ___n0;
		JSONNumber_tE274A557833A3AE0CDC6C7E563CEAD2A38355688* L_1 = (JSONNumber_tE274A557833A3AE0CDC6C7E563CEAD2A38355688*)il2cpp_codegen_object_new(JSONNumber_tE274A557833A3AE0CDC6C7E563CEAD2A38355688_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		JSONNumber__ctor_mCBCEBE5C94CA62FF6A45B6F37850DBCE5D2648D8(L_1, ((double)L_0), NULL);
		return L_1;
	}
}
// System.Single SimpleJSON.JSONNode::op_Implicit(SimpleJSON.JSONNode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float JSONNode_op_Implicit_mF8D5869C3145A4F04350902BD10EF324FBDD8162 (JSONNode_tD29E53D2E1C8F91FF9FEA40F4F3A540857651D3B* ___d0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JSONNode_tD29E53D2E1C8F91FF9FEA40F4F3A540857651D3B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return (d == null) ? 0 : d.AsFloat;
		JSONNode_tD29E53D2E1C8F91FF9FEA40F4F3A540857651D3B* L_0 = ___d0;
		il2cpp_codegen_runtime_class_init_inline(JSONNode_tD29E53D2E1C8F91FF9FEA40F4F3A540857651D3B_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = JSONNode_op_Equality_mA07D467DFB678DC61E7B2A43E87B7D4F6CB5B556(L_0, NULL, NULL);
		if (L_1)
		{
			goto IL_0010;
		}
	}
	{
		JSONNode_tD29E53D2E1C8F91FF9FEA40F4F3A540857651D3B* L_2 = ___d0;
		NullCheck(L_2);
		float L_3;
		L_3 = VirtualFuncInvoker0< float >::Invoke(37 /* System.Single SimpleJSON.JSONNode::get_AsFloat() */, L_2);
		return L_3;
	}

IL_0010:
	{
		return (0.0f);
	}
}
// SimpleJSON.JSONNode SimpleJSON.JSONNode::op_Implicit(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR JSONNode_tD29E53D2E1C8F91FF9FEA40F4F3A540857651D3B* JSONNode_op_Implicit_mA17AF6EECE1F2D7522DD0022741301B3C2BAB81F (int32_t ___n0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JSONNumber_tE274A557833A3AE0CDC6C7E563CEAD2A38355688_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return new JSONNumber(n);
		int32_t L_0 = ___n0;
		JSONNumber_tE274A557833A3AE0CDC6C7E563CEAD2A38355688* L_1 = (JSONNumber_tE274A557833A3AE0CDC6C7E563CEAD2A38355688*)il2cpp_codegen_object_new(JSONNumber_tE274A557833A3AE0CDC6C7E563CEAD2A38355688_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		JSONNumber__ctor_mCBCEBE5C94CA62FF6A45B6F37850DBCE5D2648D8(L_1, ((double)L_0), NULL);
		return L_1;
	}
}
// System.Int32 SimpleJSON.JSONNode::op_Implicit(SimpleJSON.JSONNode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t JSONNode_op_Implicit_mC7FA3989AB06802760729A3CF75041ECBBAF1784 (JSONNode_tD29E53D2E1C8F91FF9FEA40F4F3A540857651D3B* ___d0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JSONNode_tD29E53D2E1C8F91FF9FEA40F4F3A540857651D3B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return (d == null) ? 0 : d.AsInt;
		JSONNode_tD29E53D2E1C8F91FF9FEA40F4F3A540857651D3B* L_0 = ___d0;
		il2cpp_codegen_runtime_class_init_inline(JSONNode_tD29E53D2E1C8F91FF9FEA40F4F3A540857651D3B_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = JSONNode_op_Equality_mA07D467DFB678DC61E7B2A43E87B7D4F6CB5B556(L_0, NULL, NULL);
		if (L_1)
		{
			goto IL_0010;
		}
	}
	{
		JSONNode_tD29E53D2E1C8F91FF9FEA40F4F3A540857651D3B* L_2 = ___d0;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = VirtualFuncInvoker0< int32_t >::Invoke(35 /* System.Int32 SimpleJSON.JSONNode::get_AsInt() */, L_2);
		return L_3;
	}

IL_0010:
	{
		return 0;
	}
}
// SimpleJSON.JSONNode SimpleJSON.JSONNode::op_Implicit(System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR JSONNode_tD29E53D2E1C8F91FF9FEA40F4F3A540857651D3B* JSONNode_op_Implicit_mDE5DCD4CDAE14531C04EC74B3FF429AC14B54CB4 (int64_t ___n0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JSONNode_tD29E53D2E1C8F91FF9FEA40F4F3A540857651D3B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JSONNumber_tE274A557833A3AE0CDC6C7E563CEAD2A38355688_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JSONString_t1A1090FC5863846C80D0BDEF4E63FE23D7AC437D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (longAsString)
		il2cpp_codegen_runtime_class_init_inline(JSONNode_tD29E53D2E1C8F91FF9FEA40F4F3A540857651D3B_il2cpp_TypeInfo_var);
		bool L_0 = ((JSONNode_tD29E53D2E1C8F91FF9FEA40F4F3A540857651D3B_StaticFields*)il2cpp_codegen_static_fields_for(JSONNode_tD29E53D2E1C8F91FF9FEA40F4F3A540857651D3B_il2cpp_TypeInfo_var))->___longAsString_1;
		if (!L_0)
		{
			goto IL_0019;
		}
	}
	{
		// return new JSONString(n.ToString(CultureInfo.InvariantCulture));
		il2cpp_codegen_runtime_class_init_inline(CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_il2cpp_TypeInfo_var);
		CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* L_1;
		L_1 = CultureInfo_get_InvariantCulture_m78DAB8CBE8766445310782B6E61FB7A9983AD425(NULL);
		String_t* L_2;
		L_2 = Int64_ToString_m5250B67D3E89B8EB829FB26136E744F1F141B7FD((&___n0), L_1, NULL);
		JSONString_t1A1090FC5863846C80D0BDEF4E63FE23D7AC437D* L_3 = (JSONString_t1A1090FC5863846C80D0BDEF4E63FE23D7AC437D*)il2cpp_codegen_object_new(JSONString_t1A1090FC5863846C80D0BDEF4E63FE23D7AC437D_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		JSONString__ctor_mAD5BB3D8B2193F8B64CD62C52F5EF2D51F7A2742(L_3, L_2, NULL);
		return L_3;
	}

IL_0019:
	{
		// return new JSONNumber(n);
		int64_t L_4 = ___n0;
		JSONNumber_tE274A557833A3AE0CDC6C7E563CEAD2A38355688* L_5 = (JSONNumber_tE274A557833A3AE0CDC6C7E563CEAD2A38355688*)il2cpp_codegen_object_new(JSONNumber_tE274A557833A3AE0CDC6C7E563CEAD2A38355688_il2cpp_TypeInfo_var);
		NullCheck(L_5);
		JSONNumber__ctor_mCBCEBE5C94CA62FF6A45B6F37850DBCE5D2648D8(L_5, ((double)L_4), NULL);
		return L_5;
	}
}
// System.Int64 SimpleJSON.JSONNode::op_Implicit(SimpleJSON.JSONNode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t JSONNode_op_Implicit_m115C9C9BECA25BEB0C250FDEA98599FDEC7C4A10 (JSONNode_tD29E53D2E1C8F91FF9FEA40F4F3A540857651D3B* ___d0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JSONNode_tD29E53D2E1C8F91FF9FEA40F4F3A540857651D3B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return (d == null) ? 0L : d.AsLong;
		JSONNode_tD29E53D2E1C8F91FF9FEA40F4F3A540857651D3B* L_0 = ___d0;
		il2cpp_codegen_runtime_class_init_inline(JSONNode_tD29E53D2E1C8F91FF9FEA40F4F3A540857651D3B_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = JSONNode_op_Equality_mA07D467DFB678DC61E7B2A43E87B7D4F6CB5B556(L_0, NULL, NULL);
		if (L_1)
		{
			goto IL_0010;
		}
	}
	{
		JSONNode_tD29E53D2E1C8F91FF9FEA40F4F3A540857651D3B* L_2 = ___d0;
		NullCheck(L_2);
		int64_t L_3;
		L_3 = VirtualFuncInvoker0< int64_t >::Invoke(41 /* System.Int64 SimpleJSON.JSONNode::get_AsLong() */, L_2);
		return L_3;
	}

IL_0010:
	{
		return ((int64_t)0);
	}
}
// SimpleJSON.JSONNode SimpleJSON.JSONNode::op_Implicit(System.UInt64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR JSONNode_tD29E53D2E1C8F91FF9FEA40F4F3A540857651D3B* JSONNode_op_Implicit_m158CC54C3C1EE10BE60A339B9D9C558604792607 (uint64_t ___n0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JSONNode_tD29E53D2E1C8F91FF9FEA40F4F3A540857651D3B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JSONNumber_tE274A557833A3AE0CDC6C7E563CEAD2A38355688_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JSONString_t1A1090FC5863846C80D0BDEF4E63FE23D7AC437D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (longAsString)
		il2cpp_codegen_runtime_class_init_inline(JSONNode_tD29E53D2E1C8F91FF9FEA40F4F3A540857651D3B_il2cpp_TypeInfo_var);
		bool L_0 = ((JSONNode_tD29E53D2E1C8F91FF9FEA40F4F3A540857651D3B_StaticFields*)il2cpp_codegen_static_fields_for(JSONNode_tD29E53D2E1C8F91FF9FEA40F4F3A540857651D3B_il2cpp_TypeInfo_var))->___longAsString_1;
		if (!L_0)
		{
			goto IL_0019;
		}
	}
	{
		// return new JSONString(n.ToString(CultureInfo.InvariantCulture));
		il2cpp_codegen_runtime_class_init_inline(CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_il2cpp_TypeInfo_var);
		CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* L_1;
		L_1 = CultureInfo_get_InvariantCulture_m78DAB8CBE8766445310782B6E61FB7A9983AD425(NULL);
		String_t* L_2;
		L_2 = UInt64_ToString_mCDDACF05D6B5B3ECB10B1FEEE58ED3407973E7A7((&___n0), L_1, NULL);
		JSONString_t1A1090FC5863846C80D0BDEF4E63FE23D7AC437D* L_3 = (JSONString_t1A1090FC5863846C80D0BDEF4E63FE23D7AC437D*)il2cpp_codegen_object_new(JSONString_t1A1090FC5863846C80D0BDEF4E63FE23D7AC437D_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		JSONString__ctor_mAD5BB3D8B2193F8B64CD62C52F5EF2D51F7A2742(L_3, L_2, NULL);
		return L_3;
	}

IL_0019:
	{
		// return new JSONNumber(n);
		uint64_t L_4 = ___n0;
		JSONNumber_tE274A557833A3AE0CDC6C7E563CEAD2A38355688* L_5 = (JSONNumber_tE274A557833A3AE0CDC6C7E563CEAD2A38355688*)il2cpp_codegen_object_new(JSONNumber_tE274A557833A3AE0CDC6C7E563CEAD2A38355688_il2cpp_TypeInfo_var);
		NullCheck(L_5);
		JSONNumber__ctor_mCBCEBE5C94CA62FF6A45B6F37850DBCE5D2648D8(L_5, ((double)((double)(uint64_t)L_4)), NULL);
		return L_5;
	}
}
// System.UInt64 SimpleJSON.JSONNode::op_Implicit(SimpleJSON.JSONNode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t JSONNode_op_Implicit_m13C23FB662BFC08ABE5CA64F1F7EF272E11080E6 (JSONNode_tD29E53D2E1C8F91FF9FEA40F4F3A540857651D3B* ___d0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JSONNode_tD29E53D2E1C8F91FF9FEA40F4F3A540857651D3B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return (d == null) ? 0 : d.AsULong;
		JSONNode_tD29E53D2E1C8F91FF9FEA40F4F3A540857651D3B* L_0 = ___d0;
		il2cpp_codegen_runtime_class_init_inline(JSONNode_tD29E53D2E1C8F91FF9FEA40F4F3A540857651D3B_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = JSONNode_op_Equality_mA07D467DFB678DC61E7B2A43E87B7D4F6CB5B556(L_0, NULL, NULL);
		if (L_1)
		{
			goto IL_0010;
		}
	}
	{
		JSONNode_tD29E53D2E1C8F91FF9FEA40F4F3A540857651D3B* L_2 = ___d0;
		NullCheck(L_2);
		uint64_t L_3;
		L_3 = VirtualFuncInvoker0< uint64_t >::Invoke(43 /* System.UInt64 SimpleJSON.JSONNode::get_AsULong() */, L_2);
		return L_3;
	}

IL_0010:
	{
		return ((int64_t)0);
	}
}
// SimpleJSON.JSONNode SimpleJSON.JSONNode::op_Implicit(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR JSONNode_tD29E53D2E1C8F91FF9FEA40F4F3A540857651D3B* JSONNode_op_Implicit_mB28D7F9C01D11BDC03113BBCAA6A209AC7F5BD69 (bool ___b0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JSONBool_tD24D984AAB7A652E0241CA0111547A9A9F66B5C9_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return new JSONBool(b);
		bool L_0 = ___b0;
		JSONBool_tD24D984AAB7A652E0241CA0111547A9A9F66B5C9* L_1 = (JSONBool_tD24D984AAB7A652E0241CA0111547A9A9F66B5C9*)il2cpp_codegen_object_new(JSONBool_tD24D984AAB7A652E0241CA0111547A9A9F66B5C9_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		JSONBool__ctor_mE760DC3E6BCC0DDF8900363A7DFB69FB7C08C96B(L_1, L_0, NULL);
		return L_1;
	}
}
// System.Boolean SimpleJSON.JSONNode::op_Implicit(SimpleJSON.JSONNode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool JSONNode_op_Implicit_mADBA86CE3E49B0918D6C2A97D5FBDE228D0AE74C (JSONNode_tD29E53D2E1C8F91FF9FEA40F4F3A540857651D3B* ___d0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JSONNode_tD29E53D2E1C8F91FF9FEA40F4F3A540857651D3B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return (d == null) ? false : d.AsBool;
		JSONNode_tD29E53D2E1C8F91FF9FEA40F4F3A540857651D3B* L_0 = ___d0;
		il2cpp_codegen_runtime_class_init_inline(JSONNode_tD29E53D2E1C8F91FF9FEA40F4F3A540857651D3B_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = JSONNode_op_Equality_mA07D467DFB678DC61E7B2A43E87B7D4F6CB5B556(L_0, NULL, NULL);
		if (L_1)
		{
			goto IL_0010;
		}
	}
	{
		JSONNode_tD29E53D2E1C8F91FF9FEA40F4F3A540857651D3B* L_2 = ___d0;
		NullCheck(L_2);
		bool L_3;
		L_3 = VirtualFuncInvoker0< bool >::Invoke(39 /* System.Boolean SimpleJSON.JSONNode::get_AsBool() */, L_2);
		return L_3;
	}

IL_0010:
	{
		return (bool)0;
	}
}
// SimpleJSON.JSONNode SimpleJSON.JSONNode::op_Implicit(System.Collections.Generic.KeyValuePair`2<System.String,SimpleJSON.JSONNode>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR JSONNode_tD29E53D2E1C8F91FF9FEA40F4F3A540857651D3B* JSONNode_op_Implicit_m3338300BA4BB6C894785A3A717020A9C10FA0C08 (KeyValuePair_2_tD59618B150F9D38FE8CF312BB48DB72E7ECC4E9C ___aKeyValue0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyValuePair_2_get_Value_mDEC839FB9359C1DC5F359FEB68C324657E5216DD_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return aKeyValue.Value;
		JSONNode_tD29E53D2E1C8F91FF9FEA40F4F3A540857651D3B* L_0;
		L_0 = KeyValuePair_2_get_Value_mDEC839FB9359C1DC5F359FEB68C324657E5216DD_inline((&___aKeyValue0), KeyValuePair_2_get_Value_mDEC839FB9359C1DC5F359FEB68C324657E5216DD_RuntimeMethod_var);
		return L_0;
	}
}
// System.Boolean SimpleJSON.JSONNode::op_Equality(SimpleJSON.JSONNode,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool JSONNode_op_Equality_mA07D467DFB678DC61E7B2A43E87B7D4F6CB5B556 (JSONNode_tD29E53D2E1C8F91FF9FEA40F4F3A540857651D3B* ___a0, RuntimeObject* ___b1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JSONLazyCreator_t67A874365EE690A6837C36B8C9214BCBD04C1C00_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JSONNull_tEE66558FCE6029B3F1414C062F5E38E0530BD69A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	int32_t G_B6_0 = 0;
	int32_t G_B10_0 = 0;
	{
		// if (ReferenceEquals(a, b))
		JSONNode_tD29E53D2E1C8F91FF9FEA40F4F3A540857651D3B* L_0 = ___a0;
		RuntimeObject* L_1 = ___b1;
		if ((!(((RuntimeObject*)(JSONNode_tD29E53D2E1C8F91FF9FEA40F4F3A540857651D3B*)L_0) == ((RuntimeObject*)(RuntimeObject*)L_1))))
		{
			goto IL_0006;
		}
	}
	{
		// return true;
		return (bool)1;
	}

IL_0006:
	{
		// bool aIsNull = a is JSONNull || ReferenceEquals(a, null) || a is JSONLazyCreator;
		JSONNode_tD29E53D2E1C8F91FF9FEA40F4F3A540857651D3B* L_2 = ___a0;
		if (((JSONNull_tEE66558FCE6029B3F1414C062F5E38E0530BD69A*)IsInstClass((RuntimeObject*)L_2, JSONNull_tEE66558FCE6029B3F1414C062F5E38E0530BD69A_il2cpp_TypeInfo_var)))
		{
			goto IL_001c;
		}
	}
	{
		JSONNode_tD29E53D2E1C8F91FF9FEA40F4F3A540857651D3B* L_3 = ___a0;
		if (!L_3)
		{
			goto IL_001c;
		}
	}
	{
		JSONNode_tD29E53D2E1C8F91FF9FEA40F4F3A540857651D3B* L_4 = ___a0;
		G_B6_0 = ((!(((RuntimeObject*)(JSONLazyCreator_t67A874365EE690A6837C36B8C9214BCBD04C1C00*)((JSONLazyCreator_t67A874365EE690A6837C36B8C9214BCBD04C1C00*)IsInstClass((RuntimeObject*)L_4, JSONLazyCreator_t67A874365EE690A6837C36B8C9214BCBD04C1C00_il2cpp_TypeInfo_var))) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		goto IL_001d;
	}

IL_001c:
	{
		G_B6_0 = 1;
	}

IL_001d:
	{
		V_0 = (bool)G_B6_0;
		// bool bIsNull = b is JSONNull || ReferenceEquals(b, null) || b is JSONLazyCreator;
		RuntimeObject* L_5 = ___b1;
		if (((JSONNull_tEE66558FCE6029B3F1414C062F5E38E0530BD69A*)IsInstClass((RuntimeObject*)L_5, JSONNull_tEE66558FCE6029B3F1414C062F5E38E0530BD69A_il2cpp_TypeInfo_var)))
		{
			goto IL_0034;
		}
	}
	{
		RuntimeObject* L_6 = ___b1;
		if (!L_6)
		{
			goto IL_0034;
		}
	}
	{
		RuntimeObject* L_7 = ___b1;
		G_B10_0 = ((!(((RuntimeObject*)(JSONLazyCreator_t67A874365EE690A6837C36B8C9214BCBD04C1C00*)((JSONLazyCreator_t67A874365EE690A6837C36B8C9214BCBD04C1C00*)IsInstClass((RuntimeObject*)L_7, JSONLazyCreator_t67A874365EE690A6837C36B8C9214BCBD04C1C00_il2cpp_TypeInfo_var))) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		goto IL_0035;
	}

IL_0034:
	{
		G_B10_0 = 1;
	}

IL_0035:
	{
		V_1 = (bool)G_B10_0;
		// if (aIsNull && bIsNull)
		bool L_8 = V_0;
		bool L_9 = V_1;
		if (!((int32_t)((int32_t)L_8&(int32_t)L_9)))
		{
			goto IL_003d;
		}
	}
	{
		// return true;
		return (bool)1;
	}

IL_003d:
	{
		// return !aIsNull && a.Equals(b);
		bool L_10 = V_0;
		if (L_10)
		{
			goto IL_0048;
		}
	}
	{
		JSONNode_tD29E53D2E1C8F91FF9FEA40F4F3A540857651D3B* L_11 = ___a0;
		RuntimeObject* L_12 = ___b1;
		NullCheck(L_11);
		bool L_13;
		L_13 = VirtualFuncInvoker1< bool, RuntimeObject* >::Invoke(0 /* System.Boolean System.Object::Equals(System.Object) */, L_11, L_12);
		return L_13;
	}

IL_0048:
	{
		return (bool)0;
	}
}
// System.Boolean SimpleJSON.JSONNode::op_Inequality(SimpleJSON.JSONNode,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool JSONNode_op_Inequality_m7050845D0269F25ED099612FACF1BB706EB45D30 (JSONNode_tD29E53D2E1C8F91FF9FEA40F4F3A540857651D3B* ___a0, RuntimeObject* ___b1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JSONNode_tD29E53D2E1C8F91FF9FEA40F4F3A540857651D3B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return !(a == b);
		JSONNode_tD29E53D2E1C8F91FF9FEA40F4F3A540857651D3B* L_0 = ___a0;
		RuntimeObject* L_1 = ___b1;
		il2cpp_codegen_runtime_class_init_inline(JSONNode_tD29E53D2E1C8F91FF9FEA40F4F3A540857651D3B_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = JSONNode_op_Equality_mA07D467DFB678DC61E7B2A43E87B7D4F6CB5B556(L_0, L_1, NULL);
		return (bool)((((int32_t)L_2) == ((int32_t)0))? 1 : 0);
	}
}
// System.Boolean SimpleJSON.JSONNode::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool JSONNode_Equals_m514369EEC7080C896FA83D32F67980881C4B4823 (JSONNode_tD29E53D2E1C8F91FF9FEA40F4F3A540857651D3B* __this, RuntimeObject* ___obj0, const RuntimeMethod* method) 
{
	{
		// return ReferenceEquals(this, obj);
		RuntimeObject* L_0 = ___obj0;
		return (bool)((((RuntimeObject*)(JSONNode_tD29E53D2E1C8F91FF9FEA40F4F3A540857651D3B*)__this) == ((RuntimeObject*)(RuntimeObject*)L_0))? 1 : 0);
	}
}
// System.Int32 SimpleJSON.JSONNode::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t JSONNode_GetHashCode_m8928888D0A9512FCD23F887704F5189BC27DD94E (JSONNode_tD29E53D2E1C8F91FF9FEA40F4F3A540857651D3B* __this, const RuntimeMethod* method) 
{
	{
		// return base.GetHashCode();
		int32_t L_0;
		L_0 = Object_GetHashCode_m372C5A7AB16CAC13307C11C4256D706CE57E090C(__this, NULL);
		return L_0;
	}
}
// System.Text.StringBuilder SimpleJSON.JSONNode::get_EscapeBuilder()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringBuilder_t* JSONNode_get_EscapeBuilder_mA5A3EE698139EFAA36C725E8A3FD3064D4345C86 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JSONNode_tD29E53D2E1C8F91FF9FEA40F4F3A540857651D3B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringBuilder_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (m_EscapeBuilder == null)
		il2cpp_codegen_runtime_class_init_inline(JSONNode_tD29E53D2E1C8F91FF9FEA40F4F3A540857651D3B_il2cpp_TypeInfo_var);
		StringBuilder_t* L_0 = ((JSONNode_tD29E53D2E1C8F91FF9FEA40F4F3A540857651D3B_ThreadStaticFields*)il2cpp_codegen_get_thread_static_data(JSONNode_tD29E53D2E1C8F91FF9FEA40F4F3A540857651D3B_il2cpp_TypeInfo_var))->___m_EscapeBuilder_3;
		if (L_0)
		{
			goto IL_0011;
		}
	}
	{
		// m_EscapeBuilder = new StringBuilder();
		StringBuilder_t* L_1 = (StringBuilder_t*)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		StringBuilder__ctor_m1D99713357DE05DAFA296633639DB55F8C30587D(L_1, NULL);
		il2cpp_codegen_runtime_class_init_inline(JSONNode_tD29E53D2E1C8F91FF9FEA40F4F3A540857651D3B_il2cpp_TypeInfo_var);
		((JSONNode_tD29E53D2E1C8F91FF9FEA40F4F3A540857651D3B_ThreadStaticFields*)il2cpp_codegen_get_thread_static_data(JSONNode_tD29E53D2E1C8F91FF9FEA40F4F3A540857651D3B_il2cpp_TypeInfo_var))->___m_EscapeBuilder_3 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&((JSONNode_tD29E53D2E1C8F91FF9FEA40F4F3A540857651D3B_ThreadStaticFields*)il2cpp_codegen_get_thread_static_data(JSONNode_tD29E53D2E1C8F91FF9FEA40F4F3A540857651D3B_il2cpp_TypeInfo_var))->___m_EscapeBuilder_3), (void*)L_1);
	}

IL_0011:
	{
		// return m_EscapeBuilder;
		il2cpp_codegen_runtime_class_init_inline(JSONNode_tD29E53D2E1C8F91FF9FEA40F4F3A540857651D3B_il2cpp_TypeInfo_var);
		StringBuilder_t* L_2 = ((JSONNode_tD29E53D2E1C8F91FF9FEA40F4F3A540857651D3B_ThreadStaticFields*)il2cpp_codegen_get_thread_static_data(JSONNode_tD29E53D2E1C8F91FF9FEA40F4F3A540857651D3B_il2cpp_TypeInfo_var))->___m_EscapeBuilder_3;
		return L_2;
	}
}
// System.String SimpleJSON.JSONNode::Escape(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* JSONNode_Escape_m0ED072BC7DE866EC611694D65B6AFCF9E9E3A34E (String_t* ___aText0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JSONNode_tD29E53D2E1C8F91FF9FEA40F4F3A540857651D3B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5962E944D7340CE47999BF097B4AFD70C1501FB9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral785F17F45C331C415D0A7458E6AAC36966399C51);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7F3238CD8C342B06FB9AB185C610175C84625462);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral848E5ED630B3142F565DD995C6E8D30187ED33CD);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA7C3FCA8C63E127B542B38A5CA5E3FEEDDD1B122);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB78F235D4291950A7D101307609C259F3E1F033F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD68508B50CDE1B2E777400476044304CB8149311);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA666908BB15F4E1D2649752EC5DCBD0D5C64699);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF18840F490E42D3CE48CDCBF47229C1C240F8ABE);
		s_Il2CppMethodInitialized = true;
	}
	StringBuilder_t* V_0 = NULL;
	String_t* V_1 = NULL;
	String_t* V_2 = NULL;
	int32_t V_3 = 0;
	Il2CppChar V_4 = 0x0;
	uint16_t V_5 = 0;
	{
		// var sb = EscapeBuilder;
		il2cpp_codegen_runtime_class_init_inline(JSONNode_tD29E53D2E1C8F91FF9FEA40F4F3A540857651D3B_il2cpp_TypeInfo_var);
		StringBuilder_t* L_0;
		L_0 = JSONNode_get_EscapeBuilder_mA5A3EE698139EFAA36C725E8A3FD3064D4345C86(NULL);
		V_0 = L_0;
		// sb.Length = 0;
		StringBuilder_t* L_1 = V_0;
		NullCheck(L_1);
		StringBuilder_set_Length_mE2427BDAEF91C4E4A6C80F3BDF1F6E01DBCC2414(L_1, 0, NULL);
		// if (sb.Capacity < aText.Length + aText.Length / 10)
		StringBuilder_t* L_2 = V_0;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = StringBuilder_get_Capacity_m9DBF3B3940BC0BB882CA26F0EDB53896A491AD1E(L_2, NULL);
		String_t* L_4 = ___aText0;
		NullCheck(L_4);
		int32_t L_5;
		L_5 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_4, NULL);
		String_t* L_6 = ___aText0;
		NullCheck(L_6);
		int32_t L_7;
		L_7 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_6, NULL);
		if ((((int32_t)L_3) >= ((int32_t)((int32_t)il2cpp_codegen_add(L_5, ((int32_t)(L_7/((int32_t)10))))))))
		{
			goto IL_003b;
		}
	}
	{
		// sb.Capacity = aText.Length + aText.Length / 10;
		StringBuilder_t* L_8 = V_0;
		String_t* L_9 = ___aText0;
		NullCheck(L_9);
		int32_t L_10;
		L_10 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_9, NULL);
		String_t* L_11 = ___aText0;
		NullCheck(L_11);
		int32_t L_12;
		L_12 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_11, NULL);
		NullCheck(L_8);
		StringBuilder_set_Capacity_m11BD24481D70C842320ADF7C959CC674D18AF574(L_8, ((int32_t)il2cpp_codegen_add(L_10, ((int32_t)(L_12/((int32_t)10))))), NULL);
	}

IL_003b:
	{
		// foreach (char c in aText)
		String_t* L_13 = ___aText0;
		V_2 = L_13;
		V_3 = 0;
		goto IL_0125;
	}

IL_0044:
	{
		// foreach (char c in aText)
		String_t* L_14 = V_2;
		int32_t L_15 = V_3;
		NullCheck(L_14);
		Il2CppChar L_16;
		L_16 = String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3(L_14, L_15, NULL);
		V_4 = L_16;
		Il2CppChar L_17 = V_4;
		switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_17, 8)))
		{
			case 0:
			{
				goto IL_00c6;
			}
			case 1:
			{
				goto IL_00b8;
			}
			case 2:
			{
				goto IL_009c;
			}
			case 3:
			{
				goto IL_00e2;
			}
			case 4:
			{
				goto IL_00d4;
			}
			case 5:
			{
				goto IL_00aa;
			}
		}
	}
	{
		Il2CppChar L_18 = V_4;
		if ((((int32_t)L_18) == ((int32_t)((int32_t)34))))
		{
			goto IL_008b;
		}
	}
	{
		Il2CppChar L_19 = V_4;
		if ((!(((uint32_t)L_19) == ((uint32_t)((int32_t)92)))))
		{
			goto IL_00e2;
		}
	}
	{
		// sb.Append("\\\\");
		StringBuilder_t* L_20 = V_0;
		NullCheck(L_20);
		StringBuilder_t* L_21;
		L_21 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_20, _stringLiteralF18840F490E42D3CE48CDCBF47229C1C240F8ABE, NULL);
		// break;
		goto IL_0121;
	}

IL_008b:
	{
		// sb.Append("\\\"");
		StringBuilder_t* L_22 = V_0;
		NullCheck(L_22);
		StringBuilder_t* L_23;
		L_23 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_22, _stringLiteral848E5ED630B3142F565DD995C6E8D30187ED33CD, NULL);
		// break;
		goto IL_0121;
	}

IL_009c:
	{
		// sb.Append("\\n");
		StringBuilder_t* L_24 = V_0;
		NullCheck(L_24);
		StringBuilder_t* L_25;
		L_25 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_24, _stringLiteral785F17F45C331C415D0A7458E6AAC36966399C51, NULL);
		// break;
		goto IL_0121;
	}

IL_00aa:
	{
		// sb.Append("\\r");
		StringBuilder_t* L_26 = V_0;
		NullCheck(L_26);
		StringBuilder_t* L_27;
		L_27 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_26, _stringLiteralB78F235D4291950A7D101307609C259F3E1F033F, NULL);
		// break;
		goto IL_0121;
	}

IL_00b8:
	{
		// sb.Append("\\t");
		StringBuilder_t* L_28 = V_0;
		NullCheck(L_28);
		StringBuilder_t* L_29;
		L_29 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_28, _stringLiteral7F3238CD8C342B06FB9AB185C610175C84625462, NULL);
		// break;
		goto IL_0121;
	}

IL_00c6:
	{
		// sb.Append("\\b");
		StringBuilder_t* L_30 = V_0;
		NullCheck(L_30);
		StringBuilder_t* L_31;
		L_31 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_30, _stringLiteral5962E944D7340CE47999BF097B4AFD70C1501FB9, NULL);
		// break;
		goto IL_0121;
	}

IL_00d4:
	{
		// sb.Append("\\f");
		StringBuilder_t* L_32 = V_0;
		NullCheck(L_32);
		StringBuilder_t* L_33;
		L_33 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_32, _stringLiteralA7C3FCA8C63E127B542B38A5CA5E3FEEDDD1B122, NULL);
		// break;
		goto IL_0121;
	}

IL_00e2:
	{
		// if (c < ' ' || (forceASCII && c > 127))
		Il2CppChar L_34 = V_4;
		if ((((int32_t)L_34) < ((int32_t)((int32_t)32))))
		{
			goto IL_00f5;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(JSONNode_tD29E53D2E1C8F91FF9FEA40F4F3A540857651D3B_il2cpp_TypeInfo_var);
		bool L_35 = ((JSONNode_tD29E53D2E1C8F91FF9FEA40F4F3A540857651D3B_StaticFields*)il2cpp_codegen_static_fields_for(JSONNode_tD29E53D2E1C8F91FF9FEA40F4F3A540857651D3B_il2cpp_TypeInfo_var))->___forceASCII_0;
		if (!L_35)
		{
			goto IL_0118;
		}
	}
	{
		Il2CppChar L_36 = V_4;
		if ((((int32_t)L_36) <= ((int32_t)((int32_t)127))))
		{
			goto IL_0118;
		}
	}

IL_00f5:
	{
		// ushort val = c;
		Il2CppChar L_37 = V_4;
		V_5 = L_37;
		// sb.Append("\\u").Append(val.ToString("X4"));
		StringBuilder_t* L_38 = V_0;
		NullCheck(L_38);
		StringBuilder_t* L_39;
		L_39 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_38, _stringLiteralDA666908BB15F4E1D2649752EC5DCBD0D5C64699, NULL);
		String_t* L_40;
		L_40 = UInt16_ToString_m75C61173B6A4DCF2D678D8A03EA713FEE29CC98C((&V_5), _stringLiteralD68508B50CDE1B2E777400476044304CB8149311, NULL);
		NullCheck(L_39);
		StringBuilder_t* L_41;
		L_41 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_39, L_40, NULL);
		goto IL_0121;
	}

IL_0118:
	{
		// sb.Append(c);
		StringBuilder_t* L_42 = V_0;
		Il2CppChar L_43 = V_4;
		NullCheck(L_42);
		StringBuilder_t* L_44;
		L_44 = StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1(L_42, L_43, NULL);
	}

IL_0121:
	{
		int32_t L_45 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_45, 1));
	}

IL_0125:
	{
		// foreach (char c in aText)
		int32_t L_46 = V_3;
		String_t* L_47 = V_2;
		NullCheck(L_47);
		int32_t L_48;
		L_48 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_47, NULL);
		if ((((int32_t)L_46) < ((int32_t)L_48)))
		{
			goto IL_0044;
		}
	}
	{
		// string result = sb.ToString();
		StringBuilder_t* L_49 = V_0;
		NullCheck(L_49);
		String_t* L_50;
		L_50 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_49);
		V_1 = L_50;
		// sb.Length = 0;
		StringBuilder_t* L_51 = V_0;
		NullCheck(L_51);
		StringBuilder_set_Length_mE2427BDAEF91C4E4A6C80F3BDF1F6E01DBCC2414(L_51, 0, NULL);
		// return result;
		String_t* L_52 = V_1;
		return L_52;
	}
}
// SimpleJSON.JSONNode SimpleJSON.JSONNode::ParseElement(System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR JSONNode_tD29E53D2E1C8F91FF9FEA40F4F3A540857651D3B* JSONNode_ParseElement_mEF537365D834DC136A62FE8C63255D4762B0EB63 (String_t* ___token0, bool ___quoted1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JSONNode_tD29E53D2E1C8F91FF9FEA40F4F3A540857651D3B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JSONNull_tEE66558FCE6029B3F1414C062F5E38E0530BD69A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5BEFD8CC60A79699B5BB00E37BAC5B62D371E174);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral77D38C0623F92B292B925F6E72CF5CF99A20D4EB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB7C45DD316C68ABF3429C20058C2981C652192F2);
		s_Il2CppMethodInitialized = true;
	}
	double V_0 = 0.0;
	String_t* V_1 = NULL;
	{
		// if (quoted)
		bool L_0 = ___quoted1;
		if (!L_0)
		{
			goto IL_000a;
		}
	}
	{
		// return token;
		String_t* L_1 = ___token0;
		il2cpp_codegen_runtime_class_init_inline(JSONNode_tD29E53D2E1C8F91FF9FEA40F4F3A540857651D3B_il2cpp_TypeInfo_var);
		JSONNode_tD29E53D2E1C8F91FF9FEA40F4F3A540857651D3B* L_2;
		L_2 = JSONNode_op_Implicit_m0273CFAA09D60AEFC1AAFE649B2802394FC772E6(L_1, NULL);
		return L_2;
	}

IL_000a:
	{
		// if (token.Length <= 5)
		String_t* L_3 = ___token0;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_3, NULL);
		if ((((int32_t)L_4) > ((int32_t)5)))
		{
			goto IL_0058;
		}
	}
	{
		// string tmp = token.ToLower();
		String_t* L_5 = ___token0;
		NullCheck(L_5);
		String_t* L_6;
		L_6 = String_ToLower_m6191ABA3DC514ED47C10BDA23FD0DDCEAE7ACFBD(L_5, NULL);
		V_1 = L_6;
		// if (tmp == "false" || tmp == "true")
		String_t* L_7 = V_1;
		bool L_8;
		L_8 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_7, _stringLiteral77D38C0623F92B292B925F6E72CF5CF99A20D4EB, NULL);
		if (L_8)
		{
			goto IL_0034;
		}
	}
	{
		String_t* L_9 = V_1;
		bool L_10;
		L_10 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_9, _stringLiteralB7C45DD316C68ABF3429C20058C2981C652192F2, NULL);
		if (!L_10)
		{
			goto IL_0045;
		}
	}

IL_0034:
	{
		// return tmp == "true";
		String_t* L_11 = V_1;
		bool L_12;
		L_12 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_11, _stringLiteralB7C45DD316C68ABF3429C20058C2981C652192F2, NULL);
		il2cpp_codegen_runtime_class_init_inline(JSONNode_tD29E53D2E1C8F91FF9FEA40F4F3A540857651D3B_il2cpp_TypeInfo_var);
		JSONNode_tD29E53D2E1C8F91FF9FEA40F4F3A540857651D3B* L_13;
		L_13 = JSONNode_op_Implicit_mB28D7F9C01D11BDC03113BBCAA6A209AC7F5BD69(L_12, NULL);
		return L_13;
	}

IL_0045:
	{
		// if (tmp == "null")
		String_t* L_14 = V_1;
		bool L_15;
		L_15 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_14, _stringLiteral5BEFD8CC60A79699B5BB00E37BAC5B62D371E174, NULL);
		if (!L_15)
		{
			goto IL_0058;
		}
	}
	{
		// return JSONNull.CreateOrGet();
		il2cpp_codegen_runtime_class_init_inline(JSONNull_tEE66558FCE6029B3F1414C062F5E38E0530BD69A_il2cpp_TypeInfo_var);
		JSONNull_tEE66558FCE6029B3F1414C062F5E38E0530BD69A* L_16;
		L_16 = JSONNull_CreateOrGet_m8A46E28FE2DA1E537F51FA071E580ABC21DB5701(NULL);
		return L_16;
	}

IL_0058:
	{
		// if (double.TryParse(token, NumberStyles.Float, CultureInfo.InvariantCulture, out val))
		String_t* L_17 = ___token0;
		il2cpp_codegen_runtime_class_init_inline(CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_il2cpp_TypeInfo_var);
		CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* L_18;
		L_18 = CultureInfo_get_InvariantCulture_m78DAB8CBE8766445310782B6E61FB7A9983AD425(NULL);
		bool L_19;
		L_19 = Double_TryParse_m6038C4DBF1789F1954938FF7F6D3459359CD7718(L_17, ((int32_t)167), L_18, (&V_0), NULL);
		if (!L_19)
		{
			goto IL_0073;
		}
	}
	{
		// return val;
		double L_20 = V_0;
		il2cpp_codegen_runtime_class_init_inline(JSONNode_tD29E53D2E1C8F91FF9FEA40F4F3A540857651D3B_il2cpp_TypeInfo_var);
		JSONNode_tD29E53D2E1C8F91FF9FEA40F4F3A540857651D3B* L_21;
		L_21 = JSONNode_op_Implicit_m88A137DBE16A359B2E1B549953A8E45A8D757D8B(L_20, NULL);
		return L_21;
	}

IL_0073:
	{
		// return token;
		String_t* L_22 = ___token0;
		il2cpp_codegen_runtime_class_init_inline(JSONNode_tD29E53D2E1C8F91FF9FEA40F4F3A540857651D3B_il2cpp_TypeInfo_var);
		JSONNode_tD29E53D2E1C8F91FF9FEA40F4F3A540857651D3B* L_23;
		L_23 = JSONNode_op_Implicit_m0273CFAA09D60AEFC1AAFE649B2802394FC772E6(L_22, NULL);
		return L_23;
	}
}
// SimpleJSON.JSONNode SimpleJSON.JSONNode::Parse(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR JSONNode_tD29E53D2E1C8F91FF9FEA40F4F3A540857651D3B* JSONNode_Parse_mD88F392BA303CB1BE616FA5B44E6ED8D7C2E7432 (String_t* ___aJSON0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JSONArray_tDB47C85E2DDB2CB4A972E4C0685D82E00490CB25_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JSONNode_tD29E53D2E1C8F91FF9FEA40F4F3A540857651D3B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JSONObject_tEA00D19860E34865B3D16312DD382C0901CAB654_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Stack_1_Peek_m85C942EF95437C87FCCE1BBD7F166192CE341D5D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Stack_1_Pop_m68E783CC815DA7056E83DBD8DEC3C550CD932DFB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Stack_1_Push_m4C5E04D7BA9297399CBD489C611AAD4840626FE9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Stack_1__ctor_m732686422E4C72ACBAD8662B06F74B702B1498D2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Stack_1_get_Count_m37B27F2261D562BBD092A5424B43E4F857CD561F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Stack_1_tD714EE61707D6A5034DEA764FF7763C53B9946B8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringBuilder_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		s_Il2CppMethodInitialized = true;
	}
	Stack_1_tD714EE61707D6A5034DEA764FF7763C53B9946B8* V_0 = NULL;
	JSONNode_tD29E53D2E1C8F91FF9FEA40F4F3A540857651D3B* V_1 = NULL;
	int32_t V_2 = 0;
	StringBuilder_t* V_3 = NULL;
	String_t* V_4 = NULL;
	bool V_5 = false;
	bool V_6 = false;
	bool V_7 = false;
	Il2CppChar V_8 = 0x0;
	Il2CppChar V_9 = 0x0;
	String_t* V_10 = NULL;
	{
		// Stack<JSONNode> stack = new Stack<JSONNode>();
		Stack_1_tD714EE61707D6A5034DEA764FF7763C53B9946B8* L_0 = (Stack_1_tD714EE61707D6A5034DEA764FF7763C53B9946B8*)il2cpp_codegen_object_new(Stack_1_tD714EE61707D6A5034DEA764FF7763C53B9946B8_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		Stack_1__ctor_m732686422E4C72ACBAD8662B06F74B702B1498D2(L_0, Stack_1__ctor_m732686422E4C72ACBAD8662B06F74B702B1498D2_RuntimeMethod_var);
		V_0 = L_0;
		// JSONNode ctx = null;
		V_1 = (JSONNode_tD29E53D2E1C8F91FF9FEA40F4F3A540857651D3B*)NULL;
		// int i = 0;
		V_2 = 0;
		// StringBuilder Token = new StringBuilder();
		StringBuilder_t* L_1 = (StringBuilder_t*)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		StringBuilder__ctor_m1D99713357DE05DAFA296633639DB55F8C30587D(L_1, NULL);
		V_3 = L_1;
		// string TokenName = "";
		V_4 = _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
		// bool QuoteMode = false;
		V_5 = (bool)0;
		// bool TokenIsQuoted = false;
		V_6 = (bool)0;
		// bool HasNewlineChar = false;
		V_7 = (bool)0;
		goto IL_03f0;
	}

IL_0025:
	{
		// switch (aJSON[i])
		String_t* L_2 = ___aJSON0;
		int32_t L_3 = V_2;
		NullCheck(L_2);
		Il2CppChar L_4;
		L_4 = String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3(L_2, L_3, NULL);
		V_8 = L_4;
		Il2CppChar L_5 = V_8;
		if ((!(((uint32_t)L_5) <= ((uint32_t)((int32_t)47)))))
		{
			goto IL_0086;
		}
	}
	{
		Il2CppChar L_6 = V_8;
		if ((!(((uint32_t)L_6) <= ((uint32_t)((int32_t)32)))))
		{
			goto IL_0066;
		}
	}
	{
		Il2CppChar L_7 = V_8;
		switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_7, ((int32_t)9))))
		{
			case 0:
			{
				goto IL_02a9;
			}
			case 1:
			{
				goto IL_02a1;
			}
			case 2:
			{
				goto IL_03de;
			}
			case 3:
			{
				goto IL_03de;
			}
			case 4:
			{
				goto IL_02a1;
			}
		}
	}
	{
		Il2CppChar L_8 = V_8;
		if ((((int32_t)L_8) == ((int32_t)((int32_t)32))))
		{
			goto IL_02a9;
		}
	}
	{
		goto IL_03de;
	}

IL_0066:
	{
		Il2CppChar L_9 = V_8;
		if ((((int32_t)L_9) == ((int32_t)((int32_t)34))))
		{
			goto IL_023b;
		}
	}
	{
		Il2CppChar L_10 = V_8;
		if ((((int32_t)L_10) == ((int32_t)((int32_t)44))))
		{
			goto IL_024e;
		}
	}
	{
		Il2CppChar L_11 = V_8;
		if ((((int32_t)L_11) == ((int32_t)((int32_t)47))))
		{
			goto IL_0386;
		}
	}
	{
		goto IL_03de;
	}

IL_0086:
	{
		Il2CppChar L_12 = V_8;
		if ((!(((uint32_t)L_12) <= ((uint32_t)((int32_t)93)))))
		{
			goto IL_00b0;
		}
	}
	{
		Il2CppChar L_13 = V_8;
		if ((((int32_t)L_13) == ((int32_t)((int32_t)58))))
		{
			goto IL_020d;
		}
	}
	{
		Il2CppChar L_14 = V_8;
		switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_14, ((int32_t)91))))
		{
			case 0:
			{
				goto IL_0126;
			}
			case 1:
			{
				goto IL_02c3;
			}
			case 2:
			{
				goto IL_017c;
			}
		}
	}
	{
		goto IL_03de;
	}

IL_00b0:
	{
		Il2CppChar L_15 = V_8;
		if ((((int32_t)L_15) == ((int32_t)((int32_t)123))))
		{
			goto IL_00d0;
		}
	}
	{
		Il2CppChar L_16 = V_8;
		if ((((int32_t)L_16) == ((int32_t)((int32_t)125))))
		{
			goto IL_017c;
		}
	}
	{
		Il2CppChar L_17 = V_8;
		if ((((int32_t)L_17) == ((int32_t)((int32_t)65279))))
		{
			goto IL_03ec;
		}
	}
	{
		goto IL_03de;
	}

IL_00d0:
	{
		// if (QuoteMode)
		bool L_18 = V_5;
		if (!L_18)
		{
			goto IL_00e7;
		}
	}
	{
		// Token.Append(aJSON[i]);
		StringBuilder_t* L_19 = V_3;
		String_t* L_20 = ___aJSON0;
		int32_t L_21 = V_2;
		NullCheck(L_20);
		Il2CppChar L_22;
		L_22 = String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3(L_20, L_21, NULL);
		NullCheck(L_19);
		StringBuilder_t* L_23;
		L_23 = StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1(L_19, L_22, NULL);
		// break;
		goto IL_03ec;
	}

IL_00e7:
	{
		// stack.Push(new JSONObject());
		Stack_1_tD714EE61707D6A5034DEA764FF7763C53B9946B8* L_24 = V_0;
		JSONObject_tEA00D19860E34865B3D16312DD382C0901CAB654* L_25 = (JSONObject_tEA00D19860E34865B3D16312DD382C0901CAB654*)il2cpp_codegen_object_new(JSONObject_tEA00D19860E34865B3D16312DD382C0901CAB654_il2cpp_TypeInfo_var);
		NullCheck(L_25);
		JSONObject__ctor_m8AA5877BC05D1BFF9F50D151C0ECF1E3F5C6BE2F(L_25, NULL);
		NullCheck(L_24);
		Stack_1_Push_m4C5E04D7BA9297399CBD489C611AAD4840626FE9(L_24, L_25, Stack_1_Push_m4C5E04D7BA9297399CBD489C611AAD4840626FE9_RuntimeMethod_var);
		// if (ctx != null)
		JSONNode_tD29E53D2E1C8F91FF9FEA40F4F3A540857651D3B* L_26 = V_1;
		il2cpp_codegen_runtime_class_init_inline(JSONNode_tD29E53D2E1C8F91FF9FEA40F4F3A540857651D3B_il2cpp_TypeInfo_var);
		bool L_27;
		L_27 = JSONNode_op_Inequality_m7050845D0269F25ED099612FACF1BB706EB45D30(L_26, NULL, NULL);
		if (!L_27)
		{
			goto IL_0109;
		}
	}
	{
		// ctx.Add(TokenName, stack.Peek());
		JSONNode_tD29E53D2E1C8F91FF9FEA40F4F3A540857651D3B* L_28 = V_1;
		String_t* L_29 = V_4;
		Stack_1_tD714EE61707D6A5034DEA764FF7763C53B9946B8* L_30 = V_0;
		NullCheck(L_30);
		JSONNode_tD29E53D2E1C8F91FF9FEA40F4F3A540857651D3B* L_31;
		L_31 = Stack_1_Peek_m85C942EF95437C87FCCE1BBD7F166192CE341D5D(L_30, Stack_1_Peek_m85C942EF95437C87FCCE1BBD7F166192CE341D5D_RuntimeMethod_var);
		NullCheck(L_28);
		VirtualActionInvoker2< String_t*, JSONNode_tD29E53D2E1C8F91FF9FEA40F4F3A540857651D3B* >::Invoke(20 /* System.Void SimpleJSON.JSONNode::Add(System.String,SimpleJSON.JSONNode) */, L_28, L_29, L_31);
	}

IL_0109:
	{
		// TokenName = "";
		V_4 = _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
		// Token.Length = 0;
		StringBuilder_t* L_32 = V_3;
		NullCheck(L_32);
		StringBuilder_set_Length_mE2427BDAEF91C4E4A6C80F3BDF1F6E01DBCC2414(L_32, 0, NULL);
		// ctx = stack.Peek();
		Stack_1_tD714EE61707D6A5034DEA764FF7763C53B9946B8* L_33 = V_0;
		NullCheck(L_33);
		JSONNode_tD29E53D2E1C8F91FF9FEA40F4F3A540857651D3B* L_34;
		L_34 = Stack_1_Peek_m85C942EF95437C87FCCE1BBD7F166192CE341D5D(L_33, Stack_1_Peek_m85C942EF95437C87FCCE1BBD7F166192CE341D5D_RuntimeMethod_var);
		V_1 = L_34;
		// HasNewlineChar = false;
		V_7 = (bool)0;
		// break;
		goto IL_03ec;
	}

IL_0126:
	{
		// if (QuoteMode)
		bool L_35 = V_5;
		if (!L_35)
		{
			goto IL_013d;
		}
	}
	{
		// Token.Append(aJSON[i]);
		StringBuilder_t* L_36 = V_3;
		String_t* L_37 = ___aJSON0;
		int32_t L_38 = V_2;
		NullCheck(L_37);
		Il2CppChar L_39;
		L_39 = String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3(L_37, L_38, NULL);
		NullCheck(L_36);
		StringBuilder_t* L_40;
		L_40 = StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1(L_36, L_39, NULL);
		// break;
		goto IL_03ec;
	}

IL_013d:
	{
		// stack.Push(new JSONArray());
		Stack_1_tD714EE61707D6A5034DEA764FF7763C53B9946B8* L_41 = V_0;
		JSONArray_tDB47C85E2DDB2CB4A972E4C0685D82E00490CB25* L_42 = (JSONArray_tDB47C85E2DDB2CB4A972E4C0685D82E00490CB25*)il2cpp_codegen_object_new(JSONArray_tDB47C85E2DDB2CB4A972E4C0685D82E00490CB25_il2cpp_TypeInfo_var);
		NullCheck(L_42);
		JSONArray__ctor_m19BBACE404D8C75AC41AC9CB4702C0943401D071(L_42, NULL);
		NullCheck(L_41);
		Stack_1_Push_m4C5E04D7BA9297399CBD489C611AAD4840626FE9(L_41, L_42, Stack_1_Push_m4C5E04D7BA9297399CBD489C611AAD4840626FE9_RuntimeMethod_var);
		// if (ctx != null)
		JSONNode_tD29E53D2E1C8F91FF9FEA40F4F3A540857651D3B* L_43 = V_1;
		il2cpp_codegen_runtime_class_init_inline(JSONNode_tD29E53D2E1C8F91FF9FEA40F4F3A540857651D3B_il2cpp_TypeInfo_var);
		bool L_44;
		L_44 = JSONNode_op_Inequality_m7050845D0269F25ED099612FACF1BB706EB45D30(L_43, NULL, NULL);
		if (!L_44)
		{
			goto IL_015f;
		}
	}
	{
		// ctx.Add(TokenName, stack.Peek());
		JSONNode_tD29E53D2E1C8F91FF9FEA40F4F3A540857651D3B* L_45 = V_1;
		String_t* L_46 = V_4;
		Stack_1_tD714EE61707D6A5034DEA764FF7763C53B9946B8* L_47 = V_0;
		NullCheck(L_47);
		JSONNode_tD29E53D2E1C8F91FF9FEA40F4F3A540857651D3B* L_48;
		L_48 = Stack_1_Peek_m85C942EF95437C87FCCE1BBD7F166192CE341D5D(L_47, Stack_1_Peek_m85C942EF95437C87FCCE1BBD7F166192CE341D5D_RuntimeMethod_var);
		NullCheck(L_45);
		VirtualActionInvoker2< String_t*, JSONNode_tD29E53D2E1C8F91FF9FEA40F4F3A540857651D3B* >::Invoke(20 /* System.Void SimpleJSON.JSONNode::Add(System.String,SimpleJSON.JSONNode) */, L_45, L_46, L_48);
	}

IL_015f:
	{
		// TokenName = "";
		V_4 = _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
		// Token.Length = 0;
		StringBuilder_t* L_49 = V_3;
		NullCheck(L_49);
		StringBuilder_set_Length_mE2427BDAEF91C4E4A6C80F3BDF1F6E01DBCC2414(L_49, 0, NULL);
		// ctx = stack.Peek();
		Stack_1_tD714EE61707D6A5034DEA764FF7763C53B9946B8* L_50 = V_0;
		NullCheck(L_50);
		JSONNode_tD29E53D2E1C8F91FF9FEA40F4F3A540857651D3B* L_51;
		L_51 = Stack_1_Peek_m85C942EF95437C87FCCE1BBD7F166192CE341D5D(L_50, Stack_1_Peek_m85C942EF95437C87FCCE1BBD7F166192CE341D5D_RuntimeMethod_var);
		V_1 = L_51;
		// HasNewlineChar = false;
		V_7 = (bool)0;
		// break;
		goto IL_03ec;
	}

IL_017c:
	{
		// if (QuoteMode)
		bool L_52 = V_5;
		if (!L_52)
		{
			goto IL_0193;
		}
	}
	{
		// Token.Append(aJSON[i]);
		StringBuilder_t* L_53 = V_3;
		String_t* L_54 = ___aJSON0;
		int32_t L_55 = V_2;
		NullCheck(L_54);
		Il2CppChar L_56;
		L_56 = String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3(L_54, L_55, NULL);
		NullCheck(L_53);
		StringBuilder_t* L_57;
		L_57 = StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1(L_53, L_56, NULL);
		// break;
		goto IL_03ec;
	}

IL_0193:
	{
		// if (stack.Count == 0)
		Stack_1_tD714EE61707D6A5034DEA764FF7763C53B9946B8* L_58 = V_0;
		NullCheck(L_58);
		int32_t L_59;
		L_59 = Stack_1_get_Count_m37B27F2261D562BBD092A5424B43E4F857CD561F_inline(L_58, Stack_1_get_Count_m37B27F2261D562BBD092A5424B43E4F857CD561F_RuntimeMethod_var);
		if (L_59)
		{
			goto IL_01a6;
		}
	}
	{
		// throw new Exception("JSON Parse: Too many closing brackets");
		Exception_t* L_60 = (Exception_t*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)));
		NullCheck(L_60);
		Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F(L_60, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral870C43A28360ADF668EFBACF63A4553351C7FA4C)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_60, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&JSONNode_Parse_mD88F392BA303CB1BE616FA5B44E6ED8D7C2E7432_RuntimeMethod_var)));
	}

IL_01a6:
	{
		// stack.Pop();
		Stack_1_tD714EE61707D6A5034DEA764FF7763C53B9946B8* L_61 = V_0;
		NullCheck(L_61);
		JSONNode_tD29E53D2E1C8F91FF9FEA40F4F3A540857651D3B* L_62;
		L_62 = Stack_1_Pop_m68E783CC815DA7056E83DBD8DEC3C550CD932DFB(L_61, Stack_1_Pop_m68E783CC815DA7056E83DBD8DEC3C550CD932DFB_RuntimeMethod_var);
		// if (Token.Length > 0 || TokenIsQuoted)
		StringBuilder_t* L_63 = V_3;
		NullCheck(L_63);
		int32_t L_64;
		L_64 = StringBuilder_get_Length_mDEA041E7357C68CC3B5885276BB403676DAAE0D8(L_63, NULL);
		bool L_65 = V_6;
		if (!((int32_t)(((((int32_t)L_64) > ((int32_t)0))? 1 : 0)|(int32_t)L_65)))
		{
			goto IL_01d0;
		}
	}
	{
		// ctx.Add(TokenName, ParseElement(Token.ToString(), TokenIsQuoted));
		JSONNode_tD29E53D2E1C8F91FF9FEA40F4F3A540857651D3B* L_66 = V_1;
		String_t* L_67 = V_4;
		StringBuilder_t* L_68 = V_3;
		NullCheck(L_68);
		String_t* L_69;
		L_69 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_68);
		bool L_70 = V_6;
		il2cpp_codegen_runtime_class_init_inline(JSONNode_tD29E53D2E1C8F91FF9FEA40F4F3A540857651D3B_il2cpp_TypeInfo_var);
		JSONNode_tD29E53D2E1C8F91FF9FEA40F4F3A540857651D3B* L_71;
		L_71 = JSONNode_ParseElement_mEF537365D834DC136A62FE8C63255D4762B0EB63(L_69, L_70, NULL);
		NullCheck(L_66);
		VirtualActionInvoker2< String_t*, JSONNode_tD29E53D2E1C8F91FF9FEA40F4F3A540857651D3B* >::Invoke(20 /* System.Void SimpleJSON.JSONNode::Add(System.String,SimpleJSON.JSONNode) */, L_66, L_67, L_71);
	}

IL_01d0:
	{
		// if (ctx != null)
		JSONNode_tD29E53D2E1C8F91FF9FEA40F4F3A540857651D3B* L_72 = V_1;
		il2cpp_codegen_runtime_class_init_inline(JSONNode_tD29E53D2E1C8F91FF9FEA40F4F3A540857651D3B_il2cpp_TypeInfo_var);
		bool L_73;
		L_73 = JSONNode_op_Inequality_m7050845D0269F25ED099612FACF1BB706EB45D30(L_72, NULL, NULL);
		if (!L_73)
		{
			goto IL_01e4;
		}
	}
	{
		// ctx.Inline = !HasNewlineChar;
		JSONNode_tD29E53D2E1C8F91FF9FEA40F4F3A540857651D3B* L_74 = V_1;
		bool L_75 = V_7;
		NullCheck(L_74);
		VirtualActionInvoker1< bool >::Invoke(19 /* System.Void SimpleJSON.JSONNode::set_Inline(System.Boolean) */, L_74, (bool)((((int32_t)L_75) == ((int32_t)0))? 1 : 0));
	}

IL_01e4:
	{
		// TokenIsQuoted = false;
		V_6 = (bool)0;
		// TokenName = "";
		V_4 = _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
		// Token.Length = 0;
		StringBuilder_t* L_76 = V_3;
		NullCheck(L_76);
		StringBuilder_set_Length_mE2427BDAEF91C4E4A6C80F3BDF1F6E01DBCC2414(L_76, 0, NULL);
		// if (stack.Count > 0)
		Stack_1_tD714EE61707D6A5034DEA764FF7763C53B9946B8* L_77 = V_0;
		NullCheck(L_77);
		int32_t L_78;
		L_78 = Stack_1_get_Count_m37B27F2261D562BBD092A5424B43E4F857CD561F_inline(L_77, Stack_1_get_Count_m37B27F2261D562BBD092A5424B43E4F857CD561F_RuntimeMethod_var);
		if ((((int32_t)L_78) <= ((int32_t)0)))
		{
			goto IL_03ec;
		}
	}
	{
		// ctx = stack.Peek();
		Stack_1_tD714EE61707D6A5034DEA764FF7763C53B9946B8* L_79 = V_0;
		NullCheck(L_79);
		JSONNode_tD29E53D2E1C8F91FF9FEA40F4F3A540857651D3B* L_80;
		L_80 = Stack_1_Peek_m85C942EF95437C87FCCE1BBD7F166192CE341D5D(L_79, Stack_1_Peek_m85C942EF95437C87FCCE1BBD7F166192CE341D5D_RuntimeMethod_var);
		V_1 = L_80;
		// break;
		goto IL_03ec;
	}

IL_020d:
	{
		// if (QuoteMode)
		bool L_81 = V_5;
		if (!L_81)
		{
			goto IL_0224;
		}
	}
	{
		// Token.Append(aJSON[i]);
		StringBuilder_t* L_82 = V_3;
		String_t* L_83 = ___aJSON0;
		int32_t L_84 = V_2;
		NullCheck(L_83);
		Il2CppChar L_85;
		L_85 = String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3(L_83, L_84, NULL);
		NullCheck(L_82);
		StringBuilder_t* L_86;
		L_86 = StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1(L_82, L_85, NULL);
		// break;
		goto IL_03ec;
	}

IL_0224:
	{
		// TokenName = Token.ToString();
		StringBuilder_t* L_87 = V_3;
		NullCheck(L_87);
		String_t* L_88;
		L_88 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_87);
		V_4 = L_88;
		// Token.Length = 0;
		StringBuilder_t* L_89 = V_3;
		NullCheck(L_89);
		StringBuilder_set_Length_mE2427BDAEF91C4E4A6C80F3BDF1F6E01DBCC2414(L_89, 0, NULL);
		// TokenIsQuoted = false;
		V_6 = (bool)0;
		// break;
		goto IL_03ec;
	}

IL_023b:
	{
		// QuoteMode ^= true;
		bool L_90 = V_5;
		V_5 = (bool)((((int32_t)L_90) == ((int32_t)0))? 1 : 0);
		// TokenIsQuoted |= QuoteMode;
		bool L_91 = V_6;
		bool L_92 = V_5;
		V_6 = (bool)((int32_t)((int32_t)L_91|(int32_t)L_92));
		// break;
		goto IL_03ec;
	}

IL_024e:
	{
		// if (QuoteMode)
		bool L_93 = V_5;
		if (!L_93)
		{
			goto IL_0265;
		}
	}
	{
		// Token.Append(aJSON[i]);
		StringBuilder_t* L_94 = V_3;
		String_t* L_95 = ___aJSON0;
		int32_t L_96 = V_2;
		NullCheck(L_95);
		Il2CppChar L_97;
		L_97 = String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3(L_95, L_96, NULL);
		NullCheck(L_94);
		StringBuilder_t* L_98;
		L_98 = StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1(L_94, L_97, NULL);
		// break;
		goto IL_03ec;
	}

IL_0265:
	{
		// if (Token.Length > 0 || TokenIsQuoted)
		StringBuilder_t* L_99 = V_3;
		NullCheck(L_99);
		int32_t L_100;
		L_100 = StringBuilder_get_Length_mDEA041E7357C68CC3B5885276BB403676DAAE0D8(L_99, NULL);
		bool L_101 = V_6;
		if (!((int32_t)(((((int32_t)L_100) > ((int32_t)0))? 1 : 0)|(int32_t)L_101)))
		{
			goto IL_0288;
		}
	}
	{
		// ctx.Add(TokenName, ParseElement(Token.ToString(), TokenIsQuoted));
		JSONNode_tD29E53D2E1C8F91FF9FEA40F4F3A540857651D3B* L_102 = V_1;
		String_t* L_103 = V_4;
		StringBuilder_t* L_104 = V_3;
		NullCheck(L_104);
		String_t* L_105;
		L_105 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_104);
		bool L_106 = V_6;
		il2cpp_codegen_runtime_class_init_inline(JSONNode_tD29E53D2E1C8F91FF9FEA40F4F3A540857651D3B_il2cpp_TypeInfo_var);
		JSONNode_tD29E53D2E1C8F91FF9FEA40F4F3A540857651D3B* L_107;
		L_107 = JSONNode_ParseElement_mEF537365D834DC136A62FE8C63255D4762B0EB63(L_105, L_106, NULL);
		NullCheck(L_102);
		VirtualActionInvoker2< String_t*, JSONNode_tD29E53D2E1C8F91FF9FEA40F4F3A540857651D3B* >::Invoke(20 /* System.Void SimpleJSON.JSONNode::Add(System.String,SimpleJSON.JSONNode) */, L_102, L_103, L_107);
	}

IL_0288:
	{
		// TokenIsQuoted = false;
		V_6 = (bool)0;
		// TokenName = "";
		V_4 = _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
		// Token.Length = 0;
		StringBuilder_t* L_108 = V_3;
		NullCheck(L_108);
		StringBuilder_set_Length_mE2427BDAEF91C4E4A6C80F3BDF1F6E01DBCC2414(L_108, 0, NULL);
		// TokenIsQuoted = false;
		V_6 = (bool)0;
		// break;
		goto IL_03ec;
	}

IL_02a1:
	{
		// HasNewlineChar = true;
		V_7 = (bool)1;
		// break;
		goto IL_03ec;
	}

IL_02a9:
	{
		// if (QuoteMode)
		bool L_109 = V_5;
		if (!L_109)
		{
			goto IL_03ec;
		}
	}
	{
		// Token.Append(aJSON[i]);
		StringBuilder_t* L_110 = V_3;
		String_t* L_111 = ___aJSON0;
		int32_t L_112 = V_2;
		NullCheck(L_111);
		Il2CppChar L_113;
		L_113 = String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3(L_111, L_112, NULL);
		NullCheck(L_110);
		StringBuilder_t* L_114;
		L_114 = StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1(L_110, L_113, NULL);
		// break;
		goto IL_03ec;
	}

IL_02c3:
	{
		// ++i;
		int32_t L_115 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_115, 1));
		// if (QuoteMode)
		bool L_116 = V_5;
		if (!L_116)
		{
			goto IL_03ec;
		}
	}
	{
		// char C = aJSON[i];
		String_t* L_117 = ___aJSON0;
		int32_t L_118 = V_2;
		NullCheck(L_117);
		Il2CppChar L_119;
		L_119 = String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3(L_117, L_118, NULL);
		V_9 = L_119;
		Il2CppChar L_120 = V_9;
		if ((!(((uint32_t)L_120) <= ((uint32_t)((int32_t)102)))))
		{
			goto IL_02ee;
		}
	}
	{
		Il2CppChar L_121 = V_9;
		if ((((int32_t)L_121) == ((int32_t)((int32_t)98))))
		{
			goto IL_033a;
		}
	}
	{
		Il2CppChar L_122 = V_9;
		if ((((int32_t)L_122) == ((int32_t)((int32_t)102))))
		{
			goto IL_0347;
		}
	}
	{
		goto IL_037b;
	}

IL_02ee:
	{
		Il2CppChar L_123 = V_9;
		if ((((int32_t)L_123) == ((int32_t)((int32_t)110))))
		{
			goto IL_032c;
		}
	}
	{
		Il2CppChar L_124 = V_9;
		switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_124, ((int32_t)114))))
		{
			case 0:
			{
				goto IL_031e;
			}
			case 1:
			{
				goto IL_037b;
			}
			case 2:
			{
				goto IL_0310;
			}
			case 3:
			{
				goto IL_0355;
			}
		}
	}
	{
		goto IL_037b;
	}

IL_0310:
	{
		// Token.Append('\t');
		StringBuilder_t* L_125 = V_3;
		NullCheck(L_125);
		StringBuilder_t* L_126;
		L_126 = StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1(L_125, ((int32_t)9), NULL);
		// break;
		goto IL_03ec;
	}

IL_031e:
	{
		// Token.Append('\r');
		StringBuilder_t* L_127 = V_3;
		NullCheck(L_127);
		StringBuilder_t* L_128;
		L_128 = StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1(L_127, ((int32_t)13), NULL);
		// break;
		goto IL_03ec;
	}

IL_032c:
	{
		// Token.Append('\n');
		StringBuilder_t* L_129 = V_3;
		NullCheck(L_129);
		StringBuilder_t* L_130;
		L_130 = StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1(L_129, ((int32_t)10), NULL);
		// break;
		goto IL_03ec;
	}

IL_033a:
	{
		// Token.Append('\b');
		StringBuilder_t* L_131 = V_3;
		NullCheck(L_131);
		StringBuilder_t* L_132;
		L_132 = StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1(L_131, 8, NULL);
		// break;
		goto IL_03ec;
	}

IL_0347:
	{
		// Token.Append('\f');
		StringBuilder_t* L_133 = V_3;
		NullCheck(L_133);
		StringBuilder_t* L_134;
		L_134 = StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1(L_133, ((int32_t)12), NULL);
		// break;
		goto IL_03ec;
	}

IL_0355:
	{
		// string s = aJSON.Substring(i + 1, 4);
		String_t* L_135 = ___aJSON0;
		int32_t L_136 = V_2;
		NullCheck(L_135);
		String_t* L_137;
		L_137 = String_Substring_mB1D94F47935D22E130FF2C01DBB6A4135FBB76CE(L_135, ((int32_t)il2cpp_codegen_add(L_136, 1)), 4, NULL);
		V_10 = L_137;
		// Token.Append((char)int.Parse(
		//     s,
		//     System.Globalization.NumberStyles.AllowHexSpecifier));
		StringBuilder_t* L_138 = V_3;
		String_t* L_139 = V_10;
		int32_t L_140;
		L_140 = Int32_Parse_m12C1D8F205085184F8D676DD7A1A39F1495B613A(L_139, ((int32_t)512), NULL);
		NullCheck(L_138);
		StringBuilder_t* L_141;
		L_141 = StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1(L_138, ((int32_t)(uint16_t)L_140), NULL);
		// i += 4;
		int32_t L_142 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_142, 4));
		// break;
		goto IL_03ec;
	}

IL_037b:
	{
		// Token.Append(C);
		StringBuilder_t* L_143 = V_3;
		Il2CppChar L_144 = V_9;
		NullCheck(L_143);
		StringBuilder_t* L_145;
		L_145 = StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1(L_143, L_144, NULL);
		// break;
		goto IL_03ec;
	}

IL_0386:
	{
		// if (allowLineComments && !QuoteMode && i + 1 < aJSON.Length && aJSON[i + 1] == '/')
		il2cpp_codegen_runtime_class_init_inline(JSONNode_tD29E53D2E1C8F91FF9FEA40F4F3A540857651D3B_il2cpp_TypeInfo_var);
		bool L_146 = ((JSONNode_tD29E53D2E1C8F91FF9FEA40F4F3A540857651D3B_StaticFields*)il2cpp_codegen_static_fields_for(JSONNode_tD29E53D2E1C8F91FF9FEA40F4F3A540857651D3B_il2cpp_TypeInfo_var))->___allowLineComments_2;
		if (!L_146)
		{
			goto IL_03ce;
		}
	}
	{
		bool L_147 = V_5;
		if (L_147)
		{
			goto IL_03ce;
		}
	}
	{
		int32_t L_148 = V_2;
		String_t* L_149 = ___aJSON0;
		NullCheck(L_149);
		int32_t L_150;
		L_150 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_149, NULL);
		if ((((int32_t)((int32_t)il2cpp_codegen_add(L_148, 1))) >= ((int32_t)L_150)))
		{
			goto IL_03ce;
		}
	}
	{
		String_t* L_151 = ___aJSON0;
		int32_t L_152 = V_2;
		NullCheck(L_151);
		Il2CppChar L_153;
		L_153 = String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3(L_151, ((int32_t)il2cpp_codegen_add(L_152, 1)), NULL);
		if ((!(((uint32_t)L_153) == ((uint32_t)((int32_t)47)))))
		{
			goto IL_03ce;
		}
	}

IL_03a9:
	{
		// while (++i < aJSON.Length && aJSON[i] != '\n' && aJSON[i] != '\r') ;
		int32_t L_154 = V_2;
		int32_t L_155 = ((int32_t)il2cpp_codegen_add(L_154, 1));
		V_2 = L_155;
		String_t* L_156 = ___aJSON0;
		NullCheck(L_156);
		int32_t L_157;
		L_157 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_156, NULL);
		if ((((int32_t)L_155) >= ((int32_t)L_157)))
		{
			goto IL_03ec;
		}
	}
	{
		String_t* L_158 = ___aJSON0;
		int32_t L_159 = V_2;
		NullCheck(L_158);
		Il2CppChar L_160;
		L_160 = String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3(L_158, L_159, NULL);
		if ((((int32_t)L_160) == ((int32_t)((int32_t)10))))
		{
			goto IL_03ec;
		}
	}
	{
		String_t* L_161 = ___aJSON0;
		int32_t L_162 = V_2;
		NullCheck(L_161);
		Il2CppChar L_163;
		L_163 = String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3(L_161, L_162, NULL);
		if ((!(((uint32_t)L_163) == ((uint32_t)((int32_t)13)))))
		{
			goto IL_03a9;
		}
	}
	{
		// break;
		goto IL_03ec;
	}

IL_03ce:
	{
		// Token.Append(aJSON[i]);
		StringBuilder_t* L_164 = V_3;
		String_t* L_165 = ___aJSON0;
		int32_t L_166 = V_2;
		NullCheck(L_165);
		Il2CppChar L_167;
		L_167 = String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3(L_165, L_166, NULL);
		NullCheck(L_164);
		StringBuilder_t* L_168;
		L_168 = StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1(L_164, L_167, NULL);
		// break;
		goto IL_03ec;
	}

IL_03de:
	{
		// Token.Append(aJSON[i]);
		StringBuilder_t* L_169 = V_3;
		String_t* L_170 = ___aJSON0;
		int32_t L_171 = V_2;
		NullCheck(L_170);
		Il2CppChar L_172;
		L_172 = String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3(L_170, L_171, NULL);
		NullCheck(L_169);
		StringBuilder_t* L_173;
		L_173 = StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1(L_169, L_172, NULL);
	}

IL_03ec:
	{
		// ++i;
		int32_t L_174 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_174, 1));
	}

IL_03f0:
	{
		// while (i < aJSON.Length)
		int32_t L_175 = V_2;
		String_t* L_176 = ___aJSON0;
		NullCheck(L_176);
		int32_t L_177;
		L_177 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_176, NULL);
		if ((((int32_t)L_175) < ((int32_t)L_177)))
		{
			goto IL_0025;
		}
	}
	{
		// if (QuoteMode)
		bool L_178 = V_5;
		if (!L_178)
		{
			goto IL_040b;
		}
	}
	{
		// throw new Exception("JSON Parse: Quotation marks seems to be messed up.");
		Exception_t* L_179 = (Exception_t*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)));
		NullCheck(L_179);
		Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F(L_179, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralBF00FC1AEA59DE3445148D940526441AD4E1FFA7)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_179, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&JSONNode_Parse_mD88F392BA303CB1BE616FA5B44E6ED8D7C2E7432_RuntimeMethod_var)));
	}

IL_040b:
	{
		// if (ctx == null)
		JSONNode_tD29E53D2E1C8F91FF9FEA40F4F3A540857651D3B* L_180 = V_1;
		il2cpp_codegen_runtime_class_init_inline(JSONNode_tD29E53D2E1C8F91FF9FEA40F4F3A540857651D3B_il2cpp_TypeInfo_var);
		bool L_181;
		L_181 = JSONNode_op_Equality_mA07D467DFB678DC61E7B2A43E87B7D4F6CB5B556(L_180, NULL, NULL);
		if (!L_181)
		{
			goto IL_0422;
		}
	}
	{
		// return ParseElement(Token.ToString(), TokenIsQuoted);
		StringBuilder_t* L_182 = V_3;
		NullCheck(L_182);
		String_t* L_183;
		L_183 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_182);
		bool L_184 = V_6;
		il2cpp_codegen_runtime_class_init_inline(JSONNode_tD29E53D2E1C8F91FF9FEA40F4F3A540857651D3B_il2cpp_TypeInfo_var);
		JSONNode_tD29E53D2E1C8F91FF9FEA40F4F3A540857651D3B* L_185;
		L_185 = JSONNode_ParseElement_mEF537365D834DC136A62FE8C63255D4762B0EB63(L_183, L_184, NULL);
		return L_185;
	}

IL_0422:
	{
		// return ctx;
		JSONNode_tD29E53D2E1C8F91FF9FEA40F4F3A540857651D3B* L_186 = V_1;
		return L_186;
	}
}
// System.Void SimpleJSON.JSONNode::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JSONNode__ctor_m4019E01BCFB43E3848591C3E8C97534BA8BC6C49 (JSONNode_tD29E53D2E1C8F91FF9FEA40F4F3A540857651D3B* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Void SimpleJSON.JSONNode::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JSONNode__cctor_m36018B2959F11606EEE382D6DD2720EAAD664B09 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JSONNode_tD29E53D2E1C8F91FF9FEA40F4F3A540857651D3B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static bool forceASCII = false; // Use Unicode by default
		((JSONNode_tD29E53D2E1C8F91FF9FEA40F4F3A540857651D3B_StaticFields*)il2cpp_codegen_static_fields_for(JSONNode_tD29E53D2E1C8F91FF9FEA40F4F3A540857651D3B_il2cpp_TypeInfo_var))->___forceASCII_0 = (bool)0;
		// public static bool longAsString = false; // lazy creator creates a JSONString instead of JSONNumber
		((JSONNode_tD29E53D2E1C8F91FF9FEA40F4F3A540857651D3B_StaticFields*)il2cpp_codegen_static_fields_for(JSONNode_tD29E53D2E1C8F91FF9FEA40F4F3A540857651D3B_il2cpp_TypeInfo_var))->___longAsString_1 = (bool)0;
		// public static bool allowLineComments = true; // allow "//"-style comments at the end of a line
		((JSONNode_tD29E53D2E1C8F91FF9FEA40F4F3A540857651D3B_StaticFields*)il2cpp_codegen_static_fields_for(JSONNode_tD29E53D2E1C8F91FF9FEA40F4F3A540857651D3B_il2cpp_TypeInfo_var))->___allowLineComments_2 = (bool)1;
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
// Conversion methods for marshalling of: SimpleJSON.JSONNode/Enumerator
IL2CPP_EXTERN_C void Enumerator_tA1F999D27FB3CE7FB0AC8D9BD4084CBA9E687C1F_marshal_pinvoke(const Enumerator_tA1F999D27FB3CE7FB0AC8D9BD4084CBA9E687C1F& unmarshaled, Enumerator_tA1F999D27FB3CE7FB0AC8D9BD4084CBA9E687C1F_marshaled_pinvoke& marshaled)
{
	Exception_t* ___m_Object_1Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'm_Object' of type 'Enumerator'.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___m_Object_1Exception, NULL);
}
IL2CPP_EXTERN_C void Enumerator_tA1F999D27FB3CE7FB0AC8D9BD4084CBA9E687C1F_marshal_pinvoke_back(const Enumerator_tA1F999D27FB3CE7FB0AC8D9BD4084CBA9E687C1F_marshaled_pinvoke& marshaled, Enumerator_tA1F999D27FB3CE7FB0AC8D9BD4084CBA9E687C1F& unmarshaled)
{
	Exception_t* ___m_Object_1Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'm_Object' of type 'Enumerator'.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___m_Object_1Exception, NULL);
}
// Conversion method for clean up from marshalling of: SimpleJSON.JSONNode/Enumerator
IL2CPP_EXTERN_C void Enumerator_tA1F999D27FB3CE7FB0AC8D9BD4084CBA9E687C1F_marshal_pinvoke_cleanup(Enumerator_tA1F999D27FB3CE7FB0AC8D9BD4084CBA9E687C1F_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: SimpleJSON.JSONNode/Enumerator
IL2CPP_EXTERN_C void Enumerator_tA1F999D27FB3CE7FB0AC8D9BD4084CBA9E687C1F_marshal_com(const Enumerator_tA1F999D27FB3CE7FB0AC8D9BD4084CBA9E687C1F& unmarshaled, Enumerator_tA1F999D27FB3CE7FB0AC8D9BD4084CBA9E687C1F_marshaled_com& marshaled)
{
	Exception_t* ___m_Object_1Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'm_Object' of type 'Enumerator'.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___m_Object_1Exception, NULL);
}
IL2CPP_EXTERN_C void Enumerator_tA1F999D27FB3CE7FB0AC8D9BD4084CBA9E687C1F_marshal_com_back(const Enumerator_tA1F999D27FB3CE7FB0AC8D9BD4084CBA9E687C1F_marshaled_com& marshaled, Enumerator_tA1F999D27FB3CE7FB0AC8D9BD4084CBA9E687C1F& unmarshaled)
{
	Exception_t* ___m_Object_1Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'm_Object' of type 'Enumerator'.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___m_Object_1Exception, NULL);
}
// Conversion method for clean up from marshalling of: SimpleJSON.JSONNode/Enumerator
IL2CPP_EXTERN_C void Enumerator_tA1F999D27FB3CE7FB0AC8D9BD4084CBA9E687C1F_marshal_com_cleanup(Enumerator_tA1F999D27FB3CE7FB0AC8D9BD4084CBA9E687C1F_marshaled_com& marshaled)
{
}
// System.Boolean SimpleJSON.JSONNode/Enumerator::get_IsValid()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_get_IsValid_mA6F7A33BCEC4C31BBEBF2D467944A119F2D15075 (Enumerator_tA1F999D27FB3CE7FB0AC8D9BD4084CBA9E687C1F* __this, const RuntimeMethod* method) 
{
	{
		// public bool IsValid { get { return type != Type.None; } }
		int32_t L_0 = __this->___type_0;
		return (bool)((!(((uint32_t)L_0) <= ((uint32_t)0)))? 1 : 0);
	}
}
IL2CPP_EXTERN_C  bool Enumerator_get_IsValid_mA6F7A33BCEC4C31BBEBF2D467944A119F2D15075_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	Enumerator_tA1F999D27FB3CE7FB0AC8D9BD4084CBA9E687C1F* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Enumerator_tA1F999D27FB3CE7FB0AC8D9BD4084CBA9E687C1F*>(__this + _offset);
	bool _returnValue;
	_returnValue = Enumerator_get_IsValid_mA6F7A33BCEC4C31BBEBF2D467944A119F2D15075(_thisAdjusted, method);
	return _returnValue;
}
// System.Void SimpleJSON.JSONNode/Enumerator::.ctor(System.Collections.Generic.List`1/Enumerator<SimpleJSON.JSONNode>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator__ctor_m2D9317706FE33C279EEE64ADBA3A301F86CBD5A4 (Enumerator_tA1F999D27FB3CE7FB0AC8D9BD4084CBA9E687C1F* __this, Enumerator_t81A423E0F04B93279CA04B31DF14EDE9DE3F30AA ___aArrayEnum0, const RuntimeMethod* method) 
{
	{
		// type = Type.Array;
		__this->___type_0 = 1;
		// m_Object = default(Dictionary<string, JSONNode>.Enumerator);
		Enumerator_t1B0916EAA662F17AFF7BDA682F6213FDBE55A48F* L_0 = (&__this->___m_Object_1);
		il2cpp_codegen_initobj(L_0, sizeof(Enumerator_t1B0916EAA662F17AFF7BDA682F6213FDBE55A48F));
		// m_Array = aArrayEnum;
		Enumerator_t81A423E0F04B93279CA04B31DF14EDE9DE3F30AA L_1 = ___aArrayEnum0;
		__this->___m_Array_2 = L_1;
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___m_Array_2))->____list_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___m_Array_2))->____current_3), (void*)NULL);
		#endif
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void Enumerator__ctor_m2D9317706FE33C279EEE64ADBA3A301F86CBD5A4_AdjustorThunk (RuntimeObject* __this, Enumerator_t81A423E0F04B93279CA04B31DF14EDE9DE3F30AA ___aArrayEnum0, const RuntimeMethod* method)
{
	Enumerator_tA1F999D27FB3CE7FB0AC8D9BD4084CBA9E687C1F* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Enumerator_tA1F999D27FB3CE7FB0AC8D9BD4084CBA9E687C1F*>(__this + _offset);
	Enumerator__ctor_m2D9317706FE33C279EEE64ADBA3A301F86CBD5A4(_thisAdjusted, ___aArrayEnum0, method);
}
// System.Void SimpleJSON.JSONNode/Enumerator::.ctor(System.Collections.Generic.Dictionary`2/Enumerator<System.String,SimpleJSON.JSONNode>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator__ctor_m1A8A3ED7B68073F1236B0EDBA01A2D96DDB55885 (Enumerator_tA1F999D27FB3CE7FB0AC8D9BD4084CBA9E687C1F* __this, Enumerator_t1B0916EAA662F17AFF7BDA682F6213FDBE55A48F ___aDictEnum0, const RuntimeMethod* method) 
{
	{
		// type = Type.Object;
		__this->___type_0 = 2;
		// m_Object = aDictEnum;
		Enumerator_t1B0916EAA662F17AFF7BDA682F6213FDBE55A48F L_0 = ___aDictEnum0;
		__this->___m_Object_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___m_Object_1))->____dictionary_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___m_Object_1))->____current_3))->___key_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___m_Object_1))->____current_3))->___value_1), (void*)NULL);
		#endif
		// m_Array = default(List<JSONNode>.Enumerator);
		Enumerator_t81A423E0F04B93279CA04B31DF14EDE9DE3F30AA* L_1 = (&__this->___m_Array_2);
		il2cpp_codegen_initobj(L_1, sizeof(Enumerator_t81A423E0F04B93279CA04B31DF14EDE9DE3F30AA));
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void Enumerator__ctor_m1A8A3ED7B68073F1236B0EDBA01A2D96DDB55885_AdjustorThunk (RuntimeObject* __this, Enumerator_t1B0916EAA662F17AFF7BDA682F6213FDBE55A48F ___aDictEnum0, const RuntimeMethod* method)
{
	Enumerator_tA1F999D27FB3CE7FB0AC8D9BD4084CBA9E687C1F* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Enumerator_tA1F999D27FB3CE7FB0AC8D9BD4084CBA9E687C1F*>(__this + _offset);
	Enumerator__ctor_m1A8A3ED7B68073F1236B0EDBA01A2D96DDB55885(_thisAdjusted, ___aDictEnum0, method);
}
// System.Collections.Generic.KeyValuePair`2<System.String,SimpleJSON.JSONNode> SimpleJSON.JSONNode/Enumerator::get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR KeyValuePair_2_tD59618B150F9D38FE8CF312BB48DB72E7ECC4E9C Enumerator_get_Current_m1CC1D772B74212E0E3C2F6951EDCC16336A51CE0 (Enumerator_tA1F999D27FB3CE7FB0AC8D9BD4084CBA9E687C1F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m44F4D4F7899D0688C1E68E1457EBDBC2D26F91CC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m588061B1765C95AD6BDEC8EA8FBE37BDA51EAC5E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyValuePair_2__ctor_mE106F3C8BA6A87DA978B202073346ACDBCECA0D8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (type == Type.Array)
		int32_t L_0 = __this->___type_0;
		if ((!(((uint32_t)L_0) == ((uint32_t)1))))
		{
			goto IL_001f;
		}
	}
	{
		// return new KeyValuePair<string, JSONNode>(string.Empty, m_Array.Current);
		String_t* L_1 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
		Enumerator_t81A423E0F04B93279CA04B31DF14EDE9DE3F30AA* L_2 = (&__this->___m_Array_2);
		JSONNode_tD29E53D2E1C8F91FF9FEA40F4F3A540857651D3B* L_3;
		L_3 = Enumerator_get_Current_m44F4D4F7899D0688C1E68E1457EBDBC2D26F91CC_inline(L_2, Enumerator_get_Current_m44F4D4F7899D0688C1E68E1457EBDBC2D26F91CC_RuntimeMethod_var);
		KeyValuePair_2_tD59618B150F9D38FE8CF312BB48DB72E7ECC4E9C L_4;
		memset((&L_4), 0, sizeof(L_4));
		KeyValuePair_2__ctor_mE106F3C8BA6A87DA978B202073346ACDBCECA0D8((&L_4), L_1, L_3, /*hidden argument*/KeyValuePair_2__ctor_mE106F3C8BA6A87DA978B202073346ACDBCECA0D8_RuntimeMethod_var);
		return L_4;
	}

IL_001f:
	{
		// else if (type == Type.Object)
		int32_t L_5 = __this->___type_0;
		if ((!(((uint32_t)L_5) == ((uint32_t)2))))
		{
			goto IL_0034;
		}
	}
	{
		// return m_Object.Current;
		Enumerator_t1B0916EAA662F17AFF7BDA682F6213FDBE55A48F* L_6 = (&__this->___m_Object_1);
		KeyValuePair_2_tD59618B150F9D38FE8CF312BB48DB72E7ECC4E9C L_7;
		L_7 = Enumerator_get_Current_m588061B1765C95AD6BDEC8EA8FBE37BDA51EAC5E_inline(L_6, Enumerator_get_Current_m588061B1765C95AD6BDEC8EA8FBE37BDA51EAC5E_RuntimeMethod_var);
		return L_7;
	}

IL_0034:
	{
		// return new KeyValuePair<string, JSONNode>(string.Empty, null);
		String_t* L_8 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
		KeyValuePair_2_tD59618B150F9D38FE8CF312BB48DB72E7ECC4E9C L_9;
		memset((&L_9), 0, sizeof(L_9));
		KeyValuePair_2__ctor_mE106F3C8BA6A87DA978B202073346ACDBCECA0D8((&L_9), L_8, (JSONNode_tD29E53D2E1C8F91FF9FEA40F4F3A540857651D3B*)NULL, /*hidden argument*/KeyValuePair_2__ctor_mE106F3C8BA6A87DA978B202073346ACDBCECA0D8_RuntimeMethod_var);
		return L_9;
	}
}
IL2CPP_EXTERN_C  KeyValuePair_2_tD59618B150F9D38FE8CF312BB48DB72E7ECC4E9C Enumerator_get_Current_m1CC1D772B74212E0E3C2F6951EDCC16336A51CE0_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	Enumerator_tA1F999D27FB3CE7FB0AC8D9BD4084CBA9E687C1F* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Enumerator_tA1F999D27FB3CE7FB0AC8D9BD4084CBA9E687C1F*>(__this + _offset);
	KeyValuePair_2_tD59618B150F9D38FE8CF312BB48DB72E7ECC4E9C _returnValue;
	_returnValue = Enumerator_get_Current_m1CC1D772B74212E0E3C2F6951EDCC16336A51CE0(_thisAdjusted, method);
	return _returnValue;
}
// System.Boolean SimpleJSON.JSONNode/Enumerator::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_m5DE5C658C3E070C5C7B9E9026E674EAA0455E708 (Enumerator_tA1F999D27FB3CE7FB0AC8D9BD4084CBA9E687C1F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m5BE8E9A6A9A88CC3FF48EA3466675ED35B0CC160_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_mB1C31B2A291986F6CD5A79C9F75196088363BF2D_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (type == Type.Array)
		int32_t L_0 = __this->___type_0;
		if ((!(((uint32_t)L_0) == ((uint32_t)1))))
		{
			goto IL_0015;
		}
	}
	{
		// return m_Array.MoveNext();
		Enumerator_t81A423E0F04B93279CA04B31DF14EDE9DE3F30AA* L_1 = (&__this->___m_Array_2);
		bool L_2;
		L_2 = Enumerator_MoveNext_mB1C31B2A291986F6CD5A79C9F75196088363BF2D(L_1, Enumerator_MoveNext_mB1C31B2A291986F6CD5A79C9F75196088363BF2D_RuntimeMethod_var);
		return L_2;
	}

IL_0015:
	{
		// else if (type == Type.Object)
		int32_t L_3 = __this->___type_0;
		if ((!(((uint32_t)L_3) == ((uint32_t)2))))
		{
			goto IL_002a;
		}
	}
	{
		// return m_Object.MoveNext();
		Enumerator_t1B0916EAA662F17AFF7BDA682F6213FDBE55A48F* L_4 = (&__this->___m_Object_1);
		bool L_5;
		L_5 = Enumerator_MoveNext_m5BE8E9A6A9A88CC3FF48EA3466675ED35B0CC160(L_4, Enumerator_MoveNext_m5BE8E9A6A9A88CC3FF48EA3466675ED35B0CC160_RuntimeMethod_var);
		return L_5;
	}

IL_002a:
	{
		// return false;
		return (bool)0;
	}
}
IL2CPP_EXTERN_C  bool Enumerator_MoveNext_m5DE5C658C3E070C5C7B9E9026E674EAA0455E708_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	Enumerator_tA1F999D27FB3CE7FB0AC8D9BD4084CBA9E687C1F* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Enumerator_tA1F999D27FB3CE7FB0AC8D9BD4084CBA9E687C1F*>(__this + _offset);
	bool _returnValue;
	_returnValue = Enumerator_MoveNext_m5DE5C658C3E070C5C7B9E9026E674EAA0455E708(_thisAdjusted, method);
	return _returnValue;
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


// Conversion methods for marshalling of: SimpleJSON.JSONNode/ValueEnumerator
IL2CPP_EXTERN_C void ValueEnumerator_tEA9D0EC3AED2B1854EAA656A2ECA719D051F774E_marshal_pinvoke(const ValueEnumerator_tEA9D0EC3AED2B1854EAA656A2ECA719D051F774E& unmarshaled, ValueEnumerator_tEA9D0EC3AED2B1854EAA656A2ECA719D051F774E_marshaled_pinvoke& marshaled)
{
	Exception_t* ___m_Enumerator_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'm_Enumerator' of type 'ValueEnumerator'.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___m_Enumerator_0Exception, NULL);
}
IL2CPP_EXTERN_C void ValueEnumerator_tEA9D0EC3AED2B1854EAA656A2ECA719D051F774E_marshal_pinvoke_back(const ValueEnumerator_tEA9D0EC3AED2B1854EAA656A2ECA719D051F774E_marshaled_pinvoke& marshaled, ValueEnumerator_tEA9D0EC3AED2B1854EAA656A2ECA719D051F774E& unmarshaled)
{
	Exception_t* ___m_Enumerator_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'm_Enumerator' of type 'ValueEnumerator'.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___m_Enumerator_0Exception, NULL);
}
// Conversion method for clean up from marshalling of: SimpleJSON.JSONNode/ValueEnumerator
IL2CPP_EXTERN_C void ValueEnumerator_tEA9D0EC3AED2B1854EAA656A2ECA719D051F774E_marshal_pinvoke_cleanup(ValueEnumerator_tEA9D0EC3AED2B1854EAA656A2ECA719D051F774E_marshaled_pinvoke& marshaled)
{
}


// Conversion methods for marshalling of: SimpleJSON.JSONNode/ValueEnumerator
IL2CPP_EXTERN_C void ValueEnumerator_tEA9D0EC3AED2B1854EAA656A2ECA719D051F774E_marshal_com(const ValueEnumerator_tEA9D0EC3AED2B1854EAA656A2ECA719D051F774E& unmarshaled, ValueEnumerator_tEA9D0EC3AED2B1854EAA656A2ECA719D051F774E_marshaled_com& marshaled)
{
	Exception_t* ___m_Enumerator_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'm_Enumerator' of type 'ValueEnumerator'.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___m_Enumerator_0Exception, NULL);
}
IL2CPP_EXTERN_C void ValueEnumerator_tEA9D0EC3AED2B1854EAA656A2ECA719D051F774E_marshal_com_back(const ValueEnumerator_tEA9D0EC3AED2B1854EAA656A2ECA719D051F774E_marshaled_com& marshaled, ValueEnumerator_tEA9D0EC3AED2B1854EAA656A2ECA719D051F774E& unmarshaled)
{
	Exception_t* ___m_Enumerator_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'm_Enumerator' of type 'ValueEnumerator'.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___m_Enumerator_0Exception, NULL);
}
// Conversion method for clean up from marshalling of: SimpleJSON.JSONNode/ValueEnumerator
IL2CPP_EXTERN_C void ValueEnumerator_tEA9D0EC3AED2B1854EAA656A2ECA719D051F774E_marshal_com_cleanup(ValueEnumerator_tEA9D0EC3AED2B1854EAA656A2ECA719D051F774E_marshaled_com& marshaled)
{
}
// System.Void SimpleJSON.JSONNode/ValueEnumerator::.ctor(System.Collections.Generic.List`1/Enumerator<SimpleJSON.JSONNode>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ValueEnumerator__ctor_m634B79D3C83B9484F252CFF884DB6D889260D6D0 (ValueEnumerator_tEA9D0EC3AED2B1854EAA656A2ECA719D051F774E* __this, Enumerator_t81A423E0F04B93279CA04B31DF14EDE9DE3F30AA ___aArrayEnum0, const RuntimeMethod* method) 
{
	{
		// public ValueEnumerator(List<JSONNode>.Enumerator aArrayEnum) : this(new Enumerator(aArrayEnum)) { }
		Enumerator_t81A423E0F04B93279CA04B31DF14EDE9DE3F30AA L_0 = ___aArrayEnum0;
		Enumerator_tA1F999D27FB3CE7FB0AC8D9BD4084CBA9E687C1F L_1;
		memset((&L_1), 0, sizeof(L_1));
		Enumerator__ctor_m2D9317706FE33C279EEE64ADBA3A301F86CBD5A4((&L_1), L_0, /*hidden argument*/NULL);
		ValueEnumerator__ctor_m38A55BFC57441736052296F0B4C582FCFFAD5EF3_inline(__this, L_1, NULL);
		// public ValueEnumerator(List<JSONNode>.Enumerator aArrayEnum) : this(new Enumerator(aArrayEnum)) { }
		return;
	}
}
IL2CPP_EXTERN_C  void ValueEnumerator__ctor_m634B79D3C83B9484F252CFF884DB6D889260D6D0_AdjustorThunk (RuntimeObject* __this, Enumerator_t81A423E0F04B93279CA04B31DF14EDE9DE3F30AA ___aArrayEnum0, const RuntimeMethod* method)
{
	ValueEnumerator_tEA9D0EC3AED2B1854EAA656A2ECA719D051F774E* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<ValueEnumerator_tEA9D0EC3AED2B1854EAA656A2ECA719D051F774E*>(__this + _offset);
	ValueEnumerator__ctor_m634B79D3C83B9484F252CFF884DB6D889260D6D0(_thisAdjusted, ___aArrayEnum0, method);
}
// System.Void SimpleJSON.JSONNode/ValueEnumerator::.ctor(System.Collections.Generic.Dictionary`2/Enumerator<System.String,SimpleJSON.JSONNode>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ValueEnumerator__ctor_m30A64BE0D3632F74D6C7364EC9B987FD3BE873CE (ValueEnumerator_tEA9D0EC3AED2B1854EAA656A2ECA719D051F774E* __this, Enumerator_t1B0916EAA662F17AFF7BDA682F6213FDBE55A48F ___aDictEnum0, const RuntimeMethod* method) 
{
	{
		// public ValueEnumerator(Dictionary<string, JSONNode>.Enumerator aDictEnum) : this(new Enumerator(aDictEnum)) { }
		Enumerator_t1B0916EAA662F17AFF7BDA682F6213FDBE55A48F L_0 = ___aDictEnum0;
		Enumerator_tA1F999D27FB3CE7FB0AC8D9BD4084CBA9E687C1F L_1;
		memset((&L_1), 0, sizeof(L_1));
		Enumerator__ctor_m1A8A3ED7B68073F1236B0EDBA01A2D96DDB55885((&L_1), L_0, /*hidden argument*/NULL);
		ValueEnumerator__ctor_m38A55BFC57441736052296F0B4C582FCFFAD5EF3_inline(__this, L_1, NULL);
		// public ValueEnumerator(Dictionary<string, JSONNode>.Enumerator aDictEnum) : this(new Enumerator(aDictEnum)) { }
		return;
	}
}
IL2CPP_EXTERN_C  void ValueEnumerator__ctor_m30A64BE0D3632F74D6C7364EC9B987FD3BE873CE_AdjustorThunk (RuntimeObject* __this, Enumerator_t1B0916EAA662F17AFF7BDA682F6213FDBE55A48F ___aDictEnum0, const RuntimeMethod* method)
{
	ValueEnumerator_tEA9D0EC3AED2B1854EAA656A2ECA719D051F774E* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<ValueEnumerator_tEA9D0EC3AED2B1854EAA656A2ECA719D051F774E*>(__this + _offset);
	ValueEnumerator__ctor_m30A64BE0D3632F74D6C7364EC9B987FD3BE873CE(_thisAdjusted, ___aDictEnum0, method);
}
// System.Void SimpleJSON.JSONNode/ValueEnumerator::.ctor(SimpleJSON.JSONNode/Enumerator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ValueEnumerator__ctor_m38A55BFC57441736052296F0B4C582FCFFAD5EF3 (ValueEnumerator_tEA9D0EC3AED2B1854EAA656A2ECA719D051F774E* __this, Enumerator_tA1F999D27FB3CE7FB0AC8D9BD4084CBA9E687C1F ___aEnumerator0, const RuntimeMethod* method) 
{
	{
		// public ValueEnumerator(Enumerator aEnumerator) { m_Enumerator = aEnumerator; }
		Enumerator_tA1F999D27FB3CE7FB0AC8D9BD4084CBA9E687C1F L_0 = ___aEnumerator0;
		__this->___m_Enumerator_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___m_Enumerator_0))->___m_Object_1))->____dictionary_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&__this->___m_Enumerator_0))->___m_Object_1))->____current_3))->___key_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&__this->___m_Enumerator_0))->___m_Object_1))->____current_3))->___value_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___m_Enumerator_0))->___m_Array_2))->____list_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___m_Enumerator_0))->___m_Array_2))->____current_3), (void*)NULL);
		#endif
		// public ValueEnumerator(Enumerator aEnumerator) { m_Enumerator = aEnumerator; }
		return;
	}
}
IL2CPP_EXTERN_C  void ValueEnumerator__ctor_m38A55BFC57441736052296F0B4C582FCFFAD5EF3_AdjustorThunk (RuntimeObject* __this, Enumerator_tA1F999D27FB3CE7FB0AC8D9BD4084CBA9E687C1F ___aEnumerator0, const RuntimeMethod* method)
{
	ValueEnumerator_tEA9D0EC3AED2B1854EAA656A2ECA719D051F774E* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<ValueEnumerator_tEA9D0EC3AED2B1854EAA656A2ECA719D051F774E*>(__this + _offset);
	ValueEnumerator__ctor_m38A55BFC57441736052296F0B4C582FCFFAD5EF3_inline(_thisAdjusted, ___aEnumerator0, method);
}
// SimpleJSON.JSONNode SimpleJSON.JSONNode/ValueEnumerator::get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR JSONNode_tD29E53D2E1C8F91FF9FEA40F4F3A540857651D3B* ValueEnumerator_get_Current_m8CEC3C8505471BAD8B3154504997960AF5F8CC9F (ValueEnumerator_tEA9D0EC3AED2B1854EAA656A2ECA719D051F774E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyValuePair_2_get_Value_mDEC839FB9359C1DC5F359FEB68C324657E5216DD_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	KeyValuePair_2_tD59618B150F9D38FE8CF312BB48DB72E7ECC4E9C V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// public JSONNode Current { get { return m_Enumerator.Current.Value; } }
		Enumerator_tA1F999D27FB3CE7FB0AC8D9BD4084CBA9E687C1F* L_0 = (&__this->___m_Enumerator_0);
		KeyValuePair_2_tD59618B150F9D38FE8CF312BB48DB72E7ECC4E9C L_1;
		L_1 = Enumerator_get_Current_m1CC1D772B74212E0E3C2F6951EDCC16336A51CE0(L_0, NULL);
		V_0 = L_1;
		JSONNode_tD29E53D2E1C8F91FF9FEA40F4F3A540857651D3B* L_2;
		L_2 = KeyValuePair_2_get_Value_mDEC839FB9359C1DC5F359FEB68C324657E5216DD_inline((&V_0), KeyValuePair_2_get_Value_mDEC839FB9359C1DC5F359FEB68C324657E5216DD_RuntimeMethod_var);
		return L_2;
	}
}
IL2CPP_EXTERN_C  JSONNode_tD29E53D2E1C8F91FF9FEA40F4F3A540857651D3B* ValueEnumerator_get_Current_m8CEC3C8505471BAD8B3154504997960AF5F8CC9F_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	ValueEnumerator_tEA9D0EC3AED2B1854EAA656A2ECA719D051F774E* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<ValueEnumerator_tEA9D0EC3AED2B1854EAA656A2ECA719D051F774E*>(__this + _offset);
	JSONNode_tD29E53D2E1C8F91FF9FEA40F4F3A540857651D3B* _returnValue;
	_returnValue = ValueEnumerator_get_Current_m8CEC3C8505471BAD8B3154504997960AF5F8CC9F(_thisAdjusted, method);
	return _returnValue;
}
// System.Boolean SimpleJSON.JSONNode/ValueEnumerator::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ValueEnumerator_MoveNext_m3F080D79F2AF504B57C1DFB6F2C86C5AC51DB0D1 (ValueEnumerator_tEA9D0EC3AED2B1854EAA656A2ECA719D051F774E* __this, const RuntimeMethod* method) 
{
	{
		// public bool MoveNext() { return m_Enumerator.MoveNext(); }
		Enumerator_tA1F999D27FB3CE7FB0AC8D9BD4084CBA9E687C1F* L_0 = (&__this->___m_Enumerator_0);
		bool L_1;
		L_1 = Enumerator_MoveNext_m5DE5C658C3E070C5C7B9E9026E674EAA0455E708(L_0, NULL);
		return L_1;
	}
}
IL2CPP_EXTERN_C  bool ValueEnumerator_MoveNext_m3F080D79F2AF504B57C1DFB6F2C86C5AC51DB0D1_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	ValueEnumerator_tEA9D0EC3AED2B1854EAA656A2ECA719D051F774E* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<ValueEnumerator_tEA9D0EC3AED2B1854EAA656A2ECA719D051F774E*>(__this + _offset);
	bool _returnValue;
	_returnValue = ValueEnumerator_MoveNext_m3F080D79F2AF504B57C1DFB6F2C86C5AC51DB0D1(_thisAdjusted, method);
	return _returnValue;
}
// SimpleJSON.JSONNode/ValueEnumerator SimpleJSON.JSONNode/ValueEnumerator::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ValueEnumerator_tEA9D0EC3AED2B1854EAA656A2ECA719D051F774E ValueEnumerator_GetEnumerator_m40FC11FE7C33A746CD0C2D768394E3690B385E57 (ValueEnumerator_tEA9D0EC3AED2B1854EAA656A2ECA719D051F774E* __this, const RuntimeMethod* method) 
{
	{
		// public ValueEnumerator GetEnumerator() { return this; }
		ValueEnumerator_tEA9D0EC3AED2B1854EAA656A2ECA719D051F774E L_0 = (*(ValueEnumerator_tEA9D0EC3AED2B1854EAA656A2ECA719D051F774E*)__this);
		return L_0;
	}
}
IL2CPP_EXTERN_C  ValueEnumerator_tEA9D0EC3AED2B1854EAA656A2ECA719D051F774E ValueEnumerator_GetEnumerator_m40FC11FE7C33A746CD0C2D768394E3690B385E57_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	ValueEnumerator_tEA9D0EC3AED2B1854EAA656A2ECA719D051F774E* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<ValueEnumerator_tEA9D0EC3AED2B1854EAA656A2ECA719D051F774E*>(__this + _offset);
	ValueEnumerator_tEA9D0EC3AED2B1854EAA656A2ECA719D051F774E _returnValue;
	_returnValue = ValueEnumerator_GetEnumerator_m40FC11FE7C33A746CD0C2D768394E3690B385E57(_thisAdjusted, method);
	return _returnValue;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif


// Conversion methods for marshalling of: SimpleJSON.JSONNode/KeyEnumerator
IL2CPP_EXTERN_C void KeyEnumerator_t75897CC29A0BD54DD4F75DA1922448A65DEC4458_marshal_pinvoke(const KeyEnumerator_t75897CC29A0BD54DD4F75DA1922448A65DEC4458& unmarshaled, KeyEnumerator_t75897CC29A0BD54DD4F75DA1922448A65DEC4458_marshaled_pinvoke& marshaled)
{
	Exception_t* ___m_Enumerator_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'm_Enumerator' of type 'KeyEnumerator'.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___m_Enumerator_0Exception, NULL);
}
IL2CPP_EXTERN_C void KeyEnumerator_t75897CC29A0BD54DD4F75DA1922448A65DEC4458_marshal_pinvoke_back(const KeyEnumerator_t75897CC29A0BD54DD4F75DA1922448A65DEC4458_marshaled_pinvoke& marshaled, KeyEnumerator_t75897CC29A0BD54DD4F75DA1922448A65DEC4458& unmarshaled)
{
	Exception_t* ___m_Enumerator_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'm_Enumerator' of type 'KeyEnumerator'.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___m_Enumerator_0Exception, NULL);
}
// Conversion method for clean up from marshalling of: SimpleJSON.JSONNode/KeyEnumerator
IL2CPP_EXTERN_C void KeyEnumerator_t75897CC29A0BD54DD4F75DA1922448A65DEC4458_marshal_pinvoke_cleanup(KeyEnumerator_t75897CC29A0BD54DD4F75DA1922448A65DEC4458_marshaled_pinvoke& marshaled)
{
}


// Conversion methods for marshalling of: SimpleJSON.JSONNode/KeyEnumerator
IL2CPP_EXTERN_C void KeyEnumerator_t75897CC29A0BD54DD4F75DA1922448A65DEC4458_marshal_com(const KeyEnumerator_t75897CC29A0BD54DD4F75DA1922448A65DEC4458& unmarshaled, KeyEnumerator_t75897CC29A0BD54DD4F75DA1922448A65DEC4458_marshaled_com& marshaled)
{
	Exception_t* ___m_Enumerator_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'm_Enumerator' of type 'KeyEnumerator'.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___m_Enumerator_0Exception, NULL);
}
IL2CPP_EXTERN_C void KeyEnumerator_t75897CC29A0BD54DD4F75DA1922448A65DEC4458_marshal_com_back(const KeyEnumerator_t75897CC29A0BD54DD4F75DA1922448A65DEC4458_marshaled_com& marshaled, KeyEnumerator_t75897CC29A0BD54DD4F75DA1922448A65DEC4458& unmarshaled)
{
	Exception_t* ___m_Enumerator_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'm_Enumerator' of type 'KeyEnumerator'.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___m_Enumerator_0Exception, NULL);
}
// Conversion method for clean up from marshalling of: SimpleJSON.JSONNode/KeyEnumerator
IL2CPP_EXTERN_C void KeyEnumerator_t75897CC29A0BD54DD4F75DA1922448A65DEC4458_marshal_com_cleanup(KeyEnumerator_t75897CC29A0BD54DD4F75DA1922448A65DEC4458_marshaled_com& marshaled)
{
}
// System.Void SimpleJSON.JSONNode/KeyEnumerator::.ctor(System.Collections.Generic.List`1/Enumerator<SimpleJSON.JSONNode>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KeyEnumerator__ctor_m02F5FAFA3533AF6B9540816175966B615D03C8D4 (KeyEnumerator_t75897CC29A0BD54DD4F75DA1922448A65DEC4458* __this, Enumerator_t81A423E0F04B93279CA04B31DF14EDE9DE3F30AA ___aArrayEnum0, const RuntimeMethod* method) 
{
	{
		// public KeyEnumerator(List<JSONNode>.Enumerator aArrayEnum) : this(new Enumerator(aArrayEnum)) { }
		Enumerator_t81A423E0F04B93279CA04B31DF14EDE9DE3F30AA L_0 = ___aArrayEnum0;
		Enumerator_tA1F999D27FB3CE7FB0AC8D9BD4084CBA9E687C1F L_1;
		memset((&L_1), 0, sizeof(L_1));
		Enumerator__ctor_m2D9317706FE33C279EEE64ADBA3A301F86CBD5A4((&L_1), L_0, /*hidden argument*/NULL);
		KeyEnumerator__ctor_mA74E36BD7D862BD0CAA6A40ABA8EA9B8E96BC09B_inline(__this, L_1, NULL);
		// public KeyEnumerator(List<JSONNode>.Enumerator aArrayEnum) : this(new Enumerator(aArrayEnum)) { }
		return;
	}
}
IL2CPP_EXTERN_C  void KeyEnumerator__ctor_m02F5FAFA3533AF6B9540816175966B615D03C8D4_AdjustorThunk (RuntimeObject* __this, Enumerator_t81A423E0F04B93279CA04B31DF14EDE9DE3F30AA ___aArrayEnum0, const RuntimeMethod* method)
{
	KeyEnumerator_t75897CC29A0BD54DD4F75DA1922448A65DEC4458* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<KeyEnumerator_t75897CC29A0BD54DD4F75DA1922448A65DEC4458*>(__this + _offset);
	KeyEnumerator__ctor_m02F5FAFA3533AF6B9540816175966B615D03C8D4(_thisAdjusted, ___aArrayEnum0, method);
}
// System.Void SimpleJSON.JSONNode/KeyEnumerator::.ctor(System.Collections.Generic.Dictionary`2/Enumerator<System.String,SimpleJSON.JSONNode>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KeyEnumerator__ctor_m6CBE0246826ABAB99C37446FAE05F36124F296D9 (KeyEnumerator_t75897CC29A0BD54DD4F75DA1922448A65DEC4458* __this, Enumerator_t1B0916EAA662F17AFF7BDA682F6213FDBE55A48F ___aDictEnum0, const RuntimeMethod* method) 
{
	{
		// public KeyEnumerator(Dictionary<string, JSONNode>.Enumerator aDictEnum) : this(new Enumerator(aDictEnum)) { }
		Enumerator_t1B0916EAA662F17AFF7BDA682F6213FDBE55A48F L_0 = ___aDictEnum0;
		Enumerator_tA1F999D27FB3CE7FB0AC8D9BD4084CBA9E687C1F L_1;
		memset((&L_1), 0, sizeof(L_1));
		Enumerator__ctor_m1A8A3ED7B68073F1236B0EDBA01A2D96DDB55885((&L_1), L_0, /*hidden argument*/NULL);
		KeyEnumerator__ctor_mA74E36BD7D862BD0CAA6A40ABA8EA9B8E96BC09B_inline(__this, L_1, NULL);
		// public KeyEnumerator(Dictionary<string, JSONNode>.Enumerator aDictEnum) : this(new Enumerator(aDictEnum)) { }
		return;
	}
}
IL2CPP_EXTERN_C  void KeyEnumerator__ctor_m6CBE0246826ABAB99C37446FAE05F36124F296D9_AdjustorThunk (RuntimeObject* __this, Enumerator_t1B0916EAA662F17AFF7BDA682F6213FDBE55A48F ___aDictEnum0, const RuntimeMethod* method)
{
	KeyEnumerator_t75897CC29A0BD54DD4F75DA1922448A65DEC4458* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<KeyEnumerator_t75897CC29A0BD54DD4F75DA1922448A65DEC4458*>(__this + _offset);
	KeyEnumerator__ctor_m6CBE0246826ABAB99C37446FAE05F36124F296D9(_thisAdjusted, ___aDictEnum0, method);
}
// System.Void SimpleJSON.JSONNode/KeyEnumerator::.ctor(SimpleJSON.JSONNode/Enumerator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KeyEnumerator__ctor_mA74E36BD7D862BD0CAA6A40ABA8EA9B8E96BC09B (KeyEnumerator_t75897CC29A0BD54DD4F75DA1922448A65DEC4458* __this, Enumerator_tA1F999D27FB3CE7FB0AC8D9BD4084CBA9E687C1F ___aEnumerator0, const RuntimeMethod* method) 
{
	{
		// public KeyEnumerator(Enumerator aEnumerator) { m_Enumerator = aEnumerator; }
		Enumerator_tA1F999D27FB3CE7FB0AC8D9BD4084CBA9E687C1F L_0 = ___aEnumerator0;
		__this->___m_Enumerator_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___m_Enumerator_0))->___m_Object_1))->____dictionary_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&__this->___m_Enumerator_0))->___m_Object_1))->____current_3))->___key_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&__this->___m_Enumerator_0))->___m_Object_1))->____current_3))->___value_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___m_Enumerator_0))->___m_Array_2))->____list_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___m_Enumerator_0))->___m_Array_2))->____current_3), (void*)NULL);
		#endif
		// public KeyEnumerator(Enumerator aEnumerator) { m_Enumerator = aEnumerator; }
		return;
	}
}
IL2CPP_EXTERN_C  void KeyEnumerator__ctor_mA74E36BD7D862BD0CAA6A40ABA8EA9B8E96BC09B_AdjustorThunk (RuntimeObject* __this, Enumerator_tA1F999D27FB3CE7FB0AC8D9BD4084CBA9E687C1F ___aEnumerator0, const RuntimeMethod* method)
{
	KeyEnumerator_t75897CC29A0BD54DD4F75DA1922448A65DEC4458* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<KeyEnumerator_t75897CC29A0BD54DD4F75DA1922448A65DEC4458*>(__this + _offset);
	KeyEnumerator__ctor_mA74E36BD7D862BD0CAA6A40ABA8EA9B8E96BC09B_inline(_thisAdjusted, ___aEnumerator0, method);
}
// System.String SimpleJSON.JSONNode/KeyEnumerator::get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* KeyEnumerator_get_Current_mA4BEA3DE642CCF1A11DA3E58FD1A03A52BE4353A (KeyEnumerator_t75897CC29A0BD54DD4F75DA1922448A65DEC4458* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyValuePair_2_get_Key_m8460F8B92343281177F3C22FD70CC4BADACA8112_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	KeyValuePair_2_tD59618B150F9D38FE8CF312BB48DB72E7ECC4E9C V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// public string Current { get { return m_Enumerator.Current.Key; } }
		Enumerator_tA1F999D27FB3CE7FB0AC8D9BD4084CBA9E687C1F* L_0 = (&__this->___m_Enumerator_0);
		KeyValuePair_2_tD59618B150F9D38FE8CF312BB48DB72E7ECC4E9C L_1;
		L_1 = Enumerator_get_Current_m1CC1D772B74212E0E3C2F6951EDCC16336A51CE0(L_0, NULL);
		V_0 = L_1;
		String_t* L_2;
		L_2 = KeyValuePair_2_get_Key_m8460F8B92343281177F3C22FD70CC4BADACA8112_inline((&V_0), KeyValuePair_2_get_Key_m8460F8B92343281177F3C22FD70CC4BADACA8112_RuntimeMethod_var);
		return L_2;
	}
}
IL2CPP_EXTERN_C  String_t* KeyEnumerator_get_Current_mA4BEA3DE642CCF1A11DA3E58FD1A03A52BE4353A_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	KeyEnumerator_t75897CC29A0BD54DD4F75DA1922448A65DEC4458* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<KeyEnumerator_t75897CC29A0BD54DD4F75DA1922448A65DEC4458*>(__this + _offset);
	String_t* _returnValue;
	_returnValue = KeyEnumerator_get_Current_mA4BEA3DE642CCF1A11DA3E58FD1A03A52BE4353A(_thisAdjusted, method);
	return _returnValue;
}
// System.Boolean SimpleJSON.JSONNode/KeyEnumerator::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool KeyEnumerator_MoveNext_m55499EF43B3B5A612C199967489F24108E55C0A4 (KeyEnumerator_t75897CC29A0BD54DD4F75DA1922448A65DEC4458* __this, const RuntimeMethod* method) 
{
	{
		// public bool MoveNext() { return m_Enumerator.MoveNext(); }
		Enumerator_tA1F999D27FB3CE7FB0AC8D9BD4084CBA9E687C1F* L_0 = (&__this->___m_Enumerator_0);
		bool L_1;
		L_1 = Enumerator_MoveNext_m5DE5C658C3E070C5C7B9E9026E674EAA0455E708(L_0, NULL);
		return L_1;
	}
}
IL2CPP_EXTERN_C  bool KeyEnumerator_MoveNext_m55499EF43B3B5A612C199967489F24108E55C0A4_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	KeyEnumerator_t75897CC29A0BD54DD4F75DA1922448A65DEC4458* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<KeyEnumerator_t75897CC29A0BD54DD4F75DA1922448A65DEC4458*>(__this + _offset);
	bool _returnValue;
	_returnValue = KeyEnumerator_MoveNext_m55499EF43B3B5A612C199967489F24108E55C0A4(_thisAdjusted, method);
	return _returnValue;
}
// SimpleJSON.JSONNode/KeyEnumerator SimpleJSON.JSONNode/KeyEnumerator::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR KeyEnumerator_t75897CC29A0BD54DD4F75DA1922448A65DEC4458 KeyEnumerator_GetEnumerator_m5B4D61EDA55C18A752058A1245C4D6AAF31036E0 (KeyEnumerator_t75897CC29A0BD54DD4F75DA1922448A65DEC4458* __this, const RuntimeMethod* method) 
{
	{
		// public KeyEnumerator GetEnumerator() { return this; }
		KeyEnumerator_t75897CC29A0BD54DD4F75DA1922448A65DEC4458 L_0 = (*(KeyEnumerator_t75897CC29A0BD54DD4F75DA1922448A65DEC4458*)__this);
		return L_0;
	}
}
IL2CPP_EXTERN_C  KeyEnumerator_t75897CC29A0BD54DD4F75DA1922448A65DEC4458 KeyEnumerator_GetEnumerator_m5B4D61EDA55C18A752058A1245C4D6AAF31036E0_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	KeyEnumerator_t75897CC29A0BD54DD4F75DA1922448A65DEC4458* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<KeyEnumerator_t75897CC29A0BD54DD4F75DA1922448A65DEC4458*>(__this + _offset);
	KeyEnumerator_t75897CC29A0BD54DD4F75DA1922448A65DEC4458 _returnValue;
	_returnValue = KeyEnumerator_GetEnumerator_m5B4D61EDA55C18A752058A1245C4D6AAF31036E0(_thisAdjusted, method);
	return _returnValue;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void SimpleJSON.JSONNode/LinqEnumerator::.ctor(SimpleJSON.JSONNode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LinqEnumerator__ctor_m94D1481CEA35FD6B775A03351ACCAE7BECFDA8D3 (LinqEnumerator_t569E03B1C27DEBBF7549F3136EE88777AA5A3AD3* __this, JSONNode_tD29E53D2E1C8F91FF9FEA40F4F3A540857651D3B* ___aNode0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JSONNode_tD29E53D2E1C8F91FF9FEA40F4F3A540857651D3B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// internal LinqEnumerator(JSONNode aNode)
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// m_Node = aNode;
		JSONNode_tD29E53D2E1C8F91FF9FEA40F4F3A540857651D3B* L_0 = ___aNode0;
		__this->___m_Node_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Node_0), (void*)L_0);
		// if (m_Node != null)
		JSONNode_tD29E53D2E1C8F91FF9FEA40F4F3A540857651D3B* L_1 = __this->___m_Node_0;
		il2cpp_codegen_runtime_class_init_inline(JSONNode_tD29E53D2E1C8F91FF9FEA40F4F3A540857651D3B_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = JSONNode_op_Inequality_m7050845D0269F25ED099612FACF1BB706EB45D30(L_1, NULL, NULL);
		if (!L_2)
		{
			goto IL_002c;
		}
	}
	{
		// m_Enumerator = m_Node.GetEnumerator();
		JSONNode_tD29E53D2E1C8F91FF9FEA40F4F3A540857651D3B* L_3 = __this->___m_Node_0;
		NullCheck(L_3);
		Enumerator_tA1F999D27FB3CE7FB0AC8D9BD4084CBA9E687C1F L_4;
		L_4 = VirtualFuncInvoker0< Enumerator_tA1F999D27FB3CE7FB0AC8D9BD4084CBA9E687C1F >::Invoke(32 /* SimpleJSON.JSONNode/Enumerator SimpleJSON.JSONNode::GetEnumerator() */, L_3);
		__this->___m_Enumerator_1 = L_4;
		Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___m_Enumerator_1))->___m_Object_1))->____dictionary_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&__this->___m_Enumerator_1))->___m_Object_1))->____current_3))->___key_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&__this->___m_Enumerator_1))->___m_Object_1))->____current_3))->___value_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___m_Enumerator_1))->___m_Array_2))->____list_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___m_Enumerator_1))->___m_Array_2))->____current_3), (void*)NULL);
		#endif
	}

IL_002c:
	{
		// }
		return;
	}
}
// System.Collections.Generic.KeyValuePair`2<System.String,SimpleJSON.JSONNode> SimpleJSON.JSONNode/LinqEnumerator::get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR KeyValuePair_2_tD59618B150F9D38FE8CF312BB48DB72E7ECC4E9C LinqEnumerator_get_Current_mBED865D70FB504C033A66B191126E4AFAEA9A3E6 (LinqEnumerator_t569E03B1C27DEBBF7549F3136EE88777AA5A3AD3* __this, const RuntimeMethod* method) 
{
	{
		// public KeyValuePair<string, JSONNode> Current { get { return m_Enumerator.Current; } }
		Enumerator_tA1F999D27FB3CE7FB0AC8D9BD4084CBA9E687C1F* L_0 = (&__this->___m_Enumerator_1);
		KeyValuePair_2_tD59618B150F9D38FE8CF312BB48DB72E7ECC4E9C L_1;
		L_1 = Enumerator_get_Current_m1CC1D772B74212E0E3C2F6951EDCC16336A51CE0(L_0, NULL);
		return L_1;
	}
}
// System.Object SimpleJSON.JSONNode/LinqEnumerator::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* LinqEnumerator_System_Collections_IEnumerator_get_Current_mC2AB5745DD9705CFC285B36B589C72358C33A4EC (LinqEnumerator_t569E03B1C27DEBBF7549F3136EE88777AA5A3AD3* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyValuePair_2_tD59618B150F9D38FE8CF312BB48DB72E7ECC4E9C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// object IEnumerator.Current { get { return m_Enumerator.Current; } }
		Enumerator_tA1F999D27FB3CE7FB0AC8D9BD4084CBA9E687C1F* L_0 = (&__this->___m_Enumerator_1);
		KeyValuePair_2_tD59618B150F9D38FE8CF312BB48DB72E7ECC4E9C L_1;
		L_1 = Enumerator_get_Current_m1CC1D772B74212E0E3C2F6951EDCC16336A51CE0(L_0, NULL);
		KeyValuePair_2_tD59618B150F9D38FE8CF312BB48DB72E7ECC4E9C L_2 = L_1;
		RuntimeObject* L_3 = Box(KeyValuePair_2_tD59618B150F9D38FE8CF312BB48DB72E7ECC4E9C_il2cpp_TypeInfo_var, &L_2);
		return L_3;
	}
}
// System.Boolean SimpleJSON.JSONNode/LinqEnumerator::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool LinqEnumerator_MoveNext_mD190860D4CA8B45A34E109753CAD21BDD6CA6D91 (LinqEnumerator_t569E03B1C27DEBBF7549F3136EE88777AA5A3AD3* __this, const RuntimeMethod* method) 
{
	{
		// public bool MoveNext() { return m_Enumerator.MoveNext(); }
		Enumerator_tA1F999D27FB3CE7FB0AC8D9BD4084CBA9E687C1F* L_0 = (&__this->___m_Enumerator_1);
		bool L_1;
		L_1 = Enumerator_MoveNext_m5DE5C658C3E070C5C7B9E9026E674EAA0455E708(L_0, NULL);
		return L_1;
	}
}
// System.Void SimpleJSON.JSONNode/LinqEnumerator::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LinqEnumerator_Dispose_m31067843628E32ABD42A23C6D56C83B44D4B2CCC (LinqEnumerator_t569E03B1C27DEBBF7549F3136EE88777AA5A3AD3* __this, const RuntimeMethod* method) 
{
	{
		// m_Node = null;
		__this->___m_Node_0 = (JSONNode_tD29E53D2E1C8F91FF9FEA40F4F3A540857651D3B*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Node_0), (void*)(JSONNode_tD29E53D2E1C8F91FF9FEA40F4F3A540857651D3B*)NULL);
		// m_Enumerator = new Enumerator();
		Enumerator_tA1F999D27FB3CE7FB0AC8D9BD4084CBA9E687C1F* L_0 = (&__this->___m_Enumerator_1);
		il2cpp_codegen_initobj(L_0, sizeof(Enumerator_tA1F999D27FB3CE7FB0AC8D9BD4084CBA9E687C1F));
		// }
		return;
	}
}
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,SimpleJSON.JSONNode>> SimpleJSON.JSONNode/LinqEnumerator::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* LinqEnumerator_GetEnumerator_m9126BA21D633E11EAB31F7AB206C47FE1525DF76 (LinqEnumerator_t569E03B1C27DEBBF7549F3136EE88777AA5A3AD3* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LinqEnumerator_t569E03B1C27DEBBF7549F3136EE88777AA5A3AD3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return new LinqEnumerator(m_Node);
		JSONNode_tD29E53D2E1C8F91FF9FEA40F4F3A540857651D3B* L_0 = __this->___m_Node_0;
		LinqEnumerator_t569E03B1C27DEBBF7549F3136EE88777AA5A3AD3* L_1 = (LinqEnumerator_t569E03B1C27DEBBF7549F3136EE88777AA5A3AD3*)il2cpp_codegen_object_new(LinqEnumerator_t569E03B1C27DEBBF7549F3136EE88777AA5A3AD3_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		LinqEnumerator__ctor_m94D1481CEA35FD6B775A03351ACCAE7BECFDA8D3(L_1, L_0, NULL);
		return L_1;
	}
}
// System.Void SimpleJSON.JSONNode/LinqEnumerator::Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LinqEnumerator_Reset_mD5F55CF7AA8E4E1B82CB42E0CD14A49CFE1D6AD5 (LinqEnumerator_t569E03B1C27DEBBF7549F3136EE88777AA5A3AD3* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JSONNode_tD29E53D2E1C8F91FF9FEA40F4F3A540857651D3B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (m_Node != null)
		JSONNode_tD29E53D2E1C8F91FF9FEA40F4F3A540857651D3B* L_0 = __this->___m_Node_0;
		il2cpp_codegen_runtime_class_init_inline(JSONNode_tD29E53D2E1C8F91FF9FEA40F4F3A540857651D3B_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = JSONNode_op_Inequality_m7050845D0269F25ED099612FACF1BB706EB45D30(L_0, NULL, NULL);
		if (!L_1)
		{
			goto IL_001f;
		}
	}
	{
		// m_Enumerator = m_Node.GetEnumerator();
		JSONNode_tD29E53D2E1C8F91FF9FEA40F4F3A540857651D3B* L_2 = __this->___m_Node_0;
		NullCheck(L_2);
		Enumerator_tA1F999D27FB3CE7FB0AC8D9BD4084CBA9E687C1F L_3;
		L_3 = VirtualFuncInvoker0< Enumerator_tA1F999D27FB3CE7FB0AC8D9BD4084CBA9E687C1F >::Invoke(32 /* SimpleJSON.JSONNode/Enumerator SimpleJSON.JSONNode::GetEnumerator() */, L_2);
		__this->___m_Enumerator_1 = L_3;
		Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___m_Enumerator_1))->___m_Object_1))->____dictionary_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&__this->___m_Enumerator_1))->___m_Object_1))->____current_3))->___key_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&__this->___m_Enumerator_1))->___m_Object_1))->____current_3))->___value_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___m_Enumerator_1))->___m_Array_2))->____list_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___m_Enumerator_1))->___m_Array_2))->____current_3), (void*)NULL);
		#endif
	}

IL_001f:
	{
		// }
		return;
	}
}
// System.Collections.IEnumerator SimpleJSON.JSONNode/LinqEnumerator::System.Collections.IEnumerable.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* LinqEnumerator_System_Collections_IEnumerable_GetEnumerator_m7F183A29504044F4A7283725996FA73B4B0F7A2C (LinqEnumerator_t569E03B1C27DEBBF7549F3136EE88777AA5A3AD3* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LinqEnumerator_t569E03B1C27DEBBF7549F3136EE88777AA5A3AD3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return new LinqEnumerator(m_Node);
		JSONNode_tD29E53D2E1C8F91FF9FEA40F4F3A540857651D3B* L_0 = __this->___m_Node_0;
		LinqEnumerator_t569E03B1C27DEBBF7549F3136EE88777AA5A3AD3* L_1 = (LinqEnumerator_t569E03B1C27DEBBF7549F3136EE88777AA5A3AD3*)il2cpp_codegen_object_new(LinqEnumerator_t569E03B1C27DEBBF7549F3136EE88777AA5A3AD3_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		LinqEnumerator__ctor_m94D1481CEA35FD6B775A03351ACCAE7BECFDA8D3(L_1, L_0, NULL);
		return L_1;
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
// System.Void SimpleJSON.JSONNode/<get_Children>d__43::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3Cget_ChildrenU3Ed__43__ctor_m57C5EBE36D1BF2225E71F1B54E80212CCC17A46B (U3Cget_ChildrenU3Ed__43_t5205FD2B072EA35613DB00E54067D4BE6FA9EDBF* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->___U3CU3E1__state_0 = L_0;
		int32_t L_1;
		L_1 = Environment_get_CurrentManagedThreadId_mEC09D20ED666BC3277AC9D16B68AA287E5AFE1B2(NULL);
		__this->___U3CU3El__initialThreadId_2 = L_1;
		return;
	}
}
// System.Void SimpleJSON.JSONNode/<get_Children>d__43::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3Cget_ChildrenU3Ed__43_System_IDisposable_Dispose_m0A539BAC0A0E2FBD419C3C85EC626C72D04A610C (U3Cget_ChildrenU3Ed__43_t5205FD2B072EA35613DB00E54067D4BE6FA9EDBF* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean SimpleJSON.JSONNode/<get_Children>d__43::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3Cget_ChildrenU3Ed__43_MoveNext_m6909DC6C4ABE1A375C5A44BBCD8B36C1891855D9 (U3Cget_ChildrenU3Ed__43_t5205FD2B072EA35613DB00E54067D4BE6FA9EDBF* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if (!L_1)
		{
			goto IL_000c;
		}
	}
	{
		return (bool)0;
	}

IL_000c:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// yield break;
		return (bool)0;
	}
}
// SimpleJSON.JSONNode SimpleJSON.JSONNode/<get_Children>d__43::System.Collections.Generic.IEnumerator<SimpleJSON.JSONNode>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR JSONNode_tD29E53D2E1C8F91FF9FEA40F4F3A540857651D3B* U3Cget_ChildrenU3Ed__43_System_Collections_Generic_IEnumeratorU3CSimpleJSON_JSONNodeU3E_get_Current_mAAA1512F5A1E96B838CF75EF8A539694FD2BF46A (U3Cget_ChildrenU3Ed__43_t5205FD2B072EA35613DB00E54067D4BE6FA9EDBF* __this, const RuntimeMethod* method) 
{
	{
		JSONNode_tD29E53D2E1C8F91FF9FEA40F4F3A540857651D3B* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void SimpleJSON.JSONNode/<get_Children>d__43::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3Cget_ChildrenU3Ed__43_System_Collections_IEnumerator_Reset_m9AFC505E4DEDC40D1D02673A77BDB28414D58364 (U3Cget_ChildrenU3Ed__43_t5205FD2B072EA35613DB00E54067D4BE6FA9EDBF* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3Cget_ChildrenU3Ed__43_System_Collections_IEnumerator_Reset_m9AFC505E4DEDC40D1D02673A77BDB28414D58364_RuntimeMethod_var)));
	}
}
// System.Object SimpleJSON.JSONNode/<get_Children>d__43::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3Cget_ChildrenU3Ed__43_System_Collections_IEnumerator_get_Current_m496BE8D6314CDBA714DE275C61D33E3A44A52BFC (U3Cget_ChildrenU3Ed__43_t5205FD2B072EA35613DB00E54067D4BE6FA9EDBF* __this, const RuntimeMethod* method) 
{
	{
		JSONNode_tD29E53D2E1C8F91FF9FEA40F4F3A540857651D3B* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Collections.Generic.IEnumerator`1<SimpleJSON.JSONNode> SimpleJSON.JSONNode/<get_Children>d__43::System.Collections.Generic.IEnumerable<SimpleJSON.JSONNode>.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3Cget_ChildrenU3Ed__43_System_Collections_Generic_IEnumerableU3CSimpleJSON_JSONNodeU3E_GetEnumerator_mB80DF4460BB1C8E28223E3D9EAA60754DFC32B68 (U3Cget_ChildrenU3Ed__43_t5205FD2B072EA35613DB00E54067D4BE6FA9EDBF* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3Cget_ChildrenU3Ed__43_t5205FD2B072EA35613DB00E54067D4BE6FA9EDBF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3Cget_ChildrenU3Ed__43_t5205FD2B072EA35613DB00E54067D4BE6FA9EDBF* V_0 = NULL;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		if ((!(((uint32_t)L_0) == ((uint32_t)((int32_t)-2)))))
		{
			goto IL_0022;
		}
	}
	{
		int32_t L_1 = __this->___U3CU3El__initialThreadId_2;
		int32_t L_2;
		L_2 = Environment_get_CurrentManagedThreadId_mEC09D20ED666BC3277AC9D16B68AA287E5AFE1B2(NULL);
		if ((!(((uint32_t)L_1) == ((uint32_t)L_2))))
		{
			goto IL_0022;
		}
	}
	{
		__this->___U3CU3E1__state_0 = 0;
		V_0 = __this;
		goto IL_0029;
	}

IL_0022:
	{
		U3Cget_ChildrenU3Ed__43_t5205FD2B072EA35613DB00E54067D4BE6FA9EDBF* L_3 = (U3Cget_ChildrenU3Ed__43_t5205FD2B072EA35613DB00E54067D4BE6FA9EDBF*)il2cpp_codegen_object_new(U3Cget_ChildrenU3Ed__43_t5205FD2B072EA35613DB00E54067D4BE6FA9EDBF_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		U3Cget_ChildrenU3Ed__43__ctor_m57C5EBE36D1BF2225E71F1B54E80212CCC17A46B(L_3, 0, NULL);
		V_0 = L_3;
	}

IL_0029:
	{
		U3Cget_ChildrenU3Ed__43_t5205FD2B072EA35613DB00E54067D4BE6FA9EDBF* L_4 = V_0;
		return L_4;
	}
}
// System.Collections.IEnumerator SimpleJSON.JSONNode/<get_Children>d__43::System.Collections.IEnumerable.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3Cget_ChildrenU3Ed__43_System_Collections_IEnumerable_GetEnumerator_mD274BF4E652DCA7CCCAE06EBFCD6A9179CCD7D55 (U3Cget_ChildrenU3Ed__43_t5205FD2B072EA35613DB00E54067D4BE6FA9EDBF* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0;
		L_0 = U3Cget_ChildrenU3Ed__43_System_Collections_Generic_IEnumerableU3CSimpleJSON_JSONNodeU3E_GetEnumerator_mB80DF4460BB1C8E28223E3D9EAA60754DFC32B68(__this, NULL);
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
// System.Void SimpleJSON.JSONNode/<get_DeepChildren>d__45::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3Cget_DeepChildrenU3Ed__45__ctor_m0B6485C3B6916E6C6AE17ED440C882ECF25D0C31 (U3Cget_DeepChildrenU3Ed__45_tB8D5A24DD52825340B1A0A9505719E91C72CE533* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->___U3CU3E1__state_0 = L_0;
		int32_t L_1;
		L_1 = Environment_get_CurrentManagedThreadId_mEC09D20ED666BC3277AC9D16B68AA287E5AFE1B2(NULL);
		__this->___U3CU3El__initialThreadId_2 = L_1;
		return;
	}
}
// System.Void SimpleJSON.JSONNode/<get_DeepChildren>d__45::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3Cget_DeepChildrenU3Ed__45_System_IDisposable_Dispose_m7D7FF2430933259DB3BF2FF4F1239F737F381FB7 (U3Cget_DeepChildrenU3Ed__45_tB8D5A24DD52825340B1A0A9505719E91C72CE533* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((!(((uint32_t)((int32_t)il2cpp_codegen_subtract(L_1, ((int32_t)-4)))) > ((uint32_t)1))))
		{
			goto IL_0012;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((!(((uint32_t)L_2) == ((uint32_t)1))))
		{
			goto IL_002f;
		}
	}

IL_0012:
	{
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0028:
			{// begin finally (depth: 1)
				U3Cget_DeepChildrenU3Ed__45_U3CU3Em__Finally1_m0FDB38B46AB417AB10B0E107EA0C1968D6E8F593(__this, NULL);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				int32_t L_3 = V_0;
				if ((((int32_t)L_3) == ((int32_t)((int32_t)-4))))
				{
					goto IL_001e_1;
				}
			}
			{
				int32_t L_4 = V_0;
				if ((((int32_t)L_4) == ((int32_t)1)))
				{
					goto IL_001e_1;
				}
			}
			{
				goto IL_002f;
			}

IL_001e_1:
			{
			}
			{
				auto __finallyBlock = il2cpp::utils::Finally([&]
				{

FINALLY_0021_1:
					{// begin finally (depth: 2)
						U3Cget_DeepChildrenU3Ed__45_U3CU3Em__Finally2_mCB1A856D0AB5D410AB35053750B48C44723E5F3F(__this, NULL);
						return;
					}// end finally (depth: 2)
				});
				try
				{// begin try (depth: 2)
					goto IL_002f;
				}// end try (depth: 2)
				catch(Il2CppExceptionWrapper& e)
				{
					__finallyBlock.StoreException(e.ex);
				}
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_002f:
	{
		return;
	}
}
// System.Boolean SimpleJSON.JSONNode/<get_DeepChildren>d__45::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3Cget_DeepChildrenU3Ed__45_MoveNext_m63731EAD97F150659D0BBF3E6CA3730E046CE409 (U3Cget_DeepChildrenU3Ed__45_tB8D5A24DD52825340B1A0A9505719E91C72CE533* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerable_1_tBB6E2A615DFE00A6FE5AE919A482CC24C97ABB04_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_1_t49DDBC5AAD0D2D43999136BA0A280005097DCDFD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int32_t V_1 = 0;
	JSONNode_tD29E53D2E1C8F91FF9FEA40F4F3A540857651D3B* V_2 = NULL;
	JSONNode_tD29E53D2E1C8F91FF9FEA40F4F3A540857651D3B* V_3 = NULL;
	JSONNode_tD29E53D2E1C8F91FF9FEA40F4F3A540857651D3B* V_4 = NULL;
	{
		auto __finallyBlock = il2cpp::utils::Fault([&]
		{

FAULT_00c5:
			{// begin fault (depth: 1)
				U3Cget_DeepChildrenU3Ed__45_System_IDisposable_Dispose_m7D7FF2430933259DB3BF2FF4F1239F737F381FB7(__this, NULL);
				return;
			}// end fault
		});
		try
		{// begin try (depth: 1)
			{
				int32_t L_0 = __this->___U3CU3E1__state_0;
				V_1 = L_0;
				JSONNode_tD29E53D2E1C8F91FF9FEA40F4F3A540857651D3B* L_1 = __this->___U3CU3E4__this_3;
				V_2 = L_1;
				int32_t L_2 = V_1;
				if (!L_2)
				{
					goto IL_001c_1;
				}
			}
			{
				int32_t L_3 = V_1;
				if ((((int32_t)L_3) == ((int32_t)1)))
				{
					goto IL_0085_1;
				}
			}
			{
				V_0 = (bool)0;
				goto IL_00cc;
			}

IL_001c_1:
			{
				__this->___U3CU3E1__state_0 = (-1);
				// foreach (var C in Children)
				JSONNode_tD29E53D2E1C8F91FF9FEA40F4F3A540857651D3B* L_4 = V_2;
				NullCheck(L_4);
				RuntimeObject* L_5;
				L_5 = VirtualFuncInvoker0< RuntimeObject* >::Invoke(27 /* System.Collections.Generic.IEnumerable`1<SimpleJSON.JSONNode> SimpleJSON.JSONNode::get_Children() */, L_4);
				NullCheck(L_5);
				RuntimeObject* L_6;
				L_6 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<SimpleJSON.JSONNode>::GetEnumerator() */, IEnumerable_1_tBB6E2A615DFE00A6FE5AE919A482CC24C97ABB04_il2cpp_TypeInfo_var, L_5);
				__this->___U3CU3E7__wrap1_4 = L_6;
				Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E7__wrap1_4), (void*)L_6);
				__this->___U3CU3E1__state_0 = ((int32_t)-3);
				goto IL_00a7_1;
			}

IL_003e_1:
			{
				// foreach (var C in Children)
				RuntimeObject* L_7 = __this->___U3CU3E7__wrap1_4;
				NullCheck(L_7);
				JSONNode_tD29E53D2E1C8F91FF9FEA40F4F3A540857651D3B* L_8;
				L_8 = InterfaceFuncInvoker0< JSONNode_tD29E53D2E1C8F91FF9FEA40F4F3A540857651D3B* >::Invoke(0 /* T System.Collections.Generic.IEnumerator`1<SimpleJSON.JSONNode>::get_Current() */, IEnumerator_1_t49DDBC5AAD0D2D43999136BA0A280005097DCDFD_il2cpp_TypeInfo_var, L_7);
				V_3 = L_8;
				// foreach (var D in C.DeepChildren)
				JSONNode_tD29E53D2E1C8F91FF9FEA40F4F3A540857651D3B* L_9 = V_3;
				NullCheck(L_9);
				RuntimeObject* L_10;
				L_10 = JSONNode_get_DeepChildren_mD1D3C914FF8BCFA0E5AB2754D4C078419872382C(L_9, NULL);
				NullCheck(L_10);
				RuntimeObject* L_11;
				L_11 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<SimpleJSON.JSONNode>::GetEnumerator() */, IEnumerable_1_tBB6E2A615DFE00A6FE5AE919A482CC24C97ABB04_il2cpp_TypeInfo_var, L_10);
				__this->___U3CU3E7__wrap2_5 = L_11;
				Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E7__wrap2_5), (void*)L_11);
				__this->___U3CU3E1__state_0 = ((int32_t)-4);
				goto IL_008d_1;
			}

IL_0065_1:
			{
				// foreach (var D in C.DeepChildren)
				RuntimeObject* L_12 = __this->___U3CU3E7__wrap2_5;
				NullCheck(L_12);
				JSONNode_tD29E53D2E1C8F91FF9FEA40F4F3A540857651D3B* L_13;
				L_13 = InterfaceFuncInvoker0< JSONNode_tD29E53D2E1C8F91FF9FEA40F4F3A540857651D3B* >::Invoke(0 /* T System.Collections.Generic.IEnumerator`1<SimpleJSON.JSONNode>::get_Current() */, IEnumerator_1_t49DDBC5AAD0D2D43999136BA0A280005097DCDFD_il2cpp_TypeInfo_var, L_12);
				V_4 = L_13;
				// yield return D;
				JSONNode_tD29E53D2E1C8F91FF9FEA40F4F3A540857651D3B* L_14 = V_4;
				__this->___U3CU3E2__current_1 = L_14;
				Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_14);
				__this->___U3CU3E1__state_0 = 1;
				V_0 = (bool)1;
				goto IL_00cc;
			}

IL_0085_1:
			{
				__this->___U3CU3E1__state_0 = ((int32_t)-4);
			}

IL_008d_1:
			{
				// foreach (var D in C.DeepChildren)
				RuntimeObject* L_15 = __this->___U3CU3E7__wrap2_5;
				NullCheck(L_15);
				bool L_16;
				L_16 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_15);
				if (L_16)
				{
					goto IL_0065_1;
				}
			}
			{
				U3Cget_DeepChildrenU3Ed__45_U3CU3Em__Finally2_mCB1A856D0AB5D410AB35053750B48C44723E5F3F(__this, NULL);
				__this->___U3CU3E7__wrap2_5 = (RuntimeObject*)NULL;
				Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E7__wrap2_5), (void*)(RuntimeObject*)NULL);
			}

IL_00a7_1:
			{
				// foreach (var C in Children)
				RuntimeObject* L_17 = __this->___U3CU3E7__wrap1_4;
				NullCheck(L_17);
				bool L_18;
				L_18 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_17);
				if (L_18)
				{
					goto IL_003e_1;
				}
			}
			{
				U3Cget_DeepChildrenU3Ed__45_U3CU3Em__Finally1_m0FDB38B46AB417AB10B0E107EA0C1968D6E8F593(__this, NULL);
				__this->___U3CU3E7__wrap1_4 = (RuntimeObject*)NULL;
				Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E7__wrap1_4), (void*)(RuntimeObject*)NULL);
				// }
				V_0 = (bool)0;
				goto IL_00cc;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00cc:
	{
		bool L_19 = V_0;
		return L_19;
	}
}
// System.Void SimpleJSON.JSONNode/<get_DeepChildren>d__45::<>m__Finally1()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3Cget_DeepChildrenU3Ed__45_U3CU3Em__Finally1_m0FDB38B46AB417AB10B0E107EA0C1968D6E8F593 (U3Cget_DeepChildrenU3Ed__45_tB8D5A24DD52825340B1A0A9505719E91C72CE533* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		__this->___U3CU3E1__state_0 = (-1);
		RuntimeObject* L_0 = __this->___U3CU3E7__wrap1_4;
		if (!L_0)
		{
			goto IL_001a;
		}
	}
	{
		RuntimeObject* L_1 = __this->___U3CU3E7__wrap1_4;
		NullCheck(L_1);
		InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_1);
	}

IL_001a:
	{
		return;
	}
}
// System.Void SimpleJSON.JSONNode/<get_DeepChildren>d__45::<>m__Finally2()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3Cget_DeepChildrenU3Ed__45_U3CU3Em__Finally2_mCB1A856D0AB5D410AB35053750B48C44723E5F3F (U3Cget_DeepChildrenU3Ed__45_tB8D5A24DD52825340B1A0A9505719E91C72CE533* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		__this->___U3CU3E1__state_0 = ((int32_t)-3);
		RuntimeObject* L_0 = __this->___U3CU3E7__wrap2_5;
		if (!L_0)
		{
			goto IL_001b;
		}
	}
	{
		RuntimeObject* L_1 = __this->___U3CU3E7__wrap2_5;
		NullCheck(L_1);
		InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_1);
	}

IL_001b:
	{
		return;
	}
}
// SimpleJSON.JSONNode SimpleJSON.JSONNode/<get_DeepChildren>d__45::System.Collections.Generic.IEnumerator<SimpleJSON.JSONNode>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR JSONNode_tD29E53D2E1C8F91FF9FEA40F4F3A540857651D3B* U3Cget_DeepChildrenU3Ed__45_System_Collections_Generic_IEnumeratorU3CSimpleJSON_JSONNodeU3E_get_Current_m88AAF21D8F95C42CAA6899248D5ECA58ABB15A3F (U3Cget_DeepChildrenU3Ed__45_tB8D5A24DD52825340B1A0A9505719E91C72CE533* __this, const RuntimeMethod* method) 
{
	{
		JSONNode_tD29E53D2E1C8F91FF9FEA40F4F3A540857651D3B* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void SimpleJSON.JSONNode/<get_DeepChildren>d__45::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3Cget_DeepChildrenU3Ed__45_System_Collections_IEnumerator_Reset_m7567A00E7D5529C7D739EA350A62C378748DCDFC (U3Cget_DeepChildrenU3Ed__45_tB8D5A24DD52825340B1A0A9505719E91C72CE533* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3Cget_DeepChildrenU3Ed__45_System_Collections_IEnumerator_Reset_m7567A00E7D5529C7D739EA350A62C378748DCDFC_RuntimeMethod_var)));
	}
}
// System.Object SimpleJSON.JSONNode/<get_DeepChildren>d__45::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3Cget_DeepChildrenU3Ed__45_System_Collections_IEnumerator_get_Current_m32FD793551336C42CFB457EE13B5944AE21E4D46 (U3Cget_DeepChildrenU3Ed__45_tB8D5A24DD52825340B1A0A9505719E91C72CE533* __this, const RuntimeMethod* method) 
{
	{
		JSONNode_tD29E53D2E1C8F91FF9FEA40F4F3A540857651D3B* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Collections.Generic.IEnumerator`1<SimpleJSON.JSONNode> SimpleJSON.JSONNode/<get_DeepChildren>d__45::System.Collections.Generic.IEnumerable<SimpleJSON.JSONNode>.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3Cget_DeepChildrenU3Ed__45_System_Collections_Generic_IEnumerableU3CSimpleJSON_JSONNodeU3E_GetEnumerator_m70890544EB63E0647333BEAAA1F3C6D40E198C78 (U3Cget_DeepChildrenU3Ed__45_tB8D5A24DD52825340B1A0A9505719E91C72CE533* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3Cget_DeepChildrenU3Ed__45_tB8D5A24DD52825340B1A0A9505719E91C72CE533_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3Cget_DeepChildrenU3Ed__45_tB8D5A24DD52825340B1A0A9505719E91C72CE533* V_0 = NULL;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		if ((!(((uint32_t)L_0) == ((uint32_t)((int32_t)-2)))))
		{
			goto IL_0022;
		}
	}
	{
		int32_t L_1 = __this->___U3CU3El__initialThreadId_2;
		int32_t L_2;
		L_2 = Environment_get_CurrentManagedThreadId_mEC09D20ED666BC3277AC9D16B68AA287E5AFE1B2(NULL);
		if ((!(((uint32_t)L_1) == ((uint32_t)L_2))))
		{
			goto IL_0022;
		}
	}
	{
		__this->___U3CU3E1__state_0 = 0;
		V_0 = __this;
		goto IL_0035;
	}

IL_0022:
	{
		U3Cget_DeepChildrenU3Ed__45_tB8D5A24DD52825340B1A0A9505719E91C72CE533* L_3 = (U3Cget_DeepChildrenU3Ed__45_tB8D5A24DD52825340B1A0A9505719E91C72CE533*)il2cpp_codegen_object_new(U3Cget_DeepChildrenU3Ed__45_tB8D5A24DD52825340B1A0A9505719E91C72CE533_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		U3Cget_DeepChildrenU3Ed__45__ctor_m0B6485C3B6916E6C6AE17ED440C882ECF25D0C31(L_3, 0, NULL);
		V_0 = L_3;
		U3Cget_DeepChildrenU3Ed__45_tB8D5A24DD52825340B1A0A9505719E91C72CE533* L_4 = V_0;
		JSONNode_tD29E53D2E1C8F91FF9FEA40F4F3A540857651D3B* L_5 = __this->___U3CU3E4__this_3;
		NullCheck(L_4);
		L_4->___U3CU3E4__this_3 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&L_4->___U3CU3E4__this_3), (void*)L_5);
	}

IL_0035:
	{
		U3Cget_DeepChildrenU3Ed__45_tB8D5A24DD52825340B1A0A9505719E91C72CE533* L_6 = V_0;
		return L_6;
	}
}
// System.Collections.IEnumerator SimpleJSON.JSONNode/<get_DeepChildren>d__45::System.Collections.IEnumerable.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3Cget_DeepChildrenU3Ed__45_System_Collections_IEnumerable_GetEnumerator_m376DD8C810CC68F41E06BA1ABEC82F800709A5DB (U3Cget_DeepChildrenU3Ed__45_tB8D5A24DD52825340B1A0A9505719E91C72CE533* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0;
		L_0 = U3Cget_DeepChildrenU3Ed__45_System_Collections_Generic_IEnumerableU3CSimpleJSON_JSONNodeU3E_GetEnumerator_m70890544EB63E0647333BEAAA1F3C6D40E198C78(__this, NULL);
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
// System.Boolean SimpleJSON.JSONArray::get_Inline()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool JSONArray_get_Inline_m57DF2A59C6F6388D7BF749289FE7E7DE9B6BE22B (JSONArray_tDB47C85E2DDB2CB4A972E4C0685D82E00490CB25* __this, const RuntimeMethod* method) 
{
	{
		// get { return inline; }
		bool L_0 = __this->___inline_5;
		return L_0;
	}
}
// System.Void SimpleJSON.JSONArray::set_Inline(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JSONArray_set_Inline_m99DD98A1B3C40F74F47B4061C2E3FB843FBFCCD3 (JSONArray_tDB47C85E2DDB2CB4A972E4C0685D82E00490CB25* __this, bool ___value0, const RuntimeMethod* method) 
{
	{
		// set { inline = value; }
		bool L_0 = ___value0;
		__this->___inline_5 = L_0;
		// set { inline = value; }
		return;
	}
}
// SimpleJSON.JSONNodeType SimpleJSON.JSONArray::get_Tag()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t JSONArray_get_Tag_m9EABB5C2411442E94EC6ED8C0D0AA7CF506E5B74 (JSONArray_tDB47C85E2DDB2CB4A972E4C0685D82E00490CB25* __this, const RuntimeMethod* method) 
{
	{
		// public override JSONNodeType Tag { get { return JSONNodeType.Array; } }
		return (int32_t)(1);
	}
}
// System.Boolean SimpleJSON.JSONArray::get_IsArray()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool JSONArray_get_IsArray_m45E7FEA5F5EB7BE46506C79324B72F0F0AC01B8F (JSONArray_tDB47C85E2DDB2CB4A972E4C0685D82E00490CB25* __this, const RuntimeMethod* method) 
{
	{
		// public override bool IsArray { get { return true; } }
		return (bool)1;
	}
}
// SimpleJSON.JSONNode/Enumerator SimpleJSON.JSONArray::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_tA1F999D27FB3CE7FB0AC8D9BD4084CBA9E687C1F JSONArray_GetEnumerator_m1B36BBC959521C5CA692066AF7203D8F4325838D (JSONArray_tDB47C85E2DDB2CB4A972E4C0685D82E00490CB25* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_m2ABBF46AA2F1090503EFFF7B8ECCD8FB679D0168_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public override Enumerator GetEnumerator() { return new Enumerator(m_List.GetEnumerator()); }
		List_1_t82186C961793D19A01F84E3AB82A2146C6F979C4* L_0 = __this->___m_List_4;
		NullCheck(L_0);
		Enumerator_t81A423E0F04B93279CA04B31DF14EDE9DE3F30AA L_1;
		L_1 = List_1_GetEnumerator_m2ABBF46AA2F1090503EFFF7B8ECCD8FB679D0168(L_0, List_1_GetEnumerator_m2ABBF46AA2F1090503EFFF7B8ECCD8FB679D0168_RuntimeMethod_var);
		Enumerator_tA1F999D27FB3CE7FB0AC8D9BD4084CBA9E687C1F L_2;
		memset((&L_2), 0, sizeof(L_2));
		Enumerator__ctor_m2D9317706FE33C279EEE64ADBA3A301F86CBD5A4((&L_2), L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// SimpleJSON.JSONNode SimpleJSON.JSONArray::get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR JSONNode_tD29E53D2E1C8F91FF9FEA40F4F3A540857651D3B* JSONArray_get_Item_m4EA9D4267C22189BC82BFE789BB0F96495A456E2 (JSONArray_tDB47C85E2DDB2CB4A972E4C0685D82E00490CB25* __this, int32_t ___aIndex0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JSONLazyCreator_t67A874365EE690A6837C36B8C9214BCBD04C1C00_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m6F60F98E27BD1E63972A86B9EE94FAF256598C4A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m39B501262E2772265E587E27634C346A3B31C74B_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (aIndex < 0 || aIndex >= m_List.Count)
		int32_t L_0 = ___aIndex0;
		if ((((int32_t)L_0) < ((int32_t)0)))
		{
			goto IL_0012;
		}
	}
	{
		int32_t L_1 = ___aIndex0;
		List_1_t82186C961793D19A01F84E3AB82A2146C6F979C4* L_2 = __this->___m_List_4;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = List_1_get_Count_m6F60F98E27BD1E63972A86B9EE94FAF256598C4A_inline(L_2, List_1_get_Count_m6F60F98E27BD1E63972A86B9EE94FAF256598C4A_RuntimeMethod_var);
		if ((((int32_t)L_1) < ((int32_t)L_3)))
		{
			goto IL_0019;
		}
	}

IL_0012:
	{
		// return new JSONLazyCreator(this);
		JSONLazyCreator_t67A874365EE690A6837C36B8C9214BCBD04C1C00* L_4 = (JSONLazyCreator_t67A874365EE690A6837C36B8C9214BCBD04C1C00*)il2cpp_codegen_object_new(JSONLazyCreator_t67A874365EE690A6837C36B8C9214BCBD04C1C00_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		JSONLazyCreator__ctor_mF05058E0DB09E0C896205345A7E6C44B6DE814D1(L_4, __this, NULL);
		return L_4;
	}

IL_0019:
	{
		// return m_List[aIndex];
		List_1_t82186C961793D19A01F84E3AB82A2146C6F979C4* L_5 = __this->___m_List_4;
		int32_t L_6 = ___aIndex0;
		NullCheck(L_5);
		JSONNode_tD29E53D2E1C8F91FF9FEA40F4F3A540857651D3B* L_7;
		L_7 = List_1_get_Item_m39B501262E2772265E587E27634C346A3B31C74B(L_5, L_6, List_1_get_Item_m39B501262E2772265E587E27634C346A3B31C74B_RuntimeMethod_var);
		return L_7;
	}
}
// System.Void SimpleJSON.JSONArray::set_Item(System.Int32,SimpleJSON.JSONNode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JSONArray_set_Item_m3CC4C20D5B6DE55CA4E23CECB6020020F42EAEB8 (JSONArray_tDB47C85E2DDB2CB4A972E4C0685D82E00490CB25* __this, int32_t ___aIndex0, JSONNode_tD29E53D2E1C8F91FF9FEA40F4F3A540857651D3B* ___value1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JSONNode_tD29E53D2E1C8F91FF9FEA40F4F3A540857651D3B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JSONNull_tEE66558FCE6029B3F1414C062F5E38E0530BD69A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mAED0B3BF4DD4391B86D3FAECFD32599267E7588B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m6F60F98E27BD1E63972A86B9EE94FAF256598C4A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_set_Item_mBE1F797497EC203914E95B1F5DE445D9DB8BCD09_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (value == null)
		JSONNode_tD29E53D2E1C8F91FF9FEA40F4F3A540857651D3B* L_0 = ___value1;
		il2cpp_codegen_runtime_class_init_inline(JSONNode_tD29E53D2E1C8F91FF9FEA40F4F3A540857651D3B_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = JSONNode_op_Equality_mA07D467DFB678DC61E7B2A43E87B7D4F6CB5B556(L_0, NULL, NULL);
		if (!L_1)
		{
			goto IL_0010;
		}
	}
	{
		// value = JSONNull.CreateOrGet();
		il2cpp_codegen_runtime_class_init_inline(JSONNull_tEE66558FCE6029B3F1414C062F5E38E0530BD69A_il2cpp_TypeInfo_var);
		JSONNull_tEE66558FCE6029B3F1414C062F5E38E0530BD69A* L_2;
		L_2 = JSONNull_CreateOrGet_m8A46E28FE2DA1E537F51FA071E580ABC21DB5701(NULL);
		___value1 = L_2;
	}

IL_0010:
	{
		// if (aIndex < 0 || aIndex >= m_List.Count)
		int32_t L_3 = ___aIndex0;
		if ((((int32_t)L_3) < ((int32_t)0)))
		{
			goto IL_0022;
		}
	}
	{
		int32_t L_4 = ___aIndex0;
		List_1_t82186C961793D19A01F84E3AB82A2146C6F979C4* L_5 = __this->___m_List_4;
		NullCheck(L_5);
		int32_t L_6;
		L_6 = List_1_get_Count_m6F60F98E27BD1E63972A86B9EE94FAF256598C4A_inline(L_5, List_1_get_Count_m6F60F98E27BD1E63972A86B9EE94FAF256598C4A_RuntimeMethod_var);
		if ((((int32_t)L_4) < ((int32_t)L_6)))
		{
			goto IL_002f;
		}
	}

IL_0022:
	{
		// m_List.Add(value);
		List_1_t82186C961793D19A01F84E3AB82A2146C6F979C4* L_7 = __this->___m_List_4;
		JSONNode_tD29E53D2E1C8F91FF9FEA40F4F3A540857651D3B* L_8 = ___value1;
		NullCheck(L_7);
		List_1_Add_mAED0B3BF4DD4391B86D3FAECFD32599267E7588B_inline(L_7, L_8, List_1_Add_mAED0B3BF4DD4391B86D3FAECFD32599267E7588B_RuntimeMethod_var);
		return;
	}

IL_002f:
	{
		// m_List[aIndex] = value;
		List_1_t82186C961793D19A01F84E3AB82A2146C6F979C4* L_9 = __this->___m_List_4;
		int32_t L_10 = ___aIndex0;
		JSONNode_tD29E53D2E1C8F91FF9FEA40F4F3A540857651D3B* L_11 = ___value1;
		NullCheck(L_9);
		List_1_set_Item_mBE1F797497EC203914E95B1F5DE445D9DB8BCD09(L_9, L_10, L_11, List_1_set_Item_mBE1F797497EC203914E95B1F5DE445D9DB8BCD09_RuntimeMethod_var);
		// }
		return;
	}
}
// SimpleJSON.JSONNode SimpleJSON.JSONArray::get_Item(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR JSONNode_tD29E53D2E1C8F91FF9FEA40F4F3A540857651D3B* JSONArray_get_Item_m793F58AB036EF0E96A60D36603F8861C0B3F184F (JSONArray_tDB47C85E2DDB2CB4A972E4C0685D82E00490CB25* __this, String_t* ___aKey0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JSONLazyCreator_t67A874365EE690A6837C36B8C9214BCBD04C1C00_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// get { return new JSONLazyCreator(this); }
		JSONLazyCreator_t67A874365EE690A6837C36B8C9214BCBD04C1C00* L_0 = (JSONLazyCreator_t67A874365EE690A6837C36B8C9214BCBD04C1C00*)il2cpp_codegen_object_new(JSONLazyCreator_t67A874365EE690A6837C36B8C9214BCBD04C1C00_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		JSONLazyCreator__ctor_mF05058E0DB09E0C896205345A7E6C44B6DE814D1(L_0, __this, NULL);
		return L_0;
	}
}
// System.Void SimpleJSON.JSONArray::set_Item(System.String,SimpleJSON.JSONNode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JSONArray_set_Item_mB2D7640A550EC61047D6E65190D4195156BAC4B3 (JSONArray_tDB47C85E2DDB2CB4A972E4C0685D82E00490CB25* __this, String_t* ___aKey0, JSONNode_tD29E53D2E1C8F91FF9FEA40F4F3A540857651D3B* ___value1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JSONNode_tD29E53D2E1C8F91FF9FEA40F4F3A540857651D3B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JSONNull_tEE66558FCE6029B3F1414C062F5E38E0530BD69A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mAED0B3BF4DD4391B86D3FAECFD32599267E7588B_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (value == null)
		JSONNode_tD29E53D2E1C8F91FF9FEA40F4F3A540857651D3B* L_0 = ___value1;
		il2cpp_codegen_runtime_class_init_inline(JSONNode_tD29E53D2E1C8F91FF9FEA40F4F3A540857651D3B_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = JSONNode_op_Equality_mA07D467DFB678DC61E7B2A43E87B7D4F6CB5B556(L_0, NULL, NULL);
		if (!L_1)
		{
			goto IL_0010;
		}
	}
	{
		// value = JSONNull.CreateOrGet();
		il2cpp_codegen_runtime_class_init_inline(JSONNull_tEE66558FCE6029B3F1414C062F5E38E0530BD69A_il2cpp_TypeInfo_var);
		JSONNull_tEE66558FCE6029B3F1414C062F5E38E0530BD69A* L_2;
		L_2 = JSONNull_CreateOrGet_m8A46E28FE2DA1E537F51FA071E580ABC21DB5701(NULL);
		___value1 = L_2;
	}

IL_0010:
	{
		// m_List.Add(value);
		List_1_t82186C961793D19A01F84E3AB82A2146C6F979C4* L_3 = __this->___m_List_4;
		JSONNode_tD29E53D2E1C8F91FF9FEA40F4F3A540857651D3B* L_4 = ___value1;
		NullCheck(L_3);
		List_1_Add_mAED0B3BF4DD4391B86D3FAECFD32599267E7588B_inline(L_3, L_4, List_1_Add_mAED0B3BF4DD4391B86D3FAECFD32599267E7588B_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Int32 SimpleJSON.JSONArray::get_Count()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t JSONArray_get_Count_m39B875EC2649E904B6CDFF1F26A95718F74F7CA3 (JSONArray_tDB47C85E2DDB2CB4A972E4C0685D82E00490CB25* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m6F60F98E27BD1E63972A86B9EE94FAF256598C4A_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// get { return m_List.Count; }
		List_1_t82186C961793D19A01F84E3AB82A2146C6F979C4* L_0 = __this->___m_List_4;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = List_1_get_Count_m6F60F98E27BD1E63972A86B9EE94FAF256598C4A_inline(L_0, List_1_get_Count_m6F60F98E27BD1E63972A86B9EE94FAF256598C4A_RuntimeMethod_var);
		return L_1;
	}
}
// System.Void SimpleJSON.JSONArray::Add(System.String,SimpleJSON.JSONNode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JSONArray_Add_m57A37D45AB14CFB46C07AFEE2C100F57E178E6C4 (JSONArray_tDB47C85E2DDB2CB4A972E4C0685D82E00490CB25* __this, String_t* ___aKey0, JSONNode_tD29E53D2E1C8F91FF9FEA40F4F3A540857651D3B* ___aItem1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JSONNode_tD29E53D2E1C8F91FF9FEA40F4F3A540857651D3B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JSONNull_tEE66558FCE6029B3F1414C062F5E38E0530BD69A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mAED0B3BF4DD4391B86D3FAECFD32599267E7588B_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (aItem == null)
		JSONNode_tD29E53D2E1C8F91FF9FEA40F4F3A540857651D3B* L_0 = ___aItem1;
		il2cpp_codegen_runtime_class_init_inline(JSONNode_tD29E53D2E1C8F91FF9FEA40F4F3A540857651D3B_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = JSONNode_op_Equality_mA07D467DFB678DC61E7B2A43E87B7D4F6CB5B556(L_0, NULL, NULL);
		if (!L_1)
		{
			goto IL_0010;
		}
	}
	{
		// aItem = JSONNull.CreateOrGet();
		il2cpp_codegen_runtime_class_init_inline(JSONNull_tEE66558FCE6029B3F1414C062F5E38E0530BD69A_il2cpp_TypeInfo_var);
		JSONNull_tEE66558FCE6029B3F1414C062F5E38E0530BD69A* L_2;
		L_2 = JSONNull_CreateOrGet_m8A46E28FE2DA1E537F51FA071E580ABC21DB5701(NULL);
		___aItem1 = L_2;
	}

IL_0010:
	{
		// m_List.Add(aItem);
		List_1_t82186C961793D19A01F84E3AB82A2146C6F979C4* L_3 = __this->___m_List_4;
		JSONNode_tD29E53D2E1C8F91FF9FEA40F4F3A540857651D3B* L_4 = ___aItem1;
		NullCheck(L_3);
		List_1_Add_mAED0B3BF4DD4391B86D3FAECFD32599267E7588B_inline(L_3, L_4, List_1_Add_mAED0B3BF4DD4391B86D3FAECFD32599267E7588B_RuntimeMethod_var);
		// }
		return;
	}
}
// SimpleJSON.JSONNode SimpleJSON.JSONArray::Remove(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR JSONNode_tD29E53D2E1C8F91FF9FEA40F4F3A540857651D3B* JSONArray_Remove_m715F3350121DA4EAC5AC7A13DC8538375996E839 (JSONArray_tDB47C85E2DDB2CB4A972E4C0685D82E00490CB25* __this, int32_t ___aIndex0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_RemoveAt_mCF3139E1292366D334488D1F33EEDD213F87B66A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m6F60F98E27BD1E63972A86B9EE94FAF256598C4A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m39B501262E2772265E587E27634C346A3B31C74B_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (aIndex < 0 || aIndex >= m_List.Count)
		int32_t L_0 = ___aIndex0;
		if ((((int32_t)L_0) < ((int32_t)0)))
		{
			goto IL_0012;
		}
	}
	{
		int32_t L_1 = ___aIndex0;
		List_1_t82186C961793D19A01F84E3AB82A2146C6F979C4* L_2 = __this->___m_List_4;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = List_1_get_Count_m6F60F98E27BD1E63972A86B9EE94FAF256598C4A_inline(L_2, List_1_get_Count_m6F60F98E27BD1E63972A86B9EE94FAF256598C4A_RuntimeMethod_var);
		if ((((int32_t)L_1) < ((int32_t)L_3)))
		{
			goto IL_0014;
		}
	}

IL_0012:
	{
		// return null;
		return (JSONNode_tD29E53D2E1C8F91FF9FEA40F4F3A540857651D3B*)NULL;
	}

IL_0014:
	{
		// JSONNode tmp = m_List[aIndex];
		List_1_t82186C961793D19A01F84E3AB82A2146C6F979C4* L_4 = __this->___m_List_4;
		int32_t L_5 = ___aIndex0;
		NullCheck(L_4);
		JSONNode_tD29E53D2E1C8F91FF9FEA40F4F3A540857651D3B* L_6;
		L_6 = List_1_get_Item_m39B501262E2772265E587E27634C346A3B31C74B(L_4, L_5, List_1_get_Item_m39B501262E2772265E587E27634C346A3B31C74B_RuntimeMethod_var);
		// m_List.RemoveAt(aIndex);
		List_1_t82186C961793D19A01F84E3AB82A2146C6F979C4* L_7 = __this->___m_List_4;
		int32_t L_8 = ___aIndex0;
		NullCheck(L_7);
		List_1_RemoveAt_mCF3139E1292366D334488D1F33EEDD213F87B66A(L_7, L_8, List_1_RemoveAt_mCF3139E1292366D334488D1F33EEDD213F87B66A_RuntimeMethod_var);
		// return tmp;
		return L_6;
	}
}
// SimpleJSON.JSONNode SimpleJSON.JSONArray::Remove(SimpleJSON.JSONNode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR JSONNode_tD29E53D2E1C8F91FF9FEA40F4F3A540857651D3B* JSONArray_Remove_m933D0F80E46C7F307F7C399711B342636FE63855 (JSONArray_tDB47C85E2DDB2CB4A972E4C0685D82E00490CB25* __this, JSONNode_tD29E53D2E1C8F91FF9FEA40F4F3A540857651D3B* ___aNode0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Remove_m0448185622BC57438A12CA8BE28F0AB3505C1651_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// m_List.Remove(aNode);
		List_1_t82186C961793D19A01F84E3AB82A2146C6F979C4* L_0 = __this->___m_List_4;
		JSONNode_tD29E53D2E1C8F91FF9FEA40F4F3A540857651D3B* L_1 = ___aNode0;
		NullCheck(L_0);
		bool L_2;
		L_2 = List_1_Remove_m0448185622BC57438A12CA8BE28F0AB3505C1651(L_0, L_1, List_1_Remove_m0448185622BC57438A12CA8BE28F0AB3505C1651_RuntimeMethod_var);
		// return aNode;
		JSONNode_tD29E53D2E1C8F91FF9FEA40F4F3A540857651D3B* L_3 = ___aNode0;
		return L_3;
	}
}
// System.Void SimpleJSON.JSONArray::Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JSONArray_Clear_m51E39BE428BE78D1FEFAD54A24D8C657A7E7571B (JSONArray_tDB47C85E2DDB2CB4A972E4C0685D82E00490CB25* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Clear_m45B21862637CFCBDDD2387CF514BE027051639CE_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// m_List.Clear();
		List_1_t82186C961793D19A01F84E3AB82A2146C6F979C4* L_0 = __this->___m_List_4;
		NullCheck(L_0);
		List_1_Clear_m45B21862637CFCBDDD2387CF514BE027051639CE_inline(L_0, List_1_Clear_m45B21862637CFCBDDD2387CF514BE027051639CE_RuntimeMethod_var);
		// }
		return;
	}
}
// SimpleJSON.JSONNode SimpleJSON.JSONArray::Clone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR JSONNode_tD29E53D2E1C8F91FF9FEA40F4F3A540857651D3B* JSONArray_Clone_m4654110FAA8F4AD1BB93782833B347E1CB0AC2E9 (JSONArray_tDB47C85E2DDB2CB4A972E4C0685D82E00490CB25* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_mE0AEC0BF430B01595C081CE7115C6CBE413D16D0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_mB1C31B2A291986F6CD5A79C9F75196088363BF2D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m44F4D4F7899D0688C1E68E1457EBDBC2D26F91CC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JSONArray_tDB47C85E2DDB2CB4A972E4C0685D82E00490CB25_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JSONNode_tD29E53D2E1C8F91FF9FEA40F4F3A540857651D3B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_m2ABBF46AA2F1090503EFFF7B8ECCD8FB679D0168_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Capacity_m161E64B32DBB42C60E2FBF39B39675DA3B96F533_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_set_Capacity_mB03AF377BCE94EB246C2D3DB5E48F6E32F8DB272_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	JSONArray_tDB47C85E2DDB2CB4A972E4C0685D82E00490CB25* V_0 = NULL;
	Enumerator_t81A423E0F04B93279CA04B31DF14EDE9DE3F30AA V_1;
	memset((&V_1), 0, sizeof(V_1));
	JSONNode_tD29E53D2E1C8F91FF9FEA40F4F3A540857651D3B* V_2 = NULL;
	{
		// var node = new JSONArray();
		JSONArray_tDB47C85E2DDB2CB4A972E4C0685D82E00490CB25* L_0 = (JSONArray_tDB47C85E2DDB2CB4A972E4C0685D82E00490CB25*)il2cpp_codegen_object_new(JSONArray_tDB47C85E2DDB2CB4A972E4C0685D82E00490CB25_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		JSONArray__ctor_m19BBACE404D8C75AC41AC9CB4702C0943401D071(L_0, NULL);
		V_0 = L_0;
		// node.m_List.Capacity = m_List.Capacity;
		JSONArray_tDB47C85E2DDB2CB4A972E4C0685D82E00490CB25* L_1 = V_0;
		NullCheck(L_1);
		List_1_t82186C961793D19A01F84E3AB82A2146C6F979C4* L_2 = L_1->___m_List_4;
		List_1_t82186C961793D19A01F84E3AB82A2146C6F979C4* L_3 = __this->___m_List_4;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = List_1_get_Capacity_m161E64B32DBB42C60E2FBF39B39675DA3B96F533(L_3, List_1_get_Capacity_m161E64B32DBB42C60E2FBF39B39675DA3B96F533_RuntimeMethod_var);
		NullCheck(L_2);
		List_1_set_Capacity_mB03AF377BCE94EB246C2D3DB5E48F6E32F8DB272(L_2, L_4, List_1_set_Capacity_mB03AF377BCE94EB246C2D3DB5E48F6E32F8DB272_RuntimeMethod_var);
		// foreach (var n in m_List)
		List_1_t82186C961793D19A01F84E3AB82A2146C6F979C4* L_5 = __this->___m_List_4;
		NullCheck(L_5);
		Enumerator_t81A423E0F04B93279CA04B31DF14EDE9DE3F30AA L_6;
		L_6 = List_1_GetEnumerator_m2ABBF46AA2F1090503EFFF7B8ECCD8FB679D0168(L_5, List_1_GetEnumerator_m2ABBF46AA2F1090503EFFF7B8ECCD8FB679D0168_RuntimeMethod_var);
		V_1 = L_6;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_005b:
			{// begin finally (depth: 1)
				Enumerator_Dispose_mE0AEC0BF430B01595C081CE7115C6CBE413D16D0((&V_1), Enumerator_Dispose_mE0AEC0BF430B01595C081CE7115C6CBE413D16D0_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_0050_1;
			}

IL_002a_1:
			{
				// foreach (var n in m_List)
				JSONNode_tD29E53D2E1C8F91FF9FEA40F4F3A540857651D3B* L_7;
				L_7 = Enumerator_get_Current_m44F4D4F7899D0688C1E68E1457EBDBC2D26F91CC_inline((&V_1), Enumerator_get_Current_m44F4D4F7899D0688C1E68E1457EBDBC2D26F91CC_RuntimeMethod_var);
				V_2 = L_7;
				// if (n != null)
				JSONNode_tD29E53D2E1C8F91FF9FEA40F4F3A540857651D3B* L_8 = V_2;
				il2cpp_codegen_runtime_class_init_inline(JSONNode_tD29E53D2E1C8F91FF9FEA40F4F3A540857651D3B_il2cpp_TypeInfo_var);
				bool L_9;
				L_9 = JSONNode_op_Inequality_m7050845D0269F25ED099612FACF1BB706EB45D30(L_8, NULL, NULL);
				if (!L_9)
				{
					goto IL_0049_1;
				}
			}
			{
				// node.Add(n.Clone());
				JSONArray_tDB47C85E2DDB2CB4A972E4C0685D82E00490CB25* L_10 = V_0;
				JSONNode_tD29E53D2E1C8F91FF9FEA40F4F3A540857651D3B* L_11 = V_2;
				NullCheck(L_11);
				JSONNode_tD29E53D2E1C8F91FF9FEA40F4F3A540857651D3B* L_12;
				L_12 = VirtualFuncInvoker0< JSONNode_tD29E53D2E1C8F91FF9FEA40F4F3A540857651D3B* >::Invoke(26 /* SimpleJSON.JSONNode SimpleJSON.JSONNode::Clone() */, L_11);
				NullCheck(L_10);
				VirtualActionInvoker1< JSONNode_tD29E53D2E1C8F91FF9FEA40F4F3A540857651D3B* >::Invoke(21 /* System.Void SimpleJSON.JSONNode::Add(SimpleJSON.JSONNode) */, L_10, L_12);
				goto IL_0050_1;
			}

IL_0049_1:
			{
				// node.Add(null);
				JSONArray_tDB47C85E2DDB2CB4A972E4C0685D82E00490CB25* L_13 = V_0;
				NullCheck(L_13);
				VirtualActionInvoker1< JSONNode_tD29E53D2E1C8F91FF9FEA40F4F3A540857651D3B* >::Invoke(21 /* System.Void SimpleJSON.JSONNode::Add(SimpleJSON.JSONNode) */, L_13, (JSONNode_tD29E53D2E1C8F91FF9FEA40F4F3A540857651D3B*)NULL);
			}

IL_0050_1:
			{
				// foreach (var n in m_List)
				bool L_14;
				L_14 = Enumerator_MoveNext_mB1C31B2A291986F6CD5A79C9F75196088363BF2D((&V_1), Enumerator_MoveNext_mB1C31B2A291986F6CD5A79C9F75196088363BF2D_RuntimeMethod_var);
				if (L_14)
				{
					goto IL_002a_1;
				}
			}
			{
				goto IL_0069;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0069:
	{
		// return node;
		JSONArray_tDB47C85E2DDB2CB4A972E4C0685D82E00490CB25* L_15 = V_0;
		return L_15;
	}
}
// System.Collections.Generic.IEnumerable`1<SimpleJSON.JSONNode> SimpleJSON.JSONArray::get_Children()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* JSONArray_get_Children_m698598DCA3416D55C7D9AE7A44F4112A70498A7A (JSONArray_tDB47C85E2DDB2CB4A972E4C0685D82E00490CB25* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3Cget_ChildrenU3Ed__24_t2556BF7E4766181D4B361F546D8C3C38CC3F56F5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3Cget_ChildrenU3Ed__24_t2556BF7E4766181D4B361F546D8C3C38CC3F56F5* L_0 = (U3Cget_ChildrenU3Ed__24_t2556BF7E4766181D4B361F546D8C3C38CC3F56F5*)il2cpp_codegen_object_new(U3Cget_ChildrenU3Ed__24_t2556BF7E4766181D4B361F546D8C3C38CC3F56F5_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3Cget_ChildrenU3Ed__24__ctor_m23E8A656E0A6CF03A56EE0446B20D9539FD2374E(L_0, ((int32_t)-2), NULL);
		U3Cget_ChildrenU3Ed__24_t2556BF7E4766181D4B361F546D8C3C38CC3F56F5* L_1 = L_0;
		NullCheck(L_1);
		L_1->___U3CU3E4__this_3 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_3), (void*)__this);
		return L_1;
	}
}
// System.Void SimpleJSON.JSONArray::WriteToStringBuilder(System.Text.StringBuilder,System.Int32,System.Int32,SimpleJSON.JSONTextMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JSONArray_WriteToStringBuilder_m1E3DF0273950859E9E3F527B80E1A2D84357082C (JSONArray_tDB47C85E2DDB2CB4A972E4C0685D82E00490CB25* __this, StringBuilder_t* ___aSB0, int32_t ___aIndent1, int32_t ___aIndentInc2, int32_t ___aMode3, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m6F60F98E27BD1E63972A86B9EE94FAF256598C4A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m39B501262E2772265E587E27634C346A3B31C74B_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		// aSB.Append('[');
		StringBuilder_t* L_0 = ___aSB0;
		NullCheck(L_0);
		StringBuilder_t* L_1;
		L_1 = StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1(L_0, ((int32_t)91), NULL);
		// int count = m_List.Count;
		List_1_t82186C961793D19A01F84E3AB82A2146C6F979C4* L_2 = __this->___m_List_4;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = List_1_get_Count_m6F60F98E27BD1E63972A86B9EE94FAF256598C4A_inline(L_2, List_1_get_Count_m6F60F98E27BD1E63972A86B9EE94FAF256598C4A_RuntimeMethod_var);
		V_0 = L_3;
		// if (inline)
		bool L_4 = __this->___inline_5;
		if (!L_4)
		{
			goto IL_0020;
		}
	}
	{
		// aMode = JSONTextMode.Compact;
		___aMode3 = 0;
	}

IL_0020:
	{
		// for (int i = 0; i < count; i++)
		V_1 = 0;
		goto IL_006a;
	}

IL_0024:
	{
		// if (i > 0)
		int32_t L_5 = V_1;
		if ((((int32_t)L_5) <= ((int32_t)0)))
		{
			goto IL_0031;
		}
	}
	{
		// aSB.Append(',');
		StringBuilder_t* L_6 = ___aSB0;
		NullCheck(L_6);
		StringBuilder_t* L_7;
		L_7 = StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1(L_6, ((int32_t)44), NULL);
	}

IL_0031:
	{
		// if (aMode == JSONTextMode.Indent)
		int32_t L_8 = ___aMode3;
		if ((!(((uint32_t)L_8) == ((uint32_t)1))))
		{
			goto IL_003d;
		}
	}
	{
		// aSB.AppendLine();
		StringBuilder_t* L_9 = ___aSB0;
		NullCheck(L_9);
		StringBuilder_t* L_10;
		L_10 = StringBuilder_AppendLine_m3BC704C4E6A8531027D8C9287D0AB2AA0188AC4E(L_9, NULL);
	}

IL_003d:
	{
		// if (aMode == JSONTextMode.Indent)
		int32_t L_11 = ___aMode3;
		if ((!(((uint32_t)L_11) == ((uint32_t)1))))
		{
			goto IL_004e;
		}
	}
	{
		// aSB.Append(' ', aIndent + aIndentInc);
		StringBuilder_t* L_12 = ___aSB0;
		int32_t L_13 = ___aIndent1;
		int32_t L_14 = ___aIndentInc2;
		NullCheck(L_12);
		StringBuilder_t* L_15;
		L_15 = StringBuilder_Append_mE20F6CD28FC8E8C9FD65987DBD32E6087CCE1CF3(L_12, ((int32_t)32), ((int32_t)il2cpp_codegen_add(L_13, L_14)), NULL);
	}

IL_004e:
	{
		// m_List[i].WriteToStringBuilder(aSB, aIndent + aIndentInc, aIndentInc, aMode);
		List_1_t82186C961793D19A01F84E3AB82A2146C6F979C4* L_16 = __this->___m_List_4;
		int32_t L_17 = V_1;
		NullCheck(L_16);
		JSONNode_tD29E53D2E1C8F91FF9FEA40F4F3A540857651D3B* L_18;
		L_18 = List_1_get_Item_m39B501262E2772265E587E27634C346A3B31C74B(L_16, L_17, List_1_get_Item_m39B501262E2772265E587E27634C346A3B31C74B_RuntimeMethod_var);
		StringBuilder_t* L_19 = ___aSB0;
		int32_t L_20 = ___aIndent1;
		int32_t L_21 = ___aIndentInc2;
		int32_t L_22 = ___aIndentInc2;
		int32_t L_23 = ___aMode3;
		NullCheck(L_18);
		VirtualActionInvoker4< StringBuilder_t*, int32_t, int32_t, int32_t >::Invoke(31 /* System.Void SimpleJSON.JSONNode::WriteToStringBuilder(System.Text.StringBuilder,System.Int32,System.Int32,SimpleJSON.JSONTextMode) */, L_18, L_19, ((int32_t)il2cpp_codegen_add(L_20, L_21)), L_22, L_23);
		// for (int i = 0; i < count; i++)
		int32_t L_24 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_24, 1));
	}

IL_006a:
	{
		// for (int i = 0; i < count; i++)
		int32_t L_25 = V_1;
		int32_t L_26 = V_0;
		if ((((int32_t)L_25) < ((int32_t)L_26)))
		{
			goto IL_0024;
		}
	}
	{
		// if (aMode == JSONTextMode.Indent)
		int32_t L_27 = ___aMode3;
		if ((!(((uint32_t)L_27) == ((uint32_t)1))))
		{
			goto IL_0082;
		}
	}
	{
		// aSB.AppendLine().Append(' ', aIndent);
		StringBuilder_t* L_28 = ___aSB0;
		NullCheck(L_28);
		StringBuilder_t* L_29;
		L_29 = StringBuilder_AppendLine_m3BC704C4E6A8531027D8C9287D0AB2AA0188AC4E(L_28, NULL);
		int32_t L_30 = ___aIndent1;
		NullCheck(L_29);
		StringBuilder_t* L_31;
		L_31 = StringBuilder_Append_mE20F6CD28FC8E8C9FD65987DBD32E6087CCE1CF3(L_29, ((int32_t)32), L_30, NULL);
	}

IL_0082:
	{
		// aSB.Append(']');
		StringBuilder_t* L_32 = ___aSB0;
		NullCheck(L_32);
		StringBuilder_t* L_33;
		L_33 = StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1(L_32, ((int32_t)93), NULL);
		// }
		return;
	}
}
// System.Void SimpleJSON.JSONArray::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JSONArray__ctor_m19BBACE404D8C75AC41AC9CB4702C0943401D071 (JSONArray_tDB47C85E2DDB2CB4A972E4C0685D82E00490CB25* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JSONNode_tD29E53D2E1C8F91FF9FEA40F4F3A540857651D3B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m38909E0CD0BF81B3E450AF123312D588B61C29D3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t82186C961793D19A01F84E3AB82A2146C6F979C4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private List<JSONNode> m_List = new List<JSONNode>();
		List_1_t82186C961793D19A01F84E3AB82A2146C6F979C4* L_0 = (List_1_t82186C961793D19A01F84E3AB82A2146C6F979C4*)il2cpp_codegen_object_new(List_1_t82186C961793D19A01F84E3AB82A2146C6F979C4_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		List_1__ctor_m38909E0CD0BF81B3E450AF123312D588B61C29D3(L_0, List_1__ctor_m38909E0CD0BF81B3E450AF123312D588B61C29D3_RuntimeMethod_var);
		__this->___m_List_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_List_4), (void*)L_0);
		il2cpp_codegen_runtime_class_init_inline(JSONNode_tD29E53D2E1C8F91FF9FEA40F4F3A540857651D3B_il2cpp_TypeInfo_var);
		JSONNode__ctor_m4019E01BCFB43E3848591C3E8C97534BA8BC6C49(__this, NULL);
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
// System.Void SimpleJSON.JSONArray/<get_Children>d__24::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3Cget_ChildrenU3Ed__24__ctor_m23E8A656E0A6CF03A56EE0446B20D9539FD2374E (U3Cget_ChildrenU3Ed__24_t2556BF7E4766181D4B361F546D8C3C38CC3F56F5* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->___U3CU3E1__state_0 = L_0;
		int32_t L_1;
		L_1 = Environment_get_CurrentManagedThreadId_mEC09D20ED666BC3277AC9D16B68AA287E5AFE1B2(NULL);
		__this->___U3CU3El__initialThreadId_2 = L_1;
		return;
	}
}
// System.Void SimpleJSON.JSONArray/<get_Children>d__24::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3Cget_ChildrenU3Ed__24_System_IDisposable_Dispose_mF75DFD59588C1DBD190A99829AEAEFE5F0F416B5 (U3Cget_ChildrenU3Ed__24_t2556BF7E4766181D4B361F546D8C3C38CC3F56F5* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)((int32_t)-3))))
		{
			goto IL_0010;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((!(((uint32_t)L_2) == ((uint32_t)1))))
		{
			goto IL_001a;
		}
	}

IL_0010:
	{
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0013:
			{// begin finally (depth: 1)
				U3Cget_ChildrenU3Ed__24_U3CU3Em__Finally1_mA9CD111E2829513DE869E1736B8AE568A615607C(__this, NULL);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			goto IL_001a;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_001a:
	{
		return;
	}
}
// System.Boolean SimpleJSON.JSONArray/<get_Children>d__24::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3Cget_ChildrenU3Ed__24_MoveNext_m6ACFA97E88DCF15E090D82966F37B333E61F7D23 (U3Cget_ChildrenU3Ed__24_t2556BF7E4766181D4B361F546D8C3C38CC3F56F5* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_mB1C31B2A291986F6CD5A79C9F75196088363BF2D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m44F4D4F7899D0688C1E68E1457EBDBC2D26F91CC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_m2ABBF46AA2F1090503EFFF7B8ECCD8FB679D0168_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int32_t V_1 = 0;
	JSONArray_tDB47C85E2DDB2CB4A972E4C0685D82E00490CB25* V_2 = NULL;
	JSONNode_tD29E53D2E1C8F91FF9FEA40F4F3A540857651D3B* V_3 = NULL;
	{
		auto __finallyBlock = il2cpp::utils::Fault([&]
		{

FAULT_0084:
			{// begin fault (depth: 1)
				U3Cget_ChildrenU3Ed__24_System_IDisposable_Dispose_mF75DFD59588C1DBD190A99829AEAEFE5F0F416B5(__this, NULL);
				return;
			}// end fault
		});
		try
		{// begin try (depth: 1)
			{
				int32_t L_0 = __this->___U3CU3E1__state_0;
				V_1 = L_0;
				JSONArray_tDB47C85E2DDB2CB4A972E4C0685D82E00490CB25* L_1 = __this->___U3CU3E4__this_3;
				V_2 = L_1;
				int32_t L_2 = V_1;
				if (!L_2)
				{
					goto IL_0019_1;
				}
			}
			{
				int32_t L_3 = V_1;
				if ((((int32_t)L_3) == ((int32_t)1)))
				{
					goto IL_0059_1;
				}
			}
			{
				V_0 = (bool)0;
				goto IL_008b;
			}

IL_0019_1:
			{
				__this->___U3CU3E1__state_0 = (-1);
				// foreach (JSONNode N in m_List)
				JSONArray_tDB47C85E2DDB2CB4A972E4C0685D82E00490CB25* L_4 = V_2;
				NullCheck(L_4);
				List_1_t82186C961793D19A01F84E3AB82A2146C6F979C4* L_5 = L_4->___m_List_4;
				NullCheck(L_5);
				Enumerator_t81A423E0F04B93279CA04B31DF14EDE9DE3F30AA L_6;
				L_6 = List_1_GetEnumerator_m2ABBF46AA2F1090503EFFF7B8ECCD8FB679D0168(L_5, List_1_GetEnumerator_m2ABBF46AA2F1090503EFFF7B8ECCD8FB679D0168_RuntimeMethod_var);
				__this->___U3CU3E7__wrap1_4 = L_6;
				Il2CppCodeGenWriteBarrier((void**)&(((&__this->___U3CU3E7__wrap1_4))->____list_0), (void*)NULL);
				#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
				Il2CppCodeGenWriteBarrier((void**)&(((&__this->___U3CU3E7__wrap1_4))->____current_3), (void*)NULL);
				#endif
				__this->___U3CU3E1__state_0 = ((int32_t)-3);
				goto IL_0061_1;
			}

IL_003b_1:
			{
				// foreach (JSONNode N in m_List)
				Enumerator_t81A423E0F04B93279CA04B31DF14EDE9DE3F30AA* L_7 = (&__this->___U3CU3E7__wrap1_4);
				JSONNode_tD29E53D2E1C8F91FF9FEA40F4F3A540857651D3B* L_8;
				L_8 = Enumerator_get_Current_m44F4D4F7899D0688C1E68E1457EBDBC2D26F91CC_inline(L_7, Enumerator_get_Current_m44F4D4F7899D0688C1E68E1457EBDBC2D26F91CC_RuntimeMethod_var);
				V_3 = L_8;
				// yield return N;
				JSONNode_tD29E53D2E1C8F91FF9FEA40F4F3A540857651D3B* L_9 = V_3;
				__this->___U3CU3E2__current_1 = L_9;
				Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_9);
				__this->___U3CU3E1__state_0 = 1;
				V_0 = (bool)1;
				goto IL_008b;
			}

IL_0059_1:
			{
				__this->___U3CU3E1__state_0 = ((int32_t)-3);
			}

IL_0061_1:
			{
				// foreach (JSONNode N in m_List)
				Enumerator_t81A423E0F04B93279CA04B31DF14EDE9DE3F30AA* L_10 = (&__this->___U3CU3E7__wrap1_4);
				bool L_11;
				L_11 = Enumerator_MoveNext_mB1C31B2A291986F6CD5A79C9F75196088363BF2D(L_10, Enumerator_MoveNext_mB1C31B2A291986F6CD5A79C9F75196088363BF2D_RuntimeMethod_var);
				if (L_11)
				{
					goto IL_003b_1;
				}
			}
			{
				U3Cget_ChildrenU3Ed__24_U3CU3Em__Finally1_mA9CD111E2829513DE869E1736B8AE568A615607C(__this, NULL);
				Enumerator_t81A423E0F04B93279CA04B31DF14EDE9DE3F30AA* L_12 = (&__this->___U3CU3E7__wrap1_4);
				il2cpp_codegen_initobj(L_12, sizeof(Enumerator_t81A423E0F04B93279CA04B31DF14EDE9DE3F30AA));
				// }
				V_0 = (bool)0;
				goto IL_008b;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_008b:
	{
		bool L_13 = V_0;
		return L_13;
	}
}
// System.Void SimpleJSON.JSONArray/<get_Children>d__24::<>m__Finally1()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3Cget_ChildrenU3Ed__24_U3CU3Em__Finally1_mA9CD111E2829513DE869E1736B8AE568A615607C (U3Cget_ChildrenU3Ed__24_t2556BF7E4766181D4B361F546D8C3C38CC3F56F5* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_mE0AEC0BF430B01595C081CE7115C6CBE413D16D0_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		__this->___U3CU3E1__state_0 = (-1);
		Enumerator_t81A423E0F04B93279CA04B31DF14EDE9DE3F30AA* L_0 = (&__this->___U3CU3E7__wrap1_4);
		Enumerator_Dispose_mE0AEC0BF430B01595C081CE7115C6CBE413D16D0(L_0, Enumerator_Dispose_mE0AEC0BF430B01595C081CE7115C6CBE413D16D0_RuntimeMethod_var);
		return;
	}
}
// SimpleJSON.JSONNode SimpleJSON.JSONArray/<get_Children>d__24::System.Collections.Generic.IEnumerator<SimpleJSON.JSONNode>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR JSONNode_tD29E53D2E1C8F91FF9FEA40F4F3A540857651D3B* U3Cget_ChildrenU3Ed__24_System_Collections_Generic_IEnumeratorU3CSimpleJSON_JSONNodeU3E_get_Current_m653E5442F599E9E97CE6DDA6E5E0DC3302F57DF2 (U3Cget_ChildrenU3Ed__24_t2556BF7E4766181D4B361F546D8C3C38CC3F56F5* __this, const RuntimeMethod* method) 
{
	{
		JSONNode_tD29E53D2E1C8F91FF9FEA40F4F3A540857651D3B* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void SimpleJSON.JSONArray/<get_Children>d__24::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3Cget_ChildrenU3Ed__24_System_Collections_IEnumerator_Reset_m2342D9BF9811C4FBF32417D5BD671E744DAA044D (U3Cget_ChildrenU3Ed__24_t2556BF7E4766181D4B361F546D8C3C38CC3F56F5* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3Cget_ChildrenU3Ed__24_System_Collections_IEnumerator_Reset_m2342D9BF9811C4FBF32417D5BD671E744DAA044D_RuntimeMethod_var)));
	}
}
// System.Object SimpleJSON.JSONArray/<get_Children>d__24::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3Cget_ChildrenU3Ed__24_System_Collections_IEnumerator_get_Current_mE3A5F35E09AD6B18A3DF50A7F56ECB96B1147A9C (U3Cget_ChildrenU3Ed__24_t2556BF7E4766181D4B361F546D8C3C38CC3F56F5* __this, const RuntimeMethod* method) 
{
	{
		JSONNode_tD29E53D2E1C8F91FF9FEA40F4F3A540857651D3B* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Collections.Generic.IEnumerator`1<SimpleJSON.JSONNode> SimpleJSON.JSONArray/<get_Children>d__24::System.Collections.Generic.IEnumerable<SimpleJSON.JSONNode>.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3Cget_ChildrenU3Ed__24_System_Collections_Generic_IEnumerableU3CSimpleJSON_JSONNodeU3E_GetEnumerator_mB06C6840D137C0D51E363646428B3A3106AA1955 (U3Cget_ChildrenU3Ed__24_t2556BF7E4766181D4B361F546D8C3C38CC3F56F5* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3Cget_ChildrenU3Ed__24_t2556BF7E4766181D4B361F546D8C3C38CC3F56F5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3Cget_ChildrenU3Ed__24_t2556BF7E4766181D4B361F546D8C3C38CC3F56F5* V_0 = NULL;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		if ((!(((uint32_t)L_0) == ((uint32_t)((int32_t)-2)))))
		{
			goto IL_0022;
		}
	}
	{
		int32_t L_1 = __this->___U3CU3El__initialThreadId_2;
		int32_t L_2;
		L_2 = Environment_get_CurrentManagedThreadId_mEC09D20ED666BC3277AC9D16B68AA287E5AFE1B2(NULL);
		if ((!(((uint32_t)L_1) == ((uint32_t)L_2))))
		{
			goto IL_0022;
		}
	}
	{
		__this->___U3CU3E1__state_0 = 0;
		V_0 = __this;
		goto IL_0035;
	}

IL_0022:
	{
		U3Cget_ChildrenU3Ed__24_t2556BF7E4766181D4B361F546D8C3C38CC3F56F5* L_3 = (U3Cget_ChildrenU3Ed__24_t2556BF7E4766181D4B361F546D8C3C38CC3F56F5*)il2cpp_codegen_object_new(U3Cget_ChildrenU3Ed__24_t2556BF7E4766181D4B361F546D8C3C38CC3F56F5_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		U3Cget_ChildrenU3Ed__24__ctor_m23E8A656E0A6CF03A56EE0446B20D9539FD2374E(L_3, 0, NULL);
		V_0 = L_3;
		U3Cget_ChildrenU3Ed__24_t2556BF7E4766181D4B361F546D8C3C38CC3F56F5* L_4 = V_0;
		JSONArray_tDB47C85E2DDB2CB4A972E4C0685D82E00490CB25* L_5 = __this->___U3CU3E4__this_3;
		NullCheck(L_4);
		L_4->___U3CU3E4__this_3 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&L_4->___U3CU3E4__this_3), (void*)L_5);
	}

IL_0035:
	{
		U3Cget_ChildrenU3Ed__24_t2556BF7E4766181D4B361F546D8C3C38CC3F56F5* L_6 = V_0;
		return L_6;
	}
}
// System.Collections.IEnumerator SimpleJSON.JSONArray/<get_Children>d__24::System.Collections.IEnumerable.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3Cget_ChildrenU3Ed__24_System_Collections_IEnumerable_GetEnumerator_mD4048D5DEC72CEBB2A1C2D275C5D669A54B0FB4B (U3Cget_ChildrenU3Ed__24_t2556BF7E4766181D4B361F546D8C3C38CC3F56F5* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0;
		L_0 = U3Cget_ChildrenU3Ed__24_System_Collections_Generic_IEnumerableU3CSimpleJSON_JSONNodeU3E_GetEnumerator_mB06C6840D137C0D51E363646428B3A3106AA1955(__this, NULL);
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
// System.Boolean SimpleJSON.JSONObject::get_Inline()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool JSONObject_get_Inline_m8494CC70377741476A282F147A0AA0346E585EC0 (JSONObject_tEA00D19860E34865B3D16312DD382C0901CAB654* __this, const RuntimeMethod* method) 
{
	{
		// get { return inline; }
		bool L_0 = __this->___inline_5;
		return L_0;
	}
}
// System.Void SimpleJSON.JSONObject::set_Inline(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JSONObject_set_Inline_m800EDE22EA397CD1614B6770B408B22B03966B2A (JSONObject_tEA00D19860E34865B3D16312DD382C0901CAB654* __this, bool ___value0, const RuntimeMethod* method) 
{
	{
		// set { inline = value; }
		bool L_0 = ___value0;
		__this->___inline_5 = L_0;
		// set { inline = value; }
		return;
	}
}
// SimpleJSON.JSONNodeType SimpleJSON.JSONObject::get_Tag()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t JSONObject_get_Tag_mAAE5ACC2414272402710B779C312F01DE5D55770 (JSONObject_tEA00D19860E34865B3D16312DD382C0901CAB654* __this, const RuntimeMethod* method) 
{
	{
		// public override JSONNodeType Tag { get { return JSONNodeType.Object; } }
		return (int32_t)(2);
	}
}
// System.Boolean SimpleJSON.JSONObject::get_IsObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool JSONObject_get_IsObject_m096B0CF8094A3E2F5A7E6DA45060985CA5BF9CE7 (JSONObject_tEA00D19860E34865B3D16312DD382C0901CAB654* __this, const RuntimeMethod* method) 
{
	{
		// public override bool IsObject { get { return true; } }
		return (bool)1;
	}
}
// SimpleJSON.JSONNode/Enumerator SimpleJSON.JSONObject::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_tA1F999D27FB3CE7FB0AC8D9BD4084CBA9E687C1F JSONObject_GetEnumerator_mFF632899CA751DAFB2D5E61FD2A41C7594CA0909 (JSONObject_tEA00D19860E34865B3D16312DD382C0901CAB654* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_GetEnumerator_mF7EC8BBAB3CD7EE5642E71681FBDB4A884B05780_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public override Enumerator GetEnumerator() { return new Enumerator(m_Dict.GetEnumerator()); }
		Dictionary_2_t12C70EF76A4D27675DBF4B2F8A83098ABB9DBC33* L_0 = __this->___m_Dict_4;
		NullCheck(L_0);
		Enumerator_t1B0916EAA662F17AFF7BDA682F6213FDBE55A48F L_1;
		L_1 = Dictionary_2_GetEnumerator_mF7EC8BBAB3CD7EE5642E71681FBDB4A884B05780(L_0, Dictionary_2_GetEnumerator_mF7EC8BBAB3CD7EE5642E71681FBDB4A884B05780_RuntimeMethod_var);
		Enumerator_tA1F999D27FB3CE7FB0AC8D9BD4084CBA9E687C1F L_2;
		memset((&L_2), 0, sizeof(L_2));
		Enumerator__ctor_m1A8A3ED7B68073F1236B0EDBA01A2D96DDB55885((&L_2), L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// SimpleJSON.JSONNode SimpleJSON.JSONObject::get_Item(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR JSONNode_tD29E53D2E1C8F91FF9FEA40F4F3A540857651D3B* JSONObject_get_Item_mE4BB45CC0BB1224353689A27DDAAFC056E17D6E3 (JSONObject_tEA00D19860E34865B3D16312DD382C0901CAB654* __this, String_t* ___aKey0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_ContainsKey_m3DDBDDAE0E6275C571FECD17CB1AF92061D2C693_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Item_mFFD3A96BCF327EA058B849F1973D14E1BB173C8B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JSONLazyCreator_t67A874365EE690A6837C36B8C9214BCBD04C1C00_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (m_Dict.ContainsKey(aKey))
		Dictionary_2_t12C70EF76A4D27675DBF4B2F8A83098ABB9DBC33* L_0 = __this->___m_Dict_4;
		String_t* L_1 = ___aKey0;
		NullCheck(L_0);
		bool L_2;
		L_2 = Dictionary_2_ContainsKey_m3DDBDDAE0E6275C571FECD17CB1AF92061D2C693(L_0, L_1, Dictionary_2_ContainsKey_m3DDBDDAE0E6275C571FECD17CB1AF92061D2C693_RuntimeMethod_var);
		if (!L_2)
		{
			goto IL_001b;
		}
	}
	{
		// return m_Dict[aKey];
		Dictionary_2_t12C70EF76A4D27675DBF4B2F8A83098ABB9DBC33* L_3 = __this->___m_Dict_4;
		String_t* L_4 = ___aKey0;
		NullCheck(L_3);
		JSONNode_tD29E53D2E1C8F91FF9FEA40F4F3A540857651D3B* L_5;
		L_5 = Dictionary_2_get_Item_mFFD3A96BCF327EA058B849F1973D14E1BB173C8B(L_3, L_4, Dictionary_2_get_Item_mFFD3A96BCF327EA058B849F1973D14E1BB173C8B_RuntimeMethod_var);
		return L_5;
	}

IL_001b:
	{
		// return new JSONLazyCreator(this, aKey);
		String_t* L_6 = ___aKey0;
		JSONLazyCreator_t67A874365EE690A6837C36B8C9214BCBD04C1C00* L_7 = (JSONLazyCreator_t67A874365EE690A6837C36B8C9214BCBD04C1C00*)il2cpp_codegen_object_new(JSONLazyCreator_t67A874365EE690A6837C36B8C9214BCBD04C1C00_il2cpp_TypeInfo_var);
		NullCheck(L_7);
		JSONLazyCreator__ctor_mF29014985A3ABE849B34039EAA68BF363508438A(L_7, __this, L_6, NULL);
		return L_7;
	}
}
// System.Void SimpleJSON.JSONObject::set_Item(System.String,SimpleJSON.JSONNode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JSONObject_set_Item_m64735EEDB7E35CB9E7C1F76986C71ED1FEE75F63 (JSONObject_tEA00D19860E34865B3D16312DD382C0901CAB654* __this, String_t* ___aKey0, JSONNode_tD29E53D2E1C8F91FF9FEA40F4F3A540857651D3B* ___value1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Add_m647A845263DF322FB4262AE7C9D120FAC128C8B6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_ContainsKey_m3DDBDDAE0E6275C571FECD17CB1AF92061D2C693_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_set_Item_m6D37E9D9CD14A99AC08894824FE5F3D82B9CD62A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JSONNode_tD29E53D2E1C8F91FF9FEA40F4F3A540857651D3B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JSONNull_tEE66558FCE6029B3F1414C062F5E38E0530BD69A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (value == null)
		JSONNode_tD29E53D2E1C8F91FF9FEA40F4F3A540857651D3B* L_0 = ___value1;
		il2cpp_codegen_runtime_class_init_inline(JSONNode_tD29E53D2E1C8F91FF9FEA40F4F3A540857651D3B_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = JSONNode_op_Equality_mA07D467DFB678DC61E7B2A43E87B7D4F6CB5B556(L_0, NULL, NULL);
		if (!L_1)
		{
			goto IL_0010;
		}
	}
	{
		// value = JSONNull.CreateOrGet();
		il2cpp_codegen_runtime_class_init_inline(JSONNull_tEE66558FCE6029B3F1414C062F5E38E0530BD69A_il2cpp_TypeInfo_var);
		JSONNull_tEE66558FCE6029B3F1414C062F5E38E0530BD69A* L_2;
		L_2 = JSONNull_CreateOrGet_m8A46E28FE2DA1E537F51FA071E580ABC21DB5701(NULL);
		___value1 = L_2;
	}

IL_0010:
	{
		// if (m_Dict.ContainsKey(aKey))
		Dictionary_2_t12C70EF76A4D27675DBF4B2F8A83098ABB9DBC33* L_3 = __this->___m_Dict_4;
		String_t* L_4 = ___aKey0;
		NullCheck(L_3);
		bool L_5;
		L_5 = Dictionary_2_ContainsKey_m3DDBDDAE0E6275C571FECD17CB1AF92061D2C693(L_3, L_4, Dictionary_2_ContainsKey_m3DDBDDAE0E6275C571FECD17CB1AF92061D2C693_RuntimeMethod_var);
		if (!L_5)
		{
			goto IL_002c;
		}
	}
	{
		// m_Dict[aKey] = value;
		Dictionary_2_t12C70EF76A4D27675DBF4B2F8A83098ABB9DBC33* L_6 = __this->___m_Dict_4;
		String_t* L_7 = ___aKey0;
		JSONNode_tD29E53D2E1C8F91FF9FEA40F4F3A540857651D3B* L_8 = ___value1;
		NullCheck(L_6);
		Dictionary_2_set_Item_m6D37E9D9CD14A99AC08894824FE5F3D82B9CD62A(L_6, L_7, L_8, Dictionary_2_set_Item_m6D37E9D9CD14A99AC08894824FE5F3D82B9CD62A_RuntimeMethod_var);
		return;
	}

IL_002c:
	{
		// m_Dict.Add(aKey, value);
		Dictionary_2_t12C70EF76A4D27675DBF4B2F8A83098ABB9DBC33* L_9 = __this->___m_Dict_4;
		String_t* L_10 = ___aKey0;
		JSONNode_tD29E53D2E1C8F91FF9FEA40F4F3A540857651D3B* L_11 = ___value1;
		NullCheck(L_9);
		Dictionary_2_Add_m647A845263DF322FB4262AE7C9D120FAC128C8B6(L_9, L_10, L_11, Dictionary_2_Add_m647A845263DF322FB4262AE7C9D120FAC128C8B6_RuntimeMethod_var);
		// }
		return;
	}
}
// SimpleJSON.JSONNode SimpleJSON.JSONObject::get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR JSONNode_tD29E53D2E1C8F91FF9FEA40F4F3A540857651D3B* JSONObject_get_Item_m226DF91E4CFC23053C4B03C9BD57EA4CB2FAE8C7 (JSONObject_tEA00D19860E34865B3D16312DD382C0901CAB654* __this, int32_t ___aIndex0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Count_m7F2AE40DF045D2505F47E6416C1E6EA48C765C17_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_ElementAt_TisKeyValuePair_2_tD59618B150F9D38FE8CF312BB48DB72E7ECC4E9C_mFDA649241C748243A89276A017893C462B2A2114_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyValuePair_2_get_Value_mDEC839FB9359C1DC5F359FEB68C324657E5216DD_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	KeyValuePair_2_tD59618B150F9D38FE8CF312BB48DB72E7ECC4E9C V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// if (aIndex < 0 || aIndex >= m_Dict.Count)
		int32_t L_0 = ___aIndex0;
		if ((((int32_t)L_0) < ((int32_t)0)))
		{
			goto IL_0012;
		}
	}
	{
		int32_t L_1 = ___aIndex0;
		Dictionary_2_t12C70EF76A4D27675DBF4B2F8A83098ABB9DBC33* L_2 = __this->___m_Dict_4;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = Dictionary_2_get_Count_m7F2AE40DF045D2505F47E6416C1E6EA48C765C17(L_2, Dictionary_2_get_Count_m7F2AE40DF045D2505F47E6416C1E6EA48C765C17_RuntimeMethod_var);
		if ((((int32_t)L_1) < ((int32_t)L_3)))
		{
			goto IL_0014;
		}
	}

IL_0012:
	{
		// return null;
		return (JSONNode_tD29E53D2E1C8F91FF9FEA40F4F3A540857651D3B*)NULL;
	}

IL_0014:
	{
		// return m_Dict.ElementAt(aIndex).Value;
		Dictionary_2_t12C70EF76A4D27675DBF4B2F8A83098ABB9DBC33* L_4 = __this->___m_Dict_4;
		int32_t L_5 = ___aIndex0;
		KeyValuePair_2_tD59618B150F9D38FE8CF312BB48DB72E7ECC4E9C L_6;
		L_6 = Enumerable_ElementAt_TisKeyValuePair_2_tD59618B150F9D38FE8CF312BB48DB72E7ECC4E9C_mFDA649241C748243A89276A017893C462B2A2114(L_4, L_5, Enumerable_ElementAt_TisKeyValuePair_2_tD59618B150F9D38FE8CF312BB48DB72E7ECC4E9C_mFDA649241C748243A89276A017893C462B2A2114_RuntimeMethod_var);
		V_0 = L_6;
		JSONNode_tD29E53D2E1C8F91FF9FEA40F4F3A540857651D3B* L_7;
		L_7 = KeyValuePair_2_get_Value_mDEC839FB9359C1DC5F359FEB68C324657E5216DD_inline((&V_0), KeyValuePair_2_get_Value_mDEC839FB9359C1DC5F359FEB68C324657E5216DD_RuntimeMethod_var);
		return L_7;
	}
}
// System.Void SimpleJSON.JSONObject::set_Item(System.Int32,SimpleJSON.JSONNode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JSONObject_set_Item_m1BC14E5100BD2E14B504FED3C4B6DCC2E9B6B84D (JSONObject_tEA00D19860E34865B3D16312DD382C0901CAB654* __this, int32_t ___aIndex0, JSONNode_tD29E53D2E1C8F91FF9FEA40F4F3A540857651D3B* ___value1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Count_m7F2AE40DF045D2505F47E6416C1E6EA48C765C17_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_set_Item_m6D37E9D9CD14A99AC08894824FE5F3D82B9CD62A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_ElementAt_TisKeyValuePair_2_tD59618B150F9D38FE8CF312BB48DB72E7ECC4E9C_mFDA649241C748243A89276A017893C462B2A2114_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JSONNode_tD29E53D2E1C8F91FF9FEA40F4F3A540857651D3B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JSONNull_tEE66558FCE6029B3F1414C062F5E38E0530BD69A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyValuePair_2_get_Key_m8460F8B92343281177F3C22FD70CC4BADACA8112_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	KeyValuePair_2_tD59618B150F9D38FE8CF312BB48DB72E7ECC4E9C V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// if (value == null)
		JSONNode_tD29E53D2E1C8F91FF9FEA40F4F3A540857651D3B* L_0 = ___value1;
		il2cpp_codegen_runtime_class_init_inline(JSONNode_tD29E53D2E1C8F91FF9FEA40F4F3A540857651D3B_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = JSONNode_op_Equality_mA07D467DFB678DC61E7B2A43E87B7D4F6CB5B556(L_0, NULL, NULL);
		if (!L_1)
		{
			goto IL_0010;
		}
	}
	{
		// value = JSONNull.CreateOrGet();
		il2cpp_codegen_runtime_class_init_inline(JSONNull_tEE66558FCE6029B3F1414C062F5E38E0530BD69A_il2cpp_TypeInfo_var);
		JSONNull_tEE66558FCE6029B3F1414C062F5E38E0530BD69A* L_2;
		L_2 = JSONNull_CreateOrGet_m8A46E28FE2DA1E537F51FA071E580ABC21DB5701(NULL);
		___value1 = L_2;
	}

IL_0010:
	{
		// if (aIndex < 0 || aIndex >= m_Dict.Count)
		int32_t L_3 = ___aIndex0;
		if ((((int32_t)L_3) < ((int32_t)0)))
		{
			goto IL_0022;
		}
	}
	{
		int32_t L_4 = ___aIndex0;
		Dictionary_2_t12C70EF76A4D27675DBF4B2F8A83098ABB9DBC33* L_5 = __this->___m_Dict_4;
		NullCheck(L_5);
		int32_t L_6;
		L_6 = Dictionary_2_get_Count_m7F2AE40DF045D2505F47E6416C1E6EA48C765C17(L_5, Dictionary_2_get_Count_m7F2AE40DF045D2505F47E6416C1E6EA48C765C17_RuntimeMethod_var);
		if ((((int32_t)L_4) < ((int32_t)L_6)))
		{
			goto IL_0023;
		}
	}

IL_0022:
	{
		// return;
		return;
	}

IL_0023:
	{
		// string key = m_Dict.ElementAt(aIndex).Key;
		Dictionary_2_t12C70EF76A4D27675DBF4B2F8A83098ABB9DBC33* L_7 = __this->___m_Dict_4;
		int32_t L_8 = ___aIndex0;
		KeyValuePair_2_tD59618B150F9D38FE8CF312BB48DB72E7ECC4E9C L_9;
		L_9 = Enumerable_ElementAt_TisKeyValuePair_2_tD59618B150F9D38FE8CF312BB48DB72E7ECC4E9C_mFDA649241C748243A89276A017893C462B2A2114(L_7, L_8, Enumerable_ElementAt_TisKeyValuePair_2_tD59618B150F9D38FE8CF312BB48DB72E7ECC4E9C_mFDA649241C748243A89276A017893C462B2A2114_RuntimeMethod_var);
		V_1 = L_9;
		String_t* L_10;
		L_10 = KeyValuePair_2_get_Key_m8460F8B92343281177F3C22FD70CC4BADACA8112_inline((&V_1), KeyValuePair_2_get_Key_m8460F8B92343281177F3C22FD70CC4BADACA8112_RuntimeMethod_var);
		V_0 = L_10;
		// m_Dict[key] = value;
		Dictionary_2_t12C70EF76A4D27675DBF4B2F8A83098ABB9DBC33* L_11 = __this->___m_Dict_4;
		String_t* L_12 = V_0;
		JSONNode_tD29E53D2E1C8F91FF9FEA40F4F3A540857651D3B* L_13 = ___value1;
		NullCheck(L_11);
		Dictionary_2_set_Item_m6D37E9D9CD14A99AC08894824FE5F3D82B9CD62A(L_11, L_12, L_13, Dictionary_2_set_Item_m6D37E9D9CD14A99AC08894824FE5F3D82B9CD62A_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Int32 SimpleJSON.JSONObject::get_Count()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t JSONObject_get_Count_m9A31ECCA7CDAAF5967BBE4A2A71C577148E5CF80 (JSONObject_tEA00D19860E34865B3D16312DD382C0901CAB654* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Count_m7F2AE40DF045D2505F47E6416C1E6EA48C765C17_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// get { return m_Dict.Count; }
		Dictionary_2_t12C70EF76A4D27675DBF4B2F8A83098ABB9DBC33* L_0 = __this->___m_Dict_4;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = Dictionary_2_get_Count_m7F2AE40DF045D2505F47E6416C1E6EA48C765C17(L_0, Dictionary_2_get_Count_m7F2AE40DF045D2505F47E6416C1E6EA48C765C17_RuntimeMethod_var);
		return L_1;
	}
}
// System.Void SimpleJSON.JSONObject::Add(System.String,SimpleJSON.JSONNode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JSONObject_Add_mD21F990B711DC58B0C632CE0A1E9DC9878C5063E (JSONObject_tEA00D19860E34865B3D16312DD382C0901CAB654* __this, String_t* ___aKey0, JSONNode_tD29E53D2E1C8F91FF9FEA40F4F3A540857651D3B* ___aItem1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Add_m647A845263DF322FB4262AE7C9D120FAC128C8B6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_ContainsKey_m3DDBDDAE0E6275C571FECD17CB1AF92061D2C693_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_set_Item_m6D37E9D9CD14A99AC08894824FE5F3D82B9CD62A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JSONNode_tD29E53D2E1C8F91FF9FEA40F4F3A540857651D3B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JSONNull_tEE66558FCE6029B3F1414C062F5E38E0530BD69A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Guid_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// if (aItem == null)
		JSONNode_tD29E53D2E1C8F91FF9FEA40F4F3A540857651D3B* L_0 = ___aItem1;
		il2cpp_codegen_runtime_class_init_inline(JSONNode_tD29E53D2E1C8F91FF9FEA40F4F3A540857651D3B_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = JSONNode_op_Equality_mA07D467DFB678DC61E7B2A43E87B7D4F6CB5B556(L_0, NULL, NULL);
		if (!L_1)
		{
			goto IL_0010;
		}
	}
	{
		// aItem = JSONNull.CreateOrGet();
		il2cpp_codegen_runtime_class_init_inline(JSONNull_tEE66558FCE6029B3F1414C062F5E38E0530BD69A_il2cpp_TypeInfo_var);
		JSONNull_tEE66558FCE6029B3F1414C062F5E38E0530BD69A* L_2;
		L_2 = JSONNull_CreateOrGet_m8A46E28FE2DA1E537F51FA071E580ABC21DB5701(NULL);
		___aItem1 = L_2;
	}

IL_0010:
	{
		// if (aKey != null)
		String_t* L_3 = ___aKey0;
		if (!L_3)
		{
			goto IL_003d;
		}
	}
	{
		// if (m_Dict.ContainsKey(aKey))
		Dictionary_2_t12C70EF76A4D27675DBF4B2F8A83098ABB9DBC33* L_4 = __this->___m_Dict_4;
		String_t* L_5 = ___aKey0;
		NullCheck(L_4);
		bool L_6;
		L_6 = Dictionary_2_ContainsKey_m3DDBDDAE0E6275C571FECD17CB1AF92061D2C693(L_4, L_5, Dictionary_2_ContainsKey_m3DDBDDAE0E6275C571FECD17CB1AF92061D2C693_RuntimeMethod_var);
		if (!L_6)
		{
			goto IL_002f;
		}
	}
	{
		// m_Dict[aKey] = aItem;
		Dictionary_2_t12C70EF76A4D27675DBF4B2F8A83098ABB9DBC33* L_7 = __this->___m_Dict_4;
		String_t* L_8 = ___aKey0;
		JSONNode_tD29E53D2E1C8F91FF9FEA40F4F3A540857651D3B* L_9 = ___aItem1;
		NullCheck(L_7);
		Dictionary_2_set_Item_m6D37E9D9CD14A99AC08894824FE5F3D82B9CD62A(L_7, L_8, L_9, Dictionary_2_set_Item_m6D37E9D9CD14A99AC08894824FE5F3D82B9CD62A_RuntimeMethod_var);
		return;
	}

IL_002f:
	{
		// m_Dict.Add(aKey, aItem);
		Dictionary_2_t12C70EF76A4D27675DBF4B2F8A83098ABB9DBC33* L_10 = __this->___m_Dict_4;
		String_t* L_11 = ___aKey0;
		JSONNode_tD29E53D2E1C8F91FF9FEA40F4F3A540857651D3B* L_12 = ___aItem1;
		NullCheck(L_10);
		Dictionary_2_Add_m647A845263DF322FB4262AE7C9D120FAC128C8B6(L_10, L_11, L_12, Dictionary_2_Add_m647A845263DF322FB4262AE7C9D120FAC128C8B6_RuntimeMethod_var);
		return;
	}

IL_003d:
	{
		// m_Dict.Add(Guid.NewGuid().ToString(), aItem);
		Dictionary_2_t12C70EF76A4D27675DBF4B2F8A83098ABB9DBC33* L_13 = __this->___m_Dict_4;
		Guid_t L_14;
		L_14 = Guid_NewGuid_m1827D92D71326C3F3C263F057F6E90F907617903(NULL);
		V_0 = L_14;
		String_t* L_15;
		L_15 = Guid_ToString_m2BFFD5FA726E03FA707AAFCCF065896C46D5290C((&V_0), NULL);
		JSONNode_tD29E53D2E1C8F91FF9FEA40F4F3A540857651D3B* L_16 = ___aItem1;
		NullCheck(L_13);
		Dictionary_2_Add_m647A845263DF322FB4262AE7C9D120FAC128C8B6(L_13, L_15, L_16, Dictionary_2_Add_m647A845263DF322FB4262AE7C9D120FAC128C8B6_RuntimeMethod_var);
		// }
		return;
	}
}
// SimpleJSON.JSONNode SimpleJSON.JSONObject::Remove(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR JSONNode_tD29E53D2E1C8F91FF9FEA40F4F3A540857651D3B* JSONObject_Remove_m09DF9380D1EB96C65D3C55B0D88042661AA49CE0 (JSONObject_tEA00D19860E34865B3D16312DD382C0901CAB654* __this, String_t* ___aKey0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_ContainsKey_m3DDBDDAE0E6275C571FECD17CB1AF92061D2C693_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Remove_m76681FCFCB5A12781F4025FC31BE3FF70F1C6470_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Item_mFFD3A96BCF327EA058B849F1973D14E1BB173C8B_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (!m_Dict.ContainsKey(aKey))
		Dictionary_2_t12C70EF76A4D27675DBF4B2F8A83098ABB9DBC33* L_0 = __this->___m_Dict_4;
		String_t* L_1 = ___aKey0;
		NullCheck(L_0);
		bool L_2;
		L_2 = Dictionary_2_ContainsKey_m3DDBDDAE0E6275C571FECD17CB1AF92061D2C693(L_0, L_1, Dictionary_2_ContainsKey_m3DDBDDAE0E6275C571FECD17CB1AF92061D2C693_RuntimeMethod_var);
		if (L_2)
		{
			goto IL_0010;
		}
	}
	{
		// return null;
		return (JSONNode_tD29E53D2E1C8F91FF9FEA40F4F3A540857651D3B*)NULL;
	}

IL_0010:
	{
		// JSONNode tmp = m_Dict[aKey];
		Dictionary_2_t12C70EF76A4D27675DBF4B2F8A83098ABB9DBC33* L_3 = __this->___m_Dict_4;
		String_t* L_4 = ___aKey0;
		NullCheck(L_3);
		JSONNode_tD29E53D2E1C8F91FF9FEA40F4F3A540857651D3B* L_5;
		L_5 = Dictionary_2_get_Item_mFFD3A96BCF327EA058B849F1973D14E1BB173C8B(L_3, L_4, Dictionary_2_get_Item_mFFD3A96BCF327EA058B849F1973D14E1BB173C8B_RuntimeMethod_var);
		// m_Dict.Remove(aKey);
		Dictionary_2_t12C70EF76A4D27675DBF4B2F8A83098ABB9DBC33* L_6 = __this->___m_Dict_4;
		String_t* L_7 = ___aKey0;
		NullCheck(L_6);
		bool L_8;
		L_8 = Dictionary_2_Remove_m76681FCFCB5A12781F4025FC31BE3FF70F1C6470(L_6, L_7, Dictionary_2_Remove_m76681FCFCB5A12781F4025FC31BE3FF70F1C6470_RuntimeMethod_var);
		// return tmp;
		return L_5;
	}
}
// SimpleJSON.JSONNode SimpleJSON.JSONObject::Remove(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR JSONNode_tD29E53D2E1C8F91FF9FEA40F4F3A540857651D3B* JSONObject_Remove_mD6C7E651BE3950AAF1709E66C4828044B7B9F4AC (JSONObject_tEA00D19860E34865B3D16312DD382C0901CAB654* __this, int32_t ___aIndex0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Remove_m76681FCFCB5A12781F4025FC31BE3FF70F1C6470_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Count_m7F2AE40DF045D2505F47E6416C1E6EA48C765C17_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_ElementAt_TisKeyValuePair_2_tD59618B150F9D38FE8CF312BB48DB72E7ECC4E9C_mFDA649241C748243A89276A017893C462B2A2114_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyValuePair_2_get_Key_m8460F8B92343281177F3C22FD70CC4BADACA8112_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyValuePair_2_get_Value_mDEC839FB9359C1DC5F359FEB68C324657E5216DD_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	KeyValuePair_2_tD59618B150F9D38FE8CF312BB48DB72E7ECC4E9C V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// if (aIndex < 0 || aIndex >= m_Dict.Count)
		int32_t L_0 = ___aIndex0;
		if ((((int32_t)L_0) < ((int32_t)0)))
		{
			goto IL_0012;
		}
	}
	{
		int32_t L_1 = ___aIndex0;
		Dictionary_2_t12C70EF76A4D27675DBF4B2F8A83098ABB9DBC33* L_2 = __this->___m_Dict_4;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = Dictionary_2_get_Count_m7F2AE40DF045D2505F47E6416C1E6EA48C765C17(L_2, Dictionary_2_get_Count_m7F2AE40DF045D2505F47E6416C1E6EA48C765C17_RuntimeMethod_var);
		if ((((int32_t)L_1) < ((int32_t)L_3)))
		{
			goto IL_0014;
		}
	}

IL_0012:
	{
		// return null;
		return (JSONNode_tD29E53D2E1C8F91FF9FEA40F4F3A540857651D3B*)NULL;
	}

IL_0014:
	{
		// var item = m_Dict.ElementAt(aIndex);
		Dictionary_2_t12C70EF76A4D27675DBF4B2F8A83098ABB9DBC33* L_4 = __this->___m_Dict_4;
		int32_t L_5 = ___aIndex0;
		KeyValuePair_2_tD59618B150F9D38FE8CF312BB48DB72E7ECC4E9C L_6;
		L_6 = Enumerable_ElementAt_TisKeyValuePair_2_tD59618B150F9D38FE8CF312BB48DB72E7ECC4E9C_mFDA649241C748243A89276A017893C462B2A2114(L_4, L_5, Enumerable_ElementAt_TisKeyValuePair_2_tD59618B150F9D38FE8CF312BB48DB72E7ECC4E9C_mFDA649241C748243A89276A017893C462B2A2114_RuntimeMethod_var);
		V_0 = L_6;
		// m_Dict.Remove(item.Key);
		Dictionary_2_t12C70EF76A4D27675DBF4B2F8A83098ABB9DBC33* L_7 = __this->___m_Dict_4;
		String_t* L_8;
		L_8 = KeyValuePair_2_get_Key_m8460F8B92343281177F3C22FD70CC4BADACA8112_inline((&V_0), KeyValuePair_2_get_Key_m8460F8B92343281177F3C22FD70CC4BADACA8112_RuntimeMethod_var);
		NullCheck(L_7);
		bool L_9;
		L_9 = Dictionary_2_Remove_m76681FCFCB5A12781F4025FC31BE3FF70F1C6470(L_7, L_8, Dictionary_2_Remove_m76681FCFCB5A12781F4025FC31BE3FF70F1C6470_RuntimeMethod_var);
		// return item.Value;
		JSONNode_tD29E53D2E1C8F91FF9FEA40F4F3A540857651D3B* L_10;
		L_10 = KeyValuePair_2_get_Value_mDEC839FB9359C1DC5F359FEB68C324657E5216DD_inline((&V_0), KeyValuePair_2_get_Value_mDEC839FB9359C1DC5F359FEB68C324657E5216DD_RuntimeMethod_var);
		return L_10;
	}
}
// SimpleJSON.JSONNode SimpleJSON.JSONObject::Remove(SimpleJSON.JSONNode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR JSONNode_tD29E53D2E1C8F91FF9FEA40F4F3A540857651D3B* JSONObject_Remove_mAE61C16E939AD8F3E4FD96B64AF6B186D04F6301 (JSONObject_tEA00D19860E34865B3D16312DD382C0901CAB654* __this, JSONNode_tD29E53D2E1C8F91FF9FEA40F4F3A540857651D3B* ___aNode0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Remove_m76681FCFCB5A12781F4025FC31BE3FF70F1C6470_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_First_TisKeyValuePair_2_tD59618B150F9D38FE8CF312BB48DB72E7ECC4E9C_m9971C479DDD6CA68E54EDF39EC02A748B937BAC2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_Where_TisKeyValuePair_2_tD59618B150F9D38FE8CF312BB48DB72E7ECC4E9C_mB3AB8B8230FB048784669A99491FFED031B28398_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_2_t8A99FF3F64B7CF9CFC4EE2DF270BD1703B76DC50_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyValuePair_2_get_Key_m8460F8B92343281177F3C22FD70CC4BADACA8112_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass21_0_U3CRemoveU3Eb__0_m20DEDAFB58EF2F7E18B1B538508AFD75E7D6AA37_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass21_0_t310B9E292689B6B4824DD285356EF9A1CDA716DD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CU3Ec__DisplayClass21_0_t310B9E292689B6B4824DD285356EF9A1CDA716DD* V_0 = NULL;
	KeyValuePair_2_tD59618B150F9D38FE8CF312BB48DB72E7ECC4E9C V_1;
	memset((&V_1), 0, sizeof(V_1));
	JSONNode_tD29E53D2E1C8F91FF9FEA40F4F3A540857651D3B* V_2 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		U3CU3Ec__DisplayClass21_0_t310B9E292689B6B4824DD285356EF9A1CDA716DD* L_0 = (U3CU3Ec__DisplayClass21_0_t310B9E292689B6B4824DD285356EF9A1CDA716DD*)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass21_0_t310B9E292689B6B4824DD285356EF9A1CDA716DD_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CU3Ec__DisplayClass21_0__ctor_mBABFF200A657B735639C010A37AE0D6AB84664C8(L_0, NULL);
		V_0 = L_0;
		U3CU3Ec__DisplayClass21_0_t310B9E292689B6B4824DD285356EF9A1CDA716DD* L_1 = V_0;
		JSONNode_tD29E53D2E1C8F91FF9FEA40F4F3A540857651D3B* L_2 = ___aNode0;
		NullCheck(L_1);
		L_1->___aNode_0 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___aNode_0), (void*)L_2);
	}
	try
	{// begin try (depth: 1)
		// var item = m_Dict.Where(k => k.Value == aNode).First();
		Dictionary_2_t12C70EF76A4D27675DBF4B2F8A83098ABB9DBC33* L_3 = __this->___m_Dict_4;
		U3CU3Ec__DisplayClass21_0_t310B9E292689B6B4824DD285356EF9A1CDA716DD* L_4 = V_0;
		Func_2_t8A99FF3F64B7CF9CFC4EE2DF270BD1703B76DC50* L_5 = (Func_2_t8A99FF3F64B7CF9CFC4EE2DF270BD1703B76DC50*)il2cpp_codegen_object_new(Func_2_t8A99FF3F64B7CF9CFC4EE2DF270BD1703B76DC50_il2cpp_TypeInfo_var);
		NullCheck(L_5);
		Func_2__ctor_m6FE32D0006D2D3129CDC46B55635C4D205C3FDBF(L_5, L_4, (intptr_t)((void*)U3CU3Ec__DisplayClass21_0_U3CRemoveU3Eb__0_m20DEDAFB58EF2F7E18B1B538508AFD75E7D6AA37_RuntimeMethod_var), NULL);
		RuntimeObject* L_6;
		L_6 = Enumerable_Where_TisKeyValuePair_2_tD59618B150F9D38FE8CF312BB48DB72E7ECC4E9C_mB3AB8B8230FB048784669A99491FFED031B28398(L_3, L_5, Enumerable_Where_TisKeyValuePair_2_tD59618B150F9D38FE8CF312BB48DB72E7ECC4E9C_mB3AB8B8230FB048784669A99491FFED031B28398_RuntimeMethod_var);
		KeyValuePair_2_tD59618B150F9D38FE8CF312BB48DB72E7ECC4E9C L_7;
		L_7 = Enumerable_First_TisKeyValuePair_2_tD59618B150F9D38FE8CF312BB48DB72E7ECC4E9C_m9971C479DDD6CA68E54EDF39EC02A748B937BAC2(L_6, Enumerable_First_TisKeyValuePair_2_tD59618B150F9D38FE8CF312BB48DB72E7ECC4E9C_m9971C479DDD6CA68E54EDF39EC02A748B937BAC2_RuntimeMethod_var);
		V_1 = L_7;
		// m_Dict.Remove(item.Key);
		Dictionary_2_t12C70EF76A4D27675DBF4B2F8A83098ABB9DBC33* L_8 = __this->___m_Dict_4;
		String_t* L_9;
		L_9 = KeyValuePair_2_get_Key_m8460F8B92343281177F3C22FD70CC4BADACA8112_inline((&V_1), KeyValuePair_2_get_Key_m8460F8B92343281177F3C22FD70CC4BADACA8112_RuntimeMethod_var);
		NullCheck(L_8);
		bool L_10;
		L_10 = Dictionary_2_Remove_m76681FCFCB5A12781F4025FC31BE3FF70F1C6470(L_8, L_9, Dictionary_2_Remove_m76681FCFCB5A12781F4025FC31BE3FF70F1C6470_RuntimeMethod_var);
		// return aNode;
		U3CU3Ec__DisplayClass21_0_t310B9E292689B6B4824DD285356EF9A1CDA716DD* L_11 = V_0;
		NullCheck(L_11);
		JSONNode_tD29E53D2E1C8F91FF9FEA40F4F3A540857651D3B* L_12 = L_11->___aNode_0;
		V_2 = L_12;
		goto IL_004b;
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0046;
		}
		throw e;
	}

CATCH_0046:
	{// begin catch(System.Object)
		// catch
		// return null;
		V_2 = (JSONNode_tD29E53D2E1C8F91FF9FEA40F4F3A540857651D3B*)NULL;
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_004b;
	}// end catch (depth: 1)

IL_004b:
	{
		// }
		JSONNode_tD29E53D2E1C8F91FF9FEA40F4F3A540857651D3B* L_13 = V_2;
		return L_13;
	}
}
// System.Void SimpleJSON.JSONObject::Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JSONObject_Clear_m1B39B71F8102E91F546E768065FF41735C803871 (JSONObject_tEA00D19860E34865B3D16312DD382C0901CAB654* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Clear_mB30427E3A804F7FB320A4D8929972DF27FCF9DCA_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// m_Dict.Clear();
		Dictionary_2_t12C70EF76A4D27675DBF4B2F8A83098ABB9DBC33* L_0 = __this->___m_Dict_4;
		NullCheck(L_0);
		Dictionary_2_Clear_mB30427E3A804F7FB320A4D8929972DF27FCF9DCA(L_0, Dictionary_2_Clear_mB30427E3A804F7FB320A4D8929972DF27FCF9DCA_RuntimeMethod_var);
		// }
		return;
	}
}
// SimpleJSON.JSONNode SimpleJSON.JSONObject::Clone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR JSONNode_tD29E53D2E1C8F91FF9FEA40F4F3A540857651D3B* JSONObject_Clone_mF0D1C0598EA6946B1C240C56BE46DFFA916C963E (JSONObject_tEA00D19860E34865B3D16312DD382C0901CAB654* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_GetEnumerator_mF7EC8BBAB3CD7EE5642E71681FBDB4A884B05780_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m844831FF3F93A9E3EEDFFF0186465A21BA38BE18_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m5BE8E9A6A9A88CC3FF48EA3466675ED35B0CC160_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m588061B1765C95AD6BDEC8EA8FBE37BDA51EAC5E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JSONObject_tEA00D19860E34865B3D16312DD382C0901CAB654_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyValuePair_2_get_Key_m8460F8B92343281177F3C22FD70CC4BADACA8112_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyValuePair_2_get_Value_mDEC839FB9359C1DC5F359FEB68C324657E5216DD_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	JSONObject_tEA00D19860E34865B3D16312DD382C0901CAB654* V_0 = NULL;
	Enumerator_t1B0916EAA662F17AFF7BDA682F6213FDBE55A48F V_1;
	memset((&V_1), 0, sizeof(V_1));
	KeyValuePair_2_tD59618B150F9D38FE8CF312BB48DB72E7ECC4E9C V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		// var node = new JSONObject();
		JSONObject_tEA00D19860E34865B3D16312DD382C0901CAB654* L_0 = (JSONObject_tEA00D19860E34865B3D16312DD382C0901CAB654*)il2cpp_codegen_object_new(JSONObject_tEA00D19860E34865B3D16312DD382C0901CAB654_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		JSONObject__ctor_m8AA5877BC05D1BFF9F50D151C0ECF1E3F5C6BE2F(L_0, NULL);
		V_0 = L_0;
		// foreach (var n in m_Dict)
		Dictionary_2_t12C70EF76A4D27675DBF4B2F8A83098ABB9DBC33* L_1 = __this->___m_Dict_4;
		NullCheck(L_1);
		Enumerator_t1B0916EAA662F17AFF7BDA682F6213FDBE55A48F L_2;
		L_2 = Dictionary_2_GetEnumerator_mF7EC8BBAB3CD7EE5642E71681FBDB4A884B05780(L_1, Dictionary_2_GetEnumerator_mF7EC8BBAB3CD7EE5642E71681FBDB4A884B05780_RuntimeMethod_var);
		V_1 = L_2;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0040:
			{// begin finally (depth: 1)
				Enumerator_Dispose_m844831FF3F93A9E3EEDFFF0186465A21BA38BE18((&V_1), Enumerator_Dispose_m844831FF3F93A9E3EEDFFF0186465A21BA38BE18_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_0035_1;
			}

IL_0014_1:
			{
				// foreach (var n in m_Dict)
				KeyValuePair_2_tD59618B150F9D38FE8CF312BB48DB72E7ECC4E9C L_3;
				L_3 = Enumerator_get_Current_m588061B1765C95AD6BDEC8EA8FBE37BDA51EAC5E_inline((&V_1), Enumerator_get_Current_m588061B1765C95AD6BDEC8EA8FBE37BDA51EAC5E_RuntimeMethod_var);
				V_2 = L_3;
				// node.Add(n.Key, n.Value.Clone());
				JSONObject_tEA00D19860E34865B3D16312DD382C0901CAB654* L_4 = V_0;
				String_t* L_5;
				L_5 = KeyValuePair_2_get_Key_m8460F8B92343281177F3C22FD70CC4BADACA8112_inline((&V_2), KeyValuePair_2_get_Key_m8460F8B92343281177F3C22FD70CC4BADACA8112_RuntimeMethod_var);
				JSONNode_tD29E53D2E1C8F91FF9FEA40F4F3A540857651D3B* L_6;
				L_6 = KeyValuePair_2_get_Value_mDEC839FB9359C1DC5F359FEB68C324657E5216DD_inline((&V_2), KeyValuePair_2_get_Value_mDEC839FB9359C1DC5F359FEB68C324657E5216DD_RuntimeMethod_var);
				NullCheck(L_6);
				JSONNode_tD29E53D2E1C8F91FF9FEA40F4F3A540857651D3B* L_7;
				L_7 = VirtualFuncInvoker0< JSONNode_tD29E53D2E1C8F91FF9FEA40F4F3A540857651D3B* >::Invoke(26 /* SimpleJSON.JSONNode SimpleJSON.JSONNode::Clone() */, L_6);
				NullCheck(L_4);
				VirtualActionInvoker2< String_t*, JSONNode_tD29E53D2E1C8F91FF9FEA40F4F3A540857651D3B* >::Invoke(20 /* System.Void SimpleJSON.JSONNode::Add(System.String,SimpleJSON.JSONNode) */, L_4, L_5, L_7);
			}

IL_0035_1:
			{
				// foreach (var n in m_Dict)
				bool L_8;
				L_8 = Enumerator_MoveNext_m5BE8E9A6A9A88CC3FF48EA3466675ED35B0CC160((&V_1), Enumerator_MoveNext_m5BE8E9A6A9A88CC3FF48EA3466675ED35B0CC160_RuntimeMethod_var);
				if (L_8)
				{
					goto IL_0014_1;
				}
			}
			{
				goto IL_004e;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_004e:
	{
		// return node;
		JSONObject_tEA00D19860E34865B3D16312DD382C0901CAB654* L_9 = V_0;
		return L_9;
	}
}
// System.Boolean SimpleJSON.JSONObject::HasKey(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool JSONObject_HasKey_m711B2A6DC4A6664B210A1993126851C7B7C96EB2 (JSONObject_tEA00D19860E34865B3D16312DD382C0901CAB654* __this, String_t* ___aKey0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_ContainsKey_m3DDBDDAE0E6275C571FECD17CB1AF92061D2C693_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return m_Dict.ContainsKey(aKey);
		Dictionary_2_t12C70EF76A4D27675DBF4B2F8A83098ABB9DBC33* L_0 = __this->___m_Dict_4;
		String_t* L_1 = ___aKey0;
		NullCheck(L_0);
		bool L_2;
		L_2 = Dictionary_2_ContainsKey_m3DDBDDAE0E6275C571FECD17CB1AF92061D2C693(L_0, L_1, Dictionary_2_ContainsKey_m3DDBDDAE0E6275C571FECD17CB1AF92061D2C693_RuntimeMethod_var);
		return L_2;
	}
}
// SimpleJSON.JSONNode SimpleJSON.JSONObject::GetValueOrDefault(System.String,SimpleJSON.JSONNode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR JSONNode_tD29E53D2E1C8F91FF9FEA40F4F3A540857651D3B* JSONObject_GetValueOrDefault_m0C90094BB2225BB8AE3AC626614E44D5D22B20FA (JSONObject_tEA00D19860E34865B3D16312DD382C0901CAB654* __this, String_t* ___aKey0, JSONNode_tD29E53D2E1C8F91FF9FEA40F4F3A540857651D3B* ___aDefault1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_TryGetValue_m1FF64870279BEF55007411D7CB05F5DD991396BC_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	JSONNode_tD29E53D2E1C8F91FF9FEA40F4F3A540857651D3B* V_0 = NULL;
	{
		// if (m_Dict.TryGetValue(aKey, out res))
		Dictionary_2_t12C70EF76A4D27675DBF4B2F8A83098ABB9DBC33* L_0 = __this->___m_Dict_4;
		String_t* L_1 = ___aKey0;
		NullCheck(L_0);
		bool L_2;
		L_2 = Dictionary_2_TryGetValue_m1FF64870279BEF55007411D7CB05F5DD991396BC(L_0, L_1, (&V_0), Dictionary_2_TryGetValue_m1FF64870279BEF55007411D7CB05F5DD991396BC_RuntimeMethod_var);
		if (!L_2)
		{
			goto IL_0012;
		}
	}
	{
		// return res;
		JSONNode_tD29E53D2E1C8F91FF9FEA40F4F3A540857651D3B* L_3 = V_0;
		return L_3;
	}

IL_0012:
	{
		// return aDefault;
		JSONNode_tD29E53D2E1C8F91FF9FEA40F4F3A540857651D3B* L_4 = ___aDefault1;
		return L_4;
	}
}
// System.Collections.Generic.IEnumerable`1<SimpleJSON.JSONNode> SimpleJSON.JSONObject::get_Children()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* JSONObject_get_Children_m645B8853D530044519208AD442C470EB6F4E41DD (JSONObject_tEA00D19860E34865B3D16312DD382C0901CAB654* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3Cget_ChildrenU3Ed__27_t89EE8560565615C4B0D27D10FF05ED6CB2C81A7A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3Cget_ChildrenU3Ed__27_t89EE8560565615C4B0D27D10FF05ED6CB2C81A7A* L_0 = (U3Cget_ChildrenU3Ed__27_t89EE8560565615C4B0D27D10FF05ED6CB2C81A7A*)il2cpp_codegen_object_new(U3Cget_ChildrenU3Ed__27_t89EE8560565615C4B0D27D10FF05ED6CB2C81A7A_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3Cget_ChildrenU3Ed__27__ctor_m9CDCA1C141BC8A71F035E6D4B5D029AD75759040(L_0, ((int32_t)-2), NULL);
		U3Cget_ChildrenU3Ed__27_t89EE8560565615C4B0D27D10FF05ED6CB2C81A7A* L_1 = L_0;
		NullCheck(L_1);
		L_1->___U3CU3E4__this_3 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_3), (void*)__this);
		return L_1;
	}
}
// System.Void SimpleJSON.JSONObject::WriteToStringBuilder(System.Text.StringBuilder,System.Int32,System.Int32,SimpleJSON.JSONTextMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JSONObject_WriteToStringBuilder_m9E3938177FA88996AEFC26DAEDE8D97B9F8D1E0A (JSONObject_tEA00D19860E34865B3D16312DD382C0901CAB654* __this, StringBuilder_t* ___aSB0, int32_t ___aIndent1, int32_t ___aIndentInc2, int32_t ___aMode3, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_GetEnumerator_mF7EC8BBAB3CD7EE5642E71681FBDB4A884B05780_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m844831FF3F93A9E3EEDFFF0186465A21BA38BE18_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m5BE8E9A6A9A88CC3FF48EA3466675ED35B0CC160_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m588061B1765C95AD6BDEC8EA8FBE37BDA51EAC5E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JSONNode_tD29E53D2E1C8F91FF9FEA40F4F3A540857651D3B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyValuePair_2_get_Key_m8460F8B92343281177F3C22FD70CC4BADACA8112_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyValuePair_2_get_Value_mDEC839FB9359C1DC5F359FEB68C324657E5216DD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0767326DBE1DD31063256737FD019DC6682353E2);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	Enumerator_t1B0916EAA662F17AFF7BDA682F6213FDBE55A48F V_1;
	memset((&V_1), 0, sizeof(V_1));
	KeyValuePair_2_tD59618B150F9D38FE8CF312BB48DB72E7ECC4E9C V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		// aSB.Append('{');
		StringBuilder_t* L_0 = ___aSB0;
		NullCheck(L_0);
		StringBuilder_t* L_1;
		L_1 = StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1(L_0, ((int32_t)123), NULL);
		// bool first = true;
		V_0 = (bool)1;
		// if (inline)
		bool L_2 = __this->___inline_5;
		if (!L_2)
		{
			goto IL_0016;
		}
	}
	{
		// aMode = JSONTextMode.Compact;
		___aMode3 = 0;
	}

IL_0016:
	{
		// foreach (var k in m_Dict)
		Dictionary_2_t12C70EF76A4D27675DBF4B2F8A83098ABB9DBC33* L_3 = __this->___m_Dict_4;
		NullCheck(L_3);
		Enumerator_t1B0916EAA662F17AFF7BDA682F6213FDBE55A48F L_4;
		L_4 = Dictionary_2_GetEnumerator_mF7EC8BBAB3CD7EE5642E71681FBDB4A884B05780(L_3, Dictionary_2_GetEnumerator_mF7EC8BBAB3CD7EE5642E71681FBDB4A884B05780_RuntimeMethod_var);
		V_1 = L_4;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_00b7:
			{// begin finally (depth: 1)
				Enumerator_Dispose_m844831FF3F93A9E3EEDFFF0186465A21BA38BE18((&V_1), Enumerator_Dispose_m844831FF3F93A9E3EEDFFF0186465A21BA38BE18_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_00a9_1;
			}

IL_0027_1:
			{
				// foreach (var k in m_Dict)
				KeyValuePair_2_tD59618B150F9D38FE8CF312BB48DB72E7ECC4E9C L_5;
				L_5 = Enumerator_get_Current_m588061B1765C95AD6BDEC8EA8FBE37BDA51EAC5E_inline((&V_1), Enumerator_get_Current_m588061B1765C95AD6BDEC8EA8FBE37BDA51EAC5E_RuntimeMethod_var);
				V_2 = L_5;
				// if (!first)
				bool L_6 = V_0;
				if (L_6)
				{
					goto IL_003b_1;
				}
			}
			{
				// aSB.Append(',');
				StringBuilder_t* L_7 = ___aSB0;
				NullCheck(L_7);
				StringBuilder_t* L_8;
				L_8 = StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1(L_7, ((int32_t)44), NULL);
			}

IL_003b_1:
			{
				// first = false;
				V_0 = (bool)0;
				// if (aMode == JSONTextMode.Indent)
				int32_t L_9 = ___aMode3;
				if ((!(((uint32_t)L_9) == ((uint32_t)1))))
				{
					goto IL_0049_1;
				}
			}
			{
				// aSB.AppendLine();
				StringBuilder_t* L_10 = ___aSB0;
				NullCheck(L_10);
				StringBuilder_t* L_11;
				L_11 = StringBuilder_AppendLine_m3BC704C4E6A8531027D8C9287D0AB2AA0188AC4E(L_10, NULL);
			}

IL_0049_1:
			{
				// if (aMode == JSONTextMode.Indent)
				int32_t L_12 = ___aMode3;
				if ((!(((uint32_t)L_12) == ((uint32_t)1))))
				{
					goto IL_005a_1;
				}
			}
			{
				// aSB.Append(' ', aIndent + aIndentInc);
				StringBuilder_t* L_13 = ___aSB0;
				int32_t L_14 = ___aIndent1;
				int32_t L_15 = ___aIndentInc2;
				NullCheck(L_13);
				StringBuilder_t* L_16;
				L_16 = StringBuilder_Append_mE20F6CD28FC8E8C9FD65987DBD32E6087CCE1CF3(L_13, ((int32_t)32), ((int32_t)il2cpp_codegen_add(L_14, L_15)), NULL);
			}

IL_005a_1:
			{
				// aSB.Append('\"').Append(Escape(k.Key)).Append('\"');
				StringBuilder_t* L_17 = ___aSB0;
				NullCheck(L_17);
				StringBuilder_t* L_18;
				L_18 = StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1(L_17, ((int32_t)34), NULL);
				String_t* L_19;
				L_19 = KeyValuePair_2_get_Key_m8460F8B92343281177F3C22FD70CC4BADACA8112_inline((&V_2), KeyValuePair_2_get_Key_m8460F8B92343281177F3C22FD70CC4BADACA8112_RuntimeMethod_var);
				il2cpp_codegen_runtime_class_init_inline(JSONNode_tD29E53D2E1C8F91FF9FEA40F4F3A540857651D3B_il2cpp_TypeInfo_var);
				String_t* L_20;
				L_20 = JSONNode_Escape_m0ED072BC7DE866EC611694D65B6AFCF9E9E3A34E(L_19, NULL);
				NullCheck(L_18);
				StringBuilder_t* L_21;
				L_21 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_18, L_20, NULL);
				NullCheck(L_21);
				StringBuilder_t* L_22;
				L_22 = StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1(L_21, ((int32_t)34), NULL);
				// if (aMode == JSONTextMode.Compact)
				int32_t L_23 = ___aMode3;
				if (L_23)
				{
					goto IL_008a_1;
				}
			}
			{
				// aSB.Append(':');
				StringBuilder_t* L_24 = ___aSB0;
				NullCheck(L_24);
				StringBuilder_t* L_25;
				L_25 = StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1(L_24, ((int32_t)58), NULL);
				goto IL_0096_1;
			}

IL_008a_1:
			{
				// aSB.Append(" : ");
				StringBuilder_t* L_26 = ___aSB0;
				NullCheck(L_26);
				StringBuilder_t* L_27;
				L_27 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_26, _stringLiteral0767326DBE1DD31063256737FD019DC6682353E2, NULL);
			}

IL_0096_1:
			{
				// k.Value.WriteToStringBuilder(aSB, aIndent + aIndentInc, aIndentInc, aMode);
				JSONNode_tD29E53D2E1C8F91FF9FEA40F4F3A540857651D3B* L_28;
				L_28 = KeyValuePair_2_get_Value_mDEC839FB9359C1DC5F359FEB68C324657E5216DD_inline((&V_2), KeyValuePair_2_get_Value_mDEC839FB9359C1DC5F359FEB68C324657E5216DD_RuntimeMethod_var);
				StringBuilder_t* L_29 = ___aSB0;
				int32_t L_30 = ___aIndent1;
				int32_t L_31 = ___aIndentInc2;
				int32_t L_32 = ___aIndentInc2;
				int32_t L_33 = ___aMode3;
				NullCheck(L_28);
				VirtualActionInvoker4< StringBuilder_t*, int32_t, int32_t, int32_t >::Invoke(31 /* System.Void SimpleJSON.JSONNode::WriteToStringBuilder(System.Text.StringBuilder,System.Int32,System.Int32,SimpleJSON.JSONTextMode) */, L_28, L_29, ((int32_t)il2cpp_codegen_add(L_30, L_31)), L_32, L_33);
			}

IL_00a9_1:
			{
				// foreach (var k in m_Dict)
				bool L_34;
				L_34 = Enumerator_MoveNext_m5BE8E9A6A9A88CC3FF48EA3466675ED35B0CC160((&V_1), Enumerator_MoveNext_m5BE8E9A6A9A88CC3FF48EA3466675ED35B0CC160_RuntimeMethod_var);
				if (L_34)
				{
					goto IL_0027_1;
				}
			}
			{
				goto IL_00c5;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00c5:
	{
		// if (aMode == JSONTextMode.Indent)
		int32_t L_35 = ___aMode3;
		if ((!(((uint32_t)L_35) == ((uint32_t)1))))
		{
			goto IL_00d9;
		}
	}
	{
		// aSB.AppendLine().Append(' ', aIndent);
		StringBuilder_t* L_36 = ___aSB0;
		NullCheck(L_36);
		StringBuilder_t* L_37;
		L_37 = StringBuilder_AppendLine_m3BC704C4E6A8531027D8C9287D0AB2AA0188AC4E(L_36, NULL);
		int32_t L_38 = ___aIndent1;
		NullCheck(L_37);
		StringBuilder_t* L_39;
		L_39 = StringBuilder_Append_mE20F6CD28FC8E8C9FD65987DBD32E6087CCE1CF3(L_37, ((int32_t)32), L_38, NULL);
	}

IL_00d9:
	{
		// aSB.Append('}');
		StringBuilder_t* L_40 = ___aSB0;
		NullCheck(L_40);
		StringBuilder_t* L_41;
		L_41 = StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1(L_40, ((int32_t)125), NULL);
		// }
		return;
	}
}
// System.Void SimpleJSON.JSONObject::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JSONObject__ctor_m8AA5877BC05D1BFF9F50D151C0ECF1E3F5C6BE2F (JSONObject_tEA00D19860E34865B3D16312DD382C0901CAB654* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_m3039782D3F8D2BBEBABB511BC6FA48187E22008A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_t12C70EF76A4D27675DBF4B2F8A83098ABB9DBC33_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JSONNode_tD29E53D2E1C8F91FF9FEA40F4F3A540857651D3B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private Dictionary<string, JSONNode> m_Dict = new Dictionary<string, JSONNode>();
		Dictionary_2_t12C70EF76A4D27675DBF4B2F8A83098ABB9DBC33* L_0 = (Dictionary_2_t12C70EF76A4D27675DBF4B2F8A83098ABB9DBC33*)il2cpp_codegen_object_new(Dictionary_2_t12C70EF76A4D27675DBF4B2F8A83098ABB9DBC33_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		Dictionary_2__ctor_m3039782D3F8D2BBEBABB511BC6FA48187E22008A(L_0, Dictionary_2__ctor_m3039782D3F8D2BBEBABB511BC6FA48187E22008A_RuntimeMethod_var);
		__this->___m_Dict_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Dict_4), (void*)L_0);
		il2cpp_codegen_runtime_class_init_inline(JSONNode_tD29E53D2E1C8F91FF9FEA40F4F3A540857651D3B_il2cpp_TypeInfo_var);
		JSONNode__ctor_m4019E01BCFB43E3848591C3E8C97534BA8BC6C49(__this, NULL);
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
// System.Void SimpleJSON.JSONObject/<>c__DisplayClass21_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass21_0__ctor_mBABFF200A657B735639C010A37AE0D6AB84664C8 (U3CU3Ec__DisplayClass21_0_t310B9E292689B6B4824DD285356EF9A1CDA716DD* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Boolean SimpleJSON.JSONObject/<>c__DisplayClass21_0::<Remove>b__0(System.Collections.Generic.KeyValuePair`2<System.String,SimpleJSON.JSONNode>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec__DisplayClass21_0_U3CRemoveU3Eb__0_m20DEDAFB58EF2F7E18B1B538508AFD75E7D6AA37 (U3CU3Ec__DisplayClass21_0_t310B9E292689B6B4824DD285356EF9A1CDA716DD* __this, KeyValuePair_2_tD59618B150F9D38FE8CF312BB48DB72E7ECC4E9C ___k0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JSONNode_tD29E53D2E1C8F91FF9FEA40F4F3A540857651D3B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyValuePair_2_get_Value_mDEC839FB9359C1DC5F359FEB68C324657E5216DD_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// var item = m_Dict.Where(k => k.Value == aNode).First();
		JSONNode_tD29E53D2E1C8F91FF9FEA40F4F3A540857651D3B* L_0;
		L_0 = KeyValuePair_2_get_Value_mDEC839FB9359C1DC5F359FEB68C324657E5216DD_inline((&___k0), KeyValuePair_2_get_Value_mDEC839FB9359C1DC5F359FEB68C324657E5216DD_RuntimeMethod_var);
		JSONNode_tD29E53D2E1C8F91FF9FEA40F4F3A540857651D3B* L_1 = __this->___aNode_0;
		il2cpp_codegen_runtime_class_init_inline(JSONNode_tD29E53D2E1C8F91FF9FEA40F4F3A540857651D3B_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = JSONNode_op_Equality_mA07D467DFB678DC61E7B2A43E87B7D4F6CB5B556(L_0, L_1, NULL);
		return L_2;
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
// System.Void SimpleJSON.JSONObject/<get_Children>d__27::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3Cget_ChildrenU3Ed__27__ctor_m9CDCA1C141BC8A71F035E6D4B5D029AD75759040 (U3Cget_ChildrenU3Ed__27_t89EE8560565615C4B0D27D10FF05ED6CB2C81A7A* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->___U3CU3E1__state_0 = L_0;
		int32_t L_1;
		L_1 = Environment_get_CurrentManagedThreadId_mEC09D20ED666BC3277AC9D16B68AA287E5AFE1B2(NULL);
		__this->___U3CU3El__initialThreadId_2 = L_1;
		return;
	}
}
// System.Void SimpleJSON.JSONObject/<get_Children>d__27::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3Cget_ChildrenU3Ed__27_System_IDisposable_Dispose_mDD77C52E23B4B21D48AE74368F86BA3C31F2EF44 (U3Cget_ChildrenU3Ed__27_t89EE8560565615C4B0D27D10FF05ED6CB2C81A7A* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)((int32_t)-3))))
		{
			goto IL_0010;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((!(((uint32_t)L_2) == ((uint32_t)1))))
		{
			goto IL_001a;
		}
	}

IL_0010:
	{
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0013:
			{// begin finally (depth: 1)
				U3Cget_ChildrenU3Ed__27_U3CU3Em__Finally1_m497320D48364432214EF5E922912F9EFC8729D3E(__this, NULL);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			goto IL_001a;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_001a:
	{
		return;
	}
}
// System.Boolean SimpleJSON.JSONObject/<get_Children>d__27::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3Cget_ChildrenU3Ed__27_MoveNext_m25B0AC800FB3EDBBA02ECB62FD675BC204B8014E (U3Cget_ChildrenU3Ed__27_t89EE8560565615C4B0D27D10FF05ED6CB2C81A7A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_GetEnumerator_mF7EC8BBAB3CD7EE5642E71681FBDB4A884B05780_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m5BE8E9A6A9A88CC3FF48EA3466675ED35B0CC160_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m588061B1765C95AD6BDEC8EA8FBE37BDA51EAC5E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyValuePair_2_get_Value_mDEC839FB9359C1DC5F359FEB68C324657E5216DD_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int32_t V_1 = 0;
	JSONObject_tEA00D19860E34865B3D16312DD382C0901CAB654* V_2 = NULL;
	KeyValuePair_2_tD59618B150F9D38FE8CF312BB48DB72E7ECC4E9C V_3;
	memset((&V_3), 0, sizeof(V_3));
	{
		auto __finallyBlock = il2cpp::utils::Fault([&]
		{

FAULT_008a:
			{// begin fault (depth: 1)
				U3Cget_ChildrenU3Ed__27_System_IDisposable_Dispose_mDD77C52E23B4B21D48AE74368F86BA3C31F2EF44(__this, NULL);
				return;
			}// end fault
		});
		try
		{// begin try (depth: 1)
			{
				int32_t L_0 = __this->___U3CU3E1__state_0;
				V_1 = L_0;
				JSONObject_tEA00D19860E34865B3D16312DD382C0901CAB654* L_1 = __this->___U3CU3E4__this_3;
				V_2 = L_1;
				int32_t L_2 = V_1;
				if (!L_2)
				{
					goto IL_0019_1;
				}
			}
			{
				int32_t L_3 = V_1;
				if ((((int32_t)L_3) == ((int32_t)1)))
				{
					goto IL_005f_1;
				}
			}
			{
				V_0 = (bool)0;
				goto IL_0091;
			}

IL_0019_1:
			{
				__this->___U3CU3E1__state_0 = (-1);
				// foreach (KeyValuePair<string, JSONNode> N in m_Dict)
				JSONObject_tEA00D19860E34865B3D16312DD382C0901CAB654* L_4 = V_2;
				NullCheck(L_4);
				Dictionary_2_t12C70EF76A4D27675DBF4B2F8A83098ABB9DBC33* L_5 = L_4->___m_Dict_4;
				NullCheck(L_5);
				Enumerator_t1B0916EAA662F17AFF7BDA682F6213FDBE55A48F L_6;
				L_6 = Dictionary_2_GetEnumerator_mF7EC8BBAB3CD7EE5642E71681FBDB4A884B05780(L_5, Dictionary_2_GetEnumerator_mF7EC8BBAB3CD7EE5642E71681FBDB4A884B05780_RuntimeMethod_var);
				__this->___U3CU3E7__wrap1_4 = L_6;
				Il2CppCodeGenWriteBarrier((void**)&(((&__this->___U3CU3E7__wrap1_4))->____dictionary_0), (void*)NULL);
				#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
				Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___U3CU3E7__wrap1_4))->____current_3))->___key_0), (void*)NULL);
				#endif
				#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
				Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___U3CU3E7__wrap1_4))->____current_3))->___value_1), (void*)NULL);
				#endif
				__this->___U3CU3E1__state_0 = ((int32_t)-3);
				goto IL_0067_1;
			}

IL_003b_1:
			{
				// foreach (KeyValuePair<string, JSONNode> N in m_Dict)
				Enumerator_t1B0916EAA662F17AFF7BDA682F6213FDBE55A48F* L_7 = (&__this->___U3CU3E7__wrap1_4);
				KeyValuePair_2_tD59618B150F9D38FE8CF312BB48DB72E7ECC4E9C L_8;
				L_8 = Enumerator_get_Current_m588061B1765C95AD6BDEC8EA8FBE37BDA51EAC5E_inline(L_7, Enumerator_get_Current_m588061B1765C95AD6BDEC8EA8FBE37BDA51EAC5E_RuntimeMethod_var);
				V_3 = L_8;
				// yield return N.Value;
				JSONNode_tD29E53D2E1C8F91FF9FEA40F4F3A540857651D3B* L_9;
				L_9 = KeyValuePair_2_get_Value_mDEC839FB9359C1DC5F359FEB68C324657E5216DD_inline((&V_3), KeyValuePair_2_get_Value_mDEC839FB9359C1DC5F359FEB68C324657E5216DD_RuntimeMethod_var);
				__this->___U3CU3E2__current_1 = L_9;
				Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_9);
				__this->___U3CU3E1__state_0 = 1;
				V_0 = (bool)1;
				goto IL_0091;
			}

IL_005f_1:
			{
				__this->___U3CU3E1__state_0 = ((int32_t)-3);
			}

IL_0067_1:
			{
				// foreach (KeyValuePair<string, JSONNode> N in m_Dict)
				Enumerator_t1B0916EAA662F17AFF7BDA682F6213FDBE55A48F* L_10 = (&__this->___U3CU3E7__wrap1_4);
				bool L_11;
				L_11 = Enumerator_MoveNext_m5BE8E9A6A9A88CC3FF48EA3466675ED35B0CC160(L_10, Enumerator_MoveNext_m5BE8E9A6A9A88CC3FF48EA3466675ED35B0CC160_RuntimeMethod_var);
				if (L_11)
				{
					goto IL_003b_1;
				}
			}
			{
				U3Cget_ChildrenU3Ed__27_U3CU3Em__Finally1_m497320D48364432214EF5E922912F9EFC8729D3E(__this, NULL);
				Enumerator_t1B0916EAA662F17AFF7BDA682F6213FDBE55A48F* L_12 = (&__this->___U3CU3E7__wrap1_4);
				il2cpp_codegen_initobj(L_12, sizeof(Enumerator_t1B0916EAA662F17AFF7BDA682F6213FDBE55A48F));
				// }
				V_0 = (bool)0;
				goto IL_0091;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0091:
	{
		bool L_13 = V_0;
		return L_13;
	}
}
// System.Void SimpleJSON.JSONObject/<get_Children>d__27::<>m__Finally1()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3Cget_ChildrenU3Ed__27_U3CU3Em__Finally1_m497320D48364432214EF5E922912F9EFC8729D3E (U3Cget_ChildrenU3Ed__27_t89EE8560565615C4B0D27D10FF05ED6CB2C81A7A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m844831FF3F93A9E3EEDFFF0186465A21BA38BE18_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		__this->___U3CU3E1__state_0 = (-1);
		Enumerator_t1B0916EAA662F17AFF7BDA682F6213FDBE55A48F* L_0 = (&__this->___U3CU3E7__wrap1_4);
		Enumerator_Dispose_m844831FF3F93A9E3EEDFFF0186465A21BA38BE18(L_0, Enumerator_Dispose_m844831FF3F93A9E3EEDFFF0186465A21BA38BE18_RuntimeMethod_var);
		return;
	}
}
// SimpleJSON.JSONNode SimpleJSON.JSONObject/<get_Children>d__27::System.Collections.Generic.IEnumerator<SimpleJSON.JSONNode>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR JSONNode_tD29E53D2E1C8F91FF9FEA40F4F3A540857651D3B* U3Cget_ChildrenU3Ed__27_System_Collections_Generic_IEnumeratorU3CSimpleJSON_JSONNodeU3E_get_Current_mFB01415550C34524EF253C872DF1CD626F46D989 (U3Cget_ChildrenU3Ed__27_t89EE8560565615C4B0D27D10FF05ED6CB2C81A7A* __this, const RuntimeMethod* method) 
{
	{
		JSONNode_tD29E53D2E1C8F91FF9FEA40F4F3A540857651D3B* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void SimpleJSON.JSONObject/<get_Children>d__27::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3Cget_ChildrenU3Ed__27_System_Collections_IEnumerator_Reset_m3759FAC342B4011A236A1F8C8C8712D0EE16CA60 (U3Cget_ChildrenU3Ed__27_t89EE8560565615C4B0D27D10FF05ED6CB2C81A7A* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3Cget_ChildrenU3Ed__27_System_Collections_IEnumerator_Reset_m3759FAC342B4011A236A1F8C8C8712D0EE16CA60_RuntimeMethod_var)));
	}
}
// System.Object SimpleJSON.JSONObject/<get_Children>d__27::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3Cget_ChildrenU3Ed__27_System_Collections_IEnumerator_get_Current_mD3AA8E44FC4F1D1FD2A6E25213829E9F59DD7AA6 (U3Cget_ChildrenU3Ed__27_t89EE8560565615C4B0D27D10FF05ED6CB2C81A7A* __this, const RuntimeMethod* method) 
{
	{
		JSONNode_tD29E53D2E1C8F91FF9FEA40F4F3A540857651D3B* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Collections.Generic.IEnumerator`1<SimpleJSON.JSONNode> SimpleJSON.JSONObject/<get_Children>d__27::System.Collections.Generic.IEnumerable<SimpleJSON.JSONNode>.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3Cget_ChildrenU3Ed__27_System_Collections_Generic_IEnumerableU3CSimpleJSON_JSONNodeU3E_GetEnumerator_m79E89DCB9A525C6B9D5861F40DD5258E72DD16D0 (U3Cget_ChildrenU3Ed__27_t89EE8560565615C4B0D27D10FF05ED6CB2C81A7A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3Cget_ChildrenU3Ed__27_t89EE8560565615C4B0D27D10FF05ED6CB2C81A7A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3Cget_ChildrenU3Ed__27_t89EE8560565615C4B0D27D10FF05ED6CB2C81A7A* V_0 = NULL;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		if ((!(((uint32_t)L_0) == ((uint32_t)((int32_t)-2)))))
		{
			goto IL_0022;
		}
	}
	{
		int32_t L_1 = __this->___U3CU3El__initialThreadId_2;
		int32_t L_2;
		L_2 = Environment_get_CurrentManagedThreadId_mEC09D20ED666BC3277AC9D16B68AA287E5AFE1B2(NULL);
		if ((!(((uint32_t)L_1) == ((uint32_t)L_2))))
		{
			goto IL_0022;
		}
	}
	{
		__this->___U3CU3E1__state_0 = 0;
		V_0 = __this;
		goto IL_0035;
	}

IL_0022:
	{
		U3Cget_ChildrenU3Ed__27_t89EE8560565615C4B0D27D10FF05ED6CB2C81A7A* L_3 = (U3Cget_ChildrenU3Ed__27_t89EE8560565615C4B0D27D10FF05ED6CB2C81A7A*)il2cpp_codegen_object_new(U3Cget_ChildrenU3Ed__27_t89EE8560565615C4B0D27D10FF05ED6CB2C81A7A_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		U3Cget_ChildrenU3Ed__27__ctor_m9CDCA1C141BC8A71F035E6D4B5D029AD75759040(L_3, 0, NULL);
		V_0 = L_3;
		U3Cget_ChildrenU3Ed__27_t89EE8560565615C4B0D27D10FF05ED6CB2C81A7A* L_4 = V_0;
		JSONObject_tEA00D19860E34865B3D16312DD382C0901CAB654* L_5 = __this->___U3CU3E4__this_3;
		NullCheck(L_4);
		L_4->___U3CU3E4__this_3 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&L_4->___U3CU3E4__this_3), (void*)L_5);
	}

IL_0035:
	{
		U3Cget_ChildrenU3Ed__27_t89EE8560565615C4B0D27D10FF05ED6CB2C81A7A* L_6 = V_0;
		return L_6;
	}
}
// System.Collections.IEnumerator SimpleJSON.JSONObject/<get_Children>d__27::System.Collections.IEnumerable.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3Cget_ChildrenU3Ed__27_System_Collections_IEnumerable_GetEnumerator_m6999284A0EBA8A1A1325D099E7781D5EB4558161 (U3Cget_ChildrenU3Ed__27_t89EE8560565615C4B0D27D10FF05ED6CB2C81A7A* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0;
		L_0 = U3Cget_ChildrenU3Ed__27_System_Collections_Generic_IEnumerableU3CSimpleJSON_JSONNodeU3E_GetEnumerator_m79E89DCB9A525C6B9D5861F40DD5258E72DD16D0(__this, NULL);
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
// SimpleJSON.JSONNodeType SimpleJSON.JSONString::get_Tag()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t JSONString_get_Tag_m5339F967DCE893EC01847167479925437CF02FA0 (JSONString_t1A1090FC5863846C80D0BDEF4E63FE23D7AC437D* __this, const RuntimeMethod* method) 
{
	{
		// public override JSONNodeType Tag { get { return JSONNodeType.String; } }
		return (int32_t)(3);
	}
}
// System.Boolean SimpleJSON.JSONString::get_IsString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool JSONString_get_IsString_mC05ACCE8EDEF5CB5BCFD9BFA148AC5C1B652E5EC (JSONString_t1A1090FC5863846C80D0BDEF4E63FE23D7AC437D* __this, const RuntimeMethod* method) 
{
	{
		// public override bool IsString { get { return true; } }
		return (bool)1;
	}
}
// SimpleJSON.JSONNode/Enumerator SimpleJSON.JSONString::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_tA1F999D27FB3CE7FB0AC8D9BD4084CBA9E687C1F JSONString_GetEnumerator_mDC98FED4700A9187E0CB4DE93B74D38C551AFDEE (JSONString_t1A1090FC5863846C80D0BDEF4E63FE23D7AC437D* __this, const RuntimeMethod* method) 
{
	Enumerator_tA1F999D27FB3CE7FB0AC8D9BD4084CBA9E687C1F V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// public override Enumerator GetEnumerator() { return new Enumerator(); }
		il2cpp_codegen_initobj((&V_0), sizeof(Enumerator_tA1F999D27FB3CE7FB0AC8D9BD4084CBA9E687C1F));
		Enumerator_tA1F999D27FB3CE7FB0AC8D9BD4084CBA9E687C1F L_0 = V_0;
		return L_0;
	}
}
// System.String SimpleJSON.JSONString::get_Value()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* JSONString_get_Value_m2D995A26283186D989F7E4837325469AA0A66F59 (JSONString_t1A1090FC5863846C80D0BDEF4E63FE23D7AC437D* __this, const RuntimeMethod* method) 
{
	{
		// get { return m_Data; }
		String_t* L_0 = __this->___m_Data_4;
		return L_0;
	}
}
// System.Void SimpleJSON.JSONString::set_Value(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JSONString_set_Value_m65BEC8D14E1BCF5EED89848D5D0DE1D688D4525A (JSONString_t1A1090FC5863846C80D0BDEF4E63FE23D7AC437D* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		// m_Data = value;
		String_t* L_0 = ___value0;
		__this->___m_Data_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Data_4), (void*)L_0);
		// }
		return;
	}
}
// System.Void SimpleJSON.JSONString::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JSONString__ctor_mAD5BB3D8B2193F8B64CD62C52F5EF2D51F7A2742 (JSONString_t1A1090FC5863846C80D0BDEF4E63FE23D7AC437D* __this, String_t* ___aData0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JSONNode_tD29E53D2E1C8F91FF9FEA40F4F3A540857651D3B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public JSONString(string aData)
		il2cpp_codegen_runtime_class_init_inline(JSONNode_tD29E53D2E1C8F91FF9FEA40F4F3A540857651D3B_il2cpp_TypeInfo_var);
		JSONNode__ctor_m4019E01BCFB43E3848591C3E8C97534BA8BC6C49(__this, NULL);
		// m_Data = aData;
		String_t* L_0 = ___aData0;
		__this->___m_Data_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Data_4), (void*)L_0);
		// }
		return;
	}
}
// SimpleJSON.JSONNode SimpleJSON.JSONString::Clone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR JSONNode_tD29E53D2E1C8F91FF9FEA40F4F3A540857651D3B* JSONString_Clone_m8013C895507367382F9503830B06F3EAE265BD60 (JSONString_t1A1090FC5863846C80D0BDEF4E63FE23D7AC437D* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JSONString_t1A1090FC5863846C80D0BDEF4E63FE23D7AC437D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return new JSONString(m_Data);
		String_t* L_0 = __this->___m_Data_4;
		JSONString_t1A1090FC5863846C80D0BDEF4E63FE23D7AC437D* L_1 = (JSONString_t1A1090FC5863846C80D0BDEF4E63FE23D7AC437D*)il2cpp_codegen_object_new(JSONString_t1A1090FC5863846C80D0BDEF4E63FE23D7AC437D_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		JSONString__ctor_mAD5BB3D8B2193F8B64CD62C52F5EF2D51F7A2742(L_1, L_0, NULL);
		return L_1;
	}
}
// System.Void SimpleJSON.JSONString::WriteToStringBuilder(System.Text.StringBuilder,System.Int32,System.Int32,SimpleJSON.JSONTextMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JSONString_WriteToStringBuilder_m1C7986A0C5E40776EE0EE3A0116D3FA1EF6E3FD1 (JSONString_t1A1090FC5863846C80D0BDEF4E63FE23D7AC437D* __this, StringBuilder_t* ___aSB0, int32_t ___aIndent1, int32_t ___aIndentInc2, int32_t ___aMode3, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JSONNode_tD29E53D2E1C8F91FF9FEA40F4F3A540857651D3B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// aSB.Append('\"').Append(Escape(m_Data)).Append('\"');
		StringBuilder_t* L_0 = ___aSB0;
		NullCheck(L_0);
		StringBuilder_t* L_1;
		L_1 = StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1(L_0, ((int32_t)34), NULL);
		String_t* L_2 = __this->___m_Data_4;
		il2cpp_codegen_runtime_class_init_inline(JSONNode_tD29E53D2E1C8F91FF9FEA40F4F3A540857651D3B_il2cpp_TypeInfo_var);
		String_t* L_3;
		L_3 = JSONNode_Escape_m0ED072BC7DE866EC611694D65B6AFCF9E9E3A34E(L_2, NULL);
		NullCheck(L_1);
		StringBuilder_t* L_4;
		L_4 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_1, L_3, NULL);
		NullCheck(L_4);
		StringBuilder_t* L_5;
		L_5 = StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1(L_4, ((int32_t)34), NULL);
		// }
		return;
	}
}
// System.Boolean SimpleJSON.JSONString::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool JSONString_Equals_mEB9C8BF5C33E42511722D273A15A7D0A190C4836 (JSONString_t1A1090FC5863846C80D0BDEF4E63FE23D7AC437D* __this, RuntimeObject* ___obj0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JSONNode_tD29E53D2E1C8F91FF9FEA40F4F3A540857651D3B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JSONString_t1A1090FC5863846C80D0BDEF4E63FE23D7AC437D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	JSONString_t1A1090FC5863846C80D0BDEF4E63FE23D7AC437D* V_1 = NULL;
	{
		// if (base.Equals(obj))
		RuntimeObject* L_0 = ___obj0;
		bool L_1;
		L_1 = JSONNode_Equals_m514369EEC7080C896FA83D32F67980881C4B4823(__this, L_0, NULL);
		if (!L_1)
		{
			goto IL_000b;
		}
	}
	{
		// return true;
		return (bool)1;
	}

IL_000b:
	{
		// string s = obj as string;
		RuntimeObject* L_2 = ___obj0;
		V_0 = ((String_t*)IsInstSealed((RuntimeObject*)L_2, String_t_il2cpp_TypeInfo_var));
		// if (s != null)
		String_t* L_3 = V_0;
		if (!L_3)
		{
			goto IL_0022;
		}
	}
	{
		// return m_Data == s;
		String_t* L_4 = __this->___m_Data_4;
		String_t* L_5 = V_0;
		bool L_6;
		L_6 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_4, L_5, NULL);
		return L_6;
	}

IL_0022:
	{
		// JSONString s2 = obj as JSONString;
		RuntimeObject* L_7 = ___obj0;
		V_1 = ((JSONString_t1A1090FC5863846C80D0BDEF4E63FE23D7AC437D*)IsInstClass((RuntimeObject*)L_7, JSONString_t1A1090FC5863846C80D0BDEF4E63FE23D7AC437D_il2cpp_TypeInfo_var));
		// if (s2 != null)
		JSONString_t1A1090FC5863846C80D0BDEF4E63FE23D7AC437D* L_8 = V_1;
		il2cpp_codegen_runtime_class_init_inline(JSONNode_tD29E53D2E1C8F91FF9FEA40F4F3A540857651D3B_il2cpp_TypeInfo_var);
		bool L_9;
		L_9 = JSONNode_op_Inequality_m7050845D0269F25ED099612FACF1BB706EB45D30(L_8, NULL, NULL);
		if (!L_9)
		{
			goto IL_0044;
		}
	}
	{
		// return m_Data == s2.m_Data;
		String_t* L_10 = __this->___m_Data_4;
		JSONString_t1A1090FC5863846C80D0BDEF4E63FE23D7AC437D* L_11 = V_1;
		NullCheck(L_11);
		String_t* L_12 = L_11->___m_Data_4;
		bool L_13;
		L_13 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_10, L_12, NULL);
		return L_13;
	}

IL_0044:
	{
		// return false;
		return (bool)0;
	}
}
// System.Int32 SimpleJSON.JSONString::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t JSONString_GetHashCode_m8417EF90ECFC517D19476D809AB69594A046E8B3 (JSONString_t1A1090FC5863846C80D0BDEF4E63FE23D7AC437D* __this, const RuntimeMethod* method) 
{
	{
		// return m_Data.GetHashCode();
		String_t* L_0 = __this->___m_Data_4;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = VirtualFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.Object::GetHashCode() */, L_0);
		return L_1;
	}
}
// System.Void SimpleJSON.JSONString::Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JSONString_Clear_m5CDEACA01EC9FF4268B20C0D7DDA172CD5A3A598 (JSONString_t1A1090FC5863846C80D0BDEF4E63FE23D7AC437D* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		s_Il2CppMethodInitialized = true;
	}
	{
		// m_Data = "";
		__this->___m_Data_4 = _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Data_4), (void*)_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
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
// SimpleJSON.JSONNodeType SimpleJSON.JSONNumber::get_Tag()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t JSONNumber_get_Tag_mF133088E15A22B479149D8C6A39B2C48E043BC57 (JSONNumber_tE274A557833A3AE0CDC6C7E563CEAD2A38355688* __this, const RuntimeMethod* method) 
{
	{
		// public override JSONNodeType Tag { get { return JSONNodeType.Number; } }
		return (int32_t)(4);
	}
}
// System.Boolean SimpleJSON.JSONNumber::get_IsNumber()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool JSONNumber_get_IsNumber_m820EBA8897D65F8B785843490695B4AFA9D88A75 (JSONNumber_tE274A557833A3AE0CDC6C7E563CEAD2A38355688* __this, const RuntimeMethod* method) 
{
	{
		// public override bool IsNumber { get { return true; } }
		return (bool)1;
	}
}
// SimpleJSON.JSONNode/Enumerator SimpleJSON.JSONNumber::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_tA1F999D27FB3CE7FB0AC8D9BD4084CBA9E687C1F JSONNumber_GetEnumerator_mCF2FC1C21EECE4075A76BC878240AF66BA9C8FDB (JSONNumber_tE274A557833A3AE0CDC6C7E563CEAD2A38355688* __this, const RuntimeMethod* method) 
{
	Enumerator_tA1F999D27FB3CE7FB0AC8D9BD4084CBA9E687C1F V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// public override Enumerator GetEnumerator() { return new Enumerator(); }
		il2cpp_codegen_initobj((&V_0), sizeof(Enumerator_tA1F999D27FB3CE7FB0AC8D9BD4084CBA9E687C1F));
		Enumerator_tA1F999D27FB3CE7FB0AC8D9BD4084CBA9E687C1F L_0 = V_0;
		return L_0;
	}
}
// System.String SimpleJSON.JSONNumber::get_Value()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* JSONNumber_get_Value_m30B2972811A3171125A214DF6BD56D7AB81128F7 (JSONNumber_tE274A557833A3AE0CDC6C7E563CEAD2A38355688* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// get { return m_Data.ToString(CultureInfo.InvariantCulture); }
		double* L_0 = (&__this->___m_Data_4);
		il2cpp_codegen_runtime_class_init_inline(CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_il2cpp_TypeInfo_var);
		CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* L_1;
		L_1 = CultureInfo_get_InvariantCulture_m78DAB8CBE8766445310782B6E61FB7A9983AD425(NULL);
		String_t* L_2;
		L_2 = Double_ToString_m4318830D9F771852FDCF21C14CF9E8ABC7E77357(L_0, L_1, NULL);
		return L_2;
	}
}
// System.Void SimpleJSON.JSONNumber::set_Value(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JSONNumber_set_Value_m2901C0C71F22A5618956140C19BDE8B6C2614C92 (JSONNumber_tE274A557833A3AE0CDC6C7E563CEAD2A38355688* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	double V_0 = 0.0;
	{
		// if (double.TryParse(value, NumberStyles.Float, CultureInfo.InvariantCulture, out v))
		String_t* L_0 = ___value0;
		il2cpp_codegen_runtime_class_init_inline(CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_il2cpp_TypeInfo_var);
		CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* L_1;
		L_1 = CultureInfo_get_InvariantCulture_m78DAB8CBE8766445310782B6E61FB7A9983AD425(NULL);
		bool L_2;
		L_2 = Double_TryParse_m6038C4DBF1789F1954938FF7F6D3459359CD7718(L_0, ((int32_t)167), L_1, (&V_0), NULL);
		if (!L_2)
		{
			goto IL_001b;
		}
	}
	{
		// m_Data = v;
		double L_3 = V_0;
		__this->___m_Data_4 = L_3;
	}

IL_001b:
	{
		// }
		return;
	}
}
// System.Double SimpleJSON.JSONNumber::get_AsDouble()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double JSONNumber_get_AsDouble_mAC79EB866485FC21F80C32C9A44E44488C59437C (JSONNumber_tE274A557833A3AE0CDC6C7E563CEAD2A38355688* __this, const RuntimeMethod* method) 
{
	{
		// get { return m_Data; }
		double L_0 = __this->___m_Data_4;
		return L_0;
	}
}
// System.Void SimpleJSON.JSONNumber::set_AsDouble(System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JSONNumber_set_AsDouble_mD06820BD7B1FDE52CA2BEC55014CA25D3DD92A14 (JSONNumber_tE274A557833A3AE0CDC6C7E563CEAD2A38355688* __this, double ___value0, const RuntimeMethod* method) 
{
	{
		// set { m_Data = value; }
		double L_0 = ___value0;
		__this->___m_Data_4 = L_0;
		// set { m_Data = value; }
		return;
	}
}
// System.Int64 SimpleJSON.JSONNumber::get_AsLong()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t JSONNumber_get_AsLong_m7F7544EF29F76B5010F3685A68F749D84AE1CC53 (JSONNumber_tE274A557833A3AE0CDC6C7E563CEAD2A38355688* __this, const RuntimeMethod* method) 
{
	{
		// get { return (long)m_Data; }
		double L_0 = __this->___m_Data_4;
		return il2cpp_codegen_cast_double_to_int<int64_t>(L_0);
	}
}
// System.Void SimpleJSON.JSONNumber::set_AsLong(System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JSONNumber_set_AsLong_m6C9E8C4C240B17AB516984E36C7FD0F149933A01 (JSONNumber_tE274A557833A3AE0CDC6C7E563CEAD2A38355688* __this, int64_t ___value0, const RuntimeMethod* method) 
{
	{
		// set { m_Data = value; }
		int64_t L_0 = ___value0;
		__this->___m_Data_4 = ((double)L_0);
		// set { m_Data = value; }
		return;
	}
}
// System.UInt64 SimpleJSON.JSONNumber::get_AsULong()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t JSONNumber_get_AsULong_m38F74315A1A6DAB11341C764990197CBDF5914EE (JSONNumber_tE274A557833A3AE0CDC6C7E563CEAD2A38355688* __this, const RuntimeMethod* method) 
{
	{
		// get { return (ulong)m_Data; }
		double L_0 = __this->___m_Data_4;
		return il2cpp_codegen_cast_floating_point<uint64_t, int64_t, double>(L_0);
	}
}
// System.Void SimpleJSON.JSONNumber::set_AsULong(System.UInt64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JSONNumber_set_AsULong_m6C77FF36416209BA15F265C02DDEB23D77936922 (JSONNumber_tE274A557833A3AE0CDC6C7E563CEAD2A38355688* __this, uint64_t ___value0, const RuntimeMethod* method) 
{
	{
		// set { m_Data = value; }
		uint64_t L_0 = ___value0;
		__this->___m_Data_4 = ((double)((double)(uint64_t)L_0));
		// set { m_Data = value; }
		return;
	}
}
// System.Void SimpleJSON.JSONNumber::.ctor(System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JSONNumber__ctor_mCBCEBE5C94CA62FF6A45B6F37850DBCE5D2648D8 (JSONNumber_tE274A557833A3AE0CDC6C7E563CEAD2A38355688* __this, double ___aData0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JSONNode_tD29E53D2E1C8F91FF9FEA40F4F3A540857651D3B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public JSONNumber(double aData)
		il2cpp_codegen_runtime_class_init_inline(JSONNode_tD29E53D2E1C8F91FF9FEA40F4F3A540857651D3B_il2cpp_TypeInfo_var);
		JSONNode__ctor_m4019E01BCFB43E3848591C3E8C97534BA8BC6C49(__this, NULL);
		// m_Data = aData;
		double L_0 = ___aData0;
		__this->___m_Data_4 = L_0;
		// }
		return;
	}
}
// System.Void SimpleJSON.JSONNumber::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JSONNumber__ctor_mC81A4CD687AB5DADDEB1BA6DDCC1308C4EC58FDA (JSONNumber_tE274A557833A3AE0CDC6C7E563CEAD2A38355688* __this, String_t* ___aData0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JSONNode_tD29E53D2E1C8F91FF9FEA40F4F3A540857651D3B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public JSONNumber(string aData)
		il2cpp_codegen_runtime_class_init_inline(JSONNode_tD29E53D2E1C8F91FF9FEA40F4F3A540857651D3B_il2cpp_TypeInfo_var);
		JSONNode__ctor_m4019E01BCFB43E3848591C3E8C97534BA8BC6C49(__this, NULL);
		// Value = aData;
		String_t* L_0 = ___aData0;
		VirtualActionInvoker1< String_t* >::Invoke(10 /* System.Void SimpleJSON.JSONNode::set_Value(System.String) */, __this, L_0);
		// }
		return;
	}
}
// SimpleJSON.JSONNode SimpleJSON.JSONNumber::Clone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR JSONNode_tD29E53D2E1C8F91FF9FEA40F4F3A540857651D3B* JSONNumber_Clone_mAC9E5574D8177531CF4BB7DA77406952140031BD (JSONNumber_tE274A557833A3AE0CDC6C7E563CEAD2A38355688* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JSONNumber_tE274A557833A3AE0CDC6C7E563CEAD2A38355688_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return new JSONNumber(m_Data);
		double L_0 = __this->___m_Data_4;
		JSONNumber_tE274A557833A3AE0CDC6C7E563CEAD2A38355688* L_1 = (JSONNumber_tE274A557833A3AE0CDC6C7E563CEAD2A38355688*)il2cpp_codegen_object_new(JSONNumber_tE274A557833A3AE0CDC6C7E563CEAD2A38355688_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		JSONNumber__ctor_mCBCEBE5C94CA62FF6A45B6F37850DBCE5D2648D8(L_1, L_0, NULL);
		return L_1;
	}
}
// System.Void SimpleJSON.JSONNumber::WriteToStringBuilder(System.Text.StringBuilder,System.Int32,System.Int32,SimpleJSON.JSONTextMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JSONNumber_WriteToStringBuilder_m762075C17899628FE2D2C0213C2F8A5A03E09F96 (JSONNumber_tE274A557833A3AE0CDC6C7E563CEAD2A38355688* __this, StringBuilder_t* ___aSB0, int32_t ___aIndent1, int32_t ___aIndentInc2, int32_t ___aMode3, const RuntimeMethod* method) 
{
	{
		// aSB.Append(Value);
		StringBuilder_t* L_0 = ___aSB0;
		String_t* L_1;
		L_1 = VirtualFuncInvoker0< String_t* >::Invoke(9 /* System.String SimpleJSON.JSONNode::get_Value() */, __this);
		NullCheck(L_0);
		StringBuilder_t* L_2;
		L_2 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_0, L_1, NULL);
		// }
		return;
	}
}
// System.Boolean SimpleJSON.JSONNumber::IsNumeric(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool JSONNumber_IsNumeric_m20828DB244E4533C5712A379B65138FF2EF0384F (RuntimeObject* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return value is int || value is uint
		//     || value is float || value is double
		//     || value is decimal
		//     || value is long || value is ulong
		//     || value is short || value is ushort
		//     || value is sbyte || value is byte;
		RuntimeObject* L_0 = ___value0;
		if (((RuntimeObject*)IsInstSealed((RuntimeObject*)L_0, Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var)))
		{
			goto IL_005a;
		}
	}
	{
		RuntimeObject* L_1 = ___value0;
		if (((RuntimeObject*)IsInstSealed((RuntimeObject*)L_1, UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_il2cpp_TypeInfo_var)))
		{
			goto IL_005a;
		}
	}
	{
		RuntimeObject* L_2 = ___value0;
		if (((RuntimeObject*)IsInstSealed((RuntimeObject*)L_2, Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var)))
		{
			goto IL_005a;
		}
	}
	{
		RuntimeObject* L_3 = ___value0;
		if (((RuntimeObject*)IsInstSealed((RuntimeObject*)L_3, Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_il2cpp_TypeInfo_var)))
		{
			goto IL_005a;
		}
	}
	{
		RuntimeObject* L_4 = ___value0;
		if (((RuntimeObject*)IsInstSealed((RuntimeObject*)L_4, Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F_il2cpp_TypeInfo_var)))
		{
			goto IL_005a;
		}
	}
	{
		RuntimeObject* L_5 = ___value0;
		if (((RuntimeObject*)IsInstSealed((RuntimeObject*)L_5, Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_il2cpp_TypeInfo_var)))
		{
			goto IL_005a;
		}
	}
	{
		RuntimeObject* L_6 = ___value0;
		if (((RuntimeObject*)IsInstSealed((RuntimeObject*)L_6, UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_il2cpp_TypeInfo_var)))
		{
			goto IL_005a;
		}
	}
	{
		RuntimeObject* L_7 = ___value0;
		if (((RuntimeObject*)IsInstSealed((RuntimeObject*)L_7, Int16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_il2cpp_TypeInfo_var)))
		{
			goto IL_005a;
		}
	}
	{
		RuntimeObject* L_8 = ___value0;
		if (((RuntimeObject*)IsInstSealed((RuntimeObject*)L_8, UInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_il2cpp_TypeInfo_var)))
		{
			goto IL_005a;
		}
	}
	{
		RuntimeObject* L_9 = ___value0;
		if (((RuntimeObject*)IsInstSealed((RuntimeObject*)L_9, SByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_il2cpp_TypeInfo_var)))
		{
			goto IL_005a;
		}
	}
	{
		RuntimeObject* L_10 = ___value0;
		return (bool)((!(((RuntimeObject*)(RuntimeObject*)((RuntimeObject*)IsInstSealed((RuntimeObject*)L_10, Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_il2cpp_TypeInfo_var))) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
	}

IL_005a:
	{
		return (bool)1;
	}
}
// System.Boolean SimpleJSON.JSONNumber::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool JSONNumber_Equals_mEE3BD1F3CBEDD7ED2F56D93824FC9EF041C4BD50 (JSONNumber_tE274A557833A3AE0CDC6C7E563CEAD2A38355688* __this, RuntimeObject* ___obj0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JSONNode_tD29E53D2E1C8F91FF9FEA40F4F3A540857651D3B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JSONNumber_tE274A557833A3AE0CDC6C7E563CEAD2A38355688_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	JSONNumber_tE274A557833A3AE0CDC6C7E563CEAD2A38355688* V_0 = NULL;
	{
		// if (obj == null)
		RuntimeObject* L_0 = ___obj0;
		if (L_0)
		{
			goto IL_0005;
		}
	}
	{
		// return false;
		return (bool)0;
	}

IL_0005:
	{
		// if (base.Equals(obj))
		RuntimeObject* L_1 = ___obj0;
		bool L_2;
		L_2 = JSONNode_Equals_m514369EEC7080C896FA83D32F67980881C4B4823(__this, L_1, NULL);
		if (!L_2)
		{
			goto IL_0010;
		}
	}
	{
		// return true;
		return (bool)1;
	}

IL_0010:
	{
		// JSONNumber s2 = obj as JSONNumber;
		RuntimeObject* L_3 = ___obj0;
		V_0 = ((JSONNumber_tE274A557833A3AE0CDC6C7E563CEAD2A38355688*)IsInstClass((RuntimeObject*)L_3, JSONNumber_tE274A557833A3AE0CDC6C7E563CEAD2A38355688_il2cpp_TypeInfo_var));
		// if (s2 != null)
		JSONNumber_tE274A557833A3AE0CDC6C7E563CEAD2A38355688* L_4 = V_0;
		il2cpp_codegen_runtime_class_init_inline(JSONNode_tD29E53D2E1C8F91FF9FEA40F4F3A540857651D3B_il2cpp_TypeInfo_var);
		bool L_5;
		L_5 = JSONNode_op_Inequality_m7050845D0269F25ED099612FACF1BB706EB45D30(L_4, NULL, NULL);
		if (!L_5)
		{
			goto IL_002f;
		}
	}
	{
		// return m_Data == s2.m_Data;
		double L_6 = __this->___m_Data_4;
		JSONNumber_tE274A557833A3AE0CDC6C7E563CEAD2A38355688* L_7 = V_0;
		NullCheck(L_7);
		double L_8 = L_7->___m_Data_4;
		return (bool)((((double)L_6) == ((double)L_8))? 1 : 0);
	}

IL_002f:
	{
		// if (IsNumeric(obj))
		RuntimeObject* L_9 = ___obj0;
		bool L_10;
		L_10 = JSONNumber_IsNumeric_m20828DB244E4533C5712A379B65138FF2EF0384F(L_9, NULL);
		if (!L_10)
		{
			goto IL_0046;
		}
	}
	{
		// return Convert.ToDouble(obj) == m_Data;
		RuntimeObject* L_11 = ___obj0;
		il2cpp_codegen_runtime_class_init_inline(Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		double L_12;
		L_12 = Convert_ToDouble_mE64ED1A9412EA3B16E4C7F1C74655F53DE71C71A(L_11, NULL);
		double L_13 = __this->___m_Data_4;
		return (bool)((((double)L_12) == ((double)L_13))? 1 : 0);
	}

IL_0046:
	{
		// return false;
		return (bool)0;
	}
}
// System.Int32 SimpleJSON.JSONNumber::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t JSONNumber_GetHashCode_m508D543922F0800A2475DDA2D91007CC3D59FF88 (JSONNumber_tE274A557833A3AE0CDC6C7E563CEAD2A38355688* __this, const RuntimeMethod* method) 
{
	{
		// return m_Data.GetHashCode();
		double* L_0 = (&__this->___m_Data_4);
		int32_t L_1;
		L_1 = Double_GetHashCode_m3761FC05AD24D97A68FA1E8412A9454DF3880E32_inline(L_0, NULL);
		return L_1;
	}
}
// System.Void SimpleJSON.JSONNumber::Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JSONNumber_Clear_m7EFC2AFE90B628171F42FABA43A5312FDE7AD526 (JSONNumber_tE274A557833A3AE0CDC6C7E563CEAD2A38355688* __this, const RuntimeMethod* method) 
{
	{
		// m_Data = 0;
		__this->___m_Data_4 = (0.0);
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
// SimpleJSON.JSONNodeType SimpleJSON.JSONBool::get_Tag()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t JSONBool_get_Tag_mEEFD44031CB926D3A0E8156D24A9CB313F5AA590 (JSONBool_tD24D984AAB7A652E0241CA0111547A9A9F66B5C9* __this, const RuntimeMethod* method) 
{
	{
		// public override JSONNodeType Tag { get { return JSONNodeType.Boolean; } }
		return (int32_t)(6);
	}
}
// System.Boolean SimpleJSON.JSONBool::get_IsBoolean()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool JSONBool_get_IsBoolean_mD6688224BE2AE370005025DCB43A3288C0FE46DF (JSONBool_tD24D984AAB7A652E0241CA0111547A9A9F66B5C9* __this, const RuntimeMethod* method) 
{
	{
		// public override bool IsBoolean { get { return true; } }
		return (bool)1;
	}
}
// SimpleJSON.JSONNode/Enumerator SimpleJSON.JSONBool::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_tA1F999D27FB3CE7FB0AC8D9BD4084CBA9E687C1F JSONBool_GetEnumerator_mCC4ECD81516B6875924C2638357C050DE97D35C6 (JSONBool_tD24D984AAB7A652E0241CA0111547A9A9F66B5C9* __this, const RuntimeMethod* method) 
{
	Enumerator_tA1F999D27FB3CE7FB0AC8D9BD4084CBA9E687C1F V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// public override Enumerator GetEnumerator() { return new Enumerator(); }
		il2cpp_codegen_initobj((&V_0), sizeof(Enumerator_tA1F999D27FB3CE7FB0AC8D9BD4084CBA9E687C1F));
		Enumerator_tA1F999D27FB3CE7FB0AC8D9BD4084CBA9E687C1F L_0 = V_0;
		return L_0;
	}
}
// System.String SimpleJSON.JSONBool::get_Value()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* JSONBool_get_Value_m5487C1CF85C09C72E39DA272C0E308F09472CCE4 (JSONBool_tD24D984AAB7A652E0241CA0111547A9A9F66B5C9* __this, const RuntimeMethod* method) 
{
	{
		// get { return m_Data.ToString(); }
		bool* L_0 = (&__this->___m_Data_4);
		String_t* L_1;
		L_1 = Boolean_ToString_m6646C8026B1DF381A1EE8CD13549175E9703CC63(L_0, NULL);
		return L_1;
	}
}
// System.Void SimpleJSON.JSONBool::set_Value(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JSONBool_set_Value_m507DEA4DBD7FD214E82B5BF3D2FA8F234E71ACE5 (JSONBool_tD24D984AAB7A652E0241CA0111547A9A9F66B5C9* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		// if (bool.TryParse(value, out v))
		String_t* L_0 = ___value0;
		il2cpp_codegen_runtime_class_init_inline(Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Boolean_TryParse_mACDFEB12D4D8B25F9AAA56678FEFC0724D49776F(L_0, (&V_0), NULL);
		if (!L_1)
		{
			goto IL_0011;
		}
	}
	{
		// m_Data = v;
		bool L_2 = V_0;
		__this->___m_Data_4 = L_2;
	}

IL_0011:
	{
		// }
		return;
	}
}
// System.Boolean SimpleJSON.JSONBool::get_AsBool()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool JSONBool_get_AsBool_m652D4C7FC8EDE4C93E9016436FD2F8AE63C7BA54 (JSONBool_tD24D984AAB7A652E0241CA0111547A9A9F66B5C9* __this, const RuntimeMethod* method) 
{
	{
		// get { return m_Data; }
		bool L_0 = __this->___m_Data_4;
		return L_0;
	}
}
// System.Void SimpleJSON.JSONBool::set_AsBool(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JSONBool_set_AsBool_m20C9B02B5D05DE71F45E73B4B10AC79DCA0C2BF5 (JSONBool_tD24D984AAB7A652E0241CA0111547A9A9F66B5C9* __this, bool ___value0, const RuntimeMethod* method) 
{
	{
		// set { m_Data = value; }
		bool L_0 = ___value0;
		__this->___m_Data_4 = L_0;
		// set { m_Data = value; }
		return;
	}
}
// System.Void SimpleJSON.JSONBool::.ctor(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JSONBool__ctor_mE760DC3E6BCC0DDF8900363A7DFB69FB7C08C96B (JSONBool_tD24D984AAB7A652E0241CA0111547A9A9F66B5C9* __this, bool ___aData0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JSONNode_tD29E53D2E1C8F91FF9FEA40F4F3A540857651D3B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public JSONBool(bool aData)
		il2cpp_codegen_runtime_class_init_inline(JSONNode_tD29E53D2E1C8F91FF9FEA40F4F3A540857651D3B_il2cpp_TypeInfo_var);
		JSONNode__ctor_m4019E01BCFB43E3848591C3E8C97534BA8BC6C49(__this, NULL);
		// m_Data = aData;
		bool L_0 = ___aData0;
		__this->___m_Data_4 = L_0;
		// }
		return;
	}
}
// System.Void SimpleJSON.JSONBool::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JSONBool__ctor_mF2E3ABA679024713EC8FFE3BB165DC1753796C1F (JSONBool_tD24D984AAB7A652E0241CA0111547A9A9F66B5C9* __this, String_t* ___aData0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JSONNode_tD29E53D2E1C8F91FF9FEA40F4F3A540857651D3B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public JSONBool(string aData)
		il2cpp_codegen_runtime_class_init_inline(JSONNode_tD29E53D2E1C8F91FF9FEA40F4F3A540857651D3B_il2cpp_TypeInfo_var);
		JSONNode__ctor_m4019E01BCFB43E3848591C3E8C97534BA8BC6C49(__this, NULL);
		// Value = aData;
		String_t* L_0 = ___aData0;
		VirtualActionInvoker1< String_t* >::Invoke(10 /* System.Void SimpleJSON.JSONNode::set_Value(System.String) */, __this, L_0);
		// }
		return;
	}
}
// SimpleJSON.JSONNode SimpleJSON.JSONBool::Clone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR JSONNode_tD29E53D2E1C8F91FF9FEA40F4F3A540857651D3B* JSONBool_Clone_mAB9F0F7A970DD0A23438D4783FA2B27BA44BB184 (JSONBool_tD24D984AAB7A652E0241CA0111547A9A9F66B5C9* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JSONBool_tD24D984AAB7A652E0241CA0111547A9A9F66B5C9_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return new JSONBool(m_Data);
		bool L_0 = __this->___m_Data_4;
		JSONBool_tD24D984AAB7A652E0241CA0111547A9A9F66B5C9* L_1 = (JSONBool_tD24D984AAB7A652E0241CA0111547A9A9F66B5C9*)il2cpp_codegen_object_new(JSONBool_tD24D984AAB7A652E0241CA0111547A9A9F66B5C9_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		JSONBool__ctor_mE760DC3E6BCC0DDF8900363A7DFB69FB7C08C96B(L_1, L_0, NULL);
		return L_1;
	}
}
// System.Void SimpleJSON.JSONBool::WriteToStringBuilder(System.Text.StringBuilder,System.Int32,System.Int32,SimpleJSON.JSONTextMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JSONBool_WriteToStringBuilder_m867E6B38CC264C1EB7CB1DB38174B87E69EB667F (JSONBool_tD24D984AAB7A652E0241CA0111547A9A9F66B5C9* __this, StringBuilder_t* ___aSB0, int32_t ___aIndent1, int32_t ___aIndentInc2, int32_t ___aMode3, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral77D38C0623F92B292B925F6E72CF5CF99A20D4EB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB7C45DD316C68ABF3429C20058C2981C652192F2);
		s_Il2CppMethodInitialized = true;
	}
	StringBuilder_t* G_B2_0 = NULL;
	StringBuilder_t* G_B1_0 = NULL;
	String_t* G_B3_0 = NULL;
	StringBuilder_t* G_B3_1 = NULL;
	{
		// aSB.Append((m_Data) ? "true" : "false");
		StringBuilder_t* L_0 = ___aSB0;
		bool L_1 = __this->___m_Data_4;
		G_B1_0 = L_0;
		if (L_1)
		{
			G_B2_0 = L_0;
			goto IL_0010;
		}
	}
	{
		G_B3_0 = _stringLiteral77D38C0623F92B292B925F6E72CF5CF99A20D4EB;
		G_B3_1 = G_B1_0;
		goto IL_0015;
	}

IL_0010:
	{
		G_B3_0 = _stringLiteralB7C45DD316C68ABF3429C20058C2981C652192F2;
		G_B3_1 = G_B2_0;
	}

IL_0015:
	{
		NullCheck(G_B3_1);
		StringBuilder_t* L_2;
		L_2 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(G_B3_1, G_B3_0, NULL);
		// }
		return;
	}
}
// System.Boolean SimpleJSON.JSONBool::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool JSONBool_Equals_mD54CD5176C4F2ECD99321F51DA0E6D3F09CB8901 (JSONBool_tD24D984AAB7A652E0241CA0111547A9A9F66B5C9* __this, RuntimeObject* ___obj0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (obj == null)
		RuntimeObject* L_0 = ___obj0;
		if (L_0)
		{
			goto IL_0005;
		}
	}
	{
		// return false;
		return (bool)0;
	}

IL_0005:
	{
		// if (obj is bool)
		RuntimeObject* L_1 = ___obj0;
		if (!((RuntimeObject*)IsInstSealed((RuntimeObject*)L_1, Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var)))
		{
			goto IL_001c;
		}
	}
	{
		// return m_Data == (bool)obj;
		bool L_2 = __this->___m_Data_4;
		RuntimeObject* L_3 = ___obj0;
		return (bool)((((int32_t)L_2) == ((int32_t)((*(bool*)((bool*)(bool*)UnBox(L_3, Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var))))))? 1 : 0);
	}

IL_001c:
	{
		// return false;
		return (bool)0;
	}
}
// System.Int32 SimpleJSON.JSONBool::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t JSONBool_GetHashCode_m4D37C353CAF168831AA1421504326C5DA9C44520 (JSONBool_tD24D984AAB7A652E0241CA0111547A9A9F66B5C9* __this, const RuntimeMethod* method) 
{
	{
		// return m_Data.GetHashCode();
		bool* L_0 = (&__this->___m_Data_4);
		int32_t L_1;
		L_1 = Boolean_GetHashCode_mEDB6904770C962BAF4510E5D24F08083C33900E3(L_0, NULL);
		return L_1;
	}
}
// System.Void SimpleJSON.JSONBool::Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JSONBool_Clear_m67C2964E0564E342D9A70587FC0D22067A55AB5C (JSONBool_tD24D984AAB7A652E0241CA0111547A9A9F66B5C9* __this, const RuntimeMethod* method) 
{
	{
		// m_Data = false;
		__this->___m_Data_4 = (bool)0;
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
// SimpleJSON.JSONNull SimpleJSON.JSONNull::CreateOrGet()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR JSONNull_tEE66558FCE6029B3F1414C062F5E38E0530BD69A* JSONNull_CreateOrGet_m8A46E28FE2DA1E537F51FA071E580ABC21DB5701 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JSONNull_tEE66558FCE6029B3F1414C062F5E38E0530BD69A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (reuseSameInstance)
		il2cpp_codegen_runtime_class_init_inline(JSONNull_tEE66558FCE6029B3F1414C062F5E38E0530BD69A_il2cpp_TypeInfo_var);
		bool L_0 = ((JSONNull_tEE66558FCE6029B3F1414C062F5E38E0530BD69A_StaticFields*)il2cpp_codegen_static_fields_for(JSONNull_tEE66558FCE6029B3F1414C062F5E38E0530BD69A_il2cpp_TypeInfo_var))->___reuseSameInstance_5;
		if (!L_0)
		{
			goto IL_000d;
		}
	}
	{
		// return m_StaticInstance;
		il2cpp_codegen_runtime_class_init_inline(JSONNull_tEE66558FCE6029B3F1414C062F5E38E0530BD69A_il2cpp_TypeInfo_var);
		JSONNull_tEE66558FCE6029B3F1414C062F5E38E0530BD69A* L_1 = ((JSONNull_tEE66558FCE6029B3F1414C062F5E38E0530BD69A_StaticFields*)il2cpp_codegen_static_fields_for(JSONNull_tEE66558FCE6029B3F1414C062F5E38E0530BD69A_il2cpp_TypeInfo_var))->___m_StaticInstance_4;
		return L_1;
	}

IL_000d:
	{
		// return new JSONNull();
		JSONNull_tEE66558FCE6029B3F1414C062F5E38E0530BD69A* L_2 = (JSONNull_tEE66558FCE6029B3F1414C062F5E38E0530BD69A*)il2cpp_codegen_object_new(JSONNull_tEE66558FCE6029B3F1414C062F5E38E0530BD69A_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		JSONNull__ctor_mC77B5B6A93E1F03687401D5CCE7C748443A4FB3E(L_2, NULL);
		return L_2;
	}
}
// System.Void SimpleJSON.JSONNull::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JSONNull__ctor_mC77B5B6A93E1F03687401D5CCE7C748443A4FB3E (JSONNull_tEE66558FCE6029B3F1414C062F5E38E0530BD69A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JSONNode_tD29E53D2E1C8F91FF9FEA40F4F3A540857651D3B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private JSONNull() { }
		il2cpp_codegen_runtime_class_init_inline(JSONNode_tD29E53D2E1C8F91FF9FEA40F4F3A540857651D3B_il2cpp_TypeInfo_var);
		JSONNode__ctor_m4019E01BCFB43E3848591C3E8C97534BA8BC6C49(__this, NULL);
		// private JSONNull() { }
		return;
	}
}
// SimpleJSON.JSONNodeType SimpleJSON.JSONNull::get_Tag()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t JSONNull_get_Tag_m871C91F2B95F2CF2F86F5229D3B8BA0383B59EF2 (JSONNull_tEE66558FCE6029B3F1414C062F5E38E0530BD69A* __this, const RuntimeMethod* method) 
{
	{
		// public override JSONNodeType Tag { get { return JSONNodeType.NullValue; } }
		return (int32_t)(5);
	}
}
// System.Boolean SimpleJSON.JSONNull::get_IsNull()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool JSONNull_get_IsNull_m67D36C6009E7A91B05E7F7AE3F03A67301955A00 (JSONNull_tEE66558FCE6029B3F1414C062F5E38E0530BD69A* __this, const RuntimeMethod* method) 
{
	{
		// public override bool IsNull { get { return true; } }
		return (bool)1;
	}
}
// SimpleJSON.JSONNode/Enumerator SimpleJSON.JSONNull::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_tA1F999D27FB3CE7FB0AC8D9BD4084CBA9E687C1F JSONNull_GetEnumerator_mDBFB570828E4DF87E5AABCB490525189F6C1CB21 (JSONNull_tEE66558FCE6029B3F1414C062F5E38E0530BD69A* __this, const RuntimeMethod* method) 
{
	Enumerator_tA1F999D27FB3CE7FB0AC8D9BD4084CBA9E687C1F V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// public override Enumerator GetEnumerator() { return new Enumerator(); }
		il2cpp_codegen_initobj((&V_0), sizeof(Enumerator_tA1F999D27FB3CE7FB0AC8D9BD4084CBA9E687C1F));
		Enumerator_tA1F999D27FB3CE7FB0AC8D9BD4084CBA9E687C1F L_0 = V_0;
		return L_0;
	}
}
// System.String SimpleJSON.JSONNull::get_Value()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* JSONNull_get_Value_m8F606318130736F138511BFACC50F56D5F844505 (JSONNull_tEE66558FCE6029B3F1414C062F5E38E0530BD69A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5BEFD8CC60A79699B5BB00E37BAC5B62D371E174);
		s_Il2CppMethodInitialized = true;
	}
	{
		// get { return "null"; }
		return _stringLiteral5BEFD8CC60A79699B5BB00E37BAC5B62D371E174;
	}
}
// System.Void SimpleJSON.JSONNull::set_Value(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JSONNull_set_Value_m37909778D759C1431C7A6710EDDA724FA094192B (JSONNull_tEE66558FCE6029B3F1414C062F5E38E0530BD69A* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		// set { }
		return;
	}
}
// System.Boolean SimpleJSON.JSONNull::get_AsBool()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool JSONNull_get_AsBool_m46A67F6356F1FC82A6FB039F9A71447EBACDBAB4 (JSONNull_tEE66558FCE6029B3F1414C062F5E38E0530BD69A* __this, const RuntimeMethod* method) 
{
	{
		// get { return false; }
		return (bool)0;
	}
}
// System.Void SimpleJSON.JSONNull::set_AsBool(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JSONNull_set_AsBool_mFF96712EA12ABBEAAB8A1BB11B38C589053CB52C (JSONNull_tEE66558FCE6029B3F1414C062F5E38E0530BD69A* __this, bool ___value0, const RuntimeMethod* method) 
{
	{
		// set { }
		return;
	}
}
// SimpleJSON.JSONNode SimpleJSON.JSONNull::Clone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR JSONNode_tD29E53D2E1C8F91FF9FEA40F4F3A540857651D3B* JSONNull_Clone_mF7FBFB864B3B9187A7DBA26ED7083033BB539492 (JSONNull_tEE66558FCE6029B3F1414C062F5E38E0530BD69A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JSONNull_tEE66558FCE6029B3F1414C062F5E38E0530BD69A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return CreateOrGet();
		il2cpp_codegen_runtime_class_init_inline(JSONNull_tEE66558FCE6029B3F1414C062F5E38E0530BD69A_il2cpp_TypeInfo_var);
		JSONNull_tEE66558FCE6029B3F1414C062F5E38E0530BD69A* L_0;
		L_0 = JSONNull_CreateOrGet_m8A46E28FE2DA1E537F51FA071E580ABC21DB5701(NULL);
		return L_0;
	}
}
// System.Boolean SimpleJSON.JSONNull::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool JSONNull_Equals_m81AD8E34EEA76B0164D534C2255021FB02118FFA (JSONNull_tEE66558FCE6029B3F1414C062F5E38E0530BD69A* __this, RuntimeObject* ___obj0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JSONNull_tEE66558FCE6029B3F1414C062F5E38E0530BD69A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (object.ReferenceEquals(this, obj))
		RuntimeObject* L_0 = ___obj0;
		if ((!(((RuntimeObject*)(JSONNull_tEE66558FCE6029B3F1414C062F5E38E0530BD69A*)__this) == ((RuntimeObject*)(RuntimeObject*)L_0))))
		{
			goto IL_0006;
		}
	}
	{
		// return true;
		return (bool)1;
	}

IL_0006:
	{
		// return (obj is JSONNull);
		RuntimeObject* L_1 = ___obj0;
		return (bool)((!(((RuntimeObject*)(JSONNull_tEE66558FCE6029B3F1414C062F5E38E0530BD69A*)((JSONNull_tEE66558FCE6029B3F1414C062F5E38E0530BD69A*)IsInstClass((RuntimeObject*)L_1, JSONNull_tEE66558FCE6029B3F1414C062F5E38E0530BD69A_il2cpp_TypeInfo_var))) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
	}
}
// System.Int32 SimpleJSON.JSONNull::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t JSONNull_GetHashCode_m9F2AC348499A2DC7FB0D796BE8C4A48A3B81AF91 (JSONNull_tEE66558FCE6029B3F1414C062F5E38E0530BD69A* __this, const RuntimeMethod* method) 
{
	{
		// return 0;
		return 0;
	}
}
// System.Void SimpleJSON.JSONNull::WriteToStringBuilder(System.Text.StringBuilder,System.Int32,System.Int32,SimpleJSON.JSONTextMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JSONNull_WriteToStringBuilder_m169BD5443EFD66BE4A69A25075AF5DE1ED836B22 (JSONNull_tEE66558FCE6029B3F1414C062F5E38E0530BD69A* __this, StringBuilder_t* ___aSB0, int32_t ___aIndent1, int32_t ___aIndentInc2, int32_t ___aMode3, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5BEFD8CC60A79699B5BB00E37BAC5B62D371E174);
		s_Il2CppMethodInitialized = true;
	}
	{
		// aSB.Append("null");
		StringBuilder_t* L_0 = ___aSB0;
		NullCheck(L_0);
		StringBuilder_t* L_1;
		L_1 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_0, _stringLiteral5BEFD8CC60A79699B5BB00E37BAC5B62D371E174, NULL);
		// }
		return;
	}
}
// System.Void SimpleJSON.JSONNull::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JSONNull__cctor_m5CABC1A8F3D4AE5B46113854565DA35A40357450 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JSONNull_tEE66558FCE6029B3F1414C062F5E38E0530BD69A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// static JSONNull m_StaticInstance = new JSONNull();
		JSONNull_tEE66558FCE6029B3F1414C062F5E38E0530BD69A* L_0 = (JSONNull_tEE66558FCE6029B3F1414C062F5E38E0530BD69A*)il2cpp_codegen_object_new(JSONNull_tEE66558FCE6029B3F1414C062F5E38E0530BD69A_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		JSONNull__ctor_mC77B5B6A93E1F03687401D5CCE7C748443A4FB3E(L_0, NULL);
		((JSONNull_tEE66558FCE6029B3F1414C062F5E38E0530BD69A_StaticFields*)il2cpp_codegen_static_fields_for(JSONNull_tEE66558FCE6029B3F1414C062F5E38E0530BD69A_il2cpp_TypeInfo_var))->___m_StaticInstance_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((JSONNull_tEE66558FCE6029B3F1414C062F5E38E0530BD69A_StaticFields*)il2cpp_codegen_static_fields_for(JSONNull_tEE66558FCE6029B3F1414C062F5E38E0530BD69A_il2cpp_TypeInfo_var))->___m_StaticInstance_4), (void*)L_0);
		// public static bool reuseSameInstance = true;
		((JSONNull_tEE66558FCE6029B3F1414C062F5E38E0530BD69A_StaticFields*)il2cpp_codegen_static_fields_for(JSONNull_tEE66558FCE6029B3F1414C062F5E38E0530BD69A_il2cpp_TypeInfo_var))->___reuseSameInstance_5 = (bool)1;
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
// SimpleJSON.JSONNodeType SimpleJSON.JSONLazyCreator::get_Tag()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t JSONLazyCreator_get_Tag_m65F47B4632D13E8983719944F71A19535F88170E (JSONLazyCreator_t67A874365EE690A6837C36B8C9214BCBD04C1C00* __this, const RuntimeMethod* method) 
{
	{
		// public override JSONNodeType Tag { get { return JSONNodeType.None; } }
		return (int32_t)(7);
	}
}
// SimpleJSON.JSONNode/Enumerator SimpleJSON.JSONLazyCreator::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_tA1F999D27FB3CE7FB0AC8D9BD4084CBA9E687C1F JSONLazyCreator_GetEnumerator_mB392D52957F97A49962398527F8CEE01867C0C5C (JSONLazyCreator_t67A874365EE690A6837C36B8C9214BCBD04C1C00* __this, const RuntimeMethod* method) 
{
	Enumerator_tA1F999D27FB3CE7FB0AC8D9BD4084CBA9E687C1F V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// public override Enumerator GetEnumerator() { return new Enumerator(); }
		il2cpp_codegen_initobj((&V_0), sizeof(Enumerator_tA1F999D27FB3CE7FB0AC8D9BD4084CBA9E687C1F));
		Enumerator_tA1F999D27FB3CE7FB0AC8D9BD4084CBA9E687C1F L_0 = V_0;
		return L_0;
	}
}
// System.Void SimpleJSON.JSONLazyCreator::.ctor(SimpleJSON.JSONNode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JSONLazyCreator__ctor_mF05058E0DB09E0C896205345A7E6C44B6DE814D1 (JSONLazyCreator_t67A874365EE690A6837C36B8C9214BCBD04C1C00* __this, JSONNode_tD29E53D2E1C8F91FF9FEA40F4F3A540857651D3B* ___aNode0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JSONNode_tD29E53D2E1C8F91FF9FEA40F4F3A540857651D3B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public JSONLazyCreator(JSONNode aNode)
		il2cpp_codegen_runtime_class_init_inline(JSONNode_tD29E53D2E1C8F91FF9FEA40F4F3A540857651D3B_il2cpp_TypeInfo_var);
		JSONNode__ctor_m4019E01BCFB43E3848591C3E8C97534BA8BC6C49(__this, NULL);
		// m_Node = aNode;
		JSONNode_tD29E53D2E1C8F91FF9FEA40F4F3A540857651D3B* L_0 = ___aNode0;
		__this->___m_Node_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Node_4), (void*)L_0);
		// m_Key = null;
		__this->___m_Key_5 = (String_t*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Key_5), (void*)(String_t*)NULL);
		// }
		return;
	}
}
// System.Void SimpleJSON.JSONLazyCreator::.ctor(SimpleJSON.JSONNode,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JSONLazyCreator__ctor_mF29014985A3ABE849B34039EAA68BF363508438A (JSONLazyCreator_t67A874365EE690A6837C36B8C9214BCBD04C1C00* __this, JSONNode_tD29E53D2E1C8F91FF9FEA40F4F3A540857651D3B* ___aNode0, String_t* ___aKey1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JSONNode_tD29E53D2E1C8F91FF9FEA40F4F3A540857651D3B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public JSONLazyCreator(JSONNode aNode, string aKey)
		il2cpp_codegen_runtime_class_init_inline(JSONNode_tD29E53D2E1C8F91FF9FEA40F4F3A540857651D3B_il2cpp_TypeInfo_var);
		JSONNode__ctor_m4019E01BCFB43E3848591C3E8C97534BA8BC6C49(__this, NULL);
		// m_Node = aNode;
		JSONNode_tD29E53D2E1C8F91FF9FEA40F4F3A540857651D3B* L_0 = ___aNode0;
		__this->___m_Node_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Node_4), (void*)L_0);
		// m_Key = aKey;
		String_t* L_1 = ___aKey1;
		__this->___m_Key_5 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Key_5), (void*)L_1);
		// }
		return;
	}
}
// SimpleJSON.JSONNode SimpleJSON.JSONLazyCreator::get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR JSONNode_tD29E53D2E1C8F91FF9FEA40F4F3A540857651D3B* JSONLazyCreator_get_Item_m7A1B287A320FA0562C0B3699CEED790506764A69 (JSONLazyCreator_t67A874365EE690A6837C36B8C9214BCBD04C1C00* __this, int32_t ___aIndex0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JSONLazyCreator_t67A874365EE690A6837C36B8C9214BCBD04C1C00_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// get { return new JSONLazyCreator(this); }
		JSONLazyCreator_t67A874365EE690A6837C36B8C9214BCBD04C1C00* L_0 = (JSONLazyCreator_t67A874365EE690A6837C36B8C9214BCBD04C1C00*)il2cpp_codegen_object_new(JSONLazyCreator_t67A874365EE690A6837C36B8C9214BCBD04C1C00_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		JSONLazyCreator__ctor_mF05058E0DB09E0C896205345A7E6C44B6DE814D1(L_0, __this, NULL);
		return L_0;
	}
}
// System.Void SimpleJSON.JSONLazyCreator::set_Item(System.Int32,SimpleJSON.JSONNode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JSONLazyCreator_set_Item_mF630015DF5DBB739C9A4ACFDF5056281C8BDF6FB (JSONLazyCreator_t67A874365EE690A6837C36B8C9214BCBD04C1C00* __this, int32_t ___aIndex0, JSONNode_tD29E53D2E1C8F91FF9FEA40F4F3A540857651D3B* ___value1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JSONArray_tDB47C85E2DDB2CB4A972E4C0685D82E00490CB25_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JSONLazyCreator_Set_TisJSONArray_tDB47C85E2DDB2CB4A972E4C0685D82E00490CB25_m7D3A237E093665EDAA099018EAD7FCF9FB769A9B_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// set { Set(new JSONArray()).Add(value); }
		JSONArray_tDB47C85E2DDB2CB4A972E4C0685D82E00490CB25* L_0 = (JSONArray_tDB47C85E2DDB2CB4A972E4C0685D82E00490CB25*)il2cpp_codegen_object_new(JSONArray_tDB47C85E2DDB2CB4A972E4C0685D82E00490CB25_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		JSONArray__ctor_m19BBACE404D8C75AC41AC9CB4702C0943401D071(L_0, NULL);
		JSONArray_tDB47C85E2DDB2CB4A972E4C0685D82E00490CB25* L_1;
		L_1 = JSONLazyCreator_Set_TisJSONArray_tDB47C85E2DDB2CB4A972E4C0685D82E00490CB25_m7D3A237E093665EDAA099018EAD7FCF9FB769A9B(__this, L_0, JSONLazyCreator_Set_TisJSONArray_tDB47C85E2DDB2CB4A972E4C0685D82E00490CB25_m7D3A237E093665EDAA099018EAD7FCF9FB769A9B_RuntimeMethod_var);
		JSONNode_tD29E53D2E1C8F91FF9FEA40F4F3A540857651D3B* L_2 = ___value1;
		NullCheck(L_1);
		VirtualActionInvoker1< JSONNode_tD29E53D2E1C8F91FF9FEA40F4F3A540857651D3B* >::Invoke(21 /* System.Void SimpleJSON.JSONNode::Add(SimpleJSON.JSONNode) */, L_1, L_2);
		// set { Set(new JSONArray()).Add(value); }
		return;
	}
}
// SimpleJSON.JSONNode SimpleJSON.JSONLazyCreator::get_Item(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR JSONNode_tD29E53D2E1C8F91FF9FEA40F4F3A540857651D3B* JSONLazyCreator_get_Item_mD35D1D308100EDAECB6D3201DB71516B7372A59D (JSONLazyCreator_t67A874365EE690A6837C36B8C9214BCBD04C1C00* __this, String_t* ___aKey0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JSONLazyCreator_t67A874365EE690A6837C36B8C9214BCBD04C1C00_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// get { return new JSONLazyCreator(this, aKey); }
		String_t* L_0 = ___aKey0;
		JSONLazyCreator_t67A874365EE690A6837C36B8C9214BCBD04C1C00* L_1 = (JSONLazyCreator_t67A874365EE690A6837C36B8C9214BCBD04C1C00*)il2cpp_codegen_object_new(JSONLazyCreator_t67A874365EE690A6837C36B8C9214BCBD04C1C00_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		JSONLazyCreator__ctor_mF29014985A3ABE849B34039EAA68BF363508438A(L_1, __this, L_0, NULL);
		return L_1;
	}
}
// System.Void SimpleJSON.JSONLazyCreator::set_Item(System.String,SimpleJSON.JSONNode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JSONLazyCreator_set_Item_m98BF666FD1B494F1D6B7F8B9BF9E91B23EB5A13A (JSONLazyCreator_t67A874365EE690A6837C36B8C9214BCBD04C1C00* __this, String_t* ___aKey0, JSONNode_tD29E53D2E1C8F91FF9FEA40F4F3A540857651D3B* ___value1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JSONLazyCreator_Set_TisJSONObject_tEA00D19860E34865B3D16312DD382C0901CAB654_mF8CEE128BB1DCFC3C42A7158743827420DCDFB91_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JSONObject_tEA00D19860E34865B3D16312DD382C0901CAB654_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// set { Set(new JSONObject()).Add(aKey, value); }
		JSONObject_tEA00D19860E34865B3D16312DD382C0901CAB654* L_0 = (JSONObject_tEA00D19860E34865B3D16312DD382C0901CAB654*)il2cpp_codegen_object_new(JSONObject_tEA00D19860E34865B3D16312DD382C0901CAB654_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		JSONObject__ctor_m8AA5877BC05D1BFF9F50D151C0ECF1E3F5C6BE2F(L_0, NULL);
		JSONObject_tEA00D19860E34865B3D16312DD382C0901CAB654* L_1;
		L_1 = JSONLazyCreator_Set_TisJSONObject_tEA00D19860E34865B3D16312DD382C0901CAB654_mF8CEE128BB1DCFC3C42A7158743827420DCDFB91(__this, L_0, JSONLazyCreator_Set_TisJSONObject_tEA00D19860E34865B3D16312DD382C0901CAB654_mF8CEE128BB1DCFC3C42A7158743827420DCDFB91_RuntimeMethod_var);
		String_t* L_2 = ___aKey0;
		JSONNode_tD29E53D2E1C8F91FF9FEA40F4F3A540857651D3B* L_3 = ___value1;
		NullCheck(L_1);
		VirtualActionInvoker2< String_t*, JSONNode_tD29E53D2E1C8F91FF9FEA40F4F3A540857651D3B* >::Invoke(20 /* System.Void SimpleJSON.JSONNode::Add(System.String,SimpleJSON.JSONNode) */, L_1, L_2, L_3);
		// set { Set(new JSONObject()).Add(aKey, value); }
		return;
	}
}
// System.Void SimpleJSON.JSONLazyCreator::Add(SimpleJSON.JSONNode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JSONLazyCreator_Add_mA63214F55B284EDA904AD00727100FB09CB871F5 (JSONLazyCreator_t67A874365EE690A6837C36B8C9214BCBD04C1C00* __this, JSONNode_tD29E53D2E1C8F91FF9FEA40F4F3A540857651D3B* ___aItem0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JSONArray_tDB47C85E2DDB2CB4A972E4C0685D82E00490CB25_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JSONLazyCreator_Set_TisJSONArray_tDB47C85E2DDB2CB4A972E4C0685D82E00490CB25_m7D3A237E093665EDAA099018EAD7FCF9FB769A9B_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Set(new JSONArray()).Add(aItem);
		JSONArray_tDB47C85E2DDB2CB4A972E4C0685D82E00490CB25* L_0 = (JSONArray_tDB47C85E2DDB2CB4A972E4C0685D82E00490CB25*)il2cpp_codegen_object_new(JSONArray_tDB47C85E2DDB2CB4A972E4C0685D82E00490CB25_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		JSONArray__ctor_m19BBACE404D8C75AC41AC9CB4702C0943401D071(L_0, NULL);
		JSONArray_tDB47C85E2DDB2CB4A972E4C0685D82E00490CB25* L_1;
		L_1 = JSONLazyCreator_Set_TisJSONArray_tDB47C85E2DDB2CB4A972E4C0685D82E00490CB25_m7D3A237E093665EDAA099018EAD7FCF9FB769A9B(__this, L_0, JSONLazyCreator_Set_TisJSONArray_tDB47C85E2DDB2CB4A972E4C0685D82E00490CB25_m7D3A237E093665EDAA099018EAD7FCF9FB769A9B_RuntimeMethod_var);
		JSONNode_tD29E53D2E1C8F91FF9FEA40F4F3A540857651D3B* L_2 = ___aItem0;
		NullCheck(L_1);
		VirtualActionInvoker1< JSONNode_tD29E53D2E1C8F91FF9FEA40F4F3A540857651D3B* >::Invoke(21 /* System.Void SimpleJSON.JSONNode::Add(SimpleJSON.JSONNode) */, L_1, L_2);
		// }
		return;
	}
}
// System.Void SimpleJSON.JSONLazyCreator::Add(System.String,SimpleJSON.JSONNode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JSONLazyCreator_Add_m67D257C5A289AE055195B9C43A14462D663D07C9 (JSONLazyCreator_t67A874365EE690A6837C36B8C9214BCBD04C1C00* __this, String_t* ___aKey0, JSONNode_tD29E53D2E1C8F91FF9FEA40F4F3A540857651D3B* ___aItem1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JSONLazyCreator_Set_TisJSONObject_tEA00D19860E34865B3D16312DD382C0901CAB654_mF8CEE128BB1DCFC3C42A7158743827420DCDFB91_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JSONObject_tEA00D19860E34865B3D16312DD382C0901CAB654_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Set(new JSONObject()).Add(aKey, aItem);
		JSONObject_tEA00D19860E34865B3D16312DD382C0901CAB654* L_0 = (JSONObject_tEA00D19860E34865B3D16312DD382C0901CAB654*)il2cpp_codegen_object_new(JSONObject_tEA00D19860E34865B3D16312DD382C0901CAB654_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		JSONObject__ctor_m8AA5877BC05D1BFF9F50D151C0ECF1E3F5C6BE2F(L_0, NULL);
		JSONObject_tEA00D19860E34865B3D16312DD382C0901CAB654* L_1;
		L_1 = JSONLazyCreator_Set_TisJSONObject_tEA00D19860E34865B3D16312DD382C0901CAB654_mF8CEE128BB1DCFC3C42A7158743827420DCDFB91(__this, L_0, JSONLazyCreator_Set_TisJSONObject_tEA00D19860E34865B3D16312DD382C0901CAB654_mF8CEE128BB1DCFC3C42A7158743827420DCDFB91_RuntimeMethod_var);
		String_t* L_2 = ___aKey0;
		JSONNode_tD29E53D2E1C8F91FF9FEA40F4F3A540857651D3B* L_3 = ___aItem1;
		NullCheck(L_1);
		VirtualActionInvoker2< String_t*, JSONNode_tD29E53D2E1C8F91FF9FEA40F4F3A540857651D3B* >::Invoke(20 /* System.Void SimpleJSON.JSONNode::Add(System.String,SimpleJSON.JSONNode) */, L_1, L_2, L_3);
		// }
		return;
	}
}
// System.Boolean SimpleJSON.JSONLazyCreator::op_Equality(SimpleJSON.JSONLazyCreator,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool JSONLazyCreator_op_Equality_m720AC8675F0E1B18C334B576B9125906D1DB672B (JSONLazyCreator_t67A874365EE690A6837C36B8C9214BCBD04C1C00* ___a0, RuntimeObject* ___b1, const RuntimeMethod* method) 
{
	{
		// if (b == null)
		RuntimeObject* L_0 = ___b1;
		if (L_0)
		{
			goto IL_0005;
		}
	}
	{
		// return true;
		return (bool)1;
	}

IL_0005:
	{
		// return System.Object.ReferenceEquals(a, b);
		JSONLazyCreator_t67A874365EE690A6837C36B8C9214BCBD04C1C00* L_1 = ___a0;
		RuntimeObject* L_2 = ___b1;
		return (bool)((((RuntimeObject*)(JSONLazyCreator_t67A874365EE690A6837C36B8C9214BCBD04C1C00*)L_1) == ((RuntimeObject*)(RuntimeObject*)L_2))? 1 : 0);
	}
}
// System.Boolean SimpleJSON.JSONLazyCreator::op_Inequality(SimpleJSON.JSONLazyCreator,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool JSONLazyCreator_op_Inequality_m118124346F63522507502C08BB931E582A7654FB (JSONLazyCreator_t67A874365EE690A6837C36B8C9214BCBD04C1C00* ___a0, RuntimeObject* ___b1, const RuntimeMethod* method) 
{
	{
		// return !(a == b);
		JSONLazyCreator_t67A874365EE690A6837C36B8C9214BCBD04C1C00* L_0 = ___a0;
		RuntimeObject* L_1 = ___b1;
		bool L_2;
		L_2 = JSONLazyCreator_op_Equality_m720AC8675F0E1B18C334B576B9125906D1DB672B(L_0, L_1, NULL);
		return (bool)((((int32_t)L_2) == ((int32_t)0))? 1 : 0);
	}
}
// System.Boolean SimpleJSON.JSONLazyCreator::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool JSONLazyCreator_Equals_mF181668BE402D7D482CE599232F97DE92FDF2179 (JSONLazyCreator_t67A874365EE690A6837C36B8C9214BCBD04C1C00* __this, RuntimeObject* ___obj0, const RuntimeMethod* method) 
{
	{
		// if (obj == null)
		RuntimeObject* L_0 = ___obj0;
		if (L_0)
		{
			goto IL_0005;
		}
	}
	{
		// return true;
		return (bool)1;
	}

IL_0005:
	{
		// return System.Object.ReferenceEquals(this, obj);
		RuntimeObject* L_1 = ___obj0;
		return (bool)((((RuntimeObject*)(JSONLazyCreator_t67A874365EE690A6837C36B8C9214BCBD04C1C00*)__this) == ((RuntimeObject*)(RuntimeObject*)L_1))? 1 : 0);
	}
}
// System.Int32 SimpleJSON.JSONLazyCreator::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t JSONLazyCreator_GetHashCode_mC7D0B2DBC0106B27335742F52D53DD9E38816745 (JSONLazyCreator_t67A874365EE690A6837C36B8C9214BCBD04C1C00* __this, const RuntimeMethod* method) 
{
	{
		// return 0;
		return 0;
	}
}
// System.Int32 SimpleJSON.JSONLazyCreator::get_AsInt()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t JSONLazyCreator_get_AsInt_mB1EA50F2A634380AE559768D3249B11F077CD6CD (JSONLazyCreator_t67A874365EE690A6837C36B8C9214BCBD04C1C00* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JSONLazyCreator_Set_TisJSONNumber_tE274A557833A3AE0CDC6C7E563CEAD2A38355688_mB38332B5E61CF823BFA62D3DC8FC75C398775866_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JSONNumber_tE274A557833A3AE0CDC6C7E563CEAD2A38355688_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// get { Set(new JSONNumber(0)); return 0; }
		JSONNumber_tE274A557833A3AE0CDC6C7E563CEAD2A38355688* L_0 = (JSONNumber_tE274A557833A3AE0CDC6C7E563CEAD2A38355688*)il2cpp_codegen_object_new(JSONNumber_tE274A557833A3AE0CDC6C7E563CEAD2A38355688_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		JSONNumber__ctor_mCBCEBE5C94CA62FF6A45B6F37850DBCE5D2648D8(L_0, (0.0), NULL);
		JSONNumber_tE274A557833A3AE0CDC6C7E563CEAD2A38355688* L_1;
		L_1 = JSONLazyCreator_Set_TisJSONNumber_tE274A557833A3AE0CDC6C7E563CEAD2A38355688_mB38332B5E61CF823BFA62D3DC8FC75C398775866(__this, L_0, JSONLazyCreator_Set_TisJSONNumber_tE274A557833A3AE0CDC6C7E563CEAD2A38355688_mB38332B5E61CF823BFA62D3DC8FC75C398775866_RuntimeMethod_var);
		// get { Set(new JSONNumber(0)); return 0; }
		return 0;
	}
}
// System.Void SimpleJSON.JSONLazyCreator::set_AsInt(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JSONLazyCreator_set_AsInt_m72A5C1CCE4EAE8A8C6ED3F8DE486976C01205AA5 (JSONLazyCreator_t67A874365EE690A6837C36B8C9214BCBD04C1C00* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JSONLazyCreator_Set_TisJSONNumber_tE274A557833A3AE0CDC6C7E563CEAD2A38355688_mB38332B5E61CF823BFA62D3DC8FC75C398775866_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JSONNumber_tE274A557833A3AE0CDC6C7E563CEAD2A38355688_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// set { Set(new JSONNumber(value)); }
		int32_t L_0 = ___value0;
		JSONNumber_tE274A557833A3AE0CDC6C7E563CEAD2A38355688* L_1 = (JSONNumber_tE274A557833A3AE0CDC6C7E563CEAD2A38355688*)il2cpp_codegen_object_new(JSONNumber_tE274A557833A3AE0CDC6C7E563CEAD2A38355688_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		JSONNumber__ctor_mCBCEBE5C94CA62FF6A45B6F37850DBCE5D2648D8(L_1, ((double)L_0), NULL);
		JSONNumber_tE274A557833A3AE0CDC6C7E563CEAD2A38355688* L_2;
		L_2 = JSONLazyCreator_Set_TisJSONNumber_tE274A557833A3AE0CDC6C7E563CEAD2A38355688_mB38332B5E61CF823BFA62D3DC8FC75C398775866(__this, L_1, JSONLazyCreator_Set_TisJSONNumber_tE274A557833A3AE0CDC6C7E563CEAD2A38355688_mB38332B5E61CF823BFA62D3DC8FC75C398775866_RuntimeMethod_var);
		// set { Set(new JSONNumber(value)); }
		return;
	}
}
// System.Single SimpleJSON.JSONLazyCreator::get_AsFloat()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float JSONLazyCreator_get_AsFloat_m326D1FE9201655FB0502951060345C42160383AF (JSONLazyCreator_t67A874365EE690A6837C36B8C9214BCBD04C1C00* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JSONLazyCreator_Set_TisJSONNumber_tE274A557833A3AE0CDC6C7E563CEAD2A38355688_mB38332B5E61CF823BFA62D3DC8FC75C398775866_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JSONNumber_tE274A557833A3AE0CDC6C7E563CEAD2A38355688_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// get { Set(new JSONNumber(0.0f)); return 0.0f; }
		JSONNumber_tE274A557833A3AE0CDC6C7E563CEAD2A38355688* L_0 = (JSONNumber_tE274A557833A3AE0CDC6C7E563CEAD2A38355688*)il2cpp_codegen_object_new(JSONNumber_tE274A557833A3AE0CDC6C7E563CEAD2A38355688_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		JSONNumber__ctor_mCBCEBE5C94CA62FF6A45B6F37850DBCE5D2648D8(L_0, (0.0), NULL);
		JSONNumber_tE274A557833A3AE0CDC6C7E563CEAD2A38355688* L_1;
		L_1 = JSONLazyCreator_Set_TisJSONNumber_tE274A557833A3AE0CDC6C7E563CEAD2A38355688_mB38332B5E61CF823BFA62D3DC8FC75C398775866(__this, L_0, JSONLazyCreator_Set_TisJSONNumber_tE274A557833A3AE0CDC6C7E563CEAD2A38355688_mB38332B5E61CF823BFA62D3DC8FC75C398775866_RuntimeMethod_var);
		// get { Set(new JSONNumber(0.0f)); return 0.0f; }
		return (0.0f);
	}
}
// System.Void SimpleJSON.JSONLazyCreator::set_AsFloat(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JSONLazyCreator_set_AsFloat_m6A44D8508B1BBCD0FB25787F74986323F46F7752 (JSONLazyCreator_t67A874365EE690A6837C36B8C9214BCBD04C1C00* __this, float ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JSONLazyCreator_Set_TisJSONNumber_tE274A557833A3AE0CDC6C7E563CEAD2A38355688_mB38332B5E61CF823BFA62D3DC8FC75C398775866_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JSONNumber_tE274A557833A3AE0CDC6C7E563CEAD2A38355688_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// set { Set(new JSONNumber(value)); }
		float L_0 = ___value0;
		JSONNumber_tE274A557833A3AE0CDC6C7E563CEAD2A38355688* L_1 = (JSONNumber_tE274A557833A3AE0CDC6C7E563CEAD2A38355688*)il2cpp_codegen_object_new(JSONNumber_tE274A557833A3AE0CDC6C7E563CEAD2A38355688_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		JSONNumber__ctor_mCBCEBE5C94CA62FF6A45B6F37850DBCE5D2648D8(L_1, ((double)L_0), NULL);
		JSONNumber_tE274A557833A3AE0CDC6C7E563CEAD2A38355688* L_2;
		L_2 = JSONLazyCreator_Set_TisJSONNumber_tE274A557833A3AE0CDC6C7E563CEAD2A38355688_mB38332B5E61CF823BFA62D3DC8FC75C398775866(__this, L_1, JSONLazyCreator_Set_TisJSONNumber_tE274A557833A3AE0CDC6C7E563CEAD2A38355688_mB38332B5E61CF823BFA62D3DC8FC75C398775866_RuntimeMethod_var);
		// set { Set(new JSONNumber(value)); }
		return;
	}
}
// System.Double SimpleJSON.JSONLazyCreator::get_AsDouble()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double JSONLazyCreator_get_AsDouble_m82DE3D757C820E25F0A37F16079D62D371051029 (JSONLazyCreator_t67A874365EE690A6837C36B8C9214BCBD04C1C00* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JSONLazyCreator_Set_TisJSONNumber_tE274A557833A3AE0CDC6C7E563CEAD2A38355688_mB38332B5E61CF823BFA62D3DC8FC75C398775866_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JSONNumber_tE274A557833A3AE0CDC6C7E563CEAD2A38355688_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// get { Set(new JSONNumber(0.0)); return 0.0; }
		JSONNumber_tE274A557833A3AE0CDC6C7E563CEAD2A38355688* L_0 = (JSONNumber_tE274A557833A3AE0CDC6C7E563CEAD2A38355688*)il2cpp_codegen_object_new(JSONNumber_tE274A557833A3AE0CDC6C7E563CEAD2A38355688_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		JSONNumber__ctor_mCBCEBE5C94CA62FF6A45B6F37850DBCE5D2648D8(L_0, (0.0), NULL);
		JSONNumber_tE274A557833A3AE0CDC6C7E563CEAD2A38355688* L_1;
		L_1 = JSONLazyCreator_Set_TisJSONNumber_tE274A557833A3AE0CDC6C7E563CEAD2A38355688_mB38332B5E61CF823BFA62D3DC8FC75C398775866(__this, L_0, JSONLazyCreator_Set_TisJSONNumber_tE274A557833A3AE0CDC6C7E563CEAD2A38355688_mB38332B5E61CF823BFA62D3DC8FC75C398775866_RuntimeMethod_var);
		// get { Set(new JSONNumber(0.0)); return 0.0; }
		return (0.0);
	}
}
// System.Void SimpleJSON.JSONLazyCreator::set_AsDouble(System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JSONLazyCreator_set_AsDouble_mAE2BCDE313E2AA00E07A6285E4F42ED03F3632A1 (JSONLazyCreator_t67A874365EE690A6837C36B8C9214BCBD04C1C00* __this, double ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JSONLazyCreator_Set_TisJSONNumber_tE274A557833A3AE0CDC6C7E563CEAD2A38355688_mB38332B5E61CF823BFA62D3DC8FC75C398775866_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JSONNumber_tE274A557833A3AE0CDC6C7E563CEAD2A38355688_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// set { Set(new JSONNumber(value)); }
		double L_0 = ___value0;
		JSONNumber_tE274A557833A3AE0CDC6C7E563CEAD2A38355688* L_1 = (JSONNumber_tE274A557833A3AE0CDC6C7E563CEAD2A38355688*)il2cpp_codegen_object_new(JSONNumber_tE274A557833A3AE0CDC6C7E563CEAD2A38355688_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		JSONNumber__ctor_mCBCEBE5C94CA62FF6A45B6F37850DBCE5D2648D8(L_1, L_0, NULL);
		JSONNumber_tE274A557833A3AE0CDC6C7E563CEAD2A38355688* L_2;
		L_2 = JSONLazyCreator_Set_TisJSONNumber_tE274A557833A3AE0CDC6C7E563CEAD2A38355688_mB38332B5E61CF823BFA62D3DC8FC75C398775866(__this, L_1, JSONLazyCreator_Set_TisJSONNumber_tE274A557833A3AE0CDC6C7E563CEAD2A38355688_mB38332B5E61CF823BFA62D3DC8FC75C398775866_RuntimeMethod_var);
		// set { Set(new JSONNumber(value)); }
		return;
	}
}
// System.Int64 SimpleJSON.JSONLazyCreator::get_AsLong()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t JSONLazyCreator_get_AsLong_mC03DDE434E95D2346BE7A7CCD13DE87E86811484 (JSONLazyCreator_t67A874365EE690A6837C36B8C9214BCBD04C1C00* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JSONLazyCreator_Set_TisJSONNumber_tE274A557833A3AE0CDC6C7E563CEAD2A38355688_mB38332B5E61CF823BFA62D3DC8FC75C398775866_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JSONLazyCreator_Set_TisJSONString_t1A1090FC5863846C80D0BDEF4E63FE23D7AC437D_m99A1733E07636B9540AF6CA596217D6F8480F96A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JSONNode_tD29E53D2E1C8F91FF9FEA40F4F3A540857651D3B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JSONNumber_tE274A557833A3AE0CDC6C7E563CEAD2A38355688_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JSONString_t1A1090FC5863846C80D0BDEF4E63FE23D7AC437D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF944DCD635F9801F7AC90A407FBC479964DEC024);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (longAsString)
		il2cpp_codegen_runtime_class_init_inline(JSONNode_tD29E53D2E1C8F91FF9FEA40F4F3A540857651D3B_il2cpp_TypeInfo_var);
		bool L_0 = ((JSONNode_tD29E53D2E1C8F91FF9FEA40F4F3A540857651D3B_StaticFields*)il2cpp_codegen_static_fields_for(JSONNode_tD29E53D2E1C8F91FF9FEA40F4F3A540857651D3B_il2cpp_TypeInfo_var))->___longAsString_1;
		if (!L_0)
		{
			goto IL_001a;
		}
	}
	{
		// Set(new JSONString("0"));
		JSONString_t1A1090FC5863846C80D0BDEF4E63FE23D7AC437D* L_1 = (JSONString_t1A1090FC5863846C80D0BDEF4E63FE23D7AC437D*)il2cpp_codegen_object_new(JSONString_t1A1090FC5863846C80D0BDEF4E63FE23D7AC437D_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		JSONString__ctor_mAD5BB3D8B2193F8B64CD62C52F5EF2D51F7A2742(L_1, _stringLiteralF944DCD635F9801F7AC90A407FBC479964DEC024, NULL);
		JSONString_t1A1090FC5863846C80D0BDEF4E63FE23D7AC437D* L_2;
		L_2 = JSONLazyCreator_Set_TisJSONString_t1A1090FC5863846C80D0BDEF4E63FE23D7AC437D_m99A1733E07636B9540AF6CA596217D6F8480F96A(__this, L_1, JSONLazyCreator_Set_TisJSONString_t1A1090FC5863846C80D0BDEF4E63FE23D7AC437D_m99A1733E07636B9540AF6CA596217D6F8480F96A_RuntimeMethod_var);
		goto IL_002f;
	}

IL_001a:
	{
		// Set(new JSONNumber(0.0));
		JSONNumber_tE274A557833A3AE0CDC6C7E563CEAD2A38355688* L_3 = (JSONNumber_tE274A557833A3AE0CDC6C7E563CEAD2A38355688*)il2cpp_codegen_object_new(JSONNumber_tE274A557833A3AE0CDC6C7E563CEAD2A38355688_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		JSONNumber__ctor_mCBCEBE5C94CA62FF6A45B6F37850DBCE5D2648D8(L_3, (0.0), NULL);
		JSONNumber_tE274A557833A3AE0CDC6C7E563CEAD2A38355688* L_4;
		L_4 = JSONLazyCreator_Set_TisJSONNumber_tE274A557833A3AE0CDC6C7E563CEAD2A38355688_mB38332B5E61CF823BFA62D3DC8FC75C398775866(__this, L_3, JSONLazyCreator_Set_TisJSONNumber_tE274A557833A3AE0CDC6C7E563CEAD2A38355688_mB38332B5E61CF823BFA62D3DC8FC75C398775866_RuntimeMethod_var);
	}

IL_002f:
	{
		// return 0L;
		return ((int64_t)0);
	}
}
// System.Void SimpleJSON.JSONLazyCreator::set_AsLong(System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JSONLazyCreator_set_AsLong_mD9FC46B9E33D9EC1A8BC518C8130FE258B9DC0FB (JSONLazyCreator_t67A874365EE690A6837C36B8C9214BCBD04C1C00* __this, int64_t ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JSONLazyCreator_Set_TisJSONNumber_tE274A557833A3AE0CDC6C7E563CEAD2A38355688_mB38332B5E61CF823BFA62D3DC8FC75C398775866_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JSONLazyCreator_Set_TisJSONString_t1A1090FC5863846C80D0BDEF4E63FE23D7AC437D_m99A1733E07636B9540AF6CA596217D6F8480F96A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JSONNode_tD29E53D2E1C8F91FF9FEA40F4F3A540857651D3B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JSONNumber_tE274A557833A3AE0CDC6C7E563CEAD2A38355688_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JSONString_t1A1090FC5863846C80D0BDEF4E63FE23D7AC437D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (longAsString)
		il2cpp_codegen_runtime_class_init_inline(JSONNode_tD29E53D2E1C8F91FF9FEA40F4F3A540857651D3B_il2cpp_TypeInfo_var);
		bool L_0 = ((JSONNode_tD29E53D2E1C8F91FF9FEA40F4F3A540857651D3B_StaticFields*)il2cpp_codegen_static_fields_for(JSONNode_tD29E53D2E1C8F91FF9FEA40F4F3A540857651D3B_il2cpp_TypeInfo_var))->___longAsString_1;
		if (!L_0)
		{
			goto IL_0020;
		}
	}
	{
		// Set(new JSONString(value.ToString(CultureInfo.InvariantCulture)));
		il2cpp_codegen_runtime_class_init_inline(CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_il2cpp_TypeInfo_var);
		CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* L_1;
		L_1 = CultureInfo_get_InvariantCulture_m78DAB8CBE8766445310782B6E61FB7A9983AD425(NULL);
		String_t* L_2;
		L_2 = Int64_ToString_m5250B67D3E89B8EB829FB26136E744F1F141B7FD((&___value0), L_1, NULL);
		JSONString_t1A1090FC5863846C80D0BDEF4E63FE23D7AC437D* L_3 = (JSONString_t1A1090FC5863846C80D0BDEF4E63FE23D7AC437D*)il2cpp_codegen_object_new(JSONString_t1A1090FC5863846C80D0BDEF4E63FE23D7AC437D_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		JSONString__ctor_mAD5BB3D8B2193F8B64CD62C52F5EF2D51F7A2742(L_3, L_2, NULL);
		JSONString_t1A1090FC5863846C80D0BDEF4E63FE23D7AC437D* L_4;
		L_4 = JSONLazyCreator_Set_TisJSONString_t1A1090FC5863846C80D0BDEF4E63FE23D7AC437D_m99A1733E07636B9540AF6CA596217D6F8480F96A(__this, L_3, JSONLazyCreator_Set_TisJSONString_t1A1090FC5863846C80D0BDEF4E63FE23D7AC437D_m99A1733E07636B9540AF6CA596217D6F8480F96A_RuntimeMethod_var);
		return;
	}

IL_0020:
	{
		// Set(new JSONNumber(value));
		int64_t L_5 = ___value0;
		JSONNumber_tE274A557833A3AE0CDC6C7E563CEAD2A38355688* L_6 = (JSONNumber_tE274A557833A3AE0CDC6C7E563CEAD2A38355688*)il2cpp_codegen_object_new(JSONNumber_tE274A557833A3AE0CDC6C7E563CEAD2A38355688_il2cpp_TypeInfo_var);
		NullCheck(L_6);
		JSONNumber__ctor_mCBCEBE5C94CA62FF6A45B6F37850DBCE5D2648D8(L_6, ((double)L_5), NULL);
		JSONNumber_tE274A557833A3AE0CDC6C7E563CEAD2A38355688* L_7;
		L_7 = JSONLazyCreator_Set_TisJSONNumber_tE274A557833A3AE0CDC6C7E563CEAD2A38355688_mB38332B5E61CF823BFA62D3DC8FC75C398775866(__this, L_6, JSONLazyCreator_Set_TisJSONNumber_tE274A557833A3AE0CDC6C7E563CEAD2A38355688_mB38332B5E61CF823BFA62D3DC8FC75C398775866_RuntimeMethod_var);
		// }
		return;
	}
}
// System.UInt64 SimpleJSON.JSONLazyCreator::get_AsULong()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t JSONLazyCreator_get_AsULong_m7AD548D4FBC4EA9D50BD590F4C2192F92CD74696 (JSONLazyCreator_t67A874365EE690A6837C36B8C9214BCBD04C1C00* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JSONLazyCreator_Set_TisJSONNumber_tE274A557833A3AE0CDC6C7E563CEAD2A38355688_mB38332B5E61CF823BFA62D3DC8FC75C398775866_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JSONLazyCreator_Set_TisJSONString_t1A1090FC5863846C80D0BDEF4E63FE23D7AC437D_m99A1733E07636B9540AF6CA596217D6F8480F96A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JSONNode_tD29E53D2E1C8F91FF9FEA40F4F3A540857651D3B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JSONNumber_tE274A557833A3AE0CDC6C7E563CEAD2A38355688_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JSONString_t1A1090FC5863846C80D0BDEF4E63FE23D7AC437D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF944DCD635F9801F7AC90A407FBC479964DEC024);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (longAsString)
		il2cpp_codegen_runtime_class_init_inline(JSONNode_tD29E53D2E1C8F91FF9FEA40F4F3A540857651D3B_il2cpp_TypeInfo_var);
		bool L_0 = ((JSONNode_tD29E53D2E1C8F91FF9FEA40F4F3A540857651D3B_StaticFields*)il2cpp_codegen_static_fields_for(JSONNode_tD29E53D2E1C8F91FF9FEA40F4F3A540857651D3B_il2cpp_TypeInfo_var))->___longAsString_1;
		if (!L_0)
		{
			goto IL_001a;
		}
	}
	{
		// Set(new JSONString("0"));
		JSONString_t1A1090FC5863846C80D0BDEF4E63FE23D7AC437D* L_1 = (JSONString_t1A1090FC5863846C80D0BDEF4E63FE23D7AC437D*)il2cpp_codegen_object_new(JSONString_t1A1090FC5863846C80D0BDEF4E63FE23D7AC437D_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		JSONString__ctor_mAD5BB3D8B2193F8B64CD62C52F5EF2D51F7A2742(L_1, _stringLiteralF944DCD635F9801F7AC90A407FBC479964DEC024, NULL);
		JSONString_t1A1090FC5863846C80D0BDEF4E63FE23D7AC437D* L_2;
		L_2 = JSONLazyCreator_Set_TisJSONString_t1A1090FC5863846C80D0BDEF4E63FE23D7AC437D_m99A1733E07636B9540AF6CA596217D6F8480F96A(__this, L_1, JSONLazyCreator_Set_TisJSONString_t1A1090FC5863846C80D0BDEF4E63FE23D7AC437D_m99A1733E07636B9540AF6CA596217D6F8480F96A_RuntimeMethod_var);
		goto IL_002f;
	}

IL_001a:
	{
		// Set(new JSONNumber(0.0));
		JSONNumber_tE274A557833A3AE0CDC6C7E563CEAD2A38355688* L_3 = (JSONNumber_tE274A557833A3AE0CDC6C7E563CEAD2A38355688*)il2cpp_codegen_object_new(JSONNumber_tE274A557833A3AE0CDC6C7E563CEAD2A38355688_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		JSONNumber__ctor_mCBCEBE5C94CA62FF6A45B6F37850DBCE5D2648D8(L_3, (0.0), NULL);
		JSONNumber_tE274A557833A3AE0CDC6C7E563CEAD2A38355688* L_4;
		L_4 = JSONLazyCreator_Set_TisJSONNumber_tE274A557833A3AE0CDC6C7E563CEAD2A38355688_mB38332B5E61CF823BFA62D3DC8FC75C398775866(__this, L_3, JSONLazyCreator_Set_TisJSONNumber_tE274A557833A3AE0CDC6C7E563CEAD2A38355688_mB38332B5E61CF823BFA62D3DC8FC75C398775866_RuntimeMethod_var);
	}

IL_002f:
	{
		// return 0L;
		return ((int64_t)0);
	}
}
// System.Void SimpleJSON.JSONLazyCreator::set_AsULong(System.UInt64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JSONLazyCreator_set_AsULong_m0E56A5902F081018641CCAF19946A54A0B5E6BBE (JSONLazyCreator_t67A874365EE690A6837C36B8C9214BCBD04C1C00* __this, uint64_t ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JSONLazyCreator_Set_TisJSONNumber_tE274A557833A3AE0CDC6C7E563CEAD2A38355688_mB38332B5E61CF823BFA62D3DC8FC75C398775866_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JSONLazyCreator_Set_TisJSONString_t1A1090FC5863846C80D0BDEF4E63FE23D7AC437D_m99A1733E07636B9540AF6CA596217D6F8480F96A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JSONNode_tD29E53D2E1C8F91FF9FEA40F4F3A540857651D3B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JSONNumber_tE274A557833A3AE0CDC6C7E563CEAD2A38355688_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JSONString_t1A1090FC5863846C80D0BDEF4E63FE23D7AC437D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (longAsString)
		il2cpp_codegen_runtime_class_init_inline(JSONNode_tD29E53D2E1C8F91FF9FEA40F4F3A540857651D3B_il2cpp_TypeInfo_var);
		bool L_0 = ((JSONNode_tD29E53D2E1C8F91FF9FEA40F4F3A540857651D3B_StaticFields*)il2cpp_codegen_static_fields_for(JSONNode_tD29E53D2E1C8F91FF9FEA40F4F3A540857651D3B_il2cpp_TypeInfo_var))->___longAsString_1;
		if (!L_0)
		{
			goto IL_0020;
		}
	}
	{
		// Set(new JSONString(value.ToString(CultureInfo.InvariantCulture)));
		il2cpp_codegen_runtime_class_init_inline(CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_il2cpp_TypeInfo_var);
		CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* L_1;
		L_1 = CultureInfo_get_InvariantCulture_m78DAB8CBE8766445310782B6E61FB7A9983AD425(NULL);
		String_t* L_2;
		L_2 = UInt64_ToString_mCDDACF05D6B5B3ECB10B1FEEE58ED3407973E7A7((&___value0), L_1, NULL);
		JSONString_t1A1090FC5863846C80D0BDEF4E63FE23D7AC437D* L_3 = (JSONString_t1A1090FC5863846C80D0BDEF4E63FE23D7AC437D*)il2cpp_codegen_object_new(JSONString_t1A1090FC5863846C80D0BDEF4E63FE23D7AC437D_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		JSONString__ctor_mAD5BB3D8B2193F8B64CD62C52F5EF2D51F7A2742(L_3, L_2, NULL);
		JSONString_t1A1090FC5863846C80D0BDEF4E63FE23D7AC437D* L_4;
		L_4 = JSONLazyCreator_Set_TisJSONString_t1A1090FC5863846C80D0BDEF4E63FE23D7AC437D_m99A1733E07636B9540AF6CA596217D6F8480F96A(__this, L_3, JSONLazyCreator_Set_TisJSONString_t1A1090FC5863846C80D0BDEF4E63FE23D7AC437D_m99A1733E07636B9540AF6CA596217D6F8480F96A_RuntimeMethod_var);
		return;
	}

IL_0020:
	{
		// Set(new JSONNumber(value));
		uint64_t L_5 = ___value0;
		JSONNumber_tE274A557833A3AE0CDC6C7E563CEAD2A38355688* L_6 = (JSONNumber_tE274A557833A3AE0CDC6C7E563CEAD2A38355688*)il2cpp_codegen_object_new(JSONNumber_tE274A557833A3AE0CDC6C7E563CEAD2A38355688_il2cpp_TypeInfo_var);
		NullCheck(L_6);
		JSONNumber__ctor_mCBCEBE5C94CA62FF6A45B6F37850DBCE5D2648D8(L_6, ((double)((double)(uint64_t)L_5)), NULL);
		JSONNumber_tE274A557833A3AE0CDC6C7E563CEAD2A38355688* L_7;
		L_7 = JSONLazyCreator_Set_TisJSONNumber_tE274A557833A3AE0CDC6C7E563CEAD2A38355688_mB38332B5E61CF823BFA62D3DC8FC75C398775866(__this, L_6, JSONLazyCreator_Set_TisJSONNumber_tE274A557833A3AE0CDC6C7E563CEAD2A38355688_mB38332B5E61CF823BFA62D3DC8FC75C398775866_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Boolean SimpleJSON.JSONLazyCreator::get_AsBool()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool JSONLazyCreator_get_AsBool_m1233E08208F064E3B1B0F049B67CE4A333F3C2AD (JSONLazyCreator_t67A874365EE690A6837C36B8C9214BCBD04C1C00* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JSONBool_tD24D984AAB7A652E0241CA0111547A9A9F66B5C9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JSONLazyCreator_Set_TisJSONBool_tD24D984AAB7A652E0241CA0111547A9A9F66B5C9_m4F55FE6F4423B1007E8D5802037174BE6A61D4C8_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// get { Set(new JSONBool(false)); return false; }
		JSONBool_tD24D984AAB7A652E0241CA0111547A9A9F66B5C9* L_0 = (JSONBool_tD24D984AAB7A652E0241CA0111547A9A9F66B5C9*)il2cpp_codegen_object_new(JSONBool_tD24D984AAB7A652E0241CA0111547A9A9F66B5C9_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		JSONBool__ctor_mE760DC3E6BCC0DDF8900363A7DFB69FB7C08C96B(L_0, (bool)0, NULL);
		JSONBool_tD24D984AAB7A652E0241CA0111547A9A9F66B5C9* L_1;
		L_1 = JSONLazyCreator_Set_TisJSONBool_tD24D984AAB7A652E0241CA0111547A9A9F66B5C9_m4F55FE6F4423B1007E8D5802037174BE6A61D4C8(__this, L_0, JSONLazyCreator_Set_TisJSONBool_tD24D984AAB7A652E0241CA0111547A9A9F66B5C9_m4F55FE6F4423B1007E8D5802037174BE6A61D4C8_RuntimeMethod_var);
		// get { Set(new JSONBool(false)); return false; }
		return (bool)0;
	}
}
// System.Void SimpleJSON.JSONLazyCreator::set_AsBool(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JSONLazyCreator_set_AsBool_m249F537AB12381B70D79E7EE7699B3B8E9CF37B1 (JSONLazyCreator_t67A874365EE690A6837C36B8C9214BCBD04C1C00* __this, bool ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JSONBool_tD24D984AAB7A652E0241CA0111547A9A9F66B5C9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JSONLazyCreator_Set_TisJSONBool_tD24D984AAB7A652E0241CA0111547A9A9F66B5C9_m4F55FE6F4423B1007E8D5802037174BE6A61D4C8_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// set { Set(new JSONBool(value)); }
		bool L_0 = ___value0;
		JSONBool_tD24D984AAB7A652E0241CA0111547A9A9F66B5C9* L_1 = (JSONBool_tD24D984AAB7A652E0241CA0111547A9A9F66B5C9*)il2cpp_codegen_object_new(JSONBool_tD24D984AAB7A652E0241CA0111547A9A9F66B5C9_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		JSONBool__ctor_mE760DC3E6BCC0DDF8900363A7DFB69FB7C08C96B(L_1, L_0, NULL);
		JSONBool_tD24D984AAB7A652E0241CA0111547A9A9F66B5C9* L_2;
		L_2 = JSONLazyCreator_Set_TisJSONBool_tD24D984AAB7A652E0241CA0111547A9A9F66B5C9_m4F55FE6F4423B1007E8D5802037174BE6A61D4C8(__this, L_1, JSONLazyCreator_Set_TisJSONBool_tD24D984AAB7A652E0241CA0111547A9A9F66B5C9_m4F55FE6F4423B1007E8D5802037174BE6A61D4C8_RuntimeMethod_var);
		// set { Set(new JSONBool(value)); }
		return;
	}
}
// SimpleJSON.JSONArray SimpleJSON.JSONLazyCreator::get_AsArray()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR JSONArray_tDB47C85E2DDB2CB4A972E4C0685D82E00490CB25* JSONLazyCreator_get_AsArray_m3F02A776AAC711B545C0FDCC49AAD92E0436667A (JSONLazyCreator_t67A874365EE690A6837C36B8C9214BCBD04C1C00* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JSONArray_tDB47C85E2DDB2CB4A972E4C0685D82E00490CB25_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JSONLazyCreator_Set_TisJSONArray_tDB47C85E2DDB2CB4A972E4C0685D82E00490CB25_m7D3A237E093665EDAA099018EAD7FCF9FB769A9B_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// get { return Set(new JSONArray()); }
		JSONArray_tDB47C85E2DDB2CB4A972E4C0685D82E00490CB25* L_0 = (JSONArray_tDB47C85E2DDB2CB4A972E4C0685D82E00490CB25*)il2cpp_codegen_object_new(JSONArray_tDB47C85E2DDB2CB4A972E4C0685D82E00490CB25_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		JSONArray__ctor_m19BBACE404D8C75AC41AC9CB4702C0943401D071(L_0, NULL);
		JSONArray_tDB47C85E2DDB2CB4A972E4C0685D82E00490CB25* L_1;
		L_1 = JSONLazyCreator_Set_TisJSONArray_tDB47C85E2DDB2CB4A972E4C0685D82E00490CB25_m7D3A237E093665EDAA099018EAD7FCF9FB769A9B(__this, L_0, JSONLazyCreator_Set_TisJSONArray_tDB47C85E2DDB2CB4A972E4C0685D82E00490CB25_m7D3A237E093665EDAA099018EAD7FCF9FB769A9B_RuntimeMethod_var);
		return L_1;
	}
}
// SimpleJSON.JSONObject SimpleJSON.JSONLazyCreator::get_AsObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR JSONObject_tEA00D19860E34865B3D16312DD382C0901CAB654* JSONLazyCreator_get_AsObject_m4EF7CB0BA5DD35B9BD2C988FC474CDE22AB74D41 (JSONLazyCreator_t67A874365EE690A6837C36B8C9214BCBD04C1C00* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JSONLazyCreator_Set_TisJSONObject_tEA00D19860E34865B3D16312DD382C0901CAB654_mF8CEE128BB1DCFC3C42A7158743827420DCDFB91_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JSONObject_tEA00D19860E34865B3D16312DD382C0901CAB654_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// get { return Set(new JSONObject()); }
		JSONObject_tEA00D19860E34865B3D16312DD382C0901CAB654* L_0 = (JSONObject_tEA00D19860E34865B3D16312DD382C0901CAB654*)il2cpp_codegen_object_new(JSONObject_tEA00D19860E34865B3D16312DD382C0901CAB654_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		JSONObject__ctor_m8AA5877BC05D1BFF9F50D151C0ECF1E3F5C6BE2F(L_0, NULL);
		JSONObject_tEA00D19860E34865B3D16312DD382C0901CAB654* L_1;
		L_1 = JSONLazyCreator_Set_TisJSONObject_tEA00D19860E34865B3D16312DD382C0901CAB654_mF8CEE128BB1DCFC3C42A7158743827420DCDFB91(__this, L_0, JSONLazyCreator_Set_TisJSONObject_tEA00D19860E34865B3D16312DD382C0901CAB654_mF8CEE128BB1DCFC3C42A7158743827420DCDFB91_RuntimeMethod_var);
		return L_1;
	}
}
// System.Void SimpleJSON.JSONLazyCreator::WriteToStringBuilder(System.Text.StringBuilder,System.Int32,System.Int32,SimpleJSON.JSONTextMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JSONLazyCreator_WriteToStringBuilder_m8748356B7DC27A8DC61E84B6B7DC45A0F086971F (JSONLazyCreator_t67A874365EE690A6837C36B8C9214BCBD04C1C00* __this, StringBuilder_t* ___aSB0, int32_t ___aIndent1, int32_t ___aIndentInc2, int32_t ___aMode3, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5BEFD8CC60A79699B5BB00E37BAC5B62D371E174);
		s_Il2CppMethodInitialized = true;
	}
	{
		// aSB.Append("null");
		StringBuilder_t* L_0 = ___aSB0;
		NullCheck(L_0);
		StringBuilder_t* L_1;
		L_1 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_0, _stringLiteral5BEFD8CC60A79699B5BB00E37BAC5B62D371E174, NULL);
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
// SimpleJSON.JSONNode SimpleJSON.JSON::Parse(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR JSONNode_tD29E53D2E1C8F91FF9FEA40F4F3A540857651D3B* JSON_Parse_mCA7C2681A9FC13127F1B91709B67A3C3E9218706 (String_t* ___aJSON0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JSONNode_tD29E53D2E1C8F91FF9FEA40F4F3A540857651D3B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return JSONNode.Parse(aJSON);
		String_t* L_0 = ___aJSON0;
		il2cpp_codegen_runtime_class_init_inline(JSONNode_tD29E53D2E1C8F91FF9FEA40F4F3A540857651D3B_il2cpp_TypeInfo_var);
		JSONNode_tD29E53D2E1C8F91FF9FEA40F4F3A540857651D3B* L_1;
		L_1 = JSONNode_Parse_mD88F392BA303CB1BE616FA5B44E6ED8D7C2E7432(L_0, NULL);
		return L_1;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void KeyEnumerator__ctor_mA74E36BD7D862BD0CAA6A40ABA8EA9B8E96BC09B_inline (KeyEnumerator_t75897CC29A0BD54DD4F75DA1922448A65DEC4458* __this, Enumerator_tA1F999D27FB3CE7FB0AC8D9BD4084CBA9E687C1F ___aEnumerator0, const RuntimeMethod* method) 
{
	{
		// public KeyEnumerator(Enumerator aEnumerator) { m_Enumerator = aEnumerator; }
		Enumerator_tA1F999D27FB3CE7FB0AC8D9BD4084CBA9E687C1F L_0 = ___aEnumerator0;
		__this->___m_Enumerator_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___m_Enumerator_0))->___m_Object_1))->____dictionary_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&__this->___m_Enumerator_0))->___m_Object_1))->____current_3))->___key_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&__this->___m_Enumerator_0))->___m_Object_1))->____current_3))->___value_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___m_Enumerator_0))->___m_Array_2))->____list_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___m_Enumerator_0))->___m_Array_2))->____current_3), (void*)NULL);
		#endif
		// public KeyEnumerator(Enumerator aEnumerator) { m_Enumerator = aEnumerator; }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ValueEnumerator__ctor_m38A55BFC57441736052296F0B4C582FCFFAD5EF3_inline (ValueEnumerator_tEA9D0EC3AED2B1854EAA656A2ECA719D051F774E* __this, Enumerator_tA1F999D27FB3CE7FB0AC8D9BD4084CBA9E687C1F ___aEnumerator0, const RuntimeMethod* method) 
{
	{
		// public ValueEnumerator(Enumerator aEnumerator) { m_Enumerator = aEnumerator; }
		Enumerator_tA1F999D27FB3CE7FB0AC8D9BD4084CBA9E687C1F L_0 = ___aEnumerator0;
		__this->___m_Enumerator_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___m_Enumerator_0))->___m_Object_1))->____dictionary_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&__this->___m_Enumerator_0))->___m_Object_1))->____current_3))->___key_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&__this->___m_Enumerator_0))->___m_Object_1))->____current_3))->___value_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___m_Enumerator_0))->___m_Array_2))->____list_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___m_Enumerator_0))->___m_Array_2))->____current_3), (void*)NULL);
		#endif
		// public ValueEnumerator(Enumerator aEnumerator) { m_Enumerator = aEnumerator; }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline (String_t* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____stringLength_4;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Double_GetHashCode_m3761FC05AD24D97A68FA1E8412A9454DF3880E32_inline (double* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BitConverter_t6E99605185963BC12B3D369E13F2B88997E64A27_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int64_t V_0 = 0;
	{
		double L_0 = *((double*)__this);
		il2cpp_codegen_runtime_class_init_inline(BitConverter_t6E99605185963BC12B3D369E13F2B88997E64A27_il2cpp_TypeInfo_var);
		int64_t L_1;
		L_1 = BitConverter_DoubleToInt64Bits_m45D911F884F3B09BF39C02044EDC9BDA8084C80B_inline(L_0, NULL);
		V_0 = L_1;
		int64_t L_2 = V_0;
		if ((((int64_t)((int64_t)(((int64_t)il2cpp_codegen_subtract(L_2, ((int64_t)1)))&((int64_t)(std::numeric_limits<int64_t>::max)())))) < ((int64_t)((int64_t)9218868437227405312LL))))
		{
			goto IL_002d;
		}
	}
	{
		int64_t L_3 = V_0;
		V_0 = ((int64_t)(L_3&((int64_t)9218868437227405312LL)));
	}

IL_002d:
	{
		int64_t L_4 = V_0;
		int64_t L_5 = V_0;
		return ((int32_t)(((int32_t)L_4)^((int32_t)((int64_t)(L_5>>((int32_t)32))))));
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* KeyValuePair_2_get_Value_mC6BD8075F9C9DDEF7B4D731E5C38EC19103988E7_gshared_inline (KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->___value_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Stack_1_get_Count_mD08AE71D49787D30DDD9D484BCD323D646744D2E_gshared_inline (Stack_1_tAD790A47551563636908E21E4F08C54C0C323EB5* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = (int32_t)__this->____size_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->____current_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230 Enumerator_get_Current_mE3475384B761E1C7971D3639BD09117FE8363422_gshared_inline (Enumerator_tEA93FE2B778D098F590CA168BEFC4CD85D73A6B9* __this, const RuntimeMethod* method) 
{
	{
		KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230 L_0 = (KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230)__this->____current_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* KeyValuePair_2_get_Key_mBD8EA7557C27E6956F2AF29DA3F7499B2F51A282_gshared_inline (KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->___key_0;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int64_t BitConverter_DoubleToInt64Bits_m45D911F884F3B09BF39C02044EDC9BDA8084C80B_inline (double ___value0, const RuntimeMethod* method) 
{
	{
		int64_t L_0 = *((int64_t*)((uintptr_t)(&___value0)));
		return L_0;
	}
}

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
struct VirtActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
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
template <typename R, typename T1, typename T2, typename T3>
struct VirtFuncInvoker3
{
	typedef R (*Func)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
	}
};
template <typename R, typename T1>
struct InterfaceFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
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
template <typename R, typename T1, typename T2>
struct InterfaceFuncInvoker2
{
	typedef R (*Func)(void*, T1, T2, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};

// System.Xml.XPath.ExprGE
struct ExprGE_t4135851367;
// System.Xml.XPath.Expression
struct Expression_t1452783009;
// System.Xml.XPath.RelationalExpr
struct RelationalExpr_t3307137467;
// System.String
struct String_t;
// System.Xml.XPath.ExprGT
struct ExprGT_t1857306706;
// System.Xml.XPath.ExprLE
struct ExprLE_t4135130471;
// System.Xml.XPath.ExprLiteral
struct ExprLiteral_t2264229068;
// System.Xml.XPath.BaseIterator
struct BaseIterator_t4168896842;
// System.Xml.XPath.ExprLT
struct ExprLT_t1856585810;
// System.Xml.XPath.ExprMINUS
struct ExprMINUS_t3125292145;
// System.Xml.XPath.ExprNumeric
struct ExprNumeric_t370757872;
// System.Xml.XPath.ExprMOD
struct ExprMOD_t1913835785;
// System.Xml.XPath.ExprMULT
struct ExprMULT_t118778748;
// System.Xml.XPath.ExprNE
struct ExprNE_t4135261543;
// System.Xml.XPath.EqualityExpr
struct EqualityExpr_t1646148531;
// System.Xml.XPath.ExprNEG
struct ExprNEG_t381818215;
// System.Xml.XPath.ExprNumber
struct ExprNumber_t3483239576;
// System.Xml.XPath.ExprBinary
struct ExprBinary_t2069694888;
// System.Xml.XPath.ExprOR
struct ExprOR_t3019581832;
// System.Xml.XPath.ExprBoolean
struct ExprBoolean_t3855188593;
// System.Xml.XPath.ExprParens
struct ExprParens_t795575662;
// System.Xml.IXmlNamespaceResolver
struct IXmlNamespaceResolver_t535375154;
// System.Xml.XPath.WrapperIterator
struct WrapperIterator_t1258076988;
// System.Xml.XPath.XPathNodeIterator
struct XPathNodeIterator_t3667290188;
// System.Xml.XPath.ParensIterator
struct ParensIterator_t4020310733;
// System.Xml.XPath.ExprPLUS
struct ExprPLUS_t1725353634;
// System.Xml.XPath.ExprRoot
struct ExprRoot_t3091324302;
// System.Xml.XPath.NodeSet
struct NodeSet_t3272593155;
// System.Xml.XPath.SelfIterator
struct SelfIterator_t907214;
// System.Xml.XPath.XPathNavigator
struct XPathNavigator_t787956054;
// System.Xml.XPath.ExprSLASH
struct ExprSLASH_t1263914658;
// System.Xml.XPath.SimpleSlashIterator
struct SimpleSlashIterator_t3611200333;
// System.Xml.XPath.SlashIterator
struct SlashIterator_t2421034408;
// System.Xml.XPath.SortedIterator
struct SortedIterator_t2904376427;
// System.Xml.XPath.ExprSLASH2
struct ExprSLASH2_t1762680492;
// System.Xml.XPath.NodeTypeTest
struct NodeTypeTest_t4287533341;
// System.Xml.XPath.NodeTest
struct NodeTest_t747859056;
// System.Xml.XPath.AxisSpecifier
struct AxisSpecifier_t40435393;
// System.Xml.XPath.NodeNameTest
struct NodeNameTest_t562814213;
// System.Xml.XPath.ExprUNION
struct ExprUNION_t1609753984;
// System.Xml.XPath.UnionIterator
struct UnionIterator_t312972106;
// System.Xml.XPath.ExprVariable
struct ExprVariable_t1387751146;
// System.Xml.XmlQualifiedName
struct XmlQualifiedName_t2760654312;
// System.Xml.Xsl.IStaticXsltContext
struct IStaticXsltContext_t1496336571;
// System.Type
struct Type_t;
// System.Xml.XPath.XPathException
struct XPathException_t2107611652;
// System.Xml.XPath.FollowingIterator
struct FollowingIterator_t3658643279;
// System.Xml.XPath.SimpleIterator
struct SimpleIterator_t809567201;
// System.Xml.XPath.FollowingSiblingIterator
struct FollowingSiblingIterator_t3042855407;
// System.Xml.XPath.FunctionArguments
struct FunctionArguments_t3573450773;
// System.Collections.ArrayList
struct ArrayList_t2718874744;
// System.Xml.XPath.ListIterator
struct ListIterator_t3066609410;
// System.Collections.IList
struct IList_t2094931216;
// System.Xml.XPath.NamespaceIterator
struct NamespaceIterator_t3101604877;
// System.Xml.XPath.AxisIterator
struct AxisIterator_t3073253660;
// System.Xml.XPath.NullIterator
struct NullIterator_t2630925529;
// System.Xml.XPath.ParentIterator
struct ParentIterator_t3536730964;
// System.Xml.XPath.PrecedingIterator
struct PrecedingIterator_t2452812266;
// System.Xml.XPath.PrecedingSiblingIterator
struct PrecedingSiblingIterator_t3231156185;
// System.Xml.XPath.PredicateIterator
struct PredicateIterator_t4231391432;
// System.Collections.SortedList
struct SortedList_t2427694641;
// System.Collections.IComparer
struct IComparer_t1540313114;
// System.InvalidOperationException
struct InvalidOperationException_t56020091;
// System.Xml.XPath.XPathBooleanFunction
struct XPathBooleanFunction_t57991257;
// System.Xml.XPath.XPathFunction
struct XPathFunction_t857746608;
// System.SystemException
struct SystemException_t176217640;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t950877179;
// System.Exception
struct Exception_t;
// System.Xml.XPath.XPathExpression
struct XPathExpression_t1723793351;
// Mono.Xml.XPath.XPathParser
struct XPathParser_t4136515887;
// System.Xml.XPath.CompiledExpression
struct CompiledExpression_t4018285681;
// System.Xml.XPath.XPathFunctionBoolean
struct XPathFunctionBoolean_t2892373420;
// System.String[]
struct StringU5BU5D_t1281789340;
// System.Xml.XPath.XPathFunctionCeil
struct XPathFunctionCeil_t4176839285;
// System.Xml.XPath.XPathNumericFunction
struct XPathNumericFunction_t307051317;
// System.Xml.XPath.XPathFunctionConcat
struct XPathFunctionConcat_t3351639595;
// System.Text.StringBuilder
struct StringBuilder_t;
// System.Globalization.CultureInfo
struct CultureInfo_t4157843068;
// System.IFormatProvider
struct IFormatProvider_t2518567562;
// System.Object[]
struct ObjectU5BU5D_t2843939325;
// System.Xml.XPath.XPathFunctionContains
struct XPathFunctionContains_t678583606;
// System.Xml.XPath.XPathFunctionCount
struct XPathFunctionCount_t4174407007;
// System.Xml.XPath.XPathFunctionFalse
struct XPathFunctionFalse_t1021066162;
// System.Xml.XPath.XPathFunctionFloor
struct XPathFunctionFloor_t3617095014;
// System.Xml.XPath.XPathFunctionId
struct XPathFunctionId_t1670301333;
// System.Char[]
struct CharU5BU5D_t3528271667;
// System.Xml.XPath.XPathFunctionLang
struct XPathFunctionLang_t242671679;
// System.Xml.XPath.XPathFunctionLast
struct XPathFunctionLast_t241688620;
// System.Xml.XPath.XPathFunctionLocalName
struct XPathFunctionLocalName_t1807446049;
// System.Xml.XPath.XPathFunctionName
struct XPathFunctionName_t1405602168;
// System.Xml.XPath.XPathFunctionNamespaceUri
struct XPathFunctionNamespaceUri_t4077891083;
// System.Xml.XPath.XPathFunctionNormalizeSpace
struct XPathFunctionNormalizeSpace_t379159227;
// System.Xml.XPath.XPathFunctionNot
struct XPathFunctionNot_t3025979743;
// System.Xml.XPath.XPathFunctionNumber
struct XPathFunctionNumber_t699684043;
// System.Xml.XPath.XPathFunctionPosition
struct XPathFunctionPosition_t1996792158;
// System.Xml.XPath.XPathFunctionRound
struct XPathFunctionRound_t2668931994;
// System.ArgumentNullException
struct ArgumentNullException_t1615371798;
// System.ArgumentException
struct ArgumentException_t132251570;
// System.Globalization.NumberFormatInfo
struct NumberFormatInfo_t435877138;
// System.Xml.XPath.XPathFunctionStartsWith
struct XPathFunctionStartsWith_t3734288208;
// System.Xml.XPath.XPathFunctionString
struct XPathFunctionString_t3820712894;
// System.Xml.XPath.XPathFunctionStringLength
struct XPathFunctionStringLength_t1686187666;
// System.Xml.XPath.XPathFunctionSubstring
struct XPathFunctionSubstring_t3677332116;
// System.Xml.XPath.XPathFunctionSubstringAfter
struct XPathFunctionSubstringAfter_t2254953802;
// System.Xml.XPath.XPathFunctionSubstringBefore
struct XPathFunctionSubstringBefore_t3299707364;
// System.Xml.XPath.XPathFunctionSum
struct XPathFunctionSum_t2229418177;
// System.Xml.XPath.XPathFunctionTranslate
struct XPathFunctionTranslate_t1071508611;
// System.Xml.XPath.XPathFunctionTrue
struct XPathFunctionTrue_t3806785954;
// System.Xml.XPath.XPathItem
struct XPathItem_t4250588140;
// System.Xml.XPath.XPathIteratorComparer
struct XPathIteratorComparer_t1799213572;
// System.Collections.IEnumerable
struct IEnumerable_t1941168011;
// System.Xml.XPath.XPathNavigator/<EnumerateChildren>c__Iterator0
struct U3CEnumerateChildrenU3Ec__Iterator0_t404642154;
// System.Xml.XPath.XPathNavigator/EnumerableIterator
struct EnumerableIterator_t1590428576;
// System.Collections.IEnumerator
struct IEnumerator_t1853284238;
// System.Collections.Generic.IEnumerator`1<System.Object>
struct IEnumerator_1_t3512676632;
// System.NotSupportedException
struct NotSupportedException_t1314879016;
// System.Xml.XPath.XPathNavigatorComparer
struct XPathNavigatorComparer_t2421573191;
// System.Xml.XPath.XPathNodeIterator/<GetEnumerator>c__Iterator2
struct U3CGetEnumeratorU3Ec__Iterator2_t90454087;
// System.Xml.XPath.XPathSortElement
struct XPathSortElement_t4237073177;
// System.Xml.XPath.XPathSorter
struct XPathSorter_t36376808;
// System.Xml.XPath.XPathSorters
struct XPathSorters_t698127628;
// System.Xml.Xsl.XsltContext
struct XsltContext_t2039362735;
// System.Xml.Xsl.IXsltContextVariable
struct IXsltContextVariable_t1240308286;
// System.Xml.Xsl.IXsltContextFunction
struct IXsltContextFunction_t969044578;
// System.Xml.XPath.XPathResultType[]
struct XPathResultTypeU5BU5D_t1515527577;
// System.Collections.Hashtable
struct Hashtable_t1853889766;
// System.Runtime.Serialization.IFormatterConverter
struct IFormatterConverter_t2171992254;
// System.IntPtr[]
struct IntPtrU5BU5D_t4013366056;
// System.Collections.IDictionary
struct IDictionary_t1363984059;
// System.Globalization.DateTimeFormatInfo
struct DateTimeFormatInfo_t2405853701;
// System.Globalization.TextInfo
struct TextInfo_t3810425522;
// System.Globalization.CompareInfo
struct CompareInfo_t1092934962;
// System.Globalization.Calendar[]
struct CalendarU5BU5D_t3985046076;
// System.Globalization.Calendar
struct Calendar_t1661121569;
// System.Byte[]
struct ByteU5BU5D_t4116647657;
// System.Collections.Generic.Dictionary`2<System.String,System.Int32>
struct Dictionary_2_t2736202052;
// System.Int32
struct Int32_t2950945753;
// System.Void
struct Void_t1185182177;
// System.Xml.XmlNamespaceManager/NsDecl[]
struct NsDeclU5BU5D_t2116608150;
// System.Xml.XmlNamespaceManager/NsScope[]
struct NsScopeU5BU5D_t382374428;
// System.Xml.XmlNameTable
struct XmlNameTable_t71772148;
// System.IO.TextWriter
struct TextWriter_t3478189236;
// Mono.Xml.XPath.yydebug.yyDebug
struct yyDebug_t2316493473;
// System.Int16[]
struct Int16U5BU5D_t3686840178;
// System.Collections.SortedList/Slot[]
struct SlotU5BU5D_t227397015;
// System.Int32[]
struct Int32U5BU5D_t385246372;
// System.UInt32[]
struct UInt32U5BU5D_t2770800703;
// System.Byte
struct Byte_t1134296376;
// System.Double
struct Double_t594665363;
// System.UInt16
struct UInt16_t2177724958;
// System.Type[]
struct TypeU5BU5D_t3940880105;
// System.Reflection.MemberFilter
struct MemberFilter_t426314064;

extern String_t* _stringLiteral3451762578;
extern const uint32_t ExprGE_get_Operator_m3471581705_MetadataUsageId;
extern String_t* _stringLiteral3452614546;
extern const uint32_t ExprGT_get_Operator_m118927860_MetadataUsageId;
extern String_t* _stringLiteral3451762580;
extern const uint32_t ExprLE_get_Operator_m4047881400_MetadataUsageId;
extern RuntimeClass* String_t_il2cpp_TypeInfo_var;
extern String_t* _stringLiteral3452614521;
extern const uint32_t ExprLiteral_ToString_m988196231_MetadataUsageId;
extern String_t* _stringLiteral3452614548;
extern const uint32_t ExprLT_get_Operator_m3002619043_MetadataUsageId;
extern String_t* _stringLiteral3452614531;
extern const uint32_t ExprMINUS_get_Operator_m3875394535_MetadataUsageId;
extern String_t* _stringLiteral3452614523;
extern const uint32_t ExprMOD_get_Operator_m1963700108_MetadataUsageId;
extern String_t* _stringLiteral3452614534;
extern const uint32_t ExprMULT_get_Operator_m3232046128_MetadataUsageId;
extern String_t* _stringLiteral3451762559;
extern const uint32_t ExprNE_get_Operator_m4139945362_MetadataUsageId;
extern String_t* _stringLiteral3450517379;
extern const uint32_t ExprNEG_ToString_m1228426186_MetadataUsageId;
extern RuntimeClass* ExprNumber_t3483239576_il2cpp_TypeInfo_var;
extern const uint32_t ExprNEG_Optimize_m84840150_MetadataUsageId;
extern RuntimeClass* Double_t594665363_il2cpp_TypeInfo_var;
extern const uint32_t ExprNEG_Evaluate_m1945282735_MetadataUsageId;
extern const uint32_t ExprNumber_get_StaticValueAsNumber_m4285253905_MetadataUsageId;
extern const uint32_t ExprNumber_Evaluate_m1372199812_MetadataUsageId;
extern const uint32_t ExprNumeric_Optimize_m2257189555_MetadataUsageId;
extern const uint32_t ExprNumeric_Evaluate_m2933288309_MetadataUsageId;
extern String_t* _stringLiteral3455629249;
extern const uint32_t ExprOR_get_Operator_m1688656052_MetadataUsageId;
extern String_t* _stringLiteral3452614536;
extern String_t* _stringLiteral3452614535;
extern const uint32_t ExprParens_ToString_m487672512_MetadataUsageId;
extern RuntimeClass* XPathNodeIterator_t3667290188_il2cpp_TypeInfo_var;
extern RuntimeClass* BaseIterator_t4168896842_il2cpp_TypeInfo_var;
extern RuntimeClass* WrapperIterator_t1258076988_il2cpp_TypeInfo_var;
extern RuntimeClass* ParensIterator_t4020310733_il2cpp_TypeInfo_var;
extern const uint32_t ExprParens_Evaluate_m395386751_MetadataUsageId;
extern String_t* _stringLiteral3452614533;
extern const uint32_t ExprPLUS_get_Operator_m1295059442_MetadataUsageId;
extern const uint32_t ExprRoot_ToString_m2054507305_MetadataUsageId;
extern RuntimeClass* SelfIterator_t907214_il2cpp_TypeInfo_var;
extern const uint32_t ExprRoot_Evaluate_m3140108246_MetadataUsageId;
extern RuntimeClass* NodeSet_t3272593155_il2cpp_TypeInfo_var;
extern const uint32_t ExprSLASH_Optimize_m2721850521_MetadataUsageId;
extern String_t* _stringLiteral3452614529;
extern const uint32_t ExprSLASH_ToString_m2859106124_MetadataUsageId;
extern RuntimeClass* SimpleSlashIterator_t3611200333_il2cpp_TypeInfo_var;
extern RuntimeClass* SlashIterator_t2421034408_il2cpp_TypeInfo_var;
extern RuntimeClass* SortedIterator_t2904376427_il2cpp_TypeInfo_var;
extern const uint32_t ExprSLASH_Evaluate_m1058952271_MetadataUsageId;
extern const uint32_t ExprSLASH_get_Subtree_m443395336_MetadataUsageId;
extern RuntimeClass* NodeTypeTest_t4287533341_il2cpp_TypeInfo_var;
extern RuntimeClass* ExprSLASH2_t1762680492_il2cpp_TypeInfo_var;
extern const uint32_t ExprSLASH2__cctor_m3946436987_MetadataUsageId;
extern RuntimeClass* NodeTest_t747859056_il2cpp_TypeInfo_var;
extern RuntimeClass* NodeNameTest_t562814213_il2cpp_TypeInfo_var;
extern RuntimeClass* ExprSLASH_t1263914658_il2cpp_TypeInfo_var;
extern const uint32_t ExprSLASH2_Optimize_m3796015300_MetadataUsageId;
extern String_t* _stringLiteral3450582913;
extern const uint32_t ExprSLASH2_ToString_m3162446678_MetadataUsageId;
extern const uint32_t ExprSLASH2_Evaluate_m522727291_MetadataUsageId;
extern const uint32_t ExprSLASH2_get_Subtree_m1772483012_MetadataUsageId;
extern String_t* _stringLiteral3791560906;
extern const uint32_t ExprUNION_ToString_m1231590867_MetadataUsageId;
extern RuntimeClass* UnionIterator_t312972106_il2cpp_TypeInfo_var;
extern const uint32_t ExprUNION_Evaluate_m3798551753_MetadataUsageId;
extern const uint32_t ExprUNION_get_Subtree_m3450082559_MetadataUsageId;
extern RuntimeClass* IStaticXsltContext_t1496336571_il2cpp_TypeInfo_var;
extern const uint32_t ExprVariable__ctor_m3887127046_MetadataUsageId;
extern String_t* _stringLiteral3452614524;
extern const uint32_t ExprVariable_ToString_m1481480678_MetadataUsageId;
extern RuntimeClass* XsltContext_t2039362735_il2cpp_TypeInfo_var;
extern RuntimeClass* XmlQualifiedName_t2760654312_il2cpp_TypeInfo_var;
extern RuntimeClass* XPathException_t2107611652_il2cpp_TypeInfo_var;
extern RuntimeClass* IXsltContextVariable_t1240308286_il2cpp_TypeInfo_var;
extern const RuntimeMethod* ExprVariable_Evaluate_m265799308_RuntimeMethod_var;
extern String_t* _stringLiteral4194821020;
extern String_t* _stringLiteral4027932726;
extern String_t* _stringLiteral459368889;
extern const uint32_t ExprVariable_Evaluate_m265799308_MetadataUsageId;
extern RuntimeClass* FollowingIterator_t3658643279_il2cpp_TypeInfo_var;
extern const uint32_t FollowingIterator_Clone_m3718441867_MetadataUsageId;
extern RuntimeClass* FollowingSiblingIterator_t3042855407_il2cpp_TypeInfo_var;
extern const uint32_t FollowingSiblingIterator_Clone_m1362168754_MetadataUsageId;
extern RuntimeClass* ListIterator_t3066609410_il2cpp_TypeInfo_var;
extern const uint32_t ListIterator_Clone_m190352292_MetadataUsageId;
extern RuntimeClass* ICollection_t3904884886_il2cpp_TypeInfo_var;
extern const uint32_t ListIterator_MoveNextCore_m889509885_MetadataUsageId;
extern RuntimeClass* IList_t2094931216_il2cpp_TypeInfo_var;
extern RuntimeClass* XPathNavigator_t787956054_il2cpp_TypeInfo_var;
extern const uint32_t ListIterator_get_Current_m1639282621_MetadataUsageId;
extern const uint32_t ListIterator_get_Count_m1747028913_MetadataUsageId;
extern RuntimeClass* NamespaceIterator_t3101604877_il2cpp_TypeInfo_var;
extern const uint32_t NamespaceIterator_Clone_m1357767084_MetadataUsageId;
extern const uint32_t NodeNameTest__ctor_m2971835893_MetadataUsageId;
extern String_t* _stringLiteral3451959190;
extern const uint32_t NodeNameTest_ToString_m1666853140_MetadataUsageId;
extern RuntimeClass* IXmlNamespaceResolver_t535375154_il2cpp_TypeInfo_var;
extern const RuntimeMethod* NodeNameTest_Match_m1634415766_RuntimeMethod_var;
extern String_t* _stringLiteral1765329652;
extern const uint32_t NodeNameTest_Match_m1634415766_MetadataUsageId;
extern RuntimeClass* AxisSpecifier_t40435393_il2cpp_TypeInfo_var;
extern const uint32_t NodeTest__ctor_m2797019209_MetadataUsageId;
extern RuntimeClass* AxisIterator_t3073253660_il2cpp_TypeInfo_var;
extern const uint32_t NodeTest_Evaluate_m2194906102_MetadataUsageId;
extern const RuntimeMethod* NodeTypeTest__ctor_m2727277921_RuntimeMethod_var;
extern String_t* _stringLiteral1120425571;
extern String_t* _stringLiteral486602797;
extern const uint32_t NodeTypeTest__ctor_m2727277921_MetadataUsageId;
extern String_t* _stringLiteral3450058632;
extern String_t* _stringLiteral3450976121;
extern String_t* _stringLiteral3450976136;
extern const uint32_t NodeTypeTest_ToString_m2738627077_MetadataUsageId;
extern RuntimeClass* XPathNodeType_t3031007223_il2cpp_TypeInfo_var;
extern String_t* _stringLiteral3796263715;
extern String_t* _stringLiteral3987835854;
extern String_t* _stringLiteral2364716187;
extern String_t* _stringLiteral1985170616;
extern String_t* _stringLiteral2215548584;
extern String_t* _stringLiteral3452614643;
extern const uint32_t NodeTypeTest_ToString_m2891207610_MetadataUsageId;
extern const uint32_t NodeTypeTest_Match_m2984330370_MetadataUsageId;
extern RuntimeClass* NullIterator_t2630925529_il2cpp_TypeInfo_var;
extern const uint32_t NullIterator_Clone_m3684891503_MetadataUsageId;
extern const uint32_t ParensIterator__ctor_m1023359346_MetadataUsageId;
extern const uint32_t ParensIterator_Clone_m2390936304_MetadataUsageId;
extern RuntimeClass* ParentIterator_t3536730964_il2cpp_TypeInfo_var;
extern const uint32_t ParentIterator_Clone_m2327552165_MetadataUsageId;
extern RuntimeClass* PrecedingIterator_t2452812266_il2cpp_TypeInfo_var;
extern const uint32_t PrecedingIterator_Clone_m2554062412_MetadataUsageId;
extern RuntimeClass* PrecedingSiblingIterator_t3231156185_il2cpp_TypeInfo_var;
extern const uint32_t PrecedingSiblingIterator_Clone_m1574796750_MetadataUsageId;
extern const uint32_t PredicateIterator__ctor_m1118843382_MetadataUsageId;
extern RuntimeClass* PredicateIterator_t4231391432_il2cpp_TypeInfo_var;
extern const uint32_t PredicateIterator_Clone_m3671183366_MetadataUsageId;
extern const uint32_t PredicateIterator_MoveNextCore_m1873396483_MetadataUsageId;
extern RuntimeClass* Convert_t2465617642_il2cpp_TypeInfo_var;
extern RuntimeClass* ArrayList_t2718874744_il2cpp_TypeInfo_var;
extern const uint32_t RelationalExpr_EvaluateBoolean_m1723564559_MetadataUsageId;
extern const uint32_t SelfIterator_Clone_m363020126_MetadataUsageId;
extern const uint32_t SimpleSlashIterator__ctor_m1892241149_MetadataUsageId;
extern const uint32_t SimpleSlashIterator_Clone_m2503466294_MetadataUsageId;
extern RuntimeClass* SortedList_t2427694641_il2cpp_TypeInfo_var;
extern const uint32_t SlashIterator__ctor_m3733877240_MetadataUsageId;
extern const uint32_t SlashIterator_Clone_m3200560096_MetadataUsageId;
extern RuntimeClass* XPathIteratorComparer_t1799213572_il2cpp_TypeInfo_var;
extern const uint32_t SlashIterator_MoveNextCore_m1334516283_MetadataUsageId;
extern RuntimeClass* XPathNavigatorComparer_t2421573191_il2cpp_TypeInfo_var;
extern const uint32_t SortedIterator__ctor_m4010031056_MetadataUsageId;
extern const uint32_t SortedIterator_Clone_m2329222376_MetadataUsageId;
extern const uint32_t SortedIterator_get_Current_m1244162618_MetadataUsageId;
extern const uint32_t UnionIterator__ctor_m2440644929_MetadataUsageId;
extern const uint32_t UnionIterator_Clone_m3744435168_MetadataUsageId;
extern RuntimeClass* InvalidOperationException_t56020091_il2cpp_TypeInfo_var;
extern const RuntimeMethod* UnionIterator_MoveNextCore_m1828747080_RuntimeMethod_var;
extern String_t* _stringLiteral731907236;
extern const uint32_t UnionIterator_MoveNextCore_m1828747080_MetadataUsageId;
extern const uint32_t WrapperIterator_Clone_m4079939635_MetadataUsageId;
extern RuntimeClass* Boolean_t97287965_il2cpp_TypeInfo_var;
extern const uint32_t XPathBooleanFunction_get_StaticValue_m3226145284_MetadataUsageId;
extern const uint32_t XPathException__ctor_m1135220926_MetadataUsageId;
extern RuntimeClass* XPathParser_t4136515887_il2cpp_TypeInfo_var;
extern RuntimeClass* CompiledExpression_t4018285681_il2cpp_TypeInfo_var;
extern const uint32_t XPathExpression_Compile_m2626621118_MetadataUsageId;
extern const RuntimeMethod* XPathFunctionBoolean__ctor_m3229475651_RuntimeMethod_var;
extern String_t* _stringLiteral570152571;
extern const uint32_t XPathFunctionBoolean__ctor_m3229475651_MetadataUsageId;
extern const uint32_t XPathFunctionBoolean_Evaluate_m2289105876_MetadataUsageId;
extern RuntimeClass* StringU5BU5D_t1281789340_il2cpp_TypeInfo_var;
extern String_t* _stringLiteral3580302926;
extern const uint32_t XPathFunctionBoolean_ToString_m4112843319_MetadataUsageId;
extern const RuntimeMethod* XPathFunctionCeil__ctor_m376275260_RuntimeMethod_var;
extern String_t* _stringLiteral1990462270;
extern const uint32_t XPathFunctionCeil__ctor_m376275260_MetadataUsageId;
extern const uint32_t XPathFunctionCeil_Evaluate_m1281608090_MetadataUsageId;
extern String_t* _stringLiteral402588248;
extern const uint32_t XPathFunctionCeil_ToString_m1707757497_MetadataUsageId;
extern const RuntimeMethod* XPathFunctionConcat__ctor_m4049947836_RuntimeMethod_var;
extern String_t* _stringLiteral2208932330;
extern const uint32_t XPathFunctionConcat__ctor_m4049947836_MetadataUsageId;
extern RuntimeClass* Expression_t1452783009_il2cpp_TypeInfo_var;
extern const uint32_t XPathFunctionConcat_get_Peer_m3688240146_MetadataUsageId;
extern RuntimeClass* StringBuilder_t_il2cpp_TypeInfo_var;
extern const uint32_t XPathFunctionConcat_Evaluate_m3524587377_MetadataUsageId;
extern RuntimeClass* CultureInfo_t4157843068_il2cpp_TypeInfo_var;
extern RuntimeClass* ObjectU5BU5D_t2843939325_il2cpp_TypeInfo_var;
extern String_t* _stringLiteral2112246478;
extern String_t* _stringLiteral628085470;
extern const uint32_t XPathFunctionConcat_ToString_m1643488270_MetadataUsageId;
extern const RuntimeMethod* XPathFunctionContains__ctor_m3471873644_RuntimeMethod_var;
extern String_t* _stringLiteral1275394025;
extern const uint32_t XPathFunctionContains__ctor_m3471873644_MetadataUsageId;
extern const uint32_t XPathFunctionContains_Evaluate_m3281520038_MetadataUsageId;
extern String_t* _stringLiteral354353333;
extern String_t* _stringLiteral3452614532;
extern const uint32_t XPathFunctionContains_ToString_m2562516465_MetadataUsageId;
extern const RuntimeMethod* XPathFunctionCount__ctor_m2746453153_RuntimeMethod_var;
extern String_t* _stringLiteral3652175584;
extern const uint32_t XPathFunctionCount__ctor_m2746453153_MetadataUsageId;
extern const uint32_t XPathFunctionCount_Evaluate_m3112142283_MetadataUsageId;
extern String_t* _stringLiteral2004168744;
extern const uint32_t XPathFunctionCount_ToString_m3421511805_MetadataUsageId;
extern const RuntimeMethod* XPathFunctionFalse__ctor_m2774750232_RuntimeMethod_var;
extern String_t* _stringLiteral3380512006;
extern const uint32_t XPathFunctionFalse__ctor_m2774750232_MetadataUsageId;
extern const uint32_t XPathFunctionFalse_Evaluate_m3397563611_MetadataUsageId;
extern String_t* _stringLiteral824284122;
extern const uint32_t XPathFunctionFalse_ToString_m1579023707_MetadataUsageId;
extern const RuntimeMethod* XPathFunctionFloor__ctor_m3054856969_RuntimeMethod_var;
extern String_t* _stringLiteral700017691;
extern const uint32_t XPathFunctionFloor__ctor_m3054856969_MetadataUsageId;
extern const uint32_t XPathFunctionFloor_Evaluate_m2151195456_MetadataUsageId;
extern String_t* _stringLiteral1192082829;
extern const uint32_t XPathFunctionFloor_ToString_m734499080_MetadataUsageId;
extern const RuntimeMethod* XPathFunctionId__ctor_m1323120206_RuntimeMethod_var;
extern String_t* _stringLiteral3339079113;
extern const uint32_t XPathFunctionId__ctor_m1323120206_MetadataUsageId;
extern RuntimeClass* CharU5BU5D_t3528271667_il2cpp_TypeInfo_var;
extern RuntimeClass* XPathFunctionId_t1670301333_il2cpp_TypeInfo_var;
extern RuntimeField* U3CPrivateImplementationDetailsU3E_t3057255365____U24U24fieldU2D25_11_FieldInfo_var;
extern const uint32_t XPathFunctionId__cctor_m2442060195_MetadataUsageId;
extern String_t* _stringLiteral3452614528;
extern const uint32_t XPathFunctionId_Evaluate_m1064534490_MetadataUsageId;
extern String_t* _stringLiteral3433757753;
extern const uint32_t XPathFunctionId_ToString_m618647469_MetadataUsageId;
extern const RuntimeMethod* XPathFunctionLang__ctor_m322832727_RuntimeMethod_var;
extern String_t* _stringLiteral1394669554;
extern const uint32_t XPathFunctionLang__ctor_m322832727_MetadataUsageId;
extern const uint32_t XPathFunctionLang_Evaluate_m2296780426_MetadataUsageId;
extern const uint32_t XPathFunctionLang_EvaluateBoolean_m3046588839_MetadataUsageId;
extern String_t* _stringLiteral1215384150;
extern const uint32_t XPathFunctionLang_ToString_m3645362443_MetadataUsageId;
extern const RuntimeMethod* XPathFunctionLast__ctor_m3671084286_RuntimeMethod_var;
extern String_t* _stringLiteral4051814725;
extern const uint32_t XPathFunctionLast__ctor_m3671084286_MetadataUsageId;
extern const uint32_t XPathFunctionLast_Evaluate_m2799614158_MetadataUsageId;
extern String_t* _stringLiteral2748663725;
extern const uint32_t XPathFunctionLast_ToString_m2613003041_MetadataUsageId;
extern const RuntimeMethod* XPathFunctionLocalName__ctor_m3048811622_RuntimeMethod_var;
extern String_t* _stringLiteral651562640;
extern const uint32_t XPathFunctionLocalName__ctor_m3048811622_MetadataUsageId;
extern const uint32_t XPathFunctionLocalName_Evaluate_m1552558236_MetadataUsageId;
extern String_t* _stringLiteral3768247012;
extern const uint32_t XPathFunctionLocalName_ToString_m1679557188_MetadataUsageId;
extern const RuntimeMethod* XPathFunctionName__ctor_m4109215838_RuntimeMethod_var;
extern String_t* _stringLiteral1942329497;
extern const uint32_t XPathFunctionName__ctor_m4109215838_MetadataUsageId;
extern const uint32_t XPathFunctionName_Evaluate_m2337717151_MetadataUsageId;
extern String_t* _stringLiteral3163805097;
extern const uint32_t XPathFunctionName_ToString_m3643370704_MetadataUsageId;
extern const RuntimeMethod* XPathFunctionNamespaceUri__ctor_m3651514132_RuntimeMethod_var;
extern String_t* _stringLiteral971094376;
extern const uint32_t XPathFunctionNamespaceUri__ctor_m3651514132_MetadataUsageId;
extern const uint32_t XPathFunctionNamespaceUri_Evaluate_m2542015761_MetadataUsageId;
extern String_t* _stringLiteral991322771;
extern const uint32_t XPathFunctionNamespaceUri_ToString_m3306076830_MetadataUsageId;
extern const RuntimeMethod* XPathFunctionNormalizeSpace__ctor_m1765405179_RuntimeMethod_var;
extern String_t* _stringLiteral3250925953;
extern const uint32_t XPathFunctionNormalizeSpace__ctor_m1765405179_MetadataUsageId;
extern const uint32_t XPathFunctionNormalizeSpace_Evaluate_m2606127027_MetadataUsageId;
extern String_t* _stringLiteral2910145985;
extern const uint32_t XPathFunctionNormalizeSpace_ToString_m4050287499_MetadataUsageId;
extern const RuntimeMethod* XPathFunctionNot__ctor_m861869352_RuntimeMethod_var;
extern String_t* _stringLiteral1092937409;
extern const uint32_t XPathFunctionNot__ctor_m861869352_MetadataUsageId;
extern const uint32_t XPathFunctionNot_Evaluate_m1944058261_MetadataUsageId;
extern String_t* _stringLiteral2260534024;
extern const uint32_t XPathFunctionNot_ToString_m1470843148_MetadataUsageId;
extern const RuntimeMethod* XPathFunctionNumber__ctor_m2085021148_RuntimeMethod_var;
extern String_t* _stringLiteral3525153269;
extern const uint32_t XPathFunctionNumber__ctor_m2085021148_MetadataUsageId;
extern const uint32_t XPathFunctionNumber_Optimize_m2214207374_MetadataUsageId;
extern const uint32_t XPathFunctionNumber_Evaluate_m4083039742_MetadataUsageId;
extern String_t* _stringLiteral1435369858;
extern const uint32_t XPathFunctionNumber_ToString_m2497384949_MetadataUsageId;
extern const RuntimeMethod* XPathFunctionPosition__ctor_m1805758189_RuntimeMethod_var;
extern String_t* _stringLiteral993845230;
extern const uint32_t XPathFunctionPosition__ctor_m1805758189_MetadataUsageId;
extern const uint32_t XPathFunctionPosition_Evaluate_m1513540976_MetadataUsageId;
extern String_t* _stringLiteral3566002631;
extern const uint32_t XPathFunctionPosition_ToString_m3335228426_MetadataUsageId;
extern const RuntimeMethod* XPathFunctionRound__ctor_m2382310794_RuntimeMethod_var;
extern String_t* _stringLiteral2636821636;
extern const uint32_t XPathFunctionRound__ctor_m2382310794_MetadataUsageId;
extern const uint32_t XPathFunctionRound_Evaluate_m3101793594_MetadataUsageId;
extern String_t* _stringLiteral2004169193;
extern const uint32_t XPathFunctionRound_ToString_m3048388152_MetadataUsageId;
extern RuntimeClass* ArgumentNullException_t1615371798_il2cpp_TypeInfo_var;
extern RuntimeClass* ArgumentException_t132251570_il2cpp_TypeInfo_var;
extern const RuntimeMethod* XPathFunctions_ToBoolean_m1843756110_RuntimeMethod_var;
extern const uint32_t XPathFunctions_ToBoolean_m1843756110_MetadataUsageId;
extern const RuntimeMethod* XPathFunctions_ToString_m4087755365_RuntimeMethod_var;
extern String_t* _stringLiteral4002445229;
extern String_t* _stringLiteral3875954633;
extern const uint32_t XPathFunctions_ToString_m4087755365_MetadataUsageId;
extern RuntimeClass* NumberFormatInfo_t435877138_il2cpp_TypeInfo_var;
extern String_t* _stringLiteral2385296252;
extern String_t* _stringLiteral670053913;
extern String_t* _stringLiteral3452614638;
extern const uint32_t XPathFunctions_ToString_m1095398116_MetadataUsageId;
extern const RuntimeMethod* XPathFunctions_ToNumber_m1425546570_RuntimeMethod_var;
extern const uint32_t XPathFunctions_ToNumber_m1425546570_MetadataUsageId;
extern RuntimeClass* XmlChar_t3816087079_il2cpp_TypeInfo_var;
extern RuntimeClass* Char_t3634460470_il2cpp_TypeInfo_var;
extern RuntimeClass* OverflowException_t2020128637_il2cpp_TypeInfo_var;
extern RuntimeClass* FormatException_t154580423_il2cpp_TypeInfo_var;
extern const RuntimeMethod* XPathFunctions_ToNumber_m2526127645_RuntimeMethod_var;
extern const uint32_t XPathFunctions_ToNumber_m2526127645_MetadataUsageId;
extern const RuntimeMethod* XPathFunctionStartsWith__ctor_m2801198720_RuntimeMethod_var;
extern String_t* _stringLiteral2794776271;
extern const uint32_t XPathFunctionStartsWith__ctor_m2801198720_MetadataUsageId;
extern const uint32_t XPathFunctionStartsWith_Evaluate_m3179096284_MetadataUsageId;
extern String_t* _stringLiteral1831540344;
extern const uint32_t XPathFunctionStartsWith_ToString_m2048890216_MetadataUsageId;
extern const RuntimeMethod* XPathFunctionString__ctor_m3331743563_RuntimeMethod_var;
extern String_t* _stringLiteral3943582860;
extern const uint32_t XPathFunctionString__ctor_m3331743563_MetadataUsageId;
extern String_t* _stringLiteral1047468947;
extern const uint32_t XPathFunctionString_ToString_m2320118772_MetadataUsageId;
extern const RuntimeMethod* XPathFunctionStringLength__ctor_m11633624_RuntimeMethod_var;
extern String_t* _stringLiteral806674141;
extern const uint32_t XPathFunctionStringLength__ctor_m11633624_MetadataUsageId;
extern const uint32_t XPathFunctionStringLength_Evaluate_m2365164079_MetadataUsageId;
extern String_t* _stringLiteral2935813745;
extern const uint32_t XPathFunctionStringLength_ToString_m4264241574_MetadataUsageId;
extern const RuntimeMethod* XPathFunctionSubstring__ctor_m2264598349_RuntimeMethod_var;
extern String_t* _stringLiteral3298025644;
extern const uint32_t XPathFunctionSubstring__ctor_m2264598349_MetadataUsageId;
extern const uint32_t XPathFunctionSubstring_Evaluate_m515645369_MetadataUsageId;
extern String_t* _stringLiteral2886408229;
extern const uint32_t XPathFunctionSubstring_ToString_m2628232305_MetadataUsageId;
extern const RuntimeMethod* XPathFunctionSubstringAfter__ctor_m3597395567_RuntimeMethod_var;
extern String_t* _stringLiteral3682020502;
extern const uint32_t XPathFunctionSubstringAfter__ctor_m3597395567_MetadataUsageId;
extern const uint32_t XPathFunctionSubstringAfter_Evaluate_m3144494021_MetadataUsageId;
extern String_t* _stringLiteral3739159295;
extern const uint32_t XPathFunctionSubstringAfter_ToString_m508113573_MetadataUsageId;
extern const RuntimeMethod* XPathFunctionSubstringBefore__ctor_m91696614_RuntimeMethod_var;
extern String_t* _stringLiteral1496220073;
extern const uint32_t XPathFunctionSubstringBefore__ctor_m91696614_MetadataUsageId;
extern const uint32_t XPathFunctionSubstringBefore_Evaluate_m1178380643_MetadataUsageId;
extern String_t* _stringLiteral3263930909;
extern const uint32_t XPathFunctionSubstringBefore_ToString_m713324320_MetadataUsageId;
extern const RuntimeMethod* XPathFunctionSum__ctor_m1838306581_RuntimeMethod_var;
extern String_t* _stringLiteral1453273811;
extern const uint32_t XPathFunctionSum__ctor_m1838306581_MetadataUsageId;
extern const uint32_t XPathFunctionSum_Evaluate_m1100496780_MetadataUsageId;
extern String_t* _stringLiteral1051335814;
extern const uint32_t XPathFunctionSum_ToString_m476682059_MetadataUsageId;
extern const RuntimeMethod* XPathFunctionTranslate__ctor_m1010373577_RuntimeMethod_var;
extern String_t* _stringLiteral2740254051;
extern const uint32_t XPathFunctionTranslate__ctor_m1010373577_MetadataUsageId;
extern const uint32_t XPathFunctionTranslate_Evaluate_m2771955553_MetadataUsageId;
extern const uint32_t XPathFunctionTranslate_ToString_m3251102428_MetadataUsageId;
extern const RuntimeMethod* XPathFunctionTrue__ctor_m1481356079_RuntimeMethod_var;
extern String_t* _stringLiteral2025439055;
extern const uint32_t XPathFunctionTrue__ctor_m1481356079_MetadataUsageId;
extern const uint32_t XPathFunctionTrue_Evaluate_m3384943708_MetadataUsageId;
extern String_t* _stringLiteral2841653723;
extern const uint32_t XPathFunctionTrue_ToString_m484229129_MetadataUsageId;
extern const uint32_t XPathIteratorComparer__cctor_m1335301739_MetadataUsageId;
extern const uint32_t XPathIteratorComparer_Compare_m3538210468_MetadataUsageId;
extern RuntimeField* U3CPrivateImplementationDetailsU3E_t3057255365____U24U24fieldU2D18_9_FieldInfo_var;
extern const uint32_t XPathNavigator__cctor_m1289292593_MetadataUsageId;
extern String_t* _stringLiteral2409271576;
extern String_t* _stringLiteral2984480440;
extern const uint32_t XPathNavigator_get_XmlLang_m2712668103_MetadataUsageId;
extern const uint32_t XPathNavigator_MoveToAttribute_m1636857949_MetadataUsageId;
extern const uint32_t XPathNavigator_MoveToNamespace_m392163016_MetadataUsageId;
extern const uint32_t XPathNavigator_Select_m776519727_MetadataUsageId;
extern RuntimeClass* U3CEnumerateChildrenU3Ec__Iterator0_t404642154_il2cpp_TypeInfo_var;
extern const uint32_t XPathNavigator_EnumerateChildren_m3848257610_MetadataUsageId;
extern RuntimeClass* EnumerableIterator_t1590428576_il2cpp_TypeInfo_var;
extern const uint32_t XPathNavigator_SelectChildren_m3002173731_MetadataUsageId;
extern const uint32_t U3CEnumerateChildrenU3Ec__Iterator0_System_Collections_Generic_IEnumerableU3CobjectU3E_GetEnumerator_m2664109754_MetadataUsageId;
extern RuntimeClass* NotSupportedException_t1314879016_il2cpp_TypeInfo_var;
extern const RuntimeMethod* U3CEnumerateChildrenU3Ec__Iterator0_Reset_m3568231604_RuntimeMethod_var;
extern const uint32_t U3CEnumerateChildrenU3Ec__Iterator0_Reset_m3568231604_MetadataUsageId;
extern const uint32_t EnumerableIterator_Clone_m1053335037_MetadataUsageId;
extern RuntimeClass* IEnumerable_t1941168011_il2cpp_TypeInfo_var;
extern RuntimeClass* IEnumerator_t1853284238_il2cpp_TypeInfo_var;
extern const uint32_t EnumerableIterator_MoveNext_m1390725293_MetadataUsageId;
extern const uint32_t EnumerableIterator_get_Current_m2416282970_MetadataUsageId;
extern const uint32_t XPathNavigatorComparer__cctor_m3115965016_MetadataUsageId;
extern const uint32_t XPathNavigatorComparer_System_Collections_IEqualityComparer_Equals_m4007475784_MetadataUsageId;
extern const uint32_t XPathNavigatorComparer_Compare_m812493843_MetadataUsageId;
extern RuntimeClass* U3CGetEnumeratorU3Ec__Iterator2_t90454087_il2cpp_TypeInfo_var;
extern const uint32_t XPathNodeIterator_GetEnumerator_m117094251_MetadataUsageId;
extern const RuntimeMethod* U3CGetEnumeratorU3Ec__Iterator2_Reset_m3606261836_RuntimeMethod_var;
extern const uint32_t U3CGetEnumeratorU3Ec__Iterator2_Reset_m3606261836_MetadataUsageId;
extern const uint32_t XPathNumericFunction_get_StaticValue_m673646255_MetadataUsageId;
extern const uint32_t XPathSorter_Evaluate_m2305850354_MetadataUsageId;
extern RuntimeClass* IComparer_t1540313114_il2cpp_TypeInfo_var;
extern const uint32_t XPathSorter_Compare_m1410690161_MetadataUsageId;
extern RuntimeClass* XPathSortElement_t4237073177_il2cpp_TypeInfo_var;
extern RuntimeClass* XPathSorter_t36376808_il2cpp_TypeInfo_var;
extern const uint32_t XPathSorters_System_Collections_IComparer_Compare_m3602250543_MetadataUsageId;
extern const uint32_t XPathSorters_ToSortElementList_m992101952_MetadataUsageId;
extern RuntimeClass* XPathNavigatorU5BU5D_t3671675027_il2cpp_TypeInfo_var;
extern const uint32_t XPathSorters_Sort_m148301611_MetadataUsageId;

struct StringU5BU5D_t1281789340;
struct ObjectU5BU5D_t2843939325;
struct CharU5BU5D_t3528271667;
struct XPathNavigatorU5BU5D_t3671675027;
struct XPathResultTypeU5BU5D_t1515527577;


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
#ifndef SERIALIZATIONINFO_T950877179_H
#define SERIALIZATIONINFO_T950877179_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Serialization.SerializationInfo
struct  SerializationInfo_t950877179  : public RuntimeObject
{
public:
	// System.Collections.Hashtable System.Runtime.Serialization.SerializationInfo::serialized
	Hashtable_t1853889766 * ___serialized_0;
	// System.Collections.ArrayList System.Runtime.Serialization.SerializationInfo::values
	ArrayList_t2718874744 * ___values_1;
	// System.String System.Runtime.Serialization.SerializationInfo::assemblyName
	String_t* ___assemblyName_2;
	// System.String System.Runtime.Serialization.SerializationInfo::fullTypeName
	String_t* ___fullTypeName_3;
	// System.Runtime.Serialization.IFormatterConverter System.Runtime.Serialization.SerializationInfo::converter
	RuntimeObject* ___converter_4;

public:
	inline static int32_t get_offset_of_serialized_0() { return static_cast<int32_t>(offsetof(SerializationInfo_t950877179, ___serialized_0)); }
	inline Hashtable_t1853889766 * get_serialized_0() const { return ___serialized_0; }
	inline Hashtable_t1853889766 ** get_address_of_serialized_0() { return &___serialized_0; }
	inline void set_serialized_0(Hashtable_t1853889766 * value)
	{
		___serialized_0 = value;
		Il2CppCodeGenWriteBarrier((&___serialized_0), value);
	}

	inline static int32_t get_offset_of_values_1() { return static_cast<int32_t>(offsetof(SerializationInfo_t950877179, ___values_1)); }
	inline ArrayList_t2718874744 * get_values_1() const { return ___values_1; }
	inline ArrayList_t2718874744 ** get_address_of_values_1() { return &___values_1; }
	inline void set_values_1(ArrayList_t2718874744 * value)
	{
		___values_1 = value;
		Il2CppCodeGenWriteBarrier((&___values_1), value);
	}

	inline static int32_t get_offset_of_assemblyName_2() { return static_cast<int32_t>(offsetof(SerializationInfo_t950877179, ___assemblyName_2)); }
	inline String_t* get_assemblyName_2() const { return ___assemblyName_2; }
	inline String_t** get_address_of_assemblyName_2() { return &___assemblyName_2; }
	inline void set_assemblyName_2(String_t* value)
	{
		___assemblyName_2 = value;
		Il2CppCodeGenWriteBarrier((&___assemblyName_2), value);
	}

	inline static int32_t get_offset_of_fullTypeName_3() { return static_cast<int32_t>(offsetof(SerializationInfo_t950877179, ___fullTypeName_3)); }
	inline String_t* get_fullTypeName_3() const { return ___fullTypeName_3; }
	inline String_t** get_address_of_fullTypeName_3() { return &___fullTypeName_3; }
	inline void set_fullTypeName_3(String_t* value)
	{
		___fullTypeName_3 = value;
		Il2CppCodeGenWriteBarrier((&___fullTypeName_3), value);
	}

	inline static int32_t get_offset_of_converter_4() { return static_cast<int32_t>(offsetof(SerializationInfo_t950877179, ___converter_4)); }
	inline RuntimeObject* get_converter_4() const { return ___converter_4; }
	inline RuntimeObject** get_address_of_converter_4() { return &___converter_4; }
	inline void set_converter_4(RuntimeObject* value)
	{
		___converter_4 = value;
		Il2CppCodeGenWriteBarrier((&___converter_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SERIALIZATIONINFO_T950877179_H
#ifndef EXCEPTION_T_H
#define EXCEPTION_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Exception
struct  Exception_t  : public RuntimeObject
{
public:
	// System.IntPtr[] System.Exception::trace_ips
	IntPtrU5BU5D_t4013366056* ___trace_ips_0;
	// System.Exception System.Exception::inner_exception
	Exception_t * ___inner_exception_1;
	// System.String System.Exception::message
	String_t* ___message_2;
	// System.String System.Exception::help_link
	String_t* ___help_link_3;
	// System.String System.Exception::class_name
	String_t* ___class_name_4;
	// System.String System.Exception::stack_trace
	String_t* ___stack_trace_5;
	// System.String System.Exception::_remoteStackTraceString
	String_t* ____remoteStackTraceString_6;
	// System.Int32 System.Exception::remote_stack_index
	int32_t ___remote_stack_index_7;
	// System.Int32 System.Exception::hresult
	int32_t ___hresult_8;
	// System.String System.Exception::source
	String_t* ___source_9;
	// System.Collections.IDictionary System.Exception::_data
	RuntimeObject* ____data_10;

public:
	inline static int32_t get_offset_of_trace_ips_0() { return static_cast<int32_t>(offsetof(Exception_t, ___trace_ips_0)); }
	inline IntPtrU5BU5D_t4013366056* get_trace_ips_0() const { return ___trace_ips_0; }
	inline IntPtrU5BU5D_t4013366056** get_address_of_trace_ips_0() { return &___trace_ips_0; }
	inline void set_trace_ips_0(IntPtrU5BU5D_t4013366056* value)
	{
		___trace_ips_0 = value;
		Il2CppCodeGenWriteBarrier((&___trace_ips_0), value);
	}

	inline static int32_t get_offset_of_inner_exception_1() { return static_cast<int32_t>(offsetof(Exception_t, ___inner_exception_1)); }
	inline Exception_t * get_inner_exception_1() const { return ___inner_exception_1; }
	inline Exception_t ** get_address_of_inner_exception_1() { return &___inner_exception_1; }
	inline void set_inner_exception_1(Exception_t * value)
	{
		___inner_exception_1 = value;
		Il2CppCodeGenWriteBarrier((&___inner_exception_1), value);
	}

	inline static int32_t get_offset_of_message_2() { return static_cast<int32_t>(offsetof(Exception_t, ___message_2)); }
	inline String_t* get_message_2() const { return ___message_2; }
	inline String_t** get_address_of_message_2() { return &___message_2; }
	inline void set_message_2(String_t* value)
	{
		___message_2 = value;
		Il2CppCodeGenWriteBarrier((&___message_2), value);
	}

	inline static int32_t get_offset_of_help_link_3() { return static_cast<int32_t>(offsetof(Exception_t, ___help_link_3)); }
	inline String_t* get_help_link_3() const { return ___help_link_3; }
	inline String_t** get_address_of_help_link_3() { return &___help_link_3; }
	inline void set_help_link_3(String_t* value)
	{
		___help_link_3 = value;
		Il2CppCodeGenWriteBarrier((&___help_link_3), value);
	}

	inline static int32_t get_offset_of_class_name_4() { return static_cast<int32_t>(offsetof(Exception_t, ___class_name_4)); }
	inline String_t* get_class_name_4() const { return ___class_name_4; }
	inline String_t** get_address_of_class_name_4() { return &___class_name_4; }
	inline void set_class_name_4(String_t* value)
	{
		___class_name_4 = value;
		Il2CppCodeGenWriteBarrier((&___class_name_4), value);
	}

	inline static int32_t get_offset_of_stack_trace_5() { return static_cast<int32_t>(offsetof(Exception_t, ___stack_trace_5)); }
	inline String_t* get_stack_trace_5() const { return ___stack_trace_5; }
	inline String_t** get_address_of_stack_trace_5() { return &___stack_trace_5; }
	inline void set_stack_trace_5(String_t* value)
	{
		___stack_trace_5 = value;
		Il2CppCodeGenWriteBarrier((&___stack_trace_5), value);
	}

	inline static int32_t get_offset_of__remoteStackTraceString_6() { return static_cast<int32_t>(offsetof(Exception_t, ____remoteStackTraceString_6)); }
	inline String_t* get__remoteStackTraceString_6() const { return ____remoteStackTraceString_6; }
	inline String_t** get_address_of__remoteStackTraceString_6() { return &____remoteStackTraceString_6; }
	inline void set__remoteStackTraceString_6(String_t* value)
	{
		____remoteStackTraceString_6 = value;
		Il2CppCodeGenWriteBarrier((&____remoteStackTraceString_6), value);
	}

	inline static int32_t get_offset_of_remote_stack_index_7() { return static_cast<int32_t>(offsetof(Exception_t, ___remote_stack_index_7)); }
	inline int32_t get_remote_stack_index_7() const { return ___remote_stack_index_7; }
	inline int32_t* get_address_of_remote_stack_index_7() { return &___remote_stack_index_7; }
	inline void set_remote_stack_index_7(int32_t value)
	{
		___remote_stack_index_7 = value;
	}

	inline static int32_t get_offset_of_hresult_8() { return static_cast<int32_t>(offsetof(Exception_t, ___hresult_8)); }
	inline int32_t get_hresult_8() const { return ___hresult_8; }
	inline int32_t* get_address_of_hresult_8() { return &___hresult_8; }
	inline void set_hresult_8(int32_t value)
	{
		___hresult_8 = value;
	}

	inline static int32_t get_offset_of_source_9() { return static_cast<int32_t>(offsetof(Exception_t, ___source_9)); }
	inline String_t* get_source_9() const { return ___source_9; }
	inline String_t** get_address_of_source_9() { return &___source_9; }
	inline void set_source_9(String_t* value)
	{
		___source_9 = value;
		Il2CppCodeGenWriteBarrier((&___source_9), value);
	}

	inline static int32_t get_offset_of__data_10() { return static_cast<int32_t>(offsetof(Exception_t, ____data_10)); }
	inline RuntimeObject* get__data_10() const { return ____data_10; }
	inline RuntimeObject** get_address_of__data_10() { return &____data_10; }
	inline void set__data_10(RuntimeObject* value)
	{
		____data_10 = value;
		Il2CppCodeGenWriteBarrier((&____data_10), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EXCEPTION_T_H
#ifndef U3CGETENUMERATORU3EC__ITERATOR2_T90454087_H
#define U3CGETENUMERATORU3EC__ITERATOR2_T90454087_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.XPath.XPathNodeIterator/<GetEnumerator>c__Iterator2
struct  U3CGetEnumeratorU3Ec__Iterator2_t90454087  : public RuntimeObject
{
public:
	// System.Int32 System.Xml.XPath.XPathNodeIterator/<GetEnumerator>c__Iterator2::$PC
	int32_t ___U24PC_0;
	// System.Object System.Xml.XPath.XPathNodeIterator/<GetEnumerator>c__Iterator2::$current
	RuntimeObject * ___U24current_1;
	// System.Xml.XPath.XPathNodeIterator System.Xml.XPath.XPathNodeIterator/<GetEnumerator>c__Iterator2::<>f__this
	XPathNodeIterator_t3667290188 * ___U3CU3Ef__this_2;

public:
	inline static int32_t get_offset_of_U24PC_0() { return static_cast<int32_t>(offsetof(U3CGetEnumeratorU3Ec__Iterator2_t90454087, ___U24PC_0)); }
	inline int32_t get_U24PC_0() const { return ___U24PC_0; }
	inline int32_t* get_address_of_U24PC_0() { return &___U24PC_0; }
	inline void set_U24PC_0(int32_t value)
	{
		___U24PC_0 = value;
	}

	inline static int32_t get_offset_of_U24current_1() { return static_cast<int32_t>(offsetof(U3CGetEnumeratorU3Ec__Iterator2_t90454087, ___U24current_1)); }
	inline RuntimeObject * get_U24current_1() const { return ___U24current_1; }
	inline RuntimeObject ** get_address_of_U24current_1() { return &___U24current_1; }
	inline void set_U24current_1(RuntimeObject * value)
	{
		___U24current_1 = value;
		Il2CppCodeGenWriteBarrier((&___U24current_1), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__this_2() { return static_cast<int32_t>(offsetof(U3CGetEnumeratorU3Ec__Iterator2_t90454087, ___U3CU3Ef__this_2)); }
	inline XPathNodeIterator_t3667290188 * get_U3CU3Ef__this_2() const { return ___U3CU3Ef__this_2; }
	inline XPathNodeIterator_t3667290188 ** get_address_of_U3CU3Ef__this_2() { return &___U3CU3Ef__this_2; }
	inline void set_U3CU3Ef__this_2(XPathNodeIterator_t3667290188 * value)
	{
		___U3CU3Ef__this_2 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__this_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CGETENUMERATORU3EC__ITERATOR2_T90454087_H
#ifndef XPATHNODEITERATOR_T3667290188_H
#define XPATHNODEITERATOR_T3667290188_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.XPath.XPathNodeIterator
struct  XPathNodeIterator_t3667290188  : public RuntimeObject
{
public:
	// System.Int32 System.Xml.XPath.XPathNodeIterator::_count
	int32_t ____count_0;

public:
	inline static int32_t get_offset_of__count_0() { return static_cast<int32_t>(offsetof(XPathNodeIterator_t3667290188, ____count_0)); }
	inline int32_t get__count_0() const { return ____count_0; }
	inline int32_t* get_address_of__count_0() { return &____count_0; }
	inline void set__count_0(int32_t value)
	{
		____count_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // XPATHNODEITERATOR_T3667290188_H
#ifndef XPATHSORTELEMENT_T4237073177_H
#define XPATHSORTELEMENT_T4237073177_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.XPath.XPathSortElement
struct  XPathSortElement_t4237073177  : public RuntimeObject
{
public:
	// System.Xml.XPath.XPathNavigator System.Xml.XPath.XPathSortElement::Navigator
	XPathNavigator_t787956054 * ___Navigator_0;
	// System.Object[] System.Xml.XPath.XPathSortElement::Values
	ObjectU5BU5D_t2843939325* ___Values_1;

public:
	inline static int32_t get_offset_of_Navigator_0() { return static_cast<int32_t>(offsetof(XPathSortElement_t4237073177, ___Navigator_0)); }
	inline XPathNavigator_t787956054 * get_Navigator_0() const { return ___Navigator_0; }
	inline XPathNavigator_t787956054 ** get_address_of_Navigator_0() { return &___Navigator_0; }
	inline void set_Navigator_0(XPathNavigator_t787956054 * value)
	{
		___Navigator_0 = value;
		Il2CppCodeGenWriteBarrier((&___Navigator_0), value);
	}

	inline static int32_t get_offset_of_Values_1() { return static_cast<int32_t>(offsetof(XPathSortElement_t4237073177, ___Values_1)); }
	inline ObjectU5BU5D_t2843939325* get_Values_1() const { return ___Values_1; }
	inline ObjectU5BU5D_t2843939325** get_address_of_Values_1() { return &___Values_1; }
	inline void set_Values_1(ObjectU5BU5D_t2843939325* value)
	{
		___Values_1 = value;
		Il2CppCodeGenWriteBarrier((&___Values_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // XPATHSORTELEMENT_T4237073177_H
#ifndef XPATHSORTERS_T698127628_H
#define XPATHSORTERS_T698127628_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.XPath.XPathSorters
struct  XPathSorters_t698127628  : public RuntimeObject
{
public:
	// System.Collections.ArrayList System.Xml.XPath.XPathSorters::_rgSorters
	ArrayList_t2718874744 * ____rgSorters_0;

public:
	inline static int32_t get_offset_of__rgSorters_0() { return static_cast<int32_t>(offsetof(XPathSorters_t698127628, ____rgSorters_0)); }
	inline ArrayList_t2718874744 * get__rgSorters_0() const { return ____rgSorters_0; }
	inline ArrayList_t2718874744 ** get_address_of__rgSorters_0() { return &____rgSorters_0; }
	inline void set__rgSorters_0(ArrayList_t2718874744 * value)
	{
		____rgSorters_0 = value;
		Il2CppCodeGenWriteBarrier((&____rgSorters_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // XPATHSORTERS_T698127628_H
#ifndef CULTUREINFO_T4157843068_H
#define CULTUREINFO_T4157843068_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Globalization.CultureInfo
struct  CultureInfo_t4157843068  : public RuntimeObject
{
public:
	// System.Boolean System.Globalization.CultureInfo::m_isReadOnly
	bool ___m_isReadOnly_7;
	// System.Int32 System.Globalization.CultureInfo::cultureID
	int32_t ___cultureID_8;
	// System.Int32 System.Globalization.CultureInfo::parent_lcid
	int32_t ___parent_lcid_9;
	// System.Int32 System.Globalization.CultureInfo::specific_lcid
	int32_t ___specific_lcid_10;
	// System.Int32 System.Globalization.CultureInfo::datetime_index
	int32_t ___datetime_index_11;
	// System.Int32 System.Globalization.CultureInfo::number_index
	int32_t ___number_index_12;
	// System.Boolean System.Globalization.CultureInfo::m_useUserOverride
	bool ___m_useUserOverride_13;
	// System.Globalization.NumberFormatInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::numInfo
	NumberFormatInfo_t435877138 * ___numInfo_14;
	// System.Globalization.DateTimeFormatInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::dateTimeInfo
	DateTimeFormatInfo_t2405853701 * ___dateTimeInfo_15;
	// System.Globalization.TextInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::textInfo
	TextInfo_t3810425522 * ___textInfo_16;
	// System.String System.Globalization.CultureInfo::m_name
	String_t* ___m_name_17;
	// System.String System.Globalization.CultureInfo::displayname
	String_t* ___displayname_18;
	// System.String System.Globalization.CultureInfo::englishname
	String_t* ___englishname_19;
	// System.String System.Globalization.CultureInfo::nativename
	String_t* ___nativename_20;
	// System.String System.Globalization.CultureInfo::iso3lang
	String_t* ___iso3lang_21;
	// System.String System.Globalization.CultureInfo::iso2lang
	String_t* ___iso2lang_22;
	// System.String System.Globalization.CultureInfo::icu_name
	String_t* ___icu_name_23;
	// System.String System.Globalization.CultureInfo::win3lang
	String_t* ___win3lang_24;
	// System.String System.Globalization.CultureInfo::territory
	String_t* ___territory_25;
	// System.Globalization.CompareInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::compareInfo
	CompareInfo_t1092934962 * ___compareInfo_26;
	// System.Int32* System.Globalization.CultureInfo::calendar_data
	int32_t* ___calendar_data_27;
	// System.Void* System.Globalization.CultureInfo::textinfo_data
	void* ___textinfo_data_28;
	// System.Globalization.Calendar[] System.Globalization.CultureInfo::optional_calendars
	CalendarU5BU5D_t3985046076* ___optional_calendars_29;
	// System.Globalization.CultureInfo System.Globalization.CultureInfo::parent_culture
	CultureInfo_t4157843068 * ___parent_culture_30;
	// System.Int32 System.Globalization.CultureInfo::m_dataItem
	int32_t ___m_dataItem_31;
	// System.Globalization.Calendar System.Globalization.CultureInfo::calendar
	Calendar_t1661121569 * ___calendar_32;
	// System.Boolean System.Globalization.CultureInfo::constructed
	bool ___constructed_33;
	// System.Byte[] System.Globalization.CultureInfo::cached_serialized_form
	ByteU5BU5D_t4116647657* ___cached_serialized_form_34;

public:
	inline static int32_t get_offset_of_m_isReadOnly_7() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068, ___m_isReadOnly_7)); }
	inline bool get_m_isReadOnly_7() const { return ___m_isReadOnly_7; }
	inline bool* get_address_of_m_isReadOnly_7() { return &___m_isReadOnly_7; }
	inline void set_m_isReadOnly_7(bool value)
	{
		___m_isReadOnly_7 = value;
	}

	inline static int32_t get_offset_of_cultureID_8() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068, ___cultureID_8)); }
	inline int32_t get_cultureID_8() const { return ___cultureID_8; }
	inline int32_t* get_address_of_cultureID_8() { return &___cultureID_8; }
	inline void set_cultureID_8(int32_t value)
	{
		___cultureID_8 = value;
	}

	inline static int32_t get_offset_of_parent_lcid_9() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068, ___parent_lcid_9)); }
	inline int32_t get_parent_lcid_9() const { return ___parent_lcid_9; }
	inline int32_t* get_address_of_parent_lcid_9() { return &___parent_lcid_9; }
	inline void set_parent_lcid_9(int32_t value)
	{
		___parent_lcid_9 = value;
	}

	inline static int32_t get_offset_of_specific_lcid_10() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068, ___specific_lcid_10)); }
	inline int32_t get_specific_lcid_10() const { return ___specific_lcid_10; }
	inline int32_t* get_address_of_specific_lcid_10() { return &___specific_lcid_10; }
	inline void set_specific_lcid_10(int32_t value)
	{
		___specific_lcid_10 = value;
	}

	inline static int32_t get_offset_of_datetime_index_11() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068, ___datetime_index_11)); }
	inline int32_t get_datetime_index_11() const { return ___datetime_index_11; }
	inline int32_t* get_address_of_datetime_index_11() { return &___datetime_index_11; }
	inline void set_datetime_index_11(int32_t value)
	{
		___datetime_index_11 = value;
	}

	inline static int32_t get_offset_of_number_index_12() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068, ___number_index_12)); }
	inline int32_t get_number_index_12() const { return ___number_index_12; }
	inline int32_t* get_address_of_number_index_12() { return &___number_index_12; }
	inline void set_number_index_12(int32_t value)
	{
		___number_index_12 = value;
	}

	inline static int32_t get_offset_of_m_useUserOverride_13() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068, ___m_useUserOverride_13)); }
	inline bool get_m_useUserOverride_13() const { return ___m_useUserOverride_13; }
	inline bool* get_address_of_m_useUserOverride_13() { return &___m_useUserOverride_13; }
	inline void set_m_useUserOverride_13(bool value)
	{
		___m_useUserOverride_13 = value;
	}

	inline static int32_t get_offset_of_numInfo_14() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068, ___numInfo_14)); }
	inline NumberFormatInfo_t435877138 * get_numInfo_14() const { return ___numInfo_14; }
	inline NumberFormatInfo_t435877138 ** get_address_of_numInfo_14() { return &___numInfo_14; }
	inline void set_numInfo_14(NumberFormatInfo_t435877138 * value)
	{
		___numInfo_14 = value;
		Il2CppCodeGenWriteBarrier((&___numInfo_14), value);
	}

	inline static int32_t get_offset_of_dateTimeInfo_15() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068, ___dateTimeInfo_15)); }
	inline DateTimeFormatInfo_t2405853701 * get_dateTimeInfo_15() const { return ___dateTimeInfo_15; }
	inline DateTimeFormatInfo_t2405853701 ** get_address_of_dateTimeInfo_15() { return &___dateTimeInfo_15; }
	inline void set_dateTimeInfo_15(DateTimeFormatInfo_t2405853701 * value)
	{
		___dateTimeInfo_15 = value;
		Il2CppCodeGenWriteBarrier((&___dateTimeInfo_15), value);
	}

	inline static int32_t get_offset_of_textInfo_16() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068, ___textInfo_16)); }
	inline TextInfo_t3810425522 * get_textInfo_16() const { return ___textInfo_16; }
	inline TextInfo_t3810425522 ** get_address_of_textInfo_16() { return &___textInfo_16; }
	inline void set_textInfo_16(TextInfo_t3810425522 * value)
	{
		___textInfo_16 = value;
		Il2CppCodeGenWriteBarrier((&___textInfo_16), value);
	}

	inline static int32_t get_offset_of_m_name_17() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068, ___m_name_17)); }
	inline String_t* get_m_name_17() const { return ___m_name_17; }
	inline String_t** get_address_of_m_name_17() { return &___m_name_17; }
	inline void set_m_name_17(String_t* value)
	{
		___m_name_17 = value;
		Il2CppCodeGenWriteBarrier((&___m_name_17), value);
	}

	inline static int32_t get_offset_of_displayname_18() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068, ___displayname_18)); }
	inline String_t* get_displayname_18() const { return ___displayname_18; }
	inline String_t** get_address_of_displayname_18() { return &___displayname_18; }
	inline void set_displayname_18(String_t* value)
	{
		___displayname_18 = value;
		Il2CppCodeGenWriteBarrier((&___displayname_18), value);
	}

	inline static int32_t get_offset_of_englishname_19() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068, ___englishname_19)); }
	inline String_t* get_englishname_19() const { return ___englishname_19; }
	inline String_t** get_address_of_englishname_19() { return &___englishname_19; }
	inline void set_englishname_19(String_t* value)
	{
		___englishname_19 = value;
		Il2CppCodeGenWriteBarrier((&___englishname_19), value);
	}

	inline static int32_t get_offset_of_nativename_20() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068, ___nativename_20)); }
	inline String_t* get_nativename_20() const { return ___nativename_20; }
	inline String_t** get_address_of_nativename_20() { return &___nativename_20; }
	inline void set_nativename_20(String_t* value)
	{
		___nativename_20 = value;
		Il2CppCodeGenWriteBarrier((&___nativename_20), value);
	}

	inline static int32_t get_offset_of_iso3lang_21() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068, ___iso3lang_21)); }
	inline String_t* get_iso3lang_21() const { return ___iso3lang_21; }
	inline String_t** get_address_of_iso3lang_21() { return &___iso3lang_21; }
	inline void set_iso3lang_21(String_t* value)
	{
		___iso3lang_21 = value;
		Il2CppCodeGenWriteBarrier((&___iso3lang_21), value);
	}

	inline static int32_t get_offset_of_iso2lang_22() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068, ___iso2lang_22)); }
	inline String_t* get_iso2lang_22() const { return ___iso2lang_22; }
	inline String_t** get_address_of_iso2lang_22() { return &___iso2lang_22; }
	inline void set_iso2lang_22(String_t* value)
	{
		___iso2lang_22 = value;
		Il2CppCodeGenWriteBarrier((&___iso2lang_22), value);
	}

	inline static int32_t get_offset_of_icu_name_23() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068, ___icu_name_23)); }
	inline String_t* get_icu_name_23() const { return ___icu_name_23; }
	inline String_t** get_address_of_icu_name_23() { return &___icu_name_23; }
	inline void set_icu_name_23(String_t* value)
	{
		___icu_name_23 = value;
		Il2CppCodeGenWriteBarrier((&___icu_name_23), value);
	}

	inline static int32_t get_offset_of_win3lang_24() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068, ___win3lang_24)); }
	inline String_t* get_win3lang_24() const { return ___win3lang_24; }
	inline String_t** get_address_of_win3lang_24() { return &___win3lang_24; }
	inline void set_win3lang_24(String_t* value)
	{
		___win3lang_24 = value;
		Il2CppCodeGenWriteBarrier((&___win3lang_24), value);
	}

	inline static int32_t get_offset_of_territory_25() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068, ___territory_25)); }
	inline String_t* get_territory_25() const { return ___territory_25; }
	inline String_t** get_address_of_territory_25() { return &___territory_25; }
	inline void set_territory_25(String_t* value)
	{
		___territory_25 = value;
		Il2CppCodeGenWriteBarrier((&___territory_25), value);
	}

	inline static int32_t get_offset_of_compareInfo_26() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068, ___compareInfo_26)); }
	inline CompareInfo_t1092934962 * get_compareInfo_26() const { return ___compareInfo_26; }
	inline CompareInfo_t1092934962 ** get_address_of_compareInfo_26() { return &___compareInfo_26; }
	inline void set_compareInfo_26(CompareInfo_t1092934962 * value)
	{
		___compareInfo_26 = value;
		Il2CppCodeGenWriteBarrier((&___compareInfo_26), value);
	}

	inline static int32_t get_offset_of_calendar_data_27() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068, ___calendar_data_27)); }
	inline int32_t* get_calendar_data_27() const { return ___calendar_data_27; }
	inline int32_t** get_address_of_calendar_data_27() { return &___calendar_data_27; }
	inline void set_calendar_data_27(int32_t* value)
	{
		___calendar_data_27 = value;
	}

	inline static int32_t get_offset_of_textinfo_data_28() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068, ___textinfo_data_28)); }
	inline void* get_textinfo_data_28() const { return ___textinfo_data_28; }
	inline void** get_address_of_textinfo_data_28() { return &___textinfo_data_28; }
	inline void set_textinfo_data_28(void* value)
	{
		___textinfo_data_28 = value;
	}

	inline static int32_t get_offset_of_optional_calendars_29() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068, ___optional_calendars_29)); }
	inline CalendarU5BU5D_t3985046076* get_optional_calendars_29() const { return ___optional_calendars_29; }
	inline CalendarU5BU5D_t3985046076** get_address_of_optional_calendars_29() { return &___optional_calendars_29; }
	inline void set_optional_calendars_29(CalendarU5BU5D_t3985046076* value)
	{
		___optional_calendars_29 = value;
		Il2CppCodeGenWriteBarrier((&___optional_calendars_29), value);
	}

	inline static int32_t get_offset_of_parent_culture_30() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068, ___parent_culture_30)); }
	inline CultureInfo_t4157843068 * get_parent_culture_30() const { return ___parent_culture_30; }
	inline CultureInfo_t4157843068 ** get_address_of_parent_culture_30() { return &___parent_culture_30; }
	inline void set_parent_culture_30(CultureInfo_t4157843068 * value)
	{
		___parent_culture_30 = value;
		Il2CppCodeGenWriteBarrier((&___parent_culture_30), value);
	}

	inline static int32_t get_offset_of_m_dataItem_31() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068, ___m_dataItem_31)); }
	inline int32_t get_m_dataItem_31() const { return ___m_dataItem_31; }
	inline int32_t* get_address_of_m_dataItem_31() { return &___m_dataItem_31; }
	inline void set_m_dataItem_31(int32_t value)
	{
		___m_dataItem_31 = value;
	}

	inline static int32_t get_offset_of_calendar_32() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068, ___calendar_32)); }
	inline Calendar_t1661121569 * get_calendar_32() const { return ___calendar_32; }
	inline Calendar_t1661121569 ** get_address_of_calendar_32() { return &___calendar_32; }
	inline void set_calendar_32(Calendar_t1661121569 * value)
	{
		___calendar_32 = value;
		Il2CppCodeGenWriteBarrier((&___calendar_32), value);
	}

	inline static int32_t get_offset_of_constructed_33() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068, ___constructed_33)); }
	inline bool get_constructed_33() const { return ___constructed_33; }
	inline bool* get_address_of_constructed_33() { return &___constructed_33; }
	inline void set_constructed_33(bool value)
	{
		___constructed_33 = value;
	}

	inline static int32_t get_offset_of_cached_serialized_form_34() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068, ___cached_serialized_form_34)); }
	inline ByteU5BU5D_t4116647657* get_cached_serialized_form_34() const { return ___cached_serialized_form_34; }
	inline ByteU5BU5D_t4116647657** get_address_of_cached_serialized_form_34() { return &___cached_serialized_form_34; }
	inline void set_cached_serialized_form_34(ByteU5BU5D_t4116647657* value)
	{
		___cached_serialized_form_34 = value;
		Il2CppCodeGenWriteBarrier((&___cached_serialized_form_34), value);
	}
};

struct CultureInfo_t4157843068_StaticFields
{
public:
	// System.Globalization.CultureInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::invariant_culture_info
	CultureInfo_t4157843068 * ___invariant_culture_info_4;
	// System.Object System.Globalization.CultureInfo::shared_table_lock
	RuntimeObject * ___shared_table_lock_5;
	// System.Int32 System.Globalization.CultureInfo::BootstrapCultureID
	int32_t ___BootstrapCultureID_6;
	// System.String System.Globalization.CultureInfo::MSG_READONLY
	String_t* ___MSG_READONLY_35;
	// System.Collections.Hashtable System.Globalization.CultureInfo::shared_by_number
	Hashtable_t1853889766 * ___shared_by_number_36;
	// System.Collections.Hashtable System.Globalization.CultureInfo::shared_by_name
	Hashtable_t1853889766 * ___shared_by_name_37;
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> System.Globalization.CultureInfo::<>f__switch$map19
	Dictionary_2_t2736202052 * ___U3CU3Ef__switchU24map19_38;
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> System.Globalization.CultureInfo::<>f__switch$map1A
	Dictionary_2_t2736202052 * ___U3CU3Ef__switchU24map1A_39;

public:
	inline static int32_t get_offset_of_invariant_culture_info_4() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068_StaticFields, ___invariant_culture_info_4)); }
	inline CultureInfo_t4157843068 * get_invariant_culture_info_4() const { return ___invariant_culture_info_4; }
	inline CultureInfo_t4157843068 ** get_address_of_invariant_culture_info_4() { return &___invariant_culture_info_4; }
	inline void set_invariant_culture_info_4(CultureInfo_t4157843068 * value)
	{
		___invariant_culture_info_4 = value;
		Il2CppCodeGenWriteBarrier((&___invariant_culture_info_4), value);
	}

	inline static int32_t get_offset_of_shared_table_lock_5() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068_StaticFields, ___shared_table_lock_5)); }
	inline RuntimeObject * get_shared_table_lock_5() const { return ___shared_table_lock_5; }
	inline RuntimeObject ** get_address_of_shared_table_lock_5() { return &___shared_table_lock_5; }
	inline void set_shared_table_lock_5(RuntimeObject * value)
	{
		___shared_table_lock_5 = value;
		Il2CppCodeGenWriteBarrier((&___shared_table_lock_5), value);
	}

	inline static int32_t get_offset_of_BootstrapCultureID_6() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068_StaticFields, ___BootstrapCultureID_6)); }
	inline int32_t get_BootstrapCultureID_6() const { return ___BootstrapCultureID_6; }
	inline int32_t* get_address_of_BootstrapCultureID_6() { return &___BootstrapCultureID_6; }
	inline void set_BootstrapCultureID_6(int32_t value)
	{
		___BootstrapCultureID_6 = value;
	}

	inline static int32_t get_offset_of_MSG_READONLY_35() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068_StaticFields, ___MSG_READONLY_35)); }
	inline String_t* get_MSG_READONLY_35() const { return ___MSG_READONLY_35; }
	inline String_t** get_address_of_MSG_READONLY_35() { return &___MSG_READONLY_35; }
	inline void set_MSG_READONLY_35(String_t* value)
	{
		___MSG_READONLY_35 = value;
		Il2CppCodeGenWriteBarrier((&___MSG_READONLY_35), value);
	}

	inline static int32_t get_offset_of_shared_by_number_36() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068_StaticFields, ___shared_by_number_36)); }
	inline Hashtable_t1853889766 * get_shared_by_number_36() const { return ___shared_by_number_36; }
	inline Hashtable_t1853889766 ** get_address_of_shared_by_number_36() { return &___shared_by_number_36; }
	inline void set_shared_by_number_36(Hashtable_t1853889766 * value)
	{
		___shared_by_number_36 = value;
		Il2CppCodeGenWriteBarrier((&___shared_by_number_36), value);
	}

	inline static int32_t get_offset_of_shared_by_name_37() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068_StaticFields, ___shared_by_name_37)); }
	inline Hashtable_t1853889766 * get_shared_by_name_37() const { return ___shared_by_name_37; }
	inline Hashtable_t1853889766 ** get_address_of_shared_by_name_37() { return &___shared_by_name_37; }
	inline void set_shared_by_name_37(Hashtable_t1853889766 * value)
	{
		___shared_by_name_37 = value;
		Il2CppCodeGenWriteBarrier((&___shared_by_name_37), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__switchU24map19_38() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068_StaticFields, ___U3CU3Ef__switchU24map19_38)); }
	inline Dictionary_2_t2736202052 * get_U3CU3Ef__switchU24map19_38() const { return ___U3CU3Ef__switchU24map19_38; }
	inline Dictionary_2_t2736202052 ** get_address_of_U3CU3Ef__switchU24map19_38() { return &___U3CU3Ef__switchU24map19_38; }
	inline void set_U3CU3Ef__switchU24map19_38(Dictionary_2_t2736202052 * value)
	{
		___U3CU3Ef__switchU24map19_38 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__switchU24map19_38), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__switchU24map1A_39() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068_StaticFields, ___U3CU3Ef__switchU24map1A_39)); }
	inline Dictionary_2_t2736202052 * get_U3CU3Ef__switchU24map1A_39() const { return ___U3CU3Ef__switchU24map1A_39; }
	inline Dictionary_2_t2736202052 ** get_address_of_U3CU3Ef__switchU24map1A_39() { return &___U3CU3Ef__switchU24map1A_39; }
	inline void set_U3CU3Ef__switchU24map1A_39(Dictionary_2_t2736202052 * value)
	{
		___U3CU3Ef__switchU24map1A_39 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__switchU24map1A_39), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CULTUREINFO_T4157843068_H
#ifndef XMLNAMESPACEMANAGER_T418790500_H
#define XMLNAMESPACEMANAGER_T418790500_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.XmlNamespaceManager
struct  XmlNamespaceManager_t418790500  : public RuntimeObject
{
public:
	// System.Xml.XmlNamespaceManager/NsDecl[] System.Xml.XmlNamespaceManager::decls
	NsDeclU5BU5D_t2116608150* ___decls_0;
	// System.Int32 System.Xml.XmlNamespaceManager::declPos
	int32_t ___declPos_1;
	// System.Xml.XmlNamespaceManager/NsScope[] System.Xml.XmlNamespaceManager::scopes
	NsScopeU5BU5D_t382374428* ___scopes_2;
	// System.Int32 System.Xml.XmlNamespaceManager::scopePos
	int32_t ___scopePos_3;
	// System.String System.Xml.XmlNamespaceManager::defaultNamespace
	String_t* ___defaultNamespace_4;
	// System.Int32 System.Xml.XmlNamespaceManager::count
	int32_t ___count_5;
	// System.Xml.XmlNameTable System.Xml.XmlNamespaceManager::nameTable
	XmlNameTable_t71772148 * ___nameTable_6;
	// System.Boolean System.Xml.XmlNamespaceManager::internalAtomizedNames
	bool ___internalAtomizedNames_7;

public:
	inline static int32_t get_offset_of_decls_0() { return static_cast<int32_t>(offsetof(XmlNamespaceManager_t418790500, ___decls_0)); }
	inline NsDeclU5BU5D_t2116608150* get_decls_0() const { return ___decls_0; }
	inline NsDeclU5BU5D_t2116608150** get_address_of_decls_0() { return &___decls_0; }
	inline void set_decls_0(NsDeclU5BU5D_t2116608150* value)
	{
		___decls_0 = value;
		Il2CppCodeGenWriteBarrier((&___decls_0), value);
	}

	inline static int32_t get_offset_of_declPos_1() { return static_cast<int32_t>(offsetof(XmlNamespaceManager_t418790500, ___declPos_1)); }
	inline int32_t get_declPos_1() const { return ___declPos_1; }
	inline int32_t* get_address_of_declPos_1() { return &___declPos_1; }
	inline void set_declPos_1(int32_t value)
	{
		___declPos_1 = value;
	}

	inline static int32_t get_offset_of_scopes_2() { return static_cast<int32_t>(offsetof(XmlNamespaceManager_t418790500, ___scopes_2)); }
	inline NsScopeU5BU5D_t382374428* get_scopes_2() const { return ___scopes_2; }
	inline NsScopeU5BU5D_t382374428** get_address_of_scopes_2() { return &___scopes_2; }
	inline void set_scopes_2(NsScopeU5BU5D_t382374428* value)
	{
		___scopes_2 = value;
		Il2CppCodeGenWriteBarrier((&___scopes_2), value);
	}

	inline static int32_t get_offset_of_scopePos_3() { return static_cast<int32_t>(offsetof(XmlNamespaceManager_t418790500, ___scopePos_3)); }
	inline int32_t get_scopePos_3() const { return ___scopePos_3; }
	inline int32_t* get_address_of_scopePos_3() { return &___scopePos_3; }
	inline void set_scopePos_3(int32_t value)
	{
		___scopePos_3 = value;
	}

	inline static int32_t get_offset_of_defaultNamespace_4() { return static_cast<int32_t>(offsetof(XmlNamespaceManager_t418790500, ___defaultNamespace_4)); }
	inline String_t* get_defaultNamespace_4() const { return ___defaultNamespace_4; }
	inline String_t** get_address_of_defaultNamespace_4() { return &___defaultNamespace_4; }
	inline void set_defaultNamespace_4(String_t* value)
	{
		___defaultNamespace_4 = value;
		Il2CppCodeGenWriteBarrier((&___defaultNamespace_4), value);
	}

	inline static int32_t get_offset_of_count_5() { return static_cast<int32_t>(offsetof(XmlNamespaceManager_t418790500, ___count_5)); }
	inline int32_t get_count_5() const { return ___count_5; }
	inline int32_t* get_address_of_count_5() { return &___count_5; }
	inline void set_count_5(int32_t value)
	{
		___count_5 = value;
	}

	inline static int32_t get_offset_of_nameTable_6() { return static_cast<int32_t>(offsetof(XmlNamespaceManager_t418790500, ___nameTable_6)); }
	inline XmlNameTable_t71772148 * get_nameTable_6() const { return ___nameTable_6; }
	inline XmlNameTable_t71772148 ** get_address_of_nameTable_6() { return &___nameTable_6; }
	inline void set_nameTable_6(XmlNameTable_t71772148 * value)
	{
		___nameTable_6 = value;
		Il2CppCodeGenWriteBarrier((&___nameTable_6), value);
	}

	inline static int32_t get_offset_of_internalAtomizedNames_7() { return static_cast<int32_t>(offsetof(XmlNamespaceManager_t418790500, ___internalAtomizedNames_7)); }
	inline bool get_internalAtomizedNames_7() const { return ___internalAtomizedNames_7; }
	inline bool* get_address_of_internalAtomizedNames_7() { return &___internalAtomizedNames_7; }
	inline void set_internalAtomizedNames_7(bool value)
	{
		___internalAtomizedNames_7 = value;
	}
};

struct XmlNamespaceManager_t418790500_StaticFields
{
public:
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> System.Xml.XmlNamespaceManager::<>f__switch$map28
	Dictionary_2_t2736202052 * ___U3CU3Ef__switchU24map28_8;

public:
	inline static int32_t get_offset_of_U3CU3Ef__switchU24map28_8() { return static_cast<int32_t>(offsetof(XmlNamespaceManager_t418790500_StaticFields, ___U3CU3Ef__switchU24map28_8)); }
	inline Dictionary_2_t2736202052 * get_U3CU3Ef__switchU24map28_8() const { return ___U3CU3Ef__switchU24map28_8; }
	inline Dictionary_2_t2736202052 ** get_address_of_U3CU3Ef__switchU24map28_8() { return &___U3CU3Ef__switchU24map28_8; }
	inline void set_U3CU3Ef__switchU24map28_8(Dictionary_2_t2736202052 * value)
	{
		___U3CU3Ef__switchU24map28_8 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__switchU24map28_8), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // XMLNAMESPACEMANAGER_T418790500_H
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
#ifndef XPATHEXPRESSION_T1723793351_H
#define XPATHEXPRESSION_T1723793351_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.XPath.XPathExpression
struct  XPathExpression_t1723793351  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // XPATHEXPRESSION_T1723793351_H
#ifndef STRINGBUILDER_T_H
#define STRINGBUILDER_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Text.StringBuilder
struct  StringBuilder_t  : public RuntimeObject
{
public:
	// System.Int32 System.Text.StringBuilder::_length
	int32_t ____length_1;
	// System.String System.Text.StringBuilder::_str
	String_t* ____str_2;
	// System.String System.Text.StringBuilder::_cached_str
	String_t* ____cached_str_3;
	// System.Int32 System.Text.StringBuilder::_maxCapacity
	int32_t ____maxCapacity_4;

public:
	inline static int32_t get_offset_of__length_1() { return static_cast<int32_t>(offsetof(StringBuilder_t, ____length_1)); }
	inline int32_t get__length_1() const { return ____length_1; }
	inline int32_t* get_address_of__length_1() { return &____length_1; }
	inline void set__length_1(int32_t value)
	{
		____length_1 = value;
	}

	inline static int32_t get_offset_of__str_2() { return static_cast<int32_t>(offsetof(StringBuilder_t, ____str_2)); }
	inline String_t* get__str_2() const { return ____str_2; }
	inline String_t** get_address_of__str_2() { return &____str_2; }
	inline void set__str_2(String_t* value)
	{
		____str_2 = value;
		Il2CppCodeGenWriteBarrier((&____str_2), value);
	}

	inline static int32_t get_offset_of__cached_str_3() { return static_cast<int32_t>(offsetof(StringBuilder_t, ____cached_str_3)); }
	inline String_t* get__cached_str_3() const { return ____cached_str_3; }
	inline String_t** get_address_of__cached_str_3() { return &____cached_str_3; }
	inline void set__cached_str_3(String_t* value)
	{
		____cached_str_3 = value;
		Il2CppCodeGenWriteBarrier((&____cached_str_3), value);
	}

	inline static int32_t get_offset_of__maxCapacity_4() { return static_cast<int32_t>(offsetof(StringBuilder_t, ____maxCapacity_4)); }
	inline int32_t get__maxCapacity_4() const { return ____maxCapacity_4; }
	inline int32_t* get_address_of__maxCapacity_4() { return &____maxCapacity_4; }
	inline void set__maxCapacity_4(int32_t value)
	{
		____maxCapacity_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STRINGBUILDER_T_H
#ifndef XPATHNAVIGATORCOMPARER_T2421573191_H
#define XPATHNAVIGATORCOMPARER_T2421573191_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.XPath.XPathNavigatorComparer
struct  XPathNavigatorComparer_t2421573191  : public RuntimeObject
{
public:

public:
};

struct XPathNavigatorComparer_t2421573191_StaticFields
{
public:
	// System.Xml.XPath.XPathNavigatorComparer System.Xml.XPath.XPathNavigatorComparer::Instance
	XPathNavigatorComparer_t2421573191 * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(XPathNavigatorComparer_t2421573191_StaticFields, ___Instance_0)); }
	inline XPathNavigatorComparer_t2421573191 * get_Instance_0() const { return ___Instance_0; }
	inline XPathNavigatorComparer_t2421573191 ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(XPathNavigatorComparer_t2421573191 * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((&___Instance_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // XPATHNAVIGATORCOMPARER_T2421573191_H
#ifndef XPATHPARSER_T4136515887_H
#define XPATHPARSER_T4136515887_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Xml.XPath.XPathParser
struct  XPathParser_t4136515887  : public RuntimeObject
{
public:
	// System.Xml.Xsl.IStaticXsltContext Mono.Xml.XPath.XPathParser::Context
	RuntimeObject* ___Context_0;
	// System.IO.TextWriter Mono.Xml.XPath.XPathParser::ErrorOutput
	TextWriter_t3478189236 * ___ErrorOutput_1;
	// System.Int32 Mono.Xml.XPath.XPathParser::eof_token
	int32_t ___eof_token_2;
	// Mono.Xml.XPath.yydebug.yyDebug Mono.Xml.XPath.XPathParser::debug
	RuntimeObject* ___debug_3;
	// System.Int32 Mono.Xml.XPath.XPathParser::yyExpectingState
	int32_t ___yyExpectingState_6;
	// System.Int32 Mono.Xml.XPath.XPathParser::yyMax
	int32_t ___yyMax_7;

public:
	inline static int32_t get_offset_of_Context_0() { return static_cast<int32_t>(offsetof(XPathParser_t4136515887, ___Context_0)); }
	inline RuntimeObject* get_Context_0() const { return ___Context_0; }
	inline RuntimeObject** get_address_of_Context_0() { return &___Context_0; }
	inline void set_Context_0(RuntimeObject* value)
	{
		___Context_0 = value;
		Il2CppCodeGenWriteBarrier((&___Context_0), value);
	}

	inline static int32_t get_offset_of_ErrorOutput_1() { return static_cast<int32_t>(offsetof(XPathParser_t4136515887, ___ErrorOutput_1)); }
	inline TextWriter_t3478189236 * get_ErrorOutput_1() const { return ___ErrorOutput_1; }
	inline TextWriter_t3478189236 ** get_address_of_ErrorOutput_1() { return &___ErrorOutput_1; }
	inline void set_ErrorOutput_1(TextWriter_t3478189236 * value)
	{
		___ErrorOutput_1 = value;
		Il2CppCodeGenWriteBarrier((&___ErrorOutput_1), value);
	}

	inline static int32_t get_offset_of_eof_token_2() { return static_cast<int32_t>(offsetof(XPathParser_t4136515887, ___eof_token_2)); }
	inline int32_t get_eof_token_2() const { return ___eof_token_2; }
	inline int32_t* get_address_of_eof_token_2() { return &___eof_token_2; }
	inline void set_eof_token_2(int32_t value)
	{
		___eof_token_2 = value;
	}

	inline static int32_t get_offset_of_debug_3() { return static_cast<int32_t>(offsetof(XPathParser_t4136515887, ___debug_3)); }
	inline RuntimeObject* get_debug_3() const { return ___debug_3; }
	inline RuntimeObject** get_address_of_debug_3() { return &___debug_3; }
	inline void set_debug_3(RuntimeObject* value)
	{
		___debug_3 = value;
		Il2CppCodeGenWriteBarrier((&___debug_3), value);
	}

	inline static int32_t get_offset_of_yyExpectingState_6() { return static_cast<int32_t>(offsetof(XPathParser_t4136515887, ___yyExpectingState_6)); }
	inline int32_t get_yyExpectingState_6() const { return ___yyExpectingState_6; }
	inline int32_t* get_address_of_yyExpectingState_6() { return &___yyExpectingState_6; }
	inline void set_yyExpectingState_6(int32_t value)
	{
		___yyExpectingState_6 = value;
	}

	inline static int32_t get_offset_of_yyMax_7() { return static_cast<int32_t>(offsetof(XPathParser_t4136515887, ___yyMax_7)); }
	inline int32_t get_yyMax_7() const { return ___yyMax_7; }
	inline int32_t* get_address_of_yyMax_7() { return &___yyMax_7; }
	inline void set_yyMax_7(int32_t value)
	{
		___yyMax_7 = value;
	}
};

struct XPathParser_t4136515887_StaticFields
{
public:
	// System.Int32 Mono.Xml.XPath.XPathParser::yyFinal
	int32_t ___yyFinal_4;
	// System.String[] Mono.Xml.XPath.XPathParser::yyNames
	StringU5BU5D_t1281789340* ___yyNames_5;
	// System.Int16[] Mono.Xml.XPath.XPathParser::yyLhs
	Int16U5BU5D_t3686840178* ___yyLhs_8;
	// System.Int16[] Mono.Xml.XPath.XPathParser::yyLen
	Int16U5BU5D_t3686840178* ___yyLen_9;
	// System.Int16[] Mono.Xml.XPath.XPathParser::yyDefRed
	Int16U5BU5D_t3686840178* ___yyDefRed_10;
	// System.Int16[] Mono.Xml.XPath.XPathParser::yyDgoto
	Int16U5BU5D_t3686840178* ___yyDgoto_11;
	// System.Int16[] Mono.Xml.XPath.XPathParser::yySindex
	Int16U5BU5D_t3686840178* ___yySindex_12;
	// System.Int16[] Mono.Xml.XPath.XPathParser::yyRindex
	Int16U5BU5D_t3686840178* ___yyRindex_13;
	// System.Int16[] Mono.Xml.XPath.XPathParser::yyGindex
	Int16U5BU5D_t3686840178* ___yyGindex_14;
	// System.Int16[] Mono.Xml.XPath.XPathParser::yyTable
	Int16U5BU5D_t3686840178* ___yyTable_15;
	// System.Int16[] Mono.Xml.XPath.XPathParser::yyCheck
	Int16U5BU5D_t3686840178* ___yyCheck_16;

public:
	inline static int32_t get_offset_of_yyFinal_4() { return static_cast<int32_t>(offsetof(XPathParser_t4136515887_StaticFields, ___yyFinal_4)); }
	inline int32_t get_yyFinal_4() const { return ___yyFinal_4; }
	inline int32_t* get_address_of_yyFinal_4() { return &___yyFinal_4; }
	inline void set_yyFinal_4(int32_t value)
	{
		___yyFinal_4 = value;
	}

	inline static int32_t get_offset_of_yyNames_5() { return static_cast<int32_t>(offsetof(XPathParser_t4136515887_StaticFields, ___yyNames_5)); }
	inline StringU5BU5D_t1281789340* get_yyNames_5() const { return ___yyNames_5; }
	inline StringU5BU5D_t1281789340** get_address_of_yyNames_5() { return &___yyNames_5; }
	inline void set_yyNames_5(StringU5BU5D_t1281789340* value)
	{
		___yyNames_5 = value;
		Il2CppCodeGenWriteBarrier((&___yyNames_5), value);
	}

	inline static int32_t get_offset_of_yyLhs_8() { return static_cast<int32_t>(offsetof(XPathParser_t4136515887_StaticFields, ___yyLhs_8)); }
	inline Int16U5BU5D_t3686840178* get_yyLhs_8() const { return ___yyLhs_8; }
	inline Int16U5BU5D_t3686840178** get_address_of_yyLhs_8() { return &___yyLhs_8; }
	inline void set_yyLhs_8(Int16U5BU5D_t3686840178* value)
	{
		___yyLhs_8 = value;
		Il2CppCodeGenWriteBarrier((&___yyLhs_8), value);
	}

	inline static int32_t get_offset_of_yyLen_9() { return static_cast<int32_t>(offsetof(XPathParser_t4136515887_StaticFields, ___yyLen_9)); }
	inline Int16U5BU5D_t3686840178* get_yyLen_9() const { return ___yyLen_9; }
	inline Int16U5BU5D_t3686840178** get_address_of_yyLen_9() { return &___yyLen_9; }
	inline void set_yyLen_9(Int16U5BU5D_t3686840178* value)
	{
		___yyLen_9 = value;
		Il2CppCodeGenWriteBarrier((&___yyLen_9), value);
	}

	inline static int32_t get_offset_of_yyDefRed_10() { return static_cast<int32_t>(offsetof(XPathParser_t4136515887_StaticFields, ___yyDefRed_10)); }
	inline Int16U5BU5D_t3686840178* get_yyDefRed_10() const { return ___yyDefRed_10; }
	inline Int16U5BU5D_t3686840178** get_address_of_yyDefRed_10() { return &___yyDefRed_10; }
	inline void set_yyDefRed_10(Int16U5BU5D_t3686840178* value)
	{
		___yyDefRed_10 = value;
		Il2CppCodeGenWriteBarrier((&___yyDefRed_10), value);
	}

	inline static int32_t get_offset_of_yyDgoto_11() { return static_cast<int32_t>(offsetof(XPathParser_t4136515887_StaticFields, ___yyDgoto_11)); }
	inline Int16U5BU5D_t3686840178* get_yyDgoto_11() const { return ___yyDgoto_11; }
	inline Int16U5BU5D_t3686840178** get_address_of_yyDgoto_11() { return &___yyDgoto_11; }
	inline void set_yyDgoto_11(Int16U5BU5D_t3686840178* value)
	{
		___yyDgoto_11 = value;
		Il2CppCodeGenWriteBarrier((&___yyDgoto_11), value);
	}

	inline static int32_t get_offset_of_yySindex_12() { return static_cast<int32_t>(offsetof(XPathParser_t4136515887_StaticFields, ___yySindex_12)); }
	inline Int16U5BU5D_t3686840178* get_yySindex_12() const { return ___yySindex_12; }
	inline Int16U5BU5D_t3686840178** get_address_of_yySindex_12() { return &___yySindex_12; }
	inline void set_yySindex_12(Int16U5BU5D_t3686840178* value)
	{
		___yySindex_12 = value;
		Il2CppCodeGenWriteBarrier((&___yySindex_12), value);
	}

	inline static int32_t get_offset_of_yyRindex_13() { return static_cast<int32_t>(offsetof(XPathParser_t4136515887_StaticFields, ___yyRindex_13)); }
	inline Int16U5BU5D_t3686840178* get_yyRindex_13() const { return ___yyRindex_13; }
	inline Int16U5BU5D_t3686840178** get_address_of_yyRindex_13() { return &___yyRindex_13; }
	inline void set_yyRindex_13(Int16U5BU5D_t3686840178* value)
	{
		___yyRindex_13 = value;
		Il2CppCodeGenWriteBarrier((&___yyRindex_13), value);
	}

	inline static int32_t get_offset_of_yyGindex_14() { return static_cast<int32_t>(offsetof(XPathParser_t4136515887_StaticFields, ___yyGindex_14)); }
	inline Int16U5BU5D_t3686840178* get_yyGindex_14() const { return ___yyGindex_14; }
	inline Int16U5BU5D_t3686840178** get_address_of_yyGindex_14() { return &___yyGindex_14; }
	inline void set_yyGindex_14(Int16U5BU5D_t3686840178* value)
	{
		___yyGindex_14 = value;
		Il2CppCodeGenWriteBarrier((&___yyGindex_14), value);
	}

	inline static int32_t get_offset_of_yyTable_15() { return static_cast<int32_t>(offsetof(XPathParser_t4136515887_StaticFields, ___yyTable_15)); }
	inline Int16U5BU5D_t3686840178* get_yyTable_15() const { return ___yyTable_15; }
	inline Int16U5BU5D_t3686840178** get_address_of_yyTable_15() { return &___yyTable_15; }
	inline void set_yyTable_15(Int16U5BU5D_t3686840178* value)
	{
		___yyTable_15 = value;
		Il2CppCodeGenWriteBarrier((&___yyTable_15), value);
	}

	inline static int32_t get_offset_of_yyCheck_16() { return static_cast<int32_t>(offsetof(XPathParser_t4136515887_StaticFields, ___yyCheck_16)); }
	inline Int16U5BU5D_t3686840178* get_yyCheck_16() const { return ___yyCheck_16; }
	inline Int16U5BU5D_t3686840178** get_address_of_yyCheck_16() { return &___yyCheck_16; }
	inline void set_yyCheck_16(Int16U5BU5D_t3686840178* value)
	{
		___yyCheck_16 = value;
		Il2CppCodeGenWriteBarrier((&___yyCheck_16), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // XPATHPARSER_T4136515887_H
#ifndef XPATHITERATORCOMPARER_T1799213572_H
#define XPATHITERATORCOMPARER_T1799213572_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.XPath.XPathIteratorComparer
struct  XPathIteratorComparer_t1799213572  : public RuntimeObject
{
public:

public:
};

struct XPathIteratorComparer_t1799213572_StaticFields
{
public:
	// System.Xml.XPath.XPathIteratorComparer System.Xml.XPath.XPathIteratorComparer::Instance
	XPathIteratorComparer_t1799213572 * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(XPathIteratorComparer_t1799213572_StaticFields, ___Instance_0)); }
	inline XPathIteratorComparer_t1799213572 * get_Instance_0() const { return ___Instance_0; }
	inline XPathIteratorComparer_t1799213572 ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(XPathIteratorComparer_t1799213572 * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((&___Instance_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // XPATHITERATORCOMPARER_T1799213572_H
#ifndef ARRAYLIST_T2718874744_H
#define ARRAYLIST_T2718874744_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.ArrayList
struct  ArrayList_t2718874744  : public RuntimeObject
{
public:
	// System.Int32 System.Collections.ArrayList::_size
	int32_t ____size_1;
	// System.Object[] System.Collections.ArrayList::_items
	ObjectU5BU5D_t2843939325* ____items_2;
	// System.Int32 System.Collections.ArrayList::_version
	int32_t ____version_3;

public:
	inline static int32_t get_offset_of__size_1() { return static_cast<int32_t>(offsetof(ArrayList_t2718874744, ____size_1)); }
	inline int32_t get__size_1() const { return ____size_1; }
	inline int32_t* get_address_of__size_1() { return &____size_1; }
	inline void set__size_1(int32_t value)
	{
		____size_1 = value;
	}

	inline static int32_t get_offset_of__items_2() { return static_cast<int32_t>(offsetof(ArrayList_t2718874744, ____items_2)); }
	inline ObjectU5BU5D_t2843939325* get__items_2() const { return ____items_2; }
	inline ObjectU5BU5D_t2843939325** get_address_of__items_2() { return &____items_2; }
	inline void set__items_2(ObjectU5BU5D_t2843939325* value)
	{
		____items_2 = value;
		Il2CppCodeGenWriteBarrier((&____items_2), value);
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(ArrayList_t2718874744, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}
};

struct ArrayList_t2718874744_StaticFields
{
public:
	// System.Object[] System.Collections.ArrayList::EmptyArray
	ObjectU5BU5D_t2843939325* ___EmptyArray_4;

public:
	inline static int32_t get_offset_of_EmptyArray_4() { return static_cast<int32_t>(offsetof(ArrayList_t2718874744_StaticFields, ___EmptyArray_4)); }
	inline ObjectU5BU5D_t2843939325* get_EmptyArray_4() const { return ___EmptyArray_4; }
	inline ObjectU5BU5D_t2843939325** get_address_of_EmptyArray_4() { return &___EmptyArray_4; }
	inline void set_EmptyArray_4(ObjectU5BU5D_t2843939325* value)
	{
		___EmptyArray_4 = value;
		Il2CppCodeGenWriteBarrier((&___EmptyArray_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ARRAYLIST_T2718874744_H
#ifndef SORTEDLIST_T2427694641_H
#define SORTEDLIST_T2427694641_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.SortedList
struct  SortedList_t2427694641  : public RuntimeObject
{
public:
	// System.Int32 System.Collections.SortedList::inUse
	int32_t ___inUse_1;
	// System.Int32 System.Collections.SortedList::modificationCount
	int32_t ___modificationCount_2;
	// System.Collections.SortedList/Slot[] System.Collections.SortedList::table
	SlotU5BU5D_t227397015* ___table_3;
	// System.Collections.IComparer System.Collections.SortedList::comparer
	RuntimeObject* ___comparer_4;
	// System.Int32 System.Collections.SortedList::defaultCapacity
	int32_t ___defaultCapacity_5;

public:
	inline static int32_t get_offset_of_inUse_1() { return static_cast<int32_t>(offsetof(SortedList_t2427694641, ___inUse_1)); }
	inline int32_t get_inUse_1() const { return ___inUse_1; }
	inline int32_t* get_address_of_inUse_1() { return &___inUse_1; }
	inline void set_inUse_1(int32_t value)
	{
		___inUse_1 = value;
	}

	inline static int32_t get_offset_of_modificationCount_2() { return static_cast<int32_t>(offsetof(SortedList_t2427694641, ___modificationCount_2)); }
	inline int32_t get_modificationCount_2() const { return ___modificationCount_2; }
	inline int32_t* get_address_of_modificationCount_2() { return &___modificationCount_2; }
	inline void set_modificationCount_2(int32_t value)
	{
		___modificationCount_2 = value;
	}

	inline static int32_t get_offset_of_table_3() { return static_cast<int32_t>(offsetof(SortedList_t2427694641, ___table_3)); }
	inline SlotU5BU5D_t227397015* get_table_3() const { return ___table_3; }
	inline SlotU5BU5D_t227397015** get_address_of_table_3() { return &___table_3; }
	inline void set_table_3(SlotU5BU5D_t227397015* value)
	{
		___table_3 = value;
		Il2CppCodeGenWriteBarrier((&___table_3), value);
	}

	inline static int32_t get_offset_of_comparer_4() { return static_cast<int32_t>(offsetof(SortedList_t2427694641, ___comparer_4)); }
	inline RuntimeObject* get_comparer_4() const { return ___comparer_4; }
	inline RuntimeObject** get_address_of_comparer_4() { return &___comparer_4; }
	inline void set_comparer_4(RuntimeObject* value)
	{
		___comparer_4 = value;
		Il2CppCodeGenWriteBarrier((&___comparer_4), value);
	}

	inline static int32_t get_offset_of_defaultCapacity_5() { return static_cast<int32_t>(offsetof(SortedList_t2427694641, ___defaultCapacity_5)); }
	inline int32_t get_defaultCapacity_5() const { return ___defaultCapacity_5; }
	inline int32_t* get_address_of_defaultCapacity_5() { return &___defaultCapacity_5; }
	inline void set_defaultCapacity_5(int32_t value)
	{
		___defaultCapacity_5 = value;
	}
};

struct SortedList_t2427694641_StaticFields
{
public:
	// System.Int32 System.Collections.SortedList::INITIAL_SIZE
	int32_t ___INITIAL_SIZE_0;

public:
	inline static int32_t get_offset_of_INITIAL_SIZE_0() { return static_cast<int32_t>(offsetof(SortedList_t2427694641_StaticFields, ___INITIAL_SIZE_0)); }
	inline int32_t get_INITIAL_SIZE_0() const { return ___INITIAL_SIZE_0; }
	inline int32_t* get_address_of_INITIAL_SIZE_0() { return &___INITIAL_SIZE_0; }
	inline void set_INITIAL_SIZE_0(int32_t value)
	{
		___INITIAL_SIZE_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SORTEDLIST_T2427694641_H
#ifndef NUMBERFORMATINFO_T435877138_H
#define NUMBERFORMATINFO_T435877138_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Globalization.NumberFormatInfo
struct  NumberFormatInfo_t435877138  : public RuntimeObject
{
public:
	// System.Boolean System.Globalization.NumberFormatInfo::isReadOnly
	bool ___isReadOnly_0;
	// System.String System.Globalization.NumberFormatInfo::decimalFormats
	String_t* ___decimalFormats_1;
	// System.String System.Globalization.NumberFormatInfo::currencyFormats
	String_t* ___currencyFormats_2;
	// System.String System.Globalization.NumberFormatInfo::percentFormats
	String_t* ___percentFormats_3;
	// System.String System.Globalization.NumberFormatInfo::digitPattern
	String_t* ___digitPattern_4;
	// System.String System.Globalization.NumberFormatInfo::zeroPattern
	String_t* ___zeroPattern_5;
	// System.Int32 System.Globalization.NumberFormatInfo::currencyDecimalDigits
	int32_t ___currencyDecimalDigits_6;
	// System.String System.Globalization.NumberFormatInfo::currencyDecimalSeparator
	String_t* ___currencyDecimalSeparator_7;
	// System.String System.Globalization.NumberFormatInfo::currencyGroupSeparator
	String_t* ___currencyGroupSeparator_8;
	// System.Int32[] System.Globalization.NumberFormatInfo::currencyGroupSizes
	Int32U5BU5D_t385246372* ___currencyGroupSizes_9;
	// System.Int32 System.Globalization.NumberFormatInfo::currencyNegativePattern
	int32_t ___currencyNegativePattern_10;
	// System.Int32 System.Globalization.NumberFormatInfo::currencyPositivePattern
	int32_t ___currencyPositivePattern_11;
	// System.String System.Globalization.NumberFormatInfo::currencySymbol
	String_t* ___currencySymbol_12;
	// System.String System.Globalization.NumberFormatInfo::nanSymbol
	String_t* ___nanSymbol_13;
	// System.String System.Globalization.NumberFormatInfo::negativeInfinitySymbol
	String_t* ___negativeInfinitySymbol_14;
	// System.String System.Globalization.NumberFormatInfo::negativeSign
	String_t* ___negativeSign_15;
	// System.Int32 System.Globalization.NumberFormatInfo::numberDecimalDigits
	int32_t ___numberDecimalDigits_16;
	// System.String System.Globalization.NumberFormatInfo::numberDecimalSeparator
	String_t* ___numberDecimalSeparator_17;
	// System.String System.Globalization.NumberFormatInfo::numberGroupSeparator
	String_t* ___numberGroupSeparator_18;
	// System.Int32[] System.Globalization.NumberFormatInfo::numberGroupSizes
	Int32U5BU5D_t385246372* ___numberGroupSizes_19;
	// System.Int32 System.Globalization.NumberFormatInfo::numberNegativePattern
	int32_t ___numberNegativePattern_20;
	// System.Int32 System.Globalization.NumberFormatInfo::percentDecimalDigits
	int32_t ___percentDecimalDigits_21;
	// System.String System.Globalization.NumberFormatInfo::percentDecimalSeparator
	String_t* ___percentDecimalSeparator_22;
	// System.String System.Globalization.NumberFormatInfo::percentGroupSeparator
	String_t* ___percentGroupSeparator_23;
	// System.Int32[] System.Globalization.NumberFormatInfo::percentGroupSizes
	Int32U5BU5D_t385246372* ___percentGroupSizes_24;
	// System.Int32 System.Globalization.NumberFormatInfo::percentNegativePattern
	int32_t ___percentNegativePattern_25;
	// System.Int32 System.Globalization.NumberFormatInfo::percentPositivePattern
	int32_t ___percentPositivePattern_26;
	// System.String System.Globalization.NumberFormatInfo::percentSymbol
	String_t* ___percentSymbol_27;
	// System.String System.Globalization.NumberFormatInfo::perMilleSymbol
	String_t* ___perMilleSymbol_28;
	// System.String System.Globalization.NumberFormatInfo::positiveInfinitySymbol
	String_t* ___positiveInfinitySymbol_29;
	// System.String System.Globalization.NumberFormatInfo::positiveSign
	String_t* ___positiveSign_30;
	// System.String System.Globalization.NumberFormatInfo::ansiCurrencySymbol
	String_t* ___ansiCurrencySymbol_31;
	// System.Int32 System.Globalization.NumberFormatInfo::m_dataItem
	int32_t ___m_dataItem_32;
	// System.Boolean System.Globalization.NumberFormatInfo::m_useUserOverride
	bool ___m_useUserOverride_33;
	// System.Boolean System.Globalization.NumberFormatInfo::validForParseAsNumber
	bool ___validForParseAsNumber_34;
	// System.Boolean System.Globalization.NumberFormatInfo::validForParseAsCurrency
	bool ___validForParseAsCurrency_35;
	// System.String[] System.Globalization.NumberFormatInfo::nativeDigits
	StringU5BU5D_t1281789340* ___nativeDigits_36;
	// System.Int32 System.Globalization.NumberFormatInfo::digitSubstitution
	int32_t ___digitSubstitution_37;

public:
	inline static int32_t get_offset_of_isReadOnly_0() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t435877138, ___isReadOnly_0)); }
	inline bool get_isReadOnly_0() const { return ___isReadOnly_0; }
	inline bool* get_address_of_isReadOnly_0() { return &___isReadOnly_0; }
	inline void set_isReadOnly_0(bool value)
	{
		___isReadOnly_0 = value;
	}

	inline static int32_t get_offset_of_decimalFormats_1() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t435877138, ___decimalFormats_1)); }
	inline String_t* get_decimalFormats_1() const { return ___decimalFormats_1; }
	inline String_t** get_address_of_decimalFormats_1() { return &___decimalFormats_1; }
	inline void set_decimalFormats_1(String_t* value)
	{
		___decimalFormats_1 = value;
		Il2CppCodeGenWriteBarrier((&___decimalFormats_1), value);
	}

	inline static int32_t get_offset_of_currencyFormats_2() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t435877138, ___currencyFormats_2)); }
	inline String_t* get_currencyFormats_2() const { return ___currencyFormats_2; }
	inline String_t** get_address_of_currencyFormats_2() { return &___currencyFormats_2; }
	inline void set_currencyFormats_2(String_t* value)
	{
		___currencyFormats_2 = value;
		Il2CppCodeGenWriteBarrier((&___currencyFormats_2), value);
	}

	inline static int32_t get_offset_of_percentFormats_3() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t435877138, ___percentFormats_3)); }
	inline String_t* get_percentFormats_3() const { return ___percentFormats_3; }
	inline String_t** get_address_of_percentFormats_3() { return &___percentFormats_3; }
	inline void set_percentFormats_3(String_t* value)
	{
		___percentFormats_3 = value;
		Il2CppCodeGenWriteBarrier((&___percentFormats_3), value);
	}

	inline static int32_t get_offset_of_digitPattern_4() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t435877138, ___digitPattern_4)); }
	inline String_t* get_digitPattern_4() const { return ___digitPattern_4; }
	inline String_t** get_address_of_digitPattern_4() { return &___digitPattern_4; }
	inline void set_digitPattern_4(String_t* value)
	{
		___digitPattern_4 = value;
		Il2CppCodeGenWriteBarrier((&___digitPattern_4), value);
	}

	inline static int32_t get_offset_of_zeroPattern_5() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t435877138, ___zeroPattern_5)); }
	inline String_t* get_zeroPattern_5() const { return ___zeroPattern_5; }
	inline String_t** get_address_of_zeroPattern_5() { return &___zeroPattern_5; }
	inline void set_zeroPattern_5(String_t* value)
	{
		___zeroPattern_5 = value;
		Il2CppCodeGenWriteBarrier((&___zeroPattern_5), value);
	}

	inline static int32_t get_offset_of_currencyDecimalDigits_6() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t435877138, ___currencyDecimalDigits_6)); }
	inline int32_t get_currencyDecimalDigits_6() const { return ___currencyDecimalDigits_6; }
	inline int32_t* get_address_of_currencyDecimalDigits_6() { return &___currencyDecimalDigits_6; }
	inline void set_currencyDecimalDigits_6(int32_t value)
	{
		___currencyDecimalDigits_6 = value;
	}

	inline static int32_t get_offset_of_currencyDecimalSeparator_7() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t435877138, ___currencyDecimalSeparator_7)); }
	inline String_t* get_currencyDecimalSeparator_7() const { return ___currencyDecimalSeparator_7; }
	inline String_t** get_address_of_currencyDecimalSeparator_7() { return &___currencyDecimalSeparator_7; }
	inline void set_currencyDecimalSeparator_7(String_t* value)
	{
		___currencyDecimalSeparator_7 = value;
		Il2CppCodeGenWriteBarrier((&___currencyDecimalSeparator_7), value);
	}

	inline static int32_t get_offset_of_currencyGroupSeparator_8() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t435877138, ___currencyGroupSeparator_8)); }
	inline String_t* get_currencyGroupSeparator_8() const { return ___currencyGroupSeparator_8; }
	inline String_t** get_address_of_currencyGroupSeparator_8() { return &___currencyGroupSeparator_8; }
	inline void set_currencyGroupSeparator_8(String_t* value)
	{
		___currencyGroupSeparator_8 = value;
		Il2CppCodeGenWriteBarrier((&___currencyGroupSeparator_8), value);
	}

	inline static int32_t get_offset_of_currencyGroupSizes_9() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t435877138, ___currencyGroupSizes_9)); }
	inline Int32U5BU5D_t385246372* get_currencyGroupSizes_9() const { return ___currencyGroupSizes_9; }
	inline Int32U5BU5D_t385246372** get_address_of_currencyGroupSizes_9() { return &___currencyGroupSizes_9; }
	inline void set_currencyGroupSizes_9(Int32U5BU5D_t385246372* value)
	{
		___currencyGroupSizes_9 = value;
		Il2CppCodeGenWriteBarrier((&___currencyGroupSizes_9), value);
	}

	inline static int32_t get_offset_of_currencyNegativePattern_10() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t435877138, ___currencyNegativePattern_10)); }
	inline int32_t get_currencyNegativePattern_10() const { return ___currencyNegativePattern_10; }
	inline int32_t* get_address_of_currencyNegativePattern_10() { return &___currencyNegativePattern_10; }
	inline void set_currencyNegativePattern_10(int32_t value)
	{
		___currencyNegativePattern_10 = value;
	}

	inline static int32_t get_offset_of_currencyPositivePattern_11() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t435877138, ___currencyPositivePattern_11)); }
	inline int32_t get_currencyPositivePattern_11() const { return ___currencyPositivePattern_11; }
	inline int32_t* get_address_of_currencyPositivePattern_11() { return &___currencyPositivePattern_11; }
	inline void set_currencyPositivePattern_11(int32_t value)
	{
		___currencyPositivePattern_11 = value;
	}

	inline static int32_t get_offset_of_currencySymbol_12() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t435877138, ___currencySymbol_12)); }
	inline String_t* get_currencySymbol_12() const { return ___currencySymbol_12; }
	inline String_t** get_address_of_currencySymbol_12() { return &___currencySymbol_12; }
	inline void set_currencySymbol_12(String_t* value)
	{
		___currencySymbol_12 = value;
		Il2CppCodeGenWriteBarrier((&___currencySymbol_12), value);
	}

	inline static int32_t get_offset_of_nanSymbol_13() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t435877138, ___nanSymbol_13)); }
	inline String_t* get_nanSymbol_13() const { return ___nanSymbol_13; }
	inline String_t** get_address_of_nanSymbol_13() { return &___nanSymbol_13; }
	inline void set_nanSymbol_13(String_t* value)
	{
		___nanSymbol_13 = value;
		Il2CppCodeGenWriteBarrier((&___nanSymbol_13), value);
	}

	inline static int32_t get_offset_of_negativeInfinitySymbol_14() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t435877138, ___negativeInfinitySymbol_14)); }
	inline String_t* get_negativeInfinitySymbol_14() const { return ___negativeInfinitySymbol_14; }
	inline String_t** get_address_of_negativeInfinitySymbol_14() { return &___negativeInfinitySymbol_14; }
	inline void set_negativeInfinitySymbol_14(String_t* value)
	{
		___negativeInfinitySymbol_14 = value;
		Il2CppCodeGenWriteBarrier((&___negativeInfinitySymbol_14), value);
	}

	inline static int32_t get_offset_of_negativeSign_15() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t435877138, ___negativeSign_15)); }
	inline String_t* get_negativeSign_15() const { return ___negativeSign_15; }
	inline String_t** get_address_of_negativeSign_15() { return &___negativeSign_15; }
	inline void set_negativeSign_15(String_t* value)
	{
		___negativeSign_15 = value;
		Il2CppCodeGenWriteBarrier((&___negativeSign_15), value);
	}

	inline static int32_t get_offset_of_numberDecimalDigits_16() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t435877138, ___numberDecimalDigits_16)); }
	inline int32_t get_numberDecimalDigits_16() const { return ___numberDecimalDigits_16; }
	inline int32_t* get_address_of_numberDecimalDigits_16() { return &___numberDecimalDigits_16; }
	inline void set_numberDecimalDigits_16(int32_t value)
	{
		___numberDecimalDigits_16 = value;
	}

	inline static int32_t get_offset_of_numberDecimalSeparator_17() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t435877138, ___numberDecimalSeparator_17)); }
	inline String_t* get_numberDecimalSeparator_17() const { return ___numberDecimalSeparator_17; }
	inline String_t** get_address_of_numberDecimalSeparator_17() { return &___numberDecimalSeparator_17; }
	inline void set_numberDecimalSeparator_17(String_t* value)
	{
		___numberDecimalSeparator_17 = value;
		Il2CppCodeGenWriteBarrier((&___numberDecimalSeparator_17), value);
	}

	inline static int32_t get_offset_of_numberGroupSeparator_18() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t435877138, ___numberGroupSeparator_18)); }
	inline String_t* get_numberGroupSeparator_18() const { return ___numberGroupSeparator_18; }
	inline String_t** get_address_of_numberGroupSeparator_18() { return &___numberGroupSeparator_18; }
	inline void set_numberGroupSeparator_18(String_t* value)
	{
		___numberGroupSeparator_18 = value;
		Il2CppCodeGenWriteBarrier((&___numberGroupSeparator_18), value);
	}

	inline static int32_t get_offset_of_numberGroupSizes_19() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t435877138, ___numberGroupSizes_19)); }
	inline Int32U5BU5D_t385246372* get_numberGroupSizes_19() const { return ___numberGroupSizes_19; }
	inline Int32U5BU5D_t385246372** get_address_of_numberGroupSizes_19() { return &___numberGroupSizes_19; }
	inline void set_numberGroupSizes_19(Int32U5BU5D_t385246372* value)
	{
		___numberGroupSizes_19 = value;
		Il2CppCodeGenWriteBarrier((&___numberGroupSizes_19), value);
	}

	inline static int32_t get_offset_of_numberNegativePattern_20() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t435877138, ___numberNegativePattern_20)); }
	inline int32_t get_numberNegativePattern_20() const { return ___numberNegativePattern_20; }
	inline int32_t* get_address_of_numberNegativePattern_20() { return &___numberNegativePattern_20; }
	inline void set_numberNegativePattern_20(int32_t value)
	{
		___numberNegativePattern_20 = value;
	}

	inline static int32_t get_offset_of_percentDecimalDigits_21() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t435877138, ___percentDecimalDigits_21)); }
	inline int32_t get_percentDecimalDigits_21() const { return ___percentDecimalDigits_21; }
	inline int32_t* get_address_of_percentDecimalDigits_21() { return &___percentDecimalDigits_21; }
	inline void set_percentDecimalDigits_21(int32_t value)
	{
		___percentDecimalDigits_21 = value;
	}

	inline static int32_t get_offset_of_percentDecimalSeparator_22() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t435877138, ___percentDecimalSeparator_22)); }
	inline String_t* get_percentDecimalSeparator_22() const { return ___percentDecimalSeparator_22; }
	inline String_t** get_address_of_percentDecimalSeparator_22() { return &___percentDecimalSeparator_22; }
	inline void set_percentDecimalSeparator_22(String_t* value)
	{
		___percentDecimalSeparator_22 = value;
		Il2CppCodeGenWriteBarrier((&___percentDecimalSeparator_22), value);
	}

	inline static int32_t get_offset_of_percentGroupSeparator_23() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t435877138, ___percentGroupSeparator_23)); }
	inline String_t* get_percentGroupSeparator_23() const { return ___percentGroupSeparator_23; }
	inline String_t** get_address_of_percentGroupSeparator_23() { return &___percentGroupSeparator_23; }
	inline void set_percentGroupSeparator_23(String_t* value)
	{
		___percentGroupSeparator_23 = value;
		Il2CppCodeGenWriteBarrier((&___percentGroupSeparator_23), value);
	}

	inline static int32_t get_offset_of_percentGroupSizes_24() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t435877138, ___percentGroupSizes_24)); }
	inline Int32U5BU5D_t385246372* get_percentGroupSizes_24() const { return ___percentGroupSizes_24; }
	inline Int32U5BU5D_t385246372** get_address_of_percentGroupSizes_24() { return &___percentGroupSizes_24; }
	inline void set_percentGroupSizes_24(Int32U5BU5D_t385246372* value)
	{
		___percentGroupSizes_24 = value;
		Il2CppCodeGenWriteBarrier((&___percentGroupSizes_24), value);
	}

	inline static int32_t get_offset_of_percentNegativePattern_25() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t435877138, ___percentNegativePattern_25)); }
	inline int32_t get_percentNegativePattern_25() const { return ___percentNegativePattern_25; }
	inline int32_t* get_address_of_percentNegativePattern_25() { return &___percentNegativePattern_25; }
	inline void set_percentNegativePattern_25(int32_t value)
	{
		___percentNegativePattern_25 = value;
	}

	inline static int32_t get_offset_of_percentPositivePattern_26() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t435877138, ___percentPositivePattern_26)); }
	inline int32_t get_percentPositivePattern_26() const { return ___percentPositivePattern_26; }
	inline int32_t* get_address_of_percentPositivePattern_26() { return &___percentPositivePattern_26; }
	inline void set_percentPositivePattern_26(int32_t value)
	{
		___percentPositivePattern_26 = value;
	}

	inline static int32_t get_offset_of_percentSymbol_27() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t435877138, ___percentSymbol_27)); }
	inline String_t* get_percentSymbol_27() const { return ___percentSymbol_27; }
	inline String_t** get_address_of_percentSymbol_27() { return &___percentSymbol_27; }
	inline void set_percentSymbol_27(String_t* value)
	{
		___percentSymbol_27 = value;
		Il2CppCodeGenWriteBarrier((&___percentSymbol_27), value);
	}

	inline static int32_t get_offset_of_perMilleSymbol_28() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t435877138, ___perMilleSymbol_28)); }
	inline String_t* get_perMilleSymbol_28() const { return ___perMilleSymbol_28; }
	inline String_t** get_address_of_perMilleSymbol_28() { return &___perMilleSymbol_28; }
	inline void set_perMilleSymbol_28(String_t* value)
	{
		___perMilleSymbol_28 = value;
		Il2CppCodeGenWriteBarrier((&___perMilleSymbol_28), value);
	}

	inline static int32_t get_offset_of_positiveInfinitySymbol_29() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t435877138, ___positiveInfinitySymbol_29)); }
	inline String_t* get_positiveInfinitySymbol_29() const { return ___positiveInfinitySymbol_29; }
	inline String_t** get_address_of_positiveInfinitySymbol_29() { return &___positiveInfinitySymbol_29; }
	inline void set_positiveInfinitySymbol_29(String_t* value)
	{
		___positiveInfinitySymbol_29 = value;
		Il2CppCodeGenWriteBarrier((&___positiveInfinitySymbol_29), value);
	}

	inline static int32_t get_offset_of_positiveSign_30() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t435877138, ___positiveSign_30)); }
	inline String_t* get_positiveSign_30() const { return ___positiveSign_30; }
	inline String_t** get_address_of_positiveSign_30() { return &___positiveSign_30; }
	inline void set_positiveSign_30(String_t* value)
	{
		___positiveSign_30 = value;
		Il2CppCodeGenWriteBarrier((&___positiveSign_30), value);
	}

	inline static int32_t get_offset_of_ansiCurrencySymbol_31() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t435877138, ___ansiCurrencySymbol_31)); }
	inline String_t* get_ansiCurrencySymbol_31() const { return ___ansiCurrencySymbol_31; }
	inline String_t** get_address_of_ansiCurrencySymbol_31() { return &___ansiCurrencySymbol_31; }
	inline void set_ansiCurrencySymbol_31(String_t* value)
	{
		___ansiCurrencySymbol_31 = value;
		Il2CppCodeGenWriteBarrier((&___ansiCurrencySymbol_31), value);
	}

	inline static int32_t get_offset_of_m_dataItem_32() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t435877138, ___m_dataItem_32)); }
	inline int32_t get_m_dataItem_32() const { return ___m_dataItem_32; }
	inline int32_t* get_address_of_m_dataItem_32() { return &___m_dataItem_32; }
	inline void set_m_dataItem_32(int32_t value)
	{
		___m_dataItem_32 = value;
	}

	inline static int32_t get_offset_of_m_useUserOverride_33() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t435877138, ___m_useUserOverride_33)); }
	inline bool get_m_useUserOverride_33() const { return ___m_useUserOverride_33; }
	inline bool* get_address_of_m_useUserOverride_33() { return &___m_useUserOverride_33; }
	inline void set_m_useUserOverride_33(bool value)
	{
		___m_useUserOverride_33 = value;
	}

	inline static int32_t get_offset_of_validForParseAsNumber_34() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t435877138, ___validForParseAsNumber_34)); }
	inline bool get_validForParseAsNumber_34() const { return ___validForParseAsNumber_34; }
	inline bool* get_address_of_validForParseAsNumber_34() { return &___validForParseAsNumber_34; }
	inline void set_validForParseAsNumber_34(bool value)
	{
		___validForParseAsNumber_34 = value;
	}

	inline static int32_t get_offset_of_validForParseAsCurrency_35() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t435877138, ___validForParseAsCurrency_35)); }
	inline bool get_validForParseAsCurrency_35() const { return ___validForParseAsCurrency_35; }
	inline bool* get_address_of_validForParseAsCurrency_35() { return &___validForParseAsCurrency_35; }
	inline void set_validForParseAsCurrency_35(bool value)
	{
		___validForParseAsCurrency_35 = value;
	}

	inline static int32_t get_offset_of_nativeDigits_36() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t435877138, ___nativeDigits_36)); }
	inline StringU5BU5D_t1281789340* get_nativeDigits_36() const { return ___nativeDigits_36; }
	inline StringU5BU5D_t1281789340** get_address_of_nativeDigits_36() { return &___nativeDigits_36; }
	inline void set_nativeDigits_36(StringU5BU5D_t1281789340* value)
	{
		___nativeDigits_36 = value;
		Il2CppCodeGenWriteBarrier((&___nativeDigits_36), value);
	}

	inline static int32_t get_offset_of_digitSubstitution_37() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t435877138, ___digitSubstitution_37)); }
	inline int32_t get_digitSubstitution_37() const { return ___digitSubstitution_37; }
	inline int32_t* get_address_of_digitSubstitution_37() { return &___digitSubstitution_37; }
	inline void set_digitSubstitution_37(int32_t value)
	{
		___digitSubstitution_37 = value;
	}
};

struct NumberFormatInfo_t435877138_StaticFields
{
public:
	// System.String[] System.Globalization.NumberFormatInfo::invariantNativeDigits
	StringU5BU5D_t1281789340* ___invariantNativeDigits_38;

public:
	inline static int32_t get_offset_of_invariantNativeDigits_38() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t435877138_StaticFields, ___invariantNativeDigits_38)); }
	inline StringU5BU5D_t1281789340* get_invariantNativeDigits_38() const { return ___invariantNativeDigits_38; }
	inline StringU5BU5D_t1281789340** get_address_of_invariantNativeDigits_38() { return &___invariantNativeDigits_38; }
	inline void set_invariantNativeDigits_38(StringU5BU5D_t1281789340* value)
	{
		___invariantNativeDigits_38 = value;
		Il2CppCodeGenWriteBarrier((&___invariantNativeDigits_38), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NUMBERFORMATINFO_T435877138_H
#ifndef XPATHITEM_T4250588140_H
#define XPATHITEM_T4250588140_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.XPath.XPathItem
struct  XPathItem_t4250588140  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // XPATHITEM_T4250588140_H
#ifndef EXPRESSION_T1452783009_H
#define EXPRESSION_T1452783009_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.XPath.Expression
struct  Expression_t1452783009  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EXPRESSION_T1452783009_H
#ifndef XMLQUALIFIEDNAME_T2760654312_H
#define XMLQUALIFIEDNAME_T2760654312_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.XmlQualifiedName
struct  XmlQualifiedName_t2760654312  : public RuntimeObject
{
public:
	// System.String System.Xml.XmlQualifiedName::name
	String_t* ___name_1;
	// System.String System.Xml.XmlQualifiedName::ns
	String_t* ___ns_2;
	// System.Int32 System.Xml.XmlQualifiedName::hash
	int32_t ___hash_3;

public:
	inline static int32_t get_offset_of_name_1() { return static_cast<int32_t>(offsetof(XmlQualifiedName_t2760654312, ___name_1)); }
	inline String_t* get_name_1() const { return ___name_1; }
	inline String_t** get_address_of_name_1() { return &___name_1; }
	inline void set_name_1(String_t* value)
	{
		___name_1 = value;
		Il2CppCodeGenWriteBarrier((&___name_1), value);
	}

	inline static int32_t get_offset_of_ns_2() { return static_cast<int32_t>(offsetof(XmlQualifiedName_t2760654312, ___ns_2)); }
	inline String_t* get_ns_2() const { return ___ns_2; }
	inline String_t** get_address_of_ns_2() { return &___ns_2; }
	inline void set_ns_2(String_t* value)
	{
		___ns_2 = value;
		Il2CppCodeGenWriteBarrier((&___ns_2), value);
	}

	inline static int32_t get_offset_of_hash_3() { return static_cast<int32_t>(offsetof(XmlQualifiedName_t2760654312, ___hash_3)); }
	inline int32_t get_hash_3() const { return ___hash_3; }
	inline int32_t* get_address_of_hash_3() { return &___hash_3; }
	inline void set_hash_3(int32_t value)
	{
		___hash_3 = value;
	}
};

struct XmlQualifiedName_t2760654312_StaticFields
{
public:
	// System.Xml.XmlQualifiedName System.Xml.XmlQualifiedName::Empty
	XmlQualifiedName_t2760654312 * ___Empty_0;

public:
	inline static int32_t get_offset_of_Empty_0() { return static_cast<int32_t>(offsetof(XmlQualifiedName_t2760654312_StaticFields, ___Empty_0)); }
	inline XmlQualifiedName_t2760654312 * get_Empty_0() const { return ___Empty_0; }
	inline XmlQualifiedName_t2760654312 ** get_address_of_Empty_0() { return &___Empty_0; }
	inline void set_Empty_0(XmlQualifiedName_t2760654312 * value)
	{
		___Empty_0 = value;
		Il2CppCodeGenWriteBarrier((&___Empty_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // XMLQUALIFIEDNAME_T2760654312_H
#ifndef XMLCHAR_T3816087079_H
#define XMLCHAR_T3816087079_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.XmlChar
struct  XmlChar_t3816087079  : public RuntimeObject
{
public:

public:
};

struct XmlChar_t3816087079_StaticFields
{
public:
	// System.Char[] System.Xml.XmlChar::WhitespaceChars
	CharU5BU5D_t3528271667* ___WhitespaceChars_0;
	// System.Byte[] System.Xml.XmlChar::firstNamePages
	ByteU5BU5D_t4116647657* ___firstNamePages_1;
	// System.Byte[] System.Xml.XmlChar::namePages
	ByteU5BU5D_t4116647657* ___namePages_2;
	// System.UInt32[] System.Xml.XmlChar::nameBitmap
	UInt32U5BU5D_t2770800703* ___nameBitmap_3;
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> System.Xml.XmlChar::<>f__switch$map47
	Dictionary_2_t2736202052 * ___U3CU3Ef__switchU24map47_4;

public:
	inline static int32_t get_offset_of_WhitespaceChars_0() { return static_cast<int32_t>(offsetof(XmlChar_t3816087079_StaticFields, ___WhitespaceChars_0)); }
	inline CharU5BU5D_t3528271667* get_WhitespaceChars_0() const { return ___WhitespaceChars_0; }
	inline CharU5BU5D_t3528271667** get_address_of_WhitespaceChars_0() { return &___WhitespaceChars_0; }
	inline void set_WhitespaceChars_0(CharU5BU5D_t3528271667* value)
	{
		___WhitespaceChars_0 = value;
		Il2CppCodeGenWriteBarrier((&___WhitespaceChars_0), value);
	}

	inline static int32_t get_offset_of_firstNamePages_1() { return static_cast<int32_t>(offsetof(XmlChar_t3816087079_StaticFields, ___firstNamePages_1)); }
	inline ByteU5BU5D_t4116647657* get_firstNamePages_1() const { return ___firstNamePages_1; }
	inline ByteU5BU5D_t4116647657** get_address_of_firstNamePages_1() { return &___firstNamePages_1; }
	inline void set_firstNamePages_1(ByteU5BU5D_t4116647657* value)
	{
		___firstNamePages_1 = value;
		Il2CppCodeGenWriteBarrier((&___firstNamePages_1), value);
	}

	inline static int32_t get_offset_of_namePages_2() { return static_cast<int32_t>(offsetof(XmlChar_t3816087079_StaticFields, ___namePages_2)); }
	inline ByteU5BU5D_t4116647657* get_namePages_2() const { return ___namePages_2; }
	inline ByteU5BU5D_t4116647657** get_address_of_namePages_2() { return &___namePages_2; }
	inline void set_namePages_2(ByteU5BU5D_t4116647657* value)
	{
		___namePages_2 = value;
		Il2CppCodeGenWriteBarrier((&___namePages_2), value);
	}

	inline static int32_t get_offset_of_nameBitmap_3() { return static_cast<int32_t>(offsetof(XmlChar_t3816087079_StaticFields, ___nameBitmap_3)); }
	inline UInt32U5BU5D_t2770800703* get_nameBitmap_3() const { return ___nameBitmap_3; }
	inline UInt32U5BU5D_t2770800703** get_address_of_nameBitmap_3() { return &___nameBitmap_3; }
	inline void set_nameBitmap_3(UInt32U5BU5D_t2770800703* value)
	{
		___nameBitmap_3 = value;
		Il2CppCodeGenWriteBarrier((&___nameBitmap_3), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__switchU24map47_4() { return static_cast<int32_t>(offsetof(XmlChar_t3816087079_StaticFields, ___U3CU3Ef__switchU24map47_4)); }
	inline Dictionary_2_t2736202052 * get_U3CU3Ef__switchU24map47_4() const { return ___U3CU3Ef__switchU24map47_4; }
	inline Dictionary_2_t2736202052 ** get_address_of_U3CU3Ef__switchU24map47_4() { return &___U3CU3Ef__switchU24map47_4; }
	inline void set_U3CU3Ef__switchU24map47_4(Dictionary_2_t2736202052 * value)
	{
		___U3CU3Ef__switchU24map47_4 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__switchU24map47_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // XMLCHAR_T3816087079_H
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
#ifndef FUNCTIONARGUMENTS_T3573450773_H
#define FUNCTIONARGUMENTS_T3573450773_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.XPath.FunctionArguments
struct  FunctionArguments_t3573450773  : public RuntimeObject
{
public:
	// System.Xml.XPath.Expression System.Xml.XPath.FunctionArguments::_arg
	Expression_t1452783009 * ____arg_0;
	// System.Xml.XPath.FunctionArguments System.Xml.XPath.FunctionArguments::_tail
	FunctionArguments_t3573450773 * ____tail_1;

public:
	inline static int32_t get_offset_of__arg_0() { return static_cast<int32_t>(offsetof(FunctionArguments_t3573450773, ____arg_0)); }
	inline Expression_t1452783009 * get__arg_0() const { return ____arg_0; }
	inline Expression_t1452783009 ** get_address_of__arg_0() { return &____arg_0; }
	inline void set__arg_0(Expression_t1452783009 * value)
	{
		____arg_0 = value;
		Il2CppCodeGenWriteBarrier((&____arg_0), value);
	}

	inline static int32_t get_offset_of__tail_1() { return static_cast<int32_t>(offsetof(FunctionArguments_t3573450773, ____tail_1)); }
	inline FunctionArguments_t3573450773 * get__tail_1() const { return ____tail_1; }
	inline FunctionArguments_t3573450773 ** get_address_of__tail_1() { return &____tail_1; }
	inline void set__tail_1(FunctionArguments_t3573450773 * value)
	{
		____tail_1 = value;
		Il2CppCodeGenWriteBarrier((&____tail_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // FUNCTIONARGUMENTS_T3573450773_H
#ifndef XPATHFUNCTIONS_T1481462947_H
#define XPATHFUNCTIONS_T1481462947_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.XPath.XPathFunctions
struct  XPathFunctions_t1481462947  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // XPATHFUNCTIONS_T1481462947_H
#ifndef SYSTEMEXCEPTION_T176217640_H
#define SYSTEMEXCEPTION_T176217640_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.SystemException
struct  SystemException_t176217640  : public Exception_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SYSTEMEXCEPTION_T176217640_H
#ifndef XSLTCONTEXT_T2039362735_H
#define XSLTCONTEXT_T2039362735_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.Xsl.XsltContext
struct  XsltContext_t2039362735  : public XmlNamespaceManager_t418790500
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // XSLTCONTEXT_T2039362735_H
#ifndef U24ARRAYTYPEU241280_T4290130235_H
#define U24ARRAYTYPEU241280_T4290130235_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>/$ArrayType$1280
struct  U24ArrayTypeU241280_t4290130235 
{
public:
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t U24ArrayTypeU241280_t4290130235__padding[1280];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U24ARRAYTYPEU241280_T4290130235_H
#ifndef EXPRVARIABLE_T1387751146_H
#define EXPRVARIABLE_T1387751146_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.XPath.ExprVariable
struct  ExprVariable_t1387751146  : public Expression_t1452783009
{
public:
	// System.Xml.XmlQualifiedName System.Xml.XPath.ExprVariable::_name
	XmlQualifiedName_t2760654312 * ____name_0;
	// System.Boolean System.Xml.XPath.ExprVariable::resolvedName
	bool ___resolvedName_1;

public:
	inline static int32_t get_offset_of__name_0() { return static_cast<int32_t>(offsetof(ExprVariable_t1387751146, ____name_0)); }
	inline XmlQualifiedName_t2760654312 * get__name_0() const { return ____name_0; }
	inline XmlQualifiedName_t2760654312 ** get_address_of__name_0() { return &____name_0; }
	inline void set__name_0(XmlQualifiedName_t2760654312 * value)
	{
		____name_0 = value;
		Il2CppCodeGenWriteBarrier((&____name_0), value);
	}

	inline static int32_t get_offset_of_resolvedName_1() { return static_cast<int32_t>(offsetof(ExprVariable_t1387751146, ___resolvedName_1)); }
	inline bool get_resolvedName_1() const { return ___resolvedName_1; }
	inline bool* get_address_of_resolvedName_1() { return &___resolvedName_1; }
	inline void set_resolvedName_1(bool value)
	{
		___resolvedName_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EXPRVARIABLE_T1387751146_H
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
#ifndef XPATHFUNCTION_T857746608_H
#define XPATHFUNCTION_T857746608_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.XPath.XPathFunction
struct  XPathFunction_t857746608  : public Expression_t1452783009
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // XPATHFUNCTION_T857746608_H
#ifndef U24ARRAYTYPEU2412_T2490092599_H
#define U24ARRAYTYPEU2412_T2490092599_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>/$ArrayType$12
struct  U24ArrayTypeU2412_t2490092599 
{
public:
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t U24ArrayTypeU2412_t2490092599__padding[12];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U24ARRAYTYPEU2412_T2490092599_H
#ifndef UINT32_T2560061978_H
#define UINT32_T2560061978_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.UInt32
struct  UInt32_t2560061978 
{
public:
	// System.UInt32 System.UInt32::m_value
	uint32_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(UInt32_t2560061978, ___m_value_0)); }
	inline uint32_t get_m_value_0() const { return ___m_value_0; }
	inline uint32_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(uint32_t value)
	{
		___m_value_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UINT32_T2560061978_H
#ifndef XPATHNAVIGATOR_T787956054_H
#define XPATHNAVIGATOR_T787956054_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.XPath.XPathNavigator
struct  XPathNavigator_t787956054  : public XPathItem_t4250588140
{
public:

public:
};

struct XPathNavigator_t787956054_StaticFields
{
public:
	// System.Char[] System.Xml.XPath.XPathNavigator::escape_text_chars
	CharU5BU5D_t3528271667* ___escape_text_chars_0;
	// System.Char[] System.Xml.XPath.XPathNavigator::escape_attr_chars
	CharU5BU5D_t3528271667* ___escape_attr_chars_1;

public:
	inline static int32_t get_offset_of_escape_text_chars_0() { return static_cast<int32_t>(offsetof(XPathNavigator_t787956054_StaticFields, ___escape_text_chars_0)); }
	inline CharU5BU5D_t3528271667* get_escape_text_chars_0() const { return ___escape_text_chars_0; }
	inline CharU5BU5D_t3528271667** get_address_of_escape_text_chars_0() { return &___escape_text_chars_0; }
	inline void set_escape_text_chars_0(CharU5BU5D_t3528271667* value)
	{
		___escape_text_chars_0 = value;
		Il2CppCodeGenWriteBarrier((&___escape_text_chars_0), value);
	}

	inline static int32_t get_offset_of_escape_attr_chars_1() { return static_cast<int32_t>(offsetof(XPathNavigator_t787956054_StaticFields, ___escape_attr_chars_1)); }
	inline CharU5BU5D_t3528271667* get_escape_attr_chars_1() const { return ___escape_attr_chars_1; }
	inline CharU5BU5D_t3528271667** get_address_of_escape_attr_chars_1() { return &___escape_attr_chars_1; }
	inline void set_escape_attr_chars_1(CharU5BU5D_t3528271667* value)
	{
		___escape_attr_chars_1 = value;
		Il2CppCodeGenWriteBarrier((&___escape_attr_chars_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // XPATHNAVIGATOR_T787956054_H
#ifndef U24ARRAYTYPEU24256_T1929481985_H
#define U24ARRAYTYPEU24256_T1929481985_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>/$ArrayType$256
struct  U24ArrayTypeU24256_t1929481985 
{
public:
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t U24ArrayTypeU24256_t1929481985__padding[256];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U24ARRAYTYPEU24256_T1929481985_H
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
#ifndef U24ARRAYTYPEU241532_T2333946162_H
#define U24ARRAYTYPEU241532_T2333946162_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>/$ArrayType$1532
struct  U24ArrayTypeU241532_t2333946162 
{
public:
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t U24ArrayTypeU241532_t2333946162__padding[1532];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U24ARRAYTYPEU241532_T2333946162_H
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
#ifndef U24ARRAYTYPEU2472_T1683523543_H
#define U24ARRAYTYPEU2472_T1683523543_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>/$ArrayType$72
struct  U24ArrayTypeU2472_t1683523543 
{
public:
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t U24ArrayTypeU2472_t1683523543__padding[72];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U24ARRAYTYPEU2472_T1683523543_H
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
#ifndef EXPRLITERAL_T2264229068_H
#define EXPRLITERAL_T2264229068_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.XPath.ExprLiteral
struct  ExprLiteral_t2264229068  : public Expression_t1452783009
{
public:
	// System.String System.Xml.XPath.ExprLiteral::_value
	String_t* ____value_0;

public:
	inline static int32_t get_offset_of__value_0() { return static_cast<int32_t>(offsetof(ExprLiteral_t2264229068, ____value_0)); }
	inline String_t* get__value_0() const { return ____value_0; }
	inline String_t** get_address_of__value_0() { return &____value_0; }
	inline void set__value_0(String_t* value)
	{
		____value_0 = value;
		Il2CppCodeGenWriteBarrier((&____value_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EXPRLITERAL_T2264229068_H
#ifndef U24ARRAYTYPEU24208_T3503460108_H
#define U24ARRAYTYPEU24208_T3503460108_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>/$ArrayType$208
struct  U24ArrayTypeU24208_t3503460108 
{
public:
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t U24ArrayTypeU24208_t3503460108__padding[208];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U24ARRAYTYPEU24208_T3503460108_H
#ifndef U24ARRAYTYPEU24236_T1547144958_H
#define U24ARRAYTYPEU24236_T1547144958_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>/$ArrayType$236
struct  U24ArrayTypeU24236_t1547144958 
{
public:
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t U24ArrayTypeU24236_t1547144958__padding[236];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U24ARRAYTYPEU24236_T1547144958_H
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
#ifndef COMPILEDEXPRESSION_T4018285681_H
#define COMPILEDEXPRESSION_T4018285681_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.XPath.CompiledExpression
struct  CompiledExpression_t4018285681  : public XPathExpression_t1723793351
{
public:
	// System.Xml.IXmlNamespaceResolver System.Xml.XPath.CompiledExpression::_nsm
	RuntimeObject* ____nsm_0;
	// System.Xml.XPath.Expression System.Xml.XPath.CompiledExpression::_expr
	Expression_t1452783009 * ____expr_1;
	// System.Xml.XPath.XPathSorters System.Xml.XPath.CompiledExpression::_sorters
	XPathSorters_t698127628 * ____sorters_2;
	// System.String System.Xml.XPath.CompiledExpression::rawExpression
	String_t* ___rawExpression_3;

public:
	inline static int32_t get_offset_of__nsm_0() { return static_cast<int32_t>(offsetof(CompiledExpression_t4018285681, ____nsm_0)); }
	inline RuntimeObject* get__nsm_0() const { return ____nsm_0; }
	inline RuntimeObject** get_address_of__nsm_0() { return &____nsm_0; }
	inline void set__nsm_0(RuntimeObject* value)
	{
		____nsm_0 = value;
		Il2CppCodeGenWriteBarrier((&____nsm_0), value);
	}

	inline static int32_t get_offset_of__expr_1() { return static_cast<int32_t>(offsetof(CompiledExpression_t4018285681, ____expr_1)); }
	inline Expression_t1452783009 * get__expr_1() const { return ____expr_1; }
	inline Expression_t1452783009 ** get_address_of__expr_1() { return &____expr_1; }
	inline void set__expr_1(Expression_t1452783009 * value)
	{
		____expr_1 = value;
		Il2CppCodeGenWriteBarrier((&____expr_1), value);
	}

	inline static int32_t get_offset_of__sorters_2() { return static_cast<int32_t>(offsetof(CompiledExpression_t4018285681, ____sorters_2)); }
	inline XPathSorters_t698127628 * get__sorters_2() const { return ____sorters_2; }
	inline XPathSorters_t698127628 ** get_address_of__sorters_2() { return &____sorters_2; }
	inline void set__sorters_2(XPathSorters_t698127628 * value)
	{
		____sorters_2 = value;
		Il2CppCodeGenWriteBarrier((&____sorters_2), value);
	}

	inline static int32_t get_offset_of_rawExpression_3() { return static_cast<int32_t>(offsetof(CompiledExpression_t4018285681, ___rawExpression_3)); }
	inline String_t* get_rawExpression_3() const { return ___rawExpression_3; }
	inline String_t** get_address_of_rawExpression_3() { return &___rawExpression_3; }
	inline void set_rawExpression_3(String_t* value)
	{
		___rawExpression_3 = value;
		Il2CppCodeGenWriteBarrier((&___rawExpression_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COMPILEDEXPRESSION_T4018285681_H
#ifndef EXPRBINARY_T2069694888_H
#define EXPRBINARY_T2069694888_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.XPath.ExprBinary
struct  ExprBinary_t2069694888  : public Expression_t1452783009
{
public:
	// System.Xml.XPath.Expression System.Xml.XPath.ExprBinary::_left
	Expression_t1452783009 * ____left_0;
	// System.Xml.XPath.Expression System.Xml.XPath.ExprBinary::_right
	Expression_t1452783009 * ____right_1;

public:
	inline static int32_t get_offset_of__left_0() { return static_cast<int32_t>(offsetof(ExprBinary_t2069694888, ____left_0)); }
	inline Expression_t1452783009 * get__left_0() const { return ____left_0; }
	inline Expression_t1452783009 ** get_address_of__left_0() { return &____left_0; }
	inline void set__left_0(Expression_t1452783009 * value)
	{
		____left_0 = value;
		Il2CppCodeGenWriteBarrier((&____left_0), value);
	}

	inline static int32_t get_offset_of__right_1() { return static_cast<int32_t>(offsetof(ExprBinary_t2069694888, ____right_1)); }
	inline Expression_t1452783009 * get__right_1() const { return ____right_1; }
	inline Expression_t1452783009 ** get_address_of__right_1() { return &____right_1; }
	inline void set__right_1(Expression_t1452783009 * value)
	{
		____right_1 = value;
		Il2CppCodeGenWriteBarrier((&____right_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EXPRBINARY_T2069694888_H
#ifndef EXPRNEG_T381818215_H
#define EXPRNEG_T381818215_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.XPath.ExprNEG
struct  ExprNEG_t381818215  : public Expression_t1452783009
{
public:
	// System.Xml.XPath.Expression System.Xml.XPath.ExprNEG::_expr
	Expression_t1452783009 * ____expr_0;

public:
	inline static int32_t get_offset_of__expr_0() { return static_cast<int32_t>(offsetof(ExprNEG_t381818215, ____expr_0)); }
	inline Expression_t1452783009 * get__expr_0() const { return ____expr_0; }
	inline Expression_t1452783009 ** get_address_of__expr_0() { return &____expr_0; }
	inline void set__expr_0(Expression_t1452783009 * value)
	{
		____expr_0 = value;
		Il2CppCodeGenWriteBarrier((&____expr_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EXPRNEG_T381818215_H
#ifndef EXPRNUMBER_T3483239576_H
#define EXPRNUMBER_T3483239576_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.XPath.ExprNumber
struct  ExprNumber_t3483239576  : public Expression_t1452783009
{
public:
	// System.Double System.Xml.XPath.ExprNumber::_value
	double ____value_0;

public:
	inline static int32_t get_offset_of__value_0() { return static_cast<int32_t>(offsetof(ExprNumber_t3483239576, ____value_0)); }
	inline double get__value_0() const { return ____value_0; }
	inline double* get_address_of__value_0() { return &____value_0; }
	inline void set__value_0(double value)
	{
		____value_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EXPRNUMBER_T3483239576_H
#ifndef EXPRPARENS_T795575662_H
#define EXPRPARENS_T795575662_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.XPath.ExprParens
struct  ExprParens_t795575662  : public Expression_t1452783009
{
public:
	// System.Xml.XPath.Expression System.Xml.XPath.ExprParens::_expr
	Expression_t1452783009 * ____expr_0;

public:
	inline static int32_t get_offset_of__expr_0() { return static_cast<int32_t>(offsetof(ExprParens_t795575662, ____expr_0)); }
	inline Expression_t1452783009 * get__expr_0() const { return ____expr_0; }
	inline Expression_t1452783009 ** get_address_of__expr_0() { return &____expr_0; }
	inline void set__expr_0(Expression_t1452783009 * value)
	{
		____expr_0 = value;
		Il2CppCodeGenWriteBarrier((&____expr_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EXPRPARENS_T795575662_H
#ifndef U24ARRAYTYPEU248_T3244137464_H
#define U24ARRAYTYPEU248_T3244137464_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>/$ArrayType$8
struct  U24ArrayTypeU248_t3244137464 
{
public:
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t U24ArrayTypeU248_t3244137464__padding[8];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U24ARRAYTYPEU248_T3244137464_H
#ifndef ENUMERABLEITERATOR_T1590428576_H
#define ENUMERABLEITERATOR_T1590428576_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.XPath.XPathNavigator/EnumerableIterator
struct  EnumerableIterator_t1590428576  : public XPathNodeIterator_t3667290188
{
public:
	// System.Collections.IEnumerable System.Xml.XPath.XPathNavigator/EnumerableIterator::source
	RuntimeObject* ___source_1;
	// System.Collections.IEnumerator System.Xml.XPath.XPathNavigator/EnumerableIterator::e
	RuntimeObject* ___e_2;
	// System.Int32 System.Xml.XPath.XPathNavigator/EnumerableIterator::pos
	int32_t ___pos_3;

public:
	inline static int32_t get_offset_of_source_1() { return static_cast<int32_t>(offsetof(EnumerableIterator_t1590428576, ___source_1)); }
	inline RuntimeObject* get_source_1() const { return ___source_1; }
	inline RuntimeObject** get_address_of_source_1() { return &___source_1; }
	inline void set_source_1(RuntimeObject* value)
	{
		___source_1 = value;
		Il2CppCodeGenWriteBarrier((&___source_1), value);
	}

	inline static int32_t get_offset_of_e_2() { return static_cast<int32_t>(offsetof(EnumerableIterator_t1590428576, ___e_2)); }
	inline RuntimeObject* get_e_2() const { return ___e_2; }
	inline RuntimeObject** get_address_of_e_2() { return &___e_2; }
	inline void set_e_2(RuntimeObject* value)
	{
		___e_2 = value;
		Il2CppCodeGenWriteBarrier((&___e_2), value);
	}

	inline static int32_t get_offset_of_pos_3() { return static_cast<int32_t>(offsetof(EnumerableIterator_t1590428576, ___pos_3)); }
	inline int32_t get_pos_3() const { return ___pos_3; }
	inline int32_t* get_address_of_pos_3() { return &___pos_3; }
	inline void set_pos_3(int32_t value)
	{
		___pos_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENUMERABLEITERATOR_T1590428576_H
#ifndef NODESET_T3272593155_H
#define NODESET_T3272593155_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.XPath.NodeSet
struct  NodeSet_t3272593155  : public Expression_t1452783009
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NODESET_T3272593155_H
#ifndef BASEITERATOR_T4168896842_H
#define BASEITERATOR_T4168896842_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.XPath.BaseIterator
struct  BaseIterator_t4168896842  : public XPathNodeIterator_t3667290188
{
public:
	// System.Xml.IXmlNamespaceResolver System.Xml.XPath.BaseIterator::_nsm
	RuntimeObject* ____nsm_1;
	// System.Int32 System.Xml.XPath.BaseIterator::position
	int32_t ___position_2;

public:
	inline static int32_t get_offset_of__nsm_1() { return static_cast<int32_t>(offsetof(BaseIterator_t4168896842, ____nsm_1)); }
	inline RuntimeObject* get__nsm_1() const { return ____nsm_1; }
	inline RuntimeObject** get_address_of__nsm_1() { return &____nsm_1; }
	inline void set__nsm_1(RuntimeObject* value)
	{
		____nsm_1 = value;
		Il2CppCodeGenWriteBarrier((&____nsm_1), value);
	}

	inline static int32_t get_offset_of_position_2() { return static_cast<int32_t>(offsetof(BaseIterator_t4168896842, ___position_2)); }
	inline int32_t get_position_2() const { return ___position_2; }
	inline int32_t* get_address_of_position_2() { return &___position_2; }
	inline void set_position_2(int32_t value)
	{
		___position_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BASEITERATOR_T4168896842_H
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
#ifndef XPATHFUNCTIONCONTAINS_T678583606_H
#define XPATHFUNCTIONCONTAINS_T678583606_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.XPath.XPathFunctionContains
struct  XPathFunctionContains_t678583606  : public XPathFunction_t857746608
{
public:
	// System.Xml.XPath.Expression System.Xml.XPath.XPathFunctionContains::arg0
	Expression_t1452783009 * ___arg0_0;
	// System.Xml.XPath.Expression System.Xml.XPath.XPathFunctionContains::arg1
	Expression_t1452783009 * ___arg1_1;

public:
	inline static int32_t get_offset_of_arg0_0() { return static_cast<int32_t>(offsetof(XPathFunctionContains_t678583606, ___arg0_0)); }
	inline Expression_t1452783009 * get_arg0_0() const { return ___arg0_0; }
	inline Expression_t1452783009 ** get_address_of_arg0_0() { return &___arg0_0; }
	inline void set_arg0_0(Expression_t1452783009 * value)
	{
		___arg0_0 = value;
		Il2CppCodeGenWriteBarrier((&___arg0_0), value);
	}

	inline static int32_t get_offset_of_arg1_1() { return static_cast<int32_t>(offsetof(XPathFunctionContains_t678583606, ___arg1_1)); }
	inline Expression_t1452783009 * get_arg1_1() const { return ___arg1_1; }
	inline Expression_t1452783009 ** get_address_of_arg1_1() { return &___arg1_1; }
	inline void set_arg1_1(Expression_t1452783009 * value)
	{
		___arg1_1 = value;
		Il2CppCodeGenWriteBarrier((&___arg1_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // XPATHFUNCTIONCONTAINS_T678583606_H
#ifndef XPATHFUNCTIONCOUNT_T4174407007_H
#define XPATHFUNCTIONCOUNT_T4174407007_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.XPath.XPathFunctionCount
struct  XPathFunctionCount_t4174407007  : public XPathFunction_t857746608
{
public:
	// System.Xml.XPath.Expression System.Xml.XPath.XPathFunctionCount::arg0
	Expression_t1452783009 * ___arg0_0;

public:
	inline static int32_t get_offset_of_arg0_0() { return static_cast<int32_t>(offsetof(XPathFunctionCount_t4174407007, ___arg0_0)); }
	inline Expression_t1452783009 * get_arg0_0() const { return ___arg0_0; }
	inline Expression_t1452783009 ** get_address_of_arg0_0() { return &___arg0_0; }
	inline void set_arg0_0(Expression_t1452783009 * value)
	{
		___arg0_0 = value;
		Il2CppCodeGenWriteBarrier((&___arg0_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // XPATHFUNCTIONCOUNT_T4174407007_H
#ifndef XPATHFUNCTIONID_T1670301333_H
#define XPATHFUNCTIONID_T1670301333_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.XPath.XPathFunctionId
struct  XPathFunctionId_t1670301333  : public XPathFunction_t857746608
{
public:
	// System.Xml.XPath.Expression System.Xml.XPath.XPathFunctionId::arg0
	Expression_t1452783009 * ___arg0_0;

public:
	inline static int32_t get_offset_of_arg0_0() { return static_cast<int32_t>(offsetof(XPathFunctionId_t1670301333, ___arg0_0)); }
	inline Expression_t1452783009 * get_arg0_0() const { return ___arg0_0; }
	inline Expression_t1452783009 ** get_address_of_arg0_0() { return &___arg0_0; }
	inline void set_arg0_0(Expression_t1452783009 * value)
	{
		___arg0_0 = value;
		Il2CppCodeGenWriteBarrier((&___arg0_0), value);
	}
};

struct XPathFunctionId_t1670301333_StaticFields
{
public:
	// System.Char[] System.Xml.XPath.XPathFunctionId::rgchWhitespace
	CharU5BU5D_t3528271667* ___rgchWhitespace_1;

public:
	inline static int32_t get_offset_of_rgchWhitespace_1() { return static_cast<int32_t>(offsetof(XPathFunctionId_t1670301333_StaticFields, ___rgchWhitespace_1)); }
	inline CharU5BU5D_t3528271667* get_rgchWhitespace_1() const { return ___rgchWhitespace_1; }
	inline CharU5BU5D_t3528271667** get_address_of_rgchWhitespace_1() { return &___rgchWhitespace_1; }
	inline void set_rgchWhitespace_1(CharU5BU5D_t3528271667* value)
	{
		___rgchWhitespace_1 = value;
		Il2CppCodeGenWriteBarrier((&___rgchWhitespace_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // XPATHFUNCTIONID_T1670301333_H
#ifndef RUNTIMEFIELDHANDLE_T1871169219_H
#define RUNTIMEFIELDHANDLE_T1871169219_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.RuntimeFieldHandle
struct  RuntimeFieldHandle_t1871169219 
{
public:
	// System.IntPtr System.RuntimeFieldHandle::value
	intptr_t ___value_0;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(RuntimeFieldHandle_t1871169219, ___value_0)); }
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
#endif // RUNTIMEFIELDHANDLE_T1871169219_H
#ifndef U3CPRIVATEIMPLEMENTATIONDETAILSU3E_T3057255365_H
#define U3CPRIVATEIMPLEMENTATIONDETAILSU3E_T3057255365_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>
struct  U3CPrivateImplementationDetailsU3E_t3057255365  : public RuntimeObject
{
public:

public:
};

struct U3CPrivateImplementationDetailsU3E_t3057255365_StaticFields
{
public:
	// <PrivateImplementationDetails>/$ArrayType$208 <PrivateImplementationDetails>::$$field-0
	U24ArrayTypeU24208_t3503460108  ___U24U24fieldU2D0_0;
	// <PrivateImplementationDetails>/$ArrayType$208 <PrivateImplementationDetails>::$$field-1
	U24ArrayTypeU24208_t3503460108  ___U24U24fieldU2D1_1;
	// <PrivateImplementationDetails>/$ArrayType$236 <PrivateImplementationDetails>::$$field-2
	U24ArrayTypeU24236_t1547144958  ___U24U24fieldU2D2_2;
	// <PrivateImplementationDetails>/$ArrayType$72 <PrivateImplementationDetails>::$$field-3
	U24ArrayTypeU2472_t1683523543  ___U24U24fieldU2D3_3;
	// <PrivateImplementationDetails>/$ArrayType$236 <PrivateImplementationDetails>::$$field-4
	U24ArrayTypeU24236_t1547144958  ___U24U24fieldU2D4_4;
	// <PrivateImplementationDetails>/$ArrayType$236 <PrivateImplementationDetails>::$$field-5
	U24ArrayTypeU24236_t1547144958  ___U24U24fieldU2D5_5;
	// <PrivateImplementationDetails>/$ArrayType$72 <PrivateImplementationDetails>::$$field-6
	U24ArrayTypeU2472_t1683523543  ___U24U24fieldU2D6_6;
	// <PrivateImplementationDetails>/$ArrayType$1532 <PrivateImplementationDetails>::$$field-7
	U24ArrayTypeU241532_t2333946162  ___U24U24fieldU2D7_7;
	// <PrivateImplementationDetails>/$ArrayType$1532 <PrivateImplementationDetails>::$$field-8
	U24ArrayTypeU241532_t2333946162  ___U24U24fieldU2D8_8;
	// <PrivateImplementationDetails>/$ArrayType$12 <PrivateImplementationDetails>::$$field-18
	U24ArrayTypeU2412_t2490092599  ___U24U24fieldU2D18_9;
	// <PrivateImplementationDetails>/$ArrayType$8 <PrivateImplementationDetails>::$$field-23
	U24ArrayTypeU248_t3244137464  ___U24U24fieldU2D23_10;
	// <PrivateImplementationDetails>/$ArrayType$8 <PrivateImplementationDetails>::$$field-25
	U24ArrayTypeU248_t3244137464  ___U24U24fieldU2D25_11;
	// <PrivateImplementationDetails>/$ArrayType$8 <PrivateImplementationDetails>::$$field-26
	U24ArrayTypeU248_t3244137464  ___U24U24fieldU2D26_12;
	// <PrivateImplementationDetails>/$ArrayType$256 <PrivateImplementationDetails>::$$field-27
	U24ArrayTypeU24256_t1929481985  ___U24U24fieldU2D27_13;
	// <PrivateImplementationDetails>/$ArrayType$256 <PrivateImplementationDetails>::$$field-28
	U24ArrayTypeU24256_t1929481985  ___U24U24fieldU2D28_14;
	// <PrivateImplementationDetails>/$ArrayType$1280 <PrivateImplementationDetails>::$$field-29
	U24ArrayTypeU241280_t4290130235  ___U24U24fieldU2D29_15;
	// <PrivateImplementationDetails>/$ArrayType$12 <PrivateImplementationDetails>::$$field-43
	U24ArrayTypeU2412_t2490092599  ___U24U24fieldU2D43_16;
	// <PrivateImplementationDetails>/$ArrayType$12 <PrivateImplementationDetails>::$$field-44
	U24ArrayTypeU2412_t2490092599  ___U24U24fieldU2D44_17;

public:
	inline static int32_t get_offset_of_U24U24fieldU2D0_0() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t3057255365_StaticFields, ___U24U24fieldU2D0_0)); }
	inline U24ArrayTypeU24208_t3503460108  get_U24U24fieldU2D0_0() const { return ___U24U24fieldU2D0_0; }
	inline U24ArrayTypeU24208_t3503460108 * get_address_of_U24U24fieldU2D0_0() { return &___U24U24fieldU2D0_0; }
	inline void set_U24U24fieldU2D0_0(U24ArrayTypeU24208_t3503460108  value)
	{
		___U24U24fieldU2D0_0 = value;
	}

	inline static int32_t get_offset_of_U24U24fieldU2D1_1() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t3057255365_StaticFields, ___U24U24fieldU2D1_1)); }
	inline U24ArrayTypeU24208_t3503460108  get_U24U24fieldU2D1_1() const { return ___U24U24fieldU2D1_1; }
	inline U24ArrayTypeU24208_t3503460108 * get_address_of_U24U24fieldU2D1_1() { return &___U24U24fieldU2D1_1; }
	inline void set_U24U24fieldU2D1_1(U24ArrayTypeU24208_t3503460108  value)
	{
		___U24U24fieldU2D1_1 = value;
	}

	inline static int32_t get_offset_of_U24U24fieldU2D2_2() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t3057255365_StaticFields, ___U24U24fieldU2D2_2)); }
	inline U24ArrayTypeU24236_t1547144958  get_U24U24fieldU2D2_2() const { return ___U24U24fieldU2D2_2; }
	inline U24ArrayTypeU24236_t1547144958 * get_address_of_U24U24fieldU2D2_2() { return &___U24U24fieldU2D2_2; }
	inline void set_U24U24fieldU2D2_2(U24ArrayTypeU24236_t1547144958  value)
	{
		___U24U24fieldU2D2_2 = value;
	}

	inline static int32_t get_offset_of_U24U24fieldU2D3_3() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t3057255365_StaticFields, ___U24U24fieldU2D3_3)); }
	inline U24ArrayTypeU2472_t1683523543  get_U24U24fieldU2D3_3() const { return ___U24U24fieldU2D3_3; }
	inline U24ArrayTypeU2472_t1683523543 * get_address_of_U24U24fieldU2D3_3() { return &___U24U24fieldU2D3_3; }
	inline void set_U24U24fieldU2D3_3(U24ArrayTypeU2472_t1683523543  value)
	{
		___U24U24fieldU2D3_3 = value;
	}

	inline static int32_t get_offset_of_U24U24fieldU2D4_4() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t3057255365_StaticFields, ___U24U24fieldU2D4_4)); }
	inline U24ArrayTypeU24236_t1547144958  get_U24U24fieldU2D4_4() const { return ___U24U24fieldU2D4_4; }
	inline U24ArrayTypeU24236_t1547144958 * get_address_of_U24U24fieldU2D4_4() { return &___U24U24fieldU2D4_4; }
	inline void set_U24U24fieldU2D4_4(U24ArrayTypeU24236_t1547144958  value)
	{
		___U24U24fieldU2D4_4 = value;
	}

	inline static int32_t get_offset_of_U24U24fieldU2D5_5() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t3057255365_StaticFields, ___U24U24fieldU2D5_5)); }
	inline U24ArrayTypeU24236_t1547144958  get_U24U24fieldU2D5_5() const { return ___U24U24fieldU2D5_5; }
	inline U24ArrayTypeU24236_t1547144958 * get_address_of_U24U24fieldU2D5_5() { return &___U24U24fieldU2D5_5; }
	inline void set_U24U24fieldU2D5_5(U24ArrayTypeU24236_t1547144958  value)
	{
		___U24U24fieldU2D5_5 = value;
	}

	inline static int32_t get_offset_of_U24U24fieldU2D6_6() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t3057255365_StaticFields, ___U24U24fieldU2D6_6)); }
	inline U24ArrayTypeU2472_t1683523543  get_U24U24fieldU2D6_6() const { return ___U24U24fieldU2D6_6; }
	inline U24ArrayTypeU2472_t1683523543 * get_address_of_U24U24fieldU2D6_6() { return &___U24U24fieldU2D6_6; }
	inline void set_U24U24fieldU2D6_6(U24ArrayTypeU2472_t1683523543  value)
	{
		___U24U24fieldU2D6_6 = value;
	}

	inline static int32_t get_offset_of_U24U24fieldU2D7_7() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t3057255365_StaticFields, ___U24U24fieldU2D7_7)); }
	inline U24ArrayTypeU241532_t2333946162  get_U24U24fieldU2D7_7() const { return ___U24U24fieldU2D7_7; }
	inline U24ArrayTypeU241532_t2333946162 * get_address_of_U24U24fieldU2D7_7() { return &___U24U24fieldU2D7_7; }
	inline void set_U24U24fieldU2D7_7(U24ArrayTypeU241532_t2333946162  value)
	{
		___U24U24fieldU2D7_7 = value;
	}

	inline static int32_t get_offset_of_U24U24fieldU2D8_8() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t3057255365_StaticFields, ___U24U24fieldU2D8_8)); }
	inline U24ArrayTypeU241532_t2333946162  get_U24U24fieldU2D8_8() const { return ___U24U24fieldU2D8_8; }
	inline U24ArrayTypeU241532_t2333946162 * get_address_of_U24U24fieldU2D8_8() { return &___U24U24fieldU2D8_8; }
	inline void set_U24U24fieldU2D8_8(U24ArrayTypeU241532_t2333946162  value)
	{
		___U24U24fieldU2D8_8 = value;
	}

	inline static int32_t get_offset_of_U24U24fieldU2D18_9() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t3057255365_StaticFields, ___U24U24fieldU2D18_9)); }
	inline U24ArrayTypeU2412_t2490092599  get_U24U24fieldU2D18_9() const { return ___U24U24fieldU2D18_9; }
	inline U24ArrayTypeU2412_t2490092599 * get_address_of_U24U24fieldU2D18_9() { return &___U24U24fieldU2D18_9; }
	inline void set_U24U24fieldU2D18_9(U24ArrayTypeU2412_t2490092599  value)
	{
		___U24U24fieldU2D18_9 = value;
	}

	inline static int32_t get_offset_of_U24U24fieldU2D23_10() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t3057255365_StaticFields, ___U24U24fieldU2D23_10)); }
	inline U24ArrayTypeU248_t3244137464  get_U24U24fieldU2D23_10() const { return ___U24U24fieldU2D23_10; }
	inline U24ArrayTypeU248_t3244137464 * get_address_of_U24U24fieldU2D23_10() { return &___U24U24fieldU2D23_10; }
	inline void set_U24U24fieldU2D23_10(U24ArrayTypeU248_t3244137464  value)
	{
		___U24U24fieldU2D23_10 = value;
	}

	inline static int32_t get_offset_of_U24U24fieldU2D25_11() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t3057255365_StaticFields, ___U24U24fieldU2D25_11)); }
	inline U24ArrayTypeU248_t3244137464  get_U24U24fieldU2D25_11() const { return ___U24U24fieldU2D25_11; }
	inline U24ArrayTypeU248_t3244137464 * get_address_of_U24U24fieldU2D25_11() { return &___U24U24fieldU2D25_11; }
	inline void set_U24U24fieldU2D25_11(U24ArrayTypeU248_t3244137464  value)
	{
		___U24U24fieldU2D25_11 = value;
	}

	inline static int32_t get_offset_of_U24U24fieldU2D26_12() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t3057255365_StaticFields, ___U24U24fieldU2D26_12)); }
	inline U24ArrayTypeU248_t3244137464  get_U24U24fieldU2D26_12() const { return ___U24U24fieldU2D26_12; }
	inline U24ArrayTypeU248_t3244137464 * get_address_of_U24U24fieldU2D26_12() { return &___U24U24fieldU2D26_12; }
	inline void set_U24U24fieldU2D26_12(U24ArrayTypeU248_t3244137464  value)
	{
		___U24U24fieldU2D26_12 = value;
	}

	inline static int32_t get_offset_of_U24U24fieldU2D27_13() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t3057255365_StaticFields, ___U24U24fieldU2D27_13)); }
	inline U24ArrayTypeU24256_t1929481985  get_U24U24fieldU2D27_13() const { return ___U24U24fieldU2D27_13; }
	inline U24ArrayTypeU24256_t1929481985 * get_address_of_U24U24fieldU2D27_13() { return &___U24U24fieldU2D27_13; }
	inline void set_U24U24fieldU2D27_13(U24ArrayTypeU24256_t1929481985  value)
	{
		___U24U24fieldU2D27_13 = value;
	}

	inline static int32_t get_offset_of_U24U24fieldU2D28_14() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t3057255365_StaticFields, ___U24U24fieldU2D28_14)); }
	inline U24ArrayTypeU24256_t1929481985  get_U24U24fieldU2D28_14() const { return ___U24U24fieldU2D28_14; }
	inline U24ArrayTypeU24256_t1929481985 * get_address_of_U24U24fieldU2D28_14() { return &___U24U24fieldU2D28_14; }
	inline void set_U24U24fieldU2D28_14(U24ArrayTypeU24256_t1929481985  value)
	{
		___U24U24fieldU2D28_14 = value;
	}

	inline static int32_t get_offset_of_U24U24fieldU2D29_15() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t3057255365_StaticFields, ___U24U24fieldU2D29_15)); }
	inline U24ArrayTypeU241280_t4290130235  get_U24U24fieldU2D29_15() const { return ___U24U24fieldU2D29_15; }
	inline U24ArrayTypeU241280_t4290130235 * get_address_of_U24U24fieldU2D29_15() { return &___U24U24fieldU2D29_15; }
	inline void set_U24U24fieldU2D29_15(U24ArrayTypeU241280_t4290130235  value)
	{
		___U24U24fieldU2D29_15 = value;
	}

	inline static int32_t get_offset_of_U24U24fieldU2D43_16() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t3057255365_StaticFields, ___U24U24fieldU2D43_16)); }
	inline U24ArrayTypeU2412_t2490092599  get_U24U24fieldU2D43_16() const { return ___U24U24fieldU2D43_16; }
	inline U24ArrayTypeU2412_t2490092599 * get_address_of_U24U24fieldU2D43_16() { return &___U24U24fieldU2D43_16; }
	inline void set_U24U24fieldU2D43_16(U24ArrayTypeU2412_t2490092599  value)
	{
		___U24U24fieldU2D43_16 = value;
	}

	inline static int32_t get_offset_of_U24U24fieldU2D44_17() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t3057255365_StaticFields, ___U24U24fieldU2D44_17)); }
	inline U24ArrayTypeU2412_t2490092599  get_U24U24fieldU2D44_17() const { return ___U24U24fieldU2D44_17; }
	inline U24ArrayTypeU2412_t2490092599 * get_address_of_U24U24fieldU2D44_17() { return &___U24U24fieldU2D44_17; }
	inline void set_U24U24fieldU2D44_17(U24ArrayTypeU2412_t2490092599  value)
	{
		___U24U24fieldU2D44_17 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CPRIVATEIMPLEMENTATIONDETAILSU3E_T3057255365_H
#ifndef XPATHFUNCTIONSTRING_T3820712894_H
#define XPATHFUNCTIONSTRING_T3820712894_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.XPath.XPathFunctionString
struct  XPathFunctionString_t3820712894  : public XPathFunction_t857746608
{
public:
	// System.Xml.XPath.Expression System.Xml.XPath.XPathFunctionString::arg0
	Expression_t1452783009 * ___arg0_0;

public:
	inline static int32_t get_offset_of_arg0_0() { return static_cast<int32_t>(offsetof(XPathFunctionString_t3820712894, ___arg0_0)); }
	inline Expression_t1452783009 * get_arg0_0() const { return ___arg0_0; }
	inline Expression_t1452783009 ** get_address_of_arg0_0() { return &___arg0_0; }
	inline void set_arg0_0(Expression_t1452783009 * value)
	{
		___arg0_0 = value;
		Il2CppCodeGenWriteBarrier((&___arg0_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // XPATHFUNCTIONSTRING_T3820712894_H
#ifndef XPATHFUNCTIONLAST_T241688620_H
#define XPATHFUNCTIONLAST_T241688620_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.XPath.XPathFunctionLast
struct  XPathFunctionLast_t241688620  : public XPathFunction_t857746608
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // XPATHFUNCTIONLAST_T241688620_H
#ifndef STREAMINGCONTEXTSTATES_T3580100459_H
#define STREAMINGCONTEXTSTATES_T3580100459_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Serialization.StreamingContextStates
struct  StreamingContextStates_t3580100459 
{
public:
	// System.Int32 System.Runtime.Serialization.StreamingContextStates::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(StreamingContextStates_t3580100459, ___value___1)); }
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
#endif // STREAMINGCONTEXTSTATES_T3580100459_H
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
#ifndef NOTSUPPORTEDEXCEPTION_T1314879016_H
#define NOTSUPPORTEDEXCEPTION_T1314879016_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.NotSupportedException
struct  NotSupportedException_t1314879016  : public SystemException_t176217640
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NOTSUPPORTEDEXCEPTION_T1314879016_H
#ifndef XPATHNAMESPACESCOPE_T4128811329_H
#define XPATHNAMESPACESCOPE_T4128811329_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.XPath.XPathNamespaceScope
struct  XPathNamespaceScope_t4128811329 
{
public:
	// System.Int32 System.Xml.XPath.XPathNamespaceScope::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(XPathNamespaceScope_t4128811329, ___value___1)); }
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
#endif // XPATHNAMESPACESCOPE_T4128811329_H
#ifndef XPATHFUNCTIONTRANSLATE_T1071508611_H
#define XPATHFUNCTIONTRANSLATE_T1071508611_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.XPath.XPathFunctionTranslate
struct  XPathFunctionTranslate_t1071508611  : public XPathFunction_t857746608
{
public:
	// System.Xml.XPath.Expression System.Xml.XPath.XPathFunctionTranslate::arg0
	Expression_t1452783009 * ___arg0_0;
	// System.Xml.XPath.Expression System.Xml.XPath.XPathFunctionTranslate::arg1
	Expression_t1452783009 * ___arg1_1;
	// System.Xml.XPath.Expression System.Xml.XPath.XPathFunctionTranslate::arg2
	Expression_t1452783009 * ___arg2_2;

public:
	inline static int32_t get_offset_of_arg0_0() { return static_cast<int32_t>(offsetof(XPathFunctionTranslate_t1071508611, ___arg0_0)); }
	inline Expression_t1452783009 * get_arg0_0() const { return ___arg0_0; }
	inline Expression_t1452783009 ** get_address_of_arg0_0() { return &___arg0_0; }
	inline void set_arg0_0(Expression_t1452783009 * value)
	{
		___arg0_0 = value;
		Il2CppCodeGenWriteBarrier((&___arg0_0), value);
	}

	inline static int32_t get_offset_of_arg1_1() { return static_cast<int32_t>(offsetof(XPathFunctionTranslate_t1071508611, ___arg1_1)); }
	inline Expression_t1452783009 * get_arg1_1() const { return ___arg1_1; }
	inline Expression_t1452783009 ** get_address_of_arg1_1() { return &___arg1_1; }
	inline void set_arg1_1(Expression_t1452783009 * value)
	{
		___arg1_1 = value;
		Il2CppCodeGenWriteBarrier((&___arg1_1), value);
	}

	inline static int32_t get_offset_of_arg2_2() { return static_cast<int32_t>(offsetof(XPathFunctionTranslate_t1071508611, ___arg2_2)); }
	inline Expression_t1452783009 * get_arg2_2() const { return ___arg2_2; }
	inline Expression_t1452783009 ** get_address_of_arg2_2() { return &___arg2_2; }
	inline void set_arg2_2(Expression_t1452783009 * value)
	{
		___arg2_2 = value;
		Il2CppCodeGenWriteBarrier((&___arg2_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // XPATHFUNCTIONTRANSLATE_T1071508611_H
#ifndef XPATHFUNCTIONSUBSTRINGBEFORE_T3299707364_H
#define XPATHFUNCTIONSUBSTRINGBEFORE_T3299707364_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.XPath.XPathFunctionSubstringBefore
struct  XPathFunctionSubstringBefore_t3299707364  : public XPathFunction_t857746608
{
public:
	// System.Xml.XPath.Expression System.Xml.XPath.XPathFunctionSubstringBefore::arg0
	Expression_t1452783009 * ___arg0_0;
	// System.Xml.XPath.Expression System.Xml.XPath.XPathFunctionSubstringBefore::arg1
	Expression_t1452783009 * ___arg1_1;

public:
	inline static int32_t get_offset_of_arg0_0() { return static_cast<int32_t>(offsetof(XPathFunctionSubstringBefore_t3299707364, ___arg0_0)); }
	inline Expression_t1452783009 * get_arg0_0() const { return ___arg0_0; }
	inline Expression_t1452783009 ** get_address_of_arg0_0() { return &___arg0_0; }
	inline void set_arg0_0(Expression_t1452783009 * value)
	{
		___arg0_0 = value;
		Il2CppCodeGenWriteBarrier((&___arg0_0), value);
	}

	inline static int32_t get_offset_of_arg1_1() { return static_cast<int32_t>(offsetof(XPathFunctionSubstringBefore_t3299707364, ___arg1_1)); }
	inline Expression_t1452783009 * get_arg1_1() const { return ___arg1_1; }
	inline Expression_t1452783009 ** get_address_of_arg1_1() { return &___arg1_1; }
	inline void set_arg1_1(Expression_t1452783009 * value)
	{
		___arg1_1 = value;
		Il2CppCodeGenWriteBarrier((&___arg1_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // XPATHFUNCTIONSUBSTRINGBEFORE_T3299707364_H
#ifndef XPATHFUNCTIONSUBSTRINGAFTER_T2254953802_H
#define XPATHFUNCTIONSUBSTRINGAFTER_T2254953802_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.XPath.XPathFunctionSubstringAfter
struct  XPathFunctionSubstringAfter_t2254953802  : public XPathFunction_t857746608
{
public:
	// System.Xml.XPath.Expression System.Xml.XPath.XPathFunctionSubstringAfter::arg0
	Expression_t1452783009 * ___arg0_0;
	// System.Xml.XPath.Expression System.Xml.XPath.XPathFunctionSubstringAfter::arg1
	Expression_t1452783009 * ___arg1_1;

public:
	inline static int32_t get_offset_of_arg0_0() { return static_cast<int32_t>(offsetof(XPathFunctionSubstringAfter_t2254953802, ___arg0_0)); }
	inline Expression_t1452783009 * get_arg0_0() const { return ___arg0_0; }
	inline Expression_t1452783009 ** get_address_of_arg0_0() { return &___arg0_0; }
	inline void set_arg0_0(Expression_t1452783009 * value)
	{
		___arg0_0 = value;
		Il2CppCodeGenWriteBarrier((&___arg0_0), value);
	}

	inline static int32_t get_offset_of_arg1_1() { return static_cast<int32_t>(offsetof(XPathFunctionSubstringAfter_t2254953802, ___arg1_1)); }
	inline Expression_t1452783009 * get_arg1_1() const { return ___arg1_1; }
	inline Expression_t1452783009 ** get_address_of_arg1_1() { return &___arg1_1; }
	inline void set_arg1_1(Expression_t1452783009 * value)
	{
		___arg1_1 = value;
		Il2CppCodeGenWriteBarrier((&___arg1_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // XPATHFUNCTIONSUBSTRINGAFTER_T2254953802_H
#ifndef XPATHFUNCTIONSUBSTRING_T3677332116_H
#define XPATHFUNCTIONSUBSTRING_T3677332116_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.XPath.XPathFunctionSubstring
struct  XPathFunctionSubstring_t3677332116  : public XPathFunction_t857746608
{
public:
	// System.Xml.XPath.Expression System.Xml.XPath.XPathFunctionSubstring::arg0
	Expression_t1452783009 * ___arg0_0;
	// System.Xml.XPath.Expression System.Xml.XPath.XPathFunctionSubstring::arg1
	Expression_t1452783009 * ___arg1_1;
	// System.Xml.XPath.Expression System.Xml.XPath.XPathFunctionSubstring::arg2
	Expression_t1452783009 * ___arg2_2;

public:
	inline static int32_t get_offset_of_arg0_0() { return static_cast<int32_t>(offsetof(XPathFunctionSubstring_t3677332116, ___arg0_0)); }
	inline Expression_t1452783009 * get_arg0_0() const { return ___arg0_0; }
	inline Expression_t1452783009 ** get_address_of_arg0_0() { return &___arg0_0; }
	inline void set_arg0_0(Expression_t1452783009 * value)
	{
		___arg0_0 = value;
		Il2CppCodeGenWriteBarrier((&___arg0_0), value);
	}

	inline static int32_t get_offset_of_arg1_1() { return static_cast<int32_t>(offsetof(XPathFunctionSubstring_t3677332116, ___arg1_1)); }
	inline Expression_t1452783009 * get_arg1_1() const { return ___arg1_1; }
	inline Expression_t1452783009 ** get_address_of_arg1_1() { return &___arg1_1; }
	inline void set_arg1_1(Expression_t1452783009 * value)
	{
		___arg1_1 = value;
		Il2CppCodeGenWriteBarrier((&___arg1_1), value);
	}

	inline static int32_t get_offset_of_arg2_2() { return static_cast<int32_t>(offsetof(XPathFunctionSubstring_t3677332116, ___arg2_2)); }
	inline Expression_t1452783009 * get_arg2_2() const { return ___arg2_2; }
	inline Expression_t1452783009 ** get_address_of_arg2_2() { return &___arg2_2; }
	inline void set_arg2_2(Expression_t1452783009 * value)
	{
		___arg2_2 = value;
		Il2CppCodeGenWriteBarrier((&___arg2_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // XPATHFUNCTIONSUBSTRING_T3677332116_H
#ifndef XPATHFUNCTIONLANG_T242671679_H
#define XPATHFUNCTIONLANG_T242671679_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.XPath.XPathFunctionLang
struct  XPathFunctionLang_t242671679  : public XPathFunction_t857746608
{
public:
	// System.Xml.XPath.Expression System.Xml.XPath.XPathFunctionLang::arg0
	Expression_t1452783009 * ___arg0_0;

public:
	inline static int32_t get_offset_of_arg0_0() { return static_cast<int32_t>(offsetof(XPathFunctionLang_t242671679, ___arg0_0)); }
	inline Expression_t1452783009 * get_arg0_0() const { return ___arg0_0; }
	inline Expression_t1452783009 ** get_address_of_arg0_0() { return &___arg0_0; }
	inline void set_arg0_0(Expression_t1452783009 * value)
	{
		___arg0_0 = value;
		Il2CppCodeGenWriteBarrier((&___arg0_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // XPATHFUNCTIONLANG_T242671679_H
#ifndef XPATHFUNCTIONSTRINGLENGTH_T1686187666_H
#define XPATHFUNCTIONSTRINGLENGTH_T1686187666_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.XPath.XPathFunctionStringLength
struct  XPathFunctionStringLength_t1686187666  : public XPathFunction_t857746608
{
public:
	// System.Xml.XPath.Expression System.Xml.XPath.XPathFunctionStringLength::arg0
	Expression_t1452783009 * ___arg0_0;

public:
	inline static int32_t get_offset_of_arg0_0() { return static_cast<int32_t>(offsetof(XPathFunctionStringLength_t1686187666, ___arg0_0)); }
	inline Expression_t1452783009 * get_arg0_0() const { return ___arg0_0; }
	inline Expression_t1452783009 ** get_address_of_arg0_0() { return &___arg0_0; }
	inline void set_arg0_0(Expression_t1452783009 * value)
	{
		___arg0_0 = value;
		Il2CppCodeGenWriteBarrier((&___arg0_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // XPATHFUNCTIONSTRINGLENGTH_T1686187666_H
#ifndef XPATHFUNCTIONSTARTSWITH_T3734288208_H
#define XPATHFUNCTIONSTARTSWITH_T3734288208_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.XPath.XPathFunctionStartsWith
struct  XPathFunctionStartsWith_t3734288208  : public XPathFunction_t857746608
{
public:
	// System.Xml.XPath.Expression System.Xml.XPath.XPathFunctionStartsWith::arg0
	Expression_t1452783009 * ___arg0_0;
	// System.Xml.XPath.Expression System.Xml.XPath.XPathFunctionStartsWith::arg1
	Expression_t1452783009 * ___arg1_1;

public:
	inline static int32_t get_offset_of_arg0_0() { return static_cast<int32_t>(offsetof(XPathFunctionStartsWith_t3734288208, ___arg0_0)); }
	inline Expression_t1452783009 * get_arg0_0() const { return ___arg0_0; }
	inline Expression_t1452783009 ** get_address_of_arg0_0() { return &___arg0_0; }
	inline void set_arg0_0(Expression_t1452783009 * value)
	{
		___arg0_0 = value;
		Il2CppCodeGenWriteBarrier((&___arg0_0), value);
	}

	inline static int32_t get_offset_of_arg1_1() { return static_cast<int32_t>(offsetof(XPathFunctionStartsWith_t3734288208, ___arg1_1)); }
	inline Expression_t1452783009 * get_arg1_1() const { return ___arg1_1; }
	inline Expression_t1452783009 ** get_address_of_arg1_1() { return &___arg1_1; }
	inline void set_arg1_1(Expression_t1452783009 * value)
	{
		___arg1_1 = value;
		Il2CppCodeGenWriteBarrier((&___arg1_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // XPATHFUNCTIONSTARTSWITH_T3734288208_H
#ifndef FORMATEXCEPTION_T154580423_H
#define FORMATEXCEPTION_T154580423_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.FormatException
struct  FormatException_t154580423  : public SystemException_t176217640
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // FORMATEXCEPTION_T154580423_H
#ifndef NUMBERSTYLES_T617258130_H
#define NUMBERSTYLES_T617258130_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Globalization.NumberStyles
struct  NumberStyles_t617258130 
{
public:
	// System.Int32 System.Globalization.NumberStyles::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(NumberStyles_t617258130, ___value___1)); }
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
#endif // NUMBERSTYLES_T617258130_H
#ifndef ARGUMENTEXCEPTION_T132251570_H
#define ARGUMENTEXCEPTION_T132251570_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ArgumentException
struct  ArgumentException_t132251570  : public SystemException_t176217640
{
public:
	// System.String System.ArgumentException::param_name
	String_t* ___param_name_12;

public:
	inline static int32_t get_offset_of_param_name_12() { return static_cast<int32_t>(offsetof(ArgumentException_t132251570, ___param_name_12)); }
	inline String_t* get_param_name_12() const { return ___param_name_12; }
	inline String_t** get_address_of_param_name_12() { return &___param_name_12; }
	inline void set_param_name_12(String_t* value)
	{
		___param_name_12 = value;
		Il2CppCodeGenWriteBarrier((&___param_name_12), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ARGUMENTEXCEPTION_T132251570_H
#ifndef XPATHFUNCTIONPOSITION_T1996792158_H
#define XPATHFUNCTIONPOSITION_T1996792158_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.XPath.XPathFunctionPosition
struct  XPathFunctionPosition_t1996792158  : public XPathFunction_t857746608
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // XPATHFUNCTIONPOSITION_T1996792158_H
#ifndef XPATHFUNCTIONNORMALIZESPACE_T379159227_H
#define XPATHFUNCTIONNORMALIZESPACE_T379159227_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.XPath.XPathFunctionNormalizeSpace
struct  XPathFunctionNormalizeSpace_t379159227  : public XPathFunction_t857746608
{
public:
	// System.Xml.XPath.Expression System.Xml.XPath.XPathFunctionNormalizeSpace::arg0
	Expression_t1452783009 * ___arg0_0;

public:
	inline static int32_t get_offset_of_arg0_0() { return static_cast<int32_t>(offsetof(XPathFunctionNormalizeSpace_t379159227, ___arg0_0)); }
	inline Expression_t1452783009 * get_arg0_0() const { return ___arg0_0; }
	inline Expression_t1452783009 ** get_address_of_arg0_0() { return &___arg0_0; }
	inline void set_arg0_0(Expression_t1452783009 * value)
	{
		___arg0_0 = value;
		Il2CppCodeGenWriteBarrier((&___arg0_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // XPATHFUNCTIONNORMALIZESPACE_T379159227_H
#ifndef XPATHFUNCTIONNAMESPACEURI_T4077891083_H
#define XPATHFUNCTIONNAMESPACEURI_T4077891083_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.XPath.XPathFunctionNamespaceUri
struct  XPathFunctionNamespaceUri_t4077891083  : public XPathFunction_t857746608
{
public:
	// System.Xml.XPath.Expression System.Xml.XPath.XPathFunctionNamespaceUri::arg0
	Expression_t1452783009 * ___arg0_0;

public:
	inline static int32_t get_offset_of_arg0_0() { return static_cast<int32_t>(offsetof(XPathFunctionNamespaceUri_t4077891083, ___arg0_0)); }
	inline Expression_t1452783009 * get_arg0_0() const { return ___arg0_0; }
	inline Expression_t1452783009 ** get_address_of_arg0_0() { return &___arg0_0; }
	inline void set_arg0_0(Expression_t1452783009 * value)
	{
		___arg0_0 = value;
		Il2CppCodeGenWriteBarrier((&___arg0_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // XPATHFUNCTIONNAMESPACEURI_T4077891083_H
#ifndef XPATHFUNCTIONNAME_T1405602168_H
#define XPATHFUNCTIONNAME_T1405602168_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.XPath.XPathFunctionName
struct  XPathFunctionName_t1405602168  : public XPathFunction_t857746608
{
public:
	// System.Xml.XPath.Expression System.Xml.XPath.XPathFunctionName::arg0
	Expression_t1452783009 * ___arg0_0;

public:
	inline static int32_t get_offset_of_arg0_0() { return static_cast<int32_t>(offsetof(XPathFunctionName_t1405602168, ___arg0_0)); }
	inline Expression_t1452783009 * get_arg0_0() const { return ___arg0_0; }
	inline Expression_t1452783009 ** get_address_of_arg0_0() { return &___arg0_0; }
	inline void set_arg0_0(Expression_t1452783009 * value)
	{
		___arg0_0 = value;
		Il2CppCodeGenWriteBarrier((&___arg0_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // XPATHFUNCTIONNAME_T1405602168_H
#ifndef XPATHFUNCTIONLOCALNAME_T1807446049_H
#define XPATHFUNCTIONLOCALNAME_T1807446049_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.XPath.XPathFunctionLocalName
struct  XPathFunctionLocalName_t1807446049  : public XPathFunction_t857746608
{
public:
	// System.Xml.XPath.Expression System.Xml.XPath.XPathFunctionLocalName::arg0
	Expression_t1452783009 * ___arg0_0;

public:
	inline static int32_t get_offset_of_arg0_0() { return static_cast<int32_t>(offsetof(XPathFunctionLocalName_t1807446049, ___arg0_0)); }
	inline Expression_t1452783009 * get_arg0_0() const { return ___arg0_0; }
	inline Expression_t1452783009 ** get_address_of_arg0_0() { return &___arg0_0; }
	inline void set_arg0_0(Expression_t1452783009 * value)
	{
		___arg0_0 = value;
		Il2CppCodeGenWriteBarrier((&___arg0_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // XPATHFUNCTIONLOCALNAME_T1807446049_H
#ifndef XPATHFUNCTIONCONCAT_T3351639595_H
#define XPATHFUNCTIONCONCAT_T3351639595_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.XPath.XPathFunctionConcat
struct  XPathFunctionConcat_t3351639595  : public XPathFunction_t857746608
{
public:
	// System.Collections.ArrayList System.Xml.XPath.XPathFunctionConcat::rgs
	ArrayList_t2718874744 * ___rgs_0;

public:
	inline static int32_t get_offset_of_rgs_0() { return static_cast<int32_t>(offsetof(XPathFunctionConcat_t3351639595, ___rgs_0)); }
	inline ArrayList_t2718874744 * get_rgs_0() const { return ___rgs_0; }
	inline ArrayList_t2718874744 ** get_address_of_rgs_0() { return &___rgs_0; }
	inline void set_rgs_0(ArrayList_t2718874744 * value)
	{
		___rgs_0 = value;
		Il2CppCodeGenWriteBarrier((&___rgs_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // XPATHFUNCTIONCONCAT_T3351639595_H
#ifndef XPATHNUMERICFUNCTION_T307051317_H
#define XPATHNUMERICFUNCTION_T307051317_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.XPath.XPathNumericFunction
struct  XPathNumericFunction_t307051317  : public XPathFunction_t857746608
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // XPATHNUMERICFUNCTION_T307051317_H
#ifndef XMLDATATYPE_T3437356259_H
#define XMLDATATYPE_T3437356259_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.XPath.XmlDataType
struct  XmlDataType_t3437356259 
{
public:
	// System.Int32 System.Xml.XPath.XmlDataType::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(XmlDataType_t3437356259, ___value___1)); }
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
#endif // XMLDATATYPE_T3437356259_H
#ifndef XPATHNODETYPE_T3031007223_H
#define XPATHNODETYPE_T3031007223_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.XPath.XPathNodeType
struct  XPathNodeType_t3031007223 
{
public:
	// System.Int32 System.Xml.XPath.XPathNodeType::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(XPathNodeType_t3031007223, ___value___1)); }
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
#endif // XPATHNODETYPE_T3031007223_H
#ifndef EXPRUNION_T1609753984_H
#define EXPRUNION_T1609753984_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.XPath.ExprUNION
struct  ExprUNION_t1609753984  : public NodeSet_t3272593155
{
public:
	// System.Xml.XPath.Expression System.Xml.XPath.ExprUNION::left
	Expression_t1452783009 * ___left_0;
	// System.Xml.XPath.Expression System.Xml.XPath.ExprUNION::right
	Expression_t1452783009 * ___right_1;

public:
	inline static int32_t get_offset_of_left_0() { return static_cast<int32_t>(offsetof(ExprUNION_t1609753984, ___left_0)); }
	inline Expression_t1452783009 * get_left_0() const { return ___left_0; }
	inline Expression_t1452783009 ** get_address_of_left_0() { return &___left_0; }
	inline void set_left_0(Expression_t1452783009 * value)
	{
		___left_0 = value;
		Il2CppCodeGenWriteBarrier((&___left_0), value);
	}

	inline static int32_t get_offset_of_right_1() { return static_cast<int32_t>(offsetof(ExprUNION_t1609753984, ___right_1)); }
	inline Expression_t1452783009 * get_right_1() const { return ___right_1; }
	inline Expression_t1452783009 ** get_address_of_right_1() { return &___right_1; }
	inline void set_right_1(Expression_t1452783009 * value)
	{
		___right_1 = value;
		Il2CppCodeGenWriteBarrier((&___right_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EXPRUNION_T1609753984_H
#ifndef NODETEST_T747859056_H
#define NODETEST_T747859056_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.XPath.NodeTest
struct  NodeTest_t747859056  : public NodeSet_t3272593155
{
public:
	// System.Xml.XPath.AxisSpecifier System.Xml.XPath.NodeTest::_axis
	AxisSpecifier_t40435393 * ____axis_0;

public:
	inline static int32_t get_offset_of__axis_0() { return static_cast<int32_t>(offsetof(NodeTest_t747859056, ____axis_0)); }
	inline AxisSpecifier_t40435393 * get__axis_0() const { return ____axis_0; }
	inline AxisSpecifier_t40435393 ** get_address_of__axis_0() { return &____axis_0; }
	inline void set__axis_0(AxisSpecifier_t40435393 * value)
	{
		____axis_0 = value;
		Il2CppCodeGenWriteBarrier((&____axis_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NODETEST_T747859056_H
#ifndef AXES_T1882171014_H
#define AXES_T1882171014_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.XPath.Axes
struct  Axes_t1882171014 
{
public:
	// System.Int32 System.Xml.XPath.Axes::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(Axes_t1882171014, ___value___1)); }
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
#endif // AXES_T1882171014_H
#ifndef EXPRSLASH2_T1762680492_H
#define EXPRSLASH2_T1762680492_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.XPath.ExprSLASH2
struct  ExprSLASH2_t1762680492  : public NodeSet_t3272593155
{
public:
	// System.Xml.XPath.Expression System.Xml.XPath.ExprSLASH2::left
	Expression_t1452783009 * ___left_0;
	// System.Xml.XPath.NodeSet System.Xml.XPath.ExprSLASH2::right
	NodeSet_t3272593155 * ___right_1;

public:
	inline static int32_t get_offset_of_left_0() { return static_cast<int32_t>(offsetof(ExprSLASH2_t1762680492, ___left_0)); }
	inline Expression_t1452783009 * get_left_0() const { return ___left_0; }
	inline Expression_t1452783009 ** get_address_of_left_0() { return &___left_0; }
	inline void set_left_0(Expression_t1452783009 * value)
	{
		___left_0 = value;
		Il2CppCodeGenWriteBarrier((&___left_0), value);
	}

	inline static int32_t get_offset_of_right_1() { return static_cast<int32_t>(offsetof(ExprSLASH2_t1762680492, ___right_1)); }
	inline NodeSet_t3272593155 * get_right_1() const { return ___right_1; }
	inline NodeSet_t3272593155 ** get_address_of_right_1() { return &___right_1; }
	inline void set_right_1(NodeSet_t3272593155 * value)
	{
		___right_1 = value;
		Il2CppCodeGenWriteBarrier((&___right_1), value);
	}
};

struct ExprSLASH2_t1762680492_StaticFields
{
public:
	// System.Xml.XPath.NodeTest System.Xml.XPath.ExprSLASH2::DescendantOrSelfStar
	NodeTest_t747859056 * ___DescendantOrSelfStar_2;

public:
	inline static int32_t get_offset_of_DescendantOrSelfStar_2() { return static_cast<int32_t>(offsetof(ExprSLASH2_t1762680492_StaticFields, ___DescendantOrSelfStar_2)); }
	inline NodeTest_t747859056 * get_DescendantOrSelfStar_2() const { return ___DescendantOrSelfStar_2; }
	inline NodeTest_t747859056 ** get_address_of_DescendantOrSelfStar_2() { return &___DescendantOrSelfStar_2; }
	inline void set_DescendantOrSelfStar_2(NodeTest_t747859056 * value)
	{
		___DescendantOrSelfStar_2 = value;
		Il2CppCodeGenWriteBarrier((&___DescendantOrSelfStar_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EXPRSLASH2_T1762680492_H
#ifndef SORTEDITERATOR_T2904376427_H
#define SORTEDITERATOR_T2904376427_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.XPath.SortedIterator
struct  SortedIterator_t2904376427  : public BaseIterator_t4168896842
{
public:
	// System.Collections.ArrayList System.Xml.XPath.SortedIterator::list
	ArrayList_t2718874744 * ___list_3;

public:
	inline static int32_t get_offset_of_list_3() { return static_cast<int32_t>(offsetof(SortedIterator_t2904376427, ___list_3)); }
	inline ArrayList_t2718874744 * get_list_3() const { return ___list_3; }
	inline ArrayList_t2718874744 ** get_address_of_list_3() { return &___list_3; }
	inline void set_list_3(ArrayList_t2718874744 * value)
	{
		___list_3 = value;
		Il2CppCodeGenWriteBarrier((&___list_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SORTEDITERATOR_T2904376427_H
#ifndef SLASHITERATOR_T2421034408_H
#define SLASHITERATOR_T2421034408_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.XPath.SlashIterator
struct  SlashIterator_t2421034408  : public BaseIterator_t4168896842
{
public:
	// System.Xml.XPath.BaseIterator System.Xml.XPath.SlashIterator::_iterLeft
	BaseIterator_t4168896842 * ____iterLeft_3;
	// System.Xml.XPath.BaseIterator System.Xml.XPath.SlashIterator::_iterRight
	BaseIterator_t4168896842 * ____iterRight_4;
	// System.Xml.XPath.NodeSet System.Xml.XPath.SlashIterator::_expr
	NodeSet_t3272593155 * ____expr_5;
	// System.Collections.SortedList System.Xml.XPath.SlashIterator::_iterList
	SortedList_t2427694641 * ____iterList_6;
	// System.Boolean System.Xml.XPath.SlashIterator::_finished
	bool ____finished_7;
	// System.Xml.XPath.BaseIterator System.Xml.XPath.SlashIterator::_nextIterRight
	BaseIterator_t4168896842 * ____nextIterRight_8;

public:
	inline static int32_t get_offset_of__iterLeft_3() { return static_cast<int32_t>(offsetof(SlashIterator_t2421034408, ____iterLeft_3)); }
	inline BaseIterator_t4168896842 * get__iterLeft_3() const { return ____iterLeft_3; }
	inline BaseIterator_t4168896842 ** get_address_of__iterLeft_3() { return &____iterLeft_3; }
	inline void set__iterLeft_3(BaseIterator_t4168896842 * value)
	{
		____iterLeft_3 = value;
		Il2CppCodeGenWriteBarrier((&____iterLeft_3), value);
	}

	inline static int32_t get_offset_of__iterRight_4() { return static_cast<int32_t>(offsetof(SlashIterator_t2421034408, ____iterRight_4)); }
	inline BaseIterator_t4168896842 * get__iterRight_4() const { return ____iterRight_4; }
	inline BaseIterator_t4168896842 ** get_address_of__iterRight_4() { return &____iterRight_4; }
	inline void set__iterRight_4(BaseIterator_t4168896842 * value)
	{
		____iterRight_4 = value;
		Il2CppCodeGenWriteBarrier((&____iterRight_4), value);
	}

	inline static int32_t get_offset_of__expr_5() { return static_cast<int32_t>(offsetof(SlashIterator_t2421034408, ____expr_5)); }
	inline NodeSet_t3272593155 * get__expr_5() const { return ____expr_5; }
	inline NodeSet_t3272593155 ** get_address_of__expr_5() { return &____expr_5; }
	inline void set__expr_5(NodeSet_t3272593155 * value)
	{
		____expr_5 = value;
		Il2CppCodeGenWriteBarrier((&____expr_5), value);
	}

	inline static int32_t get_offset_of__iterList_6() { return static_cast<int32_t>(offsetof(SlashIterator_t2421034408, ____iterList_6)); }
	inline SortedList_t2427694641 * get__iterList_6() const { return ____iterList_6; }
	inline SortedList_t2427694641 ** get_address_of__iterList_6() { return &____iterList_6; }
	inline void set__iterList_6(SortedList_t2427694641 * value)
	{
		____iterList_6 = value;
		Il2CppCodeGenWriteBarrier((&____iterList_6), value);
	}

	inline static int32_t get_offset_of__finished_7() { return static_cast<int32_t>(offsetof(SlashIterator_t2421034408, ____finished_7)); }
	inline bool get__finished_7() const { return ____finished_7; }
	inline bool* get_address_of__finished_7() { return &____finished_7; }
	inline void set__finished_7(bool value)
	{
		____finished_7 = value;
	}

	inline static int32_t get_offset_of__nextIterRight_8() { return static_cast<int32_t>(offsetof(SlashIterator_t2421034408, ____nextIterRight_8)); }
	inline BaseIterator_t4168896842 * get__nextIterRight_8() const { return ____nextIterRight_8; }
	inline BaseIterator_t4168896842 ** get_address_of__nextIterRight_8() { return &____nextIterRight_8; }
	inline void set__nextIterRight_8(BaseIterator_t4168896842 * value)
	{
		____nextIterRight_8 = value;
		Il2CppCodeGenWriteBarrier((&____nextIterRight_8), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SLASHITERATOR_T2421034408_H
#ifndef UNIONITERATOR_T312972106_H
#define UNIONITERATOR_T312972106_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.XPath.UnionIterator
struct  UnionIterator_t312972106  : public BaseIterator_t4168896842
{
public:
	// System.Xml.XPath.BaseIterator System.Xml.XPath.UnionIterator::_left
	BaseIterator_t4168896842 * ____left_3;
	// System.Xml.XPath.BaseIterator System.Xml.XPath.UnionIterator::_right
	BaseIterator_t4168896842 * ____right_4;
	// System.Boolean System.Xml.XPath.UnionIterator::keepLeft
	bool ___keepLeft_5;
	// System.Boolean System.Xml.XPath.UnionIterator::keepRight
	bool ___keepRight_6;
	// System.Xml.XPath.XPathNavigator System.Xml.XPath.UnionIterator::_current
	XPathNavigator_t787956054 * ____current_7;

public:
	inline static int32_t get_offset_of__left_3() { return static_cast<int32_t>(offsetof(UnionIterator_t312972106, ____left_3)); }
	inline BaseIterator_t4168896842 * get__left_3() const { return ____left_3; }
	inline BaseIterator_t4168896842 ** get_address_of__left_3() { return &____left_3; }
	inline void set__left_3(BaseIterator_t4168896842 * value)
	{
		____left_3 = value;
		Il2CppCodeGenWriteBarrier((&____left_3), value);
	}

	inline static int32_t get_offset_of__right_4() { return static_cast<int32_t>(offsetof(UnionIterator_t312972106, ____right_4)); }
	inline BaseIterator_t4168896842 * get__right_4() const { return ____right_4; }
	inline BaseIterator_t4168896842 ** get_address_of__right_4() { return &____right_4; }
	inline void set__right_4(BaseIterator_t4168896842 * value)
	{
		____right_4 = value;
		Il2CppCodeGenWriteBarrier((&____right_4), value);
	}

	inline static int32_t get_offset_of_keepLeft_5() { return static_cast<int32_t>(offsetof(UnionIterator_t312972106, ___keepLeft_5)); }
	inline bool get_keepLeft_5() const { return ___keepLeft_5; }
	inline bool* get_address_of_keepLeft_5() { return &___keepLeft_5; }
	inline void set_keepLeft_5(bool value)
	{
		___keepLeft_5 = value;
	}

	inline static int32_t get_offset_of_keepRight_6() { return static_cast<int32_t>(offsetof(UnionIterator_t312972106, ___keepRight_6)); }
	inline bool get_keepRight_6() const { return ___keepRight_6; }
	inline bool* get_address_of_keepRight_6() { return &___keepRight_6; }
	inline void set_keepRight_6(bool value)
	{
		___keepRight_6 = value;
	}

	inline static int32_t get_offset_of__current_7() { return static_cast<int32_t>(offsetof(UnionIterator_t312972106, ____current_7)); }
	inline XPathNavigator_t787956054 * get__current_7() const { return ____current_7; }
	inline XPathNavigator_t787956054 ** get_address_of__current_7() { return &____current_7; }
	inline void set__current_7(XPathNavigator_t787956054 * value)
	{
		____current_7 = value;
		Il2CppCodeGenWriteBarrier((&____current_7), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNIONITERATOR_T312972106_H
#ifndef SIMPLESLASHITERATOR_T3611200333_H
#define SIMPLESLASHITERATOR_T3611200333_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.XPath.SimpleSlashIterator
struct  SimpleSlashIterator_t3611200333  : public BaseIterator_t4168896842
{
public:
	// System.Xml.XPath.NodeSet System.Xml.XPath.SimpleSlashIterator::_expr
	NodeSet_t3272593155 * ____expr_3;
	// System.Xml.XPath.BaseIterator System.Xml.XPath.SimpleSlashIterator::_left
	BaseIterator_t4168896842 * ____left_4;
	// System.Xml.XPath.BaseIterator System.Xml.XPath.SimpleSlashIterator::_right
	BaseIterator_t4168896842 * ____right_5;
	// System.Xml.XPath.XPathNavigator System.Xml.XPath.SimpleSlashIterator::_current
	XPathNavigator_t787956054 * ____current_6;

public:
	inline static int32_t get_offset_of__expr_3() { return static_cast<int32_t>(offsetof(SimpleSlashIterator_t3611200333, ____expr_3)); }
	inline NodeSet_t3272593155 * get__expr_3() const { return ____expr_3; }
	inline NodeSet_t3272593155 ** get_address_of__expr_3() { return &____expr_3; }
	inline void set__expr_3(NodeSet_t3272593155 * value)
	{
		____expr_3 = value;
		Il2CppCodeGenWriteBarrier((&____expr_3), value);
	}

	inline static int32_t get_offset_of__left_4() { return static_cast<int32_t>(offsetof(SimpleSlashIterator_t3611200333, ____left_4)); }
	inline BaseIterator_t4168896842 * get__left_4() const { return ____left_4; }
	inline BaseIterator_t4168896842 ** get_address_of__left_4() { return &____left_4; }
	inline void set__left_4(BaseIterator_t4168896842 * value)
	{
		____left_4 = value;
		Il2CppCodeGenWriteBarrier((&____left_4), value);
	}

	inline static int32_t get_offset_of__right_5() { return static_cast<int32_t>(offsetof(SimpleSlashIterator_t3611200333, ____right_5)); }
	inline BaseIterator_t4168896842 * get__right_5() const { return ____right_5; }
	inline BaseIterator_t4168896842 ** get_address_of__right_5() { return &____right_5; }
	inline void set__right_5(BaseIterator_t4168896842 * value)
	{
		____right_5 = value;
		Il2CppCodeGenWriteBarrier((&____right_5), value);
	}

	inline static int32_t get_offset_of__current_6() { return static_cast<int32_t>(offsetof(SimpleSlashIterator_t3611200333, ____current_6)); }
	inline XPathNavigator_t787956054 * get__current_6() const { return ____current_6; }
	inline XPathNavigator_t787956054 ** get_address_of__current_6() { return &____current_6; }
	inline void set__current_6(XPathNavigator_t787956054 * value)
	{
		____current_6 = value;
		Il2CppCodeGenWriteBarrier((&____current_6), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SIMPLESLASHITERATOR_T3611200333_H
#ifndef EXPRROOT_T3091324302_H
#define EXPRROOT_T3091324302_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.XPath.ExprRoot
struct  ExprRoot_t3091324302  : public NodeSet_t3272593155
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EXPRROOT_T3091324302_H
#ifndef PARENSITERATOR_T4020310733_H
#define PARENSITERATOR_T4020310733_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.XPath.ParensIterator
struct  ParensIterator_t4020310733  : public BaseIterator_t4168896842
{
public:
	// System.Xml.XPath.BaseIterator System.Xml.XPath.ParensIterator::_iter
	BaseIterator_t4168896842 * ____iter_3;

public:
	inline static int32_t get_offset_of__iter_3() { return static_cast<int32_t>(offsetof(ParensIterator_t4020310733, ____iter_3)); }
	inline BaseIterator_t4168896842 * get__iter_3() const { return ____iter_3; }
	inline BaseIterator_t4168896842 ** get_address_of__iter_3() { return &____iter_3; }
	inline void set__iter_3(BaseIterator_t4168896842 * value)
	{
		____iter_3 = value;
		Il2CppCodeGenWriteBarrier((&____iter_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PARENSITERATOR_T4020310733_H
#ifndef WRAPPERITERATOR_T1258076988_H
#define WRAPPERITERATOR_T1258076988_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.XPath.WrapperIterator
struct  WrapperIterator_t1258076988  : public BaseIterator_t4168896842
{
public:
	// System.Xml.XPath.XPathNodeIterator System.Xml.XPath.WrapperIterator::iter
	XPathNodeIterator_t3667290188 * ___iter_3;

public:
	inline static int32_t get_offset_of_iter_3() { return static_cast<int32_t>(offsetof(WrapperIterator_t1258076988, ___iter_3)); }
	inline XPathNodeIterator_t3667290188 * get_iter_3() const { return ___iter_3; }
	inline XPathNodeIterator_t3667290188 ** get_address_of_iter_3() { return &___iter_3; }
	inline void set_iter_3(XPathNodeIterator_t3667290188 * value)
	{
		___iter_3 = value;
		Il2CppCodeGenWriteBarrier((&___iter_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // WRAPPERITERATOR_T1258076988_H
#ifndef EXPRBOOLEAN_T3855188593_H
#define EXPRBOOLEAN_T3855188593_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.XPath.ExprBoolean
struct  ExprBoolean_t3855188593  : public ExprBinary_t2069694888
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EXPRBOOLEAN_T3855188593_H
#ifndef EXPRNUMERIC_T370757872_H
#define EXPRNUMERIC_T370757872_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.XPath.ExprNumeric
struct  ExprNumeric_t370757872  : public ExprBinary_t2069694888
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EXPRNUMERIC_T370757872_H
#ifndef XPATHRESULTTYPE_T2828988488_H
#define XPATHRESULTTYPE_T2828988488_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.XPath.XPathResultType
struct  XPathResultType_t2828988488 
{
public:
	// System.Int32 System.Xml.XPath.XPathResultType::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(XPathResultType_t2828988488, ___value___1)); }
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
#endif // XPATHRESULTTYPE_T2828988488_H
#ifndef EXPRSLASH_T1263914658_H
#define EXPRSLASH_T1263914658_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.XPath.ExprSLASH
struct  ExprSLASH_t1263914658  : public NodeSet_t3272593155
{
public:
	// System.Xml.XPath.Expression System.Xml.XPath.ExprSLASH::left
	Expression_t1452783009 * ___left_0;
	// System.Xml.XPath.NodeSet System.Xml.XPath.ExprSLASH::right
	NodeSet_t3272593155 * ___right_1;

public:
	inline static int32_t get_offset_of_left_0() { return static_cast<int32_t>(offsetof(ExprSLASH_t1263914658, ___left_0)); }
	inline Expression_t1452783009 * get_left_0() const { return ___left_0; }
	inline Expression_t1452783009 ** get_address_of_left_0() { return &___left_0; }
	inline void set_left_0(Expression_t1452783009 * value)
	{
		___left_0 = value;
		Il2CppCodeGenWriteBarrier((&___left_0), value);
	}

	inline static int32_t get_offset_of_right_1() { return static_cast<int32_t>(offsetof(ExprSLASH_t1263914658, ___right_1)); }
	inline NodeSet_t3272593155 * get_right_1() const { return ___right_1; }
	inline NodeSet_t3272593155 ** get_address_of_right_1() { return &___right_1; }
	inline void set_right_1(NodeSet_t3272593155 * value)
	{
		___right_1 = value;
		Il2CppCodeGenWriteBarrier((&___right_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EXPRSLASH_T1263914658_H
#ifndef XPATHEXCEPTION_T2107611652_H
#define XPATHEXCEPTION_T2107611652_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.XPath.XPathException
struct  XPathException_t2107611652  : public SystemException_t176217640
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // XPATHEXCEPTION_T2107611652_H
#ifndef ARITHMETICEXCEPTION_T4283546778_H
#define ARITHMETICEXCEPTION_T4283546778_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ArithmeticException
struct  ArithmeticException_t4283546778  : public SystemException_t176217640
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ARITHMETICEXCEPTION_T4283546778_H
#ifndef SIMPLEITERATOR_T809567201_H
#define SIMPLEITERATOR_T809567201_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.XPath.SimpleIterator
struct  SimpleIterator_t809567201  : public BaseIterator_t4168896842
{
public:
	// System.Xml.XPath.XPathNavigator System.Xml.XPath.SimpleIterator::_nav
	XPathNavigator_t787956054 * ____nav_3;
	// System.Xml.XPath.XPathNavigator System.Xml.XPath.SimpleIterator::_current
	XPathNavigator_t787956054 * ____current_4;
	// System.Boolean System.Xml.XPath.SimpleIterator::skipfirst
	bool ___skipfirst_5;

public:
	inline static int32_t get_offset_of__nav_3() { return static_cast<int32_t>(offsetof(SimpleIterator_t809567201, ____nav_3)); }
	inline XPathNavigator_t787956054 * get__nav_3() const { return ____nav_3; }
	inline XPathNavigator_t787956054 ** get_address_of__nav_3() { return &____nav_3; }
	inline void set__nav_3(XPathNavigator_t787956054 * value)
	{
		____nav_3 = value;
		Il2CppCodeGenWriteBarrier((&____nav_3), value);
	}

	inline static int32_t get_offset_of__current_4() { return static_cast<int32_t>(offsetof(SimpleIterator_t809567201, ____current_4)); }
	inline XPathNavigator_t787956054 * get__current_4() const { return ____current_4; }
	inline XPathNavigator_t787956054 ** get_address_of__current_4() { return &____current_4; }
	inline void set__current_4(XPathNavigator_t787956054 * value)
	{
		____current_4 = value;
		Il2CppCodeGenWriteBarrier((&____current_4), value);
	}

	inline static int32_t get_offset_of_skipfirst_5() { return static_cast<int32_t>(offsetof(SimpleIterator_t809567201, ___skipfirst_5)); }
	inline bool get_skipfirst_5() const { return ___skipfirst_5; }
	inline bool* get_address_of_skipfirst_5() { return &___skipfirst_5; }
	inline void set_skipfirst_5(bool value)
	{
		___skipfirst_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SIMPLEITERATOR_T809567201_H
#ifndef XPATHBOOLEANFUNCTION_T57991257_H
#define XPATHBOOLEANFUNCTION_T57991257_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.XPath.XPathBooleanFunction
struct  XPathBooleanFunction_t57991257  : public XPathFunction_t857746608
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // XPATHBOOLEANFUNCTION_T57991257_H
#ifndef LISTITERATOR_T3066609410_H
#define LISTITERATOR_T3066609410_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.XPath.ListIterator
struct  ListIterator_t3066609410  : public BaseIterator_t4168896842
{
public:
	// System.Collections.IList System.Xml.XPath.ListIterator::_list
	RuntimeObject* ____list_3;

public:
	inline static int32_t get_offset_of__list_3() { return static_cast<int32_t>(offsetof(ListIterator_t3066609410, ____list_3)); }
	inline RuntimeObject* get__list_3() const { return ____list_3; }
	inline RuntimeObject** get_address_of__list_3() { return &____list_3; }
	inline void set__list_3(RuntimeObject* value)
	{
		____list_3 = value;
		Il2CppCodeGenWriteBarrier((&____list_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LISTITERATOR_T3066609410_H
#ifndef AXISITERATOR_T3073253660_H
#define AXISITERATOR_T3073253660_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.XPath.AxisIterator
struct  AxisIterator_t3073253660  : public BaseIterator_t4168896842
{
public:
	// System.Xml.XPath.BaseIterator System.Xml.XPath.AxisIterator::_iter
	BaseIterator_t4168896842 * ____iter_3;
	// System.Xml.XPath.NodeTest System.Xml.XPath.AxisIterator::_test
	NodeTest_t747859056 * ____test_4;

public:
	inline static int32_t get_offset_of__iter_3() { return static_cast<int32_t>(offsetof(AxisIterator_t3073253660, ____iter_3)); }
	inline BaseIterator_t4168896842 * get__iter_3() const { return ____iter_3; }
	inline BaseIterator_t4168896842 ** get_address_of__iter_3() { return &____iter_3; }
	inline void set__iter_3(BaseIterator_t4168896842 * value)
	{
		____iter_3 = value;
		Il2CppCodeGenWriteBarrier((&____iter_3), value);
	}

	inline static int32_t get_offset_of__test_4() { return static_cast<int32_t>(offsetof(AxisIterator_t3073253660, ____test_4)); }
	inline NodeTest_t747859056 * get__test_4() const { return ____test_4; }
	inline NodeTest_t747859056 ** get_address_of__test_4() { return &____test_4; }
	inline void set__test_4(NodeTest_t747859056 * value)
	{
		____test_4 = value;
		Il2CppCodeGenWriteBarrier((&____test_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // AXISITERATOR_T3073253660_H
#ifndef XMLNODEORDER_T3385003529_H
#define XMLNODEORDER_T3385003529_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.XmlNodeOrder
struct  XmlNodeOrder_t3385003529 
{
public:
	// System.Int32 System.Xml.XmlNodeOrder::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(XmlNodeOrder_t3385003529, ___value___1)); }
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
#endif // XMLNODEORDER_T3385003529_H
#ifndef INVALIDOPERATIONEXCEPTION_T56020091_H
#define INVALIDOPERATIONEXCEPTION_T56020091_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.InvalidOperationException
struct  InvalidOperationException_t56020091  : public SystemException_t176217640
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INVALIDOPERATIONEXCEPTION_T56020091_H
#ifndef XPATHFUNCTIONNOT_T3025979743_H
#define XPATHFUNCTIONNOT_T3025979743_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.XPath.XPathFunctionNot
struct  XPathFunctionNot_t3025979743  : public XPathBooleanFunction_t57991257
{
public:
	// System.Xml.XPath.Expression System.Xml.XPath.XPathFunctionNot::arg0
	Expression_t1452783009 * ___arg0_0;

public:
	inline static int32_t get_offset_of_arg0_0() { return static_cast<int32_t>(offsetof(XPathFunctionNot_t3025979743, ___arg0_0)); }
	inline Expression_t1452783009 * get_arg0_0() const { return ___arg0_0; }
	inline Expression_t1452783009 ** get_address_of_arg0_0() { return &___arg0_0; }
	inline void set_arg0_0(Expression_t1452783009 * value)
	{
		___arg0_0 = value;
		Il2CppCodeGenWriteBarrier((&___arg0_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // XPATHFUNCTIONNOT_T3025979743_H
#ifndef U3CENUMERATECHILDRENU3EC__ITERATOR0_T404642154_H
#define U3CENUMERATECHILDRENU3EC__ITERATOR0_T404642154_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.XPath.XPathNavigator/<EnumerateChildren>c__Iterator0
struct  U3CEnumerateChildrenU3Ec__Iterator0_t404642154  : public RuntimeObject
{
public:
	// System.Xml.XPath.XPathNavigator System.Xml.XPath.XPathNavigator/<EnumerateChildren>c__Iterator0::n
	XPathNavigator_t787956054 * ___n_0;
	// System.Xml.XPath.XPathNavigator System.Xml.XPath.XPathNavigator/<EnumerateChildren>c__Iterator0::<nav>__0
	XPathNavigator_t787956054 * ___U3CnavU3E__0_1;
	// System.Xml.XPath.XPathNavigator System.Xml.XPath.XPathNavigator/<EnumerateChildren>c__Iterator0::<nav2>__1
	XPathNavigator_t787956054 * ___U3Cnav2U3E__1_2;
	// System.Xml.XPath.XPathNodeType System.Xml.XPath.XPathNavigator/<EnumerateChildren>c__Iterator0::type
	int32_t ___type_3;
	// System.Int32 System.Xml.XPath.XPathNavigator/<EnumerateChildren>c__Iterator0::$PC
	int32_t ___U24PC_4;
	// System.Object System.Xml.XPath.XPathNavigator/<EnumerateChildren>c__Iterator0::$current
	RuntimeObject * ___U24current_5;
	// System.Xml.XPath.XPathNavigator System.Xml.XPath.XPathNavigator/<EnumerateChildren>c__Iterator0::<$>n
	XPathNavigator_t787956054 * ___U3CU24U3En_6;
	// System.Xml.XPath.XPathNodeType System.Xml.XPath.XPathNavigator/<EnumerateChildren>c__Iterator0::<$>type
	int32_t ___U3CU24U3Etype_7;

public:
	inline static int32_t get_offset_of_n_0() { return static_cast<int32_t>(offsetof(U3CEnumerateChildrenU3Ec__Iterator0_t404642154, ___n_0)); }
	inline XPathNavigator_t787956054 * get_n_0() const { return ___n_0; }
	inline XPathNavigator_t787956054 ** get_address_of_n_0() { return &___n_0; }
	inline void set_n_0(XPathNavigator_t787956054 * value)
	{
		___n_0 = value;
		Il2CppCodeGenWriteBarrier((&___n_0), value);
	}

	inline static int32_t get_offset_of_U3CnavU3E__0_1() { return static_cast<int32_t>(offsetof(U3CEnumerateChildrenU3Ec__Iterator0_t404642154, ___U3CnavU3E__0_1)); }
	inline XPathNavigator_t787956054 * get_U3CnavU3E__0_1() const { return ___U3CnavU3E__0_1; }
	inline XPathNavigator_t787956054 ** get_address_of_U3CnavU3E__0_1() { return &___U3CnavU3E__0_1; }
	inline void set_U3CnavU3E__0_1(XPathNavigator_t787956054 * value)
	{
		___U3CnavU3E__0_1 = value;
		Il2CppCodeGenWriteBarrier((&___U3CnavU3E__0_1), value);
	}

	inline static int32_t get_offset_of_U3Cnav2U3E__1_2() { return static_cast<int32_t>(offsetof(U3CEnumerateChildrenU3Ec__Iterator0_t404642154, ___U3Cnav2U3E__1_2)); }
	inline XPathNavigator_t787956054 * get_U3Cnav2U3E__1_2() const { return ___U3Cnav2U3E__1_2; }
	inline XPathNavigator_t787956054 ** get_address_of_U3Cnav2U3E__1_2() { return &___U3Cnav2U3E__1_2; }
	inline void set_U3Cnav2U3E__1_2(XPathNavigator_t787956054 * value)
	{
		___U3Cnav2U3E__1_2 = value;
		Il2CppCodeGenWriteBarrier((&___U3Cnav2U3E__1_2), value);
	}

	inline static int32_t get_offset_of_type_3() { return static_cast<int32_t>(offsetof(U3CEnumerateChildrenU3Ec__Iterator0_t404642154, ___type_3)); }
	inline int32_t get_type_3() const { return ___type_3; }
	inline int32_t* get_address_of_type_3() { return &___type_3; }
	inline void set_type_3(int32_t value)
	{
		___type_3 = value;
	}

	inline static int32_t get_offset_of_U24PC_4() { return static_cast<int32_t>(offsetof(U3CEnumerateChildrenU3Ec__Iterator0_t404642154, ___U24PC_4)); }
	inline int32_t get_U24PC_4() const { return ___U24PC_4; }
	inline int32_t* get_address_of_U24PC_4() { return &___U24PC_4; }
	inline void set_U24PC_4(int32_t value)
	{
		___U24PC_4 = value;
	}

	inline static int32_t get_offset_of_U24current_5() { return static_cast<int32_t>(offsetof(U3CEnumerateChildrenU3Ec__Iterator0_t404642154, ___U24current_5)); }
	inline RuntimeObject * get_U24current_5() const { return ___U24current_5; }
	inline RuntimeObject ** get_address_of_U24current_5() { return &___U24current_5; }
	inline void set_U24current_5(RuntimeObject * value)
	{
		___U24current_5 = value;
		Il2CppCodeGenWriteBarrier((&___U24current_5), value);
	}

	inline static int32_t get_offset_of_U3CU24U3En_6() { return static_cast<int32_t>(offsetof(U3CEnumerateChildrenU3Ec__Iterator0_t404642154, ___U3CU24U3En_6)); }
	inline XPathNavigator_t787956054 * get_U3CU24U3En_6() const { return ___U3CU24U3En_6; }
	inline XPathNavigator_t787956054 ** get_address_of_U3CU24U3En_6() { return &___U3CU24U3En_6; }
	inline void set_U3CU24U3En_6(XPathNavigator_t787956054 * value)
	{
		___U3CU24U3En_6 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU24U3En_6), value);
	}

	inline static int32_t get_offset_of_U3CU24U3Etype_7() { return static_cast<int32_t>(offsetof(U3CEnumerateChildrenU3Ec__Iterator0_t404642154, ___U3CU24U3Etype_7)); }
	inline int32_t get_U3CU24U3Etype_7() const { return ___U3CU24U3Etype_7; }
	inline int32_t* get_address_of_U3CU24U3Etype_7() { return &___U3CU24U3Etype_7; }
	inline void set_U3CU24U3Etype_7(int32_t value)
	{
		___U3CU24U3Etype_7 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CENUMERATECHILDRENU3EC__ITERATOR0_T404642154_H
#ifndef XPATHFUNCTIONFALSE_T1021066162_H
#define XPATHFUNCTIONFALSE_T1021066162_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.XPath.XPathFunctionFalse
struct  XPathFunctionFalse_t1021066162  : public XPathBooleanFunction_t57991257
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // XPATHFUNCTIONFALSE_T1021066162_H
#ifndef EXPRPLUS_T1725353634_H
#define EXPRPLUS_T1725353634_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.XPath.ExprPLUS
struct  ExprPLUS_t1725353634  : public ExprNumeric_t370757872
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EXPRPLUS_T1725353634_H
#ifndef PRECEDINGSIBLINGITERATOR_T3231156185_H
#define PRECEDINGSIBLINGITERATOR_T3231156185_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.XPath.PrecedingSiblingIterator
struct  PrecedingSiblingIterator_t3231156185  : public SimpleIterator_t809567201
{
public:
	// System.Boolean System.Xml.XPath.PrecedingSiblingIterator::finished
	bool ___finished_6;
	// System.Boolean System.Xml.XPath.PrecedingSiblingIterator::started
	bool ___started_7;
	// System.Xml.XPath.XPathNavigator System.Xml.XPath.PrecedingSiblingIterator::startPosition
	XPathNavigator_t787956054 * ___startPosition_8;

public:
	inline static int32_t get_offset_of_finished_6() { return static_cast<int32_t>(offsetof(PrecedingSiblingIterator_t3231156185, ___finished_6)); }
	inline bool get_finished_6() const { return ___finished_6; }
	inline bool* get_address_of_finished_6() { return &___finished_6; }
	inline void set_finished_6(bool value)
	{
		___finished_6 = value;
	}

	inline static int32_t get_offset_of_started_7() { return static_cast<int32_t>(offsetof(PrecedingSiblingIterator_t3231156185, ___started_7)); }
	inline bool get_started_7() const { return ___started_7; }
	inline bool* get_address_of_started_7() { return &___started_7; }
	inline void set_started_7(bool value)
	{
		___started_7 = value;
	}

	inline static int32_t get_offset_of_startPosition_8() { return static_cast<int32_t>(offsetof(PrecedingSiblingIterator_t3231156185, ___startPosition_8)); }
	inline XPathNavigator_t787956054 * get_startPosition_8() const { return ___startPosition_8; }
	inline XPathNavigator_t787956054 ** get_address_of_startPosition_8() { return &___startPosition_8; }
	inline void set_startPosition_8(XPathNavigator_t787956054 * value)
	{
		___startPosition_8 = value;
		Il2CppCodeGenWriteBarrier((&___startPosition_8), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PRECEDINGSIBLINGITERATOR_T3231156185_H
#ifndef PREDICATEITERATOR_T4231391432_H
#define PREDICATEITERATOR_T4231391432_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.XPath.PredicateIterator
struct  PredicateIterator_t4231391432  : public BaseIterator_t4168896842
{
public:
	// System.Xml.XPath.BaseIterator System.Xml.XPath.PredicateIterator::_iter
	BaseIterator_t4168896842 * ____iter_3;
	// System.Xml.XPath.Expression System.Xml.XPath.PredicateIterator::_pred
	Expression_t1452783009 * ____pred_4;
	// System.Xml.XPath.XPathResultType System.Xml.XPath.PredicateIterator::resType
	int32_t ___resType_5;
	// System.Boolean System.Xml.XPath.PredicateIterator::finished
	bool ___finished_6;

public:
	inline static int32_t get_offset_of__iter_3() { return static_cast<int32_t>(offsetof(PredicateIterator_t4231391432, ____iter_3)); }
	inline BaseIterator_t4168896842 * get__iter_3() const { return ____iter_3; }
	inline BaseIterator_t4168896842 ** get_address_of__iter_3() { return &____iter_3; }
	inline void set__iter_3(BaseIterator_t4168896842 * value)
	{
		____iter_3 = value;
		Il2CppCodeGenWriteBarrier((&____iter_3), value);
	}

	inline static int32_t get_offset_of__pred_4() { return static_cast<int32_t>(offsetof(PredicateIterator_t4231391432, ____pred_4)); }
	inline Expression_t1452783009 * get__pred_4() const { return ____pred_4; }
	inline Expression_t1452783009 ** get_address_of__pred_4() { return &____pred_4; }
	inline void set__pred_4(Expression_t1452783009 * value)
	{
		____pred_4 = value;
		Il2CppCodeGenWriteBarrier((&____pred_4), value);
	}

	inline static int32_t get_offset_of_resType_5() { return static_cast<int32_t>(offsetof(PredicateIterator_t4231391432, ___resType_5)); }
	inline int32_t get_resType_5() const { return ___resType_5; }
	inline int32_t* get_address_of_resType_5() { return &___resType_5; }
	inline void set_resType_5(int32_t value)
	{
		___resType_5 = value;
	}

	inline static int32_t get_offset_of_finished_6() { return static_cast<int32_t>(offsetof(PredicateIterator_t4231391432, ___finished_6)); }
	inline bool get_finished_6() const { return ___finished_6; }
	inline bool* get_address_of_finished_6() { return &___finished_6; }
	inline void set_finished_6(bool value)
	{
		___finished_6 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PREDICATEITERATOR_T4231391432_H
#ifndef EXPROR_T3019581832_H
#define EXPROR_T3019581832_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.XPath.ExprOR
struct  ExprOR_t3019581832  : public ExprBoolean_t3855188593
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EXPROR_T3019581832_H
#ifndef EQUALITYEXPR_T1646148531_H
#define EQUALITYEXPR_T1646148531_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.XPath.EqualityExpr
struct  EqualityExpr_t1646148531  : public ExprBoolean_t3855188593
{
public:
	// System.Boolean System.Xml.XPath.EqualityExpr::trueVal
	bool ___trueVal_2;

public:
	inline static int32_t get_offset_of_trueVal_2() { return static_cast<int32_t>(offsetof(EqualityExpr_t1646148531, ___trueVal_2)); }
	inline bool get_trueVal_2() const { return ___trueVal_2; }
	inline bool* get_address_of_trueVal_2() { return &___trueVal_2; }
	inline void set_trueVal_2(bool value)
	{
		___trueVal_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EQUALITYEXPR_T1646148531_H
#ifndef EXPRMULT_T118778748_H
#define EXPRMULT_T118778748_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.XPath.ExprMULT
struct  ExprMULT_t118778748  : public ExprNumeric_t370757872
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EXPRMULT_T118778748_H
#ifndef EXPRMOD_T1913835785_H
#define EXPRMOD_T1913835785_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.XPath.ExprMOD
struct  ExprMOD_t1913835785  : public ExprNumeric_t370757872
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EXPRMOD_T1913835785_H
#ifndef EXPRMINUS_T3125292145_H
#define EXPRMINUS_T3125292145_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.XPath.ExprMINUS
struct  ExprMINUS_t3125292145  : public ExprNumeric_t370757872
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EXPRMINUS_T3125292145_H
#ifndef STREAMINGCONTEXT_T3711869237_H
#define STREAMINGCONTEXT_T3711869237_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Serialization.StreamingContext
struct  StreamingContext_t3711869237 
{
public:
	// System.Runtime.Serialization.StreamingContextStates System.Runtime.Serialization.StreamingContext::state
	int32_t ___state_0;
	// System.Object System.Runtime.Serialization.StreamingContext::additional
	RuntimeObject * ___additional_1;

public:
	inline static int32_t get_offset_of_state_0() { return static_cast<int32_t>(offsetof(StreamingContext_t3711869237, ___state_0)); }
	inline int32_t get_state_0() const { return ___state_0; }
	inline int32_t* get_address_of_state_0() { return &___state_0; }
	inline void set_state_0(int32_t value)
	{
		___state_0 = value;
	}

	inline static int32_t get_offset_of_additional_1() { return static_cast<int32_t>(offsetof(StreamingContext_t3711869237, ___additional_1)); }
	inline RuntimeObject * get_additional_1() const { return ___additional_1; }
	inline RuntimeObject ** get_address_of_additional_1() { return &___additional_1; }
	inline void set_additional_1(RuntimeObject * value)
	{
		___additional_1 = value;
		Il2CppCodeGenWriteBarrier((&___additional_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Runtime.Serialization.StreamingContext
struct StreamingContext_t3711869237_marshaled_pinvoke
{
	int32_t ___state_0;
	Il2CppIUnknown* ___additional_1;
};
// Native definition for COM marshalling of System.Runtime.Serialization.StreamingContext
struct StreamingContext_t3711869237_marshaled_com
{
	int32_t ___state_0;
	Il2CppIUnknown* ___additional_1;
};
#endif // STREAMINGCONTEXT_T3711869237_H
#ifndef RELATIONALEXPR_T3307137467_H
#define RELATIONALEXPR_T3307137467_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.XPath.RelationalExpr
struct  RelationalExpr_t3307137467  : public ExprBoolean_t3855188593
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RELATIONALEXPR_T3307137467_H
#ifndef XPATHSORTER_T36376808_H
#define XPATHSORTER_T36376808_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.XPath.XPathSorter
struct  XPathSorter_t36376808  : public RuntimeObject
{
public:
	// System.Xml.XPath.Expression System.Xml.XPath.XPathSorter::_expr
	Expression_t1452783009 * ____expr_0;
	// System.Collections.IComparer System.Xml.XPath.XPathSorter::_cmp
	RuntimeObject* ____cmp_1;
	// System.Xml.XPath.XmlDataType System.Xml.XPath.XPathSorter::_type
	int32_t ____type_2;

public:
	inline static int32_t get_offset_of__expr_0() { return static_cast<int32_t>(offsetof(XPathSorter_t36376808, ____expr_0)); }
	inline Expression_t1452783009 * get__expr_0() const { return ____expr_0; }
	inline Expression_t1452783009 ** get_address_of__expr_0() { return &____expr_0; }
	inline void set__expr_0(Expression_t1452783009 * value)
	{
		____expr_0 = value;
		Il2CppCodeGenWriteBarrier((&____expr_0), value);
	}

	inline static int32_t get_offset_of__cmp_1() { return static_cast<int32_t>(offsetof(XPathSorter_t36376808, ____cmp_1)); }
	inline RuntimeObject* get__cmp_1() const { return ____cmp_1; }
	inline RuntimeObject** get_address_of__cmp_1() { return &____cmp_1; }
	inline void set__cmp_1(RuntimeObject* value)
	{
		____cmp_1 = value;
		Il2CppCodeGenWriteBarrier((&____cmp_1), value);
	}

	inline static int32_t get_offset_of__type_2() { return static_cast<int32_t>(offsetof(XPathSorter_t36376808, ____type_2)); }
	inline int32_t get__type_2() const { return ____type_2; }
	inline int32_t* get_address_of__type_2() { return &____type_2; }
	inline void set__type_2(int32_t value)
	{
		____type_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // XPATHSORTER_T36376808_H
#ifndef FOLLOWINGITERATOR_T3658643279_H
#define FOLLOWINGITERATOR_T3658643279_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.XPath.FollowingIterator
struct  FollowingIterator_t3658643279  : public SimpleIterator_t809567201
{
public:
	// System.Boolean System.Xml.XPath.FollowingIterator::_finished
	bool ____finished_6;

public:
	inline static int32_t get_offset_of__finished_6() { return static_cast<int32_t>(offsetof(FollowingIterator_t3658643279, ____finished_6)); }
	inline bool get__finished_6() const { return ____finished_6; }
	inline bool* get_address_of__finished_6() { return &____finished_6; }
	inline void set__finished_6(bool value)
	{
		____finished_6 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // FOLLOWINGITERATOR_T3658643279_H
#ifndef SELFITERATOR_T907214_H
#define SELFITERATOR_T907214_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.XPath.SelfIterator
struct  SelfIterator_t907214  : public SimpleIterator_t809567201
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SELFITERATOR_T907214_H
#ifndef XPATHFUNCTIONTRUE_T3806785954_H
#define XPATHFUNCTIONTRUE_T3806785954_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.XPath.XPathFunctionTrue
struct  XPathFunctionTrue_t3806785954  : public XPathBooleanFunction_t57991257
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // XPATHFUNCTIONTRUE_T3806785954_H
#ifndef XPATHFUNCTIONNUMBER_T699684043_H
#define XPATHFUNCTIONNUMBER_T699684043_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.XPath.XPathFunctionNumber
struct  XPathFunctionNumber_t699684043  : public XPathNumericFunction_t307051317
{
public:
	// System.Xml.XPath.Expression System.Xml.XPath.XPathFunctionNumber::arg0
	Expression_t1452783009 * ___arg0_0;

public:
	inline static int32_t get_offset_of_arg0_0() { return static_cast<int32_t>(offsetof(XPathFunctionNumber_t699684043, ___arg0_0)); }
	inline Expression_t1452783009 * get_arg0_0() const { return ___arg0_0; }
	inline Expression_t1452783009 ** get_address_of_arg0_0() { return &___arg0_0; }
	inline void set_arg0_0(Expression_t1452783009 * value)
	{
		___arg0_0 = value;
		Il2CppCodeGenWriteBarrier((&___arg0_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // XPATHFUNCTIONNUMBER_T699684043_H
#ifndef XPATHFUNCTIONROUND_T2668931994_H
#define XPATHFUNCTIONROUND_T2668931994_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.XPath.XPathFunctionRound
struct  XPathFunctionRound_t2668931994  : public XPathNumericFunction_t307051317
{
public:
	// System.Xml.XPath.Expression System.Xml.XPath.XPathFunctionRound::arg0
	Expression_t1452783009 * ___arg0_0;

public:
	inline static int32_t get_offset_of_arg0_0() { return static_cast<int32_t>(offsetof(XPathFunctionRound_t2668931994, ___arg0_0)); }
	inline Expression_t1452783009 * get_arg0_0() const { return ___arg0_0; }
	inline Expression_t1452783009 ** get_address_of_arg0_0() { return &___arg0_0; }
	inline void set_arg0_0(Expression_t1452783009 * value)
	{
		___arg0_0 = value;
		Il2CppCodeGenWriteBarrier((&___arg0_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // XPATHFUNCTIONROUND_T2668931994_H
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
#ifndef ARGUMENTNULLEXCEPTION_T1615371798_H
#define ARGUMENTNULLEXCEPTION_T1615371798_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ArgumentNullException
struct  ArgumentNullException_t1615371798  : public ArgumentException_t132251570
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ARGUMENTNULLEXCEPTION_T1615371798_H
#ifndef FOLLOWINGSIBLINGITERATOR_T3042855407_H
#define FOLLOWINGSIBLINGITERATOR_T3042855407_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.XPath.FollowingSiblingIterator
struct  FollowingSiblingIterator_t3042855407  : public SimpleIterator_t809567201
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // FOLLOWINGSIBLINGITERATOR_T3042855407_H
#ifndef XPATHFUNCTIONFLOOR_T3617095014_H
#define XPATHFUNCTIONFLOOR_T3617095014_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.XPath.XPathFunctionFloor
struct  XPathFunctionFloor_t3617095014  : public XPathNumericFunction_t307051317
{
public:
	// System.Xml.XPath.Expression System.Xml.XPath.XPathFunctionFloor::arg0
	Expression_t1452783009 * ___arg0_0;

public:
	inline static int32_t get_offset_of_arg0_0() { return static_cast<int32_t>(offsetof(XPathFunctionFloor_t3617095014, ___arg0_0)); }
	inline Expression_t1452783009 * get_arg0_0() const { return ___arg0_0; }
	inline Expression_t1452783009 ** get_address_of_arg0_0() { return &___arg0_0; }
	inline void set_arg0_0(Expression_t1452783009 * value)
	{
		___arg0_0 = value;
		Il2CppCodeGenWriteBarrier((&___arg0_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // XPATHFUNCTIONFLOOR_T3617095014_H
#ifndef OVERFLOWEXCEPTION_T2020128637_H
#define OVERFLOWEXCEPTION_T2020128637_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.OverflowException
struct  OverflowException_t2020128637  : public ArithmeticException_t4283546778
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // OVERFLOWEXCEPTION_T2020128637_H
#ifndef AXISSPECIFIER_T40435393_H
#define AXISSPECIFIER_T40435393_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.XPath.AxisSpecifier
struct  AxisSpecifier_t40435393  : public RuntimeObject
{
public:
	// System.Xml.XPath.Axes System.Xml.XPath.AxisSpecifier::_axis
	int32_t ____axis_0;

public:
	inline static int32_t get_offset_of__axis_0() { return static_cast<int32_t>(offsetof(AxisSpecifier_t40435393, ____axis_0)); }
	inline int32_t get__axis_0() const { return ____axis_0; }
	inline int32_t* get_address_of__axis_0() { return &____axis_0; }
	inline void set__axis_0(int32_t value)
	{
		____axis_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // AXISSPECIFIER_T40435393_H
#ifndef NAMESPACEITERATOR_T3101604877_H
#define NAMESPACEITERATOR_T3101604877_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.XPath.NamespaceIterator
struct  NamespaceIterator_t3101604877  : public SimpleIterator_t809567201
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NAMESPACEITERATOR_T3101604877_H
#ifndef NODETYPETEST_T4287533341_H
#define NODETYPETEST_T4287533341_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.XPath.NodeTypeTest
struct  NodeTypeTest_t4287533341  : public NodeTest_t747859056
{
public:
	// System.Xml.XPath.XPathNodeType System.Xml.XPath.NodeTypeTest::type
	int32_t ___type_1;
	// System.String System.Xml.XPath.NodeTypeTest::_param
	String_t* ____param_2;

public:
	inline static int32_t get_offset_of_type_1() { return static_cast<int32_t>(offsetof(NodeTypeTest_t4287533341, ___type_1)); }
	inline int32_t get_type_1() const { return ___type_1; }
	inline int32_t* get_address_of_type_1() { return &___type_1; }
	inline void set_type_1(int32_t value)
	{
		___type_1 = value;
	}

	inline static int32_t get_offset_of__param_2() { return static_cast<int32_t>(offsetof(NodeTypeTest_t4287533341, ____param_2)); }
	inline String_t* get__param_2() const { return ____param_2; }
	inline String_t** get_address_of__param_2() { return &____param_2; }
	inline void set__param_2(String_t* value)
	{
		____param_2 = value;
		Il2CppCodeGenWriteBarrier((&____param_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NODETYPETEST_T4287533341_H
#ifndef XPATHFUNCTIONCEIL_T4176839285_H
#define XPATHFUNCTIONCEIL_T4176839285_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.XPath.XPathFunctionCeil
struct  XPathFunctionCeil_t4176839285  : public XPathNumericFunction_t307051317
{
public:
	// System.Xml.XPath.Expression System.Xml.XPath.XPathFunctionCeil::arg0
	Expression_t1452783009 * ___arg0_0;

public:
	inline static int32_t get_offset_of_arg0_0() { return static_cast<int32_t>(offsetof(XPathFunctionCeil_t4176839285, ___arg0_0)); }
	inline Expression_t1452783009 * get_arg0_0() const { return ___arg0_0; }
	inline Expression_t1452783009 ** get_address_of_arg0_0() { return &___arg0_0; }
	inline void set_arg0_0(Expression_t1452783009 * value)
	{
		___arg0_0 = value;
		Il2CppCodeGenWriteBarrier((&___arg0_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // XPATHFUNCTIONCEIL_T4176839285_H
#ifndef PARENTITERATOR_T3536730964_H
#define PARENTITERATOR_T3536730964_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.XPath.ParentIterator
struct  ParentIterator_t3536730964  : public SimpleIterator_t809567201
{
public:
	// System.Boolean System.Xml.XPath.ParentIterator::canMove
	bool ___canMove_6;

public:
	inline static int32_t get_offset_of_canMove_6() { return static_cast<int32_t>(offsetof(ParentIterator_t3536730964, ___canMove_6)); }
	inline bool get_canMove_6() const { return ___canMove_6; }
	inline bool* get_address_of_canMove_6() { return &___canMove_6; }
	inline void set_canMove_6(bool value)
	{
		___canMove_6 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PARENTITERATOR_T3536730964_H
#ifndef PRECEDINGITERATOR_T2452812266_H
#define PRECEDINGITERATOR_T2452812266_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.XPath.PrecedingIterator
struct  PrecedingIterator_t2452812266  : public SimpleIterator_t809567201
{
public:
	// System.Boolean System.Xml.XPath.PrecedingIterator::finished
	bool ___finished_6;
	// System.Boolean System.Xml.XPath.PrecedingIterator::started
	bool ___started_7;
	// System.Xml.XPath.XPathNavigator System.Xml.XPath.PrecedingIterator::startPosition
	XPathNavigator_t787956054 * ___startPosition_8;

public:
	inline static int32_t get_offset_of_finished_6() { return static_cast<int32_t>(offsetof(PrecedingIterator_t2452812266, ___finished_6)); }
	inline bool get_finished_6() const { return ___finished_6; }
	inline bool* get_address_of_finished_6() { return &___finished_6; }
	inline void set_finished_6(bool value)
	{
		___finished_6 = value;
	}

	inline static int32_t get_offset_of_started_7() { return static_cast<int32_t>(offsetof(PrecedingIterator_t2452812266, ___started_7)); }
	inline bool get_started_7() const { return ___started_7; }
	inline bool* get_address_of_started_7() { return &___started_7; }
	inline void set_started_7(bool value)
	{
		___started_7 = value;
	}

	inline static int32_t get_offset_of_startPosition_8() { return static_cast<int32_t>(offsetof(PrecedingIterator_t2452812266, ___startPosition_8)); }
	inline XPathNavigator_t787956054 * get_startPosition_8() const { return ___startPosition_8; }
	inline XPathNavigator_t787956054 ** get_address_of_startPosition_8() { return &___startPosition_8; }
	inline void set_startPosition_8(XPathNavigator_t787956054 * value)
	{
		___startPosition_8 = value;
		Il2CppCodeGenWriteBarrier((&___startPosition_8), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PRECEDINGITERATOR_T2452812266_H
#ifndef XPATHFUNCTIONSUM_T2229418177_H
#define XPATHFUNCTIONSUM_T2229418177_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.XPath.XPathFunctionSum
struct  XPathFunctionSum_t2229418177  : public XPathNumericFunction_t307051317
{
public:
	// System.Xml.XPath.Expression System.Xml.XPath.XPathFunctionSum::arg0
	Expression_t1452783009 * ___arg0_0;

public:
	inline static int32_t get_offset_of_arg0_0() { return static_cast<int32_t>(offsetof(XPathFunctionSum_t2229418177, ___arg0_0)); }
	inline Expression_t1452783009 * get_arg0_0() const { return ___arg0_0; }
	inline Expression_t1452783009 ** get_address_of_arg0_0() { return &___arg0_0; }
	inline void set_arg0_0(Expression_t1452783009 * value)
	{
		___arg0_0 = value;
		Il2CppCodeGenWriteBarrier((&___arg0_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // XPATHFUNCTIONSUM_T2229418177_H
#ifndef NODENAMETEST_T562814213_H
#define NODENAMETEST_T562814213_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.XPath.NodeNameTest
struct  NodeNameTest_t562814213  : public NodeTest_t747859056
{
public:
	// System.Xml.XmlQualifiedName System.Xml.XPath.NodeNameTest::_name
	XmlQualifiedName_t2760654312 * ____name_1;
	// System.Boolean System.Xml.XPath.NodeNameTest::resolvedName
	bool ___resolvedName_2;

public:
	inline static int32_t get_offset_of__name_1() { return static_cast<int32_t>(offsetof(NodeNameTest_t562814213, ____name_1)); }
	inline XmlQualifiedName_t2760654312 * get__name_1() const { return ____name_1; }
	inline XmlQualifiedName_t2760654312 ** get_address_of__name_1() { return &____name_1; }
	inline void set__name_1(XmlQualifiedName_t2760654312 * value)
	{
		____name_1 = value;
		Il2CppCodeGenWriteBarrier((&____name_1), value);
	}

	inline static int32_t get_offset_of_resolvedName_2() { return static_cast<int32_t>(offsetof(NodeNameTest_t562814213, ___resolvedName_2)); }
	inline bool get_resolvedName_2() const { return ___resolvedName_2; }
	inline bool* get_address_of_resolvedName_2() { return &___resolvedName_2; }
	inline void set_resolvedName_2(bool value)
	{
		___resolvedName_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NODENAMETEST_T562814213_H
#ifndef XPATHFUNCTIONBOOLEAN_T2892373420_H
#define XPATHFUNCTIONBOOLEAN_T2892373420_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.XPath.XPathFunctionBoolean
struct  XPathFunctionBoolean_t2892373420  : public XPathBooleanFunction_t57991257
{
public:
	// System.Xml.XPath.Expression System.Xml.XPath.XPathFunctionBoolean::arg0
	Expression_t1452783009 * ___arg0_0;

public:
	inline static int32_t get_offset_of_arg0_0() { return static_cast<int32_t>(offsetof(XPathFunctionBoolean_t2892373420, ___arg0_0)); }
	inline Expression_t1452783009 * get_arg0_0() const { return ___arg0_0; }
	inline Expression_t1452783009 ** get_address_of_arg0_0() { return &___arg0_0; }
	inline void set_arg0_0(Expression_t1452783009 * value)
	{
		___arg0_0 = value;
		Il2CppCodeGenWriteBarrier((&___arg0_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // XPATHFUNCTIONBOOLEAN_T2892373420_H
#ifndef EXPRNE_T4135261543_H
#define EXPRNE_T4135261543_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.XPath.ExprNE
struct  ExprNE_t4135261543  : public EqualityExpr_t1646148531
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EXPRNE_T4135261543_H
#ifndef NULLITERATOR_T2630925529_H
#define NULLITERATOR_T2630925529_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.XPath.NullIterator
struct  NullIterator_t2630925529  : public SelfIterator_t907214
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NULLITERATOR_T2630925529_H
#ifndef EXPRLT_T1856585810_H
#define EXPRLT_T1856585810_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.XPath.ExprLT
struct  ExprLT_t1856585810  : public RelationalExpr_t3307137467
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EXPRLT_T1856585810_H
#ifndef EXPRLE_T4135130471_H
#define EXPRLE_T4135130471_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.XPath.ExprLE
struct  ExprLE_t4135130471  : public RelationalExpr_t3307137467
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EXPRLE_T4135130471_H
#ifndef EXPRGT_T1857306706_H
#define EXPRGT_T1857306706_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.XPath.ExprGT
struct  ExprGT_t1857306706  : public RelationalExpr_t3307137467
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EXPRGT_T1857306706_H
#ifndef EXPRGE_T4135851367_H
#define EXPRGE_T4135851367_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.XPath.ExprGE
struct  ExprGE_t4135851367  : public RelationalExpr_t3307137467
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EXPRGE_T4135851367_H
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
// System.Object[]
struct ObjectU5BU5D_t2843939325  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) RuntimeObject * m_Items[1];

public:
	inline RuntimeObject * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline RuntimeObject ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, RuntimeObject * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
	inline RuntimeObject * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline RuntimeObject ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, RuntimeObject * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
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
// System.Xml.XPath.XPathNavigator[]
struct XPathNavigatorU5BU5D_t3671675027  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) XPathNavigator_t787956054 * m_Items[1];

public:
	inline XPathNavigator_t787956054 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline XPathNavigator_t787956054 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, XPathNavigator_t787956054 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
	inline XPathNavigator_t787956054 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline XPathNavigator_t787956054 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, XPathNavigator_t787956054 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};
// System.Xml.XPath.XPathResultType[]
struct XPathResultTypeU5BU5D_t1515527577  : public RuntimeArray
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



// System.Void System.Xml.XPath.RelationalExpr::.ctor(System.Xml.XPath.Expression,System.Xml.XPath.Expression)
extern "C"  void RelationalExpr__ctor_m559163901 (RelationalExpr_t3307137467 * __this, Expression_t1452783009 * ___left0, Expression_t1452783009 * ___right1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XPath.Expression::.ctor()
extern "C"  void Expression__ctor_m15586157 (Expression_t1452783009 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String System.String::Concat(System.String,System.String,System.String)
extern "C"  String_t* String_Concat_m3755062657 (RuntimeObject * __this /* static, unused */, String_t* p0, String_t* p1, String_t* p2, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XPath.ExprNumeric::.ctor(System.Xml.XPath.Expression,System.Xml.XPath.Expression)
extern "C"  void ExprNumeric__ctor_m2321536809 (ExprNumeric_t370757872 * __this, Expression_t1452783009 * ___left0, Expression_t1452783009 * ___right1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XPath.EqualityExpr::.ctor(System.Xml.XPath.Expression,System.Xml.XPath.Expression,System.Boolean)
extern "C"  void EqualityExpr__ctor_m1260778379 (EqualityExpr_t1646148531 * __this, Expression_t1452783009 * ___left0, Expression_t1452783009 * ___right1, bool ___trueVal2, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String System.String::Concat(System.String,System.String)
extern "C"  String_t* String_Concat_m3937257545 (RuntimeObject * __this /* static, unused */, String_t* p0, String_t* p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XPath.ExprNumber::.ctor(System.Double)
extern "C"  void ExprNumber__ctor_m147059916 (ExprNumber_t3483239576 * __this, double ___value0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String System.Double::ToString()
extern "C"  String_t* Double_ToString_m1229922074 (double* __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Double System.Xml.XPath.XPathFunctions::ToNumber(System.Object)
extern "C"  double XPathFunctions_ToNumber_m1425546570 (RuntimeObject * __this /* static, unused */, RuntimeObject * ___arg0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XPath.ExprBinary::.ctor(System.Xml.XPath.Expression,System.Xml.XPath.Expression)
extern "C"  void ExprBinary__ctor_m2426281594 (ExprBinary_t2069694888 * __this, Expression_t1452783009 * ___left0, Expression_t1452783009 * ___right1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Xml.XPath.Expression System.Xml.XPath.ExprBinary::Optimize()
extern "C"  Expression_t1452783009 * ExprBinary_Optimize_m2522886035 (ExprBinary_t2069694888 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XPath.ExprBoolean::.ctor(System.Xml.XPath.Expression,System.Xml.XPath.Expression)
extern "C"  void ExprBoolean__ctor_m1159749897 (ExprBoolean_t3855188593 * __this, Expression_t1452783009 * ___left0, Expression_t1452783009 * ___right1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Xml.IXmlNamespaceResolver System.Xml.XPath.BaseIterator::get_NamespaceManager()
extern "C"  RuntimeObject* BaseIterator_get_NamespaceManager_m2542706114 (BaseIterator_t4168896842 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XPath.WrapperIterator::.ctor(System.Xml.XPath.XPathNodeIterator,System.Xml.IXmlNamespaceResolver)
extern "C"  void WrapperIterator__ctor_m1708545452 (WrapperIterator_t1258076988 * __this, XPathNodeIterator_t3667290188 * ___iter0, RuntimeObject* ___nsm1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XPath.ParensIterator::.ctor(System.Xml.XPath.BaseIterator)
extern "C"  void ParensIterator__ctor_m4211157708 (ParensIterator_t4020310733 * __this, BaseIterator_t4168896842 * ___iter0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XPath.NodeSet::.ctor()
extern "C"  void NodeSet__ctor_m958047062 (NodeSet_t3272593155 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XPath.SelfIterator::.ctor(System.Xml.XPath.XPathNavigator,System.Xml.IXmlNamespaceResolver)
extern "C"  void SelfIterator__ctor_m1955149028 (SelfIterator_t907214 * __this, XPathNavigator_t787956054 * ___nav0, RuntimeObject* ___nsm1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XPath.SimpleSlashIterator::.ctor(System.Xml.XPath.BaseIterator,System.Xml.XPath.NodeSet)
extern "C"  void SimpleSlashIterator__ctor_m3118305435 (SimpleSlashIterator_t3611200333 * __this, BaseIterator_t4168896842 * ___left0, NodeSet_t3272593155 * ___expr1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XPath.SlashIterator::.ctor(System.Xml.XPath.BaseIterator,System.Xml.XPath.NodeSet)
extern "C"  void SlashIterator__ctor_m1098282742 (SlashIterator_t2421034408 * __this, BaseIterator_t4168896842 * ___iter0, NodeSet_t3272593155 * ___expr1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XPath.SortedIterator::.ctor(System.Xml.XPath.BaseIterator)
extern "C"  void SortedIterator__ctor_m4010031056 (SortedIterator_t2904376427 * __this, BaseIterator_t4168896842 * ___iter0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XPath.NodeTypeTest::.ctor(System.Xml.XPath.Axes,System.Xml.XPath.XPathNodeType)
extern "C"  void NodeTypeTest__ctor_m3703857314 (NodeTypeTest_t4287533341 * __this, int32_t ___axis0, int32_t ___type1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Xml.XPath.AxisSpecifier System.Xml.XPath.NodeTest::get_Axis()
extern "C"  AxisSpecifier_t40435393 * NodeTest_get_Axis_m3456611747 (NodeTest_t747859056 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Xml.XPath.Axes System.Xml.XPath.AxisSpecifier::get_Axis()
extern "C"  int32_t AxisSpecifier_get_Axis_m3310811897 (AxisSpecifier_t40435393 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XPath.NodeNameTest::.ctor(System.Xml.XPath.NodeNameTest,System.Xml.XPath.Axes)
extern "C"  void NodeNameTest__ctor_m3009940847 (NodeNameTest_t562814213 * __this, NodeNameTest_t562814213 * ___source0, int32_t ___axis1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XPath.ExprSLASH::.ctor(System.Xml.XPath.Expression,System.Xml.XPath.NodeSet)
extern "C"  void ExprSLASH__ctor_m3063015905 (ExprSLASH_t1263914658 * __this, Expression_t1452783009 * ___left0, NodeSet_t3272593155 * ___right1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XPath.NodeTypeTest::.ctor(System.Xml.XPath.NodeTypeTest,System.Xml.XPath.Axes)
extern "C"  void NodeTypeTest__ctor_m922623223 (NodeTypeTest_t4287533341 * __this, NodeTypeTest_t4287533341 * ___other0, int32_t ___axis1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XPath.UnionIterator::.ctor(System.Xml.XPath.BaseIterator,System.Xml.XPath.BaseIterator,System.Xml.XPath.BaseIterator)
extern "C"  void UnionIterator__ctor_m90054607 (UnionIterator_t312972106 * __this, BaseIterator_t4168896842 * ___iter0, BaseIterator_t4168896842 * ___left1, BaseIterator_t4168896842 * ___right2, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlQualifiedName::get_Name()
extern "C"  String_t* XmlQualifiedName_get_Name_m815040483 (XmlQualifiedName_t2760654312 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlQualifiedName::get_Namespace()
extern "C"  String_t* XmlQualifiedName_get_Namespace_m3957593392 (XmlQualifiedName_t2760654312 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlQualifiedName::.ctor(System.String,System.String)
extern "C"  void XmlQualifiedName__ctor_m835061046 (XmlQualifiedName_t2760654312 * __this, String_t* ___name0, String_t* ___ns1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Type System.Object::GetType()
extern "C"  Type_t * Object_GetType_m88164663 (RuntimeObject * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String System.String::Format(System.String,System.Object,System.Object)
extern "C"  String_t* String_Format_m2556382932 (RuntimeObject * __this /* static, unused */, String_t* p0, RuntimeObject * p1, RuntimeObject * p2, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XPath.XPathException::.ctor(System.String)
extern "C"  void XPathException__ctor_m3226187054 (XPathException_t2107611652 * __this, String_t* ___message0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XPath.SimpleIterator::.ctor(System.Xml.XPath.BaseIterator)
extern "C"  void SimpleIterator__ctor_m3211911800 (SimpleIterator_t809567201 * __this, BaseIterator_t4168896842 * ___iter0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XPath.SimpleIterator::.ctor(System.Xml.XPath.SimpleIterator,System.Boolean)
extern "C"  void SimpleIterator__ctor_m1156879794 (SimpleIterator_t809567201 * __this, SimpleIterator_t809567201 * ___other0, bool ___clone1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XPath.FollowingIterator::.ctor(System.Xml.XPath.FollowingIterator)
extern "C"  void FollowingIterator__ctor_m2516869462 (FollowingIterator_t3658643279 * __this, FollowingIterator_t3658643279 * ___other0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XPath.FollowingSiblingIterator::.ctor(System.Xml.XPath.FollowingSiblingIterator)
extern "C"  void FollowingSiblingIterator__ctor_m3152868463 (FollowingSiblingIterator_t3042855407 * __this, FollowingSiblingIterator_t3042855407 * ___other0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Object::.ctor()
extern "C"  void Object__ctor_m297566312 (RuntimeObject * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XPath.BaseIterator::.ctor(System.Xml.IXmlNamespaceResolver)
extern "C"  void BaseIterator__ctor_m1145318967 (BaseIterator_t4168896842 * __this, RuntimeObject* ___nsm0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XPath.BaseIterator::.ctor(System.Xml.XPath.BaseIterator)
extern "C"  void BaseIterator__ctor_m2743981095 (BaseIterator_t4168896842 * __this, BaseIterator_t4168896842 * ___other0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XPath.ListIterator::.ctor(System.Xml.XPath.ListIterator)
extern "C"  void ListIterator__ctor_m3997947691 (ListIterator_t3066609410 * __this, ListIterator_t3066609410 * ___other0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XPath.NamespaceIterator::.ctor(System.Xml.XPath.NamespaceIterator)
extern "C"  void NamespaceIterator__ctor_m753006477 (NamespaceIterator_t3101604877 * __this, NamespaceIterator_t3101604877 * ___other0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.XPath.XPathNavigator::MoveToFirstNamespace()
extern "C"  bool XPathNavigator_MoveToFirstNamespace_m2355971184 (XPathNavigator_t787956054 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.XPath.XPathNavigator::MoveToNextNamespace()
extern "C"  bool XPathNavigator_MoveToNextNamespace_m1668516935 (XPathNavigator_t787956054 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XPath.NodeTest::.ctor(System.Xml.XPath.Axes)
extern "C"  void NodeTest__ctor_m2797019209 (NodeTest_t747859056 * __this, int32_t ___axis0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Xml.XPath.XPathNodeType System.Xml.XPath.AxisSpecifier::get_NodeType()
extern "C"  int32_t AxisSpecifier_get_NodeType_m1659759391 (AxisSpecifier_t40435393 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.String::op_Inequality(System.String,System.String)
extern "C"  bool String_op_Inequality_m215368492 (RuntimeObject * __this /* static, unused */, String_t* p0, String_t* p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.String::op_Equality(System.String,System.String)
extern "C"  bool String_op_Equality_m920492651 (RuntimeObject * __this /* static, unused */, String_t* p0, String_t* p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XPath.AxisSpecifier::.ctor(System.Xml.XPath.Axes)
extern "C"  void AxisSpecifier__ctor_m4054707554 (AxisSpecifier_t40435393 * __this, int32_t ___axis0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Xml.XPath.BaseIterator System.Xml.XPath.AxisSpecifier::Evaluate(System.Xml.XPath.BaseIterator)
extern "C"  BaseIterator_t4168896842 * AxisSpecifier_Evaluate_m1747969038 (AxisSpecifier_t40435393 * __this, BaseIterator_t4168896842 * ___iter0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XPath.AxisIterator::.ctor(System.Xml.XPath.BaseIterator,System.Xml.XPath.NodeTest)
extern "C"  void AxisIterator__ctor_m642315199 (AxisIterator_t3073253660 * __this, BaseIterator_t4168896842 * ___iter0, NodeTest_t747859056 * ___test1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XPath.NodeTypeTest::ToString(System.Xml.XPath.XPathNodeType)
extern "C"  String_t* NodeTypeTest_ToString_m2891207610 (RuntimeObject * __this /* static, unused */, int32_t ___type0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String System.String::Concat(System.String,System.String,System.String,System.String)
extern "C"  String_t* String_Concat_m2163913788 (RuntimeObject * __this /* static, unused */, String_t* p0, String_t* p1, String_t* p2, String_t* p3, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XPath.SelfIterator::.ctor(System.Xml.XPath.BaseIterator)
extern "C"  void SelfIterator__ctor_m64748653 (SelfIterator_t907214 * __this, BaseIterator_t4168896842 * ___iter0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XPath.SelfIterator::.ctor(System.Xml.XPath.SelfIterator,System.Boolean)
extern "C"  void SelfIterator__ctor_m4024533866 (SelfIterator_t907214 * __this, SelfIterator_t907214 * ___other0, bool ___clone1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XPath.NullIterator::.ctor(System.Xml.XPath.NullIterator)
extern "C"  void NullIterator__ctor_m1257795900 (NullIterator_t2630925529 * __this, NullIterator_t2630925529 * ___other0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XPath.ParensIterator::.ctor(System.Xml.XPath.ParensIterator)
extern "C"  void ParensIterator__ctor_m1023359346 (ParensIterator_t4020310733 * __this, ParensIterator_t4020310733 * ___other0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XPath.ParentIterator::.ctor(System.Xml.XPath.ParentIterator,System.Boolean)
extern "C"  void ParentIterator__ctor_m3645109500 (ParentIterator_t3536730964 * __this, ParentIterator_t3536730964 * ___other0, bool ___dummy1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XPath.PrecedingIterator::.ctor(System.Xml.XPath.PrecedingIterator)
extern "C"  void PrecedingIterator__ctor_m519667065 (PrecedingIterator_t2452812266 * __this, PrecedingIterator_t2452812266 * ___other0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XPath.PrecedingSiblingIterator::.ctor(System.Xml.XPath.PrecedingSiblingIterator)
extern "C"  void PrecedingSiblingIterator__ctor_m2225126868 (PrecedingSiblingIterator_t3231156185 * __this, PrecedingSiblingIterator_t3231156185 * ___other0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XPath.PredicateIterator::.ctor(System.Xml.XPath.PredicateIterator)
extern "C"  void PredicateIterator__ctor_m1118843382 (PredicateIterator_t4231391432 * __this, PredicateIterator_t4231391432 * ___other0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Xml.XPath.BaseIterator::get_ComparablePosition()
extern "C"  int32_t BaseIterator_get_ComparablePosition_m1985876471 (BaseIterator_t4168896842 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.XPath.XPathFunctions::ToBoolean(System.Object)
extern "C"  bool XPathFunctions_ToBoolean_m1843756110 (RuntimeObject * __this /* static, unused */, RuntimeObject * ___arg0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Xml.XPath.XPathResultType System.Xml.XPath.Expression::GetReturnType(System.Object)
extern "C"  int32_t Expression_GetReturnType_m2343007501 (RuntimeObject * __this /* static, unused */, RuntimeObject * ___obj0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Double System.Convert::ToDouble(System.Boolean)
extern "C"  double Convert_ToDouble_m954895424 (RuntimeObject * __this /* static, unused */, bool p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.XPath.RelationalExpr::Compare(System.Double,System.Double,System.Boolean)
extern "C"  bool RelationalExpr_Compare_m392784776 (RelationalExpr_t3307137467 * __this, double ___arg10, double ___arg21, bool ___fReverse2, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Double System.Xml.XPath.XPathFunctions::ToNumber(System.String)
extern "C"  double XPathFunctions_ToNumber_m2526127645 (RuntimeObject * __this /* static, unused */, String_t* ___arg0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.ArrayList::.ctor()
extern "C"  void ArrayList__ctor_m4254721275 (ArrayList_t2718874744 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XPath.SimpleIterator::.ctor(System.Xml.XPath.XPathNavigator,System.Xml.IXmlNamespaceResolver)
extern "C"  void SimpleIterator__ctor_m2043775611 (SimpleIterator_t809567201 * __this, XPathNavigator_t787956054 * ___nav0, RuntimeObject* ___nsm1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XPath.BaseIterator::SetPosition(System.Int32)
extern "C"  void BaseIterator_SetPosition_m2306090904 (BaseIterator_t4168896842 * __this, int32_t ___pos0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.XPath.BaseIterator::MoveNext()
extern "C"  bool BaseIterator_MoveNext_m932339608 (BaseIterator_t4168896842 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XPath.SimpleSlashIterator::.ctor(System.Xml.XPath.SimpleSlashIterator)
extern "C"  void SimpleSlashIterator__ctor_m1892241149 (SimpleSlashIterator_t3611200333 * __this, SimpleSlashIterator_t3611200333 * ___other0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XPath.SlashIterator::.ctor(System.Xml.XPath.SlashIterator)
extern "C"  void SlashIterator__ctor_m3733877240 (SlashIterator_t2421034408 * __this, SlashIterator_t2421034408 * ___other0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.SortedList::.ctor(System.Collections.IComparer)
extern "C"  void SortedList__ctor_m3247584155 (SortedList_t2427694641 * __this, RuntimeObject* p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XPath.SortedIterator::.ctor(System.Xml.XPath.SortedIterator)
extern "C"  void SortedIterator__ctor_m3025030651 (SortedIterator_t2904376427 * __this, SortedIterator_t2904376427 * ___other0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XPath.UnionIterator::.ctor(System.Xml.XPath.UnionIterator)
extern "C"  void UnionIterator__ctor_m2440644929 (UnionIterator_t312972106 * __this, UnionIterator_t312972106 * ___other0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XPath.UnionIterator::SetCurrent(System.Xml.XPath.XPathNodeIterator)
extern "C"  void UnionIterator_SetCurrent_m3864863490 (UnionIterator_t312972106 * __this, XPathNodeIterator_t3667290188 * ___iter0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.InvalidOperationException::.ctor(System.String)
extern "C"  void InvalidOperationException__ctor_m237278729 (InvalidOperationException_t56020091 * __this, String_t* p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XPath.WrapperIterator::.ctor(System.Xml.XPath.WrapperIterator)
extern "C"  void WrapperIterator__ctor_m144242795 (WrapperIterator_t1258076988 * __this, WrapperIterator_t1258076988 * ___other0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XPath.XPathFunction::.ctor(System.Xml.XPath.FunctionArguments)
extern "C"  void XPathFunction__ctor_m3144973253 (XPathFunction_t857746608 * __this, FunctionArguments_t3573450773 * ___args0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.SystemException::.ctor(System.String)
extern "C"  void SystemException__ctor_m3298527747 (SystemException_t176217640 * __this, String_t* p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.SystemException::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C"  void SystemException__ctor_m1515048899 (SystemException_t176217640 * __this, SerializationInfo_t950877179 * p0, StreamingContext_t3711869237  p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.SystemException::.ctor(System.String,System.Exception)
extern "C"  void SystemException__ctor_m4132668650 (SystemException_t176217640 * __this, String_t* p0, Exception_t * p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String System.Exception::get_Message()
extern "C"  String_t* Exception_get_Message_m3320461627 (Exception_t * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Xml.XPath.XPathExpression System.Xml.XPath.XPathExpression::Compile(System.String,System.Xml.IXmlNamespaceResolver,System.Xml.Xsl.IStaticXsltContext)
extern "C"  XPathExpression_t1723793351 * XPathExpression_Compile_m2626621118 (RuntimeObject * __this /* static, unused */, String_t* ___xpath0, RuntimeObject* ___nsmgr1, RuntimeObject* ___ctx2, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.XPath.XPathParser::.ctor(System.Xml.Xsl.IStaticXsltContext)
extern "C"  void XPathParser__ctor_m851057967 (XPathParser_t4136515887 * __this, RuntimeObject* ___context0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Xml.XPath.Expression Mono.Xml.XPath.XPathParser::Compile(System.String)
extern "C"  Expression_t1452783009 * XPathParser_Compile_m1959434407 (XPathParser_t4136515887 * __this, String_t* ___xpath0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XPath.CompiledExpression::.ctor(System.String,System.Xml.XPath.Expression)
extern "C"  void CompiledExpression__ctor_m3065796493 (CompiledExpression_t4018285681 * __this, String_t* ___raw0, Expression_t1452783009 * ___expr1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XPath.XPathBooleanFunction::.ctor(System.Xml.XPath.FunctionArguments)
extern "C"  void XPathBooleanFunction__ctor_m1039060572 (XPathBooleanFunction_t57991257 * __this, FunctionArguments_t3573450773 * ___args0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Xml.XPath.Expression System.Xml.XPath.FunctionArguments::get_Arg()
extern "C"  Expression_t1452783009 * FunctionArguments_get_Arg_m248443681 (FunctionArguments_t3573450773 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Xml.XPath.FunctionArguments System.Xml.XPath.FunctionArguments::get_Tail()
extern "C"  FunctionArguments_t3573450773 * FunctionArguments_get_Tail_m3050077184 (FunctionArguments_t3573450773 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.XPath.XPathFunctions::ToBoolean(System.String)
extern "C"  bool XPathFunctions_ToBoolean_m854853463 (RuntimeObject * __this /* static, unused */, String_t* ___s0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String System.String::Concat(System.String[])
extern "C"  String_t* String_Concat_m1809518182 (RuntimeObject * __this /* static, unused */, StringU5BU5D_t1281789340* p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XPath.XPathNumericFunction::.ctor(System.Xml.XPath.FunctionArguments)
extern "C"  void XPathNumericFunction__ctor_m4265073059 (XPathNumericFunction_t307051317 * __this, FunctionArguments_t3573450773 * ___args0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XPath.FunctionArguments::ToArrayList(System.Collections.ArrayList)
extern "C"  void FunctionArguments_ToArrayList_m3840216961 (FunctionArguments_t3573450773 * __this, ArrayList_t2718874744 * ___a0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.StringBuilder::.ctor()
extern "C"  void StringBuilder__ctor_m3121283359 (StringBuilder_t * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Text.StringBuilder System.Text.StringBuilder::Append(System.String)
extern "C"  StringBuilder_t * StringBuilder_Append_m1965104174 (StringBuilder_t * __this, String_t* p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String System.Text.StringBuilder::ToString()
extern "C"  String_t* StringBuilder_ToString_m3317489284 (StringBuilder_t * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Globalization.CultureInfo System.Globalization.CultureInfo::get_InvariantCulture()
extern "C"  CultureInfo_t4157843068 * CultureInfo_get_InvariantCulture_m3532445182 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Text.StringBuilder System.Text.StringBuilder::AppendFormat(System.IFormatProvider,System.String,System.Object[])
extern "C"  StringBuilder_t * StringBuilder_AppendFormat_m4227532852 (StringBuilder_t * __this, RuntimeObject* p0, String_t* p1, ObjectU5BU5D_t2843939325* p2, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Text.StringBuilder System.Text.StringBuilder::Append(System.Char)
extern "C"  StringBuilder_t * StringBuilder_Append_m2383614642 (StringBuilder_t * __this, Il2CppChar p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.String::IndexOf(System.String)
extern "C"  int32_t String_IndexOf_m1977622757 (String_t* __this, String_t* p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.CompilerServices.RuntimeHelpers::InitializeArray(System.Array,System.RuntimeFieldHandle)
extern "C"  void RuntimeHelpers_InitializeArray_m3117905507 (RuntimeObject * __this /* static, unused */, RuntimeArray * p0, RuntimeFieldHandle_t1871169219  p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XPath.XPathFunctions::ToString(System.Object)
extern "C"  String_t* XPathFunctions_ToString_m4087755365 (RuntimeObject * __this /* static, unused */, RuntimeObject * ___arg0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String[] System.String::Split(System.Char[])
extern "C"  StringU5BU5D_t1281789340* String_Split_m3646115398 (String_t* __this, CharU5BU5D_t3528271667* p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XPath.ListIterator::.ctor(System.Xml.XPath.BaseIterator,System.Collections.IList)
extern "C"  void ListIterator__ctor_m2616163549 (ListIterator_t3066609410 * __this, BaseIterator_t4168896842 * ___iter0, RuntimeObject* ___list1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String System.String::ToLower(System.Globalization.CultureInfo)
extern "C"  String_t* String_ToLower_m3490221821 (String_t* __this, CultureInfo_t4157843068 * p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Char System.String::get_Chars(System.Int32)
extern "C"  Il2CppChar String_get_Chars_m2986988803 (String_t* __this, int32_t p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.StringBuilder::get_Length()
extern "C"  int32_t StringBuilder_get_Length_m3238060835 (StringBuilder_t * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.String::get_Length()
extern "C"  int32_t String_get_Length_m3847582255 (String_t* __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Double System.Xml.XPath.XPathFunctionRound::Round(System.Double)
extern "C"  double XPathFunctionRound_Round_m2472184044 (XPathFunctionRound_t2668931994 * __this, double ___arg0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.ArgumentNullException::.ctor()
extern "C"  void ArgumentNullException__ctor_m2751210921 (ArgumentNullException_t1615371798 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Double::IsNaN(System.Double)
extern "C"  bool Double_IsNaN_m649024406 (RuntimeObject * __this /* static, unused */, double p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.ArgumentException::.ctor()
extern "C"  void ArgumentException__ctor_m3698743796 (ArgumentException_t132251570 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XPath.XPathFunctions::ToString(System.Double)
extern "C"  String_t* XPathFunctions_ToString_m1095398116 (RuntimeObject * __this /* static, unused */, double ___d0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Globalization.NumberFormatInfo System.Globalization.NumberFormatInfo::get_InvariantInfo()
extern "C"  NumberFormatInfo_t435877138 * NumberFormatInfo_get_InvariantInfo_m349577018 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String System.Double::ToString(System.String,System.IFormatProvider)
extern "C"  String_t* Double_ToString_m1051753975 (double* __this, String_t* p0, RuntimeObject* p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String System.String::Trim(System.Char[])
extern "C"  String_t* String_Trim_m3384720403 (String_t* __this, CharU5BU5D_t3528271667* p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String System.String::Concat(System.Object,System.Object)
extern "C"  String_t* String_Concat_m904156431 (RuntimeObject * __this /* static, unused */, RuntimeObject * p0, RuntimeObject * p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Double System.Double::Parse(System.String,System.Globalization.NumberStyles,System.IFormatProvider)
extern "C"  double Double_Parse_m1135962389 (RuntimeObject * __this /* static, unused */, String_t* p0, int32_t p1, RuntimeObject* p2, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.String::StartsWith(System.String)
extern "C"  bool String_StartsWith_m1759067526 (String_t* __this, String_t* p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Double::IsNegativeInfinity(System.Double)
extern "C"  bool Double_IsNegativeInfinity_m538614603 (RuntimeObject * __this /* static, unused */, double p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String System.String::Substring(System.Int32)
extern "C"  String_t* String_Substring_m2848979100 (String_t* __this, int32_t p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String System.String::Substring(System.Int32,System.Int32)
extern "C"  String_t* String_Substring_m1610150815 (String_t* __this, int32_t p0, int32_t p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.StringBuilder::.ctor(System.Int32)
extern "C"  void StringBuilder__ctor_m2367297767 (StringBuilder_t * __this, int32_t p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.String::IndexOf(System.Char)
extern "C"  int32_t String_IndexOf_m363431711 (String_t* __this, Il2CppChar p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XPath.XPathIteratorComparer::.ctor()
extern "C"  void XPathIteratorComparer__ctor_m36557046 (XPathIteratorComparer_t1799213572 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XPath.XPathItem::.ctor()
extern "C"  void XPathItem__ctor_m2336527178 (XPathItem_t4250588140 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Xml.XPath.XPathExpression System.Xml.XPath.XPathExpression::Compile(System.String)
extern "C"  XPathExpression_t1723793351 * XPathExpression_Compile_m1131673689 (RuntimeObject * __this /* static, unused */, String_t* ___xpath0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.XPath.XPathNavigator::MoveToFirstImpl()
extern "C"  bool XPathNavigator_MoveToFirstImpl_m3002450231 (XPathNavigator_t787956054 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Xml.XPath.XPathNodeIterator System.Xml.XPath.XPathNavigator::Select(System.Xml.XPath.XPathExpression,System.Xml.IXmlNamespaceResolver)
extern "C"  XPathNodeIterator_t3667290188 * XPathNavigator_Select_m776519727 (XPathNavigator_t787956054 * __this, XPathExpression_t1723793351 * ___expr0, RuntimeObject* ___ctx1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Xml.IXmlNamespaceResolver System.Xml.XPath.CompiledExpression::get_NamespaceManager()
extern "C"  RuntimeObject* CompiledExpression_get_NamespaceManager_m3942233733 (CompiledExpression_t4018285681 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XPath.NullIterator::.ctor(System.Xml.XPath.XPathNavigator,System.Xml.IXmlNamespaceResolver)
extern "C"  void NullIterator__ctor_m864984539 (NullIterator_t2630925529 * __this, XPathNavigator_t787956054 * ___nav0, RuntimeObject* ___nsm1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Xml.XPath.XPathNodeIterator System.Xml.XPath.CompiledExpression::EvaluateNodeSet(System.Xml.XPath.BaseIterator)
extern "C"  XPathNodeIterator_t3667290188 * CompiledExpression_EvaluateNodeSet_m2331909383 (CompiledExpression_t4018285681 * __this, BaseIterator_t4168896842 * ___iter0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XPath.XPathNavigator/<EnumerateChildren>c__Iterator0::.ctor()
extern "C"  void U3CEnumerateChildrenU3Ec__Iterator0__ctor_m1598908859 (U3CEnumerateChildrenU3Ec__Iterator0_t404642154 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerable System.Xml.XPath.XPathNavigator::EnumerateChildren(System.Xml.XPath.XPathNavigator,System.Xml.XPath.XPathNodeType)
extern "C"  RuntimeObject* XPathNavigator_EnumerateChildren_m3848257610 (RuntimeObject * __this /* static, unused */, XPathNavigator_t787956054 * ___n0, int32_t ___type1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XPath.XPathNavigator/EnumerableIterator::.ctor(System.Collections.IEnumerable,System.Int32)
extern "C"  void EnumerableIterator__ctor_m868206615 (EnumerableIterator_t1590428576 * __this, RuntimeObject* ___source0, int32_t ___pos1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IEnumerator`1<System.Object> System.Xml.XPath.XPathNavigator/<EnumerateChildren>c__Iterator0::System.Collections.Generic.IEnumerable<object>.GetEnumerator()
extern "C"  RuntimeObject* U3CEnumerateChildrenU3Ec__Iterator0_System_Collections_Generic_IEnumerableU3CobjectU3E_GetEnumerator_m2664109754 (U3CEnumerateChildrenU3Ec__Iterator0_t404642154 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Threading.Interlocked::CompareExchange(System.Int32&,System.Int32,System.Int32)
extern "C"  int32_t Interlocked_CompareExchange_m3023855514 (RuntimeObject * __this /* static, unused */, int32_t* p0, int32_t p1, int32_t p2, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.NotSupportedException::.ctor()
extern "C"  void NotSupportedException__ctor_m2730133172 (NotSupportedException_t1314879016 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XPath.XPathNodeIterator::.ctor()
extern "C"  void XPathNodeIterator__ctor_m2459357076 (XPathNodeIterator_t3667290188 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XPath.XPathNavigatorComparer::.ctor()
extern "C"  void XPathNavigatorComparer__ctor_m3727039997 (XPathNavigatorComparer_t2421573191 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XPath.XPathNodeIterator/<GetEnumerator>c__Iterator2::.ctor()
extern "C"  void U3CGetEnumeratorU3Ec__Iterator2__ctor_m4018238552 (U3CGetEnumeratorU3Ec__Iterator2_t90454087 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Xml.XPath.XPathSorter::Compare(System.Object,System.Object)
extern "C"  int32_t XPathSorter_Compare_m1410690161 (XPathSorter_t36376808 * __this, RuntimeObject * ___o10, RuntimeObject * ___o21, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Collections.ArrayList System.Xml.XPath.XPathSorters::ToSortElementList(System.Xml.XPath.BaseIterator)
extern "C"  ArrayList_t2718874744 * XPathSorters_ToSortElementList_m992101952 (XPathSorters_t698127628 * __this, BaseIterator_t4168896842 * ___iter0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Xml.XPath.BaseIterator System.Xml.XPath.XPathSorters::Sort(System.Collections.ArrayList,System.Xml.IXmlNamespaceResolver)
extern "C"  BaseIterator_t4168896842 * XPathSorters_Sort_m148301611 (XPathSorters_t698127628 * __this, ArrayList_t2718874744 * ___rgElts0, RuntimeObject* ___nsm1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XPath.XPathSortElement::.ctor()
extern "C"  void XPathSortElement__ctor_m4130792685 (XPathSortElement_t4237073177 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Object System.Xml.XPath.XPathSorter::Evaluate(System.Xml.XPath.BaseIterator)
extern "C"  RuntimeObject * XPathSorter_Evaluate_m2305850354 (XPathSorter_t36376808 * __this, BaseIterator_t4168896842 * ___iter0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XPath.ListIterator::.ctor(System.Collections.IList,System.Xml.IXmlNamespaceResolver)
extern "C"  void ListIterator__ctor_m1701056558 (ListIterator_t3066609410 * __this, RuntimeObject* ___list0, RuntimeObject* ___nsm1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void System.Xml.XPath.ExprGE::.ctor(System.Xml.XPath.Expression,System.Xml.XPath.Expression)
extern "C"  void ExprGE__ctor_m206563240 (ExprGE_t4135851367 * __this, Expression_t1452783009 * ___left0, Expression_t1452783009 * ___right1, const RuntimeMethod* method)
{
	{
		Expression_t1452783009 * L_0 = ___left0;
		Expression_t1452783009 * L_1 = ___right1;
		RelationalExpr__ctor_m559163901(__this, L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.String System.Xml.XPath.ExprGE::get_Operator()
extern "C"  String_t* ExprGE_get_Operator_m3471581705 (ExprGE_t4135851367 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ExprGE_get_Operator_m3471581705_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		return _stringLiteral3451762578;
	}
}
// System.Boolean System.Xml.XPath.ExprGE::Compare(System.Double,System.Double)
extern "C"  bool ExprGE_Compare_m3178659259 (ExprGE_t4135851367 * __this, double ___arg10, double ___arg21, const RuntimeMethod* method)
{
	{
		double L_0 = ___arg10;
		double L_1 = ___arg21;
		return (bool)((((int32_t)((!(((double)L_0) >= ((double)L_1)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
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
// System.Void System.Xml.XPath.ExprGT::.ctor(System.Xml.XPath.Expression,System.Xml.XPath.Expression)
extern "C"  void ExprGT__ctor_m1389473147 (ExprGT_t1857306706 * __this, Expression_t1452783009 * ___left0, Expression_t1452783009 * ___right1, const RuntimeMethod* method)
{
	{
		Expression_t1452783009 * L_0 = ___left0;
		Expression_t1452783009 * L_1 = ___right1;
		RelationalExpr__ctor_m559163901(__this, L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.String System.Xml.XPath.ExprGT::get_Operator()
extern "C"  String_t* ExprGT_get_Operator_m118927860 (ExprGT_t1857306706 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ExprGT_get_Operator_m118927860_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		return _stringLiteral3452614546;
	}
}
// System.Boolean System.Xml.XPath.ExprGT::Compare(System.Double,System.Double)
extern "C"  bool ExprGT_Compare_m2424003715 (ExprGT_t1857306706 * __this, double ___arg10, double ___arg21, const RuntimeMethod* method)
{
	{
		double L_0 = ___arg10;
		double L_1 = ___arg21;
		return (bool)((((double)L_0) > ((double)L_1))? 1 : 0);
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
// System.Void System.Xml.XPath.ExprLE::.ctor(System.Xml.XPath.Expression,System.Xml.XPath.Expression)
extern "C"  void ExprLE__ctor_m2052688359 (ExprLE_t4135130471 * __this, Expression_t1452783009 * ___left0, Expression_t1452783009 * ___right1, const RuntimeMethod* method)
{
	{
		Expression_t1452783009 * L_0 = ___left0;
		Expression_t1452783009 * L_1 = ___right1;
		RelationalExpr__ctor_m559163901(__this, L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.String System.Xml.XPath.ExprLE::get_Operator()
extern "C"  String_t* ExprLE_get_Operator_m4047881400 (ExprLE_t4135130471 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ExprLE_get_Operator_m4047881400_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		return _stringLiteral3451762580;
	}
}
// System.Boolean System.Xml.XPath.ExprLE::Compare(System.Double,System.Double)
extern "C"  bool ExprLE_Compare_m2889564456 (ExprLE_t4135130471 * __this, double ___arg10, double ___arg21, const RuntimeMethod* method)
{
	{
		double L_0 = ___arg10;
		double L_1 = ___arg21;
		return (bool)((((int32_t)((!(((double)L_0) <= ((double)L_1)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
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
// System.Void System.Xml.XPath.ExprLiteral::.ctor(System.String)
extern "C"  void ExprLiteral__ctor_m807453226 (ExprLiteral_t2264229068 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		Expression__ctor_m15586157(__this, /*hidden argument*/NULL);
		String_t* L_0 = ___value0;
		__this->set__value_0(L_0);
		return;
	}
}
// System.String System.Xml.XPath.ExprLiteral::ToString()
extern "C"  String_t* ExprLiteral_ToString_m988196231 (ExprLiteral_t2264229068 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ExprLiteral_ToString_m988196231_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = __this->get__value_0();
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_1 = String_Concat_m3755062657(NULL /*static, unused*/, _stringLiteral3452614521, L_0, _stringLiteral3452614521, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Xml.XPath.XPathResultType System.Xml.XPath.ExprLiteral::get_ReturnType()
extern "C"  int32_t ExprLiteral_get_ReturnType_m1860255559 (ExprLiteral_t2264229068 * __this, const RuntimeMethod* method)
{
	{
		return (int32_t)(1);
	}
}
// System.Boolean System.Xml.XPath.ExprLiteral::get_Peer()
extern "C"  bool ExprLiteral_get_Peer_m3813227251 (ExprLiteral_t2264229068 * __this, const RuntimeMethod* method)
{
	{
		return (bool)1;
	}
}
// System.Boolean System.Xml.XPath.ExprLiteral::get_HasStaticValue()
extern "C"  bool ExprLiteral_get_HasStaticValue_m711464056 (ExprLiteral_t2264229068 * __this, const RuntimeMethod* method)
{
	{
		return (bool)1;
	}
}
// System.String System.Xml.XPath.ExprLiteral::get_StaticValueAsString()
extern "C"  String_t* ExprLiteral_get_StaticValueAsString_m3008405135 (ExprLiteral_t2264229068 * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0 = __this->get__value_0();
		return L_0;
	}
}
// System.Object System.Xml.XPath.ExprLiteral::Evaluate(System.Xml.XPath.BaseIterator)
extern "C"  RuntimeObject * ExprLiteral_Evaluate_m4104856484 (ExprLiteral_t2264229068 * __this, BaseIterator_t4168896842 * ___iter0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = __this->get__value_0();
		return L_0;
	}
}
// System.String System.Xml.XPath.ExprLiteral::EvaluateString(System.Xml.XPath.BaseIterator)
extern "C"  String_t* ExprLiteral_EvaluateString_m3966917742 (ExprLiteral_t2264229068 * __this, BaseIterator_t4168896842 * ___iter0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = __this->get__value_0();
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
// System.Void System.Xml.XPath.ExprLT::.ctor(System.Xml.XPath.Expression,System.Xml.XPath.Expression)
extern "C"  void ExprLT__ctor_m168109738 (ExprLT_t1856585810 * __this, Expression_t1452783009 * ___left0, Expression_t1452783009 * ___right1, const RuntimeMethod* method)
{
	{
		Expression_t1452783009 * L_0 = ___left0;
		Expression_t1452783009 * L_1 = ___right1;
		RelationalExpr__ctor_m559163901(__this, L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.String System.Xml.XPath.ExprLT::get_Operator()
extern "C"  String_t* ExprLT_get_Operator_m3002619043 (ExprLT_t1856585810 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ExprLT_get_Operator_m3002619043_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		return _stringLiteral3452614548;
	}
}
// System.Boolean System.Xml.XPath.ExprLT::Compare(System.Double,System.Double)
extern "C"  bool ExprLT_Compare_m2134908912 (ExprLT_t1856585810 * __this, double ___arg10, double ___arg21, const RuntimeMethod* method)
{
	{
		double L_0 = ___arg10;
		double L_1 = ___arg21;
		return (bool)((((double)L_0) < ((double)L_1))? 1 : 0);
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
// System.Void System.Xml.XPath.ExprMINUS::.ctor(System.Xml.XPath.Expression,System.Xml.XPath.Expression)
extern "C"  void ExprMINUS__ctor_m2978623132 (ExprMINUS_t3125292145 * __this, Expression_t1452783009 * ___left0, Expression_t1452783009 * ___right1, const RuntimeMethod* method)
{
	{
		Expression_t1452783009 * L_0 = ___left0;
		Expression_t1452783009 * L_1 = ___right1;
		ExprNumeric__ctor_m2321536809(__this, L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.String System.Xml.XPath.ExprMINUS::get_Operator()
extern "C"  String_t* ExprMINUS_get_Operator_m3875394535 (ExprMINUS_t3125292145 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ExprMINUS_get_Operator_m3875394535_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		return _stringLiteral3452614531;
	}
}
// System.Double System.Xml.XPath.ExprMINUS::get_StaticValueAsNumber()
extern "C"  double ExprMINUS_get_StaticValueAsNumber_m143199884 (ExprMINUS_t3125292145 * __this, const RuntimeMethod* method)
{
	double G_B3_0 = 0.0;
	{
		bool L_0 = VirtFuncInvoker0< bool >::Invoke(7 /* System.Boolean System.Xml.XPath.ExprBinary::get_HasStaticValue() */, __this);
		if (!L_0)
		{
			goto IL_0027;
		}
	}
	{
		Expression_t1452783009 * L_1 = ((ExprBinary_t2069694888 *)__this)->get__left_0();
		double L_2 = VirtFuncInvoker0< double >::Invoke(10 /* System.Double System.Xml.XPath.Expression::get_StaticValueAsNumber() */, L_1);
		Expression_t1452783009 * L_3 = ((ExprBinary_t2069694888 *)__this)->get__right_1();
		double L_4 = VirtFuncInvoker0< double >::Invoke(10 /* System.Double System.Xml.XPath.Expression::get_StaticValueAsNumber() */, L_3);
		G_B3_0 = ((double)il2cpp_codegen_subtract((double)L_2, (double)L_4));
		goto IL_0030;
	}

IL_0027:
	{
		G_B3_0 = (0.0);
	}

IL_0030:
	{
		return G_B3_0;
	}
}
// System.Double System.Xml.XPath.ExprMINUS::EvaluateNumber(System.Xml.XPath.BaseIterator)
extern "C"  double ExprMINUS_EvaluateNumber_m2178259302 (ExprMINUS_t3125292145 * __this, BaseIterator_t4168896842 * ___iter0, const RuntimeMethod* method)
{
	{
		Expression_t1452783009 * L_0 = ((ExprBinary_t2069694888 *)__this)->get__left_0();
		BaseIterator_t4168896842 * L_1 = ___iter0;
		double L_2 = VirtFuncInvoker1< double, BaseIterator_t4168896842 * >::Invoke(16 /* System.Double System.Xml.XPath.Expression::EvaluateNumber(System.Xml.XPath.BaseIterator) */, L_0, L_1);
		Expression_t1452783009 * L_3 = ((ExprBinary_t2069694888 *)__this)->get__right_1();
		BaseIterator_t4168896842 * L_4 = ___iter0;
		double L_5 = VirtFuncInvoker1< double, BaseIterator_t4168896842 * >::Invoke(16 /* System.Double System.Xml.XPath.Expression::EvaluateNumber(System.Xml.XPath.BaseIterator) */, L_3, L_4);
		return ((double)il2cpp_codegen_subtract((double)L_2, (double)L_5));
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
// System.Void System.Xml.XPath.ExprMOD::.ctor(System.Xml.XPath.Expression,System.Xml.XPath.Expression)
extern "C"  void ExprMOD__ctor_m2986001670 (ExprMOD_t1913835785 * __this, Expression_t1452783009 * ___left0, Expression_t1452783009 * ___right1, const RuntimeMethod* method)
{
	{
		Expression_t1452783009 * L_0 = ___left0;
		Expression_t1452783009 * L_1 = ___right1;
		ExprNumeric__ctor_m2321536809(__this, L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.String System.Xml.XPath.ExprMOD::get_Operator()
extern "C"  String_t* ExprMOD_get_Operator_m1963700108 (ExprMOD_t1913835785 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ExprMOD_get_Operator_m1963700108_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		return _stringLiteral3452614523;
	}
}
// System.Double System.Xml.XPath.ExprMOD::get_StaticValueAsNumber()
extern "C"  double ExprMOD_get_StaticValueAsNumber_m4277459133 (ExprMOD_t1913835785 * __this, const RuntimeMethod* method)
{
	double G_B3_0 = 0.0;
	{
		bool L_0 = VirtFuncInvoker0< bool >::Invoke(7 /* System.Boolean System.Xml.XPath.ExprBinary::get_HasStaticValue() */, __this);
		if (!L_0)
		{
			goto IL_0027;
		}
	}
	{
		Expression_t1452783009 * L_1 = ((ExprBinary_t2069694888 *)__this)->get__left_0();
		double L_2 = VirtFuncInvoker0< double >::Invoke(10 /* System.Double System.Xml.XPath.Expression::get_StaticValueAsNumber() */, L_1);
		Expression_t1452783009 * L_3 = ((ExprBinary_t2069694888 *)__this)->get__right_1();
		double L_4 = VirtFuncInvoker0< double >::Invoke(10 /* System.Double System.Xml.XPath.Expression::get_StaticValueAsNumber() */, L_3);
		G_B3_0 = (fmod(L_2, L_4));
		goto IL_0030;
	}

IL_0027:
	{
		G_B3_0 = (0.0);
	}

IL_0030:
	{
		return G_B3_0;
	}
}
// System.Double System.Xml.XPath.ExprMOD::EvaluateNumber(System.Xml.XPath.BaseIterator)
extern "C"  double ExprMOD_EvaluateNumber_m313200456 (ExprMOD_t1913835785 * __this, BaseIterator_t4168896842 * ___iter0, const RuntimeMethod* method)
{
	{
		Expression_t1452783009 * L_0 = ((ExprBinary_t2069694888 *)__this)->get__left_0();
		BaseIterator_t4168896842 * L_1 = ___iter0;
		double L_2 = VirtFuncInvoker1< double, BaseIterator_t4168896842 * >::Invoke(16 /* System.Double System.Xml.XPath.Expression::EvaluateNumber(System.Xml.XPath.BaseIterator) */, L_0, L_1);
		Expression_t1452783009 * L_3 = ((ExprBinary_t2069694888 *)__this)->get__right_1();
		BaseIterator_t4168896842 * L_4 = ___iter0;
		double L_5 = VirtFuncInvoker1< double, BaseIterator_t4168896842 * >::Invoke(16 /* System.Double System.Xml.XPath.Expression::EvaluateNumber(System.Xml.XPath.BaseIterator) */, L_3, L_4);
		return (fmod(L_2, L_5));
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
// System.Void System.Xml.XPath.ExprMULT::.ctor(System.Xml.XPath.Expression,System.Xml.XPath.Expression)
extern "C"  void ExprMULT__ctor_m2575760461 (ExprMULT_t118778748 * __this, Expression_t1452783009 * ___left0, Expression_t1452783009 * ___right1, const RuntimeMethod* method)
{
	{
		Expression_t1452783009 * L_0 = ___left0;
		Expression_t1452783009 * L_1 = ___right1;
		ExprNumeric__ctor_m2321536809(__this, L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.String System.Xml.XPath.ExprMULT::get_Operator()
extern "C"  String_t* ExprMULT_get_Operator_m3232046128 (ExprMULT_t118778748 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ExprMULT_get_Operator_m3232046128_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		return _stringLiteral3452614534;
	}
}
// System.Double System.Xml.XPath.ExprMULT::get_StaticValueAsNumber()
extern "C"  double ExprMULT_get_StaticValueAsNumber_m505375603 (ExprMULT_t118778748 * __this, const RuntimeMethod* method)
{
	double G_B3_0 = 0.0;
	{
		bool L_0 = VirtFuncInvoker0< bool >::Invoke(7 /* System.Boolean System.Xml.XPath.ExprBinary::get_HasStaticValue() */, __this);
		if (!L_0)
		{
			goto IL_0027;
		}
	}
	{
		Expression_t1452783009 * L_1 = ((ExprBinary_t2069694888 *)__this)->get__left_0();
		double L_2 = VirtFuncInvoker0< double >::Invoke(10 /* System.Double System.Xml.XPath.Expression::get_StaticValueAsNumber() */, L_1);
		Expression_t1452783009 * L_3 = ((ExprBinary_t2069694888 *)__this)->get__right_1();
		double L_4 = VirtFuncInvoker0< double >::Invoke(10 /* System.Double System.Xml.XPath.Expression::get_StaticValueAsNumber() */, L_3);
		G_B3_0 = ((double)il2cpp_codegen_multiply((double)L_2, (double)L_4));
		goto IL_0030;
	}

IL_0027:
	{
		G_B3_0 = (0.0);
	}

IL_0030:
	{
		return G_B3_0;
	}
}
// System.Double System.Xml.XPath.ExprMULT::EvaluateNumber(System.Xml.XPath.BaseIterator)
extern "C"  double ExprMULT_EvaluateNumber_m1468718223 (ExprMULT_t118778748 * __this, BaseIterator_t4168896842 * ___iter0, const RuntimeMethod* method)
{
	{
		Expression_t1452783009 * L_0 = ((ExprBinary_t2069694888 *)__this)->get__left_0();
		BaseIterator_t4168896842 * L_1 = ___iter0;
		double L_2 = VirtFuncInvoker1< double, BaseIterator_t4168896842 * >::Invoke(16 /* System.Double System.Xml.XPath.Expression::EvaluateNumber(System.Xml.XPath.BaseIterator) */, L_0, L_1);
		Expression_t1452783009 * L_3 = ((ExprBinary_t2069694888 *)__this)->get__right_1();
		BaseIterator_t4168896842 * L_4 = ___iter0;
		double L_5 = VirtFuncInvoker1< double, BaseIterator_t4168896842 * >::Invoke(16 /* System.Double System.Xml.XPath.Expression::EvaluateNumber(System.Xml.XPath.BaseIterator) */, L_3, L_4);
		return ((double)il2cpp_codegen_multiply((double)L_2, (double)L_5));
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
// System.Void System.Xml.XPath.ExprNE::.ctor(System.Xml.XPath.Expression,System.Xml.XPath.Expression)
extern "C"  void ExprNE__ctor_m2190599478 (ExprNE_t4135261543 * __this, Expression_t1452783009 * ___left0, Expression_t1452783009 * ___right1, const RuntimeMethod* method)
{
	{
		Expression_t1452783009 * L_0 = ___left0;
		Expression_t1452783009 * L_1 = ___right1;
		EqualityExpr__ctor_m1260778379(__this, L_0, L_1, (bool)0, /*hidden argument*/NULL);
		return;
	}
}
// System.String System.Xml.XPath.ExprNE::get_Operator()
extern "C"  String_t* ExprNE_get_Operator_m4139945362 (ExprNE_t4135261543 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ExprNE_get_Operator_m4139945362_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		return _stringLiteral3451762559;
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
// System.Void System.Xml.XPath.ExprNEG::.ctor(System.Xml.XPath.Expression)
extern "C"  void ExprNEG__ctor_m3041930912 (ExprNEG_t381818215 * __this, Expression_t1452783009 * ___expr0, const RuntimeMethod* method)
{
	{
		Expression__ctor_m15586157(__this, /*hidden argument*/NULL);
		Expression_t1452783009 * L_0 = ___expr0;
		__this->set__expr_0(L_0);
		return;
	}
}
// System.String System.Xml.XPath.ExprNEG::ToString()
extern "C"  String_t* ExprNEG_ToString_m1228426186 (ExprNEG_t381818215 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ExprNEG_ToString_m1228426186_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Expression_t1452783009 * L_0 = __this->get__expr_0();
		String_t* L_1 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_0);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_2 = String_Concat_m3937257545(NULL /*static, unused*/, _stringLiteral3450517379, L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// System.Xml.XPath.XPathResultType System.Xml.XPath.ExprNEG::get_ReturnType()
extern "C"  int32_t ExprNEG_get_ReturnType_m2683019499 (ExprNEG_t381818215 * __this, const RuntimeMethod* method)
{
	{
		return (int32_t)(0);
	}
}
// System.Xml.XPath.Expression System.Xml.XPath.ExprNEG::Optimize()
extern "C"  Expression_t1452783009 * ExprNEG_Optimize_m84840150 (ExprNEG_t381818215 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ExprNEG_Optimize_m84840150_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	ExprNEG_t381818215 * G_B3_0 = NULL;
	{
		Expression_t1452783009 * L_0 = __this->get__expr_0();
		Expression_t1452783009 * L_1 = VirtFuncInvoker0< Expression_t1452783009 * >::Invoke(6 /* System.Xml.XPath.Expression System.Xml.XPath.Expression::Optimize() */, L_0);
		__this->set__expr_0(L_1);
		bool L_2 = VirtFuncInvoker0< bool >::Invoke(7 /* System.Boolean System.Xml.XPath.ExprNEG::get_HasStaticValue() */, __this);
		if (L_2)
		{
			goto IL_0022;
		}
	}
	{
		G_B3_0 = __this;
		goto IL_002d;
	}

IL_0022:
	{
		double L_3 = VirtFuncInvoker0< double >::Invoke(10 /* System.Double System.Xml.XPath.ExprNEG::get_StaticValueAsNumber() */, __this);
		ExprNumber_t3483239576 * L_4 = (ExprNumber_t3483239576 *)il2cpp_codegen_object_new(ExprNumber_t3483239576_il2cpp_TypeInfo_var);
		ExprNumber__ctor_m147059916(L_4, L_3, /*hidden argument*/NULL);
		G_B3_0 = ((ExprNEG_t381818215 *)(L_4));
	}

IL_002d:
	{
		return G_B3_0;
	}
}
// System.Boolean System.Xml.XPath.ExprNEG::get_Peer()
extern "C"  bool ExprNEG_get_Peer_m1986718616 (ExprNEG_t381818215 * __this, const RuntimeMethod* method)
{
	{
		Expression_t1452783009 * L_0 = __this->get__expr_0();
		bool L_1 = VirtFuncInvoker0< bool >::Invoke(15 /* System.Boolean System.Xml.XPath.Expression::get_Peer() */, L_0);
		return L_1;
	}
}
// System.Boolean System.Xml.XPath.ExprNEG::get_HasStaticValue()
extern "C"  bool ExprNEG_get_HasStaticValue_m4136433276 (ExprNEG_t381818215 * __this, const RuntimeMethod* method)
{
	{
		Expression_t1452783009 * L_0 = __this->get__expr_0();
		bool L_1 = VirtFuncInvoker0< bool >::Invoke(7 /* System.Boolean System.Xml.XPath.Expression::get_HasStaticValue() */, L_0);
		return L_1;
	}
}
// System.Double System.Xml.XPath.ExprNEG::get_StaticValueAsNumber()
extern "C"  double ExprNEG_get_StaticValueAsNumber_m3022586867 (ExprNEG_t381818215 * __this, const RuntimeMethod* method)
{
	double G_B3_0 = 0.0;
	{
		Expression_t1452783009 * L_0 = __this->get__expr_0();
		bool L_1 = VirtFuncInvoker0< bool >::Invoke(7 /* System.Boolean System.Xml.XPath.Expression::get_HasStaticValue() */, L_0);
		if (!L_1)
		{
			goto IL_002a;
		}
	}
	{
		Expression_t1452783009 * L_2 = __this->get__expr_0();
		double L_3 = VirtFuncInvoker0< double >::Invoke(10 /* System.Double System.Xml.XPath.Expression::get_StaticValueAsNumber() */, L_2);
		G_B3_0 = ((double)il2cpp_codegen_multiply((double)(-1.0), (double)L_3));
		goto IL_0033;
	}

IL_002a:
	{
		G_B3_0 = (0.0);
	}

IL_0033:
	{
		return G_B3_0;
	}
}
// System.Object System.Xml.XPath.ExprNEG::Evaluate(System.Xml.XPath.BaseIterator)
extern "C"  RuntimeObject * ExprNEG_Evaluate_m1945282735 (ExprNEG_t381818215 * __this, BaseIterator_t4168896842 * ___iter0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ExprNEG_Evaluate_m1945282735_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Expression_t1452783009 * L_0 = __this->get__expr_0();
		BaseIterator_t4168896842 * L_1 = ___iter0;
		double L_2 = VirtFuncInvoker1< double, BaseIterator_t4168896842 * >::Invoke(16 /* System.Double System.Xml.XPath.Expression::EvaluateNumber(System.Xml.XPath.BaseIterator) */, L_0, L_1);
		double L_3 = ((-L_2));
		RuntimeObject * L_4 = Box(Double_t594665363_il2cpp_TypeInfo_var, &L_3);
		return L_4;
	}
}
// System.Double System.Xml.XPath.ExprNEG::EvaluateNumber(System.Xml.XPath.BaseIterator)
extern "C"  double ExprNEG_EvaluateNumber_m2985642265 (ExprNEG_t381818215 * __this, BaseIterator_t4168896842 * ___iter0, const RuntimeMethod* method)
{
	{
		Expression_t1452783009 * L_0 = __this->get__expr_0();
		BaseIterator_t4168896842 * L_1 = ___iter0;
		double L_2 = VirtFuncInvoker1< double, BaseIterator_t4168896842 * >::Invoke(16 /* System.Double System.Xml.XPath.Expression::EvaluateNumber(System.Xml.XPath.BaseIterator) */, L_0, L_1);
		return ((-L_2));
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
// System.Void System.Xml.XPath.ExprNumber::.ctor(System.Double)
extern "C"  void ExprNumber__ctor_m147059916 (ExprNumber_t3483239576 * __this, double ___value0, const RuntimeMethod* method)
{
	{
		Expression__ctor_m15586157(__this, /*hidden argument*/NULL);
		double L_0 = ___value0;
		__this->set__value_0(L_0);
		return;
	}
}
// System.String System.Xml.XPath.ExprNumber::ToString()
extern "C"  String_t* ExprNumber_ToString_m362959600 (ExprNumber_t3483239576 * __this, const RuntimeMethod* method)
{
	{
		double* L_0 = __this->get_address_of__value_0();
		String_t* L_1 = Double_ToString_m1229922074((double*)L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Xml.XPath.XPathResultType System.Xml.XPath.ExprNumber::get_ReturnType()
extern "C"  int32_t ExprNumber_get_ReturnType_m1731392976 (ExprNumber_t3483239576 * __this, const RuntimeMethod* method)
{
	{
		return (int32_t)(0);
	}
}
// System.Boolean System.Xml.XPath.ExprNumber::get_Peer()
extern "C"  bool ExprNumber_get_Peer_m1946071414 (ExprNumber_t3483239576 * __this, const RuntimeMethod* method)
{
	{
		return (bool)1;
	}
}
// System.Boolean System.Xml.XPath.ExprNumber::get_HasStaticValue()
extern "C"  bool ExprNumber_get_HasStaticValue_m2916306461 (ExprNumber_t3483239576 * __this, const RuntimeMethod* method)
{
	{
		return (bool)1;
	}
}
// System.Double System.Xml.XPath.ExprNumber::get_StaticValueAsNumber()
extern "C"  double ExprNumber_get_StaticValueAsNumber_m4285253905 (ExprNumber_t3483239576 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ExprNumber_get_StaticValueAsNumber_m4285253905_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		double L_0 = __this->get__value_0();
		double L_1 = L_0;
		RuntimeObject * L_2 = Box(Double_t594665363_il2cpp_TypeInfo_var, &L_1);
		double L_3 = XPathFunctions_ToNumber_m1425546570(NULL /*static, unused*/, L_2, /*hidden argument*/NULL);
		return L_3;
	}
}
// System.Object System.Xml.XPath.ExprNumber::Evaluate(System.Xml.XPath.BaseIterator)
extern "C"  RuntimeObject * ExprNumber_Evaluate_m1372199812 (ExprNumber_t3483239576 * __this, BaseIterator_t4168896842 * ___iter0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ExprNumber_Evaluate_m1372199812_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		double L_0 = __this->get__value_0();
		double L_1 = L_0;
		RuntimeObject * L_2 = Box(Double_t594665363_il2cpp_TypeInfo_var, &L_1);
		return L_2;
	}
}
// System.Double System.Xml.XPath.ExprNumber::EvaluateNumber(System.Xml.XPath.BaseIterator)
extern "C"  double ExprNumber_EvaluateNumber_m2682927936 (ExprNumber_t3483239576 * __this, BaseIterator_t4168896842 * ___iter0, const RuntimeMethod* method)
{
	{
		double L_0 = __this->get__value_0();
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
// System.Void System.Xml.XPath.ExprNumeric::.ctor(System.Xml.XPath.Expression,System.Xml.XPath.Expression)
extern "C"  void ExprNumeric__ctor_m2321536809 (ExprNumeric_t370757872 * __this, Expression_t1452783009 * ___left0, Expression_t1452783009 * ___right1, const RuntimeMethod* method)
{
	{
		Expression_t1452783009 * L_0 = ___left0;
		Expression_t1452783009 * L_1 = ___right1;
		ExprBinary__ctor_m2426281594(__this, L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Xml.XPath.XPathResultType System.Xml.XPath.ExprNumeric::get_ReturnType()
extern "C"  int32_t ExprNumeric_get_ReturnType_m1047705518 (ExprNumeric_t370757872 * __this, const RuntimeMethod* method)
{
	{
		return (int32_t)(0);
	}
}
// System.Xml.XPath.Expression System.Xml.XPath.ExprNumeric::Optimize()
extern "C"  Expression_t1452783009 * ExprNumeric_Optimize_m2257189555 (ExprNumeric_t370757872 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ExprNumeric_Optimize_m2257189555_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	ExprNumeric_t370757872 * G_B3_0 = NULL;
	{
		ExprBinary_Optimize_m2522886035(__this, /*hidden argument*/NULL);
		bool L_0 = VirtFuncInvoker0< bool >::Invoke(7 /* System.Boolean System.Xml.XPath.ExprBinary::get_HasStaticValue() */, __this);
		if (L_0)
		{
			goto IL_0018;
		}
	}
	{
		G_B3_0 = __this;
		goto IL_0023;
	}

IL_0018:
	{
		double L_1 = VirtFuncInvoker0< double >::Invoke(10 /* System.Double System.Xml.XPath.Expression::get_StaticValueAsNumber() */, __this);
		ExprNumber_t3483239576 * L_2 = (ExprNumber_t3483239576 *)il2cpp_codegen_object_new(ExprNumber_t3483239576_il2cpp_TypeInfo_var);
		ExprNumber__ctor_m147059916(L_2, L_1, /*hidden argument*/NULL);
		G_B3_0 = ((ExprNumeric_t370757872 *)(L_2));
	}

IL_0023:
	{
		return G_B3_0;
	}
}
// System.Object System.Xml.XPath.ExprNumeric::Evaluate(System.Xml.XPath.BaseIterator)
extern "C"  RuntimeObject * ExprNumeric_Evaluate_m2933288309 (ExprNumeric_t370757872 * __this, BaseIterator_t4168896842 * ___iter0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ExprNumeric_Evaluate_m2933288309_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		BaseIterator_t4168896842 * L_0 = ___iter0;
		double L_1 = VirtFuncInvoker1< double, BaseIterator_t4168896842 * >::Invoke(16 /* System.Double System.Xml.XPath.Expression::EvaluateNumber(System.Xml.XPath.BaseIterator) */, __this, L_0);
		double L_2 = L_1;
		RuntimeObject * L_3 = Box(Double_t594665363_il2cpp_TypeInfo_var, &L_2);
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
// System.Void System.Xml.XPath.ExprOR::.ctor(System.Xml.XPath.Expression,System.Xml.XPath.Expression)
extern "C"  void ExprOR__ctor_m3976562532 (ExprOR_t3019581832 * __this, Expression_t1452783009 * ___left0, Expression_t1452783009 * ___right1, const RuntimeMethod* method)
{
	{
		Expression_t1452783009 * L_0 = ___left0;
		Expression_t1452783009 * L_1 = ___right1;
		ExprBoolean__ctor_m1159749897(__this, L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.String System.Xml.XPath.ExprOR::get_Operator()
extern "C"  String_t* ExprOR_get_Operator_m1688656052 (ExprOR_t3019581832 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ExprOR_get_Operator_m1688656052_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		return _stringLiteral3455629249;
	}
}
// System.Boolean System.Xml.XPath.ExprOR::get_StaticValueAsBoolean()
extern "C"  bool ExprOR_get_StaticValueAsBoolean_m342880675 (ExprOR_t3019581832 * __this, const RuntimeMethod* method)
{
	int32_t G_B4_0 = 0;
	int32_t G_B6_0 = 0;
	{
		bool L_0 = VirtFuncInvoker0< bool >::Invoke(7 /* System.Boolean System.Xml.XPath.ExprBinary::get_HasStaticValue() */, __this);
		if (!L_0)
		{
			goto IL_002e;
		}
	}
	{
		Expression_t1452783009 * L_1 = ((ExprBinary_t2069694888 *)__this)->get__left_0();
		bool L_2 = VirtFuncInvoker0< bool >::Invoke(11 /* System.Boolean System.Xml.XPath.Expression::get_StaticValueAsBoolean() */, L_1);
		if (L_2)
		{
			goto IL_0028;
		}
	}
	{
		Expression_t1452783009 * L_3 = ((ExprBinary_t2069694888 *)__this)->get__right_1();
		bool L_4 = VirtFuncInvoker0< bool >::Invoke(11 /* System.Boolean System.Xml.XPath.Expression::get_StaticValueAsBoolean() */, L_3);
		G_B4_0 = ((int32_t)(L_4));
		goto IL_0029;
	}

IL_0028:
	{
		G_B4_0 = 1;
	}

IL_0029:
	{
		G_B6_0 = G_B4_0;
		goto IL_002f;
	}

IL_002e:
	{
		G_B6_0 = 0;
	}

IL_002f:
	{
		return (bool)G_B6_0;
	}
}
// System.Boolean System.Xml.XPath.ExprOR::EvaluateBoolean(System.Xml.XPath.BaseIterator)
extern "C"  bool ExprOR_EvaluateBoolean_m4047580507 (ExprOR_t3019581832 * __this, BaseIterator_t4168896842 * ___iter0, const RuntimeMethod* method)
{
	{
		Expression_t1452783009 * L_0 = ((ExprBinary_t2069694888 *)__this)->get__left_0();
		BaseIterator_t4168896842 * L_1 = ___iter0;
		bool L_2 = VirtFuncInvoker1< bool, BaseIterator_t4168896842 * >::Invoke(18 /* System.Boolean System.Xml.XPath.Expression::EvaluateBoolean(System.Xml.XPath.BaseIterator) */, L_0, L_1);
		if (!L_2)
		{
			goto IL_0013;
		}
	}
	{
		return (bool)1;
	}

IL_0013:
	{
		Expression_t1452783009 * L_3 = ((ExprBinary_t2069694888 *)__this)->get__right_1();
		BaseIterator_t4168896842 * L_4 = ___iter0;
		bool L_5 = VirtFuncInvoker1< bool, BaseIterator_t4168896842 * >::Invoke(18 /* System.Boolean System.Xml.XPath.Expression::EvaluateBoolean(System.Xml.XPath.BaseIterator) */, L_3, L_4);
		return L_5;
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
// System.Void System.Xml.XPath.ExprParens::.ctor(System.Xml.XPath.Expression)
extern "C"  void ExprParens__ctor_m980674938 (ExprParens_t795575662 * __this, Expression_t1452783009 * ___expr0, const RuntimeMethod* method)
{
	{
		Expression__ctor_m15586157(__this, /*hidden argument*/NULL);
		Expression_t1452783009 * L_0 = ___expr0;
		__this->set__expr_0(L_0);
		return;
	}
}
// System.Xml.XPath.Expression System.Xml.XPath.ExprParens::Optimize()
extern "C"  Expression_t1452783009 * ExprParens_Optimize_m2367086901 (ExprParens_t795575662 * __this, const RuntimeMethod* method)
{
	{
		Expression_t1452783009 * L_0 = __this->get__expr_0();
		VirtFuncInvoker0< Expression_t1452783009 * >::Invoke(6 /* System.Xml.XPath.Expression System.Xml.XPath.Expression::Optimize() */, L_0);
		return __this;
	}
}
// System.Boolean System.Xml.XPath.ExprParens::get_HasStaticValue()
extern "C"  bool ExprParens_get_HasStaticValue_m1896130588 (ExprParens_t795575662 * __this, const RuntimeMethod* method)
{
	{
		Expression_t1452783009 * L_0 = __this->get__expr_0();
		bool L_1 = VirtFuncInvoker0< bool >::Invoke(7 /* System.Boolean System.Xml.XPath.Expression::get_HasStaticValue() */, L_0);
		return L_1;
	}
}
// System.Object System.Xml.XPath.ExprParens::get_StaticValue()
extern "C"  RuntimeObject * ExprParens_get_StaticValue_m3424764924 (ExprParens_t795575662 * __this, const RuntimeMethod* method)
{
	{
		Expression_t1452783009 * L_0 = __this->get__expr_0();
		RuntimeObject * L_1 = VirtFuncInvoker0< RuntimeObject * >::Invoke(8 /* System.Object System.Xml.XPath.Expression::get_StaticValue() */, L_0);
		return L_1;
	}
}
// System.String System.Xml.XPath.ExprParens::get_StaticValueAsString()
extern "C"  String_t* ExprParens_get_StaticValueAsString_m2491375174 (ExprParens_t795575662 * __this, const RuntimeMethod* method)
{
	{
		Expression_t1452783009 * L_0 = __this->get__expr_0();
		String_t* L_1 = VirtFuncInvoker0< String_t* >::Invoke(9 /* System.String System.Xml.XPath.Expression::get_StaticValueAsString() */, L_0);
		return L_1;
	}
}
// System.Double System.Xml.XPath.ExprParens::get_StaticValueAsNumber()
extern "C"  double ExprParens_get_StaticValueAsNumber_m1823774881 (ExprParens_t795575662 * __this, const RuntimeMethod* method)
{
	{
		Expression_t1452783009 * L_0 = __this->get__expr_0();
		double L_1 = VirtFuncInvoker0< double >::Invoke(10 /* System.Double System.Xml.XPath.Expression::get_StaticValueAsNumber() */, L_0);
		return L_1;
	}
}
// System.Boolean System.Xml.XPath.ExprParens::get_StaticValueAsBoolean()
extern "C"  bool ExprParens_get_StaticValueAsBoolean_m2139882166 (ExprParens_t795575662 * __this, const RuntimeMethod* method)
{
	{
		Expression_t1452783009 * L_0 = __this->get__expr_0();
		bool L_1 = VirtFuncInvoker0< bool >::Invoke(11 /* System.Boolean System.Xml.XPath.Expression::get_StaticValueAsBoolean() */, L_0);
		return L_1;
	}
}
// System.String System.Xml.XPath.ExprParens::ToString()
extern "C"  String_t* ExprParens_ToString_m487672512 (ExprParens_t795575662 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ExprParens_ToString_m487672512_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Expression_t1452783009 * L_0 = __this->get__expr_0();
		String_t* L_1 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_0);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_2 = String_Concat_m3755062657(NULL /*static, unused*/, _stringLiteral3452614536, L_1, _stringLiteral3452614535, /*hidden argument*/NULL);
		return L_2;
	}
}
// System.Xml.XPath.XPathResultType System.Xml.XPath.ExprParens::get_ReturnType()
extern "C"  int32_t ExprParens_get_ReturnType_m3393102810 (ExprParens_t795575662 * __this, const RuntimeMethod* method)
{
	{
		Expression_t1452783009 * L_0 = __this->get__expr_0();
		int32_t L_1 = VirtFuncInvoker0< int32_t >::Invoke(4 /* System.Xml.XPath.XPathResultType System.Xml.XPath.Expression::get_ReturnType() */, L_0);
		return L_1;
	}
}
// System.Object System.Xml.XPath.ExprParens::Evaluate(System.Xml.XPath.BaseIterator)
extern "C"  RuntimeObject * ExprParens_Evaluate_m395386751 (ExprParens_t795575662 * __this, BaseIterator_t4168896842 * ___iter0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ExprParens_Evaluate_m395386751_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject * V_0 = NULL;
	XPathNodeIterator_t3667290188 * V_1 = NULL;
	BaseIterator_t4168896842 * V_2 = NULL;
	{
		Expression_t1452783009 * L_0 = __this->get__expr_0();
		BaseIterator_t4168896842 * L_1 = ___iter0;
		RuntimeObject * L_2 = VirtFuncInvoker1< RuntimeObject *, BaseIterator_t4168896842 * >::Invoke(13 /* System.Object System.Xml.XPath.Expression::Evaluate(System.Xml.XPath.BaseIterator) */, L_0, L_1);
		V_0 = L_2;
		RuntimeObject * L_3 = V_0;
		V_1 = ((XPathNodeIterator_t3667290188 *)IsInstClass((RuntimeObject*)L_3, XPathNodeIterator_t3667290188_il2cpp_TypeInfo_var));
		XPathNodeIterator_t3667290188 * L_4 = V_1;
		V_2 = ((BaseIterator_t4168896842 *)IsInstClass((RuntimeObject*)L_4, BaseIterator_t4168896842_il2cpp_TypeInfo_var));
		BaseIterator_t4168896842 * L_5 = V_2;
		if (L_5)
		{
			goto IL_0034;
		}
	}
	{
		XPathNodeIterator_t3667290188 * L_6 = V_1;
		if (!L_6)
		{
			goto IL_0034;
		}
	}
	{
		XPathNodeIterator_t3667290188 * L_7 = V_1;
		BaseIterator_t4168896842 * L_8 = ___iter0;
		RuntimeObject* L_9 = BaseIterator_get_NamespaceManager_m2542706114(L_8, /*hidden argument*/NULL);
		WrapperIterator_t1258076988 * L_10 = (WrapperIterator_t1258076988 *)il2cpp_codegen_object_new(WrapperIterator_t1258076988_il2cpp_TypeInfo_var);
		WrapperIterator__ctor_m1708545452(L_10, L_7, L_9, /*hidden argument*/NULL);
		V_2 = L_10;
	}

IL_0034:
	{
		BaseIterator_t4168896842 * L_11 = V_2;
		if (!L_11)
		{
			goto IL_0041;
		}
	}
	{
		BaseIterator_t4168896842 * L_12 = V_2;
		ParensIterator_t4020310733 * L_13 = (ParensIterator_t4020310733 *)il2cpp_codegen_object_new(ParensIterator_t4020310733_il2cpp_TypeInfo_var);
		ParensIterator__ctor_m4211157708(L_13, L_12, /*hidden argument*/NULL);
		return L_13;
	}

IL_0041:
	{
		RuntimeObject * L_14 = V_0;
		return L_14;
	}
}
// System.Boolean System.Xml.XPath.ExprParens::get_Peer()
extern "C"  bool ExprParens_get_Peer_m182645953 (ExprParens_t795575662 * __this, const RuntimeMethod* method)
{
	{
		Expression_t1452783009 * L_0 = __this->get__expr_0();
		bool L_1 = VirtFuncInvoker0< bool >::Invoke(15 /* System.Boolean System.Xml.XPath.Expression::get_Peer() */, L_0);
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
// System.Void System.Xml.XPath.ExprPLUS::.ctor(System.Xml.XPath.Expression,System.Xml.XPath.Expression)
extern "C"  void ExprPLUS__ctor_m3797572383 (ExprPLUS_t1725353634 * __this, Expression_t1452783009 * ___left0, Expression_t1452783009 * ___right1, const RuntimeMethod* method)
{
	{
		Expression_t1452783009 * L_0 = ___left0;
		Expression_t1452783009 * L_1 = ___right1;
		ExprNumeric__ctor_m2321536809(__this, L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.String System.Xml.XPath.ExprPLUS::get_Operator()
extern "C"  String_t* ExprPLUS_get_Operator_m1295059442 (ExprPLUS_t1725353634 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ExprPLUS_get_Operator_m1295059442_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		return _stringLiteral3452614533;
	}
}
// System.Double System.Xml.XPath.ExprPLUS::get_StaticValueAsNumber()
extern "C"  double ExprPLUS_get_StaticValueAsNumber_m3144239085 (ExprPLUS_t1725353634 * __this, const RuntimeMethod* method)
{
	double G_B3_0 = 0.0;
	{
		bool L_0 = VirtFuncInvoker0< bool >::Invoke(7 /* System.Boolean System.Xml.XPath.ExprBinary::get_HasStaticValue() */, __this);
		if (!L_0)
		{
			goto IL_0027;
		}
	}
	{
		Expression_t1452783009 * L_1 = ((ExprBinary_t2069694888 *)__this)->get__left_0();
		double L_2 = VirtFuncInvoker0< double >::Invoke(10 /* System.Double System.Xml.XPath.Expression::get_StaticValueAsNumber() */, L_1);
		Expression_t1452783009 * L_3 = ((ExprBinary_t2069694888 *)__this)->get__right_1();
		double L_4 = VirtFuncInvoker0< double >::Invoke(10 /* System.Double System.Xml.XPath.Expression::get_StaticValueAsNumber() */, L_3);
		G_B3_0 = ((double)il2cpp_codegen_add((double)L_2, (double)L_4));
		goto IL_0030;
	}

IL_0027:
	{
		G_B3_0 = (0.0);
	}

IL_0030:
	{
		return G_B3_0;
	}
}
// System.Double System.Xml.XPath.ExprPLUS::EvaluateNumber(System.Xml.XPath.BaseIterator)
extern "C"  double ExprPLUS_EvaluateNumber_m1265738005 (ExprPLUS_t1725353634 * __this, BaseIterator_t4168896842 * ___iter0, const RuntimeMethod* method)
{
	{
		Expression_t1452783009 * L_0 = ((ExprBinary_t2069694888 *)__this)->get__left_0();
		BaseIterator_t4168896842 * L_1 = ___iter0;
		double L_2 = VirtFuncInvoker1< double, BaseIterator_t4168896842 * >::Invoke(16 /* System.Double System.Xml.XPath.Expression::EvaluateNumber(System.Xml.XPath.BaseIterator) */, L_0, L_1);
		Expression_t1452783009 * L_3 = ((ExprBinary_t2069694888 *)__this)->get__right_1();
		BaseIterator_t4168896842 * L_4 = ___iter0;
		double L_5 = VirtFuncInvoker1< double, BaseIterator_t4168896842 * >::Invoke(16 /* System.Double System.Xml.XPath.Expression::EvaluateNumber(System.Xml.XPath.BaseIterator) */, L_3, L_4);
		return ((double)il2cpp_codegen_add((double)L_2, (double)L_5));
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
// System.Void System.Xml.XPath.ExprRoot::.ctor()
extern "C"  void ExprRoot__ctor_m3917243252 (ExprRoot_t3091324302 * __this, const RuntimeMethod* method)
{
	{
		NodeSet__ctor_m958047062(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.String System.Xml.XPath.ExprRoot::ToString()
extern "C"  String_t* ExprRoot_ToString_m2054507305 (ExprRoot_t3091324302 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ExprRoot_ToString_m2054507305_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_0 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_2();
		return L_0;
	}
}
// System.Object System.Xml.XPath.ExprRoot::Evaluate(System.Xml.XPath.BaseIterator)
extern "C"  RuntimeObject * ExprRoot_Evaluate_m3140108246 (ExprRoot_t3091324302 * __this, BaseIterator_t4168896842 * ___iter0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ExprRoot_Evaluate_m3140108246_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	XPathNavigator_t787956054 * V_0 = NULL;
	{
		BaseIterator_t4168896842 * L_0 = ___iter0;
		int32_t L_1 = VirtFuncInvoker0< int32_t >::Invoke(8 /* System.Int32 System.Xml.XPath.BaseIterator::get_CurrentPosition() */, L_0);
		if (L_1)
		{
			goto IL_001f;
		}
	}
	{
		BaseIterator_t4168896842 * L_2 = ___iter0;
		XPathNodeIterator_t3667290188 * L_3 = VirtFuncInvoker0< XPathNodeIterator_t3667290188 * >::Invoke(9 /* System.Xml.XPath.XPathNodeIterator System.Xml.XPath.XPathNodeIterator::Clone() */, L_2);
		___iter0 = ((BaseIterator_t4168896842 *)CastclassClass((RuntimeObject*)L_3, BaseIterator_t4168896842_il2cpp_TypeInfo_var));
		BaseIterator_t4168896842 * L_4 = ___iter0;
		VirtFuncInvoker0< bool >::Invoke(11 /* System.Boolean System.Xml.XPath.BaseIterator::MoveNext() */, L_4);
	}

IL_001f:
	{
		BaseIterator_t4168896842 * L_5 = ___iter0;
		XPathNavigator_t787956054 * L_6 = VirtFuncInvoker0< XPathNavigator_t787956054 * >::Invoke(7 /* System.Xml.XPath.XPathNavigator System.Xml.XPath.XPathNodeIterator::get_Current() */, L_5);
		XPathNavigator_t787956054 * L_7 = VirtFuncInvoker0< XPathNavigator_t787956054 * >::Invoke(14 /* System.Xml.XPath.XPathNavigator System.Xml.XPath.XPathNavigator::Clone() */, L_6);
		V_0 = L_7;
		XPathNavigator_t787956054 * L_8 = V_0;
		VirtActionInvoker0::Invoke(23 /* System.Void System.Xml.XPath.XPathNavigator::MoveToRoot() */, L_8);
		XPathNavigator_t787956054 * L_9 = V_0;
		BaseIterator_t4168896842 * L_10 = ___iter0;
		RuntimeObject* L_11 = BaseIterator_get_NamespaceManager_m2542706114(L_10, /*hidden argument*/NULL);
		SelfIterator_t907214 * L_12 = (SelfIterator_t907214 *)il2cpp_codegen_object_new(SelfIterator_t907214_il2cpp_TypeInfo_var);
		SelfIterator__ctor_m1955149028(L_12, L_9, L_11, /*hidden argument*/NULL);
		return L_12;
	}
}
// System.Boolean System.Xml.XPath.ExprRoot::get_Peer()
extern "C"  bool ExprRoot_get_Peer_m2111060566 (ExprRoot_t3091324302 * __this, const RuntimeMethod* method)
{
	{
		return (bool)1;
	}
}
// System.Boolean System.Xml.XPath.ExprRoot::get_Subtree()
extern "C"  bool ExprRoot_get_Subtree_m1191701740 (ExprRoot_t3091324302 * __this, const RuntimeMethod* method)
{
	{
		return (bool)0;
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
// System.Void System.Xml.XPath.ExprSLASH::.ctor(System.Xml.XPath.Expression,System.Xml.XPath.NodeSet)
extern "C"  void ExprSLASH__ctor_m3063015905 (ExprSLASH_t1263914658 * __this, Expression_t1452783009 * ___left0, NodeSet_t3272593155 * ___right1, const RuntimeMethod* method)
{
	{
		NodeSet__ctor_m958047062(__this, /*hidden argument*/NULL);
		Expression_t1452783009 * L_0 = ___left0;
		__this->set_left_0(L_0);
		NodeSet_t3272593155 * L_1 = ___right1;
		__this->set_right_1(L_1);
		return;
	}
}
// System.Xml.XPath.Expression System.Xml.XPath.ExprSLASH::Optimize()
extern "C"  Expression_t1452783009 * ExprSLASH_Optimize_m2721850521 (ExprSLASH_t1263914658 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ExprSLASH_Optimize_m2721850521_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Expression_t1452783009 * L_0 = __this->get_left_0();
		Expression_t1452783009 * L_1 = VirtFuncInvoker0< Expression_t1452783009 * >::Invoke(6 /* System.Xml.XPath.Expression System.Xml.XPath.Expression::Optimize() */, L_0);
		__this->set_left_0(L_1);
		NodeSet_t3272593155 * L_2 = __this->get_right_1();
		Expression_t1452783009 * L_3 = VirtFuncInvoker0< Expression_t1452783009 * >::Invoke(6 /* System.Xml.XPath.Expression System.Xml.XPath.Expression::Optimize() */, L_2);
		__this->set_right_1(((NodeSet_t3272593155 *)CastclassClass((RuntimeObject*)L_3, NodeSet_t3272593155_il2cpp_TypeInfo_var)));
		return __this;
	}
}
// System.String System.Xml.XPath.ExprSLASH::ToString()
extern "C"  String_t* ExprSLASH_ToString_m2859106124 (ExprSLASH_t1263914658 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ExprSLASH_ToString_m2859106124_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Expression_t1452783009 * L_0 = __this->get_left_0();
		String_t* L_1 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_0);
		NodeSet_t3272593155 * L_2 = __this->get_right_1();
		String_t* L_3 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_2);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_4 = String_Concat_m3755062657(NULL /*static, unused*/, L_1, _stringLiteral3452614529, L_3, /*hidden argument*/NULL);
		return L_4;
	}
}
// System.Object System.Xml.XPath.ExprSLASH::Evaluate(System.Xml.XPath.BaseIterator)
extern "C"  RuntimeObject * ExprSLASH_Evaluate_m1058952271 (ExprSLASH_t1263914658 * __this, BaseIterator_t4168896842 * ___iter0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ExprSLASH_Evaluate_m1058952271_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	BaseIterator_t4168896842 * V_0 = NULL;
	BaseIterator_t4168896842 * V_1 = NULL;
	{
		Expression_t1452783009 * L_0 = __this->get_left_0();
		BaseIterator_t4168896842 * L_1 = ___iter0;
		BaseIterator_t4168896842 * L_2 = VirtFuncInvoker1< BaseIterator_t4168896842 *, BaseIterator_t4168896842 * >::Invoke(14 /* System.Xml.XPath.BaseIterator System.Xml.XPath.Expression::EvaluateNodeSet(System.Xml.XPath.BaseIterator) */, L_0, L_1);
		V_0 = L_2;
		Expression_t1452783009 * L_3 = __this->get_left_0();
		bool L_4 = VirtFuncInvoker0< bool >::Invoke(15 /* System.Boolean System.Xml.XPath.Expression::get_Peer() */, L_3);
		if (!L_4)
		{
			goto IL_003a;
		}
	}
	{
		NodeSet_t3272593155 * L_5 = __this->get_right_1();
		bool L_6 = VirtFuncInvoker0< bool >::Invoke(20 /* System.Boolean System.Xml.XPath.NodeSet::get_Subtree() */, L_5);
		if (!L_6)
		{
			goto IL_003a;
		}
	}
	{
		BaseIterator_t4168896842 * L_7 = V_0;
		NodeSet_t3272593155 * L_8 = __this->get_right_1();
		SimpleSlashIterator_t3611200333 * L_9 = (SimpleSlashIterator_t3611200333 *)il2cpp_codegen_object_new(SimpleSlashIterator_t3611200333_il2cpp_TypeInfo_var);
		SimpleSlashIterator__ctor_m3118305435(L_9, L_7, L_8, /*hidden argument*/NULL);
		return L_9;
	}

IL_003a:
	{
		BaseIterator_t4168896842 * L_10 = V_0;
		NodeSet_t3272593155 * L_11 = __this->get_right_1();
		SlashIterator_t2421034408 * L_12 = (SlashIterator_t2421034408 *)il2cpp_codegen_object_new(SlashIterator_t2421034408_il2cpp_TypeInfo_var);
		SlashIterator__ctor_m1098282742(L_12, L_10, L_11, /*hidden argument*/NULL);
		V_1 = L_12;
		BaseIterator_t4168896842 * L_13 = V_1;
		SortedIterator_t2904376427 * L_14 = (SortedIterator_t2904376427 *)il2cpp_codegen_object_new(SortedIterator_t2904376427_il2cpp_TypeInfo_var);
		SortedIterator__ctor_m4010031056(L_14, L_13, /*hidden argument*/NULL);
		return L_14;
	}
}
// System.Boolean System.Xml.XPath.ExprSLASH::get_RequireSorting()
extern "C"  bool ExprSLASH_get_RequireSorting_m1238592778 (ExprSLASH_t1263914658 * __this, const RuntimeMethod* method)
{
	int32_t G_B3_0 = 0;
	{
		Expression_t1452783009 * L_0 = __this->get_left_0();
		bool L_1 = VirtFuncInvoker0< bool >::Invoke(19 /* System.Boolean System.Xml.XPath.Expression::get_RequireSorting() */, L_0);
		if (L_1)
		{
			goto IL_001d;
		}
	}
	{
		NodeSet_t3272593155 * L_2 = __this->get_right_1();
		bool L_3 = VirtFuncInvoker0< bool >::Invoke(19 /* System.Boolean System.Xml.XPath.Expression::get_RequireSorting() */, L_2);
		G_B3_0 = ((int32_t)(L_3));
		goto IL_001e;
	}

IL_001d:
	{
		G_B3_0 = 1;
	}

IL_001e:
	{
		return (bool)G_B3_0;
	}
}
// System.Boolean System.Xml.XPath.ExprSLASH::get_Peer()
extern "C"  bool ExprSLASH_get_Peer_m395207348 (ExprSLASH_t1263914658 * __this, const RuntimeMethod* method)
{
	int32_t G_B3_0 = 0;
	{
		Expression_t1452783009 * L_0 = __this->get_left_0();
		bool L_1 = VirtFuncInvoker0< bool >::Invoke(15 /* System.Boolean System.Xml.XPath.Expression::get_Peer() */, L_0);
		if (!L_1)
		{
			goto IL_001d;
		}
	}
	{
		NodeSet_t3272593155 * L_2 = __this->get_right_1();
		bool L_3 = VirtFuncInvoker0< bool >::Invoke(15 /* System.Boolean System.Xml.XPath.Expression::get_Peer() */, L_2);
		G_B3_0 = ((int32_t)(L_3));
		goto IL_001e;
	}

IL_001d:
	{
		G_B3_0 = 0;
	}

IL_001e:
	{
		return (bool)G_B3_0;
	}
}
// System.Boolean System.Xml.XPath.ExprSLASH::get_Subtree()
extern "C"  bool ExprSLASH_get_Subtree_m443395336 (ExprSLASH_t1263914658 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ExprSLASH_get_Subtree_m443395336_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	NodeSet_t3272593155 * V_0 = NULL;
	int32_t G_B4_0 = 0;
	{
		Expression_t1452783009 * L_0 = __this->get_left_0();
		V_0 = ((NodeSet_t3272593155 *)IsInstClass((RuntimeObject*)L_0, NodeSet_t3272593155_il2cpp_TypeInfo_var));
		NodeSet_t3272593155 * L_1 = V_0;
		if (!L_1)
		{
			goto IL_002a;
		}
	}
	{
		NodeSet_t3272593155 * L_2 = V_0;
		bool L_3 = VirtFuncInvoker0< bool >::Invoke(20 /* System.Boolean System.Xml.XPath.NodeSet::get_Subtree() */, L_2);
		if (!L_3)
		{
			goto IL_002a;
		}
	}
	{
		NodeSet_t3272593155 * L_4 = __this->get_right_1();
		bool L_5 = VirtFuncInvoker0< bool >::Invoke(20 /* System.Boolean System.Xml.XPath.NodeSet::get_Subtree() */, L_4);
		G_B4_0 = ((int32_t)(L_5));
		goto IL_002b;
	}

IL_002a:
	{
		G_B4_0 = 0;
	}

IL_002b:
	{
		return (bool)G_B4_0;
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
// System.Void System.Xml.XPath.ExprSLASH2::.ctor(System.Xml.XPath.Expression,System.Xml.XPath.NodeSet)
extern "C"  void ExprSLASH2__ctor_m1243554034 (ExprSLASH2_t1762680492 * __this, Expression_t1452783009 * ___left0, NodeSet_t3272593155 * ___right1, const RuntimeMethod* method)
{
	{
		NodeSet__ctor_m958047062(__this, /*hidden argument*/NULL);
		Expression_t1452783009 * L_0 = ___left0;
		__this->set_left_0(L_0);
		NodeSet_t3272593155 * L_1 = ___right1;
		__this->set_right_1(L_1);
		return;
	}
}
// System.Void System.Xml.XPath.ExprSLASH2::.cctor()
extern "C"  void ExprSLASH2__cctor_m3946436987 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ExprSLASH2__cctor_m3946436987_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		NodeTypeTest_t4287533341 * L_0 = (NodeTypeTest_t4287533341 *)il2cpp_codegen_object_new(NodeTypeTest_t4287533341_il2cpp_TypeInfo_var);
		NodeTypeTest__ctor_m3703857314(L_0, 5, ((int32_t)9), /*hidden argument*/NULL);
		((ExprSLASH2_t1762680492_StaticFields*)il2cpp_codegen_static_fields_for(ExprSLASH2_t1762680492_il2cpp_TypeInfo_var))->set_DescendantOrSelfStar_2(L_0);
		return;
	}
}
// System.Xml.XPath.Expression System.Xml.XPath.ExprSLASH2::Optimize()
extern "C"  Expression_t1452783009 * ExprSLASH2_Optimize_m3796015300 (ExprSLASH2_t1762680492 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ExprSLASH2_Optimize_m3796015300_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	NodeTest_t747859056 * V_0 = NULL;
	NodeNameTest_t562814213 * V_1 = NULL;
	NodeTypeTest_t4287533341 * V_2 = NULL;
	{
		Expression_t1452783009 * L_0 = __this->get_left_0();
		Expression_t1452783009 * L_1 = VirtFuncInvoker0< Expression_t1452783009 * >::Invoke(6 /* System.Xml.XPath.Expression System.Xml.XPath.Expression::Optimize() */, L_0);
		__this->set_left_0(L_1);
		NodeSet_t3272593155 * L_2 = __this->get_right_1();
		Expression_t1452783009 * L_3 = VirtFuncInvoker0< Expression_t1452783009 * >::Invoke(6 /* System.Xml.XPath.Expression System.Xml.XPath.Expression::Optimize() */, L_2);
		__this->set_right_1(((NodeSet_t3272593155 *)CastclassClass((RuntimeObject*)L_3, NodeSet_t3272593155_il2cpp_TypeInfo_var)));
		NodeSet_t3272593155 * L_4 = __this->get_right_1();
		V_0 = ((NodeTest_t747859056 *)IsInstClass((RuntimeObject*)L_4, NodeTest_t747859056_il2cpp_TypeInfo_var));
		NodeTest_t747859056 * L_5 = V_0;
		if (!L_5)
		{
			goto IL_008a;
		}
	}
	{
		NodeTest_t747859056 * L_6 = V_0;
		AxisSpecifier_t40435393 * L_7 = NodeTest_get_Axis_m3456611747(L_6, /*hidden argument*/NULL);
		int32_t L_8 = AxisSpecifier_get_Axis_m3310811897(L_7, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_8) == ((uint32_t)3))))
		{
			goto IL_008a;
		}
	}
	{
		NodeTest_t747859056 * L_9 = V_0;
		V_1 = ((NodeNameTest_t562814213 *)IsInstClass((RuntimeObject*)L_9, NodeNameTest_t562814213_il2cpp_TypeInfo_var));
		NodeNameTest_t562814213 * L_10 = V_1;
		if (!L_10)
		{
			goto IL_006a;
		}
	}
	{
		Expression_t1452783009 * L_11 = __this->get_left_0();
		NodeNameTest_t562814213 * L_12 = V_1;
		NodeNameTest_t562814213 * L_13 = (NodeNameTest_t562814213 *)il2cpp_codegen_object_new(NodeNameTest_t562814213_il2cpp_TypeInfo_var);
		NodeNameTest__ctor_m3009940847(L_13, L_12, 4, /*hidden argument*/NULL);
		ExprSLASH_t1263914658 * L_14 = (ExprSLASH_t1263914658 *)il2cpp_codegen_object_new(ExprSLASH_t1263914658_il2cpp_TypeInfo_var);
		ExprSLASH__ctor_m3063015905(L_14, L_11, L_13, /*hidden argument*/NULL);
		return L_14;
	}

IL_006a:
	{
		NodeTest_t747859056 * L_15 = V_0;
		V_2 = ((NodeTypeTest_t4287533341 *)IsInstClass((RuntimeObject*)L_15, NodeTypeTest_t4287533341_il2cpp_TypeInfo_var));
		NodeTypeTest_t4287533341 * L_16 = V_2;
		if (!L_16)
		{
			goto IL_008a;
		}
	}
	{
		Expression_t1452783009 * L_17 = __this->get_left_0();
		NodeTypeTest_t4287533341 * L_18 = V_2;
		NodeTypeTest_t4287533341 * L_19 = (NodeTypeTest_t4287533341 *)il2cpp_codegen_object_new(NodeTypeTest_t4287533341_il2cpp_TypeInfo_var);
		NodeTypeTest__ctor_m922623223(L_19, L_18, 4, /*hidden argument*/NULL);
		ExprSLASH_t1263914658 * L_20 = (ExprSLASH_t1263914658 *)il2cpp_codegen_object_new(ExprSLASH_t1263914658_il2cpp_TypeInfo_var);
		ExprSLASH__ctor_m3063015905(L_20, L_17, L_19, /*hidden argument*/NULL);
		return L_20;
	}

IL_008a:
	{
		return __this;
	}
}
// System.String System.Xml.XPath.ExprSLASH2::ToString()
extern "C"  String_t* ExprSLASH2_ToString_m3162446678 (ExprSLASH2_t1762680492 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ExprSLASH2_ToString_m3162446678_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Expression_t1452783009 * L_0 = __this->get_left_0();
		String_t* L_1 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_0);
		NodeSet_t3272593155 * L_2 = __this->get_right_1();
		String_t* L_3 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_2);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_4 = String_Concat_m3755062657(NULL /*static, unused*/, L_1, _stringLiteral3450582913, L_3, /*hidden argument*/NULL);
		return L_4;
	}
}
// System.Object System.Xml.XPath.ExprSLASH2::Evaluate(System.Xml.XPath.BaseIterator)
extern "C"  RuntimeObject * ExprSLASH2_Evaluate_m522727291 (ExprSLASH2_t1762680492 * __this, BaseIterator_t4168896842 * ___iter0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ExprSLASH2_Evaluate_m522727291_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	BaseIterator_t4168896842 * V_0 = NULL;
	BaseIterator_t4168896842 * V_1 = NULL;
	SlashIterator_t2421034408 * V_2 = NULL;
	SortedIterator_t2904376427 * G_B6_0 = NULL;
	{
		Expression_t1452783009 * L_0 = __this->get_left_0();
		BaseIterator_t4168896842 * L_1 = ___iter0;
		BaseIterator_t4168896842 * L_2 = VirtFuncInvoker1< BaseIterator_t4168896842 *, BaseIterator_t4168896842 * >::Invoke(14 /* System.Xml.XPath.BaseIterator System.Xml.XPath.Expression::EvaluateNodeSet(System.Xml.XPath.BaseIterator) */, L_0, L_1);
		V_0 = L_2;
		Expression_t1452783009 * L_3 = __this->get_left_0();
		bool L_4 = VirtFuncInvoker0< bool >::Invoke(15 /* System.Boolean System.Xml.XPath.Expression::get_Peer() */, L_3);
		if (!L_4)
		{
			goto IL_003e;
		}
	}
	{
		Expression_t1452783009 * L_5 = __this->get_left_0();
		bool L_6 = VirtFuncInvoker0< bool >::Invoke(19 /* System.Boolean System.Xml.XPath.Expression::get_RequireSorting() */, L_5);
		if (L_6)
		{
			goto IL_003e;
		}
	}
	{
		BaseIterator_t4168896842 * L_7 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(ExprSLASH2_t1762680492_il2cpp_TypeInfo_var);
		NodeTest_t747859056 * L_8 = ((ExprSLASH2_t1762680492_StaticFields*)il2cpp_codegen_static_fields_for(ExprSLASH2_t1762680492_il2cpp_TypeInfo_var))->get_DescendantOrSelfStar_2();
		SimpleSlashIterator_t3611200333 * L_9 = (SimpleSlashIterator_t3611200333 *)il2cpp_codegen_object_new(SimpleSlashIterator_t3611200333_il2cpp_TypeInfo_var);
		SimpleSlashIterator__ctor_m3118305435(L_9, L_7, L_8, /*hidden argument*/NULL);
		V_0 = L_9;
		goto IL_0067;
	}

IL_003e:
	{
		BaseIterator_t4168896842 * L_10 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(ExprSLASH2_t1762680492_il2cpp_TypeInfo_var);
		NodeTest_t747859056 * L_11 = ((ExprSLASH2_t1762680492_StaticFields*)il2cpp_codegen_static_fields_for(ExprSLASH2_t1762680492_il2cpp_TypeInfo_var))->get_DescendantOrSelfStar_2();
		SlashIterator_t2421034408 * L_12 = (SlashIterator_t2421034408 *)il2cpp_codegen_object_new(SlashIterator_t2421034408_il2cpp_TypeInfo_var);
		SlashIterator__ctor_m1098282742(L_12, L_10, L_11, /*hidden argument*/NULL);
		V_1 = L_12;
		Expression_t1452783009 * L_13 = __this->get_left_0();
		bool L_14 = VirtFuncInvoker0< bool >::Invoke(19 /* System.Boolean System.Xml.XPath.Expression::get_RequireSorting() */, L_13);
		if (!L_14)
		{
			goto IL_0065;
		}
	}
	{
		BaseIterator_t4168896842 * L_15 = V_1;
		SortedIterator_t2904376427 * L_16 = (SortedIterator_t2904376427 *)il2cpp_codegen_object_new(SortedIterator_t2904376427_il2cpp_TypeInfo_var);
		SortedIterator__ctor_m4010031056(L_16, L_15, /*hidden argument*/NULL);
		G_B6_0 = L_16;
		goto IL_0066;
	}

IL_0065:
	{
		BaseIterator_t4168896842 * L_17 = V_1;
		G_B6_0 = ((SortedIterator_t2904376427 *)(L_17));
	}

IL_0066:
	{
		V_0 = G_B6_0;
	}

IL_0067:
	{
		BaseIterator_t4168896842 * L_18 = V_0;
		NodeSet_t3272593155 * L_19 = __this->get_right_1();
		SlashIterator_t2421034408 * L_20 = (SlashIterator_t2421034408 *)il2cpp_codegen_object_new(SlashIterator_t2421034408_il2cpp_TypeInfo_var);
		SlashIterator__ctor_m1098282742(L_20, L_18, L_19, /*hidden argument*/NULL);
		V_2 = L_20;
		SlashIterator_t2421034408 * L_21 = V_2;
		SortedIterator_t2904376427 * L_22 = (SortedIterator_t2904376427 *)il2cpp_codegen_object_new(SortedIterator_t2904376427_il2cpp_TypeInfo_var);
		SortedIterator__ctor_m4010031056(L_22, L_21, /*hidden argument*/NULL);
		return L_22;
	}
}
// System.Boolean System.Xml.XPath.ExprSLASH2::get_RequireSorting()
extern "C"  bool ExprSLASH2_get_RequireSorting_m2553622736 (ExprSLASH2_t1762680492 * __this, const RuntimeMethod* method)
{
	int32_t G_B3_0 = 0;
	{
		Expression_t1452783009 * L_0 = __this->get_left_0();
		bool L_1 = VirtFuncInvoker0< bool >::Invoke(19 /* System.Boolean System.Xml.XPath.Expression::get_RequireSorting() */, L_0);
		if (L_1)
		{
			goto IL_001d;
		}
	}
	{
		NodeSet_t3272593155 * L_2 = __this->get_right_1();
		bool L_3 = VirtFuncInvoker0< bool >::Invoke(19 /* System.Boolean System.Xml.XPath.Expression::get_RequireSorting() */, L_2);
		G_B3_0 = ((int32_t)(L_3));
		goto IL_001e;
	}

IL_001d:
	{
		G_B3_0 = 1;
	}

IL_001e:
	{
		return (bool)G_B3_0;
	}
}
// System.Boolean System.Xml.XPath.ExprSLASH2::get_Peer()
extern "C"  bool ExprSLASH2_get_Peer_m3928650887 (ExprSLASH2_t1762680492 * __this, const RuntimeMethod* method)
{
	{
		return (bool)0;
	}
}
// System.Boolean System.Xml.XPath.ExprSLASH2::get_Subtree()
extern "C"  bool ExprSLASH2_get_Subtree_m1772483012 (ExprSLASH2_t1762680492 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ExprSLASH2_get_Subtree_m1772483012_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	NodeSet_t3272593155 * V_0 = NULL;
	int32_t G_B4_0 = 0;
	{
		Expression_t1452783009 * L_0 = __this->get_left_0();
		V_0 = ((NodeSet_t3272593155 *)IsInstClass((RuntimeObject*)L_0, NodeSet_t3272593155_il2cpp_TypeInfo_var));
		NodeSet_t3272593155 * L_1 = V_0;
		if (!L_1)
		{
			goto IL_002a;
		}
	}
	{
		NodeSet_t3272593155 * L_2 = V_0;
		bool L_3 = VirtFuncInvoker0< bool >::Invoke(20 /* System.Boolean System.Xml.XPath.NodeSet::get_Subtree() */, L_2);
		if (!L_3)
		{
			goto IL_002a;
		}
	}
	{
		NodeSet_t3272593155 * L_4 = __this->get_right_1();
		bool L_5 = VirtFuncInvoker0< bool >::Invoke(20 /* System.Boolean System.Xml.XPath.NodeSet::get_Subtree() */, L_4);
		G_B4_0 = ((int32_t)(L_5));
		goto IL_002b;
	}

IL_002a:
	{
		G_B4_0 = 0;
	}

IL_002b:
	{
		return (bool)G_B4_0;
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
// System.Void System.Xml.XPath.ExprUNION::.ctor(System.Xml.XPath.Expression,System.Xml.XPath.Expression)
extern "C"  void ExprUNION__ctor_m1383977564 (ExprUNION_t1609753984 * __this, Expression_t1452783009 * ___left0, Expression_t1452783009 * ___right1, const RuntimeMethod* method)
{
	{
		NodeSet__ctor_m958047062(__this, /*hidden argument*/NULL);
		Expression_t1452783009 * L_0 = ___left0;
		__this->set_left_0(L_0);
		Expression_t1452783009 * L_1 = ___right1;
		__this->set_right_1(L_1);
		return;
	}
}
// System.Xml.XPath.Expression System.Xml.XPath.ExprUNION::Optimize()
extern "C"  Expression_t1452783009 * ExprUNION_Optimize_m2531263045 (ExprUNION_t1609753984 * __this, const RuntimeMethod* method)
{
	{
		Expression_t1452783009 * L_0 = __this->get_left_0();
		Expression_t1452783009 * L_1 = VirtFuncInvoker0< Expression_t1452783009 * >::Invoke(6 /* System.Xml.XPath.Expression System.Xml.XPath.Expression::Optimize() */, L_0);
		__this->set_left_0(L_1);
		Expression_t1452783009 * L_2 = __this->get_right_1();
		Expression_t1452783009 * L_3 = VirtFuncInvoker0< Expression_t1452783009 * >::Invoke(6 /* System.Xml.XPath.Expression System.Xml.XPath.Expression::Optimize() */, L_2);
		__this->set_right_1(L_3);
		return __this;
	}
}
// System.String System.Xml.XPath.ExprUNION::ToString()
extern "C"  String_t* ExprUNION_ToString_m1231590867 (ExprUNION_t1609753984 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ExprUNION_ToString_m1231590867_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Expression_t1452783009 * L_0 = __this->get_left_0();
		String_t* L_1 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_0);
		Expression_t1452783009 * L_2 = __this->get_right_1();
		String_t* L_3 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_2);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_4 = String_Concat_m3755062657(NULL /*static, unused*/, L_1, _stringLiteral3791560906, L_3, /*hidden argument*/NULL);
		return L_4;
	}
}
// System.Object System.Xml.XPath.ExprUNION::Evaluate(System.Xml.XPath.BaseIterator)
extern "C"  RuntimeObject * ExprUNION_Evaluate_m3798551753 (ExprUNION_t1609753984 * __this, BaseIterator_t4168896842 * ___iter0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ExprUNION_Evaluate_m3798551753_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	BaseIterator_t4168896842 * V_0 = NULL;
	BaseIterator_t4168896842 * V_1 = NULL;
	{
		Expression_t1452783009 * L_0 = __this->get_left_0();
		BaseIterator_t4168896842 * L_1 = ___iter0;
		BaseIterator_t4168896842 * L_2 = VirtFuncInvoker1< BaseIterator_t4168896842 *, BaseIterator_t4168896842 * >::Invoke(14 /* System.Xml.XPath.BaseIterator System.Xml.XPath.Expression::EvaluateNodeSet(System.Xml.XPath.BaseIterator) */, L_0, L_1);
		V_0 = L_2;
		Expression_t1452783009 * L_3 = __this->get_right_1();
		BaseIterator_t4168896842 * L_4 = ___iter0;
		BaseIterator_t4168896842 * L_5 = VirtFuncInvoker1< BaseIterator_t4168896842 *, BaseIterator_t4168896842 * >::Invoke(14 /* System.Xml.XPath.BaseIterator System.Xml.XPath.Expression::EvaluateNodeSet(System.Xml.XPath.BaseIterator) */, L_3, L_4);
		V_1 = L_5;
		BaseIterator_t4168896842 * L_6 = ___iter0;
		BaseIterator_t4168896842 * L_7 = V_0;
		BaseIterator_t4168896842 * L_8 = V_1;
		UnionIterator_t312972106 * L_9 = (UnionIterator_t312972106 *)il2cpp_codegen_object_new(UnionIterator_t312972106_il2cpp_TypeInfo_var);
		UnionIterator__ctor_m90054607(L_9, L_6, L_7, L_8, /*hidden argument*/NULL);
		return L_9;
	}
}
// System.Boolean System.Xml.XPath.ExprUNION::get_Peer()
extern "C"  bool ExprUNION_get_Peer_m2152346618 (ExprUNION_t1609753984 * __this, const RuntimeMethod* method)
{
	int32_t G_B3_0 = 0;
	{
		Expression_t1452783009 * L_0 = __this->get_left_0();
		bool L_1 = VirtFuncInvoker0< bool >::Invoke(15 /* System.Boolean System.Xml.XPath.Expression::get_Peer() */, L_0);
		if (!L_1)
		{
			goto IL_001d;
		}
	}
	{
		Expression_t1452783009 * L_2 = __this->get_right_1();
		bool L_3 = VirtFuncInvoker0< bool >::Invoke(15 /* System.Boolean System.Xml.XPath.Expression::get_Peer() */, L_2);
		G_B3_0 = ((int32_t)(L_3));
		goto IL_001e;
	}

IL_001d:
	{
		G_B3_0 = 0;
	}

IL_001e:
	{
		return (bool)G_B3_0;
	}
}
// System.Boolean System.Xml.XPath.ExprUNION::get_Subtree()
extern "C"  bool ExprUNION_get_Subtree_m3450082559 (ExprUNION_t1609753984 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ExprUNION_get_Subtree_m3450082559_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	NodeSet_t3272593155 * V_0 = NULL;
	NodeSet_t3272593155 * V_1 = NULL;
	int32_t G_B5_0 = 0;
	{
		Expression_t1452783009 * L_0 = __this->get_left_0();
		V_0 = ((NodeSet_t3272593155 *)IsInstClass((RuntimeObject*)L_0, NodeSet_t3272593155_il2cpp_TypeInfo_var));
		Expression_t1452783009 * L_1 = __this->get_right_1();
		V_1 = ((NodeSet_t3272593155 *)IsInstClass((RuntimeObject*)L_1, NodeSet_t3272593155_il2cpp_TypeInfo_var));
		NodeSet_t3272593155 * L_2 = V_0;
		if (!L_2)
		{
			goto IL_0037;
		}
	}
	{
		NodeSet_t3272593155 * L_3 = V_1;
		if (!L_3)
		{
			goto IL_0037;
		}
	}
	{
		NodeSet_t3272593155 * L_4 = V_0;
		bool L_5 = VirtFuncInvoker0< bool >::Invoke(20 /* System.Boolean System.Xml.XPath.NodeSet::get_Subtree() */, L_4);
		if (!L_5)
		{
			goto IL_0037;
		}
	}
	{
		NodeSet_t3272593155 * L_6 = V_1;
		bool L_7 = VirtFuncInvoker0< bool >::Invoke(20 /* System.Boolean System.Xml.XPath.NodeSet::get_Subtree() */, L_6);
		G_B5_0 = ((int32_t)(L_7));
		goto IL_0038;
	}

IL_0037:
	{
		G_B5_0 = 0;
	}

IL_0038:
	{
		return (bool)G_B5_0;
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
// System.Void System.Xml.XPath.ExprVariable::.ctor(System.Xml.XmlQualifiedName,System.Xml.Xsl.IStaticXsltContext)
extern "C"  void ExprVariable__ctor_m3887127046 (ExprVariable_t1387751146 * __this, XmlQualifiedName_t2760654312 * ___name0, RuntimeObject* ___ctx1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ExprVariable__ctor_m3887127046_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Expression__ctor_m15586157(__this, /*hidden argument*/NULL);
		RuntimeObject* L_0 = ___ctx1;
		if (!L_0)
		{
			goto IL_0021;
		}
	}
	{
		RuntimeObject* L_1 = ___ctx1;
		XmlQualifiedName_t2760654312 * L_2 = ___name0;
		String_t* L_3 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Xml.XmlQualifiedName::ToString() */, L_2);
		XmlQualifiedName_t2760654312 * L_4 = InterfaceFuncInvoker1< XmlQualifiedName_t2760654312 *, String_t* >::Invoke(2 /* System.Xml.XmlQualifiedName System.Xml.Xsl.IStaticXsltContext::LookupQName(System.String) */, IStaticXsltContext_t1496336571_il2cpp_TypeInfo_var, L_1, L_3);
		___name0 = L_4;
		__this->set_resolvedName_1((bool)1);
	}

IL_0021:
	{
		XmlQualifiedName_t2760654312 * L_5 = ___name0;
		__this->set__name_0(L_5);
		return;
	}
}
// System.String System.Xml.XPath.ExprVariable::ToString()
extern "C"  String_t* ExprVariable_ToString_m1481480678 (ExprVariable_t1387751146 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ExprVariable_ToString_m1481480678_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		XmlQualifiedName_t2760654312 * L_0 = __this->get__name_0();
		String_t* L_1 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Xml.XmlQualifiedName::ToString() */, L_0);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_2 = String_Concat_m3937257545(NULL /*static, unused*/, _stringLiteral3452614524, L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// System.Xml.XPath.XPathResultType System.Xml.XPath.ExprVariable::get_ReturnType()
extern "C"  int32_t ExprVariable_get_ReturnType_m2543541436 (ExprVariable_t1387751146 * __this, const RuntimeMethod* method)
{
	{
		return (int32_t)(5);
	}
}
// System.Xml.XPath.XPathResultType System.Xml.XPath.ExprVariable::GetReturnType(System.Xml.XPath.BaseIterator)
extern "C"  int32_t ExprVariable_GetReturnType_m965820944 (ExprVariable_t1387751146 * __this, BaseIterator_t4168896842 * ___iter0, const RuntimeMethod* method)
{
	{
		return (int32_t)(5);
	}
}
// System.Object System.Xml.XPath.ExprVariable::Evaluate(System.Xml.XPath.BaseIterator)
extern "C"  RuntimeObject * ExprVariable_Evaluate_m265799308 (ExprVariable_t1387751146 * __this, BaseIterator_t4168896842 * ___iter0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ExprVariable_Evaluate_m265799308_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	XsltContext_t2039362735 * V_1 = NULL;
	RuntimeObject * V_2 = NULL;
	XPathNodeIterator_t3667290188 * V_3 = NULL;
	Type_t * G_B7_0 = NULL;
	String_t* G_B7_1 = NULL;
	Type_t * G_B6_0 = NULL;
	String_t* G_B6_1 = NULL;
	Type_t * G_B8_0 = NULL;
	Type_t * G_B8_1 = NULL;
	String_t* G_B8_2 = NULL;
	XPathNodeIterator_t3667290188 * G_B15_0 = NULL;
	{
		V_0 = (RuntimeObject*)NULL;
		BaseIterator_t4168896842 * L_0 = ___iter0;
		RuntimeObject* L_1 = BaseIterator_get_NamespaceManager_m2542706114(L_0, /*hidden argument*/NULL);
		V_1 = ((XsltContext_t2039362735 *)IsInstClass((RuntimeObject*)L_1, XsltContext_t2039362735_il2cpp_TypeInfo_var));
		XsltContext_t2039362735 * L_2 = V_1;
		if (!L_2)
		{
			goto IL_0058;
		}
	}
	{
		bool L_3 = __this->get_resolvedName_1();
		if (!L_3)
		{
			goto IL_0031;
		}
	}
	{
		XsltContext_t2039362735 * L_4 = V_1;
		XmlQualifiedName_t2760654312 * L_5 = __this->get__name_0();
		RuntimeObject* L_6 = VirtFuncInvoker1< RuntimeObject*, XmlQualifiedName_t2760654312 * >::Invoke(17 /* System.Xml.Xsl.IXsltContextVariable System.Xml.Xsl.XsltContext::ResolveVariable(System.Xml.XmlQualifiedName) */, L_4, L_5);
		V_0 = L_6;
		goto IL_0053;
	}

IL_0031:
	{
		XsltContext_t2039362735 * L_7 = V_1;
		XmlQualifiedName_t2760654312 * L_8 = __this->get__name_0();
		String_t* L_9 = XmlQualifiedName_get_Name_m815040483(L_8, /*hidden argument*/NULL);
		XmlQualifiedName_t2760654312 * L_10 = __this->get__name_0();
		String_t* L_11 = XmlQualifiedName_get_Namespace_m3957593392(L_10, /*hidden argument*/NULL);
		XmlQualifiedName_t2760654312 * L_12 = (XmlQualifiedName_t2760654312 *)il2cpp_codegen_object_new(XmlQualifiedName_t2760654312_il2cpp_TypeInfo_var);
		XmlQualifiedName__ctor_m835061046(L_12, L_9, L_11, /*hidden argument*/NULL);
		RuntimeObject* L_13 = VirtFuncInvoker1< RuntimeObject*, XmlQualifiedName_t2760654312 * >::Invoke(17 /* System.Xml.Xsl.IXsltContextVariable System.Xml.Xsl.XsltContext::ResolveVariable(System.Xml.XmlQualifiedName) */, L_7, L_12);
		V_0 = L_13;
	}

IL_0053:
	{
		goto IL_008a;
	}

IL_0058:
	{
		BaseIterator_t4168896842 * L_14 = ___iter0;
		Type_t * L_15 = Object_GetType_m88164663(L_14, /*hidden argument*/NULL);
		BaseIterator_t4168896842 * L_16 = ___iter0;
		RuntimeObject* L_17 = BaseIterator_get_NamespaceManager_m2542706114(L_16, /*hidden argument*/NULL);
		G_B6_0 = L_15;
		G_B6_1 = _stringLiteral4194821020;
		if (!L_17)
		{
			G_B7_0 = L_15;
			G_B7_1 = _stringLiteral4194821020;
			goto IL_007e;
		}
	}
	{
		BaseIterator_t4168896842 * L_18 = ___iter0;
		RuntimeObject* L_19 = BaseIterator_get_NamespaceManager_m2542706114(L_18, /*hidden argument*/NULL);
		Type_t * L_20 = Object_GetType_m88164663(L_19, /*hidden argument*/NULL);
		G_B8_0 = L_20;
		G_B8_1 = G_B6_0;
		G_B8_2 = G_B6_1;
		goto IL_007f;
	}

IL_007e:
	{
		G_B8_0 = ((Type_t *)(NULL));
		G_B8_1 = G_B7_0;
		G_B8_2 = G_B7_1;
	}

IL_007f:
	{
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_21 = String_Format_m2556382932(NULL /*static, unused*/, G_B8_2, G_B8_1, G_B8_0, /*hidden argument*/NULL);
		XPathException_t2107611652 * L_22 = (XPathException_t2107611652 *)il2cpp_codegen_object_new(XPathException_t2107611652_il2cpp_TypeInfo_var);
		XPathException__ctor_m3226187054(L_22, L_21, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_22, NULL, ExprVariable_Evaluate_m265799308_RuntimeMethod_var);
	}

IL_008a:
	{
		RuntimeObject* L_23 = V_0;
		if (L_23)
		{
			goto IL_00b0;
		}
	}
	{
		XmlQualifiedName_t2760654312 * L_24 = __this->get__name_0();
		String_t* L_25 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Xml.XmlQualifiedName::ToString() */, L_24);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_26 = String_Concat_m3755062657(NULL /*static, unused*/, _stringLiteral4027932726, L_25, _stringLiteral459368889, /*hidden argument*/NULL);
		XPathException_t2107611652 * L_27 = (XPathException_t2107611652 *)il2cpp_codegen_object_new(XPathException_t2107611652_il2cpp_TypeInfo_var);
		XPathException__ctor_m3226187054(L_27, L_26, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_27, NULL, ExprVariable_Evaluate_m265799308_RuntimeMethod_var);
	}

IL_00b0:
	{
		RuntimeObject* L_28 = V_0;
		XsltContext_t2039362735 * L_29 = V_1;
		RuntimeObject * L_30 = InterfaceFuncInvoker1< RuntimeObject *, XsltContext_t2039362735 * >::Invoke(0 /* System.Object System.Xml.Xsl.IXsltContextVariable::Evaluate(System.Xml.Xsl.XsltContext) */, IXsltContextVariable_t1240308286_il2cpp_TypeInfo_var, L_28, L_29);
		V_2 = L_30;
		RuntimeObject * L_31 = V_2;
		V_3 = ((XPathNodeIterator_t3667290188 *)IsInstClass((RuntimeObject*)L_31, XPathNodeIterator_t3667290188_il2cpp_TypeInfo_var));
		XPathNodeIterator_t3667290188 * L_32 = V_3;
		if (!L_32)
		{
			goto IL_00e3;
		}
	}
	{
		XPathNodeIterator_t3667290188 * L_33 = V_3;
		if (!((BaseIterator_t4168896842 *)IsInstClass((RuntimeObject*)L_33, BaseIterator_t4168896842_il2cpp_TypeInfo_var)))
		{
			goto IL_00d6;
		}
	}
	{
		XPathNodeIterator_t3667290188 * L_34 = V_3;
		G_B15_0 = L_34;
		goto IL_00e2;
	}

IL_00d6:
	{
		XPathNodeIterator_t3667290188 * L_35 = V_3;
		BaseIterator_t4168896842 * L_36 = ___iter0;
		RuntimeObject* L_37 = BaseIterator_get_NamespaceManager_m2542706114(L_36, /*hidden argument*/NULL);
		WrapperIterator_t1258076988 * L_38 = (WrapperIterator_t1258076988 *)il2cpp_codegen_object_new(WrapperIterator_t1258076988_il2cpp_TypeInfo_var);
		WrapperIterator__ctor_m1708545452(L_38, L_35, L_37, /*hidden argument*/NULL);
		G_B15_0 = ((XPathNodeIterator_t3667290188 *)(L_38));
	}

IL_00e2:
	{
		return G_B15_0;
	}

IL_00e3:
	{
		RuntimeObject * L_39 = V_2;
		return L_39;
	}
}
// System.Boolean System.Xml.XPath.ExprVariable::get_Peer()
extern "C"  bool ExprVariable_get_Peer_m2397504575 (ExprVariable_t1387751146 * __this, const RuntimeMethod* method)
{
	{
		return (bool)0;
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
// System.Void System.Xml.XPath.FollowingIterator::.ctor(System.Xml.XPath.BaseIterator)
extern "C"  void FollowingIterator__ctor_m3846478294 (FollowingIterator_t3658643279 * __this, BaseIterator_t4168896842 * ___iter0, const RuntimeMethod* method)
{
	{
		BaseIterator_t4168896842 * L_0 = ___iter0;
		SimpleIterator__ctor_m3211911800(__this, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Xml.XPath.FollowingIterator::.ctor(System.Xml.XPath.FollowingIterator)
extern "C"  void FollowingIterator__ctor_m2516869462 (FollowingIterator_t3658643279 * __this, FollowingIterator_t3658643279 * ___other0, const RuntimeMethod* method)
{
	{
		FollowingIterator_t3658643279 * L_0 = ___other0;
		SimpleIterator__ctor_m1156879794(__this, L_0, (bool)1, /*hidden argument*/NULL);
		return;
	}
}
// System.Xml.XPath.XPathNodeIterator System.Xml.XPath.FollowingIterator::Clone()
extern "C"  XPathNodeIterator_t3667290188 * FollowingIterator_Clone_m3718441867 (FollowingIterator_t3658643279 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (FollowingIterator_Clone_m3718441867_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		FollowingIterator_t3658643279 * L_0 = (FollowingIterator_t3658643279 *)il2cpp_codegen_object_new(FollowingIterator_t3658643279_il2cpp_TypeInfo_var);
		FollowingIterator__ctor_m2516869462(L_0, __this, /*hidden argument*/NULL);
		return L_0;
	}
}
// System.Boolean System.Xml.XPath.FollowingIterator::MoveNextCore()
extern "C"  bool FollowingIterator_MoveNextCore_m2455631548 (FollowingIterator_t3658643279 * __this, const RuntimeMethod* method)
{
	bool V_0 = false;
	int32_t V_1 = 0;
	{
		bool L_0 = __this->get__finished_6();
		if (!L_0)
		{
			goto IL_000d;
		}
	}
	{
		return (bool)0;
	}

IL_000d:
	{
		V_0 = (bool)1;
		int32_t L_1 = VirtFuncInvoker0< int32_t >::Invoke(8 /* System.Int32 System.Xml.XPath.BaseIterator::get_CurrentPosition() */, __this);
		if (L_1)
		{
			goto IL_008c;
		}
	}
	{
		V_0 = (bool)0;
		XPathNavigator_t787956054 * L_2 = ((SimpleIterator_t809567201 *)__this)->get__nav_3();
		int32_t L_3 = VirtFuncInvoker0< int32_t >::Invoke(12 /* System.Xml.XPath.XPathNodeType System.Xml.XPath.XPathNavigator::get_NodeType() */, L_2);
		V_1 = L_3;
		int32_t L_4 = V_1;
		if ((((int32_t)L_4) == ((int32_t)2)))
		{
			goto IL_003b;
		}
	}
	{
		int32_t L_5 = V_1;
		if ((((int32_t)L_5) == ((int32_t)3)))
		{
			goto IL_003b;
		}
	}
	{
		goto IL_004e;
	}

IL_003b:
	{
		XPathNavigator_t787956054 * L_6 = ((SimpleIterator_t809567201 *)__this)->get__nav_3();
		VirtFuncInvoker0< bool >::Invoke(31 /* System.Boolean System.Xml.XPath.XPathNavigator::MoveToParent() */, L_6);
		V_0 = (bool)1;
		goto IL_008c;
	}

IL_004e:
	{
		XPathNavigator_t787956054 * L_7 = ((SimpleIterator_t809567201 *)__this)->get__nav_3();
		bool L_8 = VirtFuncInvoker0< bool >::Invoke(28 /* System.Boolean System.Xml.XPath.XPathNavigator::MoveToNext() */, L_7);
		if (!L_8)
		{
			goto IL_0060;
		}
	}
	{
		return (bool)1;
	}

IL_0060:
	{
		goto IL_0077;
	}

IL_0065:
	{
		XPathNavigator_t787956054 * L_9 = ((SimpleIterator_t809567201 *)__this)->get__nav_3();
		bool L_10 = VirtFuncInvoker0< bool >::Invoke(28 /* System.Boolean System.Xml.XPath.XPathNavigator::MoveToNext() */, L_9);
		if (!L_10)
		{
			goto IL_0077;
		}
	}
	{
		return (bool)1;
	}

IL_0077:
	{
		XPathNavigator_t787956054 * L_11 = ((SimpleIterator_t809567201 *)__this)->get__nav_3();
		bool L_12 = VirtFuncInvoker0< bool >::Invoke(31 /* System.Boolean System.Xml.XPath.XPathNavigator::MoveToParent() */, L_11);
		if (L_12)
		{
			goto IL_0065;
		}
	}
	{
		goto IL_008c;
	}

IL_008c:
	{
		bool L_13 = V_0;
		if (!L_13)
		{
			goto IL_00c6;
		}
	}
	{
		XPathNavigator_t787956054 * L_14 = ((SimpleIterator_t809567201 *)__this)->get__nav_3();
		bool L_15 = VirtFuncInvoker0< bool >::Invoke(25 /* System.Boolean System.Xml.XPath.XPathNavigator::MoveToFirstChild() */, L_14);
		if (!L_15)
		{
			goto IL_00a4;
		}
	}
	{
		return (bool)1;
	}

IL_00a4:
	{
		XPathNavigator_t787956054 * L_16 = ((SimpleIterator_t809567201 *)__this)->get__nav_3();
		bool L_17 = VirtFuncInvoker0< bool >::Invoke(28 /* System.Boolean System.Xml.XPath.XPathNavigator::MoveToNext() */, L_16);
		if (!L_17)
		{
			goto IL_00b6;
		}
	}
	{
		return (bool)1;
	}

IL_00b6:
	{
		XPathNavigator_t787956054 * L_18 = ((SimpleIterator_t809567201 *)__this)->get__nav_3();
		bool L_19 = VirtFuncInvoker0< bool >::Invoke(31 /* System.Boolean System.Xml.XPath.XPathNavigator::MoveToParent() */, L_18);
		if (L_19)
		{
			goto IL_00a4;
		}
	}

IL_00c6:
	{
		__this->set__finished_6((bool)1);
		return (bool)0;
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
// System.Void System.Xml.XPath.FollowingSiblingIterator::.ctor(System.Xml.XPath.BaseIterator)
extern "C"  void FollowingSiblingIterator__ctor_m1609532892 (FollowingSiblingIterator_t3042855407 * __this, BaseIterator_t4168896842 * ___iter0, const RuntimeMethod* method)
{
	{
		BaseIterator_t4168896842 * L_0 = ___iter0;
		SimpleIterator__ctor_m3211911800(__this, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Xml.XPath.FollowingSiblingIterator::.ctor(System.Xml.XPath.FollowingSiblingIterator)
extern "C"  void FollowingSiblingIterator__ctor_m3152868463 (FollowingSiblingIterator_t3042855407 * __this, FollowingSiblingIterator_t3042855407 * ___other0, const RuntimeMethod* method)
{
	{
		FollowingSiblingIterator_t3042855407 * L_0 = ___other0;
		SimpleIterator__ctor_m1156879794(__this, L_0, (bool)1, /*hidden argument*/NULL);
		return;
	}
}
// System.Xml.XPath.XPathNodeIterator System.Xml.XPath.FollowingSiblingIterator::Clone()
extern "C"  XPathNodeIterator_t3667290188 * FollowingSiblingIterator_Clone_m1362168754 (FollowingSiblingIterator_t3042855407 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (FollowingSiblingIterator_Clone_m1362168754_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		FollowingSiblingIterator_t3042855407 * L_0 = (FollowingSiblingIterator_t3042855407 *)il2cpp_codegen_object_new(FollowingSiblingIterator_t3042855407_il2cpp_TypeInfo_var);
		FollowingSiblingIterator__ctor_m3152868463(L_0, __this, /*hidden argument*/NULL);
		return L_0;
	}
}
// System.Boolean System.Xml.XPath.FollowingSiblingIterator::MoveNextCore()
extern "C"  bool FollowingSiblingIterator_MoveNextCore_m3088065128 (FollowingSiblingIterator_t3042855407 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		XPathNavigator_t787956054 * L_0 = ((SimpleIterator_t809567201 *)__this)->get__nav_3();
		int32_t L_1 = VirtFuncInvoker0< int32_t >::Invoke(12 /* System.Xml.XPath.XPathNodeType System.Xml.XPath.XPathNavigator::get_NodeType() */, L_0);
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)2)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)3)))
		{
			goto IL_001f;
		}
	}
	{
		goto IL_0021;
	}

IL_001f:
	{
		return (bool)0;
	}

IL_0021:
	{
		XPathNavigator_t787956054 * L_4 = ((SimpleIterator_t809567201 *)__this)->get__nav_3();
		bool L_5 = VirtFuncInvoker0< bool >::Invoke(28 /* System.Boolean System.Xml.XPath.XPathNavigator::MoveToNext() */, L_4);
		if (!L_5)
		{
			goto IL_0033;
		}
	}
	{
		return (bool)1;
	}

IL_0033:
	{
		return (bool)0;
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
// System.Void System.Xml.XPath.FunctionArguments::.ctor(System.Xml.XPath.Expression,System.Xml.XPath.FunctionArguments)
extern "C"  void FunctionArguments__ctor_m1646675917 (FunctionArguments_t3573450773 * __this, Expression_t1452783009 * ___arg0, FunctionArguments_t3573450773 * ___tail1, const RuntimeMethod* method)
{
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		Expression_t1452783009 * L_0 = ___arg0;
		__this->set__arg_0(L_0);
		FunctionArguments_t3573450773 * L_1 = ___tail1;
		__this->set__tail_1(L_1);
		return;
	}
}
// System.Xml.XPath.Expression System.Xml.XPath.FunctionArguments::get_Arg()
extern "C"  Expression_t1452783009 * FunctionArguments_get_Arg_m248443681 (FunctionArguments_t3573450773 * __this, const RuntimeMethod* method)
{
	{
		Expression_t1452783009 * L_0 = __this->get__arg_0();
		return L_0;
	}
}
// System.Xml.XPath.FunctionArguments System.Xml.XPath.FunctionArguments::get_Tail()
extern "C"  FunctionArguments_t3573450773 * FunctionArguments_get_Tail_m3050077184 (FunctionArguments_t3573450773 * __this, const RuntimeMethod* method)
{
	{
		FunctionArguments_t3573450773 * L_0 = __this->get__tail_1();
		return L_0;
	}
}
// System.Void System.Xml.XPath.FunctionArguments::ToArrayList(System.Collections.ArrayList)
extern "C"  void FunctionArguments_ToArrayList_m3840216961 (FunctionArguments_t3573450773 * __this, ArrayList_t2718874744 * ___a0, const RuntimeMethod* method)
{
	FunctionArguments_t3573450773 * V_0 = NULL;
	{
		V_0 = __this;
	}

IL_0002:
	{
		ArrayList_t2718874744 * L_0 = ___a0;
		FunctionArguments_t3573450773 * L_1 = V_0;
		Expression_t1452783009 * L_2 = L_1->get__arg_0();
		VirtFuncInvoker1< int32_t, RuntimeObject * >::Invoke(30 /* System.Int32 System.Collections.ArrayList::Add(System.Object) */, L_0, L_2);
		FunctionArguments_t3573450773 * L_3 = V_0;
		FunctionArguments_t3573450773 * L_4 = L_3->get__tail_1();
		V_0 = L_4;
		FunctionArguments_t3573450773 * L_5 = V_0;
		if (L_5)
		{
			goto IL_0002;
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
// System.Void System.Xml.XPath.ListIterator::.ctor(System.Xml.XPath.BaseIterator,System.Collections.IList)
extern "C"  void ListIterator__ctor_m2616163549 (ListIterator_t3066609410 * __this, BaseIterator_t4168896842 * ___iter0, RuntimeObject* ___list1, const RuntimeMethod* method)
{
	{
		BaseIterator_t4168896842 * L_0 = ___iter0;
		RuntimeObject* L_1 = BaseIterator_get_NamespaceManager_m2542706114(L_0, /*hidden argument*/NULL);
		BaseIterator__ctor_m1145318967(__this, L_1, /*hidden argument*/NULL);
		RuntimeObject* L_2 = ___list1;
		__this->set__list_3(L_2);
		return;
	}
}
// System.Void System.Xml.XPath.ListIterator::.ctor(System.Collections.IList,System.Xml.IXmlNamespaceResolver)
extern "C"  void ListIterator__ctor_m1701056558 (ListIterator_t3066609410 * __this, RuntimeObject* ___list0, RuntimeObject* ___nsm1, const RuntimeMethod* method)
{
	{
		RuntimeObject* L_0 = ___nsm1;
		BaseIterator__ctor_m1145318967(__this, L_0, /*hidden argument*/NULL);
		RuntimeObject* L_1 = ___list0;
		__this->set__list_3(L_1);
		return;
	}
}
// System.Void System.Xml.XPath.ListIterator::.ctor(System.Xml.XPath.ListIterator)
extern "C"  void ListIterator__ctor_m3997947691 (ListIterator_t3066609410 * __this, ListIterator_t3066609410 * ___other0, const RuntimeMethod* method)
{
	{
		ListIterator_t3066609410 * L_0 = ___other0;
		BaseIterator__ctor_m2743981095(__this, L_0, /*hidden argument*/NULL);
		ListIterator_t3066609410 * L_1 = ___other0;
		RuntimeObject* L_2 = L_1->get__list_3();
		__this->set__list_3(L_2);
		return;
	}
}
// System.Xml.XPath.XPathNodeIterator System.Xml.XPath.ListIterator::Clone()
extern "C"  XPathNodeIterator_t3667290188 * ListIterator_Clone_m190352292 (ListIterator_t3066609410 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ListIterator_Clone_m190352292_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		ListIterator_t3066609410 * L_0 = (ListIterator_t3066609410 *)il2cpp_codegen_object_new(ListIterator_t3066609410_il2cpp_TypeInfo_var);
		ListIterator__ctor_m3997947691(L_0, __this, /*hidden argument*/NULL);
		return L_0;
	}
}
// System.Boolean System.Xml.XPath.ListIterator::MoveNextCore()
extern "C"  bool ListIterator_MoveNextCore_m889509885 (ListIterator_t3066609410 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ListIterator_MoveNextCore_m889509885_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = VirtFuncInvoker0< int32_t >::Invoke(8 /* System.Int32 System.Xml.XPath.BaseIterator::get_CurrentPosition() */, __this);
		RuntimeObject* L_1 = __this->get__list_3();
		int32_t L_2 = InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 System.Collections.ICollection::get_Count() */, ICollection_t3904884886_il2cpp_TypeInfo_var, L_1);
		if ((((int32_t)L_0) < ((int32_t)L_2)))
		{
			goto IL_0018;
		}
	}
	{
		return (bool)0;
	}

IL_0018:
	{
		return (bool)1;
	}
}
// System.Xml.XPath.XPathNavigator System.Xml.XPath.ListIterator::get_Current()
extern "C"  XPathNavigator_t787956054 * ListIterator_get_Current_m1639282621 (ListIterator_t3066609410 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ListIterator_get_Current_m1639282621_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = __this->get__list_3();
		int32_t L_1 = InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 System.Collections.ICollection::get_Count() */, ICollection_t3904884886_il2cpp_TypeInfo_var, L_0);
		if (!L_1)
		{
			goto IL_001b;
		}
	}
	{
		int32_t L_2 = VirtFuncInvoker0< int32_t >::Invoke(8 /* System.Int32 System.Xml.XPath.BaseIterator::get_CurrentPosition() */, __this);
		if (L_2)
		{
			goto IL_001d;
		}
	}

IL_001b:
	{
		return (XPathNavigator_t787956054 *)NULL;
	}

IL_001d:
	{
		RuntimeObject* L_3 = __this->get__list_3();
		int32_t L_4 = VirtFuncInvoker0< int32_t >::Invoke(8 /* System.Int32 System.Xml.XPath.BaseIterator::get_CurrentPosition() */, __this);
		RuntimeObject * L_5 = InterfaceFuncInvoker1< RuntimeObject *, int32_t >::Invoke(2 /* System.Object System.Collections.IList::get_Item(System.Int32) */, IList_t2094931216_il2cpp_TypeInfo_var, L_3, ((int32_t)il2cpp_codegen_subtract((int32_t)L_4, (int32_t)1)));
		return ((XPathNavigator_t787956054 *)CastclassClass((RuntimeObject*)L_5, XPathNavigator_t787956054_il2cpp_TypeInfo_var));
	}
}
// System.Int32 System.Xml.XPath.ListIterator::get_Count()
extern "C"  int32_t ListIterator_get_Count_m1747028913 (ListIterator_t3066609410 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ListIterator_get_Count_m1747028913_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = __this->get__list_3();
		int32_t L_1 = InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 System.Collections.ICollection::get_Count() */, ICollection_t3904884886_il2cpp_TypeInfo_var, L_0);
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
// System.Void System.Xml.XPath.NamespaceIterator::.ctor(System.Xml.XPath.BaseIterator)
extern "C"  void NamespaceIterator__ctor_m3677015037 (NamespaceIterator_t3101604877 * __this, BaseIterator_t4168896842 * ___iter0, const RuntimeMethod* method)
{
	{
		BaseIterator_t4168896842 * L_0 = ___iter0;
		SimpleIterator__ctor_m3211911800(__this, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Xml.XPath.NamespaceIterator::.ctor(System.Xml.XPath.NamespaceIterator)
extern "C"  void NamespaceIterator__ctor_m753006477 (NamespaceIterator_t3101604877 * __this, NamespaceIterator_t3101604877 * ___other0, const RuntimeMethod* method)
{
	{
		NamespaceIterator_t3101604877 * L_0 = ___other0;
		SimpleIterator__ctor_m1156879794(__this, L_0, (bool)1, /*hidden argument*/NULL);
		return;
	}
}
// System.Xml.XPath.XPathNodeIterator System.Xml.XPath.NamespaceIterator::Clone()
extern "C"  XPathNodeIterator_t3667290188 * NamespaceIterator_Clone_m1357767084 (NamespaceIterator_t3101604877 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (NamespaceIterator_Clone_m1357767084_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		NamespaceIterator_t3101604877 * L_0 = (NamespaceIterator_t3101604877 *)il2cpp_codegen_object_new(NamespaceIterator_t3101604877_il2cpp_TypeInfo_var);
		NamespaceIterator__ctor_m753006477(L_0, __this, /*hidden argument*/NULL);
		return L_0;
	}
}
// System.Boolean System.Xml.XPath.NamespaceIterator::MoveNextCore()
extern "C"  bool NamespaceIterator_MoveNextCore_m3872653468 (NamespaceIterator_t3101604877 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = VirtFuncInvoker0< int32_t >::Invoke(8 /* System.Int32 System.Xml.XPath.BaseIterator::get_CurrentPosition() */, __this);
		if (L_0)
		{
			goto IL_0022;
		}
	}
	{
		XPathNavigator_t787956054 * L_1 = ((SimpleIterator_t809567201 *)__this)->get__nav_3();
		bool L_2 = XPathNavigator_MoveToFirstNamespace_m2355971184(L_1, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_001d;
		}
	}
	{
		return (bool)1;
	}

IL_001d:
	{
		goto IL_0034;
	}

IL_0022:
	{
		XPathNavigator_t787956054 * L_3 = ((SimpleIterator_t809567201 *)__this)->get__nav_3();
		bool L_4 = XPathNavigator_MoveToNextNamespace_m1668516935(L_3, /*hidden argument*/NULL);
		if (!L_4)
		{
			goto IL_0034;
		}
	}
	{
		return (bool)1;
	}

IL_0034:
	{
		return (bool)0;
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
// System.Void System.Xml.XPath.NodeNameTest::.ctor(System.Xml.XPath.Axes,System.Xml.XmlQualifiedName,System.Xml.Xsl.IStaticXsltContext)
extern "C"  void NodeNameTest__ctor_m2971835893 (NodeNameTest_t562814213 * __this, int32_t ___axis0, XmlQualifiedName_t2760654312 * ___name1, RuntimeObject* ___ctx2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (NodeNameTest__ctor_m2971835893_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = ___axis0;
		NodeTest__ctor_m2797019209(__this, L_0, /*hidden argument*/NULL);
		RuntimeObject* L_1 = ___ctx2;
		if (!L_1)
		{
			goto IL_0022;
		}
	}
	{
		RuntimeObject* L_2 = ___ctx2;
		XmlQualifiedName_t2760654312 * L_3 = ___name1;
		String_t* L_4 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Xml.XmlQualifiedName::ToString() */, L_3);
		XmlQualifiedName_t2760654312 * L_5 = InterfaceFuncInvoker1< XmlQualifiedName_t2760654312 *, String_t* >::Invoke(2 /* System.Xml.XmlQualifiedName System.Xml.Xsl.IStaticXsltContext::LookupQName(System.String) */, IStaticXsltContext_t1496336571_il2cpp_TypeInfo_var, L_2, L_4);
		___name1 = L_5;
		__this->set_resolvedName_2((bool)1);
	}

IL_0022:
	{
		XmlQualifiedName_t2760654312 * L_6 = ___name1;
		__this->set__name_1(L_6);
		return;
	}
}
// System.Void System.Xml.XPath.NodeNameTest::.ctor(System.Xml.XPath.NodeNameTest,System.Xml.XPath.Axes)
extern "C"  void NodeNameTest__ctor_m3009940847 (NodeNameTest_t562814213 * __this, NodeNameTest_t562814213 * ___source0, int32_t ___axis1, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___axis1;
		NodeTest__ctor_m2797019209(__this, L_0, /*hidden argument*/NULL);
		NodeNameTest_t562814213 * L_1 = ___source0;
		XmlQualifiedName_t2760654312 * L_2 = L_1->get__name_1();
		__this->set__name_1(L_2);
		NodeNameTest_t562814213 * L_3 = ___source0;
		bool L_4 = L_3->get_resolvedName_2();
		__this->set_resolvedName_2(L_4);
		return;
	}
}
// System.String System.Xml.XPath.NodeNameTest::ToString()
extern "C"  String_t* NodeNameTest_ToString_m1666853140 (NodeNameTest_t562814213 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (NodeNameTest_ToString_m1666853140_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		AxisSpecifier_t40435393 * L_0 = ((NodeTest_t747859056 *)__this)->get__axis_0();
		String_t* L_1 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Xml.XPath.AxisSpecifier::ToString() */, L_0);
		XmlQualifiedName_t2760654312 * L_2 = __this->get__name_1();
		String_t* L_3 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Xml.XmlQualifiedName::ToString() */, L_2);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_4 = String_Concat_m3755062657(NULL /*static, unused*/, L_1, _stringLiteral3451959190, L_3, /*hidden argument*/NULL);
		return L_4;
	}
}
// System.Boolean System.Xml.XPath.NodeNameTest::Match(System.Xml.IXmlNamespaceResolver,System.Xml.XPath.XPathNavigator)
extern "C"  bool NodeNameTest_Match_m1634415766 (NodeNameTest_t562814213 * __this, RuntimeObject* ___nsm0, XPathNavigator_t787956054 * ___nav1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (NodeNameTest_Match_m1634415766_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		XPathNavigator_t787956054 * L_0 = ___nav1;
		int32_t L_1 = VirtFuncInvoker0< int32_t >::Invoke(12 /* System.Xml.XPath.XPathNodeType System.Xml.XPath.XPathNavigator::get_NodeType() */, L_0);
		AxisSpecifier_t40435393 * L_2 = ((NodeTest_t747859056 *)__this)->get__axis_0();
		int32_t L_3 = AxisSpecifier_get_NodeType_m1659759391(L_2, /*hidden argument*/NULL);
		if ((((int32_t)L_1) == ((int32_t)L_3)))
		{
			goto IL_0018;
		}
	}
	{
		return (bool)0;
	}

IL_0018:
	{
		XmlQualifiedName_t2760654312 * L_4 = __this->get__name_1();
		String_t* L_5 = XmlQualifiedName_get_Name_m815040483(L_4, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_6 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_2();
		bool L_7 = String_op_Inequality_m215368492(NULL /*static, unused*/, L_5, L_6, /*hidden argument*/NULL);
		if (!L_7)
		{
			goto IL_004f;
		}
	}
	{
		XmlQualifiedName_t2760654312 * L_8 = __this->get__name_1();
		String_t* L_9 = XmlQualifiedName_get_Name_m815040483(L_8, /*hidden argument*/NULL);
		XPathNavigator_t787956054 * L_10 = ___nav1;
		String_t* L_11 = VirtFuncInvoker0< String_t* >::Invoke(9 /* System.String System.Xml.XPath.XPathNavigator::get_LocalName() */, L_10);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_12 = String_op_Inequality_m215368492(NULL /*static, unused*/, L_9, L_11, /*hidden argument*/NULL);
		if (!L_12)
		{
			goto IL_004f;
		}
	}
	{
		return (bool)0;
	}

IL_004f:
	{
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_13 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_2();
		V_0 = L_13;
		XmlQualifiedName_t2760654312 * L_14 = __this->get__name_1();
		String_t* L_15 = XmlQualifiedName_get_Namespace_m3957593392(L_14, /*hidden argument*/NULL);
		String_t* L_16 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_2();
		bool L_17 = String_op_Inequality_m215368492(NULL /*static, unused*/, L_15, L_16, /*hidden argument*/NULL);
		if (!L_17)
		{
			goto IL_00c4;
		}
	}
	{
		bool L_18 = __this->get_resolvedName_2();
		if (!L_18)
		{
			goto IL_008b;
		}
	}
	{
		XmlQualifiedName_t2760654312 * L_19 = __this->get__name_1();
		String_t* L_20 = XmlQualifiedName_get_Namespace_m3957593392(L_19, /*hidden argument*/NULL);
		V_0 = L_20;
		goto IL_00a3;
	}

IL_008b:
	{
		RuntimeObject* L_21 = ___nsm0;
		if (!L_21)
		{
			goto IL_00a3;
		}
	}
	{
		RuntimeObject* L_22 = ___nsm0;
		XmlQualifiedName_t2760654312 * L_23 = __this->get__name_1();
		String_t* L_24 = XmlQualifiedName_get_Namespace_m3957593392(L_23, /*hidden argument*/NULL);
		String_t* L_25 = InterfaceFuncInvoker1< String_t*, String_t* >::Invoke(0 /* System.String System.Xml.IXmlNamespaceResolver::LookupNamespace(System.String) */, IXmlNamespaceResolver_t535375154_il2cpp_TypeInfo_var, L_22, L_24);
		V_0 = L_25;
	}

IL_00a3:
	{
		String_t* L_26 = V_0;
		if (L_26)
		{
			goto IL_00c4;
		}
	}
	{
		XmlQualifiedName_t2760654312 * L_27 = __this->get__name_1();
		String_t* L_28 = XmlQualifiedName_get_Namespace_m3957593392(L_27, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_29 = String_Concat_m3937257545(NULL /*static, unused*/, _stringLiteral1765329652, L_28, /*hidden argument*/NULL);
		XPathException_t2107611652 * L_30 = (XPathException_t2107611652 *)il2cpp_codegen_object_new(XPathException_t2107611652_il2cpp_TypeInfo_var);
		XPathException__ctor_m3226187054(L_30, L_29, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_30, NULL, NodeNameTest_Match_m1634415766_RuntimeMethod_var);
	}

IL_00c4:
	{
		String_t* L_31 = V_0;
		XPathNavigator_t787956054 * L_32 = ___nav1;
		String_t* L_33 = VirtFuncInvoker0< String_t* >::Invoke(11 /* System.String System.Xml.XPath.XPathNavigator::get_NamespaceURI() */, L_32);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_34 = String_op_Equality_m920492651(NULL /*static, unused*/, L_31, L_33, /*hidden argument*/NULL);
		return L_34;
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
// System.Void System.Xml.XPath.NodeSet::.ctor()
extern "C"  void NodeSet__ctor_m958047062 (NodeSet_t3272593155 * __this, const RuntimeMethod* method)
{
	{
		Expression__ctor_m15586157(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Xml.XPath.XPathResultType System.Xml.XPath.NodeSet::get_ReturnType()
extern "C"  int32_t NodeSet_get_ReturnType_m2294310338 (NodeSet_t3272593155 * __this, const RuntimeMethod* method)
{
	{
		return (int32_t)(3);
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
// System.Void System.Xml.XPath.NodeTest::.ctor(System.Xml.XPath.Axes)
extern "C"  void NodeTest__ctor_m2797019209 (NodeTest_t747859056 * __this, int32_t ___axis0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (NodeTest__ctor_m2797019209_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		NodeSet__ctor_m958047062(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___axis0;
		AxisSpecifier_t40435393 * L_1 = (AxisSpecifier_t40435393 *)il2cpp_codegen_object_new(AxisSpecifier_t40435393_il2cpp_TypeInfo_var);
		AxisSpecifier__ctor_m4054707554(L_1, L_0, /*hidden argument*/NULL);
		__this->set__axis_0(L_1);
		return;
	}
}
// System.Xml.XPath.AxisSpecifier System.Xml.XPath.NodeTest::get_Axis()
extern "C"  AxisSpecifier_t40435393 * NodeTest_get_Axis_m3456611747 (NodeTest_t747859056 * __this, const RuntimeMethod* method)
{
	{
		AxisSpecifier_t40435393 * L_0 = __this->get__axis_0();
		return L_0;
	}
}
// System.Object System.Xml.XPath.NodeTest::Evaluate(System.Xml.XPath.BaseIterator)
extern "C"  RuntimeObject * NodeTest_Evaluate_m2194906102 (NodeTest_t747859056 * __this, BaseIterator_t4168896842 * ___iter0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (NodeTest_Evaluate_m2194906102_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	BaseIterator_t4168896842 * V_0 = NULL;
	{
		AxisSpecifier_t40435393 * L_0 = __this->get__axis_0();
		BaseIterator_t4168896842 * L_1 = ___iter0;
		BaseIterator_t4168896842 * L_2 = AxisSpecifier_Evaluate_m1747969038(L_0, L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		BaseIterator_t4168896842 * L_3 = V_0;
		AxisIterator_t3073253660 * L_4 = (AxisIterator_t3073253660 *)il2cpp_codegen_object_new(AxisIterator_t3073253660_il2cpp_TypeInfo_var);
		AxisIterator__ctor_m642315199(L_4, L_3, __this, /*hidden argument*/NULL);
		return L_4;
	}
}
// System.Boolean System.Xml.XPath.NodeTest::get_RequireSorting()
extern "C"  bool NodeTest_get_RequireSorting_m3966000250 (NodeTest_t747859056 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		AxisSpecifier_t40435393 * L_0 = __this->get__axis_0();
		int32_t L_1 = AxisSpecifier_get_Axis_m3310811897(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		int32_t L_2 = V_0;
		switch (L_2)
		{
			case 0:
			{
				goto IL_0047;
			}
			case 1:
			{
				goto IL_0047;
			}
			case 2:
			{
				goto IL_0047;
			}
			case 3:
			{
				goto IL_0049;
			}
			case 4:
			{
				goto IL_0049;
			}
			case 5:
			{
				goto IL_0049;
			}
			case 6:
			{
				goto IL_0049;
			}
			case 7:
			{
				goto IL_0049;
			}
			case 8:
			{
				goto IL_0047;
			}
			case 9:
			{
				goto IL_0049;
			}
			case 10:
			{
				goto IL_0047;
			}
			case 11:
			{
				goto IL_0047;
			}
		}
	}
	{
		goto IL_0049;
	}

IL_0047:
	{
		return (bool)1;
	}

IL_0049:
	{
		return (bool)0;
	}
}
// System.Boolean System.Xml.XPath.NodeTest::get_Peer()
extern "C"  bool NodeTest_get_Peer_m2052262451 (NodeTest_t747859056 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		AxisSpecifier_t40435393 * L_0 = __this->get__axis_0();
		int32_t L_1 = AxisSpecifier_get_Axis_m3310811897(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		int32_t L_2 = V_0;
		switch (L_2)
		{
			case 0:
			{
				goto IL_0043;
			}
			case 1:
			{
				goto IL_0043;
			}
			case 2:
			{
				goto IL_0045;
			}
			case 3:
			{
				goto IL_0045;
			}
			case 4:
			{
				goto IL_0043;
			}
			case 5:
			{
				goto IL_0043;
			}
			case 6:
			{
				goto IL_0043;
			}
			case 7:
			{
				goto IL_0045;
			}
			case 8:
			{
				goto IL_0045;
			}
			case 9:
			{
				goto IL_0045;
			}
			case 10:
			{
				goto IL_0043;
			}
		}
	}
	{
		goto IL_0045;
	}

IL_0043:
	{
		return (bool)0;
	}

IL_0045:
	{
		return (bool)1;
	}
}
// System.Boolean System.Xml.XPath.NodeTest::get_Subtree()
extern "C"  bool NodeTest_get_Subtree_m3842640402 (NodeTest_t747859056 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		AxisSpecifier_t40435393 * L_0 = __this->get__axis_0();
		int32_t L_1 = AxisSpecifier_get_Axis_m3310811897(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		int32_t L_2 = V_0;
		switch (L_2)
		{
			case 0:
			{
				goto IL_0047;
			}
			case 1:
			{
				goto IL_0047;
			}
			case 2:
			{
				goto IL_0049;
			}
			case 3:
			{
				goto IL_0049;
			}
			case 4:
			{
				goto IL_0049;
			}
			case 5:
			{
				goto IL_0049;
			}
			case 6:
			{
				goto IL_0047;
			}
			case 7:
			{
				goto IL_0047;
			}
			case 8:
			{
				goto IL_0049;
			}
			case 9:
			{
				goto IL_0047;
			}
			case 10:
			{
				goto IL_0047;
			}
			case 11:
			{
				goto IL_0047;
			}
		}
	}
	{
		goto IL_0049;
	}

IL_0047:
	{
		return (bool)0;
	}

IL_0049:
	{
		return (bool)1;
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
// System.Void System.Xml.XPath.NodeTypeTest::.ctor(System.Xml.XPath.Axes)
extern "C"  void NodeTypeTest__ctor_m4173832270 (NodeTypeTest_t4287533341 * __this, int32_t ___axis0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___axis0;
		NodeTest__ctor_m2797019209(__this, L_0, /*hidden argument*/NULL);
		AxisSpecifier_t40435393 * L_1 = ((NodeTest_t747859056 *)__this)->get__axis_0();
		int32_t L_2 = AxisSpecifier_get_NodeType_m1659759391(L_1, /*hidden argument*/NULL);
		__this->set_type_1(L_2);
		return;
	}
}
// System.Void System.Xml.XPath.NodeTypeTest::.ctor(System.Xml.XPath.Axes,System.Xml.XPath.XPathNodeType)
extern "C"  void NodeTypeTest__ctor_m3703857314 (NodeTypeTest_t4287533341 * __this, int32_t ___axis0, int32_t ___type1, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___axis0;
		NodeTest__ctor_m2797019209(__this, L_0, /*hidden argument*/NULL);
		int32_t L_1 = ___type1;
		__this->set_type_1(L_1);
		return;
	}
}
// System.Void System.Xml.XPath.NodeTypeTest::.ctor(System.Xml.XPath.Axes,System.Xml.XPath.XPathNodeType,System.String)
extern "C"  void NodeTypeTest__ctor_m2727277921 (NodeTypeTest_t4287533341 * __this, int32_t ___axis0, int32_t ___type1, String_t* ___param2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (NodeTypeTest__ctor_m2727277921_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = ___axis0;
		NodeTest__ctor_m2797019209(__this, L_0, /*hidden argument*/NULL);
		int32_t L_1 = ___type1;
		__this->set_type_1(L_1);
		String_t* L_2 = ___param2;
		__this->set__param_2(L_2);
		String_t* L_3 = ___param2;
		if (!L_3)
		{
			goto IL_003d;
		}
	}
	{
		int32_t L_4 = ___type1;
		if ((((int32_t)L_4) == ((int32_t)7)))
		{
			goto IL_003d;
		}
	}
	{
		int32_t L_5 = ___type1;
		String_t* L_6 = NodeTypeTest_ToString_m2891207610(NULL /*static, unused*/, L_5, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_7 = String_Concat_m3755062657(NULL /*static, unused*/, _stringLiteral1120425571, L_6, _stringLiteral486602797, /*hidden argument*/NULL);
		XPathException_t2107611652 * L_8 = (XPathException_t2107611652 *)il2cpp_codegen_object_new(XPathException_t2107611652_il2cpp_TypeInfo_var);
		XPathException__ctor_m3226187054(L_8, L_7, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_8, NULL, NodeTypeTest__ctor_m2727277921_RuntimeMethod_var);
	}

IL_003d:
	{
		return;
	}
}
// System.Void System.Xml.XPath.NodeTypeTest::.ctor(System.Xml.XPath.NodeTypeTest,System.Xml.XPath.Axes)
extern "C"  void NodeTypeTest__ctor_m922623223 (NodeTypeTest_t4287533341 * __this, NodeTypeTest_t4287533341 * ___other0, int32_t ___axis1, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___axis1;
		NodeTest__ctor_m2797019209(__this, L_0, /*hidden argument*/NULL);
		NodeTypeTest_t4287533341 * L_1 = ___other0;
		int32_t L_2 = L_1->get_type_1();
		__this->set_type_1(L_2);
		NodeTypeTest_t4287533341 * L_3 = ___other0;
		String_t* L_4 = L_3->get__param_2();
		__this->set__param_2(L_4);
		return;
	}
}
// System.String System.Xml.XPath.NodeTypeTest::ToString()
extern "C"  String_t* NodeTypeTest_ToString_m2738627077 (NodeTypeTest_t4287533341 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (NodeTypeTest_ToString_m2738627077_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		int32_t L_0 = __this->get_type_1();
		String_t* L_1 = NodeTypeTest_ToString_m2891207610(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		int32_t L_2 = __this->get_type_1();
		if ((!(((uint32_t)L_2) == ((uint32_t)7))))
		{
			goto IL_003f;
		}
	}
	{
		String_t* L_3 = __this->get__param_2();
		if (!L_3)
		{
			goto IL_003f;
		}
	}
	{
		String_t* L_4 = V_0;
		String_t* L_5 = __this->get__param_2();
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_6 = String_Concat_m2163913788(NULL /*static, unused*/, L_4, _stringLiteral3450058632, L_5, _stringLiteral3450976121, /*hidden argument*/NULL);
		V_0 = L_6;
		goto IL_004b;
	}

IL_003f:
	{
		String_t* L_7 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_8 = String_Concat_m3937257545(NULL /*static, unused*/, L_7, _stringLiteral3450976136, /*hidden argument*/NULL);
		V_0 = L_8;
	}

IL_004b:
	{
		AxisSpecifier_t40435393 * L_9 = ((NodeTest_t747859056 *)__this)->get__axis_0();
		String_t* L_10 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Xml.XPath.AxisSpecifier::ToString() */, L_9);
		String_t* L_11 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_12 = String_Concat_m3755062657(NULL /*static, unused*/, L_10, _stringLiteral3451959190, L_11, /*hidden argument*/NULL);
		return L_12;
	}
}
// System.String System.Xml.XPath.NodeTypeTest::ToString(System.Xml.XPath.XPathNodeType)
extern "C"  String_t* NodeTypeTest_ToString_m2891207610 (RuntimeObject * __this /* static, unused */, int32_t ___type0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (NodeTypeTest_ToString_m2891207610_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		int32_t L_0 = ___type0;
		V_0 = L_0;
		int32_t L_1 = V_0;
		switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_1, (int32_t)1)))
		{
			case 0:
			{
				goto IL_0045;
			}
			case 1:
			{
				goto IL_0045;
			}
			case 2:
			{
				goto IL_0045;
			}
			case 3:
			{
				goto IL_0039;
			}
			case 4:
			{
				goto IL_004b;
			}
			case 5:
			{
				goto IL_004b;
			}
			case 6:
			{
				goto IL_003f;
			}
			case 7:
			{
				goto IL_0033;
			}
			case 8:
			{
				goto IL_0045;
			}
		}
	}
	{
		goto IL_004b;
	}

IL_0033:
	{
		return _stringLiteral3796263715;
	}

IL_0039:
	{
		return _stringLiteral3987835854;
	}

IL_003f:
	{
		return _stringLiteral2364716187;
	}

IL_0045:
	{
		return _stringLiteral1985170616;
	}

IL_004b:
	{
		int32_t L_2 = ___type0;
		int32_t L_3 = L_2;
		RuntimeObject * L_4 = Box(XPathNodeType_t3031007223_il2cpp_TypeInfo_var, &L_3);
		String_t* L_5 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Enum::ToString() */, (Enum_t4135868527 *)L_4);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_6 = String_Concat_m3755062657(NULL /*static, unused*/, _stringLiteral2215548584, L_5, _stringLiteral3452614643, /*hidden argument*/NULL);
		return L_6;
	}
}
// System.Boolean System.Xml.XPath.NodeTypeTest::Match(System.Xml.IXmlNamespaceResolver,System.Xml.XPath.XPathNavigator)
extern "C"  bool NodeTypeTest_Match_m2984330370 (NodeTypeTest_t4287533341 * __this, RuntimeObject* ___nsm0, XPathNavigator_t787956054 * ___nav1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (NodeTypeTest_Match_m2984330370_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		XPathNavigator_t787956054 * L_0 = ___nav1;
		int32_t L_1 = VirtFuncInvoker0< int32_t >::Invoke(12 /* System.Xml.XPath.XPathNodeType System.Xml.XPath.XPathNavigator::get_NodeType() */, L_0);
		V_0 = L_1;
		int32_t L_2 = __this->get_type_1();
		V_1 = L_2;
		int32_t L_3 = V_1;
		switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_3, (int32_t)4)))
		{
			case 0:
			{
				goto IL_0063;
			}
			case 1:
			{
				goto IL_0082;
			}
			case 2:
			{
				goto IL_0082;
			}
			case 3:
			{
				goto IL_0035;
			}
			case 4:
			{
				goto IL_0082;
			}
			case 5:
			{
				goto IL_0033;
			}
		}
	}
	{
		goto IL_0082;
	}

IL_0033:
	{
		return (bool)1;
	}

IL_0035:
	{
		int32_t L_4 = V_0;
		if ((((int32_t)L_4) == ((int32_t)7)))
		{
			goto IL_003e;
		}
	}
	{
		return (bool)0;
	}

IL_003e:
	{
		String_t* L_5 = __this->get__param_2();
		if (!L_5)
		{
			goto IL_0061;
		}
	}
	{
		XPathNavigator_t787956054 * L_6 = ___nav1;
		String_t* L_7 = VirtFuncInvoker0< String_t* >::Invoke(10 /* System.String System.Xml.XPath.XPathNavigator::get_Name() */, L_6);
		String_t* L_8 = __this->get__param_2();
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_9 = String_op_Inequality_m215368492(NULL /*static, unused*/, L_7, L_8, /*hidden argument*/NULL);
		if (!L_9)
		{
			goto IL_0061;
		}
	}
	{
		return (bool)0;
	}

IL_0061:
	{
		return (bool)1;
	}

IL_0063:
	{
		int32_t L_10 = V_0;
		V_2 = L_10;
		int32_t L_11 = V_2;
		switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_11, (int32_t)4)))
		{
			case 0:
			{
				goto IL_007e;
			}
			case 1:
			{
				goto IL_007e;
			}
			case 2:
			{
				goto IL_007e;
			}
		}
	}
	{
		goto IL_0080;
	}

IL_007e:
	{
		return (bool)1;
	}

IL_0080:
	{
		return (bool)0;
	}

IL_0082:
	{
		int32_t L_12 = __this->get_type_1();
		int32_t L_13 = V_0;
		return (bool)((((int32_t)L_12) == ((int32_t)L_13))? 1 : 0);
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
// System.Void System.Xml.XPath.NullIterator::.ctor(System.Xml.XPath.BaseIterator)
extern "C"  void NullIterator__ctor_m1623589000 (NullIterator_t2630925529 * __this, BaseIterator_t4168896842 * ___iter0, const RuntimeMethod* method)
{
	{
		BaseIterator_t4168896842 * L_0 = ___iter0;
		SelfIterator__ctor_m64748653(__this, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Xml.XPath.NullIterator::.ctor(System.Xml.XPath.XPathNavigator,System.Xml.IXmlNamespaceResolver)
extern "C"  void NullIterator__ctor_m864984539 (NullIterator_t2630925529 * __this, XPathNavigator_t787956054 * ___nav0, RuntimeObject* ___nsm1, const RuntimeMethod* method)
{
	{
		XPathNavigator_t787956054 * L_0 = ___nav0;
		RuntimeObject* L_1 = ___nsm1;
		SelfIterator__ctor_m1955149028(__this, L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Xml.XPath.NullIterator::.ctor(System.Xml.XPath.NullIterator)
extern "C"  void NullIterator__ctor_m1257795900 (NullIterator_t2630925529 * __this, NullIterator_t2630925529 * ___other0, const RuntimeMethod* method)
{
	{
		NullIterator_t2630925529 * L_0 = ___other0;
		SelfIterator__ctor_m4024533866(__this, L_0, (bool)1, /*hidden argument*/NULL);
		return;
	}
}
// System.Xml.XPath.XPathNodeIterator System.Xml.XPath.NullIterator::Clone()
extern "C"  XPathNodeIterator_t3667290188 * NullIterator_Clone_m3684891503 (NullIterator_t2630925529 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (NullIterator_Clone_m3684891503_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		NullIterator_t2630925529 * L_0 = (NullIterator_t2630925529 *)il2cpp_codegen_object_new(NullIterator_t2630925529_il2cpp_TypeInfo_var);
		NullIterator__ctor_m1257795900(L_0, __this, /*hidden argument*/NULL);
		return L_0;
	}
}
// System.Boolean System.Xml.XPath.NullIterator::MoveNextCore()
extern "C"  bool NullIterator_MoveNextCore_m707747729 (NullIterator_t2630925529 * __this, const RuntimeMethod* method)
{
	{
		return (bool)0;
	}
}
// System.Int32 System.Xml.XPath.NullIterator::get_CurrentPosition()
extern "C"  int32_t NullIterator_get_CurrentPosition_m1861039582 (NullIterator_t2630925529 * __this, const RuntimeMethod* method)
{
	{
		return 1;
	}
}
// System.Xml.XPath.XPathNavigator System.Xml.XPath.NullIterator::get_Current()
extern "C"  XPathNavigator_t787956054 * NullIterator_get_Current_m3245634100 (NullIterator_t2630925529 * __this, const RuntimeMethod* method)
{
	{
		XPathNavigator_t787956054 * L_0 = ((SimpleIterator_t809567201 *)__this)->get__nav_3();
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
// System.Void System.Xml.XPath.ParensIterator::.ctor(System.Xml.XPath.BaseIterator)
extern "C"  void ParensIterator__ctor_m4211157708 (ParensIterator_t4020310733 * __this, BaseIterator_t4168896842 * ___iter0, const RuntimeMethod* method)
{
	{
		BaseIterator_t4168896842 * L_0 = ___iter0;
		RuntimeObject* L_1 = BaseIterator_get_NamespaceManager_m2542706114(L_0, /*hidden argument*/NULL);
		BaseIterator__ctor_m1145318967(__this, L_1, /*hidden argument*/NULL);
		BaseIterator_t4168896842 * L_2 = ___iter0;
		__this->set__iter_3(L_2);
		return;
	}
}
// System.Void System.Xml.XPath.ParensIterator::.ctor(System.Xml.XPath.ParensIterator)
extern "C"  void ParensIterator__ctor_m1023359346 (ParensIterator_t4020310733 * __this, ParensIterator_t4020310733 * ___other0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ParensIterator__ctor_m1023359346_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		ParensIterator_t4020310733 * L_0 = ___other0;
		BaseIterator__ctor_m2743981095(__this, L_0, /*hidden argument*/NULL);
		ParensIterator_t4020310733 * L_1 = ___other0;
		BaseIterator_t4168896842 * L_2 = L_1->get__iter_3();
		XPathNodeIterator_t3667290188 * L_3 = VirtFuncInvoker0< XPathNodeIterator_t3667290188 * >::Invoke(9 /* System.Xml.XPath.XPathNodeIterator System.Xml.XPath.XPathNodeIterator::Clone() */, L_2);
		__this->set__iter_3(((BaseIterator_t4168896842 *)CastclassClass((RuntimeObject*)L_3, BaseIterator_t4168896842_il2cpp_TypeInfo_var)));
		return;
	}
}
// System.Xml.XPath.XPathNodeIterator System.Xml.XPath.ParensIterator::Clone()
extern "C"  XPathNodeIterator_t3667290188 * ParensIterator_Clone_m2390936304 (ParensIterator_t4020310733 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ParensIterator_Clone_m2390936304_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		ParensIterator_t4020310733 * L_0 = (ParensIterator_t4020310733 *)il2cpp_codegen_object_new(ParensIterator_t4020310733_il2cpp_TypeInfo_var);
		ParensIterator__ctor_m1023359346(L_0, __this, /*hidden argument*/NULL);
		return L_0;
	}
}
// System.Boolean System.Xml.XPath.ParensIterator::MoveNextCore()
extern "C"  bool ParensIterator_MoveNextCore_m1623055521 (ParensIterator_t4020310733 * __this, const RuntimeMethod* method)
{
	{
		BaseIterator_t4168896842 * L_0 = __this->get__iter_3();
		bool L_1 = VirtFuncInvoker0< bool >::Invoke(11 /* System.Boolean System.Xml.XPath.BaseIterator::MoveNext() */, L_0);
		return L_1;
	}
}
// System.Xml.XPath.XPathNavigator System.Xml.XPath.ParensIterator::get_Current()
extern "C"  XPathNavigator_t787956054 * ParensIterator_get_Current_m863065040 (ParensIterator_t4020310733 * __this, const RuntimeMethod* method)
{
	{
		BaseIterator_t4168896842 * L_0 = __this->get__iter_3();
		XPathNavigator_t787956054 * L_1 = VirtFuncInvoker0< XPathNavigator_t787956054 * >::Invoke(7 /* System.Xml.XPath.XPathNavigator System.Xml.XPath.XPathNodeIterator::get_Current() */, L_0);
		return L_1;
	}
}
// System.Int32 System.Xml.XPath.ParensIterator::get_Count()
extern "C"  int32_t ParensIterator_get_Count_m833946751 (ParensIterator_t4020310733 * __this, const RuntimeMethod* method)
{
	{
		BaseIterator_t4168896842 * L_0 = __this->get__iter_3();
		int32_t L_1 = VirtFuncInvoker0< int32_t >::Invoke(6 /* System.Int32 System.Xml.XPath.XPathNodeIterator::get_Count() */, L_0);
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
// System.Void System.Xml.XPath.ParentIterator::.ctor(System.Xml.XPath.BaseIterator)
extern "C"  void ParentIterator__ctor_m591303579 (ParentIterator_t3536730964 * __this, BaseIterator_t4168896842 * ___iter0, const RuntimeMethod* method)
{
	{
		BaseIterator_t4168896842 * L_0 = ___iter0;
		SimpleIterator__ctor_m3211911800(__this, L_0, /*hidden argument*/NULL);
		XPathNavigator_t787956054 * L_1 = ((SimpleIterator_t809567201 *)__this)->get__nav_3();
		bool L_2 = VirtFuncInvoker0< bool >::Invoke(31 /* System.Boolean System.Xml.XPath.XPathNavigator::MoveToParent() */, L_1);
		__this->set_canMove_6(L_2);
		return;
	}
}
// System.Void System.Xml.XPath.ParentIterator::.ctor(System.Xml.XPath.ParentIterator,System.Boolean)
extern "C"  void ParentIterator__ctor_m3645109500 (ParentIterator_t3536730964 * __this, ParentIterator_t3536730964 * ___other0, bool ___dummy1, const RuntimeMethod* method)
{
	{
		ParentIterator_t3536730964 * L_0 = ___other0;
		SimpleIterator__ctor_m1156879794(__this, L_0, (bool)1, /*hidden argument*/NULL);
		ParentIterator_t3536730964 * L_1 = ___other0;
		bool L_2 = L_1->get_canMove_6();
		__this->set_canMove_6(L_2);
		return;
	}
}
// System.Xml.XPath.XPathNodeIterator System.Xml.XPath.ParentIterator::Clone()
extern "C"  XPathNodeIterator_t3667290188 * ParentIterator_Clone_m2327552165 (ParentIterator_t3536730964 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ParentIterator_Clone_m2327552165_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		ParentIterator_t3536730964 * L_0 = (ParentIterator_t3536730964 *)il2cpp_codegen_object_new(ParentIterator_t3536730964_il2cpp_TypeInfo_var);
		ParentIterator__ctor_m3645109500(L_0, __this, (bool)1, /*hidden argument*/NULL);
		return L_0;
	}
}
// System.Boolean System.Xml.XPath.ParentIterator::MoveNextCore()
extern "C"  bool ParentIterator_MoveNextCore_m2760883214 (ParentIterator_t3536730964 * __this, const RuntimeMethod* method)
{
	{
		bool L_0 = __this->get_canMove_6();
		if (L_0)
		{
			goto IL_000d;
		}
	}
	{
		return (bool)0;
	}

IL_000d:
	{
		__this->set_canMove_6((bool)0);
		return (bool)1;
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
// System.Void System.Xml.XPath.PrecedingIterator::.ctor(System.Xml.XPath.BaseIterator)
extern "C"  void PrecedingIterator__ctor_m763661242 (PrecedingIterator_t2452812266 * __this, BaseIterator_t4168896842 * ___iter0, const RuntimeMethod* method)
{
	{
		BaseIterator_t4168896842 * L_0 = ___iter0;
		SimpleIterator__ctor_m3211911800(__this, L_0, /*hidden argument*/NULL);
		BaseIterator_t4168896842 * L_1 = ___iter0;
		XPathNavigator_t787956054 * L_2 = VirtFuncInvoker0< XPathNavigator_t787956054 * >::Invoke(7 /* System.Xml.XPath.XPathNavigator System.Xml.XPath.XPathNodeIterator::get_Current() */, L_1);
		XPathNavigator_t787956054 * L_3 = VirtFuncInvoker0< XPathNavigator_t787956054 * >::Invoke(14 /* System.Xml.XPath.XPathNavigator System.Xml.XPath.XPathNavigator::Clone() */, L_2);
		__this->set_startPosition_8(L_3);
		return;
	}
}
// System.Void System.Xml.XPath.PrecedingIterator::.ctor(System.Xml.XPath.PrecedingIterator)
extern "C"  void PrecedingIterator__ctor_m519667065 (PrecedingIterator_t2452812266 * __this, PrecedingIterator_t2452812266 * ___other0, const RuntimeMethod* method)
{
	{
		PrecedingIterator_t2452812266 * L_0 = ___other0;
		SimpleIterator__ctor_m1156879794(__this, L_0, (bool)1, /*hidden argument*/NULL);
		PrecedingIterator_t2452812266 * L_1 = ___other0;
		XPathNavigator_t787956054 * L_2 = L_1->get_startPosition_8();
		__this->set_startPosition_8(L_2);
		PrecedingIterator_t2452812266 * L_3 = ___other0;
		bool L_4 = L_3->get_started_7();
		__this->set_started_7(L_4);
		PrecedingIterator_t2452812266 * L_5 = ___other0;
		bool L_6 = L_5->get_finished_6();
		__this->set_finished_6(L_6);
		return;
	}
}
// System.Xml.XPath.XPathNodeIterator System.Xml.XPath.PrecedingIterator::Clone()
extern "C"  XPathNodeIterator_t3667290188 * PrecedingIterator_Clone_m2554062412 (PrecedingIterator_t2452812266 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PrecedingIterator_Clone_m2554062412_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		PrecedingIterator_t2452812266 * L_0 = (PrecedingIterator_t2452812266 *)il2cpp_codegen_object_new(PrecedingIterator_t2452812266_il2cpp_TypeInfo_var);
		PrecedingIterator__ctor_m519667065(L_0, __this, /*hidden argument*/NULL);
		return L_0;
	}
}
// System.Boolean System.Xml.XPath.PrecedingIterator::MoveNextCore()
extern "C"  bool PrecedingIterator_MoveNextCore_m504369484 (PrecedingIterator_t2452812266 * __this, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		bool L_0 = __this->get_finished_6();
		if (!L_0)
		{
			goto IL_000d;
		}
	}
	{
		return (bool)0;
	}

IL_000d:
	{
		bool L_1 = __this->get_started_7();
		if (L_1)
		{
			goto IL_002a;
		}
	}
	{
		__this->set_started_7((bool)1);
		XPathNavigator_t787956054 * L_2 = ((SimpleIterator_t809567201 *)__this)->get__nav_3();
		VirtActionInvoker0::Invoke(23 /* System.Void System.Xml.XPath.XPathNavigator::MoveToRoot() */, L_2);
	}

IL_002a:
	{
		V_0 = (bool)1;
		goto IL_009b;
	}

IL_0031:
	{
		goto IL_0069;
	}

IL_0036:
	{
		goto IL_0054;
	}

IL_003b:
	{
		XPathNavigator_t787956054 * L_3 = ((SimpleIterator_t809567201 *)__this)->get__nav_3();
		bool L_4 = VirtFuncInvoker0< bool >::Invoke(31 /* System.Boolean System.Xml.XPath.XPathNavigator::MoveToParent() */, L_3);
		if (L_4)
		{
			goto IL_0054;
		}
	}
	{
		__this->set_finished_6((bool)1);
		return (bool)0;
	}

IL_0054:
	{
		XPathNavigator_t787956054 * L_5 = ((SimpleIterator_t809567201 *)__this)->get__nav_3();
		bool L_6 = VirtFuncInvoker0< bool >::Invoke(28 /* System.Boolean System.Xml.XPath.XPathNavigator::MoveToNext() */, L_5);
		if (!L_6)
		{
			goto IL_003b;
		}
	}
	{
		goto IL_0079;
	}

IL_0069:
	{
		XPathNavigator_t787956054 * L_7 = ((SimpleIterator_t809567201 *)__this)->get__nav_3();
		bool L_8 = VirtFuncInvoker0< bool >::Invoke(25 /* System.Boolean System.Xml.XPath.XPathNavigator::MoveToFirstChild() */, L_7);
		if (!L_8)
		{
			goto IL_0036;
		}
	}

IL_0079:
	{
		XPathNavigator_t787956054 * L_9 = ((SimpleIterator_t809567201 *)__this)->get__nav_3();
		XPathNavigator_t787956054 * L_10 = __this->get_startPosition_8();
		bool L_11 = VirtFuncInvoker1< bool, XPathNavigator_t787956054 * >::Invoke(17 /* System.Boolean System.Xml.XPath.XPathNavigator::IsDescendant(System.Xml.XPath.XPathNavigator) */, L_9, L_10);
		if (!L_11)
		{
			goto IL_0094;
		}
	}
	{
		goto IL_009b;
	}

IL_0094:
	{
		V_0 = (bool)0;
		goto IL_00a1;
	}

IL_009b:
	{
		bool L_12 = V_0;
		if (L_12)
		{
			goto IL_0031;
		}
	}

IL_00a1:
	{
		XPathNavigator_t787956054 * L_13 = ((SimpleIterator_t809567201 *)__this)->get__nav_3();
		XPathNavigator_t787956054 * L_14 = __this->get_startPosition_8();
		int32_t L_15 = VirtFuncInvoker1< int32_t, XPathNavigator_t787956054 * >::Invoke(15 /* System.Xml.XmlNodeOrder System.Xml.XPath.XPathNavigator::ComparePosition(System.Xml.XPath.XPathNavigator) */, L_13, L_14);
		if (!L_15)
		{
			goto IL_00c0;
		}
	}
	{
		__this->set_finished_6((bool)1);
		return (bool)0;
	}

IL_00c0:
	{
		return (bool)1;
	}
}
// System.Boolean System.Xml.XPath.PrecedingIterator::get_ReverseAxis()
extern "C"  bool PrecedingIterator_get_ReverseAxis_m1235840305 (PrecedingIterator_t2452812266 * __this, const RuntimeMethod* method)
{
	{
		return (bool)1;
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
// System.Void System.Xml.XPath.PrecedingSiblingIterator::.ctor(System.Xml.XPath.BaseIterator)
extern "C"  void PrecedingSiblingIterator__ctor_m2105973069 (PrecedingSiblingIterator_t3231156185 * __this, BaseIterator_t4168896842 * ___iter0, const RuntimeMethod* method)
{
	{
		BaseIterator_t4168896842 * L_0 = ___iter0;
		SimpleIterator__ctor_m3211911800(__this, L_0, /*hidden argument*/NULL);
		BaseIterator_t4168896842 * L_1 = ___iter0;
		XPathNavigator_t787956054 * L_2 = VirtFuncInvoker0< XPathNavigator_t787956054 * >::Invoke(7 /* System.Xml.XPath.XPathNavigator System.Xml.XPath.XPathNodeIterator::get_Current() */, L_1);
		XPathNavigator_t787956054 * L_3 = VirtFuncInvoker0< XPathNavigator_t787956054 * >::Invoke(14 /* System.Xml.XPath.XPathNavigator System.Xml.XPath.XPathNavigator::Clone() */, L_2);
		__this->set_startPosition_8(L_3);
		return;
	}
}
// System.Void System.Xml.XPath.PrecedingSiblingIterator::.ctor(System.Xml.XPath.PrecedingSiblingIterator)
extern "C"  void PrecedingSiblingIterator__ctor_m2225126868 (PrecedingSiblingIterator_t3231156185 * __this, PrecedingSiblingIterator_t3231156185 * ___other0, const RuntimeMethod* method)
{
	{
		PrecedingSiblingIterator_t3231156185 * L_0 = ___other0;
		SimpleIterator__ctor_m1156879794(__this, L_0, (bool)1, /*hidden argument*/NULL);
		PrecedingSiblingIterator_t3231156185 * L_1 = ___other0;
		XPathNavigator_t787956054 * L_2 = L_1->get_startPosition_8();
		__this->set_startPosition_8(L_2);
		PrecedingSiblingIterator_t3231156185 * L_3 = ___other0;
		bool L_4 = L_3->get_started_7();
		__this->set_started_7(L_4);
		PrecedingSiblingIterator_t3231156185 * L_5 = ___other0;
		bool L_6 = L_5->get_finished_6();
		__this->set_finished_6(L_6);
		return;
	}
}
// System.Xml.XPath.XPathNodeIterator System.Xml.XPath.PrecedingSiblingIterator::Clone()
extern "C"  XPathNodeIterator_t3667290188 * PrecedingSiblingIterator_Clone_m1574796750 (PrecedingSiblingIterator_t3231156185 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PrecedingSiblingIterator_Clone_m1574796750_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		PrecedingSiblingIterator_t3231156185 * L_0 = (PrecedingSiblingIterator_t3231156185 *)il2cpp_codegen_object_new(PrecedingSiblingIterator_t3231156185_il2cpp_TypeInfo_var);
		PrecedingSiblingIterator__ctor_m2225126868(L_0, __this, /*hidden argument*/NULL);
		return L_0;
	}
}
// System.Boolean System.Xml.XPath.PrecedingSiblingIterator::MoveNextCore()
extern "C"  bool PrecedingSiblingIterator_MoveNextCore_m3031107043 (PrecedingSiblingIterator_t3231156185 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		bool L_0 = __this->get_finished_6();
		if (!L_0)
		{
			goto IL_000d;
		}
	}
	{
		return (bool)0;
	}

IL_000d:
	{
		bool L_1 = __this->get_started_7();
		if (L_1)
		{
			goto IL_0070;
		}
	}
	{
		__this->set_started_7((bool)1);
		XPathNavigator_t787956054 * L_2 = ((SimpleIterator_t809567201 *)__this)->get__nav_3();
		int32_t L_3 = VirtFuncInvoker0< int32_t >::Invoke(12 /* System.Xml.XPath.XPathNodeType System.Xml.XPath.XPathNavigator::get_NodeType() */, L_2);
		V_0 = L_3;
		int32_t L_4 = V_0;
		if ((((int32_t)L_4) == ((int32_t)2)))
		{
			goto IL_003e;
		}
	}
	{
		int32_t L_5 = V_0;
		if ((((int32_t)L_5) == ((int32_t)3)))
		{
			goto IL_003e;
		}
	}
	{
		goto IL_0047;
	}

IL_003e:
	{
		__this->set_finished_6((bool)1);
		return (bool)0;
	}

IL_0047:
	{
		XPathNavigator_t787956054 * L_6 = ((SimpleIterator_t809567201 *)__this)->get__nav_3();
		VirtFuncInvoker0< bool >::Invoke(22 /* System.Boolean System.Xml.XPath.XPathNavigator::MoveToFirst() */, L_6);
		XPathNavigator_t787956054 * L_7 = ((SimpleIterator_t809567201 *)__this)->get__nav_3();
		XPathNavigator_t787956054 * L_8 = __this->get_startPosition_8();
		bool L_9 = VirtFuncInvoker1< bool, XPathNavigator_t787956054 * >::Invoke(18 /* System.Boolean System.Xml.XPath.XPathNavigator::IsSamePosition(System.Xml.XPath.XPathNavigator) */, L_7, L_8);
		if (L_9)
		{
			goto IL_006b;
		}
	}
	{
		return (bool)1;
	}

IL_006b:
	{
		goto IL_0089;
	}

IL_0070:
	{
		XPathNavigator_t787956054 * L_10 = ((SimpleIterator_t809567201 *)__this)->get__nav_3();
		bool L_11 = VirtFuncInvoker0< bool >::Invoke(28 /* System.Boolean System.Xml.XPath.XPathNavigator::MoveToNext() */, L_10);
		if (L_11)
		{
			goto IL_0089;
		}
	}
	{
		__this->set_finished_6((bool)1);
		return (bool)0;
	}

IL_0089:
	{
		XPathNavigator_t787956054 * L_12 = ((SimpleIterator_t809567201 *)__this)->get__nav_3();
		XPathNavigator_t787956054 * L_13 = __this->get_startPosition_8();
		int32_t L_14 = VirtFuncInvoker1< int32_t, XPathNavigator_t787956054 * >::Invoke(15 /* System.Xml.XmlNodeOrder System.Xml.XPath.XPathNavigator::ComparePosition(System.Xml.XPath.XPathNavigator) */, L_12, L_13);
		if (!L_14)
		{
			goto IL_00a8;
		}
	}
	{
		__this->set_finished_6((bool)1);
		return (bool)0;
	}

IL_00a8:
	{
		return (bool)1;
	}
}
// System.Boolean System.Xml.XPath.PrecedingSiblingIterator::get_ReverseAxis()
extern "C"  bool PrecedingSiblingIterator_get_ReverseAxis_m196097971 (PrecedingSiblingIterator_t3231156185 * __this, const RuntimeMethod* method)
{
	{
		return (bool)1;
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
// System.Void System.Xml.XPath.PredicateIterator::.ctor(System.Xml.XPath.BaseIterator,System.Xml.XPath.Expression)
extern "C"  void PredicateIterator__ctor_m2581047513 (PredicateIterator_t4231391432 * __this, BaseIterator_t4168896842 * ___iter0, Expression_t1452783009 * ___pred1, const RuntimeMethod* method)
{
	{
		BaseIterator_t4168896842 * L_0 = ___iter0;
		RuntimeObject* L_1 = BaseIterator_get_NamespaceManager_m2542706114(L_0, /*hidden argument*/NULL);
		BaseIterator__ctor_m1145318967(__this, L_1, /*hidden argument*/NULL);
		BaseIterator_t4168896842 * L_2 = ___iter0;
		__this->set__iter_3(L_2);
		Expression_t1452783009 * L_3 = ___pred1;
		__this->set__pred_4(L_3);
		Expression_t1452783009 * L_4 = ___pred1;
		BaseIterator_t4168896842 * L_5 = ___iter0;
		int32_t L_6 = VirtFuncInvoker1< int32_t, BaseIterator_t4168896842 * >::Invoke(5 /* System.Xml.XPath.XPathResultType System.Xml.XPath.Expression::GetReturnType(System.Xml.XPath.BaseIterator) */, L_4, L_5);
		__this->set_resType_5(L_6);
		return;
	}
}
// System.Void System.Xml.XPath.PredicateIterator::.ctor(System.Xml.XPath.PredicateIterator)
extern "C"  void PredicateIterator__ctor_m1118843382 (PredicateIterator_t4231391432 * __this, PredicateIterator_t4231391432 * ___other0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PredicateIterator__ctor_m1118843382_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		PredicateIterator_t4231391432 * L_0 = ___other0;
		BaseIterator__ctor_m2743981095(__this, L_0, /*hidden argument*/NULL);
		PredicateIterator_t4231391432 * L_1 = ___other0;
		BaseIterator_t4168896842 * L_2 = L_1->get__iter_3();
		XPathNodeIterator_t3667290188 * L_3 = VirtFuncInvoker0< XPathNodeIterator_t3667290188 * >::Invoke(9 /* System.Xml.XPath.XPathNodeIterator System.Xml.XPath.XPathNodeIterator::Clone() */, L_2);
		__this->set__iter_3(((BaseIterator_t4168896842 *)CastclassClass((RuntimeObject*)L_3, BaseIterator_t4168896842_il2cpp_TypeInfo_var)));
		PredicateIterator_t4231391432 * L_4 = ___other0;
		Expression_t1452783009 * L_5 = L_4->get__pred_4();
		__this->set__pred_4(L_5);
		PredicateIterator_t4231391432 * L_6 = ___other0;
		int32_t L_7 = L_6->get_resType_5();
		__this->set_resType_5(L_7);
		PredicateIterator_t4231391432 * L_8 = ___other0;
		bool L_9 = L_8->get_finished_6();
		__this->set_finished_6(L_9);
		return;
	}
}
// System.Xml.XPath.XPathNodeIterator System.Xml.XPath.PredicateIterator::Clone()
extern "C"  XPathNodeIterator_t3667290188 * PredicateIterator_Clone_m3671183366 (PredicateIterator_t4231391432 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PredicateIterator_Clone_m3671183366_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		PredicateIterator_t4231391432 * L_0 = (PredicateIterator_t4231391432 *)il2cpp_codegen_object_new(PredicateIterator_t4231391432_il2cpp_TypeInfo_var);
		PredicateIterator__ctor_m1118843382(L_0, __this, /*hidden argument*/NULL);
		return L_0;
	}
}
// System.Boolean System.Xml.XPath.PredicateIterator::MoveNextCore()
extern "C"  bool PredicateIterator_MoveNextCore_m1873396483 (PredicateIterator_t4231391432 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PredicateIterator_MoveNextCore_m1873396483_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject * V_0 = NULL;
	int32_t V_1 = 0;
	{
		bool L_0 = __this->get_finished_6();
		if (!L_0)
		{
			goto IL_000d;
		}
	}
	{
		return (bool)0;
	}

IL_000d:
	{
		goto IL_00cc;
	}

IL_0012:
	{
		int32_t L_1 = __this->get_resType_5();
		V_1 = L_1;
		int32_t L_2 = V_1;
		if (!L_2)
		{
			goto IL_002b;
		}
	}
	{
		int32_t L_3 = V_1;
		if ((((int32_t)L_3) == ((int32_t)5)))
		{
			goto IL_0057;
		}
	}
	{
		goto IL_00aa;
	}

IL_002b:
	{
		Expression_t1452783009 * L_4 = __this->get__pred_4();
		BaseIterator_t4168896842 * L_5 = __this->get__iter_3();
		double L_6 = VirtFuncInvoker1< double, BaseIterator_t4168896842 * >::Invoke(16 /* System.Double System.Xml.XPath.Expression::EvaluateNumber(System.Xml.XPath.BaseIterator) */, L_4, L_5);
		BaseIterator_t4168896842 * L_7 = __this->get__iter_3();
		int32_t L_8 = BaseIterator_get_ComparablePosition_m1985876471(L_7, /*hidden argument*/NULL);
		if ((((double)L_6) == ((double)(((double)((double)L_8))))))
		{
			goto IL_0052;
		}
	}
	{
		goto IL_00cc;
	}

IL_0052:
	{
		goto IL_00ca;
	}

IL_0057:
	{
		Expression_t1452783009 * L_9 = __this->get__pred_4();
		BaseIterator_t4168896842 * L_10 = __this->get__iter_3();
		RuntimeObject * L_11 = VirtFuncInvoker1< RuntimeObject *, BaseIterator_t4168896842 * >::Invoke(13 /* System.Object System.Xml.XPath.Expression::Evaluate(System.Xml.XPath.BaseIterator) */, L_9, L_10);
		V_0 = L_11;
		RuntimeObject * L_12 = V_0;
		if (!((RuntimeObject *)IsInstSealed((RuntimeObject*)L_12, Double_t594665363_il2cpp_TypeInfo_var)))
		{
			goto IL_0095;
		}
	}
	{
		RuntimeObject * L_13 = V_0;
		BaseIterator_t4168896842 * L_14 = __this->get__iter_3();
		int32_t L_15 = BaseIterator_get_ComparablePosition_m1985876471(L_14, /*hidden argument*/NULL);
		if ((((double)((*(double*)((double*)UnBox(L_13, Double_t594665363_il2cpp_TypeInfo_var))))) == ((double)(((double)((double)L_15))))))
		{
			goto IL_0090;
		}
	}
	{
		goto IL_00cc;
	}

IL_0090:
	{
		goto IL_00a5;
	}

IL_0095:
	{
		RuntimeObject * L_16 = V_0;
		bool L_17 = XPathFunctions_ToBoolean_m1843756110(NULL /*static, unused*/, L_16, /*hidden argument*/NULL);
		if (L_17)
		{
			goto IL_00a5;
		}
	}
	{
		goto IL_00cc;
	}

IL_00a5:
	{
		goto IL_00ca;
	}

IL_00aa:
	{
		Expression_t1452783009 * L_18 = __this->get__pred_4();
		BaseIterator_t4168896842 * L_19 = __this->get__iter_3();
		bool L_20 = VirtFuncInvoker1< bool, BaseIterator_t4168896842 * >::Invoke(18 /* System.Boolean System.Xml.XPath.Expression::EvaluateBoolean(System.Xml.XPath.BaseIterator) */, L_18, L_19);
		if (L_20)
		{
			goto IL_00c5;
		}
	}
	{
		goto IL_00cc;
	}

IL_00c5:
	{
		goto IL_00ca;
	}

IL_00ca:
	{
		return (bool)1;
	}

IL_00cc:
	{
		BaseIterator_t4168896842 * L_21 = __this->get__iter_3();
		bool L_22 = VirtFuncInvoker0< bool >::Invoke(11 /* System.Boolean System.Xml.XPath.BaseIterator::MoveNext() */, L_21);
		if (L_22)
		{
			goto IL_0012;
		}
	}
	{
		__this->set_finished_6((bool)1);
		return (bool)0;
	}
}
// System.Xml.XPath.XPathNavigator System.Xml.XPath.PredicateIterator::get_Current()
extern "C"  XPathNavigator_t787956054 * PredicateIterator_get_Current_m2750716078 (PredicateIterator_t4231391432 * __this, const RuntimeMethod* method)
{
	XPathNavigator_t787956054 * G_B3_0 = NULL;
	{
		int32_t L_0 = VirtFuncInvoker0< int32_t >::Invoke(8 /* System.Int32 System.Xml.XPath.BaseIterator::get_CurrentPosition() */, __this);
		if (L_0)
		{
			goto IL_0011;
		}
	}
	{
		G_B3_0 = ((XPathNavigator_t787956054 *)(NULL));
		goto IL_001c;
	}

IL_0011:
	{
		BaseIterator_t4168896842 * L_1 = __this->get__iter_3();
		XPathNavigator_t787956054 * L_2 = VirtFuncInvoker0< XPathNavigator_t787956054 * >::Invoke(7 /* System.Xml.XPath.XPathNavigator System.Xml.XPath.XPathNodeIterator::get_Current() */, L_1);
		G_B3_0 = L_2;
	}

IL_001c:
	{
		return G_B3_0;
	}
}
// System.Boolean System.Xml.XPath.PredicateIterator::get_ReverseAxis()
extern "C"  bool PredicateIterator_get_ReverseAxis_m4172246401 (PredicateIterator_t4231391432 * __this, const RuntimeMethod* method)
{
	{
		BaseIterator_t4168896842 * L_0 = __this->get__iter_3();
		bool L_1 = VirtFuncInvoker0< bool >::Invoke(12 /* System.Boolean System.Xml.XPath.BaseIterator::get_ReverseAxis() */, L_0);
		return L_1;
	}
}
// System.String System.Xml.XPath.PredicateIterator::ToString()
extern "C"  String_t* PredicateIterator_ToString_m1125423603 (PredicateIterator_t4231391432 * __this, const RuntimeMethod* method)
{
	{
		BaseIterator_t4168896842 * L_0 = __this->get__iter_3();
		Type_t * L_1 = Object_GetType_m88164663(L_0, /*hidden argument*/NULL);
		String_t* L_2 = VirtFuncInvoker0< String_t* >::Invoke(18 /* System.String System.Type::get_FullName() */, L_1);
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
// System.Void System.Xml.XPath.RelationalExpr::.ctor(System.Xml.XPath.Expression,System.Xml.XPath.Expression)
extern "C"  void RelationalExpr__ctor_m559163901 (RelationalExpr_t3307137467 * __this, Expression_t1452783009 * ___left0, Expression_t1452783009 * ___right1, const RuntimeMethod* method)
{
	{
		Expression_t1452783009 * L_0 = ___left0;
		Expression_t1452783009 * L_1 = ___right1;
		ExprBoolean__ctor_m1159749897(__this, L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean System.Xml.XPath.RelationalExpr::get_StaticValueAsBoolean()
extern "C"  bool RelationalExpr_get_StaticValueAsBoolean_m3268806998 (RelationalExpr_t3307137467 * __this, const RuntimeMethod* method)
{
	int32_t G_B3_0 = 0;
	{
		bool L_0 = VirtFuncInvoker0< bool >::Invoke(7 /* System.Boolean System.Xml.XPath.ExprBinary::get_HasStaticValue() */, __this);
		if (!L_0)
		{
			goto IL_002c;
		}
	}
	{
		Expression_t1452783009 * L_1 = ((ExprBinary_t2069694888 *)__this)->get__left_0();
		double L_2 = VirtFuncInvoker0< double >::Invoke(10 /* System.Double System.Xml.XPath.Expression::get_StaticValueAsNumber() */, L_1);
		Expression_t1452783009 * L_3 = ((ExprBinary_t2069694888 *)__this)->get__right_1();
		double L_4 = VirtFuncInvoker0< double >::Invoke(10 /* System.Double System.Xml.XPath.Expression::get_StaticValueAsNumber() */, L_3);
		bool L_5 = VirtFuncInvoker2< bool, double, double >::Invoke(21 /* System.Boolean System.Xml.XPath.RelationalExpr::Compare(System.Double,System.Double) */, __this, L_2, L_4);
		G_B3_0 = ((int32_t)(L_5));
		goto IL_002d;
	}

IL_002c:
	{
		G_B3_0 = 0;
	}

IL_002d:
	{
		return (bool)G_B3_0;
	}
}
// System.Boolean System.Xml.XPath.RelationalExpr::EvaluateBoolean(System.Xml.XPath.BaseIterator)
extern "C"  bool RelationalExpr_EvaluateBoolean_m1723564559 (RelationalExpr_t3307137467 * __this, BaseIterator_t4168896842 * ___iter0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (RelationalExpr_EvaluateBoolean_m1723564559_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	bool V_2 = false;
	Expression_t1452783009 * V_3 = NULL;
	Expression_t1452783009 * V_4 = NULL;
	int32_t V_5 = 0;
	bool V_6 = false;
	bool V_7 = false;
	BaseIterator_t4168896842 * V_8 = NULL;
	double V_9 = 0.0;
	BaseIterator_t4168896842 * V_10 = NULL;
	ArrayList_t2718874744 * V_11 = NULL;
	double V_12 = 0.0;
	int32_t V_13 = 0;
	{
		Expression_t1452783009 * L_0 = ((ExprBinary_t2069694888 *)__this)->get__left_0();
		BaseIterator_t4168896842 * L_1 = ___iter0;
		int32_t L_2 = VirtFuncInvoker1< int32_t, BaseIterator_t4168896842 * >::Invoke(5 /* System.Xml.XPath.XPathResultType System.Xml.XPath.Expression::GetReturnType(System.Xml.XPath.BaseIterator) */, L_0, L_1);
		V_0 = L_2;
		Expression_t1452783009 * L_3 = ((ExprBinary_t2069694888 *)__this)->get__right_1();
		BaseIterator_t4168896842 * L_4 = ___iter0;
		int32_t L_5 = VirtFuncInvoker1< int32_t, BaseIterator_t4168896842 * >::Invoke(5 /* System.Xml.XPath.XPathResultType System.Xml.XPath.Expression::GetReturnType(System.Xml.XPath.BaseIterator) */, L_3, L_4);
		V_1 = L_5;
		int32_t L_6 = V_0;
		if ((!(((uint32_t)L_6) == ((uint32_t)5))))
		{
			goto IL_0033;
		}
	}
	{
		Expression_t1452783009 * L_7 = ((ExprBinary_t2069694888 *)__this)->get__left_0();
		BaseIterator_t4168896842 * L_8 = ___iter0;
		RuntimeObject * L_9 = VirtFuncInvoker1< RuntimeObject *, BaseIterator_t4168896842 * >::Invoke(13 /* System.Object System.Xml.XPath.Expression::Evaluate(System.Xml.XPath.BaseIterator) */, L_7, L_8);
		int32_t L_10 = Expression_GetReturnType_m2343007501(NULL /*static, unused*/, L_9, /*hidden argument*/NULL);
		V_0 = L_10;
	}

IL_0033:
	{
		int32_t L_11 = V_1;
		if ((!(((uint32_t)L_11) == ((uint32_t)5))))
		{
			goto IL_004c;
		}
	}
	{
		Expression_t1452783009 * L_12 = ((ExprBinary_t2069694888 *)__this)->get__right_1();
		BaseIterator_t4168896842 * L_13 = ___iter0;
		RuntimeObject * L_14 = VirtFuncInvoker1< RuntimeObject *, BaseIterator_t4168896842 * >::Invoke(13 /* System.Object System.Xml.XPath.Expression::Evaluate(System.Xml.XPath.BaseIterator) */, L_12, L_13);
		int32_t L_15 = Expression_GetReturnType_m2343007501(NULL /*static, unused*/, L_14, /*hidden argument*/NULL);
		V_1 = L_15;
	}

IL_004c:
	{
		int32_t L_16 = V_0;
		if ((!(((uint32_t)L_16) == ((uint32_t)4))))
		{
			goto IL_0055;
		}
	}
	{
		V_0 = 1;
	}

IL_0055:
	{
		int32_t L_17 = V_1;
		if ((!(((uint32_t)L_17) == ((uint32_t)4))))
		{
			goto IL_005e;
		}
	}
	{
		V_1 = 1;
	}

IL_005e:
	{
		int32_t L_18 = V_0;
		if ((((int32_t)L_18) == ((int32_t)3)))
		{
			goto IL_006c;
		}
	}
	{
		int32_t L_19 = V_1;
		if ((!(((uint32_t)L_19) == ((uint32_t)3))))
		{
			goto IL_01cf;
		}
	}

IL_006c:
	{
		V_2 = (bool)0;
		int32_t L_20 = V_0;
		if ((((int32_t)L_20) == ((int32_t)3)))
		{
			goto IL_0093;
		}
	}
	{
		V_2 = (bool)1;
		Expression_t1452783009 * L_21 = ((ExprBinary_t2069694888 *)__this)->get__right_1();
		V_3 = L_21;
		Expression_t1452783009 * L_22 = ((ExprBinary_t2069694888 *)__this)->get__left_0();
		V_4 = L_22;
		int32_t L_23 = V_0;
		V_5 = L_23;
		int32_t L_24 = V_1;
		V_0 = L_24;
		int32_t L_25 = V_5;
		V_1 = L_25;
		goto IL_00a2;
	}

IL_0093:
	{
		Expression_t1452783009 * L_26 = ((ExprBinary_t2069694888 *)__this)->get__left_0();
		V_3 = L_26;
		Expression_t1452783009 * L_27 = ((ExprBinary_t2069694888 *)__this)->get__right_1();
		V_4 = L_27;
	}

IL_00a2:
	{
		int32_t L_28 = V_1;
		if ((!(((uint32_t)L_28) == ((uint32_t)2))))
		{
			goto IL_00d2;
		}
	}
	{
		Expression_t1452783009 * L_29 = V_3;
		BaseIterator_t4168896842 * L_30 = ___iter0;
		bool L_31 = VirtFuncInvoker1< bool, BaseIterator_t4168896842 * >::Invoke(18 /* System.Boolean System.Xml.XPath.Expression::EvaluateBoolean(System.Xml.XPath.BaseIterator) */, L_29, L_30);
		V_6 = L_31;
		Expression_t1452783009 * L_32 = V_4;
		BaseIterator_t4168896842 * L_33 = ___iter0;
		bool L_34 = VirtFuncInvoker1< bool, BaseIterator_t4168896842 * >::Invoke(18 /* System.Boolean System.Xml.XPath.Expression::EvaluateBoolean(System.Xml.XPath.BaseIterator) */, L_32, L_33);
		V_7 = L_34;
		bool L_35 = V_6;
		IL2CPP_RUNTIME_CLASS_INIT(Convert_t2465617642_il2cpp_TypeInfo_var);
		double L_36 = Convert_ToDouble_m954895424(NULL /*static, unused*/, L_35, /*hidden argument*/NULL);
		bool L_37 = V_7;
		double L_38 = Convert_ToDouble_m954895424(NULL /*static, unused*/, L_37, /*hidden argument*/NULL);
		bool L_39 = V_2;
		bool L_40 = RelationalExpr_Compare_m392784776(__this, L_36, L_38, L_39, /*hidden argument*/NULL);
		return L_40;
	}

IL_00d2:
	{
		Expression_t1452783009 * L_41 = V_3;
		BaseIterator_t4168896842 * L_42 = ___iter0;
		BaseIterator_t4168896842 * L_43 = VirtFuncInvoker1< BaseIterator_t4168896842 *, BaseIterator_t4168896842 * >::Invoke(14 /* System.Xml.XPath.BaseIterator System.Xml.XPath.Expression::EvaluateNodeSet(System.Xml.XPath.BaseIterator) */, L_41, L_42);
		V_8 = L_43;
		int32_t L_44 = V_1;
		if (!L_44)
		{
			goto IL_00e8;
		}
	}
	{
		int32_t L_45 = V_1;
		if ((!(((uint32_t)L_45) == ((uint32_t)1))))
		{
			goto IL_0129;
		}
	}

IL_00e8:
	{
		Expression_t1452783009 * L_46 = V_4;
		BaseIterator_t4168896842 * L_47 = ___iter0;
		double L_48 = VirtFuncInvoker1< double, BaseIterator_t4168896842 * >::Invoke(16 /* System.Double System.Xml.XPath.Expression::EvaluateNumber(System.Xml.XPath.BaseIterator) */, L_46, L_47);
		V_9 = L_48;
		goto IL_0118;
	}

IL_00f7:
	{
		BaseIterator_t4168896842 * L_49 = V_8;
		XPathNavigator_t787956054 * L_50 = VirtFuncInvoker0< XPathNavigator_t787956054 * >::Invoke(7 /* System.Xml.XPath.XPathNavigator System.Xml.XPath.XPathNodeIterator::get_Current() */, L_49);
		String_t* L_51 = VirtFuncInvoker0< String_t* >::Invoke(4 /* System.String System.Xml.XPath.XPathItem::get_Value() */, L_50);
		double L_52 = XPathFunctions_ToNumber_m2526127645(NULL /*static, unused*/, L_51, /*hidden argument*/NULL);
		double L_53 = V_9;
		bool L_54 = V_2;
		bool L_55 = RelationalExpr_Compare_m392784776(__this, L_52, L_53, L_54, /*hidden argument*/NULL);
		if (!L_55)
		{
			goto IL_0118;
		}
	}
	{
		return (bool)1;
	}

IL_0118:
	{
		BaseIterator_t4168896842 * L_56 = V_8;
		bool L_57 = VirtFuncInvoker0< bool >::Invoke(11 /* System.Boolean System.Xml.XPath.BaseIterator::MoveNext() */, L_56);
		if (L_57)
		{
			goto IL_00f7;
		}
	}
	{
		goto IL_01cd;
	}

IL_0129:
	{
		int32_t L_58 = V_1;
		if ((!(((uint32_t)L_58) == ((uint32_t)3))))
		{
			goto IL_01cd;
		}
	}
	{
		Expression_t1452783009 * L_59 = V_4;
		BaseIterator_t4168896842 * L_60 = ___iter0;
		BaseIterator_t4168896842 * L_61 = VirtFuncInvoker1< BaseIterator_t4168896842 *, BaseIterator_t4168896842 * >::Invoke(14 /* System.Xml.XPath.BaseIterator System.Xml.XPath.Expression::EvaluateNodeSet(System.Xml.XPath.BaseIterator) */, L_59, L_60);
		V_10 = L_61;
		ArrayList_t2718874744 * L_62 = (ArrayList_t2718874744 *)il2cpp_codegen_object_new(ArrayList_t2718874744_il2cpp_TypeInfo_var);
		ArrayList__ctor_m4254721275(L_62, /*hidden argument*/NULL);
		V_11 = L_62;
		goto IL_0164;
	}

IL_0146:
	{
		ArrayList_t2718874744 * L_63 = V_11;
		BaseIterator_t4168896842 * L_64 = V_8;
		XPathNavigator_t787956054 * L_65 = VirtFuncInvoker0< XPathNavigator_t787956054 * >::Invoke(7 /* System.Xml.XPath.XPathNavigator System.Xml.XPath.XPathNodeIterator::get_Current() */, L_64);
		String_t* L_66 = VirtFuncInvoker0< String_t* >::Invoke(4 /* System.String System.Xml.XPath.XPathItem::get_Value() */, L_65);
		double L_67 = XPathFunctions_ToNumber_m2526127645(NULL /*static, unused*/, L_66, /*hidden argument*/NULL);
		double L_68 = L_67;
		RuntimeObject * L_69 = Box(Double_t594665363_il2cpp_TypeInfo_var, &L_68);
		VirtFuncInvoker1< int32_t, RuntimeObject * >::Invoke(30 /* System.Int32 System.Collections.ArrayList::Add(System.Object) */, L_63, L_69);
	}

IL_0164:
	{
		BaseIterator_t4168896842 * L_70 = V_8;
		bool L_71 = VirtFuncInvoker0< bool >::Invoke(11 /* System.Boolean System.Xml.XPath.BaseIterator::MoveNext() */, L_70);
		if (L_71)
		{
			goto IL_0146;
		}
	}
	{
		goto IL_01c1;
	}

IL_0175:
	{
		BaseIterator_t4168896842 * L_72 = V_10;
		XPathNavigator_t787956054 * L_73 = VirtFuncInvoker0< XPathNavigator_t787956054 * >::Invoke(7 /* System.Xml.XPath.XPathNavigator System.Xml.XPath.XPathNodeIterator::get_Current() */, L_72);
		String_t* L_74 = VirtFuncInvoker0< String_t* >::Invoke(4 /* System.String System.Xml.XPath.XPathItem::get_Value() */, L_73);
		double L_75 = XPathFunctions_ToNumber_m2526127645(NULL /*static, unused*/, L_74, /*hidden argument*/NULL);
		V_12 = L_75;
		V_13 = 0;
		goto IL_01b3;
	}

IL_0190:
	{
		ArrayList_t2718874744 * L_76 = V_11;
		int32_t L_77 = V_13;
		RuntimeObject * L_78 = VirtFuncInvoker1< RuntimeObject *, int32_t >::Invoke(21 /* System.Object System.Collections.ArrayList::get_Item(System.Int32) */, L_76, L_77);
		double L_79 = V_12;
		bool L_80 = VirtFuncInvoker2< bool, double, double >::Invoke(21 /* System.Boolean System.Xml.XPath.RelationalExpr::Compare(System.Double,System.Double) */, __this, ((*(double*)((double*)UnBox(L_78, Double_t594665363_il2cpp_TypeInfo_var)))), L_79);
		if (!L_80)
		{
			goto IL_01ad;
		}
	}
	{
		return (bool)1;
	}

IL_01ad:
	{
		int32_t L_81 = V_13;
		V_13 = ((int32_t)il2cpp_codegen_add((int32_t)L_81, (int32_t)1));
	}

IL_01b3:
	{
		int32_t L_82 = V_13;
		ArrayList_t2718874744 * L_83 = V_11;
		int32_t L_84 = VirtFuncInvoker0< int32_t >::Invoke(23 /* System.Int32 System.Collections.ArrayList::get_Count() */, L_83);
		if ((((int32_t)L_82) < ((int32_t)L_84)))
		{
			goto IL_0190;
		}
	}

IL_01c1:
	{
		BaseIterator_t4168896842 * L_85 = V_10;
		bool L_86 = VirtFuncInvoker0< bool >::Invoke(11 /* System.Boolean System.Xml.XPath.BaseIterator::MoveNext() */, L_85);
		if (L_86)
		{
			goto IL_0175;
		}
	}

IL_01cd:
	{
		return (bool)0;
	}

IL_01cf:
	{
		Expression_t1452783009 * L_87 = ((ExprBinary_t2069694888 *)__this)->get__left_0();
		BaseIterator_t4168896842 * L_88 = ___iter0;
		double L_89 = VirtFuncInvoker1< double, BaseIterator_t4168896842 * >::Invoke(16 /* System.Double System.Xml.XPath.Expression::EvaluateNumber(System.Xml.XPath.BaseIterator) */, L_87, L_88);
		Expression_t1452783009 * L_90 = ((ExprBinary_t2069694888 *)__this)->get__right_1();
		BaseIterator_t4168896842 * L_91 = ___iter0;
		double L_92 = VirtFuncInvoker1< double, BaseIterator_t4168896842 * >::Invoke(16 /* System.Double System.Xml.XPath.Expression::EvaluateNumber(System.Xml.XPath.BaseIterator) */, L_90, L_91);
		bool L_93 = VirtFuncInvoker2< bool, double, double >::Invoke(21 /* System.Boolean System.Xml.XPath.RelationalExpr::Compare(System.Double,System.Double) */, __this, L_89, L_92);
		return L_93;
	}
}
// System.Boolean System.Xml.XPath.RelationalExpr::Compare(System.Double,System.Double,System.Boolean)
extern "C"  bool RelationalExpr_Compare_m392784776 (RelationalExpr_t3307137467 * __this, double ___arg10, double ___arg21, bool ___fReverse2, const RuntimeMethod* method)
{
	{
		bool L_0 = ___fReverse2;
		if (!L_0)
		{
			goto IL_000f;
		}
	}
	{
		double L_1 = ___arg21;
		double L_2 = ___arg10;
		bool L_3 = VirtFuncInvoker2< bool, double, double >::Invoke(21 /* System.Boolean System.Xml.XPath.RelationalExpr::Compare(System.Double,System.Double) */, __this, L_1, L_2);
		return L_3;
	}

IL_000f:
	{
		double L_4 = ___arg10;
		double L_5 = ___arg21;
		bool L_6 = VirtFuncInvoker2< bool, double, double >::Invoke(21 /* System.Boolean System.Xml.XPath.RelationalExpr::Compare(System.Double,System.Double) */, __this, L_4, L_5);
		return L_6;
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
// System.Void System.Xml.XPath.SelfIterator::.ctor(System.Xml.XPath.BaseIterator)
extern "C"  void SelfIterator__ctor_m64748653 (SelfIterator_t907214 * __this, BaseIterator_t4168896842 * ___iter0, const RuntimeMethod* method)
{
	{
		BaseIterator_t4168896842 * L_0 = ___iter0;
		SimpleIterator__ctor_m3211911800(__this, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Xml.XPath.SelfIterator::.ctor(System.Xml.XPath.XPathNavigator,System.Xml.IXmlNamespaceResolver)
extern "C"  void SelfIterator__ctor_m1955149028 (SelfIterator_t907214 * __this, XPathNavigator_t787956054 * ___nav0, RuntimeObject* ___nsm1, const RuntimeMethod* method)
{
	{
		XPathNavigator_t787956054 * L_0 = ___nav0;
		RuntimeObject* L_1 = ___nsm1;
		SimpleIterator__ctor_m2043775611(__this, L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Xml.XPath.SelfIterator::.ctor(System.Xml.XPath.SelfIterator,System.Boolean)
extern "C"  void SelfIterator__ctor_m4024533866 (SelfIterator_t907214 * __this, SelfIterator_t907214 * ___other0, bool ___clone1, const RuntimeMethod* method)
{
	{
		SelfIterator_t907214 * L_0 = ___other0;
		SimpleIterator__ctor_m1156879794(__this, L_0, (bool)1, /*hidden argument*/NULL);
		return;
	}
}
// System.Xml.XPath.XPathNodeIterator System.Xml.XPath.SelfIterator::Clone()
extern "C"  XPathNodeIterator_t3667290188 * SelfIterator_Clone_m363020126 (SelfIterator_t907214 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SelfIterator_Clone_m363020126_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		SelfIterator_t907214 * L_0 = (SelfIterator_t907214 *)il2cpp_codegen_object_new(SelfIterator_t907214_il2cpp_TypeInfo_var);
		SelfIterator__ctor_m4024533866(L_0, __this, (bool)1, /*hidden argument*/NULL);
		return L_0;
	}
}
// System.Boolean System.Xml.XPath.SelfIterator::MoveNextCore()
extern "C"  bool SelfIterator_MoveNextCore_m2530291460 (SelfIterator_t907214 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = VirtFuncInvoker0< int32_t >::Invoke(8 /* System.Int32 System.Xml.XPath.BaseIterator::get_CurrentPosition() */, __this);
		if (L_0)
		{
			goto IL_000d;
		}
	}
	{
		return (bool)1;
	}

IL_000d:
	{
		return (bool)0;
	}
}
// System.Xml.XPath.XPathNavigator System.Xml.XPath.SelfIterator::get_Current()
extern "C"  XPathNavigator_t787956054 * SelfIterator_get_Current_m2265736604 (SelfIterator_t907214 * __this, const RuntimeMethod* method)
{
	XPathNavigator_t787956054 * G_B3_0 = NULL;
	{
		int32_t L_0 = VirtFuncInvoker0< int32_t >::Invoke(8 /* System.Int32 System.Xml.XPath.BaseIterator::get_CurrentPosition() */, __this);
		if (L_0)
		{
			goto IL_0011;
		}
	}
	{
		G_B3_0 = ((XPathNavigator_t787956054 *)(NULL));
		goto IL_0017;
	}

IL_0011:
	{
		XPathNavigator_t787956054 * L_1 = ((SimpleIterator_t809567201 *)__this)->get__nav_3();
		G_B3_0 = L_1;
	}

IL_0017:
	{
		return G_B3_0;
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
// System.Void System.Xml.XPath.SimpleIterator::.ctor(System.Xml.XPath.BaseIterator)
extern "C"  void SimpleIterator__ctor_m3211911800 (SimpleIterator_t809567201 * __this, BaseIterator_t4168896842 * ___iter0, const RuntimeMethod* method)
{
	{
		BaseIterator_t4168896842 * L_0 = ___iter0;
		RuntimeObject* L_1 = BaseIterator_get_NamespaceManager_m2542706114(L_0, /*hidden argument*/NULL);
		BaseIterator__ctor_m1145318967(__this, L_1, /*hidden argument*/NULL);
		BaseIterator_t4168896842 * L_2 = ___iter0;
		int32_t L_3 = VirtFuncInvoker0< int32_t >::Invoke(8 /* System.Int32 System.Xml.XPath.BaseIterator::get_CurrentPosition() */, L_2);
		if (L_3)
		{
			goto IL_0025;
		}
	}
	{
		__this->set_skipfirst_5((bool)1);
		BaseIterator_t4168896842 * L_4 = ___iter0;
		VirtFuncInvoker0< bool >::Invoke(11 /* System.Boolean System.Xml.XPath.BaseIterator::MoveNext() */, L_4);
	}

IL_0025:
	{
		BaseIterator_t4168896842 * L_5 = ___iter0;
		int32_t L_6 = VirtFuncInvoker0< int32_t >::Invoke(8 /* System.Int32 System.Xml.XPath.BaseIterator::get_CurrentPosition() */, L_5);
		if ((((int32_t)L_6) <= ((int32_t)0)))
		{
			goto IL_0042;
		}
	}
	{
		BaseIterator_t4168896842 * L_7 = ___iter0;
		XPathNavigator_t787956054 * L_8 = VirtFuncInvoker0< XPathNavigator_t787956054 * >::Invoke(7 /* System.Xml.XPath.XPathNavigator System.Xml.XPath.XPathNodeIterator::get_Current() */, L_7);
		XPathNavigator_t787956054 * L_9 = VirtFuncInvoker0< XPathNavigator_t787956054 * >::Invoke(14 /* System.Xml.XPath.XPathNavigator System.Xml.XPath.XPathNavigator::Clone() */, L_8);
		__this->set__nav_3(L_9);
	}

IL_0042:
	{
		return;
	}
}
// System.Void System.Xml.XPath.SimpleIterator::.ctor(System.Xml.XPath.SimpleIterator,System.Boolean)
extern "C"  void SimpleIterator__ctor_m1156879794 (SimpleIterator_t809567201 * __this, SimpleIterator_t809567201 * ___other0, bool ___clone1, const RuntimeMethod* method)
{
	SimpleIterator_t809567201 * G_B3_0 = NULL;
	SimpleIterator_t809567201 * G_B2_0 = NULL;
	XPathNavigator_t787956054 * G_B4_0 = NULL;
	SimpleIterator_t809567201 * G_B4_1 = NULL;
	{
		SimpleIterator_t809567201 * L_0 = ___other0;
		BaseIterator__ctor_m2743981095(__this, L_0, /*hidden argument*/NULL);
		SimpleIterator_t809567201 * L_1 = ___other0;
		XPathNavigator_t787956054 * L_2 = L_1->get__nav_3();
		if (!L_2)
		{
			goto IL_0034;
		}
	}
	{
		bool L_3 = ___clone1;
		G_B2_0 = __this;
		if (!L_3)
		{
			G_B3_0 = __this;
			goto IL_0029;
		}
	}
	{
		SimpleIterator_t809567201 * L_4 = ___other0;
		XPathNavigator_t787956054 * L_5 = L_4->get__nav_3();
		XPathNavigator_t787956054 * L_6 = VirtFuncInvoker0< XPathNavigator_t787956054 * >::Invoke(14 /* System.Xml.XPath.XPathNavigator System.Xml.XPath.XPathNavigator::Clone() */, L_5);
		G_B4_0 = L_6;
		G_B4_1 = G_B2_0;
		goto IL_002f;
	}

IL_0029:
	{
		SimpleIterator_t809567201 * L_7 = ___other0;
		XPathNavigator_t787956054 * L_8 = L_7->get__nav_3();
		G_B4_0 = L_8;
		G_B4_1 = G_B3_0;
	}

IL_002f:
	{
		G_B4_1->set__nav_3(G_B4_0);
	}

IL_0034:
	{
		SimpleIterator_t809567201 * L_9 = ___other0;
		bool L_10 = L_9->get_skipfirst_5();
		__this->set_skipfirst_5(L_10);
		return;
	}
}
// System.Void System.Xml.XPath.SimpleIterator::.ctor(System.Xml.XPath.XPathNavigator,System.Xml.IXmlNamespaceResolver)
extern "C"  void SimpleIterator__ctor_m2043775611 (SimpleIterator_t809567201 * __this, XPathNavigator_t787956054 * ___nav0, RuntimeObject* ___nsm1, const RuntimeMethod* method)
{
	{
		RuntimeObject* L_0 = ___nsm1;
		BaseIterator__ctor_m1145318967(__this, L_0, /*hidden argument*/NULL);
		XPathNavigator_t787956054 * L_1 = ___nav0;
		XPathNavigator_t787956054 * L_2 = VirtFuncInvoker0< XPathNavigator_t787956054 * >::Invoke(14 /* System.Xml.XPath.XPathNavigator System.Xml.XPath.XPathNavigator::Clone() */, L_1);
		__this->set__nav_3(L_2);
		return;
	}
}
// System.Boolean System.Xml.XPath.SimpleIterator::MoveNext()
extern "C"  bool SimpleIterator_MoveNext_m3028431045 (SimpleIterator_t809567201 * __this, const RuntimeMethod* method)
{
	{
		bool L_0 = __this->get_skipfirst_5();
		if (!L_0)
		{
			goto IL_0028;
		}
	}
	{
		XPathNavigator_t787956054 * L_1 = __this->get__nav_3();
		if (L_1)
		{
			goto IL_0018;
		}
	}
	{
		return (bool)0;
	}

IL_0018:
	{
		__this->set_skipfirst_5((bool)0);
		BaseIterator_SetPosition_m2306090904(__this, 1, /*hidden argument*/NULL);
		return (bool)1;
	}

IL_0028:
	{
		bool L_2 = BaseIterator_MoveNext_m932339608(__this, /*hidden argument*/NULL);
		return L_2;
	}
}
// System.Xml.XPath.XPathNavigator System.Xml.XPath.SimpleIterator::get_Current()
extern "C"  XPathNavigator_t787956054 * SimpleIterator_get_Current_m2965596752 (SimpleIterator_t809567201 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = VirtFuncInvoker0< int32_t >::Invoke(8 /* System.Int32 System.Xml.XPath.BaseIterator::get_CurrentPosition() */, __this);
		if (L_0)
		{
			goto IL_000d;
		}
	}
	{
		return (XPathNavigator_t787956054 *)NULL;
	}

IL_000d:
	{
		XPathNavigator_t787956054 * L_1 = __this->get__nav_3();
		__this->set__current_4(L_1);
		XPathNavigator_t787956054 * L_2 = __this->get__current_4();
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
// System.Void System.Xml.XPath.SimpleSlashIterator::.ctor(System.Xml.XPath.BaseIterator,System.Xml.XPath.NodeSet)
extern "C"  void SimpleSlashIterator__ctor_m3118305435 (SimpleSlashIterator_t3611200333 * __this, BaseIterator_t4168896842 * ___left0, NodeSet_t3272593155 * ___expr1, const RuntimeMethod* method)
{
	{
		BaseIterator_t4168896842 * L_0 = ___left0;
		RuntimeObject* L_1 = BaseIterator_get_NamespaceManager_m2542706114(L_0, /*hidden argument*/NULL);
		BaseIterator__ctor_m1145318967(__this, L_1, /*hidden argument*/NULL);
		BaseIterator_t4168896842 * L_2 = ___left0;
		__this->set__left_4(L_2);
		NodeSet_t3272593155 * L_3 = ___expr1;
		__this->set__expr_3(L_3);
		return;
	}
}
// System.Void System.Xml.XPath.SimpleSlashIterator::.ctor(System.Xml.XPath.SimpleSlashIterator)
extern "C"  void SimpleSlashIterator__ctor_m1892241149 (SimpleSlashIterator_t3611200333 * __this, SimpleSlashIterator_t3611200333 * ___other0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SimpleSlashIterator__ctor_m1892241149_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		SimpleSlashIterator_t3611200333 * L_0 = ___other0;
		BaseIterator__ctor_m2743981095(__this, L_0, /*hidden argument*/NULL);
		SimpleSlashIterator_t3611200333 * L_1 = ___other0;
		NodeSet_t3272593155 * L_2 = L_1->get__expr_3();
		__this->set__expr_3(L_2);
		SimpleSlashIterator_t3611200333 * L_3 = ___other0;
		BaseIterator_t4168896842 * L_4 = L_3->get__left_4();
		XPathNodeIterator_t3667290188 * L_5 = VirtFuncInvoker0< XPathNodeIterator_t3667290188 * >::Invoke(9 /* System.Xml.XPath.XPathNodeIterator System.Xml.XPath.XPathNodeIterator::Clone() */, L_4);
		__this->set__left_4(((BaseIterator_t4168896842 *)CastclassClass((RuntimeObject*)L_5, BaseIterator_t4168896842_il2cpp_TypeInfo_var)));
		SimpleSlashIterator_t3611200333 * L_6 = ___other0;
		BaseIterator_t4168896842 * L_7 = L_6->get__right_5();
		if (!L_7)
		{
			goto IL_004a;
		}
	}
	{
		SimpleSlashIterator_t3611200333 * L_8 = ___other0;
		BaseIterator_t4168896842 * L_9 = L_8->get__right_5();
		XPathNodeIterator_t3667290188 * L_10 = VirtFuncInvoker0< XPathNodeIterator_t3667290188 * >::Invoke(9 /* System.Xml.XPath.XPathNodeIterator System.Xml.XPath.XPathNodeIterator::Clone() */, L_9);
		__this->set__right_5(((BaseIterator_t4168896842 *)CastclassClass((RuntimeObject*)L_10, BaseIterator_t4168896842_il2cpp_TypeInfo_var)));
	}

IL_004a:
	{
		return;
	}
}
// System.Xml.XPath.XPathNodeIterator System.Xml.XPath.SimpleSlashIterator::Clone()
extern "C"  XPathNodeIterator_t3667290188 * SimpleSlashIterator_Clone_m2503466294 (SimpleSlashIterator_t3611200333 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SimpleSlashIterator_Clone_m2503466294_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		SimpleSlashIterator_t3611200333 * L_0 = (SimpleSlashIterator_t3611200333 *)il2cpp_codegen_object_new(SimpleSlashIterator_t3611200333_il2cpp_TypeInfo_var);
		SimpleSlashIterator__ctor_m1892241149(L_0, __this, /*hidden argument*/NULL);
		return L_0;
	}
}
// System.Boolean System.Xml.XPath.SimpleSlashIterator::MoveNextCore()
extern "C"  bool SimpleSlashIterator_MoveNextCore_m1878603559 (SimpleSlashIterator_t3611200333 * __this, const RuntimeMethod* method)
{
	{
		goto IL_002e;
	}

IL_0005:
	{
		BaseIterator_t4168896842 * L_0 = __this->get__left_4();
		bool L_1 = VirtFuncInvoker0< bool >::Invoke(11 /* System.Boolean System.Xml.XPath.BaseIterator::MoveNext() */, L_0);
		if (L_1)
		{
			goto IL_0017;
		}
	}
	{
		return (bool)0;
	}

IL_0017:
	{
		NodeSet_t3272593155 * L_2 = __this->get__expr_3();
		BaseIterator_t4168896842 * L_3 = __this->get__left_4();
		BaseIterator_t4168896842 * L_4 = VirtFuncInvoker1< BaseIterator_t4168896842 *, BaseIterator_t4168896842 * >::Invoke(14 /* System.Xml.XPath.BaseIterator System.Xml.XPath.Expression::EvaluateNodeSet(System.Xml.XPath.BaseIterator) */, L_2, L_3);
		__this->set__right_5(L_4);
	}

IL_002e:
	{
		BaseIterator_t4168896842 * L_5 = __this->get__right_5();
		if (!L_5)
		{
			goto IL_0005;
		}
	}
	{
		BaseIterator_t4168896842 * L_6 = __this->get__right_5();
		bool L_7 = VirtFuncInvoker0< bool >::Invoke(11 /* System.Boolean System.Xml.XPath.BaseIterator::MoveNext() */, L_6);
		if (!L_7)
		{
			goto IL_0005;
		}
	}
	{
		XPathNavigator_t787956054 * L_8 = __this->get__current_6();
		if (L_8)
		{
			goto IL_006f;
		}
	}
	{
		BaseIterator_t4168896842 * L_9 = __this->get__right_5();
		XPathNavigator_t787956054 * L_10 = VirtFuncInvoker0< XPathNavigator_t787956054 * >::Invoke(7 /* System.Xml.XPath.XPathNavigator System.Xml.XPath.XPathNodeIterator::get_Current() */, L_9);
		XPathNavigator_t787956054 * L_11 = VirtFuncInvoker0< XPathNavigator_t787956054 * >::Invoke(14 /* System.Xml.XPath.XPathNavigator System.Xml.XPath.XPathNavigator::Clone() */, L_10);
		__this->set__current_6(L_11);
		goto IL_00a0;
	}

IL_006f:
	{
		XPathNavigator_t787956054 * L_12 = __this->get__current_6();
		BaseIterator_t4168896842 * L_13 = __this->get__right_5();
		XPathNavigator_t787956054 * L_14 = VirtFuncInvoker0< XPathNavigator_t787956054 * >::Invoke(7 /* System.Xml.XPath.XPathNavigator System.Xml.XPath.XPathNodeIterator::get_Current() */, L_13);
		bool L_15 = VirtFuncInvoker1< bool, XPathNavigator_t787956054 * >::Invoke(19 /* System.Boolean System.Xml.XPath.XPathNavigator::MoveTo(System.Xml.XPath.XPathNavigator) */, L_12, L_14);
		if (L_15)
		{
			goto IL_00a0;
		}
	}
	{
		BaseIterator_t4168896842 * L_16 = __this->get__right_5();
		XPathNavigator_t787956054 * L_17 = VirtFuncInvoker0< XPathNavigator_t787956054 * >::Invoke(7 /* System.Xml.XPath.XPathNavigator System.Xml.XPath.XPathNodeIterator::get_Current() */, L_16);
		XPathNavigator_t787956054 * L_18 = VirtFuncInvoker0< XPathNavigator_t787956054 * >::Invoke(14 /* System.Xml.XPath.XPathNavigator System.Xml.XPath.XPathNavigator::Clone() */, L_17);
		__this->set__current_6(L_18);
	}

IL_00a0:
	{
		return (bool)1;
	}
}
// System.Xml.XPath.XPathNavigator System.Xml.XPath.SimpleSlashIterator::get_Current()
extern "C"  XPathNavigator_t787956054 * SimpleSlashIterator_get_Current_m3699244215 (SimpleSlashIterator_t3611200333 * __this, const RuntimeMethod* method)
{
	{
		XPathNavigator_t787956054 * L_0 = __this->get__current_6();
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
// System.Void System.Xml.XPath.SlashIterator::.ctor(System.Xml.XPath.BaseIterator,System.Xml.XPath.NodeSet)
extern "C"  void SlashIterator__ctor_m1098282742 (SlashIterator_t2421034408 * __this, BaseIterator_t4168896842 * ___iter0, NodeSet_t3272593155 * ___expr1, const RuntimeMethod* method)
{
	{
		BaseIterator_t4168896842 * L_0 = ___iter0;
		RuntimeObject* L_1 = BaseIterator_get_NamespaceManager_m2542706114(L_0, /*hidden argument*/NULL);
		BaseIterator__ctor_m1145318967(__this, L_1, /*hidden argument*/NULL);
		BaseIterator_t4168896842 * L_2 = ___iter0;
		__this->set__iterLeft_3(L_2);
		NodeSet_t3272593155 * L_3 = ___expr1;
		__this->set__expr_5(L_3);
		return;
	}
}
// System.Void System.Xml.XPath.SlashIterator::.ctor(System.Xml.XPath.SlashIterator)
extern "C"  void SlashIterator__ctor_m3733877240 (SlashIterator_t2421034408 * __this, SlashIterator_t2421034408 * ___other0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SlashIterator__ctor_m3733877240_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		SlashIterator_t2421034408 * L_0 = ___other0;
		BaseIterator__ctor_m2743981095(__this, L_0, /*hidden argument*/NULL);
		SlashIterator_t2421034408 * L_1 = ___other0;
		BaseIterator_t4168896842 * L_2 = L_1->get__iterLeft_3();
		XPathNodeIterator_t3667290188 * L_3 = VirtFuncInvoker0< XPathNodeIterator_t3667290188 * >::Invoke(9 /* System.Xml.XPath.XPathNodeIterator System.Xml.XPath.XPathNodeIterator::Clone() */, L_2);
		__this->set__iterLeft_3(((BaseIterator_t4168896842 *)CastclassClass((RuntimeObject*)L_3, BaseIterator_t4168896842_il2cpp_TypeInfo_var)));
		SlashIterator_t2421034408 * L_4 = ___other0;
		BaseIterator_t4168896842 * L_5 = L_4->get__iterRight_4();
		if (!L_5)
		{
			goto IL_003e;
		}
	}
	{
		SlashIterator_t2421034408 * L_6 = ___other0;
		BaseIterator_t4168896842 * L_7 = L_6->get__iterRight_4();
		XPathNodeIterator_t3667290188 * L_8 = VirtFuncInvoker0< XPathNodeIterator_t3667290188 * >::Invoke(9 /* System.Xml.XPath.XPathNodeIterator System.Xml.XPath.XPathNodeIterator::Clone() */, L_7);
		__this->set__iterRight_4(((BaseIterator_t4168896842 *)CastclassClass((RuntimeObject*)L_8, BaseIterator_t4168896842_il2cpp_TypeInfo_var)));
	}

IL_003e:
	{
		SlashIterator_t2421034408 * L_9 = ___other0;
		NodeSet_t3272593155 * L_10 = L_9->get__expr_5();
		__this->set__expr_5(L_10);
		SlashIterator_t2421034408 * L_11 = ___other0;
		SortedList_t2427694641 * L_12 = L_11->get__iterList_6();
		if (!L_12)
		{
			goto IL_006b;
		}
	}
	{
		SlashIterator_t2421034408 * L_13 = ___other0;
		SortedList_t2427694641 * L_14 = L_13->get__iterList_6();
		RuntimeObject * L_15 = VirtFuncInvoker0< RuntimeObject * >::Invoke(29 /* System.Object System.Collections.SortedList::Clone() */, L_14);
		__this->set__iterList_6(((SortedList_t2427694641 *)CastclassClass((RuntimeObject*)L_15, SortedList_t2427694641_il2cpp_TypeInfo_var)));
	}

IL_006b:
	{
		SlashIterator_t2421034408 * L_16 = ___other0;
		bool L_17 = L_16->get__finished_7();
		__this->set__finished_7(L_17);
		SlashIterator_t2421034408 * L_18 = ___other0;
		BaseIterator_t4168896842 * L_19 = L_18->get__nextIterRight_8();
		if (!L_19)
		{
			goto IL_0098;
		}
	}
	{
		SlashIterator_t2421034408 * L_20 = ___other0;
		BaseIterator_t4168896842 * L_21 = L_20->get__nextIterRight_8();
		XPathNodeIterator_t3667290188 * L_22 = VirtFuncInvoker0< XPathNodeIterator_t3667290188 * >::Invoke(9 /* System.Xml.XPath.XPathNodeIterator System.Xml.XPath.XPathNodeIterator::Clone() */, L_21);
		__this->set__nextIterRight_8(((BaseIterator_t4168896842 *)CastclassClass((RuntimeObject*)L_22, BaseIterator_t4168896842_il2cpp_TypeInfo_var)));
	}

IL_0098:
	{
		return;
	}
}
// System.Xml.XPath.XPathNodeIterator System.Xml.XPath.SlashIterator::Clone()
extern "C"  XPathNodeIterator_t3667290188 * SlashIterator_Clone_m3200560096 (SlashIterator_t2421034408 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SlashIterator_Clone_m3200560096_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		SlashIterator_t2421034408 * L_0 = (SlashIterator_t2421034408 *)il2cpp_codegen_object_new(SlashIterator_t2421034408_il2cpp_TypeInfo_var);
		SlashIterator__ctor_m3733877240(L_0, __this, /*hidden argument*/NULL);
		return L_0;
	}
}
// System.Boolean System.Xml.XPath.SlashIterator::MoveNextCore()
extern "C"  bool SlashIterator_MoveNextCore_m1334516283 (SlashIterator_t2421034408 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SlashIterator_MoveNextCore_m1334516283_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	bool V_1 = false;
	bool V_2 = false;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	{
		bool L_0 = __this->get__finished_7();
		if (!L_0)
		{
			goto IL_000d;
		}
	}
	{
		return (bool)0;
	}

IL_000d:
	{
		BaseIterator_t4168896842 * L_1 = __this->get__iterRight_4();
		if (L_1)
		{
			goto IL_0051;
		}
	}
	{
		BaseIterator_t4168896842 * L_2 = __this->get__iterLeft_3();
		bool L_3 = VirtFuncInvoker0< bool >::Invoke(11 /* System.Boolean System.Xml.XPath.BaseIterator::MoveNext() */, L_2);
		if (L_3)
		{
			goto IL_002a;
		}
	}
	{
		return (bool)0;
	}

IL_002a:
	{
		NodeSet_t3272593155 * L_4 = __this->get__expr_5();
		BaseIterator_t4168896842 * L_5 = __this->get__iterLeft_3();
		BaseIterator_t4168896842 * L_6 = VirtFuncInvoker1< BaseIterator_t4168896842 *, BaseIterator_t4168896842 * >::Invoke(14 /* System.Xml.XPath.BaseIterator System.Xml.XPath.Expression::EvaluateNodeSet(System.Xml.XPath.BaseIterator) */, L_4, L_5);
		__this->set__iterRight_4(L_6);
		IL2CPP_RUNTIME_CLASS_INIT(XPathIteratorComparer_t1799213572_il2cpp_TypeInfo_var);
		XPathIteratorComparer_t1799213572 * L_7 = ((XPathIteratorComparer_t1799213572_StaticFields*)il2cpp_codegen_static_fields_for(XPathIteratorComparer_t1799213572_il2cpp_TypeInfo_var))->get_Instance_0();
		SortedList_t2427694641 * L_8 = (SortedList_t2427694641 *)il2cpp_codegen_object_new(SortedList_t2427694641_il2cpp_TypeInfo_var);
		SortedList__ctor_m3247584155(L_8, L_7, /*hidden argument*/NULL);
		__this->set__iterList_6(L_8);
	}

IL_0051:
	{
		goto IL_00f0;
	}

IL_0056:
	{
		SortedList_t2427694641 * L_9 = __this->get__iterList_6();
		int32_t L_10 = VirtFuncInvoker0< int32_t >::Invoke(15 /* System.Int32 System.Collections.SortedList::get_Count() */, L_9);
		if ((((int32_t)L_10) <= ((int32_t)0)))
		{
			goto IL_009d;
		}
	}
	{
		SortedList_t2427694641 * L_11 = __this->get__iterList_6();
		int32_t L_12 = VirtFuncInvoker0< int32_t >::Invoke(15 /* System.Int32 System.Collections.SortedList::get_Count() */, L_11);
		V_0 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_12, (int32_t)1));
		SortedList_t2427694641 * L_13 = __this->get__iterList_6();
		int32_t L_14 = V_0;
		RuntimeObject * L_15 = VirtFuncInvoker1< RuntimeObject *, int32_t >::Invoke(33 /* System.Object System.Collections.SortedList::GetByIndex(System.Int32) */, L_13, L_14);
		__this->set__iterRight_4(((BaseIterator_t4168896842 *)CastclassClass((RuntimeObject*)L_15, BaseIterator_t4168896842_il2cpp_TypeInfo_var)));
		SortedList_t2427694641 * L_16 = __this->get__iterList_6();
		int32_t L_17 = V_0;
		VirtActionInvoker1< int32_t >::Invoke(30 /* System.Void System.Collections.SortedList::RemoveAt(System.Int32) */, L_16, L_17);
		goto IL_0100;
	}

IL_009d:
	{
		BaseIterator_t4168896842 * L_18 = __this->get__nextIterRight_8();
		if (!L_18)
		{
			goto IL_00c0;
		}
	}
	{
		BaseIterator_t4168896842 * L_19 = __this->get__nextIterRight_8();
		__this->set__iterRight_4(L_19);
		__this->set__nextIterRight_8((BaseIterator_t4168896842 *)NULL);
		goto IL_0100;
	}

IL_00c0:
	{
		BaseIterator_t4168896842 * L_20 = __this->get__iterLeft_3();
		bool L_21 = VirtFuncInvoker0< bool >::Invoke(11 /* System.Boolean System.Xml.XPath.BaseIterator::MoveNext() */, L_20);
		if (L_21)
		{
			goto IL_00d9;
		}
	}
	{
		__this->set__finished_7((bool)1);
		return (bool)0;
	}

IL_00d9:
	{
		NodeSet_t3272593155 * L_22 = __this->get__expr_5();
		BaseIterator_t4168896842 * L_23 = __this->get__iterLeft_3();
		BaseIterator_t4168896842 * L_24 = VirtFuncInvoker1< BaseIterator_t4168896842 *, BaseIterator_t4168896842 * >::Invoke(14 /* System.Xml.XPath.BaseIterator System.Xml.XPath.Expression::EvaluateNodeSet(System.Xml.XPath.BaseIterator) */, L_22, L_23);
		__this->set__iterRight_4(L_24);
	}

IL_00f0:
	{
		BaseIterator_t4168896842 * L_25 = __this->get__iterRight_4();
		bool L_26 = VirtFuncInvoker0< bool >::Invoke(11 /* System.Boolean System.Xml.XPath.BaseIterator::MoveNext() */, L_25);
		if (!L_26)
		{
			goto IL_0056;
		}
	}

IL_0100:
	{
		V_1 = (bool)1;
		goto IL_025e;
	}

IL_0107:
	{
		V_1 = (bool)0;
		BaseIterator_t4168896842 * L_27 = __this->get__nextIterRight_8();
		if (L_27)
		{
			goto IL_0176;
		}
	}
	{
		V_2 = (bool)0;
		goto IL_014e;
	}

IL_011b:
	{
		BaseIterator_t4168896842 * L_28 = __this->get__iterLeft_3();
		bool L_29 = VirtFuncInvoker0< bool >::Invoke(11 /* System.Boolean System.Xml.XPath.BaseIterator::MoveNext() */, L_28);
		if (!L_29)
		{
			goto IL_0147;
		}
	}
	{
		NodeSet_t3272593155 * L_30 = __this->get__expr_5();
		BaseIterator_t4168896842 * L_31 = __this->get__iterLeft_3();
		BaseIterator_t4168896842 * L_32 = VirtFuncInvoker1< BaseIterator_t4168896842 *, BaseIterator_t4168896842 * >::Invoke(14 /* System.Xml.XPath.BaseIterator System.Xml.XPath.Expression::EvaluateNodeSet(System.Xml.XPath.BaseIterator) */, L_30, L_31);
		__this->set__nextIterRight_8(L_32);
		goto IL_014e;
	}

IL_0147:
	{
		V_2 = (bool)1;
		goto IL_0169;
	}

IL_014e:
	{
		BaseIterator_t4168896842 * L_33 = __this->get__nextIterRight_8();
		if (!L_33)
		{
			goto IL_011b;
		}
	}
	{
		BaseIterator_t4168896842 * L_34 = __this->get__nextIterRight_8();
		bool L_35 = VirtFuncInvoker0< bool >::Invoke(11 /* System.Boolean System.Xml.XPath.BaseIterator::MoveNext() */, L_34);
		if (!L_35)
		{
			goto IL_011b;
		}
	}

IL_0169:
	{
		bool L_36 = V_2;
		if (!L_36)
		{
			goto IL_0176;
		}
	}
	{
		__this->set__nextIterRight_8((BaseIterator_t4168896842 *)NULL);
	}

IL_0176:
	{
		BaseIterator_t4168896842 * L_37 = __this->get__nextIterRight_8();
		if (!L_37)
		{
			goto IL_025e;
		}
	}
	{
		BaseIterator_t4168896842 * L_38 = __this->get__iterRight_4();
		XPathNavigator_t787956054 * L_39 = VirtFuncInvoker0< XPathNavigator_t787956054 * >::Invoke(7 /* System.Xml.XPath.XPathNavigator System.Xml.XPath.XPathNodeIterator::get_Current() */, L_38);
		BaseIterator_t4168896842 * L_40 = __this->get__nextIterRight_8();
		XPathNavigator_t787956054 * L_41 = VirtFuncInvoker0< XPathNavigator_t787956054 * >::Invoke(7 /* System.Xml.XPath.XPathNavigator System.Xml.XPath.XPathNodeIterator::get_Current() */, L_40);
		int32_t L_42 = VirtFuncInvoker1< int32_t, XPathNavigator_t787956054 * >::Invoke(15 /* System.Xml.XmlNodeOrder System.Xml.XPath.XPathNavigator::ComparePosition(System.Xml.XPath.XPathNavigator) */, L_39, L_41);
		V_4 = L_42;
		int32_t L_43 = V_4;
		if ((((int32_t)L_43) == ((int32_t)1)))
		{
			goto IL_01b3;
		}
	}
	{
		int32_t L_44 = V_4;
		if ((((int32_t)L_44) == ((int32_t)2)))
		{
			goto IL_01e4;
		}
	}
	{
		goto IL_025e;
	}

IL_01b3:
	{
		SortedList_t2427694641 * L_45 = __this->get__iterList_6();
		BaseIterator_t4168896842 * L_46 = __this->get__iterRight_4();
		BaseIterator_t4168896842 * L_47 = __this->get__iterRight_4();
		VirtActionInvoker2< RuntimeObject *, RuntimeObject * >::Invoke(21 /* System.Void System.Collections.SortedList::set_Item(System.Object,System.Object) */, L_45, L_46, L_47);
		BaseIterator_t4168896842 * L_48 = __this->get__nextIterRight_8();
		__this->set__iterRight_4(L_48);
		__this->set__nextIterRight_8((BaseIterator_t4168896842 *)NULL);
		V_1 = (bool)1;
		goto IL_025e;
	}

IL_01e4:
	{
		BaseIterator_t4168896842 * L_49 = __this->get__nextIterRight_8();
		bool L_50 = VirtFuncInvoker0< bool >::Invoke(11 /* System.Boolean System.Xml.XPath.BaseIterator::MoveNext() */, L_49);
		if (L_50)
		{
			goto IL_0200;
		}
	}
	{
		__this->set__nextIterRight_8((BaseIterator_t4168896842 *)NULL);
		goto IL_0257;
	}

IL_0200:
	{
		SortedList_t2427694641 * L_51 = __this->get__iterList_6();
		int32_t L_52 = VirtFuncInvoker0< int32_t >::Invoke(15 /* System.Int32 System.Collections.SortedList::get_Count() */, L_51);
		V_3 = L_52;
		SortedList_t2427694641 * L_53 = __this->get__iterList_6();
		BaseIterator_t4168896842 * L_54 = __this->get__nextIterRight_8();
		BaseIterator_t4168896842 * L_55 = __this->get__nextIterRight_8();
		VirtActionInvoker2< RuntimeObject *, RuntimeObject * >::Invoke(21 /* System.Void System.Collections.SortedList::set_Item(System.Object,System.Object) */, L_53, L_54, L_55);
		int32_t L_56 = V_3;
		SortedList_t2427694641 * L_57 = __this->get__iterList_6();
		int32_t L_58 = VirtFuncInvoker0< int32_t >::Invoke(15 /* System.Int32 System.Collections.SortedList::get_Count() */, L_57);
		if ((((int32_t)L_56) == ((int32_t)L_58)))
		{
			goto IL_0257;
		}
	}
	{
		SortedList_t2427694641 * L_59 = __this->get__iterList_6();
		int32_t L_60 = V_3;
		RuntimeObject * L_61 = VirtFuncInvoker1< RuntimeObject *, int32_t >::Invoke(33 /* System.Object System.Collections.SortedList::GetByIndex(System.Int32) */, L_59, L_60);
		__this->set__nextIterRight_8(((BaseIterator_t4168896842 *)CastclassClass((RuntimeObject*)L_61, BaseIterator_t4168896842_il2cpp_TypeInfo_var)));
		SortedList_t2427694641 * L_62 = __this->get__iterList_6();
		int32_t L_63 = V_3;
		VirtActionInvoker1< int32_t >::Invoke(30 /* System.Void System.Collections.SortedList::RemoveAt(System.Int32) */, L_62, L_63);
	}

IL_0257:
	{
		V_1 = (bool)1;
		goto IL_025e;
	}

IL_025e:
	{
		bool L_64 = V_1;
		if (L_64)
		{
			goto IL_0107;
		}
	}
	{
		return (bool)1;
	}
	// Dead block : IL_0266: br IL_0051
}
// System.Xml.XPath.XPathNavigator System.Xml.XPath.SlashIterator::get_Current()
extern "C"  XPathNavigator_t787956054 * SlashIterator_get_Current_m517000145 (SlashIterator_t2421034408 * __this, const RuntimeMethod* method)
{
	XPathNavigator_t787956054 * G_B3_0 = NULL;
	{
		int32_t L_0 = VirtFuncInvoker0< int32_t >::Invoke(8 /* System.Int32 System.Xml.XPath.BaseIterator::get_CurrentPosition() */, __this);
		if (L_0)
		{
			goto IL_0011;
		}
	}
	{
		G_B3_0 = ((XPathNavigator_t787956054 *)(NULL));
		goto IL_001c;
	}

IL_0011:
	{
		BaseIterator_t4168896842 * L_1 = __this->get__iterRight_4();
		XPathNavigator_t787956054 * L_2 = VirtFuncInvoker0< XPathNavigator_t787956054 * >::Invoke(7 /* System.Xml.XPath.XPathNavigator System.Xml.XPath.XPathNodeIterator::get_Current() */, L_1);
		G_B3_0 = L_2;
	}

IL_001c:
	{
		return G_B3_0;
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
// System.Void System.Xml.XPath.SortedIterator::.ctor(System.Xml.XPath.BaseIterator)
extern "C"  void SortedIterator__ctor_m4010031056 (SortedIterator_t2904376427 * __this, BaseIterator_t4168896842 * ___iter0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SortedIterator__ctor_m4010031056_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	XPathNavigator_t787956054 * V_0 = NULL;
	int32_t V_1 = 0;
	XPathNavigator_t787956054 * V_2 = NULL;
	{
		BaseIterator_t4168896842 * L_0 = ___iter0;
		RuntimeObject* L_1 = BaseIterator_get_NamespaceManager_m2542706114(L_0, /*hidden argument*/NULL);
		BaseIterator__ctor_m1145318967(__this, L_1, /*hidden argument*/NULL);
		ArrayList_t2718874744 * L_2 = (ArrayList_t2718874744 *)il2cpp_codegen_object_new(ArrayList_t2718874744_il2cpp_TypeInfo_var);
		ArrayList__ctor_m4254721275(L_2, /*hidden argument*/NULL);
		__this->set_list_3(L_2);
		goto IL_0033;
	}

IL_001c:
	{
		ArrayList_t2718874744 * L_3 = __this->get_list_3();
		BaseIterator_t4168896842 * L_4 = ___iter0;
		XPathNavigator_t787956054 * L_5 = VirtFuncInvoker0< XPathNavigator_t787956054 * >::Invoke(7 /* System.Xml.XPath.XPathNavigator System.Xml.XPath.XPathNodeIterator::get_Current() */, L_4);
		XPathNavigator_t787956054 * L_6 = VirtFuncInvoker0< XPathNavigator_t787956054 * >::Invoke(14 /* System.Xml.XPath.XPathNavigator System.Xml.XPath.XPathNavigator::Clone() */, L_5);
		VirtFuncInvoker1< int32_t, RuntimeObject * >::Invoke(30 /* System.Int32 System.Collections.ArrayList::Add(System.Object) */, L_3, L_6);
	}

IL_0033:
	{
		BaseIterator_t4168896842 * L_7 = ___iter0;
		bool L_8 = VirtFuncInvoker0< bool >::Invoke(11 /* System.Boolean System.Xml.XPath.BaseIterator::MoveNext() */, L_7);
		if (L_8)
		{
			goto IL_001c;
		}
	}
	{
		ArrayList_t2718874744 * L_9 = __this->get_list_3();
		int32_t L_10 = VirtFuncInvoker0< int32_t >::Invoke(23 /* System.Int32 System.Collections.ArrayList::get_Count() */, L_9);
		if (L_10)
		{
			goto IL_004f;
		}
	}
	{
		return;
	}

IL_004f:
	{
		ArrayList_t2718874744 * L_11 = __this->get_list_3();
		RuntimeObject * L_12 = VirtFuncInvoker1< RuntimeObject *, int32_t >::Invoke(21 /* System.Object System.Collections.ArrayList::get_Item(System.Int32) */, L_11, 0);
		V_0 = ((XPathNavigator_t787956054 *)CastclassClass((RuntimeObject*)L_12, XPathNavigator_t787956054_il2cpp_TypeInfo_var));
		ArrayList_t2718874744 * L_13 = __this->get_list_3();
		IL2CPP_RUNTIME_CLASS_INIT(XPathNavigatorComparer_t2421573191_il2cpp_TypeInfo_var);
		XPathNavigatorComparer_t2421573191 * L_14 = ((XPathNavigatorComparer_t2421573191_StaticFields*)il2cpp_codegen_static_fields_for(XPathNavigatorComparer_t2421573191_il2cpp_TypeInfo_var))->get_Instance_0();
		VirtActionInvoker1< RuntimeObject* >::Invoke(46 /* System.Void System.Collections.ArrayList::Sort(System.Collections.IComparer) */, L_13, L_14);
		V_1 = 1;
		goto IL_00b1;
	}

IL_0078:
	{
		ArrayList_t2718874744 * L_15 = __this->get_list_3();
		int32_t L_16 = V_1;
		RuntimeObject * L_17 = VirtFuncInvoker1< RuntimeObject *, int32_t >::Invoke(21 /* System.Object System.Collections.ArrayList::get_Item(System.Int32) */, L_15, L_16);
		V_2 = ((XPathNavigator_t787956054 *)CastclassClass((RuntimeObject*)L_17, XPathNavigator_t787956054_il2cpp_TypeInfo_var));
		XPathNavigator_t787956054 * L_18 = V_0;
		XPathNavigator_t787956054 * L_19 = V_2;
		bool L_20 = VirtFuncInvoker1< bool, XPathNavigator_t787956054 * >::Invoke(18 /* System.Boolean System.Xml.XPath.XPathNavigator::IsSamePosition(System.Xml.XPath.XPathNavigator) */, L_18, L_19);
		if (!L_20)
		{
			goto IL_00ab;
		}
	}
	{
		ArrayList_t2718874744 * L_21 = __this->get_list_3();
		int32_t L_22 = V_1;
		VirtActionInvoker1< int32_t >::Invoke(39 /* System.Void System.Collections.ArrayList::RemoveAt(System.Int32) */, L_21, L_22);
		int32_t L_23 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_23, (int32_t)1));
		goto IL_00ad;
	}

IL_00ab:
	{
		XPathNavigator_t787956054 * L_24 = V_2;
		V_0 = L_24;
	}

IL_00ad:
	{
		int32_t L_25 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_25, (int32_t)1));
	}

IL_00b1:
	{
		int32_t L_26 = V_1;
		ArrayList_t2718874744 * L_27 = __this->get_list_3();
		int32_t L_28 = VirtFuncInvoker0< int32_t >::Invoke(23 /* System.Int32 System.Collections.ArrayList::get_Count() */, L_27);
		if ((((int32_t)L_26) < ((int32_t)L_28)))
		{
			goto IL_0078;
		}
	}
	{
		return;
	}
}
// System.Void System.Xml.XPath.SortedIterator::.ctor(System.Xml.XPath.SortedIterator)
extern "C"  void SortedIterator__ctor_m3025030651 (SortedIterator_t2904376427 * __this, SortedIterator_t2904376427 * ___other0, const RuntimeMethod* method)
{
	{
		SortedIterator_t2904376427 * L_0 = ___other0;
		BaseIterator__ctor_m2743981095(__this, L_0, /*hidden argument*/NULL);
		SortedIterator_t2904376427 * L_1 = ___other0;
		ArrayList_t2718874744 * L_2 = L_1->get_list_3();
		__this->set_list_3(L_2);
		SortedIterator_t2904376427 * L_3 = ___other0;
		int32_t L_4 = VirtFuncInvoker0< int32_t >::Invoke(8 /* System.Int32 System.Xml.XPath.BaseIterator::get_CurrentPosition() */, L_3);
		BaseIterator_SetPosition_m2306090904(__this, L_4, /*hidden argument*/NULL);
		return;
	}
}
// System.Xml.XPath.XPathNodeIterator System.Xml.XPath.SortedIterator::Clone()
extern "C"  XPathNodeIterator_t3667290188 * SortedIterator_Clone_m2329222376 (SortedIterator_t2904376427 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SortedIterator_Clone_m2329222376_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		SortedIterator_t2904376427 * L_0 = (SortedIterator_t2904376427 *)il2cpp_codegen_object_new(SortedIterator_t2904376427_il2cpp_TypeInfo_var);
		SortedIterator__ctor_m3025030651(L_0, __this, /*hidden argument*/NULL);
		return L_0;
	}
}
// System.Boolean System.Xml.XPath.SortedIterator::MoveNextCore()
extern "C"  bool SortedIterator_MoveNextCore_m2847875389 (SortedIterator_t2904376427 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = VirtFuncInvoker0< int32_t >::Invoke(8 /* System.Int32 System.Xml.XPath.BaseIterator::get_CurrentPosition() */, __this);
		ArrayList_t2718874744 * L_1 = __this->get_list_3();
		int32_t L_2 = VirtFuncInvoker0< int32_t >::Invoke(23 /* System.Int32 System.Collections.ArrayList::get_Count() */, L_1);
		return (bool)((((int32_t)L_0) < ((int32_t)L_2))? 1 : 0);
	}
}
// System.Xml.XPath.XPathNavigator System.Xml.XPath.SortedIterator::get_Current()
extern "C"  XPathNavigator_t787956054 * SortedIterator_get_Current_m1244162618 (SortedIterator_t2904376427 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SortedIterator_get_Current_m1244162618_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	XPathNavigator_t787956054 * G_B3_0 = NULL;
	{
		int32_t L_0 = VirtFuncInvoker0< int32_t >::Invoke(8 /* System.Int32 System.Xml.XPath.BaseIterator::get_CurrentPosition() */, __this);
		if (L_0)
		{
			goto IL_0011;
		}
	}
	{
		G_B3_0 = ((XPathNavigator_t787956054 *)(NULL));
		goto IL_0029;
	}

IL_0011:
	{
		ArrayList_t2718874744 * L_1 = __this->get_list_3();
		int32_t L_2 = VirtFuncInvoker0< int32_t >::Invoke(8 /* System.Int32 System.Xml.XPath.BaseIterator::get_CurrentPosition() */, __this);
		RuntimeObject * L_3 = VirtFuncInvoker1< RuntimeObject *, int32_t >::Invoke(21 /* System.Object System.Collections.ArrayList::get_Item(System.Int32) */, L_1, ((int32_t)il2cpp_codegen_subtract((int32_t)L_2, (int32_t)1)));
		G_B3_0 = ((XPathNavigator_t787956054 *)CastclassClass((RuntimeObject*)L_3, XPathNavigator_t787956054_il2cpp_TypeInfo_var));
	}

IL_0029:
	{
		return G_B3_0;
	}
}
// System.Int32 System.Xml.XPath.SortedIterator::get_Count()
extern "C"  int32_t SortedIterator_get_Count_m2095344454 (SortedIterator_t2904376427 * __this, const RuntimeMethod* method)
{
	{
		ArrayList_t2718874744 * L_0 = __this->get_list_3();
		int32_t L_1 = VirtFuncInvoker0< int32_t >::Invoke(23 /* System.Int32 System.Collections.ArrayList::get_Count() */, L_0);
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
// System.Void System.Xml.XPath.UnionIterator::.ctor(System.Xml.XPath.BaseIterator,System.Xml.XPath.BaseIterator,System.Xml.XPath.BaseIterator)
extern "C"  void UnionIterator__ctor_m90054607 (UnionIterator_t312972106 * __this, BaseIterator_t4168896842 * ___iter0, BaseIterator_t4168896842 * ___left1, BaseIterator_t4168896842 * ___right2, const RuntimeMethod* method)
{
	{
		BaseIterator_t4168896842 * L_0 = ___iter0;
		RuntimeObject* L_1 = BaseIterator_get_NamespaceManager_m2542706114(L_0, /*hidden argument*/NULL);
		BaseIterator__ctor_m1145318967(__this, L_1, /*hidden argument*/NULL);
		BaseIterator_t4168896842 * L_2 = ___left1;
		__this->set__left_3(L_2);
		BaseIterator_t4168896842 * L_3 = ___right2;
		__this->set__right_4(L_3);
		return;
	}
}
// System.Void System.Xml.XPath.UnionIterator::.ctor(System.Xml.XPath.UnionIterator)
extern "C"  void UnionIterator__ctor_m2440644929 (UnionIterator_t312972106 * __this, UnionIterator_t312972106 * ___other0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UnionIterator__ctor_m2440644929_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		UnionIterator_t312972106 * L_0 = ___other0;
		BaseIterator__ctor_m2743981095(__this, L_0, /*hidden argument*/NULL);
		UnionIterator_t312972106 * L_1 = ___other0;
		BaseIterator_t4168896842 * L_2 = L_1->get__left_3();
		XPathNodeIterator_t3667290188 * L_3 = VirtFuncInvoker0< XPathNodeIterator_t3667290188 * >::Invoke(9 /* System.Xml.XPath.XPathNodeIterator System.Xml.XPath.XPathNodeIterator::Clone() */, L_2);
		__this->set__left_3(((BaseIterator_t4168896842 *)CastclassClass((RuntimeObject*)L_3, BaseIterator_t4168896842_il2cpp_TypeInfo_var)));
		UnionIterator_t312972106 * L_4 = ___other0;
		BaseIterator_t4168896842 * L_5 = L_4->get__right_4();
		XPathNodeIterator_t3667290188 * L_6 = VirtFuncInvoker0< XPathNodeIterator_t3667290188 * >::Invoke(9 /* System.Xml.XPath.XPathNodeIterator System.Xml.XPath.XPathNodeIterator::Clone() */, L_5);
		__this->set__right_4(((BaseIterator_t4168896842 *)CastclassClass((RuntimeObject*)L_6, BaseIterator_t4168896842_il2cpp_TypeInfo_var)));
		UnionIterator_t312972106 * L_7 = ___other0;
		bool L_8 = L_7->get_keepLeft_5();
		__this->set_keepLeft_5(L_8);
		UnionIterator_t312972106 * L_9 = ___other0;
		bool L_10 = L_9->get_keepRight_6();
		__this->set_keepRight_6(L_10);
		UnionIterator_t312972106 * L_11 = ___other0;
		XPathNavigator_t787956054 * L_12 = L_11->get__current_7();
		if (!L_12)
		{
			goto IL_0067;
		}
	}
	{
		UnionIterator_t312972106 * L_13 = ___other0;
		XPathNavigator_t787956054 * L_14 = L_13->get__current_7();
		XPathNavigator_t787956054 * L_15 = VirtFuncInvoker0< XPathNavigator_t787956054 * >::Invoke(14 /* System.Xml.XPath.XPathNavigator System.Xml.XPath.XPathNavigator::Clone() */, L_14);
		__this->set__current_7(L_15);
	}

IL_0067:
	{
		return;
	}
}
// System.Xml.XPath.XPathNodeIterator System.Xml.XPath.UnionIterator::Clone()
extern "C"  XPathNodeIterator_t3667290188 * UnionIterator_Clone_m3744435168 (UnionIterator_t312972106 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UnionIterator_Clone_m3744435168_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		UnionIterator_t312972106 * L_0 = (UnionIterator_t312972106 *)il2cpp_codegen_object_new(UnionIterator_t312972106_il2cpp_TypeInfo_var);
		UnionIterator__ctor_m2440644929(L_0, __this, /*hidden argument*/NULL);
		return L_0;
	}
}
// System.Boolean System.Xml.XPath.UnionIterator::MoveNextCore()
extern "C"  bool UnionIterator_MoveNextCore_m1828747080 (UnionIterator_t312972106 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UnionIterator_MoveNextCore_m1828747080_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	bool V_1 = false;
	{
		bool L_0 = __this->get_keepLeft_5();
		if (L_0)
		{
			goto IL_001c;
		}
	}
	{
		BaseIterator_t4168896842 * L_1 = __this->get__left_3();
		bool L_2 = VirtFuncInvoker0< bool >::Invoke(11 /* System.Boolean System.Xml.XPath.BaseIterator::MoveNext() */, L_1);
		__this->set_keepLeft_5(L_2);
	}

IL_001c:
	{
		bool L_3 = __this->get_keepRight_6();
		if (L_3)
		{
			goto IL_0038;
		}
	}
	{
		BaseIterator_t4168896842 * L_4 = __this->get__right_4();
		bool L_5 = VirtFuncInvoker0< bool >::Invoke(11 /* System.Boolean System.Xml.XPath.BaseIterator::MoveNext() */, L_4);
		__this->set_keepRight_6(L_5);
	}

IL_0038:
	{
		bool L_6 = __this->get_keepLeft_5();
		if (L_6)
		{
			goto IL_0050;
		}
	}
	{
		bool L_7 = __this->get_keepRight_6();
		if (L_7)
		{
			goto IL_0050;
		}
	}
	{
		return (bool)0;
	}

IL_0050:
	{
		bool L_8 = __this->get_keepRight_6();
		if (L_8)
		{
			goto IL_0070;
		}
	}
	{
		__this->set_keepLeft_5((bool)0);
		BaseIterator_t4168896842 * L_9 = __this->get__left_3();
		UnionIterator_SetCurrent_m3864863490(__this, L_9, /*hidden argument*/NULL);
		return (bool)1;
	}

IL_0070:
	{
		bool L_10 = __this->get_keepLeft_5();
		if (L_10)
		{
			goto IL_0090;
		}
	}
	{
		__this->set_keepRight_6((bool)0);
		BaseIterator_t4168896842 * L_11 = __this->get__right_4();
		UnionIterator_SetCurrent_m3864863490(__this, L_11, /*hidden argument*/NULL);
		return (bool)1;
	}

IL_0090:
	{
		BaseIterator_t4168896842 * L_12 = __this->get__left_3();
		XPathNavigator_t787956054 * L_13 = VirtFuncInvoker0< XPathNavigator_t787956054 * >::Invoke(7 /* System.Xml.XPath.XPathNavigator System.Xml.XPath.XPathNodeIterator::get_Current() */, L_12);
		BaseIterator_t4168896842 * L_14 = __this->get__right_4();
		XPathNavigator_t787956054 * L_15 = VirtFuncInvoker0< XPathNavigator_t787956054 * >::Invoke(7 /* System.Xml.XPath.XPathNavigator System.Xml.XPath.XPathNodeIterator::get_Current() */, L_14);
		int32_t L_16 = VirtFuncInvoker1< int32_t, XPathNavigator_t787956054 * >::Invoke(15 /* System.Xml.XmlNodeOrder System.Xml.XPath.XPathNavigator::ComparePosition(System.Xml.XPath.XPathNavigator) */, L_13, L_15);
		V_0 = L_16;
		int32_t L_17 = V_0;
		switch (L_17)
		{
			case 0:
			{
				goto IL_00e5;
			}
			case 1:
			{
				goto IL_00fa;
			}
			case 2:
			{
				goto IL_00c7;
			}
			case 3:
			{
				goto IL_00e5;
			}
		}
	}
	{
		goto IL_010f;
	}

IL_00c7:
	{
		int32_t L_18 = 0;
		V_1 = (bool)L_18;
		__this->set_keepRight_6((bool)L_18);
		bool L_19 = V_1;
		__this->set_keepLeft_5(L_19);
		BaseIterator_t4168896842 * L_20 = __this->get__right_4();
		UnionIterator_SetCurrent_m3864863490(__this, L_20, /*hidden argument*/NULL);
		return (bool)1;
	}

IL_00e5:
	{
		__this->set_keepLeft_5((bool)0);
		BaseIterator_t4168896842 * L_21 = __this->get__left_3();
		UnionIterator_SetCurrent_m3864863490(__this, L_21, /*hidden argument*/NULL);
		return (bool)1;
	}

IL_00fa:
	{
		__this->set_keepRight_6((bool)0);
		BaseIterator_t4168896842 * L_22 = __this->get__right_4();
		UnionIterator_SetCurrent_m3864863490(__this, L_22, /*hidden argument*/NULL);
		return (bool)1;
	}

IL_010f:
	{
		InvalidOperationException_t56020091 * L_23 = (InvalidOperationException_t56020091 *)il2cpp_codegen_object_new(InvalidOperationException_t56020091_il2cpp_TypeInfo_var);
		InvalidOperationException__ctor_m237278729(L_23, _stringLiteral731907236, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_23, NULL, UnionIterator_MoveNextCore_m1828747080_RuntimeMethod_var);
	}
}
// System.Void System.Xml.XPath.UnionIterator::SetCurrent(System.Xml.XPath.XPathNodeIterator)
extern "C"  void UnionIterator_SetCurrent_m3864863490 (UnionIterator_t312972106 * __this, XPathNodeIterator_t3667290188 * ___iter0, const RuntimeMethod* method)
{
	{
		XPathNavigator_t787956054 * L_0 = __this->get__current_7();
		if (L_0)
		{
			goto IL_0021;
		}
	}
	{
		XPathNodeIterator_t3667290188 * L_1 = ___iter0;
		XPathNavigator_t787956054 * L_2 = VirtFuncInvoker0< XPathNavigator_t787956054 * >::Invoke(7 /* System.Xml.XPath.XPathNavigator System.Xml.XPath.XPathNodeIterator::get_Current() */, L_1);
		XPathNavigator_t787956054 * L_3 = VirtFuncInvoker0< XPathNavigator_t787956054 * >::Invoke(14 /* System.Xml.XPath.XPathNavigator System.Xml.XPath.XPathNavigator::Clone() */, L_2);
		__this->set__current_7(L_3);
		goto IL_0048;
	}

IL_0021:
	{
		XPathNavigator_t787956054 * L_4 = __this->get__current_7();
		XPathNodeIterator_t3667290188 * L_5 = ___iter0;
		XPathNavigator_t787956054 * L_6 = VirtFuncInvoker0< XPathNavigator_t787956054 * >::Invoke(7 /* System.Xml.XPath.XPathNavigator System.Xml.XPath.XPathNodeIterator::get_Current() */, L_5);
		bool L_7 = VirtFuncInvoker1< bool, XPathNavigator_t787956054 * >::Invoke(19 /* System.Boolean System.Xml.XPath.XPathNavigator::MoveTo(System.Xml.XPath.XPathNavigator) */, L_4, L_6);
		if (L_7)
		{
			goto IL_0048;
		}
	}
	{
		XPathNodeIterator_t3667290188 * L_8 = ___iter0;
		XPathNavigator_t787956054 * L_9 = VirtFuncInvoker0< XPathNavigator_t787956054 * >::Invoke(7 /* System.Xml.XPath.XPathNavigator System.Xml.XPath.XPathNodeIterator::get_Current() */, L_8);
		XPathNavigator_t787956054 * L_10 = VirtFuncInvoker0< XPathNavigator_t787956054 * >::Invoke(14 /* System.Xml.XPath.XPathNavigator System.Xml.XPath.XPathNavigator::Clone() */, L_9);
		__this->set__current_7(L_10);
	}

IL_0048:
	{
		return;
	}
}
// System.Xml.XPath.XPathNavigator System.Xml.XPath.UnionIterator::get_Current()
extern "C"  XPathNavigator_t787956054 * UnionIterator_get_Current_m2206420218 (UnionIterator_t312972106 * __this, const RuntimeMethod* method)
{
	XPathNavigator_t787956054 * G_B3_0 = NULL;
	{
		int32_t L_0 = VirtFuncInvoker0< int32_t >::Invoke(8 /* System.Int32 System.Xml.XPath.BaseIterator::get_CurrentPosition() */, __this);
		if ((((int32_t)L_0) <= ((int32_t)0)))
		{
			goto IL_0017;
		}
	}
	{
		XPathNavigator_t787956054 * L_1 = __this->get__current_7();
		G_B3_0 = L_1;
		goto IL_0018;
	}

IL_0017:
	{
		G_B3_0 = ((XPathNavigator_t787956054 *)(NULL));
	}

IL_0018:
	{
		return G_B3_0;
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
// System.Void System.Xml.XPath.WrapperIterator::.ctor(System.Xml.XPath.XPathNodeIterator,System.Xml.IXmlNamespaceResolver)
extern "C"  void WrapperIterator__ctor_m1708545452 (WrapperIterator_t1258076988 * __this, XPathNodeIterator_t3667290188 * ___iter0, RuntimeObject* ___nsm1, const RuntimeMethod* method)
{
	{
		RuntimeObject* L_0 = ___nsm1;
		BaseIterator__ctor_m1145318967(__this, L_0, /*hidden argument*/NULL);
		XPathNodeIterator_t3667290188 * L_1 = ___iter0;
		__this->set_iter_3(L_1);
		return;
	}
}
// System.Void System.Xml.XPath.WrapperIterator::.ctor(System.Xml.XPath.WrapperIterator)
extern "C"  void WrapperIterator__ctor_m144242795 (WrapperIterator_t1258076988 * __this, WrapperIterator_t1258076988 * ___other0, const RuntimeMethod* method)
{
	{
		WrapperIterator_t1258076988 * L_0 = ___other0;
		BaseIterator__ctor_m2743981095(__this, L_0, /*hidden argument*/NULL);
		WrapperIterator_t1258076988 * L_1 = ___other0;
		XPathNodeIterator_t3667290188 * L_2 = L_1->get_iter_3();
		XPathNodeIterator_t3667290188 * L_3 = VirtFuncInvoker0< XPathNodeIterator_t3667290188 * >::Invoke(9 /* System.Xml.XPath.XPathNodeIterator System.Xml.XPath.XPathNodeIterator::Clone() */, L_2);
		__this->set_iter_3(L_3);
		return;
	}
}
// System.Xml.XPath.XPathNodeIterator System.Xml.XPath.WrapperIterator::Clone()
extern "C"  XPathNodeIterator_t3667290188 * WrapperIterator_Clone_m4079939635 (WrapperIterator_t1258076988 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WrapperIterator_Clone_m4079939635_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		WrapperIterator_t1258076988 * L_0 = (WrapperIterator_t1258076988 *)il2cpp_codegen_object_new(WrapperIterator_t1258076988_il2cpp_TypeInfo_var);
		WrapperIterator__ctor_m144242795(L_0, __this, /*hidden argument*/NULL);
		return L_0;
	}
}
// System.Boolean System.Xml.XPath.WrapperIterator::MoveNextCore()
extern "C"  bool WrapperIterator_MoveNextCore_m3180643485 (WrapperIterator_t1258076988 * __this, const RuntimeMethod* method)
{
	{
		XPathNodeIterator_t3667290188 * L_0 = __this->get_iter_3();
		bool L_1 = VirtFuncInvoker0< bool >::Invoke(11 /* System.Boolean System.Xml.XPath.XPathNodeIterator::MoveNext() */, L_0);
		return L_1;
	}
}
// System.Xml.XPath.XPathNavigator System.Xml.XPath.WrapperIterator::get_Current()
extern "C"  XPathNavigator_t787956054 * WrapperIterator_get_Current_m174910429 (WrapperIterator_t1258076988 * __this, const RuntimeMethod* method)
{
	{
		XPathNodeIterator_t3667290188 * L_0 = __this->get_iter_3();
		XPathNavigator_t787956054 * L_1 = VirtFuncInvoker0< XPathNavigator_t787956054 * >::Invoke(7 /* System.Xml.XPath.XPathNavigator System.Xml.XPath.XPathNodeIterator::get_Current() */, L_0);
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void System.Xml.XPath.XPathBooleanFunction::.ctor(System.Xml.XPath.FunctionArguments)
extern "C"  void XPathBooleanFunction__ctor_m1039060572 (XPathBooleanFunction_t57991257 * __this, FunctionArguments_t3573450773 * ___args0, const RuntimeMethod* method)
{
	{
		FunctionArguments_t3573450773 * L_0 = ___args0;
		XPathFunction__ctor_m3144973253(__this, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Xml.XPath.XPathResultType System.Xml.XPath.XPathBooleanFunction::get_ReturnType()
extern "C"  int32_t XPathBooleanFunction_get_ReturnType_m1923259296 (XPathBooleanFunction_t57991257 * __this, const RuntimeMethod* method)
{
	{
		return (int32_t)(2);
	}
}
// System.Object System.Xml.XPath.XPathBooleanFunction::get_StaticValue()
extern "C"  RuntimeObject * XPathBooleanFunction_get_StaticValue_m3226145284 (XPathBooleanFunction_t57991257 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XPathBooleanFunction_get_StaticValue_m3226145284_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		bool L_0 = VirtFuncInvoker0< bool >::Invoke(11 /* System.Boolean System.Xml.XPath.Expression::get_StaticValueAsBoolean() */, __this);
		bool L_1 = L_0;
		RuntimeObject * L_2 = Box(Boolean_t97287965_il2cpp_TypeInfo_var, &L_1);
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
// System.Void System.Xml.XPath.XPathException::.ctor()
extern "C"  void XPathException__ctor_m1135220926 (XPathException_t2107611652 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XPathException__ctor_m1135220926_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_0 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_2();
		SystemException__ctor_m3298527747(__this, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Xml.XPath.XPathException::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C"  void XPathException__ctor_m2075915914 (XPathException_t2107611652 * __this, SerializationInfo_t950877179 * ___info0, StreamingContext_t3711869237  ___context1, const RuntimeMethod* method)
{
	{
		SerializationInfo_t950877179 * L_0 = ___info0;
		StreamingContext_t3711869237  L_1 = ___context1;
		SystemException__ctor_m1515048899(__this, L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Xml.XPath.XPathException::.ctor(System.String,System.Exception)
extern "C"  void XPathException__ctor_m4101400566 (XPathException_t2107611652 * __this, String_t* ___message0, Exception_t * ___innerException1, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___message0;
		Exception_t * L_1 = ___innerException1;
		SystemException__ctor_m4132668650(__this, L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Xml.XPath.XPathException::.ctor(System.String)
extern "C"  void XPathException__ctor_m3226187054 (XPathException_t2107611652 * __this, String_t* ___message0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___message0;
		SystemException__ctor_m4132668650(__this, L_0, (Exception_t *)NULL, /*hidden argument*/NULL);
		return;
	}
}
// System.String System.Xml.XPath.XPathException::get_Message()
extern "C"  String_t* XPathException_get_Message_m2395718314 (XPathException_t2107611652 * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0 = Exception_get_Message_m3320461627(__this, /*hidden argument*/NULL);
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
// System.Void System.Xml.XPath.XPathExpression::.ctor()
extern "C"  void XPathExpression__ctor_m2817367233 (XPathExpression_t1723793351 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Xml.XPath.XPathExpression System.Xml.XPath.XPathExpression::Compile(System.String)
extern "C"  XPathExpression_t1723793351 * XPathExpression_Compile_m1131673689 (RuntimeObject * __this /* static, unused */, String_t* ___xpath0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___xpath0;
		XPathExpression_t1723793351 * L_1 = XPathExpression_Compile_m2626621118(NULL /*static, unused*/, L_0, (RuntimeObject*)NULL, (RuntimeObject*)NULL, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Xml.XPath.XPathExpression System.Xml.XPath.XPathExpression::Compile(System.String,System.Xml.IXmlNamespaceResolver,System.Xml.Xsl.IStaticXsltContext)
extern "C"  XPathExpression_t1723793351 * XPathExpression_Compile_m2626621118 (RuntimeObject * __this /* static, unused */, String_t* ___xpath0, RuntimeObject* ___nsmgr1, RuntimeObject* ___ctx2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XPathExpression_Compile_m2626621118_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	XPathParser_t4136515887 * V_0 = NULL;
	CompiledExpression_t4018285681 * V_1 = NULL;
	{
		RuntimeObject* L_0 = ___ctx2;
		XPathParser_t4136515887 * L_1 = (XPathParser_t4136515887 *)il2cpp_codegen_object_new(XPathParser_t4136515887_il2cpp_TypeInfo_var);
		XPathParser__ctor_m851057967(L_1, L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		String_t* L_2 = ___xpath0;
		XPathParser_t4136515887 * L_3 = V_0;
		String_t* L_4 = ___xpath0;
		Expression_t1452783009 * L_5 = XPathParser_Compile_m1959434407(L_3, L_4, /*hidden argument*/NULL);
		CompiledExpression_t4018285681 * L_6 = (CompiledExpression_t4018285681 *)il2cpp_codegen_object_new(CompiledExpression_t4018285681_il2cpp_TypeInfo_var);
		CompiledExpression__ctor_m3065796493(L_6, L_2, L_5, /*hidden argument*/NULL);
		V_1 = L_6;
		CompiledExpression_t4018285681 * L_7 = V_1;
		RuntimeObject* L_8 = ___nsmgr1;
		VirtActionInvoker1< RuntimeObject* >::Invoke(5 /* System.Void System.Xml.XPath.CompiledExpression::SetContext(System.Xml.IXmlNamespaceResolver) */, L_7, L_8);
		CompiledExpression_t4018285681 * L_9 = V_1;
		return L_9;
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
// System.Void System.Xml.XPath.XPathFunction::.ctor(System.Xml.XPath.FunctionArguments)
extern "C"  void XPathFunction__ctor_m3144973253 (XPathFunction_t857746608 * __this, FunctionArguments_t3573450773 * ___args0, const RuntimeMethod* method)
{
	{
		Expression__ctor_m15586157(__this, /*hidden argument*/NULL);
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
// System.Void System.Xml.XPath.XPathFunctionBoolean::.ctor(System.Xml.XPath.FunctionArguments)
extern "C"  void XPathFunctionBoolean__ctor_m3229475651 (XPathFunctionBoolean_t2892373420 * __this, FunctionArguments_t3573450773 * ___args0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XPathFunctionBoolean__ctor_m3229475651_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		FunctionArguments_t3573450773 * L_0 = ___args0;
		XPathBooleanFunction__ctor_m1039060572(__this, L_0, /*hidden argument*/NULL);
		FunctionArguments_t3573450773 * L_1 = ___args0;
		if (!L_1)
		{
			goto IL_002f;
		}
	}
	{
		FunctionArguments_t3573450773 * L_2 = ___args0;
		Expression_t1452783009 * L_3 = FunctionArguments_get_Arg_m248443681(L_2, /*hidden argument*/NULL);
		__this->set_arg0_0(L_3);
		FunctionArguments_t3573450773 * L_4 = ___args0;
		FunctionArguments_t3573450773 * L_5 = FunctionArguments_get_Tail_m3050077184(L_4, /*hidden argument*/NULL);
		if (!L_5)
		{
			goto IL_002f;
		}
	}
	{
		XPathException_t2107611652 * L_6 = (XPathException_t2107611652 *)il2cpp_codegen_object_new(XPathException_t2107611652_il2cpp_TypeInfo_var);
		XPathException__ctor_m3226187054(L_6, _stringLiteral570152571, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_6, NULL, XPathFunctionBoolean__ctor_m3229475651_RuntimeMethod_var);
	}

IL_002f:
	{
		return;
	}
}
// System.Boolean System.Xml.XPath.XPathFunctionBoolean::get_Peer()
extern "C"  bool XPathFunctionBoolean_get_Peer_m477247426 (XPathFunctionBoolean_t2892373420 * __this, const RuntimeMethod* method)
{
	int32_t G_B3_0 = 0;
	{
		Expression_t1452783009 * L_0 = __this->get_arg0_0();
		if (!L_0)
		{
			goto IL_001b;
		}
	}
	{
		Expression_t1452783009 * L_1 = __this->get_arg0_0();
		bool L_2 = VirtFuncInvoker0< bool >::Invoke(15 /* System.Boolean System.Xml.XPath.Expression::get_Peer() */, L_1);
		G_B3_0 = ((int32_t)(L_2));
		goto IL_001c;
	}

IL_001b:
	{
		G_B3_0 = 1;
	}

IL_001c:
	{
		return (bool)G_B3_0;
	}
}
// System.Object System.Xml.XPath.XPathFunctionBoolean::Evaluate(System.Xml.XPath.BaseIterator)
extern "C"  RuntimeObject * XPathFunctionBoolean_Evaluate_m2289105876 (XPathFunctionBoolean_t2892373420 * __this, BaseIterator_t4168896842 * ___iter0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XPathFunctionBoolean_Evaluate_m2289105876_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Expression_t1452783009 * L_0 = __this->get_arg0_0();
		if (L_0)
		{
			goto IL_0021;
		}
	}
	{
		BaseIterator_t4168896842 * L_1 = ___iter0;
		XPathNavigator_t787956054 * L_2 = VirtFuncInvoker0< XPathNavigator_t787956054 * >::Invoke(7 /* System.Xml.XPath.XPathNavigator System.Xml.XPath.XPathNodeIterator::get_Current() */, L_1);
		String_t* L_3 = VirtFuncInvoker0< String_t* >::Invoke(4 /* System.String System.Xml.XPath.XPathItem::get_Value() */, L_2);
		bool L_4 = XPathFunctions_ToBoolean_m854853463(NULL /*static, unused*/, L_3, /*hidden argument*/NULL);
		bool L_5 = L_4;
		RuntimeObject * L_6 = Box(Boolean_t97287965_il2cpp_TypeInfo_var, &L_5);
		return L_6;
	}

IL_0021:
	{
		Expression_t1452783009 * L_7 = __this->get_arg0_0();
		BaseIterator_t4168896842 * L_8 = ___iter0;
		bool L_9 = VirtFuncInvoker1< bool, BaseIterator_t4168896842 * >::Invoke(18 /* System.Boolean System.Xml.XPath.Expression::EvaluateBoolean(System.Xml.XPath.BaseIterator) */, L_7, L_8);
		bool L_10 = L_9;
		RuntimeObject * L_11 = Box(Boolean_t97287965_il2cpp_TypeInfo_var, &L_10);
		return L_11;
	}
}
// System.String System.Xml.XPath.XPathFunctionBoolean::ToString()
extern "C"  String_t* XPathFunctionBoolean_ToString_m4112843319 (XPathFunctionBoolean_t2892373420 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XPathFunctionBoolean_ToString_m4112843319_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		StringU5BU5D_t1281789340* L_0 = ((StringU5BU5D_t1281789340*)SZArrayNew(StringU5BU5D_t1281789340_il2cpp_TypeInfo_var, (uint32_t)3));
		ArrayElementTypeCheck (L_0, _stringLiteral3580302926);
		(L_0)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteral3580302926);
		StringU5BU5D_t1281789340* L_1 = L_0;
		Expression_t1452783009 * L_2 = __this->get_arg0_0();
		String_t* L_3 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_2);
		ArrayElementTypeCheck (L_1, L_3);
		(L_1)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(1), (String_t*)L_3);
		StringU5BU5D_t1281789340* L_4 = L_1;
		ArrayElementTypeCheck (L_4, _stringLiteral3452614535);
		(L_4)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(2), (String_t*)_stringLiteral3452614535);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_5 = String_Concat_m1809518182(NULL /*static, unused*/, L_4, /*hidden argument*/NULL);
		return L_5;
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
// System.Void System.Xml.XPath.XPathFunctionCeil::.ctor(System.Xml.XPath.FunctionArguments)
extern "C"  void XPathFunctionCeil__ctor_m376275260 (XPathFunctionCeil_t4176839285 * __this, FunctionArguments_t3573450773 * ___args0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XPathFunctionCeil__ctor_m376275260_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		FunctionArguments_t3573450773 * L_0 = ___args0;
		XPathNumericFunction__ctor_m4265073059(__this, L_0, /*hidden argument*/NULL);
		FunctionArguments_t3573450773 * L_1 = ___args0;
		if (!L_1)
		{
			goto IL_0018;
		}
	}
	{
		FunctionArguments_t3573450773 * L_2 = ___args0;
		FunctionArguments_t3573450773 * L_3 = FunctionArguments_get_Tail_m3050077184(L_2, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_0023;
		}
	}

IL_0018:
	{
		XPathException_t2107611652 * L_4 = (XPathException_t2107611652 *)il2cpp_codegen_object_new(XPathException_t2107611652_il2cpp_TypeInfo_var);
		XPathException__ctor_m3226187054(L_4, _stringLiteral1990462270, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, NULL, XPathFunctionCeil__ctor_m376275260_RuntimeMethod_var);
	}

IL_0023:
	{
		FunctionArguments_t3573450773 * L_5 = ___args0;
		Expression_t1452783009 * L_6 = FunctionArguments_get_Arg_m248443681(L_5, /*hidden argument*/NULL);
		__this->set_arg0_0(L_6);
		return;
	}
}
// System.Boolean System.Xml.XPath.XPathFunctionCeil::get_HasStaticValue()
extern "C"  bool XPathFunctionCeil_get_HasStaticValue_m3997029677 (XPathFunctionCeil_t4176839285 * __this, const RuntimeMethod* method)
{
	{
		Expression_t1452783009 * L_0 = __this->get_arg0_0();
		bool L_1 = VirtFuncInvoker0< bool >::Invoke(7 /* System.Boolean System.Xml.XPath.Expression::get_HasStaticValue() */, L_0);
		return L_1;
	}
}
// System.Double System.Xml.XPath.XPathFunctionCeil::get_StaticValueAsNumber()
extern "C"  double XPathFunctionCeil_get_StaticValueAsNumber_m208248040 (XPathFunctionCeil_t4176839285 * __this, const RuntimeMethod* method)
{
	double G_B3_0 = 0.0;
	{
		bool L_0 = VirtFuncInvoker0< bool >::Invoke(7 /* System.Boolean System.Xml.XPath.XPathFunctionCeil::get_HasStaticValue() */, __this);
		if (!L_0)
		{
			goto IL_0020;
		}
	}
	{
		Expression_t1452783009 * L_1 = __this->get_arg0_0();
		double L_2 = VirtFuncInvoker0< double >::Invoke(10 /* System.Double System.Xml.XPath.Expression::get_StaticValueAsNumber() */, L_1);
		double L_3 = ceil(L_2);
		G_B3_0 = L_3;
		goto IL_0029;
	}

IL_0020:
	{
		G_B3_0 = (0.0);
	}

IL_0029:
	{
		return G_B3_0;
	}
}
// System.Boolean System.Xml.XPath.XPathFunctionCeil::get_Peer()
extern "C"  bool XPathFunctionCeil_get_Peer_m236725407 (XPathFunctionCeil_t4176839285 * __this, const RuntimeMethod* method)
{
	{
		Expression_t1452783009 * L_0 = __this->get_arg0_0();
		bool L_1 = VirtFuncInvoker0< bool >::Invoke(15 /* System.Boolean System.Xml.XPath.Expression::get_Peer() */, L_0);
		return L_1;
	}
}
// System.Object System.Xml.XPath.XPathFunctionCeil::Evaluate(System.Xml.XPath.BaseIterator)
extern "C"  RuntimeObject * XPathFunctionCeil_Evaluate_m1281608090 (XPathFunctionCeil_t4176839285 * __this, BaseIterator_t4168896842 * ___iter0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XPathFunctionCeil_Evaluate_m1281608090_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Expression_t1452783009 * L_0 = __this->get_arg0_0();
		BaseIterator_t4168896842 * L_1 = ___iter0;
		double L_2 = VirtFuncInvoker1< double, BaseIterator_t4168896842 * >::Invoke(16 /* System.Double System.Xml.XPath.Expression::EvaluateNumber(System.Xml.XPath.BaseIterator) */, L_0, L_1);
		double L_3 = ceil(L_2);
		double L_4 = L_3;
		RuntimeObject * L_5 = Box(Double_t594665363_il2cpp_TypeInfo_var, &L_4);
		return L_5;
	}
}
// System.String System.Xml.XPath.XPathFunctionCeil::ToString()
extern "C"  String_t* XPathFunctionCeil_ToString_m1707757497 (XPathFunctionCeil_t4176839285 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XPathFunctionCeil_ToString_m1707757497_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		StringU5BU5D_t1281789340* L_0 = ((StringU5BU5D_t1281789340*)SZArrayNew(StringU5BU5D_t1281789340_il2cpp_TypeInfo_var, (uint32_t)3));
		ArrayElementTypeCheck (L_0, _stringLiteral402588248);
		(L_0)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteral402588248);
		StringU5BU5D_t1281789340* L_1 = L_0;
		Expression_t1452783009 * L_2 = __this->get_arg0_0();
		String_t* L_3 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_2);
		ArrayElementTypeCheck (L_1, L_3);
		(L_1)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(1), (String_t*)L_3);
		StringU5BU5D_t1281789340* L_4 = L_1;
		ArrayElementTypeCheck (L_4, _stringLiteral3452614535);
		(L_4)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(2), (String_t*)_stringLiteral3452614535);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_5 = String_Concat_m1809518182(NULL /*static, unused*/, L_4, /*hidden argument*/NULL);
		return L_5;
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
// System.Void System.Xml.XPath.XPathFunctionConcat::.ctor(System.Xml.XPath.FunctionArguments)
extern "C"  void XPathFunctionConcat__ctor_m4049947836 (XPathFunctionConcat_t3351639595 * __this, FunctionArguments_t3573450773 * ___args0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XPathFunctionConcat__ctor_m4049947836_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	ArrayList_t2718874744 * V_0 = NULL;
	{
		FunctionArguments_t3573450773 * L_0 = ___args0;
		XPathFunction__ctor_m3144973253(__this, L_0, /*hidden argument*/NULL);
		FunctionArguments_t3573450773 * L_1 = ___args0;
		if (!L_1)
		{
			goto IL_0018;
		}
	}
	{
		FunctionArguments_t3573450773 * L_2 = ___args0;
		FunctionArguments_t3573450773 * L_3 = FunctionArguments_get_Tail_m3050077184(L_2, /*hidden argument*/NULL);
		if (L_3)
		{
			goto IL_0023;
		}
	}

IL_0018:
	{
		XPathException_t2107611652 * L_4 = (XPathException_t2107611652 *)il2cpp_codegen_object_new(XPathException_t2107611652_il2cpp_TypeInfo_var);
		XPathException__ctor_m3226187054(L_4, _stringLiteral2208932330, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, NULL, XPathFunctionConcat__ctor_m4049947836_RuntimeMethod_var);
	}

IL_0023:
	{
		FunctionArguments_t3573450773 * L_5 = ___args0;
		ArrayList_t2718874744 * L_6 = (ArrayList_t2718874744 *)il2cpp_codegen_object_new(ArrayList_t2718874744_il2cpp_TypeInfo_var);
		ArrayList__ctor_m4254721275(L_6, /*hidden argument*/NULL);
		ArrayList_t2718874744 * L_7 = L_6;
		V_0 = L_7;
		__this->set_rgs_0(L_7);
		ArrayList_t2718874744 * L_8 = V_0;
		FunctionArguments_ToArrayList_m3840216961(L_5, L_8, /*hidden argument*/NULL);
		return;
	}
}
// System.Xml.XPath.XPathResultType System.Xml.XPath.XPathFunctionConcat::get_ReturnType()
extern "C"  int32_t XPathFunctionConcat_get_ReturnType_m4268972997 (XPathFunctionConcat_t3351639595 * __this, const RuntimeMethod* method)
{
	{
		return (int32_t)(1);
	}
}
// System.Boolean System.Xml.XPath.XPathFunctionConcat::get_Peer()
extern "C"  bool XPathFunctionConcat_get_Peer_m3688240146 (XPathFunctionConcat_t3351639595 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XPathFunctionConcat_get_Peer_m3688240146_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		V_0 = 0;
		goto IL_0028;
	}

IL_0007:
	{
		ArrayList_t2718874744 * L_0 = __this->get_rgs_0();
		int32_t L_1 = V_0;
		RuntimeObject * L_2 = VirtFuncInvoker1< RuntimeObject *, int32_t >::Invoke(21 /* System.Object System.Collections.ArrayList::get_Item(System.Int32) */, L_0, L_1);
		bool L_3 = VirtFuncInvoker0< bool >::Invoke(15 /* System.Boolean System.Xml.XPath.Expression::get_Peer() */, ((Expression_t1452783009 *)CastclassClass((RuntimeObject*)L_2, Expression_t1452783009_il2cpp_TypeInfo_var)));
		if (L_3)
		{
			goto IL_0024;
		}
	}
	{
		return (bool)0;
	}

IL_0024:
	{
		int32_t L_4 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_4, (int32_t)1));
	}

IL_0028:
	{
		int32_t L_5 = V_0;
		ArrayList_t2718874744 * L_6 = __this->get_rgs_0();
		int32_t L_7 = VirtFuncInvoker0< int32_t >::Invoke(23 /* System.Int32 System.Collections.ArrayList::get_Count() */, L_6);
		if ((((int32_t)L_5) < ((int32_t)L_7)))
		{
			goto IL_0007;
		}
	}
	{
		return (bool)1;
	}
}
// System.Object System.Xml.XPath.XPathFunctionConcat::Evaluate(System.Xml.XPath.BaseIterator)
extern "C"  RuntimeObject * XPathFunctionConcat_Evaluate_m3524587377 (XPathFunctionConcat_t3351639595 * __this, BaseIterator_t4168896842 * ___iter0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XPathFunctionConcat_Evaluate_m3524587377_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	StringBuilder_t * V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		StringBuilder_t * L_0 = (StringBuilder_t *)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
		StringBuilder__ctor_m3121283359(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		ArrayList_t2718874744 * L_1 = __this->get_rgs_0();
		int32_t L_2 = VirtFuncInvoker0< int32_t >::Invoke(23 /* System.Int32 System.Collections.ArrayList::get_Count() */, L_1);
		V_1 = L_2;
		V_2 = 0;
		goto IL_003b;
	}

IL_0019:
	{
		StringBuilder_t * L_3 = V_0;
		ArrayList_t2718874744 * L_4 = __this->get_rgs_0();
		int32_t L_5 = V_2;
		RuntimeObject * L_6 = VirtFuncInvoker1< RuntimeObject *, int32_t >::Invoke(21 /* System.Object System.Collections.ArrayList::get_Item(System.Int32) */, L_4, L_5);
		BaseIterator_t4168896842 * L_7 = ___iter0;
		String_t* L_8 = VirtFuncInvoker1< String_t*, BaseIterator_t4168896842 * >::Invoke(17 /* System.String System.Xml.XPath.Expression::EvaluateString(System.Xml.XPath.BaseIterator) */, ((Expression_t1452783009 *)CastclassClass((RuntimeObject*)L_6, Expression_t1452783009_il2cpp_TypeInfo_var)), L_7);
		StringBuilder_Append_m1965104174(L_3, L_8, /*hidden argument*/NULL);
		int32_t L_9 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_9, (int32_t)1));
	}

IL_003b:
	{
		int32_t L_10 = V_2;
		int32_t L_11 = V_1;
		if ((((int32_t)L_10) < ((int32_t)L_11)))
		{
			goto IL_0019;
		}
	}
	{
		StringBuilder_t * L_12 = V_0;
		String_t* L_13 = StringBuilder_ToString_m3317489284(L_12, /*hidden argument*/NULL);
		return L_13;
	}
}
// System.String System.Xml.XPath.XPathFunctionConcat::ToString()
extern "C"  String_t* XPathFunctionConcat_ToString_m1643488270 (XPathFunctionConcat_t3351639595 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XPathFunctionConcat_ToString_m1643488270_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	StringBuilder_t * V_0 = NULL;
	int32_t V_1 = 0;
	{
		StringBuilder_t * L_0 = (StringBuilder_t *)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
		StringBuilder__ctor_m3121283359(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		StringBuilder_t * L_1 = V_0;
		StringBuilder_Append_m1965104174(L_1, _stringLiteral2112246478, /*hidden argument*/NULL);
		V_1 = 0;
		goto IL_0051;
	}

IL_0019:
	{
		StringBuilder_t * L_2 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(CultureInfo_t4157843068_il2cpp_TypeInfo_var);
		CultureInfo_t4157843068 * L_3 = CultureInfo_get_InvariantCulture_m3532445182(NULL /*static, unused*/, /*hidden argument*/NULL);
		ObjectU5BU5D_t2843939325* L_4 = ((ObjectU5BU5D_t2843939325*)SZArrayNew(ObjectU5BU5D_t2843939325_il2cpp_TypeInfo_var, (uint32_t)1));
		ArrayList_t2718874744 * L_5 = __this->get_rgs_0();
		int32_t L_6 = V_1;
		RuntimeObject * L_7 = VirtFuncInvoker1< RuntimeObject *, int32_t >::Invoke(21 /* System.Object System.Collections.ArrayList::get_Item(System.Int32) */, L_5, L_6);
		String_t* L_8 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_7);
		ArrayElementTypeCheck (L_4, L_8);
		(L_4)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_8);
		StringBuilder_AppendFormat_m4227532852(L_2, L_3, _stringLiteral628085470, L_4, /*hidden argument*/NULL);
		StringBuilder_t * L_9 = V_0;
		StringBuilder_Append_m2383614642(L_9, ((int32_t)44), /*hidden argument*/NULL);
		int32_t L_10 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_10, (int32_t)1));
	}

IL_0051:
	{
		int32_t L_11 = V_1;
		ArrayList_t2718874744 * L_12 = __this->get_rgs_0();
		int32_t L_13 = VirtFuncInvoker0< int32_t >::Invoke(23 /* System.Int32 System.Collections.ArrayList::get_Count() */, L_12);
		if ((((int32_t)L_11) < ((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_13, (int32_t)1)))))
		{
			goto IL_0019;
		}
	}
	{
		StringBuilder_t * L_14 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(CultureInfo_t4157843068_il2cpp_TypeInfo_var);
		CultureInfo_t4157843068 * L_15 = CultureInfo_get_InvariantCulture_m3532445182(NULL /*static, unused*/, /*hidden argument*/NULL);
		ObjectU5BU5D_t2843939325* L_16 = ((ObjectU5BU5D_t2843939325*)SZArrayNew(ObjectU5BU5D_t2843939325_il2cpp_TypeInfo_var, (uint32_t)1));
		ArrayList_t2718874744 * L_17 = __this->get_rgs_0();
		ArrayList_t2718874744 * L_18 = __this->get_rgs_0();
		int32_t L_19 = VirtFuncInvoker0< int32_t >::Invoke(23 /* System.Int32 System.Collections.ArrayList::get_Count() */, L_18);
		RuntimeObject * L_20 = VirtFuncInvoker1< RuntimeObject *, int32_t >::Invoke(21 /* System.Object System.Collections.ArrayList::get_Item(System.Int32) */, L_17, ((int32_t)il2cpp_codegen_subtract((int32_t)L_19, (int32_t)1)));
		String_t* L_21 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_20);
		ArrayElementTypeCheck (L_16, L_21);
		(L_16)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_21);
		StringBuilder_AppendFormat_m4227532852(L_14, L_15, _stringLiteral628085470, L_16, /*hidden argument*/NULL);
		StringBuilder_t * L_22 = V_0;
		StringBuilder_Append_m2383614642(L_22, ((int32_t)41), /*hidden argument*/NULL);
		StringBuilder_t * L_23 = V_0;
		String_t* L_24 = StringBuilder_ToString_m3317489284(L_23, /*hidden argument*/NULL);
		return L_24;
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
// System.Void System.Xml.XPath.XPathFunctionContains::.ctor(System.Xml.XPath.FunctionArguments)
extern "C"  void XPathFunctionContains__ctor_m3471873644 (XPathFunctionContains_t678583606 * __this, FunctionArguments_t3573450773 * ___args0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XPathFunctionContains__ctor_m3471873644_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		FunctionArguments_t3573450773 * L_0 = ___args0;
		XPathFunction__ctor_m3144973253(__this, L_0, /*hidden argument*/NULL);
		FunctionArguments_t3573450773 * L_1 = ___args0;
		if (!L_1)
		{
			goto IL_0028;
		}
	}
	{
		FunctionArguments_t3573450773 * L_2 = ___args0;
		FunctionArguments_t3573450773 * L_3 = FunctionArguments_get_Tail_m3050077184(L_2, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_0028;
		}
	}
	{
		FunctionArguments_t3573450773 * L_4 = ___args0;
		FunctionArguments_t3573450773 * L_5 = FunctionArguments_get_Tail_m3050077184(L_4, /*hidden argument*/NULL);
		FunctionArguments_t3573450773 * L_6 = FunctionArguments_get_Tail_m3050077184(L_5, /*hidden argument*/NULL);
		if (!L_6)
		{
			goto IL_0033;
		}
	}

IL_0028:
	{
		XPathException_t2107611652 * L_7 = (XPathException_t2107611652 *)il2cpp_codegen_object_new(XPathException_t2107611652_il2cpp_TypeInfo_var);
		XPathException__ctor_m3226187054(L_7, _stringLiteral1275394025, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_7, NULL, XPathFunctionContains__ctor_m3471873644_RuntimeMethod_var);
	}

IL_0033:
	{
		FunctionArguments_t3573450773 * L_8 = ___args0;
		Expression_t1452783009 * L_9 = FunctionArguments_get_Arg_m248443681(L_8, /*hidden argument*/NULL);
		__this->set_arg0_0(L_9);
		FunctionArguments_t3573450773 * L_10 = ___args0;
		FunctionArguments_t3573450773 * L_11 = FunctionArguments_get_Tail_m3050077184(L_10, /*hidden argument*/NULL);
		Expression_t1452783009 * L_12 = FunctionArguments_get_Arg_m248443681(L_11, /*hidden argument*/NULL);
		__this->set_arg1_1(L_12);
		return;
	}
}
// System.Xml.XPath.XPathResultType System.Xml.XPath.XPathFunctionContains::get_ReturnType()
extern "C"  int32_t XPathFunctionContains_get_ReturnType_m2803346305 (XPathFunctionContains_t678583606 * __this, const RuntimeMethod* method)
{
	{
		return (int32_t)(2);
	}
}
// System.Boolean System.Xml.XPath.XPathFunctionContains::get_Peer()
extern "C"  bool XPathFunctionContains_get_Peer_m1520064510 (XPathFunctionContains_t678583606 * __this, const RuntimeMethod* method)
{
	int32_t G_B3_0 = 0;
	{
		Expression_t1452783009 * L_0 = __this->get_arg0_0();
		bool L_1 = VirtFuncInvoker0< bool >::Invoke(15 /* System.Boolean System.Xml.XPath.Expression::get_Peer() */, L_0);
		if (!L_1)
		{
			goto IL_001d;
		}
	}
	{
		Expression_t1452783009 * L_2 = __this->get_arg1_1();
		bool L_3 = VirtFuncInvoker0< bool >::Invoke(15 /* System.Boolean System.Xml.XPath.Expression::get_Peer() */, L_2);
		G_B3_0 = ((int32_t)(L_3));
		goto IL_001e;
	}

IL_001d:
	{
		G_B3_0 = 0;
	}

IL_001e:
	{
		return (bool)G_B3_0;
	}
}
// System.Object System.Xml.XPath.XPathFunctionContains::Evaluate(System.Xml.XPath.BaseIterator)
extern "C"  RuntimeObject * XPathFunctionContains_Evaluate_m3281520038 (XPathFunctionContains_t678583606 * __this, BaseIterator_t4168896842 * ___iter0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XPathFunctionContains_Evaluate_m3281520038_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Expression_t1452783009 * L_0 = __this->get_arg0_0();
		BaseIterator_t4168896842 * L_1 = ___iter0;
		String_t* L_2 = VirtFuncInvoker1< String_t*, BaseIterator_t4168896842 * >::Invoke(17 /* System.String System.Xml.XPath.Expression::EvaluateString(System.Xml.XPath.BaseIterator) */, L_0, L_1);
		Expression_t1452783009 * L_3 = __this->get_arg1_1();
		BaseIterator_t4168896842 * L_4 = ___iter0;
		String_t* L_5 = VirtFuncInvoker1< String_t*, BaseIterator_t4168896842 * >::Invoke(17 /* System.String System.Xml.XPath.Expression::EvaluateString(System.Xml.XPath.BaseIterator) */, L_3, L_4);
		int32_t L_6 = String_IndexOf_m1977622757(L_2, L_5, /*hidden argument*/NULL);
		bool L_7 = ((bool)((((int32_t)((((int32_t)L_6) == ((int32_t)(-1)))? 1 : 0)) == ((int32_t)0))? 1 : 0));
		RuntimeObject * L_8 = Box(Boolean_t97287965_il2cpp_TypeInfo_var, &L_7);
		return L_8;
	}
}
// System.String System.Xml.XPath.XPathFunctionContains::ToString()
extern "C"  String_t* XPathFunctionContains_ToString_m2562516465 (XPathFunctionContains_t678583606 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XPathFunctionContains_ToString_m2562516465_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		StringU5BU5D_t1281789340* L_0 = ((StringU5BU5D_t1281789340*)SZArrayNew(StringU5BU5D_t1281789340_il2cpp_TypeInfo_var, (uint32_t)5));
		ArrayElementTypeCheck (L_0, _stringLiteral354353333);
		(L_0)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteral354353333);
		StringU5BU5D_t1281789340* L_1 = L_0;
		Expression_t1452783009 * L_2 = __this->get_arg0_0();
		String_t* L_3 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_2);
		ArrayElementTypeCheck (L_1, L_3);
		(L_1)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(1), (String_t*)L_3);
		StringU5BU5D_t1281789340* L_4 = L_1;
		ArrayElementTypeCheck (L_4, _stringLiteral3452614532);
		(L_4)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(2), (String_t*)_stringLiteral3452614532);
		StringU5BU5D_t1281789340* L_5 = L_4;
		Expression_t1452783009 * L_6 = __this->get_arg1_1();
		String_t* L_7 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_6);
		ArrayElementTypeCheck (L_5, L_7);
		(L_5)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(3), (String_t*)L_7);
		StringU5BU5D_t1281789340* L_8 = L_5;
		ArrayElementTypeCheck (L_8, _stringLiteral3452614535);
		(L_8)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(4), (String_t*)_stringLiteral3452614535);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_9 = String_Concat_m1809518182(NULL /*static, unused*/, L_8, /*hidden argument*/NULL);
		return L_9;
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
// System.Void System.Xml.XPath.XPathFunctionCount::.ctor(System.Xml.XPath.FunctionArguments)
extern "C"  void XPathFunctionCount__ctor_m2746453153 (XPathFunctionCount_t4174407007 * __this, FunctionArguments_t3573450773 * ___args0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XPathFunctionCount__ctor_m2746453153_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		FunctionArguments_t3573450773 * L_0 = ___args0;
		XPathFunction__ctor_m3144973253(__this, L_0, /*hidden argument*/NULL);
		FunctionArguments_t3573450773 * L_1 = ___args0;
		if (!L_1)
		{
			goto IL_0018;
		}
	}
	{
		FunctionArguments_t3573450773 * L_2 = ___args0;
		FunctionArguments_t3573450773 * L_3 = FunctionArguments_get_Tail_m3050077184(L_2, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_0023;
		}
	}

IL_0018:
	{
		XPathException_t2107611652 * L_4 = (XPathException_t2107611652 *)il2cpp_codegen_object_new(XPathException_t2107611652_il2cpp_TypeInfo_var);
		XPathException__ctor_m3226187054(L_4, _stringLiteral3652175584, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, NULL, XPathFunctionCount__ctor_m2746453153_RuntimeMethod_var);
	}

IL_0023:
	{
		FunctionArguments_t3573450773 * L_5 = ___args0;
		Expression_t1452783009 * L_6 = FunctionArguments_get_Arg_m248443681(L_5, /*hidden argument*/NULL);
		__this->set_arg0_0(L_6);
		return;
	}
}
// System.Xml.XPath.XPathResultType System.Xml.XPath.XPathFunctionCount::get_ReturnType()
extern "C"  int32_t XPathFunctionCount_get_ReturnType_m3213701230 (XPathFunctionCount_t4174407007 * __this, const RuntimeMethod* method)
{
	{
		return (int32_t)(0);
	}
}
// System.Boolean System.Xml.XPath.XPathFunctionCount::get_Peer()
extern "C"  bool XPathFunctionCount_get_Peer_m3512620895 (XPathFunctionCount_t4174407007 * __this, const RuntimeMethod* method)
{
	{
		Expression_t1452783009 * L_0 = __this->get_arg0_0();
		bool L_1 = VirtFuncInvoker0< bool >::Invoke(15 /* System.Boolean System.Xml.XPath.Expression::get_Peer() */, L_0);
		return L_1;
	}
}
// System.Object System.Xml.XPath.XPathFunctionCount::Evaluate(System.Xml.XPath.BaseIterator)
extern "C"  RuntimeObject * XPathFunctionCount_Evaluate_m3112142283 (XPathFunctionCount_t4174407007 * __this, BaseIterator_t4168896842 * ___iter0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XPathFunctionCount_Evaluate_m3112142283_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Expression_t1452783009 * L_0 = __this->get_arg0_0();
		BaseIterator_t4168896842 * L_1 = ___iter0;
		BaseIterator_t4168896842 * L_2 = VirtFuncInvoker1< BaseIterator_t4168896842 *, BaseIterator_t4168896842 * >::Invoke(14 /* System.Xml.XPath.BaseIterator System.Xml.XPath.Expression::EvaluateNodeSet(System.Xml.XPath.BaseIterator) */, L_0, L_1);
		int32_t L_3 = VirtFuncInvoker0< int32_t >::Invoke(6 /* System.Int32 System.Xml.XPath.XPathNodeIterator::get_Count() */, L_2);
		double L_4 = (((double)((double)L_3)));
		RuntimeObject * L_5 = Box(Double_t594665363_il2cpp_TypeInfo_var, &L_4);
		return L_5;
	}
}
// System.Boolean System.Xml.XPath.XPathFunctionCount::EvaluateBoolean(System.Xml.XPath.BaseIterator)
extern "C"  bool XPathFunctionCount_EvaluateBoolean_m2714004101 (XPathFunctionCount_t4174407007 * __this, BaseIterator_t4168896842 * ___iter0, const RuntimeMethod* method)
{
	{
		Expression_t1452783009 * L_0 = __this->get_arg0_0();
		BaseIterator_t4168896842 * L_1 = ___iter0;
		int32_t L_2 = VirtFuncInvoker1< int32_t, BaseIterator_t4168896842 * >::Invoke(5 /* System.Xml.XPath.XPathResultType System.Xml.XPath.Expression::GetReturnType(System.Xml.XPath.BaseIterator) */, L_0, L_1);
		if ((!(((uint32_t)L_2) == ((uint32_t)3))))
		{
			goto IL_001f;
		}
	}
	{
		Expression_t1452783009 * L_3 = __this->get_arg0_0();
		BaseIterator_t4168896842 * L_4 = ___iter0;
		bool L_5 = VirtFuncInvoker1< bool, BaseIterator_t4168896842 * >::Invoke(18 /* System.Boolean System.Xml.XPath.Expression::EvaluateBoolean(System.Xml.XPath.BaseIterator) */, L_3, L_4);
		return L_5;
	}

IL_001f:
	{
		Expression_t1452783009 * L_6 = __this->get_arg0_0();
		BaseIterator_t4168896842 * L_7 = ___iter0;
		BaseIterator_t4168896842 * L_8 = VirtFuncInvoker1< BaseIterator_t4168896842 *, BaseIterator_t4168896842 * >::Invoke(14 /* System.Xml.XPath.BaseIterator System.Xml.XPath.Expression::EvaluateNodeSet(System.Xml.XPath.BaseIterator) */, L_6, L_7);
		bool L_9 = VirtFuncInvoker0< bool >::Invoke(11 /* System.Boolean System.Xml.XPath.BaseIterator::MoveNext() */, L_8);
		return L_9;
	}
}
// System.String System.Xml.XPath.XPathFunctionCount::ToString()
extern "C"  String_t* XPathFunctionCount_ToString_m3421511805 (XPathFunctionCount_t4174407007 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XPathFunctionCount_ToString_m3421511805_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Expression_t1452783009 * L_0 = __this->get_arg0_0();
		String_t* L_1 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_0);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_2 = String_Concat_m3755062657(NULL /*static, unused*/, _stringLiteral2004168744, L_1, _stringLiteral3452614535, /*hidden argument*/NULL);
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
// System.Void System.Xml.XPath.XPathFunctionFalse::.ctor(System.Xml.XPath.FunctionArguments)
extern "C"  void XPathFunctionFalse__ctor_m2774750232 (XPathFunctionFalse_t1021066162 * __this, FunctionArguments_t3573450773 * ___args0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XPathFunctionFalse__ctor_m2774750232_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		FunctionArguments_t3573450773 * L_0 = ___args0;
		XPathBooleanFunction__ctor_m1039060572(__this, L_0, /*hidden argument*/NULL);
		FunctionArguments_t3573450773 * L_1 = ___args0;
		if (!L_1)
		{
			goto IL_0018;
		}
	}
	{
		XPathException_t2107611652 * L_2 = (XPathException_t2107611652 *)il2cpp_codegen_object_new(XPathException_t2107611652_il2cpp_TypeInfo_var);
		XPathException__ctor_m3226187054(L_2, _stringLiteral3380512006, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, NULL, XPathFunctionFalse__ctor_m2774750232_RuntimeMethod_var);
	}

IL_0018:
	{
		return;
	}
}
// System.Boolean System.Xml.XPath.XPathFunctionFalse::get_HasStaticValue()
extern "C"  bool XPathFunctionFalse_get_HasStaticValue_m1653364615 (XPathFunctionFalse_t1021066162 * __this, const RuntimeMethod* method)
{
	{
		return (bool)1;
	}
}
// System.Boolean System.Xml.XPath.XPathFunctionFalse::get_StaticValueAsBoolean()
extern "C"  bool XPathFunctionFalse_get_StaticValueAsBoolean_m2793686652 (XPathFunctionFalse_t1021066162 * __this, const RuntimeMethod* method)
{
	{
		return (bool)0;
	}
}
// System.Boolean System.Xml.XPath.XPathFunctionFalse::get_Peer()
extern "C"  bool XPathFunctionFalse_get_Peer_m3202272639 (XPathFunctionFalse_t1021066162 * __this, const RuntimeMethod* method)
{
	{
		return (bool)1;
	}
}
// System.Object System.Xml.XPath.XPathFunctionFalse::Evaluate(System.Xml.XPath.BaseIterator)
extern "C"  RuntimeObject * XPathFunctionFalse_Evaluate_m3397563611 (XPathFunctionFalse_t1021066162 * __this, BaseIterator_t4168896842 * ___iter0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XPathFunctionFalse_Evaluate_m3397563611_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		bool L_0 = ((bool)0);
		RuntimeObject * L_1 = Box(Boolean_t97287965_il2cpp_TypeInfo_var, &L_0);
		return L_1;
	}
}
// System.String System.Xml.XPath.XPathFunctionFalse::ToString()
extern "C"  String_t* XPathFunctionFalse_ToString_m1579023707 (XPathFunctionFalse_t1021066162 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XPathFunctionFalse_ToString_m1579023707_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		return _stringLiteral824284122;
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
// System.Void System.Xml.XPath.XPathFunctionFloor::.ctor(System.Xml.XPath.FunctionArguments)
extern "C"  void XPathFunctionFloor__ctor_m3054856969 (XPathFunctionFloor_t3617095014 * __this, FunctionArguments_t3573450773 * ___args0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XPathFunctionFloor__ctor_m3054856969_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		FunctionArguments_t3573450773 * L_0 = ___args0;
		XPathNumericFunction__ctor_m4265073059(__this, L_0, /*hidden argument*/NULL);
		FunctionArguments_t3573450773 * L_1 = ___args0;
		if (!L_1)
		{
			goto IL_0018;
		}
	}
	{
		FunctionArguments_t3573450773 * L_2 = ___args0;
		FunctionArguments_t3573450773 * L_3 = FunctionArguments_get_Tail_m3050077184(L_2, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_0023;
		}
	}

IL_0018:
	{
		XPathException_t2107611652 * L_4 = (XPathException_t2107611652 *)il2cpp_codegen_object_new(XPathException_t2107611652_il2cpp_TypeInfo_var);
		XPathException__ctor_m3226187054(L_4, _stringLiteral700017691, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, NULL, XPathFunctionFloor__ctor_m3054856969_RuntimeMethod_var);
	}

IL_0023:
	{
		FunctionArguments_t3573450773 * L_5 = ___args0;
		Expression_t1452783009 * L_6 = FunctionArguments_get_Arg_m248443681(L_5, /*hidden argument*/NULL);
		__this->set_arg0_0(L_6);
		return;
	}
}
// System.Boolean System.Xml.XPath.XPathFunctionFloor::get_HasStaticValue()
extern "C"  bool XPathFunctionFloor_get_HasStaticValue_m1029122800 (XPathFunctionFloor_t3617095014 * __this, const RuntimeMethod* method)
{
	{
		Expression_t1452783009 * L_0 = __this->get_arg0_0();
		bool L_1 = VirtFuncInvoker0< bool >::Invoke(7 /* System.Boolean System.Xml.XPath.Expression::get_HasStaticValue() */, L_0);
		return L_1;
	}
}
// System.Double System.Xml.XPath.XPathFunctionFloor::get_StaticValueAsNumber()
extern "C"  double XPathFunctionFloor_get_StaticValueAsNumber_m2807980648 (XPathFunctionFloor_t3617095014 * __this, const RuntimeMethod* method)
{
	double G_B3_0 = 0.0;
	{
		bool L_0 = VirtFuncInvoker0< bool >::Invoke(7 /* System.Boolean System.Xml.XPath.XPathFunctionFloor::get_HasStaticValue() */, __this);
		if (!L_0)
		{
			goto IL_0020;
		}
	}
	{
		Expression_t1452783009 * L_1 = __this->get_arg0_0();
		double L_2 = VirtFuncInvoker0< double >::Invoke(10 /* System.Double System.Xml.XPath.Expression::get_StaticValueAsNumber() */, L_1);
		double L_3 = floor(L_2);
		G_B3_0 = L_3;
		goto IL_0029;
	}

IL_0020:
	{
		G_B3_0 = (0.0);
	}

IL_0029:
	{
		return G_B3_0;
	}
}
// System.Boolean System.Xml.XPath.XPathFunctionFloor::get_Peer()
extern "C"  bool XPathFunctionFloor_get_Peer_m3421871058 (XPathFunctionFloor_t3617095014 * __this, const RuntimeMethod* method)
{
	{
		Expression_t1452783009 * L_0 = __this->get_arg0_0();
		bool L_1 = VirtFuncInvoker0< bool >::Invoke(15 /* System.Boolean System.Xml.XPath.Expression::get_Peer() */, L_0);
		return L_1;
	}
}
// System.Object System.Xml.XPath.XPathFunctionFloor::Evaluate(System.Xml.XPath.BaseIterator)
extern "C"  RuntimeObject * XPathFunctionFloor_Evaluate_m2151195456 (XPathFunctionFloor_t3617095014 * __this, BaseIterator_t4168896842 * ___iter0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XPathFunctionFloor_Evaluate_m2151195456_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Expression_t1452783009 * L_0 = __this->get_arg0_0();
		BaseIterator_t4168896842 * L_1 = ___iter0;
		double L_2 = VirtFuncInvoker1< double, BaseIterator_t4168896842 * >::Invoke(16 /* System.Double System.Xml.XPath.Expression::EvaluateNumber(System.Xml.XPath.BaseIterator) */, L_0, L_1);
		double L_3 = floor(L_2);
		double L_4 = L_3;
		RuntimeObject * L_5 = Box(Double_t594665363_il2cpp_TypeInfo_var, &L_4);
		return L_5;
	}
}
// System.String System.Xml.XPath.XPathFunctionFloor::ToString()
extern "C"  String_t* XPathFunctionFloor_ToString_m734499080 (XPathFunctionFloor_t3617095014 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XPathFunctionFloor_ToString_m734499080_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		StringU5BU5D_t1281789340* L_0 = ((StringU5BU5D_t1281789340*)SZArrayNew(StringU5BU5D_t1281789340_il2cpp_TypeInfo_var, (uint32_t)3));
		ArrayElementTypeCheck (L_0, _stringLiteral1192082829);
		(L_0)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteral1192082829);
		StringU5BU5D_t1281789340* L_1 = L_0;
		Expression_t1452783009 * L_2 = __this->get_arg0_0();
		String_t* L_3 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_2);
		ArrayElementTypeCheck (L_1, L_3);
		(L_1)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(1), (String_t*)L_3);
		StringU5BU5D_t1281789340* L_4 = L_1;
		ArrayElementTypeCheck (L_4, _stringLiteral3452614535);
		(L_4)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(2), (String_t*)_stringLiteral3452614535);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_5 = String_Concat_m1809518182(NULL /*static, unused*/, L_4, /*hidden argument*/NULL);
		return L_5;
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
// System.Void System.Xml.XPath.XPathFunctionId::.ctor(System.Xml.XPath.FunctionArguments)
extern "C"  void XPathFunctionId__ctor_m1323120206 (XPathFunctionId_t1670301333 * __this, FunctionArguments_t3573450773 * ___args0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XPathFunctionId__ctor_m1323120206_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		FunctionArguments_t3573450773 * L_0 = ___args0;
		XPathFunction__ctor_m3144973253(__this, L_0, /*hidden argument*/NULL);
		FunctionArguments_t3573450773 * L_1 = ___args0;
		if (!L_1)
		{
			goto IL_0018;
		}
	}
	{
		FunctionArguments_t3573450773 * L_2 = ___args0;
		FunctionArguments_t3573450773 * L_3 = FunctionArguments_get_Tail_m3050077184(L_2, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_0023;
		}
	}

IL_0018:
	{
		XPathException_t2107611652 * L_4 = (XPathException_t2107611652 *)il2cpp_codegen_object_new(XPathException_t2107611652_il2cpp_TypeInfo_var);
		XPathException__ctor_m3226187054(L_4, _stringLiteral3339079113, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, NULL, XPathFunctionId__ctor_m1323120206_RuntimeMethod_var);
	}

IL_0023:
	{
		FunctionArguments_t3573450773 * L_5 = ___args0;
		Expression_t1452783009 * L_6 = FunctionArguments_get_Arg_m248443681(L_5, /*hidden argument*/NULL);
		__this->set_arg0_0(L_6);
		return;
	}
}
// System.Void System.Xml.XPath.XPathFunctionId::.cctor()
extern "C"  void XPathFunctionId__cctor_m2442060195 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XPathFunctionId__cctor_m2442060195_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		CharU5BU5D_t3528271667* L_0 = ((CharU5BU5D_t3528271667*)SZArrayNew(CharU5BU5D_t3528271667_il2cpp_TypeInfo_var, (uint32_t)4));
		RuntimeFieldHandle_t1871169219  L_1 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3E_t3057255365____U24U24fieldU2D25_11_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_m3117905507(NULL /*static, unused*/, (RuntimeArray *)(RuntimeArray *)L_0, L_1, /*hidden argument*/NULL);
		((XPathFunctionId_t1670301333_StaticFields*)il2cpp_codegen_static_fields_for(XPathFunctionId_t1670301333_il2cpp_TypeInfo_var))->set_rgchWhitespace_1(L_0);
		return;
	}
}
// System.Xml.XPath.XPathResultType System.Xml.XPath.XPathFunctionId::get_ReturnType()
extern "C"  int32_t XPathFunctionId_get_ReturnType_m4251970908 (XPathFunctionId_t1670301333 * __this, const RuntimeMethod* method)
{
	{
		return (int32_t)(3);
	}
}
// System.Boolean System.Xml.XPath.XPathFunctionId::get_Peer()
extern "C"  bool XPathFunctionId_get_Peer_m2028652820 (XPathFunctionId_t1670301333 * __this, const RuntimeMethod* method)
{
	{
		Expression_t1452783009 * L_0 = __this->get_arg0_0();
		bool L_1 = VirtFuncInvoker0< bool >::Invoke(15 /* System.Boolean System.Xml.XPath.Expression::get_Peer() */, L_0);
		return L_1;
	}
}
// System.Object System.Xml.XPath.XPathFunctionId::Evaluate(System.Xml.XPath.BaseIterator)
extern "C"  RuntimeObject * XPathFunctionId_Evaluate_m1064534490 (XPathFunctionId_t1670301333 * __this, BaseIterator_t4168896842 * ___iter0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XPathFunctionId_Evaluate_m1064534490_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	RuntimeObject * V_1 = NULL;
	XPathNodeIterator_t3667290188 * V_2 = NULL;
	XPathNavigator_t787956054 * V_3 = NULL;
	ArrayList_t2718874744 * V_4 = NULL;
	StringU5BU5D_t1281789340* V_5 = NULL;
	int32_t V_6 = 0;
	{
		Expression_t1452783009 * L_0 = __this->get_arg0_0();
		BaseIterator_t4168896842 * L_1 = ___iter0;
		RuntimeObject * L_2 = VirtFuncInvoker1< RuntimeObject *, BaseIterator_t4168896842 * >::Invoke(13 /* System.Object System.Xml.XPath.Expression::Evaluate(System.Xml.XPath.BaseIterator) */, L_0, L_1);
		V_1 = L_2;
		RuntimeObject * L_3 = V_1;
		V_2 = ((XPathNodeIterator_t3667290188 *)IsInstClass((RuntimeObject*)L_3, XPathNodeIterator_t3667290188_il2cpp_TypeInfo_var));
		XPathNodeIterator_t3667290188 * L_4 = V_2;
		if (!L_4)
		{
			goto IL_004c;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_5 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_2();
		V_0 = L_5;
		goto IL_003c;
	}

IL_0025:
	{
		String_t* L_6 = V_0;
		XPathNodeIterator_t3667290188 * L_7 = V_2;
		XPathNavigator_t787956054 * L_8 = VirtFuncInvoker0< XPathNavigator_t787956054 * >::Invoke(7 /* System.Xml.XPath.XPathNavigator System.Xml.XPath.XPathNodeIterator::get_Current() */, L_7);
		String_t* L_9 = VirtFuncInvoker0< String_t* >::Invoke(4 /* System.String System.Xml.XPath.XPathItem::get_Value() */, L_8);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_10 = String_Concat_m3755062657(NULL /*static, unused*/, L_6, L_9, _stringLiteral3452614528, /*hidden argument*/NULL);
		V_0 = L_10;
	}

IL_003c:
	{
		XPathNodeIterator_t3667290188 * L_11 = V_2;
		bool L_12 = VirtFuncInvoker0< bool >::Invoke(11 /* System.Boolean System.Xml.XPath.XPathNodeIterator::MoveNext() */, L_11);
		if (L_12)
		{
			goto IL_0025;
		}
	}
	{
		goto IL_0053;
	}

IL_004c:
	{
		RuntimeObject * L_13 = V_1;
		String_t* L_14 = XPathFunctions_ToString_m4087755365(NULL /*static, unused*/, L_13, /*hidden argument*/NULL);
		V_0 = L_14;
	}

IL_0053:
	{
		BaseIterator_t4168896842 * L_15 = ___iter0;
		XPathNavigator_t787956054 * L_16 = VirtFuncInvoker0< XPathNavigator_t787956054 * >::Invoke(7 /* System.Xml.XPath.XPathNavigator System.Xml.XPath.XPathNodeIterator::get_Current() */, L_15);
		XPathNavigator_t787956054 * L_17 = VirtFuncInvoker0< XPathNavigator_t787956054 * >::Invoke(14 /* System.Xml.XPath.XPathNavigator System.Xml.XPath.XPathNavigator::Clone() */, L_16);
		V_3 = L_17;
		ArrayList_t2718874744 * L_18 = (ArrayList_t2718874744 *)il2cpp_codegen_object_new(ArrayList_t2718874744_il2cpp_TypeInfo_var);
		ArrayList__ctor_m4254721275(L_18, /*hidden argument*/NULL);
		V_4 = L_18;
		String_t* L_19 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(XPathFunctionId_t1670301333_il2cpp_TypeInfo_var);
		CharU5BU5D_t3528271667* L_20 = ((XPathFunctionId_t1670301333_StaticFields*)il2cpp_codegen_static_fields_for(XPathFunctionId_t1670301333_il2cpp_TypeInfo_var))->get_rgchWhitespace_1();
		StringU5BU5D_t1281789340* L_21 = String_Split_m3646115398(L_19, L_20, /*hidden argument*/NULL);
		V_5 = L_21;
		V_6 = 0;
		goto IL_009f;
	}

IL_007b:
	{
		XPathNavigator_t787956054 * L_22 = V_3;
		StringU5BU5D_t1281789340* L_23 = V_5;
		int32_t L_24 = V_6;
		int32_t L_25 = L_24;
		String_t* L_26 = (L_23)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_25));
		bool L_27 = VirtFuncInvoker1< bool, String_t* >::Invoke(27 /* System.Boolean System.Xml.XPath.XPathNavigator::MoveToId(System.String) */, L_22, L_26);
		if (!L_27)
		{
			goto IL_0099;
		}
	}
	{
		ArrayList_t2718874744 * L_28 = V_4;
		XPathNavigator_t787956054 * L_29 = V_3;
		XPathNavigator_t787956054 * L_30 = VirtFuncInvoker0< XPathNavigator_t787956054 * >::Invoke(14 /* System.Xml.XPath.XPathNavigator System.Xml.XPath.XPathNavigator::Clone() */, L_29);
		VirtFuncInvoker1< int32_t, RuntimeObject * >::Invoke(30 /* System.Int32 System.Collections.ArrayList::Add(System.Object) */, L_28, L_30);
	}

IL_0099:
	{
		int32_t L_31 = V_6;
		V_6 = ((int32_t)il2cpp_codegen_add((int32_t)L_31, (int32_t)1));
	}

IL_009f:
	{
		int32_t L_32 = V_6;
		StringU5BU5D_t1281789340* L_33 = V_5;
		if ((((int32_t)L_32) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_33)->max_length)))))))
		{
			goto IL_007b;
		}
	}
	{
		ArrayList_t2718874744 * L_34 = V_4;
		IL2CPP_RUNTIME_CLASS_INIT(XPathNavigatorComparer_t2421573191_il2cpp_TypeInfo_var);
		XPathNavigatorComparer_t2421573191 * L_35 = ((XPathNavigatorComparer_t2421573191_StaticFields*)il2cpp_codegen_static_fields_for(XPathNavigatorComparer_t2421573191_il2cpp_TypeInfo_var))->get_Instance_0();
		VirtActionInvoker1< RuntimeObject* >::Invoke(46 /* System.Void System.Collections.ArrayList::Sort(System.Collections.IComparer) */, L_34, L_35);
		BaseIterator_t4168896842 * L_36 = ___iter0;
		ArrayList_t2718874744 * L_37 = V_4;
		ListIterator_t3066609410 * L_38 = (ListIterator_t3066609410 *)il2cpp_codegen_object_new(ListIterator_t3066609410_il2cpp_TypeInfo_var);
		ListIterator__ctor_m2616163549(L_38, L_36, L_37, /*hidden argument*/NULL);
		return L_38;
	}
}
// System.String System.Xml.XPath.XPathFunctionId::ToString()
extern "C"  String_t* XPathFunctionId_ToString_m618647469 (XPathFunctionId_t1670301333 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XPathFunctionId_ToString_m618647469_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Expression_t1452783009 * L_0 = __this->get_arg0_0();
		String_t* L_1 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_0);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_2 = String_Concat_m3755062657(NULL /*static, unused*/, _stringLiteral3433757753, L_1, _stringLiteral3452614535, /*hidden argument*/NULL);
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
// System.Void System.Xml.XPath.XPathFunctionLang::.ctor(System.Xml.XPath.FunctionArguments)
extern "C"  void XPathFunctionLang__ctor_m322832727 (XPathFunctionLang_t242671679 * __this, FunctionArguments_t3573450773 * ___args0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XPathFunctionLang__ctor_m322832727_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		FunctionArguments_t3573450773 * L_0 = ___args0;
		XPathFunction__ctor_m3144973253(__this, L_0, /*hidden argument*/NULL);
		FunctionArguments_t3573450773 * L_1 = ___args0;
		if (!L_1)
		{
			goto IL_0018;
		}
	}
	{
		FunctionArguments_t3573450773 * L_2 = ___args0;
		FunctionArguments_t3573450773 * L_3 = FunctionArguments_get_Tail_m3050077184(L_2, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_0023;
		}
	}

IL_0018:
	{
		XPathException_t2107611652 * L_4 = (XPathException_t2107611652 *)il2cpp_codegen_object_new(XPathException_t2107611652_il2cpp_TypeInfo_var);
		XPathException__ctor_m3226187054(L_4, _stringLiteral1394669554, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, NULL, XPathFunctionLang__ctor_m322832727_RuntimeMethod_var);
	}

IL_0023:
	{
		FunctionArguments_t3573450773 * L_5 = ___args0;
		Expression_t1452783009 * L_6 = FunctionArguments_get_Arg_m248443681(L_5, /*hidden argument*/NULL);
		__this->set_arg0_0(L_6);
		return;
	}
}
// System.Xml.XPath.XPathResultType System.Xml.XPath.XPathFunctionLang::get_ReturnType()
extern "C"  int32_t XPathFunctionLang_get_ReturnType_m3797304779 (XPathFunctionLang_t242671679 * __this, const RuntimeMethod* method)
{
	{
		return (int32_t)(2);
	}
}
// System.Boolean System.Xml.XPath.XPathFunctionLang::get_Peer()
extern "C"  bool XPathFunctionLang_get_Peer_m2876074384 (XPathFunctionLang_t242671679 * __this, const RuntimeMethod* method)
{
	{
		Expression_t1452783009 * L_0 = __this->get_arg0_0();
		bool L_1 = VirtFuncInvoker0< bool >::Invoke(15 /* System.Boolean System.Xml.XPath.Expression::get_Peer() */, L_0);
		return L_1;
	}
}
// System.Object System.Xml.XPath.XPathFunctionLang::Evaluate(System.Xml.XPath.BaseIterator)
extern "C"  RuntimeObject * XPathFunctionLang_Evaluate_m2296780426 (XPathFunctionLang_t242671679 * __this, BaseIterator_t4168896842 * ___iter0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XPathFunctionLang_Evaluate_m2296780426_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		BaseIterator_t4168896842 * L_0 = ___iter0;
		bool L_1 = VirtFuncInvoker1< bool, BaseIterator_t4168896842 * >::Invoke(18 /* System.Boolean System.Xml.XPath.XPathFunctionLang::EvaluateBoolean(System.Xml.XPath.BaseIterator) */, __this, L_0);
		bool L_2 = L_1;
		RuntimeObject * L_3 = Box(Boolean_t97287965_il2cpp_TypeInfo_var, &L_2);
		return L_3;
	}
}
// System.Boolean System.Xml.XPath.XPathFunctionLang::EvaluateBoolean(System.Xml.XPath.BaseIterator)
extern "C"  bool XPathFunctionLang_EvaluateBoolean_m3046588839 (XPathFunctionLang_t242671679 * __this, BaseIterator_t4168896842 * ___iter0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XPathFunctionLang_EvaluateBoolean_m3046588839_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	String_t* V_1 = NULL;
	int32_t G_B3_0 = 0;
	{
		Expression_t1452783009 * L_0 = __this->get_arg0_0();
		BaseIterator_t4168896842 * L_1 = ___iter0;
		String_t* L_2 = VirtFuncInvoker1< String_t*, BaseIterator_t4168896842 * >::Invoke(17 /* System.String System.Xml.XPath.Expression::EvaluateString(System.Xml.XPath.BaseIterator) */, L_0, L_1);
		IL2CPP_RUNTIME_CLASS_INIT(CultureInfo_t4157843068_il2cpp_TypeInfo_var);
		CultureInfo_t4157843068 * L_3 = CultureInfo_get_InvariantCulture_m3532445182(NULL /*static, unused*/, /*hidden argument*/NULL);
		String_t* L_4 = String_ToLower_m3490221821(L_2, L_3, /*hidden argument*/NULL);
		V_0 = L_4;
		BaseIterator_t4168896842 * L_5 = ___iter0;
		XPathNavigator_t787956054 * L_6 = VirtFuncInvoker0< XPathNavigator_t787956054 * >::Invoke(7 /* System.Xml.XPath.XPathNavigator System.Xml.XPath.XPathNodeIterator::get_Current() */, L_5);
		String_t* L_7 = VirtFuncInvoker0< String_t* >::Invoke(13 /* System.String System.Xml.XPath.XPathNavigator::get_XmlLang() */, L_6);
		CultureInfo_t4157843068 * L_8 = CultureInfo_get_InvariantCulture_m3532445182(NULL /*static, unused*/, /*hidden argument*/NULL);
		String_t* L_9 = String_ToLower_m3490221821(L_7, L_8, /*hidden argument*/NULL);
		V_1 = L_9;
		String_t* L_10 = V_0;
		String_t* L_11 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_12 = String_op_Equality_m920492651(NULL /*static, unused*/, L_10, L_11, /*hidden argument*/NULL);
		if (L_12)
		{
			goto IL_0054;
		}
	}
	{
		String_t* L_13 = V_0;
		String_t* L_14 = V_1;
		CharU5BU5D_t3528271667* L_15 = ((CharU5BU5D_t3528271667*)SZArrayNew(CharU5BU5D_t3528271667_il2cpp_TypeInfo_var, (uint32_t)1));
		(L_15)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (Il2CppChar)((int32_t)45));
		StringU5BU5D_t1281789340* L_16 = String_Split_m3646115398(L_14, L_15, /*hidden argument*/NULL);
		int32_t L_17 = 0;
		String_t* L_18 = (L_16)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_17));
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_19 = String_op_Equality_m920492651(NULL /*static, unused*/, L_13, L_18, /*hidden argument*/NULL);
		G_B3_0 = ((int32_t)(L_19));
		goto IL_0055;
	}

IL_0054:
	{
		G_B3_0 = 1;
	}

IL_0055:
	{
		return (bool)G_B3_0;
	}
}
// System.String System.Xml.XPath.XPathFunctionLang::ToString()
extern "C"  String_t* XPathFunctionLang_ToString_m3645362443 (XPathFunctionLang_t242671679 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XPathFunctionLang_ToString_m3645362443_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		StringU5BU5D_t1281789340* L_0 = ((StringU5BU5D_t1281789340*)SZArrayNew(StringU5BU5D_t1281789340_il2cpp_TypeInfo_var, (uint32_t)3));
		ArrayElementTypeCheck (L_0, _stringLiteral1215384150);
		(L_0)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteral1215384150);
		StringU5BU5D_t1281789340* L_1 = L_0;
		Expression_t1452783009 * L_2 = __this->get_arg0_0();
		String_t* L_3 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_2);
		ArrayElementTypeCheck (L_1, L_3);
		(L_1)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(1), (String_t*)L_3);
		StringU5BU5D_t1281789340* L_4 = L_1;
		ArrayElementTypeCheck (L_4, _stringLiteral3452614535);
		(L_4)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(2), (String_t*)_stringLiteral3452614535);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_5 = String_Concat_m1809518182(NULL /*static, unused*/, L_4, /*hidden argument*/NULL);
		return L_5;
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
// System.Void System.Xml.XPath.XPathFunctionLast::.ctor(System.Xml.XPath.FunctionArguments)
extern "C"  void XPathFunctionLast__ctor_m3671084286 (XPathFunctionLast_t241688620 * __this, FunctionArguments_t3573450773 * ___args0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XPathFunctionLast__ctor_m3671084286_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		FunctionArguments_t3573450773 * L_0 = ___args0;
		XPathFunction__ctor_m3144973253(__this, L_0, /*hidden argument*/NULL);
		FunctionArguments_t3573450773 * L_1 = ___args0;
		if (!L_1)
		{
			goto IL_0018;
		}
	}
	{
		XPathException_t2107611652 * L_2 = (XPathException_t2107611652 *)il2cpp_codegen_object_new(XPathException_t2107611652_il2cpp_TypeInfo_var);
		XPathException__ctor_m3226187054(L_2, _stringLiteral4051814725, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, NULL, XPathFunctionLast__ctor_m3671084286_RuntimeMethod_var);
	}

IL_0018:
	{
		return;
	}
}
// System.Xml.XPath.XPathResultType System.Xml.XPath.XPathFunctionLast::get_ReturnType()
extern "C"  int32_t XPathFunctionLast_get_ReturnType_m4034673037 (XPathFunctionLast_t241688620 * __this, const RuntimeMethod* method)
{
	{
		return (int32_t)(0);
	}
}
// System.Boolean System.Xml.XPath.XPathFunctionLast::get_Peer()
extern "C"  bool XPathFunctionLast_get_Peer_m335459847 (XPathFunctionLast_t241688620 * __this, const RuntimeMethod* method)
{
	{
		return (bool)1;
	}
}
// System.Object System.Xml.XPath.XPathFunctionLast::Evaluate(System.Xml.XPath.BaseIterator)
extern "C"  RuntimeObject * XPathFunctionLast_Evaluate_m2799614158 (XPathFunctionLast_t241688620 * __this, BaseIterator_t4168896842 * ___iter0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XPathFunctionLast_Evaluate_m2799614158_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		BaseIterator_t4168896842 * L_0 = ___iter0;
		int32_t L_1 = VirtFuncInvoker0< int32_t >::Invoke(6 /* System.Int32 System.Xml.XPath.XPathNodeIterator::get_Count() */, L_0);
		double L_2 = (((double)((double)L_1)));
		RuntimeObject * L_3 = Box(Double_t594665363_il2cpp_TypeInfo_var, &L_2);
		return L_3;
	}
}
// System.String System.Xml.XPath.XPathFunctionLast::ToString()
extern "C"  String_t* XPathFunctionLast_ToString_m2613003041 (XPathFunctionLast_t241688620 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XPathFunctionLast_ToString_m2613003041_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		return _stringLiteral2748663725;
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
// System.Void System.Xml.XPath.XPathFunctionLocalName::.ctor(System.Xml.XPath.FunctionArguments)
extern "C"  void XPathFunctionLocalName__ctor_m3048811622 (XPathFunctionLocalName_t1807446049 * __this, FunctionArguments_t3573450773 * ___args0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XPathFunctionLocalName__ctor_m3048811622_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		FunctionArguments_t3573450773 * L_0 = ___args0;
		XPathFunction__ctor_m3144973253(__this, L_0, /*hidden argument*/NULL);
		FunctionArguments_t3573450773 * L_1 = ___args0;
		if (!L_1)
		{
			goto IL_002f;
		}
	}
	{
		FunctionArguments_t3573450773 * L_2 = ___args0;
		Expression_t1452783009 * L_3 = FunctionArguments_get_Arg_m248443681(L_2, /*hidden argument*/NULL);
		__this->set_arg0_0(L_3);
		FunctionArguments_t3573450773 * L_4 = ___args0;
		FunctionArguments_t3573450773 * L_5 = FunctionArguments_get_Tail_m3050077184(L_4, /*hidden argument*/NULL);
		if (!L_5)
		{
			goto IL_002f;
		}
	}
	{
		XPathException_t2107611652 * L_6 = (XPathException_t2107611652 *)il2cpp_codegen_object_new(XPathException_t2107611652_il2cpp_TypeInfo_var);
		XPathException__ctor_m3226187054(L_6, _stringLiteral651562640, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_6, NULL, XPathFunctionLocalName__ctor_m3048811622_RuntimeMethod_var);
	}

IL_002f:
	{
		return;
	}
}
// System.Xml.XPath.XPathResultType System.Xml.XPath.XPathFunctionLocalName::get_ReturnType()
extern "C"  int32_t XPathFunctionLocalName_get_ReturnType_m3953280789 (XPathFunctionLocalName_t1807446049 * __this, const RuntimeMethod* method)
{
	{
		return (int32_t)(1);
	}
}
// System.Boolean System.Xml.XPath.XPathFunctionLocalName::get_Peer()
extern "C"  bool XPathFunctionLocalName_get_Peer_m3040990304 (XPathFunctionLocalName_t1807446049 * __this, const RuntimeMethod* method)
{
	int32_t G_B3_0 = 0;
	{
		Expression_t1452783009 * L_0 = __this->get_arg0_0();
		if (!L_0)
		{
			goto IL_001b;
		}
	}
	{
		Expression_t1452783009 * L_1 = __this->get_arg0_0();
		bool L_2 = VirtFuncInvoker0< bool >::Invoke(15 /* System.Boolean System.Xml.XPath.Expression::get_Peer() */, L_1);
		G_B3_0 = ((int32_t)(L_2));
		goto IL_001c;
	}

IL_001b:
	{
		G_B3_0 = 1;
	}

IL_001c:
	{
		return (bool)G_B3_0;
	}
}
// System.Object System.Xml.XPath.XPathFunctionLocalName::Evaluate(System.Xml.XPath.BaseIterator)
extern "C"  RuntimeObject * XPathFunctionLocalName_Evaluate_m1552558236 (XPathFunctionLocalName_t1807446049 * __this, BaseIterator_t4168896842 * ___iter0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XPathFunctionLocalName_Evaluate_m1552558236_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	BaseIterator_t4168896842 * V_0 = NULL;
	{
		Expression_t1452783009 * L_0 = __this->get_arg0_0();
		if (L_0)
		{
			goto IL_0017;
		}
	}
	{
		BaseIterator_t4168896842 * L_1 = ___iter0;
		XPathNavigator_t787956054 * L_2 = VirtFuncInvoker0< XPathNavigator_t787956054 * >::Invoke(7 /* System.Xml.XPath.XPathNavigator System.Xml.XPath.XPathNodeIterator::get_Current() */, L_1);
		String_t* L_3 = VirtFuncInvoker0< String_t* >::Invoke(9 /* System.String System.Xml.XPath.XPathNavigator::get_LocalName() */, L_2);
		return L_3;
	}

IL_0017:
	{
		Expression_t1452783009 * L_4 = __this->get_arg0_0();
		BaseIterator_t4168896842 * L_5 = ___iter0;
		BaseIterator_t4168896842 * L_6 = VirtFuncInvoker1< BaseIterator_t4168896842 *, BaseIterator_t4168896842 * >::Invoke(14 /* System.Xml.XPath.BaseIterator System.Xml.XPath.Expression::EvaluateNodeSet(System.Xml.XPath.BaseIterator) */, L_4, L_5);
		V_0 = L_6;
		BaseIterator_t4168896842 * L_7 = V_0;
		if (!L_7)
		{
			goto IL_0035;
		}
	}
	{
		BaseIterator_t4168896842 * L_8 = V_0;
		bool L_9 = VirtFuncInvoker0< bool >::Invoke(11 /* System.Boolean System.Xml.XPath.BaseIterator::MoveNext() */, L_8);
		if (L_9)
		{
			goto IL_003b;
		}
	}

IL_0035:
	{
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_10 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_2();
		return L_10;
	}

IL_003b:
	{
		BaseIterator_t4168896842 * L_11 = V_0;
		XPathNavigator_t787956054 * L_12 = VirtFuncInvoker0< XPathNavigator_t787956054 * >::Invoke(7 /* System.Xml.XPath.XPathNavigator System.Xml.XPath.XPathNodeIterator::get_Current() */, L_11);
		String_t* L_13 = VirtFuncInvoker0< String_t* >::Invoke(9 /* System.String System.Xml.XPath.XPathNavigator::get_LocalName() */, L_12);
		return L_13;
	}
}
// System.String System.Xml.XPath.XPathFunctionLocalName::ToString()
extern "C"  String_t* XPathFunctionLocalName_ToString_m1679557188 (XPathFunctionLocalName_t1807446049 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XPathFunctionLocalName_ToString_m1679557188_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Expression_t1452783009 * L_0 = __this->get_arg0_0();
		String_t* L_1 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_0);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_2 = String_Concat_m3755062657(NULL /*static, unused*/, _stringLiteral3768247012, L_1, _stringLiteral3452614535, /*hidden argument*/NULL);
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
// System.Void System.Xml.XPath.XPathFunctionName::.ctor(System.Xml.XPath.FunctionArguments)
extern "C"  void XPathFunctionName__ctor_m4109215838 (XPathFunctionName_t1405602168 * __this, FunctionArguments_t3573450773 * ___args0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XPathFunctionName__ctor_m4109215838_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		FunctionArguments_t3573450773 * L_0 = ___args0;
		XPathFunction__ctor_m3144973253(__this, L_0, /*hidden argument*/NULL);
		FunctionArguments_t3573450773 * L_1 = ___args0;
		if (!L_1)
		{
			goto IL_002f;
		}
	}
	{
		FunctionArguments_t3573450773 * L_2 = ___args0;
		Expression_t1452783009 * L_3 = FunctionArguments_get_Arg_m248443681(L_2, /*hidden argument*/NULL);
		__this->set_arg0_0(L_3);
		FunctionArguments_t3573450773 * L_4 = ___args0;
		FunctionArguments_t3573450773 * L_5 = FunctionArguments_get_Tail_m3050077184(L_4, /*hidden argument*/NULL);
		if (!L_5)
		{
			goto IL_002f;
		}
	}
	{
		XPathException_t2107611652 * L_6 = (XPathException_t2107611652 *)il2cpp_codegen_object_new(XPathException_t2107611652_il2cpp_TypeInfo_var);
		XPathException__ctor_m3226187054(L_6, _stringLiteral1942329497, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_6, NULL, XPathFunctionName__ctor_m4109215838_RuntimeMethod_var);
	}

IL_002f:
	{
		return;
	}
}
// System.Xml.XPath.XPathResultType System.Xml.XPath.XPathFunctionName::get_ReturnType()
extern "C"  int32_t XPathFunctionName_get_ReturnType_m991153433 (XPathFunctionName_t1405602168 * __this, const RuntimeMethod* method)
{
	{
		return (int32_t)(1);
	}
}
// System.Boolean System.Xml.XPath.XPathFunctionName::get_Peer()
extern "C"  bool XPathFunctionName_get_Peer_m1556286596 (XPathFunctionName_t1405602168 * __this, const RuntimeMethod* method)
{
	int32_t G_B3_0 = 0;
	{
		Expression_t1452783009 * L_0 = __this->get_arg0_0();
		if (!L_0)
		{
			goto IL_001b;
		}
	}
	{
		Expression_t1452783009 * L_1 = __this->get_arg0_0();
		bool L_2 = VirtFuncInvoker0< bool >::Invoke(15 /* System.Boolean System.Xml.XPath.Expression::get_Peer() */, L_1);
		G_B3_0 = ((int32_t)(L_2));
		goto IL_001c;
	}

IL_001b:
	{
		G_B3_0 = 1;
	}

IL_001c:
	{
		return (bool)G_B3_0;
	}
}
// System.Object System.Xml.XPath.XPathFunctionName::Evaluate(System.Xml.XPath.BaseIterator)
extern "C"  RuntimeObject * XPathFunctionName_Evaluate_m2337717151 (XPathFunctionName_t1405602168 * __this, BaseIterator_t4168896842 * ___iter0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XPathFunctionName_Evaluate_m2337717151_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	BaseIterator_t4168896842 * V_0 = NULL;
	{
		Expression_t1452783009 * L_0 = __this->get_arg0_0();
		if (L_0)
		{
			goto IL_0017;
		}
	}
	{
		BaseIterator_t4168896842 * L_1 = ___iter0;
		XPathNavigator_t787956054 * L_2 = VirtFuncInvoker0< XPathNavigator_t787956054 * >::Invoke(7 /* System.Xml.XPath.XPathNavigator System.Xml.XPath.XPathNodeIterator::get_Current() */, L_1);
		String_t* L_3 = VirtFuncInvoker0< String_t* >::Invoke(10 /* System.String System.Xml.XPath.XPathNavigator::get_Name() */, L_2);
		return L_3;
	}

IL_0017:
	{
		Expression_t1452783009 * L_4 = __this->get_arg0_0();
		BaseIterator_t4168896842 * L_5 = ___iter0;
		BaseIterator_t4168896842 * L_6 = VirtFuncInvoker1< BaseIterator_t4168896842 *, BaseIterator_t4168896842 * >::Invoke(14 /* System.Xml.XPath.BaseIterator System.Xml.XPath.Expression::EvaluateNodeSet(System.Xml.XPath.BaseIterator) */, L_4, L_5);
		V_0 = L_6;
		BaseIterator_t4168896842 * L_7 = V_0;
		if (!L_7)
		{
			goto IL_0035;
		}
	}
	{
		BaseIterator_t4168896842 * L_8 = V_0;
		bool L_9 = VirtFuncInvoker0< bool >::Invoke(11 /* System.Boolean System.Xml.XPath.BaseIterator::MoveNext() */, L_8);
		if (L_9)
		{
			goto IL_003b;
		}
	}

IL_0035:
	{
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_10 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_2();
		return L_10;
	}

IL_003b:
	{
		BaseIterator_t4168896842 * L_11 = V_0;
		XPathNavigator_t787956054 * L_12 = VirtFuncInvoker0< XPathNavigator_t787956054 * >::Invoke(7 /* System.Xml.XPath.XPathNavigator System.Xml.XPath.XPathNodeIterator::get_Current() */, L_11);
		String_t* L_13 = VirtFuncInvoker0< String_t* >::Invoke(10 /* System.String System.Xml.XPath.XPathNavigator::get_Name() */, L_12);
		return L_13;
	}
}
// System.String System.Xml.XPath.XPathFunctionName::ToString()
extern "C"  String_t* XPathFunctionName_ToString_m3643370704 (XPathFunctionName_t1405602168 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XPathFunctionName_ToString_m3643370704_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	String_t* G_B2_0 = NULL;
	String_t* G_B1_0 = NULL;
	String_t* G_B3_0 = NULL;
	String_t* G_B3_1 = NULL;
	{
		Expression_t1452783009 * L_0 = __this->get_arg0_0();
		G_B1_0 = _stringLiteral3163805097;
		if (!L_0)
		{
			G_B2_0 = _stringLiteral3163805097;
			goto IL_0020;
		}
	}
	{
		Expression_t1452783009 * L_1 = __this->get_arg0_0();
		String_t* L_2 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_1);
		G_B3_0 = L_2;
		G_B3_1 = G_B1_0;
		goto IL_0025;
	}

IL_0020:
	{
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_3 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_2();
		G_B3_0 = L_3;
		G_B3_1 = G_B2_0;
	}

IL_0025:
	{
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_4 = String_Concat_m3755062657(NULL /*static, unused*/, G_B3_1, G_B3_0, _stringLiteral3452614535, /*hidden argument*/NULL);
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
// System.Void System.Xml.XPath.XPathFunctionNamespaceUri::.ctor(System.Xml.XPath.FunctionArguments)
extern "C"  void XPathFunctionNamespaceUri__ctor_m3651514132 (XPathFunctionNamespaceUri_t4077891083 * __this, FunctionArguments_t3573450773 * ___args0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XPathFunctionNamespaceUri__ctor_m3651514132_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		FunctionArguments_t3573450773 * L_0 = ___args0;
		XPathFunction__ctor_m3144973253(__this, L_0, /*hidden argument*/NULL);
		FunctionArguments_t3573450773 * L_1 = ___args0;
		if (!L_1)
		{
			goto IL_002f;
		}
	}
	{
		FunctionArguments_t3573450773 * L_2 = ___args0;
		Expression_t1452783009 * L_3 = FunctionArguments_get_Arg_m248443681(L_2, /*hidden argument*/NULL);
		__this->set_arg0_0(L_3);
		FunctionArguments_t3573450773 * L_4 = ___args0;
		FunctionArguments_t3573450773 * L_5 = FunctionArguments_get_Tail_m3050077184(L_4, /*hidden argument*/NULL);
		if (!L_5)
		{
			goto IL_002f;
		}
	}
	{
		XPathException_t2107611652 * L_6 = (XPathException_t2107611652 *)il2cpp_codegen_object_new(XPathException_t2107611652_il2cpp_TypeInfo_var);
		XPathException__ctor_m3226187054(L_6, _stringLiteral971094376, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_6, NULL, XPathFunctionNamespaceUri__ctor_m3651514132_RuntimeMethod_var);
	}

IL_002f:
	{
		return;
	}
}
// System.Boolean System.Xml.XPath.XPathFunctionNamespaceUri::get_Peer()
extern "C"  bool XPathFunctionNamespaceUri_get_Peer_m811479241 (XPathFunctionNamespaceUri_t4077891083 * __this, const RuntimeMethod* method)
{
	int32_t G_B3_0 = 0;
	{
		Expression_t1452783009 * L_0 = __this->get_arg0_0();
		if (!L_0)
		{
			goto IL_001b;
		}
	}
	{
		Expression_t1452783009 * L_1 = __this->get_arg0_0();
		bool L_2 = VirtFuncInvoker0< bool >::Invoke(15 /* System.Boolean System.Xml.XPath.Expression::get_Peer() */, L_1);
		G_B3_0 = ((int32_t)(L_2));
		goto IL_001c;
	}

IL_001b:
	{
		G_B3_0 = 1;
	}

IL_001c:
	{
		return (bool)G_B3_0;
	}
}
// System.Xml.XPath.XPathResultType System.Xml.XPath.XPathFunctionNamespaceUri::get_ReturnType()
extern "C"  int32_t XPathFunctionNamespaceUri_get_ReturnType_m4193964791 (XPathFunctionNamespaceUri_t4077891083 * __this, const RuntimeMethod* method)
{
	{
		return (int32_t)(1);
	}
}
// System.Object System.Xml.XPath.XPathFunctionNamespaceUri::Evaluate(System.Xml.XPath.BaseIterator)
extern "C"  RuntimeObject * XPathFunctionNamespaceUri_Evaluate_m2542015761 (XPathFunctionNamespaceUri_t4077891083 * __this, BaseIterator_t4168896842 * ___iter0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XPathFunctionNamespaceUri_Evaluate_m2542015761_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	BaseIterator_t4168896842 * V_0 = NULL;
	{
		Expression_t1452783009 * L_0 = __this->get_arg0_0();
		if (L_0)
		{
			goto IL_0017;
		}
	}
	{
		BaseIterator_t4168896842 * L_1 = ___iter0;
		XPathNavigator_t787956054 * L_2 = VirtFuncInvoker0< XPathNavigator_t787956054 * >::Invoke(7 /* System.Xml.XPath.XPathNavigator System.Xml.XPath.XPathNodeIterator::get_Current() */, L_1);
		String_t* L_3 = VirtFuncInvoker0< String_t* >::Invoke(11 /* System.String System.Xml.XPath.XPathNavigator::get_NamespaceURI() */, L_2);
		return L_3;
	}

IL_0017:
	{
		Expression_t1452783009 * L_4 = __this->get_arg0_0();
		BaseIterator_t4168896842 * L_5 = ___iter0;
		BaseIterator_t4168896842 * L_6 = VirtFuncInvoker1< BaseIterator_t4168896842 *, BaseIterator_t4168896842 * >::Invoke(14 /* System.Xml.XPath.BaseIterator System.Xml.XPath.Expression::EvaluateNodeSet(System.Xml.XPath.BaseIterator) */, L_4, L_5);
		V_0 = L_6;
		BaseIterator_t4168896842 * L_7 = V_0;
		if (!L_7)
		{
			goto IL_0035;
		}
	}
	{
		BaseIterator_t4168896842 * L_8 = V_0;
		bool L_9 = VirtFuncInvoker0< bool >::Invoke(11 /* System.Boolean System.Xml.XPath.BaseIterator::MoveNext() */, L_8);
		if (L_9)
		{
			goto IL_003b;
		}
	}

IL_0035:
	{
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_10 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_2();
		return L_10;
	}

IL_003b:
	{
		BaseIterator_t4168896842 * L_11 = V_0;
		XPathNavigator_t787956054 * L_12 = VirtFuncInvoker0< XPathNavigator_t787956054 * >::Invoke(7 /* System.Xml.XPath.XPathNavigator System.Xml.XPath.XPathNodeIterator::get_Current() */, L_11);
		String_t* L_13 = VirtFuncInvoker0< String_t* >::Invoke(11 /* System.String System.Xml.XPath.XPathNavigator::get_NamespaceURI() */, L_12);
		return L_13;
	}
}
// System.String System.Xml.XPath.XPathFunctionNamespaceUri::ToString()
extern "C"  String_t* XPathFunctionNamespaceUri_ToString_m3306076830 (XPathFunctionNamespaceUri_t4077891083 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XPathFunctionNamespaceUri_ToString_m3306076830_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Expression_t1452783009 * L_0 = __this->get_arg0_0();
		String_t* L_1 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_0);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_2 = String_Concat_m3755062657(NULL /*static, unused*/, _stringLiteral991322771, L_1, _stringLiteral3452614535, /*hidden argument*/NULL);
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
// System.Void System.Xml.XPath.XPathFunctionNormalizeSpace::.ctor(System.Xml.XPath.FunctionArguments)
extern "C"  void XPathFunctionNormalizeSpace__ctor_m1765405179 (XPathFunctionNormalizeSpace_t379159227 * __this, FunctionArguments_t3573450773 * ___args0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XPathFunctionNormalizeSpace__ctor_m1765405179_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		FunctionArguments_t3573450773 * L_0 = ___args0;
		XPathFunction__ctor_m3144973253(__this, L_0, /*hidden argument*/NULL);
		FunctionArguments_t3573450773 * L_1 = ___args0;
		if (!L_1)
		{
			goto IL_002f;
		}
	}
	{
		FunctionArguments_t3573450773 * L_2 = ___args0;
		Expression_t1452783009 * L_3 = FunctionArguments_get_Arg_m248443681(L_2, /*hidden argument*/NULL);
		__this->set_arg0_0(L_3);
		FunctionArguments_t3573450773 * L_4 = ___args0;
		FunctionArguments_t3573450773 * L_5 = FunctionArguments_get_Tail_m3050077184(L_4, /*hidden argument*/NULL);
		if (!L_5)
		{
			goto IL_002f;
		}
	}
	{
		XPathException_t2107611652 * L_6 = (XPathException_t2107611652 *)il2cpp_codegen_object_new(XPathException_t2107611652_il2cpp_TypeInfo_var);
		XPathException__ctor_m3226187054(L_6, _stringLiteral3250925953, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_6, NULL, XPathFunctionNormalizeSpace__ctor_m1765405179_RuntimeMethod_var);
	}

IL_002f:
	{
		return;
	}
}
// System.Xml.XPath.XPathResultType System.Xml.XPath.XPathFunctionNormalizeSpace::get_ReturnType()
extern "C"  int32_t XPathFunctionNormalizeSpace_get_ReturnType_m740944735 (XPathFunctionNormalizeSpace_t379159227 * __this, const RuntimeMethod* method)
{
	{
		return (int32_t)(1);
	}
}
// System.Boolean System.Xml.XPath.XPathFunctionNormalizeSpace::get_Peer()
extern "C"  bool XPathFunctionNormalizeSpace_get_Peer_m1400069422 (XPathFunctionNormalizeSpace_t379159227 * __this, const RuntimeMethod* method)
{
	int32_t G_B3_0 = 0;
	{
		Expression_t1452783009 * L_0 = __this->get_arg0_0();
		if (!L_0)
		{
			goto IL_001b;
		}
	}
	{
		Expression_t1452783009 * L_1 = __this->get_arg0_0();
		bool L_2 = VirtFuncInvoker0< bool >::Invoke(15 /* System.Boolean System.Xml.XPath.Expression::get_Peer() */, L_1);
		G_B3_0 = ((int32_t)(L_2));
		goto IL_001c;
	}

IL_001b:
	{
		G_B3_0 = 1;
	}

IL_001c:
	{
		return (bool)G_B3_0;
	}
}
// System.Object System.Xml.XPath.XPathFunctionNormalizeSpace::Evaluate(System.Xml.XPath.BaseIterator)
extern "C"  RuntimeObject * XPathFunctionNormalizeSpace_Evaluate_m2606127027 (XPathFunctionNormalizeSpace_t379159227 * __this, BaseIterator_t4168896842 * ___iter0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XPathFunctionNormalizeSpace_Evaluate_m2606127027_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	StringBuilder_t * V_1 = NULL;
	bool V_2 = false;
	int32_t V_3 = 0;
	Il2CppChar V_4 = 0x0;
	{
		Expression_t1452783009 * L_0 = __this->get_arg0_0();
		if (!L_0)
		{
			goto IL_001d;
		}
	}
	{
		Expression_t1452783009 * L_1 = __this->get_arg0_0();
		BaseIterator_t4168896842 * L_2 = ___iter0;
		String_t* L_3 = VirtFuncInvoker1< String_t*, BaseIterator_t4168896842 * >::Invoke(17 /* System.String System.Xml.XPath.Expression::EvaluateString(System.Xml.XPath.BaseIterator) */, L_1, L_2);
		V_0 = L_3;
		goto IL_0029;
	}

IL_001d:
	{
		BaseIterator_t4168896842 * L_4 = ___iter0;
		XPathNavigator_t787956054 * L_5 = VirtFuncInvoker0< XPathNavigator_t787956054 * >::Invoke(7 /* System.Xml.XPath.XPathNavigator System.Xml.XPath.XPathNodeIterator::get_Current() */, L_4);
		String_t* L_6 = VirtFuncInvoker0< String_t* >::Invoke(4 /* System.String System.Xml.XPath.XPathItem::get_Value() */, L_5);
		V_0 = L_6;
	}

IL_0029:
	{
		StringBuilder_t * L_7 = (StringBuilder_t *)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
		StringBuilder__ctor_m3121283359(L_7, /*hidden argument*/NULL);
		V_1 = L_7;
		V_2 = (bool)0;
		V_3 = 0;
		goto IL_0096;
	}

IL_0038:
	{
		String_t* L_8 = V_0;
		int32_t L_9 = V_3;
		Il2CppChar L_10 = String_get_Chars_m2986988803(L_8, L_9, /*hidden argument*/NULL);
		V_4 = L_10;
		Il2CppChar L_11 = V_4;
		if ((((int32_t)L_11) == ((int32_t)((int32_t)32))))
		{
			goto IL_0065;
		}
	}
	{
		Il2CppChar L_12 = V_4;
		if ((((int32_t)L_12) == ((int32_t)((int32_t)9))))
		{
			goto IL_0065;
		}
	}
	{
		Il2CppChar L_13 = V_4;
		if ((((int32_t)L_13) == ((int32_t)((int32_t)13))))
		{
			goto IL_0065;
		}
	}
	{
		Il2CppChar L_14 = V_4;
		if ((!(((uint32_t)L_14) == ((uint32_t)((int32_t)10)))))
		{
			goto IL_006c;
		}
	}

IL_0065:
	{
		V_2 = (bool)1;
		goto IL_0092;
	}

IL_006c:
	{
		bool L_15 = V_2;
		if (!L_15)
		{
			goto IL_0089;
		}
	}
	{
		V_2 = (bool)0;
		StringBuilder_t * L_16 = V_1;
		int32_t L_17 = StringBuilder_get_Length_m3238060835(L_16, /*hidden argument*/NULL);
		if ((((int32_t)L_17) <= ((int32_t)0)))
		{
			goto IL_0089;
		}
	}
	{
		StringBuilder_t * L_18 = V_1;
		StringBuilder_Append_m2383614642(L_18, ((int32_t)32), /*hidden argument*/NULL);
	}

IL_0089:
	{
		StringBuilder_t * L_19 = V_1;
		Il2CppChar L_20 = V_4;
		StringBuilder_Append_m2383614642(L_19, L_20, /*hidden argument*/NULL);
	}

IL_0092:
	{
		int32_t L_21 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add((int32_t)L_21, (int32_t)1));
	}

IL_0096:
	{
		int32_t L_22 = V_3;
		String_t* L_23 = V_0;
		int32_t L_24 = String_get_Length_m3847582255(L_23, /*hidden argument*/NULL);
		if ((((int32_t)L_22) < ((int32_t)L_24)))
		{
			goto IL_0038;
		}
	}
	{
		StringBuilder_t * L_25 = V_1;
		String_t* L_26 = StringBuilder_ToString_m3317489284(L_25, /*hidden argument*/NULL);
		return L_26;
	}
}
// System.String System.Xml.XPath.XPathFunctionNormalizeSpace::ToString()
extern "C"  String_t* XPathFunctionNormalizeSpace_ToString_m4050287499 (XPathFunctionNormalizeSpace_t379159227 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XPathFunctionNormalizeSpace_ToString_m4050287499_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t G_B2_0 = 0;
	StringU5BU5D_t1281789340* G_B2_1 = NULL;
	StringU5BU5D_t1281789340* G_B2_2 = NULL;
	int32_t G_B1_0 = 0;
	StringU5BU5D_t1281789340* G_B1_1 = NULL;
	StringU5BU5D_t1281789340* G_B1_2 = NULL;
	String_t* G_B3_0 = NULL;
	int32_t G_B3_1 = 0;
	StringU5BU5D_t1281789340* G_B3_2 = NULL;
	StringU5BU5D_t1281789340* G_B3_3 = NULL;
	{
		StringU5BU5D_t1281789340* L_0 = ((StringU5BU5D_t1281789340*)SZArrayNew(StringU5BU5D_t1281789340_il2cpp_TypeInfo_var, (uint32_t)3));
		ArrayElementTypeCheck (L_0, _stringLiteral2910145985);
		(L_0)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteral2910145985);
		StringU5BU5D_t1281789340* L_1 = L_0;
		Expression_t1452783009 * L_2 = __this->get_arg0_0();
		G_B1_0 = 1;
		G_B1_1 = L_1;
		G_B1_2 = L_1;
		if (!L_2)
		{
			G_B2_0 = 1;
			G_B2_1 = L_1;
			G_B2_2 = L_1;
			goto IL_002b;
		}
	}
	{
		Expression_t1452783009 * L_3 = __this->get_arg0_0();
		String_t* L_4 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_3);
		G_B3_0 = L_4;
		G_B3_1 = G_B1_0;
		G_B3_2 = G_B1_1;
		G_B3_3 = G_B1_2;
		goto IL_0030;
	}

IL_002b:
	{
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_5 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_2();
		G_B3_0 = L_5;
		G_B3_1 = G_B2_0;
		G_B3_2 = G_B2_1;
		G_B3_3 = G_B2_2;
	}

IL_0030:
	{
		ArrayElementTypeCheck (G_B3_2, G_B3_0);
		(G_B3_2)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(G_B3_1), (String_t*)G_B3_0);
		StringU5BU5D_t1281789340* L_6 = G_B3_3;
		ArrayElementTypeCheck (L_6, _stringLiteral3452614535);
		(L_6)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(2), (String_t*)_stringLiteral3452614535);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_7 = String_Concat_m1809518182(NULL /*static, unused*/, L_6, /*hidden argument*/NULL);
		return L_7;
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
// System.Void System.Xml.XPath.XPathFunctionNot::.ctor(System.Xml.XPath.FunctionArguments)
extern "C"  void XPathFunctionNot__ctor_m861869352 (XPathFunctionNot_t3025979743 * __this, FunctionArguments_t3573450773 * ___args0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XPathFunctionNot__ctor_m861869352_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		FunctionArguments_t3573450773 * L_0 = ___args0;
		XPathBooleanFunction__ctor_m1039060572(__this, L_0, /*hidden argument*/NULL);
		FunctionArguments_t3573450773 * L_1 = ___args0;
		if (!L_1)
		{
			goto IL_0018;
		}
	}
	{
		FunctionArguments_t3573450773 * L_2 = ___args0;
		FunctionArguments_t3573450773 * L_3 = FunctionArguments_get_Tail_m3050077184(L_2, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_0023;
		}
	}

IL_0018:
	{
		XPathException_t2107611652 * L_4 = (XPathException_t2107611652 *)il2cpp_codegen_object_new(XPathException_t2107611652_il2cpp_TypeInfo_var);
		XPathException__ctor_m3226187054(L_4, _stringLiteral1092937409, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, NULL, XPathFunctionNot__ctor_m861869352_RuntimeMethod_var);
	}

IL_0023:
	{
		FunctionArguments_t3573450773 * L_5 = ___args0;
		Expression_t1452783009 * L_6 = FunctionArguments_get_Arg_m248443681(L_5, /*hidden argument*/NULL);
		__this->set_arg0_0(L_6);
		return;
	}
}
// System.Boolean System.Xml.XPath.XPathFunctionNot::get_Peer()
extern "C"  bool XPathFunctionNot_get_Peer_m3004805543 (XPathFunctionNot_t3025979743 * __this, const RuntimeMethod* method)
{
	{
		Expression_t1452783009 * L_0 = __this->get_arg0_0();
		bool L_1 = VirtFuncInvoker0< bool >::Invoke(15 /* System.Boolean System.Xml.XPath.Expression::get_Peer() */, L_0);
		return L_1;
	}
}
// System.Object System.Xml.XPath.XPathFunctionNot::Evaluate(System.Xml.XPath.BaseIterator)
extern "C"  RuntimeObject * XPathFunctionNot_Evaluate_m1944058261 (XPathFunctionNot_t3025979743 * __this, BaseIterator_t4168896842 * ___iter0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XPathFunctionNot_Evaluate_m1944058261_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Expression_t1452783009 * L_0 = __this->get_arg0_0();
		BaseIterator_t4168896842 * L_1 = ___iter0;
		bool L_2 = VirtFuncInvoker1< bool, BaseIterator_t4168896842 * >::Invoke(18 /* System.Boolean System.Xml.XPath.Expression::EvaluateBoolean(System.Xml.XPath.BaseIterator) */, L_0, L_1);
		bool L_3 = ((bool)((((int32_t)L_2) == ((int32_t)0))? 1 : 0));
		RuntimeObject * L_4 = Box(Boolean_t97287965_il2cpp_TypeInfo_var, &L_3);
		return L_4;
	}
}
// System.String System.Xml.XPath.XPathFunctionNot::ToString()
extern "C"  String_t* XPathFunctionNot_ToString_m1470843148 (XPathFunctionNot_t3025979743 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XPathFunctionNot_ToString_m1470843148_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		StringU5BU5D_t1281789340* L_0 = ((StringU5BU5D_t1281789340*)SZArrayNew(StringU5BU5D_t1281789340_il2cpp_TypeInfo_var, (uint32_t)3));
		ArrayElementTypeCheck (L_0, _stringLiteral2260534024);
		(L_0)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteral2260534024);
		StringU5BU5D_t1281789340* L_1 = L_0;
		Expression_t1452783009 * L_2 = __this->get_arg0_0();
		String_t* L_3 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_2);
		ArrayElementTypeCheck (L_1, L_3);
		(L_1)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(1), (String_t*)L_3);
		StringU5BU5D_t1281789340* L_4 = L_1;
		ArrayElementTypeCheck (L_4, _stringLiteral3452614535);
		(L_4)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(2), (String_t*)_stringLiteral3452614535);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_5 = String_Concat_m1809518182(NULL /*static, unused*/, L_4, /*hidden argument*/NULL);
		return L_5;
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
// System.Void System.Xml.XPath.XPathFunctionNumber::.ctor(System.Xml.XPath.FunctionArguments)
extern "C"  void XPathFunctionNumber__ctor_m2085021148 (XPathFunctionNumber_t699684043 * __this, FunctionArguments_t3573450773 * ___args0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XPathFunctionNumber__ctor_m2085021148_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		FunctionArguments_t3573450773 * L_0 = ___args0;
		XPathNumericFunction__ctor_m4265073059(__this, L_0, /*hidden argument*/NULL);
		FunctionArguments_t3573450773 * L_1 = ___args0;
		if (!L_1)
		{
			goto IL_002f;
		}
	}
	{
		FunctionArguments_t3573450773 * L_2 = ___args0;
		Expression_t1452783009 * L_3 = FunctionArguments_get_Arg_m248443681(L_2, /*hidden argument*/NULL);
		__this->set_arg0_0(L_3);
		FunctionArguments_t3573450773 * L_4 = ___args0;
		FunctionArguments_t3573450773 * L_5 = FunctionArguments_get_Tail_m3050077184(L_4, /*hidden argument*/NULL);
		if (!L_5)
		{
			goto IL_002f;
		}
	}
	{
		XPathException_t2107611652 * L_6 = (XPathException_t2107611652 *)il2cpp_codegen_object_new(XPathException_t2107611652_il2cpp_TypeInfo_var);
		XPathException__ctor_m3226187054(L_6, _stringLiteral3525153269, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_6, NULL, XPathFunctionNumber__ctor_m2085021148_RuntimeMethod_var);
	}

IL_002f:
	{
		return;
	}
}
// System.Xml.XPath.Expression System.Xml.XPath.XPathFunctionNumber::Optimize()
extern "C"  Expression_t1452783009 * XPathFunctionNumber_Optimize_m2214207374 (XPathFunctionNumber_t699684043 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XPathFunctionNumber_Optimize_m2214207374_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	XPathFunctionNumber_t699684043 * G_B5_0 = NULL;
	{
		Expression_t1452783009 * L_0 = __this->get_arg0_0();
		if (L_0)
		{
			goto IL_000d;
		}
	}
	{
		return __this;
	}

IL_000d:
	{
		Expression_t1452783009 * L_1 = __this->get_arg0_0();
		Expression_t1452783009 * L_2 = VirtFuncInvoker0< Expression_t1452783009 * >::Invoke(6 /* System.Xml.XPath.Expression System.Xml.XPath.Expression::Optimize() */, L_1);
		__this->set_arg0_0(L_2);
		Expression_t1452783009 * L_3 = __this->get_arg0_0();
		bool L_4 = VirtFuncInvoker0< bool >::Invoke(7 /* System.Boolean System.Xml.XPath.Expression::get_HasStaticValue() */, L_3);
		if (L_4)
		{
			goto IL_0034;
		}
	}
	{
		G_B5_0 = __this;
		goto IL_003f;
	}

IL_0034:
	{
		double L_5 = VirtFuncInvoker0< double >::Invoke(10 /* System.Double System.Xml.XPath.XPathFunctionNumber::get_StaticValueAsNumber() */, __this);
		ExprNumber_t3483239576 * L_6 = (ExprNumber_t3483239576 *)il2cpp_codegen_object_new(ExprNumber_t3483239576_il2cpp_TypeInfo_var);
		ExprNumber__ctor_m147059916(L_6, L_5, /*hidden argument*/NULL);
		G_B5_0 = ((XPathFunctionNumber_t699684043 *)(L_6));
	}

IL_003f:
	{
		return G_B5_0;
	}
}
// System.Boolean System.Xml.XPath.XPathFunctionNumber::get_HasStaticValue()
extern "C"  bool XPathFunctionNumber_get_HasStaticValue_m632399975 (XPathFunctionNumber_t699684043 * __this, const RuntimeMethod* method)
{
	int32_t G_B3_0 = 0;
	{
		Expression_t1452783009 * L_0 = __this->get_arg0_0();
		if (!L_0)
		{
			goto IL_0018;
		}
	}
	{
		Expression_t1452783009 * L_1 = __this->get_arg0_0();
		bool L_2 = VirtFuncInvoker0< bool >::Invoke(7 /* System.Boolean System.Xml.XPath.Expression::get_HasStaticValue() */, L_1);
		G_B3_0 = ((int32_t)(L_2));
		goto IL_0019;
	}

IL_0018:
	{
		G_B3_0 = 0;
	}

IL_0019:
	{
		return (bool)G_B3_0;
	}
}
// System.Double System.Xml.XPath.XPathFunctionNumber::get_StaticValueAsNumber()
extern "C"  double XPathFunctionNumber_get_StaticValueAsNumber_m2225695388 (XPathFunctionNumber_t699684043 * __this, const RuntimeMethod* method)
{
	double G_B3_0 = 0.0;
	{
		Expression_t1452783009 * L_0 = __this->get_arg0_0();
		if (!L_0)
		{
			goto IL_001b;
		}
	}
	{
		Expression_t1452783009 * L_1 = __this->get_arg0_0();
		double L_2 = VirtFuncInvoker0< double >::Invoke(10 /* System.Double System.Xml.XPath.Expression::get_StaticValueAsNumber() */, L_1);
		G_B3_0 = L_2;
		goto IL_0024;
	}

IL_001b:
	{
		G_B3_0 = (0.0);
	}

IL_0024:
	{
		return G_B3_0;
	}
}
// System.Boolean System.Xml.XPath.XPathFunctionNumber::get_Peer()
extern "C"  bool XPathFunctionNumber_get_Peer_m3381490036 (XPathFunctionNumber_t699684043 * __this, const RuntimeMethod* method)
{
	int32_t G_B3_0 = 0;
	{
		Expression_t1452783009 * L_0 = __this->get_arg0_0();
		if (!L_0)
		{
			goto IL_001b;
		}
	}
	{
		Expression_t1452783009 * L_1 = __this->get_arg0_0();
		bool L_2 = VirtFuncInvoker0< bool >::Invoke(15 /* System.Boolean System.Xml.XPath.Expression::get_Peer() */, L_1);
		G_B3_0 = ((int32_t)(L_2));
		goto IL_001c;
	}

IL_001b:
	{
		G_B3_0 = 1;
	}

IL_001c:
	{
		return (bool)G_B3_0;
	}
}
// System.Object System.Xml.XPath.XPathFunctionNumber::Evaluate(System.Xml.XPath.BaseIterator)
extern "C"  RuntimeObject * XPathFunctionNumber_Evaluate_m4083039742 (XPathFunctionNumber_t699684043 * __this, BaseIterator_t4168896842 * ___iter0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XPathFunctionNumber_Evaluate_m4083039742_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Expression_t1452783009 * L_0 = __this->get_arg0_0();
		if (L_0)
		{
			goto IL_0021;
		}
	}
	{
		BaseIterator_t4168896842 * L_1 = ___iter0;
		XPathNavigator_t787956054 * L_2 = VirtFuncInvoker0< XPathNavigator_t787956054 * >::Invoke(7 /* System.Xml.XPath.XPathNavigator System.Xml.XPath.XPathNodeIterator::get_Current() */, L_1);
		String_t* L_3 = VirtFuncInvoker0< String_t* >::Invoke(4 /* System.String System.Xml.XPath.XPathItem::get_Value() */, L_2);
		double L_4 = XPathFunctions_ToNumber_m2526127645(NULL /*static, unused*/, L_3, /*hidden argument*/NULL);
		double L_5 = L_4;
		RuntimeObject * L_6 = Box(Double_t594665363_il2cpp_TypeInfo_var, &L_5);
		return L_6;
	}

IL_0021:
	{
		Expression_t1452783009 * L_7 = __this->get_arg0_0();
		BaseIterator_t4168896842 * L_8 = ___iter0;
		double L_9 = VirtFuncInvoker1< double, BaseIterator_t4168896842 * >::Invoke(16 /* System.Double System.Xml.XPath.Expression::EvaluateNumber(System.Xml.XPath.BaseIterator) */, L_7, L_8);
		double L_10 = L_9;
		RuntimeObject * L_11 = Box(Double_t594665363_il2cpp_TypeInfo_var, &L_10);
		return L_11;
	}
}
// System.String System.Xml.XPath.XPathFunctionNumber::ToString()
extern "C"  String_t* XPathFunctionNumber_ToString_m2497384949 (XPathFunctionNumber_t699684043 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XPathFunctionNumber_ToString_m2497384949_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		StringU5BU5D_t1281789340* L_0 = ((StringU5BU5D_t1281789340*)SZArrayNew(StringU5BU5D_t1281789340_il2cpp_TypeInfo_var, (uint32_t)3));
		ArrayElementTypeCheck (L_0, _stringLiteral1435369858);
		(L_0)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteral1435369858);
		StringU5BU5D_t1281789340* L_1 = L_0;
		Expression_t1452783009 * L_2 = __this->get_arg0_0();
		String_t* L_3 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_2);
		ArrayElementTypeCheck (L_1, L_3);
		(L_1)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(1), (String_t*)L_3);
		StringU5BU5D_t1281789340* L_4 = L_1;
		ArrayElementTypeCheck (L_4, _stringLiteral3452614535);
		(L_4)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(2), (String_t*)_stringLiteral3452614535);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_5 = String_Concat_m1809518182(NULL /*static, unused*/, L_4, /*hidden argument*/NULL);
		return L_5;
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
// System.Void System.Xml.XPath.XPathFunctionPosition::.ctor(System.Xml.XPath.FunctionArguments)
extern "C"  void XPathFunctionPosition__ctor_m1805758189 (XPathFunctionPosition_t1996792158 * __this, FunctionArguments_t3573450773 * ___args0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XPathFunctionPosition__ctor_m1805758189_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		FunctionArguments_t3573450773 * L_0 = ___args0;
		XPathFunction__ctor_m3144973253(__this, L_0, /*hidden argument*/NULL);
		FunctionArguments_t3573450773 * L_1 = ___args0;
		if (!L_1)
		{
			goto IL_0018;
		}
	}
	{
		XPathException_t2107611652 * L_2 = (XPathException_t2107611652 *)il2cpp_codegen_object_new(XPathException_t2107611652_il2cpp_TypeInfo_var);
		XPathException__ctor_m3226187054(L_2, _stringLiteral993845230, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, NULL, XPathFunctionPosition__ctor_m1805758189_RuntimeMethod_var);
	}

IL_0018:
	{
		return;
	}
}
// System.Xml.XPath.XPathResultType System.Xml.XPath.XPathFunctionPosition::get_ReturnType()
extern "C"  int32_t XPathFunctionPosition_get_ReturnType_m4024054170 (XPathFunctionPosition_t1996792158 * __this, const RuntimeMethod* method)
{
	{
		return (int32_t)(0);
	}
}
// System.Boolean System.Xml.XPath.XPathFunctionPosition::get_Peer()
extern "C"  bool XPathFunctionPosition_get_Peer_m426691413 (XPathFunctionPosition_t1996792158 * __this, const RuntimeMethod* method)
{
	{
		return (bool)1;
	}
}
// System.Object System.Xml.XPath.XPathFunctionPosition::Evaluate(System.Xml.XPath.BaseIterator)
extern "C"  RuntimeObject * XPathFunctionPosition_Evaluate_m1513540976 (XPathFunctionPosition_t1996792158 * __this, BaseIterator_t4168896842 * ___iter0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XPathFunctionPosition_Evaluate_m1513540976_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		BaseIterator_t4168896842 * L_0 = ___iter0;
		int32_t L_1 = VirtFuncInvoker0< int32_t >::Invoke(8 /* System.Int32 System.Xml.XPath.BaseIterator::get_CurrentPosition() */, L_0);
		double L_2 = (((double)((double)L_1)));
		RuntimeObject * L_3 = Box(Double_t594665363_il2cpp_TypeInfo_var, &L_2);
		return L_3;
	}
}
// System.String System.Xml.XPath.XPathFunctionPosition::ToString()
extern "C"  String_t* XPathFunctionPosition_ToString_m3335228426 (XPathFunctionPosition_t1996792158 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XPathFunctionPosition_ToString_m3335228426_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		return _stringLiteral3566002631;
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
// System.Void System.Xml.XPath.XPathFunctionRound::.ctor(System.Xml.XPath.FunctionArguments)
extern "C"  void XPathFunctionRound__ctor_m2382310794 (XPathFunctionRound_t2668931994 * __this, FunctionArguments_t3573450773 * ___args0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XPathFunctionRound__ctor_m2382310794_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		FunctionArguments_t3573450773 * L_0 = ___args0;
		XPathNumericFunction__ctor_m4265073059(__this, L_0, /*hidden argument*/NULL);
		FunctionArguments_t3573450773 * L_1 = ___args0;
		if (!L_1)
		{
			goto IL_0018;
		}
	}
	{
		FunctionArguments_t3573450773 * L_2 = ___args0;
		FunctionArguments_t3573450773 * L_3 = FunctionArguments_get_Tail_m3050077184(L_2, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_0023;
		}
	}

IL_0018:
	{
		XPathException_t2107611652 * L_4 = (XPathException_t2107611652 *)il2cpp_codegen_object_new(XPathException_t2107611652_il2cpp_TypeInfo_var);
		XPathException__ctor_m3226187054(L_4, _stringLiteral2636821636, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, NULL, XPathFunctionRound__ctor_m2382310794_RuntimeMethod_var);
	}

IL_0023:
	{
		FunctionArguments_t3573450773 * L_5 = ___args0;
		Expression_t1452783009 * L_6 = FunctionArguments_get_Arg_m248443681(L_5, /*hidden argument*/NULL);
		__this->set_arg0_0(L_6);
		return;
	}
}
// System.Boolean System.Xml.XPath.XPathFunctionRound::get_HasStaticValue()
extern "C"  bool XPathFunctionRound_get_HasStaticValue_m43979232 (XPathFunctionRound_t2668931994 * __this, const RuntimeMethod* method)
{
	{
		Expression_t1452783009 * L_0 = __this->get_arg0_0();
		bool L_1 = VirtFuncInvoker0< bool >::Invoke(7 /* System.Boolean System.Xml.XPath.Expression::get_HasStaticValue() */, L_0);
		return L_1;
	}
}
// System.Double System.Xml.XPath.XPathFunctionRound::get_StaticValueAsNumber()
extern "C"  double XPathFunctionRound_get_StaticValueAsNumber_m3810054818 (XPathFunctionRound_t2668931994 * __this, const RuntimeMethod* method)
{
	double G_B3_0 = 0.0;
	{
		bool L_0 = VirtFuncInvoker0< bool >::Invoke(7 /* System.Boolean System.Xml.XPath.XPathFunctionRound::get_HasStaticValue() */, __this);
		if (!L_0)
		{
			goto IL_0021;
		}
	}
	{
		Expression_t1452783009 * L_1 = __this->get_arg0_0();
		double L_2 = VirtFuncInvoker0< double >::Invoke(10 /* System.Double System.Xml.XPath.Expression::get_StaticValueAsNumber() */, L_1);
		double L_3 = XPathFunctionRound_Round_m2472184044(__this, L_2, /*hidden argument*/NULL);
		G_B3_0 = L_3;
		goto IL_002a;
	}

IL_0021:
	{
		G_B3_0 = (0.0);
	}

IL_002a:
	{
		return G_B3_0;
	}
}
// System.Boolean System.Xml.XPath.XPathFunctionRound::get_Peer()
extern "C"  bool XPathFunctionRound_get_Peer_m3529906590 (XPathFunctionRound_t2668931994 * __this, const RuntimeMethod* method)
{
	{
		Expression_t1452783009 * L_0 = __this->get_arg0_0();
		bool L_1 = VirtFuncInvoker0< bool >::Invoke(15 /* System.Boolean System.Xml.XPath.Expression::get_Peer() */, L_0);
		return L_1;
	}
}
// System.Object System.Xml.XPath.XPathFunctionRound::Evaluate(System.Xml.XPath.BaseIterator)
extern "C"  RuntimeObject * XPathFunctionRound_Evaluate_m3101793594 (XPathFunctionRound_t2668931994 * __this, BaseIterator_t4168896842 * ___iter0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XPathFunctionRound_Evaluate_m3101793594_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Expression_t1452783009 * L_0 = __this->get_arg0_0();
		BaseIterator_t4168896842 * L_1 = ___iter0;
		double L_2 = VirtFuncInvoker1< double, BaseIterator_t4168896842 * >::Invoke(16 /* System.Double System.Xml.XPath.Expression::EvaluateNumber(System.Xml.XPath.BaseIterator) */, L_0, L_1);
		double L_3 = XPathFunctionRound_Round_m2472184044(__this, L_2, /*hidden argument*/NULL);
		double L_4 = L_3;
		RuntimeObject * L_5 = Box(Double_t594665363_il2cpp_TypeInfo_var, &L_4);
		return L_5;
	}
}
// System.Double System.Xml.XPath.XPathFunctionRound::Round(System.Double)
extern "C"  double XPathFunctionRound_Round_m2472184044 (XPathFunctionRound_t2668931994 * __this, double ___arg0, const RuntimeMethod* method)
{
	{
		double L_0 = ___arg0;
		if ((((double)L_0) < ((double)(-0.5))))
		{
			goto IL_001e;
		}
	}
	{
		double L_1 = ___arg0;
		if ((!(((double)L_1) > ((double)(0.0)))))
		{
			goto IL_002f;
		}
	}

IL_001e:
	{
		double L_2 = ___arg0;
		double L_3 = floor(((double)il2cpp_codegen_add((double)L_2, (double)(0.5))));
		return L_3;
	}

IL_002f:
	{
		double L_4 = ___arg0;
		double L_5 = bankers_round(L_4);
		return L_5;
	}
}
// System.String System.Xml.XPath.XPathFunctionRound::ToString()
extern "C"  String_t* XPathFunctionRound_ToString_m3048388152 (XPathFunctionRound_t2668931994 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XPathFunctionRound_ToString_m3048388152_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		StringU5BU5D_t1281789340* L_0 = ((StringU5BU5D_t1281789340*)SZArrayNew(StringU5BU5D_t1281789340_il2cpp_TypeInfo_var, (uint32_t)3));
		ArrayElementTypeCheck (L_0, _stringLiteral2004169193);
		(L_0)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteral2004169193);
		StringU5BU5D_t1281789340* L_1 = L_0;
		Expression_t1452783009 * L_2 = __this->get_arg0_0();
		String_t* L_3 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_2);
		ArrayElementTypeCheck (L_1, L_3);
		(L_1)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(1), (String_t*)L_3);
		StringU5BU5D_t1281789340* L_4 = L_1;
		ArrayElementTypeCheck (L_4, _stringLiteral3452614535);
		(L_4)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(2), (String_t*)_stringLiteral3452614535);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_5 = String_Concat_m1809518182(NULL /*static, unused*/, L_4, /*hidden argument*/NULL);
		return L_5;
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
// System.Boolean System.Xml.XPath.XPathFunctions::ToBoolean(System.Object)
extern "C"  bool XPathFunctions_ToBoolean_m1843756110 (RuntimeObject * __this /* static, unused */, RuntimeObject * ___arg0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XPathFunctions_ToBoolean_m1843756110_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	double V_0 = 0.0;
	XPathNodeIterator_t3667290188 * V_1 = NULL;
	int32_t G_B8_0 = 0;
	{
		RuntimeObject * L_0 = ___arg0;
		if (L_0)
		{
			goto IL_000c;
		}
	}
	{
		ArgumentNullException_t1615371798 * L_1 = (ArgumentNullException_t1615371798 *)il2cpp_codegen_object_new(ArgumentNullException_t1615371798_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m2751210921(L_1, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, NULL, XPathFunctions_ToBoolean_m1843756110_RuntimeMethod_var);
	}

IL_000c:
	{
		RuntimeObject * L_2 = ___arg0;
		if (!((RuntimeObject *)IsInstSealed((RuntimeObject*)L_2, Boolean_t97287965_il2cpp_TypeInfo_var)))
		{
			goto IL_001e;
		}
	}
	{
		RuntimeObject * L_3 = ___arg0;
		return ((*(bool*)((bool*)UnBox(L_3, Boolean_t97287965_il2cpp_TypeInfo_var))));
	}

IL_001e:
	{
		RuntimeObject * L_4 = ___arg0;
		if (!((RuntimeObject *)IsInstSealed((RuntimeObject*)L_4, Double_t594665363_il2cpp_TypeInfo_var)))
		{
			goto IL_004c;
		}
	}
	{
		RuntimeObject * L_5 = ___arg0;
		V_0 = ((*(double*)((double*)UnBox(L_5, Double_t594665363_il2cpp_TypeInfo_var))));
		double L_6 = V_0;
		if ((((double)L_6) == ((double)(0.0))))
		{
			goto IL_004a;
		}
	}
	{
		double L_7 = V_0;
		bool L_8 = Double_IsNaN_m649024406(NULL /*static, unused*/, L_7, /*hidden argument*/NULL);
		G_B8_0 = ((((int32_t)L_8) == ((int32_t)0))? 1 : 0);
		goto IL_004b;
	}

IL_004a:
	{
		G_B8_0 = 0;
	}

IL_004b:
	{
		return (bool)G_B8_0;
	}

IL_004c:
	{
		RuntimeObject * L_9 = ___arg0;
		if (!((String_t*)IsInstSealed((RuntimeObject*)L_9, String_t_il2cpp_TypeInfo_var)))
		{
			goto IL_0069;
		}
	}
	{
		RuntimeObject * L_10 = ___arg0;
		int32_t L_11 = String_get_Length_m3847582255(((String_t*)CastclassSealed((RuntimeObject*)L_10, String_t_il2cpp_TypeInfo_var)), /*hidden argument*/NULL);
		return (bool)((((int32_t)((((int32_t)L_11) == ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}

IL_0069:
	{
		RuntimeObject * L_12 = ___arg0;
		if (!((XPathNodeIterator_t3667290188 *)IsInstClass((RuntimeObject*)L_12, XPathNodeIterator_t3667290188_il2cpp_TypeInfo_var)))
		{
			goto IL_0082;
		}
	}
	{
		RuntimeObject * L_13 = ___arg0;
		V_1 = ((XPathNodeIterator_t3667290188 *)CastclassClass((RuntimeObject*)L_13, XPathNodeIterator_t3667290188_il2cpp_TypeInfo_var));
		XPathNodeIterator_t3667290188 * L_14 = V_1;
		bool L_15 = VirtFuncInvoker0< bool >::Invoke(11 /* System.Boolean System.Xml.XPath.XPathNodeIterator::MoveNext() */, L_14);
		return L_15;
	}

IL_0082:
	{
		RuntimeObject * L_16 = ___arg0;
		if (!((XPathNavigator_t787956054 *)IsInstClass((RuntimeObject*)L_16, XPathNavigator_t787956054_il2cpp_TypeInfo_var)))
		{
			goto IL_00a0;
		}
	}
	{
		RuntimeObject * L_17 = ___arg0;
		XPathNodeIterator_t3667290188 * L_18 = VirtFuncInvoker1< XPathNodeIterator_t3667290188 *, int32_t >::Invoke(33 /* System.Xml.XPath.XPathNodeIterator System.Xml.XPath.XPathNavigator::SelectChildren(System.Xml.XPath.XPathNodeType) */, ((XPathNavigator_t787956054 *)CastclassClass((RuntimeObject*)L_17, XPathNavigator_t787956054_il2cpp_TypeInfo_var)), ((int32_t)9));
		bool L_19 = XPathFunctions_ToBoolean_m1843756110(NULL /*static, unused*/, L_18, /*hidden argument*/NULL);
		return L_19;
	}

IL_00a0:
	{
		ArgumentException_t132251570 * L_20 = (ArgumentException_t132251570 *)il2cpp_codegen_object_new(ArgumentException_t132251570_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m3698743796(L_20, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_20, NULL, XPathFunctions_ToBoolean_m1843756110_RuntimeMethod_var);
	}
}
// System.Boolean System.Xml.XPath.XPathFunctions::ToBoolean(System.String)
extern "C"  bool XPathFunctions_ToBoolean_m854853463 (RuntimeObject * __this /* static, unused */, String_t* ___s0, const RuntimeMethod* method)
{
	int32_t G_B3_0 = 0;
	{
		String_t* L_0 = ___s0;
		if (!L_0)
		{
			goto IL_0011;
		}
	}
	{
		String_t* L_1 = ___s0;
		int32_t L_2 = String_get_Length_m3847582255(L_1, /*hidden argument*/NULL);
		G_B3_0 = ((((int32_t)L_2) > ((int32_t)0))? 1 : 0);
		goto IL_0012;
	}

IL_0011:
	{
		G_B3_0 = 0;
	}

IL_0012:
	{
		return (bool)G_B3_0;
	}
}
// System.String System.Xml.XPath.XPathFunctions::ToString(System.Object)
extern "C"  String_t* XPathFunctions_ToString_m4087755365 (RuntimeObject * __this /* static, unused */, RuntimeObject * ___arg0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XPathFunctions_ToString_m4087755365_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	XPathNodeIterator_t3667290188 * V_0 = NULL;
	String_t* G_B8_0 = NULL;
	{
		RuntimeObject * L_0 = ___arg0;
		if (L_0)
		{
			goto IL_000c;
		}
	}
	{
		ArgumentNullException_t1615371798 * L_1 = (ArgumentNullException_t1615371798 *)il2cpp_codegen_object_new(ArgumentNullException_t1615371798_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m2751210921(L_1, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, NULL, XPathFunctions_ToString_m4087755365_RuntimeMethod_var);
	}

IL_000c:
	{
		RuntimeObject * L_2 = ___arg0;
		if (!((String_t*)IsInstSealed((RuntimeObject*)L_2, String_t_il2cpp_TypeInfo_var)))
		{
			goto IL_001e;
		}
	}
	{
		RuntimeObject * L_3 = ___arg0;
		return ((String_t*)CastclassSealed((RuntimeObject*)L_3, String_t_il2cpp_TypeInfo_var));
	}

IL_001e:
	{
		RuntimeObject * L_4 = ___arg0;
		if (!((RuntimeObject *)IsInstSealed((RuntimeObject*)L_4, Boolean_t97287965_il2cpp_TypeInfo_var)))
		{
			goto IL_0044;
		}
	}
	{
		RuntimeObject * L_5 = ___arg0;
		if (!((*(bool*)((bool*)UnBox(L_5, Boolean_t97287965_il2cpp_TypeInfo_var)))))
		{
			goto IL_003e;
		}
	}
	{
		G_B8_0 = _stringLiteral4002445229;
		goto IL_0043;
	}

IL_003e:
	{
		G_B8_0 = _stringLiteral3875954633;
	}

IL_0043:
	{
		return G_B8_0;
	}

IL_0044:
	{
		RuntimeObject * L_6 = ___arg0;
		if (!((RuntimeObject *)IsInstSealed((RuntimeObject*)L_6, Double_t594665363_il2cpp_TypeInfo_var)))
		{
			goto IL_005b;
		}
	}
	{
		RuntimeObject * L_7 = ___arg0;
		String_t* L_8 = XPathFunctions_ToString_m1095398116(NULL /*static, unused*/, ((*(double*)((double*)UnBox(L_7, Double_t594665363_il2cpp_TypeInfo_var)))), /*hidden argument*/NULL);
		return L_8;
	}

IL_005b:
	{
		RuntimeObject * L_9 = ___arg0;
		if (!((XPathNodeIterator_t3667290188 *)IsInstClass((RuntimeObject*)L_9, XPathNodeIterator_t3667290188_il2cpp_TypeInfo_var)))
		{
			goto IL_008a;
		}
	}
	{
		RuntimeObject * L_10 = ___arg0;
		V_0 = ((XPathNodeIterator_t3667290188 *)CastclassClass((RuntimeObject*)L_10, XPathNodeIterator_t3667290188_il2cpp_TypeInfo_var));
		XPathNodeIterator_t3667290188 * L_11 = V_0;
		bool L_12 = VirtFuncInvoker0< bool >::Invoke(11 /* System.Boolean System.Xml.XPath.XPathNodeIterator::MoveNext() */, L_11);
		if (L_12)
		{
			goto IL_007e;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_13 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_2();
		return L_13;
	}

IL_007e:
	{
		XPathNodeIterator_t3667290188 * L_14 = V_0;
		XPathNavigator_t787956054 * L_15 = VirtFuncInvoker0< XPathNavigator_t787956054 * >::Invoke(7 /* System.Xml.XPath.XPathNavigator System.Xml.XPath.XPathNodeIterator::get_Current() */, L_14);
		String_t* L_16 = VirtFuncInvoker0< String_t* >::Invoke(4 /* System.String System.Xml.XPath.XPathItem::get_Value() */, L_15);
		return L_16;
	}

IL_008a:
	{
		RuntimeObject * L_17 = ___arg0;
		if (!((XPathNavigator_t787956054 *)IsInstClass((RuntimeObject*)L_17, XPathNavigator_t787956054_il2cpp_TypeInfo_var)))
		{
			goto IL_00a1;
		}
	}
	{
		RuntimeObject * L_18 = ___arg0;
		String_t* L_19 = VirtFuncInvoker0< String_t* >::Invoke(4 /* System.String System.Xml.XPath.XPathItem::get_Value() */, ((XPathNavigator_t787956054 *)CastclassClass((RuntimeObject*)L_18, XPathNavigator_t787956054_il2cpp_TypeInfo_var)));
		return L_19;
	}

IL_00a1:
	{
		ArgumentException_t132251570 * L_20 = (ArgumentException_t132251570 *)il2cpp_codegen_object_new(ArgumentException_t132251570_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m3698743796(L_20, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_20, NULL, XPathFunctions_ToString_m4087755365_RuntimeMethod_var);
	}
}
// System.String System.Xml.XPath.XPathFunctions::ToString(System.Double)
extern "C"  String_t* XPathFunctions_ToString_m1095398116 (RuntimeObject * __this /* static, unused */, double ___d0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XPathFunctions_ToString_m1095398116_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		double L_0 = ___d0;
		if ((!(((double)L_0) == ((double)(-std::numeric_limits<double>::infinity())))))
		{
			goto IL_0015;
		}
	}
	{
		return _stringLiteral2385296252;
	}

IL_0015:
	{
		double L_1 = ___d0;
		if ((!(((double)L_1) == ((double)(std::numeric_limits<double>::infinity())))))
		{
			goto IL_002a;
		}
	}
	{
		return _stringLiteral670053913;
	}

IL_002a:
	{
		IL2CPP_RUNTIME_CLASS_INIT(NumberFormatInfo_t435877138_il2cpp_TypeInfo_var);
		NumberFormatInfo_t435877138 * L_2 = NumberFormatInfo_get_InvariantInfo_m349577018(NULL /*static, unused*/, /*hidden argument*/NULL);
		String_t* L_3 = Double_ToString_m1051753975((double*)(&___d0), _stringLiteral3452614638, L_2, /*hidden argument*/NULL);
		return L_3;
	}
}
// System.Double System.Xml.XPath.XPathFunctions::ToNumber(System.Object)
extern "C"  double XPathFunctions_ToNumber_m1425546570 (RuntimeObject * __this /* static, unused */, RuntimeObject * ___arg0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XPathFunctions_ToNumber_m1425546570_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		RuntimeObject * L_0 = ___arg0;
		if (L_0)
		{
			goto IL_000c;
		}
	}
	{
		ArgumentNullException_t1615371798 * L_1 = (ArgumentNullException_t1615371798 *)il2cpp_codegen_object_new(ArgumentNullException_t1615371798_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m2751210921(L_1, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, NULL, XPathFunctions_ToNumber_m1425546570_RuntimeMethod_var);
	}

IL_000c:
	{
		RuntimeObject * L_2 = ___arg0;
		if (((BaseIterator_t4168896842 *)IsInstClass((RuntimeObject*)L_2, BaseIterator_t4168896842_il2cpp_TypeInfo_var)))
		{
			goto IL_0022;
		}
	}
	{
		RuntimeObject * L_3 = ___arg0;
		if (!((XPathNavigator_t787956054 *)IsInstClass((RuntimeObject*)L_3, XPathNavigator_t787956054_il2cpp_TypeInfo_var)))
		{
			goto IL_002a;
		}
	}

IL_0022:
	{
		RuntimeObject * L_4 = ___arg0;
		String_t* L_5 = XPathFunctions_ToString_m4087755365(NULL /*static, unused*/, L_4, /*hidden argument*/NULL);
		___arg0 = L_5;
	}

IL_002a:
	{
		RuntimeObject * L_6 = ___arg0;
		if (!((String_t*)IsInstSealed((RuntimeObject*)L_6, String_t_il2cpp_TypeInfo_var)))
		{
			goto IL_0043;
		}
	}
	{
		RuntimeObject * L_7 = ___arg0;
		V_0 = ((String_t*)IsInstSealed((RuntimeObject*)L_7, String_t_il2cpp_TypeInfo_var));
		String_t* L_8 = V_0;
		double L_9 = XPathFunctions_ToNumber_m2526127645(NULL /*static, unused*/, L_8, /*hidden argument*/NULL);
		return L_9;
	}

IL_0043:
	{
		RuntimeObject * L_10 = ___arg0;
		if (!((RuntimeObject *)IsInstSealed((RuntimeObject*)L_10, Double_t594665363_il2cpp_TypeInfo_var)))
		{
			goto IL_0055;
		}
	}
	{
		RuntimeObject * L_11 = ___arg0;
		return ((*(double*)((double*)UnBox(L_11, Double_t594665363_il2cpp_TypeInfo_var))));
	}

IL_0055:
	{
		RuntimeObject * L_12 = ___arg0;
		if (!((RuntimeObject *)IsInstSealed((RuntimeObject*)L_12, Boolean_t97287965_il2cpp_TypeInfo_var)))
		{
			goto IL_006c;
		}
	}
	{
		RuntimeObject * L_13 = ___arg0;
		IL2CPP_RUNTIME_CLASS_INIT(Convert_t2465617642_il2cpp_TypeInfo_var);
		double L_14 = Convert_ToDouble_m954895424(NULL /*static, unused*/, ((*(bool*)((bool*)UnBox(L_13, Boolean_t97287965_il2cpp_TypeInfo_var)))), /*hidden argument*/NULL);
		return L_14;
	}

IL_006c:
	{
		ArgumentException_t132251570 * L_15 = (ArgumentException_t132251570 *)il2cpp_codegen_object_new(ArgumentException_t132251570_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m3698743796(L_15, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_15, NULL, XPathFunctions_ToNumber_m1425546570_RuntimeMethod_var);
	}
}
// System.Double System.Xml.XPath.XPathFunctions::ToNumber(System.String)
extern "C"  double XPathFunctions_ToNumber_m2526127645 (RuntimeObject * __this /* static, unused */, String_t* ___arg0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XPathFunctions_ToNumber_m2526127645_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	double V_1 = 0.0;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		String_t* L_0 = ___arg0;
		if (L_0)
		{
			goto IL_000c;
		}
	}
	{
		ArgumentNullException_t1615371798 * L_1 = (ArgumentNullException_t1615371798 *)il2cpp_codegen_object_new(ArgumentNullException_t1615371798_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m2751210921(L_1, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, NULL, XPathFunctions_ToNumber_m2526127645_RuntimeMethod_var);
	}

IL_000c:
	{
		String_t* L_2 = ___arg0;
		IL2CPP_RUNTIME_CLASS_INIT(XmlChar_t3816087079_il2cpp_TypeInfo_var);
		CharU5BU5D_t3528271667* L_3 = ((XmlChar_t3816087079_StaticFields*)il2cpp_codegen_static_fields_for(XmlChar_t3816087079_il2cpp_TypeInfo_var))->get_WhitespaceChars_0();
		String_t* L_4 = String_Trim_m3384720403(L_2, L_3, /*hidden argument*/NULL);
		V_0 = L_4;
		String_t* L_5 = V_0;
		int32_t L_6 = String_get_Length_m3847582255(L_5, /*hidden argument*/NULL);
		if (L_6)
		{
			goto IL_002d;
		}
	}
	{
		return (std::numeric_limits<double>::quiet_NaN());
	}

IL_002d:
	try
	{ // begin try (depth: 1)
		{
			String_t* L_7 = V_0;
			Il2CppChar L_8 = String_get_Chars_m2986988803(L_7, 0, /*hidden argument*/NULL);
			if ((!(((uint32_t)L_8) == ((uint32_t)((int32_t)46)))))
			{
				goto IL_0049;
			}
		}

IL_003b:
		{
			Il2CppChar L_9 = ((Il2CppChar)((int32_t)46));
			RuntimeObject * L_10 = Box(Char_t3634460470_il2cpp_TypeInfo_var, &L_9);
			String_t* L_11 = V_0;
			IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
			String_t* L_12 = String_Concat_m904156431(NULL /*static, unused*/, L_10, L_11, /*hidden argument*/NULL);
			V_0 = L_12;
		}

IL_0049:
		{
			String_t* L_13 = V_0;
			IL2CPP_RUNTIME_CLASS_INIT(NumberFormatInfo_t435877138_il2cpp_TypeInfo_var);
			NumberFormatInfo_t435877138 * L_14 = NumberFormatInfo_get_InvariantInfo_m349577018(NULL /*static, unused*/, /*hidden argument*/NULL);
			double L_15 = Double_Parse_m1135962389(NULL /*static, unused*/, L_13, ((int32_t)39), L_14, /*hidden argument*/NULL);
			V_1 = L_15;
			goto IL_008b;
		}

IL_005c:
		{
			; // IL_005c: leave IL_008b
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (OverflowException_t2020128637_il2cpp_TypeInfo_var, il2cpp_codegen_object_class(e.ex)))
			goto CATCH_0061;
		if(il2cpp_codegen_class_is_assignable_from (FormatException_t154580423_il2cpp_TypeInfo_var, il2cpp_codegen_object_class(e.ex)))
			goto CATCH_0076;
		throw e;
	}

CATCH_0061:
	{ // begin catch(System.OverflowException)
		{
			V_1 = (std::numeric_limits<double>::quiet_NaN());
			goto IL_008b;
		}

IL_0071:
		{
			; // IL_0071: leave IL_008b
		}
	} // end catch (depth: 1)

CATCH_0076:
	{ // begin catch(System.FormatException)
		{
			V_1 = (std::numeric_limits<double>::quiet_NaN());
			goto IL_008b;
		}

IL_0086:
		{
			; // IL_0086: leave IL_008b
		}
	} // end catch (depth: 1)

IL_008b:
	{
		double L_16 = V_1;
		return L_16;
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
// System.Void System.Xml.XPath.XPathFunctionStartsWith::.ctor(System.Xml.XPath.FunctionArguments)
extern "C"  void XPathFunctionStartsWith__ctor_m2801198720 (XPathFunctionStartsWith_t3734288208 * __this, FunctionArguments_t3573450773 * ___args0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XPathFunctionStartsWith__ctor_m2801198720_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		FunctionArguments_t3573450773 * L_0 = ___args0;
		XPathFunction__ctor_m3144973253(__this, L_0, /*hidden argument*/NULL);
		FunctionArguments_t3573450773 * L_1 = ___args0;
		if (!L_1)
		{
			goto IL_0028;
		}
	}
	{
		FunctionArguments_t3573450773 * L_2 = ___args0;
		FunctionArguments_t3573450773 * L_3 = FunctionArguments_get_Tail_m3050077184(L_2, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_0028;
		}
	}
	{
		FunctionArguments_t3573450773 * L_4 = ___args0;
		FunctionArguments_t3573450773 * L_5 = FunctionArguments_get_Tail_m3050077184(L_4, /*hidden argument*/NULL);
		FunctionArguments_t3573450773 * L_6 = FunctionArguments_get_Tail_m3050077184(L_5, /*hidden argument*/NULL);
		if (!L_6)
		{
			goto IL_0033;
		}
	}

IL_0028:
	{
		XPathException_t2107611652 * L_7 = (XPathException_t2107611652 *)il2cpp_codegen_object_new(XPathException_t2107611652_il2cpp_TypeInfo_var);
		XPathException__ctor_m3226187054(L_7, _stringLiteral2794776271, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_7, NULL, XPathFunctionStartsWith__ctor_m2801198720_RuntimeMethod_var);
	}

IL_0033:
	{
		FunctionArguments_t3573450773 * L_8 = ___args0;
		Expression_t1452783009 * L_9 = FunctionArguments_get_Arg_m248443681(L_8, /*hidden argument*/NULL);
		__this->set_arg0_0(L_9);
		FunctionArguments_t3573450773 * L_10 = ___args0;
		FunctionArguments_t3573450773 * L_11 = FunctionArguments_get_Tail_m3050077184(L_10, /*hidden argument*/NULL);
		Expression_t1452783009 * L_12 = FunctionArguments_get_Arg_m248443681(L_11, /*hidden argument*/NULL);
		__this->set_arg1_1(L_12);
		return;
	}
}
// System.Xml.XPath.XPathResultType System.Xml.XPath.XPathFunctionStartsWith::get_ReturnType()
extern "C"  int32_t XPathFunctionStartsWith_get_ReturnType_m2560774119 (XPathFunctionStartsWith_t3734288208 * __this, const RuntimeMethod* method)
{
	{
		return (int32_t)(2);
	}
}
// System.Boolean System.Xml.XPath.XPathFunctionStartsWith::get_Peer()
extern "C"  bool XPathFunctionStartsWith_get_Peer_m220193401 (XPathFunctionStartsWith_t3734288208 * __this, const RuntimeMethod* method)
{
	int32_t G_B3_0 = 0;
	{
		Expression_t1452783009 * L_0 = __this->get_arg0_0();
		bool L_1 = VirtFuncInvoker0< bool >::Invoke(15 /* System.Boolean System.Xml.XPath.Expression::get_Peer() */, L_0);
		if (!L_1)
		{
			goto IL_001d;
		}
	}
	{
		Expression_t1452783009 * L_2 = __this->get_arg1_1();
		bool L_3 = VirtFuncInvoker0< bool >::Invoke(15 /* System.Boolean System.Xml.XPath.Expression::get_Peer() */, L_2);
		G_B3_0 = ((int32_t)(L_3));
		goto IL_001e;
	}

IL_001d:
	{
		G_B3_0 = 0;
	}

IL_001e:
	{
		return (bool)G_B3_0;
	}
}
// System.Object System.Xml.XPath.XPathFunctionStartsWith::Evaluate(System.Xml.XPath.BaseIterator)
extern "C"  RuntimeObject * XPathFunctionStartsWith_Evaluate_m3179096284 (XPathFunctionStartsWith_t3734288208 * __this, BaseIterator_t4168896842 * ___iter0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XPathFunctionStartsWith_Evaluate_m3179096284_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Expression_t1452783009 * L_0 = __this->get_arg0_0();
		BaseIterator_t4168896842 * L_1 = ___iter0;
		String_t* L_2 = VirtFuncInvoker1< String_t*, BaseIterator_t4168896842 * >::Invoke(17 /* System.String System.Xml.XPath.Expression::EvaluateString(System.Xml.XPath.BaseIterator) */, L_0, L_1);
		Expression_t1452783009 * L_3 = __this->get_arg1_1();
		BaseIterator_t4168896842 * L_4 = ___iter0;
		String_t* L_5 = VirtFuncInvoker1< String_t*, BaseIterator_t4168896842 * >::Invoke(17 /* System.String System.Xml.XPath.Expression::EvaluateString(System.Xml.XPath.BaseIterator) */, L_3, L_4);
		bool L_6 = String_StartsWith_m1759067526(L_2, L_5, /*hidden argument*/NULL);
		bool L_7 = L_6;
		RuntimeObject * L_8 = Box(Boolean_t97287965_il2cpp_TypeInfo_var, &L_7);
		return L_8;
	}
}
// System.String System.Xml.XPath.XPathFunctionStartsWith::ToString()
extern "C"  String_t* XPathFunctionStartsWith_ToString_m2048890216 (XPathFunctionStartsWith_t3734288208 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XPathFunctionStartsWith_ToString_m2048890216_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		StringU5BU5D_t1281789340* L_0 = ((StringU5BU5D_t1281789340*)SZArrayNew(StringU5BU5D_t1281789340_il2cpp_TypeInfo_var, (uint32_t)5));
		ArrayElementTypeCheck (L_0, _stringLiteral1831540344);
		(L_0)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteral1831540344);
		StringU5BU5D_t1281789340* L_1 = L_0;
		Expression_t1452783009 * L_2 = __this->get_arg0_0();
		String_t* L_3 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_2);
		ArrayElementTypeCheck (L_1, L_3);
		(L_1)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(1), (String_t*)L_3);
		StringU5BU5D_t1281789340* L_4 = L_1;
		ArrayElementTypeCheck (L_4, _stringLiteral3452614532);
		(L_4)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(2), (String_t*)_stringLiteral3452614532);
		StringU5BU5D_t1281789340* L_5 = L_4;
		Expression_t1452783009 * L_6 = __this->get_arg1_1();
		String_t* L_7 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_6);
		ArrayElementTypeCheck (L_5, L_7);
		(L_5)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(3), (String_t*)L_7);
		StringU5BU5D_t1281789340* L_8 = L_5;
		ArrayElementTypeCheck (L_8, _stringLiteral3452614535);
		(L_8)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(4), (String_t*)_stringLiteral3452614535);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_9 = String_Concat_m1809518182(NULL /*static, unused*/, L_8, /*hidden argument*/NULL);
		return L_9;
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
// System.Void System.Xml.XPath.XPathFunctionString::.ctor(System.Xml.XPath.FunctionArguments)
extern "C"  void XPathFunctionString__ctor_m3331743563 (XPathFunctionString_t3820712894 * __this, FunctionArguments_t3573450773 * ___args0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XPathFunctionString__ctor_m3331743563_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		FunctionArguments_t3573450773 * L_0 = ___args0;
		XPathFunction__ctor_m3144973253(__this, L_0, /*hidden argument*/NULL);
		FunctionArguments_t3573450773 * L_1 = ___args0;
		if (!L_1)
		{
			goto IL_002f;
		}
	}
	{
		FunctionArguments_t3573450773 * L_2 = ___args0;
		Expression_t1452783009 * L_3 = FunctionArguments_get_Arg_m248443681(L_2, /*hidden argument*/NULL);
		__this->set_arg0_0(L_3);
		FunctionArguments_t3573450773 * L_4 = ___args0;
		FunctionArguments_t3573450773 * L_5 = FunctionArguments_get_Tail_m3050077184(L_4, /*hidden argument*/NULL);
		if (!L_5)
		{
			goto IL_002f;
		}
	}
	{
		XPathException_t2107611652 * L_6 = (XPathException_t2107611652 *)il2cpp_codegen_object_new(XPathException_t2107611652_il2cpp_TypeInfo_var);
		XPathException__ctor_m3226187054(L_6, _stringLiteral3943582860, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_6, NULL, XPathFunctionString__ctor_m3331743563_RuntimeMethod_var);
	}

IL_002f:
	{
		return;
	}
}
// System.Xml.XPath.XPathResultType System.Xml.XPath.XPathFunctionString::get_ReturnType()
extern "C"  int32_t XPathFunctionString_get_ReturnType_m2393569765 (XPathFunctionString_t3820712894 * __this, const RuntimeMethod* method)
{
	{
		return (int32_t)(1);
	}
}
// System.Boolean System.Xml.XPath.XPathFunctionString::get_Peer()
extern "C"  bool XPathFunctionString_get_Peer_m2448017165 (XPathFunctionString_t3820712894 * __this, const RuntimeMethod* method)
{
	int32_t G_B3_0 = 0;
	{
		Expression_t1452783009 * L_0 = __this->get_arg0_0();
		if (!L_0)
		{
			goto IL_001b;
		}
	}
	{
		Expression_t1452783009 * L_1 = __this->get_arg0_0();
		bool L_2 = VirtFuncInvoker0< bool >::Invoke(15 /* System.Boolean System.Xml.XPath.Expression::get_Peer() */, L_1);
		G_B3_0 = ((int32_t)(L_2));
		goto IL_001c;
	}

IL_001b:
	{
		G_B3_0 = 1;
	}

IL_001c:
	{
		return (bool)G_B3_0;
	}
}
// System.Object System.Xml.XPath.XPathFunctionString::Evaluate(System.Xml.XPath.BaseIterator)
extern "C"  RuntimeObject * XPathFunctionString_Evaluate_m951478619 (XPathFunctionString_t3820712894 * __this, BaseIterator_t4168896842 * ___iter0, const RuntimeMethod* method)
{
	{
		Expression_t1452783009 * L_0 = __this->get_arg0_0();
		if (L_0)
		{
			goto IL_0017;
		}
	}
	{
		BaseIterator_t4168896842 * L_1 = ___iter0;
		XPathNavigator_t787956054 * L_2 = VirtFuncInvoker0< XPathNavigator_t787956054 * >::Invoke(7 /* System.Xml.XPath.XPathNavigator System.Xml.XPath.XPathNodeIterator::get_Current() */, L_1);
		String_t* L_3 = VirtFuncInvoker0< String_t* >::Invoke(4 /* System.String System.Xml.XPath.XPathItem::get_Value() */, L_2);
		return L_3;
	}

IL_0017:
	{
		Expression_t1452783009 * L_4 = __this->get_arg0_0();
		BaseIterator_t4168896842 * L_5 = ___iter0;
		String_t* L_6 = VirtFuncInvoker1< String_t*, BaseIterator_t4168896842 * >::Invoke(17 /* System.String System.Xml.XPath.Expression::EvaluateString(System.Xml.XPath.BaseIterator) */, L_4, L_5);
		return L_6;
	}
}
// System.String System.Xml.XPath.XPathFunctionString::ToString()
extern "C"  String_t* XPathFunctionString_ToString_m2320118772 (XPathFunctionString_t3820712894 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XPathFunctionString_ToString_m2320118772_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Expression_t1452783009 * L_0 = __this->get_arg0_0();
		String_t* L_1 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_0);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_2 = String_Concat_m3755062657(NULL /*static, unused*/, _stringLiteral1047468947, L_1, _stringLiteral3452614535, /*hidden argument*/NULL);
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
// System.Void System.Xml.XPath.XPathFunctionStringLength::.ctor(System.Xml.XPath.FunctionArguments)
extern "C"  void XPathFunctionStringLength__ctor_m11633624 (XPathFunctionStringLength_t1686187666 * __this, FunctionArguments_t3573450773 * ___args0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XPathFunctionStringLength__ctor_m11633624_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		FunctionArguments_t3573450773 * L_0 = ___args0;
		XPathFunction__ctor_m3144973253(__this, L_0, /*hidden argument*/NULL);
		FunctionArguments_t3573450773 * L_1 = ___args0;
		if (!L_1)
		{
			goto IL_002f;
		}
	}
	{
		FunctionArguments_t3573450773 * L_2 = ___args0;
		Expression_t1452783009 * L_3 = FunctionArguments_get_Arg_m248443681(L_2, /*hidden argument*/NULL);
		__this->set_arg0_0(L_3);
		FunctionArguments_t3573450773 * L_4 = ___args0;
		FunctionArguments_t3573450773 * L_5 = FunctionArguments_get_Tail_m3050077184(L_4, /*hidden argument*/NULL);
		if (!L_5)
		{
			goto IL_002f;
		}
	}
	{
		XPathException_t2107611652 * L_6 = (XPathException_t2107611652 *)il2cpp_codegen_object_new(XPathException_t2107611652_il2cpp_TypeInfo_var);
		XPathException__ctor_m3226187054(L_6, _stringLiteral806674141, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_6, NULL, XPathFunctionStringLength__ctor_m11633624_RuntimeMethod_var);
	}

IL_002f:
	{
		return;
	}
}
// System.Xml.XPath.XPathResultType System.Xml.XPath.XPathFunctionStringLength::get_ReturnType()
extern "C"  int32_t XPathFunctionStringLength_get_ReturnType_m325132840 (XPathFunctionStringLength_t1686187666 * __this, const RuntimeMethod* method)
{
	{
		return (int32_t)(0);
	}
}
// System.Boolean System.Xml.XPath.XPathFunctionStringLength::get_Peer()
extern "C"  bool XPathFunctionStringLength_get_Peer_m3691759294 (XPathFunctionStringLength_t1686187666 * __this, const RuntimeMethod* method)
{
	int32_t G_B3_0 = 0;
	{
		Expression_t1452783009 * L_0 = __this->get_arg0_0();
		if (!L_0)
		{
			goto IL_001b;
		}
	}
	{
		Expression_t1452783009 * L_1 = __this->get_arg0_0();
		bool L_2 = VirtFuncInvoker0< bool >::Invoke(15 /* System.Boolean System.Xml.XPath.Expression::get_Peer() */, L_1);
		G_B3_0 = ((int32_t)(L_2));
		goto IL_001c;
	}

IL_001b:
	{
		G_B3_0 = 1;
	}

IL_001c:
	{
		return (bool)G_B3_0;
	}
}
// System.Object System.Xml.XPath.XPathFunctionStringLength::Evaluate(System.Xml.XPath.BaseIterator)
extern "C"  RuntimeObject * XPathFunctionStringLength_Evaluate_m2365164079 (XPathFunctionStringLength_t1686187666 * __this, BaseIterator_t4168896842 * ___iter0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XPathFunctionStringLength_Evaluate_m2365164079_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		Expression_t1452783009 * L_0 = __this->get_arg0_0();
		if (!L_0)
		{
			goto IL_001d;
		}
	}
	{
		Expression_t1452783009 * L_1 = __this->get_arg0_0();
		BaseIterator_t4168896842 * L_2 = ___iter0;
		String_t* L_3 = VirtFuncInvoker1< String_t*, BaseIterator_t4168896842 * >::Invoke(17 /* System.String System.Xml.XPath.Expression::EvaluateString(System.Xml.XPath.BaseIterator) */, L_1, L_2);
		V_0 = L_3;
		goto IL_0029;
	}

IL_001d:
	{
		BaseIterator_t4168896842 * L_4 = ___iter0;
		XPathNavigator_t787956054 * L_5 = VirtFuncInvoker0< XPathNavigator_t787956054 * >::Invoke(7 /* System.Xml.XPath.XPathNavigator System.Xml.XPath.XPathNodeIterator::get_Current() */, L_4);
		String_t* L_6 = VirtFuncInvoker0< String_t* >::Invoke(4 /* System.String System.Xml.XPath.XPathItem::get_Value() */, L_5);
		V_0 = L_6;
	}

IL_0029:
	{
		String_t* L_7 = V_0;
		int32_t L_8 = String_get_Length_m3847582255(L_7, /*hidden argument*/NULL);
		double L_9 = (((double)((double)L_8)));
		RuntimeObject * L_10 = Box(Double_t594665363_il2cpp_TypeInfo_var, &L_9);
		return L_10;
	}
}
// System.String System.Xml.XPath.XPathFunctionStringLength::ToString()
extern "C"  String_t* XPathFunctionStringLength_ToString_m4264241574 (XPathFunctionStringLength_t1686187666 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XPathFunctionStringLength_ToString_m4264241574_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		StringU5BU5D_t1281789340* L_0 = ((StringU5BU5D_t1281789340*)SZArrayNew(StringU5BU5D_t1281789340_il2cpp_TypeInfo_var, (uint32_t)3));
		ArrayElementTypeCheck (L_0, _stringLiteral2935813745);
		(L_0)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteral2935813745);
		StringU5BU5D_t1281789340* L_1 = L_0;
		Expression_t1452783009 * L_2 = __this->get_arg0_0();
		String_t* L_3 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_2);
		ArrayElementTypeCheck (L_1, L_3);
		(L_1)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(1), (String_t*)L_3);
		StringU5BU5D_t1281789340* L_4 = L_1;
		ArrayElementTypeCheck (L_4, _stringLiteral3452614535);
		(L_4)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(2), (String_t*)_stringLiteral3452614535);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_5 = String_Concat_m1809518182(NULL /*static, unused*/, L_4, /*hidden argument*/NULL);
		return L_5;
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
// System.Void System.Xml.XPath.XPathFunctionSubstring::.ctor(System.Xml.XPath.FunctionArguments)
extern "C"  void XPathFunctionSubstring__ctor_m2264598349 (XPathFunctionSubstring_t3677332116 * __this, FunctionArguments_t3573450773 * ___args0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XPathFunctionSubstring__ctor_m2264598349_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		FunctionArguments_t3573450773 * L_0 = ___args0;
		XPathFunction__ctor_m3144973253(__this, L_0, /*hidden argument*/NULL);
		FunctionArguments_t3573450773 * L_1 = ___args0;
		if (!L_1)
		{
			goto IL_003d;
		}
	}
	{
		FunctionArguments_t3573450773 * L_2 = ___args0;
		FunctionArguments_t3573450773 * L_3 = FunctionArguments_get_Tail_m3050077184(L_2, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_003d;
		}
	}
	{
		FunctionArguments_t3573450773 * L_4 = ___args0;
		FunctionArguments_t3573450773 * L_5 = FunctionArguments_get_Tail_m3050077184(L_4, /*hidden argument*/NULL);
		FunctionArguments_t3573450773 * L_6 = FunctionArguments_get_Tail_m3050077184(L_5, /*hidden argument*/NULL);
		if (!L_6)
		{
			goto IL_0048;
		}
	}
	{
		FunctionArguments_t3573450773 * L_7 = ___args0;
		FunctionArguments_t3573450773 * L_8 = FunctionArguments_get_Tail_m3050077184(L_7, /*hidden argument*/NULL);
		FunctionArguments_t3573450773 * L_9 = FunctionArguments_get_Tail_m3050077184(L_8, /*hidden argument*/NULL);
		FunctionArguments_t3573450773 * L_10 = FunctionArguments_get_Tail_m3050077184(L_9, /*hidden argument*/NULL);
		if (!L_10)
		{
			goto IL_0048;
		}
	}

IL_003d:
	{
		XPathException_t2107611652 * L_11 = (XPathException_t2107611652 *)il2cpp_codegen_object_new(XPathException_t2107611652_il2cpp_TypeInfo_var);
		XPathException__ctor_m3226187054(L_11, _stringLiteral3298025644, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_11, NULL, XPathFunctionSubstring__ctor_m2264598349_RuntimeMethod_var);
	}

IL_0048:
	{
		FunctionArguments_t3573450773 * L_12 = ___args0;
		Expression_t1452783009 * L_13 = FunctionArguments_get_Arg_m248443681(L_12, /*hidden argument*/NULL);
		__this->set_arg0_0(L_13);
		FunctionArguments_t3573450773 * L_14 = ___args0;
		FunctionArguments_t3573450773 * L_15 = FunctionArguments_get_Tail_m3050077184(L_14, /*hidden argument*/NULL);
		Expression_t1452783009 * L_16 = FunctionArguments_get_Arg_m248443681(L_15, /*hidden argument*/NULL);
		__this->set_arg1_1(L_16);
		FunctionArguments_t3573450773 * L_17 = ___args0;
		FunctionArguments_t3573450773 * L_18 = FunctionArguments_get_Tail_m3050077184(L_17, /*hidden argument*/NULL);
		FunctionArguments_t3573450773 * L_19 = FunctionArguments_get_Tail_m3050077184(L_18, /*hidden argument*/NULL);
		if (!L_19)
		{
			goto IL_008b;
		}
	}
	{
		FunctionArguments_t3573450773 * L_20 = ___args0;
		FunctionArguments_t3573450773 * L_21 = FunctionArguments_get_Tail_m3050077184(L_20, /*hidden argument*/NULL);
		FunctionArguments_t3573450773 * L_22 = FunctionArguments_get_Tail_m3050077184(L_21, /*hidden argument*/NULL);
		Expression_t1452783009 * L_23 = FunctionArguments_get_Arg_m248443681(L_22, /*hidden argument*/NULL);
		__this->set_arg2_2(L_23);
	}

IL_008b:
	{
		return;
	}
}
// System.Xml.XPath.XPathResultType System.Xml.XPath.XPathFunctionSubstring::get_ReturnType()
extern "C"  int32_t XPathFunctionSubstring_get_ReturnType_m3357223083 (XPathFunctionSubstring_t3677332116 * __this, const RuntimeMethod* method)
{
	{
		return (int32_t)(1);
	}
}
// System.Boolean System.Xml.XPath.XPathFunctionSubstring::get_Peer()
extern "C"  bool XPathFunctionSubstring_get_Peer_m465750464 (XPathFunctionSubstring_t3677332116 * __this, const RuntimeMethod* method)
{
	int32_t G_B5_0 = 0;
	int32_t G_B7_0 = 0;
	{
		Expression_t1452783009 * L_0 = __this->get_arg0_0();
		bool L_1 = VirtFuncInvoker0< bool >::Invoke(15 /* System.Boolean System.Xml.XPath.Expression::get_Peer() */, L_0);
		if (!L_1)
		{
			goto IL_003e;
		}
	}
	{
		Expression_t1452783009 * L_2 = __this->get_arg1_1();
		bool L_3 = VirtFuncInvoker0< bool >::Invoke(15 /* System.Boolean System.Xml.XPath.Expression::get_Peer() */, L_2);
		if (!L_3)
		{
			goto IL_003e;
		}
	}
	{
		Expression_t1452783009 * L_4 = __this->get_arg2_2();
		if (!L_4)
		{
			goto IL_003b;
		}
	}
	{
		Expression_t1452783009 * L_5 = __this->get_arg2_2();
		bool L_6 = VirtFuncInvoker0< bool >::Invoke(15 /* System.Boolean System.Xml.XPath.Expression::get_Peer() */, L_5);
		G_B5_0 = ((int32_t)(L_6));
		goto IL_003c;
	}

IL_003b:
	{
		G_B5_0 = 1;
	}

IL_003c:
	{
		G_B7_0 = G_B5_0;
		goto IL_003f;
	}

IL_003e:
	{
		G_B7_0 = 0;
	}

IL_003f:
	{
		return (bool)G_B7_0;
	}
}
// System.Object System.Xml.XPath.XPathFunctionSubstring::Evaluate(System.Xml.XPath.BaseIterator)
extern "C"  RuntimeObject * XPathFunctionSubstring_Evaluate_m515645369 (XPathFunctionSubstring_t3677332116 * __this, BaseIterator_t4168896842 * ___iter0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XPathFunctionSubstring_Evaluate_m515645369_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	double V_1 = 0.0;
	double V_2 = 0.0;
	double V_3 = 0.0;
	{
		Expression_t1452783009 * L_0 = __this->get_arg0_0();
		BaseIterator_t4168896842 * L_1 = ___iter0;
		String_t* L_2 = VirtFuncInvoker1< String_t*, BaseIterator_t4168896842 * >::Invoke(17 /* System.String System.Xml.XPath.Expression::EvaluateString(System.Xml.XPath.BaseIterator) */, L_0, L_1);
		V_0 = L_2;
		Expression_t1452783009 * L_3 = __this->get_arg1_1();
		BaseIterator_t4168896842 * L_4 = ___iter0;
		double L_5 = VirtFuncInvoker1< double, BaseIterator_t4168896842 * >::Invoke(16 /* System.Double System.Xml.XPath.Expression::EvaluateNumber(System.Xml.XPath.BaseIterator) */, L_3, L_4);
		double L_6 = bankers_round(L_5);
		V_1 = ((double)il2cpp_codegen_subtract((double)L_6, (double)(1.0)));
		double L_7 = V_1;
		bool L_8 = Double_IsNaN_m649024406(NULL /*static, unused*/, L_7, /*hidden argument*/NULL);
		if (L_8)
		{
			goto IL_004c;
		}
	}
	{
		double L_9 = V_1;
		bool L_10 = Double_IsNegativeInfinity_m538614603(NULL /*static, unused*/, L_9, /*hidden argument*/NULL);
		if (L_10)
		{
			goto IL_004c;
		}
	}
	{
		double L_11 = V_1;
		String_t* L_12 = V_0;
		int32_t L_13 = String_get_Length_m3847582255(L_12, /*hidden argument*/NULL);
		if ((!(((double)L_11) >= ((double)(((double)((double)L_13)))))))
		{
			goto IL_0052;
		}
	}

IL_004c:
	{
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_14 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_2();
		return L_14;
	}

IL_0052:
	{
		Expression_t1452783009 * L_15 = __this->get_arg2_2();
		if (L_15)
		{
			goto IL_007f;
		}
	}
	{
		double L_16 = V_1;
		if ((!(((double)L_16) < ((double)(0.0)))))
		{
			goto IL_0076;
		}
	}
	{
		V_1 = (0.0);
	}

IL_0076:
	{
		String_t* L_17 = V_0;
		double L_18 = V_1;
		String_t* L_19 = String_Substring_m2848979100(L_17, (((int32_t)((int32_t)L_18))), /*hidden argument*/NULL);
		return L_19;
	}

IL_007f:
	{
		Expression_t1452783009 * L_20 = __this->get_arg2_2();
		BaseIterator_t4168896842 * L_21 = ___iter0;
		double L_22 = VirtFuncInvoker1< double, BaseIterator_t4168896842 * >::Invoke(16 /* System.Double System.Xml.XPath.Expression::EvaluateNumber(System.Xml.XPath.BaseIterator) */, L_20, L_21);
		double L_23 = bankers_round(L_22);
		V_2 = L_23;
		double L_24 = V_2;
		bool L_25 = Double_IsNaN_m649024406(NULL /*static, unused*/, L_24, /*hidden argument*/NULL);
		if (!L_25)
		{
			goto IL_00a2;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_26 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_2();
		return L_26;
	}

IL_00a2:
	{
		double L_27 = V_1;
		if ((((double)L_27) < ((double)(0.0))))
		{
			goto IL_00c0;
		}
	}
	{
		double L_28 = V_2;
		if ((!(((double)L_28) < ((double)(0.0)))))
		{
			goto IL_00e3;
		}
	}

IL_00c0:
	{
		double L_29 = V_1;
		double L_30 = V_2;
		V_2 = ((double)il2cpp_codegen_add((double)L_29, (double)L_30));
		double L_31 = V_2;
		if ((!(((double)L_31) <= ((double)(0.0)))))
		{
			goto IL_00d9;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_32 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_2();
		return L_32;
	}

IL_00d9:
	{
		V_1 = (0.0);
	}

IL_00e3:
	{
		String_t* L_33 = V_0;
		int32_t L_34 = String_get_Length_m3847582255(L_33, /*hidden argument*/NULL);
		double L_35 = V_1;
		V_3 = ((double)il2cpp_codegen_subtract((double)(((double)((double)L_34))), (double)L_35));
		double L_36 = V_2;
		double L_37 = V_3;
		if ((!(((double)L_36) > ((double)L_37))))
		{
			goto IL_00f6;
		}
	}
	{
		double L_38 = V_3;
		V_2 = L_38;
	}

IL_00f6:
	{
		String_t* L_39 = V_0;
		double L_40 = V_1;
		double L_41 = V_2;
		String_t* L_42 = String_Substring_m1610150815(L_39, (((int32_t)((int32_t)L_40))), (((int32_t)((int32_t)L_41))), /*hidden argument*/NULL);
		return L_42;
	}
}
// System.String System.Xml.XPath.XPathFunctionSubstring::ToString()
extern "C"  String_t* XPathFunctionSubstring_ToString_m2628232305 (XPathFunctionSubstring_t3677332116 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XPathFunctionSubstring_ToString_m2628232305_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		StringU5BU5D_t1281789340* L_0 = ((StringU5BU5D_t1281789340*)SZArrayNew(StringU5BU5D_t1281789340_il2cpp_TypeInfo_var, (uint32_t)7));
		ArrayElementTypeCheck (L_0, _stringLiteral2886408229);
		(L_0)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteral2886408229);
		StringU5BU5D_t1281789340* L_1 = L_0;
		Expression_t1452783009 * L_2 = __this->get_arg0_0();
		String_t* L_3 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_2);
		ArrayElementTypeCheck (L_1, L_3);
		(L_1)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(1), (String_t*)L_3);
		StringU5BU5D_t1281789340* L_4 = L_1;
		ArrayElementTypeCheck (L_4, _stringLiteral3452614532);
		(L_4)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(2), (String_t*)_stringLiteral3452614532);
		StringU5BU5D_t1281789340* L_5 = L_4;
		Expression_t1452783009 * L_6 = __this->get_arg1_1();
		String_t* L_7 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_6);
		ArrayElementTypeCheck (L_5, L_7);
		(L_5)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(3), (String_t*)L_7);
		StringU5BU5D_t1281789340* L_8 = L_5;
		ArrayElementTypeCheck (L_8, _stringLiteral3452614532);
		(L_8)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(4), (String_t*)_stringLiteral3452614532);
		StringU5BU5D_t1281789340* L_9 = L_8;
		Expression_t1452783009 * L_10 = __this->get_arg2_2();
		String_t* L_11 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_10);
		ArrayElementTypeCheck (L_9, L_11);
		(L_9)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(5), (String_t*)L_11);
		StringU5BU5D_t1281789340* L_12 = L_9;
		ArrayElementTypeCheck (L_12, _stringLiteral3452614535);
		(L_12)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(6), (String_t*)_stringLiteral3452614535);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_13 = String_Concat_m1809518182(NULL /*static, unused*/, L_12, /*hidden argument*/NULL);
		return L_13;
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
// System.Void System.Xml.XPath.XPathFunctionSubstringAfter::.ctor(System.Xml.XPath.FunctionArguments)
extern "C"  void XPathFunctionSubstringAfter__ctor_m3597395567 (XPathFunctionSubstringAfter_t2254953802 * __this, FunctionArguments_t3573450773 * ___args0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XPathFunctionSubstringAfter__ctor_m3597395567_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		FunctionArguments_t3573450773 * L_0 = ___args0;
		XPathFunction__ctor_m3144973253(__this, L_0, /*hidden argument*/NULL);
		FunctionArguments_t3573450773 * L_1 = ___args0;
		if (!L_1)
		{
			goto IL_0028;
		}
	}
	{
		FunctionArguments_t3573450773 * L_2 = ___args0;
		FunctionArguments_t3573450773 * L_3 = FunctionArguments_get_Tail_m3050077184(L_2, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_0028;
		}
	}
	{
		FunctionArguments_t3573450773 * L_4 = ___args0;
		FunctionArguments_t3573450773 * L_5 = FunctionArguments_get_Tail_m3050077184(L_4, /*hidden argument*/NULL);
		FunctionArguments_t3573450773 * L_6 = FunctionArguments_get_Tail_m3050077184(L_5, /*hidden argument*/NULL);
		if (!L_6)
		{
			goto IL_0033;
		}
	}

IL_0028:
	{
		XPathException_t2107611652 * L_7 = (XPathException_t2107611652 *)il2cpp_codegen_object_new(XPathException_t2107611652_il2cpp_TypeInfo_var);
		XPathException__ctor_m3226187054(L_7, _stringLiteral3682020502, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_7, NULL, XPathFunctionSubstringAfter__ctor_m3597395567_RuntimeMethod_var);
	}

IL_0033:
	{
		FunctionArguments_t3573450773 * L_8 = ___args0;
		Expression_t1452783009 * L_9 = FunctionArguments_get_Arg_m248443681(L_8, /*hidden argument*/NULL);
		__this->set_arg0_0(L_9);
		FunctionArguments_t3573450773 * L_10 = ___args0;
		FunctionArguments_t3573450773 * L_11 = FunctionArguments_get_Tail_m3050077184(L_10, /*hidden argument*/NULL);
		Expression_t1452783009 * L_12 = FunctionArguments_get_Arg_m248443681(L_11, /*hidden argument*/NULL);
		__this->set_arg1_1(L_12);
		return;
	}
}
// System.Xml.XPath.XPathResultType System.Xml.XPath.XPathFunctionSubstringAfter::get_ReturnType()
extern "C"  int32_t XPathFunctionSubstringAfter_get_ReturnType_m2261212472 (XPathFunctionSubstringAfter_t2254953802 * __this, const RuntimeMethod* method)
{
	{
		return (int32_t)(1);
	}
}
// System.Boolean System.Xml.XPath.XPathFunctionSubstringAfter::get_Peer()
extern "C"  bool XPathFunctionSubstringAfter_get_Peer_m2693235889 (XPathFunctionSubstringAfter_t2254953802 * __this, const RuntimeMethod* method)
{
	int32_t G_B3_0 = 0;
	{
		Expression_t1452783009 * L_0 = __this->get_arg0_0();
		bool L_1 = VirtFuncInvoker0< bool >::Invoke(15 /* System.Boolean System.Xml.XPath.Expression::get_Peer() */, L_0);
		if (!L_1)
		{
			goto IL_001d;
		}
	}
	{
		Expression_t1452783009 * L_2 = __this->get_arg1_1();
		bool L_3 = VirtFuncInvoker0< bool >::Invoke(15 /* System.Boolean System.Xml.XPath.Expression::get_Peer() */, L_2);
		G_B3_0 = ((int32_t)(L_3));
		goto IL_001e;
	}

IL_001d:
	{
		G_B3_0 = 0;
	}

IL_001e:
	{
		return (bool)G_B3_0;
	}
}
// System.Object System.Xml.XPath.XPathFunctionSubstringAfter::Evaluate(System.Xml.XPath.BaseIterator)
extern "C"  RuntimeObject * XPathFunctionSubstringAfter_Evaluate_m3144494021 (XPathFunctionSubstringAfter_t2254953802 * __this, BaseIterator_t4168896842 * ___iter0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XPathFunctionSubstringAfter_Evaluate_m3144494021_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	String_t* V_1 = NULL;
	int32_t V_2 = 0;
	{
		Expression_t1452783009 * L_0 = __this->get_arg0_0();
		BaseIterator_t4168896842 * L_1 = ___iter0;
		String_t* L_2 = VirtFuncInvoker1< String_t*, BaseIterator_t4168896842 * >::Invoke(17 /* System.String System.Xml.XPath.Expression::EvaluateString(System.Xml.XPath.BaseIterator) */, L_0, L_1);
		V_0 = L_2;
		Expression_t1452783009 * L_3 = __this->get_arg1_1();
		BaseIterator_t4168896842 * L_4 = ___iter0;
		String_t* L_5 = VirtFuncInvoker1< String_t*, BaseIterator_t4168896842 * >::Invoke(17 /* System.String System.Xml.XPath.Expression::EvaluateString(System.Xml.XPath.BaseIterator) */, L_3, L_4);
		V_1 = L_5;
		String_t* L_6 = V_0;
		String_t* L_7 = V_1;
		int32_t L_8 = String_IndexOf_m1977622757(L_6, L_7, /*hidden argument*/NULL);
		V_2 = L_8;
		int32_t L_9 = V_2;
		if ((((int32_t)L_9) >= ((int32_t)0)))
		{
			goto IL_002f;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_10 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_2();
		return L_10;
	}

IL_002f:
	{
		String_t* L_11 = V_0;
		int32_t L_12 = V_2;
		String_t* L_13 = V_1;
		int32_t L_14 = String_get_Length_m3847582255(L_13, /*hidden argument*/NULL);
		String_t* L_15 = String_Substring_m2848979100(L_11, ((int32_t)il2cpp_codegen_add((int32_t)L_12, (int32_t)L_14)), /*hidden argument*/NULL);
		return L_15;
	}
}
// System.String System.Xml.XPath.XPathFunctionSubstringAfter::ToString()
extern "C"  String_t* XPathFunctionSubstringAfter_ToString_m508113573 (XPathFunctionSubstringAfter_t2254953802 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XPathFunctionSubstringAfter_ToString_m508113573_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		StringU5BU5D_t1281789340* L_0 = ((StringU5BU5D_t1281789340*)SZArrayNew(StringU5BU5D_t1281789340_il2cpp_TypeInfo_var, (uint32_t)5));
		ArrayElementTypeCheck (L_0, _stringLiteral3739159295);
		(L_0)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteral3739159295);
		StringU5BU5D_t1281789340* L_1 = L_0;
		Expression_t1452783009 * L_2 = __this->get_arg0_0();
		String_t* L_3 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_2);
		ArrayElementTypeCheck (L_1, L_3);
		(L_1)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(1), (String_t*)L_3);
		StringU5BU5D_t1281789340* L_4 = L_1;
		ArrayElementTypeCheck (L_4, _stringLiteral3452614532);
		(L_4)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(2), (String_t*)_stringLiteral3452614532);
		StringU5BU5D_t1281789340* L_5 = L_4;
		Expression_t1452783009 * L_6 = __this->get_arg1_1();
		String_t* L_7 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_6);
		ArrayElementTypeCheck (L_5, L_7);
		(L_5)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(3), (String_t*)L_7);
		StringU5BU5D_t1281789340* L_8 = L_5;
		ArrayElementTypeCheck (L_8, _stringLiteral3452614535);
		(L_8)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(4), (String_t*)_stringLiteral3452614535);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_9 = String_Concat_m1809518182(NULL /*static, unused*/, L_8, /*hidden argument*/NULL);
		return L_9;
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
// System.Void System.Xml.XPath.XPathFunctionSubstringBefore::.ctor(System.Xml.XPath.FunctionArguments)
extern "C"  void XPathFunctionSubstringBefore__ctor_m91696614 (XPathFunctionSubstringBefore_t3299707364 * __this, FunctionArguments_t3573450773 * ___args0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XPathFunctionSubstringBefore__ctor_m91696614_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		FunctionArguments_t3573450773 * L_0 = ___args0;
		XPathFunction__ctor_m3144973253(__this, L_0, /*hidden argument*/NULL);
		FunctionArguments_t3573450773 * L_1 = ___args0;
		if (!L_1)
		{
			goto IL_0028;
		}
	}
	{
		FunctionArguments_t3573450773 * L_2 = ___args0;
		FunctionArguments_t3573450773 * L_3 = FunctionArguments_get_Tail_m3050077184(L_2, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_0028;
		}
	}
	{
		FunctionArguments_t3573450773 * L_4 = ___args0;
		FunctionArguments_t3573450773 * L_5 = FunctionArguments_get_Tail_m3050077184(L_4, /*hidden argument*/NULL);
		FunctionArguments_t3573450773 * L_6 = FunctionArguments_get_Tail_m3050077184(L_5, /*hidden argument*/NULL);
		if (!L_6)
		{
			goto IL_0033;
		}
	}

IL_0028:
	{
		XPathException_t2107611652 * L_7 = (XPathException_t2107611652 *)il2cpp_codegen_object_new(XPathException_t2107611652_il2cpp_TypeInfo_var);
		XPathException__ctor_m3226187054(L_7, _stringLiteral1496220073, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_7, NULL, XPathFunctionSubstringBefore__ctor_m91696614_RuntimeMethod_var);
	}

IL_0033:
	{
		FunctionArguments_t3573450773 * L_8 = ___args0;
		Expression_t1452783009 * L_9 = FunctionArguments_get_Arg_m248443681(L_8, /*hidden argument*/NULL);
		__this->set_arg0_0(L_9);
		FunctionArguments_t3573450773 * L_10 = ___args0;
		FunctionArguments_t3573450773 * L_11 = FunctionArguments_get_Tail_m3050077184(L_10, /*hidden argument*/NULL);
		Expression_t1452783009 * L_12 = FunctionArguments_get_Arg_m248443681(L_11, /*hidden argument*/NULL);
		__this->set_arg1_1(L_12);
		return;
	}
}
// System.Xml.XPath.XPathResultType System.Xml.XPath.XPathFunctionSubstringBefore::get_ReturnType()
extern "C"  int32_t XPathFunctionSubstringBefore_get_ReturnType_m3516694220 (XPathFunctionSubstringBefore_t3299707364 * __this, const RuntimeMethod* method)
{
	{
		return (int32_t)(1);
	}
}
// System.Boolean System.Xml.XPath.XPathFunctionSubstringBefore::get_Peer()
extern "C"  bool XPathFunctionSubstringBefore_get_Peer_m4111052376 (XPathFunctionSubstringBefore_t3299707364 * __this, const RuntimeMethod* method)
{
	int32_t G_B3_0 = 0;
	{
		Expression_t1452783009 * L_0 = __this->get_arg0_0();
		bool L_1 = VirtFuncInvoker0< bool >::Invoke(15 /* System.Boolean System.Xml.XPath.Expression::get_Peer() */, L_0);
		if (!L_1)
		{
			goto IL_001d;
		}
	}
	{
		Expression_t1452783009 * L_2 = __this->get_arg1_1();
		bool L_3 = VirtFuncInvoker0< bool >::Invoke(15 /* System.Boolean System.Xml.XPath.Expression::get_Peer() */, L_2);
		G_B3_0 = ((int32_t)(L_3));
		goto IL_001e;
	}

IL_001d:
	{
		G_B3_0 = 0;
	}

IL_001e:
	{
		return (bool)G_B3_0;
	}
}
// System.Object System.Xml.XPath.XPathFunctionSubstringBefore::Evaluate(System.Xml.XPath.BaseIterator)
extern "C"  RuntimeObject * XPathFunctionSubstringBefore_Evaluate_m1178380643 (XPathFunctionSubstringBefore_t3299707364 * __this, BaseIterator_t4168896842 * ___iter0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XPathFunctionSubstringBefore_Evaluate_m1178380643_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	String_t* V_1 = NULL;
	int32_t V_2 = 0;
	{
		Expression_t1452783009 * L_0 = __this->get_arg0_0();
		BaseIterator_t4168896842 * L_1 = ___iter0;
		String_t* L_2 = VirtFuncInvoker1< String_t*, BaseIterator_t4168896842 * >::Invoke(17 /* System.String System.Xml.XPath.Expression::EvaluateString(System.Xml.XPath.BaseIterator) */, L_0, L_1);
		V_0 = L_2;
		Expression_t1452783009 * L_3 = __this->get_arg1_1();
		BaseIterator_t4168896842 * L_4 = ___iter0;
		String_t* L_5 = VirtFuncInvoker1< String_t*, BaseIterator_t4168896842 * >::Invoke(17 /* System.String System.Xml.XPath.Expression::EvaluateString(System.Xml.XPath.BaseIterator) */, L_3, L_4);
		V_1 = L_5;
		String_t* L_6 = V_0;
		String_t* L_7 = V_1;
		int32_t L_8 = String_IndexOf_m1977622757(L_6, L_7, /*hidden argument*/NULL);
		V_2 = L_8;
		int32_t L_9 = V_2;
		if ((((int32_t)L_9) > ((int32_t)0)))
		{
			goto IL_002f;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_10 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_2();
		return L_10;
	}

IL_002f:
	{
		String_t* L_11 = V_0;
		int32_t L_12 = V_2;
		String_t* L_13 = String_Substring_m1610150815(L_11, 0, L_12, /*hidden argument*/NULL);
		return L_13;
	}
}
// System.String System.Xml.XPath.XPathFunctionSubstringBefore::ToString()
extern "C"  String_t* XPathFunctionSubstringBefore_ToString_m713324320 (XPathFunctionSubstringBefore_t3299707364 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XPathFunctionSubstringBefore_ToString_m713324320_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		StringU5BU5D_t1281789340* L_0 = ((StringU5BU5D_t1281789340*)SZArrayNew(StringU5BU5D_t1281789340_il2cpp_TypeInfo_var, (uint32_t)5));
		ArrayElementTypeCheck (L_0, _stringLiteral3263930909);
		(L_0)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteral3263930909);
		StringU5BU5D_t1281789340* L_1 = L_0;
		Expression_t1452783009 * L_2 = __this->get_arg0_0();
		String_t* L_3 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_2);
		ArrayElementTypeCheck (L_1, L_3);
		(L_1)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(1), (String_t*)L_3);
		StringU5BU5D_t1281789340* L_4 = L_1;
		ArrayElementTypeCheck (L_4, _stringLiteral3452614532);
		(L_4)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(2), (String_t*)_stringLiteral3452614532);
		StringU5BU5D_t1281789340* L_5 = L_4;
		Expression_t1452783009 * L_6 = __this->get_arg1_1();
		String_t* L_7 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_6);
		ArrayElementTypeCheck (L_5, L_7);
		(L_5)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(3), (String_t*)L_7);
		StringU5BU5D_t1281789340* L_8 = L_5;
		ArrayElementTypeCheck (L_8, _stringLiteral3452614535);
		(L_8)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(4), (String_t*)_stringLiteral3452614535);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_9 = String_Concat_m1809518182(NULL /*static, unused*/, L_8, /*hidden argument*/NULL);
		return L_9;
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
// System.Void System.Xml.XPath.XPathFunctionSum::.ctor(System.Xml.XPath.FunctionArguments)
extern "C"  void XPathFunctionSum__ctor_m1838306581 (XPathFunctionSum_t2229418177 * __this, FunctionArguments_t3573450773 * ___args0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XPathFunctionSum__ctor_m1838306581_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		FunctionArguments_t3573450773 * L_0 = ___args0;
		XPathNumericFunction__ctor_m4265073059(__this, L_0, /*hidden argument*/NULL);
		FunctionArguments_t3573450773 * L_1 = ___args0;
		if (!L_1)
		{
			goto IL_0018;
		}
	}
	{
		FunctionArguments_t3573450773 * L_2 = ___args0;
		FunctionArguments_t3573450773 * L_3 = FunctionArguments_get_Tail_m3050077184(L_2, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_0023;
		}
	}

IL_0018:
	{
		XPathException_t2107611652 * L_4 = (XPathException_t2107611652 *)il2cpp_codegen_object_new(XPathException_t2107611652_il2cpp_TypeInfo_var);
		XPathException__ctor_m3226187054(L_4, _stringLiteral1453273811, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, NULL, XPathFunctionSum__ctor_m1838306581_RuntimeMethod_var);
	}

IL_0023:
	{
		FunctionArguments_t3573450773 * L_5 = ___args0;
		Expression_t1452783009 * L_6 = FunctionArguments_get_Arg_m248443681(L_5, /*hidden argument*/NULL);
		__this->set_arg0_0(L_6);
		return;
	}
}
// System.Boolean System.Xml.XPath.XPathFunctionSum::get_Peer()
extern "C"  bool XPathFunctionSum_get_Peer_m926043817 (XPathFunctionSum_t2229418177 * __this, const RuntimeMethod* method)
{
	{
		Expression_t1452783009 * L_0 = __this->get_arg0_0();
		bool L_1 = VirtFuncInvoker0< bool >::Invoke(15 /* System.Boolean System.Xml.XPath.Expression::get_Peer() */, L_0);
		return L_1;
	}
}
// System.Object System.Xml.XPath.XPathFunctionSum::Evaluate(System.Xml.XPath.BaseIterator)
extern "C"  RuntimeObject * XPathFunctionSum_Evaluate_m1100496780 (XPathFunctionSum_t2229418177 * __this, BaseIterator_t4168896842 * ___iter0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XPathFunctionSum_Evaluate_m1100496780_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	XPathNodeIterator_t3667290188 * V_0 = NULL;
	double V_1 = 0.0;
	{
		Expression_t1452783009 * L_0 = __this->get_arg0_0();
		BaseIterator_t4168896842 * L_1 = ___iter0;
		BaseIterator_t4168896842 * L_2 = VirtFuncInvoker1< BaseIterator_t4168896842 *, BaseIterator_t4168896842 * >::Invoke(14 /* System.Xml.XPath.BaseIterator System.Xml.XPath.Expression::EvaluateNodeSet(System.Xml.XPath.BaseIterator) */, L_0, L_1);
		V_0 = L_2;
		V_1 = (0.0);
		goto IL_002f;
	}

IL_001c:
	{
		double L_3 = V_1;
		XPathNodeIterator_t3667290188 * L_4 = V_0;
		XPathNavigator_t787956054 * L_5 = VirtFuncInvoker0< XPathNavigator_t787956054 * >::Invoke(7 /* System.Xml.XPath.XPathNavigator System.Xml.XPath.XPathNodeIterator::get_Current() */, L_4);
		String_t* L_6 = VirtFuncInvoker0< String_t* >::Invoke(4 /* System.String System.Xml.XPath.XPathItem::get_Value() */, L_5);
		double L_7 = XPathFunctions_ToNumber_m2526127645(NULL /*static, unused*/, L_6, /*hidden argument*/NULL);
		V_1 = ((double)il2cpp_codegen_add((double)L_3, (double)L_7));
	}

IL_002f:
	{
		XPathNodeIterator_t3667290188 * L_8 = V_0;
		bool L_9 = VirtFuncInvoker0< bool >::Invoke(11 /* System.Boolean System.Xml.XPath.XPathNodeIterator::MoveNext() */, L_8);
		if (L_9)
		{
			goto IL_001c;
		}
	}
	{
		double L_10 = V_1;
		double L_11 = L_10;
		RuntimeObject * L_12 = Box(Double_t594665363_il2cpp_TypeInfo_var, &L_11);
		return L_12;
	}
}
// System.String System.Xml.XPath.XPathFunctionSum::ToString()
extern "C"  String_t* XPathFunctionSum_ToString_m476682059 (XPathFunctionSum_t2229418177 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XPathFunctionSum_ToString_m476682059_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		StringU5BU5D_t1281789340* L_0 = ((StringU5BU5D_t1281789340*)SZArrayNew(StringU5BU5D_t1281789340_il2cpp_TypeInfo_var, (uint32_t)3));
		ArrayElementTypeCheck (L_0, _stringLiteral1051335814);
		(L_0)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteral1051335814);
		StringU5BU5D_t1281789340* L_1 = L_0;
		Expression_t1452783009 * L_2 = __this->get_arg0_0();
		String_t* L_3 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_2);
		ArrayElementTypeCheck (L_1, L_3);
		(L_1)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(1), (String_t*)L_3);
		StringU5BU5D_t1281789340* L_4 = L_1;
		ArrayElementTypeCheck (L_4, _stringLiteral3452614535);
		(L_4)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(2), (String_t*)_stringLiteral3452614535);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_5 = String_Concat_m1809518182(NULL /*static, unused*/, L_4, /*hidden argument*/NULL);
		return L_5;
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
// System.Void System.Xml.XPath.XPathFunctionTranslate::.ctor(System.Xml.XPath.FunctionArguments)
extern "C"  void XPathFunctionTranslate__ctor_m1010373577 (XPathFunctionTranslate_t1071508611 * __this, FunctionArguments_t3573450773 * ___args0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XPathFunctionTranslate__ctor_m1010373577_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		FunctionArguments_t3573450773 * L_0 = ___args0;
		XPathFunction__ctor_m3144973253(__this, L_0, /*hidden argument*/NULL);
		FunctionArguments_t3573450773 * L_1 = ___args0;
		if (!L_1)
		{
			goto IL_003d;
		}
	}
	{
		FunctionArguments_t3573450773 * L_2 = ___args0;
		FunctionArguments_t3573450773 * L_3 = FunctionArguments_get_Tail_m3050077184(L_2, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_003d;
		}
	}
	{
		FunctionArguments_t3573450773 * L_4 = ___args0;
		FunctionArguments_t3573450773 * L_5 = FunctionArguments_get_Tail_m3050077184(L_4, /*hidden argument*/NULL);
		FunctionArguments_t3573450773 * L_6 = FunctionArguments_get_Tail_m3050077184(L_5, /*hidden argument*/NULL);
		if (!L_6)
		{
			goto IL_003d;
		}
	}
	{
		FunctionArguments_t3573450773 * L_7 = ___args0;
		FunctionArguments_t3573450773 * L_8 = FunctionArguments_get_Tail_m3050077184(L_7, /*hidden argument*/NULL);
		FunctionArguments_t3573450773 * L_9 = FunctionArguments_get_Tail_m3050077184(L_8, /*hidden argument*/NULL);
		FunctionArguments_t3573450773 * L_10 = FunctionArguments_get_Tail_m3050077184(L_9, /*hidden argument*/NULL);
		if (!L_10)
		{
			goto IL_0048;
		}
	}

IL_003d:
	{
		XPathException_t2107611652 * L_11 = (XPathException_t2107611652 *)il2cpp_codegen_object_new(XPathException_t2107611652_il2cpp_TypeInfo_var);
		XPathException__ctor_m3226187054(L_11, _stringLiteral2740254051, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_11, NULL, XPathFunctionTranslate__ctor_m1010373577_RuntimeMethod_var);
	}

IL_0048:
	{
		FunctionArguments_t3573450773 * L_12 = ___args0;
		Expression_t1452783009 * L_13 = FunctionArguments_get_Arg_m248443681(L_12, /*hidden argument*/NULL);
		__this->set_arg0_0(L_13);
		FunctionArguments_t3573450773 * L_14 = ___args0;
		FunctionArguments_t3573450773 * L_15 = FunctionArguments_get_Tail_m3050077184(L_14, /*hidden argument*/NULL);
		Expression_t1452783009 * L_16 = FunctionArguments_get_Arg_m248443681(L_15, /*hidden argument*/NULL);
		__this->set_arg1_1(L_16);
		FunctionArguments_t3573450773 * L_17 = ___args0;
		FunctionArguments_t3573450773 * L_18 = FunctionArguments_get_Tail_m3050077184(L_17, /*hidden argument*/NULL);
		FunctionArguments_t3573450773 * L_19 = FunctionArguments_get_Tail_m3050077184(L_18, /*hidden argument*/NULL);
		Expression_t1452783009 * L_20 = FunctionArguments_get_Arg_m248443681(L_19, /*hidden argument*/NULL);
		__this->set_arg2_2(L_20);
		return;
	}
}
// System.Xml.XPath.XPathResultType System.Xml.XPath.XPathFunctionTranslate::get_ReturnType()
extern "C"  int32_t XPathFunctionTranslate_get_ReturnType_m148354417 (XPathFunctionTranslate_t1071508611 * __this, const RuntimeMethod* method)
{
	{
		return (int32_t)(1);
	}
}
// System.Boolean System.Xml.XPath.XPathFunctionTranslate::get_Peer()
extern "C"  bool XPathFunctionTranslate_get_Peer_m3010810371 (XPathFunctionTranslate_t1071508611 * __this, const RuntimeMethod* method)
{
	int32_t G_B4_0 = 0;
	{
		Expression_t1452783009 * L_0 = __this->get_arg0_0();
		bool L_1 = VirtFuncInvoker0< bool >::Invoke(15 /* System.Boolean System.Xml.XPath.Expression::get_Peer() */, L_0);
		if (!L_1)
		{
			goto IL_002d;
		}
	}
	{
		Expression_t1452783009 * L_2 = __this->get_arg1_1();
		bool L_3 = VirtFuncInvoker0< bool >::Invoke(15 /* System.Boolean System.Xml.XPath.Expression::get_Peer() */, L_2);
		if (!L_3)
		{
			goto IL_002d;
		}
	}
	{
		Expression_t1452783009 * L_4 = __this->get_arg2_2();
		bool L_5 = VirtFuncInvoker0< bool >::Invoke(15 /* System.Boolean System.Xml.XPath.Expression::get_Peer() */, L_4);
		G_B4_0 = ((int32_t)(L_5));
		goto IL_002e;
	}

IL_002d:
	{
		G_B4_0 = 0;
	}

IL_002e:
	{
		return (bool)G_B4_0;
	}
}
// System.Object System.Xml.XPath.XPathFunctionTranslate::Evaluate(System.Xml.XPath.BaseIterator)
extern "C"  RuntimeObject * XPathFunctionTranslate_Evaluate_m2771955553 (XPathFunctionTranslate_t1071508611 * __this, BaseIterator_t4168896842 * ___iter0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XPathFunctionTranslate_Evaluate_m2771955553_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	String_t* V_1 = NULL;
	String_t* V_2 = NULL;
	StringBuilder_t * V_3 = NULL;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	int32_t V_7 = 0;
	{
		Expression_t1452783009 * L_0 = __this->get_arg0_0();
		BaseIterator_t4168896842 * L_1 = ___iter0;
		String_t* L_2 = VirtFuncInvoker1< String_t*, BaseIterator_t4168896842 * >::Invoke(17 /* System.String System.Xml.XPath.Expression::EvaluateString(System.Xml.XPath.BaseIterator) */, L_0, L_1);
		V_0 = L_2;
		Expression_t1452783009 * L_3 = __this->get_arg1_1();
		BaseIterator_t4168896842 * L_4 = ___iter0;
		String_t* L_5 = VirtFuncInvoker1< String_t*, BaseIterator_t4168896842 * >::Invoke(17 /* System.String System.Xml.XPath.Expression::EvaluateString(System.Xml.XPath.BaseIterator) */, L_3, L_4);
		V_1 = L_5;
		Expression_t1452783009 * L_6 = __this->get_arg2_2();
		BaseIterator_t4168896842 * L_7 = ___iter0;
		String_t* L_8 = VirtFuncInvoker1< String_t*, BaseIterator_t4168896842 * >::Invoke(17 /* System.String System.Xml.XPath.Expression::EvaluateString(System.Xml.XPath.BaseIterator) */, L_6, L_7);
		V_2 = L_8;
		String_t* L_9 = V_0;
		int32_t L_10 = String_get_Length_m3847582255(L_9, /*hidden argument*/NULL);
		StringBuilder_t * L_11 = (StringBuilder_t *)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
		StringBuilder__ctor_m2367297767(L_11, L_10, /*hidden argument*/NULL);
		V_3 = L_11;
		V_4 = 0;
		String_t* L_12 = V_0;
		int32_t L_13 = String_get_Length_m3847582255(L_12, /*hidden argument*/NULL);
		V_5 = L_13;
		String_t* L_14 = V_2;
		int32_t L_15 = String_get_Length_m3847582255(L_14, /*hidden argument*/NULL);
		V_6 = L_15;
		goto IL_0095;
	}

IL_004b:
	{
		String_t* L_16 = V_1;
		String_t* L_17 = V_0;
		int32_t L_18 = V_4;
		Il2CppChar L_19 = String_get_Chars_m2986988803(L_17, L_18, /*hidden argument*/NULL);
		int32_t L_20 = String_IndexOf_m363431711(L_16, L_19, /*hidden argument*/NULL);
		V_7 = L_20;
		int32_t L_21 = V_7;
		if ((((int32_t)L_21) == ((int32_t)(-1))))
		{
			goto IL_0080;
		}
	}
	{
		int32_t L_22 = V_7;
		int32_t L_23 = V_6;
		if ((((int32_t)L_22) >= ((int32_t)L_23)))
		{
			goto IL_007b;
		}
	}
	{
		StringBuilder_t * L_24 = V_3;
		String_t* L_25 = V_2;
		int32_t L_26 = V_7;
		Il2CppChar L_27 = String_get_Chars_m2986988803(L_25, L_26, /*hidden argument*/NULL);
		StringBuilder_Append_m2383614642(L_24, L_27, /*hidden argument*/NULL);
	}

IL_007b:
	{
		goto IL_008f;
	}

IL_0080:
	{
		StringBuilder_t * L_28 = V_3;
		String_t* L_29 = V_0;
		int32_t L_30 = V_4;
		Il2CppChar L_31 = String_get_Chars_m2986988803(L_29, L_30, /*hidden argument*/NULL);
		StringBuilder_Append_m2383614642(L_28, L_31, /*hidden argument*/NULL);
	}

IL_008f:
	{
		int32_t L_32 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add((int32_t)L_32, (int32_t)1));
	}

IL_0095:
	{
		int32_t L_33 = V_4;
		int32_t L_34 = V_5;
		if ((((int32_t)L_33) < ((int32_t)L_34)))
		{
			goto IL_004b;
		}
	}
	{
		StringBuilder_t * L_35 = V_3;
		String_t* L_36 = StringBuilder_ToString_m3317489284(L_35, /*hidden argument*/NULL);
		return L_36;
	}
}
// System.String System.Xml.XPath.XPathFunctionTranslate::ToString()
extern "C"  String_t* XPathFunctionTranslate_ToString_m3251102428 (XPathFunctionTranslate_t1071508611 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XPathFunctionTranslate_ToString_m3251102428_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		StringU5BU5D_t1281789340* L_0 = ((StringU5BU5D_t1281789340*)SZArrayNew(StringU5BU5D_t1281789340_il2cpp_TypeInfo_var, (uint32_t)7));
		ArrayElementTypeCheck (L_0, _stringLiteral2935813745);
		(L_0)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteral2935813745);
		StringU5BU5D_t1281789340* L_1 = L_0;
		Expression_t1452783009 * L_2 = __this->get_arg0_0();
		String_t* L_3 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_2);
		ArrayElementTypeCheck (L_1, L_3);
		(L_1)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(1), (String_t*)L_3);
		StringU5BU5D_t1281789340* L_4 = L_1;
		ArrayElementTypeCheck (L_4, _stringLiteral3452614532);
		(L_4)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(2), (String_t*)_stringLiteral3452614532);
		StringU5BU5D_t1281789340* L_5 = L_4;
		Expression_t1452783009 * L_6 = __this->get_arg1_1();
		String_t* L_7 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_6);
		ArrayElementTypeCheck (L_5, L_7);
		(L_5)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(3), (String_t*)L_7);
		StringU5BU5D_t1281789340* L_8 = L_5;
		ArrayElementTypeCheck (L_8, _stringLiteral3452614532);
		(L_8)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(4), (String_t*)_stringLiteral3452614532);
		StringU5BU5D_t1281789340* L_9 = L_8;
		Expression_t1452783009 * L_10 = __this->get_arg2_2();
		String_t* L_11 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_10);
		ArrayElementTypeCheck (L_9, L_11);
		(L_9)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(5), (String_t*)L_11);
		StringU5BU5D_t1281789340* L_12 = L_9;
		ArrayElementTypeCheck (L_12, _stringLiteral3452614535);
		(L_12)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(6), (String_t*)_stringLiteral3452614535);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_13 = String_Concat_m1809518182(NULL /*static, unused*/, L_12, /*hidden argument*/NULL);
		return L_13;
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
// System.Void System.Xml.XPath.XPathFunctionTrue::.ctor(System.Xml.XPath.FunctionArguments)
extern "C"  void XPathFunctionTrue__ctor_m1481356079 (XPathFunctionTrue_t3806785954 * __this, FunctionArguments_t3573450773 * ___args0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XPathFunctionTrue__ctor_m1481356079_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		FunctionArguments_t3573450773 * L_0 = ___args0;
		XPathBooleanFunction__ctor_m1039060572(__this, L_0, /*hidden argument*/NULL);
		FunctionArguments_t3573450773 * L_1 = ___args0;
		if (!L_1)
		{
			goto IL_0018;
		}
	}
	{
		XPathException_t2107611652 * L_2 = (XPathException_t2107611652 *)il2cpp_codegen_object_new(XPathException_t2107611652_il2cpp_TypeInfo_var);
		XPathException__ctor_m3226187054(L_2, _stringLiteral2025439055, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, NULL, XPathFunctionTrue__ctor_m1481356079_RuntimeMethod_var);
	}

IL_0018:
	{
		return;
	}
}
// System.Boolean System.Xml.XPath.XPathFunctionTrue::get_HasStaticValue()
extern "C"  bool XPathFunctionTrue_get_HasStaticValue_m1771534624 (XPathFunctionTrue_t3806785954 * __this, const RuntimeMethod* method)
{
	{
		return (bool)1;
	}
}
// System.Boolean System.Xml.XPath.XPathFunctionTrue::get_StaticValueAsBoolean()
extern "C"  bool XPathFunctionTrue_get_StaticValueAsBoolean_m1201599349 (XPathFunctionTrue_t3806785954 * __this, const RuntimeMethod* method)
{
	{
		return (bool)1;
	}
}
// System.Boolean System.Xml.XPath.XPathFunctionTrue::get_Peer()
extern "C"  bool XPathFunctionTrue_get_Peer_m175419166 (XPathFunctionTrue_t3806785954 * __this, const RuntimeMethod* method)
{
	{
		return (bool)1;
	}
}
// System.Object System.Xml.XPath.XPathFunctionTrue::Evaluate(System.Xml.XPath.BaseIterator)
extern "C"  RuntimeObject * XPathFunctionTrue_Evaluate_m3384943708 (XPathFunctionTrue_t3806785954 * __this, BaseIterator_t4168896842 * ___iter0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XPathFunctionTrue_Evaluate_m3384943708_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		bool L_0 = ((bool)1);
		RuntimeObject * L_1 = Box(Boolean_t97287965_il2cpp_TypeInfo_var, &L_0);
		return L_1;
	}
}
// System.String System.Xml.XPath.XPathFunctionTrue::ToString()
extern "C"  String_t* XPathFunctionTrue_ToString_m484229129 (XPathFunctionTrue_t3806785954 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XPathFunctionTrue_ToString_m484229129_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		return _stringLiteral2841653723;
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
// System.Void System.Xml.XPath.XPathItem::.ctor()
extern "C"  void XPathItem__ctor_m2336527178 (XPathItem_t4250588140 * __this, const RuntimeMethod* method)
{
	{
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
// System.Void System.Xml.XPath.XPathIteratorComparer::.ctor()
extern "C"  void XPathIteratorComparer__ctor_m36557046 (XPathIteratorComparer_t1799213572 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Xml.XPath.XPathIteratorComparer::.cctor()
extern "C"  void XPathIteratorComparer__cctor_m1335301739 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XPathIteratorComparer__cctor_m1335301739_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		XPathIteratorComparer_t1799213572 * L_0 = (XPathIteratorComparer_t1799213572 *)il2cpp_codegen_object_new(XPathIteratorComparer_t1799213572_il2cpp_TypeInfo_var);
		XPathIteratorComparer__ctor_m36557046(L_0, /*hidden argument*/NULL);
		((XPathIteratorComparer_t1799213572_StaticFields*)il2cpp_codegen_static_fields_for(XPathIteratorComparer_t1799213572_il2cpp_TypeInfo_var))->set_Instance_0(L_0);
		return;
	}
}
// System.Int32 System.Xml.XPath.XPathIteratorComparer::Compare(System.Object,System.Object)
extern "C"  int32_t XPathIteratorComparer_Compare_m3538210468 (XPathIteratorComparer_t1799213572 * __this, RuntimeObject * ___o10, RuntimeObject * ___o21, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XPathIteratorComparer_Compare_m3538210468_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	XPathNodeIterator_t3667290188 * V_0 = NULL;
	XPathNodeIterator_t3667290188 * V_1 = NULL;
	int32_t V_2 = 0;
	{
		RuntimeObject * L_0 = ___o10;
		V_0 = ((XPathNodeIterator_t3667290188 *)IsInstClass((RuntimeObject*)L_0, XPathNodeIterator_t3667290188_il2cpp_TypeInfo_var));
		RuntimeObject * L_1 = ___o21;
		V_1 = ((XPathNodeIterator_t3667290188 *)IsInstClass((RuntimeObject*)L_1, XPathNodeIterator_t3667290188_il2cpp_TypeInfo_var));
		XPathNodeIterator_t3667290188 * L_2 = V_0;
		if (L_2)
		{
			goto IL_0016;
		}
	}
	{
		return (-1);
	}

IL_0016:
	{
		XPathNodeIterator_t3667290188 * L_3 = V_1;
		if (L_3)
		{
			goto IL_001e;
		}
	}
	{
		return 1;
	}

IL_001e:
	{
		XPathNodeIterator_t3667290188 * L_4 = V_0;
		XPathNavigator_t787956054 * L_5 = VirtFuncInvoker0< XPathNavigator_t787956054 * >::Invoke(7 /* System.Xml.XPath.XPathNavigator System.Xml.XPath.XPathNodeIterator::get_Current() */, L_4);
		XPathNodeIterator_t3667290188 * L_6 = V_1;
		XPathNavigator_t787956054 * L_7 = VirtFuncInvoker0< XPathNavigator_t787956054 * >::Invoke(7 /* System.Xml.XPath.XPathNavigator System.Xml.XPath.XPathNodeIterator::get_Current() */, L_6);
		int32_t L_8 = VirtFuncInvoker1< int32_t, XPathNavigator_t787956054 * >::Invoke(15 /* System.Xml.XmlNodeOrder System.Xml.XPath.XPathNavigator::ComparePosition(System.Xml.XPath.XPathNavigator) */, L_5, L_7);
		V_2 = L_8;
		int32_t L_9 = V_2;
		if ((((int32_t)L_9) == ((int32_t)1)))
		{
			goto IL_0045;
		}
	}
	{
		int32_t L_10 = V_2;
		if ((((int32_t)L_10) == ((int32_t)2)))
		{
			goto IL_0043;
		}
	}
	{
		goto IL_0047;
	}

IL_0043:
	{
		return 0;
	}

IL_0045:
	{
		return (-1);
	}

IL_0047:
	{
		return 1;
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
// System.Void System.Xml.XPath.XPathNavigator::.ctor()
extern "C"  void XPathNavigator__ctor_m997972048 (XPathNavigator_t787956054 * __this, const RuntimeMethod* method)
{
	{
		XPathItem__ctor_m2336527178(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Xml.XPath.XPathNavigator::.cctor()
extern "C"  void XPathNavigator__cctor_m1289292593 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XPathNavigator__cctor_m1289292593_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		CharU5BU5D_t3528271667* L_0 = ((CharU5BU5D_t3528271667*)SZArrayNew(CharU5BU5D_t3528271667_il2cpp_TypeInfo_var, (uint32_t)3));
		(L_0)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (Il2CppChar)((int32_t)38));
		CharU5BU5D_t3528271667* L_1 = L_0;
		(L_1)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(1), (Il2CppChar)((int32_t)60));
		CharU5BU5D_t3528271667* L_2 = L_1;
		(L_2)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(2), (Il2CppChar)((int32_t)62));
		((XPathNavigator_t787956054_StaticFields*)il2cpp_codegen_static_fields_for(XPathNavigator_t787956054_il2cpp_TypeInfo_var))->set_escape_text_chars_0(L_2);
		CharU5BU5D_t3528271667* L_3 = ((CharU5BU5D_t3528271667*)SZArrayNew(CharU5BU5D_t3528271667_il2cpp_TypeInfo_var, (uint32_t)6));
		RuntimeFieldHandle_t1871169219  L_4 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3E_t3057255365____U24U24fieldU2D18_9_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_m3117905507(NULL /*static, unused*/, (RuntimeArray *)(RuntimeArray *)L_3, L_4, /*hidden argument*/NULL);
		((XPathNavigator_t787956054_StaticFields*)il2cpp_codegen_static_fields_for(XPathNavigator_t787956054_il2cpp_TypeInfo_var))->set_escape_attr_chars_1(L_3);
		return;
	}
}
// System.Object System.Xml.XPath.XPathNavigator::System.ICloneable.Clone()
extern "C"  RuntimeObject * XPathNavigator_System_ICloneable_Clone_m3431081740 (XPathNavigator_t787956054 * __this, const RuntimeMethod* method)
{
	{
		XPathNavigator_t787956054 * L_0 = VirtFuncInvoker0< XPathNavigator_t787956054 * >::Invoke(14 /* System.Xml.XPath.XPathNavigator System.Xml.XPath.XPathNavigator::Clone() */, __this);
		return L_0;
	}
}
// System.Boolean System.Xml.XPath.XPathNavigator::get_HasAttributes()
extern "C"  bool XPathNavigator_get_HasAttributes_m4082102396 (XPathNavigator_t787956054 * __this, const RuntimeMethod* method)
{
	{
		bool L_0 = VirtFuncInvoker0< bool >::Invoke(24 /* System.Boolean System.Xml.XPath.XPathNavigator::MoveToFirstAttribute() */, __this);
		if (L_0)
		{
			goto IL_000d;
		}
	}
	{
		return (bool)0;
	}

IL_000d:
	{
		VirtFuncInvoker0< bool >::Invoke(31 /* System.Boolean System.Xml.XPath.XPathNavigator::MoveToParent() */, __this);
		return (bool)1;
	}
}
// System.Boolean System.Xml.XPath.XPathNavigator::get_HasChildren()
extern "C"  bool XPathNavigator_get_HasChildren_m2874433158 (XPathNavigator_t787956054 * __this, const RuntimeMethod* method)
{
	{
		bool L_0 = VirtFuncInvoker0< bool >::Invoke(25 /* System.Boolean System.Xml.XPath.XPathNavigator::MoveToFirstChild() */, __this);
		if (L_0)
		{
			goto IL_000d;
		}
	}
	{
		return (bool)0;
	}

IL_000d:
	{
		VirtFuncInvoker0< bool >::Invoke(31 /* System.Boolean System.Xml.XPath.XPathNavigator::MoveToParent() */, __this);
		return (bool)1;
	}
}
// System.String System.Xml.XPath.XPathNavigator::get_XmlLang()
extern "C"  String_t* XPathNavigator_get_XmlLang_m2712668103 (XPathNavigator_t787956054 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XPathNavigator_get_XmlLang_m2712668103_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	XPathNavigator_t787956054 * V_0 = NULL;
	int32_t V_1 = 0;
	{
		XPathNavigator_t787956054 * L_0 = VirtFuncInvoker0< XPathNavigator_t787956054 * >::Invoke(14 /* System.Xml.XPath.XPathNavigator System.Xml.XPath.XPathNavigator::Clone() */, __this);
		V_0 = L_0;
		XPathNavigator_t787956054 * L_1 = V_0;
		int32_t L_2 = VirtFuncInvoker0< int32_t >::Invoke(12 /* System.Xml.XPath.XPathNodeType System.Xml.XPath.XPathNavigator::get_NodeType() */, L_1);
		V_1 = L_2;
		int32_t L_3 = V_1;
		if ((((int32_t)L_3) == ((int32_t)2)))
		{
			goto IL_0021;
		}
	}
	{
		int32_t L_4 = V_1;
		if ((((int32_t)L_4) == ((int32_t)3)))
		{
			goto IL_0021;
		}
	}
	{
		goto IL_002d;
	}

IL_0021:
	{
		XPathNavigator_t787956054 * L_5 = V_0;
		VirtFuncInvoker0< bool >::Invoke(31 /* System.Boolean System.Xml.XPath.XPathNavigator::MoveToParent() */, L_5);
		goto IL_002d;
	}

IL_002d:
	{
		XPathNavigator_t787956054 * L_6 = V_0;
		bool L_7 = VirtFuncInvoker2< bool, String_t*, String_t* >::Invoke(20 /* System.Boolean System.Xml.XPath.XPathNavigator::MoveToAttribute(System.String,System.String) */, L_6, _stringLiteral2409271576, _stringLiteral2984480440);
		if (!L_7)
		{
			goto IL_0049;
		}
	}
	{
		XPathNavigator_t787956054 * L_8 = V_0;
		String_t* L_9 = VirtFuncInvoker0< String_t* >::Invoke(4 /* System.String System.Xml.XPath.XPathItem::get_Value() */, L_8);
		return L_9;
	}

IL_0049:
	{
		XPathNavigator_t787956054 * L_10 = V_0;
		bool L_11 = VirtFuncInvoker0< bool >::Invoke(31 /* System.Boolean System.Xml.XPath.XPathNavigator::MoveToParent() */, L_10);
		if (L_11)
		{
			goto IL_002d;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_12 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_2();
		return L_12;
	}
}
// System.Xml.XmlNodeOrder System.Xml.XPath.XPathNavigator::ComparePosition(System.Xml.XPath.XPathNavigator)
extern "C"  int32_t XPathNavigator_ComparePosition_m1329588237 (XPathNavigator_t787956054 * __this, XPathNavigator_t787956054 * ___nav0, const RuntimeMethod* method)
{
	XPathNavigator_t787956054 * V_0 = NULL;
	XPathNavigator_t787956054 * V_1 = NULL;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	int32_t V_7 = 0;
	{
		XPathNavigator_t787956054 * L_0 = ___nav0;
		bool L_1 = VirtFuncInvoker1< bool, XPathNavigator_t787956054 * >::Invoke(18 /* System.Boolean System.Xml.XPath.XPathNavigator::IsSamePosition(System.Xml.XPath.XPathNavigator) */, __this, L_0);
		if (!L_1)
		{
			goto IL_000e;
		}
	}
	{
		return (int32_t)(2);
	}

IL_000e:
	{
		XPathNavigator_t787956054 * L_2 = ___nav0;
		bool L_3 = VirtFuncInvoker1< bool, XPathNavigator_t787956054 * >::Invoke(17 /* System.Boolean System.Xml.XPath.XPathNavigator::IsDescendant(System.Xml.XPath.XPathNavigator) */, __this, L_2);
		if (!L_3)
		{
			goto IL_001c;
		}
	}
	{
		return (int32_t)(0);
	}

IL_001c:
	{
		XPathNavigator_t787956054 * L_4 = ___nav0;
		bool L_5 = VirtFuncInvoker1< bool, XPathNavigator_t787956054 * >::Invoke(17 /* System.Boolean System.Xml.XPath.XPathNavigator::IsDescendant(System.Xml.XPath.XPathNavigator) */, L_4, __this);
		if (!L_5)
		{
			goto IL_002a;
		}
	}
	{
		return (int32_t)(1);
	}

IL_002a:
	{
		XPathNavigator_t787956054 * L_6 = VirtFuncInvoker0< XPathNavigator_t787956054 * >::Invoke(14 /* System.Xml.XPath.XPathNavigator System.Xml.XPath.XPathNavigator::Clone() */, __this);
		V_0 = L_6;
		XPathNavigator_t787956054 * L_7 = ___nav0;
		XPathNavigator_t787956054 * L_8 = VirtFuncInvoker0< XPathNavigator_t787956054 * >::Invoke(14 /* System.Xml.XPath.XPathNavigator System.Xml.XPath.XPathNavigator::Clone() */, L_7);
		V_1 = L_8;
		XPathNavigator_t787956054 * L_9 = V_0;
		VirtActionInvoker0::Invoke(23 /* System.Void System.Xml.XPath.XPathNavigator::MoveToRoot() */, L_9);
		XPathNavigator_t787956054 * L_10 = V_1;
		VirtActionInvoker0::Invoke(23 /* System.Void System.Xml.XPath.XPathNavigator::MoveToRoot() */, L_10);
		XPathNavigator_t787956054 * L_11 = V_0;
		XPathNavigator_t787956054 * L_12 = V_1;
		bool L_13 = VirtFuncInvoker1< bool, XPathNavigator_t787956054 * >::Invoke(18 /* System.Boolean System.Xml.XPath.XPathNavigator::IsSamePosition(System.Xml.XPath.XPathNavigator) */, L_11, L_12);
		if (L_13)
		{
			goto IL_0052;
		}
	}
	{
		return (int32_t)(3);
	}

IL_0052:
	{
		XPathNavigator_t787956054 * L_14 = V_0;
		VirtFuncInvoker1< bool, XPathNavigator_t787956054 * >::Invoke(19 /* System.Boolean System.Xml.XPath.XPathNavigator::MoveTo(System.Xml.XPath.XPathNavigator) */, L_14, __this);
		XPathNavigator_t787956054 * L_15 = V_1;
		XPathNavigator_t787956054 * L_16 = ___nav0;
		VirtFuncInvoker1< bool, XPathNavigator_t787956054 * >::Invoke(19 /* System.Boolean System.Xml.XPath.XPathNavigator::MoveTo(System.Xml.XPath.XPathNavigator) */, L_15, L_16);
		V_2 = 0;
		goto IL_006d;
	}

IL_0069:
	{
		int32_t L_17 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_17, (int32_t)1));
	}

IL_006d:
	{
		XPathNavigator_t787956054 * L_18 = V_0;
		bool L_19 = VirtFuncInvoker0< bool >::Invoke(31 /* System.Boolean System.Xml.XPath.XPathNavigator::MoveToParent() */, L_18);
		if (L_19)
		{
			goto IL_0069;
		}
	}
	{
		XPathNavigator_t787956054 * L_20 = V_0;
		VirtFuncInvoker1< bool, XPathNavigator_t787956054 * >::Invoke(19 /* System.Boolean System.Xml.XPath.XPathNavigator::MoveTo(System.Xml.XPath.XPathNavigator) */, L_20, __this);
		V_3 = 0;
		goto IL_008b;
	}

IL_0087:
	{
		int32_t L_21 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add((int32_t)L_21, (int32_t)1));
	}

IL_008b:
	{
		XPathNavigator_t787956054 * L_22 = V_1;
		bool L_23 = VirtFuncInvoker0< bool >::Invoke(31 /* System.Boolean System.Xml.XPath.XPathNavigator::MoveToParent() */, L_22);
		if (L_23)
		{
			goto IL_0087;
		}
	}
	{
		XPathNavigator_t787956054 * L_24 = V_1;
		XPathNavigator_t787956054 * L_25 = ___nav0;
		VirtFuncInvoker1< bool, XPathNavigator_t787956054 * >::Invoke(19 /* System.Boolean System.Xml.XPath.XPathNavigator::MoveTo(System.Xml.XPath.XPathNavigator) */, L_24, L_25);
		int32_t L_26 = V_2;
		V_4 = L_26;
		goto IL_00b3;
	}

IL_00a6:
	{
		XPathNavigator_t787956054 * L_27 = V_0;
		VirtFuncInvoker0< bool >::Invoke(31 /* System.Boolean System.Xml.XPath.XPathNavigator::MoveToParent() */, L_27);
		int32_t L_28 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_28, (int32_t)1));
	}

IL_00b3:
	{
		int32_t L_29 = V_4;
		int32_t L_30 = V_3;
		if ((((int32_t)L_29) > ((int32_t)L_30)))
		{
			goto IL_00a6;
		}
	}
	{
		int32_t L_31 = V_3;
		V_5 = L_31;
		goto IL_00d0;
	}

IL_00c3:
	{
		XPathNavigator_t787956054 * L_32 = V_1;
		VirtFuncInvoker0< bool >::Invoke(31 /* System.Boolean System.Xml.XPath.XPathNavigator::MoveToParent() */, L_32);
		int32_t L_33 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_33, (int32_t)1));
	}

IL_00d0:
	{
		int32_t L_34 = V_5;
		int32_t L_35 = V_4;
		if ((((int32_t)L_34) > ((int32_t)L_35)))
		{
			goto IL_00c3;
		}
	}
	{
		goto IL_00f2;
	}

IL_00de:
	{
		XPathNavigator_t787956054 * L_36 = V_0;
		VirtFuncInvoker0< bool >::Invoke(31 /* System.Boolean System.Xml.XPath.XPathNavigator::MoveToParent() */, L_36);
		XPathNavigator_t787956054 * L_37 = V_1;
		VirtFuncInvoker0< bool >::Invoke(31 /* System.Boolean System.Xml.XPath.XPathNavigator::MoveToParent() */, L_37);
		int32_t L_38 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_38, (int32_t)1));
	}

IL_00f2:
	{
		XPathNavigator_t787956054 * L_39 = V_0;
		XPathNavigator_t787956054 * L_40 = V_1;
		bool L_41 = VirtFuncInvoker1< bool, XPathNavigator_t787956054 * >::Invoke(18 /* System.Boolean System.Xml.XPath.XPathNavigator::IsSamePosition(System.Xml.XPath.XPathNavigator) */, L_39, L_40);
		if (!L_41)
		{
			goto IL_00de;
		}
	}
	{
		XPathNavigator_t787956054 * L_42 = V_0;
		VirtFuncInvoker1< bool, XPathNavigator_t787956054 * >::Invoke(19 /* System.Boolean System.Xml.XPath.XPathNavigator::MoveTo(System.Xml.XPath.XPathNavigator) */, L_42, __this);
		int32_t L_43 = V_2;
		V_6 = L_43;
		goto IL_011b;
	}

IL_010e:
	{
		XPathNavigator_t787956054 * L_44 = V_0;
		VirtFuncInvoker0< bool >::Invoke(31 /* System.Boolean System.Xml.XPath.XPathNavigator::MoveToParent() */, L_44);
		int32_t L_45 = V_6;
		V_6 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_45, (int32_t)1));
	}

IL_011b:
	{
		int32_t L_46 = V_6;
		int32_t L_47 = V_4;
		if ((((int32_t)L_46) > ((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_47, (int32_t)1)))))
		{
			goto IL_010e;
		}
	}
	{
		XPathNavigator_t787956054 * L_48 = V_1;
		XPathNavigator_t787956054 * L_49 = ___nav0;
		VirtFuncInvoker1< bool, XPathNavigator_t787956054 * >::Invoke(19 /* System.Boolean System.Xml.XPath.XPathNavigator::MoveTo(System.Xml.XPath.XPathNavigator) */, L_48, L_49);
		int32_t L_50 = V_3;
		V_7 = L_50;
		goto IL_0143;
	}

IL_0136:
	{
		XPathNavigator_t787956054 * L_51 = V_1;
		VirtFuncInvoker0< bool >::Invoke(31 /* System.Boolean System.Xml.XPath.XPathNavigator::MoveToParent() */, L_51);
		int32_t L_52 = V_7;
		V_7 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_52, (int32_t)1));
	}

IL_0143:
	{
		int32_t L_53 = V_7;
		int32_t L_54 = V_4;
		if ((((int32_t)L_53) > ((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_54, (int32_t)1)))))
		{
			goto IL_0136;
		}
	}
	{
		XPathNavigator_t787956054 * L_55 = V_0;
		int32_t L_56 = VirtFuncInvoker0< int32_t >::Invoke(12 /* System.Xml.XPath.XPathNodeType System.Xml.XPath.XPathNavigator::get_NodeType() */, L_55);
		if ((!(((uint32_t)L_56) == ((uint32_t)3))))
		{
			goto IL_0188;
		}
	}
	{
		XPathNavigator_t787956054 * L_57 = V_1;
		int32_t L_58 = VirtFuncInvoker0< int32_t >::Invoke(12 /* System.Xml.XPath.XPathNodeType System.Xml.XPath.XPathNavigator::get_NodeType() */, L_57);
		if ((((int32_t)L_58) == ((int32_t)3)))
		{
			goto IL_0168;
		}
	}
	{
		return (int32_t)(0);
	}

IL_0168:
	{
		goto IL_017b;
	}

IL_016d:
	{
		XPathNavigator_t787956054 * L_59 = V_0;
		XPathNavigator_t787956054 * L_60 = V_1;
		bool L_61 = VirtFuncInvoker1< bool, XPathNavigator_t787956054 * >::Invoke(18 /* System.Boolean System.Xml.XPath.XPathNavigator::IsSamePosition(System.Xml.XPath.XPathNavigator) */, L_59, L_60);
		if (!L_61)
		{
			goto IL_017b;
		}
	}
	{
		return (int32_t)(0);
	}

IL_017b:
	{
		XPathNavigator_t787956054 * L_62 = V_0;
		bool L_63 = XPathNavigator_MoveToNextNamespace_m1668516935(L_62, /*hidden argument*/NULL);
		if (L_63)
		{
			goto IL_016d;
		}
	}
	{
		return (int32_t)(1);
	}

IL_0188:
	{
		XPathNavigator_t787956054 * L_64 = V_1;
		int32_t L_65 = VirtFuncInvoker0< int32_t >::Invoke(12 /* System.Xml.XPath.XPathNodeType System.Xml.XPath.XPathNavigator::get_NodeType() */, L_64);
		if ((!(((uint32_t)L_65) == ((uint32_t)3))))
		{
			goto IL_0196;
		}
	}
	{
		return (int32_t)(1);
	}

IL_0196:
	{
		XPathNavigator_t787956054 * L_66 = V_0;
		int32_t L_67 = VirtFuncInvoker0< int32_t >::Invoke(12 /* System.Xml.XPath.XPathNodeType System.Xml.XPath.XPathNavigator::get_NodeType() */, L_66);
		if ((!(((uint32_t)L_67) == ((uint32_t)2))))
		{
			goto IL_01d0;
		}
	}
	{
		XPathNavigator_t787956054 * L_68 = V_1;
		int32_t L_69 = VirtFuncInvoker0< int32_t >::Invoke(12 /* System.Xml.XPath.XPathNodeType System.Xml.XPath.XPathNavigator::get_NodeType() */, L_68);
		if ((((int32_t)L_69) == ((int32_t)2)))
		{
			goto IL_01b0;
		}
	}
	{
		return (int32_t)(0);
	}

IL_01b0:
	{
		goto IL_01c3;
	}

IL_01b5:
	{
		XPathNavigator_t787956054 * L_70 = V_0;
		XPathNavigator_t787956054 * L_71 = V_1;
		bool L_72 = VirtFuncInvoker1< bool, XPathNavigator_t787956054 * >::Invoke(18 /* System.Boolean System.Xml.XPath.XPathNavigator::IsSamePosition(System.Xml.XPath.XPathNavigator) */, L_70, L_71);
		if (!L_72)
		{
			goto IL_01c3;
		}
	}
	{
		return (int32_t)(0);
	}

IL_01c3:
	{
		XPathNavigator_t787956054 * L_73 = V_0;
		bool L_74 = VirtFuncInvoker0< bool >::Invoke(29 /* System.Boolean System.Xml.XPath.XPathNavigator::MoveToNextAttribute() */, L_73);
		if (L_74)
		{
			goto IL_01b5;
		}
	}
	{
		return (int32_t)(1);
	}

IL_01d0:
	{
		goto IL_01e3;
	}

IL_01d5:
	{
		XPathNavigator_t787956054 * L_75 = V_0;
		XPathNavigator_t787956054 * L_76 = V_1;
		bool L_77 = VirtFuncInvoker1< bool, XPathNavigator_t787956054 * >::Invoke(18 /* System.Boolean System.Xml.XPath.XPathNavigator::IsSamePosition(System.Xml.XPath.XPathNavigator) */, L_75, L_76);
		if (!L_77)
		{
			goto IL_01e3;
		}
	}
	{
		return (int32_t)(0);
	}

IL_01e3:
	{
		XPathNavigator_t787956054 * L_78 = V_0;
		bool L_79 = VirtFuncInvoker0< bool >::Invoke(28 /* System.Boolean System.Xml.XPath.XPathNavigator::MoveToNext() */, L_78);
		if (L_79)
		{
			goto IL_01d5;
		}
	}
	{
		return (int32_t)(1);
	}
}
// System.Xml.XPath.XPathExpression System.Xml.XPath.XPathNavigator::Compile(System.String)
extern "C"  XPathExpression_t1723793351 * XPathNavigator_Compile_m112623574 (XPathNavigator_t787956054 * __this, String_t* ___xpath0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___xpath0;
		XPathExpression_t1723793351 * L_1 = XPathExpression_Compile_m1131673689(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Boolean System.Xml.XPath.XPathNavigator::IsDescendant(System.Xml.XPath.XPathNavigator)
extern "C"  bool XPathNavigator_IsDescendant_m3989657710 (XPathNavigator_t787956054 * __this, XPathNavigator_t787956054 * ___nav0, const RuntimeMethod* method)
{
	{
		XPathNavigator_t787956054 * L_0 = ___nav0;
		if (!L_0)
		{
			goto IL_002c;
		}
	}
	{
		XPathNavigator_t787956054 * L_1 = ___nav0;
		XPathNavigator_t787956054 * L_2 = VirtFuncInvoker0< XPathNavigator_t787956054 * >::Invoke(14 /* System.Xml.XPath.XPathNavigator System.Xml.XPath.XPathNavigator::Clone() */, L_1);
		___nav0 = L_2;
		goto IL_0021;
	}

IL_0013:
	{
		XPathNavigator_t787956054 * L_3 = ___nav0;
		bool L_4 = VirtFuncInvoker1< bool, XPathNavigator_t787956054 * >::Invoke(18 /* System.Boolean System.Xml.XPath.XPathNavigator::IsSamePosition(System.Xml.XPath.XPathNavigator) */, __this, L_3);
		if (!L_4)
		{
			goto IL_0021;
		}
	}
	{
		return (bool)1;
	}

IL_0021:
	{
		XPathNavigator_t787956054 * L_5 = ___nav0;
		bool L_6 = VirtFuncInvoker0< bool >::Invoke(31 /* System.Boolean System.Xml.XPath.XPathNavigator::MoveToParent() */, L_5);
		if (L_6)
		{
			goto IL_0013;
		}
	}

IL_002c:
	{
		return (bool)0;
	}
}
// System.Boolean System.Xml.XPath.XPathNavigator::MoveToAttribute(System.String,System.String)
extern "C"  bool XPathNavigator_MoveToAttribute_m1636857949 (XPathNavigator_t787956054 * __this, String_t* ___localName0, String_t* ___namespaceURI1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XPathNavigator_MoveToAttribute_m1636857949_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		bool L_0 = VirtFuncInvoker0< bool >::Invoke(24 /* System.Boolean System.Xml.XPath.XPathNavigator::MoveToFirstAttribute() */, __this);
		if (!L_0)
		{
			goto IL_0041;
		}
	}

IL_000b:
	{
		String_t* L_1 = VirtFuncInvoker0< String_t* >::Invoke(9 /* System.String System.Xml.XPath.XPathNavigator::get_LocalName() */, __this);
		String_t* L_2 = ___localName0;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_3 = String_op_Equality_m920492651(NULL /*static, unused*/, L_1, L_2, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_002f;
		}
	}
	{
		String_t* L_4 = VirtFuncInvoker0< String_t* >::Invoke(11 /* System.String System.Xml.XPath.XPathNavigator::get_NamespaceURI() */, __this);
		String_t* L_5 = ___namespaceURI1;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_6 = String_op_Equality_m920492651(NULL /*static, unused*/, L_4, L_5, /*hidden argument*/NULL);
		if (!L_6)
		{
			goto IL_002f;
		}
	}
	{
		return (bool)1;
	}

IL_002f:
	{
		bool L_7 = VirtFuncInvoker0< bool >::Invoke(29 /* System.Boolean System.Xml.XPath.XPathNavigator::MoveToNextAttribute() */, __this);
		if (L_7)
		{
			goto IL_000b;
		}
	}
	{
		VirtFuncInvoker0< bool >::Invoke(31 /* System.Boolean System.Xml.XPath.XPathNavigator::MoveToParent() */, __this);
	}

IL_0041:
	{
		return (bool)0;
	}
}
// System.Boolean System.Xml.XPath.XPathNavigator::MoveToNamespace(System.String)
extern "C"  bool XPathNavigator_MoveToNamespace_m392163016 (XPathNavigator_t787956054 * __this, String_t* ___name0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XPathNavigator_MoveToNamespace_m392163016_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		bool L_0 = XPathNavigator_MoveToFirstNamespace_m2355971184(__this, /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_0030;
		}
	}

IL_000b:
	{
		String_t* L_1 = VirtFuncInvoker0< String_t* >::Invoke(9 /* System.String System.Xml.XPath.XPathNavigator::get_LocalName() */, __this);
		String_t* L_2 = ___name0;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_3 = String_op_Equality_m920492651(NULL /*static, unused*/, L_1, L_2, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_001e;
		}
	}
	{
		return (bool)1;
	}

IL_001e:
	{
		bool L_4 = XPathNavigator_MoveToNextNamespace_m1668516935(__this, /*hidden argument*/NULL);
		if (L_4)
		{
			goto IL_000b;
		}
	}
	{
		VirtFuncInvoker0< bool >::Invoke(31 /* System.Boolean System.Xml.XPath.XPathNavigator::MoveToParent() */, __this);
	}

IL_0030:
	{
		return (bool)0;
	}
}
// System.Boolean System.Xml.XPath.XPathNavigator::MoveToFirst()
extern "C"  bool XPathNavigator_MoveToFirst_m4228469055 (XPathNavigator_t787956054 * __this, const RuntimeMethod* method)
{
	{
		bool L_0 = XPathNavigator_MoveToFirstImpl_m3002450231(__this, /*hidden argument*/NULL);
		return L_0;
	}
}
// System.Void System.Xml.XPath.XPathNavigator::MoveToRoot()
extern "C"  void XPathNavigator_MoveToRoot_m501659531 (XPathNavigator_t787956054 * __this, const RuntimeMethod* method)
{
	{
		goto IL_0005;
	}

IL_0005:
	{
		bool L_0 = VirtFuncInvoker0< bool >::Invoke(31 /* System.Boolean System.Xml.XPath.XPathNavigator::MoveToParent() */, __this);
		if (L_0)
		{
			goto IL_0005;
		}
	}
	{
		return;
	}
}
// System.Boolean System.Xml.XPath.XPathNavigator::MoveToFirstImpl()
extern "C"  bool XPathNavigator_MoveToFirstImpl_m3002450231 (XPathNavigator_t787956054 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = VirtFuncInvoker0< int32_t >::Invoke(12 /* System.Xml.XPath.XPathNodeType System.Xml.XPath.XPathNavigator::get_NodeType() */, __this);
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)2)))
		{
			goto IL_001a;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)3)))
		{
			goto IL_001a;
		}
	}
	{
		goto IL_001c;
	}

IL_001a:
	{
		return (bool)0;
	}

IL_001c:
	{
		bool L_3 = VirtFuncInvoker0< bool >::Invoke(31 /* System.Boolean System.Xml.XPath.XPathNavigator::MoveToParent() */, __this);
		if (L_3)
		{
			goto IL_0029;
		}
	}
	{
		return (bool)0;
	}

IL_0029:
	{
		VirtFuncInvoker0< bool >::Invoke(25 /* System.Boolean System.Xml.XPath.XPathNavigator::MoveToFirstChild() */, __this);
		return (bool)1;
	}
}
// System.Boolean System.Xml.XPath.XPathNavigator::MoveToFirstNamespace()
extern "C"  bool XPathNavigator_MoveToFirstNamespace_m2355971184 (XPathNavigator_t787956054 * __this, const RuntimeMethod* method)
{
	{
		bool L_0 = VirtFuncInvoker1< bool, int32_t >::Invoke(26 /* System.Boolean System.Xml.XPath.XPathNavigator::MoveToFirstNamespace(System.Xml.XPath.XPathNamespaceScope) */, __this, 0);
		return L_0;
	}
}
// System.Boolean System.Xml.XPath.XPathNavigator::MoveToNextNamespace()
extern "C"  bool XPathNavigator_MoveToNextNamespace_m1668516935 (XPathNavigator_t787956054 * __this, const RuntimeMethod* method)
{
	{
		bool L_0 = VirtFuncInvoker1< bool, int32_t >::Invoke(30 /* System.Boolean System.Xml.XPath.XPathNavigator::MoveToNextNamespace(System.Xml.XPath.XPathNamespaceScope) */, __this, 0);
		return L_0;
	}
}
// System.Xml.XPath.XPathNodeIterator System.Xml.XPath.XPathNavigator::Select(System.Xml.XPath.XPathExpression)
extern "C"  XPathNodeIterator_t3667290188 * XPathNavigator_Select_m796775639 (XPathNavigator_t787956054 * __this, XPathExpression_t1723793351 * ___expr0, const RuntimeMethod* method)
{
	{
		XPathExpression_t1723793351 * L_0 = ___expr0;
		XPathNodeIterator_t3667290188 * L_1 = XPathNavigator_Select_m776519727(__this, L_0, (RuntimeObject*)NULL, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Xml.XPath.XPathNodeIterator System.Xml.XPath.XPathNavigator::Select(System.Xml.XPath.XPathExpression,System.Xml.IXmlNamespaceResolver)
extern "C"  XPathNodeIterator_t3667290188 * XPathNavigator_Select_m776519727 (XPathNavigator_t787956054 * __this, XPathExpression_t1723793351 * ___expr0, RuntimeObject* ___ctx1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XPathNavigator_Select_m776519727_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	CompiledExpression_t4018285681 * V_0 = NULL;
	BaseIterator_t4168896842 * V_1 = NULL;
	{
		XPathExpression_t1723793351 * L_0 = ___expr0;
		V_0 = ((CompiledExpression_t4018285681 *)CastclassClass((RuntimeObject*)L_0, CompiledExpression_t4018285681_il2cpp_TypeInfo_var));
		RuntimeObject* L_1 = ___ctx1;
		if (L_1)
		{
			goto IL_0015;
		}
	}
	{
		CompiledExpression_t4018285681 * L_2 = V_0;
		RuntimeObject* L_3 = CompiledExpression_get_NamespaceManager_m3942233733(L_2, /*hidden argument*/NULL);
		___ctx1 = L_3;
	}

IL_0015:
	{
		RuntimeObject* L_4 = ___ctx1;
		NullIterator_t2630925529 * L_5 = (NullIterator_t2630925529 *)il2cpp_codegen_object_new(NullIterator_t2630925529_il2cpp_TypeInfo_var);
		NullIterator__ctor_m864984539(L_5, __this, L_4, /*hidden argument*/NULL);
		V_1 = L_5;
		CompiledExpression_t4018285681 * L_6 = V_0;
		BaseIterator_t4168896842 * L_7 = V_1;
		XPathNodeIterator_t3667290188 * L_8 = CompiledExpression_EvaluateNodeSet_m2331909383(L_6, L_7, /*hidden argument*/NULL);
		return L_8;
	}
}
// System.Collections.IEnumerable System.Xml.XPath.XPathNavigator::EnumerateChildren(System.Xml.XPath.XPathNavigator,System.Xml.XPath.XPathNodeType)
extern "C"  RuntimeObject* XPathNavigator_EnumerateChildren_m3848257610 (RuntimeObject * __this /* static, unused */, XPathNavigator_t787956054 * ___n0, int32_t ___type1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XPathNavigator_EnumerateChildren_m3848257610_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	U3CEnumerateChildrenU3Ec__Iterator0_t404642154 * V_0 = NULL;
	{
		U3CEnumerateChildrenU3Ec__Iterator0_t404642154 * L_0 = (U3CEnumerateChildrenU3Ec__Iterator0_t404642154 *)il2cpp_codegen_object_new(U3CEnumerateChildrenU3Ec__Iterator0_t404642154_il2cpp_TypeInfo_var);
		U3CEnumerateChildrenU3Ec__Iterator0__ctor_m1598908859(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		U3CEnumerateChildrenU3Ec__Iterator0_t404642154 * L_1 = V_0;
		XPathNavigator_t787956054 * L_2 = ___n0;
		L_1->set_n_0(L_2);
		U3CEnumerateChildrenU3Ec__Iterator0_t404642154 * L_3 = V_0;
		int32_t L_4 = ___type1;
		L_3->set_type_3(L_4);
		U3CEnumerateChildrenU3Ec__Iterator0_t404642154 * L_5 = V_0;
		XPathNavigator_t787956054 * L_6 = ___n0;
		L_5->set_U3CU24U3En_6(L_6);
		U3CEnumerateChildrenU3Ec__Iterator0_t404642154 * L_7 = V_0;
		int32_t L_8 = ___type1;
		L_7->set_U3CU24U3Etype_7(L_8);
		U3CEnumerateChildrenU3Ec__Iterator0_t404642154 * L_9 = V_0;
		U3CEnumerateChildrenU3Ec__Iterator0_t404642154 * L_10 = L_9;
		L_10->set_U24PC_4(((int32_t)-2));
		return L_10;
	}
}
// System.Xml.XPath.XPathNodeIterator System.Xml.XPath.XPathNavigator::SelectChildren(System.Xml.XPath.XPathNodeType)
extern "C"  XPathNodeIterator_t3667290188 * XPathNavigator_SelectChildren_m3002173731 (XPathNavigator_t787956054 * __this, int32_t ___type0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XPathNavigator_SelectChildren_m3002173731_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = ___type0;
		IL2CPP_RUNTIME_CLASS_INIT(XPathNavigator_t787956054_il2cpp_TypeInfo_var);
		RuntimeObject* L_1 = XPathNavigator_EnumerateChildren_m3848257610(NULL /*static, unused*/, __this, L_0, /*hidden argument*/NULL);
		EnumerableIterator_t1590428576 * L_2 = (EnumerableIterator_t1590428576 *)il2cpp_codegen_object_new(EnumerableIterator_t1590428576_il2cpp_TypeInfo_var);
		EnumerableIterator__ctor_m868206615(L_2, L_1, 0, /*hidden argument*/NULL);
		WrapperIterator_t1258076988 * L_3 = (WrapperIterator_t1258076988 *)il2cpp_codegen_object_new(WrapperIterator_t1258076988_il2cpp_TypeInfo_var);
		WrapperIterator__ctor_m1708545452(L_3, L_2, (RuntimeObject*)NULL, /*hidden argument*/NULL);
		return L_3;
	}
}
// System.String System.Xml.XPath.XPathNavigator::ToString()
extern "C"  String_t* XPathNavigator_ToString_m2476099750 (XPathNavigator_t787956054 * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0 = VirtFuncInvoker0< String_t* >::Invoke(4 /* System.String System.Xml.XPath.XPathItem::get_Value() */, __this);
		return L_0;
	}
}
// System.String System.Xml.XPath.XPathNavigator::LookupNamespace(System.String)
extern "C"  String_t* XPathNavigator_LookupNamespace_m3790109444 (XPathNavigator_t787956054 * __this, String_t* ___prefix0, const RuntimeMethod* method)
{
	XPathNavigator_t787956054 * V_0 = NULL;
	{
		XPathNavigator_t787956054 * L_0 = VirtFuncInvoker0< XPathNavigator_t787956054 * >::Invoke(14 /* System.Xml.XPath.XPathNavigator System.Xml.XPath.XPathNavigator::Clone() */, __this);
		V_0 = L_0;
		XPathNavigator_t787956054 * L_1 = V_0;
		int32_t L_2 = VirtFuncInvoker0< int32_t >::Invoke(12 /* System.Xml.XPath.XPathNodeType System.Xml.XPath.XPathNavigator::get_NodeType() */, L_1);
		if ((((int32_t)L_2) == ((int32_t)1)))
		{
			goto IL_001a;
		}
	}
	{
		XPathNavigator_t787956054 * L_3 = V_0;
		VirtFuncInvoker0< bool >::Invoke(31 /* System.Boolean System.Xml.XPath.XPathNavigator::MoveToParent() */, L_3);
	}

IL_001a:
	{
		XPathNavigator_t787956054 * L_4 = V_0;
		String_t* L_5 = ___prefix0;
		bool L_6 = VirtFuncInvoker1< bool, String_t* >::Invoke(21 /* System.Boolean System.Xml.XPath.XPathNavigator::MoveToNamespace(System.String) */, L_4, L_5);
		if (!L_6)
		{
			goto IL_002d;
		}
	}
	{
		XPathNavigator_t787956054 * L_7 = V_0;
		String_t* L_8 = VirtFuncInvoker0< String_t* >::Invoke(4 /* System.String System.Xml.XPath.XPathItem::get_Value() */, L_7);
		return L_8;
	}

IL_002d:
	{
		return (String_t*)NULL;
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
// System.Void System.Xml.XPath.XPathNavigator/<EnumerateChildren>c__Iterator0::.ctor()
extern "C"  void U3CEnumerateChildrenU3Ec__Iterator0__ctor_m1598908859 (U3CEnumerateChildrenU3Ec__Iterator0_t404642154 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Object System.Xml.XPath.XPathNavigator/<EnumerateChildren>c__Iterator0::System.Collections.Generic.IEnumerator<object>.get_Current()
extern "C"  RuntimeObject * U3CEnumerateChildrenU3Ec__Iterator0_System_Collections_Generic_IEnumeratorU3CobjectU3E_get_Current_m4107752640 (U3CEnumerateChildrenU3Ec__Iterator0_t404642154 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U24current_5();
		return L_0;
	}
}
// System.Object System.Xml.XPath.XPathNavigator/<EnumerateChildren>c__Iterator0::System.Collections.IEnumerator.get_Current()
extern "C"  RuntimeObject * U3CEnumerateChildrenU3Ec__Iterator0_System_Collections_IEnumerator_get_Current_m267696725 (U3CEnumerateChildrenU3Ec__Iterator0_t404642154 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U24current_5();
		return L_0;
	}
}
// System.Collections.IEnumerator System.Xml.XPath.XPathNavigator/<EnumerateChildren>c__Iterator0::System.Collections.IEnumerable.GetEnumerator()
extern "C"  RuntimeObject* U3CEnumerateChildrenU3Ec__Iterator0_System_Collections_IEnumerable_GetEnumerator_m160807034 (U3CEnumerateChildrenU3Ec__Iterator0_t404642154 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject* L_0 = U3CEnumerateChildrenU3Ec__Iterator0_System_Collections_Generic_IEnumerableU3CobjectU3E_GetEnumerator_m2664109754(__this, /*hidden argument*/NULL);
		return L_0;
	}
}
// System.Collections.Generic.IEnumerator`1<System.Object> System.Xml.XPath.XPathNavigator/<EnumerateChildren>c__Iterator0::System.Collections.Generic.IEnumerable<object>.GetEnumerator()
extern "C"  RuntimeObject* U3CEnumerateChildrenU3Ec__Iterator0_System_Collections_Generic_IEnumerableU3CobjectU3E_GetEnumerator_m2664109754 (U3CEnumerateChildrenU3Ec__Iterator0_t404642154 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CEnumerateChildrenU3Ec__Iterator0_System_Collections_Generic_IEnumerableU3CobjectU3E_GetEnumerator_m2664109754_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	U3CEnumerateChildrenU3Ec__Iterator0_t404642154 * V_0 = NULL;
	{
		int32_t* L_0 = __this->get_address_of_U24PC_4();
		int32_t L_1 = Interlocked_CompareExchange_m3023855514(NULL /*static, unused*/, (int32_t*)L_0, 0, ((int32_t)-2), /*hidden argument*/NULL);
		if ((!(((uint32_t)L_1) == ((uint32_t)((int32_t)-2)))))
		{
			goto IL_0014;
		}
	}
	{
		return __this;
	}

IL_0014:
	{
		U3CEnumerateChildrenU3Ec__Iterator0_t404642154 * L_2 = (U3CEnumerateChildrenU3Ec__Iterator0_t404642154 *)il2cpp_codegen_object_new(U3CEnumerateChildrenU3Ec__Iterator0_t404642154_il2cpp_TypeInfo_var);
		U3CEnumerateChildrenU3Ec__Iterator0__ctor_m1598908859(L_2, /*hidden argument*/NULL);
		V_0 = L_2;
		U3CEnumerateChildrenU3Ec__Iterator0_t404642154 * L_3 = V_0;
		XPathNavigator_t787956054 * L_4 = __this->get_U3CU24U3En_6();
		L_3->set_n_0(L_4);
		U3CEnumerateChildrenU3Ec__Iterator0_t404642154 * L_5 = V_0;
		int32_t L_6 = __this->get_U3CU24U3Etype_7();
		L_5->set_type_3(L_6);
		U3CEnumerateChildrenU3Ec__Iterator0_t404642154 * L_7 = V_0;
		return L_7;
	}
}
// System.Boolean System.Xml.XPath.XPathNavigator/<EnumerateChildren>c__Iterator0::MoveNext()
extern "C"  bool U3CEnumerateChildrenU3Ec__Iterator0_MoveNext_m2840765400 (U3CEnumerateChildrenU3Ec__Iterator0_t404642154 * __this, const RuntimeMethod* method)
{
	uint32_t V_0 = 0;
	bool V_1 = false;
	{
		int32_t L_0 = __this->get_U24PC_4();
		V_0 = L_0;
		__this->set_U24PC_4((-1));
		uint32_t L_1 = V_0;
		switch (L_1)
		{
			case 0:
			{
				goto IL_0021;
			}
			case 1:
			{
				goto IL_00d4;
			}
		}
	}
	{
		goto IL_00eb;
	}

IL_0021:
	{
		XPathNavigator_t787956054 * L_2 = __this->get_n_0();
		bool L_3 = VirtFuncInvoker0< bool >::Invoke(25 /* System.Boolean System.Xml.XPath.XPathNavigator::MoveToFirstChild() */, L_2);
		if (L_3)
		{
			goto IL_0036;
		}
	}
	{
		goto IL_00eb;
	}

IL_0036:
	{
		XPathNavigator_t787956054 * L_4 = __this->get_n_0();
		VirtFuncInvoker0< bool >::Invoke(31 /* System.Boolean System.Xml.XPath.XPathNavigator::MoveToParent() */, L_4);
		XPathNavigator_t787956054 * L_5 = __this->get_n_0();
		XPathNavigator_t787956054 * L_6 = VirtFuncInvoker0< XPathNavigator_t787956054 * >::Invoke(14 /* System.Xml.XPath.XPathNavigator System.Xml.XPath.XPathNavigator::Clone() */, L_5);
		__this->set_U3CnavU3E__0_1(L_6);
		XPathNavigator_t787956054 * L_7 = __this->get_U3CnavU3E__0_1();
		VirtFuncInvoker0< bool >::Invoke(25 /* System.Boolean System.Xml.XPath.XPathNavigator::MoveToFirstChild() */, L_7);
		__this->set_U3Cnav2U3E__1_2((XPathNavigator_t787956054 *)NULL);
	}

IL_0066:
	{
		int32_t L_8 = __this->get_type_3();
		if ((((int32_t)L_8) == ((int32_t)((int32_t)9))))
		{
			goto IL_0089;
		}
	}
	{
		XPathNavigator_t787956054 * L_9 = __this->get_U3CnavU3E__0_1();
		int32_t L_10 = VirtFuncInvoker0< int32_t >::Invoke(12 /* System.Xml.XPath.XPathNodeType System.Xml.XPath.XPathNavigator::get_NodeType() */, L_9);
		int32_t L_11 = __this->get_type_3();
		if ((!(((uint32_t)L_10) == ((uint32_t)L_11))))
		{
			goto IL_00d4;
		}
	}

IL_0089:
	{
		XPathNavigator_t787956054 * L_12 = __this->get_U3Cnav2U3E__1_2();
		if (L_12)
		{
			goto IL_00aa;
		}
	}
	{
		XPathNavigator_t787956054 * L_13 = __this->get_U3CnavU3E__0_1();
		XPathNavigator_t787956054 * L_14 = VirtFuncInvoker0< XPathNavigator_t787956054 * >::Invoke(14 /* System.Xml.XPath.XPathNavigator System.Xml.XPath.XPathNavigator::Clone() */, L_13);
		__this->set_U3Cnav2U3E__1_2(L_14);
		goto IL_00bc;
	}

IL_00aa:
	{
		XPathNavigator_t787956054 * L_15 = __this->get_U3Cnav2U3E__1_2();
		XPathNavigator_t787956054 * L_16 = __this->get_U3CnavU3E__0_1();
		VirtFuncInvoker1< bool, XPathNavigator_t787956054 * >::Invoke(19 /* System.Boolean System.Xml.XPath.XPathNavigator::MoveTo(System.Xml.XPath.XPathNavigator) */, L_15, L_16);
	}

IL_00bc:
	{
		XPathNavigator_t787956054 * L_17 = __this->get_U3Cnav2U3E__1_2();
		__this->set_U24current_5(L_17);
		__this->set_U24PC_4(1);
		goto IL_00ed;
	}

IL_00d4:
	{
		XPathNavigator_t787956054 * L_18 = __this->get_U3CnavU3E__0_1();
		bool L_19 = VirtFuncInvoker0< bool >::Invoke(28 /* System.Boolean System.Xml.XPath.XPathNavigator::MoveToNext() */, L_18);
		if (L_19)
		{
			goto IL_0066;
		}
	}
	{
		__this->set_U24PC_4((-1));
	}

IL_00eb:
	{
		return (bool)0;
	}

IL_00ed:
	{
		return (bool)1;
	}
	// Dead block : IL_00ef: ldloc.1
}
// System.Void System.Xml.XPath.XPathNavigator/<EnumerateChildren>c__Iterator0::Dispose()
extern "C"  void U3CEnumerateChildrenU3Ec__Iterator0_Dispose_m2034310094 (U3CEnumerateChildrenU3Ec__Iterator0_t404642154 * __this, const RuntimeMethod* method)
{
	{
		__this->set_U24PC_4((-1));
		return;
	}
}
// System.Void System.Xml.XPath.XPathNavigator/<EnumerateChildren>c__Iterator0::Reset()
extern "C"  void U3CEnumerateChildrenU3Ec__Iterator0_Reset_m3568231604 (U3CEnumerateChildrenU3Ec__Iterator0_t404642154 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CEnumerateChildrenU3Ec__Iterator0_Reset_m3568231604_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		NotSupportedException_t1314879016 * L_0 = (NotSupportedException_t1314879016 *)il2cpp_codegen_object_new(NotSupportedException_t1314879016_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m2730133172(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, NULL, U3CEnumerateChildrenU3Ec__Iterator0_Reset_m3568231604_RuntimeMethod_var);
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
// System.Void System.Xml.XPath.XPathNavigator/EnumerableIterator::.ctor(System.Collections.IEnumerable,System.Int32)
extern "C"  void EnumerableIterator__ctor_m868206615 (EnumerableIterator_t1590428576 * __this, RuntimeObject* ___source0, int32_t ___pos1, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		XPathNodeIterator__ctor_m2459357076(__this, /*hidden argument*/NULL);
		RuntimeObject* L_0 = ___source0;
		__this->set_source_1(L_0);
		V_0 = 0;
		goto IL_001f;
	}

IL_0014:
	{
		VirtFuncInvoker0< bool >::Invoke(11 /* System.Boolean System.Xml.XPath.XPathNavigator/EnumerableIterator::MoveNext() */, __this);
		int32_t L_1 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_1, (int32_t)1));
	}

IL_001f:
	{
		int32_t L_2 = V_0;
		int32_t L_3 = ___pos1;
		if ((((int32_t)L_2) < ((int32_t)L_3)))
		{
			goto IL_0014;
		}
	}
	{
		return;
	}
}
// System.Xml.XPath.XPathNodeIterator System.Xml.XPath.XPathNavigator/EnumerableIterator::Clone()
extern "C"  XPathNodeIterator_t3667290188 * EnumerableIterator_Clone_m1053335037 (EnumerableIterator_t1590428576 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (EnumerableIterator_Clone_m1053335037_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = __this->get_source_1();
		int32_t L_1 = __this->get_pos_3();
		EnumerableIterator_t1590428576 * L_2 = (EnumerableIterator_t1590428576 *)il2cpp_codegen_object_new(EnumerableIterator_t1590428576_il2cpp_TypeInfo_var);
		EnumerableIterator__ctor_m868206615(L_2, L_0, L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// System.Boolean System.Xml.XPath.XPathNavigator/EnumerableIterator::MoveNext()
extern "C"  bool EnumerableIterator_MoveNext_m1390725293 (EnumerableIterator_t1590428576 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (EnumerableIterator_MoveNext_m1390725293_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = __this->get_e_2();
		if (L_0)
		{
			goto IL_001c;
		}
	}
	{
		RuntimeObject* L_1 = __this->get_source_1();
		RuntimeObject* L_2 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.IEnumerator System.Collections.IEnumerable::GetEnumerator() */, IEnumerable_t1941168011_il2cpp_TypeInfo_var, L_1);
		__this->set_e_2(L_2);
	}

IL_001c:
	{
		RuntimeObject* L_3 = __this->get_e_2();
		bool L_4 = InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t1853284238_il2cpp_TypeInfo_var, L_3);
		if (L_4)
		{
			goto IL_002e;
		}
	}
	{
		return (bool)0;
	}

IL_002e:
	{
		int32_t L_5 = __this->get_pos_3();
		__this->set_pos_3(((int32_t)il2cpp_codegen_add((int32_t)L_5, (int32_t)1)));
		return (bool)1;
	}
}
// System.Int32 System.Xml.XPath.XPathNavigator/EnumerableIterator::get_CurrentPosition()
extern "C"  int32_t EnumerableIterator_get_CurrentPosition_m898049090 (EnumerableIterator_t1590428576 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_pos_3();
		return L_0;
	}
}
// System.Xml.XPath.XPathNavigator System.Xml.XPath.XPathNavigator/EnumerableIterator::get_Current()
extern "C"  XPathNavigator_t787956054 * EnumerableIterator_get_Current_m2416282970 (EnumerableIterator_t1590428576 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (EnumerableIterator_get_Current_m2416282970_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	XPathNavigator_t787956054 * G_B3_0 = NULL;
	{
		int32_t L_0 = __this->get_pos_3();
		if (L_0)
		{
			goto IL_0011;
		}
	}
	{
		G_B3_0 = ((XPathNavigator_t787956054 *)(NULL));
		goto IL_0021;
	}

IL_0011:
	{
		RuntimeObject* L_1 = __this->get_e_2();
		RuntimeObject * L_2 = InterfaceFuncInvoker0< RuntimeObject * >::Invoke(0 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t1853284238_il2cpp_TypeInfo_var, L_1);
		G_B3_0 = ((XPathNavigator_t787956054 *)CastclassClass((RuntimeObject*)L_2, XPathNavigator_t787956054_il2cpp_TypeInfo_var));
	}

IL_0021:
	{
		return G_B3_0;
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
// System.Void System.Xml.XPath.XPathNavigatorComparer::.ctor()
extern "C"  void XPathNavigatorComparer__ctor_m3727039997 (XPathNavigatorComparer_t2421573191 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Xml.XPath.XPathNavigatorComparer::.cctor()
extern "C"  void XPathNavigatorComparer__cctor_m3115965016 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XPathNavigatorComparer__cctor_m3115965016_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		XPathNavigatorComparer_t2421573191 * L_0 = (XPathNavigatorComparer_t2421573191 *)il2cpp_codegen_object_new(XPathNavigatorComparer_t2421573191_il2cpp_TypeInfo_var);
		XPathNavigatorComparer__ctor_m3727039997(L_0, /*hidden argument*/NULL);
		((XPathNavigatorComparer_t2421573191_StaticFields*)il2cpp_codegen_static_fields_for(XPathNavigatorComparer_t2421573191_il2cpp_TypeInfo_var))->set_Instance_0(L_0);
		return;
	}
}
// System.Boolean System.Xml.XPath.XPathNavigatorComparer::System.Collections.IEqualityComparer.Equals(System.Object,System.Object)
extern "C"  bool XPathNavigatorComparer_System_Collections_IEqualityComparer_Equals_m4007475784 (XPathNavigatorComparer_t2421573191 * __this, RuntimeObject * ___o10, RuntimeObject * ___o21, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XPathNavigatorComparer_System_Collections_IEqualityComparer_Equals_m4007475784_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	XPathNavigator_t787956054 * V_0 = NULL;
	XPathNavigator_t787956054 * V_1 = NULL;
	int32_t G_B4_0 = 0;
	{
		RuntimeObject * L_0 = ___o10;
		V_0 = ((XPathNavigator_t787956054 *)IsInstClass((RuntimeObject*)L_0, XPathNavigator_t787956054_il2cpp_TypeInfo_var));
		RuntimeObject * L_1 = ___o21;
		V_1 = ((XPathNavigator_t787956054 *)IsInstClass((RuntimeObject*)L_1, XPathNavigator_t787956054_il2cpp_TypeInfo_var));
		XPathNavigator_t787956054 * L_2 = V_0;
		if (!L_2)
		{
			goto IL_0023;
		}
	}
	{
		XPathNavigator_t787956054 * L_3 = V_1;
		if (!L_3)
		{
			goto IL_0023;
		}
	}
	{
		XPathNavigator_t787956054 * L_4 = V_0;
		XPathNavigator_t787956054 * L_5 = V_1;
		bool L_6 = VirtFuncInvoker1< bool, XPathNavigator_t787956054 * >::Invoke(18 /* System.Boolean System.Xml.XPath.XPathNavigator::IsSamePosition(System.Xml.XPath.XPathNavigator) */, L_4, L_5);
		G_B4_0 = ((int32_t)(L_6));
		goto IL_0024;
	}

IL_0023:
	{
		G_B4_0 = 0;
	}

IL_0024:
	{
		return (bool)G_B4_0;
	}
}
// System.Int32 System.Xml.XPath.XPathNavigatorComparer::System.Collections.IEqualityComparer.GetHashCode(System.Object)
extern "C"  int32_t XPathNavigatorComparer_System_Collections_IEqualityComparer_GetHashCode_m682080960 (XPathNavigatorComparer_t2421573191 * __this, RuntimeObject * ___obj0, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = ___obj0;
		int32_t L_1 = VirtFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.Object::GetHashCode() */, L_0);
		return L_1;
	}
}
// System.Int32 System.Xml.XPath.XPathNavigatorComparer::Compare(System.Object,System.Object)
extern "C"  int32_t XPathNavigatorComparer_Compare_m812493843 (XPathNavigatorComparer_t2421573191 * __this, RuntimeObject * ___o10, RuntimeObject * ___o21, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XPathNavigatorComparer_Compare_m812493843_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	XPathNavigator_t787956054 * V_0 = NULL;
	XPathNavigator_t787956054 * V_1 = NULL;
	int32_t V_2 = 0;
	{
		RuntimeObject * L_0 = ___o10;
		V_0 = ((XPathNavigator_t787956054 *)IsInstClass((RuntimeObject*)L_0, XPathNavigator_t787956054_il2cpp_TypeInfo_var));
		RuntimeObject * L_1 = ___o21;
		V_1 = ((XPathNavigator_t787956054 *)IsInstClass((RuntimeObject*)L_1, XPathNavigator_t787956054_il2cpp_TypeInfo_var));
		XPathNavigator_t787956054 * L_2 = V_0;
		if (L_2)
		{
			goto IL_0016;
		}
	}
	{
		return (-1);
	}

IL_0016:
	{
		XPathNavigator_t787956054 * L_3 = V_1;
		if (L_3)
		{
			goto IL_001e;
		}
	}
	{
		return 1;
	}

IL_001e:
	{
		XPathNavigator_t787956054 * L_4 = V_0;
		XPathNavigator_t787956054 * L_5 = V_1;
		int32_t L_6 = VirtFuncInvoker1< int32_t, XPathNavigator_t787956054 * >::Invoke(15 /* System.Xml.XmlNodeOrder System.Xml.XPath.XPathNavigator::ComparePosition(System.Xml.XPath.XPathNavigator) */, L_4, L_5);
		V_2 = L_6;
		int32_t L_7 = V_2;
		if ((((int32_t)L_7) == ((int32_t)1)))
		{
			goto IL_003b;
		}
	}
	{
		int32_t L_8 = V_2;
		if ((((int32_t)L_8) == ((int32_t)2)))
		{
			goto IL_0039;
		}
	}
	{
		goto IL_003d;
	}

IL_0039:
	{
		return 0;
	}

IL_003b:
	{
		return 1;
	}

IL_003d:
	{
		return (-1);
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
// System.Void System.Xml.XPath.XPathNodeIterator::.ctor()
extern "C"  void XPathNodeIterator__ctor_m2459357076 (XPathNodeIterator_t3667290188 * __this, const RuntimeMethod* method)
{
	{
		__this->set__count_0((-1));
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Object System.Xml.XPath.XPathNodeIterator::System.ICloneable.Clone()
extern "C"  RuntimeObject * XPathNodeIterator_System_ICloneable_Clone_m3439409221 (XPathNodeIterator_t3667290188 * __this, const RuntimeMethod* method)
{
	{
		XPathNodeIterator_t3667290188 * L_0 = VirtFuncInvoker0< XPathNodeIterator_t3667290188 * >::Invoke(9 /* System.Xml.XPath.XPathNodeIterator System.Xml.XPath.XPathNodeIterator::Clone() */, __this);
		return L_0;
	}
}
// System.Int32 System.Xml.XPath.XPathNodeIterator::get_Count()
extern "C"  int32_t XPathNodeIterator_get_Count_m4166971475 (XPathNodeIterator_t3667290188 * __this, const RuntimeMethod* method)
{
	XPathNodeIterator_t3667290188 * V_0 = NULL;
	{
		int32_t L_0 = __this->get__count_0();
		if ((!(((uint32_t)L_0) == ((uint32_t)(-1)))))
		{
			goto IL_002f;
		}
	}
	{
		XPathNodeIterator_t3667290188 * L_1 = VirtFuncInvoker0< XPathNodeIterator_t3667290188 * >::Invoke(9 /* System.Xml.XPath.XPathNodeIterator System.Xml.XPath.XPathNodeIterator::Clone() */, __this);
		V_0 = L_1;
		goto IL_0018;
	}

IL_0018:
	{
		XPathNodeIterator_t3667290188 * L_2 = V_0;
		bool L_3 = VirtFuncInvoker0< bool >::Invoke(11 /* System.Boolean System.Xml.XPath.XPathNodeIterator::MoveNext() */, L_2);
		if (L_3)
		{
			goto IL_0018;
		}
	}
	{
		XPathNodeIterator_t3667290188 * L_4 = V_0;
		int32_t L_5 = VirtFuncInvoker0< int32_t >::Invoke(8 /* System.Int32 System.Xml.XPath.XPathNodeIterator::get_CurrentPosition() */, L_4);
		__this->set__count_0(L_5);
	}

IL_002f:
	{
		int32_t L_6 = __this->get__count_0();
		return L_6;
	}
}
// System.Collections.IEnumerator System.Xml.XPath.XPathNodeIterator::GetEnumerator()
extern "C"  RuntimeObject* XPathNodeIterator_GetEnumerator_m117094251 (XPathNodeIterator_t3667290188 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XPathNodeIterator_GetEnumerator_m117094251_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	U3CGetEnumeratorU3Ec__Iterator2_t90454087 * V_0 = NULL;
	{
		U3CGetEnumeratorU3Ec__Iterator2_t90454087 * L_0 = (U3CGetEnumeratorU3Ec__Iterator2_t90454087 *)il2cpp_codegen_object_new(U3CGetEnumeratorU3Ec__Iterator2_t90454087_il2cpp_TypeInfo_var);
		U3CGetEnumeratorU3Ec__Iterator2__ctor_m4018238552(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		U3CGetEnumeratorU3Ec__Iterator2_t90454087 * L_1 = V_0;
		L_1->set_U3CU3Ef__this_2(__this);
		U3CGetEnumeratorU3Ec__Iterator2_t90454087 * L_2 = V_0;
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
// System.Void System.Xml.XPath.XPathNodeIterator/<GetEnumerator>c__Iterator2::.ctor()
extern "C"  void U3CGetEnumeratorU3Ec__Iterator2__ctor_m4018238552 (U3CGetEnumeratorU3Ec__Iterator2_t90454087 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Object System.Xml.XPath.XPathNodeIterator/<GetEnumerator>c__Iterator2::System.Collections.Generic.IEnumerator<object>.get_Current()
extern "C"  RuntimeObject * U3CGetEnumeratorU3Ec__Iterator2_System_Collections_Generic_IEnumeratorU3CobjectU3E_get_Current_m2379591546 (U3CGetEnumeratorU3Ec__Iterator2_t90454087 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U24current_1();
		return L_0;
	}
}
// System.Object System.Xml.XPath.XPathNodeIterator/<GetEnumerator>c__Iterator2::System.Collections.IEnumerator.get_Current()
extern "C"  RuntimeObject * U3CGetEnumeratorU3Ec__Iterator2_System_Collections_IEnumerator_get_Current_m1400419750 (U3CGetEnumeratorU3Ec__Iterator2_t90454087 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U24current_1();
		return L_0;
	}
}
// System.Boolean System.Xml.XPath.XPathNodeIterator/<GetEnumerator>c__Iterator2::MoveNext()
extern "C"  bool U3CGetEnumeratorU3Ec__Iterator2_MoveNext_m869430810 (U3CGetEnumeratorU3Ec__Iterator2_t90454087 * __this, const RuntimeMethod* method)
{
	uint32_t V_0 = 0;
	bool V_1 = false;
	{
		int32_t L_0 = __this->get_U24PC_0();
		V_0 = L_0;
		__this->set_U24PC_0((-1));
		uint32_t L_1 = V_0;
		switch (L_1)
		{
			case 0:
			{
				goto IL_0021;
			}
			case 1:
			{
				goto IL_0043;
			}
		}
	}
	{
		goto IL_005a;
	}

IL_0021:
	{
		goto IL_0043;
	}

IL_0026:
	{
		XPathNodeIterator_t3667290188 * L_2 = __this->get_U3CU3Ef__this_2();
		XPathNavigator_t787956054 * L_3 = VirtFuncInvoker0< XPathNavigator_t787956054 * >::Invoke(7 /* System.Xml.XPath.XPathNavigator System.Xml.XPath.XPathNodeIterator::get_Current() */, L_2);
		__this->set_U24current_1(L_3);
		__this->set_U24PC_0(1);
		goto IL_005c;
	}

IL_0043:
	{
		XPathNodeIterator_t3667290188 * L_4 = __this->get_U3CU3Ef__this_2();
		bool L_5 = VirtFuncInvoker0< bool >::Invoke(11 /* System.Boolean System.Xml.XPath.XPathNodeIterator::MoveNext() */, L_4);
		if (L_5)
		{
			goto IL_0026;
		}
	}
	{
		__this->set_U24PC_0((-1));
	}

IL_005a:
	{
		return (bool)0;
	}

IL_005c:
	{
		return (bool)1;
	}
	// Dead block : IL_005e: ldloc.1
}
// System.Void System.Xml.XPath.XPathNodeIterator/<GetEnumerator>c__Iterator2::Dispose()
extern "C"  void U3CGetEnumeratorU3Ec__Iterator2_Dispose_m824786816 (U3CGetEnumeratorU3Ec__Iterator2_t90454087 * __this, const RuntimeMethod* method)
{
	{
		__this->set_U24PC_0((-1));
		return;
	}
}
// System.Void System.Xml.XPath.XPathNodeIterator/<GetEnumerator>c__Iterator2::Reset()
extern "C"  void U3CGetEnumeratorU3Ec__Iterator2_Reset_m3606261836 (U3CGetEnumeratorU3Ec__Iterator2_t90454087 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CGetEnumeratorU3Ec__Iterator2_Reset_m3606261836_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		NotSupportedException_t1314879016 * L_0 = (NotSupportedException_t1314879016 *)il2cpp_codegen_object_new(NotSupportedException_t1314879016_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m2730133172(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, NULL, U3CGetEnumeratorU3Ec__Iterator2_Reset_m3606261836_RuntimeMethod_var);
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
// System.Void System.Xml.XPath.XPathNumericFunction::.ctor(System.Xml.XPath.FunctionArguments)
extern "C"  void XPathNumericFunction__ctor_m4265073059 (XPathNumericFunction_t307051317 * __this, FunctionArguments_t3573450773 * ___args0, const RuntimeMethod* method)
{
	{
		FunctionArguments_t3573450773 * L_0 = ___args0;
		XPathFunction__ctor_m3144973253(__this, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Xml.XPath.XPathResultType System.Xml.XPath.XPathNumericFunction::get_ReturnType()
extern "C"  int32_t XPathNumericFunction_get_ReturnType_m3502341669 (XPathNumericFunction_t307051317 * __this, const RuntimeMethod* method)
{
	{
		return (int32_t)(0);
	}
}
// System.Object System.Xml.XPath.XPathNumericFunction::get_StaticValue()
extern "C"  RuntimeObject * XPathNumericFunction_get_StaticValue_m673646255 (XPathNumericFunction_t307051317 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XPathNumericFunction_get_StaticValue_m673646255_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		double L_0 = VirtFuncInvoker0< double >::Invoke(10 /* System.Double System.Xml.XPath.Expression::get_StaticValueAsNumber() */, __this);
		double L_1 = L_0;
		RuntimeObject * L_2 = Box(Double_t594665363_il2cpp_TypeInfo_var, &L_1);
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void System.Xml.XPath.XPathSortElement::.ctor()
extern "C"  void XPathSortElement__ctor_m4130792685 (XPathSortElement_t4237073177 * __this, const RuntimeMethod* method)
{
	{
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
// System.Object System.Xml.XPath.XPathSorter::Evaluate(System.Xml.XPath.BaseIterator)
extern "C"  RuntimeObject * XPathSorter_Evaluate_m2305850354 (XPathSorter_t36376808 * __this, BaseIterator_t4168896842 * ___iter0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XPathSorter_Evaluate_m2305850354_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = __this->get__type_2();
		if ((!(((uint32_t)L_0) == ((uint32_t)2))))
		{
			goto IL_001e;
		}
	}
	{
		Expression_t1452783009 * L_1 = __this->get__expr_0();
		BaseIterator_t4168896842 * L_2 = ___iter0;
		double L_3 = VirtFuncInvoker1< double, BaseIterator_t4168896842 * >::Invoke(16 /* System.Double System.Xml.XPath.Expression::EvaluateNumber(System.Xml.XPath.BaseIterator) */, L_1, L_2);
		double L_4 = L_3;
		RuntimeObject * L_5 = Box(Double_t594665363_il2cpp_TypeInfo_var, &L_4);
		return L_5;
	}

IL_001e:
	{
		Expression_t1452783009 * L_6 = __this->get__expr_0();
		BaseIterator_t4168896842 * L_7 = ___iter0;
		String_t* L_8 = VirtFuncInvoker1< String_t*, BaseIterator_t4168896842 * >::Invoke(17 /* System.String System.Xml.XPath.Expression::EvaluateString(System.Xml.XPath.BaseIterator) */, L_6, L_7);
		return L_8;
	}
}
// System.Int32 System.Xml.XPath.XPathSorter::Compare(System.Object,System.Object)
extern "C"  int32_t XPathSorter_Compare_m1410690161 (XPathSorter_t36376808 * __this, RuntimeObject * ___o10, RuntimeObject * ___o21, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XPathSorter_Compare_m1410690161_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = __this->get__cmp_1();
		RuntimeObject * L_1 = ___o10;
		RuntimeObject * L_2 = ___o21;
		int32_t L_3 = InterfaceFuncInvoker2< int32_t, RuntimeObject *, RuntimeObject * >::Invoke(0 /* System.Int32 System.Collections.IComparer::Compare(System.Object,System.Object) */, IComparer_t1540313114_il2cpp_TypeInfo_var, L_0, L_1, L_2);
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
// System.Int32 System.Xml.XPath.XPathSorters::System.Collections.IComparer.Compare(System.Object,System.Object)
extern "C"  int32_t XPathSorters_System_Collections_IComparer_Compare_m3602250543 (XPathSorters_t698127628 * __this, RuntimeObject * ___o10, RuntimeObject * ___o21, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XPathSorters_System_Collections_IComparer_Compare_m3602250543_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	XPathSortElement_t4237073177 * V_0 = NULL;
	XPathSortElement_t4237073177 * V_1 = NULL;
	int32_t V_2 = 0;
	XPathSorter_t36376808 * V_3 = NULL;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	{
		RuntimeObject * L_0 = ___o10;
		V_0 = ((XPathSortElement_t4237073177 *)CastclassClass((RuntimeObject*)L_0, XPathSortElement_t4237073177_il2cpp_TypeInfo_var));
		RuntimeObject * L_1 = ___o21;
		V_1 = ((XPathSortElement_t4237073177 *)CastclassClass((RuntimeObject*)L_1, XPathSortElement_t4237073177_il2cpp_TypeInfo_var));
		V_2 = 0;
		goto IL_004d;
	}

IL_0015:
	{
		ArrayList_t2718874744 * L_2 = __this->get__rgSorters_0();
		int32_t L_3 = V_2;
		RuntimeObject * L_4 = VirtFuncInvoker1< RuntimeObject *, int32_t >::Invoke(21 /* System.Object System.Collections.ArrayList::get_Item(System.Int32) */, L_2, L_3);
		V_3 = ((XPathSorter_t36376808 *)CastclassClass((RuntimeObject*)L_4, XPathSorter_t36376808_il2cpp_TypeInfo_var));
		XPathSorter_t36376808 * L_5 = V_3;
		XPathSortElement_t4237073177 * L_6 = V_0;
		ObjectU5BU5D_t2843939325* L_7 = L_6->get_Values_1();
		int32_t L_8 = V_2;
		int32_t L_9 = L_8;
		RuntimeObject * L_10 = (L_7)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_9));
		XPathSortElement_t4237073177 * L_11 = V_1;
		ObjectU5BU5D_t2843939325* L_12 = L_11->get_Values_1();
		int32_t L_13 = V_2;
		int32_t L_14 = L_13;
		RuntimeObject * L_15 = (L_12)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_14));
		int32_t L_16 = XPathSorter_Compare_m1410690161(L_5, L_10, L_15, /*hidden argument*/NULL);
		V_4 = L_16;
		int32_t L_17 = V_4;
		if (!L_17)
		{
			goto IL_0049;
		}
	}
	{
		int32_t L_18 = V_4;
		return L_18;
	}

IL_0049:
	{
		int32_t L_19 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_19, (int32_t)1));
	}

IL_004d:
	{
		int32_t L_20 = V_2;
		ArrayList_t2718874744 * L_21 = __this->get__rgSorters_0();
		int32_t L_22 = VirtFuncInvoker0< int32_t >::Invoke(23 /* System.Int32 System.Collections.ArrayList::get_Count() */, L_21);
		if ((((int32_t)L_20) < ((int32_t)L_22)))
		{
			goto IL_0015;
		}
	}
	{
		XPathSortElement_t4237073177 * L_23 = V_0;
		XPathNavigator_t787956054 * L_24 = L_23->get_Navigator_0();
		XPathSortElement_t4237073177 * L_25 = V_1;
		XPathNavigator_t787956054 * L_26 = L_25->get_Navigator_0();
		int32_t L_27 = VirtFuncInvoker1< int32_t, XPathNavigator_t787956054 * >::Invoke(15 /* System.Xml.XmlNodeOrder System.Xml.XPath.XPathNavigator::ComparePosition(System.Xml.XPath.XPathNavigator) */, L_24, L_26);
		V_5 = L_27;
		int32_t L_28 = V_5;
		if ((((int32_t)L_28) == ((int32_t)1)))
		{
			goto IL_0088;
		}
	}
	{
		int32_t L_29 = V_5;
		if ((((int32_t)L_29) == ((int32_t)2)))
		{
			goto IL_0086;
		}
	}
	{
		goto IL_008a;
	}

IL_0086:
	{
		return 0;
	}

IL_0088:
	{
		return 1;
	}

IL_008a:
	{
		return (-1);
	}
}
// System.Xml.XPath.BaseIterator System.Xml.XPath.XPathSorters::Sort(System.Xml.XPath.BaseIterator)
extern "C"  BaseIterator_t4168896842 * XPathSorters_Sort_m1473903338 (XPathSorters_t698127628 * __this, BaseIterator_t4168896842 * ___iter0, const RuntimeMethod* method)
{
	ArrayList_t2718874744 * V_0 = NULL;
	{
		BaseIterator_t4168896842 * L_0 = ___iter0;
		ArrayList_t2718874744 * L_1 = XPathSorters_ToSortElementList_m992101952(__this, L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		ArrayList_t2718874744 * L_2 = V_0;
		BaseIterator_t4168896842 * L_3 = ___iter0;
		RuntimeObject* L_4 = BaseIterator_get_NamespaceManager_m2542706114(L_3, /*hidden argument*/NULL);
		BaseIterator_t4168896842 * L_5 = XPathSorters_Sort_m148301611(__this, L_2, L_4, /*hidden argument*/NULL);
		return L_5;
	}
}
// System.Collections.ArrayList System.Xml.XPath.XPathSorters::ToSortElementList(System.Xml.XPath.BaseIterator)
extern "C"  ArrayList_t2718874744 * XPathSorters_ToSortElementList_m992101952 (XPathSorters_t698127628 * __this, BaseIterator_t4168896842 * ___iter0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XPathSorters_ToSortElementList_m992101952_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	ArrayList_t2718874744 * V_0 = NULL;
	int32_t V_1 = 0;
	XPathSortElement_t4237073177 * V_2 = NULL;
	int32_t V_3 = 0;
	XPathSorter_t36376808 * V_4 = NULL;
	{
		ArrayList_t2718874744 * L_0 = (ArrayList_t2718874744 *)il2cpp_codegen_object_new(ArrayList_t2718874744_il2cpp_TypeInfo_var);
		ArrayList__ctor_m4254721275(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		ArrayList_t2718874744 * L_1 = __this->get__rgSorters_0();
		int32_t L_2 = VirtFuncInvoker0< int32_t >::Invoke(23 /* System.Int32 System.Collections.ArrayList::get_Count() */, L_1);
		V_1 = L_2;
		goto IL_0081;
	}

IL_0017:
	{
		XPathSortElement_t4237073177 * L_3 = (XPathSortElement_t4237073177 *)il2cpp_codegen_object_new(XPathSortElement_t4237073177_il2cpp_TypeInfo_var);
		XPathSortElement__ctor_m4130792685(L_3, /*hidden argument*/NULL);
		V_2 = L_3;
		XPathSortElement_t4237073177 * L_4 = V_2;
		BaseIterator_t4168896842 * L_5 = ___iter0;
		XPathNavigator_t787956054 * L_6 = VirtFuncInvoker0< XPathNavigator_t787956054 * >::Invoke(7 /* System.Xml.XPath.XPathNavigator System.Xml.XPath.XPathNodeIterator::get_Current() */, L_5);
		XPathNavigator_t787956054 * L_7 = VirtFuncInvoker0< XPathNavigator_t787956054 * >::Invoke(14 /* System.Xml.XPath.XPathNavigator System.Xml.XPath.XPathNavigator::Clone() */, L_6);
		L_4->set_Navigator_0(L_7);
		XPathSortElement_t4237073177 * L_8 = V_2;
		int32_t L_9 = V_1;
		L_8->set_Values_1(((ObjectU5BU5D_t2843939325*)SZArrayNew(ObjectU5BU5D_t2843939325_il2cpp_TypeInfo_var, (uint32_t)L_9)));
		V_3 = 0;
		goto IL_0068;
	}

IL_0041:
	{
		ArrayList_t2718874744 * L_10 = __this->get__rgSorters_0();
		int32_t L_11 = V_3;
		RuntimeObject * L_12 = VirtFuncInvoker1< RuntimeObject *, int32_t >::Invoke(21 /* System.Object System.Collections.ArrayList::get_Item(System.Int32) */, L_10, L_11);
		V_4 = ((XPathSorter_t36376808 *)CastclassClass((RuntimeObject*)L_12, XPathSorter_t36376808_il2cpp_TypeInfo_var));
		XPathSortElement_t4237073177 * L_13 = V_2;
		ObjectU5BU5D_t2843939325* L_14 = L_13->get_Values_1();
		int32_t L_15 = V_3;
		XPathSorter_t36376808 * L_16 = V_4;
		BaseIterator_t4168896842 * L_17 = ___iter0;
		RuntimeObject * L_18 = XPathSorter_Evaluate_m2305850354(L_16, L_17, /*hidden argument*/NULL);
		ArrayElementTypeCheck (L_14, L_18);
		(L_14)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_15), (RuntimeObject *)L_18);
		int32_t L_19 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add((int32_t)L_19, (int32_t)1));
	}

IL_0068:
	{
		int32_t L_20 = V_3;
		ArrayList_t2718874744 * L_21 = __this->get__rgSorters_0();
		int32_t L_22 = VirtFuncInvoker0< int32_t >::Invoke(23 /* System.Int32 System.Collections.ArrayList::get_Count() */, L_21);
		if ((((int32_t)L_20) < ((int32_t)L_22)))
		{
			goto IL_0041;
		}
	}
	{
		ArrayList_t2718874744 * L_23 = V_0;
		XPathSortElement_t4237073177 * L_24 = V_2;
		VirtFuncInvoker1< int32_t, RuntimeObject * >::Invoke(30 /* System.Int32 System.Collections.ArrayList::Add(System.Object) */, L_23, L_24);
	}

IL_0081:
	{
		BaseIterator_t4168896842 * L_25 = ___iter0;
		bool L_26 = VirtFuncInvoker0< bool >::Invoke(11 /* System.Boolean System.Xml.XPath.BaseIterator::MoveNext() */, L_25);
		if (L_26)
		{
			goto IL_0017;
		}
	}
	{
		ArrayList_t2718874744 * L_27 = V_0;
		return L_27;
	}
}
// System.Xml.XPath.BaseIterator System.Xml.XPath.XPathSorters::Sort(System.Collections.ArrayList,System.Xml.IXmlNamespaceResolver)
extern "C"  BaseIterator_t4168896842 * XPathSorters_Sort_m148301611 (XPathSorters_t698127628 * __this, ArrayList_t2718874744 * ___rgElts0, RuntimeObject* ___nsm1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XPathSorters_Sort_m148301611_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	XPathNavigatorU5BU5D_t3671675027* V_0 = NULL;
	int32_t V_1 = 0;
	XPathSortElement_t4237073177 * V_2 = NULL;
	{
		ArrayList_t2718874744 * L_0 = ___rgElts0;
		VirtActionInvoker1< RuntimeObject* >::Invoke(46 /* System.Void System.Collections.ArrayList::Sort(System.Collections.IComparer) */, L_0, __this);
		ArrayList_t2718874744 * L_1 = ___rgElts0;
		int32_t L_2 = VirtFuncInvoker0< int32_t >::Invoke(23 /* System.Int32 System.Collections.ArrayList::get_Count() */, L_1);
		V_0 = ((XPathNavigatorU5BU5D_t3671675027*)SZArrayNew(XPathNavigatorU5BU5D_t3671675027_il2cpp_TypeInfo_var, (uint32_t)L_2));
		V_1 = 0;
		goto IL_0034;
	}

IL_001a:
	{
		ArrayList_t2718874744 * L_3 = ___rgElts0;
		int32_t L_4 = V_1;
		RuntimeObject * L_5 = VirtFuncInvoker1< RuntimeObject *, int32_t >::Invoke(21 /* System.Object System.Collections.ArrayList::get_Item(System.Int32) */, L_3, L_4);
		V_2 = ((XPathSortElement_t4237073177 *)CastclassClass((RuntimeObject*)L_5, XPathSortElement_t4237073177_il2cpp_TypeInfo_var));
		XPathNavigatorU5BU5D_t3671675027* L_6 = V_0;
		int32_t L_7 = V_1;
		XPathSortElement_t4237073177 * L_8 = V_2;
		XPathNavigator_t787956054 * L_9 = L_8->get_Navigator_0();
		ArrayElementTypeCheck (L_6, L_9);
		(L_6)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_7), (XPathNavigator_t787956054 *)L_9);
		int32_t L_10 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_10, (int32_t)1));
	}

IL_0034:
	{
		int32_t L_11 = V_1;
		ArrayList_t2718874744 * L_12 = ___rgElts0;
		int32_t L_13 = VirtFuncInvoker0< int32_t >::Invoke(23 /* System.Int32 System.Collections.ArrayList::get_Count() */, L_12);
		if ((((int32_t)L_11) < ((int32_t)L_13)))
		{
			goto IL_001a;
		}
	}
	{
		XPathNavigatorU5BU5D_t3671675027* L_14 = V_0;
		RuntimeObject* L_15 = ___nsm1;
		ListIterator_t3066609410 * L_16 = (ListIterator_t3066609410 *)il2cpp_codegen_object_new(ListIterator_t3066609410_il2cpp_TypeInfo_var);
		ListIterator__ctor_m1701056558(L_16, (RuntimeObject*)(RuntimeObject*)L_14, L_15, /*hidden argument*/NULL);
		return L_16;
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
// System.Xml.Xsl.IXsltContextVariable System.Xml.Xsl.XsltContext::ResolveVariable(System.Xml.XmlQualifiedName)
extern "C"  RuntimeObject* XsltContext_ResolveVariable_m463515924 (XsltContext_t2039362735 * __this, XmlQualifiedName_t2760654312 * ___name0, const RuntimeMethod* method)
{
	{
		XmlQualifiedName_t2760654312 * L_0 = ___name0;
		String_t* L_1 = XmlQualifiedName_get_Namespace_m3957593392(L_0, /*hidden argument*/NULL);
		String_t* L_2 = VirtFuncInvoker1< String_t*, String_t* >::Invoke(11 /* System.String System.Xml.XmlNamespaceManager::LookupPrefix(System.String) */, __this, L_1);
		XmlQualifiedName_t2760654312 * L_3 = ___name0;
		String_t* L_4 = XmlQualifiedName_get_Name_m815040483(L_3, /*hidden argument*/NULL);
		RuntimeObject* L_5 = VirtFuncInvoker2< RuntimeObject*, String_t*, String_t* >::Invoke(16 /* System.Xml.Xsl.IXsltContextVariable System.Xml.Xsl.XsltContext::ResolveVariable(System.String,System.String) */, __this, L_2, L_4);
		return L_5;
	}
}
// System.Xml.Xsl.IXsltContextFunction System.Xml.Xsl.XsltContext::ResolveFunction(System.Xml.XmlQualifiedName,System.Xml.XPath.XPathResultType[])
extern "C"  RuntimeObject* XsltContext_ResolveFunction_m4178006800 (XsltContext_t2039362735 * __this, XmlQualifiedName_t2760654312 * ___name0, XPathResultTypeU5BU5D_t1515527577* ___argTypes1, const RuntimeMethod* method)
{
	{
		XmlQualifiedName_t2760654312 * L_0 = ___name0;
		String_t* L_1 = XmlQualifiedName_get_Name_m815040483(L_0, /*hidden argument*/NULL);
		XmlQualifiedName_t2760654312 * L_2 = ___name0;
		String_t* L_3 = XmlQualifiedName_get_Namespace_m3957593392(L_2, /*hidden argument*/NULL);
		XPathResultTypeU5BU5D_t1515527577* L_4 = ___argTypes1;
		RuntimeObject* L_5 = VirtFuncInvoker3< RuntimeObject*, String_t*, String_t*, XPathResultTypeU5BU5D_t1515527577* >::Invoke(15 /* System.Xml.Xsl.IXsltContextFunction System.Xml.Xsl.XsltContext::ResolveFunction(System.String,System.String,System.Xml.XPath.XPathResultType[]) */, __this, L_1, L_3, L_4);
		return L_5;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif

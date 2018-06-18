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


// System.Collections.ArrayList
struct ArrayList_t2718874744;
// System.IntPtr[]
struct IntPtrU5BU5D_t4013366056;
// System.String
struct String_t;
// System.Collections.IDictionary
struct IDictionary_t1363984059;
// System.Collections.Specialized.ListDictionary
struct ListDictionary_t1624492310;
// System.Xml.XPath.XPathNavigator
struct XPathNavigator_t787956054;
// System.Object[]
struct ObjectU5BU5D_t2843939325;
// System.Collections.Hashtable
struct Hashtable_t1853889766;
// System.Xml.XPath.Expression
struct Expression_t1452783009;
// System.Xml.IXmlNamespaceResolver
struct IXmlNamespaceResolver_t535375154;
// System.Xml.XmlQualifiedName
struct XmlQualifiedName_t2760654312;
// System.Char[]
struct CharU5BU5D_t3528271667;
// System.Collections.Generic.Dictionary`2<System.String,System.Int32>
struct Dictionary_2_t2736202052;
// System.Xml.XPath.XPathSorters
struct XPathSorters_t698127628;
// System.Security.Cryptography.RandomNumberGenerator
struct RandomNumberGenerator_t386037858;
// System.Type
struct Type_t;
// System.Xml.Serialization.XmlSerializerNamespaces
struct XmlSerializerNamespaces_t2702737953;
// System.Xml.XPath.NodeSet
struct NodeSet_t3272593155;
// System.Xml.XPath.NodeTest
struct NodeTest_t747859056;
// System.Xml.XPath.AxisSpecifier
struct AxisSpecifier_t40435393;
// System.Xml.Schema.XmlSchemaObject
struct XmlSchemaObject_t1315720168;
// System.Xml.XPath.XPathNodeIterator
struct XPathNodeIterator_t3667290188;
// System.Xml.Schema.XmlSchemaAnnotation
struct XmlSchemaAnnotation_t2553753397;
// System.Xml.XmlAttribute[]
struct XmlAttributeU5BU5D_t1490365106;
// System.Xml.Schema.XmlSchemaPatternFacet
struct XmlSchemaPatternFacet_t3316004401;
// System.String[]
struct StringU5BU5D_t1281789340;
// System.Collections.IComparer
struct IComparer_t1540313114;
// System.Xml.XmlNamespaceManager
struct XmlNamespaceManager_t418790500;
// Mono.Xml.Schema.XsdIdentityPath[]
struct XsdIdentityPathU5BU5D_t2466178853;
// Mono.Xml.Schema.XsdIdentityPath
struct XsdIdentityPath_t991900844;




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
#ifndef XMLSERIALIZERNAMESPACES_T2702737953_H
#define XMLSERIALIZERNAMESPACES_T2702737953_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.Serialization.XmlSerializerNamespaces
struct  XmlSerializerNamespaces_t2702737953  : public RuntimeObject
{
public:
	// System.Collections.Specialized.ListDictionary System.Xml.Serialization.XmlSerializerNamespaces::namespaces
	ListDictionary_t1624492310 * ___namespaces_0;

public:
	inline static int32_t get_offset_of_namespaces_0() { return static_cast<int32_t>(offsetof(XmlSerializerNamespaces_t2702737953, ___namespaces_0)); }
	inline ListDictionary_t1624492310 * get_namespaces_0() const { return ___namespaces_0; }
	inline ListDictionary_t1624492310 ** get_address_of_namespaces_0() { return &___namespaces_0; }
	inline void set_namespaces_0(ListDictionary_t1624492310 * value)
	{
		___namespaces_0 = value;
		Il2CppCodeGenWriteBarrier((&___namespaces_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // XMLSERIALIZERNAMESPACES_T2702737953_H
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
#ifndef TYPETRANSLATOR_T3446962748_H
#define TYPETRANSLATOR_T3446962748_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.Serialization.TypeTranslator
struct  TypeTranslator_t3446962748  : public RuntimeObject
{
public:

public:
};

struct TypeTranslator_t3446962748_StaticFields
{
public:
	// System.Collections.Hashtable System.Xml.Serialization.TypeTranslator::nameCache
	Hashtable_t1853889766 * ___nameCache_0;
	// System.Collections.Hashtable System.Xml.Serialization.TypeTranslator::primitiveTypes
	Hashtable_t1853889766 * ___primitiveTypes_1;
	// System.Collections.Hashtable System.Xml.Serialization.TypeTranslator::primitiveArrayTypes
	Hashtable_t1853889766 * ___primitiveArrayTypes_2;
	// System.Collections.Hashtable System.Xml.Serialization.TypeTranslator::nullableTypes
	Hashtable_t1853889766 * ___nullableTypes_3;

public:
	inline static int32_t get_offset_of_nameCache_0() { return static_cast<int32_t>(offsetof(TypeTranslator_t3446962748_StaticFields, ___nameCache_0)); }
	inline Hashtable_t1853889766 * get_nameCache_0() const { return ___nameCache_0; }
	inline Hashtable_t1853889766 ** get_address_of_nameCache_0() { return &___nameCache_0; }
	inline void set_nameCache_0(Hashtable_t1853889766 * value)
	{
		___nameCache_0 = value;
		Il2CppCodeGenWriteBarrier((&___nameCache_0), value);
	}

	inline static int32_t get_offset_of_primitiveTypes_1() { return static_cast<int32_t>(offsetof(TypeTranslator_t3446962748_StaticFields, ___primitiveTypes_1)); }
	inline Hashtable_t1853889766 * get_primitiveTypes_1() const { return ___primitiveTypes_1; }
	inline Hashtable_t1853889766 ** get_address_of_primitiveTypes_1() { return &___primitiveTypes_1; }
	inline void set_primitiveTypes_1(Hashtable_t1853889766 * value)
	{
		___primitiveTypes_1 = value;
		Il2CppCodeGenWriteBarrier((&___primitiveTypes_1), value);
	}

	inline static int32_t get_offset_of_primitiveArrayTypes_2() { return static_cast<int32_t>(offsetof(TypeTranslator_t3446962748_StaticFields, ___primitiveArrayTypes_2)); }
	inline Hashtable_t1853889766 * get_primitiveArrayTypes_2() const { return ___primitiveArrayTypes_2; }
	inline Hashtable_t1853889766 ** get_address_of_primitiveArrayTypes_2() { return &___primitiveArrayTypes_2; }
	inline void set_primitiveArrayTypes_2(Hashtable_t1853889766 * value)
	{
		___primitiveArrayTypes_2 = value;
		Il2CppCodeGenWriteBarrier((&___primitiveArrayTypes_2), value);
	}

	inline static int32_t get_offset_of_nullableTypes_3() { return static_cast<int32_t>(offsetof(TypeTranslator_t3446962748_StaticFields, ___nullableTypes_3)); }
	inline Hashtable_t1853889766 * get_nullableTypes_3() const { return ___nullableTypes_3; }
	inline Hashtable_t1853889766 ** get_address_of_nullableTypes_3() { return &___nullableTypes_3; }
	inline void set_nullableTypes_3(Hashtable_t1853889766 * value)
	{
		___nullableTypes_3 = value;
		Il2CppCodeGenWriteBarrier((&___nullableTypes_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TYPETRANSLATOR_T3446962748_H
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
#ifndef ATTRIBUTE_T861562559_H
#define ATTRIBUTE_T861562559_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Attribute
struct  Attribute_t861562559  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ATTRIBUTE_T861562559_H
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
#ifndef CODEIDENTIFIER_T2202687290_H
#define CODEIDENTIFIER_T2202687290_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.Serialization.CodeIdentifier
struct  CodeIdentifier_t2202687290  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CODEIDENTIFIER_T2202687290_H
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
#ifndef EXPRFUNCTIONCALL_T607199437_H
#define EXPRFUNCTIONCALL_T607199437_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.XPath.ExprFunctionCall
struct  ExprFunctionCall_t607199437  : public Expression_t1452783009
{
public:
	// System.Xml.XmlQualifiedName System.Xml.XPath.ExprFunctionCall::_name
	XmlQualifiedName_t2760654312 * ____name_0;
	// System.Boolean System.Xml.XPath.ExprFunctionCall::resolvedName
	bool ___resolvedName_1;
	// System.Collections.ArrayList System.Xml.XPath.ExprFunctionCall::_args
	ArrayList_t2718874744 * ____args_2;

public:
	inline static int32_t get_offset_of__name_0() { return static_cast<int32_t>(offsetof(ExprFunctionCall_t607199437, ____name_0)); }
	inline XmlQualifiedName_t2760654312 * get__name_0() const { return ____name_0; }
	inline XmlQualifiedName_t2760654312 ** get_address_of__name_0() { return &____name_0; }
	inline void set__name_0(XmlQualifiedName_t2760654312 * value)
	{
		____name_0 = value;
		Il2CppCodeGenWriteBarrier((&____name_0), value);
	}

	inline static int32_t get_offset_of_resolvedName_1() { return static_cast<int32_t>(offsetof(ExprFunctionCall_t607199437, ___resolvedName_1)); }
	inline bool get_resolvedName_1() const { return ___resolvedName_1; }
	inline bool* get_address_of_resolvedName_1() { return &___resolvedName_1; }
	inline void set_resolvedName_1(bool value)
	{
		___resolvedName_1 = value;
	}

	inline static int32_t get_offset_of__args_2() { return static_cast<int32_t>(offsetof(ExprFunctionCall_t607199437, ____args_2)); }
	inline ArrayList_t2718874744 * get__args_2() const { return ____args_2; }
	inline ArrayList_t2718874744 ** get_address_of__args_2() { return &____args_2; }
	inline void set__args_2(ArrayList_t2718874744 * value)
	{
		____args_2 = value;
		Il2CppCodeGenWriteBarrier((&____args_2), value);
	}
};

struct ExprFunctionCall_t607199437_StaticFields
{
public:
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> System.Xml.XPath.ExprFunctionCall::<>f__switch$map41
	Dictionary_2_t2736202052 * ___U3CU3Ef__switchU24map41_3;

public:
	inline static int32_t get_offset_of_U3CU3Ef__switchU24map41_3() { return static_cast<int32_t>(offsetof(ExprFunctionCall_t607199437_StaticFields, ___U3CU3Ef__switchU24map41_3)); }
	inline Dictionary_2_t2736202052 * get_U3CU3Ef__switchU24map41_3() const { return ___U3CU3Ef__switchU24map41_3; }
	inline Dictionary_2_t2736202052 ** get_address_of_U3CU3Ef__switchU24map41_3() { return &___U3CU3Ef__switchU24map41_3; }
	inline void set_U3CU3Ef__switchU24map41_3(Dictionary_2_t2736202052 * value)
	{
		___U3CU3Ef__switchU24map41_3 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__switchU24map41_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EXPRFUNCTIONCALL_T607199437_H
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
#ifndef GUID_T_H
#define GUID_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Guid
struct  Guid_t 
{
public:
	// System.Int32 System.Guid::_a
	int32_t ____a_0;
	// System.Int16 System.Guid::_b
	int16_t ____b_1;
	// System.Int16 System.Guid::_c
	int16_t ____c_2;
	// System.Byte System.Guid::_d
	uint8_t ____d_3;
	// System.Byte System.Guid::_e
	uint8_t ____e_4;
	// System.Byte System.Guid::_f
	uint8_t ____f_5;
	// System.Byte System.Guid::_g
	uint8_t ____g_6;
	// System.Byte System.Guid::_h
	uint8_t ____h_7;
	// System.Byte System.Guid::_i
	uint8_t ____i_8;
	// System.Byte System.Guid::_j
	uint8_t ____j_9;
	// System.Byte System.Guid::_k
	uint8_t ____k_10;

public:
	inline static int32_t get_offset_of__a_0() { return static_cast<int32_t>(offsetof(Guid_t, ____a_0)); }
	inline int32_t get__a_0() const { return ____a_0; }
	inline int32_t* get_address_of__a_0() { return &____a_0; }
	inline void set__a_0(int32_t value)
	{
		____a_0 = value;
	}

	inline static int32_t get_offset_of__b_1() { return static_cast<int32_t>(offsetof(Guid_t, ____b_1)); }
	inline int16_t get__b_1() const { return ____b_1; }
	inline int16_t* get_address_of__b_1() { return &____b_1; }
	inline void set__b_1(int16_t value)
	{
		____b_1 = value;
	}

	inline static int32_t get_offset_of__c_2() { return static_cast<int32_t>(offsetof(Guid_t, ____c_2)); }
	inline int16_t get__c_2() const { return ____c_2; }
	inline int16_t* get_address_of__c_2() { return &____c_2; }
	inline void set__c_2(int16_t value)
	{
		____c_2 = value;
	}

	inline static int32_t get_offset_of__d_3() { return static_cast<int32_t>(offsetof(Guid_t, ____d_3)); }
	inline uint8_t get__d_3() const { return ____d_3; }
	inline uint8_t* get_address_of__d_3() { return &____d_3; }
	inline void set__d_3(uint8_t value)
	{
		____d_3 = value;
	}

	inline static int32_t get_offset_of__e_4() { return static_cast<int32_t>(offsetof(Guid_t, ____e_4)); }
	inline uint8_t get__e_4() const { return ____e_4; }
	inline uint8_t* get_address_of__e_4() { return &____e_4; }
	inline void set__e_4(uint8_t value)
	{
		____e_4 = value;
	}

	inline static int32_t get_offset_of__f_5() { return static_cast<int32_t>(offsetof(Guid_t, ____f_5)); }
	inline uint8_t get__f_5() const { return ____f_5; }
	inline uint8_t* get_address_of__f_5() { return &____f_5; }
	inline void set__f_5(uint8_t value)
	{
		____f_5 = value;
	}

	inline static int32_t get_offset_of__g_6() { return static_cast<int32_t>(offsetof(Guid_t, ____g_6)); }
	inline uint8_t get__g_6() const { return ____g_6; }
	inline uint8_t* get_address_of__g_6() { return &____g_6; }
	inline void set__g_6(uint8_t value)
	{
		____g_6 = value;
	}

	inline static int32_t get_offset_of__h_7() { return static_cast<int32_t>(offsetof(Guid_t, ____h_7)); }
	inline uint8_t get__h_7() const { return ____h_7; }
	inline uint8_t* get_address_of__h_7() { return &____h_7; }
	inline void set__h_7(uint8_t value)
	{
		____h_7 = value;
	}

	inline static int32_t get_offset_of__i_8() { return static_cast<int32_t>(offsetof(Guid_t, ____i_8)); }
	inline uint8_t get__i_8() const { return ____i_8; }
	inline uint8_t* get_address_of__i_8() { return &____i_8; }
	inline void set__i_8(uint8_t value)
	{
		____i_8 = value;
	}

	inline static int32_t get_offset_of__j_9() { return static_cast<int32_t>(offsetof(Guid_t, ____j_9)); }
	inline uint8_t get__j_9() const { return ____j_9; }
	inline uint8_t* get_address_of__j_9() { return &____j_9; }
	inline void set__j_9(uint8_t value)
	{
		____j_9 = value;
	}

	inline static int32_t get_offset_of__k_10() { return static_cast<int32_t>(offsetof(Guid_t, ____k_10)); }
	inline uint8_t get__k_10() const { return ____k_10; }
	inline uint8_t* get_address_of__k_10() { return &____k_10; }
	inline void set__k_10(uint8_t value)
	{
		____k_10 = value;
	}
};

struct Guid_t_StaticFields
{
public:
	// System.Guid System.Guid::Empty
	Guid_t  ___Empty_11;
	// System.Object System.Guid::_rngAccess
	RuntimeObject * ____rngAccess_12;
	// System.Security.Cryptography.RandomNumberGenerator System.Guid::_rng
	RandomNumberGenerator_t386037858 * ____rng_13;

public:
	inline static int32_t get_offset_of_Empty_11() { return static_cast<int32_t>(offsetof(Guid_t_StaticFields, ___Empty_11)); }
	inline Guid_t  get_Empty_11() const { return ___Empty_11; }
	inline Guid_t * get_address_of_Empty_11() { return &___Empty_11; }
	inline void set_Empty_11(Guid_t  value)
	{
		___Empty_11 = value;
	}

	inline static int32_t get_offset_of__rngAccess_12() { return static_cast<int32_t>(offsetof(Guid_t_StaticFields, ____rngAccess_12)); }
	inline RuntimeObject * get__rngAccess_12() const { return ____rngAccess_12; }
	inline RuntimeObject ** get_address_of__rngAccess_12() { return &____rngAccess_12; }
	inline void set__rngAccess_12(RuntimeObject * value)
	{
		____rngAccess_12 = value;
		Il2CppCodeGenWriteBarrier((&____rngAccess_12), value);
	}

	inline static int32_t get_offset_of__rng_13() { return static_cast<int32_t>(offsetof(Guid_t_StaticFields, ____rng_13)); }
	inline RandomNumberGenerator_t386037858 * get__rng_13() const { return ____rng_13; }
	inline RandomNumberGenerator_t386037858 ** get_address_of__rng_13() { return &____rng_13; }
	inline void set__rng_13(RandomNumberGenerator_t386037858 * value)
	{
		____rng_13 = value;
		Il2CppCodeGenWriteBarrier((&____rng_13), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GUID_T_H
#ifndef XMLANYELEMENTATTRIBUTE_T4038919363_H
#define XMLANYELEMENTATTRIBUTE_T4038919363_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.Serialization.XmlAnyElementAttribute
struct  XmlAnyElementAttribute_t4038919363  : public Attribute_t861562559
{
public:
	// System.Int32 System.Xml.Serialization.XmlAnyElementAttribute::order
	int32_t ___order_0;

public:
	inline static int32_t get_offset_of_order_0() { return static_cast<int32_t>(offsetof(XmlAnyElementAttribute_t4038919363, ___order_0)); }
	inline int32_t get_order_0() const { return ___order_0; }
	inline int32_t* get_address_of_order_0() { return &___order_0; }
	inline void set_order_0(int32_t value)
	{
		___order_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // XMLANYELEMENTATTRIBUTE_T4038919363_H
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
#ifndef XMLNAMESPACEDECLARATIONSATTRIBUTE_T966425202_H
#define XMLNAMESPACEDECLARATIONSATTRIBUTE_T966425202_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.Serialization.XmlNamespaceDeclarationsAttribute
struct  XmlNamespaceDeclarationsAttribute_t966425202  : public Attribute_t861562559
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // XMLNAMESPACEDECLARATIONSATTRIBUTE_T966425202_H
#ifndef XMLIGNOREATTRIBUTE_T1428424057_H
#define XMLIGNOREATTRIBUTE_T1428424057_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.Serialization.XmlIgnoreAttribute
struct  XmlIgnoreAttribute_t1428424057  : public Attribute_t861562559
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // XMLIGNOREATTRIBUTE_T1428424057_H
#ifndef XMLENUMATTRIBUTE_T106705320_H
#define XMLENUMATTRIBUTE_T106705320_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.Serialization.XmlEnumAttribute
struct  XmlEnumAttribute_t106705320  : public Attribute_t861562559
{
public:
	// System.String System.Xml.Serialization.XmlEnumAttribute::name
	String_t* ___name_0;

public:
	inline static int32_t get_offset_of_name_0() { return static_cast<int32_t>(offsetof(XmlEnumAttribute_t106705320, ___name_0)); }
	inline String_t* get_name_0() const { return ___name_0; }
	inline String_t** get_address_of_name_0() { return &___name_0; }
	inline void set_name_0(String_t* value)
	{
		___name_0 = value;
		Il2CppCodeGenWriteBarrier((&___name_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // XMLENUMATTRIBUTE_T106705320_H
#ifndef XMLELEMENTATTRIBUTE_T17472343_H
#define XMLELEMENTATTRIBUTE_T17472343_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.Serialization.XmlElementAttribute
struct  XmlElementAttribute_t17472343  : public Attribute_t861562559
{
public:
	// System.String System.Xml.Serialization.XmlElementAttribute::elementName
	String_t* ___elementName_0;
	// System.Type System.Xml.Serialization.XmlElementAttribute::type
	Type_t * ___type_1;
	// System.Int32 System.Xml.Serialization.XmlElementAttribute::order
	int32_t ___order_2;

public:
	inline static int32_t get_offset_of_elementName_0() { return static_cast<int32_t>(offsetof(XmlElementAttribute_t17472343, ___elementName_0)); }
	inline String_t* get_elementName_0() const { return ___elementName_0; }
	inline String_t** get_address_of_elementName_0() { return &___elementName_0; }
	inline void set_elementName_0(String_t* value)
	{
		___elementName_0 = value;
		Il2CppCodeGenWriteBarrier((&___elementName_0), value);
	}

	inline static int32_t get_offset_of_type_1() { return static_cast<int32_t>(offsetof(XmlElementAttribute_t17472343, ___type_1)); }
	inline Type_t * get_type_1() const { return ___type_1; }
	inline Type_t ** get_address_of_type_1() { return &___type_1; }
	inline void set_type_1(Type_t * value)
	{
		___type_1 = value;
		Il2CppCodeGenWriteBarrier((&___type_1), value);
	}

	inline static int32_t get_offset_of_order_2() { return static_cast<int32_t>(offsetof(XmlElementAttribute_t17472343, ___order_2)); }
	inline int32_t get_order_2() const { return ___order_2; }
	inline int32_t* get_address_of_order_2() { return &___order_2; }
	inline void set_order_2(int32_t value)
	{
		___order_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // XMLELEMENTATTRIBUTE_T17472343_H
#ifndef XMLATTRIBUTEATTRIBUTE_T2511360870_H
#define XMLATTRIBUTEATTRIBUTE_T2511360870_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.Serialization.XmlAttributeAttribute
struct  XmlAttributeAttribute_t2511360870  : public Attribute_t861562559
{
public:
	// System.String System.Xml.Serialization.XmlAttributeAttribute::attributeName
	String_t* ___attributeName_0;
	// System.String System.Xml.Serialization.XmlAttributeAttribute::dataType
	String_t* ___dataType_1;

public:
	inline static int32_t get_offset_of_attributeName_0() { return static_cast<int32_t>(offsetof(XmlAttributeAttribute_t2511360870, ___attributeName_0)); }
	inline String_t* get_attributeName_0() const { return ___attributeName_0; }
	inline String_t** get_address_of_attributeName_0() { return &___attributeName_0; }
	inline void set_attributeName_0(String_t* value)
	{
		___attributeName_0 = value;
		Il2CppCodeGenWriteBarrier((&___attributeName_0), value);
	}

	inline static int32_t get_offset_of_dataType_1() { return static_cast<int32_t>(offsetof(XmlAttributeAttribute_t2511360870, ___dataType_1)); }
	inline String_t* get_dataType_1() const { return ___dataType_1; }
	inline String_t** get_address_of_dataType_1() { return &___dataType_1; }
	inline void set_dataType_1(String_t* value)
	{
		___dataType_1 = value;
		Il2CppCodeGenWriteBarrier((&___dataType_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // XMLATTRIBUTEATTRIBUTE_T2511360870_H
#ifndef XMLTEXTATTRIBUTE_T499390083_H
#define XMLTEXTATTRIBUTE_T499390083_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.Serialization.XmlTextAttribute
struct  XmlTextAttribute_t499390083  : public Attribute_t861562559
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // XMLTEXTATTRIBUTE_T499390083_H
#ifndef XMLANYATTRIBUTEATTRIBUTE_T1449326428_H
#define XMLANYATTRIBUTEATTRIBUTE_T1449326428_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.Serialization.XmlAnyAttributeAttribute
struct  XmlAnyAttributeAttribute_t1449326428  : public Attribute_t861562559
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // XMLANYATTRIBUTEATTRIBUTE_T1449326428_H
#ifndef XMLROOTATTRIBUTE_T2306097217_H
#define XMLROOTATTRIBUTE_T2306097217_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.Serialization.XmlRootAttribute
struct  XmlRootAttribute_t2306097217  : public Attribute_t861562559
{
public:
	// System.String System.Xml.Serialization.XmlRootAttribute::elementName
	String_t* ___elementName_0;
	// System.Boolean System.Xml.Serialization.XmlRootAttribute::isNullable
	bool ___isNullable_1;
	// System.String System.Xml.Serialization.XmlRootAttribute::ns
	String_t* ___ns_2;

public:
	inline static int32_t get_offset_of_elementName_0() { return static_cast<int32_t>(offsetof(XmlRootAttribute_t2306097217, ___elementName_0)); }
	inline String_t* get_elementName_0() const { return ___elementName_0; }
	inline String_t** get_address_of_elementName_0() { return &___elementName_0; }
	inline void set_elementName_0(String_t* value)
	{
		___elementName_0 = value;
		Il2CppCodeGenWriteBarrier((&___elementName_0), value);
	}

	inline static int32_t get_offset_of_isNullable_1() { return static_cast<int32_t>(offsetof(XmlRootAttribute_t2306097217, ___isNullable_1)); }
	inline bool get_isNullable_1() const { return ___isNullable_1; }
	inline bool* get_address_of_isNullable_1() { return &___isNullable_1; }
	inline void set_isNullable_1(bool value)
	{
		___isNullable_1 = value;
	}

	inline static int32_t get_offset_of_ns_2() { return static_cast<int32_t>(offsetof(XmlRootAttribute_t2306097217, ___ns_2)); }
	inline String_t* get_ns_2() const { return ___ns_2; }
	inline String_t** get_address_of_ns_2() { return &___ns_2; }
	inline void set_ns_2(String_t* value)
	{
		___ns_2 = value;
		Il2CppCodeGenWriteBarrier((&___ns_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // XMLROOTATTRIBUTE_T2306097217_H
#ifndef XMLTYPECODE_T2623622950_H
#define XMLTYPECODE_T2623622950_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.Schema.XmlTypeCode
struct  XmlTypeCode_t2623622950 
{
public:
	// System.Int32 System.Xml.Schema.XmlTypeCode::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(XmlTypeCode_t2623622950, ___value___1)); }
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
#endif // XMLTYPECODE_T2623622950_H
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
#ifndef XMLSCHEMAOBJECT_T1315720168_H
#define XMLSCHEMAOBJECT_T1315720168_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.Schema.XmlSchemaObject
struct  XmlSchemaObject_t1315720168  : public RuntimeObject
{
public:
	// System.Int32 System.Xml.Schema.XmlSchemaObject::lineNumber
	int32_t ___lineNumber_0;
	// System.Int32 System.Xml.Schema.XmlSchemaObject::linePosition
	int32_t ___linePosition_1;
	// System.String System.Xml.Schema.XmlSchemaObject::sourceUri
	String_t* ___sourceUri_2;
	// System.Xml.Serialization.XmlSerializerNamespaces System.Xml.Schema.XmlSchemaObject::namespaces
	XmlSerializerNamespaces_t2702737953 * ___namespaces_3;
	// System.Collections.ArrayList System.Xml.Schema.XmlSchemaObject::unhandledAttributeList
	ArrayList_t2718874744 * ___unhandledAttributeList_4;
	// System.Boolean System.Xml.Schema.XmlSchemaObject::isCompiled
	bool ___isCompiled_5;
	// System.Int32 System.Xml.Schema.XmlSchemaObject::errorCount
	int32_t ___errorCount_6;
	// System.Guid System.Xml.Schema.XmlSchemaObject::CompilationId
	Guid_t  ___CompilationId_7;
	// System.Guid System.Xml.Schema.XmlSchemaObject::ValidationId
	Guid_t  ___ValidationId_8;
	// System.Boolean System.Xml.Schema.XmlSchemaObject::isRedefineChild
	bool ___isRedefineChild_9;
	// System.Boolean System.Xml.Schema.XmlSchemaObject::isRedefinedComponent
	bool ___isRedefinedComponent_10;
	// System.Xml.Schema.XmlSchemaObject System.Xml.Schema.XmlSchemaObject::redefinedObject
	XmlSchemaObject_t1315720168 * ___redefinedObject_11;
	// System.Xml.Schema.XmlSchemaObject System.Xml.Schema.XmlSchemaObject::parent
	XmlSchemaObject_t1315720168 * ___parent_12;

public:
	inline static int32_t get_offset_of_lineNumber_0() { return static_cast<int32_t>(offsetof(XmlSchemaObject_t1315720168, ___lineNumber_0)); }
	inline int32_t get_lineNumber_0() const { return ___lineNumber_0; }
	inline int32_t* get_address_of_lineNumber_0() { return &___lineNumber_0; }
	inline void set_lineNumber_0(int32_t value)
	{
		___lineNumber_0 = value;
	}

	inline static int32_t get_offset_of_linePosition_1() { return static_cast<int32_t>(offsetof(XmlSchemaObject_t1315720168, ___linePosition_1)); }
	inline int32_t get_linePosition_1() const { return ___linePosition_1; }
	inline int32_t* get_address_of_linePosition_1() { return &___linePosition_1; }
	inline void set_linePosition_1(int32_t value)
	{
		___linePosition_1 = value;
	}

	inline static int32_t get_offset_of_sourceUri_2() { return static_cast<int32_t>(offsetof(XmlSchemaObject_t1315720168, ___sourceUri_2)); }
	inline String_t* get_sourceUri_2() const { return ___sourceUri_2; }
	inline String_t** get_address_of_sourceUri_2() { return &___sourceUri_2; }
	inline void set_sourceUri_2(String_t* value)
	{
		___sourceUri_2 = value;
		Il2CppCodeGenWriteBarrier((&___sourceUri_2), value);
	}

	inline static int32_t get_offset_of_namespaces_3() { return static_cast<int32_t>(offsetof(XmlSchemaObject_t1315720168, ___namespaces_3)); }
	inline XmlSerializerNamespaces_t2702737953 * get_namespaces_3() const { return ___namespaces_3; }
	inline XmlSerializerNamespaces_t2702737953 ** get_address_of_namespaces_3() { return &___namespaces_3; }
	inline void set_namespaces_3(XmlSerializerNamespaces_t2702737953 * value)
	{
		___namespaces_3 = value;
		Il2CppCodeGenWriteBarrier((&___namespaces_3), value);
	}

	inline static int32_t get_offset_of_unhandledAttributeList_4() { return static_cast<int32_t>(offsetof(XmlSchemaObject_t1315720168, ___unhandledAttributeList_4)); }
	inline ArrayList_t2718874744 * get_unhandledAttributeList_4() const { return ___unhandledAttributeList_4; }
	inline ArrayList_t2718874744 ** get_address_of_unhandledAttributeList_4() { return &___unhandledAttributeList_4; }
	inline void set_unhandledAttributeList_4(ArrayList_t2718874744 * value)
	{
		___unhandledAttributeList_4 = value;
		Il2CppCodeGenWriteBarrier((&___unhandledAttributeList_4), value);
	}

	inline static int32_t get_offset_of_isCompiled_5() { return static_cast<int32_t>(offsetof(XmlSchemaObject_t1315720168, ___isCompiled_5)); }
	inline bool get_isCompiled_5() const { return ___isCompiled_5; }
	inline bool* get_address_of_isCompiled_5() { return &___isCompiled_5; }
	inline void set_isCompiled_5(bool value)
	{
		___isCompiled_5 = value;
	}

	inline static int32_t get_offset_of_errorCount_6() { return static_cast<int32_t>(offsetof(XmlSchemaObject_t1315720168, ___errorCount_6)); }
	inline int32_t get_errorCount_6() const { return ___errorCount_6; }
	inline int32_t* get_address_of_errorCount_6() { return &___errorCount_6; }
	inline void set_errorCount_6(int32_t value)
	{
		___errorCount_6 = value;
	}

	inline static int32_t get_offset_of_CompilationId_7() { return static_cast<int32_t>(offsetof(XmlSchemaObject_t1315720168, ___CompilationId_7)); }
	inline Guid_t  get_CompilationId_7() const { return ___CompilationId_7; }
	inline Guid_t * get_address_of_CompilationId_7() { return &___CompilationId_7; }
	inline void set_CompilationId_7(Guid_t  value)
	{
		___CompilationId_7 = value;
	}

	inline static int32_t get_offset_of_ValidationId_8() { return static_cast<int32_t>(offsetof(XmlSchemaObject_t1315720168, ___ValidationId_8)); }
	inline Guid_t  get_ValidationId_8() const { return ___ValidationId_8; }
	inline Guid_t * get_address_of_ValidationId_8() { return &___ValidationId_8; }
	inline void set_ValidationId_8(Guid_t  value)
	{
		___ValidationId_8 = value;
	}

	inline static int32_t get_offset_of_isRedefineChild_9() { return static_cast<int32_t>(offsetof(XmlSchemaObject_t1315720168, ___isRedefineChild_9)); }
	inline bool get_isRedefineChild_9() const { return ___isRedefineChild_9; }
	inline bool* get_address_of_isRedefineChild_9() { return &___isRedefineChild_9; }
	inline void set_isRedefineChild_9(bool value)
	{
		___isRedefineChild_9 = value;
	}

	inline static int32_t get_offset_of_isRedefinedComponent_10() { return static_cast<int32_t>(offsetof(XmlSchemaObject_t1315720168, ___isRedefinedComponent_10)); }
	inline bool get_isRedefinedComponent_10() const { return ___isRedefinedComponent_10; }
	inline bool* get_address_of_isRedefinedComponent_10() { return &___isRedefinedComponent_10; }
	inline void set_isRedefinedComponent_10(bool value)
	{
		___isRedefinedComponent_10 = value;
	}

	inline static int32_t get_offset_of_redefinedObject_11() { return static_cast<int32_t>(offsetof(XmlSchemaObject_t1315720168, ___redefinedObject_11)); }
	inline XmlSchemaObject_t1315720168 * get_redefinedObject_11() const { return ___redefinedObject_11; }
	inline XmlSchemaObject_t1315720168 ** get_address_of_redefinedObject_11() { return &___redefinedObject_11; }
	inline void set_redefinedObject_11(XmlSchemaObject_t1315720168 * value)
	{
		___redefinedObject_11 = value;
		Il2CppCodeGenWriteBarrier((&___redefinedObject_11), value);
	}

	inline static int32_t get_offset_of_parent_12() { return static_cast<int32_t>(offsetof(XmlSchemaObject_t1315720168, ___parent_12)); }
	inline XmlSchemaObject_t1315720168 * get_parent_12() const { return ___parent_12; }
	inline XmlSchemaObject_t1315720168 ** get_address_of_parent_12() { return &___parent_12; }
	inline void set_parent_12(XmlSchemaObject_t1315720168 * value)
	{
		___parent_12 = value;
		Il2CppCodeGenWriteBarrier((&___parent_12), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // XMLSCHEMAOBJECT_T1315720168_H
#ifndef FACET_T1501039206_H
#define FACET_T1501039206_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.Schema.XmlSchemaFacet/Facet
struct  Facet_t1501039206 
{
public:
	// System.Int32 System.Xml.Schema.XmlSchemaFacet/Facet::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(Facet_t1501039206, ___value___1)); }
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
#endif // FACET_T1501039206_H
#ifndef XMLSCHEMAVALIDATIONFLAGS_T877176585_H
#define XMLSCHEMAVALIDATIONFLAGS_T877176585_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.Schema.XmlSchemaValidationFlags
struct  XmlSchemaValidationFlags_t877176585 
{
public:
	// System.Int32 System.Xml.Schema.XmlSchemaValidationFlags::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(XmlSchemaValidationFlags_t877176585, ___value___1)); }
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
#endif // XMLSCHEMAVALIDATIONFLAGS_T877176585_H
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
#ifndef EXPRFILTER_T2551926938_H
#define EXPRFILTER_T2551926938_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.XPath.ExprFilter
struct  ExprFilter_t2551926938  : public NodeSet_t3272593155
{
public:
	// System.Xml.XPath.Expression System.Xml.XPath.ExprFilter::expr
	Expression_t1452783009 * ___expr_0;
	// System.Xml.XPath.Expression System.Xml.XPath.ExprFilter::pred
	Expression_t1452783009 * ___pred_1;

public:
	inline static int32_t get_offset_of_expr_0() { return static_cast<int32_t>(offsetof(ExprFilter_t2551926938, ___expr_0)); }
	inline Expression_t1452783009 * get_expr_0() const { return ___expr_0; }
	inline Expression_t1452783009 ** get_address_of_expr_0() { return &___expr_0; }
	inline void set_expr_0(Expression_t1452783009 * value)
	{
		___expr_0 = value;
		Il2CppCodeGenWriteBarrier((&___expr_0), value);
	}

	inline static int32_t get_offset_of_pred_1() { return static_cast<int32_t>(offsetof(ExprFilter_t2551926938, ___pred_1)); }
	inline Expression_t1452783009 * get_pred_1() const { return ___pred_1; }
	inline Expression_t1452783009 ** get_address_of_pred_1() { return &___pred_1; }
	inline void set_pred_1(Expression_t1452783009 * value)
	{
		___pred_1 = value;
		Il2CppCodeGenWriteBarrier((&___pred_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EXPRFILTER_T2551926938_H
#ifndef XMLSCHEMAVALIDITY_T3794542157_H
#define XMLSCHEMAVALIDITY_T3794542157_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.Schema.XmlSchemaValidity
struct  XmlSchemaValidity_t3794542157 
{
public:
	// System.Int32 System.Xml.Schema.XmlSchemaValidity::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(XmlSchemaValidity_t3794542157, ___value___1)); }
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
#endif // XMLSCHEMAVALIDITY_T3794542157_H
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
#ifndef XMLSEVERITYTYPE_T1894651412_H
#define XMLSEVERITYTYPE_T1894651412_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.Schema.XmlSeverityType
struct  XmlSeverityType_t1894651412 
{
public:
	// System.Int32 System.Xml.Schema.XmlSeverityType::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(XmlSeverityType_t1894651412, ___value___1)); }
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
#endif // XMLSEVERITYTYPE_T1894651412_H
#ifndef XMLSCHEMAEXCEPTION_T3511258692_H
#define XMLSCHEMAEXCEPTION_T3511258692_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.Schema.XmlSchemaException
struct  XmlSchemaException_t3511258692  : public SystemException_t176217640
{
public:
	// System.Boolean System.Xml.Schema.XmlSchemaException::hasLineInfo
	bool ___hasLineInfo_11;
	// System.Int32 System.Xml.Schema.XmlSchemaException::lineNumber
	int32_t ___lineNumber_12;
	// System.Int32 System.Xml.Schema.XmlSchemaException::linePosition
	int32_t ___linePosition_13;
	// System.Xml.Schema.XmlSchemaObject System.Xml.Schema.XmlSchemaException::sourceObj
	XmlSchemaObject_t1315720168 * ___sourceObj_14;
	// System.String System.Xml.Schema.XmlSchemaException::sourceUri
	String_t* ___sourceUri_15;

public:
	inline static int32_t get_offset_of_hasLineInfo_11() { return static_cast<int32_t>(offsetof(XmlSchemaException_t3511258692, ___hasLineInfo_11)); }
	inline bool get_hasLineInfo_11() const { return ___hasLineInfo_11; }
	inline bool* get_address_of_hasLineInfo_11() { return &___hasLineInfo_11; }
	inline void set_hasLineInfo_11(bool value)
	{
		___hasLineInfo_11 = value;
	}

	inline static int32_t get_offset_of_lineNumber_12() { return static_cast<int32_t>(offsetof(XmlSchemaException_t3511258692, ___lineNumber_12)); }
	inline int32_t get_lineNumber_12() const { return ___lineNumber_12; }
	inline int32_t* get_address_of_lineNumber_12() { return &___lineNumber_12; }
	inline void set_lineNumber_12(int32_t value)
	{
		___lineNumber_12 = value;
	}

	inline static int32_t get_offset_of_linePosition_13() { return static_cast<int32_t>(offsetof(XmlSchemaException_t3511258692, ___linePosition_13)); }
	inline int32_t get_linePosition_13() const { return ___linePosition_13; }
	inline int32_t* get_address_of_linePosition_13() { return &___linePosition_13; }
	inline void set_linePosition_13(int32_t value)
	{
		___linePosition_13 = value;
	}

	inline static int32_t get_offset_of_sourceObj_14() { return static_cast<int32_t>(offsetof(XmlSchemaException_t3511258692, ___sourceObj_14)); }
	inline XmlSchemaObject_t1315720168 * get_sourceObj_14() const { return ___sourceObj_14; }
	inline XmlSchemaObject_t1315720168 ** get_address_of_sourceObj_14() { return &___sourceObj_14; }
	inline void set_sourceObj_14(XmlSchemaObject_t1315720168 * value)
	{
		___sourceObj_14 = value;
		Il2CppCodeGenWriteBarrier((&___sourceObj_14), value);
	}

	inline static int32_t get_offset_of_sourceUri_15() { return static_cast<int32_t>(offsetof(XmlSchemaException_t3511258692, ___sourceUri_15)); }
	inline String_t* get_sourceUri_15() const { return ___sourceUri_15; }
	inline String_t** get_address_of_sourceUri_15() { return &___sourceUri_15; }
	inline void set_sourceUri_15(String_t* value)
	{
		___sourceUri_15 = value;
		Il2CppCodeGenWriteBarrier((&___sourceUri_15), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // XMLSCHEMAEXCEPTION_T3511258692_H
#ifndef SCHEMATYPES_T1741406581_H
#define SCHEMATYPES_T1741406581_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.Serialization.SchemaTypes
struct  SchemaTypes_t1741406581 
{
public:
	// System.Int32 System.Xml.Serialization.SchemaTypes::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(SchemaTypes_t1741406581, ___value___1)); }
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
#endif // SCHEMATYPES_T1741406581_H
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
#ifndef XMLSCHEMADERIVATIONMETHOD_T1774354337_H
#define XMLSCHEMADERIVATIONMETHOD_T1774354337_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.Schema.XmlSchemaDerivationMethod
struct  XmlSchemaDerivationMethod_t1774354337 
{
public:
	// System.Int32 System.Xml.Schema.XmlSchemaDerivationMethod::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(XmlSchemaDerivationMethod_t1774354337, ___value___1)); }
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
#endif // XMLSCHEMADERIVATIONMETHOD_T1774354337_H
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
#ifndef XMLSCHEMAANNOTATED_T2603549639_H
#define XMLSCHEMAANNOTATED_T2603549639_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.Schema.XmlSchemaAnnotated
struct  XmlSchemaAnnotated_t2603549639  : public XmlSchemaObject_t1315720168
{
public:
	// System.Xml.Schema.XmlSchemaAnnotation System.Xml.Schema.XmlSchemaAnnotated::annotation
	XmlSchemaAnnotation_t2553753397 * ___annotation_13;
	// System.String System.Xml.Schema.XmlSchemaAnnotated::id
	String_t* ___id_14;
	// System.Xml.XmlAttribute[] System.Xml.Schema.XmlSchemaAnnotated::unhandledAttributes
	XmlAttributeU5BU5D_t1490365106* ___unhandledAttributes_15;

public:
	inline static int32_t get_offset_of_annotation_13() { return static_cast<int32_t>(offsetof(XmlSchemaAnnotated_t2603549639, ___annotation_13)); }
	inline XmlSchemaAnnotation_t2553753397 * get_annotation_13() const { return ___annotation_13; }
	inline XmlSchemaAnnotation_t2553753397 ** get_address_of_annotation_13() { return &___annotation_13; }
	inline void set_annotation_13(XmlSchemaAnnotation_t2553753397 * value)
	{
		___annotation_13 = value;
		Il2CppCodeGenWriteBarrier((&___annotation_13), value);
	}

	inline static int32_t get_offset_of_id_14() { return static_cast<int32_t>(offsetof(XmlSchemaAnnotated_t2603549639, ___id_14)); }
	inline String_t* get_id_14() const { return ___id_14; }
	inline String_t** get_address_of_id_14() { return &___id_14; }
	inline void set_id_14(String_t* value)
	{
		___id_14 = value;
		Il2CppCodeGenWriteBarrier((&___id_14), value);
	}

	inline static int32_t get_offset_of_unhandledAttributes_15() { return static_cast<int32_t>(offsetof(XmlSchemaAnnotated_t2603549639, ___unhandledAttributes_15)); }
	inline XmlAttributeU5BU5D_t1490365106* get_unhandledAttributes_15() const { return ___unhandledAttributes_15; }
	inline XmlAttributeU5BU5D_t1490365106** get_address_of_unhandledAttributes_15() { return &___unhandledAttributes_15; }
	inline void set_unhandledAttributes_15(XmlAttributeU5BU5D_t1490365106* value)
	{
		___unhandledAttributes_15 = value;
		Il2CppCodeGenWriteBarrier((&___unhandledAttributes_15), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // XMLSCHEMAANNOTATED_T2603549639_H
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
#ifndef XMLSCHEMAVALIDATIONEXCEPTION_T816160496_H
#define XMLSCHEMAVALIDATIONEXCEPTION_T816160496_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.Schema.XmlSchemaValidationException
struct  XmlSchemaValidationException_t816160496  : public XmlSchemaException_t3511258692
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // XMLSCHEMAVALIDATIONEXCEPTION_T816160496_H
#ifndef TYPEDATA_T476999220_H
#define TYPEDATA_T476999220_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.Serialization.TypeData
struct  TypeData_t476999220  : public RuntimeObject
{
public:
	// System.Type System.Xml.Serialization.TypeData::type
	Type_t * ___type_0;
	// System.String System.Xml.Serialization.TypeData::elementName
	String_t* ___elementName_1;
	// System.Xml.Serialization.SchemaTypes System.Xml.Serialization.TypeData::sType
	int32_t ___sType_2;
	// System.Type System.Xml.Serialization.TypeData::listItemType
	Type_t * ___listItemType_3;
	// System.String System.Xml.Serialization.TypeData::typeName
	String_t* ___typeName_4;
	// System.String System.Xml.Serialization.TypeData::fullTypeName
	String_t* ___fullTypeName_5;
	// System.Xml.Serialization.TypeData System.Xml.Serialization.TypeData::listItemTypeData
	TypeData_t476999220 * ___listItemTypeData_6;
	// System.Xml.Serialization.TypeData System.Xml.Serialization.TypeData::mappedType
	TypeData_t476999220 * ___mappedType_7;
	// System.Xml.Schema.XmlSchemaPatternFacet System.Xml.Serialization.TypeData::facet
	XmlSchemaPatternFacet_t3316004401 * ___facet_8;
	// System.Boolean System.Xml.Serialization.TypeData::hasPublicConstructor
	bool ___hasPublicConstructor_9;
	// System.Boolean System.Xml.Serialization.TypeData::nullableOverride
	bool ___nullableOverride_10;

public:
	inline static int32_t get_offset_of_type_0() { return static_cast<int32_t>(offsetof(TypeData_t476999220, ___type_0)); }
	inline Type_t * get_type_0() const { return ___type_0; }
	inline Type_t ** get_address_of_type_0() { return &___type_0; }
	inline void set_type_0(Type_t * value)
	{
		___type_0 = value;
		Il2CppCodeGenWriteBarrier((&___type_0), value);
	}

	inline static int32_t get_offset_of_elementName_1() { return static_cast<int32_t>(offsetof(TypeData_t476999220, ___elementName_1)); }
	inline String_t* get_elementName_1() const { return ___elementName_1; }
	inline String_t** get_address_of_elementName_1() { return &___elementName_1; }
	inline void set_elementName_1(String_t* value)
	{
		___elementName_1 = value;
		Il2CppCodeGenWriteBarrier((&___elementName_1), value);
	}

	inline static int32_t get_offset_of_sType_2() { return static_cast<int32_t>(offsetof(TypeData_t476999220, ___sType_2)); }
	inline int32_t get_sType_2() const { return ___sType_2; }
	inline int32_t* get_address_of_sType_2() { return &___sType_2; }
	inline void set_sType_2(int32_t value)
	{
		___sType_2 = value;
	}

	inline static int32_t get_offset_of_listItemType_3() { return static_cast<int32_t>(offsetof(TypeData_t476999220, ___listItemType_3)); }
	inline Type_t * get_listItemType_3() const { return ___listItemType_3; }
	inline Type_t ** get_address_of_listItemType_3() { return &___listItemType_3; }
	inline void set_listItemType_3(Type_t * value)
	{
		___listItemType_3 = value;
		Il2CppCodeGenWriteBarrier((&___listItemType_3), value);
	}

	inline static int32_t get_offset_of_typeName_4() { return static_cast<int32_t>(offsetof(TypeData_t476999220, ___typeName_4)); }
	inline String_t* get_typeName_4() const { return ___typeName_4; }
	inline String_t** get_address_of_typeName_4() { return &___typeName_4; }
	inline void set_typeName_4(String_t* value)
	{
		___typeName_4 = value;
		Il2CppCodeGenWriteBarrier((&___typeName_4), value);
	}

	inline static int32_t get_offset_of_fullTypeName_5() { return static_cast<int32_t>(offsetof(TypeData_t476999220, ___fullTypeName_5)); }
	inline String_t* get_fullTypeName_5() const { return ___fullTypeName_5; }
	inline String_t** get_address_of_fullTypeName_5() { return &___fullTypeName_5; }
	inline void set_fullTypeName_5(String_t* value)
	{
		___fullTypeName_5 = value;
		Il2CppCodeGenWriteBarrier((&___fullTypeName_5), value);
	}

	inline static int32_t get_offset_of_listItemTypeData_6() { return static_cast<int32_t>(offsetof(TypeData_t476999220, ___listItemTypeData_6)); }
	inline TypeData_t476999220 * get_listItemTypeData_6() const { return ___listItemTypeData_6; }
	inline TypeData_t476999220 ** get_address_of_listItemTypeData_6() { return &___listItemTypeData_6; }
	inline void set_listItemTypeData_6(TypeData_t476999220 * value)
	{
		___listItemTypeData_6 = value;
		Il2CppCodeGenWriteBarrier((&___listItemTypeData_6), value);
	}

	inline static int32_t get_offset_of_mappedType_7() { return static_cast<int32_t>(offsetof(TypeData_t476999220, ___mappedType_7)); }
	inline TypeData_t476999220 * get_mappedType_7() const { return ___mappedType_7; }
	inline TypeData_t476999220 ** get_address_of_mappedType_7() { return &___mappedType_7; }
	inline void set_mappedType_7(TypeData_t476999220 * value)
	{
		___mappedType_7 = value;
		Il2CppCodeGenWriteBarrier((&___mappedType_7), value);
	}

	inline static int32_t get_offset_of_facet_8() { return static_cast<int32_t>(offsetof(TypeData_t476999220, ___facet_8)); }
	inline XmlSchemaPatternFacet_t3316004401 * get_facet_8() const { return ___facet_8; }
	inline XmlSchemaPatternFacet_t3316004401 ** get_address_of_facet_8() { return &___facet_8; }
	inline void set_facet_8(XmlSchemaPatternFacet_t3316004401 * value)
	{
		___facet_8 = value;
		Il2CppCodeGenWriteBarrier((&___facet_8), value);
	}

	inline static int32_t get_offset_of_hasPublicConstructor_9() { return static_cast<int32_t>(offsetof(TypeData_t476999220, ___hasPublicConstructor_9)); }
	inline bool get_hasPublicConstructor_9() const { return ___hasPublicConstructor_9; }
	inline bool* get_address_of_hasPublicConstructor_9() { return &___hasPublicConstructor_9; }
	inline void set_hasPublicConstructor_9(bool value)
	{
		___hasPublicConstructor_9 = value;
	}

	inline static int32_t get_offset_of_nullableOverride_10() { return static_cast<int32_t>(offsetof(TypeData_t476999220, ___nullableOverride_10)); }
	inline bool get_nullableOverride_10() const { return ___nullableOverride_10; }
	inline bool* get_address_of_nullableOverride_10() { return &___nullableOverride_10; }
	inline void set_nullableOverride_10(bool value)
	{
		___nullableOverride_10 = value;
	}
};

struct TypeData_t476999220_StaticFields
{
public:
	// System.String[] System.Xml.Serialization.TypeData::keywords
	StringU5BU5D_t1281789340* ___keywords_11;

public:
	inline static int32_t get_offset_of_keywords_11() { return static_cast<int32_t>(offsetof(TypeData_t476999220_StaticFields, ___keywords_11)); }
	inline StringU5BU5D_t1281789340* get_keywords_11() const { return ___keywords_11; }
	inline StringU5BU5D_t1281789340** get_address_of_keywords_11() { return &___keywords_11; }
	inline void set_keywords_11(StringU5BU5D_t1281789340* value)
	{
		___keywords_11 = value;
		Il2CppCodeGenWriteBarrier((&___keywords_11), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TYPEDATA_T476999220_H
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
#ifndef EXPRAND_T348538276_H
#define EXPRAND_T348538276_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.XPath.ExprAND
struct  ExprAND_t348538276  : public ExprBoolean_t3855188593
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EXPRAND_T348538276_H
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
#ifndef XMLSCHEMAUTIL_T956145399_H
#define XMLSCHEMAUTIL_T956145399_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.Schema.XmlSchemaUtil
struct  XmlSchemaUtil_t956145399  : public RuntimeObject
{
public:

public:
};

struct XmlSchemaUtil_t956145399_StaticFields
{
public:
	// System.Xml.Schema.XmlSchemaDerivationMethod System.Xml.Schema.XmlSchemaUtil::FinalAllowed
	int32_t ___FinalAllowed_0;
	// System.Xml.Schema.XmlSchemaDerivationMethod System.Xml.Schema.XmlSchemaUtil::ElementBlockAllowed
	int32_t ___ElementBlockAllowed_1;
	// System.Xml.Schema.XmlSchemaDerivationMethod System.Xml.Schema.XmlSchemaUtil::ComplexTypeBlockAllowed
	int32_t ___ComplexTypeBlockAllowed_2;
	// System.Boolean System.Xml.Schema.XmlSchemaUtil::StrictMsCompliant
	bool ___StrictMsCompliant_3;
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> System.Xml.Schema.XmlSchemaUtil::<>f__switch$map36
	Dictionary_2_t2736202052 * ___U3CU3Ef__switchU24map36_4;
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> System.Xml.Schema.XmlSchemaUtil::<>f__switch$map37
	Dictionary_2_t2736202052 * ___U3CU3Ef__switchU24map37_5;
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> System.Xml.Schema.XmlSchemaUtil::<>f__switch$map38
	Dictionary_2_t2736202052 * ___U3CU3Ef__switchU24map38_6;
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> System.Xml.Schema.XmlSchemaUtil::<>f__switch$map39
	Dictionary_2_t2736202052 * ___U3CU3Ef__switchU24map39_7;
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> System.Xml.Schema.XmlSchemaUtil::<>f__switch$map3A
	Dictionary_2_t2736202052 * ___U3CU3Ef__switchU24map3A_8;
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> System.Xml.Schema.XmlSchemaUtil::<>f__switch$map3B
	Dictionary_2_t2736202052 * ___U3CU3Ef__switchU24map3B_9;

public:
	inline static int32_t get_offset_of_FinalAllowed_0() { return static_cast<int32_t>(offsetof(XmlSchemaUtil_t956145399_StaticFields, ___FinalAllowed_0)); }
	inline int32_t get_FinalAllowed_0() const { return ___FinalAllowed_0; }
	inline int32_t* get_address_of_FinalAllowed_0() { return &___FinalAllowed_0; }
	inline void set_FinalAllowed_0(int32_t value)
	{
		___FinalAllowed_0 = value;
	}

	inline static int32_t get_offset_of_ElementBlockAllowed_1() { return static_cast<int32_t>(offsetof(XmlSchemaUtil_t956145399_StaticFields, ___ElementBlockAllowed_1)); }
	inline int32_t get_ElementBlockAllowed_1() const { return ___ElementBlockAllowed_1; }
	inline int32_t* get_address_of_ElementBlockAllowed_1() { return &___ElementBlockAllowed_1; }
	inline void set_ElementBlockAllowed_1(int32_t value)
	{
		___ElementBlockAllowed_1 = value;
	}

	inline static int32_t get_offset_of_ComplexTypeBlockAllowed_2() { return static_cast<int32_t>(offsetof(XmlSchemaUtil_t956145399_StaticFields, ___ComplexTypeBlockAllowed_2)); }
	inline int32_t get_ComplexTypeBlockAllowed_2() const { return ___ComplexTypeBlockAllowed_2; }
	inline int32_t* get_address_of_ComplexTypeBlockAllowed_2() { return &___ComplexTypeBlockAllowed_2; }
	inline void set_ComplexTypeBlockAllowed_2(int32_t value)
	{
		___ComplexTypeBlockAllowed_2 = value;
	}

	inline static int32_t get_offset_of_StrictMsCompliant_3() { return static_cast<int32_t>(offsetof(XmlSchemaUtil_t956145399_StaticFields, ___StrictMsCompliant_3)); }
	inline bool get_StrictMsCompliant_3() const { return ___StrictMsCompliant_3; }
	inline bool* get_address_of_StrictMsCompliant_3() { return &___StrictMsCompliant_3; }
	inline void set_StrictMsCompliant_3(bool value)
	{
		___StrictMsCompliant_3 = value;
	}

	inline static int32_t get_offset_of_U3CU3Ef__switchU24map36_4() { return static_cast<int32_t>(offsetof(XmlSchemaUtil_t956145399_StaticFields, ___U3CU3Ef__switchU24map36_4)); }
	inline Dictionary_2_t2736202052 * get_U3CU3Ef__switchU24map36_4() const { return ___U3CU3Ef__switchU24map36_4; }
	inline Dictionary_2_t2736202052 ** get_address_of_U3CU3Ef__switchU24map36_4() { return &___U3CU3Ef__switchU24map36_4; }
	inline void set_U3CU3Ef__switchU24map36_4(Dictionary_2_t2736202052 * value)
	{
		___U3CU3Ef__switchU24map36_4 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__switchU24map36_4), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__switchU24map37_5() { return static_cast<int32_t>(offsetof(XmlSchemaUtil_t956145399_StaticFields, ___U3CU3Ef__switchU24map37_5)); }
	inline Dictionary_2_t2736202052 * get_U3CU3Ef__switchU24map37_5() const { return ___U3CU3Ef__switchU24map37_5; }
	inline Dictionary_2_t2736202052 ** get_address_of_U3CU3Ef__switchU24map37_5() { return &___U3CU3Ef__switchU24map37_5; }
	inline void set_U3CU3Ef__switchU24map37_5(Dictionary_2_t2736202052 * value)
	{
		___U3CU3Ef__switchU24map37_5 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__switchU24map37_5), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__switchU24map38_6() { return static_cast<int32_t>(offsetof(XmlSchemaUtil_t956145399_StaticFields, ___U3CU3Ef__switchU24map38_6)); }
	inline Dictionary_2_t2736202052 * get_U3CU3Ef__switchU24map38_6() const { return ___U3CU3Ef__switchU24map38_6; }
	inline Dictionary_2_t2736202052 ** get_address_of_U3CU3Ef__switchU24map38_6() { return &___U3CU3Ef__switchU24map38_6; }
	inline void set_U3CU3Ef__switchU24map38_6(Dictionary_2_t2736202052 * value)
	{
		___U3CU3Ef__switchU24map38_6 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__switchU24map38_6), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__switchU24map39_7() { return static_cast<int32_t>(offsetof(XmlSchemaUtil_t956145399_StaticFields, ___U3CU3Ef__switchU24map39_7)); }
	inline Dictionary_2_t2736202052 * get_U3CU3Ef__switchU24map39_7() const { return ___U3CU3Ef__switchU24map39_7; }
	inline Dictionary_2_t2736202052 ** get_address_of_U3CU3Ef__switchU24map39_7() { return &___U3CU3Ef__switchU24map39_7; }
	inline void set_U3CU3Ef__switchU24map39_7(Dictionary_2_t2736202052 * value)
	{
		___U3CU3Ef__switchU24map39_7 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__switchU24map39_7), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__switchU24map3A_8() { return static_cast<int32_t>(offsetof(XmlSchemaUtil_t956145399_StaticFields, ___U3CU3Ef__switchU24map3A_8)); }
	inline Dictionary_2_t2736202052 * get_U3CU3Ef__switchU24map3A_8() const { return ___U3CU3Ef__switchU24map3A_8; }
	inline Dictionary_2_t2736202052 ** get_address_of_U3CU3Ef__switchU24map3A_8() { return &___U3CU3Ef__switchU24map3A_8; }
	inline void set_U3CU3Ef__switchU24map3A_8(Dictionary_2_t2736202052 * value)
	{
		___U3CU3Ef__switchU24map3A_8 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__switchU24map3A_8), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__switchU24map3B_9() { return static_cast<int32_t>(offsetof(XmlSchemaUtil_t956145399_StaticFields, ___U3CU3Ef__switchU24map3B_9)); }
	inline Dictionary_2_t2736202052 * get_U3CU3Ef__switchU24map3B_9() const { return ___U3CU3Ef__switchU24map3B_9; }
	inline Dictionary_2_t2736202052 ** get_address_of_U3CU3Ef__switchU24map3B_9() { return &___U3CU3Ef__switchU24map3B_9; }
	inline void set_U3CU3Ef__switchU24map3B_9(Dictionary_2_t2736202052 * value)
	{
		___U3CU3Ef__switchU24map3B_9 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__switchU24map3B_9), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // XMLSCHEMAUTIL_T956145399_H
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
#ifndef EXPRDIV_T1961659563_H
#define EXPRDIV_T1961659563_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.XPath.ExprDIV
struct  ExprDIV_t1961659563  : public ExprNumeric_t370757872
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EXPRDIV_T1961659563_H
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
#ifndef EXPREQ_T1453891107_H
#define EXPREQ_T1453891107_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.XPath.ExprEQ
struct  ExprEQ_t1453891107  : public EqualityExpr_t1646148531
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EXPREQ_T1453891107_H
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
#ifndef XMLSCHEMAXPATH_T3156455507_H
#define XMLSCHEMAXPATH_T3156455507_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.Schema.XmlSchemaXPath
struct  XmlSchemaXPath_t3156455507  : public XmlSchemaAnnotated_t2603549639
{
public:
	// System.String System.Xml.Schema.XmlSchemaXPath::xpath
	String_t* ___xpath_16;
	// System.Xml.XmlNamespaceManager System.Xml.Schema.XmlSchemaXPath::nsmgr
	XmlNamespaceManager_t418790500 * ___nsmgr_17;
	// System.Boolean System.Xml.Schema.XmlSchemaXPath::isSelector
	bool ___isSelector_18;
	// Mono.Xml.Schema.XsdIdentityPath[] System.Xml.Schema.XmlSchemaXPath::compiledExpression
	XsdIdentityPathU5BU5D_t2466178853* ___compiledExpression_19;
	// Mono.Xml.Schema.XsdIdentityPath System.Xml.Schema.XmlSchemaXPath::currentPath
	XsdIdentityPath_t991900844 * ___currentPath_20;

public:
	inline static int32_t get_offset_of_xpath_16() { return static_cast<int32_t>(offsetof(XmlSchemaXPath_t3156455507, ___xpath_16)); }
	inline String_t* get_xpath_16() const { return ___xpath_16; }
	inline String_t** get_address_of_xpath_16() { return &___xpath_16; }
	inline void set_xpath_16(String_t* value)
	{
		___xpath_16 = value;
		Il2CppCodeGenWriteBarrier((&___xpath_16), value);
	}

	inline static int32_t get_offset_of_nsmgr_17() { return static_cast<int32_t>(offsetof(XmlSchemaXPath_t3156455507, ___nsmgr_17)); }
	inline XmlNamespaceManager_t418790500 * get_nsmgr_17() const { return ___nsmgr_17; }
	inline XmlNamespaceManager_t418790500 ** get_address_of_nsmgr_17() { return &___nsmgr_17; }
	inline void set_nsmgr_17(XmlNamespaceManager_t418790500 * value)
	{
		___nsmgr_17 = value;
		Il2CppCodeGenWriteBarrier((&___nsmgr_17), value);
	}

	inline static int32_t get_offset_of_isSelector_18() { return static_cast<int32_t>(offsetof(XmlSchemaXPath_t3156455507, ___isSelector_18)); }
	inline bool get_isSelector_18() const { return ___isSelector_18; }
	inline bool* get_address_of_isSelector_18() { return &___isSelector_18; }
	inline void set_isSelector_18(bool value)
	{
		___isSelector_18 = value;
	}

	inline static int32_t get_offset_of_compiledExpression_19() { return static_cast<int32_t>(offsetof(XmlSchemaXPath_t3156455507, ___compiledExpression_19)); }
	inline XsdIdentityPathU5BU5D_t2466178853* get_compiledExpression_19() const { return ___compiledExpression_19; }
	inline XsdIdentityPathU5BU5D_t2466178853** get_address_of_compiledExpression_19() { return &___compiledExpression_19; }
	inline void set_compiledExpression_19(XsdIdentityPathU5BU5D_t2466178853* value)
	{
		___compiledExpression_19 = value;
		Il2CppCodeGenWriteBarrier((&___compiledExpression_19), value);
	}

	inline static int32_t get_offset_of_currentPath_20() { return static_cast<int32_t>(offsetof(XmlSchemaXPath_t3156455507, ___currentPath_20)); }
	inline XsdIdentityPath_t991900844 * get_currentPath_20() const { return ___currentPath_20; }
	inline XsdIdentityPath_t991900844 ** get_address_of_currentPath_20() { return &___currentPath_20; }
	inline void set_currentPath_20(XsdIdentityPath_t991900844 * value)
	{
		___currentPath_20 = value;
		Il2CppCodeGenWriteBarrier((&___currentPath_20), value);
	}
};

struct XmlSchemaXPath_t3156455507_StaticFields
{
public:
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> System.Xml.Schema.XmlSchemaXPath::<>f__switch$map3C
	Dictionary_2_t2736202052 * ___U3CU3Ef__switchU24map3C_21;

public:
	inline static int32_t get_offset_of_U3CU3Ef__switchU24map3C_21() { return static_cast<int32_t>(offsetof(XmlSchemaXPath_t3156455507_StaticFields, ___U3CU3Ef__switchU24map3C_21)); }
	inline Dictionary_2_t2736202052 * get_U3CU3Ef__switchU24map3C_21() const { return ___U3CU3Ef__switchU24map3C_21; }
	inline Dictionary_2_t2736202052 ** get_address_of_U3CU3Ef__switchU24map3C_21() { return &___U3CU3Ef__switchU24map3C_21; }
	inline void set_U3CU3Ef__switchU24map3C_21(Dictionary_2_t2736202052 * value)
	{
		___U3CU3Ef__switchU24map3C_21 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__switchU24map3C_21), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // XMLSCHEMAXPATH_T3156455507_H
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
#ifndef XMLSCHEMAFACET_T1906017689_H
#define XMLSCHEMAFACET_T1906017689_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.Schema.XmlSchemaFacet
struct  XmlSchemaFacet_t1906017689  : public XmlSchemaAnnotated_t2603549639
{
public:
	// System.Boolean System.Xml.Schema.XmlSchemaFacet::isFixed
	bool ___isFixed_17;
	// System.String System.Xml.Schema.XmlSchemaFacet::val
	String_t* ___val_18;

public:
	inline static int32_t get_offset_of_isFixed_17() { return static_cast<int32_t>(offsetof(XmlSchemaFacet_t1906017689, ___isFixed_17)); }
	inline bool get_isFixed_17() const { return ___isFixed_17; }
	inline bool* get_address_of_isFixed_17() { return &___isFixed_17; }
	inline void set_isFixed_17(bool value)
	{
		___isFixed_17 = value;
	}

	inline static int32_t get_offset_of_val_18() { return static_cast<int32_t>(offsetof(XmlSchemaFacet_t1906017689, ___val_18)); }
	inline String_t* get_val_18() const { return ___val_18; }
	inline String_t** get_address_of_val_18() { return &___val_18; }
	inline void set_val_18(String_t* value)
	{
		___val_18 = value;
		Il2CppCodeGenWriteBarrier((&___val_18), value);
	}
};

struct XmlSchemaFacet_t1906017689_StaticFields
{
public:
	// System.Xml.Schema.XmlSchemaFacet/Facet System.Xml.Schema.XmlSchemaFacet::AllFacets
	int32_t ___AllFacets_16;

public:
	inline static int32_t get_offset_of_AllFacets_16() { return static_cast<int32_t>(offsetof(XmlSchemaFacet_t1906017689_StaticFields, ___AllFacets_16)); }
	inline int32_t get_AllFacets_16() const { return ___AllFacets_16; }
	inline int32_t* get_address_of_AllFacets_16() { return &___AllFacets_16; }
	inline void set_AllFacets_16(int32_t value)
	{
		___AllFacets_16 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // XMLSCHEMAFACET_T1906017689_H
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
#ifndef XMLSCHEMAWHITESPACEFACET_T4158372164_H
#define XMLSCHEMAWHITESPACEFACET_T4158372164_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.Schema.XmlSchemaWhiteSpaceFacet
struct  XmlSchemaWhiteSpaceFacet_t4158372164  : public XmlSchemaFacet_t1906017689
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // XMLSCHEMAWHITESPACEFACET_T4158372164_H





#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2000 = { sizeof (XmlSchemaUtil_t956145399), -1, sizeof(XmlSchemaUtil_t956145399_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable2000[10] = 
{
	XmlSchemaUtil_t956145399_StaticFields::get_offset_of_FinalAllowed_0(),
	XmlSchemaUtil_t956145399_StaticFields::get_offset_of_ElementBlockAllowed_1(),
	XmlSchemaUtil_t956145399_StaticFields::get_offset_of_ComplexTypeBlockAllowed_2(),
	XmlSchemaUtil_t956145399_StaticFields::get_offset_of_StrictMsCompliant_3(),
	XmlSchemaUtil_t956145399_StaticFields::get_offset_of_U3CU3Ef__switchU24map36_4(),
	XmlSchemaUtil_t956145399_StaticFields::get_offset_of_U3CU3Ef__switchU24map37_5(),
	XmlSchemaUtil_t956145399_StaticFields::get_offset_of_U3CU3Ef__switchU24map38_6(),
	XmlSchemaUtil_t956145399_StaticFields::get_offset_of_U3CU3Ef__switchU24map39_7(),
	XmlSchemaUtil_t956145399_StaticFields::get_offset_of_U3CU3Ef__switchU24map3A_8(),
	XmlSchemaUtil_t956145399_StaticFields::get_offset_of_U3CU3Ef__switchU24map3B_9(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2001 = { sizeof (XmlSchemaValidationException_t816160496), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2002 = { sizeof (XmlSchemaValidationFlags_t877176585)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable2002[7] = 
{
	XmlSchemaValidationFlags_t877176585::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2003 = { sizeof (XmlSchemaValidity_t3794542157)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable2003[4] = 
{
	XmlSchemaValidity_t3794542157::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2004 = { sizeof (XmlSchemaWhiteSpaceFacet_t4158372164), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2005 = { sizeof (XmlSchemaXPath_t3156455507), -1, sizeof(XmlSchemaXPath_t3156455507_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable2005[6] = 
{
	XmlSchemaXPath_t3156455507::get_offset_of_xpath_16(),
	XmlSchemaXPath_t3156455507::get_offset_of_nsmgr_17(),
	XmlSchemaXPath_t3156455507::get_offset_of_isSelector_18(),
	XmlSchemaXPath_t3156455507::get_offset_of_compiledExpression_19(),
	XmlSchemaXPath_t3156455507::get_offset_of_currentPath_20(),
	XmlSchemaXPath_t3156455507_StaticFields::get_offset_of_U3CU3Ef__switchU24map3C_21(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2006 = { sizeof (XmlSeverityType_t1894651412)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable2006[3] = 
{
	XmlSeverityType_t1894651412::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2007 = { sizeof (XmlTypeCode_t2623622950)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable2007[56] = 
{
	XmlTypeCode_t2623622950::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2008 = { sizeof (CodeIdentifier_t2202687290), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2009 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2010 = { sizeof (SchemaTypes_t1741406581)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable2010[9] = 
{
	SchemaTypes_t1741406581::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2011 = { sizeof (TypeData_t476999220), -1, sizeof(TypeData_t476999220_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable2011[12] = 
{
	TypeData_t476999220::get_offset_of_type_0(),
	TypeData_t476999220::get_offset_of_elementName_1(),
	TypeData_t476999220::get_offset_of_sType_2(),
	TypeData_t476999220::get_offset_of_listItemType_3(),
	TypeData_t476999220::get_offset_of_typeName_4(),
	TypeData_t476999220::get_offset_of_fullTypeName_5(),
	TypeData_t476999220::get_offset_of_listItemTypeData_6(),
	TypeData_t476999220::get_offset_of_mappedType_7(),
	TypeData_t476999220::get_offset_of_facet_8(),
	TypeData_t476999220::get_offset_of_hasPublicConstructor_9(),
	TypeData_t476999220::get_offset_of_nullableOverride_10(),
	TypeData_t476999220_StaticFields::get_offset_of_keywords_11(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2012 = { sizeof (TypeTranslator_t3446962748), -1, sizeof(TypeTranslator_t3446962748_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable2012[4] = 
{
	TypeTranslator_t3446962748_StaticFields::get_offset_of_nameCache_0(),
	TypeTranslator_t3446962748_StaticFields::get_offset_of_primitiveTypes_1(),
	TypeTranslator_t3446962748_StaticFields::get_offset_of_primitiveArrayTypes_2(),
	TypeTranslator_t3446962748_StaticFields::get_offset_of_nullableTypes_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2013 = { sizeof (XmlAnyAttributeAttribute_t1449326428), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2014 = { sizeof (XmlAnyElementAttribute_t4038919363), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2014[1] = 
{
	XmlAnyElementAttribute_t4038919363::get_offset_of_order_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2015 = { sizeof (XmlAttributeAttribute_t2511360870), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2015[2] = 
{
	XmlAttributeAttribute_t2511360870::get_offset_of_attributeName_0(),
	XmlAttributeAttribute_t2511360870::get_offset_of_dataType_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2016 = { sizeof (XmlElementAttribute_t17472343), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2016[3] = 
{
	XmlElementAttribute_t17472343::get_offset_of_elementName_0(),
	XmlElementAttribute_t17472343::get_offset_of_type_1(),
	XmlElementAttribute_t17472343::get_offset_of_order_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2017 = { sizeof (XmlEnumAttribute_t106705320), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2017[1] = 
{
	XmlEnumAttribute_t106705320::get_offset_of_name_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2018 = { sizeof (XmlIgnoreAttribute_t1428424057), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2019 = { sizeof (XmlNamespaceDeclarationsAttribute_t966425202), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2020 = { sizeof (XmlRootAttribute_t2306097217), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2020[3] = 
{
	XmlRootAttribute_t2306097217::get_offset_of_elementName_0(),
	XmlRootAttribute_t2306097217::get_offset_of_isNullable_1(),
	XmlRootAttribute_t2306097217::get_offset_of_ns_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2021 = { sizeof (XmlSerializerNamespaces_t2702737953), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2021[1] = 
{
	XmlSerializerNamespaces_t2702737953::get_offset_of_namespaces_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2022 = { sizeof (XmlTextAttribute_t499390083), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2023 = { sizeof (XPathFunctions_t1481462947), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2024 = { sizeof (XPathFunction_t857746608), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2025 = { sizeof (XPathFunctionLast_t241688620), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2026 = { sizeof (XPathFunctionPosition_t1996792158), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2027 = { sizeof (XPathFunctionCount_t4174407007), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2027[1] = 
{
	XPathFunctionCount_t4174407007::get_offset_of_arg0_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2028 = { sizeof (XPathFunctionId_t1670301333), -1, sizeof(XPathFunctionId_t1670301333_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable2028[2] = 
{
	XPathFunctionId_t1670301333::get_offset_of_arg0_0(),
	XPathFunctionId_t1670301333_StaticFields::get_offset_of_rgchWhitespace_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2029 = { sizeof (XPathFunctionLocalName_t1807446049), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2029[1] = 
{
	XPathFunctionLocalName_t1807446049::get_offset_of_arg0_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2030 = { sizeof (XPathFunctionNamespaceUri_t4077891083), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2030[1] = 
{
	XPathFunctionNamespaceUri_t4077891083::get_offset_of_arg0_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2031 = { sizeof (XPathFunctionName_t1405602168), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2031[1] = 
{
	XPathFunctionName_t1405602168::get_offset_of_arg0_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2032 = { sizeof (XPathFunctionString_t3820712894), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2032[1] = 
{
	XPathFunctionString_t3820712894::get_offset_of_arg0_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2033 = { sizeof (XPathFunctionConcat_t3351639595), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2033[1] = 
{
	XPathFunctionConcat_t3351639595::get_offset_of_rgs_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2034 = { sizeof (XPathFunctionStartsWith_t3734288208), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2034[2] = 
{
	XPathFunctionStartsWith_t3734288208::get_offset_of_arg0_0(),
	XPathFunctionStartsWith_t3734288208::get_offset_of_arg1_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2035 = { sizeof (XPathFunctionContains_t678583606), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2035[2] = 
{
	XPathFunctionContains_t678583606::get_offset_of_arg0_0(),
	XPathFunctionContains_t678583606::get_offset_of_arg1_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2036 = { sizeof (XPathFunctionSubstringBefore_t3299707364), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2036[2] = 
{
	XPathFunctionSubstringBefore_t3299707364::get_offset_of_arg0_0(),
	XPathFunctionSubstringBefore_t3299707364::get_offset_of_arg1_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2037 = { sizeof (XPathFunctionSubstringAfter_t2254953802), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2037[2] = 
{
	XPathFunctionSubstringAfter_t2254953802::get_offset_of_arg0_0(),
	XPathFunctionSubstringAfter_t2254953802::get_offset_of_arg1_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2038 = { sizeof (XPathFunctionSubstring_t3677332116), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2038[3] = 
{
	XPathFunctionSubstring_t3677332116::get_offset_of_arg0_0(),
	XPathFunctionSubstring_t3677332116::get_offset_of_arg1_1(),
	XPathFunctionSubstring_t3677332116::get_offset_of_arg2_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2039 = { sizeof (XPathFunctionStringLength_t1686187666), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2039[1] = 
{
	XPathFunctionStringLength_t1686187666::get_offset_of_arg0_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2040 = { sizeof (XPathFunctionNormalizeSpace_t379159227), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2040[1] = 
{
	XPathFunctionNormalizeSpace_t379159227::get_offset_of_arg0_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2041 = { sizeof (XPathFunctionTranslate_t1071508611), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2041[3] = 
{
	XPathFunctionTranslate_t1071508611::get_offset_of_arg0_0(),
	XPathFunctionTranslate_t1071508611::get_offset_of_arg1_1(),
	XPathFunctionTranslate_t1071508611::get_offset_of_arg2_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2042 = { sizeof (XPathBooleanFunction_t57991257), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2043 = { sizeof (XPathFunctionBoolean_t2892373420), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2043[1] = 
{
	XPathFunctionBoolean_t2892373420::get_offset_of_arg0_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2044 = { sizeof (XPathFunctionNot_t3025979743), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2044[1] = 
{
	XPathFunctionNot_t3025979743::get_offset_of_arg0_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2045 = { sizeof (XPathFunctionTrue_t3806785954), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2046 = { sizeof (XPathFunctionFalse_t1021066162), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2047 = { sizeof (XPathFunctionLang_t242671679), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2047[1] = 
{
	XPathFunctionLang_t242671679::get_offset_of_arg0_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2048 = { sizeof (XPathNumericFunction_t307051317), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2049 = { sizeof (XPathFunctionNumber_t699684043), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2049[1] = 
{
	XPathFunctionNumber_t699684043::get_offset_of_arg0_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2050 = { sizeof (XPathFunctionSum_t2229418177), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2050[1] = 
{
	XPathFunctionSum_t2229418177::get_offset_of_arg0_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2051 = { sizeof (XPathFunctionFloor_t3617095014), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2051[1] = 
{
	XPathFunctionFloor_t3617095014::get_offset_of_arg0_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2052 = { sizeof (XPathFunctionCeil_t4176839285), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2052[1] = 
{
	XPathFunctionCeil_t4176839285::get_offset_of_arg0_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2053 = { sizeof (XPathFunctionRound_t2668931994), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2053[1] = 
{
	XPathFunctionRound_t2668931994::get_offset_of_arg0_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2054 = { sizeof (CompiledExpression_t4018285681), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2054[4] = 
{
	CompiledExpression_t4018285681::get_offset_of__nsm_0(),
	CompiledExpression_t4018285681::get_offset_of__expr_1(),
	CompiledExpression_t4018285681::get_offset_of__sorters_2(),
	CompiledExpression_t4018285681::get_offset_of_rawExpression_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2055 = { sizeof (XPathSortElement_t4237073177), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2055[2] = 
{
	XPathSortElement_t4237073177::get_offset_of_Navigator_0(),
	XPathSortElement_t4237073177::get_offset_of_Values_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2056 = { sizeof (XPathSorters_t698127628), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2056[1] = 
{
	XPathSorters_t698127628::get_offset_of__rgSorters_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2057 = { sizeof (XPathSorter_t36376808), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2057[3] = 
{
	XPathSorter_t36376808::get_offset_of__expr_0(),
	XPathSorter_t36376808::get_offset_of__cmp_1(),
	XPathSorter_t36376808::get_offset_of__type_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2058 = { sizeof (Expression_t1452783009), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2059 = { sizeof (ExprBinary_t2069694888), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2059[2] = 
{
	ExprBinary_t2069694888::get_offset_of__left_0(),
	ExprBinary_t2069694888::get_offset_of__right_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2060 = { sizeof (ExprBoolean_t3855188593), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2061 = { sizeof (ExprOR_t3019581832), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2062 = { sizeof (ExprAND_t348538276), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2063 = { sizeof (EqualityExpr_t1646148531), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2063[1] = 
{
	EqualityExpr_t1646148531::get_offset_of_trueVal_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2064 = { sizeof (ExprEQ_t1453891107), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2065 = { sizeof (ExprNE_t4135261543), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2066 = { sizeof (RelationalExpr_t3307137467), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2067 = { sizeof (ExprGT_t1857306706), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2068 = { sizeof (ExprGE_t4135851367), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2069 = { sizeof (ExprLT_t1856585810), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2070 = { sizeof (ExprLE_t4135130471), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2071 = { sizeof (ExprNumeric_t370757872), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2072 = { sizeof (ExprPLUS_t1725353634), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2073 = { sizeof (ExprMINUS_t3125292145), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2074 = { sizeof (ExprMULT_t118778748), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2075 = { sizeof (ExprDIV_t1961659563), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2076 = { sizeof (ExprMOD_t1913835785), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2077 = { sizeof (ExprNEG_t381818215), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2077[1] = 
{
	ExprNEG_t381818215::get_offset_of__expr_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2078 = { sizeof (NodeSet_t3272593155), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2079 = { sizeof (ExprUNION_t1609753984), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2079[2] = 
{
	ExprUNION_t1609753984::get_offset_of_left_0(),
	ExprUNION_t1609753984::get_offset_of_right_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2080 = { sizeof (ExprSLASH_t1263914658), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2080[2] = 
{
	ExprSLASH_t1263914658::get_offset_of_left_0(),
	ExprSLASH_t1263914658::get_offset_of_right_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2081 = { sizeof (ExprSLASH2_t1762680492), -1, sizeof(ExprSLASH2_t1762680492_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable2081[3] = 
{
	ExprSLASH2_t1762680492::get_offset_of_left_0(),
	ExprSLASH2_t1762680492::get_offset_of_right_1(),
	ExprSLASH2_t1762680492_StaticFields::get_offset_of_DescendantOrSelfStar_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2082 = { sizeof (ExprRoot_t3091324302), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2083 = { sizeof (Axes_t1882171014)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable2083[14] = 
{
	Axes_t1882171014::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2084 = { sizeof (AxisSpecifier_t40435393), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2084[1] = 
{
	AxisSpecifier_t40435393::get_offset_of__axis_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2085 = { sizeof (NodeTest_t747859056), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2085[1] = 
{
	NodeTest_t747859056::get_offset_of__axis_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2086 = { sizeof (NodeTypeTest_t4287533341), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2086[2] = 
{
	NodeTypeTest_t4287533341::get_offset_of_type_1(),
	NodeTypeTest_t4287533341::get_offset_of__param_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2087 = { sizeof (NodeNameTest_t562814213), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2087[2] = 
{
	NodeNameTest_t562814213::get_offset_of__name_1(),
	NodeNameTest_t562814213::get_offset_of_resolvedName_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2088 = { sizeof (ExprFilter_t2551926938), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2088[2] = 
{
	ExprFilter_t2551926938::get_offset_of_expr_0(),
	ExprFilter_t2551926938::get_offset_of_pred_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2089 = { sizeof (ExprNumber_t3483239576), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2089[1] = 
{
	ExprNumber_t3483239576::get_offset_of__value_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2090 = { sizeof (ExprLiteral_t2264229068), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2090[1] = 
{
	ExprLiteral_t2264229068::get_offset_of__value_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2091 = { sizeof (ExprVariable_t1387751146), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2091[2] = 
{
	ExprVariable_t1387751146::get_offset_of__name_0(),
	ExprVariable_t1387751146::get_offset_of_resolvedName_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2092 = { sizeof (ExprParens_t795575662), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2092[1] = 
{
	ExprParens_t795575662::get_offset_of__expr_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2093 = { sizeof (FunctionArguments_t3573450773), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2093[2] = 
{
	FunctionArguments_t3573450773::get_offset_of__arg_0(),
	FunctionArguments_t3573450773::get_offset_of__tail_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2094 = { sizeof (ExprFunctionCall_t607199437), -1, sizeof(ExprFunctionCall_t607199437_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable2094[4] = 
{
	ExprFunctionCall_t607199437::get_offset_of__name_0(),
	ExprFunctionCall_t607199437::get_offset_of_resolvedName_1(),
	ExprFunctionCall_t607199437::get_offset_of__args_2(),
	ExprFunctionCall_t607199437_StaticFields::get_offset_of_U3CU3Ef__switchU24map41_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2095 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2096 = { sizeof (BaseIterator_t4168896842), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2096[2] = 
{
	BaseIterator_t4168896842::get_offset_of__nsm_1(),
	BaseIterator_t4168896842::get_offset_of_position_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2097 = { sizeof (WrapperIterator_t1258076988), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2097[1] = 
{
	WrapperIterator_t1258076988::get_offset_of_iter_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2098 = { sizeof (SimpleIterator_t809567201), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2098[3] = 
{
	SimpleIterator_t809567201::get_offset_of__nav_3(),
	SimpleIterator_t809567201::get_offset_of__current_4(),
	SimpleIterator_t809567201::get_offset_of_skipfirst_5(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2099 = { sizeof (SelfIterator_t907214), -1, 0, 0 };
#ifdef __clang__
#pragma clang diagnostic pop
#endif

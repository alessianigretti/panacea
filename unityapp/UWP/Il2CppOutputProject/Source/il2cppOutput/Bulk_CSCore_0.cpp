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

struct VirtActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
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

// CSCore.DSP.BiQuad
struct BiQuad_tC41F181D101D795D9651C9E5E9C90A20E3F329DC;
// CSCore.DSP.FftProvider
struct FftProvider_t27F66E9A2BE537D97DE6F5F1D1CBDCA5EFDB55BD;
// CSCore.DSP.HighpassFilter
struct HighpassFilter_tC7C2DE56E9FCB6198329F7F3A9F9AE8D8781824E;
// CSCore.DSP.LowpassFilter
struct LowpassFilter_tF7E0C1DEDFCAEE414F43C206256F4B11E0CA93D5;
// CSCore.Utils.Complex[]
struct ComplexU5BU5D_tD82CA72F1EC0EB01B6F91CA7883CDAAA321D8308;
// System.ArgumentException
struct ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1;
// System.ArgumentNullException
struct ArgumentNullException_t581DF992B1F3E0EC6EFB30CC5DC43519A79B27AD;
// System.ArgumentOutOfRangeException
struct ArgumentOutOfRangeException_t94D19DF918A54511AEDF4784C9A08741BAD1DEDA;
// System.Char[]
struct CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2;
// System.Collections.IDictionary
struct IDictionary_t1BD5C1546718A374EA8122FBD6C6EE45331E8CE7;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196;
// System.IntPtr[]
struct IntPtrU5BU5D_t4DC01DCB9A6DF6C9792A6513595D7A11E637DCDD;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770;
// System.Single[]
struct SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5;
// System.String
struct String_t;

extern RuntimeClass* ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1_il2cpp_TypeInfo_var;
extern RuntimeClass* ArgumentNullException_t581DF992B1F3E0EC6EFB30CC5DC43519A79B27AD_il2cpp_TypeInfo_var;
extern RuntimeClass* ArgumentOutOfRangeException_t94D19DF918A54511AEDF4784C9A08741BAD1DEDA_il2cpp_TypeInfo_var;
extern RuntimeClass* ComplexU5BU5D_tD82CA72F1EC0EB01B6F91CA7883CDAAA321D8308_il2cpp_TypeInfo_var;
extern RuntimeClass* Complex_t02AD1084BE99034B2267A3721BDD94453CAAB77C_il2cpp_TypeInfo_var;
extern RuntimeClass* Math_tFB388E53C7FDC6FCCF9A19ABF5A4E521FBD52E19_il2cpp_TypeInfo_var;
extern String_t* _stringLiteral22EA1C649C82946AA6E479E1FFD321E4A318B1B0;
extern String_t* _stringLiteral3536F72AC0EC1D785E357FED37A3E83C4BC651E2;
extern String_t* _stringLiteral433CDFECFBC5711BE2EE148BAA19038DE415879B;
extern String_t* _stringLiteral48A8832D141772A74406D384057505B010A15F3A;
extern String_t* _stringLiteral6A613FCDEE94233E3690028B3FB36B53BA6B5998;
extern String_t* _stringLiteral85FEC174D69448BBAA82569D0F7DA6A2E385517F;
extern String_t* _stringLiteralE184B8E3990F62621FF56EA3BFAF19E69FDA2374;
extern String_t* _stringLiteralEE9F38E186BA06F57B7B74D7E626B94E13CE2556;
extern String_t* _stringLiteralF32B67C7E26342AF42EFABC674D441DCA0A281C5;
extern String_t* _stringLiteralFAEFEAC24184D31D8340AB9059C59F7F8BFDFB36;
extern String_t* _stringLiteralFB2B350D8A7204988C23DC3DD8A2D8FECFAF11FB;
extern const RuntimeMethod* BiQuad__ctor_mEE93771F23F05F5D55D455F3847A464A608D638F_RuntimeMethod_var;
extern const RuntimeMethod* BiQuad_set_Frequency_m4797D8FCE4AE354CF100F195F921C1EAFD4DA48A_RuntimeMethod_var;
extern const RuntimeMethod* BiQuad_set_Q_m38798E4232AFF6974C364F54CD9868F10C0A503A_RuntimeMethod_var;
extern const RuntimeMethod* FftProvider_Add_m2E017302A6BA8DD79BD550A2AABD7CC8BA51867C_RuntimeMethod_var;
extern const RuntimeMethod* FftProvider_GetFftData_m89A6F5CF4C13EFA275663883AC352B2C001EDBD3_RuntimeMethod_var;
extern const RuntimeMethod* FftProvider_GetFftData_mC85D9A8CAC2DD6557E6A87462BDAD80433613EBC_RuntimeMethod_var;
extern const RuntimeMethod* FftProvider__ctor_m911E7B75B9B6FD7A687D84593B12F590581095A9_RuntimeMethod_var;
extern const uint32_t BiQuad__ctor_m33D9E2005DF3B1643404B60F7696AC4692E2F2BA_MetadataUsageId;
extern const uint32_t BiQuad__ctor_mEE93771F23F05F5D55D455F3847A464A608D638F_MetadataUsageId;
extern const uint32_t BiQuad_set_Frequency_m4797D8FCE4AE354CF100F195F921C1EAFD4DA48A_MetadataUsageId;
extern const uint32_t BiQuad_set_Q_m38798E4232AFF6974C364F54CD9868F10C0A503A_MetadataUsageId;
extern const uint32_t Complex_Equals_mAAC29EDDA5F5C16D0D416EEC7BA27A84ABEDD030_MetadataUsageId;
extern const uint32_t Complex__cctor_m71C91B4AEECDDF2F0458E38796E58D4031F08386_MetadataUsageId;
extern const uint32_t Complex_get_Value_m0F1C26CE88D34B658B5012023D33F18590C038B3_MetadataUsageId;
extern const uint32_t FastFourierTransformation_Fft_mFD9ED02CA9319E300F3910D25C98E259CE3D801B_MetadataUsageId;
extern const uint32_t FftProvider_Add_m2E017302A6BA8DD79BD550A2AABD7CC8BA51867C_MetadataUsageId;
extern const uint32_t FftProvider_GetFftData_m89A6F5CF4C13EFA275663883AC352B2C001EDBD3_MetadataUsageId;
extern const uint32_t FftProvider_GetFftData_mC85D9A8CAC2DD6557E6A87462BDAD80433613EBC_MetadataUsageId;
extern const uint32_t FftProvider__ctor_m911E7B75B9B6FD7A687D84593B12F590581095A9_MetadataUsageId;
extern const uint32_t HighpassFilter_CalculateBiQuadCoefficients_m6ED9C2180D5AD4A7BF110E137D7F247FBBCAA874_MetadataUsageId;
extern const uint32_t LowpassFilter_CalculateBiQuadCoefficients_mCCAEA785E891B8D0A6EF94C055418D4D63EDFC7D_MetadataUsageId;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct ComplexU5BU5D_tD82CA72F1EC0EB01B6F91CA7883CDAAA321D8308;
struct SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5;


#ifndef U3CMODULEU3E_T2B33C80B7C0C648F9B316CDC3F3C060C8641E6FB_H
#define U3CMODULEU3E_T2B33C80B7C0C648F9B316CDC3F3C060C8641E6FB_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct  U3CModuleU3E_t2B33C80B7C0C648F9B316CDC3F3C060C8641E6FB 
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CMODULEU3E_T2B33C80B7C0C648F9B316CDC3F3C060C8641E6FB_H
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
#ifndef BIQUAD_TC41F181D101D795D9651C9E5E9C90A20E3F329DC_H
#define BIQUAD_TC41F181D101D795D9651C9E5E9C90A20E3F329DC_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// CSCore.DSP.BiQuad
struct  BiQuad_tC41F181D101D795D9651C9E5E9C90A20E3F329DC  : public RuntimeObject
{
public:
	// System.Double CSCore.DSP.BiQuad::A0
	double ___A0_0;
	// System.Double CSCore.DSP.BiQuad::A1
	double ___A1_1;
	// System.Double CSCore.DSP.BiQuad::A2
	double ___A2_2;
	// System.Double CSCore.DSP.BiQuad::B1
	double ___B1_3;
	// System.Double CSCore.DSP.BiQuad::B2
	double ___B2_4;
	// System.Double CSCore.DSP.BiQuad::_q
	double ____q_5;
	// System.Double CSCore.DSP.BiQuad::_gainDB
	double ____gainDB_6;
	// System.Double CSCore.DSP.BiQuad::Z1
	double ___Z1_7;
	// System.Double CSCore.DSP.BiQuad::Z2
	double ___Z2_8;
	// System.Double CSCore.DSP.BiQuad::_frequency
	double ____frequency_9;
	// System.Int32 CSCore.DSP.BiQuad::<SampleRate>k__BackingField
	int32_t ___U3CSampleRateU3Ek__BackingField_10;

public:
	inline static int32_t get_offset_of_A0_0() { return static_cast<int32_t>(offsetof(BiQuad_tC41F181D101D795D9651C9E5E9C90A20E3F329DC, ___A0_0)); }
	inline double get_A0_0() const { return ___A0_0; }
	inline double* get_address_of_A0_0() { return &___A0_0; }
	inline void set_A0_0(double value)
	{
		___A0_0 = value;
	}

	inline static int32_t get_offset_of_A1_1() { return static_cast<int32_t>(offsetof(BiQuad_tC41F181D101D795D9651C9E5E9C90A20E3F329DC, ___A1_1)); }
	inline double get_A1_1() const { return ___A1_1; }
	inline double* get_address_of_A1_1() { return &___A1_1; }
	inline void set_A1_1(double value)
	{
		___A1_1 = value;
	}

	inline static int32_t get_offset_of_A2_2() { return static_cast<int32_t>(offsetof(BiQuad_tC41F181D101D795D9651C9E5E9C90A20E3F329DC, ___A2_2)); }
	inline double get_A2_2() const { return ___A2_2; }
	inline double* get_address_of_A2_2() { return &___A2_2; }
	inline void set_A2_2(double value)
	{
		___A2_2 = value;
	}

	inline static int32_t get_offset_of_B1_3() { return static_cast<int32_t>(offsetof(BiQuad_tC41F181D101D795D9651C9E5E9C90A20E3F329DC, ___B1_3)); }
	inline double get_B1_3() const { return ___B1_3; }
	inline double* get_address_of_B1_3() { return &___B1_3; }
	inline void set_B1_3(double value)
	{
		___B1_3 = value;
	}

	inline static int32_t get_offset_of_B2_4() { return static_cast<int32_t>(offsetof(BiQuad_tC41F181D101D795D9651C9E5E9C90A20E3F329DC, ___B2_4)); }
	inline double get_B2_4() const { return ___B2_4; }
	inline double* get_address_of_B2_4() { return &___B2_4; }
	inline void set_B2_4(double value)
	{
		___B2_4 = value;
	}

	inline static int32_t get_offset_of__q_5() { return static_cast<int32_t>(offsetof(BiQuad_tC41F181D101D795D9651C9E5E9C90A20E3F329DC, ____q_5)); }
	inline double get__q_5() const { return ____q_5; }
	inline double* get_address_of__q_5() { return &____q_5; }
	inline void set__q_5(double value)
	{
		____q_5 = value;
	}

	inline static int32_t get_offset_of__gainDB_6() { return static_cast<int32_t>(offsetof(BiQuad_tC41F181D101D795D9651C9E5E9C90A20E3F329DC, ____gainDB_6)); }
	inline double get__gainDB_6() const { return ____gainDB_6; }
	inline double* get_address_of__gainDB_6() { return &____gainDB_6; }
	inline void set__gainDB_6(double value)
	{
		____gainDB_6 = value;
	}

	inline static int32_t get_offset_of_Z1_7() { return static_cast<int32_t>(offsetof(BiQuad_tC41F181D101D795D9651C9E5E9C90A20E3F329DC, ___Z1_7)); }
	inline double get_Z1_7() const { return ___Z1_7; }
	inline double* get_address_of_Z1_7() { return &___Z1_7; }
	inline void set_Z1_7(double value)
	{
		___Z1_7 = value;
	}

	inline static int32_t get_offset_of_Z2_8() { return static_cast<int32_t>(offsetof(BiQuad_tC41F181D101D795D9651C9E5E9C90A20E3F329DC, ___Z2_8)); }
	inline double get_Z2_8() const { return ___Z2_8; }
	inline double* get_address_of_Z2_8() { return &___Z2_8; }
	inline void set_Z2_8(double value)
	{
		___Z2_8 = value;
	}

	inline static int32_t get_offset_of__frequency_9() { return static_cast<int32_t>(offsetof(BiQuad_tC41F181D101D795D9651C9E5E9C90A20E3F329DC, ____frequency_9)); }
	inline double get__frequency_9() const { return ____frequency_9; }
	inline double* get_address_of__frequency_9() { return &____frequency_9; }
	inline void set__frequency_9(double value)
	{
		____frequency_9 = value;
	}

	inline static int32_t get_offset_of_U3CSampleRateU3Ek__BackingField_10() { return static_cast<int32_t>(offsetof(BiQuad_tC41F181D101D795D9651C9E5E9C90A20E3F329DC, ___U3CSampleRateU3Ek__BackingField_10)); }
	inline int32_t get_U3CSampleRateU3Ek__BackingField_10() const { return ___U3CSampleRateU3Ek__BackingField_10; }
	inline int32_t* get_address_of_U3CSampleRateU3Ek__BackingField_10() { return &___U3CSampleRateU3Ek__BackingField_10; }
	inline void set_U3CSampleRateU3Ek__BackingField_10(int32_t value)
	{
		___U3CSampleRateU3Ek__BackingField_10 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BIQUAD_TC41F181D101D795D9651C9E5E9C90A20E3F329DC_H
#ifndef FASTFOURIERTRANSFORMATION_T1D812488BA93F93EB470028180F65D86FEBB57DB_H
#define FASTFOURIERTRANSFORMATION_T1D812488BA93F93EB470028180F65D86FEBB57DB_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// CSCore.DSP.FastFourierTransformation
struct  FastFourierTransformation_t1D812488BA93F93EB470028180F65D86FEBB57DB  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // FASTFOURIERTRANSFORMATION_T1D812488BA93F93EB470028180F65D86FEBB57DB_H
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
	// System.String System.Exception::_className
	String_t* ____className_1;
	// System.String System.Exception::_message
	String_t* ____message_2;
	// System.Collections.IDictionary System.Exception::_data
	RuntimeObject* ____data_3;
	// System.Exception System.Exception::_innerException
	Exception_t * ____innerException_4;
	// System.String System.Exception::_helpURL
	String_t* ____helpURL_5;
	// System.Object System.Exception::_stackTrace
	RuntimeObject * ____stackTrace_6;
	// System.String System.Exception::_stackTraceString
	String_t* ____stackTraceString_7;
	// System.String System.Exception::_remoteStackTraceString
	String_t* ____remoteStackTraceString_8;
	// System.Int32 System.Exception::_remoteStackIndex
	int32_t ____remoteStackIndex_9;
	// System.Object System.Exception::_dynamicMethods
	RuntimeObject * ____dynamicMethods_10;
	// System.Int32 System.Exception::_HResult
	int32_t ____HResult_11;
	// System.String System.Exception::_source
	String_t* ____source_12;
	// System.Runtime.Serialization.SafeSerializationManager System.Exception::_safeSerializationManager
	SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770 * ____safeSerializationManager_13;
	// System.Diagnostics.StackTrace[] System.Exception::captured_traces
	StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196* ___captured_traces_14;
	// System.IntPtr[] System.Exception::native_trace_ips
	IntPtrU5BU5D_t4DC01DCB9A6DF6C9792A6513595D7A11E637DCDD* ___native_trace_ips_15;

public:
	inline static int32_t get_offset_of__className_1() { return static_cast<int32_t>(offsetof(Exception_t, ____className_1)); }
	inline String_t* get__className_1() const { return ____className_1; }
	inline String_t** get_address_of__className_1() { return &____className_1; }
	inline void set__className_1(String_t* value)
	{
		____className_1 = value;
		Il2CppCodeGenWriteBarrier((&____className_1), value);
	}

	inline static int32_t get_offset_of__message_2() { return static_cast<int32_t>(offsetof(Exception_t, ____message_2)); }
	inline String_t* get__message_2() const { return ____message_2; }
	inline String_t** get_address_of__message_2() { return &____message_2; }
	inline void set__message_2(String_t* value)
	{
		____message_2 = value;
		Il2CppCodeGenWriteBarrier((&____message_2), value);
	}

	inline static int32_t get_offset_of__data_3() { return static_cast<int32_t>(offsetof(Exception_t, ____data_3)); }
	inline RuntimeObject* get__data_3() const { return ____data_3; }
	inline RuntimeObject** get_address_of__data_3() { return &____data_3; }
	inline void set__data_3(RuntimeObject* value)
	{
		____data_3 = value;
		Il2CppCodeGenWriteBarrier((&____data_3), value);
	}

	inline static int32_t get_offset_of__innerException_4() { return static_cast<int32_t>(offsetof(Exception_t, ____innerException_4)); }
	inline Exception_t * get__innerException_4() const { return ____innerException_4; }
	inline Exception_t ** get_address_of__innerException_4() { return &____innerException_4; }
	inline void set__innerException_4(Exception_t * value)
	{
		____innerException_4 = value;
		Il2CppCodeGenWriteBarrier((&____innerException_4), value);
	}

	inline static int32_t get_offset_of__helpURL_5() { return static_cast<int32_t>(offsetof(Exception_t, ____helpURL_5)); }
	inline String_t* get__helpURL_5() const { return ____helpURL_5; }
	inline String_t** get_address_of__helpURL_5() { return &____helpURL_5; }
	inline void set__helpURL_5(String_t* value)
	{
		____helpURL_5 = value;
		Il2CppCodeGenWriteBarrier((&____helpURL_5), value);
	}

	inline static int32_t get_offset_of__stackTrace_6() { return static_cast<int32_t>(offsetof(Exception_t, ____stackTrace_6)); }
	inline RuntimeObject * get__stackTrace_6() const { return ____stackTrace_6; }
	inline RuntimeObject ** get_address_of__stackTrace_6() { return &____stackTrace_6; }
	inline void set__stackTrace_6(RuntimeObject * value)
	{
		____stackTrace_6 = value;
		Il2CppCodeGenWriteBarrier((&____stackTrace_6), value);
	}

	inline static int32_t get_offset_of__stackTraceString_7() { return static_cast<int32_t>(offsetof(Exception_t, ____stackTraceString_7)); }
	inline String_t* get__stackTraceString_7() const { return ____stackTraceString_7; }
	inline String_t** get_address_of__stackTraceString_7() { return &____stackTraceString_7; }
	inline void set__stackTraceString_7(String_t* value)
	{
		____stackTraceString_7 = value;
		Il2CppCodeGenWriteBarrier((&____stackTraceString_7), value);
	}

	inline static int32_t get_offset_of__remoteStackTraceString_8() { return static_cast<int32_t>(offsetof(Exception_t, ____remoteStackTraceString_8)); }
	inline String_t* get__remoteStackTraceString_8() const { return ____remoteStackTraceString_8; }
	inline String_t** get_address_of__remoteStackTraceString_8() { return &____remoteStackTraceString_8; }
	inline void set__remoteStackTraceString_8(String_t* value)
	{
		____remoteStackTraceString_8 = value;
		Il2CppCodeGenWriteBarrier((&____remoteStackTraceString_8), value);
	}

	inline static int32_t get_offset_of__remoteStackIndex_9() { return static_cast<int32_t>(offsetof(Exception_t, ____remoteStackIndex_9)); }
	inline int32_t get__remoteStackIndex_9() const { return ____remoteStackIndex_9; }
	inline int32_t* get_address_of__remoteStackIndex_9() { return &____remoteStackIndex_9; }
	inline void set__remoteStackIndex_9(int32_t value)
	{
		____remoteStackIndex_9 = value;
	}

	inline static int32_t get_offset_of__dynamicMethods_10() { return static_cast<int32_t>(offsetof(Exception_t, ____dynamicMethods_10)); }
	inline RuntimeObject * get__dynamicMethods_10() const { return ____dynamicMethods_10; }
	inline RuntimeObject ** get_address_of__dynamicMethods_10() { return &____dynamicMethods_10; }
	inline void set__dynamicMethods_10(RuntimeObject * value)
	{
		____dynamicMethods_10 = value;
		Il2CppCodeGenWriteBarrier((&____dynamicMethods_10), value);
	}

	inline static int32_t get_offset_of__HResult_11() { return static_cast<int32_t>(offsetof(Exception_t, ____HResult_11)); }
	inline int32_t get__HResult_11() const { return ____HResult_11; }
	inline int32_t* get_address_of__HResult_11() { return &____HResult_11; }
	inline void set__HResult_11(int32_t value)
	{
		____HResult_11 = value;
	}

	inline static int32_t get_offset_of__source_12() { return static_cast<int32_t>(offsetof(Exception_t, ____source_12)); }
	inline String_t* get__source_12() const { return ____source_12; }
	inline String_t** get_address_of__source_12() { return &____source_12; }
	inline void set__source_12(String_t* value)
	{
		____source_12 = value;
		Il2CppCodeGenWriteBarrier((&____source_12), value);
	}

	inline static int32_t get_offset_of__safeSerializationManager_13() { return static_cast<int32_t>(offsetof(Exception_t, ____safeSerializationManager_13)); }
	inline SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770 * get__safeSerializationManager_13() const { return ____safeSerializationManager_13; }
	inline SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770 ** get_address_of__safeSerializationManager_13() { return &____safeSerializationManager_13; }
	inline void set__safeSerializationManager_13(SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770 * value)
	{
		____safeSerializationManager_13 = value;
		Il2CppCodeGenWriteBarrier((&____safeSerializationManager_13), value);
	}

	inline static int32_t get_offset_of_captured_traces_14() { return static_cast<int32_t>(offsetof(Exception_t, ___captured_traces_14)); }
	inline StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196* get_captured_traces_14() const { return ___captured_traces_14; }
	inline StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196** get_address_of_captured_traces_14() { return &___captured_traces_14; }
	inline void set_captured_traces_14(StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196* value)
	{
		___captured_traces_14 = value;
		Il2CppCodeGenWriteBarrier((&___captured_traces_14), value);
	}

	inline static int32_t get_offset_of_native_trace_ips_15() { return static_cast<int32_t>(offsetof(Exception_t, ___native_trace_ips_15)); }
	inline IntPtrU5BU5D_t4DC01DCB9A6DF6C9792A6513595D7A11E637DCDD* get_native_trace_ips_15() const { return ___native_trace_ips_15; }
	inline IntPtrU5BU5D_t4DC01DCB9A6DF6C9792A6513595D7A11E637DCDD** get_address_of_native_trace_ips_15() { return &___native_trace_ips_15; }
	inline void set_native_trace_ips_15(IntPtrU5BU5D_t4DC01DCB9A6DF6C9792A6513595D7A11E637DCDD* value)
	{
		___native_trace_ips_15 = value;
		Il2CppCodeGenWriteBarrier((&___native_trace_ips_15), value);
	}
};

struct Exception_t_StaticFields
{
public:
	// System.Object System.Exception::s_EDILock
	RuntimeObject * ___s_EDILock_0;

public:
	inline static int32_t get_offset_of_s_EDILock_0() { return static_cast<int32_t>(offsetof(Exception_t_StaticFields, ___s_EDILock_0)); }
	inline RuntimeObject * get_s_EDILock_0() const { return ___s_EDILock_0; }
	inline RuntimeObject ** get_address_of_s_EDILock_0() { return &___s_EDILock_0; }
	inline void set_s_EDILock_0(RuntimeObject * value)
	{
		___s_EDILock_0 = value;
		Il2CppCodeGenWriteBarrier((&___s_EDILock_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
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
	SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770 * ____safeSerializationManager_13;
	StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196* ___captured_traces_14;
	intptr_t* ___native_trace_ips_15;
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
	SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770 * ____safeSerializationManager_13;
	StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196* ___captured_traces_14;
	intptr_t* ___native_trace_ips_15;
};
#endif // EXCEPTION_T_H
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
	// System.Int32 System.String::m_stringLength
	int32_t ___m_stringLength_0;
	// System.Char System.String::m_firstChar
	Il2CppChar ___m_firstChar_1;

public:
	inline static int32_t get_offset_of_m_stringLength_0() { return static_cast<int32_t>(offsetof(String_t, ___m_stringLength_0)); }
	inline int32_t get_m_stringLength_0() const { return ___m_stringLength_0; }
	inline int32_t* get_address_of_m_stringLength_0() { return &___m_stringLength_0; }
	inline void set_m_stringLength_0(int32_t value)
	{
		___m_stringLength_0 = value;
	}

	inline static int32_t get_offset_of_m_firstChar_1() { return static_cast<int32_t>(offsetof(String_t, ___m_firstChar_1)); }
	inline Il2CppChar get_m_firstChar_1() const { return ___m_firstChar_1; }
	inline Il2CppChar* get_address_of_m_firstChar_1() { return &___m_firstChar_1; }
	inline void set_m_firstChar_1(Il2CppChar value)
	{
		___m_firstChar_1 = value;
	}
};

struct String_t_StaticFields
{
public:
	// System.String System.String::Empty
	String_t* ___Empty_5;

public:
	inline static int32_t get_offset_of_Empty_5() { return static_cast<int32_t>(offsetof(String_t_StaticFields, ___Empty_5)); }
	inline String_t* get_Empty_5() const { return ___Empty_5; }
	inline String_t** get_address_of_Empty_5() { return &___Empty_5; }
	inline void set_Empty_5(String_t* value)
	{
		___Empty_5 = value;
		Il2CppCodeGenWriteBarrier((&___Empty_5), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STRING_T_H
#ifndef VALUETYPE_T4D0C27076F7C36E76190FB3328E232BCB1CD1FFF_H
#define VALUETYPE_T4D0C27076F7C36E76190FB3328E232BCB1CD1FFF_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ValueType
struct  ValueType_t4D0C27076F7C36E76190FB3328E232BCB1CD1FFF  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t4D0C27076F7C36E76190FB3328E232BCB1CD1FFF_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t4D0C27076F7C36E76190FB3328E232BCB1CD1FFF_marshaled_com
{
};
#endif // VALUETYPE_T4D0C27076F7C36E76190FB3328E232BCB1CD1FFF_H
#ifndef HIGHPASSFILTER_TC7C2DE56E9FCB6198329F7F3A9F9AE8D8781824E_H
#define HIGHPASSFILTER_TC7C2DE56E9FCB6198329F7F3A9F9AE8D8781824E_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// CSCore.DSP.HighpassFilter
struct  HighpassFilter_tC7C2DE56E9FCB6198329F7F3A9F9AE8D8781824E  : public BiQuad_tC41F181D101D795D9651C9E5E9C90A20E3F329DC
{
public:
	// System.Int32 CSCore.DSP.HighpassFilter::p1
	int32_t ___p1_11;
	// System.Double CSCore.DSP.HighpassFilter::p2
	double ___p2_12;

public:
	inline static int32_t get_offset_of_p1_11() { return static_cast<int32_t>(offsetof(HighpassFilter_tC7C2DE56E9FCB6198329F7F3A9F9AE8D8781824E, ___p1_11)); }
	inline int32_t get_p1_11() const { return ___p1_11; }
	inline int32_t* get_address_of_p1_11() { return &___p1_11; }
	inline void set_p1_11(int32_t value)
	{
		___p1_11 = value;
	}

	inline static int32_t get_offset_of_p2_12() { return static_cast<int32_t>(offsetof(HighpassFilter_tC7C2DE56E9FCB6198329F7F3A9F9AE8D8781824E, ___p2_12)); }
	inline double get_p2_12() const { return ___p2_12; }
	inline double* get_address_of_p2_12() { return &___p2_12; }
	inline void set_p2_12(double value)
	{
		___p2_12 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // HIGHPASSFILTER_TC7C2DE56E9FCB6198329F7F3A9F9AE8D8781824E_H
#ifndef LOWPASSFILTER_TF7E0C1DEDFCAEE414F43C206256F4B11E0CA93D5_H
#define LOWPASSFILTER_TF7E0C1DEDFCAEE414F43C206256F4B11E0CA93D5_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// CSCore.DSP.LowpassFilter
struct  LowpassFilter_tF7E0C1DEDFCAEE414F43C206256F4B11E0CA93D5  : public BiQuad_tC41F181D101D795D9651C9E5E9C90A20E3F329DC
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LOWPASSFILTER_TF7E0C1DEDFCAEE414F43C206256F4B11E0CA93D5_H
#ifndef COMPLEX_T02AD1084BE99034B2267A3721BDD94453CAAB77C_H
#define COMPLEX_T02AD1084BE99034B2267A3721BDD94453CAAB77C_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// CSCore.Utils.Complex
struct  Complex_t02AD1084BE99034B2267A3721BDD94453CAAB77C 
{
public:
	// System.Single CSCore.Utils.Complex::Imaginary
	float ___Imaginary_1;
	// System.Single CSCore.Utils.Complex::Real
	float ___Real_2;

public:
	inline static int32_t get_offset_of_Imaginary_1() { return static_cast<int32_t>(offsetof(Complex_t02AD1084BE99034B2267A3721BDD94453CAAB77C, ___Imaginary_1)); }
	inline float get_Imaginary_1() const { return ___Imaginary_1; }
	inline float* get_address_of_Imaginary_1() { return &___Imaginary_1; }
	inline void set_Imaginary_1(float value)
	{
		___Imaginary_1 = value;
	}

	inline static int32_t get_offset_of_Real_2() { return static_cast<int32_t>(offsetof(Complex_t02AD1084BE99034B2267A3721BDD94453CAAB77C, ___Real_2)); }
	inline float get_Real_2() const { return ___Real_2; }
	inline float* get_address_of_Real_2() { return &___Real_2; }
	inline void set_Real_2(float value)
	{
		___Real_2 = value;
	}
};

struct Complex_t02AD1084BE99034B2267A3721BDD94453CAAB77C_StaticFields
{
public:
	// CSCore.Utils.Complex CSCore.Utils.Complex::Zero
	Complex_t02AD1084BE99034B2267A3721BDD94453CAAB77C  ___Zero_0;

public:
	inline static int32_t get_offset_of_Zero_0() { return static_cast<int32_t>(offsetof(Complex_t02AD1084BE99034B2267A3721BDD94453CAAB77C_StaticFields, ___Zero_0)); }
	inline Complex_t02AD1084BE99034B2267A3721BDD94453CAAB77C  get_Zero_0() const { return ___Zero_0; }
	inline Complex_t02AD1084BE99034B2267A3721BDD94453CAAB77C * get_address_of_Zero_0() { return &___Zero_0; }
	inline void set_Zero_0(Complex_t02AD1084BE99034B2267A3721BDD94453CAAB77C  value)
	{
		___Zero_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COMPLEX_T02AD1084BE99034B2267A3721BDD94453CAAB77C_H
#ifndef BOOLEAN_TB53F6830F670160873277339AA58F15CAED4399C_H
#define BOOLEAN_TB53F6830F670160873277339AA58F15CAED4399C_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Boolean
struct  Boolean_tB53F6830F670160873277339AA58F15CAED4399C 
{
public:
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Boolean_tB53F6830F670160873277339AA58F15CAED4399C, ___m_value_0)); }
	inline bool get_m_value_0() const { return ___m_value_0; }
	inline bool* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(bool value)
	{
		___m_value_0 = value;
	}
};

struct Boolean_tB53F6830F670160873277339AA58F15CAED4399C_StaticFields
{
public:
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;

public:
	inline static int32_t get_offset_of_TrueString_5() { return static_cast<int32_t>(offsetof(Boolean_tB53F6830F670160873277339AA58F15CAED4399C_StaticFields, ___TrueString_5)); }
	inline String_t* get_TrueString_5() const { return ___TrueString_5; }
	inline String_t** get_address_of_TrueString_5() { return &___TrueString_5; }
	inline void set_TrueString_5(String_t* value)
	{
		___TrueString_5 = value;
		Il2CppCodeGenWriteBarrier((&___TrueString_5), value);
	}

	inline static int32_t get_offset_of_FalseString_6() { return static_cast<int32_t>(offsetof(Boolean_tB53F6830F670160873277339AA58F15CAED4399C_StaticFields, ___FalseString_6)); }
	inline String_t* get_FalseString_6() const { return ___FalseString_6; }
	inline String_t** get_address_of_FalseString_6() { return &___FalseString_6; }
	inline void set_FalseString_6(String_t* value)
	{
		___FalseString_6 = value;
		Il2CppCodeGenWriteBarrier((&___FalseString_6), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BOOLEAN_TB53F6830F670160873277339AA58F15CAED4399C_H
#ifndef DOUBLE_T358B8F23BDC52A5DD700E727E204F9F7CDE12409_H
#define DOUBLE_T358B8F23BDC52A5DD700E727E204F9F7CDE12409_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Double
struct  Double_t358B8F23BDC52A5DD700E727E204F9F7CDE12409 
{
public:
	// System.Double System.Double::m_value
	double ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Double_t358B8F23BDC52A5DD700E727E204F9F7CDE12409, ___m_value_0)); }
	inline double get_m_value_0() const { return ___m_value_0; }
	inline double* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(double value)
	{
		___m_value_0 = value;
	}
};

struct Double_t358B8F23BDC52A5DD700E727E204F9F7CDE12409_StaticFields
{
public:
	// System.Double System.Double::NegativeZero
	double ___NegativeZero_7;

public:
	inline static int32_t get_offset_of_NegativeZero_7() { return static_cast<int32_t>(offsetof(Double_t358B8F23BDC52A5DD700E727E204F9F7CDE12409_StaticFields, ___NegativeZero_7)); }
	inline double get_NegativeZero_7() const { return ___NegativeZero_7; }
	inline double* get_address_of_NegativeZero_7() { return &___NegativeZero_7; }
	inline void set_NegativeZero_7(double value)
	{
		___NegativeZero_7 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DOUBLE_T358B8F23BDC52A5DD700E727E204F9F7CDE12409_H
#ifndef ENUM_T2AF27C02B8653AE29442467390005ABC74D8F521_H
#define ENUM_T2AF27C02B8653AE29442467390005ABC74D8F521_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Enum
struct  Enum_t2AF27C02B8653AE29442467390005ABC74D8F521  : public ValueType_t4D0C27076F7C36E76190FB3328E232BCB1CD1FFF
{
public:

public:
};

struct Enum_t2AF27C02B8653AE29442467390005ABC74D8F521_StaticFields
{
public:
	// System.Char[] System.Enum::enumSeperatorCharArray
	CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* ___enumSeperatorCharArray_0;

public:
	inline static int32_t get_offset_of_enumSeperatorCharArray_0() { return static_cast<int32_t>(offsetof(Enum_t2AF27C02B8653AE29442467390005ABC74D8F521_StaticFields, ___enumSeperatorCharArray_0)); }
	inline CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* get_enumSeperatorCharArray_0() const { return ___enumSeperatorCharArray_0; }
	inline CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2** get_address_of_enumSeperatorCharArray_0() { return &___enumSeperatorCharArray_0; }
	inline void set_enumSeperatorCharArray_0(CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* value)
	{
		___enumSeperatorCharArray_0 = value;
		Il2CppCodeGenWriteBarrier((&___enumSeperatorCharArray_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t2AF27C02B8653AE29442467390005ABC74D8F521_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t2AF27C02B8653AE29442467390005ABC74D8F521_marshaled_com
{
};
#endif // ENUM_T2AF27C02B8653AE29442467390005ABC74D8F521_H
#ifndef INT32_T585191389E07734F19F3156FF88FB3EF4800D102_H
#define INT32_T585191389E07734F19F3156FF88FB3EF4800D102_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Int32
struct  Int32_t585191389E07734F19F3156FF88FB3EF4800D102 
{
public:
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Int32_t585191389E07734F19F3156FF88FB3EF4800D102, ___m_value_0)); }
	inline int32_t get_m_value_0() const { return ___m_value_0; }
	inline int32_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int32_t value)
	{
		___m_value_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INT32_T585191389E07734F19F3156FF88FB3EF4800D102_H
#ifndef SINGLE_TDDDA9169C4E4E308AC6D7A824F9B28DC82204AE1_H
#define SINGLE_TDDDA9169C4E4E308AC6D7A824F9B28DC82204AE1_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Single
struct  Single_tDDDA9169C4E4E308AC6D7A824F9B28DC82204AE1 
{
public:
	// System.Single System.Single::m_value
	float ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Single_tDDDA9169C4E4E308AC6D7A824F9B28DC82204AE1, ___m_value_0)); }
	inline float get_m_value_0() const { return ___m_value_0; }
	inline float* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(float value)
	{
		___m_value_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SINGLE_TDDDA9169C4E4E308AC6D7A824F9B28DC82204AE1_H
#ifndef SYSTEMEXCEPTION_T5380468142AA850BE4A341D7AF3EAB9C78746782_H
#define SYSTEMEXCEPTION_T5380468142AA850BE4A341D7AF3EAB9C78746782_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.SystemException
struct  SystemException_t5380468142AA850BE4A341D7AF3EAB9C78746782  : public Exception_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SYSTEMEXCEPTION_T5380468142AA850BE4A341D7AF3EAB9C78746782_H
#ifndef VOID_T22962CB4C05B1D89B55A6E1139F0E87A90987017_H
#define VOID_T22962CB4C05B1D89B55A6E1139F0E87A90987017_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Void
struct  Void_t22962CB4C05B1D89B55A6E1139F0E87A90987017 
{
public:
	union
	{
		struct
		{
		};
		uint8_t Void_t22962CB4C05B1D89B55A6E1139F0E87A90987017__padding[1];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VOID_T22962CB4C05B1D89B55A6E1139F0E87A90987017_H
#ifndef FFTMODE_T1DF29939A943FF4D95A04657C1CC3C0BF92004A6_H
#define FFTMODE_T1DF29939A943FF4D95A04657C1CC3C0BF92004A6_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// CSCore.DSP.FftMode
struct  FftMode_t1DF29939A943FF4D95A04657C1CC3C0BF92004A6 
{
public:
	// System.Int32 CSCore.DSP.FftMode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(FftMode_t1DF29939A943FF4D95A04657C1CC3C0BF92004A6, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // FFTMODE_T1DF29939A943FF4D95A04657C1CC3C0BF92004A6_H
#ifndef FFTSIZE_TC5252007A884D1AD54BC4C59F8C23EFB4B9AB348_H
#define FFTSIZE_TC5252007A884D1AD54BC4C59F8C23EFB4B9AB348_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// CSCore.DSP.FftSize
struct  FftSize_tC5252007A884D1AD54BC4C59F8C23EFB4B9AB348 
{
public:
	// System.Int32 CSCore.DSP.FftSize::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(FftSize_tC5252007A884D1AD54BC4C59F8C23EFB4B9AB348, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // FFTSIZE_TC5252007A884D1AD54BC4C59F8C23EFB4B9AB348_H
#ifndef ARGUMENTEXCEPTION_TEDCD16F20A09ECE461C3DA766C16EDA8864057D1_H
#define ARGUMENTEXCEPTION_TEDCD16F20A09ECE461C3DA766C16EDA8864057D1_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ArgumentException
struct  ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1  : public SystemException_t5380468142AA850BE4A341D7AF3EAB9C78746782
{
public:
	// System.String System.ArgumentException::m_paramName
	String_t* ___m_paramName_17;

public:
	inline static int32_t get_offset_of_m_paramName_17() { return static_cast<int32_t>(offsetof(ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1, ___m_paramName_17)); }
	inline String_t* get_m_paramName_17() const { return ___m_paramName_17; }
	inline String_t** get_address_of_m_paramName_17() { return &___m_paramName_17; }
	inline void set_m_paramName_17(String_t* value)
	{
		___m_paramName_17 = value;
		Il2CppCodeGenWriteBarrier((&___m_paramName_17), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ARGUMENTEXCEPTION_TEDCD16F20A09ECE461C3DA766C16EDA8864057D1_H
#ifndef FFTPROVIDER_T27F66E9A2BE537D97DE6F5F1D1CBDCA5EFDB55BD_H
#define FFTPROVIDER_T27F66E9A2BE537D97DE6F5F1D1CBDCA5EFDB55BD_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// CSCore.DSP.FftProvider
struct  FftProvider_t27F66E9A2BE537D97DE6F5F1D1CBDCA5EFDB55BD  : public RuntimeObject
{
public:
	// System.Int32 CSCore.DSP.FftProvider::_channels
	int32_t ____channels_0;
	// CSCore.DSP.FftSize CSCore.DSP.FftProvider::_fftSize
	int32_t ____fftSize_1;
	// System.Int32 CSCore.DSP.FftProvider::_fftSizeExponent
	int32_t ____fftSizeExponent_2;
	// CSCore.Utils.Complex[] CSCore.DSP.FftProvider::_storedSamples
	ComplexU5BU5D_tD82CA72F1EC0EB01B6F91CA7883CDAAA321D8308* ____storedSamples_3;
	// System.Int32 CSCore.DSP.FftProvider::_currentSampleOffset
	int32_t ____currentSampleOffset_4;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) CSCore.DSP.FftProvider::_newDataAvailable
	bool ____newDataAvailable_5;

public:
	inline static int32_t get_offset_of__channels_0() { return static_cast<int32_t>(offsetof(FftProvider_t27F66E9A2BE537D97DE6F5F1D1CBDCA5EFDB55BD, ____channels_0)); }
	inline int32_t get__channels_0() const { return ____channels_0; }
	inline int32_t* get_address_of__channels_0() { return &____channels_0; }
	inline void set__channels_0(int32_t value)
	{
		____channels_0 = value;
	}

	inline static int32_t get_offset_of__fftSize_1() { return static_cast<int32_t>(offsetof(FftProvider_t27F66E9A2BE537D97DE6F5F1D1CBDCA5EFDB55BD, ____fftSize_1)); }
	inline int32_t get__fftSize_1() const { return ____fftSize_1; }
	inline int32_t* get_address_of__fftSize_1() { return &____fftSize_1; }
	inline void set__fftSize_1(int32_t value)
	{
		____fftSize_1 = value;
	}

	inline static int32_t get_offset_of__fftSizeExponent_2() { return static_cast<int32_t>(offsetof(FftProvider_t27F66E9A2BE537D97DE6F5F1D1CBDCA5EFDB55BD, ____fftSizeExponent_2)); }
	inline int32_t get__fftSizeExponent_2() const { return ____fftSizeExponent_2; }
	inline int32_t* get_address_of__fftSizeExponent_2() { return &____fftSizeExponent_2; }
	inline void set__fftSizeExponent_2(int32_t value)
	{
		____fftSizeExponent_2 = value;
	}

	inline static int32_t get_offset_of__storedSamples_3() { return static_cast<int32_t>(offsetof(FftProvider_t27F66E9A2BE537D97DE6F5F1D1CBDCA5EFDB55BD, ____storedSamples_3)); }
	inline ComplexU5BU5D_tD82CA72F1EC0EB01B6F91CA7883CDAAA321D8308* get__storedSamples_3() const { return ____storedSamples_3; }
	inline ComplexU5BU5D_tD82CA72F1EC0EB01B6F91CA7883CDAAA321D8308** get_address_of__storedSamples_3() { return &____storedSamples_3; }
	inline void set__storedSamples_3(ComplexU5BU5D_tD82CA72F1EC0EB01B6F91CA7883CDAAA321D8308* value)
	{
		____storedSamples_3 = value;
		Il2CppCodeGenWriteBarrier((&____storedSamples_3), value);
	}

	inline static int32_t get_offset_of__currentSampleOffset_4() { return static_cast<int32_t>(offsetof(FftProvider_t27F66E9A2BE537D97DE6F5F1D1CBDCA5EFDB55BD, ____currentSampleOffset_4)); }
	inline int32_t get__currentSampleOffset_4() const { return ____currentSampleOffset_4; }
	inline int32_t* get_address_of__currentSampleOffset_4() { return &____currentSampleOffset_4; }
	inline void set__currentSampleOffset_4(int32_t value)
	{
		____currentSampleOffset_4 = value;
	}

	inline static int32_t get_offset_of__newDataAvailable_5() { return static_cast<int32_t>(offsetof(FftProvider_t27F66E9A2BE537D97DE6F5F1D1CBDCA5EFDB55BD, ____newDataAvailable_5)); }
	inline bool get__newDataAvailable_5() const { return ____newDataAvailable_5; }
	inline bool* get_address_of__newDataAvailable_5() { return &____newDataAvailable_5; }
	inline void set__newDataAvailable_5(bool value)
	{
		____newDataAvailable_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // FFTPROVIDER_T27F66E9A2BE537D97DE6F5F1D1CBDCA5EFDB55BD_H
#ifndef ARGUMENTNULLEXCEPTION_T581DF992B1F3E0EC6EFB30CC5DC43519A79B27AD_H
#define ARGUMENTNULLEXCEPTION_T581DF992B1F3E0EC6EFB30CC5DC43519A79B27AD_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ArgumentNullException
struct  ArgumentNullException_t581DF992B1F3E0EC6EFB30CC5DC43519A79B27AD  : public ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ARGUMENTNULLEXCEPTION_T581DF992B1F3E0EC6EFB30CC5DC43519A79B27AD_H
#ifndef ARGUMENTOUTOFRANGEEXCEPTION_T94D19DF918A54511AEDF4784C9A08741BAD1DEDA_H
#define ARGUMENTOUTOFRANGEEXCEPTION_T94D19DF918A54511AEDF4784C9A08741BAD1DEDA_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ArgumentOutOfRangeException
struct  ArgumentOutOfRangeException_t94D19DF918A54511AEDF4784C9A08741BAD1DEDA  : public ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1
{
public:
	// System.Object System.ArgumentOutOfRangeException::m_actualValue
	RuntimeObject * ___m_actualValue_19;

public:
	inline static int32_t get_offset_of_m_actualValue_19() { return static_cast<int32_t>(offsetof(ArgumentOutOfRangeException_t94D19DF918A54511AEDF4784C9A08741BAD1DEDA, ___m_actualValue_19)); }
	inline RuntimeObject * get_m_actualValue_19() const { return ___m_actualValue_19; }
	inline RuntimeObject ** get_address_of_m_actualValue_19() { return &___m_actualValue_19; }
	inline void set_m_actualValue_19(RuntimeObject * value)
	{
		___m_actualValue_19 = value;
		Il2CppCodeGenWriteBarrier((&___m_actualValue_19), value);
	}
};

struct ArgumentOutOfRangeException_t94D19DF918A54511AEDF4784C9A08741BAD1DEDA_StaticFields
{
public:
	// System.String modreq(System.Runtime.CompilerServices.IsVolatile) System.ArgumentOutOfRangeException::_rangeMessage
	String_t* ____rangeMessage_18;

public:
	inline static int32_t get_offset_of__rangeMessage_18() { return static_cast<int32_t>(offsetof(ArgumentOutOfRangeException_t94D19DF918A54511AEDF4784C9A08741BAD1DEDA_StaticFields, ____rangeMessage_18)); }
	inline String_t* get__rangeMessage_18() const { return ____rangeMessage_18; }
	inline String_t** get_address_of__rangeMessage_18() { return &____rangeMessage_18; }
	inline void set__rangeMessage_18(String_t* value)
	{
		____rangeMessage_18 = value;
		Il2CppCodeGenWriteBarrier((&____rangeMessage_18), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ARGUMENTOUTOFRANGEEXCEPTION_T94D19DF918A54511AEDF4784C9A08741BAD1DEDA_H
// System.Single[]
struct SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) float m_Items[1];

public:
	inline float GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline float* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, float value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline float GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline float* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, float value)
	{
		m_Items[index] = value;
	}
};
// CSCore.Utils.Complex[]
struct ComplexU5BU5D_tD82CA72F1EC0EB01B6F91CA7883CDAAA321D8308  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Complex_t02AD1084BE99034B2267A3721BDD94453CAAB77C  m_Items[1];

public:
	inline Complex_t02AD1084BE99034B2267A3721BDD94453CAAB77C  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Complex_t02AD1084BE99034B2267A3721BDD94453CAAB77C * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Complex_t02AD1084BE99034B2267A3721BDD94453CAAB77C  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Complex_t02AD1084BE99034B2267A3721BDD94453CAAB77C  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Complex_t02AD1084BE99034B2267A3721BDD94453CAAB77C * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Complex_t02AD1084BE99034B2267A3721BDD94453CAAB77C  value)
	{
		m_Items[index] = value;
	}
};



// System.Int32 CSCore.DSP.BiQuad::get_SampleRate()
extern "C" IL2CPP_METHOD_ATTR int32_t BiQuad_get_SampleRate_m5D09BF8DF4D14EB6E518E4257A73F8CC8377F550 (BiQuad_tC41F181D101D795D9651C9E5E9C90A20E3F329DC * __this, const RuntimeMethod* method);
// System.Void System.ArgumentOutOfRangeException::.ctor(System.String,System.String)
extern "C" IL2CPP_METHOD_ATTR void ArgumentOutOfRangeException__ctor_m300CE4D04A068C209FD858101AC361C1B600B5AE (ArgumentOutOfRangeException_t94D19DF918A54511AEDF4784C9A08741BAD1DEDA * __this, String_t* p0, String_t* p1, const RuntimeMethod* method);
// System.Void System.ArgumentOutOfRangeException::.ctor(System.String)
extern "C" IL2CPP_METHOD_ATTR void ArgumentOutOfRangeException__ctor_m6B36E60C989DC798A8B44556DB35960282B133A6 (ArgumentOutOfRangeException_t94D19DF918A54511AEDF4784C9A08741BAD1DEDA * __this, String_t* p0, const RuntimeMethod* method);
// System.Void CSCore.DSP.BiQuad::.ctor(System.Int32,System.Double,System.Double)
extern "C" IL2CPP_METHOD_ATTR void BiQuad__ctor_mEE93771F23F05F5D55D455F3847A464A608D638F (BiQuad_tC41F181D101D795D9651C9E5E9C90A20E3F329DC * __this, int32_t ___sampleRate0, double ___frequency1, double ___q2, const RuntimeMethod* method);
// System.Void System.Object::.ctor()
extern "C" IL2CPP_METHOD_ATTR void Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0 (RuntimeObject * __this, const RuntimeMethod* method);
// System.Void CSCore.DSP.BiQuad::set_SampleRate(System.Int32)
extern "C" IL2CPP_METHOD_ATTR void BiQuad_set_SampleRate_mD427E10C7E739270870923BCFC43280ECCE0F536 (BiQuad_tC41F181D101D795D9651C9E5E9C90A20E3F329DC * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Void CSCore.DSP.BiQuad::set_Frequency(System.Double)
extern "C" IL2CPP_METHOD_ATTR void BiQuad_set_Frequency_m4797D8FCE4AE354CF100F195F921C1EAFD4DA48A (BiQuad_tC41F181D101D795D9651C9E5E9C90A20E3F329DC * __this, double ___value0, const RuntimeMethod* method);
// System.Void CSCore.DSP.BiQuad::set_Q(System.Double)
extern "C" IL2CPP_METHOD_ATTR void BiQuad_set_Q_m38798E4232AFF6974C364F54CD9868F10C0A503A (BiQuad_tC41F181D101D795D9651C9E5E9C90A20E3F329DC * __this, double ___value0, const RuntimeMethod* method);
// System.Void CSCore.DSP.BiQuad::set_GainDB(System.Double)
extern "C" IL2CPP_METHOD_ATTR void BiQuad_set_GainDB_m26978539564638A11FEDE992F42F95BCE272A650 (BiQuad_tC41F181D101D795D9651C9E5E9C90A20E3F329DC * __this, double ___value0, const RuntimeMethod* method);
// System.Single CSCore.DSP.BiQuad::Process(System.Single)
extern "C" IL2CPP_METHOD_ATTR float BiQuad_Process_mCE6DE97B1125F8399DEEBC720CFF21C69D2A737F (BiQuad_tC41F181D101D795D9651C9E5E9C90A20E3F329DC * __this, float ___input0, const RuntimeMethod* method);
// System.Void CSCore.DSP.FastFourierTransformation::Inverse(CSCore.Utils.Complex[],System.Int32)
extern "C" IL2CPP_METHOD_ATTR void FastFourierTransformation_Inverse_m3C19BAFB05D2DB0028BA262E24A40EEE39029DEA (ComplexU5BU5D_tD82CA72F1EC0EB01B6F91CA7883CDAAA321D8308* ___data0, int32_t ___c1, const RuntimeMethod* method);
// System.Void CSCore.DSP.FastFourierTransformation::Forward(CSCore.Utils.Complex[],System.Int32)
extern "C" IL2CPP_METHOD_ATTR void FastFourierTransformation_Forward_m1F3C2F9FEBC0D4BAA0D4184A87F27CC5E1AF4250 (ComplexU5BU5D_tD82CA72F1EC0EB01B6F91CA7883CDAAA321D8308* ___data0, int32_t ___count1, const RuntimeMethod* method);
// System.Void CSCore.DSP.FastFourierTransformation::Swap(CSCore.Utils.Complex[],System.Int32,System.Int32)
extern "C" IL2CPP_METHOD_ATTR void FastFourierTransformation_Swap_m5576B5EFE35F901B45CFDCFD3502E985785D61B0 (ComplexU5BU5D_tD82CA72F1EC0EB01B6F91CA7883CDAAA321D8308* ___data0, int32_t ___index1, int32_t ___index22, const RuntimeMethod* method);
// System.Double System.Math::Log(System.Double,System.Double)
extern "C" IL2CPP_METHOD_ATTR double Math_Log_m5C457D6A666677B3E260C571049528D5BE93B7AF (double p0, double p1, const RuntimeMethod* method);
// System.Void System.ArgumentNullException::.ctor(System.String)
extern "C" IL2CPP_METHOD_ATTR void ArgumentNullException__ctor_mEE0C0D6FCB2D08CD7967DBB1329A0854BBED49ED (ArgumentNullException_t581DF992B1F3E0EC6EFB30CC5DC43519A79B27AD * __this, String_t* p0, const RuntimeMethod* method);
// System.Single CSCore.DSP.FftProvider::MergeSamples(System.Single[],System.Int32,System.Int32)
extern "C" IL2CPP_METHOD_ATTR float FftProvider_MergeSamples_m86F1417EA1DDCD1CA73090C267074985A32BD668 (FftProvider_t27F66E9A2BE537D97DE6F5F1D1CBDCA5EFDB55BD * __this, SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5* ___samples0, int32_t ___i1, int32_t ___channels2, const RuntimeMethod* method);
// System.Void System.Array::Copy(System.Array,System.Array,System.Int32)
extern "C" IL2CPP_METHOD_ATTR void Array_Copy_m2D96731C600DE8A167348CA8BA796344E64F7434 (RuntimeArray * p0, RuntimeArray * p1, int32_t p2, const RuntimeMethod* method);
// System.Void CSCore.DSP.FastFourierTransformation::Fft(CSCore.Utils.Complex[],System.Int32,CSCore.DSP.FftMode)
extern "C" IL2CPP_METHOD_ATTR void FastFourierTransformation_Fft_mFD9ED02CA9319E300F3910D25C98E259CE3D801B (ComplexU5BU5D_tD82CA72F1EC0EB01B6F91CA7883CDAAA321D8308* ___data0, int32_t ___exponent1, int32_t ___mode2, const RuntimeMethod* method);
// System.Void System.ArgumentException::.ctor(System.String,System.String)
extern "C" IL2CPP_METHOD_ATTR void ArgumentException__ctor_m26DC3463C6F3C98BF33EA39598DD2B32F0249CA8 (ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1 * __this, String_t* p0, String_t* p1, const RuntimeMethod* method);
// System.Single CSCore.Utils.Complex::op_Implicit(CSCore.Utils.Complex)
extern "C" IL2CPP_METHOD_ATTR float Complex_op_Implicit_mC052F5BDB4FB410D16868AEE5C9390AD199C110B (Complex_t02AD1084BE99034B2267A3721BDD94453CAAB77C  ___complex0, const RuntimeMethod* method);
// System.Void CSCore.DSP.BiQuad::.ctor(System.Int32,System.Double)
extern "C" IL2CPP_METHOD_ATTR void BiQuad__ctor_m33D9E2005DF3B1643404B60F7696AC4692E2F2BA (BiQuad_tC41F181D101D795D9651C9E5E9C90A20E3F329DC * __this, int32_t ___sampleRate0, double ___frequency1, const RuntimeMethod* method);
// System.Double CSCore.DSP.BiQuad::get_Frequency()
extern "C" IL2CPP_METHOD_ATTR double BiQuad_get_Frequency_mFBAD52E25F9FAE75A308E33364453F3C7FA7BCED (BiQuad_tC41F181D101D795D9651C9E5E9C90A20E3F329DC * __this, const RuntimeMethod* method);
// System.Double CSCore.DSP.BiQuad::get_Q()
extern "C" IL2CPP_METHOD_ATTR double BiQuad_get_Q_m5CF401F951092AC129B8B3331F157651FA54759F (BiQuad_tC41F181D101D795D9651C9E5E9C90A20E3F329DC * __this, const RuntimeMethod* method);
// System.Void CSCore.Utils.Complex::.ctor(System.Single,System.Single)
extern "C" IL2CPP_METHOD_ATTR void Complex__ctor_m5A4C360047A6B9466C837C016ED1FF5E6857C165 (Complex_t02AD1084BE99034B2267A3721BDD94453CAAB77C * __this, float ___real0, float ___img1, const RuntimeMethod* method);
// System.Double CSCore.Utils.Complex::get_Value()
extern "C" IL2CPP_METHOD_ATTR double Complex_get_Value_m0F1C26CE88D34B658B5012023D33F18590C038B3 (Complex_t02AD1084BE99034B2267A3721BDD94453CAAB77C * __this, const RuntimeMethod* method);
// System.Boolean System.Single::Equals(System.Single)
extern "C" IL2CPP_METHOD_ATTR bool Single_Equals_mCDFA927E712FBA83D076864E16C77E39A6E66FE7 (float* __this, float p0, const RuntimeMethod* method);
// System.Boolean CSCore.Utils.Complex::Equals(CSCore.Utils.Complex)
extern "C" IL2CPP_METHOD_ATTR bool Complex_Equals_mA47EF94D0222BAC7BCD6E81743E6F207CB0E2DEE (Complex_t02AD1084BE99034B2267A3721BDD94453CAAB77C * __this, Complex_t02AD1084BE99034B2267A3721BDD94453CAAB77C  ___other0, const RuntimeMethod* method);
// System.Boolean CSCore.Utils.Complex::Equals(System.Object)
extern "C" IL2CPP_METHOD_ATTR bool Complex_Equals_mAAC29EDDA5F5C16D0D416EEC7BA27A84ABEDD030 (Complex_t02AD1084BE99034B2267A3721BDD94453CAAB77C * __this, RuntimeObject * ___obj0, const RuntimeMethod* method);
// System.Int32 System.Single::GetHashCode()
extern "C" IL2CPP_METHOD_ATTR int32_t Single_GetHashCode_m1BC0733E0C3851ED9D1B6C9C0B243BB88BE77AD0 (float* __this, const RuntimeMethod* method);
// System.Int32 CSCore.Utils.Complex::GetHashCode()
extern "C" IL2CPP_METHOD_ATTR int32_t Complex_GetHashCode_m96A74950DAEDA4CE7ABEBF768EB9185510118A01 (Complex_t02AD1084BE99034B2267A3721BDD94453CAAB77C * __this, const RuntimeMethod* method);
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
// System.Double CSCore.DSP.BiQuad::get_Frequency()
extern "C" IL2CPP_METHOD_ATTR double BiQuad_get_Frequency_mFBAD52E25F9FAE75A308E33364453F3C7FA7BCED (BiQuad_tC41F181D101D795D9651C9E5E9C90A20E3F329DC * __this, const RuntimeMethod* method)
{
	{
		double L_0 = __this->get__frequency_9();
		return L_0;
	}
}
// System.Void CSCore.DSP.BiQuad::set_Frequency(System.Double)
extern "C" IL2CPP_METHOD_ATTR void BiQuad_set_Frequency_m4797D8FCE4AE354CF100F195F921C1EAFD4DA48A (BiQuad_tC41F181D101D795D9651C9E5E9C90A20E3F329DC * __this, double ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (BiQuad_set_Frequency_m4797D8FCE4AE354CF100F195F921C1EAFD4DA48A_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = BiQuad_get_SampleRate_m5D09BF8DF4D14EB6E518E4257A73F8CC8377F550(__this, /*hidden argument*/NULL);
		double L_1 = ___value0;
		if ((!(((double)(((double)((double)L_0)))) < ((double)((double)il2cpp_codegen_multiply((double)L_1, (double)(2.0)))))))
		{
			goto IL_0024;
		}
	}
	{
		ArgumentOutOfRangeException_t94D19DF918A54511AEDF4784C9A08741BAD1DEDA * L_2 = (ArgumentOutOfRangeException_t94D19DF918A54511AEDF4784C9A08741BAD1DEDA *)il2cpp_codegen_object_new(ArgumentOutOfRangeException_t94D19DF918A54511AEDF4784C9A08741BAD1DEDA_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m300CE4D04A068C209FD858101AC361C1B600B5AE(L_2, _stringLiteralF32B67C7E26342AF42EFABC674D441DCA0A281C5, _stringLiteralE184B8E3990F62621FF56EA3BFAF19E69FDA2374, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, NULL, BiQuad_set_Frequency_m4797D8FCE4AE354CF100F195F921C1EAFD4DA48A_RuntimeMethod_var);
	}

IL_0024:
	{
		double L_3 = ___value0;
		__this->set__frequency_9(L_3);
		VirtActionInvoker0::Invoke(4 /* System.Void CSCore.DSP.BiQuad::CalculateBiQuadCoefficients() */, __this);
		return;
	}
}
// System.Int32 CSCore.DSP.BiQuad::get_SampleRate()
extern "C" IL2CPP_METHOD_ATTR int32_t BiQuad_get_SampleRate_m5D09BF8DF4D14EB6E518E4257A73F8CC8377F550 (BiQuad_tC41F181D101D795D9651C9E5E9C90A20E3F329DC * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_U3CSampleRateU3Ek__BackingField_10();
		return L_0;
	}
}
// System.Void CSCore.DSP.BiQuad::set_SampleRate(System.Int32)
extern "C" IL2CPP_METHOD_ATTR void BiQuad_set_SampleRate_mD427E10C7E739270870923BCFC43280ECCE0F536 (BiQuad_tC41F181D101D795D9651C9E5E9C90A20E3F329DC * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___value0;
		__this->set_U3CSampleRateU3Ek__BackingField_10(L_0);
		return;
	}
}
// System.Double CSCore.DSP.BiQuad::get_Q()
extern "C" IL2CPP_METHOD_ATTR double BiQuad_get_Q_m5CF401F951092AC129B8B3331F157651FA54759F (BiQuad_tC41F181D101D795D9651C9E5E9C90A20E3F329DC * __this, const RuntimeMethod* method)
{
	{
		double L_0 = __this->get__q_5();
		return L_0;
	}
}
// System.Void CSCore.DSP.BiQuad::set_Q(System.Double)
extern "C" IL2CPP_METHOD_ATTR void BiQuad_set_Q_m38798E4232AFF6974C364F54CD9868F10C0A503A (BiQuad_tC41F181D101D795D9651C9E5E9C90A20E3F329DC * __this, double ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (BiQuad_set_Q_m38798E4232AFF6974C364F54CD9868F10C0A503A_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		double L_0 = ___value0;
		if ((!(((double)L_0) <= ((double)(0.0)))))
		{
			goto IL_0017;
		}
	}
	{
		ArgumentOutOfRangeException_t94D19DF918A54511AEDF4784C9A08741BAD1DEDA * L_1 = (ArgumentOutOfRangeException_t94D19DF918A54511AEDF4784C9A08741BAD1DEDA *)il2cpp_codegen_object_new(ArgumentOutOfRangeException_t94D19DF918A54511AEDF4784C9A08741BAD1DEDA_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m6B36E60C989DC798A8B44556DB35960282B133A6(L_1, _stringLiteralF32B67C7E26342AF42EFABC674D441DCA0A281C5, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, NULL, BiQuad_set_Q_m38798E4232AFF6974C364F54CD9868F10C0A503A_RuntimeMethod_var);
	}

IL_0017:
	{
		double L_2 = ___value0;
		__this->set__q_5(L_2);
		VirtActionInvoker0::Invoke(4 /* System.Void CSCore.DSP.BiQuad::CalculateBiQuadCoefficients() */, __this);
		return;
	}
}
// System.Void CSCore.DSP.BiQuad::set_GainDB(System.Double)
extern "C" IL2CPP_METHOD_ATTR void BiQuad_set_GainDB_m26978539564638A11FEDE992F42F95BCE272A650 (BiQuad_tC41F181D101D795D9651C9E5E9C90A20E3F329DC * __this, double ___value0, const RuntimeMethod* method)
{
	{
		double L_0 = ___value0;
		__this->set__gainDB_6(L_0);
		VirtActionInvoker0::Invoke(4 /* System.Void CSCore.DSP.BiQuad::CalculateBiQuadCoefficients() */, __this);
		return;
	}
}
// System.Void CSCore.DSP.BiQuad::.ctor(System.Int32,System.Double)
extern "C" IL2CPP_METHOD_ATTR void BiQuad__ctor_m33D9E2005DF3B1643404B60F7696AC4692E2F2BA (BiQuad_tC41F181D101D795D9651C9E5E9C90A20E3F329DC * __this, int32_t ___sampleRate0, double ___frequency1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (BiQuad__ctor_m33D9E2005DF3B1643404B60F7696AC4692E2F2BA_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = ___sampleRate0;
		double L_1 = ___frequency1;
		IL2CPP_RUNTIME_CLASS_INIT(Math_tFB388E53C7FDC6FCCF9A19ABF5A4E521FBD52E19_il2cpp_TypeInfo_var);
		double L_2 = sqrt((2.0));
		BiQuad__ctor_mEE93771F23F05F5D55D455F3847A464A608D638F(__this, L_0, L_1, ((double)((double)(1.0)/(double)L_2)), /*hidden argument*/NULL);
		return;
	}
}
// System.Void CSCore.DSP.BiQuad::.ctor(System.Int32,System.Double,System.Double)
extern "C" IL2CPP_METHOD_ATTR void BiQuad__ctor_mEE93771F23F05F5D55D455F3847A464A608D638F (BiQuad_tC41F181D101D795D9651C9E5E9C90A20E3F329DC * __this, int32_t ___sampleRate0, double ___frequency1, double ___q2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (BiQuad__ctor_mEE93771F23F05F5D55D455F3847A464A608D638F_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___sampleRate0;
		if ((((int32_t)L_0) > ((int32_t)0)))
		{
			goto IL_0015;
		}
	}
	{
		ArgumentOutOfRangeException_t94D19DF918A54511AEDF4784C9A08741BAD1DEDA * L_1 = (ArgumentOutOfRangeException_t94D19DF918A54511AEDF4784C9A08741BAD1DEDA *)il2cpp_codegen_object_new(ArgumentOutOfRangeException_t94D19DF918A54511AEDF4784C9A08741BAD1DEDA_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m6B36E60C989DC798A8B44556DB35960282B133A6(L_1, _stringLiteralFB2B350D8A7204988C23DC3DD8A2D8FECFAF11FB, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, NULL, BiQuad__ctor_mEE93771F23F05F5D55D455F3847A464A608D638F_RuntimeMethod_var);
	}

IL_0015:
	{
		double L_2 = ___frequency1;
		if ((!(((double)L_2) <= ((double)(0.0)))))
		{
			goto IL_002c;
		}
	}
	{
		ArgumentOutOfRangeException_t94D19DF918A54511AEDF4784C9A08741BAD1DEDA * L_3 = (ArgumentOutOfRangeException_t94D19DF918A54511AEDF4784C9A08741BAD1DEDA *)il2cpp_codegen_object_new(ArgumentOutOfRangeException_t94D19DF918A54511AEDF4784C9A08741BAD1DEDA_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m6B36E60C989DC798A8B44556DB35960282B133A6(L_3, _stringLiteral48A8832D141772A74406D384057505B010A15F3A, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, NULL, BiQuad__ctor_mEE93771F23F05F5D55D455F3847A464A608D638F_RuntimeMethod_var);
	}

IL_002c:
	{
		double L_4 = ___q2;
		if ((!(((double)L_4) <= ((double)(0.0)))))
		{
			goto IL_0043;
		}
	}
	{
		ArgumentOutOfRangeException_t94D19DF918A54511AEDF4784C9A08741BAD1DEDA * L_5 = (ArgumentOutOfRangeException_t94D19DF918A54511AEDF4784C9A08741BAD1DEDA *)il2cpp_codegen_object_new(ArgumentOutOfRangeException_t94D19DF918A54511AEDF4784C9A08741BAD1DEDA_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m6B36E60C989DC798A8B44556DB35960282B133A6(L_5, _stringLiteral22EA1C649C82946AA6E479E1FFD321E4A318B1B0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, NULL, BiQuad__ctor_mEE93771F23F05F5D55D455F3847A464A608D638F_RuntimeMethod_var);
	}

IL_0043:
	{
		int32_t L_6 = ___sampleRate0;
		BiQuad_set_SampleRate_mD427E10C7E739270870923BCFC43280ECCE0F536(__this, L_6, /*hidden argument*/NULL);
		double L_7 = ___frequency1;
		BiQuad_set_Frequency_m4797D8FCE4AE354CF100F195F921C1EAFD4DA48A(__this, L_7, /*hidden argument*/NULL);
		double L_8 = ___q2;
		BiQuad_set_Q_m38798E4232AFF6974C364F54CD9868F10C0A503A(__this, L_8, /*hidden argument*/NULL);
		BiQuad_set_GainDB_m26978539564638A11FEDE992F42F95BCE272A650(__this, (6.0), /*hidden argument*/NULL);
		return;
	}
}
// System.Single CSCore.DSP.BiQuad::Process(System.Single)
extern "C" IL2CPP_METHOD_ATTR float BiQuad_Process_mCE6DE97B1125F8399DEEBC720CFF21C69D2A737F (BiQuad_tC41F181D101D795D9651C9E5E9C90A20E3F329DC * __this, float ___input0, const RuntimeMethod* method)
{
	double V_0 = 0.0;
	{
		float L_0 = ___input0;
		double L_1 = __this->get_A0_0();
		double L_2 = __this->get_Z1_7();
		V_0 = ((double)il2cpp_codegen_add((double)((double)il2cpp_codegen_multiply((double)(((double)((double)L_0))), (double)L_1)), (double)L_2));
		float L_3 = ___input0;
		double L_4 = __this->get_A1_1();
		double L_5 = __this->get_Z2_8();
		double L_6 = __this->get_B1_3();
		double L_7 = V_0;
		__this->set_Z1_7(((double)il2cpp_codegen_subtract((double)((double)il2cpp_codegen_add((double)((double)il2cpp_codegen_multiply((double)(((double)((double)L_3))), (double)L_4)), (double)L_5)), (double)((double)il2cpp_codegen_multiply((double)L_6, (double)L_7)))));
		float L_8 = ___input0;
		double L_9 = __this->get_A2_2();
		double L_10 = __this->get_B2_4();
		double L_11 = V_0;
		__this->set_Z2_8(((double)il2cpp_codegen_subtract((double)((double)il2cpp_codegen_multiply((double)(((double)((double)L_8))), (double)L_9)), (double)((double)il2cpp_codegen_multiply((double)L_10, (double)L_11)))));
		double L_12 = V_0;
		return (((float)((float)L_12)));
	}
}
// System.Void CSCore.DSP.BiQuad::Process(System.Single[])
extern "C" IL2CPP_METHOD_ATTR void BiQuad_Process_mFF4C8A20137E7D0DC688A34C07458715AD25B112 (BiQuad_tC41F181D101D795D9651C9E5E9C90A20E3F329DC * __this, SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5* ___input0, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		V_0 = 0;
		goto IL_0014;
	}

IL_0004:
	{
		SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5* L_0 = ___input0;
		int32_t L_1 = V_0;
		SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5* L_2 = ___input0;
		int32_t L_3 = V_0;
		NullCheck(L_2);
		int32_t L_4 = L_3;
		float L_5 = (L_2)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		float L_6 = BiQuad_Process_mCE6DE97B1125F8399DEEBC720CFF21C69D2A737F(__this, L_5, /*hidden argument*/NULL);
		NullCheck(L_0);
		(L_0)->SetAt(static_cast<il2cpp_array_size_t>(L_1), (float)L_6);
		int32_t L_7 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_7, (int32_t)1));
	}

IL_0014:
	{
		int32_t L_8 = V_0;
		SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5* L_9 = ___input0;
		NullCheck(L_9);
		if ((((int32_t)L_8) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_9)->max_length)))))))
		{
			goto IL_0004;
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
// System.Void CSCore.DSP.FastFourierTransformation::Fft(CSCore.Utils.Complex[],System.Int32,CSCore.DSP.FftMode)
extern "C" IL2CPP_METHOD_ATTR void FastFourierTransformation_Fft_mFD9ED02CA9319E300F3910D25C98E259CE3D801B (ComplexU5BU5D_tD82CA72F1EC0EB01B6F91CA7883CDAAA321D8308* ___data0, int32_t ___exponent1, int32_t ___mode2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (FastFourierTransformation_Fft_mFD9ED02CA9319E300F3910D25C98E259CE3D801B_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	float V_4 = 0.0f;
	float V_5 = 0.0f;
	float V_6 = 0.0f;
	float V_7 = 0.0f;
	float V_8 = 0.0f;
	float V_9 = 0.0f;
	float V_10 = 0.0f;
	int32_t V_11 = 0;
	int32_t V_12 = 0;
	int32_t V_13 = 0;
	{
		int32_t L_0 = ___exponent1;
		IL2CPP_RUNTIME_CLASS_INIT(Math_tFB388E53C7FDC6FCCF9A19ABF5A4E521FBD52E19_il2cpp_TypeInfo_var);
		double L_1 = pow((2.0), (((double)((double)L_0))));
		V_0 = (((int32_t)((int32_t)L_1)));
		ComplexU5BU5D_tD82CA72F1EC0EB01B6F91CA7883CDAAA321D8308* L_2 = ___data0;
		int32_t L_3 = V_0;
		FastFourierTransformation_Inverse_m3C19BAFB05D2DB0028BA262E24A40EEE39029DEA(L_2, L_3, /*hidden argument*/NULL);
		V_3 = 1;
		V_9 = (-1.0f);
		V_10 = (0.0f);
		V_13 = 0;
		goto IL_018c;
	}

IL_0031:
	{
		V_4 = (1.0f);
		V_5 = (0.0f);
		int32_t L_4 = V_3;
		V_2 = L_4;
		int32_t L_5 = V_3;
		V_3 = ((int32_t)((int32_t)L_5<<(int32_t)1));
		V_11 = 0;
		goto IL_0133;
	}

IL_004d:
	{
		int32_t L_6 = V_11;
		V_12 = L_6;
		goto IL_0107;
	}

IL_0056:
	{
		int32_t L_7 = V_12;
		int32_t L_8 = V_2;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_7, (int32_t)L_8));
		float L_9 = V_4;
		ComplexU5BU5D_tD82CA72F1EC0EB01B6F91CA7883CDAAA321D8308* L_10 = ___data0;
		int32_t L_11 = V_1;
		NullCheck(L_10);
		float L_12 = ((L_10)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_11)))->get_Real_2();
		float L_13 = V_5;
		ComplexU5BU5D_tD82CA72F1EC0EB01B6F91CA7883CDAAA321D8308* L_14 = ___data0;
		int32_t L_15 = V_1;
		NullCheck(L_14);
		float L_16 = ((L_14)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_15)))->get_Imaginary_1();
		V_6 = ((float)il2cpp_codegen_subtract((float)((float)il2cpp_codegen_multiply((float)L_9, (float)L_12)), (float)((float)il2cpp_codegen_multiply((float)L_13, (float)L_16))));
		float L_17 = V_4;
		ComplexU5BU5D_tD82CA72F1EC0EB01B6F91CA7883CDAAA321D8308* L_18 = ___data0;
		int32_t L_19 = V_1;
		NullCheck(L_18);
		float L_20 = ((L_18)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_19)))->get_Imaginary_1();
		float L_21 = V_5;
		ComplexU5BU5D_tD82CA72F1EC0EB01B6F91CA7883CDAAA321D8308* L_22 = ___data0;
		int32_t L_23 = V_1;
		NullCheck(L_22);
		float L_24 = ((L_22)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_23)))->get_Real_2();
		V_7 = ((float)il2cpp_codegen_add((float)((float)il2cpp_codegen_multiply((float)L_17, (float)L_20)), (float)((float)il2cpp_codegen_multiply((float)L_21, (float)L_24))));
		ComplexU5BU5D_tD82CA72F1EC0EB01B6F91CA7883CDAAA321D8308* L_25 = ___data0;
		int32_t L_26 = V_1;
		NullCheck(L_25);
		ComplexU5BU5D_tD82CA72F1EC0EB01B6F91CA7883CDAAA321D8308* L_27 = ___data0;
		int32_t L_28 = V_12;
		NullCheck(L_27);
		float L_29 = ((L_27)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_28)))->get_Real_2();
		float L_30 = V_6;
		((L_25)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_26)))->set_Real_2(((float)il2cpp_codegen_subtract((float)L_29, (float)L_30)));
		ComplexU5BU5D_tD82CA72F1EC0EB01B6F91CA7883CDAAA321D8308* L_31 = ___data0;
		int32_t L_32 = V_1;
		NullCheck(L_31);
		ComplexU5BU5D_tD82CA72F1EC0EB01B6F91CA7883CDAAA321D8308* L_33 = ___data0;
		int32_t L_34 = V_12;
		NullCheck(L_33);
		float L_35 = ((L_33)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_34)))->get_Imaginary_1();
		float L_36 = V_7;
		((L_31)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_32)))->set_Imaginary_1(((float)il2cpp_codegen_subtract((float)L_35, (float)L_36)));
		ComplexU5BU5D_tD82CA72F1EC0EB01B6F91CA7883CDAAA321D8308* L_37 = ___data0;
		int32_t L_38 = V_12;
		NullCheck(L_37);
		Complex_t02AD1084BE99034B2267A3721BDD94453CAAB77C * L_39 = ((L_37)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_38)));
		float L_40 = L_39->get_Real_2();
		float L_41 = V_6;
		L_39->set_Real_2(((float)il2cpp_codegen_add((float)L_40, (float)L_41)));
		ComplexU5BU5D_tD82CA72F1EC0EB01B6F91CA7883CDAAA321D8308* L_42 = ___data0;
		int32_t L_43 = V_12;
		NullCheck(L_42);
		Complex_t02AD1084BE99034B2267A3721BDD94453CAAB77C * L_44 = ((L_42)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_43)));
		float L_45 = L_44->get_Imaginary_1();
		float L_46 = V_7;
		L_44->set_Imaginary_1(((float)il2cpp_codegen_add((float)L_45, (float)L_46)));
		int32_t L_47 = V_12;
		int32_t L_48 = V_3;
		V_12 = ((int32_t)il2cpp_codegen_add((int32_t)L_47, (int32_t)L_48));
	}

IL_0107:
	{
		int32_t L_49 = V_12;
		int32_t L_50 = V_0;
		if ((((int32_t)L_49) < ((int32_t)L_50)))
		{
			goto IL_0056;
		}
	}
	{
		float L_51 = V_9;
		float L_52 = V_4;
		float L_53 = V_10;
		float L_54 = V_5;
		V_8 = ((float)il2cpp_codegen_subtract((float)((float)il2cpp_codegen_multiply((float)L_51, (float)L_52)), (float)((float)il2cpp_codegen_multiply((float)L_53, (float)L_54))));
		float L_55 = V_10;
		float L_56 = V_4;
		float L_57 = V_9;
		float L_58 = V_5;
		V_5 = ((float)il2cpp_codegen_add((float)((float)il2cpp_codegen_multiply((float)L_55, (float)L_56)), (float)((float)il2cpp_codegen_multiply((float)L_57, (float)L_58))));
		float L_59 = V_8;
		V_4 = L_59;
		int32_t L_60 = V_11;
		V_11 = ((int32_t)il2cpp_codegen_add((int32_t)L_60, (int32_t)1));
	}

IL_0133:
	{
		int32_t L_61 = V_11;
		int32_t L_62 = V_2;
		if ((((int32_t)L_61) < ((int32_t)L_62)))
		{
			goto IL_004d;
		}
	}
	{
		int32_t L_63 = ___mode2;
		if (L_63)
		{
			goto IL_0157;
		}
	}
	{
		float L_64 = V_9;
		IL2CPP_RUNTIME_CLASS_INIT(Math_tFB388E53C7FDC6FCCF9A19ABF5A4E521FBD52E19_il2cpp_TypeInfo_var);
		double L_65 = sqrt((((double)((double)((float)((float)((float)il2cpp_codegen_subtract((float)(1.0f), (float)L_64))/(float)(2.0f)))))));
		V_10 = (((float)((float)L_65)));
		goto IL_016f;
	}

IL_0157:
	{
		float L_66 = V_9;
		IL2CPP_RUNTIME_CLASS_INIT(Math_tFB388E53C7FDC6FCCF9A19ABF5A4E521FBD52E19_il2cpp_TypeInfo_var);
		double L_67 = sqrt((((double)((double)((float)((float)((float)il2cpp_codegen_subtract((float)(1.0f), (float)L_66))/(float)(2.0f)))))));
		V_10 = (((float)((float)((-L_67)))));
	}

IL_016f:
	{
		float L_68 = V_9;
		IL2CPP_RUNTIME_CLASS_INIT(Math_tFB388E53C7FDC6FCCF9A19ABF5A4E521FBD52E19_il2cpp_TypeInfo_var);
		double L_69 = sqrt((((double)((double)((float)((float)((float)il2cpp_codegen_add((float)(1.0f), (float)L_68))/(float)(2.0f)))))));
		V_9 = (((float)((float)L_69)));
		int32_t L_70 = V_13;
		V_13 = ((int32_t)il2cpp_codegen_add((int32_t)L_70, (int32_t)1));
	}

IL_018c:
	{
		int32_t L_71 = V_13;
		int32_t L_72 = ___exponent1;
		if ((((int32_t)L_71) < ((int32_t)L_72)))
		{
			goto IL_0031;
		}
	}
	{
		int32_t L_73 = ___mode2;
		if (L_73)
		{
			goto IL_019e;
		}
	}
	{
		ComplexU5BU5D_tD82CA72F1EC0EB01B6F91CA7883CDAAA321D8308* L_74 = ___data0;
		int32_t L_75 = V_0;
		FastFourierTransformation_Forward_m1F3C2F9FEBC0D4BAA0D4184A87F27CC5E1AF4250(L_74, L_75, /*hidden argument*/NULL);
	}

IL_019e:
	{
		return;
	}
}
// System.Void CSCore.DSP.FastFourierTransformation::Forward(CSCore.Utils.Complex[],System.Int32)
extern "C" IL2CPP_METHOD_ATTR void FastFourierTransformation_Forward_m1F3C2F9FEBC0D4BAA0D4184A87F27CC5E1AF4250 (ComplexU5BU5D_tD82CA72F1EC0EB01B6F91CA7883CDAAA321D8308* ___data0, int32_t ___count1, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		int32_t L_0 = ___count1;
		V_0 = L_0;
		V_1 = 0;
		goto IL_0034;
	}

IL_0006:
	{
		ComplexU5BU5D_tD82CA72F1EC0EB01B6F91CA7883CDAAA321D8308* L_1 = ___data0;
		int32_t L_2 = V_1;
		NullCheck(L_1);
		Complex_t02AD1084BE99034B2267A3721BDD94453CAAB77C * L_3 = ((L_1)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_2)));
		float L_4 = L_3->get_Real_2();
		int32_t L_5 = V_0;
		L_3->set_Real_2(((float)((float)L_4/(float)(((float)((float)L_5))))));
		ComplexU5BU5D_tD82CA72F1EC0EB01B6F91CA7883CDAAA321D8308* L_6 = ___data0;
		int32_t L_7 = V_1;
		NullCheck(L_6);
		Complex_t02AD1084BE99034B2267A3721BDD94453CAAB77C * L_8 = ((L_6)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_7)));
		float L_9 = L_8->get_Imaginary_1();
		int32_t L_10 = V_0;
		L_8->set_Imaginary_1(((float)((float)L_9/(float)(((float)((float)L_10))))));
		int32_t L_11 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_11, (int32_t)1));
	}

IL_0034:
	{
		int32_t L_12 = V_1;
		int32_t L_13 = V_0;
		if ((((int32_t)L_12) < ((int32_t)L_13)))
		{
			goto IL_0006;
		}
	}
	{
		return;
	}
}
// System.Void CSCore.DSP.FastFourierTransformation::Inverse(CSCore.Utils.Complex[],System.Int32)
extern "C" IL2CPP_METHOD_ATTR void FastFourierTransformation_Inverse_m3C19BAFB05D2DB0028BA262E24A40EEE39029DEA (ComplexU5BU5D_tD82CA72F1EC0EB01B6F91CA7883CDAAA321D8308* ___data0, int32_t ___c1, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	{
		V_0 = 0;
		int32_t L_0 = ___c1;
		V_1 = ((int32_t)((int32_t)L_0>>(int32_t)1));
		V_2 = 0;
		goto IL_002e;
	}

IL_000a:
	{
		int32_t L_1 = V_2;
		int32_t L_2 = V_0;
		if ((((int32_t)L_1) >= ((int32_t)L_2)))
		{
			goto IL_0016;
		}
	}
	{
		ComplexU5BU5D_tD82CA72F1EC0EB01B6F91CA7883CDAAA321D8308* L_3 = ___data0;
		int32_t L_4 = V_2;
		int32_t L_5 = V_0;
		FastFourierTransformation_Swap_m5576B5EFE35F901B45CFDCFD3502E985785D61B0(L_3, L_4, L_5, /*hidden argument*/NULL);
	}

IL_0016:
	{
		int32_t L_6 = V_1;
		V_3 = L_6;
		goto IL_0022;
	}

IL_001a:
	{
		int32_t L_7 = V_0;
		int32_t L_8 = V_3;
		V_0 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_7, (int32_t)L_8));
		int32_t L_9 = V_3;
		V_3 = ((int32_t)((int32_t)L_9>>(int32_t)1));
	}

IL_0022:
	{
		int32_t L_10 = V_3;
		int32_t L_11 = V_0;
		if ((((int32_t)L_10) <= ((int32_t)L_11)))
		{
			goto IL_001a;
		}
	}
	{
		int32_t L_12 = V_0;
		int32_t L_13 = V_3;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_12, (int32_t)L_13));
		int32_t L_14 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_14, (int32_t)1));
	}

IL_002e:
	{
		int32_t L_15 = V_2;
		int32_t L_16 = ___c1;
		if ((((int32_t)L_15) < ((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_16, (int32_t)1)))))
		{
			goto IL_000a;
		}
	}
	{
		return;
	}
}
// System.Void CSCore.DSP.FastFourierTransformation::Swap(CSCore.Utils.Complex[],System.Int32,System.Int32)
extern "C" IL2CPP_METHOD_ATTR void FastFourierTransformation_Swap_m5576B5EFE35F901B45CFDCFD3502E985785D61B0 (ComplexU5BU5D_tD82CA72F1EC0EB01B6F91CA7883CDAAA321D8308* ___data0, int32_t ___index1, int32_t ___index22, const RuntimeMethod* method)
{
	Complex_t02AD1084BE99034B2267A3721BDD94453CAAB77C  V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		ComplexU5BU5D_tD82CA72F1EC0EB01B6F91CA7883CDAAA321D8308* L_0 = ___data0;
		int32_t L_1 = ___index1;
		NullCheck(L_0);
		V_0 = (*(Complex_t02AD1084BE99034B2267A3721BDD94453CAAB77C *)((L_0)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_1))));
		ComplexU5BU5D_tD82CA72F1EC0EB01B6F91CA7883CDAAA321D8308* L_2 = ___data0;
		int32_t L_3 = ___index1;
		NullCheck(L_2);
		ComplexU5BU5D_tD82CA72F1EC0EB01B6F91CA7883CDAAA321D8308* L_4 = ___data0;
		int32_t L_5 = ___index22;
		NullCheck(L_4);
		*(Complex_t02AD1084BE99034B2267A3721BDD94453CAAB77C *)((L_2)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_3))) = (*(Complex_t02AD1084BE99034B2267A3721BDD94453CAAB77C *)((L_4)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_5))));
		ComplexU5BU5D_tD82CA72F1EC0EB01B6F91CA7883CDAAA321D8308* L_6 = ___data0;
		int32_t L_7 = ___index22;
		NullCheck(L_6);
		Complex_t02AD1084BE99034B2267A3721BDD94453CAAB77C  L_8 = V_0;
		*(Complex_t02AD1084BE99034B2267A3721BDD94453CAAB77C *)((L_6)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_7))) = L_8;
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
// System.Void CSCore.DSP.FftProvider::.ctor(System.Int32,CSCore.DSP.FftSize)
extern "C" IL2CPP_METHOD_ATTR void FftProvider__ctor_m911E7B75B9B6FD7A687D84593B12F590581095A9 (FftProvider_t27F66E9A2BE537D97DE6F5F1D1CBDCA5EFDB55BD * __this, int32_t ___channels0, int32_t ___fftSize1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (FftProvider__ctor_m911E7B75B9B6FD7A687D84593B12F590581095A9_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	double V_0 = 0.0;
	{
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___channels0;
		if ((((int32_t)L_0) >= ((int32_t)1)))
		{
			goto IL_0015;
		}
	}
	{
		ArgumentOutOfRangeException_t94D19DF918A54511AEDF4784C9A08741BAD1DEDA * L_1 = (ArgumentOutOfRangeException_t94D19DF918A54511AEDF4784C9A08741BAD1DEDA *)il2cpp_codegen_object_new(ArgumentOutOfRangeException_t94D19DF918A54511AEDF4784C9A08741BAD1DEDA_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m6B36E60C989DC798A8B44556DB35960282B133A6(L_1, _stringLiteral3536F72AC0EC1D785E357FED37A3E83C4BC651E2, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, NULL, FftProvider__ctor_m911E7B75B9B6FD7A687D84593B12F590581095A9_RuntimeMethod_var);
	}

IL_0015:
	{
		int32_t L_2 = ___fftSize1;
		IL2CPP_RUNTIME_CLASS_INIT(Math_tFB388E53C7FDC6FCCF9A19ABF5A4E521FBD52E19_il2cpp_TypeInfo_var);
		double L_3 = Math_Log_m5C457D6A666677B3E260C571049528D5BE93B7AF((((double)((double)L_2))), (2.0), /*hidden argument*/NULL);
		V_0 = L_3;
		double L_4 = V_0;
		if ((!(((double)(fmod(L_4, (1.0)))) == ((double)(0.0)))))
		{
			goto IL_0048;
		}
	}
	{
		double L_5 = V_0;
		if ((!(((double)L_5) == ((double)(0.0)))))
		{
			goto IL_0053;
		}
	}

IL_0048:
	{
		ArgumentOutOfRangeException_t94D19DF918A54511AEDF4784C9A08741BAD1DEDA * L_6 = (ArgumentOutOfRangeException_t94D19DF918A54511AEDF4784C9A08741BAD1DEDA *)il2cpp_codegen_object_new(ArgumentOutOfRangeException_t94D19DF918A54511AEDF4784C9A08741BAD1DEDA_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m6B36E60C989DC798A8B44556DB35960282B133A6(L_6, _stringLiteralFAEFEAC24184D31D8340AB9059C59F7F8BFDFB36, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_6, NULL, FftProvider__ctor_m911E7B75B9B6FD7A687D84593B12F590581095A9_RuntimeMethod_var);
	}

IL_0053:
	{
		int32_t L_7 = ___channels0;
		__this->set__channels_0(L_7);
		int32_t L_8 = ___fftSize1;
		__this->set__fftSize_1(L_8);
		double L_9 = V_0;
		__this->set__fftSizeExponent_2((((int32_t)((int32_t)L_9))));
		int32_t L_10 = ___fftSize1;
		ComplexU5BU5D_tD82CA72F1EC0EB01B6F91CA7883CDAAA321D8308* L_11 = (ComplexU5BU5D_tD82CA72F1EC0EB01B6F91CA7883CDAAA321D8308*)SZArrayNew(ComplexU5BU5D_tD82CA72F1EC0EB01B6F91CA7883CDAAA321D8308_il2cpp_TypeInfo_var, (uint32_t)L_10);
		__this->set__storedSamples_3(L_11);
		return;
	}
}
// System.Void CSCore.DSP.FftProvider::Add(System.Single[],System.Int32)
extern "C" IL2CPP_METHOD_ATTR void FftProvider_Add_m2E017302A6BA8DD79BD550A2AABD7CC8BA51867C (FftProvider_t27F66E9A2BE537D97DE6F5F1D1CBDCA5EFDB55BD * __this, SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5* ___samples0, int32_t ___count1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (FftProvider_Add_m2E017302A6BA8DD79BD550A2AABD7CC8BA51867C_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5* L_0 = ___samples0;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t581DF992B1F3E0EC6EFB30CC5DC43519A79B27AD * L_1 = (ArgumentNullException_t581DF992B1F3E0EC6EFB30CC5DC43519A79B27AD *)il2cpp_codegen_object_new(ArgumentNullException_t581DF992B1F3E0EC6EFB30CC5DC43519A79B27AD_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_mEE0C0D6FCB2D08CD7967DBB1329A0854BBED49ED(L_1, _stringLiteral433CDFECFBC5711BE2EE148BAA19038DE415879B, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, NULL, FftProvider_Add_m2E017302A6BA8DD79BD550A2AABD7CC8BA51867C_RuntimeMethod_var);
	}

IL_000e:
	{
		int32_t L_2 = ___count1;
		int32_t L_3 = ___count1;
		int32_t L_4 = __this->get__channels_0();
		___count1 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_2, (int32_t)((int32_t)((int32_t)L_3%(int32_t)L_4))));
		int32_t L_5 = ___count1;
		SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5* L_6 = ___samples0;
		NullCheck(L_6);
		if ((((int32_t)L_5) <= ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_6)->max_length)))))))
		{
			goto IL_002b;
		}
	}
	{
		ArgumentOutOfRangeException_t94D19DF918A54511AEDF4784C9A08741BAD1DEDA * L_7 = (ArgumentOutOfRangeException_t94D19DF918A54511AEDF4784C9A08741BAD1DEDA *)il2cpp_codegen_object_new(ArgumentOutOfRangeException_t94D19DF918A54511AEDF4784C9A08741BAD1DEDA_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m6B36E60C989DC798A8B44556DB35960282B133A6(L_7, _stringLiteralEE9F38E186BA06F57B7B74D7E626B94E13CE2556, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_7, NULL, FftProvider_Add_m2E017302A6BA8DD79BD550A2AABD7CC8BA51867C_RuntimeMethod_var);
	}

IL_002b:
	{
		int32_t L_8 = ___count1;
		int32_t L_9 = __this->get__channels_0();
		V_0 = ((int32_t)((int32_t)L_8/(int32_t)L_9));
		V_1 = 0;
		goto IL_00a5;
	}

IL_0038:
	{
		ComplexU5BU5D_tD82CA72F1EC0EB01B6F91CA7883CDAAA321D8308* L_10 = __this->get__storedSamples_3();
		int32_t L_11 = __this->get__currentSampleOffset_4();
		NullCheck(L_10);
		((L_10)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_11)))->set_Imaginary_1((0.0f));
		ComplexU5BU5D_tD82CA72F1EC0EB01B6F91CA7883CDAAA321D8308* L_12 = __this->get__storedSamples_3();
		int32_t L_13 = __this->get__currentSampleOffset_4();
		NullCheck(L_12);
		SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5* L_14 = ___samples0;
		int32_t L_15 = V_1;
		int32_t L_16 = __this->get__channels_0();
		float L_17 = FftProvider_MergeSamples_m86F1417EA1DDCD1CA73090C267074985A32BD668(__this, L_14, L_15, L_16, /*hidden argument*/NULL);
		((L_12)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_13)))->set_Real_2(L_17);
		int32_t L_18 = __this->get__currentSampleOffset_4();
		__this->set__currentSampleOffset_4(((int32_t)il2cpp_codegen_add((int32_t)L_18, (int32_t)1)));
		int32_t L_19 = __this->get__currentSampleOffset_4();
		ComplexU5BU5D_tD82CA72F1EC0EB01B6F91CA7883CDAAA321D8308* L_20 = __this->get__storedSamples_3();
		NullCheck(L_20);
		if ((((int32_t)L_19) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_20)->max_length)))))))
		{
			goto IL_009c;
		}
	}
	{
		__this->set__currentSampleOffset_4(0);
	}

IL_009c:
	{
		int32_t L_21 = V_1;
		int32_t L_22 = __this->get__channels_0();
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_21, (int32_t)L_22));
	}

IL_00a5:
	{
		int32_t L_23 = V_1;
		int32_t L_24 = V_0;
		if ((((int32_t)L_23) < ((int32_t)L_24)))
		{
			goto IL_0038;
		}
	}
	{
		int32_t L_25 = ___count1;
		il2cpp_codegen_memory_barrier();
		__this->set__newDataAvailable_5(((((int32_t)L_25) > ((int32_t)0))? 1 : 0));
		return;
	}
}
// System.Boolean CSCore.DSP.FftProvider::GetFftData(CSCore.Utils.Complex[])
extern "C" IL2CPP_METHOD_ATTR bool FftProvider_GetFftData_mC85D9A8CAC2DD6557E6A87462BDAD80433613EBC (FftProvider_t27F66E9A2BE537D97DE6F5F1D1CBDCA5EFDB55BD * __this, ComplexU5BU5D_tD82CA72F1EC0EB01B6F91CA7883CDAAA321D8308* ___fftResultBuffer0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (FftProvider_GetFftData_mC85D9A8CAC2DD6557E6A87462BDAD80433613EBC_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	ComplexU5BU5D_tD82CA72F1EC0EB01B6F91CA7883CDAAA321D8308* V_0 = NULL;
	bool V_1 = false;
	{
		ComplexU5BU5D_tD82CA72F1EC0EB01B6F91CA7883CDAAA321D8308* L_0 = ___fftResultBuffer0;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t581DF992B1F3E0EC6EFB30CC5DC43519A79B27AD * L_1 = (ArgumentNullException_t581DF992B1F3E0EC6EFB30CC5DC43519A79B27AD *)il2cpp_codegen_object_new(ArgumentNullException_t581DF992B1F3E0EC6EFB30CC5DC43519A79B27AD_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_mEE0C0D6FCB2D08CD7967DBB1329A0854BBED49ED(L_1, _stringLiteral85FEC174D69448BBAA82569D0F7DA6A2E385517F, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, NULL, FftProvider_GetFftData_mC85D9A8CAC2DD6557E6A87462BDAD80433613EBC_RuntimeMethod_var);
	}

IL_000e:
	{
		ComplexU5BU5D_tD82CA72F1EC0EB01B6F91CA7883CDAAA321D8308* L_2 = ___fftResultBuffer0;
		V_0 = L_2;
		ComplexU5BU5D_tD82CA72F1EC0EB01B6F91CA7883CDAAA321D8308* L_3 = __this->get__storedSamples_3();
		ComplexU5BU5D_tD82CA72F1EC0EB01B6F91CA7883CDAAA321D8308* L_4 = V_0;
		ComplexU5BU5D_tD82CA72F1EC0EB01B6F91CA7883CDAAA321D8308* L_5 = __this->get__storedSamples_3();
		NullCheck(L_5);
		Array_Copy_m2D96731C600DE8A167348CA8BA796344E64F7434((RuntimeArray *)(RuntimeArray *)L_3, (RuntimeArray *)(RuntimeArray *)L_4, (((int32_t)((int32_t)(((RuntimeArray *)L_5)->max_length)))), /*hidden argument*/NULL);
		ComplexU5BU5D_tD82CA72F1EC0EB01B6F91CA7883CDAAA321D8308* L_6 = V_0;
		int32_t L_7 = __this->get__fftSizeExponent_2();
		FastFourierTransformation_Fft_mFD9ED02CA9319E300F3910D25C98E259CE3D801B(L_6, L_7, 0, /*hidden argument*/NULL);
		bool L_8 = __this->get__newDataAvailable_5();
		il2cpp_codegen_memory_barrier();
		V_1 = L_8;
		il2cpp_codegen_memory_barrier();
		__this->set__newDataAvailable_5(0);
		bool L_9 = V_1;
		return L_9;
	}
}
// System.Boolean CSCore.DSP.FftProvider::GetFftData(System.Single[])
extern "C" IL2CPP_METHOD_ATTR bool FftProvider_GetFftData_m89A6F5CF4C13EFA275663883AC352B2C001EDBD3 (FftProvider_t27F66E9A2BE537D97DE6F5F1D1CBDCA5EFDB55BD * __this, SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5* ___fftResultBuffer0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (FftProvider_GetFftData_m89A6F5CF4C13EFA275663883AC352B2C001EDBD3_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	ComplexU5BU5D_tD82CA72F1EC0EB01B6F91CA7883CDAAA321D8308* V_0 = NULL;
	bool V_1 = false;
	int32_t V_2 = 0;
	{
		SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5* L_0 = ___fftResultBuffer0;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t581DF992B1F3E0EC6EFB30CC5DC43519A79B27AD * L_1 = (ArgumentNullException_t581DF992B1F3E0EC6EFB30CC5DC43519A79B27AD *)il2cpp_codegen_object_new(ArgumentNullException_t581DF992B1F3E0EC6EFB30CC5DC43519A79B27AD_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_mEE0C0D6FCB2D08CD7967DBB1329A0854BBED49ED(L_1, _stringLiteral85FEC174D69448BBAA82569D0F7DA6A2E385517F, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, NULL, FftProvider_GetFftData_m89A6F5CF4C13EFA275663883AC352B2C001EDBD3_RuntimeMethod_var);
	}

IL_000e:
	{
		SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5* L_2 = ___fftResultBuffer0;
		NullCheck(L_2);
		int32_t L_3 = __this->get__fftSize_1();
		if ((((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_2)->max_length))))) >= ((int32_t)L_3)))
		{
			goto IL_0029;
		}
	}
	{
		ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1 * L_4 = (ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1 *)il2cpp_codegen_object_new(ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m26DC3463C6F3C98BF33EA39598DD2B32F0249CA8(L_4, _stringLiteral6A613FCDEE94233E3690028B3FB36B53BA6B5998, _stringLiteral85FEC174D69448BBAA82569D0F7DA6A2E385517F, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, NULL, FftProvider_GetFftData_m89A6F5CF4C13EFA275663883AC352B2C001EDBD3_RuntimeMethod_var);
	}

IL_0029:
	{
		int32_t L_5 = __this->get__fftSize_1();
		ComplexU5BU5D_tD82CA72F1EC0EB01B6F91CA7883CDAAA321D8308* L_6 = (ComplexU5BU5D_tD82CA72F1EC0EB01B6F91CA7883CDAAA321D8308*)SZArrayNew(ComplexU5BU5D_tD82CA72F1EC0EB01B6F91CA7883CDAAA321D8308_il2cpp_TypeInfo_var, (uint32_t)L_5);
		V_0 = L_6;
		bool L_7 = __this->get__newDataAvailable_5();
		il2cpp_codegen_memory_barrier();
		V_1 = L_7;
		ComplexU5BU5D_tD82CA72F1EC0EB01B6F91CA7883CDAAA321D8308* L_8 = V_0;
		VirtFuncInvoker1< bool, ComplexU5BU5D_tD82CA72F1EC0EB01B6F91CA7883CDAAA321D8308* >::Invoke(5 /* System.Boolean CSCore.DSP.FftProvider::GetFftData(CSCore.Utils.Complex[]) */, __this, L_8);
		V_2 = 0;
		goto IL_0063;
	}

IL_004a:
	{
		SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5* L_9 = ___fftResultBuffer0;
		int32_t L_10 = V_2;
		ComplexU5BU5D_tD82CA72F1EC0EB01B6F91CA7883CDAAA321D8308* L_11 = V_0;
		int32_t L_12 = V_2;
		NullCheck(L_11);
		IL2CPP_RUNTIME_CLASS_INIT(Complex_t02AD1084BE99034B2267A3721BDD94453CAAB77C_il2cpp_TypeInfo_var);
		float L_13 = Complex_op_Implicit_mC052F5BDB4FB410D16868AEE5C9390AD199C110B((*(Complex_t02AD1084BE99034B2267A3721BDD94453CAAB77C *)((L_11)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_12)))), /*hidden argument*/NULL);
		NullCheck(L_9);
		(L_9)->SetAt(static_cast<il2cpp_array_size_t>(L_10), (float)(((float)((float)L_13))));
		int32_t L_14 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_14, (int32_t)1));
	}

IL_0063:
	{
		int32_t L_15 = V_2;
		ComplexU5BU5D_tD82CA72F1EC0EB01B6F91CA7883CDAAA321D8308* L_16 = V_0;
		NullCheck(L_16);
		if ((((int32_t)L_15) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_16)->max_length)))))))
		{
			goto IL_004a;
		}
	}
	{
		bool L_17 = V_1;
		return L_17;
	}
}
// System.Single CSCore.DSP.FftProvider::MergeSamples(System.Single[],System.Int32,System.Int32)
extern "C" IL2CPP_METHOD_ATTR float FftProvider_MergeSamples_m86F1417EA1DDCD1CA73090C267074985A32BD668 (FftProvider_t27F66E9A2BE537D97DE6F5F1D1CBDCA5EFDB55BD * __this, SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5* ___samples0, int32_t ___i1, int32_t ___channels2, const RuntimeMethod* method)
{
	float V_0 = 0.0f;
	int32_t V_1 = 0;
	{
		int32_t L_0 = ___channels2;
		if ((!(((uint32_t)L_0) == ((uint32_t)1))))
		{
			goto IL_0008;
		}
	}
	{
		SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5* L_1 = ___samples0;
		int32_t L_2 = ___i1;
		NullCheck(L_1);
		int32_t L_3 = L_2;
		float L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		return L_4;
	}

IL_0008:
	{
		int32_t L_5 = ___channels2;
		if ((!(((uint32_t)L_5) == ((uint32_t)2))))
		{
			goto IL_001c;
		}
	}
	{
		SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5* L_6 = ___samples0;
		int32_t L_7 = ___i1;
		NullCheck(L_6);
		int32_t L_8 = L_7;
		float L_9 = (L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_8));
		SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5* L_10 = ___samples0;
		int32_t L_11 = ___i1;
		NullCheck(L_10);
		int32_t L_12 = ((int32_t)il2cpp_codegen_add((int32_t)L_11, (int32_t)1));
		float L_13 = (L_10)->GetAt(static_cast<il2cpp_array_size_t>(L_12));
		return ((float)((float)((float)il2cpp_codegen_add((float)L_9, (float)L_13))/(float)(2.0f)));
	}

IL_001c:
	{
		int32_t L_14 = ___channels2;
		if ((!(((uint32_t)L_14) == ((uint32_t)3))))
		{
			goto IL_0036;
		}
	}
	{
		SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5* L_15 = ___samples0;
		int32_t L_16 = ___i1;
		NullCheck(L_15);
		int32_t L_17 = L_16;
		float L_18 = (L_15)->GetAt(static_cast<il2cpp_array_size_t>(L_17));
		SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5* L_19 = ___samples0;
		int32_t L_20 = ___i1;
		NullCheck(L_19);
		int32_t L_21 = ((int32_t)il2cpp_codegen_add((int32_t)L_20, (int32_t)1));
		float L_22 = (L_19)->GetAt(static_cast<il2cpp_array_size_t>(L_21));
		SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5* L_23 = ___samples0;
		int32_t L_24 = ___i1;
		NullCheck(L_23);
		int32_t L_25 = ((int32_t)il2cpp_codegen_add((int32_t)L_24, (int32_t)2));
		float L_26 = (L_23)->GetAt(static_cast<il2cpp_array_size_t>(L_25));
		return ((float)((float)((float)il2cpp_codegen_add((float)((float)il2cpp_codegen_add((float)L_18, (float)L_22)), (float)L_26))/(float)(3.0f)));
	}

IL_0036:
	{
		int32_t L_27 = ___channels2;
		if ((!(((uint32_t)L_27) == ((uint32_t)4))))
		{
			goto IL_0056;
		}
	}
	{
		SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5* L_28 = ___samples0;
		int32_t L_29 = ___i1;
		NullCheck(L_28);
		int32_t L_30 = L_29;
		float L_31 = (L_28)->GetAt(static_cast<il2cpp_array_size_t>(L_30));
		SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5* L_32 = ___samples0;
		int32_t L_33 = ___i1;
		NullCheck(L_32);
		int32_t L_34 = ((int32_t)il2cpp_codegen_add((int32_t)L_33, (int32_t)1));
		float L_35 = (L_32)->GetAt(static_cast<il2cpp_array_size_t>(L_34));
		SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5* L_36 = ___samples0;
		int32_t L_37 = ___i1;
		NullCheck(L_36);
		int32_t L_38 = ((int32_t)il2cpp_codegen_add((int32_t)L_37, (int32_t)2));
		float L_39 = (L_36)->GetAt(static_cast<il2cpp_array_size_t>(L_38));
		SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5* L_40 = ___samples0;
		int32_t L_41 = ___i1;
		NullCheck(L_40);
		int32_t L_42 = ((int32_t)il2cpp_codegen_add((int32_t)L_41, (int32_t)3));
		float L_43 = (L_40)->GetAt(static_cast<il2cpp_array_size_t>(L_42));
		return ((float)((float)((float)il2cpp_codegen_add((float)((float)il2cpp_codegen_add((float)((float)il2cpp_codegen_add((float)L_31, (float)L_35)), (float)L_39)), (float)L_43))/(float)(4.0f)));
	}

IL_0056:
	{
		int32_t L_44 = ___channels2;
		if ((!(((uint32_t)L_44) == ((uint32_t)5))))
		{
			goto IL_007c;
		}
	}
	{
		SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5* L_45 = ___samples0;
		int32_t L_46 = ___i1;
		NullCheck(L_45);
		int32_t L_47 = L_46;
		float L_48 = (L_45)->GetAt(static_cast<il2cpp_array_size_t>(L_47));
		SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5* L_49 = ___samples0;
		int32_t L_50 = ___i1;
		NullCheck(L_49);
		int32_t L_51 = ((int32_t)il2cpp_codegen_add((int32_t)L_50, (int32_t)1));
		float L_52 = (L_49)->GetAt(static_cast<il2cpp_array_size_t>(L_51));
		SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5* L_53 = ___samples0;
		int32_t L_54 = ___i1;
		NullCheck(L_53);
		int32_t L_55 = ((int32_t)il2cpp_codegen_add((int32_t)L_54, (int32_t)2));
		float L_56 = (L_53)->GetAt(static_cast<il2cpp_array_size_t>(L_55));
		SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5* L_57 = ___samples0;
		int32_t L_58 = ___i1;
		NullCheck(L_57);
		int32_t L_59 = ((int32_t)il2cpp_codegen_add((int32_t)L_58, (int32_t)3));
		float L_60 = (L_57)->GetAt(static_cast<il2cpp_array_size_t>(L_59));
		SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5* L_61 = ___samples0;
		int32_t L_62 = ___i1;
		NullCheck(L_61);
		int32_t L_63 = ((int32_t)il2cpp_codegen_add((int32_t)L_62, (int32_t)4));
		float L_64 = (L_61)->GetAt(static_cast<il2cpp_array_size_t>(L_63));
		return ((float)((float)((float)il2cpp_codegen_add((float)((float)il2cpp_codegen_add((float)((float)il2cpp_codegen_add((float)((float)il2cpp_codegen_add((float)L_48, (float)L_52)), (float)L_56)), (float)L_60)), (float)L_64))/(float)(5.0f)));
	}

IL_007c:
	{
		int32_t L_65 = ___channels2;
		if ((!(((uint32_t)L_65) == ((uint32_t)6))))
		{
			goto IL_00a8;
		}
	}
	{
		SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5* L_66 = ___samples0;
		int32_t L_67 = ___i1;
		NullCheck(L_66);
		int32_t L_68 = L_67;
		float L_69 = (L_66)->GetAt(static_cast<il2cpp_array_size_t>(L_68));
		SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5* L_70 = ___samples0;
		int32_t L_71 = ___i1;
		NullCheck(L_70);
		int32_t L_72 = ((int32_t)il2cpp_codegen_add((int32_t)L_71, (int32_t)1));
		float L_73 = (L_70)->GetAt(static_cast<il2cpp_array_size_t>(L_72));
		SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5* L_74 = ___samples0;
		int32_t L_75 = ___i1;
		NullCheck(L_74);
		int32_t L_76 = ((int32_t)il2cpp_codegen_add((int32_t)L_75, (int32_t)2));
		float L_77 = (L_74)->GetAt(static_cast<il2cpp_array_size_t>(L_76));
		SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5* L_78 = ___samples0;
		int32_t L_79 = ___i1;
		NullCheck(L_78);
		int32_t L_80 = ((int32_t)il2cpp_codegen_add((int32_t)L_79, (int32_t)3));
		float L_81 = (L_78)->GetAt(static_cast<il2cpp_array_size_t>(L_80));
		SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5* L_82 = ___samples0;
		int32_t L_83 = ___i1;
		NullCheck(L_82);
		int32_t L_84 = ((int32_t)il2cpp_codegen_add((int32_t)L_83, (int32_t)4));
		float L_85 = (L_82)->GetAt(static_cast<il2cpp_array_size_t>(L_84));
		SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5* L_86 = ___samples0;
		int32_t L_87 = ___i1;
		NullCheck(L_86);
		int32_t L_88 = ((int32_t)il2cpp_codegen_add((int32_t)L_87, (int32_t)5));
		float L_89 = (L_86)->GetAt(static_cast<il2cpp_array_size_t>(L_88));
		return ((float)((float)((float)il2cpp_codegen_add((float)((float)il2cpp_codegen_add((float)((float)il2cpp_codegen_add((float)((float)il2cpp_codegen_add((float)((float)il2cpp_codegen_add((float)L_69, (float)L_73)), (float)L_77)), (float)L_81)), (float)L_85)), (float)L_89))/(float)(6.0f)));
	}

IL_00a8:
	{
		V_0 = (0.0f);
		int32_t L_90 = ___i1;
		V_1 = L_90;
		goto IL_00c0;
	}

IL_00b2:
	{
		float L_91 = V_0;
		SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5* L_92 = ___samples0;
		int32_t L_93 = V_1;
		int32_t L_94 = L_93;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_94, (int32_t)1));
		NullCheck(L_92);
		int32_t L_95 = L_94;
		float L_96 = (L_92)->GetAt(static_cast<il2cpp_array_size_t>(L_95));
		V_0 = ((float)il2cpp_codegen_add((float)L_91, (float)L_96));
		int32_t L_97 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_97, (int32_t)1));
	}

IL_00c0:
	{
		int32_t L_98 = V_1;
		int32_t L_99 = ___channels2;
		if ((((int32_t)L_98) < ((int32_t)L_99)))
		{
			goto IL_00b2;
		}
	}
	{
		float L_100 = V_0;
		int32_t L_101 = ___channels2;
		return ((float)((float)L_100/(float)(((float)((float)L_101)))));
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
// System.Void CSCore.DSP.HighpassFilter::.ctor(System.Int32,System.Double)
extern "C" IL2CPP_METHOD_ATTR void HighpassFilter__ctor_mB7AEE29ECCD5DB2B68B155DD94665B8F97B3575D (HighpassFilter_tC7C2DE56E9FCB6198329F7F3A9F9AE8D8781824E * __this, int32_t ___sampleRate0, double ___frequency1, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___sampleRate0;
		double L_1 = ___frequency1;
		BiQuad__ctor_m33D9E2005DF3B1643404B60F7696AC4692E2F2BA(__this, L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void CSCore.DSP.HighpassFilter::CalculateBiQuadCoefficients()
extern "C" IL2CPP_METHOD_ATTR void HighpassFilter_CalculateBiQuadCoefficients_m6ED9C2180D5AD4A7BF110E137D7F247FBBCAA874 (HighpassFilter_tC7C2DE56E9FCB6198329F7F3A9F9AE8D8781824E * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (HighpassFilter_CalculateBiQuadCoefficients_m6ED9C2180D5AD4A7BF110E137D7F247FBBCAA874_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	double V_0 = 0.0;
	double V_1 = 0.0;
	{
		double L_0 = BiQuad_get_Frequency_mFBAD52E25F9FAE75A308E33364453F3C7FA7BCED(__this, /*hidden argument*/NULL);
		int32_t L_1 = BiQuad_get_SampleRate_m5D09BF8DF4D14EB6E518E4257A73F8CC8377F550(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Math_tFB388E53C7FDC6FCCF9A19ABF5A4E521FBD52E19_il2cpp_TypeInfo_var);
		double L_2 = tan(((double)((double)((double)il2cpp_codegen_multiply((double)(3.1415926535897931), (double)L_0))/(double)(((double)((double)L_1))))));
		V_0 = L_2;
		double L_3 = V_0;
		double L_4 = BiQuad_get_Q_m5CF401F951092AC129B8B3331F157651FA54759F(__this, /*hidden argument*/NULL);
		double L_5 = V_0;
		double L_6 = V_0;
		V_1 = ((double)((double)(1.0)/(double)((double)il2cpp_codegen_add((double)((double)il2cpp_codegen_add((double)(1.0), (double)((double)((double)L_3/(double)L_4)))), (double)((double)il2cpp_codegen_multiply((double)L_5, (double)L_6))))));
		double L_7 = V_1;
		((BiQuad_tC41F181D101D795D9651C9E5E9C90A20E3F329DC *)__this)->set_A0_0(((double)il2cpp_codegen_multiply((double)(1.0), (double)L_7)));
		double L_8 = ((BiQuad_tC41F181D101D795D9651C9E5E9C90A20E3F329DC *)__this)->get_A0_0();
		((BiQuad_tC41F181D101D795D9651C9E5E9C90A20E3F329DC *)__this)->set_A1_1(((double)il2cpp_codegen_multiply((double)(-2.0), (double)L_8)));
		double L_9 = ((BiQuad_tC41F181D101D795D9651C9E5E9C90A20E3F329DC *)__this)->get_A0_0();
		((BiQuad_tC41F181D101D795D9651C9E5E9C90A20E3F329DC *)__this)->set_A2_2(L_9);
		double L_10 = V_0;
		double L_11 = V_0;
		double L_12 = V_1;
		((BiQuad_tC41F181D101D795D9651C9E5E9C90A20E3F329DC *)__this)->set_B1_3(((double)il2cpp_codegen_multiply((double)((double)il2cpp_codegen_multiply((double)(2.0), (double)((double)il2cpp_codegen_subtract((double)((double)il2cpp_codegen_multiply((double)L_10, (double)L_11)), (double)(1.0))))), (double)L_12)));
		double L_13 = V_0;
		double L_14 = BiQuad_get_Q_m5CF401F951092AC129B8B3331F157651FA54759F(__this, /*hidden argument*/NULL);
		double L_15 = V_0;
		double L_16 = V_0;
		double L_17 = V_1;
		((BiQuad_tC41F181D101D795D9651C9E5E9C90A20E3F329DC *)__this)->set_B2_4(((double)il2cpp_codegen_multiply((double)((double)il2cpp_codegen_add((double)((double)il2cpp_codegen_subtract((double)(1.0), (double)((double)((double)L_13/(double)L_14)))), (double)((double)il2cpp_codegen_multiply((double)L_15, (double)L_16)))), (double)L_17)));
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
// System.Void CSCore.DSP.LowpassFilter::.ctor(System.Int32,System.Double)
extern "C" IL2CPP_METHOD_ATTR void LowpassFilter__ctor_mDFF9BD8E14E2F2E1427B342B7FA4886B31FD4176 (LowpassFilter_tF7E0C1DEDFCAEE414F43C206256F4B11E0CA93D5 * __this, int32_t ___sampleRate0, double ___frequency1, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___sampleRate0;
		double L_1 = ___frequency1;
		BiQuad__ctor_m33D9E2005DF3B1643404B60F7696AC4692E2F2BA(__this, L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void CSCore.DSP.LowpassFilter::CalculateBiQuadCoefficients()
extern "C" IL2CPP_METHOD_ATTR void LowpassFilter_CalculateBiQuadCoefficients_mCCAEA785E891B8D0A6EF94C055418D4D63EDFC7D (LowpassFilter_tF7E0C1DEDFCAEE414F43C206256F4B11E0CA93D5 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (LowpassFilter_CalculateBiQuadCoefficients_mCCAEA785E891B8D0A6EF94C055418D4D63EDFC7D_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	double V_0 = 0.0;
	double V_1 = 0.0;
	{
		double L_0 = BiQuad_get_Frequency_mFBAD52E25F9FAE75A308E33364453F3C7FA7BCED(__this, /*hidden argument*/NULL);
		int32_t L_1 = BiQuad_get_SampleRate_m5D09BF8DF4D14EB6E518E4257A73F8CC8377F550(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Math_tFB388E53C7FDC6FCCF9A19ABF5A4E521FBD52E19_il2cpp_TypeInfo_var);
		double L_2 = tan(((double)((double)((double)il2cpp_codegen_multiply((double)(3.1415926535897931), (double)L_0))/(double)(((double)((double)L_1))))));
		V_0 = L_2;
		double L_3 = V_0;
		double L_4 = BiQuad_get_Q_m5CF401F951092AC129B8B3331F157651FA54759F(__this, /*hidden argument*/NULL);
		double L_5 = V_0;
		double L_6 = V_0;
		V_1 = ((double)((double)(1.0)/(double)((double)il2cpp_codegen_add((double)((double)il2cpp_codegen_add((double)(1.0), (double)((double)((double)L_3/(double)L_4)))), (double)((double)il2cpp_codegen_multiply((double)L_5, (double)L_6))))));
		double L_7 = V_0;
		double L_8 = V_0;
		double L_9 = V_1;
		((BiQuad_tC41F181D101D795D9651C9E5E9C90A20E3F329DC *)__this)->set_A0_0(((double)il2cpp_codegen_multiply((double)((double)il2cpp_codegen_multiply((double)L_7, (double)L_8)), (double)L_9)));
		double L_10 = ((BiQuad_tC41F181D101D795D9651C9E5E9C90A20E3F329DC *)__this)->get_A0_0();
		((BiQuad_tC41F181D101D795D9651C9E5E9C90A20E3F329DC *)__this)->set_A1_1(((double)il2cpp_codegen_multiply((double)(2.0), (double)L_10)));
		double L_11 = ((BiQuad_tC41F181D101D795D9651C9E5E9C90A20E3F329DC *)__this)->get_A0_0();
		((BiQuad_tC41F181D101D795D9651C9E5E9C90A20E3F329DC *)__this)->set_A2_2(L_11);
		double L_12 = V_0;
		double L_13 = V_0;
		double L_14 = V_1;
		((BiQuad_tC41F181D101D795D9651C9E5E9C90A20E3F329DC *)__this)->set_B1_3(((double)il2cpp_codegen_multiply((double)((double)il2cpp_codegen_multiply((double)(2.0), (double)((double)il2cpp_codegen_subtract((double)((double)il2cpp_codegen_multiply((double)L_12, (double)L_13)), (double)(1.0))))), (double)L_14)));
		double L_15 = V_0;
		double L_16 = BiQuad_get_Q_m5CF401F951092AC129B8B3331F157651FA54759F(__this, /*hidden argument*/NULL);
		double L_17 = V_0;
		double L_18 = V_0;
		double L_19 = V_1;
		((BiQuad_tC41F181D101D795D9651C9E5E9C90A20E3F329DC *)__this)->set_B2_4(((double)il2cpp_codegen_multiply((double)((double)il2cpp_codegen_add((double)((double)il2cpp_codegen_subtract((double)(1.0), (double)((double)((double)L_15/(double)L_16)))), (double)((double)il2cpp_codegen_multiply((double)L_17, (double)L_18)))), (double)L_19)));
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
// System.Void CSCore.Utils.Complex::.ctor(System.Single,System.Single)
extern "C" IL2CPP_METHOD_ATTR void Complex__ctor_m5A4C360047A6B9466C837C016ED1FF5E6857C165 (Complex_t02AD1084BE99034B2267A3721BDD94453CAAB77C * __this, float ___real0, float ___img1, const RuntimeMethod* method)
{
	{
		float L_0 = ___real0;
		__this->set_Real_2(L_0);
		float L_1 = ___img1;
		__this->set_Imaginary_1(L_1);
		return;
	}
}
extern "C"  void Complex__ctor_m5A4C360047A6B9466C837C016ED1FF5E6857C165_AdjustorThunk (RuntimeObject * __this, float ___real0, float ___img1, const RuntimeMethod* method)
{
	Complex_t02AD1084BE99034B2267A3721BDD94453CAAB77C * _thisAdjusted = reinterpret_cast<Complex_t02AD1084BE99034B2267A3721BDD94453CAAB77C *>(__this + 1);
	Complex__ctor_m5A4C360047A6B9466C837C016ED1FF5E6857C165(_thisAdjusted, ___real0, ___img1, method);
}
// System.Double CSCore.Utils.Complex::get_Value()
extern "C" IL2CPP_METHOD_ATTR double Complex_get_Value_m0F1C26CE88D34B658B5012023D33F18590C038B3 (Complex_t02AD1084BE99034B2267A3721BDD94453CAAB77C * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Complex_get_Value_m0F1C26CE88D34B658B5012023D33F18590C038B3_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		float L_0 = __this->get_Real_2();
		float L_1 = __this->get_Real_2();
		float L_2 = __this->get_Imaginary_1();
		float L_3 = __this->get_Imaginary_1();
		IL2CPP_RUNTIME_CLASS_INIT(Math_tFB388E53C7FDC6FCCF9A19ABF5A4E521FBD52E19_il2cpp_TypeInfo_var);
		double L_4 = sqrt((((double)((double)((float)il2cpp_codegen_add((float)((float)il2cpp_codegen_multiply((float)L_0, (float)L_1)), (float)((float)il2cpp_codegen_multiply((float)L_2, (float)L_3))))))));
		return L_4;
	}
}
extern "C"  double Complex_get_Value_m0F1C26CE88D34B658B5012023D33F18590C038B3_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	Complex_t02AD1084BE99034B2267A3721BDD94453CAAB77C * _thisAdjusted = reinterpret_cast<Complex_t02AD1084BE99034B2267A3721BDD94453CAAB77C *>(__this + 1);
	return Complex_get_Value_m0F1C26CE88D34B658B5012023D33F18590C038B3(_thisAdjusted, method);
}
// System.Single CSCore.Utils.Complex::op_Implicit(CSCore.Utils.Complex)
extern "C" IL2CPP_METHOD_ATTR float Complex_op_Implicit_mC052F5BDB4FB410D16868AEE5C9390AD199C110B (Complex_t02AD1084BE99034B2267A3721BDD94453CAAB77C  ___complex0, const RuntimeMethod* method)
{
	{
		double L_0 = Complex_get_Value_m0F1C26CE88D34B658B5012023D33F18590C038B3((Complex_t02AD1084BE99034B2267A3721BDD94453CAAB77C *)(&___complex0), /*hidden argument*/NULL);
		return (((float)((float)L_0)));
	}
}
// System.Boolean CSCore.Utils.Complex::Equals(CSCore.Utils.Complex)
extern "C" IL2CPP_METHOD_ATTR bool Complex_Equals_mA47EF94D0222BAC7BCD6E81743E6F207CB0E2DEE (Complex_t02AD1084BE99034B2267A3721BDD94453CAAB77C * __this, Complex_t02AD1084BE99034B2267A3721BDD94453CAAB77C  ___other0, const RuntimeMethod* method)
{
	{
		float* L_0 = __this->get_address_of_Imaginary_1();
		float L_1 = (&___other0)->get_Imaginary_1();
		bool L_2 = Single_Equals_mCDFA927E712FBA83D076864E16C77E39A6E66FE7((float*)L_0, L_1, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_0027;
		}
	}
	{
		float* L_3 = __this->get_address_of_Real_2();
		float L_4 = (&___other0)->get_Real_2();
		bool L_5 = Single_Equals_mCDFA927E712FBA83D076864E16C77E39A6E66FE7((float*)L_3, L_4, /*hidden argument*/NULL);
		return L_5;
	}

IL_0027:
	{
		return (bool)0;
	}
}
extern "C"  bool Complex_Equals_mA47EF94D0222BAC7BCD6E81743E6F207CB0E2DEE_AdjustorThunk (RuntimeObject * __this, Complex_t02AD1084BE99034B2267A3721BDD94453CAAB77C  ___other0, const RuntimeMethod* method)
{
	Complex_t02AD1084BE99034B2267A3721BDD94453CAAB77C * _thisAdjusted = reinterpret_cast<Complex_t02AD1084BE99034B2267A3721BDD94453CAAB77C *>(__this + 1);
	return Complex_Equals_mA47EF94D0222BAC7BCD6E81743E6F207CB0E2DEE(_thisAdjusted, ___other0, method);
}
// System.Boolean CSCore.Utils.Complex::Equals(System.Object)
extern "C" IL2CPP_METHOD_ATTR bool Complex_Equals_mAAC29EDDA5F5C16D0D416EEC7BA27A84ABEDD030 (Complex_t02AD1084BE99034B2267A3721BDD94453CAAB77C * __this, RuntimeObject * ___obj0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Complex_Equals_mAAC29EDDA5F5C16D0D416EEC7BA27A84ABEDD030_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject * L_0 = ___obj0;
		bool L_1 = il2cpp_codegen_object_reference_equals(NULL, L_0);
		if (!L_1)
		{
			goto IL_000b;
		}
	}
	{
		return (bool)0;
	}

IL_000b:
	{
		RuntimeObject * L_2 = ___obj0;
		if (!((RuntimeObject *)IsInstSealed((RuntimeObject*)L_2, Complex_t02AD1084BE99034B2267A3721BDD94453CAAB77C_il2cpp_TypeInfo_var)))
		{
			goto IL_0020;
		}
	}
	{
		RuntimeObject * L_3 = ___obj0;
		bool L_4 = Complex_Equals_mA47EF94D0222BAC7BCD6E81743E6F207CB0E2DEE((Complex_t02AD1084BE99034B2267A3721BDD94453CAAB77C *)__this, ((*(Complex_t02AD1084BE99034B2267A3721BDD94453CAAB77C *)((Complex_t02AD1084BE99034B2267A3721BDD94453CAAB77C *)UnBox(L_3, Complex_t02AD1084BE99034B2267A3721BDD94453CAAB77C_il2cpp_TypeInfo_var)))), /*hidden argument*/NULL);
		return L_4;
	}

IL_0020:
	{
		return (bool)0;
	}
}
extern "C"  bool Complex_Equals_mAAC29EDDA5F5C16D0D416EEC7BA27A84ABEDD030_AdjustorThunk (RuntimeObject * __this, RuntimeObject * ___obj0, const RuntimeMethod* method)
{
	Complex_t02AD1084BE99034B2267A3721BDD94453CAAB77C * _thisAdjusted = reinterpret_cast<Complex_t02AD1084BE99034B2267A3721BDD94453CAAB77C *>(__this + 1);
	return Complex_Equals_mAAC29EDDA5F5C16D0D416EEC7BA27A84ABEDD030(_thisAdjusted, ___obj0, method);
}
// System.Int32 CSCore.Utils.Complex::GetHashCode()
extern "C" IL2CPP_METHOD_ATTR int32_t Complex_GetHashCode_m96A74950DAEDA4CE7ABEBF768EB9185510118A01 (Complex_t02AD1084BE99034B2267A3721BDD94453CAAB77C * __this, const RuntimeMethod* method)
{
	{
		float* L_0 = __this->get_address_of_Imaginary_1();
		int32_t L_1 = Single_GetHashCode_m1BC0733E0C3851ED9D1B6C9C0B243BB88BE77AD0((float*)L_0, /*hidden argument*/NULL);
		float* L_2 = __this->get_address_of_Real_2();
		int32_t L_3 = Single_GetHashCode_m1BC0733E0C3851ED9D1B6C9C0B243BB88BE77AD0((float*)L_2, /*hidden argument*/NULL);
		return ((int32_t)((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_1, (int32_t)((int32_t)397)))^(int32_t)L_3));
	}
}
extern "C"  int32_t Complex_GetHashCode_m96A74950DAEDA4CE7ABEBF768EB9185510118A01_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	Complex_t02AD1084BE99034B2267A3721BDD94453CAAB77C * _thisAdjusted = reinterpret_cast<Complex_t02AD1084BE99034B2267A3721BDD94453CAAB77C *>(__this + 1);
	return Complex_GetHashCode_m96A74950DAEDA4CE7ABEBF768EB9185510118A01(_thisAdjusted, method);
}
// System.Void CSCore.Utils.Complex::.cctor()
extern "C" IL2CPP_METHOD_ATTR void Complex__cctor_m71C91B4AEECDDF2F0458E38796E58D4031F08386 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Complex__cctor_m71C91B4AEECDDF2F0458E38796E58D4031F08386_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Complex_t02AD1084BE99034B2267A3721BDD94453CAAB77C  L_0;
		memset(&L_0, 0, sizeof(L_0));
		Complex__ctor_m5A4C360047A6B9466C837C016ED1FF5E6857C165((&L_0), (0.0f), (0.0f), /*hidden argument*/NULL);
		((Complex_t02AD1084BE99034B2267A3721BDD94453CAAB77C_StaticFields*)il2cpp_codegen_static_fields_for(Complex_t02AD1084BE99034B2267A3721BDD94453CAAB77C_il2cpp_TypeInfo_var))->set_Zero_0(L_0);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif

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


// ExitGames.Client.Photon.Chat.AuthenticationValues
struct AuthenticationValues_t187933346;
// ExitGames.Client.Photon.Chat.ChatPeer
struct ChatPeer_t2186541770;
// ExitGames.Client.Photon.Chat.IChatClientListener
struct IChatClientListener_t915757805;
// ExitGames.Client.Photon.EncryptorManaged.Decryptor
struct Decryptor_t2116099858;
// ExitGames.Client.Photon.EncryptorManaged.Encryptor
struct Encryptor_t200327285;
// ExitGames.Client.Photon.IPhotonPeerListener
struct IPhotonPeerListener_t2581629031;
// ExitGames.Client.Photon.PeerBase
struct PeerBase_t2956237011;
// ExitGames.Client.Photon.TrafficStats
struct TrafficStats_t1302902347;
// ExitGames.Client.Photon.TrafficStatsGameLevel
struct TrafficStatsGameLevel_t4013908777;
// PhotonView
struct PhotonView_t2207721820;
// System.Byte[]
struct ByteU5BU5D_t4116647657;
// System.Char[]
struct CharU5BU5D_t3528271667;
// System.Collections.Generic.Dictionary`2<ExitGames.Client.Photon.ConnectionProtocol,System.Int32>
struct Dictionary_2_t1720840067;
// System.Collections.Generic.Dictionary`2<ExitGames.Client.Photon.ConnectionProtocol,System.Type>
struct Dictionary_2_t1253839074;
// System.Collections.Generic.Dictionary`2<System.String,ExitGames.Client.Photon.Chat.ChatChannel>
struct Dictionary_2_t3099565493;
// System.Collections.Generic.HashSet`1<System.String>
struct HashSet_1_t412400163;
// System.Collections.Generic.List`1<System.Object>
struct List_1_t257213610;
// System.Collections.Generic.List`1<System.String>
struct List_1_t3319525431;
// System.Diagnostics.Stopwatch
struct Stopwatch_t305734070;
// System.String
struct String_t;
// System.Type
struct Type_t;
// System.Void
struct Void_t1185182177;
// UnityEngine.Animator
struct Animator_t434523843;
// UnityEngine.AudioClip
struct AudioClip_t3680889665;
// UnityEngine.AudioSource
struct AudioSource_t3935305588;
// UnityEngine.GameObject
struct GameObject_t1113636619;
// UnityEngine.HingeJoint
struct HingeJoint_t2516258575;
// UnityEngine.Rigidbody
struct Rigidbody_t3916780224;
// UnityEngine.UI.InputField
struct InputField_t3762917431;
// UnityEngine.UI.Slider
struct Slider_t3903728902;
// UnityEngine.UI.Text
struct Text_t1901882714;




#ifndef U3CMODULEU3E_T692745545_H
#define U3CMODULEU3E_T692745545_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct  U3CModuleU3E_t692745545 
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CMODULEU3E_T692745545_H
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
#ifndef CHATCHANNEL_T3314309194_H
#define CHATCHANNEL_T3314309194_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ExitGames.Client.Photon.Chat.ChatChannel
struct  ChatChannel_t3314309194  : public RuntimeObject
{
public:
	// System.String ExitGames.Client.Photon.Chat.ChatChannel::Name
	String_t* ___Name_0;
	// System.Collections.Generic.List`1<System.String> ExitGames.Client.Photon.Chat.ChatChannel::Senders
	List_1_t3319525431 * ___Senders_1;
	// System.Collections.Generic.List`1<System.Object> ExitGames.Client.Photon.Chat.ChatChannel::Messages
	List_1_t257213610 * ___Messages_2;
	// System.Int32 ExitGames.Client.Photon.Chat.ChatChannel::MessageLimit
	int32_t ___MessageLimit_3;
	// System.Boolean ExitGames.Client.Photon.Chat.ChatChannel::<IsPrivate>k__BackingField
	bool ___U3CIsPrivateU3Ek__BackingField_4;

public:
	inline static int32_t get_offset_of_Name_0() { return static_cast<int32_t>(offsetof(ChatChannel_t3314309194, ___Name_0)); }
	inline String_t* get_Name_0() const { return ___Name_0; }
	inline String_t** get_address_of_Name_0() { return &___Name_0; }
	inline void set_Name_0(String_t* value)
	{
		___Name_0 = value;
		Il2CppCodeGenWriteBarrier((&___Name_0), value);
	}

	inline static int32_t get_offset_of_Senders_1() { return static_cast<int32_t>(offsetof(ChatChannel_t3314309194, ___Senders_1)); }
	inline List_1_t3319525431 * get_Senders_1() const { return ___Senders_1; }
	inline List_1_t3319525431 ** get_address_of_Senders_1() { return &___Senders_1; }
	inline void set_Senders_1(List_1_t3319525431 * value)
	{
		___Senders_1 = value;
		Il2CppCodeGenWriteBarrier((&___Senders_1), value);
	}

	inline static int32_t get_offset_of_Messages_2() { return static_cast<int32_t>(offsetof(ChatChannel_t3314309194, ___Messages_2)); }
	inline List_1_t257213610 * get_Messages_2() const { return ___Messages_2; }
	inline List_1_t257213610 ** get_address_of_Messages_2() { return &___Messages_2; }
	inline void set_Messages_2(List_1_t257213610 * value)
	{
		___Messages_2 = value;
		Il2CppCodeGenWriteBarrier((&___Messages_2), value);
	}

	inline static int32_t get_offset_of_MessageLimit_3() { return static_cast<int32_t>(offsetof(ChatChannel_t3314309194, ___MessageLimit_3)); }
	inline int32_t get_MessageLimit_3() const { return ___MessageLimit_3; }
	inline int32_t* get_address_of_MessageLimit_3() { return &___MessageLimit_3; }
	inline void set_MessageLimit_3(int32_t value)
	{
		___MessageLimit_3 = value;
	}

	inline static int32_t get_offset_of_U3CIsPrivateU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(ChatChannel_t3314309194, ___U3CIsPrivateU3Ek__BackingField_4)); }
	inline bool get_U3CIsPrivateU3Ek__BackingField_4() const { return ___U3CIsPrivateU3Ek__BackingField_4; }
	inline bool* get_address_of_U3CIsPrivateU3Ek__BackingField_4() { return &___U3CIsPrivateU3Ek__BackingField_4; }
	inline void set_U3CIsPrivateU3Ek__BackingField_4(bool value)
	{
		___U3CIsPrivateU3Ek__BackingField_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CHATCHANNEL_T3314309194_H
#ifndef CHATEVENTCODE_T3158930382_H
#define CHATEVENTCODE_T3158930382_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ExitGames.Client.Photon.Chat.ChatEventCode
struct  ChatEventCode_t3158930382  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CHATEVENTCODE_T3158930382_H
#ifndef CHATOPERATIONCODE_T2600569862_H
#define CHATOPERATIONCODE_T2600569862_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ExitGames.Client.Photon.Chat.ChatOperationCode
struct  ChatOperationCode_t2600569862  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CHATOPERATIONCODE_T2600569862_H
#ifndef CHATPARAMETERCODE_T1934080102_H
#define CHATPARAMETERCODE_T1934080102_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ExitGames.Client.Photon.Chat.ChatParameterCode
struct  ChatParameterCode_t1934080102  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CHATPARAMETERCODE_T1934080102_H
#ifndef CHATUSERSTATUS_T1535268910_H
#define CHATUSERSTATUS_T1535268910_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ExitGames.Client.Photon.Chat.ChatUserStatus
struct  ChatUserStatus_t1535268910  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CHATUSERSTATUS_T1535268910_H
#ifndef ERRORCODE_T3704103031_H
#define ERRORCODE_T3704103031_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ExitGames.Client.Photon.Chat.ErrorCode
struct  ErrorCode_t3704103031  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ERRORCODE_T3704103031_H
#ifndef PARAMETERCODE_T1075756884_H
#define PARAMETERCODE_T1075756884_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ExitGames.Client.Photon.Chat.ParameterCode
struct  ParameterCode_t1075756884  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PARAMETERCODE_T1075756884_H
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
#ifndef U24ARRAYTYPEU3D16_T3253128244_H
#define U24ARRAYTYPEU3D16_T3253128244_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>/$ArrayType=16
#pragma pack(push, tp, 1)
struct  U24ArrayTypeU3D16_t3253128244 
{
public:
	union
	{
		struct
		{
		};
		uint8_t U24ArrayTypeU3D16_t3253128244__padding[16];
	};

public:
};
#pragma pack(pop, tp)

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U24ARRAYTYPEU3D16_T3253128244_H
#ifndef U24ARRAYTYPEU3D32_T3651253610_H
#define U24ARRAYTYPEU3D32_T3651253610_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>/$ArrayType=32
#pragma pack(push, tp, 1)
struct  U24ArrayTypeU3D32_t3651253610 
{
public:
	union
	{
		struct
		{
		};
		uint8_t U24ArrayTypeU3D32_t3651253610__padding[32];
	};

public:
};
#pragma pack(pop, tp)

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U24ARRAYTYPEU3D32_T3651253610_H
#ifndef U24ARRAYTYPEU3D48_T1336283963_H
#define U24ARRAYTYPEU3D48_T1336283963_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>/$ArrayType=48
#pragma pack(push, tp, 1)
struct  U24ArrayTypeU3D48_t1336283963 
{
public:
	union
	{
		struct
		{
		};
		uint8_t U24ArrayTypeU3D48_t1336283963__padding[48];
	};

public:
};
#pragma pack(pop, tp)

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U24ARRAYTYPEU3D48_T1336283963_H
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
	float ___x_2;
	// System.Single UnityEngine.Vector3::y
	float ___y_3;
	// System.Single UnityEngine.Vector3::z
	float ___z_4;

public:
	inline static int32_t get_offset_of_x_2() { return static_cast<int32_t>(offsetof(Vector3_t3722313464, ___x_2)); }
	inline float get_x_2() const { return ___x_2; }
	inline float* get_address_of_x_2() { return &___x_2; }
	inline void set_x_2(float value)
	{
		___x_2 = value;
	}

	inline static int32_t get_offset_of_y_3() { return static_cast<int32_t>(offsetof(Vector3_t3722313464, ___y_3)); }
	inline float get_y_3() const { return ___y_3; }
	inline float* get_address_of_y_3() { return &___y_3; }
	inline void set_y_3(float value)
	{
		___y_3 = value;
	}

	inline static int32_t get_offset_of_z_4() { return static_cast<int32_t>(offsetof(Vector3_t3722313464, ___z_4)); }
	inline float get_z_4() const { return ___z_4; }
	inline float* get_address_of_z_4() { return &___z_4; }
	inline void set_z_4(float value)
	{
		___z_4 = value;
	}
};

struct Vector3_t3722313464_StaticFields
{
public:
	// UnityEngine.Vector3 UnityEngine.Vector3::zeroVector
	Vector3_t3722313464  ___zeroVector_5;
	// UnityEngine.Vector3 UnityEngine.Vector3::oneVector
	Vector3_t3722313464  ___oneVector_6;
	// UnityEngine.Vector3 UnityEngine.Vector3::upVector
	Vector3_t3722313464  ___upVector_7;
	// UnityEngine.Vector3 UnityEngine.Vector3::downVector
	Vector3_t3722313464  ___downVector_8;
	// UnityEngine.Vector3 UnityEngine.Vector3::leftVector
	Vector3_t3722313464  ___leftVector_9;
	// UnityEngine.Vector3 UnityEngine.Vector3::rightVector
	Vector3_t3722313464  ___rightVector_10;
	// UnityEngine.Vector3 UnityEngine.Vector3::forwardVector
	Vector3_t3722313464  ___forwardVector_11;
	// UnityEngine.Vector3 UnityEngine.Vector3::backVector
	Vector3_t3722313464  ___backVector_12;
	// UnityEngine.Vector3 UnityEngine.Vector3::positiveInfinityVector
	Vector3_t3722313464  ___positiveInfinityVector_13;
	// UnityEngine.Vector3 UnityEngine.Vector3::negativeInfinityVector
	Vector3_t3722313464  ___negativeInfinityVector_14;

public:
	inline static int32_t get_offset_of_zeroVector_5() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___zeroVector_5)); }
	inline Vector3_t3722313464  get_zeroVector_5() const { return ___zeroVector_5; }
	inline Vector3_t3722313464 * get_address_of_zeroVector_5() { return &___zeroVector_5; }
	inline void set_zeroVector_5(Vector3_t3722313464  value)
	{
		___zeroVector_5 = value;
	}

	inline static int32_t get_offset_of_oneVector_6() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___oneVector_6)); }
	inline Vector3_t3722313464  get_oneVector_6() const { return ___oneVector_6; }
	inline Vector3_t3722313464 * get_address_of_oneVector_6() { return &___oneVector_6; }
	inline void set_oneVector_6(Vector3_t3722313464  value)
	{
		___oneVector_6 = value;
	}

	inline static int32_t get_offset_of_upVector_7() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___upVector_7)); }
	inline Vector3_t3722313464  get_upVector_7() const { return ___upVector_7; }
	inline Vector3_t3722313464 * get_address_of_upVector_7() { return &___upVector_7; }
	inline void set_upVector_7(Vector3_t3722313464  value)
	{
		___upVector_7 = value;
	}

	inline static int32_t get_offset_of_downVector_8() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___downVector_8)); }
	inline Vector3_t3722313464  get_downVector_8() const { return ___downVector_8; }
	inline Vector3_t3722313464 * get_address_of_downVector_8() { return &___downVector_8; }
	inline void set_downVector_8(Vector3_t3722313464  value)
	{
		___downVector_8 = value;
	}

	inline static int32_t get_offset_of_leftVector_9() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___leftVector_9)); }
	inline Vector3_t3722313464  get_leftVector_9() const { return ___leftVector_9; }
	inline Vector3_t3722313464 * get_address_of_leftVector_9() { return &___leftVector_9; }
	inline void set_leftVector_9(Vector3_t3722313464  value)
	{
		___leftVector_9 = value;
	}

	inline static int32_t get_offset_of_rightVector_10() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___rightVector_10)); }
	inline Vector3_t3722313464  get_rightVector_10() const { return ___rightVector_10; }
	inline Vector3_t3722313464 * get_address_of_rightVector_10() { return &___rightVector_10; }
	inline void set_rightVector_10(Vector3_t3722313464  value)
	{
		___rightVector_10 = value;
	}

	inline static int32_t get_offset_of_forwardVector_11() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___forwardVector_11)); }
	inline Vector3_t3722313464  get_forwardVector_11() const { return ___forwardVector_11; }
	inline Vector3_t3722313464 * get_address_of_forwardVector_11() { return &___forwardVector_11; }
	inline void set_forwardVector_11(Vector3_t3722313464  value)
	{
		___forwardVector_11 = value;
	}

	inline static int32_t get_offset_of_backVector_12() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___backVector_12)); }
	inline Vector3_t3722313464  get_backVector_12() const { return ___backVector_12; }
	inline Vector3_t3722313464 * get_address_of_backVector_12() { return &___backVector_12; }
	inline void set_backVector_12(Vector3_t3722313464  value)
	{
		___backVector_12 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_13() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___positiveInfinityVector_13)); }
	inline Vector3_t3722313464  get_positiveInfinityVector_13() const { return ___positiveInfinityVector_13; }
	inline Vector3_t3722313464 * get_address_of_positiveInfinityVector_13() { return &___positiveInfinityVector_13; }
	inline void set_positiveInfinityVector_13(Vector3_t3722313464  value)
	{
		___positiveInfinityVector_13 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_14() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___negativeInfinityVector_14)); }
	inline Vector3_t3722313464  get_negativeInfinityVector_14() const { return ___negativeInfinityVector_14; }
	inline Vector3_t3722313464 * get_address_of_negativeInfinityVector_14() { return &___negativeInfinityVector_14; }
	inline void set_negativeInfinityVector_14(Vector3_t3722313464  value)
	{
		___negativeInfinityVector_14 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VECTOR3_T3722313464_H
#ifndef U3CPRIVATEIMPLEMENTATIONDETAILSU3E_T3057255367_H
#define U3CPRIVATEIMPLEMENTATIONDETAILSU3E_T3057255367_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>
struct  U3CPrivateImplementationDetailsU3E_t3057255367  : public RuntimeObject
{
public:

public:
};

struct U3CPrivateImplementationDetailsU3E_t3057255367_StaticFields
{
public:
	// <PrivateImplementationDetails>/$ArrayType=16 <PrivateImplementationDetails>::$field-8658990BAD6546E619D8A5C4F90BCF3F089E0953
	U24ArrayTypeU3D16_t3253128244  ___U24fieldU2D8658990BAD6546E619D8A5C4F90BCF3F089E0953_0;
	// <PrivateImplementationDetails>/$ArrayType=32 <PrivateImplementationDetails>::$field-739C505E9F0985CE1E08892BC46BE5E839FF061A
	U24ArrayTypeU3D32_t3651253610  ___U24fieldU2D739C505E9F0985CE1E08892BC46BE5E839FF061A_1;
	// <PrivateImplementationDetails>/$ArrayType=48 <PrivateImplementationDetails>::$field-35FDBB6669F521B572D4AD71DD77E77F43C1B71B
	U24ArrayTypeU3D48_t1336283963  ___U24fieldU2D35FDBB6669F521B572D4AD71DD77E77F43C1B71B_2;

public:
	inline static int32_t get_offset_of_U24fieldU2D8658990BAD6546E619D8A5C4F90BCF3F089E0953_0() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t3057255367_StaticFields, ___U24fieldU2D8658990BAD6546E619D8A5C4F90BCF3F089E0953_0)); }
	inline U24ArrayTypeU3D16_t3253128244  get_U24fieldU2D8658990BAD6546E619D8A5C4F90BCF3F089E0953_0() const { return ___U24fieldU2D8658990BAD6546E619D8A5C4F90BCF3F089E0953_0; }
	inline U24ArrayTypeU3D16_t3253128244 * get_address_of_U24fieldU2D8658990BAD6546E619D8A5C4F90BCF3F089E0953_0() { return &___U24fieldU2D8658990BAD6546E619D8A5C4F90BCF3F089E0953_0; }
	inline void set_U24fieldU2D8658990BAD6546E619D8A5C4F90BCF3F089E0953_0(U24ArrayTypeU3D16_t3253128244  value)
	{
		___U24fieldU2D8658990BAD6546E619D8A5C4F90BCF3F089E0953_0 = value;
	}

	inline static int32_t get_offset_of_U24fieldU2D739C505E9F0985CE1E08892BC46BE5E839FF061A_1() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t3057255367_StaticFields, ___U24fieldU2D739C505E9F0985CE1E08892BC46BE5E839FF061A_1)); }
	inline U24ArrayTypeU3D32_t3651253610  get_U24fieldU2D739C505E9F0985CE1E08892BC46BE5E839FF061A_1() const { return ___U24fieldU2D739C505E9F0985CE1E08892BC46BE5E839FF061A_1; }
	inline U24ArrayTypeU3D32_t3651253610 * get_address_of_U24fieldU2D739C505E9F0985CE1E08892BC46BE5E839FF061A_1() { return &___U24fieldU2D739C505E9F0985CE1E08892BC46BE5E839FF061A_1; }
	inline void set_U24fieldU2D739C505E9F0985CE1E08892BC46BE5E839FF061A_1(U24ArrayTypeU3D32_t3651253610  value)
	{
		___U24fieldU2D739C505E9F0985CE1E08892BC46BE5E839FF061A_1 = value;
	}

	inline static int32_t get_offset_of_U24fieldU2D35FDBB6669F521B572D4AD71DD77E77F43C1B71B_2() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t3057255367_StaticFields, ___U24fieldU2D35FDBB6669F521B572D4AD71DD77E77F43C1B71B_2)); }
	inline U24ArrayTypeU3D48_t1336283963  get_U24fieldU2D35FDBB6669F521B572D4AD71DD77E77F43C1B71B_2() const { return ___U24fieldU2D35FDBB6669F521B572D4AD71DD77E77F43C1B71B_2; }
	inline U24ArrayTypeU3D48_t1336283963 * get_address_of_U24fieldU2D35FDBB6669F521B572D4AD71DD77E77F43C1B71B_2() { return &___U24fieldU2D35FDBB6669F521B572D4AD71DD77E77F43C1B71B_2; }
	inline void set_U24fieldU2D35FDBB6669F521B572D4AD71DD77E77F43C1B71B_2(U24ArrayTypeU3D48_t1336283963  value)
	{
		___U24fieldU2D35FDBB6669F521B572D4AD71DD77E77F43C1B71B_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CPRIVATEIMPLEMENTATIONDETAILSU3E_T3057255367_H
#ifndef CHATDISCONNECTCAUSE_T3824038781_H
#define CHATDISCONNECTCAUSE_T3824038781_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ExitGames.Client.Photon.Chat.ChatDisconnectCause
struct  ChatDisconnectCause_t3824038781 
{
public:
	// System.Int32 ExitGames.Client.Photon.Chat.ChatDisconnectCause::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(ChatDisconnectCause_t3824038781, ___value___1)); }
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
#endif // CHATDISCONNECTCAUSE_T3824038781_H
#ifndef CHATSTATE_T3709194201_H
#define CHATSTATE_T3709194201_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ExitGames.Client.Photon.Chat.ChatState
struct  ChatState_t3709194201 
{
public:
	// System.Int32 ExitGames.Client.Photon.Chat.ChatState::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(ChatState_t3709194201, ___value___1)); }
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
#endif // CHATSTATE_T3709194201_H
#ifndef CUSTOMAUTHENTICATIONTYPE_T3431816196_H
#define CUSTOMAUTHENTICATIONTYPE_T3431816196_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ExitGames.Client.Photon.Chat.CustomAuthenticationType
struct  CustomAuthenticationType_t3431816196 
{
public:
	// System.Byte ExitGames.Client.Photon.Chat.CustomAuthenticationType::value__
	uint8_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(CustomAuthenticationType_t3431816196, ___value___1)); }
	inline uint8_t get_value___1() const { return ___value___1; }
	inline uint8_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(uint8_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CUSTOMAUTHENTICATIONTYPE_T3431816196_H
#ifndef CONNECTIONPROTOCOL_T2586603950_H
#define CONNECTIONPROTOCOL_T2586603950_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ExitGames.Client.Photon.ConnectionProtocol
struct  ConnectionProtocol_t2586603950 
{
public:
	// System.Byte ExitGames.Client.Photon.ConnectionProtocol::value__
	uint8_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(ConnectionProtocol_t2586603950, ___value___1)); }
	inline uint8_t get_value___1() const { return ___value___1; }
	inline uint8_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(uint8_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CONNECTIONPROTOCOL_T2586603950_H
#ifndef DEBUGLEVEL_T3671880145_H
#define DEBUGLEVEL_T3671880145_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ExitGames.Client.Photon.DebugLevel
struct  DebugLevel_t3671880145 
{
public:
	// System.Byte ExitGames.Client.Photon.DebugLevel::value__
	uint8_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(DebugLevel_t3671880145, ___value___1)); }
	inline uint8_t get_value___1() const { return ___value___1; }
	inline uint8_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(uint8_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DEBUGLEVEL_T3671880145_H
#ifndef SERIALIZATIONPROTOCOL_T4091957412_H
#define SERIALIZATIONPROTOCOL_T4091957412_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ExitGames.Client.Photon.SerializationProtocol
struct  SerializationProtocol_t4091957412 
{
public:
	// System.Int32 ExitGames.Client.Photon.SerializationProtocol::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(SerializationProtocol_t4091957412, ___value___1)); }
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
#endif // SERIALIZATIONPROTOCOL_T4091957412_H
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
#ifndef AUTHENTICATIONVALUES_T187933346_H
#define AUTHENTICATIONVALUES_T187933346_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ExitGames.Client.Photon.Chat.AuthenticationValues
struct  AuthenticationValues_t187933346  : public RuntimeObject
{
public:
	// ExitGames.Client.Photon.Chat.CustomAuthenticationType ExitGames.Client.Photon.Chat.AuthenticationValues::authType
	uint8_t ___authType_0;
	// System.String ExitGames.Client.Photon.Chat.AuthenticationValues::<AuthGetParameters>k__BackingField
	String_t* ___U3CAuthGetParametersU3Ek__BackingField_1;
	// System.Object ExitGames.Client.Photon.Chat.AuthenticationValues::<AuthPostData>k__BackingField
	RuntimeObject * ___U3CAuthPostDataU3Ek__BackingField_2;
	// System.String ExitGames.Client.Photon.Chat.AuthenticationValues::<Token>k__BackingField
	String_t* ___U3CTokenU3Ek__BackingField_3;
	// System.String ExitGames.Client.Photon.Chat.AuthenticationValues::<UserId>k__BackingField
	String_t* ___U3CUserIdU3Ek__BackingField_4;

public:
	inline static int32_t get_offset_of_authType_0() { return static_cast<int32_t>(offsetof(AuthenticationValues_t187933346, ___authType_0)); }
	inline uint8_t get_authType_0() const { return ___authType_0; }
	inline uint8_t* get_address_of_authType_0() { return &___authType_0; }
	inline void set_authType_0(uint8_t value)
	{
		___authType_0 = value;
	}

	inline static int32_t get_offset_of_U3CAuthGetParametersU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(AuthenticationValues_t187933346, ___U3CAuthGetParametersU3Ek__BackingField_1)); }
	inline String_t* get_U3CAuthGetParametersU3Ek__BackingField_1() const { return ___U3CAuthGetParametersU3Ek__BackingField_1; }
	inline String_t** get_address_of_U3CAuthGetParametersU3Ek__BackingField_1() { return &___U3CAuthGetParametersU3Ek__BackingField_1; }
	inline void set_U3CAuthGetParametersU3Ek__BackingField_1(String_t* value)
	{
		___U3CAuthGetParametersU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((&___U3CAuthGetParametersU3Ek__BackingField_1), value);
	}

	inline static int32_t get_offset_of_U3CAuthPostDataU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(AuthenticationValues_t187933346, ___U3CAuthPostDataU3Ek__BackingField_2)); }
	inline RuntimeObject * get_U3CAuthPostDataU3Ek__BackingField_2() const { return ___U3CAuthPostDataU3Ek__BackingField_2; }
	inline RuntimeObject ** get_address_of_U3CAuthPostDataU3Ek__BackingField_2() { return &___U3CAuthPostDataU3Ek__BackingField_2; }
	inline void set_U3CAuthPostDataU3Ek__BackingField_2(RuntimeObject * value)
	{
		___U3CAuthPostDataU3Ek__BackingField_2 = value;
		Il2CppCodeGenWriteBarrier((&___U3CAuthPostDataU3Ek__BackingField_2), value);
	}

	inline static int32_t get_offset_of_U3CTokenU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(AuthenticationValues_t187933346, ___U3CTokenU3Ek__BackingField_3)); }
	inline String_t* get_U3CTokenU3Ek__BackingField_3() const { return ___U3CTokenU3Ek__BackingField_3; }
	inline String_t** get_address_of_U3CTokenU3Ek__BackingField_3() { return &___U3CTokenU3Ek__BackingField_3; }
	inline void set_U3CTokenU3Ek__BackingField_3(String_t* value)
	{
		___U3CTokenU3Ek__BackingField_3 = value;
		Il2CppCodeGenWriteBarrier((&___U3CTokenU3Ek__BackingField_3), value);
	}

	inline static int32_t get_offset_of_U3CUserIdU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(AuthenticationValues_t187933346, ___U3CUserIdU3Ek__BackingField_4)); }
	inline String_t* get_U3CUserIdU3Ek__BackingField_4() const { return ___U3CUserIdU3Ek__BackingField_4; }
	inline String_t** get_address_of_U3CUserIdU3Ek__BackingField_4() { return &___U3CUserIdU3Ek__BackingField_4; }
	inline void set_U3CUserIdU3Ek__BackingField_4(String_t* value)
	{
		___U3CUserIdU3Ek__BackingField_4 = value;
		Il2CppCodeGenWriteBarrier((&___U3CUserIdU3Ek__BackingField_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // AUTHENTICATIONVALUES_T187933346_H
#ifndef CHATCLIENT_T3322764984_H
#define CHATCLIENT_T3322764984_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ExitGames.Client.Photon.Chat.ChatClient
struct  ChatClient_t3322764984  : public RuntimeObject
{
public:
	// System.String ExitGames.Client.Photon.Chat.ChatClient::<NameServerAddress>k__BackingField
	String_t* ___U3CNameServerAddressU3Ek__BackingField_1;
	// System.String ExitGames.Client.Photon.Chat.ChatClient::<FrontendAddress>k__BackingField
	String_t* ___U3CFrontendAddressU3Ek__BackingField_2;
	// System.String ExitGames.Client.Photon.Chat.ChatClient::chatRegion
	String_t* ___chatRegion_3;
	// ExitGames.Client.Photon.Chat.ChatState ExitGames.Client.Photon.Chat.ChatClient::<State>k__BackingField
	int32_t ___U3CStateU3Ek__BackingField_4;
	// ExitGames.Client.Photon.Chat.ChatDisconnectCause ExitGames.Client.Photon.Chat.ChatClient::<DisconnectedCause>k__BackingField
	int32_t ___U3CDisconnectedCauseU3Ek__BackingField_5;
	// System.String ExitGames.Client.Photon.Chat.ChatClient::<AppVersion>k__BackingField
	String_t* ___U3CAppVersionU3Ek__BackingField_6;
	// System.String ExitGames.Client.Photon.Chat.ChatClient::<AppId>k__BackingField
	String_t* ___U3CAppIdU3Ek__BackingField_7;
	// ExitGames.Client.Photon.Chat.AuthenticationValues ExitGames.Client.Photon.Chat.ChatClient::<AuthValues>k__BackingField
	AuthenticationValues_t187933346 * ___U3CAuthValuesU3Ek__BackingField_8;
	// System.Int32 ExitGames.Client.Photon.Chat.ChatClient::MessageLimit
	int32_t ___MessageLimit_9;
	// System.Collections.Generic.Dictionary`2<System.String,ExitGames.Client.Photon.Chat.ChatChannel> ExitGames.Client.Photon.Chat.ChatClient::PublicChannels
	Dictionary_2_t3099565493 * ___PublicChannels_10;
	// System.Collections.Generic.Dictionary`2<System.String,ExitGames.Client.Photon.Chat.ChatChannel> ExitGames.Client.Photon.Chat.ChatClient::PrivateChannels
	Dictionary_2_t3099565493 * ___PrivateChannels_11;
	// System.Collections.Generic.HashSet`1<System.String> ExitGames.Client.Photon.Chat.ChatClient::PublicChannelsUnsubscribing
	HashSet_1_t412400163 * ___PublicChannelsUnsubscribing_12;
	// ExitGames.Client.Photon.Chat.IChatClientListener ExitGames.Client.Photon.Chat.ChatClient::listener
	RuntimeObject* ___listener_13;
	// ExitGames.Client.Photon.Chat.ChatPeer ExitGames.Client.Photon.Chat.ChatClient::chatPeer
	ChatPeer_t2186541770 * ___chatPeer_14;
	// System.Boolean ExitGames.Client.Photon.Chat.ChatClient::didAuthenticate
	bool ___didAuthenticate_16;
	// System.Int32 ExitGames.Client.Photon.Chat.ChatClient::msDeltaForServiceCalls
	int32_t ___msDeltaForServiceCalls_17;
	// System.Int32 ExitGames.Client.Photon.Chat.ChatClient::msTimestampOfLastServiceCall
	int32_t ___msTimestampOfLastServiceCall_18;
	// System.Boolean ExitGames.Client.Photon.Chat.ChatClient::<UseBackgroundWorkerForSending>k__BackingField
	bool ___U3CUseBackgroundWorkerForSendingU3Ek__BackingField_19;

public:
	inline static int32_t get_offset_of_U3CNameServerAddressU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(ChatClient_t3322764984, ___U3CNameServerAddressU3Ek__BackingField_1)); }
	inline String_t* get_U3CNameServerAddressU3Ek__BackingField_1() const { return ___U3CNameServerAddressU3Ek__BackingField_1; }
	inline String_t** get_address_of_U3CNameServerAddressU3Ek__BackingField_1() { return &___U3CNameServerAddressU3Ek__BackingField_1; }
	inline void set_U3CNameServerAddressU3Ek__BackingField_1(String_t* value)
	{
		___U3CNameServerAddressU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((&___U3CNameServerAddressU3Ek__BackingField_1), value);
	}

	inline static int32_t get_offset_of_U3CFrontendAddressU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(ChatClient_t3322764984, ___U3CFrontendAddressU3Ek__BackingField_2)); }
	inline String_t* get_U3CFrontendAddressU3Ek__BackingField_2() const { return ___U3CFrontendAddressU3Ek__BackingField_2; }
	inline String_t** get_address_of_U3CFrontendAddressU3Ek__BackingField_2() { return &___U3CFrontendAddressU3Ek__BackingField_2; }
	inline void set_U3CFrontendAddressU3Ek__BackingField_2(String_t* value)
	{
		___U3CFrontendAddressU3Ek__BackingField_2 = value;
		Il2CppCodeGenWriteBarrier((&___U3CFrontendAddressU3Ek__BackingField_2), value);
	}

	inline static int32_t get_offset_of_chatRegion_3() { return static_cast<int32_t>(offsetof(ChatClient_t3322764984, ___chatRegion_3)); }
	inline String_t* get_chatRegion_3() const { return ___chatRegion_3; }
	inline String_t** get_address_of_chatRegion_3() { return &___chatRegion_3; }
	inline void set_chatRegion_3(String_t* value)
	{
		___chatRegion_3 = value;
		Il2CppCodeGenWriteBarrier((&___chatRegion_3), value);
	}

	inline static int32_t get_offset_of_U3CStateU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(ChatClient_t3322764984, ___U3CStateU3Ek__BackingField_4)); }
	inline int32_t get_U3CStateU3Ek__BackingField_4() const { return ___U3CStateU3Ek__BackingField_4; }
	inline int32_t* get_address_of_U3CStateU3Ek__BackingField_4() { return &___U3CStateU3Ek__BackingField_4; }
	inline void set_U3CStateU3Ek__BackingField_4(int32_t value)
	{
		___U3CStateU3Ek__BackingField_4 = value;
	}

	inline static int32_t get_offset_of_U3CDisconnectedCauseU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(ChatClient_t3322764984, ___U3CDisconnectedCauseU3Ek__BackingField_5)); }
	inline int32_t get_U3CDisconnectedCauseU3Ek__BackingField_5() const { return ___U3CDisconnectedCauseU3Ek__BackingField_5; }
	inline int32_t* get_address_of_U3CDisconnectedCauseU3Ek__BackingField_5() { return &___U3CDisconnectedCauseU3Ek__BackingField_5; }
	inline void set_U3CDisconnectedCauseU3Ek__BackingField_5(int32_t value)
	{
		___U3CDisconnectedCauseU3Ek__BackingField_5 = value;
	}

	inline static int32_t get_offset_of_U3CAppVersionU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(ChatClient_t3322764984, ___U3CAppVersionU3Ek__BackingField_6)); }
	inline String_t* get_U3CAppVersionU3Ek__BackingField_6() const { return ___U3CAppVersionU3Ek__BackingField_6; }
	inline String_t** get_address_of_U3CAppVersionU3Ek__BackingField_6() { return &___U3CAppVersionU3Ek__BackingField_6; }
	inline void set_U3CAppVersionU3Ek__BackingField_6(String_t* value)
	{
		___U3CAppVersionU3Ek__BackingField_6 = value;
		Il2CppCodeGenWriteBarrier((&___U3CAppVersionU3Ek__BackingField_6), value);
	}

	inline static int32_t get_offset_of_U3CAppIdU3Ek__BackingField_7() { return static_cast<int32_t>(offsetof(ChatClient_t3322764984, ___U3CAppIdU3Ek__BackingField_7)); }
	inline String_t* get_U3CAppIdU3Ek__BackingField_7() const { return ___U3CAppIdU3Ek__BackingField_7; }
	inline String_t** get_address_of_U3CAppIdU3Ek__BackingField_7() { return &___U3CAppIdU3Ek__BackingField_7; }
	inline void set_U3CAppIdU3Ek__BackingField_7(String_t* value)
	{
		___U3CAppIdU3Ek__BackingField_7 = value;
		Il2CppCodeGenWriteBarrier((&___U3CAppIdU3Ek__BackingField_7), value);
	}

	inline static int32_t get_offset_of_U3CAuthValuesU3Ek__BackingField_8() { return static_cast<int32_t>(offsetof(ChatClient_t3322764984, ___U3CAuthValuesU3Ek__BackingField_8)); }
	inline AuthenticationValues_t187933346 * get_U3CAuthValuesU3Ek__BackingField_8() const { return ___U3CAuthValuesU3Ek__BackingField_8; }
	inline AuthenticationValues_t187933346 ** get_address_of_U3CAuthValuesU3Ek__BackingField_8() { return &___U3CAuthValuesU3Ek__BackingField_8; }
	inline void set_U3CAuthValuesU3Ek__BackingField_8(AuthenticationValues_t187933346 * value)
	{
		___U3CAuthValuesU3Ek__BackingField_8 = value;
		Il2CppCodeGenWriteBarrier((&___U3CAuthValuesU3Ek__BackingField_8), value);
	}

	inline static int32_t get_offset_of_MessageLimit_9() { return static_cast<int32_t>(offsetof(ChatClient_t3322764984, ___MessageLimit_9)); }
	inline int32_t get_MessageLimit_9() const { return ___MessageLimit_9; }
	inline int32_t* get_address_of_MessageLimit_9() { return &___MessageLimit_9; }
	inline void set_MessageLimit_9(int32_t value)
	{
		___MessageLimit_9 = value;
	}

	inline static int32_t get_offset_of_PublicChannels_10() { return static_cast<int32_t>(offsetof(ChatClient_t3322764984, ___PublicChannels_10)); }
	inline Dictionary_2_t3099565493 * get_PublicChannels_10() const { return ___PublicChannels_10; }
	inline Dictionary_2_t3099565493 ** get_address_of_PublicChannels_10() { return &___PublicChannels_10; }
	inline void set_PublicChannels_10(Dictionary_2_t3099565493 * value)
	{
		___PublicChannels_10 = value;
		Il2CppCodeGenWriteBarrier((&___PublicChannels_10), value);
	}

	inline static int32_t get_offset_of_PrivateChannels_11() { return static_cast<int32_t>(offsetof(ChatClient_t3322764984, ___PrivateChannels_11)); }
	inline Dictionary_2_t3099565493 * get_PrivateChannels_11() const { return ___PrivateChannels_11; }
	inline Dictionary_2_t3099565493 ** get_address_of_PrivateChannels_11() { return &___PrivateChannels_11; }
	inline void set_PrivateChannels_11(Dictionary_2_t3099565493 * value)
	{
		___PrivateChannels_11 = value;
		Il2CppCodeGenWriteBarrier((&___PrivateChannels_11), value);
	}

	inline static int32_t get_offset_of_PublicChannelsUnsubscribing_12() { return static_cast<int32_t>(offsetof(ChatClient_t3322764984, ___PublicChannelsUnsubscribing_12)); }
	inline HashSet_1_t412400163 * get_PublicChannelsUnsubscribing_12() const { return ___PublicChannelsUnsubscribing_12; }
	inline HashSet_1_t412400163 ** get_address_of_PublicChannelsUnsubscribing_12() { return &___PublicChannelsUnsubscribing_12; }
	inline void set_PublicChannelsUnsubscribing_12(HashSet_1_t412400163 * value)
	{
		___PublicChannelsUnsubscribing_12 = value;
		Il2CppCodeGenWriteBarrier((&___PublicChannelsUnsubscribing_12), value);
	}

	inline static int32_t get_offset_of_listener_13() { return static_cast<int32_t>(offsetof(ChatClient_t3322764984, ___listener_13)); }
	inline RuntimeObject* get_listener_13() const { return ___listener_13; }
	inline RuntimeObject** get_address_of_listener_13() { return &___listener_13; }
	inline void set_listener_13(RuntimeObject* value)
	{
		___listener_13 = value;
		Il2CppCodeGenWriteBarrier((&___listener_13), value);
	}

	inline static int32_t get_offset_of_chatPeer_14() { return static_cast<int32_t>(offsetof(ChatClient_t3322764984, ___chatPeer_14)); }
	inline ChatPeer_t2186541770 * get_chatPeer_14() const { return ___chatPeer_14; }
	inline ChatPeer_t2186541770 ** get_address_of_chatPeer_14() { return &___chatPeer_14; }
	inline void set_chatPeer_14(ChatPeer_t2186541770 * value)
	{
		___chatPeer_14 = value;
		Il2CppCodeGenWriteBarrier((&___chatPeer_14), value);
	}

	inline static int32_t get_offset_of_didAuthenticate_16() { return static_cast<int32_t>(offsetof(ChatClient_t3322764984, ___didAuthenticate_16)); }
	inline bool get_didAuthenticate_16() const { return ___didAuthenticate_16; }
	inline bool* get_address_of_didAuthenticate_16() { return &___didAuthenticate_16; }
	inline void set_didAuthenticate_16(bool value)
	{
		___didAuthenticate_16 = value;
	}

	inline static int32_t get_offset_of_msDeltaForServiceCalls_17() { return static_cast<int32_t>(offsetof(ChatClient_t3322764984, ___msDeltaForServiceCalls_17)); }
	inline int32_t get_msDeltaForServiceCalls_17() const { return ___msDeltaForServiceCalls_17; }
	inline int32_t* get_address_of_msDeltaForServiceCalls_17() { return &___msDeltaForServiceCalls_17; }
	inline void set_msDeltaForServiceCalls_17(int32_t value)
	{
		___msDeltaForServiceCalls_17 = value;
	}

	inline static int32_t get_offset_of_msTimestampOfLastServiceCall_18() { return static_cast<int32_t>(offsetof(ChatClient_t3322764984, ___msTimestampOfLastServiceCall_18)); }
	inline int32_t get_msTimestampOfLastServiceCall_18() const { return ___msTimestampOfLastServiceCall_18; }
	inline int32_t* get_address_of_msTimestampOfLastServiceCall_18() { return &___msTimestampOfLastServiceCall_18; }
	inline void set_msTimestampOfLastServiceCall_18(int32_t value)
	{
		___msTimestampOfLastServiceCall_18 = value;
	}

	inline static int32_t get_offset_of_U3CUseBackgroundWorkerForSendingU3Ek__BackingField_19() { return static_cast<int32_t>(offsetof(ChatClient_t3322764984, ___U3CUseBackgroundWorkerForSendingU3Ek__BackingField_19)); }
	inline bool get_U3CUseBackgroundWorkerForSendingU3Ek__BackingField_19() const { return ___U3CUseBackgroundWorkerForSendingU3Ek__BackingField_19; }
	inline bool* get_address_of_U3CUseBackgroundWorkerForSendingU3Ek__BackingField_19() { return &___U3CUseBackgroundWorkerForSendingU3Ek__BackingField_19; }
	inline void set_U3CUseBackgroundWorkerForSendingU3Ek__BackingField_19(bool value)
	{
		___U3CUseBackgroundWorkerForSendingU3Ek__BackingField_19 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CHATCLIENT_T3322764984_H
#ifndef PHOTONPEER_T1608153861_H
#define PHOTONPEER_T1608153861_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ExitGames.Client.Photon.PhotonPeer
struct  PhotonPeer_t1608153861  : public RuntimeObject
{
public:
	// System.Byte ExitGames.Client.Photon.PhotonPeer::ClientSdkId
	uint8_t ___ClientSdkId_3;
	// System.String ExitGames.Client.Photon.PhotonPeer::clientVersion
	String_t* ___clientVersion_5;
	// ExitGames.Client.Photon.SerializationProtocol ExitGames.Client.Photon.PhotonPeer::<SerializationProtocolType>k__BackingField
	int32_t ___U3CSerializationProtocolTypeU3Ek__BackingField_6;
	// System.Collections.Generic.Dictionary`2<ExitGames.Client.Photon.ConnectionProtocol,System.Type> ExitGames.Client.Photon.PhotonPeer::SocketImplementationConfig
	Dictionary_2_t1253839074 * ___SocketImplementationConfig_7;
	// System.Type ExitGames.Client.Photon.PhotonPeer::<SocketImplementation>k__BackingField
	Type_t * ___U3CSocketImplementationU3Ek__BackingField_8;
	// ExitGames.Client.Photon.DebugLevel ExitGames.Client.Photon.PhotonPeer::DebugOut
	uint8_t ___DebugOut_9;
	// ExitGames.Client.Photon.IPhotonPeerListener ExitGames.Client.Photon.PhotonPeer::<Listener>k__BackingField
	RuntimeObject* ___U3CListenerU3Ek__BackingField_10;
	// ExitGames.Client.Photon.TrafficStats ExitGames.Client.Photon.PhotonPeer::<TrafficStatsIncoming>k__BackingField
	TrafficStats_t1302902347 * ___U3CTrafficStatsIncomingU3Ek__BackingField_11;
	// ExitGames.Client.Photon.TrafficStats ExitGames.Client.Photon.PhotonPeer::<TrafficStatsOutgoing>k__BackingField
	TrafficStats_t1302902347 * ___U3CTrafficStatsOutgoingU3Ek__BackingField_12;
	// ExitGames.Client.Photon.TrafficStatsGameLevel ExitGames.Client.Photon.PhotonPeer::<TrafficStatsGameLevel>k__BackingField
	TrafficStatsGameLevel_t4013908777 * ___U3CTrafficStatsGameLevelU3Ek__BackingField_13;
	// System.Diagnostics.Stopwatch ExitGames.Client.Photon.PhotonPeer::trafficStatsStopwatch
	Stopwatch_t305734070 * ___trafficStatsStopwatch_14;
	// System.Boolean ExitGames.Client.Photon.PhotonPeer::trafficStatsEnabled
	bool ___trafficStatsEnabled_15;
	// System.Int32 ExitGames.Client.Photon.PhotonPeer::commandLogSize
	int32_t ___commandLogSize_16;
	// System.Boolean ExitGames.Client.Photon.PhotonPeer::<EnableServerTracing>k__BackingField
	bool ___U3CEnableServerTracingU3Ek__BackingField_17;
	// System.Byte ExitGames.Client.Photon.PhotonPeer::quickResendAttempts
	uint8_t ___quickResendAttempts_18;
	// System.Int32 ExitGames.Client.Photon.PhotonPeer::RhttpMinConnections
	int32_t ___RhttpMinConnections_19;
	// System.Int32 ExitGames.Client.Photon.PhotonPeer::RhttpMaxConnections
	int32_t ___RhttpMaxConnections_20;
	// System.Int32 ExitGames.Client.Photon.PhotonPeer::<LimitOfUnreliableCommands>k__BackingField
	int32_t ___U3CLimitOfUnreliableCommandsU3Ek__BackingField_21;
	// System.Byte ExitGames.Client.Photon.PhotonPeer::ChannelCount
	uint8_t ___ChannelCount_22;
	// System.Boolean ExitGames.Client.Photon.PhotonPeer::crcEnabled
	bool ___crcEnabled_23;
	// System.Int32 ExitGames.Client.Photon.PhotonPeer::WarningSize
	int32_t ___WarningSize_24;
	// System.Int32 ExitGames.Client.Photon.PhotonPeer::SentCountAllowance
	int32_t ___SentCountAllowance_25;
	// System.Int32 ExitGames.Client.Photon.PhotonPeer::TimePingInterval
	int32_t ___TimePingInterval_26;
	// System.Int32 ExitGames.Client.Photon.PhotonPeer::DisconnectTimeout
	int32_t ___DisconnectTimeout_27;
	// ExitGames.Client.Photon.ConnectionProtocol ExitGames.Client.Photon.PhotonPeer::<TransportProtocol>k__BackingField
	uint8_t ___U3CTransportProtocolU3Ek__BackingField_28;
	// System.Int32 ExitGames.Client.Photon.PhotonPeer::mtu
	int32_t ___mtu_30;
	// System.Boolean ExitGames.Client.Photon.PhotonPeer::<IsSendingOnlyAcks>k__BackingField
	bool ___U3CIsSendingOnlyAcksU3Ek__BackingField_31;
	// ExitGames.Client.Photon.PeerBase ExitGames.Client.Photon.PhotonPeer::peerBase
	PeerBase_t2956237011 * ___peerBase_32;
	// System.Object ExitGames.Client.Photon.PhotonPeer::SendOutgoingLockObject
	RuntimeObject * ___SendOutgoingLockObject_33;
	// System.Object ExitGames.Client.Photon.PhotonPeer::DispatchLockObject
	RuntimeObject * ___DispatchLockObject_34;
	// System.Object ExitGames.Client.Photon.PhotonPeer::EnqueueLock
	RuntimeObject * ___EnqueueLock_35;
	// System.Byte[] ExitGames.Client.Photon.PhotonPeer::PayloadEncryptionSecret
	ByteU5BU5D_t4116647657* ___PayloadEncryptionSecret_36;
	// ExitGames.Client.Photon.EncryptorManaged.Encryptor ExitGames.Client.Photon.PhotonPeer::encryptor
	Encryptor_t200327285 * ___encryptor_37;
	// ExitGames.Client.Photon.EncryptorManaged.Decryptor ExitGames.Client.Photon.PhotonPeer::decryptor
	Decryptor_t2116099858 * ___decryptor_38;

public:
	inline static int32_t get_offset_of_ClientSdkId_3() { return static_cast<int32_t>(offsetof(PhotonPeer_t1608153861, ___ClientSdkId_3)); }
	inline uint8_t get_ClientSdkId_3() const { return ___ClientSdkId_3; }
	inline uint8_t* get_address_of_ClientSdkId_3() { return &___ClientSdkId_3; }
	inline void set_ClientSdkId_3(uint8_t value)
	{
		___ClientSdkId_3 = value;
	}

	inline static int32_t get_offset_of_clientVersion_5() { return static_cast<int32_t>(offsetof(PhotonPeer_t1608153861, ___clientVersion_5)); }
	inline String_t* get_clientVersion_5() const { return ___clientVersion_5; }
	inline String_t** get_address_of_clientVersion_5() { return &___clientVersion_5; }
	inline void set_clientVersion_5(String_t* value)
	{
		___clientVersion_5 = value;
		Il2CppCodeGenWriteBarrier((&___clientVersion_5), value);
	}

	inline static int32_t get_offset_of_U3CSerializationProtocolTypeU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(PhotonPeer_t1608153861, ___U3CSerializationProtocolTypeU3Ek__BackingField_6)); }
	inline int32_t get_U3CSerializationProtocolTypeU3Ek__BackingField_6() const { return ___U3CSerializationProtocolTypeU3Ek__BackingField_6; }
	inline int32_t* get_address_of_U3CSerializationProtocolTypeU3Ek__BackingField_6() { return &___U3CSerializationProtocolTypeU3Ek__BackingField_6; }
	inline void set_U3CSerializationProtocolTypeU3Ek__BackingField_6(int32_t value)
	{
		___U3CSerializationProtocolTypeU3Ek__BackingField_6 = value;
	}

	inline static int32_t get_offset_of_SocketImplementationConfig_7() { return static_cast<int32_t>(offsetof(PhotonPeer_t1608153861, ___SocketImplementationConfig_7)); }
	inline Dictionary_2_t1253839074 * get_SocketImplementationConfig_7() const { return ___SocketImplementationConfig_7; }
	inline Dictionary_2_t1253839074 ** get_address_of_SocketImplementationConfig_7() { return &___SocketImplementationConfig_7; }
	inline void set_SocketImplementationConfig_7(Dictionary_2_t1253839074 * value)
	{
		___SocketImplementationConfig_7 = value;
		Il2CppCodeGenWriteBarrier((&___SocketImplementationConfig_7), value);
	}

	inline static int32_t get_offset_of_U3CSocketImplementationU3Ek__BackingField_8() { return static_cast<int32_t>(offsetof(PhotonPeer_t1608153861, ___U3CSocketImplementationU3Ek__BackingField_8)); }
	inline Type_t * get_U3CSocketImplementationU3Ek__BackingField_8() const { return ___U3CSocketImplementationU3Ek__BackingField_8; }
	inline Type_t ** get_address_of_U3CSocketImplementationU3Ek__BackingField_8() { return &___U3CSocketImplementationU3Ek__BackingField_8; }
	inline void set_U3CSocketImplementationU3Ek__BackingField_8(Type_t * value)
	{
		___U3CSocketImplementationU3Ek__BackingField_8 = value;
		Il2CppCodeGenWriteBarrier((&___U3CSocketImplementationU3Ek__BackingField_8), value);
	}

	inline static int32_t get_offset_of_DebugOut_9() { return static_cast<int32_t>(offsetof(PhotonPeer_t1608153861, ___DebugOut_9)); }
	inline uint8_t get_DebugOut_9() const { return ___DebugOut_9; }
	inline uint8_t* get_address_of_DebugOut_9() { return &___DebugOut_9; }
	inline void set_DebugOut_9(uint8_t value)
	{
		___DebugOut_9 = value;
	}

	inline static int32_t get_offset_of_U3CListenerU3Ek__BackingField_10() { return static_cast<int32_t>(offsetof(PhotonPeer_t1608153861, ___U3CListenerU3Ek__BackingField_10)); }
	inline RuntimeObject* get_U3CListenerU3Ek__BackingField_10() const { return ___U3CListenerU3Ek__BackingField_10; }
	inline RuntimeObject** get_address_of_U3CListenerU3Ek__BackingField_10() { return &___U3CListenerU3Ek__BackingField_10; }
	inline void set_U3CListenerU3Ek__BackingField_10(RuntimeObject* value)
	{
		___U3CListenerU3Ek__BackingField_10 = value;
		Il2CppCodeGenWriteBarrier((&___U3CListenerU3Ek__BackingField_10), value);
	}

	inline static int32_t get_offset_of_U3CTrafficStatsIncomingU3Ek__BackingField_11() { return static_cast<int32_t>(offsetof(PhotonPeer_t1608153861, ___U3CTrafficStatsIncomingU3Ek__BackingField_11)); }
	inline TrafficStats_t1302902347 * get_U3CTrafficStatsIncomingU3Ek__BackingField_11() const { return ___U3CTrafficStatsIncomingU3Ek__BackingField_11; }
	inline TrafficStats_t1302902347 ** get_address_of_U3CTrafficStatsIncomingU3Ek__BackingField_11() { return &___U3CTrafficStatsIncomingU3Ek__BackingField_11; }
	inline void set_U3CTrafficStatsIncomingU3Ek__BackingField_11(TrafficStats_t1302902347 * value)
	{
		___U3CTrafficStatsIncomingU3Ek__BackingField_11 = value;
		Il2CppCodeGenWriteBarrier((&___U3CTrafficStatsIncomingU3Ek__BackingField_11), value);
	}

	inline static int32_t get_offset_of_U3CTrafficStatsOutgoingU3Ek__BackingField_12() { return static_cast<int32_t>(offsetof(PhotonPeer_t1608153861, ___U3CTrafficStatsOutgoingU3Ek__BackingField_12)); }
	inline TrafficStats_t1302902347 * get_U3CTrafficStatsOutgoingU3Ek__BackingField_12() const { return ___U3CTrafficStatsOutgoingU3Ek__BackingField_12; }
	inline TrafficStats_t1302902347 ** get_address_of_U3CTrafficStatsOutgoingU3Ek__BackingField_12() { return &___U3CTrafficStatsOutgoingU3Ek__BackingField_12; }
	inline void set_U3CTrafficStatsOutgoingU3Ek__BackingField_12(TrafficStats_t1302902347 * value)
	{
		___U3CTrafficStatsOutgoingU3Ek__BackingField_12 = value;
		Il2CppCodeGenWriteBarrier((&___U3CTrafficStatsOutgoingU3Ek__BackingField_12), value);
	}

	inline static int32_t get_offset_of_U3CTrafficStatsGameLevelU3Ek__BackingField_13() { return static_cast<int32_t>(offsetof(PhotonPeer_t1608153861, ___U3CTrafficStatsGameLevelU3Ek__BackingField_13)); }
	inline TrafficStatsGameLevel_t4013908777 * get_U3CTrafficStatsGameLevelU3Ek__BackingField_13() const { return ___U3CTrafficStatsGameLevelU3Ek__BackingField_13; }
	inline TrafficStatsGameLevel_t4013908777 ** get_address_of_U3CTrafficStatsGameLevelU3Ek__BackingField_13() { return &___U3CTrafficStatsGameLevelU3Ek__BackingField_13; }
	inline void set_U3CTrafficStatsGameLevelU3Ek__BackingField_13(TrafficStatsGameLevel_t4013908777 * value)
	{
		___U3CTrafficStatsGameLevelU3Ek__BackingField_13 = value;
		Il2CppCodeGenWriteBarrier((&___U3CTrafficStatsGameLevelU3Ek__BackingField_13), value);
	}

	inline static int32_t get_offset_of_trafficStatsStopwatch_14() { return static_cast<int32_t>(offsetof(PhotonPeer_t1608153861, ___trafficStatsStopwatch_14)); }
	inline Stopwatch_t305734070 * get_trafficStatsStopwatch_14() const { return ___trafficStatsStopwatch_14; }
	inline Stopwatch_t305734070 ** get_address_of_trafficStatsStopwatch_14() { return &___trafficStatsStopwatch_14; }
	inline void set_trafficStatsStopwatch_14(Stopwatch_t305734070 * value)
	{
		___trafficStatsStopwatch_14 = value;
		Il2CppCodeGenWriteBarrier((&___trafficStatsStopwatch_14), value);
	}

	inline static int32_t get_offset_of_trafficStatsEnabled_15() { return static_cast<int32_t>(offsetof(PhotonPeer_t1608153861, ___trafficStatsEnabled_15)); }
	inline bool get_trafficStatsEnabled_15() const { return ___trafficStatsEnabled_15; }
	inline bool* get_address_of_trafficStatsEnabled_15() { return &___trafficStatsEnabled_15; }
	inline void set_trafficStatsEnabled_15(bool value)
	{
		___trafficStatsEnabled_15 = value;
	}

	inline static int32_t get_offset_of_commandLogSize_16() { return static_cast<int32_t>(offsetof(PhotonPeer_t1608153861, ___commandLogSize_16)); }
	inline int32_t get_commandLogSize_16() const { return ___commandLogSize_16; }
	inline int32_t* get_address_of_commandLogSize_16() { return &___commandLogSize_16; }
	inline void set_commandLogSize_16(int32_t value)
	{
		___commandLogSize_16 = value;
	}

	inline static int32_t get_offset_of_U3CEnableServerTracingU3Ek__BackingField_17() { return static_cast<int32_t>(offsetof(PhotonPeer_t1608153861, ___U3CEnableServerTracingU3Ek__BackingField_17)); }
	inline bool get_U3CEnableServerTracingU3Ek__BackingField_17() const { return ___U3CEnableServerTracingU3Ek__BackingField_17; }
	inline bool* get_address_of_U3CEnableServerTracingU3Ek__BackingField_17() { return &___U3CEnableServerTracingU3Ek__BackingField_17; }
	inline void set_U3CEnableServerTracingU3Ek__BackingField_17(bool value)
	{
		___U3CEnableServerTracingU3Ek__BackingField_17 = value;
	}

	inline static int32_t get_offset_of_quickResendAttempts_18() { return static_cast<int32_t>(offsetof(PhotonPeer_t1608153861, ___quickResendAttempts_18)); }
	inline uint8_t get_quickResendAttempts_18() const { return ___quickResendAttempts_18; }
	inline uint8_t* get_address_of_quickResendAttempts_18() { return &___quickResendAttempts_18; }
	inline void set_quickResendAttempts_18(uint8_t value)
	{
		___quickResendAttempts_18 = value;
	}

	inline static int32_t get_offset_of_RhttpMinConnections_19() { return static_cast<int32_t>(offsetof(PhotonPeer_t1608153861, ___RhttpMinConnections_19)); }
	inline int32_t get_RhttpMinConnections_19() const { return ___RhttpMinConnections_19; }
	inline int32_t* get_address_of_RhttpMinConnections_19() { return &___RhttpMinConnections_19; }
	inline void set_RhttpMinConnections_19(int32_t value)
	{
		___RhttpMinConnections_19 = value;
	}

	inline static int32_t get_offset_of_RhttpMaxConnections_20() { return static_cast<int32_t>(offsetof(PhotonPeer_t1608153861, ___RhttpMaxConnections_20)); }
	inline int32_t get_RhttpMaxConnections_20() const { return ___RhttpMaxConnections_20; }
	inline int32_t* get_address_of_RhttpMaxConnections_20() { return &___RhttpMaxConnections_20; }
	inline void set_RhttpMaxConnections_20(int32_t value)
	{
		___RhttpMaxConnections_20 = value;
	}

	inline static int32_t get_offset_of_U3CLimitOfUnreliableCommandsU3Ek__BackingField_21() { return static_cast<int32_t>(offsetof(PhotonPeer_t1608153861, ___U3CLimitOfUnreliableCommandsU3Ek__BackingField_21)); }
	inline int32_t get_U3CLimitOfUnreliableCommandsU3Ek__BackingField_21() const { return ___U3CLimitOfUnreliableCommandsU3Ek__BackingField_21; }
	inline int32_t* get_address_of_U3CLimitOfUnreliableCommandsU3Ek__BackingField_21() { return &___U3CLimitOfUnreliableCommandsU3Ek__BackingField_21; }
	inline void set_U3CLimitOfUnreliableCommandsU3Ek__BackingField_21(int32_t value)
	{
		___U3CLimitOfUnreliableCommandsU3Ek__BackingField_21 = value;
	}

	inline static int32_t get_offset_of_ChannelCount_22() { return static_cast<int32_t>(offsetof(PhotonPeer_t1608153861, ___ChannelCount_22)); }
	inline uint8_t get_ChannelCount_22() const { return ___ChannelCount_22; }
	inline uint8_t* get_address_of_ChannelCount_22() { return &___ChannelCount_22; }
	inline void set_ChannelCount_22(uint8_t value)
	{
		___ChannelCount_22 = value;
	}

	inline static int32_t get_offset_of_crcEnabled_23() { return static_cast<int32_t>(offsetof(PhotonPeer_t1608153861, ___crcEnabled_23)); }
	inline bool get_crcEnabled_23() const { return ___crcEnabled_23; }
	inline bool* get_address_of_crcEnabled_23() { return &___crcEnabled_23; }
	inline void set_crcEnabled_23(bool value)
	{
		___crcEnabled_23 = value;
	}

	inline static int32_t get_offset_of_WarningSize_24() { return static_cast<int32_t>(offsetof(PhotonPeer_t1608153861, ___WarningSize_24)); }
	inline int32_t get_WarningSize_24() const { return ___WarningSize_24; }
	inline int32_t* get_address_of_WarningSize_24() { return &___WarningSize_24; }
	inline void set_WarningSize_24(int32_t value)
	{
		___WarningSize_24 = value;
	}

	inline static int32_t get_offset_of_SentCountAllowance_25() { return static_cast<int32_t>(offsetof(PhotonPeer_t1608153861, ___SentCountAllowance_25)); }
	inline int32_t get_SentCountAllowance_25() const { return ___SentCountAllowance_25; }
	inline int32_t* get_address_of_SentCountAllowance_25() { return &___SentCountAllowance_25; }
	inline void set_SentCountAllowance_25(int32_t value)
	{
		___SentCountAllowance_25 = value;
	}

	inline static int32_t get_offset_of_TimePingInterval_26() { return static_cast<int32_t>(offsetof(PhotonPeer_t1608153861, ___TimePingInterval_26)); }
	inline int32_t get_TimePingInterval_26() const { return ___TimePingInterval_26; }
	inline int32_t* get_address_of_TimePingInterval_26() { return &___TimePingInterval_26; }
	inline void set_TimePingInterval_26(int32_t value)
	{
		___TimePingInterval_26 = value;
	}

	inline static int32_t get_offset_of_DisconnectTimeout_27() { return static_cast<int32_t>(offsetof(PhotonPeer_t1608153861, ___DisconnectTimeout_27)); }
	inline int32_t get_DisconnectTimeout_27() const { return ___DisconnectTimeout_27; }
	inline int32_t* get_address_of_DisconnectTimeout_27() { return &___DisconnectTimeout_27; }
	inline void set_DisconnectTimeout_27(int32_t value)
	{
		___DisconnectTimeout_27 = value;
	}

	inline static int32_t get_offset_of_U3CTransportProtocolU3Ek__BackingField_28() { return static_cast<int32_t>(offsetof(PhotonPeer_t1608153861, ___U3CTransportProtocolU3Ek__BackingField_28)); }
	inline uint8_t get_U3CTransportProtocolU3Ek__BackingField_28() const { return ___U3CTransportProtocolU3Ek__BackingField_28; }
	inline uint8_t* get_address_of_U3CTransportProtocolU3Ek__BackingField_28() { return &___U3CTransportProtocolU3Ek__BackingField_28; }
	inline void set_U3CTransportProtocolU3Ek__BackingField_28(uint8_t value)
	{
		___U3CTransportProtocolU3Ek__BackingField_28 = value;
	}

	inline static int32_t get_offset_of_mtu_30() { return static_cast<int32_t>(offsetof(PhotonPeer_t1608153861, ___mtu_30)); }
	inline int32_t get_mtu_30() const { return ___mtu_30; }
	inline int32_t* get_address_of_mtu_30() { return &___mtu_30; }
	inline void set_mtu_30(int32_t value)
	{
		___mtu_30 = value;
	}

	inline static int32_t get_offset_of_U3CIsSendingOnlyAcksU3Ek__BackingField_31() { return static_cast<int32_t>(offsetof(PhotonPeer_t1608153861, ___U3CIsSendingOnlyAcksU3Ek__BackingField_31)); }
	inline bool get_U3CIsSendingOnlyAcksU3Ek__BackingField_31() const { return ___U3CIsSendingOnlyAcksU3Ek__BackingField_31; }
	inline bool* get_address_of_U3CIsSendingOnlyAcksU3Ek__BackingField_31() { return &___U3CIsSendingOnlyAcksU3Ek__BackingField_31; }
	inline void set_U3CIsSendingOnlyAcksU3Ek__BackingField_31(bool value)
	{
		___U3CIsSendingOnlyAcksU3Ek__BackingField_31 = value;
	}

	inline static int32_t get_offset_of_peerBase_32() { return static_cast<int32_t>(offsetof(PhotonPeer_t1608153861, ___peerBase_32)); }
	inline PeerBase_t2956237011 * get_peerBase_32() const { return ___peerBase_32; }
	inline PeerBase_t2956237011 ** get_address_of_peerBase_32() { return &___peerBase_32; }
	inline void set_peerBase_32(PeerBase_t2956237011 * value)
	{
		___peerBase_32 = value;
		Il2CppCodeGenWriteBarrier((&___peerBase_32), value);
	}

	inline static int32_t get_offset_of_SendOutgoingLockObject_33() { return static_cast<int32_t>(offsetof(PhotonPeer_t1608153861, ___SendOutgoingLockObject_33)); }
	inline RuntimeObject * get_SendOutgoingLockObject_33() const { return ___SendOutgoingLockObject_33; }
	inline RuntimeObject ** get_address_of_SendOutgoingLockObject_33() { return &___SendOutgoingLockObject_33; }
	inline void set_SendOutgoingLockObject_33(RuntimeObject * value)
	{
		___SendOutgoingLockObject_33 = value;
		Il2CppCodeGenWriteBarrier((&___SendOutgoingLockObject_33), value);
	}

	inline static int32_t get_offset_of_DispatchLockObject_34() { return static_cast<int32_t>(offsetof(PhotonPeer_t1608153861, ___DispatchLockObject_34)); }
	inline RuntimeObject * get_DispatchLockObject_34() const { return ___DispatchLockObject_34; }
	inline RuntimeObject ** get_address_of_DispatchLockObject_34() { return &___DispatchLockObject_34; }
	inline void set_DispatchLockObject_34(RuntimeObject * value)
	{
		___DispatchLockObject_34 = value;
		Il2CppCodeGenWriteBarrier((&___DispatchLockObject_34), value);
	}

	inline static int32_t get_offset_of_EnqueueLock_35() { return static_cast<int32_t>(offsetof(PhotonPeer_t1608153861, ___EnqueueLock_35)); }
	inline RuntimeObject * get_EnqueueLock_35() const { return ___EnqueueLock_35; }
	inline RuntimeObject ** get_address_of_EnqueueLock_35() { return &___EnqueueLock_35; }
	inline void set_EnqueueLock_35(RuntimeObject * value)
	{
		___EnqueueLock_35 = value;
		Il2CppCodeGenWriteBarrier((&___EnqueueLock_35), value);
	}

	inline static int32_t get_offset_of_PayloadEncryptionSecret_36() { return static_cast<int32_t>(offsetof(PhotonPeer_t1608153861, ___PayloadEncryptionSecret_36)); }
	inline ByteU5BU5D_t4116647657* get_PayloadEncryptionSecret_36() const { return ___PayloadEncryptionSecret_36; }
	inline ByteU5BU5D_t4116647657** get_address_of_PayloadEncryptionSecret_36() { return &___PayloadEncryptionSecret_36; }
	inline void set_PayloadEncryptionSecret_36(ByteU5BU5D_t4116647657* value)
	{
		___PayloadEncryptionSecret_36 = value;
		Il2CppCodeGenWriteBarrier((&___PayloadEncryptionSecret_36), value);
	}

	inline static int32_t get_offset_of_encryptor_37() { return static_cast<int32_t>(offsetof(PhotonPeer_t1608153861, ___encryptor_37)); }
	inline Encryptor_t200327285 * get_encryptor_37() const { return ___encryptor_37; }
	inline Encryptor_t200327285 ** get_address_of_encryptor_37() { return &___encryptor_37; }
	inline void set_encryptor_37(Encryptor_t200327285 * value)
	{
		___encryptor_37 = value;
		Il2CppCodeGenWriteBarrier((&___encryptor_37), value);
	}

	inline static int32_t get_offset_of_decryptor_38() { return static_cast<int32_t>(offsetof(PhotonPeer_t1608153861, ___decryptor_38)); }
	inline Decryptor_t2116099858 * get_decryptor_38() const { return ___decryptor_38; }
	inline Decryptor_t2116099858 ** get_address_of_decryptor_38() { return &___decryptor_38; }
	inline void set_decryptor_38(Decryptor_t2116099858 * value)
	{
		___decryptor_38 = value;
		Il2CppCodeGenWriteBarrier((&___decryptor_38), value);
	}
};

struct PhotonPeer_t1608153861_StaticFields
{
public:
	// System.Boolean ExitGames.Client.Photon.PhotonPeer::AsyncKeyExchange
	bool ___AsyncKeyExchange_4;
	// System.Int32 ExitGames.Client.Photon.PhotonPeer::OutgoingStreamBufferSize
	int32_t ___OutgoingStreamBufferSize_29;

public:
	inline static int32_t get_offset_of_AsyncKeyExchange_4() { return static_cast<int32_t>(offsetof(PhotonPeer_t1608153861_StaticFields, ___AsyncKeyExchange_4)); }
	inline bool get_AsyncKeyExchange_4() const { return ___AsyncKeyExchange_4; }
	inline bool* get_address_of_AsyncKeyExchange_4() { return &___AsyncKeyExchange_4; }
	inline void set_AsyncKeyExchange_4(bool value)
	{
		___AsyncKeyExchange_4 = value;
	}

	inline static int32_t get_offset_of_OutgoingStreamBufferSize_29() { return static_cast<int32_t>(offsetof(PhotonPeer_t1608153861_StaticFields, ___OutgoingStreamBufferSize_29)); }
	inline int32_t get_OutgoingStreamBufferSize_29() const { return ___OutgoingStreamBufferSize_29; }
	inline int32_t* get_address_of_OutgoingStreamBufferSize_29() { return &___OutgoingStreamBufferSize_29; }
	inline void set_OutgoingStreamBufferSize_29(int32_t value)
	{
		___OutgoingStreamBufferSize_29 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PHOTONPEER_T1608153861_H
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
#ifndef CHATPEER_T2186541770_H
#define CHATPEER_T2186541770_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ExitGames.Client.Photon.Chat.ChatPeer
struct  ChatPeer_t2186541770  : public PhotonPeer_t1608153861
{
public:

public:
};

struct ChatPeer_t2186541770_StaticFields
{
public:
	// System.Collections.Generic.Dictionary`2<ExitGames.Client.Photon.ConnectionProtocol,System.Int32> ExitGames.Client.Photon.Chat.ChatPeer::ProtocolToNameServerPort
	Dictionary_2_t1720840067 * ___ProtocolToNameServerPort_41;

public:
	inline static int32_t get_offset_of_ProtocolToNameServerPort_41() { return static_cast<int32_t>(offsetof(ChatPeer_t2186541770_StaticFields, ___ProtocolToNameServerPort_41)); }
	inline Dictionary_2_t1720840067 * get_ProtocolToNameServerPort_41() const { return ___ProtocolToNameServerPort_41; }
	inline Dictionary_2_t1720840067 ** get_address_of_ProtocolToNameServerPort_41() { return &___ProtocolToNameServerPort_41; }
	inline void set_ProtocolToNameServerPort_41(Dictionary_2_t1720840067 * value)
	{
		___ProtocolToNameServerPort_41 = value;
		Il2CppCodeGenWriteBarrier((&___ProtocolToNameServerPort_41), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CHATPEER_T2186541770_H
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
#ifndef BACKGROUNDCONTROLLER_T2094213180_H
#define BACKGROUNDCONTROLLER_T2094213180_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// BackgroundController
struct  BackgroundController_t2094213180  : public MonoBehaviour_t3962482529
{
public:
	// UnityEngine.GameObject BackgroundController::Hitsuji
	GameObject_t1113636619 * ___Hitsuji_4;
	// UnityEngine.GameObject BackgroundController::Background
	GameObject_t1113636619 * ___Background_5;

public:
	inline static int32_t get_offset_of_Hitsuji_4() { return static_cast<int32_t>(offsetof(BackgroundController_t2094213180, ___Hitsuji_4)); }
	inline GameObject_t1113636619 * get_Hitsuji_4() const { return ___Hitsuji_4; }
	inline GameObject_t1113636619 ** get_address_of_Hitsuji_4() { return &___Hitsuji_4; }
	inline void set_Hitsuji_4(GameObject_t1113636619 * value)
	{
		___Hitsuji_4 = value;
		Il2CppCodeGenWriteBarrier((&___Hitsuji_4), value);
	}

	inline static int32_t get_offset_of_Background_5() { return static_cast<int32_t>(offsetof(BackgroundController_t2094213180, ___Background_5)); }
	inline GameObject_t1113636619 * get_Background_5() const { return ___Background_5; }
	inline GameObject_t1113636619 ** get_address_of_Background_5() { return &___Background_5; }
	inline void set_Background_5(GameObject_t1113636619 * value)
	{
		___Background_5 = value;
		Il2CppCodeGenWriteBarrier((&___Background_5), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BACKGROUNDCONTROLLER_T2094213180_H
#ifndef BACKGROUNDCONTROLLER2_T211584824_H
#define BACKGROUNDCONTROLLER2_T211584824_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// BackgroundController2
struct  BackgroundController2_t211584824  : public MonoBehaviour_t3962482529
{
public:
	// System.Single BackgroundController2::speed
	float ___speed_4;
	// UnityEngine.GameObject BackgroundController2::Background
	GameObject_t1113636619 * ___Background_5;

public:
	inline static int32_t get_offset_of_speed_4() { return static_cast<int32_t>(offsetof(BackgroundController2_t211584824, ___speed_4)); }
	inline float get_speed_4() const { return ___speed_4; }
	inline float* get_address_of_speed_4() { return &___speed_4; }
	inline void set_speed_4(float value)
	{
		___speed_4 = value;
	}

	inline static int32_t get_offset_of_Background_5() { return static_cast<int32_t>(offsetof(BackgroundController2_t211584824, ___Background_5)); }
	inline GameObject_t1113636619 * get_Background_5() const { return ___Background_5; }
	inline GameObject_t1113636619 ** get_address_of_Background_5() { return &___Background_5; }
	inline void set_Background_5(GameObject_t1113636619 * value)
	{
		___Background_5 = value;
		Il2CppCodeGenWriteBarrier((&___Background_5), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BACKGROUNDCONTROLLER2_T211584824_H
#ifndef FADETEST_T493680287_H
#define FADETEST_T493680287_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Fadetest
struct  Fadetest_t493680287  : public MonoBehaviour_t3962482529
{
public:
	// System.Single Fadetest::alfa
	float ___alfa_4;
	// System.Single Fadetest::speed
	float ___speed_5;
	// System.Single Fadetest::red
	float ___red_6;
	// System.Single Fadetest::green
	float ___green_7;
	// System.Single Fadetest::blue
	float ___blue_8;

public:
	inline static int32_t get_offset_of_alfa_4() { return static_cast<int32_t>(offsetof(Fadetest_t493680287, ___alfa_4)); }
	inline float get_alfa_4() const { return ___alfa_4; }
	inline float* get_address_of_alfa_4() { return &___alfa_4; }
	inline void set_alfa_4(float value)
	{
		___alfa_4 = value;
	}

	inline static int32_t get_offset_of_speed_5() { return static_cast<int32_t>(offsetof(Fadetest_t493680287, ___speed_5)); }
	inline float get_speed_5() const { return ___speed_5; }
	inline float* get_address_of_speed_5() { return &___speed_5; }
	inline void set_speed_5(float value)
	{
		___speed_5 = value;
	}

	inline static int32_t get_offset_of_red_6() { return static_cast<int32_t>(offsetof(Fadetest_t493680287, ___red_6)); }
	inline float get_red_6() const { return ___red_6; }
	inline float* get_address_of_red_6() { return &___red_6; }
	inline void set_red_6(float value)
	{
		___red_6 = value;
	}

	inline static int32_t get_offset_of_green_7() { return static_cast<int32_t>(offsetof(Fadetest_t493680287, ___green_7)); }
	inline float get_green_7() const { return ___green_7; }
	inline float* get_address_of_green_7() { return &___green_7; }
	inline void set_green_7(float value)
	{
		___green_7 = value;
	}

	inline static int32_t get_offset_of_blue_8() { return static_cast<int32_t>(offsetof(Fadetest_t493680287, ___blue_8)); }
	inline float get_blue_8() const { return ___blue_8; }
	inline float* get_address_of_blue_8() { return &___blue_8; }
	inline void set_blue_8(float value)
	{
		___blue_8 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // FADETEST_T493680287_H
#ifndef MASKMOVE_T1475458627_H
#define MASKMOVE_T1475458627_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Maskmove
struct  Maskmove_t1475458627  : public MonoBehaviour_t3962482529
{
public:
	// System.Single Maskmove::speed
	float ___speed_4;
	// UnityEngine.GameObject Maskmove::Mask
	GameObject_t1113636619 * ___Mask_5;

public:
	inline static int32_t get_offset_of_speed_4() { return static_cast<int32_t>(offsetof(Maskmove_t1475458627, ___speed_4)); }
	inline float get_speed_4() const { return ___speed_4; }
	inline float* get_address_of_speed_4() { return &___speed_4; }
	inline void set_speed_4(float value)
	{
		___speed_4 = value;
	}

	inline static int32_t get_offset_of_Mask_5() { return static_cast<int32_t>(offsetof(Maskmove_t1475458627, ___Mask_5)); }
	inline GameObject_t1113636619 * get_Mask_5() const { return ___Mask_5; }
	inline GameObject_t1113636619 ** get_address_of_Mask_5() { return &___Mask_5; }
	inline void set_Mask_5(GameObject_t1113636619 * value)
	{
		___Mask_5 = value;
		Il2CppCodeGenWriteBarrier((&___Mask_5), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MASKMOVE_T1475458627_H
#ifndef MASKMOVE2_T910172094_H
#define MASKMOVE2_T910172094_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Maskmove2
struct  Maskmove2_t910172094  : public MonoBehaviour_t3962482529
{
public:
	// System.Single Maskmove2::speed
	float ___speed_4;
	// UnityEngine.GameObject Maskmove2::Mask
	GameObject_t1113636619 * ___Mask_5;

public:
	inline static int32_t get_offset_of_speed_4() { return static_cast<int32_t>(offsetof(Maskmove2_t910172094, ___speed_4)); }
	inline float get_speed_4() const { return ___speed_4; }
	inline float* get_address_of_speed_4() { return &___speed_4; }
	inline void set_speed_4(float value)
	{
		___speed_4 = value;
	}

	inline static int32_t get_offset_of_Mask_5() { return static_cast<int32_t>(offsetof(Maskmove2_t910172094, ___Mask_5)); }
	inline GameObject_t1113636619 * get_Mask_5() const { return ___Mask_5; }
	inline GameObject_t1113636619 ** get_address_of_Mask_5() { return &___Mask_5; }
	inline void set_Mask_5(GameObject_t1113636619 * value)
	{
		___Mask_5 = value;
		Il2CppCodeGenWriteBarrier((&___Mask_5), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MASKMOVE2_T910172094_H
#ifndef PAUSESCRIPT_T3720017255_H
#define PAUSESCRIPT_T3720017255_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PauseScript
struct  PauseScript_t3720017255  : public MonoBehaviour_t3962482529
{
public:
	// UnityEngine.GameObject PauseScript::pauseUI
	GameObject_t1113636619 * ___pauseUI_5;
	// UnityEngine.GameObject PauseScript::pauseButton
	GameObject_t1113636619 * ___pauseButton_6;

public:
	inline static int32_t get_offset_of_pauseUI_5() { return static_cast<int32_t>(offsetof(PauseScript_t3720017255, ___pauseUI_5)); }
	inline GameObject_t1113636619 * get_pauseUI_5() const { return ___pauseUI_5; }
	inline GameObject_t1113636619 ** get_address_of_pauseUI_5() { return &___pauseUI_5; }
	inline void set_pauseUI_5(GameObject_t1113636619 * value)
	{
		___pauseUI_5 = value;
		Il2CppCodeGenWriteBarrier((&___pauseUI_5), value);
	}

	inline static int32_t get_offset_of_pauseButton_6() { return static_cast<int32_t>(offsetof(PauseScript_t3720017255, ___pauseButton_6)); }
	inline GameObject_t1113636619 * get_pauseButton_6() const { return ___pauseButton_6; }
	inline GameObject_t1113636619 ** get_address_of_pauseButton_6() { return &___pauseButton_6; }
	inline void set_pauseButton_6(GameObject_t1113636619 * value)
	{
		___pauseButton_6 = value;
		Il2CppCodeGenWriteBarrier((&___pauseButton_6), value);
	}
};

struct PauseScript_t3720017255_StaticFields
{
public:
	// System.Int32 PauseScript::ito_flag
	int32_t ___ito_flag_4;

public:
	inline static int32_t get_offset_of_ito_flag_4() { return static_cast<int32_t>(offsetof(PauseScript_t3720017255_StaticFields, ___ito_flag_4)); }
	inline int32_t get_ito_flag_4() const { return ___ito_flag_4; }
	inline int32_t* get_address_of_ito_flag_4() { return &___ito_flag_4; }
	inline void set_ito_flag_4(int32_t value)
	{
		___ito_flag_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PAUSESCRIPT_T3720017255_H
#ifndef MONOBEHAVIOUR_T3225183318_H
#define MONOBEHAVIOUR_T3225183318_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Photon.MonoBehaviour
struct  MonoBehaviour_t3225183318  : public MonoBehaviour_t3962482529
{
public:
	// PhotonView Photon.MonoBehaviour::pvCache
	PhotonView_t2207721820 * ___pvCache_4;

public:
	inline static int32_t get_offset_of_pvCache_4() { return static_cast<int32_t>(offsetof(MonoBehaviour_t3225183318, ___pvCache_4)); }
	inline PhotonView_t2207721820 * get_pvCache_4() const { return ___pvCache_4; }
	inline PhotonView_t2207721820 ** get_address_of_pvCache_4() { return &___pvCache_4; }
	inline void set_pvCache_4(PhotonView_t2207721820 * value)
	{
		___pvCache_4 = value;
		Il2CppCodeGenWriteBarrier((&___pvCache_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MONOBEHAVIOUR_T3225183318_H
#ifndef PLAYERCONTROLLER_T2064355688_H
#define PLAYERCONTROLLER_T2064355688_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PlayerController
struct  PlayerController_t2064355688  : public MonoBehaviour_t3962482529
{
public:
	// UnityEngine.Vector3 PlayerController::pos
	Vector3_t3722313464  ___pos_4;
	// UnityEngine.Vector3 PlayerController::pos_ito
	Vector3_t3722313464  ___pos_ito_5;
	// UnityEngine.Vector3 PlayerController::pos_camera
	Vector3_t3722313464  ___pos_camera_6;
	// System.Single PlayerController::dirY
	float ___dirY_7;
	// System.Single PlayerController::dirX
	float ___dirX_8;
	// System.Single PlayerController::leng
	float ___leng_9;
	// System.Single PlayerController::target_pos
	float ___target_pos_10;
	// UnityEngine.GameObject PlayerController::ceiling
	GameObject_t1113636619 * ___ceiling_11;
	// UnityEngine.GameObject PlayerController::woolPrefab
	GameObject_t1113636619 * ___woolPrefab_12;
	// UnityEngine.GameObject PlayerController::bokaPrefab
	GameObject_t1113636619 * ___bokaPrefab_13;
	// UnityEngine.GameObject PlayerController::wool
	GameObject_t1113636619 * ___wool_14;
	// UnityEngine.Vector3 PlayerController::ceiling_pos
	Vector3_t3722313464  ___ceiling_pos_15;
	// UnityEngine.GameObject PlayerController::itoPrafab
	GameObject_t1113636619 * ___itoPrafab_16;
	// UnityEngine.GameObject PlayerController::ito
	GameObject_t1113636619 * ___ito_17;
	// UnityEngine.HingeJoint PlayerController::joint
	HingeJoint_t2516258575 * ___joint_18;
	// UnityEngine.HingeJoint PlayerController::joint_ito
	HingeJoint_t2516258575 * ___joint_ito_19;
	// UnityEngine.Rigidbody PlayerController::rb_player
	Rigidbody_t3916780224 * ___rb_player_20;
	// UnityEngine.GameObject PlayerController::female
	GameObject_t1113636619 * ___female_21;
	// UnityEngine.GameObject PlayerController::boka
	GameObject_t1113636619 * ___boka_22;
	// UnityEngine.Animator PlayerController::anim
	Animator_t434523843 * ___anim_23;
	// System.String PlayerController::sceneName
	String_t* ___sceneName_24;
	// System.Int32 PlayerController::ito_flag2
	int32_t ___ito_flag2_25;
	// System.Single PlayerController::wool_count
	float ___wool_count_26;
	// System.Int32 PlayerController::p
	int32_t ___p_27;
	// UnityEngine.UI.Slider PlayerController::_slider
	Slider_t3903728902 * ____slider_28;
	// System.Boolean PlayerController::swing
	bool ___swing_29;
	// System.Boolean PlayerController::jump
	bool ___jump_30;
	// System.Boolean PlayerController::boka_exit
	bool ___boka_exit_31;

public:
	inline static int32_t get_offset_of_pos_4() { return static_cast<int32_t>(offsetof(PlayerController_t2064355688, ___pos_4)); }
	inline Vector3_t3722313464  get_pos_4() const { return ___pos_4; }
	inline Vector3_t3722313464 * get_address_of_pos_4() { return &___pos_4; }
	inline void set_pos_4(Vector3_t3722313464  value)
	{
		___pos_4 = value;
	}

	inline static int32_t get_offset_of_pos_ito_5() { return static_cast<int32_t>(offsetof(PlayerController_t2064355688, ___pos_ito_5)); }
	inline Vector3_t3722313464  get_pos_ito_5() const { return ___pos_ito_5; }
	inline Vector3_t3722313464 * get_address_of_pos_ito_5() { return &___pos_ito_5; }
	inline void set_pos_ito_5(Vector3_t3722313464  value)
	{
		___pos_ito_5 = value;
	}

	inline static int32_t get_offset_of_pos_camera_6() { return static_cast<int32_t>(offsetof(PlayerController_t2064355688, ___pos_camera_6)); }
	inline Vector3_t3722313464  get_pos_camera_6() const { return ___pos_camera_6; }
	inline Vector3_t3722313464 * get_address_of_pos_camera_6() { return &___pos_camera_6; }
	inline void set_pos_camera_6(Vector3_t3722313464  value)
	{
		___pos_camera_6 = value;
	}

	inline static int32_t get_offset_of_dirY_7() { return static_cast<int32_t>(offsetof(PlayerController_t2064355688, ___dirY_7)); }
	inline float get_dirY_7() const { return ___dirY_7; }
	inline float* get_address_of_dirY_7() { return &___dirY_7; }
	inline void set_dirY_7(float value)
	{
		___dirY_7 = value;
	}

	inline static int32_t get_offset_of_dirX_8() { return static_cast<int32_t>(offsetof(PlayerController_t2064355688, ___dirX_8)); }
	inline float get_dirX_8() const { return ___dirX_8; }
	inline float* get_address_of_dirX_8() { return &___dirX_8; }
	inline void set_dirX_8(float value)
	{
		___dirX_8 = value;
	}

	inline static int32_t get_offset_of_leng_9() { return static_cast<int32_t>(offsetof(PlayerController_t2064355688, ___leng_9)); }
	inline float get_leng_9() const { return ___leng_9; }
	inline float* get_address_of_leng_9() { return &___leng_9; }
	inline void set_leng_9(float value)
	{
		___leng_9 = value;
	}

	inline static int32_t get_offset_of_target_pos_10() { return static_cast<int32_t>(offsetof(PlayerController_t2064355688, ___target_pos_10)); }
	inline float get_target_pos_10() const { return ___target_pos_10; }
	inline float* get_address_of_target_pos_10() { return &___target_pos_10; }
	inline void set_target_pos_10(float value)
	{
		___target_pos_10 = value;
	}

	inline static int32_t get_offset_of_ceiling_11() { return static_cast<int32_t>(offsetof(PlayerController_t2064355688, ___ceiling_11)); }
	inline GameObject_t1113636619 * get_ceiling_11() const { return ___ceiling_11; }
	inline GameObject_t1113636619 ** get_address_of_ceiling_11() { return &___ceiling_11; }
	inline void set_ceiling_11(GameObject_t1113636619 * value)
	{
		___ceiling_11 = value;
		Il2CppCodeGenWriteBarrier((&___ceiling_11), value);
	}

	inline static int32_t get_offset_of_woolPrefab_12() { return static_cast<int32_t>(offsetof(PlayerController_t2064355688, ___woolPrefab_12)); }
	inline GameObject_t1113636619 * get_woolPrefab_12() const { return ___woolPrefab_12; }
	inline GameObject_t1113636619 ** get_address_of_woolPrefab_12() { return &___woolPrefab_12; }
	inline void set_woolPrefab_12(GameObject_t1113636619 * value)
	{
		___woolPrefab_12 = value;
		Il2CppCodeGenWriteBarrier((&___woolPrefab_12), value);
	}

	inline static int32_t get_offset_of_bokaPrefab_13() { return static_cast<int32_t>(offsetof(PlayerController_t2064355688, ___bokaPrefab_13)); }
	inline GameObject_t1113636619 * get_bokaPrefab_13() const { return ___bokaPrefab_13; }
	inline GameObject_t1113636619 ** get_address_of_bokaPrefab_13() { return &___bokaPrefab_13; }
	inline void set_bokaPrefab_13(GameObject_t1113636619 * value)
	{
		___bokaPrefab_13 = value;
		Il2CppCodeGenWriteBarrier((&___bokaPrefab_13), value);
	}

	inline static int32_t get_offset_of_wool_14() { return static_cast<int32_t>(offsetof(PlayerController_t2064355688, ___wool_14)); }
	inline GameObject_t1113636619 * get_wool_14() const { return ___wool_14; }
	inline GameObject_t1113636619 ** get_address_of_wool_14() { return &___wool_14; }
	inline void set_wool_14(GameObject_t1113636619 * value)
	{
		___wool_14 = value;
		Il2CppCodeGenWriteBarrier((&___wool_14), value);
	}

	inline static int32_t get_offset_of_ceiling_pos_15() { return static_cast<int32_t>(offsetof(PlayerController_t2064355688, ___ceiling_pos_15)); }
	inline Vector3_t3722313464  get_ceiling_pos_15() const { return ___ceiling_pos_15; }
	inline Vector3_t3722313464 * get_address_of_ceiling_pos_15() { return &___ceiling_pos_15; }
	inline void set_ceiling_pos_15(Vector3_t3722313464  value)
	{
		___ceiling_pos_15 = value;
	}

	inline static int32_t get_offset_of_itoPrafab_16() { return static_cast<int32_t>(offsetof(PlayerController_t2064355688, ___itoPrafab_16)); }
	inline GameObject_t1113636619 * get_itoPrafab_16() const { return ___itoPrafab_16; }
	inline GameObject_t1113636619 ** get_address_of_itoPrafab_16() { return &___itoPrafab_16; }
	inline void set_itoPrafab_16(GameObject_t1113636619 * value)
	{
		___itoPrafab_16 = value;
		Il2CppCodeGenWriteBarrier((&___itoPrafab_16), value);
	}

	inline static int32_t get_offset_of_ito_17() { return static_cast<int32_t>(offsetof(PlayerController_t2064355688, ___ito_17)); }
	inline GameObject_t1113636619 * get_ito_17() const { return ___ito_17; }
	inline GameObject_t1113636619 ** get_address_of_ito_17() { return &___ito_17; }
	inline void set_ito_17(GameObject_t1113636619 * value)
	{
		___ito_17 = value;
		Il2CppCodeGenWriteBarrier((&___ito_17), value);
	}

	inline static int32_t get_offset_of_joint_18() { return static_cast<int32_t>(offsetof(PlayerController_t2064355688, ___joint_18)); }
	inline HingeJoint_t2516258575 * get_joint_18() const { return ___joint_18; }
	inline HingeJoint_t2516258575 ** get_address_of_joint_18() { return &___joint_18; }
	inline void set_joint_18(HingeJoint_t2516258575 * value)
	{
		___joint_18 = value;
		Il2CppCodeGenWriteBarrier((&___joint_18), value);
	}

	inline static int32_t get_offset_of_joint_ito_19() { return static_cast<int32_t>(offsetof(PlayerController_t2064355688, ___joint_ito_19)); }
	inline HingeJoint_t2516258575 * get_joint_ito_19() const { return ___joint_ito_19; }
	inline HingeJoint_t2516258575 ** get_address_of_joint_ito_19() { return &___joint_ito_19; }
	inline void set_joint_ito_19(HingeJoint_t2516258575 * value)
	{
		___joint_ito_19 = value;
		Il2CppCodeGenWriteBarrier((&___joint_ito_19), value);
	}

	inline static int32_t get_offset_of_rb_player_20() { return static_cast<int32_t>(offsetof(PlayerController_t2064355688, ___rb_player_20)); }
	inline Rigidbody_t3916780224 * get_rb_player_20() const { return ___rb_player_20; }
	inline Rigidbody_t3916780224 ** get_address_of_rb_player_20() { return &___rb_player_20; }
	inline void set_rb_player_20(Rigidbody_t3916780224 * value)
	{
		___rb_player_20 = value;
		Il2CppCodeGenWriteBarrier((&___rb_player_20), value);
	}

	inline static int32_t get_offset_of_female_21() { return static_cast<int32_t>(offsetof(PlayerController_t2064355688, ___female_21)); }
	inline GameObject_t1113636619 * get_female_21() const { return ___female_21; }
	inline GameObject_t1113636619 ** get_address_of_female_21() { return &___female_21; }
	inline void set_female_21(GameObject_t1113636619 * value)
	{
		___female_21 = value;
		Il2CppCodeGenWriteBarrier((&___female_21), value);
	}

	inline static int32_t get_offset_of_boka_22() { return static_cast<int32_t>(offsetof(PlayerController_t2064355688, ___boka_22)); }
	inline GameObject_t1113636619 * get_boka_22() const { return ___boka_22; }
	inline GameObject_t1113636619 ** get_address_of_boka_22() { return &___boka_22; }
	inline void set_boka_22(GameObject_t1113636619 * value)
	{
		___boka_22 = value;
		Il2CppCodeGenWriteBarrier((&___boka_22), value);
	}

	inline static int32_t get_offset_of_anim_23() { return static_cast<int32_t>(offsetof(PlayerController_t2064355688, ___anim_23)); }
	inline Animator_t434523843 * get_anim_23() const { return ___anim_23; }
	inline Animator_t434523843 ** get_address_of_anim_23() { return &___anim_23; }
	inline void set_anim_23(Animator_t434523843 * value)
	{
		___anim_23 = value;
		Il2CppCodeGenWriteBarrier((&___anim_23), value);
	}

	inline static int32_t get_offset_of_sceneName_24() { return static_cast<int32_t>(offsetof(PlayerController_t2064355688, ___sceneName_24)); }
	inline String_t* get_sceneName_24() const { return ___sceneName_24; }
	inline String_t** get_address_of_sceneName_24() { return &___sceneName_24; }
	inline void set_sceneName_24(String_t* value)
	{
		___sceneName_24 = value;
		Il2CppCodeGenWriteBarrier((&___sceneName_24), value);
	}

	inline static int32_t get_offset_of_ito_flag2_25() { return static_cast<int32_t>(offsetof(PlayerController_t2064355688, ___ito_flag2_25)); }
	inline int32_t get_ito_flag2_25() const { return ___ito_flag2_25; }
	inline int32_t* get_address_of_ito_flag2_25() { return &___ito_flag2_25; }
	inline void set_ito_flag2_25(int32_t value)
	{
		___ito_flag2_25 = value;
	}

	inline static int32_t get_offset_of_wool_count_26() { return static_cast<int32_t>(offsetof(PlayerController_t2064355688, ___wool_count_26)); }
	inline float get_wool_count_26() const { return ___wool_count_26; }
	inline float* get_address_of_wool_count_26() { return &___wool_count_26; }
	inline void set_wool_count_26(float value)
	{
		___wool_count_26 = value;
	}

	inline static int32_t get_offset_of_p_27() { return static_cast<int32_t>(offsetof(PlayerController_t2064355688, ___p_27)); }
	inline int32_t get_p_27() const { return ___p_27; }
	inline int32_t* get_address_of_p_27() { return &___p_27; }
	inline void set_p_27(int32_t value)
	{
		___p_27 = value;
	}

	inline static int32_t get_offset_of__slider_28() { return static_cast<int32_t>(offsetof(PlayerController_t2064355688, ____slider_28)); }
	inline Slider_t3903728902 * get__slider_28() const { return ____slider_28; }
	inline Slider_t3903728902 ** get_address_of__slider_28() { return &____slider_28; }
	inline void set__slider_28(Slider_t3903728902 * value)
	{
		____slider_28 = value;
		Il2CppCodeGenWriteBarrier((&____slider_28), value);
	}

	inline static int32_t get_offset_of_swing_29() { return static_cast<int32_t>(offsetof(PlayerController_t2064355688, ___swing_29)); }
	inline bool get_swing_29() const { return ___swing_29; }
	inline bool* get_address_of_swing_29() { return &___swing_29; }
	inline void set_swing_29(bool value)
	{
		___swing_29 = value;
	}

	inline static int32_t get_offset_of_jump_30() { return static_cast<int32_t>(offsetof(PlayerController_t2064355688, ___jump_30)); }
	inline bool get_jump_30() const { return ___jump_30; }
	inline bool* get_address_of_jump_30() { return &___jump_30; }
	inline void set_jump_30(bool value)
	{
		___jump_30 = value;
	}

	inline static int32_t get_offset_of_boka_exit_31() { return static_cast<int32_t>(offsetof(PlayerController_t2064355688, ___boka_exit_31)); }
	inline bool get_boka_exit_31() const { return ___boka_exit_31; }
	inline bool* get_address_of_boka_exit_31() { return &___boka_exit_31; }
	inline void set_boka_exit_31(bool value)
	{
		___boka_exit_31 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PLAYERCONTROLLER_T2064355688_H
#ifndef PLAYERCONTROLLER_PHOTON_T983201452_H
#define PLAYERCONTROLLER_PHOTON_T983201452_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PlayerController_Photon
struct  PlayerController_Photon_t983201452  : public MonoBehaviour_t3962482529
{
public:
	// UnityEngine.Vector3 PlayerController_Photon::pos
	Vector3_t3722313464  ___pos_4;
	// UnityEngine.Vector3 PlayerController_Photon::pos_ito
	Vector3_t3722313464  ___pos_ito_5;
	// UnityEngine.Vector3 PlayerController_Photon::pos_camera
	Vector3_t3722313464  ___pos_camera_6;
	// System.Single PlayerController_Photon::dirY
	float ___dirY_7;
	// System.Single PlayerController_Photon::dirX
	float ___dirX_8;
	// System.Single PlayerController_Photon::leng
	float ___leng_9;
	// System.Single PlayerController_Photon::target_pos
	float ___target_pos_10;
	// UnityEngine.GameObject PlayerController_Photon::ceiling
	GameObject_t1113636619 * ___ceiling_11;
	// UnityEngine.GameObject PlayerController_Photon::woolPrefab
	GameObject_t1113636619 * ___woolPrefab_12;
	// UnityEngine.GameObject PlayerController_Photon::bokaPrefab
	GameObject_t1113636619 * ___bokaPrefab_13;
	// System.Single PlayerController_Photon::speed
	float ___speed_14;
	// System.Single PlayerController_Photon::speed2
	float ___speed2_15;
	// UnityEngine.GameObject PlayerController_Photon::Mask
	GameObject_t1113636619 * ___Mask_16;
	// UnityEngine.GameObject PlayerController_Photon::Mask2
	GameObject_t1113636619 * ___Mask2_17;
	// UnityEngine.GameObject PlayerController_Photon::wool
	GameObject_t1113636619 * ___wool_18;
	// UnityEngine.Vector3 PlayerController_Photon::ceiling_pos
	Vector3_t3722313464  ___ceiling_pos_19;
	// UnityEngine.GameObject PlayerController_Photon::itoPrafab
	GameObject_t1113636619 * ___itoPrafab_20;
	// UnityEngine.GameObject PlayerController_Photon::ito
	GameObject_t1113636619 * ___ito_21;
	// UnityEngine.HingeJoint PlayerController_Photon::joint
	HingeJoint_t2516258575 * ___joint_22;
	// UnityEngine.HingeJoint PlayerController_Photon::joint_ito
	HingeJoint_t2516258575 * ___joint_ito_23;
	// UnityEngine.Rigidbody PlayerController_Photon::rb_player
	Rigidbody_t3916780224 * ___rb_player_24;
	// UnityEngine.GameObject PlayerController_Photon::female
	GameObject_t1113636619 * ___female_25;
	// UnityEngine.GameObject PlayerController_Photon::boka
	GameObject_t1113636619 * ___boka_26;
	// UnityEngine.GameObject PlayerController_Photon::wolf
	GameObject_t1113636619 * ___wolf_27;
	// UnityEngine.Animator PlayerController_Photon::anim
	Animator_t434523843 * ___anim_28;
	// System.String PlayerController_Photon::sceneName
	String_t* ___sceneName_29;
	// System.Single PlayerController_Photon::wool_count
	float ___wool_count_30;
	// System.Int32 PlayerController_Photon::p
	int32_t ___p_31;
	// PhotonView PlayerController_Photon::myPhotonView
	PhotonView_t2207721820 * ___myPhotonView_32;
	// UnityEngine.UI.Slider PlayerController_Photon::_slider
	Slider_t3903728902 * ____slider_33;
	// System.Boolean PlayerController_Photon::swing
	bool ___swing_34;
	// System.Boolean PlayerController_Photon::jump
	bool ___jump_35;
	// System.Boolean PlayerController_Photon::boka_exit
	bool ___boka_exit_36;
	// System.Boolean PlayerController_Photon::mask_flag
	bool ___mask_flag_37;
	// System.Boolean PlayerController_Photon::mask_flag2
	bool ___mask_flag2_38;

public:
	inline static int32_t get_offset_of_pos_4() { return static_cast<int32_t>(offsetof(PlayerController_Photon_t983201452, ___pos_4)); }
	inline Vector3_t3722313464  get_pos_4() const { return ___pos_4; }
	inline Vector3_t3722313464 * get_address_of_pos_4() { return &___pos_4; }
	inline void set_pos_4(Vector3_t3722313464  value)
	{
		___pos_4 = value;
	}

	inline static int32_t get_offset_of_pos_ito_5() { return static_cast<int32_t>(offsetof(PlayerController_Photon_t983201452, ___pos_ito_5)); }
	inline Vector3_t3722313464  get_pos_ito_5() const { return ___pos_ito_5; }
	inline Vector3_t3722313464 * get_address_of_pos_ito_5() { return &___pos_ito_5; }
	inline void set_pos_ito_5(Vector3_t3722313464  value)
	{
		___pos_ito_5 = value;
	}

	inline static int32_t get_offset_of_pos_camera_6() { return static_cast<int32_t>(offsetof(PlayerController_Photon_t983201452, ___pos_camera_6)); }
	inline Vector3_t3722313464  get_pos_camera_6() const { return ___pos_camera_6; }
	inline Vector3_t3722313464 * get_address_of_pos_camera_6() { return &___pos_camera_6; }
	inline void set_pos_camera_6(Vector3_t3722313464  value)
	{
		___pos_camera_6 = value;
	}

	inline static int32_t get_offset_of_dirY_7() { return static_cast<int32_t>(offsetof(PlayerController_Photon_t983201452, ___dirY_7)); }
	inline float get_dirY_7() const { return ___dirY_7; }
	inline float* get_address_of_dirY_7() { return &___dirY_7; }
	inline void set_dirY_7(float value)
	{
		___dirY_7 = value;
	}

	inline static int32_t get_offset_of_dirX_8() { return static_cast<int32_t>(offsetof(PlayerController_Photon_t983201452, ___dirX_8)); }
	inline float get_dirX_8() const { return ___dirX_8; }
	inline float* get_address_of_dirX_8() { return &___dirX_8; }
	inline void set_dirX_8(float value)
	{
		___dirX_8 = value;
	}

	inline static int32_t get_offset_of_leng_9() { return static_cast<int32_t>(offsetof(PlayerController_Photon_t983201452, ___leng_9)); }
	inline float get_leng_9() const { return ___leng_9; }
	inline float* get_address_of_leng_9() { return &___leng_9; }
	inline void set_leng_9(float value)
	{
		___leng_9 = value;
	}

	inline static int32_t get_offset_of_target_pos_10() { return static_cast<int32_t>(offsetof(PlayerController_Photon_t983201452, ___target_pos_10)); }
	inline float get_target_pos_10() const { return ___target_pos_10; }
	inline float* get_address_of_target_pos_10() { return &___target_pos_10; }
	inline void set_target_pos_10(float value)
	{
		___target_pos_10 = value;
	}

	inline static int32_t get_offset_of_ceiling_11() { return static_cast<int32_t>(offsetof(PlayerController_Photon_t983201452, ___ceiling_11)); }
	inline GameObject_t1113636619 * get_ceiling_11() const { return ___ceiling_11; }
	inline GameObject_t1113636619 ** get_address_of_ceiling_11() { return &___ceiling_11; }
	inline void set_ceiling_11(GameObject_t1113636619 * value)
	{
		___ceiling_11 = value;
		Il2CppCodeGenWriteBarrier((&___ceiling_11), value);
	}

	inline static int32_t get_offset_of_woolPrefab_12() { return static_cast<int32_t>(offsetof(PlayerController_Photon_t983201452, ___woolPrefab_12)); }
	inline GameObject_t1113636619 * get_woolPrefab_12() const { return ___woolPrefab_12; }
	inline GameObject_t1113636619 ** get_address_of_woolPrefab_12() { return &___woolPrefab_12; }
	inline void set_woolPrefab_12(GameObject_t1113636619 * value)
	{
		___woolPrefab_12 = value;
		Il2CppCodeGenWriteBarrier((&___woolPrefab_12), value);
	}

	inline static int32_t get_offset_of_bokaPrefab_13() { return static_cast<int32_t>(offsetof(PlayerController_Photon_t983201452, ___bokaPrefab_13)); }
	inline GameObject_t1113636619 * get_bokaPrefab_13() const { return ___bokaPrefab_13; }
	inline GameObject_t1113636619 ** get_address_of_bokaPrefab_13() { return &___bokaPrefab_13; }
	inline void set_bokaPrefab_13(GameObject_t1113636619 * value)
	{
		___bokaPrefab_13 = value;
		Il2CppCodeGenWriteBarrier((&___bokaPrefab_13), value);
	}

	inline static int32_t get_offset_of_speed_14() { return static_cast<int32_t>(offsetof(PlayerController_Photon_t983201452, ___speed_14)); }
	inline float get_speed_14() const { return ___speed_14; }
	inline float* get_address_of_speed_14() { return &___speed_14; }
	inline void set_speed_14(float value)
	{
		___speed_14 = value;
	}

	inline static int32_t get_offset_of_speed2_15() { return static_cast<int32_t>(offsetof(PlayerController_Photon_t983201452, ___speed2_15)); }
	inline float get_speed2_15() const { return ___speed2_15; }
	inline float* get_address_of_speed2_15() { return &___speed2_15; }
	inline void set_speed2_15(float value)
	{
		___speed2_15 = value;
	}

	inline static int32_t get_offset_of_Mask_16() { return static_cast<int32_t>(offsetof(PlayerController_Photon_t983201452, ___Mask_16)); }
	inline GameObject_t1113636619 * get_Mask_16() const { return ___Mask_16; }
	inline GameObject_t1113636619 ** get_address_of_Mask_16() { return &___Mask_16; }
	inline void set_Mask_16(GameObject_t1113636619 * value)
	{
		___Mask_16 = value;
		Il2CppCodeGenWriteBarrier((&___Mask_16), value);
	}

	inline static int32_t get_offset_of_Mask2_17() { return static_cast<int32_t>(offsetof(PlayerController_Photon_t983201452, ___Mask2_17)); }
	inline GameObject_t1113636619 * get_Mask2_17() const { return ___Mask2_17; }
	inline GameObject_t1113636619 ** get_address_of_Mask2_17() { return &___Mask2_17; }
	inline void set_Mask2_17(GameObject_t1113636619 * value)
	{
		___Mask2_17 = value;
		Il2CppCodeGenWriteBarrier((&___Mask2_17), value);
	}

	inline static int32_t get_offset_of_wool_18() { return static_cast<int32_t>(offsetof(PlayerController_Photon_t983201452, ___wool_18)); }
	inline GameObject_t1113636619 * get_wool_18() const { return ___wool_18; }
	inline GameObject_t1113636619 ** get_address_of_wool_18() { return &___wool_18; }
	inline void set_wool_18(GameObject_t1113636619 * value)
	{
		___wool_18 = value;
		Il2CppCodeGenWriteBarrier((&___wool_18), value);
	}

	inline static int32_t get_offset_of_ceiling_pos_19() { return static_cast<int32_t>(offsetof(PlayerController_Photon_t983201452, ___ceiling_pos_19)); }
	inline Vector3_t3722313464  get_ceiling_pos_19() const { return ___ceiling_pos_19; }
	inline Vector3_t3722313464 * get_address_of_ceiling_pos_19() { return &___ceiling_pos_19; }
	inline void set_ceiling_pos_19(Vector3_t3722313464  value)
	{
		___ceiling_pos_19 = value;
	}

	inline static int32_t get_offset_of_itoPrafab_20() { return static_cast<int32_t>(offsetof(PlayerController_Photon_t983201452, ___itoPrafab_20)); }
	inline GameObject_t1113636619 * get_itoPrafab_20() const { return ___itoPrafab_20; }
	inline GameObject_t1113636619 ** get_address_of_itoPrafab_20() { return &___itoPrafab_20; }
	inline void set_itoPrafab_20(GameObject_t1113636619 * value)
	{
		___itoPrafab_20 = value;
		Il2CppCodeGenWriteBarrier((&___itoPrafab_20), value);
	}

	inline static int32_t get_offset_of_ito_21() { return static_cast<int32_t>(offsetof(PlayerController_Photon_t983201452, ___ito_21)); }
	inline GameObject_t1113636619 * get_ito_21() const { return ___ito_21; }
	inline GameObject_t1113636619 ** get_address_of_ito_21() { return &___ito_21; }
	inline void set_ito_21(GameObject_t1113636619 * value)
	{
		___ito_21 = value;
		Il2CppCodeGenWriteBarrier((&___ito_21), value);
	}

	inline static int32_t get_offset_of_joint_22() { return static_cast<int32_t>(offsetof(PlayerController_Photon_t983201452, ___joint_22)); }
	inline HingeJoint_t2516258575 * get_joint_22() const { return ___joint_22; }
	inline HingeJoint_t2516258575 ** get_address_of_joint_22() { return &___joint_22; }
	inline void set_joint_22(HingeJoint_t2516258575 * value)
	{
		___joint_22 = value;
		Il2CppCodeGenWriteBarrier((&___joint_22), value);
	}

	inline static int32_t get_offset_of_joint_ito_23() { return static_cast<int32_t>(offsetof(PlayerController_Photon_t983201452, ___joint_ito_23)); }
	inline HingeJoint_t2516258575 * get_joint_ito_23() const { return ___joint_ito_23; }
	inline HingeJoint_t2516258575 ** get_address_of_joint_ito_23() { return &___joint_ito_23; }
	inline void set_joint_ito_23(HingeJoint_t2516258575 * value)
	{
		___joint_ito_23 = value;
		Il2CppCodeGenWriteBarrier((&___joint_ito_23), value);
	}

	inline static int32_t get_offset_of_rb_player_24() { return static_cast<int32_t>(offsetof(PlayerController_Photon_t983201452, ___rb_player_24)); }
	inline Rigidbody_t3916780224 * get_rb_player_24() const { return ___rb_player_24; }
	inline Rigidbody_t3916780224 ** get_address_of_rb_player_24() { return &___rb_player_24; }
	inline void set_rb_player_24(Rigidbody_t3916780224 * value)
	{
		___rb_player_24 = value;
		Il2CppCodeGenWriteBarrier((&___rb_player_24), value);
	}

	inline static int32_t get_offset_of_female_25() { return static_cast<int32_t>(offsetof(PlayerController_Photon_t983201452, ___female_25)); }
	inline GameObject_t1113636619 * get_female_25() const { return ___female_25; }
	inline GameObject_t1113636619 ** get_address_of_female_25() { return &___female_25; }
	inline void set_female_25(GameObject_t1113636619 * value)
	{
		___female_25 = value;
		Il2CppCodeGenWriteBarrier((&___female_25), value);
	}

	inline static int32_t get_offset_of_boka_26() { return static_cast<int32_t>(offsetof(PlayerController_Photon_t983201452, ___boka_26)); }
	inline GameObject_t1113636619 * get_boka_26() const { return ___boka_26; }
	inline GameObject_t1113636619 ** get_address_of_boka_26() { return &___boka_26; }
	inline void set_boka_26(GameObject_t1113636619 * value)
	{
		___boka_26 = value;
		Il2CppCodeGenWriteBarrier((&___boka_26), value);
	}

	inline static int32_t get_offset_of_wolf_27() { return static_cast<int32_t>(offsetof(PlayerController_Photon_t983201452, ___wolf_27)); }
	inline GameObject_t1113636619 * get_wolf_27() const { return ___wolf_27; }
	inline GameObject_t1113636619 ** get_address_of_wolf_27() { return &___wolf_27; }
	inline void set_wolf_27(GameObject_t1113636619 * value)
	{
		___wolf_27 = value;
		Il2CppCodeGenWriteBarrier((&___wolf_27), value);
	}

	inline static int32_t get_offset_of_anim_28() { return static_cast<int32_t>(offsetof(PlayerController_Photon_t983201452, ___anim_28)); }
	inline Animator_t434523843 * get_anim_28() const { return ___anim_28; }
	inline Animator_t434523843 ** get_address_of_anim_28() { return &___anim_28; }
	inline void set_anim_28(Animator_t434523843 * value)
	{
		___anim_28 = value;
		Il2CppCodeGenWriteBarrier((&___anim_28), value);
	}

	inline static int32_t get_offset_of_sceneName_29() { return static_cast<int32_t>(offsetof(PlayerController_Photon_t983201452, ___sceneName_29)); }
	inline String_t* get_sceneName_29() const { return ___sceneName_29; }
	inline String_t** get_address_of_sceneName_29() { return &___sceneName_29; }
	inline void set_sceneName_29(String_t* value)
	{
		___sceneName_29 = value;
		Il2CppCodeGenWriteBarrier((&___sceneName_29), value);
	}

	inline static int32_t get_offset_of_wool_count_30() { return static_cast<int32_t>(offsetof(PlayerController_Photon_t983201452, ___wool_count_30)); }
	inline float get_wool_count_30() const { return ___wool_count_30; }
	inline float* get_address_of_wool_count_30() { return &___wool_count_30; }
	inline void set_wool_count_30(float value)
	{
		___wool_count_30 = value;
	}

	inline static int32_t get_offset_of_p_31() { return static_cast<int32_t>(offsetof(PlayerController_Photon_t983201452, ___p_31)); }
	inline int32_t get_p_31() const { return ___p_31; }
	inline int32_t* get_address_of_p_31() { return &___p_31; }
	inline void set_p_31(int32_t value)
	{
		___p_31 = value;
	}

	inline static int32_t get_offset_of_myPhotonView_32() { return static_cast<int32_t>(offsetof(PlayerController_Photon_t983201452, ___myPhotonView_32)); }
	inline PhotonView_t2207721820 * get_myPhotonView_32() const { return ___myPhotonView_32; }
	inline PhotonView_t2207721820 ** get_address_of_myPhotonView_32() { return &___myPhotonView_32; }
	inline void set_myPhotonView_32(PhotonView_t2207721820 * value)
	{
		___myPhotonView_32 = value;
		Il2CppCodeGenWriteBarrier((&___myPhotonView_32), value);
	}

	inline static int32_t get_offset_of__slider_33() { return static_cast<int32_t>(offsetof(PlayerController_Photon_t983201452, ____slider_33)); }
	inline Slider_t3903728902 * get__slider_33() const { return ____slider_33; }
	inline Slider_t3903728902 ** get_address_of__slider_33() { return &____slider_33; }
	inline void set__slider_33(Slider_t3903728902 * value)
	{
		____slider_33 = value;
		Il2CppCodeGenWriteBarrier((&____slider_33), value);
	}

	inline static int32_t get_offset_of_swing_34() { return static_cast<int32_t>(offsetof(PlayerController_Photon_t983201452, ___swing_34)); }
	inline bool get_swing_34() const { return ___swing_34; }
	inline bool* get_address_of_swing_34() { return &___swing_34; }
	inline void set_swing_34(bool value)
	{
		___swing_34 = value;
	}

	inline static int32_t get_offset_of_jump_35() { return static_cast<int32_t>(offsetof(PlayerController_Photon_t983201452, ___jump_35)); }
	inline bool get_jump_35() const { return ___jump_35; }
	inline bool* get_address_of_jump_35() { return &___jump_35; }
	inline void set_jump_35(bool value)
	{
		___jump_35 = value;
	}

	inline static int32_t get_offset_of_boka_exit_36() { return static_cast<int32_t>(offsetof(PlayerController_Photon_t983201452, ___boka_exit_36)); }
	inline bool get_boka_exit_36() const { return ___boka_exit_36; }
	inline bool* get_address_of_boka_exit_36() { return &___boka_exit_36; }
	inline void set_boka_exit_36(bool value)
	{
		___boka_exit_36 = value;
	}

	inline static int32_t get_offset_of_mask_flag_37() { return static_cast<int32_t>(offsetof(PlayerController_Photon_t983201452, ___mask_flag_37)); }
	inline bool get_mask_flag_37() const { return ___mask_flag_37; }
	inline bool* get_address_of_mask_flag_37() { return &___mask_flag_37; }
	inline void set_mask_flag_37(bool value)
	{
		___mask_flag_37 = value;
	}

	inline static int32_t get_offset_of_mask_flag2_38() { return static_cast<int32_t>(offsetof(PlayerController_Photon_t983201452, ___mask_flag2_38)); }
	inline bool get_mask_flag2_38() const { return ___mask_flag2_38; }
	inline bool* get_address_of_mask_flag2_38() { return &___mask_flag2_38; }
	inline void set_mask_flag2_38(bool value)
	{
		___mask_flag2_38 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PLAYERCONTROLLER_PHOTON_T983201452_H
#ifndef RESULTDIRECTOR_T2940682919_H
#define RESULTDIRECTOR_T2940682919_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ResultDirector
struct  ResultDirector_t2940682919  : public MonoBehaviour_t3962482529
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RESULTDIRECTOR_T2940682919_H
#ifndef RESULTTIME_T788135641_H
#define RESULTTIME_T788135641_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ResultTime
struct  ResultTime_t788135641  : public MonoBehaviour_t3962482529
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RESULTTIME_T788135641_H
#ifndef ROOMMANAGER_T89007945_H
#define ROOMMANAGER_T89007945_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// RoomManager
struct  RoomManager_t89007945  : public MonoBehaviour_t3962482529
{
public:
	// System.String RoomManager::playerName
	String_t* ___playerName_4;
	// System.String RoomManager::roomName
	String_t* ___roomName_5;
	// System.Boolean RoomManager::connectFailed
	bool ___connectFailed_6;

public:
	inline static int32_t get_offset_of_playerName_4() { return static_cast<int32_t>(offsetof(RoomManager_t89007945, ___playerName_4)); }
	inline String_t* get_playerName_4() const { return ___playerName_4; }
	inline String_t** get_address_of_playerName_4() { return &___playerName_4; }
	inline void set_playerName_4(String_t* value)
	{
		___playerName_4 = value;
		Il2CppCodeGenWriteBarrier((&___playerName_4), value);
	}

	inline static int32_t get_offset_of_roomName_5() { return static_cast<int32_t>(offsetof(RoomManager_t89007945, ___roomName_5)); }
	inline String_t* get_roomName_5() const { return ___roomName_5; }
	inline String_t** get_address_of_roomName_5() { return &___roomName_5; }
	inline void set_roomName_5(String_t* value)
	{
		___roomName_5 = value;
		Il2CppCodeGenWriteBarrier((&___roomName_5), value);
	}

	inline static int32_t get_offset_of_connectFailed_6() { return static_cast<int32_t>(offsetof(RoomManager_t89007945, ___connectFailed_6)); }
	inline bool get_connectFailed_6() const { return ___connectFailed_6; }
	inline bool* get_address_of_connectFailed_6() { return &___connectFailed_6; }
	inline void set_connectFailed_6(bool value)
	{
		___connectFailed_6 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ROOMMANAGER_T89007945_H
#ifndef SELECTCONTROLLER_T3183435330_H
#define SELECTCONTROLLER_T3183435330_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// SelectController
struct  SelectController_t3183435330  : public MonoBehaviour_t3962482529
{
public:
	// UnityEngine.GameObject SelectController::Multi_Background
	GameObject_t1113636619 * ___Multi_Background_4;
	// UnityEngine.GameObject SelectController::Solo_Background
	GameObject_t1113636619 * ___Solo_Background_5;

public:
	inline static int32_t get_offset_of_Multi_Background_4() { return static_cast<int32_t>(offsetof(SelectController_t3183435330, ___Multi_Background_4)); }
	inline GameObject_t1113636619 * get_Multi_Background_4() const { return ___Multi_Background_4; }
	inline GameObject_t1113636619 ** get_address_of_Multi_Background_4() { return &___Multi_Background_4; }
	inline void set_Multi_Background_4(GameObject_t1113636619 * value)
	{
		___Multi_Background_4 = value;
		Il2CppCodeGenWriteBarrier((&___Multi_Background_4), value);
	}

	inline static int32_t get_offset_of_Solo_Background_5() { return static_cast<int32_t>(offsetof(SelectController_t3183435330, ___Solo_Background_5)); }
	inline GameObject_t1113636619 * get_Solo_Background_5() const { return ___Solo_Background_5; }
	inline GameObject_t1113636619 ** get_address_of_Solo_Background_5() { return &___Solo_Background_5; }
	inline void set_Solo_Background_5(GameObject_t1113636619 * value)
	{
		___Solo_Background_5 = value;
		Il2CppCodeGenWriteBarrier((&___Solo_Background_5), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SELECTCONTROLLER_T3183435330_H
#ifndef SOUNDCONTROLLER_T2462365417_H
#define SOUNDCONTROLLER_T2462365417_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// SoundController
struct  SoundController_t2462365417  : public MonoBehaviour_t3962482529
{
public:
	// UnityEngine.AudioClip SoundController::audioClip1
	AudioClip_t3680889665 * ___audioClip1_4;
	// UnityEngine.AudioSource SoundController::audioSource
	AudioSource_t3935305588 * ___audioSource_5;

public:
	inline static int32_t get_offset_of_audioClip1_4() { return static_cast<int32_t>(offsetof(SoundController_t2462365417, ___audioClip1_4)); }
	inline AudioClip_t3680889665 * get_audioClip1_4() const { return ___audioClip1_4; }
	inline AudioClip_t3680889665 ** get_address_of_audioClip1_4() { return &___audioClip1_4; }
	inline void set_audioClip1_4(AudioClip_t3680889665 * value)
	{
		___audioClip1_4 = value;
		Il2CppCodeGenWriteBarrier((&___audioClip1_4), value);
	}

	inline static int32_t get_offset_of_audioSource_5() { return static_cast<int32_t>(offsetof(SoundController_t2462365417, ___audioSource_5)); }
	inline AudioSource_t3935305588 * get_audioSource_5() const { return ___audioSource_5; }
	inline AudioSource_t3935305588 ** get_address_of_audioSource_5() { return &___audioSource_5; }
	inline void set_audioSource_5(AudioSource_t3935305588 * value)
	{
		___audioSource_5 = value;
		Il2CppCodeGenWriteBarrier((&___audioSource_5), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SOUNDCONTROLLER_T2462365417_H
#ifndef STARTDESTROYER_T3536613077_H
#define STARTDESTROYER_T3536613077_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// StartDestroyer
struct  StartDestroyer_t3536613077  : public MonoBehaviour_t3962482529
{
public:
	// UnityEngine.Animator StartDestroyer::animator
	Animator_t434523843 * ___animator_4;

public:
	inline static int32_t get_offset_of_animator_4() { return static_cast<int32_t>(offsetof(StartDestroyer_t3536613077, ___animator_4)); }
	inline Animator_t434523843 * get_animator_4() const { return ___animator_4; }
	inline Animator_t434523843 ** get_address_of_animator_4() { return &___animator_4; }
	inline void set_animator_4(Animator_t434523843 * value)
	{
		___animator_4 = value;
		Il2CppCodeGenWriteBarrier((&___animator_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STARTDESTROYER_T3536613077_H
#ifndef TIMERSCRIPT_T1618777791_H
#define TIMERSCRIPT_T1618777791_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// TimerScript
struct  TimerScript_t1618777791  : public MonoBehaviour_t3962482529
{
public:
	// System.Single TimerScript::time
	float ___time_4;
	// UnityEngine.UI.Text TimerScript::text
	Text_t1901882714 * ___text_5;

public:
	inline static int32_t get_offset_of_time_4() { return static_cast<int32_t>(offsetof(TimerScript_t1618777791, ___time_4)); }
	inline float get_time_4() const { return ___time_4; }
	inline float* get_address_of_time_4() { return &___time_4; }
	inline void set_time_4(float value)
	{
		___time_4 = value;
	}

	inline static int32_t get_offset_of_text_5() { return static_cast<int32_t>(offsetof(TimerScript_t1618777791, ___text_5)); }
	inline Text_t1901882714 * get_text_5() const { return ___text_5; }
	inline Text_t1901882714 ** get_address_of_text_5() { return &___text_5; }
	inline void set_text_5(Text_t1901882714 * value)
	{
		___text_5 = value;
		Il2CppCodeGenWriteBarrier((&___text_5), value);
	}
};

struct TimerScript_t1618777791_StaticFields
{
public:
	// System.Int32 TimerScript::sec
	int32_t ___sec_6;
	// System.Int32 TimerScript::msec
	int32_t ___msec_7;

public:
	inline static int32_t get_offset_of_sec_6() { return static_cast<int32_t>(offsetof(TimerScript_t1618777791_StaticFields, ___sec_6)); }
	inline int32_t get_sec_6() const { return ___sec_6; }
	inline int32_t* get_address_of_sec_6() { return &___sec_6; }
	inline void set_sec_6(int32_t value)
	{
		___sec_6 = value;
	}

	inline static int32_t get_offset_of_msec_7() { return static_cast<int32_t>(offsetof(TimerScript_t1618777791_StaticFields, ___msec_7)); }
	inline int32_t get_msec_7() const { return ___msec_7; }
	inline int32_t* get_address_of_msec_7() { return &___msec_7; }
	inline void set_msec_7(int32_t value)
	{
		___msec_7 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TIMERSCRIPT_T1618777791_H
#ifndef TITLECONTROLLER_T619016484_H
#define TITLECONTROLLER_T619016484_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// TitleController
struct  TitleController_t619016484  : public MonoBehaviour_t3962482529
{
public:
	// UnityEngine.GameObject TitleController::StartButton
	GameObject_t1113636619 * ___StartButton_4;
	// UnityEngine.GameObject TitleController::StartButton_push
	GameObject_t1113636619 * ___StartButton_push_5;
	// UnityEngine.AudioClip TitleController::audioClip1
	AudioClip_t3680889665 * ___audioClip1_6;
	// UnityEngine.AudioSource TitleController::audioSource
	AudioSource_t3935305588 * ___audioSource_7;

public:
	inline static int32_t get_offset_of_StartButton_4() { return static_cast<int32_t>(offsetof(TitleController_t619016484, ___StartButton_4)); }
	inline GameObject_t1113636619 * get_StartButton_4() const { return ___StartButton_4; }
	inline GameObject_t1113636619 ** get_address_of_StartButton_4() { return &___StartButton_4; }
	inline void set_StartButton_4(GameObject_t1113636619 * value)
	{
		___StartButton_4 = value;
		Il2CppCodeGenWriteBarrier((&___StartButton_4), value);
	}

	inline static int32_t get_offset_of_StartButton_push_5() { return static_cast<int32_t>(offsetof(TitleController_t619016484, ___StartButton_push_5)); }
	inline GameObject_t1113636619 * get_StartButton_push_5() const { return ___StartButton_push_5; }
	inline GameObject_t1113636619 ** get_address_of_StartButton_push_5() { return &___StartButton_push_5; }
	inline void set_StartButton_push_5(GameObject_t1113636619 * value)
	{
		___StartButton_push_5 = value;
		Il2CppCodeGenWriteBarrier((&___StartButton_push_5), value);
	}

	inline static int32_t get_offset_of_audioClip1_6() { return static_cast<int32_t>(offsetof(TitleController_t619016484, ___audioClip1_6)); }
	inline AudioClip_t3680889665 * get_audioClip1_6() const { return ___audioClip1_6; }
	inline AudioClip_t3680889665 ** get_address_of_audioClip1_6() { return &___audioClip1_6; }
	inline void set_audioClip1_6(AudioClip_t3680889665 * value)
	{
		___audioClip1_6 = value;
		Il2CppCodeGenWriteBarrier((&___audioClip1_6), value);
	}

	inline static int32_t get_offset_of_audioSource_7() { return static_cast<int32_t>(offsetof(TitleController_t619016484, ___audioSource_7)); }
	inline AudioSource_t3935305588 * get_audioSource_7() const { return ___audioSource_7; }
	inline AudioSource_t3935305588 ** get_address_of_audioSource_7() { return &___audioSource_7; }
	inline void set_audioSource_7(AudioSource_t3935305588 * value)
	{
		___audioSource_7 = value;
		Il2CppCodeGenWriteBarrier((&___audioSource_7), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TITLECONTROLLER_T619016484_H
#ifndef FIELDCONTROLLER_T299223098_H
#define FIELDCONTROLLER_T299223098_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// fieldController
struct  fieldController_t299223098  : public MonoBehaviour_t3962482529
{
public:
	// UnityEngine.GameObject fieldController::build_a_pre
	GameObject_t1113636619 * ___build_a_pre_4;
	// UnityEngine.GameObject fieldController::build_b_pre
	GameObject_t1113636619 * ___build_b_pre_5;
	// UnityEngine.GameObject fieldController::build_c_pre
	GameObject_t1113636619 * ___build_c_pre_6;
	// UnityEngine.GameObject fieldController::build_d_pre
	GameObject_t1113636619 * ___build_d_pre_7;
	// UnityEngine.GameObject fieldController::build_e_pre
	GameObject_t1113636619 * ___build_e_pre_8;
	// System.Int32 fieldController::goal_appear
	int32_t ___goal_appear_9;
	// UnityEngine.GameObject fieldController::build
	GameObject_t1113636619 * ___build_10;
	// UnityEngine.GameObject fieldController::goal
	GameObject_t1113636619 * ___goal_11;
	// UnityEngine.GameObject fieldController::ceiling
	GameObject_t1113636619 * ___ceiling_12;
	// UnityEngine.GameObject fieldController::ground
	GameObject_t1113636619 * ___ground_13;
	// UnityEngine.GameObject fieldController::wall
	GameObject_t1113636619 * ___wall_14;
	// UnityEngine.GameObject fieldController::Whiteball
	GameObject_t1113636619 * ___Whiteball_15;
	// UnityEngine.Vector3 fieldController::pos_building
	Vector3_t3722313464  ___pos_building_16;
	// UnityEngine.Vector3 fieldController::pos_player
	Vector3_t3722313464  ___pos_player_17;
	// System.Single fieldController::length
	float ___length_18;
	// System.Int32 fieldController::build_counter
	int32_t ___build_counter_19;

public:
	inline static int32_t get_offset_of_build_a_pre_4() { return static_cast<int32_t>(offsetof(fieldController_t299223098, ___build_a_pre_4)); }
	inline GameObject_t1113636619 * get_build_a_pre_4() const { return ___build_a_pre_4; }
	inline GameObject_t1113636619 ** get_address_of_build_a_pre_4() { return &___build_a_pre_4; }
	inline void set_build_a_pre_4(GameObject_t1113636619 * value)
	{
		___build_a_pre_4 = value;
		Il2CppCodeGenWriteBarrier((&___build_a_pre_4), value);
	}

	inline static int32_t get_offset_of_build_b_pre_5() { return static_cast<int32_t>(offsetof(fieldController_t299223098, ___build_b_pre_5)); }
	inline GameObject_t1113636619 * get_build_b_pre_5() const { return ___build_b_pre_5; }
	inline GameObject_t1113636619 ** get_address_of_build_b_pre_5() { return &___build_b_pre_5; }
	inline void set_build_b_pre_5(GameObject_t1113636619 * value)
	{
		___build_b_pre_5 = value;
		Il2CppCodeGenWriteBarrier((&___build_b_pre_5), value);
	}

	inline static int32_t get_offset_of_build_c_pre_6() { return static_cast<int32_t>(offsetof(fieldController_t299223098, ___build_c_pre_6)); }
	inline GameObject_t1113636619 * get_build_c_pre_6() const { return ___build_c_pre_6; }
	inline GameObject_t1113636619 ** get_address_of_build_c_pre_6() { return &___build_c_pre_6; }
	inline void set_build_c_pre_6(GameObject_t1113636619 * value)
	{
		___build_c_pre_6 = value;
		Il2CppCodeGenWriteBarrier((&___build_c_pre_6), value);
	}

	inline static int32_t get_offset_of_build_d_pre_7() { return static_cast<int32_t>(offsetof(fieldController_t299223098, ___build_d_pre_7)); }
	inline GameObject_t1113636619 * get_build_d_pre_7() const { return ___build_d_pre_7; }
	inline GameObject_t1113636619 ** get_address_of_build_d_pre_7() { return &___build_d_pre_7; }
	inline void set_build_d_pre_7(GameObject_t1113636619 * value)
	{
		___build_d_pre_7 = value;
		Il2CppCodeGenWriteBarrier((&___build_d_pre_7), value);
	}

	inline static int32_t get_offset_of_build_e_pre_8() { return static_cast<int32_t>(offsetof(fieldController_t299223098, ___build_e_pre_8)); }
	inline GameObject_t1113636619 * get_build_e_pre_8() const { return ___build_e_pre_8; }
	inline GameObject_t1113636619 ** get_address_of_build_e_pre_8() { return &___build_e_pre_8; }
	inline void set_build_e_pre_8(GameObject_t1113636619 * value)
	{
		___build_e_pre_8 = value;
		Il2CppCodeGenWriteBarrier((&___build_e_pre_8), value);
	}

	inline static int32_t get_offset_of_goal_appear_9() { return static_cast<int32_t>(offsetof(fieldController_t299223098, ___goal_appear_9)); }
	inline int32_t get_goal_appear_9() const { return ___goal_appear_9; }
	inline int32_t* get_address_of_goal_appear_9() { return &___goal_appear_9; }
	inline void set_goal_appear_9(int32_t value)
	{
		___goal_appear_9 = value;
	}

	inline static int32_t get_offset_of_build_10() { return static_cast<int32_t>(offsetof(fieldController_t299223098, ___build_10)); }
	inline GameObject_t1113636619 * get_build_10() const { return ___build_10; }
	inline GameObject_t1113636619 ** get_address_of_build_10() { return &___build_10; }
	inline void set_build_10(GameObject_t1113636619 * value)
	{
		___build_10 = value;
		Il2CppCodeGenWriteBarrier((&___build_10), value);
	}

	inline static int32_t get_offset_of_goal_11() { return static_cast<int32_t>(offsetof(fieldController_t299223098, ___goal_11)); }
	inline GameObject_t1113636619 * get_goal_11() const { return ___goal_11; }
	inline GameObject_t1113636619 ** get_address_of_goal_11() { return &___goal_11; }
	inline void set_goal_11(GameObject_t1113636619 * value)
	{
		___goal_11 = value;
		Il2CppCodeGenWriteBarrier((&___goal_11), value);
	}

	inline static int32_t get_offset_of_ceiling_12() { return static_cast<int32_t>(offsetof(fieldController_t299223098, ___ceiling_12)); }
	inline GameObject_t1113636619 * get_ceiling_12() const { return ___ceiling_12; }
	inline GameObject_t1113636619 ** get_address_of_ceiling_12() { return &___ceiling_12; }
	inline void set_ceiling_12(GameObject_t1113636619 * value)
	{
		___ceiling_12 = value;
		Il2CppCodeGenWriteBarrier((&___ceiling_12), value);
	}

	inline static int32_t get_offset_of_ground_13() { return static_cast<int32_t>(offsetof(fieldController_t299223098, ___ground_13)); }
	inline GameObject_t1113636619 * get_ground_13() const { return ___ground_13; }
	inline GameObject_t1113636619 ** get_address_of_ground_13() { return &___ground_13; }
	inline void set_ground_13(GameObject_t1113636619 * value)
	{
		___ground_13 = value;
		Il2CppCodeGenWriteBarrier((&___ground_13), value);
	}

	inline static int32_t get_offset_of_wall_14() { return static_cast<int32_t>(offsetof(fieldController_t299223098, ___wall_14)); }
	inline GameObject_t1113636619 * get_wall_14() const { return ___wall_14; }
	inline GameObject_t1113636619 ** get_address_of_wall_14() { return &___wall_14; }
	inline void set_wall_14(GameObject_t1113636619 * value)
	{
		___wall_14 = value;
		Il2CppCodeGenWriteBarrier((&___wall_14), value);
	}

	inline static int32_t get_offset_of_Whiteball_15() { return static_cast<int32_t>(offsetof(fieldController_t299223098, ___Whiteball_15)); }
	inline GameObject_t1113636619 * get_Whiteball_15() const { return ___Whiteball_15; }
	inline GameObject_t1113636619 ** get_address_of_Whiteball_15() { return &___Whiteball_15; }
	inline void set_Whiteball_15(GameObject_t1113636619 * value)
	{
		___Whiteball_15 = value;
		Il2CppCodeGenWriteBarrier((&___Whiteball_15), value);
	}

	inline static int32_t get_offset_of_pos_building_16() { return static_cast<int32_t>(offsetof(fieldController_t299223098, ___pos_building_16)); }
	inline Vector3_t3722313464  get_pos_building_16() const { return ___pos_building_16; }
	inline Vector3_t3722313464 * get_address_of_pos_building_16() { return &___pos_building_16; }
	inline void set_pos_building_16(Vector3_t3722313464  value)
	{
		___pos_building_16 = value;
	}

	inline static int32_t get_offset_of_pos_player_17() { return static_cast<int32_t>(offsetof(fieldController_t299223098, ___pos_player_17)); }
	inline Vector3_t3722313464  get_pos_player_17() const { return ___pos_player_17; }
	inline Vector3_t3722313464 * get_address_of_pos_player_17() { return &___pos_player_17; }
	inline void set_pos_player_17(Vector3_t3722313464  value)
	{
		___pos_player_17 = value;
	}

	inline static int32_t get_offset_of_length_18() { return static_cast<int32_t>(offsetof(fieldController_t299223098, ___length_18)); }
	inline float get_length_18() const { return ___length_18; }
	inline float* get_address_of_length_18() { return &___length_18; }
	inline void set_length_18(float value)
	{
		___length_18 = value;
	}

	inline static int32_t get_offset_of_build_counter_19() { return static_cast<int32_t>(offsetof(fieldController_t299223098, ___build_counter_19)); }
	inline int32_t get_build_counter_19() const { return ___build_counter_19; }
	inline int32_t* get_address_of_build_counter_19() { return &___build_counter_19; }
	inline void set_build_counter_19(int32_t value)
	{
		___build_counter_19 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // FIELDCONTROLLER_T299223098_H
#ifndef FINISHDIRECTOR_T428679008_H
#define FINISHDIRECTOR_T428679008_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// finishDirector
struct  finishDirector_t428679008  : public MonoBehaviour_t3962482529
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // FINISHDIRECTOR_T428679008_H
#ifndef MULTICONTROLLER_T341618311_H
#define MULTICONTROLLER_T341618311_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// multiController
struct  multiController_t341618311  : public MonoBehaviour_t3962482529
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MULTICONTROLLER_T341618311_H
#ifndef WOLFCONTROLLER_T2317581319_H
#define WOLFCONTROLLER_T2317581319_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// wolfController
struct  wolfController_t2317581319  : public MonoBehaviour_t3962482529
{
public:
	// UnityEngine.Vector3 wolfController::pos
	Vector3_t3722313464  ___pos_4;
	// System.Int32 wolfController::sign
	int32_t ___sign_5;
	// System.Single wolfController::dx
	float ___dx_6;

public:
	inline static int32_t get_offset_of_pos_4() { return static_cast<int32_t>(offsetof(wolfController_t2317581319, ___pos_4)); }
	inline Vector3_t3722313464  get_pos_4() const { return ___pos_4; }
	inline Vector3_t3722313464 * get_address_of_pos_4() { return &___pos_4; }
	inline void set_pos_4(Vector3_t3722313464  value)
	{
		___pos_4 = value;
	}

	inline static int32_t get_offset_of_sign_5() { return static_cast<int32_t>(offsetof(wolfController_t2317581319, ___sign_5)); }
	inline int32_t get_sign_5() const { return ___sign_5; }
	inline int32_t* get_address_of_sign_5() { return &___sign_5; }
	inline void set_sign_5(int32_t value)
	{
		___sign_5 = value;
	}

	inline static int32_t get_offset_of_dx_6() { return static_cast<int32_t>(offsetof(wolfController_t2317581319, ___dx_6)); }
	inline float get_dx_6() const { return ___dx_6; }
	inline float* get_address_of_dx_6() { return &___dx_6; }
	inline void set_dx_6(float value)
	{
		___dx_6 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // WOLFCONTROLLER_T2317581319_H
#ifndef NETWORKPLAYER_T3974305218_H
#define NETWORKPLAYER_T3974305218_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// NetworkPlayer
struct  NetworkPlayer_t3974305218  : public MonoBehaviour_t3225183318
{
public:
	// UnityEngine.Vector3 NetworkPlayer::correctPlayerPos
	Vector3_t3722313464  ___correctPlayerPos_5;
	// UnityEngine.Quaternion NetworkPlayer::correctPlayerRot
	Quaternion_t2301928331  ___correctPlayerRot_6;

public:
	inline static int32_t get_offset_of_correctPlayerPos_5() { return static_cast<int32_t>(offsetof(NetworkPlayer_t3974305218, ___correctPlayerPos_5)); }
	inline Vector3_t3722313464  get_correctPlayerPos_5() const { return ___correctPlayerPos_5; }
	inline Vector3_t3722313464 * get_address_of_correctPlayerPos_5() { return &___correctPlayerPos_5; }
	inline void set_correctPlayerPos_5(Vector3_t3722313464  value)
	{
		___correctPlayerPos_5 = value;
	}

	inline static int32_t get_offset_of_correctPlayerRot_6() { return static_cast<int32_t>(offsetof(NetworkPlayer_t3974305218, ___correctPlayerRot_6)); }
	inline Quaternion_t2301928331  get_correctPlayerRot_6() const { return ___correctPlayerRot_6; }
	inline Quaternion_t2301928331 * get_address_of_correctPlayerRot_6() { return &___correctPlayerRot_6; }
	inline void set_correctPlayerRot_6(Quaternion_t2301928331  value)
	{
		___correctPlayerRot_6 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NETWORKPLAYER_T3974305218_H
#ifndef PUNBEHAVIOUR_T987309092_H
#define PUNBEHAVIOUR_T987309092_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Photon.PunBehaviour
struct  PunBehaviour_t987309092  : public MonoBehaviour_t3225183318
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PUNBEHAVIOUR_T987309092_H
#ifndef DEMONETWORK_T744748583_H
#define DEMONETWORK_T744748583_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// DemoNetWork
struct  DemoNetWork_t744748583  : public PunBehaviour_t987309092
{
public:
	// UnityEngine.GameObject DemoNetWork::Button
	GameObject_t1113636619 * ___Button_5;
	// System.Boolean DemoNetWork::start
	bool ___start_6;
	// System.String DemoNetWork::GroupName
	String_t* ___GroupName_7;
	// UnityEngine.UI.InputField DemoNetWork::GetInput
	InputField_t3762917431 * ___GetInput_8;
	// System.Int32 DemoNetWork::Id
	int32_t ___Id_9;

public:
	inline static int32_t get_offset_of_Button_5() { return static_cast<int32_t>(offsetof(DemoNetWork_t744748583, ___Button_5)); }
	inline GameObject_t1113636619 * get_Button_5() const { return ___Button_5; }
	inline GameObject_t1113636619 ** get_address_of_Button_5() { return &___Button_5; }
	inline void set_Button_5(GameObject_t1113636619 * value)
	{
		___Button_5 = value;
		Il2CppCodeGenWriteBarrier((&___Button_5), value);
	}

	inline static int32_t get_offset_of_start_6() { return static_cast<int32_t>(offsetof(DemoNetWork_t744748583, ___start_6)); }
	inline bool get_start_6() const { return ___start_6; }
	inline bool* get_address_of_start_6() { return &___start_6; }
	inline void set_start_6(bool value)
	{
		___start_6 = value;
	}

	inline static int32_t get_offset_of_GroupName_7() { return static_cast<int32_t>(offsetof(DemoNetWork_t744748583, ___GroupName_7)); }
	inline String_t* get_GroupName_7() const { return ___GroupName_7; }
	inline String_t** get_address_of_GroupName_7() { return &___GroupName_7; }
	inline void set_GroupName_7(String_t* value)
	{
		___GroupName_7 = value;
		Il2CppCodeGenWriteBarrier((&___GroupName_7), value);
	}

	inline static int32_t get_offset_of_GetInput_8() { return static_cast<int32_t>(offsetof(DemoNetWork_t744748583, ___GetInput_8)); }
	inline InputField_t3762917431 * get_GetInput_8() const { return ___GetInput_8; }
	inline InputField_t3762917431 ** get_address_of_GetInput_8() { return &___GetInput_8; }
	inline void set_GetInput_8(InputField_t3762917431 * value)
	{
		___GetInput_8 = value;
		Il2CppCodeGenWriteBarrier((&___GetInput_8), value);
	}

	inline static int32_t get_offset_of_Id_9() { return static_cast<int32_t>(offsetof(DemoNetWork_t744748583, ___Id_9)); }
	inline int32_t get_Id_9() const { return ___Id_9; }
	inline int32_t* get_address_of_Id_9() { return &___Id_9; }
	inline void set_Id_9(int32_t value)
	{
		___Id_9 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DEMONETWORK_T744748583_H





#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2600 = { sizeof (ChatChannel_t3314309194), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2600[5] = 
{
	ChatChannel_t3314309194::get_offset_of_Name_0(),
	ChatChannel_t3314309194::get_offset_of_Senders_1(),
	ChatChannel_t3314309194::get_offset_of_Messages_2(),
	ChatChannel_t3314309194::get_offset_of_MessageLimit_3(),
	ChatChannel_t3314309194::get_offset_of_U3CIsPrivateU3Ek__BackingField_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2601 = { sizeof (ChatClient_t3322764984), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2601[20] = 
{
	0,
	ChatClient_t3322764984::get_offset_of_U3CNameServerAddressU3Ek__BackingField_1(),
	ChatClient_t3322764984::get_offset_of_U3CFrontendAddressU3Ek__BackingField_2(),
	ChatClient_t3322764984::get_offset_of_chatRegion_3(),
	ChatClient_t3322764984::get_offset_of_U3CStateU3Ek__BackingField_4(),
	ChatClient_t3322764984::get_offset_of_U3CDisconnectedCauseU3Ek__BackingField_5(),
	ChatClient_t3322764984::get_offset_of_U3CAppVersionU3Ek__BackingField_6(),
	ChatClient_t3322764984::get_offset_of_U3CAppIdU3Ek__BackingField_7(),
	ChatClient_t3322764984::get_offset_of_U3CAuthValuesU3Ek__BackingField_8(),
	ChatClient_t3322764984::get_offset_of_MessageLimit_9(),
	ChatClient_t3322764984::get_offset_of_PublicChannels_10(),
	ChatClient_t3322764984::get_offset_of_PrivateChannels_11(),
	ChatClient_t3322764984::get_offset_of_PublicChannelsUnsubscribing_12(),
	ChatClient_t3322764984::get_offset_of_listener_13(),
	ChatClient_t3322764984::get_offset_of_chatPeer_14(),
	0,
	ChatClient_t3322764984::get_offset_of_didAuthenticate_16(),
	ChatClient_t3322764984::get_offset_of_msDeltaForServiceCalls_17(),
	ChatClient_t3322764984::get_offset_of_msTimestampOfLastServiceCall_18(),
	ChatClient_t3322764984::get_offset_of_U3CUseBackgroundWorkerForSendingU3Ek__BackingField_19(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2602 = { sizeof (ChatDisconnectCause_t3824038781)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable2602[12] = 
{
	ChatDisconnectCause_t3824038781::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
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
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2603 = { sizeof (ChatEventCode_t3158930382), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2603[7] = 
{
	0,
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2604 = { sizeof (ChatOperationCode_t2600569862), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2604[9] = 
{
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
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2605 = { sizeof (ChatParameterCode_t1934080102), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2605[17] = 
{
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
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2606 = { sizeof (ChatPeer_t2186541770), -1, sizeof(ChatPeer_t2186541770_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable2606[3] = 
{
	0,
	0,
	ChatPeer_t2186541770_StaticFields::get_offset_of_ProtocolToNameServerPort_41(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2607 = { sizeof (CustomAuthenticationType_t3431816196)+ sizeof (RuntimeObject), sizeof(uint8_t), 0, 0 };
extern const int32_t g_FieldOffsetTable2607[8] = 
{
	CustomAuthenticationType_t3431816196::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2608 = { sizeof (AuthenticationValues_t187933346), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2608[5] = 
{
	AuthenticationValues_t187933346::get_offset_of_authType_0(),
	AuthenticationValues_t187933346::get_offset_of_U3CAuthGetParametersU3Ek__BackingField_1(),
	AuthenticationValues_t187933346::get_offset_of_U3CAuthPostDataU3Ek__BackingField_2(),
	AuthenticationValues_t187933346::get_offset_of_U3CTokenU3Ek__BackingField_3(),
	AuthenticationValues_t187933346::get_offset_of_U3CUserIdU3Ek__BackingField_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2609 = { sizeof (ParameterCode_t1075756884), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2609[9] = 
{
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
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2610 = { sizeof (ErrorCode_t3704103031), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2610[15] = 
{
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
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2611 = { sizeof (ChatState_t3709194201)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable2611[13] = 
{
	ChatState_t3709194201::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
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
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2612 = { sizeof (ChatUserStatus_t1535268910), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2612[7] = 
{
	0,
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2613 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2614 = { sizeof (BackgroundController_t2094213180), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2614[2] = 
{
	BackgroundController_t2094213180::get_offset_of_Hitsuji_4(),
	BackgroundController_t2094213180::get_offset_of_Background_5(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2615 = { sizeof (BackgroundController2_t211584824), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2615[2] = 
{
	BackgroundController2_t211584824::get_offset_of_speed_4(),
	BackgroundController2_t211584824::get_offset_of_Background_5(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2616 = { sizeof (DemoNetWork_t744748583), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2616[5] = 
{
	DemoNetWork_t744748583::get_offset_of_Button_5(),
	DemoNetWork_t744748583::get_offset_of_start_6(),
	DemoNetWork_t744748583::get_offset_of_GroupName_7(),
	DemoNetWork_t744748583::get_offset_of_GetInput_8(),
	DemoNetWork_t744748583::get_offset_of_Id_9(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2617 = { sizeof (Fadetest_t493680287), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2617[5] = 
{
	Fadetest_t493680287::get_offset_of_alfa_4(),
	Fadetest_t493680287::get_offset_of_speed_5(),
	Fadetest_t493680287::get_offset_of_red_6(),
	Fadetest_t493680287::get_offset_of_green_7(),
	Fadetest_t493680287::get_offset_of_blue_8(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2618 = { sizeof (fieldController_t299223098), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2618[16] = 
{
	fieldController_t299223098::get_offset_of_build_a_pre_4(),
	fieldController_t299223098::get_offset_of_build_b_pre_5(),
	fieldController_t299223098::get_offset_of_build_c_pre_6(),
	fieldController_t299223098::get_offset_of_build_d_pre_7(),
	fieldController_t299223098::get_offset_of_build_e_pre_8(),
	fieldController_t299223098::get_offset_of_goal_appear_9(),
	fieldController_t299223098::get_offset_of_build_10(),
	fieldController_t299223098::get_offset_of_goal_11(),
	fieldController_t299223098::get_offset_of_ceiling_12(),
	fieldController_t299223098::get_offset_of_ground_13(),
	fieldController_t299223098::get_offset_of_wall_14(),
	fieldController_t299223098::get_offset_of_Whiteball_15(),
	fieldController_t299223098::get_offset_of_pos_building_16(),
	fieldController_t299223098::get_offset_of_pos_player_17(),
	fieldController_t299223098::get_offset_of_length_18(),
	fieldController_t299223098::get_offset_of_build_counter_19(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2619 = { sizeof (finishDirector_t428679008), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2620 = { sizeof (Maskmove_t1475458627), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2620[2] = 
{
	Maskmove_t1475458627::get_offset_of_speed_4(),
	Maskmove_t1475458627::get_offset_of_Mask_5(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2621 = { sizeof (Maskmove2_t910172094), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2621[2] = 
{
	Maskmove2_t910172094::get_offset_of_speed_4(),
	Maskmove2_t910172094::get_offset_of_Mask_5(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2622 = { sizeof (multiController_t341618311), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2623 = { sizeof (NetworkPlayer_t3974305218), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2623[2] = 
{
	NetworkPlayer_t3974305218::get_offset_of_correctPlayerPos_5(),
	NetworkPlayer_t3974305218::get_offset_of_correctPlayerRot_6(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2624 = { sizeof (PauseScript_t3720017255), -1, sizeof(PauseScript_t3720017255_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable2624[3] = 
{
	PauseScript_t3720017255_StaticFields::get_offset_of_ito_flag_4(),
	PauseScript_t3720017255::get_offset_of_pauseUI_5(),
	PauseScript_t3720017255::get_offset_of_pauseButton_6(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2625 = { sizeof (PlayerController_t2064355688), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2625[28] = 
{
	PlayerController_t2064355688::get_offset_of_pos_4(),
	PlayerController_t2064355688::get_offset_of_pos_ito_5(),
	PlayerController_t2064355688::get_offset_of_pos_camera_6(),
	PlayerController_t2064355688::get_offset_of_dirY_7(),
	PlayerController_t2064355688::get_offset_of_dirX_8(),
	PlayerController_t2064355688::get_offset_of_leng_9(),
	PlayerController_t2064355688::get_offset_of_target_pos_10(),
	PlayerController_t2064355688::get_offset_of_ceiling_11(),
	PlayerController_t2064355688::get_offset_of_woolPrefab_12(),
	PlayerController_t2064355688::get_offset_of_bokaPrefab_13(),
	PlayerController_t2064355688::get_offset_of_wool_14(),
	PlayerController_t2064355688::get_offset_of_ceiling_pos_15(),
	PlayerController_t2064355688::get_offset_of_itoPrafab_16(),
	PlayerController_t2064355688::get_offset_of_ito_17(),
	PlayerController_t2064355688::get_offset_of_joint_18(),
	PlayerController_t2064355688::get_offset_of_joint_ito_19(),
	PlayerController_t2064355688::get_offset_of_rb_player_20(),
	PlayerController_t2064355688::get_offset_of_female_21(),
	PlayerController_t2064355688::get_offset_of_boka_22(),
	PlayerController_t2064355688::get_offset_of_anim_23(),
	PlayerController_t2064355688::get_offset_of_sceneName_24(),
	PlayerController_t2064355688::get_offset_of_ito_flag2_25(),
	PlayerController_t2064355688::get_offset_of_wool_count_26(),
	PlayerController_t2064355688::get_offset_of_p_27(),
	PlayerController_t2064355688::get_offset_of__slider_28(),
	PlayerController_t2064355688::get_offset_of_swing_29(),
	PlayerController_t2064355688::get_offset_of_jump_30(),
	PlayerController_t2064355688::get_offset_of_boka_exit_31(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2626 = { sizeof (PlayerController_Photon_t983201452), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2626[35] = 
{
	PlayerController_Photon_t983201452::get_offset_of_pos_4(),
	PlayerController_Photon_t983201452::get_offset_of_pos_ito_5(),
	PlayerController_Photon_t983201452::get_offset_of_pos_camera_6(),
	PlayerController_Photon_t983201452::get_offset_of_dirY_7(),
	PlayerController_Photon_t983201452::get_offset_of_dirX_8(),
	PlayerController_Photon_t983201452::get_offset_of_leng_9(),
	PlayerController_Photon_t983201452::get_offset_of_target_pos_10(),
	PlayerController_Photon_t983201452::get_offset_of_ceiling_11(),
	PlayerController_Photon_t983201452::get_offset_of_woolPrefab_12(),
	PlayerController_Photon_t983201452::get_offset_of_bokaPrefab_13(),
	PlayerController_Photon_t983201452::get_offset_of_speed_14(),
	PlayerController_Photon_t983201452::get_offset_of_speed2_15(),
	PlayerController_Photon_t983201452::get_offset_of_Mask_16(),
	PlayerController_Photon_t983201452::get_offset_of_Mask2_17(),
	PlayerController_Photon_t983201452::get_offset_of_wool_18(),
	PlayerController_Photon_t983201452::get_offset_of_ceiling_pos_19(),
	PlayerController_Photon_t983201452::get_offset_of_itoPrafab_20(),
	PlayerController_Photon_t983201452::get_offset_of_ito_21(),
	PlayerController_Photon_t983201452::get_offset_of_joint_22(),
	PlayerController_Photon_t983201452::get_offset_of_joint_ito_23(),
	PlayerController_Photon_t983201452::get_offset_of_rb_player_24(),
	PlayerController_Photon_t983201452::get_offset_of_female_25(),
	PlayerController_Photon_t983201452::get_offset_of_boka_26(),
	PlayerController_Photon_t983201452::get_offset_of_wolf_27(),
	PlayerController_Photon_t983201452::get_offset_of_anim_28(),
	PlayerController_Photon_t983201452::get_offset_of_sceneName_29(),
	PlayerController_Photon_t983201452::get_offset_of_wool_count_30(),
	PlayerController_Photon_t983201452::get_offset_of_p_31(),
	PlayerController_Photon_t983201452::get_offset_of_myPhotonView_32(),
	PlayerController_Photon_t983201452::get_offset_of__slider_33(),
	PlayerController_Photon_t983201452::get_offset_of_swing_34(),
	PlayerController_Photon_t983201452::get_offset_of_jump_35(),
	PlayerController_Photon_t983201452::get_offset_of_boka_exit_36(),
	PlayerController_Photon_t983201452::get_offset_of_mask_flag_37(),
	PlayerController_Photon_t983201452::get_offset_of_mask_flag2_38(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2627 = { sizeof (ResultDirector_t2940682919), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2628 = { sizeof (ResultTime_t788135641), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2629 = { sizeof (RoomManager_t89007945), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2629[3] = 
{
	RoomManager_t89007945::get_offset_of_playerName_4(),
	RoomManager_t89007945::get_offset_of_roomName_5(),
	RoomManager_t89007945::get_offset_of_connectFailed_6(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2630 = { sizeof (SelectController_t3183435330), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2630[2] = 
{
	SelectController_t3183435330::get_offset_of_Multi_Background_4(),
	SelectController_t3183435330::get_offset_of_Solo_Background_5(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2631 = { sizeof (SoundController_t2462365417), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2631[2] = 
{
	SoundController_t2462365417::get_offset_of_audioClip1_4(),
	SoundController_t2462365417::get_offset_of_audioSource_5(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2632 = { sizeof (StartDestroyer_t3536613077), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2632[1] = 
{
	StartDestroyer_t3536613077::get_offset_of_animator_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2633 = { sizeof (TimerScript_t1618777791), -1, sizeof(TimerScript_t1618777791_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable2633[4] = 
{
	TimerScript_t1618777791::get_offset_of_time_4(),
	TimerScript_t1618777791::get_offset_of_text_5(),
	TimerScript_t1618777791_StaticFields::get_offset_of_sec_6(),
	TimerScript_t1618777791_StaticFields::get_offset_of_msec_7(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2634 = { sizeof (TitleController_t619016484), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2634[4] = 
{
	TitleController_t619016484::get_offset_of_StartButton_4(),
	TitleController_t619016484::get_offset_of_StartButton_push_5(),
	TitleController_t619016484::get_offset_of_audioClip1_6(),
	TitleController_t619016484::get_offset_of_audioSource_7(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2635 = { sizeof (wolfController_t2317581319), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2635[3] = 
{
	wolfController_t2317581319::get_offset_of_pos_4(),
	wolfController_t2317581319::get_offset_of_sign_5(),
	wolfController_t2317581319::get_offset_of_dx_6(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2636 = { sizeof (U3CPrivateImplementationDetailsU3E_t3057255367), -1, sizeof(U3CPrivateImplementationDetailsU3E_t3057255367_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable2636[3] = 
{
	U3CPrivateImplementationDetailsU3E_t3057255367_StaticFields::get_offset_of_U24fieldU2D8658990BAD6546E619D8A5C4F90BCF3F089E0953_0(),
	U3CPrivateImplementationDetailsU3E_t3057255367_StaticFields::get_offset_of_U24fieldU2D739C505E9F0985CE1E08892BC46BE5E839FF061A_1(),
	U3CPrivateImplementationDetailsU3E_t3057255367_StaticFields::get_offset_of_U24fieldU2D35FDBB6669F521B572D4AD71DD77E77F43C1B71B_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2637 = { sizeof (U24ArrayTypeU3D16_t3253128244)+ sizeof (RuntimeObject), sizeof(U24ArrayTypeU3D16_t3253128244 ), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2638 = { sizeof (U24ArrayTypeU3D32_t3651253610)+ sizeof (RuntimeObject), sizeof(U24ArrayTypeU3D32_t3651253610 ), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2639 = { sizeof (U24ArrayTypeU3D48_t1336283963)+ sizeof (RuntimeObject), sizeof(U24ArrayTypeU3D48_t1336283963 ), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2640 = { sizeof (U3CModuleU3E_t692745545), -1, 0, 0 };
#ifdef __clang__
#pragma clang diagnostic pop
#endif

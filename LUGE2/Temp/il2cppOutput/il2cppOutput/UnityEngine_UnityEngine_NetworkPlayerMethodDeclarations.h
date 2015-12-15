#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>

// System.String
struct String_t;
// System.Object
struct Object_t;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_NetworkPlayer.h"

// System.Void UnityEngine.NetworkPlayer::.ctor(System.String,System.Int32)
extern "C" void NetworkPlayer__ctor_m5_378 (NetworkPlayer_t5_58 * __this, String_t* ___ip, int32_t ___port, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.NetworkPlayer::Internal_GetIPAddress(System.Int32)
extern "C" String_t* NetworkPlayer_Internal_GetIPAddress_m5_379 (Object_t * __this /* static, unused */, int32_t ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.NetworkPlayer::Internal_GetPort(System.Int32)
extern "C" int32_t NetworkPlayer_Internal_GetPort_m5_380 (Object_t * __this /* static, unused */, int32_t ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.NetworkPlayer::Internal_GetExternalIP()
extern "C" String_t* NetworkPlayer_Internal_GetExternalIP_m5_381 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.NetworkPlayer::Internal_GetExternalPort()
extern "C" int32_t NetworkPlayer_Internal_GetExternalPort_m5_382 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.NetworkPlayer::Internal_GetLocalIP()
extern "C" String_t* NetworkPlayer_Internal_GetLocalIP_m5_383 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.NetworkPlayer::Internal_GetLocalPort()
extern "C" int32_t NetworkPlayer_Internal_GetLocalPort_m5_384 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.NetworkPlayer::Internal_GetPlayerIndex()
extern "C" int32_t NetworkPlayer_Internal_GetPlayerIndex_m5_385 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.NetworkPlayer::Internal_GetGUID(System.Int32)
extern "C" String_t* NetworkPlayer_Internal_GetGUID_m5_386 (Object_t * __this /* static, unused */, int32_t ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.NetworkPlayer::Internal_GetLocalGUID()
extern "C" String_t* NetworkPlayer_Internal_GetLocalGUID_m5_387 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.NetworkPlayer::GetHashCode()
extern "C" int32_t NetworkPlayer_GetHashCode_m5_388 (NetworkPlayer_t5_58 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.NetworkPlayer::Equals(System.Object)
extern "C" bool NetworkPlayer_Equals_m5_389 (NetworkPlayer_t5_58 * __this, Object_t * ___other, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.NetworkPlayer::get_ipAddress()
extern "C" String_t* NetworkPlayer_get_ipAddress_m5_390 (NetworkPlayer_t5_58 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.NetworkPlayer::get_port()
extern "C" int32_t NetworkPlayer_get_port_m5_391 (NetworkPlayer_t5_58 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.NetworkPlayer::get_guid()
extern "C" String_t* NetworkPlayer_get_guid_m5_392 (NetworkPlayer_t5_58 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.NetworkPlayer::ToString()
extern "C" String_t* NetworkPlayer_ToString_m5_393 (NetworkPlayer_t5_58 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.NetworkPlayer::get_externalIP()
extern "C" String_t* NetworkPlayer_get_externalIP_m5_394 (NetworkPlayer_t5_58 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.NetworkPlayer::get_externalPort()
extern "C" int32_t NetworkPlayer_get_externalPort_m5_395 (NetworkPlayer_t5_58 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.NetworkPlayer UnityEngine.NetworkPlayer::get_unassigned()
extern "C" NetworkPlayer_t5_58  NetworkPlayer_get_unassigned_m5_396 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.NetworkPlayer::op_Equality(UnityEngine.NetworkPlayer,UnityEngine.NetworkPlayer)
extern "C" bool NetworkPlayer_op_Equality_m5_397 (Object_t * __this /* static, unused */, NetworkPlayer_t5_58  ___lhs, NetworkPlayer_t5_58  ___rhs, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.NetworkPlayer::op_Inequality(UnityEngine.NetworkPlayer,UnityEngine.NetworkPlayer)
extern "C" bool NetworkPlayer_op_Inequality_m5_398 (Object_t * __this /* static, unused */, NetworkPlayer_t5_58  ___lhs, NetworkPlayer_t5_58  ___rhs, const MethodInfo* method) IL2CPP_METHOD_ATTR;

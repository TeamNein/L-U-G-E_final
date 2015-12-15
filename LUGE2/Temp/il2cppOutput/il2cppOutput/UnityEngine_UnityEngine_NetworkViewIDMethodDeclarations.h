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
#include "UnityEngine_UnityEngine_NetworkViewID.h"
#include "UnityEngine_UnityEngine_NetworkPlayer.h"

// UnityEngine.NetworkViewID UnityEngine.NetworkViewID::get_unassigned()
extern "C" NetworkViewID_t5_59  NetworkViewID_get_unassigned_m5_399 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.NetworkViewID::INTERNAL_get_unassigned(UnityEngine.NetworkViewID&)
extern "C" void NetworkViewID_INTERNAL_get_unassigned_m5_400 (Object_t * __this /* static, unused */, NetworkViewID_t5_59 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.NetworkViewID::Internal_IsMine(UnityEngine.NetworkViewID)
extern "C" bool NetworkViewID_Internal_IsMine_m5_401 (Object_t * __this /* static, unused */, NetworkViewID_t5_59  ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.NetworkViewID::INTERNAL_CALL_Internal_IsMine(UnityEngine.NetworkViewID&)
extern "C" bool NetworkViewID_INTERNAL_CALL_Internal_IsMine_m5_402 (Object_t * __this /* static, unused */, NetworkViewID_t5_59 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.NetworkViewID::Internal_GetOwner(UnityEngine.NetworkViewID,UnityEngine.NetworkPlayer&)
extern "C" void NetworkViewID_Internal_GetOwner_m5_403 (Object_t * __this /* static, unused */, NetworkViewID_t5_59  ___value, NetworkPlayer_t5_58 * ___player, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.NetworkViewID::INTERNAL_CALL_Internal_GetOwner(UnityEngine.NetworkViewID&,UnityEngine.NetworkPlayer&)
extern "C" void NetworkViewID_INTERNAL_CALL_Internal_GetOwner_m5_404 (Object_t * __this /* static, unused */, NetworkViewID_t5_59 * ___value, NetworkPlayer_t5_58 * ___player, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.NetworkViewID::Internal_GetString(UnityEngine.NetworkViewID)
extern "C" String_t* NetworkViewID_Internal_GetString_m5_405 (Object_t * __this /* static, unused */, NetworkViewID_t5_59  ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.NetworkViewID::INTERNAL_CALL_Internal_GetString(UnityEngine.NetworkViewID&)
extern "C" String_t* NetworkViewID_INTERNAL_CALL_Internal_GetString_m5_406 (Object_t * __this /* static, unused */, NetworkViewID_t5_59 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.NetworkViewID::Internal_Compare(UnityEngine.NetworkViewID,UnityEngine.NetworkViewID)
extern "C" bool NetworkViewID_Internal_Compare_m5_407 (Object_t * __this /* static, unused */, NetworkViewID_t5_59  ___lhs, NetworkViewID_t5_59  ___rhs, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.NetworkViewID::INTERNAL_CALL_Internal_Compare(UnityEngine.NetworkViewID&,UnityEngine.NetworkViewID&)
extern "C" bool NetworkViewID_INTERNAL_CALL_Internal_Compare_m5_408 (Object_t * __this /* static, unused */, NetworkViewID_t5_59 * ___lhs, NetworkViewID_t5_59 * ___rhs, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.NetworkViewID::GetHashCode()
extern "C" int32_t NetworkViewID_GetHashCode_m5_409 (NetworkViewID_t5_59 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.NetworkViewID::Equals(System.Object)
extern "C" bool NetworkViewID_Equals_m5_410 (NetworkViewID_t5_59 * __this, Object_t * ___other, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.NetworkViewID::get_isMine()
extern "C" bool NetworkViewID_get_isMine_m5_411 (NetworkViewID_t5_59 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.NetworkPlayer UnityEngine.NetworkViewID::get_owner()
extern "C" NetworkPlayer_t5_58  NetworkViewID_get_owner_m5_412 (NetworkViewID_t5_59 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.NetworkViewID::ToString()
extern "C" String_t* NetworkViewID_ToString_m5_413 (NetworkViewID_t5_59 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.NetworkViewID::op_Equality(UnityEngine.NetworkViewID,UnityEngine.NetworkViewID)
extern "C" bool NetworkViewID_op_Equality_m5_414 (Object_t * __this /* static, unused */, NetworkViewID_t5_59  ___lhs, NetworkViewID_t5_59  ___rhs, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.NetworkViewID::op_Inequality(UnityEngine.NetworkViewID,UnityEngine.NetworkViewID)
extern "C" bool NetworkViewID_op_Inequality_m5_415 (Object_t * __this /* static, unused */, NetworkViewID_t5_59  ___lhs, NetworkViewID_t5_59  ___rhs, const MethodInfo* method) IL2CPP_METHOD_ATTR;

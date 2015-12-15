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

// UnityEngine.BitStream
struct BitStream_t5_61;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Quaternion.h"
#include "UnityEngine_UnityEngine_Vector3.h"
#include "UnityEngine_UnityEngine_NetworkViewID.h"
#include "UnityEngine_UnityEngine_NetworkPlayer.h"

// System.Void UnityEngine.BitStream::.ctor()
extern "C" void BitStream__ctor_m5_418 (BitStream_t5_61 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.BitStream::Serializeb(System.Int32&)
extern "C" void BitStream_Serializeb_m5_419 (BitStream_t5_61 * __this, int32_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.BitStream::Serializec(System.Char&)
extern "C" void BitStream_Serializec_m5_420 (BitStream_t5_61 * __this, uint16_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.BitStream::Serializes(System.Int16&)
extern "C" void BitStream_Serializes_m5_421 (BitStream_t5_61 * __this, int16_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.BitStream::Serializei(System.Int32&)
extern "C" void BitStream_Serializei_m5_422 (BitStream_t5_61 * __this, int32_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.BitStream::Serializef(System.Single&,System.Single)
extern "C" void BitStream_Serializef_m5_423 (BitStream_t5_61 * __this, float* ___value, float ___maximumDelta, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.BitStream::Serializeq(UnityEngine.Quaternion&,System.Single)
extern "C" void BitStream_Serializeq_m5_424 (BitStream_t5_61 * __this, Quaternion_t5_47 * ___value, float ___maximumDelta, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.BitStream::INTERNAL_CALL_Serializeq(UnityEngine.BitStream,UnityEngine.Quaternion&,System.Single)
extern "C" void BitStream_INTERNAL_CALL_Serializeq_m5_425 (Object_t * __this /* static, unused */, BitStream_t5_61 * ___self, Quaternion_t5_47 * ___value, float ___maximumDelta, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.BitStream::Serializev(UnityEngine.Vector3&,System.Single)
extern "C" void BitStream_Serializev_m5_426 (BitStream_t5_61 * __this, Vector3_t5_45 * ___value, float ___maximumDelta, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.BitStream::INTERNAL_CALL_Serializev(UnityEngine.BitStream,UnityEngine.Vector3&,System.Single)
extern "C" void BitStream_INTERNAL_CALL_Serializev_m5_427 (Object_t * __this /* static, unused */, BitStream_t5_61 * ___self, Vector3_t5_45 * ___value, float ___maximumDelta, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.BitStream::Serializen(UnityEngine.NetworkViewID&)
extern "C" void BitStream_Serializen_m5_428 (BitStream_t5_61 * __this, NetworkViewID_t5_59 * ___viewID, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.BitStream::INTERNAL_CALL_Serializen(UnityEngine.BitStream,UnityEngine.NetworkViewID&)
extern "C" void BitStream_INTERNAL_CALL_Serializen_m5_429 (Object_t * __this /* static, unused */, BitStream_t5_61 * ___self, NetworkViewID_t5_59 * ___viewID, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.BitStream::Serialize(System.Boolean&)
extern "C" void BitStream_Serialize_m5_430 (BitStream_t5_61 * __this, bool* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.BitStream::Serialize(System.Char&)
extern "C" void BitStream_Serialize_m5_431 (BitStream_t5_61 * __this, uint16_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.BitStream::Serialize(System.Int16&)
extern "C" void BitStream_Serialize_m5_432 (BitStream_t5_61 * __this, int16_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.BitStream::Serialize(System.Int32&)
extern "C" void BitStream_Serialize_m5_433 (BitStream_t5_61 * __this, int32_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.BitStream::Serialize(System.Single&)
extern "C" void BitStream_Serialize_m5_434 (BitStream_t5_61 * __this, float* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.BitStream::Serialize(System.Single&,System.Single)
extern "C" void BitStream_Serialize_m5_435 (BitStream_t5_61 * __this, float* ___value, float ___maxDelta, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.BitStream::Serialize(UnityEngine.Quaternion&)
extern "C" void BitStream_Serialize_m5_436 (BitStream_t5_61 * __this, Quaternion_t5_47 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.BitStream::Serialize(UnityEngine.Quaternion&,System.Single)
extern "C" void BitStream_Serialize_m5_437 (BitStream_t5_61 * __this, Quaternion_t5_47 * ___value, float ___maxDelta, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.BitStream::Serialize(UnityEngine.Vector3&)
extern "C" void BitStream_Serialize_m5_438 (BitStream_t5_61 * __this, Vector3_t5_45 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.BitStream::Serialize(UnityEngine.Vector3&,System.Single)
extern "C" void BitStream_Serialize_m5_439 (BitStream_t5_61 * __this, Vector3_t5_45 * ___value, float ___maxDelta, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.BitStream::Serialize(UnityEngine.NetworkPlayer&)
extern "C" void BitStream_Serialize_m5_440 (BitStream_t5_61 * __this, NetworkPlayer_t5_58 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.BitStream::Serialize(UnityEngine.NetworkViewID&)
extern "C" void BitStream_Serialize_m5_441 (BitStream_t5_61 * __this, NetworkViewID_t5_59 * ___viewID, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.BitStream::get_isReading()
extern "C" bool BitStream_get_isReading_m5_442 (BitStream_t5_61 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.BitStream::get_isWriting()
extern "C" bool BitStream_get_isWriting_m5_443 (BitStream_t5_61 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.BitStream::Serialize(System.String&)
extern "C" void BitStream_Serialize_m5_444 (BitStream_t5_61 * __this, String_t** ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;

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

// UnityEngine.TrackedReference
struct TrackedReference_t5_154;
struct TrackedReference_t5_154_marshaled;
// System.Object
struct Object_t;

#include "codegen/il2cpp-codegen.h"

// System.Boolean UnityEngine.TrackedReference::Equals(System.Object)
extern "C" bool TrackedReference_Equals_m5_1700 (TrackedReference_t5_154 * __this, Object_t * ___o, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.TrackedReference::GetHashCode()
extern "C" int32_t TrackedReference_GetHashCode_m5_1701 (TrackedReference_t5_154 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.TrackedReference::op_Equality(UnityEngine.TrackedReference,UnityEngine.TrackedReference)
extern "C" bool TrackedReference_op_Equality_m5_1702 (Object_t * __this /* static, unused */, TrackedReference_t5_154 * ___x, TrackedReference_t5_154 * ___y, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void TrackedReference_t5_154_marshal(const TrackedReference_t5_154& unmarshaled, TrackedReference_t5_154_marshaled& marshaled);
extern "C" void TrackedReference_t5_154_marshal_back(const TrackedReference_t5_154_marshaled& marshaled, TrackedReference_t5_154& unmarshaled);
extern "C" void TrackedReference_t5_154_marshal_cleanup(TrackedReference_t5_154_marshaled& marshaled);

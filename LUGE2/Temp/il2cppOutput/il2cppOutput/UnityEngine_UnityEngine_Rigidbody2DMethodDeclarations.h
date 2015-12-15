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

// UnityEngine.Rigidbody2D
struct Rigidbody2D_t5_139;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Vector2.h"
#include "UnityEngine_UnityEngine_ForceMode2D.h"

// UnityEngine.Vector2 UnityEngine.Rigidbody2D::get_velocity()
extern "C" Vector2_t5_44  Rigidbody2D_get_velocity_m5_1040 (Rigidbody2D_t5_139 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Rigidbody2D::set_velocity(UnityEngine.Vector2)
extern "C" void Rigidbody2D_set_velocity_m5_1041 (Rigidbody2D_t5_139 * __this, Vector2_t5_44  ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Rigidbody2D::INTERNAL_get_velocity(UnityEngine.Vector2&)
extern "C" void Rigidbody2D_INTERNAL_get_velocity_m5_1042 (Rigidbody2D_t5_139 * __this, Vector2_t5_44 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Rigidbody2D::INTERNAL_set_velocity(UnityEngine.Vector2&)
extern "C" void Rigidbody2D_INTERNAL_set_velocity_m5_1043 (Rigidbody2D_t5_139 * __this, Vector2_t5_44 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Rigidbody2D::set_fixedAngle(System.Boolean)
extern "C" void Rigidbody2D_set_fixedAngle_m5_1044 (Rigidbody2D_t5_139 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Rigidbody2D::AddForce(UnityEngine.Vector2)
extern "C" void Rigidbody2D_AddForce_m5_1045 (Rigidbody2D_t5_139 * __this, Vector2_t5_44  ___force, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Rigidbody2D::INTERNAL_CALL_AddForce(UnityEngine.Rigidbody2D,UnityEngine.Vector2&,UnityEngine.ForceMode2D)
extern "C" void Rigidbody2D_INTERNAL_CALL_AddForce_m5_1046 (Object_t * __this /* static, unused */, Rigidbody2D_t5_139 * ___self, Vector2_t5_44 * ___force, int32_t ___mode, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Rigidbody2D::AddTorque(System.Single,UnityEngine.ForceMode2D)
extern "C" void Rigidbody2D_AddTorque_m5_1047 (Rigidbody2D_t5_139 * __this, float ___torque, int32_t ___mode, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Rigidbody2D::AddTorque(System.Single)
extern "C" void Rigidbody2D_AddTorque_m5_1048 (Rigidbody2D_t5_139 * __this, float ___torque, const MethodInfo* method) IL2CPP_METHOD_ATTR;

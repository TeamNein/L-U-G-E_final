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

// UnityEngine.RaycastHit2D[]
struct RaycastHit2DU5BU5D_t5_297;
// UnityEngine.Collider2D[]
struct Collider2DU5BU5D_t5_298;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Vector2.h"
#include "UnityEngine_UnityEngine_RaycastHit2D.h"

// System.Void UnityEngine.Physics2D::.cctor()
extern "C" void Physics2D__cctor_m5_1020 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Physics2D::Internal_Linecast(UnityEngine.Vector2,UnityEngine.Vector2,System.Int32,System.Single,System.Single,UnityEngine.RaycastHit2D&)
extern "C" void Physics2D_Internal_Linecast_m5_1021 (Object_t * __this /* static, unused */, Vector2_t5_44  ___start, Vector2_t5_44  ___end, int32_t ___layerMask, float ___minDepth, float ___maxDepth, RaycastHit2D_t5_136 * ___raycastHit, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Physics2D::INTERNAL_CALL_Internal_Linecast(UnityEngine.Vector2&,UnityEngine.Vector2&,System.Int32,System.Single,System.Single,UnityEngine.RaycastHit2D&)
extern "C" void Physics2D_INTERNAL_CALL_Internal_Linecast_m5_1022 (Object_t * __this /* static, unused */, Vector2_t5_44 * ___start, Vector2_t5_44 * ___end, int32_t ___layerMask, float ___minDepth, float ___maxDepth, RaycastHit2D_t5_136 * ___raycastHit, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.RaycastHit2D UnityEngine.Physics2D::Linecast(UnityEngine.Vector2,UnityEngine.Vector2,System.Int32)
extern "C" RaycastHit2D_t5_136  Physics2D_Linecast_m5_1023 (Object_t * __this /* static, unused */, Vector2_t5_44  ___start, Vector2_t5_44  ___end, int32_t ___layerMask, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.RaycastHit2D UnityEngine.Physics2D::Linecast(UnityEngine.Vector2,UnityEngine.Vector2,System.Int32,System.Single,System.Single)
extern "C" RaycastHit2D_t5_136  Physics2D_Linecast_m5_1024 (Object_t * __this /* static, unused */, Vector2_t5_44  ___start, Vector2_t5_44  ___end, int32_t ___layerMask, float ___minDepth, float ___maxDepth, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Physics2D::Internal_Raycast(UnityEngine.Vector2,UnityEngine.Vector2,System.Single,System.Int32,System.Single,System.Single,UnityEngine.RaycastHit2D&)
extern "C" void Physics2D_Internal_Raycast_m5_1025 (Object_t * __this /* static, unused */, Vector2_t5_44  ___origin, Vector2_t5_44  ___direction, float ___distance, int32_t ___layerMask, float ___minDepth, float ___maxDepth, RaycastHit2D_t5_136 * ___raycastHit, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Physics2D::INTERNAL_CALL_Internal_Raycast(UnityEngine.Vector2&,UnityEngine.Vector2&,System.Single,System.Int32,System.Single,System.Single,UnityEngine.RaycastHit2D&)
extern "C" void Physics2D_INTERNAL_CALL_Internal_Raycast_m5_1026 (Object_t * __this /* static, unused */, Vector2_t5_44 * ___origin, Vector2_t5_44 * ___direction, float ___distance, int32_t ___layerMask, float ___minDepth, float ___maxDepth, RaycastHit2D_t5_136 * ___raycastHit, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.RaycastHit2D UnityEngine.Physics2D::Raycast(UnityEngine.Vector2,UnityEngine.Vector2,System.Single,System.Int32)
extern "C" RaycastHit2D_t5_136  Physics2D_Raycast_m5_1027 (Object_t * __this /* static, unused */, Vector2_t5_44  ___origin, Vector2_t5_44  ___direction, float ___distance, int32_t ___layerMask, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.RaycastHit2D UnityEngine.Physics2D::Raycast(UnityEngine.Vector2,UnityEngine.Vector2,System.Single,System.Int32,System.Single,System.Single)
extern "C" RaycastHit2D_t5_136  Physics2D_Raycast_m5_1028 (Object_t * __this /* static, unused */, Vector2_t5_44  ___origin, Vector2_t5_44  ___direction, float ___distance, int32_t ___layerMask, float ___minDepth, float ___maxDepth, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.RaycastHit2D[] UnityEngine.Physics2D::RaycastAll(UnityEngine.Vector2,UnityEngine.Vector2,System.Single,System.Int32)
extern "C" RaycastHit2DU5BU5D_t5_297* Physics2D_RaycastAll_m5_1029 (Object_t * __this /* static, unused */, Vector2_t5_44  ___origin, Vector2_t5_44  ___direction, float ___distance, int32_t ___layerMask, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.RaycastHit2D[] UnityEngine.Physics2D::INTERNAL_CALL_RaycastAll(UnityEngine.Vector2&,UnityEngine.Vector2&,System.Single,System.Int32,System.Single,System.Single)
extern "C" RaycastHit2DU5BU5D_t5_297* Physics2D_INTERNAL_CALL_RaycastAll_m5_1030 (Object_t * __this /* static, unused */, Vector2_t5_44 * ___origin, Vector2_t5_44 * ___direction, float ___distance, int32_t ___layerMask, float ___minDepth, float ___maxDepth, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Collider2D[] UnityEngine.Physics2D::OverlapPointAll(UnityEngine.Vector2,System.Int32)
extern "C" Collider2DU5BU5D_t5_298* Physics2D_OverlapPointAll_m5_1031 (Object_t * __this /* static, unused */, Vector2_t5_44  ___point, int32_t ___layerMask, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Collider2D[] UnityEngine.Physics2D::INTERNAL_CALL_OverlapPointAll(UnityEngine.Vector2&,System.Int32,System.Single,System.Single)
extern "C" Collider2DU5BU5D_t5_298* Physics2D_INTERNAL_CALL_OverlapPointAll_m5_1032 (Object_t * __this /* static, unused */, Vector2_t5_44 * ___point, int32_t ___layerMask, float ___minDepth, float ___maxDepth, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Collider2D[] UnityEngine.Physics2D::OverlapCircleAll(UnityEngine.Vector2,System.Single,System.Int32)
extern "C" Collider2DU5BU5D_t5_298* Physics2D_OverlapCircleAll_m5_1033 (Object_t * __this /* static, unused */, Vector2_t5_44  ___point, float ___radius, int32_t ___layerMask, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Collider2D[] UnityEngine.Physics2D::INTERNAL_CALL_OverlapCircleAll(UnityEngine.Vector2&,System.Single,System.Int32,System.Single,System.Single)
extern "C" Collider2DU5BU5D_t5_298* Physics2D_INTERNAL_CALL_OverlapCircleAll_m5_1034 (Object_t * __this /* static, unused */, Vector2_t5_44 * ___point, float ___radius, int32_t ___layerMask, float ___minDepth, float ___maxDepth, const MethodInfo* method) IL2CPP_METHOD_ATTR;

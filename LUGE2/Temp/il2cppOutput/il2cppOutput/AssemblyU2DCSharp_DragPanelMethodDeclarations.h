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

// DragPanel
struct DragPanel_t7_24;
// UnityEngine.EventSystems.PointerEventData
struct PointerEventData_t6_37;

#include "codegen/il2cpp-codegen.h"

// System.Void DragPanel::.ctor()
extern "C" void DragPanel__ctor_m7_82 (DragPanel_t7_24 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DragPanel::Awake()
extern "C" void DragPanel_Awake_m7_83 (DragPanel_t7_24 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DragPanel::OnPointerDown(UnityEngine.EventSystems.PointerEventData)
extern "C" void DragPanel_OnPointerDown_m7_84 (DragPanel_t7_24 * __this, PointerEventData_t6_37 * ___data, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DragPanel::OnDrag(UnityEngine.EventSystems.PointerEventData)
extern "C" void DragPanel_OnDrag_m7_85 (DragPanel_t7_24 * __this, PointerEventData_t6_37 * ___data, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DragPanel::ClampToWindow()
extern "C" void DragPanel_ClampToWindow_m7_86 (DragPanel_t7_24 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;

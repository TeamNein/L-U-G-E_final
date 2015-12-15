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

// PanelManager
struct PanelManager_t7_34;
// UnityEngine.Animator
struct Animator_t5_156;
// UnityEngine.GameObject
struct GameObject_t5_101;
// System.Collections.IEnumerator
struct IEnumerator_t1_129;

#include "codegen/il2cpp-codegen.h"

// System.Void PanelManager::.ctor()
extern "C" void PanelManager__ctor_m7_120 (PanelManager_t7_34 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PanelManager::OnEnable()
extern "C" void PanelManager_OnEnable_m7_121 (PanelManager_t7_34 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PanelManager::OpenPanel(UnityEngine.Animator)
extern "C" void PanelManager_OpenPanel_m7_122 (PanelManager_t7_34 * __this, Animator_t5_156 * ___anim, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject PanelManager::FindFirstEnabledSelectable(UnityEngine.GameObject)
extern "C" GameObject_t5_101 * PanelManager_FindFirstEnabledSelectable_m7_123 (Object_t * __this /* static, unused */, GameObject_t5_101 * ___gameObject, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PanelManager::CloseCurrent()
extern "C" void PanelManager_CloseCurrent_m7_124 (PanelManager_t7_34 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator PanelManager::DisablePanelDeleyed(UnityEngine.Animator)
extern "C" Object_t * PanelManager_DisablePanelDeleyed_m7_125 (PanelManager_t7_34 * __this, Animator_t5_156 * ___anim, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PanelManager::SetSelected(UnityEngine.GameObject)
extern "C" void PanelManager_SetSelected_m7_126 (PanelManager_t7_34 * __this, GameObject_t5_101 * ___go, const MethodInfo* method) IL2CPP_METHOD_ATTR;

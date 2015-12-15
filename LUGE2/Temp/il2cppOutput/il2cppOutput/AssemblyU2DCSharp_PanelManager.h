#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.String
struct String_t;
// UnityEngine.Animator
struct Animator_t5_156;
// UnityEngine.GameObject
struct GameObject_t5_101;

#include "UnityEngine_UnityEngine_MonoBehaviour.h"

// PanelManager
struct  PanelManager_t7_34  : public MonoBehaviour_t5_93
{
	// UnityEngine.Animator PanelManager::initiallyOpen
	Animator_t5_156 * ___initiallyOpen_4;
	// System.Int32 PanelManager::m_OpenParameterId
	int32_t ___m_OpenParameterId_5;
	// UnityEngine.Animator PanelManager::m_Open
	Animator_t5_156 * ___m_Open_6;
	// UnityEngine.GameObject PanelManager::m_PreviouslySelected
	GameObject_t5_101 * ___m_PreviouslySelected_7;
};

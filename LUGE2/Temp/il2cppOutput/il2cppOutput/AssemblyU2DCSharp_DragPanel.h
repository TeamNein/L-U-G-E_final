#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.RectTransform
struct RectTransform_t5_70;

#include "UnityEngine_UnityEngine_MonoBehaviour.h"
#include "UnityEngine_UnityEngine_Vector2.h"
#include "UnityEngine_UnityEngine_Vector3.h"

// DragPanel
struct  DragPanel_t7_23  : public MonoBehaviour_t5_92
{
	// UnityEngine.Vector2 DragPanel::originalLocalPointerPosition
	Vector2_t5_44  ___originalLocalPointerPosition_2;
	// UnityEngine.Vector3 DragPanel::originalPanelLocalPosition
	Vector3_t5_45  ___originalPanelLocalPosition_3;
	// UnityEngine.RectTransform DragPanel::panelRectTransform
	RectTransform_t5_70 * ___panelRectTransform_4;
	// UnityEngine.RectTransform DragPanel::parentRectTransform
	RectTransform_t5_70 * ___parentRectTransform_5;
};

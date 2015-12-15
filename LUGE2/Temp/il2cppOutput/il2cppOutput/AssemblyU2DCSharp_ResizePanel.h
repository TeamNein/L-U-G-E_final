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

// ResizePanel
struct  ResizePanel_t7_41  : public MonoBehaviour_t5_92
{
	// UnityEngine.Vector2 ResizePanel::minSize
	Vector2_t5_44  ___minSize_2;
	// UnityEngine.Vector2 ResizePanel::maxSize
	Vector2_t5_44  ___maxSize_3;
	// UnityEngine.RectTransform ResizePanel::panelRectTransform
	RectTransform_t5_70 * ___panelRectTransform_4;
	// UnityEngine.Vector2 ResizePanel::originalLocalPointerPosition
	Vector2_t5_44  ___originalLocalPointerPosition_5;
	// UnityEngine.Vector2 ResizePanel::originalSizeDelta
	Vector2_t5_44  ___originalSizeDelta_6;
};

#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Transform
struct Transform_t5_71;

#include "UnityEngine_UnityEngine_MonoBehaviour.h"
#include "UnityEngine_UnityEngine_Vector2.h"
#include "UnityEngine_UnityEngine_Quaternion.h"

// TiltWindow
struct  TiltWindow_t7_49  : public MonoBehaviour_t5_93
{
	// UnityEngine.Vector2 TiltWindow::range
	Vector2_t5_44  ___range_2;
	// UnityEngine.Transform TiltWindow::mTrans
	Transform_t5_71 * ___mTrans_3;
	// UnityEngine.Quaternion TiltWindow::mStart
	Quaternion_t5_47  ___mStart_4;
	// UnityEngine.Vector2 TiltWindow::mRot
	Vector2_t5_44  ___mRot_5;
};

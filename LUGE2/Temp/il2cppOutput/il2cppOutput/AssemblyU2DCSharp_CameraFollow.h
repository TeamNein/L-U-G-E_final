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

// CameraFollow
struct  CameraFollow_t7_19  : public MonoBehaviour_t5_93
{
	// System.Single CameraFollow::xMargin
	float ___xMargin_2;
	// System.Single CameraFollow::yMargin
	float ___yMargin_3;
	// System.Single CameraFollow::xSmooth
	float ___xSmooth_4;
	// System.Single CameraFollow::ySmooth
	float ___ySmooth_5;
	// UnityEngine.Vector2 CameraFollow::maxXAndY
	Vector2_t5_44  ___maxXAndY_6;
	// UnityEngine.Vector2 CameraFollow::minXAndY
	Vector2_t5_44  ___minXAndY_7;
	// UnityEngine.Transform CameraFollow::player
	Transform_t5_71 * ___player_8;
};

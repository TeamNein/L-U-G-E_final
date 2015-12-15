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

// BoardCharacter
struct  BoardCharacter_t7_1  : public MonoBehaviour_t5_92
{
	// UnityEngine.Transform BoardCharacter::RightBound
	Transform_t5_71 * ___RightBound_2;
	// UnityEngine.Transform BoardCharacter::LeftBound
	Transform_t5_71 * ___LeftBound_3;
	// System.Single BoardCharacter::MAX_ROTATION
	float ___MAX_ROTATION_4;
	// System.Single BoardCharacter::speed
	float ___speed_5;
	// System.Single BoardCharacter::turnSpeed
	float ___turnSpeed_6;
	// System.Single BoardCharacter::cameraOffset
	float ___cameraOffset_7;
	// System.Single BoardCharacter::rightBound
	float ___rightBound_8;
	// System.Single BoardCharacter::leftBound
	float ___leftBound_9;
	// UnityEngine.Transform BoardCharacter::mainCamera
	Transform_t5_71 * ___mainCamera_10;
};

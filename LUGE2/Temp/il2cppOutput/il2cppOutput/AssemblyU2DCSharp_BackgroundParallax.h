#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Transform[]
struct TransformU5BU5D_t5_323;
// UnityEngine.Transform
struct Transform_t5_71;

#include "UnityEngine_UnityEngine_MonoBehaviour.h"
#include "UnityEngine_UnityEngine_Vector3.h"

// BackgroundParallax
struct  BackgroundParallax_t7_10  : public MonoBehaviour_t5_92
{
	// UnityEngine.Transform[] BackgroundParallax::backgrounds
	TransformU5BU5D_t5_323* ___backgrounds_2;
	// System.Single BackgroundParallax::parallaxScale
	float ___parallaxScale_3;
	// System.Single BackgroundParallax::parallaxReductionFactor
	float ___parallaxReductionFactor_4;
	// System.Single BackgroundParallax::smoothing
	float ___smoothing_5;
	// UnityEngine.Transform BackgroundParallax::cam
	Transform_t5_71 * ___cam_6;
	// UnityEngine.Vector3 BackgroundParallax::previousCamPos
	Vector3_t5_45  ___previousCamPos_7;
};

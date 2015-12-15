#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.AudioClip[]
struct AudioClipU5BU5D_t5_325;
// UnityEngine.Transform
struct Transform_t5_71;
// UnityEngine.Animator
struct Animator_t5_155;

#include "UnityEngine_UnityEngine_MonoBehaviour.h"

// PlayerControl
struct  PlayerControl_t7_29  : public MonoBehaviour_t5_92
{
	// System.Boolean PlayerControl::facingRight
	bool ___facingRight_2;
	// System.Boolean PlayerControl::jump
	bool ___jump_3;
	// System.Single PlayerControl::moveForce
	float ___moveForce_4;
	// System.Single PlayerControl::maxSpeed
	float ___maxSpeed_5;
	// UnityEngine.AudioClip[] PlayerControl::jumpClips
	AudioClipU5BU5D_t5_325* ___jumpClips_6;
	// System.Single PlayerControl::jumpForce
	float ___jumpForce_7;
	// UnityEngine.AudioClip[] PlayerControl::taunts
	AudioClipU5BU5D_t5_325* ___taunts_8;
	// System.Single PlayerControl::tauntProbability
	float ___tauntProbability_9;
	// System.Single PlayerControl::tauntDelay
	float ___tauntDelay_10;
	// System.Int32 PlayerControl::tauntIndex
	int32_t ___tauntIndex_11;
	// UnityEngine.Transform PlayerControl::groundCheck
	Transform_t5_71 * ___groundCheck_12;
	// System.Boolean PlayerControl::grounded
	bool ___grounded_13;
	// UnityEngine.Animator PlayerControl::anim
	Animator_t5_155 * ___anim_14;
};

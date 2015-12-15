#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.AudioClip[]
struct AudioClipU5BU5D_t5_326;
// UnityEngine.SpriteRenderer
struct SpriteRenderer_t5_80;
// PlayerControl
struct PlayerControl_t7_30;
// UnityEngine.Animator
struct Animator_t5_156;

#include "UnityEngine_UnityEngine_MonoBehaviour.h"
#include "UnityEngine_UnityEngine_Vector3.h"

// PlayerHealth
struct  PlayerHealth_t7_38  : public MonoBehaviour_t5_93
{
	// System.Single PlayerHealth::health
	float ___health_2;
	// System.Single PlayerHealth::repeatDamagePeriod
	float ___repeatDamagePeriod_3;
	// UnityEngine.AudioClip[] PlayerHealth::ouchClips
	AudioClipU5BU5D_t5_326* ___ouchClips_4;
	// System.Single PlayerHealth::hurtForce
	float ___hurtForce_5;
	// System.Single PlayerHealth::damageAmount
	float ___damageAmount_6;
	// UnityEngine.SpriteRenderer PlayerHealth::healthBar
	SpriteRenderer_t5_80 * ___healthBar_7;
	// System.Single PlayerHealth::lastHitTime
	float ___lastHitTime_8;
	// UnityEngine.Vector3 PlayerHealth::healthScale
	Vector3_t5_45  ___healthScale_9;
	// PlayerControl PlayerHealth::playerControl
	PlayerControl_t7_30 * ___playerControl_10;
	// UnityEngine.Animator PlayerHealth::anim
	Animator_t5_156 * ___anim_11;
};

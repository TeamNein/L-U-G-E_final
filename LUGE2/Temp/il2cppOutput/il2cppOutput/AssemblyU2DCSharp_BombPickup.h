#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.AudioClip
struct AudioClip_t5_146;
// UnityEngine.Animator
struct Animator_t5_155;

#include "UnityEngine_UnityEngine_MonoBehaviour.h"

// BombPickup
struct  BombPickup_t7_17  : public MonoBehaviour_t5_92
{
	// UnityEngine.AudioClip BombPickup::pickupClip
	AudioClip_t5_146 * ___pickupClip_2;
	// UnityEngine.Animator BombPickup::anim
	Animator_t5_155 * ___anim_3;
	// System.Boolean BombPickup::landed
	bool ___landed_4;
};

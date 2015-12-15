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
// PickupSpawner
struct PickupSpawner_t7_16;
// UnityEngine.Animator
struct Animator_t5_155;

#include "UnityEngine_UnityEngine_MonoBehaviour.h"

// HealthPickup
struct  HealthPickup_t7_30  : public MonoBehaviour_t5_92
{
	// System.Single HealthPickup::healthBonus
	float ___healthBonus_2;
	// UnityEngine.AudioClip HealthPickup::collect
	AudioClip_t5_146 * ___collect_3;
	// PickupSpawner HealthPickup::pickupSpawner
	PickupSpawner_t7_16 * ___pickupSpawner_4;
	// UnityEngine.Animator HealthPickup::anim
	Animator_t5_155 * ___anim_5;
	// System.Boolean HealthPickup::landed
	bool ___landed_6;
};

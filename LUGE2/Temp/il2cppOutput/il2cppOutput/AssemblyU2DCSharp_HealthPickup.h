#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.AudioClip
struct AudioClip_t5_147;
// PickupSpawner
struct PickupSpawner_t7_17;
// UnityEngine.Animator
struct Animator_t5_156;

#include "UnityEngine_UnityEngine_MonoBehaviour.h"

// HealthPickup
struct  HealthPickup_t7_31  : public MonoBehaviour_t5_93
{
	// System.Single HealthPickup::healthBonus
	float ___healthBonus_2;
	// UnityEngine.AudioClip HealthPickup::collect
	AudioClip_t5_147 * ___collect_3;
	// PickupSpawner HealthPickup::pickupSpawner
	PickupSpawner_t7_17 * ___pickupSpawner_4;
	// UnityEngine.Animator HealthPickup::anim
	Animator_t5_156 * ___anim_5;
	// System.Boolean HealthPickup::landed
	bool ___landed_6;
};

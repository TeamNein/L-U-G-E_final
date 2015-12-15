#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.GameObject[]
struct GameObjectU5BU5D_t5_327;
// PlayerHealth
struct PlayerHealth_t7_38;

#include "UnityEngine_UnityEngine_MonoBehaviour.h"

// PickupSpawner
struct  PickupSpawner_t7_17  : public MonoBehaviour_t5_93
{
	// UnityEngine.GameObject[] PickupSpawner::pickups
	GameObjectU5BU5D_t5_327* ___pickups_2;
	// System.Single PickupSpawner::pickupDeliveryTime
	float ___pickupDeliveryTime_3;
	// System.Single PickupSpawner::dropRangeLeft
	float ___dropRangeLeft_4;
	// System.Single PickupSpawner::dropRangeRight
	float ___dropRangeRight_5;
	// System.Single PickupSpawner::highHealthThreshold
	float ___highHealthThreshold_6;
	// System.Single PickupSpawner::lowHealthThreshold
	float ___lowHealthThreshold_7;
	// PlayerHealth PickupSpawner::playerHealth
	PlayerHealth_t7_38 * ___playerHealth_8;
};

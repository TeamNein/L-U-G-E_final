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
// UnityEngine.GameObject
struct GameObject_t5_101;
// LayBombs
struct LayBombs_t7_16;
// PickupSpawner
struct PickupSpawner_t7_17;
// UnityEngine.ParticleSystem
struct ParticleSystem_t5_123;

#include "UnityEngine_UnityEngine_MonoBehaviour.h"

// Bomb
struct  Bomb_t7_15  : public MonoBehaviour_t5_93
{
	// System.Single Bomb::bombRadius
	float ___bombRadius_2;
	// System.Single Bomb::bombForce
	float ___bombForce_3;
	// UnityEngine.AudioClip Bomb::boom
	AudioClip_t5_147 * ___boom_4;
	// UnityEngine.AudioClip Bomb::fuse
	AudioClip_t5_147 * ___fuse_5;
	// System.Single Bomb::fuseTime
	float ___fuseTime_6;
	// UnityEngine.GameObject Bomb::explosion
	GameObject_t5_101 * ___explosion_7;
	// LayBombs Bomb::layBombs
	LayBombs_t7_16 * ___layBombs_8;
	// PickupSpawner Bomb::pickupSpawner
	PickupSpawner_t7_17 * ___pickupSpawner_9;
	// UnityEngine.ParticleSystem Bomb::explosionFX
	ParticleSystem_t5_123 * ___explosionFX_10;
};

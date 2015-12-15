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
// UnityEngine.GUITexture
struct GUITexture_t5_31;

#include "UnityEngine_UnityEngine_MonoBehaviour.h"

// LayBombs
struct  LayBombs_t7_16  : public MonoBehaviour_t5_93
{
	// System.Boolean LayBombs::bombLaid
	bool ___bombLaid_2;
	// System.Int32 LayBombs::bombCount
	int32_t ___bombCount_3;
	// UnityEngine.AudioClip LayBombs::bombsAway
	AudioClip_t5_147 * ___bombsAway_4;
	// UnityEngine.GameObject LayBombs::bomb
	GameObject_t5_101 * ___bomb_5;
	// UnityEngine.GUITexture LayBombs::bombHUD
	GUITexture_t5_31 * ___bombHUD_6;
};

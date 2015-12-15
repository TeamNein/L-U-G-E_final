#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Rigidbody2D
struct Rigidbody2D_t5_139;
// PlayerControl
struct PlayerControl_t7_30;
// UnityEngine.Animator
struct Animator_t5_156;

#include "UnityEngine_UnityEngine_MonoBehaviour.h"

// Gun
struct  Gun_t7_29  : public MonoBehaviour_t5_93
{
	// UnityEngine.Rigidbody2D Gun::rocket
	Rigidbody2D_t5_139 * ___rocket_2;
	// System.Single Gun::speed
	float ___speed_3;
	// PlayerControl Gun::playerCtrl
	PlayerControl_t7_30 * ___playerCtrl_4;
	// UnityEngine.Animator Gun::anim
	Animator_t5_156 * ___anim_5;
};

#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Sprite
struct Sprite_t5_79;
// UnityEngine.AudioClip[]
struct AudioClipU5BU5D_t5_326;
// UnityEngine.GameObject
struct GameObject_t5_101;
// UnityEngine.SpriteRenderer
struct SpriteRenderer_t5_80;
// UnityEngine.Transform
struct Transform_t5_71;
// Score
struct Score_t7_27;

#include "UnityEngine_UnityEngine_MonoBehaviour.h"

// Enemy
struct  Enemy_t7_26  : public MonoBehaviour_t5_93
{
	// System.Single Enemy::moveSpeed
	float ___moveSpeed_2;
	// System.Int32 Enemy::HP
	int32_t ___HP_3;
	// UnityEngine.Sprite Enemy::deadEnemy
	Sprite_t5_79 * ___deadEnemy_4;
	// UnityEngine.Sprite Enemy::damagedEnemy
	Sprite_t5_79 * ___damagedEnemy_5;
	// UnityEngine.AudioClip[] Enemy::deathClips
	AudioClipU5BU5D_t5_326* ___deathClips_6;
	// UnityEngine.GameObject Enemy::hundredPointsUI
	GameObject_t5_101 * ___hundredPointsUI_7;
	// System.Single Enemy::deathSpinMin
	float ___deathSpinMin_8;
	// System.Single Enemy::deathSpinMax
	float ___deathSpinMax_9;
	// UnityEngine.SpriteRenderer Enemy::ren
	SpriteRenderer_t5_80 * ___ren_10;
	// UnityEngine.Transform Enemy::frontCheck
	Transform_t5_71 * ___frontCheck_11;
	// System.Boolean Enemy::dead
	bool ___dead_12;
	// Score Enemy::score
	Score_t7_27 * ___score_13;
};

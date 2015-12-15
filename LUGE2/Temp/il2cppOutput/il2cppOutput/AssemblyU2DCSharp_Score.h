#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// PlayerControl
struct PlayerControl_t7_29;

#include "UnityEngine_UnityEngine_MonoBehaviour.h"

// Score
struct  Score_t7_26  : public MonoBehaviour_t5_92
{
	// System.Int32 Score::score
	int32_t ___score_2;
	// PlayerControl Score::playerControl
	PlayerControl_t7_29 * ___playerControl_3;
	// System.Int32 Score::previousScore
	int32_t ___previousScore_4;
};

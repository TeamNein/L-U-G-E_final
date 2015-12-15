#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.String[]
struct StringU5BU5D_t1_198;
// System.String
struct String_t;
// UnityEngine.UI.Text
struct Text_t6_64;
// UnityEngine.GameObject
struct GameObject_t5_101;
// UnityEngine.AudioSource
struct AudioSource_t5_148;
// UnityEngine.AudioClip
struct AudioClip_t5_147;

#include "UnityEngine_UnityEngine_MonoBehaviour.h"

// WordManager
struct  WordManager_t7_51  : public MonoBehaviour_t5_93
{
	// System.String[] WordManager::matchingWords
	StringU5BU5D_t1_198* ___matchingWords_2;
	// System.String WordManager::wordFinal
	String_t* ___wordFinal_3;
	// System.Int32 WordManager::nextLetterIndex
	int32_t ___nextLetterIndex_4;
	// System.Int32 WordManager::lifeCount
	int32_t ___lifeCount_5;
	// System.Boolean WordManager::isDead
	bool ___isDead_6;
	// System.Int32 WordManager::wordLength
	int32_t ___wordLength_7;
	// System.Int32 WordManager::lettersGotten
	int32_t ___lettersGotten_8;
	// System.Int32 WordManager::wordCount
	int32_t ___wordCount_9;
	// System.String WordManager::wordCurrent
	String_t* ___wordCurrent_10;
	// UnityEngine.UI.Text WordManager::wordCurrentText
	Text_t6_64 * ___wordCurrentText_11;
	// UnityEngine.UI.Text WordManager::countText
	Text_t6_64 * ___countText_12;
	// UnityEngine.UI.Text WordManager::score
	Text_t6_64 * ___score_13;
	// UnityEngine.UI.Text WordManager::endScore
	Text_t6_64 * ___endScore_14;
	// UnityEngine.UI.Text WordManager::finalWord
	Text_t6_64 * ___finalWord_15;
	// UnityEngine.GameObject WordManager::EndScreen
	GameObject_t5_101 * ___EndScreen_16;
	// UnityEngine.AudioSource WordManager::audio
	AudioSource_t5_148 * ___audio_17;
	// UnityEngine.AudioClip WordManager::pickup
	AudioClip_t5_147 * ___pickup_18;
	// UnityEngine.AudioClip WordManager::wrongLetter
	AudioClip_t5_147 * ___wrongLetter_19;
	// UnityEngine.AudioClip WordManager::obstacleSound
	AudioClip_t5_147 * ___obstacleSound_20;
};

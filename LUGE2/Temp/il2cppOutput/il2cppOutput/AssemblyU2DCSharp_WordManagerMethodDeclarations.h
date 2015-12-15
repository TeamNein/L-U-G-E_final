#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>

// WordManager
struct WordManager_t7_51;
// UnityEngine.Collider
struct Collider_t5_127;
// System.String
struct String_t;
// UnityEngine.GameObject
struct GameObject_t5_101;

#include "codegen/il2cpp-codegen.h"

// System.Void WordManager::.ctor()
extern "C" void WordManager__ctor_m7_201 (WordManager_t7_51 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WordManager::Start()
extern "C" void WordManager_Start_m7_202 (WordManager_t7_51 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WordManager::nextLevel()
extern "C" void WordManager_nextLevel_m7_203 (WordManager_t7_51 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Char WordManager::getNextLetter()
extern "C" uint16_t WordManager_getNextLetter_m7_204 (WordManager_t7_51 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WordManager::SetCountText()
extern "C" void WordManager_SetCountText_m7_205 (WordManager_t7_51 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WordManager::SetScoreText()
extern "C" void WordManager_SetScoreText_m7_206 (WordManager_t7_51 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WordManager::SetWordText()
extern "C" void WordManager_SetWordText_m7_207 (WordManager_t7_51 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WordManager::OnTriggerEnter(UnityEngine.Collider)
extern "C" void WordManager_OnTriggerEnter_m7_208 (WordManager_t7_51 * __this, Collider_t5_127 * ___other, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WordManager::OnDeath()
extern "C" void WordManager_OnDeath_m7_209 (WordManager_t7_51 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String WordManager::getNewLetters(System.Int32)
extern "C" String_t* WordManager_getNewLetters_m7_210 (WordManager_t7_51 * __this, int32_t ___numLetters, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WordManager::LetterHandler(System.String,UnityEngine.GameObject)
extern "C" void WordManager_LetterHandler_m7_211 (WordManager_t7_51 * __this, String_t* ___name, GameObject_t5_101 * ___go, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WordManager::setPossibleWords(System.Int32)
extern "C" void WordManager_setPossibleWords_m7_212 (WordManager_t7_51 * __this, int32_t ___wordCount, const MethodInfo* method) IL2CPP_METHOD_ATTR;

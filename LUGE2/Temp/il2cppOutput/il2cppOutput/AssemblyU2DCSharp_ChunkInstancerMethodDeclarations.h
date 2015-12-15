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

// ChunkInstancer
struct ChunkInstancer_t7_2;
// UnityEngine.Collider
struct Collider_t5_127;
// UnityEngine.Transform[]
struct TransformU5BU5D_t5_324;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"

// System.Void ChunkInstancer::.ctor()
extern "C" void ChunkInstancer__ctor_m7_3 (ChunkInstancer_t7_2 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ChunkInstancer::OnTriggerEnter(UnityEngine.Collider)
extern "C" void ChunkInstancer_OnTriggerEnter_m7_4 (ChunkInstancer_t7_2 * __this, Collider_t5_127 * ___other, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ChunkInstancer::instanceNewChunk()
extern "C" void ChunkInstancer_instanceNewChunk_m7_5 (ChunkInstancer_t7_2 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Transform[] ChunkInstancer::getObjectsFromLetters(System.String,UnityEngine.Transform[])
extern "C" TransformU5BU5D_t5_324* ChunkInstancer_getObjectsFromLetters_m7_6 (ChunkInstancer_t7_2 * __this, String_t* ___newLetters, TransformU5BU5D_t5_324* ___oldLetters, const MethodInfo* method) IL2CPP_METHOD_ATTR;

#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Transform
struct Transform_t5_71;
// UnityEngine.Transform[]
struct TransformU5BU5D_t5_324;
// UnityEngine.Material[]
struct MaterialU5BU5D_t5_325;

#include "UnityEngine_UnityEngine_MonoBehaviour.h"

// ChunkInstancer
struct  ChunkInstancer_t7_2  : public MonoBehaviour_t5_93
{
	// UnityEngine.Transform ChunkInstancer::chunkPrefab
	Transform_t5_71 * ___chunkPrefab_5;
	// UnityEngine.Transform ChunkInstancer::previousChunk
	Transform_t5_71 * ___previousChunk_6;
	// System.Int32 ChunkInstancer::previousPos
	int32_t ___previousPos_7;
	// UnityEngine.Transform[] ChunkInstancer::letterPrefabs
	TransformU5BU5D_t5_324* ___letterPrefabs_8;
	// UnityEngine.Material[] ChunkInstancer::letterMats
	MaterialU5BU5D_t5_325* ___letterMats_9;
	// UnityEngine.Material[] ChunkInstancer::particleMats
	MaterialU5BU5D_t5_325* ___particleMats_10;
	// System.Int32 ChunkInstancer::CHAR_OFFSET
	int32_t ___CHAR_OFFSET_11;
	// System.Int32 ChunkInstancer::chunkCounter
	int32_t ___chunkCounter_12;
};

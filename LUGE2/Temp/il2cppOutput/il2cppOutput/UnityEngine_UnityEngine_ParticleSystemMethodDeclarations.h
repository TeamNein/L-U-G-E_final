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

// UnityEngine.ParticleSystem
struct ParticleSystem_t5_123;
// UnityEngine.ParticleSystem/IteratorDelegate
struct IteratorDelegate_t5_122;
// UnityEngine.Transform
struct Transform_t5_71;

#include "codegen/il2cpp-codegen.h"

// System.Boolean UnityEngine.ParticleSystem::Internal_Play(UnityEngine.ParticleSystem)
extern "C" bool ParticleSystem_Internal_Play_m5_975 (Object_t * __this /* static, unused */, ParticleSystem_t5_123 * ___self, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.ParticleSystem::Play()
extern "C" void ParticleSystem_Play_m5_976 (ParticleSystem_t5_123 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.ParticleSystem::Play(System.Boolean)
extern "C" void ParticleSystem_Play_m5_977 (ParticleSystem_t5_123 * __this, bool ___withChildren, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.ParticleSystem::IterateParticleSystems(System.Boolean,UnityEngine.ParticleSystem/IteratorDelegate)
extern "C" bool ParticleSystem_IterateParticleSystems_m5_978 (ParticleSystem_t5_123 * __this, bool ___recurse, IteratorDelegate_t5_122 * ___func, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.ParticleSystem::IterateParticleSystemsRecursive(UnityEngine.Transform,UnityEngine.ParticleSystem/IteratorDelegate)
extern "C" bool ParticleSystem_IterateParticleSystemsRecursive_m5_979 (Object_t * __this /* static, unused */, Transform_t5_71 * ___transform, IteratorDelegate_t5_122 * ___func, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.ParticleSystem::<Play>m__1(UnityEngine.ParticleSystem)
extern "C" bool ParticleSystem_U3CPlayU3Em__1_m5_980 (Object_t * __this /* static, unused */, ParticleSystem_t5_123 * ___ps, const MethodInfo* method) IL2CPP_METHOD_ATTR;

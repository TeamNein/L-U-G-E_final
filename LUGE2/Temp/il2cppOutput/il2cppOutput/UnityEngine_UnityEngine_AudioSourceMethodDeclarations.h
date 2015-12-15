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

// UnityEngine.AudioSource
struct AudioSource_t5_147;
// UnityEngine.AudioClip
struct AudioClip_t5_146;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Vector3.h"

// System.Void UnityEngine.AudioSource::set_volume(System.Single)
extern "C" void AudioSource_set_volume_m5_1074 (AudioSource_t5_147 * __this, float ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AudioSource::set_clip(UnityEngine.AudioClip)
extern "C" void AudioSource_set_clip_m5_1075 (AudioSource_t5_147 * __this, AudioClip_t5_146 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AudioSource::Play(System.UInt64)
extern "C" void AudioSource_Play_m5_1076 (AudioSource_t5_147 * __this, uint64_t ___delay, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AudioSource::Play()
extern "C" void AudioSource_Play_m5_1077 (AudioSource_t5_147 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.AudioSource::get_isPlaying()
extern "C" bool AudioSource_get_isPlaying_m5_1078 (AudioSource_t5_147 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AudioSource::PlayOneShot(UnityEngine.AudioClip,System.Single)
extern "C" void AudioSource_PlayOneShot_m5_1079 (AudioSource_t5_147 * __this, AudioClip_t5_146 * ___clip, float ___volumeScale, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AudioSource::PlayOneShot(UnityEngine.AudioClip)
extern "C" void AudioSource_PlayOneShot_m5_1080 (AudioSource_t5_147 * __this, AudioClip_t5_146 * ___clip, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AudioSource::PlayClipAtPoint(UnityEngine.AudioClip,UnityEngine.Vector3)
extern "C" void AudioSource_PlayClipAtPoint_m5_1081 (Object_t * __this /* static, unused */, AudioClip_t5_146 * ___clip, Vector3_t5_45  ___position, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AudioSource::PlayClipAtPoint(UnityEngine.AudioClip,UnityEngine.Vector3,System.Single)
extern "C" void AudioSource_PlayClipAtPoint_m5_1082 (Object_t * __this /* static, unused */, AudioClip_t5_146 * ___clip, Vector3_t5_45  ___position, float ___volume, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AudioSource::set_spatialBlend(System.Single)
extern "C" void AudioSource_set_spatialBlend_m5_1083 (AudioSource_t5_147 * __this, float ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;

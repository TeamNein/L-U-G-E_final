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

// UnityEngine.ParticleSystem/IteratorDelegate
struct IteratorDelegate_t5_121;
// System.Object
struct Object_t;
// UnityEngine.ParticleSystem
struct ParticleSystem_t5_122;
// System.IAsyncResult
struct IAsyncResult_t1_27;
// System.AsyncCallback
struct AsyncCallback_t1_28;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr.h"

// System.Void UnityEngine.ParticleSystem/IteratorDelegate::.ctor(System.Object,System.IntPtr)
extern "C" void IteratorDelegate__ctor_m5_968 (IteratorDelegate_t5_121 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.ParticleSystem/IteratorDelegate::Invoke(UnityEngine.ParticleSystem)
extern "C" bool IteratorDelegate_Invoke_m5_969 (IteratorDelegate_t5_121 * __this, ParticleSystem_t5_122 * ___ps, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" bool pinvoke_delegate_wrapper_IteratorDelegate_t5_121(Il2CppObject* delegate, ParticleSystem_t5_122 * ___ps);
// System.IAsyncResult UnityEngine.ParticleSystem/IteratorDelegate::BeginInvoke(UnityEngine.ParticleSystem,System.AsyncCallback,System.Object)
extern "C" Object_t * IteratorDelegate_BeginInvoke_m5_970 (IteratorDelegate_t5_121 * __this, ParticleSystem_t5_122 * ___ps, AsyncCallback_t1_28 * ___callback, Object_t * ___object, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.ParticleSystem/IteratorDelegate::EndInvoke(System.IAsyncResult)
extern "C" bool IteratorDelegate_EndInvoke_m5_971 (IteratorDelegate_t5_121 * __this, Object_t * ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;

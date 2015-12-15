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

// UnityEngine.Events.UnityEvent`1<System.Boolean>
struct UnityEvent_1_t5_315;
// UnityEngine.Events.UnityAction`1<System.Boolean>
struct UnityAction_1_t5_321;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.String
struct String_t;
// System.Object
struct Object_t;
// UnityEngine.Events.BaseInvokableCall
struct BaseInvokableCall_t5_263;

#include "codegen/il2cpp-codegen.h"

// System.Void UnityEngine.Events.UnityEvent`1<System.Boolean>::.ctor()
extern "C" void UnityEvent_1__ctor_m5_1846_gshared (UnityEvent_1_t5_315 * __this, const MethodInfo* method);
#define UnityEvent_1__ctor_m5_1846(__this, method) (( void (*) (UnityEvent_1_t5_315 *, const MethodInfo*))UnityEvent_1__ctor_m5_1846_gshared)(__this, method)
// System.Void UnityEngine.Events.UnityEvent`1<System.Boolean>::AddListener(UnityEngine.Events.UnityAction`1<T0>)
extern "C" void UnityEvent_1_AddListener_m5_1828_gshared (UnityEvent_1_t5_315 * __this, UnityAction_1_t5_321 * ___call, const MethodInfo* method);
#define UnityEvent_1_AddListener_m5_1828(__this, ___call, method) (( void (*) (UnityEvent_1_t5_315 *, UnityAction_1_t5_321 *, const MethodInfo*))UnityEvent_1_AddListener_m5_1828_gshared)(__this, ___call, method)
// System.Void UnityEngine.Events.UnityEvent`1<System.Boolean>::RemoveListener(UnityEngine.Events.UnityAction`1<T0>)
extern "C" void UnityEvent_1_RemoveListener_m5_2028_gshared (UnityEvent_1_t5_315 * __this, UnityAction_1_t5_321 * ___call, const MethodInfo* method);
#define UnityEvent_1_RemoveListener_m5_2028(__this, ___call, method) (( void (*) (UnityEvent_1_t5_315 *, UnityAction_1_t5_321 *, const MethodInfo*))UnityEvent_1_RemoveListener_m5_2028_gshared)(__this, ___call, method)
// System.Reflection.MethodInfo UnityEngine.Events.UnityEvent`1<System.Boolean>::FindMethod_Impl(System.String,System.Object)
extern "C" MethodInfo_t * UnityEvent_1_FindMethod_Impl_m5_2029_gshared (UnityEvent_1_t5_315 * __this, String_t* ___name, Object_t * ___targetObj, const MethodInfo* method);
#define UnityEvent_1_FindMethod_Impl_m5_2029(__this, ___name, ___targetObj, method) (( MethodInfo_t * (*) (UnityEvent_1_t5_315 *, String_t*, Object_t *, const MethodInfo*))UnityEvent_1_FindMethod_Impl_m5_2029_gshared)(__this, ___name, ___targetObj, method)
// UnityEngine.Events.BaseInvokableCall UnityEngine.Events.UnityEvent`1<System.Boolean>::GetDelegate(System.Object,System.Reflection.MethodInfo)
extern "C" BaseInvokableCall_t5_263 * UnityEvent_1_GetDelegate_m5_2030_gshared (UnityEvent_1_t5_315 * __this, Object_t * ___target, MethodInfo_t * ___theFunction, const MethodInfo* method);
#define UnityEvent_1_GetDelegate_m5_2030(__this, ___target, ___theFunction, method) (( BaseInvokableCall_t5_263 * (*) (UnityEvent_1_t5_315 *, Object_t *, MethodInfo_t *, const MethodInfo*))UnityEvent_1_GetDelegate_m5_2030_gshared)(__this, ___target, ___theFunction, method)
// UnityEngine.Events.BaseInvokableCall UnityEngine.Events.UnityEvent`1<System.Boolean>::GetDelegate(UnityEngine.Events.UnityAction`1<T0>)
extern "C" BaseInvokableCall_t5_263 * UnityEvent_1_GetDelegate_m5_2031_gshared (Object_t * __this /* static, unused */, UnityAction_1_t5_321 * ___action, const MethodInfo* method);
#define UnityEvent_1_GetDelegate_m5_2031(__this /* static, unused */, ___action, method) (( BaseInvokableCall_t5_263 * (*) (Object_t * /* static, unused */, UnityAction_1_t5_321 *, const MethodInfo*))UnityEvent_1_GetDelegate_m5_2031_gshared)(__this /* static, unused */, ___action, method)
// System.Void UnityEngine.Events.UnityEvent`1<System.Boolean>::Invoke(T0)
extern "C" void UnityEvent_1_Invoke_m5_1848_gshared (UnityEvent_1_t5_315 * __this, bool ___arg0, const MethodInfo* method);
#define UnityEvent_1_Invoke_m5_1848(__this, ___arg0, method) (( void (*) (UnityEvent_1_t5_315 *, bool, const MethodInfo*))UnityEvent_1_Invoke_m5_1848_gshared)(__this, ___arg0, method)

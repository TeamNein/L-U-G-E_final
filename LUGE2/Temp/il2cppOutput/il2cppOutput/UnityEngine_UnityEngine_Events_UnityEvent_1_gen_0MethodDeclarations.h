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

// UnityEngine.Events.UnityEvent`1<UnityEngine.Color>
struct UnityEvent_1_t5_311;
// UnityEngine.Events.UnityAction`1<UnityEngine.Color>
struct UnityAction_1_t5_320;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.String
struct String_t;
// System.Object
struct Object_t;
// UnityEngine.Events.BaseInvokableCall
struct BaseInvokableCall_t5_264;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Color.h"

// System.Void UnityEngine.Events.UnityEvent`1<UnityEngine.Color>::.ctor()
extern "C" void UnityEvent_1__ctor_m5_1801_gshared (UnityEvent_1_t5_311 * __this, const MethodInfo* method);
#define UnityEvent_1__ctor_m5_1801(__this, method) (( void (*) (UnityEvent_1_t5_311 *, const MethodInfo*))UnityEvent_1__ctor_m5_1801_gshared)(__this, method)
// System.Void UnityEngine.Events.UnityEvent`1<UnityEngine.Color>::AddListener(UnityEngine.Events.UnityAction`1<T0>)
extern "C" void UnityEvent_1_AddListener_m5_1803_gshared (UnityEvent_1_t5_311 * __this, UnityAction_1_t5_320 * ___call, const MethodInfo* method);
#define UnityEvent_1_AddListener_m5_1803(__this, ___call, method) (( void (*) (UnityEvent_1_t5_311 *, UnityAction_1_t5_320 *, const MethodInfo*))UnityEvent_1_AddListener_m5_1803_gshared)(__this, ___call, method)
// System.Void UnityEngine.Events.UnityEvent`1<UnityEngine.Color>::RemoveListener(UnityEngine.Events.UnityAction`1<T0>)
extern "C" void UnityEvent_1_RemoveListener_m5_2006_gshared (UnityEvent_1_t5_311 * __this, UnityAction_1_t5_320 * ___call, const MethodInfo* method);
#define UnityEvent_1_RemoveListener_m5_2006(__this, ___call, method) (( void (*) (UnityEvent_1_t5_311 *, UnityAction_1_t5_320 *, const MethodInfo*))UnityEvent_1_RemoveListener_m5_2006_gshared)(__this, ___call, method)
// System.Reflection.MethodInfo UnityEngine.Events.UnityEvent`1<UnityEngine.Color>::FindMethod_Impl(System.String,System.Object)
extern "C" MethodInfo_t * UnityEvent_1_FindMethod_Impl_m5_2007_gshared (UnityEvent_1_t5_311 * __this, String_t* ___name, Object_t * ___targetObj, const MethodInfo* method);
#define UnityEvent_1_FindMethod_Impl_m5_2007(__this, ___name, ___targetObj, method) (( MethodInfo_t * (*) (UnityEvent_1_t5_311 *, String_t*, Object_t *, const MethodInfo*))UnityEvent_1_FindMethod_Impl_m5_2007_gshared)(__this, ___name, ___targetObj, method)
// UnityEngine.Events.BaseInvokableCall UnityEngine.Events.UnityEvent`1<UnityEngine.Color>::GetDelegate(System.Object,System.Reflection.MethodInfo)
extern "C" BaseInvokableCall_t5_264 * UnityEvent_1_GetDelegate_m5_2008_gshared (UnityEvent_1_t5_311 * __this, Object_t * ___target, MethodInfo_t * ___theFunction, const MethodInfo* method);
#define UnityEvent_1_GetDelegate_m5_2008(__this, ___target, ___theFunction, method) (( BaseInvokableCall_t5_264 * (*) (UnityEvent_1_t5_311 *, Object_t *, MethodInfo_t *, const MethodInfo*))UnityEvent_1_GetDelegate_m5_2008_gshared)(__this, ___target, ___theFunction, method)
// UnityEngine.Events.BaseInvokableCall UnityEngine.Events.UnityEvent`1<UnityEngine.Color>::GetDelegate(UnityEngine.Events.UnityAction`1<T0>)
extern "C" BaseInvokableCall_t5_264 * UnityEvent_1_GetDelegate_m5_2009_gshared (Object_t * __this /* static, unused */, UnityAction_1_t5_320 * ___action, const MethodInfo* method);
#define UnityEvent_1_GetDelegate_m5_2009(__this /* static, unused */, ___action, method) (( BaseInvokableCall_t5_264 * (*) (Object_t * /* static, unused */, UnityAction_1_t5_320 *, const MethodInfo*))UnityEvent_1_GetDelegate_m5_2009_gshared)(__this /* static, unused */, ___action, method)
// System.Void UnityEngine.Events.UnityEvent`1<UnityEngine.Color>::Invoke(T0)
extern "C" void UnityEvent_1_Invoke_m5_1802_gshared (UnityEvent_1_t5_311 * __this, Color_t5_165  ___arg0, const MethodInfo* method);
#define UnityEvent_1_Invoke_m5_1802(__this, ___arg0, method) (( void (*) (UnityEvent_1_t5_311 *, Color_t5_165 , const MethodInfo*))UnityEvent_1_Invoke_m5_1802_gshared)(__this, ___arg0, method)

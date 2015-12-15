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

// System.Collections.Generic.Dictionary`2<System.Int32,System.Object>
struct Dictionary_2_t1_1262;
// System.Object
struct Object_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__5.h"
#include "mscorlib_System_Collections_DictionaryEntry.h"
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_5.h"

// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void Enumerator__ctor_m1_9112_gshared (Enumerator_t1_1268 * __this, Dictionary_2_t1_1262 * ___dictionary, const MethodInfo* method);
#define Enumerator__ctor_m1_9112(__this, ___dictionary, method) (( void (*) (Enumerator_t1_1268 *, Dictionary_2_t1_1262 *, const MethodInfo*))Enumerator__ctor_m1_9112_gshared)(__this, ___dictionary, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * Enumerator_System_Collections_IEnumerator_get_Current_m1_9113_gshared (Enumerator_t1_1268 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IEnumerator_get_Current_m1_9113(__this, method) (( Object_t * (*) (Enumerator_t1_1268 *, const MethodInfo*))Enumerator_System_Collections_IEnumerator_get_Current_m1_9113_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>::System.Collections.IEnumerator.Reset()
extern "C" void Enumerator_System_Collections_IEnumerator_Reset_m1_9114_gshared (Enumerator_t1_1268 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IEnumerator_Reset_m1_9114(__this, method) (( void (*) (Enumerator_t1_1268 *, const MethodInfo*))Enumerator_System_Collections_IEnumerator_Reset_m1_9114_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>::System.Collections.IDictionaryEnumerator.get_Entry()
extern "C" DictionaryEntry_t1_166  Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m1_9115_gshared (Enumerator_t1_1268 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m1_9115(__this, method) (( DictionaryEntry_t1_166  (*) (Enumerator_t1_1268 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m1_9115_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>::System.Collections.IDictionaryEnumerator.get_Key()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m1_9116_gshared (Enumerator_t1_1268 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m1_9116(__this, method) (( Object_t * (*) (Enumerator_t1_1268 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m1_9116_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>::System.Collections.IDictionaryEnumerator.get_Value()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m1_9117_gshared (Enumerator_t1_1268 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m1_9117(__this, method) (( Object_t * (*) (Enumerator_t1_1268 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m1_9117_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>::MoveNext()
extern "C" bool Enumerator_MoveNext_m1_9118_gshared (Enumerator_t1_1268 * __this, const MethodInfo* method);
#define Enumerator_MoveNext_m1_9118(__this, method) (( bool (*) (Enumerator_t1_1268 *, const MethodInfo*))Enumerator_MoveNext_m1_9118_gshared)(__this, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>::get_Current()
extern "C" KeyValuePair_2_t1_1264  Enumerator_get_Current_m1_9119_gshared (Enumerator_t1_1268 * __this, const MethodInfo* method);
#define Enumerator_get_Current_m1_9119(__this, method) (( KeyValuePair_2_t1_1264  (*) (Enumerator_t1_1268 *, const MethodInfo*))Enumerator_get_Current_m1_9119_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>::get_CurrentKey()
extern "C" int32_t Enumerator_get_CurrentKey_m1_9120_gshared (Enumerator_t1_1268 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentKey_m1_9120(__this, method) (( int32_t (*) (Enumerator_t1_1268 *, const MethodInfo*))Enumerator_get_CurrentKey_m1_9120_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>::get_CurrentValue()
extern "C" Object_t * Enumerator_get_CurrentValue_m1_9121_gshared (Enumerator_t1_1268 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentValue_m1_9121(__this, method) (( Object_t * (*) (Enumerator_t1_1268 *, const MethodInfo*))Enumerator_get_CurrentValue_m1_9121_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>::Reset()
extern "C" void Enumerator_Reset_m1_9122_gshared (Enumerator_t1_1268 * __this, const MethodInfo* method);
#define Enumerator_Reset_m1_9122(__this, method) (( void (*) (Enumerator_t1_1268 *, const MethodInfo*))Enumerator_Reset_m1_9122_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>::VerifyState()
extern "C" void Enumerator_VerifyState_m1_9123_gshared (Enumerator_t1_1268 * __this, const MethodInfo* method);
#define Enumerator_VerifyState_m1_9123(__this, method) (( void (*) (Enumerator_t1_1268 *, const MethodInfo*))Enumerator_VerifyState_m1_9123_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>::VerifyCurrent()
extern "C" void Enumerator_VerifyCurrent_m1_9124_gshared (Enumerator_t1_1268 * __this, const MethodInfo* method);
#define Enumerator_VerifyCurrent_m1_9124(__this, method) (( void (*) (Enumerator_t1_1268 *, const MethodInfo*))Enumerator_VerifyCurrent_m1_9124_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>::Dispose()
extern "C" void Enumerator_Dispose_m1_9125_gshared (Enumerator_t1_1268 * __this, const MethodInfo* method);
#define Enumerator_Dispose_m1_9125(__this, method) (( void (*) (Enumerator_t1_1268 *, const MethodInfo*))Enumerator_Dispose_m1_9125_gshared)(__this, method)

﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>

// System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.DateTimeOffset>
struct DefaultComparer_t1_1101;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_DateTimeOffset.h"

// System.Void System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.DateTimeOffset>::.ctor()
extern "C" void DefaultComparer__ctor_m1_6971_gshared (DefaultComparer_t1_1101 * __this, const MethodInfo* method);
#define DefaultComparer__ctor_m1_6971(__this, method) (( void (*) (DefaultComparer_t1_1101 *, const MethodInfo*))DefaultComparer__ctor_m1_6971_gshared)(__this, method)
// System.Int32 System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.DateTimeOffset>::GetHashCode(T)
extern "C" int32_t DefaultComparer_GetHashCode_m1_6972_gshared (DefaultComparer_t1_1101 * __this, DateTimeOffset_t1_697  ___obj, const MethodInfo* method);
#define DefaultComparer_GetHashCode_m1_6972(__this, ___obj, method) (( int32_t (*) (DefaultComparer_t1_1101 *, DateTimeOffset_t1_697 , const MethodInfo*))DefaultComparer_GetHashCode_m1_6972_gshared)(__this, ___obj, method)
// System.Boolean System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.DateTimeOffset>::Equals(T,T)
extern "C" bool DefaultComparer_Equals_m1_6973_gshared (DefaultComparer_t1_1101 * __this, DateTimeOffset_t1_697  ___x, DateTimeOffset_t1_697  ___y, const MethodInfo* method);
#define DefaultComparer_Equals_m1_6973(__this, ___x, ___y, method) (( bool (*) (DefaultComparer_t1_1101 *, DateTimeOffset_t1_697 , DateTimeOffset_t1_697 , const MethodInfo*))DefaultComparer_Equals_m1_6973_gshared)(__this, ___x, ___y, method)

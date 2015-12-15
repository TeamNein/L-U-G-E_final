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

// UnityEngine.iOS.LocalNotification
struct LocalNotification_t5_114;
// System.String
struct String_t;
// System.Collections.IDictionary
struct IDictionary_t1_35;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_DateTime.h"
#include "UnityEngine_UnityEngine_iOS_CalendarUnit.h"
#include "UnityEngine_UnityEngine_iOS_CalendarIdentifier.h"

// System.Void UnityEngine.iOS.LocalNotification::.ctor()
extern "C" void LocalNotification__ctor_m5_876 (LocalNotification_t5_114 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.iOS.LocalNotification::.cctor()
extern "C" void LocalNotification__cctor_m5_877 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Double UnityEngine.iOS.LocalNotification::GetFireDate()
extern "C" double LocalNotification_GetFireDate_m5_878 (LocalNotification_t5_114 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.iOS.LocalNotification::SetFireDate(System.Double)
extern "C" void LocalNotification_SetFireDate_m5_879 (LocalNotification_t5_114 * __this, double ___dt, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.DateTime UnityEngine.iOS.LocalNotification::get_fireDate()
extern "C" DateTime_t1_126  LocalNotification_get_fireDate_m5_880 (LocalNotification_t5_114 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.iOS.LocalNotification::set_fireDate(System.DateTime)
extern "C" void LocalNotification_set_fireDate_m5_881 (LocalNotification_t5_114 * __this, DateTime_t1_126  ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.iOS.LocalNotification::get_timeZone()
extern "C" String_t* LocalNotification_get_timeZone_m5_882 (LocalNotification_t5_114 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.iOS.LocalNotification::set_timeZone(System.String)
extern "C" void LocalNotification_set_timeZone_m5_883 (LocalNotification_t5_114 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.iOS.CalendarUnit UnityEngine.iOS.LocalNotification::get_repeatInterval()
extern "C" int32_t LocalNotification_get_repeatInterval_m5_884 (LocalNotification_t5_114 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.iOS.LocalNotification::set_repeatInterval(UnityEngine.iOS.CalendarUnit)
extern "C" void LocalNotification_set_repeatInterval_m5_885 (LocalNotification_t5_114 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.iOS.CalendarIdentifier UnityEngine.iOS.LocalNotification::get_repeatCalendar()
extern "C" int32_t LocalNotification_get_repeatCalendar_m5_886 (LocalNotification_t5_114 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.iOS.LocalNotification::set_repeatCalendar(UnityEngine.iOS.CalendarIdentifier)
extern "C" void LocalNotification_set_repeatCalendar_m5_887 (LocalNotification_t5_114 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.iOS.LocalNotification::get_alertBody()
extern "C" String_t* LocalNotification_get_alertBody_m5_888 (LocalNotification_t5_114 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.iOS.LocalNotification::set_alertBody(System.String)
extern "C" void LocalNotification_set_alertBody_m5_889 (LocalNotification_t5_114 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.iOS.LocalNotification::get_alertAction()
extern "C" String_t* LocalNotification_get_alertAction_m5_890 (LocalNotification_t5_114 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.iOS.LocalNotification::set_alertAction(System.String)
extern "C" void LocalNotification_set_alertAction_m5_891 (LocalNotification_t5_114 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.iOS.LocalNotification::get_hasAction()
extern "C" bool LocalNotification_get_hasAction_m5_892 (LocalNotification_t5_114 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.iOS.LocalNotification::set_hasAction(System.Boolean)
extern "C" void LocalNotification_set_hasAction_m5_893 (LocalNotification_t5_114 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.iOS.LocalNotification::get_alertLaunchImage()
extern "C" String_t* LocalNotification_get_alertLaunchImage_m5_894 (LocalNotification_t5_114 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.iOS.LocalNotification::set_alertLaunchImage(System.String)
extern "C" void LocalNotification_set_alertLaunchImage_m5_895 (LocalNotification_t5_114 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.iOS.LocalNotification::get_applicationIconBadgeNumber()
extern "C" int32_t LocalNotification_get_applicationIconBadgeNumber_m5_896 (LocalNotification_t5_114 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.iOS.LocalNotification::set_applicationIconBadgeNumber(System.Int32)
extern "C" void LocalNotification_set_applicationIconBadgeNumber_m5_897 (LocalNotification_t5_114 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.iOS.LocalNotification::get_soundName()
extern "C" String_t* LocalNotification_get_soundName_m5_898 (LocalNotification_t5_114 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.iOS.LocalNotification::set_soundName(System.String)
extern "C" void LocalNotification_set_soundName_m5_899 (LocalNotification_t5_114 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.iOS.LocalNotification::get_defaultSoundName()
extern "C" String_t* LocalNotification_get_defaultSoundName_m5_900 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IDictionary UnityEngine.iOS.LocalNotification::get_userInfo()
extern "C" Object_t * LocalNotification_get_userInfo_m5_901 (LocalNotification_t5_114 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.iOS.LocalNotification::set_userInfo(System.Collections.IDictionary)
extern "C" void LocalNotification_set_userInfo_m5_902 (LocalNotification_t5_114 * __this, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.iOS.LocalNotification::Destroy()
extern "C" void LocalNotification_Destroy_m5_903 (LocalNotification_t5_114 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.iOS.LocalNotification::Finalize()
extern "C" void LocalNotification_Finalize_m5_904 (LocalNotification_t5_114 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.iOS.LocalNotification::InitWrapper()
extern "C" void LocalNotification_InitWrapper_m5_905 (LocalNotification_t5_114 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;

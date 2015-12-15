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

// UnityEngine.GameObject
struct GameObject_t5_101;
// System.String
struct String_t;
// UnityEngine.Component
struct Component_t5_25;
// System.Type
struct Type_t;
// UnityEngine.Component[]
struct ComponentU5BU5D_t5_294;
// System.Array
struct Array_t;
// System.Object
struct Object_t;
// UnityEngine.Transform
struct Transform_t5_71;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr.h"
#include "UnityEngine_UnityEngine_SendMessageOptions.h"

// System.Void UnityEngine.GameObject::.ctor(System.String)
extern "C" void GameObject__ctor_m5_755 (GameObject_t5_101 * __this, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Component UnityEngine.GameObject::GetComponent(System.Type)
extern "C" Component_t5_25 * GameObject_GetComponent_m5_756 (GameObject_t5_101 * __this, Type_t * ___type, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GameObject::GetComponentFastPath(System.Type,System.IntPtr)
extern "C" void GameObject_GetComponentFastPath_m5_757 (GameObject_t5_101 * __this, Type_t * ___type, IntPtr_t ___oneFurtherThanResultValue, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Component UnityEngine.GameObject::GetComponentInChildren(System.Type,System.Boolean)
extern "C" Component_t5_25 * GameObject_GetComponentInChildren_m5_758 (GameObject_t5_101 * __this, Type_t * ___type, bool ___includeInactive, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Component UnityEngine.GameObject::GetComponentInParent(System.Type)
extern "C" Component_t5_25 * GameObject_GetComponentInParent_m5_759 (GameObject_t5_101 * __this, Type_t * ___type, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Component[] UnityEngine.GameObject::GetComponents(System.Type)
extern "C" ComponentU5BU5D_t5_294* GameObject_GetComponents_m5_760 (GameObject_t5_101 * __this, Type_t * ___type, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Component[] UnityEngine.GameObject::GetComponentsInChildren(System.Type,System.Boolean)
extern "C" ComponentU5BU5D_t5_294* GameObject_GetComponentsInChildren_m5_761 (GameObject_t5_101 * __this, Type_t * ___type, bool ___includeInactive, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Component[] UnityEngine.GameObject::GetComponentsInParent(System.Type,System.Boolean)
extern "C" ComponentU5BU5D_t5_294* GameObject_GetComponentsInParent_m5_762 (GameObject_t5_101 * __this, Type_t * ___type, bool ___includeInactive, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Array UnityEngine.GameObject::GetComponentsInternal(System.Type,System.Boolean,System.Boolean,System.Boolean,System.Boolean,System.Object)
extern "C" Array_t * GameObject_GetComponentsInternal_m5_763 (GameObject_t5_101 * __this, Type_t * ___type, bool ___useSearchTypeAsArrayReturnType, bool ___recursive, bool ___includeInactive, bool ___reverse, Object_t * ___resultList, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Transform UnityEngine.GameObject::get_transform()
extern "C" Transform_t5_71 * GameObject_get_transform_m5_764 (GameObject_t5_101 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.GameObject::get_layer()
extern "C" int32_t GameObject_get_layer_m5_765 (GameObject_t5_101 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GameObject::set_layer(System.Int32)
extern "C" void GameObject_set_layer_m5_766 (GameObject_t5_101 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GameObject::SetActive(System.Boolean)
extern "C" void GameObject_SetActive_m5_767 (GameObject_t5_101 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.GameObject::get_activeSelf()
extern "C" bool GameObject_get_activeSelf_m5_768 (GameObject_t5_101 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.GameObject::get_activeInHierarchy()
extern "C" bool GameObject_get_activeInHierarchy_m5_769 (GameObject_t5_101 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.GameObject::get_tag()
extern "C" String_t* GameObject_get_tag_m5_770 (GameObject_t5_101 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GameObject::set_tag(System.String)
extern "C" void GameObject_set_tag_m5_771 (GameObject_t5_101 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject UnityEngine.GameObject::FindGameObjectWithTag(System.String)
extern "C" GameObject_t5_101 * GameObject_FindGameObjectWithTag_m5_772 (Object_t * __this /* static, unused */, String_t* ___tag, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GameObject::SendMessage(System.String,System.Object,UnityEngine.SendMessageOptions)
extern "C" void GameObject_SendMessage_m5_773 (GameObject_t5_101 * __this, String_t* ___methodName, Object_t * ___value, int32_t ___options, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Component UnityEngine.GameObject::Internal_AddComponentWithType(System.Type)
extern "C" Component_t5_25 * GameObject_Internal_AddComponentWithType_m5_774 (GameObject_t5_101 * __this, Type_t * ___componentType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Component UnityEngine.GameObject::AddComponent(System.Type)
extern "C" Component_t5_25 * GameObject_AddComponent_m5_775 (GameObject_t5_101 * __this, Type_t * ___componentType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GameObject::Internal_CreateGameObject(UnityEngine.GameObject,System.String)
extern "C" void GameObject_Internal_CreateGameObject_m5_776 (Object_t * __this /* static, unused */, GameObject_t5_101 * ___mono, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject UnityEngine.GameObject::Find(System.String)
extern "C" GameObject_t5_101 * GameObject_Find_m5_777 (Object_t * __this /* static, unused */, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject UnityEngine.GameObject::get_gameObject()
extern "C" GameObject_t5_101 * GameObject_get_gameObject_m5_778 (GameObject_t5_101 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;

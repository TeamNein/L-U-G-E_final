#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Material
struct Material_t5_77;
// UnityEngine.UI.Image
struct Image_t6_65;

#include "UnityEngine_UnityEngine_MonoBehaviour.h"
#include "UnityEngine_UnityEngine_Vector2.h"
#include "UnityEngine_UnityEngine_Matrix4x4.h"

// ScrollDetailTexture
struct  ScrollDetailTexture_t7_45  : public MonoBehaviour_t5_93
{
	// System.Boolean ScrollDetailTexture::uniqueMaterial
	bool ___uniqueMaterial_2;
	// UnityEngine.Vector2 ScrollDetailTexture::scrollPerSecond
	Vector2_t5_44  ___scrollPerSecond_3;
	// UnityEngine.Matrix4x4 ScrollDetailTexture::m_Matrix
	Matrix4x4_t5_49  ___m_Matrix_4;
	// UnityEngine.Material ScrollDetailTexture::mCopy
	Material_t5_77 * ___mCopy_5;
	// UnityEngine.Material ScrollDetailTexture::mOriginal
	Material_t5_77 * ___mOriginal_6;
	// UnityEngine.UI.Image ScrollDetailTexture::mSprite
	Image_t6_65 * ___mSprite_7;
	// UnityEngine.Material ScrollDetailTexture::m_Mat
	Material_t5_77 * ___m_Mat_8;
};

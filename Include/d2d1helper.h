/*+@@file@@----------------------------------------------------------------*//*!
 \file		d2d1helper.h
 \par Description 
            Extension and update of headers for PellesC compiler suite.
 \par Project: 
            PellesC Headers extension
 \date		Created  on Fri Jun  3 17:37:23 2016
 \date		Modified on Fri Jun  3 17:37:23 2016
 \author	frankie
\*//*-@@file@@----------------------------------------------------------------*/
#ifndef _D2D1_HELPER_H_
#define _D2D1_HELPER_H_
#if __POCC__ >= 500
#pragma once
#endif
#ifndef _D2D1_H_
#include <d2d1.h>
#endif
typedef enum
{
    D2D1ColorF_AliceBlue = 0xF0F8FF,
    D2D1ColorF_AntiqueWhite = 0xFAEBD7,
    D2D1ColorF_Aqua = 0x00FFFF,
    D2D1ColorF_Aquamarine = 0x7FFFD4,
    D2D1ColorF_Azure = 0xF0FFFF,
    D2D1ColorF_Beige = 0xF5F5DC,
    D2D1ColorF_Bisque = 0xFFE4C4,
    D2D1ColorF_Black = 0x000000,
    D2D1ColorF_BlanchedAlmond = 0xFFEBCD,
    D2D1ColorF_Blue = 0x0000FF,
    D2D1ColorF_BlueViolet = 0x8A2BE2,
    D2D1ColorF_Brown = 0xA52A2A,
    D2D1ColorF_BurlyWood = 0xDEB887,
    D2D1ColorF_CadetBlue = 0x5F9EA0,
    D2D1ColorF_Chartreuse = 0x7FFF00,
    D2D1ColorF_Chocolate = 0xD2691E,
    D2D1ColorF_Coral = 0xFF7F50,
    D2D1ColorF_CornflowerBlue = 0x6495ED,
    D2D1ColorF_Cornsilk = 0xFFF8DC,
    D2D1ColorF_Crimson = 0xDC143C,
    D2D1ColorF_Cyan = 0x00FFFF,
    D2D1ColorF_DarkBlue = 0x00008B,
    D2D1ColorF_DarkCyan = 0x008B8B,
    D2D1ColorF_DarkGoldenrod = 0xB8860B,
    D2D1ColorF_DarkGray = 0xA9A9A9,
    D2D1ColorF_DarkGreen = 0x006400,
    D2D1ColorF_DarkKhaki = 0xBDB76B,
    D2D1ColorF_DarkMagenta = 0x8B008B,
    D2D1ColorF_DarkOliveGreen = 0x556B2F,
    D2D1ColorF_DarkOrange = 0xFF8C00,
    D2D1ColorF_DarkOrchid = 0x9932CC,
    D2D1ColorF_DarkRed = 0x8B0000,
    D2D1ColorF_DarkSalmon = 0xE9967A,
    D2D1ColorF_DarkSeaGreen = 0x8FBC8F,
    D2D1ColorF_DarkSlateBlue = 0x483D8B,
    D2D1ColorF_DarkSlateGray = 0x2F4F4F,
    D2D1ColorF_DarkTurquoise = 0x00CED1,
    D2D1ColorF_DarkViolet = 0x9400D3,
    D2D1ColorF_DeepPink = 0xFF1493,
    D2D1ColorF_DeepSkyBlue = 0x00BFFF,
    D2D1ColorF_DimGray = 0x696969,
    D2D1ColorF_DodgerBlue = 0x1E90FF,
    D2D1ColorF_Firebrick = 0xB22222,
    D2D1ColorF_FloralWhite = 0xFFFAF0,
    D2D1ColorF_ForestGreen = 0x228B22,
    D2D1ColorF_Fuchsia = 0xFF00FF,
    D2D1ColorF_Gainsboro = 0xDCDCDC,
    D2D1ColorF_GhostWhite = 0xF8F8FF,
    D2D1ColorF_Gold = 0xFFD700,
    D2D1ColorF_Goldenrod = 0xDAA520,
    D2D1ColorF_Gray = 0x808080,
    D2D1ColorF_Green = 0x008000,
    D2D1ColorF_GreenYellow = 0xADFF2F,
    D2D1ColorF_Honeydew = 0xF0FFF0,
    D2D1ColorF_HotPink = 0xFF69B4,
    D2D1ColorF_IndianRed = 0xCD5C5C,
    D2D1ColorF_Indigo = 0x4B0082,
    D2D1ColorF_Ivory = 0xFFFFF0,
    D2D1ColorF_Khaki = 0xF0E68C,
    D2D1ColorF_Lavender = 0xE6E6FA,
    D2D1ColorF_LavenderBlush = 0xFFF0F5,
    D2D1ColorF_LawnGreen = 0x7CFC00,
    D2D1ColorF_LemonChiffon = 0xFFFACD,
    D2D1ColorF_LightBlue = 0xADD8E6,
    D2D1ColorF_LightCoral = 0xF08080,
    D2D1ColorF_LightCyan = 0xE0FFFF,
    D2D1ColorF_LightGoldenrodYellow = 0xFAFAD2,
    D2D1ColorF_LightGreen = 0x90EE90,
    D2D1ColorF_LightGray = 0xD3D3D3,
    D2D1ColorF_LightPink = 0xFFB6C1,
    D2D1ColorF_LightSalmon = 0xFFA07A,
    D2D1ColorF_LightSeaGreen = 0x20B2AA,
    D2D1ColorF_LightSkyBlue = 0x87CEFA,
    D2D1ColorF_LightSlateGray = 0x778899,
    D2D1ColorF_LightSteelBlue = 0xB0C4DE,
    D2D1ColorF_LightYellow = 0xFFFFE0,
    D2D1ColorF_Lime = 0x00FF00,
    D2D1ColorF_LimeGreen = 0x32CD32,
    D2D1ColorF_Linen = 0xFAF0E6,
    D2D1ColorF_Magenta = 0xFF00FF,
    D2D1ColorF_Maroon = 0x800000,
    D2D1ColorF_MediumAquamarine = 0x66CDAA,
    D2D1ColorF_MediumBlue = 0x0000CD,
    D2D1ColorF_MediumOrchid = 0xBA55D3,
    D2D1ColorF_MediumPurple = 0x9370DB,
    D2D1ColorF_MediumSeaGreen = 0x3CB371,
    D2D1ColorF_MediumSlateBlue = 0x7B68EE,
    D2D1ColorF_MediumSpringGreen = 0x00FA9A,
    D2D1ColorF_MediumTurquoise = 0x48D1CC,
    D2D1ColorF_MediumVioletRed = 0xC71585,
    D2D1ColorF_MidnightBlue = 0x191970,
    D2D1ColorF_MintCream = 0xF5FFFA,
    D2D1ColorF_MistyRose = 0xFFE4E1,
    D2D1ColorF_Moccasin = 0xFFE4B5,
    D2D1ColorF_NavajoWhite = 0xFFDEAD,
    D2D1ColorF_Navy = 0x000080,
    D2D1ColorF_OldLace = 0xFDF5E6,
    D2D1ColorF_Olive = 0x808000,
    D2D1ColorF_OliveDrab = 0x6B8E23,
    D2D1ColorF_Orange = 0xFFA500,
    D2D1ColorF_OrangeRed = 0xFF4500,
    D2D1ColorF_Orchid = 0xDA70D6,
    D2D1ColorF_PaleGoldenrod = 0xEEE8AA,
    D2D1ColorF_PaleGreen = 0x98FB98,
    D2D1ColorF_PaleTurquoise = 0xAFEEEE,
    D2D1ColorF_PaleVioletRed = 0xDB7093,
    D2D1ColorF_PapayaWhip = 0xFFEFD5,
    D2D1ColorF_PeachPuff = 0xFFDAB9,
    D2D1ColorF_Peru = 0xCD853F,
    D2D1ColorF_Pink = 0xFFC0CB,
    D2D1ColorF_Plum = 0xDDA0DD,
    D2D1ColorF_PowderBlue = 0xB0E0E6,
    D2D1ColorF_Purple = 0x800080,
    D2D1ColorF_Red = 0xFF0000,
    D2D1ColorF_RosyBrown = 0xBC8F8F,
    D2D1ColorF_RoyalBlue = 0x4169E1,
    D2D1ColorF_SaddleBrown = 0x8B4513,
    D2D1ColorF_Salmon = 0xFA8072,
    D2D1ColorF_SandyBrown = 0xF4A460,
    D2D1ColorF_SeaGreen = 0x2E8B57,
    D2D1ColorF_SeaShell = 0xFFF5EE,
    D2D1ColorF_Sienna = 0xA0522D,
    D2D1ColorF_Silver = 0xC0C0C0,
    D2D1ColorF_SkyBlue = 0x87CEEB,
    D2D1ColorF_SlateBlue = 0x6A5ACD,
    D2D1ColorF_SlateGray = 0x708090,
    D2D1ColorF_Snow = 0xFFFAFA,
    D2D1ColorF_SpringGreen = 0x00FF7F,
    D2D1ColorF_SteelBlue = 0x4682B4,
    D2D1ColorF_Tan = 0xD2B48C,
    D2D1ColorF_Teal = 0x008080,
    D2D1ColorF_Thistle = 0xD8BFD8,
    D2D1ColorF_Tomato = 0xFF6347,
    D2D1ColorF_Turquoise = 0x40E0D0,
    D2D1ColorF_Violet = 0xEE82EE,
    D2D1ColorF_Wheat = 0xF5DEB3,
    D2D1ColorF_White = 0xFFFFFF,
    D2D1ColorF_WhiteSmoke = 0xF5F5F5,
    D2D1ColorF_Yellow = 0xFFFF00,
    D2D1ColorF_YellowGreen = 0x9ACD32,
} D2D1ColorF_Enum;

#define sc_redShift    16
#define sc_greenShift  8
#define sc_blueShift   0    
#define sc_redMask    ((UINT32)(0xff << (sc_redShift)))
#define sc_greenMask  ((UINT32)(0xff << (sc_greenShift)))
#define sc_blueMask   ((UINT32)(0xff << (sc_blueShift)))

__forceinline void D2D1_Fcolor(D2D1_COLOR_F * this, UINT32 rgb, FLOAT a)
{
	this->r = (FLOAT)((rgb & sc_redMask  ) >> sc_redShift  ) / 255.f;
	this->g = (FLOAT)((rgb & sc_greenMask) >> sc_greenShift) / 255.f;
	this->b = (FLOAT)((rgb & sc_blueMask ) >> sc_blueShift ) / 255.f;
	this->a = a;
}

static __forceinline void D2D1_ScaleMatrix(D2D1_SIZE_F *size, D2D1_POINT_2F center, D2D1_MATRIX_3X2_F *ScaleMx)
{
	ScaleMx->_11 = size->width;
	ScaleMx->_12 = 0.0;
	ScaleMx->_21 = 0.0;
	ScaleMx->_22 = size->height;
	ScaleMx->_31 = center.x - size->width * center.x;
	ScaleMx->_32 = center.y - size->height * center.y;
}

static __forceinline void D2D1_TranslateMatrix(D2D1_SIZE_F *size, D2D1_MATRIX_3X2_F *translationMx)
{
	translationMx->_11 = 1.0;
	translationMx->_12 = 0.0;
	translationMx->_21 = 0.0;
	translationMx->_22 = 1.0;
	translationMx->_31 = size->width;
	translationMx->_32 = size->height;
}

__forceinline void D2D1_SetProduct(D2D1_MATRIX_3X2_F *r, const D2D1_MATRIX_3X2_F *a, const D2D1_MATRIX_3X2_F *b)
{
	D2D1_MATRIX_3X2_F _r;
	_r._11 = a->_11 * b->_11 + a->_12 * b->_21;
	_r._12 = a->_11 * b->_12 + a->_12 * b->_22;
	_r._21 = a->_21 * b->_11 + a->_22 * b->_21;
	_r._22 = a->_21 * b->_12 + a->_22 * b->_22;
	_r._31 = a->_31 * b->_11 + a->_32 * b->_21 + b->_31;
	_r._32 = a->_31 * b->_12 + a->_32 * b->_22 + b->_32;
	*r = _r;
}

static __forceinline D2D1_MATRIX_3X2_F *D2D1_Identity(D2D1_MATRIX_3X2_F *identity)
{
	identity->_11 = 1.f;
	identity->_12 = 0.f;
	identity->_21 = 0.f;
	identity->_22 = 1.f;
	identity->_31 = 0.f;
	identity->_32 = 0.f;
}

static __forceinline D2D1_MATRIX_3X2_F *D2D1_Translation(D2D1_MATRIX_3X2_F *Mx, D2D1_SIZE_F *size)
{

	Mx->_11 = 1.0;
	Mx->_12 = 0.0;
	Mx->_21 = 0.0;
	Mx->_22 = 1.0;
	Mx->_31 = size->width;
	Mx->_32 = size->height;

	return Mx;
}

#endif

/*+@@file@@----------------------------------------------------------------*//*!
 \file		d3dx9.h
 \par Description 
            Extension and update of headers for PellesC compiler suite.
 \par Project: 
            PellesC Headers extension
 \date		Created  on Fri Nov 11 16:29:36 2016
 \date		Modified on Fri Nov 11 16:29:36 2016
 \author	frankie
\*//*-@@file@@----------------------------------------------------------------*/

#ifdef  __D3DX_INTERNAL__
#error Incorrect D3DX header used
#endif
#ifndef __D3DX9_H__
#define __D3DX9_H__
#if __POCC__ >= 500
#pragma once
#endif
#include <limits.h>
#define D3DX_DEFAULT            ((UINT) -1)
#define D3DX_DEFAULT_NONPOW2    ((UINT) -2)
#define D3DX_DEFAULT_FLOAT      FLT_MAX
#define D3DX_FROM_FILE          ((UINT) -3)
#define D3DFMT_FROM_FILE        ((D3DFORMAT) -3)
#ifndef D3DXINLINE
#ifdef _MSC_VER
#if (_MSC_VER >= 1200)
#define D3DXINLINE __forceinline
#else
#define D3DXINLINE __inline
#endif
#else
#define D3DXINLINE
#endif
#endif
#include <d3d9.h>
#include <d3dx9math.h>
#include <d3dx9core.h>
#include <d3dx9xof.h>
#include <d3dx9mesh.h>
#include <d3dx9shader.h>
#include <d3dx9effect.h>
#include <d3dx9tex.h>
#include <d3dx9shape.h>
#include <d3dx9anim.h>
#define _FACDD  0x876
#define MAKE_DDHRESULT( code )  MAKE_HRESULT( 1, _FACDD, code )
enum _D3DXERR
{
	D3DXERR_CANNOTMODIFYINDEXBUFFER = MAKE_DDHRESULT(2900),
	D3DXERR_INVALIDMESH = MAKE_DDHRESULT(2901),
	D3DXERR_CANNOTATTRSORT = MAKE_DDHRESULT(2902),
	D3DXERR_SKINNINGNOTSUPPORTED = MAKE_DDHRESULT(2903),
	D3DXERR_TOOMANYINFLUENCES = MAKE_DDHRESULT(2904),
	D3DXERR_INVALIDDATA = MAKE_DDHRESULT(2905),
	D3DXERR_LOADEDMESHASNODATA = MAKE_DDHRESULT(2906),
	D3DXERR_DUPLICATENAMEDFRAGMENT = MAKE_DDHRESULT(2907),
	D3DXERR_CANNOTREMOVELASTITEM = MAKE_DDHRESULT(2908),
};
#endif

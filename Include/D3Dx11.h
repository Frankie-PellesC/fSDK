/*+@@file@@----------------------------------------------------------------*//*!
 \file		D3Dx11.h
 \par Description 
            Extension and update of headers for PellesC compiler suite.
 \par Project: 
            PellesC Headers extension
 \date		Created  on Sun Nov 20 15:30:00 2016
 \date		Modified on Sun Nov 20 15:30:00 2016
 \author	frankie
\*//*-@@file@@----------------------------------------------------------------*/

#ifdef  __D3DX11_INTERNAL__
#error Incorrect D3DX11 header used
#endif
#ifndef __D3DX11_H__
#define __D3DX11_H__
#if __POCC__ >= 500
#pragma once
#endif
#include <limits.h>
#include <float.h>
#define D3DX11_DEFAULT            ((UINT) -1)
#define D3DX11_FROM_FILE          ((UINT) -3)
#define DXGI_FORMAT_FROM_FILE     ((DXGI_FORMAT) -3)
#ifndef D3DX11INLINE
#ifdef _MSC_VER
#if (_MSC_VER >= 1200)
#define D3DX11INLINE __forceinline
#else
#define D3DX11INLINE __inline
#endif
#else
#define D3DX11INLINE
#endif
#endif
#include "d3d11.h"
#include "d3dx11.h"
#include "d3dx11core.h"
#include "d3dx11tex.h"
#include "d3dx11async.h"
#define _FACDD  0x876
#define MAKE_DDHRESULT( code )  MAKE_HRESULT( 1, _FACDD, code )
enum _D3DX11_ERR
{
    D3DX11_ERR_CANNOT_MODIFY_INDEX_BUFFER       = MAKE_DDHRESULT(2900),
    D3DX11_ERR_INVALID_MESH                     = MAKE_DDHRESULT(2901),
    D3DX11_ERR_CANNOT_ATTR_SORT                 = MAKE_DDHRESULT(2902),
    D3DX11_ERR_SKINNING_NOT_SUPPORTED           = MAKE_DDHRESULT(2903),
    D3DX11_ERR_TOO_MANY_INFLUENCES              = MAKE_DDHRESULT(2904),
    D3DX11_ERR_INVALID_DATA                     = MAKE_DDHRESULT(2905),
    D3DX11_ERR_LOADED_MESH_HAS_NO_DATA          = MAKE_DDHRESULT(2906),
    D3DX11_ERR_DUPLICATE_NAMED_FRAGMENT         = MAKE_DDHRESULT(2907),
    D3DX11_ERR_CANNOT_REMOVE_LAST_ITEM		    = MAKE_DDHRESULT(2908),
};
#endif

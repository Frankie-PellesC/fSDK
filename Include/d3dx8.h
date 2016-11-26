/*+@@file@@----------------------------------------------------------------*//*!
 \file		d3dx8.h
 \par Description 
            Extension and update of headers for PellesC compiler suite.
 \par Project: 
            PellesC Headers extension
 \date		Created  on Fri Nov 25 20:53:00 2016
 \date		Modified on Fri Nov 25 20:53:00 2016
 \author	frankie
\*//*-@@file@@----------------------------------------------------------------*/

#ifndef __D3DX8_H__
#define __D3DX8_H__
#if __POCC__ >= 500
#pragma once
#endif
#include <d3d8.h>
#include <limits.h>
#ifndef D3DXINLINE
#if (__POCC__ >= 500)
#define D3DXINLINE __forceinline
#else
#define D3DXINLINE __inline
#endif
#endif
#define D3DX_DEFAULT ULONG_MAX
#define D3DX_DEFAULT_FLOAT FLT_MAX
#include <d3dx8math.h>
#include <d3dx8core.h>
#include <d3dx8tex.h>
#include <d3dx8mesh.h>
#include <d3dx8shape.h>
#include <d3dx8effect.h>
#endif

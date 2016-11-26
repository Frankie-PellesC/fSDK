/*+@@file@@----------------------------------------------------------------*//*!
 \file		d3dx8shape.h
 \par Description 
            Extension and update of headers for PellesC compiler suite.
 \par Project: 
            PellesC Headers extension
 \date		Created  on Fri Nov 25 22:03:47 2016
 \date		Modified on Fri Nov 25 22:03:47 2016
 \author	frankie
\*//*-@@file@@----------------------------------------------------------------*/

#include <d3dx8.h>
#ifndef __D3DX8SHAPES_H__
#define __D3DX8SHAPES_H__
#if __POCC__ >= 500
#pragma once
#endif
HRESULT WINAPI D3DXCreatePolygon(LPDIRECT3DDEVICE8 pDevice, FLOAT Length, UINT Sides, LPD3DXMESH *ppMesh, LPD3DXBUFFER *ppAdjacency);
HRESULT WINAPI D3DXCreateBox(LPDIRECT3DDEVICE8 pDevice, FLOAT Width, FLOAT Height, FLOAT Depth, LPD3DXMESH *ppMesh, LPD3DXBUFFER *ppAdjacency);
HRESULT WINAPI D3DXCreateCylinder(LPDIRECT3DDEVICE8 pDevice, FLOAT Radius1, FLOAT Radius2, FLOAT Length, UINT Slices, UINT Stacks, LPD3DXMESH *ppMesh, LPD3DXBUFFER *ppAdjacency);
HRESULT WINAPI D3DXCreateSphere(LPDIRECT3DDEVICE8 pDevice, FLOAT Radius, UINT Slices, UINT Stacks, LPD3DXMESH *ppMesh, LPD3DXBUFFER *ppAdjacency);
HRESULT WINAPI D3DXCreateTorus(LPDIRECT3DDEVICE8 pDevice, FLOAT InnerRadius, FLOAT OuterRadius, UINT Sides, UINT Rings, LPD3DXMESH *ppMesh, LPD3DXBUFFER *ppAdjacency);
HRESULT WINAPI D3DXCreateTeapot(LPDIRECT3DDEVICE8 pDevice, LPD3DXMESH *ppMesh, LPD3DXBUFFER *ppAdjacency);
HRESULT WINAPI D3DXCreateTextA(LPDIRECT3DDEVICE8 pDevice, HDC hDC, LPCSTR pText, FLOAT Deviation, FLOAT Extrusion, LPD3DXMESH *ppMesh, LPD3DXBUFFER *ppAdjacency, LPGLYPHMETRICSFLOAT pGlyphMetrics);
HRESULT WINAPI D3DXCreateTextW(LPDIRECT3DDEVICE8 pDevice, HDC hDC, LPCWSTR pText, FLOAT Deviation, FLOAT Extrusion, LPD3DXMESH *ppMesh, LPD3DXBUFFER *ppAdjacency, LPGLYPHMETRICSFLOAT pGlyphMetrics);
#ifdef UNICODE
#define D3DXCreateText D3DXCreateTextW
#else
#define D3DXCreateText D3DXCreateTextA
#endif
#endif

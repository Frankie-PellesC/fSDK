/*+@@file@@----------------------------------------------------------------*//*!
 \file		d3dx9core.h
 \par Description 
            Extension and update of headers for PellesC compiler suite.
 \par Project: 
            PellesC Headers extension
 \date		Created  on Fri Nov 11 16:31:57 2016
 \date		Modified on Fri Nov 11 16:31:57 2016
 \author	frankie
\*//*-@@file@@----------------------------------------------------------------*/

#include "d3dx9.h"
#ifndef __D3DX9CORE_H__
#define __D3DX9CORE_H__
#if __POCC__ >= 500
#pragma once
#endif
#define D3DX_VERSION 0x0902
#define D3DX_SDK_VERSION 43
BOOL WINAPI D3DXCheckVersion(UINT D3DSdkVersion, UINT D3DXSdkVersion);
BOOL WINAPI D3DXDebugMute(BOOL Mute);
UINT WINAPI D3DXGetDriverLevel(LPDIRECT3DDEVICE9 pDevice);
typedef interface ID3DXBuffer ID3DXBuffer;
typedef interface ID3DXBuffer *LPD3DXBUFFER;
DEFINE_GUID(IID_ID3DXBuffer, 0x8ba5fb08, 0x5195, 0x40e2, 0xac, 0x58, 0xd, 0x98, 0x9c, 0x3a, 0x1, 0x2);
#undef INTERFACE
#define INTERFACE ID3DXBuffer
DECLARE_INTERFACE_(ID3DXBuffer, IUnknown)
{
	STDMETHOD(QueryInterface) (THIS_ REFIID iid, LPVOID * ppv)PURE;
	STDMETHOD_(ULONG, AddRef) (THIS)PURE;
	STDMETHOD_(ULONG, Release) (THIS)PURE;
	STDMETHOD_(LPVOID, GetBufferPointer) (THIS)PURE;
	STDMETHOD_(DWORD, GetBufferSize) (THIS)PURE;
};
#define D3DXSPRITE_DONOTSAVESTATE               (1 << 0)
#define D3DXSPRITE_DONOTMODIFY_RENDERSTATE      (1 << 1)
#define D3DXSPRITE_OBJECTSPACE                  (1 << 2)
#define D3DXSPRITE_BILLBOARD                    (1 << 3)
#define D3DXSPRITE_ALPHABLEND                   (1 << 4)
#define D3DXSPRITE_SORT_TEXTURE                 (1 << 5)
#define D3DXSPRITE_SORT_DEPTH_FRONTTOBACK       (1 << 6)
#define D3DXSPRITE_SORT_DEPTH_BACKTOFRONT       (1 << 7)
#define D3DXSPRITE_DO_NOT_ADDREF_TEXTURE        (1 << 8)
typedef interface ID3DXSprite ID3DXSprite;
typedef interface ID3DXSprite *LPD3DXSPRITE;
DEFINE_GUID(IID_ID3DXSprite, 0xba0b762d, 0x7d28, 0x43ec, 0xb9, 0xdc, 0x2f, 0x84, 0x44, 0x3b, 0x6, 0x14);
#undef INTERFACE
#define INTERFACE ID3DXSprite
DECLARE_INTERFACE_(ID3DXSprite, IUnknown)
{
	STDMETHOD(QueryInterface) (THIS_ REFIID iid, LPVOID * ppv)PURE;
	STDMETHOD_(ULONG, AddRef) (THIS)PURE;
	STDMETHOD_(ULONG, Release) (THIS)PURE;
	STDMETHOD(GetDevice) (THIS_ LPDIRECT3DDEVICE9 * ppDevice)PURE;
	STDMETHOD(GetTransform) (THIS_ D3DXMATRIX * pTransform)PURE;
	STDMETHOD(SetTransform) (THIS_ CONST D3DXMATRIX * pTransform)PURE;
	STDMETHOD(SetWorldViewRH) (THIS_ CONST D3DXMATRIX * pWorld, CONST D3DXMATRIX * pView)PURE;
	STDMETHOD(SetWorldViewLH) (THIS_ CONST D3DXMATRIX * pWorld, CONST D3DXMATRIX * pView)PURE;
	STDMETHOD(Begin) (THIS_ DWORD Flags)PURE;
	STDMETHOD(Draw) (THIS_ LPDIRECT3DTEXTURE9 pTexture, CONST RECT * pSrcRect, CONST D3DXVECTOR3 * pCenter, CONST D3DXVECTOR3 * pPosition, D3DCOLOR Color)PURE;
	STDMETHOD(Flush) (THIS)PURE;
	STDMETHOD(End) (THIS)PURE;
	STDMETHOD(OnLostDevice) (THIS)PURE;
	STDMETHOD(OnResetDevice) (THIS)PURE;
};
HRESULT WINAPI D3DXCreateSprite(LPDIRECT3DDEVICE9 pDevice, LPD3DXSPRITE *ppSprite);
typedef struct _D3DXFONT_DESCA
{
	INT Height;
	UINT Width;
	UINT Weight;
	UINT MipLevels;
	BOOL Italic;
	BYTE CharSet;
	BYTE OutputPrecision;
	BYTE Quality;
	BYTE PitchAndFamily;
	CHAR FaceName[LF_FACESIZE];
} D3DXFONT_DESCA, *LPD3DXFONT_DESCA;
typedef struct _D3DXFONT_DESCW
{
	INT Height;
	UINT Width;
	UINT Weight;
	UINT MipLevels;
	BOOL Italic;
	BYTE CharSet;
	BYTE OutputPrecision;
	BYTE Quality;
	BYTE PitchAndFamily;
	WCHAR FaceName[LF_FACESIZE];
} D3DXFONT_DESCW, *LPD3DXFONT_DESCW;
#ifdef UNICODE
typedef D3DXFONT_DESCW D3DXFONT_DESC;
typedef LPD3DXFONT_DESCW LPD3DXFONT_DESC;
#else
typedef D3DXFONT_DESCA D3DXFONT_DESC;
typedef LPD3DXFONT_DESCA LPD3DXFONT_DESC;
#endif
typedef interface ID3DXFont ID3DXFont;
typedef interface ID3DXFont *LPD3DXFONT;
DEFINE_GUID(IID_ID3DXFont, 0xd79dbb70, 0x5f21, 0x4d36, 0xbb, 0xc2, 0xff, 0x52, 0x5c, 0x21, 0x3c, 0xdc);
#undef INTERFACE
#define INTERFACE ID3DXFont
DECLARE_INTERFACE_(ID3DXFont, IUnknown)
{
	STDMETHOD(QueryInterface) (THIS_ REFIID iid, LPVOID * ppv)PURE;
	STDMETHOD_(ULONG, AddRef) (THIS)PURE;
	STDMETHOD_(ULONG, Release) (THIS)PURE;
	STDMETHOD(GetDevice) (THIS_ LPDIRECT3DDEVICE9 * ppDevice)PURE;
	STDMETHOD(GetDescA) (THIS_ D3DXFONT_DESCA * pDesc)PURE;
	STDMETHOD(GetDescW) (THIS_ D3DXFONT_DESCW * pDesc)PURE;
	STDMETHOD_(BOOL, GetTextMetricsA) (THIS_ TEXTMETRICA * pTextMetrics)PURE;
	STDMETHOD_(BOOL, GetTextMetricsW) (THIS_ TEXTMETRICW * pTextMetrics)PURE;
	STDMETHOD_(HDC, GetDC) (THIS)PURE;
	STDMETHOD(GetGlyphData) (THIS_ UINT Glyph, LPDIRECT3DTEXTURE9 * ppTexture, RECT * pBlackBox, POINT * pCellInc)PURE;
	STDMETHOD(PreloadCharacters) (THIS_ UINT First, UINT Last)PURE;
	STDMETHOD(PreloadGlyphs) (THIS_ UINT First, UINT Last)PURE;
	STDMETHOD(PreloadTextA) (THIS_ LPCSTR pString, INT Count)PURE;
	STDMETHOD(PreloadTextW) (THIS_ LPCWSTR pString, INT Count)PURE;
	STDMETHOD_(INT, DrawTextA) (THIS_ LPD3DXSPRITE pSprite, LPCSTR pString, INT Count, LPRECT pRect, DWORD Format, D3DCOLOR Color)PURE;
	STDMETHOD_(INT, DrawTextW) (THIS_ LPD3DXSPRITE pSprite, LPCWSTR pString, INT Count, LPRECT pRect, DWORD Format, D3DCOLOR Color)PURE;
	STDMETHOD(OnLostDevice) (THIS)PURE;
	STDMETHOD(OnResetDevice) (THIS)PURE;
};
#ifndef GetTextMetrics
#ifdef UNICODE
#define GetTextMetrics GetTextMetricsW
#else
#define GetTextMetrics GetTextMetricsA
#endif
#endif
#ifndef DrawText
#ifdef UNICODE
#define DrawText DrawTextW
#else
#define DrawText DrawTextA
#endif
#endif
HRESULT WINAPI D3DXCreateFontA(LPDIRECT3DDEVICE9 pDevice, INT Height, UINT Width, UINT Weight, UINT MipLevels, BOOL Italic, DWORD CharSet, DWORD OutputPrecision, DWORD Quality, DWORD PitchAndFamily, LPCSTR pFaceName, LPD3DXFONT *ppFont);
HRESULT WINAPI D3DXCreateFontW(LPDIRECT3DDEVICE9 pDevice, INT Height, UINT Width, UINT Weight, UINT MipLevels, BOOL Italic, DWORD CharSet, DWORD OutputPrecision, DWORD Quality, DWORD PitchAndFamily, LPCWSTR pFaceName, LPD3DXFONT *ppFont);
#ifdef UNICODE
#define D3DXCreateFont D3DXCreateFontW
#else
#define D3DXCreateFont D3DXCreateFontA
#endif
HRESULT WINAPI D3DXCreateFontIndirectA(LPDIRECT3DDEVICE9 pDevice, CONST D3DXFONT_DESCA *pDesc, LPD3DXFONT *ppFont);
HRESULT WINAPI D3DXCreateFontIndirectW(LPDIRECT3DDEVICE9 pDevice, CONST D3DXFONT_DESCW *pDesc, LPD3DXFONT *ppFont);
#ifdef UNICODE
#define D3DXCreateFontIndirect D3DXCreateFontIndirectW
#else
#define D3DXCreateFontIndirect D3DXCreateFontIndirectA
#endif
typedef struct _D3DXRTS_DESC
{
	UINT Width;
	UINT Height;
	D3DFORMAT Format;
	BOOL DepthStencil;
	D3DFORMAT DepthStencilFormat;
} D3DXRTS_DESC, *LPD3DXRTS_DESC;
typedef interface ID3DXRenderToSurface ID3DXRenderToSurface;
typedef interface ID3DXRenderToSurface *LPD3DXRENDERTOSURFACE;
DEFINE_GUID(IID_ID3DXRenderToSurface, 0x6985f346, 0x2c3d, 0x43b3, 0xbe, 0x8b, 0xda, 0xae, 0x8a, 0x3, 0xd8, 0x94);
#undef INTERFACE
#define INTERFACE ID3DXRenderToSurface
DECLARE_INTERFACE_(ID3DXRenderToSurface, IUnknown)
{
	STDMETHOD(QueryInterface) (THIS_ REFIID iid, LPVOID * ppv)PURE;
	STDMETHOD_(ULONG, AddRef) (THIS)PURE;
	STDMETHOD_(ULONG, Release) (THIS)PURE;
	STDMETHOD(GetDevice) (THIS_ LPDIRECT3DDEVICE9 * ppDevice)PURE;
	STDMETHOD(GetDesc) (THIS_ D3DXRTS_DESC * pDesc)PURE;
	STDMETHOD(BeginScene) (THIS_ LPDIRECT3DSURFACE9 pSurface, CONST D3DVIEWPORT9 * pViewport)PURE;
	STDMETHOD(EndScene) (THIS_ DWORD MipFilter)PURE;
	STDMETHOD(OnLostDevice) (THIS)PURE;
	STDMETHOD(OnResetDevice) (THIS)PURE;
};
HRESULT WINAPI D3DXCreateRenderToSurface(LPDIRECT3DDEVICE9 pDevice, UINT Width, UINT Height, D3DFORMAT Format, BOOL DepthStencil, D3DFORMAT DepthStencilFormat, LPD3DXRENDERTOSURFACE *ppRenderToSurface);
typedef struct _D3DXRTE_DESC
{
	UINT Size;
	UINT MipLevels;
	D3DFORMAT Format;
	BOOL DepthStencil;
	D3DFORMAT DepthStencilFormat;
} D3DXRTE_DESC, *LPD3DXRTE_DESC;
typedef interface ID3DXRenderToEnvMap ID3DXRenderToEnvMap;
typedef interface ID3DXRenderToEnvMap *LPD3DXRenderToEnvMap;
DEFINE_GUID(IID_ID3DXRenderToEnvMap, 0x313f1b4b, 0xc7b0, 0x4fa2, 0x9d, 0x9d, 0x8d, 0x38, 0xb, 0x64, 0x38, 0x5e);
#undef INTERFACE
#define INTERFACE ID3DXRenderToEnvMap
DECLARE_INTERFACE_(ID3DXRenderToEnvMap, IUnknown)
{
	STDMETHOD(QueryInterface) (THIS_ REFIID iid, LPVOID * ppv)PURE;
	STDMETHOD_(ULONG, AddRef) (THIS)PURE;
	STDMETHOD_(ULONG, Release) (THIS)PURE;
	STDMETHOD(GetDevice) (THIS_ LPDIRECT3DDEVICE9 * ppDevice)PURE;
	STDMETHOD(GetDesc) (THIS_ D3DXRTE_DESC * pDesc)PURE;
	STDMETHOD(BeginCube) (THIS_ LPDIRECT3DCUBETEXTURE9 pCubeTex)PURE;
	STDMETHOD(BeginSphere) (THIS_ LPDIRECT3DTEXTURE9 pTex)PURE;
	STDMETHOD(BeginHemisphere) (THIS_ LPDIRECT3DTEXTURE9 pTexZPos, LPDIRECT3DTEXTURE9 pTexZNeg)PURE;
	STDMETHOD(BeginParabolic) (THIS_ LPDIRECT3DTEXTURE9 pTexZPos, LPDIRECT3DTEXTURE9 pTexZNeg)PURE;
	STDMETHOD(Face) (THIS_ D3DCUBEMAP_FACES Face, DWORD MipFilter)PURE;
	STDMETHOD(End) (THIS_ DWORD MipFilter)PURE;
	STDMETHOD(OnLostDevice) (THIS)PURE;
	STDMETHOD(OnResetDevice) (THIS)PURE;
};
HRESULT WINAPI D3DXCreateRenderToEnvMap(LPDIRECT3DDEVICE9 pDevice, UINT Size, UINT MipLevels, D3DFORMAT Format, BOOL DepthStencil, D3DFORMAT DepthStencilFormat, LPD3DXRenderToEnvMap *ppRenderToEnvMap);
typedef interface ID3DXLine ID3DXLine;
typedef interface ID3DXLine *LPD3DXLINE;
DEFINE_GUID(IID_ID3DXLine, 0xd379ba7f, 0x9042, 0x4ac4, 0x9f, 0x5e, 0x58, 0x19, 0x2a, 0x4c, 0x6b, 0xd8);
#undef INTERFACE
#define INTERFACE ID3DXLine
DECLARE_INTERFACE_(ID3DXLine, IUnknown)
{
	STDMETHOD(QueryInterface) (THIS_ REFIID iid, LPVOID * ppv)PURE;
	STDMETHOD_(ULONG, AddRef) (THIS)PURE;
	STDMETHOD_(ULONG, Release) (THIS)PURE;
	STDMETHOD(GetDevice) (THIS_ LPDIRECT3DDEVICE9 * ppDevice)PURE;
	STDMETHOD(Begin) (THIS)PURE;
	STDMETHOD(Draw) (THIS_ CONST D3DXVECTOR2 * pVertexList, DWORD dwVertexListCount, D3DCOLOR Color)PURE;
	STDMETHOD(DrawTransform) (THIS_ CONST D3DXVECTOR3 * pVertexList, DWORD dwVertexListCount, CONST D3DXMATRIX * pTransform, D3DCOLOR Color)PURE;
	STDMETHOD(SetPattern) (THIS_ DWORD dwPattern)PURE;
	STDMETHOD_(DWORD, GetPattern) (THIS)PURE;
	STDMETHOD(SetPatternScale) (THIS_ FLOAT fPatternScale)PURE;
	STDMETHOD_(FLOAT, GetPatternScale) (THIS)PURE;
	STDMETHOD(SetWidth) (THIS_ FLOAT fWidth)PURE;
	STDMETHOD_(FLOAT, GetWidth) (THIS)PURE;
	STDMETHOD(SetAntialias) (THIS_ BOOL bAntialias)PURE;
	STDMETHOD_(BOOL, GetAntialias) (THIS)PURE;
	STDMETHOD(SetGLLines) (THIS_ BOOL bGLLines)PURE;
	STDMETHOD_(BOOL, GetGLLines) (THIS)PURE;
	STDMETHOD(End) (THIS)PURE;
	STDMETHOD(OnLostDevice) (THIS)PURE;
	STDMETHOD(OnResetDevice) (THIS)PURE;
};
HRESULT WINAPI D3DXCreateLine(LPDIRECT3DDEVICE9 pDevice, LPD3DXLINE *ppLine);
#endif

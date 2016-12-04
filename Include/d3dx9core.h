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

#include <d3dx9.h>
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
	STDMETHOD(QueryInterface) (THIS_ REFIID iid, LPVOID * ppv);
	STDMETHOD_(ULONG, AddRef) (THIS);
	STDMETHOD_(ULONG, Release) (THIS);
	STDMETHOD_(LPVOID, GetBufferPointer) (THIS);
	STDMETHOD_(DWORD, GetBufferSize) (THIS);
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
	STDMETHOD(QueryInterface) (THIS_ REFIID iid, LPVOID * ppv);
	STDMETHOD_(ULONG, AddRef) (THIS);
	STDMETHOD_(ULONG, Release) (THIS);
	STDMETHOD(GetDevice) (THIS_ LPDIRECT3DDEVICE9 * ppDevice);
	STDMETHOD(GetTransform) (THIS_ D3DXMATRIX * pTransform);
	STDMETHOD(SetTransform) (THIS_ CONST D3DXMATRIX * pTransform);
	STDMETHOD(SetWorldViewRH) (THIS_ CONST D3DXMATRIX * pWorld, CONST D3DXMATRIX * pView);
	STDMETHOD(SetWorldViewLH) (THIS_ CONST D3DXMATRIX * pWorld, CONST D3DXMATRIX * pView);
	STDMETHOD(Begin) (THIS_ DWORD Flags);
	STDMETHOD(Draw) (THIS_ LPDIRECT3DTEXTURE9 pTexture, CONST RECT * pSrcRect, CONST D3DXVECTOR3 * pCenter, CONST D3DXVECTOR3 * pPosition, D3DCOLOR Color);
	STDMETHOD(Flush) (THIS);
	STDMETHOD(End) (THIS);
	STDMETHOD(OnLostDevice) (THIS);
	STDMETHOD(OnResetDevice) (THIS);
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
	STDMETHOD(QueryInterface) (THIS_ REFIID iid, LPVOID * ppv);
	STDMETHOD_(ULONG, AddRef) (THIS);
	STDMETHOD_(ULONG, Release) (THIS);
	STDMETHOD(GetDevice) (THIS_ LPDIRECT3DDEVICE9 * ppDevice);
	STDMETHOD(GetDescA) (THIS_ D3DXFONT_DESCA * pDesc);
	STDMETHOD(GetDescW) (THIS_ D3DXFONT_DESCW * pDesc);
	STDMETHOD_(BOOL, GetTextMetricsA) (THIS_ TEXTMETRICA * pTextMetrics);
	STDMETHOD_(BOOL, GetTextMetricsW) (THIS_ TEXTMETRICW * pTextMetrics);
	STDMETHOD_(HDC, GetDC) (THIS);
	STDMETHOD(GetGlyphData) (THIS_ UINT Glyph, LPDIRECT3DTEXTURE9 * ppTexture, RECT * pBlackBox, POINT * pCellInc);
	STDMETHOD(PreloadCharacters) (THIS_ UINT First, UINT Last);
	STDMETHOD(PreloadGlyphs) (THIS_ UINT First, UINT Last);
	STDMETHOD(PreloadTextA) (THIS_ LPCSTR pString, INT Count);
	STDMETHOD(PreloadTextW) (THIS_ LPCWSTR pString, INT Count);
	STDMETHOD_(INT, DrawTextA) (THIS_ LPD3DXSPRITE pSprite, LPCSTR pString, INT Count, LPRECT pRect, DWORD Format, D3DCOLOR Color);
	STDMETHOD_(INT, DrawTextW) (THIS_ LPD3DXSPRITE pSprite, LPCWSTR pString, INT Count, LPRECT pRect, DWORD Format, D3DCOLOR Color);
	STDMETHOD(OnLostDevice) (THIS);
	STDMETHOD(OnResetDevice) (THIS);
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
	STDMETHOD(QueryInterface) (THIS_ REFIID iid, LPVOID * ppv);
	STDMETHOD_(ULONG, AddRef) (THIS);
	STDMETHOD_(ULONG, Release) (THIS);
	STDMETHOD(GetDevice) (THIS_ LPDIRECT3DDEVICE9 * ppDevice);
	STDMETHOD(GetDesc) (THIS_ D3DXRTS_DESC * pDesc);
	STDMETHOD(BeginScene) (THIS_ LPDIRECT3DSURFACE9 pSurface, CONST D3DVIEWPORT9 * pViewport);
	STDMETHOD(EndScene) (THIS_ DWORD MipFilter);
	STDMETHOD(OnLostDevice) (THIS);
	STDMETHOD(OnResetDevice) (THIS);
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
	STDMETHOD(QueryInterface) (THIS_ REFIID iid, LPVOID * ppv);
	STDMETHOD_(ULONG, AddRef) (THIS);
	STDMETHOD_(ULONG, Release) (THIS);
	STDMETHOD(GetDevice) (THIS_ LPDIRECT3DDEVICE9 * ppDevice);
	STDMETHOD(GetDesc) (THIS_ D3DXRTE_DESC * pDesc);
	STDMETHOD(BeginCube) (THIS_ LPDIRECT3DCUBETEXTURE9 pCubeTex);
	STDMETHOD(BeginSphere) (THIS_ LPDIRECT3DTEXTURE9 pTex);
	STDMETHOD(BeginHemisphere) (THIS_ LPDIRECT3DTEXTURE9 pTexZPos, LPDIRECT3DTEXTURE9 pTexZNeg);
	STDMETHOD(BeginParabolic) (THIS_ LPDIRECT3DTEXTURE9 pTexZPos, LPDIRECT3DTEXTURE9 pTexZNeg);
	STDMETHOD(Face) (THIS_ D3DCUBEMAP_FACES Face, DWORD MipFilter);
	STDMETHOD(End) (THIS_ DWORD MipFilter);
	STDMETHOD(OnLostDevice) (THIS);
	STDMETHOD(OnResetDevice) (THIS);
};
HRESULT WINAPI D3DXCreateRenderToEnvMap(LPDIRECT3DDEVICE9 pDevice, UINT Size, UINT MipLevels, D3DFORMAT Format, BOOL DepthStencil, D3DFORMAT DepthStencilFormat, LPD3DXRenderToEnvMap *ppRenderToEnvMap);
typedef interface ID3DXLine ID3DXLine;
typedef interface ID3DXLine *LPD3DXLINE;
DEFINE_GUID(IID_ID3DXLine, 0xd379ba7f, 0x9042, 0x4ac4, 0x9f, 0x5e, 0x58, 0x19, 0x2a, 0x4c, 0x6b, 0xd8);
#undef INTERFACE
#define INTERFACE ID3DXLine
DECLARE_INTERFACE_(ID3DXLine, IUnknown)
{
	STDMETHOD(QueryInterface) (THIS_ REFIID iid, LPVOID * ppv);
	STDMETHOD_(ULONG, AddRef) (THIS);
	STDMETHOD_(ULONG, Release) (THIS);
	STDMETHOD(GetDevice) (THIS_ LPDIRECT3DDEVICE9 * ppDevice);
	STDMETHOD(Begin) (THIS);
	STDMETHOD(Draw) (THIS_ CONST D3DXVECTOR2 * pVertexList, DWORD dwVertexListCount, D3DCOLOR Color);
	STDMETHOD(DrawTransform) (THIS_ CONST D3DXVECTOR3 * pVertexList, DWORD dwVertexListCount, CONST D3DXMATRIX * pTransform, D3DCOLOR Color);
	STDMETHOD(SetPattern) (THIS_ DWORD dwPattern);
	STDMETHOD_(DWORD, GetPattern) (THIS);
	STDMETHOD(SetPatternScale) (THIS_ FLOAT fPatternScale);
	STDMETHOD_(FLOAT, GetPatternScale) (THIS);
	STDMETHOD(SetWidth) (THIS_ FLOAT fWidth);
	STDMETHOD_(FLOAT, GetWidth) (THIS);
	STDMETHOD(SetAntialias) (THIS_ BOOL bAntialias);
	STDMETHOD_(BOOL, GetAntialias) (THIS);
	STDMETHOD(SetGLLines) (THIS_ BOOL bGLLines);
	STDMETHOD_(BOOL, GetGLLines) (THIS);
	STDMETHOD(End) (THIS);
	STDMETHOD(OnLostDevice) (THIS);
	STDMETHOD(OnResetDevice) (THIS);
};
HRESULT WINAPI D3DXCreateLine(LPDIRECT3DDEVICE9 pDevice, LPD3DXLINE *ppLine);
#endif

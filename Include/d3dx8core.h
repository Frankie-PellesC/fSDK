/*+@@file@@----------------------------------------------------------------*//*!
 \file		d3dx8core.h
 \par Description 
            Extension and update of headers for PellesC compiler suite.
 \par Project: 
            PellesC Headers extension
 \date		Created  on Fri Nov 25 21:33:26 2016
 \date		Modified on Fri Nov 25 21:33:26 2016
 \author	frankie
\*//*-@@file@@----------------------------------------------------------------*/

#if __POCC__ >= 500
#pragma once
#endif
#include <d3dx8.h>
#ifndef __D3DX8CORE_H__
#define __D3DX8CORE_H__
typedef interface ID3DXBuffer ID3DXBuffer;
typedef interface ID3DXBuffer *LPD3DXBUFFER;
DEFINE_GUID(IID_ID3DXBuffer, 0x932e6a7e, 0xc68e, 0x45dd, 0xa7, 0xbf, 0x53, 0xd1, 0x9c, 0x86, 0xdb, 0x1f);
typedef struct ID3DXBufferVtbl
{
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (ID3DXBuffer * This, REFIID riid, void **ppvObject);
	ULONG (STDMETHODCALLTYPE * AddRef) (ID3DXBuffer * This);
	ULONG (STDMETHODCALLTYPE * Release) (ID3DXBuffer * This);
    LPVOID(STDMETHODCALLTYPE * GetBufferPointer)(ID3DXBuffer * This);
    DWORD(STDMETHODCALLTYPE * GetBufferSize)(ID3DXBuffer * This);
} ID3DXBufferVtbl;
interface ID3DXBuffer
{
	CONST_VTBL struct ID3DXBufferVtbl *lpVtbl;
};
typedef interface ID3DXFont ID3DXFont;
typedef interface ID3DXFont *LPD3DXFONT;
DEFINE_GUID( IID_ID3DXFont, 0x89fad6a5, 0x24d, 0x49af, 0x8f, 0xe7, 0xf5, 0x11, 0x23, 0xb8, 0x5e, 0x25);
typedef struct ID3DXFontVtbl
{
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (ID3DXFont * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (ID3DXFont * This);
	ULONG(STDMETHODCALLTYPE * Release) (ID3DXFont * This);
    HRESULT(STDMETHODCALLTYPE * GetDevice)(ID3DXFont * This, LPDIRECT3DDEVICE8* ppDevice);
    HRESULT(STDMETHODCALLTYPE * GetLogFont)(ID3DXFont * This, LOGFONT* pLogFont);
    HRESULT(STDMETHODCALLTYPE * Begin)(ID3DXFont * This);
    INT(STDMETHODCALLTYPE * DrawTextA)(ID3DXFont * This, LPCSTR  pString, INT Count, LPRECT pRect, DWORD Format, D3DCOLOR Color);
    INT(STDMETHODCALLTYPE * DrawTextW)(ID3DXFont * This, LPCWSTR pString, INT Count, LPRECT pRect, DWORD Format, D3DCOLOR Color);
    HRESULT(STDMETHODCALLTYPE * End)(ID3DXFont * This);
    HRESULT(STDMETHODCALLTYPE * OnLostDevice)(ID3DXFont * This);
    HRESULT(STDMETHODCALLTYPE * OnResetDevice)(ID3DXFont * This);
} ID3DXFontVtbl;
interface ID3DXFont
{
	CONST_VTBL struct ID3DXFontVtbl *lpVtbl;
};
#ifndef DrawText
#ifdef UNICODE
#define DrawText DrawTextW
#else
#define DrawText DrawTextA
#endif
#endif
HRESULT WINAPI D3DXCreateFont(LPDIRECT3DDEVICE8 pDevice, HFONT hFont, LPD3DXFONT *ppFont);
HRESULT WINAPI D3DXCreateFontIndirect(LPDIRECT3DDEVICE8 pDevice, CONST LOGFONT *pLogFont, LPD3DXFONT *ppFont);
typedef interface ID3DXSprite ID3DXSprite;
typedef interface ID3DXSprite *LPD3DXSPRITE;
DEFINE_GUID( IID_ID3DXSprite, 0x13d69d15, 0xf9b0, 0x4e0f, 0xb3, 0x9e, 0xc9, 0x1e, 0xb3, 0x3f, 0x6c, 0xe7);
typedef struct ID3DXSpriteVtbl
{
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (ID3DXSprite * This, REFIID riid, void **ppvObject);
	ULONG  (STDMETHODCALLTYPE * AddRef) (ID3DXSprite * This);
	ULONG  (STDMETHODCALLTYPE * Release) (ID3DXSprite * This);
	HRESULT(STDMETHODCALLTYPE * GetDevice) (ID3DXSprite * This, LPDIRECT3DDEVICE8 * ppDevice);
	HRESULT(STDMETHODCALLTYPE * Begin) (ID3DXSprite * This);
	HRESULT(STDMETHODCALLTYPE * Draw) (ID3DXSprite * This, LPDIRECT3DTEXTURE8 pSrcTexture, CONST RECT * pSrcRect, CONST D3DXVECTOR2 * pScaling, CONST D3DXVECTOR2 * pRotationCenter, FLOAT Rotation, CONST D3DXVECTOR2 * pTranslation, D3DCOLOR Color);
	HRESULT(STDMETHODCALLTYPE * DrawTransform) (ID3DXSprite * This, LPDIRECT3DTEXTURE8 pSrcTexture, CONST RECT * pSrcRect, CONST D3DXMATRIX * pTransform, D3DCOLOR Color);
	HRESULT(STDMETHODCALLTYPE * End) (ID3DXSprite * This);
	HRESULT(STDMETHODCALLTYPE * OnLostDevice) (ID3DXSprite * This);
	HRESULT(STDMETHODCALLTYPE * OnResetDevice) (ID3DXSprite * This);
} ID3DXSpriteVtbl;
interface ID3DXSprite
{
	CONST_VTBL struct ID3DXSpriteVtbl *lpVtbl;
};
HRESULT WINAPI D3DXCreateSprite(LPDIRECT3DDEVICE8 pDevice, LPD3DXSPRITE *ppSprite);
typedef struct _D3DXRTS_DESC
{
    UINT                Width;
    UINT                Height;
    D3DFORMAT           Format;
    BOOL                DepthStencil;
    D3DFORMAT           DepthStencilFormat;
} D3DXRTS_DESC;
typedef interface ID3DXRenderToSurface ID3DXRenderToSurface;
typedef interface ID3DXRenderToSurface *LPD3DXRENDERTOSURFACE;
DEFINE_GUID( IID_ID3DXRenderToSurface, 0x82df5b90, 0xe34e, 0x496e, 0xac, 0x1c, 0x62, 0x11, 0x7a, 0x6a, 0x59, 0x13);
typedef struct ID3DXRenderToSurfaceVtbl
{
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (ID3DXRenderToSurface * This, REFIID riid, void **ppvObject);
	ULONG  (STDMETHODCALLTYPE * AddRef) (ID3DXRenderToSurface * This);
	ULONG  (STDMETHODCALLTYPE * Release) (ID3DXRenderToSurface * This);
    HRESULT(STDMETHODCALLTYPE * GetDevice)(ID3DXRenderToSurface * This, LPDIRECT3DDEVICE8* ppDevice);
    HRESULT(STDMETHODCALLTYPE * GetDesc)(ID3DXRenderToSurface * This, D3DXRTS_DESC* pDesc);
    HRESULT(STDMETHODCALLTYPE * BeginScene)(ID3DXRenderToSurface * This, LPDIRECT3DSURFACE8 pSurface, CONST D3DVIEWPORT8* pViewport);
    HRESULT(STDMETHODCALLTYPE * EndScene)(ID3DXRenderToSurface * This);
    HRESULT(STDMETHODCALLTYPE * OnLostDevice)(ID3DXRenderToSurface * This);
    HRESULT(STDMETHODCALLTYPE * OnResetDevice)(ID3DXRenderToSurface * This);
} ID3DXRenderToSurfaceVtbl;
interface ID3DXRenderToSurface
{
	CONST_VTBL struct ID3DXRenderToSurfaceVtbl *lpVtbl;
};
HRESULT WINAPI D3DXCreateRenderToSurface(LPDIRECT3DDEVICE8 pDevice, UINT Width, UINT Height, D3DFORMAT Format, BOOL DepthStencil, D3DFORMAT DepthStencilFormat, LPD3DXRENDERTOSURFACE *ppRenderToSurface);
typedef struct _D3DXRTE_DESC
{
    UINT        Size;
    D3DFORMAT   Format;
    BOOL        DepthStencil;
    D3DFORMAT   DepthStencilFormat;
} D3DXRTE_DESC;
typedef interface ID3DXRenderToEnvMap ID3DXRenderToEnvMap;
typedef interface ID3DXRenderToEnvMap *LPD3DXRenderToEnvMap;
DEFINE_GUID( IID_ID3DXRenderToEnvMap, 0x4e42c623, 0x9451, 0x44b7, 0x8c, 0x86, 0xab, 0xcc, 0xde, 0x5d, 0x52, 0xc8);
typedef struct ID3DXRenderToEnvMapVtbl
{
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (ID3DXRenderToEnvMap * This, REFIID riid, void **ppvObject);
	ULONG  (STDMETHODCALLTYPE * AddRef) (ID3DXRenderToEnvMap * This);
	ULONG  (STDMETHODCALLTYPE * Release) (ID3DXRenderToEnvMap * This);
	HRESULT(STDMETHODCALLTYPE * GetDevice) (ID3DXRenderToEnvMap * This, LPDIRECT3DDEVICE8 * ppDevice);
	HRESULT(STDMETHODCALLTYPE * GetDesc) (ID3DXRenderToEnvMap * This, D3DXRTE_DESC * pDesc);
	HRESULT(STDMETHODCALLTYPE * BeginCube) (ID3DXRenderToEnvMap * This, LPDIRECT3DCUBETEXTURE8 pCubeTex);
	HRESULT(STDMETHODCALLTYPE * BeginSphere) (ID3DXRenderToEnvMap * This, LPDIRECT3DTEXTURE8 pTex);
	HRESULT(STDMETHODCALLTYPE * BeginHemisphere) (ID3DXRenderToEnvMap * This, LPDIRECT3DTEXTURE8 pTexZPos, LPDIRECT3DTEXTURE8 pTexZNeg);
	HRESULT(STDMETHODCALLTYPE * BeginParabolic) (ID3DXRenderToEnvMap * This, LPDIRECT3DTEXTURE8 pTexZPos, LPDIRECT3DTEXTURE8 pTexZNeg);
	HRESULT(STDMETHODCALLTYPE * Face) (ID3DXRenderToEnvMap * This, D3DCUBEMAP_FACES Face);
	HRESULT(STDMETHODCALLTYPE * End) (ID3DXRenderToEnvMap * This);
	HRESULT(STDMETHODCALLTYPE * OnLostDevice) (ID3DXRenderToEnvMap * This);
	HRESULT(STDMETHODCALLTYPE * OnResetDevice) (ID3DXRenderToEnvMap * This);
} ID3DXRenderToEnvMapVtbl;
interface ID3DXRenderToEnvMap
{
	CONST_VTBL struct ID3DXRenderToEnvMapVtbl *lpVtbl;
};
HRESULT WINAPI D3DXCreateRenderToEnvMap(LPDIRECT3DDEVICE8 pDevice, UINT Size, D3DFORMAT Format, BOOL DepthStencil, D3DFORMAT DepthStencilFormat, LPD3DXRenderToEnvMap *ppRenderToEnvMap);
#define D3DXASM_DEBUG           (1 << 0)
#define D3DXASM_SKIPVALIDATION  (1 << 1)
HRESULT WINAPI D3DXAssembleShaderFromFileA(LPCSTR pSrcFile, DWORD Flags, LPD3DXBUFFER *ppConstants, LPD3DXBUFFER *ppCompiledShader, LPD3DXBUFFER *ppCompilationErrors);
HRESULT WINAPI D3DXAssembleShaderFromFileW(LPCWSTR pSrcFile, DWORD Flags, LPD3DXBUFFER *ppConstants, LPD3DXBUFFER *ppCompiledShader, LPD3DXBUFFER *ppCompilationErrors);
#ifdef UNICODE
#define D3DXAssembleShaderFromFile D3DXAssembleShaderFromFileW
#else
#define D3DXAssembleShaderFromFile D3DXAssembleShaderFromFileA
#endif
HRESULT WINAPI D3DXAssembleShaderFromResourceA(HMODULE hSrcModule, LPCSTR pSrcResource, DWORD Flags, LPD3DXBUFFER *ppConstants, LPD3DXBUFFER *ppCompiledShader, LPD3DXBUFFER *ppCompilationErrors);
HRESULT WINAPI D3DXAssembleShaderFromResourceW(HMODULE hSrcModule, LPCWSTR pSrcResource, DWORD Flags, LPD3DXBUFFER *ppConstants, LPD3DXBUFFER *ppCompiledShader, LPD3DXBUFFER *ppCompilationErrors);
#ifdef UNICODE
#define D3DXAssembleShaderFromResource D3DXAssembleShaderFromResourceW
#else
#define D3DXAssembleShaderFromResource D3DXAssembleShaderFromResourceA
#endif
HRESULT WINAPI D3DXAssembleShader(LPCVOID pSrcData, UINT SrcDataLen, DWORD Flags, LPD3DXBUFFER *ppConstants, LPD3DXBUFFER *ppCompiledShader, LPD3DXBUFFER *ppCompilationErrors);
HRESULT WINAPI D3DXGetErrorStringA(HRESULT hr, LPSTR pBuffer, UINT BufferLen);
HRESULT WINAPI D3DXGetErrorStringW(HRESULT hr, LPWSTR pBuffer, UINT BufferLen);
#ifdef UNICODE
#define D3DXGetErrorString D3DXGetErrorStringW
#else
#define D3DXGetErrorString D3DXGetErrorStringA
#endif
#endif

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
#undef INTERFACE
#define INTERFACE ID3DXBuffer
DECLARE_INTERFACE_(ID3DXBuffer, IUnknown)
{
    STDMETHOD(QueryInterface)(THIS_ REFIID iid, LPVOID *ppv);
    STDMETHOD_(ULONG, AddRef)(THIS);
    STDMETHOD_(ULONG, Release)(THIS);
    STDMETHOD_(LPVOID, GetBufferPointer)(THIS);
    STDMETHOD_(DWORD, GetBufferSize)(THIS);
};
typedef interface ID3DXFont ID3DXFont;
typedef interface ID3DXFont *LPD3DXFONT;
DEFINE_GUID( IID_ID3DXFont, 0x89fad6a5, 0x24d, 0x49af, 0x8f, 0xe7, 0xf5, 0x11, 0x23, 0xb8, 0x5e, 0x25);
#undef INTERFACE
#define INTERFACE ID3DXFont
DECLARE_INTERFACE_(ID3DXFont, IUnknown)
{
    STDMETHOD(QueryInterface)(THIS_ REFIID iid, LPVOID *ppv);
    STDMETHOD_(ULONG, AddRef)(THIS);
    STDMETHOD_(ULONG, Release)(THIS);
    STDMETHOD(GetDevice)(THIS_ LPDIRECT3DDEVICE8* ppDevice);
    STDMETHOD(GetLogFont)(THIS_ LOGFONT* pLogFont);
    STDMETHOD(Begin)(THIS);
    STDMETHOD_(INT, DrawTextA)(THIS_ LPCSTR  pString, INT Count, LPRECT pRect, DWORD Format, D3DCOLOR Color);
    STDMETHOD_(INT, DrawTextW)(THIS_ LPCWSTR pString, INT Count, LPRECT pRect, DWORD Format, D3DCOLOR Color);
    STDMETHOD(End)(THIS);
    STDMETHOD(OnLostDevice)(THIS);
    STDMETHOD(OnResetDevice)(THIS);
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
#undef INTERFACE
#define INTERFACE ID3DXSprite
DECLARE_INTERFACE_(ID3DXSprite, IUnknown)
{
	STDMETHOD(QueryInterface) (THIS_ REFIID iid, LPVOID * ppv);
	STDMETHOD_(ULONG, AddRef) (THIS);
	STDMETHOD_(ULONG, Release) (THIS);
	STDMETHOD(GetDevice) (THIS_ LPDIRECT3DDEVICE8 * ppDevice);
	STDMETHOD(Begin) (THIS);
	STDMETHOD(Draw) (THIS_ LPDIRECT3DTEXTURE8 pSrcTexture, CONST RECT * pSrcRect, CONST D3DXVECTOR2 * pScaling, CONST D3DXVECTOR2 * pRotationCenter, FLOAT Rotation, CONST D3DXVECTOR2 * pTranslation, D3DCOLOR Color);
	STDMETHOD(DrawTransform) (THIS_ LPDIRECT3DTEXTURE8 pSrcTexture, CONST RECT * pSrcRect, CONST D3DXMATRIX * pTransform, D3DCOLOR Color);
	STDMETHOD(End) (THIS);
	STDMETHOD(OnLostDevice) (THIS);
	STDMETHOD(OnResetDevice) (THIS);
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
#undef INTERFACE
#define INTERFACE ID3DXRenderToSurface
DECLARE_INTERFACE_(ID3DXRenderToSurface, IUnknown)
{
    STDMETHOD(QueryInterface)(THIS_ REFIID iid, LPVOID *ppv);
    STDMETHOD_(ULONG, AddRef)(THIS);
    STDMETHOD_(ULONG, Release)(THIS);
    STDMETHOD(GetDevice)(THIS_ LPDIRECT3DDEVICE8* ppDevice);
    STDMETHOD(GetDesc)(THIS_ D3DXRTS_DESC* pDesc);
    STDMETHOD(BeginScene)(THIS_ LPDIRECT3DSURFACE8 pSurface, CONST D3DVIEWPORT8* pViewport);
    STDMETHOD(EndScene)(THIS);
    STDMETHOD(OnLostDevice)(THIS);
    STDMETHOD(OnResetDevice)(THIS);
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
#undef INTERFACE
#define INTERFACE ID3DXRenderToEnvMap
DECLARE_INTERFACE_(ID3DXRenderToEnvMap, IUnknown)
{
	STDMETHOD(QueryInterface) (THIS_ REFIID iid, LPVOID * ppv);
	STDMETHOD_(ULONG, AddRef) (THIS);
	STDMETHOD_(ULONG, Release) (THIS);
	STDMETHOD(GetDevice) (THIS_ LPDIRECT3DDEVICE8 * ppDevice);
	STDMETHOD(GetDesc) (THIS_ D3DXRTE_DESC * pDesc);
	STDMETHOD(BeginCube) (THIS_ LPDIRECT3DCUBETEXTURE8 pCubeTex);
	STDMETHOD(BeginSphere) (THIS_ LPDIRECT3DTEXTURE8 pTex);
	STDMETHOD(BeginHemisphere) (THIS_ LPDIRECT3DTEXTURE8 pTexZPos, LPDIRECT3DTEXTURE8 pTexZNeg);
	STDMETHOD(BeginParabolic) (THIS_ LPDIRECT3DTEXTURE8 pTexZPos, LPDIRECT3DTEXTURE8 pTexZNeg);
	STDMETHOD(Face) (THIS_ D3DCUBEMAP_FACES Face);
	STDMETHOD(End) (THIS);
	STDMETHOD(OnLostDevice) (THIS);
	STDMETHOD(OnResetDevice) (THIS);
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

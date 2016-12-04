/*+@@file@@----------------------------------------------------------------*//*!
 \file		d3dx8effect.h
 \par Description 
            Extension and update of headers for PellesC compiler suite.
 \par Project: 
            PellesC Headers extension
 \date		Created  on Fri Nov 25 22:05:37 2016
 \date		Modified on Fri Nov 25 22:05:37 2016
 \author	frankie
\*//*-@@file@@----------------------------------------------------------------*/

#include <d3dx8.h>
#ifndef __D3DX8EFFECT_H__
#define __D3DX8EFFECT_H__
#if __POCC__ >= 500
#pragma once
#endif
#define D3DXFX_DONOTSAVESTATE  (1 << 0)
typedef enum _D3DXPARAMETERTYPE
{
    D3DXPT_DWORD        = 0,
    D3DXPT_FLOAT        = 1,
    D3DXPT_VECTOR       = 2,
    D3DXPT_MATRIX       = 3,
    D3DXPT_TEXTURE      = 4,
    D3DXPT_VERTEXSHADER = 5,
    D3DXPT_PIXELSHADER  = 6,
    D3DXPT_CONSTANT     = 7,
    D3DXPT_STRING       = 8,
    D3DXPT_FORCE_DWORD  = 0x7fffffff
} D3DXPARAMETERTYPE;
typedef struct _D3DXEFFECT_DESC
{
    UINT Parameters;
    UINT Techniques;
} D3DXEFFECT_DESC;
typedef struct _D3DXPARAMETER_DESC
{
    LPCSTR Name;
    LPCSTR Index;
    D3DXPARAMETERTYPE Type;
} D3DXPARAMETER_DESC;
typedef struct _D3DXTECHNIQUE_DESC
{
    LPCSTR Name;
    LPCSTR Index;
    UINT   Passes;
} D3DXTECHNIQUE_DESC;
typedef struct _D3DXPASS_DESC
{
    LPCSTR Name;
    LPCSTR Index;
} D3DXPASS_DESC;
typedef interface ID3DXEffect ID3DXEffect;
typedef interface ID3DXEffect *LPD3DXEFFECT;
DEFINE_GUID( IID_ID3DXEffect, 0x648b1ceb, 0x8d4e, 0x4d66, 0xb6, 0xfa, 0xe4, 0x49, 0x69, 0xe8, 0x2e, 0x89);
#undef INTERFACE
#define INTERFACE ID3DXEffect
DECLARE_INTERFACE_(ID3DXEffect, IUnknown)
{
    STDMETHOD(QueryInterface)(THIS_ REFIID iid, LPVOID *ppv);
    STDMETHOD_(ULONG, AddRef)(THIS);
    STDMETHOD_(ULONG, Release)(THIS);
    STDMETHOD(GetDevice)(THIS_ LPDIRECT3DDEVICE8* ppDevice);
    STDMETHOD(GetDesc)(THIS_ D3DXEFFECT_DESC* pDesc);
    STDMETHOD(GetParameterDesc)(THIS_ LPCSTR pParameter, D3DXPARAMETER_DESC* pDesc);
    STDMETHOD(GetTechniqueDesc)(THIS_ LPCSTR pTechnique, D3DXTECHNIQUE_DESC* pDesc);
    STDMETHOD(GetPassDesc)(THIS_ LPCSTR pTechnique, LPCSTR pPass, D3DXPASS_DESC* pDesc);
    STDMETHOD(FindNextValidTechnique)(THIS_ LPCSTR pTechnique, D3DXTECHNIQUE_DESC* pDesc);
    STDMETHOD(CloneEffect)(THIS_ LPDIRECT3DDEVICE8 pDevice, LPD3DXEFFECT* ppEffect);
    STDMETHOD(GetCompiledEffect)(THIS_ LPD3DXBUFFER* ppCompiledEffect);
    STDMETHOD(SetTechnique)(THIS_ LPCSTR pTechnique);
    STDMETHOD(GetTechnique)(THIS_ LPCSTR* ppTechnique);
    STDMETHOD(SetDword)(THIS_ LPCSTR pParameter, DWORD dw);
    STDMETHOD(GetDword)(THIS_ LPCSTR pParameter, DWORD* pdw); 
    STDMETHOD(SetFloat)(THIS_ LPCSTR pParameter, FLOAT f);
    STDMETHOD(GetFloat)(THIS_ LPCSTR pParameter, FLOAT* pf);    
    STDMETHOD(SetVector)(THIS_ LPCSTR pParameter, CONST D3DXVECTOR4* pVector);
    STDMETHOD(GetVector)(THIS_ LPCSTR pParameter, D3DXVECTOR4* pVector);
    STDMETHOD(SetMatrix)(THIS_ LPCSTR pParameter, CONST D3DXMATRIX* pMatrix);
    STDMETHOD(GetMatrix)(THIS_ LPCSTR pParameter, D3DXMATRIX* pMatrix);
    STDMETHOD(SetTexture)(THIS_ LPCSTR pParameter, LPDIRECT3DBASETEXTURE8 pTexture);
    STDMETHOD(GetTexture)(THIS_ LPCSTR pParameter, LPDIRECT3DBASETEXTURE8 *ppTexture);
    STDMETHOD(SetVertexShader)(THIS_ LPCSTR pParameter, DWORD Handle);
    STDMETHOD(GetVertexShader)(THIS_ LPCSTR pParameter, DWORD* pHandle);
    STDMETHOD(SetPixelShader)(THIS_ LPCSTR pParameter, DWORD Handle);
    STDMETHOD(GetPixelShader)(THIS_ LPCSTR pParameter, DWORD* pHandle);
    STDMETHOD(SetString)(THIS_ LPCSTR pParameter, LPCSTR pString);
    STDMETHOD(GetString)(THIS_ LPCSTR pParameter, LPCSTR* ppString);
    STDMETHOD_(BOOL, IsParameterUsed)(THIS_ LPCSTR pParameter);
    STDMETHOD(Validate)(THIS);
    STDMETHOD(Begin)(THIS_ UINT *pPasses, DWORD Flags);
    STDMETHOD(Pass)(THIS_ UINT Pass);
    STDMETHOD(End)(THIS);
    STDMETHOD(OnLostDevice)(THIS);
    STDMETHOD(OnResetDevice)(THIS);
};
HRESULT WINAPI D3DXCreateEffectFromFileA(LPDIRECT3DDEVICE8 pDevice, LPCSTR pSrcFile, LPD3DXEFFECT *ppEffect, LPD3DXBUFFER *ppCompilationErrors);
HRESULT WINAPI D3DXCreateEffectFromFileW(LPDIRECT3DDEVICE8 pDevice, LPCWSTR pSrcFile, LPD3DXEFFECT *ppEffect, LPD3DXBUFFER *ppCompilationErrors);
#ifdef UNICODE
#define D3DXCreateEffectFromFile D3DXCreateEffectFromFileW
#else
#define D3DXCreateEffectFromFile D3DXCreateEffectFromFileA
#endif
HRESULT WINAPI D3DXCreateEffectFromResourceA(LPDIRECT3DDEVICE8 pDevice, HMODULE hSrcModule, LPCSTR pSrcResource, LPD3DXEFFECT *ppEffect, LPD3DXBUFFER *ppCompilationErrors);
HRESULT WINAPI D3DXCreateEffectFromResourceW(LPDIRECT3DDEVICE8 pDevice, HMODULE hSrcModule, LPCWSTR pSrcResource, LPD3DXEFFECT *ppEffect, LPD3DXBUFFER *ppCompilationErrors);
#ifdef UNICODE
#define D3DXCreateEffectFromResource D3DXCreateEffectFromResourceW
#else
#define D3DXCreateEffectFromResource D3DXCreateEffectFromResourceA
#endif
HRESULT WINAPI D3DXCreateEffect(LPDIRECT3DDEVICE8 pDevice, LPCVOID pSrcData, UINT SrcDataSize, LPD3DXEFFECT *ppEffect, LPD3DXBUFFER *ppCompilationErrors);
#endif

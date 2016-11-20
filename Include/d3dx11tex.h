/*+@@file@@----------------------------------------------------------------*//*!
 \file		d3dx11tex.h
 \par Description 
            Extension and update of headers for PellesC compiler suite.
 \par Project: 
            PellesC Headers extension
 \date		Created  on Sun Nov 20 15:38:36 2016
 \date		Modified on Sun Nov 20 15:38:36 2016
 \author	frankie
\*//*-@@file@@----------------------------------------------------------------*/

#include "d3dx11.h"
#ifndef __D3DX11TEX_H__
#define __D3DX11TEX_H__
#if __POCC__ >= 500
#pragma once
#endif
typedef enum D3DX11_FILTER_FLAG
{
    D3DX11_FILTER_NONE            =   (1 << 0),
    D3DX11_FILTER_POINT           =   (2 << 0),
    D3DX11_FILTER_LINEAR          =   (3 << 0),
    D3DX11_FILTER_TRIANGLE        =   (4 << 0),
    D3DX11_FILTER_BOX             =   (5 << 0),
    D3DX11_FILTER_MIRROR_U        =   (1 << 16),
    D3DX11_FILTER_MIRROR_V        =   (2 << 16),
    D3DX11_FILTER_MIRROR_W        =   (4 << 16),
    D3DX11_FILTER_MIRROR          =   (7 << 16),
    D3DX11_FILTER_DITHER          =   (1 << 19),
    D3DX11_FILTER_DITHER_DIFFUSION=   (2 << 19),
    D3DX11_FILTER_SRGB_IN         =   (1 << 21),
    D3DX11_FILTER_SRGB_OUT        =   (2 << 21),
    D3DX11_FILTER_SRGB            =   (3 << 21),
} D3DX11_FILTER_FLAG;
typedef enum D3DX11_NORMALMAP_FLAG
{
    D3DX11_NORMALMAP_MIRROR_U          =   (1 << 16),
    D3DX11_NORMALMAP_MIRROR_V          =   (2 << 16),
    D3DX11_NORMALMAP_MIRROR            =   (3 << 16),
    D3DX11_NORMALMAP_INVERTSIGN        =   (8 << 16),
    D3DX11_NORMALMAP_COMPUTE_OCCLUSION =   (16 << 16),
} D3DX11_NORMALMAP_FLAG;
typedef enum D3DX11_CHANNEL_FLAG
{
    D3DX11_CHANNEL_RED           =    (1 << 0),
    D3DX11_CHANNEL_BLUE          =    (1 << 1),
    D3DX11_CHANNEL_GREEN         =    (1 << 2),
    D3DX11_CHANNEL_ALPHA         =    (1 << 3),
    D3DX11_CHANNEL_LUMINANCE     =    (1 << 4),
} D3DX11_CHANNEL_FLAG;
typedef enum D3DX11_IMAGE_FILE_FORMAT
{
    D3DX11_IFF_BMP         = 0,
    D3DX11_IFF_JPG         = 1,
    D3DX11_IFF_PNG         = 3,
    D3DX11_IFF_DDS         = 4,
    D3DX11_IFF_TIFF		  = 10,
    D3DX11_IFF_GIF		  = 11,
    D3DX11_IFF_WMP		  = 12,
    D3DX11_IFF_FORCE_DWORD = 0x7fffffff
} D3DX11_IMAGE_FILE_FORMAT;
typedef enum D3DX11_SAVE_TEXTURE_FLAG
{
    D3DX11_STF_USEINPUTBLOB      = 0x0001,
} D3DX11_SAVE_TEXTURE_FLAG;
typedef struct D3DX11_IMAGE_INFO
{
    UINT                        Width;
    UINT                        Height;
    UINT                        Depth;
    UINT                        ArraySize;
    UINT                        MipLevels;
    UINT                        MiscFlags;
    DXGI_FORMAT                 Format;
    D3D11_RESOURCE_DIMENSION    ResourceDimension;
    D3DX11_IMAGE_FILE_FORMAT    ImageFileFormat;
} D3DX11_IMAGE_INFO;
typedef struct D3DX11_IMAGE_LOAD_INFO
{
    UINT                       Width;
    UINT                       Height;
    UINT                       Depth;
    UINT                       FirstMipLevel;
    UINT                       MipLevels;
    D3D11_USAGE                Usage;
    UINT                       BindFlags;
    UINT                       CpuAccessFlags;
    UINT                       MiscFlags;
    DXGI_FORMAT                Format;
    UINT                       Filter;
    UINT                       MipFilter;
    D3DX11_IMAGE_INFO*         pSrcInfo;
} D3DX11_IMAGE_LOAD_INFO;
HRESULT WINAPI D3DX11GetImageInfoFromFileA(LPCSTR pSrcFile, ID3DX11ThreadPump *pPump, D3DX11_IMAGE_INFO *pSrcInfo, HRESULT *pHResult);
HRESULT WINAPI D3DX11GetImageInfoFromFileW(LPCWSTR pSrcFile, ID3DX11ThreadPump *pPump, D3DX11_IMAGE_INFO *pSrcInfo, HRESULT *pHResult);
#ifdef UNICODE
#define D3DX11GetImageInfoFromFile D3DX11GetImageInfoFromFileW
#else
#define D3DX11GetImageInfoFromFile D3DX11GetImageInfoFromFileA
#endif
HRESULT WINAPI D3DX11GetImageInfoFromResourceA(HMODULE hSrcModule, LPCSTR pSrcResource, ID3DX11ThreadPump *pPump, D3DX11_IMAGE_INFO *pSrcInfo, HRESULT *pHResult);
HRESULT WINAPI D3DX11GetImageInfoFromResourceW(HMODULE hSrcModule, LPCWSTR pSrcResource, ID3DX11ThreadPump *pPump, D3DX11_IMAGE_INFO *pSrcInfo, HRESULT *pHResult);
#ifdef UNICODE
#define D3DX11GetImageInfoFromResource D3DX11GetImageInfoFromResourceW
#else
#define D3DX11GetImageInfoFromResource D3DX11GetImageInfoFromResourceA
#endif
HRESULT WINAPI D3DX11GetImageInfoFromMemory(LPCVOID pSrcData, SIZE_T SrcDataSize, ID3DX11ThreadPump *pPump, D3DX11_IMAGE_INFO *pSrcInfo, HRESULT *pHResult);
HRESULT WINAPI D3DX11CreateShaderResourceViewFromFileA(ID3D11Device *pDevice, LPCSTR pSrcFile, D3DX11_IMAGE_LOAD_INFO *pLoadInfo, ID3DX11ThreadPump *pPump, ID3D11ShaderResourceView **ppShaderResourceView, HRESULT *pHResult);
HRESULT WINAPI D3DX11CreateShaderResourceViewFromFileW(ID3D11Device *pDevice, LPCWSTR pSrcFile, D3DX11_IMAGE_LOAD_INFO *pLoadInfo, ID3DX11ThreadPump *pPump, ID3D11ShaderResourceView **ppShaderResourceView, HRESULT *pHResult);
#ifdef UNICODE
#define D3DX11CreateShaderResourceViewFromFile D3DX11CreateShaderResourceViewFromFileW
#else
#define D3DX11CreateShaderResourceViewFromFile D3DX11CreateShaderResourceViewFromFileA
#endif
HRESULT WINAPI D3DX11CreateTextureFromFileA(ID3D11Device *pDevice, LPCSTR pSrcFile, D3DX11_IMAGE_LOAD_INFO *pLoadInfo, ID3DX11ThreadPump *pPump, ID3D11Resource **ppTexture, HRESULT *pHResult);
HRESULT WINAPI D3DX11CreateTextureFromFileW(ID3D11Device *pDevice, LPCWSTR pSrcFile, D3DX11_IMAGE_LOAD_INFO *pLoadInfo, ID3DX11ThreadPump *pPump, ID3D11Resource **ppTexture, HRESULT *pHResult);
#ifdef UNICODE
#define D3DX11CreateTextureFromFile D3DX11CreateTextureFromFileW
#else
#define D3DX11CreateTextureFromFile D3DX11CreateTextureFromFileA
#endif
HRESULT WINAPI D3DX11CreateShaderResourceViewFromResourceA(ID3D11Device *pDevice, HMODULE hSrcModule, LPCSTR pSrcResource, D3DX11_IMAGE_LOAD_INFO *pLoadInfo, ID3DX11ThreadPump *pPump, ID3D11ShaderResourceView **ppShaderResourceView, HRESULT *pHResult);
HRESULT WINAPI D3DX11CreateShaderResourceViewFromResourceW(ID3D11Device *pDevice, HMODULE hSrcModule, LPCWSTR pSrcResource, D3DX11_IMAGE_LOAD_INFO *pLoadInfo, ID3DX11ThreadPump *pPump, ID3D11ShaderResourceView **ppShaderResourceView, HRESULT *pHResult);
#ifdef UNICODE
#define D3DX11CreateShaderResourceViewFromResource D3DX11CreateShaderResourceViewFromResourceW
#else
#define D3DX11CreateShaderResourceViewFromResource D3DX11CreateShaderResourceViewFromResourceA
#endif
HRESULT WINAPI
D3DX11CreateTextureFromResourceA(ID3D11Device * pDevice, HMODULE hSrcModule, LPCSTR pSrcResource, D3DX11_IMAGE_LOAD_INFO * pLoadInfo, ID3DX11ThreadPump * pPump, ID3D11Resource ** ppTexture, HRESULT * pHResult);
HRESULT WINAPI D3DX11CreateTextureFromResourceW(ID3D11Device *pDevice, HMODULE hSrcModule, LPCWSTR pSrcResource, D3DX11_IMAGE_LOAD_INFO *pLoadInfo, ID3DX11ThreadPump *pPump, ID3D11Resource **ppTexture, HRESULT *pHResult);
#ifdef UNICODE
#define D3DX11CreateTextureFromResource D3DX11CreateTextureFromResourceW
#else
#define D3DX11CreateTextureFromResource D3DX11CreateTextureFromResourceA
#endif
HRESULT WINAPI D3DX11CreateShaderResourceViewFromMemory(ID3D11Device *pDevice, LPCVOID pSrcData, SIZE_T SrcDataSize, D3DX11_IMAGE_LOAD_INFO *pLoadInfo, ID3DX11ThreadPump *pPump, ID3D11ShaderResourceView **ppShaderResourceView, HRESULT *pHResult);
HRESULT WINAPI D3DX11CreateTextureFromMemory(ID3D11Device *pDevice, LPCVOID pSrcData, SIZE_T SrcDataSize, D3DX11_IMAGE_LOAD_INFO *pLoadInfo, ID3DX11ThreadPump *pPump, ID3D11Resource **ppTexture, HRESULT *pHResult);
typedef struct _D3DX11_TEXTURE_LOAD_INFO
{
    D3D11_BOX       *pSrcBox;
    D3D11_BOX       *pDstBox;
    UINT            SrcFirstMip;
    UINT            DstFirstMip;
    UINT            NumMips;
    UINT            SrcFirstElement;
    UINT            DstFirstElement;
    UINT            NumElements;
    UINT            Filter;
    UINT            MipFilter;
} D3DX11_TEXTURE_LOAD_INFO;
HRESULT WINAPI D3DX11LoadTextureFromTexture(ID3D11DeviceContext *pContext, ID3D11Resource *pSrcTexture, D3DX11_TEXTURE_LOAD_INFO *pLoadInfo, ID3D11Resource *pDstTexture);
HRESULT WINAPI D3DX11FilterTexture(ID3D11DeviceContext *pContext, ID3D11Resource *pTexture, UINT SrcLevel, UINT MipFilter);
HRESULT WINAPI D3DX11SaveTextureToFileA(ID3D11DeviceContext *pContext, ID3D11Resource *pSrcTexture, D3DX11_IMAGE_FILE_FORMAT DestFormat, LPCSTR pDestFile);
HRESULT WINAPI D3DX11SaveTextureToFileW(ID3D11DeviceContext *pContext, ID3D11Resource *pSrcTexture, D3DX11_IMAGE_FILE_FORMAT DestFormat, LPCWSTR pDestFile);
#ifdef UNICODE
#define D3DX11SaveTextureToFile D3DX11SaveTextureToFileW
#else
#define D3DX11SaveTextureToFile D3DX11SaveTextureToFileA
#endif
HRESULT WINAPI D3DX11SaveTextureToMemory(ID3D11DeviceContext *pContext, ID3D11Resource *pSrcTexture, D3DX11_IMAGE_FILE_FORMAT DestFormat, ID3D10Blob **ppDestBuf, UINT Flags);
HRESULT WINAPI D3DX11ComputeNormalMap(ID3D11DeviceContext *pContext, ID3D11Texture2D *pSrcTexture, UINT Flags, UINT Channel, FLOAT Amplitude, ID3D11Texture2D *pDestTexture);
HRESULT WINAPI D3DX11SHProjectCubeMap(ID3D11DeviceContext *pContext, UINT Order, ID3D11Texture2D *pCubeMap, FLOAT *pROut, FLOAT *pGOut, FLOAT *pBOut);
#endif

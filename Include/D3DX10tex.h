/*+@@file@@----------------------------------------------------------------*//*!
 \file		d3dx10tex.h
 \par Description 
            Extension and update of headers for PellesC compiler suite.
 \par Project: 
            PellesC Headers extension
 \date		Created  on Sun Jun 12 16:20:59 2016
 \date		Modified on Sun Jun 12 16:20:59 2016
 \author	frankie
\*//*-@@file@@----------------------------------------------------------------*/
#include <d3dx10.h>
#ifndef __D3DX10TEX_H__
#define __D3DX10TEX_H__
#if __POCC__ >= 500
#pragma once
#endif
typedef enum D3DX10_FILTER_FLAG
{
	D3DX10_FILTER_NONE = (1 << 0),
	D3DX10_FILTER_POINT = (2 << 0),
	D3DX10_FILTER_LINEAR = (3 << 0),
	D3DX10_FILTER_TRIANGLE = (4 << 0),
	D3DX10_FILTER_BOX = (5 << 0),
	D3DX10_FILTER_MIRROR_U = (1 << 16),
	D3DX10_FILTER_MIRROR_V = (2 << 16),
	D3DX10_FILTER_MIRROR_W = (4 << 16),
	D3DX10_FILTER_MIRROR = (7 << 16),
	D3DX10_FILTER_DITHER = (1 << 19),
	D3DX10_FILTER_DITHER_DIFFUSION = (2 << 19),
	D3DX10_FILTER_SRGB_IN = (1 << 21),
	D3DX10_FILTER_SRGB_OUT = (2 << 21),
	D3DX10_FILTER_SRGB = (3 << 21),
} D3DX10_FILTER_FLAG;
typedef enum D3DX10_NORMALMAP_FLAG
{
	D3DX10_NORMALMAP_MIRROR_U = (1 << 16),
	D3DX10_NORMALMAP_MIRROR_V = (2 << 16),
	D3DX10_NORMALMAP_MIRROR = (3 << 16),
	D3DX10_NORMALMAP_INVERTSIGN = (8 << 16),
	D3DX10_NORMALMAP_COMPUTE_OCCLUSION = (16 << 16),
} D3DX10_NORMALMAP_FLAG;
typedef enum D3DX10_CHANNEL_FLAG
{
	D3DX10_CHANNEL_RED = (1 << 0),
	D3DX10_CHANNEL_BLUE = (1 << 1),
	D3DX10_CHANNEL_GREEN = (1 << 2),
	D3DX10_CHANNEL_ALPHA = (1 << 3),
	D3DX10_CHANNEL_LUMINANCE = (1 << 4),
} D3DX10_CHANNEL_FLAG;
typedef enum D3DX10_IMAGE_FILE_FORMAT
{
	D3DX10_IFF_BMP = 0,
	D3DX10_IFF_JPG = 1,
	D3DX10_IFF_PNG = 3,
	D3DX10_IFF_DDS = 4,
	D3DX10_IFF_TIFF = 10,
	D3DX10_IFF_GIF = 11,
	D3DX10_IFF_WMP = 12,
	D3DX10_IFF_FORCE_DWORD = 0x7fffffff
} D3DX10_IMAGE_FILE_FORMAT;
typedef enum D3DX10_SAVE_TEXTURE_FLAG
{
	D3DX10_STF_USEINPUTBLOB = 0x0001,
} D3DX10_SAVE_TEXTURE_FLAG;
typedef struct D3DX10_IMAGE_INFO
{
	UINT Width;
	UINT Height;
	UINT Depth;
	UINT ArraySize;
	UINT MipLevels;
	UINT MiscFlags;
	DXGI_FORMAT Format;
	D3D10_RESOURCE_DIMENSION ResourceDimension;
	D3DX10_IMAGE_FILE_FORMAT ImageFileFormat;
} D3DX10_IMAGE_INFO;
typedef struct D3DX10_IMAGE_LOAD_INFO
{
	UINT Width;
	UINT Height;
	UINT Depth;
	UINT FirstMipLevel;
	UINT MipLevels;
	D3D10_USAGE Usage;
	UINT BindFlags;
	UINT CpuAccessFlags;
	UINT MiscFlags;
	DXGI_FORMAT Format;
	UINT Filter;
	UINT MipFilter;
	D3DX10_IMAGE_INFO *pSrcInfo;
} D3DX10_IMAGE_LOAD_INFO;
HRESULT WINAPI D3DX10GetImageInfoFromFileA(LPCSTR pSrcFile, ID3DX10ThreadPump *pPump, D3DX10_IMAGE_INFO *pSrcInfo, HRESULT *pHResult);
HRESULT WINAPI D3DX10GetImageInfoFromFileW(LPCWSTR pSrcFile, ID3DX10ThreadPump *pPump, D3DX10_IMAGE_INFO *pSrcInfo, HRESULT *pHResult);
#ifdef UNICODE
#define D3DX10GetImageInfoFromFile D3DX10GetImageInfoFromFileW
#else
#define D3DX10GetImageInfoFromFile D3DX10GetImageInfoFromFileA
#endif
HRESULT WINAPI D3DX10GetImageInfoFromResourceA(HMODULE hSrcModule, LPCSTR pSrcResource, ID3DX10ThreadPump *pPump, D3DX10_IMAGE_INFO *pSrcInfo, HRESULT *pHResult);
HRESULT WINAPI D3DX10GetImageInfoFromResourceW(HMODULE hSrcModule, LPCWSTR pSrcResource, ID3DX10ThreadPump *pPump, D3DX10_IMAGE_INFO *pSrcInfo, HRESULT *pHResult);
#ifdef UNICODE
#define D3DX10GetImageInfoFromResource D3DX10GetImageInfoFromResourceW
#else
#define D3DX10GetImageInfoFromResource D3DX10GetImageInfoFromResourceA
#endif
HRESULT WINAPI D3DX10GetImageInfoFromMemory(LPCVOID pSrcData, SIZE_T SrcDataSize, ID3DX10ThreadPump *pPump, D3DX10_IMAGE_INFO *pSrcInfo, HRESULT *pHResult);
HRESULT WINAPI D3DX10CreateShaderResourceViewFromFileA(ID3D10Device *pDevice, LPCSTR pSrcFile, D3DX10_IMAGE_LOAD_INFO *pLoadInfo, ID3DX10ThreadPump *pPump, ID3D10ShaderResourceView **ppShaderResourceView, HRESULT *pHResult);
HRESULT WINAPI D3DX10CreateShaderResourceViewFromFileW(ID3D10Device *pDevice, LPCWSTR pSrcFile, D3DX10_IMAGE_LOAD_INFO *pLoadInfo, ID3DX10ThreadPump *pPump, ID3D10ShaderResourceView **ppShaderResourceView, HRESULT *pHResult);
#ifdef UNICODE
#define D3DX10CreateShaderResourceViewFromFile D3DX10CreateShaderResourceViewFromFileW
#else
#define D3DX10CreateShaderResourceViewFromFile D3DX10CreateShaderResourceViewFromFileA
#endif
HRESULT WINAPI D3DX10CreateTextureFromFileA(ID3D10Device *pDevice, LPCSTR pSrcFile, D3DX10_IMAGE_LOAD_INFO *pLoadInfo, ID3DX10ThreadPump *pPump, ID3D10Resource **ppTexture, HRESULT *pHResult);
HRESULT WINAPI D3DX10CreateTextureFromFileW(ID3D10Device *pDevice, LPCWSTR pSrcFile, D3DX10_IMAGE_LOAD_INFO *pLoadInfo, ID3DX10ThreadPump *pPump, ID3D10Resource **ppTexture, HRESULT *pHResult);
#ifdef UNICODE
#define D3DX10CreateTextureFromFile D3DX10CreateTextureFromFileW
#else
#define D3DX10CreateTextureFromFile D3DX10CreateTextureFromFileA
#endif
HRESULT WINAPI D3DX10CreateShaderResourceViewFromResourceA(ID3D10Device *pDevice, HMODULE hSrcModule, LPCSTR pSrcResource, D3DX10_IMAGE_LOAD_INFO *pLoadInfo, ID3DX10ThreadPump *pPump, ID3D10ShaderResourceView **ppShaderResourceView, HRESULT *pHResult);
HRESULT WINAPI D3DX10CreateShaderResourceViewFromResourceW(ID3D10Device *pDevice, HMODULE hSrcModule, LPCWSTR pSrcResource, D3DX10_IMAGE_LOAD_INFO *pLoadInfo, ID3DX10ThreadPump *pPump, ID3D10ShaderResourceView **ppShaderResourceView, HRESULT *pHResult);
#ifdef UNICODE
#define D3DX10CreateShaderResourceViewFromResource D3DX10CreateShaderResourceViewFromResourceW
#else
#define D3DX10CreateShaderResourceViewFromResource D3DX10CreateShaderResourceViewFromResourceA
#endif
HRESULT WINAPI D3DX10CreateTextureFromResourceA(ID3D10Device *pDevice, HMODULE hSrcModule, LPCSTR pSrcResource, D3DX10_IMAGE_LOAD_INFO *pLoadInfo, ID3DX10ThreadPump *pPump, ID3D10Resource **ppTexture, HRESULT *pHResult);
HRESULT WINAPI D3DX10CreateTextureFromResourceW(ID3D10Device *pDevice, HMODULE hSrcModule, LPCWSTR pSrcResource, D3DX10_IMAGE_LOAD_INFO *pLoadInfo, ID3DX10ThreadPump *pPump, ID3D10Resource **ppTexture, HRESULT *pHResult);
#ifdef UNICODE
#define D3DX10CreateTextureFromResource D3DX10CreateTextureFromResourceW
#else
#define D3DX10CreateTextureFromResource D3DX10CreateTextureFromResourceA
#endif
HRESULT WINAPI D3DX10CreateShaderResourceViewFromMemory(ID3D10Device *pDevice, LPCVOID pSrcData, SIZE_T SrcDataSize, D3DX10_IMAGE_LOAD_INFO *pLoadInfo, ID3DX10ThreadPump *pPump, ID3D10ShaderResourceView **ppShaderResourceView, HRESULT *pHResult);
HRESULT WINAPI D3DX10CreateTextureFromMemory(ID3D10Device *pDevice, LPCVOID pSrcData, SIZE_T SrcDataSize, D3DX10_IMAGE_LOAD_INFO *pLoadInfo, ID3DX10ThreadPump *pPump, ID3D10Resource **ppTexture, HRESULT *pHResult);
typedef struct _D3DX10_TEXTURE_LOAD_INFO
{
	D3D10_BOX *pSrcBox;
	D3D10_BOX *pDstBox;
	UINT SrcFirstMip;
	UINT DstFirstMip;
	UINT NumMips;
	UINT SrcFirstElement;
	UINT DstFirstElement;
	UINT NumElements;
	UINT Filter;
	UINT MipFilter;
} D3DX10_TEXTURE_LOAD_INFO;
HRESULT WINAPI D3DX10LoadTextureFromTexture(ID3D10Resource *pSrcTexture, D3DX10_TEXTURE_LOAD_INFO *pLoadInfo, ID3D10Resource *pDstTexture);
HRESULT WINAPI D3DX10FilterTexture(ID3D10Resource *pTexture, UINT SrcLevel, UINT MipFilter);
HRESULT WINAPI D3DX10SaveTextureToFileA(ID3D10Resource *pSrcTexture, D3DX10_IMAGE_FILE_FORMAT DestFormat, LPCSTR pDestFile);
HRESULT WINAPI D3DX10SaveTextureToFileW(ID3D10Resource *pSrcTexture, D3DX10_IMAGE_FILE_FORMAT DestFormat, LPCWSTR pDestFile);
#ifdef UNICODE
#define D3DX10SaveTextureToFile D3DX10SaveTextureToFileW
#else
#define D3DX10SaveTextureToFile D3DX10SaveTextureToFileA
#endif
HRESULT WINAPI D3DX10SaveTextureToMemory(ID3D10Resource *pSrcTexture, D3DX10_IMAGE_FILE_FORMAT DestFormat, LPD3D10BLOB *ppDestBuf, UINT Flags);
HRESULT WINAPI D3DX10ComputeNormalMap(ID3D10Texture2D *pSrcTexture, UINT Flags, UINT Channel, FLOAT Amplitude, ID3D10Texture2D *pDestTexture);
HRESULT WINAPI D3DX10SHProjectCubeMap(UINT Order, ID3D10Texture2D * pCubeMap, FLOAT * pROut, FLOAT * pGOut, FLOAT * pBOut);
#endif

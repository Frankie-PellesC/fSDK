/*+@@file@@----------------------------------------------------------------*//*!
 \file		d3dx8tex.h
 \par Description 
            Extension and update of headers for PellesC compiler suite.
 \par Project: 
            PellesC Headers extension
 \date		Created  on Fri Nov 25 21:56:07 2016
 \date		Modified on Fri Nov 25 21:56:07 2016
 \author	frankie
\*//*-@@file@@----------------------------------------------------------------*/

#include <d3dx8.h>
#ifndef __D3DX8TEX_H__
#define __D3DX8TEX_H__
#if __POCC__ >= 500
#pragma once
#endif
#define D3DX_FILTER_NONE            (1 << 0)
#define D3DX_FILTER_POINT           (2 << 0)
#define D3DX_FILTER_LINEAR          (3 << 0)
#define D3DX_FILTER_TRIANGLE        (4 << 0)
#define D3DX_FILTER_BOX             (5 << 0)
#define D3DX_FILTER_MIRROR_U        (1 << 16)
#define D3DX_FILTER_MIRROR_V        (2 << 16)
#define D3DX_FILTER_MIRROR_W        (4 << 16)
#define D3DX_FILTER_MIRROR          (7 << 16)
#define D3DX_FILTER_DITHER          (8 << 16)
#define D3DX_NORMALMAP_MIRROR_U     (1 << 16)
#define D3DX_NORMALMAP_MIRROR_V     (2 << 16)
#define D3DX_NORMALMAP_MIRROR       (3 << 16)
#define D3DX_NORMALMAP_INVERTSIGN   (8 << 16)
#define D3DX_NORMALMAP_COMPUTE_OCCLUSION (16 << 16)
#define D3DX_CHANNEL_RED            (1 << 0)
#define D3DX_CHANNEL_BLUE           (1 << 1)
#define D3DX_CHANNEL_GREEN          (1 << 2)
#define D3DX_CHANNEL_ALPHA          (1 << 3)
#define D3DX_CHANNEL_LUMINANCE      (1 << 4)
typedef enum _D3DXIMAGE_FILEFORMAT
{
    D3DXIFF_BMP         = 0,
    D3DXIFF_JPG         = 1,
    D3DXIFF_TGA         = 2,
    D3DXIFF_PNG         = 3,
    D3DXIFF_DDS         = 4,
    D3DXIFF_PPM         = 5,
    D3DXIFF_DIB         = 6,
    D3DXIFF_FORCE_DWORD = 0x7fffffff
} D3DXIMAGE_FILEFORMAT;
typedef VOID (*LPD3DXFILL2D)(D3DXVECTOR4 *pOut, D3DXVECTOR2 *pTexCoord, D3DXVECTOR2 *pTexelSize, LPVOID pData);
typedef VOID (*LPD3DXFILL3D)(D3DXVECTOR4 *pOut, D3DXVECTOR3 *pTexCoord, D3DXVECTOR3 *pTexelSize, LPVOID pData);
typedef struct _D3DXIMAGE_INFO
{
    UINT                    Width;
    UINT                    Height;
    UINT                    Depth;
    UINT                    MipLevels;
    D3DFORMAT               Format;
    D3DRESOURCETYPE         ResourceType;
    D3DXIMAGE_FILEFORMAT    ImageFileFormat;
} D3DXIMAGE_INFO;
HRESULT WINAPI D3DXGetImageInfoFromFileA(LPCSTR pSrcFile, D3DXIMAGE_INFO *pSrcInfo);
HRESULT WINAPI D3DXGetImageInfoFromFileW(LPCWSTR pSrcFile, D3DXIMAGE_INFO *pSrcInfo);
#ifdef UNICODE
#define D3DXGetImageInfoFromFile D3DXGetImageInfoFromFileW
#else
#define D3DXGetImageInfoFromFile D3DXGetImageInfoFromFileA
#endif
HRESULT WINAPI D3DXGetImageInfoFromResourceA(HMODULE hSrcModule, LPCSTR pSrcResource, D3DXIMAGE_INFO *pSrcInfo);
HRESULT WINAPI D3DXGetImageInfoFromResourceW(HMODULE hSrcModule, LPCWSTR pSrcResource, D3DXIMAGE_INFO *pSrcInfo);
#ifdef UNICODE
#define D3DXGetImageInfoFromResource D3DXGetImageInfoFromResourceW
#else
#define D3DXGetImageInfoFromResource D3DXGetImageInfoFromResourceA
#endif
HRESULT WINAPI D3DXGetImageInfoFromFileInMemory(LPCVOID pSrcData, UINT SrcDataSize, D3DXIMAGE_INFO *pSrcInfo);
HRESULT WINAPI D3DXLoadSurfaceFromFileA(LPDIRECT3DSURFACE8 pDestSurface, CONST PALETTEENTRY *pDestPalette, CONST RECT *pDestRect, LPCSTR pSrcFile, CONST RECT *pSrcRect, DWORD Filter, D3DCOLOR ColorKey, D3DXIMAGE_INFO *pSrcInfo);
HRESULT WINAPI D3DXLoadSurfaceFromFileW(LPDIRECT3DSURFACE8 pDestSurface, CONST PALETTEENTRY *pDestPalette, CONST RECT *pDestRect, LPCWSTR pSrcFile, CONST RECT *pSrcRect, DWORD Filter, D3DCOLOR ColorKey, D3DXIMAGE_INFO *pSrcInfo);
#ifdef UNICODE
#define D3DXLoadSurfaceFromFile D3DXLoadSurfaceFromFileW
#else
#define D3DXLoadSurfaceFromFile D3DXLoadSurfaceFromFileA
#endif
HRESULT WINAPI D3DXLoadSurfaceFromResourceA(LPDIRECT3DSURFACE8 pDestSurface, CONST PALETTEENTRY *pDestPalette, CONST RECT *pDestRect, HMODULE hSrcModule, LPCSTR pSrcResource, CONST RECT *pSrcRect, DWORD Filter, D3DCOLOR ColorKey, D3DXIMAGE_INFO *pSrcInfo);
HRESULT WINAPI D3DXLoadSurfaceFromResourceW(LPDIRECT3DSURFACE8 pDestSurface, CONST PALETTEENTRY *pDestPalette, CONST RECT *pDestRect, HMODULE hSrcModule, LPCWSTR pSrcResource, CONST RECT *pSrcRect, DWORD Filter, D3DCOLOR ColorKey, D3DXIMAGE_INFO *pSrcInfo);
#ifdef UNICODE
#define D3DXLoadSurfaceFromResource D3DXLoadSurfaceFromResourceW
#else
#define D3DXLoadSurfaceFromResource D3DXLoadSurfaceFromResourceA
#endif
HRESULT WINAPI D3DXLoadSurfaceFromFileInMemory(LPDIRECT3DSURFACE8 pDestSurface, CONST PALETTEENTRY *pDestPalette, CONST RECT *pDestRect, LPCVOID pSrcData, UINT SrcDataSize, CONST RECT *pSrcRect, DWORD Filter, D3DCOLOR ColorKey, D3DXIMAGE_INFO *pSrcInfo);
HRESULT WINAPI D3DXLoadSurfaceFromSurface(LPDIRECT3DSURFACE8 pDestSurface, CONST PALETTEENTRY *pDestPalette, CONST RECT *pDestRect, LPDIRECT3DSURFACE8 pSrcSurface, CONST PALETTEENTRY *pSrcPalette, CONST RECT *pSrcRect, DWORD Filter, D3DCOLOR ColorKey);
HRESULT WINAPI D3DXLoadSurfaceFromMemory(LPDIRECT3DSURFACE8 pDestSurface, CONST PALETTEENTRY *pDestPalette, CONST RECT *pDestRect, LPCVOID pSrcMemory, D3DFORMAT SrcFormat, UINT SrcPitch, CONST PALETTEENTRY *pSrcPalette, CONST RECT *pSrcRect, DWORD Filter, D3DCOLOR ColorKey);
HRESULT WINAPI D3DXSaveSurfaceToFileA(LPCSTR pDestFile, D3DXIMAGE_FILEFORMAT DestFormat, LPDIRECT3DSURFACE8 pSrcSurface, CONST PALETTEENTRY *pSrcPalette, CONST RECT *pSrcRect);
HRESULT WINAPI D3DXSaveSurfaceToFileW(LPCWSTR pDestFile, D3DXIMAGE_FILEFORMAT DestFormat, LPDIRECT3DSURFACE8 pSrcSurface, CONST PALETTEENTRY *pSrcPalette, CONST RECT *pSrcRect);
#ifdef UNICODE
#define D3DXSaveSurfaceToFile D3DXSaveSurfaceToFileW
#else
#define D3DXSaveSurfaceToFile D3DXSaveSurfaceToFileA
#endif
HRESULT WINAPI D3DXLoadVolumeFromFileA(LPDIRECT3DVOLUME8 pDestVolume, CONST PALETTEENTRY *pDestPalette, CONST D3DBOX *pDestBox, LPCSTR pSrcFile, CONST D3DBOX *pSrcBox, DWORD Filter, D3DCOLOR ColorKey, D3DXIMAGE_INFO *pSrcInfo);
HRESULT WINAPI D3DXLoadVolumeFromFileW(LPDIRECT3DVOLUME8 pDestVolume, CONST PALETTEENTRY *pDestPalette, CONST D3DBOX *pDestBox, LPCWSTR pSrcFile, CONST D3DBOX *pSrcBox, DWORD Filter, D3DCOLOR ColorKey, D3DXIMAGE_INFO *pSrcInfo);
#ifdef UNICODE
#define D3DXLoadVolumeFromFile D3DXLoadVolumeFromFileW
#else
#define D3DXLoadVolumeFromFile D3DXLoadVolumeFromFileA
#endif
HRESULT WINAPI D3DXLoadVolumeFromResourceA(LPDIRECT3DVOLUME8 pDestVolume, CONST PALETTEENTRY *pDestPalette, CONST D3DBOX *pDestBox, HMODULE hSrcModule, LPCSTR pSrcResource, CONST D3DBOX *pSrcBox, DWORD Filter, D3DCOLOR ColorKey, D3DXIMAGE_INFO *pSrcInfo);
HRESULT WINAPI D3DXLoadVolumeFromResourceW(LPDIRECT3DVOLUME8 pDestVolume, CONST PALETTEENTRY *pDestPalette, CONST D3DBOX *pDestBox, HMODULE hSrcModule, LPCWSTR pSrcResource, CONST D3DBOX *pSrcBox, DWORD Filter, D3DCOLOR ColorKey, D3DXIMAGE_INFO *pSrcInfo);
#ifdef UNICODE
#define D3DXLoadVolumeFromResource D3DXLoadVolumeFromResourceW
#else
#define D3DXLoadVolumeFromResource D3DXLoadVolumeFromResourceA
#endif
HRESULT WINAPI D3DXLoadVolumeFromFileInMemory(LPDIRECT3DVOLUME8 pDestVolume, CONST PALETTEENTRY *pDestPalette, CONST D3DBOX *pDestBox, LPCVOID pSrcData, UINT SrcDataSize, CONST D3DBOX *pSrcBox, DWORD Filter, D3DCOLOR ColorKey, D3DXIMAGE_INFO *pSrcInfo);
HRESULT WINAPI D3DXLoadVolumeFromVolume(LPDIRECT3DVOLUME8 pDestVolume, CONST PALETTEENTRY *pDestPalette, CONST D3DBOX *pDestBox, LPDIRECT3DVOLUME8 pSrcVolume, CONST PALETTEENTRY *pSrcPalette, CONST D3DBOX *pSrcBox, DWORD Filter, D3DCOLOR ColorKey);
HRESULT WINAPI D3DXLoadVolumeFromMemory(LPDIRECT3DVOLUME8 pDestVolume, CONST PALETTEENTRY *pDestPalette, CONST D3DBOX *pDestBox, LPCVOID pSrcMemory, D3DFORMAT SrcFormat, UINT SrcRowPitch, UINT SrcSlicePitch, CONST PALETTEENTRY *pSrcPalette, CONST D3DBOX *pSrcBox, DWORD Filter, D3DCOLOR ColorKey);
HRESULT WINAPI D3DXSaveVolumeToFileA(LPCSTR pDestFile, D3DXIMAGE_FILEFORMAT DestFormat, LPDIRECT3DVOLUME8 pSrcVolume, CONST PALETTEENTRY *pSrcPalette, CONST D3DBOX *pSrcBox);
HRESULT WINAPI D3DXSaveVolumeToFileW(LPCWSTR pDestFile, D3DXIMAGE_FILEFORMAT DestFormat, LPDIRECT3DVOLUME8 pSrcVolume, CONST PALETTEENTRY *pSrcPalette, CONST D3DBOX *pSrcBox);
#ifdef UNICODE
#define D3DXSaveVolumeToFile D3DXSaveVolumeToFileW
#else
#define D3DXSaveVolumeToFile D3DXSaveVolumeToFileA
#endif
HRESULT WINAPI D3DXCheckTextureRequirements(LPDIRECT3DDEVICE8 pDevice, UINT *pWidth, UINT *pHeight, UINT *pNumMipLevels, DWORD Usage, D3DFORMAT *pFormat, D3DPOOL Pool);
HRESULT WINAPI D3DXCheckCubeTextureRequirements(LPDIRECT3DDEVICE8 pDevice, UINT *pSize, UINT *pNumMipLevels, DWORD Usage, D3DFORMAT *pFormat, D3DPOOL Pool);
HRESULT WINAPI D3DXCheckVolumeTextureRequirements(LPDIRECT3DDEVICE8 pDevice, UINT *pWidth, UINT *pHeight, UINT *pDepth, UINT *pNumMipLevels, DWORD Usage, D3DFORMAT *pFormat, D3DPOOL Pool);
HRESULT WINAPI D3DXCreateTexture(LPDIRECT3DDEVICE8 pDevice, UINT Width, UINT Height, UINT MipLevels, DWORD Usage, D3DFORMAT Format, D3DPOOL Pool, LPDIRECT3DTEXTURE8 *ppTexture);
HRESULT WINAPI D3DXCreateCubeTexture(LPDIRECT3DDEVICE8 pDevice, UINT Size, UINT MipLevels, DWORD Usage, D3DFORMAT Format, D3DPOOL Pool, LPDIRECT3DCUBETEXTURE8 *ppCubeTexture);
HRESULT WINAPI D3DXCreateVolumeTexture(LPDIRECT3DDEVICE8 pDevice, UINT Width, UINT Height, UINT Depth, UINT MipLevels, DWORD Usage, D3DFORMAT Format, D3DPOOL Pool, LPDIRECT3DVOLUMETEXTURE8 *ppVolumeTexture);
HRESULT WINAPI D3DXCreateTextureFromFileA(LPDIRECT3DDEVICE8 pDevice, LPCSTR pSrcFile, LPDIRECT3DTEXTURE8 *ppTexture);
HRESULT WINAPI D3DXCreateTextureFromFileW(LPDIRECT3DDEVICE8 pDevice, LPCWSTR pSrcFile, LPDIRECT3DTEXTURE8 *ppTexture);
#ifdef UNICODE
#define D3DXCreateTextureFromFile D3DXCreateTextureFromFileW
#else
#define D3DXCreateTextureFromFile D3DXCreateTextureFromFileA
#endif
HRESULT WINAPI D3DXCreateCubeTextureFromFileA(LPDIRECT3DDEVICE8 pDevice, LPCSTR pSrcFile, LPDIRECT3DCUBETEXTURE8 *ppCubeTexture);
HRESULT WINAPI D3DXCreateCubeTextureFromFileW(LPDIRECT3DDEVICE8 pDevice, LPCWSTR pSrcFile, LPDIRECT3DCUBETEXTURE8 *ppCubeTexture);
#ifdef UNICODE
#define D3DXCreateCubeTextureFromFile D3DXCreateCubeTextureFromFileW
#else
#define D3DXCreateCubeTextureFromFile D3DXCreateCubeTextureFromFileA
#endif
HRESULT WINAPI D3DXCreateVolumeTextureFromFileA(LPDIRECT3DDEVICE8 pDevice, LPCSTR pSrcFile, LPDIRECT3DVOLUMETEXTURE8 *ppVolumeTexture);
HRESULT WINAPI D3DXCreateVolumeTextureFromFileW(LPDIRECT3DDEVICE8 pDevice, LPCWSTR pSrcFile, LPDIRECT3DVOLUMETEXTURE8 *ppVolumeTexture);
#ifdef UNICODE
#define D3DXCreateVolumeTextureFromFile D3DXCreateVolumeTextureFromFileW
#else
#define D3DXCreateVolumeTextureFromFile D3DXCreateVolumeTextureFromFileA
#endif
HRESULT WINAPI D3DXCreateTextureFromResourceA(LPDIRECT3DDEVICE8 pDevice, HMODULE hSrcModule, LPCSTR pSrcResource, LPDIRECT3DTEXTURE8 *ppTexture);
HRESULT WINAPI D3DXCreateTextureFromResourceW(LPDIRECT3DDEVICE8 pDevice, HMODULE hSrcModule, LPCWSTR pSrcResource, LPDIRECT3DTEXTURE8 *ppTexture);
#ifdef UNICODE
#define D3DXCreateTextureFromResource D3DXCreateTextureFromResourceW
#else
#define D3DXCreateTextureFromResource D3DXCreateTextureFromResourceA
#endif
HRESULT WINAPI D3DXCreateCubeTextureFromResourceA(LPDIRECT3DDEVICE8 pDevice, HMODULE hSrcModule, LPCSTR pSrcResource, LPDIRECT3DCUBETEXTURE8 *ppCubeTexture);
HRESULT WINAPI D3DXCreateCubeTextureFromResourceW(LPDIRECT3DDEVICE8 pDevice, HMODULE hSrcModule, LPCWSTR pSrcResource, LPDIRECT3DCUBETEXTURE8 *ppCubeTexture);
#ifdef UNICODE
#define D3DXCreateCubeTextureFromResource D3DXCreateCubeTextureFromResourceW
#else
#define D3DXCreateCubeTextureFromResource D3DXCreateCubeTextureFromResourceA
#endif
HRESULT WINAPI D3DXCreateVolumeTextureFromResourceA(LPDIRECT3DDEVICE8 pDevice, HMODULE hSrcModule, LPCSTR pSrcResource, LPDIRECT3DVOLUMETEXTURE8 *ppVolumeTexture);
HRESULT WINAPI D3DXCreateVolumeTextureFromResourceW(LPDIRECT3DDEVICE8 pDevice, HMODULE hSrcModule, LPCWSTR pSrcResource, LPDIRECT3DVOLUMETEXTURE8 *ppVolumeTexture);
#ifdef UNICODE
#define D3DXCreateVolumeTextureFromResource D3DXCreateVolumeTextureFromResourceW
#else
#define D3DXCreateVolumeTextureFromResource D3DXCreateVolumeTextureFromResourceA
#endif
HRESULT WINAPI D3DXCreateTextureFromFileExA(LPDIRECT3DDEVICE8 pDevice, LPCSTR pSrcFile, UINT Width, UINT Height, UINT MipLevels, DWORD Usage, D3DFORMAT Format, D3DPOOL Pool, DWORD Filter, DWORD MipFilter, D3DCOLOR ColorKey, D3DXIMAGE_INFO *pSrcInfo, PALETTEENTRY *pPalette, LPDIRECT3DTEXTURE8 *ppTexture);
HRESULT WINAPI D3DXCreateTextureFromFileExW(LPDIRECT3DDEVICE8 pDevice, LPCWSTR pSrcFile, UINT Width, UINT Height, UINT MipLevels, DWORD Usage, D3DFORMAT Format, D3DPOOL Pool, DWORD Filter, DWORD MipFilter, D3DCOLOR ColorKey, D3DXIMAGE_INFO *pSrcInfo, PALETTEENTRY *pPalette, LPDIRECT3DTEXTURE8 *ppTexture);
#ifdef UNICODE
#define D3DXCreateTextureFromFileEx D3DXCreateTextureFromFileExW
#else
#define D3DXCreateTextureFromFileEx D3DXCreateTextureFromFileExA
#endif
HRESULT WINAPI D3DXCreateCubeTextureFromFileExA(LPDIRECT3DDEVICE8 pDevice, LPCSTR pSrcFile, UINT Size, UINT MipLevels, DWORD Usage, D3DFORMAT Format, D3DPOOL Pool, DWORD Filter, DWORD MipFilter, D3DCOLOR ColorKey, D3DXIMAGE_INFO *pSrcInfo, PALETTEENTRY *pPalette, LPDIRECT3DCUBETEXTURE8 *ppCubeTexture);
HRESULT WINAPI D3DXCreateCubeTextureFromFileExW(LPDIRECT3DDEVICE8 pDevice, LPCWSTR pSrcFile, UINT Size, UINT MipLevels, DWORD Usage, D3DFORMAT Format, D3DPOOL Pool, DWORD Filter, DWORD MipFilter, D3DCOLOR ColorKey, D3DXIMAGE_INFO *pSrcInfo, PALETTEENTRY *pPalette, LPDIRECT3DCUBETEXTURE8 *ppCubeTexture);
#ifdef UNICODE
#define D3DXCreateCubeTextureFromFileEx D3DXCreateCubeTextureFromFileExW
#else
#define D3DXCreateCubeTextureFromFileEx D3DXCreateCubeTextureFromFileExA
#endif
HRESULT WINAPI D3DXCreateVolumeTextureFromFileExA(LPDIRECT3DDEVICE8 pDevice, LPCSTR pSrcFile, UINT Width, UINT Height, UINT Depth, UINT MipLevels, DWORD Usage, D3DFORMAT Format, D3DPOOL Pool, DWORD Filter, DWORD MipFilter, D3DCOLOR ColorKey, D3DXIMAGE_INFO *pSrcInfo, PALETTEENTRY *pPalette, LPDIRECT3DVOLUMETEXTURE8 *ppVolumeTexture);
HRESULT WINAPI D3DXCreateVolumeTextureFromFileExW(LPDIRECT3DDEVICE8 pDevice, LPCWSTR pSrcFile, UINT Width, UINT Height, UINT Depth, UINT MipLevels, DWORD Usage, D3DFORMAT Format, D3DPOOL Pool, DWORD Filter, DWORD MipFilter, D3DCOLOR ColorKey, D3DXIMAGE_INFO *pSrcInfo, PALETTEENTRY *pPalette, LPDIRECT3DVOLUMETEXTURE8 *ppVolumeTexture);
#ifdef UNICODE
#define D3DXCreateVolumeTextureFromFileEx D3DXCreateVolumeTextureFromFileExW
#else
#define D3DXCreateVolumeTextureFromFileEx D3DXCreateVolumeTextureFromFileExA
#endif
HRESULT WINAPI D3DXCreateTextureFromResourceExA(LPDIRECT3DDEVICE8 pDevice, HMODULE hSrcModule, LPCSTR pSrcResource, UINT Width, UINT Height, UINT MipLevels, DWORD Usage, D3DFORMAT Format, D3DPOOL Pool, DWORD Filter, DWORD MipFilter, D3DCOLOR ColorKey, D3DXIMAGE_INFO *pSrcInfo, PALETTEENTRY *pPalette, LPDIRECT3DTEXTURE8 *ppTexture);
HRESULT WINAPI D3DXCreateTextureFromResourceExW(LPDIRECT3DDEVICE8 pDevice, HMODULE hSrcModule, LPCWSTR pSrcResource, UINT Width, UINT Height, UINT MipLevels, DWORD Usage, D3DFORMAT Format, D3DPOOL Pool, DWORD Filter, DWORD MipFilter, D3DCOLOR ColorKey, D3DXIMAGE_INFO *pSrcInfo, PALETTEENTRY *pPalette, LPDIRECT3DTEXTURE8 *ppTexture);
#ifdef UNICODE
#define D3DXCreateTextureFromResourceEx D3DXCreateTextureFromResourceExW
#else
#define D3DXCreateTextureFromResourceEx D3DXCreateTextureFromResourceExA
#endif
HRESULT WINAPI D3DXCreateCubeTextureFromResourceExA(LPDIRECT3DDEVICE8 pDevice, HMODULE hSrcModule, LPCSTR pSrcResource, UINT Size, UINT MipLevels, DWORD Usage, D3DFORMAT Format, D3DPOOL Pool, DWORD Filter, DWORD MipFilter, D3DCOLOR ColorKey, D3DXIMAGE_INFO *pSrcInfo, PALETTEENTRY *pPalette, LPDIRECT3DCUBETEXTURE8 *ppCubeTexture);
HRESULT WINAPI D3DXCreateCubeTextureFromResourceExW(LPDIRECT3DDEVICE8 pDevice, HMODULE hSrcModule, LPCWSTR pSrcResource, UINT Size, UINT MipLevels, DWORD Usage, D3DFORMAT Format, D3DPOOL Pool, DWORD Filter, DWORD MipFilter, D3DCOLOR ColorKey, D3DXIMAGE_INFO *pSrcInfo, PALETTEENTRY *pPalette, LPDIRECT3DCUBETEXTURE8 *ppCubeTexture);
#ifdef UNICODE
#define D3DXCreateCubeTextureFromResourceEx D3DXCreateCubeTextureFromResourceExW
#else
#define D3DXCreateCubeTextureFromResourceEx D3DXCreateCubeTextureFromResourceExA
#endif
HRESULT WINAPI D3DXCreateVolumeTextureFromResourceExA(LPDIRECT3DDEVICE8 pDevice, HMODULE hSrcModule, LPCSTR pSrcResource, UINT Width, UINT Height, UINT Depth, UINT MipLevels, DWORD Usage, D3DFORMAT Format, D3DPOOL Pool, DWORD Filter, DWORD MipFilter, D3DCOLOR ColorKey, D3DXIMAGE_INFO *pSrcInfo, PALETTEENTRY *pPalette, LPDIRECT3DVOLUMETEXTURE8 *ppVolumeTexture);
HRESULT WINAPI D3DXCreateVolumeTextureFromResourceExW(LPDIRECT3DDEVICE8 pDevice, HMODULE hSrcModule, LPCWSTR pSrcResource, UINT Width, UINT Height, UINT Depth, UINT MipLevels, DWORD Usage, D3DFORMAT Format, D3DPOOL Pool, DWORD Filter, DWORD MipFilter, D3DCOLOR ColorKey, D3DXIMAGE_INFO *pSrcInfo, PALETTEENTRY *pPalette, LPDIRECT3DVOLUMETEXTURE8 *ppVolumeTexture);
#ifdef UNICODE
#define D3DXCreateVolumeTextureFromResourceEx D3DXCreateVolumeTextureFromResourceExW
#else
#define D3DXCreateVolumeTextureFromResourceEx D3DXCreateVolumeTextureFromResourceExA
#endif
HRESULT WINAPI D3DXCreateTextureFromFileInMemory(LPDIRECT3DDEVICE8 pDevice, LPCVOID pSrcData, UINT SrcDataSize, LPDIRECT3DTEXTURE8 *ppTexture);
HRESULT WINAPI D3DXCreateCubeTextureFromFileInMemory(LPDIRECT3DDEVICE8 pDevice, LPCVOID pSrcData, UINT SrcDataSize, LPDIRECT3DCUBETEXTURE8 *ppCubeTexture);
HRESULT WINAPI D3DXCreateVolumeTextureFromFileInMemory(LPDIRECT3DDEVICE8 pDevice, LPCVOID pSrcData, UINT SrcDataSize, LPDIRECT3DVOLUMETEXTURE8 *ppVolumeTexture);
HRESULT WINAPI D3DXCreateTextureFromFileInMemoryEx(LPDIRECT3DDEVICE8 pDevice, LPCVOID pSrcData, UINT SrcDataSize, UINT Width, UINT Height, UINT MipLevels, DWORD Usage, D3DFORMAT Format, D3DPOOL Pool, DWORD Filter, DWORD MipFilter, D3DCOLOR ColorKey, D3DXIMAGE_INFO *pSrcInfo, PALETTEENTRY *pPalette, LPDIRECT3DTEXTURE8 *ppTexture);
HRESULT WINAPI D3DXCreateCubeTextureFromFileInMemoryEx(LPDIRECT3DDEVICE8 pDevice, LPCVOID pSrcData, UINT SrcDataSize, UINT Size, UINT MipLevels, DWORD Usage, D3DFORMAT Format, D3DPOOL Pool, DWORD Filter, DWORD MipFilter, D3DCOLOR ColorKey, D3DXIMAGE_INFO *pSrcInfo, PALETTEENTRY *pPalette, LPDIRECT3DCUBETEXTURE8 *ppCubeTexture);
HRESULT WINAPI D3DXCreateVolumeTextureFromFileInMemoryEx(LPDIRECT3DDEVICE8 pDevice, LPCVOID pSrcData, UINT SrcDataSize, UINT Width, UINT Height, UINT Depth, UINT MipLevels, DWORD Usage, D3DFORMAT Format, D3DPOOL Pool, DWORD Filter, DWORD MipFilter, D3DCOLOR ColorKey, D3DXIMAGE_INFO *pSrcInfo, PALETTEENTRY *pPalette, LPDIRECT3DVOLUMETEXTURE8 *ppVolumeTexture);
HRESULT WINAPI D3DXSaveTextureToFileA(LPCSTR pDestFile, D3DXIMAGE_FILEFORMAT DestFormat, LPDIRECT3DBASETEXTURE8 pSrcTexture, CONST PALETTEENTRY *pSrcPalette);
HRESULT WINAPI D3DXSaveTextureToFileW(LPCWSTR pDestFile, D3DXIMAGE_FILEFORMAT DestFormat, LPDIRECT3DBASETEXTURE8 pSrcTexture, CONST PALETTEENTRY *pSrcPalette);
#ifdef UNICODE
#define D3DXSaveTextureToFile D3DXSaveTextureToFileW
#else
#define D3DXSaveTextureToFile D3DXSaveTextureToFileA
#endif
HRESULT WINAPI D3DXFilterTexture(LPDIRECT3DBASETEXTURE8 pBaseTexture, CONST PALETTEENTRY *pPalette, UINT SrcLevel, DWORD Filter);
#define D3DXFilterCubeTexture D3DXFilterTexture
#define D3DXFilterVolumeTexture D3DXFilterTexture
HRESULT WINAPI D3DXFillTexture(LPDIRECT3DTEXTURE8 pTexture, LPD3DXFILL2D pFunction, LPVOID pData);
HRESULT WINAPI D3DXFillCubeTexture(LPDIRECT3DCUBETEXTURE8 pCubeTexture, LPD3DXFILL3D pFunction, LPVOID pData);
HRESULT WINAPI D3DXFillVolumeTexture(LPDIRECT3DVOLUMETEXTURE8 pVolumeTexture, LPD3DXFILL3D pFunction, LPVOID pData);
HRESULT WINAPI D3DXComputeNormalMap(LPDIRECT3DTEXTURE8 pTexture, LPDIRECT3DTEXTURE8 pSrcTexture, CONST PALETTEENTRY *pSrcPalette, DWORD Flags, DWORD Channel, FLOAT Amplitude);
#endif

/*+@@file@@----------------------------------------------------------------*//*!
 \file		dxva2swdev.h
 \par Description 
            Extension and update of headers for PellesC compiler suite.
 \par Project: 
            PellesC Headers extension
 \date		Created  on Wed Jul  6 17:46:47 2016
 \date		Modified on Wed Jul  6 17:46:47 2016
 \author	frankie
\*//*-@@file@@----------------------------------------------------------------*/

#ifndef __inc_dxva2SWDev_h
#define __inc_dxva2SWDev_h
#if __POCC__ >= 500
#pragma once
#endif
typedef enum _DXVA2_SampleFlags
{
    DXVA2_SampleFlag_Palette_Changed         = 0x00000001,
    DXVA2_SampleFlag_SrcRect_Changed         = 0x00000002,
    DXVA2_SampleFlag_DstRect_Changed         = 0x00000004,
    DXVA2_SampleFlag_ColorData_Changed       = 0x00000008,
    DXVA2_SampleFlag_PlanarAlpha_Changed     = 0x00000010,
    DXVA2_SampleFlag_RFF                     = 0x00010000,
    DXVA2_SampleFlag_TFF                     = 0x00020000,
    DXVA2_SampleFlag_RFF_TFF_Present         = 0x00040000,
    DXVA2_SampleFlagsMask                    = 0xFFFF001F
} DXVA2_SampleFlags;
typedef enum _DXVA2_DestinationFlags
{
    DXVA2_DestinationFlag_Background_Changed = 0x00000001,
    DXVA2_DestinationFlag_TargetRect_Changed = 0x00000002,
    DXVA2_DestinationFlag_ColorData_Changed  = 0x00000004,
    DXVA2_DestinationFlag_Alpha_Changed      = 0x00000008,
    DXVA2_DestinationFlag_RFF                = 0x00010000,
    DXVA2_DestinationFlag_TFF                = 0x00020000,
    DXVA2_DestinationFlag_RFF_TFF_Present    = 0x00040000,
    DXVA2_DestinationFlagMask                = 0xFFFF000F
} DXVA2_DestinationFlags;
typedef struct _DXVA2_VIDEOSAMPLE
{
    REFERENCE_TIME           Start;
    REFERENCE_TIME           End;
    DXVA2_ExtendedFormat     SampleFormat;
    UINT                     SampleFlags;
    VOID*                    SrcResource;
    RECT                     SrcRect;
    RECT                     DstRect;
    DXVA2_AYUVSample8        Pal[16];
    DXVA2_Fixed32            PlanarAlpha;
} DXVA2_VIDEOSAMPLE;
typedef struct _DXVA2_VIDEOPROCESSBLT
{
    REFERENCE_TIME           TargetFrame;
    RECT                     TargetRect;
    SIZE                     ConstrictionSize;
    UINT                     StreamingFlags;
    DXVA2_AYUVSample16       BackgroundColor;
    DXVA2_ExtendedFormat     DestFormat;
    UINT                     DestFlags;
    DXVA2_ProcAmpValues      ProcAmpValues;
    DXVA2_Fixed32            Alpha;
    DXVA2_FilterValues       NoiseFilterLuma;
    DXVA2_FilterValues       NoiseFilterChroma;
    DXVA2_FilterValues       DetailFilterLuma;
    DXVA2_FilterValues       DetailFilterChroma;
    DXVA2_VIDEOSAMPLE*       pSrcSurfaces;
    UINT                     NumSrcSurfaces;
} DXVA2_VIDEOPROCESSBLT;
#if defined(_D3D9_H_) || defined(_d3d9P_H_)
typedef HRESULT(CALLBACK *PDXVA2SW_GETVIDEOPROCESSORRENDERTARGETCOUNT) (const DXVA2_VideoDesc *pVideoDesc, UINT *pCount);
typedef HRESULT(CALLBACK *PDXVA2SW_GETVIDEOPROCESSORRENDERTARGETS) (const DXVA2_VideoDesc *pVideoDesc, UINT Count, D3DFORMAT *pFormats);
typedef HRESULT(CALLBACK *PDXVA2SW_GETVIDEOPROCESSORCAPS) (const DXVA2_VideoDesc *pVideoDesc, D3DFORMAT RenderTargetFormat, DXVA2_VideoProcessorCaps *pCaps);
typedef HRESULT(CALLBACK *PDXVA2SW_GETVIDEOPROCESSORSUBSTREAMFORMATCOUNT) (const DXVA2_VideoDesc *pVideoDesc, D3DFORMAT RenderTargetFormat, UINT *pCount);
typedef HRESULT(CALLBACK *PDXVA2SW_GETVIDEOPROCESSORSUBSTREAMFORMATS) (const DXVA2_VideoDesc *pVideoDesc, D3DFORMAT RenderTargetFormat, UINT Count, D3DFORMAT *pFormats);
typedef HRESULT(CALLBACK *PDXVA2SW_GETPROCAMPRANGE) (const DXVA2_VideoDesc *pVideoDesc, D3DFORMAT RenderTargetFormat, UINT ProcAmpCap, DXVA2_ValueRange *pRange);
typedef HRESULT(CALLBACK *PDXVA2SW_GETFILTERPROPERTYRANGE) (const DXVA2_VideoDesc *pVideoDesc, D3DFORMAT RenderTargetFormat, UINT FilterSetting, DXVA2_ValueRange *pRange);
typedef HRESULT(CALLBACK *PDXVA2SW_CREATEVIDEOPROCESSDEVICE) (IDirect3DDevice9 *pD3DD9, const DXVA2_VideoDesc *pVideoDesc, D3DFORMAT RenderTargetFormat, UINT MaxSubStreams, HANDLE *phDevice);
typedef HRESULT(CALLBACK *PDXVA2SW_DESTROYVIDEOPROCESSDEVICE) (HANDLE hDevice);
typedef HRESULT(CALLBACK *PDXVA2SW_VIDEOPROCESSBEGINFRAME) (HANDLE hDevice);
typedef HRESULT(CALLBACK *PDXVA2SW_VIDEOPROCESSENDFRAME) (HANDLE hDevice, HANDLE *pHandleComplete);
typedef HRESULT(CALLBACK *PDXVA2SW_VIDEOPROCESSSETRENDERTARGET) (HANDLE hDevice, IDirect3DSurface9 *pRenderTarget);
typedef HRESULT(CALLBACK *PDXVA2SW_VIDEOPROCESSBLT) (HANDLE hDevice, const DXVA2_VIDEOPROCESSBLT *pBlt);
typedef struct _DXVA2SW_CALLBACKS
{
    UINT                                           Size;
    PDXVA2SW_GETVIDEOPROCESSORRENDERTARGETCOUNT    GetVideoProcessorRenderTargetCount;
    PDXVA2SW_GETVIDEOPROCESSORRENDERTARGETS        GetVideoProcessorRenderTargets;
    PDXVA2SW_GETVIDEOPROCESSORCAPS                 GetVideoProcessorCaps;
    PDXVA2SW_GETVIDEOPROCESSORSUBSTREAMFORMATCOUNT GetVideoProcessorSubStreamFormatCount;
    PDXVA2SW_GETVIDEOPROCESSORSUBSTREAMFORMATS     GetVideoProcessorSubStreamFormats;
    PDXVA2SW_GETPROCAMPRANGE                       GetProcAmpRange;
    PDXVA2SW_GETFILTERPROPERTYRANGE                GetFilterPropertyRange;
    PDXVA2SW_CREATEVIDEOPROCESSDEVICE              CreateVideoProcessDevice;
    PDXVA2SW_DESTROYVIDEOPROCESSDEVICE             DestroyVideoProcessDevice;
    PDXVA2SW_VIDEOPROCESSBEGINFRAME                VideoProcessBeginFrame;
    PDXVA2SW_VIDEOPROCESSENDFRAME                  VideoProcessEndFrame;
    PDXVA2SW_VIDEOPROCESSSETRENDERTARGET           VideoProcessSetRenderTarget;
    PDXVA2SW_VIDEOPROCESSBLT                       VideoProcessBlt;
} DXVA2SW_CALLBACKS, *PDXVA2SW_CALLBACKS;
#endif
#endif

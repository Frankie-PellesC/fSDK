/*+@@file@@----------------------------------------------------------------*//*!
 \file		d3d8.h
 \par Description 
            Extension and update of headers for PellesC compiler suite.
 \par Project: 
            PellesC Headers extension
 \date		Created  on Fri Nov 25 20:57:59 2016
 \date		Modified on Fri Nov 25 20:57:59 2016
 \author	frankie
\*//*-@@file@@----------------------------------------------------------------*/

#ifndef _D3D8_H_
#define _D3D8_H_
#if __POCC__ >= 500
#pragma once
#endif
#ifndef DIRECT3D_VERSION
#define DIRECT3D_VERSION         0x0800
#endif
#if(DIRECT3D_VERSION >= 0x0800)
#define D3D_SDK_VERSION 220
#include <stdlib.h>
#define COM_NO_WINDOWS_H
#include <objbase.h>
#include <windows.h>
#if !defined(HMONITOR_DECLARED) && (WINVER < 0x0500)
#define HMONITOR_DECLARED
DECLARE_HANDLE(HMONITOR);
#endif
#define D3DAPI WINAPI
#if defined( _WIN32 ) && !defined( _NO_COM)
DEFINE_GUID(IID_IDirect3D8, 0x1dd9e8da, 0x1c77, 0x4d40, 0xb0, 0xcf, 0x98, 0xfe, 0xfd, 0xff, 0x95, 0x12);
DEFINE_GUID(IID_IDirect3DDevice8, 0x7385e5df, 0x8fe8, 0x41d5, 0x86, 0xb6, 0xd7, 0xb4, 0x85, 0x47, 0xb6, 0xcf);
DEFINE_GUID(IID_IDirect3DResource8, 0x1b36bb7b, 0x9b7, 0x410a, 0xb4, 0x45, 0x7d, 0x14, 0x30, 0xd7, 0xb3, 0x3f);
DEFINE_GUID(IID_IDirect3DBaseTexture8, 0xb4211cfa, 0x51b9, 0x4a9f, 0xab, 0x78, 0xdb, 0x99, 0xb2, 0xbb, 0x67, 0x8e);
DEFINE_GUID(IID_IDirect3DTexture8, 0xe4cdd575, 0x2866, 0x4f01, 0xb1, 0x2e, 0x7e, 0xec, 0xe1, 0xec, 0x93, 0x58);
DEFINE_GUID(IID_IDirect3DCubeTexture8, 0x3ee5b968, 0x2aca, 0x4c34, 0x8b, 0xb5, 0x7e, 0x0c, 0x3d, 0x19, 0xb7, 0x50);
DEFINE_GUID(IID_IDirect3DVolumeTexture8, 0x4b8aaafa, 0x140f, 0x42ba, 0x91, 0x31, 0x59, 0x7e, 0xaf, 0xaa, 0x2e, 0xad);
DEFINE_GUID(IID_IDirect3DVertexBuffer8, 0x8aeeeac7, 0x05f9, 0x44d4, 0xb5, 0x91, 0x00, 0x0b, 0x0d, 0xf1, 0xcb, 0x95);
DEFINE_GUID(IID_IDirect3DIndexBuffer8, 0x0e689c9a, 0x053d, 0x44a0, 0x9d, 0x92, 0xdb, 0x0e, 0x3d, 0x75, 0x0f, 0x86);
DEFINE_GUID(IID_IDirect3DSurface8, 0xb96eebca, 0xb326, 0x4ea5, 0x88, 0x2f, 0x2f, 0xf5, 0xba, 0xe0, 0x21, 0xdd);
DEFINE_GUID(IID_IDirect3DVolume8, 0xbd7349f5, 0x14f1, 0x42e4, 0x9c, 0x79, 0x97, 0x23, 0x80, 0xdb, 0x40, 0xc0);
DEFINE_GUID(IID_IDirect3DSwapChain8, 0x928c088b, 0x76b9, 0x4c6b, 0xa5, 0x36, 0xa5, 0x90, 0x85, 0x38, 0x76, 0xcd);
#endif

typedef interface IDirect3D8                IDirect3D8;
typedef interface IDirect3DDevice8          IDirect3DDevice8;
typedef interface IDirect3DResource8        IDirect3DResource8;
typedef interface IDirect3DBaseTexture8     IDirect3DBaseTexture8;
typedef interface IDirect3DTexture8         IDirect3DTexture8;
typedef interface IDirect3DVolumeTexture8   IDirect3DVolumeTexture8;
typedef interface IDirect3DCubeTexture8     IDirect3DCubeTexture8;
typedef interface IDirect3DVertexBuffer8    IDirect3DVertexBuffer8;
typedef interface IDirect3DIndexBuffer8     IDirect3DIndexBuffer8;
typedef interface IDirect3DSurface8         IDirect3DSurface8;
typedef interface IDirect3DVolume8          IDirect3DVolume8;
typedef interface IDirect3DSwapChain8       IDirect3DSwapChain8;
#include <d3d8types.h>
#include <d3d8caps.h>
IDirect3D8 * WINAPI Direct3DCreate8(UINT SDKVersion);
typedef struct IDirect3D8Vtbl
{
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IDirect3D8 * This, REFIID riid, void **ppvObject);
	ULONG  (STDMETHODCALLTYPE * AddRef) (IDirect3D8 * This);
	ULONG  (STDMETHODCALLTYPE * Release) (IDirect3D8 * This);
    HRESULT(STDMETHODCALLTYPE * RegisterSoftwareDevice)(IDirect3D8 * This, void* pInitializeFunction);
    UINT   (STDMETHODCALLTYPE * GetAdapterCount)(IDirect3D8 * This);
    HRESULT(STDMETHODCALLTYPE * GetAdapterIdentifier)(IDirect3D8 * This, UINT Adapter,DWORD Flags,D3DADAPTER_IDENTIFIER8* pIdentifier);
    UINT   (STDMETHODCALLTYPE * GetAdapterModeCount)(IDirect3D8 * This, UINT Adapter);
    HRESULT(STDMETHODCALLTYPE * EnumAdapterModes)(IDirect3D8 * This, UINT Adapter,UINT Mode,D3DDISPLAYMODE* pMode);
    HRESULT(STDMETHODCALLTYPE * GetAdapterDisplayMode)(IDirect3D8 * This, UINT Adapter,D3DDISPLAYMODE* pMode);
    HRESULT(STDMETHODCALLTYPE * CheckDeviceType)(IDirect3D8 * This, UINT Adapter,D3DDEVTYPE CheckType,D3DFORMAT DisplayFormat,D3DFORMAT BackBufferFormat,BOOL Windowed);
    HRESULT(STDMETHODCALLTYPE * CheckDeviceFormat)(IDirect3D8 * This, UINT Adapter,D3DDEVTYPE DeviceType,D3DFORMAT AdapterFormat,DWORD Usage,D3DRESOURCETYPE RType,D3DFORMAT CheckFormat);
    HRESULT(STDMETHODCALLTYPE * CheckDeviceMultiSampleType)(IDirect3D8 * This, UINT Adapter,D3DDEVTYPE DeviceType,D3DFORMAT SurfaceFormat,BOOL Windowed,D3DMULTISAMPLE_TYPE MultiSampleType);
    HRESULT(STDMETHODCALLTYPE * CheckDepthStencilMatch)(IDirect3D8 * This, UINT Adapter,D3DDEVTYPE DeviceType,D3DFORMAT AdapterFormat,D3DFORMAT RenderTargetFormat,D3DFORMAT DepthStencilFormat);
    HRESULT(STDMETHODCALLTYPE * GetDeviceCaps)(IDirect3D8 * This, UINT Adapter,D3DDEVTYPE DeviceType,D3DCAPS8* pCaps);
    HMONITOR(STDMETHODCALLTYPE * GetAdapterMonitor)(IDirect3D8 * This, UINT Adapter);
    HRESULT(STDMETHODCALLTYPE * CreateDevice)(IDirect3D8 * This, UINT Adapter,D3DDEVTYPE DeviceType,HWND hFocusWindow,DWORD BehaviorFlags,D3DPRESENT_PARAMETERS* pPresentationParameters,IDirect3DDevice8** ppReturnedDeviceInterface);
} IDirect3D8Vtbl;
interface IDirect3D8
{
	CONST_VTBL struct IDirect3D8Vtbl *lpVtbl;
};
typedef struct IDirect3D8 *LPDIRECT3D8, *PDIRECT3D8;
#define IDirect3D8_QueryInterface(p,a,b) (p)->lpVtbl->QueryInterface(p,a,b)
#define IDirect3D8_AddRef(p) (p)->lpVtbl->AddRef(p)
#define IDirect3D8_Release(p) (p)->lpVtbl->Release(p)
#define IDirect3D8_RegisterSoftwareDevice(p,a) (p)->lpVtbl->RegisterSoftwareDevice(p,a)
#define IDirect3D8_GetAdapterCount(p) (p)->lpVtbl->GetAdapterCount(p)
#define IDirect3D8_GetAdapterIdentifier(p,a,b,c) (p)->lpVtbl->GetAdapterIdentifier(p,a,b,c)
#define IDirect3D8_GetAdapterModeCount(p,a) (p)->lpVtbl->GetAdapterModeCount(p,a)
#define IDirect3D8_EnumAdapterModes(p,a,b,c) (p)->lpVtbl->EnumAdapterModes(p,a,b,c)
#define IDirect3D8_GetAdapterDisplayMode(p,a,b) (p)->lpVtbl->GetAdapterDisplayMode(p,a,b)
#define IDirect3D8_CheckDeviceType(p,a,b,c,d,e) (p)->lpVtbl->CheckDeviceType(p,a,b,c,d,e)
#define IDirect3D8_CheckDeviceFormat(p,a,b,c,d,e,f) (p)->lpVtbl->CheckDeviceFormat(p,a,b,c,d,e,f)
#define IDirect3D8_CheckDeviceMultiSampleType(p,a,b,c,d,e) (p)->lpVtbl->CheckDeviceMultiSampleType(p,a,b,c,d,e)
#define IDirect3D8_CheckDepthStencilMatch(p,a,b,c,d,e) (p)->lpVtbl->CheckDepthStencilMatch(p,a,b,c,d,e)
#define IDirect3D8_GetDeviceCaps(p,a,b,c) (p)->lpVtbl->GetDeviceCaps(p,a,b,c)
#define IDirect3D8_GetAdapterMonitor(p,a) (p)->lpVtbl->GetAdapterMonitor(p,a)
#define IDirect3D8_CreateDevice(p,a,b,c,d,e,f) (p)->lpVtbl->CreateDevice(p,a,b,c,d,e,f)
typedef struct IDirect3DDevice8Vtbl
{
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IDirect3DDevice8 * This, REFIID riid, void **ppvObject);
	ULONG  (STDMETHODCALLTYPE * AddRef) (IDirect3DDevice8 * This);
	ULONG  (STDMETHODCALLTYPE * Release) (IDirect3DDevice8 * This);
    HRESULT(STDMETHODCALLTYPE * TestCooperativeLevel)(IDirect3DDevice8 * This);
    UINT   (STDMETHODCALLTYPE * GetAvailableTextureMem)(IDirect3DDevice8 * This);
    HRESULT(STDMETHODCALLTYPE * ResourceManagerDiscardBytes)(IDirect3DDevice8 * This, DWORD Bytes);
    HRESULT(STDMETHODCALLTYPE * GetDirect3D)(IDirect3DDevice8 * This, IDirect3D8** ppD3D8);
    HRESULT(STDMETHODCALLTYPE * GetDeviceCaps)(IDirect3DDevice8 * This, D3DCAPS8* pCaps);
    HRESULT(STDMETHODCALLTYPE * GetDisplayMode)(IDirect3DDevice8 * This, D3DDISPLAYMODE* pMode);
    HRESULT(STDMETHODCALLTYPE * GetCreationParameters)(IDirect3DDevice8 * This, D3DDEVICE_CREATION_PARAMETERS *pParameters);
    HRESULT(STDMETHODCALLTYPE * SetCursorProperties)(IDirect3DDevice8 * This, UINT XHotSpot,UINT YHotSpot,IDirect3DSurface8* pCursorBitmap);
    void   (STDMETHODCALLTYPE * SetCursorPosition)(IDirect3DDevice8 * This, UINT XScreenSpace,UINT YScreenSpace,DWORD Flags);
    BOOL   (STDMETHODCALLTYPE * ShowCursor)(IDirect3DDevice8 * This, BOOL bShow);
    HRESULT(STDMETHODCALLTYPE * CreateAdditionalSwapChain)(IDirect3DDevice8 * This, D3DPRESENT_PARAMETERS* pPresentationParameters,IDirect3DSwapChain8** pSwapChain);
    HRESULT(STDMETHODCALLTYPE * Reset)(IDirect3DDevice8 * This, D3DPRESENT_PARAMETERS* pPresentationParameters);
    HRESULT(STDMETHODCALLTYPE * Present)(IDirect3DDevice8 * This, CONST RECT* pSourceRect,CONST RECT* pDestRect,HWND hDestWindowOverride,CONST RGNDATA* pDirtyRegion);
    HRESULT(STDMETHODCALLTYPE * GetBackBuffer)(IDirect3DDevice8 * This, UINT BackBuffer,D3DBACKBUFFER_TYPE Type,IDirect3DSurface8** ppBackBuffer);
    HRESULT(STDMETHODCALLTYPE * GetRasterStatus)(IDirect3DDevice8 * This, D3DRASTER_STATUS* pRasterStatus);
    void   (STDMETHODCALLTYPE * SetGammaRamp)(IDirect3DDevice8 * This, DWORD Flags,CONST D3DGAMMARAMP* pRamp);
    void   (STDMETHODCALLTYPE * GetGammaRamp)(IDirect3DDevice8 * This, D3DGAMMARAMP* pRamp);
    HRESULT(STDMETHODCALLTYPE * CreateTexture)(IDirect3DDevice8 * This, UINT Width,UINT Height,UINT Levels,DWORD Usage,D3DFORMAT Format,D3DPOOL Pool,IDirect3DTexture8** ppTexture);
    HRESULT(STDMETHODCALLTYPE * CreateVolumeTexture)(IDirect3DDevice8 * This, UINT Width,UINT Height,UINT Depth,UINT Levels,DWORD Usage,D3DFORMAT Format,D3DPOOL Pool,IDirect3DVolumeTexture8** ppVolumeTexture);
    HRESULT(STDMETHODCALLTYPE * CreateCubeTexture)(IDirect3DDevice8 * This, UINT EdgeLength,UINT Levels,DWORD Usage,D3DFORMAT Format,D3DPOOL Pool,IDirect3DCubeTexture8** ppCubeTexture);
    HRESULT(STDMETHODCALLTYPE * CreateVertexBuffer)(IDirect3DDevice8 * This, UINT Length,DWORD Usage,DWORD FVF,D3DPOOL Pool,IDirect3DVertexBuffer8** ppVertexBuffer);
    HRESULT(STDMETHODCALLTYPE * CreateIndexBuffer)(IDirect3DDevice8 * This, UINT Length,DWORD Usage,D3DFORMAT Format,D3DPOOL Pool,IDirect3DIndexBuffer8** ppIndexBuffer);
    HRESULT(STDMETHODCALLTYPE * CreateRenderTarget)(IDirect3DDevice8 * This, UINT Width,UINT Height,D3DFORMAT Format,D3DMULTISAMPLE_TYPE MultiSample,BOOL Lockable,IDirect3DSurface8** ppSurface);
    HRESULT(STDMETHODCALLTYPE * CreateDepthStencilSurface)(IDirect3DDevice8 * This, UINT Width,UINT Height,D3DFORMAT Format,D3DMULTISAMPLE_TYPE MultiSample,IDirect3DSurface8** ppSurface);
    HRESULT(STDMETHODCALLTYPE * CreateImageSurface)(IDirect3DDevice8 * This, UINT Width,UINT Height,D3DFORMAT Format,IDirect3DSurface8** ppSurface);
    HRESULT(STDMETHODCALLTYPE * CopyRects)(IDirect3DDevice8 * This, IDirect3DSurface8* pSourceSurface,CONST RECT* pSourceRectsArray,UINT cRects,IDirect3DSurface8* pDestinationSurface,CONST POINT* pDestPointsArray);
    HRESULT(STDMETHODCALLTYPE * UpdateTexture)(IDirect3DDevice8 * This, IDirect3DBaseTexture8* pSourceTexture,IDirect3DBaseTexture8* pDestinationTexture);
    HRESULT(STDMETHODCALLTYPE * GetFrontBuffer)(IDirect3DDevice8 * This, IDirect3DSurface8* pDestSurface);
    HRESULT(STDMETHODCALLTYPE * SetRenderTarget)(IDirect3DDevice8 * This, IDirect3DSurface8* pRenderTarget,IDirect3DSurface8* pNewZStencil);
    HRESULT(STDMETHODCALLTYPE * GetRenderTarget)(IDirect3DDevice8 * This, IDirect3DSurface8** ppRenderTarget);
    HRESULT(STDMETHODCALLTYPE * GetDepthStencilSurface)(IDirect3DDevice8 * This, IDirect3DSurface8** ppZStencilSurface);
    HRESULT(STDMETHODCALLTYPE * BeginScene)(IDirect3DDevice8 * This);
    HRESULT(STDMETHODCALLTYPE * EndScene)(IDirect3DDevice8 * This);
    HRESULT(STDMETHODCALLTYPE * Clear)(IDirect3DDevice8 * This, DWORD Count,CONST D3DRECT* pRects,DWORD Flags,D3DCOLOR Color,float Z,DWORD Stencil);
    HRESULT(STDMETHODCALLTYPE * SetTransform)(IDirect3DDevice8 * This, D3DTRANSFORMSTATETYPE State,CONST D3DMATRIX* pMatrix);
    HRESULT(STDMETHODCALLTYPE * GetTransform)(IDirect3DDevice8 * This, D3DTRANSFORMSTATETYPE State,D3DMATRIX* pMatrix);
    HRESULT(STDMETHODCALLTYPE * MultiplyTransform)(IDirect3DDevice8 * This, D3DTRANSFORMSTATETYPE,CONST D3DMATRIX*);
    HRESULT(STDMETHODCALLTYPE * SetViewport)(IDirect3DDevice8 * This, CONST D3DVIEWPORT8* pViewport);
    HRESULT(STDMETHODCALLTYPE * GetViewport)(IDirect3DDevice8 * This, D3DVIEWPORT8* pViewport);
    HRESULT(STDMETHODCALLTYPE * SetMaterial)(IDirect3DDevice8 * This, CONST D3DMATERIAL8* pMaterial);
    HRESULT(STDMETHODCALLTYPE * GetMaterial)(IDirect3DDevice8 * This, D3DMATERIAL8* pMaterial);
    HRESULT(STDMETHODCALLTYPE * SetLight)(IDirect3DDevice8 * This, DWORD Index,CONST D3DLIGHT8*);
    HRESULT(STDMETHODCALLTYPE * GetLight)(IDirect3DDevice8 * This, DWORD Index,D3DLIGHT8*);
    HRESULT(STDMETHODCALLTYPE * LightEnable)(IDirect3DDevice8 * This, DWORD Index,BOOL Enable);
    HRESULT(STDMETHODCALLTYPE * GetLightEnable)(IDirect3DDevice8 * This, DWORD Index,BOOL* pEnable);
    HRESULT(STDMETHODCALLTYPE * SetClipPlane)(IDirect3DDevice8 * This, DWORD Index,CONST float* pPlane);
    HRESULT(STDMETHODCALLTYPE * GetClipPlane)(IDirect3DDevice8 * This, DWORD Index,float* pPlane);
    HRESULT(STDMETHODCALLTYPE * SetRenderState)(IDirect3DDevice8 * This, D3DRENDERSTATETYPE State,DWORD Value);
    HRESULT(STDMETHODCALLTYPE * GetRenderState)(IDirect3DDevice8 * This, D3DRENDERSTATETYPE State,DWORD* pValue);
    HRESULT(STDMETHODCALLTYPE * BeginStateBlock)(IDirect3DDevice8 * This);
    HRESULT(STDMETHODCALLTYPE * EndStateBlock)(IDirect3DDevice8 * This, DWORD* pToken);
    HRESULT(STDMETHODCALLTYPE * ApplyStateBlock)(IDirect3DDevice8 * This, DWORD Token);
    HRESULT(STDMETHODCALLTYPE * CaptureStateBlock)(IDirect3DDevice8 * This, DWORD Token);
    HRESULT(STDMETHODCALLTYPE * DeleteStateBlock)(IDirect3DDevice8 * This, DWORD Token);
    HRESULT(STDMETHODCALLTYPE * CreateStateBlock)(IDirect3DDevice8 * This, D3DSTATEBLOCKTYPE Type,DWORD* pToken);
    HRESULT(STDMETHODCALLTYPE * SetClipStatus)(IDirect3DDevice8 * This, CONST D3DCLIPSTATUS8* pClipStatus);
    HRESULT(STDMETHODCALLTYPE * GetClipStatus)(IDirect3DDevice8 * This, D3DCLIPSTATUS8* pClipStatus);
    HRESULT(STDMETHODCALLTYPE * GetTexture)(IDirect3DDevice8 * This, DWORD Stage,IDirect3DBaseTexture8** ppTexture);
    HRESULT(STDMETHODCALLTYPE * SetTexture)(IDirect3DDevice8 * This, DWORD Stage,IDirect3DBaseTexture8* pTexture);
    HRESULT(STDMETHODCALLTYPE * GetTextureStageState)(IDirect3DDevice8 * This, DWORD Stage,D3DTEXTURESTAGESTATETYPE Type,DWORD* pValue);
    HRESULT(STDMETHODCALLTYPE * SetTextureStageState)(IDirect3DDevice8 * This, DWORD Stage,D3DTEXTURESTAGESTATETYPE Type,DWORD Value);
    HRESULT(STDMETHODCALLTYPE * ValidateDevice)(IDirect3DDevice8 * This, DWORD* pNumPasses);
    HRESULT(STDMETHODCALLTYPE * GetInfo)(IDirect3DDevice8 * This, DWORD DevInfoID,void* pDevInfoStruct,DWORD DevInfoStructSize);
    HRESULT(STDMETHODCALLTYPE * SetPaletteEntries)(IDirect3DDevice8 * This, UINT PaletteNumber,CONST PALETTEENTRY* pEntries);
    HRESULT(STDMETHODCALLTYPE * GetPaletteEntries)(IDirect3DDevice8 * This, UINT PaletteNumber,PALETTEENTRY* pEntries);
    HRESULT(STDMETHODCALLTYPE * SetCurrentTexturePalette)(IDirect3DDevice8 * This, UINT PaletteNumber);
    HRESULT(STDMETHODCALLTYPE * GetCurrentTexturePalette)(IDirect3DDevice8 * This, UINT *PaletteNumber);
    HRESULT(STDMETHODCALLTYPE * DrawPrimitive)(IDirect3DDevice8 * This, D3DPRIMITIVETYPE PrimitiveType,UINT StartVertex,UINT PrimitiveCount);
    HRESULT(STDMETHODCALLTYPE * DrawIndexedPrimitive)(IDirect3DDevice8 * This, D3DPRIMITIVETYPE,UINT minIndex,UINT NumVertices,UINT startIndex,UINT primCount);
    HRESULT(STDMETHODCALLTYPE * DrawPrimitiveUP)(IDirect3DDevice8 * This, D3DPRIMITIVETYPE PrimitiveType,UINT PrimitiveCount,CONST void* pVertexStreamZeroData,UINT VertexStreamZeroStride);
    HRESULT(STDMETHODCALLTYPE * DrawIndexedPrimitiveUP)(IDirect3DDevice8 * This, D3DPRIMITIVETYPE PrimitiveType,UINT MinVertexIndex,UINT NumVertexIndices,UINT PrimitiveCount,CONST void* pIndexData,D3DFORMAT IndexDataFormat,CONST void* pVertexStreamZeroData,UINT VertexStreamZeroStride);
    HRESULT(STDMETHODCALLTYPE * ProcessVertices)(IDirect3DDevice8 * This, UINT SrcStartIndex,UINT DestIndex,UINT VertexCount,IDirect3DVertexBuffer8* pDestBuffer,DWORD Flags);
    HRESULT(STDMETHODCALLTYPE * CreateVertexShader)(IDirect3DDevice8 * This, CONST DWORD* pDeclaration,CONST DWORD* pFunction,DWORD* pHandle,DWORD Usage);
    HRESULT(STDMETHODCALLTYPE * SetVertexShader)(IDirect3DDevice8 * This, DWORD Handle);
    HRESULT(STDMETHODCALLTYPE * GetVertexShader)(IDirect3DDevice8 * This, DWORD* pHandle);
    HRESULT(STDMETHODCALLTYPE * DeleteVertexShader)(IDirect3DDevice8 * This, DWORD Handle);
    HRESULT(STDMETHODCALLTYPE * SetVertexShaderConstant)(IDirect3DDevice8 * This, DWORD Register,CONST void* pConstantData,DWORD ConstantCount);
    HRESULT(STDMETHODCALLTYPE * GetVertexShaderConstant)(IDirect3DDevice8 * This, DWORD Register,void* pConstantData,DWORD ConstantCount);
    HRESULT(STDMETHODCALLTYPE * GetVertexShaderDeclaration)(IDirect3DDevice8 * This, DWORD Handle,void* pData,DWORD* pSizeOfData);
    HRESULT(STDMETHODCALLTYPE * GetVertexShaderFunction)(IDirect3DDevice8 * This, DWORD Handle,void* pData,DWORD* pSizeOfData);
    HRESULT(STDMETHODCALLTYPE * SetStreamSource)(IDirect3DDevice8 * This, UINT StreamNumber,IDirect3DVertexBuffer8* pStreamData,UINT Stride);
    HRESULT(STDMETHODCALLTYPE * GetStreamSource)(IDirect3DDevice8 * This, UINT StreamNumber,IDirect3DVertexBuffer8** ppStreamData,UINT* pStride);
    HRESULT(STDMETHODCALLTYPE * SetIndices)(IDirect3DDevice8 * This, IDirect3DIndexBuffer8* pIndexData,UINT BaseVertexIndex);
    HRESULT(STDMETHODCALLTYPE * GetIndices)(IDirect3DDevice8 * This, IDirect3DIndexBuffer8** ppIndexData,UINT* pBaseVertexIndex);
    HRESULT(STDMETHODCALLTYPE * CreatePixelShader)(IDirect3DDevice8 * This, CONST DWORD* pFunction,DWORD* pHandle);
    HRESULT(STDMETHODCALLTYPE * SetPixelShader)(IDirect3DDevice8 * This, DWORD Handle);
    HRESULT(STDMETHODCALLTYPE * GetPixelShader)(IDirect3DDevice8 * This, DWORD* pHandle);
    HRESULT(STDMETHODCALLTYPE * DeletePixelShader)(IDirect3DDevice8 * This, DWORD Handle);
    HRESULT(STDMETHODCALLTYPE * SetPixelShaderConstant)(IDirect3DDevice8 * This, DWORD Register,CONST void* pConstantData,DWORD ConstantCount);
    HRESULT(STDMETHODCALLTYPE * GetPixelShaderConstant)(IDirect3DDevice8 * This, DWORD Register,void* pConstantData,DWORD ConstantCount);
    HRESULT(STDMETHODCALLTYPE * GetPixelShaderFunction)(IDirect3DDevice8 * This, DWORD Handle,void* pData,DWORD* pSizeOfData);
    HRESULT(STDMETHODCALLTYPE * DrawRectPatch)(IDirect3DDevice8 * This, UINT Handle,CONST float* pNumSegs,CONST D3DRECTPATCH_INFO* pRectPatchInfo);
    HRESULT(STDMETHODCALLTYPE * DrawTriPatch)(IDirect3DDevice8 * This, UINT Handle,CONST float* pNumSegs,CONST D3DTRIPATCH_INFO* pTriPatchInfo);
    HRESULT(STDMETHODCALLTYPE * DeletePatch)(IDirect3DDevice8 * This, UINT Handle);
} IDirect3DDevice8Vtbl;
interface IDirect3DDevice8
{
	CONST_VTBL struct IDirect3DDevice8Vtbl *lpVtbl;
};
typedef struct IDirect3DDevice8 *LPDIRECT3DDEVICE8, *PDIRECT3DDEVICE8;
#define IDirect3DDevice8_QueryInterface(p,a,b) (p)->lpVtbl->QueryInterface(p,a,b)
#define IDirect3DDevice8_AddRef(p) (p)->lpVtbl->AddRef(p)
#define IDirect3DDevice8_Release(p) (p)->lpVtbl->Release(p)
#define IDirect3DDevice8_TestCooperativeLevel(p) (p)->lpVtbl->TestCooperativeLevel(p)
#define IDirect3DDevice8_GetAvailableTextureMem(p) (p)->lpVtbl->GetAvailableTextureMem(p)
#define IDirect3DDevice8_ResourceManagerDiscardBytes(p,a) (p)->lpVtbl->ResourceManagerDiscardBytes(p,a)
#define IDirect3DDevice8_GetDirect3D(p,a) (p)->lpVtbl->GetDirect3D(p,a)
#define IDirect3DDevice8_GetDeviceCaps(p,a) (p)->lpVtbl->GetDeviceCaps(p,a)
#define IDirect3DDevice8_GetDisplayMode(p,a) (p)->lpVtbl->GetDisplayMode(p,a)
#define IDirect3DDevice8_GetCreationParameters(p,a) (p)->lpVtbl->GetCreationParameters(p,a)
#define IDirect3DDevice8_SetCursorProperties(p,a,b,c) (p)->lpVtbl->SetCursorProperties(p,a,b,c)
#define IDirect3DDevice8_SetCursorPosition(p,a,b,c) (p)->lpVtbl->SetCursorPosition(p,a,b,c)
#define IDirect3DDevice8_ShowCursor(p,a) (p)->lpVtbl->ShowCursor(p,a)
#define IDirect3DDevice8_CreateAdditionalSwapChain(p,a,b) (p)->lpVtbl->CreateAdditionalSwapChain(p,a,b)
#define IDirect3DDevice8_Reset(p,a) (p)->lpVtbl->Reset(p,a)
#define IDirect3DDevice8_Present(p,a,b,c,d) (p)->lpVtbl->Present(p,a,b,c,d)
#define IDirect3DDevice8_GetBackBuffer(p,a,b,c) (p)->lpVtbl->GetBackBuffer(p,a,b,c)
#define IDirect3DDevice8_GetRasterStatus(p,a) (p)->lpVtbl->GetRasterStatus(p,a)
#define IDirect3DDevice8_SetGammaRamp(p,a,b) (p)->lpVtbl->SetGammaRamp(p,a,b)
#define IDirect3DDevice8_GetGammaRamp(p,a) (p)->lpVtbl->GetGammaRamp(p,a)
#define IDirect3DDevice8_CreateTexture(p,a,b,c,d,e,f,g) (p)->lpVtbl->CreateTexture(p,a,b,c,d,e,f,g)
#define IDirect3DDevice8_CreateVolumeTexture(p,a,b,c,d,e,f,g,h) (p)->lpVtbl->CreateVolumeTexture(p,a,b,c,d,e,f,g,h)
#define IDirect3DDevice8_CreateCubeTexture(p,a,b,c,d,e,f) (p)->lpVtbl->CreateCubeTexture(p,a,b,c,d,e,f)
#define IDirect3DDevice8_CreateVertexBuffer(p,a,b,c,d,e) (p)->lpVtbl->CreateVertexBuffer(p,a,b,c,d,e)
#define IDirect3DDevice8_CreateIndexBuffer(p,a,b,c,d,e) (p)->lpVtbl->CreateIndexBuffer(p,a,b,c,d,e)
#define IDirect3DDevice8_CreateRenderTarget(p,a,b,c,d,e,f) (p)->lpVtbl->CreateRenderTarget(p,a,b,c,d,e,f)
#define IDirect3DDevice8_CreateDepthStencilSurface(p,a,b,c,d,e) (p)->lpVtbl->CreateDepthStencilSurface(p,a,b,c,d,e)
#define IDirect3DDevice8_CreateImageSurface(p,a,b,c,d) (p)->lpVtbl->CreateImageSurface(p,a,b,c,d)
#define IDirect3DDevice8_CopyRects(p,a,b,c,d,e) (p)->lpVtbl->CopyRects(p,a,b,c,d,e)
#define IDirect3DDevice8_UpdateTexture(p,a,b) (p)->lpVtbl->UpdateTexture(p,a,b)
#define IDirect3DDevice8_GetFrontBuffer(p,a) (p)->lpVtbl->GetFrontBuffer(p,a)
#define IDirect3DDevice8_SetRenderTarget(p,a,b) (p)->lpVtbl->SetRenderTarget(p,a,b)
#define IDirect3DDevice8_GetRenderTarget(p,a) (p)->lpVtbl->GetRenderTarget(p,a)
#define IDirect3DDevice8_GetDepthStencilSurface(p,a) (p)->lpVtbl->GetDepthStencilSurface(p,a)
#define IDirect3DDevice8_BeginScene(p) (p)->lpVtbl->BeginScene(p)
#define IDirect3DDevice8_EndScene(p) (p)->lpVtbl->EndScene(p)
#define IDirect3DDevice8_Clear(p,a,b,c,d,e,f) (p)->lpVtbl->Clear(p,a,b,c,d,e,f)
#define IDirect3DDevice8_SetTransform(p,a,b) (p)->lpVtbl->SetTransform(p,a,b)
#define IDirect3DDevice8_GetTransform(p,a,b) (p)->lpVtbl->GetTransform(p,a,b)
#define IDirect3DDevice8_MultiplyTransform(p,a,b) (p)->lpVtbl->MultiplyTransform(p,a,b)
#define IDirect3DDevice8_SetViewport(p,a) (p)->lpVtbl->SetViewport(p,a)
#define IDirect3DDevice8_GetViewport(p,a) (p)->lpVtbl->GetViewport(p,a)
#define IDirect3DDevice8_SetMaterial(p,a) (p)->lpVtbl->SetMaterial(p,a)
#define IDirect3DDevice8_GetMaterial(p,a) (p)->lpVtbl->GetMaterial(p,a)
#define IDirect3DDevice8_SetLight(p,a,b) (p)->lpVtbl->SetLight(p,a,b)
#define IDirect3DDevice8_GetLight(p,a,b) (p)->lpVtbl->GetLight(p,a,b)
#define IDirect3DDevice8_LightEnable(p,a,b) (p)->lpVtbl->LightEnable(p,a,b)
#define IDirect3DDevice8_GetLightEnable(p,a,b) (p)->lpVtbl->GetLightEnable(p,a,b)
#define IDirect3DDevice8_SetClipPlane(p,a,b) (p)->lpVtbl->SetClipPlane(p,a,b)
#define IDirect3DDevice8_GetClipPlane(p,a,b) (p)->lpVtbl->GetClipPlane(p,a,b)
#define IDirect3DDevice8_SetRenderState(p,a,b) (p)->lpVtbl->SetRenderState(p,a,b)
#define IDirect3DDevice8_GetRenderState(p,a,b) (p)->lpVtbl->GetRenderState(p,a,b)
#define IDirect3DDevice8_BeginStateBlock(p) (p)->lpVtbl->BeginStateBlock(p)
#define IDirect3DDevice8_EndStateBlock(p,a) (p)->lpVtbl->EndStateBlock(p,a)
#define IDirect3DDevice8_ApplyStateBlock(p,a) (p)->lpVtbl->ApplyStateBlock(p,a)
#define IDirect3DDevice8_CaptureStateBlock(p,a) (p)->lpVtbl->CaptureStateBlock(p,a)
#define IDirect3DDevice8_DeleteStateBlock(p,a) (p)->lpVtbl->DeleteStateBlock(p,a)
#define IDirect3DDevice8_CreateStateBlock(p,a,b) (p)->lpVtbl->CreateStateBlock(p,a,b)
#define IDirect3DDevice8_SetClipStatus(p,a) (p)->lpVtbl->SetClipStatus(p,a)
#define IDirect3DDevice8_GetClipStatus(p,a) (p)->lpVtbl->GetClipStatus(p,a)
#define IDirect3DDevice8_GetTexture(p,a,b) (p)->lpVtbl->GetTexture(p,a,b)
#define IDirect3DDevice8_SetTexture(p,a,b) (p)->lpVtbl->SetTexture(p,a,b)
#define IDirect3DDevice8_GetTextureStageState(p,a,b,c) (p)->lpVtbl->GetTextureStageState(p,a,b,c)
#define IDirect3DDevice8_SetTextureStageState(p,a,b,c) (p)->lpVtbl->SetTextureStageState(p,a,b,c)
#define IDirect3DDevice8_ValidateDevice(p,a) (p)->lpVtbl->ValidateDevice(p,a)
#define IDirect3DDevice8_GetInfo(p,a,b,c) (p)->lpVtbl->GetInfo(p,a,b,c)
#define IDirect3DDevice8_SetPaletteEntries(p,a,b) (p)->lpVtbl->SetPaletteEntries(p,a,b)
#define IDirect3DDevice8_GetPaletteEntries(p,a,b) (p)->lpVtbl->GetPaletteEntries(p,a,b)
#define IDirect3DDevice8_SetCurrentTexturePalette(p,a) (p)->lpVtbl->SetCurrentTexturePalette(p,a)
#define IDirect3DDevice8_GetCurrentTexturePalette(p,a) (p)->lpVtbl->GetCurrentTexturePalette(p,a)
#define IDirect3DDevice8_DrawPrimitive(p,a,b,c) (p)->lpVtbl->DrawPrimitive(p,a,b,c)
#define IDirect3DDevice8_DrawIndexedPrimitive(p,a,b,c,d,e) (p)->lpVtbl->DrawIndexedPrimitive(p,a,b,c,d,e)
#define IDirect3DDevice8_DrawPrimitiveUP(p,a,b,c,d) (p)->lpVtbl->DrawPrimitiveUP(p,a,b,c,d)
#define IDirect3DDevice8_DrawIndexedPrimitiveUP(p,a,b,c,d,e,f,g,h) (p)->lpVtbl->DrawIndexedPrimitiveUP(p,a,b,c,d,e,f,g,h)
#define IDirect3DDevice8_ProcessVertices(p,a,b,c,d,e) (p)->lpVtbl->ProcessVertices(p,a,b,c,d,e)
#define IDirect3DDevice8_CreateVertexShader(p,a,b,c,d) (p)->lpVtbl->CreateVertexShader(p,a,b,c,d)
#define IDirect3DDevice8_SetVertexShader(p,a) (p)->lpVtbl->SetVertexShader(p,a)
#define IDirect3DDevice8_GetVertexShader(p,a) (p)->lpVtbl->GetVertexShader(p,a)
#define IDirect3DDevice8_DeleteVertexShader(p,a) (p)->lpVtbl->DeleteVertexShader(p,a)
#define IDirect3DDevice8_SetVertexShaderConstant(p,a,b,c) (p)->lpVtbl->SetVertexShaderConstant(p,a,b,c)
#define IDirect3DDevice8_GetVertexShaderConstant(p,a,b,c) (p)->lpVtbl->GetVertexShaderConstant(p,a,b,c)
#define IDirect3DDevice8_GetVertexShaderDeclaration(p,a,b,c) (p)->lpVtbl->GetVertexShaderDeclaration(p,a,b,c)
#define IDirect3DDevice8_GetVertexShaderFunction(p,a,b,c) (p)->lpVtbl->GetVertexShaderFunction(p,a,b,c)
#define IDirect3DDevice8_SetStreamSource(p,a,b,c) (p)->lpVtbl->SetStreamSource(p,a,b,c)
#define IDirect3DDevice8_GetStreamSource(p,a,b,c) (p)->lpVtbl->GetStreamSource(p,a,b,c)
#define IDirect3DDevice8_SetIndices(p,a,b) (p)->lpVtbl->SetIndices(p,a,b)
#define IDirect3DDevice8_GetIndices(p,a,b) (p)->lpVtbl->GetIndices(p,a,b)
#define IDirect3DDevice8_CreatePixelShader(p,a,b) (p)->lpVtbl->CreatePixelShader(p,a,b)
#define IDirect3DDevice8_SetPixelShader(p,a) (p)->lpVtbl->SetPixelShader(p,a)
#define IDirect3DDevice8_GetPixelShader(p,a) (p)->lpVtbl->GetPixelShader(p,a)
#define IDirect3DDevice8_DeletePixelShader(p,a) (p)->lpVtbl->DeletePixelShader(p,a)
#define IDirect3DDevice8_SetPixelShaderConstant(p,a,b,c) (p)->lpVtbl->SetPixelShaderConstant(p,a,b,c)
#define IDirect3DDevice8_GetPixelShaderConstant(p,a,b,c) (p)->lpVtbl->GetPixelShaderConstant(p,a,b,c)
#define IDirect3DDevice8_GetPixelShaderFunction(p,a,b,c) (p)->lpVtbl->GetPixelShaderFunction(p,a,b,c)
#define IDirect3DDevice8_DrawRectPatch(p,a,b,c) (p)->lpVtbl->DrawRectPatch(p,a,b,c)
#define IDirect3DDevice8_DrawTriPatch(p,a,b,c) (p)->lpVtbl->DrawTriPatch(p,a,b,c)
#define IDirect3DDevice8_DeletePatch(p,a) (p)->lpVtbl->DeletePatch(p,a)
typedef struct IDirect3DSwapChain8Vtbl
{
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IDirect3DSwapChain8 * This, REFIID riid, void **ppvObject);
	ULONG  (STDMETHODCALLTYPE * AddRef) (IDirect3DSwapChain8 * This);
	ULONG  (STDMETHODCALLTYPE * Release) (IDirect3DSwapChain8 * This);
    HRESULT(STDMETHODCALLTYPE * Present)(IDirect3DSwapChain8 * This, CONST RECT* pSourceRect,CONST RECT* pDestRect,HWND hDestWindowOverride,CONST RGNDATA* pDirtyRegion);
    HRESULT(STDMETHODCALLTYPE * GetBackBuffer)(IDirect3DSwapChain8 * This, UINT BackBuffer,D3DBACKBUFFER_TYPE Type,IDirect3DSurface8** ppBackBuffer);
} IDirect3DSwapChain8Vtbl;
interface IDirect3DSwapChain8
{
	CONST_VTBL struct IDirect3DSwapChain8Vtbl *lpVtbl;
};
typedef struct IDirect3DSwapChain8 *LPDIRECT3DSWAPCHAIN8, *PDIRECT3DSWAPCHAIN8;
#define IDirect3DSwapChain8_QueryInterface(p,a,b) (p)->lpVtbl->QueryInterface(p,a,b)
#define IDirect3DSwapChain8_AddRef(p) (p)->lpVtbl->AddRef(p)
#define IDirect3DSwapChain8_Release(p) (p)->lpVtbl->Release(p)
#define IDirect3DSwapChain8_Present(p,a,b,c,d) (p)->lpVtbl->Present(p,a,b,c,d)
#define IDirect3DSwapChain8_GetBackBuffer(p,a,b,c) (p)->lpVtbl->GetBackBuffer(p,a,b,c)
typedef struct IDirect3DResource8Vtbl
{
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IDirect3DResource8 * This, REFIID riid, void **ppvObject);
	ULONG  (STDMETHODCALLTYPE * AddRef) (IDirect3DResource8 * This);
	ULONG  (STDMETHODCALLTYPE * Release) (IDirect3DResource8 * This);
    HRESULT(STDMETHODCALLTYPE * GetDevice)(IDirect3DResource8 * This, IDirect3DDevice8** ppDevice);
    HRESULT(STDMETHODCALLTYPE * SetPrivateData)(IDirect3DResource8 * This, REFGUID refguid,CONST void* pData,DWORD SizeOfData,DWORD Flags);
    HRESULT(STDMETHODCALLTYPE * GetPrivateData)(IDirect3DResource8 * This, REFGUID refguid,void* pData,DWORD* pSizeOfData);
    HRESULT(STDMETHODCALLTYPE * FreePrivateData)(IDirect3DResource8 * This, REFGUID refguid);
    DWORD  (STDMETHODCALLTYPE * SetPriority)(IDirect3DResource8 * This, DWORD PriorityNew);
    DWORD  (STDMETHODCALLTYPE * GetPriority)(IDirect3DResource8 * This);
    void   (STDMETHODCALLTYPE * PreLoad)(IDirect3DResource8 * This);
    D3DRESOURCETYPE(STDMETHODCALLTYPE * GetType)(IDirect3DResource8 * This);
} IDirect3DResource8Vtbl;
interface IDirect3DResource8
{
	CONST_VTBL struct IDirect3DResource8Vtbl *lpVtbl;
};
typedef struct IDirect3DResource8 *LPDIRECT3DRESOURCE8, *PDIRECT3DRESOURCE8;
#define IDirect3DResource8_QueryInterface(p,a,b) (p)->lpVtbl->QueryInterface(p,a,b)
#define IDirect3DResource8_AddRef(p) (p)->lpVtbl->AddRef(p)
#define IDirect3DResource8_Release(p) (p)->lpVtbl->Release(p)
#define IDirect3DResource8_GetDevice(p,a) (p)->lpVtbl->GetDevice(p,a)
#define IDirect3DResource8_SetPrivateData(p,a,b,c,d) (p)->lpVtbl->SetPrivateData(p,a,b,c,d)
#define IDirect3DResource8_GetPrivateData(p,a,b,c) (p)->lpVtbl->GetPrivateData(p,a,b,c)
#define IDirect3DResource8_FreePrivateData(p,a) (p)->lpVtbl->FreePrivateData(p,a)
#define IDirect3DResource8_SetPriority(p,a) (p)->lpVtbl->SetPriority(p,a)
#define IDirect3DResource8_GetPriority(p) (p)->lpVtbl->GetPriority(p)
#define IDirect3DResource8_PreLoad(p) (p)->lpVtbl->PreLoad(p)
#define IDirect3DResource8_GetType(p) (p)->lpVtbl->GetType(p)
typedef struct IDirect3DBaseTexture8Vtbl
{
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IDirect3DBaseTexture8 * This, REFIID riid, void **ppvObject);
	ULONG  (STDMETHODCALLTYPE * AddRef) (IDirect3DBaseTexture8 * This);
	ULONG  (STDMETHODCALLTYPE * Release) (IDirect3DBaseTexture8 * This);
    HRESULT(STDMETHODCALLTYPE * GetDevice)(THIS_ IDirect3DDevice8** ppDevice);
    HRESULT(STDMETHODCALLTYPE * SetPrivateData)(IDirect3DBaseTexture8 * This, REFGUID refguid,CONST void* pData,DWORD SizeOfData,DWORD Flags);
    HRESULT(STDMETHODCALLTYPE * GetPrivateData)(IDirect3DBaseTexture8 * This, REFGUID refguid,void* pData,DWORD* pSizeOfData);
    HRESULT(STDMETHODCALLTYPE * FreePrivateData)(IDirect3DBaseTexture8 * This, REFGUID refguid);
    DWORD  (STDMETHODCALLTYPE * SetPriority)(IDirect3DBaseTexture8 * This, DWORD PriorityNew);
    DWORD  (STDMETHODCALLTYPE * GetPriority)(IDirect3DBaseTexture8 * This);
    void   (STDMETHODCALLTYPE * PreLoad)(IDirect3DBaseTexture8 * This);
    D3DRESOURCETYPE(STDMETHODCALLTYPE * GetType)(IDirect3DBaseTexture8 * This);
    DWORD  (STDMETHODCALLTYPE * SetLOD)(IDirect3DBaseTexture8 * This, DWORD LODNew);
    DWORD  (STDMETHODCALLTYPE * GetLOD)(IDirect3DBaseTexture8 * This);
    DWORD  (STDMETHODCALLTYPE * GetLevelCount)(IDirect3DBaseTexture8 * This);
} IDirect3DBaseTexture8Vtbl;
interface IDirect3DBaseTexture8
{
	CONST_VTBL struct IDirect3DBaseTexture8Vtbl *lpVtbl;
};
typedef struct IDirect3DBaseTexture8 *LPDIRECT3DBASETEXTURE8, *PDIRECT3DBASETEXTURE8;
#define IDirect3DBaseTexture8_QueryInterface(p,a,b) (p)->lpVtbl->QueryInterface(p,a,b)
#define IDirect3DBaseTexture8_AddRef(p) (p)->lpVtbl->AddRef(p)
#define IDirect3DBaseTexture8_Release(p) (p)->lpVtbl->Release(p)
#define IDirect3DBaseTexture8_GetDevice(p,a) (p)->lpVtbl->GetDevice(p,a)
#define IDirect3DBaseTexture8_SetPrivateData(p,a,b,c,d) (p)->lpVtbl->SetPrivateData(p,a,b,c,d)
#define IDirect3DBaseTexture8_GetPrivateData(p,a,b,c) (p)->lpVtbl->GetPrivateData(p,a,b,c)
#define IDirect3DBaseTexture8_FreePrivateData(p,a) (p)->lpVtbl->FreePrivateData(p,a)
#define IDirect3DBaseTexture8_SetPriority(p,a) (p)->lpVtbl->SetPriority(p,a)
#define IDirect3DBaseTexture8_GetPriority(p) (p)->lpVtbl->GetPriority(p)
#define IDirect3DBaseTexture8_PreLoad(p) (p)->lpVtbl->PreLoad(p)
#define IDirect3DBaseTexture8_GetType(p) (p)->lpVtbl->GetType(p)
#define IDirect3DBaseTexture8_SetLOD(p,a) (p)->lpVtbl->SetLOD(p,a)
#define IDirect3DBaseTexture8_GetLOD(p) (p)->lpVtbl->GetLOD(p)
#define IDirect3DBaseTexture8_GetLevelCount(p) (p)->lpVtbl->GetLevelCount(p)
typedef struct IDirect3DTexture8Vtbl
{
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IDirect3DTexture8 * This, REFIID riid, void **ppvObject);
	ULONG  (STDMETHODCALLTYPE * AddRef) (IDirect3DTexture8 * This);
	ULONG  (STDMETHODCALLTYPE * Release) (IDirect3DTexture8 * This);
    HRESULT(STDMETHODCALLTYPE * GetDevice)(IDirect3DTexture8 * This, IDirect3DDevice8** ppDevice);
    HRESULT(STDMETHODCALLTYPE * SetPrivateData)(IDirect3DTexture8 * This, REFGUID refguid,CONST void* pData,DWORD SizeOfData,DWORD Flags);
    HRESULT(STDMETHODCALLTYPE * GetPrivateData)(IDirect3DTexture8 * This, REFGUID refguid,void* pData,DWORD* pSizeOfData);
    HRESULT(STDMETHODCALLTYPE * FreePrivateData)(IDirect3DTexture8 * This, REFGUID refguid);
    DWORD  (STDMETHODCALLTYPE * SetPriority)(IDirect3DTexture8 * This, DWORD PriorityNew);
    DWORD  (STDMETHODCALLTYPE * GetPriority)(IDirect3DTexture8 * This);
    void   (STDMETHODCALLTYPE * PreLoad)(IDirect3DTexture8 * This);
    D3DRESOURCETYPE(STDMETHODCALLTYPE * GetType)(IDirect3DTexture8 * This);
    DWORD  (STDMETHODCALLTYPE * SetLOD)(IDirect3DTexture8 * This, DWORD LODNew);
    DWORD  (STDMETHODCALLTYPE * GetLOD)(IDirect3DTexture8 * This);
    DWORD  (STDMETHODCALLTYPE * GetLevelCount)(IDirect3DTexture8 * This);
    HRESULT(STDMETHODCALLTYPE * GetLevelDesc)(IDirect3DTexture8 * This, UINT Level,D3DSURFACE_DESC *pDesc);
    HRESULT(STDMETHODCALLTYPE * GetSurfaceLevel)(IDirect3DTexture8 * This, UINT Level,IDirect3DSurface8** ppSurfaceLevel);
    HRESULT(STDMETHODCALLTYPE * LockRect)(IDirect3DTexture8 * This, UINT Level,D3DLOCKED_RECT* pLockedRect,CONST RECT* pRect,DWORD Flags);
    HRESULT(STDMETHODCALLTYPE * UnlockRect)(IDirect3DTexture8 * This, UINT Level);
    HRESULT(STDMETHODCALLTYPE * AddDirtyRect)(IDirect3DTexture8 * This, CONST RECT* pDirtyRect);
} IDirect3DTexture8Vtbl;
interface IDirect3DTexture8
{
	CONST_VTBL struct IDirect3DTexture8Vtbl *lpVtbl;
};
typedef struct IDirect3DTexture8 *LPDIRECT3DTEXTURE8, *PDIRECT3DTEXTURE8;
#define IDirect3DTexture8_QueryInterface(p,a,b) (p)->lpVtbl->QueryInterface(p,a,b)
#define IDirect3DTexture8_AddRef(p) (p)->lpVtbl->AddRef(p)
#define IDirect3DTexture8_Release(p) (p)->lpVtbl->Release(p)
#define IDirect3DTexture8_GetDevice(p,a) (p)->lpVtbl->GetDevice(p,a)
#define IDirect3DTexture8_SetPrivateData(p,a,b,c,d) (p)->lpVtbl->SetPrivateData(p,a,b,c,d)
#define IDirect3DTexture8_GetPrivateData(p,a,b,c) (p)->lpVtbl->GetPrivateData(p,a,b,c)
#define IDirect3DTexture8_FreePrivateData(p,a) (p)->lpVtbl->FreePrivateData(p,a)
#define IDirect3DTexture8_SetPriority(p,a) (p)->lpVtbl->SetPriority(p,a)
#define IDirect3DTexture8_GetPriority(p) (p)->lpVtbl->GetPriority(p)
#define IDirect3DTexture8_PreLoad(p) (p)->lpVtbl->PreLoad(p)
#define IDirect3DTexture8_GetType(p) (p)->lpVtbl->GetType(p)
#define IDirect3DTexture8_SetLOD(p,a) (p)->lpVtbl->SetLOD(p,a)
#define IDirect3DTexture8_GetLOD(p) (p)->lpVtbl->GetLOD(p)
#define IDirect3DTexture8_GetLevelCount(p) (p)->lpVtbl->GetLevelCount(p)
#define IDirect3DTexture8_GetLevelDesc(p,a,b) (p)->lpVtbl->GetLevelDesc(p,a,b)
#define IDirect3DTexture8_GetSurfaceLevel(p,a,b) (p)->lpVtbl->GetSurfaceLevel(p,a,b)
#define IDirect3DTexture8_LockRect(p,a,b,c,d) (p)->lpVtbl->LockRect(p,a,b,c,d)
#define IDirect3DTexture8_UnlockRect(p,a) (p)->lpVtbl->UnlockRect(p,a)
#define IDirect3DTexture8_AddDirtyRect(p,a) (p)->lpVtbl->AddDirtyRect(p,a)
typedef struct IDirect3DVolumeTexture8Vtbl
{
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IDirect3DVolumeTexture8 * This, REFIID riid, void **ppvObject);
	ULONG  (STDMETHODCALLTYPE * AddRef) (IDirect3DVolumeTexture8 * This);
	ULONG  (STDMETHODCALLTYPE * Release) (IDirect3DVolumeTexture8 * This);
    HRESULT(STDMETHODCALLTYPE * GetDevice)(IDirect3DVolumeTexture8 * This, IDirect3DDevice8** ppDevice);
    HRESULT(STDMETHODCALLTYPE * SetPrivateData)(IDirect3DVolumeTexture8 * This, REFGUID refguid,CONST void* pData,DWORD SizeOfData,DWORD Flags);
    HRESULT(STDMETHODCALLTYPE * GetPrivateData)(IDirect3DVolumeTexture8 * This, REFGUID refguid,void* pData,DWORD* pSizeOfData);
    HRESULT(STDMETHODCALLTYPE * FreePrivateData)(IDirect3DVolumeTexture8 * This, REFGUID refguid);
    DWORD  (STDMETHODCALLTYPE * SetPriority)(IDirect3DVolumeTexture8 * This, DWORD PriorityNew);
    DWORD  (STDMETHODCALLTYPE * GetPriority)(IDirect3DVolumeTexture8 * This);
    void   (STDMETHODCALLTYPE * PreLoad)(IDirect3DVolumeTexture8 * This);
    D3DRESOURCETYPE(STDMETHODCALLTYPE * GetType)(IDirect3DVolumeTexture8 * This);
    DWORD  (STDMETHODCALLTYPE * SetLOD)(IDirect3DVolumeTexture8 * This, DWORD LODNew);
    DWORD  (STDMETHODCALLTYPE * GetLOD)(IDirect3DVolumeTexture8 * This);
    DWORD  (STDMETHODCALLTYPE * GetLevelCount)(IDirect3DVolumeTexture8 * This);
    HRESULT(STDMETHODCALLTYPE * GetLevelDesc)(IDirect3DVolumeTexture8 * This, UINT Level,D3DVOLUME_DESC *pDesc);
    HRESULT(STDMETHODCALLTYPE * GetVolumeLevel)(IDirect3DVolumeTexture8 * This, UINT Level,IDirect3DVolume8** ppVolumeLevel);
    HRESULT(STDMETHODCALLTYPE * LockBox)(IDirect3DVolumeTexture8 * This, UINT Level,D3DLOCKED_BOX* pLockedVolume,CONST D3DBOX* pBox,DWORD Flags);
    HRESULT(STDMETHODCALLTYPE * UnlockBox)(IDirect3DVolumeTexture8 * This, UINT Level);
    HRESULT(STDMETHODCALLTYPE * AddDirtyBox)(IDirect3DVolumeTexture8 * This, CONST D3DBOX* pDirtyBox);
} IDirect3DVolumeTexture8Vtbl;
interface IDirect3DVolumeTexture8
{
	CONST_VTBL struct IDirect3DVolumeTexture8Vtbl *lpVtbl;
};
typedef struct IDirect3DVolumeTexture8 *LPDIRECT3DVOLUMETEXTURE8, *PDIRECT3DVOLUMETEXTURE8;
#define IDirect3DVolumeTexture8_QueryInterface(p,a,b) (p)->lpVtbl->QueryInterface(p,a,b)
#define IDirect3DVolumeTexture8_AddRef(p) (p)->lpVtbl->AddRef(p)
#define IDirect3DVolumeTexture8_Release(p) (p)->lpVtbl->Release(p)
#define IDirect3DVolumeTexture8_GetDevice(p,a) (p)->lpVtbl->GetDevice(p,a)
#define IDirect3DVolumeTexture8_SetPrivateData(p,a,b,c,d) (p)->lpVtbl->SetPrivateData(p,a,b,c,d)
#define IDirect3DVolumeTexture8_GetPrivateData(p,a,b,c) (p)->lpVtbl->GetPrivateData(p,a,b,c)
#define IDirect3DVolumeTexture8_FreePrivateData(p,a) (p)->lpVtbl->FreePrivateData(p,a)
#define IDirect3DVolumeTexture8_SetPriority(p,a) (p)->lpVtbl->SetPriority(p,a)
#define IDirect3DVolumeTexture8_GetPriority(p) (p)->lpVtbl->GetPriority(p)
#define IDirect3DVolumeTexture8_PreLoad(p) (p)->lpVtbl->PreLoad(p)
#define IDirect3DVolumeTexture8_GetType(p) (p)->lpVtbl->GetType(p)
#define IDirect3DVolumeTexture8_SetLOD(p,a) (p)->lpVtbl->SetLOD(p,a)
#define IDirect3DVolumeTexture8_GetLOD(p) (p)->lpVtbl->GetLOD(p)
#define IDirect3DVolumeTexture8_GetLevelCount(p) (p)->lpVtbl->GetLevelCount(p)
#define IDirect3DVolumeTexture8_GetLevelDesc(p,a,b) (p)->lpVtbl->GetLevelDesc(p,a,b)
#define IDirect3DVolumeTexture8_GetVolumeLevel(p,a,b) (p)->lpVtbl->GetVolumeLevel(p,a,b)
#define IDirect3DVolumeTexture8_LockBox(p,a,b,c,d) (p)->lpVtbl->LockBox(p,a,b,c,d)
#define IDirect3DVolumeTexture8_UnlockBox(p,a) (p)->lpVtbl->UnlockBox(p,a)
#define IDirect3DVolumeTexture8_AddDirtyBox(p,a) (p)->lpVtbl->AddDirtyBox(p,a)
typedef struct IDirect3DCubeTexture8Vtbl
{
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IDirect3DCubeTexture8 * This, REFIID riid, void **ppvObject);
	ULONG  (STDMETHODCALLTYPE * AddRef) (IDirect3DCubeTexture8 * This);
	ULONG  (STDMETHODCALLTYPE * Release) (IDirect3DCubeTexture8 * This);
    HRESULT(STDMETHODCALLTYPE * GetDevice)(IDirect3DCubeTexture8 * This, IDirect3DDevice8** ppDevice);
    HRESULT(STDMETHODCALLTYPE * SetPrivateData)(IDirect3DCubeTexture8 * This, REFGUID refguid,CONST void* pData,DWORD SizeOfData,DWORD Flags);
    HRESULT(STDMETHODCALLTYPE * GetPrivateData)(IDirect3DCubeTexture8 * This, REFGUID refguid,void* pData,DWORD* pSizeOfData);
    HRESULT(STDMETHODCALLTYPE * FreePrivateData)(IDirect3DCubeTexture8 * This, REFGUID refguid);
    DWORD  (STDMETHODCALLTYPE * SetPriority)(IDirect3DCubeTexture8 * This, DWORD PriorityNew);
    DWORD  (STDMETHODCALLTYPE * GetPriority)(IDirect3DCubeTexture8 * This);
    void   (STDMETHODCALLTYPE * PreLoad)(IDirect3DCubeTexture8 * This);
    D3DRESOURCETYPE(STDMETHODCALLTYPE * GetType)(IDirect3DCubeTexture8 * This);
    DWORD  (STDMETHODCALLTYPE * SetLOD)(IDirect3DCubeTexture8 * This, DWORD LODNew);
    DWORD  (STDMETHODCALLTYPE * GetLOD)(IDirect3DCubeTexture8 * This);
    DWORD  (STDMETHODCALLTYPE * GetLevelCount)(IDirect3DCubeTexture8 * This);
    HRESULT(STDMETHODCALLTYPE * GetLevelDesc)(IDirect3DCubeTexture8 * This, UINT Level,D3DSURFACE_DESC *pDesc);
    HRESULT(STDMETHODCALLTYPE * GetCubeMapSurface)(IDirect3DCubeTexture8 * This, D3DCUBEMAP_FACES FaceType,UINT Level,IDirect3DSurface8** ppCubeMapSurface);
    HRESULT(STDMETHODCALLTYPE * LockRect)(IDirect3DCubeTexture8 * This, D3DCUBEMAP_FACES FaceType,UINT Level,D3DLOCKED_RECT* pLockedRect,CONST RECT* pRect,DWORD Flags);
    HRESULT(STDMETHODCALLTYPE * UnlockRect)(IDirect3DCubeTexture8 * This, D3DCUBEMAP_FACES FaceType,UINT Level);
    HRESULT(STDMETHODCALLTYPE * AddDirtyRect)(IDirect3DCubeTexture8 * This, D3DCUBEMAP_FACES FaceType,CONST RECT* pDirtyRect);
} IDirect3DCubeTexture8Vtbl;
interface IDirect3DCubeTexture8
{
	CONST_VTBL struct IDirect3DCubeTexture8Vtbl *lpVtbl;
};
typedef struct IDirect3DCubeTexture8 *LPDIRECT3DCUBETEXTURE8, *PDIRECT3DCUBETEXTURE8;
#define IDirect3DCubeTexture8_QueryInterface(p,a,b) (p)->lpVtbl->QueryInterface(p,a,b)
#define IDirect3DCubeTexture8_AddRef(p) (p)->lpVtbl->AddRef(p)
#define IDirect3DCubeTexture8_Release(p) (p)->lpVtbl->Release(p)
#define IDirect3DCubeTexture8_GetDevice(p,a) (p)->lpVtbl->GetDevice(p,a)
#define IDirect3DCubeTexture8_SetPrivateData(p,a,b,c,d) (p)->lpVtbl->SetPrivateData(p,a,b,c,d)
#define IDirect3DCubeTexture8_GetPrivateData(p,a,b,c) (p)->lpVtbl->GetPrivateData(p,a,b,c)
#define IDirect3DCubeTexture8_FreePrivateData(p,a) (p)->lpVtbl->FreePrivateData(p,a)
#define IDirect3DCubeTexture8_SetPriority(p,a) (p)->lpVtbl->SetPriority(p,a)
#define IDirect3DCubeTexture8_GetPriority(p) (p)->lpVtbl->GetPriority(p)
#define IDirect3DCubeTexture8_PreLoad(p) (p)->lpVtbl->PreLoad(p)
#define IDirect3DCubeTexture8_GetType(p) (p)->lpVtbl->GetType(p)
#define IDirect3DCubeTexture8_SetLOD(p,a) (p)->lpVtbl->SetLOD(p,a)
#define IDirect3DCubeTexture8_GetLOD(p) (p)->lpVtbl->GetLOD(p)
#define IDirect3DCubeTexture8_GetLevelCount(p) (p)->lpVtbl->GetLevelCount(p)
#define IDirect3DCubeTexture8_GetLevelDesc(p,a,b) (p)->lpVtbl->GetLevelDesc(p,a,b)
#define IDirect3DCubeTexture8_GetCubeMapSurface(p,a,b,c) (p)->lpVtbl->GetCubeMapSurface(p,a,b,c)
#define IDirect3DCubeTexture8_LockRect(p,a,b,c,d,e) (p)->lpVtbl->LockRect(p,a,b,c,d,e)
#define IDirect3DCubeTexture8_UnlockRect(p,a,b) (p)->lpVtbl->UnlockRect(p,a,b)
#define IDirect3DCubeTexture8_AddDirtyRect(p,a,b) (p)->lpVtbl->AddDirtyRect(p,a,b)
typedef struct IDirect3DVertexBuffer8Vtbl
{
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IDirect3DVertexBuffer8 * This, REFIID riid, void **ppvObject);
	ULONG  (STDMETHODCALLTYPE * AddRef) (IDirect3DVertexBuffer8 * This);
	ULONG  (STDMETHODCALLTYPE * Release) (IDirect3DVertexBuffer8 * This);
    HRESULT(STDMETHODCALLTYPE * GetDevice)(IDirect3DVertexBuffer8 * This, IDirect3DDevice8** ppDevice);
    HRESULT(STDMETHODCALLTYPE * SetPrivateData)(IDirect3DVertexBuffer8 * This, REFGUID refguid,CONST void* pData,DWORD SizeOfData,DWORD Flags);
    HRESULT(STDMETHODCALLTYPE * GetPrivateData)(IDirect3DVertexBuffer8 * This, REFGUID refguid,void* pData,DWORD* pSizeOfData);
    HRESULT(STDMETHODCALLTYPE * FreePrivateData)(IDirect3DVertexBuffer8 * This, REFGUID refguid);
    DWORD  (STDMETHODCALLTYPE * SetPriority)(IDirect3DVertexBuffer8 * This, DWORD PriorityNew);
    DWORD  (STDMETHODCALLTYPE * GetPriority)(IDirect3DVertexBuffer8 * This);
    void   (STDMETHODCALLTYPE * PreLoad)(IDirect3DVertexBuffer8 * This);
    D3DRESOURCETYPE(STDMETHODCALLTYPE * GetType)(IDirect3DVertexBuffer8 * This);
    HRESULT(STDMETHODCALLTYPE * Lock)(IDirect3DVertexBuffer8 * This, UINT OffsetToLock,UINT SizeToLock,BYTE** ppbData,DWORD Flags);
    HRESULT(STDMETHODCALLTYPE * Unlock)(IDirect3DVertexBuffer8 * This);
    HRESULT(STDMETHODCALLTYPE * GetDesc)(IDirect3DVertexBuffer8 * This, D3DVERTEXBUFFER_DESC *pDesc);
} IDirect3DVertexBuffer8Vtbl;
interface IDirect3DVertexBuffer8
{
	CONST_VTBL struct IDirect3DVertexBuffer8Vtbl *lpVtbl;
};
typedef struct IDirect3DVertexBuffer8 *LPDIRECT3DVERTEXBUFFER8, *PDIRECT3DVERTEXBUFFER8;
#define IDirect3DVertexBuffer8_QueryInterface(p,a,b) (p)->lpVtbl->QueryInterface(p,a,b)
#define IDirect3DVertexBuffer8_AddRef(p) (p)->lpVtbl->AddRef(p)
#define IDirect3DVertexBuffer8_Release(p) (p)->lpVtbl->Release(p)
#define IDirect3DVertexBuffer8_GetDevice(p,a) (p)->lpVtbl->GetDevice(p,a)
#define IDirect3DVertexBuffer8_SetPrivateData(p,a,b,c,d) (p)->lpVtbl->SetPrivateData(p,a,b,c,d)
#define IDirect3DVertexBuffer8_GetPrivateData(p,a,b,c) (p)->lpVtbl->GetPrivateData(p,a,b,c)
#define IDirect3DVertexBuffer8_FreePrivateData(p,a) (p)->lpVtbl->FreePrivateData(p,a)
#define IDirect3DVertexBuffer8_SetPriority(p,a) (p)->lpVtbl->SetPriority(p,a)
#define IDirect3DVertexBuffer8_GetPriority(p) (p)->lpVtbl->GetPriority(p)
#define IDirect3DVertexBuffer8_PreLoad(p) (p)->lpVtbl->PreLoad(p)
#define IDirect3DVertexBuffer8_GetType(p) (p)->lpVtbl->GetType(p)
#define IDirect3DVertexBuffer8_Lock(p,a,b,c,d) (p)->lpVtbl->Lock(p,a,b,c,d)
#define IDirect3DVertexBuffer8_Unlock(p) (p)->lpVtbl->Unlock(p)
#define IDirect3DVertexBuffer8_GetDesc(p,a) (p)->lpVtbl->GetDesc(p,a)
typedef struct IDirect3DIndexBuffer8Vtbl
{
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IDirect3DIndexBuffer8 * This, REFIID riid, void **ppvObject);
	ULONG  (STDMETHODCALLTYPE * AddRef) (IDirect3DIndexBuffer8 * This);
	ULONG  (STDMETHODCALLTYPE * Release) (IDirect3DIndexBuffer8 * This);
    HRESULT(STDMETHODCALLTYPE * GetDevice)(IDirect3DIndexBuffer8 * This, IDirect3DDevice8** ppDevice);
    HRESULT(STDMETHODCALLTYPE * SetPrivateData)(IDirect3DIndexBuffer8 * This, REFGUID refguid,CONST void* pData,DWORD SizeOfData,DWORD Flags);
    HRESULT(STDMETHODCALLTYPE * GetPrivateData)(IDirect3DIndexBuffer8 * This, REFGUID refguid,void* pData,DWORD* pSizeOfData);
    HRESULT(STDMETHODCALLTYPE * FreePrivateData)(IDirect3DIndexBuffer8 * This, REFGUID refguid);
    DWORD  (STDMETHODCALLTYPE * SetPriority)(IDirect3DIndexBuffer8 * This, DWORD PriorityNew);
    DWORD  (STDMETHODCALLTYPE * GetPriority)(IDirect3DIndexBuffer8 * This);
    void   (STDMETHODCALLTYPE * PreLoad)(IDirect3DIndexBuffer8 * This);
    D3DRESOURCETYPE(STDMETHODCALLTYPE * GetType)(IDirect3DIndexBuffer8 * This);
    HRESULT(STDMETHODCALLTYPE * Lock)(IDirect3DIndexBuffer8 * This, UINT OffsetToLock,UINT SizeToLock,BYTE** ppbData,DWORD Flags);
    HRESULT(STDMETHODCALLTYPE * Unlock)(IDirect3DIndexBuffer8 * This);
    HRESULT(STDMETHODCALLTYPE * GetDesc)(IDirect3DIndexBuffer8 * This, D3DINDEXBUFFER_DESC *pDesc);
} IDirect3DIndexBuffer8Vtbl;
interface IDirect3DIndexBuffer8
{
	CONST_VTBL struct IDirect3DIndexBuffer8Vtbl *lpVtbl;
};
typedef struct IDirect3DIndexBuffer8 *LPDIRECT3DINDEXBUFFER8, *PDIRECT3DINDEXBUFFER8;
#define IDirect3DIndexBuffer8_QueryInterface(p,a,b) (p)->lpVtbl->QueryInterface(p,a,b)
#define IDirect3DIndexBuffer8_AddRef(p) (p)->lpVtbl->AddRef(p)
#define IDirect3DIndexBuffer8_Release(p) (p)->lpVtbl->Release(p)
#define IDirect3DIndexBuffer8_GetDevice(p,a) (p)->lpVtbl->GetDevice(p,a)
#define IDirect3DIndexBuffer8_SetPrivateData(p,a,b,c,d) (p)->lpVtbl->SetPrivateData(p,a,b,c,d)
#define IDirect3DIndexBuffer8_GetPrivateData(p,a,b,c) (p)->lpVtbl->GetPrivateData(p,a,b,c)
#define IDirect3DIndexBuffer8_FreePrivateData(p,a) (p)->lpVtbl->FreePrivateData(p,a)
#define IDirect3DIndexBuffer8_SetPriority(p,a) (p)->lpVtbl->SetPriority(p,a)
#define IDirect3DIndexBuffer8_GetPriority(p) (p)->lpVtbl->GetPriority(p)
#define IDirect3DIndexBuffer8_PreLoad(p) (p)->lpVtbl->PreLoad(p)
#define IDirect3DIndexBuffer8_GetType(p) (p)->lpVtbl->GetType(p)
#define IDirect3DIndexBuffer8_Lock(p,a,b,c,d) (p)->lpVtbl->Lock(p,a,b,c,d)
#define IDirect3DIndexBuffer8_Unlock(p) (p)->lpVtbl->Unlock(p)
#define IDirect3DIndexBuffer8_GetDesc(p,a) (p)->lpVtbl->GetDesc(p,a)
typedef struct IDirect3DSurface8Vtbl
{
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IDirect3DSurface8 * This, REFIID riid, void **ppvObject);
	ULONG  (STDMETHODCALLTYPE * AddRef) (IDirect3DSurface8 * This);
	ULONG  (STDMETHODCALLTYPE * Release) (IDirect3DSurface8 * This);
    HRESULT(STDMETHODCALLTYPE * GetDevice)(IDirect3DSurface8 * This, IDirect3DDevice8** ppDevice);
    HRESULT(STDMETHODCALLTYPE * SetPrivateData)(IDirect3DSurface8 * This, REFGUID refguid,CONST void* pData,DWORD SizeOfData,DWORD Flags);
    HRESULT(STDMETHODCALLTYPE * GetPrivateData)(IDirect3DSurface8 * This, REFGUID refguid,void* pData,DWORD* pSizeOfData);
    HRESULT(STDMETHODCALLTYPE * FreePrivateData)(IDirect3DSurface8 * This, REFGUID refguid);
    HRESULT(STDMETHODCALLTYPE * GetContainer)(IDirect3DSurface8 * This, REFIID riid,void** ppContainer);
    HRESULT(STDMETHODCALLTYPE * GetDesc)(IDirect3DSurface8 * This, D3DSURFACE_DESC *pDesc);
    HRESULT(STDMETHODCALLTYPE * LockRect)(IDirect3DSurface8 * This, D3DLOCKED_RECT* pLockedRect,CONST RECT* pRect,DWORD Flags);
    HRESULT(STDMETHODCALLTYPE * UnlockRect)(IDirect3DSurface8 * This);
} IDirect3DSurface8Vtbl;
interface IDirect3DSurface8
{
	CONST_VTBL struct IDirect3DSurface8Vtbl *lpVtbl;
};
typedef struct IDirect3DSurface8 *LPDIRECT3DSURFACE8, *PDIRECT3DSURFACE8;
#define IDirect3DSurface8_QueryInterface(p,a,b) (p)->lpVtbl->QueryInterface(p,a,b)
#define IDirect3DSurface8_AddRef(p) (p)->lpVtbl->AddRef(p)
#define IDirect3DSurface8_Release(p) (p)->lpVtbl->Release(p)
#define IDirect3DSurface8_GetDevice(p,a) (p)->lpVtbl->GetDevice(p,a)
#define IDirect3DSurface8_SetPrivateData(p,a,b,c,d) (p)->lpVtbl->SetPrivateData(p,a,b,c,d)
#define IDirect3DSurface8_GetPrivateData(p,a,b,c) (p)->lpVtbl->GetPrivateData(p,a,b,c)
#define IDirect3DSurface8_FreePrivateData(p,a) (p)->lpVtbl->FreePrivateData(p,a)
#define IDirect3DSurface8_GetContainer(p,a,b) (p)->lpVtbl->GetContainer(p,a,b)
#define IDirect3DSurface8_GetDesc(p,a) (p)->lpVtbl->GetDesc(p,a)
#define IDirect3DSurface8_LockRect(p,a,b,c) (p)->lpVtbl->LockRect(p,a,b,c)
#define IDirect3DSurface8_UnlockRect(p) (p)->lpVtbl->UnlockRect(p)
typedef struct IDirect3DVolume8Vtbl
{
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IDirect3DVolume8 * This, REFIID riid, void **ppvObject);
	ULONG  (STDMETHODCALLTYPE * AddRef) (IDirect3DVolume8 * This);
	ULONG  (STDMETHODCALLTYPE * Release) (IDirect3DVolume8 * This);
    HRESULT(STDMETHODCALLTYPE * GetDevice)(IDirect3DVolume8 * This, IDirect3DDevice8** ppDevice);
    HRESULT(STDMETHODCALLTYPE * SetPrivateData)(IDirect3DVolume8 * This, REFGUID refguid,CONST void* pData,DWORD SizeOfData,DWORD Flags);
    HRESULT(STDMETHODCALLTYPE * GetPrivateData)(IDirect3DVolume8 * This, REFGUID refguid,void* pData,DWORD* pSizeOfData);
    HRESULT(STDMETHODCALLTYPE * FreePrivateData)(IDirect3DVolume8 * This, REFGUID refguid);
    HRESULT(STDMETHODCALLTYPE * GetContainer)(IDirect3DVolume8 * This, REFIID riid,void** ppContainer);
    HRESULT(STDMETHODCALLTYPE * GetDesc)(IDirect3DVolume8 * This, D3DVOLUME_DESC *pDesc);
    HRESULT(STDMETHODCALLTYPE * LockBox)(IDirect3DVolume8 * This, D3DLOCKED_BOX * pLockedVolume,CONST D3DBOX* pBox,DWORD Flags);
    HRESULT(STDMETHODCALLTYPE * UnlockBox)(IDirect3DVolume8 * This);
} IDirect3DVolume8Vtbl;
interface IDirect3DVolume8
{
	CONST_VTBL struct IDirect3DVolume8Vtbl *lpVtbl;
};
typedef struct IDirect3DVolume8 *LPDIRECT3DVOLUME8, *PDIRECT3DVOLUME8;
#define IDirect3DVolume8_QueryInterface(p,a,b) (p)->lpVtbl->QueryInterface(p,a,b)
#define IDirect3DVolume8_AddRef(p) (p)->lpVtbl->AddRef(p)
#define IDirect3DVolume8_Release(p) (p)->lpVtbl->Release(p)
#define IDirect3DVolume8_GetDevice(p,a) (p)->lpVtbl->GetDevice(p,a)
#define IDirect3DVolume8_SetPrivateData(p,a,b,c,d) (p)->lpVtbl->SetPrivateData(p,a,b,c,d)
#define IDirect3DVolume8_GetPrivateData(p,a,b,c) (p)->lpVtbl->GetPrivateData(p,a,b,c)
#define IDirect3DVolume8_FreePrivateData(p,a) (p)->lpVtbl->FreePrivateData(p,a)
#define IDirect3DVolume8_GetContainer(p,a,b) (p)->lpVtbl->GetContainer(p,a,b)
#define IDirect3DVolume8_GetDesc(p,a) (p)->lpVtbl->GetDesc(p,a)
#define IDirect3DVolume8_LockBox(p,a,b,c) (p)->lpVtbl->LockBox(p,a,b,c)
#define IDirect3DVolume8_UnlockBox(p) (p)->lpVtbl->UnlockBox(p)
#define D3DSPD_IUNKNOWN                         0x00000001L
#define D3DCURRENT_DISPLAY_MODE                 0x00EFFFFFL
#define D3DCREATE_FPU_PRESERVE                  0x00000002L
#define D3DCREATE_MULTITHREADED                 0x00000004L
#define D3DCREATE_PUREDEVICE                    0x00000010L
#define D3DCREATE_SOFTWARE_VERTEXPROCESSING     0x00000020L
#define D3DCREATE_HARDWARE_VERTEXPROCESSING     0x00000040L
#define D3DCREATE_MIXED_VERTEXPROCESSING        0x00000080L
#define D3DCREATE_DISABLE_DRIVER_MANAGEMENT     0x00000100L
#define D3DADAPTER_DEFAULT                     0
#define D3DENUM_NO_WHQL_LEVEL                   0x00000002L
#define D3DPRESENT_BACK_BUFFERS_MAX             3L
#define D3DSGR_NO_CALIBRATION                  0x00000000L
#define D3DSGR_CALIBRATE                       0x00000001L
#define D3DCURSOR_IMMEDIATE_UPDATE             0x00000001L
#define _FACD3D  0x876
#define MAKE_D3DHRESULT( code )  MAKE_HRESULT( 1, _FACD3D, code )
#define D3D_OK                              S_OK
#define D3DERR_WRONGTEXTUREFORMAT               MAKE_D3DHRESULT(2072)
#define D3DERR_UNSUPPORTEDCOLOROPERATION        MAKE_D3DHRESULT(2073)
#define D3DERR_UNSUPPORTEDCOLORARG              MAKE_D3DHRESULT(2074)
#define D3DERR_UNSUPPORTEDALPHAOPERATION        MAKE_D3DHRESULT(2075)
#define D3DERR_UNSUPPORTEDALPHAARG              MAKE_D3DHRESULT(2076)
#define D3DERR_TOOMANYOPERATIONS                MAKE_D3DHRESULT(2077)
#define D3DERR_CONFLICTINGTEXTUREFILTER         MAKE_D3DHRESULT(2078)
#define D3DERR_UNSUPPORTEDFACTORVALUE           MAKE_D3DHRESULT(2079)
#define D3DERR_CONFLICTINGRENDERSTATE           MAKE_D3DHRESULT(2081)
#define D3DERR_UNSUPPORTEDTEXTUREFILTER         MAKE_D3DHRESULT(2082)
#define D3DERR_CONFLICTINGTEXTUREPALETTE        MAKE_D3DHRESULT(2086)
#define D3DERR_DRIVERINTERNALERROR              MAKE_D3DHRESULT(2087)
#define D3DERR_NOTFOUND                         MAKE_D3DHRESULT(2150)
#define D3DERR_MOREDATA                         MAKE_D3DHRESULT(2151)
#define D3DERR_DEVICELOST                       MAKE_D3DHRESULT(2152)
#define D3DERR_DEVICENOTRESET                   MAKE_D3DHRESULT(2153)
#define D3DERR_NOTAVAILABLE                     MAKE_D3DHRESULT(2154)
#define D3DERR_OUTOFVIDEOMEMORY                 MAKE_D3DHRESULT(380)
#define D3DERR_INVALIDDEVICE                    MAKE_D3DHRESULT(2155)
#define D3DERR_INVALIDCALL                      MAKE_D3DHRESULT(2156)
#define D3DERR_DRIVERINVALIDCALL                MAKE_D3DHRESULT(2157)
#endif
#endif

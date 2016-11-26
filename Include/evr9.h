/*+@@file@@----------------------------------------------------------------*//*!
 \file		evr9.h
 \par Description 
            Extension and update of headers for PellesC compiler suite.
 \par Project: 
            PellesC Headers extension
 \date		Created  on Sat Jul  9 22:14:32 2016
 \date		Modified on Sat Jul  9 22:14:32 2016
 \author	frankie
\*//*-@@file@@----------------------------------------------------------------*/

#ifndef __REQUIRED_RPCNDR_H_VERSION__
#define __REQUIRED_RPCNDR_H_VERSION__ 500
#endif
#ifndef __REQUIRED_RPCSAL_H_VERSION__
#define __REQUIRED_RPCSAL_H_VERSION__ 100
#endif
#include <rpc.h>
#include <rpcndr.h>
#ifndef __RPCNDR_H_VERSION__
#error this stub requires an updated version of <rpcndr.h>
#endif
#ifndef COM_NO_WINDOWS_H
#include <windows.h>
#include <ole2.h>
#endif
#ifndef __evr9_h__
#define __evr9_h__
#if __POCC__ >= 500
#pragma once
#endif
#ifndef __IEVRVideoStreamControl_FWD_DEFINED__
#define __IEVRVideoStreamControl_FWD_DEFINED__
typedef interface IEVRVideoStreamControl IEVRVideoStreamControl;
#endif
#ifndef __IMFVideoProcessor_FWD_DEFINED__
#define __IMFVideoProcessor_FWD_DEFINED__
typedef interface IMFVideoProcessor IMFVideoProcessor;
#endif
#ifndef __IMFVideoMixerBitmap_FWD_DEFINED__
#define __IMFVideoMixerBitmap_FWD_DEFINED__
typedef interface IMFVideoMixerBitmap IMFVideoMixerBitmap;
#endif
#include <unknwn.h>
#include <mfobjects.h>
#include <mftransform.h>
#include <evr.h>
#include <dxva2api.h>
extern RPC_IF_HANDLE __MIDL_itf_evr9_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_evr9_0000_0000_v0_0_s_ifspec;
#ifndef __IEVRVideoStreamControl_INTERFACE_DEFINED__
#define __IEVRVideoStreamControl_INTERFACE_DEFINED__
extern const IID IID_IEVRVideoStreamControl;
typedef struct IEVRVideoStreamControlVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IEVRVideoStreamControl * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IEVRVideoStreamControl * This);
	ULONG(STDMETHODCALLTYPE * Release) (IEVRVideoStreamControl * This);
	HRESULT(STDMETHODCALLTYPE * SetStreamActiveState) (IEVRVideoStreamControl * This, BOOL fActive);
	HRESULT(STDMETHODCALLTYPE * GetStreamActiveState) (IEVRVideoStreamControl * This, BOOL * lpfActive);
	END_INTERFACE
}  IEVRVideoStreamControlVtbl;
interface IEVRVideoStreamControl
{
	CONST_VTBL struct IEVRVideoStreamControlVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IEVRVideoStreamControl_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IEVRVideoStreamControl_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define IEVRVideoStreamControl_Release(This)( (This)->lpVtbl -> Release(This) )
#define IEVRVideoStreamControl_SetStreamActiveState(This,fActive)( (This)->lpVtbl -> SetStreamActiveState(This,fActive) )
#define IEVRVideoStreamControl_GetStreamActiveState(This,lpfActive)( (This)->lpVtbl -> GetStreamActiveState(This,lpfActive) )
#endif
#endif
#ifndef __IMFVideoProcessor_INTERFACE_DEFINED__
#define __IMFVideoProcessor_INTERFACE_DEFINED__
extern const IID IID_IMFVideoProcessor;
typedef struct IMFVideoProcessorVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IMFVideoProcessor * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IMFVideoProcessor * This);
	ULONG(STDMETHODCALLTYPE * Release) (IMFVideoProcessor * This);
	HRESULT(STDMETHODCALLTYPE * GetAvailableVideoProcessorModes) (IMFVideoProcessor * This, UINT * lpdwNumProcessingModes, GUID ** ppVideoProcessingModes);
	HRESULT(STDMETHODCALLTYPE * GetVideoProcessorCaps) (IMFVideoProcessor * This, LPGUID lpVideoProcessorMode, DXVA2_VideoProcessorCaps * lpVideoProcessorCaps);
	HRESULT(STDMETHODCALLTYPE * GetVideoProcessorMode) (IMFVideoProcessor * This, LPGUID lpMode);
	HRESULT(STDMETHODCALLTYPE * SetVideoProcessorMode) (IMFVideoProcessor * This, LPGUID lpMode);
	HRESULT(STDMETHODCALLTYPE * GetProcAmpRange) (IMFVideoProcessor * This, DWORD dwProperty, DXVA2_ValueRange * pPropRange);
	HRESULT(STDMETHODCALLTYPE * GetProcAmpValues) (IMFVideoProcessor * This, DWORD dwFlags, DXVA2_ProcAmpValues * Values);
	HRESULT(STDMETHODCALLTYPE * SetProcAmpValues) (IMFVideoProcessor * This, DWORD dwFlags, DXVA2_ProcAmpValues * pValues);
	HRESULT(STDMETHODCALLTYPE * GetFilteringRange) (IMFVideoProcessor * This, DWORD dwProperty, DXVA2_ValueRange * pPropRange);
	HRESULT(STDMETHODCALLTYPE * GetFilteringValue) (IMFVideoProcessor * This, DWORD dwProperty, DXVA2_Fixed32 * pValue);
	HRESULT(STDMETHODCALLTYPE * SetFilteringValue) (IMFVideoProcessor * This, DWORD dwProperty, DXVA2_Fixed32 * pValue);
	HRESULT(STDMETHODCALLTYPE * GetBackgroundColor) (IMFVideoProcessor * This, COLORREF * lpClrBkg);
	HRESULT(STDMETHODCALLTYPE * SetBackgroundColor) (IMFVideoProcessor * This, COLORREF ClrBkg);
	END_INTERFACE
}  IMFVideoProcessorVtbl;
interface IMFVideoProcessor
{
	CONST_VTBL struct IMFVideoProcessorVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IMFVideoProcessor_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IMFVideoProcessor_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define IMFVideoProcessor_Release(This)( (This)->lpVtbl -> Release(This) )
#define IMFVideoProcessor_GetAvailableVideoProcessorModes(This,lpdwNumProcessingModes,ppVideoProcessingModes)( (This)->lpVtbl -> GetAvailableVideoProcessorModes(This,lpdwNumProcessingModes,ppVideoProcessingModes) )
#define IMFVideoProcessor_GetVideoProcessorCaps(This,lpVideoProcessorMode,lpVideoProcessorCaps)( (This)->lpVtbl -> GetVideoProcessorCaps(This,lpVideoProcessorMode,lpVideoProcessorCaps) )
#define IMFVideoProcessor_GetVideoProcessorMode(This,lpMode)( (This)->lpVtbl -> GetVideoProcessorMode(This,lpMode) )
#define IMFVideoProcessor_SetVideoProcessorMode(This,lpMode)( (This)->lpVtbl -> SetVideoProcessorMode(This,lpMode) )
#define IMFVideoProcessor_GetProcAmpRange(This,dwProperty,pPropRange)( (This)->lpVtbl -> GetProcAmpRange(This,dwProperty,pPropRange) )
#define IMFVideoProcessor_GetProcAmpValues(This,dwFlags,Values)( (This)->lpVtbl -> GetProcAmpValues(This,dwFlags,Values) )
#define IMFVideoProcessor_SetProcAmpValues(This,dwFlags,pValues)( (This)->lpVtbl -> SetProcAmpValues(This,dwFlags,pValues) )
#define IMFVideoProcessor_GetFilteringRange(This,dwProperty,pPropRange)( (This)->lpVtbl -> GetFilteringRange(This,dwProperty,pPropRange) )
#define IMFVideoProcessor_GetFilteringValue(This,dwProperty,pValue)( (This)->lpVtbl -> GetFilteringValue(This,dwProperty,pValue) )
#define IMFVideoProcessor_SetFilteringValue(This,dwProperty,pValue)( (This)->lpVtbl -> SetFilteringValue(This,dwProperty,pValue) )
#define IMFVideoProcessor_GetBackgroundColor(This,lpClrBkg)( (This)->lpVtbl -> GetBackgroundColor(This,lpClrBkg) )
#define IMFVideoProcessor_SetBackgroundColor(This,ClrBkg)( (This)->lpVtbl -> SetBackgroundColor(This,ClrBkg) )
#endif
#endif
typedef struct MFVideoAlphaBitmapParams
{
	DWORD dwFlags;
	COLORREF clrSrcKey;
	RECT rcSrc;
	MFVideoNormalizedRect nrcDest;
	FLOAT fAlpha;
	DWORD dwFilterMode;
} MFVideoAlphaBitmapParams;
typedef struct MFVideoAlphaBitmap
{
	BOOL GetBitmapFromDC;
	union
	{
		HDC hdc;
		IDirect3DSurface9 *pDDS;
	} bitmap;
	MFVideoAlphaBitmapParams params;
} MFVideoAlphaBitmap;
typedef enum __MIDL___MIDL_itf_evr9_0000_0002_0002
{
	MFVideoAlphaBitmap_EntireDDS = 0x1,
	MFVideoAlphaBitmap_SrcColorKey = 0x2,
	MFVideoAlphaBitmap_SrcRect = 0x4,
	MFVideoAlphaBitmap_DestRect = 0x8,
	MFVideoAlphaBitmap_FilterMode = 0x10,
	MFVideoAlphaBitmap_Alpha = 0x20,
	MFVideoAlphaBitmap_BitMask = 0x3f
} MFVideoAlphaBitmapFlags;
extern RPC_IF_HANDLE __MIDL_itf_evr9_0000_0002_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_evr9_0000_0002_v0_0_s_ifspec;
#ifndef __IMFVideoMixerBitmap_INTERFACE_DEFINED__
#define __IMFVideoMixerBitmap_INTERFACE_DEFINED__
extern const IID IID_IMFVideoMixerBitmap;
typedef struct IMFVideoMixerBitmapVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IMFVideoMixerBitmap * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IMFVideoMixerBitmap * This);
	ULONG(STDMETHODCALLTYPE * Release) (IMFVideoMixerBitmap * This);
	HRESULT(STDMETHODCALLTYPE * SetAlphaBitmap) (IMFVideoMixerBitmap * This, const MFVideoAlphaBitmap * pBmpParms);
	HRESULT(STDMETHODCALLTYPE * ClearAlphaBitmap) (IMFVideoMixerBitmap * This);
	HRESULT(STDMETHODCALLTYPE * UpdateAlphaBitmapParameters) (IMFVideoMixerBitmap * This, const MFVideoAlphaBitmapParams * pBmpParms);
	HRESULT(STDMETHODCALLTYPE * GetAlphaBitmapParameters) (IMFVideoMixerBitmap * This, MFVideoAlphaBitmapParams * pBmpParms);
	END_INTERFACE
}  IMFVideoMixerBitmapVtbl;
interface IMFVideoMixerBitmap
{
	CONST_VTBL struct IMFVideoMixerBitmapVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IMFVideoMixerBitmap_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IMFVideoMixerBitmap_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define IMFVideoMixerBitmap_Release(This)( (This)->lpVtbl -> Release(This) )
#define IMFVideoMixerBitmap_SetAlphaBitmap(This,pBmpParms)( (This)->lpVtbl -> SetAlphaBitmap(This,pBmpParms) )
#define IMFVideoMixerBitmap_ClearAlphaBitmap(This)( (This)->lpVtbl -> ClearAlphaBitmap(This) )
#define IMFVideoMixerBitmap_UpdateAlphaBitmapParameters(This,pBmpParms)( (This)->lpVtbl -> UpdateAlphaBitmapParameters(This,pBmpParms) )
#define IMFVideoMixerBitmap_GetAlphaBitmapParameters(This,pBmpParms)( (This)->lpVtbl -> GetAlphaBitmapParameters(This,pBmpParms) )
#endif
#endif
#endif

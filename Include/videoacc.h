/*+@@file@@----------------------------------------------------------------*//*!
 \file		videoacc.h
 \par Description 
            Extension and update of headers for PellesC compiler suite.
 \par Project: 
            PellesC Headers extension
 \date		Created  on Sun Jun 19 17:47:28 2016
 \date		Modified on Sun Jun 19 17:47:28 2016
 \author	frankie
\*//*-@@file@@----------------------------------------------------------------*/

#ifndef __REQUIRED_RPCNDR_H_VERSION__
#define __REQUIRED_RPCNDR_H_VERSION__ 500
#endif
#ifndef __REQUIRED_RPCSAL_H_VERSION__
#define __REQUIRED_RPCSAL_H_VERSION__ 100
#endif
#include "rpc.h"
#include "rpcndr.h"
#ifndef __RPCNDR_H_VERSION__
#error this stub requires an updated version of <rpcndr.h>
#endif
#ifndef COM_NO_WINDOWS_H
#include "windows.h"
#include "ole2.h"
#endif
#ifndef __videoacc_h__
#define __videoacc_h__
#if __POCC__ >= 500
#pragma once
#endif
#ifndef __IAMVideoAcceleratorNotify_FWD_DEFINED__
#define __IAMVideoAcceleratorNotify_FWD_DEFINED__
typedef interface IAMVideoAcceleratorNotify IAMVideoAcceleratorNotify;
#endif
#ifndef __IAMVideoAccelerator_FWD_DEFINED__
#define __IAMVideoAccelerator_FWD_DEFINED__
typedef interface IAMVideoAccelerator IAMVideoAccelerator;
#endif
#include "unknwn.h"
#if 0
typedef void *LPVOID;
typedef void *LPGUID;
typedef void *LPDIRECTDRAWSURFACE;
typedef void *LPDDPIXELFORMAT;
typedef void *LPAMVAInternalMemInfo;
typedef void AMVAUncompDataInfo;
typedef void *LPAMVACompBufferInfo;
typedef void AMVABUFFERINFO;
typedef void AMVAEndFrameInfo;
typedef void *LPAMVAUncompBufferInfo;
typedef void AMVABeginFrameInfo;
typedef IUnknown *IMediaSample;
#endif
#include <ddraw.h>
#include <amva.h>
extern RPC_IF_HANDLE __MIDL_itf_videoacc_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_videoacc_0000_0000_v0_0_s_ifspec;
#ifndef __IAMVideoAcceleratorNotify_INTERFACE_DEFINED__
#define __IAMVideoAcceleratorNotify_INTERFACE_DEFINED__
extern const IID IID_IAMVideoAcceleratorNotify;
typedef struct IAMVideoAcceleratorNotifyVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IAMVideoAcceleratorNotify * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IAMVideoAcceleratorNotify * This);
	ULONG(STDMETHODCALLTYPE * Release) (IAMVideoAcceleratorNotify * This);
	HRESULT(STDMETHODCALLTYPE * GetUncompSurfacesInfo) (IAMVideoAcceleratorNotify * This, const GUID * pGuid, LPAMVAUncompBufferInfo pUncompBufferInfo);
	HRESULT(STDMETHODCALLTYPE * SetUncompSurfacesInfo) (IAMVideoAcceleratorNotify * This, DWORD dwActualUncompSurfacesAllocated);
	HRESULT(STDMETHODCALLTYPE * GetCreateVideoAcceleratorData) (IAMVideoAcceleratorNotify * This, const GUID * pGuid, LPDWORD pdwSizeMiscData, LPVOID * ppMiscData);
	END_INTERFACE
} IAMVideoAcceleratorNotifyVtbl;
interface IAMVideoAcceleratorNotify {
	CONST_VTBL struct IAMVideoAcceleratorNotifyVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IAMVideoAcceleratorNotify_QueryInterface(This,riid,ppvObject)    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IAMVideoAcceleratorNotify_AddRef(This)    ( (This)->lpVtbl -> AddRef(This) )
#define IAMVideoAcceleratorNotify_Release(This)    ( (This)->lpVtbl -> Release(This) )
#define IAMVideoAcceleratorNotify_GetUncompSurfacesInfo(This,pGuid,pUncompBufferInfo)    ( (This)->lpVtbl -> GetUncompSurfacesInfo(This,pGuid,pUncompBufferInfo) )
#define IAMVideoAcceleratorNotify_SetUncompSurfacesInfo(This,dwActualUncompSurfacesAllocated)    ( (This)->lpVtbl -> SetUncompSurfacesInfo(This,dwActualUncompSurfacesAllocated) )
#define IAMVideoAcceleratorNotify_GetCreateVideoAcceleratorData(This,pGuid,pdwSizeMiscData,ppMiscData)    ( (This)->lpVtbl -> GetCreateVideoAcceleratorData(This,pGuid,pdwSizeMiscData,ppMiscData) )
#endif
#endif
#ifndef __IAMVideoAccelerator_INTERFACE_DEFINED__
#define __IAMVideoAccelerator_INTERFACE_DEFINED__
extern const IID IID_IAMVideoAccelerator;
typedef struct IAMVideoAcceleratorVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IAMVideoAccelerator * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IAMVideoAccelerator * This);
	ULONG(STDMETHODCALLTYPE * Release) (IAMVideoAccelerator * This);
	HRESULT(STDMETHODCALLTYPE * GetVideoAcceleratorGUIDs) (IAMVideoAccelerator * This, LPDWORD pdwNumGuidsSupported, LPGUID pGuidsSupported);
	HRESULT(STDMETHODCALLTYPE * GetUncompFormatsSupported) (IAMVideoAccelerator * This, const GUID * pGuid, LPDWORD pdwNumFormatsSupported, LPDDPIXELFORMAT pFormatsSupported);
	HRESULT(STDMETHODCALLTYPE * GetInternalMemInfo) (IAMVideoAccelerator * This, const GUID * pGuid, const AMVAUncompDataInfo * pamvaUncompDataInfo, LPAMVAInternalMemInfo pamvaInternalMemInfo);
	HRESULT(STDMETHODCALLTYPE * GetCompBufferInfo) (IAMVideoAccelerator * This, const GUID * pGuid, const AMVAUncompDataInfo * pamvaUncompDataInfo, LPDWORD pdwNumTypesCompBuffers, LPAMVACompBufferInfo pamvaCompBufferInfo);
	HRESULT(STDMETHODCALLTYPE * GetInternalCompBufferInfo) (IAMVideoAccelerator * This, LPDWORD pdwNumTypesCompBuffers, LPAMVACompBufferInfo pamvaCompBufferInfo);
	HRESULT(STDMETHODCALLTYPE * BeginFrame) (IAMVideoAccelerator * This, const AMVABeginFrameInfo * amvaBeginFrameInfo);
	HRESULT(STDMETHODCALLTYPE * EndFrame) (IAMVideoAccelerator * This, const AMVAEndFrameInfo * pEndFrameInfo);
	HRESULT(STDMETHODCALLTYPE * GetBuffer) (IAMVideoAccelerator * This, DWORD dwTypeIndex, DWORD dwBufferIndex, BOOL bReadOnly, LPVOID * ppBuffer, LONG * lpStride);
	HRESULT(STDMETHODCALLTYPE * ReleaseBuffer) (IAMVideoAccelerator * This, DWORD dwTypeIndex, DWORD dwBufferIndex);
	HRESULT(STDMETHODCALLTYPE * Execute) (IAMVideoAccelerator * This, DWORD dwFunction, LPVOID lpPrivateInputData, DWORD cbPrivateInputData, LPVOID lpPrivateOutputDat, DWORD cbPrivateOutputData, DWORD dwNumBuffers, const AMVABUFFERINFO * pamvaBufferInfo);
	HRESULT(STDMETHODCALLTYPE * QueryRenderStatus) (IAMVideoAccelerator * This, DWORD dwTypeIndex, DWORD dwBufferIndex, DWORD dwFlags);
	HRESULT(STDMETHODCALLTYPE * DisplayFrame) (IAMVideoAccelerator * This, DWORD dwFlipToIndex, IMediaSample * pMediaSample);
	END_INTERFACE
} IAMVideoAcceleratorVtbl;
interface IAMVideoAccelerator {
	CONST_VTBL struct IAMVideoAcceleratorVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IAMVideoAccelerator_QueryInterface(This,riid,ppvObject)    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IAMVideoAccelerator_AddRef(This)    ( (This)->lpVtbl -> AddRef(This) )
#define IAMVideoAccelerator_Release(This)    ( (This)->lpVtbl -> Release(This) )
#define IAMVideoAccelerator_GetVideoAcceleratorGUIDs(This,pdwNumGuidsSupported,pGuidsSupported)    ( (This)->lpVtbl -> GetVideoAcceleratorGUIDs(This,pdwNumGuidsSupported,pGuidsSupported) )
#define IAMVideoAccelerator_GetUncompFormatsSupported(This,pGuid,pdwNumFormatsSupported,pFormatsSupported)    ( (This)->lpVtbl -> GetUncompFormatsSupported(This,pGuid,pdwNumFormatsSupported,pFormatsSupported) )
#define IAMVideoAccelerator_GetInternalMemInfo(This,pGuid,pamvaUncompDataInfo,pamvaInternalMemInfo)    ( (This)->lpVtbl -> GetInternalMemInfo(This,pGuid,pamvaUncompDataInfo,pamvaInternalMemInfo) )
#define IAMVideoAccelerator_GetCompBufferInfo(This,pGuid,pamvaUncompDataInfo,pdwNumTypesCompBuffers,pamvaCompBufferInfo)    ( (This)->lpVtbl -> GetCompBufferInfo(This,pGuid,pamvaUncompDataInfo,pdwNumTypesCompBuffers,pamvaCompBufferInfo) )
#define IAMVideoAccelerator_GetInternalCompBufferInfo(This,pdwNumTypesCompBuffers,pamvaCompBufferInfo)    ( (This)->lpVtbl -> GetInternalCompBufferInfo(This,pdwNumTypesCompBuffers,pamvaCompBufferInfo) )
#define IAMVideoAccelerator_BeginFrame(This,amvaBeginFrameInfo)    ( (This)->lpVtbl -> BeginFrame(This,amvaBeginFrameInfo) )
#define IAMVideoAccelerator_EndFrame(This,pEndFrameInfo)    ( (This)->lpVtbl -> EndFrame(This,pEndFrameInfo) )
#define IAMVideoAccelerator_GetBuffer(This,dwTypeIndex,dwBufferIndex,bReadOnly,ppBuffer,lpStride)    ( (This)->lpVtbl -> GetBuffer(This,dwTypeIndex,dwBufferIndex,bReadOnly,ppBuffer,lpStride) )
#define IAMVideoAccelerator_ReleaseBuffer(This,dwTypeIndex,dwBufferIndex)    ( (This)->lpVtbl -> ReleaseBuffer(This,dwTypeIndex,dwBufferIndex) )
#define IAMVideoAccelerator_Execute(This,dwFunction,lpPrivateInputData,cbPrivateInputData,lpPrivateOutputDat,cbPrivateOutputData,dwNumBuffers,pamvaBufferInfo)    ( (This)->lpVtbl -> Execute(This,dwFunction,lpPrivateInputData,cbPrivateInputData,lpPrivateOutputDat,cbPrivateOutputData,dwNumBuffers,pamvaBufferInfo) )
#define IAMVideoAccelerator_QueryRenderStatus(This,dwTypeIndex,dwBufferIndex,dwFlags)    ( (This)->lpVtbl -> QueryRenderStatus(This,dwTypeIndex,dwBufferIndex,dwFlags) )
#define IAMVideoAccelerator_DisplayFrame(This,dwFlipToIndex,pMediaSample)    ( (This)->lpVtbl -> DisplayFrame(This,dwFlipToIndex,pMediaSample) )
#endif
#endif
#endif

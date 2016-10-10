/*+@@file@@----------------------------------------------------------------*//*!
 \file		AudioEngineEndpoint.h
 \par Description 
            Extension and update of headers for PellesC compiler suite.
 \par Project: 
            PellesC Headers extension
 \date		Created  on Sat Jul  2 18:50:54 2016
 \date		Modified on Sat Jul  2 18:50:54 2016
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
#ifndef __audioengineendpoint_h__
#define __audioengineendpoint_h__
#if __POCC__ >= 500
#pragma once
#endif
#ifndef __IAudioEndpoint_FWD_DEFINED__
#define __IAudioEndpoint_FWD_DEFINED__
typedef interface IAudioEndpoint IAudioEndpoint;
#endif
#ifndef __IAudioEndpointRT_FWD_DEFINED__
#define __IAudioEndpointRT_FWD_DEFINED__
typedef interface IAudioEndpointRT IAudioEndpointRT;
#endif
#ifndef __IAudioInputEndpointRT_FWD_DEFINED__
#define __IAudioInputEndpointRT_FWD_DEFINED__
typedef interface IAudioInputEndpointRT IAudioInputEndpointRT;
#endif
#ifndef __IAudioOutputEndpointRT_FWD_DEFINED__
#define __IAudioOutputEndpointRT_FWD_DEFINED__
typedef interface IAudioOutputEndpointRT IAudioOutputEndpointRT;
#endif
#ifndef __IAudioDeviceEndpoint_FWD_DEFINED__
#define __IAudioDeviceEndpoint_FWD_DEFINED__
typedef interface IAudioDeviceEndpoint IAudioDeviceEndpoint;
#endif
#ifndef __IAudioEndpointControl_FWD_DEFINED__
#define __IAudioEndpointControl_FWD_DEFINED__
typedef interface IAudioEndpointControl IAudioEndpointControl;
#endif
#include "oaidl.h"
#include "ocidl.h"
#include "propidl.h"
#include "audioapotypes.h"
#include "mmreg.h"
typedef struct AUDIO_ENDPOINT_EXCLUSIVE_CREATE_PARAMS
{
	UINT32 u32Size;
	LONGLONG hConnection;
	BOOL bIsRtCapable;
	HNSTIME hnsBufferDuration;
	HNSTIME hnsPeriod;
	UINT32 u32LatencyCoefficient;
	WAVEFORMATEX wfxDeviceFormat;
} AUDIO_ENDPOINT_EXCLUSIVE_CREATE_PARAMS;
typedef struct AUDIO_ENDPOINT_EXCLUSIVE_CREATE_PARAMS *PAUDIO_ENDPOINT_EXCLUSIVE_CREATE_PARAMS;
typedef struct AUDIO_ENDPOINT_SHARED_CREATE_PARAMS
{
	UINT32 u32Size;
	UINT32 u32TSSessionId;
	WAVEFORMATEX wfxDeviceFormat;
} AUDIO_ENDPOINT_SHARED_CREATE_PARAMS;
typedef struct AUDIO_ENDPOINT_SHARED_CREATE_PARAMS *PAUDIO_ENDPOINT_SHARED_CREATE_PARAMS;
typedef
	enum AE_POSITION_FLAGS { POSITION_INVALID = 0,
	POSITION_DISCONTINUOUS = 1,
	POSITION_CONTINUOUS = 2,
	POSITION_QPC_ERROR = 4
} AE_POSITION_FLAGS;
typedef struct AE_CURRENT_POSITION
{
	UINT64 u64DevicePosition;
	UINT64 u64StreamPosition;
	UINT64 u64PaddingFrames;
	HNSTIME hnsQPCPosition;
	FLOAT32 f32FramesPerSecond;
	AE_POSITION_FLAGS Flag;
} AE_CURRENT_POSITION;
typedef struct AE_CURRENT_POSITION *PAE_CURRENT_POSITION;
extern RPC_IF_HANDLE __MIDL_itf_audioengineendpoint_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_audioengineendpoint_0000_0000_v0_0_s_ifspec;
#ifndef __IAudioEndpoint_INTERFACE_DEFINED__
#define __IAudioEndpoint_INTERFACE_DEFINED__
extern const IID IID_IAudioEndpoint;
typedef struct IAudioEndpointVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IAudioEndpoint * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IAudioEndpoint * This);
	ULONG(STDMETHODCALLTYPE * Release) (IAudioEndpoint * This);
	HRESULT(STDMETHODCALLTYPE * GetFrameFormat) (IAudioEndpoint * This, WAVEFORMATEX ** ppFormat);
	HRESULT(STDMETHODCALLTYPE * GetFramesPerPacket) (IAudioEndpoint * This, UINT32 * pFramesPerPacket);
	HRESULT(STDMETHODCALLTYPE * GetLatency) (IAudioEndpoint * This, HNSTIME * pLatency);
	HRESULT(STDMETHODCALLTYPE * SetStreamFlags) (IAudioEndpoint * This, DWORD streamFlags);
	HRESULT(STDMETHODCALLTYPE * SetEventHandle) (IAudioEndpoint * This, HANDLE eventHandle);
	END_INTERFACE
}  IAudioEndpointVtbl;
interface IAudioEndpoint
{
	CONST_VTBL struct IAudioEndpointVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IAudioEndpoint_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IAudioEndpoint_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define IAudioEndpoint_Release(This)( (This)->lpVtbl -> Release(This) )
#define IAudioEndpoint_GetFrameFormat(This,ppFormat)( (This)->lpVtbl -> GetFrameFormat(This,ppFormat) )
#define IAudioEndpoint_GetFramesPerPacket(This,pFramesPerPacket)( (This)->lpVtbl -> GetFramesPerPacket(This,pFramesPerPacket) )
#define IAudioEndpoint_GetLatency(This,pLatency)( (This)->lpVtbl -> GetLatency(This,pLatency) )
#define IAudioEndpoint_SetStreamFlags(This,streamFlags)( (This)->lpVtbl -> SetStreamFlags(This,streamFlags) )
#define IAudioEndpoint_SetEventHandle(This,eventHandle)( (This)->lpVtbl -> SetEventHandle(This,eventHandle) )
#endif
#endif
#ifndef __IAudioEndpointRT_INTERFACE_DEFINED__
#define __IAudioEndpointRT_INTERFACE_DEFINED__
extern const IID IID_IAudioEndpointRT;
typedef struct IAudioEndpointRTVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IAudioEndpointRT * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IAudioEndpointRT * This);
	ULONG(STDMETHODCALLTYPE * Release) (IAudioEndpointRT * This);
	void (STDMETHODCALLTYPE * GetCurrentPadding) (IAudioEndpointRT * This, HNSTIME * pPadding, AE_CURRENT_POSITION * pAeCurrentPosition);
	void (STDMETHODCALLTYPE * ProcessingComplete) (IAudioEndpointRT * This);
	HRESULT(STDMETHODCALLTYPE * SetPinInactive) (IAudioEndpointRT * This);
	HRESULT(STDMETHODCALLTYPE * SetPinActive) (IAudioEndpointRT * This);
	END_INTERFACE
}  IAudioEndpointRTVtbl;
interface IAudioEndpointRT
{
	CONST_VTBL struct IAudioEndpointRTVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IAudioEndpointRT_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IAudioEndpointRT_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define IAudioEndpointRT_Release(This)( (This)->lpVtbl -> Release(This) )
#define IAudioEndpointRT_GetCurrentPadding(This,pPadding,pAeCurrentPosition)( (This)->lpVtbl -> GetCurrentPadding(This,pPadding,pAeCurrentPosition) )
#define IAudioEndpointRT_ProcessingComplete(This)( (This)->lpVtbl -> ProcessingComplete(This) )
#define IAudioEndpointRT_SetPinInactive(This)( (This)->lpVtbl -> SetPinInactive(This) )
#define IAudioEndpointRT_SetPinActive(This)( (This)->lpVtbl -> SetPinActive(This) )
#endif
#endif
#ifndef __IAudioInputEndpointRT_INTERFACE_DEFINED__
#define __IAudioInputEndpointRT_INTERFACE_DEFINED__
extern const IID IID_IAudioInputEndpointRT;
typedef struct IAudioInputEndpointRTVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IAudioInputEndpointRT * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IAudioInputEndpointRT * This);
	ULONG(STDMETHODCALLTYPE * Release) (IAudioInputEndpointRT * This);
	void (STDMETHODCALLTYPE * GetInputDataPointer) (IAudioInputEndpointRT * This, APO_CONNECTION_PROPERTY * pConnectionProperty, AE_CURRENT_POSITION * pAeTimeStamp);
	void (STDMETHODCALLTYPE * ReleaseInputDataPointer) (IAudioInputEndpointRT * This, UINT32 u32FrameCount, UINT_PTR pDataPointer);
	void (STDMETHODCALLTYPE * PulseEndpoint) (IAudioInputEndpointRT * This);
	END_INTERFACE
}  IAudioInputEndpointRTVtbl;
interface IAudioInputEndpointRT
{
	CONST_VTBL struct IAudioInputEndpointRTVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IAudioInputEndpointRT_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IAudioInputEndpointRT_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define IAudioInputEndpointRT_Release(This)( (This)->lpVtbl -> Release(This) )
#define IAudioInputEndpointRT_GetInputDataPointer(This,pConnectionProperty,pAeTimeStamp)( (This)->lpVtbl -> GetInputDataPointer(This,pConnectionProperty,pAeTimeStamp) )
#define IAudioInputEndpointRT_ReleaseInputDataPointer(This,u32FrameCount,pDataPointer)( (This)->lpVtbl -> ReleaseInputDataPointer(This,u32FrameCount,pDataPointer) )
#define IAudioInputEndpointRT_PulseEndpoint(This)( (This)->lpVtbl -> PulseEndpoint(This) )
#endif
#endif
#ifndef __IAudioOutputEndpointRT_INTERFACE_DEFINED__
#define __IAudioOutputEndpointRT_INTERFACE_DEFINED__
extern const IID IID_IAudioOutputEndpointRT;
typedef struct IAudioOutputEndpointRTVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IAudioOutputEndpointRT * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IAudioOutputEndpointRT * This);
	ULONG(STDMETHODCALLTYPE * Release) (IAudioOutputEndpointRT * This);
	UINT_PTR(STDMETHODCALLTYPE * GetOutputDataPointer) (IAudioOutputEndpointRT * This, UINT32 u32FrameCount, AE_CURRENT_POSITION * pAeTimeStamp);
	void (STDMETHODCALLTYPE * ReleaseOutputDataPointer) (IAudioOutputEndpointRT * This, const APO_CONNECTION_PROPERTY * pConnectionProperty);
	void (STDMETHODCALLTYPE * PulseEndpoint) (IAudioOutputEndpointRT * This);
	END_INTERFACE
}  IAudioOutputEndpointRTVtbl;
interface IAudioOutputEndpointRT
{
	CONST_VTBL struct IAudioOutputEndpointRTVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IAudioOutputEndpointRT_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IAudioOutputEndpointRT_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define IAudioOutputEndpointRT_Release(This)( (This)->lpVtbl -> Release(This) )
#define IAudioOutputEndpointRT_GetOutputDataPointer(This,u32FrameCount,pAeTimeStamp)( (This)->lpVtbl -> GetOutputDataPointer(This,u32FrameCount,pAeTimeStamp) )
#define IAudioOutputEndpointRT_ReleaseOutputDataPointer(This,pConnectionProperty)( (This)->lpVtbl -> ReleaseOutputDataPointer(This,pConnectionProperty) )
#define IAudioOutputEndpointRT_PulseEndpoint(This)( (This)->lpVtbl -> PulseEndpoint(This) )
#endif
#endif
#ifndef __IAudioDeviceEndpoint_INTERFACE_DEFINED__
#define __IAudioDeviceEndpoint_INTERFACE_DEFINED__
extern const IID IID_IAudioDeviceEndpoint;
typedef struct IAudioDeviceEndpointVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IAudioDeviceEndpoint * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IAudioDeviceEndpoint * This);
	ULONG(STDMETHODCALLTYPE * Release) (IAudioDeviceEndpoint * This);
	HRESULT(STDMETHODCALLTYPE * SetBuffer) (IAudioDeviceEndpoint * This, HNSTIME MaxPeriod, UINT32 u32LatencyCoefficient);
	HRESULT(STDMETHODCALLTYPE * GetRTCaps) (IAudioDeviceEndpoint * This, BOOL * pbIsRTCapable);
	HRESULT(STDMETHODCALLTYPE * GetEventDrivenCapable) (IAudioDeviceEndpoint * This, BOOL * pbisEventCapable);
	HRESULT(STDMETHODCALLTYPE * WriteExclusiveModeParametersToSharedMemory) (IAudioDeviceEndpoint * This, UINT_PTR hTargetProcess, HNSTIME hnsPeriod, HNSTIME hnsBufferDuration, UINT32 u32LatencyCoefficient, UINT32 * pu32SharedMemorySize, UINT_PTR * phSharedMemory);
	END_INTERFACE
}  IAudioDeviceEndpointVtbl;
interface IAudioDeviceEndpoint
{
	CONST_VTBL struct IAudioDeviceEndpointVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IAudioDeviceEndpoint_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IAudioDeviceEndpoint_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define IAudioDeviceEndpoint_Release(This)( (This)->lpVtbl -> Release(This) )
#define IAudioDeviceEndpoint_SetBuffer(This,MaxPeriod,u32LatencyCoefficient)( (This)->lpVtbl -> SetBuffer(This,MaxPeriod,u32LatencyCoefficient) )
#define IAudioDeviceEndpoint_GetRTCaps(This,pbIsRTCapable)( (This)->lpVtbl -> GetRTCaps(This,pbIsRTCapable) )
#define IAudioDeviceEndpoint_GetEventDrivenCapable(This,pbisEventCapable)( (This)->lpVtbl -> GetEventDrivenCapable(This,pbisEventCapable) )
#define IAudioDeviceEndpoint_WriteExclusiveModeParametersToSharedMemory(This,hTargetProcess,hnsPeriod,hnsBufferDuration,u32LatencyCoefficient,pu32SharedMemorySize,phSharedMemory)( (This)->lpVtbl -> WriteExclusiveModeParametersToSharedMemory(This,hTargetProcess,hnsPeriod,hnsBufferDuration,u32LatencyCoefficient,pu32SharedMemorySize,phSharedMemory) )
#endif
#endif
#ifndef __IAudioEndpointControl_INTERFACE_DEFINED__
#define __IAudioEndpointControl_INTERFACE_DEFINED__
extern const IID IID_IAudioEndpointControl;
typedef struct IAudioEndpointControlVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IAudioEndpointControl * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IAudioEndpointControl * This);
	ULONG(STDMETHODCALLTYPE * Release) (IAudioEndpointControl * This);
	HRESULT(STDMETHODCALLTYPE * Start) (IAudioEndpointControl * This);
	HRESULT(STDMETHODCALLTYPE * Reset) (IAudioEndpointControl * This);
	HRESULT(STDMETHODCALLTYPE * Stop) (IAudioEndpointControl * This);
	END_INTERFACE
}  IAudioEndpointControlVtbl;
interface IAudioEndpointControl
{
	CONST_VTBL struct IAudioEndpointControlVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IAudioEndpointControl_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IAudioEndpointControl_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define IAudioEndpointControl_Release(This)( (This)->lpVtbl -> Release(This) )
#define IAudioEndpointControl_Start(This)( (This)->lpVtbl -> Start(This) )
#define IAudioEndpointControl_Reset(This)( (This)->lpVtbl -> Reset(This) )
#define IAudioEndpointControl_Stop(This)( (This)->lpVtbl -> Stop(This) )
#endif
#endif
#endif

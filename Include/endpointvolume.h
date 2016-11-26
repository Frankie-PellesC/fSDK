/*+@@file@@----------------------------------------------------------------*//*!
 \file		endpointvolume.h
 \par Description 
            Extension and update of headers for PellesC compiler suite.
 \par Project: 
            PellesC Headers extension
 \date		Created  on Sat Jul  9 20:26:31 2016
 \date		Modified on Sat Jul  9 20:26:31 2016
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
#ifndef __endpointvolume_h__
#define __endpointvolume_h__
#if __POCC__ >= 500
#pragma once
#endif
#ifndef __IAudioEndpointVolumeCallback_FWD_DEFINED__
#define __IAudioEndpointVolumeCallback_FWD_DEFINED__
typedef interface IAudioEndpointVolumeCallback IAudioEndpointVolumeCallback;
#endif
#ifndef __IAudioEndpointVolume_FWD_DEFINED__
#define __IAudioEndpointVolume_FWD_DEFINED__
typedef interface IAudioEndpointVolume IAudioEndpointVolume;
#endif
#ifndef __IAudioEndpointVolumeEx_FWD_DEFINED__
#define __IAudioEndpointVolumeEx_FWD_DEFINED__
typedef interface IAudioEndpointVolumeEx IAudioEndpointVolumeEx;
#endif
#ifndef __IAudioMeterInformation_FWD_DEFINED__
#define __IAudioMeterInformation_FWD_DEFINED__
typedef interface IAudioMeterInformation IAudioMeterInformation;
#endif
#include <unknwn.h>
#include <devicetopology.h>
typedef struct AUDIO_VOLUME_NOTIFICATION_DATA
{
	GUID guidEventContext;
	BOOL bMuted;
	float fMasterVolume;
	UINT nChannels;
	float afChannelVolumes[1];
} AUDIO_VOLUME_NOTIFICATION_DATA;
typedef struct AUDIO_VOLUME_NOTIFICATION_DATA *PAUDIO_VOLUME_NOTIFICATION_DATA;
#define   ENDPOINT_HARDWARE_SUPPORT_VOLUME    0x00000001
#define   ENDPOINT_HARDWARE_SUPPORT_MUTE      0x00000002
#define   ENDPOINT_HARDWARE_SUPPORT_METER     0x00000004
extern RPC_IF_HANDLE __MIDL_itf_endpointvolume_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_endpointvolume_0000_0000_v0_0_s_ifspec;
#ifndef __IAudioEndpointVolumeCallback_INTERFACE_DEFINED__
#define __IAudioEndpointVolumeCallback_INTERFACE_DEFINED__
extern const IID IID_IAudioEndpointVolumeCallback;
typedef struct IAudioEndpointVolumeCallbackVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IAudioEndpointVolumeCallback * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IAudioEndpointVolumeCallback * This);
	ULONG(STDMETHODCALLTYPE * Release) (IAudioEndpointVolumeCallback * This);
	HRESULT(STDMETHODCALLTYPE * OnNotify) (IAudioEndpointVolumeCallback * This, PAUDIO_VOLUME_NOTIFICATION_DATA pNotify);
	END_INTERFACE
}  IAudioEndpointVolumeCallbackVtbl;
interface IAudioEndpointVolumeCallback
{
	CONST_VTBL struct IAudioEndpointVolumeCallbackVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IAudioEndpointVolumeCallback_QueryInterface(This,riid,ppvObject)    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IAudioEndpointVolumeCallback_AddRef(This)    ( (This)->lpVtbl -> AddRef(This) )
#define IAudioEndpointVolumeCallback_Release(This)    ( (This)->lpVtbl -> Release(This) )
#define IAudioEndpointVolumeCallback_OnNotify(This,pNotify)    ( (This)->lpVtbl -> OnNotify(This,pNotify) )
#endif
#endif
#ifndef __IAudioEndpointVolume_INTERFACE_DEFINED__
#define __IAudioEndpointVolume_INTERFACE_DEFINED__
extern const IID IID_IAudioEndpointVolume;
typedef struct IAudioEndpointVolumeVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IAudioEndpointVolume * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IAudioEndpointVolume * This);
	ULONG(STDMETHODCALLTYPE * Release) (IAudioEndpointVolume * This);
	HRESULT(STDMETHODCALLTYPE * RegisterControlChangeNotify) (IAudioEndpointVolume * This, IAudioEndpointVolumeCallback * pNotify);
	HRESULT(STDMETHODCALLTYPE * UnregisterControlChangeNotify) (IAudioEndpointVolume * This, IAudioEndpointVolumeCallback * pNotify);
	HRESULT(STDMETHODCALLTYPE * GetChannelCount) (IAudioEndpointVolume * This, UINT * pnChannelCount);
	HRESULT(STDMETHODCALLTYPE * SetMasterVolumeLevel) (IAudioEndpointVolume * This, float fLevelDB, LPCGUID pguidEventContext);
	HRESULT(STDMETHODCALLTYPE * SetMasterVolumeLevelScalar) (IAudioEndpointVolume * This, float fLevel, LPCGUID pguidEventContext);
	HRESULT(STDMETHODCALLTYPE * GetMasterVolumeLevel) (IAudioEndpointVolume * This, float *pfLevelDB);
	HRESULT(STDMETHODCALLTYPE * GetMasterVolumeLevelScalar) (IAudioEndpointVolume * This, float *pfLevel);
	HRESULT(STDMETHODCALLTYPE * SetChannelVolumeLevel) (IAudioEndpointVolume * This, UINT nChannel, float fLevelDB, LPCGUID pguidEventContext);
	HRESULT(STDMETHODCALLTYPE * SetChannelVolumeLevelScalar) (IAudioEndpointVolume * This, UINT nChannel, float fLevel, LPCGUID pguidEventContext);
	HRESULT(STDMETHODCALLTYPE * GetChannelVolumeLevel) (IAudioEndpointVolume * This, UINT nChannel, float *pfLevelDB);
	HRESULT(STDMETHODCALLTYPE * GetChannelVolumeLevelScalar) (IAudioEndpointVolume * This, UINT nChannel, float *pfLevel);
	HRESULT(STDMETHODCALLTYPE * SetMute) (IAudioEndpointVolume * This, BOOL bMute, LPCGUID pguidEventContext);
	HRESULT(STDMETHODCALLTYPE * GetMute) (IAudioEndpointVolume * This, BOOL * pbMute);
	HRESULT(STDMETHODCALLTYPE * GetVolumeStepInfo) (IAudioEndpointVolume * This, UINT * pnStep, UINT * pnStepCount);
	HRESULT(STDMETHODCALLTYPE * VolumeStepUp) (IAudioEndpointVolume * This, LPCGUID pguidEventContext);
	HRESULT(STDMETHODCALLTYPE * VolumeStepDown) (IAudioEndpointVolume * This, LPCGUID pguidEventContext);
	HRESULT(STDMETHODCALLTYPE * QueryHardwareSupport) (IAudioEndpointVolume * This, DWORD * pdwHardwareSupportMask);
	HRESULT(STDMETHODCALLTYPE * GetVolumeRange) (IAudioEndpointVolume * This, float *pflVolumeMindB, float *pflVolumeMaxdB, float *pflVolumeIncrementdB);
	END_INTERFACE
}  IAudioEndpointVolumeVtbl;
interface IAudioEndpointVolume
{
	CONST_VTBL struct IAudioEndpointVolumeVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IAudioEndpointVolume_QueryInterface(This,riid,ppvObject)    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IAudioEndpointVolume_AddRef(This)    ( (This)->lpVtbl -> AddRef(This) )
#define IAudioEndpointVolume_Release(This)    ( (This)->lpVtbl -> Release(This) )
#define IAudioEndpointVolume_RegisterControlChangeNotify(This,pNotify)    ( (This)->lpVtbl -> RegisterControlChangeNotify(This,pNotify) )
#define IAudioEndpointVolume_UnregisterControlChangeNotify(This,pNotify)    ( (This)->lpVtbl -> UnregisterControlChangeNotify(This,pNotify) )
#define IAudioEndpointVolume_GetChannelCount(This,pnChannelCount)    ( (This)->lpVtbl -> GetChannelCount(This,pnChannelCount) )
#define IAudioEndpointVolume_SetMasterVolumeLevel(This,fLevelDB,pguidEventContext)    ( (This)->lpVtbl -> SetMasterVolumeLevel(This,fLevelDB,pguidEventContext) )
#define IAudioEndpointVolume_SetMasterVolumeLevelScalar(This,fLevel,pguidEventContext)    ( (This)->lpVtbl -> SetMasterVolumeLevelScalar(This,fLevel,pguidEventContext) )
#define IAudioEndpointVolume_GetMasterVolumeLevel(This,pfLevelDB)    ( (This)->lpVtbl -> GetMasterVolumeLevel(This,pfLevelDB) )
#define IAudioEndpointVolume_GetMasterVolumeLevelScalar(This,pfLevel)    ( (This)->lpVtbl -> GetMasterVolumeLevelScalar(This,pfLevel) )
#define IAudioEndpointVolume_SetChannelVolumeLevel(This,nChannel,fLevelDB,pguidEventContext)    ( (This)->lpVtbl -> SetChannelVolumeLevel(This,nChannel,fLevelDB,pguidEventContext) )
#define IAudioEndpointVolume_SetChannelVolumeLevelScalar(This,nChannel,fLevel,pguidEventContext)    ( (This)->lpVtbl -> SetChannelVolumeLevelScalar(This,nChannel,fLevel,pguidEventContext) )
#define IAudioEndpointVolume_GetChannelVolumeLevel(This,nChannel,pfLevelDB)    ( (This)->lpVtbl -> GetChannelVolumeLevel(This,nChannel,pfLevelDB) )
#define IAudioEndpointVolume_GetChannelVolumeLevelScalar(This,nChannel,pfLevel)    ( (This)->lpVtbl -> GetChannelVolumeLevelScalar(This,nChannel,pfLevel) )
#define IAudioEndpointVolume_SetMute(This,bMute,pguidEventContext)    ( (This)->lpVtbl -> SetMute(This,bMute,pguidEventContext) )
#define IAudioEndpointVolume_GetMute(This,pbMute)    ( (This)->lpVtbl -> GetMute(This,pbMute) )
#define IAudioEndpointVolume_GetVolumeStepInfo(This,pnStep,pnStepCount)    ( (This)->lpVtbl -> GetVolumeStepInfo(This,pnStep,pnStepCount) )
#define IAudioEndpointVolume_VolumeStepUp(This,pguidEventContext)    ( (This)->lpVtbl -> VolumeStepUp(This,pguidEventContext) )
#define IAudioEndpointVolume_VolumeStepDown(This,pguidEventContext)    ( (This)->lpVtbl -> VolumeStepDown(This,pguidEventContext) )
#define IAudioEndpointVolume_QueryHardwareSupport(This,pdwHardwareSupportMask)    ( (This)->lpVtbl -> QueryHardwareSupport(This,pdwHardwareSupportMask) )
#define IAudioEndpointVolume_GetVolumeRange(This,pflVolumeMindB,pflVolumeMaxdB,pflVolumeIncrementdB)    ( (This)->lpVtbl -> GetVolumeRange(This,pflVolumeMindB,pflVolumeMaxdB,pflVolumeIncrementdB) )
#endif
#endif
#ifndef __IAudioEndpointVolumeEx_INTERFACE_DEFINED__
#define __IAudioEndpointVolumeEx_INTERFACE_DEFINED__
extern const IID IID_IAudioEndpointVolumeEx;
typedef struct IAudioEndpointVolumeExVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IAudioEndpointVolumeEx * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IAudioEndpointVolumeEx * This);
	ULONG(STDMETHODCALLTYPE * Release) (IAudioEndpointVolumeEx * This);
	HRESULT(STDMETHODCALLTYPE * RegisterControlChangeNotify) (IAudioEndpointVolumeEx * This, IAudioEndpointVolumeCallback * pNotify);
	HRESULT(STDMETHODCALLTYPE * UnregisterControlChangeNotify) (IAudioEndpointVolumeEx * This, IAudioEndpointVolumeCallback * pNotify);
	HRESULT(STDMETHODCALLTYPE * GetChannelCount) (IAudioEndpointVolumeEx * This, UINT * pnChannelCount);
	HRESULT(STDMETHODCALLTYPE * SetMasterVolumeLevel) (IAudioEndpointVolumeEx * This, float fLevelDB, LPCGUID pguidEventContext);
	HRESULT(STDMETHODCALLTYPE * SetMasterVolumeLevelScalar) (IAudioEndpointVolumeEx * This, float fLevel, LPCGUID pguidEventContext);
	HRESULT(STDMETHODCALLTYPE * GetMasterVolumeLevel) (IAudioEndpointVolumeEx * This, float *pfLevelDB);
	HRESULT(STDMETHODCALLTYPE * GetMasterVolumeLevelScalar) (IAudioEndpointVolumeEx * This, float *pfLevel);
	HRESULT(STDMETHODCALLTYPE * SetChannelVolumeLevel) (IAudioEndpointVolumeEx * This, UINT nChannel, float fLevelDB, LPCGUID pguidEventContext);
	HRESULT(STDMETHODCALLTYPE * SetChannelVolumeLevelScalar) (IAudioEndpointVolumeEx * This, UINT nChannel, float fLevel, LPCGUID pguidEventContext);
	HRESULT(STDMETHODCALLTYPE * GetChannelVolumeLevel) (IAudioEndpointVolumeEx * This, UINT nChannel, float *pfLevelDB);
	HRESULT(STDMETHODCALLTYPE * GetChannelVolumeLevelScalar) (IAudioEndpointVolumeEx * This, UINT nChannel, float *pfLevel);
	HRESULT(STDMETHODCALLTYPE * SetMute) (IAudioEndpointVolumeEx * This, BOOL bMute, LPCGUID pguidEventContext);
	HRESULT(STDMETHODCALLTYPE * GetMute) (IAudioEndpointVolumeEx * This, BOOL * pbMute);
	HRESULT(STDMETHODCALLTYPE * GetVolumeStepInfo) (IAudioEndpointVolumeEx * This, UINT * pnStep, UINT * pnStepCount);
	HRESULT(STDMETHODCALLTYPE * VolumeStepUp) (IAudioEndpointVolumeEx * This, LPCGUID pguidEventContext);
	HRESULT(STDMETHODCALLTYPE * VolumeStepDown) (IAudioEndpointVolumeEx * This, LPCGUID pguidEventContext);
	HRESULT(STDMETHODCALLTYPE * QueryHardwareSupport) (IAudioEndpointVolumeEx * This, DWORD * pdwHardwareSupportMask);
	HRESULT(STDMETHODCALLTYPE * GetVolumeRange) (IAudioEndpointVolumeEx * This, float *pflVolumeMindB, float *pflVolumeMaxdB, float *pflVolumeIncrementdB);
	HRESULT(STDMETHODCALLTYPE * GetVolumeRangeChannel) (IAudioEndpointVolumeEx * This, UINT iChannel, float *pflVolumeMindB, float *pflVolumeMaxdB, float *pflVolumeIncrementdB);
	END_INTERFACE
}  IAudioEndpointVolumeExVtbl;
interface IAudioEndpointVolumeEx
{
	CONST_VTBL struct IAudioEndpointVolumeExVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IAudioEndpointVolumeEx_QueryInterface(This,riid,ppvObject)    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IAudioEndpointVolumeEx_AddRef(This)    ( (This)->lpVtbl -> AddRef(This) )
#define IAudioEndpointVolumeEx_Release(This)    ( (This)->lpVtbl -> Release(This) )
#define IAudioEndpointVolumeEx_RegisterControlChangeNotify(This,pNotify)    ( (This)->lpVtbl -> RegisterControlChangeNotify(This,pNotify) )
#define IAudioEndpointVolumeEx_UnregisterControlChangeNotify(This,pNotify)    ( (This)->lpVtbl -> UnregisterControlChangeNotify(This,pNotify) )
#define IAudioEndpointVolumeEx_GetChannelCount(This,pnChannelCount)    ( (This)->lpVtbl -> GetChannelCount(This,pnChannelCount) )
#define IAudioEndpointVolumeEx_SetMasterVolumeLevel(This,fLevelDB,pguidEventContext)    ( (This)->lpVtbl -> SetMasterVolumeLevel(This,fLevelDB,pguidEventContext) )
#define IAudioEndpointVolumeEx_SetMasterVolumeLevelScalar(This,fLevel,pguidEventContext)    ( (This)->lpVtbl -> SetMasterVolumeLevelScalar(This,fLevel,pguidEventContext) )
#define IAudioEndpointVolumeEx_GetMasterVolumeLevel(This,pfLevelDB)    ( (This)->lpVtbl -> GetMasterVolumeLevel(This,pfLevelDB) )
#define IAudioEndpointVolumeEx_GetMasterVolumeLevelScalar(This,pfLevel)    ( (This)->lpVtbl -> GetMasterVolumeLevelScalar(This,pfLevel) )
#define IAudioEndpointVolumeEx_SetChannelVolumeLevel(This,nChannel,fLevelDB,pguidEventContext)    ( (This)->lpVtbl -> SetChannelVolumeLevel(This,nChannel,fLevelDB,pguidEventContext) )
#define IAudioEndpointVolumeEx_SetChannelVolumeLevelScalar(This,nChannel,fLevel,pguidEventContext)    ( (This)->lpVtbl -> SetChannelVolumeLevelScalar(This,nChannel,fLevel,pguidEventContext) )
#define IAudioEndpointVolumeEx_GetChannelVolumeLevel(This,nChannel,pfLevelDB)    ( (This)->lpVtbl -> GetChannelVolumeLevel(This,nChannel,pfLevelDB) )
#define IAudioEndpointVolumeEx_GetChannelVolumeLevelScalar(This,nChannel,pfLevel)    ( (This)->lpVtbl -> GetChannelVolumeLevelScalar(This,nChannel,pfLevel) )
#define IAudioEndpointVolumeEx_SetMute(This,bMute,pguidEventContext)    ( (This)->lpVtbl -> SetMute(This,bMute,pguidEventContext) )
#define IAudioEndpointVolumeEx_GetMute(This,pbMute)    ( (This)->lpVtbl -> GetMute(This,pbMute) )
#define IAudioEndpointVolumeEx_GetVolumeStepInfo(This,pnStep,pnStepCount)    ( (This)->lpVtbl -> GetVolumeStepInfo(This,pnStep,pnStepCount) )
#define IAudioEndpointVolumeEx_VolumeStepUp(This,pguidEventContext)    ( (This)->lpVtbl -> VolumeStepUp(This,pguidEventContext) )
#define IAudioEndpointVolumeEx_VolumeStepDown(This,pguidEventContext)    ( (This)->lpVtbl -> VolumeStepDown(This,pguidEventContext) )
#define IAudioEndpointVolumeEx_QueryHardwareSupport(This,pdwHardwareSupportMask)    ( (This)->lpVtbl -> QueryHardwareSupport(This,pdwHardwareSupportMask) )
#define IAudioEndpointVolumeEx_GetVolumeRange(This,pflVolumeMindB,pflVolumeMaxdB,pflVolumeIncrementdB)    ( (This)->lpVtbl -> GetVolumeRange(This,pflVolumeMindB,pflVolumeMaxdB,pflVolumeIncrementdB) )
#define IAudioEndpointVolumeEx_GetVolumeRangeChannel(This,iChannel,pflVolumeMindB,pflVolumeMaxdB,pflVolumeIncrementdB)    ( (This)->lpVtbl -> GetVolumeRangeChannel(This,iChannel,pflVolumeMindB,pflVolumeMaxdB,pflVolumeIncrementdB) )
#endif
#endif
#ifndef __IAudioMeterInformation_INTERFACE_DEFINED__
#define __IAudioMeterInformation_INTERFACE_DEFINED__
extern const IID IID_IAudioMeterInformation;
typedef struct IAudioMeterInformationVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IAudioMeterInformation * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IAudioMeterInformation * This);
	ULONG(STDMETHODCALLTYPE * Release) (IAudioMeterInformation * This);
	HRESULT(STDMETHODCALLTYPE * GetPeakValue) (IAudioMeterInformation * This, float *pfPeak);
	HRESULT(STDMETHODCALLTYPE * GetMeteringChannelCount) (IAudioMeterInformation * This, UINT * pnChannelCount);
	HRESULT(STDMETHODCALLTYPE * GetChannelsPeakValues) (IAudioMeterInformation * This, UINT32 u32ChannelCount, float *afPeakValues);
	HRESULT(STDMETHODCALLTYPE * QueryHardwareSupport) (IAudioMeterInformation * This, DWORD * pdwHardwareSupportMask);
	END_INTERFACE
}  IAudioMeterInformationVtbl;
interface IAudioMeterInformation
{
	CONST_VTBL struct IAudioMeterInformationVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IAudioMeterInformation_QueryInterface(This,riid,ppvObject)    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IAudioMeterInformation_AddRef(This)    ( (This)->lpVtbl -> AddRef(This) )
#define IAudioMeterInformation_Release(This)    ( (This)->lpVtbl -> Release(This) )
#define IAudioMeterInformation_GetPeakValue(This,pfPeak)    ( (This)->lpVtbl -> GetPeakValue(This,pfPeak) )
#define IAudioMeterInformation_GetMeteringChannelCount(This,pnChannelCount)    ( (This)->lpVtbl -> GetMeteringChannelCount(This,pnChannelCount) )
#define IAudioMeterInformation_GetChannelsPeakValues(This,u32ChannelCount,afPeakValues)    ( (This)->lpVtbl -> GetChannelsPeakValues(This,u32ChannelCount,afPeakValues) )
#define IAudioMeterInformation_QueryHardwareSupport(This,pdwHardwareSupportMask)    ( (This)->lpVtbl -> QueryHardwareSupport(This,pdwHardwareSupportMask) )
#endif
#endif
#endif

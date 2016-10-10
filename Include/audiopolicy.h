/*+@@file@@----------------------------------------------------------------*//*!
 \file		audiopolicy.h
 \par Description 
            Extension and update of headers for PellesC compiler suite.
 \par Project: 
            PellesC Headers extension
 \date		Created  on Sat Jul  2 18:55:22 2016
 \date		Modified on Sat Jul  2 18:55:22 2016
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
#ifndef __audiopolicy_h__
#define __audiopolicy_h__
#if __POCC__ >= 500
#pragma once
#endif
#ifndef __IAudioSessionEvents_FWD_DEFINED__
#define __IAudioSessionEvents_FWD_DEFINED__
typedef interface IAudioSessionEvents IAudioSessionEvents;
#endif
#ifndef __IAudioSessionControl_FWD_DEFINED__
#define __IAudioSessionControl_FWD_DEFINED__
typedef interface IAudioSessionControl IAudioSessionControl;
#endif
#ifndef __IAudioSessionControl2_FWD_DEFINED__
#define __IAudioSessionControl2_FWD_DEFINED__
typedef interface IAudioSessionControl2 IAudioSessionControl2;
#endif
#ifndef __IAudioSessionManager_FWD_DEFINED__
#define __IAudioSessionManager_FWD_DEFINED__
typedef interface IAudioSessionManager IAudioSessionManager;
#endif
#ifndef __IAudioVolumeDuckNotification_FWD_DEFINED__
#define __IAudioVolumeDuckNotification_FWD_DEFINED__
typedef interface IAudioVolumeDuckNotification IAudioVolumeDuckNotification;
#endif
#ifndef __IAudioSessionNotification_FWD_DEFINED__
#define __IAudioSessionNotification_FWD_DEFINED__
typedef interface IAudioSessionNotification IAudioSessionNotification;
#endif
#ifndef __IAudioSessionEnumerator_FWD_DEFINED__
#define __IAudioSessionEnumerator_FWD_DEFINED__
typedef interface IAudioSessionEnumerator IAudioSessionEnumerator;
#endif
#ifndef __IAudioSessionManager2_FWD_DEFINED__
#define __IAudioSessionManager2_FWD_DEFINED__
typedef interface IAudioSessionManager2 IAudioSessionManager2;
#endif
#include "oaidl.h"
#include "ocidl.h"
#include "propidl.h"
#include "AudioSessionTypes.h"
#include "AudioClient.h"
typedef enum AudioSessionDisconnectReason
{
	DisconnectReasonDeviceRemoval = 0,
	DisconnectReasonServerShutdown = (DisconnectReasonDeviceRemoval + 1),
	DisconnectReasonFormatChanged = (DisconnectReasonServerShutdown + 1),
	DisconnectReasonSessionLogoff = (DisconnectReasonFormatChanged + 1),
	DisconnectReasonSessionDisconnected = (DisconnectReasonSessionLogoff + 1),
	DisconnectReasonExclusiveModeOverride = (DisconnectReasonSessionDisconnected + 1)
} AudioSessionDisconnectReason;
extern RPC_IF_HANDLE __MIDL_itf_audiopolicy_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_audiopolicy_0000_0000_v0_0_s_ifspec;
#ifndef __IAudioSessionEvents_INTERFACE_DEFINED__
#define __IAudioSessionEvents_INTERFACE_DEFINED__
extern const IID IID_IAudioSessionEvents;
typedef struct IAudioSessionEventsVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IAudioSessionEvents * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IAudioSessionEvents * This);
	ULONG(STDMETHODCALLTYPE * Release) (IAudioSessionEvents * This);
	HRESULT(STDMETHODCALLTYPE * OnDisplayNameChanged) (IAudioSessionEvents * This, LPCWSTR NewDisplayName, LPCGUID EventContext);
	HRESULT(STDMETHODCALLTYPE * OnIconPathChanged) (IAudioSessionEvents * This, LPCWSTR NewIconPath, LPCGUID EventContext);
	HRESULT(STDMETHODCALLTYPE * OnSimpleVolumeChanged) (IAudioSessionEvents * This, float NewVolume, BOOL NewMute, LPCGUID EventContext);
	HRESULT(STDMETHODCALLTYPE * OnChannelVolumeChanged) (IAudioSessionEvents * This, DWORD ChannelCount, float NewChannelVolumeArray[], DWORD ChangedChannel, LPCGUID EventContext);
	HRESULT(STDMETHODCALLTYPE * OnGroupingParamChanged) (IAudioSessionEvents * This, LPCGUID NewGroupingParam, LPCGUID EventContext);
	HRESULT(STDMETHODCALLTYPE * OnStateChanged) (IAudioSessionEvents * This, AudioSessionState NewState);
	HRESULT(STDMETHODCALLTYPE * OnSessionDisconnected) (IAudioSessionEvents * This, AudioSessionDisconnectReason DisconnectReason);
	END_INTERFACE
}  IAudioSessionEventsVtbl;
interface IAudioSessionEvents
{
	CONST_VTBL struct IAudioSessionEventsVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IAudioSessionEvents_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IAudioSessionEvents_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define IAudioSessionEvents_Release(This)( (This)->lpVtbl -> Release(This) )
#define IAudioSessionEvents_OnDisplayNameChanged(This,NewDisplayName,EventContext)( (This)->lpVtbl -> OnDisplayNameChanged(This,NewDisplayName,EventContext) )
#define IAudioSessionEvents_OnIconPathChanged(This,NewIconPath,EventContext)( (This)->lpVtbl -> OnIconPathChanged(This,NewIconPath,EventContext) )
#define IAudioSessionEvents_OnSimpleVolumeChanged(This,NewVolume,NewMute,EventContext)( (This)->lpVtbl -> OnSimpleVolumeChanged(This,NewVolume,NewMute,EventContext) )
#define IAudioSessionEvents_OnChannelVolumeChanged(This,ChannelCount,NewChannelVolumeArray,ChangedChannel,EventContext)( (This)->lpVtbl -> OnChannelVolumeChanged(This,ChannelCount,NewChannelVolumeArray,ChangedChannel,EventContext) )
#define IAudioSessionEvents_OnGroupingParamChanged(This,NewGroupingParam,EventContext)( (This)->lpVtbl -> OnGroupingParamChanged(This,NewGroupingParam,EventContext) )
#define IAudioSessionEvents_OnStateChanged(This,NewState)( (This)->lpVtbl -> OnStateChanged(This,NewState) )
#define IAudioSessionEvents_OnSessionDisconnected(This,DisconnectReason)( (This)->lpVtbl -> OnSessionDisconnected(This,DisconnectReason) )
#endif
#endif
#ifndef __IAudioSessionControl_INTERFACE_DEFINED__
#define __IAudioSessionControl_INTERFACE_DEFINED__
extern const IID IID_IAudioSessionControl;
typedef struct IAudioSessionControlVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IAudioSessionControl * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IAudioSessionControl * This);
	ULONG(STDMETHODCALLTYPE * Release) (IAudioSessionControl * This);
	HRESULT(STDMETHODCALLTYPE * GetState) (IAudioSessionControl * This, AudioSessionState * pRetVal);
	HRESULT(STDMETHODCALLTYPE * GetDisplayName) (IAudioSessionControl * This, LPWSTR * pRetVal);
	HRESULT(STDMETHODCALLTYPE * SetDisplayName) (IAudioSessionControl * This, LPCWSTR Value, LPCGUID EventContext);
	HRESULT(STDMETHODCALLTYPE * GetIconPath) (IAudioSessionControl * This, LPWSTR * pRetVal);
	HRESULT(STDMETHODCALLTYPE * SetIconPath) (IAudioSessionControl * This, LPCWSTR Value, LPCGUID EventContext);
	HRESULT(STDMETHODCALLTYPE * GetGroupingParam) (IAudioSessionControl * This, GUID * pRetVal);
	HRESULT(STDMETHODCALLTYPE * SetGroupingParam) (IAudioSessionControl * This, LPCGUID Override, LPCGUID EventContext);
	HRESULT(STDMETHODCALLTYPE * RegisterAudioSessionNotification) (IAudioSessionControl * This, IAudioSessionEvents * NewNotifications);
	HRESULT(STDMETHODCALLTYPE * UnregisterAudioSessionNotification) (IAudioSessionControl * This, IAudioSessionEvents * NewNotifications);
	END_INTERFACE
}  IAudioSessionControlVtbl;
interface IAudioSessionControl
{
	CONST_VTBL struct IAudioSessionControlVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IAudioSessionControl_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IAudioSessionControl_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define IAudioSessionControl_Release(This)( (This)->lpVtbl -> Release(This) )
#define IAudioSessionControl_GetState(This,pRetVal)( (This)->lpVtbl -> GetState(This,pRetVal) )
#define IAudioSessionControl_GetDisplayName(This,pRetVal)( (This)->lpVtbl -> GetDisplayName(This,pRetVal) )
#define IAudioSessionControl_SetDisplayName(This,Value,EventContext)( (This)->lpVtbl -> SetDisplayName(This,Value,EventContext) )
#define IAudioSessionControl_GetIconPath(This,pRetVal)( (This)->lpVtbl -> GetIconPath(This,pRetVal) )
#define IAudioSessionControl_SetIconPath(This,Value,EventContext)( (This)->lpVtbl -> SetIconPath(This,Value,EventContext) )
#define IAudioSessionControl_GetGroupingParam(This,pRetVal)( (This)->lpVtbl -> GetGroupingParam(This,pRetVal) )
#define IAudioSessionControl_SetGroupingParam(This,Override,EventContext)( (This)->lpVtbl -> SetGroupingParam(This,Override,EventContext) )
#define IAudioSessionControl_RegisterAudioSessionNotification(This,NewNotifications)( (This)->lpVtbl -> RegisterAudioSessionNotification(This,NewNotifications) )
#define IAudioSessionControl_UnregisterAudioSessionNotification(This,NewNotifications)( (This)->lpVtbl -> UnregisterAudioSessionNotification(This,NewNotifications) )
#endif
#endif
#ifndef __IAudioSessionControl2_INTERFACE_DEFINED__
#define __IAudioSessionControl2_INTERFACE_DEFINED__
extern const IID IID_IAudioSessionControl2;
typedef struct IAudioSessionControl2Vtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IAudioSessionControl2 * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IAudioSessionControl2 * This);
	ULONG(STDMETHODCALLTYPE * Release) (IAudioSessionControl2 * This);
	HRESULT(STDMETHODCALLTYPE * GetState) (IAudioSessionControl2 * This, AudioSessionState * pRetVal);
	HRESULT(STDMETHODCALLTYPE * GetDisplayName) (IAudioSessionControl2 * This, LPWSTR * pRetVal);
	HRESULT(STDMETHODCALLTYPE * SetDisplayName) (IAudioSessionControl2 * This, LPCWSTR Value, LPCGUID EventContext);
	HRESULT(STDMETHODCALLTYPE * GetIconPath) (IAudioSessionControl2 * This, LPWSTR * pRetVal);
	HRESULT(STDMETHODCALLTYPE * SetIconPath) (IAudioSessionControl2 * This, LPCWSTR Value, LPCGUID EventContext);
	HRESULT(STDMETHODCALLTYPE * GetGroupingParam) (IAudioSessionControl2 * This, GUID * pRetVal);
	HRESULT(STDMETHODCALLTYPE * SetGroupingParam) (IAudioSessionControl2 * This, LPCGUID Override, LPCGUID EventContext);
	HRESULT(STDMETHODCALLTYPE * RegisterAudioSessionNotification) (IAudioSessionControl2 * This, IAudioSessionEvents * NewNotifications);
	HRESULT(STDMETHODCALLTYPE * UnregisterAudioSessionNotification) (IAudioSessionControl2 * This, IAudioSessionEvents * NewNotifications);
	HRESULT(STDMETHODCALLTYPE * GetSessionIdentifier) (IAudioSessionControl2 * This, LPWSTR * pRetVal);
	HRESULT(STDMETHODCALLTYPE * GetSessionInstanceIdentifier) (IAudioSessionControl2 * This, LPWSTR * pRetVal);
	HRESULT(STDMETHODCALLTYPE * GetProcessId) (IAudioSessionControl2 * This, DWORD * pRetVal);
	HRESULT(STDMETHODCALLTYPE * IsSystemSoundsSession) (IAudioSessionControl2 * This);
	HRESULT(STDMETHODCALLTYPE * SetDuckingPreference) (IAudioSessionControl2 * This, BOOL optOut);
	END_INTERFACE
}  IAudioSessionControl2Vtbl;
interface IAudioSessionControl2
{
	CONST_VTBL struct IAudioSessionControl2Vtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IAudioSessionControl2_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IAudioSessionControl2_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define IAudioSessionControl2_Release(This)( (This)->lpVtbl -> Release(This) )
#define IAudioSessionControl2_GetState(This,pRetVal)( (This)->lpVtbl -> GetState(This,pRetVal) )
#define IAudioSessionControl2_GetDisplayName(This,pRetVal)( (This)->lpVtbl -> GetDisplayName(This,pRetVal) )
#define IAudioSessionControl2_SetDisplayName(This,Value,EventContext)( (This)->lpVtbl -> SetDisplayName(This,Value,EventContext) )
#define IAudioSessionControl2_GetIconPath(This,pRetVal)( (This)->lpVtbl -> GetIconPath(This,pRetVal) )
#define IAudioSessionControl2_SetIconPath(This,Value,EventContext)( (This)->lpVtbl -> SetIconPath(This,Value,EventContext) )
#define IAudioSessionControl2_GetGroupingParam(This,pRetVal)( (This)->lpVtbl -> GetGroupingParam(This,pRetVal) )
#define IAudioSessionControl2_SetGroupingParam(This,Override,EventContext)( (This)->lpVtbl -> SetGroupingParam(This,Override,EventContext) )
#define IAudioSessionControl2_RegisterAudioSessionNotification(This,NewNotifications)( (This)->lpVtbl -> RegisterAudioSessionNotification(This,NewNotifications) )
#define IAudioSessionControl2_UnregisterAudioSessionNotification(This,NewNotifications)( (This)->lpVtbl -> UnregisterAudioSessionNotification(This,NewNotifications) )
#define IAudioSessionControl2_GetSessionIdentifier(This,pRetVal)( (This)->lpVtbl -> GetSessionIdentifier(This,pRetVal) )
#define IAudioSessionControl2_GetSessionInstanceIdentifier(This,pRetVal)( (This)->lpVtbl -> GetSessionInstanceIdentifier(This,pRetVal) )
#define IAudioSessionControl2_GetProcessId(This,pRetVal)( (This)->lpVtbl -> GetProcessId(This,pRetVal) )
#define IAudioSessionControl2_IsSystemSoundsSession(This)( (This)->lpVtbl -> IsSystemSoundsSession(This) )
#define IAudioSessionControl2_SetDuckingPreference(This,optOut)( (This)->lpVtbl -> SetDuckingPreference(This,optOut) )
#endif
#endif
#ifndef __IAudioSessionManager_INTERFACE_DEFINED__
#define __IAudioSessionManager_INTERFACE_DEFINED__
extern const IID IID_IAudioSessionManager;
typedef struct IAudioSessionManagerVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IAudioSessionManager * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IAudioSessionManager * This);
	ULONG(STDMETHODCALLTYPE * Release) (IAudioSessionManager * This);
	HRESULT(STDMETHODCALLTYPE * GetAudioSessionControl) (IAudioSessionManager * This, LPCGUID AudioSessionGuid, DWORD StreamFlags, IAudioSessionControl ** SessionControl);
	HRESULT(STDMETHODCALLTYPE * GetSimpleAudioVolume) (IAudioSessionManager * This, LPCGUID AudioSessionGuid, DWORD StreamFlags, ISimpleAudioVolume ** AudioVolume);
	END_INTERFACE
}  IAudioSessionManagerVtbl;
interface IAudioSessionManager
{
	CONST_VTBL struct IAudioSessionManagerVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IAudioSessionManager_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IAudioSessionManager_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define IAudioSessionManager_Release(This)( (This)->lpVtbl -> Release(This) )
#define IAudioSessionManager_GetAudioSessionControl(This,AudioSessionGuid,StreamFlags,SessionControl)( (This)->lpVtbl -> GetAudioSessionControl(This,AudioSessionGuid,StreamFlags,SessionControl) )
#define IAudioSessionManager_GetSimpleAudioVolume(This,AudioSessionGuid,StreamFlags,AudioVolume)( (This)->lpVtbl -> GetSimpleAudioVolume(This,AudioSessionGuid,StreamFlags,AudioVolume) )
#endif
#endif
#ifndef __IAudioVolumeDuckNotification_INTERFACE_DEFINED__
#define __IAudioVolumeDuckNotification_INTERFACE_DEFINED__
extern const IID IID_IAudioVolumeDuckNotification;
typedef struct IAudioVolumeDuckNotificationVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IAudioVolumeDuckNotification * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IAudioVolumeDuckNotification * This);
	ULONG(STDMETHODCALLTYPE * Release) (IAudioVolumeDuckNotification * This);
	HRESULT(STDMETHODCALLTYPE * OnVolumeDuckNotification) (IAudioVolumeDuckNotification * This, LPCWSTR sessionID, UINT32 countCommunicationSessions);
	HRESULT(STDMETHODCALLTYPE * OnVolumeUnduckNotification) (IAudioVolumeDuckNotification * This, LPCWSTR sessionID);
	END_INTERFACE
}  IAudioVolumeDuckNotificationVtbl;
interface IAudioVolumeDuckNotification
{
	CONST_VTBL struct IAudioVolumeDuckNotificationVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IAudioVolumeDuckNotification_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IAudioVolumeDuckNotification_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define IAudioVolumeDuckNotification_Release(This)( (This)->lpVtbl -> Release(This) )
#define IAudioVolumeDuckNotification_OnVolumeDuckNotification(This,sessionID,countCommunicationSessions)( (This)->lpVtbl -> OnVolumeDuckNotification(This,sessionID,countCommunicationSessions) )
#define IAudioVolumeDuckNotification_OnVolumeUnduckNotification(This,sessionID)( (This)->lpVtbl -> OnVolumeUnduckNotification(This,sessionID) )
#endif
#endif
#ifndef __IAudioSessionNotification_INTERFACE_DEFINED__
#define __IAudioSessionNotification_INTERFACE_DEFINED__
extern const IID IID_IAudioSessionNotification;
typedef struct IAudioSessionNotificationVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IAudioSessionNotification * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IAudioSessionNotification * This);
	ULONG(STDMETHODCALLTYPE * Release) (IAudioSessionNotification * This);
	HRESULT(STDMETHODCALLTYPE * OnSessionCreated) (IAudioSessionNotification * This, IAudioSessionControl * NewSession);
	END_INTERFACE
}  IAudioSessionNotificationVtbl;
interface IAudioSessionNotification
{
	CONST_VTBL struct IAudioSessionNotificationVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IAudioSessionNotification_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IAudioSessionNotification_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define IAudioSessionNotification_Release(This)( (This)->lpVtbl -> Release(This) )
#define IAudioSessionNotification_OnSessionCreated(This,NewSession)( (This)->lpVtbl -> OnSessionCreated(This,NewSession) )
#endif
#endif
#ifndef __IAudioSessionEnumerator_INTERFACE_DEFINED__
#define __IAudioSessionEnumerator_INTERFACE_DEFINED__
extern const IID IID_IAudioSessionEnumerator;
typedef struct IAudioSessionEnumeratorVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IAudioSessionEnumerator * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IAudioSessionEnumerator * This);
	ULONG(STDMETHODCALLTYPE * Release) (IAudioSessionEnumerator * This);
	HRESULT(STDMETHODCALLTYPE * GetCount) (IAudioSessionEnumerator * This, int *SessionCount);
	HRESULT(STDMETHODCALLTYPE * GetSession) (IAudioSessionEnumerator * This, int SessionCount, IAudioSessionControl ** Session);
	END_INTERFACE
}  IAudioSessionEnumeratorVtbl;
interface IAudioSessionEnumerator
{
	CONST_VTBL struct IAudioSessionEnumeratorVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IAudioSessionEnumerator_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IAudioSessionEnumerator_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define IAudioSessionEnumerator_Release(This)( (This)->lpVtbl -> Release(This) )
#define IAudioSessionEnumerator_GetCount(This,SessionCount)( (This)->lpVtbl -> GetCount(This,SessionCount) )
#define IAudioSessionEnumerator_GetSession(This,SessionCount,Session)( (This)->lpVtbl -> GetSession(This,SessionCount,Session) )
#endif
#endif
#ifndef __IAudioSessionManager2_INTERFACE_DEFINED__
#define __IAudioSessionManager2_INTERFACE_DEFINED__
extern const IID IID_IAudioSessionManager2;
typedef struct IAudioSessionManager2Vtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IAudioSessionManager2 * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IAudioSessionManager2 * This);
	ULONG(STDMETHODCALLTYPE * Release) (IAudioSessionManager2 * This);
	HRESULT(STDMETHODCALLTYPE * GetAudioSessionControl) (IAudioSessionManager2 * This, LPCGUID AudioSessionGuid, DWORD StreamFlags, IAudioSessionControl ** SessionControl);
	HRESULT(STDMETHODCALLTYPE * GetSimpleAudioVolume) (IAudioSessionManager2 * This, LPCGUID AudioSessionGuid, DWORD StreamFlags, ISimpleAudioVolume ** AudioVolume);
	HRESULT(STDMETHODCALLTYPE * GetSessionEnumerator) (IAudioSessionManager2 * This, IAudioSessionEnumerator ** SessionEnum);
	HRESULT(STDMETHODCALLTYPE * RegisterSessionNotification) (IAudioSessionManager2 * This, IAudioSessionNotification * SessionNotification);
	HRESULT(STDMETHODCALLTYPE * UnregisterSessionNotification) (IAudioSessionManager2 * This, IAudioSessionNotification * SessionNotification);
	HRESULT(STDMETHODCALLTYPE * RegisterDuckNotification) (IAudioSessionManager2 * This, LPCWSTR sessionID, IAudioVolumeDuckNotification * duckNotification);
	HRESULT(STDMETHODCALLTYPE * UnregisterDuckNotification) (IAudioSessionManager2 * This, IAudioVolumeDuckNotification * duckNotification);
	END_INTERFACE
}  IAudioSessionManager2Vtbl;
interface IAudioSessionManager2
{
	CONST_VTBL struct IAudioSessionManager2Vtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IAudioSessionManager2_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IAudioSessionManager2_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define IAudioSessionManager2_Release(This)( (This)->lpVtbl -> Release(This) )
#define IAudioSessionManager2_GetAudioSessionControl(This,AudioSessionGuid,StreamFlags,SessionControl)( (This)->lpVtbl -> GetAudioSessionControl(This,AudioSessionGuid,StreamFlags,SessionControl) )
#define IAudioSessionManager2_GetSimpleAudioVolume(This,AudioSessionGuid,StreamFlags,AudioVolume)( (This)->lpVtbl -> GetSimpleAudioVolume(This,AudioSessionGuid,StreamFlags,AudioVolume) )
#define IAudioSessionManager2_GetSessionEnumerator(This,SessionEnum)( (This)->lpVtbl -> GetSessionEnumerator(This,SessionEnum) )
#define IAudioSessionManager2_RegisterSessionNotification(This,SessionNotification)( (This)->lpVtbl -> RegisterSessionNotification(This,SessionNotification) )
#define IAudioSessionManager2_UnregisterSessionNotification(This,SessionNotification)( (This)->lpVtbl -> UnregisterSessionNotification(This,SessionNotification) )
#define IAudioSessionManager2_RegisterDuckNotification(This,sessionID,duckNotification)( (This)->lpVtbl -> RegisterDuckNotification(This,sessionID,duckNotification) )
#define IAudioSessionManager2_UnregisterDuckNotification(This,duckNotification)( (This)->lpVtbl -> UnregisterDuckNotification(This,duckNotification) )
#endif
#endif
#endif

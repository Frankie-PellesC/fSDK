/*+@@file@@----------------------------------------------------------------*//*!
 \file		listeneradapter.h
 \par Description 
            Extension and update of headers for PellesC compiler suite.
 \par Project: 
            PellesC Headers extension
 \date		Created  on Sun Jul 17 22:03:03 2016
 \date		Modified on Sun Jul 17 22:03:03 2016
 \author	frankie
\*//*-@@file@@----------------------------------------------------------------*/

#ifndef _LISTENER_ADAPTER_H_
#define _LISTENER_ADAPTER_H_
#if __POCC__ >= 500
#pragma once
#endif
typedef VOID(*PFN_WEBHOST_LISTENER_CONFIG_MANAGER_CONNECTED) (VOID *pContext);
typedef VOID(*PFN_WEBHOST_LISTENER_CONFIG_MANAGER_DISCONNECT) (VOID *pContext, HRESULT hr);
typedef VOID(*PFN_WEBHOST_LISTENER_CONFIG_MANAGER_INITIALIZATION_COMPLETED) (VOID *pContext);
typedef VOID(*PFN_WEBHOST_LISTENER_APPLICATION_POOL_CREATED) (VOID *pContext, LPCWSTR AppPoolId, PSID PSID);
typedef VOID(*PFN_WEBHOST_LISTENER_APPLICATION_POOL_DELETED) (VOID *pContext, LPCWSTR AppPoolId);
typedef VOID(*PFN_WEBHOST_LISTENER_APPLICATION_POOL_IDENTITY_CHANGED) (VOID *pContext, LPCWSTR AppPoolId, PSID PSID);
typedef VOID(*PFN_WEBHOST_LISTENER_APPLICATION_POOL_STATE_CHANGED) (VOID *pContext, LPCWSTR AppPoolId, BOOL fIsEnabled);
typedef VOID(*PFN_WEBHOST_LISTENER_APPLICATION_POOL_CAN_OPEN_NEW_LISTENER_CHANNEL_INSTANCE) (VOID *pContext, LPCWSTR AppPoolId, DWORD ListenerChannelId);
typedef VOID(*PFN_WEBHOST_LISTENER_APPLICATION_POOL_ALL_LISTENER_CHANNEL_INSTANCES_STOPPED) (VOID *pContext, LPCWSTR AppPoolId, DWORD ListenerChannelId);
typedef VOID(*PFN_WEBHOST_LISTENER_APPLICATION_CREATED) (VOID *pContext, LPCWSTR AppKey, LPCWSTR Path, DWORD SiteId, LPCWSTR AppPoolId, PBYTE Bindings, DWORD NumberOfBindings, BOOL RequestsBlocked);
typedef VOID(*PFN_WEBHOST_LISTENER_APPLICATION_DELETED) (VOID *pContext, LPCWSTR AppKey);
typedef VOID(*PFN_WEBHOST_LISTENER_APPLICATION_BINDINGS_CHANGED) (VOID *pContext, LPCWSTR AppKey, PBYTE Bindings, DWORD NumberOfBindings);
typedef VOID(*PFN_WEBHOST_LISTENER_APPLICATION_APP_POOL_CHANGED) (VOID *pContext, LPCWSTR AppKey, LPCWSTR AppPoolId);
typedef VOID(*PFN_WEBHOST_LISTENER_APPLICATION_REQUESTS_BLOCKED_CHANGED) (VOID *pContext, LPCWSTR AppKey, BOOL RequestsBlocked);
struct WEBHOST_LISTENER_CALLBACKS
{
	DWORD dwBytesInCallbackStructure;
	PFN_WEBHOST_LISTENER_CONFIG_MANAGER_CONNECTED pfnWebhostListenerConfigManagerConnected;
	PFN_WEBHOST_LISTENER_CONFIG_MANAGER_DISCONNECT pfnWebhostListenerConfigManagerDisconnected;
	PFN_WEBHOST_LISTENER_CONFIG_MANAGER_INITIALIZATION_COMPLETED pfnWebhostListenerConfigManagerInitializationCompleted;
	PFN_WEBHOST_LISTENER_APPLICATION_POOL_CREATED pfnWebhostListenerApplicationPoolCreated;
	PFN_WEBHOST_LISTENER_APPLICATION_POOL_DELETED pfnWebhostListenerApplicationPoolDeleted;
	PFN_WEBHOST_LISTENER_APPLICATION_POOL_IDENTITY_CHANGED pfnWebhostListenerApplicationPoolIdentityChanged;
	PFN_WEBHOST_LISTENER_APPLICATION_POOL_STATE_CHANGED pfnWebhostListenerApplicationPoolStateChanged;
	PFN_WEBHOST_LISTENER_APPLICATION_POOL_CAN_OPEN_NEW_LISTENER_CHANNEL_INSTANCE pfnWebhostListenerApplicationPoolCanOpenNewListenerChannelInstance;
	PFN_WEBHOST_LISTENER_APPLICATION_POOL_ALL_LISTENER_CHANNEL_INSTANCES_STOPPED pfnWebhostListenerApplicationPoolAllListenerChannelInstancesStopped;
	PFN_WEBHOST_LISTENER_APPLICATION_CREATED pfnWebhostListenerApplicationCreated;
	PFN_WEBHOST_LISTENER_APPLICATION_DELETED pfnWebhostListenerApplicationDeleted;
	PFN_WEBHOST_LISTENER_APPLICATION_BINDINGS_CHANGED pfnWebhostListenerApplicationBindingsChanged;
	PFN_WEBHOST_LISTENER_APPLICATION_APP_POOL_CHANGED pfnWebhostListenerApplicationAppPoolChanged;
	PFN_WEBHOST_LISTENER_APPLICATION_REQUESTS_BLOCKED_CHANGED pfnWebhostListenerApplicationRequestsBlockedChanged;
};
HRESULT WebhostGetVersion(DWORD *pMajorVersion, DWORD *pMinorVersion);
HRESULT WebhostRegisterProtocol(LPCWSTR ProtocolId, VOID *pListenerCallbacks, VOID *pContext, DWORD *pProtocolHandle);
HRESULT WebhostUnregisterProtocol(DWORD ProtocolHandle);
HRESULT WebhostOpenListenerChannelInstance(DWORD ProtocolHandle, LPCWSTR AppPoolId, DWORD ListenerChannelId, PBYTE ListenerChannelBlob, DWORD ListenerChannelBlobByteCount);
HRESULT WebhostCloseAllListenerChannelInstances(DWORD ProtocolHandle, LPCWSTR AppPoolId, DWORD ListenerChannelId);
#endif

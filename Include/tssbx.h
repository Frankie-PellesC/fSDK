/*+@@file@@----------------------------------------------------------------*//*!
 \file		tssbx.h
 \par Description 
            Extension and update of headers for PellesC compiler suite.
 \par Project: 
            PellesC Headers extension
 \date		Created  on Sat Sep 17 13:03:49 2016
 \date		Modified on Sat Sep 17 13:03:49 2016
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
#ifndef __tssbx_h__
#define __tssbx_h__
#if __POCC__ >= 500
#pragma once
#endif
#ifndef __IWTSSBPlugin_FWD_DEFINED__
#define __IWTSSBPlugin_FWD_DEFINED__
typedef interface IWTSSBPlugin IWTSSBPlugin;
#endif
#include "oaidl.h"
#include "ocidl.h"
#define PLUGIN_CAPABILITY_EXTERNAL_REDIRECTION 0x1
extern RPC_IF_HANDLE __MIDL_itf_tssbx_0000_0000_ClientIfHandle;
extern RPC_IF_HANDLE __MIDL_itf_tssbx_0000_0000_ServerIfHandle;
#ifndef __IWTSSBPlugin_INTERFACE_DEFINED__
#define __IWTSSBPlugin_INTERFACE_DEFINED__
#define	MaxFQDN_Len	( 256 )
#define	MaxNetBiosName_Len	( 16 )
#define	MaxNumOfExposed_IPs	( 12 )
#define	MaxUserName_Len	( 104 )
#define	MaxDomainName_Len	( 256 )
#define	MaxFarm_Len	( 256 )
#define	MaxAppName_Len	( 256 )
typedef enum __MIDL_IWTSSBPlugin_0001
{
	WTSSBX_MACHINE_DRAIN_UNSPEC = 0,
	WTSSBX_MACHINE_DRAIN_OFF = 0x1,
	WTSSBX_MACHINE_DRAIN_ON = 0x2
} WTSSBX_MACHINE_DRAIN;
typedef enum __MIDL_IWTSSBPlugin_0002
{
	WTSSBX_MACHINE_SESSION_MODE_UNSPEC = 0,
	WTSSBX_MACHINE_SESSION_MODE_SINGLE = 0x1,
	WTSSBX_MACHINE_SESSION_MODE_MULTIPLE = 0x2
} WTSSBX_MACHINE_SESSION_MODE;
typedef enum __MIDL_IWTSSBPlugin_0003
{
	WTSSBX_ADDRESS_FAMILY_AF_UNSPEC = 0,
	WTSSBX_ADDRESS_FAMILY_AF_INET = 0x1,
	WTSSBX_ADDRESS_FAMILY_AF_INET6 = 0x2,
	WTSSBX_ADDRESS_FAMILY_AF_IPX = 0x3,
	WTSSBX_ADDRESS_FAMILY_AF_NETBIOS = 0x4
} WTSSBX_ADDRESS_FAMILY;
typedef struct __MIDL_IWTSSBPlugin_0004
{
	WTSSBX_ADDRESS_FAMILY AddressFamily;
	BYTE Address[16];
	unsigned short PortNumber;
	DWORD dwScope;
} WTSSBX_IP_ADDRESS;
typedef enum __MIDL_IWTSSBPlugin_0005
{
	WTSSBX_MACHINE_STATE_UNSPEC = 0,
	WTSSBX_MACHINE_STATE_READY = 0x1,
	WTSSBX_MACHINE_STATE_SYNCHRONIZING = 0x2
} WTSSBX_MACHINE_STATE;
typedef struct __MIDL_IWTSSBPlugin_0006
{
	WCHAR wczMachineFQDN[257];
	WCHAR wczMachineNetBiosName[17];
	DWORD dwNumOfIPAddr;
	WTSSBX_IP_ADDRESS IPaddr[12];
} WTSSBX_MACHINE_CONNECT_INFO;
typedef struct __MIDL_IWTSSBPlugin_0007
{
	WTSSBX_MACHINE_CONNECT_INFO ClientConnectInfo;
	WCHAR wczFarmName[257];
	WTSSBX_IP_ADDRESS InternalIPAddress;
	DWORD dwMaxSessionsLimit;
	DWORD ServerWeight;
	WTSSBX_MACHINE_SESSION_MODE SingleSessionMode;
	WTSSBX_MACHINE_DRAIN InDrain;
	WTSSBX_MACHINE_STATE MachineState;
} WTSSBX_MACHINE_INFO;
typedef enum __MIDL_IWTSSBPlugin_0008
{
	WTSSBX_SESSION_STATE_UNSPEC = 0,
	WTSSBX_SESSION_STATE_ACTIVE = 0x1,
	WTSSBX_SESSION_STATE_DISCONNECTED = 0x2
} WTSSBX_SESSION_STATE;
typedef struct __MIDL_IWTSSBPlugin_0009
{
	WCHAR wszUserName[105];
	WCHAR wszDomainName[257];
	WCHAR ApplicationType[257];
	DWORD dwSessionId;
	FILETIME CreateTime;
	FILETIME DisconnectTime;
	WTSSBX_SESSION_STATE SessionState;
} WTSSBX_SESSION_INFO;
typedef enum __MIDL_IWTSSBPlugin_0010
{
	WTSSBX_NOTIFICATION_REMOVED = 0x1,
	WTSSBX_NOTIFICATION_CHANGED = 0x2,
	WTSSBX_NOTIFICATION_ADDED = 0x4,
	WTSSBX_NOTIFICATION_RESYNC = 0x8
} WTSSBX_NOTIFICATION_TYPE;
extern const IID IID_IWTSSBPlugin;
typedef struct IWTSSBPluginVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IWTSSBPlugin * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IWTSSBPlugin * This);
	ULONG(STDMETHODCALLTYPE * Release) (IWTSSBPlugin * This);
	HRESULT(STDMETHODCALLTYPE * Initialize) (IWTSSBPlugin * This, DWORD * PluginCapabilities);
	HRESULT(STDMETHODCALLTYPE * WTSSBX_MachineChangeNotification) (IWTSSBPlugin * This, WTSSBX_NOTIFICATION_TYPE NotificationType, long MachineId, WTSSBX_MACHINE_INFO * pMachineInfo);
	HRESULT(STDMETHODCALLTYPE * WTSSBX_SessionChangeNotification) (IWTSSBPlugin * This, WTSSBX_NOTIFICATION_TYPE NotificationType, long MachineId, DWORD NumOfSessions, WTSSBX_SESSION_INFO SessionInfo[]);
	HRESULT(STDMETHODCALLTYPE * WTSSBX_GetMostSuitableServer) (IWTSSBPlugin * This, WCHAR * UserName, WCHAR * DomainName, WCHAR * ApplicationType, WCHAR * FarmName, long *pMachineId);
	HRESULT(STDMETHODCALLTYPE * Terminated) (IWTSSBPlugin * This);
	HRESULT(STDMETHODCALLTYPE * WTSSBX_GetUserExternalSession) (IWTSSBPlugin * This, WCHAR * UserName, WCHAR * DomainName, WCHAR * ApplicationType, WTSSBX_IP_ADDRESS * RedirectorInternalIP, DWORD * pSessionId, WTSSBX_MACHINE_CONNECT_INFO * pMachineConnectInfo);
	END_INTERFACE
}  IWTSSBPluginVtbl;
interface IWTSSBPlugin
{
	CONST_VTBL struct IWTSSBPluginVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IWTSSBPlugin_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IWTSSBPlugin_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IWTSSBPlugin_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IWTSSBPlugin_Initialize(This,PluginCapabilities) ( (This)->lpVtbl -> Initialize(This,PluginCapabilities) )
#define IWTSSBPlugin_WTSSBX_MachineChangeNotification(This,NotificationType,MachineId,pMachineInfo) ( (This)->lpVtbl -> WTSSBX_MachineChangeNotification(This,NotificationType,MachineId,pMachineInfo) )
#define IWTSSBPlugin_WTSSBX_SessionChangeNotification(This,NotificationType,MachineId,NumOfSessions,SessionInfo) ( (This)->lpVtbl -> WTSSBX_SessionChangeNotification(This,NotificationType,MachineId,NumOfSessions,SessionInfo) )
#define IWTSSBPlugin_WTSSBX_GetMostSuitableServer(This,UserName,DomainName,ApplicationType,FarmName,pMachineId) ( (This)->lpVtbl -> WTSSBX_GetMostSuitableServer(This,UserName,DomainName,ApplicationType,FarmName,pMachineId) )
#define IWTSSBPlugin_Terminated(This) ( (This)->lpVtbl -> Terminated(This) )
#define IWTSSBPlugin_WTSSBX_GetUserExternalSession(This,UserName,DomainName,ApplicationType,RedirectorInternalIP,pSessionId,pMachineConnectInfo) ( (This)->lpVtbl -> WTSSBX_GetUserExternalSession(This,UserName,DomainName,ApplicationType,RedirectorInternalIP,pSessionId,pMachineConnectInfo) )
#endif
#endif
#endif

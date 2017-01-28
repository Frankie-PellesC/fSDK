/*+@@file@@----------------------------------------------------------------*//*!
 \file		rdpencomapi.h
 \par Description 
            Extension and update of headers for PellesC compiler suite.
 \par Project: 
            PellesC Headers extension
 \date		Created  on Fri Sep 16 19:26:06 2016
 \date		Modified on Fri Sep 16 19:26:06 2016
 \author	frankie
\*//*-@@file@@----------------------------------------------------------------*/

#ifndef __REQUIRED_RPCNDR_H_VERSION__
#define __REQUIRED_RPCNDR_H_VERSION__ 475
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
#ifndef __rdpencomapi_h__
#define __rdpencomapi_h__
#if __POCC__ >= 500
#pragma once
#endif
#ifndef __IRDPSRAPIDebug_FWD_DEFINED__
#define __IRDPSRAPIDebug_FWD_DEFINED__
typedef interface IRDPSRAPIDebug IRDPSRAPIDebug;
#endif
#ifndef ___IRDPSessionEvents_FWD_DEFINED__
#define ___IRDPSessionEvents_FWD_DEFINED__
typedef interface _IRDPSessionEvents _IRDPSessionEvents;
#endif
#ifndef __IRDPSRAPIApplication_FWD_DEFINED__
#define __IRDPSRAPIApplication_FWD_DEFINED__
typedef interface IRDPSRAPIApplication IRDPSRAPIApplication;
#endif
#ifndef __IRDPSRAPIWindow_FWD_DEFINED__
#define __IRDPSRAPIWindow_FWD_DEFINED__
typedef interface IRDPSRAPIWindow IRDPSRAPIWindow;
#endif
#ifndef __IRDPSRAPIWindowList_FWD_DEFINED__
#define __IRDPSRAPIWindowList_FWD_DEFINED__
typedef interface IRDPSRAPIWindowList IRDPSRAPIWindowList;
#endif
#ifndef __IRDPSRAPIApplicationList_FWD_DEFINED__
#define __IRDPSRAPIApplicationList_FWD_DEFINED__
typedef interface IRDPSRAPIApplicationList IRDPSRAPIApplicationList;
#endif
#ifndef __IRDPSRAPIApplicationFilter_FWD_DEFINED__
#define __IRDPSRAPIApplicationFilter_FWD_DEFINED__
typedef interface IRDPSRAPIApplicationFilter IRDPSRAPIApplicationFilter;
#endif
#ifndef __IRDPSRAPISessionProperties_FWD_DEFINED__
#define __IRDPSRAPISessionProperties_FWD_DEFINED__
typedef interface IRDPSRAPISessionProperties IRDPSRAPISessionProperties;
#endif
#ifndef __IRDPSRAPIInvitation_FWD_DEFINED__
#define __IRDPSRAPIInvitation_FWD_DEFINED__
typedef interface IRDPSRAPIInvitation IRDPSRAPIInvitation;
#endif
#ifndef __IRDPSRAPIInvitationManager_FWD_DEFINED__
#define __IRDPSRAPIInvitationManager_FWD_DEFINED__
typedef interface IRDPSRAPIInvitationManager IRDPSRAPIInvitationManager;
#endif
#ifndef __IRDPSRAPITcpConnectionInfo_FWD_DEFINED__
#define __IRDPSRAPITcpConnectionInfo_FWD_DEFINED__
typedef interface IRDPSRAPITcpConnectionInfo IRDPSRAPITcpConnectionInfo;
#endif
#ifndef __IRDPSRAPIAttendee_FWD_DEFINED__
#define __IRDPSRAPIAttendee_FWD_DEFINED__
typedef interface IRDPSRAPIAttendee IRDPSRAPIAttendee;
#endif
#ifndef __IRDPSRAPIAttendeeManager_FWD_DEFINED__
#define __IRDPSRAPIAttendeeManager_FWD_DEFINED__
typedef interface IRDPSRAPIAttendeeManager IRDPSRAPIAttendeeManager;
#endif
#ifndef __IRDPSRAPIAttendeeDisconnectInfo_FWD_DEFINED__
#define __IRDPSRAPIAttendeeDisconnectInfo_FWD_DEFINED__
typedef interface IRDPSRAPIAttendeeDisconnectInfo IRDPSRAPIAttendeeDisconnectInfo;
#endif
#ifndef __IRDPSRAPIVirtualChannel_FWD_DEFINED__
#define __IRDPSRAPIVirtualChannel_FWD_DEFINED__
typedef interface IRDPSRAPIVirtualChannel IRDPSRAPIVirtualChannel;
#endif
#ifndef __IRDPSRAPIVirtualChannelManager_FWD_DEFINED__
#define __IRDPSRAPIVirtualChannelManager_FWD_DEFINED__
typedef interface IRDPSRAPIVirtualChannelManager IRDPSRAPIVirtualChannelManager;
#endif
#ifndef __IRDPSRAPISharingSession_FWD_DEFINED__
#define __IRDPSRAPISharingSession_FWD_DEFINED__
typedef interface IRDPSRAPISharingSession IRDPSRAPISharingSession;
#endif
#ifndef __IRDPSRAPIViewer_FWD_DEFINED__
#define __IRDPSRAPIViewer_FWD_DEFINED__
typedef interface IRDPSRAPIViewer IRDPSRAPIViewer;
#endif
#ifndef __RDPViewer_FWD_DEFINED__
#define __RDPViewer_FWD_DEFINED__
typedef struct RDPViewer RDPViewer;
#endif
#ifndef __RDPSession_FWD_DEFINED__
#define __RDPSession_FWD_DEFINED__
typedef struct RDPSession RDPSession;
#endif
#ifndef __RDPSRAPISessionProperties_FWD_DEFINED__
#define __RDPSRAPISessionProperties_FWD_DEFINED__
typedef struct RDPSRAPISessionProperties RDPSRAPISessionProperties;
#endif
#ifndef __RDPSRAPIInvitationManager_FWD_DEFINED__
#define __RDPSRAPIInvitationManager_FWD_DEFINED__
typedef struct RDPSRAPIInvitationManager RDPSRAPIInvitationManager;
#endif
#ifndef __RDPSRAPIInvitation_FWD_DEFINED__
#define __RDPSRAPIInvitation_FWD_DEFINED__
typedef struct RDPSRAPIInvitation RDPSRAPIInvitation;
#endif
#ifndef __RDPSRAPIAttendeeManager_FWD_DEFINED__
#define __RDPSRAPIAttendeeManager_FWD_DEFINED__
typedef struct RDPSRAPIAttendeeManager RDPSRAPIAttendeeManager;
#endif
#ifndef __RDPSRAPIAttendee_FWD_DEFINED__
#define __RDPSRAPIAttendee_FWD_DEFINED__
typedef struct RDPSRAPIAttendee RDPSRAPIAttendee;
#endif
#ifndef __RDPSRAPIAttendeeDisconnectInfo_FWD_DEFINED__
#define __RDPSRAPIAttendeeDisconnectInfo_FWD_DEFINED__
typedef struct RDPSRAPIAttendeeDisconnectInfo RDPSRAPIAttendeeDisconnectInfo;
#endif
#ifndef __RDPSRAPIApplicationFilter_FWD_DEFINED__
#define __RDPSRAPIApplicationFilter_FWD_DEFINED__
typedef struct RDPSRAPIApplicationFilter RDPSRAPIApplicationFilter;
#endif
#ifndef __RDPSRAPIApplicationList_FWD_DEFINED__
#define __RDPSRAPIApplicationList_FWD_DEFINED__
typedef struct RDPSRAPIApplicationList RDPSRAPIApplicationList;
#endif
#ifndef __RDPSRAPIApplication_FWD_DEFINED__
#define __RDPSRAPIApplication_FWD_DEFINED__
typedef struct RDPSRAPIApplication RDPSRAPIApplication;
#endif
#ifndef __RDPSRAPIWindowList_FWD_DEFINED__
#define __RDPSRAPIWindowList_FWD_DEFINED__
typedef struct RDPSRAPIWindowList RDPSRAPIWindowList;
#endif
#ifndef __RDPSRAPIWindow_FWD_DEFINED__
#define __RDPSRAPIWindow_FWD_DEFINED__
typedef struct RDPSRAPIWindow RDPSRAPIWindow;
#endif
#ifndef __RDPSRAPITcpConnectionInfo_FWD_DEFINED__
#define __RDPSRAPITcpConnectionInfo_FWD_DEFINED__
typedef struct RDPSRAPITcpConnectionInfo RDPSRAPITcpConnectionInfo;
#endif
#include <oaidl.h>
#include <ocidl.h>
#define	DISPID_RDPSRAPI_METHOD_OPEN	( 100 )
#define	DISPID_RDPSRAPI_METHOD_CLOSE	( 101 )
#define	DISPID_RDPSRAPI_METHOD_SETSHAREDRECT	( 102 )
#define	DISPID_RDPSRAPI_METHOD_GETSHAREDRECT	( 103 )
#define	DISPID_RDPSRAPI_METHOD_VIEWERCONNECT	( 104 )
#define	DISPID_RDPSRAPI_METHOD_VIEWERDISCONNECT	( 105 )
#define	DISPID_RDPSRAPI_METHOD_TERMINATE_CONNECTION	( 106 )
#define	DISPID_RDPSRAPI_METHOD_CREATE_INVITATION	( 107 )
#define	DISPID_RDPSRAPI_METHOD_REQUEST_CONTROL	( 108 )
#define	DISPID_RDPSRAPI_METHOD_VIRTUAL_CHANNEL_CREATE	( 109 )
#define	DISPID_RDPSRAPI_METHOD_VIRTUAL_CHANNEL_SEND_DATA	( 110 )
#define	DISPID_RDPSRAPI_METHOD_VIRTUAL_CHANNEL_SET_ACCESS	( 111 )
#define	DISPID_RDPSRAPI_METHOD_PAUSE	( 112 )
#define	DISPID_RDPSRAPI_METHOD_RESUME	( 113 )
#define	DISPID_RDPSRAPI_METHOD_SHOW_WINDOW	( 114 )
#define	DISPID_RDPSRAPI_METHOD_REQUEST_COLOR_DEPTH_CHANGE	( 115 )
#define	DISPID_RDPSRAPI_METHOD_STARTREVCONNECTLISTENER	( 116 )
#define	DISPID_RDPSRAPI_METHOD_CONNECTTOCLIENT	( 117 )
#define	DISPID_RDPSRAPI_PROP_DISPIDVALUE	( 200 )
#define	DISPID_RDPSRAPI_PROP_ID	( 201 )
#define	DISPID_RDPSRAPI_PROP_SESSION_PROPERTIES	( 202 )
#define	DISPID_RDPSRAPI_PROP_ATTENDEES	( 203 )
#define	DISPID_RDPSRAPI_PROP_INVITATIONS	( 204 )
#define	DISPID_RDPSRAPI_PROP_INVITATION	( 205 )
#define	DISPID_RDPSRAPI_PROP_CHANNELMANAGER	( 206 )
#define	DISPID_RDPSRAPI_PROP_VIRTUAL_CHANNEL_GETNAME	( 207 )
#define	DISPID_RDPSRAPI_PROP_VIRTUAL_CHANNEL_GETFLAGS	( 208 )
#define	DISPID_RDPSRAPI_PROP_VIRTUAL_CHANNEL_GETPRIORITY	( 209 )
#define	DISPID_RDPSRAPI_PROP_WINDOWID	( 210 )
#define	DISPID_RDPSRAPI_PROP_APPLICATION	( 211 )
#define	DISPID_RDPSRAPI_PROP_WINDOWSHARED	( 212 )
#define	DISPID_RDPSRAPI_PROP_WINDOWNAME	( 213 )
#define	DISPID_RDPSRAPI_PROP_APPNAME	( 214 )
#define	DISPID_RDPSRAPI_PROP_APPLICATION_FILTER	( 215 )
#define	DISPID_RDPSRAPI_PROP_WINDOW_LIST	( 216 )
#define	DISPID_RDPSRAPI_PROP_APPLICATION_LIST	( 217 )
#define	DISPID_RDPSRAPI_PROP_APPFILTER_ENABLED	( 218 )
#define	DISPID_RDPSRAPI_PROP_APPFILTERENABLED	( 219 )
#define	DISPID_RDPSRAPI_PROP_SHARED	( 220 )
#define	DISPID_RDPSRAPI_PROP_INVITATIONITEM	( 221 )
#define	DISPID_RDPSRAPI_PROP_DBG_CLX_CMDLINE	( 222 )
#define	DISPID_RDPSRAPI_PROP_APPFLAGS	( 223 )
#define	DISPID_RDPSRAPI_PROP_WNDFLAGS	( 224 )
#define	DISPID_RDPSRAPI_PROP_PROTOCOL_TYPE	( 225 )
#define	DISPID_RDPSRAPI_PROP_LOCAL_PORT	( 226 )
#define	DISPID_RDPSRAPI_PROP_LOCAL_IP	( 227 )
#define	DISPID_RDPSRAPI_PROP_PEER_PORT	( 228 )
#define	DISPID_RDPSRAPI_PROP_PEER_IP	( 229 )
#define	DISPID_RDPSRAPI_PROP_ATTENDEE_FLAGS	( 230 )
#define	DISPID_RDPSRAPI_PROP_CONINFO	( 231 )
#define	DISPID_RDPSRAPI_PROP_CONNECTION_STRING	( 232 )
#define	DISPID_RDPSRAPI_PROP_GROUP_NAME	( 233 )
#define	DISPID_RDPSRAPI_PROP_PASSWORD	( 234 )
#define	DISPID_RDPSRAPI_PROP_ATTENDEELIMIT	( 235 )
#define	DISPID_RDPSRAPI_PROP_REVOKED	( 236 )
#define	DISPID_RDPSRAPI_PROP_DISCONNECTED_STRING	( 237 )
#define	DISPID_RDPSRAPI_PROP_USESMARTSIZING	( 238 )
#define	DISPID_RDPSRAPI_PROP_SESSION_COLORDEPTH	( 239 )
#define	DISPID_RDPSRAPI_PROP_REASON	( 240 )
#define	DISPID_RDPSRAPI_PROP_CODE	( 241 )
#define	DISPID_RDPSRAPI_PROP_CTRL_LEVEL	( 242 )
#define	DISPID_RDPSRAPI_PROP_REMOTENAME	( 243 )
#define	DISPID_RDPSRAPI_PROP_COUNT	( 244 )
#define	DISPID_RDPSRAPI_EVENT_ON_ATTENDEE_CONNECTED	( 301 )
#define	DISPID_RDPSRAPI_EVENT_ON_ATTENDEE_DISCONNECTED	( 302 )
#define	DISPID_RDPSRAPI_EVENT_ON_ATTENDEE_UPDATE	( 303 )
#define	DISPID_RDPSRAPI_EVENT_ON_ERROR	( 304 )
#define	DISPID_RDPSRAPI_EVENT_ON_VIEWER_CONNECTED	( 305 )
#define	DISPID_RDPSRAPI_EVENT_ON_VIEWER_DISCONNECTED	( 306 )
#define	DISPID_RDPSRAPI_EVENT_ON_VIEWER_AUTHENTICATED	( 307 )
#define	DISPID_RDPSRAPI_EVENT_ON_VIEWER_CONNECTFAILED	( 308 )
#define	DISPID_RDPSRAPI_EVENT_ON_CTRLLEVEL_CHANGE_REQUEST	( 309 )
#define	DISPID_RDPSRAPI_EVENT_ON_GRAPHICS_STREAM_PAUSED	( 310 )
#define	DISPID_RDPSRAPI_EVENT_ON_GRAPHICS_STREAM_RESUMED	( 311 )
#define	DISPID_RDPSRAPI_EVENT_ON_VIRTUAL_CHANNEL_JOIN	( 312 )
#define	DISPID_RDPSRAPI_EVENT_ON_VIRTUAL_CHANNEL_LEAVE	( 313 )
#define	DISPID_RDPSRAPI_EVENT_ON_VIRTUAL_CHANNEL_DATARECEIVED	( 314 )
#define	DISPID_RDPSRAPI_EVENT_ON_VIRTUAL_CHANNEL_SENDCOMPLETED	( 315 )
#define	DISPID_RDPSRAPI_EVENT_ON_APPLICATION_OPEN	( 316 )
#define	DISPID_RDPSRAPI_EVENT_ON_APPLICATION_CLOSE	( 317 )
#define	DISPID_RDPSRAPI_EVENT_ON_APPLICATION_UPDATE	( 318 )
#define	DISPID_RDPSRAPI_EVENT_ON_WINDOW_OPEN	( 319 )
#define	DISPID_RDPSRAPI_EVENT_ON_WINDOW_CLOSE	( 320 )
#define	DISPID_RDPSRAPI_EVENT_ON_WINDOW_UPDATE	( 321 )
#define	DISPID_RDPSRAPI_EVENT_ON_APPFILTER_UPDATE	( 322 )
#define	DISPID_RDPSRAPI_EVENT_ON_SHARED_RECT_CHANGED	( 323 )
#define	DISPID_RDPSRAPI_EVENT_ON_FOCUSRELEASED	( 324 )
#define	DISPID_RDPSRAPI_EVENT_ON_SHARED_DESKTOP_SETTINGS_CHANGED	( 325 )
extern RPC_IF_HANDLE __MIDL_itf_rdpencomapi_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_rdpencomapi_0000_0000_v0_0_s_ifspec;
#ifndef __IRDPSRAPIDebug_INTERFACE_DEFINED__
#define __IRDPSRAPIDebug_INTERFACE_DEFINED__
extern const IID IID_IRDPSRAPIDebug;
typedef struct IRDPSRAPIDebugVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IRDPSRAPIDebug * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IRDPSRAPIDebug * This);
	ULONG(STDMETHODCALLTYPE * Release) (IRDPSRAPIDebug * This);
	HRESULT(STDMETHODCALLTYPE * put_CLXCmdLine) (IRDPSRAPIDebug * This, BSTR CLXCmdLine);
	HRESULT(STDMETHODCALLTYPE * get_CLXCmdLine) (IRDPSRAPIDebug * This, BSTR * pCLXCmdLine);
	END_INTERFACE
}  IRDPSRAPIDebugVtbl;
interface IRDPSRAPIDebug
{
	CONST_VTBL struct IRDPSRAPIDebugVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IRDPSRAPIDebug_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IRDPSRAPIDebug_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IRDPSRAPIDebug_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IRDPSRAPIDebug_put_CLXCmdLine(This,CLXCmdLine) ( (This)->lpVtbl -> put_CLXCmdLine(This,CLXCmdLine) )
#define IRDPSRAPIDebug_get_CLXCmdLine(This,pCLXCmdLine) ( (This)->lpVtbl -> get_CLXCmdLine(This,pCLXCmdLine) )
#endif
#endif
#ifndef __RDPCOMAPILib_LIBRARY_DEFINED__
#define __RDPCOMAPILib_LIBRARY_DEFINED__
typedef enum __MIDL___MIDL_itf_rdpencomapi_0000_0001_0001
{
	CTRL_LEVEL_MIN = 0,
	CTRL_LEVEL_INVALID = 0,
	CTRL_LEVEL_NONE = 1,
	CTRL_LEVEL_VIEW = 2,
	CTRL_LEVEL_INTERACTIVE = 3,
	CTRL_LEVEL_MAX = 3
} CTRL_LEVEL;
typedef enum __MIDL___MIDL_itf_rdpencomapi_0000_0001_0002
{
	ATTENDEE_DISCONNECT_REASON_MIN = 0,
	ATTENDEE_DISCONNECT_REASON_APP = 0,
	ATTENDEE_DISCONNECT_REASON_ERR = 1,
	ATTENDEE_DISCONNECT_REASON_CLI = 2,
	ATTENDEE_DISCONNECT_REASON_MAX = 2
} ATTENDEE_DISCONNECT_REASON;
typedef enum __MIDL___MIDL_itf_rdpencomapi_0000_0001_0003
{
	CHANNEL_PRIORITY_LO = 0,
	CHANNEL_PRIORITY_MED = (CHANNEL_PRIORITY_LO + 1),
	CHANNEL_PRIORITY_HI = (CHANNEL_PRIORITY_MED + 1)
} CHANNEL_PRIORITY;
typedef enum __MIDL___MIDL_itf_rdpencomapi_0000_0001_0004
{
	CHANNEL_FLAGS_LEGACY = 0x1,
	CHANNEL_FLAGS_UNCOMPRESSED = 0x2
} CHANNEL_FLAGS;
typedef enum __MIDL___MIDL_itf_rdpencomapi_0000_0001_0005
{
	CHANNEL_ACCESS_ENUM_NONE = 0,
	CHANNEL_ACCESS_ENUM_SENDRECEIVE = (CHANNEL_ACCESS_ENUM_NONE + 1)
} CHANNEL_ACCESS_ENUM;
typedef enum __MIDL___MIDL_itf_rdpencomapi_0000_0001_0006
{
	CONST_MAX_CHANNEL_MESSAGE_SIZE = 1024,
	CONST_MAX_CHANNEL_NAME_LEN = 8,
	CONST_MAX_LEGACY_CHANNEL_MESSAGE_SIZE = 409600,
	CONST_ATTENDEE_ID_EVERYONE = -1,
	CONST_ATTENDEE_ID_HOST = 0,
	CONST_CONN_INTERVAL = 50
} RDPENCOMAPI_CONSTANTS;
typedef enum __MIDL___MIDL_itf_rdpencomapi_0000_0001_0007
{
	ATTENDEE_FLAGS_LOCAL = 1
} RDPENCOMAPI_ATTENDEE_FLAGS;
typedef enum __MIDL___MIDL_itf_rdpencomapi_0000_0001_0008
{
	WND_FLAG_PRIVILEGED = 1
} RDPSRAPI_WND_FLAGS;
typedef enum __MIDL___MIDL_itf_rdpencomapi_0000_0001_0009
{
	APP_FLAG_PRIVILEGED = 1
} RDPSRAPI_APP_FLAGS;
extern const IID LIBID_RDPCOMAPILib;
#ifndef ___IRDPSessionEvents_DISPINTERFACE_DEFINED__
#define ___IRDPSessionEvents_DISPINTERFACE_DEFINED__
extern const IID DIID__IRDPSessionEvents;
typedef struct _IRDPSessionEventsVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (_IRDPSessionEvents * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (_IRDPSessionEvents * This);
	ULONG(STDMETHODCALLTYPE * Release) (_IRDPSessionEvents * This);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfoCount) (_IRDPSessionEvents * This, UINT * pctinfo);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfo) (_IRDPSessionEvents * This, UINT iTInfo, LCID lcid, ITypeInfo ** ppTInfo);
	HRESULT(STDMETHODCALLTYPE * GetIDsOfNames) (_IRDPSessionEvents * This, REFIID riid, LPOLESTR * rgszNames, UINT cNames, LCID lcid, DISPID * rgDispId);
	HRESULT(STDMETHODCALLTYPE * Invoke) (_IRDPSessionEvents * This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS * pDispParams, VARIANT * pVarResult, EXCEPINFO * pExcepInfo, UINT * puArgErr);
	END_INTERFACE
}  _IRDPSessionEventsVtbl;
interface _IRDPSessionEvents
{
	CONST_VTBL struct _IRDPSessionEventsVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define _IRDPSessionEvents_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define _IRDPSessionEvents_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define _IRDPSessionEvents_Release(This) ( (This)->lpVtbl -> Release(This) )
#define _IRDPSessionEvents_GetTypeInfoCount(This,pctinfo) ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define _IRDPSessionEvents_GetTypeInfo(This,iTInfo,lcid,ppTInfo) ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define _IRDPSessionEvents_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define _IRDPSessionEvents_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#endif
#endif
#ifndef __IRDPSRAPIApplication_INTERFACE_DEFINED__
#define __IRDPSRAPIApplication_INTERFACE_DEFINED__
extern const IID IID_IRDPSRAPIApplication;
typedef struct IRDPSRAPIApplicationVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IRDPSRAPIApplication * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IRDPSRAPIApplication * This);
	ULONG(STDMETHODCALLTYPE * Release) (IRDPSRAPIApplication * This);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfoCount) (IRDPSRAPIApplication * This, UINT * pctinfo);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfo) (IRDPSRAPIApplication * This, UINT iTInfo, LCID lcid, ITypeInfo ** ppTInfo);
	HRESULT(STDMETHODCALLTYPE * GetIDsOfNames) (IRDPSRAPIApplication * This, REFIID riid, LPOLESTR * rgszNames, UINT cNames, LCID lcid, DISPID * rgDispId);
	HRESULT(STDMETHODCALLTYPE * Invoke) (IRDPSRAPIApplication * This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS * pDispParams, VARIANT * pVarResult, EXCEPINFO * pExcepInfo, UINT * puArgErr);
	HRESULT(STDMETHODCALLTYPE * get_Windows) (IRDPSRAPIApplication * This, IRDPSRAPIWindowList ** pWindowList);
	HRESULT(STDMETHODCALLTYPE * get_Id) (IRDPSRAPIApplication * This, long *pRetVal);
	HRESULT(STDMETHODCALLTYPE * get_Shared) (IRDPSRAPIApplication * This, VARIANT_BOOL * pRetVal);
	HRESULT(STDMETHODCALLTYPE * put_Shared) (IRDPSRAPIApplication * This, VARIANT_BOOL NewVal);
	HRESULT(STDMETHODCALLTYPE * get_Name) (IRDPSRAPIApplication * This, BSTR * pRetVal);
	HRESULT(STDMETHODCALLTYPE * get_Flags) (IRDPSRAPIApplication * This, unsigned long *pdwFlags);
	END_INTERFACE
}  IRDPSRAPIApplicationVtbl;
interface IRDPSRAPIApplication
{
	CONST_VTBL struct IRDPSRAPIApplicationVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IRDPSRAPIApplication_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IRDPSRAPIApplication_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IRDPSRAPIApplication_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IRDPSRAPIApplication_GetTypeInfoCount(This,pctinfo) ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define IRDPSRAPIApplication_GetTypeInfo(This,iTInfo,lcid,ppTInfo) ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define IRDPSRAPIApplication_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define IRDPSRAPIApplication_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define IRDPSRAPIApplication_get_Windows(This,pWindowList) ( (This)->lpVtbl -> get_Windows(This,pWindowList) )
#define IRDPSRAPIApplication_get_Id(This,pRetVal) ( (This)->lpVtbl -> get_Id(This,pRetVal) )
#define IRDPSRAPIApplication_get_Shared(This,pRetVal) ( (This)->lpVtbl -> get_Shared(This,pRetVal) )
#define IRDPSRAPIApplication_put_Shared(This,NewVal) ( (This)->lpVtbl -> put_Shared(This,NewVal) )
#define IRDPSRAPIApplication_get_Name(This,pRetVal) ( (This)->lpVtbl -> get_Name(This,pRetVal) )
#define IRDPSRAPIApplication_get_Flags(This,pdwFlags) ( (This)->lpVtbl -> get_Flags(This,pdwFlags) )
#endif
#endif
#ifndef __IRDPSRAPIWindow_INTERFACE_DEFINED__
#define __IRDPSRAPIWindow_INTERFACE_DEFINED__
extern const IID IID_IRDPSRAPIWindow;
typedef struct IRDPSRAPIWindowVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IRDPSRAPIWindow * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IRDPSRAPIWindow * This);
	ULONG(STDMETHODCALLTYPE * Release) (IRDPSRAPIWindow * This);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfoCount) (IRDPSRAPIWindow * This, UINT * pctinfo);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfo) (IRDPSRAPIWindow * This, UINT iTInfo, LCID lcid, ITypeInfo ** ppTInfo);
	HRESULT(STDMETHODCALLTYPE * GetIDsOfNames) (IRDPSRAPIWindow * This, REFIID riid, LPOLESTR * rgszNames, UINT cNames, LCID lcid, DISPID * rgDispId);
	HRESULT(STDMETHODCALLTYPE * Invoke) (IRDPSRAPIWindow * This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS * pDispParams, VARIANT * pVarResult, EXCEPINFO * pExcepInfo, UINT * puArgErr);
	HRESULT(STDMETHODCALLTYPE * get_Id) (IRDPSRAPIWindow * This, long *pRetVal);
	HRESULT(STDMETHODCALLTYPE * get_Application) (IRDPSRAPIWindow * This, IRDPSRAPIApplication ** pApplication);
	HRESULT(STDMETHODCALLTYPE * get_Shared) (IRDPSRAPIWindow * This, VARIANT_BOOL * pRetVal);
	HRESULT(STDMETHODCALLTYPE * put_Shared) (IRDPSRAPIWindow * This, VARIANT_BOOL NewVal);
	HRESULT(STDMETHODCALLTYPE * get_Name) (IRDPSRAPIWindow * This, BSTR * pRetVal);
	HRESULT(STDMETHODCALLTYPE * Show) (IRDPSRAPIWindow * This);
	HRESULT(STDMETHODCALLTYPE * get_Flags) (IRDPSRAPIWindow * This, unsigned long *pdwFlags);
	END_INTERFACE
}  IRDPSRAPIWindowVtbl;
interface IRDPSRAPIWindow
{
	CONST_VTBL struct IRDPSRAPIWindowVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IRDPSRAPIWindow_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IRDPSRAPIWindow_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IRDPSRAPIWindow_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IRDPSRAPIWindow_GetTypeInfoCount(This,pctinfo) ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define IRDPSRAPIWindow_GetTypeInfo(This,iTInfo,lcid,ppTInfo) ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define IRDPSRAPIWindow_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define IRDPSRAPIWindow_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define IRDPSRAPIWindow_get_Id(This,pRetVal) ( (This)->lpVtbl -> get_Id(This,pRetVal) )
#define IRDPSRAPIWindow_get_Application(This,pApplication) ( (This)->lpVtbl -> get_Application(This,pApplication) )
#define IRDPSRAPIWindow_get_Shared(This,pRetVal) ( (This)->lpVtbl -> get_Shared(This,pRetVal) )
#define IRDPSRAPIWindow_put_Shared(This,NewVal) ( (This)->lpVtbl -> put_Shared(This,NewVal) )
#define IRDPSRAPIWindow_get_Name(This,pRetVal) ( (This)->lpVtbl -> get_Name(This,pRetVal) )
#define IRDPSRAPIWindow_Show(This) ( (This)->lpVtbl -> Show(This) )
#define IRDPSRAPIWindow_get_Flags(This,pdwFlags) ( (This)->lpVtbl -> get_Flags(This,pdwFlags) )
#endif
#endif
#ifndef __IRDPSRAPIWindowList_INTERFACE_DEFINED__
#define __IRDPSRAPIWindowList_INTERFACE_DEFINED__
extern const IID IID_IRDPSRAPIWindowList;
typedef struct IRDPSRAPIWindowListVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IRDPSRAPIWindowList * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IRDPSRAPIWindowList * This);
	ULONG(STDMETHODCALLTYPE * Release) (IRDPSRAPIWindowList * This);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfoCount) (IRDPSRAPIWindowList * This, UINT * pctinfo);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfo) (IRDPSRAPIWindowList * This, UINT iTInfo, LCID lcid, ITypeInfo ** ppTInfo);
	HRESULT(STDMETHODCALLTYPE * GetIDsOfNames) (IRDPSRAPIWindowList * This, REFIID riid, LPOLESTR * rgszNames, UINT cNames, LCID lcid, DISPID * rgDispId);
	HRESULT(STDMETHODCALLTYPE * Invoke) (IRDPSRAPIWindowList * This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS * pDispParams, VARIANT * pVarResult, EXCEPINFO * pExcepInfo, UINT * puArgErr);
	HRESULT(STDMETHODCALLTYPE * get__NewEnum) (IRDPSRAPIWindowList * This, IUnknown ** retval);
	HRESULT(STDMETHODCALLTYPE * get_Item) (IRDPSRAPIWindowList * This, long item, IRDPSRAPIWindow ** pWindow);
	END_INTERFACE
}  IRDPSRAPIWindowListVtbl;
interface IRDPSRAPIWindowList
{
	CONST_VTBL struct IRDPSRAPIWindowListVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IRDPSRAPIWindowList_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IRDPSRAPIWindowList_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IRDPSRAPIWindowList_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IRDPSRAPIWindowList_GetTypeInfoCount(This,pctinfo) ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define IRDPSRAPIWindowList_GetTypeInfo(This,iTInfo,lcid,ppTInfo) ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define IRDPSRAPIWindowList_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define IRDPSRAPIWindowList_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define IRDPSRAPIWindowList_get__NewEnum(This,retval) ( (This)->lpVtbl -> get__NewEnum(This,retval) )
#define IRDPSRAPIWindowList_get_Item(This,item,pWindow) ( (This)->lpVtbl -> get_Item(This,item,pWindow) )
#endif
#endif
#ifndef __IRDPSRAPIApplicationList_INTERFACE_DEFINED__
#define __IRDPSRAPIApplicationList_INTERFACE_DEFINED__
extern const IID IID_IRDPSRAPIApplicationList;
typedef struct IRDPSRAPIApplicationListVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IRDPSRAPIApplicationList * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IRDPSRAPIApplicationList * This);
	ULONG(STDMETHODCALLTYPE * Release) (IRDPSRAPIApplicationList * This);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfoCount) (IRDPSRAPIApplicationList * This, UINT * pctinfo);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfo) (IRDPSRAPIApplicationList * This, UINT iTInfo, LCID lcid, ITypeInfo ** ppTInfo);
	HRESULT(STDMETHODCALLTYPE * GetIDsOfNames) (IRDPSRAPIApplicationList * This, REFIID riid, LPOLESTR * rgszNames, UINT cNames, LCID lcid, DISPID * rgDispId);
	HRESULT(STDMETHODCALLTYPE * Invoke) (IRDPSRAPIApplicationList * This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS * pDispParams, VARIANT * pVarResult, EXCEPINFO * pExcepInfo, UINT * puArgErr);
	HRESULT(STDMETHODCALLTYPE * get__NewEnum) (IRDPSRAPIApplicationList * This, IUnknown ** retval);
	HRESULT(STDMETHODCALLTYPE * get_Item) (IRDPSRAPIApplicationList * This, long item, IRDPSRAPIApplication ** pApplication);
	END_INTERFACE
}  IRDPSRAPIApplicationListVtbl;
interface IRDPSRAPIApplicationList
{
	CONST_VTBL struct IRDPSRAPIApplicationListVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IRDPSRAPIApplicationList_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IRDPSRAPIApplicationList_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IRDPSRAPIApplicationList_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IRDPSRAPIApplicationList_GetTypeInfoCount(This,pctinfo) ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define IRDPSRAPIApplicationList_GetTypeInfo(This,iTInfo,lcid,ppTInfo) ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define IRDPSRAPIApplicationList_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define IRDPSRAPIApplicationList_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define IRDPSRAPIApplicationList_get__NewEnum(This,retval) ( (This)->lpVtbl -> get__NewEnum(This,retval) )
#define IRDPSRAPIApplicationList_get_Item(This,item,pApplication) ( (This)->lpVtbl -> get_Item(This,item,pApplication) )
#endif
#endif
#ifndef __IRDPSRAPIApplicationFilter_INTERFACE_DEFINED__
#define __IRDPSRAPIApplicationFilter_INTERFACE_DEFINED__
extern const IID IID_IRDPSRAPIApplicationFilter;
typedef struct IRDPSRAPIApplicationFilterVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IRDPSRAPIApplicationFilter * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IRDPSRAPIApplicationFilter * This);
	ULONG(STDMETHODCALLTYPE * Release) (IRDPSRAPIApplicationFilter * This);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfoCount) (IRDPSRAPIApplicationFilter * This, UINT * pctinfo);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfo) (IRDPSRAPIApplicationFilter * This, UINT iTInfo, LCID lcid, ITypeInfo ** ppTInfo);
	HRESULT(STDMETHODCALLTYPE * GetIDsOfNames) (IRDPSRAPIApplicationFilter * This, REFIID riid, LPOLESTR * rgszNames, UINT cNames, LCID lcid, DISPID * rgDispId);
	HRESULT(STDMETHODCALLTYPE * Invoke) (IRDPSRAPIApplicationFilter * This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS * pDispParams, VARIANT * pVarResult, EXCEPINFO * pExcepInfo, UINT * puArgErr);
	HRESULT(STDMETHODCALLTYPE * get_Applications) (IRDPSRAPIApplicationFilter * This, IRDPSRAPIApplicationList ** pApplications);
	HRESULT(STDMETHODCALLTYPE * get_Windows) (IRDPSRAPIApplicationFilter * This, IRDPSRAPIWindowList ** pWindows);
	HRESULT(STDMETHODCALLTYPE * get_Enabled) (IRDPSRAPIApplicationFilter * This, VARIANT_BOOL * pRetVal);
	HRESULT(STDMETHODCALLTYPE * put_Enabled) (IRDPSRAPIApplicationFilter * This, VARIANT_BOOL NewVal);
	END_INTERFACE
}  IRDPSRAPIApplicationFilterVtbl;
interface IRDPSRAPIApplicationFilter
{
	CONST_VTBL struct IRDPSRAPIApplicationFilterVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IRDPSRAPIApplicationFilter_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IRDPSRAPIApplicationFilter_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IRDPSRAPIApplicationFilter_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IRDPSRAPIApplicationFilter_GetTypeInfoCount(This,pctinfo) ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define IRDPSRAPIApplicationFilter_GetTypeInfo(This,iTInfo,lcid,ppTInfo) ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define IRDPSRAPIApplicationFilter_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define IRDPSRAPIApplicationFilter_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define IRDPSRAPIApplicationFilter_get_Applications(This,pApplications) ( (This)->lpVtbl -> get_Applications(This,pApplications) )
#define IRDPSRAPIApplicationFilter_get_Windows(This,pWindows) ( (This)->lpVtbl -> get_Windows(This,pWindows) )
#define IRDPSRAPIApplicationFilter_get_Enabled(This,pRetVal) ( (This)->lpVtbl -> get_Enabled(This,pRetVal) )
#define IRDPSRAPIApplicationFilter_put_Enabled(This,NewVal) ( (This)->lpVtbl -> put_Enabled(This,NewVal) )
#endif
#endif
#ifndef __IRDPSRAPISessionProperties_INTERFACE_DEFINED__
#define __IRDPSRAPISessionProperties_INTERFACE_DEFINED__
extern const IID IID_IRDPSRAPISessionProperties;
typedef struct IRDPSRAPISessionPropertiesVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IRDPSRAPISessionProperties * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IRDPSRAPISessionProperties * This);
	ULONG(STDMETHODCALLTYPE * Release) (IRDPSRAPISessionProperties * This);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfoCount) (IRDPSRAPISessionProperties * This, UINT * pctinfo);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfo) (IRDPSRAPISessionProperties * This, UINT iTInfo, LCID lcid, ITypeInfo ** ppTInfo);
	HRESULT(STDMETHODCALLTYPE * GetIDsOfNames) (IRDPSRAPISessionProperties * This, REFIID riid, LPOLESTR * rgszNames, UINT cNames, LCID lcid, DISPID * rgDispId);
	HRESULT(STDMETHODCALLTYPE * Invoke) (IRDPSRAPISessionProperties * This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS * pDispParams, VARIANT * pVarResult, EXCEPINFO * pExcepInfo, UINT * puArgErr);
	HRESULT(STDMETHODCALLTYPE * get_Property) (IRDPSRAPISessionProperties * This, BSTR PropertyName, VARIANT * pVal);
	HRESULT(STDMETHODCALLTYPE * put_Property) (IRDPSRAPISessionProperties * This, BSTR PropertyName, VARIANT newVal);
	END_INTERFACE
}  IRDPSRAPISessionPropertiesVtbl;
interface IRDPSRAPISessionProperties
{
	CONST_VTBL struct IRDPSRAPISessionPropertiesVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IRDPSRAPISessionProperties_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IRDPSRAPISessionProperties_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IRDPSRAPISessionProperties_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IRDPSRAPISessionProperties_GetTypeInfoCount(This,pctinfo) ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define IRDPSRAPISessionProperties_GetTypeInfo(This,iTInfo,lcid,ppTInfo) ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define IRDPSRAPISessionProperties_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define IRDPSRAPISessionProperties_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define IRDPSRAPISessionProperties_get_Property(This,PropertyName,pVal) ( (This)->lpVtbl -> get_Property(This,PropertyName,pVal) )
#define IRDPSRAPISessionProperties_put_Property(This,PropertyName,newVal) ( (This)->lpVtbl -> put_Property(This,PropertyName,newVal) )
#endif
#endif
#ifndef __IRDPSRAPIInvitation_INTERFACE_DEFINED__
#define __IRDPSRAPIInvitation_INTERFACE_DEFINED__
extern const IID IID_IRDPSRAPIInvitation;
typedef struct IRDPSRAPIInvitationVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IRDPSRAPIInvitation * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IRDPSRAPIInvitation * This);
	ULONG(STDMETHODCALLTYPE * Release) (IRDPSRAPIInvitation * This);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfoCount) (IRDPSRAPIInvitation * This, UINT * pctinfo);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfo) (IRDPSRAPIInvitation * This, UINT iTInfo, LCID lcid, ITypeInfo ** ppTInfo);
	HRESULT(STDMETHODCALLTYPE * GetIDsOfNames) (IRDPSRAPIInvitation * This, REFIID riid, LPOLESTR * rgszNames, UINT cNames, LCID lcid, DISPID * rgDispId);
	HRESULT(STDMETHODCALLTYPE * Invoke) (IRDPSRAPIInvitation * This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS * pDispParams, VARIANT * pVarResult, EXCEPINFO * pExcepInfo, UINT * puArgErr);
	HRESULT(STDMETHODCALLTYPE * get_ConnectionString) (IRDPSRAPIInvitation * This, BSTR * pbstrVal);
	HRESULT(STDMETHODCALLTYPE * get_GroupName) (IRDPSRAPIInvitation * This, BSTR * pbstrVal);
	HRESULT(STDMETHODCALLTYPE * get_Password) (IRDPSRAPIInvitation * This, BSTR * pbstrVal);
	HRESULT(STDMETHODCALLTYPE * get_AttendeeLimit) (IRDPSRAPIInvitation * This, long *pRetVal);
	HRESULT(STDMETHODCALLTYPE * put_AttendeeLimit) (IRDPSRAPIInvitation * This, long NewVal);
	HRESULT(STDMETHODCALLTYPE * get_Revoked) (IRDPSRAPIInvitation * This, VARIANT_BOOL * pRetVal);
	HRESULT(STDMETHODCALLTYPE * put_Revoked) (IRDPSRAPIInvitation * This, VARIANT_BOOL NewVal);
	END_INTERFACE
}  IRDPSRAPIInvitationVtbl;
interface IRDPSRAPIInvitation
{
	CONST_VTBL struct IRDPSRAPIInvitationVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IRDPSRAPIInvitation_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IRDPSRAPIInvitation_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IRDPSRAPIInvitation_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IRDPSRAPIInvitation_GetTypeInfoCount(This,pctinfo) ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define IRDPSRAPIInvitation_GetTypeInfo(This,iTInfo,lcid,ppTInfo) ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define IRDPSRAPIInvitation_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define IRDPSRAPIInvitation_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define IRDPSRAPIInvitation_get_ConnectionString(This,pbstrVal) ( (This)->lpVtbl -> get_ConnectionString(This,pbstrVal) )
#define IRDPSRAPIInvitation_get_GroupName(This,pbstrVal) ( (This)->lpVtbl -> get_GroupName(This,pbstrVal) )
#define IRDPSRAPIInvitation_get_Password(This,pbstrVal) ( (This)->lpVtbl -> get_Password(This,pbstrVal) )
#define IRDPSRAPIInvitation_get_AttendeeLimit(This,pRetVal) ( (This)->lpVtbl -> get_AttendeeLimit(This,pRetVal) )
#define IRDPSRAPIInvitation_put_AttendeeLimit(This,NewVal) ( (This)->lpVtbl -> put_AttendeeLimit(This,NewVal) )
#define IRDPSRAPIInvitation_get_Revoked(This,pRetVal) ( (This)->lpVtbl -> get_Revoked(This,pRetVal) )
#define IRDPSRAPIInvitation_put_Revoked(This,NewVal) ( (This)->lpVtbl -> put_Revoked(This,NewVal) )
#endif
#endif
#ifndef __IRDPSRAPIInvitationManager_INTERFACE_DEFINED__
#define __IRDPSRAPIInvitationManager_INTERFACE_DEFINED__
extern const IID IID_IRDPSRAPIInvitationManager;
typedef struct IRDPSRAPIInvitationManagerVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IRDPSRAPIInvitationManager * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IRDPSRAPIInvitationManager * This);
	ULONG(STDMETHODCALLTYPE * Release) (IRDPSRAPIInvitationManager * This);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfoCount) (IRDPSRAPIInvitationManager * This, UINT * pctinfo);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfo) (IRDPSRAPIInvitationManager * This, UINT iTInfo, LCID lcid, ITypeInfo ** ppTInfo);
	HRESULT(STDMETHODCALLTYPE * GetIDsOfNames) (IRDPSRAPIInvitationManager * This, REFIID riid, LPOLESTR * rgszNames, UINT cNames, LCID lcid, DISPID * rgDispId);
	HRESULT(STDMETHODCALLTYPE * Invoke) (IRDPSRAPIInvitationManager * This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS * pDispParams, VARIANT * pVarResult, EXCEPINFO * pExcepInfo, UINT * puArgErr);
	HRESULT(STDMETHODCALLTYPE * get__NewEnum) (IRDPSRAPIInvitationManager * This, IUnknown ** retval);
	HRESULT(STDMETHODCALLTYPE * get_Item) (IRDPSRAPIInvitationManager * This, VARIANT item, IRDPSRAPIInvitation ** ppInvitation);
	HRESULT(STDMETHODCALLTYPE * get_Count) (IRDPSRAPIInvitationManager * This, long *pRetVal);
	HRESULT(STDMETHODCALLTYPE * CreateInvitation) (IRDPSRAPIInvitationManager * This, BSTR bstrAuthString, BSTR bstrGroupName, BSTR bstrPassword, long AttendeeLimit, IRDPSRAPIInvitation ** ppInvitation);
	END_INTERFACE
}  IRDPSRAPIInvitationManagerVtbl;
interface IRDPSRAPIInvitationManager
{
	CONST_VTBL struct IRDPSRAPIInvitationManagerVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IRDPSRAPIInvitationManager_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IRDPSRAPIInvitationManager_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IRDPSRAPIInvitationManager_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IRDPSRAPIInvitationManager_GetTypeInfoCount(This,pctinfo) ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define IRDPSRAPIInvitationManager_GetTypeInfo(This,iTInfo,lcid,ppTInfo) ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define IRDPSRAPIInvitationManager_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define IRDPSRAPIInvitationManager_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define IRDPSRAPIInvitationManager_get__NewEnum(This,retval) ( (This)->lpVtbl -> get__NewEnum(This,retval) )
#define IRDPSRAPIInvitationManager_get_Item(This,item,ppInvitation) ( (This)->lpVtbl -> get_Item(This,item,ppInvitation) )
#define IRDPSRAPIInvitationManager_get_Count(This,pRetVal) ( (This)->lpVtbl -> get_Count(This,pRetVal) )
#define IRDPSRAPIInvitationManager_CreateInvitation(This,bstrAuthString,bstrGroupName,bstrPassword,AttendeeLimit,ppInvitation) ( (This)->lpVtbl -> CreateInvitation(This,bstrAuthString,bstrGroupName,bstrPassword,AttendeeLimit,ppInvitation) )
#endif
#endif
#ifndef __IRDPSRAPITcpConnectionInfo_INTERFACE_DEFINED__
#define __IRDPSRAPITcpConnectionInfo_INTERFACE_DEFINED__
extern const IID IID_IRDPSRAPITcpConnectionInfo;
typedef struct IRDPSRAPITcpConnectionInfoVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IRDPSRAPITcpConnectionInfo * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IRDPSRAPITcpConnectionInfo * This);
	ULONG(STDMETHODCALLTYPE * Release) (IRDPSRAPITcpConnectionInfo * This);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfoCount) (IRDPSRAPITcpConnectionInfo * This, UINT * pctinfo);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfo) (IRDPSRAPITcpConnectionInfo * This, UINT iTInfo, LCID lcid, ITypeInfo ** ppTInfo);
	HRESULT(STDMETHODCALLTYPE * GetIDsOfNames) (IRDPSRAPITcpConnectionInfo * This, REFIID riid, LPOLESTR * rgszNames, UINT cNames, LCID lcid, DISPID * rgDispId);
	HRESULT(STDMETHODCALLTYPE * Invoke) (IRDPSRAPITcpConnectionInfo * This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS * pDispParams, VARIANT * pVarResult, EXCEPINFO * pExcepInfo, UINT * puArgErr);
	HRESULT(STDMETHODCALLTYPE * get_Protocol) (IRDPSRAPITcpConnectionInfo * This, long *plProtocol);
	HRESULT(STDMETHODCALLTYPE * get_LocalPort) (IRDPSRAPITcpConnectionInfo * This, long *plPort);
	HRESULT(STDMETHODCALLTYPE * get_LocalIP) (IRDPSRAPITcpConnectionInfo * This, BSTR * pbsrLocalIP);
	HRESULT(STDMETHODCALLTYPE * get_PeerPort) (IRDPSRAPITcpConnectionInfo * This, long *plPort);
	HRESULT(STDMETHODCALLTYPE * get_PeerIP) (IRDPSRAPITcpConnectionInfo * This, BSTR * pbstrIP);
	END_INTERFACE
}  IRDPSRAPITcpConnectionInfoVtbl;
interface IRDPSRAPITcpConnectionInfo
{
	CONST_VTBL struct IRDPSRAPITcpConnectionInfoVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IRDPSRAPITcpConnectionInfo_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IRDPSRAPITcpConnectionInfo_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IRDPSRAPITcpConnectionInfo_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IRDPSRAPITcpConnectionInfo_GetTypeInfoCount(This,pctinfo) ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define IRDPSRAPITcpConnectionInfo_GetTypeInfo(This,iTInfo,lcid,ppTInfo) ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define IRDPSRAPITcpConnectionInfo_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define IRDPSRAPITcpConnectionInfo_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define IRDPSRAPITcpConnectionInfo_get_Protocol(This,plProtocol) ( (This)->lpVtbl -> get_Protocol(This,plProtocol) )
#define IRDPSRAPITcpConnectionInfo_get_LocalPort(This,plPort) ( (This)->lpVtbl -> get_LocalPort(This,plPort) )
#define IRDPSRAPITcpConnectionInfo_get_LocalIP(This,pbsrLocalIP) ( (This)->lpVtbl -> get_LocalIP(This,pbsrLocalIP) )
#define IRDPSRAPITcpConnectionInfo_get_PeerPort(This,plPort) ( (This)->lpVtbl -> get_PeerPort(This,plPort) )
#define IRDPSRAPITcpConnectionInfo_get_PeerIP(This,pbstrIP) ( (This)->lpVtbl -> get_PeerIP(This,pbstrIP) )
#endif
#endif
#ifndef __IRDPSRAPIAttendee_INTERFACE_DEFINED__
#define __IRDPSRAPIAttendee_INTERFACE_DEFINED__
extern const IID IID_IRDPSRAPIAttendee;
typedef struct IRDPSRAPIAttendeeVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IRDPSRAPIAttendee * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IRDPSRAPIAttendee * This);
	ULONG(STDMETHODCALLTYPE * Release) (IRDPSRAPIAttendee * This);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfoCount) (IRDPSRAPIAttendee * This, UINT * pctinfo);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfo) (IRDPSRAPIAttendee * This, UINT iTInfo, LCID lcid, ITypeInfo ** ppTInfo);
	HRESULT(STDMETHODCALLTYPE * GetIDsOfNames) (IRDPSRAPIAttendee * This, REFIID riid, LPOLESTR * rgszNames, UINT cNames, LCID lcid, DISPID * rgDispId);
	HRESULT(STDMETHODCALLTYPE * Invoke) (IRDPSRAPIAttendee * This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS * pDispParams, VARIANT * pVarResult, EXCEPINFO * pExcepInfo, UINT * puArgErr);
	HRESULT(STDMETHODCALLTYPE * get_Id) (IRDPSRAPIAttendee * This, long *pId);
	HRESULT(STDMETHODCALLTYPE * get_RemoteName) (IRDPSRAPIAttendee * This, BSTR * pVal);
	HRESULT(STDMETHODCALLTYPE * get_ControlLevel) (IRDPSRAPIAttendee * This, CTRL_LEVEL * pVal);
	HRESULT(STDMETHODCALLTYPE * put_ControlLevel) (IRDPSRAPIAttendee * This, CTRL_LEVEL pNewVal);
	HRESULT(STDMETHODCALLTYPE * get_Invitation) (IRDPSRAPIAttendee * This, IRDPSRAPIInvitation ** ppVal);
	HRESULT(STDMETHODCALLTYPE * TerminateConnection) (IRDPSRAPIAttendee * This);
	HRESULT(STDMETHODCALLTYPE * get_Flags) (IRDPSRAPIAttendee * This, long *plFlags);
	HRESULT(STDMETHODCALLTYPE * get_ConnectivityInfo) (IRDPSRAPIAttendee * This, IUnknown ** ppVal);
	END_INTERFACE
}  IRDPSRAPIAttendeeVtbl;
interface IRDPSRAPIAttendee
{
	CONST_VTBL struct IRDPSRAPIAttendeeVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IRDPSRAPIAttendee_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IRDPSRAPIAttendee_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IRDPSRAPIAttendee_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IRDPSRAPIAttendee_GetTypeInfoCount(This,pctinfo) ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define IRDPSRAPIAttendee_GetTypeInfo(This,iTInfo,lcid,ppTInfo) ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define IRDPSRAPIAttendee_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define IRDPSRAPIAttendee_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define IRDPSRAPIAttendee_get_Id(This,pId) ( (This)->lpVtbl -> get_Id(This,pId) )
#define IRDPSRAPIAttendee_get_RemoteName(This,pVal) ( (This)->lpVtbl -> get_RemoteName(This,pVal) )
#define IRDPSRAPIAttendee_get_ControlLevel(This,pVal) ( (This)->lpVtbl -> get_ControlLevel(This,pVal) )
#define IRDPSRAPIAttendee_put_ControlLevel(This,pNewVal) ( (This)->lpVtbl -> put_ControlLevel(This,pNewVal) )
#define IRDPSRAPIAttendee_get_Invitation(This,ppVal) ( (This)->lpVtbl -> get_Invitation(This,ppVal) )
#define IRDPSRAPIAttendee_TerminateConnection(This) ( (This)->lpVtbl -> TerminateConnection(This) )
#define IRDPSRAPIAttendee_get_Flags(This,plFlags) ( (This)->lpVtbl -> get_Flags(This,plFlags) )
#define IRDPSRAPIAttendee_get_ConnectivityInfo(This,ppVal) ( (This)->lpVtbl -> get_ConnectivityInfo(This,ppVal) )
#endif
#endif
#ifndef __IRDPSRAPIAttendeeManager_INTERFACE_DEFINED__
#define __IRDPSRAPIAttendeeManager_INTERFACE_DEFINED__
extern const IID IID_IRDPSRAPIAttendeeManager;
typedef struct IRDPSRAPIAttendeeManagerVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IRDPSRAPIAttendeeManager * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IRDPSRAPIAttendeeManager * This);
	ULONG(STDMETHODCALLTYPE * Release) (IRDPSRAPIAttendeeManager * This);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfoCount) (IRDPSRAPIAttendeeManager * This, UINT * pctinfo);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfo) (IRDPSRAPIAttendeeManager * This, UINT iTInfo, LCID lcid, ITypeInfo ** ppTInfo);
	HRESULT(STDMETHODCALLTYPE * GetIDsOfNames) (IRDPSRAPIAttendeeManager * This, REFIID riid, LPOLESTR * rgszNames, UINT cNames, LCID lcid, DISPID * rgDispId);
	HRESULT(STDMETHODCALLTYPE * Invoke) (IRDPSRAPIAttendeeManager * This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS * pDispParams, VARIANT * pVarResult, EXCEPINFO * pExcepInfo, UINT * puArgErr);
	HRESULT(STDMETHODCALLTYPE * get__NewEnum) (IRDPSRAPIAttendeeManager * This, IUnknown ** retval);
	HRESULT(STDMETHODCALLTYPE * get_Item) (IRDPSRAPIAttendeeManager * This, long id, IRDPSRAPIAttendee ** ppItem);
	END_INTERFACE
}  IRDPSRAPIAttendeeManagerVtbl;
interface IRDPSRAPIAttendeeManager
{
	CONST_VTBL struct IRDPSRAPIAttendeeManagerVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IRDPSRAPIAttendeeManager_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IRDPSRAPIAttendeeManager_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IRDPSRAPIAttendeeManager_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IRDPSRAPIAttendeeManager_GetTypeInfoCount(This,pctinfo) ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define IRDPSRAPIAttendeeManager_GetTypeInfo(This,iTInfo,lcid,ppTInfo) ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define IRDPSRAPIAttendeeManager_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define IRDPSRAPIAttendeeManager_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define IRDPSRAPIAttendeeManager_get__NewEnum(This,retval) ( (This)->lpVtbl -> get__NewEnum(This,retval) )
#define IRDPSRAPIAttendeeManager_get_Item(This,id,ppItem) ( (This)->lpVtbl -> get_Item(This,id,ppItem) )
#endif
#endif
#ifndef __IRDPSRAPIAttendeeDisconnectInfo_INTERFACE_DEFINED__
#define __IRDPSRAPIAttendeeDisconnectInfo_INTERFACE_DEFINED__
extern const IID IID_IRDPSRAPIAttendeeDisconnectInfo;
typedef struct IRDPSRAPIAttendeeDisconnectInfoVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IRDPSRAPIAttendeeDisconnectInfo * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IRDPSRAPIAttendeeDisconnectInfo * This);
	ULONG(STDMETHODCALLTYPE * Release) (IRDPSRAPIAttendeeDisconnectInfo * This);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfoCount) (IRDPSRAPIAttendeeDisconnectInfo * This, UINT * pctinfo);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfo) (IRDPSRAPIAttendeeDisconnectInfo * This, UINT iTInfo, LCID lcid, ITypeInfo ** ppTInfo);
	HRESULT(STDMETHODCALLTYPE * GetIDsOfNames) (IRDPSRAPIAttendeeDisconnectInfo * This, REFIID riid, LPOLESTR * rgszNames, UINT cNames, LCID lcid, DISPID * rgDispId);
	HRESULT(STDMETHODCALLTYPE * Invoke) (IRDPSRAPIAttendeeDisconnectInfo * This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS * pDispParams, VARIANT * pVarResult, EXCEPINFO * pExcepInfo, UINT * puArgErr);
	HRESULT(STDMETHODCALLTYPE * get_Attendee) (IRDPSRAPIAttendeeDisconnectInfo * This, IRDPSRAPIAttendee ** retval);
	HRESULT(STDMETHODCALLTYPE * get_Reason) (IRDPSRAPIAttendeeDisconnectInfo * This, ATTENDEE_DISCONNECT_REASON * pReason);
	HRESULT(STDMETHODCALLTYPE * get_Code) (IRDPSRAPIAttendeeDisconnectInfo * This, long *pVal);
	END_INTERFACE
}  IRDPSRAPIAttendeeDisconnectInfoVtbl;
interface IRDPSRAPIAttendeeDisconnectInfo
{
	CONST_VTBL struct IRDPSRAPIAttendeeDisconnectInfoVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IRDPSRAPIAttendeeDisconnectInfo_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IRDPSRAPIAttendeeDisconnectInfo_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IRDPSRAPIAttendeeDisconnectInfo_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IRDPSRAPIAttendeeDisconnectInfo_GetTypeInfoCount(This,pctinfo) ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define IRDPSRAPIAttendeeDisconnectInfo_GetTypeInfo(This,iTInfo,lcid,ppTInfo) ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define IRDPSRAPIAttendeeDisconnectInfo_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define IRDPSRAPIAttendeeDisconnectInfo_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define IRDPSRAPIAttendeeDisconnectInfo_get_Attendee(This,retval) ( (This)->lpVtbl -> get_Attendee(This,retval) )
#define IRDPSRAPIAttendeeDisconnectInfo_get_Reason(This,pReason) ( (This)->lpVtbl -> get_Reason(This,pReason) )
#define IRDPSRAPIAttendeeDisconnectInfo_get_Code(This,pVal) ( (This)->lpVtbl -> get_Code(This,pVal) )
#endif
#endif
#ifndef __IRDPSRAPIVirtualChannel_INTERFACE_DEFINED__
#define __IRDPSRAPIVirtualChannel_INTERFACE_DEFINED__
extern const IID IID_IRDPSRAPIVirtualChannel;
typedef struct IRDPSRAPIVirtualChannelVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IRDPSRAPIVirtualChannel * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IRDPSRAPIVirtualChannel * This);
	ULONG(STDMETHODCALLTYPE * Release) (IRDPSRAPIVirtualChannel * This);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfoCount) (IRDPSRAPIVirtualChannel * This, UINT * pctinfo);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfo) (IRDPSRAPIVirtualChannel * This, UINT iTInfo, LCID lcid, ITypeInfo ** ppTInfo);
	HRESULT(STDMETHODCALLTYPE * GetIDsOfNames) (IRDPSRAPIVirtualChannel * This, REFIID riid, LPOLESTR * rgszNames, UINT cNames, LCID lcid, DISPID * rgDispId);
	HRESULT(STDMETHODCALLTYPE * Invoke) (IRDPSRAPIVirtualChannel * This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS * pDispParams, VARIANT * pVarResult, EXCEPINFO * pExcepInfo, UINT * puArgErr);
	HRESULT(STDMETHODCALLTYPE * SendData) (IRDPSRAPIVirtualChannel * This, BSTR bstrData, long lAttendeeId, unsigned long ChannelSendFlags);
	HRESULT(STDMETHODCALLTYPE * SetAccess) (IRDPSRAPIVirtualChannel * This, long lAttendeeId, CHANNEL_ACCESS_ENUM AccessType);
	HRESULT(STDMETHODCALLTYPE * get_Name) (IRDPSRAPIVirtualChannel * This, BSTR * pbstrName);
	HRESULT(STDMETHODCALLTYPE * get_Flags) (IRDPSRAPIVirtualChannel * This, long *plFlags);
	HRESULT(STDMETHODCALLTYPE * get_Priority) (IRDPSRAPIVirtualChannel * This, CHANNEL_PRIORITY * pPriority);
	END_INTERFACE
}  IRDPSRAPIVirtualChannelVtbl;
interface IRDPSRAPIVirtualChannel
{
	CONST_VTBL struct IRDPSRAPIVirtualChannelVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IRDPSRAPIVirtualChannel_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IRDPSRAPIVirtualChannel_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IRDPSRAPIVirtualChannel_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IRDPSRAPIVirtualChannel_GetTypeInfoCount(This,pctinfo) ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define IRDPSRAPIVirtualChannel_GetTypeInfo(This,iTInfo,lcid,ppTInfo) ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define IRDPSRAPIVirtualChannel_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define IRDPSRAPIVirtualChannel_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define IRDPSRAPIVirtualChannel_SendData(This,bstrData,lAttendeeId,ChannelSendFlags) ( (This)->lpVtbl -> SendData(This,bstrData,lAttendeeId,ChannelSendFlags) )
#define IRDPSRAPIVirtualChannel_SetAccess(This,lAttendeeId,AccessType) ( (This)->lpVtbl -> SetAccess(This,lAttendeeId,AccessType) )
#define IRDPSRAPIVirtualChannel_get_Name(This,pbstrName) ( (This)->lpVtbl -> get_Name(This,pbstrName) )
#define IRDPSRAPIVirtualChannel_get_Flags(This,plFlags) ( (This)->lpVtbl -> get_Flags(This,plFlags) )
#define IRDPSRAPIVirtualChannel_get_Priority(This,pPriority) ( (This)->lpVtbl -> get_Priority(This,pPriority) )
#endif
#endif
#ifndef __IRDPSRAPIVirtualChannelManager_INTERFACE_DEFINED__
#define __IRDPSRAPIVirtualChannelManager_INTERFACE_DEFINED__
extern const IID IID_IRDPSRAPIVirtualChannelManager;
typedef struct IRDPSRAPIVirtualChannelManagerVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IRDPSRAPIVirtualChannelManager * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IRDPSRAPIVirtualChannelManager * This);
	ULONG(STDMETHODCALLTYPE * Release) (IRDPSRAPIVirtualChannelManager * This);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfoCount) (IRDPSRAPIVirtualChannelManager * This, UINT * pctinfo);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfo) (IRDPSRAPIVirtualChannelManager * This, UINT iTInfo, LCID lcid, ITypeInfo ** ppTInfo);
	HRESULT(STDMETHODCALLTYPE * GetIDsOfNames) (IRDPSRAPIVirtualChannelManager * This, REFIID riid, LPOLESTR * rgszNames, UINT cNames, LCID lcid, DISPID * rgDispId);
	HRESULT(STDMETHODCALLTYPE * Invoke) (IRDPSRAPIVirtualChannelManager * This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS * pDispParams, VARIANT * pVarResult, EXCEPINFO * pExcepInfo, UINT * puArgErr);
	HRESULT(STDMETHODCALLTYPE * get__NewEnum) (IRDPSRAPIVirtualChannelManager * This, IUnknown ** retval);
	HRESULT(STDMETHODCALLTYPE * get_Item) (IRDPSRAPIVirtualChannelManager * This, VARIANT item, IRDPSRAPIVirtualChannel ** pChannel);
	HRESULT(STDMETHODCALLTYPE * CreateVirtualChannel) (IRDPSRAPIVirtualChannelManager * This, BSTR bstrChannelName, CHANNEL_PRIORITY Priority, unsigned long ChannelFlags, IRDPSRAPIVirtualChannel ** ppChannel);
	END_INTERFACE
}  IRDPSRAPIVirtualChannelManagerVtbl;
interface IRDPSRAPIVirtualChannelManager
{
	CONST_VTBL struct IRDPSRAPIVirtualChannelManagerVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IRDPSRAPIVirtualChannelManager_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IRDPSRAPIVirtualChannelManager_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IRDPSRAPIVirtualChannelManager_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IRDPSRAPIVirtualChannelManager_GetTypeInfoCount(This,pctinfo) ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define IRDPSRAPIVirtualChannelManager_GetTypeInfo(This,iTInfo,lcid,ppTInfo) ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define IRDPSRAPIVirtualChannelManager_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define IRDPSRAPIVirtualChannelManager_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define IRDPSRAPIVirtualChannelManager_get__NewEnum(This,retval) ( (This)->lpVtbl -> get__NewEnum(This,retval) )
#define IRDPSRAPIVirtualChannelManager_get_Item(This,item,pChannel) ( (This)->lpVtbl -> get_Item(This,item,pChannel) )
#define IRDPSRAPIVirtualChannelManager_CreateVirtualChannel(This,bstrChannelName,Priority,ChannelFlags,ppChannel) ( (This)->lpVtbl -> CreateVirtualChannel(This,bstrChannelName,Priority,ChannelFlags,ppChannel) )
#endif
#endif
#ifndef __IRDPSRAPISharingSession_INTERFACE_DEFINED__
#define __IRDPSRAPISharingSession_INTERFACE_DEFINED__
extern const IID IID_IRDPSRAPISharingSession;
typedef struct IRDPSRAPISharingSessionVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IRDPSRAPISharingSession * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IRDPSRAPISharingSession * This);
	ULONG(STDMETHODCALLTYPE * Release) (IRDPSRAPISharingSession * This);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfoCount) (IRDPSRAPISharingSession * This, UINT * pctinfo);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfo) (IRDPSRAPISharingSession * This, UINT iTInfo, LCID lcid, ITypeInfo ** ppTInfo);
	HRESULT(STDMETHODCALLTYPE * GetIDsOfNames) (IRDPSRAPISharingSession * This, REFIID riid, LPOLESTR * rgszNames, UINT cNames, LCID lcid, DISPID * rgDispId);
	HRESULT(STDMETHODCALLTYPE * Invoke) (IRDPSRAPISharingSession * This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS * pDispParams, VARIANT * pVarResult, EXCEPINFO * pExcepInfo, UINT * puArgErr);
	HRESULT(STDMETHODCALLTYPE * Open) (IRDPSRAPISharingSession * This);
	HRESULT(STDMETHODCALLTYPE * Close) (IRDPSRAPISharingSession * This);
	HRESULT(STDMETHODCALLTYPE * put_ColorDepth) (IRDPSRAPISharingSession * This, long colorDepth);
	HRESULT(STDMETHODCALLTYPE * get_ColorDepth) (IRDPSRAPISharingSession * This, long *pColorDepth);
	HRESULT(STDMETHODCALLTYPE * get_Properties) (IRDPSRAPISharingSession * This, IRDPSRAPISessionProperties ** ppVal);
	HRESULT(STDMETHODCALLTYPE * get_Attendees) (IRDPSRAPISharingSession * This, IRDPSRAPIAttendeeManager ** ppVal);
	HRESULT(STDMETHODCALLTYPE * get_Invitations) (IRDPSRAPISharingSession * This, IRDPSRAPIInvitationManager ** ppVal);
	HRESULT(STDMETHODCALLTYPE * get_ApplicationFilter) (IRDPSRAPISharingSession * This, IRDPSRAPIApplicationFilter ** ppVal);
	HRESULT(STDMETHODCALLTYPE * get_VirtualChannelManager) (IRDPSRAPISharingSession * This, IRDPSRAPIVirtualChannelManager ** ppVal);
	HRESULT(STDMETHODCALLTYPE * Pause) (IRDPSRAPISharingSession * This);
	HRESULT(STDMETHODCALLTYPE * Resume) (IRDPSRAPISharingSession * This);
	HRESULT(STDMETHODCALLTYPE * ConnectToClient) (IRDPSRAPISharingSession * This, BSTR bstrConnectionString);
	HRESULT(STDMETHODCALLTYPE * SetDesktopSharedRect) (IRDPSRAPISharingSession * This, long left, long top, long right, long bottom);
	HRESULT(STDMETHODCALLTYPE * GetDesktopSharedRect) (IRDPSRAPISharingSession * This, long *pleft, long *ptop, long *pright, long *pbottom);
	END_INTERFACE
}  IRDPSRAPISharingSessionVtbl;
interface IRDPSRAPISharingSession
{
	CONST_VTBL struct IRDPSRAPISharingSessionVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IRDPSRAPISharingSession_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IRDPSRAPISharingSession_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IRDPSRAPISharingSession_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IRDPSRAPISharingSession_GetTypeInfoCount(This,pctinfo) ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define IRDPSRAPISharingSession_GetTypeInfo(This,iTInfo,lcid,ppTInfo) ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define IRDPSRAPISharingSession_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define IRDPSRAPISharingSession_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define IRDPSRAPISharingSession_Open(This) ( (This)->lpVtbl -> Open(This) )
#define IRDPSRAPISharingSession_Close(This) ( (This)->lpVtbl -> Close(This) )
#define IRDPSRAPISharingSession_put_ColorDepth(This,colorDepth) ( (This)->lpVtbl -> put_ColorDepth(This,colorDepth) )
#define IRDPSRAPISharingSession_get_ColorDepth(This,pColorDepth) ( (This)->lpVtbl -> get_ColorDepth(This,pColorDepth) )
#define IRDPSRAPISharingSession_get_Properties(This,ppVal) ( (This)->lpVtbl -> get_Properties(This,ppVal) )
#define IRDPSRAPISharingSession_get_Attendees(This,ppVal) ( (This)->lpVtbl -> get_Attendees(This,ppVal) )
#define IRDPSRAPISharingSession_get_Invitations(This,ppVal) ( (This)->lpVtbl -> get_Invitations(This,ppVal) )
#define IRDPSRAPISharingSession_get_ApplicationFilter(This,ppVal) ( (This)->lpVtbl -> get_ApplicationFilter(This,ppVal) )
#define IRDPSRAPISharingSession_get_VirtualChannelManager(This,ppVal) ( (This)->lpVtbl -> get_VirtualChannelManager(This,ppVal) )
#define IRDPSRAPISharingSession_Pause(This) ( (This)->lpVtbl -> Pause(This) )
#define IRDPSRAPISharingSession_Resume(This) ( (This)->lpVtbl -> Resume(This) )
#define IRDPSRAPISharingSession_ConnectToClient(This,bstrConnectionString) ( (This)->lpVtbl -> ConnectToClient(This,bstrConnectionString) )
#define IRDPSRAPISharingSession_SetDesktopSharedRect(This,left,top,right,bottom) ( (This)->lpVtbl -> SetDesktopSharedRect(This,left,top,right,bottom) )
#define IRDPSRAPISharingSession_GetDesktopSharedRect(This,pleft,ptop,pright,pbottom) ( (This)->lpVtbl -> GetDesktopSharedRect(This,pleft,ptop,pright,pbottom) )
#endif
#endif
#ifndef __IRDPSRAPIViewer_INTERFACE_DEFINED__
#define __IRDPSRAPIViewer_INTERFACE_DEFINED__
extern const IID IID_IRDPSRAPIViewer;
typedef struct IRDPSRAPIViewerVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IRDPSRAPIViewer * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IRDPSRAPIViewer * This);
	ULONG(STDMETHODCALLTYPE * Release) (IRDPSRAPIViewer * This);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfoCount) (IRDPSRAPIViewer * This, UINT * pctinfo);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfo) (IRDPSRAPIViewer * This, UINT iTInfo, LCID lcid, ITypeInfo ** ppTInfo);
	HRESULT(STDMETHODCALLTYPE * GetIDsOfNames) (IRDPSRAPIViewer * This, REFIID riid, LPOLESTR * rgszNames, UINT cNames, LCID lcid, DISPID * rgDispId);
	HRESULT(STDMETHODCALLTYPE * Invoke) (IRDPSRAPIViewer * This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS * pDispParams, VARIANT * pVarResult, EXCEPINFO * pExcepInfo, UINT * puArgErr);
	HRESULT(STDMETHODCALLTYPE * Connect) (IRDPSRAPIViewer * This, BSTR bstrConnectionString, BSTR bstrName, BSTR bstrPassword);
	HRESULT(STDMETHODCALLTYPE * Disconnect) (IRDPSRAPIViewer * This);
	HRESULT(STDMETHODCALLTYPE * get_Attendees) (IRDPSRAPIViewer * This, IRDPSRAPIAttendeeManager ** ppVal);
	HRESULT(STDMETHODCALLTYPE * get_Invitations) (IRDPSRAPIViewer * This, IRDPSRAPIInvitationManager ** ppVal);
	HRESULT(STDMETHODCALLTYPE * get_ApplicationFilter) (IRDPSRAPIViewer * This, IRDPSRAPIApplicationFilter ** ppVal);
	HRESULT(STDMETHODCALLTYPE * get_VirtualChannelManager) (IRDPSRAPIViewer * This, IRDPSRAPIVirtualChannelManager ** ppVal);
	HRESULT(STDMETHODCALLTYPE * put_SmartSizing) (IRDPSRAPIViewer * This, VARIANT_BOOL vbSmartSizing);
	HRESULT(STDMETHODCALLTYPE * get_SmartSizing) (IRDPSRAPIViewer * This, VARIANT_BOOL * pvbSmartSizing);
	HRESULT(STDMETHODCALLTYPE * RequestControl) (IRDPSRAPIViewer * This, CTRL_LEVEL CtrlLevel);
	HRESULT(STDMETHODCALLTYPE * put_DisconnectedText) (IRDPSRAPIViewer * This, BSTR bstrDisconnectedText);
	HRESULT(STDMETHODCALLTYPE * get_DisconnectedText) (IRDPSRAPIViewer * This, BSTR * pbstrDisconnectedText);
	HRESULT(STDMETHODCALLTYPE * RequestColorDepthChange) (IRDPSRAPIViewer * This, long Bpp);
	HRESULT(STDMETHODCALLTYPE * get_Properties) (IRDPSRAPIViewer * This, IRDPSRAPISessionProperties ** ppVal);
	HRESULT(STDMETHODCALLTYPE * StartReverseConnectListener) (IRDPSRAPIViewer * This, BSTR bstrConnectionString, BSTR bstrUserName, BSTR bstrPassword, BSTR * pbstrReverseConnectString);
	END_INTERFACE
}  IRDPSRAPIViewerVtbl;
interface IRDPSRAPIViewer
{
	CONST_VTBL struct IRDPSRAPIViewerVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IRDPSRAPIViewer_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IRDPSRAPIViewer_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IRDPSRAPIViewer_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IRDPSRAPIViewer_GetTypeInfoCount(This,pctinfo) ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define IRDPSRAPIViewer_GetTypeInfo(This,iTInfo,lcid,ppTInfo) ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define IRDPSRAPIViewer_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define IRDPSRAPIViewer_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define IRDPSRAPIViewer_Connect(This,bstrConnectionString,bstrName,bstrPassword) ( (This)->lpVtbl -> Connect(This,bstrConnectionString,bstrName,bstrPassword) )
#define IRDPSRAPIViewer_Disconnect(This) ( (This)->lpVtbl -> Disconnect(This) )
#define IRDPSRAPIViewer_get_Attendees(This,ppVal) ( (This)->lpVtbl -> get_Attendees(This,ppVal) )
#define IRDPSRAPIViewer_get_Invitations(This,ppVal) ( (This)->lpVtbl -> get_Invitations(This,ppVal) )
#define IRDPSRAPIViewer_get_ApplicationFilter(This,ppVal) ( (This)->lpVtbl -> get_ApplicationFilter(This,ppVal) )
#define IRDPSRAPIViewer_get_VirtualChannelManager(This,ppVal) ( (This)->lpVtbl -> get_VirtualChannelManager(This,ppVal) )
#define IRDPSRAPIViewer_put_SmartSizing(This,vbSmartSizing) ( (This)->lpVtbl -> put_SmartSizing(This,vbSmartSizing) )
#define IRDPSRAPIViewer_get_SmartSizing(This,pvbSmartSizing) ( (This)->lpVtbl -> get_SmartSizing(This,pvbSmartSizing) )
#define IRDPSRAPIViewer_RequestControl(This,CtrlLevel) ( (This)->lpVtbl -> RequestControl(This,CtrlLevel) )
#define IRDPSRAPIViewer_put_DisconnectedText(This,bstrDisconnectedText) ( (This)->lpVtbl -> put_DisconnectedText(This,bstrDisconnectedText) )
#define IRDPSRAPIViewer_get_DisconnectedText(This,pbstrDisconnectedText) ( (This)->lpVtbl -> get_DisconnectedText(This,pbstrDisconnectedText) )
#define IRDPSRAPIViewer_RequestColorDepthChange(This,Bpp) ( (This)->lpVtbl -> RequestColorDepthChange(This,Bpp) )
#define IRDPSRAPIViewer_get_Properties(This,ppVal) ( (This)->lpVtbl -> get_Properties(This,ppVal) )
#define IRDPSRAPIViewer_StartReverseConnectListener(This,bstrConnectionString,bstrUserName,bstrPassword,pbstrReverseConnectString) ( (This)->lpVtbl -> StartReverseConnectListener(This,bstrConnectionString,bstrUserName,bstrPassword,pbstrReverseConnectString) )
#endif
#endif
extern const CLSID CLSID_RDPViewer;
extern const CLSID CLSID_RDPSession;
extern const CLSID CLSID_RDPSRAPISessionProperties;
extern const CLSID CLSID_RDPSRAPIInvitationManager;
extern const CLSID CLSID_RDPSRAPIInvitation;
extern const CLSID CLSID_RDPSRAPIAttendeeManager;
extern const CLSID CLSID_RDPSRAPIAttendee;
extern const CLSID CLSID_RDPSRAPIAttendeeDisconnectInfo;
extern const CLSID CLSID_RDPSRAPIApplicationFilter;
extern const CLSID CLSID_RDPSRAPIApplicationList;
extern const CLSID CLSID_RDPSRAPIApplication;
extern const CLSID CLSID_RDPSRAPIWindowList;
extern const CLSID CLSID_RDPSRAPIWindow;
extern const CLSID CLSID_RDPSRAPITcpConnectionInfo;
#endif
unsigned long __RPC_USER BSTR_UserSize(unsigned long *, unsigned long, BSTR *);
unsigned char *__RPC_USER BSTR_UserMarshal(unsigned long *, unsigned char *, BSTR *);
unsigned char *__RPC_USER BSTR_UserUnmarshal(unsigned long *, unsigned char *, BSTR *);
void __RPC_USER BSTR_UserFree(unsigned long *, BSTR *);
#endif

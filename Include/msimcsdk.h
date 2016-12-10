/*+@@file@@----------------------------------------------------------------*//*!
 \file		msimcsdk.h
 \par Description 
            Extension and update of headers for PellesC compiler suite.
 \par Project: 
            PellesC Headers extension
 \date		Created  on Sun Aug 14 20:14:52 2016
 \date		Modified on Sun Aug 14 20:14:52 2016
 \author	frankie
\*//*-@@file@@----------------------------------------------------------------*/

#ifndef __REQUIRED_RPCNDR_H_VERSION__
#define __REQUIRED_RPCNDR_H_VERSION__ 440
#endif
#include <rpc.h>
#include <rpcndr.h>
#ifndef __msimcsdk_h__
#define __msimcsdk_h__
#if __POCC__ >= 500
#pragma once
#endif
#ifndef __IMSIMHost_FWD_DEFINED__
#define __IMSIMHost_FWD_DEFINED__
typedef interface IMSIMHost IMSIMHost;
#endif
#ifndef __DMSIMHostEvents_FWD_DEFINED__
#define __DMSIMHostEvents_FWD_DEFINED__
typedef interface DMSIMHostEvents DMSIMHostEvents;
#endif
#ifndef __IMSIMWindow_FWD_DEFINED__
#define __IMSIMWindow_FWD_DEFINED__
typedef interface IMSIMWindow IMSIMWindow;
#endif
#ifndef __DMSIMWindowEvents_FWD_DEFINED__
#define __DMSIMWindowEvents_FWD_DEFINED__
typedef interface DMSIMWindowEvents DMSIMWindowEvents;
#endif
#ifndef __IIMService_FWD_DEFINED__
#define __IIMService_FWD_DEFINED__
typedef interface IIMService IIMService;
#endif
#ifndef __DIMServiceEvents_FWD_DEFINED__
#define __DIMServiceEvents_FWD_DEFINED__
typedef interface DIMServiceEvents DIMServiceEvents;
#endif
#ifndef __IIMContact_FWD_DEFINED__
#define __IIMContact_FWD_DEFINED__
typedef interface IIMContact IIMContact;
#endif
#ifndef __IIMContacts_FWD_DEFINED__
#define __IIMContacts_FWD_DEFINED__
typedef interface IIMContacts IIMContacts;
#endif
#ifndef __IIMSession_FWD_DEFINED__
#define __IIMSession_FWD_DEFINED__
typedef interface IIMSession IIMSession;
#endif
#ifndef __IIMSessions_FWD_DEFINED__
#define __IIMSessions_FWD_DEFINED__
typedef interface IIMSessions IIMSessions;
#endif
#ifndef __MSIMHost_FWD_DEFINED__
#define __MSIMHost_FWD_DEFINED__
typedef struct MSIMHost MSIMHost;
#endif
#ifndef __MSIMService_FWD_DEFINED__
#define __MSIMService_FWD_DEFINED__
typedef struct MSIMService MSIMService;
#endif
#ifndef __MSIMWindow_FWD_DEFINED__
#define __MSIMWindow_FWD_DEFINED__
typedef struct MSIMWindow MSIMWindow;
#endif
#ifndef __MSIMHostOption_FWD_DEFINED__
#define __MSIMHostOption_FWD_DEFINED__
typedef struct MSIMHostOption MSIMHostOption;
#endif
#ifndef __MSIMHostProfiles_FWD_DEFINED__
#define __MSIMHostProfiles_FWD_DEFINED__
typedef struct MSIMHostProfiles MSIMHostProfiles;
#endif
#include <oaidl.h>
#include <ocidl.h>
void __RPC_FAR *__RPC_USER MIDL_user_allocate(size_t);
void __RPC_USER MIDL_user_free(void __RPC_FAR *);
#define MSIM_DISPID_ONLOGONRESULT                        0x0E00
#define MSIM_DISPID_ONLOGOFF                             0x0E01
#define MSIM_DISPID_ONLISTADDRESULT                      0x0E02
#define MSIM_DISPID_ONLISTREMOVERESULT                   0x0E03
#define MSIM_DISPID_ONFRIENDLYNAMECHANGERESULT           0x0E04
#define MSIM_DISPID_ONCONTACTSTATECHANGED                0x0E05
#define MSIM_DISPID_ONTEXTRECEIVED                  0x0E06
#define MSIM_DISPID_ONLOCALFRIENDLYNAMECHANGERESULT 0x0E07
#define MSIM_DISPID_ONLOCALSTATECHANGERESULT        0x0E08
#define MSIM_DISPID_ONSENDRESULT                    0x0E09
#define MSIM_DISPID_ONFINDRESULT                    0x0E0A
#define MSIM_DISPID_ONSESSIONSTATECHANGE            0x0E0B
#define MSIM_DISPID_ONNEWSESSIONMEMBER              0x0E0C
#define MSIM_DISPID_ONSESSIONMEMBERLEAVE            0x0E0D
#define MSIM_DISPID_ONNEWSESSIONREQUEST             0x0E0F
#define MSIM_DISPID_ONINVITECONTACT                     0x0E10
#define MSIM_DISPID_ONAPPSHUTDOWN                   0x0E12
#define MSIM_DISPID_ON_NM_INVITERECEIVED             0x0E13
#define MSIM_DISPID_ON_NM_ACCEPTED             0x0E14
#define MSIM_DISPID_ON_NM_CANCELLED                  0x0E15
#define MSIMWND_DISPID_ONMOVE                 0x00E0
#define MSIMWND_DISPID_ONCLOSE                0x00E1
#define MSIMWND_DISPID_ONRESIZE                 0x00E2
#define MSIMWND_DISPID_ONSHOW                  0x00E3
#define MSIMWND_DISPID_ONFOCUS                 0x00E4
#define MSIMHOSTEVENTS_DISPID_ONDOUBLECLICK     0xD
#define MSIMHOSTEVENTS_DISPID_ONSHUTDOWN        0xE
#define MSIMHOSTEVENTS_DISPID_ONCLICKUSERNOTIFY 0xF
typedef enum __MIDL___MIDL_itf_msimcsdk_0000_0001
{
	IM_E_CONNECT = 0x81000300 + 0x1,
	IM_E_INVALID_SERVER_NAME = 0x81000300 + 0x2,
	IM_E_INVALID_PASSWORD = 0x81000300 + 0x3,
	IM_E_ALREADY_LOGGED_ON = 0x81000300 + 0x4,
	IM_E_SERVER_VERSION = 0x81000300 + 0x5,
	IM_E_LOGON_TIMEOUT = 0x81000300 + 0x6,
	IM_E_LIST_FULL = 0x81000300 + 0x7,
	IM_E_AI_REJECT = 0x81000300 + 0x8,
	IM_E_AI_REJECT_NOT_INST = 0x81000300 + 0x9,
	IM_E_USER_NOT_FOUND = 0x81000300 + 0xa,
	IM_E_ALREADY_IN_LIST = 0x81000300 + 0xb,
	IM_E_DISCONNECTED = 0x81000300 + 0xc,
	IM_E_UNEXPECTED = 0x81000300 + 0xd,
	IM_E_SERVER_TOO_BUSY = 0x81000300 + 0xe,
	IM_E_INVALID_AUTH_PACKAGES = 0x81000300 + 0xf,
	IM_E_NEWER_CLIENT_AVAILABLE = 0x81000300 + 0x10,
	IM_E_AI_TIMEOUT = 0x81000300 + 0x11,
	IM_E_CANCEL = 0x81000300 + 0x12,
	IM_E_TOO_MANY_MATCHES = 0x81000300 + 0x13,
	IM_E_SERVER_UNAVAILABLE = 0x81000300 + 0x14,
	IM_E_LOGON_UI_ACTIVE = 0x81000300 + 0x15,
	IM_E_OPTION_UI_ACTIVE = 0x81000300 + 0x16,
	IM_E_CONTACT_UI_ACTIVE = 0x81000300 + 0x17,
	IM_E_LOGGED_ON = 0x81000300 + 0x19,
	IM_E_CONNECT_PROXY = 0x81000300 + 0x1a,
	IM_E_PROXY_AUTH = 0x81000300 + 0x1b,
	IM_E_PROXY_AUTH_TYPE = 0x81000300 + 0x1c,
	IM_E_INVALID_PROXY_NAME = 0x81000300 + 0x1d,
	IM_E_NOT_PRIMARY_SERVICE = 0x81000300 + 0x20,
	IM_E_TOO_MANY_SESSIONS = 0x81000300 + 0x21,
	IM_E_TOO_MANY_MESSAGES = 0x81000300 + 0x22,
	IM_E_REMOTE_LOGIN = 0x81000300 + 0x23,
	IM_E_INVALID_FRIENDLY_NAME = 0x81000300 + 0x24,
	IM_E_SESSION_FULL = 0x81000300 + 0x25,
	IM_E_NOT_ALLOWING_NEW_USERS = 0x81000300 + 0x26,
	IM_E_INVALID_DOMAIN = 0x81000300 + 0x27,
	IM_E_TCP_ERROR = 0x81000300 + 0x28,
	IM_E_SESSION_TIMEOUT = 0x81000300 + 0x29,
	IM_E_MULTIPOINT_SESSION_BEGIN_TIMEOUT = 0x81000300 + 0x2a,
	IM_E_MULTIPOINT_SESSION_END_TIMEOUT = 0x81000300 + 0x2b,
	IM_E_REVERSE_LIST_FULL = 0x81000300 + 0x2c,
	IM_E_SERVER_ERROR = 0x81000300 + 0x2d,
	IM_E_SYSTEM_CONFIG = 0x81000300 + 0x2e,
	IM_E_NO_DIRECTORY = 0x81000300 + 0x2f,
	IM_E_USER_CANCELED_LOGON = 0x81000300 + 0x50,
	IM_E_ALREADY_EXISTS = 0x81000300 + 0x51,
	IM_E_DOES_NOT_EXIST = 0x81000300 + 0x52,
	IM_S_LOGGED_ON = 0x1000300 + 0x19,
	IM_S_ALREADY_IN_THE_MODE = 0x1000300 + 0x1
} IM_RESULTS;
typedef enum __MIDL___MIDL_itf_msimcsdk_0000_0002
{
	IM_MSG_TYPE_NO_RESULT = 0,
	IM_MSG_TYPE_ERRORS_ONLY = 1,
	IM_MSG_TYPE_ALL_RESULTS = 2
} IM_MSG_TYPE;
typedef enum __MIDL___MIDL_itf_msimcsdk_0000_0003
{
	IM_INVITE_TYPE_REQUEST_LAUNCH = 0x1,
	IM_INVITE_TYPE_REQUEST_IP = 0x4,
	IM_INVITE_TYPE_PROVIDE_IP = 0x8
} IM_INVITE_FLAGS;
typedef enum __MIDL___MIDL_itf_msimcsdk_0000_0004
{
	IM_STATE_UNKNOWN = 0,
	IM_STATE_OFFLINE = 0x1,
	IM_STATE_ONLINE = 0x2,
	IM_STATE_INVISIBLE = 0x6,
	IM_STATE_BUSY = 0xa,
	IM_STATE_BE_RIGHT_BACK = 0xe,
	IM_STATE_IDLE = 0x12,
	IM_STATE_AWAY = 0x22,
	IM_STATE_ON_THE_PHONE = 0x32,
	IM_STATE_OUT_TO_LUNCH = 0x42,
	IM_STATE_LOCAL_FINDING_SERVER = 0x100,
	IM_STATE_LOCAL_CONNECTING_TO_SERVER = 0x200,
	IM_STATE_LOCAL_SYNCHRONIZING_WITH_SERVER = 0x300,
	IM_STATE_LOCAL_DISCONNECTING_FROM_SERVER = 0x400
} IM_STATE;
typedef enum __MIDL___MIDL_itf_msimcsdk_0000_0005
{
	IM_SSTATE_DISCONNECTED = 0,
	IM_SSTATE_CONNECTING = 1,
	IM_SSTATE_CONNECTED = 2,
	IM_SSTATE_DISCONNECTING = 3,
	IM_SSTATE_ERROR = 4
} IM_SSTATE;
typedef enum __MIDL___MIDL_itf_msimcsdk_0000_0006
{
	MSIM_LIST_CONTACT = 0x1,
	MSIM_LIST_ALLOW = 0x2,
	MSIM_LIST_BLOCK = 0x4,
	MSIM_LIST_REVERSE = 0x8,
	MSIM_LIST_NOREF = 0x10,
	MSIM_LIST_SAVE = 0x20,
	MSIM_LIST_SYSTEM = 0x80
} MSIM_LIST_TYPE;
typedef enum __MIDL___MIDL_itf_msimcsdk_0000_0007
{
	MSIMWND_WS_OVERLAPPED = 0,
	MSIMWND_WS_TOOL = 1,
	MSIMWND_WS_POPUP = 2,
	MSIMWND_WS_DIALOG = 3,
	MSIMWND_WS_SIZEBOX = 4
} MSIMWND_STYLES;
typedef enum __MIDL___MIDL_itf_msimcsdk_0000_0008
{
	MSIMWND_SIZE_MAXHIDE = 1,
	MSIMWND_SIZE_MAXIMIZED = 2,
	MSIMWND_SIZE_MAXSHOW = 3,
	MSIMWND_SIZE_MINIMIZED = 4,
	MSIMWND_SIZE_RESTORED = 5
} MSIMWND_SIZE_TYPE;
#define MSIM_LIST_CONTACT  0x00000001
#define MSIM_LIST_ALLOW    0x00000002
#define MSIM_LIST_BLOCK    0x00000004
#define MSIM_LIST_REVERSE  0x00000008
#define MSIM_LIST_NOREF    0x00000010
#define MSIM_LIST_SAVE     0x00000020
#define MSIM_LIST_SYSTEM   0x00000080
#define MSIM_LIST_CONTACT_STR L"$$Messenger\\Contact"
#define MSIM_LIST_ALLOW_STR L"$$Messenger\\Allow"
#define MSIM_LIST_BLOCK_STR L"$$Messenger\\Block"
#define MSIM_LIST_REVERSE_STR L"$$Messenger\\Reverse"
extern RPC_IF_HANDLE __MIDL_itf_msimcsdk_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_msimcsdk_0000_v0_0_s_ifspec;
#ifndef __MSIMCliSDKLib_LIBRARY_DEFINED__
#define __MSIMCliSDKLib_LIBRARY_DEFINED__
extern const IID LIBID_MSIMCliSDKLib;
#ifndef __IMSIMHost_INTERFACE_DEFINED__
#define __IMSIMHost_INTERFACE_DEFINED__
extern const IID IID_IMSIMHost;
typedef struct IMSIMHostVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE __RPC_FAR *QueryInterface) (IMSIMHost __RPC_FAR *This, REFIID riid, void __RPC_FAR *__RPC_FAR *ppvObject);
	ULONG(STDMETHODCALLTYPE __RPC_FAR *AddRef) (IMSIMHost __RPC_FAR *This);
	ULONG(STDMETHODCALLTYPE __RPC_FAR *Release) (IMSIMHost __RPC_FAR *This);
	HRESULT(STDMETHODCALLTYPE __RPC_FAR *GetTypeInfoCount) (IMSIMHost __RPC_FAR *This, UINT __RPC_FAR *pctinfo);
	HRESULT(STDMETHODCALLTYPE __RPC_FAR *GetTypeInfo) (IMSIMHost __RPC_FAR *This, UINT iTInfo, LCID lcid, ITypeInfo __RPC_FAR *__RPC_FAR *ppTInfo);
	HRESULT(STDMETHODCALLTYPE __RPC_FAR *GetIDsOfNames) (IMSIMHost __RPC_FAR *This, REFIID riid, LPOLESTR __RPC_FAR *rgszNames, UINT cNames, LCID lcid, DISPID __RPC_FAR *rgDispId);
	HRESULT(STDMETHODCALLTYPE __RPC_FAR *Invoke) (IMSIMHost __RPC_FAR *This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS __RPC_FAR *pDispParams, VARIANT __RPC_FAR *pVarResult, EXCEPINFO __RPC_FAR *pExcepInfo, UINT __RPC_FAR *puArgErr);
	HRESULT(STDMETHODCALLTYPE __RPC_FAR *CreateContext) (IMSIMHost __RPC_FAR *This, VARIANT Profile, VARIANT Flags, IDispatch __RPC_FAR *__RPC_FAR *ppInterface);
	HRESULT(STDMETHODCALLTYPE __RPC_FAR *ShowOptions) (IMSIMHost __RPC_FAR *This);
	HRESULT(STDMETHODCALLTYPE __RPC_FAR *get_Profiles) (IMSIMHost __RPC_FAR *This, IDispatch __RPC_FAR *__RPC_FAR *pProfile);
	HRESULT(STDMETHODCALLTYPE __RPC_FAR *HostWindow) (IMSIMHost __RPC_FAR *This, BSTR bstrControl, long lStyle, VARIANT_BOOL fShowOnTaskbar, IDispatch __RPC_FAR *__RPC_FAR *ppMSIMWnd);
	HRESULT(STDMETHODCALLTYPE __RPC_FAR *CreateProfile) (IMSIMHost __RPC_FAR *This, BSTR bstrProfile, IDispatch __RPC_FAR *__RPC_FAR *ppProfile);
	HRESULT(STDMETHODCALLTYPE __RPC_FAR *PopupMessage) (IMSIMHost __RPC_FAR *This, BSTR bstrMessage, long nTimeout, VARIANT_BOOL fClick, long __RPC_FAR *plCookie);
	HRESULT(STDMETHODCALLTYPE __RPC_FAR *HostWindowEx) (IMSIMHost __RPC_FAR *This, BSTR bstrControl, long lStyle, long lExStyle, IStream __RPC_FAR *pStream, IMSIMWindow __RPC_FAR *__RPC_FAR *ppMSIMWindow, IUnknown __RPC_FAR *__RPC_FAR *ppUnk, REFIID iidAdvise, IUnknown __RPC_FAR *punkSink);
	END_INTERFACE
}  IMSIMHostVtbl;
interface IMSIMHost
{
	CONST_VTBL struct IMSIMHostVtbl __RPC_FAR *lpVtbl;
};
#ifdef COBJMACROS
#define IMSIMHost_QueryInterface(This,riid,ppvObject) (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)
#define IMSIMHost_AddRef(This) (This)->lpVtbl -> AddRef(This)
#define IMSIMHost_Release(This) (This)->lpVtbl -> Release(This)
#define IMSIMHost_GetTypeInfoCount(This,pctinfo) (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo)
#define IMSIMHost_GetTypeInfo(This,iTInfo,lcid,ppTInfo) (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo)
#define IMSIMHost_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)
#define IMSIMHost_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)
#define IMSIMHost_CreateContext(This,Profile,Flags,ppInterface) (This)->lpVtbl -> CreateContext(This,Profile,Flags,ppInterface)
#define IMSIMHost_ShowOptions(This) (This)->lpVtbl -> ShowOptions(This)
#define IMSIMHost_get_Profiles(This,pProfile) (This)->lpVtbl -> get_Profiles(This,pProfile)
#define IMSIMHost_HostWindow(This,bstrControl,lStyle,fShowOnTaskbar,ppMSIMWnd) (This)->lpVtbl -> HostWindow(This,bstrControl,lStyle,fShowOnTaskbar,ppMSIMWnd)
#define IMSIMHost_CreateProfile(This,bstrProfile,ppProfile) (This)->lpVtbl -> CreateProfile(This,bstrProfile,ppProfile)
#define IMSIMHost_PopupMessage(This,bstrMessage,nTimeout,fClick,plCookie) (This)->lpVtbl -> PopupMessage(This,bstrMessage,nTimeout,fClick,plCookie)
#define IMSIMHost_HostWindowEx(This,bstrControl,lStyle,lExStyle,pStream,ppMSIMWindow,ppUnk,iidAdvise,punkSink) (This)->lpVtbl -> HostWindowEx(This,bstrControl,lStyle,lExStyle,pStream,ppMSIMWindow,ppUnk,iidAdvise,punkSink)
#endif
HRESULT STDMETHODCALLTYPE IMSIMHost_CreateContext_Proxy(IMSIMHost __RPC_FAR *This, VARIANT Profile, VARIANT Flags, IDispatch __RPC_FAR *__RPC_FAR *ppInterface);
void __RPC_STUB IMSIMHost_CreateContext_Stub(IRpcStubBuffer *This, IRpcChannelBuffer *_pRpcChannelBuffer, PRPC_MESSAGE _pRpcMessage, DWORD *_pdwStubPhase);
HRESULT STDMETHODCALLTYPE IMSIMHost_ShowOptions_Proxy(IMSIMHost __RPC_FAR *This);
void __RPC_STUB IMSIMHost_ShowOptions_Stub(IRpcStubBuffer *This, IRpcChannelBuffer *_pRpcChannelBuffer, PRPC_MESSAGE _pRpcMessage, DWORD *_pdwStubPhase);
HRESULT STDMETHODCALLTYPE IMSIMHost_get_Profiles_Proxy(IMSIMHost __RPC_FAR *This, IDispatch __RPC_FAR *__RPC_FAR *pProfile);
void __RPC_STUB IMSIMHost_get_Profiles_Stub(IRpcStubBuffer *This, IRpcChannelBuffer *_pRpcChannelBuffer, PRPC_MESSAGE _pRpcMessage, DWORD *_pdwStubPhase);
HRESULT STDMETHODCALLTYPE IMSIMHost_HostWindow_Proxy(IMSIMHost __RPC_FAR *This, BSTR bstrControl, long lStyle, VARIANT_BOOL fShowOnTaskbar, IDispatch __RPC_FAR *__RPC_FAR *ppMSIMWnd);
void __RPC_STUB IMSIMHost_HostWindow_Stub(IRpcStubBuffer *This, IRpcChannelBuffer *_pRpcChannelBuffer, PRPC_MESSAGE _pRpcMessage, DWORD *_pdwStubPhase);
HRESULT STDMETHODCALLTYPE IMSIMHost_CreateProfile_Proxy(IMSIMHost __RPC_FAR *This, BSTR bstrProfile, IDispatch __RPC_FAR *__RPC_FAR *ppProfile);
void __RPC_STUB IMSIMHost_CreateProfile_Stub(IRpcStubBuffer *This, IRpcChannelBuffer *_pRpcChannelBuffer, PRPC_MESSAGE _pRpcMessage, DWORD *_pdwStubPhase);
HRESULT STDMETHODCALLTYPE IMSIMHost_PopupMessage_Proxy(IMSIMHost __RPC_FAR *This, BSTR bstrMessage, long nTimeout, VARIANT_BOOL fClick, long __RPC_FAR *plCookie);
void __RPC_STUB IMSIMHost_PopupMessage_Stub(IRpcStubBuffer *This, IRpcChannelBuffer *_pRpcChannelBuffer, PRPC_MESSAGE _pRpcMessage, DWORD *_pdwStubPhase);
HRESULT STDMETHODCALLTYPE IMSIMHost_HostWindowEx_Proxy(IMSIMHost __RPC_FAR *This, BSTR bstrControl, long lStyle, long lExStyle, IStream __RPC_FAR *pStream, IMSIMWindow __RPC_FAR *__RPC_FAR *ppMSIMWindow, IUnknown __RPC_FAR *__RPC_FAR *ppUnk, REFIID iidAdvise, IUnknown __RPC_FAR *punkSink);
void __RPC_STUB IMSIMHost_HostWindowEx_Stub(IRpcStubBuffer *This, IRpcChannelBuffer *_pRpcChannelBuffer, PRPC_MESSAGE _pRpcMessage, DWORD *_pdwStubPhase);
#endif
#ifndef __DMSIMHostEvents_DISPINTERFACE_DEFINED__
#define __DMSIMHostEvents_DISPINTERFACE_DEFINED__
extern const IID DIID_DMSIMHostEvents;
typedef struct DMSIMHostEventsVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE __RPC_FAR *QueryInterface) (DMSIMHostEvents __RPC_FAR *This, REFIID riid, void __RPC_FAR *__RPC_FAR *ppvObject);
	ULONG(STDMETHODCALLTYPE __RPC_FAR *AddRef) (DMSIMHostEvents __RPC_FAR *This);
	ULONG(STDMETHODCALLTYPE __RPC_FAR *Release) (DMSIMHostEvents __RPC_FAR *This);
	HRESULT(STDMETHODCALLTYPE __RPC_FAR *GetTypeInfoCount) (DMSIMHostEvents __RPC_FAR *This, UINT __RPC_FAR *pctinfo);
	HRESULT(STDMETHODCALLTYPE __RPC_FAR *GetTypeInfo) (DMSIMHostEvents __RPC_FAR *This, UINT iTInfo, LCID lcid, ITypeInfo __RPC_FAR *__RPC_FAR *ppTInfo);
	HRESULT(STDMETHODCALLTYPE __RPC_FAR *GetIDsOfNames) (DMSIMHostEvents __RPC_FAR *This, REFIID riid, LPOLESTR __RPC_FAR *rgszNames, UINT cNames, LCID lcid, DISPID __RPC_FAR *rgDispId);
	HRESULT(STDMETHODCALLTYPE __RPC_FAR *Invoke) (DMSIMHostEvents __RPC_FAR *This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS __RPC_FAR *pDispParams, VARIANT __RPC_FAR *pVarResult, EXCEPINFO __RPC_FAR *pExcepInfo, UINT __RPC_FAR *puArgErr);
	END_INTERFACE
}  DMSIMHostEventsVtbl;
interface DMSIMHostEvents
{
	CONST_VTBL struct DMSIMHostEventsVtbl __RPC_FAR *lpVtbl;
};
#ifdef COBJMACROS
#define DMSIMHostEvents_QueryInterface(This,riid,ppvObject) (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)
#define DMSIMHostEvents_AddRef(This) (This)->lpVtbl -> AddRef(This)
#define DMSIMHostEvents_Release(This) (This)->lpVtbl -> Release(This)
#define DMSIMHostEvents_GetTypeInfoCount(This,pctinfo) (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo)
#define DMSIMHostEvents_GetTypeInfo(This,iTInfo,lcid,ppTInfo) (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo)
#define DMSIMHostEvents_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)
#define DMSIMHostEvents_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)
#endif
#endif
#ifndef __IMSIMWindow_INTERFACE_DEFINED__
#define __IMSIMWindow_INTERFACE_DEFINED__
extern const IID IID_IMSIMWindow;
typedef struct IMSIMWindowVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE __RPC_FAR *QueryInterface) (IMSIMWindow __RPC_FAR *This, REFIID riid, void __RPC_FAR *__RPC_FAR *ppvObject);
	ULONG(STDMETHODCALLTYPE __RPC_FAR *AddRef) (IMSIMWindow __RPC_FAR *This);
	ULONG(STDMETHODCALLTYPE __RPC_FAR *Release) (IMSIMWindow __RPC_FAR *This);
	HRESULT(STDMETHODCALLTYPE __RPC_FAR *GetTypeInfoCount) (IMSIMWindow __RPC_FAR *This, UINT __RPC_FAR *pctinfo);
	HRESULT(STDMETHODCALLTYPE __RPC_FAR *GetTypeInfo) (IMSIMWindow __RPC_FAR *This, UINT iTInfo, LCID lcid, ITypeInfo __RPC_FAR *__RPC_FAR *ppTInfo);
	HRESULT(STDMETHODCALLTYPE __RPC_FAR *GetIDsOfNames) (IMSIMWindow __RPC_FAR *This, REFIID riid, LPOLESTR __RPC_FAR *rgszNames, UINT cNames, LCID lcid, DISPID __RPC_FAR *rgDispId);
	HRESULT(STDMETHODCALLTYPE __RPC_FAR *Invoke) (IMSIMWindow __RPC_FAR *This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS __RPC_FAR *pDispParams, VARIANT __RPC_FAR *pVarResult, EXCEPINFO __RPC_FAR *pExcepInfo, UINT __RPC_FAR *puArgErr);
	HRESULT(STDMETHODCALLTYPE __RPC_FAR *get_Object) (IMSIMWindow __RPC_FAR *This, IDispatch __RPC_FAR *__RPC_FAR *ppDisp);
	HRESULT(STDMETHODCALLTYPE __RPC_FAR *Move) (IMSIMWindow __RPC_FAR *This, long nX, long nY, long nWidth, long nHeight);
	HRESULT(STDMETHODCALLTYPE __RPC_FAR *Focus) (IMSIMWindow __RPC_FAR *This);
	HRESULT(STDMETHODCALLTYPE __RPC_FAR *Show) (IMSIMWindow __RPC_FAR *This);
	HRESULT(STDMETHODCALLTYPE __RPC_FAR *Hide) (IMSIMWindow __RPC_FAR *This);
	HRESULT(STDMETHODCALLTYPE __RPC_FAR *get_Title) (IMSIMWindow __RPC_FAR *This, BSTR __RPC_FAR *pVal);
	HRESULT(STDMETHODCALLTYPE __RPC_FAR *put_Title) (IMSIMWindow __RPC_FAR *This, BSTR newVal);
	HRESULT(STDMETHODCALLTYPE __RPC_FAR *Close) (IMSIMWindow __RPC_FAR *This);
	HRESULT(STDMETHODCALLTYPE __RPC_FAR *get_HasFocus) (IMSIMWindow __RPC_FAR *This, VARIANT_BOOL __RPC_FAR *pVal);
	HRESULT(STDMETHODCALLTYPE __RPC_FAR *get_IsVisible) (IMSIMWindow __RPC_FAR *This, VARIANT_BOOL __RPC_FAR *pVal);
	HRESULT(STDMETHODCALLTYPE __RPC_FAR *GetPosition) (IMSIMWindow __RPC_FAR *This, VARIANT __RPC_FAR *pvarX, VARIANT __RPC_FAR *pvarY, VARIANT __RPC_FAR *pvarWidth, VARIANT __RPC_FAR *pvarHeight);
	HRESULT(STDMETHODCALLTYPE __RPC_FAR *get_TopMost) (IMSIMWindow __RPC_FAR *This, VARIANT_BOOL __RPC_FAR *pVal);
	HRESULT(STDMETHODCALLTYPE __RPC_FAR *put_TopMost) (IMSIMWindow __RPC_FAR *This, VARIANT_BOOL newVal);
	HRESULT(STDMETHODCALLTYPE __RPC_FAR *get_Window) (IMSIMWindow __RPC_FAR *This, long __RPC_FAR *pVal);
	END_INTERFACE
}  IMSIMWindowVtbl;
interface IMSIMWindow
{
	CONST_VTBL struct IMSIMWindowVtbl __RPC_FAR *lpVtbl;
};
#ifdef COBJMACROS
#define IMSIMWindow_QueryInterface(This,riid,ppvObject) (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)
#define IMSIMWindow_AddRef(This) (This)->lpVtbl -> AddRef(This)
#define IMSIMWindow_Release(This) (This)->lpVtbl -> Release(This)
#define IMSIMWindow_GetTypeInfoCount(This,pctinfo) (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo)
#define IMSIMWindow_GetTypeInfo(This,iTInfo,lcid,ppTInfo) (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo)
#define IMSIMWindow_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)
#define IMSIMWindow_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)
#define IMSIMWindow_get_Object(This,ppDisp) (This)->lpVtbl -> get_Object(This,ppDisp)
#define IMSIMWindow_Move(This,nX,nY,nWidth,nHeight) (This)->lpVtbl -> Move(This,nX,nY,nWidth,nHeight)
#define IMSIMWindow_Focus(This) (This)->lpVtbl -> Focus(This)
#define IMSIMWindow_Show(This) (This)->lpVtbl -> Show(This)
#define IMSIMWindow_Hide(This) (This)->lpVtbl -> Hide(This)
#define IMSIMWindow_get_Title(This,pVal) (This)->lpVtbl -> get_Title(This,pVal)
#define IMSIMWindow_put_Title(This,newVal) (This)->lpVtbl -> put_Title(This,newVal)
#define IMSIMWindow_Close(This) (This)->lpVtbl -> Close(This)
#define IMSIMWindow_get_HasFocus(This,pVal) (This)->lpVtbl -> get_HasFocus(This,pVal)
#define IMSIMWindow_get_IsVisible(This,pVal) (This)->lpVtbl -> get_IsVisible(This,pVal)
#define IMSIMWindow_GetPosition(This,pvarX,pvarY,pvarWidth,pvarHeight) (This)->lpVtbl -> GetPosition(This,pvarX,pvarY,pvarWidth,pvarHeight)
#define IMSIMWindow_get_TopMost(This,pVal) (This)->lpVtbl -> get_TopMost(This,pVal)
#define IMSIMWindow_put_TopMost(This,newVal) (This)->lpVtbl -> put_TopMost(This,newVal)
#define IMSIMWindow_get_Window(This,pVal) (This)->lpVtbl -> get_Window(This,pVal)
#endif
HRESULT STDMETHODCALLTYPE IMSIMWindow_get_Object_Proxy(IMSIMWindow __RPC_FAR *This, IDispatch __RPC_FAR *__RPC_FAR *ppDisp);
void __RPC_STUB IMSIMWindow_get_Object_Stub(IRpcStubBuffer *This, IRpcChannelBuffer *_pRpcChannelBuffer, PRPC_MESSAGE _pRpcMessage, DWORD *_pdwStubPhase);
HRESULT STDMETHODCALLTYPE IMSIMWindow_Move_Proxy(IMSIMWindow __RPC_FAR *This, long nX, long nY, long nWidth, long nHeight);
void __RPC_STUB IMSIMWindow_Move_Stub(IRpcStubBuffer *This, IRpcChannelBuffer *_pRpcChannelBuffer, PRPC_MESSAGE _pRpcMessage, DWORD *_pdwStubPhase);
HRESULT STDMETHODCALLTYPE IMSIMWindow_Focus_Proxy(IMSIMWindow __RPC_FAR *This);
void __RPC_STUB IMSIMWindow_Focus_Stub(IRpcStubBuffer *This, IRpcChannelBuffer *_pRpcChannelBuffer, PRPC_MESSAGE _pRpcMessage, DWORD *_pdwStubPhase);
HRESULT STDMETHODCALLTYPE IMSIMWindow_Show_Proxy(IMSIMWindow __RPC_FAR *This);
void __RPC_STUB IMSIMWindow_Show_Stub(IRpcStubBuffer *This, IRpcChannelBuffer *_pRpcChannelBuffer, PRPC_MESSAGE _pRpcMessage, DWORD *_pdwStubPhase);
HRESULT STDMETHODCALLTYPE IMSIMWindow_Hide_Proxy(IMSIMWindow __RPC_FAR *This);
void __RPC_STUB IMSIMWindow_Hide_Stub(IRpcStubBuffer *This, IRpcChannelBuffer *_pRpcChannelBuffer, PRPC_MESSAGE _pRpcMessage, DWORD *_pdwStubPhase);
HRESULT STDMETHODCALLTYPE IMSIMWindow_get_Title_Proxy(IMSIMWindow __RPC_FAR *This, BSTR __RPC_FAR *pVal);
void __RPC_STUB IMSIMWindow_get_Title_Stub(IRpcStubBuffer *This, IRpcChannelBuffer *_pRpcChannelBuffer, PRPC_MESSAGE _pRpcMessage, DWORD *_pdwStubPhase);
HRESULT STDMETHODCALLTYPE IMSIMWindow_put_Title_Proxy(IMSIMWindow __RPC_FAR *This, BSTR newVal);
void __RPC_STUB IMSIMWindow_put_Title_Stub(IRpcStubBuffer *This, IRpcChannelBuffer *_pRpcChannelBuffer, PRPC_MESSAGE _pRpcMessage, DWORD *_pdwStubPhase);
HRESULT STDMETHODCALLTYPE IMSIMWindow_Close_Proxy(IMSIMWindow __RPC_FAR *This);
void __RPC_STUB IMSIMWindow_Close_Stub(IRpcStubBuffer *This, IRpcChannelBuffer *_pRpcChannelBuffer, PRPC_MESSAGE _pRpcMessage, DWORD *_pdwStubPhase);
HRESULT STDMETHODCALLTYPE IMSIMWindow_get_HasFocus_Proxy(IMSIMWindow __RPC_FAR *This, VARIANT_BOOL __RPC_FAR *pVal);
void __RPC_STUB IMSIMWindow_get_HasFocus_Stub(IRpcStubBuffer *This, IRpcChannelBuffer *_pRpcChannelBuffer, PRPC_MESSAGE _pRpcMessage, DWORD *_pdwStubPhase);
HRESULT STDMETHODCALLTYPE IMSIMWindow_get_IsVisible_Proxy(IMSIMWindow __RPC_FAR *This, VARIANT_BOOL __RPC_FAR *pVal);
void __RPC_STUB IMSIMWindow_get_IsVisible_Stub(IRpcStubBuffer *This, IRpcChannelBuffer *_pRpcChannelBuffer, PRPC_MESSAGE _pRpcMessage, DWORD *_pdwStubPhase);
HRESULT STDMETHODCALLTYPE IMSIMWindow_GetPosition_Proxy(IMSIMWindow __RPC_FAR *This, VARIANT __RPC_FAR *pvarX, VARIANT __RPC_FAR *pvarY, VARIANT __RPC_FAR *pvarWidth, VARIANT __RPC_FAR *pvarHeight);
void __RPC_STUB IMSIMWindow_GetPosition_Stub(IRpcStubBuffer *This, IRpcChannelBuffer *_pRpcChannelBuffer, PRPC_MESSAGE _pRpcMessage, DWORD *_pdwStubPhase);
HRESULT STDMETHODCALLTYPE IMSIMWindow_get_TopMost_Proxy(IMSIMWindow __RPC_FAR *This, VARIANT_BOOL __RPC_FAR *pVal);
void __RPC_STUB IMSIMWindow_get_TopMost_Stub(IRpcStubBuffer *This, IRpcChannelBuffer *_pRpcChannelBuffer, PRPC_MESSAGE _pRpcMessage, DWORD *_pdwStubPhase);
HRESULT STDMETHODCALLTYPE IMSIMWindow_put_TopMost_Proxy(IMSIMWindow __RPC_FAR *This, VARIANT_BOOL newVal);
void __RPC_STUB IMSIMWindow_put_TopMost_Stub(IRpcStubBuffer *This, IRpcChannelBuffer *_pRpcChannelBuffer, PRPC_MESSAGE _pRpcMessage, DWORD *_pdwStubPhase);
HRESULT STDMETHODCALLTYPE IMSIMWindow_get_Window_Proxy(IMSIMWindow __RPC_FAR *This, long __RPC_FAR *pVal);
void __RPC_STUB IMSIMWindow_get_Window_Stub(IRpcStubBuffer *This, IRpcChannelBuffer *_pRpcChannelBuffer, PRPC_MESSAGE _pRpcMessage, DWORD *_pdwStubPhase);
#endif
#ifndef __DMSIMWindowEvents_DISPINTERFACE_DEFINED__
#define __DMSIMWindowEvents_DISPINTERFACE_DEFINED__
extern const IID DIID_DMSIMWindowEvents;
typedef struct DMSIMWindowEventsVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE __RPC_FAR *QueryInterface) (DMSIMWindowEvents __RPC_FAR *This, REFIID riid, void __RPC_FAR *__RPC_FAR *ppvObject);
	ULONG(STDMETHODCALLTYPE __RPC_FAR *AddRef) (DMSIMWindowEvents __RPC_FAR *This);
	ULONG(STDMETHODCALLTYPE __RPC_FAR *Release) (DMSIMWindowEvents __RPC_FAR *This);
	HRESULT(STDMETHODCALLTYPE __RPC_FAR *GetTypeInfoCount) (DMSIMWindowEvents __RPC_FAR *This, UINT __RPC_FAR *pctinfo);
	HRESULT(STDMETHODCALLTYPE __RPC_FAR *GetTypeInfo) (DMSIMWindowEvents __RPC_FAR *This, UINT iTInfo, LCID lcid, ITypeInfo __RPC_FAR *__RPC_FAR *ppTInfo);
	HRESULT(STDMETHODCALLTYPE __RPC_FAR *GetIDsOfNames) (DMSIMWindowEvents __RPC_FAR *This, REFIID riid, LPOLESTR __RPC_FAR *rgszNames, UINT cNames, LCID lcid, DISPID __RPC_FAR *rgDispId);
	HRESULT(STDMETHODCALLTYPE __RPC_FAR *Invoke) (DMSIMWindowEvents __RPC_FAR *This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS __RPC_FAR *pDispParams, VARIANT __RPC_FAR *pVarResult, EXCEPINFO __RPC_FAR *pExcepInfo, UINT __RPC_FAR *puArgErr);
	END_INTERFACE
}  DMSIMWindowEventsVtbl;
interface DMSIMWindowEvents
{
	CONST_VTBL struct DMSIMWindowEventsVtbl __RPC_FAR *lpVtbl;
};
#ifdef COBJMACROS
#define DMSIMWindowEvents_QueryInterface(This,riid,ppvObject) (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)
#define DMSIMWindowEvents_AddRef(This) (This)->lpVtbl -> AddRef(This)
#define DMSIMWindowEvents_Release(This) (This)->lpVtbl -> Release(This)
#define DMSIMWindowEvents_GetTypeInfoCount(This,pctinfo) (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo)
#define DMSIMWindowEvents_GetTypeInfo(This,iTInfo,lcid,ppTInfo) (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo)
#define DMSIMWindowEvents_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)
#define DMSIMWindowEvents_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)
#endif
#endif
#ifndef __IIMService_INTERFACE_DEFINED__
#define __IIMService_INTERFACE_DEFINED__
extern const IID IID_IIMService;
typedef struct IIMServiceVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE __RPC_FAR *QueryInterface) (IIMService __RPC_FAR *This, REFIID riid, void __RPC_FAR *__RPC_FAR *ppvObject);
	ULONG(STDMETHODCALLTYPE __RPC_FAR *AddRef) (IIMService __RPC_FAR *This);
	ULONG(STDMETHODCALLTYPE __RPC_FAR *Release) (IIMService __RPC_FAR *This);
	HRESULT(STDMETHODCALLTYPE __RPC_FAR *GetTypeInfoCount) (IIMService __RPC_FAR *This, UINT __RPC_FAR *pctinfo);
	HRESULT(STDMETHODCALLTYPE __RPC_FAR *GetTypeInfo) (IIMService __RPC_FAR *This, UINT iTInfo, LCID lcid, ITypeInfo __RPC_FAR *__RPC_FAR *ppTInfo);
	HRESULT(STDMETHODCALLTYPE __RPC_FAR *GetIDsOfNames) (IIMService __RPC_FAR *This, REFIID riid, LPOLESTR __RPC_FAR *rgszNames, UINT cNames, LCID lcid, DISPID __RPC_FAR *rgDispId);
	HRESULT(STDMETHODCALLTYPE __RPC_FAR *Invoke) (IIMService __RPC_FAR *This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS __RPC_FAR *pDispParams, VARIANT __RPC_FAR *pVarResult, EXCEPINFO __RPC_FAR *pExcepInfo, UINT __RPC_FAR *puArgErr);
	HRESULT(STDMETHODCALLTYPE __RPC_FAR *get_Server) (IIMService __RPC_FAR *This, BSTR __RPC_FAR *pbstrName);
	HRESULT(STDMETHODCALLTYPE __RPC_FAR *get_IMAddress) (IIMService __RPC_FAR *This, BSTR __RPC_FAR *pbstrName);
	HRESULT(STDMETHODCALLTYPE __RPC_FAR *put_FriendlyName) (IIMService __RPC_FAR *This, BSTR bstrName);
	HRESULT(STDMETHODCALLTYPE __RPC_FAR *get_FriendlyName) (IIMService __RPC_FAR *This, BSTR __RPC_FAR *pbstrName);
	HRESULT(STDMETHODCALLTYPE __RPC_FAR *Logoff) (IIMService __RPC_FAR *This);
	HRESULT(STDMETHODCALLTYPE __RPC_FAR *FindContact) (IIMService __RPC_FAR *This, BSTR bstrFirstName, BSTR bstrLastName, BSTR bstrAlias, BSTR bstrCity, BSTR bstrState, BSTR bstrCountry, LONG __RPC_FAR *plCookie);
	HRESULT(STDMETHODCALLTYPE __RPC_FAR *Logon) (IIMService __RPC_FAR *This, VARIANT varParameter);
	HRESULT(STDMETHODCALLTYPE __RPC_FAR *CreateContact) (IIMService __RPC_FAR *This, BSTR bstrAlias, IDispatch __RPC_FAR *__RPC_FAR *ppContact);
	HRESULT(STDMETHODCALLTYPE __RPC_FAR *SetLocalState) (IIMService __RPC_FAR *This, long lState, BSTR bstrDescription, VARIANT varData);
	HRESULT(STDMETHODCALLTYPE __RPC_FAR *GetLocalState) (IIMService __RPC_FAR *This, VARIANT __RPC_FAR *pvarState, VARIANT __RPC_FAR *pvarDescription, VARIANT __RPC_FAR *pvarData);
	HRESULT(STDMETHODCALLTYPE __RPC_FAR *CreateIMSession) (IIMService __RPC_FAR *This, VARIANT varIMContact, IDispatch __RPC_FAR *__RPC_FAR *ppIMSession);
	HRESULT(STDMETHODCALLTYPE __RPC_FAR *get_IMSessions) (IIMService __RPC_FAR *This, IDispatch __RPC_FAR *__RPC_FAR *ppIMSessions);
	HRESULT(STDMETHODCALLTYPE __RPC_FAR *NewList) (IIMService __RPC_FAR *This, BSTR bstrListName, long bfProperties, IDispatch __RPC_FAR *__RPC_FAR *ppList);
	HRESULT(STDMETHODCALLTYPE __RPC_FAR *List) (IIMService __RPC_FAR *This, BSTR bstrListName, IDispatch __RPC_FAR *__RPC_FAR *ppList);
	HRESULT(STDMETHODCALLTYPE __RPC_FAR *RemoveList) (IIMService __RPC_FAR *This, BSTR bstrListName);
	HRESULT(STDMETHODCALLTYPE __RPC_FAR *SendNetMeetingInvite) (IIMService __RPC_FAR *This, VARIANT varContact, long lInviteCookie, long __RPC_FAR *plSendCookie);
	HRESULT(STDMETHODCALLTYPE __RPC_FAR *SendNetMeetingAccept) (IIMService __RPC_FAR *This, VARIANT varContact, long lInviteCookie, long lInviteType, long __RPC_FAR *plSendCookie);
	HRESULT(STDMETHODCALLTYPE __RPC_FAR *SendNetMeetingCancel) (IIMService __RPC_FAR *This, VARIANT varContact, long lInviteCookie, long hrReason, long __RPC_FAR *plSendCookie);
	HRESULT(STDMETHODCALLTYPE __RPC_FAR *get_BlockByDefault) (IIMService __RPC_FAR *This, VARIANT_BOOL __RPC_FAR *pVal);
	HRESULT(STDMETHODCALLTYPE __RPC_FAR *put_BlockByDefault) (IIMService __RPC_FAR *This, VARIANT_BOOL newVal);
	END_INTERFACE
}  IIMServiceVtbl;
interface IIMService
{
	CONST_VTBL struct IIMServiceVtbl __RPC_FAR *lpVtbl;
};
#ifdef COBJMACROS
#define IIMService_QueryInterface(This,riid,ppvObject) (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)
#define IIMService_AddRef(This) (This)->lpVtbl -> AddRef(This)
#define IIMService_Release(This) (This)->lpVtbl -> Release(This)
#define IIMService_GetTypeInfoCount(This,pctinfo) (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo)
#define IIMService_GetTypeInfo(This,iTInfo,lcid,ppTInfo) (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo)
#define IIMService_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)
#define IIMService_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)
#define IIMService_get_Server(This,pbstrName) (This)->lpVtbl -> get_Server(This,pbstrName)
#define IIMService_get_IMAddress(This,pbstrName) (This)->lpVtbl -> get_IMAddress(This,pbstrName)
#define IIMService_put_FriendlyName(This,bstrName) (This)->lpVtbl -> put_FriendlyName(This,bstrName)
#define IIMService_get_FriendlyName(This,pbstrName) (This)->lpVtbl -> get_FriendlyName(This,pbstrName)
#define IIMService_Logoff(This) (This)->lpVtbl -> Logoff(This)
#define IIMService_FindContact(This,bstrFirstName,bstrLastName,bstrAlias,bstrCity,bstrState,bstrCountry,plCookie) (This)->lpVtbl -> FindContact(This,bstrFirstName,bstrLastName,bstrAlias,bstrCity,bstrState,bstrCountry,plCookie)
#define IIMService_Logon(This,varParameter) (This)->lpVtbl -> Logon(This,varParameter)
#define IIMService_CreateContact(This,bstrAlias,ppContact) (This)->lpVtbl -> CreateContact(This,bstrAlias,ppContact)
#define IIMService_SetLocalState(This,lState,bstrDescription,varData) (This)->lpVtbl -> SetLocalState(This,lState,bstrDescription,varData)
#define IIMService_GetLocalState(This,pvarState,pvarDescription,pvarData) (This)->lpVtbl -> GetLocalState(This,pvarState,pvarDescription,pvarData)
#define IIMService_CreateIMSession(This,varIMContact,ppIMSession) (This)->lpVtbl -> CreateIMSession(This,varIMContact,ppIMSession)
#define IIMService_get_IMSessions(This,ppIMSessions) (This)->lpVtbl -> get_IMSessions(This,ppIMSessions)
#define IIMService_NewList(This,bstrListName,bfProperties,ppList) (This)->lpVtbl -> NewList(This,bstrListName,bfProperties,ppList)
#define IIMService_List(This,bstrListName,ppList) (This)->lpVtbl -> List(This,bstrListName,ppList)
#define IIMService_RemoveList(This,bstrListName) (This)->lpVtbl -> RemoveList(This,bstrListName)
#define IIMService_SendNetMeetingInvite(This,varContact,lInviteCookie,plSendCookie) (This)->lpVtbl -> SendNetMeetingInvite(This,varContact,lInviteCookie,plSendCookie)
#define IIMService_SendNetMeetingAccept(This,varContact,lInviteCookie,lInviteType,plSendCookie) (This)->lpVtbl -> SendNetMeetingAccept(This,varContact,lInviteCookie,lInviteType,plSendCookie)
#define IIMService_SendNetMeetingCancel(This,varContact,lInviteCookie,hrReason,plSendCookie) (This)->lpVtbl -> SendNetMeetingCancel(This,varContact,lInviteCookie,hrReason,plSendCookie)
#define IIMService_get_BlockByDefault(This,pVal) (This)->lpVtbl -> get_BlockByDefault(This,pVal)
#define IIMService_put_BlockByDefault(This,newVal) (This)->lpVtbl -> put_BlockByDefault(This,newVal)
#endif
HRESULT STDMETHODCALLTYPE IIMService_get_Server_Proxy(IIMService __RPC_FAR *This, BSTR __RPC_FAR *pbstrName);
void __RPC_STUB IIMService_get_Server_Stub(IRpcStubBuffer *This, IRpcChannelBuffer *_pRpcChannelBuffer, PRPC_MESSAGE _pRpcMessage, DWORD *_pdwStubPhase);
HRESULT STDMETHODCALLTYPE IIMService_get_IMAddress_Proxy(IIMService __RPC_FAR *This, BSTR __RPC_FAR *pbstrName);
void __RPC_STUB IIMService_get_IMAddress_Stub(IRpcStubBuffer *This, IRpcChannelBuffer *_pRpcChannelBuffer, PRPC_MESSAGE _pRpcMessage, DWORD *_pdwStubPhase);
HRESULT STDMETHODCALLTYPE IIMService_put_FriendlyName_Proxy(IIMService __RPC_FAR *This, BSTR bstrName);
void __RPC_STUB IIMService_put_FriendlyName_Stub(IRpcStubBuffer *This, IRpcChannelBuffer *_pRpcChannelBuffer, PRPC_MESSAGE _pRpcMessage, DWORD *_pdwStubPhase);
HRESULT STDMETHODCALLTYPE IIMService_get_FriendlyName_Proxy(IIMService __RPC_FAR *This, BSTR __RPC_FAR *pbstrName);
void __RPC_STUB IIMService_get_FriendlyName_Stub(IRpcStubBuffer *This, IRpcChannelBuffer *_pRpcChannelBuffer, PRPC_MESSAGE _pRpcMessage, DWORD *_pdwStubPhase);
HRESULT STDMETHODCALLTYPE IIMService_Logoff_Proxy(IIMService __RPC_FAR *This);
void __RPC_STUB IIMService_Logoff_Stub(IRpcStubBuffer *This, IRpcChannelBuffer *_pRpcChannelBuffer, PRPC_MESSAGE _pRpcMessage, DWORD *_pdwStubPhase);
HRESULT STDMETHODCALLTYPE IIMService_FindContact_Proxy(IIMService __RPC_FAR *This, BSTR bstrFirstName, BSTR bstrLastName, BSTR bstrAlias, BSTR bstrCity, BSTR bstrState, BSTR bstrCountry, LONG __RPC_FAR *plCookie);
void __RPC_STUB IIMService_FindContact_Stub(IRpcStubBuffer *This, IRpcChannelBuffer *_pRpcChannelBuffer, PRPC_MESSAGE _pRpcMessage, DWORD *_pdwStubPhase);
HRESULT STDMETHODCALLTYPE IIMService_Logon_Proxy(IIMService __RPC_FAR *This, VARIANT varParameter);
void __RPC_STUB IIMService_Logon_Stub(IRpcStubBuffer *This, IRpcChannelBuffer *_pRpcChannelBuffer, PRPC_MESSAGE _pRpcMessage, DWORD *_pdwStubPhase);
HRESULT STDMETHODCALLTYPE IIMService_CreateContact_Proxy(IIMService __RPC_FAR *This, BSTR bstrAlias, IDispatch __RPC_FAR *__RPC_FAR *ppContact);
void __RPC_STUB IIMService_CreateContact_Stub(IRpcStubBuffer *This, IRpcChannelBuffer *_pRpcChannelBuffer, PRPC_MESSAGE _pRpcMessage, DWORD *_pdwStubPhase);
HRESULT STDMETHODCALLTYPE IIMService_SetLocalState_Proxy(IIMService __RPC_FAR *This, long lState, BSTR bstrDescription, VARIANT varData);
void __RPC_STUB IIMService_SetLocalState_Stub(IRpcStubBuffer *This, IRpcChannelBuffer *_pRpcChannelBuffer, PRPC_MESSAGE _pRpcMessage, DWORD *_pdwStubPhase);
HRESULT STDMETHODCALLTYPE IIMService_GetLocalState_Proxy(IIMService __RPC_FAR *This, VARIANT __RPC_FAR *pvarState, VARIANT __RPC_FAR *pvarDescription, VARIANT __RPC_FAR *pvarData);
void __RPC_STUB IIMService_GetLocalState_Stub(IRpcStubBuffer *This, IRpcChannelBuffer *_pRpcChannelBuffer, PRPC_MESSAGE _pRpcMessage, DWORD *_pdwStubPhase);
HRESULT STDMETHODCALLTYPE IIMService_CreateIMSession_Proxy(IIMService __RPC_FAR *This, VARIANT varIMContact, IDispatch __RPC_FAR *__RPC_FAR *ppIMSession);
void __RPC_STUB IIMService_CreateIMSession_Stub(IRpcStubBuffer *This, IRpcChannelBuffer *_pRpcChannelBuffer, PRPC_MESSAGE _pRpcMessage, DWORD *_pdwStubPhase);
HRESULT STDMETHODCALLTYPE IIMService_get_IMSessions_Proxy(IIMService __RPC_FAR *This, IDispatch __RPC_FAR *__RPC_FAR *ppIMSessions);
void __RPC_STUB IIMService_get_IMSessions_Stub(IRpcStubBuffer *This, IRpcChannelBuffer *_pRpcChannelBuffer, PRPC_MESSAGE _pRpcMessage, DWORD *_pdwStubPhase);
HRESULT STDMETHODCALLTYPE IIMService_NewList_Proxy(IIMService __RPC_FAR *This, BSTR bstrListName, long bfProperties, IDispatch __RPC_FAR *__RPC_FAR *ppList);
void __RPC_STUB IIMService_NewList_Stub(IRpcStubBuffer *This, IRpcChannelBuffer *_pRpcChannelBuffer, PRPC_MESSAGE _pRpcMessage, DWORD *_pdwStubPhase);
HRESULT STDMETHODCALLTYPE IIMService_List_Proxy(IIMService __RPC_FAR *This, BSTR bstrListName, IDispatch __RPC_FAR *__RPC_FAR *ppList);
void __RPC_STUB IIMService_List_Stub(IRpcStubBuffer *This, IRpcChannelBuffer *_pRpcChannelBuffer, PRPC_MESSAGE _pRpcMessage, DWORD *_pdwStubPhase);
HRESULT STDMETHODCALLTYPE IIMService_RemoveList_Proxy(IIMService __RPC_FAR *This, BSTR bstrListName);
void __RPC_STUB IIMService_RemoveList_Stub(IRpcStubBuffer *This, IRpcChannelBuffer *_pRpcChannelBuffer, PRPC_MESSAGE _pRpcMessage, DWORD *_pdwStubPhase);
HRESULT STDMETHODCALLTYPE IIMService_SendNetMeetingInvite_Proxy(IIMService __RPC_FAR *This, VARIANT varContact, long lInviteCookie, long __RPC_FAR *plSendCookie);
void __RPC_STUB IIMService_SendNetMeetingInvite_Stub(IRpcStubBuffer *This, IRpcChannelBuffer *_pRpcChannelBuffer, PRPC_MESSAGE _pRpcMessage, DWORD *_pdwStubPhase);
HRESULT STDMETHODCALLTYPE IIMService_SendNetMeetingAccept_Proxy(IIMService __RPC_FAR *This, VARIANT varContact, long lInviteCookie, long lInviteType, long __RPC_FAR *plSendCookie);
void __RPC_STUB IIMService_SendNetMeetingAccept_Stub(IRpcStubBuffer *This, IRpcChannelBuffer *_pRpcChannelBuffer, PRPC_MESSAGE _pRpcMessage, DWORD *_pdwStubPhase);
HRESULT STDMETHODCALLTYPE IIMService_SendNetMeetingCancel_Proxy(IIMService __RPC_FAR *This, VARIANT varContact, long lInviteCookie, long hrReason, long __RPC_FAR *plSendCookie);
void __RPC_STUB IIMService_SendNetMeetingCancel_Stub(IRpcStubBuffer *This, IRpcChannelBuffer *_pRpcChannelBuffer, PRPC_MESSAGE _pRpcMessage, DWORD *_pdwStubPhase);
HRESULT STDMETHODCALLTYPE IIMService_get_BlockByDefault_Proxy(IIMService __RPC_FAR *This, VARIANT_BOOL __RPC_FAR *pVal);
void __RPC_STUB IIMService_get_BlockByDefault_Stub(IRpcStubBuffer *This, IRpcChannelBuffer *_pRpcChannelBuffer, PRPC_MESSAGE _pRpcMessage, DWORD *_pdwStubPhase);
HRESULT STDMETHODCALLTYPE IIMService_put_BlockByDefault_Proxy(IIMService __RPC_FAR *This, VARIANT_BOOL newVal);
void __RPC_STUB IIMService_put_BlockByDefault_Stub(IRpcStubBuffer *This, IRpcChannelBuffer *_pRpcChannelBuffer, PRPC_MESSAGE _pRpcMessage, DWORD *_pdwStubPhase);
#endif
#ifndef __DIMServiceEvents_DISPINTERFACE_DEFINED__
#define __DIMServiceEvents_DISPINTERFACE_DEFINED__
extern const IID DIID_DIMServiceEvents;
typedef struct DIMServiceEventsVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE __RPC_FAR *QueryInterface) (DIMServiceEvents __RPC_FAR *This, REFIID riid, void __RPC_FAR *__RPC_FAR *ppvObject);
	ULONG(STDMETHODCALLTYPE __RPC_FAR *AddRef) (DIMServiceEvents __RPC_FAR *This);
	ULONG(STDMETHODCALLTYPE __RPC_FAR *Release) (DIMServiceEvents __RPC_FAR *This);
	HRESULT(STDMETHODCALLTYPE __RPC_FAR *GetTypeInfoCount) (DIMServiceEvents __RPC_FAR *This, UINT __RPC_FAR *pctinfo);
	HRESULT(STDMETHODCALLTYPE __RPC_FAR *GetTypeInfo) (DIMServiceEvents __RPC_FAR *This, UINT iTInfo, LCID lcid, ITypeInfo __RPC_FAR *__RPC_FAR *ppTInfo);
	HRESULT(STDMETHODCALLTYPE __RPC_FAR *GetIDsOfNames) (DIMServiceEvents __RPC_FAR *This, REFIID riid, LPOLESTR __RPC_FAR *rgszNames, UINT cNames, LCID lcid, DISPID __RPC_FAR *rgDispId);
	HRESULT(STDMETHODCALLTYPE __RPC_FAR *Invoke) (DIMServiceEvents __RPC_FAR *This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS __RPC_FAR *pDispParams, VARIANT __RPC_FAR *pVarResult, EXCEPINFO __RPC_FAR *pExcepInfo, UINT __RPC_FAR *puArgErr);
	END_INTERFACE
}  DIMServiceEventsVtbl;
interface DIMServiceEvents
{
	CONST_VTBL struct DIMServiceEventsVtbl __RPC_FAR *lpVtbl;
};
#ifdef COBJMACROS
#define DIMServiceEvents_QueryInterface(This,riid,ppvObject) (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)
#define DIMServiceEvents_AddRef(This) (This)->lpVtbl -> AddRef(This)
#define DIMServiceEvents_Release(This) (This)->lpVtbl -> Release(This)
#define DIMServiceEvents_GetTypeInfoCount(This,pctinfo) (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo)
#define DIMServiceEvents_GetTypeInfo(This,iTInfo,lcid,ppTInfo) (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo)
#define DIMServiceEvents_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)
#define DIMServiceEvents_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)
#endif
#endif
#ifndef __IIMContact_INTERFACE_DEFINED__
#define __IIMContact_INTERFACE_DEFINED__
extern const IID IID_IIMContact;
typedef struct IIMContactVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE __RPC_FAR *QueryInterface) (IIMContact __RPC_FAR *This, REFIID riid, void __RPC_FAR *__RPC_FAR *ppvObject);
	ULONG(STDMETHODCALLTYPE __RPC_FAR *AddRef) (IIMContact __RPC_FAR *This);
	ULONG(STDMETHODCALLTYPE __RPC_FAR *Release) (IIMContact __RPC_FAR *This);
	HRESULT(STDMETHODCALLTYPE __RPC_FAR *GetTypeInfoCount) (IIMContact __RPC_FAR *This, UINT __RPC_FAR *pctinfo);
	HRESULT(STDMETHODCALLTYPE __RPC_FAR *GetTypeInfo) (IIMContact __RPC_FAR *This, UINT iTInfo, LCID lcid, ITypeInfo __RPC_FAR *__RPC_FAR *ppTInfo);
	HRESULT(STDMETHODCALLTYPE __RPC_FAR *GetIDsOfNames) (IIMContact __RPC_FAR *This, REFIID riid, LPOLESTR __RPC_FAR *rgszNames, UINT cNames, LCID lcid, DISPID __RPC_FAR *rgDispId);
	HRESULT(STDMETHODCALLTYPE __RPC_FAR *Invoke) (IIMContact __RPC_FAR *This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS __RPC_FAR *pDispParams, VARIANT __RPC_FAR *pVarResult, EXCEPINFO __RPC_FAR *pExcepInfo, UINT __RPC_FAR *puArgErr);
	HRESULT(STDMETHODCALLTYPE __RPC_FAR *put_FriendlyName) (IIMContact __RPC_FAR *This, BSTR bstrFriendlyName);
	HRESULT(STDMETHODCALLTYPE __RPC_FAR *get_FriendlyName) (IIMContact __RPC_FAR *This, BSTR __RPC_FAR *pbstrFriendlyName);
	HRESULT(STDMETHODCALLTYPE __RPC_FAR *get_EmailAddress) (IIMContact __RPC_FAR *This, BSTR __RPC_FAR *pbstrEmailAddress);
	HRESULT(STDMETHODCALLTYPE __RPC_FAR *get_State) (IIMContact __RPC_FAR *This, IM_STATE __RPC_FAR *pmState);
	HRESULT(STDMETHODCALLTYPE __RPC_FAR *get_LogonName) (IIMContact __RPC_FAR *This, BSTR __RPC_FAR *pbstrLogonName);
	HRESULT(STDMETHODCALLTYPE __RPC_FAR *SendText) (IIMContact __RPC_FAR *This, BSTR bstrMsgHeader, BSTR bstrMsgText, IM_MSG_TYPE MsgType, LONG __RPC_FAR *plCookie);
	HRESULT(STDMETHODCALLTYPE __RPC_FAR *get_Service) (IIMContact __RPC_FAR *This, IDispatch __RPC_FAR *__RPC_FAR *ppService);
	END_INTERFACE
}  IIMContactVtbl;
interface IIMContact
{
	CONST_VTBL struct IIMContactVtbl __RPC_FAR *lpVtbl;
};
#ifdef COBJMACROS
#define IIMContact_QueryInterface(This,riid,ppvObject) (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)
#define IIMContact_AddRef(This) (This)->lpVtbl -> AddRef(This)
#define IIMContact_Release(This) (This)->lpVtbl -> Release(This)
#define IIMContact_GetTypeInfoCount(This,pctinfo) (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo)
#define IIMContact_GetTypeInfo(This,iTInfo,lcid,ppTInfo) (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo)
#define IIMContact_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)
#define IIMContact_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)
#define IIMContact_put_FriendlyName(This,bstrFriendlyName) (This)->lpVtbl -> put_FriendlyName(This,bstrFriendlyName)
#define IIMContact_get_FriendlyName(This,pbstrFriendlyName) (This)->lpVtbl -> get_FriendlyName(This,pbstrFriendlyName)
#define IIMContact_get_EmailAddress(This,pbstrEmailAddress) (This)->lpVtbl -> get_EmailAddress(This,pbstrEmailAddress)
#define IIMContact_get_State(This,pmState) (This)->lpVtbl -> get_State(This,pmState)
#define IIMContact_get_LogonName(This,pbstrLogonName) (This)->lpVtbl -> get_LogonName(This,pbstrLogonName)
#define IIMContact_SendText(This,bstrMsgHeader,bstrMsgText,MsgType,plCookie) (This)->lpVtbl -> SendText(This,bstrMsgHeader,bstrMsgText,MsgType,plCookie)
#define IIMContact_get_Service(This,ppService) (This)->lpVtbl -> get_Service(This,ppService)
#endif
HRESULT STDMETHODCALLTYPE IIMContact_put_FriendlyName_Proxy(IIMContact __RPC_FAR *This, BSTR bstrFriendlyName);
void __RPC_STUB IIMContact_put_FriendlyName_Stub(IRpcStubBuffer *This, IRpcChannelBuffer *_pRpcChannelBuffer, PRPC_MESSAGE _pRpcMessage, DWORD *_pdwStubPhase);
HRESULT STDMETHODCALLTYPE IIMContact_get_FriendlyName_Proxy(IIMContact __RPC_FAR *This, BSTR __RPC_FAR *pbstrFriendlyName);
void __RPC_STUB IIMContact_get_FriendlyName_Stub(IRpcStubBuffer *This, IRpcChannelBuffer *_pRpcChannelBuffer, PRPC_MESSAGE _pRpcMessage, DWORD *_pdwStubPhase);
HRESULT STDMETHODCALLTYPE IIMContact_get_EmailAddress_Proxy(IIMContact __RPC_FAR *This, BSTR __RPC_FAR *pbstrEmailAddress);
void __RPC_STUB IIMContact_get_EmailAddress_Stub(IRpcStubBuffer *This, IRpcChannelBuffer *_pRpcChannelBuffer, PRPC_MESSAGE _pRpcMessage, DWORD *_pdwStubPhase);
HRESULT STDMETHODCALLTYPE IIMContact_get_State_Proxy(IIMContact __RPC_FAR *This, IM_STATE __RPC_FAR *pmState);
void __RPC_STUB IIMContact_get_State_Stub(IRpcStubBuffer *This, IRpcChannelBuffer *_pRpcChannelBuffer, PRPC_MESSAGE _pRpcMessage, DWORD *_pdwStubPhase);
HRESULT STDMETHODCALLTYPE IIMContact_get_LogonName_Proxy(IIMContact __RPC_FAR *This, BSTR __RPC_FAR *pbstrLogonName);
void __RPC_STUB IIMContact_get_LogonName_Stub(IRpcStubBuffer *This, IRpcChannelBuffer *_pRpcChannelBuffer, PRPC_MESSAGE _pRpcMessage, DWORD *_pdwStubPhase);
HRESULT STDMETHODCALLTYPE IIMContact_SendText_Proxy(IIMContact __RPC_FAR *This, BSTR bstrMsgHeader, BSTR bstrMsgText, IM_MSG_TYPE MsgType, LONG __RPC_FAR *plCookie);
void __RPC_STUB IIMContact_SendText_Stub(IRpcStubBuffer *This, IRpcChannelBuffer *_pRpcChannelBuffer, PRPC_MESSAGE _pRpcMessage, DWORD *_pdwStubPhase);
HRESULT STDMETHODCALLTYPE IIMContact_get_Service_Proxy(IIMContact __RPC_FAR *This, IDispatch __RPC_FAR *__RPC_FAR *ppService);
void __RPC_STUB IIMContact_get_Service_Stub(IRpcStubBuffer *This, IRpcChannelBuffer *_pRpcChannelBuffer, PRPC_MESSAGE _pRpcMessage, DWORD *_pdwStubPhase);
#endif
#ifndef __IIMContacts_INTERFACE_DEFINED__
#define __IIMContacts_INTERFACE_DEFINED__
extern const IID IID_IIMContacts;
typedef struct IIMContactsVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE __RPC_FAR *QueryInterface) (IIMContacts __RPC_FAR *This, REFIID riid, void __RPC_FAR *__RPC_FAR *ppvObject);
	ULONG(STDMETHODCALLTYPE __RPC_FAR *AddRef) (IIMContacts __RPC_FAR *This);
	ULONG(STDMETHODCALLTYPE __RPC_FAR *Release) (IIMContacts __RPC_FAR *This);
	HRESULT(STDMETHODCALLTYPE __RPC_FAR *GetTypeInfoCount) (IIMContacts __RPC_FAR *This, UINT __RPC_FAR *pctinfo);
	HRESULT(STDMETHODCALLTYPE __RPC_FAR *GetTypeInfo) (IIMContacts __RPC_FAR *This, UINT iTInfo, LCID lcid, ITypeInfo __RPC_FAR *__RPC_FAR *ppTInfo);
	HRESULT(STDMETHODCALLTYPE __RPC_FAR *GetIDsOfNames) (IIMContacts __RPC_FAR *This, REFIID riid, LPOLESTR __RPC_FAR *rgszNames, UINT cNames, LCID lcid, DISPID __RPC_FAR *rgDispId);
	HRESULT(STDMETHODCALLTYPE __RPC_FAR *Invoke) (IIMContacts __RPC_FAR *This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS __RPC_FAR *pDispParams, VARIANT __RPC_FAR *pVarResult, EXCEPINFO __RPC_FAR *pExcepInfo, UINT __RPC_FAR *puArgErr);
	HRESULT(STDMETHODCALLTYPE __RPC_FAR *Item) (IIMContacts __RPC_FAR *This, VARIANT varItem, IDispatch __RPC_FAR *__RPC_FAR *ppContact);
	HRESULT(STDMETHODCALLTYPE __RPC_FAR *get_Count) (IIMContacts __RPC_FAR *This, long __RPC_FAR *pVal);
	HRESULT(STDMETHODCALLTYPE __RPC_FAR *Add) (IIMContacts __RPC_FAR *This, IDispatch __RPC_FAR *pContact);
	HRESULT(STDMETHODCALLTYPE __RPC_FAR *Remove) (IIMContacts __RPC_FAR *This, IDispatch __RPC_FAR *pContact);
	HRESULT(STDMETHODCALLTYPE __RPC_FAR *get_Name) (IIMContacts __RPC_FAR *This, BSTR __RPC_FAR *pVal);
	HRESULT(STDMETHODCALLTYPE __RPC_FAR *put_Name) (IIMContacts __RPC_FAR *This, BSTR newVal);
	HRESULT(STDMETHODCALLTYPE __RPC_FAR *get_Properties) (IIMContacts __RPC_FAR *This, long __RPC_FAR *pVal);
	HRESULT(STDMETHODCALLTYPE __RPC_FAR *get_Cookie) (IIMContacts __RPC_FAR *This, long __RPC_FAR *pVal);
	HRESULT(STDMETHODCALLTYPE __RPC_FAR *get__NewEnum) (IIMContacts __RPC_FAR *This, IUnknown __RPC_FAR *__RPC_FAR *ppVal);
	END_INTERFACE
}  IIMContactsVtbl;
interface IIMContacts
{
	CONST_VTBL struct IIMContactsVtbl __RPC_FAR *lpVtbl;
};
#ifdef COBJMACROS
#define IIMContacts_QueryInterface(This,riid,ppvObject) (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)
#define IIMContacts_AddRef(This) (This)->lpVtbl -> AddRef(This)
#define IIMContacts_Release(This) (This)->lpVtbl -> Release(This)
#define IIMContacts_GetTypeInfoCount(This,pctinfo) (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo)
#define IIMContacts_GetTypeInfo(This,iTInfo,lcid,ppTInfo) (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo)
#define IIMContacts_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)
#define IIMContacts_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)
#define IIMContacts_Item(This,varItem,ppContact) (This)->lpVtbl -> Item(This,varItem,ppContact)
#define IIMContacts_get_Count(This,pVal) (This)->lpVtbl -> get_Count(This,pVal)
#define IIMContacts_Add(This,pContact) (This)->lpVtbl -> Add(This,pContact)
#define IIMContacts_Remove(This,pContact) (This)->lpVtbl -> Remove(This,pContact)
#define IIMContacts_get_Name(This,pVal) (This)->lpVtbl -> get_Name(This,pVal)
#define IIMContacts_put_Name(This,newVal) (This)->lpVtbl -> put_Name(This,newVal)
#define IIMContacts_get_Properties(This,pVal) (This)->lpVtbl -> get_Properties(This,pVal)
#define IIMContacts_get_Cookie(This,pVal) (This)->lpVtbl -> get_Cookie(This,pVal)
#define IIMContacts_get__NewEnum(This,ppVal) (This)->lpVtbl -> get__NewEnum(This,ppVal)
#endif
HRESULT STDMETHODCALLTYPE IIMContacts_Item_Proxy(IIMContacts __RPC_FAR *This, VARIANT varItem, IDispatch __RPC_FAR *__RPC_FAR *ppContact);
void __RPC_STUB IIMContacts_Item_Stub(IRpcStubBuffer *This, IRpcChannelBuffer *_pRpcChannelBuffer, PRPC_MESSAGE _pRpcMessage, DWORD *_pdwStubPhase);
HRESULT STDMETHODCALLTYPE IIMContacts_get_Count_Proxy(IIMContacts __RPC_FAR *This, long __RPC_FAR *pVal);
void __RPC_STUB IIMContacts_get_Count_Stub(IRpcStubBuffer *This, IRpcChannelBuffer *_pRpcChannelBuffer, PRPC_MESSAGE _pRpcMessage, DWORD *_pdwStubPhase);
HRESULT STDMETHODCALLTYPE IIMContacts_Add_Proxy(IIMContacts __RPC_FAR *This, IDispatch __RPC_FAR *pContact);
void __RPC_STUB IIMContacts_Add_Stub(IRpcStubBuffer *This, IRpcChannelBuffer *_pRpcChannelBuffer, PRPC_MESSAGE _pRpcMessage, DWORD *_pdwStubPhase);
HRESULT STDMETHODCALLTYPE IIMContacts_Remove_Proxy(IIMContacts __RPC_FAR *This, IDispatch __RPC_FAR *pContact);
void __RPC_STUB IIMContacts_Remove_Stub(IRpcStubBuffer *This, IRpcChannelBuffer *_pRpcChannelBuffer, PRPC_MESSAGE _pRpcMessage, DWORD *_pdwStubPhase);
HRESULT STDMETHODCALLTYPE IIMContacts_get_Name_Proxy(IIMContacts __RPC_FAR *This, BSTR __RPC_FAR *pVal);
void __RPC_STUB IIMContacts_get_Name_Stub(IRpcStubBuffer *This, IRpcChannelBuffer *_pRpcChannelBuffer, PRPC_MESSAGE _pRpcMessage, DWORD *_pdwStubPhase);
HRESULT STDMETHODCALLTYPE IIMContacts_put_Name_Proxy(IIMContacts __RPC_FAR *This, BSTR newVal);
void __RPC_STUB IIMContacts_put_Name_Stub(IRpcStubBuffer *This, IRpcChannelBuffer *_pRpcChannelBuffer, PRPC_MESSAGE _pRpcMessage, DWORD *_pdwStubPhase);
HRESULT STDMETHODCALLTYPE IIMContacts_get_Properties_Proxy(IIMContacts __RPC_FAR *This, long __RPC_FAR *pVal);
void __RPC_STUB IIMContacts_get_Properties_Stub(IRpcStubBuffer *This, IRpcChannelBuffer *_pRpcChannelBuffer, PRPC_MESSAGE _pRpcMessage, DWORD *_pdwStubPhase);
HRESULT STDMETHODCALLTYPE IIMContacts_get_Cookie_Proxy(IIMContacts __RPC_FAR *This, long __RPC_FAR *pVal);
void __RPC_STUB IIMContacts_get_Cookie_Stub(IRpcStubBuffer *This, IRpcChannelBuffer *_pRpcChannelBuffer, PRPC_MESSAGE _pRpcMessage, DWORD *_pdwStubPhase);
HRESULT STDMETHODCALLTYPE IIMContacts_get__NewEnum_Proxy(IIMContacts __RPC_FAR *This, IUnknown __RPC_FAR *__RPC_FAR *ppVal);
void __RPC_STUB IIMContacts_get__NewEnum_Stub(IRpcStubBuffer *This, IRpcChannelBuffer *_pRpcChannelBuffer, PRPC_MESSAGE _pRpcMessage, DWORD *_pdwStubPhase);
#endif
#ifndef __IIMSession_INTERFACE_DEFINED__
#define __IIMSession_INTERFACE_DEFINED__
extern const IID IID_IIMSession;
typedef struct IIMSessionVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE __RPC_FAR *QueryInterface) (IIMSession __RPC_FAR *This, REFIID riid, void __RPC_FAR *__RPC_FAR *ppvObject);
	ULONG(STDMETHODCALLTYPE __RPC_FAR *AddRef) (IIMSession __RPC_FAR *This);
	ULONG(STDMETHODCALLTYPE __RPC_FAR *Release) (IIMSession __RPC_FAR *This);
	HRESULT(STDMETHODCALLTYPE __RPC_FAR *GetTypeInfoCount) (IIMSession __RPC_FAR *This, UINT __RPC_FAR *pctinfo);
	HRESULT(STDMETHODCALLTYPE __RPC_FAR *GetTypeInfo) (IIMSession __RPC_FAR *This, UINT iTInfo, LCID lcid, ITypeInfo __RPC_FAR *__RPC_FAR *ppTInfo);
	HRESULT(STDMETHODCALLTYPE __RPC_FAR *GetIDsOfNames) (IIMSession __RPC_FAR *This, REFIID riid, LPOLESTR __RPC_FAR *rgszNames, UINT cNames, LCID lcid, DISPID __RPC_FAR *rgDispId);
	HRESULT(STDMETHODCALLTYPE __RPC_FAR *Invoke) (IIMSession __RPC_FAR *This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS __RPC_FAR *pDispParams, VARIANT __RPC_FAR *pVarResult, EXCEPINFO __RPC_FAR *pExcepInfo, UINT __RPC_FAR *puArgErr);
	HRESULT(STDMETHODCALLTYPE __RPC_FAR *get_Members) (IIMSession __RPC_FAR *This, IDispatch __RPC_FAR *__RPC_FAR *ppMembers);
	HRESULT(STDMETHODCALLTYPE __RPC_FAR *get_State) (IIMSession __RPC_FAR *This, IM_SSTATE __RPC_FAR *psState);
	HRESULT(STDMETHODCALLTYPE __RPC_FAR *get_Service) (IIMSession __RPC_FAR *This, IDispatch __RPC_FAR *__RPC_FAR *ppService);
	HRESULT(STDMETHODCALLTYPE __RPC_FAR *get_Invitees) (IIMSession __RPC_FAR *This, IDispatch __RPC_FAR *__RPC_FAR *ppInvitees);
	HRESULT(STDMETHODCALLTYPE __RPC_FAR *LeaveSession) (IIMSession __RPC_FAR *This);
	HRESULT(STDMETHODCALLTYPE __RPC_FAR *InviteContact) (IIMSession __RPC_FAR *This, VARIANT vContact);
	HRESULT(STDMETHODCALLTYPE __RPC_FAR *SendText) (IIMSession __RPC_FAR *This, BSTR bstrMsgHeader, BSTR bstrMsgText, IM_MSG_TYPE MsgType, LONG __RPC_FAR *plCookie);
	END_INTERFACE
}  IIMSessionVtbl;
interface IIMSession
{
	CONST_VTBL struct IIMSessionVtbl __RPC_FAR *lpVtbl;
};
#ifdef COBJMACROS
#define IIMSession_QueryInterface(This,riid,ppvObject) (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)
#define IIMSession_AddRef(This) (This)->lpVtbl -> AddRef(This)
#define IIMSession_Release(This) (This)->lpVtbl -> Release(This)
#define IIMSession_GetTypeInfoCount(This,pctinfo) (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo)
#define IIMSession_GetTypeInfo(This,iTInfo,lcid,ppTInfo) (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo)
#define IIMSession_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)
#define IIMSession_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)
#define IIMSession_get_Members(This,ppMembers) (This)->lpVtbl -> get_Members(This,ppMembers)
#define IIMSession_get_State(This,psState) (This)->lpVtbl -> get_State(This,psState)
#define IIMSession_get_Service(This,ppService) (This)->lpVtbl -> get_Service(This,ppService)
#define IIMSession_get_Invitees(This,ppInvitees) (This)->lpVtbl -> get_Invitees(This,ppInvitees)
#define IIMSession_LeaveSession(This) (This)->lpVtbl -> LeaveSession(This)
#define IIMSession_InviteContact(This,vContact) (This)->lpVtbl -> InviteContact(This,vContact)
#define IIMSession_SendText(This,bstrMsgHeader,bstrMsgText,MsgType,plCookie) (This)->lpVtbl -> SendText(This,bstrMsgHeader,bstrMsgText,MsgType,plCookie)
#endif
HRESULT STDMETHODCALLTYPE IIMSession_get_Members_Proxy(IIMSession __RPC_FAR *This, IDispatch __RPC_FAR *__RPC_FAR *ppMembers);
void __RPC_STUB IIMSession_get_Members_Stub(IRpcStubBuffer *This, IRpcChannelBuffer *_pRpcChannelBuffer, PRPC_MESSAGE _pRpcMessage, DWORD *_pdwStubPhase);
HRESULT STDMETHODCALLTYPE IIMSession_get_State_Proxy(IIMSession __RPC_FAR *This, IM_SSTATE __RPC_FAR *psState);
void __RPC_STUB IIMSession_get_State_Stub(IRpcStubBuffer *This, IRpcChannelBuffer *_pRpcChannelBuffer, PRPC_MESSAGE _pRpcMessage, DWORD *_pdwStubPhase);
HRESULT STDMETHODCALLTYPE IIMSession_get_Service_Proxy(IIMSession __RPC_FAR *This, IDispatch __RPC_FAR *__RPC_FAR *ppService);
void __RPC_STUB IIMSession_get_Service_Stub(IRpcStubBuffer *This, IRpcChannelBuffer *_pRpcChannelBuffer, PRPC_MESSAGE _pRpcMessage, DWORD *_pdwStubPhase);
HRESULT STDMETHODCALLTYPE IIMSession_get_Invitees_Proxy(IIMSession __RPC_FAR *This, IDispatch __RPC_FAR *__RPC_FAR *ppInvitees);
void __RPC_STUB IIMSession_get_Invitees_Stub(IRpcStubBuffer *This, IRpcChannelBuffer *_pRpcChannelBuffer, PRPC_MESSAGE _pRpcMessage, DWORD *_pdwStubPhase);
HRESULT STDMETHODCALLTYPE IIMSession_LeaveSession_Proxy(IIMSession __RPC_FAR *This);
void __RPC_STUB IIMSession_LeaveSession_Stub(IRpcStubBuffer *This, IRpcChannelBuffer *_pRpcChannelBuffer, PRPC_MESSAGE _pRpcMessage, DWORD *_pdwStubPhase);
HRESULT STDMETHODCALLTYPE IIMSession_InviteContact_Proxy(IIMSession __RPC_FAR *This, VARIANT vContact);
void __RPC_STUB IIMSession_InviteContact_Stub(IRpcStubBuffer *This, IRpcChannelBuffer *_pRpcChannelBuffer, PRPC_MESSAGE _pRpcMessage, DWORD *_pdwStubPhase);
HRESULT STDMETHODCALLTYPE IIMSession_SendText_Proxy(IIMSession __RPC_FAR *This, BSTR bstrMsgHeader, BSTR bstrMsgText, IM_MSG_TYPE MsgType, LONG __RPC_FAR *plCookie);
void __RPC_STUB IIMSession_SendText_Stub(IRpcStubBuffer *This, IRpcChannelBuffer *_pRpcChannelBuffer, PRPC_MESSAGE _pRpcMessage, DWORD *_pdwStubPhase);
#endif
#ifndef __IIMSessions_INTERFACE_DEFINED__
#define __IIMSessions_INTERFACE_DEFINED__
extern const IID IID_IIMSessions;
typedef struct IIMSessionsVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE __RPC_FAR *QueryInterface) (IIMSessions __RPC_FAR *This, REFIID riid, void __RPC_FAR *__RPC_FAR *ppvObject);
	ULONG(STDMETHODCALLTYPE __RPC_FAR *AddRef) (IIMSessions __RPC_FAR *This);
	ULONG(STDMETHODCALLTYPE __RPC_FAR *Release) (IIMSessions __RPC_FAR *This);
	HRESULT(STDMETHODCALLTYPE __RPC_FAR *GetTypeInfoCount) (IIMSessions __RPC_FAR *This, UINT __RPC_FAR *pctinfo);
	HRESULT(STDMETHODCALLTYPE __RPC_FAR *GetTypeInfo) (IIMSessions __RPC_FAR *This, UINT iTInfo, LCID lcid, ITypeInfo __RPC_FAR *__RPC_FAR *ppTInfo);
	HRESULT(STDMETHODCALLTYPE __RPC_FAR *GetIDsOfNames) (IIMSessions __RPC_FAR *This, REFIID riid, LPOLESTR __RPC_FAR *rgszNames, UINT cNames, LCID lcid, DISPID __RPC_FAR *rgDispId);
	HRESULT(STDMETHODCALLTYPE __RPC_FAR *Invoke) (IIMSessions __RPC_FAR *This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS __RPC_FAR *pDispParams, VARIANT __RPC_FAR *pVarResult, EXCEPINFO __RPC_FAR *pExcepInfo, UINT __RPC_FAR *puArgErr);
	HRESULT(STDMETHODCALLTYPE __RPC_FAR *get_Count) (IIMSessions __RPC_FAR *This, long __RPC_FAR *pcSessions);
	HRESULT(STDMETHODCALLTYPE __RPC_FAR *Item) (IIMSessions __RPC_FAR *This, long Index, IDispatch __RPC_FAR *__RPC_FAR *ppIMSession);
	HRESULT(STDMETHODCALLTYPE __RPC_FAR *get__NewEnum) (IIMSessions __RPC_FAR *This, IUnknown __RPC_FAR *__RPC_FAR *ppUnknown);
	END_INTERFACE
}  IIMSessionsVtbl;
interface IIMSessions
{
	CONST_VTBL struct IIMSessionsVtbl __RPC_FAR *lpVtbl;
};
#ifdef COBJMACROS
#define IIMSessions_QueryInterface(This,riid,ppvObject) (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)
#define IIMSessions_AddRef(This) (This)->lpVtbl -> AddRef(This)
#define IIMSessions_Release(This) (This)->lpVtbl -> Release(This)
#define IIMSessions_GetTypeInfoCount(This,pctinfo) (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo)
#define IIMSessions_GetTypeInfo(This,iTInfo,lcid,ppTInfo) (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo)
#define IIMSessions_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)
#define IIMSessions_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)
#define IIMSessions_get_Count(This,pcSessions) (This)->lpVtbl -> get_Count(This,pcSessions)
#define IIMSessions_Item(This,Index,ppIMSession) (This)->lpVtbl -> Item(This,Index,ppIMSession)
#define IIMSessions_get__NewEnum(This,ppUnknown) (This)->lpVtbl -> get__NewEnum(This,ppUnknown)
#endif
HRESULT STDMETHODCALLTYPE IIMSessions_get_Count_Proxy(IIMSessions __RPC_FAR *This, long __RPC_FAR *pcSessions);
void __RPC_STUB IIMSessions_get_Count_Stub(IRpcStubBuffer *This, IRpcChannelBuffer *_pRpcChannelBuffer, PRPC_MESSAGE _pRpcMessage, DWORD *_pdwStubPhase);
HRESULT STDMETHODCALLTYPE IIMSessions_Item_Proxy(IIMSessions __RPC_FAR *This, long Index, IDispatch __RPC_FAR *__RPC_FAR *ppIMSession);
void __RPC_STUB IIMSessions_Item_Stub(IRpcStubBuffer *This, IRpcChannelBuffer *_pRpcChannelBuffer, PRPC_MESSAGE _pRpcMessage, DWORD *_pdwStubPhase);
HRESULT STDMETHODCALLTYPE IIMSessions_get__NewEnum_Proxy(IIMSessions __RPC_FAR *This, IUnknown __RPC_FAR *__RPC_FAR *ppUnknown);
void __RPC_STUB IIMSessions_get__NewEnum_Stub(IRpcStubBuffer *This, IRpcChannelBuffer *_pRpcChannelBuffer, PRPC_MESSAGE _pRpcMessage, DWORD *_pdwStubPhase);
#endif
extern const CLSID CLSID_MSIMHost;
extern const CLSID CLSID_MSIMService;
extern const CLSID CLSID_MSIMWindow;
extern const CLSID CLSID_MSIMHostOption;
extern const CLSID CLSID_MSIMHostProfiles;
#endif
#endif

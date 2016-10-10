/*+@@file@@----------------------------------------------------------------*//*!
 \file		rendezvoussession.h
 \par Description 
            Extension and update of headers for PellesC compiler suite.
 \par Project: 
            PellesC Headers extension
 \date		Created  on Fri Sep 16 19:44:43 2016
 \date		Modified on Fri Sep 16 19:44:43 2016
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
#ifndef __rendezvoussession_h__
#define __rendezvoussession_h__
#if __POCC__ >= 500
#pragma once
#endif
#ifndef __IRendezvousSession_FWD_DEFINED__
#define __IRendezvousSession_FWD_DEFINED__
typedef interface IRendezvousSession IRendezvousSession;
#endif
#ifndef __DRendezvousSessionEvents_FWD_DEFINED__
#define __DRendezvousSessionEvents_FWD_DEFINED__
typedef interface DRendezvousSessionEvents DRendezvousSessionEvents;
#endif
#ifndef __IRendezvousApplication_FWD_DEFINED__
#define __IRendezvousApplication_FWD_DEFINED__
typedef interface IRendezvousApplication IRendezvousApplication;
#endif
#ifndef __RendezvousApplication_FWD_DEFINED__
#define __RendezvousApplication_FWD_DEFINED__
typedef struct RendezvousApplication RendezvousApplication;
#endif
#include "oaidl.h"
#include "ocidl.h"
#define	DISPID_EVENT_ON_STATE_CHANGED	( 5 )
#define	DISPID_EVENT_ON_TERMINATION	( 6 )
#define	DISPID_EVENT_ON_CONTEXT_DATA	( 7 )
#define	DISPID_EVENT_ON_SEND_ERROR	( 8 )
extern RPC_IF_HANDLE __MIDL_itf_rendezvoussession_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_rendezvoussession_0000_0000_v0_0_s_ifspec;
#ifndef __RendezvousSessionLib_LIBRARY_DEFINED__
#define __RendezvousSessionLib_LIBRARY_DEFINED__
typedef enum __MIDL___MIDL_itf_rendezvoussession_0000_0000_0001
{
	RSS_UNKNOWN = 0,
	RSS_READY = (RSS_UNKNOWN + 1),
	RSS_INVITATION = (RSS_READY + 1),
	RSS_ACCEPTED = (RSS_INVITATION + 1),
	RSS_CONNECTED = (RSS_ACCEPTED + 1),
	RSS_CANCELLED = (RSS_CONNECTED + 1),
	RSS_DECLINED = (RSS_CANCELLED + 1),
	RSS_TERMINATED = (RSS_DECLINED + 1)
} RENDEZVOUS_SESSION_STATE;
typedef enum __MIDL___MIDL_itf_rendezvoussession_0000_0000_0002
{
	RSF_NONE = 0,
	RSF_INVITER = 0x1,
	RSF_INVITEE = 0x2,
	RSF_ORIGINAL_INVITER = 0x4,
	RSF_REMOTE_LEGACYSESSION = 0x8,
	RSF_REMOTE_WIN7SESSION = 0x10
} RENDEZVOUS_SESSION_FLAGS;
extern const IID LIBID_RendezvousSessionLib;
#ifndef __IRendezvousSession_INTERFACE_DEFINED__
#define __IRendezvousSession_INTERFACE_DEFINED__
extern const IID IID_IRendezvousSession;
typedef struct IRendezvousSessionVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IRendezvousSession * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IRendezvousSession * This);
	ULONG(STDMETHODCALLTYPE * Release) (IRendezvousSession * This);
	HRESULT(STDMETHODCALLTYPE * get_State) (IRendezvousSession * This, RENDEZVOUS_SESSION_STATE * pSessionState);
	HRESULT(STDMETHODCALLTYPE * get_RemoteUser) (IRendezvousSession * This, BSTR * bstrUserName);
	HRESULT(STDMETHODCALLTYPE * get_Flags) (IRendezvousSession * This, LONG * pFlags);
	HRESULT(STDMETHODCALLTYPE * SendContextData) (IRendezvousSession * This, BSTR bstrData);
	HRESULT(STDMETHODCALLTYPE * Terminate) (IRendezvousSession * This, HRESULT hr, BSTR bstrAppData);
	END_INTERFACE
}  IRendezvousSessionVtbl;
interface IRendezvousSession
{
	CONST_VTBL struct IRendezvousSessionVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IRendezvousSession_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IRendezvousSession_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IRendezvousSession_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IRendezvousSession_get_State(This,pSessionState) ( (This)->lpVtbl -> get_State(This,pSessionState) )
#define IRendezvousSession_get_RemoteUser(This,bstrUserName) ( (This)->lpVtbl -> get_RemoteUser(This,bstrUserName) )
#define IRendezvousSession_get_Flags(This,pFlags) ( (This)->lpVtbl -> get_Flags(This,pFlags) )
#define IRendezvousSession_SendContextData(This,bstrData) ( (This)->lpVtbl -> SendContextData(This,bstrData) )
#define IRendezvousSession_Terminate(This,hr,bstrAppData) ( (This)->lpVtbl -> Terminate(This,hr,bstrAppData) )
#endif
#endif
#ifndef __DRendezvousSessionEvents_DISPINTERFACE_DEFINED__
#define __DRendezvousSessionEvents_DISPINTERFACE_DEFINED__
extern const IID DIID_DRendezvousSessionEvents;
typedef struct DRendezvousSessionEventsVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (DRendezvousSessionEvents * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (DRendezvousSessionEvents * This);
	ULONG(STDMETHODCALLTYPE * Release) (DRendezvousSessionEvents * This);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfoCount) (DRendezvousSessionEvents * This, UINT * pctinfo);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfo) (DRendezvousSessionEvents * This, UINT iTInfo, LCID lcid, ITypeInfo ** ppTInfo);
	HRESULT(STDMETHODCALLTYPE * GetIDsOfNames) (DRendezvousSessionEvents * This, REFIID riid, LPOLESTR * rgszNames, UINT cNames, LCID lcid, DISPID * rgDispId);
	HRESULT(STDMETHODCALLTYPE * Invoke) (DRendezvousSessionEvents * This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS * pDispParams, VARIANT * pVarResult, EXCEPINFO * pExcepInfo, UINT * puArgErr);
	END_INTERFACE
}  DRendezvousSessionEventsVtbl;
interface DRendezvousSessionEvents
{
	CONST_VTBL struct DRendezvousSessionEventsVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define DRendezvousSessionEvents_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define DRendezvousSessionEvents_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define DRendezvousSessionEvents_Release(This) ( (This)->lpVtbl -> Release(This) )
#define DRendezvousSessionEvents_GetTypeInfoCount(This,pctinfo) ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define DRendezvousSessionEvents_GetTypeInfo(This,iTInfo,lcid,ppTInfo) ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define DRendezvousSessionEvents_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define DRendezvousSessionEvents_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#endif
#endif
#ifndef __IRendezvousApplication_INTERFACE_DEFINED__
#define __IRendezvousApplication_INTERFACE_DEFINED__
extern const IID IID_IRendezvousApplication;
typedef struct IRendezvousApplicationVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IRendezvousApplication * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IRendezvousApplication * This);
	ULONG(STDMETHODCALLTYPE * Release) (IRendezvousApplication * This);
	HRESULT(STDMETHODCALLTYPE * SetRendezvousSession) (IRendezvousApplication * This, IUnknown * pRendezvousSession);
	END_INTERFACE
}  IRendezvousApplicationVtbl;
interface IRendezvousApplication
{
	CONST_VTBL struct IRendezvousApplicationVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IRendezvousApplication_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IRendezvousApplication_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IRendezvousApplication_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IRendezvousApplication_SetRendezvousSession(This,pRendezvousSession) ( (This)->lpVtbl -> SetRendezvousSession(This,pRendezvousSession) )
#endif
#endif
extern const CLSID CLSID_RendezvousApplication;
#endif
#endif

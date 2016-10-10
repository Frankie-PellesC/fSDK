/*+@@file@@----------------------------------------------------------------*//*!
 \file		tsuserex.h
 \par Description 
            Extension and update of headers for PellesC compiler suite.
 \par Project: 
            PellesC Headers extension
 \date		Created  on Sat Sep 17 13:05:59 2016
 \date		Modified on Sat Sep 17 13:05:59 2016
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
#ifndef __tsuserex_h__
#define __tsuserex_h__
#if __POCC__ >= 500
#pragma once
#endif
#ifndef __TSUserExInterfaces_FWD_DEFINED__
#define __TSUserExInterfaces_FWD_DEFINED__
typedef struct TSUserExInterfaces TSUserExInterfaces;
#endif
#ifndef __IADsTSUserEx_FWD_DEFINED__
#define __IADsTSUserEx_FWD_DEFINED__
typedef interface IADsTSUserEx IADsTSUserEx;
#endif
#ifndef __ADsTSUserEx_FWD_DEFINED__
#define __ADsTSUserEx_FWD_DEFINED__
typedef struct ADsTSUserEx ADsTSUserEx;
#endif
#include "oaidl.h"
#include "ocidl.h"
#include "mmc.h"
#ifndef __TSUSEREXLib_LIBRARY_DEFINED__
#define __TSUSEREXLib_LIBRARY_DEFINED__
extern const IID LIBID_TSUSEREXLib;
extern const CLSID CLSID_TSUserExInterfaces;
#ifndef __IADsTSUserEx_INTERFACE_DEFINED__
#define __IADsTSUserEx_INTERFACE_DEFINED__
extern const IID IID_IADsTSUserEx;
typedef struct IADsTSUserExVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IADsTSUserEx * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IADsTSUserEx * This);
	ULONG(STDMETHODCALLTYPE * Release) (IADsTSUserEx * This);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfoCount) (IADsTSUserEx * This, UINT * pctinfo);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfo) (IADsTSUserEx * This, UINT iTInfo, LCID lcid, ITypeInfo ** ppTInfo);
	HRESULT(STDMETHODCALLTYPE * GetIDsOfNames) (IADsTSUserEx * This, REFIID riid, LPOLESTR * rgszNames, UINT cNames, LCID lcid, DISPID * rgDispId);
	HRESULT(STDMETHODCALLTYPE * Invoke) (IADsTSUserEx * This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS * pDispParams, VARIANT * pVarResult, EXCEPINFO * pExcepInfo, UINT * puArgErr);
	HRESULT(STDMETHODCALLTYPE * get_TerminalServicesProfilePath) (IADsTSUserEx * This, BSTR * pVal);
	HRESULT(STDMETHODCALLTYPE * put_TerminalServicesProfilePath) (IADsTSUserEx * This, BSTR pNewVal);
	HRESULT(STDMETHODCALLTYPE * get_TerminalServicesHomeDirectory) (IADsTSUserEx * This, BSTR * pVal);
	HRESULT(STDMETHODCALLTYPE * put_TerminalServicesHomeDirectory) (IADsTSUserEx * This, BSTR pNewVal);
	HRESULT(STDMETHODCALLTYPE * get_TerminalServicesHomeDrive) (IADsTSUserEx * This, BSTR * pVal);
	HRESULT(STDMETHODCALLTYPE * put_TerminalServicesHomeDrive) (IADsTSUserEx * This, BSTR pNewVal);
	HRESULT(STDMETHODCALLTYPE * get_AllowLogon) (IADsTSUserEx * This, LONG * pVal);
	HRESULT(STDMETHODCALLTYPE * put_AllowLogon) (IADsTSUserEx * This, LONG NewVal);
	HRESULT(STDMETHODCALLTYPE * get_EnableRemoteControl) (IADsTSUserEx * This, LONG * pVal);
	HRESULT(STDMETHODCALLTYPE * put_EnableRemoteControl) (IADsTSUserEx * This, LONG NewVal);
	HRESULT(STDMETHODCALLTYPE * get_MaxDisconnectionTime) (IADsTSUserEx * This, LONG * pVal);
	HRESULT(STDMETHODCALLTYPE * put_MaxDisconnectionTime) (IADsTSUserEx * This, LONG NewVal);
	HRESULT(STDMETHODCALLTYPE * get_MaxConnectionTime) (IADsTSUserEx * This, LONG * pVal);
	HRESULT(STDMETHODCALLTYPE * put_MaxConnectionTime) (IADsTSUserEx * This, LONG NewVal);
	HRESULT(STDMETHODCALLTYPE * get_MaxIdleTime) (IADsTSUserEx * This, LONG * pVal);
	HRESULT(STDMETHODCALLTYPE * put_MaxIdleTime) (IADsTSUserEx * This, LONG NewVal);
	HRESULT(STDMETHODCALLTYPE * get_ReconnectionAction) (IADsTSUserEx * This, LONG * pNewVal);
	HRESULT(STDMETHODCALLTYPE * put_ReconnectionAction) (IADsTSUserEx * This, LONG NewVal);
	HRESULT(STDMETHODCALLTYPE * get_BrokenConnectionAction) (IADsTSUserEx * This, LONG * pNewVal);
	HRESULT(STDMETHODCALLTYPE * put_BrokenConnectionAction) (IADsTSUserEx * This, LONG NewVal);
	HRESULT(STDMETHODCALLTYPE * get_ConnectClientDrivesAtLogon) (IADsTSUserEx * This, LONG * pNewVal);
	HRESULT(STDMETHODCALLTYPE * put_ConnectClientDrivesAtLogon) (IADsTSUserEx * This, LONG NewVal);
	HRESULT(STDMETHODCALLTYPE * get_ConnectClientPrintersAtLogon) (IADsTSUserEx * This, LONG * pVal);
	HRESULT(STDMETHODCALLTYPE * put_ConnectClientPrintersAtLogon) (IADsTSUserEx * This, LONG NewVal);
	HRESULT(STDMETHODCALLTYPE * get_DefaultToMainPrinter) (IADsTSUserEx * This, LONG * pVal);
	HRESULT(STDMETHODCALLTYPE * put_DefaultToMainPrinter) (IADsTSUserEx * This, LONG NewVal);
	HRESULT(STDMETHODCALLTYPE * get_TerminalServicesWorkDirectory) (IADsTSUserEx * This, BSTR * pVal);
	HRESULT(STDMETHODCALLTYPE * put_TerminalServicesWorkDirectory) (IADsTSUserEx * This, BSTR pNewVal);
	HRESULT(STDMETHODCALLTYPE * get_TerminalServicesInitialProgram) (IADsTSUserEx * This, BSTR * pVal);
	HRESULT(STDMETHODCALLTYPE * put_TerminalServicesInitialProgram) (IADsTSUserEx * This, BSTR pNewVal);
	END_INTERFACE
}  IADsTSUserExVtbl;
interface IADsTSUserEx
{
	CONST_VTBL struct IADsTSUserExVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IADsTSUserEx_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IADsTSUserEx_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IADsTSUserEx_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IADsTSUserEx_GetTypeInfoCount(This,pctinfo) ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define IADsTSUserEx_GetTypeInfo(This,iTInfo,lcid,ppTInfo) ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define IADsTSUserEx_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define IADsTSUserEx_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define IADsTSUserEx_get_TerminalServicesProfilePath(This,pVal) ( (This)->lpVtbl -> get_TerminalServicesProfilePath(This,pVal) )
#define IADsTSUserEx_put_TerminalServicesProfilePath(This,pNewVal) ( (This)->lpVtbl -> put_TerminalServicesProfilePath(This,pNewVal) )
#define IADsTSUserEx_get_TerminalServicesHomeDirectory(This,pVal) ( (This)->lpVtbl -> get_TerminalServicesHomeDirectory(This,pVal) )
#define IADsTSUserEx_put_TerminalServicesHomeDirectory(This,pNewVal) ( (This)->lpVtbl -> put_TerminalServicesHomeDirectory(This,pNewVal) )
#define IADsTSUserEx_get_TerminalServicesHomeDrive(This,pVal) ( (This)->lpVtbl -> get_TerminalServicesHomeDrive(This,pVal) )
#define IADsTSUserEx_put_TerminalServicesHomeDrive(This,pNewVal) ( (This)->lpVtbl -> put_TerminalServicesHomeDrive(This,pNewVal) )
#define IADsTSUserEx_get_AllowLogon(This,pVal) ( (This)->lpVtbl -> get_AllowLogon(This,pVal) )
#define IADsTSUserEx_put_AllowLogon(This,NewVal) ( (This)->lpVtbl -> put_AllowLogon(This,NewVal) )
#define IADsTSUserEx_get_EnableRemoteControl(This,pVal) ( (This)->lpVtbl -> get_EnableRemoteControl(This,pVal) )
#define IADsTSUserEx_put_EnableRemoteControl(This,NewVal) ( (This)->lpVtbl -> put_EnableRemoteControl(This,NewVal) )
#define IADsTSUserEx_get_MaxDisconnectionTime(This,pVal) ( (This)->lpVtbl -> get_MaxDisconnectionTime(This,pVal) )
#define IADsTSUserEx_put_MaxDisconnectionTime(This,NewVal) ( (This)->lpVtbl -> put_MaxDisconnectionTime(This,NewVal) )
#define IADsTSUserEx_get_MaxConnectionTime(This,pVal) ( (This)->lpVtbl -> get_MaxConnectionTime(This,pVal) )
#define IADsTSUserEx_put_MaxConnectionTime(This,NewVal) ( (This)->lpVtbl -> put_MaxConnectionTime(This,NewVal) )
#define IADsTSUserEx_get_MaxIdleTime(This,pVal) ( (This)->lpVtbl -> get_MaxIdleTime(This,pVal) )
#define IADsTSUserEx_put_MaxIdleTime(This,NewVal) ( (This)->lpVtbl -> put_MaxIdleTime(This,NewVal) )
#define IADsTSUserEx_get_ReconnectionAction(This,pNewVal) ( (This)->lpVtbl -> get_ReconnectionAction(This,pNewVal) )
#define IADsTSUserEx_put_ReconnectionAction(This,NewVal) ( (This)->lpVtbl -> put_ReconnectionAction(This,NewVal) )
#define IADsTSUserEx_get_BrokenConnectionAction(This,pNewVal) ( (This)->lpVtbl -> get_BrokenConnectionAction(This,pNewVal) )
#define IADsTSUserEx_put_BrokenConnectionAction(This,NewVal) ( (This)->lpVtbl -> put_BrokenConnectionAction(This,NewVal) )
#define IADsTSUserEx_get_ConnectClientDrivesAtLogon(This,pNewVal) ( (This)->lpVtbl -> get_ConnectClientDrivesAtLogon(This,pNewVal) )
#define IADsTSUserEx_put_ConnectClientDrivesAtLogon(This,NewVal) ( (This)->lpVtbl -> put_ConnectClientDrivesAtLogon(This,NewVal) )
#define IADsTSUserEx_get_ConnectClientPrintersAtLogon(This,pVal) ( (This)->lpVtbl -> get_ConnectClientPrintersAtLogon(This,pVal) )
#define IADsTSUserEx_put_ConnectClientPrintersAtLogon(This,NewVal) ( (This)->lpVtbl -> put_ConnectClientPrintersAtLogon(This,NewVal) )
#define IADsTSUserEx_get_DefaultToMainPrinter(This,pVal) ( (This)->lpVtbl -> get_DefaultToMainPrinter(This,pVal) )
#define IADsTSUserEx_put_DefaultToMainPrinter(This,NewVal) ( (This)->lpVtbl -> put_DefaultToMainPrinter(This,NewVal) )
#define IADsTSUserEx_get_TerminalServicesWorkDirectory(This,pVal) ( (This)->lpVtbl -> get_TerminalServicesWorkDirectory(This,pVal) )
#define IADsTSUserEx_put_TerminalServicesWorkDirectory(This,pNewVal) ( (This)->lpVtbl -> put_TerminalServicesWorkDirectory(This,pNewVal) )
#define IADsTSUserEx_get_TerminalServicesInitialProgram(This,pVal) ( (This)->lpVtbl -> get_TerminalServicesInitialProgram(This,pVal) )
#define IADsTSUserEx_put_TerminalServicesInitialProgram(This,pNewVal) ( (This)->lpVtbl -> put_TerminalServicesInitialProgram(This,pNewVal) )
#endif
#endif
extern const CLSID CLSID_ADsTSUserEx;
#endif
#endif

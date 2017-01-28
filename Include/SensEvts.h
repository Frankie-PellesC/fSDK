/*+@@file@@----------------------------------------------------------------*//*!
 \file		SensEvts.h
 \par Description 
            Extension and update of headers for PellesC compiler suite.
 \par Project: 
            PellesC Headers extension
 \date		Created  on Fri Sep 16 23:16:36 2016
 \date		Modified on Fri Sep 16 23:16:36 2016
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
#ifndef __sensevts_h__
#define __sensevts_h__
#if __POCC__ >= 500
#pragma once
#endif
#ifndef __ISensNetwork_FWD_DEFINED__
#define __ISensNetwork_FWD_DEFINED__
typedef interface ISensNetwork ISensNetwork;
#endif
#ifndef __ISensOnNow_FWD_DEFINED__
#define __ISensOnNow_FWD_DEFINED__
typedef interface ISensOnNow ISensOnNow;
#endif
#ifndef __ISensLogon_FWD_DEFINED__
#define __ISensLogon_FWD_DEFINED__
typedef interface ISensLogon ISensLogon;
#endif
#ifndef __ISensLogon2_FWD_DEFINED__
#define __ISensLogon2_FWD_DEFINED__
typedef interface ISensLogon2 ISensLogon2;
#endif
#ifndef __SENS_FWD_DEFINED__
#define __SENS_FWD_DEFINED__
typedef struct SENS SENS;
#endif
#include <wtypes.h>
#ifndef __SensEvents_LIBRARY_DEFINED__
#define __SensEvents_LIBRARY_DEFINED__
typedef DECLSPEC_UUID("d597fad1-5b9f-11d1-8dd2-00aa004abd5e")
struct SENS_QOCINFO
{
	DWORD dwSize;
	DWORD dwFlags;
	DWORD dwOutSpeed;
	DWORD dwInSpeed;
} SENS_QOCINFO;
typedef SENS_QOCINFO *LPSENS_QOCINFO;
extern const IID LIBID_SensEvents;
#ifndef __ISensNetwork_INTERFACE_DEFINED__
#define __ISensNetwork_INTERFACE_DEFINED__
extern const IID IID_ISensNetwork;
typedef struct ISensNetworkVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE *QueryInterface) (ISensNetwork *This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE *AddRef) (ISensNetwork *This);
	ULONG(STDMETHODCALLTYPE *Release) (ISensNetwork *This);
	HRESULT(STDMETHODCALLTYPE *GetTypeInfoCount) (ISensNetwork *This, UINT *pctinfo);
	HRESULT(STDMETHODCALLTYPE *GetTypeInfo) (ISensNetwork *This, UINT iTInfo, LCID lcid, ITypeInfo **ppTInfo);
	HRESULT(STDMETHODCALLTYPE *GetIDsOfNames) (ISensNetwork *This, REFIID riid, LPOLESTR *rgszNames, UINT cNames, LCID lcid, DISPID *rgDispId);
	HRESULT(STDMETHODCALLTYPE *Invoke) (ISensNetwork *This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS *pDispParams, VARIANT *pVarResult, EXCEPINFO *pExcepInfo, UINT *puArgErr);
	HRESULT(STDMETHODCALLTYPE *ConnectionMade) (ISensNetwork *This, BSTR bstrConnection, ULONG ulType, LPSENS_QOCINFO lpQOCInfo);
	HRESULT(STDMETHODCALLTYPE *ConnectionMadeNoQOCInfo) (ISensNetwork *This, BSTR bstrConnection, ULONG ulType);
	HRESULT(STDMETHODCALLTYPE *ConnectionLost) (ISensNetwork *This, BSTR bstrConnection, ULONG ulType);
	HRESULT(STDMETHODCALLTYPE *DestinationReachable) (ISensNetwork *This, BSTR bstrDestination, BSTR bstrConnection, ULONG ulType, LPSENS_QOCINFO lpQOCInfo);
	HRESULT(STDMETHODCALLTYPE *DestinationReachableNoQOCInfo) (ISensNetwork *This, BSTR bstrDestination, BSTR bstrConnection, ULONG ulType);
	END_INTERFACE
}  ISensNetworkVtbl;
interface ISensNetwork
{
	CONST_VTBL struct ISensNetworkVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define ISensNetwork_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define ISensNetwork_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define ISensNetwork_Release(This) ( (This)->lpVtbl -> Release(This) )
#define ISensNetwork_GetTypeInfoCount(This,pctinfo) ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define ISensNetwork_GetTypeInfo(This,iTInfo,lcid,ppTInfo) ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define ISensNetwork_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define ISensNetwork_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define ISensNetwork_ConnectionMade(This,bstrConnection,ulType,lpQOCInfo) ( (This)->lpVtbl -> ConnectionMade(This,bstrConnection,ulType,lpQOCInfo) )
#define ISensNetwork_ConnectionMadeNoQOCInfo(This,bstrConnection,ulType) ( (This)->lpVtbl -> ConnectionMadeNoQOCInfo(This,bstrConnection,ulType) )
#define ISensNetwork_ConnectionLost(This,bstrConnection,ulType) ( (This)->lpVtbl -> ConnectionLost(This,bstrConnection,ulType) )
#define ISensNetwork_DestinationReachable(This,bstrDestination,bstrConnection,ulType,lpQOCInfo) ( (This)->lpVtbl -> DestinationReachable(This,bstrDestination,bstrConnection,ulType,lpQOCInfo) )
#define ISensNetwork_DestinationReachableNoQOCInfo(This,bstrDestination,bstrConnection,ulType) ( (This)->lpVtbl -> DestinationReachableNoQOCInfo(This,bstrDestination,bstrConnection,ulType) )
#endif
#endif
#ifndef __ISensOnNow_INTERFACE_DEFINED__
#define __ISensOnNow_INTERFACE_DEFINED__
extern const IID IID_ISensOnNow;
typedef struct ISensOnNowVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE *QueryInterface) (ISensOnNow *This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE *AddRef) (ISensOnNow *This);
	ULONG(STDMETHODCALLTYPE *Release) (ISensOnNow *This);
	HRESULT(STDMETHODCALLTYPE *GetTypeInfoCount) (ISensOnNow *This, UINT *pctinfo);
	HRESULT(STDMETHODCALLTYPE *GetTypeInfo) (ISensOnNow *This, UINT iTInfo, LCID lcid, ITypeInfo **ppTInfo);
	HRESULT(STDMETHODCALLTYPE *GetIDsOfNames) (ISensOnNow *This, REFIID riid, LPOLESTR *rgszNames, UINT cNames, LCID lcid, DISPID *rgDispId);
	HRESULT(STDMETHODCALLTYPE *Invoke) (ISensOnNow *This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS *pDispParams, VARIANT *pVarResult, EXCEPINFO *pExcepInfo, UINT *puArgErr);
	HRESULT(STDMETHODCALLTYPE *OnACPower) (ISensOnNow *This);
	HRESULT(STDMETHODCALLTYPE *OnBatteryPower) (ISensOnNow *This, DWORD dwBatteryLifePercent);
	HRESULT(STDMETHODCALLTYPE *BatteryLow) (ISensOnNow *This, DWORD dwBatteryLifePercent);
	END_INTERFACE
}  ISensOnNowVtbl;
interface ISensOnNow
{
	CONST_VTBL struct ISensOnNowVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define ISensOnNow_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define ISensOnNow_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define ISensOnNow_Release(This) ( (This)->lpVtbl -> Release(This) )
#define ISensOnNow_GetTypeInfoCount(This,pctinfo) ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define ISensOnNow_GetTypeInfo(This,iTInfo,lcid,ppTInfo) ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define ISensOnNow_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define ISensOnNow_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define ISensOnNow_OnACPower(This) ( (This)->lpVtbl -> OnACPower(This) )
#define ISensOnNow_OnBatteryPower(This,dwBatteryLifePercent) ( (This)->lpVtbl -> OnBatteryPower(This,dwBatteryLifePercent) )
#define ISensOnNow_BatteryLow(This,dwBatteryLifePercent) ( (This)->lpVtbl -> BatteryLow(This,dwBatteryLifePercent) )
#endif
#endif
#ifndef __ISensLogon_INTERFACE_DEFINED__
#define __ISensLogon_INTERFACE_DEFINED__
extern const IID IID_ISensLogon;
typedef struct ISensLogonVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE *QueryInterface) (ISensLogon *This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE *AddRef) (ISensLogon *This);
	ULONG(STDMETHODCALLTYPE *Release) (ISensLogon *This);
	HRESULT(STDMETHODCALLTYPE *GetTypeInfoCount) (ISensLogon *This, UINT *pctinfo);
	HRESULT(STDMETHODCALLTYPE *GetTypeInfo) (ISensLogon *This, UINT iTInfo, LCID lcid, ITypeInfo **ppTInfo);
	HRESULT(STDMETHODCALLTYPE *GetIDsOfNames) (ISensLogon *This, REFIID riid, LPOLESTR *rgszNames, UINT cNames, LCID lcid, DISPID *rgDispId);
	HRESULT(STDMETHODCALLTYPE *Invoke) (ISensLogon *This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS *pDispParams, VARIANT *pVarResult, EXCEPINFO *pExcepInfo, UINT *puArgErr);
	HRESULT(STDMETHODCALLTYPE *Logon) (ISensLogon *This, BSTR bstrUserName);
	HRESULT(STDMETHODCALLTYPE *Logoff) (ISensLogon *This, BSTR bstrUserName);
	HRESULT(STDMETHODCALLTYPE *StartShell) (ISensLogon *This, BSTR bstrUserName);
	HRESULT(STDMETHODCALLTYPE *DisplayLock) (ISensLogon *This, BSTR bstrUserName);
	HRESULT(STDMETHODCALLTYPE *DisplayUnlock) (ISensLogon *This, BSTR bstrUserName);
	HRESULT(STDMETHODCALLTYPE *StartScreenSaver) (ISensLogon *This, BSTR bstrUserName);
	HRESULT(STDMETHODCALLTYPE *StopScreenSaver) (ISensLogon *This, BSTR bstrUserName);
	END_INTERFACE
}  ISensLogonVtbl;
interface ISensLogon
{
	CONST_VTBL struct ISensLogonVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define ISensLogon_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define ISensLogon_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define ISensLogon_Release(This) ( (This)->lpVtbl -> Release(This) )
#define ISensLogon_GetTypeInfoCount(This,pctinfo) ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define ISensLogon_GetTypeInfo(This,iTInfo,lcid,ppTInfo) ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define ISensLogon_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define ISensLogon_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define ISensLogon_Logon(This,bstrUserName) ( (This)->lpVtbl -> Logon(This,bstrUserName) )
#define ISensLogon_Logoff(This,bstrUserName) ( (This)->lpVtbl -> Logoff(This,bstrUserName) )
#define ISensLogon_StartShell(This,bstrUserName) ( (This)->lpVtbl -> StartShell(This,bstrUserName) )
#define ISensLogon_DisplayLock(This,bstrUserName) ( (This)->lpVtbl -> DisplayLock(This,bstrUserName) )
#define ISensLogon_DisplayUnlock(This,bstrUserName) ( (This)->lpVtbl -> DisplayUnlock(This,bstrUserName) )
#define ISensLogon_StartScreenSaver(This,bstrUserName) ( (This)->lpVtbl -> StartScreenSaver(This,bstrUserName) )
#define ISensLogon_StopScreenSaver(This,bstrUserName) ( (This)->lpVtbl -> StopScreenSaver(This,bstrUserName) )
#endif
#endif
#ifndef __ISensLogon2_INTERFACE_DEFINED__
#define __ISensLogon2_INTERFACE_DEFINED__
extern const IID IID_ISensLogon2;
typedef struct ISensLogon2Vtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE *QueryInterface) (ISensLogon2 *This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE *AddRef) (ISensLogon2 *This);
	ULONG(STDMETHODCALLTYPE *Release) (ISensLogon2 *This);
	HRESULT(STDMETHODCALLTYPE *GetTypeInfoCount) (ISensLogon2 *This, UINT *pctinfo);
	HRESULT(STDMETHODCALLTYPE *GetTypeInfo) (ISensLogon2 *This, UINT iTInfo, LCID lcid, ITypeInfo **ppTInfo);
	HRESULT(STDMETHODCALLTYPE *GetIDsOfNames) (ISensLogon2 *This, REFIID riid, LPOLESTR *rgszNames, UINT cNames, LCID lcid, DISPID *rgDispId);
	HRESULT(STDMETHODCALLTYPE *Invoke) (ISensLogon2 *This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS *pDispParams, VARIANT *pVarResult, EXCEPINFO *pExcepInfo, UINT *puArgErr);
	HRESULT(STDMETHODCALLTYPE *Logon) (ISensLogon2 *This, BSTR bstrUserName, DWORD dwSessionId);
	HRESULT(STDMETHODCALLTYPE *Logoff) (ISensLogon2 *This, BSTR bstrUserName, DWORD dwSessionId);
	HRESULT(STDMETHODCALLTYPE *SessionDisconnect) (ISensLogon2 *This, BSTR bstrUserName, DWORD dwSessionId);
	HRESULT(STDMETHODCALLTYPE *SessionReconnect) (ISensLogon2 *This, BSTR bstrUserName, DWORD dwSessionId);
	HRESULT(STDMETHODCALLTYPE *PostShell) (ISensLogon2 *This, BSTR bstrUserName, DWORD dwSessionId);
	END_INTERFACE
}  ISensLogon2Vtbl;
interface ISensLogon2
{
	CONST_VTBL struct ISensLogon2Vtbl *lpVtbl;
};
#ifdef COBJMACROS
#define ISensLogon2_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define ISensLogon2_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define ISensLogon2_Release(This) ( (This)->lpVtbl -> Release(This) )
#define ISensLogon2_GetTypeInfoCount(This,pctinfo) ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define ISensLogon2_GetTypeInfo(This,iTInfo,lcid,ppTInfo) ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define ISensLogon2_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define ISensLogon2_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define ISensLogon2_Logon(This,bstrUserName,dwSessionId) ( (This)->lpVtbl -> Logon(This,bstrUserName,dwSessionId) )
#define ISensLogon2_Logoff(This,bstrUserName,dwSessionId) ( (This)->lpVtbl -> Logoff(This,bstrUserName,dwSessionId) )
#define ISensLogon2_SessionDisconnect(This,bstrUserName,dwSessionId) ( (This)->lpVtbl -> SessionDisconnect(This,bstrUserName,dwSessionId) )
#define ISensLogon2_SessionReconnect(This,bstrUserName,dwSessionId) ( (This)->lpVtbl -> SessionReconnect(This,bstrUserName,dwSessionId) )
#define ISensLogon2_PostShell(This,bstrUserName,dwSessionId) ( (This)->lpVtbl -> PostShell(This,bstrUserName,dwSessionId) )
#endif
#endif
extern const CLSID CLSID_SENS;
#endif
#endif

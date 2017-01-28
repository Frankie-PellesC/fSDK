/*+@@file@@----------------------------------------------------------------*//*!
 \file		wmseventlog.h
 \par Description 
            Extension and update of headers for PellesC compiler suite.
 \par Project: 
            PellesC Headers extension
 \date		Created  on Mon Sep 19 16:08:45 2016
 \date		Modified on Mon Sep 19 16:08:45 2016
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
#ifndef __wmseventlog_h__
#define __wmseventlog_h__
#if __POCC__ >= 500
#pragma once
#endif
#ifndef __IWMSEventLog_FWD_DEFINED__
#define __IWMSEventLog_FWD_DEFINED__
typedef interface IWMSEventLog IWMSEventLog;
#endif
#include <oaidl.h>
#include <WMSNamedValues.h>
#if _MSC_VER > 1000
#pragma once
#endif
EXTERN_GUID(IID_IWMSEventLog, 0x7a0dcfb1, 0x47af, 0x11d2, 0x9e, 0xff, 0x00, 0x60, 0x97, 0xd2, 0xd7, 0xcf);
extern RPC_IF_HANDLE __MIDL_itf_wmseventlog_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_wmseventlog_0000_0000_v0_0_s_ifspec;
#ifndef __IWMSEventLog_INTERFACE_DEFINED__
#define __IWMSEventLog_INTERFACE_DEFINED__
typedef DECLSPEC_UUID("940488C2-8F93-41c1-BBEB-43D1B48D084B")
enum WMS_EVENT_LOG_LEVEL
{
	WMS_EVENT_LOG_LEVEL_ERROR = 0x1,
	WMS_EVENT_LOG_LEVEL_WARNING = 0x2,
	WMS_EVENT_LOG_LEVEL_INFORMATION = 0x4
} WMS_EVENT_LOG_LEVEL;
extern const IID IID_IWMSEventLog;
typedef struct IWMSEventLogVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IWMSEventLog * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IWMSEventLog * This);
	ULONG(STDMETHODCALLTYPE * Release) (IWMSEventLog * This);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfoCount) (IWMSEventLog * This, UINT * pctinfo);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfo) (IWMSEventLog * This, UINT iTInfo, LCID lcid, ITypeInfo ** ppTInfo);
	HRESULT(STDMETHODCALLTYPE * GetIDsOfNames) (IWMSEventLog * This, REFIID riid, LPOLESTR * rgszNames, UINT cNames, LCID lcid, DISPID * rgDispId);
	HRESULT(STDMETHODCALLTYPE * Invoke) (IWMSEventLog * This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS * pDispParams, VARIANT * pVarResult, EXCEPINFO * pExcepInfo, UINT * puArgErr);
HRESULT(STDMETHODCALLTYPE * LogEvent) (IWMSEventLog * This, IWMSNamedValues * pPluginNamedValues, WMS_EVENT_LOG_LEVEL ErrorLevel, long lErrorCode, BSTR bstrAdditionalInfo);
END_INTERFACE
}  IWMSEventLogVtbl;
interface IWMSEventLog
{
	CONST_VTBL struct IWMSEventLogVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IWMSEventLog_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IWMSEventLog_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IWMSEventLog_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IWMSEventLog_GetTypeInfoCount(This,pctinfo) ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define IWMSEventLog_GetTypeInfo(This,iTInfo,lcid,ppTInfo) ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define IWMSEventLog_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define IWMSEventLog_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define IWMSEventLog_LogEvent(This,pPluginNamedValues,ErrorLevel,lErrorCode,bstrAdditionalInfo) ( (This)->lpVtbl -> LogEvent(This,pPluginNamedValues,ErrorLevel,lErrorCode,bstrAdditionalInfo) )
#endif
#endif
unsigned long __RPC_USER BSTR_UserSize(unsigned long *, unsigned long, BSTR *);
unsigned char *__RPC_USER BSTR_UserMarshal(unsigned long *, unsigned char *, BSTR *);
unsigned char *__RPC_USER BSTR_UserUnmarshal(unsigned long *, unsigned char *, BSTR *);
void __RPC_USER BSTR_UserFree(unsigned long *, BSTR *);
unsigned long __RPC_USER BSTR_UserSize64(unsigned long *, unsigned long, BSTR *);
unsigned char *__RPC_USER BSTR_UserMarshal64(unsigned long *, unsigned char *, BSTR *);
unsigned char *__RPC_USER BSTR_UserUnmarshal64(unsigned long *, unsigned char *, BSTR *);
void __RPC_USER BSTR_UserFree64(unsigned long *, BSTR *);
#endif

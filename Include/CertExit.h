/*+@@file@@----------------------------------------------------------------*//*!
 \file		CertExit.h
 \par Description 
            Extension and update of headers for PellesC compiler suite.
 \par Project: 
            PellesC Headers extension
 \date		Created  on Sun Jul  3 01:05:40 2016
 \date		Modified on Sun Jul  3 01:05:40 2016
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
#ifndef __certexit_h__
#define __certexit_h__
#if __POCC__ >= 500
#pragma once
#endif
#ifndef __ICertExit_FWD_DEFINED__
#define __ICertExit_FWD_DEFINED__
typedef interface ICertExit ICertExit;
#endif
#ifndef __ICertExit2_FWD_DEFINED__
#define __ICertExit2_FWD_DEFINED__
typedef interface ICertExit2 ICertExit2;
#endif
#include <wtypes.h>
#include <certmod.h>
#define EXITEVENT_INVALID               ( 0x0 )
#define EXITEVENT_CERTISSUED            ( 0x1 )
#define EXITEVENT_CERTPENDING           ( 0x2 )
#define EXITEVENT_CERTDENIED            ( 0x4 )
#define EXITEVENT_CERTREVOKED           ( 0x8 )
#define EXITEVENT_CERTRETRIEVEPENDING   ( 0x10 )
#define EXITEVENT_CRLISSUED             ( 0x20 )
#define EXITEVENT_SHUTDOWN              ( 0x40 )
#define EXITEVENT_STARTUP               ( 0x80 )
#define EXITEVENT_CERTIMPORTED          ( 0x200 )
extern RPC_IF_HANDLE __MIDL_itf_certexit_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_certexit_0000_0000_v0_0_s_ifspec;
#ifndef __ICertExit_INTERFACE_DEFINED__
#define __ICertExit_INTERFACE_DEFINED__
extern const IID IID_ICertExit;
typedef struct ICertExitVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (ICertExit * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (ICertExit * This);
	ULONG(STDMETHODCALLTYPE * Release) (ICertExit * This);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfoCount) (ICertExit * This, UINT * pctinfo);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfo) (ICertExit * This, UINT iTInfo, LCID lcid, ITypeInfo ** ppTInfo);
	HRESULT(STDMETHODCALLTYPE * GetIDsOfNames) (ICertExit * This, REFIID riid, LPOLESTR * rgszNames, UINT cNames, LCID lcid, DISPID * rgDispId);
	HRESULT(STDMETHODCALLTYPE * Invoke) (ICertExit * This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS * pDispParams, VARIANT * pVarResult, EXCEPINFO * pExcepInfo, UINT * puArgErr);
	HRESULT(STDMETHODCALLTYPE * Initialize) (ICertExit * This, const BSTR strConfig, LONG * pEventMask);
	HRESULT(STDMETHODCALLTYPE * Notify) (ICertExit * This, LONG ExitEvent, LONG Context);
	HRESULT(STDMETHODCALLTYPE * GetDescription) (ICertExit * This, BSTR * pstrDescription);
	END_INTERFACE
}  ICertExitVtbl;
interface ICertExit
{
	CONST_VTBL struct ICertExitVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define ICertExit_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define ICertExit_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define ICertExit_Release(This)( (This)->lpVtbl -> Release(This) )
#define ICertExit_GetTypeInfoCount(This,pctinfo)( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define ICertExit_GetTypeInfo(This,iTInfo,lcid,ppTInfo)( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define ICertExit_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define ICertExit_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define ICertExit_Initialize(This,strConfig,pEventMask)( (This)->lpVtbl -> Initialize(This,strConfig,pEventMask) )
#define ICertExit_Notify(This,ExitEvent,Context)( (This)->lpVtbl -> Notify(This,ExitEvent,Context) )
#define ICertExit_GetDescription(This,pstrDescription)( (This)->lpVtbl -> GetDescription(This,pstrDescription) )
#endif
#endif
#ifndef __ICertExit2_INTERFACE_DEFINED__
#define __ICertExit2_INTERFACE_DEFINED__
extern const IID IID_ICertExit2;
typedef struct ICertExit2Vtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (ICertExit2 * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (ICertExit2 * This);
	ULONG(STDMETHODCALLTYPE * Release) (ICertExit2 * This);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfoCount) (ICertExit2 * This, UINT * pctinfo);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfo) (ICertExit2 * This, UINT iTInfo, LCID lcid, ITypeInfo ** ppTInfo);
	HRESULT(STDMETHODCALLTYPE * GetIDsOfNames) (ICertExit2 * This, REFIID riid, LPOLESTR * rgszNames, UINT cNames, LCID lcid, DISPID * rgDispId);
	HRESULT(STDMETHODCALLTYPE * Invoke) (ICertExit2 * This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS * pDispParams, VARIANT * pVarResult, EXCEPINFO * pExcepInfo, UINT * puArgErr);
	HRESULT(STDMETHODCALLTYPE * Initialize) (ICertExit2 * This, const BSTR strConfig, LONG * pEventMask);
	HRESULT(STDMETHODCALLTYPE * Notify) (ICertExit2 * This, LONG ExitEvent, LONG Context);
	HRESULT(STDMETHODCALLTYPE * GetDescription) (ICertExit2 * This, BSTR * pstrDescription);
	HRESULT(STDMETHODCALLTYPE * GetManageModule) (ICertExit2 * This, ICertManageModule ** ppManageModule);
	END_INTERFACE
}  ICertExit2Vtbl;
interface ICertExit2
{
	CONST_VTBL struct ICertExit2Vtbl *lpVtbl;
};
#ifdef COBJMACROS
#define ICertExit2_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define ICertExit2_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define ICertExit2_Release(This)( (This)->lpVtbl -> Release(This) )
#define ICertExit2_GetTypeInfoCount(This,pctinfo)( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define ICertExit2_GetTypeInfo(This,iTInfo,lcid,ppTInfo)( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define ICertExit2_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define ICertExit2_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define ICertExit2_Initialize(This,strConfig,pEventMask)( (This)->lpVtbl -> Initialize(This,strConfig,pEventMask) )
#define ICertExit2_Notify(This,ExitEvent,Context)( (This)->lpVtbl -> Notify(This,ExitEvent,Context) )
#define ICertExit2_GetDescription(This,pstrDescription)( (This)->lpVtbl -> GetDescription(This,pstrDescription) )
#define ICertExit2_GetManageModule(This,ppManageModule)( (This)->lpVtbl -> GetManageModule(This,ppManageModule) )
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

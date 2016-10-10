/*+@@file@@----------------------------------------------------------------*//*!
 \file		wsmandisp.h
 \par Description 
            Extension and update of headers for PellesC compiler suite.
 \par Project: 
            PellesC Headers extension
 \date		Created  on Mon Sep 19 18:42:50 2016
 \date		Modified on Mon Sep 19 18:42:50 2016
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
#ifndef __wsmandisp_h__
#define __wsmandisp_h__
#if __POCC__ >= 500
#pragma once
#endif
#ifndef __IWSMan_FWD_DEFINED__
#define __IWSMan_FWD_DEFINED__
typedef interface IWSMan IWSMan;
#endif
#ifndef __IWSManEx_FWD_DEFINED__
#define __IWSManEx_FWD_DEFINED__
typedef interface IWSManEx IWSManEx;
#endif
#ifndef __IWSManEx2_FWD_DEFINED__
#define __IWSManEx2_FWD_DEFINED__
typedef interface IWSManEx2 IWSManEx2;
#endif
#ifndef __IWSManEx3_FWD_DEFINED__
#define __IWSManEx3_FWD_DEFINED__
typedef interface IWSManEx3 IWSManEx3;
#endif
#ifndef __IWSManConnectionOptions_FWD_DEFINED__
#define __IWSManConnectionOptions_FWD_DEFINED__
typedef interface IWSManConnectionOptions IWSManConnectionOptions;
#endif
#ifndef __IWSManConnectionOptionsEx_FWD_DEFINED__
#define __IWSManConnectionOptionsEx_FWD_DEFINED__
typedef interface IWSManConnectionOptionsEx IWSManConnectionOptionsEx;
#endif
#ifndef __IWSManConnectionOptionsEx2_FWD_DEFINED__
#define __IWSManConnectionOptionsEx2_FWD_DEFINED__
typedef interface IWSManConnectionOptionsEx2 IWSManConnectionOptionsEx2;
#endif
#ifndef __IWSManSession_FWD_DEFINED__
#define __IWSManSession_FWD_DEFINED__
typedef interface IWSManSession IWSManSession;
#endif
#ifndef __IWSManEnumerator_FWD_DEFINED__
#define __IWSManEnumerator_FWD_DEFINED__
typedef interface IWSManEnumerator IWSManEnumerator;
#endif
#ifndef __IWSManResourceLocator_FWD_DEFINED__
#define __IWSManResourceLocator_FWD_DEFINED__
typedef interface IWSManResourceLocator IWSManResourceLocator;
#endif
#ifndef __IWSManResourceLocatorInternal_FWD_DEFINED__
#define __IWSManResourceLocatorInternal_FWD_DEFINED__
typedef interface IWSManResourceLocatorInternal IWSManResourceLocatorInternal;
#endif
#ifndef __WSMan_FWD_DEFINED__
#define __WSMan_FWD_DEFINED__
typedef struct WSMan WSMan;
#endif
#ifndef __IWSManInternal_FWD_DEFINED__
#define __IWSManInternal_FWD_DEFINED__
typedef interface IWSManInternal IWSManInternal;
#endif
#ifndef __WSManInternal_FWD_DEFINED__
#define __WSManInternal_FWD_DEFINED__
typedef struct WSManInternal WSManInternal;
#endif
#ifndef __IWSMan_FWD_DEFINED__
#define __IWSMan_FWD_DEFINED__
typedef interface IWSMan IWSMan;
#endif
#ifndef __IWSManEx_FWD_DEFINED__
#define __IWSManEx_FWD_DEFINED__
typedef interface IWSManEx IWSManEx;
#endif
#ifndef __IWSManEx2_FWD_DEFINED__
#define __IWSManEx2_FWD_DEFINED__
typedef interface IWSManEx2 IWSManEx2;
#endif
#ifndef __IWSManEx3_FWD_DEFINED__
#define __IWSManEx3_FWD_DEFINED__
typedef interface IWSManEx3 IWSManEx3;
#endif
#ifndef __IWSManConnectionOptions_FWD_DEFINED__
#define __IWSManConnectionOptions_FWD_DEFINED__
typedef interface IWSManConnectionOptions IWSManConnectionOptions;
#endif
#ifndef __IWSManConnectionOptionsEx_FWD_DEFINED__
#define __IWSManConnectionOptionsEx_FWD_DEFINED__
typedef interface IWSManConnectionOptionsEx IWSManConnectionOptionsEx;
#endif
#ifndef __IWSManConnectionOptionsEx2_FWD_DEFINED__
#define __IWSManConnectionOptionsEx2_FWD_DEFINED__
typedef interface IWSManConnectionOptionsEx2 IWSManConnectionOptionsEx2;
#endif
#ifndef __IWSManSession_FWD_DEFINED__
#define __IWSManSession_FWD_DEFINED__
typedef interface IWSManSession IWSManSession;
#endif
#ifndef __IWSManEnumerator_FWD_DEFINED__
#define __IWSManEnumerator_FWD_DEFINED__
typedef interface IWSManEnumerator IWSManEnumerator;
#endif
#ifndef __IWSManResourceLocator_FWD_DEFINED__
#define __IWSManResourceLocator_FWD_DEFINED__
typedef interface IWSManResourceLocator IWSManResourceLocator;
#endif
#ifndef __IWSManResourceLocatorInternal_FWD_DEFINED__
#define __IWSManResourceLocatorInternal_FWD_DEFINED__
typedef interface IWSManResourceLocatorInternal IWSManResourceLocatorInternal;
#endif
#ifndef __IWSManInternal_FWD_DEFINED__
#define __IWSManInternal_FWD_DEFINED__
typedef interface IWSManInternal IWSManInternal;
#endif
extern RPC_IF_HANDLE __MIDL_itf_wsmandisp_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_wsmandisp_0000_0000_v0_0_s_ifspec;
#ifndef __WSManAutomation_LIBRARY_DEFINED__
#define __WSManAutomation_LIBRARY_DEFINED__
typedef enum _WSManSessionFlags
{
	WSManFlagUTF8 = 0x1,
	WSManFlagCredUsernamePassword = 0x1000,
	WSManFlagSkipCACheck = 0x2000,
	WSManFlagSkipCNCheck = 0x4000,
	WSManFlagUseNoAuthentication = 0x8000,
	WSManFlagUseDigest = 0x10000,
	WSManFlagUseNegotiate = 0x20000,
	WSManFlagUseBasic = 0x40000,
	WSManFlagUseKerberos = 0x80000,
	WSManFlagNoEncryption = 0x100000,
	WSManFlagUseClientCertificate = 0x200000,
	WSManFlagEnableSPNServerPort = 0x400000,
	WSManFlagUTF16 = 0x800000,
	WSManFlagUseCredSsp = 0x1000000,
	WSManFlagSkipRevocationCheck = 0x2000000,
	WSManFlagAllowNegotiateImplicitCredentials = 0x4000000,
	WSManFlagUseSsl = 0x8000000
} WSManSessionFlags;
typedef enum _WSManEnumFlags
{
	WSManFlagNonXmlText = 0x1,
	WSManFlagReturnObject = 0,
	WSManFlagReturnEPR = 0x2,
	WSManFlagReturnObjectAndEPR = 0x4,
	WSManFlagHierarchyDeep = 0,
	WSManFlagHierarchyShallow = 0x20,
	WSManFlagHierarchyDeepBasePropsOnly = 0x40,
	WSManFlagAssociatedInstance = 0,
	WSManFlagAssociationInstance = 0x80
} WSManEnumFlags;
typedef enum _WSManProxyAccessTypeFlags
{
	WSManProxyIEConfig = 0x1,
	WSManProxyWinHttpConfig = 0x2,
	WSManProxyAutoDetect = 0x4,
	WSManProxyNoProxyServer = 0x8
} WSManProxyAccessTypeFlags;
typedef enum _WSManProxyAuthenticationFlags
{
	WSManFlagProxyAuthenticationUseNegotiate = 0x1,
	WSManFlagProxyAuthenticationUseBasic = 0x2,
	WSManFlagProxyAuthenticationUseDigest = 0x4
} WSManProxyAuthenticationFlags;
extern const IID LIBID_WSManAutomation;
#ifndef __IWSMan_INTERFACE_DEFINED__
#define __IWSMan_INTERFACE_DEFINED__
extern const IID IID_IWSMan;
typedef struct IWSManVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IWSMan * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IWSMan * This);
	ULONG(STDMETHODCALLTYPE * Release) (IWSMan * This);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfoCount) (IWSMan * This, UINT * pctinfo);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfo) (IWSMan * This, UINT iTInfo, LCID lcid, ITypeInfo ** ppTInfo);
	HRESULT(STDMETHODCALLTYPE * GetIDsOfNames) (IWSMan * This, REFIID riid, LPOLESTR * rgszNames, UINT cNames, LCID lcid, DISPID * rgDispId);
	HRESULT(STDMETHODCALLTYPE * Invoke) (IWSMan * This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS * pDispParams, VARIANT * pVarResult, EXCEPINFO * pExcepInfo, UINT * puArgErr);
	HRESULT(STDMETHODCALLTYPE * CreateSession) (IWSMan * This, BSTR connection, long flags, IDispatch * connectionOptions, IDispatch ** session);
	HRESULT(STDMETHODCALLTYPE * CreateConnectionOptions) (IWSMan * This, IDispatch ** connectionOptions);
	HRESULT(STDMETHODCALLTYPE * get_CommandLine) (IWSMan * This, BSTR * value);
	HRESULT(STDMETHODCALLTYPE * get_Error) (IWSMan * This, BSTR * value);
	END_INTERFACE
}  IWSManVtbl;
interface IWSMan
{
	CONST_VTBL struct IWSManVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IWSMan_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IWSMan_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IWSMan_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IWSMan_GetTypeInfoCount(This,pctinfo) ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define IWSMan_GetTypeInfo(This,iTInfo,lcid,ppTInfo) ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define IWSMan_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define IWSMan_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define IWSMan_CreateSession(This,connection,flags,connectionOptions,session) ( (This)->lpVtbl -> CreateSession(This,connection,flags,connectionOptions,session) )
#define IWSMan_CreateConnectionOptions(This,connectionOptions) ( (This)->lpVtbl -> CreateConnectionOptions(This,connectionOptions) )
#define IWSMan_get_CommandLine(This,value) ( (This)->lpVtbl -> get_CommandLine(This,value) )
#define IWSMan_get_Error(This,value) ( (This)->lpVtbl -> get_Error(This,value) )
#endif
#endif
#ifndef __IWSManEx_INTERFACE_DEFINED__
#define __IWSManEx_INTERFACE_DEFINED__
extern const IID IID_IWSManEx;
typedef struct IWSManExVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IWSManEx * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IWSManEx * This);
	ULONG(STDMETHODCALLTYPE * Release) (IWSManEx * This);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfoCount) (IWSManEx * This, UINT * pctinfo);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfo) (IWSManEx * This, UINT iTInfo, LCID lcid, ITypeInfo ** ppTInfo);
	HRESULT(STDMETHODCALLTYPE * GetIDsOfNames) (IWSManEx * This, REFIID riid, LPOLESTR * rgszNames, UINT cNames, LCID lcid, DISPID * rgDispId);
	HRESULT(STDMETHODCALLTYPE * Invoke) (IWSManEx * This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS * pDispParams, VARIANT * pVarResult, EXCEPINFO * pExcepInfo, UINT * puArgErr);
	HRESULT(STDMETHODCALLTYPE * CreateSession) (IWSManEx * This, BSTR connection, long flags, IDispatch * connectionOptions, IDispatch ** session);
	HRESULT(STDMETHODCALLTYPE * CreateConnectionOptions) (IWSManEx * This, IDispatch ** connectionOptions);
	HRESULT(STDMETHODCALLTYPE * get_CommandLine) (IWSManEx * This, BSTR * value);
	HRESULT(STDMETHODCALLTYPE * get_Error) (IWSManEx * This, BSTR * value);
	HRESULT(STDMETHODCALLTYPE * CreateResourceLocator) (IWSManEx * This, BSTR strResourceLocator, IDispatch ** newResourceLocator);
	HRESULT(STDMETHODCALLTYPE * SessionFlagUTF8) (IWSManEx * This, long *flags);
	HRESULT(STDMETHODCALLTYPE * SessionFlagCredUsernamePassword) (IWSManEx * This, long *flags);
	HRESULT(STDMETHODCALLTYPE * SessionFlagSkipCACheck) (IWSManEx * This, long *flags);
	HRESULT(STDMETHODCALLTYPE * SessionFlagSkipCNCheck) (IWSManEx * This, long *flags);
	HRESULT(STDMETHODCALLTYPE * SessionFlagUseDigest) (IWSManEx * This, long *flags);
	HRESULT(STDMETHODCALLTYPE * SessionFlagUseNegotiate) (IWSManEx * This, long *flags);
	HRESULT(STDMETHODCALLTYPE * SessionFlagUseBasic) (IWSManEx * This, long *flags);
	HRESULT(STDMETHODCALLTYPE * SessionFlagUseKerberos) (IWSManEx * This, long *flags);
	HRESULT(STDMETHODCALLTYPE * SessionFlagNoEncryption) (IWSManEx * This, long *flags);
	HRESULT(STDMETHODCALLTYPE * SessionFlagEnableSPNServerPort) (IWSManEx * This, long *flags);
	HRESULT(STDMETHODCALLTYPE * SessionFlagUseNoAuthentication) (IWSManEx * This, long *flags);
	HRESULT(STDMETHODCALLTYPE * EnumerationFlagNonXmlText) (IWSManEx * This, long *flags);
	HRESULT(STDMETHODCALLTYPE * EnumerationFlagReturnEPR) (IWSManEx * This, long *flags);
	HRESULT(STDMETHODCALLTYPE * EnumerationFlagReturnObjectAndEPR) (IWSManEx * This, long *flags);
	HRESULT(STDMETHODCALLTYPE * GetErrorMessage) (IWSManEx * This, DWORD errorNumber, BSTR * errorMessage);
	HRESULT(STDMETHODCALLTYPE * EnumerationFlagHierarchyDeep) (IWSManEx * This, long *flags);
	HRESULT(STDMETHODCALLTYPE * EnumerationFlagHierarchyShallow) (IWSManEx * This, long *flags);
	HRESULT(STDMETHODCALLTYPE * EnumerationFlagHierarchyDeepBasePropsOnly) (IWSManEx * This, long *flags);
	HRESULT(STDMETHODCALLTYPE * EnumerationFlagReturnObject) (IWSManEx * This, long *flags);
	END_INTERFACE
}  IWSManExVtbl;
interface IWSManEx
{
	CONST_VTBL struct IWSManExVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IWSManEx_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IWSManEx_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IWSManEx_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IWSManEx_GetTypeInfoCount(This,pctinfo) ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define IWSManEx_GetTypeInfo(This,iTInfo,lcid,ppTInfo) ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define IWSManEx_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define IWSManEx_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define IWSManEx_CreateSession(This,connection,flags,connectionOptions,session) ( (This)->lpVtbl -> CreateSession(This,connection,flags,connectionOptions,session) )
#define IWSManEx_CreateConnectionOptions(This,connectionOptions) ( (This)->lpVtbl -> CreateConnectionOptions(This,connectionOptions) )
#define IWSManEx_get_CommandLine(This,value) ( (This)->lpVtbl -> get_CommandLine(This,value) )
#define IWSManEx_get_Error(This,value) ( (This)->lpVtbl -> get_Error(This,value) )
#define IWSManEx_CreateResourceLocator(This,strResourceLocator,newResourceLocator) ( (This)->lpVtbl -> CreateResourceLocator(This,strResourceLocator,newResourceLocator) )
#define IWSManEx_SessionFlagUTF8(This,flags) ( (This)->lpVtbl -> SessionFlagUTF8(This,flags) )
#define IWSManEx_SessionFlagCredUsernamePassword(This,flags) ( (This)->lpVtbl -> SessionFlagCredUsernamePassword(This,flags) )
#define IWSManEx_SessionFlagSkipCACheck(This,flags) ( (This)->lpVtbl -> SessionFlagSkipCACheck(This,flags) )
#define IWSManEx_SessionFlagSkipCNCheck(This,flags) ( (This)->lpVtbl -> SessionFlagSkipCNCheck(This,flags) )
#define IWSManEx_SessionFlagUseDigest(This,flags) ( (This)->lpVtbl -> SessionFlagUseDigest(This,flags) )
#define IWSManEx_SessionFlagUseNegotiate(This,flags) ( (This)->lpVtbl -> SessionFlagUseNegotiate(This,flags) )
#define IWSManEx_SessionFlagUseBasic(This,flags) ( (This)->lpVtbl -> SessionFlagUseBasic(This,flags) )
#define IWSManEx_SessionFlagUseKerberos(This,flags) ( (This)->lpVtbl -> SessionFlagUseKerberos(This,flags) )
#define IWSManEx_SessionFlagNoEncryption(This,flags) ( (This)->lpVtbl -> SessionFlagNoEncryption(This,flags) )
#define IWSManEx_SessionFlagEnableSPNServerPort(This,flags) ( (This)->lpVtbl -> SessionFlagEnableSPNServerPort(This,flags) )
#define IWSManEx_SessionFlagUseNoAuthentication(This,flags) ( (This)->lpVtbl -> SessionFlagUseNoAuthentication(This,flags) )
#define IWSManEx_EnumerationFlagNonXmlText(This,flags) ( (This)->lpVtbl -> EnumerationFlagNonXmlText(This,flags) )
#define IWSManEx_EnumerationFlagReturnEPR(This,flags) ( (This)->lpVtbl -> EnumerationFlagReturnEPR(This,flags) )
#define IWSManEx_EnumerationFlagReturnObjectAndEPR(This,flags) ( (This)->lpVtbl -> EnumerationFlagReturnObjectAndEPR(This,flags) )
#define IWSManEx_GetErrorMessage(This,errorNumber,errorMessage) ( (This)->lpVtbl -> GetErrorMessage(This,errorNumber,errorMessage) )
#define IWSManEx_EnumerationFlagHierarchyDeep(This,flags) ( (This)->lpVtbl -> EnumerationFlagHierarchyDeep(This,flags) )
#define IWSManEx_EnumerationFlagHierarchyShallow(This,flags) ( (This)->lpVtbl -> EnumerationFlagHierarchyShallow(This,flags) )
#define IWSManEx_EnumerationFlagHierarchyDeepBasePropsOnly(This,flags) ( (This)->lpVtbl -> EnumerationFlagHierarchyDeepBasePropsOnly(This,flags) )
#define IWSManEx_EnumerationFlagReturnObject(This,flags) ( (This)->lpVtbl -> EnumerationFlagReturnObject(This,flags) )
#endif
#endif
#ifndef __IWSManEx2_INTERFACE_DEFINED__
#define __IWSManEx2_INTERFACE_DEFINED__
extern const IID IID_IWSManEx2;
typedef struct IWSManEx2Vtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IWSManEx2 * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IWSManEx2 * This);
	ULONG(STDMETHODCALLTYPE * Release) (IWSManEx2 * This);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfoCount) (IWSManEx2 * This, UINT * pctinfo);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfo) (IWSManEx2 * This, UINT iTInfo, LCID lcid, ITypeInfo ** ppTInfo);
	HRESULT(STDMETHODCALLTYPE * GetIDsOfNames) (IWSManEx2 * This, REFIID riid, LPOLESTR * rgszNames, UINT cNames, LCID lcid, DISPID * rgDispId);
	HRESULT(STDMETHODCALLTYPE * Invoke) (IWSManEx2 * This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS * pDispParams, VARIANT * pVarResult, EXCEPINFO * pExcepInfo, UINT * puArgErr);
	HRESULT(STDMETHODCALLTYPE * CreateSession) (IWSManEx2 * This, BSTR connection, long flags, IDispatch * connectionOptions, IDispatch ** session);
	HRESULT(STDMETHODCALLTYPE * CreateConnectionOptions) (IWSManEx2 * This, IDispatch ** connectionOptions);
	HRESULT(STDMETHODCALLTYPE * get_CommandLine) (IWSManEx2 * This, BSTR * value);
	HRESULT(STDMETHODCALLTYPE * get_Error) (IWSManEx2 * This, BSTR * value);
	HRESULT(STDMETHODCALLTYPE * CreateResourceLocator) (IWSManEx2 * This, BSTR strResourceLocator, IDispatch ** newResourceLocator);
	HRESULT(STDMETHODCALLTYPE * SessionFlagUTF8) (IWSManEx2 * This, long *flags);
	HRESULT(STDMETHODCALLTYPE * SessionFlagCredUsernamePassword) (IWSManEx2 * This, long *flags);
	HRESULT(STDMETHODCALLTYPE * SessionFlagSkipCACheck) (IWSManEx2 * This, long *flags);
	HRESULT(STDMETHODCALLTYPE * SessionFlagSkipCNCheck) (IWSManEx2 * This, long *flags);
	HRESULT(STDMETHODCALLTYPE * SessionFlagUseDigest) (IWSManEx2 * This, long *flags);
	HRESULT(STDMETHODCALLTYPE * SessionFlagUseNegotiate) (IWSManEx2 * This, long *flags);
	HRESULT(STDMETHODCALLTYPE * SessionFlagUseBasic) (IWSManEx2 * This, long *flags);
	HRESULT(STDMETHODCALLTYPE * SessionFlagUseKerberos) (IWSManEx2 * This, long *flags);
	HRESULT(STDMETHODCALLTYPE * SessionFlagNoEncryption) (IWSManEx2 * This, long *flags);
	HRESULT(STDMETHODCALLTYPE * SessionFlagEnableSPNServerPort) (IWSManEx2 * This, long *flags);
	HRESULT(STDMETHODCALLTYPE * SessionFlagUseNoAuthentication) (IWSManEx2 * This, long *flags);
	HRESULT(STDMETHODCALLTYPE * EnumerationFlagNonXmlText) (IWSManEx2 * This, long *flags);
	HRESULT(STDMETHODCALLTYPE * EnumerationFlagReturnEPR) (IWSManEx2 * This, long *flags);
	HRESULT(STDMETHODCALLTYPE * EnumerationFlagReturnObjectAndEPR) (IWSManEx2 * This, long *flags);
	HRESULT(STDMETHODCALLTYPE * GetErrorMessage) (IWSManEx2 * This, DWORD errorNumber, BSTR * errorMessage);
	HRESULT(STDMETHODCALLTYPE * EnumerationFlagHierarchyDeep) (IWSManEx2 * This, long *flags);
	HRESULT(STDMETHODCALLTYPE * EnumerationFlagHierarchyShallow) (IWSManEx2 * This, long *flags);
	HRESULT(STDMETHODCALLTYPE * EnumerationFlagHierarchyDeepBasePropsOnly) (IWSManEx2 * This, long *flags);
	HRESULT(STDMETHODCALLTYPE * EnumerationFlagReturnObject) (IWSManEx2 * This, long *flags);
	HRESULT(STDMETHODCALLTYPE * SessionFlagUseClientCertificate) (IWSManEx2 * This, long *flags);
	END_INTERFACE
}  IWSManEx2Vtbl;
interface IWSManEx2
{
	CONST_VTBL struct IWSManEx2Vtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IWSManEx2_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IWSManEx2_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IWSManEx2_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IWSManEx2_GetTypeInfoCount(This,pctinfo) ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define IWSManEx2_GetTypeInfo(This,iTInfo,lcid,ppTInfo) ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define IWSManEx2_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define IWSManEx2_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define IWSManEx2_CreateSession(This,connection,flags,connectionOptions,session) ( (This)->lpVtbl -> CreateSession(This,connection,flags,connectionOptions,session) )
#define IWSManEx2_CreateConnectionOptions(This,connectionOptions) ( (This)->lpVtbl -> CreateConnectionOptions(This,connectionOptions) )
#define IWSManEx2_get_CommandLine(This,value) ( (This)->lpVtbl -> get_CommandLine(This,value) )
#define IWSManEx2_get_Error(This,value) ( (This)->lpVtbl -> get_Error(This,value) )
#define IWSManEx2_CreateResourceLocator(This,strResourceLocator,newResourceLocator) ( (This)->lpVtbl -> CreateResourceLocator(This,strResourceLocator,newResourceLocator) )
#define IWSManEx2_SessionFlagUTF8(This,flags) ( (This)->lpVtbl -> SessionFlagUTF8(This,flags) )
#define IWSManEx2_SessionFlagCredUsernamePassword(This,flags) ( (This)->lpVtbl -> SessionFlagCredUsernamePassword(This,flags) )
#define IWSManEx2_SessionFlagSkipCACheck(This,flags) ( (This)->lpVtbl -> SessionFlagSkipCACheck(This,flags) )
#define IWSManEx2_SessionFlagSkipCNCheck(This,flags) ( (This)->lpVtbl -> SessionFlagSkipCNCheck(This,flags) )
#define IWSManEx2_SessionFlagUseDigest(This,flags) ( (This)->lpVtbl -> SessionFlagUseDigest(This,flags) )
#define IWSManEx2_SessionFlagUseNegotiate(This,flags) ( (This)->lpVtbl -> SessionFlagUseNegotiate(This,flags) )
#define IWSManEx2_SessionFlagUseBasic(This,flags) ( (This)->lpVtbl -> SessionFlagUseBasic(This,flags) )
#define IWSManEx2_SessionFlagUseKerberos(This,flags) ( (This)->lpVtbl -> SessionFlagUseKerberos(This,flags) )
#define IWSManEx2_SessionFlagNoEncryption(This,flags) ( (This)->lpVtbl -> SessionFlagNoEncryption(This,flags) )
#define IWSManEx2_SessionFlagEnableSPNServerPort(This,flags) ( (This)->lpVtbl -> SessionFlagEnableSPNServerPort(This,flags) )
#define IWSManEx2_SessionFlagUseNoAuthentication(This,flags) ( (This)->lpVtbl -> SessionFlagUseNoAuthentication(This,flags) )
#define IWSManEx2_EnumerationFlagNonXmlText(This,flags) ( (This)->lpVtbl -> EnumerationFlagNonXmlText(This,flags) )
#define IWSManEx2_EnumerationFlagReturnEPR(This,flags) ( (This)->lpVtbl -> EnumerationFlagReturnEPR(This,flags) )
#define IWSManEx2_EnumerationFlagReturnObjectAndEPR(This,flags) ( (This)->lpVtbl -> EnumerationFlagReturnObjectAndEPR(This,flags) )
#define IWSManEx2_GetErrorMessage(This,errorNumber,errorMessage) ( (This)->lpVtbl -> GetErrorMessage(This,errorNumber,errorMessage) )
#define IWSManEx2_EnumerationFlagHierarchyDeep(This,flags) ( (This)->lpVtbl -> EnumerationFlagHierarchyDeep(This,flags) )
#define IWSManEx2_EnumerationFlagHierarchyShallow(This,flags) ( (This)->lpVtbl -> EnumerationFlagHierarchyShallow(This,flags) )
#define IWSManEx2_EnumerationFlagHierarchyDeepBasePropsOnly(This,flags) ( (This)->lpVtbl -> EnumerationFlagHierarchyDeepBasePropsOnly(This,flags) )
#define IWSManEx2_EnumerationFlagReturnObject(This,flags) ( (This)->lpVtbl -> EnumerationFlagReturnObject(This,flags) )
#define IWSManEx2_SessionFlagUseClientCertificate(This,flags) ( (This)->lpVtbl -> SessionFlagUseClientCertificate(This,flags) )
#endif
#endif
#ifndef __IWSManEx3_INTERFACE_DEFINED__
#define __IWSManEx3_INTERFACE_DEFINED__
extern const IID IID_IWSManEx3;
typedef struct IWSManEx3Vtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IWSManEx3 * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IWSManEx3 * This);
	ULONG(STDMETHODCALLTYPE * Release) (IWSManEx3 * This);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfoCount) (IWSManEx3 * This, UINT * pctinfo);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfo) (IWSManEx3 * This, UINT iTInfo, LCID lcid, ITypeInfo ** ppTInfo);
	HRESULT(STDMETHODCALLTYPE * GetIDsOfNames) (IWSManEx3 * This, REFIID riid, LPOLESTR * rgszNames, UINT cNames, LCID lcid, DISPID * rgDispId);
	HRESULT(STDMETHODCALLTYPE * Invoke) (IWSManEx3 * This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS * pDispParams, VARIANT * pVarResult, EXCEPINFO * pExcepInfo, UINT * puArgErr);
	HRESULT(STDMETHODCALLTYPE * CreateSession) (IWSManEx3 * This, BSTR connection, long flags, IDispatch * connectionOptions, IDispatch ** session);
	HRESULT(STDMETHODCALLTYPE * CreateConnectionOptions) (IWSManEx3 * This, IDispatch ** connectionOptions);
	HRESULT(STDMETHODCALLTYPE * get_CommandLine) (IWSManEx3 * This, BSTR * value);
	HRESULT(STDMETHODCALLTYPE * get_Error) (IWSManEx3 * This, BSTR * value);
	HRESULT(STDMETHODCALLTYPE * CreateResourceLocator) (IWSManEx3 * This, BSTR strResourceLocator, IDispatch ** newResourceLocator);
	HRESULT(STDMETHODCALLTYPE * SessionFlagUTF8) (IWSManEx3 * This, long *flags);
	HRESULT(STDMETHODCALLTYPE * SessionFlagCredUsernamePassword) (IWSManEx3 * This, long *flags);
	HRESULT(STDMETHODCALLTYPE * SessionFlagSkipCACheck) (IWSManEx3 * This, long *flags);
	HRESULT(STDMETHODCALLTYPE * SessionFlagSkipCNCheck) (IWSManEx3 * This, long *flags);
	HRESULT(STDMETHODCALLTYPE * SessionFlagUseDigest) (IWSManEx3 * This, long *flags);
	HRESULT(STDMETHODCALLTYPE * SessionFlagUseNegotiate) (IWSManEx3 * This, long *flags);
	HRESULT(STDMETHODCALLTYPE * SessionFlagUseBasic) (IWSManEx3 * This, long *flags);
	HRESULT(STDMETHODCALLTYPE * SessionFlagUseKerberos) (IWSManEx3 * This, long *flags);
	HRESULT(STDMETHODCALLTYPE * SessionFlagNoEncryption) (IWSManEx3 * This, long *flags);
	HRESULT(STDMETHODCALLTYPE * SessionFlagEnableSPNServerPort) (IWSManEx3 * This, long *flags);
	HRESULT(STDMETHODCALLTYPE * SessionFlagUseNoAuthentication) (IWSManEx3 * This, long *flags);
	HRESULT(STDMETHODCALLTYPE * EnumerationFlagNonXmlText) (IWSManEx3 * This, long *flags);
	HRESULT(STDMETHODCALLTYPE * EnumerationFlagReturnEPR) (IWSManEx3 * This, long *flags);
	HRESULT(STDMETHODCALLTYPE * EnumerationFlagReturnObjectAndEPR) (IWSManEx3 * This, long *flags);
	HRESULT(STDMETHODCALLTYPE * GetErrorMessage) (IWSManEx3 * This, DWORD errorNumber, BSTR * errorMessage);
	HRESULT(STDMETHODCALLTYPE * EnumerationFlagHierarchyDeep) (IWSManEx3 * This, long *flags);
	HRESULT(STDMETHODCALLTYPE * EnumerationFlagHierarchyShallow) (IWSManEx3 * This, long *flags);
	HRESULT(STDMETHODCALLTYPE * EnumerationFlagHierarchyDeepBasePropsOnly) (IWSManEx3 * This, long *flags);
	HRESULT(STDMETHODCALLTYPE * EnumerationFlagReturnObject) (IWSManEx3 * This, long *flags);
	HRESULT(STDMETHODCALLTYPE * SessionFlagUseClientCertificate) (IWSManEx3 * This, long *flags);
	HRESULT(STDMETHODCALLTYPE * SessionFlagUTF16) (IWSManEx3 * This, long *flags);
	HRESULT(STDMETHODCALLTYPE * SessionFlagUseCredSsp) (IWSManEx3 * This, long *flags);
	HRESULT(STDMETHODCALLTYPE * EnumerationFlagAssociationInstance) (IWSManEx3 * This, long *flags);
	HRESULT(STDMETHODCALLTYPE * EnumerationFlagAssociatedInstance) (IWSManEx3 * This, long *flags);
	HRESULT(STDMETHODCALLTYPE * SessionFlagSkipRevocationCheck) (IWSManEx3 * This, long *flags);
	HRESULT(STDMETHODCALLTYPE * SessionFlagAllowNegotiateImplicitCredentials) (IWSManEx3 * This, long *flags);
	HRESULT(STDMETHODCALLTYPE * SessionFlagUseSsl) (IWSManEx3 * This, long *flags);
	END_INTERFACE
}  IWSManEx3Vtbl;
interface IWSManEx3
{
	CONST_VTBL struct IWSManEx3Vtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IWSManEx3_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IWSManEx3_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IWSManEx3_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IWSManEx3_GetTypeInfoCount(This,pctinfo) ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define IWSManEx3_GetTypeInfo(This,iTInfo,lcid,ppTInfo) ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define IWSManEx3_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define IWSManEx3_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define IWSManEx3_CreateSession(This,connection,flags,connectionOptions,session) ( (This)->lpVtbl -> CreateSession(This,connection,flags,connectionOptions,session) )
#define IWSManEx3_CreateConnectionOptions(This,connectionOptions) ( (This)->lpVtbl -> CreateConnectionOptions(This,connectionOptions) )
#define IWSManEx3_get_CommandLine(This,value) ( (This)->lpVtbl -> get_CommandLine(This,value) )
#define IWSManEx3_get_Error(This,value) ( (This)->lpVtbl -> get_Error(This,value) )
#define IWSManEx3_CreateResourceLocator(This,strResourceLocator,newResourceLocator) ( (This)->lpVtbl -> CreateResourceLocator(This,strResourceLocator,newResourceLocator) )
#define IWSManEx3_SessionFlagUTF8(This,flags) ( (This)->lpVtbl -> SessionFlagUTF8(This,flags) )
#define IWSManEx3_SessionFlagCredUsernamePassword(This,flags) ( (This)->lpVtbl -> SessionFlagCredUsernamePassword(This,flags) )
#define IWSManEx3_SessionFlagSkipCACheck(This,flags) ( (This)->lpVtbl -> SessionFlagSkipCACheck(This,flags) )
#define IWSManEx3_SessionFlagSkipCNCheck(This,flags) ( (This)->lpVtbl -> SessionFlagSkipCNCheck(This,flags) )
#define IWSManEx3_SessionFlagUseDigest(This,flags) ( (This)->lpVtbl -> SessionFlagUseDigest(This,flags) )
#define IWSManEx3_SessionFlagUseNegotiate(This,flags) ( (This)->lpVtbl -> SessionFlagUseNegotiate(This,flags) )
#define IWSManEx3_SessionFlagUseBasic(This,flags) ( (This)->lpVtbl -> SessionFlagUseBasic(This,flags) )
#define IWSManEx3_SessionFlagUseKerberos(This,flags) ( (This)->lpVtbl -> SessionFlagUseKerberos(This,flags) )
#define IWSManEx3_SessionFlagNoEncryption(This,flags) ( (This)->lpVtbl -> SessionFlagNoEncryption(This,flags) )
#define IWSManEx3_SessionFlagEnableSPNServerPort(This,flags) ( (This)->lpVtbl -> SessionFlagEnableSPNServerPort(This,flags) )
#define IWSManEx3_SessionFlagUseNoAuthentication(This,flags) ( (This)->lpVtbl -> SessionFlagUseNoAuthentication(This,flags) )
#define IWSManEx3_EnumerationFlagNonXmlText(This,flags) ( (This)->lpVtbl -> EnumerationFlagNonXmlText(This,flags) )
#define IWSManEx3_EnumerationFlagReturnEPR(This,flags) ( (This)->lpVtbl -> EnumerationFlagReturnEPR(This,flags) )
#define IWSManEx3_EnumerationFlagReturnObjectAndEPR(This,flags) ( (This)->lpVtbl -> EnumerationFlagReturnObjectAndEPR(This,flags) )
#define IWSManEx3_GetErrorMessage(This,errorNumber,errorMessage) ( (This)->lpVtbl -> GetErrorMessage(This,errorNumber,errorMessage) )
#define IWSManEx3_EnumerationFlagHierarchyDeep(This,flags) ( (This)->lpVtbl -> EnumerationFlagHierarchyDeep(This,flags) )
#define IWSManEx3_EnumerationFlagHierarchyShallow(This,flags) ( (This)->lpVtbl -> EnumerationFlagHierarchyShallow(This,flags) )
#define IWSManEx3_EnumerationFlagHierarchyDeepBasePropsOnly(This,flags) ( (This)->lpVtbl -> EnumerationFlagHierarchyDeepBasePropsOnly(This,flags) )
#define IWSManEx3_EnumerationFlagReturnObject(This,flags) ( (This)->lpVtbl -> EnumerationFlagReturnObject(This,flags) )
#define IWSManEx3_SessionFlagUseClientCertificate(This,flags) ( (This)->lpVtbl -> SessionFlagUseClientCertificate(This,flags) )
#define IWSManEx3_SessionFlagUTF16(This,flags) ( (This)->lpVtbl -> SessionFlagUTF16(This,flags) )
#define IWSManEx3_SessionFlagUseCredSsp(This,flags) ( (This)->lpVtbl -> SessionFlagUseCredSsp(This,flags) )
#define IWSManEx3_EnumerationFlagAssociationInstance(This,flags) ( (This)->lpVtbl -> EnumerationFlagAssociationInstance(This,flags) )
#define IWSManEx3_EnumerationFlagAssociatedInstance(This,flags) ( (This)->lpVtbl -> EnumerationFlagAssociatedInstance(This,flags) )
#define IWSManEx3_SessionFlagSkipRevocationCheck(This,flags) ( (This)->lpVtbl -> SessionFlagSkipRevocationCheck(This,flags) )
#define IWSManEx3_SessionFlagAllowNegotiateImplicitCredentials(This,flags) ( (This)->lpVtbl -> SessionFlagAllowNegotiateImplicitCredentials(This,flags) )
#define IWSManEx3_SessionFlagUseSsl(This,flags) ( (This)->lpVtbl -> SessionFlagUseSsl(This,flags) )
#endif
#endif
#ifndef __IWSManConnectionOptions_INTERFACE_DEFINED__
#define __IWSManConnectionOptions_INTERFACE_DEFINED__
extern const IID IID_IWSManConnectionOptions;
typedef struct IWSManConnectionOptionsVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IWSManConnectionOptions * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IWSManConnectionOptions * This);
	ULONG(STDMETHODCALLTYPE * Release) (IWSManConnectionOptions * This);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfoCount) (IWSManConnectionOptions * This, UINT * pctinfo);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfo) (IWSManConnectionOptions * This, UINT iTInfo, LCID lcid, ITypeInfo ** ppTInfo);
	HRESULT(STDMETHODCALLTYPE * GetIDsOfNames) (IWSManConnectionOptions * This, REFIID riid, LPOLESTR * rgszNames, UINT cNames, LCID lcid, DISPID * rgDispId);
	HRESULT(STDMETHODCALLTYPE * Invoke) (IWSManConnectionOptions * This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS * pDispParams, VARIANT * pVarResult, EXCEPINFO * pExcepInfo, UINT * puArgErr);
	HRESULT(STDMETHODCALLTYPE * get_UserName) (IWSManConnectionOptions * This, BSTR * name);
	HRESULT(STDMETHODCALLTYPE * put_UserName) (IWSManConnectionOptions * This, BSTR name);
	HRESULT(STDMETHODCALLTYPE * put_Password) (IWSManConnectionOptions * This, BSTR password);
	END_INTERFACE
}  IWSManConnectionOptionsVtbl;
interface IWSManConnectionOptions
{
	CONST_VTBL struct IWSManConnectionOptionsVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IWSManConnectionOptions_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IWSManConnectionOptions_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IWSManConnectionOptions_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IWSManConnectionOptions_GetTypeInfoCount(This,pctinfo) ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define IWSManConnectionOptions_GetTypeInfo(This,iTInfo,lcid,ppTInfo) ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define IWSManConnectionOptions_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define IWSManConnectionOptions_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define IWSManConnectionOptions_get_UserName(This,name) ( (This)->lpVtbl -> get_UserName(This,name) )
#define IWSManConnectionOptions_put_UserName(This,name) ( (This)->lpVtbl -> put_UserName(This,name) )
#define IWSManConnectionOptions_put_Password(This,password) ( (This)->lpVtbl -> put_Password(This,password) )
#endif
#endif
#ifndef __IWSManConnectionOptionsEx_INTERFACE_DEFINED__
#define __IWSManConnectionOptionsEx_INTERFACE_DEFINED__
extern const IID IID_IWSManConnectionOptionsEx;
typedef struct IWSManConnectionOptionsExVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IWSManConnectionOptionsEx * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IWSManConnectionOptionsEx * This);
	ULONG(STDMETHODCALLTYPE * Release) (IWSManConnectionOptionsEx * This);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfoCount) (IWSManConnectionOptionsEx * This, UINT * pctinfo);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfo) (IWSManConnectionOptionsEx * This, UINT iTInfo, LCID lcid, ITypeInfo ** ppTInfo);
	HRESULT(STDMETHODCALLTYPE * GetIDsOfNames) (IWSManConnectionOptionsEx * This, REFIID riid, LPOLESTR * rgszNames, UINT cNames, LCID lcid, DISPID * rgDispId);
	HRESULT(STDMETHODCALLTYPE * Invoke) (IWSManConnectionOptionsEx * This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS * pDispParams, VARIANT * pVarResult, EXCEPINFO * pExcepInfo, UINT * puArgErr);
	HRESULT(STDMETHODCALLTYPE * get_UserName) (IWSManConnectionOptionsEx * This, BSTR * name);
	HRESULT(STDMETHODCALLTYPE * put_UserName) (IWSManConnectionOptionsEx * This, BSTR name);
	HRESULT(STDMETHODCALLTYPE * put_Password) (IWSManConnectionOptionsEx * This, BSTR password);
	HRESULT(STDMETHODCALLTYPE * get_CertificateThumbprint) (IWSManConnectionOptionsEx * This, BSTR * thumbprint);
	HRESULT(STDMETHODCALLTYPE * put_CertificateThumbprint) (IWSManConnectionOptionsEx * This, BSTR thumbprint);
	END_INTERFACE
}  IWSManConnectionOptionsExVtbl;
interface IWSManConnectionOptionsEx
{
	CONST_VTBL struct IWSManConnectionOptionsExVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IWSManConnectionOptionsEx_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IWSManConnectionOptionsEx_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IWSManConnectionOptionsEx_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IWSManConnectionOptionsEx_GetTypeInfoCount(This,pctinfo) ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define IWSManConnectionOptionsEx_GetTypeInfo(This,iTInfo,lcid,ppTInfo) ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define IWSManConnectionOptionsEx_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define IWSManConnectionOptionsEx_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define IWSManConnectionOptionsEx_get_UserName(This,name) ( (This)->lpVtbl -> get_UserName(This,name) )
#define IWSManConnectionOptionsEx_put_UserName(This,name) ( (This)->lpVtbl -> put_UserName(This,name) )
#define IWSManConnectionOptionsEx_put_Password(This,password) ( (This)->lpVtbl -> put_Password(This,password) )
#define IWSManConnectionOptionsEx_get_CertificateThumbprint(This,thumbprint) ( (This)->lpVtbl -> get_CertificateThumbprint(This,thumbprint) )
#define IWSManConnectionOptionsEx_put_CertificateThumbprint(This,thumbprint) ( (This)->lpVtbl -> put_CertificateThumbprint(This,thumbprint) )
#endif
#endif
#ifndef __IWSManConnectionOptionsEx2_INTERFACE_DEFINED__
#define __IWSManConnectionOptionsEx2_INTERFACE_DEFINED__
extern const IID IID_IWSManConnectionOptionsEx2;
typedef struct IWSManConnectionOptionsEx2Vtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IWSManConnectionOptionsEx2 * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IWSManConnectionOptionsEx2 * This);
	ULONG(STDMETHODCALLTYPE * Release) (IWSManConnectionOptionsEx2 * This);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfoCount) (IWSManConnectionOptionsEx2 * This, UINT * pctinfo);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfo) (IWSManConnectionOptionsEx2 * This, UINT iTInfo, LCID lcid, ITypeInfo ** ppTInfo);
	HRESULT(STDMETHODCALLTYPE * GetIDsOfNames) (IWSManConnectionOptionsEx2 * This, REFIID riid, LPOLESTR * rgszNames, UINT cNames, LCID lcid, DISPID * rgDispId);
	HRESULT(STDMETHODCALLTYPE * Invoke) (IWSManConnectionOptionsEx2 * This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS * pDispParams, VARIANT * pVarResult, EXCEPINFO * pExcepInfo, UINT * puArgErr);
	HRESULT(STDMETHODCALLTYPE * get_UserName) (IWSManConnectionOptionsEx2 * This, BSTR * name);
	HRESULT(STDMETHODCALLTYPE * put_UserName) (IWSManConnectionOptionsEx2 * This, BSTR name);
	HRESULT(STDMETHODCALLTYPE * put_Password) (IWSManConnectionOptionsEx2 * This, BSTR password);
	HRESULT(STDMETHODCALLTYPE * get_CertificateThumbprint) (IWSManConnectionOptionsEx2 * This, BSTR * thumbprint);
	HRESULT(STDMETHODCALLTYPE * put_CertificateThumbprint) (IWSManConnectionOptionsEx2 * This, BSTR thumbprint);
	HRESULT(STDMETHODCALLTYPE * SetProxy) (IWSManConnectionOptionsEx2 * This, long accessType, long authenticationMechanism, BSTR userName, BSTR password);
	HRESULT(STDMETHODCALLTYPE * ProxyIEConfig) (IWSManConnectionOptionsEx2 * This, long *value);
	HRESULT(STDMETHODCALLTYPE * ProxyWinHttpConfig) (IWSManConnectionOptionsEx2 * This, long *value);
	HRESULT(STDMETHODCALLTYPE * ProxyAutoDetect) (IWSManConnectionOptionsEx2 * This, long *value);
	HRESULT(STDMETHODCALLTYPE * ProxyNoProxyServer) (IWSManConnectionOptionsEx2 * This, long *value);
	HRESULT(STDMETHODCALLTYPE * ProxyAuthenticationUseNegotiate) (IWSManConnectionOptionsEx2 * This, long *value);
	HRESULT(STDMETHODCALLTYPE * ProxyAuthenticationUseBasic) (IWSManConnectionOptionsEx2 * This, long *value);
	HRESULT(STDMETHODCALLTYPE * ProxyAuthenticationUseDigest) (IWSManConnectionOptionsEx2 * This, long *value);
	END_INTERFACE
}  IWSManConnectionOptionsEx2Vtbl;
interface IWSManConnectionOptionsEx2
{
	CONST_VTBL struct IWSManConnectionOptionsEx2Vtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IWSManConnectionOptionsEx2_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IWSManConnectionOptionsEx2_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IWSManConnectionOptionsEx2_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IWSManConnectionOptionsEx2_GetTypeInfoCount(This,pctinfo) ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define IWSManConnectionOptionsEx2_GetTypeInfo(This,iTInfo,lcid,ppTInfo) ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define IWSManConnectionOptionsEx2_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define IWSManConnectionOptionsEx2_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define IWSManConnectionOptionsEx2_get_UserName(This,name) ( (This)->lpVtbl -> get_UserName(This,name) )
#define IWSManConnectionOptionsEx2_put_UserName(This,name) ( (This)->lpVtbl -> put_UserName(This,name) )
#define IWSManConnectionOptionsEx2_put_Password(This,password) ( (This)->lpVtbl -> put_Password(This,password) )
#define IWSManConnectionOptionsEx2_get_CertificateThumbprint(This,thumbprint) ( (This)->lpVtbl -> get_CertificateThumbprint(This,thumbprint) )
#define IWSManConnectionOptionsEx2_put_CertificateThumbprint(This,thumbprint) ( (This)->lpVtbl -> put_CertificateThumbprint(This,thumbprint) )
#define IWSManConnectionOptionsEx2_SetProxy(This,accessType,authenticationMechanism,userName,password) ( (This)->lpVtbl -> SetProxy(This,accessType,authenticationMechanism,userName,password) )
#define IWSManConnectionOptionsEx2_ProxyIEConfig(This,value) ( (This)->lpVtbl -> ProxyIEConfig(This,value) )
#define IWSManConnectionOptionsEx2_ProxyWinHttpConfig(This,value) ( (This)->lpVtbl -> ProxyWinHttpConfig(This,value) )
#define IWSManConnectionOptionsEx2_ProxyAutoDetect(This,value) ( (This)->lpVtbl -> ProxyAutoDetect(This,value) )
#define IWSManConnectionOptionsEx2_ProxyNoProxyServer(This,value) ( (This)->lpVtbl -> ProxyNoProxyServer(This,value) )
#define IWSManConnectionOptionsEx2_ProxyAuthenticationUseNegotiate(This,value) ( (This)->lpVtbl -> ProxyAuthenticationUseNegotiate(This,value) )
#define IWSManConnectionOptionsEx2_ProxyAuthenticationUseBasic(This,value) ( (This)->lpVtbl -> ProxyAuthenticationUseBasic(This,value) )
#define IWSManConnectionOptionsEx2_ProxyAuthenticationUseDigest(This,value) ( (This)->lpVtbl -> ProxyAuthenticationUseDigest(This,value) )
#endif
#endif
#ifndef __IWSManSession_INTERFACE_DEFINED__
#define __IWSManSession_INTERFACE_DEFINED__
extern const IID IID_IWSManSession;
typedef struct IWSManSessionVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IWSManSession * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IWSManSession * This);
	ULONG(STDMETHODCALLTYPE * Release) (IWSManSession * This);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfoCount) (IWSManSession * This, UINT * pctinfo);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfo) (IWSManSession * This, UINT iTInfo, LCID lcid, ITypeInfo ** ppTInfo);
	HRESULT(STDMETHODCALLTYPE * GetIDsOfNames) (IWSManSession * This, REFIID riid, LPOLESTR * rgszNames, UINT cNames, LCID lcid, DISPID * rgDispId);
	HRESULT(STDMETHODCALLTYPE * Invoke) (IWSManSession * This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS * pDispParams, VARIANT * pVarResult, EXCEPINFO * pExcepInfo, UINT * puArgErr);
	HRESULT(STDMETHODCALLTYPE * Get) (IWSManSession * This, VARIANT resourceUri, long flags, BSTR * resource);
	HRESULT(STDMETHODCALLTYPE * Put) (IWSManSession * This, VARIANT resourceUri, BSTR resource, long flags, BSTR * resultResource);
	HRESULT(STDMETHODCALLTYPE * Create) (IWSManSession * This, VARIANT resourceUri, BSTR resource, long flags, BSTR * newUri);
	HRESULT(STDMETHODCALLTYPE * Delete) (IWSManSession * This, VARIANT resourceUri, long flags);
	HRESULT(STDMETHODCALLTYPE * Invoke2) (IWSManSession * This, BSTR actionUri, VARIANT resourceUri, BSTR parameters, long flags, BSTR * result);
	HRESULT(STDMETHODCALLTYPE * Enumerate) (IWSManSession * This, VARIANT resourceUri, BSTR filter, BSTR dialect, long flags, IDispatch ** resultSet);
	HRESULT(STDMETHODCALLTYPE * Identify) (IWSManSession * This, long flags, BSTR * result);
	HRESULT(STDMETHODCALLTYPE * get_Error) (IWSManSession * This, BSTR * value);
	HRESULT(STDMETHODCALLTYPE * get_BatchItems) (IWSManSession * This, long *value);
	HRESULT(STDMETHODCALLTYPE * put_BatchItems) (IWSManSession * This, long value);
	HRESULT(STDMETHODCALLTYPE * get_Timeout) (IWSManSession * This, long *value);
	HRESULT(STDMETHODCALLTYPE * put_Timeout) (IWSManSession * This, long value);
	END_INTERFACE
}  IWSManSessionVtbl;
interface IWSManSession
{
	CONST_VTBL struct IWSManSessionVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IWSManSession_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IWSManSession_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IWSManSession_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IWSManSession_GetTypeInfoCount(This,pctinfo) ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define IWSManSession_GetTypeInfo(This,iTInfo,lcid,ppTInfo) ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define IWSManSession_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define IWSManSession_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define IWSManSession_Get(This,resourceUri,flags,resource) ( (This)->lpVtbl -> Get(This,resourceUri,flags,resource) )
#define IWSManSession_Put(This,resourceUri,resource,flags,resultResource) ( (This)->lpVtbl -> Put(This,resourceUri,resource,flags,resultResource) )
#define IWSManSession_Create(This,resourceUri,resource,flags,newUri) ( (This)->lpVtbl -> Create(This,resourceUri,resource,flags,newUri) )
#define IWSManSession_Delete(This,resourceUri,flags) ( (This)->lpVtbl -> Delete(This,resourceUri,flags) )
#define IWSManSession_Invoke2(This,actionUri,resourceUri,parameters,flags,result) ( (This)->lpVtbl -> Invoke(This,actionUri,resourceUri,parameters,flags,result) )
#define IWSManSession_Enumerate(This,resourceUri,filter,dialect,flags,resultSet) ( (This)->lpVtbl -> Enumerate(This,resourceUri,filter,dialect,flags,resultSet) )
#define IWSManSession_Identify(This,flags,result) ( (This)->lpVtbl -> Identify(This,flags,result) )
#define IWSManSession_get_Error(This,value) ( (This)->lpVtbl -> get_Error(This,value) )
#define IWSManSession_get_BatchItems(This,value) ( (This)->lpVtbl -> get_BatchItems(This,value) )
#define IWSManSession_put_BatchItems(This,value) ( (This)->lpVtbl -> put_BatchItems(This,value) )
#define IWSManSession_get_Timeout(This,value) ( (This)->lpVtbl -> get_Timeout(This,value) )
#define IWSManSession_put_Timeout(This,value) ( (This)->lpVtbl -> put_Timeout(This,value) )
#endif
#endif
#ifndef __IWSManEnumerator_INTERFACE_DEFINED__
#define __IWSManEnumerator_INTERFACE_DEFINED__
extern const IID IID_IWSManEnumerator;
typedef struct IWSManEnumeratorVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IWSManEnumerator * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IWSManEnumerator * This);
	ULONG(STDMETHODCALLTYPE * Release) (IWSManEnumerator * This);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfoCount) (IWSManEnumerator * This, UINT * pctinfo);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfo) (IWSManEnumerator * This, UINT iTInfo, LCID lcid, ITypeInfo ** ppTInfo);
	HRESULT(STDMETHODCALLTYPE * GetIDsOfNames) (IWSManEnumerator * This, REFIID riid, LPOLESTR * rgszNames, UINT cNames, LCID lcid, DISPID * rgDispId);
	HRESULT(STDMETHODCALLTYPE * Invoke) (IWSManEnumerator * This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS * pDispParams, VARIANT * pVarResult, EXCEPINFO * pExcepInfo, UINT * puArgErr);
	HRESULT(STDMETHODCALLTYPE * ReadItem) (IWSManEnumerator * This, BSTR * resource);
	HRESULT(STDMETHODCALLTYPE * get_AtEndOfStream) (IWSManEnumerator * This, VARIANT_BOOL * eos);
	HRESULT(STDMETHODCALLTYPE * get_Error) (IWSManEnumerator * This, BSTR * value);
	END_INTERFACE
}  IWSManEnumeratorVtbl;
interface IWSManEnumerator
{
	CONST_VTBL struct IWSManEnumeratorVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IWSManEnumerator_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IWSManEnumerator_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IWSManEnumerator_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IWSManEnumerator_GetTypeInfoCount(This,pctinfo) ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define IWSManEnumerator_GetTypeInfo(This,iTInfo,lcid,ppTInfo) ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define IWSManEnumerator_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define IWSManEnumerator_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define IWSManEnumerator_ReadItem(This,resource) ( (This)->lpVtbl -> ReadItem(This,resource) )
#define IWSManEnumerator_get_AtEndOfStream(This,eos) ( (This)->lpVtbl -> get_AtEndOfStream(This,eos) )
#define IWSManEnumerator_get_Error(This,value) ( (This)->lpVtbl -> get_Error(This,value) )
#endif
#endif
#ifndef __IWSManResourceLocator_INTERFACE_DEFINED__
#define __IWSManResourceLocator_INTERFACE_DEFINED__
extern const IID IID_IWSManResourceLocator;
typedef struct IWSManResourceLocatorVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IWSManResourceLocator * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IWSManResourceLocator * This);
	ULONG(STDMETHODCALLTYPE * Release) (IWSManResourceLocator * This);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfoCount) (IWSManResourceLocator * This, UINT * pctinfo);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfo) (IWSManResourceLocator * This, UINT iTInfo, LCID lcid, ITypeInfo ** ppTInfo);
	HRESULT(STDMETHODCALLTYPE * GetIDsOfNames) (IWSManResourceLocator * This, REFIID riid, LPOLESTR * rgszNames, UINT cNames, LCID lcid, DISPID * rgDispId);
	HRESULT(STDMETHODCALLTYPE * Invoke) (IWSManResourceLocator * This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS * pDispParams, VARIANT * pVarResult, EXCEPINFO * pExcepInfo, UINT * puArgErr);
	HRESULT(STDMETHODCALLTYPE * put_ResourceURI) (IWSManResourceLocator * This, BSTR uri);
	HRESULT(STDMETHODCALLTYPE * get_ResourceURI) (IWSManResourceLocator * This, BSTR * uri);
	HRESULT(STDMETHODCALLTYPE * AddSelector) (IWSManResourceLocator * This, BSTR resourceSelName, VARIANT selValue);
	HRESULT(STDMETHODCALLTYPE * ClearSelectors) (IWSManResourceLocator * This);
	HRESULT(STDMETHODCALLTYPE * get_FragmentPath) (IWSManResourceLocator * This, BSTR * text);
	HRESULT(STDMETHODCALLTYPE * put_FragmentPath) (IWSManResourceLocator * This, BSTR text);
	HRESULT(STDMETHODCALLTYPE * get_FragmentDialect) (IWSManResourceLocator * This, BSTR * text);
	HRESULT(STDMETHODCALLTYPE * put_FragmentDialect) (IWSManResourceLocator * This, BSTR text);
	HRESULT(STDMETHODCALLTYPE * AddOption) (IWSManResourceLocator * This, BSTR OptionName, VARIANT OptionValue, BOOL mustComply);
	HRESULT(STDMETHODCALLTYPE * put_MustUnderstandOptions) (IWSManResourceLocator * This, BOOL mustUnderstand);
	HRESULT(STDMETHODCALLTYPE * get_MustUnderstandOptions) (IWSManResourceLocator * This, BOOL * mustUnderstand);
	HRESULT(STDMETHODCALLTYPE * ClearOptions) (IWSManResourceLocator * This);
	HRESULT(STDMETHODCALLTYPE * get_Error) (IWSManResourceLocator * This, BSTR * value);
	END_INTERFACE
}  IWSManResourceLocatorVtbl;
interface IWSManResourceLocator
{
	CONST_VTBL struct IWSManResourceLocatorVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IWSManResourceLocator_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IWSManResourceLocator_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IWSManResourceLocator_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IWSManResourceLocator_GetTypeInfoCount(This,pctinfo) ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define IWSManResourceLocator_GetTypeInfo(This,iTInfo,lcid,ppTInfo) ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define IWSManResourceLocator_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define IWSManResourceLocator_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define IWSManResourceLocator_put_ResourceURI(This,uri) ( (This)->lpVtbl -> put_ResourceURI(This,uri) )
#define IWSManResourceLocator_get_ResourceURI(This,uri) ( (This)->lpVtbl -> get_ResourceURI(This,uri) )
#define IWSManResourceLocator_AddSelector(This,resourceSelName,selValue) ( (This)->lpVtbl -> AddSelector(This,resourceSelName,selValue) )
#define IWSManResourceLocator_ClearSelectors(This) ( (This)->lpVtbl -> ClearSelectors(This) )
#define IWSManResourceLocator_get_FragmentPath(This,text) ( (This)->lpVtbl -> get_FragmentPath(This,text) )
#define IWSManResourceLocator_put_FragmentPath(This,text) ( (This)->lpVtbl -> put_FragmentPath(This,text) )
#define IWSManResourceLocator_get_FragmentDialect(This,text) ( (This)->lpVtbl -> get_FragmentDialect(This,text) )
#define IWSManResourceLocator_put_FragmentDialect(This,text) ( (This)->lpVtbl -> put_FragmentDialect(This,text) )
#define IWSManResourceLocator_AddOption(This,OptionName,OptionValue,mustComply) ( (This)->lpVtbl -> AddOption(This,OptionName,OptionValue,mustComply) )
#define IWSManResourceLocator_put_MustUnderstandOptions(This,mustUnderstand) ( (This)->lpVtbl -> put_MustUnderstandOptions(This,mustUnderstand) )
#define IWSManResourceLocator_get_MustUnderstandOptions(This,mustUnderstand) ( (This)->lpVtbl -> get_MustUnderstandOptions(This,mustUnderstand) )
#define IWSManResourceLocator_ClearOptions(This) ( (This)->lpVtbl -> ClearOptions(This) )
#define IWSManResourceLocator_get_Error(This,value) ( (This)->lpVtbl -> get_Error(This,value) )
#endif
#endif
#ifndef __IWSManResourceLocatorInternal_INTERFACE_DEFINED__
#define __IWSManResourceLocatorInternal_INTERFACE_DEFINED__
extern const IID IID_IWSManResourceLocatorInternal;
typedef struct IWSManResourceLocatorInternalVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IWSManResourceLocatorInternal * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IWSManResourceLocatorInternal * This);
	ULONG(STDMETHODCALLTYPE * Release) (IWSManResourceLocatorInternal * This);
	END_INTERFACE
}  IWSManResourceLocatorInternalVtbl;
interface IWSManResourceLocatorInternal
{
	CONST_VTBL struct IWSManResourceLocatorInternalVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IWSManResourceLocatorInternal_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IWSManResourceLocatorInternal_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IWSManResourceLocatorInternal_Release(This) ( (This)->lpVtbl -> Release(This) )
#endif
#endif
extern const CLSID CLSID_WSMan;
#ifndef __IWSManInternal_INTERFACE_DEFINED__
#define __IWSManInternal_INTERFACE_DEFINED__
extern const IID IID_IWSManInternal;
typedef struct IWSManInternalVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IWSManInternal * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IWSManInternal * This);
	ULONG(STDMETHODCALLTYPE * Release) (IWSManInternal * This);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfoCount) (IWSManInternal * This, UINT * pctinfo);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfo) (IWSManInternal * This, UINT iTInfo, LCID lcid, ITypeInfo ** ppTInfo);
	HRESULT(STDMETHODCALLTYPE * GetIDsOfNames) (IWSManInternal * This, REFIID riid, LPOLESTR * rgszNames, UINT cNames, LCID lcid, DISPID * rgDispId);
	HRESULT(STDMETHODCALLTYPE * Invoke) (IWSManInternal * This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS * pDispParams, VARIANT * pVarResult, EXCEPINFO * pExcepInfo, UINT * puArgErr);
	HRESULT(STDMETHODCALLTYPE * ConfigSDDL) (IWSManInternal * This, IDispatch * session, VARIANT resourceUri, long flags, BSTR * resource);
	END_INTERFACE
}  IWSManInternalVtbl;
interface IWSManInternal
{
	CONST_VTBL struct IWSManInternalVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IWSManInternal_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IWSManInternal_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IWSManInternal_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IWSManInternal_GetTypeInfoCount(This,pctinfo) ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define IWSManInternal_GetTypeInfo(This,iTInfo,lcid,ppTInfo) ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define IWSManInternal_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define IWSManInternal_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define IWSManInternal_ConfigSDDL(This,session,resourceUri,flags,resource) ( (This)->lpVtbl -> ConfigSDDL(This,session,resourceUri,flags,resource) )
#endif
#endif
extern const CLSID CLSID_WSManInternal;
#endif
#endif

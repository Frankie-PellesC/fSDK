/*+@@file@@----------------------------------------------------------------*//*!
 \file		xenroll.h
 \par Description 
            Extension and update of headers for PellesC compiler suite.
 \par Project: 
            PellesC Headers extension
 \date		Created  on Mon Sep 19 19:41:11 2016
 \date		Modified on Mon Sep 19 19:41:11 2016
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
#ifndef __xenroll_h__
#define __xenroll_h__
#if __POCC__ >= 500
#pragma once
#endif
#ifndef __ICEnroll_FWD_DEFINED__
#define __ICEnroll_FWD_DEFINED__
typedef interface ICEnroll ICEnroll;
#endif
#ifndef __ICEnroll2_FWD_DEFINED__
#define __ICEnroll2_FWD_DEFINED__
typedef interface ICEnroll2 ICEnroll2;
#endif
#ifndef __ICEnroll3_FWD_DEFINED__
#define __ICEnroll3_FWD_DEFINED__
typedef interface ICEnroll3 ICEnroll3;
#endif
#ifndef __ICEnroll4_FWD_DEFINED__
#define __ICEnroll4_FWD_DEFINED__
typedef interface ICEnroll4 ICEnroll4;
#endif
#ifndef __IEnroll_FWD_DEFINED__
#define __IEnroll_FWD_DEFINED__
typedef interface IEnroll IEnroll;
#endif
#ifndef __IEnroll2_FWD_DEFINED__
#define __IEnroll2_FWD_DEFINED__
typedef interface IEnroll2 IEnroll2;
#endif
#ifndef __IEnroll4_FWD_DEFINED__
#define __IEnroll4_FWD_DEFINED__
typedef interface IEnroll4 IEnroll4;
#endif
#ifndef __CEnroll2_FWD_DEFINED__
#define __CEnroll2_FWD_DEFINED__
typedef struct CEnroll2 CEnroll2;
#endif
#ifndef __CEnroll_FWD_DEFINED__
#define __CEnroll_FWD_DEFINED__
typedef struct CEnroll CEnroll;
#endif
#include <oaidl.h>
#include <ocidl.h>
#include <wincrypt.h>
#ifndef __ICEnroll_INTERFACE_DEFINED__
#define __ICEnroll_INTERFACE_DEFINED__
extern const IID IID_ICEnroll;
typedef struct ICEnrollVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (ICEnroll * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (ICEnroll * This);
	ULONG(STDMETHODCALLTYPE * Release) (ICEnroll * This);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfoCount) (ICEnroll * This, UINT * pctinfo);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfo) (ICEnroll * This, UINT iTInfo, LCID lcid, ITypeInfo ** ppTInfo);
	HRESULT(STDMETHODCALLTYPE * GetIDsOfNames) (ICEnroll * This, REFIID riid, LPOLESTR * rgszNames, UINT cNames, LCID lcid, DISPID * rgDispId);
	HRESULT(STDMETHODCALLTYPE * Invoke) (ICEnroll * This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS * pDispParams, VARIANT * pVarResult, EXCEPINFO * pExcepInfo, UINT * puArgErr);
	HRESULT(STDMETHODCALLTYPE * createFilePKCS10) (ICEnroll * This, BSTR DNName, BSTR Usage, BSTR wszPKCS10FileName);
	HRESULT(STDMETHODCALLTYPE * acceptFilePKCS7) (ICEnroll * This, BSTR wszPKCS7FileName);
	HRESULT(STDMETHODCALLTYPE * createPKCS10) (ICEnroll * This, BSTR DNName, BSTR Usage, BSTR * pPKCS10);
	HRESULT(STDMETHODCALLTYPE * acceptPKCS7) (ICEnroll * This, BSTR PKCS7);
	HRESULT(STDMETHODCALLTYPE * getCertFromPKCS7) (ICEnroll * This, BSTR wszPKCS7, BSTR * pbstrCert);
	HRESULT(STDMETHODCALLTYPE * enumProviders) (ICEnroll * This, LONG dwIndex, LONG dwFlags, BSTR * pbstrProvName);
	HRESULT(STDMETHODCALLTYPE * enumContainers) (ICEnroll * This, LONG dwIndex, BSTR * pbstr);
	HRESULT(STDMETHODCALLTYPE * freeRequestInfo) (ICEnroll * This, BSTR PKCS7OrPKCS10);
	HRESULT(STDMETHODCALLTYPE * get_MyStoreName) (ICEnroll * This, BSTR * pbstrName);
	HRESULT(STDMETHODCALLTYPE * put_MyStoreName) (ICEnroll * This, BSTR bstrName);
	HRESULT(STDMETHODCALLTYPE * get_MyStoreType) (ICEnroll * This, BSTR * pbstrType);
	HRESULT(STDMETHODCALLTYPE * put_MyStoreType) (ICEnroll * This, BSTR bstrType);
	HRESULT(STDMETHODCALLTYPE * get_MyStoreFlags) (ICEnroll * This, LONG * pdwFlags);
	HRESULT(STDMETHODCALLTYPE * put_MyStoreFlags) (ICEnroll * This, LONG dwFlags);
	HRESULT(STDMETHODCALLTYPE * get_CAStoreName) (ICEnroll * This, BSTR * pbstrName);
	HRESULT(STDMETHODCALLTYPE * put_CAStoreName) (ICEnroll * This, BSTR bstrName);
	HRESULT(STDMETHODCALLTYPE * get_CAStoreType) (ICEnroll * This, BSTR * pbstrType);
	HRESULT(STDMETHODCALLTYPE * put_CAStoreType) (ICEnroll * This, BSTR bstrType);
	HRESULT(STDMETHODCALLTYPE * get_CAStoreFlags) (ICEnroll * This, LONG * pdwFlags);
	HRESULT(STDMETHODCALLTYPE * put_CAStoreFlags) (ICEnroll * This, LONG dwFlags);
	HRESULT(STDMETHODCALLTYPE * get_RootStoreName) (ICEnroll * This, BSTR * pbstrName);
	HRESULT(STDMETHODCALLTYPE * put_RootStoreName) (ICEnroll * This, BSTR bstrName);
	HRESULT(STDMETHODCALLTYPE * get_RootStoreType) (ICEnroll * This, BSTR * pbstrType);
	HRESULT(STDMETHODCALLTYPE * put_RootStoreType) (ICEnroll * This, BSTR bstrType);
	HRESULT(STDMETHODCALLTYPE * get_RootStoreFlags) (ICEnroll * This, LONG * pdwFlags);
	HRESULT(STDMETHODCALLTYPE * put_RootStoreFlags) (ICEnroll * This, LONG dwFlags);
	HRESULT(STDMETHODCALLTYPE * get_RequestStoreName) (ICEnroll * This, BSTR * pbstrName);
	HRESULT(STDMETHODCALLTYPE * put_RequestStoreName) (ICEnroll * This, BSTR bstrName);
	HRESULT(STDMETHODCALLTYPE * get_RequestStoreType) (ICEnroll * This, BSTR * pbstrType);
	HRESULT(STDMETHODCALLTYPE * put_RequestStoreType) (ICEnroll * This, BSTR bstrType);
	HRESULT(STDMETHODCALLTYPE * get_RequestStoreFlags) (ICEnroll * This, LONG * pdwFlags);
	HRESULT(STDMETHODCALLTYPE * put_RequestStoreFlags) (ICEnroll * This, LONG dwFlags);
	HRESULT(STDMETHODCALLTYPE * get_ContainerName) (ICEnroll * This, BSTR * pbstrContainer);
	HRESULT(STDMETHODCALLTYPE * put_ContainerName) (ICEnroll * This, BSTR bstrContainer);
	HRESULT(STDMETHODCALLTYPE * get_ProviderName) (ICEnroll * This, BSTR * pbstrProvider);
	HRESULT(STDMETHODCALLTYPE * put_ProviderName) (ICEnroll * This, BSTR bstrProvider);
	HRESULT(STDMETHODCALLTYPE * get_ProviderType) (ICEnroll * This, LONG * pdwType);
	HRESULT(STDMETHODCALLTYPE * put_ProviderType) (ICEnroll * This, LONG dwType);
	HRESULT(STDMETHODCALLTYPE * get_KeySpec) (ICEnroll * This, LONG * pdw);
	HRESULT(STDMETHODCALLTYPE * put_KeySpec) (ICEnroll * This, LONG dw);
	HRESULT(STDMETHODCALLTYPE * get_ProviderFlags) (ICEnroll * This, LONG * pdwFlags);
	HRESULT(STDMETHODCALLTYPE * put_ProviderFlags) (ICEnroll * This, LONG dwFlags);
	HRESULT(STDMETHODCALLTYPE * get_UseExistingKeySet) (ICEnroll * This, BOOL * fUseExistingKeys);
	HRESULT(STDMETHODCALLTYPE * put_UseExistingKeySet) (ICEnroll * This, BOOL fUseExistingKeys);
	HRESULT(STDMETHODCALLTYPE * get_GenKeyFlags) (ICEnroll * This, LONG * pdwFlags);
	HRESULT(STDMETHODCALLTYPE * put_GenKeyFlags) (ICEnroll * This, LONG dwFlags);
	HRESULT(STDMETHODCALLTYPE * get_DeleteRequestCert) (ICEnroll * This, BOOL * fDelete);
	HRESULT(STDMETHODCALLTYPE * put_DeleteRequestCert) (ICEnroll * This, BOOL fDelete);
	HRESULT(STDMETHODCALLTYPE * get_WriteCertToCSP) (ICEnroll * This, BOOL * fBool);
	HRESULT(STDMETHODCALLTYPE * put_WriteCertToCSP) (ICEnroll * This, BOOL fBool);
	HRESULT(STDMETHODCALLTYPE * get_SPCFileName) (ICEnroll * This, BSTR * pbstr);
	HRESULT(STDMETHODCALLTYPE * put_SPCFileName) (ICEnroll * This, BSTR bstr);
	HRESULT(STDMETHODCALLTYPE * get_PVKFileName) (ICEnroll * This, BSTR * pbstr);
	HRESULT(STDMETHODCALLTYPE * put_PVKFileName) (ICEnroll * This, BSTR bstr);
	HRESULT(STDMETHODCALLTYPE * get_HashAlgorithm) (ICEnroll * This, BSTR * pbstr);
	HRESULT(STDMETHODCALLTYPE * put_HashAlgorithm) (ICEnroll * This, BSTR bstr);
	END_INTERFACE
} ICEnrollVtbl;
interface ICEnroll
{
	CONST_VTBL struct ICEnrollVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define ICEnroll_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define ICEnroll_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define ICEnroll_Release(This) ( (This)->lpVtbl -> Release(This) )
#define ICEnroll_GetTypeInfoCount(This,pctinfo) ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define ICEnroll_GetTypeInfo(This,iTInfo,lcid,ppTInfo) ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define ICEnroll_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define ICEnroll_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define ICEnroll_createFilePKCS10(This,DNName,Usage,wszPKCS10FileName) ( (This)->lpVtbl -> createFilePKCS10(This,DNName,Usage,wszPKCS10FileName) )
#define ICEnroll_acceptFilePKCS7(This,wszPKCS7FileName) ( (This)->lpVtbl -> acceptFilePKCS7(This,wszPKCS7FileName) )
#define ICEnroll_createPKCS10(This,DNName,Usage,pPKCS10) ( (This)->lpVtbl -> createPKCS10(This,DNName,Usage,pPKCS10) )
#define ICEnroll_acceptPKCS7(This,PKCS7) ( (This)->lpVtbl -> acceptPKCS7(This,PKCS7) )
#define ICEnroll_getCertFromPKCS7(This,wszPKCS7,pbstrCert) ( (This)->lpVtbl -> getCertFromPKCS7(This,wszPKCS7,pbstrCert) )
#define ICEnroll_enumProviders(This,dwIndex,dwFlags,pbstrProvName) ( (This)->lpVtbl -> enumProviders(This,dwIndex,dwFlags,pbstrProvName) )
#define ICEnroll_enumContainers(This,dwIndex,pbstr) ( (This)->lpVtbl -> enumContainers(This,dwIndex,pbstr) )
#define ICEnroll_freeRequestInfo(This,PKCS7OrPKCS10) ( (This)->lpVtbl -> freeRequestInfo(This,PKCS7OrPKCS10) )
#define ICEnroll_get_MyStoreName(This,pbstrName) ( (This)->lpVtbl -> get_MyStoreName(This,pbstrName) )
#define ICEnroll_put_MyStoreName(This,bstrName) ( (This)->lpVtbl -> put_MyStoreName(This,bstrName) )
#define ICEnroll_get_MyStoreType(This,pbstrType) ( (This)->lpVtbl -> get_MyStoreType(This,pbstrType) )
#define ICEnroll_put_MyStoreType(This,bstrType) ( (This)->lpVtbl -> put_MyStoreType(This,bstrType) )
#define ICEnroll_get_MyStoreFlags(This,pdwFlags) ( (This)->lpVtbl -> get_MyStoreFlags(This,pdwFlags) )
#define ICEnroll_put_MyStoreFlags(This,dwFlags) ( (This)->lpVtbl -> put_MyStoreFlags(This,dwFlags) )
#define ICEnroll_get_CAStoreName(This,pbstrName) ( (This)->lpVtbl -> get_CAStoreName(This,pbstrName) )
#define ICEnroll_put_CAStoreName(This,bstrName) ( (This)->lpVtbl -> put_CAStoreName(This,bstrName) )
#define ICEnroll_get_CAStoreType(This,pbstrType) ( (This)->lpVtbl -> get_CAStoreType(This,pbstrType) )
#define ICEnroll_put_CAStoreType(This,bstrType) ( (This)->lpVtbl -> put_CAStoreType(This,bstrType) )
#define ICEnroll_get_CAStoreFlags(This,pdwFlags) ( (This)->lpVtbl -> get_CAStoreFlags(This,pdwFlags) )
#define ICEnroll_put_CAStoreFlags(This,dwFlags) ( (This)->lpVtbl -> put_CAStoreFlags(This,dwFlags) )
#define ICEnroll_get_RootStoreName(This,pbstrName) ( (This)->lpVtbl -> get_RootStoreName(This,pbstrName) )
#define ICEnroll_put_RootStoreName(This,bstrName) ( (This)->lpVtbl -> put_RootStoreName(This,bstrName) )
#define ICEnroll_get_RootStoreType(This,pbstrType) ( (This)->lpVtbl -> get_RootStoreType(This,pbstrType) )
#define ICEnroll_put_RootStoreType(This,bstrType) ( (This)->lpVtbl -> put_RootStoreType(This,bstrType) )
#define ICEnroll_get_RootStoreFlags(This,pdwFlags) ( (This)->lpVtbl -> get_RootStoreFlags(This,pdwFlags) )
#define ICEnroll_put_RootStoreFlags(This,dwFlags) ( (This)->lpVtbl -> put_RootStoreFlags(This,dwFlags) )
#define ICEnroll_get_RequestStoreName(This,pbstrName) ( (This)->lpVtbl -> get_RequestStoreName(This,pbstrName) )
#define ICEnroll_put_RequestStoreName(This,bstrName) ( (This)->lpVtbl -> put_RequestStoreName(This,bstrName) )
#define ICEnroll_get_RequestStoreType(This,pbstrType) ( (This)->lpVtbl -> get_RequestStoreType(This,pbstrType) )
#define ICEnroll_put_RequestStoreType(This,bstrType) ( (This)->lpVtbl -> put_RequestStoreType(This,bstrType) )
#define ICEnroll_get_RequestStoreFlags(This,pdwFlags) ( (This)->lpVtbl -> get_RequestStoreFlags(This,pdwFlags) )
#define ICEnroll_put_RequestStoreFlags(This,dwFlags) ( (This)->lpVtbl -> put_RequestStoreFlags(This,dwFlags) )
#define ICEnroll_get_ContainerName(This,pbstrContainer) ( (This)->lpVtbl -> get_ContainerName(This,pbstrContainer) )
#define ICEnroll_put_ContainerName(This,bstrContainer) ( (This)->lpVtbl -> put_ContainerName(This,bstrContainer) )
#define ICEnroll_get_ProviderName(This,pbstrProvider) ( (This)->lpVtbl -> get_ProviderName(This,pbstrProvider) )
#define ICEnroll_put_ProviderName(This,bstrProvider) ( (This)->lpVtbl -> put_ProviderName(This,bstrProvider) )
#define ICEnroll_get_ProviderType(This,pdwType) ( (This)->lpVtbl -> get_ProviderType(This,pdwType) )
#define ICEnroll_put_ProviderType(This,dwType) ( (This)->lpVtbl -> put_ProviderType(This,dwType) )
#define ICEnroll_get_KeySpec(This,pdw) ( (This)->lpVtbl -> get_KeySpec(This,pdw) )
#define ICEnroll_put_KeySpec(This,dw) ( (This)->lpVtbl -> put_KeySpec(This,dw) )
#define ICEnroll_get_ProviderFlags(This,pdwFlags) ( (This)->lpVtbl -> get_ProviderFlags(This,pdwFlags) )
#define ICEnroll_put_ProviderFlags(This,dwFlags) ( (This)->lpVtbl -> put_ProviderFlags(This,dwFlags) )
#define ICEnroll_get_UseExistingKeySet(This,fUseExistingKeys) ( (This)->lpVtbl -> get_UseExistingKeySet(This,fUseExistingKeys) )
#define ICEnroll_put_UseExistingKeySet(This,fUseExistingKeys) ( (This)->lpVtbl -> put_UseExistingKeySet(This,fUseExistingKeys) )
#define ICEnroll_get_GenKeyFlags(This,pdwFlags) ( (This)->lpVtbl -> get_GenKeyFlags(This,pdwFlags) )
#define ICEnroll_put_GenKeyFlags(This,dwFlags) ( (This)->lpVtbl -> put_GenKeyFlags(This,dwFlags) )
#define ICEnroll_get_DeleteRequestCert(This,fDelete) ( (This)->lpVtbl -> get_DeleteRequestCert(This,fDelete) )
#define ICEnroll_put_DeleteRequestCert(This,fDelete) ( (This)->lpVtbl -> put_DeleteRequestCert(This,fDelete) )
#define ICEnroll_get_WriteCertToCSP(This,fBool) ( (This)->lpVtbl -> get_WriteCertToCSP(This,fBool) )
#define ICEnroll_put_WriteCertToCSP(This,fBool) ( (This)->lpVtbl -> put_WriteCertToCSP(This,fBool) )
#define ICEnroll_get_SPCFileName(This,pbstr) ( (This)->lpVtbl -> get_SPCFileName(This,pbstr) )
#define ICEnroll_put_SPCFileName(This,bstr) ( (This)->lpVtbl -> put_SPCFileName(This,bstr) )
#define ICEnroll_get_PVKFileName(This,pbstr) ( (This)->lpVtbl -> get_PVKFileName(This,pbstr) )
#define ICEnroll_put_PVKFileName(This,bstr) ( (This)->lpVtbl -> put_PVKFileName(This,bstr) )
#define ICEnroll_get_HashAlgorithm(This,pbstr) ( (This)->lpVtbl -> get_HashAlgorithm(This,pbstr) )
#define ICEnroll_put_HashAlgorithm(This,bstr) ( (This)->lpVtbl -> put_HashAlgorithm(This,bstr) )
#endif
#endif
#ifndef __ICEnroll2_INTERFACE_DEFINED__
#define __ICEnroll2_INTERFACE_DEFINED__
extern const IID IID_ICEnroll2;
typedef struct ICEnroll2Vtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (ICEnroll2 * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (ICEnroll2 * This);
	ULONG(STDMETHODCALLTYPE * Release) (ICEnroll2 * This);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfoCount) (ICEnroll2 * This, UINT * pctinfo);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfo) (ICEnroll2 * This, UINT iTInfo, LCID lcid, ITypeInfo ** ppTInfo);
	HRESULT(STDMETHODCALLTYPE * GetIDsOfNames) (ICEnroll2 * This, REFIID riid, LPOLESTR * rgszNames, UINT cNames, LCID lcid, DISPID * rgDispId);
	HRESULT(STDMETHODCALLTYPE * Invoke) (ICEnroll2 * This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS * pDispParams, VARIANT * pVarResult, EXCEPINFO * pExcepInfo, UINT * puArgErr);
	HRESULT(STDMETHODCALLTYPE * createFilePKCS10) (ICEnroll2 * This, BSTR DNName, BSTR Usage, BSTR wszPKCS10FileName);
	HRESULT(STDMETHODCALLTYPE * acceptFilePKCS7) (ICEnroll2 * This, BSTR wszPKCS7FileName);
	HRESULT(STDMETHODCALLTYPE * createPKCS10) (ICEnroll2 * This, BSTR DNName, BSTR Usage, BSTR * pPKCS10);
	HRESULT(STDMETHODCALLTYPE * acceptPKCS7) (ICEnroll2 * This, BSTR PKCS7);
	HRESULT(STDMETHODCALLTYPE * getCertFromPKCS7) (ICEnroll2 * This, BSTR wszPKCS7, BSTR * pbstrCert);
	HRESULT(STDMETHODCALLTYPE * enumProviders) (ICEnroll2 * This, LONG dwIndex, LONG dwFlags, BSTR * pbstrProvName);
	HRESULT(STDMETHODCALLTYPE * enumContainers) (ICEnroll2 * This, LONG dwIndex, BSTR * pbstr);
	HRESULT(STDMETHODCALLTYPE * freeRequestInfo) (ICEnroll2 * This, BSTR PKCS7OrPKCS10);
	HRESULT(STDMETHODCALLTYPE * get_MyStoreName) (ICEnroll2 * This, BSTR * pbstrName);
	HRESULT(STDMETHODCALLTYPE * put_MyStoreName) (ICEnroll2 * This, BSTR bstrName);
	HRESULT(STDMETHODCALLTYPE * get_MyStoreType) (ICEnroll2 * This, BSTR * pbstrType);
	HRESULT(STDMETHODCALLTYPE * put_MyStoreType) (ICEnroll2 * This, BSTR bstrType);
	HRESULT(STDMETHODCALLTYPE * get_MyStoreFlags) (ICEnroll2 * This, LONG * pdwFlags);
	HRESULT(STDMETHODCALLTYPE * put_MyStoreFlags) (ICEnroll2 * This, LONG dwFlags);
	HRESULT(STDMETHODCALLTYPE * get_CAStoreName) (ICEnroll2 * This, BSTR * pbstrName);
	HRESULT(STDMETHODCALLTYPE * put_CAStoreName) (ICEnroll2 * This, BSTR bstrName);
	HRESULT(STDMETHODCALLTYPE * get_CAStoreType) (ICEnroll2 * This, BSTR * pbstrType);
	HRESULT(STDMETHODCALLTYPE * put_CAStoreType) (ICEnroll2 * This, BSTR bstrType);
	HRESULT(STDMETHODCALLTYPE * get_CAStoreFlags) (ICEnroll2 * This, LONG * pdwFlags);
	HRESULT(STDMETHODCALLTYPE * put_CAStoreFlags) (ICEnroll2 * This, LONG dwFlags);
	HRESULT(STDMETHODCALLTYPE * get_RootStoreName) (ICEnroll2 * This, BSTR * pbstrName);
	HRESULT(STDMETHODCALLTYPE * put_RootStoreName) (ICEnroll2 * This, BSTR bstrName);
	HRESULT(STDMETHODCALLTYPE * get_RootStoreType) (ICEnroll2 * This, BSTR * pbstrType);
	HRESULT(STDMETHODCALLTYPE * put_RootStoreType) (ICEnroll2 * This, BSTR bstrType);
	HRESULT(STDMETHODCALLTYPE * get_RootStoreFlags) (ICEnroll2 * This, LONG * pdwFlags);
	HRESULT(STDMETHODCALLTYPE * put_RootStoreFlags) (ICEnroll2 * This, LONG dwFlags);
	HRESULT(STDMETHODCALLTYPE * get_RequestStoreName) (ICEnroll2 * This, BSTR * pbstrName);
	HRESULT(STDMETHODCALLTYPE * put_RequestStoreName) (ICEnroll2 * This, BSTR bstrName);
	HRESULT(STDMETHODCALLTYPE * get_RequestStoreType) (ICEnroll2 * This, BSTR * pbstrType);
	HRESULT(STDMETHODCALLTYPE * put_RequestStoreType) (ICEnroll2 * This, BSTR bstrType);
	HRESULT(STDMETHODCALLTYPE * get_RequestStoreFlags) (ICEnroll2 * This, LONG * pdwFlags);
	HRESULT(STDMETHODCALLTYPE * put_RequestStoreFlags) (ICEnroll2 * This, LONG dwFlags);
	HRESULT(STDMETHODCALLTYPE * get_ContainerName) (ICEnroll2 * This, BSTR * pbstrContainer);
	HRESULT(STDMETHODCALLTYPE * put_ContainerName) (ICEnroll2 * This, BSTR bstrContainer);
	HRESULT(STDMETHODCALLTYPE * get_ProviderName) (ICEnroll2 * This, BSTR * pbstrProvider);
	HRESULT(STDMETHODCALLTYPE * put_ProviderName) (ICEnroll2 * This, BSTR bstrProvider);
	HRESULT(STDMETHODCALLTYPE * get_ProviderType) (ICEnroll2 * This, LONG * pdwType);
	HRESULT(STDMETHODCALLTYPE * put_ProviderType) (ICEnroll2 * This, LONG dwType);
	HRESULT(STDMETHODCALLTYPE * get_KeySpec) (ICEnroll2 * This, LONG * pdw);
	HRESULT(STDMETHODCALLTYPE * put_KeySpec) (ICEnroll2 * This, LONG dw);
	HRESULT(STDMETHODCALLTYPE * get_ProviderFlags) (ICEnroll2 * This, LONG * pdwFlags);
	HRESULT(STDMETHODCALLTYPE * put_ProviderFlags) (ICEnroll2 * This, LONG dwFlags);
	HRESULT(STDMETHODCALLTYPE * get_UseExistingKeySet) (ICEnroll2 * This, BOOL * fUseExistingKeys);
	HRESULT(STDMETHODCALLTYPE * put_UseExistingKeySet) (ICEnroll2 * This, BOOL fUseExistingKeys);
	HRESULT(STDMETHODCALLTYPE * get_GenKeyFlags) (ICEnroll2 * This, LONG * pdwFlags);
	HRESULT(STDMETHODCALLTYPE * put_GenKeyFlags) (ICEnroll2 * This, LONG dwFlags);
	HRESULT(STDMETHODCALLTYPE * get_DeleteRequestCert) (ICEnroll2 * This, BOOL * fDelete);
	HRESULT(STDMETHODCALLTYPE * put_DeleteRequestCert) (ICEnroll2 * This, BOOL fDelete);
	HRESULT(STDMETHODCALLTYPE * get_WriteCertToCSP) (ICEnroll2 * This, BOOL * fBool);
	HRESULT(STDMETHODCALLTYPE * put_WriteCertToCSP) (ICEnroll2 * This, BOOL fBool);
	HRESULT(STDMETHODCALLTYPE * get_SPCFileName) (ICEnroll2 * This, BSTR * pbstr);
	HRESULT(STDMETHODCALLTYPE * put_SPCFileName) (ICEnroll2 * This, BSTR bstr);
	HRESULT(STDMETHODCALLTYPE * get_PVKFileName) (ICEnroll2 * This, BSTR * pbstr);
	HRESULT(STDMETHODCALLTYPE * put_PVKFileName) (ICEnroll2 * This, BSTR bstr);
	HRESULT(STDMETHODCALLTYPE * get_HashAlgorithm) (ICEnroll2 * This, BSTR * pbstr);
	HRESULT(STDMETHODCALLTYPE * put_HashAlgorithm) (ICEnroll2 * This, BSTR bstr);
	HRESULT(STDMETHODCALLTYPE * addCertTypeToRequest) (ICEnroll2 * This, BSTR CertType);
	HRESULT(STDMETHODCALLTYPE * addNameValuePairToSignature) (ICEnroll2 * This, BSTR Name, BSTR Value);
	HRESULT(STDMETHODCALLTYPE * get_WriteCertToUserDS) (ICEnroll2 * This, BOOL * fBool);
	HRESULT(STDMETHODCALLTYPE * put_WriteCertToUserDS) (ICEnroll2 * This, BOOL fBool);
	HRESULT(STDMETHODCALLTYPE * get_EnableT61DNEncoding) (ICEnroll2 * This, BOOL * fBool);
	HRESULT(STDMETHODCALLTYPE * put_EnableT61DNEncoding) (ICEnroll2 * This, BOOL fBool);
	END_INTERFACE
} ICEnroll2Vtbl;
interface ICEnroll2
{
	CONST_VTBL struct ICEnroll2Vtbl *lpVtbl;
};
#ifdef COBJMACROS
#define ICEnroll2_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define ICEnroll2_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define ICEnroll2_Release(This) ( (This)->lpVtbl -> Release(This) )
#define ICEnroll2_GetTypeInfoCount(This,pctinfo) ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define ICEnroll2_GetTypeInfo(This,iTInfo,lcid,ppTInfo) ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define ICEnroll2_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define ICEnroll2_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define ICEnroll2_createFilePKCS10(This,DNName,Usage,wszPKCS10FileName) ( (This)->lpVtbl -> createFilePKCS10(This,DNName,Usage,wszPKCS10FileName) )
#define ICEnroll2_acceptFilePKCS7(This,wszPKCS7FileName) ( (This)->lpVtbl -> acceptFilePKCS7(This,wszPKCS7FileName) )
#define ICEnroll2_createPKCS10(This,DNName,Usage,pPKCS10) ( (This)->lpVtbl -> createPKCS10(This,DNName,Usage,pPKCS10) )
#define ICEnroll2_acceptPKCS7(This,PKCS7) ( (This)->lpVtbl -> acceptPKCS7(This,PKCS7) )
#define ICEnroll2_getCertFromPKCS7(This,wszPKCS7,pbstrCert) ( (This)->lpVtbl -> getCertFromPKCS7(This,wszPKCS7,pbstrCert) )
#define ICEnroll2_enumProviders(This,dwIndex,dwFlags,pbstrProvName) ( (This)->lpVtbl -> enumProviders(This,dwIndex,dwFlags,pbstrProvName) )
#define ICEnroll2_enumContainers(This,dwIndex,pbstr) ( (This)->lpVtbl -> enumContainers(This,dwIndex,pbstr) )
#define ICEnroll2_freeRequestInfo(This,PKCS7OrPKCS10) ( (This)->lpVtbl -> freeRequestInfo(This,PKCS7OrPKCS10) )
#define ICEnroll2_get_MyStoreName(This,pbstrName) ( (This)->lpVtbl -> get_MyStoreName(This,pbstrName) )
#define ICEnroll2_put_MyStoreName(This,bstrName) ( (This)->lpVtbl -> put_MyStoreName(This,bstrName) )
#define ICEnroll2_get_MyStoreType(This,pbstrType) ( (This)->lpVtbl -> get_MyStoreType(This,pbstrType) )
#define ICEnroll2_put_MyStoreType(This,bstrType) ( (This)->lpVtbl -> put_MyStoreType(This,bstrType) )
#define ICEnroll2_get_MyStoreFlags(This,pdwFlags) ( (This)->lpVtbl -> get_MyStoreFlags(This,pdwFlags) )
#define ICEnroll2_put_MyStoreFlags(This,dwFlags) ( (This)->lpVtbl -> put_MyStoreFlags(This,dwFlags) )
#define ICEnroll2_get_CAStoreName(This,pbstrName) ( (This)->lpVtbl -> get_CAStoreName(This,pbstrName) )
#define ICEnroll2_put_CAStoreName(This,bstrName) ( (This)->lpVtbl -> put_CAStoreName(This,bstrName) )
#define ICEnroll2_get_CAStoreType(This,pbstrType) ( (This)->lpVtbl -> get_CAStoreType(This,pbstrType) )
#define ICEnroll2_put_CAStoreType(This,bstrType) ( (This)->lpVtbl -> put_CAStoreType(This,bstrType) )
#define ICEnroll2_get_CAStoreFlags(This,pdwFlags) ( (This)->lpVtbl -> get_CAStoreFlags(This,pdwFlags) )
#define ICEnroll2_put_CAStoreFlags(This,dwFlags) ( (This)->lpVtbl -> put_CAStoreFlags(This,dwFlags) )
#define ICEnroll2_get_RootStoreName(This,pbstrName) ( (This)->lpVtbl -> get_RootStoreName(This,pbstrName) )
#define ICEnroll2_put_RootStoreName(This,bstrName) ( (This)->lpVtbl -> put_RootStoreName(This,bstrName) )
#define ICEnroll2_get_RootStoreType(This,pbstrType) ( (This)->lpVtbl -> get_RootStoreType(This,pbstrType) )
#define ICEnroll2_put_RootStoreType(This,bstrType) ( (This)->lpVtbl -> put_RootStoreType(This,bstrType) )
#define ICEnroll2_get_RootStoreFlags(This,pdwFlags) ( (This)->lpVtbl -> get_RootStoreFlags(This,pdwFlags) )
#define ICEnroll2_put_RootStoreFlags(This,dwFlags) ( (This)->lpVtbl -> put_RootStoreFlags(This,dwFlags) )
#define ICEnroll2_get_RequestStoreName(This,pbstrName) ( (This)->lpVtbl -> get_RequestStoreName(This,pbstrName) )
#define ICEnroll2_put_RequestStoreName(This,bstrName) ( (This)->lpVtbl -> put_RequestStoreName(This,bstrName) )
#define ICEnroll2_get_RequestStoreType(This,pbstrType) ( (This)->lpVtbl -> get_RequestStoreType(This,pbstrType) )
#define ICEnroll2_put_RequestStoreType(This,bstrType) ( (This)->lpVtbl -> put_RequestStoreType(This,bstrType) )
#define ICEnroll2_get_RequestStoreFlags(This,pdwFlags) ( (This)->lpVtbl -> get_RequestStoreFlags(This,pdwFlags) )
#define ICEnroll2_put_RequestStoreFlags(This,dwFlags) ( (This)->lpVtbl -> put_RequestStoreFlags(This,dwFlags) )
#define ICEnroll2_get_ContainerName(This,pbstrContainer) ( (This)->lpVtbl -> get_ContainerName(This,pbstrContainer) )
#define ICEnroll2_put_ContainerName(This,bstrContainer) ( (This)->lpVtbl -> put_ContainerName(This,bstrContainer) )
#define ICEnroll2_get_ProviderName(This,pbstrProvider) ( (This)->lpVtbl -> get_ProviderName(This,pbstrProvider) )
#define ICEnroll2_put_ProviderName(This,bstrProvider) ( (This)->lpVtbl -> put_ProviderName(This,bstrProvider) )
#define ICEnroll2_get_ProviderType(This,pdwType) ( (This)->lpVtbl -> get_ProviderType(This,pdwType) )
#define ICEnroll2_put_ProviderType(This,dwType) ( (This)->lpVtbl -> put_ProviderType(This,dwType) )
#define ICEnroll2_get_KeySpec(This,pdw) ( (This)->lpVtbl -> get_KeySpec(This,pdw) )
#define ICEnroll2_put_KeySpec(This,dw) ( (This)->lpVtbl -> put_KeySpec(This,dw) )
#define ICEnroll2_get_ProviderFlags(This,pdwFlags) ( (This)->lpVtbl -> get_ProviderFlags(This,pdwFlags) )
#define ICEnroll2_put_ProviderFlags(This,dwFlags) ( (This)->lpVtbl -> put_ProviderFlags(This,dwFlags) )
#define ICEnroll2_get_UseExistingKeySet(This,fUseExistingKeys) ( (This)->lpVtbl -> get_UseExistingKeySet(This,fUseExistingKeys) )
#define ICEnroll2_put_UseExistingKeySet(This,fUseExistingKeys) ( (This)->lpVtbl -> put_UseExistingKeySet(This,fUseExistingKeys) )
#define ICEnroll2_get_GenKeyFlags(This,pdwFlags) ( (This)->lpVtbl -> get_GenKeyFlags(This,pdwFlags) )
#define ICEnroll2_put_GenKeyFlags(This,dwFlags) ( (This)->lpVtbl -> put_GenKeyFlags(This,dwFlags) )
#define ICEnroll2_get_DeleteRequestCert(This,fDelete) ( (This)->lpVtbl -> get_DeleteRequestCert(This,fDelete) )
#define ICEnroll2_put_DeleteRequestCert(This,fDelete) ( (This)->lpVtbl -> put_DeleteRequestCert(This,fDelete) )
#define ICEnroll2_get_WriteCertToCSP(This,fBool) ( (This)->lpVtbl -> get_WriteCertToCSP(This,fBool) )
#define ICEnroll2_put_WriteCertToCSP(This,fBool) ( (This)->lpVtbl -> put_WriteCertToCSP(This,fBool) )
#define ICEnroll2_get_SPCFileName(This,pbstr) ( (This)->lpVtbl -> get_SPCFileName(This,pbstr) )
#define ICEnroll2_put_SPCFileName(This,bstr) ( (This)->lpVtbl -> put_SPCFileName(This,bstr) )
#define ICEnroll2_get_PVKFileName(This,pbstr) ( (This)->lpVtbl -> get_PVKFileName(This,pbstr) )
#define ICEnroll2_put_PVKFileName(This,bstr) ( (This)->lpVtbl -> put_PVKFileName(This,bstr) )
#define ICEnroll2_get_HashAlgorithm(This,pbstr) ( (This)->lpVtbl -> get_HashAlgorithm(This,pbstr) )
#define ICEnroll2_put_HashAlgorithm(This,bstr) ( (This)->lpVtbl -> put_HashAlgorithm(This,bstr) )
#define ICEnroll2_addCertTypeToRequest(This,CertType) ( (This)->lpVtbl -> addCertTypeToRequest(This,CertType) )
#define ICEnroll2_addNameValuePairToSignature(This,Name,Value) ( (This)->lpVtbl -> addNameValuePairToSignature(This,Name,Value) )
#define ICEnroll2_get_WriteCertToUserDS(This,fBool) ( (This)->lpVtbl -> get_WriteCertToUserDS(This,fBool) )
#define ICEnroll2_put_WriteCertToUserDS(This,fBool) ( (This)->lpVtbl -> put_WriteCertToUserDS(This,fBool) )
#define ICEnroll2_get_EnableT61DNEncoding(This,fBool) ( (This)->lpVtbl -> get_EnableT61DNEncoding(This,fBool) )
#define ICEnroll2_put_EnableT61DNEncoding(This,fBool) ( (This)->lpVtbl -> put_EnableT61DNEncoding(This,fBool) )
#endif
#endif
#ifndef __ICEnroll3_INTERFACE_DEFINED__
#define __ICEnroll3_INTERFACE_DEFINED__
extern const IID IID_ICEnroll3;
typedef struct ICEnroll3Vtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (ICEnroll3 * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (ICEnroll3 * This);
	ULONG(STDMETHODCALLTYPE * Release) (ICEnroll3 * This);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfoCount) (ICEnroll3 * This, UINT * pctinfo);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfo) (ICEnroll3 * This, UINT iTInfo, LCID lcid, ITypeInfo ** ppTInfo);
	HRESULT(STDMETHODCALLTYPE * GetIDsOfNames) (ICEnroll3 * This, REFIID riid, LPOLESTR * rgszNames, UINT cNames, LCID lcid, DISPID * rgDispId);
	HRESULT(STDMETHODCALLTYPE * Invoke) (ICEnroll3 * This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS * pDispParams, VARIANT * pVarResult, EXCEPINFO * pExcepInfo, UINT * puArgErr);
	HRESULT(STDMETHODCALLTYPE * createFilePKCS10) (ICEnroll3 * This, BSTR DNName, BSTR Usage, BSTR wszPKCS10FileName);
	HRESULT(STDMETHODCALLTYPE * acceptFilePKCS7) (ICEnroll3 * This, BSTR wszPKCS7FileName);
	HRESULT(STDMETHODCALLTYPE * createPKCS10) (ICEnroll3 * This, BSTR DNName, BSTR Usage, BSTR * pPKCS10);
	HRESULT(STDMETHODCALLTYPE * acceptPKCS7) (ICEnroll3 * This, BSTR PKCS7);
	HRESULT(STDMETHODCALLTYPE * getCertFromPKCS7) (ICEnroll3 * This, BSTR wszPKCS7, BSTR * pbstrCert);
	HRESULT(STDMETHODCALLTYPE * enumProviders) (ICEnroll3 * This, LONG dwIndex, LONG dwFlags, BSTR * pbstrProvName);
	HRESULT(STDMETHODCALLTYPE * enumContainers) (ICEnroll3 * This, LONG dwIndex, BSTR * pbstr);
	HRESULT(STDMETHODCALLTYPE * freeRequestInfo) (ICEnroll3 * This, BSTR PKCS7OrPKCS10);
	HRESULT(STDMETHODCALLTYPE * get_MyStoreName) (ICEnroll3 * This, BSTR * pbstrName);
	HRESULT(STDMETHODCALLTYPE * put_MyStoreName) (ICEnroll3 * This, BSTR bstrName);
	HRESULT(STDMETHODCALLTYPE * get_MyStoreType) (ICEnroll3 * This, BSTR * pbstrType);
	HRESULT(STDMETHODCALLTYPE * put_MyStoreType) (ICEnroll3 * This, BSTR bstrType);
	HRESULT(STDMETHODCALLTYPE * get_MyStoreFlags) (ICEnroll3 * This, LONG * pdwFlags);
	HRESULT(STDMETHODCALLTYPE * put_MyStoreFlags) (ICEnroll3 * This, LONG dwFlags);
	HRESULT(STDMETHODCALLTYPE * get_CAStoreName) (ICEnroll3 * This, BSTR * pbstrName);
	HRESULT(STDMETHODCALLTYPE * put_CAStoreName) (ICEnroll3 * This, BSTR bstrName);
	HRESULT(STDMETHODCALLTYPE * get_CAStoreType) (ICEnroll3 * This, BSTR * pbstrType);
	HRESULT(STDMETHODCALLTYPE * put_CAStoreType) (ICEnroll3 * This, BSTR bstrType);
	HRESULT(STDMETHODCALLTYPE * get_CAStoreFlags) (ICEnroll3 * This, LONG * pdwFlags);
	HRESULT(STDMETHODCALLTYPE * put_CAStoreFlags) (ICEnroll3 * This, LONG dwFlags);
	HRESULT(STDMETHODCALLTYPE * get_RootStoreName) (ICEnroll3 * This, BSTR * pbstrName);
	HRESULT(STDMETHODCALLTYPE * put_RootStoreName) (ICEnroll3 * This, BSTR bstrName);
	HRESULT(STDMETHODCALLTYPE * get_RootStoreType) (ICEnroll3 * This, BSTR * pbstrType);
	HRESULT(STDMETHODCALLTYPE * put_RootStoreType) (ICEnroll3 * This, BSTR bstrType);
	HRESULT(STDMETHODCALLTYPE * get_RootStoreFlags) (ICEnroll3 * This, LONG * pdwFlags);
	HRESULT(STDMETHODCALLTYPE * put_RootStoreFlags) (ICEnroll3 * This, LONG dwFlags);
	HRESULT(STDMETHODCALLTYPE * get_RequestStoreName) (ICEnroll3 * This, BSTR * pbstrName);
	HRESULT(STDMETHODCALLTYPE * put_RequestStoreName) (ICEnroll3 * This, BSTR bstrName);
	HRESULT(STDMETHODCALLTYPE * get_RequestStoreType) (ICEnroll3 * This, BSTR * pbstrType);
	HRESULT(STDMETHODCALLTYPE * put_RequestStoreType) (ICEnroll3 * This, BSTR bstrType);
	HRESULT(STDMETHODCALLTYPE * get_RequestStoreFlags) (ICEnroll3 * This, LONG * pdwFlags);
	HRESULT(STDMETHODCALLTYPE * put_RequestStoreFlags) (ICEnroll3 * This, LONG dwFlags);
	HRESULT(STDMETHODCALLTYPE * get_ContainerName) (ICEnroll3 * This, BSTR * pbstrContainer);
	HRESULT(STDMETHODCALLTYPE * put_ContainerName) (ICEnroll3 * This, BSTR bstrContainer);
	HRESULT(STDMETHODCALLTYPE * get_ProviderName) (ICEnroll3 * This, BSTR * pbstrProvider);
	HRESULT(STDMETHODCALLTYPE * put_ProviderName) (ICEnroll3 * This, BSTR bstrProvider);
	HRESULT(STDMETHODCALLTYPE * get_ProviderType) (ICEnroll3 * This, LONG * pdwType);
	HRESULT(STDMETHODCALLTYPE * put_ProviderType) (ICEnroll3 * This, LONG dwType);
	HRESULT(STDMETHODCALLTYPE * get_KeySpec) (ICEnroll3 * This, LONG * pdw);
	HRESULT(STDMETHODCALLTYPE * put_KeySpec) (ICEnroll3 * This, LONG dw);
	HRESULT(STDMETHODCALLTYPE * get_ProviderFlags) (ICEnroll3 * This, LONG * pdwFlags);
	HRESULT(STDMETHODCALLTYPE * put_ProviderFlags) (ICEnroll3 * This, LONG dwFlags);
	HRESULT(STDMETHODCALLTYPE * get_UseExistingKeySet) (ICEnroll3 * This, BOOL * fUseExistingKeys);
	HRESULT(STDMETHODCALLTYPE * put_UseExistingKeySet) (ICEnroll3 * This, BOOL fUseExistingKeys);
	HRESULT(STDMETHODCALLTYPE * get_GenKeyFlags) (ICEnroll3 * This, LONG * pdwFlags);
	HRESULT(STDMETHODCALLTYPE * put_GenKeyFlags) (ICEnroll3 * This, LONG dwFlags);
	HRESULT(STDMETHODCALLTYPE * get_DeleteRequestCert) (ICEnroll3 * This, BOOL * fDelete);
	HRESULT(STDMETHODCALLTYPE * put_DeleteRequestCert) (ICEnroll3 * This, BOOL fDelete);
	HRESULT(STDMETHODCALLTYPE * get_WriteCertToCSP) (ICEnroll3 * This, BOOL * fBool);
	HRESULT(STDMETHODCALLTYPE * put_WriteCertToCSP) (ICEnroll3 * This, BOOL fBool);
	HRESULT(STDMETHODCALLTYPE * get_SPCFileName) (ICEnroll3 * This, BSTR * pbstr);
	HRESULT(STDMETHODCALLTYPE * put_SPCFileName) (ICEnroll3 * This, BSTR bstr);
	HRESULT(STDMETHODCALLTYPE * get_PVKFileName) (ICEnroll3 * This, BSTR * pbstr);
	HRESULT(STDMETHODCALLTYPE * put_PVKFileName) (ICEnroll3 * This, BSTR bstr);
	HRESULT(STDMETHODCALLTYPE * get_HashAlgorithm) (ICEnroll3 * This, BSTR * pbstr);
	HRESULT(STDMETHODCALLTYPE * put_HashAlgorithm) (ICEnroll3 * This, BSTR bstr);
	HRESULT(STDMETHODCALLTYPE * addCertTypeToRequest) (ICEnroll3 * This, BSTR CertType);
	HRESULT(STDMETHODCALLTYPE * addNameValuePairToSignature) (ICEnroll3 * This, BSTR Name, BSTR Value);
	HRESULT(STDMETHODCALLTYPE * get_WriteCertToUserDS) (ICEnroll3 * This, BOOL * fBool);
	HRESULT(STDMETHODCALLTYPE * put_WriteCertToUserDS) (ICEnroll3 * This, BOOL fBool);
	HRESULT(STDMETHODCALLTYPE * get_EnableT61DNEncoding) (ICEnroll3 * This, BOOL * fBool);
	HRESULT(STDMETHODCALLTYPE * put_EnableT61DNEncoding) (ICEnroll3 * This, BOOL fBool);
	HRESULT(STDMETHODCALLTYPE * InstallPKCS7) (ICEnroll3 * This, BSTR PKCS7);
	HRESULT(STDMETHODCALLTYPE * Reset) (ICEnroll3 * This);
	HRESULT(STDMETHODCALLTYPE * GetSupportedKeySpec) (ICEnroll3 * This, LONG * pdwKeySpec);
	HRESULT(STDMETHODCALLTYPE * GetKeyLen) (ICEnroll3 * This, BOOL fMin, BOOL fExchange, LONG * pdwKeySize);
	HRESULT(STDMETHODCALLTYPE * EnumAlgs) (ICEnroll3 * This, LONG dwIndex, LONG algClass, LONG * pdwAlgID);
	HRESULT(STDMETHODCALLTYPE * GetAlgName) (ICEnroll3 * This, LONG algID, BSTR * pbstr);
	HRESULT(STDMETHODCALLTYPE * put_ReuseHardwareKeyIfUnableToGenNew) (ICEnroll3 * This, BOOL fReuseHardwareKeyIfUnableToGenNew);
	HRESULT(STDMETHODCALLTYPE * get_ReuseHardwareKeyIfUnableToGenNew) (ICEnroll3 * This, BOOL * fReuseHardwareKeyIfUnableToGenNew);
	HRESULT(STDMETHODCALLTYPE * put_HashAlgID) (ICEnroll3 * This, LONG hashAlgID);
	HRESULT(STDMETHODCALLTYPE * get_HashAlgID) (ICEnroll3 * This, LONG * hashAlgID);
	HRESULT(STDMETHODCALLTYPE * put_LimitExchangeKeyToEncipherment) (ICEnroll3 * This, BOOL fLimitExchangeKeyToEncipherment);
	HRESULT(STDMETHODCALLTYPE * get_LimitExchangeKeyToEncipherment) (ICEnroll3 * This, BOOL * fLimitExchangeKeyToEncipherment);
	HRESULT(STDMETHODCALLTYPE * put_EnableSMIMECapabilities) (ICEnroll3 * This, BOOL fEnableSMIMECapabilities);
	HRESULT(STDMETHODCALLTYPE * get_EnableSMIMECapabilities) (ICEnroll3 * This, BOOL * fEnableSMIMECapabilities);
	END_INTERFACE
} ICEnroll3Vtbl;
interface ICEnroll3
{
	CONST_VTBL struct ICEnroll3Vtbl *lpVtbl;
};
#ifdef COBJMACROS
#define ICEnroll3_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define ICEnroll3_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define ICEnroll3_Release(This) ( (This)->lpVtbl -> Release(This) )
#define ICEnroll3_GetTypeInfoCount(This,pctinfo) ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define ICEnroll3_GetTypeInfo(This,iTInfo,lcid,ppTInfo) ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define ICEnroll3_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define ICEnroll3_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define ICEnroll3_createFilePKCS10(This,DNName,Usage,wszPKCS10FileName) ( (This)->lpVtbl -> createFilePKCS10(This,DNName,Usage,wszPKCS10FileName) )
#define ICEnroll3_acceptFilePKCS7(This,wszPKCS7FileName) ( (This)->lpVtbl -> acceptFilePKCS7(This,wszPKCS7FileName) )
#define ICEnroll3_createPKCS10(This,DNName,Usage,pPKCS10) ( (This)->lpVtbl -> createPKCS10(This,DNName,Usage,pPKCS10) )
#define ICEnroll3_acceptPKCS7(This,PKCS7) ( (This)->lpVtbl -> acceptPKCS7(This,PKCS7) )
#define ICEnroll3_getCertFromPKCS7(This,wszPKCS7,pbstrCert) ( (This)->lpVtbl -> getCertFromPKCS7(This,wszPKCS7,pbstrCert) )
#define ICEnroll3_enumProviders(This,dwIndex,dwFlags,pbstrProvName) ( (This)->lpVtbl -> enumProviders(This,dwIndex,dwFlags,pbstrProvName) )
#define ICEnroll3_enumContainers(This,dwIndex,pbstr) ( (This)->lpVtbl -> enumContainers(This,dwIndex,pbstr) )
#define ICEnroll3_freeRequestInfo(This,PKCS7OrPKCS10) ( (This)->lpVtbl -> freeRequestInfo(This,PKCS7OrPKCS10) )
#define ICEnroll3_get_MyStoreName(This,pbstrName) ( (This)->lpVtbl -> get_MyStoreName(This,pbstrName) )
#define ICEnroll3_put_MyStoreName(This,bstrName) ( (This)->lpVtbl -> put_MyStoreName(This,bstrName) )
#define ICEnroll3_get_MyStoreType(This,pbstrType) ( (This)->lpVtbl -> get_MyStoreType(This,pbstrType) )
#define ICEnroll3_put_MyStoreType(This,bstrType) ( (This)->lpVtbl -> put_MyStoreType(This,bstrType) )
#define ICEnroll3_get_MyStoreFlags(This,pdwFlags) ( (This)->lpVtbl -> get_MyStoreFlags(This,pdwFlags) )
#define ICEnroll3_put_MyStoreFlags(This,dwFlags) ( (This)->lpVtbl -> put_MyStoreFlags(This,dwFlags) )
#define ICEnroll3_get_CAStoreName(This,pbstrName) ( (This)->lpVtbl -> get_CAStoreName(This,pbstrName) )
#define ICEnroll3_put_CAStoreName(This,bstrName) ( (This)->lpVtbl -> put_CAStoreName(This,bstrName) )
#define ICEnroll3_get_CAStoreType(This,pbstrType) ( (This)->lpVtbl -> get_CAStoreType(This,pbstrType) )
#define ICEnroll3_put_CAStoreType(This,bstrType) ( (This)->lpVtbl -> put_CAStoreType(This,bstrType) )
#define ICEnroll3_get_CAStoreFlags(This,pdwFlags) ( (This)->lpVtbl -> get_CAStoreFlags(This,pdwFlags) )
#define ICEnroll3_put_CAStoreFlags(This,dwFlags) ( (This)->lpVtbl -> put_CAStoreFlags(This,dwFlags) )
#define ICEnroll3_get_RootStoreName(This,pbstrName) ( (This)->lpVtbl -> get_RootStoreName(This,pbstrName) )
#define ICEnroll3_put_RootStoreName(This,bstrName) ( (This)->lpVtbl -> put_RootStoreName(This,bstrName) )
#define ICEnroll3_get_RootStoreType(This,pbstrType) ( (This)->lpVtbl -> get_RootStoreType(This,pbstrType) )
#define ICEnroll3_put_RootStoreType(This,bstrType) ( (This)->lpVtbl -> put_RootStoreType(This,bstrType) )
#define ICEnroll3_get_RootStoreFlags(This,pdwFlags) ( (This)->lpVtbl -> get_RootStoreFlags(This,pdwFlags) )
#define ICEnroll3_put_RootStoreFlags(This,dwFlags) ( (This)->lpVtbl -> put_RootStoreFlags(This,dwFlags) )
#define ICEnroll3_get_RequestStoreName(This,pbstrName) ( (This)->lpVtbl -> get_RequestStoreName(This,pbstrName) )
#define ICEnroll3_put_RequestStoreName(This,bstrName) ( (This)->lpVtbl -> put_RequestStoreName(This,bstrName) )
#define ICEnroll3_get_RequestStoreType(This,pbstrType) ( (This)->lpVtbl -> get_RequestStoreType(This,pbstrType) )
#define ICEnroll3_put_RequestStoreType(This,bstrType) ( (This)->lpVtbl -> put_RequestStoreType(This,bstrType) )
#define ICEnroll3_get_RequestStoreFlags(This,pdwFlags) ( (This)->lpVtbl -> get_RequestStoreFlags(This,pdwFlags) )
#define ICEnroll3_put_RequestStoreFlags(This,dwFlags) ( (This)->lpVtbl -> put_RequestStoreFlags(This,dwFlags) )
#define ICEnroll3_get_ContainerName(This,pbstrContainer) ( (This)->lpVtbl -> get_ContainerName(This,pbstrContainer) )
#define ICEnroll3_put_ContainerName(This,bstrContainer) ( (This)->lpVtbl -> put_ContainerName(This,bstrContainer) )
#define ICEnroll3_get_ProviderName(This,pbstrProvider) ( (This)->lpVtbl -> get_ProviderName(This,pbstrProvider) )
#define ICEnroll3_put_ProviderName(This,bstrProvider) ( (This)->lpVtbl -> put_ProviderName(This,bstrProvider) )
#define ICEnroll3_get_ProviderType(This,pdwType) ( (This)->lpVtbl -> get_ProviderType(This,pdwType) )
#define ICEnroll3_put_ProviderType(This,dwType) ( (This)->lpVtbl -> put_ProviderType(This,dwType) )
#define ICEnroll3_get_KeySpec(This,pdw) ( (This)->lpVtbl -> get_KeySpec(This,pdw) )
#define ICEnroll3_put_KeySpec(This,dw) ( (This)->lpVtbl -> put_KeySpec(This,dw) )
#define ICEnroll3_get_ProviderFlags(This,pdwFlags) ( (This)->lpVtbl -> get_ProviderFlags(This,pdwFlags) )
#define ICEnroll3_put_ProviderFlags(This,dwFlags) ( (This)->lpVtbl -> put_ProviderFlags(This,dwFlags) )
#define ICEnroll3_get_UseExistingKeySet(This,fUseExistingKeys) ( (This)->lpVtbl -> get_UseExistingKeySet(This,fUseExistingKeys) )
#define ICEnroll3_put_UseExistingKeySet(This,fUseExistingKeys) ( (This)->lpVtbl -> put_UseExistingKeySet(This,fUseExistingKeys) )
#define ICEnroll3_get_GenKeyFlags(This,pdwFlags) ( (This)->lpVtbl -> get_GenKeyFlags(This,pdwFlags) )
#define ICEnroll3_put_GenKeyFlags(This,dwFlags) ( (This)->lpVtbl -> put_GenKeyFlags(This,dwFlags) )
#define ICEnroll3_get_DeleteRequestCert(This,fDelete) ( (This)->lpVtbl -> get_DeleteRequestCert(This,fDelete) )
#define ICEnroll3_put_DeleteRequestCert(This,fDelete) ( (This)->lpVtbl -> put_DeleteRequestCert(This,fDelete) )
#define ICEnroll3_get_WriteCertToCSP(This,fBool) ( (This)->lpVtbl -> get_WriteCertToCSP(This,fBool) )
#define ICEnroll3_put_WriteCertToCSP(This,fBool) ( (This)->lpVtbl -> put_WriteCertToCSP(This,fBool) )
#define ICEnroll3_get_SPCFileName(This,pbstr) ( (This)->lpVtbl -> get_SPCFileName(This,pbstr) )
#define ICEnroll3_put_SPCFileName(This,bstr) ( (This)->lpVtbl -> put_SPCFileName(This,bstr) )
#define ICEnroll3_get_PVKFileName(This,pbstr) ( (This)->lpVtbl -> get_PVKFileName(This,pbstr) )
#define ICEnroll3_put_PVKFileName(This,bstr) ( (This)->lpVtbl -> put_PVKFileName(This,bstr) )
#define ICEnroll3_get_HashAlgorithm(This,pbstr) ( (This)->lpVtbl -> get_HashAlgorithm(This,pbstr) )
#define ICEnroll3_put_HashAlgorithm(This,bstr) ( (This)->lpVtbl -> put_HashAlgorithm(This,bstr) )
#define ICEnroll3_addCertTypeToRequest(This,CertType) ( (This)->lpVtbl -> addCertTypeToRequest(This,CertType) )
#define ICEnroll3_addNameValuePairToSignature(This,Name,Value) ( (This)->lpVtbl -> addNameValuePairToSignature(This,Name,Value) )
#define ICEnroll3_get_WriteCertToUserDS(This,fBool) ( (This)->lpVtbl -> get_WriteCertToUserDS(This,fBool) )
#define ICEnroll3_put_WriteCertToUserDS(This,fBool) ( (This)->lpVtbl -> put_WriteCertToUserDS(This,fBool) )
#define ICEnroll3_get_EnableT61DNEncoding(This,fBool) ( (This)->lpVtbl -> get_EnableT61DNEncoding(This,fBool) )
#define ICEnroll3_put_EnableT61DNEncoding(This,fBool) ( (This)->lpVtbl -> put_EnableT61DNEncoding(This,fBool) )
#define ICEnroll3_InstallPKCS7(This,PKCS7) ( (This)->lpVtbl -> InstallPKCS7(This,PKCS7) )
#define ICEnroll3_Reset(This) ( (This)->lpVtbl -> Reset(This) )
#define ICEnroll3_GetSupportedKeySpec(This,pdwKeySpec) ( (This)->lpVtbl -> GetSupportedKeySpec(This,pdwKeySpec) )
#define ICEnroll3_GetKeyLen(This,fMin,fExchange,pdwKeySize) ( (This)->lpVtbl -> GetKeyLen(This,fMin,fExchange,pdwKeySize) )
#define ICEnroll3_EnumAlgs(This,dwIndex,algClass,pdwAlgID) ( (This)->lpVtbl -> EnumAlgs(This,dwIndex,algClass,pdwAlgID) )
#define ICEnroll3_GetAlgName(This,algID,pbstr) ( (This)->lpVtbl -> GetAlgName(This,algID,pbstr) )
#define ICEnroll3_put_ReuseHardwareKeyIfUnableToGenNew(This,fReuseHardwareKeyIfUnableToGenNew) ( (This)->lpVtbl -> put_ReuseHardwareKeyIfUnableToGenNew(This,fReuseHardwareKeyIfUnableToGenNew) )
#define ICEnroll3_get_ReuseHardwareKeyIfUnableToGenNew(This,fReuseHardwareKeyIfUnableToGenNew) ( (This)->lpVtbl -> get_ReuseHardwareKeyIfUnableToGenNew(This,fReuseHardwareKeyIfUnableToGenNew) )
#define ICEnroll3_put_HashAlgID(This,hashAlgID) ( (This)->lpVtbl -> put_HashAlgID(This,hashAlgID) )
#define ICEnroll3_get_HashAlgID(This,hashAlgID) ( (This)->lpVtbl -> get_HashAlgID(This,hashAlgID) )
#define ICEnroll3_put_LimitExchangeKeyToEncipherment(This,fLimitExchangeKeyToEncipherment) ( (This)->lpVtbl -> put_LimitExchangeKeyToEncipherment(This,fLimitExchangeKeyToEncipherment) )
#define ICEnroll3_get_LimitExchangeKeyToEncipherment(This,fLimitExchangeKeyToEncipherment) ( (This)->lpVtbl -> get_LimitExchangeKeyToEncipherment(This,fLimitExchangeKeyToEncipherment) )
#define ICEnroll3_put_EnableSMIMECapabilities(This,fEnableSMIMECapabilities) ( (This)->lpVtbl -> put_EnableSMIMECapabilities(This,fEnableSMIMECapabilities) )
#define ICEnroll3_get_EnableSMIMECapabilities(This,fEnableSMIMECapabilities) ( (This)->lpVtbl -> get_EnableSMIMECapabilities(This,fEnableSMIMECapabilities) )
#endif
#endif
#ifndef __ICEnroll4_INTERFACE_DEFINED__
#define __ICEnroll4_INTERFACE_DEFINED__
extern const IID IID_ICEnroll4;
typedef struct ICEnroll4Vtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (ICEnroll4 * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (ICEnroll4 * This);
	ULONG(STDMETHODCALLTYPE * Release) (ICEnroll4 * This);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfoCount) (ICEnroll4 * This, UINT * pctinfo);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfo) (ICEnroll4 * This, UINT iTInfo, LCID lcid, ITypeInfo ** ppTInfo);
	HRESULT(STDMETHODCALLTYPE * GetIDsOfNames) (ICEnroll4 * This, REFIID riid, LPOLESTR * rgszNames, UINT cNames, LCID lcid, DISPID * rgDispId);
	HRESULT(STDMETHODCALLTYPE * Invoke) (ICEnroll4 * This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS * pDispParams, VARIANT * pVarResult, EXCEPINFO * pExcepInfo, UINT * puArgErr);
	HRESULT(STDMETHODCALLTYPE * createFilePKCS10) (ICEnroll4 * This, BSTR DNName, BSTR Usage, BSTR wszPKCS10FileName);
	HRESULT(STDMETHODCALLTYPE * acceptFilePKCS7) (ICEnroll4 * This, BSTR wszPKCS7FileName);
	HRESULT(STDMETHODCALLTYPE * createPKCS10) (ICEnroll4 * This, BSTR DNName, BSTR Usage, BSTR * pPKCS10);
	HRESULT(STDMETHODCALLTYPE * acceptPKCS7) (ICEnroll4 * This, BSTR PKCS7);
	HRESULT(STDMETHODCALLTYPE * getCertFromPKCS7) (ICEnroll4 * This, BSTR wszPKCS7, BSTR * pbstrCert);
	HRESULT(STDMETHODCALLTYPE * enumProviders) (ICEnroll4 * This, LONG dwIndex, LONG dwFlags, BSTR * pbstrProvName);
	HRESULT(STDMETHODCALLTYPE * enumContainers) (ICEnroll4 * This, LONG dwIndex, BSTR * pbstr);
	HRESULT(STDMETHODCALLTYPE * freeRequestInfo) (ICEnroll4 * This, BSTR PKCS7OrPKCS10);
	HRESULT(STDMETHODCALLTYPE * get_MyStoreName) (ICEnroll4 * This, BSTR * pbstrName);
	HRESULT(STDMETHODCALLTYPE * put_MyStoreName) (ICEnroll4 * This, BSTR bstrName);
	HRESULT(STDMETHODCALLTYPE * get_MyStoreType) (ICEnroll4 * This, BSTR * pbstrType);
	HRESULT(STDMETHODCALLTYPE * put_MyStoreType) (ICEnroll4 * This, BSTR bstrType);
	HRESULT(STDMETHODCALLTYPE * get_MyStoreFlags) (ICEnroll4 * This, LONG * pdwFlags);
	HRESULT(STDMETHODCALLTYPE * put_MyStoreFlags) (ICEnroll4 * This, LONG dwFlags);
	HRESULT(STDMETHODCALLTYPE * get_CAStoreName) (ICEnroll4 * This, BSTR * pbstrName);
	HRESULT(STDMETHODCALLTYPE * put_CAStoreName) (ICEnroll4 * This, BSTR bstrName);
	HRESULT(STDMETHODCALLTYPE * get_CAStoreType) (ICEnroll4 * This, BSTR * pbstrType);
	HRESULT(STDMETHODCALLTYPE * put_CAStoreType) (ICEnroll4 * This, BSTR bstrType);
	HRESULT(STDMETHODCALLTYPE * get_CAStoreFlags) (ICEnroll4 * This, LONG * pdwFlags);
	HRESULT(STDMETHODCALLTYPE * put_CAStoreFlags) (ICEnroll4 * This, LONG dwFlags);
	HRESULT(STDMETHODCALLTYPE * get_RootStoreName) (ICEnroll4 * This, BSTR * pbstrName);
	HRESULT(STDMETHODCALLTYPE * put_RootStoreName) (ICEnroll4 * This, BSTR bstrName);
	HRESULT(STDMETHODCALLTYPE * get_RootStoreType) (ICEnroll4 * This, BSTR * pbstrType);
	HRESULT(STDMETHODCALLTYPE * put_RootStoreType) (ICEnroll4 * This, BSTR bstrType);
	HRESULT(STDMETHODCALLTYPE * get_RootStoreFlags) (ICEnroll4 * This, LONG * pdwFlags);
	HRESULT(STDMETHODCALLTYPE * put_RootStoreFlags) (ICEnroll4 * This, LONG dwFlags);
	HRESULT(STDMETHODCALLTYPE * get_RequestStoreName) (ICEnroll4 * This, BSTR * pbstrName);
	HRESULT(STDMETHODCALLTYPE * put_RequestStoreName) (ICEnroll4 * This, BSTR bstrName);
	HRESULT(STDMETHODCALLTYPE * get_RequestStoreType) (ICEnroll4 * This, BSTR * pbstrType);
	HRESULT(STDMETHODCALLTYPE * put_RequestStoreType) (ICEnroll4 * This, BSTR bstrType);
	HRESULT(STDMETHODCALLTYPE * get_RequestStoreFlags) (ICEnroll4 * This, LONG * pdwFlags);
	HRESULT(STDMETHODCALLTYPE * put_RequestStoreFlags) (ICEnroll4 * This, LONG dwFlags);
	HRESULT(STDMETHODCALLTYPE * get_ContainerName) (ICEnroll4 * This, BSTR * pbstrContainer);
	HRESULT(STDMETHODCALLTYPE * put_ContainerName) (ICEnroll4 * This, BSTR bstrContainer);
	HRESULT(STDMETHODCALLTYPE * get_ProviderName) (ICEnroll4 * This, BSTR * pbstrProvider);
	HRESULT(STDMETHODCALLTYPE * put_ProviderName) (ICEnroll4 * This, BSTR bstrProvider);
	HRESULT(STDMETHODCALLTYPE * get_ProviderType) (ICEnroll4 * This, LONG * pdwType);
	HRESULT(STDMETHODCALLTYPE * put_ProviderType) (ICEnroll4 * This, LONG dwType);
	HRESULT(STDMETHODCALLTYPE * get_KeySpec) (ICEnroll4 * This, LONG * pdw);
	HRESULT(STDMETHODCALLTYPE * put_KeySpec) (ICEnroll4 * This, LONG dw);
	HRESULT(STDMETHODCALLTYPE * get_ProviderFlags) (ICEnroll4 * This, LONG * pdwFlags);
	HRESULT(STDMETHODCALLTYPE * put_ProviderFlags) (ICEnroll4 * This, LONG dwFlags);
	HRESULT(STDMETHODCALLTYPE * get_UseExistingKeySet) (ICEnroll4 * This, BOOL * fUseExistingKeys);
	HRESULT(STDMETHODCALLTYPE * put_UseExistingKeySet) (ICEnroll4 * This, BOOL fUseExistingKeys);
	HRESULT(STDMETHODCALLTYPE * get_GenKeyFlags) (ICEnroll4 * This, LONG * pdwFlags);
	HRESULT(STDMETHODCALLTYPE * put_GenKeyFlags) (ICEnroll4 * This, LONG dwFlags);
	HRESULT(STDMETHODCALLTYPE * get_DeleteRequestCert) (ICEnroll4 * This, BOOL * fDelete);
	HRESULT(STDMETHODCALLTYPE * put_DeleteRequestCert) (ICEnroll4 * This, BOOL fDelete);
	HRESULT(STDMETHODCALLTYPE * get_WriteCertToCSP) (ICEnroll4 * This, BOOL * fBool);
	HRESULT(STDMETHODCALLTYPE * put_WriteCertToCSP) (ICEnroll4 * This, BOOL fBool);
	HRESULT(STDMETHODCALLTYPE * get_SPCFileName) (ICEnroll4 * This, BSTR * pbstr);
	HRESULT(STDMETHODCALLTYPE * put_SPCFileName) (ICEnroll4 * This, BSTR bstr);
	HRESULT(STDMETHODCALLTYPE * get_PVKFileName) (ICEnroll4 * This, BSTR * pbstr);
	HRESULT(STDMETHODCALLTYPE * put_PVKFileName) (ICEnroll4 * This, BSTR bstr);
	HRESULT(STDMETHODCALLTYPE * get_HashAlgorithm) (ICEnroll4 * This, BSTR * pbstr);
	HRESULT(STDMETHODCALLTYPE * put_HashAlgorithm) (ICEnroll4 * This, BSTR bstr);
	HRESULT(STDMETHODCALLTYPE * addCertTypeToRequest) (ICEnroll4 * This, BSTR CertType);
	HRESULT(STDMETHODCALLTYPE * addNameValuePairToSignature) (ICEnroll4 * This, BSTR Name, BSTR Value);
	HRESULT(STDMETHODCALLTYPE * get_WriteCertToUserDS) (ICEnroll4 * This, BOOL * fBool);
	HRESULT(STDMETHODCALLTYPE * put_WriteCertToUserDS) (ICEnroll4 * This, BOOL fBool);
	HRESULT(STDMETHODCALLTYPE * get_EnableT61DNEncoding) (ICEnroll4 * This, BOOL * fBool);
	HRESULT(STDMETHODCALLTYPE * put_EnableT61DNEncoding) (ICEnroll4 * This, BOOL fBool);
	HRESULT(STDMETHODCALLTYPE * InstallPKCS7) (ICEnroll4 * This, BSTR PKCS7);
	HRESULT(STDMETHODCALLTYPE * Reset) (ICEnroll4 * This);
	HRESULT(STDMETHODCALLTYPE * GetSupportedKeySpec) (ICEnroll4 * This, LONG * pdwKeySpec);
	HRESULT(STDMETHODCALLTYPE * GetKeyLen) (ICEnroll4 * This, BOOL fMin, BOOL fExchange, LONG * pdwKeySize);
	HRESULT(STDMETHODCALLTYPE * EnumAlgs) (ICEnroll4 * This, LONG dwIndex, LONG algClass, LONG * pdwAlgID);
	HRESULT(STDMETHODCALLTYPE * GetAlgName) (ICEnroll4 * This, LONG algID, BSTR * pbstr);
	HRESULT(STDMETHODCALLTYPE * put_ReuseHardwareKeyIfUnableToGenNew) (ICEnroll4 * This, BOOL fReuseHardwareKeyIfUnableToGenNew);
	HRESULT(STDMETHODCALLTYPE * get_ReuseHardwareKeyIfUnableToGenNew) (ICEnroll4 * This, BOOL * fReuseHardwareKeyIfUnableToGenNew);
	HRESULT(STDMETHODCALLTYPE * put_HashAlgID) (ICEnroll4 * This, LONG hashAlgID);
	HRESULT(STDMETHODCALLTYPE * get_HashAlgID) (ICEnroll4 * This, LONG * hashAlgID);
	HRESULT(STDMETHODCALLTYPE * put_LimitExchangeKeyToEncipherment) (ICEnroll4 * This, BOOL fLimitExchangeKeyToEncipherment);
	HRESULT(STDMETHODCALLTYPE * get_LimitExchangeKeyToEncipherment) (ICEnroll4 * This, BOOL * fLimitExchangeKeyToEncipherment);
	HRESULT(STDMETHODCALLTYPE * put_EnableSMIMECapabilities) (ICEnroll4 * This, BOOL fEnableSMIMECapabilities);
	HRESULT(STDMETHODCALLTYPE * get_EnableSMIMECapabilities) (ICEnroll4 * This, BOOL * fEnableSMIMECapabilities);
	HRESULT(STDMETHODCALLTYPE * put_PrivateKeyArchiveCertificate) (ICEnroll4 * This, BSTR bstrCert);
	HRESULT(STDMETHODCALLTYPE * get_PrivateKeyArchiveCertificate) (ICEnroll4 * This, BSTR * pbstrCert);
	HRESULT(STDMETHODCALLTYPE * put_ThumbPrint) (ICEnroll4 * This, BSTR bstrThumbPrint);
	HRESULT(STDMETHODCALLTYPE * get_ThumbPrint) (ICEnroll4 * This, BSTR * pbstrThumbPrint);
	HRESULT(STDMETHODCALLTYPE * binaryToString) (ICEnroll4 * This, LONG Flags, BSTR strBinary, BSTR * pstrEncoded);
	HRESULT(STDMETHODCALLTYPE * stringToBinary) (ICEnroll4 * This, LONG Flags, BSTR strEncoded, BSTR * pstrBinary);
	HRESULT(STDMETHODCALLTYPE * addExtensionToRequest) (ICEnroll4 * This, LONG Flags, BSTR strName, BSTR strValue);
	HRESULT(STDMETHODCALLTYPE * addAttributeToRequest) (ICEnroll4 * This, LONG Flags, BSTR strName, BSTR strValue);
	HRESULT(STDMETHODCALLTYPE * addNameValuePairToRequest) (ICEnroll4 * This, LONG Flags, BSTR strName, BSTR strValue);
	HRESULT(STDMETHODCALLTYPE * resetExtensions) (ICEnroll4 * This);
	HRESULT(STDMETHODCALLTYPE * resetAttributes) (ICEnroll4 * This);
	HRESULT(STDMETHODCALLTYPE * createRequest) (ICEnroll4 * This, LONG Flags, BSTR strDNName, BSTR Usage, BSTR * pstrRequest);
	HRESULT(STDMETHODCALLTYPE * createFileRequest) (ICEnroll4 * This, LONG Flags, BSTR strDNName, BSTR strUsage, BSTR strRequestFileName);
	HRESULT(STDMETHODCALLTYPE * acceptResponse) (ICEnroll4 * This, BSTR strResponse);
	HRESULT(STDMETHODCALLTYPE * acceptFileResponse) (ICEnroll4 * This, BSTR strResponseFileName);
	HRESULT(STDMETHODCALLTYPE * getCertFromResponse) (ICEnroll4 * This, BSTR strResponse, BSTR * pstrCert);
	HRESULT(STDMETHODCALLTYPE * getCertFromFileResponse) (ICEnroll4 * This, BSTR strResponseFileName, BSTR * pstrCert);
	HRESULT(STDMETHODCALLTYPE * createPFX) (ICEnroll4 * This, BSTR strPassword, BSTR * pstrPFX);
	HRESULT(STDMETHODCALLTYPE * createFilePFX) (ICEnroll4 * This, BSTR strPassword, BSTR strPFXFileName);
	HRESULT(STDMETHODCALLTYPE * setPendingRequestInfo) (ICEnroll4 * This, LONG lRequestID, BSTR strCADNS, BSTR strCAName, BSTR strFriendlyName);
	HRESULT(STDMETHODCALLTYPE * enumPendingRequest) (ICEnroll4 * This, LONG lIndex, LONG lDesiredProperty, VARIANT * pvarProperty);
	HRESULT(STDMETHODCALLTYPE * removePendingRequest) (ICEnroll4 * This, BSTR strThumbprint);
	HRESULT(STDMETHODCALLTYPE * GetKeyLenEx) (ICEnroll4 * This, LONG lSizeSpec, LONG lKeySpec, LONG * pdwKeySize);
	HRESULT(STDMETHODCALLTYPE * InstallPKCS7Ex) (ICEnroll4 * This, BSTR PKCS7, LONG * plCertInstalled);
	HRESULT(STDMETHODCALLTYPE * addCertTypeToRequestEx) (ICEnroll4 * This, LONG lType, BSTR bstrOIDOrName, LONG lMajorVersion, BOOL fMinorVersion, LONG lMinorVersion);
	HRESULT(STDMETHODCALLTYPE * getProviderType) (ICEnroll4 * This, BSTR strProvName, LONG * plProvType);
	HRESULT(STDMETHODCALLTYPE * put_SignerCertificate) (ICEnroll4 * This, BSTR bstrCert);
	HRESULT(STDMETHODCALLTYPE * put_ClientId) (ICEnroll4 * This, LONG lClientId);
	HRESULT(STDMETHODCALLTYPE * get_ClientId) (ICEnroll4 * This, LONG * plClientId);
	HRESULT(STDMETHODCALLTYPE * addBlobPropertyToCertificate) (ICEnroll4 * This, LONG lPropertyId, LONG lReserved, BSTR bstrProperty);
	HRESULT(STDMETHODCALLTYPE * resetBlobProperties) (ICEnroll4 * This);
	HRESULT(STDMETHODCALLTYPE * put_IncludeSubjectKeyID) (ICEnroll4 * This, BOOL fInclude);
	HRESULT(STDMETHODCALLTYPE * get_IncludeSubjectKeyID) (ICEnroll4 * This, BOOL * pfInclude);
	END_INTERFACE
} ICEnroll4Vtbl;
interface ICEnroll4
{
	CONST_VTBL struct ICEnroll4Vtbl *lpVtbl;
};
#ifdef COBJMACROS
#define ICEnroll4_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define ICEnroll4_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define ICEnroll4_Release(This) ( (This)->lpVtbl -> Release(This) )
#define ICEnroll4_GetTypeInfoCount(This,pctinfo) ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define ICEnroll4_GetTypeInfo(This,iTInfo,lcid,ppTInfo) ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define ICEnroll4_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define ICEnroll4_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define ICEnroll4_createFilePKCS10(This,DNName,Usage,wszPKCS10FileName) ( (This)->lpVtbl -> createFilePKCS10(This,DNName,Usage,wszPKCS10FileName) )
#define ICEnroll4_acceptFilePKCS7(This,wszPKCS7FileName) ( (This)->lpVtbl -> acceptFilePKCS7(This,wszPKCS7FileName) )
#define ICEnroll4_createPKCS10(This,DNName,Usage,pPKCS10) ( (This)->lpVtbl -> createPKCS10(This,DNName,Usage,pPKCS10) )
#define ICEnroll4_acceptPKCS7(This,PKCS7) ( (This)->lpVtbl -> acceptPKCS7(This,PKCS7) )
#define ICEnroll4_getCertFromPKCS7(This,wszPKCS7,pbstrCert) ( (This)->lpVtbl -> getCertFromPKCS7(This,wszPKCS7,pbstrCert) )
#define ICEnroll4_enumProviders(This,dwIndex,dwFlags,pbstrProvName) ( (This)->lpVtbl -> enumProviders(This,dwIndex,dwFlags,pbstrProvName) )
#define ICEnroll4_enumContainers(This,dwIndex,pbstr) ( (This)->lpVtbl -> enumContainers(This,dwIndex,pbstr) )
#define ICEnroll4_freeRequestInfo(This,PKCS7OrPKCS10) ( (This)->lpVtbl -> freeRequestInfo(This,PKCS7OrPKCS10) )
#define ICEnroll4_get_MyStoreName(This,pbstrName) ( (This)->lpVtbl -> get_MyStoreName(This,pbstrName) )
#define ICEnroll4_put_MyStoreName(This,bstrName) ( (This)->lpVtbl -> put_MyStoreName(This,bstrName) )
#define ICEnroll4_get_MyStoreType(This,pbstrType) ( (This)->lpVtbl -> get_MyStoreType(This,pbstrType) )
#define ICEnroll4_put_MyStoreType(This,bstrType) ( (This)->lpVtbl -> put_MyStoreType(This,bstrType) )
#define ICEnroll4_get_MyStoreFlags(This,pdwFlags) ( (This)->lpVtbl -> get_MyStoreFlags(This,pdwFlags) )
#define ICEnroll4_put_MyStoreFlags(This,dwFlags) ( (This)->lpVtbl -> put_MyStoreFlags(This,dwFlags) )
#define ICEnroll4_get_CAStoreName(This,pbstrName) ( (This)->lpVtbl -> get_CAStoreName(This,pbstrName) )
#define ICEnroll4_put_CAStoreName(This,bstrName) ( (This)->lpVtbl -> put_CAStoreName(This,bstrName) )
#define ICEnroll4_get_CAStoreType(This,pbstrType) ( (This)->lpVtbl -> get_CAStoreType(This,pbstrType) )
#define ICEnroll4_put_CAStoreType(This,bstrType) ( (This)->lpVtbl -> put_CAStoreType(This,bstrType) )
#define ICEnroll4_get_CAStoreFlags(This,pdwFlags) ( (This)->lpVtbl -> get_CAStoreFlags(This,pdwFlags) )
#define ICEnroll4_put_CAStoreFlags(This,dwFlags) ( (This)->lpVtbl -> put_CAStoreFlags(This,dwFlags) )
#define ICEnroll4_get_RootStoreName(This,pbstrName) ( (This)->lpVtbl -> get_RootStoreName(This,pbstrName) )
#define ICEnroll4_put_RootStoreName(This,bstrName) ( (This)->lpVtbl -> put_RootStoreName(This,bstrName) )
#define ICEnroll4_get_RootStoreType(This,pbstrType) ( (This)->lpVtbl -> get_RootStoreType(This,pbstrType) )
#define ICEnroll4_put_RootStoreType(This,bstrType) ( (This)->lpVtbl -> put_RootStoreType(This,bstrType) )
#define ICEnroll4_get_RootStoreFlags(This,pdwFlags) ( (This)->lpVtbl -> get_RootStoreFlags(This,pdwFlags) )
#define ICEnroll4_put_RootStoreFlags(This,dwFlags) ( (This)->lpVtbl -> put_RootStoreFlags(This,dwFlags) )
#define ICEnroll4_get_RequestStoreName(This,pbstrName) ( (This)->lpVtbl -> get_RequestStoreName(This,pbstrName) )
#define ICEnroll4_put_RequestStoreName(This,bstrName) ( (This)->lpVtbl -> put_RequestStoreName(This,bstrName) )
#define ICEnroll4_get_RequestStoreType(This,pbstrType) ( (This)->lpVtbl -> get_RequestStoreType(This,pbstrType) )
#define ICEnroll4_put_RequestStoreType(This,bstrType) ( (This)->lpVtbl -> put_RequestStoreType(This,bstrType) )
#define ICEnroll4_get_RequestStoreFlags(This,pdwFlags) ( (This)->lpVtbl -> get_RequestStoreFlags(This,pdwFlags) )
#define ICEnroll4_put_RequestStoreFlags(This,dwFlags) ( (This)->lpVtbl -> put_RequestStoreFlags(This,dwFlags) )
#define ICEnroll4_get_ContainerName(This,pbstrContainer) ( (This)->lpVtbl -> get_ContainerName(This,pbstrContainer) )
#define ICEnroll4_put_ContainerName(This,bstrContainer) ( (This)->lpVtbl -> put_ContainerName(This,bstrContainer) )
#define ICEnroll4_get_ProviderName(This,pbstrProvider) ( (This)->lpVtbl -> get_ProviderName(This,pbstrProvider) )
#define ICEnroll4_put_ProviderName(This,bstrProvider) ( (This)->lpVtbl -> put_ProviderName(This,bstrProvider) )
#define ICEnroll4_get_ProviderType(This,pdwType) ( (This)->lpVtbl -> get_ProviderType(This,pdwType) )
#define ICEnroll4_put_ProviderType(This,dwType) ( (This)->lpVtbl -> put_ProviderType(This,dwType) )
#define ICEnroll4_get_KeySpec(This,pdw) ( (This)->lpVtbl -> get_KeySpec(This,pdw) )
#define ICEnroll4_put_KeySpec(This,dw) ( (This)->lpVtbl -> put_KeySpec(This,dw) )
#define ICEnroll4_get_ProviderFlags(This,pdwFlags) ( (This)->lpVtbl -> get_ProviderFlags(This,pdwFlags) )
#define ICEnroll4_put_ProviderFlags(This,dwFlags) ( (This)->lpVtbl -> put_ProviderFlags(This,dwFlags) )
#define ICEnroll4_get_UseExistingKeySet(This,fUseExistingKeys) ( (This)->lpVtbl -> get_UseExistingKeySet(This,fUseExistingKeys) )
#define ICEnroll4_put_UseExistingKeySet(This,fUseExistingKeys) ( (This)->lpVtbl -> put_UseExistingKeySet(This,fUseExistingKeys) )
#define ICEnroll4_get_GenKeyFlags(This,pdwFlags) ( (This)->lpVtbl -> get_GenKeyFlags(This,pdwFlags) )
#define ICEnroll4_put_GenKeyFlags(This,dwFlags) ( (This)->lpVtbl -> put_GenKeyFlags(This,dwFlags) )
#define ICEnroll4_get_DeleteRequestCert(This,fDelete) ( (This)->lpVtbl -> get_DeleteRequestCert(This,fDelete) )
#define ICEnroll4_put_DeleteRequestCert(This,fDelete) ( (This)->lpVtbl -> put_DeleteRequestCert(This,fDelete) )
#define ICEnroll4_get_WriteCertToCSP(This,fBool) ( (This)->lpVtbl -> get_WriteCertToCSP(This,fBool) )
#define ICEnroll4_put_WriteCertToCSP(This,fBool) ( (This)->lpVtbl -> put_WriteCertToCSP(This,fBool) )
#define ICEnroll4_get_SPCFileName(This,pbstr) ( (This)->lpVtbl -> get_SPCFileName(This,pbstr) )
#define ICEnroll4_put_SPCFileName(This,bstr) ( (This)->lpVtbl -> put_SPCFileName(This,bstr) )
#define ICEnroll4_get_PVKFileName(This,pbstr) ( (This)->lpVtbl -> get_PVKFileName(This,pbstr) )
#define ICEnroll4_put_PVKFileName(This,bstr) ( (This)->lpVtbl -> put_PVKFileName(This,bstr) )
#define ICEnroll4_get_HashAlgorithm(This,pbstr) ( (This)->lpVtbl -> get_HashAlgorithm(This,pbstr) )
#define ICEnroll4_put_HashAlgorithm(This,bstr) ( (This)->lpVtbl -> put_HashAlgorithm(This,bstr) )
#define ICEnroll4_addCertTypeToRequest(This,CertType) ( (This)->lpVtbl -> addCertTypeToRequest(This,CertType) )
#define ICEnroll4_addNameValuePairToSignature(This,Name,Value) ( (This)->lpVtbl -> addNameValuePairToSignature(This,Name,Value) )
#define ICEnroll4_get_WriteCertToUserDS(This,fBool) ( (This)->lpVtbl -> get_WriteCertToUserDS(This,fBool) )
#define ICEnroll4_put_WriteCertToUserDS(This,fBool) ( (This)->lpVtbl -> put_WriteCertToUserDS(This,fBool) )
#define ICEnroll4_get_EnableT61DNEncoding(This,fBool) ( (This)->lpVtbl -> get_EnableT61DNEncoding(This,fBool) )
#define ICEnroll4_put_EnableT61DNEncoding(This,fBool) ( (This)->lpVtbl -> put_EnableT61DNEncoding(This,fBool) )
#define ICEnroll4_InstallPKCS7(This,PKCS7) ( (This)->lpVtbl -> InstallPKCS7(This,PKCS7) )
#define ICEnroll4_Reset(This) ( (This)->lpVtbl -> Reset(This) )
#define ICEnroll4_GetSupportedKeySpec(This,pdwKeySpec) ( (This)->lpVtbl -> GetSupportedKeySpec(This,pdwKeySpec) )
#define ICEnroll4_GetKeyLen(This,fMin,fExchange,pdwKeySize) ( (This)->lpVtbl -> GetKeyLen(This,fMin,fExchange,pdwKeySize) )
#define ICEnroll4_EnumAlgs(This,dwIndex,algClass,pdwAlgID) ( (This)->lpVtbl -> EnumAlgs(This,dwIndex,algClass,pdwAlgID) )
#define ICEnroll4_GetAlgName(This,algID,pbstr) ( (This)->lpVtbl -> GetAlgName(This,algID,pbstr) )
#define ICEnroll4_put_ReuseHardwareKeyIfUnableToGenNew(This,fReuseHardwareKeyIfUnableToGenNew) ( (This)->lpVtbl -> put_ReuseHardwareKeyIfUnableToGenNew(This,fReuseHardwareKeyIfUnableToGenNew) )
#define ICEnroll4_get_ReuseHardwareKeyIfUnableToGenNew(This,fReuseHardwareKeyIfUnableToGenNew) ( (This)->lpVtbl -> get_ReuseHardwareKeyIfUnableToGenNew(This,fReuseHardwareKeyIfUnableToGenNew) )
#define ICEnroll4_put_HashAlgID(This,hashAlgID) ( (This)->lpVtbl -> put_HashAlgID(This,hashAlgID) )
#define ICEnroll4_get_HashAlgID(This,hashAlgID) ( (This)->lpVtbl -> get_HashAlgID(This,hashAlgID) )
#define ICEnroll4_put_LimitExchangeKeyToEncipherment(This,fLimitExchangeKeyToEncipherment) ( (This)->lpVtbl -> put_LimitExchangeKeyToEncipherment(This,fLimitExchangeKeyToEncipherment) )
#define ICEnroll4_get_LimitExchangeKeyToEncipherment(This,fLimitExchangeKeyToEncipherment) ( (This)->lpVtbl -> get_LimitExchangeKeyToEncipherment(This,fLimitExchangeKeyToEncipherment) )
#define ICEnroll4_put_EnableSMIMECapabilities(This,fEnableSMIMECapabilities) ( (This)->lpVtbl -> put_EnableSMIMECapabilities(This,fEnableSMIMECapabilities) )
#define ICEnroll4_get_EnableSMIMECapabilities(This,fEnableSMIMECapabilities) ( (This)->lpVtbl -> get_EnableSMIMECapabilities(This,fEnableSMIMECapabilities) )
#define ICEnroll4_put_PrivateKeyArchiveCertificate(This,bstrCert) ( (This)->lpVtbl -> put_PrivateKeyArchiveCertificate(This,bstrCert) )
#define ICEnroll4_get_PrivateKeyArchiveCertificate(This,pbstrCert) ( (This)->lpVtbl -> get_PrivateKeyArchiveCertificate(This,pbstrCert) )
#define ICEnroll4_put_ThumbPrint(This,bstrThumbPrint) ( (This)->lpVtbl -> put_ThumbPrint(This,bstrThumbPrint) )
#define ICEnroll4_get_ThumbPrint(This,pbstrThumbPrint) ( (This)->lpVtbl -> get_ThumbPrint(This,pbstrThumbPrint) )
#define ICEnroll4_binaryToString(This,Flags,strBinary,pstrEncoded) ( (This)->lpVtbl -> binaryToString(This,Flags,strBinary,pstrEncoded) )
#define ICEnroll4_stringToBinary(This,Flags,strEncoded,pstrBinary) ( (This)->lpVtbl -> stringToBinary(This,Flags,strEncoded,pstrBinary) )
#define ICEnroll4_addExtensionToRequest(This,Flags,strName,strValue) ( (This)->lpVtbl -> addExtensionToRequest(This,Flags,strName,strValue) )
#define ICEnroll4_addAttributeToRequest(This,Flags,strName,strValue) ( (This)->lpVtbl -> addAttributeToRequest(This,Flags,strName,strValue) )
#define ICEnroll4_addNameValuePairToRequest(This,Flags,strName,strValue) ( (This)->lpVtbl -> addNameValuePairToRequest(This,Flags,strName,strValue) )
#define ICEnroll4_resetExtensions(This) ( (This)->lpVtbl -> resetExtensions(This) )
#define ICEnroll4_resetAttributes(This) ( (This)->lpVtbl -> resetAttributes(This) )
#define ICEnroll4_createRequest(This,Flags,strDNName,Usage,pstrRequest) ( (This)->lpVtbl -> createRequest(This,Flags,strDNName,Usage,pstrRequest) )
#define ICEnroll4_createFileRequest(This,Flags,strDNName,strUsage,strRequestFileName) ( (This)->lpVtbl -> createFileRequest(This,Flags,strDNName,strUsage,strRequestFileName) )
#define ICEnroll4_acceptResponse(This,strResponse) ( (This)->lpVtbl -> acceptResponse(This,strResponse) )
#define ICEnroll4_acceptFileResponse(This,strResponseFileName) ( (This)->lpVtbl -> acceptFileResponse(This,strResponseFileName) )
#define ICEnroll4_getCertFromResponse(This,strResponse,pstrCert) ( (This)->lpVtbl -> getCertFromResponse(This,strResponse,pstrCert) )
#define ICEnroll4_getCertFromFileResponse(This,strResponseFileName,pstrCert) ( (This)->lpVtbl -> getCertFromFileResponse(This,strResponseFileName,pstrCert) )
#define ICEnroll4_createPFX(This,strPassword,pstrPFX) ( (This)->lpVtbl -> createPFX(This,strPassword,pstrPFX) )
#define ICEnroll4_createFilePFX(This,strPassword,strPFXFileName) ( (This)->lpVtbl -> createFilePFX(This,strPassword,strPFXFileName) )
#define ICEnroll4_setPendingRequestInfo(This,lRequestID,strCADNS,strCAName,strFriendlyName) ( (This)->lpVtbl -> setPendingRequestInfo(This,lRequestID,strCADNS,strCAName,strFriendlyName) )
#define ICEnroll4_enumPendingRequest(This,lIndex,lDesiredProperty,pvarProperty) ( (This)->lpVtbl -> enumPendingRequest(This,lIndex,lDesiredProperty,pvarProperty) )
#define ICEnroll4_removePendingRequest(This,strThumbprint) ( (This)->lpVtbl -> removePendingRequest(This,strThumbprint) )
#define ICEnroll4_GetKeyLenEx(This,lSizeSpec,lKeySpec,pdwKeySize) ( (This)->lpVtbl -> GetKeyLenEx(This,lSizeSpec,lKeySpec,pdwKeySize) )
#define ICEnroll4_InstallPKCS7Ex(This,PKCS7,plCertInstalled) ( (This)->lpVtbl -> InstallPKCS7Ex(This,PKCS7,plCertInstalled) )
#define ICEnroll4_addCertTypeToRequestEx(This,lType,bstrOIDOrName,lMajorVersion,fMinorVersion,lMinorVersion) ( (This)->lpVtbl -> addCertTypeToRequestEx(This,lType,bstrOIDOrName,lMajorVersion,fMinorVersion,lMinorVersion) )
#define ICEnroll4_getProviderType(This,strProvName,plProvType) ( (This)->lpVtbl -> getProviderType(This,strProvName,plProvType) )
#define ICEnroll4_put_SignerCertificate(This,bstrCert) ( (This)->lpVtbl -> put_SignerCertificate(This,bstrCert) )
#define ICEnroll4_put_ClientId(This,lClientId) ( (This)->lpVtbl -> put_ClientId(This,lClientId) )
#define ICEnroll4_get_ClientId(This,plClientId) ( (This)->lpVtbl -> get_ClientId(This,plClientId) )
#define ICEnroll4_addBlobPropertyToCertificate(This,lPropertyId,lReserved,bstrProperty) ( (This)->lpVtbl -> addBlobPropertyToCertificate(This,lPropertyId,lReserved,bstrProperty) )
#define ICEnroll4_resetBlobProperties(This) ( (This)->lpVtbl -> resetBlobProperties(This) )
#define ICEnroll4_put_IncludeSubjectKeyID(This,fInclude) ( (This)->lpVtbl -> put_IncludeSubjectKeyID(This,fInclude) )
#define ICEnroll4_get_IncludeSubjectKeyID(This,pfInclude) ( (This)->lpVtbl -> get_IncludeSubjectKeyID(This,pfInclude) )
#endif
#endif
#ifndef __IEnroll_INTERFACE_DEFINED__
#define __IEnroll_INTERFACE_DEFINED__
extern const IID IID_IEnroll;
typedef struct IEnrollVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IEnroll * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IEnroll * This);
	ULONG(STDMETHODCALLTYPE * Release) (IEnroll * This);
	HRESULT(STDMETHODCALLTYPE * createFilePKCS10WStr) (IEnroll * This, LPCWSTR DNName, LPCWSTR Usage, LPCWSTR wszPKCS10FileName);
	HRESULT(STDMETHODCALLTYPE * acceptFilePKCS7WStr) (IEnroll * This, LPCWSTR wszPKCS7FileName);
	HRESULT(STDMETHODCALLTYPE * createPKCS10WStr) (IEnroll * This, LPCWSTR DNName, LPCWSTR Usage, PCRYPT_DATA_BLOB pPkcs10Blob);
	HRESULT(STDMETHODCALLTYPE * acceptPKCS7Blob) (IEnroll * This, PCRYPT_DATA_BLOB pBlobPKCS7);
	PCCERT_CONTEXT(STDMETHODCALLTYPE * getCertContextFromPKCS7) (IEnroll * This, PCRYPT_DATA_BLOB pBlobPKCS7);
	HCERTSTORE(STDMETHODCALLTYPE * getMyStore) (IEnroll * This);
	HCERTSTORE(STDMETHODCALLTYPE * getCAStore) (IEnroll * This);
	HCERTSTORE(STDMETHODCALLTYPE * getROOTHStore) (IEnroll * This);
	HRESULT(STDMETHODCALLTYPE * enumProvidersWStr) (IEnroll * This, LONG dwIndex, LONG dwFlags, LPWSTR * pbstrProvName);
	HRESULT(STDMETHODCALLTYPE * enumContainersWStr) (IEnroll * This, LONG dwIndex, LPWSTR * pbstr);
	HRESULT(STDMETHODCALLTYPE * freeRequestInfoBlob) (IEnroll * This, CRYPT_DATA_BLOB pkcs7OrPkcs10);
	HRESULT(STDMETHODCALLTYPE * get_MyStoreNameWStr) (IEnroll * This, LPWSTR * szwName);
	HRESULT(STDMETHODCALLTYPE * put_MyStoreNameWStr) (IEnroll * This, LPWSTR szwName);
	HRESULT(STDMETHODCALLTYPE * get_MyStoreTypeWStr) (IEnroll * This, LPWSTR * szwType);
	HRESULT(STDMETHODCALLTYPE * put_MyStoreTypeWStr) (IEnroll * This, LPWSTR szwType);
	HRESULT(STDMETHODCALLTYPE * get_MyStoreFlags) (IEnroll * This, LONG * pdwFlags);
	HRESULT(STDMETHODCALLTYPE * put_MyStoreFlags) (IEnroll * This, LONG dwFlags);
	HRESULT(STDMETHODCALLTYPE * get_CAStoreNameWStr) (IEnroll * This, LPWSTR * szwName);
	HRESULT(STDMETHODCALLTYPE * put_CAStoreNameWStr) (IEnroll * This, LPWSTR szwName);
	HRESULT(STDMETHODCALLTYPE * get_CAStoreTypeWStr) (IEnroll * This, LPWSTR * szwType);
	HRESULT(STDMETHODCALLTYPE * put_CAStoreTypeWStr) (IEnroll * This, LPWSTR szwType);
	HRESULT(STDMETHODCALLTYPE * get_CAStoreFlags) (IEnroll * This, LONG * pdwFlags);
	HRESULT(STDMETHODCALLTYPE * put_CAStoreFlags) (IEnroll * This, LONG dwFlags);
	HRESULT(STDMETHODCALLTYPE * get_RootStoreNameWStr) (IEnroll * This, LPWSTR * szwName);
	HRESULT(STDMETHODCALLTYPE * put_RootStoreNameWStr) (IEnroll * This, LPWSTR szwName);
	HRESULT(STDMETHODCALLTYPE * get_RootStoreTypeWStr) (IEnroll * This, LPWSTR * szwType);
	HRESULT(STDMETHODCALLTYPE * put_RootStoreTypeWStr) (IEnroll * This, LPWSTR szwType);
	HRESULT(STDMETHODCALLTYPE * get_RootStoreFlags) (IEnroll * This, LONG * pdwFlags);
	HRESULT(STDMETHODCALLTYPE * put_RootStoreFlags) (IEnroll * This, LONG dwFlags);
	HRESULT(STDMETHODCALLTYPE * get_RequestStoreNameWStr) (IEnroll * This, LPWSTR * szwName);
	HRESULT(STDMETHODCALLTYPE * put_RequestStoreNameWStr) (IEnroll * This, LPWSTR szwName);
	HRESULT(STDMETHODCALLTYPE * get_RequestStoreTypeWStr) (IEnroll * This, LPWSTR * szwType);
	HRESULT(STDMETHODCALLTYPE * put_RequestStoreTypeWStr) (IEnroll * This, LPWSTR szwType);
	HRESULT(STDMETHODCALLTYPE * get_RequestStoreFlags) (IEnroll * This, LONG * pdwFlags);
	HRESULT(STDMETHODCALLTYPE * put_RequestStoreFlags) (IEnroll * This, LONG dwFlags);
	HRESULT(STDMETHODCALLTYPE * get_ContainerNameWStr) (IEnroll * This, LPWSTR * szwContainer);
	HRESULT(STDMETHODCALLTYPE * put_ContainerNameWStr) (IEnroll * This, LPWSTR szwContainer);
	HRESULT(STDMETHODCALLTYPE * get_ProviderNameWStr) (IEnroll * This, LPWSTR * szwProvider);
	HRESULT(STDMETHODCALLTYPE * put_ProviderNameWStr) (IEnroll * This, LPWSTR szwProvider);
	HRESULT(STDMETHODCALLTYPE * get_ProviderType) (IEnroll * This, LONG * pdwType);
	HRESULT(STDMETHODCALLTYPE * put_ProviderType) (IEnroll * This, LONG dwType);
	HRESULT(STDMETHODCALLTYPE * get_KeySpec) (IEnroll * This, LONG * pdw);
	HRESULT(STDMETHODCALLTYPE * put_KeySpec) (IEnroll * This, LONG dw);
	HRESULT(STDMETHODCALLTYPE * get_ProviderFlags) (IEnroll * This, LONG * pdwFlags);
	HRESULT(STDMETHODCALLTYPE * put_ProviderFlags) (IEnroll * This, LONG dwFlags);
	HRESULT(STDMETHODCALLTYPE * get_UseExistingKeySet) (IEnroll * This, BOOL * fUseExistingKeys);
	HRESULT(STDMETHODCALLTYPE * put_UseExistingKeySet) (IEnroll * This, BOOL fUseExistingKeys);
	HRESULT(STDMETHODCALLTYPE * get_GenKeyFlags) (IEnroll * This, LONG * pdwFlags);
	HRESULT(STDMETHODCALLTYPE * put_GenKeyFlags) (IEnroll * This, LONG dwFlags);
	HRESULT(STDMETHODCALLTYPE * get_DeleteRequestCert) (IEnroll * This, BOOL * fDelete);
	HRESULT(STDMETHODCALLTYPE * put_DeleteRequestCert) (IEnroll * This, BOOL fDelete);
	HRESULT(STDMETHODCALLTYPE * get_WriteCertToUserDS) (IEnroll * This, BOOL * fBool);
	HRESULT(STDMETHODCALLTYPE * put_WriteCertToUserDS) (IEnroll * This, BOOL fBool);
	HRESULT(STDMETHODCALLTYPE * get_EnableT61DNEncoding) (IEnroll * This, BOOL * fBool);
	HRESULT(STDMETHODCALLTYPE * put_EnableT61DNEncoding) (IEnroll * This, BOOL fBool);
	HRESULT(STDMETHODCALLTYPE * get_WriteCertToCSP) (IEnroll * This, BOOL * fBool);
	HRESULT(STDMETHODCALLTYPE * put_WriteCertToCSP) (IEnroll * This, BOOL fBool);
	HRESULT(STDMETHODCALLTYPE * get_SPCFileNameWStr) (IEnroll * This, LPWSTR * szw);
	HRESULT(STDMETHODCALLTYPE * put_SPCFileNameWStr) (IEnroll * This, LPWSTR szw);
	HRESULT(STDMETHODCALLTYPE * get_PVKFileNameWStr) (IEnroll * This, LPWSTR * szw);
	HRESULT(STDMETHODCALLTYPE * put_PVKFileNameWStr) (IEnroll * This, LPWSTR szw);
	HRESULT(STDMETHODCALLTYPE * get_HashAlgorithmWStr) (IEnroll * This, LPWSTR * szw);
	HRESULT(STDMETHODCALLTYPE * put_HashAlgorithmWStr) (IEnroll * This, LPWSTR szw);
	HRESULT(STDMETHODCALLTYPE * get_RenewalCertificate) (IEnroll * This, PCCERT_CONTEXT * ppCertContext);
	HRESULT(STDMETHODCALLTYPE * put_RenewalCertificate) (IEnroll * This, PCCERT_CONTEXT pCertContext);
	HRESULT(STDMETHODCALLTYPE * AddCertTypeToRequestWStr) (IEnroll * This, LPWSTR szw);
	HRESULT(STDMETHODCALLTYPE * AddNameValuePairToSignatureWStr) (IEnroll * This, LPWSTR Name, LPWSTR Value);
	HRESULT(STDMETHODCALLTYPE * AddExtensionsToRequest) (IEnroll * This, PCERT_EXTENSIONS pCertExtensions);
	HRESULT(STDMETHODCALLTYPE * AddAuthenticatedAttributesToPKCS7Request) (IEnroll * This, PCRYPT_ATTRIBUTES pAttributes);
	HRESULT(STDMETHODCALLTYPE * CreatePKCS7RequestFromRequest) (IEnroll * This, PCRYPT_DATA_BLOB pRequest, PCCERT_CONTEXT pSigningCertContext, PCRYPT_DATA_BLOB pPkcs7Blob);
	END_INTERFACE
} IEnrollVtbl;
interface IEnroll
{
	CONST_VTBL struct IEnrollVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IEnroll_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IEnroll_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IEnroll_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IEnroll_createFilePKCS10WStr(This,DNName,Usage,wszPKCS10FileName) ( (This)->lpVtbl -> createFilePKCS10WStr(This,DNName,Usage,wszPKCS10FileName) )
#define IEnroll_acceptFilePKCS7WStr(This,wszPKCS7FileName) ( (This)->lpVtbl -> acceptFilePKCS7WStr(This,wszPKCS7FileName) )
#define IEnroll_createPKCS10WStr(This,DNName,Usage,pPkcs10Blob) ( (This)->lpVtbl -> createPKCS10WStr(This,DNName,Usage,pPkcs10Blob) )
#define IEnroll_acceptPKCS7Blob(This,pBlobPKCS7) ( (This)->lpVtbl -> acceptPKCS7Blob(This,pBlobPKCS7) )
#define IEnroll_getCertContextFromPKCS7(This,pBlobPKCS7) ( (This)->lpVtbl -> getCertContextFromPKCS7(This,pBlobPKCS7) )
#define IEnroll_getMyStore(This) ( (This)->lpVtbl -> getMyStore(This) )
#define IEnroll_getCAStore(This) ( (This)->lpVtbl -> getCAStore(This) )
#define IEnroll_getROOTHStore(This) ( (This)->lpVtbl -> getROOTHStore(This) )
#define IEnroll_enumProvidersWStr(This,dwIndex,dwFlags,pbstrProvName) ( (This)->lpVtbl -> enumProvidersWStr(This,dwIndex,dwFlags,pbstrProvName) )
#define IEnroll_enumContainersWStr(This,dwIndex,pbstr) ( (This)->lpVtbl -> enumContainersWStr(This,dwIndex,pbstr) )
#define IEnroll_freeRequestInfoBlob(This,pkcs7OrPkcs10) ( (This)->lpVtbl -> freeRequestInfoBlob(This,pkcs7OrPkcs10) )
#define IEnroll_get_MyStoreNameWStr(This,szwName) ( (This)->lpVtbl -> get_MyStoreNameWStr(This,szwName) )
#define IEnroll_put_MyStoreNameWStr(This,szwName) ( (This)->lpVtbl -> put_MyStoreNameWStr(This,szwName) )
#define IEnroll_get_MyStoreTypeWStr(This,szwType) ( (This)->lpVtbl -> get_MyStoreTypeWStr(This,szwType) )
#define IEnroll_put_MyStoreTypeWStr(This,szwType) ( (This)->lpVtbl -> put_MyStoreTypeWStr(This,szwType) )
#define IEnroll_get_MyStoreFlags(This,pdwFlags) ( (This)->lpVtbl -> get_MyStoreFlags(This,pdwFlags) )
#define IEnroll_put_MyStoreFlags(This,dwFlags) ( (This)->lpVtbl -> put_MyStoreFlags(This,dwFlags) )
#define IEnroll_get_CAStoreNameWStr(This,szwName) ( (This)->lpVtbl -> get_CAStoreNameWStr(This,szwName) )
#define IEnroll_put_CAStoreNameWStr(This,szwName) ( (This)->lpVtbl -> put_CAStoreNameWStr(This,szwName) )
#define IEnroll_get_CAStoreTypeWStr(This,szwType) ( (This)->lpVtbl -> get_CAStoreTypeWStr(This,szwType) )
#define IEnroll_put_CAStoreTypeWStr(This,szwType) ( (This)->lpVtbl -> put_CAStoreTypeWStr(This,szwType) )
#define IEnroll_get_CAStoreFlags(This,pdwFlags) ( (This)->lpVtbl -> get_CAStoreFlags(This,pdwFlags) )
#define IEnroll_put_CAStoreFlags(This,dwFlags) ( (This)->lpVtbl -> put_CAStoreFlags(This,dwFlags) )
#define IEnroll_get_RootStoreNameWStr(This,szwName) ( (This)->lpVtbl -> get_RootStoreNameWStr(This,szwName) )
#define IEnroll_put_RootStoreNameWStr(This,szwName) ( (This)->lpVtbl -> put_RootStoreNameWStr(This,szwName) )
#define IEnroll_get_RootStoreTypeWStr(This,szwType) ( (This)->lpVtbl -> get_RootStoreTypeWStr(This,szwType) )
#define IEnroll_put_RootStoreTypeWStr(This,szwType) ( (This)->lpVtbl -> put_RootStoreTypeWStr(This,szwType) )
#define IEnroll_get_RootStoreFlags(This,pdwFlags) ( (This)->lpVtbl -> get_RootStoreFlags(This,pdwFlags) )
#define IEnroll_put_RootStoreFlags(This,dwFlags) ( (This)->lpVtbl -> put_RootStoreFlags(This,dwFlags) )
#define IEnroll_get_RequestStoreNameWStr(This,szwName) ( (This)->lpVtbl -> get_RequestStoreNameWStr(This,szwName) )
#define IEnroll_put_RequestStoreNameWStr(This,szwName) ( (This)->lpVtbl -> put_RequestStoreNameWStr(This,szwName) )
#define IEnroll_get_RequestStoreTypeWStr(This,szwType) ( (This)->lpVtbl -> get_RequestStoreTypeWStr(This,szwType) )
#define IEnroll_put_RequestStoreTypeWStr(This,szwType) ( (This)->lpVtbl -> put_RequestStoreTypeWStr(This,szwType) )
#define IEnroll_get_RequestStoreFlags(This,pdwFlags) ( (This)->lpVtbl -> get_RequestStoreFlags(This,pdwFlags) )
#define IEnroll_put_RequestStoreFlags(This,dwFlags) ( (This)->lpVtbl -> put_RequestStoreFlags(This,dwFlags) )
#define IEnroll_get_ContainerNameWStr(This,szwContainer) ( (This)->lpVtbl -> get_ContainerNameWStr(This,szwContainer) )
#define IEnroll_put_ContainerNameWStr(This,szwContainer) ( (This)->lpVtbl -> put_ContainerNameWStr(This,szwContainer) )
#define IEnroll_get_ProviderNameWStr(This,szwProvider) ( (This)->lpVtbl -> get_ProviderNameWStr(This,szwProvider) )
#define IEnroll_put_ProviderNameWStr(This,szwProvider) ( (This)->lpVtbl -> put_ProviderNameWStr(This,szwProvider) )
#define IEnroll_get_ProviderType(This,pdwType) ( (This)->lpVtbl -> get_ProviderType(This,pdwType) )
#define IEnroll_put_ProviderType(This,dwType) ( (This)->lpVtbl -> put_ProviderType(This,dwType) )
#define IEnroll_get_KeySpec(This,pdw) ( (This)->lpVtbl -> get_KeySpec(This,pdw) )
#define IEnroll_put_KeySpec(This,dw) ( (This)->lpVtbl -> put_KeySpec(This,dw) )
#define IEnroll_get_ProviderFlags(This,pdwFlags) ( (This)->lpVtbl -> get_ProviderFlags(This,pdwFlags) )
#define IEnroll_put_ProviderFlags(This,dwFlags) ( (This)->lpVtbl -> put_ProviderFlags(This,dwFlags) )
#define IEnroll_get_UseExistingKeySet(This,fUseExistingKeys) ( (This)->lpVtbl -> get_UseExistingKeySet(This,fUseExistingKeys) )
#define IEnroll_put_UseExistingKeySet(This,fUseExistingKeys) ( (This)->lpVtbl -> put_UseExistingKeySet(This,fUseExistingKeys) )
#define IEnroll_get_GenKeyFlags(This,pdwFlags) ( (This)->lpVtbl -> get_GenKeyFlags(This,pdwFlags) )
#define IEnroll_put_GenKeyFlags(This,dwFlags) ( (This)->lpVtbl -> put_GenKeyFlags(This,dwFlags) )
#define IEnroll_get_DeleteRequestCert(This,fDelete) ( (This)->lpVtbl -> get_DeleteRequestCert(This,fDelete) )
#define IEnroll_put_DeleteRequestCert(This,fDelete) ( (This)->lpVtbl -> put_DeleteRequestCert(This,fDelete) )
#define IEnroll_get_WriteCertToUserDS(This,fBool) ( (This)->lpVtbl -> get_WriteCertToUserDS(This,fBool) )
#define IEnroll_put_WriteCertToUserDS(This,fBool) ( (This)->lpVtbl -> put_WriteCertToUserDS(This,fBool) )
#define IEnroll_get_EnableT61DNEncoding(This,fBool) ( (This)->lpVtbl -> get_EnableT61DNEncoding(This,fBool) )
#define IEnroll_put_EnableT61DNEncoding(This,fBool) ( (This)->lpVtbl -> put_EnableT61DNEncoding(This,fBool) )
#define IEnroll_get_WriteCertToCSP(This,fBool) ( (This)->lpVtbl -> get_WriteCertToCSP(This,fBool) )
#define IEnroll_put_WriteCertToCSP(This,fBool) ( (This)->lpVtbl -> put_WriteCertToCSP(This,fBool) )
#define IEnroll_get_SPCFileNameWStr(This,szw) ( (This)->lpVtbl -> get_SPCFileNameWStr(This,szw) )
#define IEnroll_put_SPCFileNameWStr(This,szw) ( (This)->lpVtbl -> put_SPCFileNameWStr(This,szw) )
#define IEnroll_get_PVKFileNameWStr(This,szw) ( (This)->lpVtbl -> get_PVKFileNameWStr(This,szw) )
#define IEnroll_put_PVKFileNameWStr(This,szw) ( (This)->lpVtbl -> put_PVKFileNameWStr(This,szw) )
#define IEnroll_get_HashAlgorithmWStr(This,szw) ( (This)->lpVtbl -> get_HashAlgorithmWStr(This,szw) )
#define IEnroll_put_HashAlgorithmWStr(This,szw) ( (This)->lpVtbl -> put_HashAlgorithmWStr(This,szw) )
#define IEnroll_get_RenewalCertificate(This,ppCertContext) ( (This)->lpVtbl -> get_RenewalCertificate(This,ppCertContext) )
#define IEnroll_put_RenewalCertificate(This,pCertContext) ( (This)->lpVtbl -> put_RenewalCertificate(This,pCertContext) )
#define IEnroll_AddCertTypeToRequestWStr(This,szw) ( (This)->lpVtbl -> AddCertTypeToRequestWStr(This,szw) )
#define IEnroll_AddNameValuePairToSignatureWStr(This,Name,Value) ( (This)->lpVtbl -> AddNameValuePairToSignatureWStr(This,Name,Value) )
#define IEnroll_AddExtensionsToRequest(This,pCertExtensions) ( (This)->lpVtbl -> AddExtensionsToRequest(This,pCertExtensions) )
#define IEnroll_AddAuthenticatedAttributesToPKCS7Request(This,pAttributes) ( (This)->lpVtbl -> AddAuthenticatedAttributesToPKCS7Request(This,pAttributes) )
#define IEnroll_CreatePKCS7RequestFromRequest(This,pRequest,pSigningCertContext,pPkcs7Blob) ( (This)->lpVtbl -> CreatePKCS7RequestFromRequest(This,pRequest,pSigningCertContext,pPkcs7Blob) )
#endif
#endif
#ifndef __IEnroll2_INTERFACE_DEFINED__
#define __IEnroll2_INTERFACE_DEFINED__
extern const IID IID_IEnroll2;
typedef struct IEnroll2Vtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IEnroll2 * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IEnroll2 * This);
	ULONG(STDMETHODCALLTYPE * Release) (IEnroll2 * This);
	HRESULT(STDMETHODCALLTYPE * createFilePKCS10WStr) (IEnroll2 * This, LPCWSTR DNName, LPCWSTR Usage, LPCWSTR wszPKCS10FileName);
	HRESULT(STDMETHODCALLTYPE * acceptFilePKCS7WStr) (IEnroll2 * This, LPCWSTR wszPKCS7FileName);
	HRESULT(STDMETHODCALLTYPE * createPKCS10WStr) (IEnroll2 * This, LPCWSTR DNName, LPCWSTR Usage, PCRYPT_DATA_BLOB pPkcs10Blob);
	HRESULT(STDMETHODCALLTYPE * acceptPKCS7Blob) (IEnroll2 * This, PCRYPT_DATA_BLOB pBlobPKCS7);
	PCCERT_CONTEXT(STDMETHODCALLTYPE * getCertContextFromPKCS7) (IEnroll2 * This, PCRYPT_DATA_BLOB pBlobPKCS7);
	HCERTSTORE(STDMETHODCALLTYPE * getMyStore) (IEnroll2 * This);
	HCERTSTORE(STDMETHODCALLTYPE * getCAStore) (IEnroll2 * This);
	HCERTSTORE(STDMETHODCALLTYPE * getROOTHStore) (IEnroll2 * This);
	HRESULT(STDMETHODCALLTYPE * enumProvidersWStr) (IEnroll2 * This, LONG dwIndex, LONG dwFlags, LPWSTR * pbstrProvName);
	HRESULT(STDMETHODCALLTYPE * enumContainersWStr) (IEnroll2 * This, LONG dwIndex, LPWSTR * pbstr);
	HRESULT(STDMETHODCALLTYPE * freeRequestInfoBlob) (IEnroll2 * This, CRYPT_DATA_BLOB pkcs7OrPkcs10);
	HRESULT(STDMETHODCALLTYPE * get_MyStoreNameWStr) (IEnroll2 * This, LPWSTR * szwName);
	HRESULT(STDMETHODCALLTYPE * put_MyStoreNameWStr) (IEnroll2 * This, LPWSTR szwName);
	HRESULT(STDMETHODCALLTYPE * get_MyStoreTypeWStr) (IEnroll2 * This, LPWSTR * szwType);
	HRESULT(STDMETHODCALLTYPE * put_MyStoreTypeWStr) (IEnroll2 * This, LPWSTR szwType);
	HRESULT(STDMETHODCALLTYPE * get_MyStoreFlags) (IEnroll2 * This, LONG * pdwFlags);
	HRESULT(STDMETHODCALLTYPE * put_MyStoreFlags) (IEnroll2 * This, LONG dwFlags);
	HRESULT(STDMETHODCALLTYPE * get_CAStoreNameWStr) (IEnroll2 * This, LPWSTR * szwName);
	HRESULT(STDMETHODCALLTYPE * put_CAStoreNameWStr) (IEnroll2 * This, LPWSTR szwName);
	HRESULT(STDMETHODCALLTYPE * get_CAStoreTypeWStr) (IEnroll2 * This, LPWSTR * szwType);
	HRESULT(STDMETHODCALLTYPE * put_CAStoreTypeWStr) (IEnroll2 * This, LPWSTR szwType);
	HRESULT(STDMETHODCALLTYPE * get_CAStoreFlags) (IEnroll2 * This, LONG * pdwFlags);
	HRESULT(STDMETHODCALLTYPE * put_CAStoreFlags) (IEnroll2 * This, LONG dwFlags);
	HRESULT(STDMETHODCALLTYPE * get_RootStoreNameWStr) (IEnroll2 * This, LPWSTR * szwName);
	HRESULT(STDMETHODCALLTYPE * put_RootStoreNameWStr) (IEnroll2 * This, LPWSTR szwName);
	HRESULT(STDMETHODCALLTYPE * get_RootStoreTypeWStr) (IEnroll2 * This, LPWSTR * szwType);
	HRESULT(STDMETHODCALLTYPE * put_RootStoreTypeWStr) (IEnroll2 * This, LPWSTR szwType);
	HRESULT(STDMETHODCALLTYPE * get_RootStoreFlags) (IEnroll2 * This, LONG * pdwFlags);
	HRESULT(STDMETHODCALLTYPE * put_RootStoreFlags) (IEnroll2 * This, LONG dwFlags);
	HRESULT(STDMETHODCALLTYPE * get_RequestStoreNameWStr) (IEnroll2 * This, LPWSTR * szwName);
	HRESULT(STDMETHODCALLTYPE * put_RequestStoreNameWStr) (IEnroll2 * This, LPWSTR szwName);
	HRESULT(STDMETHODCALLTYPE * get_RequestStoreTypeWStr) (IEnroll2 * This, LPWSTR * szwType);
	HRESULT(STDMETHODCALLTYPE * put_RequestStoreTypeWStr) (IEnroll2 * This, LPWSTR szwType);
	HRESULT(STDMETHODCALLTYPE * get_RequestStoreFlags) (IEnroll2 * This, LONG * pdwFlags);
	HRESULT(STDMETHODCALLTYPE * put_RequestStoreFlags) (IEnroll2 * This, LONG dwFlags);
	HRESULT(STDMETHODCALLTYPE * get_ContainerNameWStr) (IEnroll2 * This, LPWSTR * szwContainer);
	HRESULT(STDMETHODCALLTYPE * put_ContainerNameWStr) (IEnroll2 * This, LPWSTR szwContainer);
	HRESULT(STDMETHODCALLTYPE * get_ProviderNameWStr) (IEnroll2 * This, LPWSTR * szwProvider);
	HRESULT(STDMETHODCALLTYPE * put_ProviderNameWStr) (IEnroll2 * This, LPWSTR szwProvider);
	HRESULT(STDMETHODCALLTYPE * get_ProviderType) (IEnroll2 * This, LONG * pdwType);
	HRESULT(STDMETHODCALLTYPE * put_ProviderType) (IEnroll2 * This, LONG dwType);
	HRESULT(STDMETHODCALLTYPE * get_KeySpec) (IEnroll2 * This, LONG * pdw);
	HRESULT(STDMETHODCALLTYPE * put_KeySpec) (IEnroll2 * This, LONG dw);
	HRESULT(STDMETHODCALLTYPE * get_ProviderFlags) (IEnroll2 * This, LONG * pdwFlags);
	HRESULT(STDMETHODCALLTYPE * put_ProviderFlags) (IEnroll2 * This, LONG dwFlags);
	HRESULT(STDMETHODCALLTYPE * get_UseExistingKeySet) (IEnroll2 * This, BOOL * fUseExistingKeys);
	HRESULT(STDMETHODCALLTYPE * put_UseExistingKeySet) (IEnroll2 * This, BOOL fUseExistingKeys);
	HRESULT(STDMETHODCALLTYPE * get_GenKeyFlags) (IEnroll2 * This, LONG * pdwFlags);
	HRESULT(STDMETHODCALLTYPE * put_GenKeyFlags) (IEnroll2 * This, LONG dwFlags);
	HRESULT(STDMETHODCALLTYPE * get_DeleteRequestCert) (IEnroll2 * This, BOOL * fDelete);
	HRESULT(STDMETHODCALLTYPE * put_DeleteRequestCert) (IEnroll2 * This, BOOL fDelete);
	HRESULT(STDMETHODCALLTYPE * get_WriteCertToUserDS) (IEnroll2 * This, BOOL * fBool);
	HRESULT(STDMETHODCALLTYPE * put_WriteCertToUserDS) (IEnroll2 * This, BOOL fBool);
	HRESULT(STDMETHODCALLTYPE * get_EnableT61DNEncoding) (IEnroll2 * This, BOOL * fBool);
	HRESULT(STDMETHODCALLTYPE * put_EnableT61DNEncoding) (IEnroll2 * This, BOOL fBool);
	HRESULT(STDMETHODCALLTYPE * get_WriteCertToCSP) (IEnroll2 * This, BOOL * fBool);
	HRESULT(STDMETHODCALLTYPE * put_WriteCertToCSP) (IEnroll2 * This, BOOL fBool);
	HRESULT(STDMETHODCALLTYPE * get_SPCFileNameWStr) (IEnroll2 * This, LPWSTR * szw);
	HRESULT(STDMETHODCALLTYPE * put_SPCFileNameWStr) (IEnroll2 * This, LPWSTR szw);
	HRESULT(STDMETHODCALLTYPE * get_PVKFileNameWStr) (IEnroll2 * This, LPWSTR * szw);
	HRESULT(STDMETHODCALLTYPE * put_PVKFileNameWStr) (IEnroll2 * This, LPWSTR szw);
	HRESULT(STDMETHODCALLTYPE * get_HashAlgorithmWStr) (IEnroll2 * This, LPWSTR * szw);
	HRESULT(STDMETHODCALLTYPE * put_HashAlgorithmWStr) (IEnroll2 * This, LPWSTR szw);
	HRESULT(STDMETHODCALLTYPE * get_RenewalCertificate) (IEnroll2 * This, PCCERT_CONTEXT * ppCertContext);
	HRESULT(STDMETHODCALLTYPE * put_RenewalCertificate) (IEnroll2 * This, PCCERT_CONTEXT pCertContext);
	HRESULT(STDMETHODCALLTYPE * AddCertTypeToRequestWStr) (IEnroll2 * This, LPWSTR szw);
	HRESULT(STDMETHODCALLTYPE * AddNameValuePairToSignatureWStr) (IEnroll2 * This, LPWSTR Name, LPWSTR Value);
	HRESULT(STDMETHODCALLTYPE * AddExtensionsToRequest) (IEnroll2 * This, PCERT_EXTENSIONS pCertExtensions);
	HRESULT(STDMETHODCALLTYPE * AddAuthenticatedAttributesToPKCS7Request) (IEnroll2 * This, PCRYPT_ATTRIBUTES pAttributes);
	HRESULT(STDMETHODCALLTYPE * CreatePKCS7RequestFromRequest) (IEnroll2 * This, PCRYPT_DATA_BLOB pRequest, PCCERT_CONTEXT pSigningCertContext, PCRYPT_DATA_BLOB pPkcs7Blob);
	HRESULT(STDMETHODCALLTYPE * InstallPKCS7Blob) (IEnroll2 * This, PCRYPT_DATA_BLOB pBlobPKCS7);
	HRESULT(STDMETHODCALLTYPE * Reset) (IEnroll2 * This);
	HRESULT(STDMETHODCALLTYPE * GetSupportedKeySpec) (IEnroll2 * This, LONG * pdwKeySpec);
	HRESULT(STDMETHODCALLTYPE * GetKeyLen) (IEnroll2 * This, BOOL fMin, BOOL fExchange, LONG * pdwKeySize);
	HRESULT(STDMETHODCALLTYPE * EnumAlgs) (IEnroll2 * This, LONG dwIndex, LONG algClass, LONG * pdwAlgID);
	HRESULT(STDMETHODCALLTYPE * GetAlgNameWStr) (IEnroll2 * This, LONG algID, LPWSTR * ppwsz);
	HRESULT(STDMETHODCALLTYPE * put_ReuseHardwareKeyIfUnableToGenNew) (IEnroll2 * This, BOOL fReuseHardwareKeyIfUnableToGenNew);
	HRESULT(STDMETHODCALLTYPE * get_ReuseHardwareKeyIfUnableToGenNew) (IEnroll2 * This, BOOL * fReuseHardwareKeyIfUnableToGenNew);
	HRESULT(STDMETHODCALLTYPE * put_HashAlgID) (IEnroll2 * This, LONG hashAlgID);
	HRESULT(STDMETHODCALLTYPE * get_HashAlgID) (IEnroll2 * This, LONG * hashAlgID);
	HRESULT(STDMETHODCALLTYPE * SetHStoreMy) (IEnroll2 * This, HCERTSTORE hStore);
	HRESULT(STDMETHODCALLTYPE * SetHStoreCA) (IEnroll2 * This, HCERTSTORE hStore);
	HRESULT(STDMETHODCALLTYPE * SetHStoreROOT) (IEnroll2 * This, HCERTSTORE hStore);
	HRESULT(STDMETHODCALLTYPE * SetHStoreRequest) (IEnroll2 * This, HCERTSTORE hStore);
	HRESULT(STDMETHODCALLTYPE * put_LimitExchangeKeyToEncipherment) (IEnroll2 * This, BOOL fLimitExchangeKeyToEncipherment);
	HRESULT(STDMETHODCALLTYPE * get_LimitExchangeKeyToEncipherment) (IEnroll2 * This, BOOL * fLimitExchangeKeyToEncipherment);
	HRESULT(STDMETHODCALLTYPE * put_EnableSMIMECapabilities) (IEnroll2 * This, BOOL fEnableSMIMECapabilities);
	HRESULT(STDMETHODCALLTYPE * get_EnableSMIMECapabilities) (IEnroll2 * This, BOOL * fEnableSMIMECapabilities);
	END_INTERFACE
} IEnroll2Vtbl;
interface IEnroll2
{
	CONST_VTBL struct IEnroll2Vtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IEnroll2_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IEnroll2_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IEnroll2_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IEnroll2_createFilePKCS10WStr(This,DNName,Usage,wszPKCS10FileName) ( (This)->lpVtbl -> createFilePKCS10WStr(This,DNName,Usage,wszPKCS10FileName) )
#define IEnroll2_acceptFilePKCS7WStr(This,wszPKCS7FileName) ( (This)->lpVtbl -> acceptFilePKCS7WStr(This,wszPKCS7FileName) )
#define IEnroll2_createPKCS10WStr(This,DNName,Usage,pPkcs10Blob) ( (This)->lpVtbl -> createPKCS10WStr(This,DNName,Usage,pPkcs10Blob) )
#define IEnroll2_acceptPKCS7Blob(This,pBlobPKCS7) ( (This)->lpVtbl -> acceptPKCS7Blob(This,pBlobPKCS7) )
#define IEnroll2_getCertContextFromPKCS7(This,pBlobPKCS7) ( (This)->lpVtbl -> getCertContextFromPKCS7(This,pBlobPKCS7) )
#define IEnroll2_getMyStore(This) ( (This)->lpVtbl -> getMyStore(This) )
#define IEnroll2_getCAStore(This) ( (This)->lpVtbl -> getCAStore(This) )
#define IEnroll2_getROOTHStore(This) ( (This)->lpVtbl -> getROOTHStore(This) )
#define IEnroll2_enumProvidersWStr(This,dwIndex,dwFlags,pbstrProvName) ( (This)->lpVtbl -> enumProvidersWStr(This,dwIndex,dwFlags,pbstrProvName) )
#define IEnroll2_enumContainersWStr(This,dwIndex,pbstr) ( (This)->lpVtbl -> enumContainersWStr(This,dwIndex,pbstr) )
#define IEnroll2_freeRequestInfoBlob(This,pkcs7OrPkcs10) ( (This)->lpVtbl -> freeRequestInfoBlob(This,pkcs7OrPkcs10) )
#define IEnroll2_get_MyStoreNameWStr(This,szwName) ( (This)->lpVtbl -> get_MyStoreNameWStr(This,szwName) )
#define IEnroll2_put_MyStoreNameWStr(This,szwName) ( (This)->lpVtbl -> put_MyStoreNameWStr(This,szwName) )
#define IEnroll2_get_MyStoreTypeWStr(This,szwType) ( (This)->lpVtbl -> get_MyStoreTypeWStr(This,szwType) )
#define IEnroll2_put_MyStoreTypeWStr(This,szwType) ( (This)->lpVtbl -> put_MyStoreTypeWStr(This,szwType) )
#define IEnroll2_get_MyStoreFlags(This,pdwFlags) ( (This)->lpVtbl -> get_MyStoreFlags(This,pdwFlags) )
#define IEnroll2_put_MyStoreFlags(This,dwFlags) ( (This)->lpVtbl -> put_MyStoreFlags(This,dwFlags) )
#define IEnroll2_get_CAStoreNameWStr(This,szwName) ( (This)->lpVtbl -> get_CAStoreNameWStr(This,szwName) )
#define IEnroll2_put_CAStoreNameWStr(This,szwName) ( (This)->lpVtbl -> put_CAStoreNameWStr(This,szwName) )
#define IEnroll2_get_CAStoreTypeWStr(This,szwType) ( (This)->lpVtbl -> get_CAStoreTypeWStr(This,szwType) )
#define IEnroll2_put_CAStoreTypeWStr(This,szwType) ( (This)->lpVtbl -> put_CAStoreTypeWStr(This,szwType) )
#define IEnroll2_get_CAStoreFlags(This,pdwFlags) ( (This)->lpVtbl -> get_CAStoreFlags(This,pdwFlags) )
#define IEnroll2_put_CAStoreFlags(This,dwFlags) ( (This)->lpVtbl -> put_CAStoreFlags(This,dwFlags) )
#define IEnroll2_get_RootStoreNameWStr(This,szwName) ( (This)->lpVtbl -> get_RootStoreNameWStr(This,szwName) )
#define IEnroll2_put_RootStoreNameWStr(This,szwName) ( (This)->lpVtbl -> put_RootStoreNameWStr(This,szwName) )
#define IEnroll2_get_RootStoreTypeWStr(This,szwType) ( (This)->lpVtbl -> get_RootStoreTypeWStr(This,szwType) )
#define IEnroll2_put_RootStoreTypeWStr(This,szwType) ( (This)->lpVtbl -> put_RootStoreTypeWStr(This,szwType) )
#define IEnroll2_get_RootStoreFlags(This,pdwFlags) ( (This)->lpVtbl -> get_RootStoreFlags(This,pdwFlags) )
#define IEnroll2_put_RootStoreFlags(This,dwFlags) ( (This)->lpVtbl -> put_RootStoreFlags(This,dwFlags) )
#define IEnroll2_get_RequestStoreNameWStr(This,szwName) ( (This)->lpVtbl -> get_RequestStoreNameWStr(This,szwName) )
#define IEnroll2_put_RequestStoreNameWStr(This,szwName) ( (This)->lpVtbl -> put_RequestStoreNameWStr(This,szwName) )
#define IEnroll2_get_RequestStoreTypeWStr(This,szwType) ( (This)->lpVtbl -> get_RequestStoreTypeWStr(This,szwType) )
#define IEnroll2_put_RequestStoreTypeWStr(This,szwType) ( (This)->lpVtbl -> put_RequestStoreTypeWStr(This,szwType) )
#define IEnroll2_get_RequestStoreFlags(This,pdwFlags) ( (This)->lpVtbl -> get_RequestStoreFlags(This,pdwFlags) )
#define IEnroll2_put_RequestStoreFlags(This,dwFlags) ( (This)->lpVtbl -> put_RequestStoreFlags(This,dwFlags) )
#define IEnroll2_get_ContainerNameWStr(This,szwContainer) ( (This)->lpVtbl -> get_ContainerNameWStr(This,szwContainer) )
#define IEnroll2_put_ContainerNameWStr(This,szwContainer) ( (This)->lpVtbl -> put_ContainerNameWStr(This,szwContainer) )
#define IEnroll2_get_ProviderNameWStr(This,szwProvider) ( (This)->lpVtbl -> get_ProviderNameWStr(This,szwProvider) )
#define IEnroll2_put_ProviderNameWStr(This,szwProvider) ( (This)->lpVtbl -> put_ProviderNameWStr(This,szwProvider) )
#define IEnroll2_get_ProviderType(This,pdwType) ( (This)->lpVtbl -> get_ProviderType(This,pdwType) )
#define IEnroll2_put_ProviderType(This,dwType) ( (This)->lpVtbl -> put_ProviderType(This,dwType) )
#define IEnroll2_get_KeySpec(This,pdw) ( (This)->lpVtbl -> get_KeySpec(This,pdw) )
#define IEnroll2_put_KeySpec(This,dw) ( (This)->lpVtbl -> put_KeySpec(This,dw) )
#define IEnroll2_get_ProviderFlags(This,pdwFlags) ( (This)->lpVtbl -> get_ProviderFlags(This,pdwFlags) )
#define IEnroll2_put_ProviderFlags(This,dwFlags) ( (This)->lpVtbl -> put_ProviderFlags(This,dwFlags) )
#define IEnroll2_get_UseExistingKeySet(This,fUseExistingKeys) ( (This)->lpVtbl -> get_UseExistingKeySet(This,fUseExistingKeys) )
#define IEnroll2_put_UseExistingKeySet(This,fUseExistingKeys) ( (This)->lpVtbl -> put_UseExistingKeySet(This,fUseExistingKeys) )
#define IEnroll2_get_GenKeyFlags(This,pdwFlags) ( (This)->lpVtbl -> get_GenKeyFlags(This,pdwFlags) )
#define IEnroll2_put_GenKeyFlags(This,dwFlags) ( (This)->lpVtbl -> put_GenKeyFlags(This,dwFlags) )
#define IEnroll2_get_DeleteRequestCert(This,fDelete) ( (This)->lpVtbl -> get_DeleteRequestCert(This,fDelete) )
#define IEnroll2_put_DeleteRequestCert(This,fDelete) ( (This)->lpVtbl -> put_DeleteRequestCert(This,fDelete) )
#define IEnroll2_get_WriteCertToUserDS(This,fBool) ( (This)->lpVtbl -> get_WriteCertToUserDS(This,fBool) )
#define IEnroll2_put_WriteCertToUserDS(This,fBool) ( (This)->lpVtbl -> put_WriteCertToUserDS(This,fBool) )
#define IEnroll2_get_EnableT61DNEncoding(This,fBool) ( (This)->lpVtbl -> get_EnableT61DNEncoding(This,fBool) )
#define IEnroll2_put_EnableT61DNEncoding(This,fBool) ( (This)->lpVtbl -> put_EnableT61DNEncoding(This,fBool) )
#define IEnroll2_get_WriteCertToCSP(This,fBool) ( (This)->lpVtbl -> get_WriteCertToCSP(This,fBool) )
#define IEnroll2_put_WriteCertToCSP(This,fBool) ( (This)->lpVtbl -> put_WriteCertToCSP(This,fBool) )
#define IEnroll2_get_SPCFileNameWStr(This,szw) ( (This)->lpVtbl -> get_SPCFileNameWStr(This,szw) )
#define IEnroll2_put_SPCFileNameWStr(This,szw) ( (This)->lpVtbl -> put_SPCFileNameWStr(This,szw) )
#define IEnroll2_get_PVKFileNameWStr(This,szw) ( (This)->lpVtbl -> get_PVKFileNameWStr(This,szw) )
#define IEnroll2_put_PVKFileNameWStr(This,szw) ( (This)->lpVtbl -> put_PVKFileNameWStr(This,szw) )
#define IEnroll2_get_HashAlgorithmWStr(This,szw) ( (This)->lpVtbl -> get_HashAlgorithmWStr(This,szw) )
#define IEnroll2_put_HashAlgorithmWStr(This,szw) ( (This)->lpVtbl -> put_HashAlgorithmWStr(This,szw) )
#define IEnroll2_get_RenewalCertificate(This,ppCertContext) ( (This)->lpVtbl -> get_RenewalCertificate(This,ppCertContext) )
#define IEnroll2_put_RenewalCertificate(This,pCertContext) ( (This)->lpVtbl -> put_RenewalCertificate(This,pCertContext) )
#define IEnroll2_AddCertTypeToRequestWStr(This,szw) ( (This)->lpVtbl -> AddCertTypeToRequestWStr(This,szw) )
#define IEnroll2_AddNameValuePairToSignatureWStr(This,Name,Value) ( (This)->lpVtbl -> AddNameValuePairToSignatureWStr(This,Name,Value) )
#define IEnroll2_AddExtensionsToRequest(This,pCertExtensions) ( (This)->lpVtbl -> AddExtensionsToRequest(This,pCertExtensions) )
#define IEnroll2_AddAuthenticatedAttributesToPKCS7Request(This,pAttributes) ( (This)->lpVtbl -> AddAuthenticatedAttributesToPKCS7Request(This,pAttributes) )
#define IEnroll2_CreatePKCS7RequestFromRequest(This,pRequest,pSigningCertContext,pPkcs7Blob) ( (This)->lpVtbl -> CreatePKCS7RequestFromRequest(This,pRequest,pSigningCertContext,pPkcs7Blob) )
#define IEnroll2_InstallPKCS7Blob(This,pBlobPKCS7) ( (This)->lpVtbl -> InstallPKCS7Blob(This,pBlobPKCS7) )
#define IEnroll2_Reset(This) ( (This)->lpVtbl -> Reset(This) )
#define IEnroll2_GetSupportedKeySpec(This,pdwKeySpec) ( (This)->lpVtbl -> GetSupportedKeySpec(This,pdwKeySpec) )
#define IEnroll2_GetKeyLen(This,fMin,fExchange,pdwKeySize) ( (This)->lpVtbl -> GetKeyLen(This,fMin,fExchange,pdwKeySize) )
#define IEnroll2_EnumAlgs(This,dwIndex,algClass,pdwAlgID) ( (This)->lpVtbl -> EnumAlgs(This,dwIndex,algClass,pdwAlgID) )
#define IEnroll2_GetAlgNameWStr(This,algID,ppwsz) ( (This)->lpVtbl -> GetAlgNameWStr(This,algID,ppwsz) )
#define IEnroll2_put_ReuseHardwareKeyIfUnableToGenNew(This,fReuseHardwareKeyIfUnableToGenNew) ( (This)->lpVtbl -> put_ReuseHardwareKeyIfUnableToGenNew(This,fReuseHardwareKeyIfUnableToGenNew) )
#define IEnroll2_get_ReuseHardwareKeyIfUnableToGenNew(This,fReuseHardwareKeyIfUnableToGenNew) ( (This)->lpVtbl -> get_ReuseHardwareKeyIfUnableToGenNew(This,fReuseHardwareKeyIfUnableToGenNew) )
#define IEnroll2_put_HashAlgID(This,hashAlgID) ( (This)->lpVtbl -> put_HashAlgID(This,hashAlgID) )
#define IEnroll2_get_HashAlgID(This,hashAlgID) ( (This)->lpVtbl -> get_HashAlgID(This,hashAlgID) )
#define IEnroll2_SetHStoreMy(This,hStore) ( (This)->lpVtbl -> SetHStoreMy(This,hStore) )
#define IEnroll2_SetHStoreCA(This,hStore) ( (This)->lpVtbl -> SetHStoreCA(This,hStore) )
#define IEnroll2_SetHStoreROOT(This,hStore) ( (This)->lpVtbl -> SetHStoreROOT(This,hStore) )
#define IEnroll2_SetHStoreRequest(This,hStore) ( (This)->lpVtbl -> SetHStoreRequest(This,hStore) )
#define IEnroll2_put_LimitExchangeKeyToEncipherment(This,fLimitExchangeKeyToEncipherment) ( (This)->lpVtbl -> put_LimitExchangeKeyToEncipherment(This,fLimitExchangeKeyToEncipherment) )
#define IEnroll2_get_LimitExchangeKeyToEncipherment(This,fLimitExchangeKeyToEncipherment) ( (This)->lpVtbl -> get_LimitExchangeKeyToEncipherment(This,fLimitExchangeKeyToEncipherment) )
#define IEnroll2_put_EnableSMIMECapabilities(This,fEnableSMIMECapabilities) ( (This)->lpVtbl -> put_EnableSMIMECapabilities(This,fEnableSMIMECapabilities) )
#define IEnroll2_get_EnableSMIMECapabilities(This,fEnableSMIMECapabilities) ( (This)->lpVtbl -> get_EnableSMIMECapabilities(This,fEnableSMIMECapabilities) )
#endif
#endif
#ifndef __IEnroll4_INTERFACE_DEFINED__
#define __IEnroll4_INTERFACE_DEFINED__
extern const IID IID_IEnroll4;
typedef struct IEnroll4Vtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IEnroll4 * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IEnroll4 * This);
	ULONG(STDMETHODCALLTYPE * Release) (IEnroll4 * This);
	HRESULT(STDMETHODCALLTYPE * createFilePKCS10WStr) (IEnroll4 * This, LPCWSTR DNName, LPCWSTR Usage, LPCWSTR wszPKCS10FileName);
	HRESULT(STDMETHODCALLTYPE * acceptFilePKCS7WStr) (IEnroll4 * This, LPCWSTR wszPKCS7FileName);
	HRESULT(STDMETHODCALLTYPE * createPKCS10WStr) (IEnroll4 * This, LPCWSTR DNName, LPCWSTR Usage, PCRYPT_DATA_BLOB pPkcs10Blob);
	HRESULT(STDMETHODCALLTYPE * acceptPKCS7Blob) (IEnroll4 * This, PCRYPT_DATA_BLOB pBlobPKCS7);
	PCCERT_CONTEXT(STDMETHODCALLTYPE * getCertContextFromPKCS7) (IEnroll4 * This, PCRYPT_DATA_BLOB pBlobPKCS7);
	HCERTSTORE(STDMETHODCALLTYPE * getMyStore) (IEnroll4 * This);
	HCERTSTORE(STDMETHODCALLTYPE * getCAStore) (IEnroll4 * This);
	HCERTSTORE(STDMETHODCALLTYPE * getROOTHStore) (IEnroll4 * This);
	HRESULT(STDMETHODCALLTYPE * enumProvidersWStr) (IEnroll4 * This, LONG dwIndex, LONG dwFlags, LPWSTR * pbstrProvName);
	HRESULT(STDMETHODCALLTYPE * enumContainersWStr) (IEnroll4 * This, LONG dwIndex, LPWSTR * pbstr);
	HRESULT(STDMETHODCALLTYPE * freeRequestInfoBlob) (IEnroll4 * This, CRYPT_DATA_BLOB pkcs7OrPkcs10);
	HRESULT(STDMETHODCALLTYPE * get_MyStoreNameWStr) (IEnroll4 * This, LPWSTR * szwName);
	HRESULT(STDMETHODCALLTYPE * put_MyStoreNameWStr) (IEnroll4 * This, LPWSTR szwName);
	HRESULT(STDMETHODCALLTYPE * get_MyStoreTypeWStr) (IEnroll4 * This, LPWSTR * szwType);
	HRESULT(STDMETHODCALLTYPE * put_MyStoreTypeWStr) (IEnroll4 * This, LPWSTR szwType);
	HRESULT(STDMETHODCALLTYPE * get_MyStoreFlags) (IEnroll4 * This, LONG * pdwFlags);
	HRESULT(STDMETHODCALLTYPE * put_MyStoreFlags) (IEnroll4 * This, LONG dwFlags);
	HRESULT(STDMETHODCALLTYPE * get_CAStoreNameWStr) (IEnroll4 * This, LPWSTR * szwName);
	HRESULT(STDMETHODCALLTYPE * put_CAStoreNameWStr) (IEnroll4 * This, LPWSTR szwName);
	HRESULT(STDMETHODCALLTYPE * get_CAStoreTypeWStr) (IEnroll4 * This, LPWSTR * szwType);
	HRESULT(STDMETHODCALLTYPE * put_CAStoreTypeWStr) (IEnroll4 * This, LPWSTR szwType);
	HRESULT(STDMETHODCALLTYPE * get_CAStoreFlags) (IEnroll4 * This, LONG * pdwFlags);
	HRESULT(STDMETHODCALLTYPE * put_CAStoreFlags) (IEnroll4 * This, LONG dwFlags);
	HRESULT(STDMETHODCALLTYPE * get_RootStoreNameWStr) (IEnroll4 * This, LPWSTR * szwName);
	HRESULT(STDMETHODCALLTYPE * put_RootStoreNameWStr) (IEnroll4 * This, LPWSTR szwName);
	HRESULT(STDMETHODCALLTYPE * get_RootStoreTypeWStr) (IEnroll4 * This, LPWSTR * szwType);
	HRESULT(STDMETHODCALLTYPE * put_RootStoreTypeWStr) (IEnroll4 * This, LPWSTR szwType);
	HRESULT(STDMETHODCALLTYPE * get_RootStoreFlags) (IEnroll4 * This, LONG * pdwFlags);
	HRESULT(STDMETHODCALLTYPE * put_RootStoreFlags) (IEnroll4 * This, LONG dwFlags);
	HRESULT(STDMETHODCALLTYPE * get_RequestStoreNameWStr) (IEnroll4 * This, LPWSTR * szwName);
	HRESULT(STDMETHODCALLTYPE * put_RequestStoreNameWStr) (IEnroll4 * This, LPWSTR szwName);
	HRESULT(STDMETHODCALLTYPE * get_RequestStoreTypeWStr) (IEnroll4 * This, LPWSTR * szwType);
	HRESULT(STDMETHODCALLTYPE * put_RequestStoreTypeWStr) (IEnroll4 * This, LPWSTR szwType);
	HRESULT(STDMETHODCALLTYPE * get_RequestStoreFlags) (IEnroll4 * This, LONG * pdwFlags);
	HRESULT(STDMETHODCALLTYPE * put_RequestStoreFlags) (IEnroll4 * This, LONG dwFlags);
	HRESULT(STDMETHODCALLTYPE * get_ContainerNameWStr) (IEnroll4 * This, LPWSTR * szwContainer);
	HRESULT(STDMETHODCALLTYPE * put_ContainerNameWStr) (IEnroll4 * This, LPWSTR szwContainer);
	HRESULT(STDMETHODCALLTYPE * get_ProviderNameWStr) (IEnroll4 * This, LPWSTR * szwProvider);
	HRESULT(STDMETHODCALLTYPE * put_ProviderNameWStr) (IEnroll4 * This, LPWSTR szwProvider);
	HRESULT(STDMETHODCALLTYPE * get_ProviderType) (IEnroll4 * This, LONG * pdwType);
	HRESULT(STDMETHODCALLTYPE * put_ProviderType) (IEnroll4 * This, LONG dwType);
	HRESULT(STDMETHODCALLTYPE * get_KeySpec) (IEnroll4 * This, LONG * pdw);
	HRESULT(STDMETHODCALLTYPE * put_KeySpec) (IEnroll4 * This, LONG dw);
	HRESULT(STDMETHODCALLTYPE * get_ProviderFlags) (IEnroll4 * This, LONG * pdwFlags);
	HRESULT(STDMETHODCALLTYPE * put_ProviderFlags) (IEnroll4 * This, LONG dwFlags);
	HRESULT(STDMETHODCALLTYPE * get_UseExistingKeySet) (IEnroll4 * This, BOOL * fUseExistingKeys);
	HRESULT(STDMETHODCALLTYPE * put_UseExistingKeySet) (IEnroll4 * This, BOOL fUseExistingKeys);
	HRESULT(STDMETHODCALLTYPE * get_GenKeyFlags) (IEnroll4 * This, LONG * pdwFlags);
	HRESULT(STDMETHODCALLTYPE * put_GenKeyFlags) (IEnroll4 * This, LONG dwFlags);
	HRESULT(STDMETHODCALLTYPE * get_DeleteRequestCert) (IEnroll4 * This, BOOL * fDelete);
	HRESULT(STDMETHODCALLTYPE * put_DeleteRequestCert) (IEnroll4 * This, BOOL fDelete);
	HRESULT(STDMETHODCALLTYPE * get_WriteCertToUserDS) (IEnroll4 * This, BOOL * fBool);
	HRESULT(STDMETHODCALLTYPE * put_WriteCertToUserDS) (IEnroll4 * This, BOOL fBool);
	HRESULT(STDMETHODCALLTYPE * get_EnableT61DNEncoding) (IEnroll4 * This, BOOL * fBool);
	HRESULT(STDMETHODCALLTYPE * put_EnableT61DNEncoding) (IEnroll4 * This, BOOL fBool);
	HRESULT(STDMETHODCALLTYPE * get_WriteCertToCSP) (IEnroll4 * This, BOOL * fBool);
	HRESULT(STDMETHODCALLTYPE * put_WriteCertToCSP) (IEnroll4 * This, BOOL fBool);
	HRESULT(STDMETHODCALLTYPE * get_SPCFileNameWStr) (IEnroll4 * This, LPWSTR * szw);
	HRESULT(STDMETHODCALLTYPE * put_SPCFileNameWStr) (IEnroll4 * This, LPWSTR szw);
	HRESULT(STDMETHODCALLTYPE * get_PVKFileNameWStr) (IEnroll4 * This, LPWSTR * szw);
	HRESULT(STDMETHODCALLTYPE * put_PVKFileNameWStr) (IEnroll4 * This, LPWSTR szw);
	HRESULT(STDMETHODCALLTYPE * get_HashAlgorithmWStr) (IEnroll4 * This, LPWSTR * szw);
	HRESULT(STDMETHODCALLTYPE * put_HashAlgorithmWStr) (IEnroll4 * This, LPWSTR szw);
	HRESULT(STDMETHODCALLTYPE * get_RenewalCertificate) (IEnroll4 * This, PCCERT_CONTEXT * ppCertContext);
	HRESULT(STDMETHODCALLTYPE * put_RenewalCertificate) (IEnroll4 * This, PCCERT_CONTEXT pCertContext);
	HRESULT(STDMETHODCALLTYPE * AddCertTypeToRequestWStr) (IEnroll4 * This, LPWSTR szw);
	HRESULT(STDMETHODCALLTYPE * AddNameValuePairToSignatureWStr) (IEnroll4 * This, LPWSTR Name, LPWSTR Value);
	HRESULT(STDMETHODCALLTYPE * AddExtensionsToRequest) (IEnroll4 * This, PCERT_EXTENSIONS pCertExtensions);
	HRESULT(STDMETHODCALLTYPE * AddAuthenticatedAttributesToPKCS7Request) (IEnroll4 * This, PCRYPT_ATTRIBUTES pAttributes);
	HRESULT(STDMETHODCALLTYPE * CreatePKCS7RequestFromRequest) (IEnroll4 * This, PCRYPT_DATA_BLOB pRequest, PCCERT_CONTEXT pSigningCertContext, PCRYPT_DATA_BLOB pPkcs7Blob);
	HRESULT(STDMETHODCALLTYPE * InstallPKCS7Blob) (IEnroll4 * This, PCRYPT_DATA_BLOB pBlobPKCS7);
	HRESULT(STDMETHODCALLTYPE * Reset) (IEnroll4 * This);
	HRESULT(STDMETHODCALLTYPE * GetSupportedKeySpec) (IEnroll4 * This, LONG * pdwKeySpec);
	HRESULT(STDMETHODCALLTYPE * GetKeyLen) (IEnroll4 * This, BOOL fMin, BOOL fExchange, LONG * pdwKeySize);
	HRESULT(STDMETHODCALLTYPE * EnumAlgs) (IEnroll4 * This, LONG dwIndex, LONG algClass, LONG * pdwAlgID);
	HRESULT(STDMETHODCALLTYPE * GetAlgNameWStr) (IEnroll4 * This, LONG algID, LPWSTR * ppwsz);
	HRESULT(STDMETHODCALLTYPE * put_ReuseHardwareKeyIfUnableToGenNew) (IEnroll4 * This, BOOL fReuseHardwareKeyIfUnableToGenNew);
	HRESULT(STDMETHODCALLTYPE * get_ReuseHardwareKeyIfUnableToGenNew) (IEnroll4 * This, BOOL * fReuseHardwareKeyIfUnableToGenNew);
	HRESULT(STDMETHODCALLTYPE * put_HashAlgID) (IEnroll4 * This, LONG hashAlgID);
	HRESULT(STDMETHODCALLTYPE * get_HashAlgID) (IEnroll4 * This, LONG * hashAlgID);
	HRESULT(STDMETHODCALLTYPE * SetHStoreMy) (IEnroll4 * This, HCERTSTORE hStore);
	HRESULT(STDMETHODCALLTYPE * SetHStoreCA) (IEnroll4 * This, HCERTSTORE hStore);
	HRESULT(STDMETHODCALLTYPE * SetHStoreROOT) (IEnroll4 * This, HCERTSTORE hStore);
	HRESULT(STDMETHODCALLTYPE * SetHStoreRequest) (IEnroll4 * This, HCERTSTORE hStore);
	HRESULT(STDMETHODCALLTYPE * put_LimitExchangeKeyToEncipherment) (IEnroll4 * This, BOOL fLimitExchangeKeyToEncipherment);
	HRESULT(STDMETHODCALLTYPE * get_LimitExchangeKeyToEncipherment) (IEnroll4 * This, BOOL * fLimitExchangeKeyToEncipherment);
	HRESULT(STDMETHODCALLTYPE * put_EnableSMIMECapabilities) (IEnroll4 * This, BOOL fEnableSMIMECapabilities);
	HRESULT(STDMETHODCALLTYPE * get_EnableSMIMECapabilities) (IEnroll4 * This, BOOL * fEnableSMIMECapabilities);
	HRESULT(STDMETHODCALLTYPE * put_ThumbPrintWStr) (IEnroll4 * This, CRYPT_DATA_BLOB thumbPrintBlob);
	HRESULT(STDMETHODCALLTYPE * get_ThumbPrintWStr) (IEnroll4 * This, PCRYPT_DATA_BLOB thumbPrintBlob);
	HRESULT(STDMETHODCALLTYPE * SetPrivateKeyArchiveCertificate) (IEnroll4 * This, PCCERT_CONTEXT pPrivateKeyArchiveCert);
	PCCERT_CONTEXT(STDMETHODCALLTYPE * GetPrivateKeyArchiveCertificate) (IEnroll4 * This);
	HRESULT(STDMETHODCALLTYPE * binaryBlobToString) (IEnroll4 * This, LONG Flags, PCRYPT_DATA_BLOB pblobBinary, LPWSTR * ppwszString);
	HRESULT(STDMETHODCALLTYPE * stringToBinaryBlob) (IEnroll4 * This, LONG Flags, LPCWSTR pwszString, PCRYPT_DATA_BLOB pblobBinary, LONG * pdwSkip, LONG * pdwFlags);
	HRESULT(STDMETHODCALLTYPE * addExtensionToRequestWStr) (IEnroll4 * This, LONG Flags, LPCWSTR pwszName, PCRYPT_DATA_BLOB pblobValue);
	HRESULT(STDMETHODCALLTYPE * addAttributeToRequestWStr) (IEnroll4 * This, LONG Flags, LPCWSTR pwszName, PCRYPT_DATA_BLOB pblobValue);
	HRESULT(STDMETHODCALLTYPE * addNameValuePairToRequestWStr) (IEnroll4 * This, LONG Flags, LPCWSTR pwszName, LPCWSTR pwszValue);
	HRESULT(STDMETHODCALLTYPE * resetExtensions) (IEnroll4 * This);
	HRESULT(STDMETHODCALLTYPE * resetAttributes) (IEnroll4 * This);
	HRESULT(STDMETHODCALLTYPE * createRequestWStr) (IEnroll4 * This, LONG Flags, LPCWSTR pwszDNName, LPCWSTR pwszUsage, PCRYPT_DATA_BLOB pblobRequest);
	HRESULT(STDMETHODCALLTYPE * createFileRequestWStr) (IEnroll4 * This, LONG Flags, LPCWSTR pwszDNName, LPCWSTR pwszUsage, LPCWSTR pwszRequestFileName);
	HRESULT(STDMETHODCALLTYPE * acceptResponseBlob) (IEnroll4 * This, PCRYPT_DATA_BLOB pblobResponse);
	HRESULT(STDMETHODCALLTYPE * acceptFileResponseWStr) (IEnroll4 * This, LPCWSTR pwszResponseFileName);
	HRESULT(STDMETHODCALLTYPE * getCertContextFromResponseBlob) (IEnroll4 * This, PCRYPT_DATA_BLOB pblobResponse, PCCERT_CONTEXT * ppCertContext);
	HRESULT(STDMETHODCALLTYPE * getCertContextFromFileResponseWStr) (IEnroll4 * This, LPCWSTR pwszResponseFileName, PCCERT_CONTEXT * ppCertContext);
	HRESULT(STDMETHODCALLTYPE * createPFXWStr) (IEnroll4 * This, LPCWSTR pwszPassword, PCRYPT_DATA_BLOB pblobPFX);
	HRESULT(STDMETHODCALLTYPE * createFilePFXWStr) (IEnroll4 * This, LPCWSTR pwszPassword, LPCWSTR pwszPFXFileName);
	HRESULT(STDMETHODCALLTYPE * setPendingRequestInfoWStr) (IEnroll4 * This, LONG lRequestID, LPCWSTR pwszCADNS, LPCWSTR pwszCAName, LPCWSTR pwszFriendlyName);
	HRESULT(STDMETHODCALLTYPE * enumPendingRequestWStr) (IEnroll4 * This, LONG lIndex, LONG lDesiredProperty, LPVOID ppProperty);
	HRESULT(STDMETHODCALLTYPE * removePendingRequestWStr) (IEnroll4 * This, CRYPT_DATA_BLOB thumbPrintBlob);
	HRESULT(STDMETHODCALLTYPE * GetKeyLenEx) (IEnroll4 * This, LONG lSizeSpec, LONG lKeySpec, LONG * pdwKeySize);
	HRESULT(STDMETHODCALLTYPE * InstallPKCS7BlobEx) (IEnroll4 * This, PCRYPT_DATA_BLOB pBlobPKCS7, LONG * plCertInstalled);
	HRESULT(STDMETHODCALLTYPE * AddCertTypeToRequestWStrEx) (IEnroll4 * This, LONG lType, LPCWSTR pwszOIDOrName, LONG lMajorVersion, BOOL fMinorVersion, LONG lMinorVersion);
	HRESULT(STDMETHODCALLTYPE * getProviderTypeWStr) (IEnroll4 * This, LPCWSTR pwszProvName, LONG * plProvType);
	HRESULT(STDMETHODCALLTYPE * addBlobPropertyToCertificateWStr) (IEnroll4 * This, LONG lPropertyId, LONG lReserved, PCRYPT_DATA_BLOB pBlobProperty);
	HRESULT(STDMETHODCALLTYPE * SetSignerCertificate) (IEnroll4 * This, PCCERT_CONTEXT pSignerCert);
	HRESULT(STDMETHODCALLTYPE * put_ClientId) (IEnroll4 * This, LONG lClientId);
	HRESULT(STDMETHODCALLTYPE * get_ClientId) (IEnroll4 * This, LONG * plClientId);
	HRESULT(STDMETHODCALLTYPE * put_IncludeSubjectKeyID) (IEnroll4 * This, BOOL fInclude);
	HRESULT(STDMETHODCALLTYPE * get_IncludeSubjectKeyID) (IEnroll4 * This, BOOL * pfInclude);
	END_INTERFACE
} IEnroll4Vtbl;
interface IEnroll4
{
	CONST_VTBL struct IEnroll4Vtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IEnroll4_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IEnroll4_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IEnroll4_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IEnroll4_createFilePKCS10WStr(This,DNName,Usage,wszPKCS10FileName) ( (This)->lpVtbl -> createFilePKCS10WStr(This,DNName,Usage,wszPKCS10FileName) )
#define IEnroll4_acceptFilePKCS7WStr(This,wszPKCS7FileName) ( (This)->lpVtbl -> acceptFilePKCS7WStr(This,wszPKCS7FileName) )
#define IEnroll4_createPKCS10WStr(This,DNName,Usage,pPkcs10Blob) ( (This)->lpVtbl -> createPKCS10WStr(This,DNName,Usage,pPkcs10Blob) )
#define IEnroll4_acceptPKCS7Blob(This,pBlobPKCS7) ( (This)->lpVtbl -> acceptPKCS7Blob(This,pBlobPKCS7) )
#define IEnroll4_getCertContextFromPKCS7(This,pBlobPKCS7) ( (This)->lpVtbl -> getCertContextFromPKCS7(This,pBlobPKCS7) )
#define IEnroll4_getMyStore(This) ( (This)->lpVtbl -> getMyStore(This) )
#define IEnroll4_getCAStore(This) ( (This)->lpVtbl -> getCAStore(This) )
#define IEnroll4_getROOTHStore(This) ( (This)->lpVtbl -> getROOTHStore(This) )
#define IEnroll4_enumProvidersWStr(This,dwIndex,dwFlags,pbstrProvName) ( (This)->lpVtbl -> enumProvidersWStr(This,dwIndex,dwFlags,pbstrProvName) )
#define IEnroll4_enumContainersWStr(This,dwIndex,pbstr) ( (This)->lpVtbl -> enumContainersWStr(This,dwIndex,pbstr) )
#define IEnroll4_freeRequestInfoBlob(This,pkcs7OrPkcs10) ( (This)->lpVtbl -> freeRequestInfoBlob(This,pkcs7OrPkcs10) )
#define IEnroll4_get_MyStoreNameWStr(This,szwName) ( (This)->lpVtbl -> get_MyStoreNameWStr(This,szwName) )
#define IEnroll4_put_MyStoreNameWStr(This,szwName) ( (This)->lpVtbl -> put_MyStoreNameWStr(This,szwName) )
#define IEnroll4_get_MyStoreTypeWStr(This,szwType) ( (This)->lpVtbl -> get_MyStoreTypeWStr(This,szwType) )
#define IEnroll4_put_MyStoreTypeWStr(This,szwType) ( (This)->lpVtbl -> put_MyStoreTypeWStr(This,szwType) )
#define IEnroll4_get_MyStoreFlags(This,pdwFlags) ( (This)->lpVtbl -> get_MyStoreFlags(This,pdwFlags) )
#define IEnroll4_put_MyStoreFlags(This,dwFlags) ( (This)->lpVtbl -> put_MyStoreFlags(This,dwFlags) )
#define IEnroll4_get_CAStoreNameWStr(This,szwName) ( (This)->lpVtbl -> get_CAStoreNameWStr(This,szwName) )
#define IEnroll4_put_CAStoreNameWStr(This,szwName) ( (This)->lpVtbl -> put_CAStoreNameWStr(This,szwName) )
#define IEnroll4_get_CAStoreTypeWStr(This,szwType) ( (This)->lpVtbl -> get_CAStoreTypeWStr(This,szwType) )
#define IEnroll4_put_CAStoreTypeWStr(This,szwType) ( (This)->lpVtbl -> put_CAStoreTypeWStr(This,szwType) )
#define IEnroll4_get_CAStoreFlags(This,pdwFlags) ( (This)->lpVtbl -> get_CAStoreFlags(This,pdwFlags) )
#define IEnroll4_put_CAStoreFlags(This,dwFlags) ( (This)->lpVtbl -> put_CAStoreFlags(This,dwFlags) )
#define IEnroll4_get_RootStoreNameWStr(This,szwName) ( (This)->lpVtbl -> get_RootStoreNameWStr(This,szwName) )
#define IEnroll4_put_RootStoreNameWStr(This,szwName) ( (This)->lpVtbl -> put_RootStoreNameWStr(This,szwName) )
#define IEnroll4_get_RootStoreTypeWStr(This,szwType) ( (This)->lpVtbl -> get_RootStoreTypeWStr(This,szwType) )
#define IEnroll4_put_RootStoreTypeWStr(This,szwType) ( (This)->lpVtbl -> put_RootStoreTypeWStr(This,szwType) )
#define IEnroll4_get_RootStoreFlags(This,pdwFlags) ( (This)->lpVtbl -> get_RootStoreFlags(This,pdwFlags) )
#define IEnroll4_put_RootStoreFlags(This,dwFlags) ( (This)->lpVtbl -> put_RootStoreFlags(This,dwFlags) )
#define IEnroll4_get_RequestStoreNameWStr(This,szwName) ( (This)->lpVtbl -> get_RequestStoreNameWStr(This,szwName) )
#define IEnroll4_put_RequestStoreNameWStr(This,szwName) ( (This)->lpVtbl -> put_RequestStoreNameWStr(This,szwName) )
#define IEnroll4_get_RequestStoreTypeWStr(This,szwType) ( (This)->lpVtbl -> get_RequestStoreTypeWStr(This,szwType) )
#define IEnroll4_put_RequestStoreTypeWStr(This,szwType) ( (This)->lpVtbl -> put_RequestStoreTypeWStr(This,szwType) )
#define IEnroll4_get_RequestStoreFlags(This,pdwFlags) ( (This)->lpVtbl -> get_RequestStoreFlags(This,pdwFlags) )
#define IEnroll4_put_RequestStoreFlags(This,dwFlags) ( (This)->lpVtbl -> put_RequestStoreFlags(This,dwFlags) )
#define IEnroll4_get_ContainerNameWStr(This,szwContainer) ( (This)->lpVtbl -> get_ContainerNameWStr(This,szwContainer) )
#define IEnroll4_put_ContainerNameWStr(This,szwContainer) ( (This)->lpVtbl -> put_ContainerNameWStr(This,szwContainer) )
#define IEnroll4_get_ProviderNameWStr(This,szwProvider) ( (This)->lpVtbl -> get_ProviderNameWStr(This,szwProvider) )
#define IEnroll4_put_ProviderNameWStr(This,szwProvider) ( (This)->lpVtbl -> put_ProviderNameWStr(This,szwProvider) )
#define IEnroll4_get_ProviderType(This,pdwType) ( (This)->lpVtbl -> get_ProviderType(This,pdwType) )
#define IEnroll4_put_ProviderType(This,dwType) ( (This)->lpVtbl -> put_ProviderType(This,dwType) )
#define IEnroll4_get_KeySpec(This,pdw) ( (This)->lpVtbl -> get_KeySpec(This,pdw) )
#define IEnroll4_put_KeySpec(This,dw) ( (This)->lpVtbl -> put_KeySpec(This,dw) )
#define IEnroll4_get_ProviderFlags(This,pdwFlags) ( (This)->lpVtbl -> get_ProviderFlags(This,pdwFlags) )
#define IEnroll4_put_ProviderFlags(This,dwFlags) ( (This)->lpVtbl -> put_ProviderFlags(This,dwFlags) )
#define IEnroll4_get_UseExistingKeySet(This,fUseExistingKeys) ( (This)->lpVtbl -> get_UseExistingKeySet(This,fUseExistingKeys) )
#define IEnroll4_put_UseExistingKeySet(This,fUseExistingKeys) ( (This)->lpVtbl -> put_UseExistingKeySet(This,fUseExistingKeys) )
#define IEnroll4_get_GenKeyFlags(This,pdwFlags) ( (This)->lpVtbl -> get_GenKeyFlags(This,pdwFlags) )
#define IEnroll4_put_GenKeyFlags(This,dwFlags) ( (This)->lpVtbl -> put_GenKeyFlags(This,dwFlags) )
#define IEnroll4_get_DeleteRequestCert(This,fDelete) ( (This)->lpVtbl -> get_DeleteRequestCert(This,fDelete) )
#define IEnroll4_put_DeleteRequestCert(This,fDelete) ( (This)->lpVtbl -> put_DeleteRequestCert(This,fDelete) )
#define IEnroll4_get_WriteCertToUserDS(This,fBool) ( (This)->lpVtbl -> get_WriteCertToUserDS(This,fBool) )
#define IEnroll4_put_WriteCertToUserDS(This,fBool) ( (This)->lpVtbl -> put_WriteCertToUserDS(This,fBool) )
#define IEnroll4_get_EnableT61DNEncoding(This,fBool) ( (This)->lpVtbl -> get_EnableT61DNEncoding(This,fBool) )
#define IEnroll4_put_EnableT61DNEncoding(This,fBool) ( (This)->lpVtbl -> put_EnableT61DNEncoding(This,fBool) )
#define IEnroll4_get_WriteCertToCSP(This,fBool) ( (This)->lpVtbl -> get_WriteCertToCSP(This,fBool) )
#define IEnroll4_put_WriteCertToCSP(This,fBool) ( (This)->lpVtbl -> put_WriteCertToCSP(This,fBool) )
#define IEnroll4_get_SPCFileNameWStr(This,szw) ( (This)->lpVtbl -> get_SPCFileNameWStr(This,szw) )
#define IEnroll4_put_SPCFileNameWStr(This,szw) ( (This)->lpVtbl -> put_SPCFileNameWStr(This,szw) )
#define IEnroll4_get_PVKFileNameWStr(This,szw) ( (This)->lpVtbl -> get_PVKFileNameWStr(This,szw) )
#define IEnroll4_put_PVKFileNameWStr(This,szw) ( (This)->lpVtbl -> put_PVKFileNameWStr(This,szw) )
#define IEnroll4_get_HashAlgorithmWStr(This,szw) ( (This)->lpVtbl -> get_HashAlgorithmWStr(This,szw) )
#define IEnroll4_put_HashAlgorithmWStr(This,szw) ( (This)->lpVtbl -> put_HashAlgorithmWStr(This,szw) )
#define IEnroll4_get_RenewalCertificate(This,ppCertContext) ( (This)->lpVtbl -> get_RenewalCertificate(This,ppCertContext) )
#define IEnroll4_put_RenewalCertificate(This,pCertContext) ( (This)->lpVtbl -> put_RenewalCertificate(This,pCertContext) )
#define IEnroll4_AddCertTypeToRequestWStr(This,szw) ( (This)->lpVtbl -> AddCertTypeToRequestWStr(This,szw) )
#define IEnroll4_AddNameValuePairToSignatureWStr(This,Name,Value) ( (This)->lpVtbl -> AddNameValuePairToSignatureWStr(This,Name,Value) )
#define IEnroll4_AddExtensionsToRequest(This,pCertExtensions) ( (This)->lpVtbl -> AddExtensionsToRequest(This,pCertExtensions) )
#define IEnroll4_AddAuthenticatedAttributesToPKCS7Request(This,pAttributes) ( (This)->lpVtbl -> AddAuthenticatedAttributesToPKCS7Request(This,pAttributes) )
#define IEnroll4_CreatePKCS7RequestFromRequest(This,pRequest,pSigningCertContext,pPkcs7Blob) ( (This)->lpVtbl -> CreatePKCS7RequestFromRequest(This,pRequest,pSigningCertContext,pPkcs7Blob) )
#define IEnroll4_InstallPKCS7Blob(This,pBlobPKCS7) ( (This)->lpVtbl -> InstallPKCS7Blob(This,pBlobPKCS7) )
#define IEnroll4_Reset(This) ( (This)->lpVtbl -> Reset(This) )
#define IEnroll4_GetSupportedKeySpec(This,pdwKeySpec) ( (This)->lpVtbl -> GetSupportedKeySpec(This,pdwKeySpec) )
#define IEnroll4_GetKeyLen(This,fMin,fExchange,pdwKeySize) ( (This)->lpVtbl -> GetKeyLen(This,fMin,fExchange,pdwKeySize) )
#define IEnroll4_EnumAlgs(This,dwIndex,algClass,pdwAlgID) ( (This)->lpVtbl -> EnumAlgs(This,dwIndex,algClass,pdwAlgID) )
#define IEnroll4_GetAlgNameWStr(This,algID,ppwsz) ( (This)->lpVtbl -> GetAlgNameWStr(This,algID,ppwsz) )
#define IEnroll4_put_ReuseHardwareKeyIfUnableToGenNew(This,fReuseHardwareKeyIfUnableToGenNew) ( (This)->lpVtbl -> put_ReuseHardwareKeyIfUnableToGenNew(This,fReuseHardwareKeyIfUnableToGenNew) )
#define IEnroll4_get_ReuseHardwareKeyIfUnableToGenNew(This,fReuseHardwareKeyIfUnableToGenNew) ( (This)->lpVtbl -> get_ReuseHardwareKeyIfUnableToGenNew(This,fReuseHardwareKeyIfUnableToGenNew) )
#define IEnroll4_put_HashAlgID(This,hashAlgID) ( (This)->lpVtbl -> put_HashAlgID(This,hashAlgID) )
#define IEnroll4_get_HashAlgID(This,hashAlgID) ( (This)->lpVtbl -> get_HashAlgID(This,hashAlgID) )
#define IEnroll4_SetHStoreMy(This,hStore) ( (This)->lpVtbl -> SetHStoreMy(This,hStore) )
#define IEnroll4_SetHStoreCA(This,hStore) ( (This)->lpVtbl -> SetHStoreCA(This,hStore) )
#define IEnroll4_SetHStoreROOT(This,hStore) ( (This)->lpVtbl -> SetHStoreROOT(This,hStore) )
#define IEnroll4_SetHStoreRequest(This,hStore) ( (This)->lpVtbl -> SetHStoreRequest(This,hStore) )
#define IEnroll4_put_LimitExchangeKeyToEncipherment(This,fLimitExchangeKeyToEncipherment) ( (This)->lpVtbl -> put_LimitExchangeKeyToEncipherment(This,fLimitExchangeKeyToEncipherment) )
#define IEnroll4_get_LimitExchangeKeyToEncipherment(This,fLimitExchangeKeyToEncipherment) ( (This)->lpVtbl -> get_LimitExchangeKeyToEncipherment(This,fLimitExchangeKeyToEncipherment) )
#define IEnroll4_put_EnableSMIMECapabilities(This,fEnableSMIMECapabilities) ( (This)->lpVtbl -> put_EnableSMIMECapabilities(This,fEnableSMIMECapabilities) )
#define IEnroll4_get_EnableSMIMECapabilities(This,fEnableSMIMECapabilities) ( (This)->lpVtbl -> get_EnableSMIMECapabilities(This,fEnableSMIMECapabilities) )
#define IEnroll4_put_ThumbPrintWStr(This,thumbPrintBlob) ( (This)->lpVtbl -> put_ThumbPrintWStr(This,thumbPrintBlob) )
#define IEnroll4_get_ThumbPrintWStr(This,thumbPrintBlob) ( (This)->lpVtbl -> get_ThumbPrintWStr(This,thumbPrintBlob) )
#define IEnroll4_SetPrivateKeyArchiveCertificate(This,pPrivateKeyArchiveCert) ( (This)->lpVtbl -> SetPrivateKeyArchiveCertificate(This,pPrivateKeyArchiveCert) )
#define IEnroll4_GetPrivateKeyArchiveCertificate(This) ( (This)->lpVtbl -> GetPrivateKeyArchiveCertificate(This) )
#define IEnroll4_binaryBlobToString(This,Flags,pblobBinary,ppwszString) ( (This)->lpVtbl -> binaryBlobToString(This,Flags,pblobBinary,ppwszString) )
#define IEnroll4_stringToBinaryBlob(This,Flags,pwszString,pblobBinary,pdwSkip,pdwFlags) ( (This)->lpVtbl -> stringToBinaryBlob(This,Flags,pwszString,pblobBinary,pdwSkip,pdwFlags) )
#define IEnroll4_addExtensionToRequestWStr(This,Flags,pwszName,pblobValue) ( (This)->lpVtbl -> addExtensionToRequestWStr(This,Flags,pwszName,pblobValue) )
#define IEnroll4_addAttributeToRequestWStr(This,Flags,pwszName,pblobValue) ( (This)->lpVtbl -> addAttributeToRequestWStr(This,Flags,pwszName,pblobValue) )
#define IEnroll4_addNameValuePairToRequestWStr(This,Flags,pwszName,pwszValue) ( (This)->lpVtbl -> addNameValuePairToRequestWStr(This,Flags,pwszName,pwszValue) )
#define IEnroll4_resetExtensions(This) ( (This)->lpVtbl -> resetExtensions(This) )
#define IEnroll4_resetAttributes(This) ( (This)->lpVtbl -> resetAttributes(This) )
#define IEnroll4_createRequestWStr(This,Flags,pwszDNName,pwszUsage,pblobRequest) ( (This)->lpVtbl -> createRequestWStr(This,Flags,pwszDNName,pwszUsage,pblobRequest) )
#define IEnroll4_createFileRequestWStr(This,Flags,pwszDNName,pwszUsage,pwszRequestFileName) ( (This)->lpVtbl -> createFileRequestWStr(This,Flags,pwszDNName,pwszUsage,pwszRequestFileName) )
#define IEnroll4_acceptResponseBlob(This,pblobResponse) ( (This)->lpVtbl -> acceptResponseBlob(This,pblobResponse) )
#define IEnroll4_acceptFileResponseWStr(This,pwszResponseFileName) ( (This)->lpVtbl -> acceptFileResponseWStr(This,pwszResponseFileName) )
#define IEnroll4_getCertContextFromResponseBlob(This,pblobResponse,ppCertContext) ( (This)->lpVtbl -> getCertContextFromResponseBlob(This,pblobResponse,ppCertContext) )
#define IEnroll4_getCertContextFromFileResponseWStr(This,pwszResponseFileName,ppCertContext) ( (This)->lpVtbl -> getCertContextFromFileResponseWStr(This,pwszResponseFileName,ppCertContext) )
#define IEnroll4_createPFXWStr(This,pwszPassword,pblobPFX) ( (This)->lpVtbl -> createPFXWStr(This,pwszPassword,pblobPFX) )
#define IEnroll4_createFilePFXWStr(This,pwszPassword,pwszPFXFileName) ( (This)->lpVtbl -> createFilePFXWStr(This,pwszPassword,pwszPFXFileName) )
#define IEnroll4_setPendingRequestInfoWStr(This,lRequestID,pwszCADNS,pwszCAName,pwszFriendlyName) ( (This)->lpVtbl -> setPendingRequestInfoWStr(This,lRequestID,pwszCADNS,pwszCAName,pwszFriendlyName) )
#define IEnroll4_enumPendingRequestWStr(This,lIndex,lDesiredProperty,ppProperty) ( (This)->lpVtbl -> enumPendingRequestWStr(This,lIndex,lDesiredProperty,ppProperty) )
#define IEnroll4_removePendingRequestWStr(This,thumbPrintBlob) ( (This)->lpVtbl -> removePendingRequestWStr(This,thumbPrintBlob) )
#define IEnroll4_GetKeyLenEx(This,lSizeSpec,lKeySpec,pdwKeySize) ( (This)->lpVtbl -> GetKeyLenEx(This,lSizeSpec,lKeySpec,pdwKeySize) )
#define IEnroll4_InstallPKCS7BlobEx(This,pBlobPKCS7,plCertInstalled) ( (This)->lpVtbl -> InstallPKCS7BlobEx(This,pBlobPKCS7,plCertInstalled) )
#define IEnroll4_AddCertTypeToRequestWStrEx(This,lType,pwszOIDOrName,lMajorVersion,fMinorVersion,lMinorVersion) ( (This)->lpVtbl -> AddCertTypeToRequestWStrEx(This,lType,pwszOIDOrName,lMajorVersion,fMinorVersion,lMinorVersion) )
#define IEnroll4_getProviderTypeWStr(This,pwszProvName,plProvType) ( (This)->lpVtbl -> getProviderTypeWStr(This,pwszProvName,plProvType) )
#define IEnroll4_addBlobPropertyToCertificateWStr(This,lPropertyId,lReserved,pBlobProperty) ( (This)->lpVtbl -> addBlobPropertyToCertificateWStr(This,lPropertyId,lReserved,pBlobProperty) )
#define IEnroll4_SetSignerCertificate(This,pSignerCert) ( (This)->lpVtbl -> SetSignerCertificate(This,pSignerCert) )
#define IEnroll4_put_ClientId(This,lClientId) ( (This)->lpVtbl -> put_ClientId(This,lClientId) )
#define IEnroll4_get_ClientId(This,plClientId) ( (This)->lpVtbl -> get_ClientId(This,plClientId) )
#define IEnroll4_put_IncludeSubjectKeyID(This,fInclude) ( (This)->lpVtbl -> put_IncludeSubjectKeyID(This,fInclude) )
#define IEnroll4_get_IncludeSubjectKeyID(This,pfInclude) ( (This)->lpVtbl -> get_IncludeSubjectKeyID(This,pfInclude) )
#endif
#endif
#ifndef __XENROLLLib_LIBRARY_DEFINED__
#define __XENROLLLib_LIBRARY_DEFINED__
extern const IID LIBID_XENROLLLib;
extern const CLSID CLSID_CEnroll2;
extern const CLSID CLSID_CEnroll;
#endif
extern IEnroll * WINAPI PIEnrollGetNoCOM(void);
extern IEnroll2 * WINAPI PIEnroll2GetNoCOM(void);
extern IEnroll4 * WINAPI PIEnroll4GetNoCOM(void);
#define CRYPT_ENUM_ALL_PROVIDERS  0x1
#define XEPR_ENUM_FIRST        -1
#define XEPR_CADNS           0x01
#define XEPR_CANAME          0x02
#define XEPR_CAFRIENDLYNAME  0x03
#define XEPR_REQUESTID       0x04
#define XEPR_DATE            0x05
#define XEPR_TEMPLATENAME    0x06
#define XEPR_VERSION         0x07
#define XEPR_HASH            0x08
#define XEPR_V1TEMPLATENAME  0x09
#define XEPR_V2TEMPLATEOID   0x10
#define XECR_PKCS10_V2_0     0x1
#define XECR_PKCS7           0x2
#define XECR_CMC             0x3
#define XECR_PKCS10_V1_5     0x4
#define XEKL_KEYSIZE_MIN     0x1
#define XEKL_KEYSIZE_MAX     0x2
#define XEKL_KEYSIZE_INC     0x3
#define XEKL_KEYSIZE_DEFAULT 0x4
#define XEKL_KEYSPEC_KEYX    0x1
#define XEKL_KEYSPEC_SIG     0x2
#define XECT_EXTENSION_V1    0x1
#define XECT_EXTENSION_V2    0x2
#define XECP_STRING_PROPERTY 0x1
#define XECI_DISABLE     0x0
#define XECI_XENROLL     0x1
#define XECI_AUTOENROLL  0x2
#define XECI_REQWIZARD   0x3
#define XECI_CERTREQ     0x4
extern RPC_IF_HANDLE __MIDL_itf_xenroll_0000_0007_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_xenroll_0000_0007_v0_0_s_ifspec;
unsigned long __RPC_USER BSTR_UserSize(unsigned long *, unsigned long, BSTR *);
unsigned char *__RPC_USER BSTR_UserMarshal(unsigned long *, unsigned char *, BSTR *);
unsigned char *__RPC_USER BSTR_UserUnmarshal(unsigned long *, unsigned char *, BSTR *);
void __RPC_USER BSTR_UserFree(unsigned long *, BSTR *);
unsigned long __RPC_USER VARIANT_UserSize(unsigned long *, unsigned long, VARIANT *);
unsigned char *__RPC_USER VARIANT_UserMarshal(unsigned long *, unsigned char *, VARIANT *);
unsigned char *__RPC_USER VARIANT_UserUnmarshal(unsigned long *, unsigned char *, VARIANT *);
void __RPC_USER VARIANT_UserFree(unsigned long *, VARIANT *);
unsigned long __RPC_USER BSTR_UserSize64(unsigned long *, unsigned long, BSTR *);
unsigned char *__RPC_USER BSTR_UserMarshal64(unsigned long *, unsigned char *, BSTR *);
unsigned char *__RPC_USER BSTR_UserUnmarshal64(unsigned long *, unsigned char *, BSTR *);
void __RPC_USER BSTR_UserFree64(unsigned long *, BSTR *);
unsigned long __RPC_USER VARIANT_UserSize64(unsigned long *, unsigned long, VARIANT *);
unsigned char *__RPC_USER VARIANT_UserMarshal64(unsigned long *, unsigned char *, VARIANT *);
unsigned char *__RPC_USER VARIANT_UserUnmarshal64(unsigned long *, unsigned char *, VARIANT *);
void __RPC_USER VARIANT_UserFree64(unsigned long *, VARIANT *);
#endif

/*+@@file@@----------------------------------------------------------------*//*!
 \file		ichannelcredentials.h
 \par Description
            Extension and update of headers for PellesC compiler suite.
 \par Project:
            PellesC Headers extension
 \date		Created  on Sat Jul 16 19:17:44 2016
 \date		Modified on Sat Jul 16 19:17:44 2016
 \author	frankie
\*//*-@@file@@----------------------------------------------------------------*/

#ifndef __REQUIRED_RPCNDR_H_VERSION__
#define __REQUIRED_RPCNDR_H_VERSION__ 475
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
#ifndef __ichannelcredentials_h__
#define __ichannelcredentials_h__
#if __POCC__ >= 500
#pragma once
#endif
#ifndef __IChannelCredentials_FWD_DEFINED__
#define __IChannelCredentials_FWD_DEFINED__
typedef interface IChannelCredentials IChannelCredentials;
#endif
#include "ocidl.h"
void *__RPC_USER MIDL_user_allocate(size_t);
void __RPC_USER MIDL_user_free(void *);
#ifndef __IChannelCredentials_INTERFACE_DEFINED__
#define __IChannelCredentials_INTERFACE_DEFINED__
extern const IID IID_IChannelCredentials;
typedef struct IChannelCredentialsVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE *QueryInterface) (IChannelCredentials *This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE *AddRef) (IChannelCredentials *This);
	ULONG(STDMETHODCALLTYPE *Release) (IChannelCredentials *This);
	HRESULT(STDMETHODCALLTYPE *GetTypeInfoCount) (IChannelCredentials *This, UINT *pctinfo);
	HRESULT(STDMETHODCALLTYPE *GetTypeInfo) (IChannelCredentials *This, UINT iTInfo, LCID lcid, ITypeInfo **ppTInfo);
	HRESULT(STDMETHODCALLTYPE *GetIDsOfNames) (IChannelCredentials *This, REFIID riid, LPOLESTR *rgszNames, UINT cNames, LCID lcid, DISPID *rgDispId);
	HRESULT(STDMETHODCALLTYPE *Invoke) (IChannelCredentials *This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS *pDispParams, VARIANT *pVarResult, EXCEPINFO *pExcepInfo, UINT *puArgErr);
	HRESULT(STDMETHODCALLTYPE *SetWindowsCredential) (IChannelCredentials *This, BSTR domain, BSTR username, BSTR password, int impersonationLevel, BOOL allowNtlm);
	HRESULT(STDMETHODCALLTYPE *SetUserNameCredential) (IChannelCredentials *This, BSTR username, BSTR password);
	HRESULT(STDMETHODCALLTYPE *SetClientCertificateFromStore) (IChannelCredentials *This, BSTR storeLocation, BSTR storeName, BSTR findYype, VARIANT findValue);
	HRESULT(STDMETHODCALLTYPE *SetClientCertificateFromStoreByName) (IChannelCredentials *This, BSTR subjectName, BSTR storeLocation, BSTR storeName);
	HRESULT(STDMETHODCALLTYPE *SetClientCertificateFromFile) (IChannelCredentials *This, BSTR filename, BSTR password, BSTR keystorageFlags);
	HRESULT(STDMETHODCALLTYPE *SetDefaultServiceCertificateFromStore) (IChannelCredentials *This, BSTR storeLocation, BSTR storeName, BSTR findType, VARIANT findValue);
	HRESULT(STDMETHODCALLTYPE *SetDefaultServiceCertificateFromStoreByName) (IChannelCredentials *This, BSTR subjectName, BSTR storeLocation, BSTR storeName);
	HRESULT(STDMETHODCALLTYPE *SetDefaultServiceCertificateFromFile) (IChannelCredentials *This, BSTR filename, BSTR password, BSTR keystorageFlags);
	HRESULT(STDMETHODCALLTYPE *SetServiceCertificateAuthentication) (IChannelCredentials *This, BSTR storeLocation, BSTR revocationMode, BSTR certificateValidationMode);
	HRESULT(STDMETHODCALLTYPE *SetIssuedToken) (IChannelCredentials *This, BSTR localIssuerAddres, BSTR localIssuerBindingType, BSTR localIssuerBinding);
	END_INTERFACE
}  IChannelCredentialsVtbl;
interface IChannelCredentials
{
	CONST_VTBL struct IChannelCredentialsVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IChannelCredentials_QueryInterface(This,riid,ppvObject)(This)->lpVtbl -> QueryInterface(This,riid,ppvObject)
#define IChannelCredentials_AddRef(This)(This)->lpVtbl -> AddRef(This)
#define IChannelCredentials_Release(This)(This)->lpVtbl -> Release(This)
#define IChannelCredentials_GetTypeInfoCount(This,pctinfo)(This)->lpVtbl -> GetTypeInfoCount(This,pctinfo)
#define IChannelCredentials_GetTypeInfo(This,iTInfo,lcid,ppTInfo)(This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo)
#define IChannelCredentials_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)(This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)
#define IChannelCredentials_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)(This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)
#define IChannelCredentials_SetWindowsCredential(This,domain,username,password,impersonationLevel,allowNtlm)(This)->lpVtbl -> SetWindowsCredential(This,domain,username,password,impersonationLevel,allowNtlm)
#define IChannelCredentials_SetUserNameCredential(This,username,password)(This)->lpVtbl -> SetUserNameCredential(This,username,password)
#define IChannelCredentials_SetClientCertificateFromStore(This,storeLocation,storeName,findYype,findValue)(This)->lpVtbl -> SetClientCertificateFromStore(This,storeLocation,storeName,findYype,findValue)
#define IChannelCredentials_SetClientCertificateFromStoreByName(This,subjectName,storeLocation,storeName)(This)->lpVtbl -> SetClientCertificateFromStoreByName(This,subjectName,storeLocation,storeName)
#define IChannelCredentials_SetClientCertificateFromFile(This,filename,password,keystorageFlags)(This)->lpVtbl -> SetClientCertificateFromFile(This,filename,password,keystorageFlags)
#define IChannelCredentials_SetDefaultServiceCertificateFromStore(This,storeLocation,storeName,findType,findValue)(This)->lpVtbl -> SetDefaultServiceCertificateFromStore(This,storeLocation,storeName,findType,findValue)
#define IChannelCredentials_SetDefaultServiceCertificateFromStoreByName(This,subjectName,storeLocation,storeName)(This)->lpVtbl -> SetDefaultServiceCertificateFromStoreByName(This,subjectName,storeLocation,storeName)
#define IChannelCredentials_SetDefaultServiceCertificateFromFile(This,filename,password,keystorageFlags)(This)->lpVtbl -> SetDefaultServiceCertificateFromFile(This,filename,password,keystorageFlags)
#define IChannelCredentials_SetServiceCertificateAuthentication(This,storeLocation,revocationMode,certificateValidationMode)(This)->lpVtbl -> SetServiceCertificateAuthentication(This,storeLocation,revocationMode,certificateValidationMode)
#define IChannelCredentials_SetIssuedToken(This,localIssuerAddres,localIssuerBindingType,localIssuerBinding)(This)->lpVtbl -> SetIssuedToken(This,localIssuerAddres,localIssuerBindingType,localIssuerBinding)
#endif
#endif
#endif

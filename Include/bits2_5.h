/*+@@file@@----------------------------------------------------------------*//*!
 \file		bits2_5.h
 \par Description 
            Extension and update of headers for PellesC compiler suite.
 \par Project: 
            PellesC Headers extension
 \date		Created  on Sat Jul  2 21:03:59 2016
 \date		Modified on Sat Jul  2 21:03:59 2016
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
#ifndef __bits2_5_h__
#define __bits2_5_h__
#if __POCC__ >= 500
#pragma once
#endif
#ifndef __IBackgroundCopyJobHttpOptions_FWD_DEFINED__
#define __IBackgroundCopyJobHttpOptions_FWD_DEFINED__
typedef interface IBackgroundCopyJobHttpOptions IBackgroundCopyJobHttpOptions;
#endif
#ifndef __BackgroundCopyManager2_5_FWD_DEFINED__
#define __BackgroundCopyManager2_5_FWD_DEFINED__
typedef struct BackgroundCopyManager2_5 BackgroundCopyManager2_5;
#endif
#ifndef __IBackgroundCopyJobHttpOptions_FWD_DEFINED__
#define __IBackgroundCopyJobHttpOptions_FWD_DEFINED__
typedef interface IBackgroundCopyJobHttpOptions IBackgroundCopyJobHttpOptions;
#endif
#include <bits.h>
#include <bits1_5.h>
#include <bits2_0.h>
#ifndef __IBackgroundCopyJobHttpOptions_INTERFACE_DEFINED__
#define __IBackgroundCopyJobHttpOptions_INTERFACE_DEFINED__
typedef enum __MIDL_IBackgroundCopyJobHttpOptions_0001
{
	BG_CERT_STORE_LOCATION_CURRENT_USER = 0,
	BG_CERT_STORE_LOCATION_LOCAL_MACHINE = (BG_CERT_STORE_LOCATION_CURRENT_USER + 1),
	BG_CERT_STORE_LOCATION_CURRENT_SERVICE = (BG_CERT_STORE_LOCATION_LOCAL_MACHINE + 1),
	BG_CERT_STORE_LOCATION_SERVICES = (BG_CERT_STORE_LOCATION_CURRENT_SERVICE + 1),
	BG_CERT_STORE_LOCATION_USERS = (BG_CERT_STORE_LOCATION_SERVICES + 1),
	BG_CERT_STORE_LOCATION_CURRENT_USER_GROUP_POLICY = (BG_CERT_STORE_LOCATION_USERS + 1),
	BG_CERT_STORE_LOCATION_LOCAL_MACHINE_GROUP_POLICY = (BG_CERT_STORE_LOCATION_CURRENT_USER_GROUP_POLICY + 1),
	BG_CERT_STORE_LOCATION_LOCAL_MACHINE_ENTERPRISE = (BG_CERT_STORE_LOCATION_LOCAL_MACHINE_GROUP_POLICY + 1)
} BG_CERT_STORE_LOCATION;
extern const IID IID_IBackgroundCopyJobHttpOptions;
typedef struct IBackgroundCopyJobHttpOptionsVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IBackgroundCopyJobHttpOptions * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IBackgroundCopyJobHttpOptions * This);
	ULONG(STDMETHODCALLTYPE * Release) (IBackgroundCopyJobHttpOptions * This);
	HRESULT(STDMETHODCALLTYPE * SetClientCertificateByID) (IBackgroundCopyJobHttpOptions * This, BG_CERT_STORE_LOCATION StoreLocation, LPCWSTR StoreName, byte * pCertHashBlob);
	HRESULT(STDMETHODCALLTYPE * SetClientCertificateByName) (IBackgroundCopyJobHttpOptions * This, BG_CERT_STORE_LOCATION StoreLocation, LPCWSTR StoreName, LPCWSTR SubjectName);
	HRESULT(STDMETHODCALLTYPE * RemoveClientCertificate) (IBackgroundCopyJobHttpOptions * This);
	HRESULT(STDMETHODCALLTYPE * GetClientCertificate) (IBackgroundCopyJobHttpOptions * This, BG_CERT_STORE_LOCATION * pStoreLocation, LPWSTR * pStoreName, byte ** ppCertHashBlob, LPWSTR * pSubjectName);
	HRESULT(STDMETHODCALLTYPE * SetCustomHeaders) (IBackgroundCopyJobHttpOptions * This, LPCWSTR RequestHeaders);
	HRESULT(STDMETHODCALLTYPE * GetCustomHeaders) (IBackgroundCopyJobHttpOptions * This, LPWSTR * pRequestHeaders);
	HRESULT(STDMETHODCALLTYPE * SetSecurityFlags) (IBackgroundCopyJobHttpOptions * This, ULONG Flags);
	HRESULT(STDMETHODCALLTYPE * GetSecurityFlags) (IBackgroundCopyJobHttpOptions * This, ULONG * pFlags);
	END_INTERFACE
}  IBackgroundCopyJobHttpOptionsVtbl;
interface IBackgroundCopyJobHttpOptions
{
	CONST_VTBL struct IBackgroundCopyJobHttpOptionsVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IBackgroundCopyJobHttpOptions_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IBackgroundCopyJobHttpOptions_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define IBackgroundCopyJobHttpOptions_Release(This)( (This)->lpVtbl -> Release(This) )
#define IBackgroundCopyJobHttpOptions_SetClientCertificateByID(This,StoreLocation,StoreName,pCertHashBlob)( (This)->lpVtbl -> SetClientCertificateByID(This,StoreLocation,StoreName,pCertHashBlob) )
#define IBackgroundCopyJobHttpOptions_SetClientCertificateByName(This,StoreLocation,StoreName,SubjectName)( (This)->lpVtbl -> SetClientCertificateByName(This,StoreLocation,StoreName,SubjectName) )
#define IBackgroundCopyJobHttpOptions_RemoveClientCertificate(This)( (This)->lpVtbl -> RemoveClientCertificate(This) )
#define IBackgroundCopyJobHttpOptions_GetClientCertificate(This,pStoreLocation,pStoreName,ppCertHashBlob,pSubjectName)( (This)->lpVtbl -> GetClientCertificate(This,pStoreLocation,pStoreName,ppCertHashBlob,pSubjectName) )
#define IBackgroundCopyJobHttpOptions_SetCustomHeaders(This,RequestHeaders)( (This)->lpVtbl -> SetCustomHeaders(This,RequestHeaders) )
#define IBackgroundCopyJobHttpOptions_GetCustomHeaders(This,pRequestHeaders)( (This)->lpVtbl -> GetCustomHeaders(This,pRequestHeaders) )
#define IBackgroundCopyJobHttpOptions_SetSecurityFlags(This,Flags)( (This)->lpVtbl -> SetSecurityFlags(This,Flags) )
#define IBackgroundCopyJobHttpOptions_GetSecurityFlags(This,pFlags)( (This)->lpVtbl -> GetSecurityFlags(This,pFlags) )
#endif
#endif
#ifndef __BackgroundCopyManager2_5_LIBRARY_DEFINED__
#define __BackgroundCopyManager2_5_LIBRARY_DEFINED__
extern const IID LIBID_BackgroundCopyManager2_5;
extern const CLSID CLSID_BackgroundCopyManager2_5;
#endif
#define   BG_SSL_ENABLE_CRL_CHECK               0x0001
#define   BG_SSL_IGNORE_CERT_CN_INVALID         0x0002
#define   BG_SSL_IGNORE_CERT_DATE_INVALID       0x0004
#define   BG_SSL_IGNORE_UNKNOWN_CA              0x0008
#define   BG_SSL_IGNORE_CERT_WRONG_USAGE        0x0010
#define   BG_HTTP_REDIRECT_POLICY_MASK          0x0700
#define   BG_HTTP_REDIRECT_POLICY_ALLOW_SILENT  0x0000
#define   BG_HTTP_REDIRECT_POLICY_ALLOW_REPORT  0x0100
#define   BG_HTTP_REDIRECT_POLICY_DISALLOW      0x0200
#define   BG_HTTP_REDIRECT_POLICY_ALLOW_HTTPS_TO_HTTP  0x0800
#include <bits3_0.h>
extern RPC_IF_HANDLE __MIDL_itf_bits2_5_0000_0001_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_bits2_5_0000_0001_v0_0_s_ifspec;
#endif

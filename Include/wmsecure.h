/*+@@file@@----------------------------------------------------------------*//*!
 \file		wmsecure.h
 \par Description 
            Extension and update of headers for PellesC compiler suite.
 \par Project: 
            PellesC Headers extension
 \date		Created  on Mon Sep 19 15:54:11 2016
 \date		Modified on Mon Sep 19 15:54:11 2016
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
#ifndef __wmsecure_h__
#define __wmsecure_h__
#if __POCC__ >= 500
#pragma once
#endif
#ifndef __IWMAuthorizer_FWD_DEFINED__
#define __IWMAuthorizer_FWD_DEFINED__
typedef interface IWMAuthorizer IWMAuthorizer;
#endif
#ifndef __IWMSecureChannel_FWD_DEFINED__
#define __IWMSecureChannel_FWD_DEFINED__
typedef interface IWMSecureChannel IWMSecureChannel;
#endif
#ifndef __IWMGetSecureChannel_FWD_DEFINED__
#define __IWMGetSecureChannel_FWD_DEFINED__
typedef interface IWMGetSecureChannel IWMGetSecureChannel;
#endif
#include <oaidl.h>
#include <ocidl.h>
EXTERN_GUID(IID_IWMAuthorizer, 0xd9b67d36, 0xa9ad, 0x4eb4, 0xba, 0xef, 0xdb, 0x28, 0x4e, 0xf5, 0x50, 0x4c);
EXTERN_GUID(IID_IWMSecureChannel, 0x2720598a, 0xd0f2, 0x4189, 0xbd, 0x10, 0x91, 0xc4, 0x6e, 0xf0, 0x93, 0x6f);
EXTERN_GUID(IID_IWMGetSecureChannel, 0x94bc0598, 0xc3d2, 0x11d3, 0xbe, 0xdf, 0x00, 0xc0, 0x4f, 0x61, 0x29, 0x86);
extern RPC_IF_HANDLE __MIDL_itf_wmsecure_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_wmsecure_0000_0000_v0_0_s_ifspec;
#ifndef __IWMAuthorizer_INTERFACE_DEFINED__
#define __IWMAuthorizer_INTERFACE_DEFINED__
extern const IID IID_IWMAuthorizer;
typedef struct IWMAuthorizerVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IWMAuthorizer * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IWMAuthorizer * This);
	ULONG(STDMETHODCALLTYPE * Release) (IWMAuthorizer * This);
	HRESULT(STDMETHODCALLTYPE * GetCertCount) (IWMAuthorizer * This, DWORD * pcCerts);
	HRESULT(STDMETHODCALLTYPE * GetCert) (IWMAuthorizer * This, DWORD dwIndex, BYTE ** ppbCertData);
	HRESULT(STDMETHODCALLTYPE * GetSharedData) (IWMAuthorizer * This, DWORD dwCertIndex, const BYTE * pbSharedData, BYTE * pbCert, BYTE ** ppbSharedData);
	END_INTERFACE
}  IWMAuthorizerVtbl;
interface IWMAuthorizer
{
	CONST_VTBL struct IWMAuthorizerVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IWMAuthorizer_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IWMAuthorizer_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IWMAuthorizer_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IWMAuthorizer_GetCertCount(This,pcCerts) ( (This)->lpVtbl -> GetCertCount(This,pcCerts) )
#define IWMAuthorizer_GetCert(This,dwIndex,ppbCertData) ( (This)->lpVtbl -> GetCert(This,dwIndex,ppbCertData) )
#define IWMAuthorizer_GetSharedData(This,dwCertIndex,pbSharedData,pbCert,ppbSharedData) ( (This)->lpVtbl -> GetSharedData(This,dwCertIndex,pbSharedData,pbCert,ppbSharedData) )
#endif
#endif
#ifndef __IWMSecureChannel_INTERFACE_DEFINED__
#define __IWMSecureChannel_INTERFACE_DEFINED__
extern const IID IID_IWMSecureChannel;
typedef struct IWMSecureChannelVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IWMSecureChannel * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IWMSecureChannel * This);
	ULONG(STDMETHODCALLTYPE * Release) (IWMSecureChannel * This);
	HRESULT(STDMETHODCALLTYPE * GetCertCount) (IWMSecureChannel * This, DWORD * pcCerts);
	HRESULT(STDMETHODCALLTYPE * GetCert) (IWMSecureChannel * This, DWORD dwIndex, BYTE ** ppbCertData);
	HRESULT(STDMETHODCALLTYPE * GetSharedData) (IWMSecureChannel * This, DWORD dwCertIndex, const BYTE * pbSharedData, BYTE * pbCert, BYTE ** ppbSharedData);
	HRESULT(STDMETHODCALLTYPE * WMSC_AddCertificate) (IWMSecureChannel * This, IWMAuthorizer * pCert);
	HRESULT(STDMETHODCALLTYPE * WMSC_AddSignature) (IWMSecureChannel * This, BYTE * pbCertSig, DWORD cbCertSig);
	HRESULT(STDMETHODCALLTYPE * WMSC_Connect) (IWMSecureChannel * This, IWMSecureChannel * pOtherSide);
	HRESULT(STDMETHODCALLTYPE * WMSC_IsConnected) (IWMSecureChannel * This, BOOL * pfIsConnected);
	HRESULT(STDMETHODCALLTYPE * WMSC_Disconnect) (IWMSecureChannel * This);
	HRESULT(STDMETHODCALLTYPE * WMSC_GetValidCertificate) (IWMSecureChannel * This, BYTE ** ppbCertificate, DWORD * pdwSignature);
	HRESULT(STDMETHODCALLTYPE * WMSC_Encrypt) (IWMSecureChannel * This, BYTE * pbData, DWORD cbData);
	HRESULT(STDMETHODCALLTYPE * WMSC_Decrypt) (IWMSecureChannel * This, BYTE * pbData, DWORD cbData);
	HRESULT(STDMETHODCALLTYPE * WMSC_Lock) (IWMSecureChannel * This);
	HRESULT(STDMETHODCALLTYPE * WMSC_Unlock) (IWMSecureChannel * This);
	HRESULT(STDMETHODCALLTYPE * WMSC_SetSharedData) (IWMSecureChannel * This, DWORD dwCertIndex, const BYTE * pbSharedData);
	END_INTERFACE
}  IWMSecureChannelVtbl;
interface IWMSecureChannel
{
	CONST_VTBL struct IWMSecureChannelVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IWMSecureChannel_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IWMSecureChannel_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IWMSecureChannel_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IWMSecureChannel_GetCertCount(This,pcCerts) ( (This)->lpVtbl -> GetCertCount(This,pcCerts) )
#define IWMSecureChannel_GetCert(This,dwIndex,ppbCertData) ( (This)->lpVtbl -> GetCert(This,dwIndex,ppbCertData) )
#define IWMSecureChannel_GetSharedData(This,dwCertIndex,pbSharedData,pbCert,ppbSharedData) ( (This)->lpVtbl -> GetSharedData(This,dwCertIndex,pbSharedData,pbCert,ppbSharedData) )
#define IWMSecureChannel_WMSC_AddCertificate(This,pCert) ( (This)->lpVtbl -> WMSC_AddCertificate(This,pCert) )
#define IWMSecureChannel_WMSC_AddSignature(This,pbCertSig,cbCertSig) ( (This)->lpVtbl -> WMSC_AddSignature(This,pbCertSig,cbCertSig) )
#define IWMSecureChannel_WMSC_Connect(This,pOtherSide) ( (This)->lpVtbl -> WMSC_Connect(This,pOtherSide) )
#define IWMSecureChannel_WMSC_IsConnected(This,pfIsConnected) ( (This)->lpVtbl -> WMSC_IsConnected(This,pfIsConnected) )
#define IWMSecureChannel_WMSC_Disconnect(This) ( (This)->lpVtbl -> WMSC_Disconnect(This) )
#define IWMSecureChannel_WMSC_GetValidCertificate(This,ppbCertificate,pdwSignature) ( (This)->lpVtbl -> WMSC_GetValidCertificate(This,ppbCertificate,pdwSignature) )
#define IWMSecureChannel_WMSC_Encrypt(This,pbData,cbData) ( (This)->lpVtbl -> WMSC_Encrypt(This,pbData,cbData) )
#define IWMSecureChannel_WMSC_Decrypt(This,pbData,cbData) ( (This)->lpVtbl -> WMSC_Decrypt(This,pbData,cbData) )
#define IWMSecureChannel_WMSC_Lock(This) ( (This)->lpVtbl -> WMSC_Lock(This) )
#define IWMSecureChannel_WMSC_Unlock(This) ( (This)->lpVtbl -> WMSC_Unlock(This) )
#define IWMSecureChannel_WMSC_SetSharedData(This,dwCertIndex,pbSharedData) ( (This)->lpVtbl -> WMSC_SetSharedData(This,dwCertIndex,pbSharedData) )
#endif
#endif
#ifndef __IWMGetSecureChannel_INTERFACE_DEFINED__
#define __IWMGetSecureChannel_INTERFACE_DEFINED__
extern const IID IID_IWMGetSecureChannel;
typedef struct IWMGetSecureChannelVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IWMGetSecureChannel * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IWMGetSecureChannel * This);
	ULONG(STDMETHODCALLTYPE * Release) (IWMGetSecureChannel * This);
	HRESULT(STDMETHODCALLTYPE * GetPeerSecureChannelInterface) (IWMGetSecureChannel * This, IWMSecureChannel ** ppPeer);
	END_INTERFACE
}  IWMGetSecureChannelVtbl;
interface IWMGetSecureChannel
{
	CONST_VTBL struct IWMGetSecureChannelVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IWMGetSecureChannel_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IWMGetSecureChannel_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IWMGetSecureChannel_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IWMGetSecureChannel_GetPeerSecureChannelInterface(This,ppPeer) ( (This)->lpVtbl -> GetPeerSecureChannelInterface(This,ppPeer) )
#endif
#endif
HRESULT STDMETHODCALLTYPE WMCreateSecureChannel(IWMSecureChannel **ppChannel);
HRESULT STDMETHODCALLTYPE WMCreateSecureChannel_Certified(IWMSecureChannel **ppChannel);
HRESULT STDMETHODCALLTYPE WMCreateSecureChannel_DES(IWMSecureChannel **ppChannel);
HRESULT STDMETHODCALLTYPE WMCreateSecureChannel_Certified_DES(IWMSecureChannel **ppChannel);
extern RPC_IF_HANDLE __MIDL_itf_wmsecure_0000_0003_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_wmsecure_0000_0003_v0_0_s_ifspec;
#endif

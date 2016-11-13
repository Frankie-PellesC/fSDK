/*+@@file@@----------------------------------------------------------------*//*!
 \file		Admex.h
 \par Description 
            Extension and update of headers for PellesC compiler suite.
 \par Project: 
            PellesC Headers extension
 \date		Created  on Fri Jul  1 16:33:09 2016
 \date		Modified on Fri Jul  1 16:33:09 2016
 \author	frankie
\*//*-@@file@@----------------------------------------------------------------*/
#ifndef __REQUIRED_RPCNDR_H_VERSION__
#define __REQUIRED_RPCNDR_H_VERSION__ 475
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
#ifndef __admex_h__
#define __admex_h__
#if __POCC__ >= 500
#pragma once
#endif
#ifndef __IMSAdminReplication_FWD_DEFINED__
#define __IMSAdminReplication_FWD_DEFINED__
typedef interface IMSAdminReplication IMSAdminReplication;
#endif
#ifndef __IMSAdminCryptoCapabilities_FWD_DEFINED__
#define __IMSAdminCryptoCapabilities_FWD_DEFINED__
typedef interface IMSAdminCryptoCapabilities IMSAdminCryptoCapabilities;
#endif
#include <unknwn.h>
#include <objidl.h>
#include <ocidl.h>
void *__RPC_USER MIDL_user_allocate(size_t);
void __RPC_USER MIDL_user_free(void *);
#ifndef _ADMEX_IADM_
#define _ADMEX_IADM_
DEFINE_GUID(IID_IMSAdminReplication, 0xc804d980, 0xebec, 0x11d0, 0xa6, 0xa0, 0x0, 0xa0, 0xc9, 0x22, 0xe7, 0x52);
DEFINE_GUID(IID_IMSAdminCryptoCapabilities, 0x78b64540, 0xf26d, 0x11d0, 0xa6, 0xa3, 0x0, 0xa0, 0xc9, 0x22, 0xe7, 0x52);
DEFINE_GUID(CLSID_MSCryptoAdmEx, 0x9f0bd3a0, 0xec01, 0x11d0, 0xa6, 0xa0, 0x0, 0xa0, 0xc9, 0x22, 0xe7, 0x52);
extern RPC_IF_HANDLE __MIDL_itf_admex_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_admex_0000_v0_0_s_ifspec;
#ifndef __IMSAdminReplication_INTERFACE_DEFINED__
#define __IMSAdminReplication_INTERFACE_DEFINED__
extern const IID IID_IMSAdminReplication;
typedef struct IMSAdminReplicationVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IMSAdminReplication * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IMSAdminReplication * This);
	ULONG(STDMETHODCALLTYPE * Release) (IMSAdminReplication * This);
	HRESULT(STDMETHODCALLTYPE * GetSignature) (IMSAdminReplication * This, DWORD dwBufferSize, unsigned char *pbBuffer, DWORD * pdwMDRequiredBufferSize);
	HRESULT(STDMETHODCALLTYPE * Propagate) (IMSAdminReplication * This, DWORD dwBufferSize, unsigned char *pszBuffer);
	HRESULT(STDMETHODCALLTYPE * Propagate2) (IMSAdminReplication * This, DWORD dwBufferSize, unsigned char *pszBuffer, DWORD dwSignatureMismatch);
	HRESULT(STDMETHODCALLTYPE * Serialize) (IMSAdminReplication * This, DWORD dwBufferSize, unsigned char *pbBuffer, DWORD * pdwMDRequiredBufferSize);
	HRESULT(STDMETHODCALLTYPE * DeSerialize) (IMSAdminReplication * This, DWORD dwBufferSize, unsigned char *pbBuffer);
	END_INTERFACE
}  IMSAdminReplicationVtbl;
interface IMSAdminReplication
{
	CONST_VTBL struct IMSAdminReplicationVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IMSAdminReplication_QueryInterface(This,riid,ppvObject)    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)
#define IMSAdminReplication_AddRef(This)    (This)->lpVtbl -> AddRef(This)
#define IMSAdminReplication_Release(This)    (This)->lpVtbl -> Release(This)
#define IMSAdminReplication_GetSignature(This,dwBufferSize,pbBuffer,pdwMDRequiredBufferSize)    (This)->lpVtbl -> GetSignature(This,dwBufferSize,pbBuffer,pdwMDRequiredBufferSize)
#define IMSAdminReplication_Propagate(This,dwBufferSize,pszBuffer)    (This)->lpVtbl -> Propagate(This,dwBufferSize,pszBuffer)
#define IMSAdminReplication_Propagate2(This,dwBufferSize,pszBuffer,dwSignatureMismatch)    (This)->lpVtbl -> Propagate2(This,dwBufferSize,pszBuffer,dwSignatureMismatch)
#define IMSAdminReplication_Serialize(This,dwBufferSize,pbBuffer,pdwMDRequiredBufferSize)    (This)->lpVtbl -> Serialize(This,dwBufferSize,pbBuffer,pdwMDRequiredBufferSize)
#define IMSAdminReplication_DeSerialize(This,dwBufferSize,pbBuffer)    (This)->lpVtbl -> DeSerialize(This,dwBufferSize,pbBuffer)
#endif
HRESULT STDMETHODCALLTYPE IMSAdminReplication_GetSignature_Proxy(IMSAdminReplication *This, DWORD dwBufferSize, unsigned char *pbBuffer, DWORD *pdwMDRequiredBufferSize);
void __RPC_STUB IMSAdminReplication_GetSignature_Stub(IRpcStubBuffer *This, IRpcChannelBuffer *_pRpcChannelBuffer, PRPC_MESSAGE _pRpcMessage, DWORD *_pdwStubPhase);
HRESULT STDMETHODCALLTYPE IMSAdminReplication_Propagate_Proxy(IMSAdminReplication *This, DWORD dwBufferSize, unsigned char *pszBuffer);
void __RPC_STUB IMSAdminReplication_Propagate_Stub(IRpcStubBuffer *This, IRpcChannelBuffer *_pRpcChannelBuffer, PRPC_MESSAGE _pRpcMessage, DWORD *_pdwStubPhase);
HRESULT STDMETHODCALLTYPE IMSAdminReplication_Propagate2_Proxy(IMSAdminReplication *This, DWORD dwBufferSize, unsigned char *pszBuffer, DWORD dwSignatureMismatch);
void __RPC_STUB IMSAdminReplication_Propagate2_Stub(IRpcStubBuffer *This, IRpcChannelBuffer *_pRpcChannelBuffer, PRPC_MESSAGE _pRpcMessage, DWORD *_pdwStubPhase);
HRESULT STDMETHODCALLTYPE IMSAdminReplication_Serialize_Proxy(IMSAdminReplication *This, DWORD dwBufferSize, unsigned char *pbBuffer, DWORD *pdwMDRequiredBufferSize);
void __RPC_STUB IMSAdminReplication_Serialize_Stub(IRpcStubBuffer *This, IRpcChannelBuffer *_pRpcChannelBuffer, PRPC_MESSAGE _pRpcMessage, DWORD *_pdwStubPhase);
HRESULT STDMETHODCALLTYPE IMSAdminReplication_DeSerialize_Proxy(IMSAdminReplication *This, DWORD dwBufferSize, unsigned char *pbBuffer);
void __RPC_STUB IMSAdminReplication_DeSerialize_Stub(IRpcStubBuffer *This, IRpcChannelBuffer *_pRpcChannelBuffer, PRPC_MESSAGE _pRpcMessage, DWORD *_pdwStubPhase);
#endif
extern RPC_IF_HANDLE __MIDL_itf_admex_0255_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_admex_0255_v0_0_s_ifspec;
#ifndef __IMSAdminCryptoCapabilities_INTERFACE_DEFINED__
#define __IMSAdminCryptoCapabilities_INTERFACE_DEFINED__
extern const IID IID_IMSAdminCryptoCapabilities;
typedef struct IMSAdminCryptoCapabilitiesVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE *QueryInterface) (IMSAdminCryptoCapabilities *This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE *AddRef) (IMSAdminCryptoCapabilities *This);
	ULONG(STDMETHODCALLTYPE *Release) (IMSAdminCryptoCapabilities *This);
	HRESULT(STDMETHODCALLTYPE *GetProtocols) (IMSAdminCryptoCapabilities *This, DWORD dwBufferSize, unsigned char *pbBuffer, DWORD *pdwMDRequiredBufferSize);
	HRESULT(STDMETHODCALLTYPE *GetMaximumCipherStrength) (IMSAdminCryptoCapabilities *This, LPDWORD pdwMaximumCipherStrength);
	HRESULT(STDMETHODCALLTYPE *GetRootCertificates) (IMSAdminCryptoCapabilities *This, DWORD dwBufferSize, unsigned char *pbBuffer, DWORD *pdwMDRequiredBufferSize);
	HRESULT(STDMETHODCALLTYPE *GetSupportedAlgs) (IMSAdminCryptoCapabilities *This, DWORD dwBufferSize, DWORD *pbBuffer, DWORD *pdwMDRequiredBufferSize);
	HRESULT(STDMETHODCALLTYPE *SetCAList) (IMSAdminCryptoCapabilities *This, DWORD dwBufferSize, unsigned char *pbBuffer);
	END_INTERFACE
}  IMSAdminCryptoCapabilitiesVtbl;
interface IMSAdminCryptoCapabilities
{
	CONST_VTBL struct IMSAdminCryptoCapabilitiesVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IMSAdminCryptoCapabilities_QueryInterface(This,riid,ppvObject)    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)
#define IMSAdminCryptoCapabilities_AddRef(This)    (This)->lpVtbl -> AddRef(This)
#define IMSAdminCryptoCapabilities_Release(This)    (This)->lpVtbl -> Release(This)
#define IMSAdminCryptoCapabilities_GetProtocols(This,dwBufferSize,pbBuffer,pdwMDRequiredBufferSize)    (This)->lpVtbl -> GetProtocols(This,dwBufferSize,pbBuffer,pdwMDRequiredBufferSize)
#define IMSAdminCryptoCapabilities_GetMaximumCipherStrength(This,pdwMaximumCipherStrength)    (This)->lpVtbl -> GetMaximumCipherStrength(This,pdwMaximumCipherStrength)
#define IMSAdminCryptoCapabilities_GetRootCertificates(This,dwBufferSize,pbBuffer,pdwMDRequiredBufferSize)    (This)->lpVtbl -> GetRootCertificates(This,dwBufferSize,pbBuffer,pdwMDRequiredBufferSize)
#define IMSAdminCryptoCapabilities_GetSupportedAlgs(This,dwBufferSize,pbBuffer,pdwMDRequiredBufferSize)    (This)->lpVtbl -> GetSupportedAlgs(This,dwBufferSize,pbBuffer,pdwMDRequiredBufferSize)
#define IMSAdminCryptoCapabilities_SetCAList(This,dwBufferSize,pbBuffer)    (This)->lpVtbl -> SetCAList(This,dwBufferSize,pbBuffer)
#endif
HRESULT STDMETHODCALLTYPE IMSAdminCryptoCapabilities_GetProtocols_Proxy(IMSAdminCryptoCapabilities *This, DWORD dwBufferSize, unsigned char *pbBuffer, DWORD *pdwMDRequiredBufferSize);
void __RPC_STUB IMSAdminCryptoCapabilities_GetProtocols_Stub(IRpcStubBuffer *This, IRpcChannelBuffer *_pRpcChannelBuffer, PRPC_MESSAGE _pRpcMessage, DWORD *_pdwStubPhase);
HRESULT STDMETHODCALLTYPE IMSAdminCryptoCapabilities_GetMaximumCipherStrength_Proxy(IMSAdminCryptoCapabilities *This, LPDWORD pdwMaximumCipherStrength);
void __RPC_STUB IMSAdminCryptoCapabilities_GetMaximumCipherStrength_Stub(IRpcStubBuffer *This, IRpcChannelBuffer *_pRpcChannelBuffer, PRPC_MESSAGE _pRpcMessage, DWORD *_pdwStubPhase);
HRESULT STDMETHODCALLTYPE IMSAdminCryptoCapabilities_GetRootCertificates_Proxy(IMSAdminCryptoCapabilities *This, DWORD dwBufferSize, unsigned char *pbBuffer, DWORD *pdwMDRequiredBufferSize);
void __RPC_STUB IMSAdminCryptoCapabilities_GetRootCertificates_Stub(IRpcStubBuffer *This, IRpcChannelBuffer *_pRpcChannelBuffer, PRPC_MESSAGE _pRpcMessage, DWORD *_pdwStubPhase);
HRESULT STDMETHODCALLTYPE IMSAdminCryptoCapabilities_GetSupportedAlgs_Proxy(IMSAdminCryptoCapabilities *This, DWORD dwBufferSize, DWORD *pbBuffer, DWORD *pdwMDRequiredBufferSize);
void __RPC_STUB IMSAdminCryptoCapabilities_GetSupportedAlgs_Stub(IRpcStubBuffer *This, IRpcChannelBuffer *_pRpcChannelBuffer, PRPC_MESSAGE _pRpcMessage, DWORD *_pdwStubPhase);
HRESULT STDMETHODCALLTYPE IMSAdminCryptoCapabilities_SetCAList_Proxy(IMSAdminCryptoCapabilities *This, DWORD dwBufferSize, unsigned char *pbBuffer);
void __RPC_STUB IMSAdminCryptoCapabilities_SetCAList_Stub(IRpcStubBuffer *This, IRpcChannelBuffer *_pRpcChannelBuffer, PRPC_MESSAGE _pRpcMessage, DWORD *_pdwStubPhase);
#endif
#endif
extern RPC_IF_HANDLE __MIDL_itf_admex_0256_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_admex_0256_v0_0_s_ifspec;
#endif

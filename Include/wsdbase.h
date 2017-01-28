/*+@@file@@----------------------------------------------------------------*//*!
 \file		wsdbase.h
 \par Description 
            Extension and update of headers for PellesC compiler suite.
 \par Project: 
            PellesC Headers extension
 \date		Created  on Mon Sep 19 17:30:29 2016
 \date		Modified on Mon Sep 19 17:30:29 2016
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
#ifndef __wsdbase_h__
#define __wsdbase_h__
#if __POCC__ >= 500
#pragma once
#endif
#ifndef __IWSDAddress_FWD_DEFINED__
#define __IWSDAddress_FWD_DEFINED__
typedef interface IWSDAddress IWSDAddress;
#endif
#ifndef __IWSDTransportAddress_FWD_DEFINED__
#define __IWSDTransportAddress_FWD_DEFINED__
typedef interface IWSDTransportAddress IWSDTransportAddress;
#endif
#ifndef __IWSDMessageParameters_FWD_DEFINED__
#define __IWSDMessageParameters_FWD_DEFINED__
typedef interface IWSDMessageParameters IWSDMessageParameters;
#endif
#ifndef __IWSDUdpMessageParameters_FWD_DEFINED__
#define __IWSDUdpMessageParameters_FWD_DEFINED__
typedef interface IWSDUdpMessageParameters IWSDUdpMessageParameters;
#endif
#ifndef __IWSDUdpAddress_FWD_DEFINED__
#define __IWSDUdpAddress_FWD_DEFINED__
typedef interface IWSDUdpAddress IWSDUdpAddress;
#endif
#ifndef __IWSDHttpMessageParameters_FWD_DEFINED__
#define __IWSDHttpMessageParameters_FWD_DEFINED__
typedef interface IWSDHttpMessageParameters IWSDHttpMessageParameters;
#endif
#ifndef __IWSDHttpAddress_FWD_DEFINED__
#define __IWSDHttpAddress_FWD_DEFINED__
typedef interface IWSDHttpAddress IWSDHttpAddress;
#endif
#ifndef __IWSDSSLClientCertificate_FWD_DEFINED__
#define __IWSDSSLClientCertificate_FWD_DEFINED__
typedef interface IWSDSSLClientCertificate IWSDSSLClientCertificate;
#endif
#ifndef __IWSDSignatureProperty_FWD_DEFINED__
#define __IWSDSignatureProperty_FWD_DEFINED__
typedef interface IWSDSignatureProperty IWSDSignatureProperty;
#endif
#include <objidl.h>
#include <wincrypt.h>
#if (WINVER >= _WIN32_WINNT_WIN7)
typedef enum __MIDL___MIDL_itf_wsdbase_0000_0000_0001
{
	WSD_CONFIG_MAX_INBOUND_MESSAGE_SIZE = 1,
	WSD_CONFIG_MAX_OUTBOUND_MESSAGE_SIZE = 2,
	WSD_SECURITY_SSL_CERT_FOR_CLIENT_AUTH = 3,
	WSD_SECURITY_SSL_SERVER_CERT_VALIDATION = 4,
	WSD_SECURITY_SSL_CLIENT_CERT_VALIDATION = 5,
	WSD_SECURITY_SSL_NEGOTIATE_CLIENT_CERT = 6,
	WSD_SECURITY_COMPACTSIG_SIGNING_CERT = 7,
	WSD_SECURITY_COMPACTSIG_VALIDATION = 8,
	WSD_CONFIG_HOSTING_ADDRESSES = 9,
	WSD_CONFIG_DEVICE_ADDRESSES = 10
} WSD_CONFIG_PARAM_TYPE;
typedef struct _WSD_CONFIG_PARAM
{
	WSD_CONFIG_PARAM_TYPE configParamType;
	PVOID pConfigData;
	DWORD dwConfigDataSize;
} WSD_CONFIG_PARAM;
typedef struct _WSD_CONFIG_PARAM *PWSD_CONFIG_PARAM;
typedef struct _WSD_SECURITY_CERT_VALIDATION
{
	PCCERT_CONTEXT *certMatchArray;
	DWORD dwCertMatchArrayCount;
	HCERTSTORE hCertMatchStore;
	HCERTSTORE hCertIssuerStore;
	DWORD dwCertCheckOptions;
} WSD_SECURITY_CERT_VALIDATION;
typedef struct _WSD_SECURITY_CERT_VALIDATION *PWSD_SECURITY_CERT_VALIDATION;
typedef struct _WSD_SECURITY_SIGNATURE_VALIDATION
{
	PCCERT_CONTEXT *signingCertArray;
	DWORD dwSigningCertArrayCount;
	HCERTSTORE hSigningCertStore;
	DWORD dwFlags;
} WSD_SECURITY_SIGNATURE_VALIDATION;
typedef struct _WSD_SECURITY_SIGNATURE_VALIDATION *PWSD_SECURITY_SIGNATURE_VALIDATION;
#define WSDAPI_SSL_CERT_APPLY_DEFAULT_CHECKS     0x0
#define WSDAPI_SSL_CERT_IGNORE_REVOCATION        0x1
#define WSDAPI_SSL_CERT_IGNORE_EXPIRY            0x2
#define WSDAPI_SSL_CERT_IGNORE_WRONG_USAGE       0x4
#define WSDAPI_SSL_CERT_IGNORE_UNKNOWN_CA        0x8
#define WSDAPI_SSL_CERT_IGNORE_INVALID_CN        0x10
#define WSDAPI_COMPACTSIG_ACCEPT_ALL_MESSAGES    0x1
typedef struct _WSD_CONFIG_ADDRESSES
{
	IWSDAddress **addresses;
	DWORD dwAddressCount;
} WSD_CONFIG_ADDRESSES;
typedef struct _WSD_CONFIG_ADDRESSES *PWSD_CONFIG_ADDRESSES;
#endif
#define WSDAPI_ADDRESSFAMILY_IPV4 1
#define WSDAPI_ADDRESSFAMILY_IPV6 2
extern RPC_IF_HANDLE __MIDL_itf_wsdbase_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_wsdbase_0000_0000_v0_0_s_ifspec;
#ifndef __IWSDAddress_INTERFACE_DEFINED__
#define __IWSDAddress_INTERFACE_DEFINED__
extern const IID IID_IWSDAddress;
typedef struct IWSDAddressVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IWSDAddress * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IWSDAddress * This);
	ULONG(STDMETHODCALLTYPE * Release) (IWSDAddress * This);
	HRESULT(STDMETHODCALLTYPE * Serialize) (IWSDAddress * This, LPWSTR pszBuffer, DWORD cchLength, BOOL fSafe);
	HRESULT(STDMETHODCALLTYPE * Deserialize) (IWSDAddress * This, LPCWSTR pszBuffer);
	END_INTERFACE
}  IWSDAddressVtbl;
interface IWSDAddress
{
	CONST_VTBL struct IWSDAddressVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IWSDAddress_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IWSDAddress_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IWSDAddress_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IWSDAddress_Serialize(This,pszBuffer,cchLength,fSafe) ( (This)->lpVtbl -> Serialize(This,pszBuffer,cchLength,fSafe) )
#define IWSDAddress_Deserialize(This,pszBuffer) ( (This)->lpVtbl -> Deserialize(This,pszBuffer) )
#endif
#endif
#ifndef __IWSDTransportAddress_INTERFACE_DEFINED__
#define __IWSDTransportAddress_INTERFACE_DEFINED__
extern const IID IID_IWSDTransportAddress;
typedef struct IWSDTransportAddressVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IWSDTransportAddress * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IWSDTransportAddress * This);
	ULONG(STDMETHODCALLTYPE * Release) (IWSDTransportAddress * This);
	HRESULT(STDMETHODCALLTYPE * Serialize) (IWSDTransportAddress * This, LPWSTR pszBuffer, DWORD cchLength, BOOL fSafe);
	HRESULT(STDMETHODCALLTYPE * Deserialize) (IWSDTransportAddress * This, LPCWSTR pszBuffer);
	HRESULT(STDMETHODCALLTYPE * GetPort) (IWSDTransportAddress * This, WORD * pwPort);
	HRESULT(STDMETHODCALLTYPE * SetPort) (IWSDTransportAddress * This, WORD wPort);
	HRESULT(STDMETHODCALLTYPE * GetTransportAddress) (IWSDTransportAddress * This, LPCWSTR * ppszAddress);
	HRESULT(STDMETHODCALLTYPE * GetTransportAddressEx) (IWSDTransportAddress * This, BOOL fSafe, LPCWSTR * ppszAddress);
	HRESULT(STDMETHODCALLTYPE * SetTransportAddress) (IWSDTransportAddress * This, LPCWSTR pszAddress);
	END_INTERFACE
}  IWSDTransportAddressVtbl;
interface IWSDTransportAddress
{
	CONST_VTBL struct IWSDTransportAddressVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IWSDTransportAddress_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IWSDTransportAddress_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IWSDTransportAddress_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IWSDTransportAddress_Serialize(This,pszBuffer,cchLength,fSafe) ( (This)->lpVtbl -> Serialize(This,pszBuffer,cchLength,fSafe) )
#define IWSDTransportAddress_Deserialize(This,pszBuffer) ( (This)->lpVtbl -> Deserialize(This,pszBuffer) )
#define IWSDTransportAddress_GetPort(This,pwPort) ( (This)->lpVtbl -> GetPort(This,pwPort) )
#define IWSDTransportAddress_SetPort(This,wPort) ( (This)->lpVtbl -> SetPort(This,wPort) )
#define IWSDTransportAddress_GetTransportAddress(This,ppszAddress) ( (This)->lpVtbl -> GetTransportAddress(This,ppszAddress) )
#define IWSDTransportAddress_GetTransportAddressEx(This,fSafe,ppszAddress) ( (This)->lpVtbl -> GetTransportAddressEx(This,fSafe,ppszAddress) )
#define IWSDTransportAddress_SetTransportAddress(This,pszAddress) ( (This)->lpVtbl -> SetTransportAddress(This,pszAddress) )
#endif
#endif
#ifndef __IWSDMessageParameters_INTERFACE_DEFINED__
#define __IWSDMessageParameters_INTERFACE_DEFINED__
extern const IID IID_IWSDMessageParameters;
typedef struct IWSDMessageParametersVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IWSDMessageParameters * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IWSDMessageParameters * This);
	ULONG(STDMETHODCALLTYPE * Release) (IWSDMessageParameters * This);
	HRESULT(STDMETHODCALLTYPE * GetLocalAddress) (IWSDMessageParameters * This, IWSDAddress ** ppAddress);
	HRESULT(STDMETHODCALLTYPE * SetLocalAddress) (IWSDMessageParameters * This, IWSDAddress * pAddress);
	HRESULT(STDMETHODCALLTYPE * GetRemoteAddress) (IWSDMessageParameters * This, IWSDAddress ** ppAddress);
	HRESULT(STDMETHODCALLTYPE * SetRemoteAddress) (IWSDMessageParameters * This, IWSDAddress * pAddress);
	HRESULT(STDMETHODCALLTYPE * GetLowerParameters) (IWSDMessageParameters * This, IWSDMessageParameters ** ppTxParams);
	END_INTERFACE
}  IWSDMessageParametersVtbl;
interface IWSDMessageParameters
{
	CONST_VTBL struct IWSDMessageParametersVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IWSDMessageParameters_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IWSDMessageParameters_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IWSDMessageParameters_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IWSDMessageParameters_GetLocalAddress(This,ppAddress) ( (This)->lpVtbl -> GetLocalAddress(This,ppAddress) )
#define IWSDMessageParameters_SetLocalAddress(This,pAddress) ( (This)->lpVtbl -> SetLocalAddress(This,pAddress) )
#define IWSDMessageParameters_GetRemoteAddress(This,ppAddress) ( (This)->lpVtbl -> GetRemoteAddress(This,ppAddress) )
#define IWSDMessageParameters_SetRemoteAddress(This,pAddress) ( (This)->lpVtbl -> SetRemoteAddress(This,pAddress) )
#define IWSDMessageParameters_GetLowerParameters(This,ppTxParams) ( (This)->lpVtbl -> GetLowerParameters(This,ppTxParams) )
#endif
#endif
HRESULT WINAPI WSDCreateUdpMessageParameters(IWSDUdpMessageParameters **ppTxParams);
typedef struct _WSDUdpRetransmitParams
{
	ULONG ulSendDelay;
	ULONG ulRepeat;
	ULONG ulRepeatMinDelay;
	ULONG ulRepeatMaxDelay;
	ULONG ulRepeatUpperDelay;
} WSDUdpRetransmitParams;
extern RPC_IF_HANDLE __MIDL_itf_wsdbase_0000_0003_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_wsdbase_0000_0003_v0_0_s_ifspec;
#ifndef __IWSDUdpMessageParameters_INTERFACE_DEFINED__
#define __IWSDUdpMessageParameters_INTERFACE_DEFINED__
extern const IID IID_IWSDUdpMessageParameters;
typedef struct IWSDUdpMessageParametersVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IWSDUdpMessageParameters * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IWSDUdpMessageParameters * This);
	ULONG(STDMETHODCALLTYPE * Release) (IWSDUdpMessageParameters * This);
	HRESULT(STDMETHODCALLTYPE * GetLocalAddress) (IWSDUdpMessageParameters * This, IWSDAddress ** ppAddress);
	HRESULT(STDMETHODCALLTYPE * SetLocalAddress) (IWSDUdpMessageParameters * This, IWSDAddress * pAddress);
	HRESULT(STDMETHODCALLTYPE * GetRemoteAddress) (IWSDUdpMessageParameters * This, IWSDAddress ** ppAddress);
	HRESULT(STDMETHODCALLTYPE * SetRemoteAddress) (IWSDUdpMessageParameters * This, IWSDAddress * pAddress);
	HRESULT(STDMETHODCALLTYPE * GetLowerParameters) (IWSDUdpMessageParameters * This, IWSDMessageParameters ** ppTxParams);
	HRESULT(STDMETHODCALLTYPE * SetRetransmitParams) (IWSDUdpMessageParameters * This, const WSDUdpRetransmitParams * pParams);
	HRESULT(STDMETHODCALLTYPE * GetRetransmitParams) (IWSDUdpMessageParameters * This, WSDUdpRetransmitParams * pParams);
	END_INTERFACE
}  IWSDUdpMessageParametersVtbl;
interface IWSDUdpMessageParameters
{
	CONST_VTBL struct IWSDUdpMessageParametersVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IWSDUdpMessageParameters_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IWSDUdpMessageParameters_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IWSDUdpMessageParameters_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IWSDUdpMessageParameters_GetLocalAddress(This,ppAddress) ( (This)->lpVtbl -> GetLocalAddress(This,ppAddress) )
#define IWSDUdpMessageParameters_SetLocalAddress(This,pAddress) ( (This)->lpVtbl -> SetLocalAddress(This,pAddress) )
#define IWSDUdpMessageParameters_GetRemoteAddress(This,ppAddress) ( (This)->lpVtbl -> GetRemoteAddress(This,ppAddress) )
#define IWSDUdpMessageParameters_SetRemoteAddress(This,pAddress) ( (This)->lpVtbl -> SetRemoteAddress(This,pAddress) )
#define IWSDUdpMessageParameters_GetLowerParameters(This,ppTxParams) ( (This)->lpVtbl -> GetLowerParameters(This,ppTxParams) )
#define IWSDUdpMessageParameters_SetRetransmitParams(This,pParams) ( (This)->lpVtbl -> SetRetransmitParams(This,pParams) )
#define IWSDUdpMessageParameters_GetRetransmitParams(This,pParams) ( (This)->lpVtbl -> GetRetransmitParams(This,pParams) )
#endif
#endif
HRESULT WINAPI WSDCreateUdpAddress(IWSDUdpAddress **ppAddress);
#if 1
#ifndef __CSADDR_DEFINED__
struct SOCKADDR_STORAGE;
#endif
#else
typedef void SOCKADDR_STORAGE;
#endif
typedef enum _WSDUdpMessageType
{
	ONE_WAY = 0,
	TWO_WAY = (ONE_WAY + 1)
} WSDUdpMessageType;
extern RPC_IF_HANDLE __MIDL_itf_wsdbase_0000_0004_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_wsdbase_0000_0004_v0_0_s_ifspec;
#ifndef __IWSDUdpAddress_INTERFACE_DEFINED__
#define __IWSDUdpAddress_INTERFACE_DEFINED__
extern const IID IID_IWSDUdpAddress;
typedef struct IWSDUdpAddressVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IWSDUdpAddress * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IWSDUdpAddress * This);
	ULONG(STDMETHODCALLTYPE * Release) (IWSDUdpAddress * This);
	HRESULT(STDMETHODCALLTYPE * Serialize) (IWSDUdpAddress * This, LPWSTR pszBuffer, DWORD cchLength, BOOL fSafe);
	HRESULT(STDMETHODCALLTYPE * Deserialize) (IWSDUdpAddress * This, LPCWSTR pszBuffer);
	HRESULT(STDMETHODCALLTYPE * GetPort) (IWSDUdpAddress * This, WORD * pwPort);
	HRESULT(STDMETHODCALLTYPE * SetPort) (IWSDUdpAddress * This, WORD wPort);
	HRESULT(STDMETHODCALLTYPE * GetTransportAddress) (IWSDUdpAddress * This, LPCWSTR * ppszAddress);
	HRESULT(STDMETHODCALLTYPE * GetTransportAddressEx) (IWSDUdpAddress * This, BOOL fSafe, LPCWSTR * ppszAddress);
	HRESULT(STDMETHODCALLTYPE * SetTransportAddress) (IWSDUdpAddress * This, LPCWSTR pszAddress);
	HRESULT(STDMETHODCALLTYPE * SetSockaddr) (IWSDUdpAddress * This, const SOCKADDR_STORAGE * pSockAddr);
	HRESULT(STDMETHODCALLTYPE * GetSockaddr) (IWSDUdpAddress * This, SOCKADDR_STORAGE * pSockAddr);
	HRESULT(STDMETHODCALLTYPE * SetExclusive) (IWSDUdpAddress * This, BOOL fExclusive);
	HRESULT(STDMETHODCALLTYPE * GetExclusive) (IWSDUdpAddress * This);
	HRESULT(STDMETHODCALLTYPE * SetMessageType) (IWSDUdpAddress * This, WSDUdpMessageType messageType);
	HRESULT(STDMETHODCALLTYPE * GetMessageType) (IWSDUdpAddress * This, WSDUdpMessageType * pMessageType);
	HRESULT(STDMETHODCALLTYPE * SetTTL) (IWSDUdpAddress * This, DWORD dwTTL);
	HRESULT(STDMETHODCALLTYPE * GetTTL) (IWSDUdpAddress * This, DWORD * pdwTTL);
	HRESULT(STDMETHODCALLTYPE * SetAlias) (IWSDUdpAddress * This, const GUID * pAlias);
	HRESULT(STDMETHODCALLTYPE * GetAlias) (IWSDUdpAddress * This, GUID * pAlias);
	END_INTERFACE
}  IWSDUdpAddressVtbl;
interface IWSDUdpAddress
{
	CONST_VTBL struct IWSDUdpAddressVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IWSDUdpAddress_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IWSDUdpAddress_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IWSDUdpAddress_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IWSDUdpAddress_Serialize(This,pszBuffer,cchLength,fSafe) ( (This)->lpVtbl -> Serialize(This,pszBuffer,cchLength,fSafe) )
#define IWSDUdpAddress_Deserialize(This,pszBuffer) ( (This)->lpVtbl -> Deserialize(This,pszBuffer) )
#define IWSDUdpAddress_GetPort(This,pwPort) ( (This)->lpVtbl -> GetPort(This,pwPort) )
#define IWSDUdpAddress_SetPort(This,wPort) ( (This)->lpVtbl -> SetPort(This,wPort) )
#define IWSDUdpAddress_GetTransportAddress(This,ppszAddress) ( (This)->lpVtbl -> GetTransportAddress(This,ppszAddress) )
#define IWSDUdpAddress_GetTransportAddressEx(This,fSafe,ppszAddress) ( (This)->lpVtbl -> GetTransportAddressEx(This,fSafe,ppszAddress) )
#define IWSDUdpAddress_SetTransportAddress(This,pszAddress) ( (This)->lpVtbl -> SetTransportAddress(This,pszAddress) )
#define IWSDUdpAddress_SetSockaddr(This,pSockAddr) ( (This)->lpVtbl -> SetSockaddr(This,pSockAddr) )
#define IWSDUdpAddress_GetSockaddr(This,pSockAddr) ( (This)->lpVtbl -> GetSockaddr(This,pSockAddr) )
#define IWSDUdpAddress_SetExclusive(This,fExclusive) ( (This)->lpVtbl -> SetExclusive(This,fExclusive) )
#define IWSDUdpAddress_GetExclusive(This) ( (This)->lpVtbl -> GetExclusive(This) )
#define IWSDUdpAddress_SetMessageType(This,messageType) ( (This)->lpVtbl -> SetMessageType(This,messageType) )
#define IWSDUdpAddress_GetMessageType(This,pMessageType) ( (This)->lpVtbl -> GetMessageType(This,pMessageType) )
#define IWSDUdpAddress_SetTTL(This,dwTTL) ( (This)->lpVtbl -> SetTTL(This,dwTTL) )
#define IWSDUdpAddress_GetTTL(This,pdwTTL) ( (This)->lpVtbl -> GetTTL(This,pdwTTL) )
#define IWSDUdpAddress_SetAlias(This,pAlias) ( (This)->lpVtbl -> SetAlias(This,pAlias) )
#define IWSDUdpAddress_GetAlias(This,pAlias) ( (This)->lpVtbl -> GetAlias(This,pAlias) )
#endif
#endif
HRESULT WINAPI WSDCreateHttpMessageParameters(IWSDHttpMessageParameters **ppTxParams);
extern RPC_IF_HANDLE __MIDL_itf_wsdbase_0000_0005_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_wsdbase_0000_0005_v0_0_s_ifspec;
#ifndef __IWSDHttpMessageParameters_INTERFACE_DEFINED__
#define __IWSDHttpMessageParameters_INTERFACE_DEFINED__
extern const IID IID_IWSDHttpMessageParameters;
typedef struct IWSDHttpMessageParametersVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IWSDHttpMessageParameters * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IWSDHttpMessageParameters * This);
	ULONG(STDMETHODCALLTYPE * Release) (IWSDHttpMessageParameters * This);
	HRESULT(STDMETHODCALLTYPE * GetLocalAddress) (IWSDHttpMessageParameters * This, IWSDAddress ** ppAddress);
	HRESULT(STDMETHODCALLTYPE * SetLocalAddress) (IWSDHttpMessageParameters * This, IWSDAddress * pAddress);
	HRESULT(STDMETHODCALLTYPE * GetRemoteAddress) (IWSDHttpMessageParameters * This, IWSDAddress ** ppAddress);
	HRESULT(STDMETHODCALLTYPE * SetRemoteAddress) (IWSDHttpMessageParameters * This, IWSDAddress * pAddress);
	HRESULT(STDMETHODCALLTYPE * GetLowerParameters) (IWSDHttpMessageParameters * This, IWSDMessageParameters ** ppTxParams);
	HRESULT(STDMETHODCALLTYPE * SetInboundHttpHeaders) (IWSDHttpMessageParameters * This, LPCWSTR pszHeaders);
	HRESULT(STDMETHODCALLTYPE * GetInboundHttpHeaders) (IWSDHttpMessageParameters * This, LPCWSTR * ppszHeaders);
	HRESULT(STDMETHODCALLTYPE * SetOutboundHttpHeaders) (IWSDHttpMessageParameters * This, LPCWSTR pszHeaders);
	HRESULT(STDMETHODCALLTYPE * GetOutboundHttpHeaders) (IWSDHttpMessageParameters * This, LPCWSTR * ppszHeaders);
	HRESULT(STDMETHODCALLTYPE * SetID) (IWSDHttpMessageParameters * This, LPCWSTR pszId);
	HRESULT(STDMETHODCALLTYPE * GetID) (IWSDHttpMessageParameters * This, LPCWSTR * ppszId);
	HRESULT(STDMETHODCALLTYPE * SetContext) (IWSDHttpMessageParameters * This, IUnknown * pContext);
	HRESULT(STDMETHODCALLTYPE * GetContext) (IWSDHttpMessageParameters * This, IUnknown ** ppContext);
	HRESULT(STDMETHODCALLTYPE * Clear) (IWSDHttpMessageParameters * This);
	END_INTERFACE
}  IWSDHttpMessageParametersVtbl;
interface IWSDHttpMessageParameters
{
	CONST_VTBL struct IWSDHttpMessageParametersVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IWSDHttpMessageParameters_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IWSDHttpMessageParameters_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IWSDHttpMessageParameters_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IWSDHttpMessageParameters_GetLocalAddress(This,ppAddress) ( (This)->lpVtbl -> GetLocalAddress(This,ppAddress) )
#define IWSDHttpMessageParameters_SetLocalAddress(This,pAddress) ( (This)->lpVtbl -> SetLocalAddress(This,pAddress) )
#define IWSDHttpMessageParameters_GetRemoteAddress(This,ppAddress) ( (This)->lpVtbl -> GetRemoteAddress(This,ppAddress) )
#define IWSDHttpMessageParameters_SetRemoteAddress(This,pAddress) ( (This)->lpVtbl -> SetRemoteAddress(This,pAddress) )
#define IWSDHttpMessageParameters_GetLowerParameters(This,ppTxParams) ( (This)->lpVtbl -> GetLowerParameters(This,ppTxParams) )
#define IWSDHttpMessageParameters_SetInboundHttpHeaders(This,pszHeaders) ( (This)->lpVtbl -> SetInboundHttpHeaders(This,pszHeaders) )
#define IWSDHttpMessageParameters_GetInboundHttpHeaders(This,ppszHeaders) ( (This)->lpVtbl -> GetInboundHttpHeaders(This,ppszHeaders) )
#define IWSDHttpMessageParameters_SetOutboundHttpHeaders(This,pszHeaders) ( (This)->lpVtbl -> SetOutboundHttpHeaders(This,pszHeaders) )
#define IWSDHttpMessageParameters_GetOutboundHttpHeaders(This,ppszHeaders) ( (This)->lpVtbl -> GetOutboundHttpHeaders(This,ppszHeaders) )
#define IWSDHttpMessageParameters_SetID(This,pszId) ( (This)->lpVtbl -> SetID(This,pszId) )
#define IWSDHttpMessageParameters_GetID(This,ppszId) ( (This)->lpVtbl -> GetID(This,ppszId) )
#define IWSDHttpMessageParameters_SetContext(This,pContext) ( (This)->lpVtbl -> SetContext(This,pContext) )
#define IWSDHttpMessageParameters_GetContext(This,ppContext) ( (This)->lpVtbl -> GetContext(This,ppContext) )
#define IWSDHttpMessageParameters_Clear(This) ( (This)->lpVtbl -> Clear(This) )
#endif
#endif
HRESULT WINAPI WSDCreateHttpAddress(IWSDHttpAddress **ppAdress);
extern RPC_IF_HANDLE __MIDL_itf_wsdbase_0000_0006_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_wsdbase_0000_0006_v0_0_s_ifspec;
#ifndef __IWSDHttpAddress_INTERFACE_DEFINED__
#define __IWSDHttpAddress_INTERFACE_DEFINED__
extern const IID IID_IWSDHttpAddress;
typedef struct IWSDHttpAddressVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IWSDHttpAddress * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IWSDHttpAddress * This);
	ULONG(STDMETHODCALLTYPE * Release) (IWSDHttpAddress * This);
	HRESULT(STDMETHODCALLTYPE * Serialize) (IWSDHttpAddress * This, LPWSTR pszBuffer, DWORD cchLength, BOOL fSafe);
	HRESULT(STDMETHODCALLTYPE * Deserialize) (IWSDHttpAddress * This, LPCWSTR pszBuffer);
	HRESULT(STDMETHODCALLTYPE * GetPort) (IWSDHttpAddress * This, WORD * pwPort);
	HRESULT(STDMETHODCALLTYPE * SetPort) (IWSDHttpAddress * This, WORD wPort);
	HRESULT(STDMETHODCALLTYPE * GetTransportAddress) (IWSDHttpAddress * This, LPCWSTR * ppszAddress);
	HRESULT(STDMETHODCALLTYPE * GetTransportAddressEx) (IWSDHttpAddress * This, BOOL fSafe, LPCWSTR * ppszAddress);
	HRESULT(STDMETHODCALLTYPE * SetTransportAddress) (IWSDHttpAddress * This, LPCWSTR pszAddress);
	HRESULT(STDMETHODCALLTYPE * GetSecure) (IWSDHttpAddress * This);
	HRESULT(STDMETHODCALLTYPE * SetSecure) (IWSDHttpAddress * This, BOOL fSecure);
	HRESULT(STDMETHODCALLTYPE * GetPath) (IWSDHttpAddress * This, LPCWSTR * ppszPath);
	HRESULT(STDMETHODCALLTYPE * SetPath) (IWSDHttpAddress * This, LPCWSTR pszPath);
	END_INTERFACE
}  IWSDHttpAddressVtbl;
interface IWSDHttpAddress
{
	CONST_VTBL struct IWSDHttpAddressVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IWSDHttpAddress_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IWSDHttpAddress_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IWSDHttpAddress_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IWSDHttpAddress_Serialize(This,pszBuffer,cchLength,fSafe) ( (This)->lpVtbl -> Serialize(This,pszBuffer,cchLength,fSafe) )
#define IWSDHttpAddress_Deserialize(This,pszBuffer) ( (This)->lpVtbl -> Deserialize(This,pszBuffer) )
#define IWSDHttpAddress_GetPort(This,pwPort) ( (This)->lpVtbl -> GetPort(This,pwPort) )
#define IWSDHttpAddress_SetPort(This,wPort) ( (This)->lpVtbl -> SetPort(This,wPort) )
#define IWSDHttpAddress_GetTransportAddress(This,ppszAddress) ( (This)->lpVtbl -> GetTransportAddress(This,ppszAddress) )
#define IWSDHttpAddress_GetTransportAddressEx(This,fSafe,ppszAddress) ( (This)->lpVtbl -> GetTransportAddressEx(This,fSafe,ppszAddress) )
#define IWSDHttpAddress_SetTransportAddress(This,pszAddress) ( (This)->lpVtbl -> SetTransportAddress(This,pszAddress) )
#define IWSDHttpAddress_GetSecure(This) ( (This)->lpVtbl -> GetSecure(This) )
#define IWSDHttpAddress_SetSecure(This,fSecure) ( (This)->lpVtbl -> SetSecure(This,fSecure) )
#define IWSDHttpAddress_GetPath(This,ppszPath) ( (This)->lpVtbl -> GetPath(This,ppszPath) )
#define IWSDHttpAddress_SetPath(This,pszPath) ( (This)->lpVtbl -> SetPath(This,pszPath) )
#endif
#endif
#if (WINVER >= _WIN32_WINNT_WIN7)
extern RPC_IF_HANDLE __MIDL_itf_wsdbase_0000_0007_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_wsdbase_0000_0007_v0_0_s_ifspec;
#ifndef __IWSDSSLClientCertificate_INTERFACE_DEFINED__
#define __IWSDSSLClientCertificate_INTERFACE_DEFINED__
extern const IID IID_IWSDSSLClientCertificate;
typedef struct IWSDSSLClientCertificateVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IWSDSSLClientCertificate * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IWSDSSLClientCertificate * This);
	ULONG(STDMETHODCALLTYPE * Release) (IWSDSSLClientCertificate * This);
	HRESULT(STDMETHODCALLTYPE * GetClientCertificate) (IWSDSSLClientCertificate * This, PCCERT_CONTEXT * ppCertContext);
	HRESULT(STDMETHODCALLTYPE * GetMappedAccessToken) (IWSDSSLClientCertificate * This, HANDLE * phToken);
	END_INTERFACE
}  IWSDSSLClientCertificateVtbl;
interface IWSDSSLClientCertificate
{
	CONST_VTBL struct IWSDSSLClientCertificateVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IWSDSSLClientCertificate_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IWSDSSLClientCertificate_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IWSDSSLClientCertificate_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IWSDSSLClientCertificate_GetClientCertificate(This,ppCertContext) ( (This)->lpVtbl -> GetClientCertificate(This,ppCertContext) )
#define IWSDSSLClientCertificate_GetMappedAccessToken(This,phToken) ( (This)->lpVtbl -> GetMappedAccessToken(This,phToken) )
#endif
#endif
#ifndef __IWSDSignatureProperty_INTERFACE_DEFINED__
#define __IWSDSignatureProperty_INTERFACE_DEFINED__
extern const IID IID_IWSDSignatureProperty;
typedef struct IWSDSignaturePropertyVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IWSDSignatureProperty * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IWSDSignatureProperty * This);
	ULONG(STDMETHODCALLTYPE * Release) (IWSDSignatureProperty * This);
	HRESULT(STDMETHODCALLTYPE * IsMessageSigned) (IWSDSignatureProperty * This, BOOL * pbSigned);
	HRESULT(STDMETHODCALLTYPE * IsMessageSignatureTrusted) (IWSDSignatureProperty * This, BOOL * pbSignatureTrusted);
	HRESULT(STDMETHODCALLTYPE * GetKeyInfo) (IWSDSignatureProperty * This, BYTE * pbKeyInfo, DWORD * pdwKeyInfoSize);
	HRESULT(STDMETHODCALLTYPE * GetSignature) (IWSDSignatureProperty * This, BYTE * pbSignature, DWORD * pdwSignatureSize);
	HRESULT(STDMETHODCALLTYPE * GetSignedInfoHash) (IWSDSignatureProperty * This, BYTE * pbSignedInfoHash, DWORD * pdwHashSize);
	END_INTERFACE
}  IWSDSignaturePropertyVtbl;
interface IWSDSignatureProperty
{
	CONST_VTBL struct IWSDSignaturePropertyVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IWSDSignatureProperty_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IWSDSignatureProperty_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IWSDSignatureProperty_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IWSDSignatureProperty_IsMessageSigned(This,pbSigned) ( (This)->lpVtbl -> IsMessageSigned(This,pbSigned) )
#define IWSDSignatureProperty_IsMessageSignatureTrusted(This,pbSignatureTrusted) ( (This)->lpVtbl -> IsMessageSignatureTrusted(This,pbSignatureTrusted) )
#define IWSDSignatureProperty_GetKeyInfo(This,pbKeyInfo,pdwKeyInfoSize) ( (This)->lpVtbl -> GetKeyInfo(This,pbKeyInfo,pdwKeyInfoSize) )
#define IWSDSignatureProperty_GetSignature(This,pbSignature,pdwSignatureSize) ( (This)->lpVtbl -> GetSignature(This,pbSignature,pdwSignatureSize) )
#define IWSDSignatureProperty_GetSignedInfoHash(This,pbSignedInfoHash,pdwHashSize) ( (This)->lpVtbl -> GetSignedInfoHash(This,pbSignedInfoHash,pdwHashSize) )
#endif
#endif
#endif
extern RPC_IF_HANDLE __MIDL_itf_wsdbase_0000_0009_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_wsdbase_0000_0009_v0_0_s_ifspec;
#endif

/*+@@file@@----------------------------------------------------------------*//*!
 \file		xpsdigitalsignature.h
 \par Description 
            Extension and update of headers for PellesC compiler suite.
 \par Project: 
            PellesC Headers extension
 \date		Created  on Mon Sep 19 20:02:56 2016
 \date		Modified on Mon Sep 19 20:02:56 2016
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
#ifndef __xpsdigitalsignature_h__
#define __xpsdigitalsignature_h__
#if __POCC__ >= 500
#pragma once
#endif
#ifndef __IXpsSigningOptions_FWD_DEFINED__
#define __IXpsSigningOptions_FWD_DEFINED__
typedef interface IXpsSigningOptions IXpsSigningOptions;
#endif
#ifndef __IXpsSignatureCollection_FWD_DEFINED__
#define __IXpsSignatureCollection_FWD_DEFINED__
typedef interface IXpsSignatureCollection IXpsSignatureCollection;
#endif
#ifndef __IXpsSignature_FWD_DEFINED__
#define __IXpsSignature_FWD_DEFINED__
typedef interface IXpsSignature IXpsSignature;
#endif
#ifndef __IXpsSignatureBlockCollection_FWD_DEFINED__
#define __IXpsSignatureBlockCollection_FWD_DEFINED__
typedef interface IXpsSignatureBlockCollection IXpsSignatureBlockCollection;
#endif
#ifndef __IXpsSignatureBlock_FWD_DEFINED__
#define __IXpsSignatureBlock_FWD_DEFINED__
typedef interface IXpsSignatureBlock IXpsSignatureBlock;
#endif
#ifndef __IXpsSignatureRequestCollection_FWD_DEFINED__
#define __IXpsSignatureRequestCollection_FWD_DEFINED__
typedef interface IXpsSignatureRequestCollection IXpsSignatureRequestCollection;
#endif
#ifndef __IXpsSignatureRequest_FWD_DEFINED__
#define __IXpsSignatureRequest_FWD_DEFINED__
typedef interface IXpsSignatureRequest IXpsSignatureRequest;
#endif
#ifndef __IXpsSignatureManager_FWD_DEFINED__
#define __IXpsSignatureManager_FWD_DEFINED__
typedef interface IXpsSignatureManager IXpsSignatureManager;
#endif
#ifndef __XpsSignatureManager_FWD_DEFINED__
#define __XpsSignatureManager_FWD_DEFINED__
typedef struct XpsSignatureManager XpsSignatureManager;
#endif
#include "oaidl.h"
#include "wincrypt.h"
#include "msopc.h"
#if (NTDDI_VERSION >= NTDDI_WIN7)
extern RPC_IF_HANDLE __MIDL_itf_xpsdigitalsignature_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_xpsdigitalsignature_0000_0000_v0_0_s_ifspec;
#ifndef __MSXPSSIG_LIBRARY_DEFINED__
#define __MSXPSSIG_LIBRARY_DEFINED__
typedef enum __MIDL___MIDL_itf_xpsdigitalsignature_0000_0000_0001
{
	XPS_SIGNATURE_STATUS_INCOMPLIANT = 1,
	XPS_SIGNATURE_STATUS_INCOMPLETE = 2,
	XPS_SIGNATURE_STATUS_BROKEN = 3,
	XPS_SIGNATURE_STATUS_QUESTIONABLE = 4,
	XPS_SIGNATURE_STATUS_VALID = 5
} XPS_SIGNATURE_STATUS;
typedef enum __MIDL___MIDL_itf_xpsdigitalsignature_0000_0000_0002
{
	XPS_SIGN_POLICY_NONE = 0,
	XPS_SIGN_POLICY_CORE_PROPERTIES = 0x1,
	XPS_SIGN_POLICY_SIGNATURE_RELATIONSHIPS = 0x2,
	XPS_SIGN_POLICY_PRINT_TICKET = 0x4,
	XPS_SIGN_POLICY_DISCARD_CONTROL = 0x8,
	XPS_SIGN_POLICY_ALL = 0xf
} XPS_SIGN_POLICY;
DEFINE_ENUM_FLAG_OPERATORS(XPS_SIGN_POLICY)
typedef enum __MIDL___MIDL_itf_xpsdigitalsignature_0000_0000_0003
{
	XPS_SIGN_FLAGS_NONE = 0,
	XPS_SIGN_FLAGS_IGNORE_MARKUP_COMPATIBILITY = 0x1
} XPS_SIGN_FLAGS;
DEFINE_ENUM_FLAG_OPERATORS(XPS_SIGN_FLAGS)
extern const IID LIBID_MSXPSSIG;
#ifndef __IXpsSigningOptions_INTERFACE_DEFINED__
#define __IXpsSigningOptions_INTERFACE_DEFINED__
extern const IID IID_IXpsSigningOptions;
typedef struct IXpsSigningOptionsVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IXpsSigningOptions * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IXpsSigningOptions * This);
	ULONG(STDMETHODCALLTYPE * Release) (IXpsSigningOptions * This);
	HRESULT(STDMETHODCALLTYPE * GetSignatureId) (IXpsSigningOptions * This, LPWSTR * signatureId);
	HRESULT(STDMETHODCALLTYPE * SetSignatureId) (IXpsSigningOptions * This, LPCWSTR signatureId);
	HRESULT(STDMETHODCALLTYPE * GetSignatureMethod) (IXpsSigningOptions * This, LPWSTR * signatureMethod);
	HRESULT(STDMETHODCALLTYPE * SetSignatureMethod) (IXpsSigningOptions * This, LPCWSTR signatureMethod);
	HRESULT(STDMETHODCALLTYPE * GetDigestMethod) (IXpsSigningOptions * This, LPWSTR * digestMethod);
	HRESULT(STDMETHODCALLTYPE * SetDigestMethod) (IXpsSigningOptions * This, LPCWSTR digestMethod);
	HRESULT(STDMETHODCALLTYPE * GetSignaturePartName) (IXpsSigningOptions * This, IOpcPartUri ** signaturePartName);
	HRESULT(STDMETHODCALLTYPE * SetSignaturePartName) (IXpsSigningOptions * This, IOpcPartUri * signaturePartName);
	HRESULT(STDMETHODCALLTYPE * GetPolicy) (IXpsSigningOptions * This, XPS_SIGN_POLICY * policy);
	HRESULT(STDMETHODCALLTYPE * SetPolicy) (IXpsSigningOptions * This, XPS_SIGN_POLICY policy);
	HRESULT(STDMETHODCALLTYPE * GetSigningTimeFormat) (IXpsSigningOptions * This, OPC_SIGNATURE_TIME_FORMAT * timeFormat);
	HRESULT(STDMETHODCALLTYPE * SetSigningTimeFormat) (IXpsSigningOptions * This, OPC_SIGNATURE_TIME_FORMAT timeFormat);
	HRESULT(STDMETHODCALLTYPE * GetCustomObjects) (IXpsSigningOptions * This, IOpcSignatureCustomObjectSet ** customObjectSet);
	HRESULT(STDMETHODCALLTYPE * GetCustomReferences) (IXpsSigningOptions * This, IOpcSignatureReferenceSet ** customReferenceSet);
	HRESULT(STDMETHODCALLTYPE * GetCertificateSet) (IXpsSigningOptions * This, IOpcCertificateSet ** certificateSet);
	HRESULT(STDMETHODCALLTYPE * GetFlags) (IXpsSigningOptions * This, XPS_SIGN_FLAGS * flags);
	HRESULT(STDMETHODCALLTYPE * SetFlags) (IXpsSigningOptions * This, XPS_SIGN_FLAGS flags);
	END_INTERFACE
}  IXpsSigningOptionsVtbl;
interface IXpsSigningOptions
{
	CONST_VTBL struct IXpsSigningOptionsVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IXpsSigningOptions_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IXpsSigningOptions_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IXpsSigningOptions_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IXpsSigningOptions_GetSignatureId(This,signatureId) ( (This)->lpVtbl -> GetSignatureId(This,signatureId) )
#define IXpsSigningOptions_SetSignatureId(This,signatureId) ( (This)->lpVtbl -> SetSignatureId(This,signatureId) )
#define IXpsSigningOptions_GetSignatureMethod(This,signatureMethod) ( (This)->lpVtbl -> GetSignatureMethod(This,signatureMethod) )
#define IXpsSigningOptions_SetSignatureMethod(This,signatureMethod) ( (This)->lpVtbl -> SetSignatureMethod(This,signatureMethod) )
#define IXpsSigningOptions_GetDigestMethod(This,digestMethod) ( (This)->lpVtbl -> GetDigestMethod(This,digestMethod) )
#define IXpsSigningOptions_SetDigestMethod(This,digestMethod) ( (This)->lpVtbl -> SetDigestMethod(This,digestMethod) )
#define IXpsSigningOptions_GetSignaturePartName(This,signaturePartName) ( (This)->lpVtbl -> GetSignaturePartName(This,signaturePartName) )
#define IXpsSigningOptions_SetSignaturePartName(This,signaturePartName) ( (This)->lpVtbl -> SetSignaturePartName(This,signaturePartName) )
#define IXpsSigningOptions_GetPolicy(This,policy) ( (This)->lpVtbl -> GetPolicy(This,policy) )
#define IXpsSigningOptions_SetPolicy(This,policy) ( (This)->lpVtbl -> SetPolicy(This,policy) )
#define IXpsSigningOptions_GetSigningTimeFormat(This,timeFormat) ( (This)->lpVtbl -> GetSigningTimeFormat(This,timeFormat) )
#define IXpsSigningOptions_SetSigningTimeFormat(This,timeFormat) ( (This)->lpVtbl -> SetSigningTimeFormat(This,timeFormat) )
#define IXpsSigningOptions_GetCustomObjects(This,customObjectSet) ( (This)->lpVtbl -> GetCustomObjects(This,customObjectSet) )
#define IXpsSigningOptions_GetCustomReferences(This,customReferenceSet) ( (This)->lpVtbl -> GetCustomReferences(This,customReferenceSet) )
#define IXpsSigningOptions_GetCertificateSet(This,certificateSet) ( (This)->lpVtbl -> GetCertificateSet(This,certificateSet) )
#define IXpsSigningOptions_GetFlags(This,flags) ( (This)->lpVtbl -> GetFlags(This,flags) )
#define IXpsSigningOptions_SetFlags(This,flags) ( (This)->lpVtbl -> SetFlags(This,flags) )
#endif
#endif
#ifndef __IXpsSignatureCollection_INTERFACE_DEFINED__
#define __IXpsSignatureCollection_INTERFACE_DEFINED__
extern const IID IID_IXpsSignatureCollection;
typedef struct IXpsSignatureCollectionVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IXpsSignatureCollection * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IXpsSignatureCollection * This);
	ULONG(STDMETHODCALLTYPE * Release) (IXpsSignatureCollection * This);
	HRESULT(STDMETHODCALLTYPE * GetCount) (IXpsSignatureCollection * This, UINT32 * count);
	HRESULT(STDMETHODCALLTYPE * GetAt) (IXpsSignatureCollection * This, UINT32 index, IXpsSignature ** signature);
	HRESULT(STDMETHODCALLTYPE * RemoveAt) (IXpsSignatureCollection * This, UINT32 index);
	END_INTERFACE
}  IXpsSignatureCollectionVtbl;
interface IXpsSignatureCollection
{
	CONST_VTBL struct IXpsSignatureCollectionVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IXpsSignatureCollection_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IXpsSignatureCollection_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IXpsSignatureCollection_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IXpsSignatureCollection_GetCount(This,count) ( (This)->lpVtbl -> GetCount(This,count) )
#define IXpsSignatureCollection_GetAt(This,index,signature) ( (This)->lpVtbl -> GetAt(This,index,signature) )
#define IXpsSignatureCollection_RemoveAt(This,index) ( (This)->lpVtbl -> RemoveAt(This,index) )
#endif
#endif
#ifndef __IXpsSignature_INTERFACE_DEFINED__
#define __IXpsSignature_INTERFACE_DEFINED__
extern const IID IID_IXpsSignature;
typedef struct IXpsSignatureVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IXpsSignature * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IXpsSignature * This);
	ULONG(STDMETHODCALLTYPE * Release) (IXpsSignature * This);
	HRESULT(STDMETHODCALLTYPE * GetSignatureId) (IXpsSignature * This, LPWSTR * sigId);
	HRESULT(STDMETHODCALLTYPE * GetSignatureValue) (IXpsSignature * This, UINT8 ** signatureHashValue, UINT32 * count);
	HRESULT(STDMETHODCALLTYPE * GetCertificateEnumerator) (IXpsSignature * This, IOpcCertificateEnumerator ** certificateEnumerator);
	HRESULT(STDMETHODCALLTYPE * GetSigningTime) (IXpsSignature * This, LPWSTR * sigDateTimeString);
	HRESULT(STDMETHODCALLTYPE * GetSigningTimeFormat) (IXpsSignature * This, OPC_SIGNATURE_TIME_FORMAT * timeFormat);
	HRESULT(STDMETHODCALLTYPE * GetSignaturePartName) (IXpsSignature * This, IOpcPartUri ** signaturePartName);
	HRESULT(STDMETHODCALLTYPE * Verify) (IXpsSignature * This, const CERT_CONTEXT * x509Certificate, XPS_SIGNATURE_STATUS * sigStatus);
	HRESULT(STDMETHODCALLTYPE * GetPolicy) (IXpsSignature * This, XPS_SIGN_POLICY * policy);
	HRESULT(STDMETHODCALLTYPE * GetCustomObjectEnumerator) (IXpsSignature * This, IOpcSignatureCustomObjectEnumerator ** customObjectEnumerator);
	HRESULT(STDMETHODCALLTYPE * GetCustomReferenceEnumerator) (IXpsSignature * This, IOpcSignatureReferenceEnumerator ** customReferenceEnumerator);
	HRESULT(STDMETHODCALLTYPE * GetSignatureXml) (IXpsSignature * This, UINT8 ** signatureXml, UINT32 * count);
	HRESULT(STDMETHODCALLTYPE * SetSignatureXml) (IXpsSignature * This, const UINT8 * signatureXml, UINT32 count);
	END_INTERFACE
}  IXpsSignatureVtbl;
interface IXpsSignature
{
	CONST_VTBL struct IXpsSignatureVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IXpsSignature_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IXpsSignature_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IXpsSignature_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IXpsSignature_GetSignatureId(This,sigId) ( (This)->lpVtbl -> GetSignatureId(This,sigId) )
#define IXpsSignature_GetSignatureValue(This,signatureHashValue,count) ( (This)->lpVtbl -> GetSignatureValue(This,signatureHashValue,count) )
#define IXpsSignature_GetCertificateEnumerator(This,certificateEnumerator) ( (This)->lpVtbl -> GetCertificateEnumerator(This,certificateEnumerator) )
#define IXpsSignature_GetSigningTime(This,sigDateTimeString) ( (This)->lpVtbl -> GetSigningTime(This,sigDateTimeString) )
#define IXpsSignature_GetSigningTimeFormat(This,timeFormat) ( (This)->lpVtbl -> GetSigningTimeFormat(This,timeFormat) )
#define IXpsSignature_GetSignaturePartName(This,signaturePartName) ( (This)->lpVtbl -> GetSignaturePartName(This,signaturePartName) )
#define IXpsSignature_Verify(This,x509Certificate,sigStatus) ( (This)->lpVtbl -> Verify(This,x509Certificate,sigStatus) )
#define IXpsSignature_GetPolicy(This,policy) ( (This)->lpVtbl -> GetPolicy(This,policy) )
#define IXpsSignature_GetCustomObjectEnumerator(This,customObjectEnumerator) ( (This)->lpVtbl -> GetCustomObjectEnumerator(This,customObjectEnumerator) )
#define IXpsSignature_GetCustomReferenceEnumerator(This,customReferenceEnumerator) ( (This)->lpVtbl -> GetCustomReferenceEnumerator(This,customReferenceEnumerator) )
#define IXpsSignature_GetSignatureXml(This,signatureXml,count) ( (This)->lpVtbl -> GetSignatureXml(This,signatureXml,count) )
#define IXpsSignature_SetSignatureXml(This,signatureXml,count) ( (This)->lpVtbl -> SetSignatureXml(This,signatureXml,count) )
#endif
#endif
#ifndef __IXpsSignatureBlockCollection_INTERFACE_DEFINED__
#define __IXpsSignatureBlockCollection_INTERFACE_DEFINED__
extern const IID IID_IXpsSignatureBlockCollection;
typedef struct IXpsSignatureBlockCollectionVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IXpsSignatureBlockCollection * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IXpsSignatureBlockCollection * This);
	ULONG(STDMETHODCALLTYPE * Release) (IXpsSignatureBlockCollection * This);
	HRESULT(STDMETHODCALLTYPE * GetCount) (IXpsSignatureBlockCollection * This, UINT32 * count);
	HRESULT(STDMETHODCALLTYPE * GetAt) (IXpsSignatureBlockCollection * This, UINT32 index, IXpsSignatureBlock ** signatureBlock);
	HRESULT(STDMETHODCALLTYPE * RemoveAt) (IXpsSignatureBlockCollection * This, UINT32 index);
	END_INTERFACE
}  IXpsSignatureBlockCollectionVtbl;
interface IXpsSignatureBlockCollection
{
	CONST_VTBL struct IXpsSignatureBlockCollectionVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IXpsSignatureBlockCollection_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IXpsSignatureBlockCollection_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IXpsSignatureBlockCollection_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IXpsSignatureBlockCollection_GetCount(This,count) ( (This)->lpVtbl -> GetCount(This,count) )
#define IXpsSignatureBlockCollection_GetAt(This,index,signatureBlock) ( (This)->lpVtbl -> GetAt(This,index,signatureBlock) )
#define IXpsSignatureBlockCollection_RemoveAt(This,index) ( (This)->lpVtbl -> RemoveAt(This,index) )
#endif
#endif
#ifndef __IXpsSignatureBlock_INTERFACE_DEFINED__
#define __IXpsSignatureBlock_INTERFACE_DEFINED__
extern const IID IID_IXpsSignatureBlock;
typedef struct IXpsSignatureBlockVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IXpsSignatureBlock * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IXpsSignatureBlock * This);
	ULONG(STDMETHODCALLTYPE * Release) (IXpsSignatureBlock * This);
	HRESULT(STDMETHODCALLTYPE * GetRequests) (IXpsSignatureBlock * This, IXpsSignatureRequestCollection ** requests);
	HRESULT(STDMETHODCALLTYPE * GetPartName) (IXpsSignatureBlock * This, IOpcPartUri ** partName);
	HRESULT(STDMETHODCALLTYPE * GetDocumentIndex) (IXpsSignatureBlock * This, UINT32 * fixedDocumentIndex);
	HRESULT(STDMETHODCALLTYPE * GetDocumentName) (IXpsSignatureBlock * This, IOpcPartUri ** fixedDocumentName);
	HRESULT(STDMETHODCALLTYPE * CreateRequest) (IXpsSignatureBlock * This, LPCWSTR requestId, IXpsSignatureRequest ** signatureRequest);
	END_INTERFACE
}  IXpsSignatureBlockVtbl;
interface IXpsSignatureBlock
{
	CONST_VTBL struct IXpsSignatureBlockVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IXpsSignatureBlock_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IXpsSignatureBlock_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IXpsSignatureBlock_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IXpsSignatureBlock_GetRequests(This,requests) ( (This)->lpVtbl -> GetRequests(This,requests) )
#define IXpsSignatureBlock_GetPartName(This,partName) ( (This)->lpVtbl -> GetPartName(This,partName) )
#define IXpsSignatureBlock_GetDocumentIndex(This,fixedDocumentIndex) ( (This)->lpVtbl -> GetDocumentIndex(This,fixedDocumentIndex) )
#define IXpsSignatureBlock_GetDocumentName(This,fixedDocumentName) ( (This)->lpVtbl -> GetDocumentName(This,fixedDocumentName) )
#define IXpsSignatureBlock_CreateRequest(This,requestId,signatureRequest) ( (This)->lpVtbl -> CreateRequest(This,requestId,signatureRequest) )
#endif
#endif
#ifndef __IXpsSignatureRequestCollection_INTERFACE_DEFINED__
#define __IXpsSignatureRequestCollection_INTERFACE_DEFINED__
extern const IID IID_IXpsSignatureRequestCollection;
typedef struct IXpsSignatureRequestCollectionVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IXpsSignatureRequestCollection * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IXpsSignatureRequestCollection * This);
	ULONG(STDMETHODCALLTYPE * Release) (IXpsSignatureRequestCollection * This);
	HRESULT(STDMETHODCALLTYPE * GetCount) (IXpsSignatureRequestCollection * This, UINT32 * count);
	HRESULT(STDMETHODCALLTYPE * GetAt) (IXpsSignatureRequestCollection * This, UINT32 index, IXpsSignatureRequest ** signatureRequest);
	HRESULT(STDMETHODCALLTYPE * RemoveAt) (IXpsSignatureRequestCollection * This, UINT32 index);
	END_INTERFACE
}  IXpsSignatureRequestCollectionVtbl;
interface IXpsSignatureRequestCollection
{
	CONST_VTBL struct IXpsSignatureRequestCollectionVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IXpsSignatureRequestCollection_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IXpsSignatureRequestCollection_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IXpsSignatureRequestCollection_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IXpsSignatureRequestCollection_GetCount(This,count) ( (This)->lpVtbl -> GetCount(This,count) )
#define IXpsSignatureRequestCollection_GetAt(This,index,signatureRequest) ( (This)->lpVtbl -> GetAt(This,index,signatureRequest) )
#define IXpsSignatureRequestCollection_RemoveAt(This,index) ( (This)->lpVtbl -> RemoveAt(This,index) )
#endif
#endif
#ifndef __IXpsSignatureRequest_INTERFACE_DEFINED__
#define __IXpsSignatureRequest_INTERFACE_DEFINED__
extern const IID IID_IXpsSignatureRequest;
typedef struct IXpsSignatureRequestVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IXpsSignatureRequest * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IXpsSignatureRequest * This);
	ULONG(STDMETHODCALLTYPE * Release) (IXpsSignatureRequest * This);
	HRESULT(STDMETHODCALLTYPE * GetIntent) (IXpsSignatureRequest * This, LPWSTR * intent);
	HRESULT(STDMETHODCALLTYPE * SetIntent) (IXpsSignatureRequest * This, LPCWSTR intent);
	HRESULT(STDMETHODCALLTYPE * GetRequestedSigner) (IXpsSignatureRequest * This, LPWSTR * signerName);
	HRESULT(STDMETHODCALLTYPE * SetRequestedSigner) (IXpsSignatureRequest * This, LPCWSTR signerName);
	HRESULT(STDMETHODCALLTYPE * GetRequestSignByDate) (IXpsSignatureRequest * This, LPWSTR * dateString);
	HRESULT(STDMETHODCALLTYPE * SetRequestSignByDate) (IXpsSignatureRequest * This, LPCWSTR dateString);
	HRESULT(STDMETHODCALLTYPE * GetSigningLocale) (IXpsSignatureRequest * This, LPWSTR * place);
	HRESULT(STDMETHODCALLTYPE * SetSigningLocale) (IXpsSignatureRequest * This, LPCWSTR place);
	HRESULT(STDMETHODCALLTYPE * GetSpotLocation) (IXpsSignatureRequest * This, INT32 * pageIndex, IOpcPartUri ** pagePartName, float *x, float *y);
	HRESULT(STDMETHODCALLTYPE * SetSpotLocation) (IXpsSignatureRequest * This, INT32 pageIndex, float x, float y);
	HRESULT(STDMETHODCALLTYPE * GetRequestId) (IXpsSignatureRequest * This, LPWSTR * requestId);
	HRESULT(STDMETHODCALLTYPE * GetSignature) (IXpsSignatureRequest * This, IXpsSignature ** signature);
	END_INTERFACE
}  IXpsSignatureRequestVtbl;
interface IXpsSignatureRequest
{
	CONST_VTBL struct IXpsSignatureRequestVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IXpsSignatureRequest_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IXpsSignatureRequest_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IXpsSignatureRequest_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IXpsSignatureRequest_GetIntent(This,intent) ( (This)->lpVtbl -> GetIntent(This,intent) )
#define IXpsSignatureRequest_SetIntent(This,intent) ( (This)->lpVtbl -> SetIntent(This,intent) )
#define IXpsSignatureRequest_GetRequestedSigner(This,signerName) ( (This)->lpVtbl -> GetRequestedSigner(This,signerName) )
#define IXpsSignatureRequest_SetRequestedSigner(This,signerName) ( (This)->lpVtbl -> SetRequestedSigner(This,signerName) )
#define IXpsSignatureRequest_GetRequestSignByDate(This,dateString) ( (This)->lpVtbl -> GetRequestSignByDate(This,dateString) )
#define IXpsSignatureRequest_SetRequestSignByDate(This,dateString) ( (This)->lpVtbl -> SetRequestSignByDate(This,dateString) )
#define IXpsSignatureRequest_GetSigningLocale(This,place) ( (This)->lpVtbl -> GetSigningLocale(This,place) )
#define IXpsSignatureRequest_SetSigningLocale(This,place) ( (This)->lpVtbl -> SetSigningLocale(This,place) )
#define IXpsSignatureRequest_GetSpotLocation(This,pageIndex,pagePartName,x,y) ( (This)->lpVtbl -> GetSpotLocation(This,pageIndex,pagePartName,x,y) )
#define IXpsSignatureRequest_SetSpotLocation(This,pageIndex,x,y) ( (This)->lpVtbl -> SetSpotLocation(This,pageIndex,x,y) )
#define IXpsSignatureRequest_GetRequestId(This,requestId) ( (This)->lpVtbl -> GetRequestId(This,requestId) )
#define IXpsSignatureRequest_GetSignature(This,signature) ( (This)->lpVtbl -> GetSignature(This,signature) )
#endif
#endif
#ifndef __IXpsSignatureManager_INTERFACE_DEFINED__
#define __IXpsSignatureManager_INTERFACE_DEFINED__
extern const IID IID_IXpsSignatureManager;
typedef struct IXpsSignatureManagerVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IXpsSignatureManager * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IXpsSignatureManager * This);
	ULONG(STDMETHODCALLTYPE * Release) (IXpsSignatureManager * This);
	HRESULT(STDMETHODCALLTYPE * LoadPackageFile) (IXpsSignatureManager * This, LPCWSTR fileName);
	HRESULT(STDMETHODCALLTYPE * LoadPackageStream) (IXpsSignatureManager * This, IStream * stream);
	HRESULT(STDMETHODCALLTYPE * Sign) (IXpsSignatureManager * This, IXpsSigningOptions * signOptions, const CERT_CONTEXT * x509Certificate, IXpsSignature ** signature);
	HRESULT(STDMETHODCALLTYPE * GetSignatureOriginPartName) (IXpsSignatureManager * This, IOpcPartUri ** signatureOriginPartName);
	HRESULT(STDMETHODCALLTYPE * SetSignatureOriginPartName) (IXpsSignatureManager * This, IOpcPartUri * signatureOriginPartName);
	HRESULT(STDMETHODCALLTYPE * GetSignatures) (IXpsSignatureManager * This, IXpsSignatureCollection ** signatures);
	HRESULT(STDMETHODCALLTYPE * AddSignatureBlock) (IXpsSignatureManager * This, IOpcPartUri * partName, UINT32 fixedDocumentIndex, IXpsSignatureBlock ** signatureBlock);
	HRESULT(STDMETHODCALLTYPE * GetSignatureBlocks) (IXpsSignatureManager * This, IXpsSignatureBlockCollection ** signatureBlocks);
	HRESULT(STDMETHODCALLTYPE * CreateSigningOptions) (IXpsSignatureManager * This, IXpsSigningOptions ** signingOptions);
	HRESULT(STDMETHODCALLTYPE * SavePackageToFile) (IXpsSignatureManager * This, LPCWSTR fileName, LPSECURITY_ATTRIBUTES securityAttributes, DWORD flagsAndAttributes);
	HRESULT(STDMETHODCALLTYPE * SavePackageToStream) (IXpsSignatureManager * This, IStream * stream);
	END_INTERFACE
}  IXpsSignatureManagerVtbl;
interface IXpsSignatureManager
{
	CONST_VTBL struct IXpsSignatureManagerVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IXpsSignatureManager_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IXpsSignatureManager_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IXpsSignatureManager_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IXpsSignatureManager_LoadPackageFile(This,fileName) ( (This)->lpVtbl -> LoadPackageFile(This,fileName) )
#define IXpsSignatureManager_LoadPackageStream(This,stream) ( (This)->lpVtbl -> LoadPackageStream(This,stream) )
#define IXpsSignatureManager_Sign(This,signOptions,x509Certificate,signature) ( (This)->lpVtbl -> Sign(This,signOptions,x509Certificate,signature) )
#define IXpsSignatureManager_GetSignatureOriginPartName(This,signatureOriginPartName) ( (This)->lpVtbl -> GetSignatureOriginPartName(This,signatureOriginPartName) )
#define IXpsSignatureManager_SetSignatureOriginPartName(This,signatureOriginPartName) ( (This)->lpVtbl -> SetSignatureOriginPartName(This,signatureOriginPartName) )
#define IXpsSignatureManager_GetSignatures(This,signatures) ( (This)->lpVtbl -> GetSignatures(This,signatures) )
#define IXpsSignatureManager_AddSignatureBlock(This,partName,fixedDocumentIndex,signatureBlock) ( (This)->lpVtbl -> AddSignatureBlock(This,partName,fixedDocumentIndex,signatureBlock) )
#define IXpsSignatureManager_GetSignatureBlocks(This,signatureBlocks) ( (This)->lpVtbl -> GetSignatureBlocks(This,signatureBlocks) )
#define IXpsSignatureManager_CreateSigningOptions(This,signingOptions) ( (This)->lpVtbl -> CreateSigningOptions(This,signingOptions) )
#define IXpsSignatureManager_SavePackageToFile(This,fileName,securityAttributes,flagsAndAttributes) ( (This)->lpVtbl -> SavePackageToFile(This,fileName,securityAttributes,flagsAndAttributes) )
#define IXpsSignatureManager_SavePackageToStream(This,stream) ( (This)->lpVtbl -> SavePackageToStream(This,stream) )
#endif
#endif
extern const CLSID CLSID_XpsSignatureManager;
#endif
#define XPS_E_SIGREQUESTID_DUP               MAKE_HRESULT(1, FACILITY_XPS, 901)
#define XPS_E_PACKAGE_NOT_OPENED             MAKE_HRESULT(1, FACILITY_XPS, 902)
#define XPS_E_PACKAGE_ALREADY_OPENED         MAKE_HRESULT(1, FACILITY_XPS, 903)
#define XPS_E_SIGNATUREID_DUP                MAKE_HRESULT(1, FACILITY_XPS, 904)
#define XPS_E_MARKUP_COMPATIBILITY_ELEMENTS  MAKE_HRESULT(1, FACILITY_XPS, 905)
#define XPS_E_OBJECT_DETACHED                MAKE_HRESULT(1, FACILITY_XPS, 906)
#define XPS_E_INVALID_SIGNATUREBLOCK_MARKUP  MAKE_HRESULT(1, FACILITY_XPS, 907)
#endif
extern RPC_IF_HANDLE __MIDL_itf_xpsdigitalsignature_0001_0031_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_xpsdigitalsignature_0001_0031_v0_0_s_ifspec;
#endif

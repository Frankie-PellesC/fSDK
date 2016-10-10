/*+@@file@@----------------------------------------------------------------*//*!
 \file		BiDiSpl.h
 \par Description 
            Extension and update of headers for PellesC compiler suite.
 \par Project: 
            PellesC Headers extension
 \date		Created  on Sat Jul  2 20:48:58 2016
 \date		Modified on Sat Jul  2 20:48:58 2016
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
#ifndef __bidispl_h__
#define __bidispl_h__
#if __POCC__ >= 500
#pragma once
#endif
#ifndef __IBidiRequest_FWD_DEFINED__
#define __IBidiRequest_FWD_DEFINED__
typedef interface IBidiRequest IBidiRequest;
#endif
#ifndef __IBidiRequestContainer_FWD_DEFINED__
#define __IBidiRequestContainer_FWD_DEFINED__
typedef interface IBidiRequestContainer IBidiRequestContainer;
#endif
#ifndef __IBidiSpl_FWD_DEFINED__
#define __IBidiSpl_FWD_DEFINED__
typedef interface IBidiSpl IBidiSpl;
#endif
#ifndef __IBidiSpl2_FWD_DEFINED__
#define __IBidiSpl2_FWD_DEFINED__
typedef interface IBidiSpl2 IBidiSpl2;
#endif
#ifndef __BidiRequest_FWD_DEFINED__
#define __BidiRequest_FWD_DEFINED__
typedef struct BidiRequest BidiRequest;
#endif
#ifndef __BidiRequestContainer_FWD_DEFINED__
#define __BidiRequestContainer_FWD_DEFINED__
typedef struct BidiRequestContainer BidiRequestContainer;
#endif
#ifndef __BidiSpl_FWD_DEFINED__
#define __BidiSpl_FWD_DEFINED__
typedef struct BidiSpl BidiSpl;
#endif
#include "oaidl.h"
#include "ocidl.h"
#ifndef __IBidiRequest_INTERFACE_DEFINED__
#define __IBidiRequest_INTERFACE_DEFINED__
extern const IID IID_IBidiRequest;
typedef struct IBidiRequestVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IBidiRequest * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IBidiRequest * This);
	ULONG(STDMETHODCALLTYPE * Release) (IBidiRequest * This);
	HRESULT(STDMETHODCALLTYPE * SetSchema) (IBidiRequest * This, const LPCWSTR pszSchema);
	HRESULT(STDMETHODCALLTYPE * SetInputData) (IBidiRequest * This, const DWORD dwType, const BYTE * pData, const UINT uSize);
	HRESULT(STDMETHODCALLTYPE * GetResult) (IBidiRequest * This, HRESULT * phr);
	HRESULT(STDMETHODCALLTYPE * GetOutputData) (IBidiRequest * This, const DWORD dwIndex, LPWSTR * ppszSchema, DWORD * pdwType, BYTE ** ppData, ULONG * uSize);
	HRESULT(STDMETHODCALLTYPE * GetEnumCount) (IBidiRequest * This, DWORD * pdwTotal);
	END_INTERFACE
}  IBidiRequestVtbl;
interface IBidiRequest
{
	CONST_VTBL struct IBidiRequestVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IBidiRequest_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IBidiRequest_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define IBidiRequest_Release(This)( (This)->lpVtbl -> Release(This) )
#define IBidiRequest_SetSchema(This,pszSchema)( (This)->lpVtbl -> SetSchema(This,pszSchema) )
#define IBidiRequest_SetInputData(This,dwType,pData,uSize)( (This)->lpVtbl -> SetInputData(This,dwType,pData,uSize) )
#define IBidiRequest_GetResult(This,phr)( (This)->lpVtbl -> GetResult(This,phr) )
#define IBidiRequest_GetOutputData(This,dwIndex,ppszSchema,pdwType,ppData,uSize)( (This)->lpVtbl -> GetOutputData(This,dwIndex,ppszSchema,pdwType,ppData,uSize) )
#define IBidiRequest_GetEnumCount(This,pdwTotal)( (This)->lpVtbl -> GetEnumCount(This,pdwTotal) )
#endif
#endif
#ifndef __IBidiRequestContainer_INTERFACE_DEFINED__
#define __IBidiRequestContainer_INTERFACE_DEFINED__
extern const IID IID_IBidiRequestContainer;
typedef struct IBidiRequestContainerVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IBidiRequestContainer * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IBidiRequestContainer * This);
	ULONG(STDMETHODCALLTYPE * Release) (IBidiRequestContainer * This);
	HRESULT(STDMETHODCALLTYPE * AddRequest) (IBidiRequestContainer * This, IBidiRequest * pRequest);
	HRESULT(STDMETHODCALLTYPE * GetEnumObject) (IBidiRequestContainer * This, IEnumUnknown ** ppenum);
	HRESULT(STDMETHODCALLTYPE * GetRequestCount) (IBidiRequestContainer * This, ULONG * puCount);
	END_INTERFACE
}  IBidiRequestContainerVtbl;
interface IBidiRequestContainer
{
	CONST_VTBL struct IBidiRequestContainerVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IBidiRequestContainer_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IBidiRequestContainer_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define IBidiRequestContainer_Release(This)( (This)->lpVtbl -> Release(This) )
#define IBidiRequestContainer_AddRequest(This,pRequest)( (This)->lpVtbl -> AddRequest(This,pRequest) )
#define IBidiRequestContainer_GetEnumObject(This,ppenum)( (This)->lpVtbl -> GetEnumObject(This,ppenum) )
#define IBidiRequestContainer_GetRequestCount(This,puCount)( (This)->lpVtbl -> GetRequestCount(This,puCount) )
#endif
#endif
#ifndef __IBidiSpl_INTERFACE_DEFINED__
#define __IBidiSpl_INTERFACE_DEFINED__
extern const IID IID_IBidiSpl;
typedef struct IBidiSplVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IBidiSpl * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IBidiSpl * This);
	ULONG(STDMETHODCALLTYPE * Release) (IBidiSpl * This);
	HRESULT(STDMETHODCALLTYPE * BindDevice) (IBidiSpl * This, const LPCWSTR pszDeviceName, const DWORD dwAccess);
	HRESULT(STDMETHODCALLTYPE * UnbindDevice) (IBidiSpl * This);
	HRESULT(STDMETHODCALLTYPE * SendRecv) (IBidiSpl * This, const LPCWSTR pszAction, IBidiRequest * pRequest);
	HRESULT(STDMETHODCALLTYPE * MultiSendRecv) (IBidiSpl * This, const LPCWSTR pszAction, IBidiRequestContainer * pRequestContainer);
	END_INTERFACE
}  IBidiSplVtbl;
interface IBidiSpl
{
	CONST_VTBL struct IBidiSplVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IBidiSpl_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IBidiSpl_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define IBidiSpl_Release(This)( (This)->lpVtbl -> Release(This) )
#define IBidiSpl_BindDevice(This,pszDeviceName,dwAccess)( (This)->lpVtbl -> BindDevice(This,pszDeviceName,dwAccess) )
#define IBidiSpl_UnbindDevice(This)( (This)->lpVtbl -> UnbindDevice(This) )
#define IBidiSpl_SendRecv(This,pszAction,pRequest)( (This)->lpVtbl -> SendRecv(This,pszAction,pRequest) )
#define IBidiSpl_MultiSendRecv(This,pszAction,pRequestContainer)( (This)->lpVtbl -> MultiSendRecv(This,pszAction,pRequestContainer) )
#endif
#endif
#ifndef __IBidiSpl2_INTERFACE_DEFINED__
#define __IBidiSpl2_INTERFACE_DEFINED__
extern const IID IID_IBidiSpl2;
typedef struct IBidiSpl2Vtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IBidiSpl2 * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IBidiSpl2 * This);
	ULONG(STDMETHODCALLTYPE * Release) (IBidiSpl2 * This);
	HRESULT(STDMETHODCALLTYPE * BindDevice) (IBidiSpl2 * This, const LPCWSTR pszDeviceName, const DWORD dwAccess);
	HRESULT(STDMETHODCALLTYPE * UnbindDevice) (IBidiSpl2 * This);
	HRESULT(STDMETHODCALLTYPE * SendRecvXMLString) (IBidiSpl2 * This, BSTR bstrRequest, BSTR * pbstrResponse);
	HRESULT(STDMETHODCALLTYPE * SendRecvXMLStream) (IBidiSpl2 * This, IStream * pSRequest, IStream ** ppSResponse);
	END_INTERFACE
}  IBidiSpl2Vtbl;
interface IBidiSpl2
{
	CONST_VTBL struct IBidiSpl2Vtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IBidiSpl2_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IBidiSpl2_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define IBidiSpl2_Release(This)( (This)->lpVtbl -> Release(This) )
#define IBidiSpl2_BindDevice(This,pszDeviceName,dwAccess)( (This)->lpVtbl -> BindDevice(This,pszDeviceName,dwAccess) )
#define IBidiSpl2_UnbindDevice(This)( (This)->lpVtbl -> UnbindDevice(This) )
#define IBidiSpl2_SendRecvXMLString(This,bstrRequest,pbstrResponse)( (This)->lpVtbl -> SendRecvXMLString(This,bstrRequest,pbstrResponse) )
#define IBidiSpl2_SendRecvXMLStream(This,pSRequest,ppSResponse)( (This)->lpVtbl -> SendRecvXMLStream(This,pSRequest,ppSResponse) )
#endif
#endif
#ifndef __IBidiSplLib_LIBRARY_DEFINED__
#define __IBidiSplLib_LIBRARY_DEFINED__
extern const IID LIBID_IBidiSplLib;
extern const CLSID CLSID_BidiRequest;
extern const CLSID CLSID_BidiRequestContainer;
extern const CLSID CLSID_BidiSpl;
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

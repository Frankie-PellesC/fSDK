/*+@@file@@----------------------------------------------------------------*//*!
 \file		WMSContext.h
 \par Description 
            Extension and update of headers for PellesC compiler suite.
 \par Project: 
            PellesC Headers extension
 \date		Created  on Sat Jul  2 19:04:05 2016
 \date		Modified on Sat Jul  2 19:04:05 2016
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
#ifndef __wmscontext_h__
#define __wmscontext_h__
#if __POCC__ >= 500
#pragma once
#endif
#ifndef __IWMSContext_FWD_DEFINED__
#define __IWMSContext_FWD_DEFINED__
typedef interface IWMSContext IWMSContext;
#endif
#ifndef __IWMSCommandContext_FWD_DEFINED__
#define __IWMSCommandContext_FWD_DEFINED__
typedef interface IWMSCommandContext IWMSCommandContext;
#endif
#include "oaidl.h"
#ifndef _WMSContext
#define _WMSContext
typedef unsigned __int64 QWORD;
EXTERN_GUID(IID_IWMSContext, 0x4f1a1421, 0x5cd5, 0x11d2, 0x9f, 0x5, 0x0, 0x60, 0x97, 0xd2, 0xd7, 0xcf);
EXTERN_GUID(IID_IWMSCommandContext, 0x75554931, 0x5f0e, 0x11d2, 0x9f, 0xe, 0x0, 0x60, 0x97, 0xd2, 0xd7, 0xcf);
typedef enum WMS_CONTEXT_OPTIONS
{
	WMS_CONTEXT_SET_PROPERTY_NAME_BY_VALUE = 0x1,
	WMS_CONTEXT_SET_PROPERTY_STRING_BY_REFERENCE = 0x2,
	WMS_CONTEXT_GET_PROPERTY_STRING_BY_REFERENCE = 0x4
} WMS_CONTEXT_OPTIONS;
typedef enum WMS_CONTEXT_HINT_CONSTANTS
{
	WMS_CONTEXT_NO_NAME_HINT = 0xffffffff
} WMS_CONTEXT_HINT_CONSTANTS;
extern RPC_IF_HANDLE __MIDL_itf_wmscontext_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_wmscontext_0000_0000_v0_0_s_ifspec;
#ifndef __IWMSContext_INTERFACE_DEFINED__
#define __IWMSContext_INTERFACE_DEFINED__
typedef enum WMS_CONTEXT_TYPE
{
	WMS_UNKNOWN_CONTEXT_TYPE = 0,
	WMS_SERVER_CONTEXT_TYPE = (WMS_UNKNOWN_CONTEXT_TYPE + 1),
	WMS_USER_CONTEXT_TYPE = (WMS_SERVER_CONTEXT_TYPE + 1),
	WMS_PRESENTATION_CONTEXT_TYPE = (WMS_USER_CONTEXT_TYPE + 1),
	WMS_CONTENT_DESCRIPTION_CONTEXT_TYPE = (WMS_PRESENTATION_CONTEXT_TYPE + 1),
	WMS_COMMAND_REQUEST_CONTEXT_TYPE = (WMS_CONTENT_DESCRIPTION_CONTEXT_TYPE + 1),
	WMS_COMMAND_RESPONSE_CONTEXT_TYPE = (WMS_COMMAND_REQUEST_CONTEXT_TYPE + 1),
	WMS_TRANSPORT_SPEC_CONTEXT_TYPE = (WMS_COMMAND_RESPONSE_CONTEXT_TYPE + 1),
	WMS_PACKETIZER_CONTEXT_TYPE = (WMS_TRANSPORT_SPEC_CONTEXT_TYPE + 1),
	WMS_CACHE_CONTENT_INFORMATION_CONTEXT_TYPE = (WMS_PACKETIZER_CONTEXT_TYPE + 1),
	WMS_ARCHIVE_CONTEXT_TYPE = (WMS_CACHE_CONTENT_INFORMATION_CONTEXT_TYPE + 1),
	WMS_NUM_CONTEXT_TYPE = (WMS_ARCHIVE_CONTEXT_TYPE + 1)
} WMS_CONTEXT_TYPE;
extern const IID IID_IWMSContext;
typedef struct IWMSContextVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IWMSContext * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IWMSContext * This);
	ULONG(STDMETHODCALLTYPE * Release) (IWMSContext * This);
	HRESULT(STDMETHODCALLTYPE * SetLongValue) (IWMSContext * This, LPCWSTR pstrName, long lNameHint, long lValue, long lOptions);
	HRESULT(STDMETHODCALLTYPE * SetStringValue) (IWMSContext * This, LPCWSTR pstrName, long lNameHint, LPCWSTR pstrValue, long lOptions);
	HRESULT(STDMETHODCALLTYPE * SetIUnknownValue) (IWMSContext * This, LPCWSTR pstrName, long lNameHint, IUnknown * pValue, long lOptions);
	HRESULT(STDMETHODCALLTYPE * SetQwordValue) (IWMSContext * This, LPCWSTR pstrName, long lNameHint, CURRENCY qwValue, long lOptions);
	HRESULT(STDMETHODCALLTYPE * SetDateValue) (IWMSContext * This, LPCWSTR pstrName, long lNameHint, DATE dateValue, long lOptions);
	HRESULT(STDMETHODCALLTYPE * SetArrayValue) (IWMSContext * This, LPCWSTR pstrName, long lNameHint, SAFEARRAY * psaValue, long lOptions);
	HRESULT(STDMETHODCALLTYPE * GetLongValue) (IWMSContext * This, LPCWSTR pstrName, long lNameHint, long *plValue, long lOptions);
	HRESULT(STDMETHODCALLTYPE * GetStringValue) (IWMSContext * This, LPCWSTR pstrName, long lNameHint, LPWSTR * pstrValue, long lOptions);
	HRESULT(STDMETHODCALLTYPE * GetIUnknownValue) (IWMSContext * This, LPCWSTR pstrName, long lNameHint, IUnknown ** pValue, long lOptions);
	HRESULT(STDMETHODCALLTYPE * GetQwordValue) (IWMSContext * This, LPCWSTR pstrName, long lNameHint, CURRENCY * pqwValue, long lOptions);
	HRESULT(STDMETHODCALLTYPE * GetDateValue) (IWMSContext * This, LPCWSTR pstrName, long lNameHint, DATE * pdateValue, long lOptions);
	HRESULT(STDMETHODCALLTYPE * GetArrayValue) (IWMSContext * This, LPCWSTR pstrName, long lNameHint, SAFEARRAY * *ppsaValue, long lOptions);
	HRESULT(STDMETHODCALLTYPE * SetValue) (IWMSContext * This, LPCWSTR pstrName, long lNameHint, VARIANT Value, long lOptions);
	HRESULT(STDMETHODCALLTYPE * GetValue) (IWMSContext * This, LPCWSTR pstrName, long lNameHint, VARIANT * pValue, long lOptions);
	HRESULT(STDMETHODCALLTYPE * GetValueCount) (IWMSContext * This, long *pCount);
	HRESULT(STDMETHODCALLTYPE * GetIndexedValue) (IWMSContext * This, long lIndex, LPWSTR * pstrName, long *plNameHint, VARIANT * pValue, long *pdwResultOptions, long lOptions);
	HRESULT(STDMETHODCALLTYPE * RemoveValue) (IWMSContext * This, LPCWSTR pstrName, long lNameHint, long lOptions);
	HRESULT(STDMETHODCALLTYPE * RemoveAllValues) (IWMSContext * This);
	HRESULT(STDMETHODCALLTYPE * GetContextType) (IWMSContext * This, WMS_CONTEXT_TYPE * pType);
	HRESULT(STDMETHODCALLTYPE * GetAndQueryIUnknownValue) (IWMSContext * This, LPCWSTR pstrName, long lNameHint, REFIID riid, IUnknown ** pResult, long lOptions);
	HRESULT(STDMETHODCALLTYPE * CopyValues) (IWMSContext * This, IWMSContext * pDest, LPCWSTR * pstrName, long *lNameHint, long lNames);
	END_INTERFACE
}  IWMSContextVtbl;
interface IWMSContext
{
	CONST_VTBL struct IWMSContextVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IWMSContext_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IWMSContext_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define IWMSContext_Release(This)( (This)->lpVtbl -> Release(This) )
#define IWMSContext_SetLongValue(This,pstrName,lNameHint,lValue,lOptions)( (This)->lpVtbl -> SetLongValue(This,pstrName,lNameHint,lValue,lOptions) )
#define IWMSContext_SetStringValue(This,pstrName,lNameHint,pstrValue,lOptions)( (This)->lpVtbl -> SetStringValue(This,pstrName,lNameHint,pstrValue,lOptions) )
#define IWMSContext_SetIUnknownValue(This,pstrName,lNameHint,pValue,lOptions)( (This)->lpVtbl -> SetIUnknownValue(This,pstrName,lNameHint,pValue,lOptions) )
#define IWMSContext_SetQwordValue(This,pstrName,lNameHint,qwValue,lOptions)( (This)->lpVtbl -> SetQwordValue(This,pstrName,lNameHint,qwValue,lOptions) )
#define IWMSContext_SetDateValue(This,pstrName,lNameHint,dateValue,lOptions)( (This)->lpVtbl -> SetDateValue(This,pstrName,lNameHint,dateValue,lOptions) )
#define IWMSContext_SetArrayValue(This,pstrName,lNameHint,psaValue,lOptions)( (This)->lpVtbl -> SetArrayValue(This,pstrName,lNameHint,psaValue,lOptions) )
#define IWMSContext_GetLongValue(This,pstrName,lNameHint,plValue,lOptions)( (This)->lpVtbl -> GetLongValue(This,pstrName,lNameHint,plValue,lOptions) )
#define IWMSContext_GetStringValue(This,pstrName,lNameHint,pstrValue,lOptions)( (This)->lpVtbl -> GetStringValue(This,pstrName,lNameHint,pstrValue,lOptions) )
#define IWMSContext_GetIUnknownValue(This,pstrName,lNameHint,pValue,lOptions)( (This)->lpVtbl -> GetIUnknownValue(This,pstrName,lNameHint,pValue,lOptions) )
#define IWMSContext_GetQwordValue(This,pstrName,lNameHint,pqwValue,lOptions)( (This)->lpVtbl -> GetQwordValue(This,pstrName,lNameHint,pqwValue,lOptions) )
#define IWMSContext_GetDateValue(This,pstrName,lNameHint,pdateValue,lOptions)( (This)->lpVtbl -> GetDateValue(This,pstrName,lNameHint,pdateValue,lOptions) )
#define IWMSContext_GetArrayValue(This,pstrName,lNameHint,ppsaValue,lOptions)( (This)->lpVtbl -> GetArrayValue(This,pstrName,lNameHint,ppsaValue,lOptions) )
#define IWMSContext_SetValue(This,pstrName,lNameHint,Value,lOptions)( (This)->lpVtbl -> SetValue(This,pstrName,lNameHint,Value,lOptions) )
#define IWMSContext_GetValue(This,pstrName,lNameHint,pValue,lOptions)( (This)->lpVtbl -> GetValue(This,pstrName,lNameHint,pValue,lOptions) )
#define IWMSContext_GetValueCount(This,pCount)( (This)->lpVtbl -> GetValueCount(This,pCount) )
#define IWMSContext_GetIndexedValue(This,lIndex,pstrName,plNameHint,pValue,pdwResultOptions,lOptions)( (This)->lpVtbl -> GetIndexedValue(This,lIndex,pstrName,plNameHint,pValue,pdwResultOptions,lOptions) )
#define IWMSContext_RemoveValue(This,pstrName,lNameHint,lOptions)( (This)->lpVtbl -> RemoveValue(This,pstrName,lNameHint,lOptions) )
#define IWMSContext_RemoveAllValues(This)( (This)->lpVtbl -> RemoveAllValues(This) )
#define IWMSContext_GetContextType(This,pType)( (This)->lpVtbl -> GetContextType(This,pType) )
#define IWMSContext_GetAndQueryIUnknownValue(This,pstrName,lNameHint,riid,pResult,lOptions)( (This)->lpVtbl -> GetAndQueryIUnknownValue(This,pstrName,lNameHint,riid,pResult,lOptions) )
#define IWMSContext_CopyValues(This,pDest,pstrName,lNameHint,lNames)( (This)->lpVtbl -> CopyValues(This,pDest,pstrName,lNameHint,lNames) )
#endif
#endif
#ifndef __IWMSCommandContext_INTERFACE_DEFINED__
#define __IWMSCommandContext_INTERFACE_DEFINED__
extern const IID IID_IWMSCommandContext;
typedef struct IWMSCommandContextVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IWMSCommandContext * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IWMSCommandContext * This);
	ULONG(STDMETHODCALLTYPE * Release) (IWMSCommandContext * This);
	HRESULT(STDMETHODCALLTYPE * GetCommandRequest) (IWMSCommandContext * This, IWMSContext ** ppProps);
	HRESULT(STDMETHODCALLTYPE * GetCommandResponse) (IWMSCommandContext * This, IWMSContext ** ppProps);
	HRESULT(STDMETHODCALLTYPE * EraseCommandRequest) (IWMSCommandContext * This);
	HRESULT(STDMETHODCALLTYPE * EraseCommandResponse) (IWMSCommandContext * This);
	HRESULT(STDMETHODCALLTYPE * SetPlaylistGenerationId) (IWMSCommandContext * This, DWORD dwId);
	HRESULT(STDMETHODCALLTYPE * GetPlaylistGenerationId) (IWMSCommandContext * This, DWORD * pdwId);
	END_INTERFACE
}  IWMSCommandContextVtbl;
interface IWMSCommandContext
{
	CONST_VTBL struct IWMSCommandContextVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IWMSCommandContext_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IWMSCommandContext_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define IWMSCommandContext_Release(This)( (This)->lpVtbl -> Release(This) )
#define IWMSCommandContext_GetCommandRequest(This,ppProps)( (This)->lpVtbl -> GetCommandRequest(This,ppProps) )
#define IWMSCommandContext_GetCommandResponse(This,ppProps)( (This)->lpVtbl -> GetCommandResponse(This,ppProps) )
#define IWMSCommandContext_EraseCommandRequest(This)( (This)->lpVtbl -> EraseCommandRequest(This) )
#define IWMSCommandContext_EraseCommandResponse(This)( (This)->lpVtbl -> EraseCommandResponse(This) )
#define IWMSCommandContext_SetPlaylistGenerationId(This,dwId)( (This)->lpVtbl -> SetPlaylistGenerationId(This,dwId) )
#define IWMSCommandContext_GetPlaylistGenerationId(This,pdwId)( (This)->lpVtbl -> GetPlaylistGenerationId(This,pdwId) )
#endif
#endif
#endif
extern RPC_IF_HANDLE __MIDL_itf_wmscontext_0000_0002_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_wmscontext_0000_0002_v0_0_s_ifspec;
unsigned long __RPC_USER LPSAFEARRAY_UserSize(unsigned long *, unsigned long, LPSAFEARRAY *);
unsigned char *__RPC_USER LPSAFEARRAY_UserMarshal(unsigned long *, unsigned char *, LPSAFEARRAY *);
unsigned char *__RPC_USER LPSAFEARRAY_UserUnmarshal(unsigned long *, unsigned char *, LPSAFEARRAY *);
void __RPC_USER LPSAFEARRAY_UserFree(unsigned long *, LPSAFEARRAY *);
unsigned long __RPC_USER VARIANT_UserSize(unsigned long *, unsigned long, VARIANT *);
unsigned char *__RPC_USER VARIANT_UserMarshal(unsigned long *, unsigned char *, VARIANT *);
unsigned char *__RPC_USER VARIANT_UserUnmarshal(unsigned long *, unsigned char *, VARIANT *);
void __RPC_USER VARIANT_UserFree(unsigned long *, VARIANT *);
unsigned long __RPC_USER LPSAFEARRAY_UserSize64(unsigned long *, unsigned long, LPSAFEARRAY *);
unsigned char *__RPC_USER LPSAFEARRAY_UserMarshal64(unsigned long *, unsigned char *, LPSAFEARRAY *);
unsigned char *__RPC_USER LPSAFEARRAY_UserUnmarshal64(unsigned long *, unsigned char *, LPSAFEARRAY *);
void __RPC_USER LPSAFEARRAY_UserFree64(unsigned long *, LPSAFEARRAY *);
unsigned long __RPC_USER VARIANT_UserSize64(unsigned long *, unsigned long, VARIANT *);
unsigned char *__RPC_USER VARIANT_UserMarshal64(unsigned long *, unsigned char *, VARIANT *);
unsigned char *__RPC_USER VARIANT_UserUnmarshal64(unsigned long *, unsigned char *, VARIANT *);
void __RPC_USER VARIANT_UserFree64(unsigned long *, VARIANT *);
#endif

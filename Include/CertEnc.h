/*+@@file@@----------------------------------------------------------------*//*!
 \file		CertEnc.h
 \par Description 
            Extension and update of headers for PellesC compiler suite.
 \par Project: 
            PellesC Headers extension
 \date		Created  on Sun Jul  3 00:36:45 2016
 \date		Modified on Sun Jul  3 00:36:45 2016
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
#ifndef __certenc_h__
#define __certenc_h__
#if __POCC__ >= 500
#pragma once
#endif
#ifndef __ICertEncodeStringArray_FWD_DEFINED__
#define __ICertEncodeStringArray_FWD_DEFINED__
typedef interface ICertEncodeStringArray ICertEncodeStringArray;
#endif
#ifndef __ICertEncodeLongArray_FWD_DEFINED__
#define __ICertEncodeLongArray_FWD_DEFINED__
typedef interface ICertEncodeLongArray ICertEncodeLongArray;
#endif
#ifndef __ICertEncodeDateArray_FWD_DEFINED__
#define __ICertEncodeDateArray_FWD_DEFINED__
typedef interface ICertEncodeDateArray ICertEncodeDateArray;
#endif
#ifndef __ICertEncodeCRLDistInfo_FWD_DEFINED__
#define __ICertEncodeCRLDistInfo_FWD_DEFINED__
typedef interface ICertEncodeCRLDistInfo ICertEncodeCRLDistInfo;
#endif
#ifndef __ICertEncodeAltName_FWD_DEFINED__
#define __ICertEncodeAltName_FWD_DEFINED__
typedef interface ICertEncodeAltName ICertEncodeAltName;
#endif
#ifndef __ICertEncodeBitString_FWD_DEFINED__
#define __ICertEncodeBitString_FWD_DEFINED__
typedef interface ICertEncodeBitString ICertEncodeBitString;
#endif
#ifndef __CCertEncodeStringArray_FWD_DEFINED__
#define __CCertEncodeStringArray_FWD_DEFINED__
typedef struct CCertEncodeStringArray CCertEncodeStringArray;
#endif
#ifndef __CCertEncodeLongArray_FWD_DEFINED__
#define __CCertEncodeLongArray_FWD_DEFINED__
typedef struct CCertEncodeLongArray CCertEncodeLongArray;
#endif
#ifndef __CCertEncodeDateArray_FWD_DEFINED__
#define __CCertEncodeDateArray_FWD_DEFINED__
typedef struct CCertEncodeDateArray CCertEncodeDateArray;
#endif
#ifndef __CCertEncodeCRLDistInfo_FWD_DEFINED__
#define __CCertEncodeCRLDistInfo_FWD_DEFINED__
typedef struct CCertEncodeCRLDistInfo CCertEncodeCRLDistInfo;
#endif
#ifndef __CCertEncodeAltName_FWD_DEFINED__
#define __CCertEncodeAltName_FWD_DEFINED__
typedef struct CCertEncodeAltName CCertEncodeAltName;
#endif
#ifndef __CCertEncodeBitString_FWD_DEFINED__
#define __CCertEncodeBitString_FWD_DEFINED__
typedef struct CCertEncodeBitString CCertEncodeBitString;
#endif
#include "wtypes.h"
#include "oaidl.h"
#ifndef __ICertEncodeStringArray_INTERFACE_DEFINED__
#define __ICertEncodeStringArray_INTERFACE_DEFINED__
extern const IID IID_ICertEncodeStringArray;
typedef struct ICertEncodeStringArrayVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (ICertEncodeStringArray * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (ICertEncodeStringArray * This);
	ULONG(STDMETHODCALLTYPE * Release) (ICertEncodeStringArray * This);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfoCount) (ICertEncodeStringArray * This, UINT * pctinfo);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfo) (ICertEncodeStringArray * This, UINT iTInfo, LCID lcid, ITypeInfo ** ppTInfo);
	HRESULT(STDMETHODCALLTYPE * GetIDsOfNames) (ICertEncodeStringArray * This, REFIID riid, LPOLESTR * rgszNames, UINT cNames, LCID lcid, DISPID * rgDispId);
	HRESULT(STDMETHODCALLTYPE * Invoke) (ICertEncodeStringArray * This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS * pDispParams, VARIANT * pVarResult, EXCEPINFO * pExcepInfo, UINT * puArgErr);
	HRESULT(STDMETHODCALLTYPE * Decode) (ICertEncodeStringArray * This, const BSTR strBinary);
	HRESULT(STDMETHODCALLTYPE * GetStringType) (ICertEncodeStringArray * This, LONG * pStringType);
	HRESULT(STDMETHODCALLTYPE * GetCount) (ICertEncodeStringArray * This, LONG * pCount);
	HRESULT(STDMETHODCALLTYPE * GetValue) (ICertEncodeStringArray * This, LONG Index, BSTR * pstr);
	HRESULT(STDMETHODCALLTYPE * Reset) (ICertEncodeStringArray * This, LONG Count, LONG StringType);
	HRESULT(STDMETHODCALLTYPE * SetValue) (ICertEncodeStringArray * This, LONG Index, const BSTR str);
	HRESULT(STDMETHODCALLTYPE * Encode) (ICertEncodeStringArray * This, BSTR * pstrBinary);
	END_INTERFACE
}  ICertEncodeStringArrayVtbl;
interface ICertEncodeStringArray
{
	CONST_VTBL struct ICertEncodeStringArrayVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define ICertEncodeStringArray_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define ICertEncodeStringArray_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define ICertEncodeStringArray_Release(This)( (This)->lpVtbl -> Release(This) )
#define ICertEncodeStringArray_GetTypeInfoCount(This,pctinfo)( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define ICertEncodeStringArray_GetTypeInfo(This,iTInfo,lcid,ppTInfo)( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define ICertEncodeStringArray_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define ICertEncodeStringArray_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define ICertEncodeStringArray_Decode(This,strBinary)( (This)->lpVtbl -> Decode(This,strBinary) )
#define ICertEncodeStringArray_GetStringType(This,pStringType)( (This)->lpVtbl -> GetStringType(This,pStringType) )
#define ICertEncodeStringArray_GetCount(This,pCount)( (This)->lpVtbl -> GetCount(This,pCount) )
#define ICertEncodeStringArray_GetValue(This,Index,pstr)( (This)->lpVtbl -> GetValue(This,Index,pstr) )
#define ICertEncodeStringArray_Reset(This,Count,StringType)( (This)->lpVtbl -> Reset(This,Count,StringType) )
#define ICertEncodeStringArray_SetValue(This,Index,str)( (This)->lpVtbl -> SetValue(This,Index,str) )
#define ICertEncodeStringArray_Encode(This,pstrBinary)( (This)->lpVtbl -> Encode(This,pstrBinary) )
#endif
#endif
#ifndef __ICertEncodeLongArray_INTERFACE_DEFINED__
#define __ICertEncodeLongArray_INTERFACE_DEFINED__
extern const IID IID_ICertEncodeLongArray;
typedef struct ICertEncodeLongArrayVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (ICertEncodeLongArray * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (ICertEncodeLongArray * This);
	ULONG(STDMETHODCALLTYPE * Release) (ICertEncodeLongArray * This);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfoCount) (ICertEncodeLongArray * This, UINT * pctinfo);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfo) (ICertEncodeLongArray * This, UINT iTInfo, LCID lcid, ITypeInfo ** ppTInfo);
	HRESULT(STDMETHODCALLTYPE * GetIDsOfNames) (ICertEncodeLongArray * This, REFIID riid, LPOLESTR * rgszNames, UINT cNames, LCID lcid, DISPID * rgDispId);
	HRESULT(STDMETHODCALLTYPE * Invoke) (ICertEncodeLongArray * This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS * pDispParams, VARIANT * pVarResult, EXCEPINFO * pExcepInfo, UINT * puArgErr);
	HRESULT(STDMETHODCALLTYPE * Decode) (ICertEncodeLongArray * This, const BSTR strBinary);
	HRESULT(STDMETHODCALLTYPE * GetCount) (ICertEncodeLongArray * This, LONG * pCount);
	HRESULT(STDMETHODCALLTYPE * GetValue) (ICertEncodeLongArray * This, LONG Index, LONG * pValue);
	HRESULT(STDMETHODCALLTYPE * Reset) (ICertEncodeLongArray * This, LONG Count);
	HRESULT(STDMETHODCALLTYPE * SetValue) (ICertEncodeLongArray * This, LONG Index, LONG Value);
	HRESULT(STDMETHODCALLTYPE * Encode) (ICertEncodeLongArray * This, BSTR * pstrBinary);
	END_INTERFACE
}  ICertEncodeLongArrayVtbl;
interface ICertEncodeLongArray
{
	CONST_VTBL struct ICertEncodeLongArrayVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define ICertEncodeLongArray_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define ICertEncodeLongArray_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define ICertEncodeLongArray_Release(This)( (This)->lpVtbl -> Release(This) )
#define ICertEncodeLongArray_GetTypeInfoCount(This,pctinfo)( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define ICertEncodeLongArray_GetTypeInfo(This,iTInfo,lcid,ppTInfo)( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define ICertEncodeLongArray_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define ICertEncodeLongArray_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define ICertEncodeLongArray_Decode(This,strBinary)( (This)->lpVtbl -> Decode(This,strBinary) )
#define ICertEncodeLongArray_GetCount(This,pCount)( (This)->lpVtbl -> GetCount(This,pCount) )
#define ICertEncodeLongArray_GetValue(This,Index,pValue)( (This)->lpVtbl -> GetValue(This,Index,pValue) )
#define ICertEncodeLongArray_Reset(This,Count)( (This)->lpVtbl -> Reset(This,Count) )
#define ICertEncodeLongArray_SetValue(This,Index,Value)( (This)->lpVtbl -> SetValue(This,Index,Value) )
#define ICertEncodeLongArray_Encode(This,pstrBinary)( (This)->lpVtbl -> Encode(This,pstrBinary) )
#endif
#endif
#ifndef __ICertEncodeDateArray_INTERFACE_DEFINED__
#define __ICertEncodeDateArray_INTERFACE_DEFINED__
extern const IID IID_ICertEncodeDateArray;
typedef struct ICertEncodeDateArrayVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (ICertEncodeDateArray * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (ICertEncodeDateArray * This);
	ULONG(STDMETHODCALLTYPE * Release) (ICertEncodeDateArray * This);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfoCount) (ICertEncodeDateArray * This, UINT * pctinfo);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfo) (ICertEncodeDateArray * This, UINT iTInfo, LCID lcid, ITypeInfo ** ppTInfo);
	HRESULT(STDMETHODCALLTYPE * GetIDsOfNames) (ICertEncodeDateArray * This, REFIID riid, LPOLESTR * rgszNames, UINT cNames, LCID lcid, DISPID * rgDispId);
	HRESULT(STDMETHODCALLTYPE * Invoke) (ICertEncodeDateArray * This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS * pDispParams, VARIANT * pVarResult, EXCEPINFO * pExcepInfo, UINT * puArgErr);
	HRESULT(STDMETHODCALLTYPE * Decode) (ICertEncodeDateArray * This, const BSTR strBinary);
	HRESULT(STDMETHODCALLTYPE * GetCount) (ICertEncodeDateArray * This, LONG * pCount);
	HRESULT(STDMETHODCALLTYPE * GetValue) (ICertEncodeDateArray * This, LONG Index, DATE * pValue);
	HRESULT(STDMETHODCALLTYPE * Reset) (ICertEncodeDateArray * This, LONG Count);
	HRESULT(STDMETHODCALLTYPE * SetValue) (ICertEncodeDateArray * This, LONG Index, DATE Value);
	HRESULT(STDMETHODCALLTYPE * Encode) (ICertEncodeDateArray * This, BSTR * pstrBinary);
	END_INTERFACE
}  ICertEncodeDateArrayVtbl;
interface ICertEncodeDateArray
{
	CONST_VTBL struct ICertEncodeDateArrayVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define ICertEncodeDateArray_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define ICertEncodeDateArray_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define ICertEncodeDateArray_Release(This)( (This)->lpVtbl -> Release(This) )
#define ICertEncodeDateArray_GetTypeInfoCount(This,pctinfo)( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define ICertEncodeDateArray_GetTypeInfo(This,iTInfo,lcid,ppTInfo)( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define ICertEncodeDateArray_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define ICertEncodeDateArray_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define ICertEncodeDateArray_Decode(This,strBinary)( (This)->lpVtbl -> Decode(This,strBinary) )
#define ICertEncodeDateArray_GetCount(This,pCount)( (This)->lpVtbl -> GetCount(This,pCount) )
#define ICertEncodeDateArray_GetValue(This,Index,pValue)( (This)->lpVtbl -> GetValue(This,Index,pValue) )
#define ICertEncodeDateArray_Reset(This,Count)( (This)->lpVtbl -> Reset(This,Count) )
#define ICertEncodeDateArray_SetValue(This,Index,Value)( (This)->lpVtbl -> SetValue(This,Index,Value) )
#define ICertEncodeDateArray_Encode(This,pstrBinary)( (This)->lpVtbl -> Encode(This,pstrBinary) )
#endif
#endif
#ifndef __ICertEncodeCRLDistInfo_INTERFACE_DEFINED__
#define __ICertEncodeCRLDistInfo_INTERFACE_DEFINED__
extern const IID IID_ICertEncodeCRLDistInfo;
typedef struct ICertEncodeCRLDistInfoVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (ICertEncodeCRLDistInfo * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (ICertEncodeCRLDistInfo * This);
	ULONG(STDMETHODCALLTYPE * Release) (ICertEncodeCRLDistInfo * This);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfoCount) (ICertEncodeCRLDistInfo * This, UINT * pctinfo);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfo) (ICertEncodeCRLDistInfo * This, UINT iTInfo, LCID lcid, ITypeInfo ** ppTInfo);
	HRESULT(STDMETHODCALLTYPE * GetIDsOfNames) (ICertEncodeCRLDistInfo * This, REFIID riid, LPOLESTR * rgszNames, UINT cNames, LCID lcid, DISPID * rgDispId);
	HRESULT(STDMETHODCALLTYPE * Invoke) (ICertEncodeCRLDistInfo * This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS * pDispParams, VARIANT * pVarResult, EXCEPINFO * pExcepInfo, UINT * puArgErr);
	HRESULT(STDMETHODCALLTYPE * Decode) (ICertEncodeCRLDistInfo * This, const BSTR strBinary);
	HRESULT(STDMETHODCALLTYPE * GetDistPointCount) (ICertEncodeCRLDistInfo * This, LONG * pDistPointCount);
	HRESULT(STDMETHODCALLTYPE * GetNameCount) (ICertEncodeCRLDistInfo * This, LONG DistPointIndex, LONG * pNameCount);
	HRESULT(STDMETHODCALLTYPE * GetNameChoice) (ICertEncodeCRLDistInfo * This, LONG DistPointIndex, LONG NameIndex, LONG * pNameChoice);
	HRESULT(STDMETHODCALLTYPE * GetName) (ICertEncodeCRLDistInfo * This, LONG DistPointIndex, LONG NameIndex, BSTR * pstrName);
	HRESULT(STDMETHODCALLTYPE * Reset) (ICertEncodeCRLDistInfo * This, LONG DistPointCount);
	HRESULT(STDMETHODCALLTYPE * SetNameCount) (ICertEncodeCRLDistInfo * This, LONG DistPointIndex, LONG NameCount);
	HRESULT(STDMETHODCALLTYPE * SetNameEntry) (ICertEncodeCRLDistInfo * This, LONG DistPointIndex, LONG NameIndex, LONG NameChoice, const BSTR strName);
	HRESULT(STDMETHODCALLTYPE * Encode) (ICertEncodeCRLDistInfo * This, BSTR * pstrBinary);
	END_INTERFACE
}  ICertEncodeCRLDistInfoVtbl;
interface ICertEncodeCRLDistInfo
{
	CONST_VTBL struct ICertEncodeCRLDistInfoVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define ICertEncodeCRLDistInfo_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define ICertEncodeCRLDistInfo_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define ICertEncodeCRLDistInfo_Release(This)( (This)->lpVtbl -> Release(This) )
#define ICertEncodeCRLDistInfo_GetTypeInfoCount(This,pctinfo)( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define ICertEncodeCRLDistInfo_GetTypeInfo(This,iTInfo,lcid,ppTInfo)( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define ICertEncodeCRLDistInfo_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define ICertEncodeCRLDistInfo_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define ICertEncodeCRLDistInfo_Decode(This,strBinary)( (This)->lpVtbl -> Decode(This,strBinary) )
#define ICertEncodeCRLDistInfo_GetDistPointCount(This,pDistPointCount)( (This)->lpVtbl -> GetDistPointCount(This,pDistPointCount) )
#define ICertEncodeCRLDistInfo_GetNameCount(This,DistPointIndex,pNameCount)( (This)->lpVtbl -> GetNameCount(This,DistPointIndex,pNameCount) )
#define ICertEncodeCRLDistInfo_GetNameChoice(This,DistPointIndex,NameIndex,pNameChoice)( (This)->lpVtbl -> GetNameChoice(This,DistPointIndex,NameIndex,pNameChoice) )
#define ICertEncodeCRLDistInfo_GetName(This,DistPointIndex,NameIndex,pstrName)( (This)->lpVtbl -> GetName(This,DistPointIndex,NameIndex,pstrName) )
#define ICertEncodeCRLDistInfo_Reset(This,DistPointCount)( (This)->lpVtbl -> Reset(This,DistPointCount) )
#define ICertEncodeCRLDistInfo_SetNameCount(This,DistPointIndex,NameCount)( (This)->lpVtbl -> SetNameCount(This,DistPointIndex,NameCount) )
#define ICertEncodeCRLDistInfo_SetNameEntry(This,DistPointIndex,NameIndex,NameChoice,strName)( (This)->lpVtbl -> SetNameEntry(This,DistPointIndex,NameIndex,NameChoice,strName) )
#define ICertEncodeCRLDistInfo_Encode(This,pstrBinary)( (This)->lpVtbl -> Encode(This,pstrBinary) )
#endif
#endif
#define	EAN_NAMEOBJECTID	( 0x80000000 )
extern RPC_IF_HANDLE __MIDL_itf_certenc_0000_0004_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_certenc_0000_0004_v0_0_s_ifspec;
#ifndef __ICertEncodeAltName_INTERFACE_DEFINED__
#define __ICertEncodeAltName_INTERFACE_DEFINED__
extern const IID IID_ICertEncodeAltName;
typedef struct ICertEncodeAltNameVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (ICertEncodeAltName * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (ICertEncodeAltName * This);
	ULONG(STDMETHODCALLTYPE * Release) (ICertEncodeAltName * This);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfoCount) (ICertEncodeAltName * This, UINT * pctinfo);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfo) (ICertEncodeAltName * This, UINT iTInfo, LCID lcid, ITypeInfo ** ppTInfo);
	HRESULT(STDMETHODCALLTYPE * GetIDsOfNames) (ICertEncodeAltName * This, REFIID riid, LPOLESTR * rgszNames, UINT cNames, LCID lcid, DISPID * rgDispId);
	HRESULT(STDMETHODCALLTYPE * Invoke) (ICertEncodeAltName * This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS * pDispParams, VARIANT * pVarResult, EXCEPINFO * pExcepInfo, UINT * puArgErr);
	HRESULT(STDMETHODCALLTYPE * Decode) (ICertEncodeAltName * This, const BSTR strBinary);
	HRESULT(STDMETHODCALLTYPE * GetNameCount) (ICertEncodeAltName * This, LONG * pNameCount);
	HRESULT(STDMETHODCALLTYPE * GetNameChoice) (ICertEncodeAltName * This, LONG NameIndex, LONG * pNameChoice);
	HRESULT(STDMETHODCALLTYPE * GetName) (ICertEncodeAltName * This, LONG NameIndex, BSTR * pstrName);
	HRESULT(STDMETHODCALLTYPE * Reset) (ICertEncodeAltName * This, LONG NameCount);
	HRESULT(STDMETHODCALLTYPE * SetNameEntry) (ICertEncodeAltName * This, LONG NameIndex, LONG NameChoice, const BSTR strName);
	HRESULT(STDMETHODCALLTYPE * Encode) (ICertEncodeAltName * This, BSTR * pstrBinary);
	END_INTERFACE
}  ICertEncodeAltNameVtbl;
interface ICertEncodeAltName
{
	CONST_VTBL struct ICertEncodeAltNameVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define ICertEncodeAltName_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define ICertEncodeAltName_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define ICertEncodeAltName_Release(This)( (This)->lpVtbl -> Release(This) )
#define ICertEncodeAltName_GetTypeInfoCount(This,pctinfo)( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define ICertEncodeAltName_GetTypeInfo(This,iTInfo,lcid,ppTInfo)( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define ICertEncodeAltName_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define ICertEncodeAltName_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define ICertEncodeAltName_Decode(This,strBinary)( (This)->lpVtbl -> Decode(This,strBinary) )
#define ICertEncodeAltName_GetNameCount(This,pNameCount)( (This)->lpVtbl -> GetNameCount(This,pNameCount) )
#define ICertEncodeAltName_GetNameChoice(This,NameIndex,pNameChoice)( (This)->lpVtbl -> GetNameChoice(This,NameIndex,pNameChoice) )
#define ICertEncodeAltName_GetName(This,NameIndex,pstrName)( (This)->lpVtbl -> GetName(This,NameIndex,pstrName) )
#define ICertEncodeAltName_Reset(This,NameCount)( (This)->lpVtbl -> Reset(This,NameCount) )
#define ICertEncodeAltName_SetNameEntry(This,NameIndex,NameChoice,strName)( (This)->lpVtbl -> SetNameEntry(This,NameIndex,NameChoice,strName) )
#define ICertEncodeAltName_Encode(This,pstrBinary)( (This)->lpVtbl -> Encode(This,pstrBinary) )
#endif
#endif
#ifndef __ICertEncodeBitString_INTERFACE_DEFINED__
#define __ICertEncodeBitString_INTERFACE_DEFINED__
extern const IID IID_ICertEncodeBitString;
typedef struct ICertEncodeBitStringVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (ICertEncodeBitString * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (ICertEncodeBitString * This);
	ULONG(STDMETHODCALLTYPE * Release) (ICertEncodeBitString * This);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfoCount) (ICertEncodeBitString * This, UINT * pctinfo);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfo) (ICertEncodeBitString * This, UINT iTInfo, LCID lcid, ITypeInfo ** ppTInfo);
	HRESULT(STDMETHODCALLTYPE * GetIDsOfNames) (ICertEncodeBitString * This, REFIID riid, LPOLESTR * rgszNames, UINT cNames, LCID lcid, DISPID * rgDispId);
	HRESULT(STDMETHODCALLTYPE * Invoke) (ICertEncodeBitString * This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS * pDispParams, VARIANT * pVarResult, EXCEPINFO * pExcepInfo, UINT * puArgErr);
	HRESULT(STDMETHODCALLTYPE * Decode) (ICertEncodeBitString * This, const BSTR strBinary);
	HRESULT(STDMETHODCALLTYPE * GetBitCount) (ICertEncodeBitString * This, LONG * pBitCount);
	HRESULT(STDMETHODCALLTYPE * GetBitString) (ICertEncodeBitString * This, BSTR * pstrBitString);
	HRESULT(STDMETHODCALLTYPE * Encode) (ICertEncodeBitString * This, LONG BitCount, BSTR strBitString, BSTR * pstrBinary);
	END_INTERFACE
}  ICertEncodeBitStringVtbl;
interface ICertEncodeBitString
{
	CONST_VTBL struct ICertEncodeBitStringVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define ICertEncodeBitString_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define ICertEncodeBitString_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define ICertEncodeBitString_Release(This)( (This)->lpVtbl -> Release(This) )
#define ICertEncodeBitString_GetTypeInfoCount(This,pctinfo)( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define ICertEncodeBitString_GetTypeInfo(This,iTInfo,lcid,ppTInfo)( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define ICertEncodeBitString_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define ICertEncodeBitString_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define ICertEncodeBitString_Decode(This,strBinary)( (This)->lpVtbl -> Decode(This,strBinary) )
#define ICertEncodeBitString_GetBitCount(This,pBitCount)( (This)->lpVtbl -> GetBitCount(This,pBitCount) )
#define ICertEncodeBitString_GetBitString(This,pstrBitString)( (This)->lpVtbl -> GetBitString(This,pstrBitString) )
#define ICertEncodeBitString_Encode(This,BitCount,strBitString,pstrBinary)( (This)->lpVtbl -> Encode(This,BitCount,strBitString,pstrBinary) )
#endif
#endif
#ifndef __CERTENCODELib_LIBRARY_DEFINED__
#define __CERTENCODELib_LIBRARY_DEFINED__
extern const IID LIBID_CERTENCODELib;
extern const CLSID CLSID_CCertEncodeStringArray;
extern const CLSID CLSID_CCertEncodeLongArray;
extern const CLSID CLSID_CCertEncodeDateArray;
extern const CLSID CLSID_CCertEncodeCRLDistInfo;
extern const CLSID CLSID_CCertEncodeAltName;
extern const CLSID CLSID_CCertEncodeBitString;
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

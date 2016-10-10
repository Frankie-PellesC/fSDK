/*+@@file@@----------------------------------------------------------------*//*!
 \file		certview.h
 \par Description 
            Extension and update of headers for PellesC compiler suite.
 \par Project: 
            PellesC Headers extension
 \date		Created  on Thu Jun 30 17:21:11 2016
 \date		Modified on Thu Jun 30 17:21:11 2016
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
#ifndef __certview_h__
#define __certview_h__
#if __POCC__ >= 500
#pragma once
#endif
#ifndef __IEnumCERTVIEWCOLUMN_FWD_DEFINED__
#define __IEnumCERTVIEWCOLUMN_FWD_DEFINED__
typedef interface IEnumCERTVIEWCOLUMN IEnumCERTVIEWCOLUMN;
#endif
#ifndef __IEnumCERTVIEWATTRIBUTE_FWD_DEFINED__
#define __IEnumCERTVIEWATTRIBUTE_FWD_DEFINED__
typedef interface IEnumCERTVIEWATTRIBUTE IEnumCERTVIEWATTRIBUTE;
#endif
#ifndef __IEnumCERTVIEWEXTENSION_FWD_DEFINED__
#define __IEnumCERTVIEWEXTENSION_FWD_DEFINED__
typedef interface IEnumCERTVIEWEXTENSION IEnumCERTVIEWEXTENSION;
#endif
#ifndef __IEnumCERTVIEWROW_FWD_DEFINED__
#define __IEnumCERTVIEWROW_FWD_DEFINED__
typedef interface IEnumCERTVIEWROW IEnumCERTVIEWROW;
#endif
#ifndef __ICertView_FWD_DEFINED__
#define __ICertView_FWD_DEFINED__
typedef interface ICertView ICertView;
#endif
#ifndef __ICertView2_FWD_DEFINED__
#define __ICertView2_FWD_DEFINED__
typedef interface ICertView2 ICertView2;
#endif
#include "wtypes.h"
#include "oaidl.h"
#define	CV_OUT_BASE64HEADER	( 0 )
#define	CV_OUT_BASE64	( 0x1 )
#define	CV_OUT_BINARY	( 0x2 )
#define	CV_OUT_BASE64REQUESTHEADER	( 0x3 )
#define	CV_OUT_HEX	( 0x4 )
#define	CV_OUT_HEXASCII	( 0x5 )
#define	CV_OUT_BASE64X509CRLHEADER	( 0x9 )
#define	CV_OUT_HEXADDR	( 0xa )
#define	CV_OUT_HEXASCIIADDR	( 0xb )
#define	CV_OUT_HEXRAW	( 0xc )
#define	CV_OUT_ENCODEMASK	( 0xff )
#define	CV_OUT_NOCRLF	( 0x40000000 )
#define	CV_OUT_NOCR	( 0x80000000 )
#define	CVR_SEEK_NONE	( 0 )
#define	CVR_SEEK_EQ	( 0x1 )
#define	CVR_SEEK_LT	( 0x2 )
#define	CVR_SEEK_LE	( 0x4 )
#define	CVR_SEEK_GE	( 0x8 )
#define	CVR_SEEK_GT	( 0x10 )
#define	CVR_SEEK_MASK	( 0xff )
#define	CVR_SEEK_NODELTA	( 0x1000 )
#define	CVR_SORT_NONE	( 0 )
#define	CVR_SORT_ASCEND	( 0x1 )
#define	CVR_SORT_DESCEND	( 0x2 )
#define	CV_COLUMN_QUEUE_DEFAULT	( -1 )
#define	CV_COLUMN_LOG_DEFAULT	( -2 )
#define	CV_COLUMN_LOG_FAILED_DEFAULT	( -3 )
#define	CV_COLUMN_EXTENSION_DEFAULT	( -4 )
#define	CV_COLUMN_ATTRIBUTE_DEFAULT	( -5 )
#define	CV_COLUMN_CRL_DEFAULT	( -6 )
#define	CV_COLUMN_LOG_REVOKED_DEFAULT	( -7 )
#define	CVRC_COLUMN_SCHEMA	( 0 )
#define	CVRC_COLUMN_RESULT	( 0x1 )
#define	CVRC_COLUMN_VALUE	( 0x2 )
#define	CVRC_COLUMN_MASK	( 0xfff )
#define	CVRC_TABLE_REQCERT	( 0 )
#define	CVRC_TABLE_EXTENSIONS	( 0x3000 )
#define	CVRC_TABLE_ATTRIBUTES	( 0x4000 )
#define	CVRC_TABLE_CRL	( 0x5000 )
#define	CVRC_TABLE_MASK	( 0xf000 )
#define	CVRC_TABLE_SHIFT	( 12 )
extern RPC_IF_HANDLE __MIDL_itf_certview_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_certview_0000_0000_v0_0_s_ifspec;
#ifndef __IEnumCERTVIEWCOLUMN_INTERFACE_DEFINED__
#define __IEnumCERTVIEWCOLUMN_INTERFACE_DEFINED__
extern const IID IID_IEnumCERTVIEWCOLUMN;
typedef struct IEnumCERTVIEWCOLUMNVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IEnumCERTVIEWCOLUMN * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IEnumCERTVIEWCOLUMN * This);
	ULONG(STDMETHODCALLTYPE * Release) (IEnumCERTVIEWCOLUMN * This);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfoCount) (IEnumCERTVIEWCOLUMN * This, UINT * pctinfo);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfo) (IEnumCERTVIEWCOLUMN * This, UINT iTInfo, LCID lcid, ITypeInfo ** ppTInfo);
	HRESULT(STDMETHODCALLTYPE * GetIDsOfNames) (IEnumCERTVIEWCOLUMN * This, REFIID riid, LPOLESTR * rgszNames, UINT cNames, LCID lcid, DISPID * rgDispId);
	HRESULT(STDMETHODCALLTYPE * Invoke) (IEnumCERTVIEWCOLUMN * This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS * pDispParams, VARIANT * pVarResult, EXCEPINFO * pExcepInfo, UINT * puArgErr);
	HRESULT(STDMETHODCALLTYPE * Next) (IEnumCERTVIEWCOLUMN * This, LONG * pIndex);
	HRESULT(STDMETHODCALLTYPE * GetName) (IEnumCERTVIEWCOLUMN * This, BSTR * pstrOut);
	HRESULT(STDMETHODCALLTYPE * GetDisplayName) (IEnumCERTVIEWCOLUMN * This, BSTR * pstrOut);
	HRESULT(STDMETHODCALLTYPE * GetType) (IEnumCERTVIEWCOLUMN * This, LONG * pType);
	HRESULT(STDMETHODCALLTYPE * IsIndexed) (IEnumCERTVIEWCOLUMN * This, LONG * pIndexed);
	HRESULT(STDMETHODCALLTYPE * GetMaxLength) (IEnumCERTVIEWCOLUMN * This, LONG * pMaxLength);
	HRESULT(STDMETHODCALLTYPE * GetValue) (IEnumCERTVIEWCOLUMN * This, LONG Flags, VARIANT * pvarValue);
	HRESULT(STDMETHODCALLTYPE * Skip) (IEnumCERTVIEWCOLUMN * This, LONG celt);
	HRESULT(STDMETHODCALLTYPE * Reset) (IEnumCERTVIEWCOLUMN * This);
	HRESULT(STDMETHODCALLTYPE * Clone) (IEnumCERTVIEWCOLUMN * This, IEnumCERTVIEWCOLUMN ** ppenum);
	END_INTERFACE
} IEnumCERTVIEWCOLUMNVtbl;
interface IEnumCERTVIEWCOLUMN
{
	CONST_VTBL struct IEnumCERTVIEWCOLUMNVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IEnumCERTVIEWCOLUMN_QueryInterface(This,riid,ppvObject)    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IEnumCERTVIEWCOLUMN_AddRef(This)    ( (This)->lpVtbl -> AddRef(This) )
#define IEnumCERTVIEWCOLUMN_Release(This)    ( (This)->lpVtbl -> Release(This) )
#define IEnumCERTVIEWCOLUMN_GetTypeInfoCount(This,pctinfo)    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define IEnumCERTVIEWCOLUMN_GetTypeInfo(This,iTInfo,lcid,ppTInfo)    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define IEnumCERTVIEWCOLUMN_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define IEnumCERTVIEWCOLUMN_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define IEnumCERTVIEWCOLUMN_Next(This,pIndex)    ( (This)->lpVtbl -> Next(This,pIndex) )
#define IEnumCERTVIEWCOLUMN_GetName(This,pstrOut)    ( (This)->lpVtbl -> GetName(This,pstrOut) )
#define IEnumCERTVIEWCOLUMN_GetDisplayName(This,pstrOut)    ( (This)->lpVtbl -> GetDisplayName(This,pstrOut) )
#define IEnumCERTVIEWCOLUMN_GetType(This,pType)    ( (This)->lpVtbl -> GetType(This,pType) )
#define IEnumCERTVIEWCOLUMN_IsIndexed(This,pIndexed)    ( (This)->lpVtbl -> IsIndexed(This,pIndexed) )
#define IEnumCERTVIEWCOLUMN_GetMaxLength(This,pMaxLength)    ( (This)->lpVtbl -> GetMaxLength(This,pMaxLength) )
#define IEnumCERTVIEWCOLUMN_GetValue(This,Flags,pvarValue)    ( (This)->lpVtbl -> GetValue(This,Flags,pvarValue) )
#define IEnumCERTVIEWCOLUMN_Skip(This,celt)    ( (This)->lpVtbl -> Skip(This,celt) )
#define IEnumCERTVIEWCOLUMN_Reset(This)    ( (This)->lpVtbl -> Reset(This) )
#define IEnumCERTVIEWCOLUMN_Clone(This,ppenum)    ( (This)->lpVtbl -> Clone(This,ppenum) )
#endif
#endif
#ifndef __IEnumCERTVIEWATTRIBUTE_INTERFACE_DEFINED__
#define __IEnumCERTVIEWATTRIBUTE_INTERFACE_DEFINED__
extern const IID IID_IEnumCERTVIEWATTRIBUTE;
typedef struct IEnumCERTVIEWATTRIBUTEVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IEnumCERTVIEWATTRIBUTE * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IEnumCERTVIEWATTRIBUTE * This);
	ULONG(STDMETHODCALLTYPE * Release) (IEnumCERTVIEWATTRIBUTE * This);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfoCount) (IEnumCERTVIEWATTRIBUTE * This, UINT * pctinfo);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfo) (IEnumCERTVIEWATTRIBUTE * This, UINT iTInfo, LCID lcid, ITypeInfo ** ppTInfo);
	HRESULT(STDMETHODCALLTYPE * GetIDsOfNames) (IEnumCERTVIEWATTRIBUTE * This, REFIID riid, LPOLESTR * rgszNames, UINT cNames, LCID lcid, DISPID * rgDispId);
	HRESULT(STDMETHODCALLTYPE * Invoke) (IEnumCERTVIEWATTRIBUTE * This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS * pDispParams, VARIANT * pVarResult, EXCEPINFO * pExcepInfo, UINT * puArgErr);
	HRESULT(STDMETHODCALLTYPE * Next) (IEnumCERTVIEWATTRIBUTE * This, LONG * pIndex);
	HRESULT(STDMETHODCALLTYPE * GetName) (IEnumCERTVIEWATTRIBUTE * This, BSTR * pstrOut);
	HRESULT(STDMETHODCALLTYPE * GetValue) (IEnumCERTVIEWATTRIBUTE * This, BSTR * pstrOut);
	HRESULT(STDMETHODCALLTYPE * Skip) (IEnumCERTVIEWATTRIBUTE * This, LONG celt);
	HRESULT(STDMETHODCALLTYPE * Reset) (IEnumCERTVIEWATTRIBUTE * This);
	HRESULT(STDMETHODCALLTYPE * Clone) (IEnumCERTVIEWATTRIBUTE * This, IEnumCERTVIEWATTRIBUTE ** ppenum);
	END_INTERFACE
} IEnumCERTVIEWATTRIBUTEVtbl;
interface IEnumCERTVIEWATTRIBUTE
{
	CONST_VTBL struct IEnumCERTVIEWATTRIBUTEVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IEnumCERTVIEWATTRIBUTE_QueryInterface(This,riid,ppvObject)    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IEnumCERTVIEWATTRIBUTE_AddRef(This)    ( (This)->lpVtbl -> AddRef(This) )
#define IEnumCERTVIEWATTRIBUTE_Release(This)    ( (This)->lpVtbl -> Release(This) )
#define IEnumCERTVIEWATTRIBUTE_GetTypeInfoCount(This,pctinfo)    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define IEnumCERTVIEWATTRIBUTE_GetTypeInfo(This,iTInfo,lcid,ppTInfo)    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define IEnumCERTVIEWATTRIBUTE_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define IEnumCERTVIEWATTRIBUTE_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define IEnumCERTVIEWATTRIBUTE_Next(This,pIndex)    ( (This)->lpVtbl -> Next(This,pIndex) )
#define IEnumCERTVIEWATTRIBUTE_GetName(This,pstrOut)    ( (This)->lpVtbl -> GetName(This,pstrOut) )
#define IEnumCERTVIEWATTRIBUTE_GetValue(This,pstrOut)    ( (This)->lpVtbl -> GetValue(This,pstrOut) )
#define IEnumCERTVIEWATTRIBUTE_Skip(This,celt)    ( (This)->lpVtbl -> Skip(This,celt) )
#define IEnumCERTVIEWATTRIBUTE_Reset(This)    ( (This)->lpVtbl -> Reset(This) )
#define IEnumCERTVIEWATTRIBUTE_Clone(This,ppenum)    ( (This)->lpVtbl -> Clone(This,ppenum) )
#endif
#endif
#ifndef __IEnumCERTVIEWEXTENSION_INTERFACE_DEFINED__
#define __IEnumCERTVIEWEXTENSION_INTERFACE_DEFINED__
extern const IID IID_IEnumCERTVIEWEXTENSION;
typedef struct IEnumCERTVIEWEXTENSIONVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IEnumCERTVIEWEXTENSION * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IEnumCERTVIEWEXTENSION * This);
	ULONG(STDMETHODCALLTYPE * Release) (IEnumCERTVIEWEXTENSION * This);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfoCount) (IEnumCERTVIEWEXTENSION * This, UINT * pctinfo);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfo) (IEnumCERTVIEWEXTENSION * This, UINT iTInfo, LCID lcid, ITypeInfo ** ppTInfo);
	HRESULT(STDMETHODCALLTYPE * GetIDsOfNames) (IEnumCERTVIEWEXTENSION * This, REFIID riid, LPOLESTR * rgszNames, UINT cNames, LCID lcid, DISPID * rgDispId);
	HRESULT(STDMETHODCALLTYPE * Invoke) (IEnumCERTVIEWEXTENSION * This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS * pDispParams, VARIANT * pVarResult, EXCEPINFO * pExcepInfo, UINT * puArgErr);
	HRESULT(STDMETHODCALLTYPE * Next) (IEnumCERTVIEWEXTENSION * This, LONG * pIndex);
	HRESULT(STDMETHODCALLTYPE * GetName) (IEnumCERTVIEWEXTENSION * This, BSTR * pstrOut);
	HRESULT(STDMETHODCALLTYPE * GetFlags) (IEnumCERTVIEWEXTENSION * This, LONG * pFlags);
	HRESULT(STDMETHODCALLTYPE * GetValue) (IEnumCERTVIEWEXTENSION * This, LONG Type, LONG Flags, VARIANT * pvarValue);
	HRESULT(STDMETHODCALLTYPE * Skip) (IEnumCERTVIEWEXTENSION * This, LONG celt);
	HRESULT(STDMETHODCALLTYPE * Reset) (IEnumCERTVIEWEXTENSION * This);
	HRESULT(STDMETHODCALLTYPE * Clone) (IEnumCERTVIEWEXTENSION * This, IEnumCERTVIEWEXTENSION ** ppenum);
	END_INTERFACE
} IEnumCERTVIEWEXTENSIONVtbl;
interface IEnumCERTVIEWEXTENSION
{
	CONST_VTBL struct IEnumCERTVIEWEXTENSIONVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IEnumCERTVIEWEXTENSION_QueryInterface(This,riid,ppvObject)    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IEnumCERTVIEWEXTENSION_AddRef(This)    ( (This)->lpVtbl -> AddRef(This) )
#define IEnumCERTVIEWEXTENSION_Release(This)    ( (This)->lpVtbl -> Release(This) )
#define IEnumCERTVIEWEXTENSION_GetTypeInfoCount(This,pctinfo)    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define IEnumCERTVIEWEXTENSION_GetTypeInfo(This,iTInfo,lcid,ppTInfo)    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define IEnumCERTVIEWEXTENSION_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define IEnumCERTVIEWEXTENSION_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define IEnumCERTVIEWEXTENSION_Next(This,pIndex)    ( (This)->lpVtbl -> Next(This,pIndex) )
#define IEnumCERTVIEWEXTENSION_GetName(This,pstrOut)    ( (This)->lpVtbl -> GetName(This,pstrOut) )
#define IEnumCERTVIEWEXTENSION_GetFlags(This,pFlags)    ( (This)->lpVtbl -> GetFlags(This,pFlags) )
#define IEnumCERTVIEWEXTENSION_GetValue(This,Type,Flags,pvarValue)    ( (This)->lpVtbl -> GetValue(This,Type,Flags,pvarValue) )
#define IEnumCERTVIEWEXTENSION_Skip(This,celt)    ( (This)->lpVtbl -> Skip(This,celt) )
#define IEnumCERTVIEWEXTENSION_Reset(This)    ( (This)->lpVtbl -> Reset(This) )
#define IEnumCERTVIEWEXTENSION_Clone(This,ppenum)    ( (This)->lpVtbl -> Clone(This,ppenum) )
#endif
#endif
#ifndef __IEnumCERTVIEWROW_INTERFACE_DEFINED__
#define __IEnumCERTVIEWROW_INTERFACE_DEFINED__
extern const IID IID_IEnumCERTVIEWROW;
typedef struct IEnumCERTVIEWROWVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IEnumCERTVIEWROW * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IEnumCERTVIEWROW * This);
	ULONG(STDMETHODCALLTYPE * Release) (IEnumCERTVIEWROW * This);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfoCount) (IEnumCERTVIEWROW * This, UINT * pctinfo);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfo) (IEnumCERTVIEWROW * This, UINT iTInfo, LCID lcid, ITypeInfo ** ppTInfo);
	HRESULT(STDMETHODCALLTYPE * GetIDsOfNames) (IEnumCERTVIEWROW * This, REFIID riid, LPOLESTR * rgszNames, UINT cNames, LCID lcid, DISPID * rgDispId);
	HRESULT(STDMETHODCALLTYPE * Invoke) (IEnumCERTVIEWROW * This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS * pDispParams, VARIANT * pVarResult, EXCEPINFO * pExcepInfo, UINT * puArgErr);
	HRESULT(STDMETHODCALLTYPE * Next) (IEnumCERTVIEWROW * This, LONG * pIndex);
	HRESULT(STDMETHODCALLTYPE * EnumCertViewColumn) (IEnumCERTVIEWROW * This, IEnumCERTVIEWCOLUMN ** ppenum);
	HRESULT(STDMETHODCALLTYPE * EnumCertViewAttribute) (IEnumCERTVIEWROW * This, LONG Flags, IEnumCERTVIEWATTRIBUTE ** ppenum);
	HRESULT(STDMETHODCALLTYPE * EnumCertViewExtension) (IEnumCERTVIEWROW * This, LONG Flags, IEnumCERTVIEWEXTENSION ** ppenum);
	HRESULT(STDMETHODCALLTYPE * Skip) (IEnumCERTVIEWROW * This, LONG celt);
	HRESULT(STDMETHODCALLTYPE * Reset) (IEnumCERTVIEWROW * This);
	HRESULT(STDMETHODCALLTYPE * Clone) (IEnumCERTVIEWROW * This, IEnumCERTVIEWROW ** ppenum);
	HRESULT(STDMETHODCALLTYPE * GetMaxIndex) (IEnumCERTVIEWROW * This, LONG * pIndex);
	END_INTERFACE
} IEnumCERTVIEWROWVtbl;
interface IEnumCERTVIEWROW
{
	CONST_VTBL struct IEnumCERTVIEWROWVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IEnumCERTVIEWROW_QueryInterface(This,riid,ppvObject)    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IEnumCERTVIEWROW_AddRef(This)    ( (This)->lpVtbl -> AddRef(This) )
#define IEnumCERTVIEWROW_Release(This)    ( (This)->lpVtbl -> Release(This) )
#define IEnumCERTVIEWROW_GetTypeInfoCount(This,pctinfo)    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define IEnumCERTVIEWROW_GetTypeInfo(This,iTInfo,lcid,ppTInfo)    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define IEnumCERTVIEWROW_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define IEnumCERTVIEWROW_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define IEnumCERTVIEWROW_Next(This,pIndex)    ( (This)->lpVtbl -> Next(This,pIndex) )
#define IEnumCERTVIEWROW_EnumCertViewColumn(This,ppenum)    ( (This)->lpVtbl -> EnumCertViewColumn(This,ppenum) )
#define IEnumCERTVIEWROW_EnumCertViewAttribute(This,Flags,ppenum)    ( (This)->lpVtbl -> EnumCertViewAttribute(This,Flags,ppenum) )
#define IEnumCERTVIEWROW_EnumCertViewExtension(This,Flags,ppenum)    ( (This)->lpVtbl -> EnumCertViewExtension(This,Flags,ppenum) )
#define IEnumCERTVIEWROW_Skip(This,celt)    ( (This)->lpVtbl -> Skip(This,celt) )
#define IEnumCERTVIEWROW_Reset(This)    ( (This)->lpVtbl -> Reset(This) )
#define IEnumCERTVIEWROW_Clone(This,ppenum)    ( (This)->lpVtbl -> Clone(This,ppenum) )
#define IEnumCERTVIEWROW_GetMaxIndex(This,pIndex)    ( (This)->lpVtbl -> GetMaxIndex(This,pIndex) )
#endif
#endif
#ifndef __ICertView_INTERFACE_DEFINED__
#define __ICertView_INTERFACE_DEFINED__
extern const IID IID_ICertView;
typedef struct ICertViewVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (ICertView * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (ICertView * This);
	ULONG(STDMETHODCALLTYPE * Release) (ICertView * This);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfoCount) (ICertView * This, UINT * pctinfo);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfo) (ICertView * This, UINT iTInfo, LCID lcid, ITypeInfo ** ppTInfo);
	HRESULT(STDMETHODCALLTYPE * GetIDsOfNames) (ICertView * This, REFIID riid, LPOLESTR * rgszNames, UINT cNames, LCID lcid, DISPID * rgDispId);
	HRESULT(STDMETHODCALLTYPE * Invoke) (ICertView * This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS * pDispParams, VARIANT * pVarResult, EXCEPINFO * pExcepInfo, UINT * puArgErr);
	HRESULT(STDMETHODCALLTYPE * OpenConnection) (ICertView * This, const BSTR strConfig);
	HRESULT(STDMETHODCALLTYPE * EnumCertViewColumn) (ICertView * This, LONG fResultColumn, IEnumCERTVIEWCOLUMN ** ppenum);
	HRESULT(STDMETHODCALLTYPE * GetColumnCount) (ICertView * This, LONG fResultColumn, LONG * pcColumn);
	HRESULT(STDMETHODCALLTYPE * GetColumnIndex) (ICertView * This, LONG fResultColumn, const BSTR strColumnName, LONG * pColumnIndex);
	HRESULT(STDMETHODCALLTYPE * SetResultColumnCount) (ICertView * This, LONG cResultColumn);
	HRESULT(STDMETHODCALLTYPE * SetResultColumn) (ICertView * This, LONG ColumnIndex);
	HRESULT(STDMETHODCALLTYPE * SetRestriction) (ICertView * This, LONG ColumnIndex, LONG SeekOperator, LONG SortOrder, const VARIANT * pvarValue);
	HRESULT(STDMETHODCALLTYPE * OpenView) (ICertView * This, IEnumCERTVIEWROW ** ppenum);
	END_INTERFACE
} ICertViewVtbl;
interface ICertView
{
	CONST_VTBL struct ICertViewVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define ICertView_QueryInterface(This,riid,ppvObject)    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define ICertView_AddRef(This)    ( (This)->lpVtbl -> AddRef(This) )
#define ICertView_Release(This)    ( (This)->lpVtbl -> Release(This) )
#define ICertView_GetTypeInfoCount(This,pctinfo)    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define ICertView_GetTypeInfo(This,iTInfo,lcid,ppTInfo)    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define ICertView_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define ICertView_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define ICertView_OpenConnection(This,strConfig)    ( (This)->lpVtbl -> OpenConnection(This,strConfig) )
#define ICertView_EnumCertViewColumn(This,fResultColumn,ppenum)    ( (This)->lpVtbl -> EnumCertViewColumn(This,fResultColumn,ppenum) )
#define ICertView_GetColumnCount(This,fResultColumn,pcColumn)    ( (This)->lpVtbl -> GetColumnCount(This,fResultColumn,pcColumn) )
#define ICertView_GetColumnIndex(This,fResultColumn,strColumnName,pColumnIndex)    ( (This)->lpVtbl -> GetColumnIndex(This,fResultColumn,strColumnName,pColumnIndex) )
#define ICertView_SetResultColumnCount(This,cResultColumn)    ( (This)->lpVtbl -> SetResultColumnCount(This,cResultColumn) )
#define ICertView_SetResultColumn(This,ColumnIndex)    ( (This)->lpVtbl -> SetResultColumn(This,ColumnIndex) )
#define ICertView_SetRestriction(This,ColumnIndex,SeekOperator,SortOrder,pvarValue)    ( (This)->lpVtbl -> SetRestriction(This,ColumnIndex,SeekOperator,SortOrder,pvarValue) )
#define ICertView_OpenView(This,ppenum)    ( (This)->lpVtbl -> OpenView(This,ppenum) )
#endif
#endif
#ifndef __ICertView2_INTERFACE_DEFINED__
#define __ICertView2_INTERFACE_DEFINED__
extern const IID IID_ICertView2;
typedef struct ICertView2Vtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (ICertView2 * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (ICertView2 * This);
	ULONG(STDMETHODCALLTYPE * Release) (ICertView2 * This);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfoCount) (ICertView2 * This, UINT * pctinfo);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfo) (ICertView2 * This, UINT iTInfo, LCID lcid, ITypeInfo ** ppTInfo);
	HRESULT(STDMETHODCALLTYPE * GetIDsOfNames) (ICertView2 * This, REFIID riid, LPOLESTR * rgszNames, UINT cNames, LCID lcid, DISPID * rgDispId);
	HRESULT(STDMETHODCALLTYPE * Invoke) (ICertView2 * This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS * pDispParams, VARIANT * pVarResult, EXCEPINFO * pExcepInfo, UINT * puArgErr);
	HRESULT(STDMETHODCALLTYPE * OpenConnection) (ICertView2 * This, const BSTR strConfig);
	HRESULT(STDMETHODCALLTYPE * EnumCertViewColumn) (ICertView2 * This, LONG fResultColumn, IEnumCERTVIEWCOLUMN ** ppenum);
	HRESULT(STDMETHODCALLTYPE * GetColumnCount) (ICertView2 * This, LONG fResultColumn, LONG * pcColumn);
	HRESULT(STDMETHODCALLTYPE * GetColumnIndex) (ICertView2 * This, LONG fResultColumn, const BSTR strColumnName, LONG * pColumnIndex);
	HRESULT(STDMETHODCALLTYPE * SetResultColumnCount) (ICertView2 * This, LONG cResultColumn);
	HRESULT(STDMETHODCALLTYPE * SetResultColumn) (ICertView2 * This, LONG ColumnIndex);
	HRESULT(STDMETHODCALLTYPE * SetRestriction) (ICertView2 * This, LONG ColumnIndex, LONG SeekOperator, LONG SortOrder, const VARIANT * pvarValue);
	HRESULT(STDMETHODCALLTYPE * OpenView) (ICertView2 * This, IEnumCERTVIEWROW ** ppenum);
	HRESULT(STDMETHODCALLTYPE * SetTable) (ICertView2 * This, LONG Table);
	END_INTERFACE
} ICertView2Vtbl;
interface ICertView2
{
	CONST_VTBL struct ICertView2Vtbl *lpVtbl;
};
#ifdef COBJMACROS
#define ICertView2_QueryInterface(This,riid,ppvObject)    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define ICertView2_AddRef(This)    ( (This)->lpVtbl -> AddRef(This) )
#define ICertView2_Release(This)    ( (This)->lpVtbl -> Release(This) )
#define ICertView2_GetTypeInfoCount(This,pctinfo)    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define ICertView2_GetTypeInfo(This,iTInfo,lcid,ppTInfo)    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define ICertView2_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define ICertView2_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define ICertView2_OpenConnection(This,strConfig)    ( (This)->lpVtbl -> OpenConnection(This,strConfig) )
#define ICertView2_EnumCertViewColumn(This,fResultColumn,ppenum)    ( (This)->lpVtbl -> EnumCertViewColumn(This,fResultColumn,ppenum) )
#define ICertView2_GetColumnCount(This,fResultColumn,pcColumn)    ( (This)->lpVtbl -> GetColumnCount(This,fResultColumn,pcColumn) )
#define ICertView2_GetColumnIndex(This,fResultColumn,strColumnName,pColumnIndex)    ( (This)->lpVtbl -> GetColumnIndex(This,fResultColumn,strColumnName,pColumnIndex) )
#define ICertView2_SetResultColumnCount(This,cResultColumn)    ( (This)->lpVtbl -> SetResultColumnCount(This,cResultColumn) )
#define ICertView2_SetResultColumn(This,ColumnIndex)    ( (This)->lpVtbl -> SetResultColumn(This,ColumnIndex) )
#define ICertView2_SetRestriction(This,ColumnIndex,SeekOperator,SortOrder,pvarValue)    ( (This)->lpVtbl -> SetRestriction(This,ColumnIndex,SeekOperator,SortOrder,pvarValue) )
#define ICertView2_OpenView(This,ppenum)    ( (This)->lpVtbl -> OpenView(This,ppenum) )
#define ICertView2_SetTable(This,Table)    ( (This)->lpVtbl -> SetTable(This,Table) )
#endif
#endif
#endif

/*+@@file@@----------------------------------------------------------------*//*!
 \file		msinkaut15.h
 \par Description 
            Extension and update of headers for PellesC compiler suite.
 \par Project: 
            PellesC Headers extension
 \date		Created  on Sun Aug 14 20:18:06 2016
 \date		Modified on Sun Aug 14 20:18:06 2016
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
#ifndef __msinkaut15_h__
#define __msinkaut15_h__
#if __POCC__ >= 500
#pragma once
#endif
#ifndef __IInkDivider_FWD_DEFINED__
#define __IInkDivider_FWD_DEFINED__
typedef interface IInkDivider IInkDivider;
#endif
#ifndef __IInkDivisionResult_FWD_DEFINED__
#define __IInkDivisionResult_FWD_DEFINED__
typedef interface IInkDivisionResult IInkDivisionResult;
#endif
#ifndef __IInkDivisionUnit_FWD_DEFINED__
#define __IInkDivisionUnit_FWD_DEFINED__
typedef interface IInkDivisionUnit IInkDivisionUnit;
#endif
#ifndef __IInkDivisionUnits_FWD_DEFINED__
#define __IInkDivisionUnits_FWD_DEFINED__
typedef interface IInkDivisionUnits IInkDivisionUnits;
#endif
#ifndef __InkDivider_FWD_DEFINED__
#define __InkDivider_FWD_DEFINED__
typedef struct InkDivider InkDivider;
#endif
#include "oaidl.h"
#include "ocidl.h"
#include "msinkaut.h"
#include <TPCError.h>
extern RPC_IF_HANDLE __MIDL_itf_msinkaut15_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_msinkaut15_0000_0000_v0_0_s_ifspec;
#ifndef __MSINKDIVLib_LIBRARY_DEFINED__
#define __MSINKDIVLib_LIBRARY_DEFINED__
typedef enum InkDivisionType
{
	IDT_Segment = 0,
	IDT_Line = 1,
	IDT_Paragraph = 2,
	IDT_Drawing = 3
} InkDivisionType;
typedef enum DISPID_InkDivider
{
	DISPID_IInkDivider_Strokes = 1,
	DISPID_IInkDivider_RecognizerContext = (DISPID_IInkDivider_Strokes + 1),
	DISPID_IInkDivider_LineHeight = (DISPID_IInkDivider_RecognizerContext + 1),
	DISPID_IInkDivider_Divide = (DISPID_IInkDivider_LineHeight + 1)
} DISPID_InkDivider;
typedef enum DISPID_InkDivisionResult
{
	DISPID_IInkDivisionResult_Strokes = 1,
	DISPID_IInkDivisionResult_ResultByType = (DISPID_IInkDivisionResult_Strokes + 1)
} DISPID_InkDivisionResult;
typedef enum DISPID_InkDivisionUnit
{
	DISPID_IInkDivisionUnit_Strokes = 1,
	DISPID_IInkDivisionUnit_DivisionType = (DISPID_IInkDivisionUnit_Strokes + 1),
	DISPID_IInkDivisionUnit_RecognizedString = (DISPID_IInkDivisionUnit_DivisionType + 1),
	DISPID_IInkDivisionUnit_RotationTransform = (DISPID_IInkDivisionUnit_RecognizedString + 1)
} DISPID_InkDivisionUnit;
typedef enum DISPID_InkDivisionUnits
{
	DISPID_IInkDivisionUnits_NewEnum = DISPID_NEWENUM,
	DISPID_IInkDivisionUnits_Item = DISPID_VALUE,
	DISPID_IInkDivisionUnits_Count = 1
} DISPID_InkDivisionUnits;
extern const IID LIBID_MSINKDIVLib;
#ifndef __IInkDivider_INTERFACE_DEFINED__
#define __IInkDivider_INTERFACE_DEFINED__
extern const IID IID_IInkDivider;
typedef struct IInkDividerVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IInkDivider * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IInkDivider * This);
	ULONG(STDMETHODCALLTYPE * Release) (IInkDivider * This);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfoCount) (IInkDivider * This, UINT * pctinfo);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfo) (IInkDivider * This, UINT iTInfo, LCID lcid, ITypeInfo ** ppTInfo);
	HRESULT(STDMETHODCALLTYPE * GetIDsOfNames) (IInkDivider * This, REFIID riid, LPOLESTR * rgszNames, UINT cNames, LCID lcid, DISPID * rgDispId);
	HRESULT(STDMETHODCALLTYPE * Invoke) (IInkDivider * This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS * pDispParams, VARIANT * pVarResult, EXCEPINFO * pExcepInfo, UINT * puArgErr);
	HRESULT(STDMETHODCALLTYPE * get_Strokes) (IInkDivider * This, IInkStrokes ** Strokes);
	HRESULT(STDMETHODCALLTYPE * putref_Strokes) (IInkDivider * This, IInkStrokes * Strokes);
	HRESULT(STDMETHODCALLTYPE * get_RecognizerContext) (IInkDivider * This, IInkRecognizerContext ** RecognizerContext);
	HRESULT(STDMETHODCALLTYPE * putref_RecognizerContext) (IInkDivider * This, IInkRecognizerContext * RecognizerContext);
	HRESULT(STDMETHODCALLTYPE * get_LineHeight) (IInkDivider * This, LONG * LineHeight);
	HRESULT(STDMETHODCALLTYPE * put_LineHeight) (IInkDivider * This, LONG LineHeight);
	HRESULT(STDMETHODCALLTYPE * Divide) (IInkDivider * This, IInkDivisionResult ** InkDivisionResult);
	END_INTERFACE
}  IInkDividerVtbl;
interface IInkDivider
{
	CONST_VTBL struct IInkDividerVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IInkDivider_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IInkDivider_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IInkDivider_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IInkDivider_GetTypeInfoCount(This,pctinfo) ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define IInkDivider_GetTypeInfo(This,iTInfo,lcid,ppTInfo) ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define IInkDivider_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define IInkDivider_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define IInkDivider_get_Strokes(This,Strokes) ( (This)->lpVtbl -> get_Strokes(This,Strokes) )
#define IInkDivider_putref_Strokes(This,Strokes) ( (This)->lpVtbl -> putref_Strokes(This,Strokes) )
#define IInkDivider_get_RecognizerContext(This,RecognizerContext) ( (This)->lpVtbl -> get_RecognizerContext(This,RecognizerContext) )
#define IInkDivider_putref_RecognizerContext(This,RecognizerContext) ( (This)->lpVtbl -> putref_RecognizerContext(This,RecognizerContext) )
#define IInkDivider_get_LineHeight(This,LineHeight) ( (This)->lpVtbl -> get_LineHeight(This,LineHeight) )
#define IInkDivider_put_LineHeight(This,LineHeight) ( (This)->lpVtbl -> put_LineHeight(This,LineHeight) )
#define IInkDivider_Divide(This,InkDivisionResult) ( (This)->lpVtbl -> Divide(This,InkDivisionResult) )
#endif
#endif
#ifndef __IInkDivisionResult_INTERFACE_DEFINED__
#define __IInkDivisionResult_INTERFACE_DEFINED__
extern const IID IID_IInkDivisionResult;
typedef struct IInkDivisionResultVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IInkDivisionResult * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IInkDivisionResult * This);
	ULONG(STDMETHODCALLTYPE * Release) (IInkDivisionResult * This);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfoCount) (IInkDivisionResult * This, UINT * pctinfo);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfo) (IInkDivisionResult * This, UINT iTInfo, LCID lcid, ITypeInfo ** ppTInfo);
	HRESULT(STDMETHODCALLTYPE * GetIDsOfNames) (IInkDivisionResult * This, REFIID riid, LPOLESTR * rgszNames, UINT cNames, LCID lcid, DISPID * rgDispId);
	HRESULT(STDMETHODCALLTYPE * Invoke) (IInkDivisionResult * This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS * pDispParams, VARIANT * pVarResult, EXCEPINFO * pExcepInfo, UINT * puArgErr);
	HRESULT(STDMETHODCALLTYPE * get_Strokes) (IInkDivisionResult * This, IInkStrokes ** Strokes);
	HRESULT(STDMETHODCALLTYPE * ResultByType) (IInkDivisionResult * This, InkDivisionType divisionType, IInkDivisionUnits ** InkDivisionUnits);
	END_INTERFACE
}  IInkDivisionResultVtbl;
interface IInkDivisionResult
{
	CONST_VTBL struct IInkDivisionResultVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IInkDivisionResult_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IInkDivisionResult_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IInkDivisionResult_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IInkDivisionResult_GetTypeInfoCount(This,pctinfo) ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define IInkDivisionResult_GetTypeInfo(This,iTInfo,lcid,ppTInfo) ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define IInkDivisionResult_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define IInkDivisionResult_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define IInkDivisionResult_get_Strokes(This,Strokes) ( (This)->lpVtbl -> get_Strokes(This,Strokes) )
#define IInkDivisionResult_ResultByType(This,divisionType,InkDivisionUnits) ( (This)->lpVtbl -> ResultByType(This,divisionType,InkDivisionUnits) )
#endif
#endif
#ifndef __IInkDivisionUnit_INTERFACE_DEFINED__
#define __IInkDivisionUnit_INTERFACE_DEFINED__
extern const IID IID_IInkDivisionUnit;
typedef struct IInkDivisionUnitVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IInkDivisionUnit * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IInkDivisionUnit * This);
	ULONG(STDMETHODCALLTYPE * Release) (IInkDivisionUnit * This);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfoCount) (IInkDivisionUnit * This, UINT * pctinfo);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfo) (IInkDivisionUnit * This, UINT iTInfo, LCID lcid, ITypeInfo ** ppTInfo);
	HRESULT(STDMETHODCALLTYPE * GetIDsOfNames) (IInkDivisionUnit * This, REFIID riid, LPOLESTR * rgszNames, UINT cNames, LCID lcid, DISPID * rgDispId);
	HRESULT(STDMETHODCALLTYPE * Invoke) (IInkDivisionUnit * This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS * pDispParams, VARIANT * pVarResult, EXCEPINFO * pExcepInfo, UINT * puArgErr);
	HRESULT(STDMETHODCALLTYPE * get_Strokes) (IInkDivisionUnit * This, IInkStrokes ** Strokes);
	HRESULT(STDMETHODCALLTYPE * get_DivisionType) (IInkDivisionUnit * This, InkDivisionType * divisionType);
	HRESULT(STDMETHODCALLTYPE * get_RecognizedString) (IInkDivisionUnit * This, BSTR * RecoString);
	HRESULT(STDMETHODCALLTYPE * get_RotationTransform) (IInkDivisionUnit * This, IInkTransform ** RotationTransform);
	END_INTERFACE
}  IInkDivisionUnitVtbl;
interface IInkDivisionUnit
{
	CONST_VTBL struct IInkDivisionUnitVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IInkDivisionUnit_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IInkDivisionUnit_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IInkDivisionUnit_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IInkDivisionUnit_GetTypeInfoCount(This,pctinfo) ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define IInkDivisionUnit_GetTypeInfo(This,iTInfo,lcid,ppTInfo) ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define IInkDivisionUnit_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define IInkDivisionUnit_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define IInkDivisionUnit_get_Strokes(This,Strokes) ( (This)->lpVtbl -> get_Strokes(This,Strokes) )
#define IInkDivisionUnit_get_DivisionType(This,divisionType) ( (This)->lpVtbl -> get_DivisionType(This,divisionType) )
#define IInkDivisionUnit_get_RecognizedString(This,RecoString) ( (This)->lpVtbl -> get_RecognizedString(This,RecoString) )
#define IInkDivisionUnit_get_RotationTransform(This,RotationTransform) ( (This)->lpVtbl -> get_RotationTransform(This,RotationTransform) )
#endif
#endif
#ifndef __IInkDivisionUnits_INTERFACE_DEFINED__
#define __IInkDivisionUnits_INTERFACE_DEFINED__
extern const IID IID_IInkDivisionUnits;
typedef struct IInkDivisionUnitsVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IInkDivisionUnits * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IInkDivisionUnits * This);
	ULONG(STDMETHODCALLTYPE * Release) (IInkDivisionUnits * This);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfoCount) (IInkDivisionUnits * This, UINT * pctinfo);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfo) (IInkDivisionUnits * This, UINT iTInfo, LCID lcid, ITypeInfo ** ppTInfo);
	HRESULT(STDMETHODCALLTYPE * GetIDsOfNames) (IInkDivisionUnits * This, REFIID riid, LPOLESTR * rgszNames, UINT cNames, LCID lcid, DISPID * rgDispId);
	HRESULT(STDMETHODCALLTYPE * Invoke) (IInkDivisionUnits * This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS * pDispParams, VARIANT * pVarResult, EXCEPINFO * pExcepInfo, UINT * puArgErr);
	HRESULT(STDMETHODCALLTYPE * get_Count) (IInkDivisionUnits * This, long *Count);
	HRESULT(STDMETHODCALLTYPE * get__NewEnum) (IInkDivisionUnits * This, IUnknown ** _NewEnum);
	HRESULT(STDMETHODCALLTYPE * Item) (IInkDivisionUnits * This, long Index, IInkDivisionUnit ** InkDivisionUnit);
	END_INTERFACE
}  IInkDivisionUnitsVtbl;
interface IInkDivisionUnits
{
	CONST_VTBL struct IInkDivisionUnitsVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IInkDivisionUnits_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IInkDivisionUnits_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IInkDivisionUnits_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IInkDivisionUnits_GetTypeInfoCount(This,pctinfo) ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define IInkDivisionUnits_GetTypeInfo(This,iTInfo,lcid,ppTInfo) ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define IInkDivisionUnits_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define IInkDivisionUnits_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define IInkDivisionUnits_get_Count(This,Count) ( (This)->lpVtbl -> get_Count(This,Count) )
#define IInkDivisionUnits_get__NewEnum(This,_NewEnum) ( (This)->lpVtbl -> get__NewEnum(This,_NewEnum) )
#define IInkDivisionUnits_Item(This,Index,InkDivisionUnit) ( (This)->lpVtbl -> Item(This,Index,InkDivisionUnit) )
#endif
#endif
extern const CLSID CLSID_InkDivider;
#endif
#endif

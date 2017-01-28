/*+@@file@@----------------------------------------------------------------*//*!
 \file		tvratings.h
 \par Description 
            Extension and update of headers for PellesC compiler suite.
 \par Project: 
            PellesC Headers extension
 \date		Created  on Sun Jun 19 21:27:36 2016
 \date		Modified on Sun Jun 19 21:27:36 2016
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
#ifndef __tvratings_h__
#define __tvratings_h__
#if __POCC__ >= 500
#pragma once
#endif
#ifndef __IXDSToRat_FWD_DEFINED__
#define __IXDSToRat_FWD_DEFINED__
typedef interface IXDSToRat IXDSToRat;
#endif
#ifndef __IEvalRat_FWD_DEFINED__
#define __IEvalRat_FWD_DEFINED__
typedef interface IEvalRat IEvalRat;
#endif
#ifndef __XDSToRat_FWD_DEFINED__
#define __XDSToRat_FWD_DEFINED__
typedef struct XDSToRat XDSToRat;
#endif
#ifndef __EvalRat_FWD_DEFINED__
#define __EvalRat_FWD_DEFINED__
typedef struct EvalRat EvalRat;
#endif
#include <oaidl.h>
#include <ocidl.h>
typedef enum EnTvRat_System
{
	MPAA	= 0,
	US_TV	= 1,
	Canadian_English	= 2,
	Canadian_French	= 3,
	Reserved4	= 4,
	System5	= 5,
	System6	= 6,
	Reserved7	= 7,
	PBDA	= 8,
	AgeBased	= 9,
	TvRat_kSystems	= 10,
	TvRat_SystemDontKnow	= 255
} 	EnTvRat_System;
typedef enum EnTvRat_GenericLevel
{
	TvRat_0	= 0,
	TvRat_1	= 1,
	TvRat_2	= 2,
	TvRat_3	= 3,
	TvRat_4	= 4,
	TvRat_5	= 5,
	TvRat_6	= 6,
	TvRat_7	= 7,
	TvRat_8	= 8,
	TvRat_9	= 9,
	TvRat_10	= 10,
	TvRat_11	= 11,
	TvRat_12	= 12,
	TvRat_13	= 13,
	TvRat_14	= 14,
	TvRat_15	= 15,
	TvRat_16	= 16,
	TvRat_17	= 17,
	TvRat_18	= 18,
	TvRat_19	= 19,
	TvRat_20	= 20,
	TvRat_21	= 21,
	TvRat_kLevels	= 22,
	TvRat_Unblock	= -1,
	TvRat_LevelDontKnow	= 255
} 	EnTvRat_GenericLevel;
typedef enum EnTvRat_MPAA
{
	MPAA_NotApplicable	= TvRat_0,
	MPAA_G	= TvRat_1,
	MPAA_PG	= TvRat_2,
	MPAA_PG13	= TvRat_3,
	MPAA_R	= TvRat_4,
	MPAA_NC17	= TvRat_5,
	MPAA_X	= TvRat_6,
	MPAA_NotRated	= TvRat_7
} 	EnTvRat_MPAA;
typedef enum EnTvRat_US_TV
{
	US_TV_None	= TvRat_0,
	US_TV_Y	= TvRat_1,
	US_TV_Y7	= TvRat_2,
	US_TV_G	= TvRat_3,
	US_TV_PG	= TvRat_4,
	US_TV_14	= TvRat_5,
	US_TV_MA	= TvRat_6,
	US_TV_None7	= TvRat_7
} 	EnTvRat_US_TV;
typedef enum EnTvRat_CAE_TV
{
	CAE_TV_Exempt	= TvRat_0,
	CAE_TV_C	= TvRat_1,
	CAE_TV_C8	= TvRat_2,
	CAE_TV_G	= TvRat_3,
	CAE_TV_PG	= TvRat_4,
	CAE_TV_14	= TvRat_5,
	CAE_TV_18	= TvRat_6,
	CAE_TV_Reserved	= TvRat_7
} 	EnTvRat_CAE_TV;
typedef enum EnTvRat_CAF_TV
{
	CAF_TV_Exempt	= TvRat_0,
	CAF_TV_G	= TvRat_1,
	CAF_TV_8	= TvRat_2,
	CAF_TV_13	= TvRat_3,
	CAF_TV_16	= TvRat_4,
	CAF_TV_18	= TvRat_5,
	CAF_TV_Reserved6	= TvRat_6,
	CAF_TV_Reserved	= TvRat_7
} 	EnTvRat_CAF_TV;
typedef enum BfEnTvRat_GenericAttributes
{
	BfAttrNone	= 0,
	BfIsBlocked	= 1,
	BfIsAttr_1	= 2,
	BfIsAttr_2	= 4,
	BfIsAttr_3	= 8,
	BfIsAttr_4	= 16,
	BfIsAttr_5	= 32,
	BfIsAttr_6	= 64,
	BfIsAttr_7	= 128,
	BfValidAttrSubmask	= 255
} 	BfEnTvRat_GenericAttributes;
typedef enum BfEnTvRat_Attributes_US_TV
{
	US_TV_IsBlocked	= BfIsBlocked,
	US_TV_IsViolent	= BfIsAttr_1,
	US_TV_IsSexualSituation	= BfIsAttr_2,
	US_TV_IsAdultLanguage	= BfIsAttr_3,
	US_TV_IsSexuallySuggestiveDialog	= BfIsAttr_4,
	US_TV_ValidAttrSubmask	= 31
} 	BfEnTvRat_Attributes_US_TV;
typedef enum BfEnTvRat_Attributes_MPAA
{
	MPAA_IsBlocked	= BfIsBlocked,
	MPAA_ValidAttrSubmask	= 1
} 	BfEnTvRat_Attributes_MPAA;
typedef enum BfEnTvRat_Attributes_CAE_TV
{
	CAE_IsBlocked	= BfIsBlocked,
	CAE_ValidAttrSubmask	= 1
} 	BfEnTvRat_Attributes_CAE_TV;
typedef enum BfEnTvRat_Attributes_CAF_TV
{
	CAF_IsBlocked	= BfIsBlocked,
	CAF_ValidAttrSubmask	= 1
} 	BfEnTvRat_Attributes_CAF_TV;
extern RPC_IF_HANDLE __MIDL_itf_tvratings_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_tvratings_0000_0000_v0_0_s_ifspec;
#ifndef __IXDSToRat_INTERFACE_DEFINED__
#define __IXDSToRat_INTERFACE_DEFINED__ 
extern const IID IID_IXDSToRat;
typedef struct IXDSToRatVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
	IXDSToRat *This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IXDSToRat * This);
	ULONG(STDMETHODCALLTYPE * Release) (IXDSToRat * This);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfoCount) (IXDSToRat * This, UINT * pctinfo);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfo) (IXDSToRat * This, UINT iTInfo, LCID lcid, ITypeInfo ** ppTInfo);
	HRESULT(STDMETHODCALLTYPE * GetIDsOfNames) (IXDSToRat * This, REFIID riid, LPOLESTR * rgszNames, UINT cNames, LCID lcid, DISPID * rgDispId);
	HRESULT(STDMETHODCALLTYPE * Invoke) (IXDSToRat * This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS * pDispParams, VARIANT * pVarResult, EXCEPINFO * pExcepInfo, UINT * puArgErr);
	HRESULT(STDMETHODCALLTYPE * Init) (IXDSToRat * This);
	HRESULT(STDMETHODCALLTYPE * ParseXDSBytePair) (IXDSToRat * This, BYTE byte1, BYTE byte2, EnTvRat_System * pEnSystem, EnTvRat_GenericLevel * pEnLevel, LONG * plBfEnAttributes);
	END_INTERFACE
} IXDSToRatVtbl;
interface IXDSToRat
{
    CONST_VTBL struct IXDSToRatVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IXDSToRat_QueryInterface(This,riid,ppvObject)    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define IXDSToRat_AddRef(This)    ( (This)->lpVtbl -> AddRef(This) ) 
#define IXDSToRat_Release(This)    ( (This)->lpVtbl -> Release(This) ) 
#define IXDSToRat_GetTypeInfoCount(This,pctinfo)    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 
#define IXDSToRat_GetTypeInfo(This,iTInfo,lcid,ppTInfo)    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 
#define IXDSToRat_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 
#define IXDSToRat_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 
#define IXDSToRat_Init(This)    ( (This)->lpVtbl -> Init(This) ) 
#define IXDSToRat_ParseXDSBytePair(This,byte1,byte2,pEnSystem,pEnLevel,plBfEnAttributes)    ( (This)->lpVtbl -> ParseXDSBytePair(This,byte1,byte2,pEnSystem,pEnLevel,plBfEnAttributes) ) 
#endif
#endif
#ifndef __IEvalRat_INTERFACE_DEFINED__
#define __IEvalRat_INTERFACE_DEFINED__ 
extern const IID IID_IEvalRat;
typedef struct IEvalRatVtbl
{
    BEGIN_INTERFACE
HRESULT(STDMETHODCALLTYPE * QueryInterface) (IEvalRat * This, REFIID riid, void **ppvObject);
ULONG(STDMETHODCALLTYPE * AddRef) (IEvalRat * This);
ULONG(STDMETHODCALLTYPE * Release) (IEvalRat * This);
HRESULT(STDMETHODCALLTYPE * GetTypeInfoCount) (IEvalRat * This, UINT * pctinfo);
HRESULT(STDMETHODCALLTYPE * GetTypeInfo) (IEvalRat * This, UINT iTInfo, LCID lcid, ITypeInfo ** ppTInfo);
HRESULT(STDMETHODCALLTYPE * GetIDsOfNames) (IEvalRat * This, REFIID riid, LPOLESTR * rgszNames, UINT cNames, LCID lcid, DISPID * rgDispId);
HRESULT(STDMETHODCALLTYPE * Invoke) (IEvalRat * This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS * pDispParams, VARIANT * pVarResult, EXCEPINFO * pExcepInfo, UINT * puArgErr);
HRESULT(STDMETHODCALLTYPE * get_BlockedRatingAttributes) (IEvalRat * This, EnTvRat_System enSystem, EnTvRat_GenericLevel enLevel, LONG * plbfAttrs);
HRESULT(STDMETHODCALLTYPE * put_BlockedRatingAttributes) (IEvalRat * This, EnTvRat_System enSystem, EnTvRat_GenericLevel enLevel, LONG lbfAttrs);
HRESULT(STDMETHODCALLTYPE * get_BlockUnRated) (IEvalRat * This, BOOL * pfBlockUnRatedShows);
HRESULT(STDMETHODCALLTYPE * put_BlockUnRated) (IEvalRat * This, BOOL fBlockUnRatedShows);
HRESULT(STDMETHODCALLTYPE * MostRestrictiveRating) (IEvalRat * This, EnTvRat_System enSystem1, EnTvRat_GenericLevel enEnLevel1, LONG lbfEnAttr1, EnTvRat_System enSystem2, EnTvRat_GenericLevel enEnLevel2, LONG lbfEnAttr2, EnTvRat_System * penSystem, EnTvRat_GenericLevel * penEnLevel, LONG * plbfEnAttr);
HRESULT(STDMETHODCALLTYPE * TestRating) (IEvalRat * This, EnTvRat_System enShowSystem, EnTvRat_GenericLevel enShowLevel, LONG lbfEnShowAttributes);
    END_INTERFACE
} IEvalRatVtbl;
interface IEvalRat
{
    CONST_VTBL struct IEvalRatVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IEvalRat_QueryInterface(This,riid,ppvObject)    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define IEvalRat_AddRef(This)    ( (This)->lpVtbl -> AddRef(This) ) 
#define IEvalRat_Release(This)    ( (This)->lpVtbl -> Release(This) ) 
#define IEvalRat_GetTypeInfoCount(This,pctinfo)    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 
#define IEvalRat_GetTypeInfo(This,iTInfo,lcid,ppTInfo)    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 
#define IEvalRat_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 
#define IEvalRat_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 
#define IEvalRat_get_BlockedRatingAttributes(This,enSystem,enLevel,plbfAttrs)    ( (This)->lpVtbl -> get_BlockedRatingAttributes(This,enSystem,enLevel,plbfAttrs) ) 
#define IEvalRat_put_BlockedRatingAttributes(This,enSystem,enLevel,lbfAttrs)    ( (This)->lpVtbl -> put_BlockedRatingAttributes(This,enSystem,enLevel,lbfAttrs) ) 
#define IEvalRat_get_BlockUnRated(This,pfBlockUnRatedShows)    ( (This)->lpVtbl -> get_BlockUnRated(This,pfBlockUnRatedShows) ) 
#define IEvalRat_put_BlockUnRated(This,fBlockUnRatedShows)    ( (This)->lpVtbl -> put_BlockUnRated(This,fBlockUnRatedShows) ) 
#define IEvalRat_MostRestrictiveRating(This,enSystem1,enEnLevel1,lbfEnAttr1,enSystem2,enEnLevel2,lbfEnAttr2,penSystem,penEnLevel,plbfEnAttr)    ( (This)->lpVtbl -> MostRestrictiveRating(This,enSystem1,enEnLevel1,lbfEnAttr1,enSystem2,enEnLevel2,lbfEnAttr2,penSystem,penEnLevel,plbfEnAttr) ) 
#define IEvalRat_TestRating(This,enShowSystem,enShowLevel,lbfEnShowAttributes)    ( (This)->lpVtbl -> TestRating(This,enShowSystem,enShowLevel,lbfEnShowAttributes) ) 
#endif
#endif
#ifndef __TVRATINGSLib_LIBRARY_DEFINED__
#define __TVRATINGSLib_LIBRARY_DEFINED__ 
extern const IID LIBID_TVRATINGSLib;
extern const CLSID CLSID_XDSToRat;
extern const CLSID CLSID_EvalRat;
#endif
#endif

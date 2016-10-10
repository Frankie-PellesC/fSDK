/*+@@file@@----------------------------------------------------------------*//*!
 \file		Query.h
 \par Description 
            Extension and update of headers for PellesC compiler suite.
 \par Project: 
            PellesC Headers extension
 \date		Created  on Fri Sep 16 19:14:54 2016
 \date		Modified on Fri Sep 16 19:14:54 2016
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
#ifndef __query_h__
#define __query_h__
#if __POCC__ >= 500
#pragma once
#endif
#ifndef __ISearchQueryHits_FWD_DEFINED__
#define __ISearchQueryHits_FWD_DEFINED__
typedef interface ISearchQueryHits ISearchQueryHits;
#endif
#ifndef __IRowsetQueryStatus_FWD_DEFINED__
#define __IRowsetQueryStatus_FWD_DEFINED__
typedef interface IRowsetQueryStatus IRowsetQueryStatus;
#endif
#include "oaidl.h"
#include "filter.h"
#ifndef __IQueryStructures_INTERFACE_DEFINED__
#define __IQueryStructures_INTERFACE_DEFINED__
#define DBQUERYGUID  { 0x49691C90, 0x7E17, 0x101A, 0xA9, 0x1C, 0x08, 0x00, 0x2B, 0x2E, 0xCD, 0xA9}
#define	DISPID_QUERY_RANKVECTOR	( 2 )
#define	DISPID_QUERY_RANK	( 3 )
#define	DISPID_QUERY_HITCOUNT	( 4 )
#define	DISPID_QUERY_WORKID	( 5 )
#define	DISPID_QUERY_ALL	( 6 )
#define	DISPID_QUERY_UNFILTERED	( 7 )
#define	DISPID_QUERY_REVNAME	( 8 )
#define	DISPID_QUERY_VIRTUALPATH	( 9 )
#define	DISPID_QUERY_LASTSEENTIME	( 10 )
#define	CQUERYDISPIDS	( 11 )
#define PSGUID_QUERY_METADATA { 0x624C9360, 0x93D0, 0x11CF, 0xA7, 0x87, 0x00, 0x00, 0x4C, 0x75, 0x27, 0x52}
#define	DISPID_QUERY_METADATA_VROOTUSED	( 2 )
#define	DISPID_QUERY_METADATA_VROOTAUTOMATIC	( 3 )
#define	DISPID_QUERY_METADATA_VROOTMANUAL	( 4 )
#define	DISPID_QUERY_METADATA_PROPGUID	( 5 )
#define	DISPID_QUERY_METADATA_PROPDISPID	( 6 )
#define	DISPID_QUERY_METADATA_PROPNAME	( 7 )
#define	DISPID_QUERY_METADATA_STORELEVEL	( 8 )
#define	DISPID_QUERY_METADATA_PROPMODIFIABLE	( 9 )
#define	CQUERYMETADISPIDS	( 10 )
#define DBBMKGUID { 0xC8B52232L, 0x5CF3, 0x11CE, {0xAD, 0xE5, 0x00, 0xAA, 0x00, 0x44, 0x77, 0x3D}}
#define	PROPID_DBBMK_BOOKMARK	( 2 )
#define	PROPID_DBBMK_CHAPTER	( 3 )
#define	CDBBMKDISPIDS	( 8 )
#define DBSELFGUID {0xc8b52231,0x5cf3,0x11ce,{0xad,0xe5,0x00,0xaa,0x00,0x44,0x77,0x3d}}
#define	PROPID_DBSELF_SELF	( 2 )
#define	CDBSELFDISPIDS	( 8 )
#define	CDBCOLDISPIDS	( 28 )
#define	CQUERYPROPERTY	( 64 )
#define PSGUID_CHARACTERIZATION { 0x560c36c0, 0x503a, 0x11cf, 0xba, 0xa1, 0x00, 0x00, 0x4c, 0x75, 0x2a, 0x9a}
#define	QUERY_VALIDBITS	( 3 )
#define	RTNone	( 0 )
#define	RTAnd	( 1 )
#define	RTOr	( 2 )
#define	RTNot	( 3 )
#define	RTContent	( 4 )
#define	RTProperty	( 5 )
#define	RTProximity	( 6 )
#define	RTVector	( 7 )
#define	RTNatLanguage	( 8 )
typedef struct tagRESTRICTION RESTRICTION;
typedef struct tagNOTRESTRICTION
{
	RESTRICTION *pRes;
} NOTRESTRICTION;
typedef struct tagNODERESTRICTION
{
	ULONG cRes;
	RESTRICTION **paRes;
	ULONG reserved;
} NODERESTRICTION;
#define	VECTOR_RANK_MIN	( 0 )
#define	VECTOR_RANK_MAX	( 1 )
#define	VECTOR_RANK_INNER	( 2 )
#define	VECTOR_RANK_DICE	( 3 )
#define	VECTOR_RANK_JACCARD	( 4 )
typedef struct tagVECTORRESTRICTION
{
	NODERESTRICTION Node;
	ULONG RankMethod;
} VECTORRESTRICTION;
#define	GENERATE_METHOD_EXACT	( 0 )
#define	GENERATE_METHOD_PREFIXMATCH	( 1 )
#define	GENERATE_METHOD_STEMMED	( 2 )
typedef struct tagCONTENTRESTRICTION
{
	FULLPROPSPEC prop;
	WCHAR *pwcsPhrase;
	LCID lcid;
	ULONG ulGenerateMethod;
} CONTENTRESTRICTION;
typedef struct tagNATLANGUAGERESTRICTION
{
	FULLPROPSPEC prop;
	WCHAR *pwcsPhrase;
	LCID lcid;
} NATLANGUAGERESTRICTION;
#define	PRLT	( 0 )
#define	PRLE	( 1 )
#define	PRGT	( 2 )
#define	PRGE	( 3 )
#define	PREQ	( 4 )
#define	PRNE	( 5 )
#define	PRRE	( 6 )
#define	PRAllBits	( 7 )
#define	PRSomeBits	( 8 )
#define	PRAll	( 0x100 )
#define	PRAny	( 0x200 )
typedef struct tagPROPERTYRESTRICTION
{
	ULONG rel;
	FULLPROPSPEC prop;
	PROPVARIANT prval;
} PROPERTYRESTRICTION;
struct tagRESTRICTION
{
	ULONG rt;
	ULONG weight;
	union _URes
	{
		NODERESTRICTION ar;
		NODERESTRICTION or;
		NODERESTRICTION pxr;
		VECTORRESTRICTION vr;
		NOTRESTRICTION nr;
		CONTENTRESTRICTION cr;
		NATLANGUAGERESTRICTION nlr;
		PROPERTYRESTRICTION pr;
	} res;
};
typedef struct tagCOLUMNSET
{
	ULONG cCol;
	FULLPROPSPEC *aCol;
} COLUMNSET;
#define	QUERY_SORTASCEND	( 0 )
#define	QUERY_SORTDESCEND	( 1 )
#define	QUERY_SORTXASCEND	( 2 )
#define	QUERY_SORTXDESCEND	( 3 )
#define	QUERY_SORTDEFAULT	( 4 )
typedef struct tagSORTKEY
{
	FULLPROPSPEC propColumn;
	ULONG dwOrder;
	LCID locale;
} SORTKEY;
typedef struct tagSORTSET
{
	ULONG cCol;
	SORTKEY *aCol;
} SORTSET;
#define	CATEGORIZE_UNIQUE	( 0 )
#define	CATEGORIZE_CLUSTER	( 1 )
#define	CATEGORIZE_BUCKETS	( 2 )
#define	BUCKET_LINEAR	( 0 )
#define	BUCKET_EXPONENTIAL	( 1 )
typedef struct tagBUCKETCATEGORIZE
{
	ULONG cBuckets;
	ULONG Distribution;
} BUCKETCATEGORIZE;
#define	CATEGORIZE_RANGE	( 3 )
typedef struct tagRANGECATEGORIZE
{
	ULONG cRange;
	PROPVARIANT *aRangeBegin;
} RANGECATEGORIZE;
typedef struct tagCATEGORIZATION
{
	ULONG ulCatType;
	union
	{
		ULONG cClusters;
		BUCKETCATEGORIZE bucket;
		RANGECATEGORIZE range;
	};
	COLUMNSET csColumns;
} CATEGORIZATION;
typedef struct tagCATEGORIZATIONSET
{
	ULONG cCat;
	CATEGORIZATION *aCat;
} CATEGORIZATIONSET;
typedef unsigned long OCCURRENCE;
#define	OCC_INVALID	( 0xffffffff )
#define	MAX_QUERY_RANK	( 1000 )
extern RPC_IF_HANDLE IQueryStructures_v0_0_c_ifspec;
extern RPC_IF_HANDLE IQueryStructures_v0_0_s_ifspec;
#endif
#ifndef __ISearchQueryHits_INTERFACE_DEFINED__
#define __ISearchQueryHits_INTERFACE_DEFINED__
extern const IID IID_ISearchQueryHits;
typedef struct ISearchQueryHitsVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (ISearchQueryHits * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (ISearchQueryHits * This);
	ULONG(STDMETHODCALLTYPE * Release) (ISearchQueryHits * This);
	SCODE(STDMETHODCALLTYPE * Init) (ISearchQueryHits * This, IFilter * pflt, ULONG ulFlags);
	SCODE(STDMETHODCALLTYPE * NextHitMoniker) (ISearchQueryHits * This, ULONG * pcMnk, IMoniker *** papMnk);
	SCODE(STDMETHODCALLTYPE * NextHitOffset) (ISearchQueryHits * This, ULONG * pcRegion, FILTERREGION ** paRegion);
	END_INTERFACE
}  ISearchQueryHitsVtbl;
interface ISearchQueryHits
{
	CONST_VTBL struct ISearchQueryHitsVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define ISearchQueryHits_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define ISearchQueryHits_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define ISearchQueryHits_Release(This) ( (This)->lpVtbl -> Release(This) )
#define ISearchQueryHits_Init(This,pflt,ulFlags) ( (This)->lpVtbl -> Init(This,pflt,ulFlags) )
#define ISearchQueryHits_NextHitMoniker(This,pcMnk,papMnk) ( (This)->lpVtbl -> NextHitMoniker(This,pcMnk,papMnk) )
#define ISearchQueryHits_NextHitOffset(This,pcRegion,paRegion) ( (This)->lpVtbl -> NextHitOffset(This,pcRegion,paRegion) )
#endif
#endif
#ifndef __IRowsetQueryStatus_INTERFACE_DEFINED__
#define __IRowsetQueryStatus_INTERFACE_DEFINED__
extern const IID IID_IRowsetQueryStatus;
typedef struct IRowsetQueryStatusVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IRowsetQueryStatus * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IRowsetQueryStatus * This);
	ULONG(STDMETHODCALLTYPE * Release) (IRowsetQueryStatus * This);
	HRESULT(STDMETHODCALLTYPE * GetStatus) (IRowsetQueryStatus * This, DWORD * pdwStatus);
	HRESULT(STDMETHODCALLTYPE * GetStatusEx) (IRowsetQueryStatus * This, DWORD * pdwStatus, DWORD * pcFilteredDocuments, DWORD * pcDocumentsToFilter, ULONG_PTR * pdwRatioFinishedDenominator, ULONG_PTR * pdwRatioFinishedNumerator, ULONG_PTR cbBmk, const BYTE * pBmk, ULONG_PTR * piRowBmk, ULONG_PTR * pcRowsTotal);
	END_INTERFACE
}  IRowsetQueryStatusVtbl;
interface IRowsetQueryStatus
{
	CONST_VTBL struct IRowsetQueryStatusVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IRowsetQueryStatus_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IRowsetQueryStatus_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IRowsetQueryStatus_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IRowsetQueryStatus_GetStatus(This,pdwStatus) ( (This)->lpVtbl -> GetStatus(This,pdwStatus) )
#define IRowsetQueryStatus_GetStatusEx(This,pdwStatus,pcFilteredDocuments,pcDocumentsToFilter,pdwRatioFinishedDenominator,pdwRatioFinishedNumerator,cbBmk,pBmk,piRowBmk,pcRowsTotal) ( (This)->lpVtbl -> GetStatusEx(This,pdwStatus,pcFilteredDocuments,pcDocumentsToFilter,pdwRatioFinishedDenominator,pdwRatioFinishedNumerator,cbBmk,pBmk,piRowBmk,pcRowsTotal) )
#endif
#endif
#include <indexsrv.h>
extern RPC_IF_HANDLE __MIDL_itf_query_0000_0003_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_query_0000_0003_v0_0_s_ifspec;
#endif

/*+@@file@@----------------------------------------------------------------*//*!
 \file		NTQuery.h
 \par Description 
            Extension and update of headers for PellesC compiler suite.
 \par Project: 
            PellesC Headers extension
 \date		Created  on Sat Sep  3 18:15:42 2016
 \date		Modified on Sat Sep  3 18:15:42 2016
 \author	frankie
\*//*-@@file@@----------------------------------------------------------------*/

#if !defined(__NTQUERY_H__)
#define __NTQUERY_H__
#if __POCC__ >= 500
#pragma once
#endif
#define CI_VERSION_WDS30 0x102
#define CI_VERSION_WDS40 0x109
#define CI_VERSION_WIN70 0x700
#define CINULLCATALOG L"::_noindex_::"
#define CIADMIN L"::_nodocstore_::"
STDAPI LoadIFilter(PCWSTR pwcsPath, IUnknown *pUnkOuter, void **ppIUnk);
#define LIFF_LOAD_DEFINED_FILTER                   1
#define LIFF_IMPLEMENT_TEXT_FILTER_FALLBACK_POLICY 2
#define LIFF_FORCE_TEXT_FILTER_FALLBACK            3
STDAPI LoadIFilterEx(PCWSTR pwcsPath, DWORD dwFlags, REFIID riid, void **ppIUnk);
STDAPI BindIFilterFromStorage(IStorage *pStg, IUnknown *pUnkOuter, void **ppIUnk);
STDAPI BindIFilterFromStream(IStream *pStm, IUnknown *pUnkOuter, void **ppIUnk);
STDAPI LocateCatalogsW(WCHAR const *pwszScope, ULONG iBmk, LPWSTR pwszMachine, ULONG *pccMachine, WCHAR *pwszCat, ULONG *pccCat);
STDAPI LocateCatalogsA(PCSTR pwszScope, ULONG iBmk, char *pwszMachine, ULONG *pccMachine, char *pwszCat, ULONG *pccCat);
#ifdef UNICODE
#define LocateCatalogs  LocateCatalogsW
#else
#define LocateCatalogs  LocateCatalogsA
#endif
#define CLSID_INDEX_SERVER_DSO { 0xF9AE8980, 0x7E52, 0x11d0, { 0x89, 0x64, 0x00, 0xC0, 0x4F, 0xD6, 0x11, 0xD7 } }
#define PSGUID_FILENAME { 0x41CF5AE0, 0xF75A, 0x4806, { 0xBD, 0x87, 0x59, 0xC7, 0xD9, 0x24, 0x8E, 0xB9} }
#define PID_FILENAME 100
#define DBPROPSET_FSCIFRMWRK_EXT { 0xA9BD1526, 0x6A80, 0x11D0, { 0x8C, 0x9D, 0x00, 0x20, 0xAF, 0x1D, 0x74, 0x0E } }
#define DBPROP_CI_CATALOG_NAME     2
#define DBPROP_CI_INCLUDE_SCOPES   3
#define DBPROP_CI_DEPTHS           4
#define DBPROP_CI_SCOPE_FLAGS      4
#define DBPROP_CI_EXCLUDE_SCOPES   5
#define DBPROP_CI_SECURITY_ID      6
#define DBPROP_CI_QUERY_TYPE       7
#define DBPROP_CI_PROVIDER         8
#define CI_PROVIDER_MSSEARCH          1
#define CI_PROVIDER_INDEXING_SERVICE  2
#define CI_PROVIDER_ALL               0xffffffff
#define DBPROPSET_SESS_QUERYEXT { 0x63623309, 0x2d8b, 0x4d17, { 0xb1, 0x52, 0x6e, 0x29, 0x56, 0xc2, 0x6a, 0x70 } }
#define DBPROP_DEFAULT_EQUALS_BEHAVIOR   2
#define DBPROPSET_QUERYEXT { 0xA7AC77ED, 0xF8D7, 0x11CE, { 0xA7, 0x98, 0x00, 0x20, 0xF8, 0x00, 0x80, 0x25 } }
#define DBPROP_USECONTENTINDEX                2
#define DBPROP_DEFERNONINDEXEDTRIMMING        3
#define DBPROP_USEEXTENDEDDBTYPES             4
#define DBPROP_IGNORENOISEONLYCLAUSES         5
#define DBPROP_GENERICOPTIONS_STRING          6
#define DBPROP_FIRSTROWS                      7
#define DBPROP_DEFERCATALOGVERIFICATION       8
#define DBPROP_CATALOGLISTID                  9
#define DBPROP_GENERATEPARSETREE             10
#define DBPROP_APPLICATION_NAME              11
#define DBPROP_FREETEXTANYTERM               12
#define DBPROP_FREETEXTUSESTEMMING           13
#define DBPROP_IGNORESBRI                    14
#define DBPROP_DONOTCOMPUTEEXPENSIVEPROPS    15
#define DBPROP_ENABLEROWSETEVENTS            16
#define DBPROPSET_CIFRMWRKCORE_EXT { 0xafafaca5, 0xb5d1, 0x11d0, { 0x8c, 0x62, 0x00, 0xc0, 0x4f, 0xc2, 0xdb, 0x8d } }
#define DBPROP_MACHINE      2
#define DBPROP_CLIENT_CLSID 3
#define DBPROPSET_MSIDXS_ROWSETEXT { 0xaa6ee6b0, 0xe828, 0x11d0, { 0xb2, 0x3e, 0x00, 0xaa, 0x00, 0x47, 0xfc, 0x01 } }
#define MSIDXSPROP_ROWSETQUERYSTATUS        2
#define MSIDXSPROP_COMMAND_LOCALE_STRING    3
#define MSIDXSPROP_QUERY_RESTRICTION        4
#define MSIDXSPROP_PARSE_TREE               5
#define MSIDXSPROP_MAX_RANK                 6
#define MSIDXSPROP_RESULTS_FOUND            7
#define MSIDXSPROP_WHEREID                  8
#define MSIDXSPROP_SERVER_VERSION           9
#define MSIDXSPROP_SERVER_WINVER_MAJOR     10
#define MSIDXSPROP_SERVER_WINVER_MINOR     11
#define MSIDXSPROP_SERVER_NLSVERSION       12
#define MSIDXSPROP_SERVER_NLSVER_DEFINED   13
#define MSIDXSPROP_SAME_SORTORDER_USED     14
#define STAT_BUSY                       ( 0 )
#define STAT_ERROR                      ( 0x1 )
#define STAT_DONE                       ( 0x2 )
#define STAT_REFRESH                    ( 0x3 )
#define QUERY_FILL_STATUS(x)            ( ( x ) & 0x7 )
#define STAT_PARTIAL_SCOPE              ( 0x8 )
#define STAT_NOISE_WORDS                ( 0x10 )
#define STAT_CONTENT_OUT_OF_DATE        ( 0x20 )
#define STAT_REFRESH_INCOMPLETE         ( 0x40 )
#define STAT_CONTENT_QUERY_INCOMPLETE   ( 0x80 )
#define STAT_TIME_LIMIT_EXCEEDED        ( 0x100 )
#define STAT_SHARING_VIOLATION          ( 0x200 )
#define STAT_MISSING_RELDOC             ( 0x400 )
#define STAT_MISSING_PROP_IN_RELDOC     ( 0x800 )
#define STAT_RELDOC_ACCESS_DENIED       ( 0x1000 )
#define STAT_COALESCE_COMP_ALL_NOISE    ( 0x2000 )
#define QUERY_RELIABILITY_STATUS(x)     ( ( x ) & 0xFFF8 )
#define QUERY_SHALLOW        0
#define QUERY_DEEP           1
#define QUERY_PHYSICAL_PATH  0
#define QUERY_VIRTUAL_PATH   2
#define PROPID_QUERY_WORKID        5
#define PROPID_QUERY_UNFILTERED    7
#define PROPID_QUERY_VIRTUALPATH   9
#define PROPID_QUERY_LASTSEENTIME 10
#define CICAT_STOPPED     0x1
#define CICAT_READONLY    0x2
#define CICAT_WRITABLE    0x4
#define CICAT_NO_QUERY    0x8
#define CICAT_GET_STATE   0x10
#define CICAT_ALL_OPENED  0x20
STDAPI SetCatalogState(WCHAR const *pwcsCat, WCHAR const *pwcsMachine, DWORD dwNewState, DWORD *pdwOldState);
#define CI_STATE_SHADOW_MERGE          0x0001
#define CI_STATE_MASTER_MERGE          0x0002
#define CI_STATE_CONTENT_SCAN_REQUIRED 0x0004
#define CI_STATE_ANNEALING_MERGE       0x0008
#define CI_STATE_SCANNING              0x0010
#define CI_STATE_RECOVERING            0x0020
#define CI_STATE_INDEX_MIGRATION_MERGE 0x0040
#define CI_STATE_LOW_MEMORY            0x0080
#define CI_STATE_HIGH_IO               0x0100
#define CI_STATE_MASTER_MERGE_PAUSED   0x0200
#define CI_STATE_READ_ONLY             0x0400
#define CI_STATE_BATTERY_POWER         0x0800
#define CI_STATE_USER_ACTIVE           0x1000
#define CI_STATE_STARTING              0x2000
#define CI_STATE_READING_USNS          0x4000
#define CI_STATE_DELETION_MERGE        0x8000
#define CI_STATE_LOW_DISK             0x10000
#define CI_STATE_HIGH_CPU             0x20000
#define CI_STATE_BATTERY_POLICY       0x40000
#ifndef CI_STATE_DEFINED
#define CI_STATE_DEFINED
#include <pshpack4.h>
typedef struct  _CI_STATE
{
	DWORD cbStruct;
	DWORD cWordList;
	DWORD cPersistentIndex;
	DWORD cQueries;
	DWORD cDocuments;
	DWORD cFreshTest;
	DWORD dwMergeProgress;
	DWORD eState;
	DWORD cFilteredDocuments;
	DWORD cTotalDocuments;
	DWORD cPendingScans;
	DWORD dwIndexSize;
	DWORD cUniqueKeys;
	DWORD cSecQDocuments;
	DWORD dwPropCacheSize;
}   CI_STATE;
#include <poppack.h>
#endif
STDAPI CIState(WCHAR const *pwcsCat, WCHAR const *pwcsMachine, CI_STATE *pCiState);
#if defined __ICommand_INTERFACE_DEFINED__
STDAPI CIMakeICommand(ICommand **ppCommand, ULONG cScope, DWORD const *aDepths, WCHAR const *const *awcsScope, WCHAR const *const *awcsCatalogs, WCHAR const *const *awcsMachine);
STDAPI CICreateCommand(IUnknown **ppCommand, IUnknown *pUnkOuter, REFIID riid, WCHAR const *pwcsCatalog, WCHAR const *pwcsMachine);
#if defined __ICommandTree_INTERFACE_DEFINED__
#ifndef __propertydef_h__
typedef struct tagCIPROPERTYDEF
{
    LPWSTR wcsFriendlyName;
    DWORD  dbType;
    DBID   dbCol;
} CIPROPERTYDEF;
#endif
#define ISQLANG_V1 1
#define ISQLANG_V2 2
STDAPI CITextToSelectTree(WCHAR const *pwszRestriction, DBCOMMANDTREE **ppTree, ULONG cProperties, CIPROPERTYDEF *pProperties, LCID LocaleID);
STDAPI CITextToSelectTreeEx(WCHAR const *pwszRestriction, ULONG ulDialect, DBCOMMANDTREE **ppTree, ULONG cProperties, CIPROPERTYDEF *pProperties, LCID LocaleID);
STDAPI CITextToFullTree(WCHAR const *pwszRestriction, WCHAR const *pwszColumns, WCHAR const *pwszSortColumns, WCHAR const *pwszGroupings, DBCOMMANDTREE **ppTree, ULONG cProperties, CIPROPERTYDEF *pProperties, LCID LocaleID);
STDAPI CITextToFullTreeEx(WCHAR const *pwszRestriction, ULONG ulDialect, WCHAR const *pwszColumns, WCHAR const *pwszSortColumns, WCHAR const *pwszGroupings, DBCOMMANDTREE **ppTree, ULONG cProperties, CIPROPERTYDEF *pProperties, LCID LocaleID);
STDAPI CIBuildQueryNode(WCHAR const *wcsProperty, DBCOMMANDOP dbOperator, PROPVARIANT const *pvarPropertyValue, DBCOMMANDTREE **ppTree, ULONG cProperties, CIPROPERTYDEF const *pProperty, LCID LocaleID);
STDAPI CIBuildQueryTree(DBCOMMANDTREE const *pExistingTree, DBCOMMANDOP dbBoolOp, ULONG cSiblings, DBCOMMANDTREE const *const *ppSibsToCombine, DBCOMMANDTREE **ppTree);
STDAPI CIRestrictionToFullTree(DBCOMMANDTREE const *pTree, WCHAR const *pwszColumns, WCHAR const *pwszSortColumns, WCHAR const *pwszGroupings, DBCOMMANDTREE **ppTree, ULONG cProperties, CIPROPERTYDEF *pReserved, LCID LocaleID);
#endif
#endif
STDAPI_(void) CIShutdown(void);
#endif

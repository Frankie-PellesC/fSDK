/*+@@file@@----------------------------------------------------------------*//*!
 \file		xoleHlp.h
 \par Description 
            Extension and update of headers for PellesC compiler suite.
 \par Project: 
            PellesC Headers extension
 \date		Created  on Mon Sep 19 19:57:15 2016
 \date		Modified on Mon Sep 19 19:57:15 2016
 \author	frankie
\*//*-@@file@@----------------------------------------------------------------*/

#ifndef __XOLEHLP__H__
#define __XOLEHLP__H__
#if __POCC__ >= 500
#pragma once
#endif
#define EXPORTAPI __declspec( dllexport ) HRESULT
#define OLE_TM_CONFIG_VERSION_1     ((DWORD)1)
#define OLE_TM_CONFIG_VERSION_2     ((DWORD)2)
typedef enum _APPLICATIONTYPE
{
    LOCAL_APPLICATIONTYPE,
    CLUSTERRESOURCE_APPLICATIONTYPE
} APPLICATIONTYPE;
#define OLE_TM_FLAG_NONE						((DWORD)0x00000000)
#define OLE_TM_FLAG_NODEMANDSTART				((DWORD)0x00000001)
#define OLE_TM_FLAG_NOAGILERECOVERY				((DWORD)0x00000002)
#define OLE_TM_FLAG_QUERY_SERVICE_LOCKSTATUS	((DWORD)0x80000000)
#define OLE_TM_FLAG_INTERNAL_TO_TM				((DWORD)0x40000000)
typedef struct _OLE_TM_CONFIG_PARAMS_V1
{
    DWORD       dwVersion;
    DWORD       dwcConcurrencyHint;
} OLE_TM_CONFIG_PARAMS_V1;
typedef struct _OLE_TM_CONFIG_PARAMS_V2
{
    DWORD           dwVersion;
    DWORD           dwcConcurrencyHint;
    APPLICATIONTYPE applicationType;
    GUID            clusterResourceId;
} OLE_TM_CONFIG_PARAMS_V2;
EXPORTAPI __cdecl DtcGetTransactionManager(LPSTR i_pszHost, LPSTR i_pszTmName, REFIID i_riid, DWORD i_dwReserved1, WORD i_wcbReserved2, void *i_pvReserved2, void **o_ppvObject);
extern HRESULT __cdecl DtcGetTransactionManagerC(LPSTR i_pszHost, LPSTR i_pszTmName, REFIID i_riid, DWORD i_dwReserved1, WORD i_wcbReserved2, void *i_pvReserved2, void **o_ppvObject);
extern EXPORTAPI __cdecl DtcGetTransactionManagerExA(LPSTR i_pszHost, LPSTR i_pszTmName, REFIID i_riid, DWORD i_grfOptions, void *i_pvConfigParams, void **o_ppvObject);
extern EXPORTAPI __cdecl DtcGetTransactionManagerExW(LPWSTR i_pwszHost, LPWSTR i_pwszTmName, REFIID i_riid, DWORD i_grfOptions, void *i_pvConfigParams, void **o_ppvObject);
#ifdef UNICODE
#define DtcGetTransactionManagerEx      DtcGetTransactionManagerExW
#else
#define DtcGetTransactionManagerEx      DtcGetTransactionManagerExA
#endif
#ifndef EXTERN_GUID
#define EXTERN_GUID(g,l1,s1,s2,c1,c2,c3,c4,c5,c6,c7,c8) DEFINE_GUID(g,l1,s1,s2,c1,c2,c3,c4,c5,c6,c7,c8)
#endif
EXTERN_GUID(CLSID_MSDtcTransactionManager, 0x5b18ab61, 0x91d, 0x11d1, 0x97, 0xdf, 0x0, 0xc0, 0x4f, 0xb9, 0x61, 0x8a);
EXTERN_GUID(CLSID_MSDtcTransaction, 0x39f8d76b, 0x928, 0x11d1, 0x97, 0xdf, 0x0, 0xc0, 0x4f, 0xb9, 0x61, 0x8a);
#endif

/*+@@file@@----------------------------------------------------------------*//*!
 \file		slpublic.h
 \par Description 
            Extension and update of headers for PellesC compiler suite.
 \par Project: 
            PellesC Headers extension
 \date		Created  on Fri Sep 16 23:52:30 2016
 \date		Modified on Fri Sep 16 23:52:30 2016
 \author	frankie
\*//*-@@file@@----------------------------------------------------------------*/

#ifndef _SLPUBLIC_H_
#define _SLPUBLIC_H_
#if __POCC__ >= 500
#pragma once
#endif
#if defined(SPP_CODE_PROJECT_MARKER) || defined(SPP_CODE_PROJECT_MARKER_SECURE)
#if !defined(SPP_PUBLISHING_INCLUDED_FROM_TRAMPOLINE) && !defined(SPP_PUBLISHING_USE_FORCE_OFFICIAL)
#error this header file cannot be included directly from SPP projects; use sppinc_* prefix instead.
#endif
#endif
#define SLFreeMemory(p) LocalFree(p)
#define SLWGAFreeMemory(p) LocalFree(p)
typedef GUID SLID;
typedef enum _tagSLDATATYPE
{
    SL_DATA_NONE        = REG_NONE,
    SL_DATA_SZ          = REG_SZ,
    SL_DATA_DWORD       = REG_DWORD,
    SL_DATA_BINARY      = REG_BINARY,
    SL_DATA_MULTI_SZ    = REG_MULTI_SZ,
    SL_DATA_SUM         = 100,
} SLDATATYPE;
typedef enum _SL_GENUINE_STATE
{
    SL_GEN_STATE_IS_GENUINE         = 0,
    SL_GEN_STATE_INVALID_LICENSE,
    SL_GEN_STATE_TAMPERED,
    SL_GEN_STATE_LAST, 
} SL_GENUINE_STATE;
typedef struct _tagSL_NONGENUINE_UI_OPTIONS
{
    DWORD                       cbSize;
    CONST SLID*                 pComponentId;
    HRESULT                     hResultUI;
} SL_NONGENUINE_UI_OPTIONS;
#define SL_PROP_BRT_DATA                                    L"SL_BRT_DATA"
#define SL_PROP_BRT_COMMIT                                  L"SL_BRT_COMMIT"
#define SL_PROP_GENUINE_RESULT                              L"SL_GENUINE_RESULT"
#define SL_PROP_NONGENUINE_GRACE_FLAG                       L"SL_NONGENUINE_GRACE_FLAG"
#define SL_POLICY_EVALUATION_MODE_ENABLED                   L"Security-SPP-EvaluationModeEnabled"
HRESULT WINAPI SLGetWindowsInformation(PCWSTR pwszValueName, SLDATATYPE * peDataType, UINT * pcbValue, PBYTE * ppbValue);
HRESULT WINAPI SLGetWindowsInformationDWORD(PCWSTR pwszValueName, DWORD * pdwValue);
HRESULT WINAPI SLIsGenuineLocal(CONST SLID * pAppId, SL_GENUINE_STATE * pGenuineState, SL_NONGENUINE_UI_OPTIONS * pUIOptions);
HRESULT WINAPI SLIsGenuineLocalEx(CONST SLID * pAppId, CONST SLID * pSkuId, SL_GENUINE_STATE * pGenuineState);
HRESULT WINAPI SLAcquireGenuineTicket(VOID ** ppTicketBlob, UINT * pcbTicketBlob, PCWSTR pwszTemplateId, PCWSTR pwszServerUrl, PCWSTR pwszClientToken);
HRESULT WINAPI SLSetGenuineInformation(CONST SLID * pAppId, PCWSTR pwszValueName, SLDATATYPE eDataType, UINT cbValue, CONST BYTE * pbValue);
HRESULT WINAPI SLGetGenuineInformation(CONST SLID * pAppId, PCWSTR pwszValueName, SLDATATYPE * peDataType, UINT * pcbValue, BYTE ** ppbValue);
#endif

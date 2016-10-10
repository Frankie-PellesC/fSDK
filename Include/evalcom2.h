/*+@@file@@----------------------------------------------------------------*//*!
 \file		evalcom2.h
 \par Description 
            Extension and update of headers for PellesC compiler suite.
 \par Project: 
            PellesC Headers extension
 \date		Created  on Sat Jul  9 20:54:30 2016
 \date		Modified on Sat Jul  9 20:54:30 2016
 \author	frankie
\*//*-@@file@@----------------------------------------------------------------*/

#ifndef __evalcom2_h__
#define __evalcom2_h__
#if __POCC__ >= 500
#pragma once
#endif
#include <objbase.h>
typedef enum RESULTTYPES	
{
	ieUnknown = 0,
	ieError,
	ieWarning,
	ieInfo,
} RESULTTYPES;
typedef enum STATUSTYPES
{
	ieStatusGetCUB,
	ieStatusICECount,
	ieStatusMerge,
	ieStatusSummaryInfo,
	ieStatusCreateEngine,
	ieStatusStarting,
	ieStatusRunICE,
	ieStatusShutdown,
	ieStatusSuccess,
	ieStatusFail,
	ieStatusCancel
} STATUSTYPES;
typedef BOOL (WINAPI* LPDISPLAYVAL)(LPVOID pContext, RESULTTYPES uiType, LPCWSTR szwVal, LPCWSTR szwDescription, LPCWSTR szwLocation);
typedef BOOL (WINAPI* LPEVALCOMCALLBACK)(STATUSTYPES iStatus, LPCWSTR szData, LPVOID pContext);
typedef interface IValidate IValidate;
typedef struct IValidateVtbl
{
    BEGIN_INTERFACE
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(IValidate*,REFIID,void**);
    ULONG (STDMETHODCALLTYPE *AddRef)(IValidate*);
    ULONG (STDMETHODCALLTYPE *Release)(IValidate*);
	HRESULT (STDMETHODCALLTYPE *OpenDatabase)(IValidate *this, LPCOLESTR szDatabase);
	HRESULT (STDMETHODCALLTYPE *OpenCUB)(IValidate *this, LPCOLESTR szCUBFile);
	HRESULT (STDMETHODCALLTYPE *CloseDatabase)(IValidate *this);
	HRESULT (STDMETHODCALLTYPE *CloseCUB)(IValidate *this);
	HRESULT (STDMETHODCALLTYPE *SetDisplay)(IValidate *this, LPDISPLAYVAL pDisplayFunction, LPVOID pContext);
	HRESULT (STDMETHODCALLTYPE *SetStatus)(IValidate *this, LPEVALCOMCALLBACK pStatusFunction, LPVOID pContext);
	HRESULT (STDMETHODCALLTYPE *Validate)(IValidate *this, const WCHAR *wzICEs);
    END_INTERFACE
} IValidateVtbl;
interface IValidate
{
    CONST_VTBL struct IValidateVtbl *lpVtbl;
};

DEFINE_GUID(CLSID_EvalCom2, 0x6e5e1910, 0x8053, 0x4660, 0xb7, 0x95, 0x6b, 0x61, 0x2e, 0x29, 0xbc, 0x58);
DEFINE_GUID(IID_IValidate, 0xe482e5c6, 0xe31e, 0x4143, 0xa2, 0xe6, 0xdb, 0xc3, 0xd8, 0xe4, 0xb8, 0xd3);
#endif

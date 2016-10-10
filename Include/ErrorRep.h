/*+@@file@@----------------------------------------------------------------*//*!
 \file		ErrorRep.h
 \par Description 
            Extension and update of headers for PellesC compiler suite.
 \par Project: 
            PellesC Headers extension
 \date		Created  on Sat Jul  9 20:35:24 2016
 \date		Modified on Sat Jul  9 20:35:24 2016
 \author	frankie
\*//*-@@file@@----------------------------------------------------------------*/
	
#ifndef __ERRORREP_H__
#define __ERRORREP_H__
#if __POCC__ >= 500
#pragma once
#endif
typedef enum tagEFaultRepRetVal
{
    frrvOk = 0,
    frrvOkManifest,
    frrvOkQueued,
    frrvErr,
    frrvErrNoDW,
    frrvErrTimeout,
    frrvLaunchDebugger,
    frrvOkHeadless,
    frrvErrAnotherInstance
} EFaultRepRetVal;
EFaultRepRetVal APIENTRY ReportFault(LPEXCEPTION_POINTERS pep, DWORD dwOpt);
BOOL APIENTRY AddERExcludedApplicationA(LPCSTR szApplication);
BOOL APIENTRY AddERExcludedApplicationW(LPCWSTR wszApplication);
typedef EFaultRepRetVal(APIENTRY *pfn_REPORTFAULT) (LPEXCEPTION_POINTERS, DWORD);
typedef EFaultRepRetVal(APIENTRY *pfn_ADDEREXCLUDEDAPPLICATIONA) (LPCSTR);
typedef EFaultRepRetVal (APIENTRY *pfn_ADDEREXCLUDEDAPPLICATIONW)(LPCWSTR);
#ifdef UNICODE
#define AddERExcludedApplication AddERExcludedApplicationW
#define pfn_ADDEREXCLUDEDAPPLICATION pfn_ADDEREXCLUDEDAPPLICATIONW
#else
#define AddERExcludedApplication AddERExcludedApplicationA
#define pfn_ADDEREXCLUDEDAPPLICATION pfn_ADDEREXCLUDEDAPPLICATIONA
#endif
HRESULT WINAPI WerReportHang(HWND hwndHungApp, PCWSTR pwzHungApplicationName);
#endif

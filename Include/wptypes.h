/*+@@file@@----------------------------------------------------------------*//*!
 \file		wptypes.h
 \par Description 
            Extension and update of headers for PellesC compiler suite.
 \par Project: 
            PellesC Headers extension
 \date		Created  on Sun Sep  4 15:44:33 2016
 \date		Modified on Sun Sep  4 15:44:33 2016
 \author	frankie
\*//*-@@file@@----------------------------------------------------------------*/

#ifndef __WPTYPES_H__
#define __WPTYPES_H__
#if __POCC__ >= 500
#pragma once
#endif
typedef struct tagWPSITEINFOA
{
	DWORD dwSize;
	DWORD dwFlags;
	LPSTR lpszSiteName;
	LPSTR lpszSiteURL;
} WPSITEINFOA, *LPWPSITEINFOA;
typedef struct tagWPSITEINFOW
{
	DWORD dwSize;
	DWORD dwFlags;
	LPWSTR lpszSiteName;
	LPWSTR lpszSiteURL;
} WPSITEINFOW, *LPWPSITEINFOW;
typedef struct tagWPPROVINFOA
{
	DWORD dwSize;
	DWORD dwFlags;
	DWORD dwPriority;
	LPSTR lpszProviderName;
	LPSTR lpszProviderCLSID;
	LPSTR lpszDllPath;
} WPPROVINFOA, *LPWPPROVINFOA;
typedef struct tagWPPROVINFOW
{
	DWORD dwSize;
	DWORD dwFlags;
	DWORD dwPriority;
	LPWSTR lpszProviderName;
	LPWSTR lpszProviderCLSID;
	LPWSTR lpszDllPath;
} WPPROVINFOW, *LPWPPROVINFOW;
#ifdef UNICODE
#define WPSITEINFO				WPSITEINFOW
#define LPWPSITEINFO			LPWPSITEINFOW
#define WPPROVINFO				WPPROVINFOW
#define LPWPPROVINFO			LPWPPROVINFOW
#else
#define WPSITEINFO				WPSITEINFOA
#define LPWPSITEINFO			LPWPSITEINFOA
#define WPPROVINFO				WPPROVINFOA
#define LPWPPROVINFO			LPWPPROVINFOA
#endif
#endif

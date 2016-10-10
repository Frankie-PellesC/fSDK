/*+@@file@@----------------------------------------------------------------*//*!
 \file		MAPINls.h
 \par Description 
            Extension and update of headers for PellesC compiler suite.
 \par Project: 
            PellesC Headers extension
 \date		Created  on Sun Jul 24 22:30:28 2016
 \date		Modified on Sun Jul 24 22:30:28 2016
 \author	frankie
\*//*-@@file@@----------------------------------------------------------------*/

#ifndef _MAPINLS_H_
#define _MAPINLS_H_
#if __POCC__ >= 500
#pragma once
#endif
#if defined (WIN32) && !defined (_WIN32)
#define _WIN32
#endif
#if !defined(WINAPI)
	#if defined(_WIN32) && (__POCC__ >= 290)
		#define WINAPI				__stdcall
	#elif defined(WIN16)
		#define WINAPI				_far _pascal
	#else
		#define WINAPI				_far _pascal
	#endif
#endif
#if defined(DOS)
#include <string.h>
#endif
#ifndef FAR
#define FAR
#endif
typedef unsigned char				    BYTE;
typedef unsigned short      			WORD;
typedef unsigned long       			DWORD;
typedef unsigned int	 				UINT;
typedef int		 						BOOL;
#ifndef __CHAR_DEFINED__
typedef char							CHAR;
#endif
#ifdef UNICODE
typedef WCHAR							TCHAR;
#else
typedef char							TCHAR;
#endif
#if !defined(_NATIVE_WCHAR_T_DEFINED)
typedef unsigned short WCHAR;
#endif
typedef WCHAR FAR *						LPWSTR;
typedef const WCHAR FAR *				LPCWSTR;
typedef CHAR FAR *						LPSTR;
typedef const CHAR FAR *				LPCSTR;
typedef TCHAR FAR *						LPTSTR;
typedef const TCHAR FAR *				LPCTSTR;
typedef DWORD 							LCID;
typedef const void FAR *				LPCVOID;
#ifndef LPOLESTR
#if !defined (_WIN32)
#define LPOLESTR        LPSTR
#define LPCOLESTR       LPCSTR
#define OLECHAR         char
#define OLESTR(str) 	str
#else
#define LPOLESTR        LPWSTR
#define LPCOLESTR       LPCWSTR
#define OLECHAR         WCHAR
#define OLESTR(str)     L##str
#endif
#endif
#define NORM_IGNORECASE      			0x00000001
#define NORM_IGNORENONSPACE  			0x00000002
#define NORM_IGNORESYMBOLS   			0x00000004
#if defined (_WIN32)
#define NORM_IGNOREKANATYPE				0x00010000
#define NORM_IGNOREWIDTH				0x00020000
#elif defined (WIN16)
#define NORM_IGNOREWIDTH				0x00000008
#define NORM_IGNOREKANATYPE				0x00000040
#endif
#if defined(WIN16)
#define	lstrcpyA						lstrcpy
#define	lstrlenA						lstrlen
#define	lstrcmpA						lstrcmp
#define lstrcmpiA						lstrcmpi
#define	LoadStringA						LoadString
#define IsBadStringPtrA(a1, a2)			IsBadStringPtr(a1, a2)
#define	wvsprintfA						wvsprintf
#define	MessageBoxA						MessageBox
#define GetModuleHandleA				GetModuleHandle
#define CreateWindowA					CreateWindow
#define RegisterClassA					RegisterClass
#define	CharToOemBuff					AnsiToOemBuff
#define	CharToOem						AnsiToOem
#define	CharUpperBuff					AnsiUpperBuff
#define	CharUpper						AnsiUpper
#elif defined(DOS)
#define	IsBadReadPtr(lp, cb)			(FALSE)
#define IsBadWritePtr(lp, cb)			(FALSE)
#define IsBadHugeReadPtr(lp, cb)		(FALSE)
#define IsBadHugeWritePtr(lp, cb)		(FALSE)
#define IsBadCodePtr(lpfn)				(FALSE)
#define IsBadStringPtr(lpsz, cchMax)	(FALSE)
#define IsBadStringPtrA(lpsz, cchMax)	(FALSE)
#if defined(DOS)
#define	lstrcpyA						strcpy
#define	lstrlenA						strlen
#define	lstrcmpA						strcmp
#define lstrcmp							strcmp
#define lstrcmpi						strcmpi
#define lstrcpy							strcpy
#define lstrcat							strcat
#define lstrlen							strlen
#define wsprintf						sprintf
#endif
#endif
#if defined(DOS) || defined(WIN16)
#define __T(x)		x
#define _T(x)		__T(x)
#define TEXT		_T
#endif
#define CP_ACP		0
#define CP_OEMCP	1
LCID	WINAPI	MNLS_GetUserDefaultLCID(void);
UINT	WINAPI	MNLS_GetACP(void);
int		WINAPI	MNLS_CompareStringA(LCID Locale, DWORD dwCmpFlags,
					LPCSTR lpString1, int cchCount1, LPCSTR lpString2,
					int cchCount2);
int		WINAPI	MNLS_CompareStringW(LCID Locale, DWORD dwCmpFlags,
					LPCWSTR lpString1, int cchCount1, LPCWSTR lpString2,
					int cchCount2);
int		WINAPI	MNLS_MultiByteToWideChar(UINT uCodePage, DWORD dwFlags,
					LPCSTR lpMultiByteStr, int cchMultiByte,
					LPWSTR lpWideCharStr, int cchWideChar);
int		WINAPI	MNLS_WideCharToMultiByte(UINT uCodePage, DWORD dwFlags,
					LPCWSTR lpWideCharStr, int cchWideChar,
					LPSTR lpMultiByteStr, int cchMultiByte,
					LPCSTR lpDefaultChar, BOOL FAR *lpfUsedDefaultChar);
int		WINAPI	MNLS_lstrlenW(LPCWSTR lpString);
int		WINAPI	MNLS_lstrcmpW(LPCWSTR lpString1, LPCWSTR lpString2);
LPWSTR	WINAPI	MNLS_lstrcpyW(LPWSTR lpString1, LPCWSTR lpString2);
BOOL	WINAPI	MNLS_IsBadStringPtrW(LPCWSTR lpsz, UINT ucchMax);
#if defined(_WIN32) && !defined(_WINNT) && !defined(_WIN95)
#define _WINNT
#endif
#if !defined(_WINNT) && !defined(_WIN95)
#define GetUserDefaultLCID		MNLS_GetUserDefaultLCID
#define GetACP					MNLS_GetACP
#define MultiByteToWideChar		MNLS_MultiByteToWideChar
#define WideCharToMultiByte		MNLS_WideCharToMultiByte
#define CompareStringA			MNLS_CompareStringA
#endif
#if !defined(MAPI_NOWIDECHAR)
#define lstrlenW				MNLS_lstrlenW
#define lstrcmpW				MNLS_lstrcmpW
#define lstrcpyW				MNLS_lstrcpyW
#define CompareStringW			MNLS_CompareStringW
#if defined(WIN16) || defined(_WINNT) || defined(_WIN95)
#define IsBadStringPtrW			MNLS_IsBadStringPtrW
#else
#define IsBadStringPtrW			(FALSE)
#endif
#endif
#endif

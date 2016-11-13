/*+@@file@@----------------------------------------------------------------*//*!
 \file		shlwapi.h
 \par Description 
            Extension and update of headers for PellesC compiler suite.
            - Fixed <static cast> definition
 \par  Status: 
            
 \par Project: 
            PellesC Headers extension
 \date		Created  on Sun Sep  4 00:17:55 2016
 \date		Modified on Sun Nov 13 21:12:13 2016
 \author	frankie
\*//*-@@file@@----------------------------------------------------------------*/

#ifndef _INC_SHLWAPI
#define _INC_SHLWAPI
#if __POCC__ >= 500
#pragma once
#endif
#ifndef NOSHLWAPI
#include <objbase.h>
#include <shtypes.h>
#ifndef WINSHLWAPI
#if !defined(_SHLWAPI_)
#define LWSTDAPI          extern DECLSPEC_IMPORT HRESULT STDAPICALLTYPE
#define LWSTDAPI_(type)   extern DECLSPEC_IMPORT type STDAPICALLTYPE
#define LWSTDAPIV         extern DECLSPEC_IMPORT HRESULT STDAPIVCALLTYPE
#define LWSTDAPIV_(type)  extern DECLSPEC_IMPORT type STDAPIVCALLTYPE
#else
#define LWSTDAPI          STDAPI
#define LWSTDAPI_(type)   STDAPI_(type)
#define LWSTDAPIV         STDAPIV
#define LWSTDAPIV_(type)  STDAPIV_(type)
#endif
#endif
#ifdef _WIN32
#include <pshpack8.h>
#endif
#if defined(DEPRECATE_SUPPORTED)
#pragma warning(push)
#pragma warning(disable:4995)
#endif
#ifndef __IBindCtx_FWD_DEFINED__
#define __IBindCtx_FWD_DEFINED__
typedef interface IBindCtx IBindCtx;
#endif
#ifndef NO_SHLWAPI_STRFCNS
#ifdef USE_STRICT_CONST
LWSTDAPI_(LPCSTR)    StrChrA(LPCSTR lpStart, WORD wMatch);
LWSTDAPI_(LPCWSTR)   StrChrW(LPCWSTR lpStart, WCHAR wMatch);
LWSTDAPI_(LPCSTR)    StrChrIA(LPCSTR lpStart, WORD wMatch);
LWSTDAPI_(LPCWSTR)   StrChrIW(LPCWSTR lpStart, WCHAR wMatch);
#if (_WIN32_IE >= _WIN32_IE_IE60)
LWSTDAPI_(LPCWSTR)   StrChrNW(LPCWSTR lpStart, WCHAR wMatch, UINT cchMax);
LWSTDAPI_(LPCWSTR)   StrChrNIW(LPCWSTR lpStart, WCHAR wMatch, UINT cchMax);
#endif
#else
LWSTDAPI_(LPSTR)    StrChrA(LPCSTR lpStart, WORD wMatch);
LWSTDAPI_(LPWSTR)   StrChrW(LPCWSTR lpStart, WCHAR wMatch);
LWSTDAPI_(LPSTR)    StrChrIA(LPCSTR lpStart, WORD wMatch);
LWSTDAPI_(LPWSTR)   StrChrIW(LPCWSTR lpStart, WCHAR wMatch);
#if (_WIN32_IE >= _WIN32_IE_IE60)
LWSTDAPI_(LPWSTR)   StrChrNW(LPCWSTR lpStart, WCHAR wMatch, UINT cchMax);
LWSTDAPI_(LPWSTR)   StrChrNIW(LPCWSTR lpStart, WCHAR wMatch, UINT cchMax);
#endif
#endif
LWSTDAPI_(int)      StrCmpNA(LPCSTR lpStr1, LPCSTR lpStr2, int nChar);
LWSTDAPI_(int)      StrCmpNW(LPCWSTR lpStr1, LPCWSTR lpStr2, int nChar);
LWSTDAPI_(int)      StrCmpNIA(LPCSTR lpStr1, LPCSTR lpStr2, int nChar);
LWSTDAPI_(int)      StrCmpNIW(LPCWSTR lpStr1, LPCWSTR lpStr2, int nChar);
LWSTDAPI_(int)      StrCSpnA(LPCSTR lpStr, LPCSTR lpSet);
LWSTDAPI_(int)      StrCSpnW(LPCWSTR lpStr, LPCWSTR lpSet);
LWSTDAPI_(int)      StrCSpnIA(LPCSTR lpStr, LPCSTR lpSet);
LWSTDAPI_(int)      StrCSpnIW(LPCWSTR lpStr, LPCWSTR lpSet);
LWSTDAPI_(LPSTR)    StrDupA(LPCSTR lpSrch);
LWSTDAPI_(LPWSTR)   StrDupW(LPCWSTR lpSrch);
enum tagSFBS_FLAGS
{
    SFBS_FLAGS_ROUND_TO_NEAREST_DISPLAYED_DIGIT     = 0x0001,
    SFBS_FLAGS_TRUNCATE_UNDISPLAYED_DECIMAL_DIGITS  = 0x0002,
};
typedef int SFBS_FLAGS;
LWSTDAPI            StrFormatByteSizeEx(ULONGLONG ull, SFBS_FLAGS flags, LPWSTR pszBuf, UINT cchBuf);
LWSTDAPI_(LPSTR)    StrFormatByteSizeA(DWORD dw, LPSTR pszBuf, UINT cchBuf);
LWSTDAPI_(LPSTR)    StrFormatByteSize64A(LONGLONG qdw, LPSTR pszBuf, UINT cchBuf);
LWSTDAPI_(LPWSTR)   StrFormatByteSizeW(LONGLONG qdw, LPWSTR pszBuf, UINT cchBuf);
LWSTDAPI_(LPWSTR)   StrFormatKBSizeW(LONGLONG qdw, LPWSTR pszBuf, UINT cchBuf);
LWSTDAPI_(LPSTR)    StrFormatKBSizeA(LONGLONG qdw, LPSTR pszBuf, UINT cchBuf);
LWSTDAPI_(int)      StrFromTimeIntervalA(LPSTR pszOut, UINT cchMax, DWORD dwTimeMS, int digits);
LWSTDAPI_(int)      StrFromTimeIntervalW(LPWSTR pwszOut, UINT cchMax, DWORD dwTimeMS, int digits);
LWSTDAPI_(BOOL)     StrIsIntlEqualA(BOOL fCaseSens, LPCSTR lpString1, LPCSTR lpString2, int nChar);
LWSTDAPI_(BOOL)     StrIsIntlEqualW(BOOL fCaseSens, LPCWSTR lpString1, LPCWSTR lpString2, int nChar);
LWSTDAPI_(LPSTR)    StrNCatA(LPSTR psz1, LPCSTR psz2, int cchMax);
LWSTDAPI_(LPWSTR)   StrNCatW(LPWSTR psz1, LPCWSTR psz2, int cchMax);
#ifdef USE_STRICT_CONST
LWSTDAPI_(LPCSTR)    StrPBrkA(LPCSTR psz, LPCSTR pszSet);
LWSTDAPI_(LPCWSTR)   StrPBrkW(LPCWSTR psz, LPCWSTR pszSet);
LWSTDAPI_(LPCSTR)    StrRChrA(LPCSTR lpStart, LPCSTR lpEnd, WORD wMatch);
LWSTDAPI_(LPCWSTR)   StrRChrW(LPCWSTR lpStart, LPCWSTR lpEnd, WCHAR wMatch);
LWSTDAPI_(LPCSTR)    StrRChrIA(LPCSTR lpStart, LPCSTR lpEnd, WORD wMatch);
LWSTDAPI_(LPCWSTR)   StrRChrIW(LPCWSTR lpStart, LPCWSTR lpEnd, WCHAR wMatch);
LWSTDAPI_(LPCSTR)    StrRStrIA(LPCSTR lpSource, LPCSTR lpLast, LPCSTR lpSrch);
LWSTDAPI_(LPCWSTR)   StrRStrIW(LPCWSTR lpSource, LPCWSTR lpLast, LPCWSTR lpSrch);
#else
LWSTDAPI_(LPSTR)    StrPBrkA(LPCSTR psz, LPCSTR pszSet);
LWSTDAPI_(LPWSTR)   StrPBrkW(LPCWSTR psz, LPCWSTR pszSet);
LWSTDAPI_(LPSTR)    StrRChrA(LPCSTR lpStart, LPCSTR lpEnd, WORD wMatch);
LWSTDAPI_(LPWSTR)   StrRChrW(LPCWSTR lpStart, LPCWSTR lpEnd, WCHAR wMatch);
LWSTDAPI_(LPSTR)    StrRChrIA(LPCSTR lpStart, LPCSTR lpEnd, WORD wMatch);
LWSTDAPI_(LPWSTR)   StrRChrIW(LPCWSTR lpStart, LPCWSTR lpEnd, WCHAR wMatch);
LWSTDAPI_(LPSTR)    StrRStrIA(LPCSTR lpSource, LPCSTR lpLast, LPCSTR lpSrch);
LWSTDAPI_(LPWSTR)   StrRStrIW(LPCWSTR lpSource, LPCWSTR lpLast, LPCWSTR lpSrch);
#endif
LWSTDAPI_(int)      StrSpnA(LPCSTR psz, LPCSTR pszSet);
LWSTDAPI_(int)      StrSpnW(LPCWSTR psz, LPCWSTR pszSet);
#ifdef USE_STRICT_CONST
LWSTDAPI_(LPCSTR)    StrStrA(LPCSTR lpFirst, LPCSTR lpSrch);
LWSTDAPI_(LPCWSTR)   StrStrW(LPCWSTR lpFirst, LPCWSTR lpSrch);
LWSTDAPI_(LPCSTR)    StrStrIA(LPCSTR lpFirst, LPCSTR lpSrch);
LWSTDAPI_(LPCWSTR)   StrStrIW(LPCWSTR lpFirst, LPCWSTR lpSrch);
#if (_WIN32_IE >= _WIN32_IE_IE6)
LWSTDAPI_(LPCWSTR)   StrStrNW(LPCWSTR lpFirst, LPCWSTR lpSrch, UINT cchMax);
LWSTDAPI_(LPCWSTR)   StrStrNIW(LPCWSTR lpFirst, LPCWSTR lpSrch, UINT cchMax);
#endif
#else
LWSTDAPI_(LPSTR)    StrStrA(LPCSTR lpFirst, LPCSTR lpSrch);
LWSTDAPI_(LPWSTR)   StrStrW(LPCWSTR lpFirst, LPCWSTR lpSrch);
LWSTDAPI_(LPSTR)    StrStrIA(LPCSTR lpFirst, LPCSTR lpSrch);
LWSTDAPI_(LPWSTR)   StrStrIW(LPCWSTR lpFirst, LPCWSTR lpSrch);
#if (_WIN32_IE >= _WIN32_IE_IE60)
LWSTDAPI_(LPWSTR)   StrStrNW(LPCWSTR lpFirst, LPCWSTR lpSrch, UINT cchMax);
LWSTDAPI_(LPWSTR)   StrStrNIW(LPCWSTR lpFirst, LPCWSTR lpSrch, UINT cchMax);
#endif
#endif
#define STIF_DEFAULT        0x00000000L
#define STIF_SUPPORT_HEX    0x00000001L
typedef int STIF_FLAGS;
LWSTDAPI_(int)      StrToIntA(LPCSTR lpSrc);
LWSTDAPI_(int)      StrToIntW(LPCWSTR lpSrc);
LWSTDAPI_(BOOL)     StrToIntExA(LPCSTR pszString, STIF_FLAGS dwFlags, int * piRet);
LWSTDAPI_(BOOL)     StrToIntExW(LPCWSTR pszString, STIF_FLAGS dwFlags, int * piRet);
#if (_WIN32_IE >= _WIN32_IE_IE60)
LWSTDAPI_(BOOL)     StrToInt64ExA(LPCSTR pszString, STIF_FLAGS dwFlags, LONGLONG * pllRet);
LWSTDAPI_(BOOL)     StrToInt64ExW(LPCWSTR pszString, STIF_FLAGS dwFlags, LONGLONG * pllRet);
#endif
LWSTDAPI_(BOOL)     StrTrimA(LPSTR psz, LPCSTR pszTrimChars);
LWSTDAPI_(BOOL)     StrTrimW(LPWSTR psz, LPCWSTR pszTrimChars);
LWSTDAPI_(LPWSTR)   StrCatW(LPWSTR psz1, LPCWSTR psz2);
LWSTDAPI_(int)      StrCmpW(LPCWSTR psz1, LPCWSTR psz2);
LWSTDAPI_(int)      StrCmpIW(LPCWSTR psz1, LPCWSTR psz2);
LWSTDAPI_(LPWSTR)   StrCpyW(LPWSTR psz1, LPCWSTR psz2);
LWSTDAPI_(LPWSTR)   StrCpyNW(LPWSTR psz1, LPCWSTR psz2, int cchMax);
LWSTDAPI_(LPWSTR)   StrCatBuffW(LPWSTR pszDest, LPCWSTR pszSrc, int cchDestBuffSize);
LWSTDAPI_(LPSTR)    StrCatBuffA(LPSTR pszDest, LPCSTR pszSrc, int cchDestBuffSize);
LWSTDAPI_(BOOL)     ChrCmpIA(WORD w1, WORD w2);
LWSTDAPI_(BOOL)     ChrCmpIW(WCHAR w1, WCHAR w2);
LWSTDAPI_(int)      wvnsprintfA(LPSTR pszDest, int cchDest, LPCSTR pszFmt, va_list arglist);
LWSTDAPI_(int)      wvnsprintfW(LPWSTR pszDest, int cchDest, LPCWSTR pszFmt, va_list arglist);
LWSTDAPIV_(int)     wnsprintfA(LPSTR pszDest, int cchDest, LPCSTR pszFmt, ...);
LWSTDAPIV_(int)     wnsprintfW(LPWSTR pszDest, int cchDest, LPCWSTR pszFmt, ...);
#define StrIntlEqNA( s1, s2, nChar) StrIsIntlEqualA( TRUE, s1, s2, nChar)
#define StrIntlEqNW( s1, s2, nChar) StrIsIntlEqualW( TRUE, s1, s2, nChar)
#define StrIntlEqNIA(s1, s2, nChar) StrIsIntlEqualA(FALSE, s1, s2, nChar)
#define StrIntlEqNIW(s1, s2, nChar) StrIsIntlEqualW(FALSE, s1, s2, nChar)
LWSTDAPI StrRetToStrA(STRRET *pstr, PCUITEMID_CHILD pidl, LPSTR *ppsz);
LWSTDAPI StrRetToStrW(STRRET *pstr, PCUITEMID_CHILD pidl, LPWSTR *ppsz);
#ifdef UNICODE
#define StrRetToStr  StrRetToStrW
#else
#define StrRetToStr  StrRetToStrA
#endif
LWSTDAPI StrRetToBufA(STRRET *pstr, PCUITEMID_CHILD pidl, LPSTR pszBuf, UINT cchBuf);
LWSTDAPI StrRetToBufW(STRRET *pstr, PCUITEMID_CHILD pidl, LPWSTR pszBuf, UINT cchBuf);
#ifdef UNICODE
#define StrRetToBuf  StrRetToBufW
#else
#define StrRetToBuf  StrRetToBufA
#endif
LWSTDAPI SHStrDupA(LPCSTR psz, LPWSTR *ppwsz);
LWSTDAPI SHStrDupW(LPCWSTR psz, LPWSTR *ppwsz);
#ifdef UNICODE
#define SHStrDup  SHStrDupW
#else
#define SHStrDup  SHStrDupA
#endif

#if (_WIN32_IE >= _WIN32_IE_IE55)
LWSTDAPI_(int) StrCmpLogicalW(LPCWSTR psz1, LPCWSTR psz2);
LWSTDAPI_(DWORD) StrCatChainW(LPWSTR pszDst, DWORD cchDst, DWORD ichAt, LPCWSTR pszSrc);
LWSTDAPI StrRetToBSTR(STRRET *pstr, PCUITEMID_CHILD pidl, BSTR *pbstr);
LWSTDAPI SHLoadIndirectString(LPCWSTR pszSource, LPWSTR pszOutBuf, UINT cchOutBuf, void **ppvReserved);
#endif
#if (_WIN32_IE >= _WIN32_IE_IE60SP2)
LWSTDAPI_(BOOL) IsCharSpaceA(CHAR wch);
LWSTDAPI_(BOOL) IsCharSpaceW(WCHAR wch);
#ifdef UNICODE
#define IsCharSpace  IsCharSpaceW
#else
#define IsCharSpace  IsCharSpaceA
#endif
LWSTDAPI_(int)  StrCmpCA(LPCSTR pszStr1, LPCSTR pszStr2);
LWSTDAPI_(int)  StrCmpCW(LPCWSTR pszStr1, LPCWSTR pszStr2);
#ifdef UNICODE
#define StrCmpC  StrCmpCW
#else
#define StrCmpC  StrCmpCA
#endif
LWSTDAPI_(int)  StrCmpICA(LPCSTR pszStr1, LPCSTR pszStr2);
LWSTDAPI_(int)  StrCmpICW(LPCWSTR pszStr1, LPCWSTR pszStr2);
#ifdef UNICODE
#define StrCmpIC  StrCmpICW
#else
#define StrCmpIC  StrCmpICA
#endif
#endif
#ifdef UNICODE
#define StrChr                  StrChrW
#define StrRChr                 StrRChrW
#define StrChrI                 StrChrIW
#define StrRChrI                StrRChrIW
#define StrCmpN                 StrCmpNW
#define StrCmpNI                StrCmpNIW
#define StrStr                  StrStrW
#define StrStrI                 StrStrIW
#define StrDup                  StrDupW
#define StrRStrI                StrRStrIW
#define StrCSpn                 StrCSpnW
#define StrCSpnI                StrCSpnIW
#define StrSpn                  StrSpnW
#define StrToInt                StrToIntW
#define StrPBrk                 StrPBrkW
#define StrToIntEx              StrToIntExW
#if (_WIN32_IE >= 0x0600)
#define StrToInt64Ex            StrToInt64ExW
#endif
#define StrFromTimeInterval     StrFromTimeIntervalW
#define StrIntlEqN              StrIntlEqNW
#define StrIntlEqNI             StrIntlEqNIW
#define StrFormatByteSize       StrFormatByteSizeW
#define StrFormatByteSize64     StrFormatByteSizeW
#define StrFormatKBSize         StrFormatKBSizeW
#define StrNCat                 StrNCatW
#define StrTrim                 StrTrimW
#define StrCatBuff              StrCatBuffW
#define ChrCmpI                 ChrCmpIW
#define wvnsprintf              wvnsprintfW
#define wnsprintf               wnsprintfW
#define StrIsIntlEqual          StrIsIntlEqualW
#else
#define StrChr                  StrChrA
#define StrRChr                 StrRChrA
#define StrChrI                 StrChrIA
#define StrRChrI                StrRChrIA
#define StrCmpN                 StrCmpNA
#define StrCmpNI                StrCmpNIA
#define StrStr                  StrStrA
#define StrStrI                 StrStrIA
#define StrDup                  StrDupA
#define StrRStrI                StrRStrIA
#define StrCSpn                 StrCSpnA
#define StrCSpnI                StrCSpnIA
#define StrSpn                  StrSpnA
#define StrToInt                StrToIntA
#define StrPBrk                 StrPBrkA
#define StrToIntEx              StrToIntExA
#if (_WIN32_IE >= 0x0600)
#define StrToInt64Ex            StrToInt64ExA
#endif
#define StrFromTimeInterval     StrFromTimeIntervalA
#define StrIntlEqN              StrIntlEqNA
#define StrIntlEqNI             StrIntlEqNIA
#define StrFormatByteSize       StrFormatByteSizeA
#define StrFormatByteSize64     StrFormatByteSize64A
#define StrFormatKBSize         StrFormatKBSizeA
#define StrNCat                 StrNCatA
#define StrTrim                 StrTrimA
#define StrCatBuff              StrCatBuffA
#define ChrCmpI                 ChrCmpIA
#define wvnsprintf              wvnsprintfA
#define wnsprintf               wnsprintfA
#define StrIsIntlEqual          StrIsIntlEqualA
#endif
#if (_WIN32_IE >= _WIN32_IE_IE50)
LWSTDAPI_(int)  StrCmpNCA(LPCSTR lpStr1, LPCSTR lpStr2, int nChar);
LWSTDAPI_(int)  StrCmpNCW(LPCWSTR lpStr1, LPCWSTR lpStr2, int nChar);
#ifdef UNICODE
#define StrCmpNC  StrCmpNCW
#else
#define StrCmpNC  StrCmpNCA
#endif
LWSTDAPI_(int)  StrCmpNICA(LPCSTR lpStr1, LPCSTR lpStr2, int nChar);
LWSTDAPI_(int)  StrCmpNICW(LPCWSTR lpStr1, LPCWSTR lpStr2, int nChar);
#ifdef UNICODE
#define StrCmpNIC  StrCmpNICW
#else
#define StrCmpNIC  StrCmpNICA
#endif
#endif
LWSTDAPI_(BOOL)     IntlStrEqWorkerA(BOOL fCaseSens, LPCSTR lpString1, LPCSTR lpString2, int nChar);
LWSTDAPI_(BOOL)     IntlStrEqWorkerW(BOOL fCaseSens, LPCWSTR lpString1, LPCWSTR lpString2, int nChar);
#define IntlStrEqNA( s1, s2, nChar) IntlStrEqWorkerA( TRUE, s1, s2, nChar)
#define IntlStrEqNW( s1, s2, nChar) IntlStrEqWorkerW( TRUE, s1, s2, nChar)
#define IntlStrEqNIA(s1, s2, nChar) IntlStrEqWorkerA(FALSE, s1, s2, nChar)
#define IntlStrEqNIW(s1, s2, nChar) IntlStrEqWorkerW(FALSE, s1, s2, nChar)
#ifdef UNICODE
#define IntlStrEqN              IntlStrEqNW
#define IntlStrEqNI             IntlStrEqNIW
#else
#define IntlStrEqN              IntlStrEqNA
#define IntlStrEqNI             IntlStrEqNIA
#endif
#define SZ_CONTENTTYPE_HTMLA       "text/html"
#define SZ_CONTENTTYPE_HTMLW       L"text/html"
#define SZ_CONTENTTYPE_CDFA        "application/x-cdf"
#define SZ_CONTENTTYPE_CDFW        L"application/x-cdf"
#ifdef UNICODE
#define SZ_CONTENTTYPE_HTML     SZ_CONTENTTYPE_HTMLW
#define SZ_CONTENTTYPE_CDF      SZ_CONTENTTYPE_CDFW
#else
#define SZ_CONTENTTYPE_HTML     SZ_CONTENTTYPE_HTMLA
#define SZ_CONTENTTYPE_CDF      SZ_CONTENTTYPE_CDFA
#endif
#define PathIsHTMLFileA(pszPath)     PathIsContentTypeA(pszPath, SZ_CONTENTTYPE_HTMLA)
#define PathIsHTMLFileW(pszPath)     PathIsContentTypeW(pszPath, SZ_CONTENTTYPE_HTMLW)
#define StrCatA                 lstrcatA
#define StrCmpA                 lstrcmpA
#define StrCmpIA                lstrcmpiA
#define StrCpyA                 lstrcpyA
#define StrCpyNA                lstrcpynA
#define StrToLong               StrToInt
#define StrNCmp                 StrCmpN
#define StrNCmpI                StrCmpNI
#define StrNCpy                 StrCpyN
#define StrCatN                 StrNCat
#ifdef UNICODE
#define StrCat                  StrCatW
#define StrCmp                  StrCmpW
#define StrCmpI                 StrCmpIW
#define StrCpy                  StrCpyW
#define StrCpyN                 StrCpyNW
#define StrCatBuff              StrCatBuffW
#else
#define StrCat                  lstrcatA
#define StrCmp                  lstrcmpA
#define StrCmpI                 lstrcmpiA
#define StrCpy                  lstrcpyA
#define StrCpyN                 lstrcpynA
#define StrCatBuff              StrCatBuffA
#endif
#endif
#ifndef NO_SHLWAPI_PATH
LWSTDAPI_(LPSTR)  PathAddBackslashA(LPSTR pszPath);
LWSTDAPI_(LPWSTR)  PathAddBackslashW(LPWSTR pszPath);
#ifdef UNICODE
#define PathAddBackslash  PathAddBackslashW
#else
#define PathAddBackslash  PathAddBackslashA
#endif
LWSTDAPI_(BOOL)     PathAddExtensionA(LPSTR pszPath, LPCSTR pszExt);
LWSTDAPI_(BOOL)     PathAddExtensionW(LPWSTR pszPath, LPCWSTR pszExt);
#ifdef UNICODE
#define PathAddExtension  PathAddExtensionW
#else
#define PathAddExtension  PathAddExtensionA
#endif
LWSTDAPI_(BOOL)     PathAppendA(LPSTR pszPath, LPCSTR pMore);
LWSTDAPI_(BOOL)     PathAppendW(LPWSTR pszPath, LPCWSTR pMore);
LWSTDAPI_(LPSTR)  PathBuildRootA(LPSTR pszRoot, int iDrive);
LWSTDAPI_(LPWSTR)  PathBuildRootW(LPWSTR pszRoot, int iDrive);
#ifdef UNICODE
#define PathBuildRoot  PathBuildRootW
#else
#define PathBuildRoot  PathBuildRootA
#endif
LWSTDAPI_(BOOL)     PathCanonicalizeA(LPSTR pszBuf, LPCSTR pszPath);
LWSTDAPI_(BOOL)     PathCanonicalizeW(LPWSTR pszBuf, LPCWSTR pszPath);
LWSTDAPI_(LPSTR)  PathCombineA(LPSTR pszDest, LPCSTR pszDir, LPCSTR pszFile);
LWSTDAPI_(LPWSTR)  PathCombineW(LPWSTR pszDest, LPCWSTR pszDir, LPCWSTR pszFile);
#ifdef UNICODE
#define PathCombine  PathCombineW
#else
#define PathCombine  PathCombineA
#endif
LWSTDAPI_(BOOL)     PathCompactPathA(HDC hDC, LPSTR pszPath, UINT dx);
LWSTDAPI_(BOOL)     PathCompactPathW(HDC hDC, LPWSTR pszPath, UINT dx);
LWSTDAPI_(BOOL)     PathCompactPathExA(LPSTR pszOut, LPCSTR pszSrc, UINT cchMax, DWORD dwFlags);
LWSTDAPI_(BOOL)     PathCompactPathExW(LPWSTR pszOut, LPCWSTR pszSrc, UINT cchMax, DWORD dwFlags);
LWSTDAPI_(int)      PathCommonPrefixA(LPCSTR pszFile1, LPCSTR pszFile2, LPSTR achPath);
LWSTDAPI_(int)      PathCommonPrefixW(LPCWSTR pszFile1, LPCWSTR pszFile2, LPWSTR achPath);
LWSTDAPI_(BOOL)     PathFileExistsA(LPCSTR pszPath);
LWSTDAPI_(BOOL)     PathFileExistsW(LPCWSTR pszPath);
#ifdef UNICODE
#define PathFileExists  PathFileExistsW
#else
#define PathFileExists  PathFileExistsA
#endif
#ifdef USE_STRICT_CONST
LWSTDAPI_(LPCSTR)  PathFindExtensionA(LPCSTR pszPath);
LWSTDAPI_(LPCWSTR)  PathFindExtensionW(LPCWSTR pszPath);
#ifdef UNICODE
#define PathFindExtension  PathFindExtensionW
#else
#define PathFindExtension  PathFindExtensionA
#endif
LWSTDAPI_(LPCSTR)  PathFindFileNameA(LPCSTR pszPath);
LWSTDAPI_(LPCWSTR)  PathFindFileNameW(LPCWSTR pszPath);
#ifdef UNICODE
#define PathFindFileName  PathFindFileNameW
#else
#define PathFindFileName  PathFindFileNameA
#endif
LWSTDAPI_(LPCSTR)  PathFindNextComponentA(LPCSTR pszPath);
LWSTDAPI_(LPCWSTR)  PathFindNextComponentW(LPCWSTR pszPath);
#ifdef UNICODE
#define PathFindNextComponent  PathFindNextComponentW
#else
#define PathFindNextComponent  PathFindNextComponentA
#endif
#else
LWSTDAPI_(LPSTR)  PathFindExtensionA(LPCSTR pszPath);
LWSTDAPI_(LPWSTR)  PathFindExtensionW(LPCWSTR pszPath);
#ifdef UNICODE
#define PathFindExtension  PathFindExtensionW
#else
#define PathFindExtension  PathFindExtensionA
#endif
LWSTDAPI_(LPSTR)  PathFindFileNameA(LPCSTR pszPath);
LWSTDAPI_(LPWSTR)  PathFindFileNameW(LPCWSTR pszPath);
#ifdef UNICODE
#define PathFindFileName  PathFindFileNameW
#else
#define PathFindFileName  PathFindFileNameA
#endif
LWSTDAPI_(LPSTR)  PathFindNextComponentA(LPCSTR pszPath);
LWSTDAPI_(LPWSTR)  PathFindNextComponentW(LPCWSTR pszPath);
#ifdef UNICODE
#define PathFindNextComponent  PathFindNextComponentW
#else
#define PathFindNextComponent  PathFindNextComponentA
#endif
#endif
LWSTDAPI_(BOOL)     PathFindOnPathA(LPSTR pszPath, PZPCSTR ppszOtherDirs);
LWSTDAPI_(BOOL)     PathFindOnPathW(LPWSTR pszPath, PZPCWSTR ppszOtherDirs);
LWSTDAPI_(LPCSTR) PathFindSuffixArrayA(LPCSTR pszPath, const LPCSTR *apszSuffix, int iArraySize);
LWSTDAPI_(LPCWSTR) PathFindSuffixArrayW(LPCWSTR pszPath, const LPCWSTR *apszSuffix, int iArraySize);
#ifdef UNICODE
#define PathFindSuffixArray  PathFindSuffixArrayW
#else
#define PathFindSuffixArray  PathFindSuffixArrayA
#endif
#ifdef USE_STRICT_CONST
LWSTDAPI_(LPCSTR)  PathGetArgsA(LPCSTR pszPath);
LWSTDAPI_(LPCWSTR)  PathGetArgsW(LPCWSTR pszPath);
#ifdef UNICODE
#define PathGetArgs  PathGetArgsW
#else
#define PathGetArgs  PathGetArgsA
#endif
#else
LWSTDAPI_(LPSTR)  PathGetArgsA(LPCSTR pszPath);
LWSTDAPI_(LPWSTR)  PathGetArgsW(LPCWSTR pszPath);
#ifdef UNICODE
#define PathGetArgs  PathGetArgsW
#else
#define PathGetArgs  PathGetArgsA
#endif
#endif
LWSTDAPI_(BOOL)     PathIsLFNFileSpecA(LPCSTR lpName);
LWSTDAPI_(BOOL)     PathIsLFNFileSpecW(LPCWSTR lpName);
#ifdef UNICODE
#define PathIsLFNFileSpec  PathIsLFNFileSpecW
#else
#define PathIsLFNFileSpec  PathIsLFNFileSpecA
#endif
LWSTDAPI_(UINT)     PathGetCharTypeA(UCHAR ch);
LWSTDAPI_(UINT)     PathGetCharTypeW(WCHAR ch);
#define GCT_INVALID             0x0000
#define GCT_LFNCHAR             0x0001
#define GCT_SHORTCHAR           0x0002
#define GCT_WILD                0x0004
#define GCT_SEPARATOR           0x0008
LWSTDAPI_(int)      PathGetDriveNumberA(LPCSTR pszPath);
LWSTDAPI_(int)      PathGetDriveNumberW(LPCWSTR pszPath);
#ifdef UNICODE
#define PathGetDriveNumber  PathGetDriveNumberW
#else
#define PathGetDriveNumber  PathGetDriveNumberA
#endif
LWSTDAPI_(BOOL)     PathIsDirectoryA(LPCSTR pszPath);
LWSTDAPI_(BOOL)     PathIsDirectoryW(LPCWSTR pszPath);
#ifdef UNICODE
#define PathIsDirectory  PathIsDirectoryW
#else
#define PathIsDirectory  PathIsDirectoryA
#endif
LWSTDAPI_(BOOL)     PathIsDirectoryEmptyA(LPCSTR pszPath);
LWSTDAPI_(BOOL)     PathIsDirectoryEmptyW(LPCWSTR pszPath);
#ifdef UNICODE
#define PathIsDirectoryEmpty  PathIsDirectoryEmptyW
#else
#define PathIsDirectoryEmpty  PathIsDirectoryEmptyA
#endif
LWSTDAPI_(BOOL)     PathIsFileSpecA(LPCSTR pszPath);
LWSTDAPI_(BOOL)     PathIsFileSpecW(LPCWSTR pszPath);
#ifdef UNICODE
#define PathIsFileSpec  PathIsFileSpecW
#else
#define PathIsFileSpec  PathIsFileSpecA
#endif
LWSTDAPI_(BOOL)     PathIsPrefixA(LPCSTR pszPrefix, LPCSTR pszPath);
LWSTDAPI_(BOOL)     PathIsPrefixW(LPCWSTR pszPrefix, LPCWSTR pszPath);
#ifdef UNICODE
#define PathIsPrefix  PathIsPrefixW
#else
#define PathIsPrefix  PathIsPrefixA
#endif
LWSTDAPI_(BOOL)     PathIsRelativeA(LPCSTR pszPath);
LWSTDAPI_(BOOL)     PathIsRelativeW(LPCWSTR pszPath);
#ifdef UNICODE
#define PathIsRelative  PathIsRelativeW
#else
#define PathIsRelative  PathIsRelativeA
#endif
LWSTDAPI_(BOOL)     PathIsRootA(LPCSTR pszPath);
LWSTDAPI_(BOOL)     PathIsRootW(LPCWSTR pszPath);
#ifdef UNICODE
#define PathIsRoot  PathIsRootW
#else
#define PathIsRoot  PathIsRootA
#endif
LWSTDAPI_(BOOL)     PathIsSameRootA(LPCSTR pszPath1, LPCSTR pszPath2);
LWSTDAPI_(BOOL)     PathIsSameRootW(LPCWSTR pszPath1, LPCWSTR pszPath2);
#ifdef UNICODE
#define PathIsSameRoot  PathIsSameRootW
#else
#define PathIsSameRoot  PathIsSameRootA
#endif
LWSTDAPI_(BOOL)     PathIsUNCA(LPCSTR pszPath);
LWSTDAPI_(BOOL)     PathIsUNCW(LPCWSTR pszPath);
#ifdef UNICODE
#define PathIsUNC  PathIsUNCW
#else
#define PathIsUNC  PathIsUNCA
#endif
LWSTDAPI_(BOOL)     PathIsNetworkPathA(LPCSTR pszPath);
LWSTDAPI_(BOOL)     PathIsNetworkPathW(LPCWSTR pszPath);
#ifdef UNICODE
#define PathIsNetworkPath  PathIsNetworkPathW
#else
#define PathIsNetworkPath  PathIsNetworkPathA
#endif
LWSTDAPI_(BOOL)     PathIsUNCServerA(LPCSTR pszPath);
LWSTDAPI_(BOOL)     PathIsUNCServerW(LPCWSTR pszPath);
#ifdef UNICODE
#define PathIsUNCServer  PathIsUNCServerW
#else
#define PathIsUNCServer  PathIsUNCServerA
#endif
LWSTDAPI_(BOOL)     PathIsUNCServerShareA(LPCSTR pszPath);
LWSTDAPI_(BOOL)     PathIsUNCServerShareW(LPCWSTR pszPath);
#ifdef UNICODE
#define PathIsUNCServerShare  PathIsUNCServerShareW
#else
#define PathIsUNCServerShare  PathIsUNCServerShareA
#endif
LWSTDAPI_(BOOL)     PathIsContentTypeA(LPCSTR pszPath, LPCSTR pszContentType);
LWSTDAPI_(BOOL)     PathIsContentTypeW(LPCWSTR pszPath, LPCWSTR pszContentType);
LWSTDAPI_(BOOL)     PathIsURLA(LPCSTR pszPath);
LWSTDAPI_(BOOL)     PathIsURLW(LPCWSTR pszPath);
#ifdef UNICODE
#define PathIsURL  PathIsURLW
#else
#define PathIsURL  PathIsURLA
#endif
LWSTDAPI_(BOOL)     PathMakePrettyA(LPSTR pszPath);
LWSTDAPI_(BOOL)     PathMakePrettyW(LPWSTR pszPath);
LWSTDAPI_(BOOL)     PathMatchSpecA(LPCSTR pszFile, LPCSTR pszSpec);
LWSTDAPI_(BOOL)     PathMatchSpecW(LPCWSTR pszFile, LPCWSTR pszSpec);
#if (_WIN32_IE >= _WIN32_IE_IE70)
#define PMSF_NORMAL            0x00000000
#define PMSF_MULTIPLE          0x00000001
#define PMSF_DONT_STRIP_SPACES 0x00010000
LWSTDAPI PathMatchSpecExA(LPCSTR pszFile, LPCSTR pszSpec, DWORD dwFlags);
LWSTDAPI PathMatchSpecExW(LPCWSTR pszFile, LPCWSTR pszSpec, DWORD dwFlags);
#endif
LWSTDAPI_(int)      PathParseIconLocationA(LPSTR pszIconFile);
LWSTDAPI_(int)      PathParseIconLocationW(LPWSTR pszIconFile);
LWSTDAPI_(BOOL)     PathQuoteSpacesA(LPSTR lpsz);
LWSTDAPI_(BOOL)     PathQuoteSpacesW(LPWSTR lpsz);
LWSTDAPI_(BOOL)     PathRelativePathToA(LPSTR pszPath, LPCSTR pszFrom, DWORD dwAttrFrom, LPCSTR pszTo, DWORD dwAttrTo);
LWSTDAPI_(BOOL)     PathRelativePathToW(LPWSTR pszPath, LPCWSTR pszFrom, DWORD dwAttrFrom, LPCWSTR pszTo, DWORD dwAttrTo);
LWSTDAPI_(void)     PathRemoveArgsA(LPSTR pszPath);
LWSTDAPI_(void)     PathRemoveArgsW(LPWSTR pszPath);
LWSTDAPI_(LPSTR)  PathRemoveBackslashA(LPSTR pszPath);
LWSTDAPI_(LPWSTR)  PathRemoveBackslashW(LPWSTR pszPath);
#ifdef UNICODE
#define PathRemoveBackslash  PathRemoveBackslashW
#else
#define PathRemoveBackslash  PathRemoveBackslashA
#endif
LWSTDAPI_(void)     PathRemoveBlanksA(LPSTR pszPath);
LWSTDAPI_(void)     PathRemoveBlanksW(LPWSTR pszPath);
LWSTDAPI_(void)     PathRemoveExtensionA(LPSTR pszPath);
LWSTDAPI_(void)     PathRemoveExtensionW(LPWSTR pszPath);
LWSTDAPI_(BOOL)     PathRemoveFileSpecA(LPSTR pszPath);
LWSTDAPI_(BOOL)     PathRemoveFileSpecW(LPWSTR pszPath);
LWSTDAPI_(BOOL)     PathRenameExtensionA(LPSTR pszPath, LPCSTR pszExt);
LWSTDAPI_(BOOL)     PathRenameExtensionW(LPWSTR pszPath, LPCWSTR pszExt);
LWSTDAPI_(BOOL)     PathSearchAndQualifyA(LPCSTR pszPath, LPSTR pszBuf, UINT cchBuf);
LWSTDAPI_(BOOL)     PathSearchAndQualifyW(LPCWSTR pszPath, LPWSTR pszBuf, UINT cchBuf);
LWSTDAPI_(void)     PathSetDlgItemPathA(HWND hDlg, int id, LPCSTR pszPath);
LWSTDAPI_(void)     PathSetDlgItemPathW(HWND hDlg, int id, LPCWSTR pszPath);
#ifdef USE_STRICT_CONST
LWSTDAPI_(LPCSTR)  PathSkipRootA(LPCSTR pszPath);
LWSTDAPI_(LPCWSTR)  PathSkipRootW(LPCWSTR pszPath);
#ifdef UNICODE
#define PathSkipRoot  PathSkipRootW
#else
#define PathSkipRoot  PathSkipRootA
#endif
#else
LWSTDAPI_(LPSTR)  PathSkipRootA(LPCSTR pszPath);
LWSTDAPI_(LPWSTR)  PathSkipRootW(LPCWSTR pszPath);
#ifdef UNICODE
#define PathSkipRoot  PathSkipRootW
#else
#define PathSkipRoot  PathSkipRootA
#endif
#endif
LWSTDAPI_(void)     PathStripPathA(LPSTR pszPath);
LWSTDAPI_(void)     PathStripPathW(LPWSTR pszPath);
#ifdef UNICODE
#define PathStripPath  PathStripPathW
#else
#define PathStripPath  PathStripPathA
#endif
LWSTDAPI_(BOOL)     PathStripToRootA(LPSTR pszPath);
LWSTDAPI_(BOOL)     PathStripToRootW(LPWSTR pszPath);
#ifdef UNICODE
#define PathStripToRoot  PathStripToRootW
#else
#define PathStripToRoot  PathStripToRootA
#endif
LWSTDAPI_(BOOL)     PathUnquoteSpacesA(LPSTR lpsz);
LWSTDAPI_(BOOL)     PathUnquoteSpacesW(LPWSTR lpsz);
LWSTDAPI_(BOOL)     PathMakeSystemFolderA(LPCSTR pszPath);
LWSTDAPI_(BOOL)     PathMakeSystemFolderW(LPCWSTR pszPath);
#ifdef UNICODE
#define PathMakeSystemFolder  PathMakeSystemFolderW
#else
#define PathMakeSystemFolder  PathMakeSystemFolderA
#endif
LWSTDAPI_(BOOL)     PathUnmakeSystemFolderA(LPCSTR pszPath);
LWSTDAPI_(BOOL)     PathUnmakeSystemFolderW(LPCWSTR pszPath);
#ifdef UNICODE
#define PathUnmakeSystemFolder  PathUnmakeSystemFolderW
#else
#define PathUnmakeSystemFolder  PathUnmakeSystemFolderA
#endif
LWSTDAPI_(BOOL)     PathIsSystemFolderA(LPCSTR pszPath, DWORD dwAttrb);
LWSTDAPI_(BOOL)     PathIsSystemFolderW(LPCWSTR pszPath, DWORD dwAttrb);
#ifdef UNICODE
#define PathIsSystemFolder  PathIsSystemFolderW
#else
#define PathIsSystemFolder  PathIsSystemFolderA
#endif
LWSTDAPI_(void)     PathUndecorateA(LPSTR pszPath);
LWSTDAPI_(void)     PathUndecorateW(LPWSTR pszPath);
#ifdef UNICODE
#define PathUndecorate  PathUndecorateW
#else
#define PathUndecorate  PathUndecorateA
#endif
LWSTDAPI_(BOOL)     PathUnExpandEnvStringsA(LPCSTR pszPath, LPSTR pszBuf, UINT cchBuf);
LWSTDAPI_(BOOL)     PathUnExpandEnvStringsW(LPCWSTR pszPath, LPWSTR pszBuf, UINT cchBuf);
#ifdef UNICODE
#define PathUnExpandEnvStrings  PathUnExpandEnvStringsW
#else
#define PathUnExpandEnvStrings  PathUnExpandEnvStringsA
#endif
#ifdef UNICODE
#define PathAppend              PathAppendW
#define PathCanonicalize        PathCanonicalizeW
#define PathCompactPath         PathCompactPathW
#define PathCompactPathEx       PathCompactPathExW
#define PathCommonPrefix        PathCommonPrefixW
#define PathFindOnPath          PathFindOnPathW
#define PathGetCharType         PathGetCharTypeW
#define PathIsContentType       PathIsContentTypeW
#define PathIsHTMLFile          PathIsHTMLFileW
#define PathMakePretty          PathMakePrettyW
#define PathMatchSpec           PathMatchSpecW
#if (_WIN32_IE >= _WIN32_IE_IE70)
#define PathMatchSpecEx         PathMatchSpecExW
#endif
#define PathParseIconLocation   PathParseIconLocationW
#define PathQuoteSpaces         PathQuoteSpacesW
#define PathRelativePathTo      PathRelativePathToW
#define PathRemoveArgs          PathRemoveArgsW
#define PathRemoveBlanks        PathRemoveBlanksW
#define PathRemoveExtension     PathRemoveExtensionW
#define PathRemoveFileSpec      PathRemoveFileSpecW
#define PathRenameExtension     PathRenameExtensionW
#define PathSearchAndQualify    PathSearchAndQualifyW
#define PathSetDlgItemPath      PathSetDlgItemPathW
#define PathUnquoteSpaces       PathUnquoteSpacesW
#else
#define PathAppend              PathAppendA
#define PathCanonicalize        PathCanonicalizeA
#define PathCompactPath         PathCompactPathA
#define PathCompactPathEx       PathCompactPathExA
#define PathCommonPrefix        PathCommonPrefixA
#define PathFindOnPath          PathFindOnPathA
#define PathGetCharType         PathGetCharTypeA
#define PathIsContentType       PathIsContentTypeA
#define PathIsHTMLFile          PathIsHTMLFileA
#define PathMakePretty          PathMakePrettyA
#define PathMatchSpec           PathMatchSpecA
#if (_WIN32_IE >= _WIN32_IE_IE70)
#define PathMatchSpecEx         PathMatchSpecExA
#endif
#define PathParseIconLocation   PathParseIconLocationA
#define PathQuoteSpaces         PathQuoteSpacesA
#define PathRelativePathTo      PathRelativePathToA
#define PathRemoveArgs          PathRemoveArgsA
#define PathRemoveBlanks        PathRemoveBlanksA
#define PathRemoveExtension     PathRemoveExtensionA
#define PathRemoveFileSpec      PathRemoveFileSpecA
#define PathRenameExtension     PathRenameExtensionA
#define PathSearchAndQualify    PathSearchAndQualifyA
#define PathSetDlgItemPath      PathSetDlgItemPathA
#define PathUnquoteSpaces       PathUnquoteSpacesA
#endif
typedef enum
{
    URL_SCHEME_INVALID     = -1,
    URL_SCHEME_UNKNOWN     =  0,
    URL_SCHEME_FTP,
    URL_SCHEME_HTTP,
    URL_SCHEME_GOPHER,
    URL_SCHEME_MAILTO,
    URL_SCHEME_NEWS,
    URL_SCHEME_NNTP,
    URL_SCHEME_TELNET,
    URL_SCHEME_WAIS,
    URL_SCHEME_FILE,
    URL_SCHEME_MK,
    URL_SCHEME_HTTPS,
    URL_SCHEME_SHELL,
    URL_SCHEME_SNEWS,
    URL_SCHEME_LOCAL,
    URL_SCHEME_JAVASCRIPT,
    URL_SCHEME_VBSCRIPT,
    URL_SCHEME_ABOUT,
    URL_SCHEME_RES,
#if (_WIN32_IE >= _WIN32_IE_IE60)
    URL_SCHEME_MSSHELLROOTED,
    URL_SCHEME_MSSHELLIDLIST,
    URL_SCHEME_MSHELP,
#endif
#if (_WIN32_IE >= _WIN32_IE_IE70)
    URL_SCHEME_MSSHELLDEVICE,
    URL_SCHEME_WILDCARD,
#endif
#if (NTDDI_VERSION >= NTDDI_VISTA)
    URL_SCHEME_SEARCH_MS,
#endif
#if (NTDDI_VERSION >= NTDDI_VISTASP1)
    URL_SCHEME_SEARCH,
#endif
#if (NTDDI_VERSION >= NTDDI_WIN7)
    URL_SCHEME_KNOWNFOLDER,
#endif
    URL_SCHEME_MAXVALUE,
} URL_SCHEME;
typedef enum
{
    URL_PART_NONE       = 0,
    URL_PART_SCHEME     = 1,
    URL_PART_HOSTNAME,
    URL_PART_USERNAME,
    URL_PART_PASSWORD,
    URL_PART_PORT,
    URL_PART_QUERY,
} URL_PART;
typedef enum
{
    URLIS_URL,
    URLIS_OPAQUE,
    URLIS_NOHISTORY,
    URLIS_FILEURL,
    URLIS_APPLIABLE,
    URLIS_DIRECTORY,
    URLIS_HASQUERY,
} URLIS;
#define URL_UNESCAPE                    0x10000000
#define URL_ESCAPE_UNSAFE               0x20000000
#define URL_PLUGGABLE_PROTOCOL          0x40000000
#define URL_WININET_COMPATIBILITY       0x80000000
#define URL_DONT_ESCAPE_EXTRA_INFO      0x02000000
#define URL_DONT_UNESCAPE_EXTRA_INFO    URL_DONT_ESCAPE_EXTRA_INFO
#define URL_BROWSER_MODE                URL_DONT_ESCAPE_EXTRA_INFO
#define URL_ESCAPE_SPACES_ONLY          0x04000000
#define URL_DONT_SIMPLIFY               0x08000000
#define URL_NO_META                     URL_DONT_SIMPLIFY
#define URL_UNESCAPE_INPLACE            0x00100000
#define URL_CONVERT_IF_DOSPATH          0x00200000
#define URL_UNESCAPE_HIGH_ANSI_ONLY     0x00400000
#define URL_INTERNAL_PATH               0x00800000
#define URL_FILE_USE_PATHURL            0x00010000
#if (_WIN32_IE >= _WIN32_IE_IE60SP2)
#define URL_DONT_UNESCAPE               0x00020000
#endif
#if (NTDDI_VERSION >= NTDDI_WIN7)
#define URL_ESCAPE_AS_UTF8              0x00040000
#endif
#define URL_ESCAPE_PERCENT              0x00001000
#define URL_ESCAPE_SEGMENT_ONLY         0x00002000
#define URL_PARTFLAG_KEEPSCHEME         0x00000001
#define URL_APPLY_DEFAULT               0x00000001
#define URL_APPLY_GUESSSCHEME           0x00000002
#define URL_APPLY_GUESSFILE             0x00000004
#define URL_APPLY_FORCEAPPLY            0x00000008
LWSTDAPI_(int)          UrlCompareA(LPCSTR psz1, LPCSTR psz2, BOOL fIgnoreSlash);
LWSTDAPI_(int)          UrlCompareW(LPCWSTR psz1, LPCWSTR psz2, BOOL fIgnoreSlash);
LWSTDAPI                UrlCombineA(LPCSTR pszBase, LPCSTR pszRelative, LPSTR pszCombined, LPDWORD pcchCombined, DWORD dwFlags);
LWSTDAPI                UrlCombineW(LPCWSTR pszBase, LPCWSTR pszRelative, LPWSTR pszCombined, LPDWORD pcchCombined, DWORD dwFlags);
LWSTDAPI                UrlCanonicalizeA(LPCSTR pszUrl, LPSTR pszCanonicalized, LPDWORD pcchCanonicalized, DWORD dwFlags);
LWSTDAPI                UrlCanonicalizeW(LPCWSTR pszUrl, LPWSTR pszCanonicalized, LPDWORD pcchCanonicalized, DWORD dwFlags);
LWSTDAPI_(BOOL)         UrlIsOpaqueA(LPCSTR pszURL);
LWSTDAPI_(BOOL)         UrlIsOpaqueW(LPCWSTR pszURL);
LWSTDAPI_(BOOL)         UrlIsNoHistoryA(LPCSTR pszURL);
LWSTDAPI_(BOOL)         UrlIsNoHistoryW(LPCWSTR pszURL);
#define                 UrlIsFileUrlA(pszURL) UrlIsA(pszURL, URLIS_FILEURL)
#define                 UrlIsFileUrlW(pszURL) UrlIsW(pszURL, URLIS_FILEURL)
LWSTDAPI_(BOOL)         UrlIsA(LPCSTR pszUrl, URLIS UrlIs);
LWSTDAPI_(BOOL)         UrlIsW(LPCWSTR pszUrl, URLIS UrlIs);
LWSTDAPI_(LPCSTR)       UrlGetLocationA(LPCSTR psz1);
LWSTDAPI_(LPCWSTR)      UrlGetLocationW(LPCWSTR psz1);
LWSTDAPI                UrlUnescapeA(LPSTR pszUrl, LPSTR pszUnescaped, LPDWORD pcchUnescaped, DWORD dwFlags);
LWSTDAPI                UrlUnescapeW(LPWSTR pszUrl, LPWSTR pszUnescaped, LPDWORD pcchUnescaped, DWORD dwFlags);
LWSTDAPI                UrlEscapeA(LPCSTR pszUrl, LPSTR pszEscaped, LPDWORD pcchEscaped, DWORD dwFlags);
LWSTDAPI                UrlEscapeW(LPCWSTR pszUrl, LPWSTR pszEscaped, LPDWORD pcchEscaped, DWORD dwFlags);
LWSTDAPI                UrlCreateFromPathA(LPCSTR pszPath, LPSTR pszUrl, LPDWORD pcchUrl, DWORD dwFlags);
LWSTDAPI                UrlCreateFromPathW(LPCWSTR pszPath, LPWSTR pszUrl, LPDWORD pcchUrl, DWORD dwFlags);
LWSTDAPI                PathCreateFromUrlA(LPCSTR pszUrl, LPSTR pszPath, LPDWORD pcchPath, DWORD dwFlags);
LWSTDAPI                PathCreateFromUrlW(LPCWSTR pszUrl, LPWSTR pszPath, LPDWORD pcchPath, DWORD dwFlags);
#if (_WIN32_IE >= _WIN32_IE_IE70)
LWSTDAPI                PathCreateFromUrlAlloc(LPCWSTR pszIn, LPWSTR *ppszOut, DWORD dwFlags);
#endif
LWSTDAPI                UrlHashA(LPCSTR pszUrl, LPBYTE pbHash, DWORD cbHash);
LWSTDAPI                UrlHashW(LPCWSTR pszUrl, LPBYTE pbHash, DWORD cbHash);
LWSTDAPI                UrlGetPartW(LPCWSTR pszIn, LPWSTR pszOut, LPDWORD pcchOut, DWORD dwPart, DWORD dwFlags);
LWSTDAPI                UrlGetPartA(LPCSTR pszIn, LPSTR pszOut, LPDWORD pcchOut, DWORD dwPart, DWORD dwFlags);
LWSTDAPI                UrlApplySchemeA(LPCSTR pszIn, LPSTR pszOut, LPDWORD pcchOut, DWORD dwFlags);
LWSTDAPI                UrlApplySchemeW(LPCWSTR pszIn, LPWSTR pszOut, LPDWORD pcchOut, DWORD dwFlags);
LWSTDAPI                HashData(LPBYTE pbData, DWORD cbData, LPBYTE pbHash, DWORD cbHash);
LWSTDAPI                UrlFixupW(LPCWSTR pszIn, LPWSTR pszOut, DWORD cchOut);
#ifdef UNICODE
#define UrlCompare              UrlCompareW
#define UrlCombine              UrlCombineW
#define UrlCanonicalize         UrlCanonicalizeW
#define UrlIsOpaque             UrlIsOpaqueW
#define UrlIsFileUrl            UrlIsFileUrlW
#define UrlGetLocation          UrlGetLocationW
#define UrlUnescape             UrlUnescapeW
#define UrlEscape               UrlEscapeW
#define UrlCreateFromPath       UrlCreateFromPathW
#define PathCreateFromUrl       PathCreateFromUrlW
#define UrlHash                 UrlHashW
#define UrlGetPart              UrlGetPartW
#define UrlApplyScheme          UrlApplySchemeW
#define UrlIs                   UrlIsW
#define UrlFixup                UrlFixupW
#else
#define UrlCompare              UrlCompareA
#define UrlCombine              UrlCombineA
#define UrlCanonicalize         UrlCanonicalizeA
#define UrlIsOpaque             UrlIsOpaqueA
#define UrlIsFileUrl            UrlIsFileUrlA
#define UrlGetLocation          UrlGetLocationA
#define UrlUnescape             UrlUnescapeA
#define UrlEscape               UrlEscapeA
#define UrlCreateFromPath       UrlCreateFromPathA
#define PathCreateFromUrl       PathCreateFromUrlA
#define UrlHash                 UrlHashA
#define UrlGetPart              UrlGetPartA
#define UrlApplyScheme          UrlApplySchemeA
#define UrlIs                   UrlIsA
#endif
#define UrlEscapeSpaces(pszUrl, pszEscaped, pcchEscaped)        UrlCanonicalize(pszUrl, pszEscaped, pcchEscaped, URL_ESCAPE_SPACES_ONLY |URL_DONT_ESCAPE_EXTRA_INFO )
#define UrlUnescapeInPlace(pszUrl, dwFlags)                     UrlUnescape(pszUrl, NULL, NULL, dwFlags | URL_UNESCAPE_INPLACE)
#if (_WIN32_IE >= _WIN32_IE_IE50)
typedef struct tagPARSEDURLA {
    DWORD     cbSize;
    LPCSTR    pszProtocol;
    UINT      cchProtocol;
    LPCSTR    pszSuffix;
    UINT      cchSuffix;
    UINT      nScheme;
    } PARSEDURLA, * PPARSEDURLA;
typedef struct tagPARSEDURLW {
    DWORD     cbSize;
    LPCWSTR   pszProtocol;
    UINT      cchProtocol;
    LPCWSTR   pszSuffix;
    UINT      cchSuffix;
    UINT      nScheme;
    } PARSEDURLW, * PPARSEDURLW;
#ifdef UNICODE
typedef PARSEDURLW PARSEDURL;
typedef PPARSEDURLW PPARSEDURL;
#else
typedef PARSEDURLA PARSEDURL;
typedef PPARSEDURLA PPARSEDURL;
#endif
LWSTDAPI            ParseURLA(LPCSTR pcszURL, PARSEDURLA * ppu);
LWSTDAPI            ParseURLW(LPCWSTR pcszURL, PARSEDURLW * ppu);
#ifdef UNICODE
#define ParseURL  ParseURLW
#else
#define ParseURL  ParseURLA
#endif
#endif
#endif
#ifndef NO_SHLWAPI_REG
LWSTDAPI_(LSTATUS)  SHDeleteEmptyKeyA(HKEY hkey, LPCSTR pszSubKey);
LWSTDAPI_(LSTATUS)  SHDeleteEmptyKeyW(HKEY hkey, LPCWSTR pszSubKey);
#ifdef UNICODE
#define SHDeleteEmptyKey  SHDeleteEmptyKeyW
#else
#define SHDeleteEmptyKey  SHDeleteEmptyKeyA
#endif
LWSTDAPI_(LSTATUS)  SHDeleteKeyA(HKEY hkey, LPCSTR pszSubKey);
LWSTDAPI_(LSTATUS)  SHDeleteKeyW(HKEY hkey, LPCWSTR pszSubKey);
#ifdef UNICODE
#define SHDeleteKey  SHDeleteKeyW
#else
#define SHDeleteKey  SHDeleteKeyA
#endif
LWSTDAPI_(HKEY)     SHRegDuplicateHKey(HKEY hkey);
LWSTDAPI_(LSTATUS)    SHDeleteValueA(HKEY hkey, LPCSTR pszSubKey, LPCSTR pszValue);
LWSTDAPI_(LSTATUS)    SHDeleteValueW(HKEY hkey, LPCWSTR pszSubKey, LPCWSTR pszValue);
#ifdef UNICODE
#define SHDeleteValue  SHDeleteValueW
#else
#define SHDeleteValue  SHDeleteValueA
#endif
LWSTDAPI_(LSTATUS)SHGetValueA(HKEY hkey, LPCSTR pszSubKey, LPCSTR pszValue, DWORD * pdwType, void *pvData, DWORD *pcbData);
LWSTDAPI_(LSTATUS)SHGetValueW(HKEY hkey, LPCWSTR pszSubKey, LPCWSTR pszValue, DWORD * pdwType, void *pvData, DWORD *pcbData);
#ifdef UNICODE
#define SHGetValue  SHGetValueW
#else
#define SHGetValue  SHGetValueA
#endif
LWSTDAPI_(LSTATUS)SHSetValueA(HKEY hkey, LPCSTR pszSubKey, LPCSTR pszValue, DWORD dwType, LPCVOID pvData, DWORD cbData);
LWSTDAPI_(LSTATUS)SHSetValueW(HKEY hkey, LPCWSTR pszSubKey, LPCWSTR pszValue, DWORD dwType, LPCVOID pvData, DWORD cbData);
#ifdef UNICODE
#define SHSetValue  SHSetValueW
#else
#define SHSetValue  SHSetValueA
#endif
#if (_WIN32_IE >= 0x0602)
typedef int SRRF;
#define SRRF_RT_REG_NONE        0x00000001
#define SRRF_RT_REG_SZ          0x00000002
#define SRRF_RT_REG_EXPAND_SZ   0x00000004
#define SRRF_RT_REG_BINARY      0x00000008
#define SRRF_RT_REG_DWORD       0x00000010
#define SRRF_RT_REG_MULTI_SZ    0x00000020
#define SRRF_RT_REG_QWORD       0x00000040
#define SRRF_RT_DWORD           (SRRF_RT_REG_BINARY | SRRF_RT_REG_DWORD)
#define SRRF_RT_QWORD           (SRRF_RT_REG_BINARY | SRRF_RT_REG_QWORD)
#define SRRF_RT_ANY             0x0000ffff
#define SRRF_RM_ANY             0x00000000
#define SRRF_RM_NORMAL          0x00010000
#define SRRF_RM_SAFE            0x00020000
#define SRRF_RM_SAFENETWORK     0x00040000
#define SRRF_NOEXPAND           0x10000000
#define SRRF_ZEROONFAILURE      0x20000000
#define SRRF_NOVIRT             0x40000000
LWSTDAPI_(LSTATUS)SHRegGetValueA(HKEY hkey, LPCSTR pszSubKey, LPCSTR pszValue, SRRF srrfFlags, DWORD * pdwType, void *pvData, DWORD *pcbData);
LWSTDAPI_(LSTATUS)SHRegGetValueW(HKEY hkey, LPCWSTR pszSubKey, LPCWSTR pszValue, SRRF srrfFlags, DWORD * pdwType, void *pvData, DWORD *pcbData);
#ifdef UNICODE
#define SHRegGetValue  SHRegGetValueW
#else
#define SHRegGetValue  SHRegGetValueA
#endif
LWSTDAPI_(LSTATUS)SHRegSetValue(HKEY hkey, LPCWSTR pszSubKey, LPCWSTR pszValue, SRRF srrfFlags, DWORD dwType, LPCVOID pvData, DWORD cbData);
LWSTDAPI_(LSTATUS)SHRegGetValueFromHKCUHKLM(PCWSTR pwszKey, PCWSTR pwszValue, SRRF srrfFlags, DWORD * pdwType, void *pvData, DWORD *pcbData);
STDAPI_(BOOL)SHRegGetBoolValueFromHKCUHKLM(PCWSTR pszKey, PCWSTR pszValue, BOOL fDefault);
#endif
LWSTDAPI_(LSTATUS)SHQueryValueExA(HKEY hkey, LPCSTR pszValue, DWORD * pdwReserved, DWORD * pdwType, void *pvData, DWORD *pcbData);
LWSTDAPI_(LSTATUS)SHQueryValueExW(HKEY hkey, LPCWSTR pszValue, DWORD * pdwReserved, DWORD * pdwType, void *pvData, DWORD *pcbData);
#ifdef UNICODE
#define SHQueryValueEx  SHQueryValueExW
#else
#define SHQueryValueEx  SHQueryValueExA
#endif
LWSTDAPI_(LSTATUS)SHEnumKeyExA(HKEY hkey, DWORD dwIndex, LPSTR pszName, LPDWORD pcchName);
LWSTDAPI_(LSTATUS)SHEnumKeyExW(HKEY hkey, DWORD dwIndex, LPWSTR pszName, LPDWORD pcchName);
LWSTDAPI_(LSTATUS)SHEnumValueA(HKEY hkey, DWORD dwIndex, PSTR pszValueName, LPDWORD pcchValueName, LPDWORD pdwType, void *pvData, LPDWORD pcbData);
LWSTDAPI_(LSTATUS)SHEnumValueW(HKEY hkey, DWORD dwIndex, PWSTR pszValueName, LPDWORD pcchValueName, LPDWORD pdwType, void *pvData, LPDWORD pcbData);
LWSTDAPI_(LSTATUS)SHQueryInfoKeyA(HKEY hkey, LPDWORD pcSubKeys, LPDWORD pcchMaxSubKeyLen, LPDWORD pcValues, LPDWORD pcchMaxValueNameLen);
LWSTDAPI_(LSTATUS)SHQueryInfoKeyW(HKEY hkey, LPDWORD pcSubKeys, LPDWORD pcchMaxSubKeyLen, LPDWORD pcValues, LPDWORD pcchMaxValueNameLen);
LWSTDAPI_(LSTATUS)SHCopyKeyA(HKEY hkeySrc, LPCSTR szSrcSubKey, HKEY hkeyDest, DWORD fReserved);
LWSTDAPI_(LSTATUS)SHCopyKeyW(HKEY hkeySrc, LPCWSTR wszSrcSubKey, HKEY hkeyDest, DWORD fReserved);
LWSTDAPI_(LSTATUS)SHRegGetPathA(HKEY hKey, LPCSTR pcszSubKey, LPCSTR pcszValue, LPSTR pszPath, DWORD dwFlags);
LWSTDAPI_(LSTATUS)SHRegGetPathW(HKEY hKey, LPCWSTR pcszSubKey, LPCWSTR pcszValue, LPWSTR pszPath, DWORD dwFlags);
LWSTDAPI_(LSTATUS)SHRegSetPathA(HKEY hKey, LPCSTR pcszSubKey, LPCSTR pcszValue, LPCSTR pcszPath, DWORD dwFlags);
LWSTDAPI_(LSTATUS)    SHRegSetPathW(HKEY hKey, LPCWSTR pcszSubKey, LPCWSTR pcszValue, LPCWSTR pcszPath, DWORD dwFlags);
#ifdef UNICODE
#define SHEnumKeyEx           SHEnumKeyExW
#define SHEnumValue           SHEnumValueW
#define SHQueryInfoKey        SHQueryInfoKeyW
#define SHCopyKey             SHCopyKeyW
#define SHRegGetPath          SHRegGetPathW
#define SHRegSetPath          SHRegSetPathW
#else
#define SHEnumKeyEx           SHEnumKeyExA
#define SHEnumValue           SHEnumValueA
#define SHQueryInfoKey        SHQueryInfoKeyA
#define SHCopyKey             SHCopyKeyA
#define SHRegGetPath          SHRegGetPathA
#define SHRegSetPath          SHRegSetPathA
#endif
typedef enum
{
    SHREGDEL_DEFAULT = 0x00000000,
    SHREGDEL_HKCU    = 0x00000001,
    SHREGDEL_HKLM    = 0x00000010,
    SHREGDEL_BOTH    = 0x00000011,
} SHREGDEL_FLAGS;
typedef enum
{
    SHREGENUM_DEFAULT = 0x00000000,
    SHREGENUM_HKCU    = 0x00000001,
    SHREGENUM_HKLM    = 0x00000010,
    SHREGENUM_BOTH    = 0x00000011,
} SHREGENUM_FLAGS;
#define     SHREGSET_HKCU           0x00000001
#define     SHREGSET_FORCE_HKCU     0x00000002
#define     SHREGSET_HKLM           0x00000004
#define     SHREGSET_FORCE_HKLM     0x00000008
#define     SHREGSET_DEFAULT        (SHREGSET_FORCE_HKCU | SHREGSET_HKLM)
typedef HANDLE HUSKEY;
typedef HUSKEY *PHUSKEY;
LWSTDAPI_(LSTATUS)SHRegCreateUSKeyA(LPCSTR pszPath, REGSAM samDesired, HUSKEY hRelativeUSKey, PHUSKEY phNewUSKey, DWORD dwFlags);
LWSTDAPI_(LSTATUS)SHRegCreateUSKeyW(LPCWSTR pwzPath, REGSAM samDesired, HUSKEY hRelativeUSKey, PHUSKEY phNewUSKey, DWORD dwFlags);
LWSTDAPI_(LSTATUS)SHRegOpenUSKeyA(LPCSTR pszPath, REGSAM samDesired, HUSKEY hRelativeUSKey, PHUSKEY phNewUSKey, BOOL fIgnoreHKCU);
LWSTDAPI_(LSTATUS)SHRegOpenUSKeyW(LPCWSTR pwzPath, REGSAM samDesired, HUSKEY hRelativeUSKey, PHUSKEY phNewUSKey, BOOL fIgnoreHKCU);
LWSTDAPI_(LSTATUS)SHRegQueryUSValueA(HUSKEY hUSKey, LPCSTR pszValue, DWORD * pdwType, void *pvData, DWORD *pcbData, BOOL fIgnoreHKCU, void *pvDefaultData, DWORD dwDefaultDataSize);
LWSTDAPI_(LSTATUS)SHRegQueryUSValueW(HUSKEY hUSKey, LPCWSTR pszValue, DWORD * pdwType, void *pvData, DWORD *pcbData, BOOL fIgnoreHKCU, void *pvDefaultData, DWORD dwDefaultDataSize);
LWSTDAPI_(LSTATUS)SHRegWriteUSValueA(HUSKEY hUSKey, LPCSTR pszValue, DWORD dwType, const void *pvData, DWORD cbData, DWORD dwFlags);
LWSTDAPI_(LSTATUS)SHRegWriteUSValueW(HUSKEY hUSKey, LPCWSTR pwzValue, DWORD dwType, const void *pvData, DWORD cbData, DWORD dwFlags);
LWSTDAPI_(LSTATUS)SHRegDeleteUSValueA(HUSKEY hUSKey, LPCSTR pszValue, SHREGDEL_FLAGS delRegFlags);
LWSTDAPI_(LSTATUS)SHRegDeleteUSValueW(HUSKEY hUSKey, LPCWSTR pwzValue, SHREGDEL_FLAGS delRegFlags);
LWSTDAPI_(LSTATUS)SHRegDeleteEmptyUSKeyW(HUSKEY hUSKey, LPCWSTR pwzSubKey, SHREGDEL_FLAGS delRegFlags);
LWSTDAPI_(LSTATUS)SHRegDeleteEmptyUSKeyA(HUSKEY hUSKey, LPCSTR pszSubKey, SHREGDEL_FLAGS delRegFlags);
LWSTDAPI_(LSTATUS)SHRegEnumUSKeyA(HUSKEY hUSKey, DWORD dwIndex, LPSTR pszName, LPDWORD pcchName, SHREGENUM_FLAGS enumRegFlags);
LWSTDAPI_(LSTATUS)SHRegEnumUSKeyW(HUSKEY hUSKey, DWORD dwIndex, LPWSTR pwzName, LPDWORD pcchName, SHREGENUM_FLAGS enumRegFlags);
LWSTDAPI_(LSTATUS)SHRegEnumUSValueA(HUSKEY hUSkey, DWORD dwIndex, LPSTR pszValueName, LPDWORD pcchValueName, LPDWORD pdwType, void *pvData, LPDWORD pcbData, SHREGENUM_FLAGS enumRegFlags);
LWSTDAPI_(LSTATUS)SHRegEnumUSValueW(HUSKEY hUSkey, DWORD dwIndex, LPWSTR pszValueName, LPDWORD pcchValueName, LPDWORD pdwType, void *pvData, LPDWORD pcbData, SHREGENUM_FLAGS enumRegFlags);
LWSTDAPI_(LSTATUS)SHRegQueryInfoUSKeyA(HUSKEY hUSKey, LPDWORD pcSubKeys, LPDWORD pcchMaxSubKeyLen, LPDWORD pcValues, LPDWORD pcchMaxValueNameLen, SHREGENUM_FLAGS enumRegFlags);
LWSTDAPI_(LSTATUS)SHRegQueryInfoUSKeyW(HUSKEY hUSKey, LPDWORD pcSubKeys, LPDWORD pcchMaxSubKeyLen, LPDWORD pcValues, LPDWORD pcchMaxValueNameLen, SHREGENUM_FLAGS enumRegFlags);
LWSTDAPI_(LSTATUS)SHRegCloseUSKey(HUSKEY hUSKey);
STDAPI_(LSTATUS)SHRegGetUSValueA(LPCSTR pszSubKey, LPCSTR pszValue, DWORD * pdwType, void *pvData, DWORD *pcbData, BOOL fIgnoreHKCU, void *pvDefaultData, DWORD dwDefaultDataSize);
STDAPI_(LSTATUS)SHRegGetUSValueW(LPCWSTR pszSubKey, LPCWSTR pszValue, DWORD * pdwType, void *pvData, DWORD *pcbData, BOOL fIgnoreHKCU, void *pvDefaultData, DWORD dwDefaultDataSize);
LWSTDAPI_(LSTATUS)SHRegSetUSValueA(LPCSTR pszSubKey, LPCSTR pszValue, DWORD dwType, const void *pvData, DWORD cbData, DWORD dwFlags);
LWSTDAPI_(LSTATUS)SHRegSetUSValueW(LPCWSTR pwzSubKey, LPCWSTR pwzValue, DWORD dwType, const void *pvData, DWORD cbData, DWORD dwFlags);
LWSTDAPI_(int) SHRegGetIntW(HKEY hk, PCWSTR pwzKey, int iDefault);
#ifdef UNICODE
#define SHRegCreateUSKey        SHRegCreateUSKeyW
#define SHRegOpenUSKey          SHRegOpenUSKeyW
#define SHRegQueryUSValue       SHRegQueryUSValueW
#define SHRegWriteUSValue       SHRegWriteUSValueW
#define SHRegDeleteUSValue      SHRegDeleteUSValueW
#define SHRegDeleteEmptyUSKey   SHRegDeleteEmptyUSKeyW
#define SHRegEnumUSKey          SHRegEnumUSKeyW
#define SHRegEnumUSValue        SHRegEnumUSValueW
#define SHRegQueryInfoUSKey     SHRegQueryInfoUSKeyW
#define SHRegGetUSValue         SHRegGetUSValueW
#define SHRegSetUSValue         SHRegSetUSValueW
#define SHRegGetInt             SHRegGetIntW
#else
#define SHRegCreateUSKey        SHRegCreateUSKeyA
#define SHRegOpenUSKey          SHRegOpenUSKeyA
#define SHRegQueryUSValue       SHRegQueryUSValueA
#define SHRegWriteUSValue       SHRegWriteUSValueA
#define SHRegDeleteUSValue      SHRegDeleteUSValueA
#define SHRegDeleteEmptyUSKey   SHRegDeleteEmptyUSKeyA
#define SHRegEnumUSKey          SHRegEnumUSKeyA
#define SHRegEnumUSValue        SHRegEnumUSValueA
#define SHRegQueryInfoUSKey     SHRegQueryInfoUSKeyA
#define SHRegGetUSValue         SHRegGetUSValueA
#define SHRegSetUSValue         SHRegSetUSValueA
#endif
LWSTDAPI_(BOOL) SHRegGetBoolUSValueA(LPCSTR pszSubKey, LPCSTR pszValue, BOOL fIgnoreHKCU, BOOL fDefault);
LWSTDAPI_(BOOL) SHRegGetBoolUSValueW(LPCWSTR pszSubKey, LPCWSTR pszValue, BOOL fIgnoreHKCU, BOOL fDefault);
#ifdef UNICODE
#define SHRegGetBoolUSValue  SHRegGetBoolUSValueW
#else
#define SHRegGetBoolUSValue  SHRegGetBoolUSValueA
#endif
enum
{
    ASSOCF_INIT_NOREMAPCLSID           = 0x00000001,
    ASSOCF_INIT_BYEXENAME              = 0x00000002,
    ASSOCF_OPEN_BYEXENAME              = 0x00000002,
    ASSOCF_INIT_DEFAULTTOSTAR          = 0x00000004,
    ASSOCF_INIT_DEFAULTTOFOLDER        = 0x00000008,
    ASSOCF_NOUSERSETTINGS              = 0x00000010,
    ASSOCF_NOTRUNCATE                  = 0x00000020,
    ASSOCF_VERIFY                      = 0x00000040,
    ASSOCF_REMAPRUNDLL                 = 0x00000080,
    ASSOCF_NOFIXUPS                    = 0x00000100,
    ASSOCF_IGNOREBASECLASS             = 0x00000200,
    ASSOCF_INIT_IGNOREUNKNOWN          = 0x00000400,
};
typedef DWORD ASSOCF;
typedef enum
{
    ASSOCSTR_COMMAND      = 1,
    ASSOCSTR_EXECUTABLE,
    ASSOCSTR_FRIENDLYDOCNAME,
    ASSOCSTR_FRIENDLYAPPNAME,
    ASSOCSTR_NOOPEN,
    ASSOCSTR_SHELLNEWVALUE,
    ASSOCSTR_DDECOMMAND,
    ASSOCSTR_DDEIFEXEC,
    ASSOCSTR_DDEAPPLICATION,
    ASSOCSTR_DDETOPIC,
    ASSOCSTR_INFOTIP,
#if (_WIN32_IE >= _WIN32_IE_IE60)
    ASSOCSTR_QUICKTIP,
    ASSOCSTR_TILEINFO,
    ASSOCSTR_CONTENTTYPE,
    ASSOCSTR_DEFAULTICON,
    ASSOCSTR_SHELLEXTENSION,
#endif
#if (_WIN32_IE >= _WIN32_IE_IE80)
    ASSOCSTR_DROPTARGET,
    ASSOCSTR_DELEGATEEXECUTE,
#endif
    ASSOCSTR_MAX
} ASSOCSTR;
typedef enum
{
    ASSOCKEY_SHELLEXECCLASS = 1,
    ASSOCKEY_APP,
    ASSOCKEY_CLASS,
    ASSOCKEY_BASECLASS,
    ASSOCKEY_MAX
} ASSOCKEY;
typedef enum
{
    ASSOCDATA_MSIDESCRIPTOR = 1,
    ASSOCDATA_NOACTIVATEHANDLER,
    ASSOCDATA_QUERYCLASSSTORE,
    ASSOCDATA_HASPERUSERASSOC,
#if (_WIN32_IE >= _WIN32_IE_IE60)
    ASSOCDATA_EDITFLAGS,
    ASSOCDATA_VALUE,
#endif
    ASSOCDATA_MAX
} ASSOCDATA;
typedef enum
{
    ASSOCENUM_NONE
} ASSOCENUM;
#undef INTERFACE
#define INTERFACE IQueryAssociations
DECLARE_INTERFACE_IID_( IQueryAssociations, IUnknown, "c46ca590-3c3f-11d2-bee6-0000f805ca57" )
{
    STDMETHOD (QueryInterface)(THIS_ REFIID riid, void **ppv) PURE;
    STDMETHOD_(ULONG, AddRef) ( THIS ) PURE;
    STDMETHOD_(ULONG, Release) ( THIS ) PURE;
    STDMETHOD (Init)(THIS_ ASSOCF flags, LPCWSTR pszAssoc, HKEY hkProgid, HWND hwnd) PURE;
    STDMETHOD (GetString)(THIS_ ASSOCF flags, ASSOCSTR str, LPCWSTR pszExtra, LPWSTR pszOut, DWORD *pcchOut) PURE;
    STDMETHOD (GetKey)(THIS_ ASSOCF flags, ASSOCKEY key, LPCWSTR pszExtra, HKEY *phkeyOut) PURE;
    STDMETHOD (GetData)(THIS_ ASSOCF flags, ASSOCDATA data, LPCWSTR pszExtra, void * pvOut, DWORD *pcbOut) PURE;
    STDMETHOD (GetEnum)(THIS_ ASSOCF flags, ASSOCENUM assocenum, LPCWSTR pszExtra, REFIID riid, void **ppvOut) PURE;
};
LWSTDAPI AssocCreate(CLSID clsid, REFIID riid, void **ppv);
LWSTDAPI AssocQueryStringA(ASSOCF flags, ASSOCSTR str, LPCSTR pszAssoc, LPCSTR pszExtra, LPSTR pszOut, DWORD *pcchOut);
LWSTDAPI AssocQueryStringW(ASSOCF flags, ASSOCSTR str, LPCWSTR pszAssoc, LPCWSTR pszExtra, LPWSTR pszOut, DWORD *pcchOut);
#ifdef UNICODE
#define AssocQueryString  AssocQueryStringW
#else
#define AssocQueryString  AssocQueryStringA
#endif
LWSTDAPI AssocQueryStringByKeyA(ASSOCF flags, ASSOCSTR str, HKEY hkAssoc, LPCSTR pszExtra, LPSTR pszOut, DWORD *pcchOut);
LWSTDAPI AssocQueryStringByKeyW(ASSOCF flags, ASSOCSTR str, HKEY hkAssoc, LPCWSTR pszExtra, LPWSTR pszOut, DWORD *pcchOut);
#ifdef UNICODE
#define AssocQueryStringByKey  AssocQueryStringByKeyW
#else
#define AssocQueryStringByKey  AssocQueryStringByKeyA
#endif
LWSTDAPI AssocQueryKeyA(ASSOCF flags, ASSOCKEY key, LPCSTR pszAssoc, LPCSTR pszExtra, HKEY *phkeyOut);
LWSTDAPI AssocQueryKeyW(ASSOCF flags, ASSOCKEY key, LPCWSTR pszAssoc, LPCWSTR pszExtra, HKEY *phkeyOut);
#ifdef UNICODE
#define AssocQueryKey  AssocQueryKeyW
#else
#define AssocQueryKey  AssocQueryKeyA
#endif
#if (_WIN32_IE >= 0x0601)
LWSTDAPI_(BOOL) AssocIsDangerous(LPCWSTR pszAssoc);
#endif
#if (_WIN32_IE >= _WIN32_IE_IE60SP2)
LWSTDAPI AssocGetPerceivedType(LPCWSTR pszExt, PERCEIVED *ptype, PERCEIVEDFLAG *pflag, LPWSTR *ppszType);
#endif
#endif
#ifndef NO_SHLWAPI_STREAM
#ifndef __IStream_FWD_DEFINED__
#define __IStream_FWD_DEFINED__
typedef interface IStream IStream;
#endif
LWSTDAPI_(IStream *) SHOpenRegStreamA(HKEY hkey, LPCSTR pszSubkey, LPCSTR pszValue, DWORD grfMode);
LWSTDAPI_(IStream *) SHOpenRegStreamW(HKEY hkey, LPCWSTR pszSubkey, LPCWSTR pszValue, DWORD grfMode);
#ifdef UNICODE
#define SHOpenRegStream  SHOpenRegStreamW
#else
#define SHOpenRegStream  SHOpenRegStreamA
#endif
LWSTDAPI_(IStream *) SHOpenRegStream2A(HKEY hkey, LPCSTR pszSubkey, LPCSTR pszValue, DWORD grfMode);
LWSTDAPI_(IStream *) SHOpenRegStream2W(HKEY hkey, LPCWSTR pszSubkey, LPCWSTR pszValue, DWORD grfMode);
#ifdef UNICODE
#define SHOpenRegStream2  SHOpenRegStream2W
#else
#define SHOpenRegStream2  SHOpenRegStream2A
#endif
#undef SHOpenRegStream
#define SHOpenRegStream SHOpenRegStream2
LWSTDAPI SHCreateStreamOnFileA(LPCSTR pszFile, DWORD grfMode, IStream **ppstm);
LWSTDAPI SHCreateStreamOnFileW(LPCWSTR pszFile, DWORD grfMode, IStream **ppstm);
#ifdef UNICODE
#define SHCreateStreamOnFile  SHCreateStreamOnFileW
#else
#define SHCreateStreamOnFile  SHCreateStreamOnFileA
#endif
#if (_WIN32_IE >= 0x0600)
LWSTDAPI SHCreateStreamOnFileEx(LPCWSTR pszFile, DWORD grfMode, DWORD dwAttributes, BOOL fCreate, IStream *pstmTemplate, IStream **ppstm);
#endif
#if (_WIN32_IE >= _WIN32_IE_IE501)
LWSTDAPI_(IStream *) SHCreateMemStream(const BYTE *pInit, UINT cbInit);
#endif
#endif
#ifndef NO_SHLWAPI_HTTP
#if (_WIN32_IE >= 0x0603)
LWSTDAPI GetAcceptLanguagesA(LPSTR psz, DWORD *pcch);
LWSTDAPI GetAcceptLanguagesW(LPWSTR psz, DWORD *pcch);
#ifdef UNICODE
#define GetAcceptLanguages  GetAcceptLanguagesW
#else
#define GetAcceptLanguages  GetAcceptLanguagesA
#endif
#endif
#endif
#if (_WIN32_IE < _WIN32_IE_IE70) && !defined(NO_SHLWAPI_STOPWATCH)
#define SPMODE_SHELL      0x00000001
#define SPMODE_DEBUGOUT   0x00000002
#define SPMODE_TEST       0x00000004
#define SPMODE_BROWSER    0x00000008
#define SPMODE_FLUSH      0x00000010
#define SPMODE_EVENT      0x00000020
#define SPMODE_MSVM       0x00000040
#define SPMODE_FORMATTEXT 0x00000080
#define SPMODE_PROFILE    0x00000100
#define SPMODE_DEBUGBREAK 0x00000200
#define SPMODE_MSGTRACE   0x00000400
#define SPMODE_PERFTAGS   0x00000800
#define SPMODE_MEMWATCH   0x00001000
#define SPMODE_DBMON      0x00002000
#define SPMODE_MULTISTOP  0x00004000
#ifndef NO_ETW_TRACING
#define SPMODE_EVENTTRACE 0x00008000
#endif
DWORD WINAPI StopWatchMode(void);
DWORD WINAPI StopWatchFlush(void);
#endif
#if (_WIN32_IE >= _WIN32_IE_IE501)
    LWSTDAPI_(void) IUnknown_Set(IUnknown ** ppunk, IUnknown * punk);
    LWSTDAPI_(void) IUnknown_AtomicRelease(void ** ppunk);
    LWSTDAPI IUnknown_GetWindow(IUnknown* punk, HWND* phwnd);
    LWSTDAPI IUnknown_SetSite(IUnknown *punk, IUnknown *punkSite);
    LWSTDAPI IUnknown_GetSite(IUnknown *punk, REFIID riid, void **ppv);
    LWSTDAPI IUnknown_QueryService(IUnknown* punk, REFGUID guidService, REFIID riid, void ** ppvOut);
#endif
#if (_WIN32_IE >= _WIN32_IE_IE501)

#undef IStream_Read
#undef IStream_Write

LWSTDAPI IStream_Read(IStream *pstm, void *pv, ULONG cb);
LWSTDAPI IStream_Write(IStream *pstm, const void *pv, ULONG cb);
LWSTDAPI IStream_Reset(IStream *pstm);
LWSTDAPI IStream_Size(IStream *pstm, ULARGE_INTEGER *pui);
#ifndef __IConnectionPoint_FWD_DEFINED__
#define __IConnectionPoint_FWD_DEFINED__
typedef interface IConnectionPoint IConnectionPoint;
#endif
LWSTDAPI ConnectToConnectionPoint(IUnknown* punk, REFIID riidEvent, BOOL fConnect, IUnknown* punkTarget, DWORD* pdwCookie, IConnectionPoint** ppcpOut);
#endif
#if (_WIN32_IE >= _WIN32_IE_IE60)
LWSTDAPI IStream_ReadPidl(IStream *pstm, PIDLIST_RELATIVE *ppidlOut);
LWSTDAPI IStream_WritePidl(IStream *pstm, PCUIDLIST_RELATIVE pidlWrite);
#endif
#if (_WIN32_IE >= _WIN32_IE_IE70)
LWSTDAPI IStream_ReadStr(IStream *pstm, PWSTR *ppsz);
LWSTDAPI IStream_WriteStr(IStream *pstm, PCWSTR psz);
LWSTDAPI IStream_Copy(IStream *pstmFrom, IStream *pstmTo, DWORD cb);
#endif
#if (_WIN32_IE >= 0x0600)
#define SHGVSPB_PERUSER             0x00000001
#define SHGVSPB_ALLUSERS            0x00000002
#define SHGVSPB_PERFOLDER           0x00000004
#define SHGVSPB_ALLFOLDERS          0x00000008
#define SHGVSPB_INHERIT             0x00000010
#define SHGVSPB_ROAM                0x00000020
#define SHGVSPB_NOAUTODEFAULTS      0x80000000
#define SHGVSPB_FOLDER              (SHGVSPB_PERUSER | SHGVSPB_PERFOLDER)
#define SHGVSPB_FOLDERNODEFAULTS    (SHGVSPB_PERUSER | SHGVSPB_PERFOLDER | SHGVSPB_NOAUTODEFAULTS)
#define SHGVSPB_USERDEFAULTS        (SHGVSPB_PERUSER | SHGVSPB_ALLFOLDERS)
#define SHGVSPB_GLOBALDEFAULTS      (SHGVSPB_ALLUSERS | SHGVSPB_ALLFOLDERS)
LWSTDAPI SHGetViewStatePropertyBag(PCIDLIST_ABSOLUTE pidl, LPCWSTR pszBagName, DWORD dwFlags, REFIID riid, void** ppv);
#endif
#define FDTF_SHORTTIME          0x00000001
#define FDTF_SHORTDATE          0x00000002
#define FDTF_DEFAULT            (FDTF_SHORTDATE | FDTF_SHORTTIME)
#define FDTF_LONGDATE           0x00000004
#define FDTF_LONGTIME           0x00000008
#define FDTF_RELATIVE           0x00000010
#define FDTF_LTRDATE            0x00000100
#define FDTF_RTLDATE            0x00000200
#define FDTF_NOAUTOREADINGORDER 0x00000400
LWSTDAPI_(int)  SHFormatDateTimeA(const FILETIME UNALIGNED * pft, DWORD * pdwFlags, LPSTR pszBuf, UINT cchBuf);
LWSTDAPI_(int)  SHFormatDateTimeW(const FILETIME UNALIGNED * pft, DWORD * pdwFlags, LPWSTR pszBuf, UINT cchBuf);
#ifdef UNICODE
#define SHFormatDateTime  SHFormatDateTimeW
#else
#define SHFormatDateTime  SHFormatDateTimeA
#endif
#if (_WIN32_IE >= _WIN32_IE_IE501)
LWSTDAPI_(int)  SHAnsiToUnicode(LPCSTR pszSrc, LPWSTR pwszDst, int cwchBuf);
LWSTDAPI_(int)  SHAnsiToAnsi(LPCSTR pszSrc, LPSTR pszDst, int cchBuf);
LWSTDAPI_(int)  SHUnicodeToAnsi(LPCWSTR pwszSrc, LPSTR pszDst, int cchBuf);
LWSTDAPI_(int)  SHUnicodeToUnicode(LPCWSTR pwzSrc, LPWSTR pwzDst, int cwchBuf);
#ifdef UNICODE
#define SHTCharToUnicode(wzSrc, wzDest, cchSize)                SHUnicodeToUnicode(wzSrc, wzDest, cchSize)
#define SHTCharToAnsi(wzSrc, szDest, cchSize)                   SHUnicodeToAnsi(wzSrc, szDest, cchSize)
#define SHUnicodeToTChar(wzSrc, wzDest, cchSize)                SHUnicodeToUnicode(wzSrc, wzDest, cchSize)
#define SHAnsiToTChar(szSrc, wzDest, cchSize)                   SHAnsiToUnicode(szSrc, wzDest, cchSize)
#else
#define SHTCharToUnicode(szSrc, wzDest, cchSize)                SHAnsiToUnicode(szSrc, wzDest, cchSize)
#define SHTCharToAnsi(szSrc, szDest, cchSize)                   SHAnsiToAnsi(szSrc, szDest, cchSize)
#define SHUnicodeToTChar(wzSrc, szDest, cchSize)                SHUnicodeToAnsi(wzSrc, szDest, cchSize)
#define SHAnsiToTChar(szSrc, szDest, cchSize)                   SHAnsiToAnsi(szSrc, szDest, cchSize)
#endif
#endif
#if (_WIN32_IE >= _WIN32_IE_IE501)
LWSTDAPI_(int) SHMessageBoxCheckA(HWND hwnd, LPCSTR pszText, LPCSTR pszCaption, UINT uType, int iDefault, LPCSTR pszRegVal);
LWSTDAPI_(int) SHMessageBoxCheckW(HWND hwnd, LPCWSTR pszText, LPCWSTR pszCaption, UINT uType, int iDefault, LPCWSTR pszRegVal);
#ifdef UNICODE
#define SHMessageBoxCheck  SHMessageBoxCheckW
#else
#define SHMessageBoxCheck  SHMessageBoxCheckA
#endif
#endif
#if (_WIN32_IE >= _WIN32_IE_IE501)
LWSTDAPI_(LRESULT) SHSendMessageBroadcastA(UINT uMsg, WPARAM wParam, LPARAM lParam);
LWSTDAPI_(LRESULT) SHSendMessageBroadcastW(UINT uMsg, WPARAM wParam, LPARAM lParam);
#ifdef UNICODE
#define SHSendMessageBroadcast  SHSendMessageBroadcastW
#else
#define SHSendMessageBroadcast  SHSendMessageBroadcastA
#endif
LWSTDAPI_(CHAR) SHStripMneumonicA(LPSTR pszMenu);
LWSTDAPI_(WCHAR) SHStripMneumonicW(LPWSTR pszMenu);
#ifdef UNICODE
#define SHStripMneumonic  SHStripMneumonicW
#else
#define SHStripMneumonic  SHStripMneumonicA
#endif
#ifndef NO_SHLWAPI_ISOS
#define OS_WINDOWS                  0
#define OS_NT                       1
#define OS_WIN95ORGREATER           2
#define OS_NT4ORGREATER             3
#define OS_WIN98ORGREATER           5
#define OS_WIN98_GOLD               6
#define OS_WIN2000ORGREATER         7
#define OS_WIN2000PRO               8
#define OS_WIN2000SERVER            9
#define OS_WIN2000ADVSERVER         10
#define OS_WIN2000DATACENTER        11
#define OS_WIN2000TERMINAL          12
#define OS_EMBEDDED                 13
#define OS_TERMINALCLIENT           14
#define OS_TERMINALREMOTEADMIN      15
#define OS_WIN95_GOLD               16
#define OS_MEORGREATER              17
#define OS_XPORGREATER              18
#define OS_HOME                     19
#define OS_PROFESSIONAL             20
#define OS_DATACENTER               21
#define OS_ADVSERVER                22
#define OS_SERVER                   23
#define OS_TERMINALSERVER           24
#define OS_PERSONALTERMINALSERVER   25
#define OS_FASTUSERSWITCHING        26
#define OS_WELCOMELOGONUI           27
#define OS_DOMAINMEMBER             28
#define OS_ANYSERVER                29
#define OS_WOW6432                  30
#define OS_WEBSERVER                31
#define OS_SMALLBUSINESSSERVER      32
#define OS_TABLETPC                 33
#define OS_SERVERADMINUI            34
#define OS_MEDIACENTER              35
#define OS_APPLIANCE                36
LWSTDAPI_(BOOL) IsOS(DWORD dwOS);
#endif
#endif
typedef enum
{
    GLOBALCOUNTER_SEARCHMANAGER,
    GLOBALCOUNTER_SEARCHOPTIONS,
    GLOBALCOUNTER_FOLDERSETTINGSCHANGE,
    GLOBALCOUNTER_RATINGS,
    GLOBALCOUNTER_APPROVEDSITES,
    GLOBALCOUNTER_RESTRICTIONS,
    GLOBALCOUNTER_SHELLSETTINGSCHANGED,
    GLOBALCOUNTER_SYSTEMPIDLCHANGE,
    GLOBALCOUNTER_OVERLAYMANAGER,
    GLOBALCOUNTER_QUERYASSOCIATIONS,
    GLOBALCOUNTER_IESESSIONS,
    GLOBALCOUNTER_IEONLY_SESSIONS,
    GLOBALCOUNTER_APPLICATION_DESTINATIONS,
    __UNUSED_RECYCLE_WAS_GLOBALCOUNTER_CSCSYNCINPROGRESS,
    GLOBALCOUNTER_BITBUCKETNUMDELETERS,
    GLOBALCOUNTER_RECYCLEDIRTYCOUNT_SHARES,
    GLOBALCOUNTER_RECYCLEDIRTYCOUNT_DRIVE_A,
    GLOBALCOUNTER_RECYCLEDIRTYCOUNT_DRIVE_B,
    GLOBALCOUNTER_RECYCLEDIRTYCOUNT_DRIVE_C,
    GLOBALCOUNTER_RECYCLEDIRTYCOUNT_DRIVE_D,
    GLOBALCOUNTER_RECYCLEDIRTYCOUNT_DRIVE_E,
    GLOBALCOUNTER_RECYCLEDIRTYCOUNT_DRIVE_F,
    GLOBALCOUNTER_RECYCLEDIRTYCOUNT_DRIVE_G,
    GLOBALCOUNTER_RECYCLEDIRTYCOUNT_DRIVE_H,
    GLOBALCOUNTER_RECYCLEDIRTYCOUNT_DRIVE_I,
    GLOBALCOUNTER_RECYCLEDIRTYCOUNT_DRIVE_J,
    GLOBALCOUNTER_RECYCLEDIRTYCOUNT_DRIVE_K,
    GLOBALCOUNTER_RECYCLEDIRTYCOUNT_DRIVE_L,
    GLOBALCOUNTER_RECYCLEDIRTYCOUNT_DRIVE_M,
    GLOBALCOUNTER_RECYCLEDIRTYCOUNT_DRIVE_N,
    GLOBALCOUNTER_RECYCLEDIRTYCOUNT_DRIVE_O,
    GLOBALCOUNTER_RECYCLEDIRTYCOUNT_DRIVE_P,
    GLOBALCOUNTER_RECYCLEDIRTYCOUNT_DRIVE_Q,
    GLOBALCOUNTER_RECYCLEDIRTYCOUNT_DRIVE_R,
    GLOBALCOUNTER_RECYCLEDIRTYCOUNT_DRIVE_S,
    GLOBALCOUNTER_RECYCLEDIRTYCOUNT_DRIVE_T,
    GLOBALCOUNTER_RECYCLEDIRTYCOUNT_DRIVE_U,
    GLOBALCOUNTER_RECYCLEDIRTYCOUNT_DRIVE_V,
    GLOBALCOUNTER_RECYCLEDIRTYCOUNT_DRIVE_W,
    GLOBALCOUNTER_RECYCLEDIRTYCOUNT_DRIVE_X,
    GLOBALCOUNTER_RECYCLEDIRTYCOUNT_DRIVE_Y,
    GLOBALCOUNTER_RECYCLEDIRTYCOUNT_DRIVE_Z,
    __UNUSED_RECYCLE_WAS_GLOBALCOUNTER_RECYCLEDIRTYCOUNT_SERVERDRIVE,
    __UNUSED_RECYCLE_WAS_GLOBALCOUNTER_RECYCLEGLOBALDIRTYCOUNT,
    GLOBALCOUNTER_RECYCLEBINENUM,
    GLOBALCOUNTER_RECYCLEBINCORRUPTED,
    GLOBALCOUNTER_RATINGS_STATECOUNTER,
    GLOBALCOUNTER_PRIVATE_PROFILE_CACHE,
    GLOBALCOUNTER_INTERNETTOOLBAR_LAYOUT,
    GLOBALCOUNTER_FOLDERDEFINITION_CACHE,
    GLOBALCOUNTER_COMMONPLACES_LIST_CACHE,
    GLOBALCOUNTER_PRIVATE_PROFILE_CACHE_MACHINEWIDE,
    GLOBALCOUNTER_ASSOCCHANGED,
    GLOBALCOUNTER_MAXIMUMVALUE
} SHGLOBALCOUNTER;
LWSTDAPI_(long) SHGlobalCounterGetValue(const SHGLOBALCOUNTER id);
LWSTDAPI_(long) SHGlobalCounterIncrement(const SHGLOBALCOUNTER id);
LWSTDAPI_(long) SHGlobalCounterDecrement(const SHGLOBALCOUNTER id);
#if (_WIN32_IE >= 0x0603)
LWSTDAPI_(HANDLE)   SHAllocShared(const void *pvData, DWORD dwSize, DWORD dwProcessId);
LWSTDAPI_(BOOL)     SHFreeShared(HANDLE hData, DWORD dwProcessId);
LWSTDAPI_(void *)   SHLockShared(HANDLE hData, DWORD dwProcessId);
LWSTDAPI_(BOOL)     SHUnlockShared(void *pvData);
#endif
#if (_WIN32_IE >= _WIN32_IE_IE501)
LWSTDAPI_(UINT) WhichPlatform(void);
#define PLATFORM_UNKNOWN     0
#define PLATFORM_IE3         1
#define PLATFORM_BROWSERONLY 1
#define PLATFORM_INTEGRATED  2
typedef struct
{
    const IID * piid;
    int         dwOffset;
} QITAB, *LPQITAB;
typedef const QITAB *LPCQITAB;

#define QITABENTMULTI(Cthis, Ifoo, Iimpl)	{ (IID*) &IID_##Ifoo, OFFSETOFCLASS(Iimpl, Cthis) }

#define QITABENTMULTI2(Cthis, Ifoo, Iimpl)	{ (IID*) &Ifoo, OFFSETOFCLASS(Iimpl, Cthis) }
#define QITABENT(Cthis, Ifoo) QITABENTMULTI(Cthis, Ifoo, Ifoo)
STDAPI QISearch(void* that, LPCQITAB pqit, REFIID riid, void **ppv);
#endif
#ifndef STATIC_CAST
    #undef  STATIC_CAST
    #define STATIC_CAST(typ)   (typ)
#endif
#ifndef OFFSETOFCLASS
#define OFFSETOFCLASS(base, derived) \
    ((DWORD)(DWORD_PTR)(STATIC_CAST(base*)((derived*)8))-8)
#endif
#define ILMM_IE4    0
LWSTDAPI_(BOOL)SHIsLowMemoryMachine(DWORD dwType);
LWSTDAPI_(int) GetMenuPosFromID(HMENU hmenu, UINT id);
LWSTDAPI SHGetInverseCMAP(BYTE *pbMap, ULONG cbMap);
#if (_WIN32_IE >= 0x0500)
#define SHACF_DEFAULT                   0x00000000
#define SHACF_FILESYSTEM                0x00000001
#define SHACF_URLALL                    (SHACF_URLHISTORY | SHACF_URLMRU)
#define SHACF_URLHISTORY                0x00000002
#define SHACF_URLMRU                    0x00000004
#define SHACF_USETAB                    0x00000008
#define SHACF_FILESYS_ONLY              0x00000010
#if (_WIN32_IE >= 0x0600)
#define SHACF_FILESYS_DIRS              0x00000020
#endif
#if (_WIN32_IE >= _WIN32_IE_IE70)
#define SHACF_VIRTUAL_NAMESPACE         0x00000040
#endif
#define SHACF_AUTOSUGGEST_FORCE_ON      0x10000000
#define SHACF_AUTOSUGGEST_FORCE_OFF     0x20000000
#define SHACF_AUTOAPPEND_FORCE_ON       0x40000000
#define SHACF_AUTOAPPEND_FORCE_OFF      0x80000000
LWSTDAPI SHAutoComplete(HWND hwndEdit, DWORD dwFlags);
#if (_WIN32_IE >= _WIN32_IE_IE60SP2)
LWSTDAPI SHCreateThreadRef(LONG *pcRef, IUnknown **ppunk);
#endif
LWSTDAPI SHSetThreadRef(IUnknown *punk);
LWSTDAPI SHGetThreadRef(IUnknown **ppunk);
LWSTDAPI_(BOOL) SHSkipJunction(IBindCtx* pbc, const CLSID *pclsid);
#endif
enum
{
    CTF_INSIST              = 0x00000001,
    CTF_THREAD_REF          = 0x00000002,
    CTF_PROCESS_REF         = 0x00000004,
    CTF_COINIT_STA          = 0x00000008,
    CTF_COINIT              = 0x00000008,
#if (_WIN32_IE >= _WIN32_IE_IE60)
    CTF_FREELIBANDEXIT      = 0x00000010,
    CTF_REF_COUNTED         = 0x00000020,
    CTF_WAIT_ALLOWCOM       = 0x00000040,
#endif
#if (_WIN32_IE >= _WIN32_IE_IE70)
    CTF_UNUSED              = 0x00000080,
    CTF_INHERITWOW64        = 0x00000100,
#endif
#if (NTDDI_VERSION >= NTDDI_VISTA)
    CTF_WAIT_NO_REENTRANCY  = 0x00000200,
#endif
#if (NTDDI_VERSION >= NTDDI_WIN7)
    CTF_KEYBOARD_LOCALE     = 0x00000400,
    CTF_OLEINITIALIZE       = 0x00000800,
    CTF_COINIT_MTA          = 0x00001000,
    CTF_NOADDREFLIB         = 0x00002000,
#endif
};
typedef DWORD SHCT_FLAGS;
LWSTDAPI_(BOOL) SHCreateThread(LPTHREAD_START_ROUTINE pfnThreadProc, void *pData, SHCT_FLAGS flags, LPTHREAD_START_ROUTINE pfnCallback);
LWSTDAPI_(BOOL) SHCreateThreadWithHandle(LPTHREAD_START_ROUTINE pfnThreadProc, void *pData, SHCT_FLAGS flags, LPTHREAD_START_ROUTINE pfnCallback, HANDLE *pHandle);
#if (_WIN32_IE >= _WIN32_IE_IE60)
LWSTDAPI SHReleaseThreadRef();
#endif
#ifndef NO_SHLWAPI_GDI
LWSTDAPI_(HPALETTE) SHCreateShellPalette(HDC hdc);
#if (_WIN32_IE >= 0x0500)
LWSTDAPI_(void)     ColorRGBToHLS(COLORREF clrRGB, WORD* pwHue, WORD* pwLuminance, WORD* pwSaturation);
LWSTDAPI_(COLORREF) ColorHLSToRGB(WORD wHue, WORD wLuminance, WORD wSaturation);
LWSTDAPI_(COLORREF) ColorAdjustLuma(COLORREF clrRGB, int n, BOOL fScale);
#endif
#endif
typedef struct _DLLVERSIONINFO
{
    DWORD cbSize;
    DWORD dwMajorVersion;
    DWORD dwMinorVersion;
    DWORD dwBuildNumber;
    DWORD dwPlatformID;
} DLLVERSIONINFO;
#define DLLVER_PLATFORM_WINDOWS         0x00000001
#define DLLVER_PLATFORM_NT              0x00000002
#if (_WIN32_IE >= 0x0501)
typedef struct _DLLVERSIONINFO2
{
    DLLVERSIONINFO info1;
    DWORD dwFlags;
    ULONGLONG ullVersion;
} DLLVERSIONINFO2;
#define DLLVER_MAJOR_MASK                    0xFFFF000000000000
#define DLLVER_MINOR_MASK                    0x0000FFFF00000000
#define DLLVER_BUILD_MASK                    0x00000000FFFF0000
#define DLLVER_QFE_MASK                      0x000000000000FFFF
#endif
#define MAKEDLLVERULL(major, minor, build, qfe) \
        (((ULONGLONG)(major) << 48) |        \
         ((ULONGLONG)(minor) << 32) |        \
         ((ULONGLONG)(build) << 16) |        \
         ((ULONGLONG)(  qfe) <<  0))
typedef HRESULT (CALLBACK* DLLGETVERSIONPROC)(DLLVERSIONINFO *);
STDAPI DllInstall(BOOL bInstall, LPCWSTR pszCmdLine);
#if (_WIN32_IE >= 0x0602)
LWSTDAPI_(BOOL) IsInternetESCEnabled();
#endif

#if defined(DEPRECATE_SUPPORTED)
#pragma warning(pop)
#endif
#ifdef _WIN32
#include <poppack.h>
#endif
#endif
#endif

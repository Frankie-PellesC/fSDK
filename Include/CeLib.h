/*+@@file@@----------------------------------------------------------------*//*!
 \file		CeLib.h
 \par Description 
            Extension and update of headers for PellesC compiler suite.
 \par Project: 
            PellesC Headers extension
 \date		Created  on Sun Jul  3 00:15:08 2016
 \date		Modified on Sun Jul  3 00:15:08 2016
 \author	frankie
\*//*-@@file@@----------------------------------------------------------------*/

#ifndef __CELIB_H__
#define __CELIB_H__
#if __POCC__ >= 500
#pragma once
#endif
#include <stdio.h>
#define CENCODEMAX	(64 * 1024)
#define GETBIT(pb, i)	((pb)[(i) / 8] & (1 << ((i) % 8)))
#define SETBIT(pb, i)	((pb)[(i) / 8] |= (1 << ((i) % 8)))
#define CLEARBIT(pb, i)	((pb)[(i) / 8] &= ~(1 << ((i) % 8)))
#define BITSTOBYTES(b)	((int)(((b) + 7) / 8))
#define ceCASIGN_KEY_USAGE (CERT_KEY_CERT_SIGN_KEY_USAGE | CERT_DIGITAL_SIGNATURE_KEY_USAGE | CERT_CRL_SIGN_KEY_USAGE)
#define WSZARRAYSIZE(a)		((sizeof(a)/sizeof((a)[0])) - 1)
#define wszCERTENROLLSHAREPATH	L"CertSrv\\CertEnroll"
#define cwcHRESULTSTRING	40
#define cwcDWORDSPRINTF		(1 + 10 + 1)
#define SAFE_SUBTRACT_POINTERS(p1, p2) (assert(sizeof((*p1)) == sizeof(*(p2))), (DWORD)((p1) - (p2)))
#define printf	Use_wprintf_Instead_Of_printf
#define _LeaveError(hr, label, pszMessage) _LeaveErrorStr2((hr), label, (pszMessage), NULL, S_OK)
#define _LeaveError2(hr, label, pszMessage, hr2) _LeaveErrorStr2((hr), label, (pszMessage), NULL, (hr2))
#define _LeaveErrorStr(hr, label, pszMessage, pwszData) _LeaveErrorStr2((hr), label, (pszMessage), (pwszData), S_OK)
#define _LeaveErrorStr2(hr, label, pszMessage, pwszData, hr2) \
    { \
		ceERRORPRINTLINESTR((pszMessage), (pwszData), (hr)); \
		goto label; \
    }
#define _LeaveIfError(hr, label, pszMessage) _LeaveIfErrorStr2((hr), label, (pszMessage), NULL, S_OK)
#define _LeaveIfError2(hr, label, pszMessage, hr2) _LeaveIfErrorStr2((hr), label, (pszMessage), NULL, (hr2))
#define _LeaveIfErrorStr(hr, label, pszMessage, pwszData) _LeaveIfErrorStr2((hr), label, (pszMessage), (pwszData), S_OK)
#define _LeaveIfErrorStr2(hr, label, pszMessage, pwszData, hr2) \
    { \
	if (S_OK != (hr)) \
	{ \
	    ceERRORPRINTLINESTR((pszMessage), (pwszData), (hr)); \
	    goto label; \
	} \
    }
#define _PrintErrorStr(hr, pszMessage, pwsz) ceERRORPRINTLINESTR((pszMessage), (pwsz), (hr))
#define _PrintErrorStr2(hr, pszMessage, pwsz, hr2) _PrintErrorStr((hr), (pszMessage), (pwsz))
#define _PrintError2(hr, pszMessage, hr2) _PrintErrorStr((hr), (pszMessage), NULL)
#define _PrintError(hr, pszMessage) _PrintErrorStr((hr), (pszMessage), NULL)
#define _PrintIfErrorStr(hr, pszMessage, pwsz) \
    { \
	if (S_OK != (hr)) \
	{ \
	    ceERRORPRINTLINESTR((pszMessage), (pwsz), (hr)); \
	} \
    }
#define _PrintIfErrorStr2(hr, pszMessage, pwsz, hr2) _PrintIfErrorStr((hr), (pszMessage), (pwsz))
#define _PrintIfError2(hr, pszMessage, hr2) _PrintIfErrorStr((hr), (pszMessage), NULL)
#define _PrintIfError(hr, pszMessage) _PrintIfErrorStr((hr), (pszMessage), NULL)
#define _JumpErrorStr(hr, label, pszMessage, pwsz) \
    _JumpError((hr), label, (pszMessage))
#define _JumpError(hr, label, pszMessage) \
    { \
		ceERRORPRINTLINESTR((pszMessage), NULL, (hr)); \
		goto label; \
    }
#define _JumpIfErrorStr(hr, label, pszMessage, pwsz) \
    { \
		if (S_OK != (hr)) \
		{ \
		    ceERRORPRINTLINESTR((pszMessage), (pwsz), (hr)); \
		    goto label; \
		} \
    }
#define _JumpIfErrorStr2(hr, label, pszMessage, pwsz, hr2) _JumpIfErrorStr((hr), label, (pszMessage), NULL)
#define _JumpIfError2(hr, label, pszMessage, hr2) _JumpIfErrorStr((hr), label, (pszMessage), NULL)
#define _JumpIfError(hr, label, pszMessage) _JumpIfErrorStr((hr), label, (pszMessage), NULL)
#if DBG
#define ceERRORPRINTLINE(pszMessage, hr) ceErrorPrintLine(__FILE__, __LINE__, (pszMessage), NULL, (hr))
#define ceERRORPRINTLINESTR(pszMessage, pwszData, hr) ceErrorPrintLine(__FILE__, __LINE__, (pszMessage), (pwszData), (hr))
#define DBGPRINT(a)	ceDbgPrintf
#else
#define ceERRORPRINTLINE(pszMessage, hr)
#define ceERRORPRINTLINESTR(pszMessage, pwszData, hr)
#define DBGPRINT(a)
#endif
typedef WCHAR *	    CSPZZWSTR;
typedef WCHAR const *  CSPCZZWSTR;
typedef PCWSTR const *     CSPCZPCWSTR;
int WINAPIV ceDbgPrintf(BOOL fDebug, char const *pszfmt, ...);
VOID ceErrorPrintLine( char const *pszFile,  DWORD line,  char const *pszMessage,  WCHAR const *pwszData,  HRESULT hr);
HRESULT ceHLastError(VOID);
HRESULT ceHError( HRESULT hr);
#define ceHEXCEPTIONCODE(_ex) ceHError((_ex).GetSeCode())
#define chLBRACE	'{'
#define chRBRACE	'}'
#define szLBRACE	"{"
#define szRBRACE	"}"
#define wcLBRACE	L'{'
#define wcRBRACE	L'}'
#define wszLBRACE	L"{"
#define wszRBRACE	L"}"
#define chLPAREN	'('
#define chRPAREN	')'
#define szLPAREN	"("
#define szRPAREN	")"
#define wcLPAREN	L'('
#define wcRPAREN	L')'
#define wszLPAREN	L"("
#define wszRPAREN	L")"
#define CVT_WEEKS	(7 * CVT_DAYS)
#define CVT_DAYS	(24 * CVT_HOURS)
#define CVT_HOURS	(60 * CVT_MINUTES)
#define CVT_MINUTES	(60 * CVT_SECONDS)
#define CVT_SECONDS	(1)
#define CVT_BASE	(1000 * 1000 * 10)
enum ENUM_PERIOD
{
    ENUM_PERIOD_INVALID = -1,
    ENUM_PERIOD_SECONDS = 0,
    ENUM_PERIOD_MINUTES,
    ENUM_PERIOD_HOURS,
    ENUM_PERIOD_DAYS,
    ENUM_PERIOD_WEEKS,
    ENUM_PERIOD_MONTHS,
    ENUM_PERIOD_YEARS
};
#define IsNullOrEmptyBStr(str) \
    __pragma(prefast(suppress: __WARNING_325, "Intentional NULL check, avoid SysStringLen")) \
    (NULL == str || 0 == SysStringByteLen(str))
#define IsNullBStr(str) \
    __pragma(prefast(suppress: __WARNING_325, "Intentional NULL check")) \
    (NULL == str)
HMODULE ceLoadSystem32Library(WCHAR const *pwszLibFileName);
typedef struct _LLFILETIME
{
	union
	{
		LONGLONG ll;
		FILETIME ft;
	};
} LLFILETIME;
__inline VOID ceAddToFileTime(FILETIME *pft, LONGLONG ll)
{
	LLFILETIME llft;
	llft.ft = *pft;
	llft.ll += ll;
	*pft = llft.ft;
}
__inline LONGLONG ceSubtractFileTimes(FILETIME const *pft1, FILETIME const *pft2)
{
	LLFILETIME llft1;
	LLFILETIME llft2;
	llft1.ft = *pft1;
	llft2.ft = *pft2;
	return (llft1.ll - llft2.ll);
}
HRESULT ceMakeExprDate(DATE *pDate, LONG lDelta, enum ENUM_PERIOD enumPeriod);
HRESULT ceTranslatePeriodUnits(WCHAR const *pwszPeriod, LONG lCount, enum ENUM_PERIOD *penumPeriod, LONG *plCount);
WCHAR const *ceGetOIDNameA(char const *pszObjId);
WCHAR const *ceGetOIDName(WCHAR const *pwszObjId);
BOOL ceDecodeObject(DWORD dwEncodingType, LPCSTR lpszStructType, BYTE const *pbEncoded, DWORD cbEncoded, BOOL fCoTaskMemAlloc, VOID **ppvStructInfo, DWORD *pcbStructInfo);
BOOL ceEncodeObject(DWORD dwEncodingType, LPCSTR lpszStructType, VOID const *pvStructInfo, DWORD dwFlags, BOOL fCoTaskMemAlloc, BYTE **ppbEncoded, DWORD *pcbEncoded);
WCHAR *ceDuplicateString(WCHAR const *pwsz);
HRESULT ceDupString(WCHAR const *pwszIn, PWSTR *ppwszOut);
BOOL ceConvertWszToSz(PSTR *ppsz, WCHAR const *pwc, LONG cb);
BOOL ceConvertWszToBstr(BSTR *pbstr, WCHAR const *pwc, LONG cb);
BOOL ceConvertSzToWsz(PWSTR *ppwsz, char const *pch, LONG cch);
BOOL ceConvertSzToBstr(BSTR *pbstr, CHAR const *pch, LONG cch);
VOID ceFreeBstr(BSTR *pstr);
HRESULT ceDateToFileTime(DATE const *pDate, FILETIME *pft);
HRESULT ceFileTimeToDate(FILETIME const *pft, DATE *pDate);
HRESULT ceVerifyObjIdA(char const *pszObjId);
HRESULT ceVerifyObjId(WCHAR const *pwszObjId);
HRESULT ceVerifyAndConvertWszToSzObjIds(CSPZZWSTR ppwszObjIds, DWORD *pdwcObjIds, PZPSTR *pppszObjIds);
HRESULT ceVerifyAltNameString(LONG NameChoice, BSTR strName);
HRESULT ceDispatchSetErrorInfo(HRESULT hrError, WCHAR const *pwszDescription, WCHAR const *pwszProgId, IID const *piid);
VOID ceInitErrorMessageText(HMODULE hMod, DWORD idsUnexpected, DWORD idsUnknownErrorCode);
WCHAR const *ceGetErrorMessageText(HRESULT hr, BOOL fHResultString);
WCHAR const *ceGetErrorMessageTextEx(HRESULT hr, BOOL fHResultString, WCHAR const *const *papwszInsertionText);
WCHAR const *ceHResultToString(PWSTR awchr, HRESULT hr);
#define cwcFILENAMESUFFIXMAX		20
#define cwcSUFFIXMAX	(1 + 5 + 1)
#define wszFCSAPARM_SERVERDNSNAME		L"%1"
#define wszFCSAPARM_SERVERSHORTNAME		L"%2"
#define wszFCSAPARM_SANITIZEDCANAME		L"%3"
#define wszFCSAPARM_CERTFILENAMESUFFIX		L"%4"
#define wszFCSAPARM_DOMAINDN			L"%5"
#define wszFCSAPARM_CONFIGDN			L"%6"
#define wszFCSAPARM_SANITIZEDCANAMEHASH		L"%7"
#define wszFCSAPARM_CRLFILENAMESUFFIX		L"%8"
#define wszFCSAPARM_CRLDELTAFILENAMESUFFIX	L"%9"
#define wszFCSAPARM_DSCRLATTRIBUTE		L"%10"
#define wszFCSAPARM_DSCACERTATTRIBUTE		L"%11"
#define wszFCSAPARM_DSUSERCERTATTRIBUTE		L"%12"
#define wszFCSAPARM_DSKRACERTATTRIBUTE		L"%13"
#define wszFCSAPARM_DSCROSSCERTPAIRATTRIBUTE	L"%14"
HRESULT ceFormatCertsrvStringArray(BOOL fURL, LPCWSTR pwszServerName_p1_2, LPCWSTR pwszSanitizedName_p3_7, DWORD iCert_p4, DWORD iCertTarget_p4, LPCWSTR pwszDomainDN_p5, LPCWSTR pwszConfigDN_p6, DWORD iCRL_p8, BOOL fDeltaCRL_p9, BOOL fDSAttrib_p10_11, DWORD cStrings, LPCWSTR *apwszStringsIn, LPWSTR *apwszStringsOut);
HRESULT ceBuildPathAndExt(WCHAR const *pwszDir, WCHAR const *pwszFile, WCHAR const *pwszExt, PWSTR *ppwszPath);
HRESULT ceInternetCanonicalizeUrl(WCHAR const *pwszIn, PWSTR *ppwszOut);
int ceWtoI(WCHAR const *pwszDigitString, BOOL *pfValid);
int celstrcmpiL(WCHAR const *pwsz1, WCHAR const *pwsz2);
HRESULT ceIsConfigLocal(WCHAR const *pwszConfig, PWSTR *ppwszMachine, BOOL *pfLocal);
#endif

/*+@@file@@----------------------------------------------------------------*//*!
 \file		InputScope.h
 \par Description 
            Extension and update of headers for PellesC compiler suite.
 \par Project: 
            PellesC Headers extension
 \date		Created  on Sun Jul 17 01:08:34 2016
 \date		Modified on Sun Jul 17 01:08:34 2016
 \author	frankie
\*//*-@@file@@----------------------------------------------------------------*/

#ifndef __REQUIRED_RPCNDR_H_VERSION__
#define __REQUIRED_RPCNDR_H_VERSION__ 500
#endif
#ifndef __REQUIRED_RPCSAL_H_VERSION__
#define __REQUIRED_RPCSAL_H_VERSION__ 100
#endif
#include <rpc.h>
#include <rpcndr.h>
#ifndef __RPCNDR_H_VERSION__
#error this stub requires an updated version of <rpcndr.h>
#endif
#ifndef COM_NO_WINDOWS_H
#include <windows.h>
#include <ole2.h>
#endif
#ifndef __inputscope_h__
#define __inputscope_h__
#if __POCC__ >= 500
#pragma once
#endif
#ifndef __ITfInputScope_FWD_DEFINED__
#define __ITfInputScope_FWD_DEFINED__
typedef interface ITfInputScope ITfInputScope;
#endif
#ifndef __ITfInputScope2_FWD_DEFINED__
#define __ITfInputScope2_FWD_DEFINED__
typedef interface ITfInputScope2 ITfInputScope2;
#endif
#include <oaidl.h>
#include <ocidl.h>
#ifndef INPUTSCOPE_DEFINED
#define INPUTSCOPE_DEFINED
#include <windows.h>
typedef enum __MIDL___MIDL_itf_inputscope_0000_0000_0001
{
	IS_DEFAULT = 0,
	IS_URL = 1,
	IS_FILE_FULLFILEPATH = 2,
	IS_FILE_FILENAME = 3,
	IS_EMAIL_USERNAME = 4,
	IS_EMAIL_SMTPEMAILADDRESS = 5,
	IS_LOGINNAME = 6,
	IS_PERSONALNAME_FULLNAME = 7,
	IS_PERSONALNAME_PREFIX = 8,
	IS_PERSONALNAME_GIVENNAME = 9,
	IS_PERSONALNAME_MIDDLENAME = 10,
	IS_PERSONALNAME_SURNAME = 11,
	IS_PERSONALNAME_SUFFIX = 12,
	IS_ADDRESS_FULLPOSTALADDRESS = 13,
	IS_ADDRESS_POSTALCODE = 14,
	IS_ADDRESS_STREET = 15,
	IS_ADDRESS_STATEORPROVINCE = 16,
	IS_ADDRESS_CITY = 17,
	IS_ADDRESS_COUNTRYNAME = 18,
	IS_ADDRESS_COUNTRYSHORTNAME = 19,
	IS_CURRENCY_AMOUNTANDSYMBOL = 20,
	IS_CURRENCY_AMOUNT = 21,
	IS_DATE_FULLDATE = 22,
	IS_DATE_MONTH = 23,
	IS_DATE_DAY = 24,
	IS_DATE_YEAR = 25,
	IS_DATE_MONTHNAME = 26,
	IS_DATE_DAYNAME = 27,
	IS_DIGITS = 28,
	IS_NUMBER = 29,
	IS_ONECHAR = 30,
	IS_PASSWORD = 31,
	IS_TELEPHONE_FULLTELEPHONENUMBER = 32,
	IS_TELEPHONE_COUNTRYCODE = 33,
	IS_TELEPHONE_AREACODE = 34,
	IS_TELEPHONE_LOCALNUMBER = 35,
	IS_TIME_FULLTIME = 36,
	IS_TIME_HOUR = 37,
	IS_TIME_MINORSEC = 38,
	IS_NUMBER_FULLWIDTH = 39,
	IS_ALPHANUMERIC_HALFWIDTH = 40,
	IS_ALPHANUMERIC_FULLWIDTH = 41,
	IS_CURRENCY_CHINESE = 42,
	IS_BOPOMOFO = 43,
	IS_HIRAGANA = 44,
	IS_KATAKANA_HALFWIDTH = 45,
	IS_KATAKANA_FULLWIDTH = 46,
	IS_HANJA = 47,
	IS_HANGUL_HALFWIDTH = 48,
	IS_HANGUL_FULLWIDTH = 49,
	IS_PHRASELIST = -1,
	IS_REGULAREXPRESSION = -2,
	IS_SRGS = -3,
	IS_XML = -4,
	IS_ENUMSTRING = -5
} InputScope;
HRESULT WINAPI SetInputScope(HWND hwnd, InputScope inputscope);
HRESULT WINAPI SetInputScopes(HWND hwnd, const InputScope *pInputScopes, UINT cInputScopes, WCHAR **ppszPhraseList, UINT cPhrases, WCHAR *pszRegExp, WCHAR *pszSRGS);
HRESULT WINAPI SetInputScopeXML(HWND hwnd, WCHAR *pszXML);
HRESULT WINAPI SetInputScopes2(HWND hwnd, const InputScope *pInputScopes, UINT cInputScopes, IEnumString *pEnumString, WCHAR *pszRegExp, WCHAR *pszSRGS);
DEFINE_GUID(IID_ITfInputScope, 0xfde1eaee, 0x6924, 0x4cdf, 0x91, 0xe7, 0xda, 0x38, 0xcf, 0xf5, 0x55, 0x9d);
DEFINE_GUID(IID_ITfInputScope2, 0x5731eaa0, 0x6bc2, 0x4681, 0xa5, 0x32, 0x92, 0xfb, 0xb7, 0x4d, 0x7c, 0x41);
DEFINE_GUID(GUID_PROP_INPUTSCOPE, 0x1713dd5a, 0x68e7, 0x4a5b, 0x9a, 0xf6, 0x59, 0x2a, 0x59, 0x5c, 0x77, 0x8d);
extern RPC_IF_HANDLE __MIDL_itf_inputscope_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_inputscope_0000_0000_v0_0_s_ifspec;
#ifndef __ITfInputScope_INTERFACE_DEFINED__
#define __ITfInputScope_INTERFACE_DEFINED__
extern const IID IID_ITfInputScope;
typedef struct ITfInputScopeVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (ITfInputScope * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (ITfInputScope * This);
	ULONG(STDMETHODCALLTYPE * Release) (ITfInputScope * This);
	HRESULT(STDMETHODCALLTYPE * GetInputScopes) (ITfInputScope * This, InputScope ** pprgInputScopes, UINT * pcCount);
	HRESULT(STDMETHODCALLTYPE * GetPhrase) (ITfInputScope * This, BSTR ** ppbstrPhrases, UINT * pcCount);
	HRESULT(STDMETHODCALLTYPE * GetRegularExpression) (ITfInputScope * This, BSTR * pbstrRegExp);
	HRESULT(STDMETHODCALLTYPE * GetSRGS) (ITfInputScope * This, BSTR * pbstrSRGS);
	HRESULT(STDMETHODCALLTYPE * GetXML) (ITfInputScope * This, BSTR * pbstrXML);
	END_INTERFACE
}  ITfInputScopeVtbl;
interface ITfInputScope
{
	CONST_VTBL struct ITfInputScopeVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define ITfInputScope_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define ITfInputScope_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define ITfInputScope_Release(This)( (This)->lpVtbl -> Release(This) )
#define ITfInputScope_GetInputScopes(This,pprgInputScopes,pcCount)( (This)->lpVtbl -> GetInputScopes(This,pprgInputScopes,pcCount) )
#define ITfInputScope_GetPhrase(This,ppbstrPhrases,pcCount)( (This)->lpVtbl -> GetPhrase(This,ppbstrPhrases,pcCount) )
#define ITfInputScope_GetRegularExpression(This,pbstrRegExp)( (This)->lpVtbl -> GetRegularExpression(This,pbstrRegExp) )
#define ITfInputScope_GetSRGS(This,pbstrSRGS)( (This)->lpVtbl -> GetSRGS(This,pbstrSRGS) )
#define ITfInputScope_GetXML(This,pbstrXML)( (This)->lpVtbl -> GetXML(This,pbstrXML) )
#endif
#endif
#ifndef __ITfInputScope2_INTERFACE_DEFINED__
#define __ITfInputScope2_INTERFACE_DEFINED__
extern const IID IID_ITfInputScope2;
typedef struct ITfInputScope2Vtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (ITfInputScope2 * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (ITfInputScope2 * This);
	ULONG(STDMETHODCALLTYPE * Release) (ITfInputScope2 * This);
	HRESULT(STDMETHODCALLTYPE * GetInputScopes) (ITfInputScope2 * This, InputScope ** pprgInputScopes, UINT * pcCount);
	HRESULT(STDMETHODCALLTYPE * GetPhrase) (ITfInputScope2 * This, BSTR ** ppbstrPhrases, UINT * pcCount);
	HRESULT(STDMETHODCALLTYPE * GetRegularExpression) (ITfInputScope2 * This, BSTR * pbstrRegExp);
	HRESULT(STDMETHODCALLTYPE * GetSRGS) (ITfInputScope2 * This, BSTR * pbstrSRGS);
	HRESULT(STDMETHODCALLTYPE * GetXML) (ITfInputScope2 * This, BSTR * pbstrXML);
	HRESULT(STDMETHODCALLTYPE * EnumWordList) (ITfInputScope2 * This, IEnumString ** ppEnumString);
	END_INTERFACE
}  ITfInputScope2Vtbl;
interface ITfInputScope2
{
	CONST_VTBL struct ITfInputScope2Vtbl *lpVtbl;
};
#ifdef COBJMACROS
#define ITfInputScope2_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define ITfInputScope2_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define ITfInputScope2_Release(This)( (This)->lpVtbl -> Release(This) )
#define ITfInputScope2_GetInputScopes(This,pprgInputScopes,pcCount)( (This)->lpVtbl -> GetInputScopes(This,pprgInputScopes,pcCount) )
#define ITfInputScope2_GetPhrase(This,ppbstrPhrases,pcCount)( (This)->lpVtbl -> GetPhrase(This,ppbstrPhrases,pcCount) )
#define ITfInputScope2_GetRegularExpression(This,pbstrRegExp)( (This)->lpVtbl -> GetRegularExpression(This,pbstrRegExp) )
#define ITfInputScope2_GetSRGS(This,pbstrSRGS)( (This)->lpVtbl -> GetSRGS(This,pbstrSRGS) )
#define ITfInputScope2_GetXML(This,pbstrXML)( (This)->lpVtbl -> GetXML(This,pbstrXML) )
#define ITfInputScope2_EnumWordList(This,ppEnumString)( (This)->lpVtbl -> EnumWordList(This,ppEnumString) )
#endif
#endif
#endif
extern RPC_IF_HANDLE __MIDL_itf_inputscope_0000_0002_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_inputscope_0000_0002_v0_0_s_ifspec;
unsigned long __RPC_USER BSTR_UserSize(unsigned long *, unsigned long, BSTR *);
unsigned char *__RPC_USER BSTR_UserMarshal(unsigned long *, unsigned char *, BSTR *);
unsigned char *__RPC_USER BSTR_UserUnmarshal(unsigned long *, unsigned char *, BSTR *);
void __RPC_USER BSTR_UserFree(unsigned long *, BSTR *);
unsigned long __RPC_USER BSTR_UserSize64(unsigned long *, unsigned long, BSTR *);
unsigned char *__RPC_USER BSTR_UserMarshal64(unsigned long *, unsigned char *, BSTR *);
unsigned char *__RPC_USER BSTR_UserUnmarshal64(unsigned long *, unsigned char *, BSTR *);
void __RPC_USER BSTR_UserFree64(unsigned long *, BSTR *);
#endif

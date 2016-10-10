/*+@@file@@----------------------------------------------------------------*//*!
 \file		MLang.h
 \par Description 
            Extension and update of headers for PellesC compiler suite.
 \par Project: 
            PellesC Headers extension
 \date		Created  on Sun Aug  7 21:58:27 2016
 \date		Modified on Sun Aug  7 21:58:27 2016
 \author	frankie
\*//*-@@file@@----------------------------------------------------------------*/

#ifndef __REQUIRED_RPCNDR_H_VERSION__
#define __REQUIRED_RPCNDR_H_VERSION__ 500
#endif
#ifndef __REQUIRED_RPCSAL_H_VERSION__
#define __REQUIRED_RPCSAL_H_VERSION__ 100
#endif
#include "rpc.h"
#include "rpcndr.h"
#ifndef __RPCNDR_H_VERSION__
#error this stub requires an updated version of <rpcndr.h>
#endif
#ifndef __mlang_h__
#define __mlang_h__
#if __POCC__ >= 500
#pragma once
#endif
#ifndef __IMLangStringBufW_FWD_DEFINED__
#define __IMLangStringBufW_FWD_DEFINED__
typedef interface IMLangStringBufW IMLangStringBufW;
#endif
#ifndef __IMLangStringBufA_FWD_DEFINED__
#define __IMLangStringBufA_FWD_DEFINED__
typedef interface IMLangStringBufA IMLangStringBufA;
#endif
#ifndef __IMLangString_FWD_DEFINED__
#define __IMLangString_FWD_DEFINED__
typedef interface IMLangString IMLangString;
#endif
#ifndef __IMLangStringWStr_FWD_DEFINED__
#define __IMLangStringWStr_FWD_DEFINED__
typedef interface IMLangStringWStr IMLangStringWStr;
#endif
#ifndef __IMLangStringAStr_FWD_DEFINED__
#define __IMLangStringAStr_FWD_DEFINED__
typedef interface IMLangStringAStr IMLangStringAStr;
#endif
#ifndef __CMLangString_FWD_DEFINED__
#define __CMLangString_FWD_DEFINED__
typedef struct CMLangString CMLangString;
#endif
#ifndef __IMLangLineBreakConsole_FWD_DEFINED__
#define __IMLangLineBreakConsole_FWD_DEFINED__
typedef interface IMLangLineBreakConsole IMLangLineBreakConsole;
#endif
#ifndef __IEnumCodePage_FWD_DEFINED__
#define __IEnumCodePage_FWD_DEFINED__
typedef interface IEnumCodePage IEnumCodePage;
#endif
#ifndef __IEnumRfc1766_FWD_DEFINED__
#define __IEnumRfc1766_FWD_DEFINED__
typedef interface IEnumRfc1766 IEnumRfc1766;
#endif
#ifndef __IEnumScript_FWD_DEFINED__
#define __IEnumScript_FWD_DEFINED__
typedef interface IEnumScript IEnumScript;
#endif
#ifndef __IMLangConvertCharset_FWD_DEFINED__
#define __IMLangConvertCharset_FWD_DEFINED__
typedef interface IMLangConvertCharset IMLangConvertCharset;
#endif
#ifndef __CMLangConvertCharset_FWD_DEFINED__
#define __CMLangConvertCharset_FWD_DEFINED__
typedef struct CMLangConvertCharset CMLangConvertCharset;
#endif
#ifndef __IMultiLanguage_FWD_DEFINED__
#define __IMultiLanguage_FWD_DEFINED__
typedef interface IMultiLanguage IMultiLanguage;
#endif
#ifndef __IMultiLanguage2_FWD_DEFINED__
#define __IMultiLanguage2_FWD_DEFINED__
typedef interface IMultiLanguage2 IMultiLanguage2;
#endif
#ifndef __IMLangCodePages_FWD_DEFINED__
#define __IMLangCodePages_FWD_DEFINED__
typedef interface IMLangCodePages IMLangCodePages;
#endif
#ifndef __IMLangFontLink_FWD_DEFINED__
#define __IMLangFontLink_FWD_DEFINED__
typedef interface IMLangFontLink IMLangFontLink;
#endif
#ifndef __IMLangFontLink2_FWD_DEFINED__
#define __IMLangFontLink2_FWD_DEFINED__
typedef interface IMLangFontLink2 IMLangFontLink2;
#endif
#ifndef __IMultiLanguage3_FWD_DEFINED__
#define __IMultiLanguage3_FWD_DEFINED__
typedef interface IMultiLanguage3 IMultiLanguage3;
#endif
#ifndef __CMultiLanguage_FWD_DEFINED__
#define __CMultiLanguage_FWD_DEFINED__
typedef struct CMultiLanguage CMultiLanguage;
#endif
#include "unknwn.h"
#pragma comment(lib,"uuid.lib")
extern RPC_IF_HANDLE __MIDL_itf_mlang_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_mlang_0000_0000_v0_0_s_ifspec;
#ifndef __MultiLanguage_LIBRARY_DEFINED__
#define __MultiLanguage_LIBRARY_DEFINED__
typedef WORD LANGID;
typedef enum tagMLSTR_FLAGS
{
	MLSTR_READ = 1,
	MLSTR_WRITE = 2
} MLSTR_FLAGS;
#define CPIOD_PEEK          0x40000000L
#define CPIOD_FORCE_PROMPT  0x80000000L
extern const IID LIBID_MultiLanguage;
#ifndef __IMLangStringBufW_INTERFACE_DEFINED__
#define __IMLangStringBufW_INTERFACE_DEFINED__
extern const IID IID_IMLangStringBufW;
typedef struct IMLangStringBufWVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IMLangStringBufW * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IMLangStringBufW * This);
	ULONG(STDMETHODCALLTYPE * Release) (IMLangStringBufW * This);
	HRESULT(STDMETHODCALLTYPE * GetStatus) (IMLangStringBufW * This, long *plFlags, long *pcchBuf);
	HRESULT(STDMETHODCALLTYPE * LockBuf) (IMLangStringBufW * This, long cchOffset, long cchMaxLock, WCHAR ** ppszBuf, long *pcchBuf);
	HRESULT(STDMETHODCALLTYPE * UnlockBuf) (IMLangStringBufW * This, const WCHAR * pszBuf, long cchOffset, long cchWrite);
	HRESULT(STDMETHODCALLTYPE * Insert) (IMLangStringBufW * This, long cchOffset, long cchMaxInsert, long *pcchActual);
	HRESULT(STDMETHODCALLTYPE * Delete) (IMLangStringBufW * This, long cchOffset, long cchDelete);
	END_INTERFACE
}  IMLangStringBufWVtbl;
interface IMLangStringBufW
{
	CONST_VTBL struct IMLangStringBufWVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IMLangStringBufW_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IMLangStringBufW_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IMLangStringBufW_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IMLangStringBufW_GetStatus(This,plFlags,pcchBuf) ( (This)->lpVtbl -> GetStatus(This,plFlags,pcchBuf) )
#define IMLangStringBufW_LockBuf(This,cchOffset,cchMaxLock,ppszBuf,pcchBuf) ( (This)->lpVtbl -> LockBuf(This,cchOffset,cchMaxLock,ppszBuf,pcchBuf) )
#define IMLangStringBufW_UnlockBuf(This,pszBuf,cchOffset,cchWrite) ( (This)->lpVtbl -> UnlockBuf(This,pszBuf,cchOffset,cchWrite) )
#define IMLangStringBufW_Insert(This,cchOffset,cchMaxInsert,pcchActual) ( (This)->lpVtbl -> Insert(This,cchOffset,cchMaxInsert,pcchActual) )
#define IMLangStringBufW_Delete(This,cchOffset,cchDelete) ( (This)->lpVtbl -> Delete(This,cchOffset,cchDelete) )
#endif
#endif
#ifndef __IMLangStringBufA_INTERFACE_DEFINED__
#define __IMLangStringBufA_INTERFACE_DEFINED__
extern const IID IID_IMLangStringBufA;
typedef struct IMLangStringBufAVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IMLangStringBufA * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IMLangStringBufA * This);
	ULONG(STDMETHODCALLTYPE * Release) (IMLangStringBufA * This);
	HRESULT(STDMETHODCALLTYPE * GetStatus) (IMLangStringBufA * This, long *plFlags, long *pcchBuf);
	HRESULT(STDMETHODCALLTYPE * LockBuf) (IMLangStringBufA * This, long cchOffset, long cchMaxLock, CHAR ** ppszBuf, long *pcchBuf);
	HRESULT(STDMETHODCALLTYPE * UnlockBuf) (IMLangStringBufA * This, const CHAR * pszBuf, long cchOffset, long cchWrite);
	HRESULT(STDMETHODCALLTYPE * Insert) (IMLangStringBufA * This, long cchOffset, long cchMaxInsert, long *pcchActual);
	HRESULT(STDMETHODCALLTYPE * Delete) (IMLangStringBufA * This, long cchOffset, long cchDelete);
	END_INTERFACE
}  IMLangStringBufAVtbl;
interface IMLangStringBufA
{
	CONST_VTBL struct IMLangStringBufAVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IMLangStringBufA_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IMLangStringBufA_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IMLangStringBufA_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IMLangStringBufA_GetStatus(This,plFlags,pcchBuf) ( (This)->lpVtbl -> GetStatus(This,plFlags,pcchBuf) )
#define IMLangStringBufA_LockBuf(This,cchOffset,cchMaxLock,ppszBuf,pcchBuf) ( (This)->lpVtbl -> LockBuf(This,cchOffset,cchMaxLock,ppszBuf,pcchBuf) )
#define IMLangStringBufA_UnlockBuf(This,pszBuf,cchOffset,cchWrite) ( (This)->lpVtbl -> UnlockBuf(This,pszBuf,cchOffset,cchWrite) )
#define IMLangStringBufA_Insert(This,cchOffset,cchMaxInsert,pcchActual) ( (This)->lpVtbl -> Insert(This,cchOffset,cchMaxInsert,pcchActual) )
#define IMLangStringBufA_Delete(This,cchOffset,cchDelete) ( (This)->lpVtbl -> Delete(This,cchOffset,cchDelete) )
#endif
#endif
#ifndef __IMLangString_INTERFACE_DEFINED__
#define __IMLangString_INTERFACE_DEFINED__
extern const IID IID_IMLangString;
typedef struct IMLangStringVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IMLangString * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IMLangString * This);
	ULONG(STDMETHODCALLTYPE * Release) (IMLangString * This);
	HRESULT(STDMETHODCALLTYPE * Sync) (IMLangString * This, BOOL fNoAccess);
	HRESULT(STDMETHODCALLTYPE * GetLength) (IMLangString * This, long *plLen);
	HRESULT(STDMETHODCALLTYPE * SetMLStr) (IMLangString * This, long lDestPos, long lDestLen, IUnknown * pSrcMLStr, long lSrcPos, long lSrcLen);
	HRESULT(STDMETHODCALLTYPE * GetMLStr) (IMLangString * This, long lSrcPos, long lSrcLen, IUnknown * pUnkOuter, DWORD dwClsContext, const IID * piid, IUnknown ** ppDestMLStr, long *plDestPos, long *plDestLen);
	END_INTERFACE
}  IMLangStringVtbl;
interface IMLangString
{
	CONST_VTBL struct IMLangStringVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IMLangString_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IMLangString_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IMLangString_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IMLangString_Sync(This,fNoAccess) ( (This)->lpVtbl -> Sync(This,fNoAccess) )
#define IMLangString_GetLength(This,plLen) ( (This)->lpVtbl -> GetLength(This,plLen) )
#define IMLangString_SetMLStr(This,lDestPos,lDestLen,pSrcMLStr,lSrcPos,lSrcLen) ( (This)->lpVtbl -> SetMLStr(This,lDestPos,lDestLen,pSrcMLStr,lSrcPos,lSrcLen) )
#define IMLangString_GetMLStr(This,lSrcPos,lSrcLen,pUnkOuter,dwClsContext,piid,ppDestMLStr,plDestPos,plDestLen) ( (This)->lpVtbl -> GetMLStr(This,lSrcPos,lSrcLen,pUnkOuter,dwClsContext,piid,ppDestMLStr,plDestPos,plDestLen) )
#endif
#endif
#ifndef __IMLangStringWStr_INTERFACE_DEFINED__
#define __IMLangStringWStr_INTERFACE_DEFINED__
extern const IID IID_IMLangStringWStr;
typedef struct IMLangStringWStrVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IMLangStringWStr * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IMLangStringWStr * This);
	ULONG(STDMETHODCALLTYPE * Release) (IMLangStringWStr * This);
	HRESULT(STDMETHODCALLTYPE * Sync) (IMLangStringWStr * This, BOOL fNoAccess);
	HRESULT(STDMETHODCALLTYPE * GetLength) (IMLangStringWStr * This, long *plLen);
	HRESULT(STDMETHODCALLTYPE * SetMLStr) (IMLangStringWStr * This, long lDestPos, long lDestLen, IUnknown * pSrcMLStr, long lSrcPos, long lSrcLen);
	HRESULT(STDMETHODCALLTYPE * GetMLStr) (IMLangStringWStr * This, long lSrcPos, long lSrcLen, IUnknown * pUnkOuter, DWORD dwClsContext, const IID * piid, IUnknown ** ppDestMLStr, long *plDestPos, long *plDestLen);
	HRESULT(STDMETHODCALLTYPE * SetWStr) (IMLangStringWStr * This, long lDestPos, long lDestLen, LPCWSTR pszSrc, long cchSrc, long *pcchActual, long *plActualLen);
	HRESULT(STDMETHODCALLTYPE * SetStrBufW) (IMLangStringWStr * This, long lDestPos, long lDestLen, IMLangStringBufW * pSrcBuf, long *pcchActual, long *plActualLen);
	HRESULT(STDMETHODCALLTYPE * GetWStr) (IMLangStringWStr * This, long lSrcPos, long lSrcLen, LPWSTR pszDest, long cchDest, long *pcchActual, long *plActualLen);
	HRESULT(STDMETHODCALLTYPE * GetStrBufW) (IMLangStringWStr * This, long lSrcPos, long lSrcMaxLen, IMLangStringBufW ** ppDestBuf, long *plDestLen);
	HRESULT(STDMETHODCALLTYPE * LockWStr) (IMLangStringWStr * This, long lSrcPos, long lSrcLen, long lFlags, long cchRequest, LPWSTR * ppszDest, long *pcchDest, long *plDestLen);
	HRESULT(STDMETHODCALLTYPE * UnlockWStr) (IMLangStringWStr * This, LPCWSTR pszSrc, long cchSrc, long *pcchActual, long *plActualLen);
	HRESULT(STDMETHODCALLTYPE * SetLocale) (IMLangStringWStr * This, long lDestPos, long lDestLen, LCID locale);
	HRESULT(STDMETHODCALLTYPE * GetLocale) (IMLangStringWStr * This, long lSrcPos, long lSrcMaxLen, LCID * plocale, long *plLocalePos, long *plLocaleLen);
	END_INTERFACE
}  IMLangStringWStrVtbl;
interface IMLangStringWStr
{
	CONST_VTBL struct IMLangStringWStrVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IMLangStringWStr_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IMLangStringWStr_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IMLangStringWStr_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IMLangStringWStr_Sync(This,fNoAccess) ( (This)->lpVtbl -> Sync(This,fNoAccess) )
#define IMLangStringWStr_GetLength(This,plLen) ( (This)->lpVtbl -> GetLength(This,plLen) )
#define IMLangStringWStr_SetMLStr(This,lDestPos,lDestLen,pSrcMLStr,lSrcPos,lSrcLen) ( (This)->lpVtbl -> SetMLStr(This,lDestPos,lDestLen,pSrcMLStr,lSrcPos,lSrcLen) )
#define IMLangStringWStr_GetMLStr(This,lSrcPos,lSrcLen,pUnkOuter,dwClsContext,piid,ppDestMLStr,plDestPos,plDestLen) ( (This)->lpVtbl -> GetMLStr(This,lSrcPos,lSrcLen,pUnkOuter,dwClsContext,piid,ppDestMLStr,plDestPos,plDestLen) )
#define IMLangStringWStr_SetWStr(This,lDestPos,lDestLen,pszSrc,cchSrc,pcchActual,plActualLen) ( (This)->lpVtbl -> SetWStr(This,lDestPos,lDestLen,pszSrc,cchSrc,pcchActual,plActualLen) )
#define IMLangStringWStr_SetStrBufW(This,lDestPos,lDestLen,pSrcBuf,pcchActual,plActualLen) ( (This)->lpVtbl -> SetStrBufW(This,lDestPos,lDestLen,pSrcBuf,pcchActual,plActualLen) )
#define IMLangStringWStr_GetWStr(This,lSrcPos,lSrcLen,pszDest,cchDest,pcchActual,plActualLen) ( (This)->lpVtbl -> GetWStr(This,lSrcPos,lSrcLen,pszDest,cchDest,pcchActual,plActualLen) )
#define IMLangStringWStr_GetStrBufW(This,lSrcPos,lSrcMaxLen,ppDestBuf,plDestLen) ( (This)->lpVtbl -> GetStrBufW(This,lSrcPos,lSrcMaxLen,ppDestBuf,plDestLen) )
#define IMLangStringWStr_LockWStr(This,lSrcPos,lSrcLen,lFlags,cchRequest,ppszDest,pcchDest,plDestLen) ( (This)->lpVtbl -> LockWStr(This,lSrcPos,lSrcLen,lFlags,cchRequest,ppszDest,pcchDest,plDestLen) )
#define IMLangStringWStr_UnlockWStr(This,pszSrc,cchSrc,pcchActual,plActualLen) ( (This)->lpVtbl -> UnlockWStr(This,pszSrc,cchSrc,pcchActual,plActualLen) )
#define IMLangStringWStr_SetLocale(This,lDestPos,lDestLen,locale) ( (This)->lpVtbl -> SetLocale(This,lDestPos,lDestLen,locale) )
#define IMLangStringWStr_GetLocale(This,lSrcPos,lSrcMaxLen,plocale,plLocalePos,plLocaleLen) ( (This)->lpVtbl -> GetLocale(This,lSrcPos,lSrcMaxLen,plocale,plLocalePos,plLocaleLen) )
#endif
#endif
#ifndef __IMLangStringAStr_INTERFACE_DEFINED__
#define __IMLangStringAStr_INTERFACE_DEFINED__
extern const IID IID_IMLangStringAStr;
typedef struct IMLangStringAStrVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IMLangStringAStr * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IMLangStringAStr * This);
	ULONG(STDMETHODCALLTYPE * Release) (IMLangStringAStr * This);
	HRESULT(STDMETHODCALLTYPE * Sync) (IMLangStringAStr * This, BOOL fNoAccess);
	HRESULT(STDMETHODCALLTYPE * GetLength) (IMLangStringAStr * This, long *plLen);
	HRESULT(STDMETHODCALLTYPE * SetMLStr) (IMLangStringAStr * This, long lDestPos, long lDestLen, IUnknown * pSrcMLStr, long lSrcPos, long lSrcLen);
	HRESULT(STDMETHODCALLTYPE * GetMLStr) (IMLangStringAStr * This, long lSrcPos, long lSrcLen, IUnknown * pUnkOuter, DWORD dwClsContext, const IID * piid, IUnknown ** ppDestMLStr, long *plDestPos, long *plDestLen);
	HRESULT(STDMETHODCALLTYPE * SetAStr) (IMLangStringAStr * This, long lDestPos, long lDestLen, UINT uCodePage, LPCSTR pszSrc, long cchSrc, long *pcchActual, long *plActualLen);
	HRESULT(STDMETHODCALLTYPE * SetStrBufA) (IMLangStringAStr * This, long lDestPos, long lDestLen, UINT uCodePage, IMLangStringBufA * pSrcBuf, long *pcchActual, long *plActualLen);
	HRESULT(STDMETHODCALLTYPE * GetAStr) (IMLangStringAStr * This, long lSrcPos, long lSrcLen, UINT uCodePageIn, UINT * puCodePageOut, LPSTR pszDest, long cchDest, long *pcchActual, long *plActualLen);
	HRESULT(STDMETHODCALLTYPE * GetStrBufA) (IMLangStringAStr * This, long lSrcPos, long lSrcMaxLen, UINT * puDestCodePage, IMLangStringBufA ** ppDestBuf, long *plDestLen);
	HRESULT(STDMETHODCALLTYPE * LockAStr) (IMLangStringAStr * This, long lSrcPos, long lSrcLen, long lFlags, UINT uCodePageIn, long cchRequest, UINT * puCodePageOut, LPSTR * ppszDest, long *pcchDest, long *plDestLen);
	HRESULT(STDMETHODCALLTYPE * UnlockAStr) (IMLangStringAStr * This, LPCSTR pszSrc, long cchSrc, long *pcchActual, long *plActualLen);
	HRESULT(STDMETHODCALLTYPE * SetLocale) (IMLangStringAStr * This, long lDestPos, long lDestLen, LCID locale);
	HRESULT(STDMETHODCALLTYPE * GetLocale) (IMLangStringAStr * This, long lSrcPos, long lSrcMaxLen, LCID * plocale, long *plLocalePos, long *plLocaleLen);
	END_INTERFACE
}  IMLangStringAStrVtbl;
interface IMLangStringAStr
{
	CONST_VTBL struct IMLangStringAStrVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IMLangStringAStr_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IMLangStringAStr_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IMLangStringAStr_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IMLangStringAStr_Sync(This,fNoAccess) ( (This)->lpVtbl -> Sync(This,fNoAccess) )
#define IMLangStringAStr_GetLength(This,plLen) ( (This)->lpVtbl -> GetLength(This,plLen) )
#define IMLangStringAStr_SetMLStr(This,lDestPos,lDestLen,pSrcMLStr,lSrcPos,lSrcLen) ( (This)->lpVtbl -> SetMLStr(This,lDestPos,lDestLen,pSrcMLStr,lSrcPos,lSrcLen) )
#define IMLangStringAStr_GetMLStr(This,lSrcPos,lSrcLen,pUnkOuter,dwClsContext,piid,ppDestMLStr,plDestPos,plDestLen) ( (This)->lpVtbl -> GetMLStr(This,lSrcPos,lSrcLen,pUnkOuter,dwClsContext,piid,ppDestMLStr,plDestPos,plDestLen) )
#define IMLangStringAStr_SetAStr(This,lDestPos,lDestLen,uCodePage,pszSrc,cchSrc,pcchActual,plActualLen) ( (This)->lpVtbl -> SetAStr(This,lDestPos,lDestLen,uCodePage,pszSrc,cchSrc,pcchActual,plActualLen) )
#define IMLangStringAStr_SetStrBufA(This,lDestPos,lDestLen,uCodePage,pSrcBuf,pcchActual,plActualLen) ( (This)->lpVtbl -> SetStrBufA(This,lDestPos,lDestLen,uCodePage,pSrcBuf,pcchActual,plActualLen) )
#define IMLangStringAStr_GetAStr(This,lSrcPos,lSrcLen,uCodePageIn,puCodePageOut,pszDest,cchDest,pcchActual,plActualLen) ( (This)->lpVtbl -> GetAStr(This,lSrcPos,lSrcLen,uCodePageIn,puCodePageOut,pszDest,cchDest,pcchActual,plActualLen) )
#define IMLangStringAStr_GetStrBufA(This,lSrcPos,lSrcMaxLen,puDestCodePage,ppDestBuf,plDestLen) ( (This)->lpVtbl -> GetStrBufA(This,lSrcPos,lSrcMaxLen,puDestCodePage,ppDestBuf,plDestLen) )
#define IMLangStringAStr_LockAStr(This,lSrcPos,lSrcLen,lFlags,uCodePageIn,cchRequest,puCodePageOut,ppszDest,pcchDest,plDestLen) ( (This)->lpVtbl -> LockAStr(This,lSrcPos,lSrcLen,lFlags,uCodePageIn,cchRequest,puCodePageOut,ppszDest,pcchDest,plDestLen) )
#define IMLangStringAStr_UnlockAStr(This,pszSrc,cchSrc,pcchActual,plActualLen) ( (This)->lpVtbl -> UnlockAStr(This,pszSrc,cchSrc,pcchActual,plActualLen) )
#define IMLangStringAStr_SetLocale(This,lDestPos,lDestLen,locale) ( (This)->lpVtbl -> SetLocale(This,lDestPos,lDestLen,locale) )
#define IMLangStringAStr_GetLocale(This,lSrcPos,lSrcMaxLen,plocale,plLocalePos,plLocaleLen) ( (This)->lpVtbl -> GetLocale(This,lSrcPos,lSrcMaxLen,plocale,plLocalePos,plLocaleLen) )
#endif
#endif
extern const CLSID CLSID_CMLangString;
#ifndef __IMLangLineBreakConsole_INTERFACE_DEFINED__
#define __IMLangLineBreakConsole_INTERFACE_DEFINED__
extern const IID IID_IMLangLineBreakConsole;
typedef struct IMLangLineBreakConsoleVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IMLangLineBreakConsole * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IMLangLineBreakConsole * This);
	ULONG(STDMETHODCALLTYPE * Release) (IMLangLineBreakConsole * This);
	HRESULT(STDMETHODCALLTYPE * BreakLineML) (IMLangLineBreakConsole * This, IMLangString * pSrcMLStr, long lSrcPos, long lSrcLen, long cMinColumns, long cMaxColumns, long *plLineLen, long *plSkipLen);
	HRESULT(STDMETHODCALLTYPE * BreakLineW) (IMLangLineBreakConsole * This, LCID locale, const WCHAR * pszSrc, long cchSrc, long cMaxColumns, long *pcchLine, long *pcchSkip);
	HRESULT(STDMETHODCALLTYPE * BreakLineA) (IMLangLineBreakConsole * This, LCID locale, UINT uCodePage, const CHAR * pszSrc, long cchSrc, long cMaxColumns, long *pcchLine, long *pcchSkip);
	END_INTERFACE
}  IMLangLineBreakConsoleVtbl;
interface IMLangLineBreakConsole
{
	CONST_VTBL struct IMLangLineBreakConsoleVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IMLangLineBreakConsole_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IMLangLineBreakConsole_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IMLangLineBreakConsole_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IMLangLineBreakConsole_BreakLineML(This,pSrcMLStr,lSrcPos,lSrcLen,cMinColumns,cMaxColumns,plLineLen,plSkipLen) ( (This)->lpVtbl -> BreakLineML(This,pSrcMLStr,lSrcPos,lSrcLen,cMinColumns,cMaxColumns,plLineLen,plSkipLen) )
#define IMLangLineBreakConsole_BreakLineW(This,locale,pszSrc,cchSrc,cMaxColumns,pcchLine,pcchSkip) ( (This)->lpVtbl -> BreakLineW(This,locale,pszSrc,cchSrc,cMaxColumns,pcchLine,pcchSkip) )
#define IMLangLineBreakConsole_BreakLineA(This,locale,uCodePage,pszSrc,cchSrc,cMaxColumns,pcchLine,pcchSkip) ( (This)->lpVtbl -> BreakLineA(This,locale,uCodePage,pszSrc,cchSrc,cMaxColumns,pcchLine,pcchSkip) )
#endif
#endif
#ifndef __IEnumCodePage_INTERFACE_DEFINED__
#define __IEnumCodePage_INTERFACE_DEFINED__
#define	MAX_MIMECP_NAME	( 64 )
#define	MAX_MIMECSET_NAME	( 50 )
#define	MAX_MIMEFACE_NAME	( 32 )
typedef enum tagMIMECONTF
{
	MIMECONTF_MAILNEWS = 0x1,
	MIMECONTF_BROWSER = 0x2,
	MIMECONTF_MINIMAL = 0x4,
	MIMECONTF_IMPORT = 0x8,
	MIMECONTF_SAVABLE_MAILNEWS = 0x100,
	MIMECONTF_SAVABLE_BROWSER = 0x200,
	MIMECONTF_EXPORT = 0x400,
	MIMECONTF_PRIVCONVERTER = 0x10000,
	MIMECONTF_VALID = 0x20000,
	MIMECONTF_VALID_NLS = 0x40000,
	MIMECONTF_MIME_IE4 = 0x10000000,
	MIMECONTF_MIME_LATEST = 0x20000000,
	MIMECONTF_MIME_REGISTRY = 0x40000000
} MIMECONTF;
typedef struct tagMIMECPINFO
{
	DWORD dwFlags;
	UINT uiCodePage;
	UINT uiFamilyCodePage;
	WCHAR wszDescription[64];
	WCHAR wszWebCharset[50];
	WCHAR wszHeaderCharset[50];
	WCHAR wszBodyCharset[50];
	WCHAR wszFixedWidthFont[32];
	WCHAR wszProportionalFont[32];
	BYTE bGDICharset;
} MIMECPINFO;
typedef struct tagMIMECPINFO *PMIMECPINFO;
typedef struct tagMIMECSETINFO
{
	UINT uiCodePage;
	UINT uiInternetEncoding;
	WCHAR wszCharset[50];
} MIMECSETINFO;
typedef struct tagMIMECSETINFO *PMIMECSETINFO;
typedef IEnumCodePage *LPENUMCODEPAGE;
extern const IID IID_IEnumCodePage;
typedef struct IEnumCodePageVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IEnumCodePage * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IEnumCodePage * This);
	ULONG(STDMETHODCALLTYPE * Release) (IEnumCodePage * This);
	HRESULT(STDMETHODCALLTYPE * Clone) (IEnumCodePage * This, IEnumCodePage ** ppEnum);
	HRESULT(STDMETHODCALLTYPE * Next) (IEnumCodePage * This, ULONG celt, PMIMECPINFO rgelt, ULONG * pceltFetched);
	HRESULT(STDMETHODCALLTYPE * Reset) (IEnumCodePage * This);
	HRESULT(STDMETHODCALLTYPE * Skip) (IEnumCodePage * This, ULONG celt);
	END_INTERFACE
}  IEnumCodePageVtbl;
interface IEnumCodePage
{
	CONST_VTBL struct IEnumCodePageVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IEnumCodePage_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IEnumCodePage_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IEnumCodePage_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IEnumCodePage_Clone(This,ppEnum) ( (This)->lpVtbl -> Clone(This,ppEnum) )
#define IEnumCodePage_Next(This,celt,rgelt,pceltFetched) ( (This)->lpVtbl -> Next(This,celt,rgelt,pceltFetched) )
#define IEnumCodePage_Reset(This) ( (This)->lpVtbl -> Reset(This) )
#define IEnumCodePage_Skip(This,celt) ( (This)->lpVtbl -> Skip(This,celt) )
#endif
#endif
#ifndef __IEnumRfc1766_INTERFACE_DEFINED__
#define __IEnumRfc1766_INTERFACE_DEFINED__
#define	MAX_RFC1766_NAME	( 6 )
#define	MAX_LOCALE_NAME	( 32 )
typedef struct tagRFC1766INFO
{
	LCID lcid;
	WCHAR wszRfc1766[6];
	WCHAR wszLocaleName[32];
} RFC1766INFO;
typedef struct tagRFC1766INFO *PRFC1766INFO;
typedef IEnumRfc1766 *LPENUMRFC1766;
extern const IID IID_IEnumRfc1766;
typedef struct IEnumRfc1766Vtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IEnumRfc1766 * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IEnumRfc1766 * This);
	ULONG(STDMETHODCALLTYPE * Release) (IEnumRfc1766 * This);
	HRESULT(STDMETHODCALLTYPE * Clone) (IEnumRfc1766 * This, IEnumRfc1766 ** ppEnum);
	HRESULT(STDMETHODCALLTYPE * Next) (IEnumRfc1766 * This, ULONG celt, PRFC1766INFO rgelt, ULONG * pceltFetched);
	HRESULT(STDMETHODCALLTYPE * Reset) (IEnumRfc1766 * This);
	HRESULT(STDMETHODCALLTYPE * Skip) (IEnumRfc1766 * This, ULONG celt);
	END_INTERFACE
}  IEnumRfc1766Vtbl;
interface IEnumRfc1766
{
	CONST_VTBL struct IEnumRfc1766Vtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IEnumRfc1766_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IEnumRfc1766_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IEnumRfc1766_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IEnumRfc1766_Clone(This,ppEnum) ( (This)->lpVtbl -> Clone(This,ppEnum) )
#define IEnumRfc1766_Next(This,celt,rgelt,pceltFetched) ( (This)->lpVtbl -> Next(This,celt,rgelt,pceltFetched) )
#define IEnumRfc1766_Reset(This) ( (This)->lpVtbl -> Reset(This) )
#define IEnumRfc1766_Skip(This,celt) ( (This)->lpVtbl -> Skip(This,celt) )
#endif
#endif
#ifndef __IEnumScript_INTERFACE_DEFINED__
#define __IEnumScript_INTERFACE_DEFINED__
#define	MAX_SCRIPT_NAME	( 48 )
typedef BYTE SCRIPT_ID;
typedef __int64 SCRIPT_IDS;
typedef enum tagSCRIPTCONTF
{
	sidDefault = 0,
	sidMerge = (sidDefault + 1),
	sidAsciiSym = (sidMerge + 1),
	sidAsciiLatin = (sidAsciiSym + 1),
	sidLatin = (sidAsciiLatin + 1),
	sidGreek = (sidLatin + 1),
	sidCyrillic = (sidGreek + 1),
	sidArmenian = (sidCyrillic + 1),
	sidHebrew = (sidArmenian + 1),
	sidArabic = (sidHebrew + 1),
	sidDevanagari = (sidArabic + 1),
	sidBengali = (sidDevanagari + 1),
	sidGurmukhi = (sidBengali + 1),
	sidGujarati = (sidGurmukhi + 1),
	sidOriya = (sidGujarati + 1),
	sidTamil = (sidOriya + 1),
	sidTelugu = (sidTamil + 1),
	sidKannada = (sidTelugu + 1),
	sidMalayalam = (sidKannada + 1),
	sidThai = (sidMalayalam + 1),
	sidLao = (sidThai + 1),
	sidTibetan = (sidLao + 1),
	sidGeorgian = (sidTibetan + 1),
	sidHangul = (sidGeorgian + 1),
	sidKana = (sidHangul + 1),
	sidBopomofo = (sidKana + 1),
	sidHan = (sidBopomofo + 1),
	sidEthiopic = (sidHan + 1),
	sidCanSyllabic = (sidEthiopic + 1),
	sidCherokee = (sidCanSyllabic + 1),
	sidYi = (sidCherokee + 1),
	sidBraille = (sidYi + 1),
	sidRunic = (sidBraille + 1),
	sidOgham = (sidRunic + 1),
	sidSinhala = (sidOgham + 1),
	sidSyriac = (sidSinhala + 1),
	sidBurmese = (sidSyriac + 1),
	sidKhmer = (sidBurmese + 1),
	sidThaana = (sidKhmer + 1),
	sidMongolian = (sidThaana + 1),
	sidUserDefined = (sidMongolian + 1),
	sidLim = (sidUserDefined + 1),
	sidFEFirst = sidHangul,
	sidFELast = sidHan
} SCRIPTCONTF;
typedef struct tagSCRIPTINFO
{
	SCRIPT_ID ScriptId;
	UINT uiCodePage;
	WCHAR wszDescription[48];
	WCHAR wszFixedWidthFont[32];
	WCHAR wszProportionalFont[32];
} SCRIPTINFO;
typedef struct tagSCRIPTINFO *PSCRIPTINFO;
typedef IEnumScript *LPENUMScript;
extern const IID IID_IEnumScript;
typedef struct IEnumScriptVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IEnumScript * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IEnumScript * This);
	ULONG(STDMETHODCALLTYPE * Release) (IEnumScript * This);
	HRESULT(STDMETHODCALLTYPE * Clone) (IEnumScript * This, IEnumScript ** ppEnum);
	HRESULT(STDMETHODCALLTYPE * Next) (IEnumScript * This, ULONG celt, PSCRIPTINFO rgelt, ULONG * pceltFetched);
	HRESULT(STDMETHODCALLTYPE * Reset) (IEnumScript * This);
	HRESULT(STDMETHODCALLTYPE * Skip) (IEnumScript * This, ULONG celt);
	END_INTERFACE
}  IEnumScriptVtbl;
interface IEnumScript
{
	CONST_VTBL struct IEnumScriptVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IEnumScript_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IEnumScript_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IEnumScript_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IEnumScript_Clone(This,ppEnum) ( (This)->lpVtbl -> Clone(This,ppEnum) )
#define IEnumScript_Next(This,celt,rgelt,pceltFetched) ( (This)->lpVtbl -> Next(This,celt,rgelt,pceltFetched) )
#define IEnumScript_Reset(This) ( (This)->lpVtbl -> Reset(This) )
#define IEnumScript_Skip(This,celt) ( (This)->lpVtbl -> Skip(This,celt) )
#endif
#endif
#ifndef __IMLangConvertCharset_INTERFACE_DEFINED__
#define __IMLangConvertCharset_INTERFACE_DEFINED__
typedef enum tagMLCONVCHARF
{
	MLCONVCHARF_AUTODETECT = 1,
	MLCONVCHARF_ENTITIZE = 2,
	MLCONVCHARF_NCR_ENTITIZE = 2,
	MLCONVCHARF_NAME_ENTITIZE = 4,
	MLCONVCHARF_USEDEFCHAR = 8,
	MLCONVCHARF_NOBESTFITCHARS = 16,
	MLCONVCHARF_DETECTJPN = 32
} MLCONVCHAR;
typedef enum tagMLCPF
{
	MLDETECTF_MAILNEWS = 0x1,
	MLDETECTF_BROWSER = 0x2,
	MLDETECTF_VALID = 0x4,
	MLDETECTF_VALID_NLS = 0x8,
	MLDETECTF_PRESERVE_ORDER = 0x10,
	MLDETECTF_PREFERRED_ONLY = 0x20,
	MLDETECTF_FILTER_SPECIALCHAR = 0x40,
	MLDETECTF_EURO_UTF8 = 0x80
} MLCP;
typedef IMLangConvertCharset *LPMLANGCONVERTCHARSET;
extern const IID IID_IMLangConvertCharset;
typedef struct IMLangConvertCharsetVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IMLangConvertCharset * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IMLangConvertCharset * This);
	ULONG(STDMETHODCALLTYPE * Release) (IMLangConvertCharset * This);
	HRESULT(STDMETHODCALLTYPE * Initialize) (IMLangConvertCharset * This, UINT uiSrcCodePage, UINT uiDstCodePage, DWORD dwProperty);
	HRESULT(STDMETHODCALLTYPE * GetSourceCodePage) (IMLangConvertCharset * This, UINT * puiSrcCodePage);
	HRESULT(STDMETHODCALLTYPE * GetDestinationCodePage) (IMLangConvertCharset * This, UINT * puiDstCodePage);
	HRESULT(STDMETHODCALLTYPE * GetProperty) (IMLangConvertCharset * This, DWORD * pdwProperty);
	HRESULT(STDMETHODCALLTYPE * DoConversion) (IMLangConvertCharset * This, BYTE * pSrcStr, UINT * pcSrcSize, BYTE * pDstStr, UINT * pcDstSize);
	HRESULT(STDMETHODCALLTYPE * DoConversionToUnicode) (IMLangConvertCharset * This, CHAR * pSrcStr, UINT * pcSrcSize, WCHAR * pDstStr, UINT * pcDstSize);
	HRESULT(STDMETHODCALLTYPE * DoConversionFromUnicode) (IMLangConvertCharset * This, WCHAR * pSrcStr, UINT * pcSrcSize, CHAR * pDstStr, UINT * pcDstSize);
	END_INTERFACE
}  IMLangConvertCharsetVtbl;
interface IMLangConvertCharset
{
	CONST_VTBL struct IMLangConvertCharsetVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IMLangConvertCharset_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IMLangConvertCharset_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IMLangConvertCharset_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IMLangConvertCharset_Initialize(This,uiSrcCodePage,uiDstCodePage,dwProperty) ( (This)->lpVtbl -> Initialize(This,uiSrcCodePage,uiDstCodePage,dwProperty) )
#define IMLangConvertCharset_GetSourceCodePage(This,puiSrcCodePage) ( (This)->lpVtbl -> GetSourceCodePage(This,puiSrcCodePage) )
#define IMLangConvertCharset_GetDestinationCodePage(This,puiDstCodePage) ( (This)->lpVtbl -> GetDestinationCodePage(This,puiDstCodePage) )
#define IMLangConvertCharset_GetProperty(This,pdwProperty) ( (This)->lpVtbl -> GetProperty(This,pdwProperty) )
#define IMLangConvertCharset_DoConversion(This,pSrcStr,pcSrcSize,pDstStr,pcDstSize) ( (This)->lpVtbl -> DoConversion(This,pSrcStr,pcSrcSize,pDstStr,pcDstSize) )
#define IMLangConvertCharset_DoConversionToUnicode(This,pSrcStr,pcSrcSize,pDstStr,pcDstSize) ( (This)->lpVtbl -> DoConversionToUnicode(This,pSrcStr,pcSrcSize,pDstStr,pcDstSize) )
#define IMLangConvertCharset_DoConversionFromUnicode(This,pSrcStr,pcSrcSize,pDstStr,pcDstSize) ( (This)->lpVtbl -> DoConversionFromUnicode(This,pSrcStr,pcSrcSize,pDstStr,pcDstSize) )
#endif
#endif
extern const CLSID CLSID_CMLangConvertCharset;
#ifndef __IMultiLanguage_INTERFACE_DEFINED__
#define __IMultiLanguage_INTERFACE_DEFINED__
typedef IMultiLanguage *LPMULTILANGUAGE;
extern const IID IID_IMultiLanguage;
typedef struct IMultiLanguageVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IMultiLanguage * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IMultiLanguage * This);
	ULONG(STDMETHODCALLTYPE * Release) (IMultiLanguage * This);
	HRESULT(STDMETHODCALLTYPE * GetNumberOfCodePageInfo) (IMultiLanguage * This, UINT * pcCodePage);
	HRESULT(STDMETHODCALLTYPE * GetCodePageInfo) (IMultiLanguage * This, UINT uiCodePage, PMIMECPINFO pCodePageInfo);
	HRESULT(STDMETHODCALLTYPE * GetFamilyCodePage) (IMultiLanguage * This, UINT uiCodePage, UINT * puiFamilyCodePage);
	HRESULT(STDMETHODCALLTYPE * EnumCodePages) (IMultiLanguage * This, DWORD grfFlags, IEnumCodePage ** ppEnumCodePage);
	HRESULT(STDMETHODCALLTYPE * GetCharsetInfo) (IMultiLanguage * This, BSTR Charset, PMIMECSETINFO pCharsetInfo);
	HRESULT(STDMETHODCALLTYPE * IsConvertible) (IMultiLanguage * This, DWORD dwSrcEncoding, DWORD dwDstEncoding);
	HRESULT(STDMETHODCALLTYPE * ConvertString) (IMultiLanguage * This, DWORD * pdwMode, DWORD dwSrcEncoding, DWORD dwDstEncoding, BYTE * pSrcStr, UINT * pcSrcSize, BYTE * pDstStr, UINT * pcDstSize);
	HRESULT(STDMETHODCALLTYPE * ConvertStringToUnicode) (IMultiLanguage * This, DWORD * pdwMode, DWORD dwEncoding, CHAR * pSrcStr, UINT * pcSrcSize, WCHAR * pDstStr, UINT * pcDstSize);
	HRESULT(STDMETHODCALLTYPE * ConvertStringFromUnicode) (IMultiLanguage * This, DWORD * pdwMode, DWORD dwEncoding, WCHAR * pSrcStr, UINT * pcSrcSize, CHAR * pDstStr, UINT * pcDstSize);
	HRESULT(STDMETHODCALLTYPE * ConvertStringReset) (IMultiLanguage * This);
	HRESULT(STDMETHODCALLTYPE * GetRfc1766FromLcid) (IMultiLanguage * This, LCID Locale, BSTR * pbstrRfc1766);
	HRESULT(STDMETHODCALLTYPE * GetLcidFromRfc1766) (IMultiLanguage * This, LCID * pLocale, BSTR bstrRfc1766);
	HRESULT(STDMETHODCALLTYPE * EnumRfc1766) (IMultiLanguage * This, IEnumRfc1766 ** ppEnumRfc1766);
	HRESULT(STDMETHODCALLTYPE * GetRfc1766Info) (IMultiLanguage * This, LCID Locale, PRFC1766INFO pRfc1766Info);
	HRESULT(STDMETHODCALLTYPE * CreateConvertCharset) (IMultiLanguage * This, UINT uiSrcCodePage, UINT uiDstCodePage, DWORD dwProperty, IMLangConvertCharset ** ppMLangConvertCharset);
	END_INTERFACE
}  IMultiLanguageVtbl;
interface IMultiLanguage
{
	CONST_VTBL struct IMultiLanguageVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IMultiLanguage_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IMultiLanguage_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IMultiLanguage_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IMultiLanguage_GetNumberOfCodePageInfo(This,pcCodePage) ( (This)->lpVtbl -> GetNumberOfCodePageInfo(This,pcCodePage) )
#define IMultiLanguage_GetCodePageInfo(This,uiCodePage,pCodePageInfo) ( (This)->lpVtbl -> GetCodePageInfo(This,uiCodePage,pCodePageInfo) )
#define IMultiLanguage_GetFamilyCodePage(This,uiCodePage,puiFamilyCodePage) ( (This)->lpVtbl -> GetFamilyCodePage(This,uiCodePage,puiFamilyCodePage) )
#define IMultiLanguage_EnumCodePages(This,grfFlags,ppEnumCodePage) ( (This)->lpVtbl -> EnumCodePages(This,grfFlags,ppEnumCodePage) )
#define IMultiLanguage_GetCharsetInfo(This,Charset,pCharsetInfo) ( (This)->lpVtbl -> GetCharsetInfo(This,Charset,pCharsetInfo) )
#define IMultiLanguage_IsConvertible(This,dwSrcEncoding,dwDstEncoding) ( (This)->lpVtbl -> IsConvertible(This,dwSrcEncoding,dwDstEncoding) )
#define IMultiLanguage_ConvertString(This,pdwMode,dwSrcEncoding,dwDstEncoding,pSrcStr,pcSrcSize,pDstStr,pcDstSize) ( (This)->lpVtbl -> ConvertString(This,pdwMode,dwSrcEncoding,dwDstEncoding,pSrcStr,pcSrcSize,pDstStr,pcDstSize) )
#define IMultiLanguage_ConvertStringToUnicode(This,pdwMode,dwEncoding,pSrcStr,pcSrcSize,pDstStr,pcDstSize) ( (This)->lpVtbl -> ConvertStringToUnicode(This,pdwMode,dwEncoding,pSrcStr,pcSrcSize,pDstStr,pcDstSize) )
#define IMultiLanguage_ConvertStringFromUnicode(This,pdwMode,dwEncoding,pSrcStr,pcSrcSize,pDstStr,pcDstSize) ( (This)->lpVtbl -> ConvertStringFromUnicode(This,pdwMode,dwEncoding,pSrcStr,pcSrcSize,pDstStr,pcDstSize) )
#define IMultiLanguage_ConvertStringReset(This) ( (This)->lpVtbl -> ConvertStringReset(This) )
#define IMultiLanguage_GetRfc1766FromLcid(This,Locale,pbstrRfc1766) ( (This)->lpVtbl -> GetRfc1766FromLcid(This,Locale,pbstrRfc1766) )
#define IMultiLanguage_GetLcidFromRfc1766(This,pLocale,bstrRfc1766) ( (This)->lpVtbl -> GetLcidFromRfc1766(This,pLocale,bstrRfc1766) )
#define IMultiLanguage_EnumRfc1766(This,ppEnumRfc1766) ( (This)->lpVtbl -> EnumRfc1766(This,ppEnumRfc1766) )
#define IMultiLanguage_GetRfc1766Info(This,Locale,pRfc1766Info) ( (This)->lpVtbl -> GetRfc1766Info(This,Locale,pRfc1766Info) )
#define IMultiLanguage_CreateConvertCharset(This,uiSrcCodePage,uiDstCodePage,dwProperty,ppMLangConvertCharset) ( (This)->lpVtbl -> CreateConvertCharset(This,uiSrcCodePage,uiDstCodePage,dwProperty,ppMLangConvertCharset) )
#endif
#endif
#ifndef __IMultiLanguage2_INTERFACE_DEFINED__
#define __IMultiLanguage2_INTERFACE_DEFINED__
typedef IMultiLanguage2 *LPMULTILANGUAGE2;
typedef enum tagMLDETECTCP
{
	MLDETECTCP_NONE = 0,
	MLDETECTCP_7BIT = 1,
	MLDETECTCP_8BIT = 2,
	MLDETECTCP_DBCS = 4,
	MLDETECTCP_HTML = 8,
	MLDETECTCP_NUMBER = 16
} MLDETECTCP;
typedef struct tagDetectEncodingInfo
{
	UINT nLangID;
	UINT nCodePage;
	INT nDocPercent;
	INT nConfidence;
} DetectEncodingInfo;
typedef struct tagDetectEncodingInfo *pDetectEncodingInfo;
typedef enum tagSCRIPTFONTCONTF
{
	SCRIPTCONTF_FIXED_FONT = 0x1,
	SCRIPTCONTF_PROPORTIONAL_FONT = 0x2,
	SCRIPTCONTF_SCRIPT_USER = 0x10000,
	SCRIPTCONTF_SCRIPT_HIDE = 0x20000,
	SCRIPTCONTF_SCRIPT_SYSTEM = 0x40000
} SCRIPTFONTCONTF;
typedef struct tagSCRIPFONTINFO
{
	SCRIPT_IDS scripts;
	WCHAR wszFont[32];
} SCRIPTFONTINFO;
typedef struct tagSCRIPFONTINFO *PSCRIPTFONTINFO;
extern const IID IID_IMultiLanguage2;
typedef struct IMultiLanguage2Vtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IMultiLanguage2 * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IMultiLanguage2 * This);
	ULONG(STDMETHODCALLTYPE * Release) (IMultiLanguage2 * This);
	HRESULT(STDMETHODCALLTYPE * GetNumberOfCodePageInfo) (IMultiLanguage2 * This, UINT * pcCodePage);
	HRESULT(STDMETHODCALLTYPE * GetCodePageInfo) (IMultiLanguage2 * This, UINT uiCodePage, LANGID LangId, PMIMECPINFO pCodePageInfo);
	HRESULT(STDMETHODCALLTYPE * GetFamilyCodePage) (IMultiLanguage2 * This, UINT uiCodePage, UINT * puiFamilyCodePage);
	HRESULT(STDMETHODCALLTYPE * EnumCodePages) (IMultiLanguage2 * This, DWORD grfFlags, LANGID LangId, IEnumCodePage ** ppEnumCodePage);
	HRESULT(STDMETHODCALLTYPE * GetCharsetInfo) (IMultiLanguage2 * This, BSTR Charset, PMIMECSETINFO pCharsetInfo);
	HRESULT(STDMETHODCALLTYPE * IsConvertible) (IMultiLanguage2 * This, DWORD dwSrcEncoding, DWORD dwDstEncoding);
	HRESULT(STDMETHODCALLTYPE * ConvertString) (IMultiLanguage2 * This, DWORD * pdwMode, DWORD dwSrcEncoding, DWORD dwDstEncoding, BYTE * pSrcStr, UINT * pcSrcSize, BYTE * pDstStr, UINT * pcDstSize);
	HRESULT(STDMETHODCALLTYPE * ConvertStringToUnicode) (IMultiLanguage2 * This, DWORD * pdwMode, DWORD dwEncoding, CHAR * pSrcStr, UINT * pcSrcSize, WCHAR * pDstStr, UINT * pcDstSize);
	HRESULT(STDMETHODCALLTYPE * ConvertStringFromUnicode) (IMultiLanguage2 * This, DWORD * pdwMode, DWORD dwEncoding, WCHAR * pSrcStr, UINT * pcSrcSize, CHAR * pDstStr, UINT * pcDstSize);
	HRESULT(STDMETHODCALLTYPE * ConvertStringReset) (IMultiLanguage2 * This);
	HRESULT(STDMETHODCALLTYPE * GetRfc1766FromLcid) (IMultiLanguage2 * This, LCID Locale, BSTR * pbstrRfc1766);
	HRESULT(STDMETHODCALLTYPE * GetLcidFromRfc1766) (IMultiLanguage2 * This, LCID * pLocale, BSTR bstrRfc1766);
	HRESULT(STDMETHODCALLTYPE * EnumRfc1766) (IMultiLanguage2 * This, LANGID LangId, IEnumRfc1766 ** ppEnumRfc1766);
	HRESULT(STDMETHODCALLTYPE * GetRfc1766Info) (IMultiLanguage2 * This, LCID Locale, LANGID LangId, PRFC1766INFO pRfc1766Info);
	HRESULT(STDMETHODCALLTYPE * CreateConvertCharset) (IMultiLanguage2 * This, UINT uiSrcCodePage, UINT uiDstCodePage, DWORD dwProperty, IMLangConvertCharset ** ppMLangConvertCharset);
	HRESULT(STDMETHODCALLTYPE * ConvertStringInIStream) (IMultiLanguage2 * This, DWORD * pdwMode, DWORD dwFlag, WCHAR * lpFallBack, DWORD dwSrcEncoding, DWORD dwDstEncoding, IStream * pstmIn, IStream * pstmOut);
	HRESULT(STDMETHODCALLTYPE * ConvertStringToUnicodeEx) (IMultiLanguage2 * This, DWORD * pdwMode, DWORD dwEncoding, CHAR * pSrcStr, UINT * pcSrcSize, WCHAR * pDstStr, UINT * pcDstSize, DWORD dwFlag, WCHAR * lpFallBack);
	HRESULT(STDMETHODCALLTYPE * ConvertStringFromUnicodeEx) (IMultiLanguage2 * This, DWORD * pdwMode, DWORD dwEncoding, WCHAR * pSrcStr, UINT * pcSrcSize, CHAR * pDstStr, UINT * pcDstSize, DWORD dwFlag, WCHAR * lpFallBack);
	HRESULT(STDMETHODCALLTYPE * DetectCodepageInIStream) (IMultiLanguage2 * This, DWORD dwFlag, DWORD dwPrefWinCodePage, IStream * pstmIn, DetectEncodingInfo * lpEncoding, INT * pnScores);
	HRESULT(STDMETHODCALLTYPE * DetectInputCodepage) (IMultiLanguage2 * This, DWORD dwFlag, DWORD dwPrefWinCodePage, CHAR * pSrcStr, INT * pcSrcSize, DetectEncodingInfo * lpEncoding, INT * pnScores);
	HRESULT(STDMETHODCALLTYPE * ValidateCodePage) (IMultiLanguage2 * This, UINT uiCodePage, HWND hwnd);
	HRESULT(STDMETHODCALLTYPE * GetCodePageDescription) (IMultiLanguage2 * This, UINT uiCodePage, LCID lcid, LPWSTR lpWideCharStr, int cchWideChar);
	HRESULT(STDMETHODCALLTYPE * IsCodePageInstallable) (IMultiLanguage2 * This, UINT uiCodePage);
	HRESULT(STDMETHODCALLTYPE * SetMimeDBSource) (IMultiLanguage2 * This, MIMECONTF dwSource);
	HRESULT(STDMETHODCALLTYPE * GetNumberOfScripts) (IMultiLanguage2 * This, UINT * pnScripts);
	HRESULT(STDMETHODCALLTYPE * EnumScripts) (IMultiLanguage2 * This, DWORD dwFlags, LANGID LangId, IEnumScript ** ppEnumScript);
	HRESULT(STDMETHODCALLTYPE * ValidateCodePageEx) (IMultiLanguage2 * This, UINT uiCodePage, HWND hwnd, DWORD dwfIODControl);
	END_INTERFACE
}  IMultiLanguage2Vtbl;
interface IMultiLanguage2
{
	CONST_VTBL struct IMultiLanguage2Vtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IMultiLanguage2_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IMultiLanguage2_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IMultiLanguage2_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IMultiLanguage2_GetNumberOfCodePageInfo(This,pcCodePage) ( (This)->lpVtbl -> GetNumberOfCodePageInfo(This,pcCodePage) )
#define IMultiLanguage2_GetCodePageInfo(This,uiCodePage,LangId,pCodePageInfo) ( (This)->lpVtbl -> GetCodePageInfo(This,uiCodePage,LangId,pCodePageInfo) )
#define IMultiLanguage2_GetFamilyCodePage(This,uiCodePage,puiFamilyCodePage) ( (This)->lpVtbl -> GetFamilyCodePage(This,uiCodePage,puiFamilyCodePage) )
#define IMultiLanguage2_EnumCodePages(This,grfFlags,LangId,ppEnumCodePage) ( (This)->lpVtbl -> EnumCodePages(This,grfFlags,LangId,ppEnumCodePage) )
#define IMultiLanguage2_GetCharsetInfo(This,Charset,pCharsetInfo) ( (This)->lpVtbl -> GetCharsetInfo(This,Charset,pCharsetInfo) )
#define IMultiLanguage2_IsConvertible(This,dwSrcEncoding,dwDstEncoding) ( (This)->lpVtbl -> IsConvertible(This,dwSrcEncoding,dwDstEncoding) )
#define IMultiLanguage2_ConvertString(This,pdwMode,dwSrcEncoding,dwDstEncoding,pSrcStr,pcSrcSize,pDstStr,pcDstSize) ( (This)->lpVtbl -> ConvertString(This,pdwMode,dwSrcEncoding,dwDstEncoding,pSrcStr,pcSrcSize,pDstStr,pcDstSize) )
#define IMultiLanguage2_ConvertStringToUnicode(This,pdwMode,dwEncoding,pSrcStr,pcSrcSize,pDstStr,pcDstSize) ( (This)->lpVtbl -> ConvertStringToUnicode(This,pdwMode,dwEncoding,pSrcStr,pcSrcSize,pDstStr,pcDstSize) )
#define IMultiLanguage2_ConvertStringFromUnicode(This,pdwMode,dwEncoding,pSrcStr,pcSrcSize,pDstStr,pcDstSize) ( (This)->lpVtbl -> ConvertStringFromUnicode(This,pdwMode,dwEncoding,pSrcStr,pcSrcSize,pDstStr,pcDstSize) )
#define IMultiLanguage2_ConvertStringReset(This) ( (This)->lpVtbl -> ConvertStringReset(This) )
#define IMultiLanguage2_GetRfc1766FromLcid(This,Locale,pbstrRfc1766) ( (This)->lpVtbl -> GetRfc1766FromLcid(This,Locale,pbstrRfc1766) )
#define IMultiLanguage2_GetLcidFromRfc1766(This,pLocale,bstrRfc1766) ( (This)->lpVtbl -> GetLcidFromRfc1766(This,pLocale,bstrRfc1766) )
#define IMultiLanguage2_EnumRfc1766(This,LangId,ppEnumRfc1766) ( (This)->lpVtbl -> EnumRfc1766(This,LangId,ppEnumRfc1766) )
#define IMultiLanguage2_GetRfc1766Info(This,Locale,LangId,pRfc1766Info) ( (This)->lpVtbl -> GetRfc1766Info(This,Locale,LangId,pRfc1766Info) )
#define IMultiLanguage2_CreateConvertCharset(This,uiSrcCodePage,uiDstCodePage,dwProperty,ppMLangConvertCharset) ( (This)->lpVtbl -> CreateConvertCharset(This,uiSrcCodePage,uiDstCodePage,dwProperty,ppMLangConvertCharset) )
#define IMultiLanguage2_ConvertStringInIStream(This,pdwMode,dwFlag,lpFallBack,dwSrcEncoding,dwDstEncoding,pstmIn,pstmOut) ( (This)->lpVtbl -> ConvertStringInIStream(This,pdwMode,dwFlag,lpFallBack,dwSrcEncoding,dwDstEncoding,pstmIn,pstmOut) )
#define IMultiLanguage2_ConvertStringToUnicodeEx(This,pdwMode,dwEncoding,pSrcStr,pcSrcSize,pDstStr,pcDstSize,dwFlag,lpFallBack) ( (This)->lpVtbl -> ConvertStringToUnicodeEx(This,pdwMode,dwEncoding,pSrcStr,pcSrcSize,pDstStr,pcDstSize,dwFlag,lpFallBack) )
#define IMultiLanguage2_ConvertStringFromUnicodeEx(This,pdwMode,dwEncoding,pSrcStr,pcSrcSize,pDstStr,pcDstSize,dwFlag,lpFallBack) ( (This)->lpVtbl -> ConvertStringFromUnicodeEx(This,pdwMode,dwEncoding,pSrcStr,pcSrcSize,pDstStr,pcDstSize,dwFlag,lpFallBack) )
#define IMultiLanguage2_DetectCodepageInIStream(This,dwFlag,dwPrefWinCodePage,pstmIn,lpEncoding,pnScores) ( (This)->lpVtbl -> DetectCodepageInIStream(This,dwFlag,dwPrefWinCodePage,pstmIn,lpEncoding,pnScores) )
#define IMultiLanguage2_DetectInputCodepage(This,dwFlag,dwPrefWinCodePage,pSrcStr,pcSrcSize,lpEncoding,pnScores) ( (This)->lpVtbl -> DetectInputCodepage(This,dwFlag,dwPrefWinCodePage,pSrcStr,pcSrcSize,lpEncoding,pnScores) )
#define IMultiLanguage2_ValidateCodePage(This,uiCodePage,hwnd) ( (This)->lpVtbl -> ValidateCodePage(This,uiCodePage,hwnd) )
#define IMultiLanguage2_GetCodePageDescription(This,uiCodePage,lcid,lpWideCharStr,cchWideChar) ( (This)->lpVtbl -> GetCodePageDescription(This,uiCodePage,lcid,lpWideCharStr,cchWideChar) )
#define IMultiLanguage2_IsCodePageInstallable(This,uiCodePage) ( (This)->lpVtbl -> IsCodePageInstallable(This,uiCodePage) )
#define IMultiLanguage2_SetMimeDBSource(This,dwSource) ( (This)->lpVtbl -> SetMimeDBSource(This,dwSource) )
#define IMultiLanguage2_GetNumberOfScripts(This,pnScripts) ( (This)->lpVtbl -> GetNumberOfScripts(This,pnScripts) )
#define IMultiLanguage2_EnumScripts(This,dwFlags,LangId,ppEnumScript) ( (This)->lpVtbl -> EnumScripts(This,dwFlags,LangId,ppEnumScript) )
#define IMultiLanguage2_ValidateCodePageEx(This,uiCodePage,hwnd,dwfIODControl) ( (This)->lpVtbl -> ValidateCodePageEx(This,uiCodePage,hwnd,dwfIODControl) )
#endif
#endif
#ifndef __IMLangCodePages_INTERFACE_DEFINED__
#define __IMLangCodePages_INTERFACE_DEFINED__
typedef IMLangCodePages *PMLANGCODEPAGES;
extern const IID IID_IMLangCodePages;
typedef struct IMLangCodePagesVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IMLangCodePages * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IMLangCodePages * This);
	ULONG(STDMETHODCALLTYPE * Release) (IMLangCodePages * This);
	HRESULT(STDMETHODCALLTYPE * GetCharCodePages) (IMLangCodePages * This, WCHAR chSrc, DWORD * pdwCodePages);
	HRESULT(STDMETHODCALLTYPE * GetStrCodePages) (IMLangCodePages * This, const WCHAR * pszSrc, long cchSrc, DWORD dwPriorityCodePages, DWORD * pdwCodePages, long *pcchCodePages);
	HRESULT(STDMETHODCALLTYPE * CodePageToCodePages) (IMLangCodePages * This, UINT uCodePage, DWORD * pdwCodePages);
	HRESULT(STDMETHODCALLTYPE * CodePagesToCodePage) (IMLangCodePages * This, DWORD dwCodePages, UINT uDefaultCodePage, UINT * puCodePage);
	END_INTERFACE
}  IMLangCodePagesVtbl;
interface IMLangCodePages
{
	CONST_VTBL struct IMLangCodePagesVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IMLangCodePages_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IMLangCodePages_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IMLangCodePages_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IMLangCodePages_GetCharCodePages(This,chSrc,pdwCodePages) ( (This)->lpVtbl -> GetCharCodePages(This,chSrc,pdwCodePages) )
#define IMLangCodePages_GetStrCodePages(This,pszSrc,cchSrc,dwPriorityCodePages,pdwCodePages,pcchCodePages) ( (This)->lpVtbl -> GetStrCodePages(This,pszSrc,cchSrc,dwPriorityCodePages,pdwCodePages,pcchCodePages) )
#define IMLangCodePages_CodePageToCodePages(This,uCodePage,pdwCodePages) ( (This)->lpVtbl -> CodePageToCodePages(This,uCodePage,pdwCodePages) )
#define IMLangCodePages_CodePagesToCodePage(This,dwCodePages,uDefaultCodePage,puCodePage) ( (This)->lpVtbl -> CodePagesToCodePage(This,dwCodePages,uDefaultCodePage,puCodePage) )
#endif
#endif
#ifndef __IMLangFontLink_INTERFACE_DEFINED__
#define __IMLangFontLink_INTERFACE_DEFINED__
typedef IMLangFontLink *PMLANGFONTLINK;
extern const IID IID_IMLangFontLink;
typedef struct IMLangFontLinkVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IMLangFontLink * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IMLangFontLink * This);
	ULONG(STDMETHODCALLTYPE * Release) (IMLangFontLink * This);
	HRESULT(STDMETHODCALLTYPE * GetCharCodePages) (IMLangFontLink * This, WCHAR chSrc, DWORD * pdwCodePages);
	HRESULT(STDMETHODCALLTYPE * GetStrCodePages) (IMLangFontLink * This, const WCHAR * pszSrc, long cchSrc, DWORD dwPriorityCodePages, DWORD * pdwCodePages, long *pcchCodePages);
	HRESULT(STDMETHODCALLTYPE * CodePageToCodePages) (IMLangFontLink * This, UINT uCodePage, DWORD * pdwCodePages);
	HRESULT(STDMETHODCALLTYPE * CodePagesToCodePage) (IMLangFontLink * This, DWORD dwCodePages, UINT uDefaultCodePage, UINT * puCodePage);
	HRESULT(STDMETHODCALLTYPE * GetFontCodePages) (IMLangFontLink * This, HDC hDC, HFONT hFont, DWORD * pdwCodePages);
	HRESULT(STDMETHODCALLTYPE * MapFont) (IMLangFontLink * This, HDC hDC, DWORD dwCodePages, HFONT hSrcFont, HFONT * phDestFont);
	HRESULT(STDMETHODCALLTYPE * ReleaseFont) (IMLangFontLink * This, HFONT hFont);
	HRESULT(STDMETHODCALLTYPE * ResetFontMapping) (IMLangFontLink * This);
	END_INTERFACE
}  IMLangFontLinkVtbl;
interface IMLangFontLink
{
	CONST_VTBL struct IMLangFontLinkVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IMLangFontLink_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IMLangFontLink_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IMLangFontLink_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IMLangFontLink_GetCharCodePages(This,chSrc,pdwCodePages) ( (This)->lpVtbl -> GetCharCodePages(This,chSrc,pdwCodePages) )
#define IMLangFontLink_GetStrCodePages(This,pszSrc,cchSrc,dwPriorityCodePages,pdwCodePages,pcchCodePages) ( (This)->lpVtbl -> GetStrCodePages(This,pszSrc,cchSrc,dwPriorityCodePages,pdwCodePages,pcchCodePages) )
#define IMLangFontLink_CodePageToCodePages(This,uCodePage,pdwCodePages) ( (This)->lpVtbl -> CodePageToCodePages(This,uCodePage,pdwCodePages) )
#define IMLangFontLink_CodePagesToCodePage(This,dwCodePages,uDefaultCodePage,puCodePage) ( (This)->lpVtbl -> CodePagesToCodePage(This,dwCodePages,uDefaultCodePage,puCodePage) )
#define IMLangFontLink_GetFontCodePages(This,hDC,hFont,pdwCodePages) ( (This)->lpVtbl -> GetFontCodePages(This,hDC,hFont,pdwCodePages) )
#define IMLangFontLink_MapFont(This,hDC,dwCodePages,hSrcFont,phDestFont) ( (This)->lpVtbl -> MapFont(This,hDC,dwCodePages,hSrcFont,phDestFont) )
#define IMLangFontLink_ReleaseFont(This,hFont) ( (This)->lpVtbl -> ReleaseFont(This,hFont) )
#define IMLangFontLink_ResetFontMapping(This) ( (This)->lpVtbl -> ResetFontMapping(This) )
#endif
#endif
#ifndef __IMLangFontLink2_INTERFACE_DEFINED__
#define __IMLangFontLink2_INTERFACE_DEFINED__
typedef struct tagUNICODERANGE
{
	WCHAR wcFrom;
	WCHAR wcTo;
} UNICODERANGE;
typedef IMLangFontLink2 *PMLANGFONTLINK2;
extern const IID IID_IMLangFontLink2;
typedef struct IMLangFontLink2Vtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IMLangFontLink2 * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IMLangFontLink2 * This);
	ULONG(STDMETHODCALLTYPE * Release) (IMLangFontLink2 * This);
	HRESULT(STDMETHODCALLTYPE * GetCharCodePages) (IMLangFontLink2 * This, WCHAR chSrc, DWORD * pdwCodePages);
	HRESULT(STDMETHODCALLTYPE * GetStrCodePages) (IMLangFontLink2 * This, const WCHAR * pszSrc, long cchSrc, DWORD dwPriorityCodePages, DWORD * pdwCodePages, long *pcchCodePages);
	HRESULT(STDMETHODCALLTYPE * CodePageToCodePages) (IMLangFontLink2 * This, UINT uCodePage, DWORD * pdwCodePages);
	HRESULT(STDMETHODCALLTYPE * CodePagesToCodePage) (IMLangFontLink2 * This, DWORD dwCodePages, UINT uDefaultCodePage, UINT * puCodePage);
	HRESULT(STDMETHODCALLTYPE * GetFontCodePages) (IMLangFontLink2 * This, HDC hDC, HFONT hFont, DWORD * pdwCodePages);
	HRESULT(STDMETHODCALLTYPE * ReleaseFont) (IMLangFontLink2 * This, HFONT hFont);
	HRESULT(STDMETHODCALLTYPE * ResetFontMapping) (IMLangFontLink2 * This);
	HRESULT(STDMETHODCALLTYPE * MapFont) (IMLangFontLink2 * This, HDC hDC, DWORD dwCodePages, WCHAR chSrc, HFONT * pFont);
	HRESULT(STDMETHODCALLTYPE * GetFontUnicodeRanges) (IMLangFontLink2 * This, HDC hDC, UINT * puiRanges, UNICODERANGE * pUranges);
	HRESULT(STDMETHODCALLTYPE * GetScriptFontInfo) (IMLangFontLink2 * This, SCRIPT_ID sid, DWORD dwFlags, UINT * puiFonts, SCRIPTFONTINFO * pScriptFont);
	HRESULT(STDMETHODCALLTYPE * CodePageToScriptID) (IMLangFontLink2 * This, UINT uiCodePage, SCRIPT_ID * pSid);
	END_INTERFACE
}  IMLangFontLink2Vtbl;
interface IMLangFontLink2
{
	CONST_VTBL struct IMLangFontLink2Vtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IMLangFontLink2_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IMLangFontLink2_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IMLangFontLink2_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IMLangFontLink2_GetCharCodePages(This,chSrc,pdwCodePages) ( (This)->lpVtbl -> GetCharCodePages(This,chSrc,pdwCodePages) )
#define IMLangFontLink2_GetStrCodePages(This,pszSrc,cchSrc,dwPriorityCodePages,pdwCodePages,pcchCodePages) ( (This)->lpVtbl -> GetStrCodePages(This,pszSrc,cchSrc,dwPriorityCodePages,pdwCodePages,pcchCodePages) )
#define IMLangFontLink2_CodePageToCodePages(This,uCodePage,pdwCodePages) ( (This)->lpVtbl -> CodePageToCodePages(This,uCodePage,pdwCodePages) )
#define IMLangFontLink2_CodePagesToCodePage(This,dwCodePages,uDefaultCodePage,puCodePage) ( (This)->lpVtbl -> CodePagesToCodePage(This,dwCodePages,uDefaultCodePage,puCodePage) )
#define IMLangFontLink2_GetFontCodePages(This,hDC,hFont,pdwCodePages) ( (This)->lpVtbl -> GetFontCodePages(This,hDC,hFont,pdwCodePages) )
#define IMLangFontLink2_ReleaseFont(This,hFont) ( (This)->lpVtbl -> ReleaseFont(This,hFont) )
#define IMLangFontLink2_ResetFontMapping(This) ( (This)->lpVtbl -> ResetFontMapping(This) )
#define IMLangFontLink2_MapFont(This,hDC,dwCodePages,chSrc,pFont) ( (This)->lpVtbl -> MapFont(This,hDC,dwCodePages,chSrc,pFont) )
#define IMLangFontLink2_GetFontUnicodeRanges(This,hDC,puiRanges,pUranges) ( (This)->lpVtbl -> GetFontUnicodeRanges(This,hDC,puiRanges,pUranges) )
#define IMLangFontLink2_GetScriptFontInfo(This,sid,dwFlags,puiFonts,pScriptFont) ( (This)->lpVtbl -> GetScriptFontInfo(This,sid,dwFlags,puiFonts,pScriptFont) )
#define IMLangFontLink2_CodePageToScriptID(This,uiCodePage,pSid) ( (This)->lpVtbl -> CodePageToScriptID(This,uiCodePage,pSid) )
#endif
#endif
#ifndef __IMultiLanguage3_INTERFACE_DEFINED__
#define __IMultiLanguage3_INTERFACE_DEFINED__
typedef IMultiLanguage3 *LPMULTILANGUAGE3;
extern const IID IID_IMultiLanguage3;
typedef struct IMultiLanguage3Vtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IMultiLanguage3 * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IMultiLanguage3 * This);
	ULONG(STDMETHODCALLTYPE * Release) (IMultiLanguage3 * This);
	HRESULT(STDMETHODCALLTYPE * GetNumberOfCodePageInfo) (IMultiLanguage3 * This, UINT * pcCodePage);
	HRESULT(STDMETHODCALLTYPE * GetCodePageInfo) (IMultiLanguage3 * This, UINT uiCodePage, LANGID LangId, PMIMECPINFO pCodePageInfo);
	HRESULT(STDMETHODCALLTYPE * GetFamilyCodePage) (IMultiLanguage3 * This, UINT uiCodePage, UINT * puiFamilyCodePage);
	HRESULT(STDMETHODCALLTYPE * EnumCodePages) (IMultiLanguage3 * This, DWORD grfFlags, LANGID LangId, IEnumCodePage ** ppEnumCodePage);
	HRESULT(STDMETHODCALLTYPE * GetCharsetInfo) (IMultiLanguage3 * This, BSTR Charset, PMIMECSETINFO pCharsetInfo);
	HRESULT(STDMETHODCALLTYPE * IsConvertible) (IMultiLanguage3 * This, DWORD dwSrcEncoding, DWORD dwDstEncoding);
	HRESULT(STDMETHODCALLTYPE * ConvertString) (IMultiLanguage3 * This, DWORD * pdwMode, DWORD dwSrcEncoding, DWORD dwDstEncoding, BYTE * pSrcStr, UINT * pcSrcSize, BYTE * pDstStr, UINT * pcDstSize);
	HRESULT(STDMETHODCALLTYPE * ConvertStringToUnicode) (IMultiLanguage3 * This, DWORD * pdwMode, DWORD dwEncoding, CHAR * pSrcStr, UINT * pcSrcSize, WCHAR * pDstStr, UINT * pcDstSize);
	HRESULT(STDMETHODCALLTYPE * ConvertStringFromUnicode) (IMultiLanguage3 * This, DWORD * pdwMode, DWORD dwEncoding, WCHAR * pSrcStr, UINT * pcSrcSize, CHAR * pDstStr, UINT * pcDstSize);
	HRESULT(STDMETHODCALLTYPE * ConvertStringReset) (IMultiLanguage3 * This);
	HRESULT(STDMETHODCALLTYPE * GetRfc1766FromLcid) (IMultiLanguage3 * This, LCID Locale, BSTR * pbstrRfc1766);
	HRESULT(STDMETHODCALLTYPE * GetLcidFromRfc1766) (IMultiLanguage3 * This, LCID * pLocale, BSTR bstrRfc1766);
	HRESULT(STDMETHODCALLTYPE * EnumRfc1766) (IMultiLanguage3 * This, LANGID LangId, IEnumRfc1766 ** ppEnumRfc1766);
	HRESULT(STDMETHODCALLTYPE * GetRfc1766Info) (IMultiLanguage3 * This, LCID Locale, LANGID LangId, PRFC1766INFO pRfc1766Info);
	HRESULT(STDMETHODCALLTYPE * CreateConvertCharset) (IMultiLanguage3 * This, UINT uiSrcCodePage, UINT uiDstCodePage, DWORD dwProperty, IMLangConvertCharset ** ppMLangConvertCharset);
	HRESULT(STDMETHODCALLTYPE * ConvertStringInIStream) (IMultiLanguage3 * This, DWORD * pdwMode, DWORD dwFlag, WCHAR * lpFallBack, DWORD dwSrcEncoding, DWORD dwDstEncoding, IStream * pstmIn, IStream * pstmOut);
	HRESULT(STDMETHODCALLTYPE * ConvertStringToUnicodeEx) (IMultiLanguage3 * This, DWORD * pdwMode, DWORD dwEncoding, CHAR * pSrcStr, UINT * pcSrcSize, WCHAR * pDstStr, UINT * pcDstSize, DWORD dwFlag, WCHAR * lpFallBack);
	HRESULT(STDMETHODCALLTYPE * ConvertStringFromUnicodeEx) (IMultiLanguage3 * This, DWORD * pdwMode, DWORD dwEncoding, WCHAR * pSrcStr, UINT * pcSrcSize, CHAR * pDstStr, UINT * pcDstSize, DWORD dwFlag, WCHAR * lpFallBack);
	HRESULT(STDMETHODCALLTYPE * DetectCodepageInIStream) (IMultiLanguage3 * This, DWORD dwFlag, DWORD dwPrefWinCodePage, IStream * pstmIn, DetectEncodingInfo * lpEncoding, INT * pnScores);
	HRESULT(STDMETHODCALLTYPE * DetectInputCodepage) (IMultiLanguage3 * This, DWORD dwFlag, DWORD dwPrefWinCodePage, CHAR * pSrcStr, INT * pcSrcSize, DetectEncodingInfo * lpEncoding, INT * pnScores);
	HRESULT(STDMETHODCALLTYPE * ValidateCodePage) (IMultiLanguage3 * This, UINT uiCodePage, HWND hwnd);
	HRESULT(STDMETHODCALLTYPE * GetCodePageDescription) (IMultiLanguage3 * This, UINT uiCodePage, LCID lcid, LPWSTR lpWideCharStr, int cchWideChar);
	HRESULT(STDMETHODCALLTYPE * IsCodePageInstallable) (IMultiLanguage3 * This, UINT uiCodePage);
	HRESULT(STDMETHODCALLTYPE * SetMimeDBSource) (IMultiLanguage3 * This, MIMECONTF dwSource);
	HRESULT(STDMETHODCALLTYPE * GetNumberOfScripts) (IMultiLanguage3 * This, UINT * pnScripts);
	HRESULT(STDMETHODCALLTYPE * EnumScripts) (IMultiLanguage3 * This, DWORD dwFlags, LANGID LangId, IEnumScript ** ppEnumScript);
	HRESULT(STDMETHODCALLTYPE * ValidateCodePageEx) (IMultiLanguage3 * This, UINT uiCodePage, HWND hwnd, DWORD dwfIODControl);
	HRESULT(STDMETHODCALLTYPE * DetectOutboundCodePage) (IMultiLanguage3 * This, DWORD dwFlags, LPCWSTR lpWideCharStr, UINT cchWideChar, const UINT * puiPreferredCodePages, UINT nPreferredCodePages, UINT * puiDetectedCodePages, UINT * pnDetectedCodePages, LPCWSTR lpSpecialChar);
	HRESULT(STDMETHODCALLTYPE * DetectOutboundCodePageInIStream) (IMultiLanguage3 * This, DWORD dwFlags, IStream * pStrIn, const UINT * puiPreferredCodePages, UINT nPreferredCodePages, UINT * puiDetectedCodePages, UINT * pnDetectedCodePages, LPCWSTR lpSpecialChar);
	END_INTERFACE
}  IMultiLanguage3Vtbl;
interface IMultiLanguage3
{
	CONST_VTBL struct IMultiLanguage3Vtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IMultiLanguage3_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IMultiLanguage3_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IMultiLanguage3_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IMultiLanguage3_GetNumberOfCodePageInfo(This,pcCodePage) ( (This)->lpVtbl -> GetNumberOfCodePageInfo(This,pcCodePage) )
#define IMultiLanguage3_GetCodePageInfo(This,uiCodePage,LangId,pCodePageInfo) ( (This)->lpVtbl -> GetCodePageInfo(This,uiCodePage,LangId,pCodePageInfo) )
#define IMultiLanguage3_GetFamilyCodePage(This,uiCodePage,puiFamilyCodePage) ( (This)->lpVtbl -> GetFamilyCodePage(This,uiCodePage,puiFamilyCodePage) )
#define IMultiLanguage3_EnumCodePages(This,grfFlags,LangId,ppEnumCodePage) ( (This)->lpVtbl -> EnumCodePages(This,grfFlags,LangId,ppEnumCodePage) )
#define IMultiLanguage3_GetCharsetInfo(This,Charset,pCharsetInfo) ( (This)->lpVtbl -> GetCharsetInfo(This,Charset,pCharsetInfo) )
#define IMultiLanguage3_IsConvertible(This,dwSrcEncoding,dwDstEncoding) ( (This)->lpVtbl -> IsConvertible(This,dwSrcEncoding,dwDstEncoding) )
#define IMultiLanguage3_ConvertString(This,pdwMode,dwSrcEncoding,dwDstEncoding,pSrcStr,pcSrcSize,pDstStr,pcDstSize) ( (This)->lpVtbl -> ConvertString(This,pdwMode,dwSrcEncoding,dwDstEncoding,pSrcStr,pcSrcSize,pDstStr,pcDstSize) )
#define IMultiLanguage3_ConvertStringToUnicode(This,pdwMode,dwEncoding,pSrcStr,pcSrcSize,pDstStr,pcDstSize) ( (This)->lpVtbl -> ConvertStringToUnicode(This,pdwMode,dwEncoding,pSrcStr,pcSrcSize,pDstStr,pcDstSize) )
#define IMultiLanguage3_ConvertStringFromUnicode(This,pdwMode,dwEncoding,pSrcStr,pcSrcSize,pDstStr,pcDstSize) ( (This)->lpVtbl -> ConvertStringFromUnicode(This,pdwMode,dwEncoding,pSrcStr,pcSrcSize,pDstStr,pcDstSize) )
#define IMultiLanguage3_ConvertStringReset(This) ( (This)->lpVtbl -> ConvertStringReset(This) )
#define IMultiLanguage3_GetRfc1766FromLcid(This,Locale,pbstrRfc1766) ( (This)->lpVtbl -> GetRfc1766FromLcid(This,Locale,pbstrRfc1766) )
#define IMultiLanguage3_GetLcidFromRfc1766(This,pLocale,bstrRfc1766) ( (This)->lpVtbl -> GetLcidFromRfc1766(This,pLocale,bstrRfc1766) )
#define IMultiLanguage3_EnumRfc1766(This,LangId,ppEnumRfc1766) ( (This)->lpVtbl -> EnumRfc1766(This,LangId,ppEnumRfc1766) )
#define IMultiLanguage3_GetRfc1766Info(This,Locale,LangId,pRfc1766Info) ( (This)->lpVtbl -> GetRfc1766Info(This,Locale,LangId,pRfc1766Info) )
#define IMultiLanguage3_CreateConvertCharset(This,uiSrcCodePage,uiDstCodePage,dwProperty,ppMLangConvertCharset) ( (This)->lpVtbl -> CreateConvertCharset(This,uiSrcCodePage,uiDstCodePage,dwProperty,ppMLangConvertCharset) )
#define IMultiLanguage3_ConvertStringInIStream(This,pdwMode,dwFlag,lpFallBack,dwSrcEncoding,dwDstEncoding,pstmIn,pstmOut) ( (This)->lpVtbl -> ConvertStringInIStream(This,pdwMode,dwFlag,lpFallBack,dwSrcEncoding,dwDstEncoding,pstmIn,pstmOut) )
#define IMultiLanguage3_ConvertStringToUnicodeEx(This,pdwMode,dwEncoding,pSrcStr,pcSrcSize,pDstStr,pcDstSize,dwFlag,lpFallBack) ( (This)->lpVtbl -> ConvertStringToUnicodeEx(This,pdwMode,dwEncoding,pSrcStr,pcSrcSize,pDstStr,pcDstSize,dwFlag,lpFallBack) )
#define IMultiLanguage3_ConvertStringFromUnicodeEx(This,pdwMode,dwEncoding,pSrcStr,pcSrcSize,pDstStr,pcDstSize,dwFlag,lpFallBack) ( (This)->lpVtbl -> ConvertStringFromUnicodeEx(This,pdwMode,dwEncoding,pSrcStr,pcSrcSize,pDstStr,pcDstSize,dwFlag,lpFallBack) )
#define IMultiLanguage3_DetectCodepageInIStream(This,dwFlag,dwPrefWinCodePage,pstmIn,lpEncoding,pnScores) ( (This)->lpVtbl -> DetectCodepageInIStream(This,dwFlag,dwPrefWinCodePage,pstmIn,lpEncoding,pnScores) )
#define IMultiLanguage3_DetectInputCodepage(This,dwFlag,dwPrefWinCodePage,pSrcStr,pcSrcSize,lpEncoding,pnScores) ( (This)->lpVtbl -> DetectInputCodepage(This,dwFlag,dwPrefWinCodePage,pSrcStr,pcSrcSize,lpEncoding,pnScores) )
#define IMultiLanguage3_ValidateCodePage(This,uiCodePage,hwnd) ( (This)->lpVtbl -> ValidateCodePage(This,uiCodePage,hwnd) )
#define IMultiLanguage3_GetCodePageDescription(This,uiCodePage,lcid,lpWideCharStr,cchWideChar) ( (This)->lpVtbl -> GetCodePageDescription(This,uiCodePage,lcid,lpWideCharStr,cchWideChar) )
#define IMultiLanguage3_IsCodePageInstallable(This,uiCodePage) ( (This)->lpVtbl -> IsCodePageInstallable(This,uiCodePage) )
#define IMultiLanguage3_SetMimeDBSource(This,dwSource) ( (This)->lpVtbl -> SetMimeDBSource(This,dwSource) )
#define IMultiLanguage3_GetNumberOfScripts(This,pnScripts) ( (This)->lpVtbl -> GetNumberOfScripts(This,pnScripts) )
#define IMultiLanguage3_EnumScripts(This,dwFlags,LangId,ppEnumScript) ( (This)->lpVtbl -> EnumScripts(This,dwFlags,LangId,ppEnumScript) )
#define IMultiLanguage3_ValidateCodePageEx(This,uiCodePage,hwnd,dwfIODControl) ( (This)->lpVtbl -> ValidateCodePageEx(This,uiCodePage,hwnd,dwfIODControl) )
#define IMultiLanguage3_DetectOutboundCodePage(This,dwFlags,lpWideCharStr,cchWideChar,puiPreferredCodePages,nPreferredCodePages,puiDetectedCodePages,pnDetectedCodePages,lpSpecialChar) ( (This)->lpVtbl -> DetectOutboundCodePage(This,dwFlags,lpWideCharStr,cchWideChar,puiPreferredCodePages,nPreferredCodePages,puiDetectedCodePages,pnDetectedCodePages,lpSpecialChar) )
#define IMultiLanguage3_DetectOutboundCodePageInIStream(This,dwFlags,pStrIn,puiPreferredCodePages,nPreferredCodePages,puiDetectedCodePages,pnDetectedCodePages,lpSpecialChar) ( (This)->lpVtbl -> DetectOutboundCodePageInIStream(This,dwFlags,pStrIn,puiPreferredCodePages,nPreferredCodePages,puiDetectedCodePages,pnDetectedCodePages,lpSpecialChar) )
#endif
#endif
extern const CLSID CLSID_CMultiLanguage;
#endif
#ifndef _MLANG_H_API_DEF_
#define _MLANG_H_API_DEF_
STDAPI LcidToRfc1766A(LCID Locale, LPSTR pszRfc1766, int iMaxLength);
STDAPI LcidToRfc1766W(LCID Locale, LPWSTR pwszRfc1766, int nChar);
#ifdef UNICODE
#define LcidToRfc1766        LcidToRfc1766W
#else
#define LcidToRfc1766        LcidToRfc1766A
#endif
STDAPI Rfc1766ToLcidA(LCID *pLocale, LPCSTR pszRfc1766);
STDAPI Rfc1766ToLcidW(LCID *pLocale, LPCWSTR pszRfc1766);
#ifdef UNICODE
#define Rfc1766ToLcid        Rfc1766ToLcidW
#else
#define Rfc1766ToLcid        Rfc1766ToLcidA
#endif
STDAPI IsConvertINetStringAvailable(DWORD dwSrcEncoding, DWORD dwDstEncoding);
STDAPI ConvertINetString(LPDWORD lpdwMode, DWORD dwSrcEncoding, DWORD dwDstEncoding, LPCSTR lpSrcStr, LPINT lpnSrcSize, LPSTR lpDstStr, LPINT lpnDstSize);
STDAPI ConvertINetMultiByteToUnicode(LPDWORD lpdwMode, DWORD dwEncoding, LPCSTR lpSrcStr, LPINT lpnMultiCharCount, LPWSTR lpDstStr, LPINT lpnWideCharCount);
STDAPI ConvertINetUnicodeToMultiByte(LPDWORD lpdwMode, DWORD dwEncoding, LPCWSTR lpSrcStr, LPINT lpnWideCharCount, LPSTR lpDstStr, LPINT lpnMultiCharCount);
#endif
extern RPC_IF_HANDLE __MIDL_itf_mlang_0001_0019_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_mlang_0001_0019_v0_0_s_ifspec;
#endif

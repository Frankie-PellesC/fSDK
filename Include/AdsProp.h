/*+@@file@@----------------------------------------------------------------*//*!
 \file		AdsProp.h
 \par Description 
            Extension and update of headers for PellesC compiler suite.
 \par Project: 
            PellesC Headers extension
 \date		Created  on Sat Jul  2 15:47:53 2016
 \date		Modified on Sat Jul  2 15:47:53 2016
 \author	frankie
\*//*-@@file@@----------------------------------------------------------------*/

#ifndef _ADSPROP_H_
#define _ADSPROP_H_
#if __POCC__ >= 500
#pragma once
#endif
#define WM_ADSPROP_NOTIFY_PAGEINIT   (WM_USER + 1101)
#define WM_ADSPROP_NOTIFY_PAGEHWND   (WM_USER + 1102)
#define WM_ADSPROP_NOTIFY_CHANGE     (WM_USER + 1103)
#define WM_ADSPROP_NOTIFY_APPLY      (WM_USER + 1104)
#define WM_ADSPROP_NOTIFY_SETFOCUS   (WM_USER + 1105)
#define WM_ADSPROP_NOTIFY_FOREGROUND (WM_USER + 1106)
#define WM_ADSPROP_NOTIFY_EXIT       (WM_USER + 1107)
#define WM_ADSPROP_NOTIFY_ERROR      (WM_USER + 1110)
typedef struct _ADSPROPINITPARAMS
{
    DWORD              dwSize;
    DWORD              dwFlags;
    HRESULT            hr;
    IDirectoryObject * pDsObj;
    LPWSTR             pwzCN;
    PADS_ATTR_INFO     pWritableAttrs;
} ADSPROPINITPARAMS, * PADSPROPINITPARAMS;
typedef struct _ADSPROPERROR
{
    HWND               hwndPage;
    PWSTR              pszPageTitle;
    PWSTR              pszObjPath;
    PWSTR              pszObjClass;
    HRESULT            hr;
    PWSTR              pszError;
} ADSPROPERROR, * PADSPROPERROR;
STDAPI ADsPropCreateNotifyObj(LPDATAOBJECT pAppThdDataObj, PWSTR pwzADsObjName, HWND * phNotifyObj);
STDAPI_(BOOL)ADsPropGetInitInfo(HWND hNotifyObj, PADSPROPINITPARAMS pInitParams);
STDAPI_(BOOL)ADsPropSetHwndWithTitle(HWND hNotifyObj, HWND hPage, PTSTR ptzTitle);
STDAPI_(BOOL)ADsPropSetHwnd(HWND hNotifyObj, HWND hPage);
STDAPI_(BOOL)ADsPropCheckIfWritable(const PWSTR pwzAttr, const PADS_ATTR_INFO pWritableAttrs);
STDAPI_(BOOL)ADsPropSendErrorMessage(HWND hNotifyObj, PADSPROPERROR pError);
STDAPI_(BOOL)ADsPropShowErrorDialog(HWND hNotifyObj, HWND hPage);
#endif



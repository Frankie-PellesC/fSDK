/*+@@file@@----------------------------------------------------------------*//*!
 \file		Ratings.h
 \par Description 
            Extension and update of headers for PellesC compiler suite.
 \par Project: 
            PellesC Headers extension
 \date		Created  on Fri Sep 16 19:22:10 2016
 \date		Modified on Fri Sep 16 19:22:10 2016
 \author	frankie
\*//*-@@file@@----------------------------------------------------------------*/

#ifndef _RATINGS_H_
#define _RATINGS_H_
#if __POCC__ >= 500
#pragma once
#endif
#include <winerror.h>
#include <shlwapi.h>
STDAPI RatingEnable(HWND hwndParent, LPCSTR pszUsername, BOOL fEnable);
STDAPI RatingEnableW(HWND hwndParent, LPCWSTR pszUsername, BOOL fEnable);
STDAPI RatingCheckUserAccess(LPCSTR pszUsername, LPCSTR pszURL, LPCSTR pszRatingInfo, LPBYTE pData, DWORD cbData, void **ppRatingDetails);
STDAPI RatingCheckUserAccessW(LPCWSTR pszUsername, LPCWSTR pszURL, LPCWSTR pszRatingInfo, LPBYTE pData, DWORD cbData, void **ppRatingDetails);
STDAPI RatingAccessDeniedDialog(HWND hDlg, LPCSTR pszUsername, LPCSTR pszContentDescription, void *pRatingDetails);
STDAPI RatingAccessDeniedDialogW(HWND hDlg, LPCWSTR pszUsername, LPCWSTR pszContentDescription, void *pRatingDetails);
STDAPI RatingAccessDeniedDialog2(HWND hDlg, LPCSTR pszUsername, void *pRatingDetails);
STDAPI RatingAccessDeniedDialog2W(HWND hDlg, LPCWSTR pszUsername, void *pRatingDetails);
STDAPI RatingFreeDetails(void *pRatingDetails);
STDAPI RatingObtainCancel(HANDLE hRatingObtainQuery);
STDAPI RatingObtainQuery(LPCSTR pszTargetUrl, DWORD dwUserData, void (*fCallback) (DWORD dwUserData, HRESULT hr, LPCSTR pszRating, void *lpvRatingDetails), HANDLE *phRatingObtainQuery);
STDAPI RatingObtainQueryW(LPCWSTR pszTargetUrl, DWORD dwUserData, void (*fCallback) (DWORD dwUserData, HRESULT hr, LPCWSTR pszRating, void *lpvRatingDetails), HANDLE *phRatingObtainQuery);
STDAPI RatingSetupUI(HWND hDlg, LPCSTR pszUsername);
STDAPI RatingSetupUIW(HWND hDlg, LPCWSTR pszUsername);
#ifdef _INC_COMMCTRL
STDAPI RatingAddPropertyPage(PROPSHEETHEADER *ppsh);
#endif
STDAPI RatingAddToApprovedSites(HWND hDlg, DWORD cbPasswordBlob, BYTE *pbPasswordBlob, LPCWSTR lpszUrl, BOOL fAlwaysNever, BOOL fSitePage, BOOL fApprovedSitesEnforced);
STDAPI RatingClickedOnPRFInternal(HWND hWndOwner, HINSTANCE, LPSTR lpszFileName, int nShow);
STDAPI RatingClickedOnRATInternal(HWND hWndOwner, HINSTANCE, LPSTR lpszFileName, int nShow);
STDAPI RatingEnabledQuery(void);
STDAPI RatingInit(void);
STDAPI_(void) RatingTerm(void);
__inline BOOL IS_RATINGS_ENABLED(void)
{
	TCHAR szSup[200];
	DWORD dwType;
	DWORD cbSize = sizeof(szSup);
	return (SHGetValue(HKEY_LOCAL_MACHINE, TEXT("Software\\Microsoft\\Windows\\CurrentVersion\\Policies\\Ratings"), TEXT("Key"), &dwType, szSup, &cbSize) == ERROR_SUCCESS);
}
#endif




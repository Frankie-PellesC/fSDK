/*+@@file@@----------------------------------------------------------------*//*!
 \file		MAPIWz.h
 \par Description 
            Extension and update of headers for PellesC compiler suite.
 \par Project: 
            PellesC Headers extension
 \date		Created  on Sun Jul 31 15:41:24 2016
 \date		Modified on Sun Jul 31 15:41:24 2016
 \author	frankie
\*//*-@@file@@----------------------------------------------------------------*/

#ifndef _MAPIWZ_H
#define _MAPIWZ_H
#if __POCC__ >= 500
#pragma once
#endif
#define	WIZ_QUERYNUMPAGES	(WM_USER +10)
#define WIZ_NEXT			(WM_USER +11)
#define WIZ_PREV			(WM_USER +12)
#define MAPI_PW_FIRST_PROFILE			0x00000001
#define MAPI_PW_LAUNCHED_BY_CONFIG		0x00000002
#define MAPI_PW_ADD_SERVICE_ONLY		0x00000004
#define MAPI_PW_PROVIDER_UI_ONLY		0x00000008
#define MAPI_PW_HIDE_SERVICES_LIST		0x00000010
#define PR_WIZARD_NO_PST_PAGE			PROP_TAG(PT_BOOLEAN, 0x6700)
#define PR_WIZARD_NO_PAB_PAGE			PROP_TAG(PT_BOOLEAN, 0x6701)
typedef HRESULT(STDAPICALLTYPE LAUNCHWIZARDENTRY) (HWND hParentWnd, ULONG ulFlags, LPCTSTR FAR *lppszServiceNameToAdd, ULONG cbBufferMax, LPTSTR lpszNewProfileName);
typedef LAUNCHWIZARDENTRY FAR *LPLAUNCHWIZARDENTRY;
typedef BOOL(STDAPICALLTYPE SERVICEWIZARDDLGPROC) (HWND hDlg, UINT wMsgID, WPARAM wParam, LPARAM lParam);
typedef SERVICEWIZARDDLGPROC FAR *LPSERVICEWIZARDDLGPROC;
typedef ULONG(STDAPICALLTYPE WIZARDENTRY) (HINSTANCE hProviderDLLInstance, LPTSTR FAR *lppcsResourceName, DLGPROC FAR *lppDlgProc, LPMAPIPROP lpMapiProp, LPVOID lpMapiSupportObject);
typedef WIZARDENTRY FAR *LPWIZARDENTRY;
#define LAUNCHWIZARDENTRYNAME			"LAUNCHWIZARD"
#endif

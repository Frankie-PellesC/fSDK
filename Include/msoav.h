/*+@@file@@----------------------------------------------------------------*//*!
 \file		msoav.h
 \par Description 
            Extension and update of headers for PellesC compiler suite.
 \par Project: 
            PellesC Headers extension
 \date		Created  on Sun Aug 14 20:25:11 2016
 \date		Modified on Sun Aug 14 20:25:11 2016
 \author	frankie
\*//*-@@file@@----------------------------------------------------------------*/

#ifndef _MSOAV_H
#define _MSOAV_H
#if __POCC__ >= 500
#pragma once
#endif
typedef struct _msoavinfo
{
	int cbsize;
	struct
	{
		ULONG fPath:1;
		ULONG fReadOnlyRequest:1;
		ULONG fInstalled:1;
		ULONG fHttpDownload:1;
	};
	HWND hwnd;
	union
	{
		WCHAR *pwzFullPath;
		LPSTORAGE lpstg;
	}u;
	WCHAR *pwzHostName;
	WCHAR *pwzOrigURL;
}MSOAVINFO;
DEFINE_GUID(IID_IOfficeAntiVirus, 0x56ffcc30, 0xd398, 0x11d0, 0xb2, 0xae, 0x0, 0xa0, 0xc9, 0x8, 0xfa, 0x49);
DEFINE_GUID(CATID_MSOfficeAntiVirus, 0x56ffcc30, 0xd398, 0x11d0, 0xb2, 0xae, 0x0, 0xa0, 0xc9, 0x8, 0xfa, 0x49);
#undef  INTERFACE
#define INTERFACE  IOfficeAntiVirus
DECLARE_INTERFACE_(IOfficeAntiVirus, IUnknown)
{
    BEGIN_INTERFACE
    STDMETHOD(QueryInterface)(THIS_ REFIID riid, LPVOID FAR* ppvObj) PURE;
    STDMETHOD_(ULONG, AddRef)(THIS) PURE;
    STDMETHOD_(ULONG, Release)(THIS) PURE;
	STDMETHOD_(HRESULT, Scan)(THIS_ MSOAVINFO *pmsoavinfo ) PURE;
};
#ifndef AVVENDOR
MSOAPI_(BOOL)MsoFAnyAntiVirus(HMSOINST hmsoinst);
MSOAPI_(BOOL)MsoFDoAntiVirusScan(HMSOINST hmsoinst, MSOAVINFO * msoavinfo);
MSOAPI_(void) MsoFreeMsoavStuff(HMSOINST hmsoinst);
MSOAPI_(BOOL)MsoFDoSecurityLevelDlg(HMSOINST hmsoinst, DWORD msorid, int *pSecurityLevel, BOOL *pfTrustInstalled, HWND hwndParent, BOOL fShowVirusCheckers, WCHAR *wzHelpFile, DWORD dwHelpId);
#define msoedmEnable	1
#define	msoedmDisable	2
#define	msoedmDontOpen	3
MSOAPI_(int) MsoMsoedmDialog(HMSOINST hmsoinst, BOOL fAppIsActive, BOOL fHasVBMacros, BOOL fHasXLMMacros, void *pvDigSigStore, void *pvMacro, int nAppID, HWND hwnd, const WCHAR *pwtzPath, int iClient, int iSecurityLevel, int *pmsodsv, WCHAR *wzHelpFile, DWORD dwHelpId, HANDLE hFileDLL, BOOL fUserControl);
#define	msoslUndefined	0
#define msoslNone   1
#define	msoslMedium	2
#define msoslHigh	3
MSOAPI_(int) MsoMsoslGetSL(HMSOINST hmsoinst);
MSOAPI_(int) MsoMsoslSetSL(DWORD msorid, HMSOINST hmsoinst);
#define	msodsvNoMacros	0
#define msodsvUnsigned	1
#define	msodsvPassedTrusted	2
#define	msodsvFailed		3
#define	msodsvLowSecurityLevel 4
#define msodsvPassedTrustedCert 5
#endif
#endif

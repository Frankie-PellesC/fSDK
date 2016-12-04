/*+@@file@@----------------------------------------------------------------*//*!
 \file		DSClient.h
 \par Description 
            Extension and update of headers for PellesC compiler suite.
 \par Project: 
            PellesC Headers extension
 \date		Created  on Wed Jul  6 14:47:21 2016
 \date		Modified on Wed Jul  6 14:47:21 2016
 \author	frankie
\*//*-@@file@@----------------------------------------------------------------*/

#ifndef __DSClient_h__
#define __DSClient_h__
#if __POCC__ >= 500
#pragma once
#endif
DEFINE_GUID(CLSID_MicrosoftDS, 0xfe1290f0, 0xcfbd, 0x11cf, 0xa3, 0x30, 0x0, 0xaa, 0x0, 0xc1, 0x6e, 0x65);
#define CLSID_DsFolder CLSID_MicrosoftDS
DEFINE_GUID(CLSID_DsPropertyPages, 0xd45d530,  0x764b, 0x11d0, 0xa1, 0xca, 0x0, 0xaa, 0x0, 0xc1, 0x6e, 0x65);
DEFINE_GUID(CLSID_DsDomainTreeBrowser, 0x1698790a, 0xe2b4, 0x11d0, 0xb0, 0xb1, 0x00, 0xc0, 0x4f, 0xd8, 0xdc, 0xa6);
DEFINE_GUID(IID_IDsBrowseDomainTree, 0x7cabcf1e, 0x78f5, 0x11d2, 0x96, 0xc, 0x0, 0xc0, 0x4f, 0xa3, 0x1a, 0x86);
DEFINE_GUID(CLSID_DsDisplaySpecifier, 0x1ab4a8c0, 0x6a0b, 0x11d2, 0xad, 0x49, 0x0, 0xc0, 0x4f, 0xa3, 0x1a, 0x86);
#define IID_IDsDisplaySpecifier CLSID_DsDisplaySpecifier
DEFINE_GUID(CLSID_DsFolderProperties, 0x9e51e0d0, 0x6e0f, 0x11d2, 0x96, 0x1, 0x0, 0xc0, 0x4f, 0xa3, 0x1a, 0x86);
#ifndef GUID_DEFS_ONLY
#include <activeds.h>
#define DSOBJECT_ISCONTAINER            0x00000001
#define DSOBJECT_READONLYPAGES          0x80000000
#define DSPROVIDER_UNUSED_0             0x00000001
#define DSPROVIDER_UNUSED_1             0x00000002
#define DSPROVIDER_UNUSED_2             0x00000004
#define DSPROVIDER_UNUSED_3             0x00000008
#define DSPROVIDER_ADVANCED             0x00000010
#define DSPROVIDER_AD_LDS               0x00000020
#define CFSTR_DSOBJECTNAMES TEXT("DsObjectNames")
typedef struct
{
    DWORD   dwFlags;
    DWORD   dwProviderFlags;
    DWORD   offsetName;
    DWORD   offsetClass;
} DSOBJECT, * LPDSOBJECT;
typedef struct
{
    CLSID    clsidNamespace;
    UINT     cItems;
    DSOBJECT aObjects[1];
} DSOBJECTNAMES, * LPDSOBJECTNAMES;
#define CFSTR_DS_DISPLAY_SPEC_OPTIONS TEXT("DsDisplaySpecOptions")
#define CFSTR_DSDISPLAYSPECOPTIONS CFSTR_DS_DISPLAY_SPEC_OPTIONS
typedef struct _DSDISPLAYSPECOPTIONS
{
    DWORD   dwSize;
    DWORD   dwFlags;
    DWORD   offsetAttribPrefix;
    DWORD   offsetUserName;
    DWORD   offsetPassword;
    DWORD   offsetServer;
    DWORD   offsetServerConfigPath;
} DSDISPLAYSPECOPTIONS, * PDSDISPLAYSPECOPTIONS, * LPDSDISPLAYSPECOPTIONS;
#define DS_PROP_SHELL_PREFIX L"shell"
#define DS_PROP_ADMIN_PREFIX L"admin"
#define DSDSOF_HASUSERANDSERVERINFO     0x00000001
#define DSDSOF_SIMPLEAUTHENTICATE       0x00000002
#define DSDSOF_DONTSIGNSEAL             0x00000004
#define DSDSOF_DSAVAILABLE              0x40000000
#define CFSTR_DSPROPERTYPAGEINFO TEXT("DsPropPageInfo")
typedef struct
{
    DWORD offsetString;
} DSPROPERTYPAGEINFO, * LPDSPROPERTYPAGEINFO;
#define DSPROP_ATTRCHANGED_MSG  TEXT("DsPropAttrChanged")
#define DBDTF_RETURNFQDN          0x00000001
#define DBDTF_RETURNMIXEDDOMAINS  0x00000002
#define DBDTF_RETURNEXTERNAL      0x00000004
#define DBDTF_RETURNINBOUND       0x00000008
#define DBDTF_RETURNINOUTBOUND    0x00000010
typedef struct _DOMAINDESC
{       
  LPWSTR pszName;
  LPWSTR pszPath;
  LPWSTR pszNCName;
  LPWSTR pszTrustParent;
  LPWSTR pszObjectClass;
  ULONG  ulFlags;
  BOOL   fDownLevel;
  struct _DOMAINDESC *pdChildList;
  struct _DOMAINDESC *pdNextSibling;
} DOMAIN_DESC, DOMAINDESC, * PDOMAIN_DESC, * LPDOMAINDESC;
typedef struct
{
  DWORD dsSize;
  DWORD dwCount;
  DOMAINDESC aDomains[1];
} DOMAIN_TREE, DOMAINTREE, * PDOMAIN_TREE, * LPDOMAINTREE;
#undef  INTERFACE
#define INTERFACE  IDsBrowseDomainTree
DECLARE_INTERFACE_IID_(IDsBrowseDomainTree, IUnknown, "7cabcf1e-78f5-11d2-960c-00c04fa31a86")
{
    STDMETHOD(QueryInterface)(THIS_ REFIID riid, LPVOID * ppvObj);
    STDMETHOD_(ULONG,AddRef)(THIS);
    STDMETHOD_(ULONG,Release)(THIS);
    STDMETHOD(BrowseTo)(THIS_ HWND hwndParent, LPWSTR *ppszTargetPath, DWORD dwFlags);
    STDMETHOD(GetDomains)(THIS_ PDOMAIN_TREE *ppDomainTree, DWORD dwFlags);
    STDMETHOD(FreeDomains)(THIS_ PDOMAIN_TREE *ppDomainTree);
    STDMETHOD(FlushCachedDomains)(THIS);
    STDMETHOD(SetComputer)(THIS_ LPCWSTR pszComputerName, LPCWSTR pszUserName, LPCWSTR pszPassword);
};
#define DSSSF_SIMPLEAUTHENTICATE        0x00000001
#define DSSSF_DONTSIGNSEAL              0x00000002
#define DSSSF_DSAVAILABLE               0x80000000
#define DSGIF_ISNORMAL                  0x0000000
#define DSGIF_ISOPEN                    0x0000001
#define DSGIF_ISDISABLED                0x0000002
#define DSGIF_ISMASK                    0x000000f
#define DSGIF_GETDEFAULTICON            0x0000010
#define DSGIF_DEFAULTISCONTAINER        0x0000020
#define DSICCF_IGNORETREATASLEAF        0x00000001
#define DSECAF_NOTLISTED               0x00000001
typedef HRESULT (CALLBACK *LPDSENUMATTRIBUTES)(LPARAM lParam, LPCWSTR pszAttributeName, LPCWSTR pszDisplayName, DWORD dwFlags);
#define DSCCIF_HASWIZARDDIALOG          0x00000001
#define DSCCIF_HASWIZARDPRIMARYPAGE     0x00000002
typedef struct
{
    DWORD dwFlags;
    CLSID clsidWizardDialog;
    CLSID clsidWizardPrimaryPage;
    DWORD cWizardExtensions;
    CLSID aWizardExtensions[1];
} DSCLASSCREATIONINFO, * LPDSCLASSCREATIONINFO;
#undef  INTERFACE
#define INTERFACE IDsDisplaySpecifier
DECLARE_INTERFACE_IID_(IDsDisplaySpecifier, IUnknown, "1ab4a8c0-6a0b-11d2-ad49-00c04fa31a86")
{
    STDMETHOD(QueryInterface)(THIS_ REFIID riid, LPVOID * ppvObj);
    STDMETHOD_(ULONG,AddRef)(THIS);
    STDMETHOD_(ULONG,Release)(THIS);
    STDMETHOD(SetServer)(THIS_ LPCWSTR pszServer, LPCWSTR pszUserName, LPCWSTR pszPassword, DWORD dwFlags);
    STDMETHOD(SetLanguageID)(THIS_ LANGID langid);
    STDMETHOD(GetDisplaySpecifier)(THIS_ LPCWSTR pszObjectClass, REFIID riid, void **ppv);
    STDMETHOD(GetIconLocation)(THIS_ LPCWSTR pszObjectClass, DWORD dwFlags, LPWSTR pszBuffer, INT cchBuffer, INT *presid);
    STDMETHOD_(HICON, GetIcon)(THIS_ LPCWSTR pszObjectClass, DWORD dwFlags, INT cxIcon, INT cyIcon);
    STDMETHOD(GetFriendlyClassName)(THIS_ LPCWSTR pszObjectClass, LPWSTR pszBuffer, INT cchBuffer);
    STDMETHOD(GetFriendlyAttributeName)(THIS_ LPCWSTR pszObjectClass, LPCWSTR pszAttributeName, LPWSTR pszBuffer, UINT cchBuffer);
    STDMETHOD_(BOOL, IsClassContainer)(THIS_ LPCWSTR pszObjectClass, LPCWSTR pszADsPath, DWORD dwFlags);
    STDMETHOD(GetClassCreationInfo)(THIS_ LPCWSTR pszObjectClass, LPDSCLASSCREATIONINFO* ppdscci);
    STDMETHOD(EnumClassAttributes)(THIS_ LPCWSTR pszObjectClass, LPDSENUMATTRIBUTES pcbEnum, LPARAM lParam);
    STDMETHOD_(ADSTYPE, GetAttributeADsType)(THIS_ LPCWSTR pszAttributeName);
};
typedef struct
{
    DWORD           cbStruct;
    HWND            hwndOwner;
    LPCWSTR         pszCaption;
    LPCWSTR         pszTitle;
    LPCWSTR         pszRoot;
    LPWSTR          pszPath;
    ULONG           cchPath;
    DWORD           dwFlags;
    BFFCALLBACK     pfnCallback;
    LPARAM          lParam;
    DWORD           dwReturnFormat;
    LPCWSTR         pUserName;
    LPCWSTR         pPassword;
    LPWSTR          pszObjectClass;
    ULONG           cchObjectClass;
} DSBROWSEINFOW, *PDSBROWSEINFOW;
typedef struct
{
    DWORD           cbStruct;
    HWND            hwndOwner;
    LPCSTR          pszCaption;
    LPCSTR          pszTitle;
    LPCWSTR         pszRoot;
    LPWSTR          pszPath;
    ULONG           cchPath;
    DWORD           dwFlags;
    BFFCALLBACK     pfnCallback;
    LPARAM          lParam;
    DWORD           dwReturnFormat;
    LPCWSTR         pUserName;
    LPCWSTR         pPassword;
    LPWSTR          pszObjectClass;
    ULONG           cchObjectClass;
} DSBROWSEINFOA, *PDSBROWSEINFOA;
#ifdef UNICODE
#define DSBROWSEINFO   DSBROWSEINFOW
#define PDSBROWSEINFO  PDSBROWSEINFOW
#else
#define DSBROWSEINFO   DSBROWSEINFOA
#define PDSBROWSEINFO  PDSBROWSEINFOA
#endif
#define DSBI_NOBUTTONS          0x00000001
#define DSBI_NOLINES            0x00000002
#define DSBI_NOLINESATROOT      0x00000004
#define DSBI_CHECKBOXES         0x00000100
#define DSBI_NOROOT             0x00010000
#define DSBI_INCLUDEHIDDEN      0x00020000
#define DSBI_EXPANDONOPEN       0x00040000
#define DSBI_ENTIREDIRECTORY    0x00090000
#define DSBI_RETURN_FORMAT      0x00100000
#define DSBI_HASCREDENTIALS     0x00200000
#define DSBI_IGNORETREATASLEAF  0x00400000
#define DSBI_SIMPLEAUTHENTICATE 0x00800000
#define DSBI_RETURNOBJECTCLASS  0x01000000
#define DSBI_DONTSIGNSEAL       0x02000000
#define DSB_MAX_DISPLAYNAME_CHARS   64
typedef struct
{
    DWORD           cbStruct;
    LPCWSTR         pszADsPath;
    LPCWSTR         pszClass;
    DWORD           dwMask;
    DWORD           dwState;
    DWORD           dwStateMask;
    WCHAR           szDisplayName[DSB_MAX_DISPLAYNAME_CHARS];
    WCHAR           szIconLocation[MAX_PATH];
    INT             iIconResID;
} DSBITEMW, *PDSBITEMW;
typedef struct
{
    DWORD           cbStruct;
    LPCWSTR         pszADsPath;
    LPCWSTR         pszClass;
    DWORD           dwMask;
    DWORD           dwState;
    DWORD           dwStateMask;
    CHAR            szDisplayName[DSB_MAX_DISPLAYNAME_CHARS];
    CHAR            szIconLocation[MAX_PATH];
    INT             iIconResID;
} DSBITEMA, *PDSBITEMA;
#ifdef UNICODE
#define DSBITEM     DSBITEMW
#define PDSBITEM    PDSBITEMW
#else
#define DSBITEM     DSBITEMA
#define PDSBITEM    PDSBITEMA
#endif
#define DSBF_STATE              0x00000001
#define DSBF_ICONLOCATION       0x00000002
#define DSBF_DISPLAYNAME        0x00000004
#define DSBS_CHECKED            0x00000001
#define DSBS_HIDDEN             0x00000002
#define DSBS_ROOT               0x00000004
#define DSBM_QUERYINSERTW       100
#define DSBM_QUERYINSERTA       101
#ifdef UNICODE
#define DSBM_QUERYINSERT DSBM_QUERYINSERTW
#else
#define DSBM_QUERYINSERT DSBM_QUERYINSERTA
#endif
#define DSBM_CHANGEIMAGESTATE   102
#define DSBM_HELP               103
#define DSBM_CONTEXTMENU        104
#define DSBID_BANNER            256
#define DSBID_CONTAINERLIST     257
STDAPI_(int) DsBrowseForContainerW(PDSBROWSEINFOW pInfo);
STDAPI_(int) DsBrowseForContainerA(PDSBROWSEINFOA pInfo);
#ifdef UNICODE
#define DsBrowseForContainer    DsBrowseForContainerW
#else
#define DsBrowseForContainer    DsBrowseForContainerA
#endif
STDAPI_(HICON) DsGetIcon(DWORD dwFlags, LPCWSTR pszObjectClass, INT cxImage, INT cyImage);
STDAPI DsGetFriendlyClassName(LPCWSTR pszObjectClass, LPWSTR pszBuffer, UINT cchBuffer);
#endif
#endif

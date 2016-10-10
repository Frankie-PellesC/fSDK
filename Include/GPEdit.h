/*+@@file@@----------------------------------------------------------------*//*!
 \file		GPEdit.h
 \par Description 
            Extension and update of headers for PellesC compiler suite.
 \par Project: 
            PellesC Headers extension
 \date		Created  on Mon Jul 11 18:29:23 2016
 \date		Modified on Mon Jul 11 18:29:23 2016
 \author	frankie
\*//*-@@file@@----------------------------------------------------------------*/

#ifndef _GPEDIT_H_
#define _GPEDIT_H_
#if !defined(_GPEDIT_)
#define GPEDITAPI DECLSPEC_IMPORT
#else
#define GPEDITAPI
#endif
#if __POCC__ >= 500
#pragma once
#endif
DEFINE_GUID(CLSID_GPESnapIn, 0x8fc0b734, 0xa0e1, 0x11d1, 0xa7, 0xd3, 0x0, 0x0, 0xf8, 0x75, 0x71, 0xe3);
DEFINE_GUID(NODEID_Machine, 0x8fc0b737, 0xa0e1, 0x11d1, 0xa7, 0xd3, 0x0, 0x0, 0xf8, 0x75, 0x71, 0xe3);
DEFINE_GUID(NODEID_MachineSWSettings, 0x8fc0b73a, 0xa0e1, 0x11d1, 0xa7, 0xd3, 0x0, 0x0, 0xf8, 0x75, 0x71, 0xe3);
DEFINE_GUID(NODEID_User, 0x8fc0b738, 0xa0e1, 0x11d1, 0xa7, 0xd3, 0x0, 0x0, 0xf8, 0x75, 0x71, 0xe3);
DEFINE_GUID(NODEID_UserSWSettings, 0x8fc0b73c, 0xa0e1, 0x11d1, 0xa7, 0xd3, 0x0, 0x0, 0xf8, 0x75, 0x71, 0xe3);
DEFINE_GUID(IID_IGPEInformation, 0x8fc0b735, 0xa0e1, 0x11d1, 0xa7, 0xd3, 0x0, 0x0, 0xf8, 0x75, 0x71, 0xe3);
DEFINE_GUID(CLSID_GroupPolicyObject, 0xea502722, 0xa23d, 0x11d1, 0xa7, 0xd3, 0x0, 0x0, 0xf8, 0x75, 0x71, 0xe3);
DEFINE_GUID(IID_IGroupPolicyObject, 0xea502723, 0xa23d, 0x11d1, 0xa7, 0xd3, 0x0, 0x0, 0xf8, 0x75, 0x71, 0xe3);
#define REGISTRY_EXTENSION_GUID  { 0x35378EAC, 0x683F, 0x11D2, 0xA8, 0x9A, 0x00, 0xC0, 0x4F, 0xBB, 0xCF, 0xA2 }
#define ADMXCOMMENTS_EXTENSION_GUID  { 0x6C5A2A86, 0x9EB3, 0x42b9, 0xAA, 0x83, 0xA7, 0x37, 0x1B, 0xA0, 0x11, 0xB9 }
DEFINE_GUID(CLSID_RSOPSnapIn, 0x6dc3804b, 0x7212, 0x458d, 0xad, 0xb0, 0x9a, 0x07, 0xe2, 0xae, 0x1f, 0xa2);
DEFINE_GUID(NODEID_RSOPMachine, 0xbd4c1a2e, 0x0b7a, 0x4a62, 0xa6, 0xb0, 0xc0, 0x57, 0x75, 0x39, 0xc9, 0x7e);
DEFINE_GUID(NODEID_RSOPMachineSWSettings, 0x6a76273e, 0xeb8e, 0x45db, 0x94, 0xc5, 0x25, 0x66, 0x3a, 0x5f, 0x2c, 0x1a);
DEFINE_GUID(NODEID_RSOPUser, 0xab87364f, 0x0cec, 0x4cd8, 0x9b, 0xf8, 0x89, 0x8f, 0x34, 0x62, 0x8f, 0xb8);
DEFINE_GUID(NODEID_RSOPUserSWSettings, 0xe52c5ce3, 0xfd27, 0x4402, 0x84, 0xde, 0xd9, 0xa5, 0xf2, 0x85, 0x89, 0x10);
DEFINE_GUID(IID_IRSOPInformation, 0x9a5a81b5, 0xd9c7, 0x49ef, 0x9d, 0x11, 0xdd, 0xf5, 0x09, 0x68, 0xc4, 0x8d);
#include <objbase.h>
#define GPO_SECTION_ROOT                 0
#define GPO_SECTION_USER                 1
#define GPO_SECTION_MACHINE              2
#ifndef GROUP_POLICY_OBJECT_TYPE_ENUM_DEFINED
#define GROUP_POLICY_OBJECT_TYPE_ENUM_DEFINED
typedef enum _GROUP_POLICY_OBJECT_TYPE
{
    GPOTypeLocal = 0,
    GPOTypeRemote,
    GPOTypeDS,
    GPOTypeLocalUser,
    GPOTypeLocalGroup
} GROUP_POLICY_OBJECT_TYPE, *PGROUP_POLICY_OBJECT_TYPE;
#endif
typedef enum _GROUP_POLICY_HINT_TYPE
{
    GPHintUnknown = 0,
    GPHintMachine,
    GPHintSite,
    GPHintDomain,
    GPHintOrganizationalUnit,
} GROUP_POLICY_HINT_TYPE, *PGROUP_POLICY_HINT_TYPE;
#undef INTERFACE
#define INTERFACE   IGPEInformation
DECLARE_INTERFACE_(IGPEInformation, IUnknown)
{
	STDMETHOD(QueryInterface) (THIS_ REFIID riid, LPVOID * ppvObj);
	STDMETHOD_(ULONG, AddRef) (THIS);
	STDMETHOD_(ULONG, Release) (THIS);
	STDMETHOD(GetName) (THIS_ LPOLESTR pszName, int cchMaxLength);
	STDMETHOD(GetDisplayName) (THIS_ LPOLESTR pszName, int cchMaxLength);
	STDMETHOD(GetRegistryKey) (THIS_ DWORD dwSection, HKEY * hKey);
	STDMETHOD(GetDSPath) (THIS_ DWORD dwSection, LPOLESTR pszPath, int cchMaxPath);
	STDMETHOD(GetFileSysPath) (THIS_ DWORD dwSection, LPOLESTR pszPath, int cchMaxPath);
	STDMETHOD(GetOptions) (THIS_ DWORD * dwOptions);
	STDMETHOD(GetType) (THIS_ GROUP_POLICY_OBJECT_TYPE * gpoType);
	STDMETHOD(GetHint) (THIS_ GROUP_POLICY_HINT_TYPE * gpHint);
	STDMETHOD(PolicyChanged) (THIS_ BOOL bMachine, BOOL bAdd, GUID * pGuidExtension, GUID * pGuidSnapin);
};
typedef IGPEInformation *LPGPEINFORMATION;
#define GPO_OPEN_LOAD_REGISTRY      0x00000001
#define GPO_OPEN_READ_ONLY          0x00000002
#define GPO_OPTION_DISABLE_USER     0x00000001
#define GPO_OPTION_DISABLE_MACHINE  0x00000002
#undef INTERFACE
#define INTERFACE   IGroupPolicyObject
DECLARE_INTERFACE_(IGroupPolicyObject, IUnknown)
{
	STDMETHOD(QueryInterface) (THIS_ REFIID riid, LPVOID * ppvObj);
	STDMETHOD_(ULONG, AddRef) (THIS);
	STDMETHOD_(ULONG, Release) (THIS);
	STDMETHOD(New) (THIS_ LPOLESTR pszDomainName, LPOLESTR pszDisplayName, DWORD dwFlags);
	STDMETHOD(OpenDSGPO) (THIS_ LPOLESTR pszPath, DWORD dwFlags);
	STDMETHOD(OpenLocalMachineGPO) (THIS_ DWORD dwFlags);
	STDMETHOD(OpenRemoteMachineGPO) (THIS_ LPOLESTR pszComputerName, DWORD dwFlags);
	STDMETHOD(Save) (THIS_ BOOL bMachine, BOOL bAdd, GUID * pGuidExtension, GUID * pGuid);
	STDMETHOD(Delete) (THIS);
	STDMETHOD(GetName) (THIS_ LPOLESTR pszName, int cchMaxLength);
	STDMETHOD(GetDisplayName) (THIS_ LPOLESTR pszName, int cchMaxLength);
	STDMETHOD(SetDisplayName) (THIS_ LPOLESTR pszName);
	STDMETHOD(GetPath) (THIS_ LPOLESTR pszPath, int cchMaxPath);
	STDMETHOD(GetDSPath) (THIS_ DWORD dwSection, LPOLESTR pszPath, int cchMaxPath);
	STDMETHOD(GetFileSysPath) (THIS_ DWORD dwSection, LPOLESTR pszPath, int cchMaxPath);
	STDMETHOD(GetRegistryKey) (THIS_ DWORD dwSection, HKEY * hKey);
	STDMETHOD(GetOptions) (THIS_ DWORD * dwOptions);
	STDMETHOD(SetOptions) (THIS_ DWORD dwOptions, DWORD dwMask);
	STDMETHOD(GetType) (THIS_ GROUP_POLICY_OBJECT_TYPE * gpoType);
	STDMETHOD(GetMachineName) (THIS_ LPOLESTR pszName, int cchMaxLength);
	STDMETHOD(GetPropertySheetPages) (THIS_ HPROPSHEETPAGE ** hPages, UINT * uPageCount);
};
typedef IGroupPolicyObject *LPGROUPPOLICYOBJECT;
#define RSOP_INFO_FLAG_DIAGNOSTIC_MODE  0x00000001
#undef INTERFACE
#define INTERFACE   IRSOPInformation
DECLARE_INTERFACE_(IRSOPInformation, IUnknown)
{
	STDMETHOD(QueryInterface) (THIS_ REFIID riid, LPVOID * ppvObj);
	STDMETHOD_(ULONG, AddRef) (THIS);
	STDMETHOD_(ULONG, Release) (THIS);
	STDMETHOD(GetNamespace) (THIS_ DWORD dwSection, LPOLESTR pszName, int cchMaxLength);
	STDMETHOD(GetFlags) (THIS_ DWORD * pdwFlags);
	STDMETHOD(GetEventLogEntryText) (THIS_ LPOLESTR pszEventSource, LPOLESTR pszEventLogName, LPOLESTR pszEventTime, DWORD dwEventID, LPOLESTR * ppszText);
};
typedef IRSOPInformation *LPRSOPINFORMATION;
GPEDITAPI HRESULT WINAPI CreateGPOLink(LPOLESTR lpGPO, LPOLESTR lpContainer, BOOL fHighPriority);
GPEDITAPI HRESULT WINAPI DeleteGPOLink(LPOLESTR lpGPO, LPOLESTR lpContainer);
GPEDITAPI HRESULT WINAPI DeleteAllGPOLinks(LPOLESTR lpContainer);
#define GPO_BROWSE_DISABLENEW           0x00000001
#define GPO_BROWSE_NOCOMPUTERS          0x00000002
#define GPO_BROWSE_NODSGPOS             0x00000004
#define GPO_BROWSE_OPENBUTTON           0x00000008
#define GPO_BROWSE_INITTOALL            0x00000010
#define GPO_BROWSE_NOUSERGPOS           0x00000020
#define GPO_BROWSE_SENDAPPLYONEDIT      0x00000040
typedef struct tag_GPOBROWSEINFO
{
    DWORD       dwSize;
    DWORD       dwFlags;
    HWND        hwndOwner;
    LPOLESTR    lpTitle;
    LPOLESTR    lpInitialOU;
    LPOLESTR    lpDSPath;
    DWORD       dwDSPathSize;
    LPOLESTR    lpName;
    DWORD       dwNameSize;
    GROUP_POLICY_OBJECT_TYPE    gpoType;
    GROUP_POLICY_HINT_TYPE      gpoHint;
} GPOBROWSEINFO, *LPGPOBROWSEINFO;
GPEDITAPI HRESULT WINAPI BrowseForGPO(LPGPOBROWSEINFO lpBrowseInfo);
GPEDITAPI HRESULT WINAPI ImportRSoPData(LPOLESTR lpNameSpace, LPOLESTR lpFileName);
GPEDITAPI HRESULT WINAPI ExportRSoPData(LPOLESTR lpNameSpace, LPOLESTR lpFileName);
#endif

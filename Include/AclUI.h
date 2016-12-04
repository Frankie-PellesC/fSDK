/*+@@file@@----------------------------------------------------------------*//*!
 \file		AclUI.h
 \par Description 
            Extension and update of headers for PellesC compiler suite.
 \par Project: 
            PellesC Headers extension
 \date		Created  on Fri Jul  1 11:59:28 2016
 \date		Modified on Fri Jul  1 11:59:28 2016
 \author	frankie
\*//*-@@file@@----------------------------------------------------------------*/

#ifndef _ACLUI_H_
#define _ACLUI_H_
#if __POCC__ >= 500
#pragma once
#endif
#include <objbase.h>
#include <commctrl.h>
#include <accctrl.h>
#if (_MSC_VER >= 800)
#if (_MSC_VER >= 1200)
#pragma warning(push)
#endif
#pragma warning(disable:4001)
#endif
#if !defined(_ACLUI_)
#define ACLUIAPI    DECLSPEC_IMPORT WINAPI
#else
#define ACLUIAPI    WINAPI
#endif

typedef struct _SI_OBJECT_INFO {
	DWORD dwFlags;
	HINSTANCE hInstance;
	LPWSTR pszServerName;
	LPWSTR pszObjectName;
	LPWSTR pszPageTitle;
	GUID guidObjectType;
} SI_OBJECT_INFO, *PSI_OBJECT_INFO;
#define SI_EDIT_PERMS               0x00000000L
#define SI_EDIT_OWNER               0x00000001L
#define SI_EDIT_AUDITS              0x00000002L
#define SI_CONTAINER                0x00000004L
#define SI_READONLY                 0x00000008L
#define SI_ADVANCED                 0x00000010L
#define SI_RESET                    0x00000020L
#define SI_OWNER_READONLY           0x00000040L
#define SI_EDIT_PROPERTIES          0x00000080L
#define SI_OWNER_RECURSE            0x00000100L
#define SI_NO_ACL_PROTECT           0x00000200L
#define SI_NO_TREE_APPLY            0x00000400L
#define SI_PAGE_TITLE               0x00000800L
#define SI_SERVER_IS_DC             0x00001000L
#define SI_RESET_DACL_TREE          0x00004000L
#define SI_RESET_SACL_TREE          0x00008000L
#define SI_OBJECT_GUID              0x00010000L
#define SI_EDIT_EFFECTIVE           0x00020000L
#define SI_RESET_DACL               0x00040000L
#define SI_RESET_SACL               0x00080000L
#define SI_RESET_OWNER              0x00100000L
#define SI_NO_ADDITIONAL_PERMISSION 0x00200000L
#if (NTDDI_VERSION >= NTDDI_VISTA)
#define SI_VIEW_ONLY                0x00400000L
#define SI_PERMS_ELEVATION_REQUIRED 0x01000000L
#define SI_AUDITS_ELEVATION_REQUIRED 0x02000000L
#define SI_OWNER_ELEVATION_REQUIRED 0x04000000L
#endif
#define SI_MAY_WRITE                0x10000000L
#define SI_EDIT_ALL     (SI_EDIT_PERMS | SI_EDIT_OWNER | SI_EDIT_AUDITS)
typedef struct _SI_ACCESS {
	const GUID *pguid;
	ACCESS_MASK mask;
	LPCWSTR pszName;
	DWORD dwFlags;
} SI_ACCESS, *PSI_ACCESS;
#define SI_ACCESS_SPECIFIC  0x00010000L
#define SI_ACCESS_GENERAL   0x00020000L
#define SI_ACCESS_CONTAINER 0x00040000L
#define SI_ACCESS_PROPERTY  0x00080000L
typedef struct _SI_INHERIT_TYPE
{
	const GUID *pguid;
	ULONG dwFlags;
	LPCWSTR pszName;
} SI_INHERIT_TYPE, *PSI_INHERIT_TYPE;
typedef enum _SI_PAGE_TYPE {
	SI_PAGE_PERM = 0,
	SI_PAGE_ADVPERM,
	SI_PAGE_AUDIT,
	SI_PAGE_OWNER,
	SI_PAGE_EFFECTIVE,
#if (NTDDI_VERSION >= NTDDI_VISTA)
	SI_PAGE_TAKEOWNERSHIP,
#endif
} SI_PAGE_TYPE;
#define PSPCB_SI_INITDIALOG    (WM_USER + 1)
#undef INTERFACE
#define INTERFACE   ISecurityInformation
DECLARE_INTERFACE_IID_(ISecurityInformation, IUnknown, "965FC360-16FF-11d0-91CB-00AA00BBB723")
{
	STDMETHOD(QueryInterface) (THIS_ REFIID riid, LPVOID * ppvObj);
	STDMETHOD_(ULONG, AddRef) (THIS);
	STDMETHOD_(ULONG, Release) (THIS);
	STDMETHOD(GetObjectInformation) (THIS_ PSI_OBJECT_INFO pObjectInfo);
	STDMETHOD(GetSecurity) (THIS_ SECURITY_INFORMATION RequestedInformation, PSECURITY_DESCRIPTOR * ppSecurityDescriptor, BOOL fDefault);
	STDMETHOD(SetSecurity) (THIS_ SECURITY_INFORMATION SecurityInformation, PSECURITY_DESCRIPTOR pSecurityDescriptor);
	STDMETHOD(GetAccessRights) (THIS_ const GUID * pguidObjectType, DWORD dwFlags, PSI_ACCESS * ppAccess, ULONG * pcAccesses, ULONG * piDefaultAccess);
	STDMETHOD(MapGeneric) (THIS_ const GUID * pguidObjectType, UCHAR * pAceFlags, ACCESS_MASK * pMask);
	STDMETHOD(GetInheritTypes) (THIS_ PSI_INHERIT_TYPE * ppInheritTypes, ULONG * pcInheritTypes);
	STDMETHOD(PropertySheetPageCallback) (THIS_ HWND hwnd, UINT uMsg, SI_PAGE_TYPE uPage);
};
typedef ISecurityInformation *LPSECURITYINFO;
#undef INTERFACE
#define INTERFACE   ISecurityInformation2
DECLARE_INTERFACE_IID_(ISecurityInformation2, IUnknown, "c3ccfdb4-6f88-11d2-a3ce-00c04fb1782a")
{
	STDMETHOD(QueryInterface) (THIS_ REFIID riid, LPVOID * ppvObj);
	STDMETHOD_(ULONG, AddRef) (THIS);
	STDMETHOD_(ULONG, Release) (THIS);
	STDMETHOD_(BOOL, IsDaclCanonical) (THIS_ PACL pDacl);
	STDMETHOD(LookupSids) (THIS_ ULONG cSids, PSID * rgpSids, LPDATAOBJECT * ppdo);
};
typedef ISecurityInformation2 *LPSECURITYINFO2;
#define CFSTR_ACLUI_SID_INFO_LIST   TEXT("CFSTR_ACLUI_SID_INFO_LIST")
typedef struct _SID_INFO {
	PSID pSid;
	PWSTR pwzCommonName;
	PWSTR pwzClass;
	PWSTR pwzUPN;
} SID_INFO, *PSID_INFO;
typedef struct _SID_INFO_LIST {
	ULONG cItems;
	SID_INFO aSidInfo[ANYSIZE_ARRAY];
} SID_INFO_LIST, *PSID_INFO_LIST;
#undef INTERFACE
#define INTERFACE   IEffectivePermission
DECLARE_INTERFACE_IID_(IEffectivePermission, IUnknown, "3853DC76-9F35-407c-88A1-D19344365FBC")
{
	STDMETHOD(QueryInterface) (THIS_ REFIID riid, LPVOID * ppvObj);
	STDMETHOD_(ULONG, AddRef) (THIS);
	STDMETHOD_(ULONG, Release) (THIS);
	STDMETHOD(GetEffectivePermission) (THIS_ const GUID * pguidObjectType, PSID pUserSid, LPCWSTR pszServerName, PSECURITY_DESCRIPTOR pSD, POBJECT_TYPE_LIST * ppObjectTypeList, ULONG * pcObjectTypeListLength, PACCESS_MASK * ppGrantedAccessList, ULONG * pcGrantedAccessListLength);
};
typedef IEffectivePermission *LPEFFECTIVEPERMISSION;
#undef INTERFACE
#define INTERFACE   ISecurityObjectTypeInfo
DECLARE_INTERFACE_IID_(ISecurityObjectTypeInfo, IUnknown, "FC3066EB-79EF-444b-9111-D18A75EBF2FA")
{
	STDMETHOD(QueryInterface) (THIS_ REFIID riid, LPVOID * ppvObj);
	STDMETHOD_(ULONG, AddRef) (THIS);
	STDMETHOD_(ULONG, Release) (THIS);
	STDMETHOD(GetInheritSource) (SECURITY_INFORMATION si, PACL pACL, PINHERITED_FROM * ppInheritArray);
};
typedef ISecurityObjectTypeInfo *LPSecurityObjectTypeInfo;
#if (NTDDI_VERSION >= NTDDI_VISTA)
#undef INTERFACE
#define INTERFACE   ISecurityInformation3
DECLARE_INTERFACE_IID_(ISecurityInformation3, IUnknown, "E2CDC9CC-31BD-4f8f-8C8B-B641AF516A1A")
{
	STDMETHOD(QueryInterface) (THIS_ REFIID riid, LPVOID * ppvObj);
	STDMETHOD_(ULONG, AddRef) (THIS);
	STDMETHOD_(ULONG, Release) (THIS);
	STDMETHOD(GetFullResourceName) (THIS_ LPWSTR * ppszResourceName);
	STDMETHOD(OpenElevatedEditor) (THIS_ HWND hWnd, SI_PAGE_TYPE uPage);
};
typedef ISecurityInformation3 *LPSECURITYINFO3;
#endif
EXTERN_GUID(IID_ISecurityInformation, 0x965fc360, 0x16ff, 0x11d0, 0x91, 0xcb, 0x0, 0xaa, 0x0, 0xbb, 0xb7, 0x23);
EXTERN_GUID(IID_ISecurityInformation2, 0xc3ccfdb4, 0x6f88, 0x11d2, 0xa3, 0xce, 0x0, 0xc0, 0x4f, 0xb1, 0x78, 0x2a);
EXTERN_GUID(IID_IEffectivePermission, 0x3853dc76, 0x9f35, 0x407c, 0x88, 0xa1, 0xd1, 0x93, 0x44, 0x36, 0x5f, 0xbc);
EXTERN_GUID(IID_ISecurityObjectTypeInfo, 0xfc3066eb, 0x79ef, 0x444b, 0x91, 0x11, 0xd1, 0x8a, 0x75, 0xeb, 0xf2, 0xfa);
#if (NTDDI_VERSION >= NTDDI_VISTA)
EXTERN_GUID(IID_ISecurityInformation3, 0xe2cdc9cc, 0x31bd, 0x4f8f, 0x8c, 0x8b, 0xb6, 0x41, 0xaf, 0x51, 0x6a, 0x1a);
#endif
HPROPSHEETPAGE ACLUIAPI CreateSecurityPage(LPSECURITYINFO psi);
BOOL ACLUIAPI EditSecurity(HWND hwndOwner, LPSECURITYINFO psi);
#if (NTDDI_VERSION >= NTDDI_VISTA)
HRESULT ACLUIAPI EditSecurityAdvanced(HWND hwndOwner, LPSECURITYINFO psi, SI_PAGE_TYPE uSIPage);
#endif

#if (_MSC_VER >= 800)
#if (_MSC_VER >= 1200)
#pragma warning(pop)
#else
#pragma warning(default:4001)
#endif
#endif
#endif

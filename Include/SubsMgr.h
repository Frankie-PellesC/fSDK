/*+@@file@@----------------------------------------------------------------*//*!
 \file		SubsMgr.h
 \par Description 
            Extension and update of headers for PellesC compiler suite.
 \par Project: 
            PellesC Headers extension
 \date		Created  on Sat Sep 17 01:55:55 2016
 \date		Modified on Sat Sep 17 01:55:55 2016
 \author	frankie
\*//*-@@file@@----------------------------------------------------------------*/

#ifndef __REQUIRED_RPCNDR_H_VERSION__
#define __REQUIRED_RPCNDR_H_VERSION__ 475
#endif
#ifndef __REQUIRED_RPCSAL_H_VERSION__
#define __REQUIRED_RPCSAL_H_VERSION__ 100
#endif
#include "rpc.h"
#include "rpcndr.h"
#ifndef __RPCNDR_H_VERSION__
#error this stub requires an updated version of <rpcndr.h>
#endif
#ifndef COM_NO_WINDOWS_H
#include "windows.h"
#include "ole2.h"
#endif
#ifndef __subsmgr_h__
#define __subsmgr_h__
#if __POCC__ >= 500
#pragma once
#endif
#ifndef __IEnumItemProperties_FWD_DEFINED__
#define __IEnumItemProperties_FWD_DEFINED__
typedef interface IEnumItemProperties IEnumItemProperties;
#endif
#ifndef __ISubscriptionItem_FWD_DEFINED__
#define __ISubscriptionItem_FWD_DEFINED__
typedef interface ISubscriptionItem ISubscriptionItem;
#endif
#ifndef __IEnumSubscription_FWD_DEFINED__
#define __IEnumSubscription_FWD_DEFINED__
typedef interface IEnumSubscription IEnumSubscription;
#endif
#ifndef __ISubscriptionMgr_FWD_DEFINED__
#define __ISubscriptionMgr_FWD_DEFINED__
typedef interface ISubscriptionMgr ISubscriptionMgr;
#endif
#ifndef __ISubscriptionMgr2_FWD_DEFINED__
#define __ISubscriptionMgr2_FWD_DEFINED__
typedef interface ISubscriptionMgr2 ISubscriptionMgr2;
#endif
#ifndef __SubscriptionMgr_FWD_DEFINED__
#define __SubscriptionMgr_FWD_DEFINED__
typedef struct SubscriptionMgr SubscriptionMgr;
#endif
#include "unknwn.h"
#include "ocidl.h"
#pragma comment(lib,"uuid.lib")
typedef GUID SUBSCRIPTIONCOOKIE;
extern RPC_IF_HANDLE __MIDL_itf_subsmgr_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_subsmgr_0000_0000_v0_0_s_ifspec;
#ifndef __IEnumItemProperties_INTERFACE_DEFINED__
#define __IEnumItemProperties_INTERFACE_DEFINED__
typedef IEnumItemProperties *LPENUMITEMPROPERTIES;
typedef struct _tagITEMPROP
{
	VARIANT variantValue;
	LPWSTR pwszName;
} ITEMPROP;
typedef struct _tagITEMPROP *LPITEMPROP;
extern const IID IID_IEnumItemProperties;
typedef struct IEnumItemPropertiesVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IEnumItemProperties * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IEnumItemProperties * This);
	ULONG(STDMETHODCALLTYPE * Release) (IEnumItemProperties * This);
	HRESULT(STDMETHODCALLTYPE * Next) (IEnumItemProperties * This, ULONG celt, ITEMPROP * rgelt, ULONG * pceltFetched);
	HRESULT(STDMETHODCALLTYPE * Skip) (IEnumItemProperties * This, ULONG celt);
	HRESULT(STDMETHODCALLTYPE * Reset) (IEnumItemProperties * This);
	HRESULT(STDMETHODCALLTYPE * Clone) (IEnumItemProperties * This, IEnumItemProperties ** ppenum);
	HRESULT(STDMETHODCALLTYPE * GetCount) (IEnumItemProperties * This, ULONG * pnCount);
	END_INTERFACE
}  IEnumItemPropertiesVtbl;
interface IEnumItemProperties
{
	CONST_VTBL struct IEnumItemPropertiesVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IEnumItemProperties_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IEnumItemProperties_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IEnumItemProperties_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IEnumItemProperties_Next(This,celt,rgelt,pceltFetched) ( (This)->lpVtbl -> Next(This,celt,rgelt,pceltFetched) )
#define IEnumItemProperties_Skip(This,celt) ( (This)->lpVtbl -> Skip(This,celt) )
#define IEnumItemProperties_Reset(This) ( (This)->lpVtbl -> Reset(This) )
#define IEnumItemProperties_Clone(This,ppenum) ( (This)->lpVtbl -> Clone(This,ppenum) )
#define IEnumItemProperties_GetCount(This,pnCount) ( (This)->lpVtbl -> GetCount(This,pnCount) )
#endif
#endif
#define SI_TEMPORARY         0x80000000
extern RPC_IF_HANDLE __MIDL_itf_subsmgr_0000_0001_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_subsmgr_0000_0001_v0_0_s_ifspec;
#ifndef __ISubscriptionItem_INTERFACE_DEFINED__
#define __ISubscriptionItem_INTERFACE_DEFINED__
typedef ISubscriptionItem *LPSUBSCRIPTIONITEM;
typedef struct tagSUBSCRIPTIONITEMINFO
{
	ULONG cbSize;
	DWORD dwFlags;
	DWORD dwPriority;
	SUBSCRIPTIONCOOKIE ScheduleGroup;
	CLSID clsidAgent;
} SUBSCRIPTIONITEMINFO;
extern const IID IID_ISubscriptionItem;
typedef struct ISubscriptionItemVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (ISubscriptionItem * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (ISubscriptionItem * This);
	ULONG(STDMETHODCALLTYPE * Release) (ISubscriptionItem * This);
	HRESULT(STDMETHODCALLTYPE * GetCookie) (ISubscriptionItem * This, SUBSCRIPTIONCOOKIE * pCookie);
	HRESULT(STDMETHODCALLTYPE * GetSubscriptionItemInfo) (ISubscriptionItem * This, SUBSCRIPTIONITEMINFO * pSubscriptionItemInfo);
	HRESULT(STDMETHODCALLTYPE * SetSubscriptionItemInfo) (ISubscriptionItem * This, const SUBSCRIPTIONITEMINFO * pSubscriptionItemInfo);
	HRESULT(STDMETHODCALLTYPE * ReadProperties) (ISubscriptionItem * This, ULONG nCount, const LPCWSTR rgwszName[], VARIANT rgValue[]);
	HRESULT(STDMETHODCALLTYPE * WriteProperties) (ISubscriptionItem * This, ULONG nCount, const LPCWSTR rgwszName[], const VARIANT rgValue[]);
	HRESULT(STDMETHODCALLTYPE * EnumProperties) (ISubscriptionItem * This, IEnumItemProperties ** ppEnumItemProperties);
	HRESULT(STDMETHODCALLTYPE * NotifyChanged) (ISubscriptionItem * This);
	END_INTERFACE
}  ISubscriptionItemVtbl;
interface ISubscriptionItem
{
	CONST_VTBL struct ISubscriptionItemVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define ISubscriptionItem_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define ISubscriptionItem_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define ISubscriptionItem_Release(This) ( (This)->lpVtbl -> Release(This) )
#define ISubscriptionItem_GetCookie(This,pCookie) ( (This)->lpVtbl -> GetCookie(This,pCookie) )
#define ISubscriptionItem_GetSubscriptionItemInfo(This,pSubscriptionItemInfo) ( (This)->lpVtbl -> GetSubscriptionItemInfo(This,pSubscriptionItemInfo) )
#define ISubscriptionItem_SetSubscriptionItemInfo(This,pSubscriptionItemInfo) ( (This)->lpVtbl -> SetSubscriptionItemInfo(This,pSubscriptionItemInfo) )
#define ISubscriptionItem_ReadProperties(This,nCount,rgwszName,rgValue) ( (This)->lpVtbl -> ReadProperties(This,nCount,rgwszName,rgValue) )
#define ISubscriptionItem_WriteProperties(This,nCount,rgwszName,rgValue) ( (This)->lpVtbl -> WriteProperties(This,nCount,rgwszName,rgValue) )
#define ISubscriptionItem_EnumProperties(This,ppEnumItemProperties) ( (This)->lpVtbl -> EnumProperties(This,ppEnumItemProperties) )
#define ISubscriptionItem_NotifyChanged(This) ( (This)->lpVtbl -> NotifyChanged(This) )
#endif
#endif
#ifndef __IEnumSubscription_INTERFACE_DEFINED__
#define __IEnumSubscription_INTERFACE_DEFINED__
typedef IEnumSubscription *LPENUMSUBSCRIPTION;
extern const IID IID_IEnumSubscription;
typedef struct IEnumSubscriptionVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IEnumSubscription * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IEnumSubscription * This);
	ULONG(STDMETHODCALLTYPE * Release) (IEnumSubscription * This);
	HRESULT(STDMETHODCALLTYPE * Next) (IEnumSubscription * This, ULONG celt, SUBSCRIPTIONCOOKIE * rgelt, ULONG * pceltFetched);
	HRESULT(STDMETHODCALLTYPE * Skip) (IEnumSubscription * This, ULONG celt);
	HRESULT(STDMETHODCALLTYPE * Reset) (IEnumSubscription * This);
	HRESULT(STDMETHODCALLTYPE * Clone) (IEnumSubscription * This, IEnumSubscription ** ppenum);
	HRESULT(STDMETHODCALLTYPE * GetCount) (IEnumSubscription * This, ULONG * pnCount);
	END_INTERFACE
}  IEnumSubscriptionVtbl;
interface IEnumSubscription
{
	CONST_VTBL struct IEnumSubscriptionVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IEnumSubscription_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IEnumSubscription_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IEnumSubscription_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IEnumSubscription_Next(This,celt,rgelt,pceltFetched) ( (This)->lpVtbl -> Next(This,celt,rgelt,pceltFetched) )
#define IEnumSubscription_Skip(This,celt) ( (This)->lpVtbl -> Skip(This,celt) )
#define IEnumSubscription_Reset(This) ( (This)->lpVtbl -> Reset(This) )
#define IEnumSubscription_Clone(This,ppenum) ( (This)->lpVtbl -> Clone(This,ppenum) )
#define IEnumSubscription_GetCount(This,pnCount) ( (This)->lpVtbl -> GetCount(This,pnCount) )
#endif
#endif
#ifndef __SubscriptionMgr_LIBRARY_DEFINED__
#define __SubscriptionMgr_LIBRARY_DEFINED__
extern const IID LIBID_SubscriptionMgr;
#ifndef __ISubscriptionMgr_INTERFACE_DEFINED__
#define __ISubscriptionMgr_INTERFACE_DEFINED__
typedef enum SUBSCRIPTIONTYPE
{
	SUBSTYPE_URL = 0,
	SUBSTYPE_CHANNEL = 1,
	SUBSTYPE_DESKTOPURL = 2,
	SUBSTYPE_EXTERNAL = 3,
	SUBSTYPE_DESKTOPCHANNEL = 4
} SUBSCRIPTIONTYPE;
typedef enum SUBSCRIPTIONINFOFLAGS
{
	SUBSINFO_SCHEDULE = 0x1,
	SUBSINFO_RECURSE = 0x2,
	SUBSINFO_WEBCRAWL = 0x4,
	SUBSINFO_MAILNOT = 0x8,
	SUBSINFO_MAXSIZEKB = 0x10,
	SUBSINFO_USER = 0x20,
	SUBSINFO_PASSWORD = 0x40,
	SUBSINFO_TASKFLAGS = 0x100,
	SUBSINFO_GLEAM = 0x200,
	SUBSINFO_CHANGESONLY = 0x400,
	SUBSINFO_CHANNELFLAGS = 0x800,
	SUBSINFO_FRIENDLYNAME = 0x2000,
	SUBSINFO_NEEDPASSWORD = 0x4000,
	SUBSINFO_TYPE = 0x8000
} SUBSCRIPTIONINFOFLAGS;
#define SUBSINFO_ALLFLAGS      0x0000EF7F
typedef enum CREATESUBSCRIPTIONFLAGS
{
	CREATESUBS_ADDTOFAVORITES = 0x1,
	CREATESUBS_FROMFAVORITES = 0x2,
	CREATESUBS_NOUI = 0x4,
	CREATESUBS_NOSAVE = 0x8,
	CREATESUBS_SOFTWAREUPDATE = 0x10
} CREATESUBSCRIPTIONFLAGS;
typedef enum SUBSCRIPTIONSCHEDULE
{
	SUBSSCHED_AUTO = 0,
	SUBSSCHED_DAILY = 1,
	SUBSSCHED_WEEKLY = 2,
	SUBSSCHED_CUSTOM = 3,
	SUBSSCHED_MANUAL = 4
} SUBSCRIPTIONSCHEDULE;
typedef struct _tagSubscriptionInfo
{
	DWORD cbSize;
	DWORD fUpdateFlags;
	SUBSCRIPTIONSCHEDULE schedule;
	CLSID customGroupCookie;
	LPVOID pTrigger;
	DWORD dwRecurseLevels;
	DWORD fWebcrawlerFlags;
	BOOL bMailNotification;
	BOOL bGleam;
	BOOL bChangesOnly;
	BOOL bNeedPassword;
	DWORD fChannelFlags;
	BSTR bstrUserName;
	BSTR bstrPassword;
	BSTR bstrFriendlyName;
	DWORD dwMaxSizeKB;
	SUBSCRIPTIONTYPE subType;
	DWORD fTaskFlags;
	DWORD dwReserved;
} SUBSCRIPTIONINFO;
typedef struct _tagSubscriptionInfo *LPSUBSCRIPTIONINFO;
typedef struct _tagSubscriptionInfo *PSUBSCRIPTIONINFO;
extern const IID IID_ISubscriptionMgr;
typedef struct ISubscriptionMgrVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (ISubscriptionMgr * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (ISubscriptionMgr * This);
	ULONG(STDMETHODCALLTYPE * Release) (ISubscriptionMgr * This);
	HRESULT(STDMETHODCALLTYPE * DeleteSubscription) (ISubscriptionMgr * This, LPCWSTR pwszURL, HWND hwnd);
	HRESULT(STDMETHODCALLTYPE * UpdateSubscription) (ISubscriptionMgr * This, LPCWSTR pwszURL);
	HRESULT(STDMETHODCALLTYPE * UpdateAll) (ISubscriptionMgr * This);
	HRESULT(STDMETHODCALLTYPE * IsSubscribed) (ISubscriptionMgr * This, LPCWSTR pwszURL, BOOL * pfSubscribed);
	HRESULT(STDMETHODCALLTYPE * GetSubscriptionInfo) (ISubscriptionMgr * This, LPCWSTR pwszURL, SUBSCRIPTIONINFO * pInfo);
	HRESULT(STDMETHODCALLTYPE * GetDefaultInfo) (ISubscriptionMgr * This, SUBSCRIPTIONTYPE subType, SUBSCRIPTIONINFO * pInfo);
	HRESULT(STDMETHODCALLTYPE * ShowSubscriptionProperties) (ISubscriptionMgr * This, LPCWSTR pwszURL, HWND hwnd);
	HRESULT(STDMETHODCALLTYPE * CreateSubscription) (ISubscriptionMgr * This, HWND hwnd, LPCWSTR pwszURL, LPCWSTR pwszFriendlyName, DWORD dwFlags, SUBSCRIPTIONTYPE subsType, SUBSCRIPTIONINFO * pInfo);
	END_INTERFACE
}  ISubscriptionMgrVtbl;
interface ISubscriptionMgr
{
	CONST_VTBL struct ISubscriptionMgrVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define ISubscriptionMgr_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define ISubscriptionMgr_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define ISubscriptionMgr_Release(This) ( (This)->lpVtbl -> Release(This) )
#define ISubscriptionMgr_DeleteSubscription(This,pwszURL,hwnd) ( (This)->lpVtbl -> DeleteSubscription(This,pwszURL,hwnd) )
#define ISubscriptionMgr_UpdateSubscription(This,pwszURL) ( (This)->lpVtbl -> UpdateSubscription(This,pwszURL) )
#define ISubscriptionMgr_UpdateAll(This) ( (This)->lpVtbl -> UpdateAll(This) )
#define ISubscriptionMgr_IsSubscribed(This,pwszURL,pfSubscribed) ( (This)->lpVtbl -> IsSubscribed(This,pwszURL,pfSubscribed) )
#define ISubscriptionMgr_GetSubscriptionInfo(This,pwszURL,pInfo) ( (This)->lpVtbl -> GetSubscriptionInfo(This,pwszURL,pInfo) )
#define ISubscriptionMgr_GetDefaultInfo(This,subType,pInfo) ( (This)->lpVtbl -> GetDefaultInfo(This,subType,pInfo) )
#define ISubscriptionMgr_ShowSubscriptionProperties(This,pwszURL,hwnd) ( (This)->lpVtbl -> ShowSubscriptionProperties(This,pwszURL,hwnd) )
#define ISubscriptionMgr_CreateSubscription(This,hwnd,pwszURL,pwszFriendlyName,dwFlags,subsType,pInfo) ( (This)->lpVtbl -> CreateSubscription(This,hwnd,pwszURL,pwszFriendlyName,dwFlags,subsType,pInfo) )
#endif
#endif
#ifndef __ISubscriptionMgr2_INTERFACE_DEFINED__
#define __ISubscriptionMgr2_INTERFACE_DEFINED__
#define RS_READY            0x00000001
#define RS_SUSPENDED        0x00000002
#define RS_UPDATING         0x00000004
#define RS_SUSPENDONIDLE    0x00010000
#define RS_MAYBOTHERUSER    0x00020000
#define RS_COMPLETED        0x80000000
#define SUBSMGRUPDATE_MINIMIZE   0x00000001
#define SUBSMGRUPDATE_MASK       0x00000001
#define SUBSMGRENUM_TEMP         0x00000001
#define SUBSMGRENUM_MASK         0x00000001
extern const IID IID_ISubscriptionMgr2;
typedef struct ISubscriptionMgr2Vtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (ISubscriptionMgr2 * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (ISubscriptionMgr2 * This);
	ULONG(STDMETHODCALLTYPE * Release) (ISubscriptionMgr2 * This);
	HRESULT(STDMETHODCALLTYPE * DeleteSubscription) (ISubscriptionMgr2 * This, LPCWSTR pwszURL, HWND hwnd);
	HRESULT(STDMETHODCALLTYPE * UpdateSubscription) (ISubscriptionMgr2 * This, LPCWSTR pwszURL);
	HRESULT(STDMETHODCALLTYPE * UpdateAll) (ISubscriptionMgr2 * This);
	HRESULT(STDMETHODCALLTYPE * IsSubscribed) (ISubscriptionMgr2 * This, LPCWSTR pwszURL, BOOL * pfSubscribed);
	HRESULT(STDMETHODCALLTYPE * GetSubscriptionInfo) (ISubscriptionMgr2 * This, LPCWSTR pwszURL, SUBSCRIPTIONINFO * pInfo);
	HRESULT(STDMETHODCALLTYPE * GetDefaultInfo) (ISubscriptionMgr2 * This, SUBSCRIPTIONTYPE subType, SUBSCRIPTIONINFO * pInfo);
	HRESULT(STDMETHODCALLTYPE * ShowSubscriptionProperties) (ISubscriptionMgr2 * This, LPCWSTR pwszURL, HWND hwnd);
	HRESULT(STDMETHODCALLTYPE * CreateSubscription) (ISubscriptionMgr2 * This, HWND hwnd, LPCWSTR pwszURL, LPCWSTR pwszFriendlyName, DWORD dwFlags, SUBSCRIPTIONTYPE subsType, SUBSCRIPTIONINFO * pInfo);
	HRESULT(STDMETHODCALLTYPE * GetItemFromURL) (ISubscriptionMgr2 * This, LPCWSTR pwszURL, ISubscriptionItem ** ppSubscriptionItem);
	HRESULT(STDMETHODCALLTYPE * GetItemFromCookie) (ISubscriptionMgr2 * This, const SUBSCRIPTIONCOOKIE * pSubscriptionCookie, ISubscriptionItem ** ppSubscriptionItem);
	HRESULT(STDMETHODCALLTYPE * GetSubscriptionRunState) (ISubscriptionMgr2 * This, DWORD dwNumCookies, const SUBSCRIPTIONCOOKIE * pCookies, DWORD * pdwRunState);
	HRESULT(STDMETHODCALLTYPE * EnumSubscriptions) (ISubscriptionMgr2 * This, DWORD dwFlags, IEnumSubscription ** ppEnumSubscriptions);
	HRESULT(STDMETHODCALLTYPE * UpdateItems) (ISubscriptionMgr2 * This, DWORD dwFlags, DWORD dwNumCookies, const SUBSCRIPTIONCOOKIE * pCookies);
	HRESULT(STDMETHODCALLTYPE * AbortItems) (ISubscriptionMgr2 * This, DWORD dwNumCookies, const SUBSCRIPTIONCOOKIE * pCookies);
	HRESULT(STDMETHODCALLTYPE * AbortAll) (ISubscriptionMgr2 * This);
	END_INTERFACE
}  ISubscriptionMgr2Vtbl;
interface ISubscriptionMgr2
{
	CONST_VTBL struct ISubscriptionMgr2Vtbl *lpVtbl;
};
#ifdef COBJMACROS
#define ISubscriptionMgr2_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define ISubscriptionMgr2_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define ISubscriptionMgr2_Release(This) ( (This)->lpVtbl -> Release(This) )
#define ISubscriptionMgr2_DeleteSubscription(This,pwszURL,hwnd) ( (This)->lpVtbl -> DeleteSubscription(This,pwszURL,hwnd) )
#define ISubscriptionMgr2_UpdateSubscription(This,pwszURL) ( (This)->lpVtbl -> UpdateSubscription(This,pwszURL) )
#define ISubscriptionMgr2_UpdateAll(This) ( (This)->lpVtbl -> UpdateAll(This) )
#define ISubscriptionMgr2_IsSubscribed(This,pwszURL,pfSubscribed) ( (This)->lpVtbl -> IsSubscribed(This,pwszURL,pfSubscribed) )
#define ISubscriptionMgr2_GetSubscriptionInfo(This,pwszURL,pInfo) ( (This)->lpVtbl -> GetSubscriptionInfo(This,pwszURL,pInfo) )
#define ISubscriptionMgr2_GetDefaultInfo(This,subType,pInfo) ( (This)->lpVtbl -> GetDefaultInfo(This,subType,pInfo) )
#define ISubscriptionMgr2_ShowSubscriptionProperties(This,pwszURL,hwnd) ( (This)->lpVtbl -> ShowSubscriptionProperties(This,pwszURL,hwnd) )
#define ISubscriptionMgr2_CreateSubscription(This,hwnd,pwszURL,pwszFriendlyName,dwFlags,subsType,pInfo) ( (This)->lpVtbl -> CreateSubscription(This,hwnd,pwszURL,pwszFriendlyName,dwFlags,subsType,pInfo) )
#define ISubscriptionMgr2_GetItemFromURL(This,pwszURL,ppSubscriptionItem) ( (This)->lpVtbl -> GetItemFromURL(This,pwszURL,ppSubscriptionItem) )
#define ISubscriptionMgr2_GetItemFromCookie(This,pSubscriptionCookie,ppSubscriptionItem) ( (This)->lpVtbl -> GetItemFromCookie(This,pSubscriptionCookie,ppSubscriptionItem) )
#define ISubscriptionMgr2_GetSubscriptionRunState(This,dwNumCookies,pCookies,pdwRunState) ( (This)->lpVtbl -> GetSubscriptionRunState(This,dwNumCookies,pCookies,pdwRunState) )
#define ISubscriptionMgr2_EnumSubscriptions(This,dwFlags,ppEnumSubscriptions) ( (This)->lpVtbl -> EnumSubscriptions(This,dwFlags,ppEnumSubscriptions) )
#define ISubscriptionMgr2_UpdateItems(This,dwFlags,dwNumCookies,pCookies) ( (This)->lpVtbl -> UpdateItems(This,dwFlags,dwNumCookies,pCookies) )
#define ISubscriptionMgr2_AbortItems(This,dwNumCookies,pCookies) ( (This)->lpVtbl -> AbortItems(This,dwNumCookies,pCookies) )
#define ISubscriptionMgr2_AbortAll(This) ( (This)->lpVtbl -> AbortAll(This) )
#endif
#endif
extern const CLSID CLSID_SubscriptionMgr;
#endif
extern const CLSID CLSID_WebCrawlerAgent;
extern const CLSID CLSID_DialAgent;
extern const CLSID CLSID_CDLAgent;
typedef enum DELIVERY_AGENT_FLAGS
{
	DELIVERY_AGENT_FLAG_NO_BROADCAST = 0x4,
	DELIVERY_AGENT_FLAG_NO_RESTRICTIONS = 0x8,
	DELIVERY_AGENT_FLAG_SILENT_DIAL = 0x10
} DELIVERY_AGENT_FLAGS;
typedef enum WEBCRAWL_RECURSEFLAGS
{
	WEBCRAWL_DONT_MAKE_STICKY = 0x1,
	WEBCRAWL_GET_IMAGES = 0x2,
	WEBCRAWL_GET_VIDEOS = 0x4,
	WEBCRAWL_GET_BGSOUNDS = 0x8,
	WEBCRAWL_GET_CONTROLS = 0x10,
	WEBCRAWL_LINKS_ELSEWHERE = 0x20,
	WEBCRAWL_IGNORE_ROBOTSTXT = 0x80,
	WEBCRAWL_ONLY_LINKS_TO_HTML = 0x100
} WEBCRAWL_RECURSEFLAGS;
typedef enum CHANNEL_AGENT_FLAGS
{
	CHANNEL_AGENT_DYNAMIC_SCHEDULE = 0x1,
	CHANNEL_AGENT_PRECACHE_SOME = 0x2,
	CHANNEL_AGENT_PRECACHE_ALL = 0x4,
	CHANNEL_AGENT_PRECACHE_SCRNSAVER = 0x8
} CHANNEL_AGENT_FLAGS;
#define INET_E_AGENT_MAX_SIZE_EXCEEDED       _HRESULT_TYPEDEF_(0x800C0F80L)
#define INET_S_AGENT_PART_FAIL               _HRESULT_TYPEDEF_(0x000C0F81L)
#define INET_E_AGENT_CACHE_SIZE_EXCEEDED     _HRESULT_TYPEDEF_(0x800C0F82L)
#define INET_E_AGENT_CONNECTION_FAILED       _HRESULT_TYPEDEF_(0x800C0F83L)
#define INET_E_SCHEDULED_UPDATES_DISABLED    _HRESULT_TYPEDEF_(0x800C0F84L)
#define INET_E_SCHEDULED_UPDATES_RESTRICTED  _HRESULT_TYPEDEF_(0x800C0F85L)
#define INET_E_SCHEDULED_UPDATE_INTERVAL     _HRESULT_TYPEDEF_(0x800C0F86L)
#define INET_E_SCHEDULED_EXCLUDE_RANGE       _HRESULT_TYPEDEF_(0x800C0F87L)
#define INET_E_AGENT_EXCEEDING_CACHE_SIZE    _HRESULT_TYPEDEF_(0x800C0F90L)
#define INET_S_AGENT_INCREASED_CACHE_SIZE    _HRESULT_TYPEDEF_(0x000C0F90L)
extern RPC_IF_HANDLE __MIDL_itf_subsmgr_0001_0049_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_subsmgr_0001_0049_v0_0_s_ifspec;
unsigned long __RPC_USER VARIANT_UserSize(unsigned long *, unsigned long, VARIANT *);
unsigned char *__RPC_USER VARIANT_UserMarshal(unsigned long *, unsigned char *, VARIANT *);
unsigned char *__RPC_USER VARIANT_UserUnmarshal(unsigned long *, unsigned char *, VARIANT *);
void __RPC_USER VARIANT_UserFree(unsigned long *, VARIANT *);
unsigned long __RPC_USER VARIANT_UserSize64(unsigned long *, unsigned long, VARIANT *);
unsigned char *__RPC_USER VARIANT_UserMarshal64(unsigned long *, unsigned char *, VARIANT *);
unsigned char *__RPC_USER VARIANT_UserUnmarshal64(unsigned long *, unsigned char *, VARIANT *);
void __RPC_USER VARIANT_UserFree64(unsigned long *, VARIANT *);
#endif

/*+@@file@@----------------------------------------------------------------*//*!
 \file		ctfutb.h
 \par Description 
            Extension and update of headers for PellesC compiler suite.
 \par Project: 
            PellesC Headers extension
 \date		Created  on Mon Jul  4 18:42:11 2016
 \date		Modified on Mon Jul  4 18:42:11 2016
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
#ifndef __ctfutb_h__
#define __ctfutb_h__
#if __POCC__ >= 500
#pragma once
#endif
#ifndef __ITfLangBarMgr_FWD_DEFINED__
#define __ITfLangBarMgr_FWD_DEFINED__
typedef interface ITfLangBarMgr ITfLangBarMgr;
#endif
#ifndef __ITfLangBarEventSink_FWD_DEFINED__
#define __ITfLangBarEventSink_FWD_DEFINED__
typedef interface ITfLangBarEventSink ITfLangBarEventSink;
#endif
#ifndef __ITfLangBarItemSink_FWD_DEFINED__
#define __ITfLangBarItemSink_FWD_DEFINED__
typedef interface ITfLangBarItemSink ITfLangBarItemSink;
#endif
#ifndef __IEnumTfLangBarItems_FWD_DEFINED__
#define __IEnumTfLangBarItems_FWD_DEFINED__
typedef interface IEnumTfLangBarItems IEnumTfLangBarItems;
#endif
#ifndef __ITfLangBarItemMgr_FWD_DEFINED__
#define __ITfLangBarItemMgr_FWD_DEFINED__
typedef interface ITfLangBarItemMgr ITfLangBarItemMgr;
#endif
#ifndef __ITfLangBarItem_FWD_DEFINED__
#define __ITfLangBarItem_FWD_DEFINED__
typedef interface ITfLangBarItem ITfLangBarItem;
#endif
#ifndef __ITfSystemLangBarItemSink_FWD_DEFINED__
#define __ITfSystemLangBarItemSink_FWD_DEFINED__
typedef interface ITfSystemLangBarItemSink ITfSystemLangBarItemSink;
#endif
#ifndef __ITfSystemLangBarItem_FWD_DEFINED__
#define __ITfSystemLangBarItem_FWD_DEFINED__
typedef interface ITfSystemLangBarItem ITfSystemLangBarItem;
#endif
#ifndef __ITfSystemLangBarItemText_FWD_DEFINED__
#define __ITfSystemLangBarItemText_FWD_DEFINED__
typedef interface ITfSystemLangBarItemText ITfSystemLangBarItemText;
#endif
#ifndef __ITfSystemDeviceTypeLangBarItem_FWD_DEFINED__
#define __ITfSystemDeviceTypeLangBarItem_FWD_DEFINED__
typedef interface ITfSystemDeviceTypeLangBarItem ITfSystemDeviceTypeLangBarItem;
#endif
#ifndef __ITfLangBarItemButton_FWD_DEFINED__
#define __ITfLangBarItemButton_FWD_DEFINED__
typedef interface ITfLangBarItemButton ITfLangBarItemButton;
#endif
#ifndef __ITfLangBarItemBitmapButton_FWD_DEFINED__
#define __ITfLangBarItemBitmapButton_FWD_DEFINED__
typedef interface ITfLangBarItemBitmapButton ITfLangBarItemBitmapButton;
#endif
#ifndef __ITfLangBarItemBitmap_FWD_DEFINED__
#define __ITfLangBarItemBitmap_FWD_DEFINED__
typedef interface ITfLangBarItemBitmap ITfLangBarItemBitmap;
#endif
#ifndef __ITfLangBarItemBalloon_FWD_DEFINED__
#define __ITfLangBarItemBalloon_FWD_DEFINED__
typedef interface ITfLangBarItemBalloon ITfLangBarItemBalloon;
#endif
#ifndef __ITfMenu_FWD_DEFINED__
#define __ITfMenu_FWD_DEFINED__
typedef interface ITfMenu ITfMenu;
#endif
#include <oaidl.h>
#include <msctf.h>
#ifndef CTFUTB_DEFINED
#define CTFUTB_DEFINED
#include <windows.h>
#define TF_FLOATINGLANGBAR_WNDTITLEW L"TF_FloatingLangBar_WndTitle"
#define TF_FLOATINGLANGBAR_WNDTITLEA "TF_FloatingLangBar_WndTitle"
#ifdef UNICODE
#define TF_FLOATINGLANGBAR_WNDTITLE TF_FLOATINGLANGBAR_WNDTITLEW
#else
#define TF_FLOATINGLANGBAR_WNDTITLE TF_FLOATINGLANGBAR_WNDTITLEA
#endif
#define TF_LBI_ICON                0x00000001
#define TF_LBI_TEXT                0x00000002
#define TF_LBI_TOOLTIP             0x00000004
#define TF_LBI_BITMAP              0x00000008
#define TF_LBI_BALLOON             0x00000010
#define TF_LBI_CUSTOMUI            0x00000020
#define TF_LBI_BTNALL              (TF_LBI_ICON | TF_LBI_TEXT | TF_LBI_TOOLTIP)
#define TF_LBI_BMPBTNALL           (TF_LBI_BITMAP | TF_LBI_TEXT | TF_LBI_TOOLTIP)
#define TF_LBI_BMPALL              (TF_LBI_BITMAP | TF_LBI_TOOLTIP)
#define TF_LBI_STATUS              0x00010000
#define TF_LBI_STYLE_HIDDENSTATUSCONTROL  0x00000001
#define TF_LBI_STYLE_SHOWNINTRAY        0x00000002
#define TF_LBI_STYLE_HIDEONNOOTHERITEMS 0x00000004
#define TF_LBI_STYLE_SHOWNINTRAYONLY    0x00000008
#define TF_LBI_STYLE_HIDDENBYDEFAULT    0x00000010
#define TF_LBI_STYLE_TEXTCOLORICON      0x00000020
#define TF_LBI_STYLE_BTN_BUTTON         0x00010000
#define TF_LBI_STYLE_BTN_MENU           0x00020000
#define TF_LBI_STYLE_BTN_TOGGLE         0x00040000
#define TF_LBI_STATUS_HIDDEN           0x00000001
#define TF_LBI_STATUS_DISABLED         0x00000002
#define TF_LBI_STATUS_BTN_TOGGLED      0x00010000
#define TF_LBI_BMPF_VERTICAL           0x00000001
#define TF_SFT_SHOWNORMAL               0x00000001
#define TF_SFT_DOCK                     0x00000002
#define TF_SFT_MINIMIZED                0x00000004
#define TF_SFT_HIDDEN                   0x00000008
#define TF_SFT_NOTRANSPARENCY           0x00000010
#define TF_SFT_LOWTRANSPARENCY          0x00000020
#define TF_SFT_HIGHTRANSPARENCY         0x00000040
#define TF_SFT_LABELS                   0x00000080
#define TF_SFT_NOLABELS                 0x00000100
#define TF_SFT_EXTRAICONSONMINIMIZED    0x00000200
#define TF_SFT_NOEXTRAICONSONMINIMIZED  0x00000400
#define TF_SFT_DESKBAND                 0x00000800
#define TF_INVALIDMENUITEM            (UINT)(-1)
#define TF_DTLBI_USEPROFILEICON         0x00000001
extern RPC_IF_HANDLE __MIDL_itf_ctfutb_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_ctfutb_0000_0000_v0_0_s_ifspec;
#ifndef __ITfLangBarMgr_INTERFACE_DEFINED__
#define __ITfLangBarMgr_INTERFACE_DEFINED__
extern const IID IID_ITfLangBarMgr;
typedef struct ITfLangBarMgrVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (ITfLangBarMgr * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (ITfLangBarMgr * This);
	ULONG(STDMETHODCALLTYPE * Release) (ITfLangBarMgr * This);
	HRESULT(STDMETHODCALLTYPE * AdviseEventSink) (ITfLangBarMgr * This, ITfLangBarEventSink * pSink, HWND hwnd, DWORD dwFlags, DWORD * pdwCookie);
	HRESULT(STDMETHODCALLTYPE * UnadviseEventSink) (ITfLangBarMgr * This, DWORD dwCookie);
	HRESULT(STDMETHODCALLTYPE * GetThreadMarshalInterface) (ITfLangBarMgr * This, DWORD dwThreadId, DWORD dwType, REFIID riid, IUnknown ** ppunk);
	HRESULT(STDMETHODCALLTYPE * GetThreadLangBarItemMgr) (ITfLangBarMgr * This, DWORD dwThreadId, ITfLangBarItemMgr ** pplbi, DWORD * pdwThreadid);
	HRESULT(STDMETHODCALLTYPE * GetInputProcessorProfiles) (ITfLangBarMgr * This, DWORD dwThreadId, ITfInputProcessorProfiles ** ppaip, DWORD * pdwThreadid);
	HRESULT(STDMETHODCALLTYPE * RestoreLastFocus) (ITfLangBarMgr * This, DWORD * pdwThreadId, BOOL fPrev);
	HRESULT(STDMETHODCALLTYPE * SetModalInput) (ITfLangBarMgr * This, ITfLangBarEventSink * pSink, DWORD dwThreadId, DWORD dwFlags);
	HRESULT(STDMETHODCALLTYPE * ShowFloating) (ITfLangBarMgr * This, DWORD dwFlags);
	HRESULT(STDMETHODCALLTYPE * GetShowFloatingStatus) (ITfLangBarMgr * This, DWORD * pdwFlags);
	END_INTERFACE
}  ITfLangBarMgrVtbl;
interface ITfLangBarMgr
{
	CONST_VTBL struct ITfLangBarMgrVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define ITfLangBarMgr_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define ITfLangBarMgr_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define ITfLangBarMgr_Release(This)( (This)->lpVtbl -> Release(This) )
#define ITfLangBarMgr_AdviseEventSink(This,pSink,hwnd,dwFlags,pdwCookie)( (This)->lpVtbl -> AdviseEventSink(This,pSink,hwnd,dwFlags,pdwCookie) )
#define ITfLangBarMgr_UnadviseEventSink(This,dwCookie)( (This)->lpVtbl -> UnadviseEventSink(This,dwCookie) )
#define ITfLangBarMgr_GetThreadMarshalInterface(This,dwThreadId,dwType,riid,ppunk)( (This)->lpVtbl -> GetThreadMarshalInterface(This,dwThreadId,dwType,riid,ppunk) )
#define ITfLangBarMgr_GetThreadLangBarItemMgr(This,dwThreadId,pplbi,pdwThreadid)( (This)->lpVtbl -> GetThreadLangBarItemMgr(This,dwThreadId,pplbi,pdwThreadid) )
#define ITfLangBarMgr_GetInputProcessorProfiles(This,dwThreadId,ppaip,pdwThreadid)( (This)->lpVtbl -> GetInputProcessorProfiles(This,dwThreadId,ppaip,pdwThreadid) )
#define ITfLangBarMgr_RestoreLastFocus(This,pdwThreadId,fPrev)( (This)->lpVtbl -> RestoreLastFocus(This,pdwThreadId,fPrev) )
#define ITfLangBarMgr_SetModalInput(This,pSink,dwThreadId,dwFlags)( (This)->lpVtbl -> SetModalInput(This,pSink,dwThreadId,dwFlags) )
#define ITfLangBarMgr_ShowFloating(This,dwFlags)( (This)->lpVtbl -> ShowFloating(This,dwFlags) )
#define ITfLangBarMgr_GetShowFloatingStatus(This,pdwFlags)( (This)->lpVtbl -> GetShowFloatingStatus(This,pdwFlags) )
#endif
#endif
#ifndef __ITfLangBarEventSink_INTERFACE_DEFINED__
#define __ITfLangBarEventSink_INTERFACE_DEFINED__
extern const IID IID_ITfLangBarEventSink;
typedef struct ITfLangBarEventSinkVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (ITfLangBarEventSink * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (ITfLangBarEventSink * This);
	ULONG(STDMETHODCALLTYPE * Release) (ITfLangBarEventSink * This);
	HRESULT(STDMETHODCALLTYPE * OnSetFocus) (ITfLangBarEventSink * This, DWORD dwThreadId);
	HRESULT(STDMETHODCALLTYPE * OnThreadTerminate) (ITfLangBarEventSink * This, DWORD dwThreadId);
	HRESULT(STDMETHODCALLTYPE * OnThreadItemChange) (ITfLangBarEventSink * This, DWORD dwThreadId);
	HRESULT(STDMETHODCALLTYPE * OnModalInput) (ITfLangBarEventSink * This, DWORD dwThreadId, UINT uMsg, WPARAM wParam, LPARAM lParam);
	HRESULT(STDMETHODCALLTYPE * ShowFloating) (ITfLangBarEventSink * This, DWORD dwFlags);
	HRESULT(STDMETHODCALLTYPE * GetItemFloatingRect) (ITfLangBarEventSink * This, DWORD dwThreadId, REFGUID rguid, RECT * prc);
	END_INTERFACE
}  ITfLangBarEventSinkVtbl;
interface ITfLangBarEventSink
{
	CONST_VTBL struct ITfLangBarEventSinkVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define ITfLangBarEventSink_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define ITfLangBarEventSink_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define ITfLangBarEventSink_Release(This)( (This)->lpVtbl -> Release(This) )
#define ITfLangBarEventSink_OnSetFocus(This,dwThreadId)( (This)->lpVtbl -> OnSetFocus(This,dwThreadId) )
#define ITfLangBarEventSink_OnThreadTerminate(This,dwThreadId)( (This)->lpVtbl -> OnThreadTerminate(This,dwThreadId) )
#define ITfLangBarEventSink_OnThreadItemChange(This,dwThreadId)( (This)->lpVtbl -> OnThreadItemChange(This,dwThreadId) )
#define ITfLangBarEventSink_OnModalInput(This,dwThreadId,uMsg,wParam,lParam)( (This)->lpVtbl -> OnModalInput(This,dwThreadId,uMsg,wParam,lParam) )
#define ITfLangBarEventSink_ShowFloating(This,dwFlags)( (This)->lpVtbl -> ShowFloating(This,dwFlags) )
#define ITfLangBarEventSink_GetItemFloatingRect(This,dwThreadId,rguid,prc)( (This)->lpVtbl -> GetItemFloatingRect(This,dwThreadId,rguid,prc) )
#endif
#endif
#ifndef __ITfLangBarItemSink_INTERFACE_DEFINED__
#define __ITfLangBarItemSink_INTERFACE_DEFINED__
extern const IID IID_ITfLangBarItemSink;
typedef struct ITfLangBarItemSinkVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (ITfLangBarItemSink * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (ITfLangBarItemSink * This);
	ULONG(STDMETHODCALLTYPE * Release) (ITfLangBarItemSink * This);
	HRESULT(STDMETHODCALLTYPE * OnUpdate) (ITfLangBarItemSink * This, DWORD dwFlags);
	END_INTERFACE
}  ITfLangBarItemSinkVtbl;
interface ITfLangBarItemSink
{
	CONST_VTBL struct ITfLangBarItemSinkVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define ITfLangBarItemSink_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define ITfLangBarItemSink_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define ITfLangBarItemSink_Release(This)( (This)->lpVtbl -> Release(This) )
#define ITfLangBarItemSink_OnUpdate(This,dwFlags)( (This)->lpVtbl -> OnUpdate(This,dwFlags) )
#endif
#endif
#ifndef __IEnumTfLangBarItems_INTERFACE_DEFINED__
#define __IEnumTfLangBarItems_INTERFACE_DEFINED__
extern const IID IID_IEnumTfLangBarItems;
typedef struct IEnumTfLangBarItemsVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IEnumTfLangBarItems * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IEnumTfLangBarItems * This);
	ULONG(STDMETHODCALLTYPE * Release) (IEnumTfLangBarItems * This);
	HRESULT(STDMETHODCALLTYPE * Clone) (IEnumTfLangBarItems * This, IEnumTfLangBarItems ** ppEnum);
	HRESULT(STDMETHODCALLTYPE * Next) (IEnumTfLangBarItems * This, ULONG ulCount, ITfLangBarItem ** ppItem, ULONG * pcFetched);
	HRESULT(STDMETHODCALLTYPE * Reset) (IEnumTfLangBarItems * This);
	HRESULT(STDMETHODCALLTYPE * Skip) (IEnumTfLangBarItems * This, ULONG ulCount);
	END_INTERFACE
}  IEnumTfLangBarItemsVtbl;
interface IEnumTfLangBarItems
{
	CONST_VTBL struct IEnumTfLangBarItemsVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IEnumTfLangBarItems_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IEnumTfLangBarItems_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define IEnumTfLangBarItems_Release(This)( (This)->lpVtbl -> Release(This) )
#define IEnumTfLangBarItems_Clone(This,ppEnum)( (This)->lpVtbl -> Clone(This,ppEnum) )
#define IEnumTfLangBarItems_Next(This,ulCount,ppItem,pcFetched)( (This)->lpVtbl -> Next(This,ulCount,ppItem,pcFetched) )
#define IEnumTfLangBarItems_Reset(This)( (This)->lpVtbl -> Reset(This) )
#define IEnumTfLangBarItems_Skip(This,ulCount)( (This)->lpVtbl -> Skip(This,ulCount) )
#endif
#endif
#define	TF_LBI_DESC_MAXLEN	( 32 )
typedef DECLSPEC_UUID("12a1d29f-a065-440c-9746-eb2002c8bd19")
struct TF_LANGBARITEMINFO
{
	CLSID clsidService;
	GUID guidItem;
	DWORD dwStyle;
	ULONG ulSort;
	WCHAR szDescription[32];
} TF_LANGBARITEMINFO;
extern RPC_IF_HANDLE __MIDL_itf_ctfutb_0000_0004_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_ctfutb_0000_0004_v0_0_s_ifspec;
#ifndef __ITfLangBarItemMgr_INTERFACE_DEFINED__
#define __ITfLangBarItemMgr_INTERFACE_DEFINED__
extern const IID IID_ITfLangBarItemMgr;
typedef struct ITfLangBarItemMgrVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE *QueryInterface) (ITfLangBarItemMgr *This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE *AddRef) (ITfLangBarItemMgr *This);
	ULONG(STDMETHODCALLTYPE *Release) (ITfLangBarItemMgr *This);
	HRESULT(STDMETHODCALLTYPE *EnumItems) (ITfLangBarItemMgr *This, IEnumTfLangBarItems **ppEnum);
	HRESULT(STDMETHODCALLTYPE *GetItem) (ITfLangBarItemMgr *This, REFGUID rguid, ITfLangBarItem **ppItem);
	HRESULT(STDMETHODCALLTYPE *AddItem) (ITfLangBarItemMgr *This, ITfLangBarItem *punk);
	HRESULT(STDMETHODCALLTYPE *RemoveItem) (ITfLangBarItemMgr *This, ITfLangBarItem *punk);
	HRESULT(STDMETHODCALLTYPE *AdviseItemSink) (ITfLangBarItemMgr *This, ITfLangBarItemSink *punk, DWORD *pdwCookie, REFGUID rguidItem);
	HRESULT(STDMETHODCALLTYPE *UnadviseItemSink) (ITfLangBarItemMgr *This, DWORD dwCookie);
	HRESULT(STDMETHODCALLTYPE *GetItemFloatingRect) (ITfLangBarItemMgr *This, DWORD dwThreadId, REFGUID rguid, RECT *prc);
	HRESULT(STDMETHODCALLTYPE *GetItemsStatus) (ITfLangBarItemMgr *This, ULONG ulCount, const GUID *prgguid, DWORD *pdwStatus);
	HRESULT(STDMETHODCALLTYPE *GetItemNum) (ITfLangBarItemMgr *This, ULONG *pulCount);
	HRESULT(STDMETHODCALLTYPE *GetItems) (ITfLangBarItemMgr *This, ULONG ulCount, ITfLangBarItem **ppItem, TF_LANGBARITEMINFO *pInfo, DWORD *pdwStatus, ULONG *pcFetched);
	HRESULT(STDMETHODCALLTYPE *AdviseItemsSink) (ITfLangBarItemMgr *This, ULONG ulCount, ITfLangBarItemSink **ppunk, const GUID *pguidItem, DWORD *pdwCookie);
	HRESULT(STDMETHODCALLTYPE *UnadviseItemsSink) (ITfLangBarItemMgr *This, ULONG ulCount, DWORD *pdwCookie);
	END_INTERFACE
}  ITfLangBarItemMgrVtbl;
interface ITfLangBarItemMgr
{
	CONST_VTBL struct ITfLangBarItemMgrVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define ITfLangBarItemMgr_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define ITfLangBarItemMgr_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define ITfLangBarItemMgr_Release(This)( (This)->lpVtbl -> Release(This) )
#define ITfLangBarItemMgr_EnumItems(This,ppEnum)( (This)->lpVtbl -> EnumItems(This,ppEnum) )
#define ITfLangBarItemMgr_GetItem(This,rguid,ppItem)( (This)->lpVtbl -> GetItem(This,rguid,ppItem) )
#define ITfLangBarItemMgr_AddItem(This,punk)( (This)->lpVtbl -> AddItem(This,punk) )
#define ITfLangBarItemMgr_RemoveItem(This,punk)( (This)->lpVtbl -> RemoveItem(This,punk) )
#define ITfLangBarItemMgr_AdviseItemSink(This,punk,pdwCookie,rguidItem)( (This)->lpVtbl -> AdviseItemSink(This,punk,pdwCookie,rguidItem) )
#define ITfLangBarItemMgr_UnadviseItemSink(This,dwCookie)( (This)->lpVtbl -> UnadviseItemSink(This,dwCookie) )
#define ITfLangBarItemMgr_GetItemFloatingRect(This,dwThreadId,rguid,prc)( (This)->lpVtbl -> GetItemFloatingRect(This,dwThreadId,rguid,prc) )
#define ITfLangBarItemMgr_GetItemsStatus(This,ulCount,prgguid,pdwStatus)( (This)->lpVtbl -> GetItemsStatus(This,ulCount,prgguid,pdwStatus) )
#define ITfLangBarItemMgr_GetItemNum(This,pulCount)( (This)->lpVtbl -> GetItemNum(This,pulCount) )
#define ITfLangBarItemMgr_GetItems(This,ulCount,ppItem,pInfo,pdwStatus,pcFetched)( (This)->lpVtbl -> GetItems(This,ulCount,ppItem,pInfo,pdwStatus,pcFetched) )
#define ITfLangBarItemMgr_AdviseItemsSink(This,ulCount,ppunk,pguidItem,pdwCookie)( (This)->lpVtbl -> AdviseItemsSink(This,ulCount,ppunk,pguidItem,pdwCookie) )
#define ITfLangBarItemMgr_UnadviseItemsSink(This,ulCount,pdwCookie)( (This)->lpVtbl -> UnadviseItemsSink(This,ulCount,pdwCookie) )
#endif
#endif
#ifndef __ITfLangBarItem_INTERFACE_DEFINED__
#define __ITfLangBarItem_INTERFACE_DEFINED__
extern const IID IID_ITfLangBarItem;
typedef struct ITfLangBarItemVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE *QueryInterface) (ITfLangBarItem *This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE *AddRef) (ITfLangBarItem *This);
	ULONG(STDMETHODCALLTYPE *Release) (ITfLangBarItem *This);
	HRESULT(STDMETHODCALLTYPE *GetInfo) (ITfLangBarItem *This, TF_LANGBARITEMINFO *pInfo);
	HRESULT(STDMETHODCALLTYPE *GetStatus) (ITfLangBarItem *This, DWORD *pdwStatus);
	HRESULT(STDMETHODCALLTYPE *Show) (ITfLangBarItem *This, BOOL fShow);
	HRESULT(STDMETHODCALLTYPE *GetTooltipString) (ITfLangBarItem *This, BSTR *pbstrToolTip);
	END_INTERFACE
}  ITfLangBarItemVtbl;
interface ITfLangBarItem
{
	CONST_VTBL struct ITfLangBarItemVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define ITfLangBarItem_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define ITfLangBarItem_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define ITfLangBarItem_Release(This)( (This)->lpVtbl -> Release(This) )
#define ITfLangBarItem_GetInfo(This,pInfo)( (This)->lpVtbl -> GetInfo(This,pInfo) )
#define ITfLangBarItem_GetStatus(This,pdwStatus)( (This)->lpVtbl -> GetStatus(This,pdwStatus) )
#define ITfLangBarItem_Show(This,fShow)( (This)->lpVtbl -> Show(This,fShow) )
#define ITfLangBarItem_GetTooltipString(This,pbstrToolTip)( (This)->lpVtbl -> GetTooltipString(This,pbstrToolTip) )
#endif
#endif
#ifndef __ITfSystemLangBarItemSink_INTERFACE_DEFINED__
#define __ITfSystemLangBarItemSink_INTERFACE_DEFINED__
extern const IID IID_ITfSystemLangBarItemSink;
typedef struct ITfSystemLangBarItemSinkVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE *QueryInterface) (ITfSystemLangBarItemSink *This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE *AddRef) (ITfSystemLangBarItemSink *This);
	ULONG(STDMETHODCALLTYPE *Release) (ITfSystemLangBarItemSink *This);
	HRESULT(STDMETHODCALLTYPE *InitMenu) (ITfSystemLangBarItemSink *This, ITfMenu *pMenu);
	HRESULT(STDMETHODCALLTYPE *OnMenuSelect) (ITfSystemLangBarItemSink *This, UINT wID);
	END_INTERFACE
}  ITfSystemLangBarItemSinkVtbl;
interface ITfSystemLangBarItemSink
{
	CONST_VTBL struct ITfSystemLangBarItemSinkVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define ITfSystemLangBarItemSink_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define ITfSystemLangBarItemSink_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define ITfSystemLangBarItemSink_Release(This)( (This)->lpVtbl -> Release(This) )
#define ITfSystemLangBarItemSink_InitMenu(This,pMenu)( (This)->lpVtbl -> InitMenu(This,pMenu) )
#define ITfSystemLangBarItemSink_OnMenuSelect(This,wID)( (This)->lpVtbl -> OnMenuSelect(This,wID) )
#endif
#endif
#ifndef __ITfSystemLangBarItem_INTERFACE_DEFINED__
#define __ITfSystemLangBarItem_INTERFACE_DEFINED__
extern const IID IID_ITfSystemLangBarItem;
typedef struct ITfSystemLangBarItemVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE *QueryInterface) (ITfSystemLangBarItem *This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE *AddRef) (ITfSystemLangBarItem *This);
	ULONG(STDMETHODCALLTYPE *Release) (ITfSystemLangBarItem *This);
	HRESULT(STDMETHODCALLTYPE *SetIcon) (ITfSystemLangBarItem *This, HICON hIcon);
	HRESULT(STDMETHODCALLTYPE *SetTooltipString) (ITfSystemLangBarItem *This, WCHAR *pchToolTip, ULONG cch);
	END_INTERFACE
}  ITfSystemLangBarItemVtbl;
interface ITfSystemLangBarItem
{
	CONST_VTBL struct ITfSystemLangBarItemVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define ITfSystemLangBarItem_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define ITfSystemLangBarItem_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define ITfSystemLangBarItem_Release(This)( (This)->lpVtbl -> Release(This) )
#define ITfSystemLangBarItem_SetIcon(This,hIcon)( (This)->lpVtbl -> SetIcon(This,hIcon) )
#define ITfSystemLangBarItem_SetTooltipString(This,pchToolTip,cch)( (This)->lpVtbl -> SetTooltipString(This,pchToolTip,cch) )
#endif
#endif
#ifndef __ITfSystemLangBarItemText_INTERFACE_DEFINED__
#define __ITfSystemLangBarItemText_INTERFACE_DEFINED__
extern const IID IID_ITfSystemLangBarItemText;
typedef struct ITfSystemLangBarItemTextVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE *QueryInterface) (ITfSystemLangBarItemText *This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE *AddRef) (ITfSystemLangBarItemText *This);
	ULONG(STDMETHODCALLTYPE *Release) (ITfSystemLangBarItemText *This);
	HRESULT(STDMETHODCALLTYPE *SetItemText) (ITfSystemLangBarItemText *This, const WCHAR *pch, ULONG cch);
	HRESULT(STDMETHODCALLTYPE *GetItemText) (ITfSystemLangBarItemText *This, BSTR *pbstrText);
	END_INTERFACE
}  ITfSystemLangBarItemTextVtbl;
interface ITfSystemLangBarItemText
{
	CONST_VTBL struct ITfSystemLangBarItemTextVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define ITfSystemLangBarItemText_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define ITfSystemLangBarItemText_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define ITfSystemLangBarItemText_Release(This)( (This)->lpVtbl -> Release(This) )
#define ITfSystemLangBarItemText_SetItemText(This,pch,cch)( (This)->lpVtbl -> SetItemText(This,pch,cch) )
#define ITfSystemLangBarItemText_GetItemText(This,pbstrText)( (This)->lpVtbl -> GetItemText(This,pbstrText) )
#endif
#endif
#ifndef __ITfSystemDeviceTypeLangBarItem_INTERFACE_DEFINED__
#define __ITfSystemDeviceTypeLangBarItem_INTERFACE_DEFINED__
extern const IID IID_ITfSystemDeviceTypeLangBarItem;
typedef struct ITfSystemDeviceTypeLangBarItemVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE *QueryInterface) (ITfSystemDeviceTypeLangBarItem *This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE *AddRef) (ITfSystemDeviceTypeLangBarItem *This);
	ULONG(STDMETHODCALLTYPE *Release) (ITfSystemDeviceTypeLangBarItem *This);
	HRESULT(STDMETHODCALLTYPE *SetIconMode) (ITfSystemDeviceTypeLangBarItem *This, DWORD dwFlags);
	HRESULT(STDMETHODCALLTYPE *GetIconMode) (ITfSystemDeviceTypeLangBarItem *This, DWORD *pdwFlags);
	END_INTERFACE
}  ITfSystemDeviceTypeLangBarItemVtbl;
interface ITfSystemDeviceTypeLangBarItem
{
	CONST_VTBL struct ITfSystemDeviceTypeLangBarItemVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define ITfSystemDeviceTypeLangBarItem_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define ITfSystemDeviceTypeLangBarItem_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define ITfSystemDeviceTypeLangBarItem_Release(This)( (This)->lpVtbl -> Release(This) )
#define ITfSystemDeviceTypeLangBarItem_SetIconMode(This,dwFlags)( (This)->lpVtbl -> SetIconMode(This,dwFlags) )
#define ITfSystemDeviceTypeLangBarItem_GetIconMode(This,pdwFlags)( (This)->lpVtbl -> GetIconMode(This,pdwFlags) )
#endif
#endif
typedef DECLSPEC_UUID("8fb5f0ce-dfdd-4f0a-85b9-8988d8dd8ff2")
enum __MIDL___MIDL_itf_ctfutb_0000_0010_0001
{
	TF_LBI_CLK_RIGHT = 1,
	TF_LBI_CLK_LEFT = 2
} TfLBIClick;
extern RPC_IF_HANDLE __MIDL_itf_ctfutb_0000_0010_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_ctfutb_0000_0010_v0_0_s_ifspec;
#ifndef __ITfLangBarItemButton_INTERFACE_DEFINED__
#define __ITfLangBarItemButton_INTERFACE_DEFINED__
extern const IID IID_ITfLangBarItemButton;
typedef struct ITfLangBarItemButtonVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE *QueryInterface) (ITfLangBarItemButton *This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE *AddRef) (ITfLangBarItemButton *This);
	ULONG(STDMETHODCALLTYPE *Release) (ITfLangBarItemButton *This);
	HRESULT(STDMETHODCALLTYPE *GetInfo) (ITfLangBarItemButton *This, TF_LANGBARITEMINFO *pInfo);
	HRESULT(STDMETHODCALLTYPE *GetStatus) (ITfLangBarItemButton *This, DWORD *pdwStatus);
	HRESULT(STDMETHODCALLTYPE *Show) (ITfLangBarItemButton *This, BOOL fShow);
	HRESULT(STDMETHODCALLTYPE *GetTooltipString) (ITfLangBarItemButton *This, BSTR *pbstrToolTip);
	HRESULT(STDMETHODCALLTYPE *OnClick) (ITfLangBarItemButton *This, TfLBIClick click, POINT pt, const RECT *prcArea);
	HRESULT(STDMETHODCALLTYPE *InitMenu) (ITfLangBarItemButton *This, ITfMenu *pMenu);
	HRESULT(STDMETHODCALLTYPE *OnMenuSelect) (ITfLangBarItemButton *This, UINT wID);
	HRESULT(STDMETHODCALLTYPE *GetIcon) (ITfLangBarItemButton *This, HICON *phIcon);
	HRESULT(STDMETHODCALLTYPE *GetText) (ITfLangBarItemButton *This, BSTR *pbstrText);
	END_INTERFACE
}  ITfLangBarItemButtonVtbl;
interface ITfLangBarItemButton
{
	CONST_VTBL struct ITfLangBarItemButtonVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define ITfLangBarItemButton_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define ITfLangBarItemButton_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define ITfLangBarItemButton_Release(This)( (This)->lpVtbl -> Release(This) )
#define ITfLangBarItemButton_GetInfo(This,pInfo)( (This)->lpVtbl -> GetInfo(This,pInfo) )
#define ITfLangBarItemButton_GetStatus(This,pdwStatus)( (This)->lpVtbl -> GetStatus(This,pdwStatus) )
#define ITfLangBarItemButton_Show(This,fShow)( (This)->lpVtbl -> Show(This,fShow) )
#define ITfLangBarItemButton_GetTooltipString(This,pbstrToolTip)( (This)->lpVtbl -> GetTooltipString(This,pbstrToolTip) )
#define ITfLangBarItemButton_OnClick(This,click,pt,prcArea)( (This)->lpVtbl -> OnClick(This,click,pt,prcArea) )
#define ITfLangBarItemButton_InitMenu(This,pMenu)( (This)->lpVtbl -> InitMenu(This,pMenu) )
#define ITfLangBarItemButton_OnMenuSelect(This,wID)( (This)->lpVtbl -> OnMenuSelect(This,wID) )
#define ITfLangBarItemButton_GetIcon(This,phIcon)( (This)->lpVtbl -> GetIcon(This,phIcon) )
#define ITfLangBarItemButton_GetText(This,pbstrText)( (This)->lpVtbl -> GetText(This,pbstrText) )
#endif
#endif
#ifndef __ITfLangBarItemBitmapButton_INTERFACE_DEFINED__
#define __ITfLangBarItemBitmapButton_INTERFACE_DEFINED__
extern const IID IID_ITfLangBarItemBitmapButton;
typedef struct ITfLangBarItemBitmapButtonVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE *QueryInterface) (ITfLangBarItemBitmapButton *This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE *AddRef) (ITfLangBarItemBitmapButton *This);
	ULONG(STDMETHODCALLTYPE *Release) (ITfLangBarItemBitmapButton *This);
	HRESULT(STDMETHODCALLTYPE *GetInfo) (ITfLangBarItemBitmapButton *This, TF_LANGBARITEMINFO *pInfo);
	HRESULT(STDMETHODCALLTYPE *GetStatus) (ITfLangBarItemBitmapButton *This, DWORD *pdwStatus);
	HRESULT(STDMETHODCALLTYPE *Show) (ITfLangBarItemBitmapButton *This, BOOL fShow);
	HRESULT(STDMETHODCALLTYPE *GetTooltipString) (ITfLangBarItemBitmapButton *This, BSTR *pbstrToolTip);
	HRESULT(STDMETHODCALLTYPE *OnClick) (ITfLangBarItemBitmapButton *This, TfLBIClick click, POINT pt, const RECT *prcArea);
	HRESULT(STDMETHODCALLTYPE *InitMenu) (ITfLangBarItemBitmapButton *This, ITfMenu *pMenu);
	HRESULT(STDMETHODCALLTYPE *OnMenuSelect) (ITfLangBarItemBitmapButton *This, UINT wID);
	HRESULT(STDMETHODCALLTYPE *GetPreferredSize) (ITfLangBarItemBitmapButton *This, const SIZE *pszDefault, SIZE *psz);
	HRESULT(STDMETHODCALLTYPE *DrawBitmap) (ITfLangBarItemBitmapButton *This, LONG bmWidth, LONG bmHeight, DWORD dwFlags, HBITMAP *phbmp, HBITMAP *phbmpMask);
	HRESULT(STDMETHODCALLTYPE *GetText) (ITfLangBarItemBitmapButton *This, BSTR *pbstrText);
	END_INTERFACE
}  ITfLangBarItemBitmapButtonVtbl;
interface ITfLangBarItemBitmapButton
{
	CONST_VTBL struct ITfLangBarItemBitmapButtonVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define ITfLangBarItemBitmapButton_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define ITfLangBarItemBitmapButton_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define ITfLangBarItemBitmapButton_Release(This)( (This)->lpVtbl -> Release(This) )
#define ITfLangBarItemBitmapButton_GetInfo(This,pInfo)( (This)->lpVtbl -> GetInfo(This,pInfo) )
#define ITfLangBarItemBitmapButton_GetStatus(This,pdwStatus)( (This)->lpVtbl -> GetStatus(This,pdwStatus) )
#define ITfLangBarItemBitmapButton_Show(This,fShow)( (This)->lpVtbl -> Show(This,fShow) )
#define ITfLangBarItemBitmapButton_GetTooltipString(This,pbstrToolTip)( (This)->lpVtbl -> GetTooltipString(This,pbstrToolTip) )
#define ITfLangBarItemBitmapButton_OnClick(This,click,pt,prcArea)( (This)->lpVtbl -> OnClick(This,click,pt,prcArea) )
#define ITfLangBarItemBitmapButton_InitMenu(This,pMenu)( (This)->lpVtbl -> InitMenu(This,pMenu) )
#define ITfLangBarItemBitmapButton_OnMenuSelect(This,wID)( (This)->lpVtbl -> OnMenuSelect(This,wID) )
#define ITfLangBarItemBitmapButton_GetPreferredSize(This,pszDefault,psz)( (This)->lpVtbl -> GetPreferredSize(This,pszDefault,psz) )
#define ITfLangBarItemBitmapButton_DrawBitmap(This,bmWidth,bmHeight,dwFlags,phbmp,phbmpMask)( (This)->lpVtbl -> DrawBitmap(This,bmWidth,bmHeight,dwFlags,phbmp,phbmpMask) )
#define ITfLangBarItemBitmapButton_GetText(This,pbstrText)( (This)->lpVtbl -> GetText(This,pbstrText) )
#endif
#endif
#ifndef __ITfLangBarItemBitmap_INTERFACE_DEFINED__
#define __ITfLangBarItemBitmap_INTERFACE_DEFINED__
extern const IID IID_ITfLangBarItemBitmap;
typedef struct ITfLangBarItemBitmapVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE *QueryInterface) (ITfLangBarItemBitmap *This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE *AddRef) (ITfLangBarItemBitmap *This);
	ULONG(STDMETHODCALLTYPE *Release) (ITfLangBarItemBitmap *This);
	HRESULT(STDMETHODCALLTYPE *GetInfo) (ITfLangBarItemBitmap *This, TF_LANGBARITEMINFO *pInfo);
	HRESULT(STDMETHODCALLTYPE *GetStatus) (ITfLangBarItemBitmap *This, DWORD *pdwStatus);
	HRESULT(STDMETHODCALLTYPE *Show) (ITfLangBarItemBitmap *This, BOOL fShow);
	HRESULT(STDMETHODCALLTYPE *GetTooltipString) (ITfLangBarItemBitmap *This, BSTR *pbstrToolTip);
	HRESULT(STDMETHODCALLTYPE *OnClick) (ITfLangBarItemBitmap *This, TfLBIClick click, POINT pt, const RECT *prcArea);
	HRESULT(STDMETHODCALLTYPE *GetPreferredSize) (ITfLangBarItemBitmap *This, const SIZE *pszDefault, SIZE *psz);
	HRESULT(STDMETHODCALLTYPE *DrawBitmap) (ITfLangBarItemBitmap *This, LONG bmWidth, LONG bmHeight, DWORD dwFlags, HBITMAP *phbmp, HBITMAP *phbmpMask);
	END_INTERFACE
}  ITfLangBarItemBitmapVtbl;
interface ITfLangBarItemBitmap
{
	CONST_VTBL struct ITfLangBarItemBitmapVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define ITfLangBarItemBitmap_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define ITfLangBarItemBitmap_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define ITfLangBarItemBitmap_Release(This)( (This)->lpVtbl -> Release(This) )
#define ITfLangBarItemBitmap_GetInfo(This,pInfo)( (This)->lpVtbl -> GetInfo(This,pInfo) )
#define ITfLangBarItemBitmap_GetStatus(This,pdwStatus)( (This)->lpVtbl -> GetStatus(This,pdwStatus) )
#define ITfLangBarItemBitmap_Show(This,fShow)( (This)->lpVtbl -> Show(This,fShow) )
#define ITfLangBarItemBitmap_GetTooltipString(This,pbstrToolTip)( (This)->lpVtbl -> GetTooltipString(This,pbstrToolTip) )
#define ITfLangBarItemBitmap_OnClick(This,click,pt,prcArea)( (This)->lpVtbl -> OnClick(This,click,pt,prcArea) )
#define ITfLangBarItemBitmap_GetPreferredSize(This,pszDefault,psz)( (This)->lpVtbl -> GetPreferredSize(This,pszDefault,psz) )
#define ITfLangBarItemBitmap_DrawBitmap(This,bmWidth,bmHeight,dwFlags,phbmp,phbmpMask)( (This)->lpVtbl -> DrawBitmap(This,bmWidth,bmHeight,dwFlags,phbmp,phbmpMask) )
#endif
#endif
#ifndef __ITfLangBarItemBalloon_INTERFACE_DEFINED__
#define __ITfLangBarItemBalloon_INTERFACE_DEFINED__
typedef DECLSPEC_UUID("f399a969-9e97-4ddd-b974-2bfb934cfbc9")
enum __MIDL_ITfLangBarItemBalloon_0001
{
	TF_LB_BALLOON_RECO = 0,
	TF_LB_BALLOON_SHOW = 1,
	TF_LB_BALLOON_MISS = 2
} TfLBBalloonStyle;
typedef DECLSPEC_UUID("37574483-5c50-4092-a55c-922e3a67e5b8")
struct TF_LBBALLOONINFO
{
	TfLBBalloonStyle style;
	BSTR bstrText;
} TF_LBBALLOONINFO;
extern const IID IID_ITfLangBarItemBalloon;
typedef struct ITfLangBarItemBalloonVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE *QueryInterface) (ITfLangBarItemBalloon *This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE *AddRef) (ITfLangBarItemBalloon *This);
	ULONG(STDMETHODCALLTYPE *Release) (ITfLangBarItemBalloon *This);
	HRESULT(STDMETHODCALLTYPE *GetInfo) (ITfLangBarItemBalloon *This, TF_LANGBARITEMINFO *pInfo);
	HRESULT(STDMETHODCALLTYPE *GetStatus) (ITfLangBarItemBalloon *This, DWORD *pdwStatus);
	HRESULT(STDMETHODCALLTYPE *Show) (ITfLangBarItemBalloon *This, BOOL fShow);
	HRESULT(STDMETHODCALLTYPE *GetTooltipString) (ITfLangBarItemBalloon *This, BSTR *pbstrToolTip);
	HRESULT(STDMETHODCALLTYPE *OnClick) (ITfLangBarItemBalloon *This, TfLBIClick click, POINT pt, const RECT *prcArea);
	HRESULT(STDMETHODCALLTYPE *GetPreferredSize) (ITfLangBarItemBalloon *This, const SIZE *pszDefault, SIZE *psz);
	HRESULT(STDMETHODCALLTYPE *GetBalloonInfo) (ITfLangBarItemBalloon *This, TF_LBBALLOONINFO *pInfo);
	END_INTERFACE
}  ITfLangBarItemBalloonVtbl;
interface ITfLangBarItemBalloon
{
	CONST_VTBL struct ITfLangBarItemBalloonVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define ITfLangBarItemBalloon_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define ITfLangBarItemBalloon_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define ITfLangBarItemBalloon_Release(This)( (This)->lpVtbl -> Release(This) )
#define ITfLangBarItemBalloon_GetInfo(This,pInfo)( (This)->lpVtbl -> GetInfo(This,pInfo) )
#define ITfLangBarItemBalloon_GetStatus(This,pdwStatus)( (This)->lpVtbl -> GetStatus(This,pdwStatus) )
#define ITfLangBarItemBalloon_Show(This,fShow)( (This)->lpVtbl -> Show(This,fShow) )
#define ITfLangBarItemBalloon_GetTooltipString(This,pbstrToolTip)( (This)->lpVtbl -> GetTooltipString(This,pbstrToolTip) )
#define ITfLangBarItemBalloon_OnClick(This,click,pt,prcArea)( (This)->lpVtbl -> OnClick(This,click,pt,prcArea) )
#define ITfLangBarItemBalloon_GetPreferredSize(This,pszDefault,psz)( (This)->lpVtbl -> GetPreferredSize(This,pszDefault,psz) )
#define ITfLangBarItemBalloon_GetBalloonInfo(This,pInfo)( (This)->lpVtbl -> GetBalloonInfo(This,pInfo) )
#endif
#endif
#ifndef __ITfMenu_INTERFACE_DEFINED__
#define __ITfMenu_INTERFACE_DEFINED__
#define	TF_LBMENUF_CHECKED	( 0x1 )
#define	TF_LBMENUF_SUBMENU	( 0x2 )
#define	TF_LBMENUF_SEPARATOR	( 0x4 )
#define	TF_LBMENUF_RADIOCHECKED	( 0x8 )
#define	TF_LBMENUF_GRAYED	( 0x10 )
extern const IID IID_ITfMenu;
typedef struct ITfMenuVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE *QueryInterface) (ITfMenu *This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE *AddRef) (ITfMenu *This);
	ULONG(STDMETHODCALLTYPE *Release) (ITfMenu *This);
	HRESULT(STDMETHODCALLTYPE *AddMenuItem) (ITfMenu *This, UINT uId, DWORD dwFlags, HBITMAP hbmp, HBITMAP hbmpMask, const WCHAR *pch, ULONG cch, ITfMenu **ppMenu);
	END_INTERFACE
}  ITfMenuVtbl;
interface ITfMenu
{
	CONST_VTBL struct ITfMenuVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define ITfMenu_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define ITfMenu_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define ITfMenu_Release(This)( (This)->lpVtbl -> Release(This) )
#define ITfMenu_AddMenuItem(This,uId,dwFlags,hbmp,hbmpMask,pch,cch,ppMenu)( (This)->lpVtbl -> AddMenuItem(This,uId,dwFlags,hbmp,hbmpMask,pch,cch,ppMenu) )
#endif
#endif
#endif
extern RPC_IF_HANDLE __MIDL_itf_ctfutb_0000_0015_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_ctfutb_0000_0015_v0_0_s_ifspec;
unsigned long __RPC_USER BSTR_UserSize(unsigned long *, unsigned long, BSTR *);
unsigned char *__RPC_USER BSTR_UserMarshal(unsigned long *, unsigned char *, BSTR *);
unsigned char *__RPC_USER BSTR_UserUnmarshal(unsigned long *, unsigned char *, BSTR *);
void __RPC_USER BSTR_UserFree(unsigned long *, BSTR *);
unsigned long __RPC_USER HBITMAP_UserSize(unsigned long *, unsigned long, HBITMAP *);
unsigned char *__RPC_USER HBITMAP_UserMarshal(unsigned long *, unsigned char *, HBITMAP *);
unsigned char *__RPC_USER HBITMAP_UserUnmarshal(unsigned long *, unsigned char *, HBITMAP *);
void __RPC_USER HBITMAP_UserFree(unsigned long *, HBITMAP *);
unsigned long __RPC_USER HICON_UserSize(unsigned long *, unsigned long, HICON *);
unsigned char *__RPC_USER HICON_UserMarshal(unsigned long *, unsigned char *, HICON *);
unsigned char *__RPC_USER HICON_UserUnmarshal(unsigned long *, unsigned char *, HICON *);
void __RPC_USER HICON_UserFree(unsigned long *, HICON *);
unsigned long __RPC_USER HWND_UserSize(unsigned long *, unsigned long, HWND *);
unsigned char *__RPC_USER HWND_UserMarshal(unsigned long *, unsigned char *, HWND *);
unsigned char *__RPC_USER HWND_UserUnmarshal(unsigned long *, unsigned char *, HWND *);
void __RPC_USER HWND_UserFree(unsigned long *, HWND *);
unsigned long __RPC_USER BSTR_UserSize64(unsigned long *, unsigned long, BSTR *);
unsigned char *__RPC_USER BSTR_UserMarshal64(unsigned long *, unsigned char *, BSTR *);
unsigned char *__RPC_USER BSTR_UserUnmarshal64(unsigned long *, unsigned char *, BSTR *);
void __RPC_USER BSTR_UserFree64(unsigned long *, BSTR *);
unsigned long __RPC_USER HBITMAP_UserSize64(unsigned long *, unsigned long, HBITMAP *);
unsigned char *__RPC_USER HBITMAP_UserMarshal64(unsigned long *, unsigned char *, HBITMAP *);
unsigned char *__RPC_USER HBITMAP_UserUnmarshal64(unsigned long *, unsigned char *, HBITMAP *);
void __RPC_USER HBITMAP_UserFree64(unsigned long *, HBITMAP *);
unsigned long __RPC_USER HICON_UserSize64(unsigned long *, unsigned long, HICON *);
unsigned char *__RPC_USER HICON_UserMarshal64(unsigned long *, unsigned char *, HICON *);
unsigned char *__RPC_USER HICON_UserUnmarshal64(unsigned long *, unsigned char *, HICON *);
void __RPC_USER HICON_UserFree64(unsigned long *, HICON *);
unsigned long __RPC_USER HWND_UserSize64(unsigned long *, unsigned long, HWND *);
unsigned char *__RPC_USER HWND_UserMarshal64(unsigned long *, unsigned char *, HWND *);
unsigned char *__RPC_USER HWND_UserUnmarshal64(unsigned long *, unsigned char *, HWND *);
void __RPC_USER HWND_UserFree64(unsigned long *, HWND *);
#endif

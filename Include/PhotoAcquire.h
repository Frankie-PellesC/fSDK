/*+@@file@@----------------------------------------------------------------*//*!
 \file		PhotoAcquire.h
 \par Description 
            Extension and update of headers for PellesC compiler suite.
 \par Project: 
            PellesC Headers extension
 \date		Created  on Mon Sep 12 00:21:43 2016
 \date		Modified on Mon Sep 12 00:21:43 2016
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
#ifndef COM_NO_WINDOWS_H
#include "windows.h"
#include "ole2.h"
#endif
#ifndef __photoacquire_h__
#define __photoacquire_h__
#if __POCC__ >= 500
#pragma once
#endif
#ifndef __IPhotoAcquireItem_FWD_DEFINED__
#define __IPhotoAcquireItem_FWD_DEFINED__
typedef interface IPhotoAcquireItem IPhotoAcquireItem;
#endif
#ifndef __IUserInputString_FWD_DEFINED__
#define __IUserInputString_FWD_DEFINED__
typedef interface IUserInputString IUserInputString;
#endif
#ifndef __IPhotoAcquireProgressCB_FWD_DEFINED__
#define __IPhotoAcquireProgressCB_FWD_DEFINED__
typedef interface IPhotoAcquireProgressCB IPhotoAcquireProgressCB;
#endif
#ifndef __IPhotoProgressActionCB_FWD_DEFINED__
#define __IPhotoProgressActionCB_FWD_DEFINED__
typedef interface IPhotoProgressActionCB IPhotoProgressActionCB;
#endif
#ifndef __IPhotoProgressDialog_FWD_DEFINED__
#define __IPhotoProgressDialog_FWD_DEFINED__
typedef interface IPhotoProgressDialog IPhotoProgressDialog;
#endif
#ifndef __IPhotoAcquireSource_FWD_DEFINED__
#define __IPhotoAcquireSource_FWD_DEFINED__
typedef interface IPhotoAcquireSource IPhotoAcquireSource;
#endif
#ifndef __IPhotoAcquire_FWD_DEFINED__
#define __IPhotoAcquire_FWD_DEFINED__
typedef interface IPhotoAcquire IPhotoAcquire;
#endif
#ifndef __IPhotoAcquireSettings_FWD_DEFINED__
#define __IPhotoAcquireSettings_FWD_DEFINED__
typedef interface IPhotoAcquireSettings IPhotoAcquireSettings;
#endif
#ifndef __IPhotoAcquireOptionsDialog_FWD_DEFINED__
#define __IPhotoAcquireOptionsDialog_FWD_DEFINED__
typedef interface IPhotoAcquireOptionsDialog IPhotoAcquireOptionsDialog;
#endif
#ifndef __IPhotoAcquireDeviceSelectionDialog_FWD_DEFINED__
#define __IPhotoAcquireDeviceSelectionDialog_FWD_DEFINED__
typedef interface IPhotoAcquireDeviceSelectionDialog IPhotoAcquireDeviceSelectionDialog;
#endif
#ifndef __IPhotoAcquirePlugin_FWD_DEFINED__
#define __IPhotoAcquirePlugin_FWD_DEFINED__
typedef interface IPhotoAcquirePlugin IPhotoAcquirePlugin;
#endif
#ifndef __PhotoAcquire_FWD_DEFINED__
#define __PhotoAcquire_FWD_DEFINED__
typedef struct PhotoAcquire PhotoAcquire;
#endif
#ifndef __PhotoAcquireAutoPlayDropTarget_FWD_DEFINED__
#define __PhotoAcquireAutoPlayDropTarget_FWD_DEFINED__
typedef struct PhotoAcquireAutoPlayDropTarget PhotoAcquireAutoPlayDropTarget;
#endif
#ifndef __PhotoAcquireAutoPlayHWEventHandler_FWD_DEFINED__
#define __PhotoAcquireAutoPlayHWEventHandler_FWD_DEFINED__
typedef struct PhotoAcquireAutoPlayHWEventHandler PhotoAcquireAutoPlayHWEventHandler;
#endif
#ifndef __PhotoAcquireOptionsDialog_FWD_DEFINED__
#define __PhotoAcquireOptionsDialog_FWD_DEFINED__
typedef struct PhotoAcquireOptionsDialog PhotoAcquireOptionsDialog;
#endif
#ifndef __PhotoProgressDialog_FWD_DEFINED__
#define __PhotoProgressDialog_FWD_DEFINED__
typedef struct PhotoProgressDialog PhotoProgressDialog;
#endif
#ifndef __PhotoAcquireDeviceSelectionDialog_FWD_DEFINED__
#define __PhotoAcquireDeviceSelectionDialog_FWD_DEFINED__
typedef struct PhotoAcquireDeviceSelectionDialog PhotoAcquireDeviceSelectionDialog;
#endif
#include "objidl.h"
#include "propidl.h"
#include "shobjidl.h"
#include <PhotoAcquireProperties.h>
extern RPC_IF_HANDLE __MIDL_itf_photoacquire_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_photoacquire_0000_0000_v0_0_s_ifspec;
#ifndef __IPhotoAcquireItem_INTERFACE_DEFINED__
#define __IPhotoAcquireItem_INTERFACE_DEFINED__
extern const IID IID_IPhotoAcquireItem;
typedef struct IPhotoAcquireItemVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IPhotoAcquireItem * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IPhotoAcquireItem * This);
	ULONG(STDMETHODCALLTYPE * Release) (IPhotoAcquireItem * This);
	HRESULT(STDMETHODCALLTYPE * GetItemName) (IPhotoAcquireItem * This, BSTR * pbstrItemName);
	HRESULT(STDMETHODCALLTYPE * GetThumbnail) (IPhotoAcquireItem * This, SIZE sizeThumbnail, HBITMAP * phbmpThumbnail);
	HRESULT(STDMETHODCALLTYPE * GetProperty) (IPhotoAcquireItem * This, REFPROPERTYKEY key, PROPVARIANT * pv);
	HRESULT(STDMETHODCALLTYPE * SetProperty) (IPhotoAcquireItem * This, REFPROPERTYKEY key, const PROPVARIANT * pv);
	HRESULT(STDMETHODCALLTYPE * GetStream) (IPhotoAcquireItem * This, IStream ** ppStream);
	HRESULT(STDMETHODCALLTYPE * CanDelete) (IPhotoAcquireItem * This, BOOL * pfCanDelete);
	HRESULT(STDMETHODCALLTYPE * Delete) (IPhotoAcquireItem * This);
	HRESULT(STDMETHODCALLTYPE * GetSubItemCount) (IPhotoAcquireItem * This, UINT * pnCount);
	HRESULT(STDMETHODCALLTYPE * GetSubItemAt) (IPhotoAcquireItem * This, UINT nItemIndex, IPhotoAcquireItem ** ppPhotoAcquireItem);
	END_INTERFACE
}  IPhotoAcquireItemVtbl;
interface IPhotoAcquireItem
{
	CONST_VTBL struct IPhotoAcquireItemVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IPhotoAcquireItem_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IPhotoAcquireItem_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IPhotoAcquireItem_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IPhotoAcquireItem_GetItemName(This,pbstrItemName) ( (This)->lpVtbl -> GetItemName(This,pbstrItemName) )
#define IPhotoAcquireItem_GetThumbnail(This,sizeThumbnail,phbmpThumbnail) ( (This)->lpVtbl -> GetThumbnail(This,sizeThumbnail,phbmpThumbnail) )
#define IPhotoAcquireItem_GetProperty(This,key,pv) ( (This)->lpVtbl -> GetProperty(This,key,pv) )
#define IPhotoAcquireItem_SetProperty(This,key,pv) ( (This)->lpVtbl -> SetProperty(This,key,pv) )
#define IPhotoAcquireItem_GetStream(This,ppStream) ( (This)->lpVtbl -> GetStream(This,ppStream) )
#define IPhotoAcquireItem_CanDelete(This,pfCanDelete) ( (This)->lpVtbl -> CanDelete(This,pfCanDelete) )
#define IPhotoAcquireItem_Delete(This) ( (This)->lpVtbl -> Delete(This) )
#define IPhotoAcquireItem_GetSubItemCount(This,pnCount) ( (This)->lpVtbl -> GetSubItemCount(This,pnCount) )
#define IPhotoAcquireItem_GetSubItemAt(This,nItemIndex,ppPhotoAcquireItem) ( (This)->lpVtbl -> GetSubItemAt(This,nItemIndex,ppPhotoAcquireItem) )
#endif
#endif
#ifndef __IUserInputString_INTERFACE_DEFINED__
#define __IUserInputString_INTERFACE_DEFINED__
typedef enum tagUSER_INPUT_STRING_TYPE
{
	USER_INPUT_DEFAULT = 0,
	USER_INPUT_PATH_ELEMENT = 0x1
} USER_INPUT_STRING_TYPE;
extern const IID IID_IUserInputString;
typedef struct IUserInputStringVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IUserInputString * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IUserInputString * This);
	ULONG(STDMETHODCALLTYPE * Release) (IUserInputString * This);
	HRESULT(STDMETHODCALLTYPE * GetSubmitButtonText) (IUserInputString * This, BSTR * pbstrSubmitButtonText);
	HRESULT(STDMETHODCALLTYPE * GetPrompt) (IUserInputString * This, BSTR * pbstrPromptTitle);
	HRESULT(STDMETHODCALLTYPE * GetStringId) (IUserInputString * This, BSTR * pbstrStringId);
	HRESULT(STDMETHODCALLTYPE * GetStringType) (IUserInputString * This, USER_INPUT_STRING_TYPE * pnStringType);
	HRESULT(STDMETHODCALLTYPE * GetTooltipText) (IUserInputString * This, BSTR * pbstrTooltipText);
	HRESULT(STDMETHODCALLTYPE * GetMaxLength) (IUserInputString * This, UINT * pcchMaxLength);
	HRESULT(STDMETHODCALLTYPE * GetDefault) (IUserInputString * This, BSTR * pbstrDefault);
	HRESULT(STDMETHODCALLTYPE * GetMruCount) (IUserInputString * This, UINT * pnMruCount);
	HRESULT(STDMETHODCALLTYPE * GetMruEntryAt) (IUserInputString * This, UINT nIndex, BSTR * pbstrMruEntry);
	HRESULT(STDMETHODCALLTYPE * GetImage) (IUserInputString * This, UINT nSize, HBITMAP * phBitmap, HICON * phIcon);
	END_INTERFACE
}  IUserInputStringVtbl;
interface IUserInputString
{
	CONST_VTBL struct IUserInputStringVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IUserInputString_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IUserInputString_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IUserInputString_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IUserInputString_GetSubmitButtonText(This,pbstrSubmitButtonText) ( (This)->lpVtbl -> GetSubmitButtonText(This,pbstrSubmitButtonText) )
#define IUserInputString_GetPrompt(This,pbstrPromptTitle) ( (This)->lpVtbl -> GetPrompt(This,pbstrPromptTitle) )
#define IUserInputString_GetStringId(This,pbstrStringId) ( (This)->lpVtbl -> GetStringId(This,pbstrStringId) )
#define IUserInputString_GetStringType(This,pnStringType) ( (This)->lpVtbl -> GetStringType(This,pnStringType) )
#define IUserInputString_GetTooltipText(This,pbstrTooltipText) ( (This)->lpVtbl -> GetTooltipText(This,pbstrTooltipText) )
#define IUserInputString_GetMaxLength(This,pcchMaxLength) ( (This)->lpVtbl -> GetMaxLength(This,pcchMaxLength) )
#define IUserInputString_GetDefault(This,pbstrDefault) ( (This)->lpVtbl -> GetDefault(This,pbstrDefault) )
#define IUserInputString_GetMruCount(This,pnMruCount) ( (This)->lpVtbl -> GetMruCount(This,pnMruCount) )
#define IUserInputString_GetMruEntryAt(This,nIndex,pbstrMruEntry) ( (This)->lpVtbl -> GetMruEntryAt(This,nIndex,pbstrMruEntry) )
#define IUserInputString_GetImage(This,nSize,phBitmap,phIcon) ( (This)->lpVtbl -> GetImage(This,nSize,phBitmap,phIcon) )
#endif
#endif
#ifndef __IPhotoAcquireProgressCB_INTERFACE_DEFINED__
#define __IPhotoAcquireProgressCB_INTERFACE_DEFINED__
typedef enum tagERROR_ADVISE_MESSAGE_TYPE
{
	PHOTOACQUIRE_ERROR_SKIPRETRYCANCEL = 0,
	PHOTOACQUIRE_ERROR_RETRYCANCEL = 1,
	PHOTOACQUIRE_ERROR_YESNO = 2,
	PHOTOACQUIRE_ERROR_OK = 3
} ERROR_ADVISE_MESSAGE_TYPE;
typedef enum tagERROR_ADVISE_RESULT
{
	PHOTOACQUIRE_RESULT_YES = 0,
	PHOTOACQUIRE_RESULT_NO = 1,
	PHOTOACQUIRE_RESULT_OK = 2,
	PHOTOACQUIRE_RESULT_SKIP = 3,
	PHOTOACQUIRE_RESULT_SKIP_ALL = 4,
	PHOTOACQUIRE_RESULT_RETRY = 5,
	PHOTOACQUIRE_RESULT_ABORT = 6
} ERROR_ADVISE_RESULT;
extern const IID IID_IPhotoAcquireProgressCB;
typedef struct IPhotoAcquireProgressCBVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IPhotoAcquireProgressCB * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IPhotoAcquireProgressCB * This);
	ULONG(STDMETHODCALLTYPE * Release) (IPhotoAcquireProgressCB * This);
	HRESULT(STDMETHODCALLTYPE * Cancelled) (IPhotoAcquireProgressCB * This, BOOL * pfCancelled);
	HRESULT(STDMETHODCALLTYPE * StartEnumeration) (IPhotoAcquireProgressCB * This, IPhotoAcquireSource * pPhotoAcquireSource);
	HRESULT(STDMETHODCALLTYPE * FoundItem) (IPhotoAcquireProgressCB * This, IPhotoAcquireItem * pPhotoAcquireItem);
	HRESULT(STDMETHODCALLTYPE * EndEnumeration) (IPhotoAcquireProgressCB * This, HRESULT hr);
	HRESULT(STDMETHODCALLTYPE * StartTransfer) (IPhotoAcquireProgressCB * This, IPhotoAcquireSource * pPhotoAcquireSource);
	HRESULT(STDMETHODCALLTYPE * StartItemTransfer) (IPhotoAcquireProgressCB * This, UINT nItemIndex, IPhotoAcquireItem * pPhotoAcquireItem);
	HRESULT(STDMETHODCALLTYPE * DirectoryCreated) (IPhotoAcquireProgressCB * This, LPCWSTR pszDirectory);
	HRESULT(STDMETHODCALLTYPE * UpdateTransferPercent) (IPhotoAcquireProgressCB * This, BOOL fOverall, UINT nPercent);
	HRESULT(STDMETHODCALLTYPE * EndItemTransfer) (IPhotoAcquireProgressCB * This, UINT nItemIndex, IPhotoAcquireItem * pPhotoAcquireItem, HRESULT hr);
	HRESULT(STDMETHODCALLTYPE * EndTransfer) (IPhotoAcquireProgressCB * This, HRESULT hr);
	HRESULT(STDMETHODCALLTYPE * StartDelete) (IPhotoAcquireProgressCB * This, IPhotoAcquireSource * pPhotoAcquireSource);
	HRESULT(STDMETHODCALLTYPE * StartItemDelete) (IPhotoAcquireProgressCB * This, UINT nItemIndex, IPhotoAcquireItem * pPhotoAcquireItem);
	HRESULT(STDMETHODCALLTYPE * UpdateDeletePercent) (IPhotoAcquireProgressCB * This, UINT nPercent);
	HRESULT(STDMETHODCALLTYPE * EndItemDelete) (IPhotoAcquireProgressCB * This, UINT nItemIndex, IPhotoAcquireItem * pPhotoAcquireItem, HRESULT hr);
	HRESULT(STDMETHODCALLTYPE * EndDelete) (IPhotoAcquireProgressCB * This, HRESULT hr);
	HRESULT(STDMETHODCALLTYPE * EndSession) (IPhotoAcquireProgressCB * This, HRESULT hr);
	HRESULT(STDMETHODCALLTYPE * GetDeleteAfterAcquire) (IPhotoAcquireProgressCB * This, BOOL * pfDeleteAfterAcquire);
	HRESULT(STDMETHODCALLTYPE * ErrorAdvise) (IPhotoAcquireProgressCB * This, HRESULT hr, LPCWSTR pszErrorMessage, ERROR_ADVISE_MESSAGE_TYPE nMessageType, ERROR_ADVISE_RESULT * pnErrorAdviseResult);
	HRESULT(STDMETHODCALLTYPE * GetUserInput) (IPhotoAcquireProgressCB * This, REFIID riidType, IUnknown * pUnknown, PROPVARIANT * pPropVarResult, const PROPVARIANT * pPropVarDefault);
	END_INTERFACE
}  IPhotoAcquireProgressCBVtbl;
interface IPhotoAcquireProgressCB
{
	CONST_VTBL struct IPhotoAcquireProgressCBVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IPhotoAcquireProgressCB_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IPhotoAcquireProgressCB_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IPhotoAcquireProgressCB_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IPhotoAcquireProgressCB_Cancelled(This,pfCancelled) ( (This)->lpVtbl -> Cancelled(This,pfCancelled) )
#define IPhotoAcquireProgressCB_StartEnumeration(This,pPhotoAcquireSource) ( (This)->lpVtbl -> StartEnumeration(This,pPhotoAcquireSource) )
#define IPhotoAcquireProgressCB_FoundItem(This,pPhotoAcquireItem) ( (This)->lpVtbl -> FoundItem(This,pPhotoAcquireItem) )
#define IPhotoAcquireProgressCB_EndEnumeration(This,hr) ( (This)->lpVtbl -> EndEnumeration(This,hr) )
#define IPhotoAcquireProgressCB_StartTransfer(This,pPhotoAcquireSource) ( (This)->lpVtbl -> StartTransfer(This,pPhotoAcquireSource) )
#define IPhotoAcquireProgressCB_StartItemTransfer(This,nItemIndex,pPhotoAcquireItem) ( (This)->lpVtbl -> StartItemTransfer(This,nItemIndex,pPhotoAcquireItem) )
#define IPhotoAcquireProgressCB_DirectoryCreated(This,pszDirectory) ( (This)->lpVtbl -> DirectoryCreated(This,pszDirectory) )
#define IPhotoAcquireProgressCB_UpdateTransferPercent(This,fOverall,nPercent) ( (This)->lpVtbl -> UpdateTransferPercent(This,fOverall,nPercent) )
#define IPhotoAcquireProgressCB_EndItemTransfer(This,nItemIndex,pPhotoAcquireItem,hr) ( (This)->lpVtbl -> EndItemTransfer(This,nItemIndex,pPhotoAcquireItem,hr) )
#define IPhotoAcquireProgressCB_EndTransfer(This,hr) ( (This)->lpVtbl -> EndTransfer(This,hr) )
#define IPhotoAcquireProgressCB_StartDelete(This,pPhotoAcquireSource) ( (This)->lpVtbl -> StartDelete(This,pPhotoAcquireSource) )
#define IPhotoAcquireProgressCB_StartItemDelete(This,nItemIndex,pPhotoAcquireItem) ( (This)->lpVtbl -> StartItemDelete(This,nItemIndex,pPhotoAcquireItem) )
#define IPhotoAcquireProgressCB_UpdateDeletePercent(This,nPercent) ( (This)->lpVtbl -> UpdateDeletePercent(This,nPercent) )
#define IPhotoAcquireProgressCB_EndItemDelete(This,nItemIndex,pPhotoAcquireItem,hr) ( (This)->lpVtbl -> EndItemDelete(This,nItemIndex,pPhotoAcquireItem,hr) )
#define IPhotoAcquireProgressCB_EndDelete(This,hr) ( (This)->lpVtbl -> EndDelete(This,hr) )
#define IPhotoAcquireProgressCB_EndSession(This,hr) ( (This)->lpVtbl -> EndSession(This,hr) )
#define IPhotoAcquireProgressCB_GetDeleteAfterAcquire(This,pfDeleteAfterAcquire) ( (This)->lpVtbl -> GetDeleteAfterAcquire(This,pfDeleteAfterAcquire) )
#define IPhotoAcquireProgressCB_ErrorAdvise(This,hr,pszErrorMessage,nMessageType,pnErrorAdviseResult) ( (This)->lpVtbl -> ErrorAdvise(This,hr,pszErrorMessage,nMessageType,pnErrorAdviseResult) )
#define IPhotoAcquireProgressCB_GetUserInput(This,riidType,pUnknown,pPropVarResult,pPropVarDefault) ( (This)->lpVtbl -> GetUserInput(This,riidType,pUnknown,pPropVarResult,pPropVarDefault) )
#endif
#endif
#ifndef __IPhotoProgressActionCB_INTERFACE_DEFINED__
#define __IPhotoProgressActionCB_INTERFACE_DEFINED__
extern const IID IID_IPhotoProgressActionCB;
typedef struct IPhotoProgressActionCBVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IPhotoProgressActionCB * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IPhotoProgressActionCB * This);
	ULONG(STDMETHODCALLTYPE * Release) (IPhotoProgressActionCB * This);
	HRESULT(STDMETHODCALLTYPE * DoAction) (IPhotoProgressActionCB * This, HWND hWndParent);
	END_INTERFACE
}  IPhotoProgressActionCBVtbl;
interface IPhotoProgressActionCB
{
	CONST_VTBL struct IPhotoProgressActionCBVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IPhotoProgressActionCB_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IPhotoProgressActionCB_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IPhotoProgressActionCB_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IPhotoProgressActionCB_DoAction(This,hWndParent) ( (This)->lpVtbl -> DoAction(This,hWndParent) )
#endif
#endif
#define PROGRESS_INDETERMINATE (-1)
extern RPC_IF_HANDLE __MIDL_itf_photoacquire_0000_0004_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_photoacquire_0000_0004_v0_0_s_ifspec;
#ifndef __IPhotoProgressDialog_INTERFACE_DEFINED__
#define __IPhotoProgressDialog_INTERFACE_DEFINED__
typedef enum tagPROGRESS_DIALOG_IMAGE_TYPE
{
	PROGRESS_DIALOG_ICON_SMALL = 0,
	PROGRESS_DIALOG_ICON_LARGE = 0x1,
	PROGRESS_DIALOG_ICON_THUMBNAIL = 0x2,
	PROGRESS_DIALOG_BITMAP_THUMBNAIL = 0x3
} PROGRESS_DIALOG_IMAGE_TYPE;
typedef enum tagPROGRESS_DIALOG_CHECKBOX_ID
{
	PROGRESS_DIALOG_CHECKBOX_ID_DEFAULT = 0
} PROGRESS_DIALOG_CHECKBOX_ID;
extern const IID IID_IPhotoProgressDialog;
typedef struct IPhotoProgressDialogVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IPhotoProgressDialog * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IPhotoProgressDialog * This);
	ULONG(STDMETHODCALLTYPE * Release) (IPhotoProgressDialog * This);
	HRESULT(STDMETHODCALLTYPE * Create) (IPhotoProgressDialog * This, HWND hwndParent);
	HRESULT(STDMETHODCALLTYPE * GetWindow) (IPhotoProgressDialog * This, HWND * phwndProgressDialog);
	HRESULT(STDMETHODCALLTYPE * Destroy) (IPhotoProgressDialog * This);
	HRESULT(STDMETHODCALLTYPE * SetTitle) (IPhotoProgressDialog * This, LPCWSTR pszTitle);
	HRESULT(STDMETHODCALLTYPE * ShowCheckbox) (IPhotoProgressDialog * This, PROGRESS_DIALOG_CHECKBOX_ID nCheckboxId, BOOL fShow);
	HRESULT(STDMETHODCALLTYPE * SetCheckboxText) (IPhotoProgressDialog * This, PROGRESS_DIALOG_CHECKBOX_ID nCheckboxId, LPCWSTR pszCheckboxText);
	HRESULT(STDMETHODCALLTYPE * SetCheckboxCheck) (IPhotoProgressDialog * This, PROGRESS_DIALOG_CHECKBOX_ID nCheckboxId, BOOL fChecked);
	HRESULT(STDMETHODCALLTYPE * SetCheckboxTooltip) (IPhotoProgressDialog * This, PROGRESS_DIALOG_CHECKBOX_ID nCheckboxId, LPCWSTR pszCheckboxTooltipText);
	HRESULT(STDMETHODCALLTYPE * IsCheckboxChecked) (IPhotoProgressDialog * This, PROGRESS_DIALOG_CHECKBOX_ID nCheckboxId, BOOL * pfChecked);
	HRESULT(STDMETHODCALLTYPE * SetCaption) (IPhotoProgressDialog * This, LPCWSTR pszTitle);
	HRESULT(STDMETHODCALLTYPE * SetImage) (IPhotoProgressDialog * This, PROGRESS_DIALOG_IMAGE_TYPE nImageType, HICON hIcon, HBITMAP hBitmap);
	HRESULT(STDMETHODCALLTYPE * SetPercentComplete) (IPhotoProgressDialog * This, int nPercent);
	HRESULT(STDMETHODCALLTYPE * SetProgressText) (IPhotoProgressDialog * This, LPCWSTR pszProgressText);
	HRESULT(STDMETHODCALLTYPE * SetActionLinkCallback) (IPhotoProgressDialog * This, IPhotoProgressActionCB * pPhotoProgressActionCB);
	HRESULT(STDMETHODCALLTYPE * SetActionLinkText) (IPhotoProgressDialog * This, LPCWSTR pszCaption);
	HRESULT(STDMETHODCALLTYPE * ShowActionLink) (IPhotoProgressDialog * This, BOOL fShow);
	HRESULT(STDMETHODCALLTYPE * IsCancelled) (IPhotoProgressDialog * This, BOOL * pfCancelled);
	HRESULT(STDMETHODCALLTYPE * GetUserInput) (IPhotoProgressDialog * This, REFIID riidType, IUnknown * pUnknown, PROPVARIANT * pPropVarResult, const PROPVARIANT * pPropVarDefault);
	END_INTERFACE
}  IPhotoProgressDialogVtbl;
interface IPhotoProgressDialog
{
	CONST_VTBL struct IPhotoProgressDialogVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IPhotoProgressDialog_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IPhotoProgressDialog_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IPhotoProgressDialog_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IPhotoProgressDialog_Create(This,hwndParent) ( (This)->lpVtbl -> Create(This,hwndParent) )
#define IPhotoProgressDialog_GetWindow(This,phwndProgressDialog) ( (This)->lpVtbl -> GetWindow(This,phwndProgressDialog) )
#define IPhotoProgressDialog_Destroy(This) ( (This)->lpVtbl -> Destroy(This) )
#define IPhotoProgressDialog_SetTitle(This,pszTitle) ( (This)->lpVtbl -> SetTitle(This,pszTitle) )
#define IPhotoProgressDialog_ShowCheckbox(This,nCheckboxId,fShow) ( (This)->lpVtbl -> ShowCheckbox(This,nCheckboxId,fShow) )
#define IPhotoProgressDialog_SetCheckboxText(This,nCheckboxId,pszCheckboxText) ( (This)->lpVtbl -> SetCheckboxText(This,nCheckboxId,pszCheckboxText) )
#define IPhotoProgressDialog_SetCheckboxCheck(This,nCheckboxId,fChecked) ( (This)->lpVtbl -> SetCheckboxCheck(This,nCheckboxId,fChecked) )
#define IPhotoProgressDialog_SetCheckboxTooltip(This,nCheckboxId,pszCheckboxTooltipText) ( (This)->lpVtbl -> SetCheckboxTooltip(This,nCheckboxId,pszCheckboxTooltipText) )
#define IPhotoProgressDialog_IsCheckboxChecked(This,nCheckboxId,pfChecked) ( (This)->lpVtbl -> IsCheckboxChecked(This,nCheckboxId,pfChecked) )
#define IPhotoProgressDialog_SetCaption(This,pszTitle) ( (This)->lpVtbl -> SetCaption(This,pszTitle) )
#define IPhotoProgressDialog_SetImage(This,nImageType,hIcon,hBitmap) ( (This)->lpVtbl -> SetImage(This,nImageType,hIcon,hBitmap) )
#define IPhotoProgressDialog_SetPercentComplete(This,nPercent) ( (This)->lpVtbl -> SetPercentComplete(This,nPercent) )
#define IPhotoProgressDialog_SetProgressText(This,pszProgressText) ( (This)->lpVtbl -> SetProgressText(This,pszProgressText) )
#define IPhotoProgressDialog_SetActionLinkCallback(This,pPhotoProgressActionCB) ( (This)->lpVtbl -> SetActionLinkCallback(This,pPhotoProgressActionCB) )
#define IPhotoProgressDialog_SetActionLinkText(This,pszCaption) ( (This)->lpVtbl -> SetActionLinkText(This,pszCaption) )
#define IPhotoProgressDialog_ShowActionLink(This,fShow) ( (This)->lpVtbl -> ShowActionLink(This,fShow) )
#define IPhotoProgressDialog_IsCancelled(This,pfCancelled) ( (This)->lpVtbl -> IsCancelled(This,pfCancelled) )
#define IPhotoProgressDialog_GetUserInput(This,riidType,pUnknown,pPropVarResult,pPropVarDefault) ( (This)->lpVtbl -> GetUserInput(This,riidType,pUnknown,pPropVarResult,pPropVarDefault) )
#endif
#endif
#ifndef __IPhotoAcquireSource_INTERFACE_DEFINED__
#define __IPhotoAcquireSource_INTERFACE_DEFINED__
extern const IID IID_IPhotoAcquireSource;
typedef struct IPhotoAcquireSourceVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IPhotoAcquireSource * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IPhotoAcquireSource * This);
	ULONG(STDMETHODCALLTYPE * Release) (IPhotoAcquireSource * This);
	HRESULT(STDMETHODCALLTYPE * GetFriendlyName) (IPhotoAcquireSource * This, BSTR * pbstrFriendlyName);
	HRESULT(STDMETHODCALLTYPE * GetDeviceIcons) (IPhotoAcquireSource * This, UINT nSize, HICON * phLargeIcon, HICON * phSmallIcon);
	HRESULT(STDMETHODCALLTYPE * InitializeItemList) (IPhotoAcquireSource * This, BOOL fForceEnumeration, IPhotoAcquireProgressCB * pPhotoAcquireProgressCB, UINT * pnItemCount);
	HRESULT(STDMETHODCALLTYPE * GetItemCount) (IPhotoAcquireSource * This, UINT * pnItemCount);
	HRESULT(STDMETHODCALLTYPE * GetItemAt) (IPhotoAcquireSource * This, UINT nIndex, IPhotoAcquireItem ** ppPhotoAcquireItem);
	HRESULT(STDMETHODCALLTYPE * GetPhotoAcquireSettings) (IPhotoAcquireSource * This, IPhotoAcquireSettings ** ppPhotoAcquireSettings);
	HRESULT(STDMETHODCALLTYPE * GetDeviceId) (IPhotoAcquireSource * This, BSTR * pbstrDeviceId);
	HRESULT(STDMETHODCALLTYPE * BindToObject) (IPhotoAcquireSource * This, REFIID riid, void **ppv);
	END_INTERFACE
}  IPhotoAcquireSourceVtbl;
interface IPhotoAcquireSource
{
	CONST_VTBL struct IPhotoAcquireSourceVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IPhotoAcquireSource_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IPhotoAcquireSource_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IPhotoAcquireSource_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IPhotoAcquireSource_GetFriendlyName(This,pbstrFriendlyName) ( (This)->lpVtbl -> GetFriendlyName(This,pbstrFriendlyName) )
#define IPhotoAcquireSource_GetDeviceIcons(This,nSize,phLargeIcon,phSmallIcon) ( (This)->lpVtbl -> GetDeviceIcons(This,nSize,phLargeIcon,phSmallIcon) )
#define IPhotoAcquireSource_InitializeItemList(This,fForceEnumeration,pPhotoAcquireProgressCB,pnItemCount) ( (This)->lpVtbl -> InitializeItemList(This,fForceEnumeration,pPhotoAcquireProgressCB,pnItemCount) )
#define IPhotoAcquireSource_GetItemCount(This,pnItemCount) ( (This)->lpVtbl -> GetItemCount(This,pnItemCount) )
#define IPhotoAcquireSource_GetItemAt(This,nIndex,ppPhotoAcquireItem) ( (This)->lpVtbl -> GetItemAt(This,nIndex,ppPhotoAcquireItem) )
#define IPhotoAcquireSource_GetPhotoAcquireSettings(This,ppPhotoAcquireSettings) ( (This)->lpVtbl -> GetPhotoAcquireSettings(This,ppPhotoAcquireSettings) )
#define IPhotoAcquireSource_GetDeviceId(This,pbstrDeviceId) ( (This)->lpVtbl -> GetDeviceId(This,pbstrDeviceId) )
#define IPhotoAcquireSource_BindToObject(This,riid,ppv) ( (This)->lpVtbl -> BindToObject(This,riid,ppv) )
#endif
#endif
#ifndef __IPhotoAcquire_INTERFACE_DEFINED__
#define __IPhotoAcquire_INTERFACE_DEFINED__
extern const IID IID_IPhotoAcquire;
typedef struct IPhotoAcquireVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IPhotoAcquire * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IPhotoAcquire * This);
	ULONG(STDMETHODCALLTYPE * Release) (IPhotoAcquire * This);
	HRESULT(STDMETHODCALLTYPE * CreatePhotoSource) (IPhotoAcquire * This, LPCWSTR pszDevice, IPhotoAcquireSource ** ppPhotoAcquireSource);
	HRESULT(STDMETHODCALLTYPE * Acquire) (IPhotoAcquire * This, IPhotoAcquireSource * pPhotoAcquireSource, BOOL fShowProgress, HWND hWndParent, LPCWSTR pszApplicationName, IPhotoAcquireProgressCB * pPhotoAcquireProgressCB);
	HRESULT(STDMETHODCALLTYPE * EnumResults) (IPhotoAcquire * This, IEnumString ** ppEnumFilePaths);
	END_INTERFACE
}  IPhotoAcquireVtbl;
interface IPhotoAcquire
{
	CONST_VTBL struct IPhotoAcquireVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IPhotoAcquire_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IPhotoAcquire_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IPhotoAcquire_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IPhotoAcquire_CreatePhotoSource(This,pszDevice,ppPhotoAcquireSource) ( (This)->lpVtbl -> CreatePhotoSource(This,pszDevice,ppPhotoAcquireSource) )
#define IPhotoAcquire_Acquire(This,pPhotoAcquireSource,fShowProgress,hWndParent,pszApplicationName,pPhotoAcquireProgressCB) ( (This)->lpVtbl -> Acquire(This,pPhotoAcquireSource,fShowProgress,hWndParent,pszApplicationName,pPhotoAcquireProgressCB) )
#define IPhotoAcquire_EnumResults(This,ppEnumFilePaths) ( (This)->lpVtbl -> EnumResults(This,ppEnumFilePaths) )
#endif
#endif
#define PHOTOACQ_ERROR_RESTART_REQUIRED MAKE_HRESULT(SEVERITY_ERROR, FACILITY_ITF, 0xA001)
#define PHOTOACQ_RUN_DEFAULT                      0x00000000
#define PHOTOACQ_NO_GALLERY_LAUNCH                0x00000001
#define PHOTOACQ_DISABLE_AUTO_ROTATE              0x00000002
#define PHOTOACQ_DISABLE_PLUGINS                  0x00000004
#define PHOTOACQ_DISABLE_GROUP_TAG_PROMPT         0x00000008
#define PHOTOACQ_DISABLE_DB_INTEGRATION           0x00000010
#define PHOTOACQ_DELETE_AFTER_ACQUIRE             0x00000020
#define PHOTOACQ_DISABLE_DUPLICATE_DETECTION      0x00000040
#define PHOTOACQ_ENABLE_THUMBNAIL_CACHING         0x00000080
#define PHOTOACQ_DISABLE_METADATA_WRITE           0x00000100
#define PHOTOACQ_DISABLE_THUMBNAIL_PROGRESS       0x00000200
#define PHOTOACQ_DISABLE_SETTINGS_LINK            0x00000400
#define PHOTOACQ_ABORT_ON_SETTINGS_UPDATE         0x00000800
extern RPC_IF_HANDLE __MIDL_itf_photoacquire_0000_0007_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_photoacquire_0000_0007_v0_0_s_ifspec;
#ifndef __IPhotoAcquireSettings_INTERFACE_DEFINED__
#define __IPhotoAcquireSettings_INTERFACE_DEFINED__
extern const IID IID_IPhotoAcquireSettings;
typedef struct IPhotoAcquireSettingsVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IPhotoAcquireSettings * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IPhotoAcquireSettings * This);
	ULONG(STDMETHODCALLTYPE * Release) (IPhotoAcquireSettings * This);
	HRESULT(STDMETHODCALLTYPE * InitializeFromRegistry) (IPhotoAcquireSettings * This, LPCWSTR pszRegistryKey);
	HRESULT(STDMETHODCALLTYPE * SetFlags) (IPhotoAcquireSettings * This, DWORD dwPhotoAcquireFlags);
	HRESULT(STDMETHODCALLTYPE * SetOutputFilenameTemplate) (IPhotoAcquireSettings * This, LPCWSTR pszTemplate);
	HRESULT(STDMETHODCALLTYPE * SetSequencePaddingWidth) (IPhotoAcquireSettings * This, DWORD dwWidth);
	HRESULT(STDMETHODCALLTYPE * SetSequenceZeroPadding) (IPhotoAcquireSettings * This, BOOL fZeroPad);
	HRESULT(STDMETHODCALLTYPE * SetGroupTag) (IPhotoAcquireSettings * This, LPCWSTR pszGroupTag);
	HRESULT(STDMETHODCALLTYPE * SetAcquisitionTime) (IPhotoAcquireSettings * This, const FILETIME * pftAcquisitionTime);
	HRESULT(STDMETHODCALLTYPE * GetFlags) (IPhotoAcquireSettings * This, DWORD * pdwPhotoAcquireFlags);
	HRESULT(STDMETHODCALLTYPE * GetOutputFilenameTemplate) (IPhotoAcquireSettings * This, BSTR * pbstrTemplate);
	HRESULT(STDMETHODCALLTYPE * GetSequencePaddingWidth) (IPhotoAcquireSettings * This, DWORD * pdwWidth);
	HRESULT(STDMETHODCALLTYPE * GetSequenceZeroPadding) (IPhotoAcquireSettings * This, BOOL * pfZeroPad);
	HRESULT(STDMETHODCALLTYPE * GetGroupTag) (IPhotoAcquireSettings * This, BSTR * pbstrGroupTag);
	HRESULT(STDMETHODCALLTYPE * GetAcquisitionTime) (IPhotoAcquireSettings * This, FILETIME * pftAcquisitionTime);
	END_INTERFACE
}  IPhotoAcquireSettingsVtbl;
interface IPhotoAcquireSettings
{
	CONST_VTBL struct IPhotoAcquireSettingsVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IPhotoAcquireSettings_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IPhotoAcquireSettings_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IPhotoAcquireSettings_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IPhotoAcquireSettings_InitializeFromRegistry(This,pszRegistryKey) ( (This)->lpVtbl -> InitializeFromRegistry(This,pszRegistryKey) )
#define IPhotoAcquireSettings_SetFlags(This,dwPhotoAcquireFlags) ( (This)->lpVtbl -> SetFlags(This,dwPhotoAcquireFlags) )
#define IPhotoAcquireSettings_SetOutputFilenameTemplate(This,pszTemplate) ( (This)->lpVtbl -> SetOutputFilenameTemplate(This,pszTemplate) )
#define IPhotoAcquireSettings_SetSequencePaddingWidth(This,dwWidth) ( (This)->lpVtbl -> SetSequencePaddingWidth(This,dwWidth) )
#define IPhotoAcquireSettings_SetSequenceZeroPadding(This,fZeroPad) ( (This)->lpVtbl -> SetSequenceZeroPadding(This,fZeroPad) )
#define IPhotoAcquireSettings_SetGroupTag(This,pszGroupTag) ( (This)->lpVtbl -> SetGroupTag(This,pszGroupTag) )
#define IPhotoAcquireSettings_SetAcquisitionTime(This,pftAcquisitionTime) ( (This)->lpVtbl -> SetAcquisitionTime(This,pftAcquisitionTime) )
#define IPhotoAcquireSettings_GetFlags(This,pdwPhotoAcquireFlags) ( (This)->lpVtbl -> GetFlags(This,pdwPhotoAcquireFlags) )
#define IPhotoAcquireSettings_GetOutputFilenameTemplate(This,pbstrTemplate) ( (This)->lpVtbl -> GetOutputFilenameTemplate(This,pbstrTemplate) )
#define IPhotoAcquireSettings_GetSequencePaddingWidth(This,pdwWidth) ( (This)->lpVtbl -> GetSequencePaddingWidth(This,pdwWidth) )
#define IPhotoAcquireSettings_GetSequenceZeroPadding(This,pfZeroPad) ( (This)->lpVtbl -> GetSequenceZeroPadding(This,pfZeroPad) )
#define IPhotoAcquireSettings_GetGroupTag(This,pbstrGroupTag) ( (This)->lpVtbl -> GetGroupTag(This,pbstrGroupTag) )
#define IPhotoAcquireSettings_GetAcquisitionTime(This,pftAcquisitionTime) ( (This)->lpVtbl -> GetAcquisitionTime(This,pftAcquisitionTime) )
#endif
#endif
#ifndef __IPhotoAcquireOptionsDialog_INTERFACE_DEFINED__
#define __IPhotoAcquireOptionsDialog_INTERFACE_DEFINED__
extern const IID IID_IPhotoAcquireOptionsDialog;
typedef struct IPhotoAcquireOptionsDialogVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IPhotoAcquireOptionsDialog * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IPhotoAcquireOptionsDialog * This);
	ULONG(STDMETHODCALLTYPE * Release) (IPhotoAcquireOptionsDialog * This);
	HRESULT(STDMETHODCALLTYPE * Initialize) (IPhotoAcquireOptionsDialog * This, LPCWSTR pszRegistryRoot);
	HRESULT(STDMETHODCALLTYPE * Create) (IPhotoAcquireOptionsDialog * This, HWND hWndParent, HWND * phWndDialog);
	HRESULT(STDMETHODCALLTYPE * Destroy) (IPhotoAcquireOptionsDialog * This);
	HRESULT(STDMETHODCALLTYPE * DoModal) (IPhotoAcquireOptionsDialog * This, HWND hWndParent, INT_PTR * ppnReturnCode);
	HRESULT(STDMETHODCALLTYPE * SaveData) (IPhotoAcquireOptionsDialog * This);
	END_INTERFACE
}  IPhotoAcquireOptionsDialogVtbl;
interface IPhotoAcquireOptionsDialog
{
	CONST_VTBL struct IPhotoAcquireOptionsDialogVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IPhotoAcquireOptionsDialog_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IPhotoAcquireOptionsDialog_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IPhotoAcquireOptionsDialog_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IPhotoAcquireOptionsDialog_Initialize(This,pszRegistryRoot) ( (This)->lpVtbl -> Initialize(This,pszRegistryRoot) )
#define IPhotoAcquireOptionsDialog_Create(This,hWndParent,phWndDialog) ( (This)->lpVtbl -> Create(This,hWndParent,phWndDialog) )
#define IPhotoAcquireOptionsDialog_Destroy(This) ( (This)->lpVtbl -> Destroy(This) )
#define IPhotoAcquireOptionsDialog_DoModal(This,hWndParent,ppnReturnCode) ( (This)->lpVtbl -> DoModal(This,hWndParent,ppnReturnCode) )
#define IPhotoAcquireOptionsDialog_SaveData(This) ( (This)->lpVtbl -> SaveData(This) )
#endif
#endif
#define DSF_WPD_DEVICES    0x00000001
#define DSF_WIA_CAMERAS    0x00000002
#define DSF_WIA_SCANNERS   0x00000004
#define DSF_STI_DEVICES    0x00000008
#define DSF_TWAIN_DEVICES  0x00000010
#define DSF_FS_DEVICES     0x00000020
#define DSF_DV_DEVICES     0x00000040
#define DSF_ALL_DEVICES    0x0000FFFF
#define DSF_CPL_MODE       0x00010000
#define DSF_SHOW_OFFLINE   0x00020000
extern RPC_IF_HANDLE __MIDL_itf_photoacquire_0000_0009_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_photoacquire_0000_0009_v0_0_s_ifspec;
#ifndef __IPhotoAcquireDeviceSelectionDialog_INTERFACE_DEFINED__
#define __IPhotoAcquireDeviceSelectionDialog_INTERFACE_DEFINED__
typedef enum tagDEVICE_SELECTION_DEVICE_TYPE
{
	DST_UNKNOWN_DEVICE = 0,
	DST_WPD_DEVICE = 0x1,
	DST_WIA_DEVICE = 0x2,
	DST_STI_DEVICE = 0x3,
	DSF_TWAIN_DEVICE = 0x4,
	DST_FS_DEVICE = 0x5,
	DST_DV_DEVICE = 0x6
} DEVICE_SELECTION_DEVICE_TYPE;
extern const IID IID_IPhotoAcquireDeviceSelectionDialog;
typedef struct IPhotoAcquireDeviceSelectionDialogVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IPhotoAcquireDeviceSelectionDialog * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IPhotoAcquireDeviceSelectionDialog * This);
	ULONG(STDMETHODCALLTYPE * Release) (IPhotoAcquireDeviceSelectionDialog * This);
	HRESULT(STDMETHODCALLTYPE * SetTitle) (IPhotoAcquireDeviceSelectionDialog * This, LPCWSTR pszTitle);
	HRESULT(STDMETHODCALLTYPE * SetSubmitButtonText) (IPhotoAcquireDeviceSelectionDialog * This, LPCWSTR pszSubmitButtonText);
	HRESULT(STDMETHODCALLTYPE * DoModal) (IPhotoAcquireDeviceSelectionDialog * This, HWND hWndParent, DWORD dwDeviceFlags, BSTR * pbstrDeviceId, DEVICE_SELECTION_DEVICE_TYPE * pnDeviceType);
	END_INTERFACE
}  IPhotoAcquireDeviceSelectionDialogVtbl;
interface IPhotoAcquireDeviceSelectionDialog
{
	CONST_VTBL struct IPhotoAcquireDeviceSelectionDialogVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IPhotoAcquireDeviceSelectionDialog_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IPhotoAcquireDeviceSelectionDialog_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IPhotoAcquireDeviceSelectionDialog_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IPhotoAcquireDeviceSelectionDialog_SetTitle(This,pszTitle) ( (This)->lpVtbl -> SetTitle(This,pszTitle) )
#define IPhotoAcquireDeviceSelectionDialog_SetSubmitButtonText(This,pszSubmitButtonText) ( (This)->lpVtbl -> SetSubmitButtonText(This,pszSubmitButtonText) )
#define IPhotoAcquireDeviceSelectionDialog_DoModal(This,hWndParent,dwDeviceFlags,pbstrDeviceId,pnDeviceType) ( (This)->lpVtbl -> DoModal(This,hWndParent,dwDeviceFlags,pbstrDeviceId,pnDeviceType) )
#endif
#endif
#define PAPS_PRESAVE   0x00000000
#define PAPS_POSTSAVE  0x00000001
#define PAPS_CLEANUP   0x00000002
extern RPC_IF_HANDLE __MIDL_itf_photoacquire_0000_0010_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_photoacquire_0000_0010_v0_0_s_ifspec;
#ifndef __IPhotoAcquirePlugin_INTERFACE_DEFINED__
#define __IPhotoAcquirePlugin_INTERFACE_DEFINED__
extern const IID IID_IPhotoAcquirePlugin;
typedef struct IPhotoAcquirePluginVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IPhotoAcquirePlugin * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IPhotoAcquirePlugin * This);
	ULONG(STDMETHODCALLTYPE * Release) (IPhotoAcquirePlugin * This);
	HRESULT(STDMETHODCALLTYPE * Initialize) (IPhotoAcquirePlugin * This, IPhotoAcquireSource * pPhotoAcquireSource, IPhotoAcquireProgressCB * pPhotoAcquireProgressCB);
	HRESULT(STDMETHODCALLTYPE * ProcessItem) (IPhotoAcquirePlugin * This, DWORD dwAcquireStage, IPhotoAcquireItem * pPhotoAcquireItem, IStream * pOriginalItemStream, LPCWSTR pszFinalFilename, IPropertyStore * pPropertyStore);
	HRESULT(STDMETHODCALLTYPE * TransferComplete) (IPhotoAcquirePlugin * This, HRESULT hr);
	HRESULT(STDMETHODCALLTYPE * DisplayConfigureDialog) (IPhotoAcquirePlugin * This, HWND hWndParent);
	END_INTERFACE
}  IPhotoAcquirePluginVtbl;
interface IPhotoAcquirePlugin
{
	CONST_VTBL struct IPhotoAcquirePluginVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IPhotoAcquirePlugin_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IPhotoAcquirePlugin_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IPhotoAcquirePlugin_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IPhotoAcquirePlugin_Initialize(This,pPhotoAcquireSource,pPhotoAcquireProgressCB) ( (This)->lpVtbl -> Initialize(This,pPhotoAcquireSource,pPhotoAcquireProgressCB) )
#define IPhotoAcquirePlugin_ProcessItem(This,dwAcquireStage,pPhotoAcquireItem,pOriginalItemStream,pszFinalFilename,pPropertyStore) ( (This)->lpVtbl -> ProcessItem(This,dwAcquireStage,pPhotoAcquireItem,pOriginalItemStream,pszFinalFilename,pPropertyStore) )
#define IPhotoAcquirePlugin_TransferComplete(This,hr) ( (This)->lpVtbl -> TransferComplete(This,hr) )
#define IPhotoAcquirePlugin_DisplayConfigureDialog(This,hWndParent) ( (This)->lpVtbl -> DisplayConfigureDialog(This,hWndParent) )
#endif
#endif
#ifndef __PhotoAcquireObjects_LIBRARY_DEFINED__
#define __PhotoAcquireObjects_LIBRARY_DEFINED__
extern const IID LIBID_PhotoAcquireObjects;
extern const CLSID CLSID_PhotoAcquire;
extern const CLSID CLSID_PhotoAcquireAutoPlayDropTarget;
extern const CLSID CLSID_PhotoAcquireAutoPlayHWEventHandler;
extern const CLSID CLSID_PhotoAcquireOptionsDialog;
extern const CLSID CLSID_PhotoProgressDialog;
extern const CLSID CLSID_PhotoAcquireDeviceSelectionDialog;
#endif
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
unsigned long __RPC_USER LPSAFEARRAY_UserSize(unsigned long *, unsigned long, LPSAFEARRAY *);
unsigned char *__RPC_USER LPSAFEARRAY_UserMarshal(unsigned long *, unsigned char *, LPSAFEARRAY *);
unsigned char *__RPC_USER LPSAFEARRAY_UserUnmarshal(unsigned long *, unsigned char *, LPSAFEARRAY *);
void __RPC_USER LPSAFEARRAY_UserFree(unsigned long *, LPSAFEARRAY *);
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
unsigned long __RPC_USER LPSAFEARRAY_UserSize64(unsigned long *, unsigned long, LPSAFEARRAY *);
unsigned char *__RPC_USER LPSAFEARRAY_UserMarshal64(unsigned long *, unsigned char *, LPSAFEARRAY *);
unsigned char *__RPC_USER LPSAFEARRAY_UserUnmarshal64(unsigned long *, unsigned char *, LPSAFEARRAY *);
void __RPC_USER LPSAFEARRAY_UserFree64(unsigned long *, LPSAFEARRAY *);
#endif

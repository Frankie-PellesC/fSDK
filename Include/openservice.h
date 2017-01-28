/*+@@file@@----------------------------------------------------------------*//*!
 \file		openservice.h
 \par Description 
            Extension and update of headers for PellesC compiler suite.
 \par Project: 
            PellesC Headers extension
 \date		Created  on Sun Sep 11 23:59:20 2016
 \date		Modified on Sun Sep 11 23:59:20 2016
 \author	frankie
\*//*-@@file@@----------------------------------------------------------------*/

#ifndef __REQUIRED_RPCNDR_H_VERSION__
#define __REQUIRED_RPCNDR_H_VERSION__ 475
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
#ifndef __openservice_h__
#define __openservice_h__
#if __POCC__ >= 500
#pragma once
#endif
#ifndef __IOpenServiceActivityInput_FWD_DEFINED__
#define __IOpenServiceActivityInput_FWD_DEFINED__
typedef interface IOpenServiceActivityInput IOpenServiceActivityInput;
#endif
#ifndef __IOpenServiceActivityOutputContext_FWD_DEFINED__
#define __IOpenServiceActivityOutputContext_FWD_DEFINED__
typedef interface IOpenServiceActivityOutputContext IOpenServiceActivityOutputContext;
#endif
#ifndef __IOpenService_FWD_DEFINED__
#define __IOpenService_FWD_DEFINED__
typedef interface IOpenService IOpenService;
#endif
#ifndef __IOpenServiceManager_FWD_DEFINED__
#define __IOpenServiceManager_FWD_DEFINED__
typedef interface IOpenServiceManager IOpenServiceManager;
#endif
#ifndef __OpenServiceManager_FWD_DEFINED__
#define __OpenServiceManager_FWD_DEFINED__
typedef struct OpenServiceManager OpenServiceManager;
#endif
#ifndef __OpenServiceActivityManager_FWD_DEFINED__
#define __OpenServiceActivityManager_FWD_DEFINED__
typedef struct OpenServiceActivityManager OpenServiceActivityManager;
#endif
#ifndef __IOpenServiceActivity_FWD_DEFINED__
#define __IOpenServiceActivity_FWD_DEFINED__
typedef interface IOpenServiceActivity IOpenServiceActivity;
#endif
#ifndef __IEnumOpenServiceActivity_FWD_DEFINED__
#define __IEnumOpenServiceActivity_FWD_DEFINED__
typedef interface IEnumOpenServiceActivity IEnumOpenServiceActivity;
#endif
#ifndef __IOpenServiceActivityCategory_FWD_DEFINED__
#define __IOpenServiceActivityCategory_FWD_DEFINED__
typedef interface IOpenServiceActivityCategory IOpenServiceActivityCategory;
#endif
#ifndef __IEnumOpenServiceActivityCategory_FWD_DEFINED__
#define __IEnumOpenServiceActivityCategory_FWD_DEFINED__
typedef interface IEnumOpenServiceActivityCategory IEnumOpenServiceActivityCategory;
#endif
#ifndef __IOpenServiceActivityManager_FWD_DEFINED__
#define __IOpenServiceActivityManager_FWD_DEFINED__
typedef interface IOpenServiceActivityManager IOpenServiceActivityManager;
#endif
#include <objidl.h>
#include <oleidl.h>
#include <mshtmlC.h>
#include <exdisp.h>
typedef enum OpenServiceErrors
{
	OS_E_NOTFOUND = 0x80030002,
	OS_E_NOTSUPPORTED = 0x80004021,
	OS_E_CANCELLED = 0x80002ef1,
	OS_E_GPDISABLED = 0xc00d0bdc
} OpenServiceErrors;
typedef enum OpenServiceActivityContentType
{
	ActivityContentNone = -1,
	ActivityContentDocument = (ActivityContentNone + 1),
	ActivityContentSelection = (ActivityContentDocument + 1),
	ActivityContentLink = (ActivityContentSelection + 1),
	ActivityContentCount = (ActivityContentLink + 1)
} OpenServiceActivityContentType;
extern RPC_IF_HANDLE __MIDL_itf_openservice_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_openservice_0000_0000_v0_0_s_ifspec;
#ifndef __IOpenServiceActivityInput_INTERFACE_DEFINED__
#define __IOpenServiceActivityInput_INTERFACE_DEFINED__
extern const IID IID_IOpenServiceActivityInput;
typedef struct IOpenServiceActivityInputVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IOpenServiceActivityInput * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IOpenServiceActivityInput * This);
	ULONG(STDMETHODCALLTYPE * Release) (IOpenServiceActivityInput * This);
	HRESULT(STDMETHODCALLTYPE * GetVariable) (IOpenServiceActivityInput * This, LPCWSTR pwzVariableName, LPCWSTR pwzVariableType, BSTR * pbstrVariableContent);
	HRESULT(STDMETHODCALLTYPE * HasVariable) (IOpenServiceActivityInput * This, LPCWSTR pwzVariableName, LPCWSTR pwzVariableType, BOOL * pfHasVariable);
	HRESULT(STDMETHODCALLTYPE * GetType) (IOpenServiceActivityInput * This, OpenServiceActivityContentType * pType);
	END_INTERFACE
}  IOpenServiceActivityInputVtbl;
interface IOpenServiceActivityInput
{
	CONST_VTBL struct IOpenServiceActivityInputVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IOpenServiceActivityInput_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IOpenServiceActivityInput_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IOpenServiceActivityInput_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IOpenServiceActivityInput_GetVariable(This,pwzVariableName,pwzVariableType,pbstrVariableContent) ( (This)->lpVtbl -> GetVariable(This,pwzVariableName,pwzVariableType,pbstrVariableContent) )
#define IOpenServiceActivityInput_HasVariable(This,pwzVariableName,pwzVariableType,pfHasVariable) ( (This)->lpVtbl -> HasVariable(This,pwzVariableName,pwzVariableType,pfHasVariable) )
#define IOpenServiceActivityInput_GetType(This,pType) ( (This)->lpVtbl -> GetType(This,pType) )
#endif
#endif
#ifndef __IOpenServiceActivityOutputContext_INTERFACE_DEFINED__
#define __IOpenServiceActivityOutputContext_INTERFACE_DEFINED__
extern const IID IID_IOpenServiceActivityOutputContext;
typedef struct IOpenServiceActivityOutputContextVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IOpenServiceActivityOutputContext * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IOpenServiceActivityOutputContext * This);
	ULONG(STDMETHODCALLTYPE * Release) (IOpenServiceActivityOutputContext * This);
	HRESULT(STDMETHODCALLTYPE * Navigate) (IOpenServiceActivityOutputContext * This, LPCWSTR pwzUri, LPCWSTR pwzMethod, LPCWSTR pwzHeaders, IStream * pPostData);
	HRESULT(STDMETHODCALLTYPE * CanNavigate) (IOpenServiceActivityOutputContext * This, LPCWSTR pwzUri, LPCWSTR pwzMethod, LPCWSTR pwzHeaders, IStream * pPostData, BOOL * pfCanNavigate);
	END_INTERFACE
}  IOpenServiceActivityOutputContextVtbl;
interface IOpenServiceActivityOutputContext
{
	CONST_VTBL struct IOpenServiceActivityOutputContextVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IOpenServiceActivityOutputContext_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IOpenServiceActivityOutputContext_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IOpenServiceActivityOutputContext_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IOpenServiceActivityOutputContext_Navigate(This,pwzUri,pwzMethod,pwzHeaders,pPostData) ( (This)->lpVtbl -> Navigate(This,pwzUri,pwzMethod,pwzHeaders,pPostData) )
#define IOpenServiceActivityOutputContext_CanNavigate(This,pwzUri,pwzMethod,pwzHeaders,pPostData,pfCanNavigate) ( (This)->lpVtbl -> CanNavigate(This,pwzUri,pwzMethod,pwzHeaders,pPostData,pfCanNavigate) )
#endif
#endif
#ifndef __IOpenService_INTERFACE_DEFINED__
#define __IOpenService_INTERFACE_DEFINED__
extern const IID IID_IOpenService;
typedef struct IOpenServiceVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IOpenService * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IOpenService * This);
	ULONG(STDMETHODCALLTYPE * Release) (IOpenService * This);
	HRESULT(STDMETHODCALLTYPE * IsDefault) (IOpenService * This, BOOL * pfIsDefault);
	HRESULT(STDMETHODCALLTYPE * SetDefault) (IOpenService * This, BOOL fDefault, HWND hwnd);
	HRESULT(STDMETHODCALLTYPE * GetID) (IOpenService * This, BSTR * pbstrID);
	END_INTERFACE
}  IOpenServiceVtbl;
interface IOpenService
{
	CONST_VTBL struct IOpenServiceVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IOpenService_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IOpenService_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IOpenService_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IOpenService_IsDefault(This,pfIsDefault) ( (This)->lpVtbl -> IsDefault(This,pfIsDefault) )
#define IOpenService_SetDefault(This,fDefault,hwnd) ( (This)->lpVtbl -> SetDefault(This,fDefault,hwnd) )
#define IOpenService_GetID(This,pbstrID) ( (This)->lpVtbl -> GetID(This,pbstrID) )
#endif
#endif
#ifndef __IOpenServiceManager_INTERFACE_DEFINED__
#define __IOpenServiceManager_INTERFACE_DEFINED__
extern const IID IID_IOpenServiceManager;
typedef struct IOpenServiceManagerVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IOpenServiceManager * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IOpenServiceManager * This);
	ULONG(STDMETHODCALLTYPE * Release) (IOpenServiceManager * This);
	HRESULT(STDMETHODCALLTYPE * InstallService) (IOpenServiceManager * This, LPCWSTR pwzServiceUrl, IOpenService ** ppService);
	HRESULT(STDMETHODCALLTYPE * UninstallService) (IOpenServiceManager * This, IOpenService * pService);
	HRESULT(STDMETHODCALLTYPE * GetServiceByID) (IOpenServiceManager * This, LPCWSTR pwzID, IOpenService ** ppService);
	END_INTERFACE
}  IOpenServiceManagerVtbl;
interface IOpenServiceManager
{
	CONST_VTBL struct IOpenServiceManagerVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IOpenServiceManager_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IOpenServiceManager_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IOpenServiceManager_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IOpenServiceManager_InstallService(This,pwzServiceUrl,ppService) ( (This)->lpVtbl -> InstallService(This,pwzServiceUrl,ppService) )
#define IOpenServiceManager_UninstallService(This,pService) ( (This)->lpVtbl -> UninstallService(This,pService) )
#define IOpenServiceManager_GetServiceByID(This,pwzID,ppService) ( (This)->lpVtbl -> GetServiceByID(This,pwzID,ppService) )
#endif
#endif
#ifndef __IEOpenServiceObjects_LIBRARY_DEFINED__
#define __IEOpenServiceObjects_LIBRARY_DEFINED__
extern const IID LIBID_IEOpenServiceObjects;
extern const CLSID CLSID_OpenServiceManager;
extern const CLSID CLSID_OpenServiceActivityManager;
#endif
#ifndef __IOpenServiceActivity_INTERFACE_DEFINED__
#define __IOpenServiceActivity_INTERFACE_DEFINED__
extern const IID IID_IOpenServiceActivity;
typedef struct IOpenServiceActivityVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IOpenServiceActivity * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IOpenServiceActivity * This);
	ULONG(STDMETHODCALLTYPE * Release) (IOpenServiceActivity * This);
	HRESULT(STDMETHODCALLTYPE * IsDefault) (IOpenServiceActivity * This, BOOL * pfIsDefault);
	HRESULT(STDMETHODCALLTYPE * SetDefault) (IOpenServiceActivity * This, BOOL fDefault, HWND hwnd);
	HRESULT(STDMETHODCALLTYPE * GetID) (IOpenServiceActivity * This, BSTR * pbstrID);
	HRESULT(STDMETHODCALLTYPE * Execute) (IOpenServiceActivity * This, IOpenServiceActivityInput * pInput, IOpenServiceActivityOutputContext * pOutput);
	HRESULT(STDMETHODCALLTYPE * CanExecute) (IOpenServiceActivity * This, IOpenServiceActivityInput * pInput, IOpenServiceActivityOutputContext * pOutput, BOOL * pfCanExecute);
	HRESULT(STDMETHODCALLTYPE * CanExecuteType) (IOpenServiceActivity * This, OpenServiceActivityContentType type, BOOL * pfCanExecute);
	HRESULT(STDMETHODCALLTYPE * Preview) (IOpenServiceActivity * This, IOpenServiceActivityInput * pInput, IOpenServiceActivityOutputContext * pOutput);
	HRESULT(STDMETHODCALLTYPE * CanPreview) (IOpenServiceActivity * This, IOpenServiceActivityInput * pInput, IOpenServiceActivityOutputContext * pOutput, BOOL * pfCanPreview);
	HRESULT(STDMETHODCALLTYPE * CanPreviewType) (IOpenServiceActivity * This, OpenServiceActivityContentType type, BOOL * pfCanPreview);
	HRESULT(STDMETHODCALLTYPE * GetStatusText) (IOpenServiceActivity * This, IOpenServiceActivityInput * pInput, BSTR * pbstrStatusText);
	HRESULT(STDMETHODCALLTYPE * GetHomepageUrl) (IOpenServiceActivity * This, BSTR * pbstrHomepageUrl);
	HRESULT(STDMETHODCALLTYPE * GetDisplayName) (IOpenServiceActivity * This, BSTR * pbstrDisplayName);
	HRESULT(STDMETHODCALLTYPE * GetDescription) (IOpenServiceActivity * This, BSTR * pbstrDescription);
	HRESULT(STDMETHODCALLTYPE * GetCategoryName) (IOpenServiceActivity * This, BSTR * pbstrCategoryName);
	HRESULT(STDMETHODCALLTYPE * GetIconPath) (IOpenServiceActivity * This, BSTR * pbstrIconPath);
	HRESULT(STDMETHODCALLTYPE * GetIcon) (IOpenServiceActivity * This, BOOL fSmallIcon, HICON * phIcon);
	HRESULT(STDMETHODCALLTYPE * GetDescriptionFilePath) (IOpenServiceActivity * This, BSTR * pbstrXmlPath);
	HRESULT(STDMETHODCALLTYPE * GetDownloadUrl) (IOpenServiceActivity * This, BSTR * pbstrXmlUri);
	HRESULT(STDMETHODCALLTYPE * GetInstallUrl) (IOpenServiceActivity * This, BSTR * pbstrInstallUri);
	HRESULT(STDMETHODCALLTYPE * IsEnabled) (IOpenServiceActivity * This, BOOL * pfIsEnabled);
	HRESULT(STDMETHODCALLTYPE * SetEnabled) (IOpenServiceActivity * This, BOOL fEnable);
	END_INTERFACE
}  IOpenServiceActivityVtbl;
interface IOpenServiceActivity
{
	CONST_VTBL struct IOpenServiceActivityVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IOpenServiceActivity_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IOpenServiceActivity_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IOpenServiceActivity_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IOpenServiceActivity_IsDefault(This,pfIsDefault) ( (This)->lpVtbl -> IsDefault(This,pfIsDefault) )
#define IOpenServiceActivity_SetDefault(This,fDefault,hwnd) ( (This)->lpVtbl -> SetDefault(This,fDefault,hwnd) )
#define IOpenServiceActivity_GetID(This,pbstrID) ( (This)->lpVtbl -> GetID(This,pbstrID) )
#define IOpenServiceActivity_Execute(This,pInput,pOutput) ( (This)->lpVtbl -> Execute(This,pInput,pOutput) )
#define IOpenServiceActivity_CanExecute(This,pInput,pOutput,pfCanExecute) ( (This)->lpVtbl -> CanExecute(This,pInput,pOutput,pfCanExecute) )
#define IOpenServiceActivity_CanExecuteType(This,type,pfCanExecute) ( (This)->lpVtbl -> CanExecuteType(This,type,pfCanExecute) )
#define IOpenServiceActivity_Preview(This,pInput,pOutput) ( (This)->lpVtbl -> Preview(This,pInput,pOutput) )
#define IOpenServiceActivity_CanPreview(This,pInput,pOutput,pfCanPreview) ( (This)->lpVtbl -> CanPreview(This,pInput,pOutput,pfCanPreview) )
#define IOpenServiceActivity_CanPreviewType(This,type,pfCanPreview) ( (This)->lpVtbl -> CanPreviewType(This,type,pfCanPreview) )
#define IOpenServiceActivity_GetStatusText(This,pInput,pbstrStatusText) ( (This)->lpVtbl -> GetStatusText(This,pInput,pbstrStatusText) )
#define IOpenServiceActivity_GetHomepageUrl(This,pbstrHomepageUrl) ( (This)->lpVtbl -> GetHomepageUrl(This,pbstrHomepageUrl) )
#define IOpenServiceActivity_GetDisplayName(This,pbstrDisplayName) ( (This)->lpVtbl -> GetDisplayName(This,pbstrDisplayName) )
#define IOpenServiceActivity_GetDescription(This,pbstrDescription) ( (This)->lpVtbl -> GetDescription(This,pbstrDescription) )
#define IOpenServiceActivity_GetCategoryName(This,pbstrCategoryName) ( (This)->lpVtbl -> GetCategoryName(This,pbstrCategoryName) )
#define IOpenServiceActivity_GetIconPath(This,pbstrIconPath) ( (This)->lpVtbl -> GetIconPath(This,pbstrIconPath) )
#define IOpenServiceActivity_GetIcon(This,fSmallIcon,phIcon) ( (This)->lpVtbl -> GetIcon(This,fSmallIcon,phIcon) )
#define IOpenServiceActivity_GetDescriptionFilePath(This,pbstrXmlPath) ( (This)->lpVtbl -> GetDescriptionFilePath(This,pbstrXmlPath) )
#define IOpenServiceActivity_GetDownloadUrl(This,pbstrXmlUri) ( (This)->lpVtbl -> GetDownloadUrl(This,pbstrXmlUri) )
#define IOpenServiceActivity_GetInstallUrl(This,pbstrInstallUri) ( (This)->lpVtbl -> GetInstallUrl(This,pbstrInstallUri) )
#define IOpenServiceActivity_IsEnabled(This,pfIsEnabled) ( (This)->lpVtbl -> IsEnabled(This,pfIsEnabled) )
#define IOpenServiceActivity_SetEnabled(This,fEnable) ( (This)->lpVtbl -> SetEnabled(This,fEnable) )
#endif
#endif
#ifndef __IEnumOpenServiceActivity_INTERFACE_DEFINED__
#define __IEnumOpenServiceActivity_INTERFACE_DEFINED__
typedef IOpenServiceActivity *EnumActivityType;
extern const IID IID_IEnumOpenServiceActivity;
typedef struct IEnumOpenServiceActivityVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IEnumOpenServiceActivity * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IEnumOpenServiceActivity * This);
	ULONG(STDMETHODCALLTYPE * Release) (IEnumOpenServiceActivity * This);
	HRESULT(STDMETHODCALLTYPE * Next) (IEnumOpenServiceActivity * This, ULONG celt, EnumActivityType * rgelt, ULONG * pceltFetched);
	HRESULT(STDMETHODCALLTYPE * Skip) (IEnumOpenServiceActivity * This, ULONG celt);
	HRESULT(STDMETHODCALLTYPE * Reset) (IEnumOpenServiceActivity * This);
	HRESULT(STDMETHODCALLTYPE * Clone) (IEnumOpenServiceActivity * This, IEnumOpenServiceActivity ** ppenum);
	END_INTERFACE
}  IEnumOpenServiceActivityVtbl;
interface IEnumOpenServiceActivity
{
	CONST_VTBL struct IEnumOpenServiceActivityVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IEnumOpenServiceActivity_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IEnumOpenServiceActivity_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IEnumOpenServiceActivity_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IEnumOpenServiceActivity_Next(This,celt,rgelt,pceltFetched) ( (This)->lpVtbl -> Next(This,celt,rgelt,pceltFetched) )
#define IEnumOpenServiceActivity_Skip(This,celt) ( (This)->lpVtbl -> Skip(This,celt) )
#define IEnumOpenServiceActivity_Reset(This) ( (This)->lpVtbl -> Reset(This) )
#define IEnumOpenServiceActivity_Clone(This,ppenum) ( (This)->lpVtbl -> Clone(This,ppenum) )
#endif
#endif
#ifndef __IOpenServiceActivityCategory_INTERFACE_DEFINED__
#define __IOpenServiceActivityCategory_INTERFACE_DEFINED__
extern const IID IID_IOpenServiceActivityCategory;
typedef struct IOpenServiceActivityCategoryVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IOpenServiceActivityCategory * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IOpenServiceActivityCategory * This);
	ULONG(STDMETHODCALLTYPE * Release) (IOpenServiceActivityCategory * This);
	HRESULT(STDMETHODCALLTYPE * HasDefaultActivity) (IOpenServiceActivityCategory * This, BOOL * pfHasDefaultActivity);
	HRESULT(STDMETHODCALLTYPE * GetDefaultActivity) (IOpenServiceActivityCategory * This, IOpenServiceActivity ** ppDefaultActivity);
	HRESULT(STDMETHODCALLTYPE * SetDefaultActivity) (IOpenServiceActivityCategory * This, IOpenServiceActivity * pActivity, HWND hwnd);
	HRESULT(STDMETHODCALLTYPE * GetName) (IOpenServiceActivityCategory * This, BSTR * pbstrName);
	HRESULT(STDMETHODCALLTYPE * GetActivityEnumerator) (IOpenServiceActivityCategory * This, IOpenServiceActivityInput * pInput, IOpenServiceActivityOutputContext * pOutput, IEnumOpenServiceActivity ** ppEnumActivity);
	END_INTERFACE
}  IOpenServiceActivityCategoryVtbl;
interface IOpenServiceActivityCategory
{
	CONST_VTBL struct IOpenServiceActivityCategoryVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IOpenServiceActivityCategory_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IOpenServiceActivityCategory_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IOpenServiceActivityCategory_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IOpenServiceActivityCategory_HasDefaultActivity(This,pfHasDefaultActivity) ( (This)->lpVtbl -> HasDefaultActivity(This,pfHasDefaultActivity) )
#define IOpenServiceActivityCategory_GetDefaultActivity(This,ppDefaultActivity) ( (This)->lpVtbl -> GetDefaultActivity(This,ppDefaultActivity) )
#define IOpenServiceActivityCategory_SetDefaultActivity(This,pActivity,hwnd) ( (This)->lpVtbl -> SetDefaultActivity(This,pActivity,hwnd) )
#define IOpenServiceActivityCategory_GetName(This,pbstrName) ( (This)->lpVtbl -> GetName(This,pbstrName) )
#define IOpenServiceActivityCategory_GetActivityEnumerator(This,pInput,pOutput,ppEnumActivity) ( (This)->lpVtbl -> GetActivityEnumerator(This,pInput,pOutput,ppEnumActivity) )
#endif
#endif
#ifndef __IEnumOpenServiceActivityCategory_INTERFACE_DEFINED__
#define __IEnumOpenServiceActivityCategory_INTERFACE_DEFINED__
typedef IOpenServiceActivityCategory *EnumActivityVerbType;
extern const IID IID_IEnumOpenServiceActivityCategory;
typedef struct IEnumOpenServiceActivityCategoryVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IEnumOpenServiceActivityCategory * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IEnumOpenServiceActivityCategory * This);
	ULONG(STDMETHODCALLTYPE * Release) (IEnumOpenServiceActivityCategory * This);
	HRESULT(STDMETHODCALLTYPE * Next) (IEnumOpenServiceActivityCategory * This, ULONG celt, EnumActivityVerbType * rgelt, ULONG * pceltFetched);
	HRESULT(STDMETHODCALLTYPE * Skip) (IEnumOpenServiceActivityCategory * This, ULONG celt);
	HRESULT(STDMETHODCALLTYPE * Reset) (IEnumOpenServiceActivityCategory * This);
	HRESULT(STDMETHODCALLTYPE * Clone) (IEnumOpenServiceActivityCategory * This, IEnumOpenServiceActivityCategory ** ppenum);
	END_INTERFACE
}  IEnumOpenServiceActivityCategoryVtbl;
interface IEnumOpenServiceActivityCategory
{
	CONST_VTBL struct IEnumOpenServiceActivityCategoryVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IEnumOpenServiceActivityCategory_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IEnumOpenServiceActivityCategory_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IEnumOpenServiceActivityCategory_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IEnumOpenServiceActivityCategory_Next(This,celt,rgelt,pceltFetched) ( (This)->lpVtbl -> Next(This,celt,rgelt,pceltFetched) )
#define IEnumOpenServiceActivityCategory_Skip(This,celt) ( (This)->lpVtbl -> Skip(This,celt) )
#define IEnumOpenServiceActivityCategory_Reset(This) ( (This)->lpVtbl -> Reset(This) )
#define IEnumOpenServiceActivityCategory_Clone(This,ppenum) ( (This)->lpVtbl -> Clone(This,ppenum) )
#endif
#endif
#ifndef __IOpenServiceActivityManager_INTERFACE_DEFINED__
#define __IOpenServiceActivityManager_INTERFACE_DEFINED__
extern const IID IID_IOpenServiceActivityManager;
typedef struct IOpenServiceActivityManagerVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IOpenServiceActivityManager * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IOpenServiceActivityManager * This);
	ULONG(STDMETHODCALLTYPE * Release) (IOpenServiceActivityManager * This);
	HRESULT(STDMETHODCALLTYPE * GetCategoryEnumerator) (IOpenServiceActivityManager * This, OpenServiceActivityContentType eType, IEnumOpenServiceActivityCategory ** ppEnum);
	HRESULT(STDMETHODCALLTYPE * GetActivityByID) (IOpenServiceActivityManager * This, LPCWSTR pwzActivityID, IOpenServiceActivity ** ppActivity);
	HRESULT(STDMETHODCALLTYPE * GetActivityByHomepageAndCategory) (IOpenServiceActivityManager * This, LPCWSTR pwzHomepage, LPCWSTR pwzCategory, IOpenServiceActivity ** ppActivity);
	HRESULT(STDMETHODCALLTYPE * GetVersionCookie) (IOpenServiceActivityManager * This, DWORD * pdwVersionCookie);
	END_INTERFACE
}  IOpenServiceActivityManagerVtbl;
interface IOpenServiceActivityManager
{
	CONST_VTBL struct IOpenServiceActivityManagerVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IOpenServiceActivityManager_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IOpenServiceActivityManager_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IOpenServiceActivityManager_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IOpenServiceActivityManager_GetCategoryEnumerator(This,eType,ppEnum) ( (This)->lpVtbl -> GetCategoryEnumerator(This,eType,ppEnum) )
#define IOpenServiceActivityManager_GetActivityByID(This,pwzActivityID,ppActivity) ( (This)->lpVtbl -> GetActivityByID(This,pwzActivityID,ppActivity) )
#define IOpenServiceActivityManager_GetActivityByHomepageAndCategory(This,pwzHomepage,pwzCategory,ppActivity) ( (This)->lpVtbl -> GetActivityByHomepageAndCategory(This,pwzHomepage,pwzCategory,ppActivity) )
#define IOpenServiceActivityManager_GetVersionCookie(This,pdwVersionCookie) ( (This)->lpVtbl -> GetVersionCookie(This,pdwVersionCookie) )
#endif
#endif
unsigned long __RPC_USER BSTR_UserSize(unsigned long *, unsigned long, BSTR *);
unsigned char *__RPC_USER BSTR_UserMarshal(unsigned long *, unsigned char *, BSTR *);
unsigned char *__RPC_USER BSTR_UserUnmarshal(unsigned long *, unsigned char *, BSTR *);
void __RPC_USER BSTR_UserFree(unsigned long *, BSTR *);
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
unsigned long __RPC_USER HICON_UserSize64(unsigned long *, unsigned long, HICON *);
unsigned char *__RPC_USER HICON_UserMarshal64(unsigned long *, unsigned char *, HICON *);
unsigned char *__RPC_USER HICON_UserUnmarshal64(unsigned long *, unsigned char *, HICON *);
void __RPC_USER HICON_UserFree64(unsigned long *, HICON *);
unsigned long __RPC_USER HWND_UserSize64(unsigned long *, unsigned long, HWND *);
unsigned char *__RPC_USER HWND_UserMarshal64(unsigned long *, unsigned char *, HWND *);
unsigned char *__RPC_USER HWND_UserUnmarshal64(unsigned long *, unsigned char *, HWND *);
void __RPC_USER HWND_UserFree64(unsigned long *, HWND *);
#endif

/*+@@file@@----------------------------------------------------------------*//*!
 \file		WindowsSideShowAPI.h
 \par Description 
            Extension and update of headers for PellesC compiler suite.
 \par Project: 
            PellesC Headers extension
 \date		Created  on Sun Sep  4 16:47:57 2016
 \date		Modified on Sun Sep  4 16:47:57 2016
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
#ifndef __windowssideshowapi_h__
#define __windowssideshowapi_h__
#if __POCC__ >= 500
#pragma once
#endif
#ifndef __ISideShowSession_FWD_DEFINED__
#define __ISideShowSession_FWD_DEFINED__
typedef interface ISideShowSession ISideShowSession;
#endif
#ifndef __ISideShowNotificationManager_FWD_DEFINED__
#define __ISideShowNotificationManager_FWD_DEFINED__
typedef interface ISideShowNotificationManager ISideShowNotificationManager;
#endif
#ifndef __ISideShowNotification_FWD_DEFINED__
#define __ISideShowNotification_FWD_DEFINED__
typedef interface ISideShowNotification ISideShowNotification;
#endif
#ifndef __ISideShowContentManager_FWD_DEFINED__
#define __ISideShowContentManager_FWD_DEFINED__
typedef interface ISideShowContentManager ISideShowContentManager;
#endif
#ifndef __ISideShowContent_FWD_DEFINED__
#define __ISideShowContent_FWD_DEFINED__
typedef interface ISideShowContent ISideShowContent;
#endif
#ifndef __ISideShowEvents_FWD_DEFINED__
#define __ISideShowEvents_FWD_DEFINED__
typedef interface ISideShowEvents ISideShowEvents;
#endif
#ifndef __ISideShowCapabilities_FWD_DEFINED__
#define __ISideShowCapabilities_FWD_DEFINED__
typedef interface ISideShowCapabilities ISideShowCapabilities;
#endif
#ifndef __ISideShowCapabilitiesCollection_FWD_DEFINED__
#define __ISideShowCapabilitiesCollection_FWD_DEFINED__
typedef interface ISideShowCapabilitiesCollection ISideShowCapabilitiesCollection;
#endif
#ifndef __ISideShowBulkCapabilities_FWD_DEFINED__
#define __ISideShowBulkCapabilities_FWD_DEFINED__
typedef interface ISideShowBulkCapabilities ISideShowBulkCapabilities;
#endif
#ifndef __ISideShowKeyCollection_FWD_DEFINED__
#define __ISideShowKeyCollection_FWD_DEFINED__
typedef interface ISideShowKeyCollection ISideShowKeyCollection;
#endif
#ifndef __ISideShowPropVariantCollection_FWD_DEFINED__
#define __ISideShowPropVariantCollection_FWD_DEFINED__
typedef interface ISideShowPropVariantCollection ISideShowPropVariantCollection;
#endif
#ifndef __SideShowSession_FWD_DEFINED__
#define __SideShowSession_FWD_DEFINED__
typedef struct SideShowSession SideShowSession;
#endif
#ifndef __SideShowNotification_FWD_DEFINED__
#define __SideShowNotification_FWD_DEFINED__
typedef struct SideShowNotification SideShowNotification;
#endif
#ifndef __SideShowKeyCollection_FWD_DEFINED__
#define __SideShowKeyCollection_FWD_DEFINED__
typedef struct SideShowKeyCollection SideShowKeyCollection;
#endif
#ifndef __SideShowPropVariantCollection_FWD_DEFINED__
#define __SideShowPropVariantCollection_FWD_DEFINED__
typedef struct SideShowPropVariantCollection SideShowPropVariantCollection;
#endif
#include "oaidl.h"
#include "propsys.h"
#if (_WIN32_WINNT >= 0x0600)
typedef GUID APPLICATION_ID;
typedef GUID ENDPOINT_ID;
typedef LPWSTR DEVICE_ID;
typedef REFGUID REFAPPLICATION_ID;
typedef REFGUID REFENDPOINT_ID;
typedef ENDPOINT_ID *PENDPOINT_ID;
typedef APPLICATION_ID *PAPPLICATION_ID;
typedef DEVICE_ID *PDEVICE_ID;
typedef unsigned long CONTENT_ID;
typedef CONTENT_ID *PCONTENT_ID;
typedef unsigned long NOTIFICATION_ID;
typedef NOTIFICATION_ID *PNOTIFICATION_ID;
extern RPC_IF_HANDLE __MIDL_itf_windowssideshowapi_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_windowssideshowapi_0000_0000_v0_0_s_ifspec;
#ifndef __ISideShowSession_INTERFACE_DEFINED__
#define __ISideShowSession_INTERFACE_DEFINED__
extern const IID IID_ISideShowSession;
typedef struct ISideShowSessionVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (ISideShowSession * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (ISideShowSession * This);
	ULONG(STDMETHODCALLTYPE * Release) (ISideShowSession * This);
	HRESULT(STDMETHODCALLTYPE * RegisterContent) (ISideShowSession * This, REFAPPLICATION_ID in_applicationId, REFENDPOINT_ID in_endpointId, ISideShowContentManager ** out_ppIContent);
	HRESULT(STDMETHODCALLTYPE * RegisterNotifications) (ISideShowSession * This, REFAPPLICATION_ID in_applicationId, ISideShowNotificationManager ** out_ppINotification);
	END_INTERFACE
}  ISideShowSessionVtbl;
interface ISideShowSession
{
	CONST_VTBL struct ISideShowSessionVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define ISideShowSession_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define ISideShowSession_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define ISideShowSession_Release(This) ( (This)->lpVtbl -> Release(This) )
#define ISideShowSession_RegisterContent(This,in_applicationId,in_endpointId,out_ppIContent) ( (This)->lpVtbl -> RegisterContent(This,in_applicationId,in_endpointId,out_ppIContent) )
#define ISideShowSession_RegisterNotifications(This,in_applicationId,out_ppINotification) ( (This)->lpVtbl -> RegisterNotifications(This,in_applicationId,out_ppINotification) )
#endif
#endif
#ifndef __ISideShowNotificationManager_INTERFACE_DEFINED__
#define __ISideShowNotificationManager_INTERFACE_DEFINED__
extern const IID IID_ISideShowNotificationManager;
typedef struct ISideShowNotificationManagerVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (ISideShowNotificationManager * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (ISideShowNotificationManager * This);
	ULONG(STDMETHODCALLTYPE * Release) (ISideShowNotificationManager * This);
	HRESULT(STDMETHODCALLTYPE * Show) (ISideShowNotificationManager * This, ISideShowNotification * in_pINotification);
	HRESULT(STDMETHODCALLTYPE * Revoke) (ISideShowNotificationManager * This, const NOTIFICATION_ID in_notificationId);
	HRESULT(STDMETHODCALLTYPE * RevokeAll) (ISideShowNotificationManager * This);
	END_INTERFACE
}  ISideShowNotificationManagerVtbl;
interface ISideShowNotificationManager
{
	CONST_VTBL struct ISideShowNotificationManagerVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define ISideShowNotificationManager_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define ISideShowNotificationManager_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define ISideShowNotificationManager_Release(This) ( (This)->lpVtbl -> Release(This) )
#define ISideShowNotificationManager_Show(This,in_pINotification) ( (This)->lpVtbl -> Show(This,in_pINotification) )
#define ISideShowNotificationManager_Revoke(This,in_notificationId) ( (This)->lpVtbl -> Revoke(This,in_notificationId) )
#define ISideShowNotificationManager_RevokeAll(This) ( (This)->lpVtbl -> RevokeAll(This) )
#endif
#endif
#ifndef __ISideShowNotification_INTERFACE_DEFINED__
#define __ISideShowNotification_INTERFACE_DEFINED__
extern const IID IID_ISideShowNotification;
typedef struct ISideShowNotificationVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (ISideShowNotification * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (ISideShowNotification * This);
	ULONG(STDMETHODCALLTYPE * Release) (ISideShowNotification * This);
	HRESULT(STDMETHODCALLTYPE * get_NotificationId) (ISideShowNotification * This, PNOTIFICATION_ID out_pNotificationId);
	HRESULT(STDMETHODCALLTYPE * put_NotificationId) (ISideShowNotification * This, NOTIFICATION_ID in_notificationId);
	HRESULT(STDMETHODCALLTYPE * get_Title) (ISideShowNotification * This, LPWSTR * out_ppwszTitle);
	HRESULT(STDMETHODCALLTYPE * put_Title) (ISideShowNotification * This, LPWSTR in_pwszTitle);
	HRESULT(STDMETHODCALLTYPE * get_Message) (ISideShowNotification * This, LPWSTR * out_ppwszMessage);
	HRESULT(STDMETHODCALLTYPE * put_Message) (ISideShowNotification * This, LPWSTR in_pwszMessage);
	HRESULT(STDMETHODCALLTYPE * get_Image) (ISideShowNotification * This, HICON * out_phIcon);
	HRESULT(STDMETHODCALLTYPE * put_Image) (ISideShowNotification * This, HICON in_hIcon);
	HRESULT(STDMETHODCALLTYPE * get_ExpirationTime) (ISideShowNotification * This, SYSTEMTIME * out_pTime);
	HRESULT(STDMETHODCALLTYPE * put_ExpirationTime) (ISideShowNotification * This, SYSTEMTIME * in_pTime);
	END_INTERFACE
}  ISideShowNotificationVtbl;
interface ISideShowNotification
{
	CONST_VTBL struct ISideShowNotificationVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define ISideShowNotification_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define ISideShowNotification_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define ISideShowNotification_Release(This) ( (This)->lpVtbl -> Release(This) )
#define ISideShowNotification_get_NotificationId(This,out_pNotificationId) ( (This)->lpVtbl -> get_NotificationId(This,out_pNotificationId) )
#define ISideShowNotification_put_NotificationId(This,in_notificationId) ( (This)->lpVtbl -> put_NotificationId(This,in_notificationId) )
#define ISideShowNotification_get_Title(This,out_ppwszTitle) ( (This)->lpVtbl -> get_Title(This,out_ppwszTitle) )
#define ISideShowNotification_put_Title(This,in_pwszTitle) ( (This)->lpVtbl -> put_Title(This,in_pwszTitle) )
#define ISideShowNotification_get_Message(This,out_ppwszMessage) ( (This)->lpVtbl -> get_Message(This,out_ppwszMessage) )
#define ISideShowNotification_put_Message(This,in_pwszMessage) ( (This)->lpVtbl -> put_Message(This,in_pwszMessage) )
#define ISideShowNotification_get_Image(This,out_phIcon) ( (This)->lpVtbl -> get_Image(This,out_phIcon) )
#define ISideShowNotification_put_Image(This,in_hIcon) ( (This)->lpVtbl -> put_Image(This,in_hIcon) )
#define ISideShowNotification_get_ExpirationTime(This,out_pTime) ( (This)->lpVtbl -> get_ExpirationTime(This,out_pTime) )
#define ISideShowNotification_put_ExpirationTime(This,in_pTime) ( (This)->lpVtbl -> put_ExpirationTime(This,in_pTime) )
#endif
#endif
#ifndef __ISideShowContentManager_INTERFACE_DEFINED__
#define __ISideShowContentManager_INTERFACE_DEFINED__
extern const IID IID_ISideShowContentManager;
typedef struct ISideShowContentManagerVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (ISideShowContentManager * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (ISideShowContentManager * This);
	ULONG(STDMETHODCALLTYPE * Release) (ISideShowContentManager * This);
	HRESULT(STDMETHODCALLTYPE * Add) (ISideShowContentManager * This, ISideShowContent * in_pIContent);
	HRESULT(STDMETHODCALLTYPE * Remove) (ISideShowContentManager * This, const CONTENT_ID in_contentId);
	HRESULT(STDMETHODCALLTYPE * RemoveAll) (ISideShowContentManager * This);
	HRESULT(STDMETHODCALLTYPE * SetEventSink) (ISideShowContentManager * This, ISideShowEvents * in_pIEvents);
	HRESULT(STDMETHODCALLTYPE * GetDeviceCapabilities) (ISideShowContentManager * This, ISideShowCapabilitiesCollection ** out_ppCollection);
	END_INTERFACE
}  ISideShowContentManagerVtbl;
interface ISideShowContentManager
{
	CONST_VTBL struct ISideShowContentManagerVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define ISideShowContentManager_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define ISideShowContentManager_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define ISideShowContentManager_Release(This) ( (This)->lpVtbl -> Release(This) )
#define ISideShowContentManager_Add(This,in_pIContent) ( (This)->lpVtbl -> Add(This,in_pIContent) )
#define ISideShowContentManager_Remove(This,in_contentId) ( (This)->lpVtbl -> Remove(This,in_contentId) )
#define ISideShowContentManager_RemoveAll(This) ( (This)->lpVtbl -> RemoveAll(This) )
#define ISideShowContentManager_SetEventSink(This,in_pIEvents) ( (This)->lpVtbl -> SetEventSink(This,in_pIEvents) )
#define ISideShowContentManager_GetDeviceCapabilities(This,out_ppCollection) ( (This)->lpVtbl -> GetDeviceCapabilities(This,out_ppCollection) )
#endif
#endif
#ifndef __ISideShowContent_INTERFACE_DEFINED__
#define __ISideShowContent_INTERFACE_DEFINED__
extern const IID IID_ISideShowContent;
typedef struct ISideShowContentVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (ISideShowContent * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (ISideShowContent * This);
	ULONG(STDMETHODCALLTYPE * Release) (ISideShowContent * This);
	HRESULT(STDMETHODCALLTYPE * GetContent) (ISideShowContent * This, ISideShowCapabilities * in_pICapabilities, DWORD * out_pdwSize, BYTE ** out_ppbData);
	HRESULT(STDMETHODCALLTYPE * get_ContentId) (ISideShowContent * This, PCONTENT_ID out_pcontentId);
	HRESULT(STDMETHODCALLTYPE * get_DifferentiateContent) (ISideShowContent * This, BOOL * out_pfDifferentiateContent);
	END_INTERFACE
}  ISideShowContentVtbl;
interface ISideShowContent
{
	CONST_VTBL struct ISideShowContentVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define ISideShowContent_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define ISideShowContent_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define ISideShowContent_Release(This) ( (This)->lpVtbl -> Release(This) )
#define ISideShowContent_GetContent(This,in_pICapabilities,out_pdwSize,out_ppbData) ( (This)->lpVtbl -> GetContent(This,in_pICapabilities,out_pdwSize,out_ppbData) )
#define ISideShowContent_get_ContentId(This,out_pcontentId) ( (This)->lpVtbl -> get_ContentId(This,out_pcontentId) )
#define ISideShowContent_get_DifferentiateContent(This,out_pfDifferentiateContent) ( (This)->lpVtbl -> get_DifferentiateContent(This,out_pfDifferentiateContent) )
#endif
#endif
#ifndef __ISideShowEvents_INTERFACE_DEFINED__
#define __ISideShowEvents_INTERFACE_DEFINED__
extern const IID IID_ISideShowEvents;
typedef struct ISideShowEventsVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (ISideShowEvents * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (ISideShowEvents * This);
	ULONG(STDMETHODCALLTYPE * Release) (ISideShowEvents * This);
	HRESULT(STDMETHODCALLTYPE * ContentMissing) (ISideShowEvents * This, const CONTENT_ID in_contentId, ISideShowContent ** out_ppIContent);
	HRESULT(STDMETHODCALLTYPE * ApplicationEvent) (ISideShowEvents * This, ISideShowCapabilities * in_pICapabilities, const DWORD in_dwEventId, const DWORD in_dwEventSize, const BYTE * in_pbEventData);
	HRESULT(STDMETHODCALLTYPE * DeviceAdded) (ISideShowEvents * This, ISideShowCapabilities * in_pIDevice);
	HRESULT(STDMETHODCALLTYPE * DeviceRemoved) (ISideShowEvents * This, ISideShowCapabilities * in_pIDevice);
	END_INTERFACE
}  ISideShowEventsVtbl;
interface ISideShowEvents
{
	CONST_VTBL struct ISideShowEventsVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define ISideShowEvents_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define ISideShowEvents_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define ISideShowEvents_Release(This) ( (This)->lpVtbl -> Release(This) )
#define ISideShowEvents_ContentMissing(This,in_contentId,out_ppIContent) ( (This)->lpVtbl -> ContentMissing(This,in_contentId,out_ppIContent) )
#define ISideShowEvents_ApplicationEvent(This,in_pICapabilities,in_dwEventId,in_dwEventSize,in_pbEventData) ( (This)->lpVtbl -> ApplicationEvent(This,in_pICapabilities,in_dwEventId,in_dwEventSize,in_pbEventData) )
#define ISideShowEvents_DeviceAdded(This,in_pIDevice) ( (This)->lpVtbl -> DeviceAdded(This,in_pIDevice) )
#define ISideShowEvents_DeviceRemoved(This,in_pIDevice) ( (This)->lpVtbl -> DeviceRemoved(This,in_pIDevice) )
#endif
#endif
#ifndef __ISideShowCapabilities_INTERFACE_DEFINED__
#define __ISideShowCapabilities_INTERFACE_DEFINED__
extern const IID IID_ISideShowCapabilities;
typedef struct ISideShowCapabilitiesVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (ISideShowCapabilities * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (ISideShowCapabilities * This);
	ULONG(STDMETHODCALLTYPE * Release) (ISideShowCapabilities * This);
	HRESULT(STDMETHODCALLTYPE * GetCapability) (ISideShowCapabilities * This, REFPROPERTYKEY in_keyCapability, PROPVARIANT * inout_pValue);
	END_INTERFACE
}  ISideShowCapabilitiesVtbl;
interface ISideShowCapabilities
{
	CONST_VTBL struct ISideShowCapabilitiesVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define ISideShowCapabilities_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define ISideShowCapabilities_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define ISideShowCapabilities_Release(This) ( (This)->lpVtbl -> Release(This) )
#define ISideShowCapabilities_GetCapability(This,in_keyCapability,inout_pValue) ( (This)->lpVtbl -> GetCapability(This,in_keyCapability,inout_pValue) )
#endif
#endif
#ifndef __ISideShowCapabilitiesCollection_INTERFACE_DEFINED__
#define __ISideShowCapabilitiesCollection_INTERFACE_DEFINED__
extern const IID IID_ISideShowCapabilitiesCollection;
typedef struct ISideShowCapabilitiesCollectionVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (ISideShowCapabilitiesCollection * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (ISideShowCapabilitiesCollection * This);
	ULONG(STDMETHODCALLTYPE * Release) (ISideShowCapabilitiesCollection * This);
	HRESULT(STDMETHODCALLTYPE * GetCount) (ISideShowCapabilitiesCollection * This, DWORD * out_pdwCount);
	HRESULT(STDMETHODCALLTYPE * GetAt) (ISideShowCapabilitiesCollection * This, DWORD in_dwIndex, ISideShowCapabilities ** out_ppCapabilities);
	END_INTERFACE
}  ISideShowCapabilitiesCollectionVtbl;
interface ISideShowCapabilitiesCollection
{
	CONST_VTBL struct ISideShowCapabilitiesCollectionVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define ISideShowCapabilitiesCollection_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define ISideShowCapabilitiesCollection_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define ISideShowCapabilitiesCollection_Release(This) ( (This)->lpVtbl -> Release(This) )
#define ISideShowCapabilitiesCollection_GetCount(This,out_pdwCount) ( (This)->lpVtbl -> GetCount(This,out_pdwCount) )
#define ISideShowCapabilitiesCollection_GetAt(This,in_dwIndex,out_ppCapabilities) ( (This)->lpVtbl -> GetAt(This,in_dwIndex,out_ppCapabilities) )
#endif
#endif
#ifndef __ISideShowBulkCapabilities_INTERFACE_DEFINED__
#define __ISideShowBulkCapabilities_INTERFACE_DEFINED__
extern const IID IID_ISideShowBulkCapabilities;
typedef struct ISideShowBulkCapabilitiesVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (ISideShowBulkCapabilities * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (ISideShowBulkCapabilities * This);
	ULONG(STDMETHODCALLTYPE * Release) (ISideShowBulkCapabilities * This);
	HRESULT(STDMETHODCALLTYPE * GetCapability) (ISideShowBulkCapabilities * This, REFPROPERTYKEY in_keyCapability, PROPVARIANT * inout_pValue);
	HRESULT(STDMETHODCALLTYPE * GetCapabilities) (ISideShowBulkCapabilities * This, ISideShowKeyCollection * in_keyCollection, ISideShowPropVariantCollection ** inout_pValues);
	END_INTERFACE
}  ISideShowBulkCapabilitiesVtbl;
interface ISideShowBulkCapabilities
{
	CONST_VTBL struct ISideShowBulkCapabilitiesVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define ISideShowBulkCapabilities_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define ISideShowBulkCapabilities_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define ISideShowBulkCapabilities_Release(This) ( (This)->lpVtbl -> Release(This) )
#define ISideShowBulkCapabilities_GetCapability(This,in_keyCapability,inout_pValue) ( (This)->lpVtbl -> GetCapability(This,in_keyCapability,inout_pValue) )
#define ISideShowBulkCapabilities_GetCapabilities(This,in_keyCollection,inout_pValues) ( (This)->lpVtbl -> GetCapabilities(This,in_keyCollection,inout_pValues) )
#endif
#endif
#ifndef __ISideShowKeyCollection_INTERFACE_DEFINED__
#define __ISideShowKeyCollection_INTERFACE_DEFINED__
extern const IID IID_ISideShowKeyCollection;
typedef struct ISideShowKeyCollectionVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (ISideShowKeyCollection * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (ISideShowKeyCollection * This);
	ULONG(STDMETHODCALLTYPE * Release) (ISideShowKeyCollection * This);
	HRESULT(STDMETHODCALLTYPE * Add) (ISideShowKeyCollection * This, REFPROPERTYKEY Key);
	HRESULT(STDMETHODCALLTYPE * Clear) (ISideShowKeyCollection * This);
	HRESULT(STDMETHODCALLTYPE * GetAt) (ISideShowKeyCollection * This, const DWORD dwIndex, PROPERTYKEY * pKey);
	HRESULT(STDMETHODCALLTYPE * GetCount) (ISideShowKeyCollection * This, DWORD * pcElems);
	HRESULT(STDMETHODCALLTYPE * RemoveAt) (ISideShowKeyCollection * This, const DWORD dwIndex);
	END_INTERFACE
}  ISideShowKeyCollectionVtbl;
interface ISideShowKeyCollection
{
	CONST_VTBL struct ISideShowKeyCollectionVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define ISideShowKeyCollection_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define ISideShowKeyCollection_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define ISideShowKeyCollection_Release(This) ( (This)->lpVtbl -> Release(This) )
#define ISideShowKeyCollection_Add(This,Key) ( (This)->lpVtbl -> Add(This,Key) )
#define ISideShowKeyCollection_Clear(This) ( (This)->lpVtbl -> Clear(This) )
#define ISideShowKeyCollection_GetAt(This,dwIndex,pKey) ( (This)->lpVtbl -> GetAt(This,dwIndex,pKey) )
#define ISideShowKeyCollection_GetCount(This,pcElems) ( (This)->lpVtbl -> GetCount(This,pcElems) )
#define ISideShowKeyCollection_RemoveAt(This,dwIndex) ( (This)->lpVtbl -> RemoveAt(This,dwIndex) )
#endif
#endif
#ifndef __ISideShowPropVariantCollection_INTERFACE_DEFINED__
#define __ISideShowPropVariantCollection_INTERFACE_DEFINED__
extern const IID IID_ISideShowPropVariantCollection;
typedef struct ISideShowPropVariantCollectionVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (ISideShowPropVariantCollection * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (ISideShowPropVariantCollection * This);
	ULONG(STDMETHODCALLTYPE * Release) (ISideShowPropVariantCollection * This);
	HRESULT(STDMETHODCALLTYPE * Add) (ISideShowPropVariantCollection * This, const PROPVARIANT * pValue);
	HRESULT(STDMETHODCALLTYPE * Clear) (ISideShowPropVariantCollection * This);
	HRESULT(STDMETHODCALLTYPE * GetAt) (ISideShowPropVariantCollection * This, const DWORD dwIndex, PROPVARIANT * pValue);
	HRESULT(STDMETHODCALLTYPE * GetCount) (ISideShowPropVariantCollection * This, DWORD * pcElems);
	HRESULT(STDMETHODCALLTYPE * RemoveAt) (ISideShowPropVariantCollection * This, const DWORD dwIndex);
	END_INTERFACE
}  ISideShowPropVariantCollectionVtbl;
interface ISideShowPropVariantCollection
{
	CONST_VTBL struct ISideShowPropVariantCollectionVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define ISideShowPropVariantCollection_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define ISideShowPropVariantCollection_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define ISideShowPropVariantCollection_Release(This) ( (This)->lpVtbl -> Release(This) )
#define ISideShowPropVariantCollection_Add(This,pValue) ( (This)->lpVtbl -> Add(This,pValue) )
#define ISideShowPropVariantCollection_Clear(This) ( (This)->lpVtbl -> Clear(This) )
#define ISideShowPropVariantCollection_GetAt(This,dwIndex,pValue) ( (This)->lpVtbl -> GetAt(This,dwIndex,pValue) )
#define ISideShowPropVariantCollection_GetCount(This,pcElems) ( (This)->lpVtbl -> GetCount(This,pcElems) )
#define ISideShowPropVariantCollection_RemoveAt(This,dwIndex) ( (This)->lpVtbl -> RemoveAt(This,dwIndex) )
#endif
#endif
#ifndef __WindowsSideShowApiLibrary_LIBRARY_DEFINED__
#define __WindowsSideShowApiLibrary_LIBRARY_DEFINED__
extern const IID LIBID_WindowsSideShowApiLibrary;
extern const CLSID CLSID_SideShowSession;
extern const CLSID CLSID_SideShowNotification;
extern const CLSID CLSID_SideShowKeyCollection;
extern const CLSID CLSID_SideShowPropVariantCollection;
#endif
#endif
extern RPC_IF_HANDLE __MIDL_itf_windowssideshowapi_0000_0011_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_windowssideshowapi_0000_0011_v0_0_s_ifspec;
unsigned long __RPC_USER BSTR_UserSize(unsigned long *, unsigned long, BSTR *);
unsigned char *__RPC_USER BSTR_UserMarshal(unsigned long *, unsigned char *, BSTR *);
unsigned char *__RPC_USER BSTR_UserUnmarshal(unsigned long *, unsigned char *, BSTR *);
void __RPC_USER BSTR_UserFree(unsigned long *, BSTR *);
unsigned long __RPC_USER HICON_UserSize(unsigned long *, unsigned long, HICON *);
unsigned char *__RPC_USER HICON_UserMarshal(unsigned long *, unsigned char *, HICON *);
unsigned char *__RPC_USER HICON_UserUnmarshal(unsigned long *, unsigned char *, HICON *);
void __RPC_USER HICON_UserFree(unsigned long *, HICON *);
unsigned long __RPC_USER LPSAFEARRAY_UserSize(unsigned long *, unsigned long, LPSAFEARRAY *);
unsigned char *__RPC_USER LPSAFEARRAY_UserMarshal(unsigned long *, unsigned char *, LPSAFEARRAY *);
unsigned char *__RPC_USER LPSAFEARRAY_UserUnmarshal(unsigned long *, unsigned char *, LPSAFEARRAY *);
void __RPC_USER LPSAFEARRAY_UserFree(unsigned long *, LPSAFEARRAY *);
unsigned long __RPC_USER BSTR_UserSize64(unsigned long *, unsigned long, BSTR *);
unsigned char *__RPC_USER BSTR_UserMarshal64(unsigned long *, unsigned char *, BSTR *);
unsigned char *__RPC_USER BSTR_UserUnmarshal64(unsigned long *, unsigned char *, BSTR *);
void __RPC_USER BSTR_UserFree64(unsigned long *, BSTR *);
unsigned long __RPC_USER HICON_UserSize64(unsigned long *, unsigned long, HICON *);
unsigned char *__RPC_USER HICON_UserMarshal64(unsigned long *, unsigned char *, HICON *);
unsigned char *__RPC_USER HICON_UserUnmarshal64(unsigned long *, unsigned char *, HICON *);
void __RPC_USER HICON_UserFree64(unsigned long *, HICON *);
unsigned long __RPC_USER LPSAFEARRAY_UserSize64(unsigned long *, unsigned long, LPSAFEARRAY *);
unsigned char *__RPC_USER LPSAFEARRAY_UserMarshal64(unsigned long *, unsigned char *, LPSAFEARRAY *);
unsigned char *__RPC_USER LPSAFEARRAY_UserUnmarshal64(unsigned long *, unsigned char *, LPSAFEARRAY *);
void __RPC_USER LPSAFEARRAY_UserFree64(unsigned long *, LPSAFEARRAY *);
#endif

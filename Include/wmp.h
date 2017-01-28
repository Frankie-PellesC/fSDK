/*+@@file@@----------------------------------------------------------------*//*!
 \file		wmp.h
 \par Description 
            Extension and update of headers for PellesC compiler suite.
 \par Project: 
            PellesC Headers extension
 \date		Created  on Sat Jul  9 19:20:52 2016
 \date		Modified on Sat Jul  9 19:20:52 2016
 \author	frankie
\*//*-@@file@@----------------------------------------------------------------*/

#ifndef __REQUIRED_RPCNDR_H_VERSION__
#define __REQUIRED_RPCNDR_H_VERSION__ 475
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
#ifndef __wmp_h__
#define __wmp_h__
#if __POCC__ >= 500
#pragma once
#endif
#ifndef __IWMPErrorItem_FWD_DEFINED__
#define __IWMPErrorItem_FWD_DEFINED__
typedef interface IWMPErrorItem IWMPErrorItem;
#endif
#ifndef __IWMPError_FWD_DEFINED__
#define __IWMPError_FWD_DEFINED__
typedef interface IWMPError IWMPError;
#endif
#ifndef __IWMPMedia_FWD_DEFINED__
#define __IWMPMedia_FWD_DEFINED__
typedef interface IWMPMedia IWMPMedia;
#endif
#ifndef __IWMPControls_FWD_DEFINED__
#define __IWMPControls_FWD_DEFINED__
typedef interface IWMPControls IWMPControls;
#endif
#ifndef __IWMPSettings_FWD_DEFINED__
#define __IWMPSettings_FWD_DEFINED__
typedef interface IWMPSettings IWMPSettings;
#endif
#ifndef __IWMPClosedCaption_FWD_DEFINED__
#define __IWMPClosedCaption_FWD_DEFINED__
typedef interface IWMPClosedCaption IWMPClosedCaption;
#endif
#ifndef __IWMPPlaylist_FWD_DEFINED__
#define __IWMPPlaylist_FWD_DEFINED__
typedef interface IWMPPlaylist IWMPPlaylist;
#endif
#ifndef __IWMPCdrom_FWD_DEFINED__
#define __IWMPCdrom_FWD_DEFINED__
typedef interface IWMPCdrom IWMPCdrom;
#endif
#ifndef __IWMPCdromCollection_FWD_DEFINED__
#define __IWMPCdromCollection_FWD_DEFINED__
typedef interface IWMPCdromCollection IWMPCdromCollection;
#endif
#ifndef __IWMPStringCollection_FWD_DEFINED__
#define __IWMPStringCollection_FWD_DEFINED__
typedef interface IWMPStringCollection IWMPStringCollection;
#endif
#ifndef __IWMPMediaCollection_FWD_DEFINED__
#define __IWMPMediaCollection_FWD_DEFINED__
typedef interface IWMPMediaCollection IWMPMediaCollection;
#endif
#ifndef __IWMPPlaylistArray_FWD_DEFINED__
#define __IWMPPlaylistArray_FWD_DEFINED__
typedef interface IWMPPlaylistArray IWMPPlaylistArray;
#endif
#ifndef __IWMPPlaylistCollection_FWD_DEFINED__
#define __IWMPPlaylistCollection_FWD_DEFINED__
typedef interface IWMPPlaylistCollection IWMPPlaylistCollection;
#endif
#ifndef __IWMPNetwork_FWD_DEFINED__
#define __IWMPNetwork_FWD_DEFINED__
typedef interface IWMPNetwork IWMPNetwork;
#endif
#ifndef __IWMPCore_FWD_DEFINED__
#define __IWMPCore_FWD_DEFINED__
typedef interface IWMPCore IWMPCore;
#endif
#ifndef __IWMPPlayer_FWD_DEFINED__
#define __IWMPPlayer_FWD_DEFINED__
typedef interface IWMPPlayer IWMPPlayer;
#endif
#ifndef __IWMPPlayer2_FWD_DEFINED__
#define __IWMPPlayer2_FWD_DEFINED__
typedef interface IWMPPlayer2 IWMPPlayer2;
#endif
#ifndef __IWMPMedia2_FWD_DEFINED__
#define __IWMPMedia2_FWD_DEFINED__
typedef interface IWMPMedia2 IWMPMedia2;
#endif
#ifndef __IWMPControls2_FWD_DEFINED__
#define __IWMPControls2_FWD_DEFINED__
typedef interface IWMPControls2 IWMPControls2;
#endif
#ifndef __IWMPDVD_FWD_DEFINED__
#define __IWMPDVD_FWD_DEFINED__
typedef interface IWMPDVD IWMPDVD;
#endif
#ifndef __IWMPCore2_FWD_DEFINED__
#define __IWMPCore2_FWD_DEFINED__
typedef interface IWMPCore2 IWMPCore2;
#endif
#ifndef __IWMPPlayer3_FWD_DEFINED__
#define __IWMPPlayer3_FWD_DEFINED__
typedef interface IWMPPlayer3 IWMPPlayer3;
#endif
#ifndef __IWMPErrorItem2_FWD_DEFINED__
#define __IWMPErrorItem2_FWD_DEFINED__
typedef interface IWMPErrorItem2 IWMPErrorItem2;
#endif
#ifndef __IWMPRemoteMediaServices_FWD_DEFINED__
#define __IWMPRemoteMediaServices_FWD_DEFINED__
typedef interface IWMPRemoteMediaServices IWMPRemoteMediaServices;
#endif
#ifndef __IWMPSkinManager_FWD_DEFINED__
#define __IWMPSkinManager_FWD_DEFINED__
typedef interface IWMPSkinManager IWMPSkinManager;
#endif
#ifndef __IWMPMetadataPicture_FWD_DEFINED__
#define __IWMPMetadataPicture_FWD_DEFINED__
typedef interface IWMPMetadataPicture IWMPMetadataPicture;
#endif
#ifndef __IWMPMetadataText_FWD_DEFINED__
#define __IWMPMetadataText_FWD_DEFINED__
typedef interface IWMPMetadataText IWMPMetadataText;
#endif
#ifndef __IWMPMedia3_FWD_DEFINED__
#define __IWMPMedia3_FWD_DEFINED__
typedef interface IWMPMedia3 IWMPMedia3;
#endif
#ifndef __IWMPSettings2_FWD_DEFINED__
#define __IWMPSettings2_FWD_DEFINED__
typedef interface IWMPSettings2 IWMPSettings2;
#endif
#ifndef __IWMPControls3_FWD_DEFINED__
#define __IWMPControls3_FWD_DEFINED__
typedef interface IWMPControls3 IWMPControls3;
#endif
#ifndef __IWMPClosedCaption2_FWD_DEFINED__
#define __IWMPClosedCaption2_FWD_DEFINED__
typedef interface IWMPClosedCaption2 IWMPClosedCaption2;
#endif
#ifndef __IWMPPlayerApplication_FWD_DEFINED__
#define __IWMPPlayerApplication_FWD_DEFINED__
typedef interface IWMPPlayerApplication IWMPPlayerApplication;
#endif
#ifndef __IWMPCore3_FWD_DEFINED__
#define __IWMPCore3_FWD_DEFINED__
typedef interface IWMPCore3 IWMPCore3;
#endif
#ifndef __IWMPPlayer4_FWD_DEFINED__
#define __IWMPPlayer4_FWD_DEFINED__
typedef interface IWMPPlayer4 IWMPPlayer4;
#endif
#ifndef __IWMPPlayerServices_FWD_DEFINED__
#define __IWMPPlayerServices_FWD_DEFINED__
typedef interface IWMPPlayerServices IWMPPlayerServices;
#endif
#ifndef __IWMPSyncDevice_FWD_DEFINED__
#define __IWMPSyncDevice_FWD_DEFINED__
typedef interface IWMPSyncDevice IWMPSyncDevice;
#endif
#ifndef __IWMPSyncServices_FWD_DEFINED__
#define __IWMPSyncServices_FWD_DEFINED__
typedef interface IWMPSyncServices IWMPSyncServices;
#endif
#ifndef __IWMPPlayerServices2_FWD_DEFINED__
#define __IWMPPlayerServices2_FWD_DEFINED__
typedef interface IWMPPlayerServices2 IWMPPlayerServices2;
#endif
#ifndef __IWMPCdromRip_FWD_DEFINED__
#define __IWMPCdromRip_FWD_DEFINED__
typedef interface IWMPCdromRip IWMPCdromRip;
#endif
#ifndef __IWMPCdromBurn_FWD_DEFINED__
#define __IWMPCdromBurn_FWD_DEFINED__
typedef interface IWMPCdromBurn IWMPCdromBurn;
#endif
#ifndef __IWMPQuery_FWD_DEFINED__
#define __IWMPQuery_FWD_DEFINED__
typedef interface IWMPQuery IWMPQuery;
#endif
#ifndef __IWMPMediaCollection2_FWD_DEFINED__
#define __IWMPMediaCollection2_FWD_DEFINED__
typedef interface IWMPMediaCollection2 IWMPMediaCollection2;
#endif
#ifndef __IWMPStringCollection2_FWD_DEFINED__
#define __IWMPStringCollection2_FWD_DEFINED__
typedef interface IWMPStringCollection2 IWMPStringCollection2;
#endif
#ifndef __IWMPLibrary_FWD_DEFINED__
#define __IWMPLibrary_FWD_DEFINED__
typedef interface IWMPLibrary IWMPLibrary;
#endif
#ifndef __IWMPLibraryServices_FWD_DEFINED__
#define __IWMPLibraryServices_FWD_DEFINED__
typedef interface IWMPLibraryServices IWMPLibraryServices;
#endif
#ifndef __IWMPLibrarySharingServices_FWD_DEFINED__
#define __IWMPLibrarySharingServices_FWD_DEFINED__
typedef interface IWMPLibrarySharingServices IWMPLibrarySharingServices;
#endif
#ifndef __IWMPFolderMonitorServices_FWD_DEFINED__
#define __IWMPFolderMonitorServices_FWD_DEFINED__
typedef interface IWMPFolderMonitorServices IWMPFolderMonitorServices;
#endif
#ifndef __IWMPSyncDevice2_FWD_DEFINED__
#define __IWMPSyncDevice2_FWD_DEFINED__
typedef interface IWMPSyncDevice2 IWMPSyncDevice2;
#endif
#ifndef __IWMPSyncDevice3_FWD_DEFINED__
#define __IWMPSyncDevice3_FWD_DEFINED__
typedef interface IWMPSyncDevice3 IWMPSyncDevice3;
#endif
#ifndef __IWMPLibrary2_FWD_DEFINED__
#define __IWMPLibrary2_FWD_DEFINED__
typedef interface IWMPLibrary2 IWMPLibrary2;
#endif
#ifndef __IWMPEvents_FWD_DEFINED__
#define __IWMPEvents_FWD_DEFINED__
typedef interface IWMPEvents IWMPEvents;
#endif
#ifndef __IWMPEvents2_FWD_DEFINED__
#define __IWMPEvents2_FWD_DEFINED__
typedef interface IWMPEvents2 IWMPEvents2;
#endif
#ifndef __IWMPEvents3_FWD_DEFINED__
#define __IWMPEvents3_FWD_DEFINED__
typedef interface IWMPEvents3 IWMPEvents3;
#endif
#ifndef __IWMPEvents4_FWD_DEFINED__
#define __IWMPEvents4_FWD_DEFINED__
typedef interface IWMPEvents4 IWMPEvents4;
#endif
#ifndef ___WMPOCXEvents_FWD_DEFINED__
#define ___WMPOCXEvents_FWD_DEFINED__
typedef interface _WMPOCXEvents _WMPOCXEvents;
#endif
#ifndef __WindowsMediaPlayer_FWD_DEFINED__
#define __WindowsMediaPlayer_FWD_DEFINED__
typedef struct WindowsMediaPlayer WindowsMediaPlayer;
#endif
#ifndef __IWMPPlayerServices_FWD_DEFINED__
#define __IWMPPlayerServices_FWD_DEFINED__
typedef interface IWMPPlayerServices IWMPPlayerServices;
#endif
#ifndef __IWMPPlayerServices2_FWD_DEFINED__
#define __IWMPPlayerServices2_FWD_DEFINED__
typedef interface IWMPPlayerServices2 IWMPPlayerServices2;
#endif
#ifndef __IWMPRemoteMediaServices_FWD_DEFINED__
#define __IWMPRemoteMediaServices_FWD_DEFINED__
typedef interface IWMPRemoteMediaServices IWMPRemoteMediaServices;
#endif
#ifndef __IWMPSyncServices_FWD_DEFINED__
#define __IWMPSyncServices_FWD_DEFINED__
typedef interface IWMPSyncServices IWMPSyncServices;
#endif
#ifndef __IWMPLibraryServices_FWD_DEFINED__
#define __IWMPLibraryServices_FWD_DEFINED__
typedef interface IWMPLibraryServices IWMPLibraryServices;
#endif
#ifndef __IWMPLibrarySharingServices_FWD_DEFINED__
#define __IWMPLibrarySharingServices_FWD_DEFINED__
typedef interface IWMPLibrarySharingServices IWMPLibrarySharingServices;
#endif
#ifndef __IWMPLibrary_FWD_DEFINED__
#define __IWMPLibrary_FWD_DEFINED__
typedef interface IWMPLibrary IWMPLibrary;
#endif
#ifndef __IWMPLibrary2_FWD_DEFINED__
#define __IWMPLibrary2_FWD_DEFINED__
typedef interface IWMPLibrary2 IWMPLibrary2;
#endif
#ifndef __IWMPFolderMonitorServices_FWD_DEFINED__
#define __IWMPFolderMonitorServices_FWD_DEFINED__
typedef interface IWMPFolderMonitorServices IWMPFolderMonitorServices;
#endif
#ifndef __IWMPSyncDevice_FWD_DEFINED__
#define __IWMPSyncDevice_FWD_DEFINED__
typedef interface IWMPSyncDevice IWMPSyncDevice;
#endif
#ifndef __IWMPSyncDevice2_FWD_DEFINED__
#define __IWMPSyncDevice2_FWD_DEFINED__
typedef interface IWMPSyncDevice2 IWMPSyncDevice2;
#endif
#ifndef __IWMPSyncDevice3_FWD_DEFINED__
#define __IWMPSyncDevice3_FWD_DEFINED__
typedef interface IWMPSyncDevice3 IWMPSyncDevice3;
#endif
#include <oaidl.h>
#include <ocidl.h>
typedef enum WMPOpenState
{
	wmposUndefined = 0,
	wmposPlaylistChanging = (wmposUndefined + 1),
	wmposPlaylistLocating = (wmposPlaylistChanging + 1),
	wmposPlaylistConnecting = (wmposPlaylistLocating + 1),
	wmposPlaylistLoading = (wmposPlaylistConnecting + 1),
	wmposPlaylistOpening = (wmposPlaylistLoading + 1),
	wmposPlaylistOpenNoMedia = (wmposPlaylistOpening + 1),
	wmposPlaylistChanged = (wmposPlaylistOpenNoMedia + 1),
	wmposMediaChanging = (wmposPlaylistChanged + 1),
	wmposMediaLocating = (wmposMediaChanging + 1),
	wmposMediaConnecting = (wmposMediaLocating + 1),
	wmposMediaLoading = (wmposMediaConnecting + 1),
	wmposMediaOpening = (wmposMediaLoading + 1),
	wmposMediaOpen = (wmposMediaOpening + 1),
	wmposBeginCodecAcquisition = (wmposMediaOpen + 1),
	wmposEndCodecAcquisition = (wmposBeginCodecAcquisition + 1),
	wmposBeginLicenseAcquisition = (wmposEndCodecAcquisition + 1),
	wmposEndLicenseAcquisition = (wmposBeginLicenseAcquisition + 1),
	wmposBeginIndividualization = (wmposEndLicenseAcquisition + 1),
	wmposEndIndividualization = (wmposBeginIndividualization + 1),
	wmposMediaWaiting = (wmposEndIndividualization + 1),
	wmposOpeningUnknownURL = (wmposMediaWaiting + 1)
} WMPOpenState;
typedef enum WMPPlayState
{
	wmppsUndefined = 0,
	wmppsStopped = (wmppsUndefined + 1),
	wmppsPaused = (wmppsStopped + 1),
	wmppsPlaying = (wmppsPaused + 1),
	wmppsScanForward = (wmppsPlaying + 1),
	wmppsScanReverse = (wmppsScanForward + 1),
	wmppsBuffering = (wmppsScanReverse + 1),
	wmppsWaiting = (wmppsBuffering + 1),
	wmppsMediaEnded = (wmppsWaiting + 1),
	wmppsTransitioning = (wmppsMediaEnded + 1),
	wmppsReady = (wmppsTransitioning + 1),
	wmppsReconnecting = (wmppsReady + 1),
	wmppsLast = (wmppsReconnecting + 1)
} WMPPlayState;
typedef enum WMPPlaylistChangeEventType
{
	wmplcUnknown = 0,
	wmplcClear = (wmplcUnknown + 1),
	wmplcInfoChange = (wmplcClear + 1),
	wmplcMove = (wmplcInfoChange + 1),
	wmplcDelete = (wmplcMove + 1),
	wmplcInsert = (wmplcDelete + 1),
	wmplcAppend = (wmplcInsert + 1),
	wmplcPrivate = (wmplcAppend + 1),
	wmplcNameChange = (wmplcPrivate + 1),
	wmplcMorph = (wmplcNameChange + 1),
	wmplcSort = (wmplcMorph + 1),
	wmplcLast = (wmplcSort + 1)
} WMPPlaylistChangeEventType;
extern RPC_IF_HANDLE __MIDL_itf_wmp_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_wmp_0000_0000_v0_0_s_ifspec;
#ifndef __IWMPErrorItem_INTERFACE_DEFINED__
#define __IWMPErrorItem_INTERFACE_DEFINED__
extern const IID IID_IWMPErrorItem;
typedef struct IWMPErrorItemVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IWMPErrorItem * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IWMPErrorItem * This);
	ULONG(STDMETHODCALLTYPE * Release) (IWMPErrorItem * This);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfoCount) (IWMPErrorItem * This, UINT * pctinfo);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfo) (IWMPErrorItem * This, UINT iTInfo, LCID lcid, ITypeInfo ** ppTInfo);
	HRESULT(STDMETHODCALLTYPE * GetIDsOfNames) (IWMPErrorItem * This, REFIID riid, LPOLESTR * rgszNames, UINT cNames, LCID lcid, DISPID * rgDispId);
	HRESULT(STDMETHODCALLTYPE * Invoke) (IWMPErrorItem * This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS * pDispParams, VARIANT * pVarResult, EXCEPINFO * pExcepInfo, UINT * puArgErr);
	HRESULT(STDMETHODCALLTYPE * get_errorCode) (IWMPErrorItem * This, long *phr);
	HRESULT(STDMETHODCALLTYPE * get_errorDescription) (IWMPErrorItem * This, BSTR * pbstrDescription);
	HRESULT(STDMETHODCALLTYPE * get_errorContext) (IWMPErrorItem * This, VARIANT * pvarContext);
	HRESULT(STDMETHODCALLTYPE * get_remedy) (IWMPErrorItem * This, long *plRemedy);
	HRESULT(STDMETHODCALLTYPE * get_customUrl) (IWMPErrorItem * This, BSTR * pbstrCustomUrl);
	END_INTERFACE
}  IWMPErrorItemVtbl;
interface IWMPErrorItem
{
	CONST_VTBL struct IWMPErrorItemVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IWMPErrorItem_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IWMPErrorItem_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define IWMPErrorItem_Release(This)( (This)->lpVtbl -> Release(This) )
#define IWMPErrorItem_GetTypeInfoCount(This,pctinfo)( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define IWMPErrorItem_GetTypeInfo(This,iTInfo,lcid,ppTInfo)( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define IWMPErrorItem_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define IWMPErrorItem_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define IWMPErrorItem_get_errorCode(This,phr)( (This)->lpVtbl -> get_errorCode(This,phr) )
#define IWMPErrorItem_get_errorDescription(This,pbstrDescription)( (This)->lpVtbl -> get_errorDescription(This,pbstrDescription) )
#define IWMPErrorItem_get_errorContext(This,pvarContext)( (This)->lpVtbl -> get_errorContext(This,pvarContext) )
#define IWMPErrorItem_get_remedy(This,plRemedy)( (This)->lpVtbl -> get_remedy(This,plRemedy) )
#define IWMPErrorItem_get_customUrl(This,pbstrCustomUrl)( (This)->lpVtbl -> get_customUrl(This,pbstrCustomUrl) )
#endif
#endif
#ifndef __IWMPError_INTERFACE_DEFINED__
#define __IWMPError_INTERFACE_DEFINED__
extern const IID IID_IWMPError;
typedef struct IWMPErrorVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IWMPError * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IWMPError * This);
	ULONG(STDMETHODCALLTYPE * Release) (IWMPError * This);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfoCount) (IWMPError * This, UINT * pctinfo);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfo) (IWMPError * This, UINT iTInfo, LCID lcid, ITypeInfo ** ppTInfo);
	HRESULT(STDMETHODCALLTYPE * GetIDsOfNames) (IWMPError * This, REFIID riid, LPOLESTR * rgszNames, UINT cNames, LCID lcid, DISPID * rgDispId);
	HRESULT(STDMETHODCALLTYPE * Invoke) (IWMPError * This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS * pDispParams, VARIANT * pVarResult, EXCEPINFO * pExcepInfo, UINT * puArgErr);
	HRESULT(STDMETHODCALLTYPE * clearErrorQueue) (IWMPError * This);
	HRESULT(STDMETHODCALLTYPE * get_errorCount) (IWMPError * This, long *plNumErrors);
	HRESULT(STDMETHODCALLTYPE * get_item) (IWMPError * This, long dwIndex, IWMPErrorItem ** ppErrorItem);
	HRESULT(STDMETHODCALLTYPE * webHelp) (IWMPError * This);
	END_INTERFACE
}  IWMPErrorVtbl;
interface IWMPError
{
	CONST_VTBL struct IWMPErrorVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IWMPError_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IWMPError_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define IWMPError_Release(This)( (This)->lpVtbl -> Release(This) )
#define IWMPError_GetTypeInfoCount(This,pctinfo)( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define IWMPError_GetTypeInfo(This,iTInfo,lcid,ppTInfo)( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define IWMPError_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define IWMPError_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define IWMPError_clearErrorQueue(This)( (This)->lpVtbl -> clearErrorQueue(This) )
#define IWMPError_get_errorCount(This,plNumErrors)( (This)->lpVtbl -> get_errorCount(This,plNumErrors) )
#define IWMPError_get_item(This,dwIndex,ppErrorItem)( (This)->lpVtbl -> get_item(This,dwIndex,ppErrorItem) )
#define IWMPError_webHelp(This)( (This)->lpVtbl -> webHelp(This) )
#endif
#endif
#ifndef __IWMPMedia_INTERFACE_DEFINED__
#define __IWMPMedia_INTERFACE_DEFINED__
extern const IID IID_IWMPMedia;
typedef struct IWMPMediaVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IWMPMedia * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IWMPMedia * This);
	ULONG(STDMETHODCALLTYPE * Release) (IWMPMedia * This);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfoCount) (IWMPMedia * This, UINT * pctinfo);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfo) (IWMPMedia * This, UINT iTInfo, LCID lcid, ITypeInfo ** ppTInfo);
	HRESULT(STDMETHODCALLTYPE * GetIDsOfNames) (IWMPMedia * This, REFIID riid, LPOLESTR * rgszNames, UINT cNames, LCID lcid, DISPID * rgDispId);
	HRESULT(STDMETHODCALLTYPE * Invoke) (IWMPMedia * This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS * pDispParams, VARIANT * pVarResult, EXCEPINFO * pExcepInfo, UINT * puArgErr);
	HRESULT(STDMETHODCALLTYPE * get_isIdentical) (IWMPMedia * This, IWMPMedia * pIWMPMedia, VARIANT_BOOL * pvbool);
	HRESULT(STDMETHODCALLTYPE * get_sourceURL) (IWMPMedia * This, BSTR * pbstrSourceURL);
	HRESULT(STDMETHODCALLTYPE * get_name) (IWMPMedia * This, BSTR * pbstrName);
	HRESULT(STDMETHODCALLTYPE * put_name) (IWMPMedia * This, BSTR bstrName);
	HRESULT(STDMETHODCALLTYPE * get_imageSourceWidth) (IWMPMedia * This, long *pWidth);
	HRESULT(STDMETHODCALLTYPE * get_imageSourceHeight) (IWMPMedia * This, long *pHeight);
	HRESULT(STDMETHODCALLTYPE * get_markerCount) (IWMPMedia * This, long *pMarkerCount);
	HRESULT(STDMETHODCALLTYPE * getMarkerTime) (IWMPMedia * This, long MarkerNum, double *pMarkerTime);
	HRESULT(STDMETHODCALLTYPE * getMarkerName) (IWMPMedia * This, long MarkerNum, BSTR * pbstrMarkerName);
	HRESULT(STDMETHODCALLTYPE * get_duration) (IWMPMedia * This, double *pDuration);
	HRESULT(STDMETHODCALLTYPE * get_durationString) (IWMPMedia * This, BSTR * pbstrDuration);
	HRESULT(STDMETHODCALLTYPE * get_attributeCount) (IWMPMedia * This, long *plCount);
	HRESULT(STDMETHODCALLTYPE * getAttributeName) (IWMPMedia * This, long lIndex, BSTR * pbstrItemName);
	HRESULT(STDMETHODCALLTYPE * getItemInfo) (IWMPMedia * This, BSTR bstrItemName, BSTR * pbstrVal);
	HRESULT(STDMETHODCALLTYPE * setItemInfo) (IWMPMedia * This, BSTR bstrItemName, BSTR bstrVal);
	HRESULT(STDMETHODCALLTYPE * getItemInfoByAtom) (IWMPMedia * This, long lAtom, BSTR * pbstrVal);
	HRESULT(STDMETHODCALLTYPE * isMemberOf) (IWMPMedia * This, IWMPPlaylist * pPlaylist, VARIANT_BOOL * pvarfIsMemberOf);
	HRESULT(STDMETHODCALLTYPE * isReadOnlyItem) (IWMPMedia * This, BSTR bstrItemName, VARIANT_BOOL * pvarfIsReadOnly);
	END_INTERFACE
}  IWMPMediaVtbl;
interface IWMPMedia
{
	CONST_VTBL struct IWMPMediaVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IWMPMedia_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IWMPMedia_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define IWMPMedia_Release(This)( (This)->lpVtbl -> Release(This) )
#define IWMPMedia_GetTypeInfoCount(This,pctinfo)( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define IWMPMedia_GetTypeInfo(This,iTInfo,lcid,ppTInfo)( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define IWMPMedia_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define IWMPMedia_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define IWMPMedia_get_isIdentical(This,pIWMPMedia,pvbool)( (This)->lpVtbl -> get_isIdentical(This,pIWMPMedia,pvbool) )
#define IWMPMedia_get_sourceURL(This,pbstrSourceURL)( (This)->lpVtbl -> get_sourceURL(This,pbstrSourceURL) )
#define IWMPMedia_get_name(This,pbstrName)( (This)->lpVtbl -> get_name(This,pbstrName) )
#define IWMPMedia_put_name(This,bstrName)( (This)->lpVtbl -> put_name(This,bstrName) )
#define IWMPMedia_get_imageSourceWidth(This,pWidth)( (This)->lpVtbl -> get_imageSourceWidth(This,pWidth) )
#define IWMPMedia_get_imageSourceHeight(This,pHeight)( (This)->lpVtbl -> get_imageSourceHeight(This,pHeight) )
#define IWMPMedia_get_markerCount(This,pMarkerCount)( (This)->lpVtbl -> get_markerCount(This,pMarkerCount) )
#define IWMPMedia_getMarkerTime(This,MarkerNum,pMarkerTime)( (This)->lpVtbl -> getMarkerTime(This,MarkerNum,pMarkerTime) )
#define IWMPMedia_getMarkerName(This,MarkerNum,pbstrMarkerName)( (This)->lpVtbl -> getMarkerName(This,MarkerNum,pbstrMarkerName) )
#define IWMPMedia_get_duration(This,pDuration)( (This)->lpVtbl -> get_duration(This,pDuration) )
#define IWMPMedia_get_durationString(This,pbstrDuration)( (This)->lpVtbl -> get_durationString(This,pbstrDuration) )
#define IWMPMedia_get_attributeCount(This,plCount)( (This)->lpVtbl -> get_attributeCount(This,plCount) )
#define IWMPMedia_getAttributeName(This,lIndex,pbstrItemName)( (This)->lpVtbl -> getAttributeName(This,lIndex,pbstrItemName) )
#define IWMPMedia_getItemInfo(This,bstrItemName,pbstrVal)( (This)->lpVtbl -> getItemInfo(This,bstrItemName,pbstrVal) )
#define IWMPMedia_setItemInfo(This,bstrItemName,bstrVal)( (This)->lpVtbl -> setItemInfo(This,bstrItemName,bstrVal) )
#define IWMPMedia_getItemInfoByAtom(This,lAtom,pbstrVal)( (This)->lpVtbl -> getItemInfoByAtom(This,lAtom,pbstrVal) )
#define IWMPMedia_isMemberOf(This,pPlaylist,pvarfIsMemberOf)( (This)->lpVtbl -> isMemberOf(This,pPlaylist,pvarfIsMemberOf) )
#define IWMPMedia_isReadOnlyItem(This,bstrItemName,pvarfIsReadOnly)( (This)->lpVtbl -> isReadOnlyItem(This,bstrItemName,pvarfIsReadOnly) )
#endif
#endif
#ifndef __IWMPControls_INTERFACE_DEFINED__
#define __IWMPControls_INTERFACE_DEFINED__
extern const IID IID_IWMPControls;
typedef struct IWMPControlsVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IWMPControls * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IWMPControls * This);
	ULONG(STDMETHODCALLTYPE * Release) (IWMPControls * This);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfoCount) (IWMPControls * This, UINT * pctinfo);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfo) (IWMPControls * This, UINT iTInfo, LCID lcid, ITypeInfo ** ppTInfo);
	HRESULT(STDMETHODCALLTYPE * GetIDsOfNames) (IWMPControls * This, REFIID riid, LPOLESTR * rgszNames, UINT cNames, LCID lcid, DISPID * rgDispId);
	HRESULT(STDMETHODCALLTYPE * Invoke) (IWMPControls * This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS * pDispParams, VARIANT * pVarResult, EXCEPINFO * pExcepInfo, UINT * puArgErr);
	HRESULT(STDMETHODCALLTYPE * get_isAvailable) (IWMPControls * This, BSTR bstrItem, VARIANT_BOOL * pIsAvailable);
	HRESULT(STDMETHODCALLTYPE * play) (IWMPControls * This);
	HRESULT(STDMETHODCALLTYPE * stop) (IWMPControls * This);
	HRESULT(STDMETHODCALLTYPE * pause) (IWMPControls * This);
	HRESULT(STDMETHODCALLTYPE * fastForward) (IWMPControls * This);
	HRESULT(STDMETHODCALLTYPE * fastReverse) (IWMPControls * This);
	HRESULT(STDMETHODCALLTYPE * get_currentPosition) (IWMPControls * This, double *pdCurrentPosition);
	HRESULT(STDMETHODCALLTYPE * put_currentPosition) (IWMPControls * This, double dCurrentPosition);
	HRESULT(STDMETHODCALLTYPE * get_currentPositionString) (IWMPControls * This, BSTR * pbstrCurrentPosition);
	HRESULT(STDMETHODCALLTYPE * next) (IWMPControls * This);
	HRESULT(STDMETHODCALLTYPE * previous) (IWMPControls * This);
	HRESULT(STDMETHODCALLTYPE * get_currentItem) (IWMPControls * This, IWMPMedia ** ppIWMPMedia);
	HRESULT(STDMETHODCALLTYPE * put_currentItem) (IWMPControls * This, IWMPMedia * pIWMPMedia);
	HRESULT(STDMETHODCALLTYPE * get_currentMarker) (IWMPControls * This, long *plMarker);
	HRESULT(STDMETHODCALLTYPE * put_currentMarker) (IWMPControls * This, long lMarker);
	HRESULT(STDMETHODCALLTYPE * playItem) (IWMPControls * This, IWMPMedia * pIWMPMedia);
	END_INTERFACE
}  IWMPControlsVtbl;
interface IWMPControls
{
	CONST_VTBL struct IWMPControlsVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IWMPControls_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IWMPControls_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define IWMPControls_Release(This)( (This)->lpVtbl -> Release(This) )
#define IWMPControls_GetTypeInfoCount(This,pctinfo)( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define IWMPControls_GetTypeInfo(This,iTInfo,lcid,ppTInfo)( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define IWMPControls_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define IWMPControls_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define IWMPControls_get_isAvailable(This,bstrItem,pIsAvailable)( (This)->lpVtbl -> get_isAvailable(This,bstrItem,pIsAvailable) )
#define IWMPControls_play(This)( (This)->lpVtbl -> play(This) )
#define IWMPControls_stop(This)( (This)->lpVtbl -> stop(This) )
#define IWMPControls_pause(This)( (This)->lpVtbl -> pause(This) )
#define IWMPControls_fastForward(This)( (This)->lpVtbl -> fastForward(This) )
#define IWMPControls_fastReverse(This)( (This)->lpVtbl -> fastReverse(This) )
#define IWMPControls_get_currentPosition(This,pdCurrentPosition)( (This)->lpVtbl -> get_currentPosition(This,pdCurrentPosition) )
#define IWMPControls_put_currentPosition(This,dCurrentPosition)( (This)->lpVtbl -> put_currentPosition(This,dCurrentPosition) )
#define IWMPControls_get_currentPositionString(This,pbstrCurrentPosition)( (This)->lpVtbl -> get_currentPositionString(This,pbstrCurrentPosition) )
#define IWMPControls_next(This)( (This)->lpVtbl -> next(This) )
#define IWMPControls_previous(This)( (This)->lpVtbl -> previous(This) )
#define IWMPControls_get_currentItem(This,ppIWMPMedia)( (This)->lpVtbl -> get_currentItem(This,ppIWMPMedia) )
#define IWMPControls_put_currentItem(This,pIWMPMedia)( (This)->lpVtbl -> put_currentItem(This,pIWMPMedia) )
#define IWMPControls_get_currentMarker(This,plMarker)( (This)->lpVtbl -> get_currentMarker(This,plMarker) )
#define IWMPControls_put_currentMarker(This,lMarker)( (This)->lpVtbl -> put_currentMarker(This,lMarker) )
#define IWMPControls_playItem(This,pIWMPMedia)( (This)->lpVtbl -> playItem(This,pIWMPMedia) )
#endif
#endif
#ifndef __IWMPSettings_INTERFACE_DEFINED__
#define __IWMPSettings_INTERFACE_DEFINED__
extern const IID IID_IWMPSettings;
typedef struct IWMPSettingsVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IWMPSettings * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IWMPSettings * This);
	ULONG(STDMETHODCALLTYPE * Release) (IWMPSettings * This);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfoCount) (IWMPSettings * This, UINT * pctinfo);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfo) (IWMPSettings * This, UINT iTInfo, LCID lcid, ITypeInfo ** ppTInfo);
	HRESULT(STDMETHODCALLTYPE * GetIDsOfNames) (IWMPSettings * This, REFIID riid, LPOLESTR * rgszNames, UINT cNames, LCID lcid, DISPID * rgDispId);
	HRESULT(STDMETHODCALLTYPE * Invoke) (IWMPSettings * This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS * pDispParams, VARIANT * pVarResult, EXCEPINFO * pExcepInfo, UINT * puArgErr);
	HRESULT(STDMETHODCALLTYPE * get_isAvailable) (IWMPSettings * This, BSTR bstrItem, VARIANT_BOOL * pIsAvailable);
	HRESULT(STDMETHODCALLTYPE * get_autoStart) (IWMPSettings * This, VARIANT_BOOL * pfAutoStart);
	HRESULT(STDMETHODCALLTYPE * put_autoStart) (IWMPSettings * This, VARIANT_BOOL fAutoStart);
	HRESULT(STDMETHODCALLTYPE * get_baseURL) (IWMPSettings * This, BSTR * pbstrBaseURL);
	HRESULT(STDMETHODCALLTYPE * put_baseURL) (IWMPSettings * This, BSTR bstrBaseURL);
	HRESULT(STDMETHODCALLTYPE * get_defaultFrame) (IWMPSettings * This, BSTR * pbstrDefaultFrame);
	HRESULT(STDMETHODCALLTYPE * put_defaultFrame) (IWMPSettings * This, BSTR bstrDefaultFrame);
	HRESULT(STDMETHODCALLTYPE * get_invokeURLs) (IWMPSettings * This, VARIANT_BOOL * pfInvokeURLs);
	HRESULT(STDMETHODCALLTYPE * put_invokeURLs) (IWMPSettings * This, VARIANT_BOOL fInvokeURLs);
	HRESULT(STDMETHODCALLTYPE * get_mute) (IWMPSettings * This, VARIANT_BOOL * pfMute);
	HRESULT(STDMETHODCALLTYPE * put_mute) (IWMPSettings * This, VARIANT_BOOL fMute);
	HRESULT(STDMETHODCALLTYPE * get_playCount) (IWMPSettings * This, long *plCount);
	HRESULT(STDMETHODCALLTYPE * put_playCount) (IWMPSettings * This, long lCount);
	HRESULT(STDMETHODCALLTYPE * get_rate) (IWMPSettings * This, double *pdRate);
	HRESULT(STDMETHODCALLTYPE * put_rate) (IWMPSettings * This, double dRate);
	HRESULT(STDMETHODCALLTYPE * get_balance) (IWMPSettings * This, long *plBalance);
	HRESULT(STDMETHODCALLTYPE * put_balance) (IWMPSettings * This, long lBalance);
	HRESULT(STDMETHODCALLTYPE * get_volume) (IWMPSettings * This, long *plVolume);
	HRESULT(STDMETHODCALLTYPE * put_volume) (IWMPSettings * This, long lVolume);
	HRESULT(STDMETHODCALLTYPE * getMode) (IWMPSettings * This, BSTR bstrMode, VARIANT_BOOL * pvarfMode);
	HRESULT(STDMETHODCALLTYPE * setMode) (IWMPSettings * This, BSTR bstrMode, VARIANT_BOOL varfMode);
	HRESULT(STDMETHODCALLTYPE * get_enableErrorDialogs) (IWMPSettings * This, VARIANT_BOOL * pfEnableErrorDialogs);
	HRESULT(STDMETHODCALLTYPE * put_enableErrorDialogs) (IWMPSettings * This, VARIANT_BOOL fEnableErrorDialogs);
	END_INTERFACE
}  IWMPSettingsVtbl;
interface IWMPSettings
{
	CONST_VTBL struct IWMPSettingsVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IWMPSettings_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IWMPSettings_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define IWMPSettings_Release(This)( (This)->lpVtbl -> Release(This) )
#define IWMPSettings_GetTypeInfoCount(This,pctinfo)( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define IWMPSettings_GetTypeInfo(This,iTInfo,lcid,ppTInfo)( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define IWMPSettings_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define IWMPSettings_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define IWMPSettings_get_isAvailable(This,bstrItem,pIsAvailable)( (This)->lpVtbl -> get_isAvailable(This,bstrItem,pIsAvailable) )
#define IWMPSettings_get_autoStart(This,pfAutoStart)( (This)->lpVtbl -> get_autoStart(This,pfAutoStart) )
#define IWMPSettings_put_autoStart(This,fAutoStart)( (This)->lpVtbl -> put_autoStart(This,fAutoStart) )
#define IWMPSettings_get_baseURL(This,pbstrBaseURL)( (This)->lpVtbl -> get_baseURL(This,pbstrBaseURL) )
#define IWMPSettings_put_baseURL(This,bstrBaseURL)( (This)->lpVtbl -> put_baseURL(This,bstrBaseURL) )
#define IWMPSettings_get_defaultFrame(This,pbstrDefaultFrame)( (This)->lpVtbl -> get_defaultFrame(This,pbstrDefaultFrame) )
#define IWMPSettings_put_defaultFrame(This,bstrDefaultFrame)( (This)->lpVtbl -> put_defaultFrame(This,bstrDefaultFrame) )
#define IWMPSettings_get_invokeURLs(This,pfInvokeURLs)( (This)->lpVtbl -> get_invokeURLs(This,pfInvokeURLs) )
#define IWMPSettings_put_invokeURLs(This,fInvokeURLs)( (This)->lpVtbl -> put_invokeURLs(This,fInvokeURLs) )
#define IWMPSettings_get_mute(This,pfMute)( (This)->lpVtbl -> get_mute(This,pfMute) )
#define IWMPSettings_put_mute(This,fMute)( (This)->lpVtbl -> put_mute(This,fMute) )
#define IWMPSettings_get_playCount(This,plCount)( (This)->lpVtbl -> get_playCount(This,plCount) )
#define IWMPSettings_put_playCount(This,lCount)( (This)->lpVtbl -> put_playCount(This,lCount) )
#define IWMPSettings_get_rate(This,pdRate)( (This)->lpVtbl -> get_rate(This,pdRate) )
#define IWMPSettings_put_rate(This,dRate)( (This)->lpVtbl -> put_rate(This,dRate) )
#define IWMPSettings_get_balance(This,plBalance)( (This)->lpVtbl -> get_balance(This,plBalance) )
#define IWMPSettings_put_balance(This,lBalance)( (This)->lpVtbl -> put_balance(This,lBalance) )
#define IWMPSettings_get_volume(This,plVolume)( (This)->lpVtbl -> get_volume(This,plVolume) )
#define IWMPSettings_put_volume(This,lVolume)( (This)->lpVtbl -> put_volume(This,lVolume) )
#define IWMPSettings_getMode(This,bstrMode,pvarfMode)( (This)->lpVtbl -> getMode(This,bstrMode,pvarfMode) )
#define IWMPSettings_setMode(This,bstrMode,varfMode)( (This)->lpVtbl -> setMode(This,bstrMode,varfMode) )
#define IWMPSettings_get_enableErrorDialogs(This,pfEnableErrorDialogs)( (This)->lpVtbl -> get_enableErrorDialogs(This,pfEnableErrorDialogs) )
#define IWMPSettings_put_enableErrorDialogs(This,fEnableErrorDialogs)( (This)->lpVtbl -> put_enableErrorDialogs(This,fEnableErrorDialogs) )
#endif
#endif
#ifndef __IWMPClosedCaption_INTERFACE_DEFINED__
#define __IWMPClosedCaption_INTERFACE_DEFINED__
extern const IID IID_IWMPClosedCaption;
typedef struct IWMPClosedCaptionVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IWMPClosedCaption * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IWMPClosedCaption * This);
	ULONG(STDMETHODCALLTYPE * Release) (IWMPClosedCaption * This);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfoCount) (IWMPClosedCaption * This, UINT * pctinfo);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfo) (IWMPClosedCaption * This, UINT iTInfo, LCID lcid, ITypeInfo ** ppTInfo);
	HRESULT(STDMETHODCALLTYPE * GetIDsOfNames) (IWMPClosedCaption * This, REFIID riid, LPOLESTR * rgszNames, UINT cNames, LCID lcid, DISPID * rgDispId);
	HRESULT(STDMETHODCALLTYPE * Invoke) (IWMPClosedCaption * This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS * pDispParams, VARIANT * pVarResult, EXCEPINFO * pExcepInfo, UINT * puArgErr);
	HRESULT(STDMETHODCALLTYPE * get_SAMIStyle) (IWMPClosedCaption * This, BSTR * pbstrSAMIStyle);
	HRESULT(STDMETHODCALLTYPE * put_SAMIStyle) (IWMPClosedCaption * This, BSTR bstrSAMIStyle);
	HRESULT(STDMETHODCALLTYPE * get_SAMILang) (IWMPClosedCaption * This, BSTR * pbstrSAMILang);
	HRESULT(STDMETHODCALLTYPE * put_SAMILang) (IWMPClosedCaption * This, BSTR bstrSAMILang);
	HRESULT(STDMETHODCALLTYPE * get_SAMIFileName) (IWMPClosedCaption * This, BSTR * pbstrSAMIFileName);
	HRESULT(STDMETHODCALLTYPE * put_SAMIFileName) (IWMPClosedCaption * This, BSTR bstrSAMIFileName);
	HRESULT(STDMETHODCALLTYPE * get_captioningId) (IWMPClosedCaption * This, BSTR * pbstrCaptioningID);
	HRESULT(STDMETHODCALLTYPE * put_captioningId) (IWMPClosedCaption * This, BSTR bstrCaptioningID);
	END_INTERFACE
}  IWMPClosedCaptionVtbl;
interface IWMPClosedCaption
{
	CONST_VTBL struct IWMPClosedCaptionVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IWMPClosedCaption_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IWMPClosedCaption_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define IWMPClosedCaption_Release(This)( (This)->lpVtbl -> Release(This) )
#define IWMPClosedCaption_GetTypeInfoCount(This,pctinfo)( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define IWMPClosedCaption_GetTypeInfo(This,iTInfo,lcid,ppTInfo)( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define IWMPClosedCaption_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define IWMPClosedCaption_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define IWMPClosedCaption_get_SAMIStyle(This,pbstrSAMIStyle)( (This)->lpVtbl -> get_SAMIStyle(This,pbstrSAMIStyle) )
#define IWMPClosedCaption_put_SAMIStyle(This,bstrSAMIStyle)( (This)->lpVtbl -> put_SAMIStyle(This,bstrSAMIStyle) )
#define IWMPClosedCaption_get_SAMILang(This,pbstrSAMILang)( (This)->lpVtbl -> get_SAMILang(This,pbstrSAMILang) )
#define IWMPClosedCaption_put_SAMILang(This,bstrSAMILang)( (This)->lpVtbl -> put_SAMILang(This,bstrSAMILang) )
#define IWMPClosedCaption_get_SAMIFileName(This,pbstrSAMIFileName)( (This)->lpVtbl -> get_SAMIFileName(This,pbstrSAMIFileName) )
#define IWMPClosedCaption_put_SAMIFileName(This,bstrSAMIFileName)( (This)->lpVtbl -> put_SAMIFileName(This,bstrSAMIFileName) )
#define IWMPClosedCaption_get_captioningId(This,pbstrCaptioningID)( (This)->lpVtbl -> get_captioningId(This,pbstrCaptioningID) )
#define IWMPClosedCaption_put_captioningId(This,bstrCaptioningID)( (This)->lpVtbl -> put_captioningId(This,bstrCaptioningID) )
#endif
#endif
#ifndef __IWMPPlaylist_INTERFACE_DEFINED__
#define __IWMPPlaylist_INTERFACE_DEFINED__
extern const IID IID_IWMPPlaylist;
typedef struct IWMPPlaylistVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IWMPPlaylist * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IWMPPlaylist * This);
	ULONG(STDMETHODCALLTYPE * Release) (IWMPPlaylist * This);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfoCount) (IWMPPlaylist * This, UINT * pctinfo);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfo) (IWMPPlaylist * This, UINT iTInfo, LCID lcid, ITypeInfo ** ppTInfo);
	HRESULT(STDMETHODCALLTYPE * GetIDsOfNames) (IWMPPlaylist * This, REFIID riid, LPOLESTR * rgszNames, UINT cNames, LCID lcid, DISPID * rgDispId);
	HRESULT(STDMETHODCALLTYPE * Invoke) (IWMPPlaylist * This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS * pDispParams, VARIANT * pVarResult, EXCEPINFO * pExcepInfo, UINT * puArgErr);
	HRESULT(STDMETHODCALLTYPE * get_count) (IWMPPlaylist * This, long *plCount);
	HRESULT(STDMETHODCALLTYPE * get_name) (IWMPPlaylist * This, BSTR * pbstrName);
	HRESULT(STDMETHODCALLTYPE * put_name) (IWMPPlaylist * This, BSTR bstrName);
	HRESULT(STDMETHODCALLTYPE * get_attributeCount) (IWMPPlaylist * This, long *plCount);
	HRESULT(STDMETHODCALLTYPE * get_attributeName) (IWMPPlaylist * This, long lIndex, BSTR * pbstrAttributeName);
	HRESULT(STDMETHODCALLTYPE * get_item) (IWMPPlaylist * This, long lIndex, IWMPMedia ** ppIWMPMedia);
	HRESULT(STDMETHODCALLTYPE * getItemInfo) (IWMPPlaylist * This, BSTR bstrName, BSTR * pbstrVal);
	HRESULT(STDMETHODCALLTYPE * setItemInfo) (IWMPPlaylist * This, BSTR bstrName, BSTR bstrValue);
	HRESULT(STDMETHODCALLTYPE * get_isIdentical) (IWMPPlaylist * This, IWMPPlaylist * pIWMPPlaylist, VARIANT_BOOL * pvbool);
	HRESULT(STDMETHODCALLTYPE * clear) (IWMPPlaylist * This);
	HRESULT(STDMETHODCALLTYPE * insertItem) (IWMPPlaylist * This, long lIndex, IWMPMedia * pIWMPMedia);
	HRESULT(STDMETHODCALLTYPE * appendItem) (IWMPPlaylist * This, IWMPMedia * pIWMPMedia);
	HRESULT(STDMETHODCALLTYPE * removeItem) (IWMPPlaylist * This, IWMPMedia * pIWMPMedia);
	HRESULT(STDMETHODCALLTYPE * moveItem) (IWMPPlaylist * This, long lIndexOld, long lIndexNew);
	END_INTERFACE
}  IWMPPlaylistVtbl;
interface IWMPPlaylist
{
	CONST_VTBL struct IWMPPlaylistVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IWMPPlaylist_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IWMPPlaylist_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define IWMPPlaylist_Release(This)( (This)->lpVtbl -> Release(This) )
#define IWMPPlaylist_GetTypeInfoCount(This,pctinfo)( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define IWMPPlaylist_GetTypeInfo(This,iTInfo,lcid,ppTInfo)( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define IWMPPlaylist_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define IWMPPlaylist_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define IWMPPlaylist_get_count(This,plCount)( (This)->lpVtbl -> get_count(This,plCount) )
#define IWMPPlaylist_get_name(This,pbstrName)( (This)->lpVtbl -> get_name(This,pbstrName) )
#define IWMPPlaylist_put_name(This,bstrName)( (This)->lpVtbl -> put_name(This,bstrName) )
#define IWMPPlaylist_get_attributeCount(This,plCount)( (This)->lpVtbl -> get_attributeCount(This,plCount) )
#define IWMPPlaylist_get_attributeName(This,lIndex,pbstrAttributeName)( (This)->lpVtbl -> get_attributeName(This,lIndex,pbstrAttributeName) )
#define IWMPPlaylist_get_item(This,lIndex,ppIWMPMedia)( (This)->lpVtbl -> get_item(This,lIndex,ppIWMPMedia) )
#define IWMPPlaylist_getItemInfo(This,bstrName,pbstrVal)( (This)->lpVtbl -> getItemInfo(This,bstrName,pbstrVal) )
#define IWMPPlaylist_setItemInfo(This,bstrName,bstrValue)( (This)->lpVtbl -> setItemInfo(This,bstrName,bstrValue) )
#define IWMPPlaylist_get_isIdentical(This,pIWMPPlaylist,pvbool)( (This)->lpVtbl -> get_isIdentical(This,pIWMPPlaylist,pvbool) )
#define IWMPPlaylist_clear(This)( (This)->lpVtbl -> clear(This) )
#define IWMPPlaylist_insertItem(This,lIndex,pIWMPMedia)( (This)->lpVtbl -> insertItem(This,lIndex,pIWMPMedia) )
#define IWMPPlaylist_appendItem(This,pIWMPMedia)( (This)->lpVtbl -> appendItem(This,pIWMPMedia) )
#define IWMPPlaylist_removeItem(This,pIWMPMedia)( (This)->lpVtbl -> removeItem(This,pIWMPMedia) )
#define IWMPPlaylist_moveItem(This,lIndexOld,lIndexNew)( (This)->lpVtbl -> moveItem(This,lIndexOld,lIndexNew) )
#endif
#endif
#ifndef __IWMPCdrom_INTERFACE_DEFINED__
#define __IWMPCdrom_INTERFACE_DEFINED__
extern const IID IID_IWMPCdrom;
typedef struct IWMPCdromVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IWMPCdrom * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IWMPCdrom * This);
	ULONG(STDMETHODCALLTYPE * Release) (IWMPCdrom * This);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfoCount) (IWMPCdrom * This, UINT * pctinfo);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfo) (IWMPCdrom * This, UINT iTInfo, LCID lcid, ITypeInfo ** ppTInfo);
	HRESULT(STDMETHODCALLTYPE * GetIDsOfNames) (IWMPCdrom * This, REFIID riid, LPOLESTR * rgszNames, UINT cNames, LCID lcid, DISPID * rgDispId);
	HRESULT(STDMETHODCALLTYPE * Invoke) (IWMPCdrom * This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS * pDispParams, VARIANT * pVarResult, EXCEPINFO * pExcepInfo, UINT * puArgErr);
	HRESULT(STDMETHODCALLTYPE * get_driveSpecifier) (IWMPCdrom * This, BSTR * pbstrDrive);
	HRESULT(STDMETHODCALLTYPE * get_playlist) (IWMPCdrom * This, IWMPPlaylist ** ppPlaylist);
	HRESULT(STDMETHODCALLTYPE * eject) (IWMPCdrom * This);
	END_INTERFACE
}  IWMPCdromVtbl;
interface IWMPCdrom
{
	CONST_VTBL struct IWMPCdromVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IWMPCdrom_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IWMPCdrom_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define IWMPCdrom_Release(This)( (This)->lpVtbl -> Release(This) )
#define IWMPCdrom_GetTypeInfoCount(This,pctinfo)( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define IWMPCdrom_GetTypeInfo(This,iTInfo,lcid,ppTInfo)( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define IWMPCdrom_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define IWMPCdrom_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define IWMPCdrom_get_driveSpecifier(This,pbstrDrive)( (This)->lpVtbl -> get_driveSpecifier(This,pbstrDrive) )
#define IWMPCdrom_get_playlist(This,ppPlaylist)( (This)->lpVtbl -> get_playlist(This,ppPlaylist) )
#define IWMPCdrom_eject(This)( (This)->lpVtbl -> eject(This) )
#endif
#endif
#ifndef __IWMPCdromCollection_INTERFACE_DEFINED__
#define __IWMPCdromCollection_INTERFACE_DEFINED__
extern const IID IID_IWMPCdromCollection;
typedef struct IWMPCdromCollectionVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IWMPCdromCollection * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IWMPCdromCollection * This);
	ULONG(STDMETHODCALLTYPE * Release) (IWMPCdromCollection * This);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfoCount) (IWMPCdromCollection * This, UINT * pctinfo);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfo) (IWMPCdromCollection * This, UINT iTInfo, LCID lcid, ITypeInfo ** ppTInfo);
	HRESULT(STDMETHODCALLTYPE * GetIDsOfNames) (IWMPCdromCollection * This, REFIID riid, LPOLESTR * rgszNames, UINT cNames, LCID lcid, DISPID * rgDispId);
	HRESULT(STDMETHODCALLTYPE * Invoke) (IWMPCdromCollection * This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS * pDispParams, VARIANT * pVarResult, EXCEPINFO * pExcepInfo, UINT * puArgErr);
	HRESULT(STDMETHODCALLTYPE * get_count) (IWMPCdromCollection * This, long *plCount);
	HRESULT(STDMETHODCALLTYPE * item) (IWMPCdromCollection * This, long lIndex, IWMPCdrom ** ppItem);
	HRESULT(STDMETHODCALLTYPE * getByDriveSpecifier) (IWMPCdromCollection * This, BSTR bstrDriveSpecifier, IWMPCdrom ** ppCdrom);
	END_INTERFACE
}  IWMPCdromCollectionVtbl;
interface IWMPCdromCollection
{
	CONST_VTBL struct IWMPCdromCollectionVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IWMPCdromCollection_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IWMPCdromCollection_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define IWMPCdromCollection_Release(This)( (This)->lpVtbl -> Release(This) )
#define IWMPCdromCollection_GetTypeInfoCount(This,pctinfo)( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define IWMPCdromCollection_GetTypeInfo(This,iTInfo,lcid,ppTInfo)( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define IWMPCdromCollection_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define IWMPCdromCollection_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define IWMPCdromCollection_get_count(This,plCount)( (This)->lpVtbl -> get_count(This,plCount) )
#define IWMPCdromCollection_item(This,lIndex,ppItem)( (This)->lpVtbl -> item(This,lIndex,ppItem) )
#define IWMPCdromCollection_getByDriveSpecifier(This,bstrDriveSpecifier,ppCdrom)( (This)->lpVtbl -> getByDriveSpecifier(This,bstrDriveSpecifier,ppCdrom) )
#endif
#endif
#ifndef __IWMPStringCollection_INTERFACE_DEFINED__
#define __IWMPStringCollection_INTERFACE_DEFINED__
extern const IID IID_IWMPStringCollection;
typedef struct IWMPStringCollectionVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IWMPStringCollection * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IWMPStringCollection * This);
	ULONG(STDMETHODCALLTYPE * Release) (IWMPStringCollection * This);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfoCount) (IWMPStringCollection * This, UINT * pctinfo);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfo) (IWMPStringCollection * This, UINT iTInfo, LCID lcid, ITypeInfo ** ppTInfo);
	HRESULT(STDMETHODCALLTYPE * GetIDsOfNames) (IWMPStringCollection * This, REFIID riid, LPOLESTR * rgszNames, UINT cNames, LCID lcid, DISPID * rgDispId);
	HRESULT(STDMETHODCALLTYPE * Invoke) (IWMPStringCollection * This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS * pDispParams, VARIANT * pVarResult, EXCEPINFO * pExcepInfo, UINT * puArgErr);
	HRESULT(STDMETHODCALLTYPE * get_count) (IWMPStringCollection * This, long *plCount);
	HRESULT(STDMETHODCALLTYPE * item) (IWMPStringCollection * This, long lIndex, BSTR * pbstrString);
	END_INTERFACE
}  IWMPStringCollectionVtbl;
interface IWMPStringCollection
{
	CONST_VTBL struct IWMPStringCollectionVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IWMPStringCollection_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IWMPStringCollection_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define IWMPStringCollection_Release(This)( (This)->lpVtbl -> Release(This) )
#define IWMPStringCollection_GetTypeInfoCount(This,pctinfo)( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define IWMPStringCollection_GetTypeInfo(This,iTInfo,lcid,ppTInfo)( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define IWMPStringCollection_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define IWMPStringCollection_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define IWMPStringCollection_get_count(This,plCount)( (This)->lpVtbl -> get_count(This,plCount) )
#define IWMPStringCollection_item(This,lIndex,pbstrString)( (This)->lpVtbl -> item(This,lIndex,pbstrString) )
#endif
#endif
#ifndef __IWMPMediaCollection_INTERFACE_DEFINED__
#define __IWMPMediaCollection_INTERFACE_DEFINED__
extern const IID IID_IWMPMediaCollection;
typedef struct IWMPMediaCollectionVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IWMPMediaCollection * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IWMPMediaCollection * This);
	ULONG(STDMETHODCALLTYPE * Release) (IWMPMediaCollection * This);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfoCount) (IWMPMediaCollection * This, UINT * pctinfo);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfo) (IWMPMediaCollection * This, UINT iTInfo, LCID lcid, ITypeInfo ** ppTInfo);
	HRESULT(STDMETHODCALLTYPE * GetIDsOfNames) (IWMPMediaCollection * This, REFIID riid, LPOLESTR * rgszNames, UINT cNames, LCID lcid, DISPID * rgDispId);
	HRESULT(STDMETHODCALLTYPE * Invoke) (IWMPMediaCollection * This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS * pDispParams, VARIANT * pVarResult, EXCEPINFO * pExcepInfo, UINT * puArgErr);
	HRESULT(STDMETHODCALLTYPE * add) (IWMPMediaCollection * This, BSTR bstrURL, IWMPMedia ** ppItem);
	HRESULT(STDMETHODCALLTYPE * getAll) (IWMPMediaCollection * This, IWMPPlaylist ** ppMediaItems);
	HRESULT(STDMETHODCALLTYPE * getByName) (IWMPMediaCollection * This, BSTR bstrName, IWMPPlaylist ** ppMediaItems);
	HRESULT(STDMETHODCALLTYPE * getByGenre) (IWMPMediaCollection * This, BSTR bstrGenre, IWMPPlaylist ** ppMediaItems);
	HRESULT(STDMETHODCALLTYPE * getByAuthor) (IWMPMediaCollection * This, BSTR bstrAuthor, IWMPPlaylist ** ppMediaItems);
	HRESULT(STDMETHODCALLTYPE * getByAlbum) (IWMPMediaCollection * This, BSTR bstrAlbum, IWMPPlaylist ** ppMediaItems);
	HRESULT(STDMETHODCALLTYPE * getByAttribute) (IWMPMediaCollection * This, BSTR bstrAttribute, BSTR bstrValue, IWMPPlaylist ** ppMediaItems);
	HRESULT(STDMETHODCALLTYPE * remove) (IWMPMediaCollection * This, IWMPMedia * pItem, VARIANT_BOOL varfDeleteFile);
	HRESULT(STDMETHODCALLTYPE * getAttributeStringCollection) (IWMPMediaCollection * This, BSTR bstrAttribute, BSTR bstrMediaType, IWMPStringCollection ** ppStringCollection);
	HRESULT(STDMETHODCALLTYPE * getMediaAtom) (IWMPMediaCollection * This, BSTR bstrItemName, long *plAtom);
	HRESULT(STDMETHODCALLTYPE * setDeleted) (IWMPMediaCollection * This, IWMPMedia * pItem, VARIANT_BOOL varfIsDeleted);
	HRESULT(STDMETHODCALLTYPE * isDeleted) (IWMPMediaCollection * This, IWMPMedia * pItem, VARIANT_BOOL * pvarfIsDeleted);
	END_INTERFACE
}  IWMPMediaCollectionVtbl;
interface IWMPMediaCollection
{
	CONST_VTBL struct IWMPMediaCollectionVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IWMPMediaCollection_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IWMPMediaCollection_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define IWMPMediaCollection_Release(This)( (This)->lpVtbl -> Release(This) )
#define IWMPMediaCollection_GetTypeInfoCount(This,pctinfo)( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define IWMPMediaCollection_GetTypeInfo(This,iTInfo,lcid,ppTInfo)( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define IWMPMediaCollection_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define IWMPMediaCollection_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define IWMPMediaCollection_add(This,bstrURL,ppItem)( (This)->lpVtbl -> add(This,bstrURL,ppItem) )
#define IWMPMediaCollection_getAll(This,ppMediaItems)( (This)->lpVtbl -> getAll(This,ppMediaItems) )
#define IWMPMediaCollection_getByName(This,bstrName,ppMediaItems)( (This)->lpVtbl -> getByName(This,bstrName,ppMediaItems) )
#define IWMPMediaCollection_getByGenre(This,bstrGenre,ppMediaItems)( (This)->lpVtbl -> getByGenre(This,bstrGenre,ppMediaItems) )
#define IWMPMediaCollection_getByAuthor(This,bstrAuthor,ppMediaItems)( (This)->lpVtbl -> getByAuthor(This,bstrAuthor,ppMediaItems) )
#define IWMPMediaCollection_getByAlbum(This,bstrAlbum,ppMediaItems)( (This)->lpVtbl -> getByAlbum(This,bstrAlbum,ppMediaItems) )
#define IWMPMediaCollection_getByAttribute(This,bstrAttribute,bstrValue,ppMediaItems)( (This)->lpVtbl -> getByAttribute(This,bstrAttribute,bstrValue,ppMediaItems) )
#define IWMPMediaCollection_remove(This,pItem,varfDeleteFile)( (This)->lpVtbl -> remove(This,pItem,varfDeleteFile) )
#define IWMPMediaCollection_getAttributeStringCollection(This,bstrAttribute,bstrMediaType,ppStringCollection)( (This)->lpVtbl -> getAttributeStringCollection(This,bstrAttribute,bstrMediaType,ppStringCollection) )
#define IWMPMediaCollection_getMediaAtom(This,bstrItemName,plAtom)( (This)->lpVtbl -> getMediaAtom(This,bstrItemName,plAtom) )
#define IWMPMediaCollection_setDeleted(This,pItem,varfIsDeleted)( (This)->lpVtbl -> setDeleted(This,pItem,varfIsDeleted) )
#define IWMPMediaCollection_isDeleted(This,pItem,pvarfIsDeleted)( (This)->lpVtbl -> isDeleted(This,pItem,pvarfIsDeleted) )
#endif
#endif
#ifndef __IWMPPlaylistArray_INTERFACE_DEFINED__
#define __IWMPPlaylistArray_INTERFACE_DEFINED__
extern const IID IID_IWMPPlaylistArray;
typedef struct IWMPPlaylistArrayVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IWMPPlaylistArray * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IWMPPlaylistArray * This);
	ULONG(STDMETHODCALLTYPE * Release) (IWMPPlaylistArray * This);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfoCount) (IWMPPlaylistArray * This, UINT * pctinfo);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfo) (IWMPPlaylistArray * This, UINT iTInfo, LCID lcid, ITypeInfo ** ppTInfo);
	HRESULT(STDMETHODCALLTYPE * GetIDsOfNames) (IWMPPlaylistArray * This, REFIID riid, LPOLESTR * rgszNames, UINT cNames, LCID lcid, DISPID * rgDispId);
	HRESULT(STDMETHODCALLTYPE * Invoke) (IWMPPlaylistArray * This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS * pDispParams, VARIANT * pVarResult, EXCEPINFO * pExcepInfo, UINT * puArgErr);
	HRESULT(STDMETHODCALLTYPE * get_count) (IWMPPlaylistArray * This, long *plCount);
	HRESULT(STDMETHODCALLTYPE * item) (IWMPPlaylistArray * This, long lIndex, IWMPPlaylist ** ppItem);
	END_INTERFACE
}  IWMPPlaylistArrayVtbl;
interface IWMPPlaylistArray
{
	CONST_VTBL struct IWMPPlaylistArrayVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IWMPPlaylistArray_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IWMPPlaylistArray_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define IWMPPlaylistArray_Release(This)( (This)->lpVtbl -> Release(This) )
#define IWMPPlaylistArray_GetTypeInfoCount(This,pctinfo)( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define IWMPPlaylistArray_GetTypeInfo(This,iTInfo,lcid,ppTInfo)( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define IWMPPlaylistArray_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define IWMPPlaylistArray_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define IWMPPlaylistArray_get_count(This,plCount)( (This)->lpVtbl -> get_count(This,plCount) )
#define IWMPPlaylistArray_item(This,lIndex,ppItem)( (This)->lpVtbl -> item(This,lIndex,ppItem) )
#endif
#endif
#ifndef __IWMPPlaylistCollection_INTERFACE_DEFINED__
#define __IWMPPlaylistCollection_INTERFACE_DEFINED__
extern const IID IID_IWMPPlaylistCollection;
typedef struct IWMPPlaylistCollectionVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IWMPPlaylistCollection * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IWMPPlaylistCollection * This);
	ULONG(STDMETHODCALLTYPE * Release) (IWMPPlaylistCollection * This);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfoCount) (IWMPPlaylistCollection * This, UINT * pctinfo);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfo) (IWMPPlaylistCollection * This, UINT iTInfo, LCID lcid, ITypeInfo ** ppTInfo);
	HRESULT(STDMETHODCALLTYPE * GetIDsOfNames) (IWMPPlaylistCollection * This, REFIID riid, LPOLESTR * rgszNames, UINT cNames, LCID lcid, DISPID * rgDispId);
	HRESULT(STDMETHODCALLTYPE * Invoke) (IWMPPlaylistCollection * This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS * pDispParams, VARIANT * pVarResult, EXCEPINFO * pExcepInfo, UINT * puArgErr);
	HRESULT(STDMETHODCALLTYPE * newPlaylist) (IWMPPlaylistCollection * This, BSTR bstrName, IWMPPlaylist ** ppItem);
	HRESULT(STDMETHODCALLTYPE * getAll) (IWMPPlaylistCollection * This, IWMPPlaylistArray ** ppPlaylistArray);
	HRESULT(STDMETHODCALLTYPE * getByName) (IWMPPlaylistCollection * This, BSTR bstrName, IWMPPlaylistArray ** ppPlaylistArray);
	HRESULT(STDMETHODCALLTYPE * remove) (IWMPPlaylistCollection * This, IWMPPlaylist * pItem);
	HRESULT(STDMETHODCALLTYPE * setDeleted) (IWMPPlaylistCollection * This, IWMPPlaylist * pItem, VARIANT_BOOL varfIsDeleted);
	HRESULT(STDMETHODCALLTYPE * isDeleted) (IWMPPlaylistCollection * This, IWMPPlaylist * pItem, VARIANT_BOOL * pvarfIsDeleted);
	HRESULT(STDMETHODCALLTYPE * importPlaylist) (IWMPPlaylistCollection * This, IWMPPlaylist * pItem, IWMPPlaylist ** ppImportedItem);
	END_INTERFACE
}  IWMPPlaylistCollectionVtbl;
interface IWMPPlaylistCollection
{
	CONST_VTBL struct IWMPPlaylistCollectionVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IWMPPlaylistCollection_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IWMPPlaylistCollection_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define IWMPPlaylistCollection_Release(This)( (This)->lpVtbl -> Release(This) )
#define IWMPPlaylistCollection_GetTypeInfoCount(This,pctinfo)( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define IWMPPlaylistCollection_GetTypeInfo(This,iTInfo,lcid,ppTInfo)( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define IWMPPlaylistCollection_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define IWMPPlaylistCollection_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define IWMPPlaylistCollection_newPlaylist(This,bstrName,ppItem)( (This)->lpVtbl -> newPlaylist(This,bstrName,ppItem) )
#define IWMPPlaylistCollection_getAll(This,ppPlaylistArray)( (This)->lpVtbl -> getAll(This,ppPlaylistArray) )
#define IWMPPlaylistCollection_getByName(This,bstrName,ppPlaylistArray)( (This)->lpVtbl -> getByName(This,bstrName,ppPlaylistArray) )
#define IWMPPlaylistCollection_remove(This,pItem)( (This)->lpVtbl -> remove(This,pItem) )
#define IWMPPlaylistCollection_setDeleted(This,pItem,varfIsDeleted)( (This)->lpVtbl -> setDeleted(This,pItem,varfIsDeleted) )
#define IWMPPlaylistCollection_isDeleted(This,pItem,pvarfIsDeleted)( (This)->lpVtbl -> isDeleted(This,pItem,pvarfIsDeleted) )
#define IWMPPlaylistCollection_importPlaylist(This,pItem,ppImportedItem)( (This)->lpVtbl -> importPlaylist(This,pItem,ppImportedItem) )
#endif
#endif
#ifndef __IWMPNetwork_INTERFACE_DEFINED__
#define __IWMPNetwork_INTERFACE_DEFINED__
extern const IID IID_IWMPNetwork;
typedef struct IWMPNetworkVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IWMPNetwork * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IWMPNetwork * This);
	ULONG(STDMETHODCALLTYPE * Release) (IWMPNetwork * This);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfoCount) (IWMPNetwork * This, UINT * pctinfo);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfo) (IWMPNetwork * This, UINT iTInfo, LCID lcid, ITypeInfo ** ppTInfo);
	HRESULT(STDMETHODCALLTYPE * GetIDsOfNames) (IWMPNetwork * This, REFIID riid, LPOLESTR * rgszNames, UINT cNames, LCID lcid, DISPID * rgDispId);
	HRESULT(STDMETHODCALLTYPE * Invoke) (IWMPNetwork * This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS * pDispParams, VARIANT * pVarResult, EXCEPINFO * pExcepInfo, UINT * puArgErr);
	HRESULT(STDMETHODCALLTYPE * get_bandWidth) (IWMPNetwork * This, long *plBandwidth);
	HRESULT(STDMETHODCALLTYPE * get_recoveredPackets) (IWMPNetwork * This, long *plRecoveredPackets);
	HRESULT(STDMETHODCALLTYPE * get_sourceProtocol) (IWMPNetwork * This, BSTR * pbstrSourceProtocol);
	HRESULT(STDMETHODCALLTYPE * get_receivedPackets) (IWMPNetwork * This, long *plReceivedPackets);
	HRESULT(STDMETHODCALLTYPE * get_lostPackets) (IWMPNetwork * This, long *plLostPackets);
	HRESULT(STDMETHODCALLTYPE * get_receptionQuality) (IWMPNetwork * This, long *plReceptionQuality);
	HRESULT(STDMETHODCALLTYPE * get_bufferingCount) (IWMPNetwork * This, long *plBufferingCount);
	HRESULT(STDMETHODCALLTYPE * get_bufferingProgress) (IWMPNetwork * This, long *plBufferingProgress);
	HRESULT(STDMETHODCALLTYPE * get_bufferingTime) (IWMPNetwork * This, long *plBufferingTime);
	HRESULT(STDMETHODCALLTYPE * put_bufferingTime) (IWMPNetwork * This, long lBufferingTime);
	HRESULT(STDMETHODCALLTYPE * get_frameRate) (IWMPNetwork * This, long *plFrameRate);
	HRESULT(STDMETHODCALLTYPE * get_maxBitRate) (IWMPNetwork * This, long *plBitRate);
	HRESULT(STDMETHODCALLTYPE * get_bitRate) (IWMPNetwork * This, long *plBitRate);
	HRESULT(STDMETHODCALLTYPE * getProxySettings) (IWMPNetwork * This, BSTR bstrProtocol, long *plProxySetting);
	HRESULT(STDMETHODCALLTYPE * setProxySettings) (IWMPNetwork * This, BSTR bstrProtocol, long lProxySetting);
	HRESULT(STDMETHODCALLTYPE * getProxyName) (IWMPNetwork * This, BSTR bstrProtocol, BSTR * pbstrProxyName);
	HRESULT(STDMETHODCALLTYPE * setProxyName) (IWMPNetwork * This, BSTR bstrProtocol, BSTR bstrProxyName);
	HRESULT(STDMETHODCALLTYPE * getProxyPort) (IWMPNetwork * This, BSTR bstrProtocol, long *lProxyPort);
	HRESULT(STDMETHODCALLTYPE * setProxyPort) (IWMPNetwork * This, BSTR bstrProtocol, long lProxyPort);
	HRESULT(STDMETHODCALLTYPE * getProxyExceptionList) (IWMPNetwork * This, BSTR bstrProtocol, BSTR * pbstrExceptionList);
	HRESULT(STDMETHODCALLTYPE * setProxyExceptionList) (IWMPNetwork * This, BSTR bstrProtocol, BSTR pbstrExceptionList);
	HRESULT(STDMETHODCALLTYPE * getProxyBypassForLocal) (IWMPNetwork * This, BSTR bstrProtocol, VARIANT_BOOL * pfBypassForLocal);
	HRESULT(STDMETHODCALLTYPE * setProxyBypassForLocal) (IWMPNetwork * This, BSTR bstrProtocol, VARIANT_BOOL fBypassForLocal);
	HRESULT(STDMETHODCALLTYPE * get_maxBandwidth) (IWMPNetwork * This, long *lMaxBandwidth);
	HRESULT(STDMETHODCALLTYPE * put_maxBandwidth) (IWMPNetwork * This, long lMaxBandwidth);
	HRESULT(STDMETHODCALLTYPE * get_downloadProgress) (IWMPNetwork * This, long *plDownloadProgress);
	HRESULT(STDMETHODCALLTYPE * get_encodedFrameRate) (IWMPNetwork * This, long *plFrameRate);
	HRESULT(STDMETHODCALLTYPE * get_framesSkipped) (IWMPNetwork * This, long *plFrames);
	END_INTERFACE
}  IWMPNetworkVtbl;
interface IWMPNetwork
{
	CONST_VTBL struct IWMPNetworkVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IWMPNetwork_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IWMPNetwork_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define IWMPNetwork_Release(This)( (This)->lpVtbl -> Release(This) )
#define IWMPNetwork_GetTypeInfoCount(This,pctinfo)( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define IWMPNetwork_GetTypeInfo(This,iTInfo,lcid,ppTInfo)( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define IWMPNetwork_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define IWMPNetwork_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define IWMPNetwork_get_bandWidth(This,plBandwidth)( (This)->lpVtbl -> get_bandWidth(This,plBandwidth) )
#define IWMPNetwork_get_recoveredPackets(This,plRecoveredPackets)( (This)->lpVtbl -> get_recoveredPackets(This,plRecoveredPackets) )
#define IWMPNetwork_get_sourceProtocol(This,pbstrSourceProtocol)( (This)->lpVtbl -> get_sourceProtocol(This,pbstrSourceProtocol) )
#define IWMPNetwork_get_receivedPackets(This,plReceivedPackets)( (This)->lpVtbl -> get_receivedPackets(This,plReceivedPackets) )
#define IWMPNetwork_get_lostPackets(This,plLostPackets)( (This)->lpVtbl -> get_lostPackets(This,plLostPackets) )
#define IWMPNetwork_get_receptionQuality(This,plReceptionQuality)( (This)->lpVtbl -> get_receptionQuality(This,plReceptionQuality) )
#define IWMPNetwork_get_bufferingCount(This,plBufferingCount)( (This)->lpVtbl -> get_bufferingCount(This,plBufferingCount) )
#define IWMPNetwork_get_bufferingProgress(This,plBufferingProgress)( (This)->lpVtbl -> get_bufferingProgress(This,plBufferingProgress) )
#define IWMPNetwork_get_bufferingTime(This,plBufferingTime)( (This)->lpVtbl -> get_bufferingTime(This,plBufferingTime) )
#define IWMPNetwork_put_bufferingTime(This,lBufferingTime)( (This)->lpVtbl -> put_bufferingTime(This,lBufferingTime) )
#define IWMPNetwork_get_frameRate(This,plFrameRate)( (This)->lpVtbl -> get_frameRate(This,plFrameRate) )
#define IWMPNetwork_get_maxBitRate(This,plBitRate)( (This)->lpVtbl -> get_maxBitRate(This,plBitRate) )
#define IWMPNetwork_get_bitRate(This,plBitRate)( (This)->lpVtbl -> get_bitRate(This,plBitRate) )
#define IWMPNetwork_getProxySettings(This,bstrProtocol,plProxySetting)( (This)->lpVtbl -> getProxySettings(This,bstrProtocol,plProxySetting) )
#define IWMPNetwork_setProxySettings(This,bstrProtocol,lProxySetting)( (This)->lpVtbl -> setProxySettings(This,bstrProtocol,lProxySetting) )
#define IWMPNetwork_getProxyName(This,bstrProtocol,pbstrProxyName)( (This)->lpVtbl -> getProxyName(This,bstrProtocol,pbstrProxyName) )
#define IWMPNetwork_setProxyName(This,bstrProtocol,bstrProxyName)( (This)->lpVtbl -> setProxyName(This,bstrProtocol,bstrProxyName) )
#define IWMPNetwork_getProxyPort(This,bstrProtocol,lProxyPort)( (This)->lpVtbl -> getProxyPort(This,bstrProtocol,lProxyPort) )
#define IWMPNetwork_setProxyPort(This,bstrProtocol,lProxyPort)( (This)->lpVtbl -> setProxyPort(This,bstrProtocol,lProxyPort) )
#define IWMPNetwork_getProxyExceptionList(This,bstrProtocol,pbstrExceptionList)( (This)->lpVtbl -> getProxyExceptionList(This,bstrProtocol,pbstrExceptionList) )
#define IWMPNetwork_setProxyExceptionList(This,bstrProtocol,pbstrExceptionList)( (This)->lpVtbl -> setProxyExceptionList(This,bstrProtocol,pbstrExceptionList) )
#define IWMPNetwork_getProxyBypassForLocal(This,bstrProtocol,pfBypassForLocal)( (This)->lpVtbl -> getProxyBypassForLocal(This,bstrProtocol,pfBypassForLocal) )
#define IWMPNetwork_setProxyBypassForLocal(This,bstrProtocol,fBypassForLocal)( (This)->lpVtbl -> setProxyBypassForLocal(This,bstrProtocol,fBypassForLocal) )
#define IWMPNetwork_get_maxBandwidth(This,lMaxBandwidth)( (This)->lpVtbl -> get_maxBandwidth(This,lMaxBandwidth) )
#define IWMPNetwork_put_maxBandwidth(This,lMaxBandwidth)( (This)->lpVtbl -> put_maxBandwidth(This,lMaxBandwidth) )
#define IWMPNetwork_get_downloadProgress(This,plDownloadProgress)( (This)->lpVtbl -> get_downloadProgress(This,plDownloadProgress) )
#define IWMPNetwork_get_encodedFrameRate(This,plFrameRate)( (This)->lpVtbl -> get_encodedFrameRate(This,plFrameRate) )
#define IWMPNetwork_get_framesSkipped(This,plFrames)( (This)->lpVtbl -> get_framesSkipped(This,plFrames) )
#endif
#endif
#ifndef __IWMPCore_INTERFACE_DEFINED__
#define __IWMPCore_INTERFACE_DEFINED__
extern const IID IID_IWMPCore;
typedef struct IWMPCoreVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IWMPCore * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IWMPCore * This);
	ULONG(STDMETHODCALLTYPE * Release) (IWMPCore * This);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfoCount) (IWMPCore * This, UINT * pctinfo);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfo) (IWMPCore * This, UINT iTInfo, LCID lcid, ITypeInfo ** ppTInfo);
	HRESULT(STDMETHODCALLTYPE * GetIDsOfNames) (IWMPCore * This, REFIID riid, LPOLESTR * rgszNames, UINT cNames, LCID lcid, DISPID * rgDispId);
	HRESULT(STDMETHODCALLTYPE * Invoke) (IWMPCore * This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS * pDispParams, VARIANT * pVarResult, EXCEPINFO * pExcepInfo, UINT * puArgErr);
	HRESULT(STDMETHODCALLTYPE * close) (IWMPCore * This);
	HRESULT(STDMETHODCALLTYPE * get_URL) (IWMPCore * This, BSTR * pbstrURL);
	HRESULT(STDMETHODCALLTYPE * put_URL) (IWMPCore * This, BSTR bstrURL);
	HRESULT(STDMETHODCALLTYPE * get_openState) (IWMPCore * This, WMPOpenState * pwmpos);
	HRESULT(STDMETHODCALLTYPE * get_playState) (IWMPCore * This, WMPPlayState * pwmpps);
	HRESULT(STDMETHODCALLTYPE * get_controls) (IWMPCore * This, IWMPControls ** ppControl);
	HRESULT(STDMETHODCALLTYPE * get_settings) (IWMPCore * This, IWMPSettings ** ppSettings);
	HRESULT(STDMETHODCALLTYPE * get_currentMedia) (IWMPCore * This, IWMPMedia ** ppMedia);
	HRESULT(STDMETHODCALLTYPE * put_currentMedia) (IWMPCore * This, IWMPMedia * pMedia);
	HRESULT(STDMETHODCALLTYPE * get_mediaCollection) (IWMPCore * This, IWMPMediaCollection ** ppMediaCollection);
	HRESULT(STDMETHODCALLTYPE * get_playlistCollection) (IWMPCore * This, IWMPPlaylistCollection ** ppPlaylistCollection);
	HRESULT(STDMETHODCALLTYPE * get_versionInfo) (IWMPCore * This, BSTR * pbstrVersionInfo);
	HRESULT(STDMETHODCALLTYPE * launchURL) (IWMPCore * This, BSTR bstrURL);
	HRESULT(STDMETHODCALLTYPE * get_network) (IWMPCore * This, IWMPNetwork ** ppQNI);
	HRESULT(STDMETHODCALLTYPE * get_currentPlaylist) (IWMPCore * This, IWMPPlaylist ** ppPL);
	HRESULT(STDMETHODCALLTYPE * put_currentPlaylist) (IWMPCore * This, IWMPPlaylist * pPL);
	HRESULT(STDMETHODCALLTYPE * get_cdromCollection) (IWMPCore * This, IWMPCdromCollection ** ppCdromCollection);
	HRESULT(STDMETHODCALLTYPE * get_closedCaption) (IWMPCore * This, IWMPClosedCaption ** ppClosedCaption);
	HRESULT(STDMETHODCALLTYPE * get_isOnline) (IWMPCore * This, VARIANT_BOOL * pfOnline);
	HRESULT(STDMETHODCALLTYPE * get_error) (IWMPCore * This, IWMPError ** ppError);
	HRESULT(STDMETHODCALLTYPE * get_status) (IWMPCore * This, BSTR * pbstrStatus);
	END_INTERFACE
}  IWMPCoreVtbl;
interface IWMPCore
{
	CONST_VTBL struct IWMPCoreVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IWMPCore_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IWMPCore_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define IWMPCore_Release(This)( (This)->lpVtbl -> Release(This) )
#define IWMPCore_GetTypeInfoCount(This,pctinfo)( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define IWMPCore_GetTypeInfo(This,iTInfo,lcid,ppTInfo)( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define IWMPCore_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define IWMPCore_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define IWMPCore_close(This)( (This)->lpVtbl -> close(This) )
#define IWMPCore_get_URL(This,pbstrURL)( (This)->lpVtbl -> get_URL(This,pbstrURL) )
#define IWMPCore_put_URL(This,bstrURL)( (This)->lpVtbl -> put_URL(This,bstrURL) )
#define IWMPCore_get_openState(This,pwmpos)( (This)->lpVtbl -> get_openState(This,pwmpos) )
#define IWMPCore_get_playState(This,pwmpps)( (This)->lpVtbl -> get_playState(This,pwmpps) )
#define IWMPCore_get_controls(This,ppControl)( (This)->lpVtbl -> get_controls(This,ppControl) )
#define IWMPCore_get_settings(This,ppSettings)( (This)->lpVtbl -> get_settings(This,ppSettings) )
#define IWMPCore_get_currentMedia(This,ppMedia)( (This)->lpVtbl -> get_currentMedia(This,ppMedia) )
#define IWMPCore_put_currentMedia(This,pMedia)( (This)->lpVtbl -> put_currentMedia(This,pMedia) )
#define IWMPCore_get_mediaCollection(This,ppMediaCollection)( (This)->lpVtbl -> get_mediaCollection(This,ppMediaCollection) )
#define IWMPCore_get_playlistCollection(This,ppPlaylistCollection)( (This)->lpVtbl -> get_playlistCollection(This,ppPlaylistCollection) )
#define IWMPCore_get_versionInfo(This,pbstrVersionInfo)( (This)->lpVtbl -> get_versionInfo(This,pbstrVersionInfo) )
#define IWMPCore_launchURL(This,bstrURL)( (This)->lpVtbl -> launchURL(This,bstrURL) )
#define IWMPCore_get_network(This,ppQNI)( (This)->lpVtbl -> get_network(This,ppQNI) )
#define IWMPCore_get_currentPlaylist(This,ppPL)( (This)->lpVtbl -> get_currentPlaylist(This,ppPL) )
#define IWMPCore_put_currentPlaylist(This,pPL)( (This)->lpVtbl -> put_currentPlaylist(This,pPL) )
#define IWMPCore_get_cdromCollection(This,ppCdromCollection)( (This)->lpVtbl -> get_cdromCollection(This,ppCdromCollection) )
#define IWMPCore_get_closedCaption(This,ppClosedCaption)( (This)->lpVtbl -> get_closedCaption(This,ppClosedCaption) )
#define IWMPCore_get_isOnline(This,pfOnline)( (This)->lpVtbl -> get_isOnline(This,pfOnline) )
#define IWMPCore_get_error(This,ppError)( (This)->lpVtbl -> get_error(This,ppError) )
#define IWMPCore_get_status(This,pbstrStatus)( (This)->lpVtbl -> get_status(This,pbstrStatus) )
#endif
#endif
#ifndef __IWMPPlayer_INTERFACE_DEFINED__
#define __IWMPPlayer_INTERFACE_DEFINED__
extern const IID IID_IWMPPlayer;
typedef struct IWMPPlayerVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IWMPPlayer * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IWMPPlayer * This);
	ULONG(STDMETHODCALLTYPE * Release) (IWMPPlayer * This);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfoCount) (IWMPPlayer * This, UINT * pctinfo);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfo) (IWMPPlayer * This, UINT iTInfo, LCID lcid, ITypeInfo ** ppTInfo);
	HRESULT(STDMETHODCALLTYPE * GetIDsOfNames) (IWMPPlayer * This, REFIID riid, LPOLESTR * rgszNames, UINT cNames, LCID lcid, DISPID * rgDispId);
	HRESULT(STDMETHODCALLTYPE * Invoke) (IWMPPlayer * This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS * pDispParams, VARIANT * pVarResult, EXCEPINFO * pExcepInfo, UINT * puArgErr);
	HRESULT(STDMETHODCALLTYPE * close) (IWMPPlayer * This);
	HRESULT(STDMETHODCALLTYPE * get_URL) (IWMPPlayer * This, BSTR * pbstrURL);
	HRESULT(STDMETHODCALLTYPE * put_URL) (IWMPPlayer * This, BSTR bstrURL);
	HRESULT(STDMETHODCALLTYPE * get_openState) (IWMPPlayer * This, WMPOpenState * pwmpos);
	HRESULT(STDMETHODCALLTYPE * get_playState) (IWMPPlayer * This, WMPPlayState * pwmpps);
	HRESULT(STDMETHODCALLTYPE * get_controls) (IWMPPlayer * This, IWMPControls ** ppControl);
	HRESULT(STDMETHODCALLTYPE * get_settings) (IWMPPlayer * This, IWMPSettings ** ppSettings);
	HRESULT(STDMETHODCALLTYPE * get_currentMedia) (IWMPPlayer * This, IWMPMedia ** ppMedia);
	HRESULT(STDMETHODCALLTYPE * put_currentMedia) (IWMPPlayer * This, IWMPMedia * pMedia);
	HRESULT(STDMETHODCALLTYPE * get_mediaCollection) (IWMPPlayer * This, IWMPMediaCollection ** ppMediaCollection);
	HRESULT(STDMETHODCALLTYPE * get_playlistCollection) (IWMPPlayer * This, IWMPPlaylistCollection ** ppPlaylistCollection);
	HRESULT(STDMETHODCALLTYPE * get_versionInfo) (IWMPPlayer * This, BSTR * pbstrVersionInfo);
	HRESULT(STDMETHODCALLTYPE * launchURL) (IWMPPlayer * This, BSTR bstrURL);
	HRESULT(STDMETHODCALLTYPE * get_network) (IWMPPlayer * This, IWMPNetwork ** ppQNI);
	HRESULT(STDMETHODCALLTYPE * get_currentPlaylist) (IWMPPlayer * This, IWMPPlaylist ** ppPL);
	HRESULT(STDMETHODCALLTYPE * put_currentPlaylist) (IWMPPlayer * This, IWMPPlaylist * pPL);
	HRESULT(STDMETHODCALLTYPE * get_cdromCollection) (IWMPPlayer * This, IWMPCdromCollection ** ppCdromCollection);
	HRESULT(STDMETHODCALLTYPE * get_closedCaption) (IWMPPlayer * This, IWMPClosedCaption ** ppClosedCaption);
	HRESULT(STDMETHODCALLTYPE * get_isOnline) (IWMPPlayer * This, VARIANT_BOOL * pfOnline);
	HRESULT(STDMETHODCALLTYPE * get_error) (IWMPPlayer * This, IWMPError ** ppError);
	HRESULT(STDMETHODCALLTYPE * get_status) (IWMPPlayer * This, BSTR * pbstrStatus);
	HRESULT(STDMETHODCALLTYPE * get_enabled) (IWMPPlayer * This, VARIANT_BOOL * pbEnabled);
	HRESULT(STDMETHODCALLTYPE * put_enabled) (IWMPPlayer * This, VARIANT_BOOL bEnabled);
	HRESULT(STDMETHODCALLTYPE * get_fullScreen) (IWMPPlayer * This, VARIANT_BOOL * pbFullScreen);
	HRESULT(STDMETHODCALLTYPE * put_fullScreen) (IWMPPlayer * This, VARIANT_BOOL bFullScreen);
	HRESULT(STDMETHODCALLTYPE * get_enableContextMenu) (IWMPPlayer * This, VARIANT_BOOL * pbEnableContextMenu);
	HRESULT(STDMETHODCALLTYPE * put_enableContextMenu) (IWMPPlayer * This, VARIANT_BOOL bEnableContextMenu);
	HRESULT(STDMETHODCALLTYPE * put_uiMode) (IWMPPlayer * This, BSTR bstrMode);
	HRESULT(STDMETHODCALLTYPE * get_uiMode) (IWMPPlayer * This, BSTR * pbstrMode);
	END_INTERFACE
}  IWMPPlayerVtbl;
interface IWMPPlayer
{
	CONST_VTBL struct IWMPPlayerVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IWMPPlayer_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IWMPPlayer_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define IWMPPlayer_Release(This)( (This)->lpVtbl -> Release(This) )
#define IWMPPlayer_GetTypeInfoCount(This,pctinfo)( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define IWMPPlayer_GetTypeInfo(This,iTInfo,lcid,ppTInfo)( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define IWMPPlayer_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define IWMPPlayer_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define IWMPPlayer_close(This)( (This)->lpVtbl -> close(This) )
#define IWMPPlayer_get_URL(This,pbstrURL)( (This)->lpVtbl -> get_URL(This,pbstrURL) )
#define IWMPPlayer_put_URL(This,bstrURL)( (This)->lpVtbl -> put_URL(This,bstrURL) )
#define IWMPPlayer_get_openState(This,pwmpos)( (This)->lpVtbl -> get_openState(This,pwmpos) )
#define IWMPPlayer_get_playState(This,pwmpps)( (This)->lpVtbl -> get_playState(This,pwmpps) )
#define IWMPPlayer_get_controls(This,ppControl)( (This)->lpVtbl -> get_controls(This,ppControl) )
#define IWMPPlayer_get_settings(This,ppSettings)( (This)->lpVtbl -> get_settings(This,ppSettings) )
#define IWMPPlayer_get_currentMedia(This,ppMedia)( (This)->lpVtbl -> get_currentMedia(This,ppMedia) )
#define IWMPPlayer_put_currentMedia(This,pMedia)( (This)->lpVtbl -> put_currentMedia(This,pMedia) )
#define IWMPPlayer_get_mediaCollection(This,ppMediaCollection)( (This)->lpVtbl -> get_mediaCollection(This,ppMediaCollection) )
#define IWMPPlayer_get_playlistCollection(This,ppPlaylistCollection)( (This)->lpVtbl -> get_playlistCollection(This,ppPlaylistCollection) )
#define IWMPPlayer_get_versionInfo(This,pbstrVersionInfo)( (This)->lpVtbl -> get_versionInfo(This,pbstrVersionInfo) )
#define IWMPPlayer_launchURL(This,bstrURL)( (This)->lpVtbl -> launchURL(This,bstrURL) )
#define IWMPPlayer_get_network(This,ppQNI)( (This)->lpVtbl -> get_network(This,ppQNI) )
#define IWMPPlayer_get_currentPlaylist(This,ppPL)( (This)->lpVtbl -> get_currentPlaylist(This,ppPL) )
#define IWMPPlayer_put_currentPlaylist(This,pPL)( (This)->lpVtbl -> put_currentPlaylist(This,pPL) )
#define IWMPPlayer_get_cdromCollection(This,ppCdromCollection)( (This)->lpVtbl -> get_cdromCollection(This,ppCdromCollection) )
#define IWMPPlayer_get_closedCaption(This,ppClosedCaption)( (This)->lpVtbl -> get_closedCaption(This,ppClosedCaption) )
#define IWMPPlayer_get_isOnline(This,pfOnline)( (This)->lpVtbl -> get_isOnline(This,pfOnline) )
#define IWMPPlayer_get_error(This,ppError)( (This)->lpVtbl -> get_error(This,ppError) )
#define IWMPPlayer_get_status(This,pbstrStatus)( (This)->lpVtbl -> get_status(This,pbstrStatus) )
#define IWMPPlayer_get_enabled(This,pbEnabled)( (This)->lpVtbl -> get_enabled(This,pbEnabled) )
#define IWMPPlayer_put_enabled(This,bEnabled)( (This)->lpVtbl -> put_enabled(This,bEnabled) )
#define IWMPPlayer_get_fullScreen(This,pbFullScreen)( (This)->lpVtbl -> get_fullScreen(This,pbFullScreen) )
#define IWMPPlayer_put_fullScreen(This,bFullScreen)( (This)->lpVtbl -> put_fullScreen(This,bFullScreen) )
#define IWMPPlayer_get_enableContextMenu(This,pbEnableContextMenu)( (This)->lpVtbl -> get_enableContextMenu(This,pbEnableContextMenu) )
#define IWMPPlayer_put_enableContextMenu(This,bEnableContextMenu)( (This)->lpVtbl -> put_enableContextMenu(This,bEnableContextMenu) )
#define IWMPPlayer_put_uiMode(This,bstrMode)( (This)->lpVtbl -> put_uiMode(This,bstrMode) )
#define IWMPPlayer_get_uiMode(This,pbstrMode)( (This)->lpVtbl -> get_uiMode(This,pbstrMode) )
#endif
#endif
#ifndef __IWMPPlayer2_INTERFACE_DEFINED__
#define __IWMPPlayer2_INTERFACE_DEFINED__
extern const IID IID_IWMPPlayer2;
typedef struct IWMPPlayer2Vtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IWMPPlayer2 * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IWMPPlayer2 * This);
	ULONG(STDMETHODCALLTYPE * Release) (IWMPPlayer2 * This);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfoCount) (IWMPPlayer2 * This, UINT * pctinfo);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfo) (IWMPPlayer2 * This, UINT iTInfo, LCID lcid, ITypeInfo ** ppTInfo);
	HRESULT(STDMETHODCALLTYPE * GetIDsOfNames) (IWMPPlayer2 * This, REFIID riid, LPOLESTR * rgszNames, UINT cNames, LCID lcid, DISPID * rgDispId);
	HRESULT(STDMETHODCALLTYPE * Invoke) (IWMPPlayer2 * This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS * pDispParams, VARIANT * pVarResult, EXCEPINFO * pExcepInfo, UINT * puArgErr);
	HRESULT(STDMETHODCALLTYPE * close) (IWMPPlayer2 * This);
	HRESULT(STDMETHODCALLTYPE * get_URL) (IWMPPlayer2 * This, BSTR * pbstrURL);
	HRESULT(STDMETHODCALLTYPE * put_URL) (IWMPPlayer2 * This, BSTR bstrURL);
	HRESULT(STDMETHODCALLTYPE * get_openState) (IWMPPlayer2 * This, WMPOpenState * pwmpos);
	HRESULT(STDMETHODCALLTYPE * get_playState) (IWMPPlayer2 * This, WMPPlayState * pwmpps);
	HRESULT(STDMETHODCALLTYPE * get_controls) (IWMPPlayer2 * This, IWMPControls ** ppControl);
	HRESULT(STDMETHODCALLTYPE * get_settings) (IWMPPlayer2 * This, IWMPSettings ** ppSettings);
	HRESULT(STDMETHODCALLTYPE * get_currentMedia) (IWMPPlayer2 * This, IWMPMedia ** ppMedia);
	HRESULT(STDMETHODCALLTYPE * put_currentMedia) (IWMPPlayer2 * This, IWMPMedia * pMedia);
	HRESULT(STDMETHODCALLTYPE * get_mediaCollection) (IWMPPlayer2 * This, IWMPMediaCollection ** ppMediaCollection);
	HRESULT(STDMETHODCALLTYPE * get_playlistCollection) (IWMPPlayer2 * This, IWMPPlaylistCollection ** ppPlaylistCollection);
	HRESULT(STDMETHODCALLTYPE * get_versionInfo) (IWMPPlayer2 * This, BSTR * pbstrVersionInfo);
	HRESULT(STDMETHODCALLTYPE * launchURL) (IWMPPlayer2 * This, BSTR bstrURL);
	HRESULT(STDMETHODCALLTYPE * get_network) (IWMPPlayer2 * This, IWMPNetwork ** ppQNI);
	HRESULT(STDMETHODCALLTYPE * get_currentPlaylist) (IWMPPlayer2 * This, IWMPPlaylist ** ppPL);
	HRESULT(STDMETHODCALLTYPE * put_currentPlaylist) (IWMPPlayer2 * This, IWMPPlaylist * pPL);
	HRESULT(STDMETHODCALLTYPE * get_cdromCollection) (IWMPPlayer2 * This, IWMPCdromCollection ** ppCdromCollection);
	HRESULT(STDMETHODCALLTYPE * get_closedCaption) (IWMPPlayer2 * This, IWMPClosedCaption ** ppClosedCaption);
	HRESULT(STDMETHODCALLTYPE * get_isOnline) (IWMPPlayer2 * This, VARIANT_BOOL * pfOnline);
	HRESULT(STDMETHODCALLTYPE * get_error) (IWMPPlayer2 * This, IWMPError ** ppError);
	HRESULT(STDMETHODCALLTYPE * get_status) (IWMPPlayer2 * This, BSTR * pbstrStatus);
	HRESULT(STDMETHODCALLTYPE * get_enabled) (IWMPPlayer2 * This, VARIANT_BOOL * pbEnabled);
	HRESULT(STDMETHODCALLTYPE * put_enabled) (IWMPPlayer2 * This, VARIANT_BOOL bEnabled);
	HRESULT(STDMETHODCALLTYPE * get_fullScreen) (IWMPPlayer2 * This, VARIANT_BOOL * pbFullScreen);
	HRESULT(STDMETHODCALLTYPE * put_fullScreen) (IWMPPlayer2 * This, VARIANT_BOOL bFullScreen);
	HRESULT(STDMETHODCALLTYPE * get_enableContextMenu) (IWMPPlayer2 * This, VARIANT_BOOL * pbEnableContextMenu);
	HRESULT(STDMETHODCALLTYPE * put_enableContextMenu) (IWMPPlayer2 * This, VARIANT_BOOL bEnableContextMenu);
	HRESULT(STDMETHODCALLTYPE * put_uiMode) (IWMPPlayer2 * This, BSTR bstrMode);
	HRESULT(STDMETHODCALLTYPE * get_uiMode) (IWMPPlayer2 * This, BSTR * pbstrMode);
	HRESULT(STDMETHODCALLTYPE * get_stretchToFit) (IWMPPlayer2 * This, VARIANT_BOOL * pbEnabled);
	HRESULT(STDMETHODCALLTYPE * put_stretchToFit) (IWMPPlayer2 * This, VARIANT_BOOL bEnabled);
	HRESULT(STDMETHODCALLTYPE * get_windowlessVideo) (IWMPPlayer2 * This, VARIANT_BOOL * pbEnabled);
	HRESULT(STDMETHODCALLTYPE * put_windowlessVideo) (IWMPPlayer2 * This, VARIANT_BOOL bEnabled);
	END_INTERFACE
}  IWMPPlayer2Vtbl;
interface IWMPPlayer2
{
	CONST_VTBL struct IWMPPlayer2Vtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IWMPPlayer2_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IWMPPlayer2_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define IWMPPlayer2_Release(This)( (This)->lpVtbl -> Release(This) )
#define IWMPPlayer2_GetTypeInfoCount(This,pctinfo)( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define IWMPPlayer2_GetTypeInfo(This,iTInfo,lcid,ppTInfo)( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define IWMPPlayer2_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define IWMPPlayer2_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define IWMPPlayer2_close(This)( (This)->lpVtbl -> close(This) )
#define IWMPPlayer2_get_URL(This,pbstrURL)( (This)->lpVtbl -> get_URL(This,pbstrURL) )
#define IWMPPlayer2_put_URL(This,bstrURL)( (This)->lpVtbl -> put_URL(This,bstrURL) )
#define IWMPPlayer2_get_openState(This,pwmpos)( (This)->lpVtbl -> get_openState(This,pwmpos) )
#define IWMPPlayer2_get_playState(This,pwmpps)( (This)->lpVtbl -> get_playState(This,pwmpps) )
#define IWMPPlayer2_get_controls(This,ppControl)( (This)->lpVtbl -> get_controls(This,ppControl) )
#define IWMPPlayer2_get_settings(This,ppSettings)( (This)->lpVtbl -> get_settings(This,ppSettings) )
#define IWMPPlayer2_get_currentMedia(This,ppMedia)( (This)->lpVtbl -> get_currentMedia(This,ppMedia) )
#define IWMPPlayer2_put_currentMedia(This,pMedia)( (This)->lpVtbl -> put_currentMedia(This,pMedia) )
#define IWMPPlayer2_get_mediaCollection(This,ppMediaCollection)( (This)->lpVtbl -> get_mediaCollection(This,ppMediaCollection) )
#define IWMPPlayer2_get_playlistCollection(This,ppPlaylistCollection)( (This)->lpVtbl -> get_playlistCollection(This,ppPlaylistCollection) )
#define IWMPPlayer2_get_versionInfo(This,pbstrVersionInfo)( (This)->lpVtbl -> get_versionInfo(This,pbstrVersionInfo) )
#define IWMPPlayer2_launchURL(This,bstrURL)( (This)->lpVtbl -> launchURL(This,bstrURL) )
#define IWMPPlayer2_get_network(This,ppQNI)( (This)->lpVtbl -> get_network(This,ppQNI) )
#define IWMPPlayer2_get_currentPlaylist(This,ppPL)( (This)->lpVtbl -> get_currentPlaylist(This,ppPL) )
#define IWMPPlayer2_put_currentPlaylist(This,pPL)( (This)->lpVtbl -> put_currentPlaylist(This,pPL) )
#define IWMPPlayer2_get_cdromCollection(This,ppCdromCollection)( (This)->lpVtbl -> get_cdromCollection(This,ppCdromCollection) )
#define IWMPPlayer2_get_closedCaption(This,ppClosedCaption)( (This)->lpVtbl -> get_closedCaption(This,ppClosedCaption) )
#define IWMPPlayer2_get_isOnline(This,pfOnline)( (This)->lpVtbl -> get_isOnline(This,pfOnline) )
#define IWMPPlayer2_get_error(This,ppError)( (This)->lpVtbl -> get_error(This,ppError) )
#define IWMPPlayer2_get_status(This,pbstrStatus)( (This)->lpVtbl -> get_status(This,pbstrStatus) )
#define IWMPPlayer2_get_enabled(This,pbEnabled)( (This)->lpVtbl -> get_enabled(This,pbEnabled) )
#define IWMPPlayer2_put_enabled(This,bEnabled)( (This)->lpVtbl -> put_enabled(This,bEnabled) )
#define IWMPPlayer2_get_fullScreen(This,pbFullScreen)( (This)->lpVtbl -> get_fullScreen(This,pbFullScreen) )
#define IWMPPlayer2_put_fullScreen(This,bFullScreen)( (This)->lpVtbl -> put_fullScreen(This,bFullScreen) )
#define IWMPPlayer2_get_enableContextMenu(This,pbEnableContextMenu)( (This)->lpVtbl -> get_enableContextMenu(This,pbEnableContextMenu) )
#define IWMPPlayer2_put_enableContextMenu(This,bEnableContextMenu)( (This)->lpVtbl -> put_enableContextMenu(This,bEnableContextMenu) )
#define IWMPPlayer2_put_uiMode(This,bstrMode)( (This)->lpVtbl -> put_uiMode(This,bstrMode) )
#define IWMPPlayer2_get_uiMode(This,pbstrMode)( (This)->lpVtbl -> get_uiMode(This,pbstrMode) )
#define IWMPPlayer2_get_stretchToFit(This,pbEnabled)( (This)->lpVtbl -> get_stretchToFit(This,pbEnabled) )
#define IWMPPlayer2_put_stretchToFit(This,bEnabled)( (This)->lpVtbl -> put_stretchToFit(This,bEnabled) )
#define IWMPPlayer2_get_windowlessVideo(This,pbEnabled)( (This)->lpVtbl -> get_windowlessVideo(This,pbEnabled) )
#define IWMPPlayer2_put_windowlessVideo(This,bEnabled)( (This)->lpVtbl -> put_windowlessVideo(This,bEnabled) )
#endif
#endif
#ifndef __IWMPMedia2_INTERFACE_DEFINED__
#define __IWMPMedia2_INTERFACE_DEFINED__
extern const IID IID_IWMPMedia2;
typedef struct IWMPMedia2Vtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IWMPMedia2 * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IWMPMedia2 * This);
	ULONG(STDMETHODCALLTYPE * Release) (IWMPMedia2 * This);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfoCount) (IWMPMedia2 * This, UINT * pctinfo);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfo) (IWMPMedia2 * This, UINT iTInfo, LCID lcid, ITypeInfo ** ppTInfo);
	HRESULT(STDMETHODCALLTYPE * GetIDsOfNames) (IWMPMedia2 * This, REFIID riid, LPOLESTR * rgszNames, UINT cNames, LCID lcid, DISPID * rgDispId);
	HRESULT(STDMETHODCALLTYPE * Invoke) (IWMPMedia2 * This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS * pDispParams, VARIANT * pVarResult, EXCEPINFO * pExcepInfo, UINT * puArgErr);
	HRESULT(STDMETHODCALLTYPE * get_isIdentical) (IWMPMedia2 * This, IWMPMedia * pIWMPMedia, VARIANT_BOOL * pvbool);
	HRESULT(STDMETHODCALLTYPE * get_sourceURL) (IWMPMedia2 * This, BSTR * pbstrSourceURL);
	HRESULT(STDMETHODCALLTYPE * get_name) (IWMPMedia2 * This, BSTR * pbstrName);
	HRESULT(STDMETHODCALLTYPE * put_name) (IWMPMedia2 * This, BSTR bstrName);
	HRESULT(STDMETHODCALLTYPE * get_imageSourceWidth) (IWMPMedia2 * This, long *pWidth);
	HRESULT(STDMETHODCALLTYPE * get_imageSourceHeight) (IWMPMedia2 * This, long *pHeight);
	HRESULT(STDMETHODCALLTYPE * get_markerCount) (IWMPMedia2 * This, long *pMarkerCount);
	HRESULT(STDMETHODCALLTYPE * getMarkerTime) (IWMPMedia2 * This, long MarkerNum, double *pMarkerTime);
	HRESULT(STDMETHODCALLTYPE * getMarkerName) (IWMPMedia2 * This, long MarkerNum, BSTR * pbstrMarkerName);
	HRESULT(STDMETHODCALLTYPE * get_duration) (IWMPMedia2 * This, double *pDuration);
	HRESULT(STDMETHODCALLTYPE * get_durationString) (IWMPMedia2 * This, BSTR * pbstrDuration);
	HRESULT(STDMETHODCALLTYPE * get_attributeCount) (IWMPMedia2 * This, long *plCount);
	HRESULT(STDMETHODCALLTYPE * getAttributeName) (IWMPMedia2 * This, long lIndex, BSTR * pbstrItemName);
	HRESULT(STDMETHODCALLTYPE * getItemInfo) (IWMPMedia2 * This, BSTR bstrItemName, BSTR * pbstrVal);
	HRESULT(STDMETHODCALLTYPE * setItemInfo) (IWMPMedia2 * This, BSTR bstrItemName, BSTR bstrVal);
	HRESULT(STDMETHODCALLTYPE * getItemInfoByAtom) (IWMPMedia2 * This, long lAtom, BSTR * pbstrVal);
	HRESULT(STDMETHODCALLTYPE * isMemberOf) (IWMPMedia2 * This, IWMPPlaylist * pPlaylist, VARIANT_BOOL * pvarfIsMemberOf);
	HRESULT(STDMETHODCALLTYPE * isReadOnlyItem) (IWMPMedia2 * This, BSTR bstrItemName, VARIANT_BOOL * pvarfIsReadOnly);
	HRESULT(STDMETHODCALLTYPE * get_error) (IWMPMedia2 * This, IWMPErrorItem ** ppIWMPErrorItem);
	END_INTERFACE
}  IWMPMedia2Vtbl;
interface IWMPMedia2
{
	CONST_VTBL struct IWMPMedia2Vtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IWMPMedia2_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IWMPMedia2_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define IWMPMedia2_Release(This)( (This)->lpVtbl -> Release(This) )
#define IWMPMedia2_GetTypeInfoCount(This,pctinfo)( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define IWMPMedia2_GetTypeInfo(This,iTInfo,lcid,ppTInfo)( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define IWMPMedia2_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define IWMPMedia2_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define IWMPMedia2_get_isIdentical(This,pIWMPMedia,pvbool)( (This)->lpVtbl -> get_isIdentical(This,pIWMPMedia,pvbool) )
#define IWMPMedia2_get_sourceURL(This,pbstrSourceURL)( (This)->lpVtbl -> get_sourceURL(This,pbstrSourceURL) )
#define IWMPMedia2_get_name(This,pbstrName)( (This)->lpVtbl -> get_name(This,pbstrName) )
#define IWMPMedia2_put_name(This,bstrName)( (This)->lpVtbl -> put_name(This,bstrName) )
#define IWMPMedia2_get_imageSourceWidth(This,pWidth)( (This)->lpVtbl -> get_imageSourceWidth(This,pWidth) )
#define IWMPMedia2_get_imageSourceHeight(This,pHeight)( (This)->lpVtbl -> get_imageSourceHeight(This,pHeight) )
#define IWMPMedia2_get_markerCount(This,pMarkerCount)( (This)->lpVtbl -> get_markerCount(This,pMarkerCount) )
#define IWMPMedia2_getMarkerTime(This,MarkerNum,pMarkerTime)( (This)->lpVtbl -> getMarkerTime(This,MarkerNum,pMarkerTime) )
#define IWMPMedia2_getMarkerName(This,MarkerNum,pbstrMarkerName)( (This)->lpVtbl -> getMarkerName(This,MarkerNum,pbstrMarkerName) )
#define IWMPMedia2_get_duration(This,pDuration)( (This)->lpVtbl -> get_duration(This,pDuration) )
#define IWMPMedia2_get_durationString(This,pbstrDuration)( (This)->lpVtbl -> get_durationString(This,pbstrDuration) )
#define IWMPMedia2_get_attributeCount(This,plCount)( (This)->lpVtbl -> get_attributeCount(This,plCount) )
#define IWMPMedia2_getAttributeName(This,lIndex,pbstrItemName)( (This)->lpVtbl -> getAttributeName(This,lIndex,pbstrItemName) )
#define IWMPMedia2_getItemInfo(This,bstrItemName,pbstrVal)( (This)->lpVtbl -> getItemInfo(This,bstrItemName,pbstrVal) )
#define IWMPMedia2_setItemInfo(This,bstrItemName,bstrVal)( (This)->lpVtbl -> setItemInfo(This,bstrItemName,bstrVal) )
#define IWMPMedia2_getItemInfoByAtom(This,lAtom,pbstrVal)( (This)->lpVtbl -> getItemInfoByAtom(This,lAtom,pbstrVal) )
#define IWMPMedia2_isMemberOf(This,pPlaylist,pvarfIsMemberOf)( (This)->lpVtbl -> isMemberOf(This,pPlaylist,pvarfIsMemberOf) )
#define IWMPMedia2_isReadOnlyItem(This,bstrItemName,pvarfIsReadOnly)( (This)->lpVtbl -> isReadOnlyItem(This,bstrItemName,pvarfIsReadOnly) )
#define IWMPMedia2_get_error(This,ppIWMPErrorItem)( (This)->lpVtbl -> get_error(This,ppIWMPErrorItem) )
#endif
#endif
#ifndef __IWMPControls2_INTERFACE_DEFINED__
#define __IWMPControls2_INTERFACE_DEFINED__
extern const IID IID_IWMPControls2;
typedef struct IWMPControls2Vtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IWMPControls2 * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IWMPControls2 * This);
	ULONG(STDMETHODCALLTYPE * Release) (IWMPControls2 * This);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfoCount) (IWMPControls2 * This, UINT * pctinfo);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfo) (IWMPControls2 * This, UINT iTInfo, LCID lcid, ITypeInfo ** ppTInfo);
	HRESULT(STDMETHODCALLTYPE * GetIDsOfNames) (IWMPControls2 * This, REFIID riid, LPOLESTR * rgszNames, UINT cNames, LCID lcid, DISPID * rgDispId);
	HRESULT(STDMETHODCALLTYPE * Invoke) (IWMPControls2 * This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS * pDispParams, VARIANT * pVarResult, EXCEPINFO * pExcepInfo, UINT * puArgErr);
	HRESULT(STDMETHODCALLTYPE * get_isAvailable) (IWMPControls2 * This, BSTR bstrItem, VARIANT_BOOL * pIsAvailable);
	HRESULT(STDMETHODCALLTYPE * play) (IWMPControls2 * This);
	HRESULT(STDMETHODCALLTYPE * stop) (IWMPControls2 * This);
	HRESULT(STDMETHODCALLTYPE * pause) (IWMPControls2 * This);
	HRESULT(STDMETHODCALLTYPE * fastForward) (IWMPControls2 * This);
	HRESULT(STDMETHODCALLTYPE * fastReverse) (IWMPControls2 * This);
	HRESULT(STDMETHODCALLTYPE * get_currentPosition) (IWMPControls2 * This, double *pdCurrentPosition);
	HRESULT(STDMETHODCALLTYPE * put_currentPosition) (IWMPControls2 * This, double dCurrentPosition);
	HRESULT(STDMETHODCALLTYPE * get_currentPositionString) (IWMPControls2 * This, BSTR * pbstrCurrentPosition);
	HRESULT(STDMETHODCALLTYPE * next) (IWMPControls2 * This);
	HRESULT(STDMETHODCALLTYPE * previous) (IWMPControls2 * This);
	HRESULT(STDMETHODCALLTYPE * get_currentItem) (IWMPControls2 * This, IWMPMedia ** ppIWMPMedia);
	HRESULT(STDMETHODCALLTYPE * put_currentItem) (IWMPControls2 * This, IWMPMedia * pIWMPMedia);
	HRESULT(STDMETHODCALLTYPE * get_currentMarker) (IWMPControls2 * This, long *plMarker);
	HRESULT(STDMETHODCALLTYPE * put_currentMarker) (IWMPControls2 * This, long lMarker);
	HRESULT(STDMETHODCALLTYPE * playItem) (IWMPControls2 * This, IWMPMedia * pIWMPMedia);
	HRESULT(STDMETHODCALLTYPE * step) (IWMPControls2 * This, long lStep);
	END_INTERFACE
}  IWMPControls2Vtbl;
interface IWMPControls2
{
	CONST_VTBL struct IWMPControls2Vtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IWMPControls2_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IWMPControls2_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define IWMPControls2_Release(This)( (This)->lpVtbl -> Release(This) )
#define IWMPControls2_GetTypeInfoCount(This,pctinfo)( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define IWMPControls2_GetTypeInfo(This,iTInfo,lcid,ppTInfo)( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define IWMPControls2_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define IWMPControls2_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define IWMPControls2_get_isAvailable(This,bstrItem,pIsAvailable)( (This)->lpVtbl -> get_isAvailable(This,bstrItem,pIsAvailable) )
#define IWMPControls2_play(This)( (This)->lpVtbl -> play(This) )
#define IWMPControls2_stop(This)( (This)->lpVtbl -> stop(This) )
#define IWMPControls2_pause(This)( (This)->lpVtbl -> pause(This) )
#define IWMPControls2_fastForward(This)( (This)->lpVtbl -> fastForward(This) )
#define IWMPControls2_fastReverse(This)( (This)->lpVtbl -> fastReverse(This) )
#define IWMPControls2_get_currentPosition(This,pdCurrentPosition)( (This)->lpVtbl -> get_currentPosition(This,pdCurrentPosition) )
#define IWMPControls2_put_currentPosition(This,dCurrentPosition)( (This)->lpVtbl -> put_currentPosition(This,dCurrentPosition) )
#define IWMPControls2_get_currentPositionString(This,pbstrCurrentPosition)( (This)->lpVtbl -> get_currentPositionString(This,pbstrCurrentPosition) )
#define IWMPControls2_next(This)( (This)->lpVtbl -> next(This) )
#define IWMPControls2_previous(This)( (This)->lpVtbl -> previous(This) )
#define IWMPControls2_get_currentItem(This,ppIWMPMedia)( (This)->lpVtbl -> get_currentItem(This,ppIWMPMedia) )
#define IWMPControls2_put_currentItem(This,pIWMPMedia)( (This)->lpVtbl -> put_currentItem(This,pIWMPMedia) )
#define IWMPControls2_get_currentMarker(This,plMarker)( (This)->lpVtbl -> get_currentMarker(This,plMarker) )
#define IWMPControls2_put_currentMarker(This,lMarker)( (This)->lpVtbl -> put_currentMarker(This,lMarker) )
#define IWMPControls2_playItem(This,pIWMPMedia)( (This)->lpVtbl -> playItem(This,pIWMPMedia) )
#define IWMPControls2_step(This,lStep)( (This)->lpVtbl -> step(This,lStep) )
#endif
#endif
#ifndef __IWMPDVD_INTERFACE_DEFINED__
#define __IWMPDVD_INTERFACE_DEFINED__
extern const IID IID_IWMPDVD;
typedef struct IWMPDVDVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IWMPDVD * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IWMPDVD * This);
	ULONG(STDMETHODCALLTYPE * Release) (IWMPDVD * This);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfoCount) (IWMPDVD * This, UINT * pctinfo);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfo) (IWMPDVD * This, UINT iTInfo, LCID lcid, ITypeInfo ** ppTInfo);
	HRESULT(STDMETHODCALLTYPE * GetIDsOfNames) (IWMPDVD * This, REFIID riid, LPOLESTR * rgszNames, UINT cNames, LCID lcid, DISPID * rgDispId);
	HRESULT(STDMETHODCALLTYPE * Invoke) (IWMPDVD * This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS * pDispParams, VARIANT * pVarResult, EXCEPINFO * pExcepInfo, UINT * puArgErr);
	HRESULT(STDMETHODCALLTYPE * get_isAvailable) (IWMPDVD * This, BSTR bstrItem, VARIANT_BOOL * pIsAvailable);
	HRESULT(STDMETHODCALLTYPE * get_domain) (IWMPDVD * This, BSTR * strDomain);
	HRESULT(STDMETHODCALLTYPE * topMenu) (IWMPDVD * This);
	HRESULT(STDMETHODCALLTYPE * titleMenu) (IWMPDVD * This);
	HRESULT(STDMETHODCALLTYPE * back) (IWMPDVD * This);
	HRESULT(STDMETHODCALLTYPE * resume) (IWMPDVD * This);
	END_INTERFACE
}  IWMPDVDVtbl;
interface IWMPDVD
{
	CONST_VTBL struct IWMPDVDVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IWMPDVD_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IWMPDVD_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define IWMPDVD_Release(This)( (This)->lpVtbl -> Release(This) )
#define IWMPDVD_GetTypeInfoCount(This,pctinfo)( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define IWMPDVD_GetTypeInfo(This,iTInfo,lcid,ppTInfo)( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define IWMPDVD_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define IWMPDVD_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define IWMPDVD_get_isAvailable(This,bstrItem,pIsAvailable)( (This)->lpVtbl -> get_isAvailable(This,bstrItem,pIsAvailable) )
#define IWMPDVD_get_domain(This,strDomain)( (This)->lpVtbl -> get_domain(This,strDomain) )
#define IWMPDVD_topMenu(This)( (This)->lpVtbl -> topMenu(This) )
#define IWMPDVD_titleMenu(This)( (This)->lpVtbl -> titleMenu(This) )
#define IWMPDVD_back(This)( (This)->lpVtbl -> back(This) )
#define IWMPDVD_resume(This)( (This)->lpVtbl -> resume(This) )
#endif
#endif
#ifndef __IWMPCore2_INTERFACE_DEFINED__
#define __IWMPCore2_INTERFACE_DEFINED__
extern const IID IID_IWMPCore2;
typedef struct IWMPCore2Vtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IWMPCore2 * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IWMPCore2 * This);
	ULONG(STDMETHODCALLTYPE * Release) (IWMPCore2 * This);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfoCount) (IWMPCore2 * This, UINT * pctinfo);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfo) (IWMPCore2 * This, UINT iTInfo, LCID lcid, ITypeInfo ** ppTInfo);
	HRESULT(STDMETHODCALLTYPE * GetIDsOfNames) (IWMPCore2 * This, REFIID riid, LPOLESTR * rgszNames, UINT cNames, LCID lcid, DISPID * rgDispId);
	HRESULT(STDMETHODCALLTYPE * Invoke) (IWMPCore2 * This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS * pDispParams, VARIANT * pVarResult, EXCEPINFO * pExcepInfo, UINT * puArgErr);
	HRESULT(STDMETHODCALLTYPE * close) (IWMPCore2 * This);
	HRESULT(STDMETHODCALLTYPE * get_URL) (IWMPCore2 * This, BSTR * pbstrURL);
	HRESULT(STDMETHODCALLTYPE * put_URL) (IWMPCore2 * This, BSTR bstrURL);
	HRESULT(STDMETHODCALLTYPE * get_openState) (IWMPCore2 * This, WMPOpenState * pwmpos);
	HRESULT(STDMETHODCALLTYPE * get_playState) (IWMPCore2 * This, WMPPlayState * pwmpps);
	HRESULT(STDMETHODCALLTYPE * get_controls) (IWMPCore2 * This, IWMPControls ** ppControl);
	HRESULT(STDMETHODCALLTYPE * get_settings) (IWMPCore2 * This, IWMPSettings ** ppSettings);
	HRESULT(STDMETHODCALLTYPE * get_currentMedia) (IWMPCore2 * This, IWMPMedia ** ppMedia);
	HRESULT(STDMETHODCALLTYPE * put_currentMedia) (IWMPCore2 * This, IWMPMedia * pMedia);
	HRESULT(STDMETHODCALLTYPE * get_mediaCollection) (IWMPCore2 * This, IWMPMediaCollection ** ppMediaCollection);
	HRESULT(STDMETHODCALLTYPE * get_playlistCollection) (IWMPCore2 * This, IWMPPlaylistCollection ** ppPlaylistCollection);
	HRESULT(STDMETHODCALLTYPE * get_versionInfo) (IWMPCore2 * This, BSTR * pbstrVersionInfo);
	HRESULT(STDMETHODCALLTYPE * launchURL) (IWMPCore2 * This, BSTR bstrURL);
	HRESULT(STDMETHODCALLTYPE * get_network) (IWMPCore2 * This, IWMPNetwork ** ppQNI);
	HRESULT(STDMETHODCALLTYPE * get_currentPlaylist) (IWMPCore2 * This, IWMPPlaylist ** ppPL);
	HRESULT(STDMETHODCALLTYPE * put_currentPlaylist) (IWMPCore2 * This, IWMPPlaylist * pPL);
	HRESULT(STDMETHODCALLTYPE * get_cdromCollection) (IWMPCore2 * This, IWMPCdromCollection ** ppCdromCollection);
	HRESULT(STDMETHODCALLTYPE * get_closedCaption) (IWMPCore2 * This, IWMPClosedCaption ** ppClosedCaption);
	HRESULT(STDMETHODCALLTYPE * get_isOnline) (IWMPCore2 * This, VARIANT_BOOL * pfOnline);
	HRESULT(STDMETHODCALLTYPE * get_error) (IWMPCore2 * This, IWMPError ** ppError);
	HRESULT(STDMETHODCALLTYPE * get_status) (IWMPCore2 * This, BSTR * pbstrStatus);
	HRESULT(STDMETHODCALLTYPE * get_dvd) (IWMPCore2 * This, IWMPDVD ** ppDVD);
	END_INTERFACE
}  IWMPCore2Vtbl;
interface IWMPCore2
{
	CONST_VTBL struct IWMPCore2Vtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IWMPCore2_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IWMPCore2_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define IWMPCore2_Release(This)( (This)->lpVtbl -> Release(This) )
#define IWMPCore2_GetTypeInfoCount(This,pctinfo)( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define IWMPCore2_GetTypeInfo(This,iTInfo,lcid,ppTInfo)( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define IWMPCore2_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define IWMPCore2_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define IWMPCore2_close(This)( (This)->lpVtbl -> close(This) )
#define IWMPCore2_get_URL(This,pbstrURL)( (This)->lpVtbl -> get_URL(This,pbstrURL) )
#define IWMPCore2_put_URL(This,bstrURL)( (This)->lpVtbl -> put_URL(This,bstrURL) )
#define IWMPCore2_get_openState(This,pwmpos)( (This)->lpVtbl -> get_openState(This,pwmpos) )
#define IWMPCore2_get_playState(This,pwmpps)( (This)->lpVtbl -> get_playState(This,pwmpps) )
#define IWMPCore2_get_controls(This,ppControl)( (This)->lpVtbl -> get_controls(This,ppControl) )
#define IWMPCore2_get_settings(This,ppSettings)( (This)->lpVtbl -> get_settings(This,ppSettings) )
#define IWMPCore2_get_currentMedia(This,ppMedia)( (This)->lpVtbl -> get_currentMedia(This,ppMedia) )
#define IWMPCore2_put_currentMedia(This,pMedia)( (This)->lpVtbl -> put_currentMedia(This,pMedia) )
#define IWMPCore2_get_mediaCollection(This,ppMediaCollection)( (This)->lpVtbl -> get_mediaCollection(This,ppMediaCollection) )
#define IWMPCore2_get_playlistCollection(This,ppPlaylistCollection)( (This)->lpVtbl -> get_playlistCollection(This,ppPlaylistCollection) )
#define IWMPCore2_get_versionInfo(This,pbstrVersionInfo)( (This)->lpVtbl -> get_versionInfo(This,pbstrVersionInfo) )
#define IWMPCore2_launchURL(This,bstrURL)( (This)->lpVtbl -> launchURL(This,bstrURL) )
#define IWMPCore2_get_network(This,ppQNI)( (This)->lpVtbl -> get_network(This,ppQNI) )
#define IWMPCore2_get_currentPlaylist(This,ppPL)( (This)->lpVtbl -> get_currentPlaylist(This,ppPL) )
#define IWMPCore2_put_currentPlaylist(This,pPL)( (This)->lpVtbl -> put_currentPlaylist(This,pPL) )
#define IWMPCore2_get_cdromCollection(This,ppCdromCollection)( (This)->lpVtbl -> get_cdromCollection(This,ppCdromCollection) )
#define IWMPCore2_get_closedCaption(This,ppClosedCaption)( (This)->lpVtbl -> get_closedCaption(This,ppClosedCaption) )
#define IWMPCore2_get_isOnline(This,pfOnline)( (This)->lpVtbl -> get_isOnline(This,pfOnline) )
#define IWMPCore2_get_error(This,ppError)( (This)->lpVtbl -> get_error(This,ppError) )
#define IWMPCore2_get_status(This,pbstrStatus)( (This)->lpVtbl -> get_status(This,pbstrStatus) )
#define IWMPCore2_get_dvd(This,ppDVD)( (This)->lpVtbl -> get_dvd(This,ppDVD) )
#endif
#endif
#ifndef __IWMPPlayer3_INTERFACE_DEFINED__
#define __IWMPPlayer3_INTERFACE_DEFINED__
extern const IID IID_IWMPPlayer3;
typedef struct IWMPPlayer3Vtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IWMPPlayer3 * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IWMPPlayer3 * This);
	ULONG(STDMETHODCALLTYPE * Release) (IWMPPlayer3 * This);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfoCount) (IWMPPlayer3 * This, UINT * pctinfo);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfo) (IWMPPlayer3 * This, UINT iTInfo, LCID lcid, ITypeInfo ** ppTInfo);
	HRESULT(STDMETHODCALLTYPE * GetIDsOfNames) (IWMPPlayer3 * This, REFIID riid, LPOLESTR * rgszNames, UINT cNames, LCID lcid, DISPID * rgDispId);
	HRESULT(STDMETHODCALLTYPE * Invoke) (IWMPPlayer3 * This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS * pDispParams, VARIANT * pVarResult, EXCEPINFO * pExcepInfo, UINT * puArgErr);
	HRESULT(STDMETHODCALLTYPE * close) (IWMPPlayer3 * This);
	HRESULT(STDMETHODCALLTYPE * get_URL) (IWMPPlayer3 * This, BSTR * pbstrURL);
	HRESULT(STDMETHODCALLTYPE * put_URL) (IWMPPlayer3 * This, BSTR bstrURL);
	HRESULT(STDMETHODCALLTYPE * get_openState) (IWMPPlayer3 * This, WMPOpenState * pwmpos);
	HRESULT(STDMETHODCALLTYPE * get_playState) (IWMPPlayer3 * This, WMPPlayState * pwmpps);
	HRESULT(STDMETHODCALLTYPE * get_controls) (IWMPPlayer3 * This, IWMPControls ** ppControl);
	HRESULT(STDMETHODCALLTYPE * get_settings) (IWMPPlayer3 * This, IWMPSettings ** ppSettings);
	HRESULT(STDMETHODCALLTYPE * get_currentMedia) (IWMPPlayer3 * This, IWMPMedia ** ppMedia);
	HRESULT(STDMETHODCALLTYPE * put_currentMedia) (IWMPPlayer3 * This, IWMPMedia * pMedia);
	HRESULT(STDMETHODCALLTYPE * get_mediaCollection) (IWMPPlayer3 * This, IWMPMediaCollection ** ppMediaCollection);
	HRESULT(STDMETHODCALLTYPE * get_playlistCollection) (IWMPPlayer3 * This, IWMPPlaylistCollection ** ppPlaylistCollection);
	HRESULT(STDMETHODCALLTYPE * get_versionInfo) (IWMPPlayer3 * This, BSTR * pbstrVersionInfo);
	HRESULT(STDMETHODCALLTYPE * launchURL) (IWMPPlayer3 * This, BSTR bstrURL);
	HRESULT(STDMETHODCALLTYPE * get_network) (IWMPPlayer3 * This, IWMPNetwork ** ppQNI);
	HRESULT(STDMETHODCALLTYPE * get_currentPlaylist) (IWMPPlayer3 * This, IWMPPlaylist ** ppPL);
	HRESULT(STDMETHODCALLTYPE * put_currentPlaylist) (IWMPPlayer3 * This, IWMPPlaylist * pPL);
	HRESULT(STDMETHODCALLTYPE * get_cdromCollection) (IWMPPlayer3 * This, IWMPCdromCollection ** ppCdromCollection);
	HRESULT(STDMETHODCALLTYPE * get_closedCaption) (IWMPPlayer3 * This, IWMPClosedCaption ** ppClosedCaption);
	HRESULT(STDMETHODCALLTYPE * get_isOnline) (IWMPPlayer3 * This, VARIANT_BOOL * pfOnline);
	HRESULT(STDMETHODCALLTYPE * get_error) (IWMPPlayer3 * This, IWMPError ** ppError);
	HRESULT(STDMETHODCALLTYPE * get_status) (IWMPPlayer3 * This, BSTR * pbstrStatus);
	HRESULT(STDMETHODCALLTYPE * get_dvd) (IWMPPlayer3 * This, IWMPDVD ** ppDVD);
	HRESULT(STDMETHODCALLTYPE * get_enabled) (IWMPPlayer3 * This, VARIANT_BOOL * pbEnabled);
	HRESULT(STDMETHODCALLTYPE * put_enabled) (IWMPPlayer3 * This, VARIANT_BOOL bEnabled);
	HRESULT(STDMETHODCALLTYPE * get_fullScreen) (IWMPPlayer3 * This, VARIANT_BOOL * pbFullScreen);
	HRESULT(STDMETHODCALLTYPE * put_fullScreen) (IWMPPlayer3 * This, VARIANT_BOOL bFullScreen);
	HRESULT(STDMETHODCALLTYPE * get_enableContextMenu) (IWMPPlayer3 * This, VARIANT_BOOL * pbEnableContextMenu);
	HRESULT(STDMETHODCALLTYPE * put_enableContextMenu) (IWMPPlayer3 * This, VARIANT_BOOL bEnableContextMenu);
	HRESULT(STDMETHODCALLTYPE * put_uiMode) (IWMPPlayer3 * This, BSTR bstrMode);
	HRESULT(STDMETHODCALLTYPE * get_uiMode) (IWMPPlayer3 * This, BSTR * pbstrMode);
	HRESULT(STDMETHODCALLTYPE * get_stretchToFit) (IWMPPlayer3 * This, VARIANT_BOOL * pbEnabled);
	HRESULT(STDMETHODCALLTYPE * put_stretchToFit) (IWMPPlayer3 * This, VARIANT_BOOL bEnabled);
	HRESULT(STDMETHODCALLTYPE * get_windowlessVideo) (IWMPPlayer3 * This, VARIANT_BOOL * pbEnabled);
	HRESULT(STDMETHODCALLTYPE * put_windowlessVideo) (IWMPPlayer3 * This, VARIANT_BOOL bEnabled);
	END_INTERFACE
}  IWMPPlayer3Vtbl;
interface IWMPPlayer3
{
	CONST_VTBL struct IWMPPlayer3Vtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IWMPPlayer3_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IWMPPlayer3_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define IWMPPlayer3_Release(This)( (This)->lpVtbl -> Release(This) )
#define IWMPPlayer3_GetTypeInfoCount(This,pctinfo)( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define IWMPPlayer3_GetTypeInfo(This,iTInfo,lcid,ppTInfo)( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define IWMPPlayer3_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define IWMPPlayer3_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define IWMPPlayer3_close(This)( (This)->lpVtbl -> close(This) )
#define IWMPPlayer3_get_URL(This,pbstrURL)( (This)->lpVtbl -> get_URL(This,pbstrURL) )
#define IWMPPlayer3_put_URL(This,bstrURL)( (This)->lpVtbl -> put_URL(This,bstrURL) )
#define IWMPPlayer3_get_openState(This,pwmpos)( (This)->lpVtbl -> get_openState(This,pwmpos) )
#define IWMPPlayer3_get_playState(This,pwmpps)( (This)->lpVtbl -> get_playState(This,pwmpps) )
#define IWMPPlayer3_get_controls(This,ppControl)( (This)->lpVtbl -> get_controls(This,ppControl) )
#define IWMPPlayer3_get_settings(This,ppSettings)( (This)->lpVtbl -> get_settings(This,ppSettings) )
#define IWMPPlayer3_get_currentMedia(This,ppMedia)( (This)->lpVtbl -> get_currentMedia(This,ppMedia) )
#define IWMPPlayer3_put_currentMedia(This,pMedia)( (This)->lpVtbl -> put_currentMedia(This,pMedia) )
#define IWMPPlayer3_get_mediaCollection(This,ppMediaCollection)( (This)->lpVtbl -> get_mediaCollection(This,ppMediaCollection) )
#define IWMPPlayer3_get_playlistCollection(This,ppPlaylistCollection)( (This)->lpVtbl -> get_playlistCollection(This,ppPlaylistCollection) )
#define IWMPPlayer3_get_versionInfo(This,pbstrVersionInfo)( (This)->lpVtbl -> get_versionInfo(This,pbstrVersionInfo) )
#define IWMPPlayer3_launchURL(This,bstrURL)( (This)->lpVtbl -> launchURL(This,bstrURL) )
#define IWMPPlayer3_get_network(This,ppQNI)( (This)->lpVtbl -> get_network(This,ppQNI) )
#define IWMPPlayer3_get_currentPlaylist(This,ppPL)( (This)->lpVtbl -> get_currentPlaylist(This,ppPL) )
#define IWMPPlayer3_put_currentPlaylist(This,pPL)( (This)->lpVtbl -> put_currentPlaylist(This,pPL) )
#define IWMPPlayer3_get_cdromCollection(This,ppCdromCollection)( (This)->lpVtbl -> get_cdromCollection(This,ppCdromCollection) )
#define IWMPPlayer3_get_closedCaption(This,ppClosedCaption)( (This)->lpVtbl -> get_closedCaption(This,ppClosedCaption) )
#define IWMPPlayer3_get_isOnline(This,pfOnline)( (This)->lpVtbl -> get_isOnline(This,pfOnline) )
#define IWMPPlayer3_get_error(This,ppError)( (This)->lpVtbl -> get_error(This,ppError) )
#define IWMPPlayer3_get_status(This,pbstrStatus)( (This)->lpVtbl -> get_status(This,pbstrStatus) )
#define IWMPPlayer3_get_dvd(This,ppDVD)( (This)->lpVtbl -> get_dvd(This,ppDVD) )
#define IWMPPlayer3_get_enabled(This,pbEnabled)( (This)->lpVtbl -> get_enabled(This,pbEnabled) )
#define IWMPPlayer3_put_enabled(This,bEnabled)( (This)->lpVtbl -> put_enabled(This,bEnabled) )
#define IWMPPlayer3_get_fullScreen(This,pbFullScreen)( (This)->lpVtbl -> get_fullScreen(This,pbFullScreen) )
#define IWMPPlayer3_put_fullScreen(This,bFullScreen)( (This)->lpVtbl -> put_fullScreen(This,bFullScreen) )
#define IWMPPlayer3_get_enableContextMenu(This,pbEnableContextMenu)( (This)->lpVtbl -> get_enableContextMenu(This,pbEnableContextMenu) )
#define IWMPPlayer3_put_enableContextMenu(This,bEnableContextMenu)( (This)->lpVtbl -> put_enableContextMenu(This,bEnableContextMenu) )
#define IWMPPlayer3_put_uiMode(This,bstrMode)( (This)->lpVtbl -> put_uiMode(This,bstrMode) )
#define IWMPPlayer3_get_uiMode(This,pbstrMode)( (This)->lpVtbl -> get_uiMode(This,pbstrMode) )
#define IWMPPlayer3_get_stretchToFit(This,pbEnabled)( (This)->lpVtbl -> get_stretchToFit(This,pbEnabled) )
#define IWMPPlayer3_put_stretchToFit(This,bEnabled)( (This)->lpVtbl -> put_stretchToFit(This,bEnabled) )
#define IWMPPlayer3_get_windowlessVideo(This,pbEnabled)( (This)->lpVtbl -> get_windowlessVideo(This,pbEnabled) )
#define IWMPPlayer3_put_windowlessVideo(This,bEnabled)( (This)->lpVtbl -> put_windowlessVideo(This,bEnabled) )
#endif
#endif
#ifndef __IWMPErrorItem2_INTERFACE_DEFINED__
#define __IWMPErrorItem2_INTERFACE_DEFINED__
extern const IID IID_IWMPErrorItem2;
typedef struct IWMPErrorItem2Vtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IWMPErrorItem2 * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IWMPErrorItem2 * This);
	ULONG(STDMETHODCALLTYPE * Release) (IWMPErrorItem2 * This);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfoCount) (IWMPErrorItem2 * This, UINT * pctinfo);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfo) (IWMPErrorItem2 * This, UINT iTInfo, LCID lcid, ITypeInfo ** ppTInfo);
	HRESULT(STDMETHODCALLTYPE * GetIDsOfNames) (IWMPErrorItem2 * This, REFIID riid, LPOLESTR * rgszNames, UINT cNames, LCID lcid, DISPID * rgDispId);
	HRESULT(STDMETHODCALLTYPE * Invoke) (IWMPErrorItem2 * This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS * pDispParams, VARIANT * pVarResult, EXCEPINFO * pExcepInfo, UINT * puArgErr);
	HRESULT(STDMETHODCALLTYPE * get_errorCode) (IWMPErrorItem2 * This, long *phr);
	HRESULT(STDMETHODCALLTYPE * get_errorDescription) (IWMPErrorItem2 * This, BSTR * pbstrDescription);
	HRESULT(STDMETHODCALLTYPE * get_errorContext) (IWMPErrorItem2 * This, VARIANT * pvarContext);
	HRESULT(STDMETHODCALLTYPE * get_remedy) (IWMPErrorItem2 * This, long *plRemedy);
	HRESULT(STDMETHODCALLTYPE * get_customUrl) (IWMPErrorItem2 * This, BSTR * pbstrCustomUrl);
	HRESULT(STDMETHODCALLTYPE * get_condition) (IWMPErrorItem2 * This, long *plCondition);
	END_INTERFACE
}  IWMPErrorItem2Vtbl;
interface IWMPErrorItem2
{
	CONST_VTBL struct IWMPErrorItem2Vtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IWMPErrorItem2_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IWMPErrorItem2_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define IWMPErrorItem2_Release(This)( (This)->lpVtbl -> Release(This) )
#define IWMPErrorItem2_GetTypeInfoCount(This,pctinfo)( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define IWMPErrorItem2_GetTypeInfo(This,iTInfo,lcid,ppTInfo)( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define IWMPErrorItem2_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define IWMPErrorItem2_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define IWMPErrorItem2_get_errorCode(This,phr)( (This)->lpVtbl -> get_errorCode(This,phr) )
#define IWMPErrorItem2_get_errorDescription(This,pbstrDescription)( (This)->lpVtbl -> get_errorDescription(This,pbstrDescription) )
#define IWMPErrorItem2_get_errorContext(This,pvarContext)( (This)->lpVtbl -> get_errorContext(This,pvarContext) )
#define IWMPErrorItem2_get_remedy(This,plRemedy)( (This)->lpVtbl -> get_remedy(This,plRemedy) )
#define IWMPErrorItem2_get_customUrl(This,pbstrCustomUrl)( (This)->lpVtbl -> get_customUrl(This,pbstrCustomUrl) )
#define IWMPErrorItem2_get_condition(This,plCondition)( (This)->lpVtbl -> get_condition(This,plCondition) )
#endif
#endif
#ifndef __IWMPRemoteMediaServices_INTERFACE_DEFINED__
#define __IWMPRemoteMediaServices_INTERFACE_DEFINED__
extern const IID IID_IWMPRemoteMediaServices;
typedef struct IWMPRemoteMediaServicesVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IWMPRemoteMediaServices * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IWMPRemoteMediaServices * This);
	ULONG(STDMETHODCALLTYPE * Release) (IWMPRemoteMediaServices * This);
	HRESULT(STDMETHODCALLTYPE * GetServiceType) (IWMPRemoteMediaServices * This, BSTR * pbstrType);
	HRESULT(STDMETHODCALLTYPE * GetApplicationName) (IWMPRemoteMediaServices * This, BSTR * pbstrName);
	HRESULT(STDMETHODCALLTYPE * GetScriptableObject) (IWMPRemoteMediaServices * This, BSTR * pbstrName, IDispatch ** ppDispatch);
	HRESULT(STDMETHODCALLTYPE * GetCustomUIMode) (IWMPRemoteMediaServices * This, BSTR * pbstrFile);
	END_INTERFACE
}  IWMPRemoteMediaServicesVtbl;
interface IWMPRemoteMediaServices
{
	CONST_VTBL struct IWMPRemoteMediaServicesVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IWMPRemoteMediaServices_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IWMPRemoteMediaServices_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define IWMPRemoteMediaServices_Release(This)( (This)->lpVtbl -> Release(This) )
#define IWMPRemoteMediaServices_GetServiceType(This,pbstrType)( (This)->lpVtbl -> GetServiceType(This,pbstrType) )
#define IWMPRemoteMediaServices_GetApplicationName(This,pbstrName)( (This)->lpVtbl -> GetApplicationName(This,pbstrName) )
#define IWMPRemoteMediaServices_GetScriptableObject(This,pbstrName,ppDispatch)( (This)->lpVtbl -> GetScriptableObject(This,pbstrName,ppDispatch) )
#define IWMPRemoteMediaServices_GetCustomUIMode(This,pbstrFile)( (This)->lpVtbl -> GetCustomUIMode(This,pbstrFile) )
#endif
#endif
EXTERN_GUID(CLSID_WMPSkinManager, 0xB2A7FD52, 0x301F, 0x4348, 0xB9, 0x3A, 0x63, 0x8C, 0x6D, 0xE4, 0x92, 0x29);
extern RPC_IF_HANDLE __MIDL_itf_wmp_0000_0024_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_wmp_0000_0024_v0_0_s_ifspec;
#ifndef __IWMPSkinManager_INTERFACE_DEFINED__
#define __IWMPSkinManager_INTERFACE_DEFINED__
extern const IID IID_IWMPSkinManager;
typedef struct IWMPSkinManagerVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IWMPSkinManager * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IWMPSkinManager * This);
	ULONG(STDMETHODCALLTYPE * Release) (IWMPSkinManager * This);
	HRESULT(STDMETHODCALLTYPE * SetVisualStyle) (IWMPSkinManager * This, BSTR bstrPath);
	END_INTERFACE
}  IWMPSkinManagerVtbl;
interface IWMPSkinManager
{
	CONST_VTBL struct IWMPSkinManagerVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IWMPSkinManager_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IWMPSkinManager_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define IWMPSkinManager_Release(This)( (This)->lpVtbl -> Release(This) )
#define IWMPSkinManager_SetVisualStyle(This,bstrPath)( (This)->lpVtbl -> SetVisualStyle(This,bstrPath) )
#endif
#endif
#ifndef __IWMPMetadataPicture_INTERFACE_DEFINED__
#define __IWMPMetadataPicture_INTERFACE_DEFINED__
extern const IID IID_IWMPMetadataPicture;
typedef struct IWMPMetadataPictureVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IWMPMetadataPicture * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IWMPMetadataPicture * This);
	ULONG(STDMETHODCALLTYPE * Release) (IWMPMetadataPicture * This);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfoCount) (IWMPMetadataPicture * This, UINT * pctinfo);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfo) (IWMPMetadataPicture * This, UINT iTInfo, LCID lcid, ITypeInfo ** ppTInfo);
	HRESULT(STDMETHODCALLTYPE * GetIDsOfNames) (IWMPMetadataPicture * This, REFIID riid, LPOLESTR * rgszNames, UINT cNames, LCID lcid, DISPID * rgDispId);
	HRESULT(STDMETHODCALLTYPE * Invoke) (IWMPMetadataPicture * This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS * pDispParams, VARIANT * pVarResult, EXCEPINFO * pExcepInfo, UINT * puArgErr);
	HRESULT(STDMETHODCALLTYPE * get_mimeType) (IWMPMetadataPicture * This, BSTR * pbstrMimeType);
	HRESULT(STDMETHODCALLTYPE * get_pictureType) (IWMPMetadataPicture * This, BSTR * pbstrPictureType);
	HRESULT(STDMETHODCALLTYPE * get_description) (IWMPMetadataPicture * This, BSTR * pbstrDescription);
	HRESULT(STDMETHODCALLTYPE * get_URL) (IWMPMetadataPicture * This, BSTR * pbstrURL);
	END_INTERFACE
}  IWMPMetadataPictureVtbl;
interface IWMPMetadataPicture
{
	CONST_VTBL struct IWMPMetadataPictureVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IWMPMetadataPicture_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IWMPMetadataPicture_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define IWMPMetadataPicture_Release(This)( (This)->lpVtbl -> Release(This) )
#define IWMPMetadataPicture_GetTypeInfoCount(This,pctinfo)( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define IWMPMetadataPicture_GetTypeInfo(This,iTInfo,lcid,ppTInfo)( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define IWMPMetadataPicture_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define IWMPMetadataPicture_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define IWMPMetadataPicture_get_mimeType(This,pbstrMimeType)( (This)->lpVtbl -> get_mimeType(This,pbstrMimeType) )
#define IWMPMetadataPicture_get_pictureType(This,pbstrPictureType)( (This)->lpVtbl -> get_pictureType(This,pbstrPictureType) )
#define IWMPMetadataPicture_get_description(This,pbstrDescription)( (This)->lpVtbl -> get_description(This,pbstrDescription) )
#define IWMPMetadataPicture_get_URL(This,pbstrURL)( (This)->lpVtbl -> get_URL(This,pbstrURL) )
#endif
#endif
#ifndef __IWMPMetadataText_INTERFACE_DEFINED__
#define __IWMPMetadataText_INTERFACE_DEFINED__
extern const IID IID_IWMPMetadataText;
typedef struct IWMPMetadataTextVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IWMPMetadataText * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IWMPMetadataText * This);
	ULONG(STDMETHODCALLTYPE * Release) (IWMPMetadataText * This);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfoCount) (IWMPMetadataText * This, UINT * pctinfo);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfo) (IWMPMetadataText * This, UINT iTInfo, LCID lcid, ITypeInfo ** ppTInfo);
	HRESULT(STDMETHODCALLTYPE * GetIDsOfNames) (IWMPMetadataText * This, REFIID riid, LPOLESTR * rgszNames, UINT cNames, LCID lcid, DISPID * rgDispId);
	HRESULT(STDMETHODCALLTYPE * Invoke) (IWMPMetadataText * This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS * pDispParams, VARIANT * pVarResult, EXCEPINFO * pExcepInfo, UINT * puArgErr);
	HRESULT(STDMETHODCALLTYPE * get_description) (IWMPMetadataText * This, BSTR * pbstrDescription);
	HRESULT(STDMETHODCALLTYPE * get_text) (IWMPMetadataText * This, BSTR * pbstrText);
	END_INTERFACE
}  IWMPMetadataTextVtbl;
interface IWMPMetadataText
{
	CONST_VTBL struct IWMPMetadataTextVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IWMPMetadataText_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IWMPMetadataText_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define IWMPMetadataText_Release(This)( (This)->lpVtbl -> Release(This) )
#define IWMPMetadataText_GetTypeInfoCount(This,pctinfo)( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define IWMPMetadataText_GetTypeInfo(This,iTInfo,lcid,ppTInfo)( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define IWMPMetadataText_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define IWMPMetadataText_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define IWMPMetadataText_get_description(This,pbstrDescription)( (This)->lpVtbl -> get_description(This,pbstrDescription) )
#define IWMPMetadataText_get_text(This,pbstrText)( (This)->lpVtbl -> get_text(This,pbstrText) )
#endif
#endif
#ifndef __IWMPMedia3_INTERFACE_DEFINED__
#define __IWMPMedia3_INTERFACE_DEFINED__
extern const IID IID_IWMPMedia3;
typedef struct IWMPMedia3Vtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IWMPMedia3 * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IWMPMedia3 * This);
	ULONG(STDMETHODCALLTYPE * Release) (IWMPMedia3 * This);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfoCount) (IWMPMedia3 * This, UINT * pctinfo);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfo) (IWMPMedia3 * This, UINT iTInfo, LCID lcid, ITypeInfo ** ppTInfo);
	HRESULT(STDMETHODCALLTYPE * GetIDsOfNames) (IWMPMedia3 * This, REFIID riid, LPOLESTR * rgszNames, UINT cNames, LCID lcid, DISPID * rgDispId);
	HRESULT(STDMETHODCALLTYPE * Invoke) (IWMPMedia3 * This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS * pDispParams, VARIANT * pVarResult, EXCEPINFO * pExcepInfo, UINT * puArgErr);
	HRESULT(STDMETHODCALLTYPE * get_isIdentical) (IWMPMedia3 * This, IWMPMedia * pIWMPMedia, VARIANT_BOOL * pvbool);
	HRESULT(STDMETHODCALLTYPE * get_sourceURL) (IWMPMedia3 * This, BSTR * pbstrSourceURL);
	HRESULT(STDMETHODCALLTYPE * get_name) (IWMPMedia3 * This, BSTR * pbstrName);
	HRESULT(STDMETHODCALLTYPE * put_name) (IWMPMedia3 * This, BSTR bstrName);
	HRESULT(STDMETHODCALLTYPE * get_imageSourceWidth) (IWMPMedia3 * This, long *pWidth);
	HRESULT(STDMETHODCALLTYPE * get_imageSourceHeight) (IWMPMedia3 * This, long *pHeight);
	HRESULT(STDMETHODCALLTYPE * get_markerCount) (IWMPMedia3 * This, long *pMarkerCount);
	HRESULT(STDMETHODCALLTYPE * getMarkerTime) (IWMPMedia3 * This, long MarkerNum, double *pMarkerTime);
	HRESULT(STDMETHODCALLTYPE * getMarkerName) (IWMPMedia3 * This, long MarkerNum, BSTR * pbstrMarkerName);
	HRESULT(STDMETHODCALLTYPE * get_duration) (IWMPMedia3 * This, double *pDuration);
	HRESULT(STDMETHODCALLTYPE * get_durationString) (IWMPMedia3 * This, BSTR * pbstrDuration);
	HRESULT(STDMETHODCALLTYPE * get_attributeCount) (IWMPMedia3 * This, long *plCount);
	HRESULT(STDMETHODCALLTYPE * getAttributeName) (IWMPMedia3 * This, long lIndex, BSTR * pbstrItemName);
	HRESULT(STDMETHODCALLTYPE * getItemInfo) (IWMPMedia3 * This, BSTR bstrItemName, BSTR * pbstrVal);
	HRESULT(STDMETHODCALLTYPE * setItemInfo) (IWMPMedia3 * This, BSTR bstrItemName, BSTR bstrVal);
	HRESULT(STDMETHODCALLTYPE * getItemInfoByAtom) (IWMPMedia3 * This, long lAtom, BSTR * pbstrVal);
	HRESULT(STDMETHODCALLTYPE * isMemberOf) (IWMPMedia3 * This, IWMPPlaylist * pPlaylist, VARIANT_BOOL * pvarfIsMemberOf);
	HRESULT(STDMETHODCALLTYPE * isReadOnlyItem) (IWMPMedia3 * This, BSTR bstrItemName, VARIANT_BOOL * pvarfIsReadOnly);
	HRESULT(STDMETHODCALLTYPE * get_error) (IWMPMedia3 * This, IWMPErrorItem ** ppIWMPErrorItem);
	HRESULT(STDMETHODCALLTYPE * getAttributeCountByType) (IWMPMedia3 * This, BSTR bstrType, BSTR bstrLanguage, long *plCount);
	HRESULT(STDMETHODCALLTYPE * getItemInfoByType) (IWMPMedia3 * This, BSTR bstrType, BSTR bstrLanguage, long lIndex, VARIANT * pvarValue);
	END_INTERFACE
}  IWMPMedia3Vtbl;
interface IWMPMedia3
{
	CONST_VTBL struct IWMPMedia3Vtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IWMPMedia3_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IWMPMedia3_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define IWMPMedia3_Release(This)( (This)->lpVtbl -> Release(This) )
#define IWMPMedia3_GetTypeInfoCount(This,pctinfo)( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define IWMPMedia3_GetTypeInfo(This,iTInfo,lcid,ppTInfo)( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define IWMPMedia3_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define IWMPMedia3_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define IWMPMedia3_get_isIdentical(This,pIWMPMedia,pvbool)( (This)->lpVtbl -> get_isIdentical(This,pIWMPMedia,pvbool) )
#define IWMPMedia3_get_sourceURL(This,pbstrSourceURL)( (This)->lpVtbl -> get_sourceURL(This,pbstrSourceURL) )
#define IWMPMedia3_get_name(This,pbstrName)( (This)->lpVtbl -> get_name(This,pbstrName) )
#define IWMPMedia3_put_name(This,bstrName)( (This)->lpVtbl -> put_name(This,bstrName) )
#define IWMPMedia3_get_imageSourceWidth(This,pWidth)( (This)->lpVtbl -> get_imageSourceWidth(This,pWidth) )
#define IWMPMedia3_get_imageSourceHeight(This,pHeight)( (This)->lpVtbl -> get_imageSourceHeight(This,pHeight) )
#define IWMPMedia3_get_markerCount(This,pMarkerCount)( (This)->lpVtbl -> get_markerCount(This,pMarkerCount) )
#define IWMPMedia3_getMarkerTime(This,MarkerNum,pMarkerTime)( (This)->lpVtbl -> getMarkerTime(This,MarkerNum,pMarkerTime) )
#define IWMPMedia3_getMarkerName(This,MarkerNum,pbstrMarkerName)( (This)->lpVtbl -> getMarkerName(This,MarkerNum,pbstrMarkerName) )
#define IWMPMedia3_get_duration(This,pDuration)( (This)->lpVtbl -> get_duration(This,pDuration) )
#define IWMPMedia3_get_durationString(This,pbstrDuration)( (This)->lpVtbl -> get_durationString(This,pbstrDuration) )
#define IWMPMedia3_get_attributeCount(This,plCount)( (This)->lpVtbl -> get_attributeCount(This,plCount) )
#define IWMPMedia3_getAttributeName(This,lIndex,pbstrItemName)( (This)->lpVtbl -> getAttributeName(This,lIndex,pbstrItemName) )
#define IWMPMedia3_getItemInfo(This,bstrItemName,pbstrVal)( (This)->lpVtbl -> getItemInfo(This,bstrItemName,pbstrVal) )
#define IWMPMedia3_setItemInfo(This,bstrItemName,bstrVal)( (This)->lpVtbl -> setItemInfo(This,bstrItemName,bstrVal) )
#define IWMPMedia3_getItemInfoByAtom(This,lAtom,pbstrVal)( (This)->lpVtbl -> getItemInfoByAtom(This,lAtom,pbstrVal) )
#define IWMPMedia3_isMemberOf(This,pPlaylist,pvarfIsMemberOf)( (This)->lpVtbl -> isMemberOf(This,pPlaylist,pvarfIsMemberOf) )
#define IWMPMedia3_isReadOnlyItem(This,bstrItemName,pvarfIsReadOnly)( (This)->lpVtbl -> isReadOnlyItem(This,bstrItemName,pvarfIsReadOnly) )
#define IWMPMedia3_get_error(This,ppIWMPErrorItem)( (This)->lpVtbl -> get_error(This,ppIWMPErrorItem) )
#define IWMPMedia3_getAttributeCountByType(This,bstrType,bstrLanguage,plCount)( (This)->lpVtbl -> getAttributeCountByType(This,bstrType,bstrLanguage,plCount) )
#define IWMPMedia3_getItemInfoByType(This,bstrType,bstrLanguage,lIndex,pvarValue)( (This)->lpVtbl -> getItemInfoByType(This,bstrType,bstrLanguage,lIndex,pvarValue) )
#endif
#endif
#ifndef __IWMPSettings2_INTERFACE_DEFINED__
#define __IWMPSettings2_INTERFACE_DEFINED__
extern const IID IID_IWMPSettings2;
typedef struct IWMPSettings2Vtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IWMPSettings2 * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IWMPSettings2 * This);
	ULONG(STDMETHODCALLTYPE * Release) (IWMPSettings2 * This);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfoCount) (IWMPSettings2 * This, UINT * pctinfo);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfo) (IWMPSettings2 * This, UINT iTInfo, LCID lcid, ITypeInfo ** ppTInfo);
	HRESULT(STDMETHODCALLTYPE * GetIDsOfNames) (IWMPSettings2 * This, REFIID riid, LPOLESTR * rgszNames, UINT cNames, LCID lcid, DISPID * rgDispId);
	HRESULT(STDMETHODCALLTYPE * Invoke) (IWMPSettings2 * This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS * pDispParams, VARIANT * pVarResult, EXCEPINFO * pExcepInfo, UINT * puArgErr);
	HRESULT(STDMETHODCALLTYPE * get_isAvailable) (IWMPSettings2 * This, BSTR bstrItem, VARIANT_BOOL * pIsAvailable);
	HRESULT(STDMETHODCALLTYPE * get_autoStart) (IWMPSettings2 * This, VARIANT_BOOL * pfAutoStart);
	HRESULT(STDMETHODCALLTYPE * put_autoStart) (IWMPSettings2 * This, VARIANT_BOOL fAutoStart);
	HRESULT(STDMETHODCALLTYPE * get_baseURL) (IWMPSettings2 * This, BSTR * pbstrBaseURL);
	HRESULT(STDMETHODCALLTYPE * put_baseURL) (IWMPSettings2 * This, BSTR bstrBaseURL);
	HRESULT(STDMETHODCALLTYPE * get_defaultFrame) (IWMPSettings2 * This, BSTR * pbstrDefaultFrame);
	HRESULT(STDMETHODCALLTYPE * put_defaultFrame) (IWMPSettings2 * This, BSTR bstrDefaultFrame);
	HRESULT(STDMETHODCALLTYPE * get_invokeURLs) (IWMPSettings2 * This, VARIANT_BOOL * pfInvokeURLs);
	HRESULT(STDMETHODCALLTYPE * put_invokeURLs) (IWMPSettings2 * This, VARIANT_BOOL fInvokeURLs);
	HRESULT(STDMETHODCALLTYPE * get_mute) (IWMPSettings2 * This, VARIANT_BOOL * pfMute);
	HRESULT(STDMETHODCALLTYPE * put_mute) (IWMPSettings2 * This, VARIANT_BOOL fMute);
	HRESULT(STDMETHODCALLTYPE * get_playCount) (IWMPSettings2 * This, long *plCount);
	HRESULT(STDMETHODCALLTYPE * put_playCount) (IWMPSettings2 * This, long lCount);
	HRESULT(STDMETHODCALLTYPE * get_rate) (IWMPSettings2 * This, double *pdRate);
	HRESULT(STDMETHODCALLTYPE * put_rate) (IWMPSettings2 * This, double dRate);
	HRESULT(STDMETHODCALLTYPE * get_balance) (IWMPSettings2 * This, long *plBalance);
	HRESULT(STDMETHODCALLTYPE * put_balance) (IWMPSettings2 * This, long lBalance);
	HRESULT(STDMETHODCALLTYPE * get_volume) (IWMPSettings2 * This, long *plVolume);
	HRESULT(STDMETHODCALLTYPE * put_volume) (IWMPSettings2 * This, long lVolume);
	HRESULT(STDMETHODCALLTYPE * getMode) (IWMPSettings2 * This, BSTR bstrMode, VARIANT_BOOL * pvarfMode);
	HRESULT(STDMETHODCALLTYPE * setMode) (IWMPSettings2 * This, BSTR bstrMode, VARIANT_BOOL varfMode);
	HRESULT(STDMETHODCALLTYPE * get_enableErrorDialogs) (IWMPSettings2 * This, VARIANT_BOOL * pfEnableErrorDialogs);
	HRESULT(STDMETHODCALLTYPE * put_enableErrorDialogs) (IWMPSettings2 * This, VARIANT_BOOL fEnableErrorDialogs);
	HRESULT(STDMETHODCALLTYPE * get_defaultAudioLanguage) (IWMPSettings2 * This, long *plLangID);
	HRESULT(STDMETHODCALLTYPE * get_mediaAccessRights) (IWMPSettings2 * This, BSTR * pbstrRights);
	HRESULT(STDMETHODCALLTYPE * requestMediaAccessRights) (IWMPSettings2 * This, BSTR bstrDesiredAccess, VARIANT_BOOL * pvbAccepted);
	END_INTERFACE
}  IWMPSettings2Vtbl;
interface IWMPSettings2
{
	CONST_VTBL struct IWMPSettings2Vtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IWMPSettings2_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IWMPSettings2_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define IWMPSettings2_Release(This)( (This)->lpVtbl -> Release(This) )
#define IWMPSettings2_GetTypeInfoCount(This,pctinfo)( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define IWMPSettings2_GetTypeInfo(This,iTInfo,lcid,ppTInfo)( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define IWMPSettings2_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define IWMPSettings2_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define IWMPSettings2_get_isAvailable(This,bstrItem,pIsAvailable)( (This)->lpVtbl -> get_isAvailable(This,bstrItem,pIsAvailable) )
#define IWMPSettings2_get_autoStart(This,pfAutoStart)( (This)->lpVtbl -> get_autoStart(This,pfAutoStart) )
#define IWMPSettings2_put_autoStart(This,fAutoStart)( (This)->lpVtbl -> put_autoStart(This,fAutoStart) )
#define IWMPSettings2_get_baseURL(This,pbstrBaseURL)( (This)->lpVtbl -> get_baseURL(This,pbstrBaseURL) )
#define IWMPSettings2_put_baseURL(This,bstrBaseURL)( (This)->lpVtbl -> put_baseURL(This,bstrBaseURL) )
#define IWMPSettings2_get_defaultFrame(This,pbstrDefaultFrame)( (This)->lpVtbl -> get_defaultFrame(This,pbstrDefaultFrame) )
#define IWMPSettings2_put_defaultFrame(This,bstrDefaultFrame)( (This)->lpVtbl -> put_defaultFrame(This,bstrDefaultFrame) )
#define IWMPSettings2_get_invokeURLs(This,pfInvokeURLs)( (This)->lpVtbl -> get_invokeURLs(This,pfInvokeURLs) )
#define IWMPSettings2_put_invokeURLs(This,fInvokeURLs)( (This)->lpVtbl -> put_invokeURLs(This,fInvokeURLs) )
#define IWMPSettings2_get_mute(This,pfMute)( (This)->lpVtbl -> get_mute(This,pfMute) )
#define IWMPSettings2_put_mute(This,fMute)( (This)->lpVtbl -> put_mute(This,fMute) )
#define IWMPSettings2_get_playCount(This,plCount)( (This)->lpVtbl -> get_playCount(This,plCount) )
#define IWMPSettings2_put_playCount(This,lCount)( (This)->lpVtbl -> put_playCount(This,lCount) )
#define IWMPSettings2_get_rate(This,pdRate)( (This)->lpVtbl -> get_rate(This,pdRate) )
#define IWMPSettings2_put_rate(This,dRate)( (This)->lpVtbl -> put_rate(This,dRate) )
#define IWMPSettings2_get_balance(This,plBalance)( (This)->lpVtbl -> get_balance(This,plBalance) )
#define IWMPSettings2_put_balance(This,lBalance)( (This)->lpVtbl -> put_balance(This,lBalance) )
#define IWMPSettings2_get_volume(This,plVolume)( (This)->lpVtbl -> get_volume(This,plVolume) )
#define IWMPSettings2_put_volume(This,lVolume)( (This)->lpVtbl -> put_volume(This,lVolume) )
#define IWMPSettings2_getMode(This,bstrMode,pvarfMode)( (This)->lpVtbl -> getMode(This,bstrMode,pvarfMode) )
#define IWMPSettings2_setMode(This,bstrMode,varfMode)( (This)->lpVtbl -> setMode(This,bstrMode,varfMode) )
#define IWMPSettings2_get_enableErrorDialogs(This,pfEnableErrorDialogs)( (This)->lpVtbl -> get_enableErrorDialogs(This,pfEnableErrorDialogs) )
#define IWMPSettings2_put_enableErrorDialogs(This,fEnableErrorDialogs)( (This)->lpVtbl -> put_enableErrorDialogs(This,fEnableErrorDialogs) )
#define IWMPSettings2_get_defaultAudioLanguage(This,plLangID)( (This)->lpVtbl -> get_defaultAudioLanguage(This,plLangID) )
#define IWMPSettings2_get_mediaAccessRights(This,pbstrRights)( (This)->lpVtbl -> get_mediaAccessRights(This,pbstrRights) )
#define IWMPSettings2_requestMediaAccessRights(This,bstrDesiredAccess,pvbAccepted)( (This)->lpVtbl -> requestMediaAccessRights(This,bstrDesiredAccess,pvbAccepted) )
#endif
#endif
#ifndef __IWMPControls3_INTERFACE_DEFINED__
#define __IWMPControls3_INTERFACE_DEFINED__
extern const IID IID_IWMPControls3;
typedef struct IWMPControls3Vtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IWMPControls3 * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IWMPControls3 * This);
	ULONG(STDMETHODCALLTYPE * Release) (IWMPControls3 * This);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfoCount) (IWMPControls3 * This, UINT * pctinfo);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfo) (IWMPControls3 * This, UINT iTInfo, LCID lcid, ITypeInfo ** ppTInfo);
	HRESULT(STDMETHODCALLTYPE * GetIDsOfNames) (IWMPControls3 * This, REFIID riid, LPOLESTR * rgszNames, UINT cNames, LCID lcid, DISPID * rgDispId);
	HRESULT(STDMETHODCALLTYPE * Invoke) (IWMPControls3 * This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS * pDispParams, VARIANT * pVarResult, EXCEPINFO * pExcepInfo, UINT * puArgErr);
	HRESULT(STDMETHODCALLTYPE * get_isAvailable) (IWMPControls3 * This, BSTR bstrItem, VARIANT_BOOL * pIsAvailable);
	HRESULT(STDMETHODCALLTYPE * play) (IWMPControls3 * This);
	HRESULT(STDMETHODCALLTYPE * stop) (IWMPControls3 * This);
	HRESULT(STDMETHODCALLTYPE * pause) (IWMPControls3 * This);
	HRESULT(STDMETHODCALLTYPE * fastForward) (IWMPControls3 * This);
	HRESULT(STDMETHODCALLTYPE * fastReverse) (IWMPControls3 * This);
	HRESULT(STDMETHODCALLTYPE * get_currentPosition) (IWMPControls3 * This, double *pdCurrentPosition);
	HRESULT(STDMETHODCALLTYPE * put_currentPosition) (IWMPControls3 * This, double dCurrentPosition);
	HRESULT(STDMETHODCALLTYPE * get_currentPositionString) (IWMPControls3 * This, BSTR * pbstrCurrentPosition);
	HRESULT(STDMETHODCALLTYPE * next) (IWMPControls3 * This);
	HRESULT(STDMETHODCALLTYPE * previous) (IWMPControls3 * This);
	HRESULT(STDMETHODCALLTYPE * get_currentItem) (IWMPControls3 * This, IWMPMedia ** ppIWMPMedia);
	HRESULT(STDMETHODCALLTYPE * put_currentItem) (IWMPControls3 * This, IWMPMedia * pIWMPMedia);
	HRESULT(STDMETHODCALLTYPE * get_currentMarker) (IWMPControls3 * This, long *plMarker);
	HRESULT(STDMETHODCALLTYPE * put_currentMarker) (IWMPControls3 * This, long lMarker);
	HRESULT(STDMETHODCALLTYPE * playItem) (IWMPControls3 * This, IWMPMedia * pIWMPMedia);
	HRESULT(STDMETHODCALLTYPE * step) (IWMPControls3 * This, long lStep);
	HRESULT(STDMETHODCALLTYPE * get_audioLanguageCount) (IWMPControls3 * This, long *plCount);
	HRESULT(STDMETHODCALLTYPE * getAudioLanguageID) (IWMPControls3 * This, long lIndex, long *plLangID);
	HRESULT(STDMETHODCALLTYPE * getAudioLanguageDescription) (IWMPControls3 * This, long lIndex, BSTR * pbstrLangDesc);
	HRESULT(STDMETHODCALLTYPE * get_currentAudioLanguage) (IWMPControls3 * This, long *plLangID);
	HRESULT(STDMETHODCALLTYPE * put_currentAudioLanguage) (IWMPControls3 * This, long lLangID);
	HRESULT(STDMETHODCALLTYPE * get_currentAudioLanguageIndex) (IWMPControls3 * This, long *plIndex);
	HRESULT(STDMETHODCALLTYPE * put_currentAudioLanguageIndex) (IWMPControls3 * This, long lIndex);
	HRESULT(STDMETHODCALLTYPE * getLanguageName) (IWMPControls3 * This, long lLangID, BSTR * pbstrLangName);
	HRESULT(STDMETHODCALLTYPE * get_currentPositionTimecode) (IWMPControls3 * This, BSTR * bstrTimecode);
	HRESULT(STDMETHODCALLTYPE * put_currentPositionTimecode) (IWMPControls3 * This, BSTR bstrTimecode);
	END_INTERFACE
}  IWMPControls3Vtbl;
interface IWMPControls3
{
	CONST_VTBL struct IWMPControls3Vtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IWMPControls3_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IWMPControls3_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define IWMPControls3_Release(This)( (This)->lpVtbl -> Release(This) )
#define IWMPControls3_GetTypeInfoCount(This,pctinfo)( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define IWMPControls3_GetTypeInfo(This,iTInfo,lcid,ppTInfo)( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define IWMPControls3_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define IWMPControls3_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define IWMPControls3_get_isAvailable(This,bstrItem,pIsAvailable)( (This)->lpVtbl -> get_isAvailable(This,bstrItem,pIsAvailable) )
#define IWMPControls3_play(This)( (This)->lpVtbl -> play(This) )
#define IWMPControls3_stop(This)( (This)->lpVtbl -> stop(This) )
#define IWMPControls3_pause(This)( (This)->lpVtbl -> pause(This) )
#define IWMPControls3_fastForward(This)( (This)->lpVtbl -> fastForward(This) )
#define IWMPControls3_fastReverse(This)( (This)->lpVtbl -> fastReverse(This) )
#define IWMPControls3_get_currentPosition(This,pdCurrentPosition)( (This)->lpVtbl -> get_currentPosition(This,pdCurrentPosition) )
#define IWMPControls3_put_currentPosition(This,dCurrentPosition)( (This)->lpVtbl -> put_currentPosition(This,dCurrentPosition) )
#define IWMPControls3_get_currentPositionString(This,pbstrCurrentPosition)( (This)->lpVtbl -> get_currentPositionString(This,pbstrCurrentPosition) )
#define IWMPControls3_next(This)( (This)->lpVtbl -> next(This) )
#define IWMPControls3_previous(This)( (This)->lpVtbl -> previous(This) )
#define IWMPControls3_get_currentItem(This,ppIWMPMedia)( (This)->lpVtbl -> get_currentItem(This,ppIWMPMedia) )
#define IWMPControls3_put_currentItem(This,pIWMPMedia)( (This)->lpVtbl -> put_currentItem(This,pIWMPMedia) )
#define IWMPControls3_get_currentMarker(This,plMarker)( (This)->lpVtbl -> get_currentMarker(This,plMarker) )
#define IWMPControls3_put_currentMarker(This,lMarker)( (This)->lpVtbl -> put_currentMarker(This,lMarker) )
#define IWMPControls3_playItem(This,pIWMPMedia)( (This)->lpVtbl -> playItem(This,pIWMPMedia) )
#define IWMPControls3_step(This,lStep)( (This)->lpVtbl -> step(This,lStep) )
#define IWMPControls3_get_audioLanguageCount(This,plCount)( (This)->lpVtbl -> get_audioLanguageCount(This,plCount) )
#define IWMPControls3_getAudioLanguageID(This,lIndex,plLangID)( (This)->lpVtbl -> getAudioLanguageID(This,lIndex,plLangID) )
#define IWMPControls3_getAudioLanguageDescription(This,lIndex,pbstrLangDesc)( (This)->lpVtbl -> getAudioLanguageDescription(This,lIndex,pbstrLangDesc) )
#define IWMPControls3_get_currentAudioLanguage(This,plLangID)( (This)->lpVtbl -> get_currentAudioLanguage(This,plLangID) )
#define IWMPControls3_put_currentAudioLanguage(This,lLangID)( (This)->lpVtbl -> put_currentAudioLanguage(This,lLangID) )
#define IWMPControls3_get_currentAudioLanguageIndex(This,plIndex)( (This)->lpVtbl -> get_currentAudioLanguageIndex(This,plIndex) )
#define IWMPControls3_put_currentAudioLanguageIndex(This,lIndex)( (This)->lpVtbl -> put_currentAudioLanguageIndex(This,lIndex) )
#define IWMPControls3_getLanguageName(This,lLangID,pbstrLangName)( (This)->lpVtbl -> getLanguageName(This,lLangID,pbstrLangName) )
#define IWMPControls3_get_currentPositionTimecode(This,bstrTimecode)( (This)->lpVtbl -> get_currentPositionTimecode(This,bstrTimecode) )
#define IWMPControls3_put_currentPositionTimecode(This,bstrTimecode)( (This)->lpVtbl -> put_currentPositionTimecode(This,bstrTimecode) )
#endif
#endif
#ifndef __IWMPClosedCaption2_INTERFACE_DEFINED__
#define __IWMPClosedCaption2_INTERFACE_DEFINED__
extern const IID IID_IWMPClosedCaption2;
typedef struct IWMPClosedCaption2Vtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IWMPClosedCaption2 * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IWMPClosedCaption2 * This);
	ULONG(STDMETHODCALLTYPE * Release) (IWMPClosedCaption2 * This);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfoCount) (IWMPClosedCaption2 * This, UINT * pctinfo);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfo) (IWMPClosedCaption2 * This, UINT iTInfo, LCID lcid, ITypeInfo ** ppTInfo);
	HRESULT(STDMETHODCALLTYPE * GetIDsOfNames) (IWMPClosedCaption2 * This, REFIID riid, LPOLESTR * rgszNames, UINT cNames, LCID lcid, DISPID * rgDispId);
	HRESULT(STDMETHODCALLTYPE * Invoke) (IWMPClosedCaption2 * This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS * pDispParams, VARIANT * pVarResult, EXCEPINFO * pExcepInfo, UINT * puArgErr);
	HRESULT(STDMETHODCALLTYPE * get_SAMIStyle) (IWMPClosedCaption2 * This, BSTR * pbstrSAMIStyle);
	HRESULT(STDMETHODCALLTYPE * put_SAMIStyle) (IWMPClosedCaption2 * This, BSTR bstrSAMIStyle);
	HRESULT(STDMETHODCALLTYPE * get_SAMILang) (IWMPClosedCaption2 * This, BSTR * pbstrSAMILang);
	HRESULT(STDMETHODCALLTYPE * put_SAMILang) (IWMPClosedCaption2 * This, BSTR bstrSAMILang);
	HRESULT(STDMETHODCALLTYPE * get_SAMIFileName) (IWMPClosedCaption2 * This, BSTR * pbstrSAMIFileName);
	HRESULT(STDMETHODCALLTYPE * put_SAMIFileName) (IWMPClosedCaption2 * This, BSTR bstrSAMIFileName);
	HRESULT(STDMETHODCALLTYPE * get_captioningId) (IWMPClosedCaption2 * This, BSTR * pbstrCaptioningID);
	HRESULT(STDMETHODCALLTYPE * put_captioningId) (IWMPClosedCaption2 * This, BSTR bstrCaptioningID);
	HRESULT(STDMETHODCALLTYPE * get_SAMILangCount) (IWMPClosedCaption2 * This, long *plCount);
	HRESULT(STDMETHODCALLTYPE * getSAMILangName) (IWMPClosedCaption2 * This, long nIndex, BSTR * pbstrName);
	HRESULT(STDMETHODCALLTYPE * getSAMILangID) (IWMPClosedCaption2 * This, long nIndex, long *plLangID);
	HRESULT(STDMETHODCALLTYPE * get_SAMIStyleCount) (IWMPClosedCaption2 * This, long *plCount);
	HRESULT(STDMETHODCALLTYPE * getSAMIStyleName) (IWMPClosedCaption2 * This, long nIndex, BSTR * pbstrName);
	END_INTERFACE
}  IWMPClosedCaption2Vtbl;
interface IWMPClosedCaption2
{
	CONST_VTBL struct IWMPClosedCaption2Vtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IWMPClosedCaption2_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IWMPClosedCaption2_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define IWMPClosedCaption2_Release(This)( (This)->lpVtbl -> Release(This) )
#define IWMPClosedCaption2_GetTypeInfoCount(This,pctinfo)( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define IWMPClosedCaption2_GetTypeInfo(This,iTInfo,lcid,ppTInfo)( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define IWMPClosedCaption2_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define IWMPClosedCaption2_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define IWMPClosedCaption2_get_SAMIStyle(This,pbstrSAMIStyle)( (This)->lpVtbl -> get_SAMIStyle(This,pbstrSAMIStyle) )
#define IWMPClosedCaption2_put_SAMIStyle(This,bstrSAMIStyle)( (This)->lpVtbl -> put_SAMIStyle(This,bstrSAMIStyle) )
#define IWMPClosedCaption2_get_SAMILang(This,pbstrSAMILang)( (This)->lpVtbl -> get_SAMILang(This,pbstrSAMILang) )
#define IWMPClosedCaption2_put_SAMILang(This,bstrSAMILang)( (This)->lpVtbl -> put_SAMILang(This,bstrSAMILang) )
#define IWMPClosedCaption2_get_SAMIFileName(This,pbstrSAMIFileName)( (This)->lpVtbl -> get_SAMIFileName(This,pbstrSAMIFileName) )
#define IWMPClosedCaption2_put_SAMIFileName(This,bstrSAMIFileName)( (This)->lpVtbl -> put_SAMIFileName(This,bstrSAMIFileName) )
#define IWMPClosedCaption2_get_captioningId(This,pbstrCaptioningID)( (This)->lpVtbl -> get_captioningId(This,pbstrCaptioningID) )
#define IWMPClosedCaption2_put_captioningId(This,bstrCaptioningID)( (This)->lpVtbl -> put_captioningId(This,bstrCaptioningID) )
#define IWMPClosedCaption2_get_SAMILangCount(This,plCount)( (This)->lpVtbl -> get_SAMILangCount(This,plCount) )
#define IWMPClosedCaption2_getSAMILangName(This,nIndex,pbstrName)( (This)->lpVtbl -> getSAMILangName(This,nIndex,pbstrName) )
#define IWMPClosedCaption2_getSAMILangID(This,nIndex,plLangID)( (This)->lpVtbl -> getSAMILangID(This,nIndex,plLangID) )
#define IWMPClosedCaption2_get_SAMIStyleCount(This,plCount)( (This)->lpVtbl -> get_SAMIStyleCount(This,plCount) )
#define IWMPClosedCaption2_getSAMIStyleName(This,nIndex,pbstrName)( (This)->lpVtbl -> getSAMIStyleName(This,nIndex,pbstrName) )
#endif
#endif
#ifndef __IWMPPlayerApplication_INTERFACE_DEFINED__
#define __IWMPPlayerApplication_INTERFACE_DEFINED__
extern const IID IID_IWMPPlayerApplication;
typedef struct IWMPPlayerApplicationVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IWMPPlayerApplication * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IWMPPlayerApplication * This);
	ULONG(STDMETHODCALLTYPE * Release) (IWMPPlayerApplication * This);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfoCount) (IWMPPlayerApplication * This, UINT * pctinfo);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfo) (IWMPPlayerApplication * This, UINT iTInfo, LCID lcid, ITypeInfo ** ppTInfo);
	HRESULT(STDMETHODCALLTYPE * GetIDsOfNames) (IWMPPlayerApplication * This, REFIID riid, LPOLESTR * rgszNames, UINT cNames, LCID lcid, DISPID * rgDispId);
	HRESULT(STDMETHODCALLTYPE * Invoke) (IWMPPlayerApplication * This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS * pDispParams, VARIANT * pVarResult, EXCEPINFO * pExcepInfo, UINT * puArgErr);
	HRESULT(STDMETHODCALLTYPE * switchToPlayerApplication) (IWMPPlayerApplication * This);
	HRESULT(STDMETHODCALLTYPE * switchToControl) (IWMPPlayerApplication * This);
	HRESULT(STDMETHODCALLTYPE * get_playerDocked) (IWMPPlayerApplication * This, VARIANT_BOOL * pbPlayerDocked);
	HRESULT(STDMETHODCALLTYPE * get_hasDisplay) (IWMPPlayerApplication * This, VARIANT_BOOL * pbHasDisplay);
	END_INTERFACE
}  IWMPPlayerApplicationVtbl;
interface IWMPPlayerApplication
{
	CONST_VTBL struct IWMPPlayerApplicationVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IWMPPlayerApplication_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IWMPPlayerApplication_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define IWMPPlayerApplication_Release(This)( (This)->lpVtbl -> Release(This) )
#define IWMPPlayerApplication_GetTypeInfoCount(This,pctinfo)( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define IWMPPlayerApplication_GetTypeInfo(This,iTInfo,lcid,ppTInfo)( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define IWMPPlayerApplication_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define IWMPPlayerApplication_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define IWMPPlayerApplication_switchToPlayerApplication(This)( (This)->lpVtbl -> switchToPlayerApplication(This) )
#define IWMPPlayerApplication_switchToControl(This)( (This)->lpVtbl -> switchToControl(This) )
#define IWMPPlayerApplication_get_playerDocked(This,pbPlayerDocked)( (This)->lpVtbl -> get_playerDocked(This,pbPlayerDocked) )
#define IWMPPlayerApplication_get_hasDisplay(This,pbHasDisplay)( (This)->lpVtbl -> get_hasDisplay(This,pbHasDisplay) )
#endif
#endif
#ifndef __IWMPCore3_INTERFACE_DEFINED__
#define __IWMPCore3_INTERFACE_DEFINED__
extern const IID IID_IWMPCore3;
typedef struct IWMPCore3Vtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IWMPCore3 * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IWMPCore3 * This);
	ULONG(STDMETHODCALLTYPE * Release) (IWMPCore3 * This);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfoCount) (IWMPCore3 * This, UINT * pctinfo);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfo) (IWMPCore3 * This, UINT iTInfo, LCID lcid, ITypeInfo ** ppTInfo);
	HRESULT(STDMETHODCALLTYPE * GetIDsOfNames) (IWMPCore3 * This, REFIID riid, LPOLESTR * rgszNames, UINT cNames, LCID lcid, DISPID * rgDispId);
	HRESULT(STDMETHODCALLTYPE * Invoke) (IWMPCore3 * This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS * pDispParams, VARIANT * pVarResult, EXCEPINFO * pExcepInfo, UINT * puArgErr);
	HRESULT(STDMETHODCALLTYPE * close) (IWMPCore3 * This);
	HRESULT(STDMETHODCALLTYPE * get_URL) (IWMPCore3 * This, BSTR * pbstrURL);
	HRESULT(STDMETHODCALLTYPE * put_URL) (IWMPCore3 * This, BSTR bstrURL);
	HRESULT(STDMETHODCALLTYPE * get_openState) (IWMPCore3 * This, WMPOpenState * pwmpos);
	HRESULT(STDMETHODCALLTYPE * get_playState) (IWMPCore3 * This, WMPPlayState * pwmpps);
	HRESULT(STDMETHODCALLTYPE * get_controls) (IWMPCore3 * This, IWMPControls ** ppControl);
	HRESULT(STDMETHODCALLTYPE * get_settings) (IWMPCore3 * This, IWMPSettings ** ppSettings);
	HRESULT(STDMETHODCALLTYPE * get_currentMedia) (IWMPCore3 * This, IWMPMedia ** ppMedia);
	HRESULT(STDMETHODCALLTYPE * put_currentMedia) (IWMPCore3 * This, IWMPMedia * pMedia);
	HRESULT(STDMETHODCALLTYPE * get_mediaCollection) (IWMPCore3 * This, IWMPMediaCollection ** ppMediaCollection);
	HRESULT(STDMETHODCALLTYPE * get_playlistCollection) (IWMPCore3 * This, IWMPPlaylistCollection ** ppPlaylistCollection);
	HRESULT(STDMETHODCALLTYPE * get_versionInfo) (IWMPCore3 * This, BSTR * pbstrVersionInfo);
	HRESULT(STDMETHODCALLTYPE * launchURL) (IWMPCore3 * This, BSTR bstrURL);
	HRESULT(STDMETHODCALLTYPE * get_network) (IWMPCore3 * This, IWMPNetwork ** ppQNI);
	HRESULT(STDMETHODCALLTYPE * get_currentPlaylist) (IWMPCore3 * This, IWMPPlaylist ** ppPL);
	HRESULT(STDMETHODCALLTYPE * put_currentPlaylist) (IWMPCore3 * This, IWMPPlaylist * pPL);
	HRESULT(STDMETHODCALLTYPE * get_cdromCollection) (IWMPCore3 * This, IWMPCdromCollection ** ppCdromCollection);
	HRESULT(STDMETHODCALLTYPE * get_closedCaption) (IWMPCore3 * This, IWMPClosedCaption ** ppClosedCaption);
	HRESULT(STDMETHODCALLTYPE * get_isOnline) (IWMPCore3 * This, VARIANT_BOOL * pfOnline);
	HRESULT(STDMETHODCALLTYPE * get_error) (IWMPCore3 * This, IWMPError ** ppError);
	HRESULT(STDMETHODCALLTYPE * get_status) (IWMPCore3 * This, BSTR * pbstrStatus);
	HRESULT(STDMETHODCALLTYPE * get_dvd) (IWMPCore3 * This, IWMPDVD ** ppDVD);
	HRESULT(STDMETHODCALLTYPE * newPlaylist) (IWMPCore3 * This, BSTR bstrName, BSTR bstrURL, IWMPPlaylist ** ppPlaylist);
	HRESULT(STDMETHODCALLTYPE * newMedia) (IWMPCore3 * This, BSTR bstrURL, IWMPMedia ** ppMedia);
	END_INTERFACE
}  IWMPCore3Vtbl;
interface IWMPCore3
{
	CONST_VTBL struct IWMPCore3Vtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IWMPCore3_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IWMPCore3_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define IWMPCore3_Release(This)( (This)->lpVtbl -> Release(This) )
#define IWMPCore3_GetTypeInfoCount(This,pctinfo)( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define IWMPCore3_GetTypeInfo(This,iTInfo,lcid,ppTInfo)( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define IWMPCore3_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define IWMPCore3_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define IWMPCore3_close(This)( (This)->lpVtbl -> close(This) )
#define IWMPCore3_get_URL(This,pbstrURL)( (This)->lpVtbl -> get_URL(This,pbstrURL) )
#define IWMPCore3_put_URL(This,bstrURL)( (This)->lpVtbl -> put_URL(This,bstrURL) )
#define IWMPCore3_get_openState(This,pwmpos)( (This)->lpVtbl -> get_openState(This,pwmpos) )
#define IWMPCore3_get_playState(This,pwmpps)( (This)->lpVtbl -> get_playState(This,pwmpps) )
#define IWMPCore3_get_controls(This,ppControl)( (This)->lpVtbl -> get_controls(This,ppControl) )
#define IWMPCore3_get_settings(This,ppSettings)( (This)->lpVtbl -> get_settings(This,ppSettings) )
#define IWMPCore3_get_currentMedia(This,ppMedia)( (This)->lpVtbl -> get_currentMedia(This,ppMedia) )
#define IWMPCore3_put_currentMedia(This,pMedia)( (This)->lpVtbl -> put_currentMedia(This,pMedia) )
#define IWMPCore3_get_mediaCollection(This,ppMediaCollection)( (This)->lpVtbl -> get_mediaCollection(This,ppMediaCollection) )
#define IWMPCore3_get_playlistCollection(This,ppPlaylistCollection)( (This)->lpVtbl -> get_playlistCollection(This,ppPlaylistCollection) )
#define IWMPCore3_get_versionInfo(This,pbstrVersionInfo)( (This)->lpVtbl -> get_versionInfo(This,pbstrVersionInfo) )
#define IWMPCore3_launchURL(This,bstrURL)( (This)->lpVtbl -> launchURL(This,bstrURL) )
#define IWMPCore3_get_network(This,ppQNI)( (This)->lpVtbl -> get_network(This,ppQNI) )
#define IWMPCore3_get_currentPlaylist(This,ppPL)( (This)->lpVtbl -> get_currentPlaylist(This,ppPL) )
#define IWMPCore3_put_currentPlaylist(This,pPL)( (This)->lpVtbl -> put_currentPlaylist(This,pPL) )
#define IWMPCore3_get_cdromCollection(This,ppCdromCollection)( (This)->lpVtbl -> get_cdromCollection(This,ppCdromCollection) )
#define IWMPCore3_get_closedCaption(This,ppClosedCaption)( (This)->lpVtbl -> get_closedCaption(This,ppClosedCaption) )
#define IWMPCore3_get_isOnline(This,pfOnline)( (This)->lpVtbl -> get_isOnline(This,pfOnline) )
#define IWMPCore3_get_error(This,ppError)( (This)->lpVtbl -> get_error(This,ppError) )
#define IWMPCore3_get_status(This,pbstrStatus)( (This)->lpVtbl -> get_status(This,pbstrStatus) )
#define IWMPCore3_get_dvd(This,ppDVD)( (This)->lpVtbl -> get_dvd(This,ppDVD) )
#define IWMPCore3_newPlaylist(This,bstrName,bstrURL,ppPlaylist)( (This)->lpVtbl -> newPlaylist(This,bstrName,bstrURL,ppPlaylist) )
#define IWMPCore3_newMedia(This,bstrURL,ppMedia)( (This)->lpVtbl -> newMedia(This,bstrURL,ppMedia) )
#endif
#endif
#ifndef __IWMPPlayer4_INTERFACE_DEFINED__
#define __IWMPPlayer4_INTERFACE_DEFINED__
extern const IID IID_IWMPPlayer4;
typedef struct IWMPPlayer4Vtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IWMPPlayer4 * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IWMPPlayer4 * This);
	ULONG(STDMETHODCALLTYPE * Release) (IWMPPlayer4 * This);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfoCount) (IWMPPlayer4 * This, UINT * pctinfo);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfo) (IWMPPlayer4 * This, UINT iTInfo, LCID lcid, ITypeInfo ** ppTInfo);
	HRESULT(STDMETHODCALLTYPE * GetIDsOfNames) (IWMPPlayer4 * This, REFIID riid, LPOLESTR * rgszNames, UINT cNames, LCID lcid, DISPID * rgDispId);
	HRESULT(STDMETHODCALLTYPE * Invoke) (IWMPPlayer4 * This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS * pDispParams, VARIANT * pVarResult, EXCEPINFO * pExcepInfo, UINT * puArgErr);
	HRESULT(STDMETHODCALLTYPE * close) (IWMPPlayer4 * This);
	HRESULT(STDMETHODCALLTYPE * get_URL) (IWMPPlayer4 * This, BSTR * pbstrURL);
	HRESULT(STDMETHODCALLTYPE * put_URL) (IWMPPlayer4 * This, BSTR bstrURL);
	HRESULT(STDMETHODCALLTYPE * get_openState) (IWMPPlayer4 * This, WMPOpenState * pwmpos);
	HRESULT(STDMETHODCALLTYPE * get_playState) (IWMPPlayer4 * This, WMPPlayState * pwmpps);
	HRESULT(STDMETHODCALLTYPE * get_controls) (IWMPPlayer4 * This, IWMPControls ** ppControl);
	HRESULT(STDMETHODCALLTYPE * get_settings) (IWMPPlayer4 * This, IWMPSettings ** ppSettings);
	HRESULT(STDMETHODCALLTYPE * get_currentMedia) (IWMPPlayer4 * This, IWMPMedia ** ppMedia);
	HRESULT(STDMETHODCALLTYPE * put_currentMedia) (IWMPPlayer4 * This, IWMPMedia * pMedia);
	HRESULT(STDMETHODCALLTYPE * get_mediaCollection) (IWMPPlayer4 * This, IWMPMediaCollection ** ppMediaCollection);
	HRESULT(STDMETHODCALLTYPE * get_playlistCollection) (IWMPPlayer4 * This, IWMPPlaylistCollection ** ppPlaylistCollection);
	HRESULT(STDMETHODCALLTYPE * get_versionInfo) (IWMPPlayer4 * This, BSTR * pbstrVersionInfo);
	HRESULT(STDMETHODCALLTYPE * launchURL) (IWMPPlayer4 * This, BSTR bstrURL);
	HRESULT(STDMETHODCALLTYPE * get_network) (IWMPPlayer4 * This, IWMPNetwork ** ppQNI);
	HRESULT(STDMETHODCALLTYPE * get_currentPlaylist) (IWMPPlayer4 * This, IWMPPlaylist ** ppPL);
	HRESULT(STDMETHODCALLTYPE * put_currentPlaylist) (IWMPPlayer4 * This, IWMPPlaylist * pPL);
	HRESULT(STDMETHODCALLTYPE * get_cdromCollection) (IWMPPlayer4 * This, IWMPCdromCollection ** ppCdromCollection);
	HRESULT(STDMETHODCALLTYPE * get_closedCaption) (IWMPPlayer4 * This, IWMPClosedCaption ** ppClosedCaption);
	HRESULT(STDMETHODCALLTYPE * get_isOnline) (IWMPPlayer4 * This, VARIANT_BOOL * pfOnline);
	HRESULT(STDMETHODCALLTYPE * get_error) (IWMPPlayer4 * This, IWMPError ** ppError);
	HRESULT(STDMETHODCALLTYPE * get_status) (IWMPPlayer4 * This, BSTR * pbstrStatus);
	HRESULT(STDMETHODCALLTYPE * get_dvd) (IWMPPlayer4 * This, IWMPDVD ** ppDVD);
	HRESULT(STDMETHODCALLTYPE * newPlaylist) (IWMPPlayer4 * This, BSTR bstrName, BSTR bstrURL, IWMPPlaylist ** ppPlaylist);
	HRESULT(STDMETHODCALLTYPE * newMedia) (IWMPPlayer4 * This, BSTR bstrURL, IWMPMedia ** ppMedia);
	HRESULT(STDMETHODCALLTYPE * get_enabled) (IWMPPlayer4 * This, VARIANT_BOOL * pbEnabled);
	HRESULT(STDMETHODCALLTYPE * put_enabled) (IWMPPlayer4 * This, VARIANT_BOOL bEnabled);
	HRESULT(STDMETHODCALLTYPE * get_fullScreen) (IWMPPlayer4 * This, VARIANT_BOOL * pbFullScreen);
	HRESULT(STDMETHODCALLTYPE * put_fullScreen) (IWMPPlayer4 * This, VARIANT_BOOL bFullScreen);
	HRESULT(STDMETHODCALLTYPE * get_enableContextMenu) (IWMPPlayer4 * This, VARIANT_BOOL * pbEnableContextMenu);
	HRESULT(STDMETHODCALLTYPE * put_enableContextMenu) (IWMPPlayer4 * This, VARIANT_BOOL bEnableContextMenu);
	HRESULT(STDMETHODCALLTYPE * put_uiMode) (IWMPPlayer4 * This, BSTR bstrMode);
	HRESULT(STDMETHODCALLTYPE * get_uiMode) (IWMPPlayer4 * This, BSTR * pbstrMode);
	HRESULT(STDMETHODCALLTYPE * get_stretchToFit) (IWMPPlayer4 * This, VARIANT_BOOL * pbEnabled);
	HRESULT(STDMETHODCALLTYPE * put_stretchToFit) (IWMPPlayer4 * This, VARIANT_BOOL bEnabled);
	HRESULT(STDMETHODCALLTYPE * get_windowlessVideo) (IWMPPlayer4 * This, VARIANT_BOOL * pbEnabled);
	HRESULT(STDMETHODCALLTYPE * put_windowlessVideo) (IWMPPlayer4 * This, VARIANT_BOOL bEnabled);
	HRESULT(STDMETHODCALLTYPE * get_isRemote) (IWMPPlayer4 * This, VARIANT_BOOL * pvarfIsRemote);
	HRESULT(STDMETHODCALLTYPE * get_playerApplication) (IWMPPlayer4 * This, IWMPPlayerApplication ** ppIWMPPlayerApplication);
	HRESULT(STDMETHODCALLTYPE * openPlayer) (IWMPPlayer4 * This, BSTR bstrURL);
	END_INTERFACE
}  IWMPPlayer4Vtbl;
interface IWMPPlayer4
{
	CONST_VTBL struct IWMPPlayer4Vtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IWMPPlayer4_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IWMPPlayer4_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define IWMPPlayer4_Release(This)( (This)->lpVtbl -> Release(This) )
#define IWMPPlayer4_GetTypeInfoCount(This,pctinfo)( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define IWMPPlayer4_GetTypeInfo(This,iTInfo,lcid,ppTInfo)( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define IWMPPlayer4_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define IWMPPlayer4_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define IWMPPlayer4_close(This)( (This)->lpVtbl -> close(This) )
#define IWMPPlayer4_get_URL(This,pbstrURL)( (This)->lpVtbl -> get_URL(This,pbstrURL) )
#define IWMPPlayer4_put_URL(This,bstrURL)( (This)->lpVtbl -> put_URL(This,bstrURL) )
#define IWMPPlayer4_get_openState(This,pwmpos)( (This)->lpVtbl -> get_openState(This,pwmpos) )
#define IWMPPlayer4_get_playState(This,pwmpps)( (This)->lpVtbl -> get_playState(This,pwmpps) )
#define IWMPPlayer4_get_controls(This,ppControl)( (This)->lpVtbl -> get_controls(This,ppControl) )
#define IWMPPlayer4_get_settings(This,ppSettings)( (This)->lpVtbl -> get_settings(This,ppSettings) )
#define IWMPPlayer4_get_currentMedia(This,ppMedia)( (This)->lpVtbl -> get_currentMedia(This,ppMedia) )
#define IWMPPlayer4_put_currentMedia(This,pMedia)( (This)->lpVtbl -> put_currentMedia(This,pMedia) )
#define IWMPPlayer4_get_mediaCollection(This,ppMediaCollection)( (This)->lpVtbl -> get_mediaCollection(This,ppMediaCollection) )
#define IWMPPlayer4_get_playlistCollection(This,ppPlaylistCollection)( (This)->lpVtbl -> get_playlistCollection(This,ppPlaylistCollection) )
#define IWMPPlayer4_get_versionInfo(This,pbstrVersionInfo)( (This)->lpVtbl -> get_versionInfo(This,pbstrVersionInfo) )
#define IWMPPlayer4_launchURL(This,bstrURL)( (This)->lpVtbl -> launchURL(This,bstrURL) )
#define IWMPPlayer4_get_network(This,ppQNI)( (This)->lpVtbl -> get_network(This,ppQNI) )
#define IWMPPlayer4_get_currentPlaylist(This,ppPL)( (This)->lpVtbl -> get_currentPlaylist(This,ppPL) )
#define IWMPPlayer4_put_currentPlaylist(This,pPL)( (This)->lpVtbl -> put_currentPlaylist(This,pPL) )
#define IWMPPlayer4_get_cdromCollection(This,ppCdromCollection)( (This)->lpVtbl -> get_cdromCollection(This,ppCdromCollection) )
#define IWMPPlayer4_get_closedCaption(This,ppClosedCaption)( (This)->lpVtbl -> get_closedCaption(This,ppClosedCaption) )
#define IWMPPlayer4_get_isOnline(This,pfOnline)( (This)->lpVtbl -> get_isOnline(This,pfOnline) )
#define IWMPPlayer4_get_error(This,ppError)( (This)->lpVtbl -> get_error(This,ppError) )
#define IWMPPlayer4_get_status(This,pbstrStatus)( (This)->lpVtbl -> get_status(This,pbstrStatus) )
#define IWMPPlayer4_get_dvd(This,ppDVD)( (This)->lpVtbl -> get_dvd(This,ppDVD) )
#define IWMPPlayer4_newPlaylist(This,bstrName,bstrURL,ppPlaylist)( (This)->lpVtbl -> newPlaylist(This,bstrName,bstrURL,ppPlaylist) )
#define IWMPPlayer4_newMedia(This,bstrURL,ppMedia)( (This)->lpVtbl -> newMedia(This,bstrURL,ppMedia) )
#define IWMPPlayer4_get_enabled(This,pbEnabled)( (This)->lpVtbl -> get_enabled(This,pbEnabled) )
#define IWMPPlayer4_put_enabled(This,bEnabled)( (This)->lpVtbl -> put_enabled(This,bEnabled) )
#define IWMPPlayer4_get_fullScreen(This,pbFullScreen)( (This)->lpVtbl -> get_fullScreen(This,pbFullScreen) )
#define IWMPPlayer4_put_fullScreen(This,bFullScreen)( (This)->lpVtbl -> put_fullScreen(This,bFullScreen) )
#define IWMPPlayer4_get_enableContextMenu(This,pbEnableContextMenu)( (This)->lpVtbl -> get_enableContextMenu(This,pbEnableContextMenu) )
#define IWMPPlayer4_put_enableContextMenu(This,bEnableContextMenu)( (This)->lpVtbl -> put_enableContextMenu(This,bEnableContextMenu) )
#define IWMPPlayer4_put_uiMode(This,bstrMode)( (This)->lpVtbl -> put_uiMode(This,bstrMode) )
#define IWMPPlayer4_get_uiMode(This,pbstrMode)( (This)->lpVtbl -> get_uiMode(This,pbstrMode) )
#define IWMPPlayer4_get_stretchToFit(This,pbEnabled)( (This)->lpVtbl -> get_stretchToFit(This,pbEnabled) )
#define IWMPPlayer4_put_stretchToFit(This,bEnabled)( (This)->lpVtbl -> put_stretchToFit(This,bEnabled) )
#define IWMPPlayer4_get_windowlessVideo(This,pbEnabled)( (This)->lpVtbl -> get_windowlessVideo(This,pbEnabled) )
#define IWMPPlayer4_put_windowlessVideo(This,bEnabled)( (This)->lpVtbl -> put_windowlessVideo(This,bEnabled) )
#define IWMPPlayer4_get_isRemote(This,pvarfIsRemote)( (This)->lpVtbl -> get_isRemote(This,pvarfIsRemote) )
#define IWMPPlayer4_get_playerApplication(This,ppIWMPPlayerApplication)( (This)->lpVtbl -> get_playerApplication(This,ppIWMPPlayerApplication) )
#define IWMPPlayer4_openPlayer(This,bstrURL)( (This)->lpVtbl -> openPlayer(This,bstrURL) )
#endif
#endif
#ifndef __IWMPPlayerServices_INTERFACE_DEFINED__
#define __IWMPPlayerServices_INTERFACE_DEFINED__
extern const IID IID_IWMPPlayerServices;
typedef struct IWMPPlayerServicesVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IWMPPlayerServices * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IWMPPlayerServices * This);
	ULONG(STDMETHODCALLTYPE * Release) (IWMPPlayerServices * This);
	HRESULT(STDMETHODCALLTYPE * activateUIPlugin) (IWMPPlayerServices * This, BSTR bstrPlugin);
	HRESULT(STDMETHODCALLTYPE * setTaskPane) (IWMPPlayerServices * This, BSTR bstrTaskPane);
	HRESULT(STDMETHODCALLTYPE * setTaskPaneURL) (IWMPPlayerServices * This, BSTR bstrTaskPane, BSTR bstrURL, BSTR bstrFriendlyName);
	END_INTERFACE
}  IWMPPlayerServicesVtbl;
interface IWMPPlayerServices
{
	CONST_VTBL struct IWMPPlayerServicesVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IWMPPlayerServices_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IWMPPlayerServices_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define IWMPPlayerServices_Release(This)( (This)->lpVtbl -> Release(This) )
#define IWMPPlayerServices_activateUIPlugin(This,bstrPlugin)( (This)->lpVtbl -> activateUIPlugin(This,bstrPlugin) )
#define IWMPPlayerServices_setTaskPane(This,bstrTaskPane)( (This)->lpVtbl -> setTaskPane(This,bstrTaskPane) )
#define IWMPPlayerServices_setTaskPaneURL(This,bstrTaskPane,bstrURL,bstrFriendlyName)( (This)->lpVtbl -> setTaskPaneURL(This,bstrTaskPane,bstrURL,bstrFriendlyName) )
#endif
#endif
typedef enum WMPSyncState
{
	wmpssUnknown = 0,
	wmpssSynchronizing = (wmpssUnknown + 1),
	wmpssStopped = (wmpssSynchronizing + 1),
	wmpssEstimating = (wmpssStopped + 1),
	wmpssLast = (wmpssEstimating + 1)
} WMPSyncState;
typedef enum WMPDeviceStatus
{
	wmpdsUnknown = 0,
	wmpdsPartnershipExists = (wmpdsUnknown + 1),
	wmpdsPartnershipDeclined = (wmpdsPartnershipExists + 1),
	wmpdsPartnershipAnother = (wmpdsPartnershipDeclined + 1),
	wmpdsManualDevice = (wmpdsPartnershipAnother + 1),
	wmpdsNewDevice = (wmpdsManualDevice + 1),
	wmpdsLast = (wmpdsNewDevice + 1)
} WMPDeviceStatus;
extern RPC_IF_HANDLE __MIDL_itf_wmp_0000_0035_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_wmp_0000_0035_v0_0_s_ifspec;
#ifndef __IWMPSyncDevice_INTERFACE_DEFINED__
#define __IWMPSyncDevice_INTERFACE_DEFINED__
extern const IID IID_IWMPSyncDevice;
typedef struct IWMPSyncDeviceVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IWMPSyncDevice * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IWMPSyncDevice * This);
	ULONG(STDMETHODCALLTYPE * Release) (IWMPSyncDevice * This);
	HRESULT(STDMETHODCALLTYPE * get_friendlyName) (IWMPSyncDevice * This, BSTR * pbstrName);
	HRESULT(STDMETHODCALLTYPE * put_friendlyName) (IWMPSyncDevice * This, BSTR bstrName);
	HRESULT(STDMETHODCALLTYPE * get_deviceName) (IWMPSyncDevice * This, BSTR * pbstrName);
	HRESULT(STDMETHODCALLTYPE * get_deviceId) (IWMPSyncDevice * This, BSTR * pbstrDeviceId);
	HRESULT(STDMETHODCALLTYPE * get_partnershipIndex) (IWMPSyncDevice * This, long *plIndex);
	HRESULT(STDMETHODCALLTYPE * get_connected) (IWMPSyncDevice * This, VARIANT_BOOL * pvbConnected);
	HRESULT(STDMETHODCALLTYPE * get_status) (IWMPSyncDevice * This, WMPDeviceStatus * pwmpds);
	HRESULT(STDMETHODCALLTYPE * get_syncState) (IWMPSyncDevice * This, WMPSyncState * pwmpss);
	HRESULT(STDMETHODCALLTYPE * get_progress) (IWMPSyncDevice * This, long *plProgress);
	HRESULT(STDMETHODCALLTYPE * getItemInfo) (IWMPSyncDevice * This, BSTR bstrItemName, BSTR * pbstrVal);
	HRESULT(STDMETHODCALLTYPE * createPartnership) (IWMPSyncDevice * This, VARIANT_BOOL vbShowUI);
	HRESULT(STDMETHODCALLTYPE * deletePartnership) (IWMPSyncDevice * This);
	HRESULT(STDMETHODCALLTYPE * start) (IWMPSyncDevice * This);
	HRESULT(STDMETHODCALLTYPE * stop) (IWMPSyncDevice * This);
	HRESULT(STDMETHODCALLTYPE * showSettings) (IWMPSyncDevice * This);
	HRESULT(STDMETHODCALLTYPE * isIdentical) (IWMPSyncDevice * This, IWMPSyncDevice * pDevice, VARIANT_BOOL * pvbool);
	END_INTERFACE
}  IWMPSyncDeviceVtbl;
interface IWMPSyncDevice
{
	CONST_VTBL struct IWMPSyncDeviceVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IWMPSyncDevice_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IWMPSyncDevice_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define IWMPSyncDevice_Release(This)( (This)->lpVtbl -> Release(This) )
#define IWMPSyncDevice_get_friendlyName(This,pbstrName)( (This)->lpVtbl -> get_friendlyName(This,pbstrName) )
#define IWMPSyncDevice_put_friendlyName(This,bstrName)( (This)->lpVtbl -> put_friendlyName(This,bstrName) )
#define IWMPSyncDevice_get_deviceName(This,pbstrName)( (This)->lpVtbl -> get_deviceName(This,pbstrName) )
#define IWMPSyncDevice_get_deviceId(This,pbstrDeviceId)( (This)->lpVtbl -> get_deviceId(This,pbstrDeviceId) )
#define IWMPSyncDevice_get_partnershipIndex(This,plIndex)( (This)->lpVtbl -> get_partnershipIndex(This,plIndex) )
#define IWMPSyncDevice_get_connected(This,pvbConnected)( (This)->lpVtbl -> get_connected(This,pvbConnected) )
#define IWMPSyncDevice_get_status(This,pwmpds)( (This)->lpVtbl -> get_status(This,pwmpds) )
#define IWMPSyncDevice_get_syncState(This,pwmpss)( (This)->lpVtbl -> get_syncState(This,pwmpss) )
#define IWMPSyncDevice_get_progress(This,plProgress)( (This)->lpVtbl -> get_progress(This,plProgress) )
#define IWMPSyncDevice_getItemInfo(This,bstrItemName,pbstrVal)( (This)->lpVtbl -> getItemInfo(This,bstrItemName,pbstrVal) )
#define IWMPSyncDevice_createPartnership(This,vbShowUI)( (This)->lpVtbl -> createPartnership(This,vbShowUI) )
#define IWMPSyncDevice_deletePartnership(This)( (This)->lpVtbl -> deletePartnership(This) )
#define IWMPSyncDevice_start(This)( (This)->lpVtbl -> start(This) )
#define IWMPSyncDevice_stop(This)( (This)->lpVtbl -> stop(This) )
#define IWMPSyncDevice_showSettings(This)( (This)->lpVtbl -> showSettings(This) )
#define IWMPSyncDevice_isIdentical(This,pDevice,pvbool)( (This)->lpVtbl -> isIdentical(This,pDevice,pvbool) )
#endif
#endif
#ifndef __IWMPSyncServices_INTERFACE_DEFINED__
#define __IWMPSyncServices_INTERFACE_DEFINED__
extern const IID IID_IWMPSyncServices;
typedef struct IWMPSyncServicesVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IWMPSyncServices * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IWMPSyncServices * This);
	ULONG(STDMETHODCALLTYPE * Release) (IWMPSyncServices * This);
	HRESULT(STDMETHODCALLTYPE * get_deviceCount) (IWMPSyncServices * This, long *plCount);
	HRESULT(STDMETHODCALLTYPE * getDevice) (IWMPSyncServices * This, long lIndex, IWMPSyncDevice ** ppDevice);
	END_INTERFACE
}  IWMPSyncServicesVtbl;
interface IWMPSyncServices
{
	CONST_VTBL struct IWMPSyncServicesVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IWMPSyncServices_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IWMPSyncServices_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define IWMPSyncServices_Release(This)( (This)->lpVtbl -> Release(This) )
#define IWMPSyncServices_get_deviceCount(This,plCount)( (This)->lpVtbl -> get_deviceCount(This,plCount) )
#define IWMPSyncServices_getDevice(This,lIndex,ppDevice)( (This)->lpVtbl -> getDevice(This,lIndex,ppDevice) )
#endif
#endif
#ifndef __IWMPPlayerServices2_INTERFACE_DEFINED__
#define __IWMPPlayerServices2_INTERFACE_DEFINED__
extern const IID IID_IWMPPlayerServices2;
typedef struct IWMPPlayerServices2Vtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IWMPPlayerServices2 * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IWMPPlayerServices2 * This);
	ULONG(STDMETHODCALLTYPE * Release) (IWMPPlayerServices2 * This);
	HRESULT(STDMETHODCALLTYPE * activateUIPlugin) (IWMPPlayerServices2 * This, BSTR bstrPlugin);
	HRESULT(STDMETHODCALLTYPE * setTaskPane) (IWMPPlayerServices2 * This, BSTR bstrTaskPane);
	HRESULT(STDMETHODCALLTYPE * setTaskPaneURL) (IWMPPlayerServices2 * This, BSTR bstrTaskPane, BSTR bstrURL, BSTR bstrFriendlyName);
	HRESULT(STDMETHODCALLTYPE * setBackgroundProcessingPriority) (IWMPPlayerServices2 * This, BSTR bstrPriority);
	END_INTERFACE
}  IWMPPlayerServices2Vtbl;
interface IWMPPlayerServices2
{
	CONST_VTBL struct IWMPPlayerServices2Vtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IWMPPlayerServices2_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IWMPPlayerServices2_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define IWMPPlayerServices2_Release(This)( (This)->lpVtbl -> Release(This) )
#define IWMPPlayerServices2_activateUIPlugin(This,bstrPlugin)( (This)->lpVtbl -> activateUIPlugin(This,bstrPlugin) )
#define IWMPPlayerServices2_setTaskPane(This,bstrTaskPane)( (This)->lpVtbl -> setTaskPane(This,bstrTaskPane) )
#define IWMPPlayerServices2_setTaskPaneURL(This,bstrTaskPane,bstrURL,bstrFriendlyName)( (This)->lpVtbl -> setTaskPaneURL(This,bstrTaskPane,bstrURL,bstrFriendlyName) )
#define IWMPPlayerServices2_setBackgroundProcessingPriority(This,bstrPriority)( (This)->lpVtbl -> setBackgroundProcessingPriority(This,bstrPriority) )
#endif
#endif
typedef enum WMPRipState
{
	wmprsUnknown = 0,
	wmprsRipping = (wmprsUnknown + 1),
	wmprsStopped = (wmprsRipping + 1)
} WMPRipState;
typedef enum WMPBurnFormat
{
	wmpbfAudioCD = 0,
	wmpbfDataCD = (wmpbfAudioCD + 1)
} WMPBurnFormat;
typedef enum WMPBurnState
{
	wmpbsUnknown = 0,
	wmpbsBusy = (wmpbsUnknown + 1),
	wmpbsReady = (wmpbsBusy + 1),
	wmpbsWaitingForDisc = (wmpbsReady + 1),
	wmpbsRefreshStatusPending = (wmpbsWaitingForDisc + 1),
	wmpbsPreparingToBurn = (wmpbsRefreshStatusPending + 1),
	wmpbsBurning = (wmpbsPreparingToBurn + 1),
	wmpbsStopped = (wmpbsBurning + 1),
	wmpbsErasing = (wmpbsStopped + 1),
	wmpbsDownloading = (wmpbsErasing + 1)
} WMPBurnState;
typedef enum WMPStringCollectionChangeEventType
{
	wmpsccetUnknown = 0,
	wmpsccetInsert = (wmpsccetUnknown + 1),
	wmpsccetChange = (wmpsccetInsert + 1),
	wmpsccetDelete = (wmpsccetChange + 1),
	wmpsccetClear = (wmpsccetDelete + 1),
	wmpsccetBeginUpdates = (wmpsccetClear + 1),
	wmpsccetEndUpdates = (wmpsccetBeginUpdates + 1)
} WMPStringCollectionChangeEventType;
extern RPC_IF_HANDLE __MIDL_itf_wmp_0000_0038_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_wmp_0000_0038_v0_0_s_ifspec;
#ifndef __IWMPCdromRip_INTERFACE_DEFINED__
#define __IWMPCdromRip_INTERFACE_DEFINED__
extern const IID IID_IWMPCdromRip;
typedef struct IWMPCdromRipVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IWMPCdromRip * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IWMPCdromRip * This);
	ULONG(STDMETHODCALLTYPE * Release) (IWMPCdromRip * This);
	HRESULT(STDMETHODCALLTYPE * get_ripState) (IWMPCdromRip * This, WMPRipState * pwmprs);
	HRESULT(STDMETHODCALLTYPE * get_ripProgress) (IWMPCdromRip * This, long *plProgress);
	HRESULT(STDMETHODCALLTYPE * startRip) (IWMPCdromRip * This);
	HRESULT(STDMETHODCALLTYPE * stopRip) (IWMPCdromRip * This);
	END_INTERFACE
}  IWMPCdromRipVtbl;
interface IWMPCdromRip
{
	CONST_VTBL struct IWMPCdromRipVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IWMPCdromRip_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IWMPCdromRip_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define IWMPCdromRip_Release(This)( (This)->lpVtbl -> Release(This) )
#define IWMPCdromRip_get_ripState(This,pwmprs)( (This)->lpVtbl -> get_ripState(This,pwmprs) )
#define IWMPCdromRip_get_ripProgress(This,plProgress)( (This)->lpVtbl -> get_ripProgress(This,plProgress) )
#define IWMPCdromRip_startRip(This)( (This)->lpVtbl -> startRip(This) )
#define IWMPCdromRip_stopRip(This)( (This)->lpVtbl -> stopRip(This) )
#endif
#endif
#ifndef __IWMPCdromBurn_INTERFACE_DEFINED__
#define __IWMPCdromBurn_INTERFACE_DEFINED__
extern const IID IID_IWMPCdromBurn;
typedef struct IWMPCdromBurnVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IWMPCdromBurn * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IWMPCdromBurn * This);
	ULONG(STDMETHODCALLTYPE * Release) (IWMPCdromBurn * This);
	HRESULT(STDMETHODCALLTYPE * isAvailable) (IWMPCdromBurn * This, BSTR bstrItem, VARIANT_BOOL * pIsAvailable);
	HRESULT(STDMETHODCALLTYPE * getItemInfo) (IWMPCdromBurn * This, BSTR bstrItem, BSTR * pbstrVal);
	HRESULT(STDMETHODCALLTYPE * get_label) (IWMPCdromBurn * This, BSTR * pbstrLabel);
	HRESULT(STDMETHODCALLTYPE * put_label) (IWMPCdromBurn * This, BSTR bstrLabel);
	HRESULT(STDMETHODCALLTYPE * get_burnFormat) (IWMPCdromBurn * This, WMPBurnFormat * pwmpbf);
	HRESULT(STDMETHODCALLTYPE * put_burnFormat) (IWMPCdromBurn * This, WMPBurnFormat wmpbf);
	HRESULT(STDMETHODCALLTYPE * get_burnPlaylist) (IWMPCdromBurn * This, IWMPPlaylist ** ppPlaylist);
	HRESULT(STDMETHODCALLTYPE * put_burnPlaylist) (IWMPCdromBurn * This, IWMPPlaylist * pPlaylist);
	HRESULT(STDMETHODCALLTYPE * refreshStatus) (IWMPCdromBurn * This);
	HRESULT(STDMETHODCALLTYPE * get_burnState) (IWMPCdromBurn * This, WMPBurnState * pwmpbs);
	HRESULT(STDMETHODCALLTYPE * get_burnProgress) (IWMPCdromBurn * This, long *plProgress);
	HRESULT(STDMETHODCALLTYPE * startBurn) (IWMPCdromBurn * This);
	HRESULT(STDMETHODCALLTYPE * stopBurn) (IWMPCdromBurn * This);
	HRESULT(STDMETHODCALLTYPE * erase) (IWMPCdromBurn * This);
	END_INTERFACE
}  IWMPCdromBurnVtbl;
interface IWMPCdromBurn
{
	CONST_VTBL struct IWMPCdromBurnVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IWMPCdromBurn_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IWMPCdromBurn_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define IWMPCdromBurn_Release(This)( (This)->lpVtbl -> Release(This) )
#define IWMPCdromBurn_isAvailable(This,bstrItem,pIsAvailable)( (This)->lpVtbl -> isAvailable(This,bstrItem,pIsAvailable) )
#define IWMPCdromBurn_getItemInfo(This,bstrItem,pbstrVal)( (This)->lpVtbl -> getItemInfo(This,bstrItem,pbstrVal) )
#define IWMPCdromBurn_get_label(This,pbstrLabel)( (This)->lpVtbl -> get_label(This,pbstrLabel) )
#define IWMPCdromBurn_put_label(This,bstrLabel)( (This)->lpVtbl -> put_label(This,bstrLabel) )
#define IWMPCdromBurn_get_burnFormat(This,pwmpbf)( (This)->lpVtbl -> get_burnFormat(This,pwmpbf) )
#define IWMPCdromBurn_put_burnFormat(This,wmpbf)( (This)->lpVtbl -> put_burnFormat(This,wmpbf) )
#define IWMPCdromBurn_get_burnPlaylist(This,ppPlaylist)( (This)->lpVtbl -> get_burnPlaylist(This,ppPlaylist) )
#define IWMPCdromBurn_put_burnPlaylist(This,pPlaylist)( (This)->lpVtbl -> put_burnPlaylist(This,pPlaylist) )
#define IWMPCdromBurn_refreshStatus(This)( (This)->lpVtbl -> refreshStatus(This) )
#define IWMPCdromBurn_get_burnState(This,pwmpbs)( (This)->lpVtbl -> get_burnState(This,pwmpbs) )
#define IWMPCdromBurn_get_burnProgress(This,plProgress)( (This)->lpVtbl -> get_burnProgress(This,plProgress) )
#define IWMPCdromBurn_startBurn(This)( (This)->lpVtbl -> startBurn(This) )
#define IWMPCdromBurn_stopBurn(This)( (This)->lpVtbl -> stopBurn(This) )
#define IWMPCdromBurn_erase(This)( (This)->lpVtbl -> erase(This) )
#endif
#endif
#ifndef __IWMPQuery_INTERFACE_DEFINED__
#define __IWMPQuery_INTERFACE_DEFINED__
extern const IID IID_IWMPQuery;
typedef struct IWMPQueryVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IWMPQuery * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IWMPQuery * This);
	ULONG(STDMETHODCALLTYPE * Release) (IWMPQuery * This);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfoCount) (IWMPQuery * This, UINT * pctinfo);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfo) (IWMPQuery * This, UINT iTInfo, LCID lcid, ITypeInfo ** ppTInfo);
	HRESULT(STDMETHODCALLTYPE * GetIDsOfNames) (IWMPQuery * This, REFIID riid, LPOLESTR * rgszNames, UINT cNames, LCID lcid, DISPID * rgDispId);
	HRESULT(STDMETHODCALLTYPE * Invoke) (IWMPQuery * This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS * pDispParams, VARIANT * pVarResult, EXCEPINFO * pExcepInfo, UINT * puArgErr);
	HRESULT(STDMETHODCALLTYPE * addCondition) (IWMPQuery * This, BSTR bstrAttribute, BSTR bstrOperator, BSTR bstrValue);
	HRESULT(STDMETHODCALLTYPE * beginNextGroup) (IWMPQuery * This);
	END_INTERFACE
}  IWMPQueryVtbl;
interface IWMPQuery
{
	CONST_VTBL struct IWMPQueryVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IWMPQuery_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IWMPQuery_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define IWMPQuery_Release(This)( (This)->lpVtbl -> Release(This) )
#define IWMPQuery_GetTypeInfoCount(This,pctinfo)( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define IWMPQuery_GetTypeInfo(This,iTInfo,lcid,ppTInfo)( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define IWMPQuery_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define IWMPQuery_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define IWMPQuery_addCondition(This,bstrAttribute,bstrOperator,bstrValue)( (This)->lpVtbl -> addCondition(This,bstrAttribute,bstrOperator,bstrValue) )
#define IWMPQuery_beginNextGroup(This)( (This)->lpVtbl -> beginNextGroup(This) )
#endif
#endif
extern RPC_IF_HANDLE __MIDL_itf_wmp_0000_0041_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_wmp_0000_0041_v0_0_s_ifspec;
#ifndef __IWMPMediaCollection2_INTERFACE_DEFINED__
#define __IWMPMediaCollection2_INTERFACE_DEFINED__
extern const IID IID_IWMPMediaCollection2;
typedef struct IWMPMediaCollection2Vtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IWMPMediaCollection2 * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IWMPMediaCollection2 * This);
	ULONG(STDMETHODCALLTYPE * Release) (IWMPMediaCollection2 * This);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfoCount) (IWMPMediaCollection2 * This, UINT * pctinfo);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfo) (IWMPMediaCollection2 * This, UINT iTInfo, LCID lcid, ITypeInfo ** ppTInfo);
	HRESULT(STDMETHODCALLTYPE * GetIDsOfNames) (IWMPMediaCollection2 * This, REFIID riid, LPOLESTR * rgszNames, UINT cNames, LCID lcid, DISPID * rgDispId);
	HRESULT(STDMETHODCALLTYPE * Invoke) (IWMPMediaCollection2 * This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS * pDispParams, VARIANT * pVarResult, EXCEPINFO * pExcepInfo, UINT * puArgErr);
	HRESULT(STDMETHODCALLTYPE * add) (IWMPMediaCollection2 * This, BSTR bstrURL, IWMPMedia ** ppItem);
	HRESULT(STDMETHODCALLTYPE * getAll) (IWMPMediaCollection2 * This, IWMPPlaylist ** ppMediaItems);
	HRESULT(STDMETHODCALLTYPE * getByName) (IWMPMediaCollection2 * This, BSTR bstrName, IWMPPlaylist ** ppMediaItems);
	HRESULT(STDMETHODCALLTYPE * getByGenre) (IWMPMediaCollection2 * This, BSTR bstrGenre, IWMPPlaylist ** ppMediaItems);
	HRESULT(STDMETHODCALLTYPE * getByAuthor) (IWMPMediaCollection2 * This, BSTR bstrAuthor, IWMPPlaylist ** ppMediaItems);
	HRESULT(STDMETHODCALLTYPE * getByAlbum) (IWMPMediaCollection2 * This, BSTR bstrAlbum, IWMPPlaylist ** ppMediaItems);
	HRESULT(STDMETHODCALLTYPE * getByAttribute) (IWMPMediaCollection2 * This, BSTR bstrAttribute, BSTR bstrValue, IWMPPlaylist ** ppMediaItems);
	HRESULT(STDMETHODCALLTYPE * remove) (IWMPMediaCollection2 * This, IWMPMedia * pItem, VARIANT_BOOL varfDeleteFile);
	HRESULT(STDMETHODCALLTYPE * getAttributeStringCollection) (IWMPMediaCollection2 * This, BSTR bstrAttribute, BSTR bstrMediaType, IWMPStringCollection ** ppStringCollection);
	HRESULT(STDMETHODCALLTYPE * getMediaAtom) (IWMPMediaCollection2 * This, BSTR bstrItemName, long *plAtom);
	HRESULT(STDMETHODCALLTYPE * setDeleted) (IWMPMediaCollection2 * This, IWMPMedia * pItem, VARIANT_BOOL varfIsDeleted);
	HRESULT(STDMETHODCALLTYPE * isDeleted) (IWMPMediaCollection2 * This, IWMPMedia * pItem, VARIANT_BOOL * pvarfIsDeleted);
	HRESULT(STDMETHODCALLTYPE * createQuery) (IWMPMediaCollection2 * This, IWMPQuery ** ppQuery);
	HRESULT(STDMETHODCALLTYPE * getPlaylistByQuery) (IWMPMediaCollection2 * This, IWMPQuery * pQuery, BSTR bstrMediaType, BSTR bstrSortAttribute, VARIANT_BOOL fSortAscending, IWMPPlaylist ** ppPlaylist);
	HRESULT(STDMETHODCALLTYPE * getStringCollectionByQuery) (IWMPMediaCollection2 * This, BSTR bstrAttribute, IWMPQuery * pQuery, BSTR bstrMediaType, BSTR bstrSortAttribute, VARIANT_BOOL fSortAscending, IWMPStringCollection ** ppStringCollection);
	HRESULT(STDMETHODCALLTYPE * getByAttributeAndMediaType) (IWMPMediaCollection2 * This, BSTR bstrAttribute, BSTR bstrValue, BSTR bstrMediaType, IWMPPlaylist ** ppMediaItems);
	END_INTERFACE
}  IWMPMediaCollection2Vtbl;
interface IWMPMediaCollection2
{
	CONST_VTBL struct IWMPMediaCollection2Vtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IWMPMediaCollection2_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IWMPMediaCollection2_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define IWMPMediaCollection2_Release(This)( (This)->lpVtbl -> Release(This) )
#define IWMPMediaCollection2_GetTypeInfoCount(This,pctinfo)( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define IWMPMediaCollection2_GetTypeInfo(This,iTInfo,lcid,ppTInfo)( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define IWMPMediaCollection2_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define IWMPMediaCollection2_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define IWMPMediaCollection2_add(This,bstrURL,ppItem)( (This)->lpVtbl -> add(This,bstrURL,ppItem) )
#define IWMPMediaCollection2_getAll(This,ppMediaItems)( (This)->lpVtbl -> getAll(This,ppMediaItems) )
#define IWMPMediaCollection2_getByName(This,bstrName,ppMediaItems)( (This)->lpVtbl -> getByName(This,bstrName,ppMediaItems) )
#define IWMPMediaCollection2_getByGenre(This,bstrGenre,ppMediaItems)( (This)->lpVtbl -> getByGenre(This,bstrGenre,ppMediaItems) )
#define IWMPMediaCollection2_getByAuthor(This,bstrAuthor,ppMediaItems)( (This)->lpVtbl -> getByAuthor(This,bstrAuthor,ppMediaItems) )
#define IWMPMediaCollection2_getByAlbum(This,bstrAlbum,ppMediaItems)( (This)->lpVtbl -> getByAlbum(This,bstrAlbum,ppMediaItems) )
#define IWMPMediaCollection2_getByAttribute(This,bstrAttribute,bstrValue,ppMediaItems)( (This)->lpVtbl -> getByAttribute(This,bstrAttribute,bstrValue,ppMediaItems) )
#define IWMPMediaCollection2_remove(This,pItem,varfDeleteFile)( (This)->lpVtbl -> remove(This,pItem,varfDeleteFile) )
#define IWMPMediaCollection2_getAttributeStringCollection(This,bstrAttribute,bstrMediaType,ppStringCollection)( (This)->lpVtbl -> getAttributeStringCollection(This,bstrAttribute,bstrMediaType,ppStringCollection) )
#define IWMPMediaCollection2_getMediaAtom(This,bstrItemName,plAtom)( (This)->lpVtbl -> getMediaAtom(This,bstrItemName,plAtom) )
#define IWMPMediaCollection2_setDeleted(This,pItem,varfIsDeleted)( (This)->lpVtbl -> setDeleted(This,pItem,varfIsDeleted) )
#define IWMPMediaCollection2_isDeleted(This,pItem,pvarfIsDeleted)( (This)->lpVtbl -> isDeleted(This,pItem,pvarfIsDeleted) )
#define IWMPMediaCollection2_createQuery(This,ppQuery)( (This)->lpVtbl -> createQuery(This,ppQuery) )
#define IWMPMediaCollection2_getPlaylistByQuery(This,pQuery,bstrMediaType,bstrSortAttribute,fSortAscending,ppPlaylist)( (This)->lpVtbl -> getPlaylistByQuery(This,pQuery,bstrMediaType,bstrSortAttribute,fSortAscending,ppPlaylist) )
#define IWMPMediaCollection2_getStringCollectionByQuery(This,bstrAttribute,pQuery,bstrMediaType,bstrSortAttribute,fSortAscending,ppStringCollection)( (This)->lpVtbl -> getStringCollectionByQuery(This,bstrAttribute,pQuery,bstrMediaType,bstrSortAttribute,fSortAscending,ppStringCollection) )
#define IWMPMediaCollection2_getByAttributeAndMediaType(This,bstrAttribute,bstrValue,bstrMediaType,ppMediaItems)( (This)->lpVtbl -> getByAttributeAndMediaType(This,bstrAttribute,bstrValue,bstrMediaType,ppMediaItems) )
#endif
#endif
#ifndef __IWMPStringCollection2_INTERFACE_DEFINED__
#define __IWMPStringCollection2_INTERFACE_DEFINED__
extern const IID IID_IWMPStringCollection2;
typedef struct IWMPStringCollection2Vtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IWMPStringCollection2 * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IWMPStringCollection2 * This);
	ULONG(STDMETHODCALLTYPE * Release) (IWMPStringCollection2 * This);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfoCount) (IWMPStringCollection2 * This, UINT * pctinfo);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfo) (IWMPStringCollection2 * This, UINT iTInfo, LCID lcid, ITypeInfo ** ppTInfo);
	HRESULT(STDMETHODCALLTYPE * GetIDsOfNames) (IWMPStringCollection2 * This, REFIID riid, LPOLESTR * rgszNames, UINT cNames, LCID lcid, DISPID * rgDispId);
	HRESULT(STDMETHODCALLTYPE * Invoke) (IWMPStringCollection2 * This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS * pDispParams, VARIANT * pVarResult, EXCEPINFO * pExcepInfo, UINT * puArgErr);
	HRESULT(STDMETHODCALLTYPE * get_count) (IWMPStringCollection2 * This, long *plCount);
	HRESULT(STDMETHODCALLTYPE * item) (IWMPStringCollection2 * This, long lIndex, BSTR * pbstrString);
	HRESULT(STDMETHODCALLTYPE * isIdentical) (IWMPStringCollection2 * This, IWMPStringCollection2 * pIWMPStringCollection2, VARIANT_BOOL * pvbool);
	HRESULT(STDMETHODCALLTYPE * getItemInfo) (IWMPStringCollection2 * This, long lCollectionIndex, BSTR bstrItemName, BSTR * pbstrValue);
	HRESULT(STDMETHODCALLTYPE * getAttributeCountByType) (IWMPStringCollection2 * This, long lCollectionIndex, BSTR bstrType, BSTR bstrLanguage, long *plCount);
	HRESULT(STDMETHODCALLTYPE * getItemInfoByType) (IWMPStringCollection2 * This, long lCollectionIndex, BSTR bstrType, BSTR bstrLanguage, long lAttributeIndex, VARIANT * pvarValue);
	END_INTERFACE
}  IWMPStringCollection2Vtbl;
interface IWMPStringCollection2
{
	CONST_VTBL struct IWMPStringCollection2Vtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IWMPStringCollection2_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IWMPStringCollection2_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define IWMPStringCollection2_Release(This)( (This)->lpVtbl -> Release(This) )
#define IWMPStringCollection2_GetTypeInfoCount(This,pctinfo)( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define IWMPStringCollection2_GetTypeInfo(This,iTInfo,lcid,ppTInfo)( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define IWMPStringCollection2_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define IWMPStringCollection2_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define IWMPStringCollection2_get_count(This,plCount)( (This)->lpVtbl -> get_count(This,plCount) )
#define IWMPStringCollection2_item(This,lIndex,pbstrString)( (This)->lpVtbl -> item(This,lIndex,pbstrString) )
#define IWMPStringCollection2_isIdentical(This,pIWMPStringCollection2,pvbool)( (This)->lpVtbl -> isIdentical(This,pIWMPStringCollection2,pvbool) )
#define IWMPStringCollection2_getItemInfo(This,lCollectionIndex,bstrItemName,pbstrValue)( (This)->lpVtbl -> getItemInfo(This,lCollectionIndex,bstrItemName,pbstrValue) )
#define IWMPStringCollection2_getAttributeCountByType(This,lCollectionIndex,bstrType,bstrLanguage,plCount)( (This)->lpVtbl -> getAttributeCountByType(This,lCollectionIndex,bstrType,bstrLanguage,plCount) )
#define IWMPStringCollection2_getItemInfoByType(This,lCollectionIndex,bstrType,bstrLanguage,lAttributeIndex,pvarValue)( (This)->lpVtbl -> getItemInfoByType(This,lCollectionIndex,bstrType,bstrLanguage,lAttributeIndex,pvarValue) )
#endif
#endif
typedef enum WMPLibraryType
{
	wmpltUnknown = 0,
	wmpltAll = (wmpltUnknown + 1),
	wmpltLocal = (wmpltAll + 1),
	wmpltRemote = (wmpltLocal + 1),
	wmpltDisc = (wmpltRemote + 1),
	wmpltPortableDevice = (wmpltDisc + 1)
} WMPLibraryType;
extern RPC_IF_HANDLE __MIDL_itf_wmp_0000_0043_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_wmp_0000_0043_v0_0_s_ifspec;
#ifndef __IWMPLibrary_INTERFACE_DEFINED__
#define __IWMPLibrary_INTERFACE_DEFINED__
extern const IID IID_IWMPLibrary;
typedef struct IWMPLibraryVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IWMPLibrary * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IWMPLibrary * This);
	ULONG(STDMETHODCALLTYPE * Release) (IWMPLibrary * This);
	HRESULT(STDMETHODCALLTYPE * get_name) (IWMPLibrary * This, BSTR * pbstrName);
	HRESULT(STDMETHODCALLTYPE * get_type) (IWMPLibrary * This, WMPLibraryType * pwmplt);
	HRESULT(STDMETHODCALLTYPE * get_mediaCollection) (IWMPLibrary * This, IWMPMediaCollection ** ppIWMPMediaCollection);
	HRESULT(STDMETHODCALLTYPE * isIdentical) (IWMPLibrary * This, IWMPLibrary * pIWMPLibrary, VARIANT_BOOL * pvbool);
	END_INTERFACE
}  IWMPLibraryVtbl;
interface IWMPLibrary
{
	CONST_VTBL struct IWMPLibraryVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IWMPLibrary_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IWMPLibrary_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define IWMPLibrary_Release(This)( (This)->lpVtbl -> Release(This) )
#define IWMPLibrary_get_name(This,pbstrName)( (This)->lpVtbl -> get_name(This,pbstrName) )
#define IWMPLibrary_get_type(This,pwmplt)( (This)->lpVtbl -> get_type(This,pwmplt) )
#define IWMPLibrary_get_mediaCollection(This,ppIWMPMediaCollection)( (This)->lpVtbl -> get_mediaCollection(This,ppIWMPMediaCollection) )
#define IWMPLibrary_isIdentical(This,pIWMPLibrary,pvbool)( (This)->lpVtbl -> isIdentical(This,pIWMPLibrary,pvbool) )
#endif
#endif
#ifndef __IWMPLibraryServices_INTERFACE_DEFINED__
#define __IWMPLibraryServices_INTERFACE_DEFINED__
extern const IID IID_IWMPLibraryServices;
typedef struct IWMPLibraryServicesVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IWMPLibraryServices * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IWMPLibraryServices * This);
	ULONG(STDMETHODCALLTYPE * Release) (IWMPLibraryServices * This);
	HRESULT(STDMETHODCALLTYPE * getCountByType) (IWMPLibraryServices * This, WMPLibraryType wmplt, long *plCount);
	HRESULT(STDMETHODCALLTYPE * getLibraryByType) (IWMPLibraryServices * This, WMPLibraryType wmplt, long lIndex, IWMPLibrary ** ppIWMPLibrary);
	END_INTERFACE
}  IWMPLibraryServicesVtbl;
interface IWMPLibraryServices
{
	CONST_VTBL struct IWMPLibraryServicesVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IWMPLibraryServices_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IWMPLibraryServices_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define IWMPLibraryServices_Release(This)( (This)->lpVtbl -> Release(This) )
#define IWMPLibraryServices_getCountByType(This,wmplt,plCount)( (This)->lpVtbl -> getCountByType(This,wmplt,plCount) )
#define IWMPLibraryServices_getLibraryByType(This,wmplt,lIndex,ppIWMPLibrary)( (This)->lpVtbl -> getLibraryByType(This,wmplt,lIndex,ppIWMPLibrary) )
#endif
#endif
#ifndef __IWMPLibrarySharingServices_INTERFACE_DEFINED__
#define __IWMPLibrarySharingServices_INTERFACE_DEFINED__
extern const IID IID_IWMPLibrarySharingServices;
typedef struct IWMPLibrarySharingServicesVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IWMPLibrarySharingServices * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IWMPLibrarySharingServices * This);
	ULONG(STDMETHODCALLTYPE * Release) (IWMPLibrarySharingServices * This);
	HRESULT(STDMETHODCALLTYPE * isLibraryShared) (IWMPLibrarySharingServices * This, VARIANT_BOOL * pvbShared);
	HRESULT(STDMETHODCALLTYPE * isLibrarySharingEnabled) (IWMPLibrarySharingServices * This, VARIANT_BOOL * pvbEnabled);
	HRESULT(STDMETHODCALLTYPE * showLibrarySharing) (IWMPLibrarySharingServices * This);
	END_INTERFACE
}  IWMPLibrarySharingServicesVtbl;
interface IWMPLibrarySharingServices
{
	CONST_VTBL struct IWMPLibrarySharingServicesVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IWMPLibrarySharingServices_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IWMPLibrarySharingServices_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define IWMPLibrarySharingServices_Release(This)( (This)->lpVtbl -> Release(This) )
#define IWMPLibrarySharingServices_isLibraryShared(This,pvbShared)( (This)->lpVtbl -> isLibraryShared(This,pvbShared) )
#define IWMPLibrarySharingServices_isLibrarySharingEnabled(This,pvbEnabled)( (This)->lpVtbl -> isLibrarySharingEnabled(This,pvbEnabled) )
#define IWMPLibrarySharingServices_showLibrarySharing(This)( (This)->lpVtbl -> showLibrarySharing(This) )
#endif
#endif
typedef enum WMPFolderScanState
{
	wmpfssUnknown = 0,
	wmpfssScanning = (wmpfssUnknown + 1),
	wmpfssUpdating = (wmpfssScanning + 1),
	wmpfssStopped = (wmpfssUpdating + 1)
} WMPFolderScanState;
extern RPC_IF_HANDLE __MIDL_itf_wmp_0000_0046_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_wmp_0000_0046_v0_0_s_ifspec;
#ifndef __IWMPFolderMonitorServices_INTERFACE_DEFINED__
#define __IWMPFolderMonitorServices_INTERFACE_DEFINED__
extern const IID IID_IWMPFolderMonitorServices;
typedef struct IWMPFolderMonitorServicesVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IWMPFolderMonitorServices * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IWMPFolderMonitorServices * This);
	ULONG(STDMETHODCALLTYPE * Release) (IWMPFolderMonitorServices * This);
	HRESULT(STDMETHODCALLTYPE * get_count) (IWMPFolderMonitorServices * This, long *plCount);
	HRESULT(STDMETHODCALLTYPE * item) (IWMPFolderMonitorServices * This, long lIndex, BSTR * pbstrFolder);
	HRESULT(STDMETHODCALLTYPE * add) (IWMPFolderMonitorServices * This, BSTR bstrFolder);
	HRESULT(STDMETHODCALLTYPE * remove) (IWMPFolderMonitorServices * This, long lIndex);
	HRESULT(STDMETHODCALLTYPE * get_scanState) (IWMPFolderMonitorServices * This, WMPFolderScanState * pwmpfss);
	HRESULT(STDMETHODCALLTYPE * get_currentFolder) (IWMPFolderMonitorServices * This, BSTR * pbstrFolder);
	HRESULT(STDMETHODCALLTYPE * get_scannedFilesCount) (IWMPFolderMonitorServices * This, long *plCount);
	HRESULT(STDMETHODCALLTYPE * get_addedFilesCount) (IWMPFolderMonitorServices * This, long *plCount);
	HRESULT(STDMETHODCALLTYPE * get_updateProgress) (IWMPFolderMonitorServices * This, long *plProgress);
	HRESULT(STDMETHODCALLTYPE * startScan) (IWMPFolderMonitorServices * This);
	HRESULT(STDMETHODCALLTYPE * stopScan) (IWMPFolderMonitorServices * This);
	END_INTERFACE
}  IWMPFolderMonitorServicesVtbl;
interface IWMPFolderMonitorServices
{
	CONST_VTBL struct IWMPFolderMonitorServicesVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IWMPFolderMonitorServices_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IWMPFolderMonitorServices_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define IWMPFolderMonitorServices_Release(This)( (This)->lpVtbl -> Release(This) )
#define IWMPFolderMonitorServices_get_count(This,plCount)( (This)->lpVtbl -> get_count(This,plCount) )
#define IWMPFolderMonitorServices_item(This,lIndex,pbstrFolder)( (This)->lpVtbl -> item(This,lIndex,pbstrFolder) )
#define IWMPFolderMonitorServices_add(This,bstrFolder)( (This)->lpVtbl -> add(This,bstrFolder) )
#define IWMPFolderMonitorServices_remove(This,lIndex)( (This)->lpVtbl -> remove(This,lIndex) )
#define IWMPFolderMonitorServices_get_scanState(This,pwmpfss)( (This)->lpVtbl -> get_scanState(This,pwmpfss) )
#define IWMPFolderMonitorServices_get_currentFolder(This,pbstrFolder)( (This)->lpVtbl -> get_currentFolder(This,pbstrFolder) )
#define IWMPFolderMonitorServices_get_scannedFilesCount(This,plCount)( (This)->lpVtbl -> get_scannedFilesCount(This,plCount) )
#define IWMPFolderMonitorServices_get_addedFilesCount(This,plCount)( (This)->lpVtbl -> get_addedFilesCount(This,plCount) )
#define IWMPFolderMonitorServices_get_updateProgress(This,plProgress)( (This)->lpVtbl -> get_updateProgress(This,plProgress) )
#define IWMPFolderMonitorServices_startScan(This)( (This)->lpVtbl -> startScan(This) )
#define IWMPFolderMonitorServices_stopScan(This)( (This)->lpVtbl -> stopScan(This) )
#endif
#endif
#ifndef __IWMPSyncDevice2_INTERFACE_DEFINED__
#define __IWMPSyncDevice2_INTERFACE_DEFINED__
extern const IID IID_IWMPSyncDevice2;
typedef struct IWMPSyncDevice2Vtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IWMPSyncDevice2 * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IWMPSyncDevice2 * This);
	ULONG(STDMETHODCALLTYPE * Release) (IWMPSyncDevice2 * This);
	HRESULT(STDMETHODCALLTYPE * get_friendlyName) (IWMPSyncDevice2 * This, BSTR * pbstrName);
	HRESULT(STDMETHODCALLTYPE * put_friendlyName) (IWMPSyncDevice2 * This, BSTR bstrName);
	HRESULT(STDMETHODCALLTYPE * get_deviceName) (IWMPSyncDevice2 * This, BSTR * pbstrName);
	HRESULT(STDMETHODCALLTYPE * get_deviceId) (IWMPSyncDevice2 * This, BSTR * pbstrDeviceId);
	HRESULT(STDMETHODCALLTYPE * get_partnershipIndex) (IWMPSyncDevice2 * This, long *plIndex);
	HRESULT(STDMETHODCALLTYPE * get_connected) (IWMPSyncDevice2 * This, VARIANT_BOOL * pvbConnected);
	HRESULT(STDMETHODCALLTYPE * get_status) (IWMPSyncDevice2 * This, WMPDeviceStatus * pwmpds);
	HRESULT(STDMETHODCALLTYPE * get_syncState) (IWMPSyncDevice2 * This, WMPSyncState * pwmpss);
	HRESULT(STDMETHODCALLTYPE * get_progress) (IWMPSyncDevice2 * This, long *plProgress);
	HRESULT(STDMETHODCALLTYPE * getItemInfo) (IWMPSyncDevice2 * This, BSTR bstrItemName, BSTR * pbstrVal);
	HRESULT(STDMETHODCALLTYPE * createPartnership) (IWMPSyncDevice2 * This, VARIANT_BOOL vbShowUI);
	HRESULT(STDMETHODCALLTYPE * deletePartnership) (IWMPSyncDevice2 * This);
	HRESULT(STDMETHODCALLTYPE * start) (IWMPSyncDevice2 * This);
	HRESULT(STDMETHODCALLTYPE * stop) (IWMPSyncDevice2 * This);
	HRESULT(STDMETHODCALLTYPE * showSettings) (IWMPSyncDevice2 * This);
	HRESULT(STDMETHODCALLTYPE * isIdentical) (IWMPSyncDevice2 * This, IWMPSyncDevice * pDevice, VARIANT_BOOL * pvbool);
	HRESULT(STDMETHODCALLTYPE * setItemInfo) (IWMPSyncDevice2 * This, BSTR bstrItemName, BSTR bstrVal);
	END_INTERFACE
}  IWMPSyncDevice2Vtbl;
interface IWMPSyncDevice2
{
	CONST_VTBL struct IWMPSyncDevice2Vtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IWMPSyncDevice2_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IWMPSyncDevice2_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define IWMPSyncDevice2_Release(This)( (This)->lpVtbl -> Release(This) )
#define IWMPSyncDevice2_get_friendlyName(This,pbstrName)( (This)->lpVtbl -> get_friendlyName(This,pbstrName) )
#define IWMPSyncDevice2_put_friendlyName(This,bstrName)( (This)->lpVtbl -> put_friendlyName(This,bstrName) )
#define IWMPSyncDevice2_get_deviceName(This,pbstrName)( (This)->lpVtbl -> get_deviceName(This,pbstrName) )
#define IWMPSyncDevice2_get_deviceId(This,pbstrDeviceId)( (This)->lpVtbl -> get_deviceId(This,pbstrDeviceId) )
#define IWMPSyncDevice2_get_partnershipIndex(This,plIndex)( (This)->lpVtbl -> get_partnershipIndex(This,plIndex) )
#define IWMPSyncDevice2_get_connected(This,pvbConnected)( (This)->lpVtbl -> get_connected(This,pvbConnected) )
#define IWMPSyncDevice2_get_status(This,pwmpds)( (This)->lpVtbl -> get_status(This,pwmpds) )
#define IWMPSyncDevice2_get_syncState(This,pwmpss)( (This)->lpVtbl -> get_syncState(This,pwmpss) )
#define IWMPSyncDevice2_get_progress(This,plProgress)( (This)->lpVtbl -> get_progress(This,plProgress) )
#define IWMPSyncDevice2_getItemInfo(This,bstrItemName,pbstrVal)( (This)->lpVtbl -> getItemInfo(This,bstrItemName,pbstrVal) )
#define IWMPSyncDevice2_createPartnership(This,vbShowUI)( (This)->lpVtbl -> createPartnership(This,vbShowUI) )
#define IWMPSyncDevice2_deletePartnership(This)( (This)->lpVtbl -> deletePartnership(This) )
#define IWMPSyncDevice2_start(This)( (This)->lpVtbl -> start(This) )
#define IWMPSyncDevice2_stop(This)( (This)->lpVtbl -> stop(This) )
#define IWMPSyncDevice2_showSettings(This)( (This)->lpVtbl -> showSettings(This) )
#define IWMPSyncDevice2_isIdentical(This,pDevice,pvbool)( (This)->lpVtbl -> isIdentical(This,pDevice,pvbool) )
#define IWMPSyncDevice2_setItemInfo(This,bstrItemName,bstrVal)( (This)->lpVtbl -> setItemInfo(This,bstrItemName,bstrVal) )
#endif
#endif
#ifndef __IWMPSyncDevice3_INTERFACE_DEFINED__
#define __IWMPSyncDevice3_INTERFACE_DEFINED__
extern const IID IID_IWMPSyncDevice3;
typedef struct IWMPSyncDevice3Vtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IWMPSyncDevice3 * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IWMPSyncDevice3 * This);
	ULONG(STDMETHODCALLTYPE * Release) (IWMPSyncDevice3 * This);
	HRESULT(STDMETHODCALLTYPE * get_friendlyName) (IWMPSyncDevice3 * This, BSTR * pbstrName);
	HRESULT(STDMETHODCALLTYPE * put_friendlyName) (IWMPSyncDevice3 * This, BSTR bstrName);
	HRESULT(STDMETHODCALLTYPE * get_deviceName) (IWMPSyncDevice3 * This, BSTR * pbstrName);
	HRESULT(STDMETHODCALLTYPE * get_deviceId) (IWMPSyncDevice3 * This, BSTR * pbstrDeviceId);
	HRESULT(STDMETHODCALLTYPE * get_partnershipIndex) (IWMPSyncDevice3 * This, long *plIndex);
	HRESULT(STDMETHODCALLTYPE * get_connected) (IWMPSyncDevice3 * This, VARIANT_BOOL * pvbConnected);
	HRESULT(STDMETHODCALLTYPE * get_status) (IWMPSyncDevice3 * This, WMPDeviceStatus * pwmpds);
	HRESULT(STDMETHODCALLTYPE * get_syncState) (IWMPSyncDevice3 * This, WMPSyncState * pwmpss);
	HRESULT(STDMETHODCALLTYPE * get_progress) (IWMPSyncDevice3 * This, long *plProgress);
	HRESULT(STDMETHODCALLTYPE * getItemInfo) (IWMPSyncDevice3 * This, BSTR bstrItemName, BSTR * pbstrVal);
	HRESULT(STDMETHODCALLTYPE * createPartnership) (IWMPSyncDevice3 * This, VARIANT_BOOL vbShowUI);
	HRESULT(STDMETHODCALLTYPE * deletePartnership) (IWMPSyncDevice3 * This);
	HRESULT(STDMETHODCALLTYPE * start) (IWMPSyncDevice3 * This);
	HRESULT(STDMETHODCALLTYPE * stop) (IWMPSyncDevice3 * This);
	HRESULT(STDMETHODCALLTYPE * showSettings) (IWMPSyncDevice3 * This);
	HRESULT(STDMETHODCALLTYPE * isIdentical) (IWMPSyncDevice3 * This, IWMPSyncDevice * pDevice, VARIANT_BOOL * pvbool);
	HRESULT(STDMETHODCALLTYPE * setItemInfo) (IWMPSyncDevice3 * This, BSTR bstrItemName, BSTR bstrVal);
	HRESULT(STDMETHODCALLTYPE * estimateSyncSize) (IWMPSyncDevice3 * This, IWMPPlaylist * pNonRulePlaylist, IWMPPlaylist * pRulesPlaylist);
	HRESULT(STDMETHODCALLTYPE * cancelEstimation) (IWMPSyncDevice3 * This);
	END_INTERFACE
}  IWMPSyncDevice3Vtbl;
interface IWMPSyncDevice3
{
	CONST_VTBL struct IWMPSyncDevice3Vtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IWMPSyncDevice3_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IWMPSyncDevice3_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define IWMPSyncDevice3_Release(This)( (This)->lpVtbl -> Release(This) )
#define IWMPSyncDevice3_get_friendlyName(This,pbstrName)( (This)->lpVtbl -> get_friendlyName(This,pbstrName) )
#define IWMPSyncDevice3_put_friendlyName(This,bstrName)( (This)->lpVtbl -> put_friendlyName(This,bstrName) )
#define IWMPSyncDevice3_get_deviceName(This,pbstrName)( (This)->lpVtbl -> get_deviceName(This,pbstrName) )
#define IWMPSyncDevice3_get_deviceId(This,pbstrDeviceId)( (This)->lpVtbl -> get_deviceId(This,pbstrDeviceId) )
#define IWMPSyncDevice3_get_partnershipIndex(This,plIndex)( (This)->lpVtbl -> get_partnershipIndex(This,plIndex) )
#define IWMPSyncDevice3_get_connected(This,pvbConnected)( (This)->lpVtbl -> get_connected(This,pvbConnected) )
#define IWMPSyncDevice3_get_status(This,pwmpds)( (This)->lpVtbl -> get_status(This,pwmpds) )
#define IWMPSyncDevice3_get_syncState(This,pwmpss)( (This)->lpVtbl -> get_syncState(This,pwmpss) )
#define IWMPSyncDevice3_get_progress(This,plProgress)( (This)->lpVtbl -> get_progress(This,plProgress) )
#define IWMPSyncDevice3_getItemInfo(This,bstrItemName,pbstrVal)( (This)->lpVtbl -> getItemInfo(This,bstrItemName,pbstrVal) )
#define IWMPSyncDevice3_createPartnership(This,vbShowUI)( (This)->lpVtbl -> createPartnership(This,vbShowUI) )
#define IWMPSyncDevice3_deletePartnership(This)( (This)->lpVtbl -> deletePartnership(This) )
#define IWMPSyncDevice3_start(This)( (This)->lpVtbl -> start(This) )
#define IWMPSyncDevice3_stop(This)( (This)->lpVtbl -> stop(This) )
#define IWMPSyncDevice3_showSettings(This)( (This)->lpVtbl -> showSettings(This) )
#define IWMPSyncDevice3_isIdentical(This,pDevice,pvbool)( (This)->lpVtbl -> isIdentical(This,pDevice,pvbool) )
#define IWMPSyncDevice3_setItemInfo(This,bstrItemName,bstrVal)( (This)->lpVtbl -> setItemInfo(This,bstrItemName,bstrVal) )
#define IWMPSyncDevice3_estimateSyncSize(This,pNonRulePlaylist,pRulesPlaylist)( (This)->lpVtbl -> estimateSyncSize(This,pNonRulePlaylist,pRulesPlaylist) )
#define IWMPSyncDevice3_cancelEstimation(This)( (This)->lpVtbl -> cancelEstimation(This) )
#endif
#endif
#ifndef __IWMPLibrary2_INTERFACE_DEFINED__
#define __IWMPLibrary2_INTERFACE_DEFINED__
extern const IID IID_IWMPLibrary2;
typedef struct IWMPLibrary2Vtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IWMPLibrary2 * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IWMPLibrary2 * This);
	ULONG(STDMETHODCALLTYPE * Release) (IWMPLibrary2 * This);
	HRESULT(STDMETHODCALLTYPE * get_name) (IWMPLibrary2 * This, BSTR * pbstrName);
	HRESULT(STDMETHODCALLTYPE * get_type) (IWMPLibrary2 * This, WMPLibraryType * pwmplt);
	HRESULT(STDMETHODCALLTYPE * get_mediaCollection) (IWMPLibrary2 * This, IWMPMediaCollection ** ppIWMPMediaCollection);
	HRESULT(STDMETHODCALLTYPE * isIdentical) (IWMPLibrary2 * This, IWMPLibrary * pIWMPLibrary, VARIANT_BOOL * pvbool);
	HRESULT(STDMETHODCALLTYPE * getItemInfo) (IWMPLibrary2 * This, BSTR bstrItemName, BSTR * pbstrVal);
	END_INTERFACE
}  IWMPLibrary2Vtbl;
interface IWMPLibrary2
{
	CONST_VTBL struct IWMPLibrary2Vtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IWMPLibrary2_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IWMPLibrary2_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define IWMPLibrary2_Release(This)( (This)->lpVtbl -> Release(This) )
#define IWMPLibrary2_get_name(This,pbstrName)( (This)->lpVtbl -> get_name(This,pbstrName) )
#define IWMPLibrary2_get_type(This,pwmplt)( (This)->lpVtbl -> get_type(This,pwmplt) )
#define IWMPLibrary2_get_mediaCollection(This,ppIWMPMediaCollection)( (This)->lpVtbl -> get_mediaCollection(This,ppIWMPMediaCollection) )
#define IWMPLibrary2_isIdentical(This,pIWMPLibrary,pvbool)( (This)->lpVtbl -> isIdentical(This,pIWMPLibrary,pvbool) )
#define IWMPLibrary2_getItemInfo(This,bstrItemName,pbstrVal)( (This)->lpVtbl -> getItemInfo(This,bstrItemName,pbstrVal) )
#endif
#endif
struct DECLSPEC_UUID ("6BF52A50-394A-11d3-B153-00C04F79FAA6") WMPLib;
struct DECLSPEC_UUID ("DF333473-2CF7-4be2-907F-9AAD5661364F") WMPRemoteMediaServices;
extern RPC_IF_HANDLE __MIDL_itf_wmp_0000_0050_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_wmp_0000_0050_v0_0_s_ifspec;
#ifndef __WMPLib_LIBRARY_DEFINED__
#define __WMPLib_LIBRARY_DEFINED__
extern const IID LIBID_WMPLib;
#ifndef __IWMPEvents_INTERFACE_DEFINED__
#define __IWMPEvents_INTERFACE_DEFINED__
extern const IID IID_IWMPEvents;
typedef struct IWMPEventsVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IWMPEvents * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IWMPEvents * This);
	ULONG(STDMETHODCALLTYPE * Release) (IWMPEvents * This);
	void (STDMETHODCALLTYPE * OpenStateChange) (IWMPEvents * This, long NewState);
	void (STDMETHODCALLTYPE * PlayStateChange) (IWMPEvents * This, long NewState);
	void (STDMETHODCALLTYPE * AudioLanguageChange) (IWMPEvents * This, long LangID);
	void (STDMETHODCALLTYPE * StatusChange) (IWMPEvents * This);
	void (STDMETHODCALLTYPE * ScriptCommand) (IWMPEvents * This, BSTR scType, BSTR Param);
	void (STDMETHODCALLTYPE * NewStream) (IWMPEvents * This);
	void (STDMETHODCALLTYPE * Disconnect) (IWMPEvents * This, long Result);
	void (STDMETHODCALLTYPE * Buffering) (IWMPEvents * This, VARIANT_BOOL Start);
	void (STDMETHODCALLTYPE * Error) (IWMPEvents * This);
	void (STDMETHODCALLTYPE * Warning) (IWMPEvents * This, long WarningType, long Param, BSTR Description);
	void (STDMETHODCALLTYPE * EndOfStream) (IWMPEvents * This, long Result);
	void (STDMETHODCALLTYPE * PositionChange) (IWMPEvents * This, double oldPosition, double newPosition);
	void (STDMETHODCALLTYPE * MarkerHit) (IWMPEvents * This, long MarkerNum);
	void (STDMETHODCALLTYPE * DurationUnitChange) (IWMPEvents * This, long NewDurationUnit);
	void (STDMETHODCALLTYPE * CdromMediaChange) (IWMPEvents * This, long CdromNum);
	void (STDMETHODCALLTYPE * PlaylistChange) (IWMPEvents * This, IDispatch * Playlist, WMPPlaylistChangeEventType change);
	void (STDMETHODCALLTYPE * CurrentPlaylistChange) (IWMPEvents * This, WMPPlaylistChangeEventType change);
	void (STDMETHODCALLTYPE * CurrentPlaylistItemAvailable) (IWMPEvents * This, BSTR bstrItemName);
	void (STDMETHODCALLTYPE * MediaChange) (IWMPEvents * This, IDispatch * Item);
	void (STDMETHODCALLTYPE * CurrentMediaItemAvailable) (IWMPEvents * This, BSTR bstrItemName);
	void (STDMETHODCALLTYPE * CurrentItemChange) (IWMPEvents * This, IDispatch * pdispMedia);
	void (STDMETHODCALLTYPE * MediaCollectionChange) (IWMPEvents * This);
	void (STDMETHODCALLTYPE * MediaCollectionAttributeStringAdded) (IWMPEvents * This, BSTR bstrAttribName, BSTR bstrAttribVal);
	void (STDMETHODCALLTYPE * MediaCollectionAttributeStringRemoved) (IWMPEvents * This, BSTR bstrAttribName, BSTR bstrAttribVal);
	void (STDMETHODCALLTYPE * MediaCollectionAttributeStringChanged) (IWMPEvents * This, BSTR bstrAttribName, BSTR bstrOldAttribVal, BSTR bstrNewAttribVal);
	void (STDMETHODCALLTYPE * PlaylistCollectionChange) (IWMPEvents * This);
	void (STDMETHODCALLTYPE * PlaylistCollectionPlaylistAdded) (IWMPEvents * This, BSTR bstrPlaylistName);
	void (STDMETHODCALLTYPE * PlaylistCollectionPlaylistRemoved) (IWMPEvents * This, BSTR bstrPlaylistName);
	void (STDMETHODCALLTYPE * PlaylistCollectionPlaylistSetAsDeleted) (IWMPEvents * This, BSTR bstrPlaylistName, VARIANT_BOOL varfIsDeleted);
	void (STDMETHODCALLTYPE * ModeChange) (IWMPEvents * This, BSTR ModeName, VARIANT_BOOL NewValue);
	void (STDMETHODCALLTYPE * MediaError) (IWMPEvents * This, IDispatch * pMediaObject);
	void (STDMETHODCALLTYPE * OpenPlaylistSwitch) (IWMPEvents * This, IDispatch * pItem);
	void (STDMETHODCALLTYPE * DomainChange) (IWMPEvents * This, BSTR strDomain);
	void (STDMETHODCALLTYPE * SwitchedToPlayerApplication) (IWMPEvents * This);
	void (STDMETHODCALLTYPE * SwitchedToControl) (IWMPEvents * This);
	void (STDMETHODCALLTYPE * PlayerDockedStateChange) (IWMPEvents * This);
	void (STDMETHODCALLTYPE * PlayerReconnect) (IWMPEvents * This);
	void (STDMETHODCALLTYPE * Click) (IWMPEvents * This, short nButton, short nShiftState, long fX, long fY);
	void (STDMETHODCALLTYPE * DoubleClick) (IWMPEvents * This, short nButton, short nShiftState, long fX, long fY);
	void (STDMETHODCALLTYPE * KeyDown) (IWMPEvents * This, short nKeyCode, short nShiftState);
	void (STDMETHODCALLTYPE * KeyPress) (IWMPEvents * This, short nKeyAscii);
	void (STDMETHODCALLTYPE * KeyUp) (IWMPEvents * This, short nKeyCode, short nShiftState);
	void (STDMETHODCALLTYPE * MouseDown) (IWMPEvents * This, short nButton, short nShiftState, long fX, long fY);
	void (STDMETHODCALLTYPE * MouseMove) (IWMPEvents * This, short nButton, short nShiftState, long fX, long fY);
	void (STDMETHODCALLTYPE * MouseUp) (IWMPEvents * This, short nButton, short nShiftState, long fX, long fY);
	END_INTERFACE
}  IWMPEventsVtbl;
interface IWMPEvents
{
	CONST_VTBL struct IWMPEventsVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IWMPEvents_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IWMPEvents_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define IWMPEvents_Release(This)( (This)->lpVtbl -> Release(This) )
#define IWMPEvents_OpenStateChange(This,NewState)( (This)->lpVtbl -> OpenStateChange(This,NewState) )
#define IWMPEvents_PlayStateChange(This,NewState)( (This)->lpVtbl -> PlayStateChange(This,NewState) )
#define IWMPEvents_AudioLanguageChange(This,LangID)( (This)->lpVtbl -> AudioLanguageChange(This,LangID) )
#define IWMPEvents_StatusChange(This)( (This)->lpVtbl -> StatusChange(This) )
#define IWMPEvents_ScriptCommand(This,scType,Param)( (This)->lpVtbl -> ScriptCommand(This,scType,Param) )
#define IWMPEvents_NewStream(This)( (This)->lpVtbl -> NewStream(This) )
#define IWMPEvents_Disconnect(This,Result)( (This)->lpVtbl -> Disconnect(This,Result) )
#define IWMPEvents_Buffering(This,Start)( (This)->lpVtbl -> Buffering(This,Start) )
#define IWMPEvents_Error(This)( (This)->lpVtbl -> Error(This) )
#define IWMPEvents_Warning(This,WarningType,Param,Description)( (This)->lpVtbl -> Warning(This,WarningType,Param,Description) )
#define IWMPEvents_EndOfStream(This,Result)( (This)->lpVtbl -> EndOfStream(This,Result) )
#define IWMPEvents_PositionChange(This,oldPosition,newPosition)( (This)->lpVtbl -> PositionChange(This,oldPosition,newPosition) )
#define IWMPEvents_MarkerHit(This,MarkerNum)( (This)->lpVtbl -> MarkerHit(This,MarkerNum) )
#define IWMPEvents_DurationUnitChange(This,NewDurationUnit)( (This)->lpVtbl -> DurationUnitChange(This,NewDurationUnit) )
#define IWMPEvents_CdromMediaChange(This,CdromNum)( (This)->lpVtbl -> CdromMediaChange(This,CdromNum) )
#define IWMPEvents_PlaylistChange(This,Playlist,change)( (This)->lpVtbl -> PlaylistChange(This,Playlist,change) )
#define IWMPEvents_CurrentPlaylistChange(This,change)( (This)->lpVtbl -> CurrentPlaylistChange(This,change) )
#define IWMPEvents_CurrentPlaylistItemAvailable(This,bstrItemName)( (This)->lpVtbl -> CurrentPlaylistItemAvailable(This,bstrItemName) )
#define IWMPEvents_MediaChange(This,Item)( (This)->lpVtbl -> MediaChange(This,Item) )
#define IWMPEvents_CurrentMediaItemAvailable(This,bstrItemName)( (This)->lpVtbl -> CurrentMediaItemAvailable(This,bstrItemName) )
#define IWMPEvents_CurrentItemChange(This,pdispMedia)( (This)->lpVtbl -> CurrentItemChange(This,pdispMedia) )
#define IWMPEvents_MediaCollectionChange(This)( (This)->lpVtbl -> MediaCollectionChange(This) )
#define IWMPEvents_MediaCollectionAttributeStringAdded(This,bstrAttribName,bstrAttribVal)( (This)->lpVtbl -> MediaCollectionAttributeStringAdded(This,bstrAttribName,bstrAttribVal) )
#define IWMPEvents_MediaCollectionAttributeStringRemoved(This,bstrAttribName,bstrAttribVal)( (This)->lpVtbl -> MediaCollectionAttributeStringRemoved(This,bstrAttribName,bstrAttribVal) )
#define IWMPEvents_MediaCollectionAttributeStringChanged(This,bstrAttribName,bstrOldAttribVal,bstrNewAttribVal)( (This)->lpVtbl -> MediaCollectionAttributeStringChanged(This,bstrAttribName,bstrOldAttribVal,bstrNewAttribVal) )
#define IWMPEvents_PlaylistCollectionChange(This)( (This)->lpVtbl -> PlaylistCollectionChange(This) )
#define IWMPEvents_PlaylistCollectionPlaylistAdded(This,bstrPlaylistName)( (This)->lpVtbl -> PlaylistCollectionPlaylistAdded(This,bstrPlaylistName) )
#define IWMPEvents_PlaylistCollectionPlaylistRemoved(This,bstrPlaylistName)( (This)->lpVtbl -> PlaylistCollectionPlaylistRemoved(This,bstrPlaylistName) )
#define IWMPEvents_PlaylistCollectionPlaylistSetAsDeleted(This,bstrPlaylistName,varfIsDeleted)( (This)->lpVtbl -> PlaylistCollectionPlaylistSetAsDeleted(This,bstrPlaylistName,varfIsDeleted) )
#define IWMPEvents_ModeChange(This,ModeName,NewValue)( (This)->lpVtbl -> ModeChange(This,ModeName,NewValue) )
#define IWMPEvents_MediaError(This,pMediaObject)( (This)->lpVtbl -> MediaError(This,pMediaObject) )
#define IWMPEvents_OpenPlaylistSwitch(This,pItem)( (This)->lpVtbl -> OpenPlaylistSwitch(This,pItem) )
#define IWMPEvents_DomainChange(This,strDomain)( (This)->lpVtbl -> DomainChange(This,strDomain) )
#define IWMPEvents_SwitchedToPlayerApplication(This)( (This)->lpVtbl -> SwitchedToPlayerApplication(This) )
#define IWMPEvents_SwitchedToControl(This)( (This)->lpVtbl -> SwitchedToControl(This) )
#define IWMPEvents_PlayerDockedStateChange(This)( (This)->lpVtbl -> PlayerDockedStateChange(This) )
#define IWMPEvents_PlayerReconnect(This)( (This)->lpVtbl -> PlayerReconnect(This) )
#define IWMPEvents_Click(This,nButton,nShiftState,fX,fY)( (This)->lpVtbl -> Click(This,nButton,nShiftState,fX,fY) )
#define IWMPEvents_DoubleClick(This,nButton,nShiftState,fX,fY)( (This)->lpVtbl -> DoubleClick(This,nButton,nShiftState,fX,fY) )
#define IWMPEvents_KeyDown(This,nKeyCode,nShiftState)( (This)->lpVtbl -> KeyDown(This,nKeyCode,nShiftState) )
#define IWMPEvents_KeyPress(This,nKeyAscii)( (This)->lpVtbl -> KeyPress(This,nKeyAscii) )
#define IWMPEvents_KeyUp(This,nKeyCode,nShiftState)( (This)->lpVtbl -> KeyUp(This,nKeyCode,nShiftState) )
#define IWMPEvents_MouseDown(This,nButton,nShiftState,fX,fY)( (This)->lpVtbl -> MouseDown(This,nButton,nShiftState,fX,fY) )
#define IWMPEvents_MouseMove(This,nButton,nShiftState,fX,fY)( (This)->lpVtbl -> MouseMove(This,nButton,nShiftState,fX,fY) )
#define IWMPEvents_MouseUp(This,nButton,nShiftState,fX,fY)( (This)->lpVtbl -> MouseUp(This,nButton,nShiftState,fX,fY) )
#endif
#endif
#ifndef __IWMPEvents2_INTERFACE_DEFINED__
#define __IWMPEvents2_INTERFACE_DEFINED__
extern const IID IID_IWMPEvents2;
typedef struct IWMPEvents2Vtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IWMPEvents2 * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IWMPEvents2 * This);
	ULONG(STDMETHODCALLTYPE * Release) (IWMPEvents2 * This);
	void (STDMETHODCALLTYPE * OpenStateChange) (IWMPEvents2 * This, long NewState);
	void (STDMETHODCALLTYPE * PlayStateChange) (IWMPEvents2 * This, long NewState);
	void (STDMETHODCALLTYPE * AudioLanguageChange) (IWMPEvents2 * This, long LangID);
	void (STDMETHODCALLTYPE * StatusChange) (IWMPEvents2 * This);
	void (STDMETHODCALLTYPE * ScriptCommand) (IWMPEvents2 * This, BSTR scType, BSTR Param);
	void (STDMETHODCALLTYPE * NewStream) (IWMPEvents2 * This);
	void (STDMETHODCALLTYPE * Disconnect) (IWMPEvents2 * This, long Result);
	void (STDMETHODCALLTYPE * Buffering) (IWMPEvents2 * This, VARIANT_BOOL Start);
	void (STDMETHODCALLTYPE * Error) (IWMPEvents2 * This);
	void (STDMETHODCALLTYPE * Warning) (IWMPEvents2 * This, long WarningType, long Param, BSTR Description);
	void (STDMETHODCALLTYPE * EndOfStream) (IWMPEvents2 * This, long Result);
	void (STDMETHODCALLTYPE * PositionChange) (IWMPEvents2 * This, double oldPosition, double newPosition);
	void (STDMETHODCALLTYPE * MarkerHit) (IWMPEvents2 * This, long MarkerNum);
	void (STDMETHODCALLTYPE * DurationUnitChange) (IWMPEvents2 * This, long NewDurationUnit);
	void (STDMETHODCALLTYPE * CdromMediaChange) (IWMPEvents2 * This, long CdromNum);
	void (STDMETHODCALLTYPE * PlaylistChange) (IWMPEvents2 * This, IDispatch * Playlist, WMPPlaylistChangeEventType change);
	void (STDMETHODCALLTYPE * CurrentPlaylistChange) (IWMPEvents2 * This, WMPPlaylistChangeEventType change);
	void (STDMETHODCALLTYPE * CurrentPlaylistItemAvailable) (IWMPEvents2 * This, BSTR bstrItemName);
	void (STDMETHODCALLTYPE * MediaChange) (IWMPEvents2 * This, IDispatch * Item);
	void (STDMETHODCALLTYPE * CurrentMediaItemAvailable) (IWMPEvents2 * This, BSTR bstrItemName);
	void (STDMETHODCALLTYPE * CurrentItemChange) (IWMPEvents2 * This, IDispatch * pdispMedia);
	void (STDMETHODCALLTYPE * MediaCollectionChange) (IWMPEvents2 * This);
	void (STDMETHODCALLTYPE * MediaCollectionAttributeStringAdded) (IWMPEvents2 * This, BSTR bstrAttribName, BSTR bstrAttribVal);
	void (STDMETHODCALLTYPE * MediaCollectionAttributeStringRemoved) (IWMPEvents2 * This, BSTR bstrAttribName, BSTR bstrAttribVal);
	void (STDMETHODCALLTYPE * MediaCollectionAttributeStringChanged) (IWMPEvents2 * This, BSTR bstrAttribName, BSTR bstrOldAttribVal, BSTR bstrNewAttribVal);
	void (STDMETHODCALLTYPE * PlaylistCollectionChange) (IWMPEvents2 * This);
	void (STDMETHODCALLTYPE * PlaylistCollectionPlaylistAdded) (IWMPEvents2 * This, BSTR bstrPlaylistName);
	void (STDMETHODCALLTYPE * PlaylistCollectionPlaylistRemoved) (IWMPEvents2 * This, BSTR bstrPlaylistName);
	void (STDMETHODCALLTYPE * PlaylistCollectionPlaylistSetAsDeleted) (IWMPEvents2 * This, BSTR bstrPlaylistName, VARIANT_BOOL varfIsDeleted);
	void (STDMETHODCALLTYPE * ModeChange) (IWMPEvents2 * This, BSTR ModeName, VARIANT_BOOL NewValue);
	void (STDMETHODCALLTYPE * MediaError) (IWMPEvents2 * This, IDispatch * pMediaObject);
	void (STDMETHODCALLTYPE * OpenPlaylistSwitch) (IWMPEvents2 * This, IDispatch * pItem);
	void (STDMETHODCALLTYPE * DomainChange) (IWMPEvents2 * This, BSTR strDomain);
	void (STDMETHODCALLTYPE * SwitchedToPlayerApplication) (IWMPEvents2 * This);
	void (STDMETHODCALLTYPE * SwitchedToControl) (IWMPEvents2 * This);
	void (STDMETHODCALLTYPE * PlayerDockedStateChange) (IWMPEvents2 * This);
	void (STDMETHODCALLTYPE * PlayerReconnect) (IWMPEvents2 * This);
	void (STDMETHODCALLTYPE * Click) (IWMPEvents2 * This, short nButton, short nShiftState, long fX, long fY);
	void (STDMETHODCALLTYPE * DoubleClick) (IWMPEvents2 * This, short nButton, short nShiftState, long fX, long fY);
	void (STDMETHODCALLTYPE * KeyDown) (IWMPEvents2 * This, short nKeyCode, short nShiftState);
	void (STDMETHODCALLTYPE * KeyPress) (IWMPEvents2 * This, short nKeyAscii);
	void (STDMETHODCALLTYPE * KeyUp) (IWMPEvents2 * This, short nKeyCode, short nShiftState);
	void (STDMETHODCALLTYPE * MouseDown) (IWMPEvents2 * This, short nButton, short nShiftState, long fX, long fY);
	void (STDMETHODCALLTYPE * MouseMove) (IWMPEvents2 * This, short nButton, short nShiftState, long fX, long fY);
	void (STDMETHODCALLTYPE * MouseUp) (IWMPEvents2 * This, short nButton, short nShiftState, long fX, long fY);
	void (STDMETHODCALLTYPE * DeviceConnect) (IWMPEvents2 * This, IWMPSyncDevice * pDevice);
	void (STDMETHODCALLTYPE * DeviceDisconnect) (IWMPEvents2 * This, IWMPSyncDevice * pDevice);
	void (STDMETHODCALLTYPE * DeviceStatusChange) (IWMPEvents2 * This, IWMPSyncDevice * pDevice, WMPDeviceStatus NewStatus);
	void (STDMETHODCALLTYPE * DeviceSyncStateChange) (IWMPEvents2 * This, IWMPSyncDevice * pDevice, WMPSyncState NewState);
	void (STDMETHODCALLTYPE * DeviceSyncError) (IWMPEvents2 * This, IWMPSyncDevice * pDevice, IDispatch * pMedia);
	void (STDMETHODCALLTYPE * CreatePartnershipComplete) (IWMPEvents2 * This, IWMPSyncDevice * pDevice, HRESULT hrResult);
	END_INTERFACE
}  IWMPEvents2Vtbl;
interface IWMPEvents2
{
	CONST_VTBL struct IWMPEvents2Vtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IWMPEvents2_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IWMPEvents2_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define IWMPEvents2_Release(This)( (This)->lpVtbl -> Release(This) )
#define IWMPEvents2_OpenStateChange(This,NewState)( (This)->lpVtbl -> OpenStateChange(This,NewState) )
#define IWMPEvents2_PlayStateChange(This,NewState)( (This)->lpVtbl -> PlayStateChange(This,NewState) )
#define IWMPEvents2_AudioLanguageChange(This,LangID)( (This)->lpVtbl -> AudioLanguageChange(This,LangID) )
#define IWMPEvents2_StatusChange(This)( (This)->lpVtbl -> StatusChange(This) )
#define IWMPEvents2_ScriptCommand(This,scType,Param)( (This)->lpVtbl -> ScriptCommand(This,scType,Param) )
#define IWMPEvents2_NewStream(This)( (This)->lpVtbl -> NewStream(This) )
#define IWMPEvents2_Disconnect(This,Result)( (This)->lpVtbl -> Disconnect(This,Result) )
#define IWMPEvents2_Buffering(This,Start)( (This)->lpVtbl -> Buffering(This,Start) )
#define IWMPEvents2_Error(This)( (This)->lpVtbl -> Error(This) )
#define IWMPEvents2_Warning(This,WarningType,Param,Description)( (This)->lpVtbl -> Warning(This,WarningType,Param,Description) )
#define IWMPEvents2_EndOfStream(This,Result)( (This)->lpVtbl -> EndOfStream(This,Result) )
#define IWMPEvents2_PositionChange(This,oldPosition,newPosition)( (This)->lpVtbl -> PositionChange(This,oldPosition,newPosition) )
#define IWMPEvents2_MarkerHit(This,MarkerNum)( (This)->lpVtbl -> MarkerHit(This,MarkerNum) )
#define IWMPEvents2_DurationUnitChange(This,NewDurationUnit)( (This)->lpVtbl -> DurationUnitChange(This,NewDurationUnit) )
#define IWMPEvents2_CdromMediaChange(This,CdromNum)( (This)->lpVtbl -> CdromMediaChange(This,CdromNum) )
#define IWMPEvents2_PlaylistChange(This,Playlist,change)( (This)->lpVtbl -> PlaylistChange(This,Playlist,change) )
#define IWMPEvents2_CurrentPlaylistChange(This,change)( (This)->lpVtbl -> CurrentPlaylistChange(This,change) )
#define IWMPEvents2_CurrentPlaylistItemAvailable(This,bstrItemName)( (This)->lpVtbl -> CurrentPlaylistItemAvailable(This,bstrItemName) )
#define IWMPEvents2_MediaChange(This,Item)( (This)->lpVtbl -> MediaChange(This,Item) )
#define IWMPEvents2_CurrentMediaItemAvailable(This,bstrItemName)( (This)->lpVtbl -> CurrentMediaItemAvailable(This,bstrItemName) )
#define IWMPEvents2_CurrentItemChange(This,pdispMedia)( (This)->lpVtbl -> CurrentItemChange(This,pdispMedia) )
#define IWMPEvents2_MediaCollectionChange(This)( (This)->lpVtbl -> MediaCollectionChange(This) )
#define IWMPEvents2_MediaCollectionAttributeStringAdded(This,bstrAttribName,bstrAttribVal)( (This)->lpVtbl -> MediaCollectionAttributeStringAdded(This,bstrAttribName,bstrAttribVal) )
#define IWMPEvents2_MediaCollectionAttributeStringRemoved(This,bstrAttribName,bstrAttribVal)( (This)->lpVtbl -> MediaCollectionAttributeStringRemoved(This,bstrAttribName,bstrAttribVal) )
#define IWMPEvents2_MediaCollectionAttributeStringChanged(This,bstrAttribName,bstrOldAttribVal,bstrNewAttribVal)( (This)->lpVtbl -> MediaCollectionAttributeStringChanged(This,bstrAttribName,bstrOldAttribVal,bstrNewAttribVal) )
#define IWMPEvents2_PlaylistCollectionChange(This)( (This)->lpVtbl -> PlaylistCollectionChange(This) )
#define IWMPEvents2_PlaylistCollectionPlaylistAdded(This,bstrPlaylistName)( (This)->lpVtbl -> PlaylistCollectionPlaylistAdded(This,bstrPlaylistName) )
#define IWMPEvents2_PlaylistCollectionPlaylistRemoved(This,bstrPlaylistName)( (This)->lpVtbl -> PlaylistCollectionPlaylistRemoved(This,bstrPlaylistName) )
#define IWMPEvents2_PlaylistCollectionPlaylistSetAsDeleted(This,bstrPlaylistName,varfIsDeleted)( (This)->lpVtbl -> PlaylistCollectionPlaylistSetAsDeleted(This,bstrPlaylistName,varfIsDeleted) )
#define IWMPEvents2_ModeChange(This,ModeName,NewValue)( (This)->lpVtbl -> ModeChange(This,ModeName,NewValue) )
#define IWMPEvents2_MediaError(This,pMediaObject)( (This)->lpVtbl -> MediaError(This,pMediaObject) )
#define IWMPEvents2_OpenPlaylistSwitch(This,pItem)( (This)->lpVtbl -> OpenPlaylistSwitch(This,pItem) )
#define IWMPEvents2_DomainChange(This,strDomain)( (This)->lpVtbl -> DomainChange(This,strDomain) )
#define IWMPEvents2_SwitchedToPlayerApplication(This)( (This)->lpVtbl -> SwitchedToPlayerApplication(This) )
#define IWMPEvents2_SwitchedToControl(This)( (This)->lpVtbl -> SwitchedToControl(This) )
#define IWMPEvents2_PlayerDockedStateChange(This)( (This)->lpVtbl -> PlayerDockedStateChange(This) )
#define IWMPEvents2_PlayerReconnect(This)( (This)->lpVtbl -> PlayerReconnect(This) )
#define IWMPEvents2_Click(This,nButton,nShiftState,fX,fY)( (This)->lpVtbl -> Click(This,nButton,nShiftState,fX,fY) )
#define IWMPEvents2_DoubleClick(This,nButton,nShiftState,fX,fY)( (This)->lpVtbl -> DoubleClick(This,nButton,nShiftState,fX,fY) )
#define IWMPEvents2_KeyDown(This,nKeyCode,nShiftState)( (This)->lpVtbl -> KeyDown(This,nKeyCode,nShiftState) )
#define IWMPEvents2_KeyPress(This,nKeyAscii)( (This)->lpVtbl -> KeyPress(This,nKeyAscii) )
#define IWMPEvents2_KeyUp(This,nKeyCode,nShiftState)( (This)->lpVtbl -> KeyUp(This,nKeyCode,nShiftState) )
#define IWMPEvents2_MouseDown(This,nButton,nShiftState,fX,fY)( (This)->lpVtbl -> MouseDown(This,nButton,nShiftState,fX,fY) )
#define IWMPEvents2_MouseMove(This,nButton,nShiftState,fX,fY)( (This)->lpVtbl -> MouseMove(This,nButton,nShiftState,fX,fY) )
#define IWMPEvents2_MouseUp(This,nButton,nShiftState,fX,fY)( (This)->lpVtbl -> MouseUp(This,nButton,nShiftState,fX,fY) )
#define IWMPEvents2_DeviceConnect(This,pDevice)( (This)->lpVtbl -> DeviceConnect(This,pDevice) )
#define IWMPEvents2_DeviceDisconnect(This,pDevice)( (This)->lpVtbl -> DeviceDisconnect(This,pDevice) )
#define IWMPEvents2_DeviceStatusChange(This,pDevice,NewStatus)( (This)->lpVtbl -> DeviceStatusChange(This,pDevice,NewStatus) )
#define IWMPEvents2_DeviceSyncStateChange(This,pDevice,NewState)( (This)->lpVtbl -> DeviceSyncStateChange(This,pDevice,NewState) )
#define IWMPEvents2_DeviceSyncError(This,pDevice,pMedia)( (This)->lpVtbl -> DeviceSyncError(This,pDevice,pMedia) )
#define IWMPEvents2_CreatePartnershipComplete(This,pDevice,hrResult)( (This)->lpVtbl -> CreatePartnershipComplete(This,pDevice,hrResult) )
#endif
#endif
#ifndef __IWMPEvents3_INTERFACE_DEFINED__
#define __IWMPEvents3_INTERFACE_DEFINED__
extern const IID IID_IWMPEvents3;
typedef struct IWMPEvents3Vtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IWMPEvents3 * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IWMPEvents3 * This);
	ULONG(STDMETHODCALLTYPE * Release) (IWMPEvents3 * This);
	void (STDMETHODCALLTYPE * OpenStateChange) (IWMPEvents3 * This, long NewState);
	void (STDMETHODCALLTYPE * PlayStateChange) (IWMPEvents3 * This, long NewState);
	void (STDMETHODCALLTYPE * AudioLanguageChange) (IWMPEvents3 * This, long LangID);
	void (STDMETHODCALLTYPE * StatusChange) (IWMPEvents3 * This);
	void (STDMETHODCALLTYPE * ScriptCommand) (IWMPEvents3 * This, BSTR scType, BSTR Param);
	void (STDMETHODCALLTYPE * NewStream) (IWMPEvents3 * This);
	void (STDMETHODCALLTYPE * Disconnect) (IWMPEvents3 * This, long Result);
	void (STDMETHODCALLTYPE * Buffering) (IWMPEvents3 * This, VARIANT_BOOL Start);
	void (STDMETHODCALLTYPE * Error) (IWMPEvents3 * This);
	void (STDMETHODCALLTYPE * Warning) (IWMPEvents3 * This, long WarningType, long Param, BSTR Description);
	void (STDMETHODCALLTYPE * EndOfStream) (IWMPEvents3 * This, long Result);
	void (STDMETHODCALLTYPE * PositionChange) (IWMPEvents3 * This, double oldPosition, double newPosition);
	void (STDMETHODCALLTYPE * MarkerHit) (IWMPEvents3 * This, long MarkerNum);
	void (STDMETHODCALLTYPE * DurationUnitChange) (IWMPEvents3 * This, long NewDurationUnit);
	void (STDMETHODCALLTYPE * CdromMediaChange) (IWMPEvents3 * This, long CdromNum);
	void (STDMETHODCALLTYPE * PlaylistChange) (IWMPEvents3 * This, IDispatch * Playlist, WMPPlaylistChangeEventType change);
	void (STDMETHODCALLTYPE * CurrentPlaylistChange) (IWMPEvents3 * This, WMPPlaylistChangeEventType change);
	void (STDMETHODCALLTYPE * CurrentPlaylistItemAvailable) (IWMPEvents3 * This, BSTR bstrItemName);
	void (STDMETHODCALLTYPE * MediaChange) (IWMPEvents3 * This, IDispatch * Item);
	void (STDMETHODCALLTYPE * CurrentMediaItemAvailable) (IWMPEvents3 * This, BSTR bstrItemName);
	void (STDMETHODCALLTYPE * CurrentItemChange) (IWMPEvents3 * This, IDispatch * pdispMedia);
	void (STDMETHODCALLTYPE * MediaCollectionChange) (IWMPEvents3 * This);
	void (STDMETHODCALLTYPE * MediaCollectionAttributeStringAdded) (IWMPEvents3 * This, BSTR bstrAttribName, BSTR bstrAttribVal);
	void (STDMETHODCALLTYPE * MediaCollectionAttributeStringRemoved) (IWMPEvents3 * This, BSTR bstrAttribName, BSTR bstrAttribVal);
	void (STDMETHODCALLTYPE * MediaCollectionAttributeStringChanged) (IWMPEvents3 * This, BSTR bstrAttribName, BSTR bstrOldAttribVal, BSTR bstrNewAttribVal);
	void (STDMETHODCALLTYPE * PlaylistCollectionChange) (IWMPEvents3 * This);
	void (STDMETHODCALLTYPE * PlaylistCollectionPlaylistAdded) (IWMPEvents3 * This, BSTR bstrPlaylistName);
	void (STDMETHODCALLTYPE * PlaylistCollectionPlaylistRemoved) (IWMPEvents3 * This, BSTR bstrPlaylistName);
	void (STDMETHODCALLTYPE * PlaylistCollectionPlaylistSetAsDeleted) (IWMPEvents3 * This, BSTR bstrPlaylistName, VARIANT_BOOL varfIsDeleted);
	void (STDMETHODCALLTYPE * ModeChange) (IWMPEvents3 * This, BSTR ModeName, VARIANT_BOOL NewValue);
	void (STDMETHODCALLTYPE * MediaError) (IWMPEvents3 * This, IDispatch * pMediaObject);
	void (STDMETHODCALLTYPE * OpenPlaylistSwitch) (IWMPEvents3 * This, IDispatch * pItem);
	void (STDMETHODCALLTYPE * DomainChange) (IWMPEvents3 * This, BSTR strDomain);
	void (STDMETHODCALLTYPE * SwitchedToPlayerApplication) (IWMPEvents3 * This);
	void (STDMETHODCALLTYPE * SwitchedToControl) (IWMPEvents3 * This);
	void (STDMETHODCALLTYPE * PlayerDockedStateChange) (IWMPEvents3 * This);
	void (STDMETHODCALLTYPE * PlayerReconnect) (IWMPEvents3 * This);
	void (STDMETHODCALLTYPE * Click) (IWMPEvents3 * This, short nButton, short nShiftState, long fX, long fY);
	void (STDMETHODCALLTYPE * DoubleClick) (IWMPEvents3 * This, short nButton, short nShiftState, long fX, long fY);
	void (STDMETHODCALLTYPE * KeyDown) (IWMPEvents3 * This, short nKeyCode, short nShiftState);
	void (STDMETHODCALLTYPE * KeyPress) (IWMPEvents3 * This, short nKeyAscii);
	void (STDMETHODCALLTYPE * KeyUp) (IWMPEvents3 * This, short nKeyCode, short nShiftState);
	void (STDMETHODCALLTYPE * MouseDown) (IWMPEvents3 * This, short nButton, short nShiftState, long fX, long fY);
	void (STDMETHODCALLTYPE * MouseMove) (IWMPEvents3 * This, short nButton, short nShiftState, long fX, long fY);
	void (STDMETHODCALLTYPE * MouseUp) (IWMPEvents3 * This, short nButton, short nShiftState, long fX, long fY);
	void (STDMETHODCALLTYPE * DeviceConnect) (IWMPEvents3 * This, IWMPSyncDevice * pDevice);
	void (STDMETHODCALLTYPE * DeviceDisconnect) (IWMPEvents3 * This, IWMPSyncDevice * pDevice);
	void (STDMETHODCALLTYPE * DeviceStatusChange) (IWMPEvents3 * This, IWMPSyncDevice * pDevice, WMPDeviceStatus NewStatus);
	void (STDMETHODCALLTYPE * DeviceSyncStateChange) (IWMPEvents3 * This, IWMPSyncDevice * pDevice, WMPSyncState NewState);
	void (STDMETHODCALLTYPE * DeviceSyncError) (IWMPEvents3 * This, IWMPSyncDevice * pDevice, IDispatch * pMedia);
	void (STDMETHODCALLTYPE * CreatePartnershipComplete) (IWMPEvents3 * This, IWMPSyncDevice * pDevice, HRESULT hrResult);
	void (STDMETHODCALLTYPE * CdromRipStateChange) (IWMPEvents3 * This, IWMPCdromRip * pCdromRip, WMPRipState wmprs);
	void (STDMETHODCALLTYPE * CdromRipMediaError) (IWMPEvents3 * This, IWMPCdromRip * pCdromRip, IDispatch * pMedia);
	void (STDMETHODCALLTYPE * CdromBurnStateChange) (IWMPEvents3 * This, IWMPCdromBurn * pCdromBurn, WMPBurnState wmpbs);
	void (STDMETHODCALLTYPE * CdromBurnMediaError) (IWMPEvents3 * This, IWMPCdromBurn * pCdromBurn, IDispatch * pMedia);
	void (STDMETHODCALLTYPE * CdromBurnError) (IWMPEvents3 * This, IWMPCdromBurn * pCdromBurn, HRESULT hrError);
	void (STDMETHODCALLTYPE * LibraryConnect) (IWMPEvents3 * This, IWMPLibrary * pLibrary);
	void (STDMETHODCALLTYPE * LibraryDisconnect) (IWMPEvents3 * This, IWMPLibrary * pLibrary);
	void (STDMETHODCALLTYPE * FolderScanStateChange) (IWMPEvents3 * This, WMPFolderScanState wmpfss);
	void (STDMETHODCALLTYPE * StringCollectionChange) (IWMPEvents3 * This, IDispatch * pdispStringCollection, WMPStringCollectionChangeEventType change, long lCollectionIndex);
	void (STDMETHODCALLTYPE * MediaCollectionMediaAdded) (IWMPEvents3 * This, IDispatch * pdispMedia);
	void (STDMETHODCALLTYPE * MediaCollectionMediaRemoved) (IWMPEvents3 * This, IDispatch * pdispMedia);
	END_INTERFACE
}  IWMPEvents3Vtbl;
interface IWMPEvents3
{
	CONST_VTBL struct IWMPEvents3Vtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IWMPEvents3_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IWMPEvents3_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define IWMPEvents3_Release(This)( (This)->lpVtbl -> Release(This) )
#define IWMPEvents3_OpenStateChange(This,NewState)( (This)->lpVtbl -> OpenStateChange(This,NewState) )
#define IWMPEvents3_PlayStateChange(This,NewState)( (This)->lpVtbl -> PlayStateChange(This,NewState) )
#define IWMPEvents3_AudioLanguageChange(This,LangID)( (This)->lpVtbl -> AudioLanguageChange(This,LangID) )
#define IWMPEvents3_StatusChange(This)( (This)->lpVtbl -> StatusChange(This) )
#define IWMPEvents3_ScriptCommand(This,scType,Param)( (This)->lpVtbl -> ScriptCommand(This,scType,Param) )
#define IWMPEvents3_NewStream(This)( (This)->lpVtbl -> NewStream(This) )
#define IWMPEvents3_Disconnect(This,Result)( (This)->lpVtbl -> Disconnect(This,Result) )
#define IWMPEvents3_Buffering(This,Start)( (This)->lpVtbl -> Buffering(This,Start) )
#define IWMPEvents3_Error(This)( (This)->lpVtbl -> Error(This) )
#define IWMPEvents3_Warning(This,WarningType,Param,Description)( (This)->lpVtbl -> Warning(This,WarningType,Param,Description) )
#define IWMPEvents3_EndOfStream(This,Result)( (This)->lpVtbl -> EndOfStream(This,Result) )
#define IWMPEvents3_PositionChange(This,oldPosition,newPosition)( (This)->lpVtbl -> PositionChange(This,oldPosition,newPosition) )
#define IWMPEvents3_MarkerHit(This,MarkerNum)( (This)->lpVtbl -> MarkerHit(This,MarkerNum) )
#define IWMPEvents3_DurationUnitChange(This,NewDurationUnit)( (This)->lpVtbl -> DurationUnitChange(This,NewDurationUnit) )
#define IWMPEvents3_CdromMediaChange(This,CdromNum)( (This)->lpVtbl -> CdromMediaChange(This,CdromNum) )
#define IWMPEvents3_PlaylistChange(This,Playlist,change)( (This)->lpVtbl -> PlaylistChange(This,Playlist,change) )
#define IWMPEvents3_CurrentPlaylistChange(This,change)( (This)->lpVtbl -> CurrentPlaylistChange(This,change) )
#define IWMPEvents3_CurrentPlaylistItemAvailable(This,bstrItemName)( (This)->lpVtbl -> CurrentPlaylistItemAvailable(This,bstrItemName) )
#define IWMPEvents3_MediaChange(This,Item)( (This)->lpVtbl -> MediaChange(This,Item) )
#define IWMPEvents3_CurrentMediaItemAvailable(This,bstrItemName)( (This)->lpVtbl -> CurrentMediaItemAvailable(This,bstrItemName) )
#define IWMPEvents3_CurrentItemChange(This,pdispMedia)( (This)->lpVtbl -> CurrentItemChange(This,pdispMedia) )
#define IWMPEvents3_MediaCollectionChange(This)( (This)->lpVtbl -> MediaCollectionChange(This) )
#define IWMPEvents3_MediaCollectionAttributeStringAdded(This,bstrAttribName,bstrAttribVal)( (This)->lpVtbl -> MediaCollectionAttributeStringAdded(This,bstrAttribName,bstrAttribVal) )
#define IWMPEvents3_MediaCollectionAttributeStringRemoved(This,bstrAttribName,bstrAttribVal)( (This)->lpVtbl -> MediaCollectionAttributeStringRemoved(This,bstrAttribName,bstrAttribVal) )
#define IWMPEvents3_MediaCollectionAttributeStringChanged(This,bstrAttribName,bstrOldAttribVal,bstrNewAttribVal)( (This)->lpVtbl -> MediaCollectionAttributeStringChanged(This,bstrAttribName,bstrOldAttribVal,bstrNewAttribVal) )
#define IWMPEvents3_PlaylistCollectionChange(This)( (This)->lpVtbl -> PlaylistCollectionChange(This) )
#define IWMPEvents3_PlaylistCollectionPlaylistAdded(This,bstrPlaylistName)( (This)->lpVtbl -> PlaylistCollectionPlaylistAdded(This,bstrPlaylistName) )
#define IWMPEvents3_PlaylistCollectionPlaylistRemoved(This,bstrPlaylistName)( (This)->lpVtbl -> PlaylistCollectionPlaylistRemoved(This,bstrPlaylistName) )
#define IWMPEvents3_PlaylistCollectionPlaylistSetAsDeleted(This,bstrPlaylistName,varfIsDeleted)( (This)->lpVtbl -> PlaylistCollectionPlaylistSetAsDeleted(This,bstrPlaylistName,varfIsDeleted) )
#define IWMPEvents3_ModeChange(This,ModeName,NewValue)( (This)->lpVtbl -> ModeChange(This,ModeName,NewValue) )
#define IWMPEvents3_MediaError(This,pMediaObject)( (This)->lpVtbl -> MediaError(This,pMediaObject) )
#define IWMPEvents3_OpenPlaylistSwitch(This,pItem)( (This)->lpVtbl -> OpenPlaylistSwitch(This,pItem) )
#define IWMPEvents3_DomainChange(This,strDomain)( (This)->lpVtbl -> DomainChange(This,strDomain) )
#define IWMPEvents3_SwitchedToPlayerApplication(This)( (This)->lpVtbl -> SwitchedToPlayerApplication(This) )
#define IWMPEvents3_SwitchedToControl(This)( (This)->lpVtbl -> SwitchedToControl(This) )
#define IWMPEvents3_PlayerDockedStateChange(This)( (This)->lpVtbl -> PlayerDockedStateChange(This) )
#define IWMPEvents3_PlayerReconnect(This)( (This)->lpVtbl -> PlayerReconnect(This) )
#define IWMPEvents3_Click(This,nButton,nShiftState,fX,fY)( (This)->lpVtbl -> Click(This,nButton,nShiftState,fX,fY) )
#define IWMPEvents3_DoubleClick(This,nButton,nShiftState,fX,fY)( (This)->lpVtbl -> DoubleClick(This,nButton,nShiftState,fX,fY) )
#define IWMPEvents3_KeyDown(This,nKeyCode,nShiftState)( (This)->lpVtbl -> KeyDown(This,nKeyCode,nShiftState) )
#define IWMPEvents3_KeyPress(This,nKeyAscii)( (This)->lpVtbl -> KeyPress(This,nKeyAscii) )
#define IWMPEvents3_KeyUp(This,nKeyCode,nShiftState)( (This)->lpVtbl -> KeyUp(This,nKeyCode,nShiftState) )
#define IWMPEvents3_MouseDown(This,nButton,nShiftState,fX,fY)( (This)->lpVtbl -> MouseDown(This,nButton,nShiftState,fX,fY) )
#define IWMPEvents3_MouseMove(This,nButton,nShiftState,fX,fY)( (This)->lpVtbl -> MouseMove(This,nButton,nShiftState,fX,fY) )
#define IWMPEvents3_MouseUp(This,nButton,nShiftState,fX,fY)( (This)->lpVtbl -> MouseUp(This,nButton,nShiftState,fX,fY) )
#define IWMPEvents3_DeviceConnect(This,pDevice)( (This)->lpVtbl -> DeviceConnect(This,pDevice) )
#define IWMPEvents3_DeviceDisconnect(This,pDevice)( (This)->lpVtbl -> DeviceDisconnect(This,pDevice) )
#define IWMPEvents3_DeviceStatusChange(This,pDevice,NewStatus)( (This)->lpVtbl -> DeviceStatusChange(This,pDevice,NewStatus) )
#define IWMPEvents3_DeviceSyncStateChange(This,pDevice,NewState)( (This)->lpVtbl -> DeviceSyncStateChange(This,pDevice,NewState) )
#define IWMPEvents3_DeviceSyncError(This,pDevice,pMedia)( (This)->lpVtbl -> DeviceSyncError(This,pDevice,pMedia) )
#define IWMPEvents3_CreatePartnershipComplete(This,pDevice,hrResult)( (This)->lpVtbl -> CreatePartnershipComplete(This,pDevice,hrResult) )
#define IWMPEvents3_CdromRipStateChange(This,pCdromRip,wmprs)( (This)->lpVtbl -> CdromRipStateChange(This,pCdromRip,wmprs) )
#define IWMPEvents3_CdromRipMediaError(This,pCdromRip,pMedia)( (This)->lpVtbl -> CdromRipMediaError(This,pCdromRip,pMedia) )
#define IWMPEvents3_CdromBurnStateChange(This,pCdromBurn,wmpbs)( (This)->lpVtbl -> CdromBurnStateChange(This,pCdromBurn,wmpbs) )
#define IWMPEvents3_CdromBurnMediaError(This,pCdromBurn,pMedia)( (This)->lpVtbl -> CdromBurnMediaError(This,pCdromBurn,pMedia) )
#define IWMPEvents3_CdromBurnError(This,pCdromBurn,hrError)( (This)->lpVtbl -> CdromBurnError(This,pCdromBurn,hrError) )
#define IWMPEvents3_LibraryConnect(This,pLibrary)( (This)->lpVtbl -> LibraryConnect(This,pLibrary) )
#define IWMPEvents3_LibraryDisconnect(This,pLibrary)( (This)->lpVtbl -> LibraryDisconnect(This,pLibrary) )
#define IWMPEvents3_FolderScanStateChange(This,wmpfss)( (This)->lpVtbl -> FolderScanStateChange(This,wmpfss) )
#define IWMPEvents3_StringCollectionChange(This,pdispStringCollection,change,lCollectionIndex)( (This)->lpVtbl -> StringCollectionChange(This,pdispStringCollection,change,lCollectionIndex) )
#define IWMPEvents3_MediaCollectionMediaAdded(This,pdispMedia)( (This)->lpVtbl -> MediaCollectionMediaAdded(This,pdispMedia) )
#define IWMPEvents3_MediaCollectionMediaRemoved(This,pdispMedia)( (This)->lpVtbl -> MediaCollectionMediaRemoved(This,pdispMedia) )
#endif
#endif
#ifndef __IWMPEvents4_INTERFACE_DEFINED__
#define __IWMPEvents4_INTERFACE_DEFINED__
extern const IID IID_IWMPEvents4;
typedef struct IWMPEvents4Vtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IWMPEvents4 * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IWMPEvents4 * This);
	ULONG(STDMETHODCALLTYPE * Release) (IWMPEvents4 * This);
	void (STDMETHODCALLTYPE * OpenStateChange) (IWMPEvents4 * This, long NewState);
	void (STDMETHODCALLTYPE * PlayStateChange) (IWMPEvents4 * This, long NewState);
	void (STDMETHODCALLTYPE * AudioLanguageChange) (IWMPEvents4 * This, long LangID);
	void (STDMETHODCALLTYPE * StatusChange) (IWMPEvents4 * This);
	void (STDMETHODCALLTYPE * ScriptCommand) (IWMPEvents4 * This, BSTR scType, BSTR Param);
	void (STDMETHODCALLTYPE * NewStream) (IWMPEvents4 * This);
	void (STDMETHODCALLTYPE * Disconnect) (IWMPEvents4 * This, long Result);
	void (STDMETHODCALLTYPE * Buffering) (IWMPEvents4 * This, VARIANT_BOOL Start);
	void (STDMETHODCALLTYPE * Error) (IWMPEvents4 * This);
	void (STDMETHODCALLTYPE * Warning) (IWMPEvents4 * This, long WarningType, long Param, BSTR Description);
	void (STDMETHODCALLTYPE * EndOfStream) (IWMPEvents4 * This, long Result);
	void (STDMETHODCALLTYPE * PositionChange) (IWMPEvents4 * This, double oldPosition, double newPosition);
	void (STDMETHODCALLTYPE * MarkerHit) (IWMPEvents4 * This, long MarkerNum);
	void (STDMETHODCALLTYPE * DurationUnitChange) (IWMPEvents4 * This, long NewDurationUnit);
	void (STDMETHODCALLTYPE * CdromMediaChange) (IWMPEvents4 * This, long CdromNum);
	void (STDMETHODCALLTYPE * PlaylistChange) (IWMPEvents4 * This, IDispatch * Playlist, WMPPlaylistChangeEventType change);
	void (STDMETHODCALLTYPE * CurrentPlaylistChange) (IWMPEvents4 * This, WMPPlaylistChangeEventType change);
	void (STDMETHODCALLTYPE * CurrentPlaylistItemAvailable) (IWMPEvents4 * This, BSTR bstrItemName);
	void (STDMETHODCALLTYPE * MediaChange) (IWMPEvents4 * This, IDispatch * Item);
	void (STDMETHODCALLTYPE * CurrentMediaItemAvailable) (IWMPEvents4 * This, BSTR bstrItemName);
	void (STDMETHODCALLTYPE * CurrentItemChange) (IWMPEvents4 * This, IDispatch * pdispMedia);
	void (STDMETHODCALLTYPE * MediaCollectionChange) (IWMPEvents4 * This);
	void (STDMETHODCALLTYPE * MediaCollectionAttributeStringAdded) (IWMPEvents4 * This, BSTR bstrAttribName, BSTR bstrAttribVal);
	void (STDMETHODCALLTYPE * MediaCollectionAttributeStringRemoved) (IWMPEvents4 * This, BSTR bstrAttribName, BSTR bstrAttribVal);
	void (STDMETHODCALLTYPE * MediaCollectionAttributeStringChanged) (IWMPEvents4 * This, BSTR bstrAttribName, BSTR bstrOldAttribVal, BSTR bstrNewAttribVal);
	void (STDMETHODCALLTYPE * PlaylistCollectionChange) (IWMPEvents4 * This);
	void (STDMETHODCALLTYPE * PlaylistCollectionPlaylistAdded) (IWMPEvents4 * This, BSTR bstrPlaylistName);
	void (STDMETHODCALLTYPE * PlaylistCollectionPlaylistRemoved) (IWMPEvents4 * This, BSTR bstrPlaylistName);
	void (STDMETHODCALLTYPE * PlaylistCollectionPlaylistSetAsDeleted) (IWMPEvents4 * This, BSTR bstrPlaylistName, VARIANT_BOOL varfIsDeleted);
	void (STDMETHODCALLTYPE * ModeChange) (IWMPEvents4 * This, BSTR ModeName, VARIANT_BOOL NewValue);
	void (STDMETHODCALLTYPE * MediaError) (IWMPEvents4 * This, IDispatch * pMediaObject);
	void (STDMETHODCALLTYPE * OpenPlaylistSwitch) (IWMPEvents4 * This, IDispatch * pItem);
	void (STDMETHODCALLTYPE * DomainChange) (IWMPEvents4 * This, BSTR strDomain);
	void (STDMETHODCALLTYPE * SwitchedToPlayerApplication) (IWMPEvents4 * This);
	void (STDMETHODCALLTYPE * SwitchedToControl) (IWMPEvents4 * This);
	void (STDMETHODCALLTYPE * PlayerDockedStateChange) (IWMPEvents4 * This);
	void (STDMETHODCALLTYPE * PlayerReconnect) (IWMPEvents4 * This);
	void (STDMETHODCALLTYPE * Click) (IWMPEvents4 * This, short nButton, short nShiftState, long fX, long fY);
	void (STDMETHODCALLTYPE * DoubleClick) (IWMPEvents4 * This, short nButton, short nShiftState, long fX, long fY);
	void (STDMETHODCALLTYPE * KeyDown) (IWMPEvents4 * This, short nKeyCode, short nShiftState);
	void (STDMETHODCALLTYPE * KeyPress) (IWMPEvents4 * This, short nKeyAscii);
	void (STDMETHODCALLTYPE * KeyUp) (IWMPEvents4 * This, short nKeyCode, short nShiftState);
	void (STDMETHODCALLTYPE * MouseDown) (IWMPEvents4 * This, short nButton, short nShiftState, long fX, long fY);
	void (STDMETHODCALLTYPE * MouseMove) (IWMPEvents4 * This, short nButton, short nShiftState, long fX, long fY);
	void (STDMETHODCALLTYPE * MouseUp) (IWMPEvents4 * This, short nButton, short nShiftState, long fX, long fY);
	void (STDMETHODCALLTYPE * DeviceConnect) (IWMPEvents4 * This, IWMPSyncDevice * pDevice);
	void (STDMETHODCALLTYPE * DeviceDisconnect) (IWMPEvents4 * This, IWMPSyncDevice * pDevice);
	void (STDMETHODCALLTYPE * DeviceStatusChange) (IWMPEvents4 * This, IWMPSyncDevice * pDevice, WMPDeviceStatus NewStatus);
	void (STDMETHODCALLTYPE * DeviceSyncStateChange) (IWMPEvents4 * This, IWMPSyncDevice * pDevice, WMPSyncState NewState);
	void (STDMETHODCALLTYPE * DeviceSyncError) (IWMPEvents4 * This, IWMPSyncDevice * pDevice, IDispatch * pMedia);
	void (STDMETHODCALLTYPE * CreatePartnershipComplete) (IWMPEvents4 * This, IWMPSyncDevice * pDevice, HRESULT hrResult);
	void (STDMETHODCALLTYPE * CdromRipStateChange) (IWMPEvents4 * This, IWMPCdromRip * pCdromRip, WMPRipState wmprs);
	void (STDMETHODCALLTYPE * CdromRipMediaError) (IWMPEvents4 * This, IWMPCdromRip * pCdromRip, IDispatch * pMedia);
	void (STDMETHODCALLTYPE * CdromBurnStateChange) (IWMPEvents4 * This, IWMPCdromBurn * pCdromBurn, WMPBurnState wmpbs);
	void (STDMETHODCALLTYPE * CdromBurnMediaError) (IWMPEvents4 * This, IWMPCdromBurn * pCdromBurn, IDispatch * pMedia);
	void (STDMETHODCALLTYPE * CdromBurnError) (IWMPEvents4 * This, IWMPCdromBurn * pCdromBurn, HRESULT hrError);
	void (STDMETHODCALLTYPE * LibraryConnect) (IWMPEvents4 * This, IWMPLibrary * pLibrary);
	void (STDMETHODCALLTYPE * LibraryDisconnect) (IWMPEvents4 * This, IWMPLibrary * pLibrary);
	void (STDMETHODCALLTYPE * FolderScanStateChange) (IWMPEvents4 * This, WMPFolderScanState wmpfss);
	void (STDMETHODCALLTYPE * StringCollectionChange) (IWMPEvents4 * This, IDispatch * pdispStringCollection, WMPStringCollectionChangeEventType change, long lCollectionIndex);
	void (STDMETHODCALLTYPE * MediaCollectionMediaAdded) (IWMPEvents4 * This, IDispatch * pdispMedia);
	void (STDMETHODCALLTYPE * MediaCollectionMediaRemoved) (IWMPEvents4 * This, IDispatch * pdispMedia);
	void (STDMETHODCALLTYPE * DeviceEstimation) (IWMPEvents4 * This, IWMPSyncDevice * pDevice, HRESULT hrResult, __int64 qwEstimatedUsedSpace, __int64 qwEstimatedSpace);
	END_INTERFACE
}  IWMPEvents4Vtbl;
interface IWMPEvents4
{
	CONST_VTBL struct IWMPEvents4Vtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IWMPEvents4_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IWMPEvents4_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define IWMPEvents4_Release(This)( (This)->lpVtbl -> Release(This) )
#define IWMPEvents4_OpenStateChange(This,NewState)( (This)->lpVtbl -> OpenStateChange(This,NewState) )
#define IWMPEvents4_PlayStateChange(This,NewState)( (This)->lpVtbl -> PlayStateChange(This,NewState) )
#define IWMPEvents4_AudioLanguageChange(This,LangID)( (This)->lpVtbl -> AudioLanguageChange(This,LangID) )
#define IWMPEvents4_StatusChange(This)( (This)->lpVtbl -> StatusChange(This) )
#define IWMPEvents4_ScriptCommand(This,scType,Param)( (This)->lpVtbl -> ScriptCommand(This,scType,Param) )
#define IWMPEvents4_NewStream(This)( (This)->lpVtbl -> NewStream(This) )
#define IWMPEvents4_Disconnect(This,Result)( (This)->lpVtbl -> Disconnect(This,Result) )
#define IWMPEvents4_Buffering(This,Start)( (This)->lpVtbl -> Buffering(This,Start) )
#define IWMPEvents4_Error(This)( (This)->lpVtbl -> Error(This) )
#define IWMPEvents4_Warning(This,WarningType,Param,Description)( (This)->lpVtbl -> Warning(This,WarningType,Param,Description) )
#define IWMPEvents4_EndOfStream(This,Result)( (This)->lpVtbl -> EndOfStream(This,Result) )
#define IWMPEvents4_PositionChange(This,oldPosition,newPosition)( (This)->lpVtbl -> PositionChange(This,oldPosition,newPosition) )
#define IWMPEvents4_MarkerHit(This,MarkerNum)( (This)->lpVtbl -> MarkerHit(This,MarkerNum) )
#define IWMPEvents4_DurationUnitChange(This,NewDurationUnit)( (This)->lpVtbl -> DurationUnitChange(This,NewDurationUnit) )
#define IWMPEvents4_CdromMediaChange(This,CdromNum)( (This)->lpVtbl -> CdromMediaChange(This,CdromNum) )
#define IWMPEvents4_PlaylistChange(This,Playlist,change)( (This)->lpVtbl -> PlaylistChange(This,Playlist,change) )
#define IWMPEvents4_CurrentPlaylistChange(This,change)( (This)->lpVtbl -> CurrentPlaylistChange(This,change) )
#define IWMPEvents4_CurrentPlaylistItemAvailable(This,bstrItemName)( (This)->lpVtbl -> CurrentPlaylistItemAvailable(This,bstrItemName) )
#define IWMPEvents4_MediaChange(This,Item)( (This)->lpVtbl -> MediaChange(This,Item) )
#define IWMPEvents4_CurrentMediaItemAvailable(This,bstrItemName)( (This)->lpVtbl -> CurrentMediaItemAvailable(This,bstrItemName) )
#define IWMPEvents4_CurrentItemChange(This,pdispMedia)( (This)->lpVtbl -> CurrentItemChange(This,pdispMedia) )
#define IWMPEvents4_MediaCollectionChange(This)( (This)->lpVtbl -> MediaCollectionChange(This) )
#define IWMPEvents4_MediaCollectionAttributeStringAdded(This,bstrAttribName,bstrAttribVal)( (This)->lpVtbl -> MediaCollectionAttributeStringAdded(This,bstrAttribName,bstrAttribVal) )
#define IWMPEvents4_MediaCollectionAttributeStringRemoved(This,bstrAttribName,bstrAttribVal)( (This)->lpVtbl -> MediaCollectionAttributeStringRemoved(This,bstrAttribName,bstrAttribVal) )
#define IWMPEvents4_MediaCollectionAttributeStringChanged(This,bstrAttribName,bstrOldAttribVal,bstrNewAttribVal)( (This)->lpVtbl -> MediaCollectionAttributeStringChanged(This,bstrAttribName,bstrOldAttribVal,bstrNewAttribVal) )
#define IWMPEvents4_PlaylistCollectionChange(This)( (This)->lpVtbl -> PlaylistCollectionChange(This) )
#define IWMPEvents4_PlaylistCollectionPlaylistAdded(This,bstrPlaylistName)( (This)->lpVtbl -> PlaylistCollectionPlaylistAdded(This,bstrPlaylistName) )
#define IWMPEvents4_PlaylistCollectionPlaylistRemoved(This,bstrPlaylistName)( (This)->lpVtbl -> PlaylistCollectionPlaylistRemoved(This,bstrPlaylistName) )
#define IWMPEvents4_PlaylistCollectionPlaylistSetAsDeleted(This,bstrPlaylistName,varfIsDeleted)( (This)->lpVtbl -> PlaylistCollectionPlaylistSetAsDeleted(This,bstrPlaylistName,varfIsDeleted) )
#define IWMPEvents4_ModeChange(This,ModeName,NewValue)( (This)->lpVtbl -> ModeChange(This,ModeName,NewValue) )
#define IWMPEvents4_MediaError(This,pMediaObject)( (This)->lpVtbl -> MediaError(This,pMediaObject) )
#define IWMPEvents4_OpenPlaylistSwitch(This,pItem)( (This)->lpVtbl -> OpenPlaylistSwitch(This,pItem) )
#define IWMPEvents4_DomainChange(This,strDomain)( (This)->lpVtbl -> DomainChange(This,strDomain) )
#define IWMPEvents4_SwitchedToPlayerApplication(This)( (This)->lpVtbl -> SwitchedToPlayerApplication(This) )
#define IWMPEvents4_SwitchedToControl(This)( (This)->lpVtbl -> SwitchedToControl(This) )
#define IWMPEvents4_PlayerDockedStateChange(This)( (This)->lpVtbl -> PlayerDockedStateChange(This) )
#define IWMPEvents4_PlayerReconnect(This)( (This)->lpVtbl -> PlayerReconnect(This) )
#define IWMPEvents4_Click(This,nButton,nShiftState,fX,fY)( (This)->lpVtbl -> Click(This,nButton,nShiftState,fX,fY) )
#define IWMPEvents4_DoubleClick(This,nButton,nShiftState,fX,fY)( (This)->lpVtbl -> DoubleClick(This,nButton,nShiftState,fX,fY) )
#define IWMPEvents4_KeyDown(This,nKeyCode,nShiftState)( (This)->lpVtbl -> KeyDown(This,nKeyCode,nShiftState) )
#define IWMPEvents4_KeyPress(This,nKeyAscii)( (This)->lpVtbl -> KeyPress(This,nKeyAscii) )
#define IWMPEvents4_KeyUp(This,nKeyCode,nShiftState)( (This)->lpVtbl -> KeyUp(This,nKeyCode,nShiftState) )
#define IWMPEvents4_MouseDown(This,nButton,nShiftState,fX,fY)( (This)->lpVtbl -> MouseDown(This,nButton,nShiftState,fX,fY) )
#define IWMPEvents4_MouseMove(This,nButton,nShiftState,fX,fY)( (This)->lpVtbl -> MouseMove(This,nButton,nShiftState,fX,fY) )
#define IWMPEvents4_MouseUp(This,nButton,nShiftState,fX,fY)( (This)->lpVtbl -> MouseUp(This,nButton,nShiftState,fX,fY) )
#define IWMPEvents4_DeviceConnect(This,pDevice)( (This)->lpVtbl -> DeviceConnect(This,pDevice) )
#define IWMPEvents4_DeviceDisconnect(This,pDevice)( (This)->lpVtbl -> DeviceDisconnect(This,pDevice) )
#define IWMPEvents4_DeviceStatusChange(This,pDevice,NewStatus)( (This)->lpVtbl -> DeviceStatusChange(This,pDevice,NewStatus) )
#define IWMPEvents4_DeviceSyncStateChange(This,pDevice,NewState)( (This)->lpVtbl -> DeviceSyncStateChange(This,pDevice,NewState) )
#define IWMPEvents4_DeviceSyncError(This,pDevice,pMedia)( (This)->lpVtbl -> DeviceSyncError(This,pDevice,pMedia) )
#define IWMPEvents4_CreatePartnershipComplete(This,pDevice,hrResult)( (This)->lpVtbl -> CreatePartnershipComplete(This,pDevice,hrResult) )
#define IWMPEvents4_CdromRipStateChange(This,pCdromRip,wmprs)( (This)->lpVtbl -> CdromRipStateChange(This,pCdromRip,wmprs) )
#define IWMPEvents4_CdromRipMediaError(This,pCdromRip,pMedia)( (This)->lpVtbl -> CdromRipMediaError(This,pCdromRip,pMedia) )
#define IWMPEvents4_CdromBurnStateChange(This,pCdromBurn,wmpbs)( (This)->lpVtbl -> CdromBurnStateChange(This,pCdromBurn,wmpbs) )
#define IWMPEvents4_CdromBurnMediaError(This,pCdromBurn,pMedia)( (This)->lpVtbl -> CdromBurnMediaError(This,pCdromBurn,pMedia) )
#define IWMPEvents4_CdromBurnError(This,pCdromBurn,hrError)( (This)->lpVtbl -> CdromBurnError(This,pCdromBurn,hrError) )
#define IWMPEvents4_LibraryConnect(This,pLibrary)( (This)->lpVtbl -> LibraryConnect(This,pLibrary) )
#define IWMPEvents4_LibraryDisconnect(This,pLibrary)( (This)->lpVtbl -> LibraryDisconnect(This,pLibrary) )
#define IWMPEvents4_FolderScanStateChange(This,wmpfss)( (This)->lpVtbl -> FolderScanStateChange(This,wmpfss) )
#define IWMPEvents4_StringCollectionChange(This,pdispStringCollection,change,lCollectionIndex)( (This)->lpVtbl -> StringCollectionChange(This,pdispStringCollection,change,lCollectionIndex) )
#define IWMPEvents4_MediaCollectionMediaAdded(This,pdispMedia)( (This)->lpVtbl -> MediaCollectionMediaAdded(This,pdispMedia) )
#define IWMPEvents4_MediaCollectionMediaRemoved(This,pdispMedia)( (This)->lpVtbl -> MediaCollectionMediaRemoved(This,pdispMedia) )
#define IWMPEvents4_DeviceEstimation(This,pDevice,hrResult,qwEstimatedUsedSpace,qwEstimatedSpace)( (This)->lpVtbl -> DeviceEstimation(This,pDevice,hrResult,qwEstimatedUsedSpace,qwEstimatedSpace) )
#endif
#endif
#ifndef ___WMPOCXEvents_DISPINTERFACE_DEFINED__
#define ___WMPOCXEvents_DISPINTERFACE_DEFINED__
extern const IID DIID__WMPOCXEvents;
typedef struct _WMPOCXEventsVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (_WMPOCXEvents * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (_WMPOCXEvents * This);
	ULONG(STDMETHODCALLTYPE * Release) (_WMPOCXEvents * This);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfoCount) (_WMPOCXEvents * This, UINT * pctinfo);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfo) (_WMPOCXEvents * This, UINT iTInfo, LCID lcid, ITypeInfo ** ppTInfo);
	HRESULT(STDMETHODCALLTYPE * GetIDsOfNames) (_WMPOCXEvents * This, REFIID riid, LPOLESTR * rgszNames, UINT cNames, LCID lcid, DISPID * rgDispId);
	HRESULT(STDMETHODCALLTYPE * Invoke) (_WMPOCXEvents * This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS * pDispParams, VARIANT * pVarResult, EXCEPINFO * pExcepInfo, UINT * puArgErr);
	END_INTERFACE
}  _WMPOCXEventsVtbl;
interface _WMPOCXEvents
{
	CONST_VTBL struct _WMPOCXEventsVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define _WMPOCXEvents_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define _WMPOCXEvents_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define _WMPOCXEvents_Release(This)( (This)->lpVtbl -> Release(This) )
#define _WMPOCXEvents_GetTypeInfoCount(This,pctinfo)( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define _WMPOCXEvents_GetTypeInfo(This,iTInfo,lcid,ppTInfo)( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define _WMPOCXEvents_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define _WMPOCXEvents_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#endif
#endif
extern const CLSID CLSID_WindowsMediaPlayer;
#endif
unsigned long __RPC_USER BSTR_UserSize(unsigned long *, unsigned long, BSTR *);
unsigned char *__RPC_USER BSTR_UserMarshal(unsigned long *, unsigned char *, BSTR *);
unsigned char *__RPC_USER BSTR_UserUnmarshal(unsigned long *, unsigned char *, BSTR *);
void __RPC_USER BSTR_UserFree(unsigned long *, BSTR *);
unsigned long __RPC_USER VARIANT_UserSize(unsigned long *, unsigned long, VARIANT *);
unsigned char *__RPC_USER VARIANT_UserMarshal(unsigned long *, unsigned char *, VARIANT *);
unsigned char *__RPC_USER VARIANT_UserUnmarshal(unsigned long *, unsigned char *, VARIANT *);
void __RPC_USER VARIANT_UserFree(unsigned long *, VARIANT *);
#endif

/*+@@file@@----------------------------------------------------------------*//*!
 \file		wia_xp.h
 \par Description 
            Extension and update of headers for PellesC compiler suite.
 \par Project: 
            PellesC Headers extension
 \date		Created  on Mon Sep 19 02:12:42 2016
 \date		Modified on Mon Sep 19 02:12:42 2016
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
#ifndef __wia_xp_h__
#define __wia_xp_h__
#if __POCC__ >= 500
#pragma once
#endif
#ifndef __IWiaDevMgr_FWD_DEFINED__
#define __IWiaDevMgr_FWD_DEFINED__
typedef interface IWiaDevMgr IWiaDevMgr;
#endif
#ifndef __IEnumWIA_DEV_INFO_FWD_DEFINED__
#define __IEnumWIA_DEV_INFO_FWD_DEFINED__
typedef interface IEnumWIA_DEV_INFO IEnumWIA_DEV_INFO;
#endif
#ifndef __IWiaEventCallback_FWD_DEFINED__
#define __IWiaEventCallback_FWD_DEFINED__
typedef interface IWiaEventCallback IWiaEventCallback;
#endif
#ifndef __IWiaDataCallback_FWD_DEFINED__
#define __IWiaDataCallback_FWD_DEFINED__
typedef interface IWiaDataCallback IWiaDataCallback;
#endif
#ifndef __IWiaDataTransfer_FWD_DEFINED__
#define __IWiaDataTransfer_FWD_DEFINED__
typedef interface IWiaDataTransfer IWiaDataTransfer;
#endif
#ifndef __IWiaItem_FWD_DEFINED__
#define __IWiaItem_FWD_DEFINED__
typedef interface IWiaItem IWiaItem;
#endif
#ifndef __IWiaPropertyStorage_FWD_DEFINED__
#define __IWiaPropertyStorage_FWD_DEFINED__
typedef interface IWiaPropertyStorage IWiaPropertyStorage;
#endif
#ifndef __IEnumWiaItem_FWD_DEFINED__
#define __IEnumWiaItem_FWD_DEFINED__
typedef interface IEnumWiaItem IEnumWiaItem;
#endif
#ifndef __IEnumWIA_DEV_CAPS_FWD_DEFINED__
#define __IEnumWIA_DEV_CAPS_FWD_DEFINED__
typedef interface IEnumWIA_DEV_CAPS IEnumWIA_DEV_CAPS;
#endif
#ifndef __IEnumWIA_FORMAT_INFO_FWD_DEFINED__
#define __IEnumWIA_FORMAT_INFO_FWD_DEFINED__
typedef interface IEnumWIA_FORMAT_INFO IEnumWIA_FORMAT_INFO;
#endif
#ifndef __IWiaLog_FWD_DEFINED__
#define __IWiaLog_FWD_DEFINED__
typedef interface IWiaLog IWiaLog;
#endif
#ifndef __IWiaLogEx_FWD_DEFINED__
#define __IWiaLogEx_FWD_DEFINED__
typedef interface IWiaLogEx IWiaLogEx;
#endif
#ifndef __IWiaNotifyDevMgr_FWD_DEFINED__
#define __IWiaNotifyDevMgr_FWD_DEFINED__
typedef interface IWiaNotifyDevMgr IWiaNotifyDevMgr;
#endif
#ifndef __IWiaItemExtras_FWD_DEFINED__
#define __IWiaItemExtras_FWD_DEFINED__
typedef interface IWiaItemExtras IWiaItemExtras;
#endif
#ifndef __WiaDevMgr_FWD_DEFINED__
#define __WiaDevMgr_FWD_DEFINED__
typedef struct WiaDevMgr WiaDevMgr;
#endif
#ifndef __WiaLog_FWD_DEFINED__
#define __WiaLog_FWD_DEFINED__
typedef struct WiaLog WiaLog;
#endif
#include <unknwn.h>
#include <oaidl.h>
#include <propidl.h>
typedef struct _WIA_DITHER_PATTERN_DATA
{
	LONG lSize;
	BSTR bstrPatternName;
	LONG lPatternWidth;
	LONG lPatternLength;
	LONG cbPattern;
	BYTE *pbPattern;
} WIA_DITHER_PATTERN_DATA;
typedef struct _WIA_DITHER_PATTERN_DATA *PWIA_DITHER_PATTERN_DATA;
typedef struct _WIA_PROPID_TO_NAME
{
	PROPID propid;
	LPOLESTR pszName;
} WIA_PROPID_TO_NAME;
typedef struct _WIA_PROPID_TO_NAME *PWIA_PROPID_TO_NAME;
typedef struct _WIA_FORMAT_INFO
{
	GUID guidFormatID;
	LONG lTymed;
} WIA_FORMAT_INFO;
typedef struct _WIA_FORMAT_INFO *PWIA_FORMAT_INFO;
#include <wiadef.h>
extern RPC_IF_HANDLE __MIDL_itf_wia_xp_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_wia_xp_0000_0000_v0_0_s_ifspec;
#ifndef __IWiaDevMgr_INTERFACE_DEFINED__
#define __IWiaDevMgr_INTERFACE_DEFINED__
extern const IID IID_IWiaDevMgr;
typedef struct IWiaDevMgrVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IWiaDevMgr * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IWiaDevMgr * This);
	ULONG(STDMETHODCALLTYPE * Release) (IWiaDevMgr * This);
	HRESULT(STDMETHODCALLTYPE * EnumDeviceInfo) (IWiaDevMgr * This, LONG lFlag, IEnumWIA_DEV_INFO ** ppIEnum);
	HRESULT(STDMETHODCALLTYPE * CreateDevice) (IWiaDevMgr * This, BSTR bstrDeviceID, IWiaItem ** ppWiaItemRoot);
	HRESULT(STDMETHODCALLTYPE * SelectDeviceDlg) (IWiaDevMgr * This, HWND hwndParent, LONG lDeviceType, LONG lFlags, BSTR * pbstrDeviceID, IWiaItem ** ppItemRoot);
	HRESULT(STDMETHODCALLTYPE * SelectDeviceDlgID) (IWiaDevMgr * This, HWND hwndParent, LONG lDeviceType, LONG lFlags, BSTR * pbstrDeviceID);
	HRESULT(STDMETHODCALLTYPE * GetImageDlg) (IWiaDevMgr * This, HWND hwndParent, LONG lDeviceType, LONG lFlags, LONG lIntent, IWiaItem * pItemRoot, BSTR bstrFilename, GUID * pguidFormat);
	HRESULT(STDMETHODCALLTYPE * RegisterEventCallbackProgram) (IWiaDevMgr * This, LONG lFlags, BSTR bstrDeviceID, const GUID * pEventGUID, BSTR bstrCommandline, BSTR bstrName, BSTR bstrDescription, BSTR bstrIcon);
	HRESULT(STDMETHODCALLTYPE * RegisterEventCallbackInterface) (IWiaDevMgr * This, LONG lFlags, BSTR bstrDeviceID, const GUID * pEventGUID, IWiaEventCallback * pIWiaEventCallback, IUnknown ** pEventObject);
	HRESULT(STDMETHODCALLTYPE * RegisterEventCallbackCLSID) (IWiaDevMgr * This, LONG lFlags, BSTR bstrDeviceID, const GUID * pEventGUID, const GUID * pClsID, BSTR bstrName, BSTR bstrDescription, BSTR bstrIcon);
	HRESULT(STDMETHODCALLTYPE * AddDeviceDlg) (IWiaDevMgr * This, HWND hwndParent, LONG lFlags);
	END_INTERFACE
}  IWiaDevMgrVtbl;
interface IWiaDevMgr
{
	CONST_VTBL struct IWiaDevMgrVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IWiaDevMgr_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IWiaDevMgr_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IWiaDevMgr_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IWiaDevMgr_EnumDeviceInfo(This,lFlag,ppIEnum) ( (This)->lpVtbl -> EnumDeviceInfo(This,lFlag,ppIEnum) )
#define IWiaDevMgr_CreateDevice(This,bstrDeviceID,ppWiaItemRoot) ( (This)->lpVtbl -> CreateDevice(This,bstrDeviceID,ppWiaItemRoot) )
#define IWiaDevMgr_SelectDeviceDlg(This,hwndParent,lDeviceType,lFlags,pbstrDeviceID,ppItemRoot) ( (This)->lpVtbl -> SelectDeviceDlg(This,hwndParent,lDeviceType,lFlags,pbstrDeviceID,ppItemRoot) )
#define IWiaDevMgr_SelectDeviceDlgID(This,hwndParent,lDeviceType,lFlags,pbstrDeviceID) ( (This)->lpVtbl -> SelectDeviceDlgID(This,hwndParent,lDeviceType,lFlags,pbstrDeviceID) )
#define IWiaDevMgr_GetImageDlg(This,hwndParent,lDeviceType,lFlags,lIntent,pItemRoot,bstrFilename,pguidFormat) ( (This)->lpVtbl -> GetImageDlg(This,hwndParent,lDeviceType,lFlags,lIntent,pItemRoot,bstrFilename,pguidFormat) )
#define IWiaDevMgr_RegisterEventCallbackProgram(This,lFlags,bstrDeviceID,pEventGUID,bstrCommandline,bstrName,bstrDescription,bstrIcon) ( (This)->lpVtbl -> RegisterEventCallbackProgram(This,lFlags,bstrDeviceID,pEventGUID,bstrCommandline,bstrName,bstrDescription,bstrIcon) )
#define IWiaDevMgr_RegisterEventCallbackInterface(This,lFlags,bstrDeviceID,pEventGUID,pIWiaEventCallback,pEventObject) ( (This)->lpVtbl -> RegisterEventCallbackInterface(This,lFlags,bstrDeviceID,pEventGUID,pIWiaEventCallback,pEventObject) )
#define IWiaDevMgr_RegisterEventCallbackCLSID(This,lFlags,bstrDeviceID,pEventGUID,pClsID,bstrName,bstrDescription,bstrIcon) ( (This)->lpVtbl -> RegisterEventCallbackCLSID(This,lFlags,bstrDeviceID,pEventGUID,pClsID,bstrName,bstrDescription,bstrIcon) )
#define IWiaDevMgr_AddDeviceDlg(This,hwndParent,lFlags) ( (This)->lpVtbl -> AddDeviceDlg(This,hwndParent,lFlags) )
#endif
HRESULT STDMETHODCALLTYPE IWiaDevMgr_LocalCreateDevice_Proxy(IWiaDevMgr *This, BSTR bstrDeviceID, IWiaItem **ppWiaItemRoot);
void __RPC_STUB IWiaDevMgr_LocalCreateDevice_Stub(IRpcStubBuffer *This, IRpcChannelBuffer *_pRpcChannelBuffer, PRPC_MESSAGE _pRpcMessage, DWORD *_pdwStubPhase);
HRESULT STDMETHODCALLTYPE IWiaDevMgr_LocalSelectDeviceDlg_Proxy(IWiaDevMgr *This, HWND hwndParent, LONG lDeviceType, LONG lFlags, BSTR *pbstrDeviceID, IWiaItem **ppItemRoot);
void __RPC_STUB IWiaDevMgr_LocalSelectDeviceDlg_Stub(IRpcStubBuffer *This, IRpcChannelBuffer *_pRpcChannelBuffer, PRPC_MESSAGE _pRpcMessage, DWORD *_pdwStubPhase);
HRESULT STDMETHODCALLTYPE IWiaDevMgr_LocalSelectDeviceDlgID_Proxy(IWiaDevMgr *This, HWND hwndParent, LONG lDeviceType, LONG lFlags, BSTR *pbstrDeviceID);
void __RPC_STUB IWiaDevMgr_LocalSelectDeviceDlgID_Stub(IRpcStubBuffer *This, IRpcChannelBuffer *_pRpcChannelBuffer, PRPC_MESSAGE _pRpcMessage, DWORD *_pdwStubPhase);
HRESULT STDMETHODCALLTYPE IWiaDevMgr_LocalGetImageDlg_Proxy(IWiaDevMgr *This, HWND hwndParent, LONG lDeviceType, LONG lFlags, LONG lIntent, IWiaItem *pItemRoot, BSTR bstrFilename, GUID *pguidFormat);
void __RPC_STUB IWiaDevMgr_LocalGetImageDlg_Stub(IRpcStubBuffer *This, IRpcChannelBuffer *_pRpcChannelBuffer, PRPC_MESSAGE _pRpcMessage, DWORD *_pdwStubPhase);
HRESULT STDMETHODCALLTYPE IWiaDevMgr_LocalRegisterEventCallbackProgram_Proxy(IWiaDevMgr *This, LONG lFlags, BSTR bstrDeviceID, const GUID *pEventGUID, BSTR bstrCommandline, BSTR bstrName, BSTR bstrDescription, BSTR bstrIcon);
void __RPC_STUB IWiaDevMgr_LocalRegisterEventCallbackProgram_Stub(IRpcStubBuffer *This, IRpcChannelBuffer *_pRpcChannelBuffer, PRPC_MESSAGE _pRpcMessage, DWORD *_pdwStubPhase);
HRESULT STDMETHODCALLTYPE IWiaDevMgr_LocalRegisterEventCallbackInterface_Proxy(IWiaDevMgr *This, LONG lFlags, BSTR bstrDeviceID, const GUID *pEventGUID, IWiaEventCallback *pIWiaEventCallback, IUnknown **pEventObject);
void __RPC_STUB IWiaDevMgr_LocalRegisterEventCallbackInterface_Stub(IRpcStubBuffer *This, IRpcChannelBuffer *_pRpcChannelBuffer, PRPC_MESSAGE _pRpcMessage, DWORD *_pdwStubPhase);
HRESULT STDMETHODCALLTYPE IWiaDevMgr_LocalRegisterEventCallbackCLSID_Proxy(IWiaDevMgr *This, LONG lFlags, BSTR bstrDeviceID, const GUID *pEventGUID, const GUID *pClsID, BSTR bstrName, BSTR bstrDescription, BSTR bstrIcon);
void __RPC_STUB IWiaDevMgr_LocalRegisterEventCallbackCLSID_Stub(IRpcStubBuffer *This, IRpcChannelBuffer *_pRpcChannelBuffer, PRPC_MESSAGE _pRpcMessage, DWORD *_pdwStubPhase);
#endif
#ifndef __IEnumWIA_DEV_INFO_INTERFACE_DEFINED__
#define __IEnumWIA_DEV_INFO_INTERFACE_DEFINED__
extern const IID IID_IEnumWIA_DEV_INFO;
typedef struct IEnumWIA_DEV_INFOVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IEnumWIA_DEV_INFO * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IEnumWIA_DEV_INFO * This);
	ULONG(STDMETHODCALLTYPE * Release) (IEnumWIA_DEV_INFO * This);
	HRESULT(STDMETHODCALLTYPE * Next) (IEnumWIA_DEV_INFO * This, ULONG celt, IWiaPropertyStorage ** rgelt, ULONG * pceltFetched);
	HRESULT(STDMETHODCALLTYPE * Skip) (IEnumWIA_DEV_INFO * This, ULONG celt);
	HRESULT(STDMETHODCALLTYPE * Reset) (IEnumWIA_DEV_INFO * This);
	HRESULT(STDMETHODCALLTYPE * Clone) (IEnumWIA_DEV_INFO * This, IEnumWIA_DEV_INFO ** ppIEnum);
	HRESULT(STDMETHODCALLTYPE * GetCount) (IEnumWIA_DEV_INFO * This, ULONG * celt);
	END_INTERFACE
}  IEnumWIA_DEV_INFOVtbl;
interface IEnumWIA_DEV_INFO
{
	CONST_VTBL struct IEnumWIA_DEV_INFOVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IEnumWIA_DEV_INFO_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IEnumWIA_DEV_INFO_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IEnumWIA_DEV_INFO_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IEnumWIA_DEV_INFO_Next(This,celt,rgelt,pceltFetched) ( (This)->lpVtbl -> Next(This,celt,rgelt,pceltFetched) )
#define IEnumWIA_DEV_INFO_Skip(This,celt) ( (This)->lpVtbl -> Skip(This,celt) )
#define IEnumWIA_DEV_INFO_Reset(This) ( (This)->lpVtbl -> Reset(This) )
#define IEnumWIA_DEV_INFO_Clone(This,ppIEnum) ( (This)->lpVtbl -> Clone(This,ppIEnum) )
#define IEnumWIA_DEV_INFO_GetCount(This,celt) ( (This)->lpVtbl -> GetCount(This,celt) )
#endif
HRESULT STDMETHODCALLTYPE IEnumWIA_DEV_INFO_RemoteNext_Proxy(IEnumWIA_DEV_INFO *This, ULONG celt, IWiaPropertyStorage **rgelt, ULONG *pceltFetched);
void __RPC_STUB IEnumWIA_DEV_INFO_RemoteNext_Stub(IRpcStubBuffer *This, IRpcChannelBuffer *_pRpcChannelBuffer, PRPC_MESSAGE _pRpcMessage, DWORD *_pdwStubPhase);
#endif
#ifndef __IWiaEventCallback_INTERFACE_DEFINED__
#define __IWiaEventCallback_INTERFACE_DEFINED__
extern const IID IID_IWiaEventCallback;
typedef struct IWiaEventCallbackVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IWiaEventCallback * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IWiaEventCallback * This);
	ULONG(STDMETHODCALLTYPE * Release) (IWiaEventCallback * This);
	HRESULT(STDMETHODCALLTYPE * ImageEventCallback) (IWiaEventCallback * This, const GUID * pEventGUID, BSTR bstrEventDescription, BSTR bstrDeviceID, BSTR bstrDeviceDescription, DWORD dwDeviceType, BSTR bstrFullItemName, ULONG * pulEventType, ULONG ulReserved);
	END_INTERFACE
}  IWiaEventCallbackVtbl;
interface IWiaEventCallback
{
	CONST_VTBL struct IWiaEventCallbackVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IWiaEventCallback_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IWiaEventCallback_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IWiaEventCallback_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IWiaEventCallback_ImageEventCallback(This,pEventGUID,bstrEventDescription,bstrDeviceID,bstrDeviceDescription,dwDeviceType,bstrFullItemName,pulEventType,ulReserved) ( (This)->lpVtbl -> ImageEventCallback(This,pEventGUID,bstrEventDescription,bstrDeviceID,bstrDeviceDescription,dwDeviceType,bstrFullItemName,pulEventType,ulReserved) )
#endif
#endif
typedef struct _WIA_DATA_CALLBACK_HEADER
{
	LONG lSize;
	GUID guidFormatID;
	LONG lBufferSize;
	LONG lPageCount;
} WIA_DATA_CALLBACK_HEADER;
typedef struct _WIA_DATA_CALLBACK_HEADER *PWIA_DATA_CALLBACK_HEADER;
extern RPC_IF_HANDLE __MIDL_itf_wia_xp_0000_0003_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_wia_xp_0000_0003_v0_0_s_ifspec;
#ifndef __IWiaDataCallback_INTERFACE_DEFINED__
#define __IWiaDataCallback_INTERFACE_DEFINED__
extern const IID IID_IWiaDataCallback;
typedef struct IWiaDataCallbackVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IWiaDataCallback * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IWiaDataCallback * This);
	ULONG(STDMETHODCALLTYPE * Release) (IWiaDataCallback * This);
	HRESULT(STDMETHODCALLTYPE * BandedDataCallback) (IWiaDataCallback * This, LONG lMessage, LONG lStatus, LONG lPercentComplete, LONG lOffset, LONG lLength, LONG lReserved, LONG lResLength, BYTE * pbBuffer);
	END_INTERFACE
}  IWiaDataCallbackVtbl;
interface IWiaDataCallback
{
	CONST_VTBL struct IWiaDataCallbackVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IWiaDataCallback_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IWiaDataCallback_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IWiaDataCallback_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IWiaDataCallback_BandedDataCallback(This,lMessage,lStatus,lPercentComplete,lOffset,lLength,lReserved,lResLength,pbBuffer) ( (This)->lpVtbl -> BandedDataCallback(This,lMessage,lStatus,lPercentComplete,lOffset,lLength,lReserved,lResLength,pbBuffer) )
#endif
HRESULT STDMETHODCALLTYPE IWiaDataCallback_RemoteBandedDataCallback_Proxy(IWiaDataCallback *This, LONG lMessage, LONG lStatus, LONG lPercentComplete, LONG lOffset, LONG lLength, LONG lReserved, LONG lResLength, BYTE *pbBuffer);
void __RPC_STUB IWiaDataCallback_RemoteBandedDataCallback_Stub(IRpcStubBuffer *This, IRpcChannelBuffer *_pRpcChannelBuffer, PRPC_MESSAGE _pRpcMessage, DWORD *_pdwStubPhase);
#endif
typedef struct _WIA_DATA_TRANSFER_INFO
{
	ULONG ulSize;
	ULONG ulSection;
	ULONG ulBufferSize;
	BOOL bDoubleBuffer;
	ULONG ulReserved1;
	ULONG ulReserved2;
	ULONG ulReserved3;
} WIA_DATA_TRANSFER_INFO;
typedef struct _WIA_DATA_TRANSFER_INFO *PWIA_DATA_TRANSFER_INFO;
typedef struct _WIA_EXTENDED_TRANSFER_INFO
{
	ULONG ulSize;
	ULONG ulMinBufferSize;
	ULONG ulOptimalBufferSize;
	ULONG ulMaxBufferSize;
	ULONG ulNumBuffers;
} WIA_EXTENDED_TRANSFER_INFO;
typedef struct _WIA_EXTENDED_TRANSFER_INFO *PWIA_EXTENDED_TRANSFER_INFO;
extern RPC_IF_HANDLE __MIDL_itf_wia_xp_0000_0004_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_wia_xp_0000_0004_v0_0_s_ifspec;
#ifndef __IWiaDataTransfer_INTERFACE_DEFINED__
#define __IWiaDataTransfer_INTERFACE_DEFINED__
extern const IID IID_IWiaDataTransfer;
typedef struct IWiaDataTransferVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IWiaDataTransfer * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IWiaDataTransfer * This);
	ULONG(STDMETHODCALLTYPE * Release) (IWiaDataTransfer * This);
	HRESULT(STDMETHODCALLTYPE * idtGetData) (IWiaDataTransfer * This, LPSTGMEDIUM pMedium, IWiaDataCallback * pIWiaDataCallback);
	HRESULT(STDMETHODCALLTYPE * idtGetBandedData) (IWiaDataTransfer * This, PWIA_DATA_TRANSFER_INFO pWiaDataTransInfo, IWiaDataCallback * pIWiaDataCallback);
	HRESULT(STDMETHODCALLTYPE * idtQueryGetData) (IWiaDataTransfer * This, WIA_FORMAT_INFO * pfe);
	HRESULT(STDMETHODCALLTYPE * idtEnumWIA_FORMAT_INFO) (IWiaDataTransfer * This, IEnumWIA_FORMAT_INFO ** ppEnum);
	HRESULT(STDMETHODCALLTYPE * idtGetExtendedTransferInfo) (IWiaDataTransfer * This, PWIA_EXTENDED_TRANSFER_INFO pExtendedTransferInfo);
	END_INTERFACE
}  IWiaDataTransferVtbl;
interface IWiaDataTransfer
{
	CONST_VTBL struct IWiaDataTransferVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IWiaDataTransfer_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IWiaDataTransfer_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IWiaDataTransfer_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IWiaDataTransfer_idtGetData(This,pMedium,pIWiaDataCallback) ( (This)->lpVtbl -> idtGetData(This,pMedium,pIWiaDataCallback) )
#define IWiaDataTransfer_idtGetBandedData(This,pWiaDataTransInfo,pIWiaDataCallback) ( (This)->lpVtbl -> idtGetBandedData(This,pWiaDataTransInfo,pIWiaDataCallback) )
#define IWiaDataTransfer_idtQueryGetData(This,pfe) ( (This)->lpVtbl -> idtQueryGetData(This,pfe) )
#define IWiaDataTransfer_idtEnumWIA_FORMAT_INFO(This,ppEnum) ( (This)->lpVtbl -> idtEnumWIA_FORMAT_INFO(This,ppEnum) )
#define IWiaDataTransfer_idtGetExtendedTransferInfo(This,pExtendedTransferInfo) ( (This)->lpVtbl -> idtGetExtendedTransferInfo(This,pExtendedTransferInfo) )
#endif
HRESULT STDMETHODCALLTYPE IWiaDataTransfer_idtGetDataEx_Proxy(IWiaDataTransfer *This, LPSTGMEDIUM pMedium, IWiaDataCallback *pIWiaDataCallback);
void __RPC_STUB IWiaDataTransfer_idtGetDataEx_Stub(IRpcStubBuffer *This, IRpcChannelBuffer *_pRpcChannelBuffer, PRPC_MESSAGE _pRpcMessage, DWORD *_pdwStubPhase);
HRESULT STDMETHODCALLTYPE IWiaDataTransfer_idtGetBandedDataEx_Proxy(IWiaDataTransfer *This, PWIA_DATA_TRANSFER_INFO pWiaDataTransInfo, IWiaDataCallback *pIWiaDataCallback);
void __RPC_STUB IWiaDataTransfer_idtGetBandedDataEx_Stub(IRpcStubBuffer *This, IRpcChannelBuffer *_pRpcChannelBuffer, PRPC_MESSAGE _pRpcMessage, DWORD *_pdwStubPhase);
#endif
#ifndef __IWiaItem_INTERFACE_DEFINED__
#define __IWiaItem_INTERFACE_DEFINED__
extern const IID IID_IWiaItem;
typedef struct IWiaItemVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IWiaItem * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IWiaItem * This);
	ULONG(STDMETHODCALLTYPE * Release) (IWiaItem * This);
	HRESULT(STDMETHODCALLTYPE * GetItemType) (IWiaItem * This, LONG * pItemType);
	HRESULT(STDMETHODCALLTYPE * AnalyzeItem) (IWiaItem * This, LONG lFlags);
	HRESULT(STDMETHODCALLTYPE * EnumChildItems) (IWiaItem * This, IEnumWiaItem ** ppIEnumWiaItem);
	HRESULT(STDMETHODCALLTYPE * DeleteItem) (IWiaItem * This, LONG lFlags);
	HRESULT(STDMETHODCALLTYPE * CreateChildItem) (IWiaItem * This, LONG lFlags, BSTR bstrItemName, BSTR bstrFullItemName, IWiaItem ** ppIWiaItem);
	HRESULT(STDMETHODCALLTYPE * EnumRegisterEventInfo) (IWiaItem * This, LONG lFlags, const GUID * pEventGUID, IEnumWIA_DEV_CAPS ** ppIEnum);
	HRESULT(STDMETHODCALLTYPE * FindItemByName) (IWiaItem * This, LONG lFlags, BSTR bstrFullItemName, IWiaItem ** ppIWiaItem);
	HRESULT(STDMETHODCALLTYPE * DeviceDlg) (IWiaItem * This, HWND hwndParent, LONG lFlags, LONG lIntent, LONG * plItemCount, IWiaItem *** ppIWiaItem);
	HRESULT(STDMETHODCALLTYPE * DeviceCommand) (IWiaItem * This, LONG lFlags, const GUID * pCmdGUID, IWiaItem ** pIWiaItem);
	HRESULT(STDMETHODCALLTYPE * GetRootItem) (IWiaItem * This, IWiaItem ** ppIWiaItem);
	HRESULT(STDMETHODCALLTYPE * EnumDeviceCapabilities) (IWiaItem * This, LONG lFlags, IEnumWIA_DEV_CAPS ** ppIEnumWIA_DEV_CAPS);
	HRESULT(STDMETHODCALLTYPE * DumpItemData) (IWiaItem * This, BSTR * bstrData);
	HRESULT(STDMETHODCALLTYPE * DumpDrvItemData) (IWiaItem * This, BSTR * bstrData);
	HRESULT(STDMETHODCALLTYPE * DumpTreeItemData) (IWiaItem * This, BSTR * bstrData);
	HRESULT(STDMETHODCALLTYPE * Diagnostic) (IWiaItem * This, ULONG ulSize, BYTE * pBuffer);
	END_INTERFACE
}  IWiaItemVtbl;
interface IWiaItem
{
	CONST_VTBL struct IWiaItemVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IWiaItem_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IWiaItem_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IWiaItem_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IWiaItem_GetItemType(This,pItemType) ( (This)->lpVtbl -> GetItemType(This,pItemType) )
#define IWiaItem_AnalyzeItem(This,lFlags) ( (This)->lpVtbl -> AnalyzeItem(This,lFlags) )
#define IWiaItem_EnumChildItems(This,ppIEnumWiaItem) ( (This)->lpVtbl -> EnumChildItems(This,ppIEnumWiaItem) )
#define IWiaItem_DeleteItem(This,lFlags) ( (This)->lpVtbl -> DeleteItem(This,lFlags) )
#define IWiaItem_CreateChildItem(This,lFlags,bstrItemName,bstrFullItemName,ppIWiaItem) ( (This)->lpVtbl -> CreateChildItem(This,lFlags,bstrItemName,bstrFullItemName,ppIWiaItem) )
#define IWiaItem_EnumRegisterEventInfo(This,lFlags,pEventGUID,ppIEnum) ( (This)->lpVtbl -> EnumRegisterEventInfo(This,lFlags,pEventGUID,ppIEnum) )
#define IWiaItem_FindItemByName(This,lFlags,bstrFullItemName,ppIWiaItem) ( (This)->lpVtbl -> FindItemByName(This,lFlags,bstrFullItemName,ppIWiaItem) )
#define IWiaItem_DeviceDlg(This,hwndParent,lFlags,lIntent,plItemCount,ppIWiaItem) ( (This)->lpVtbl -> DeviceDlg(This,hwndParent,lFlags,lIntent,plItemCount,ppIWiaItem) )
#define IWiaItem_DeviceCommand(This,lFlags,pCmdGUID,pIWiaItem) ( (This)->lpVtbl -> DeviceCommand(This,lFlags,pCmdGUID,pIWiaItem) )
#define IWiaItem_GetRootItem(This,ppIWiaItem) ( (This)->lpVtbl -> GetRootItem(This,ppIWiaItem) )
#define IWiaItem_EnumDeviceCapabilities(This,lFlags,ppIEnumWIA_DEV_CAPS) ( (This)->lpVtbl -> EnumDeviceCapabilities(This,lFlags,ppIEnumWIA_DEV_CAPS) )
#define IWiaItem_DumpItemData(This,bstrData) ( (This)->lpVtbl -> DumpItemData(This,bstrData) )
#define IWiaItem_DumpDrvItemData(This,bstrData) ( (This)->lpVtbl -> DumpDrvItemData(This,bstrData) )
#define IWiaItem_DumpTreeItemData(This,bstrData) ( (This)->lpVtbl -> DumpTreeItemData(This,bstrData) )
#define IWiaItem_Diagnostic(This,ulSize,pBuffer) ( (This)->lpVtbl -> Diagnostic(This,ulSize,pBuffer) )
#endif
HRESULT STDMETHODCALLTYPE IWiaItem_LocalDeviceDlg_Proxy(IWiaItem *This, HWND hwndParent, LONG lFlags, LONG lIntent, LONG *plItemCount, IWiaItem ***pIWiaItem);
void __RPC_STUB IWiaItem_LocalDeviceDlg_Stub(IRpcStubBuffer *This, IRpcChannelBuffer *_pRpcChannelBuffer, PRPC_MESSAGE _pRpcMessage, DWORD *_pdwStubPhase);
#endif
#ifndef __IWiaPropertyStorage_INTERFACE_DEFINED__
#define __IWiaPropertyStorage_INTERFACE_DEFINED__
extern const IID IID_IWiaPropertyStorage;
typedef struct IWiaPropertyStorageVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IWiaPropertyStorage * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IWiaPropertyStorage * This);
	ULONG(STDMETHODCALLTYPE * Release) (IWiaPropertyStorage * This);
	HRESULT(STDMETHODCALLTYPE * ReadMultiple) (IWiaPropertyStorage * This, ULONG cpspec, const PROPSPEC rgpspec[], PROPVARIANT rgpropvar[]);
	HRESULT(STDMETHODCALLTYPE * WriteMultiple) (IWiaPropertyStorage * This, ULONG cpspec, const PROPSPEC rgpspec[], const PROPVARIANT rgpropvar[], PROPID propidNameFirst);
	HRESULT(STDMETHODCALLTYPE * DeleteMultiple) (IWiaPropertyStorage * This, ULONG cpspec, const PROPSPEC rgpspec[]);
	HRESULT(STDMETHODCALLTYPE * ReadPropertyNames) (IWiaPropertyStorage * This, ULONG cpropid, const PROPID rgpropid[], LPOLESTR rglpwstrName[]);
	HRESULT(STDMETHODCALLTYPE * WritePropertyNames) (IWiaPropertyStorage * This, ULONG cpropid, const PROPID rgpropid[], const LPOLESTR rglpwstrName[]);
	HRESULT(STDMETHODCALLTYPE * DeletePropertyNames) (IWiaPropertyStorage * This, ULONG cpropid, const PROPID rgpropid[]);
	HRESULT(STDMETHODCALLTYPE * Commit) (IWiaPropertyStorage * This, DWORD grfCommitFlags);
	HRESULT(STDMETHODCALLTYPE * Revert) (IWiaPropertyStorage * This);
	HRESULT(STDMETHODCALLTYPE * Enum) (IWiaPropertyStorage * This, IEnumSTATPROPSTG ** ppenum);
	HRESULT(STDMETHODCALLTYPE * SetTimes) (IWiaPropertyStorage * This, const FILETIME * pctime, const FILETIME * patime, const FILETIME * pmtime);
	HRESULT(STDMETHODCALLTYPE * SetClass) (IWiaPropertyStorage * This, REFCLSID clsid);
	HRESULT(STDMETHODCALLTYPE * Stat) (IWiaPropertyStorage * This, STATPROPSETSTG * pstatpsstg);
	HRESULT(STDMETHODCALLTYPE * GetPropertyAttributes) (IWiaPropertyStorage * This, ULONG cpspec, PROPSPEC rgpspec[], ULONG rgflags[], PROPVARIANT rgpropvar[]);
	HRESULT(STDMETHODCALLTYPE * GetCount) (IWiaPropertyStorage * This, ULONG * pulNumProps);
	HRESULT(STDMETHODCALLTYPE * GetPropertyStream) (IWiaPropertyStorage * This, GUID * pCompatibilityId, IStream ** ppIStream);
	HRESULT(STDMETHODCALLTYPE * SetPropertyStream) (IWiaPropertyStorage * This, GUID * pCompatibilityId, IStream * pIStream);
	END_INTERFACE
}  IWiaPropertyStorageVtbl;
interface IWiaPropertyStorage
{
	CONST_VTBL struct IWiaPropertyStorageVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IWiaPropertyStorage_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IWiaPropertyStorage_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IWiaPropertyStorage_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IWiaPropertyStorage_ReadMultiple(This,cpspec,rgpspec,rgpropvar) ( (This)->lpVtbl -> ReadMultiple(This,cpspec,rgpspec,rgpropvar) )
#define IWiaPropertyStorage_WriteMultiple(This,cpspec,rgpspec,rgpropvar,propidNameFirst) ( (This)->lpVtbl -> WriteMultiple(This,cpspec,rgpspec,rgpropvar,propidNameFirst) )
#define IWiaPropertyStorage_DeleteMultiple(This,cpspec,rgpspec) ( (This)->lpVtbl -> DeleteMultiple(This,cpspec,rgpspec) )
#define IWiaPropertyStorage_ReadPropertyNames(This,cpropid,rgpropid,rglpwstrName) ( (This)->lpVtbl -> ReadPropertyNames(This,cpropid,rgpropid,rglpwstrName) )
#define IWiaPropertyStorage_WritePropertyNames(This,cpropid,rgpropid,rglpwstrName) ( (This)->lpVtbl -> WritePropertyNames(This,cpropid,rgpropid,rglpwstrName) )
#define IWiaPropertyStorage_DeletePropertyNames(This,cpropid,rgpropid) ( (This)->lpVtbl -> DeletePropertyNames(This,cpropid,rgpropid) )
#define IWiaPropertyStorage_Commit(This,grfCommitFlags) ( (This)->lpVtbl -> Commit(This,grfCommitFlags) )
#define IWiaPropertyStorage_Revert(This) ( (This)->lpVtbl -> Revert(This) )
#define IWiaPropertyStorage_Enum(This,ppenum) ( (This)->lpVtbl -> Enum(This,ppenum) )
#define IWiaPropertyStorage_SetTimes(This,pctime,patime,pmtime) ( (This)->lpVtbl -> SetTimes(This,pctime,patime,pmtime) )
#define IWiaPropertyStorage_SetClass(This,clsid) ( (This)->lpVtbl -> SetClass(This,clsid) )
#define IWiaPropertyStorage_Stat(This,pstatpsstg) ( (This)->lpVtbl -> Stat(This,pstatpsstg) )
#define IWiaPropertyStorage_GetPropertyAttributes(This,cpspec,rgpspec,rgflags,rgpropvar) ( (This)->lpVtbl -> GetPropertyAttributes(This,cpspec,rgpspec,rgflags,rgpropvar) )
#define IWiaPropertyStorage_GetCount(This,pulNumProps) ( (This)->lpVtbl -> GetCount(This,pulNumProps) )
#define IWiaPropertyStorage_GetPropertyStream(This,pCompatibilityId,ppIStream) ( (This)->lpVtbl -> GetPropertyStream(This,pCompatibilityId,ppIStream) )
#define IWiaPropertyStorage_SetPropertyStream(This,pCompatibilityId,pIStream) ( (This)->lpVtbl -> SetPropertyStream(This,pCompatibilityId,pIStream) )
#endif
HRESULT STDMETHODCALLTYPE IWiaPropertyStorage_RemoteWriteMultiple_Proxy(IWiaPropertyStorage *This, ULONG cpspec, const PROPSPEC *rgpspec, const PROPVARIANT *rgpropvar, PROPID propidNameFirst);
void __RPC_STUB IWiaPropertyStorage_RemoteWriteMultiple_Stub(IRpcStubBuffer *This, IRpcChannelBuffer *_pRpcChannelBuffer, PRPC_MESSAGE _pRpcMessage, DWORD *_pdwStubPhase);
HRESULT STDMETHODCALLTYPE IWiaPropertyStorage_RemoteSetPropertyStream_Proxy(IWiaPropertyStorage *This, GUID *pCompatibilityId, IStream *pIStream);
void __RPC_STUB IWiaPropertyStorage_RemoteSetPropertyStream_Stub(IRpcStubBuffer *This, IRpcChannelBuffer *_pRpcChannelBuffer, PRPC_MESSAGE _pRpcMessage, DWORD *_pdwStubPhase);
#endif
#ifndef __IEnumWiaItem_INTERFACE_DEFINED__
#define __IEnumWiaItem_INTERFACE_DEFINED__
extern const IID IID_IEnumWiaItem;
typedef struct IEnumWiaItemVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IEnumWiaItem * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IEnumWiaItem * This);
	ULONG(STDMETHODCALLTYPE * Release) (IEnumWiaItem * This);
	HRESULT(STDMETHODCALLTYPE * Next) (IEnumWiaItem * This, ULONG celt, IWiaItem ** ppIWiaItem, ULONG * pceltFetched);
	HRESULT(STDMETHODCALLTYPE * Skip) (IEnumWiaItem * This, ULONG celt);
	HRESULT(STDMETHODCALLTYPE * Reset) (IEnumWiaItem * This);
	HRESULT(STDMETHODCALLTYPE * Clone) (IEnumWiaItem * This, IEnumWiaItem ** ppIEnum);
	HRESULT(STDMETHODCALLTYPE * GetCount) (IEnumWiaItem * This, ULONG * celt);
	END_INTERFACE
}  IEnumWiaItemVtbl;
interface IEnumWiaItem
{
	CONST_VTBL struct IEnumWiaItemVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IEnumWiaItem_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IEnumWiaItem_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IEnumWiaItem_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IEnumWiaItem_Next(This,celt,ppIWiaItem,pceltFetched) ( (This)->lpVtbl -> Next(This,celt,ppIWiaItem,pceltFetched) )
#define IEnumWiaItem_Skip(This,celt) ( (This)->lpVtbl -> Skip(This,celt) )
#define IEnumWiaItem_Reset(This) ( (This)->lpVtbl -> Reset(This) )
#define IEnumWiaItem_Clone(This,ppIEnum) ( (This)->lpVtbl -> Clone(This,ppIEnum) )
#define IEnumWiaItem_GetCount(This,celt) ( (This)->lpVtbl -> GetCount(This,celt) )
#endif
HRESULT STDMETHODCALLTYPE IEnumWiaItem_RemoteNext_Proxy(IEnumWiaItem *This, ULONG celt, IWiaItem **ppIWiaItem, ULONG *pceltFetched);
void __RPC_STUB IEnumWiaItem_RemoteNext_Stub(IRpcStubBuffer *This, IRpcChannelBuffer *_pRpcChannelBuffer, PRPC_MESSAGE _pRpcMessage, DWORD *_pdwStubPhase);
#endif
typedef struct _WIA_DEV_CAP
{
	GUID guid;
	ULONG ulFlags;
	BSTR bstrName;
	BSTR bstrDescription;
	BSTR bstrIcon;
	BSTR bstrCommandline;
} WIA_DEV_CAP;
typedef struct _WIA_DEV_CAP *PWIA_DEV_CAP;
typedef struct _WIA_DEV_CAP WIA_EVENT_HANDLER;
typedef struct _WIA_DEV_CAP *PWIA_EVENT_HANDLER;
extern RPC_IF_HANDLE __MIDL_itf_wia_xp_0000_0008_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_wia_xp_0000_0008_v0_0_s_ifspec;
#ifndef __IEnumWIA_DEV_CAPS_INTERFACE_DEFINED__
#define __IEnumWIA_DEV_CAPS_INTERFACE_DEFINED__
extern const IID IID_IEnumWIA_DEV_CAPS;
typedef struct IEnumWIA_DEV_CAPSVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IEnumWIA_DEV_CAPS * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IEnumWIA_DEV_CAPS * This);
	ULONG(STDMETHODCALLTYPE * Release) (IEnumWIA_DEV_CAPS * This);
	HRESULT(STDMETHODCALLTYPE * Next) (IEnumWIA_DEV_CAPS * This, ULONG celt, WIA_DEV_CAP * rgelt, ULONG * pceltFetched);
	HRESULT(STDMETHODCALLTYPE * Skip) (IEnumWIA_DEV_CAPS * This, ULONG celt);
	HRESULT(STDMETHODCALLTYPE * Reset) (IEnumWIA_DEV_CAPS * This);
	HRESULT(STDMETHODCALLTYPE * Clone) (IEnumWIA_DEV_CAPS * This, IEnumWIA_DEV_CAPS ** ppIEnum);
	HRESULT(STDMETHODCALLTYPE * GetCount) (IEnumWIA_DEV_CAPS * This, ULONG * pcelt);
	END_INTERFACE
}  IEnumWIA_DEV_CAPSVtbl;
interface IEnumWIA_DEV_CAPS
{
	CONST_VTBL struct IEnumWIA_DEV_CAPSVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IEnumWIA_DEV_CAPS_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IEnumWIA_DEV_CAPS_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IEnumWIA_DEV_CAPS_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IEnumWIA_DEV_CAPS_Next(This,celt,rgelt,pceltFetched) ( (This)->lpVtbl -> Next(This,celt,rgelt,pceltFetched) )
#define IEnumWIA_DEV_CAPS_Skip(This,celt) ( (This)->lpVtbl -> Skip(This,celt) )
#define IEnumWIA_DEV_CAPS_Reset(This) ( (This)->lpVtbl -> Reset(This) )
#define IEnumWIA_DEV_CAPS_Clone(This,ppIEnum) ( (This)->lpVtbl -> Clone(This,ppIEnum) )
#define IEnumWIA_DEV_CAPS_GetCount(This,pcelt) ( (This)->lpVtbl -> GetCount(This,pcelt) )
#endif
HRESULT STDMETHODCALLTYPE IEnumWIA_DEV_CAPS_RemoteNext_Proxy(IEnumWIA_DEV_CAPS *This, ULONG celt, WIA_DEV_CAP *rgelt, ULONG *pceltFetched);
void __RPC_STUB IEnumWIA_DEV_CAPS_RemoteNext_Stub(IRpcStubBuffer *This, IRpcChannelBuffer *_pRpcChannelBuffer, PRPC_MESSAGE _pRpcMessage, DWORD *_pdwStubPhase);
#endif
#ifndef __IEnumWIA_FORMAT_INFO_INTERFACE_DEFINED__
#define __IEnumWIA_FORMAT_INFO_INTERFACE_DEFINED__
extern const IID IID_IEnumWIA_FORMAT_INFO;
typedef struct IEnumWIA_FORMAT_INFOVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IEnumWIA_FORMAT_INFO * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IEnumWIA_FORMAT_INFO * This);
	ULONG(STDMETHODCALLTYPE * Release) (IEnumWIA_FORMAT_INFO * This);
	HRESULT(STDMETHODCALLTYPE * Next) (IEnumWIA_FORMAT_INFO * This, ULONG celt, WIA_FORMAT_INFO * rgelt, ULONG * pceltFetched);
	HRESULT(STDMETHODCALLTYPE * Skip) (IEnumWIA_FORMAT_INFO * This, ULONG celt);
	HRESULT(STDMETHODCALLTYPE * Reset) (IEnumWIA_FORMAT_INFO * This);
	HRESULT(STDMETHODCALLTYPE * Clone) (IEnumWIA_FORMAT_INFO * This, IEnumWIA_FORMAT_INFO ** ppIEnum);
	HRESULT(STDMETHODCALLTYPE * GetCount) (IEnumWIA_FORMAT_INFO * This, ULONG * pcelt);
	END_INTERFACE
}  IEnumWIA_FORMAT_INFOVtbl;
interface IEnumWIA_FORMAT_INFO
{
	CONST_VTBL struct IEnumWIA_FORMAT_INFOVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IEnumWIA_FORMAT_INFO_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IEnumWIA_FORMAT_INFO_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IEnumWIA_FORMAT_INFO_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IEnumWIA_FORMAT_INFO_Next(This,celt,rgelt,pceltFetched) ( (This)->lpVtbl -> Next(This,celt,rgelt,pceltFetched) )
#define IEnumWIA_FORMAT_INFO_Skip(This,celt) ( (This)->lpVtbl -> Skip(This,celt) )
#define IEnumWIA_FORMAT_INFO_Reset(This) ( (This)->lpVtbl -> Reset(This) )
#define IEnumWIA_FORMAT_INFO_Clone(This,ppIEnum) ( (This)->lpVtbl -> Clone(This,ppIEnum) )
#define IEnumWIA_FORMAT_INFO_GetCount(This,pcelt) ( (This)->lpVtbl -> GetCount(This,pcelt) )
#endif
HRESULT STDMETHODCALLTYPE IEnumWIA_FORMAT_INFO_RemoteNext_Proxy(IEnumWIA_FORMAT_INFO *This, ULONG celt, WIA_FORMAT_INFO *rgelt, ULONG *pceltFetched);
void __RPC_STUB IEnumWIA_FORMAT_INFO_RemoteNext_Stub(IRpcStubBuffer *This, IRpcChannelBuffer *_pRpcChannelBuffer, PRPC_MESSAGE _pRpcMessage, DWORD *_pdwStubPhase);
#endif
#ifndef __IWiaLog_INTERFACE_DEFINED__
#define __IWiaLog_INTERFACE_DEFINED__
extern const IID IID_IWiaLog;
typedef struct IWiaLogVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IWiaLog * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IWiaLog * This);
	ULONG(STDMETHODCALLTYPE * Release) (IWiaLog * This);
	HRESULT(STDMETHODCALLTYPE * InitializeLog) (IWiaLog * This, LONG hInstance);
	HRESULT(STDMETHODCALLTYPE * hResult) (IWiaLog * This, HRESULT hResult);
	HRESULT(STDMETHODCALLTYPE * Log) (IWiaLog * This, LONG lFlags, LONG lResID, LONG lDetail, BSTR bstrText);
	END_INTERFACE
}  IWiaLogVtbl;
interface IWiaLog
{
	CONST_VTBL struct IWiaLogVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IWiaLog_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IWiaLog_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IWiaLog_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IWiaLog_InitializeLog(This,hInstance) ( (This)->lpVtbl -> InitializeLog(This,hInstance) )
#define IWiaLog_hResult(This,hResult) ( (This)->lpVtbl -> hResult(This,hResult) )
#define IWiaLog_Log(This,lFlags,lResID,lDetail,bstrText) ( (This)->lpVtbl -> Log(This,lFlags,lResID,lDetail,bstrText) )
#endif
#endif
#ifndef __IWiaLogEx_INTERFACE_DEFINED__
#define __IWiaLogEx_INTERFACE_DEFINED__
extern const IID IID_IWiaLogEx;
typedef struct IWiaLogExVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IWiaLogEx * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IWiaLogEx * This);
	ULONG(STDMETHODCALLTYPE * Release) (IWiaLogEx * This);
	HRESULT(STDMETHODCALLTYPE * InitializeLogEx) (IWiaLogEx * This, BYTE * hInstance);
	HRESULT(STDMETHODCALLTYPE * hResult) (IWiaLogEx * This, HRESULT hResult);
	HRESULT(STDMETHODCALLTYPE * Log) (IWiaLogEx * This, LONG lFlags, LONG lResID, LONG lDetail, BSTR bstrText);
	HRESULT(STDMETHODCALLTYPE * hResultEx) (IWiaLogEx * This, LONG lMethodId, HRESULT hResult);
	HRESULT(STDMETHODCALLTYPE * LogEx) (IWiaLogEx * This, LONG lMethodId, LONG lFlags, LONG lResID, LONG lDetail, BSTR bstrText);
	END_INTERFACE
}  IWiaLogExVtbl;
interface IWiaLogEx
{
	CONST_VTBL struct IWiaLogExVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IWiaLogEx_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IWiaLogEx_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IWiaLogEx_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IWiaLogEx_InitializeLogEx(This,hInstance) ( (This)->lpVtbl -> InitializeLogEx(This,hInstance) )
#define IWiaLogEx_hResult(This,hResult) ( (This)->lpVtbl -> hResult(This,hResult) )
#define IWiaLogEx_Log(This,lFlags,lResID,lDetail,bstrText) ( (This)->lpVtbl -> Log(This,lFlags,lResID,lDetail,bstrText) )
#define IWiaLogEx_hResultEx(This,lMethodId,hResult) ( (This)->lpVtbl -> hResultEx(This,lMethodId,hResult) )
#define IWiaLogEx_LogEx(This,lMethodId,lFlags,lResID,lDetail,bstrText) ( (This)->lpVtbl -> LogEx(This,lMethodId,lFlags,lResID,lDetail,bstrText) )
#endif
#endif
#ifndef __IWiaNotifyDevMgr_INTERFACE_DEFINED__
#define __IWiaNotifyDevMgr_INTERFACE_DEFINED__
extern const IID IID_IWiaNotifyDevMgr;
typedef struct IWiaNotifyDevMgrVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IWiaNotifyDevMgr * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IWiaNotifyDevMgr * This);
	ULONG(STDMETHODCALLTYPE * Release) (IWiaNotifyDevMgr * This);
	HRESULT(STDMETHODCALLTYPE * NewDeviceArrival) (IWiaNotifyDevMgr * This);
	END_INTERFACE
}  IWiaNotifyDevMgrVtbl;
interface IWiaNotifyDevMgr
{
	CONST_VTBL struct IWiaNotifyDevMgrVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IWiaNotifyDevMgr_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IWiaNotifyDevMgr_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IWiaNotifyDevMgr_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IWiaNotifyDevMgr_NewDeviceArrival(This) ( (This)->lpVtbl -> NewDeviceArrival(This) )
#endif
#endif
#ifndef __IWiaItemExtras_INTERFACE_DEFINED__
#define __IWiaItemExtras_INTERFACE_DEFINED__
extern const IID IID_IWiaItemExtras;
typedef struct IWiaItemExtrasVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IWiaItemExtras * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IWiaItemExtras * This);
	ULONG(STDMETHODCALLTYPE * Release) (IWiaItemExtras * This);
	HRESULT(STDMETHODCALLTYPE * GetExtendedErrorInfo) (IWiaItemExtras * This, BSTR * bstrErrorText);
	HRESULT(STDMETHODCALLTYPE * Escape) (IWiaItemExtras * This, DWORD dwEscapeCode, BYTE * lpInData, DWORD cbInDataSize, BYTE * pOutData, DWORD dwOutDataSize, DWORD * pdwActualDataSize);
	HRESULT(STDMETHODCALLTYPE * CancelPendingIO) (IWiaItemExtras * This);
	END_INTERFACE
}  IWiaItemExtrasVtbl;
interface IWiaItemExtras
{
	CONST_VTBL struct IWiaItemExtrasVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IWiaItemExtras_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IWiaItemExtras_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IWiaItemExtras_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IWiaItemExtras_GetExtendedErrorInfo(This,bstrErrorText) ( (This)->lpVtbl -> GetExtendedErrorInfo(This,bstrErrorText) )
#define IWiaItemExtras_Escape(This,dwEscapeCode,lpInData,cbInDataSize,pOutData,dwOutDataSize,pdwActualDataSize) ( (This)->lpVtbl -> Escape(This,dwEscapeCode,lpInData,cbInDataSize,pOutData,dwOutDataSize,pdwActualDataSize) )
#define IWiaItemExtras_CancelPendingIO(This) ( (This)->lpVtbl -> CancelPendingIO(This) )
#endif
#endif
#ifndef __WiaDevMgr_LIBRARY_DEFINED__
#define __WiaDevMgr_LIBRARY_DEFINED__
extern const IID LIBID_WiaDevMgr;
extern const CLSID CLSID_WiaDevMgr;
extern const CLSID CLSID_WiaLog;
#endif
unsigned long __RPC_USER BSTR_UserSize(unsigned long *, unsigned long, BSTR *);
unsigned char *__RPC_USER BSTR_UserMarshal(unsigned long *, unsigned char *, BSTR *);
unsigned char *__RPC_USER BSTR_UserUnmarshal(unsigned long *, unsigned char *, BSTR *);
void __RPC_USER BSTR_UserFree(unsigned long *, BSTR *);
unsigned long __RPC_USER HWND_UserSize(unsigned long *, unsigned long, HWND *);
unsigned char *__RPC_USER HWND_UserMarshal(unsigned long *, unsigned char *, HWND *);
unsigned char *__RPC_USER HWND_UserUnmarshal(unsigned long *, unsigned char *, HWND *);
void __RPC_USER HWND_UserFree(unsigned long *, HWND *);
unsigned long __RPC_USER LPSAFEARRAY_UserSize(unsigned long *, unsigned long, LPSAFEARRAY *);
unsigned char *__RPC_USER LPSAFEARRAY_UserMarshal(unsigned long *, unsigned char *, LPSAFEARRAY *);
unsigned char *__RPC_USER LPSAFEARRAY_UserUnmarshal(unsigned long *, unsigned char *, LPSAFEARRAY *);
void __RPC_USER LPSAFEARRAY_UserFree(unsigned long *, LPSAFEARRAY *);
unsigned long __RPC_USER STGMEDIUM_UserSize(unsigned long *, unsigned long, STGMEDIUM *);
unsigned char *__RPC_USER STGMEDIUM_UserMarshal(unsigned long *, unsigned char *, STGMEDIUM *);
unsigned char *__RPC_USER STGMEDIUM_UserUnmarshal(unsigned long *, unsigned char *, STGMEDIUM *);
void __RPC_USER STGMEDIUM_UserFree(unsigned long *, STGMEDIUM *);
unsigned long __RPC_USER BSTR_UserSize64(unsigned long *, unsigned long, BSTR *);
unsigned char *__RPC_USER BSTR_UserMarshal64(unsigned long *, unsigned char *, BSTR *);
unsigned char *__RPC_USER BSTR_UserUnmarshal64(unsigned long *, unsigned char *, BSTR *);
void __RPC_USER BSTR_UserFree64(unsigned long *, BSTR *);
unsigned long __RPC_USER HWND_UserSize64(unsigned long *, unsigned long, HWND *);
unsigned char *__RPC_USER HWND_UserMarshal64(unsigned long *, unsigned char *, HWND *);
unsigned char *__RPC_USER HWND_UserUnmarshal64(unsigned long *, unsigned char *, HWND *);
void __RPC_USER HWND_UserFree64(unsigned long *, HWND *);
unsigned long __RPC_USER LPSAFEARRAY_UserSize64(unsigned long *, unsigned long, LPSAFEARRAY *);
unsigned char *__RPC_USER LPSAFEARRAY_UserMarshal64(unsigned long *, unsigned char *, LPSAFEARRAY *);
unsigned char *__RPC_USER LPSAFEARRAY_UserUnmarshal64(unsigned long *, unsigned char *, LPSAFEARRAY *);
void __RPC_USER LPSAFEARRAY_UserFree64(unsigned long *, LPSAFEARRAY *);
unsigned long __RPC_USER STGMEDIUM_UserSize64(unsigned long *, unsigned long, STGMEDIUM *);
unsigned char *__RPC_USER STGMEDIUM_UserMarshal64(unsigned long *, unsigned char *, STGMEDIUM *);
unsigned char *__RPC_USER STGMEDIUM_UserUnmarshal64(unsigned long *, unsigned char *, STGMEDIUM *);
void __RPC_USER STGMEDIUM_UserFree64(unsigned long *, STGMEDIUM *);
HRESULT STDMETHODCALLTYPE IWiaDevMgr_CreateDevice_Proxy(IWiaDevMgr *This, BSTR bstrDeviceID, IWiaItem **ppWiaItemRoot);
HRESULT STDMETHODCALLTYPE IWiaDevMgr_CreateDevice_Stub(IWiaDevMgr *This, BSTR bstrDeviceID, IWiaItem **ppWiaItemRoot);
HRESULT STDMETHODCALLTYPE IWiaDevMgr_SelectDeviceDlg_Proxy(IWiaDevMgr *This, HWND hwndParent, LONG lDeviceType, LONG lFlags, BSTR *pbstrDeviceID, IWiaItem **ppItemRoot);
HRESULT STDMETHODCALLTYPE IWiaDevMgr_SelectDeviceDlg_Stub(IWiaDevMgr *This, HWND hwndParent, LONG lDeviceType, LONG lFlags, BSTR *pbstrDeviceID, IWiaItem **ppItemRoot);
HRESULT STDMETHODCALLTYPE IWiaDevMgr_SelectDeviceDlgID_Proxy(IWiaDevMgr *This, HWND hwndParent, LONG lDeviceType, LONG lFlags, BSTR *pbstrDeviceID);
HRESULT STDMETHODCALLTYPE IWiaDevMgr_SelectDeviceDlgID_Stub(IWiaDevMgr *This, HWND hwndParent, LONG lDeviceType, LONG lFlags, BSTR *pbstrDeviceID);
HRESULT STDMETHODCALLTYPE IWiaDevMgr_GetImageDlg_Proxy(IWiaDevMgr *This, HWND hwndParent, LONG lDeviceType, LONG lFlags, LONG lIntent, IWiaItem *pItemRoot, BSTR bstrFilename, GUID *pguidFormat);
HRESULT STDMETHODCALLTYPE IWiaDevMgr_GetImageDlg_Stub(IWiaDevMgr *This, HWND hwndParent, LONG lDeviceType, LONG lFlags, LONG lIntent, IWiaItem *pItemRoot, BSTR bstrFilename, GUID *pguidFormat);
HRESULT STDMETHODCALLTYPE IWiaDevMgr_RegisterEventCallbackProgram_Proxy(IWiaDevMgr *This, LONG lFlags, BSTR bstrDeviceID, const GUID *pEventGUID, BSTR bstrCommandline, BSTR bstrName, BSTR bstrDescription, BSTR bstrIcon);
HRESULT STDMETHODCALLTYPE IWiaDevMgr_RegisterEventCallbackProgram_Stub(IWiaDevMgr *This, LONG lFlags, BSTR bstrDeviceID, const GUID *pEventGUID, BSTR bstrCommandline, BSTR bstrName, BSTR bstrDescription, BSTR bstrIcon);
HRESULT STDMETHODCALLTYPE IWiaDevMgr_RegisterEventCallbackInterface_Proxy(IWiaDevMgr *This, LONG lFlags, BSTR bstrDeviceID, const GUID *pEventGUID, IWiaEventCallback *pIWiaEventCallback, IUnknown **pEventObject);
HRESULT STDMETHODCALLTYPE IWiaDevMgr_RegisterEventCallbackInterface_Stub(IWiaDevMgr *This, LONG lFlags, BSTR bstrDeviceID, const GUID *pEventGUID, IWiaEventCallback *pIWiaEventCallback, IUnknown **pEventObject);
HRESULT STDMETHODCALLTYPE IWiaDevMgr_RegisterEventCallbackCLSID_Proxy(IWiaDevMgr *This, LONG lFlags, BSTR bstrDeviceID, const GUID *pEventGUID, const GUID *pClsID, BSTR bstrName, BSTR bstrDescription, BSTR bstrIcon);
HRESULT STDMETHODCALLTYPE IWiaDevMgr_RegisterEventCallbackCLSID_Stub(IWiaDevMgr *This, LONG lFlags, BSTR bstrDeviceID, const GUID *pEventGUID, const GUID *pClsID, BSTR bstrName, BSTR bstrDescription, BSTR bstrIcon);
HRESULT STDMETHODCALLTYPE IEnumWIA_DEV_INFO_Next_Proxy(IEnumWIA_DEV_INFO *This, ULONG celt, IWiaPropertyStorage **rgelt, ULONG *pceltFetched);
HRESULT STDMETHODCALLTYPE IEnumWIA_DEV_INFO_Next_Stub(IEnumWIA_DEV_INFO *This, ULONG celt, IWiaPropertyStorage **rgelt, ULONG *pceltFetched);
HRESULT STDMETHODCALLTYPE IWiaDataCallback_BandedDataCallback_Proxy(IWiaDataCallback *This, LONG lMessage, LONG lStatus, LONG lPercentComplete, LONG lOffset, LONG lLength, LONG lReserved, LONG lResLength, BYTE *pbBuffer);
HRESULT STDMETHODCALLTYPE IWiaDataCallback_BandedDataCallback_Stub(IWiaDataCallback *This, LONG lMessage, LONG lStatus, LONG lPercentComplete, LONG lOffset, LONG lLength, LONG lReserved, LONG lResLength, BYTE *pbBuffer);
HRESULT STDMETHODCALLTYPE IWiaDataTransfer_idtGetData_Proxy(IWiaDataTransfer *This, LPSTGMEDIUM pMedium, IWiaDataCallback *pIWiaDataCallback);
HRESULT STDMETHODCALLTYPE IWiaDataTransfer_idtGetData_Stub(IWiaDataTransfer *This, LPSTGMEDIUM pMedium, IWiaDataCallback *pIWiaDataCallback);
HRESULT STDMETHODCALLTYPE IWiaDataTransfer_idtGetBandedData_Proxy(IWiaDataTransfer *This, PWIA_DATA_TRANSFER_INFO pWiaDataTransInfo, IWiaDataCallback *pIWiaDataCallback);
HRESULT STDMETHODCALLTYPE IWiaDataTransfer_idtGetBandedData_Stub(IWiaDataTransfer *This, PWIA_DATA_TRANSFER_INFO pWiaDataTransInfo, IWiaDataCallback *pIWiaDataCallback);
HRESULT STDMETHODCALLTYPE IWiaItem_DeviceDlg_Proxy(IWiaItem *This, HWND hwndParent, LONG lFlags, LONG lIntent, LONG *plItemCount, IWiaItem ***ppIWiaItem);
HRESULT STDMETHODCALLTYPE IWiaItem_DeviceDlg_Stub(IWiaItem *This, HWND hwndParent, LONG lFlags, LONG lIntent, LONG *plItemCount, IWiaItem ***pIWiaItem);
HRESULT STDMETHODCALLTYPE IWiaPropertyStorage_WriteMultiple_Proxy(IWiaPropertyStorage *This, ULONG cpspec, const PROPSPEC rgpspec[], const PROPVARIANT rgpropvar[], PROPID propidNameFirst);
HRESULT STDMETHODCALLTYPE IWiaPropertyStorage_WriteMultiple_Stub(IWiaPropertyStorage *This, ULONG cpspec, const PROPSPEC *rgpspec, const PROPVARIANT *rgpropvar, PROPID propidNameFirst);
HRESULT STDMETHODCALLTYPE IWiaPropertyStorage_SetPropertyStream_Proxy(IWiaPropertyStorage *This, GUID *pCompatibilityId, IStream *pIStream);
HRESULT STDMETHODCALLTYPE IWiaPropertyStorage_SetPropertyStream_Stub(IWiaPropertyStorage *This, GUID *pCompatibilityId, IStream *pIStream);
HRESULT STDMETHODCALLTYPE IEnumWiaItem_Next_Proxy(IEnumWiaItem *This, ULONG celt, IWiaItem **ppIWiaItem, ULONG *pceltFetched);
HRESULT STDMETHODCALLTYPE IEnumWiaItem_Next_Stub(IEnumWiaItem *This, ULONG celt, IWiaItem **ppIWiaItem, ULONG *pceltFetched);
HRESULT STDMETHODCALLTYPE IEnumWIA_DEV_CAPS_Next_Proxy(IEnumWIA_DEV_CAPS *This, ULONG celt, WIA_DEV_CAP *rgelt, ULONG *pceltFetched);
HRESULT STDMETHODCALLTYPE IEnumWIA_DEV_CAPS_Next_Stub(IEnumWIA_DEV_CAPS *This, ULONG celt, WIA_DEV_CAP *rgelt, ULONG *pceltFetched);
HRESULT STDMETHODCALLTYPE IEnumWIA_FORMAT_INFO_Next_Proxy(IEnumWIA_FORMAT_INFO *This, ULONG celt, WIA_FORMAT_INFO *rgelt, ULONG *pceltFetched);
HRESULT STDMETHODCALLTYPE IEnumWIA_FORMAT_INFO_Next_Stub(IEnumWIA_FORMAT_INFO *This, ULONG celt, WIA_FORMAT_INFO *rgelt, ULONG *pceltFetched);
#endif

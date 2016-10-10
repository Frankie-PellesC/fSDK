/*+@@file@@----------------------------------------------------------------*//*!
 \file		napcommon.h
 \par Description 
            Extension and update of headers for PellesC compiler suite.
 \par Project: 
            PellesC Headers extension
 \date		Created  on Sun Sep 11 22:10:42 2016
 \date		Modified on Sun Sep 11 22:10:42 2016
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
#ifndef __napcommon_h__
#define __napcommon_h__
#if __POCC__ >= 500
#pragma once
#endif
#ifndef __INapComponentInfo_FWD_DEFINED__
#define __INapComponentInfo_FWD_DEFINED__
typedef interface INapComponentInfo INapComponentInfo;
#endif
#ifndef __INapComponentConfig_FWD_DEFINED__
#define __INapComponentConfig_FWD_DEFINED__
typedef interface INapComponentConfig INapComponentConfig;
#endif
#ifndef __INapComponentConfig2_FWD_DEFINED__
#define __INapComponentConfig2_FWD_DEFINED__
typedef interface INapComponentConfig2 INapComponentConfig2;
#endif
#ifndef __INapComponentConfig3_FWD_DEFINED__
#define __INapComponentConfig3_FWD_DEFINED__
typedef interface INapComponentConfig3 INapComponentConfig3;
#endif
#include "NapTypes.h"
#ifndef __INapComponentInfo_INTERFACE_DEFINED__
#define __INapComponentInfo_INTERFACE_DEFINED__
extern const IID IID_INapComponentInfo;
typedef struct INapComponentInfoVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (INapComponentInfo * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (INapComponentInfo * This);
	ULONG(STDMETHODCALLTYPE * Release) (INapComponentInfo * This);
	HRESULT(STDMETHODCALLTYPE * GetFriendlyName) (INapComponentInfo * This, MessageId * friendlyName);
	HRESULT(STDMETHODCALLTYPE * GetDescription) (INapComponentInfo * This, MessageId * description);
	HRESULT(STDMETHODCALLTYPE * GetVendorName) (INapComponentInfo * This, MessageId * vendorName);
	HRESULT(STDMETHODCALLTYPE * GetVersion) (INapComponentInfo * This, MessageId * version);
	HRESULT(STDMETHODCALLTYPE * GetIcon) (INapComponentInfo * This, CountedString ** dllFilePath, UINT32 * iconResourceId);
	HRESULT(STDMETHODCALLTYPE * ConvertErrorCodeToMessageId) (INapComponentInfo * This, HRESULT errorCode, MessageId * msgId);
	HRESULT(STDMETHODCALLTYPE * GetLocalizedString) (INapComponentInfo * This, MessageId msgId, CountedString ** string);
	END_INTERFACE
}  INapComponentInfoVtbl;
interface INapComponentInfo
{
	CONST_VTBL struct INapComponentInfoVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define INapComponentInfo_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define INapComponentInfo_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define INapComponentInfo_Release(This) ( (This)->lpVtbl -> Release(This) )
#define INapComponentInfo_GetFriendlyName(This,friendlyName) ( (This)->lpVtbl -> GetFriendlyName(This,friendlyName) )
#define INapComponentInfo_GetDescription(This,description) ( (This)->lpVtbl -> GetDescription(This,description) )
#define INapComponentInfo_GetVendorName(This,vendorName) ( (This)->lpVtbl -> GetVendorName(This,vendorName) )
#define INapComponentInfo_GetVersion(This,version) ( (This)->lpVtbl -> GetVersion(This,version) )
#define INapComponentInfo_GetIcon(This,dllFilePath,iconResourceId) ( (This)->lpVtbl -> GetIcon(This,dllFilePath,iconResourceId) )
#define INapComponentInfo_ConvertErrorCodeToMessageId(This,errorCode,msgId) ( (This)->lpVtbl -> ConvertErrorCodeToMessageId(This,errorCode,msgId) )
#define INapComponentInfo_GetLocalizedString(This,msgId,string) ( (This)->lpVtbl -> GetLocalizedString(This,msgId,string) )
#endif
#endif
#ifndef __INapComponentConfig_INTERFACE_DEFINED__
#define __INapComponentConfig_INTERFACE_DEFINED__
extern const IID IID_INapComponentConfig;
typedef struct INapComponentConfigVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (INapComponentConfig * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (INapComponentConfig * This);
	ULONG(STDMETHODCALLTYPE * Release) (INapComponentConfig * This);
	HRESULT(STDMETHODCALLTYPE * IsUISupported) (INapComponentConfig * This, BOOL * isSupported);
	HRESULT(STDMETHODCALLTYPE * InvokeUI) (INapComponentConfig * This, HWND hwndParent);
	HRESULT(STDMETHODCALLTYPE * GetConfig) (INapComponentConfig * This, UINT16 * bCount, BYTE ** data);
	HRESULT(STDMETHODCALLTYPE * SetConfig) (INapComponentConfig * This, UINT16 bCount, BYTE * data);
	END_INTERFACE
}  INapComponentConfigVtbl;
interface INapComponentConfig
{
	CONST_VTBL struct INapComponentConfigVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define INapComponentConfig_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define INapComponentConfig_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define INapComponentConfig_Release(This) ( (This)->lpVtbl -> Release(This) )
#define INapComponentConfig_IsUISupported(This,isSupported) ( (This)->lpVtbl -> IsUISupported(This,isSupported) )
#define INapComponentConfig_InvokeUI(This,hwndParent) ( (This)->lpVtbl -> InvokeUI(This,hwndParent) )
#define INapComponentConfig_GetConfig(This,bCount,data) ( (This)->lpVtbl -> GetConfig(This,bCount,data) )
#define INapComponentConfig_SetConfig(This,bCount,data) ( (This)->lpVtbl -> SetConfig(This,bCount,data) )
#endif
#endif
#ifndef __INapComponentConfig2_INTERFACE_DEFINED__
#define __INapComponentConfig2_INTERFACE_DEFINED__
extern const IID IID_INapComponentConfig2;
typedef struct INapComponentConfig2Vtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (INapComponentConfig2 * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (INapComponentConfig2 * This);
	ULONG(STDMETHODCALLTYPE * Release) (INapComponentConfig2 * This);
	HRESULT(STDMETHODCALLTYPE * IsUISupported) (INapComponentConfig2 * This, BOOL * isSupported);
	HRESULT(STDMETHODCALLTYPE * InvokeUI) (INapComponentConfig2 * This, HWND hwndParent);
	HRESULT(STDMETHODCALLTYPE * GetConfig) (INapComponentConfig2 * This, UINT16 * bCount, BYTE ** data);
	HRESULT(STDMETHODCALLTYPE * SetConfig) (INapComponentConfig2 * This, UINT16 bCount, BYTE * data);
	HRESULT(STDMETHODCALLTYPE * IsRemoteConfigSupported) (INapComponentConfig2 * This, BOOL * isSupported, UINT8 * remoteConfigType);
	HRESULT(STDMETHODCALLTYPE * InvokeUIForMachine) (INapComponentConfig2 * This, HWND hwndParent, CountedString * machineName);
	HRESULT(STDMETHODCALLTYPE * InvokeUIFromConfigBlob) (INapComponentConfig2 * This, HWND hwndParent, UINT16 inbCount, BYTE * inData, UINT16 * outbCount, BYTE ** outdata, BOOL * fConfigChanged);
	END_INTERFACE
}  INapComponentConfig2Vtbl;
interface INapComponentConfig2
{
	CONST_VTBL struct INapComponentConfig2Vtbl *lpVtbl;
};
#ifdef COBJMACROS
#define INapComponentConfig2_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define INapComponentConfig2_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define INapComponentConfig2_Release(This) ( (This)->lpVtbl -> Release(This) )
#define INapComponentConfig2_IsUISupported(This,isSupported) ( (This)->lpVtbl -> IsUISupported(This,isSupported) )
#define INapComponentConfig2_InvokeUI(This,hwndParent) ( (This)->lpVtbl -> InvokeUI(This,hwndParent) )
#define INapComponentConfig2_GetConfig(This,bCount,data) ( (This)->lpVtbl -> GetConfig(This,bCount,data) )
#define INapComponentConfig2_SetConfig(This,bCount,data) ( (This)->lpVtbl -> SetConfig(This,bCount,data) )
#define INapComponentConfig2_IsRemoteConfigSupported(This,isSupported,remoteConfigType) ( (This)->lpVtbl -> IsRemoteConfigSupported(This,isSupported,remoteConfigType) )
#define INapComponentConfig2_InvokeUIForMachine(This,hwndParent,machineName) ( (This)->lpVtbl -> InvokeUIForMachine(This,hwndParent,machineName) )
#define INapComponentConfig2_InvokeUIFromConfigBlob(This,hwndParent,inbCount,inData,outbCount,outdata,fConfigChanged) ( (This)->lpVtbl -> InvokeUIFromConfigBlob(This,hwndParent,inbCount,inData,outbCount,outdata,fConfigChanged) )
#endif
#endif
#ifndef __INapComponentConfig3_INTERFACE_DEFINED__
#define __INapComponentConfig3_INTERFACE_DEFINED__
extern const IID IID_INapComponentConfig3;
typedef struct INapComponentConfig3Vtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (INapComponentConfig3 * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (INapComponentConfig3 * This);
	ULONG(STDMETHODCALLTYPE * Release) (INapComponentConfig3 * This);
	HRESULT(STDMETHODCALLTYPE * IsUISupported) (INapComponentConfig3 * This, BOOL * isSupported);
	HRESULT(STDMETHODCALLTYPE * InvokeUI) (INapComponentConfig3 * This, HWND hwndParent);
	HRESULT(STDMETHODCALLTYPE * GetConfig) (INapComponentConfig3 * This, UINT16 * bCount, BYTE ** data);
	HRESULT(STDMETHODCALLTYPE * SetConfig) (INapComponentConfig3 * This, UINT16 bCount, BYTE * data);
	HRESULT(STDMETHODCALLTYPE * IsRemoteConfigSupported) (INapComponentConfig3 * This, BOOL * isSupported, UINT8 * remoteConfigType);
	HRESULT(STDMETHODCALLTYPE * InvokeUIForMachine) (INapComponentConfig3 * This, HWND hwndParent, CountedString * machineName);
	HRESULT(STDMETHODCALLTYPE * InvokeUIFromConfigBlob) (INapComponentConfig3 * This, HWND hwndParent, UINT16 inbCount, BYTE * inData, UINT16 * outbCount, BYTE ** outdata, BOOL * fConfigChanged);
	HRESULT(STDMETHODCALLTYPE * NewConfig) (INapComponentConfig3 * This, UINT32 configID);
	HRESULT(STDMETHODCALLTYPE * DeleteConfig) (INapComponentConfig3 * This, UINT32 configID);
	HRESULT(STDMETHODCALLTYPE * DeleteAllConfig) (INapComponentConfig3 * This);
	HRESULT(STDMETHODCALLTYPE * GetConfigFromID) (INapComponentConfig3 * This, UINT32 configID, UINT16 * count, BYTE ** outdata);
	HRESULT(STDMETHODCALLTYPE * SetConfigToID) (INapComponentConfig3 * This, UINT32 configID, UINT16 count, BYTE * data);
	END_INTERFACE
}  INapComponentConfig3Vtbl;
interface INapComponentConfig3
{
	CONST_VTBL struct INapComponentConfig3Vtbl *lpVtbl;
};
#ifdef COBJMACROS
#define INapComponentConfig3_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define INapComponentConfig3_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define INapComponentConfig3_Release(This) ( (This)->lpVtbl -> Release(This) )
#define INapComponentConfig3_IsUISupported(This,isSupported) ( (This)->lpVtbl -> IsUISupported(This,isSupported) )
#define INapComponentConfig3_InvokeUI(This,hwndParent) ( (This)->lpVtbl -> InvokeUI(This,hwndParent) )
#define INapComponentConfig3_GetConfig(This,bCount,data) ( (This)->lpVtbl -> GetConfig(This,bCount,data) )
#define INapComponentConfig3_SetConfig(This,bCount,data) ( (This)->lpVtbl -> SetConfig(This,bCount,data) )
#define INapComponentConfig3_IsRemoteConfigSupported(This,isSupported,remoteConfigType) ( (This)->lpVtbl -> IsRemoteConfigSupported(This,isSupported,remoteConfigType) )
#define INapComponentConfig3_InvokeUIForMachine(This,hwndParent,machineName) ( (This)->lpVtbl -> InvokeUIForMachine(This,hwndParent,machineName) )
#define INapComponentConfig3_InvokeUIFromConfigBlob(This,hwndParent,inbCount,inData,outbCount,outdata,fConfigChanged) ( (This)->lpVtbl -> InvokeUIFromConfigBlob(This,hwndParent,inbCount,inData,outbCount,outdata,fConfigChanged) )
#define INapComponentConfig3_NewConfig(This,configID) ( (This)->lpVtbl -> NewConfig(This,configID) )
#define INapComponentConfig3_DeleteConfig(This,configID) ( (This)->lpVtbl -> DeleteConfig(This,configID) )
#define INapComponentConfig3_DeleteAllConfig(This) ( (This)->lpVtbl -> DeleteAllConfig(This) )
#define INapComponentConfig3_GetConfigFromID(This,configID,count,outdata) ( (This)->lpVtbl -> GetConfigFromID(This,configID,count,outdata) )
#define INapComponentConfig3_SetConfigToID(This,configID,count,data) ( (This)->lpVtbl -> SetConfigToID(This,configID,count,data) )
#endif
#endif
unsigned long __RPC_USER HWND_UserSize(unsigned long *, unsigned long, HWND *);
unsigned char *__RPC_USER HWND_UserMarshal(unsigned long *, unsigned char *, HWND *);
unsigned char *__RPC_USER HWND_UserUnmarshal(unsigned long *, unsigned char *, HWND *);
void __RPC_USER HWND_UserFree(unsigned long *, HWND *);
unsigned long __RPC_USER HWND_UserSize64(unsigned long *, unsigned long, HWND *);
unsigned char *__RPC_USER HWND_UserMarshal64(unsigned long *, unsigned char *, HWND *);
unsigned char *__RPC_USER HWND_UserUnmarshal64(unsigned long *, unsigned char *, HWND *);
void __RPC_USER HWND_UserFree64(unsigned long *, HWND *);
#endif

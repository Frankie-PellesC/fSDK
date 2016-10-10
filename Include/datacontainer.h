/*+@@file@@----------------------------------------------------------------*//*!
 \file		datacontainer.h
 \par Description 
            Extension and update of headers for PellesC compiler suite.
 \par Project: 
            PellesC Headers extension
 \date		Created  on Tue Jul  5 13:51:29 2016
 \date		Modified on Tue Jul  5 13:51:29 2016
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
#ifndef __datacontainer_h__
#define __datacontainer_h__
#if __POCC__ >= 500
#pragma once
#endif
#ifndef __IWMSDataSourcePlugin_FWD_DEFINED__
#define __IWMSDataSourcePlugin_FWD_DEFINED__
typedef interface IWMSDataSourcePlugin IWMSDataSourcePlugin;
#endif
#ifndef __IWMSDataSourcePluginCallback_FWD_DEFINED__
#define __IWMSDataSourcePluginCallback_FWD_DEFINED__
typedef interface IWMSDataSourcePluginCallback IWMSDataSourcePluginCallback;
#endif
#ifndef __IWMSDataContainer_FWD_DEFINED__
#define __IWMSDataContainer_FWD_DEFINED__
typedef interface IWMSDataContainer IWMSDataContainer;
#endif
#ifndef __IWMSDataContainerCallback_FWD_DEFINED__
#define __IWMSDataContainerCallback_FWD_DEFINED__
typedef interface IWMSDataContainerCallback IWMSDataContainerCallback;
#endif
#ifndef __IWMSDirectory_FWD_DEFINED__
#define __IWMSDirectory_FWD_DEFINED__
typedef interface IWMSDirectory IWMSDirectory;
#endif
#include "objidl.h"
#include "WMSBuffer.h"
#include "WMSContext.h"
#include "DataContainerVersion.h"
#include "wmsPacket.h"
#define WMS_DATA_CONTAINER_NONSEEKABLE 0xFFFFFFFFFFFFFFFF
EXTERN_GUID(IID_IWMSDataSourcePlugin, 0xE1CD3525, 0x03D7, 0x11d2, 0x9E, 0xED, 0x00, 0x60, 0x97, 0xD2, 0xD7, 0xCF);
EXTERN_GUID(IID_IWMSDataSourcePluginCallback, 0xE1CD3526, 0x03D7, 0x11d2, 0x9E, 0xED, 0x00, 0x60, 0x97, 0xD2, 0xD7, 0xCF);
EXTERN_GUID(IID_IWMSDataContainer, 0xE6EE9A13, 0x0FCC, 0x11d2, 0x9E, 0xEE, 0x00, 0x60, 0x97, 0xD2, 0xD7, 0xCF);
EXTERN_GUID(IID_IWMSDataContainerCallback, 0x2E34AB82, 0x0D3D, 0x11d2, 0x9E, 0xEE, 0x00, 0x60, 0x97, 0xD2, 0xD7, 0xCF);
EXTERN_GUID(IID_IWMSDirectory, 0x6fa365e7, 0xe8b9, 0x437a, 0x8c, 0x4b, 0x65, 0x52, 0xdf, 0xbb, 0xc, 0x57);
EXTERN_GUID(IID_IWMSUnknownFormat, 0x9b6c9e51, 0x4813, 0x11d2, 0x9e, 0xff, 0x00, 0x60, 0x97, 0xd2, 0xd7, 0xcf);
EXTERN_GUID(IID_IWMSDirectoryFormat, 0x7408ceb0, 0x3a5a, 0x41b6, 0xa5, 0xec, 0x9a, 0x4e, 0x81, 0x1c, 0x96, 0x73);
EXTERN_GUID(IID_IWMSPlaylistSmilFormat, 0xc34294ea, 0xe111, 0x4fb2, 0xbe, 0x6b, 0xec, 0x68, 0x6a, 0x1a, 0x97, 0x57);
typedef enum WMS_DATA_CONTAINER_OPEN_FLAGS
{
	WMS_DATA_CONTAINER_READ_ACCESS = 0x1,
	WMS_DATA_CONTAINER_WRITE_ACCESS = 0x2,
	WMS_DATA_CONTAINER_CREATE_NEW_CONTAINER = 0x4,
	WMS_DATA_CONTAINER_ALLOW_BUFFER_IO = 0x8,
	WMS_DATA_CONTAINER_SHARED_SOURCE = 0x10
} WMS_DATA_CONTAINER_OPEN_FLAGS;
typedef enum WMS_DIRECTORY_ENTRY_FLAGS
{
	WMS_DIRECTORY_ENTRY_IS_DIRECTORY = 0x1
} WMS_DIRECTORY_ENTRY_FLAGS;
typedef enum WMS_DATA_CONTAINER_GETINFO_VALUES
{
	WMS_DATA_CONTAINER_SIZE = 1,
	WMS_DATA_CONTAINER_MAX_SUPPORTED_READ_SIZE = 2
} WMS_DATA_CONTAINER_GETINFO_VALUES;
typedef enum WMS_DATA_CONTAINER_GETINFO_FLAGS
{
	WMS_SEEKABLE_CONTAINER = 0x1,
	WMS_LOCAL_DATA_CONTAINER = 0x2
} WMS_DATA_CONTAINER_GETINFO_FLAGS;
typedef enum WMS_DATA_CONTAINER_ATTRIBUTES
{
	WMS_DATA_CONTAINER_SUPPORTS_ENUMERATION = 0x1
} WMS_DATA_CONTAINER_ATTRIBUTES;
typedef unsigned __int64 QWORD;
extern RPC_IF_HANDLE __MIDL_itf_datacontainer_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_datacontainer_0000_0000_v0_0_s_ifspec;
#ifndef __IWMSDataSourcePlugin_INTERFACE_DEFINED__
#define __IWMSDataSourcePlugin_INTERFACE_DEFINED__
extern const IID IID_IWMSDataSourcePlugin;
typedef struct IWMSDataSourcePluginVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IWMSDataSourcePlugin * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IWMSDataSourcePlugin * This);
	ULONG(STDMETHODCALLTYPE * Release) (IWMSDataSourcePlugin * This);
	HRESULT(STDMETHODCALLTYPE * GetDataSourceAttributes) (IWMSDataSourcePlugin * This, DWORD * pdwFlags);
	HRESULT(STDMETHODCALLTYPE * GetRootDirectories) (IWMSDataSourcePlugin * This, LPWSTR * pstrRootDirectoryList, DWORD dwMaxRoots, IWMSDataSourcePluginCallback * pCallback, QWORD qwContext);
	HRESULT(STDMETHODCALLTYPE * OpenDataContainer) (IWMSDataSourcePlugin * This, IWMSCommandContext * pCommandContext, IWMSContext * pUserContext, IWMSContext * pPresentationContext, LPWSTR pszContainerName, DWORD dwFlags, IWMSBufferAllocator * pBufferAllocator, IWMSDataSourcePluginCallback * pCallback, QWORD qwContext);
	HRESULT(STDMETHODCALLTYPE * OpenDirectory) (IWMSDataSourcePlugin * This, IWMSCommandContext * pCommandContext, IWMSContext * pUserContext, IWMSContext * pPresentationContext, LPWSTR pszContainerName, DWORD dwFlags, IWMSBufferAllocator * pBufferAllocator, IWMSDataSourcePluginCallback * pCallback, QWORD qwContext);
	HRESULT(STDMETHODCALLTYPE * DeleteDataContainer) (IWMSDataSourcePlugin * This, LPWSTR pszContainerName, DWORD dwFlags, IWMSDataSourcePluginCallback * pCallback, QWORD qwContext);
	HRESULT(STDMETHODCALLTYPE * GetDataContainerVersion) (IWMSDataSourcePlugin * This, IWMSCommandContext * pCommandContext, IWMSContext * pUserContext, IWMSContext * pPresContext, LPWSTR pszContainerName, DWORD dwFlags, IWMSDataSourcePluginCallback * pCallback, QWORD qwContext);
	HRESULT(STDMETHODCALLTYPE * CreateDataSourceDirectory) (IWMSDataSourcePlugin * This, IWMSCommandContext * pCommandContext, LPWSTR pszContainerName, DWORD dwFlags, IWMSDataSourcePluginCallback * pCallback, QWORD qwContext);
	HRESULT(STDMETHODCALLTYPE * DeleteDirectory) (IWMSDataSourcePlugin * This, LPWSTR pszContainerName, DWORD dwFlags, IWMSDataSourcePluginCallback * pCallback, QWORD qwContext);
	END_INTERFACE
}  IWMSDataSourcePluginVtbl;
interface IWMSDataSourcePlugin
{
	CONST_VTBL struct IWMSDataSourcePluginVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IWMSDataSourcePlugin_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IWMSDataSourcePlugin_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define IWMSDataSourcePlugin_Release(This)( (This)->lpVtbl -> Release(This) )
#define IWMSDataSourcePlugin_GetDataSourceAttributes(This,pdwFlags)( (This)->lpVtbl -> GetDataSourceAttributes(This,pdwFlags) )
#define IWMSDataSourcePlugin_GetRootDirectories(This,pstrRootDirectoryList,dwMaxRoots,pCallback,qwContext)( (This)->lpVtbl -> GetRootDirectories(This,pstrRootDirectoryList,dwMaxRoots,pCallback,qwContext) )
#define IWMSDataSourcePlugin_OpenDataContainer(This,pCommandContext,pUserContext,pPresentationContext,pszContainerName,dwFlags,pBufferAllocator,pCallback,qwContext)( (This)->lpVtbl -> OpenDataContainer(This,pCommandContext,pUserContext,pPresentationContext,pszContainerName,dwFlags,pBufferAllocator,pCallback,qwContext) )
#define IWMSDataSourcePlugin_OpenDirectory(This,pCommandContext,pUserContext,pPresentationContext,pszContainerName,dwFlags,pBufferAllocator,pCallback,qwContext)( (This)->lpVtbl -> OpenDirectory(This,pCommandContext,pUserContext,pPresentationContext,pszContainerName,dwFlags,pBufferAllocator,pCallback,qwContext) )
#define IWMSDataSourcePlugin_DeleteDataContainer(This,pszContainerName,dwFlags,pCallback,qwContext)( (This)->lpVtbl -> DeleteDataContainer(This,pszContainerName,dwFlags,pCallback,qwContext) )
#define IWMSDataSourcePlugin_GetDataContainerVersion(This,pCommandContext,pUserContext,pPresContext,pszContainerName,dwFlags,pCallback,qwContext)( (This)->lpVtbl -> GetDataContainerVersion(This,pCommandContext,pUserContext,pPresContext,pszContainerName,dwFlags,pCallback,qwContext) )
#define IWMSDataSourcePlugin_CreateDataSourceDirectory(This,pCommandContext,pszContainerName,dwFlags,pCallback,qwContext)( (This)->lpVtbl -> CreateDataSourceDirectory(This,pCommandContext,pszContainerName,dwFlags,pCallback,qwContext) )
#define IWMSDataSourcePlugin_DeleteDirectory(This,pszContainerName,dwFlags,pCallback,qwContext)( (This)->lpVtbl -> DeleteDirectory(This,pszContainerName,dwFlags,pCallback,qwContext) )
#endif
#endif
#ifndef __IWMSDataSourcePluginCallback_INTERFACE_DEFINED__
#define __IWMSDataSourcePluginCallback_INTERFACE_DEFINED__
extern const IID IID_IWMSDataSourcePluginCallback;
typedef struct IWMSDataSourcePluginCallbackVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IWMSDataSourcePluginCallback * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IWMSDataSourcePluginCallback * This);
	ULONG(STDMETHODCALLTYPE * Release) (IWMSDataSourcePluginCallback * This);
	HRESULT(STDMETHODCALLTYPE * OnOpenDataContainer) (IWMSDataSourcePluginCallback * This, HRESULT hr, IWMSDataContainer * pDataContainer, QWORD qwContext);
	HRESULT(STDMETHODCALLTYPE * OnOpenDirectory) (IWMSDataSourcePluginCallback * This, HRESULT hr, IWMSDirectory * pDirectory, QWORD qwContext);
	HRESULT(STDMETHODCALLTYPE * OnOpenPacketStreamDataContainer) (IWMSDataSourcePluginCallback * This, HRESULT hr, IUnknown * pLiveDataContainer, QWORD qwContext);
	HRESULT(STDMETHODCALLTYPE * OnDeleteDataContainer) (IWMSDataSourcePluginCallback * This, HRESULT hr, QWORD qwContext);
	HRESULT(STDMETHODCALLTYPE * OnGetDataContainerVersion) (IWMSDataSourcePluginCallback * This, HRESULT hr, IWMSDataContainerVersion * pVersion, QWORD qwContext);
	HRESULT(STDMETHODCALLTYPE * OnGetRootDirectories) (IWMSDataSourcePluginCallback * This, HRESULT hr, DWORD dwNumReturnedRoots, DWORD dwTotalNumRoots, QWORD qwContext);
	HRESULT(STDMETHODCALLTYPE * OnCreateDirectory) (IWMSDataSourcePluginCallback * This, HRESULT hr, QWORD qwContext);
	HRESULT(STDMETHODCALLTYPE * OnDeleteDirectory) (IWMSDataSourcePluginCallback * This, HRESULT hr, QWORD qwContext);
	END_INTERFACE
}  IWMSDataSourcePluginCallbackVtbl;
interface IWMSDataSourcePluginCallback
{
	CONST_VTBL struct IWMSDataSourcePluginCallbackVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IWMSDataSourcePluginCallback_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IWMSDataSourcePluginCallback_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define IWMSDataSourcePluginCallback_Release(This)( (This)->lpVtbl -> Release(This) )
#define IWMSDataSourcePluginCallback_OnOpenDataContainer(This,hr,pDataContainer,qwContext)( (This)->lpVtbl -> OnOpenDataContainer(This,hr,pDataContainer,qwContext) )
#define IWMSDataSourcePluginCallback_OnOpenDirectory(This,hr,pDirectory,qwContext)( (This)->lpVtbl -> OnOpenDirectory(This,hr,pDirectory,qwContext) )
#define IWMSDataSourcePluginCallback_OnOpenPacketStreamDataContainer(This,hr,pLiveDataContainer,qwContext)( (This)->lpVtbl -> OnOpenPacketStreamDataContainer(This,hr,pLiveDataContainer,qwContext) )
#define IWMSDataSourcePluginCallback_OnDeleteDataContainer(This,hr,qwContext)( (This)->lpVtbl -> OnDeleteDataContainer(This,hr,qwContext) )
#define IWMSDataSourcePluginCallback_OnGetDataContainerVersion(This,hr,pVersion,qwContext)( (This)->lpVtbl -> OnGetDataContainerVersion(This,hr,pVersion,qwContext) )
#define IWMSDataSourcePluginCallback_OnGetRootDirectories(This,hr,dwNumReturnedRoots,dwTotalNumRoots,qwContext)( (This)->lpVtbl -> OnGetRootDirectories(This,hr,dwNumReturnedRoots,dwTotalNumRoots,qwContext) )
#define IWMSDataSourcePluginCallback_OnCreateDirectory(This,hr,qwContext)( (This)->lpVtbl -> OnCreateDirectory(This,hr,qwContext) )
#define IWMSDataSourcePluginCallback_OnDeleteDirectory(This,hr,qwContext)( (This)->lpVtbl -> OnDeleteDirectory(This,hr,qwContext) )
#endif
#endif
typedef struct __MIDL___MIDL_itf_datacontainer_0000_0002_0001
{
	LPOLESTR pstrName;
	DWORD dwFlags;
	QWORD qwSize;
} WMSDirectoryEntryInfo;
extern RPC_IF_HANDLE __MIDL_itf_datacontainer_0000_0002_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_datacontainer_0000_0002_v0_0_s_ifspec;
#ifndef __IWMSDataContainer_INTERFACE_DEFINED__
#define __IWMSDataContainer_INTERFACE_DEFINED__
extern const IID IID_IWMSDataContainer;
typedef struct IWMSDataContainerVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IWMSDataContainer * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IWMSDataContainer * This);
	ULONG(STDMETHODCALLTYPE * Release) (IWMSDataContainer * This);
	HRESULT(STDMETHODCALLTYPE * GetContainerFormat) (IWMSDataContainer * This, GUID * pFormat);
	HRESULT(STDMETHODCALLTYPE * GetDataSourcePlugin) (IWMSDataContainer * This, IWMSDataSourcePlugin ** ppDataSource);
	HRESULT(STDMETHODCALLTYPE * GetInfo) (IWMSDataContainer * This, DWORD dwInfoValueId, IWMSDataContainerCallback * pCallback, QWORD qwContext);
	HRESULT(STDMETHODCALLTYPE * Read) (IWMSDataContainer * This, BYTE * pbBuffer, QWORD qwOffset, DWORD dwMaxDataSize, DWORD dwFlags, IWMSDataContainerCallback * pCallback, QWORD qwContext);
	HRESULT(STDMETHODCALLTYPE * Write) (IWMSDataContainer * This, BYTE * pbBuffer, DWORD dwDataSize, QWORD qwWritePosition, IWMSDataContainerCallback * pCallback, QWORD qwContext);
	HRESULT(STDMETHODCALLTYPE * GetTransferParameters) (IWMSDataContainer * This, QWORD qwDesiredOffset, DWORD dwDesiredMinSize, DWORD dwDesiredMaxSize, QWORD * pqwOffset, DWORD * pdwSize, DWORD * pdwBufferAlignment);
	HRESULT(STDMETHODCALLTYPE * DoDataContainerExtendedCommand) (IWMSDataContainer * This, LPWSTR szCommandName, IWMSCommandContext * pCommand, DWORD dwCallFlags, IWMSDataContainerCallback * pCallback, QWORD qwContext);
	HRESULT(STDMETHODCALLTYPE * FinishParsingPacketlist) (IWMSDataContainer * This, IWMSPacketList * pPacketList);
	END_INTERFACE
}  IWMSDataContainerVtbl;
interface IWMSDataContainer
{
	CONST_VTBL struct IWMSDataContainerVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IWMSDataContainer_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IWMSDataContainer_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define IWMSDataContainer_Release(This)( (This)->lpVtbl -> Release(This) )
#define IWMSDataContainer_GetContainerFormat(This,pFormat)( (This)->lpVtbl -> GetContainerFormat(This,pFormat) )
#define IWMSDataContainer_GetDataSourcePlugin(This,ppDataSource)( (This)->lpVtbl -> GetDataSourcePlugin(This,ppDataSource) )
#define IWMSDataContainer_GetInfo(This,dwInfoValueId,pCallback,qwContext)( (This)->lpVtbl -> GetInfo(This,dwInfoValueId,pCallback,qwContext) )
#define IWMSDataContainer_Read(This,pbBuffer,qwOffset,dwMaxDataSize,dwFlags,pCallback,qwContext)( (This)->lpVtbl -> Read(This,pbBuffer,qwOffset,dwMaxDataSize,dwFlags,pCallback,qwContext) )
#define IWMSDataContainer_Write(This,pbBuffer,dwDataSize,qwWritePosition,pCallback,qwContext)( (This)->lpVtbl -> Write(This,pbBuffer,dwDataSize,qwWritePosition,pCallback,qwContext) )
#define IWMSDataContainer_GetTransferParameters(This,qwDesiredOffset,dwDesiredMinSize,dwDesiredMaxSize,pqwOffset,pdwSize,pdwBufferAlignment)( (This)->lpVtbl -> GetTransferParameters(This,qwDesiredOffset,dwDesiredMinSize,dwDesiredMaxSize,pqwOffset,pdwSize,pdwBufferAlignment) )
#define IWMSDataContainer_DoDataContainerExtendedCommand(This,szCommandName,pCommand,dwCallFlags,pCallback,qwContext)( (This)->lpVtbl -> DoDataContainerExtendedCommand(This,szCommandName,pCommand,dwCallFlags,pCallback,qwContext) )
#define IWMSDataContainer_FinishParsingPacketlist(This,pPacketList)( (This)->lpVtbl -> FinishParsingPacketlist(This,pPacketList) )
#endif
#endif
#ifndef __IWMSDataContainerCallback_INTERFACE_DEFINED__
#define __IWMSDataContainerCallback_INTERFACE_DEFINED__
extern const IID IID_IWMSDataContainerCallback;
typedef struct IWMSDataContainerCallbackVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IWMSDataContainerCallback * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IWMSDataContainerCallback * This);
	ULONG(STDMETHODCALLTYPE * Release) (IWMSDataContainerCallback * This);
	HRESULT(STDMETHODCALLTYPE * OnGetInfo) (IWMSDataContainerCallback * This, HRESULT hr, DWORD dwFlags, QWORD qwInfoValue, QWORD qwContext);
	HRESULT(STDMETHODCALLTYPE * OnRead) (IWMSDataContainerCallback * This, HRESULT hr, DWORD dwActualBytesTransferred, DWORD dwChangeType, QWORD qwChangeParameter, QWORD qwContext);
	HRESULT(STDMETHODCALLTYPE * OnWrite) (IWMSDataContainerCallback * This, HRESULT hr, DWORD dwActualBytesTransferred, QWORD qwContext);
	HRESULT(STDMETHODCALLTYPE * OnDoDataContainerExtendedCommand) (IWMSDataContainerCallback * This, HRESULT hr, QWORD qwContext);
	END_INTERFACE
}  IWMSDataContainerCallbackVtbl;
interface IWMSDataContainerCallback
{
	CONST_VTBL struct IWMSDataContainerCallbackVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IWMSDataContainerCallback_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IWMSDataContainerCallback_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define IWMSDataContainerCallback_Release(This)( (This)->lpVtbl -> Release(This) )
#define IWMSDataContainerCallback_OnGetInfo(This,hr,dwFlags,qwInfoValue,qwContext)( (This)->lpVtbl -> OnGetInfo(This,hr,dwFlags,qwInfoValue,qwContext) )
#define IWMSDataContainerCallback_OnRead(This,hr,dwActualBytesTransferred,dwChangeType,qwChangeParameter,qwContext)( (This)->lpVtbl -> OnRead(This,hr,dwActualBytesTransferred,dwChangeType,qwChangeParameter,qwContext) )
#define IWMSDataContainerCallback_OnWrite(This,hr,dwActualBytesTransferred,qwContext)( (This)->lpVtbl -> OnWrite(This,hr,dwActualBytesTransferred,qwContext) )
#define IWMSDataContainerCallback_OnDoDataContainerExtendedCommand(This,hr,qwContext)( (This)->lpVtbl -> OnDoDataContainerExtendedCommand(This,hr,qwContext) )
#endif
#endif
#ifndef __IWMSDirectory_INTERFACE_DEFINED__
#define __IWMSDirectory_INTERFACE_DEFINED__
extern const IID IID_IWMSDirectory;
typedef struct IWMSDirectoryVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IWMSDirectory * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IWMSDirectory * This);
	ULONG(STDMETHODCALLTYPE * Release) (IWMSDirectory * This);
	HRESULT(STDMETHODCALLTYPE * GetDataSourcePlugin) (IWMSDirectory * This, IWMSDataSourcePlugin ** ppDataSource);
	HRESULT(STDMETHODCALLTYPE * GetName) (IWMSDirectory * This, LPOLESTR * pstrValue);
	HRESULT(STDMETHODCALLTYPE * GetChildInfo) (IWMSDirectory * This, DWORD dwIndex, WMSDirectoryEntryInfo * pInfo);
	END_INTERFACE
}  IWMSDirectoryVtbl;
interface IWMSDirectory
{
	CONST_VTBL struct IWMSDirectoryVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IWMSDirectory_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IWMSDirectory_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define IWMSDirectory_Release(This)( (This)->lpVtbl -> Release(This) )
#define IWMSDirectory_GetDataSourcePlugin(This,ppDataSource)( (This)->lpVtbl -> GetDataSourcePlugin(This,ppDataSource) )
#define IWMSDirectory_GetName(This,pstrValue)( (This)->lpVtbl -> GetName(This,pstrValue) )
#define IWMSDirectory_GetChildInfo(This,dwIndex,pInfo)( (This)->lpVtbl -> GetChildInfo(This,dwIndex,pInfo) )
#endif
#endif
#endif

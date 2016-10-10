/*+@@file@@----------------------------------------------------------------*//*!
 \file		wsbapp.h
 \par Description 
            Extension and update of headers for PellesC compiler suite.
 \par Project: 
            PellesC Headers extension
 \date		Created  on Mon Sep 19 17:26:08 2016
 \date		Modified on Mon Sep 19 17:26:08 2016
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
#ifndef __wsbapp_h__
#define __wsbapp_h__
#if __POCC__ >= 500
#pragma once
#endif
#ifndef __IWsbApplicationBackupSupport_FWD_DEFINED__
#define __IWsbApplicationBackupSupport_FWD_DEFINED__
typedef interface IWsbApplicationBackupSupport IWsbApplicationBackupSupport;
#endif
#ifndef __IWsbApplicationRestoreSupport_FWD_DEFINED__
#define __IWsbApplicationRestoreSupport_FWD_DEFINED__
typedef interface IWsbApplicationRestoreSupport IWsbApplicationRestoreSupport;
#endif
#ifndef __IWsbApplicationAsync_FWD_DEFINED__
#define __IWsbApplicationAsync_FWD_DEFINED__
typedef interface IWsbApplicationAsync IWsbApplicationAsync;
#endif
#include "oaidl.h"
#include "ocidl.h"
extern RPC_IF_HANDLE __MIDL_itf_wsbapp_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_wsbapp_0000_0000_v0_0_s_ifspec;
#ifndef __IWsbApplicationBackupSupport_INTERFACE_DEFINED__
#define __IWsbApplicationBackupSupport_INTERFACE_DEFINED__
extern const IID IID_IWsbApplicationBackupSupport;
typedef struct IWsbApplicationBackupSupportVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IWsbApplicationBackupSupport * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IWsbApplicationBackupSupport * This);
	ULONG(STDMETHODCALLTYPE * Release) (IWsbApplicationBackupSupport * This);
	HRESULT(STDMETHODCALLTYPE * CheckConsistency) (IWsbApplicationBackupSupport * This, LPWSTR wszWriterMetadata, LPWSTR wszComponentName, LPWSTR wszComponentLogicalPath, DWORD cVolumes, LPWSTR * rgwszSourceVolumePath, LPWSTR * rgwszSnapshotVolumePath, IWsbApplicationAsync ** ppAsync);
	END_INTERFACE
}  IWsbApplicationBackupSupportVtbl;
interface IWsbApplicationBackupSupport
{
	CONST_VTBL struct IWsbApplicationBackupSupportVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IWsbApplicationBackupSupport_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IWsbApplicationBackupSupport_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IWsbApplicationBackupSupport_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IWsbApplicationBackupSupport_CheckConsistency(This,wszWriterMetadata,wszComponentName,wszComponentLogicalPath,cVolumes,rgwszSourceVolumePath,rgwszSnapshotVolumePath,ppAsync) ( (This)->lpVtbl -> CheckConsistency(This,wszWriterMetadata,wszComponentName,wszComponentLogicalPath,cVolumes,rgwszSourceVolumePath,rgwszSnapshotVolumePath,ppAsync) )
#endif
#endif
#ifndef __IWsbApplicationRestoreSupport_INTERFACE_DEFINED__
#define __IWsbApplicationRestoreSupport_INTERFACE_DEFINED__
extern const IID IID_IWsbApplicationRestoreSupport;
typedef struct IWsbApplicationRestoreSupportVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IWsbApplicationRestoreSupport * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IWsbApplicationRestoreSupport * This);
	ULONG(STDMETHODCALLTYPE * Release) (IWsbApplicationRestoreSupport * This);
	HRESULT(STDMETHODCALLTYPE * PreRestore) (IWsbApplicationRestoreSupport * This, LPWSTR wszWriterMetadata, LPWSTR wszComponentName, LPWSTR wszComponentLogicalPath, BOOLEAN bNoRollForward);
	HRESULT(STDMETHODCALLTYPE * PostRestore) (IWsbApplicationRestoreSupport * This, LPWSTR wszWriterMetadata, LPWSTR wszComponentName, LPWSTR wszComponentLogicalPath, BOOLEAN bNoRollForward);
	HRESULT(STDMETHODCALLTYPE * OrderComponents) (IWsbApplicationRestoreSupport * This, DWORD cComponents, LPWSTR * rgComponentName, LPWSTR * rgComponentLogicalPaths, LPWSTR ** prgComponentName, LPWSTR ** prgComponentLogicalPath);
	HRESULT(STDMETHODCALLTYPE * IsRollForwardSupported) (IWsbApplicationRestoreSupport * This, BOOLEAN * pbRollForwardSupported);
	END_INTERFACE
}  IWsbApplicationRestoreSupportVtbl;
interface IWsbApplicationRestoreSupport
{
	CONST_VTBL struct IWsbApplicationRestoreSupportVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IWsbApplicationRestoreSupport_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IWsbApplicationRestoreSupport_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IWsbApplicationRestoreSupport_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IWsbApplicationRestoreSupport_PreRestore(This,wszWriterMetadata,wszComponentName,wszComponentLogicalPath,bNoRollForward) ( (This)->lpVtbl -> PreRestore(This,wszWriterMetadata,wszComponentName,wszComponentLogicalPath,bNoRollForward) )
#define IWsbApplicationRestoreSupport_PostRestore(This,wszWriterMetadata,wszComponentName,wszComponentLogicalPath,bNoRollForward) ( (This)->lpVtbl -> PostRestore(This,wszWriterMetadata,wszComponentName,wszComponentLogicalPath,bNoRollForward) )
#define IWsbApplicationRestoreSupport_OrderComponents(This,cComponents,rgComponentName,rgComponentLogicalPaths,prgComponentName,prgComponentLogicalPath) ( (This)->lpVtbl -> OrderComponents(This,cComponents,rgComponentName,rgComponentLogicalPaths,prgComponentName,prgComponentLogicalPath) )
#define IWsbApplicationRestoreSupport_IsRollForwardSupported(This,pbRollForwardSupported) ( (This)->lpVtbl -> IsRollForwardSupported(This,pbRollForwardSupported) )
#endif
#endif
#ifndef __IWsbApplicationAsync_INTERFACE_DEFINED__
#define __IWsbApplicationAsync_INTERFACE_DEFINED__
extern const IID IID_IWsbApplicationAsync;
typedef struct IWsbApplicationAsyncVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IWsbApplicationAsync * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IWsbApplicationAsync * This);
	ULONG(STDMETHODCALLTYPE * Release) (IWsbApplicationAsync * This);
	HRESULT(STDMETHODCALLTYPE * QueryStatus) (IWsbApplicationAsync * This, HRESULT * phrResult);
	HRESULT(STDMETHODCALLTYPE * Abort) (IWsbApplicationAsync * This);
	END_INTERFACE
}  IWsbApplicationAsyncVtbl;
interface IWsbApplicationAsync
{
	CONST_VTBL struct IWsbApplicationAsyncVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IWsbApplicationAsync_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IWsbApplicationAsync_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IWsbApplicationAsync_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IWsbApplicationAsync_QueryStatus(This,phrResult) ( (This)->lpVtbl -> QueryStatus(This,phrResult) )
#define IWsbApplicationAsync_Abort(This) ( (This)->lpVtbl -> Abort(This) )
#endif
#endif
#endif

/*+@@file@@----------------------------------------------------------------*//*!
 \file		vsadmin.h
 \par Description 
            Extension and update of headers for PellesC compiler suite.
 \par Project: 
            PellesC Headers extension
 \date		Created  on Sun Sep  4 18:51:36 2016
 \date		Modified on Sun Sep  4 18:51:36 2016
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
#ifndef __vsadmin_h__
#define __vsadmin_h__
#if __POCC__ >= 500
#pragma once
#endif
#ifndef __IVssAdmin_FWD_DEFINED__
#define __IVssAdmin_FWD_DEFINED__
typedef interface IVssAdmin IVssAdmin;
#endif
#ifndef __IVssAdminEx_FWD_DEFINED__
#define __IVssAdminEx_FWD_DEFINED__
typedef interface IVssAdminEx IVssAdminEx;
#endif
#ifndef __VSSCoordinator_FWD_DEFINED__
#define __VSSCoordinator_FWD_DEFINED__
typedef struct VSSCoordinator VSSCoordinator;
#endif
#include "oaidl.h"
#include "ocidl.h"
#include "vss.h"
#ifndef __IVssAdmin_INTERFACE_DEFINED__
#define __IVssAdmin_INTERFACE_DEFINED__
extern const IID IID_IVssAdmin;
typedef struct IVssAdminVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IVssAdmin * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IVssAdmin * This);
	ULONG(STDMETHODCALLTYPE * Release) (IVssAdmin * This);
	HRESULT(STDMETHODCALLTYPE * RegisterProvider) (IVssAdmin * This, VSS_ID pProviderId, CLSID ClassId, VSS_PWSZ pwszProviderName, VSS_PROVIDER_TYPE eProviderType, VSS_PWSZ pwszProviderVersion, VSS_ID ProviderVersionId);
	HRESULT(STDMETHODCALLTYPE * UnregisterProvider) (IVssAdmin * This, VSS_ID ProviderId);
	HRESULT(STDMETHODCALLTYPE * QueryProviders) (IVssAdmin * This, IVssEnumObject ** ppEnum);
	HRESULT(STDMETHODCALLTYPE * AbortAllSnapshotsInProgress) (IVssAdmin * This);
	END_INTERFACE
}  IVssAdminVtbl;
interface IVssAdmin
{
	CONST_VTBL struct IVssAdminVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IVssAdmin_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IVssAdmin_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IVssAdmin_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IVssAdmin_RegisterProvider(This,pProviderId,ClassId,pwszProviderName,eProviderType,pwszProviderVersion,ProviderVersionId) ( (This)->lpVtbl -> RegisterProvider(This,pProviderId,ClassId,pwszProviderName,eProviderType,pwszProviderVersion,ProviderVersionId) )
#define IVssAdmin_UnregisterProvider(This,ProviderId) ( (This)->lpVtbl -> UnregisterProvider(This,ProviderId) )
#define IVssAdmin_QueryProviders(This,ppEnum) ( (This)->lpVtbl -> QueryProviders(This,ppEnum) )
#define IVssAdmin_AbortAllSnapshotsInProgress(This) ( (This)->lpVtbl -> AbortAllSnapshotsInProgress(This) )
#endif
#endif
#ifndef __IVssAdminEx_INTERFACE_DEFINED__
#define __IVssAdminEx_INTERFACE_DEFINED__
extern const IID IID_IVssAdminEx;
typedef struct IVssAdminExVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IVssAdminEx * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IVssAdminEx * This);
	ULONG(STDMETHODCALLTYPE * Release) (IVssAdminEx * This);
	HRESULT(STDMETHODCALLTYPE * RegisterProvider) (IVssAdminEx * This, VSS_ID pProviderId, CLSID ClassId, VSS_PWSZ pwszProviderName, VSS_PROVIDER_TYPE eProviderType, VSS_PWSZ pwszProviderVersion, VSS_ID ProviderVersionId);
	HRESULT(STDMETHODCALLTYPE * UnregisterProvider) (IVssAdminEx * This, VSS_ID ProviderId);
	HRESULT(STDMETHODCALLTYPE * QueryProviders) (IVssAdminEx * This, IVssEnumObject ** ppEnum);
	HRESULT(STDMETHODCALLTYPE * AbortAllSnapshotsInProgress) (IVssAdminEx * This);
	HRESULT(STDMETHODCALLTYPE * GetProviderCapability) (IVssAdminEx * This, VSS_ID pProviderId, ULONGLONG * pllOriginalCapabilityMask);
	HRESULT(STDMETHODCALLTYPE * GetProviderContext) (IVssAdminEx * This, VSS_ID ProviderId, LONG * plContext);
	HRESULT(STDMETHODCALLTYPE * SetProviderContext) (IVssAdminEx * This, VSS_ID ProviderId, LONG lContext);
	END_INTERFACE
}  IVssAdminExVtbl;
interface IVssAdminEx
{
	CONST_VTBL struct IVssAdminExVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IVssAdminEx_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IVssAdminEx_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IVssAdminEx_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IVssAdminEx_RegisterProvider(This,pProviderId,ClassId,pwszProviderName,eProviderType,pwszProviderVersion,ProviderVersionId) ( (This)->lpVtbl -> RegisterProvider(This,pProviderId,ClassId,pwszProviderName,eProviderType,pwszProviderVersion,ProviderVersionId) )
#define IVssAdminEx_UnregisterProvider(This,ProviderId) ( (This)->lpVtbl -> UnregisterProvider(This,ProviderId) )
#define IVssAdminEx_QueryProviders(This,ppEnum) ( (This)->lpVtbl -> QueryProviders(This,ppEnum) )
#define IVssAdminEx_AbortAllSnapshotsInProgress(This) ( (This)->lpVtbl -> AbortAllSnapshotsInProgress(This) )
#define IVssAdminEx_GetProviderCapability(This,pProviderId,pllOriginalCapabilityMask) ( (This)->lpVtbl -> GetProviderCapability(This,pProviderId,pllOriginalCapabilityMask) )
#define IVssAdminEx_GetProviderContext(This,ProviderId,plContext) ( (This)->lpVtbl -> GetProviderContext(This,ProviderId,plContext) )
#define IVssAdminEx_SetProviderContext(This,ProviderId,lContext) ( (This)->lpVtbl -> SetProviderContext(This,ProviderId,lContext) )
#endif
#endif
#ifndef __VSSAdmin_LIBRARY_DEFINED__
#define __VSSAdmin_LIBRARY_DEFINED__
extern const IID LIBID_VSSAdmin;
extern const CLSID CLSID_VSSCoordinator;
#endif
#endif

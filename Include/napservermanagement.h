/*+@@file@@----------------------------------------------------------------*//*!
 \file		napservermanagement.h
 \par Description 
            Extension and update of headers for PellesC compiler suite.
 \par Project: 
            PellesC Headers extension
 \date		Created  on Sun Sep 11 22:22:52 2016
 \date		Modified on Sun Sep 11 22:22:52 2016
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
#ifndef __napservermanagement_h__
#define __napservermanagement_h__
#if __POCC__ >= 500
#pragma once
#endif
#ifndef __INapServerInfo_FWD_DEFINED__
#define __INapServerInfo_FWD_DEFINED__
typedef interface INapServerInfo INapServerInfo;
#endif
#ifndef __INapServerManagement_FWD_DEFINED__
#define __INapServerManagement_FWD_DEFINED__
typedef interface INapServerManagement INapServerManagement;
#endif
#include <NapTypes.h>
#ifndef __INapServerInfo_INTERFACE_DEFINED__
#define __INapServerInfo_INTERFACE_DEFINED__
extern const IID IID_INapServerInfo;
typedef struct INapServerInfoVtbl
{
BEGIN_INTERFACE
HRESULT(STDMETHODCALLTYPE * QueryInterface) (INapServerInfo * This, REFIID riid, void **ppvObject);
ULONG(STDMETHODCALLTYPE * AddRef) (INapServerInfo * This);
ULONG(STDMETHODCALLTYPE * Release) (INapServerInfo * This);
HRESULT(STDMETHODCALLTYPE * GetNapServerInfo) (INapServerInfo * This, CountedString ** serverName, CountedString ** serverDescription, CountedString ** protocolVersion);
HRESULT(STDMETHODCALLTYPE * GetRegisteredSystemHealthValidators) (INapServerInfo * This, SystemHealthEntityCount * count, NapComponentRegistrationInfo ** validators, CLSID ** validatorClsids);
HRESULT(STDMETHODCALLTYPE * GetFailureCategoryMappings) (INapServerInfo * This, SystemHealthEntityId id, FailureCategoryMapping * mapping);
END_INTERFACE
}  INapServerInfoVtbl;
interface INapServerInfo
{
	CONST_VTBL struct INapServerInfoVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define INapServerInfo_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define INapServerInfo_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define INapServerInfo_Release(This) ( (This)->lpVtbl -> Release(This) )
#define INapServerInfo_GetNapServerInfo(This,serverName,serverDescription,protocolVersion) ( (This)->lpVtbl -> GetNapServerInfo(This,serverName,serverDescription,protocolVersion) )
#define INapServerInfo_GetRegisteredSystemHealthValidators(This,count,validators,validatorClsids) ( (This)->lpVtbl -> GetRegisteredSystemHealthValidators(This,count,validators,validatorClsids) )
#define INapServerInfo_GetFailureCategoryMappings(This,id,mapping) ( (This)->lpVtbl -> GetFailureCategoryMappings(This,id,mapping) )
#endif
#endif
#ifndef __INapServerManagement_INTERFACE_DEFINED__
#define __INapServerManagement_INTERFACE_DEFINED__
extern const IID IID_INapServerManagement;
typedef struct INapServerManagementVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (INapServerManagement * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (INapServerManagement * This);
	ULONG(STDMETHODCALLTYPE * Release) (INapServerManagement * This);
	HRESULT(STDMETHODCALLTYPE * RegisterSystemHealthValidator) (INapServerManagement * This, const NapComponentRegistrationInfo * validator, const CLSID * validatorClsid);
	HRESULT(STDMETHODCALLTYPE * UnregisterSystemHealthValidator) (INapServerManagement * This, SystemHealthEntityId id);
	HRESULT(STDMETHODCALLTYPE * SetFailureCategoryMappings) (INapServerManagement * This, SystemHealthEntityId id, const FailureCategoryMapping mapping);
	END_INTERFACE
}  INapServerManagementVtbl;
interface INapServerManagement
{
	CONST_VTBL struct INapServerManagementVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define INapServerManagement_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define INapServerManagement_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define INapServerManagement_Release(This) ( (This)->lpVtbl -> Release(This) )
#define INapServerManagement_RegisterSystemHealthValidator(This,validator,validatorClsid) ( (This)->lpVtbl -> RegisterSystemHealthValidator(This,validator,validatorClsid) )
#define INapServerManagement_UnregisterSystemHealthValidator(This,id) ( (This)->lpVtbl -> UnregisterSystemHealthValidator(This,id) )
#define INapServerManagement_SetFailureCategoryMappings(This,id,mapping) ( (This)->lpVtbl -> SetFailureCategoryMappings(This,id,mapping) )
#endif
#endif
extern const CLSID CLSID_NapServerInfo;
extern const CLSID CLSID_NapServerManagement;
extern RPC_IF_HANDLE __MIDL_itf_napservermanagement_0000_0002_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_napservermanagement_0000_0002_v0_0_s_ifspec;
#endif

/*+@@file@@----------------------------------------------------------------*//*!
 \file		corpub.h
 \par Description 
            Extension and update of headers for PellesC compiler suite.
 \par Project: 
            PellesC Headers extension
 \date		Created  on Mon Jul  4 11:49:30 2016
 \date		Modified on Mon Jul  4 11:49:30 2016
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
#ifndef __corpub_h__
#define __corpub_h__
#if __POCC__ >= 500
#pragma once
#endif
#ifndef __CorpubPublish_FWD_DEFINED__
#define __CorpubPublish_FWD_DEFINED__
typedef struct CorpubPublish CorpubPublish;
#endif
#ifndef __ICorPublish_FWD_DEFINED__
#define __ICorPublish_FWD_DEFINED__
typedef interface ICorPublish ICorPublish;
#endif
#ifndef __ICorPublishEnum_FWD_DEFINED__
#define __ICorPublishEnum_FWD_DEFINED__
typedef interface ICorPublishEnum ICorPublishEnum;
#endif
#ifndef __ICorPublishProcess_FWD_DEFINED__
#define __ICorPublishProcess_FWD_DEFINED__
typedef interface ICorPublishProcess ICorPublishProcess;
#endif
#ifndef __ICorPublishAppDomain_FWD_DEFINED__
#define __ICorPublishAppDomain_FWD_DEFINED__
typedef interface ICorPublishAppDomain ICorPublishAppDomain;
#endif
#ifndef __ICorPublishProcessEnum_FWD_DEFINED__
#define __ICorPublishProcessEnum_FWD_DEFINED__
typedef interface ICorPublishProcessEnum ICorPublishProcessEnum;
#endif
#ifndef __ICorPublishAppDomainEnum_FWD_DEFINED__
#define __ICorPublishAppDomainEnum_FWD_DEFINED__
typedef interface ICorPublishAppDomainEnum ICorPublishAppDomainEnum;
#endif
#include "unknwn.h"
#if 0
#endif
typedef enum __MIDL___MIDL_itf_corpub_0000_0000_0001
{
	COR_PUB_MANAGEDONLY = 0x1
} COR_PUB_ENUMPROCESS;
#pragma warning(push)
#pragma warning(disable:28718)
#pragma warning(pop)
extern RPC_IF_HANDLE __MIDL_itf_corpub_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_corpub_0000_0000_v0_0_s_ifspec;
#ifndef __CorpubProcessLib_LIBRARY_DEFINED__
#define __CorpubProcessLib_LIBRARY_DEFINED__
extern const IID LIBID_CorpubProcessLib;
extern const CLSID CLSID_CorpubPublish;
#endif
#ifndef __ICorPublish_INTERFACE_DEFINED__
#define __ICorPublish_INTERFACE_DEFINED__
extern const IID IID_ICorPublish;
typedef struct ICorPublishVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (ICorPublish * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (ICorPublish * This);
	ULONG(STDMETHODCALLTYPE * Release) (ICorPublish * This);
	HRESULT(STDMETHODCALLTYPE * EnumProcesses) (ICorPublish * This, COR_PUB_ENUMPROCESS Type, ICorPublishProcessEnum ** ppIEnum);
	HRESULT(STDMETHODCALLTYPE * GetProcess) (ICorPublish * This, unsigned int pid, ICorPublishProcess ** ppProcess);
	END_INTERFACE
}  ICorPublishVtbl;
interface ICorPublish
{
	CONST_VTBL struct ICorPublishVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define ICorPublish_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define ICorPublish_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define ICorPublish_Release(This)( (This)->lpVtbl -> Release(This) )
#define ICorPublish_EnumProcesses(This,Type,ppIEnum)( (This)->lpVtbl -> EnumProcesses(This,Type,ppIEnum) )
#define ICorPublish_GetProcess(This,pid,ppProcess)( (This)->lpVtbl -> GetProcess(This,pid,ppProcess) )
#endif
#endif
#ifndef __ICorPublishEnum_INTERFACE_DEFINED__
#define __ICorPublishEnum_INTERFACE_DEFINED__
extern const IID IID_ICorPublishEnum;
typedef struct ICorPublishEnumVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (ICorPublishEnum * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (ICorPublishEnum * This);
	ULONG(STDMETHODCALLTYPE * Release) (ICorPublishEnum * This);
	HRESULT(STDMETHODCALLTYPE * Skip) (ICorPublishEnum * This, ULONG celt);
	HRESULT(STDMETHODCALLTYPE * Reset) (ICorPublishEnum * This);
	HRESULT(STDMETHODCALLTYPE * Clone) (ICorPublishEnum * This, ICorPublishEnum ** ppEnum);
	HRESULT(STDMETHODCALLTYPE * GetCount) (ICorPublishEnum * This, ULONG * pcelt);
	END_INTERFACE
}  ICorPublishEnumVtbl;
interface ICorPublishEnum
{
	CONST_VTBL struct ICorPublishEnumVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define ICorPublishEnum_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define ICorPublishEnum_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define ICorPublishEnum_Release(This)( (This)->lpVtbl -> Release(This) )
#define ICorPublishEnum_Skip(This,celt)( (This)->lpVtbl -> Skip(This,celt) )
#define ICorPublishEnum_Reset(This)( (This)->lpVtbl -> Reset(This) )
#define ICorPublishEnum_Clone(This,ppEnum)( (This)->lpVtbl -> Clone(This,ppEnum) )
#define ICorPublishEnum_GetCount(This,pcelt)( (This)->lpVtbl -> GetCount(This,pcelt) )
#endif
#endif
#pragma warning(push)
#pragma warning(disable:28718)
extern RPC_IF_HANDLE __MIDL_itf_corpub_0000_0002_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_corpub_0000_0002_v0_0_s_ifspec;
#ifndef __ICorPublishProcess_INTERFACE_DEFINED__
#define __ICorPublishProcess_INTERFACE_DEFINED__
extern const IID IID_ICorPublishProcess;
typedef struct ICorPublishProcessVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (ICorPublishProcess * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (ICorPublishProcess * This);
	ULONG(STDMETHODCALLTYPE * Release) (ICorPublishProcess * This);
	HRESULT(STDMETHODCALLTYPE * IsManaged) (ICorPublishProcess * This, BOOL * pbManaged);
	HRESULT(STDMETHODCALLTYPE * EnumAppDomains) (ICorPublishProcess * This, ICorPublishAppDomainEnum ** ppEnum);
	HRESULT(STDMETHODCALLTYPE * GetProcessID) (ICorPublishProcess * This, unsigned int *pid);
	HRESULT(STDMETHODCALLTYPE * GetDisplayName) (ICorPublishProcess * This, ULONG32 cchName, ULONG32 * pcchName, WCHAR * szName);
	END_INTERFACE
}  ICorPublishProcessVtbl;
interface ICorPublishProcess
{
	CONST_VTBL struct ICorPublishProcessVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define ICorPublishProcess_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define ICorPublishProcess_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define ICorPublishProcess_Release(This)( (This)->lpVtbl -> Release(This) )
#define ICorPublishProcess_IsManaged(This,pbManaged)( (This)->lpVtbl -> IsManaged(This,pbManaged) )
#define ICorPublishProcess_EnumAppDomains(This,ppEnum)( (This)->lpVtbl -> EnumAppDomains(This,ppEnum) )
#define ICorPublishProcess_GetProcessID(This,pid)( (This)->lpVtbl -> GetProcessID(This,pid) )
#define ICorPublishProcess_GetDisplayName(This,cchName,pcchName,szName)( (This)->lpVtbl -> GetDisplayName(This,cchName,pcchName,szName) )
#endif
#endif
#pragma warning(pop)
#pragma warning(push)
#pragma warning(disable:28718)
extern RPC_IF_HANDLE __MIDL_itf_corpub_0000_0003_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_corpub_0000_0003_v0_0_s_ifspec;
#ifndef __ICorPublishAppDomain_INTERFACE_DEFINED__
#define __ICorPublishAppDomain_INTERFACE_DEFINED__
extern const IID IID_ICorPublishAppDomain;
typedef struct ICorPublishAppDomainVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (ICorPublishAppDomain * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (ICorPublishAppDomain * This);
	ULONG(STDMETHODCALLTYPE * Release) (ICorPublishAppDomain * This);
	HRESULT(STDMETHODCALLTYPE * GetID) (ICorPublishAppDomain * This, ULONG32 * puId);
	HRESULT(STDMETHODCALLTYPE * GetName) (ICorPublishAppDomain * This, ULONG32 cchName, ULONG32 * pcchName, WCHAR * szName);
	END_INTERFACE
}  ICorPublishAppDomainVtbl;
interface ICorPublishAppDomain
{
	CONST_VTBL struct ICorPublishAppDomainVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define ICorPublishAppDomain_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define ICorPublishAppDomain_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define ICorPublishAppDomain_Release(This)( (This)->lpVtbl -> Release(This) )
#define ICorPublishAppDomain_GetID(This,puId)( (This)->lpVtbl -> GetID(This,puId) )
#define ICorPublishAppDomain_GetName(This,cchName,pcchName,szName)( (This)->lpVtbl -> GetName(This,cchName,pcchName,szName) )
#endif
#endif
#pragma warning(pop)
extern RPC_IF_HANDLE __MIDL_itf_corpub_0000_0004_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_corpub_0000_0004_v0_0_s_ifspec;
#ifndef __ICorPublishProcessEnum_INTERFACE_DEFINED__
#define __ICorPublishProcessEnum_INTERFACE_DEFINED__
extern const IID IID_ICorPublishProcessEnum;
typedef struct ICorPublishProcessEnumVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (ICorPublishProcessEnum * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (ICorPublishProcessEnum * This);
	ULONG(STDMETHODCALLTYPE * Release) (ICorPublishProcessEnum * This);
	HRESULT(STDMETHODCALLTYPE * Skip) (ICorPublishProcessEnum * This, ULONG celt);
	HRESULT(STDMETHODCALLTYPE * Reset) (ICorPublishProcessEnum * This);
	HRESULT(STDMETHODCALLTYPE * Clone) (ICorPublishProcessEnum * This, ICorPublishEnum ** ppEnum);
	HRESULT(STDMETHODCALLTYPE * GetCount) (ICorPublishProcessEnum * This, ULONG * pcelt);
	HRESULT(STDMETHODCALLTYPE * Next) (ICorPublishProcessEnum * This, ULONG celt, ICorPublishProcess ** objects, ULONG * pceltFetched);
	END_INTERFACE
}  ICorPublishProcessEnumVtbl;
interface ICorPublishProcessEnum
{
	CONST_VTBL struct ICorPublishProcessEnumVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define ICorPublishProcessEnum_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define ICorPublishProcessEnum_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define ICorPublishProcessEnum_Release(This)( (This)->lpVtbl -> Release(This) )
#define ICorPublishProcessEnum_Skip(This,celt)( (This)->lpVtbl -> Skip(This,celt) )
#define ICorPublishProcessEnum_Reset(This)( (This)->lpVtbl -> Reset(This) )
#define ICorPublishProcessEnum_Clone(This,ppEnum)( (This)->lpVtbl -> Clone(This,ppEnum) )
#define ICorPublishProcessEnum_GetCount(This,pcelt)( (This)->lpVtbl -> GetCount(This,pcelt) )
#define ICorPublishProcessEnum_Next(This,celt,objects,pceltFetched)( (This)->lpVtbl -> Next(This,celt,objects,pceltFetched) )
#endif
#endif
#ifndef __ICorPublishAppDomainEnum_INTERFACE_DEFINED__
#define __ICorPublishAppDomainEnum_INTERFACE_DEFINED__
extern const IID IID_ICorPublishAppDomainEnum;
typedef struct ICorPublishAppDomainEnumVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (ICorPublishAppDomainEnum * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (ICorPublishAppDomainEnum * This);
	ULONG(STDMETHODCALLTYPE * Release) (ICorPublishAppDomainEnum * This);
	HRESULT(STDMETHODCALLTYPE * Skip) (ICorPublishAppDomainEnum * This, ULONG celt);
	HRESULT(STDMETHODCALLTYPE * Reset) (ICorPublishAppDomainEnum * This);
	HRESULT(STDMETHODCALLTYPE * Clone) (ICorPublishAppDomainEnum * This, ICorPublishEnum ** ppEnum);
	HRESULT(STDMETHODCALLTYPE * GetCount) (ICorPublishAppDomainEnum * This, ULONG * pcelt);
	HRESULT(STDMETHODCALLTYPE * Next) (ICorPublishAppDomainEnum * This, ULONG celt, ICorPublishAppDomain ** objects, ULONG * pceltFetched);
	END_INTERFACE
}  ICorPublishAppDomainEnumVtbl;
interface ICorPublishAppDomainEnum
{
	CONST_VTBL struct ICorPublishAppDomainEnumVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define ICorPublishAppDomainEnum_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define ICorPublishAppDomainEnum_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define ICorPublishAppDomainEnum_Release(This)( (This)->lpVtbl -> Release(This) )
#define ICorPublishAppDomainEnum_Skip(This,celt)( (This)->lpVtbl -> Skip(This,celt) )
#define ICorPublishAppDomainEnum_Reset(This)( (This)->lpVtbl -> Reset(This) )
#define ICorPublishAppDomainEnum_Clone(This,ppEnum)( (This)->lpVtbl -> Clone(This,ppEnum) )
#define ICorPublishAppDomainEnum_GetCount(This,pcelt)( (This)->lpVtbl -> GetCount(This,pcelt) )
#define ICorPublishAppDomainEnum_Next(This,celt,objects,pceltFetched)( (This)->lpVtbl -> Next(This,celt,objects,pceltFetched) )
#endif
#endif
#endif

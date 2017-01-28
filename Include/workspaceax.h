/*+@@file@@----------------------------------------------------------------*//*!
 \file		workspaceax.h
 \par Description 
            Extension and update of headers for PellesC compiler suite.
 \par Project: 
            PellesC Headers extension
 \date		Created  on Mon Sep 19 16:41:25 2016
 \date		Modified on Mon Sep 19 16:41:25 2016
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
#ifndef __workspaceax_h__
#define __workspaceax_h__
#if __POCC__ >= 500
#pragma once
#endif
#ifndef __IWorkspaceResTypeRegistry_FWD_DEFINED__
#define __IWorkspaceResTypeRegistry_FWD_DEFINED__
typedef interface IWorkspaceResTypeRegistry IWorkspaceResTypeRegistry;
#endif
#include <wtypes.h>
#include <oaidl.h>
extern RPC_IF_HANDLE __MIDL_itf_workspaceax_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_workspaceax_0000_0000_v0_0_s_ifspec;
#ifndef __IWorkspaceResTypeRegistry_INTERFACE_DEFINED__
#define __IWorkspaceResTypeRegistry_INTERFACE_DEFINED__
extern const IID IID_IWorkspaceResTypeRegistry;
typedef struct IWorkspaceResTypeRegistryVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IWorkspaceResTypeRegistry * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IWorkspaceResTypeRegistry * This);
	ULONG(STDMETHODCALLTYPE * Release) (IWorkspaceResTypeRegistry * This);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfoCount) (IWorkspaceResTypeRegistry * This, UINT * pctinfo);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfo) (IWorkspaceResTypeRegistry * This, UINT iTInfo, LCID lcid, ITypeInfo ** ppTInfo);
	HRESULT(STDMETHODCALLTYPE * GetIDsOfNames) (IWorkspaceResTypeRegistry * This, REFIID riid, LPOLESTR * rgszNames, UINT cNames, LCID lcid, DISPID * rgDispId);
	HRESULT(STDMETHODCALLTYPE * Invoke) (IWorkspaceResTypeRegistry * This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS * pDispParams, VARIANT * pVarResult, EXCEPINFO * pExcepInfo, UINT * puArgErr);
	HRESULT(STDMETHODCALLTYPE * AddResourceType) (IWorkspaceResTypeRegistry * This, VARIANT_BOOL fMachineWide, BSTR bstrFileExtension, BSTR bstrLauncher);
	HRESULT(STDMETHODCALLTYPE * DeleteResourceType) (IWorkspaceResTypeRegistry * This, VARIANT_BOOL fMachineWide, BSTR bstrFileExtension);
	HRESULT(STDMETHODCALLTYPE * GetRegisteredFileExtensions) (IWorkspaceResTypeRegistry * This, VARIANT_BOOL fMachineWide, SAFEARRAY * *psaFileExtensions);
	HRESULT(STDMETHODCALLTYPE * GetResourceTypeInfo) (IWorkspaceResTypeRegistry * This, VARIANT_BOOL fMachineWide, BSTR bstrFileExtension, BSTR * pbstrLauncher);
	HRESULT(STDMETHODCALLTYPE * ModifyResourceType) (IWorkspaceResTypeRegistry * This, VARIANT_BOOL fMachineWide, BSTR bstrFileExtension, BSTR bstrLauncher);
	END_INTERFACE
}  IWorkspaceResTypeRegistryVtbl;
interface IWorkspaceResTypeRegistry
{
	CONST_VTBL struct IWorkspaceResTypeRegistryVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IWorkspaceResTypeRegistry_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IWorkspaceResTypeRegistry_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IWorkspaceResTypeRegistry_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IWorkspaceResTypeRegistry_GetTypeInfoCount(This,pctinfo) ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define IWorkspaceResTypeRegistry_GetTypeInfo(This,iTInfo,lcid,ppTInfo) ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define IWorkspaceResTypeRegistry_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define IWorkspaceResTypeRegistry_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define IWorkspaceResTypeRegistry_AddResourceType(This,fMachineWide,bstrFileExtension,bstrLauncher) ( (This)->lpVtbl -> AddResourceType(This,fMachineWide,bstrFileExtension,bstrLauncher) )
#define IWorkspaceResTypeRegistry_DeleteResourceType(This,fMachineWide,bstrFileExtension) ( (This)->lpVtbl -> DeleteResourceType(This,fMachineWide,bstrFileExtension) )
#define IWorkspaceResTypeRegistry_GetRegisteredFileExtensions(This,fMachineWide,psaFileExtensions) ( (This)->lpVtbl -> GetRegisteredFileExtensions(This,fMachineWide,psaFileExtensions) )
#define IWorkspaceResTypeRegistry_GetResourceTypeInfo(This,fMachineWide,bstrFileExtension,pbstrLauncher) ( (This)->lpVtbl -> GetResourceTypeInfo(This,fMachineWide,bstrFileExtension,pbstrLauncher) )
#define IWorkspaceResTypeRegistry_ModifyResourceType(This,fMachineWide,bstrFileExtension,bstrLauncher) ( (This)->lpVtbl -> ModifyResourceType(This,fMachineWide,bstrFileExtension,bstrLauncher) )
#endif
#endif
unsigned long __RPC_USER BSTR_UserSize(unsigned long *, unsigned long, BSTR *);
unsigned char *__RPC_USER BSTR_UserMarshal(unsigned long *, unsigned char *, BSTR *);
unsigned char *__RPC_USER BSTR_UserUnmarshal(unsigned long *, unsigned char *, BSTR *);
void __RPC_USER BSTR_UserFree(unsigned long *, BSTR *);
unsigned long __RPC_USER LPSAFEARRAY_UserSize(unsigned long *, unsigned long, LPSAFEARRAY *);
unsigned char *__RPC_USER LPSAFEARRAY_UserMarshal(unsigned long *, unsigned char *, LPSAFEARRAY *);
unsigned char *__RPC_USER LPSAFEARRAY_UserUnmarshal(unsigned long *, unsigned char *, LPSAFEARRAY *);
void __RPC_USER LPSAFEARRAY_UserFree(unsigned long *, LPSAFEARRAY *);
unsigned long __RPC_USER BSTR_UserSize64(unsigned long *, unsigned long, BSTR *);
unsigned char *__RPC_USER BSTR_UserMarshal64(unsigned long *, unsigned char *, BSTR *);
unsigned char *__RPC_USER BSTR_UserUnmarshal64(unsigned long *, unsigned char *, BSTR *);
void __RPC_USER BSTR_UserFree64(unsigned long *, BSTR *);
unsigned long __RPC_USER LPSAFEARRAY_UserSize64(unsigned long *, unsigned long, LPSAFEARRAY *);
unsigned char *__RPC_USER LPSAFEARRAY_UserMarshal64(unsigned long *, unsigned char *, LPSAFEARRAY *);
unsigned char *__RPC_USER LPSAFEARRAY_UserUnmarshal64(unsigned long *, unsigned char *, LPSAFEARRAY *);
void __RPC_USER LPSAFEARRAY_UserFree64(unsigned long *, LPSAFEARRAY *);
#endif

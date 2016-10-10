/*+@@file@@----------------------------------------------------------------*//*!
 \file		bitscfg.h
 \par Description 
            Extension and update of headers for PellesC compiler suite.
 \par Project: 
            PellesC Headers extension
 \date		Created  on Sat Jul  2 21:12:48 2016
 \date		Modified on Sat Jul  2 21:12:48 2016
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
#ifndef __bitscfg_h__
#define __bitscfg_h__
#if __POCC__ >= 500
#pragma once
#endif
#ifndef __IBITSExtensionSetup_FWD_DEFINED__
#define __IBITSExtensionSetup_FWD_DEFINED__
typedef interface IBITSExtensionSetup IBITSExtensionSetup;
#endif
#ifndef __IBITSExtensionSetupFactory_FWD_DEFINED__
#define __IBITSExtensionSetupFactory_FWD_DEFINED__
typedef interface IBITSExtensionSetupFactory IBITSExtensionSetupFactory;
#endif
#ifndef __BITSExtensionSetupFactory_FWD_DEFINED__
#define __BITSExtensionSetupFactory_FWD_DEFINED__
typedef struct BITSExtensionSetupFactory BITSExtensionSetupFactory;
#endif
#include "oaidl.h"
#include "ocidl.h"
#include "mstask.h"
#ifndef __IBITSExtensionSetup_INTERFACE_DEFINED__
#define __IBITSExtensionSetup_INTERFACE_DEFINED__
extern const IID IID_IBITSExtensionSetup;
typedef struct IBITSExtensionSetupVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IBITSExtensionSetup * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IBITSExtensionSetup * This);
	ULONG(STDMETHODCALLTYPE * Release) (IBITSExtensionSetup * This);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfoCount) (IBITSExtensionSetup * This, UINT * pctinfo);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfo) (IBITSExtensionSetup * This, UINT iTInfo, LCID lcid, ITypeInfo ** ppTInfo);
	HRESULT(STDMETHODCALLTYPE * GetIDsOfNames) (IBITSExtensionSetup * This, REFIID riid, LPOLESTR * rgszNames, UINT cNames, LCID lcid, DISPID * rgDispId);
	HRESULT(STDMETHODCALLTYPE * Invoke) (IBITSExtensionSetup * This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS * pDispParams, VARIANT * pVarResult, EXCEPINFO * pExcepInfo, UINT * puArgErr);
	HRESULT(STDMETHODCALLTYPE * EnableBITSUploads) (IBITSExtensionSetup * This);
	HRESULT(STDMETHODCALLTYPE * DisableBITSUploads) (IBITSExtensionSetup * This);
	HRESULT(STDMETHODCALLTYPE * GetCleanupTaskName) (IBITSExtensionSetup * This, BSTR * pTaskName);
	HRESULT(STDMETHODCALLTYPE * GetCleanupTask) (IBITSExtensionSetup * This, REFIID riid, IUnknown ** ppUnk);
	END_INTERFACE
}  IBITSExtensionSetupVtbl;
interface IBITSExtensionSetup
{
	CONST_VTBL struct IBITSExtensionSetupVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IBITSExtensionSetup_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IBITSExtensionSetup_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define IBITSExtensionSetup_Release(This)( (This)->lpVtbl -> Release(This) )
#define IBITSExtensionSetup_GetTypeInfoCount(This,pctinfo)( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define IBITSExtensionSetup_GetTypeInfo(This,iTInfo,lcid,ppTInfo)( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define IBITSExtensionSetup_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define IBITSExtensionSetup_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define IBITSExtensionSetup_EnableBITSUploads(This)( (This)->lpVtbl -> EnableBITSUploads(This) )
#define IBITSExtensionSetup_DisableBITSUploads(This)( (This)->lpVtbl -> DisableBITSUploads(This) )
#define IBITSExtensionSetup_GetCleanupTaskName(This,pTaskName)( (This)->lpVtbl -> GetCleanupTaskName(This,pTaskName) )
#define IBITSExtensionSetup_GetCleanupTask(This,riid,ppUnk)( (This)->lpVtbl -> GetCleanupTask(This,riid,ppUnk) )
#endif
#endif
#ifndef __IBITSExtensionSetupFactory_INTERFACE_DEFINED__
#define __IBITSExtensionSetupFactory_INTERFACE_DEFINED__
extern const IID IID_IBITSExtensionSetupFactory;
typedef struct IBITSExtensionSetupFactoryVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IBITSExtensionSetupFactory * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IBITSExtensionSetupFactory * This);
	ULONG(STDMETHODCALLTYPE * Release) (IBITSExtensionSetupFactory * This);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfoCount) (IBITSExtensionSetupFactory * This, UINT * pctinfo);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfo) (IBITSExtensionSetupFactory * This, UINT iTInfo, LCID lcid, ITypeInfo ** ppTInfo);
	HRESULT(STDMETHODCALLTYPE * GetIDsOfNames) (IBITSExtensionSetupFactory * This, REFIID riid, LPOLESTR * rgszNames, UINT cNames, LCID lcid, DISPID * rgDispId);
	HRESULT(STDMETHODCALLTYPE * Invoke) (IBITSExtensionSetupFactory * This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS * pDispParams, VARIANT * pVarResult, EXCEPINFO * pExcepInfo, UINT * puArgErr);
	HRESULT(STDMETHODCALLTYPE * GetObject) (IBITSExtensionSetupFactory * This, BSTR Path, IBITSExtensionSetup ** ppExtensionSetup);
	END_INTERFACE
}  IBITSExtensionSetupFactoryVtbl;
interface IBITSExtensionSetupFactory
{
	CONST_VTBL struct IBITSExtensionSetupFactoryVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IBITSExtensionSetupFactory_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IBITSExtensionSetupFactory_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define IBITSExtensionSetupFactory_Release(This)( (This)->lpVtbl -> Release(This) )
#define IBITSExtensionSetupFactory_GetTypeInfoCount(This,pctinfo)( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define IBITSExtensionSetupFactory_GetTypeInfo(This,iTInfo,lcid,ppTInfo)( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define IBITSExtensionSetupFactory_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define IBITSExtensionSetupFactory_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define IBITSExtensionSetupFactory_GetObject(This,Path,ppExtensionSetup)( (This)->lpVtbl -> GetObject(This,Path,ppExtensionSetup) )
#endif
#endif
#ifndef __BITSExtensionSetup_LIBRARY_DEFINED__
#define __BITSExtensionSetup_LIBRARY_DEFINED__
extern const IID LIBID_BITSExtensionSetup;
extern const CLSID CLSID_BITSExtensionSetupFactory;
#endif
unsigned long __RPC_USER BSTR_UserSize(unsigned long *, unsigned long, BSTR *);
unsigned char *__RPC_USER BSTR_UserMarshal(unsigned long *, unsigned char *, BSTR *);
unsigned char *__RPC_USER BSTR_UserUnmarshal(unsigned long *, unsigned char *, BSTR *);
void __RPC_USER BSTR_UserFree(unsigned long *, BSTR *);
unsigned long __RPC_USER BSTR_UserSize64(unsigned long *, unsigned long, BSTR *);
unsigned char *__RPC_USER BSTR_UserMarshal64(unsigned long *, unsigned char *, BSTR *);
unsigned char *__RPC_USER BSTR_UserUnmarshal64(unsigned long *, unsigned char *, BSTR *);
void __RPC_USER BSTR_UserFree64(unsigned long *, BSTR *);
#endif

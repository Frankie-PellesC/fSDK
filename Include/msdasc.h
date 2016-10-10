/*+@@file@@----------------------------------------------------------------*//*!
 \file		msdasc.h
 \par Description 
            Extension and update of headers for PellesC compiler suite.
 \par Project: 
            PellesC Headers extension
 \date		Created  on Sun Aug 14 19:07:29 2016
 \date		Modified on Sun Aug 14 19:07:29 2016
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
#ifndef __msdasc_h__
#define __msdasc_h__
#if __POCC__ >= 500
#pragma once
#endif
#ifndef __IService_FWD_DEFINED__
#define __IService_FWD_DEFINED__
typedef interface IService IService;
#endif
#ifndef __IDBPromptInitialize_FWD_DEFINED__
#define __IDBPromptInitialize_FWD_DEFINED__
typedef interface IDBPromptInitialize IDBPromptInitialize;
#endif
#ifndef __IDataInitialize_FWD_DEFINED__
#define __IDataInitialize_FWD_DEFINED__
typedef interface IDataInitialize IDataInitialize;
#endif
#ifndef __IDataSourceLocator_FWD_DEFINED__
#define __IDataSourceLocator_FWD_DEFINED__
typedef interface IDataSourceLocator IDataSourceLocator;
#endif
#ifndef __DataLinks_FWD_DEFINED__
#define __DataLinks_FWD_DEFINED__
typedef struct DataLinks DataLinks;
#endif
#ifndef __MSDAINITIALIZE_FWD_DEFINED__
#define __MSDAINITIALIZE_FWD_DEFINED__
typedef struct MSDAINITIALIZE MSDAINITIALIZE;
#endif
#ifndef __PDPO_FWD_DEFINED__
#define __PDPO_FWD_DEFINED__
typedef struct PDPO PDPO;
#endif
#ifndef __RootBinder_FWD_DEFINED__
#define __RootBinder_FWD_DEFINED__
typedef struct RootBinder RootBinder;
#endif
#include "oaidl.h"
#include "ocidl.h"
#include "oledb.h"
#ifdef _WIN64
typedef LONGLONG COMPATIBLE_LONG;
#else
typedef LONG COMPATIBLE_LONG;
#endif
typedef enum tagEBindInfoOptions
{
	BIO_BINDER = 0x1
} EBindInfoOptions;
#define STGM_COLLECTION		0x00002000L
#define STGM_OUTPUT			0x00008000L
#define STGM_OPEN			0x80000000L
#define STGM_RECURSIVE		0x01000000L
#define STGM_STRICTOPEN		0x40000000L
extern RPC_IF_HANDLE __MIDL_itf_msdasc_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_msdasc_0000_0000_v0_0_s_ifspec;
#ifndef __IService_INTERFACE_DEFINED__
#define __IService_INTERFACE_DEFINED__
extern const IID IID_IService;
typedef struct IServiceVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IService * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IService * This);
	ULONG(STDMETHODCALLTYPE * Release) (IService * This);
	HRESULT(STDMETHODCALLTYPE * InvokeService) (IService * This, IUnknown * pUnkInner);
	END_INTERFACE
}  IServiceVtbl;
interface IService
{
	CONST_VTBL struct IServiceVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IService_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IService_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IService_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IService_InvokeService(This,pUnkInner) ( (This)->lpVtbl -> InvokeService(This,pUnkInner) )
#endif
#endif
typedef DWORD DBPROMPTOPTIONS;
typedef enum tagDBPROMPTOPTIONSENUM
{
	DBPROMPTOPTIONS_NONE = 0,
	DBPROMPTOPTIONS_WIZARDSHEET = 0x1,
	DBPROMPTOPTIONS_PROPERTYSHEET = 0x2,
	DBPROMPTOPTIONS_BROWSEONLY = 0x8,
	DBPROMPTOPTIONS_DISABLE_PROVIDER_SELECTION = 0x10,
	DBPROMPTOPTIONS_DISABLESAVEPASSWORD = 0x20
} DBPROMPTOPTIONSENUM;
extern RPC_IF_HANDLE __MIDL_itf_msdasc_0000_0001_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_msdasc_0000_0001_v0_0_s_ifspec;
#ifndef __IDBPromptInitialize_INTERFACE_DEFINED__
#define __IDBPromptInitialize_INTERFACE_DEFINED__
extern const IID IID_IDBPromptInitialize;
typedef struct IDBPromptInitializeVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IDBPromptInitialize * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IDBPromptInitialize * This);
	ULONG(STDMETHODCALLTYPE * Release) (IDBPromptInitialize * This);
	HRESULT(STDMETHODCALLTYPE * PromptDataSource) (IDBPromptInitialize * This, IUnknown * pUnkOuter, HWND hWndParent, DBPROMPTOPTIONS dwPromptOptions, ULONG cSourceTypeFilter, DBSOURCETYPE * rgSourceTypeFilter, LPCOLESTR pwszszzProviderFilter, REFIID riid, IUnknown ** ppDataSource);
	HRESULT(STDMETHODCALLTYPE * PromptFileName) (IDBPromptInitialize * This, HWND hWndParent, DBPROMPTOPTIONS dwPromptOptions, LPCOLESTR pwszInitialDirectory, LPCOLESTR pwszInitialFile, LPOLESTR * ppwszSelectedFile);
	END_INTERFACE
}  IDBPromptInitializeVtbl;
interface IDBPromptInitialize
{
	CONST_VTBL struct IDBPromptInitializeVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IDBPromptInitialize_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IDBPromptInitialize_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IDBPromptInitialize_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IDBPromptInitialize_PromptDataSource(This,pUnkOuter,hWndParent,dwPromptOptions,cSourceTypeFilter,rgSourceTypeFilter,pwszszzProviderFilter,riid,ppDataSource) ( (This)->lpVtbl -> PromptDataSource(This,pUnkOuter,hWndParent,dwPromptOptions,cSourceTypeFilter,rgSourceTypeFilter,pwszszzProviderFilter,riid,ppDataSource) )
#define IDBPromptInitialize_PromptFileName(This,hWndParent,dwPromptOptions,pwszInitialDirectory,pwszInitialFile,ppwszSelectedFile) ( (This)->lpVtbl -> PromptFileName(This,hWndParent,dwPromptOptions,pwszInitialDirectory,pwszInitialFile,ppwszSelectedFile) )
#endif
#endif
#ifndef __IDataInitialize_INTERFACE_DEFINED__
#define __IDataInitialize_INTERFACE_DEFINED__
extern const IID IID_IDataInitialize;
typedef struct IDataInitializeVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IDataInitialize * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IDataInitialize * This);
	ULONG(STDMETHODCALLTYPE * Release) (IDataInitialize * This);
	HRESULT(STDMETHODCALLTYPE * GetDataSource) (IDataInitialize * This, IUnknown * pUnkOuter, DWORD dwClsCtx, LPCOLESTR pwszInitializationString, REFIID riid, IUnknown ** ppDataSource);
	HRESULT(STDMETHODCALLTYPE * GetInitializationString) (IDataInitialize * This, IUnknown * pDataSource, boolean fIncludePassword, LPOLESTR * ppwszInitString);
	HRESULT(STDMETHODCALLTYPE * CreateDBInstance) (IDataInitialize * This, REFCLSID clsidProvider, IUnknown * pUnkOuter, DWORD dwClsCtx, LPOLESTR pwszReserved, REFIID riid, IUnknown ** ppDataSource);
	HRESULT(STDMETHODCALLTYPE * CreateDBInstanceEx) (IDataInitialize * This, REFCLSID clsidProvider, IUnknown * pUnkOuter, DWORD dwClsCtx, LPOLESTR pwszReserved, COSERVERINFO * pServerInfo, ULONG cmq, MULTI_QI * rgmqResults);
	HRESULT(STDMETHODCALLTYPE * LoadStringFromStorage) (IDataInitialize * This, LPCOLESTR pwszFileName, LPOLESTR * ppwszInitializationString);
	HRESULT(STDMETHODCALLTYPE * WriteStringToStorage) (IDataInitialize * This, LPCOLESTR pwszFileName, LPCOLESTR pwszInitializationString, DWORD dwCreationDisposition);
	END_INTERFACE
}  IDataInitializeVtbl;
interface IDataInitialize
{
	CONST_VTBL struct IDataInitializeVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IDataInitialize_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IDataInitialize_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IDataInitialize_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IDataInitialize_GetDataSource(This,pUnkOuter,dwClsCtx,pwszInitializationString,riid,ppDataSource) ( (This)->lpVtbl -> GetDataSource(This,pUnkOuter,dwClsCtx,pwszInitializationString,riid,ppDataSource) )
#define IDataInitialize_GetInitializationString(This,pDataSource,fIncludePassword,ppwszInitString) ( (This)->lpVtbl -> GetInitializationString(This,pDataSource,fIncludePassword,ppwszInitString) )
#define IDataInitialize_CreateDBInstance(This,clsidProvider,pUnkOuter,dwClsCtx,pwszReserved,riid,ppDataSource) ( (This)->lpVtbl -> CreateDBInstance(This,clsidProvider,pUnkOuter,dwClsCtx,pwszReserved,riid,ppDataSource) )
#define IDataInitialize_CreateDBInstanceEx(This,clsidProvider,pUnkOuter,dwClsCtx,pwszReserved,pServerInfo,cmq,rgmqResults) ( (This)->lpVtbl -> CreateDBInstanceEx(This,clsidProvider,pUnkOuter,dwClsCtx,pwszReserved,pServerInfo,cmq,rgmqResults) )
#define IDataInitialize_LoadStringFromStorage(This,pwszFileName,ppwszInitializationString) ( (This)->lpVtbl -> LoadStringFromStorage(This,pwszFileName,ppwszInitializationString) )
#define IDataInitialize_WriteStringToStorage(This,pwszFileName,pwszInitializationString,dwCreationDisposition) ( (This)->lpVtbl -> WriteStringToStorage(This,pwszFileName,pwszInitializationString,dwCreationDisposition) )
#endif
HRESULT STDMETHODCALLTYPE IDataInitialize_RemoteCreateDBInstanceEx_Proxy(IDataInitialize *This, REFCLSID clsidProvider, IUnknown *pUnkOuter, DWORD dwClsCtx, LPOLESTR pwszReserved, COSERVERINFO *pServerInfo, ULONG cmq, const IID **rgpIID, IUnknown **rgpItf, HRESULT *rghr);
void __RPC_STUB IDataInitialize_RemoteCreateDBInstanceEx_Stub(IRpcStubBuffer *This, IRpcChannelBuffer *_pRpcChannelBuffer, PRPC_MESSAGE _pRpcMessage, DWORD *_pdwStubPhase);
#endif
#ifndef __MSDASC_LIBRARY_DEFINED__
#define __MSDASC_LIBRARY_DEFINED__
extern const IID LIBID_MSDASC;
#ifndef __IDataSourceLocator_INTERFACE_DEFINED__
#define __IDataSourceLocator_INTERFACE_DEFINED__
extern const IID IID_IDataSourceLocator;
typedef struct IDataSourceLocatorVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE *QueryInterface) (IDataSourceLocator *This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE *AddRef) (IDataSourceLocator *This);
	ULONG(STDMETHODCALLTYPE *Release) (IDataSourceLocator *This);
	HRESULT(STDMETHODCALLTYPE *GetTypeInfoCount) (IDataSourceLocator *This, UINT *pctinfo);
	HRESULT(STDMETHODCALLTYPE *GetTypeInfo) (IDataSourceLocator *This, UINT iTInfo, LCID lcid, ITypeInfo **ppTInfo);
	HRESULT(STDMETHODCALLTYPE *GetIDsOfNames) (IDataSourceLocator *This, REFIID riid, LPOLESTR *rgszNames, UINT cNames, LCID lcid, DISPID *rgDispId);
	HRESULT(STDMETHODCALLTYPE *Invoke) (IDataSourceLocator *This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS *pDispParams, VARIANT *pVarResult, EXCEPINFO *pExcepInfo, UINT *puArgErr);
	HRESULT(STDMETHODCALLTYPE *get_hWnd) (IDataSourceLocator *This, COMPATIBLE_LONG *phwndParent);
	HRESULT(STDMETHODCALLTYPE *put_hWnd) (IDataSourceLocator *This, COMPATIBLE_LONG hwndParent);
	HRESULT(STDMETHODCALLTYPE *PromptNew) (IDataSourceLocator *This, IDispatch **ppADOConnection);
	HRESULT(STDMETHODCALLTYPE *PromptEdit) (IDataSourceLocator *This, IDispatch **ppADOConnection, VARIANT_BOOL *pbSuccess);
	END_INTERFACE
}  IDataSourceLocatorVtbl;
interface IDataSourceLocator
{
	CONST_VTBL struct IDataSourceLocatorVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IDataSourceLocator_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IDataSourceLocator_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IDataSourceLocator_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IDataSourceLocator_GetTypeInfoCount(This,pctinfo) ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define IDataSourceLocator_GetTypeInfo(This,iTInfo,lcid,ppTInfo) ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define IDataSourceLocator_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define IDataSourceLocator_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define IDataSourceLocator_get_hWnd(This,phwndParent) ( (This)->lpVtbl -> get_hWnd(This,phwndParent) )
#define IDataSourceLocator_put_hWnd(This,hwndParent) ( (This)->lpVtbl -> put_hWnd(This,hwndParent) )
#define IDataSourceLocator_PromptNew(This,ppADOConnection) ( (This)->lpVtbl -> PromptNew(This,ppADOConnection) )
#define IDataSourceLocator_PromptEdit(This,ppADOConnection,pbSuccess) ( (This)->lpVtbl -> PromptEdit(This,ppADOConnection,pbSuccess) )
#endif
#endif
extern const CLSID CLSID_DataLinks;
extern const CLSID CLSID_MSDAINITIALIZE;
extern const CLSID CLSID_PDPO;
extern const CLSID CLSID_RootBinder;
#endif
HRESULT STDMETHODCALLTYPE IDataInitialize_CreateDBInstanceEx_Proxy(IDataInitialize *This, REFCLSID clsidProvider, IUnknown * pUnkOuter, DWORD dwClsCtx, LPOLESTR pwszReserved, COSERVERINFO * pServerInfo, ULONG cmq, MULTI_QI * rgmqResults);
HRESULT STDMETHODCALLTYPE IDataInitialize_CreateDBInstanceEx_Stub(IDataInitialize *This, REFCLSID clsidProvider, IUnknown *pUnkOuter, DWORD dwClsCtx, LPOLESTR pwszReserved, COSERVERINFO *pServerInfo, ULONG cmq, const IID **rgpIID, IUnknown **rgpItf, HRESULT *rghr);
#endif

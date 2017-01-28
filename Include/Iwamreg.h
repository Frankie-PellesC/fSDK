/*+@@file@@----------------------------------------------------------------*//*!
 \file		Iwamreg.h
 \par Description 
            Extension and update of headers for PellesC compiler suite.
 \par Project: 
            PellesC Headers extension
 \date		Created  on Sun Jul 17 21:44:36 2016
 \date		Modified on Sun Jul 17 21:44:36 2016
 \author	frankie
\*//*-@@file@@----------------------------------------------------------------*/

#ifndef __REQUIRED_RPCNDR_H_VERSION__
#define __REQUIRED_RPCNDR_H_VERSION__ 475
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
#ifndef __iwamreg_h__
#define __iwamreg_h__
#if __POCC__ >= 500
#pragma once
#endif
#ifndef __IWamAdmin_FWD_DEFINED__
#define __IWamAdmin_FWD_DEFINED__
typedef interface IWamAdmin IWamAdmin;
#endif
#ifndef __IWamAdmin2_FWD_DEFINED__
#define __IWamAdmin2_FWD_DEFINED__
typedef interface IWamAdmin2 IWamAdmin2;
#endif
#ifndef __IIISApplicationAdmin_FWD_DEFINED__
#define __IIISApplicationAdmin_FWD_DEFINED__
typedef interface IIISApplicationAdmin IIISApplicationAdmin;
#endif
#ifndef __WamAdmin_FWD_DEFINED__
#define __WamAdmin_FWD_DEFINED__
typedef struct WamAdmin WamAdmin;
#endif
#include <oaidl.h>
#include <ocidl.h>
#ifndef __WAMREG_IADM__IID
#define __WAMREG_IADM__IID
DEFINE_GUID(IID_IWamAdmin, 0x29822AB7, 0xF302, 0x11D0, 0x99, 0x53, 0x00, 0xC0, 0x4F, 0xD9, 0x19, 0xC1);
DEFINE_GUID(IID_IWamAdmin2, 0x29822AB8, 0xF302, 0x11D0, 0x99, 0x53, 0x00, 0xC0, 0x4F, 0xD9, 0x19, 0xC1);
DEFINE_GUID(IID_IIISApplicationAdmin, 0x7C4E1804, 0xE342, 0x483D, 0xA4, 0x3E, 0xA8, 0x50, 0xCF, 0xCC, 0x8D, 0x18);
DEFINE_GUID(IID_IIISApplicationAdmin2, 0xd643717a, 0xfc87, 0x4260, 0x88, 0xac, 0x6c, 0xe3, 0x5f, 0x0e, 0xc1, 0x4e);
DEFINE_GUID(LIBID_WAMREGLib, 0x29822AA8, 0xF302, 0x11D0, 0x99, 0x53, 0x00, 0xC0, 0x4F, 0xD9, 0x19, 0xC1);
DEFINE_GUID(CLSID_WamAdmin, 0x61738644, 0xF196, 0x11D0, 0x99, 0x53, 0x00, 0xC0, 0x4F, 0xD9, 0x19, 0xC1);
#endif
#define APPSTATUS_STOPPED	0
#define APPSTATUS_RUNNING	1
#define APPSTATUS_NOTDEFINED	2
typedef enum __MIDL___MIDL_itf_wamreg_0000_0000_0001
{
	eAppRunInProc = 0,
	eAppRunOutProcIsolated = (eAppRunInProc + 1),
	eAppRunOutProcInDefaultPool = (eAppRunOutProcIsolated + 1)
} EAppMode;
extern RPC_IF_HANDLE __MIDL_itf_wamreg_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_wamreg_0000_0000_v0_0_s_ifspec;
#ifndef __IWamAdmin_INTERFACE_DEFINED__
#define __IWamAdmin_INTERFACE_DEFINED__
extern const IID IID_IWamAdmin;
typedef struct IWamAdminVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IWamAdmin * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IWamAdmin * This);
	ULONG(STDMETHODCALLTYPE * Release) (IWamAdmin * This);
	HRESULT(STDMETHODCALLTYPE * AppCreate) (IWamAdmin * This, LPCWSTR szMDPath, BOOL fInProc);
	HRESULT(STDMETHODCALLTYPE * AppDelete) (IWamAdmin * This, LPCWSTR szMDPath, BOOL fRecursive);
	HRESULT(STDMETHODCALLTYPE * AppUnLoad) (IWamAdmin * This, LPCWSTR szMDPath, BOOL fRecursive);
	HRESULT(STDMETHODCALLTYPE * AppGetStatus) (IWamAdmin * This, LPCWSTR szMDPath, DWORD * pdwAppStatus);
	HRESULT(STDMETHODCALLTYPE * AppDeleteRecoverable) (IWamAdmin * This, LPCWSTR szMDPath, BOOL fRecursive);
	HRESULT(STDMETHODCALLTYPE * AppRecover) (IWamAdmin * This, LPCWSTR szMDPath, BOOL fRecursive);
	END_INTERFACE
}  IWamAdminVtbl;
interface IWamAdmin
{
	CONST_VTBL struct IWamAdminVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IWamAdmin_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IWamAdmin_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define IWamAdmin_Release(This)( (This)->lpVtbl -> Release(This) )
#define IWamAdmin_AppCreate(This,szMDPath,fInProc)( (This)->lpVtbl -> AppCreate(This,szMDPath,fInProc) )
#define IWamAdmin_AppDelete(This,szMDPath,fRecursive)( (This)->lpVtbl -> AppDelete(This,szMDPath,fRecursive) )
#define IWamAdmin_AppUnLoad(This,szMDPath,fRecursive)( (This)->lpVtbl -> AppUnLoad(This,szMDPath,fRecursive) )
#define IWamAdmin_AppGetStatus(This,szMDPath,pdwAppStatus)( (This)->lpVtbl -> AppGetStatus(This,szMDPath,pdwAppStatus) )
#define IWamAdmin_AppDeleteRecoverable(This,szMDPath,fRecursive)( (This)->lpVtbl -> AppDeleteRecoverable(This,szMDPath,fRecursive) )
#define IWamAdmin_AppRecover(This,szMDPath,fRecursive)( (This)->lpVtbl -> AppRecover(This,szMDPath,fRecursive) )
#endif
#endif
#ifndef __IWamAdmin2_INTERFACE_DEFINED__
#define __IWamAdmin2_INTERFACE_DEFINED__
extern const IID IID_IWamAdmin2;
typedef struct IWamAdmin2Vtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IWamAdmin2 * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IWamAdmin2 * This);
	ULONG(STDMETHODCALLTYPE * Release) (IWamAdmin2 * This);
	HRESULT(STDMETHODCALLTYPE * AppCreate) (IWamAdmin2 * This, LPCWSTR szMDPath, BOOL fInProc);
	HRESULT(STDMETHODCALLTYPE * AppDelete) (IWamAdmin2 * This, LPCWSTR szMDPath, BOOL fRecursive);
	HRESULT(STDMETHODCALLTYPE * AppUnLoad) (IWamAdmin2 * This, LPCWSTR szMDPath, BOOL fRecursive);
	HRESULT(STDMETHODCALLTYPE * AppGetStatus) (IWamAdmin2 * This, LPCWSTR szMDPath, DWORD * pdwAppStatus);
	HRESULT(STDMETHODCALLTYPE * AppDeleteRecoverable) (IWamAdmin2 * This, LPCWSTR szMDPath, BOOL fRecursive);
	HRESULT(STDMETHODCALLTYPE * AppRecover) (IWamAdmin2 * This, LPCWSTR szMDPath, BOOL fRecursive);
	HRESULT(STDMETHODCALLTYPE * AppCreate2) (IWamAdmin2 * This, LPCWSTR szMDPath, DWORD dwAppMode);
	END_INTERFACE
}  IWamAdmin2Vtbl;
interface IWamAdmin2
{
	CONST_VTBL struct IWamAdmin2Vtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IWamAdmin2_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IWamAdmin2_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define IWamAdmin2_Release(This)( (This)->lpVtbl -> Release(This) )
#define IWamAdmin2_AppCreate(This,szMDPath,fInProc)( (This)->lpVtbl -> AppCreate(This,szMDPath,fInProc) )
#define IWamAdmin2_AppDelete(This,szMDPath,fRecursive)( (This)->lpVtbl -> AppDelete(This,szMDPath,fRecursive) )
#define IWamAdmin2_AppUnLoad(This,szMDPath,fRecursive)( (This)->lpVtbl -> AppUnLoad(This,szMDPath,fRecursive) )
#define IWamAdmin2_AppGetStatus(This,szMDPath,pdwAppStatus)( (This)->lpVtbl -> AppGetStatus(This,szMDPath,pdwAppStatus) )
#define IWamAdmin2_AppDeleteRecoverable(This,szMDPath,fRecursive)( (This)->lpVtbl -> AppDeleteRecoverable(This,szMDPath,fRecursive) )
#define IWamAdmin2_AppRecover(This,szMDPath,fRecursive)( (This)->lpVtbl -> AppRecover(This,szMDPath,fRecursive) )
#define IWamAdmin2_AppCreate2(This,szMDPath,dwAppMode)( (This)->lpVtbl -> AppCreate2(This,szMDPath,dwAppMode) )
#endif
#endif
#ifndef __IIISApplicationAdmin_INTERFACE_DEFINED__
#define __IIISApplicationAdmin_INTERFACE_DEFINED__
extern const IID IID_IIISApplicationAdmin;
typedef struct IIISApplicationAdminVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IIISApplicationAdmin * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IIISApplicationAdmin * This);
	ULONG(STDMETHODCALLTYPE * Release) (IIISApplicationAdmin * This);
	HRESULT(STDMETHODCALLTYPE * CreateApplication) (IIISApplicationAdmin * This, LPCWSTR szMDPath, DWORD dwAppMode, LPCWSTR szAppPoolId, BOOL fCreatePool);
	HRESULT(STDMETHODCALLTYPE * DeleteApplication) (IIISApplicationAdmin * This, LPCWSTR szMDPath, BOOL fRecursive);
	HRESULT(STDMETHODCALLTYPE * CreateApplicationPool) (IIISApplicationAdmin * This, LPCWSTR szPool);
	HRESULT(STDMETHODCALLTYPE * DeleteApplicationPool) (IIISApplicationAdmin * This, LPCWSTR szPool);
	HRESULT(STDMETHODCALLTYPE * EnumerateApplicationsInPool) (IIISApplicationAdmin * This, LPCWSTR szPool, BSTR * bstrBuffer);
	HRESULT(STDMETHODCALLTYPE * RecycleApplicationPool) (IIISApplicationAdmin * This, LPCWSTR szPool);
	HRESULT(STDMETHODCALLTYPE * GetProcessMode) (IIISApplicationAdmin * This, DWORD * pdwMode);
	END_INTERFACE
}  IIISApplicationAdminVtbl;
interface IIISApplicationAdmin
{
	CONST_VTBL struct IIISApplicationAdminVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IIISApplicationAdmin_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IIISApplicationAdmin_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define IIISApplicationAdmin_Release(This)( (This)->lpVtbl -> Release(This) )
#define IIISApplicationAdmin_CreateApplication(This,szMDPath,dwAppMode,szAppPoolId,fCreatePool)( (This)->lpVtbl -> CreateApplication(This,szMDPath,dwAppMode,szAppPoolId,fCreatePool) )
#define IIISApplicationAdmin_DeleteApplication(This,szMDPath,fRecursive)( (This)->lpVtbl -> DeleteApplication(This,szMDPath,fRecursive) )
#define IIISApplicationAdmin_CreateApplicationPool(This,szPool)( (This)->lpVtbl -> CreateApplicationPool(This,szPool) )
#define IIISApplicationAdmin_DeleteApplicationPool(This,szPool)( (This)->lpVtbl -> DeleteApplicationPool(This,szPool) )
#define IIISApplicationAdmin_EnumerateApplicationsInPool(This,szPool,bstrBuffer)( (This)->lpVtbl -> EnumerateApplicationsInPool(This,szPool,bstrBuffer) )
#define IIISApplicationAdmin_RecycleApplicationPool(This,szPool)( (This)->lpVtbl -> RecycleApplicationPool(This,szPool) )
#define IIISApplicationAdmin_GetProcessMode(This,pdwMode)( (This)->lpVtbl -> GetProcessMode(This,pdwMode) )
#endif
#endif
#ifndef __WAMREGLib_LIBRARY_DEFINED__
#define __WAMREGLib_LIBRARY_DEFINED__
extern const IID LIBID_WAMREGLib;
extern const CLSID CLSID_WamAdmin;
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

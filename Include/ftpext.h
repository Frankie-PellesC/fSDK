/*+@@file@@----------------------------------------------------------------*//*!
 \file		ftpext.h
 \par Description
            Extension and update of headers for PellesC compiler suite.
 \par Project:
            PellesC Headers extension
 \date		Created  on Sun Jul 10 19:01:49 2016
 \date		Modified on Sun Jul 10 19:01:49 2016
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
#ifndef __ftpext_h__
#define __ftpext_h__
#if __POCC__ >= 500
#pragma once
#endif
#ifndef __IFtpProviderConstruct_FWD_DEFINED__
#define __IFtpProviderConstruct_FWD_DEFINED__
typedef interface IFtpProviderConstruct IFtpProviderConstruct;
#endif
#ifndef __IFtpAuthenticationProvider_FWD_DEFINED__
#define __IFtpAuthenticationProvider_FWD_DEFINED__
typedef interface IFtpAuthenticationProvider IFtpAuthenticationProvider;
#endif
#ifndef __AsyncIFtpAuthenticationProvider_FWD_DEFINED__
#define __AsyncIFtpAuthenticationProvider_FWD_DEFINED__
typedef interface AsyncIFtpAuthenticationProvider AsyncIFtpAuthenticationProvider;
#endif
#ifndef __IFtpRoleProvider_FWD_DEFINED__
#define __IFtpRoleProvider_FWD_DEFINED__
typedef interface IFtpRoleProvider IFtpRoleProvider;
#endif
#ifndef __AsyncIFtpRoleProvider_FWD_DEFINED__
#define __AsyncIFtpRoleProvider_FWD_DEFINED__
typedef interface AsyncIFtpRoleProvider AsyncIFtpRoleProvider;
#endif
#ifndef __IFtpHomeDirectoryProvider_FWD_DEFINED__
#define __IFtpHomeDirectoryProvider_FWD_DEFINED__
typedef interface IFtpHomeDirectoryProvider IFtpHomeDirectoryProvider;
#endif
#ifndef __AsyncIFtpHomeDirectoryProvider_FWD_DEFINED__
#define __AsyncIFtpHomeDirectoryProvider_FWD_DEFINED__
typedef interface AsyncIFtpHomeDirectoryProvider AsyncIFtpHomeDirectoryProvider;
#endif
#ifndef __IFtpLogProvider_FWD_DEFINED__
#define __IFtpLogProvider_FWD_DEFINED__
typedef interface IFtpLogProvider IFtpLogProvider;
#endif
#ifndef __AsyncIFtpLogProvider_FWD_DEFINED__
#define __AsyncIFtpLogProvider_FWD_DEFINED__
typedef interface AsyncIFtpLogProvider AsyncIFtpLogProvider;
#endif
#ifndef __FtpProvider_FWD_DEFINED__
#define __FtpProvider_FWD_DEFINED__
typedef struct FtpProvider FtpProvider;
#endif
#include "unknwn.h"
struct DECLSPEC_UUID ("9e04226f-e38c-419e-a448-62de3b3a8f43") CONFIGURATION_ENTRY
{
	BSTR bstrKey;
	BSTR bstrValue;
};
extern RPC_IF_HANDLE __MIDL_itf_ftpext_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_ftpext_0000_0000_v0_0_s_ifspec;
#ifndef __IFtpProviderConstruct_INTERFACE_DEFINED__
#define __IFtpProviderConstruct_INTERFACE_DEFINED__
extern const IID IID_IFtpProviderConstruct;
typedef struct IFtpProviderConstructVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IFtpProviderConstruct * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IFtpProviderConstruct * This);
	ULONG(STDMETHODCALLTYPE * Release) (IFtpProviderConstruct * This);
	HRESULT(STDMETHODCALLTYPE * Construct) (IFtpProviderConstruct * This, SAFEARRAY * configurationEntries);
	END_INTERFACE
}  IFtpProviderConstructVtbl;
interface IFtpProviderConstruct
{
	CONST_VTBL struct IFtpProviderConstructVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IFtpProviderConstruct_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IFtpProviderConstruct_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define IFtpProviderConstruct_Release(This)( (This)->lpVtbl -> Release(This) )
#define IFtpProviderConstruct_Construct(This,configurationEntries)( (This)->lpVtbl -> Construct(This,configurationEntries) )
#endif
#endif
#ifndef __IFtpAuthenticationProvider_INTERFACE_DEFINED__
#define __IFtpAuthenticationProvider_INTERFACE_DEFINED__
extern const IID IID_IFtpAuthenticationProvider;
typedef struct IFtpAuthenticationProviderVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IFtpAuthenticationProvider * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IFtpAuthenticationProvider * This);
	ULONG(STDMETHODCALLTYPE * Release) (IFtpAuthenticationProvider * This);
	HRESULT(STDMETHODCALLTYPE * AuthenticateUser) (IFtpAuthenticationProvider * This, LPCWSTR pszSessionId, LPCWSTR pszSiteName, LPCWSTR pszUserName, LPCWSTR pszPassword, LPWSTR * ppszCanonicalUserName, BOOL * pfAuthenticated);
	END_INTERFACE
}  IFtpAuthenticationProviderVtbl;
interface IFtpAuthenticationProvider
{
	CONST_VTBL struct IFtpAuthenticationProviderVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IFtpAuthenticationProvider_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IFtpAuthenticationProvider_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define IFtpAuthenticationProvider_Release(This)( (This)->lpVtbl -> Release(This) )
#define IFtpAuthenticationProvider_AuthenticateUser(This,pszSessionId,pszSiteName,pszUserName,pszPassword,ppszCanonicalUserName,pfAuthenticated)( (This)->lpVtbl -> AuthenticateUser(This,pszSessionId,pszSiteName,pszUserName,pszPassword,ppszCanonicalUserName,pfAuthenticated) )
#endif
#endif
#ifndef __AsyncIFtpAuthenticationProvider_INTERFACE_DEFINED__
#define __AsyncIFtpAuthenticationProvider_INTERFACE_DEFINED__
extern const IID IID_AsyncIFtpAuthenticationProvider;
typedef struct AsyncIFtpAuthenticationProviderVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (AsyncIFtpAuthenticationProvider * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (AsyncIFtpAuthenticationProvider * This);
	ULONG(STDMETHODCALLTYPE * Release) (AsyncIFtpAuthenticationProvider * This);
	HRESULT(STDMETHODCALLTYPE * Begin_AuthenticateUser) (AsyncIFtpAuthenticationProvider * This, LPCWSTR pszSessionId, LPCWSTR pszSiteName, LPCWSTR pszUserName, LPCWSTR pszPassword);
	HRESULT(STDMETHODCALLTYPE * Finish_AuthenticateUser) (AsyncIFtpAuthenticationProvider * This, LPWSTR * ppszCanonicalUserName, BOOL * pfAuthenticated);
	END_INTERFACE
}  AsyncIFtpAuthenticationProviderVtbl;
interface AsyncIFtpAuthenticationProvider
{
	CONST_VTBL struct AsyncIFtpAuthenticationProviderVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define AsyncIFtpAuthenticationProvider_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define AsyncIFtpAuthenticationProvider_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define AsyncIFtpAuthenticationProvider_Release(This)( (This)->lpVtbl -> Release(This) )
#define AsyncIFtpAuthenticationProvider_Begin_AuthenticateUser(This,pszSessionId,pszSiteName,pszUserName,pszPassword)( (This)->lpVtbl -> Begin_AuthenticateUser(This,pszSessionId,pszSiteName,pszUserName,pszPassword) )
#define AsyncIFtpAuthenticationProvider_Finish_AuthenticateUser(This,ppszCanonicalUserName,pfAuthenticated)( (This)->lpVtbl -> Finish_AuthenticateUser(This,ppszCanonicalUserName,pfAuthenticated) )
#endif
#endif
#ifndef __IFtpRoleProvider_INTERFACE_DEFINED__
#define __IFtpRoleProvider_INTERFACE_DEFINED__
extern const IID IID_IFtpRoleProvider;
typedef struct IFtpRoleProviderVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IFtpRoleProvider * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IFtpRoleProvider * This);
	ULONG(STDMETHODCALLTYPE * Release) (IFtpRoleProvider * This);
	HRESULT(STDMETHODCALLTYPE * IsUserInRole) (IFtpRoleProvider * This, LPCWSTR pszSessionId, LPCWSTR pszSiteName, LPCWSTR pszUserName, LPCWSTR pszRole, BOOL * pfIsInRole);
	END_INTERFACE
}  IFtpRoleProviderVtbl;
interface IFtpRoleProvider
{
	CONST_VTBL struct IFtpRoleProviderVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IFtpRoleProvider_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IFtpRoleProvider_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define IFtpRoleProvider_Release(This)( (This)->lpVtbl -> Release(This) )
#define IFtpRoleProvider_IsUserInRole(This,pszSessionId,pszSiteName,pszUserName,pszRole,pfIsInRole)( (This)->lpVtbl -> IsUserInRole(This,pszSessionId,pszSiteName,pszUserName,pszRole,pfIsInRole) )
#endif
#endif
#ifndef __AsyncIFtpRoleProvider_INTERFACE_DEFINED__
#define __AsyncIFtpRoleProvider_INTERFACE_DEFINED__
extern const IID IID_AsyncIFtpRoleProvider;
typedef struct AsyncIFtpRoleProviderVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (AsyncIFtpRoleProvider * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (AsyncIFtpRoleProvider * This);
	ULONG(STDMETHODCALLTYPE * Release) (AsyncIFtpRoleProvider * This);
	HRESULT(STDMETHODCALLTYPE * Begin_IsUserInRole) (AsyncIFtpRoleProvider * This, LPCWSTR pszSessionId, LPCWSTR pszSiteName, LPCWSTR pszUserName, LPCWSTR pszRole);
	HRESULT(STDMETHODCALLTYPE * Finish_IsUserInRole) (AsyncIFtpRoleProvider * This, BOOL * pfIsInRole);
	END_INTERFACE
}  AsyncIFtpRoleProviderVtbl;
interface AsyncIFtpRoleProvider
{
	CONST_VTBL struct AsyncIFtpRoleProviderVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define AsyncIFtpRoleProvider_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define AsyncIFtpRoleProvider_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define AsyncIFtpRoleProvider_Release(This)( (This)->lpVtbl -> Release(This) )
#define AsyncIFtpRoleProvider_Begin_IsUserInRole(This,pszSessionId,pszSiteName,pszUserName,pszRole)( (This)->lpVtbl -> Begin_IsUserInRole(This,pszSessionId,pszSiteName,pszUserName,pszRole) )
#define AsyncIFtpRoleProvider_Finish_IsUserInRole(This,pfIsInRole)( (This)->lpVtbl -> Finish_IsUserInRole(This,pfIsInRole) )
#endif
#endif
#ifndef __IFtpHomeDirectoryProvider_INTERFACE_DEFINED__
#define __IFtpHomeDirectoryProvider_INTERFACE_DEFINED__
extern const IID IID_IFtpHomeDirectoryProvider;
typedef struct IFtpHomeDirectoryProviderVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IFtpHomeDirectoryProvider * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IFtpHomeDirectoryProvider * This);
	ULONG(STDMETHODCALLTYPE * Release) (IFtpHomeDirectoryProvider * This);
	HRESULT(STDMETHODCALLTYPE * GetUserHomeDirectoryData) (IFtpHomeDirectoryProvider * This, LPCWSTR pszSessionId, LPCWSTR pszSiteName, LPCWSTR pszUserName, LPWSTR * ppszHomeDirectoryData);
	END_INTERFACE
}  IFtpHomeDirectoryProviderVtbl;
interface IFtpHomeDirectoryProvider
{
	CONST_VTBL struct IFtpHomeDirectoryProviderVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IFtpHomeDirectoryProvider_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IFtpHomeDirectoryProvider_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define IFtpHomeDirectoryProvider_Release(This)( (This)->lpVtbl -> Release(This) )
#define IFtpHomeDirectoryProvider_GetUserHomeDirectoryData(This,pszSessionId,pszSiteName,pszUserName,ppszHomeDirectoryData)( (This)->lpVtbl -> GetUserHomeDirectoryData(This,pszSessionId,pszSiteName,pszUserName,ppszHomeDirectoryData) )
#endif
#endif
#ifndef __AsyncIFtpHomeDirectoryProvider_INTERFACE_DEFINED__
#define __AsyncIFtpHomeDirectoryProvider_INTERFACE_DEFINED__
extern const IID IID_AsyncIFtpHomeDirectoryProvider;
typedef struct AsyncIFtpHomeDirectoryProviderVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (AsyncIFtpHomeDirectoryProvider * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (AsyncIFtpHomeDirectoryProvider * This);
	ULONG(STDMETHODCALLTYPE * Release) (AsyncIFtpHomeDirectoryProvider * This);
	HRESULT(STDMETHODCALLTYPE * Begin_GetUserHomeDirectoryData) (AsyncIFtpHomeDirectoryProvider * This, LPCWSTR pszSessionId, LPCWSTR pszSiteName, LPCWSTR pszUserName);
	HRESULT(STDMETHODCALLTYPE * Finish_GetUserHomeDirectoryData) (AsyncIFtpHomeDirectoryProvider * This, LPWSTR * ppszHomeDirectoryData);
	END_INTERFACE
}  AsyncIFtpHomeDirectoryProviderVtbl;
interface AsyncIFtpHomeDirectoryProvider
{
	CONST_VTBL struct AsyncIFtpHomeDirectoryProviderVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define AsyncIFtpHomeDirectoryProvider_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define AsyncIFtpHomeDirectoryProvider_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define AsyncIFtpHomeDirectoryProvider_Release(This)( (This)->lpVtbl -> Release(This) )
#define AsyncIFtpHomeDirectoryProvider_Begin_GetUserHomeDirectoryData(This,pszSessionId,pszSiteName,pszUserName)( (This)->lpVtbl -> Begin_GetUserHomeDirectoryData(This,pszSessionId,pszSiteName,pszUserName) )
#define AsyncIFtpHomeDirectoryProvider_Finish_GetUserHomeDirectoryData(This,ppszHomeDirectoryData)( (This)->lpVtbl -> Finish_GetUserHomeDirectoryData(This,ppszHomeDirectoryData) )
#endif
#endif
struct  DECLSPEC_UUID("6c678262-fc37-406e-84e8-e9c6a5757cdc") LOGGING_PARAMETERS
{
	LPCWSTR pszSessionId;
	LPCWSTR pszSiteName;
	LPCWSTR pszUserName;
	LPCWSTR pszHostName;
	LPCWSTR pszRemoteIpAddress;
	DWORD dwRemoteIpPort;
	LPCWSTR pszLocalIpAddress;
	DWORD dwLocalIpPort;
	ULONGLONG BytesSent;
	ULONGLONG BytesReceived;
	LPCWSTR pszCommand;
	LPCWSTR pszCommandParameters;
	LPCWSTR pszFullPath;
	DWORD dwElapsedMilliseconds;
	DWORD FtpStatus;
	DWORD FtpSubStatus;
	HRESULT hrStatus;
	LPCWSTR pszInformation;
};
extern RPC_IF_HANDLE __MIDL_itf_ftpext_0000_0004_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_ftpext_0000_0004_v0_0_s_ifspec;
#ifndef __IFtpLogProvider_INTERFACE_DEFINED__
#define __IFtpLogProvider_INTERFACE_DEFINED__
extern const IID IID_IFtpLogProvider;
typedef struct IFtpLogProviderVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IFtpLogProvider * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IFtpLogProvider * This);
	ULONG(STDMETHODCALLTYPE * Release) (IFtpLogProvider * This);
	HRESULT(STDMETHODCALLTYPE * Log) (IFtpLogProvider * This, const struct LOGGING_PARAMETERS * pLoggingParameters);
	END_INTERFACE
}  IFtpLogProviderVtbl;
interface IFtpLogProvider
{
	CONST_VTBL struct IFtpLogProviderVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IFtpLogProvider_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IFtpLogProvider_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define IFtpLogProvider_Release(This)( (This)->lpVtbl -> Release(This) )
#define IFtpLogProvider_Log(This,pLoggingParameters)( (This)->lpVtbl -> Log(This,pLoggingParameters) )
#endif
#endif
#ifndef __AsyncIFtpLogProvider_INTERFACE_DEFINED__
#define __AsyncIFtpLogProvider_INTERFACE_DEFINED__
extern const IID IID_AsyncIFtpLogProvider;
typedef struct AsyncIFtpLogProviderVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (AsyncIFtpLogProvider * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (AsyncIFtpLogProvider * This);
	ULONG(STDMETHODCALLTYPE * Release) (AsyncIFtpLogProvider * This);
	HRESULT(STDMETHODCALLTYPE * Begin_Log) (AsyncIFtpLogProvider * This, const struct LOGGING_PARAMETERS * pLoggingParameters);
	HRESULT(STDMETHODCALLTYPE * Finish_Log) (AsyncIFtpLogProvider * This);
	END_INTERFACE
}  AsyncIFtpLogProviderVtbl;
interface AsyncIFtpLogProvider
{
	CONST_VTBL struct AsyncIFtpLogProviderVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define AsyncIFtpLogProvider_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define AsyncIFtpLogProvider_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define AsyncIFtpLogProvider_Release(This)( (This)->lpVtbl -> Release(This) )
#define AsyncIFtpLogProvider_Begin_Log(This,pLoggingParameters)( (This)->lpVtbl -> Begin_Log(This,pLoggingParameters) )
#define AsyncIFtpLogProvider_Finish_Log(This)( (This)->lpVtbl -> Finish_Log(This) )
#endif
#endif
#ifndef __FtpProviderLibrary_LIBRARY_DEFINED__
#define __FtpProviderLibrary_LIBRARY_DEFINED__
extern const IID LIBID_FtpProviderLibrary;
extern const CLSID CLSID_FtpProvider;
#endif
unsigned long __RPC_USER LPSAFEARRAY_UserSize(unsigned long *, unsigned long, LPSAFEARRAY *);
unsigned char *__RPC_USER LPSAFEARRAY_UserMarshal(unsigned long *, unsigned char *, LPSAFEARRAY *);
unsigned char *__RPC_USER LPSAFEARRAY_UserUnmarshal(unsigned long *, unsigned char *, LPSAFEARRAY *);
void __RPC_USER LPSAFEARRAY_UserFree(unsigned long *, LPSAFEARRAY *);
unsigned long __RPC_USER LPSAFEARRAY_UserSize64(unsigned long *, unsigned long, LPSAFEARRAY *);
unsigned char *__RPC_USER LPSAFEARRAY_UserMarshal64(unsigned long *, unsigned char *, LPSAFEARRAY *);
unsigned char *__RPC_USER LPSAFEARRAY_UserUnmarshal64(unsigned long *, unsigned char *, LPSAFEARRAY *);
void __RPC_USER LPSAFEARRAY_UserFree64(unsigned long *, LPSAFEARRAY *);
#endif

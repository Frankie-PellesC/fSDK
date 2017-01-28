/*+@@file@@----------------------------------------------------------------*//*!
 \file		workspaceruntimeclientext.h
 \par Description 
            Extension and update of headers for PellesC compiler suite.
 \par Project: 
            PellesC Headers extension
 \date		Created  on Mon Sep 19 16:42:59 2016
 \date		Modified on Mon Sep 19 16:42:59 2016
 \author	frankie
\*//*-@@file@@----------------------------------------------------------------*/

#ifndef __REQUIRED_RPCNDR_H_VERSION__
#define __REQUIRED_RPCNDR_H_VERSION__ 475
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
#ifndef __workspaceruntimeclientext_h__
#define __workspaceruntimeclientext_h__
#if __POCC__ >= 500
#pragma once
#endif
#ifndef __IWorkspaceClientExt_FWD_DEFINED__
#define __IWorkspaceClientExt_FWD_DEFINED__
typedef interface IWorkspaceClientExt IWorkspaceClientExt;
#endif
#include <oaidl.h>
#include <ocidl.h>
#ifndef __IWorkspaceClientExt_INTERFACE_DEFINED__
#define __IWorkspaceClientExt_INTERFACE_DEFINED__
extern const IID IID_IWorkspaceClientExt;
typedef struct IWorkspaceClientExtVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IWorkspaceClientExt * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IWorkspaceClientExt * This);
	ULONG(STDMETHODCALLTYPE * Release) (IWorkspaceClientExt * This);
	HRESULT(STDMETHODCALLTYPE * GetResourceId) (IWorkspaceClientExt * This, BSTR * bstrWorkspaceId);
	HRESULT(STDMETHODCALLTYPE * GetResourceDisplayName) (IWorkspaceClientExt * This, BSTR * bstrWorkspaceDisplayName);
	HRESULT(STDMETHODCALLTYPE * IssueDisconnect) (IWorkspaceClientExt * This);
	END_INTERFACE
}  IWorkspaceClientExtVtbl;
interface IWorkspaceClientExt
{
	CONST_VTBL struct IWorkspaceClientExtVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IWorkspaceClientExt_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IWorkspaceClientExt_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IWorkspaceClientExt_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IWorkspaceClientExt_GetResourceId(This,bstrWorkspaceId) ( (This)->lpVtbl -> GetResourceId(This,bstrWorkspaceId) )
#define IWorkspaceClientExt_GetResourceDisplayName(This,bstrWorkspaceDisplayName) ( (This)->lpVtbl -> GetResourceDisplayName(This,bstrWorkspaceDisplayName) )
#define IWorkspaceClientExt_IssueDisconnect(This) ( (This)->lpVtbl -> IssueDisconnect(This) )
#endif
#endif
unsigned long __RPC_USER BSTR_UserSize(unsigned long *, unsigned long, BSTR *);
unsigned char *__RPC_USER BSTR_UserMarshal(unsigned long *, unsigned char *, BSTR *);
unsigned char *__RPC_USER BSTR_UserUnmarshal(unsigned long *, unsigned char *, BSTR *);
void __RPC_USER BSTR_UserFree(unsigned long *, BSTR *);
#endif

/*+@@file@@----------------------------------------------------------------*//*!
 \file		MimeInfo.h
 \par Description 
            Extension and update of headers for PellesC compiler suite.
 \par Project: 
            PellesC Headers extension
 \date		Created  on Sun Aug  7 21:51:27 2016
 \date		Modified on Sun Aug  7 21:51:27 2016
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
#ifndef __mimeinfo_h__
#define __mimeinfo_h__
#if __POCC__ >= 500
#pragma once
#endif
#ifndef __IMimeInfo_FWD_DEFINED__
#define __IMimeInfo_FWD_DEFINED__
typedef interface IMimeInfo IMimeInfo;
#endif
#include <objidl.h>
#pragma comment(lib,"uuid.lib")
extern RPC_IF_HANDLE __MIDL_itf_mimeinfo_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_mimeinfo_0000_0000_v0_0_s_ifspec;
#ifndef __IMimeInfo_INTERFACE_DEFINED__
#define __IMimeInfo_INTERFACE_DEFINED__
typedef IMimeInfo *LPMIMEINFO;
extern const IID IID_IMimeInfo;
typedef struct IMimeInfoVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IMimeInfo * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IMimeInfo * This);
	ULONG(STDMETHODCALLTYPE * Release) (IMimeInfo * This);
	HRESULT(STDMETHODCALLTYPE * GetMimeCLSIDMapping) (IMimeInfo * This, UINT * pcTypes, LPCSTR ** ppszTypes, CLSID ** ppclsID);
	END_INTERFACE
}  IMimeInfoVtbl;
interface IMimeInfo
{
	CONST_VTBL struct IMimeInfoVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IMimeInfo_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IMimeInfo_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IMimeInfo_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IMimeInfo_GetMimeCLSIDMapping(This,pcTypes,ppszTypes,ppclsID) ( (This)->lpVtbl -> GetMimeCLSIDMapping(This,pcTypes,ppszTypes,ppclsID) )
#endif
#endif
#define SID_IMimeInfo IID_IMimeInfo
extern RPC_IF_HANDLE __MIDL_itf_mimeinfo_0000_0001_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_mimeinfo_0000_0001_v0_0_s_ifspec;
#endif

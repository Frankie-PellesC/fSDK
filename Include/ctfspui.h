/*+@@file@@----------------------------------------------------------------*//*!
 \file		ctfspui.h
 \par Description 
            Extension and update of headers for PellesC compiler suite.
 \par Project: 
            PellesC Headers extension
 \date		Created  on Mon Jul  4 18:47:49 2016
 \date		Modified on Mon Jul  4 18:47:49 2016
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
#ifndef __ctfspui_h__
#define __ctfspui_h__
#if __POCC__ >= 500
#pragma once
#endif
#ifndef __ITfSpeechUIServer_FWD_DEFINED__
#define __ITfSpeechUIServer_FWD_DEFINED__
typedef interface ITfSpeechUIServer ITfSpeechUIServer;
#endif
#include <oaidl.h>
#include <ocidl.h>
#include <msctf.h>
#ifndef CTFSPUI_DEFINED
#define CTFSPUI_DEFINED
#include <windows.h>
extern const CLSID CLSID_SpeechUIServer;
extern RPC_IF_HANDLE __MIDL_itf_ctfspui_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_ctfspui_0000_0000_v0_0_s_ifspec;
#ifndef __ITfSpeechUIServer_INTERFACE_DEFINED__
#define __ITfSpeechUIServer_INTERFACE_DEFINED__
extern const IID IID_ITfSpeechUIServer;
typedef struct ITfSpeechUIServerVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (ITfSpeechUIServer * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (ITfSpeechUIServer * This);
	ULONG(STDMETHODCALLTYPE * Release) (ITfSpeechUIServer * This);
	HRESULT(STDMETHODCALLTYPE * Initialize) (ITfSpeechUIServer * This);
	HRESULT(STDMETHODCALLTYPE * ShowUI) (ITfSpeechUIServer * This, BOOL fShow);
	HRESULT(STDMETHODCALLTYPE * UpdateBalloon) (ITfSpeechUIServer * This, TfLBBalloonStyle style, const WCHAR * pch, ULONG cch);
	END_INTERFACE
}  ITfSpeechUIServerVtbl;
interface ITfSpeechUIServer
{
	CONST_VTBL struct ITfSpeechUIServerVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define ITfSpeechUIServer_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define ITfSpeechUIServer_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define ITfSpeechUIServer_Release(This)( (This)->lpVtbl -> Release(This) )
#define ITfSpeechUIServer_Initialize(This)( (This)->lpVtbl -> Initialize(This) )
#define ITfSpeechUIServer_ShowUI(This,fShow)( (This)->lpVtbl -> ShowUI(This,fShow) )
#define ITfSpeechUIServer_UpdateBalloon(This,style,pch,cch)( (This)->lpVtbl -> UpdateBalloon(This,style,pch,cch) )
#endif
#endif
DEFINE_GUID(IID_ITfSpeechUIServer, 0x90e9a944, 0x9244, 0x489f, 0xa7, 0x8f, 0xde, 0x67, 0xaf, 0xc0, 0x13, 0xa7);
#endif
extern RPC_IF_HANDLE __MIDL_itf_ctfspui_0000_0001_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_ctfspui_0000_0001_v0_0_s_ifspec;
#endif

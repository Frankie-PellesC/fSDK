/*+@@file@@----------------------------------------------------------------*//*!
 \file		wmsplaylistparser.h
 \par Description 
            Extension and update of headers for PellesC compiler suite.
 \par Project: 
            PellesC Headers extension
 \date		Created  on Mon Sep 19 16:20:23 2016
 \date		Modified on Mon Sep 19 16:20:23 2016
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
#ifndef __wmsplaylistparser_h__
#define __wmsplaylistparser_h__
#if __POCC__ >= 500
#pragma once
#endif
#ifndef __IWMSPlaylistParser_FWD_DEFINED__
#define __IWMSPlaylistParser_FWD_DEFINED__
typedef interface IWMSPlaylistParser IWMSPlaylistParser;
#endif
#ifndef __IWMSPlaylistParserCallback_FWD_DEFINED__
#define __IWMSPlaylistParserCallback_FWD_DEFINED__
typedef interface IWMSPlaylistParserCallback IWMSPlaylistParserCallback;
#endif
#ifndef __IWMSPlaylistParserPlugin_FWD_DEFINED__
#define __IWMSPlaylistParserPlugin_FWD_DEFINED__
typedef interface IWMSPlaylistParserPlugin IWMSPlaylistParserPlugin;
#endif
#ifndef __IWMSPlaylistParserPluginCallback_FWD_DEFINED__
#define __IWMSPlaylistParserPluginCallback_FWD_DEFINED__
typedef interface IWMSPlaylistParserPluginCallback IWMSPlaylistParserPluginCallback;
#endif
#include <oaidl.h>
#include <xmldom.h>
#include <nsscore.h>
#include <wmsbuffer.h>
#include <dataContainer.h>
EXTERN_GUID(IID_IWMSPlaylistParser, 0xee1f2ec, 0x48ef, 0x11d2, 0x9e, 0xff, 0x0, 0x60, 0x97, 0xd2, 0xd7, 0xcf);
EXTERN_GUID(IID_IWMSPlaylistParserCallback, 0xee1f2ed, 0x48ef, 0x11d2, 0x9e, 0xff, 0x0, 0x60, 0x97, 0xd2, 0xd7, 0xcf);
EXTERN_GUID(IID_IWMSPlaylistParserPlugin, 0xfa8764c1, 0x90a2, 0x11d2, 0x9f, 0x22, 0x0, 0x60, 0x97, 0xd2, 0xd7, 0xcf);
EXTERN_GUID(IID_IWMSPlaylistParserPluginCallback, 0xfa8764c2, 0x90a2, 0x11d2, 0x9f, 0x22, 0x0, 0x60, 0x97, 0xd2, 0xd7, 0xcf);
extern RPC_IF_HANDLE __MIDL_itf_wmsplaylistparser_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_wmsplaylistparser_0000_0000_v0_0_s_ifspec;
#ifndef __IWMSPlaylistParser_INTERFACE_DEFINED__
#define __IWMSPlaylistParser_INTERFACE_DEFINED__
extern const IID IID_IWMSPlaylistParser;
typedef struct IWMSPlaylistParserVtbl
{
	BEGIN_INTERFACE HRESULT(STDMETHODCALLTYPE *QueryInterface) (IWMSPlaylistParser *This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IWMSPlaylistParser * This);
	ULONG(STDMETHODCALLTYPE * Release) (IWMSPlaylistParser * This);
	HRESULT(STDMETHODCALLTYPE * ReadPlaylist) (IWMSPlaylistParser * This, INSSBuffer * pBuffer, IXMLDOMDocument * pPlaylist, IWMSPlaylistParserCallback * pCallback, QWORD qwContext);
	HRESULT(STDMETHODCALLTYPE * WritePlaylist) (IWMSPlaylistParser * This, IXMLDOMDocument * pPlaylist, IWMSPlaylistParserCallback * pCallback, QWORD qwContext);
	HRESULT(STDMETHODCALLTYPE * ReadPlaylistFromDirectory) (IWMSPlaylistParser * This, IWMSDirectory * pDirectory, LPWSTR pszwFilePattern, IXMLDOMDocument * pPlaylist, IWMSPlaylistParserCallback * pCallback, QWORD qwContext);
	END_INTERFACE
}  IWMSPlaylistParserVtbl;
interface IWMSPlaylistParser
{
	CONST_VTBL struct IWMSPlaylistParserVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IWMSPlaylistParser_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IWMSPlaylistParser_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IWMSPlaylistParser_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IWMSPlaylistParser_ReadPlaylist(This,pBuffer,pPlaylist,pCallback,qwContext) ( (This)->lpVtbl -> ReadPlaylist(This,pBuffer,pPlaylist,pCallback,qwContext) )
#define IWMSPlaylistParser_WritePlaylist(This,pPlaylist,pCallback,qwContext) ( (This)->lpVtbl -> WritePlaylist(This,pPlaylist,pCallback,qwContext) )
#define IWMSPlaylistParser_ReadPlaylistFromDirectory(This,pDirectory,pszwFilePattern,pPlaylist,pCallback,qwContext) ( (This)->lpVtbl -> ReadPlaylistFromDirectory(This,pDirectory,pszwFilePattern,pPlaylist,pCallback,qwContext) )
#endif
#endif
#ifndef __IWMSPlaylistParserCallback_INTERFACE_DEFINED__
#define __IWMSPlaylistParserCallback_INTERFACE_DEFINED__
extern const IID IID_IWMSPlaylistParserCallback;
typedef struct IWMSPlaylistParserCallbackVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IWMSPlaylistParserCallback * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IWMSPlaylistParserCallback * This);
	ULONG(STDMETHODCALLTYPE * Release) (IWMSPlaylistParserCallback * This);
	HRESULT(STDMETHODCALLTYPE * OnReadPlaylist) (IWMSPlaylistParserCallback * This, HRESULT hr, QWORD qwContext);
	HRESULT(STDMETHODCALLTYPE * OnWritePlaylist) (IWMSPlaylistParserCallback * This, HRESULT hr, INSSBuffer * pBuffer, QWORD qwContext);
	END_INTERFACE
}  IWMSPlaylistParserCallbackVtbl;
interface IWMSPlaylistParserCallback
{
	CONST_VTBL struct IWMSPlaylistParserCallbackVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IWMSPlaylistParserCallback_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IWMSPlaylistParserCallback_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IWMSPlaylistParserCallback_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IWMSPlaylistParserCallback_OnReadPlaylist(This,hr,qwContext) ( (This)->lpVtbl -> OnReadPlaylist(This,hr,qwContext) )
#define IWMSPlaylistParserCallback_OnWritePlaylist(This,hr,pBuffer,qwContext) ( (This)->lpVtbl -> OnWritePlaylist(This,hr,pBuffer,qwContext) )
#endif
#endif
#ifndef __IWMSPlaylistParserPlugin_INTERFACE_DEFINED__
#define __IWMSPlaylistParserPlugin_INTERFACE_DEFINED__
extern const IID IID_IWMSPlaylistParserPlugin;
typedef struct IWMSPlaylistParserPluginVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IWMSPlaylistParserPlugin * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IWMSPlaylistParserPlugin * This);
	ULONG(STDMETHODCALLTYPE * Release) (IWMSPlaylistParserPlugin * This);
	HRESULT(STDMETHODCALLTYPE * CreatePlaylistParser) (IWMSPlaylistParserPlugin * This, IWMSCommandContext * pCommandContext, IWMSContext * pUser, IWMSContext * pPresentation, DWORD dwFlags, IWMSClassObject * pFactory, IWMSBufferAllocator * pBufferAllocator, IWMSPlaylistParserPluginCallback * pCallback, QWORD qwContext);
	END_INTERFACE
}  IWMSPlaylistParserPluginVtbl;
interface IWMSPlaylistParserPlugin
{
	CONST_VTBL struct IWMSPlaylistParserPluginVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IWMSPlaylistParserPlugin_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IWMSPlaylistParserPlugin_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IWMSPlaylistParserPlugin_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IWMSPlaylistParserPlugin_CreatePlaylistParser(This,pCommandContext,pUser,pPresentation,dwFlags,pFactory,pBufferAllocator,pCallback,qwContext) ( (This)->lpVtbl -> CreatePlaylistParser(This,pCommandContext,pUser,pPresentation,dwFlags,pFactory,pBufferAllocator,pCallback,qwContext) )
#endif
#endif
#ifndef __IWMSPlaylistParserPluginCallback_INTERFACE_DEFINED__
#define __IWMSPlaylistParserPluginCallback_INTERFACE_DEFINED__
extern const IID IID_IWMSPlaylistParserPluginCallback;
typedef struct IWMSPlaylistParserPluginCallbackVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IWMSPlaylistParserPluginCallback * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IWMSPlaylistParserPluginCallback * This);
	ULONG(STDMETHODCALLTYPE * Release) (IWMSPlaylistParserPluginCallback * This);
	HRESULT(STDMETHODCALLTYPE * OnCreatePlaylistParser) (IWMSPlaylistParserPluginCallback * This, HRESULT hr, IWMSPlaylistParser * pParser, QWORD qwContext);
	END_INTERFACE
}  IWMSPlaylistParserPluginCallbackVtbl;
interface IWMSPlaylistParserPluginCallback
{
	CONST_VTBL struct IWMSPlaylistParserPluginCallbackVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IWMSPlaylistParserPluginCallback_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IWMSPlaylistParserPluginCallback_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IWMSPlaylistParserPluginCallback_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IWMSPlaylistParserPluginCallback_OnCreatePlaylistParser(This,hr,pParser,qwContext) ( (This)->lpVtbl -> OnCreatePlaylistParser(This,hr,pParser,qwContext) )
#endif
#endif
#endif

/*+@@file@@----------------------------------------------------------------*//*!
 \file		amxmlgraphbuilder.h
 \par Description 
            Extension and update of headers for PellesC compiler suite.
 \par Project: 
            PellesC Headers extension
 \date		Created  on Sat Jul  2 17:05:21 2016
 \date		Modified on Sat Jul  2 17:05:21 2016
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
#ifndef __alg_h__
#define __alg_h__
#if __POCC__ >= 500
#pragma once
#endif
#ifndef __IXMLGraphBuilder_FWD_DEFINED__
#define __IXMLGraphBuilder_FWD_DEFINED__
typedef interface IGraphBuilder IGraphBuilder;
#endif
DEFINE_GUID(IID_IXMLGraphBuilder, 0x1bb05960, 0x5fbf, 0x11d2, 0xa5, 0x21, 0x44, 0xdf, 0x7, 0xc1, 0x0, 0x0);
#ifndef __IAdapterInfo_INTERFACE_DEFINED__
#define __IAdapterInfo_INTERFACE_DEFINED__
extern const IID IID_IXMLGraphBuilder;
typedef struct IXMLGraphBuilderVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IXMLGraphBuilder * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IXMLGraphBuilder * This);
	ULONG(STDMETHODCALLTYPE * Release) (IXMLGraphBuilder * This);
    STDMETHOD(BuildFromXML) (IXMLGraphBuilder *This, IGraphBuilder *pGraph, IXMLElement *pxml);
    STDMETHOD(SaveToXML) (IXMLGraphBuilder *This, IGraphBuilder *pGraph, BSTR *pbstrxml);
    STDMETHOD(BuildFromXMLFile) (IXMLGraphBuilder *This, IGraphBuilder *pGraph, LPCWSTR wszFileName, LPCWSTR wszBaseURL);
};
interface IXMLGraphBuilder
{
	CONST_VTBL struct IXMLGraphBuilderVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IXMLGraphBuilder_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IXMLGraphBuilder_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define IXMLGraphBuilder_Release(This)( (This)->lpVtbl -> Release(This) )
#define IXMLGraphBuilder_BuildFromXML(This, pGraph, pxml)( (This)->lpVtbl -> BuildFromXML(This, pGraph, pxml) )
#define IXMLGraphBuilder_SaveToXML(This, pGraph, pbstrxml)( (This)->lpVtbl -> SaveToXML(This, pGraph, pbstrxml) )
#define IXMLGraphBuilder_BuildFromXMLFile(This, pGraph, wszFileName, wszBaseURL)( (This)->lpVtbl -> BuildFromXMLFile(This, pGraph, wszFileName, wszBaseURL) )
#endif
#endif
DEFINE_GUID(CLSID_XMLGraphBuilder, 0x1bb05961, 0x5fbf, 0x11d2, 0xa5, 0x21, 0x44, 0xdf, 0x7, 0xc1, 0x0, 0x0);
#endif

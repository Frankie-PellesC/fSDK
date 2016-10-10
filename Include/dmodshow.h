/*+@@file@@----------------------------------------------------------------*//*!
 \file		dmodshow.h
 \par Description 
            Extension and update of headers for PellesC compiler suite.
 \par Project: 
            PellesC Headers extension
 \date		Created  on Sun Jun 19 16:45:39 2016
 \date		Modified on Sun Jun 19 16:45:39 2016
 \author	frankie
\*//*-@@file@@----------------------------------------------------------------*/

#pragma warning( disable: 4049 )
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
#ifndef __dmodshow_h__
#define __dmodshow_h__
#if __POCC__ >= 500
#pragma once
#endif
#ifndef __IDMOWrapperFilter_FWD_DEFINED__
#define __IDMOWrapperFilter_FWD_DEFINED__
typedef interface IDMOWrapperFilter IDMOWrapperFilter;
#endif
#include "unknwn.h"
#include "objidl.h"
#include "mediaobj.h"
 
DEFINE_GUID(CLSID_DMOWrapperFilter, 0x94297043,0xbd82,0x4dfd,0xb0,0xde,0x81,0x77,0x73,0x9c,0x6d,0x20);
DEFINE_GUID(CLSID_DMOFilterCategory,0xbcd5796c,0xbd52,0x4d30,0xab,0x76,0x70,0xf9,0x75,0xb8,0x91,0x99);
extern RPC_IF_HANDLE __MIDL_itf_dmodshow_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_dmodshow_0000_0000_v0_0_s_ifspec;
#ifndef __IDMOWrapperFilter_INTERFACE_DEFINED__
#define __IDMOWrapperFilter_INTERFACE_DEFINED__ 
extern const IID IID_IDMOWrapperFilter;

typedef struct IDMOWrapperFilterVtbl
{
    BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IDMOWrapperFilter * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IDMOWrapperFilter * This);
	ULONG(STDMETHODCALLTYPE * Release) (IDMOWrapperFilter * This);
	HRESULT(STDMETHODCALLTYPE * Init) (IDMOWrapperFilter * This, REFCLSID clsidDMO, REFCLSID catDMO);
	END_INTERFACE
} IDMOWrapperFilterVtbl;
interface IDMOWrapperFilter
{
    CONST_VTBL struct IDMOWrapperFilterVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define IDMOWrapperFilter_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define IDMOWrapperFilter_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 
#define IDMOWrapperFilter_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 
#define IDMOWrapperFilter_Init(This,clsidDMO,catDMO)	\
    ( (This)->lpVtbl -> Init(This,clsidDMO,catDMO) ) 
#endif
#endif
#endif

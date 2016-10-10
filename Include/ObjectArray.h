/*+@@file@@----------------------------------------------------------------*//*!
 \file		ObjectArray.h
 \par Description 
            Extension and update of headers for PellesC compiler suite.
 \par Project: 
            PellesC Headers extension
 \date		Created  on Mon Jul  4 13:51:42 2016
 \date		Modified on Mon Jul  4 13:51:42 2016
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
#ifndef __objectarray_h__
#define __objectarray_h__
#if __POCC__ >= 500
#pragma once
#endif
#ifndef __IObjectArray_FWD_DEFINED__
#define __IObjectArray_FWD_DEFINED__
typedef interface IObjectArray IObjectArray;
#endif
#ifndef __IObjectCollection_FWD_DEFINED__
#define __IObjectCollection_FWD_DEFINED__
typedef interface IObjectCollection IObjectCollection;
#endif
#include "oaidl.h"
#include "ocidl.h"
#ifndef __IObjectArray_INTERFACE_DEFINED__
#define __IObjectArray_INTERFACE_DEFINED__
extern const IID IID_IObjectArray;
typedef struct IObjectArrayVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IObjectArray * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IObjectArray * This);
	ULONG(STDMETHODCALLTYPE * Release) (IObjectArray * This);
	HRESULT(STDMETHODCALLTYPE * GetCount) (IObjectArray * This, UINT * pcObjects);
	HRESULT(STDMETHODCALLTYPE * GetAt) (IObjectArray * This, UINT uiIndex, REFIID riid, void **ppv);
	END_INTERFACE
}  IObjectArrayVtbl;
interface IObjectArray
{
	CONST_VTBL struct IObjectArrayVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IObjectArray_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IObjectArray_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define IObjectArray_Release(This)( (This)->lpVtbl -> Release(This) )
#define IObjectArray_GetCount(This,pcObjects)( (This)->lpVtbl -> GetCount(This,pcObjects) )
#define IObjectArray_GetAt(This,uiIndex,riid,ppv)( (This)->lpVtbl -> GetAt(This,uiIndex,riid,ppv) )
#endif
#endif
#ifndef __IObjectCollection_INTERFACE_DEFINED__
#define __IObjectCollection_INTERFACE_DEFINED__
extern const IID IID_IObjectCollection;
typedef struct IObjectCollectionVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IObjectCollection * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IObjectCollection * This);
	ULONG(STDMETHODCALLTYPE * Release) (IObjectCollection * This);
	HRESULT(STDMETHODCALLTYPE * GetCount) (IObjectCollection * This, UINT * pcObjects);
	HRESULT(STDMETHODCALLTYPE * GetAt) (IObjectCollection * This, UINT uiIndex, REFIID riid, void **ppv);
	HRESULT(STDMETHODCALLTYPE * AddObject) (IObjectCollection * This, IUnknown * punk);
	HRESULT(STDMETHODCALLTYPE * AddFromArray) (IObjectCollection * This, IObjectArray * poaSource);
	HRESULT(STDMETHODCALLTYPE * RemoveObjectAt) (IObjectCollection * This, UINT uiIndex);
	HRESULT(STDMETHODCALLTYPE * Clear) (IObjectCollection * This);
	END_INTERFACE
}  IObjectCollectionVtbl;
interface IObjectCollection
{
	CONST_VTBL struct IObjectCollectionVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IObjectCollection_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IObjectCollection_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define IObjectCollection_Release(This)( (This)->lpVtbl -> Release(This) )
#define IObjectCollection_GetCount(This,pcObjects)( (This)->lpVtbl -> GetCount(This,pcObjects) )
#define IObjectCollection_GetAt(This,uiIndex,riid,ppv)( (This)->lpVtbl -> GetAt(This,uiIndex,riid,ppv) )
#define IObjectCollection_AddObject(This,punk)( (This)->lpVtbl -> AddObject(This,punk) )
#define IObjectCollection_AddFromArray(This,poaSource)( (This)->lpVtbl -> AddFromArray(This,poaSource) )
#define IObjectCollection_RemoveObjectAt(This,uiIndex)( (This)->lpVtbl -> RemoveObjectAt(This,uiIndex) )
#define IObjectCollection_Clear(This)( (This)->lpVtbl -> Clear(This) )
#endif
#endif
#endif

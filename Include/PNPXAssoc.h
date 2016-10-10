/*+@@file@@----------------------------------------------------------------*//*!
 \file		PNPXAssoc.h
 \par Description 
            Extension and update of headers for PellesC compiler suite.
 \par Project: 
            PellesC Headers extension
 \date		Created  on Mon Sep 12 00:35:12 2016
 \date		Modified on Mon Sep 12 00:35:12 2016
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
#ifndef __pnpxassoc_h__
#define __pnpxassoc_h__
#if __POCC__ >= 500
#pragma once
#endif
#ifndef __IPNPXAssociation_FWD_DEFINED__
#define __IPNPXAssociation_FWD_DEFINED__
typedef interface IPNPXAssociation IPNPXAssociation;
#endif
#ifndef __IPNPXDeviceAssociation_FWD_DEFINED__
#define __IPNPXDeviceAssociation_FWD_DEFINED__
typedef interface IPNPXDeviceAssociation IPNPXDeviceAssociation;
#endif
#ifndef __PNPXAssociation_FWD_DEFINED__
#define __PNPXAssociation_FWD_DEFINED__
typedef struct PNPXAssociation PNPXAssociation;
#endif
#ifndef __PNPXPairingHandler_FWD_DEFINED__
#define __PNPXPairingHandler_FWD_DEFINED__
typedef struct PNPXPairingHandler PNPXPairingHandler;
#endif
#include "oaidl.h"
#include "ocidl.h"
#include "FunctionDiscoveryProvider.h"
#ifndef __IPNPXAssociation_INTERFACE_DEFINED__
#define __IPNPXAssociation_INTERFACE_DEFINED__
extern const IID IID_IPNPXAssociation;
typedef struct IPNPXAssociationVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IPNPXAssociation * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IPNPXAssociation * This);
	ULONG(STDMETHODCALLTYPE * Release) (IPNPXAssociation * This);
	HRESULT(STDMETHODCALLTYPE * Associate) (IPNPXAssociation * This, const WCHAR * pszSubcategory);
	HRESULT(STDMETHODCALLTYPE * Unassociate) (IPNPXAssociation * This, const WCHAR * pszSubcategory);
	HRESULT(STDMETHODCALLTYPE * Delete) (IPNPXAssociation * This, const WCHAR * pszSubcategory);
	END_INTERFACE
}  IPNPXAssociationVtbl;
interface IPNPXAssociation
{
	CONST_VTBL struct IPNPXAssociationVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IPNPXAssociation_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IPNPXAssociation_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IPNPXAssociation_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IPNPXAssociation_Associate(This,pszSubcategory) ( (This)->lpVtbl -> Associate(This,pszSubcategory) )
#define IPNPXAssociation_Unassociate(This,pszSubcategory) ( (This)->lpVtbl -> Unassociate(This,pszSubcategory) )
#define IPNPXAssociation_Delete(This,pszSubcategory) ( (This)->lpVtbl -> Delete(This,pszSubcategory) )
#endif
#endif
#ifndef __IPNPXDeviceAssociation_INTERFACE_DEFINED__
#define __IPNPXDeviceAssociation_INTERFACE_DEFINED__
extern const IID IID_IPNPXDeviceAssociation;
typedef struct IPNPXDeviceAssociationVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IPNPXDeviceAssociation * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IPNPXDeviceAssociation * This);
	ULONG(STDMETHODCALLTYPE * Release) (IPNPXDeviceAssociation * This);
	HRESULT(STDMETHODCALLTYPE * Associate) (IPNPXDeviceAssociation * This, const WCHAR * pszSubCategory, IFunctionDiscoveryNotification * pIFunctionDiscoveryNotification);
	HRESULT(STDMETHODCALLTYPE * Unassociate) (IPNPXDeviceAssociation * This, const WCHAR * pszSubCategory, IFunctionDiscoveryNotification * pIFunctionDiscoveryNotification);
	HRESULT(STDMETHODCALLTYPE * Delete) (IPNPXDeviceAssociation * This, const WCHAR * pszSubcategory, IFunctionDiscoveryNotification * pIFunctionDiscoveryNotification);
	END_INTERFACE
}  IPNPXDeviceAssociationVtbl;
interface IPNPXDeviceAssociation
{
	CONST_VTBL struct IPNPXDeviceAssociationVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IPNPXDeviceAssociation_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IPNPXDeviceAssociation_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IPNPXDeviceAssociation_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IPNPXDeviceAssociation_Associate(This,pszSubCategory,pIFunctionDiscoveryNotification) ( (This)->lpVtbl -> Associate(This,pszSubCategory,pIFunctionDiscoveryNotification) )
#define IPNPXDeviceAssociation_Unassociate(This,pszSubCategory,pIFunctionDiscoveryNotification) ( (This)->lpVtbl -> Unassociate(This,pszSubCategory,pIFunctionDiscoveryNotification) )
#define IPNPXDeviceAssociation_Delete(This,pszSubcategory,pIFunctionDiscoveryNotification) ( (This)->lpVtbl -> Delete(This,pszSubcategory,pIFunctionDiscoveryNotification) )
#endif
#endif
#ifndef __PNPXAssociation_LIBRARY_DEFINED__
#define __PNPXAssociation_LIBRARY_DEFINED__
extern const IID LIBID_PNPXAssociation;
extern const CLSID CLSID_PNPXAssociation;
extern const CLSID CLSID_PNPXPairingHandler;
#endif
#endif

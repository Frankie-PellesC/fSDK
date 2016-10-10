/*+@@file@@----------------------------------------------------------------*//*!
 \file		napprotocol.h
 \par Description 
            Extension and update of headers for PellesC compiler suite.
 \par Project: 
            PellesC Headers extension
 \date		Created  on Sun Sep 11 22:20:59 2016
 \date		Modified on Sun Sep 11 22:20:59 2016
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
#ifndef __napprotocol_h__
#define __napprotocol_h__
#if __POCC__ >= 500
#pragma once
#endif
#ifndef __INapSoHConstructor_FWD_DEFINED__
#define __INapSoHConstructor_FWD_DEFINED__
typedef interface INapSoHConstructor INapSoHConstructor;
#endif
#ifndef __INapSoHProcessor_FWD_DEFINED__
#define __INapSoHProcessor_FWD_DEFINED__
typedef interface INapSoHProcessor INapSoHProcessor;
#endif
#include "NapTypes.h"
#ifndef __INapSoHTypes_INTERFACE_DEFINED__
#define __INapSoHTypes_INTERFACE_DEFINED__
typedef enum tagSoHAttributeType
{
	sohAttributeTypeSystemHealthId = 2,
	sohAttributeTypeIpv4FixupServers = 3,
	sohAttributeTypeComplianceResultCodes = 4,
	sohAttributeTypeTimeOfLastUpdate = 5,
	sohAttributeTypeClientId = 6,
	sohAttributeTypeVendorSpecific = 7,
	sohAttributeTypeHealthClass = 8,
	sohAttributeTypeSoftwareVersion = 9,
	sohAttributeTypeProductName = 10,
	sohAttributeTypeHealthClassStatus = 11,
	sohAttributeTypeSoHGenerationTime = 12,
	sohAttributeTypeErrorCodes = 13,
	sohAttributeTypeFailureCategory = 14,
	sohAttributeTypeIpv6FixupServers = 15,
	sohAttributeTypeExtendedIsolationState = 16
} SoHAttributeType;
typedef enum tagHealthClassValue
{
	healthClassFirewall = 0,
	healthClassPatchLevel = 1,
	healthClassAntiVirus = 2,
	healthClassCriticalUpdate = 3,
	healthClassReserved = 128
} HealthClassValue;
typedef union tagSoHAttributeValue
{
	SystemHealthEntityId idVal;
	struct tagIpv4Addresses
{
		UINT16 count;
		Ipv4Address *addresses;
	} v4AddressesVal;
	struct tagIpv6Addresses
{
		UINT16 count;
		Ipv6Address *addresses;
	} v6AddressesVal;
	ResultCodes codesVal;
	FILETIME dateTimeVal;
	struct tagVendorSpecific
{
		UINT32 vendorId;
		UINT16 size;
		BYTE *vendorSpecificData;
	} vendorSpecificVal;
	UINT8 uint8Val;
	struct tagOctetString
{
		UINT16 size;
		BYTE *data;
	} octetStringVal;
} SoHAttributeValue;
extern RPC_IF_HANDLE INapSoHTypes_v0_0_c_ifspec;
extern RPC_IF_HANDLE INapSoHTypes_v0_0_s_ifspec;
#endif
#ifndef __INapSoHConstructor_INTERFACE_DEFINED__
#define __INapSoHConstructor_INTERFACE_DEFINED__
extern const IID IID_INapSoHConstructor;
typedef struct INapSoHConstructorVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (INapSoHConstructor * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (INapSoHConstructor * This);
	ULONG(STDMETHODCALLTYPE * Release) (INapSoHConstructor * This);
	HRESULT(STDMETHODCALLTYPE * Initialize) (INapSoHConstructor * This, SystemHealthEntityId id, BOOL isRequest);
	HRESULT(STDMETHODCALLTYPE * AppendAttribute) (INapSoHConstructor * This, SoHAttributeType type, const SoHAttributeValue * value);
	HRESULT(STDMETHODCALLTYPE * GetSoH) (INapSoHConstructor * This, SoH ** soh);
	HRESULT(STDMETHODCALLTYPE * Validate) (INapSoHConstructor * This, const SoH * soh, BOOL isRequest);
	END_INTERFACE
}  INapSoHConstructorVtbl;
interface INapSoHConstructor
{
	CONST_VTBL struct INapSoHConstructorVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define INapSoHConstructor_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define INapSoHConstructor_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define INapSoHConstructor_Release(This) ( (This)->lpVtbl -> Release(This) )
#define INapSoHConstructor_Initialize(This,id,isRequest) ( (This)->lpVtbl -> Initialize(This,id,isRequest) )
#define INapSoHConstructor_AppendAttribute(This,type,value) ( (This)->lpVtbl -> AppendAttribute(This,type,value) )
#define INapSoHConstructor_GetSoH(This,soh) ( (This)->lpVtbl -> GetSoH(This,soh) )
#define INapSoHConstructor_Validate(This,soh,isRequest) ( (This)->lpVtbl -> Validate(This,soh,isRequest) )
#endif
#endif
#ifndef __INapSoHProcessor_INTERFACE_DEFINED__
#define __INapSoHProcessor_INTERFACE_DEFINED__
extern const IID IID_INapSoHProcessor;
typedef struct INapSoHProcessorVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (INapSoHProcessor * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (INapSoHProcessor * This);
	ULONG(STDMETHODCALLTYPE * Release) (INapSoHProcessor * This);
	HRESULT(STDMETHODCALLTYPE * Initialize) (INapSoHProcessor * This, const SoH * soh, BOOL isRequest, SystemHealthEntityId * id);
	HRESULT(STDMETHODCALLTYPE * FindNextAttribute) (INapSoHProcessor * This, UINT16 fromLocation, SoHAttributeType type, UINT16 * attributeLocation);
	HRESULT(STDMETHODCALLTYPE * GetAttribute) (INapSoHProcessor * This, UINT16 attributeLocation, SoHAttributeType * type, SoHAttributeValue ** value);
	HRESULT(STDMETHODCALLTYPE * GetNumberOfAttributes) (INapSoHProcessor * This, UINT16 * attributeCount);
	END_INTERFACE
}  INapSoHProcessorVtbl;
interface INapSoHProcessor
{
	CONST_VTBL struct INapSoHProcessorVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define INapSoHProcessor_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define INapSoHProcessor_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define INapSoHProcessor_Release(This) ( (This)->lpVtbl -> Release(This) )
#define INapSoHProcessor_Initialize(This,soh,isRequest,id) ( (This)->lpVtbl -> Initialize(This,soh,isRequest,id) )
#define INapSoHProcessor_FindNextAttribute(This,fromLocation,type,attributeLocation) ( (This)->lpVtbl -> FindNextAttribute(This,fromLocation,type,attributeLocation) )
#define INapSoHProcessor_GetAttribute(This,attributeLocation,type,value) ( (This)->lpVtbl -> GetAttribute(This,attributeLocation,type,value) )
#define INapSoHProcessor_GetNumberOfAttributes(This,attributeCount) ( (This)->lpVtbl -> GetNumberOfAttributes(This,attributeCount) )
#endif
#endif
extern const CLSID CLSID_NapSoHConstructor;
extern const CLSID CLSID_NapSoHProcessor;
extern RPC_IF_HANDLE __MIDL_itf_napprotocol_0000_0003_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_napprotocol_0000_0003_v0_0_s_ifspec;
#endif

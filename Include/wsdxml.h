/*+@@file@@----------------------------------------------------------------*//*!
 \file		wsdxml.h
 \par Description 
            Extension and update of headers for PellesC compiler suite.
 \par Project: 
            PellesC Headers extension
 \date		Created  on Mon Sep 19 17:35:11 2016
 \date		Modified on Mon Sep 19 17:35:11 2016
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
#ifndef __wsdxml_h__
#define __wsdxml_h__
#if __POCC__ >= 500
#pragma once
#endif
#ifndef __IWSDXMLContext_FWD_DEFINED__
#define __IWSDXMLContext_FWD_DEFINED__
typedef interface IWSDXMLContext IWSDXMLContext;
#endif
#include <oaidl.h>
#include <ocidl.h>
typedef struct _WSDXML_NAMESPACE WSDXML_NAMESPACE;
typedef struct _WSDXML_NAME WSDXML_NAME;
typedef struct _WSDXML_TYPE WSDXML_TYPE;
typedef struct _WSDXML_PREFIX_MAPPING WSDXML_PREFIX_MAPPING;
typedef struct _WSDXML_ATTRIBUTE WSDXML_ATTRIBUTE;
typedef struct _WSDXML_NODE WSDXML_NODE;
typedef struct _WSDXML_ELEMENT WSDXML_ELEMENT;
typedef struct _WSDXML_TEXT WSDXML_TEXT;
typedef struct _WSDXML_ELEMENT_LIST WSDXML_ELEMENT_LIST;
typedef const WSDXML_NAMESPACE *PCWSDXML_NAMESPACE;
typedef const WSDXML_TYPE *PCWSDXML_TYPE;
typedef struct _WSD_DATETIME
{
	BOOL isPositive;
	ULONG year;
	UCHAR month;
	UCHAR day;
	UCHAR hour;
	UCHAR minute;
	UCHAR second;
	UINT millisecond;
	BOOL TZIsLocal;
	BOOL TZIsPositive;
	UCHAR TZHour;
	UCHAR TZMinute;
} WSD_DATETIME;
typedef struct _WSD_DURATION
{
	BOOL isPositive;
	ULONG year;
	ULONG month;
	ULONG day;
	ULONG hour;
	ULONG minute;
	ULONG second;
	ULONG millisecond;
} WSD_DURATION;
enum __MIDL___MIDL_itf_wsdxml_0000_0000_0001
{
	OpNone = 0,
	OpEndOfTable = (OpNone + 1),
	OpBeginElement_ = (OpEndOfTable + 1),
	OpBeginAnyElement = (OpBeginElement_ + 1),
	OpEndElement = (OpBeginAnyElement + 1),
	OpElement_ = (OpEndElement + 1),
	OpAnyElement = (OpElement_ + 1),
	OpAnyElements = (OpAnyElement + 1),
	OpAnyText = (OpAnyElements + 1),
	OpAttribute_ = (OpAnyText + 1),
	OpBeginChoice = (OpAttribute_ + 1),
	OpEndChoice = (OpBeginChoice + 1),
	OpBeginSequence = (OpEndChoice + 1),
	OpEndSequence = (OpBeginSequence + 1),
	OpBeginAll = (OpEndSequence + 1),
	OpEndAll = (OpBeginAll + 1),
	OpAnything = (OpEndAll + 1),
	OpAnyNumber = (OpAnything + 1),
	OpOneOrMore = (OpAnyNumber + 1),
	OpOptional = (OpOneOrMore + 1),
	OpFormatBool_ = (OpOptional + 1),
	OpFormatInt8_ = (OpFormatBool_ + 1),
	OpFormatInt16_ = (OpFormatInt8_ + 1),
	OpFormatInt32_ = (OpFormatInt16_ + 1),
	OpFormatInt64_ = (OpFormatInt32_ + 1),
	OpFormatUInt8_ = (OpFormatInt64_ + 1),
	OpFormatUInt16_ = (OpFormatUInt8_ + 1),
	OpFormatUInt32_ = (OpFormatUInt16_ + 1),
	OpFormatUInt64_ = (OpFormatUInt32_ + 1),
	OpFormatUnicodeString_ = (OpFormatUInt64_ + 1),
	OpFormatDom_ = (OpFormatUnicodeString_ + 1),
	OpFormatStruct_ = (OpFormatDom_ + 1),
	OpFormatUri_ = (OpFormatStruct_ + 1),
	OpFormatUuidUri_ = (OpFormatUri_ + 1),
	OpFormatName_ = (OpFormatUuidUri_ + 1),
	OpFormatListInsertTail_ = (OpFormatName_ + 1),
	OpFormatType_ = (OpFormatListInsertTail_ + 1),
	OpFormatDynamicType_ = (OpFormatType_ + 1),
	OpFormatLookupType_ = (OpFormatDynamicType_ + 1),
	OpFormatDuration_ = (OpFormatLookupType_ + 1),
	OpFormatDateTime_ = (OpFormatDuration_ + 1),
	OpFormatFloat_ = (OpFormatDateTime_ + 1),
	OpFormatDouble_ = (OpFormatFloat_ + 1),
	OpProcess_ = (OpFormatDouble_ + 1),
	OpQualifiedAttribute_ = (OpProcess_ + 1),
	OpFormatXMLDeclaration_ = (OpQualifiedAttribute_ + 1),
	OpFormatMax = (OpFormatXMLDeclaration_ + 1)
};
#define OFFSET(type,field) ((DWORD_PTR)(&((type*)0)->field))
#define BYTE0(n) (BYTE)((((DWORD)n)>>0)&0xFF)
#define BYTE1(n) (BYTE)((((DWORD)n)>>8)&0xFF)
#define BYTE2(n) (BYTE)((((DWORD)n)>>16)&0xFF)
#define BYTE3(n) (BYTE)((((DWORD)n)>>24)&0xFF)
#define BYTES(n) BYTE0(n), BYTE1(n), BYTE2(n), BYTE3(n)
#define OpBeginElement(name)                    OpBeginElement_,        BYTES(name)
#define OpElement(name)                         OpElement_,             BYTES(name)
#define OpAttribute(name)                       OpAttribute_,           BYTES(name)
#define OpFormatBool(type,field,isptr)          OpFormatBool_,          BYTES(isptr),BYTES(OFFSET(type,field))
#define OpFormatInt8(type,field,isptr)          OpFormatInt8_,          BYTES(isptr),BYTES(OFFSET(type,field))
#define OpFormatInt16(type,field,isptr)         OpFormatInt16_,         BYTES(isptr),BYTES(OFFSET(type,field))
#define OpFormatInt32(type,field,isptr)         OpFormatInt32_,         BYTES(isptr),BYTES(OFFSET(type,field))
#define OpFormatInt64(type,field,isptr)         OpFormatInt64_,         BYTES(isptr),BYTES(OFFSET(type,field))
#define OpFormatUInt8(type,field,isptr)         OpFormatUInt8_,         BYTES(isptr),BYTES(OFFSET(type,field))
#define OpFormatUInt16(type,field,isptr)        OpFormatUInt16_,        BYTES(isptr),BYTES(OFFSET(type,field))
#define OpFormatUInt32(type,field,isptr)        OpFormatUInt32_,        BYTES(isptr),BYTES(OFFSET(type,field))
#define OpFormatUInt64(type,field,isptr)        OpFormatUInt64_,        BYTES(isptr),BYTES(OFFSET(type,field))
#define OpFormatUnicodeString(type,field)       OpFormatUnicodeString_, BYTES(OFFSET(type,field))
#define OpFormatDom(type,field)                 OpFormatDom_,           BYTES(OFFSET(type,field))
#define OpFormatStruct(sType,type,field)        OpFormatStruct_,        BYTES(sizeof(sType)),BYTES(OFFSET(type,field))
#define OpFormatPointerToStruct(sType)          OpFormatStruct_,        BYTES(sizeof(sType)),BYTES(0)
#define OpFormatUri(type,field)                 OpFormatUri_,           BYTES(OFFSET(type,field))
#define OpFormatUuidUri(type,field,isptr)       OpFormatUuidUri_,       BYTES(isptr),BYTES(OFFSET(type,field))
#define OpFormatName(type,field)                OpFormatName_,          BYTES(OFFSET(type,field))
#define OpFormatListInsertTail(s,type,field)    OpFormatListInsertTail_,BYTES(sizeof(s)),BYTES(OFFSET(type,field))
#define OpFormatType(table,type,field)          OpFormatType_,          BYTES(table),BYTES(OFFSET(type,field))
#define OpFormatDynamicType(name,type,field)    OpFormatDynamicType_,   BYTES(name),BYTES(OFFSET(type,field))
#define OpFormatLookupType(uriField,type,field) OpFormatLookupType_, BYTES(OFFSET(type,uriField)),BYTES(OFFSET(type,field))
#define OpFormatDuration(type,field)            OpFormatDuration_,      BYTES(OFFSET(type,field))
#define OpFormatDateTime(type,field)            OpFormatDateTime_,      BYTES(OFFSET(type,field))
#define OpFormatFloat(type,field,isptr)         OpFormatFloat_,         BYTES(isptr),BYTES(OFFSET(type,field))
#define OpFormatDouble(type,field,isptr)        OpFormatDouble_,        BYTES(isptr),BYTES(OFFSET(type,field))
#define OpProcess(type,field)                   OpProcess_,             BYTES(OFFSET(type,field))
#define OpQualifiedAttribute(name)              OpQualifiedAttribute_,  BYTES(name)
#define OpFormatXMLDeclaration(type,field)      OpFormatXMLDeclaration_,BYTES(OFFSET(type,field))
#define WSDXML_TYPE_ENCODING(typeIndex,layerNumber) ((((DWORD)layerNumber) << 28) | typeIndex)
#define WSDXML_NAMESPACE_ENCODING(namespaceIndex,layerNumber) ((((WORD)layerNumber) << 12) | namespaceIndex)
#define WSDXML_NAME_ENCODING(nameIndex,nameSpaceEncoding) ((((DWORD)nameSpaceEncoding) << 16) | nameIndex)
HRESULT WINAPI WSDXMLGetNameFromBuiltinNamespace(LPCWSTR pszNamespace, LPCWSTR pszName, WSDXML_NAME **ppName);
HRESULT WINAPI WSDXMLCreateContext(IWSDXMLContext **ppContext);
extern RPC_IF_HANDLE __MIDL_itf_wsdxml_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_wsdxml_0000_0000_v0_0_s_ifspec;
#ifndef __IWSDXMLContext_INTERFACE_DEFINED__
#define __IWSDXMLContext_INTERFACE_DEFINED__
extern const IID IID_IWSDXMLContext;
typedef struct IWSDXMLContextVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IWSDXMLContext * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IWSDXMLContext * This);
	ULONG(STDMETHODCALLTYPE * Release) (IWSDXMLContext * This);
	HRESULT(STDMETHODCALLTYPE * AddNamespace) (IWSDXMLContext * This, LPCWSTR pszUri, LPCWSTR pszSuggestedPrefix, WSDXML_NAMESPACE ** ppNamespace);
	HRESULT(STDMETHODCALLTYPE * AddNameToNamespace) (IWSDXMLContext * This, LPCWSTR pszUri, LPCWSTR pszName, WSDXML_NAME ** ppName);
	HRESULT(STDMETHODCALLTYPE * SetNamespaces) (IWSDXMLContext * This, const PCWSDXML_NAMESPACE * pNamespaces, WORD wNamespacesCount, BYTE bLayerNumber);
	HRESULT(STDMETHODCALLTYPE * SetTypes) (IWSDXMLContext * This, const PCWSDXML_TYPE * pTypes, DWORD dwTypesCount, BYTE bLayerNumber);
	END_INTERFACE
}  IWSDXMLContextVtbl;
interface IWSDXMLContext
{
	CONST_VTBL struct IWSDXMLContextVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IWSDXMLContext_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IWSDXMLContext_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IWSDXMLContext_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IWSDXMLContext_AddNamespace(This,pszUri,pszSuggestedPrefix,ppNamespace) ( (This)->lpVtbl -> AddNamespace(This,pszUri,pszSuggestedPrefix,ppNamespace) )
#define IWSDXMLContext_AddNameToNamespace(This,pszUri,pszName,ppName) ( (This)->lpVtbl -> AddNameToNamespace(This,pszUri,pszName,ppName) )
#define IWSDXMLContext_SetNamespaces(This,pNamespaces,wNamespacesCount,bLayerNumber) ( (This)->lpVtbl -> SetNamespaces(This,pNamespaces,wNamespacesCount,bLayerNumber) )
#define IWSDXMLContext_SetTypes(This,pTypes,dwTypesCount,bLayerNumber) ( (This)->lpVtbl -> SetTypes(This,pTypes,dwTypesCount,bLayerNumber) )
#endif
#endif
#endif

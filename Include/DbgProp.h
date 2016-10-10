/*+@@file@@----------------------------------------------------------------*//*!
 \file		DbgProp.h
 \par Description 
            Extension and update of headers for PellesC compiler suite.
 \par Project: 
            PellesC Headers extension
 \date		Created  on Fri Jul  1 16:06:36 2016
 \date		Modified on Fri Jul  1 16:06:36 2016
 \author	frankie
\*//*-@@file@@----------------------------------------------------------------*/

#ifndef __REQUIRED_RPCNDR_H_VERSION__
#define __REQUIRED_RPCNDR_H_VERSION__ 475
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
#ifndef __dbgprop_h__
#define __dbgprop_h__
#if __POCC__ >= 500
#pragma once
#endif
#ifndef __IDebugProperty_FWD_DEFINED__
#define __IDebugProperty_FWD_DEFINED__
typedef interface IDebugProperty IDebugProperty;
#endif
#ifndef __IEnumDebugPropertyInfo_FWD_DEFINED__
#define __IEnumDebugPropertyInfo_FWD_DEFINED__
typedef interface IEnumDebugPropertyInfo IEnumDebugPropertyInfo;
#endif
#ifndef __IDebugExtendedProperty_FWD_DEFINED__
#define __IDebugExtendedProperty_FWD_DEFINED__
typedef interface IDebugExtendedProperty IDebugExtendedProperty;
#endif
#ifndef __IEnumDebugExtendedPropertyInfo_FWD_DEFINED__
#define __IEnumDebugExtendedPropertyInfo_FWD_DEFINED__
typedef interface IEnumDebugExtendedPropertyInfo IEnumDebugExtendedPropertyInfo;
#endif
#ifndef __IPerPropertyBrowsing2_FWD_DEFINED__
#define __IPerPropertyBrowsing2_FWD_DEFINED__
typedef interface IPerPropertyBrowsing2 IPerPropertyBrowsing2;
#endif
#ifndef __IDebugPropertyEnumType_All_FWD_DEFINED__
#define __IDebugPropertyEnumType_All_FWD_DEFINED__
typedef interface IDebugPropertyEnumType_All IDebugPropertyEnumType_All;
#endif
#ifndef __IDebugPropertyEnumType_Locals_FWD_DEFINED__
#define __IDebugPropertyEnumType_Locals_FWD_DEFINED__
typedef interface IDebugPropertyEnumType_Locals IDebugPropertyEnumType_Locals;
#endif
#ifndef __IDebugPropertyEnumType_Arguments_FWD_DEFINED__
#define __IDebugPropertyEnumType_Arguments_FWD_DEFINED__
typedef interface IDebugPropertyEnumType_Arguments IDebugPropertyEnumType_Arguments;
#endif
#ifndef __IDebugPropertyEnumType_LocalsPlusArgs_FWD_DEFINED__
#define __IDebugPropertyEnumType_LocalsPlusArgs_FWD_DEFINED__
typedef interface IDebugPropertyEnumType_LocalsPlusArgs IDebugPropertyEnumType_LocalsPlusArgs;
#endif
#ifndef __IDebugPropertyEnumType_Registers_FWD_DEFINED__
#define __IDebugPropertyEnumType_Registers_FWD_DEFINED__
typedef interface IDebugPropertyEnumType_Registers IDebugPropertyEnumType_Registers;
#endif
#include "ocidl.h"
typedef enum tagOBJECT_ATTRIB_FLAG
{
	OBJECT_ATTRIB_NO_ATTRIB = 0,
	OBJECT_ATTRIB_NO_NAME = 0x1,
	OBJECT_ATTRIB_NO_TYPE = 0x2,
	OBJECT_ATTRIB_NO_VALUE = 0x4,
	OBJECT_ATTRIB_VALUE_IS_INVALID = 0x8,
	OBJECT_ATTRIB_VALUE_IS_OBJECT = 0x10,
	OBJECT_ATTRIB_VALUE_IS_ENUM = 0x20,
	OBJECT_ATTRIB_VALUE_IS_CUSTOM = 0x40,
	OBJECT_ATTRIB_OBJECT_IS_EXPANDABLE = 0x70,
	OBJECT_ATTRIB_VALUE_HAS_CODE = 0x80,
	OBJECT_ATTRIB_TYPE_IS_OBJECT = 0x100,
	OBJECT_ATTRIB_TYPE_HAS_CODE = 0x200,
	OBJECT_ATTRIB_TYPE_IS_EXPANDABLE = 0x100,
	OBJECT_ATTRIB_SLOT_IS_CATEGORY = 0x400,
	OBJECT_ATTRIB_VALUE_READONLY = 0x800,
	OBJECT_ATTRIB_ACCESS_PUBLIC = 0x1000,
	OBJECT_ATTRIB_ACCESS_PRIVATE = 0x2000,
	OBJECT_ATTRIB_ACCESS_PROTECTED = 0x4000,
	OBJECT_ATTRIB_ACCESS_FINAL = 0x8000,
	OBJECT_ATTRIB_STORAGE_GLOBAL = 0x10000,
	OBJECT_ATTRIB_STORAGE_STATIC = 0x20000,
	OBJECT_ATTRIB_STORAGE_FIELD = 0x40000,
	OBJECT_ATTRIB_STORAGE_VIRTUAL = 0x80000,
	OBJECT_ATTRIB_TYPE_IS_CONSTANT = 0x100000,
	OBJECT_ATTRIB_TYPE_IS_SYNCHRONIZED = 0x200000,
	OBJECT_ATTRIB_TYPE_IS_VOLATILE = 0x400000,
	OBJECT_ATTRIB_HAS_EXTENDED_ATTRIBS = 0x800000,
	OBJECT_ATTRIB_IS_CLASS = 0x1000000,
	OBJECT_ATTRIB_IS_FUNCTION = 0x2000000,
	OBJECT_ATTRIB_IS_VARIABLE = 0x4000000,
	OBJECT_ATTRIB_IS_PROPERTY = 0x8000000,
	OBJECT_ATTRIB_IS_MACRO = 0x10000000,
	OBJECT_ATTRIB_IS_TYPE = 0x20000000,
	OBJECT_ATTRIB_IS_INHERITED = 0x40000000,
	OBJECT_ATTRIB_IS_INTERFACE = 0x80000000
} OBJECT_ATTRIB_FLAGS;
typedef enum tagPROP_INFO_FLAGS
{
	PROP_INFO_NAME = 0x1,
	PROP_INFO_TYPE = 0x2,
	PROP_INFO_VALUE = 0x4,
	PROP_INFO_FULLNAME = 0x20,
	PROP_INFO_ATTRIBUTES = 0x8,
	PROP_INFO_DEBUGPROP = 0x10,
	PROP_INFO_AUTOEXPAND = 0x8000000
} PROP_INFO_FLAGS;
#define	PROP_INFO_STANDARD	( ( ( ( PROP_INFO_NAME | PROP_INFO_TYPE )  | PROP_INFO_VALUE )  | PROP_INFO_ATTRIBUTES )  )
#define	PROP_INFO_ALL	( ( ( ( ( ( PROP_INFO_NAME | PROP_INFO_TYPE )  | PROP_INFO_VALUE )  | PROP_INFO_FULLNAME )  | PROP_INFO_ATTRIBUTES )  | PROP_INFO_DEBUGPROP )  )
typedef struct tagDebugPropertyInfo
{
	DWORD m_dwValidFields;
	BSTR m_bstrName;
	BSTR m_bstrType;
	BSTR m_bstrValue;
	BSTR m_bstrFullName;
	DWORD m_dwAttrib;
	IDebugProperty *m_pDebugProp;
} DebugPropertyInfo;
typedef enum tagEX_PROP_INFO_FLAGS
{
	EX_PROP_INFO_ID = 0x100,
	EX_PROP_INFO_NTYPE = 0x200,
	EX_PROP_INFO_NVALUE = 0x400,
	EX_PROP_INFO_LOCKBYTES = 0x800,
	EX_PROP_INFO_DEBUGEXTPROP = 0x1000
} EX_PROP_INFO_FLAGS;
typedef struct tagExtendedDebugPropertyInfo
{
	DWORD dwValidFields;
	LPOLESTR pszName;
	LPOLESTR pszType;
	LPOLESTR pszValue;
	LPOLESTR pszFullName;
	DWORD dwAttrib;
	IDebugProperty *pDebugProp;
	DWORD nDISPID;
	DWORD nType;
	VARIANT varValue;
	ILockBytes *plbValue;
	IDebugExtendedProperty *pDebugExtProp;
} ExtendedDebugPropertyInfo;
extern RPC_IF_HANDLE __MIDL_itf_dbgprop_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_dbgprop_0000_0000_v0_0_s_ifspec;
#ifndef __IDebugProperty_INTERFACE_DEFINED__
#define __IDebugProperty_INTERFACE_DEFINED__
extern const IID IID_IDebugProperty;
typedef struct IDebugPropertyVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IDebugProperty * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IDebugProperty * This);
	ULONG(STDMETHODCALLTYPE * Release) (IDebugProperty * This);
	HRESULT(STDMETHODCALLTYPE * GetPropertyInfo) (IDebugProperty * This, DWORD dwFieldSpec, UINT nRadix, DebugPropertyInfo * pPropertyInfo);
	HRESULT(STDMETHODCALLTYPE * GetExtendedInfo) (IDebugProperty * This, ULONG cInfos, GUID * rgguidExtendedInfo, VARIANT * rgvar);
	HRESULT(STDMETHODCALLTYPE * SetValueAsString) (IDebugProperty * This, LPCOLESTR pszValue, UINT nRadix);
	HRESULT(STDMETHODCALLTYPE * EnumMembers) (IDebugProperty * This, DWORD dwFieldSpec, UINT nRadix, REFIID refiid, IEnumDebugPropertyInfo ** ppepi);
	HRESULT(STDMETHODCALLTYPE * GetParent) (IDebugProperty * This, IDebugProperty ** ppDebugProp);
	END_INTERFACE
}  IDebugPropertyVtbl;
interface IDebugProperty
{
	CONST_VTBL struct IDebugPropertyVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IDebugProperty_QueryInterface(This,riid,ppvObject)    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IDebugProperty_AddRef(This)    ( (This)->lpVtbl -> AddRef(This) )
#define IDebugProperty_Release(This)    ( (This)->lpVtbl -> Release(This) )
#define IDebugProperty_GetPropertyInfo(This,dwFieldSpec,nRadix,pPropertyInfo)    ( (This)->lpVtbl -> GetPropertyInfo(This,dwFieldSpec,nRadix,pPropertyInfo) )
#define IDebugProperty_GetExtendedInfo(This,cInfos,rgguidExtendedInfo,rgvar)    ( (This)->lpVtbl -> GetExtendedInfo(This,cInfos,rgguidExtendedInfo,rgvar) )
#define IDebugProperty_SetValueAsString(This,pszValue,nRadix)    ( (This)->lpVtbl -> SetValueAsString(This,pszValue,nRadix) )
#define IDebugProperty_EnumMembers(This,dwFieldSpec,nRadix,refiid,ppepi)    ( (This)->lpVtbl -> EnumMembers(This,dwFieldSpec,nRadix,refiid,ppepi) )
#define IDebugProperty_GetParent(This,ppDebugProp)    ( (This)->lpVtbl -> GetParent(This,ppDebugProp) )
#endif
HRESULT STDMETHODCALLTYPE IDebugProperty_RemoteGetPropertyInfo_Proxy(IDebugProperty *This, DWORD dwFieldSpec, UINT nRadix, DWORD *dwValidFields, BSTR *pbstrName, BSTR *pbstrType, BSTR *pbstrValue, BSTR *pbstrFullName, DWORD *pdwAttrib, IDebugProperty **ppDebugProperty);
void __RPC_STUB IDebugProperty_RemoteGetPropertyInfo_Stub(IRpcStubBuffer *This, IRpcChannelBuffer *_pRpcChannelBuffer, PRPC_MESSAGE _pRpcMessage, DWORD *_pdwStubPhase);
#endif
#ifndef __IEnumDebugPropertyInfo_INTERFACE_DEFINED__
#define __IEnumDebugPropertyInfo_INTERFACE_DEFINED__
extern const IID IID_IEnumDebugPropertyInfo;
typedef struct IEnumDebugPropertyInfoVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE *QueryInterface) (IEnumDebugPropertyInfo *This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE *AddRef) (IEnumDebugPropertyInfo *This);
	ULONG(STDMETHODCALLTYPE *Release) (IEnumDebugPropertyInfo *This);
	HRESULT(STDMETHODCALLTYPE *Next) (IEnumDebugPropertyInfo *This, ULONG celt, DebugPropertyInfo *pi, ULONG *pcEltsfetched);
	HRESULT(STDMETHODCALLTYPE *Skip) (IEnumDebugPropertyInfo *This, ULONG celt);
	HRESULT(STDMETHODCALLTYPE *Reset) (IEnumDebugPropertyInfo *This);
	HRESULT(STDMETHODCALLTYPE *Clone) (IEnumDebugPropertyInfo *This, IEnumDebugPropertyInfo **ppepi);
	HRESULT(STDMETHODCALLTYPE *GetCount) (IEnumDebugPropertyInfo *This, ULONG *pcelt);
	END_INTERFACE
}  IEnumDebugPropertyInfoVtbl;
interface IEnumDebugPropertyInfo
{
	CONST_VTBL struct IEnumDebugPropertyInfoVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IEnumDebugPropertyInfo_QueryInterface(This,riid,ppvObject)    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IEnumDebugPropertyInfo_AddRef(This)    ( (This)->lpVtbl -> AddRef(This) )
#define IEnumDebugPropertyInfo_Release(This)    ( (This)->lpVtbl -> Release(This) )
#define IEnumDebugPropertyInfo_Next(This,celt,pi,pcEltsfetched)    ( (This)->lpVtbl -> Next(This,celt,pi,pcEltsfetched) )
#define IEnumDebugPropertyInfo_Skip(This,celt)    ( (This)->lpVtbl -> Skip(This,celt) )
#define IEnumDebugPropertyInfo_Reset(This)    ( (This)->lpVtbl -> Reset(This) )
#define IEnumDebugPropertyInfo_Clone(This,ppepi)    ( (This)->lpVtbl -> Clone(This,ppepi) )
#define IEnumDebugPropertyInfo_GetCount(This,pcelt)    ( (This)->lpVtbl -> GetCount(This,pcelt) )
#endif
HRESULT __stdcall IEnumDebugPropertyInfo_RemoteNext_Proxy(IEnumDebugPropertyInfo *This, ULONG celt, DebugPropertyInfo *pinfo, ULONG *pcEltsfetched);
void __RPC_STUB IEnumDebugPropertyInfo_RemoteNext_Stub(IRpcStubBuffer *This, IRpcChannelBuffer *_pRpcChannelBuffer, PRPC_MESSAGE _pRpcMessage, DWORD *_pdwStubPhase);
#endif
#ifndef __IDebugExtendedProperty_INTERFACE_DEFINED__
#define __IDebugExtendedProperty_INTERFACE_DEFINED__
extern const IID IID_IDebugExtendedProperty;
typedef struct IDebugExtendedPropertyVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE *QueryInterface) (IDebugExtendedProperty *This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE *AddRef) (IDebugExtendedProperty *This);
	ULONG(STDMETHODCALLTYPE *Release) (IDebugExtendedProperty *This);
	HRESULT(STDMETHODCALLTYPE *GetPropertyInfo) (IDebugExtendedProperty *This, DWORD dwFieldSpec, UINT nRadix, DebugPropertyInfo *pPropertyInfo);
	HRESULT(STDMETHODCALLTYPE *GetExtendedInfo) (IDebugExtendedProperty *This, ULONG cInfos, GUID *rgguidExtendedInfo, VARIANT *rgvar);
	HRESULT(STDMETHODCALLTYPE *SetValueAsString) (IDebugExtendedProperty *This, LPCOLESTR pszValue, UINT nRadix);
	HRESULT(STDMETHODCALLTYPE *EnumMembers) (IDebugExtendedProperty *This, DWORD dwFieldSpec, UINT nRadix, REFIID refiid, IEnumDebugPropertyInfo **ppepi);
	HRESULT(STDMETHODCALLTYPE *GetParent) (IDebugExtendedProperty *This, IDebugProperty **ppDebugProp);
	HRESULT(STDMETHODCALLTYPE *GetExtendedPropertyInfo) (IDebugExtendedProperty *This, DWORD dwFieldSpec, UINT nRadix, ExtendedDebugPropertyInfo *pExtendedPropertyInfo);
	HRESULT(STDMETHODCALLTYPE *EnumExtendedMembers) (IDebugExtendedProperty *This, DWORD dwFieldSpec, UINT nRadix, IEnumDebugExtendedPropertyInfo **ppeepi);
	END_INTERFACE
}  IDebugExtendedPropertyVtbl;
interface IDebugExtendedProperty
{
	CONST_VTBL struct IDebugExtendedPropertyVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IDebugExtendedProperty_QueryInterface(This,riid,ppvObject)    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IDebugExtendedProperty_AddRef(This)    ( (This)->lpVtbl -> AddRef(This) )
#define IDebugExtendedProperty_Release(This)    ( (This)->lpVtbl -> Release(This) )
#define IDebugExtendedProperty_GetPropertyInfo(This,dwFieldSpec,nRadix,pPropertyInfo)    ( (This)->lpVtbl -> GetPropertyInfo(This,dwFieldSpec,nRadix,pPropertyInfo) )
#define IDebugExtendedProperty_GetExtendedInfo(This,cInfos,rgguidExtendedInfo,rgvar)    ( (This)->lpVtbl -> GetExtendedInfo(This,cInfos,rgguidExtendedInfo,rgvar) )
#define IDebugExtendedProperty_SetValueAsString(This,pszValue,nRadix)    ( (This)->lpVtbl -> SetValueAsString(This,pszValue,nRadix) )
#define IDebugExtendedProperty_EnumMembers(This,dwFieldSpec,nRadix,refiid,ppepi)    ( (This)->lpVtbl -> EnumMembers(This,dwFieldSpec,nRadix,refiid,ppepi) )
#define IDebugExtendedProperty_GetParent(This,ppDebugProp)    ( (This)->lpVtbl -> GetParent(This,ppDebugProp) )
#define IDebugExtendedProperty_GetExtendedPropertyInfo(This,dwFieldSpec,nRadix,pExtendedPropertyInfo)    ( (This)->lpVtbl -> GetExtendedPropertyInfo(This,dwFieldSpec,nRadix,pExtendedPropertyInfo) )
#define IDebugExtendedProperty_EnumExtendedMembers(This,dwFieldSpec,nRadix,ppeepi)    ( (This)->lpVtbl -> EnumExtendedMembers(This,dwFieldSpec,nRadix,ppeepi) )
#endif
#endif
#ifndef __IEnumDebugExtendedPropertyInfo_INTERFACE_DEFINED__
#define __IEnumDebugExtendedPropertyInfo_INTERFACE_DEFINED__
extern const IID IID_IEnumDebugExtendedPropertyInfo;
typedef struct IEnumDebugExtendedPropertyInfoVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE *QueryInterface) (IEnumDebugExtendedPropertyInfo *This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE *AddRef) (IEnumDebugExtendedPropertyInfo *This);
	ULONG(STDMETHODCALLTYPE *Release) (IEnumDebugExtendedPropertyInfo *This);
	HRESULT(STDMETHODCALLTYPE *Next) (IEnumDebugExtendedPropertyInfo *This, ULONG celt, ExtendedDebugPropertyInfo *rgExtendedPropertyInfo, ULONG *pceltFetched);
	HRESULT(STDMETHODCALLTYPE *Skip) (IEnumDebugExtendedPropertyInfo *This, ULONG celt);
	HRESULT(STDMETHODCALLTYPE *Reset) (IEnumDebugExtendedPropertyInfo *This);
	HRESULT(STDMETHODCALLTYPE *Clone) (IEnumDebugExtendedPropertyInfo *This, IEnumDebugExtendedPropertyInfo **pedpe);
	HRESULT(STDMETHODCALLTYPE *GetCount) (IEnumDebugExtendedPropertyInfo *This, ULONG *pcelt);
	END_INTERFACE
}  IEnumDebugExtendedPropertyInfoVtbl;
interface IEnumDebugExtendedPropertyInfo
{
	CONST_VTBL struct IEnumDebugExtendedPropertyInfoVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IEnumDebugExtendedPropertyInfo_QueryInterface(This,riid,ppvObject)    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IEnumDebugExtendedPropertyInfo_AddRef(This)    ( (This)->lpVtbl -> AddRef(This) )
#define IEnumDebugExtendedPropertyInfo_Release(This)    ( (This)->lpVtbl -> Release(This) )
#define IEnumDebugExtendedPropertyInfo_Next(This,celt,rgExtendedPropertyInfo,pceltFetched)    ( (This)->lpVtbl -> Next(This,celt,rgExtendedPropertyInfo,pceltFetched) )
#define IEnumDebugExtendedPropertyInfo_Skip(This,celt)    ( (This)->lpVtbl -> Skip(This,celt) )
#define IEnumDebugExtendedPropertyInfo_Reset(This)    ( (This)->lpVtbl -> Reset(This) )
#define IEnumDebugExtendedPropertyInfo_Clone(This,pedpe)    ( (This)->lpVtbl -> Clone(This,pedpe) )
#define IEnumDebugExtendedPropertyInfo_GetCount(This,pcelt)    ( (This)->lpVtbl -> GetCount(This,pcelt) )
#endif
#endif
#ifndef __IPerPropertyBrowsing2_INTERFACE_DEFINED__
#define __IPerPropertyBrowsing2_INTERFACE_DEFINED__
extern const IID IID_IPerPropertyBrowsing2;
typedef struct IPerPropertyBrowsing2Vtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE *QueryInterface) (IPerPropertyBrowsing2 *This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE *AddRef) (IPerPropertyBrowsing2 *This);
	ULONG(STDMETHODCALLTYPE *Release) (IPerPropertyBrowsing2 *This);
	HRESULT(STDMETHODCALLTYPE *GetDisplayString) (IPerPropertyBrowsing2 *This, DISPID dispid, BSTR *pBstr);
	HRESULT(STDMETHODCALLTYPE *MapPropertyToPage) (IPerPropertyBrowsing2 *This, DISPID dispid, CLSID *pClsidPropPage);
	HRESULT(STDMETHODCALLTYPE *GetPredefinedStrings) (IPerPropertyBrowsing2 *This, DISPID dispid, CALPOLESTR *pCaStrings, CADWORD *pCaCookies);
	HRESULT(STDMETHODCALLTYPE *SetPredefinedValue) (IPerPropertyBrowsing2 *This, DISPID dispid, DWORD dwCookie);
	END_INTERFACE
}  IPerPropertyBrowsing2Vtbl;
interface IPerPropertyBrowsing2
{
	CONST_VTBL struct IPerPropertyBrowsing2Vtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IPerPropertyBrowsing2_QueryInterface(This,riid,ppvObject)    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IPerPropertyBrowsing2_AddRef(This)    ( (This)->lpVtbl -> AddRef(This) )
#define IPerPropertyBrowsing2_Release(This)    ( (This)->lpVtbl -> Release(This) )
#define IPerPropertyBrowsing2_GetDisplayString(This,dispid,pBstr)    ( (This)->lpVtbl -> GetDisplayString(This,dispid,pBstr) )
#define IPerPropertyBrowsing2_MapPropertyToPage(This,dispid,pClsidPropPage)    ( (This)->lpVtbl -> MapPropertyToPage(This,dispid,pClsidPropPage) )
#define IPerPropertyBrowsing2_GetPredefinedStrings(This,dispid,pCaStrings,pCaCookies)    ( (This)->lpVtbl -> GetPredefinedStrings(This,dispid,pCaStrings,pCaCookies) )
#define IPerPropertyBrowsing2_SetPredefinedValue(This,dispid,dwCookie)    ( (This)->lpVtbl -> SetPredefinedValue(This,dispid,dwCookie) )
#endif
#endif
#ifndef __IDebugPropertyEnumType_All_INTERFACE_DEFINED__
#define __IDebugPropertyEnumType_All_INTERFACE_DEFINED__
extern const IID IID_IDebugPropertyEnumType_All;
typedef struct IDebugPropertyEnumType_AllVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE *QueryInterface) (IDebugPropertyEnumType_All *This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE *AddRef) (IDebugPropertyEnumType_All *This);
	ULONG(STDMETHODCALLTYPE *Release) (IDebugPropertyEnumType_All *This);
	HRESULT(STDMETHODCALLTYPE *GetName) (IDebugPropertyEnumType_All *This, BSTR *__MIDL__IDebugPropertyEnumType_All0000);
	END_INTERFACE
}  IDebugPropertyEnumType_AllVtbl;
interface IDebugPropertyEnumType_All
{
	CONST_VTBL struct IDebugPropertyEnumType_AllVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IDebugPropertyEnumType_All_QueryInterface(This,riid,ppvObject)    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IDebugPropertyEnumType_All_AddRef(This)    ( (This)->lpVtbl -> AddRef(This) )
#define IDebugPropertyEnumType_All_Release(This)    ( (This)->lpVtbl -> Release(This) )
#define IDebugPropertyEnumType_All_GetName(This,__MIDL__IDebugPropertyEnumType_All0000)    ( (This)->lpVtbl -> GetName(This,__MIDL__IDebugPropertyEnumType_All0000) )
#endif
#endif
#ifndef __IDebugPropertyEnumType_Locals_INTERFACE_DEFINED__
#define __IDebugPropertyEnumType_Locals_INTERFACE_DEFINED__
extern const IID IID_IDebugPropertyEnumType_Locals;
typedef struct IDebugPropertyEnumType_LocalsVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE *QueryInterface) (IDebugPropertyEnumType_Locals *This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE *AddRef) (IDebugPropertyEnumType_Locals *This);
	ULONG(STDMETHODCALLTYPE *Release) (IDebugPropertyEnumType_Locals *This);
	HRESULT(STDMETHODCALLTYPE *GetName) (IDebugPropertyEnumType_Locals *This, BSTR *__MIDL__IDebugPropertyEnumType_All0000);
	END_INTERFACE
}  IDebugPropertyEnumType_LocalsVtbl;
interface IDebugPropertyEnumType_Locals
{
	CONST_VTBL struct IDebugPropertyEnumType_LocalsVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IDebugPropertyEnumType_Locals_QueryInterface(This,riid,ppvObject)    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IDebugPropertyEnumType_Locals_AddRef(This)    ( (This)->lpVtbl -> AddRef(This) )
#define IDebugPropertyEnumType_Locals_Release(This)    ( (This)->lpVtbl -> Release(This) )
#define IDebugPropertyEnumType_Locals_GetName(This,__MIDL__IDebugPropertyEnumType_All0000)    ( (This)->lpVtbl -> GetName(This,__MIDL__IDebugPropertyEnumType_All0000) )
#endif
#endif
#ifndef __IDebugPropertyEnumType_Arguments_INTERFACE_DEFINED__
#define __IDebugPropertyEnumType_Arguments_INTERFACE_DEFINED__
extern const IID IID_IDebugPropertyEnumType_Arguments;
typedef struct IDebugPropertyEnumType_ArgumentsVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE *QueryInterface) (IDebugPropertyEnumType_Arguments *This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE *AddRef) (IDebugPropertyEnumType_Arguments *This);
	ULONG(STDMETHODCALLTYPE *Release) (IDebugPropertyEnumType_Arguments *This);
	HRESULT(STDMETHODCALLTYPE *GetName) (IDebugPropertyEnumType_Arguments *This, BSTR *__MIDL__IDebugPropertyEnumType_All0000);
	END_INTERFACE
}  IDebugPropertyEnumType_ArgumentsVtbl;
interface IDebugPropertyEnumType_Arguments
{
	CONST_VTBL struct IDebugPropertyEnumType_ArgumentsVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IDebugPropertyEnumType_Arguments_QueryInterface(This,riid,ppvObject)    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IDebugPropertyEnumType_Arguments_AddRef(This)    ( (This)->lpVtbl -> AddRef(This) )
#define IDebugPropertyEnumType_Arguments_Release(This)    ( (This)->lpVtbl -> Release(This) )
#define IDebugPropertyEnumType_Arguments_GetName(This,__MIDL__IDebugPropertyEnumType_All0000)    ( (This)->lpVtbl -> GetName(This,__MIDL__IDebugPropertyEnumType_All0000) )
#endif
#endif
#ifndef __IDebugPropertyEnumType_LocalsPlusArgs_INTERFACE_DEFINED__
#define __IDebugPropertyEnumType_LocalsPlusArgs_INTERFACE_DEFINED__
extern const IID IID_IDebugPropertyEnumType_LocalsPlusArgs;
typedef struct IDebugPropertyEnumType_LocalsPlusArgsVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE *QueryInterface) (IDebugPropertyEnumType_LocalsPlusArgs *This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE *AddRef) (IDebugPropertyEnumType_LocalsPlusArgs *This);
	ULONG(STDMETHODCALLTYPE *Release) (IDebugPropertyEnumType_LocalsPlusArgs *This);
	HRESULT(STDMETHODCALLTYPE *GetName) (IDebugPropertyEnumType_LocalsPlusArgs *This, BSTR *__MIDL__IDebugPropertyEnumType_All0000);
	END_INTERFACE
}  IDebugPropertyEnumType_LocalsPlusArgsVtbl;
interface IDebugPropertyEnumType_LocalsPlusArgs
{
	CONST_VTBL struct IDebugPropertyEnumType_LocalsPlusArgsVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IDebugPropertyEnumType_LocalsPlusArgs_QueryInterface(This,riid,ppvObject)    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IDebugPropertyEnumType_LocalsPlusArgs_AddRef(This)    ( (This)->lpVtbl -> AddRef(This) )
#define IDebugPropertyEnumType_LocalsPlusArgs_Release(This)    ( (This)->lpVtbl -> Release(This) )
#define IDebugPropertyEnumType_LocalsPlusArgs_GetName(This,__MIDL__IDebugPropertyEnumType_All0000)    ( (This)->lpVtbl -> GetName(This,__MIDL__IDebugPropertyEnumType_All0000) )
#endif
#endif
#ifndef __IDebugPropertyEnumType_Registers_INTERFACE_DEFINED__
#define __IDebugPropertyEnumType_Registers_INTERFACE_DEFINED__
extern const IID IID_IDebugPropertyEnumType_Registers;
typedef struct IDebugPropertyEnumType_RegistersVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE *QueryInterface) (IDebugPropertyEnumType_Registers *This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE *AddRef) (IDebugPropertyEnumType_Registers *This);
	ULONG(STDMETHODCALLTYPE *Release) (IDebugPropertyEnumType_Registers *This);
	HRESULT(STDMETHODCALLTYPE *GetName) (IDebugPropertyEnumType_Registers *This, BSTR *__MIDL__IDebugPropertyEnumType_All0000);
	END_INTERFACE
}  IDebugPropertyEnumType_RegistersVtbl;
interface IDebugPropertyEnumType_Registers
{
	CONST_VTBL struct IDebugPropertyEnumType_RegistersVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IDebugPropertyEnumType_Registers_QueryInterface(This,riid,ppvObject)    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IDebugPropertyEnumType_Registers_AddRef(This)    ( (This)->lpVtbl -> AddRef(This) )
#define IDebugPropertyEnumType_Registers_Release(This)    ( (This)->lpVtbl -> Release(This) )
#define IDebugPropertyEnumType_Registers_GetName(This,__MIDL__IDebugPropertyEnumType_All0000)    ( (This)->lpVtbl -> GetName(This,__MIDL__IDebugPropertyEnumType_All0000) )
#endif
#endif
unsigned long __RPC_USER BSTR_UserSize(unsigned long *, unsigned long, BSTR *);
unsigned char *__RPC_USER BSTR_UserMarshal(unsigned long *, unsigned char *, BSTR *);
unsigned char *__RPC_USER BSTR_UserUnmarshal(unsigned long *, unsigned char *, BSTR *);
void __RPC_USER BSTR_UserFree(unsigned long *, BSTR *);
unsigned long __RPC_USER VARIANT_UserSize(unsigned long *, unsigned long, VARIANT *);
unsigned char *__RPC_USER VARIANT_UserMarshal(unsigned long *, unsigned char *, VARIANT *);
unsigned char *__RPC_USER VARIANT_UserUnmarshal(unsigned long *, unsigned char *, VARIANT *);
void __RPC_USER VARIANT_UserFree(unsigned long *, VARIANT *);
unsigned long __RPC_USER BSTR_UserSize64(unsigned long *, unsigned long, BSTR *);
unsigned char *__RPC_USER BSTR_UserMarshal64(unsigned long *, unsigned char *, BSTR *);
unsigned char *__RPC_USER BSTR_UserUnmarshal64(unsigned long *, unsigned char *, BSTR *);
void __RPC_USER BSTR_UserFree64(unsigned long *, BSTR *);
unsigned long __RPC_USER VARIANT_UserSize64(unsigned long *, unsigned long, VARIANT *);
unsigned char *__RPC_USER VARIANT_UserMarshal64(unsigned long *, unsigned char *, VARIANT *);
unsigned char *__RPC_USER VARIANT_UserUnmarshal64(unsigned long *, unsigned char *, VARIANT *);
void __RPC_USER VARIANT_UserFree64(unsigned long *, VARIANT *);
HRESULT STDMETHODCALLTYPE IDebugProperty_GetPropertyInfo_Proxy(IDebugProperty *This, DWORD dwFieldSpec, UINT nRadix, DebugPropertyInfo *pPropertyInfo);
HRESULT STDMETHODCALLTYPE IDebugProperty_GetPropertyInfo_Stub(IDebugProperty *This, DWORD dwFieldSpec, UINT nRadix, DWORD *dwValidFields, BSTR *pbstrName, BSTR *pbstrType, BSTR *pbstrValue, BSTR *pbstrFullName, DWORD *pdwAttrib, IDebugProperty **ppDebugProperty);
HRESULT STDMETHODCALLTYPE IEnumDebugPropertyInfo_Next_Proxy(IEnumDebugPropertyInfo *This, ULONG celt, DebugPropertyInfo *pi, ULONG *pcEltsfetched);
HRESULT __stdcall IEnumDebugPropertyInfo_Next_Stub(IEnumDebugPropertyInfo *This, ULONG celt, DebugPropertyInfo *pinfo, ULONG *pcEltsfetched);
#endif

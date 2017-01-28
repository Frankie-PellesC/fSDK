/*+@@file@@----------------------------------------------------------------*//*!
 \file		NetCon.h
 \par Description 
            Extension and update of headers for PellesC compiler suite.
 \par Project: 
            PellesC Headers extension
 \date		Created  on Sun Sep  4 23:26:48 2016
 \date		Modified on Sun Sep  4 23:26:48 2016
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
#ifndef __netcon_h__
#define __netcon_h__
#if __POCC__ >= 500
#pragma once
#endif
#ifndef __IEnumNetConnection_FWD_DEFINED__
#define __IEnumNetConnection_FWD_DEFINED__
typedef interface IEnumNetConnection IEnumNetConnection;
#endif
#ifndef __INetConnection_FWD_DEFINED__
#define __INetConnection_FWD_DEFINED__
typedef interface INetConnection INetConnection;
#endif
#ifndef __INetConnectionManager_FWD_DEFINED__
#define __INetConnectionManager_FWD_DEFINED__
typedef interface INetConnectionManager INetConnectionManager;
#endif
#ifndef __INetConnectionConnectUi_FWD_DEFINED__
#define __INetConnectionConnectUi_FWD_DEFINED__
typedef interface INetConnectionConnectUi INetConnectionConnectUi;
#endif
#ifndef __IEnumNetSharingPortMapping_FWD_DEFINED__
#define __IEnumNetSharingPortMapping_FWD_DEFINED__
typedef interface IEnumNetSharingPortMapping IEnumNetSharingPortMapping;
#endif
#ifndef __INetSharingPortMappingProps_FWD_DEFINED__
#define __INetSharingPortMappingProps_FWD_DEFINED__
typedef interface INetSharingPortMappingProps INetSharingPortMappingProps;
#endif
#ifndef __INetSharingPortMapping_FWD_DEFINED__
#define __INetSharingPortMapping_FWD_DEFINED__
typedef interface INetSharingPortMapping INetSharingPortMapping;
#endif
#ifndef __IEnumNetSharingEveryConnection_FWD_DEFINED__
#define __IEnumNetSharingEveryConnection_FWD_DEFINED__
typedef interface IEnumNetSharingEveryConnection IEnumNetSharingEveryConnection;
#endif
#ifndef __IEnumNetSharingPublicConnection_FWD_DEFINED__
#define __IEnumNetSharingPublicConnection_FWD_DEFINED__
typedef interface IEnumNetSharingPublicConnection IEnumNetSharingPublicConnection;
#endif
#ifndef __IEnumNetSharingPrivateConnection_FWD_DEFINED__
#define __IEnumNetSharingPrivateConnection_FWD_DEFINED__
typedef interface IEnumNetSharingPrivateConnection IEnumNetSharingPrivateConnection;
#endif
#ifndef __INetSharingPortMappingCollection_FWD_DEFINED__
#define __INetSharingPortMappingCollection_FWD_DEFINED__
typedef interface INetSharingPortMappingCollection INetSharingPortMappingCollection;
#endif
#ifndef __INetConnectionProps_FWD_DEFINED__
#define __INetConnectionProps_FWD_DEFINED__
typedef interface INetConnectionProps INetConnectionProps;
#endif
#ifndef __INetSharingConfiguration_FWD_DEFINED__
#define __INetSharingConfiguration_FWD_DEFINED__
typedef interface INetSharingConfiguration INetSharingConfiguration;
#endif
#ifndef __INetSharingEveryConnectionCollection_FWD_DEFINED__
#define __INetSharingEveryConnectionCollection_FWD_DEFINED__
typedef interface INetSharingEveryConnectionCollection INetSharingEveryConnectionCollection;
#endif
#ifndef __INetSharingPublicConnectionCollection_FWD_DEFINED__
#define __INetSharingPublicConnectionCollection_FWD_DEFINED__
typedef interface INetSharingPublicConnectionCollection INetSharingPublicConnectionCollection;
#endif
#ifndef __INetSharingPrivateConnectionCollection_FWD_DEFINED__
#define __INetSharingPrivateConnectionCollection_FWD_DEFINED__
typedef interface INetSharingPrivateConnectionCollection INetSharingPrivateConnectionCollection;
#endif
#ifndef __INetSharingManager_FWD_DEFINED__
#define __INetSharingManager_FWD_DEFINED__
typedef interface INetSharingManager INetSharingManager;
#endif
#ifndef __NetSharingManager_FWD_DEFINED__
#define __NetSharingManager_FWD_DEFINED__
typedef struct NetSharingManager NetSharingManager;
#endif
#include <oaidl.h>
#include <prsht.h>
#if ( _MSC_VER >= 800 )
#pragma warning(disable:4201)
#endif
extern const CLSID CLSID_ConnectionManager;
extern const CLSID CLSID_NetSharingManager;
#define NETCON_MAX_NAME_LEN 256
extern RPC_IF_HANDLE __MIDL_itf_netcon_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_netcon_0000_0000_v0_0_s_ifspec;
#ifndef __IEnumNetConnection_INTERFACE_DEFINED__
#define __IEnumNetConnection_INTERFACE_DEFINED__
extern const IID IID_IEnumNetConnection;
typedef struct IEnumNetConnectionVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IEnumNetConnection * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IEnumNetConnection * This);
	ULONG(STDMETHODCALLTYPE * Release) (IEnumNetConnection * This);
	HRESULT(STDMETHODCALLTYPE * Next) (IEnumNetConnection * This, ULONG celt, INetConnection ** rgelt, ULONG * pceltFetched);
	HRESULT(STDMETHODCALLTYPE * Skip) (IEnumNetConnection * This, ULONG celt);
	HRESULT(STDMETHODCALLTYPE * Reset) (IEnumNetConnection * This);
	HRESULT(STDMETHODCALLTYPE * Clone) (IEnumNetConnection * This, IEnumNetConnection ** ppenum);
	END_INTERFACE
}  IEnumNetConnectionVtbl;
interface IEnumNetConnection
{
	CONST_VTBL struct IEnumNetConnectionVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IEnumNetConnection_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IEnumNetConnection_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IEnumNetConnection_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IEnumNetConnection_Next(This,celt,rgelt,pceltFetched) ( (This)->lpVtbl -> Next(This,celt,rgelt,pceltFetched) )
#define IEnumNetConnection_Skip(This,celt) ( (This)->lpVtbl -> Skip(This,celt) )
#define IEnumNetConnection_Reset(This) ( (This)->lpVtbl -> Reset(This) )
#define IEnumNetConnection_Clone(This,ppenum) ( (This)->lpVtbl -> Clone(This,ppenum) )
#endif
#endif
#ifndef __INetConnection_INTERFACE_DEFINED__
#define __INetConnection_INTERFACE_DEFINED__
typedef enum tagNETCON_CHARACTERISTIC_FLAGS
{
	NCCF_NONE = 0,
	NCCF_ALL_USERS = 0x1,
	NCCF_ALLOW_DUPLICATION = 0x2,
	NCCF_ALLOW_REMOVAL = 0x4,
	NCCF_ALLOW_RENAME = 0x8,
	NCCF_INCOMING_ONLY = 0x20,
	NCCF_OUTGOING_ONLY = 0x40,
	NCCF_BRANDED = 0x80,
	NCCF_SHARED = 0x100,
	NCCF_BRIDGED = 0x200,
	NCCF_FIREWALLED = 0x400,
	NCCF_DEFAULT = 0x800,
	NCCF_HOMENET_CAPABLE = 0x1000,
	NCCF_SHARED_PRIVATE = 0x2000,
	NCCF_QUARANTINED = 0x4000,
	NCCF_RESERVED = 0x8000,
	NCCF_HOSTED_NETWORK = 0x10000,
	NCCF_VIRTUAL_STATION = 0x20000,
	NCCF_BLUETOOTH_MASK = 0xf0000,
	NCCF_LAN_MASK = 0xf00000
} NETCON_CHARACTERISTIC_FLAGS;
typedef enum tagNETCON_STATUS
{
	NCS_DISCONNECTED = 0,
	NCS_CONNECTING = (NCS_DISCONNECTED + 1),
	NCS_CONNECTED = (NCS_CONNECTING + 1),
	NCS_DISCONNECTING = (NCS_CONNECTED + 1),
	NCS_HARDWARE_NOT_PRESENT = (NCS_DISCONNECTING + 1),
	NCS_HARDWARE_DISABLED = (NCS_HARDWARE_NOT_PRESENT + 1),
	NCS_HARDWARE_MALFUNCTION = (NCS_HARDWARE_DISABLED + 1),
	NCS_MEDIA_DISCONNECTED = (NCS_HARDWARE_MALFUNCTION + 1),
	NCS_AUTHENTICATING = (NCS_MEDIA_DISCONNECTED + 1),
	NCS_AUTHENTICATION_SUCCEEDED = (NCS_AUTHENTICATING + 1),
	NCS_AUTHENTICATION_FAILED = (NCS_AUTHENTICATION_SUCCEEDED + 1),
	NCS_INVALID_ADDRESS = (NCS_AUTHENTICATION_FAILED + 1),
	NCS_CREDENTIALS_REQUIRED = (NCS_INVALID_ADDRESS + 1)
} NETCON_STATUS;
typedef enum tagNETCON_TYPE
{
	NCT_DIRECT_CONNECT = 0,
	NCT_INBOUND = 1,
	NCT_INTERNET = (NCT_INBOUND + 1),
	NCT_LAN = (NCT_INTERNET + 1),
	NCT_PHONE = (NCT_LAN + 1),
	NCT_TUNNEL = (NCT_PHONE + 1),
	NCT_BRIDGE = (NCT_TUNNEL + 1)
} NETCON_TYPE;
typedef enum tagNETCON_MEDIATYPE
{
	NCM_NONE = 0,
	NCM_DIRECT = (NCM_NONE + 1),
	NCM_ISDN = 2,
	NCM_LAN = (NCM_ISDN + 1),
	NCM_PHONE = (NCM_LAN + 1),
	NCM_TUNNEL = (NCM_PHONE + 1),
	NCM_PPPOE = (NCM_TUNNEL + 1),
	NCM_BRIDGE = (NCM_PPPOE + 1),
	NCM_SHAREDACCESSHOST_LAN = (NCM_BRIDGE + 1),
	NCM_SHAREDACCESSHOST_RAS = (NCM_SHAREDACCESSHOST_LAN + 1)
} NETCON_MEDIATYPE;
typedef struct tagNETCON_PROPERTIES
{
	GUID guidId;
	LPWSTR pszwName;
	LPWSTR pszwDeviceName;
	NETCON_STATUS Status;
	NETCON_MEDIATYPE MediaType;
	DWORD dwCharacter;
	CLSID clsidThisObject;
	CLSID clsidUiObject;
} NETCON_PROPERTIES;
#define S_OBJECT_NO_LONGER_VALID ((HRESULT)0x00000002L)
extern const IID IID_INetConnection;
typedef struct INetConnectionVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (INetConnection * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (INetConnection * This);
	ULONG(STDMETHODCALLTYPE * Release) (INetConnection * This);
	HRESULT(STDMETHODCALLTYPE * Connect) (INetConnection * This);
	HRESULT(STDMETHODCALLTYPE * Disconnect) (INetConnection * This);
	HRESULT(STDMETHODCALLTYPE * Delete) (INetConnection * This);
	HRESULT(STDMETHODCALLTYPE * Duplicate) (INetConnection * This, LPCWSTR pszwDuplicateName, INetConnection ** ppCon);
	HRESULT(STDMETHODCALLTYPE * GetProperties) (INetConnection * This, NETCON_PROPERTIES ** ppProps);
	HRESULT(STDMETHODCALLTYPE * GetUiObjectClassId) (INetConnection * This, CLSID * pclsid);
	HRESULT(STDMETHODCALLTYPE * Rename) (INetConnection * This, LPCWSTR pszwNewName);
	END_INTERFACE
}  INetConnectionVtbl;
interface INetConnection
{
	CONST_VTBL struct INetConnectionVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define INetConnection_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define INetConnection_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define INetConnection_Release(This) ( (This)->lpVtbl -> Release(This) )
#define INetConnection_Connect(This) ( (This)->lpVtbl -> Connect(This) )
#define INetConnection_Disconnect(This) ( (This)->lpVtbl -> Disconnect(This) )
#define INetConnection_Delete(This) ( (This)->lpVtbl -> Delete(This) )
#define INetConnection_Duplicate(This,pszwDuplicateName,ppCon) ( (This)->lpVtbl -> Duplicate(This,pszwDuplicateName,ppCon) )
#define INetConnection_GetProperties(This,ppProps) ( (This)->lpVtbl -> GetProperties(This,ppProps) )
#define INetConnection_GetUiObjectClassId(This,pclsid) ( (This)->lpVtbl -> GetUiObjectClassId(This,pclsid) )
#define INetConnection_Rename(This,pszwNewName) ( (This)->lpVtbl -> Rename(This,pszwNewName) )
#endif
#endif
STDAPI_(VOID)NcFreeNetconProperties(NETCON_PROPERTIES * pProps);
STDAPI_(BOOL)NcIsValidConnectionName(PCWSTR pszwName);
extern RPC_IF_HANDLE __MIDL_itf_netcon_0000_0002_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_netcon_0000_0002_v0_0_s_ifspec;
#ifndef __INetConnectionManager_INTERFACE_DEFINED__
#define __INetConnectionManager_INTERFACE_DEFINED__
typedef enum tagNETCONMGR_ENUM_FLAGS
{
	NCME_DEFAULT = 0,
	NCME_HIDDEN = 0x1
} NETCONMGR_ENUM_FLAGS;
extern const IID IID_INetConnectionManager;
typedef struct INetConnectionManagerVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE *QueryInterface) (INetConnectionManager *This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE *AddRef) (INetConnectionManager *This);
	ULONG(STDMETHODCALLTYPE *Release) (INetConnectionManager *This);
	HRESULT(STDMETHODCALLTYPE *EnumConnections) (INetConnectionManager *This, NETCONMGR_ENUM_FLAGS Flags, IEnumNetConnection **ppEnum);
	END_INTERFACE
}  INetConnectionManagerVtbl;
interface INetConnectionManager
{
	CONST_VTBL struct INetConnectionManagerVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define INetConnectionManager_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define INetConnectionManager_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define INetConnectionManager_Release(This) ( (This)->lpVtbl -> Release(This) )
#define INetConnectionManager_EnumConnections(This,Flags,ppEnum) ( (This)->lpVtbl -> EnumConnections(This,Flags,ppEnum) )
#endif
#endif
#ifndef __INetConnectionConnectUi_INTERFACE_DEFINED__
#define __INetConnectionConnectUi_INTERFACE_DEFINED__
typedef enum tagNETCONUI_CONNECT_FLAGS
{
	NCUC_DEFAULT = 0,
	NCUC_NO_UI = 0x1,
	NCUC_ENABLE_DISABLE = 0x2
} NETCONUI_CONNECT_FLAGS;
extern const IID IID_INetConnectionConnectUi;
typedef struct INetConnectionConnectUiVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE *QueryInterface) (INetConnectionConnectUi *This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE *AddRef) (INetConnectionConnectUi *This);
	ULONG(STDMETHODCALLTYPE *Release) (INetConnectionConnectUi *This);
	HRESULT(STDMETHODCALLTYPE *SetConnection) (INetConnectionConnectUi *This, INetConnection *pCon);
	HRESULT(STDMETHODCALLTYPE *Connect) (INetConnectionConnectUi *This, HWND hwndParent, DWORD dwFlags);
	HRESULT(STDMETHODCALLTYPE *Disconnect) (INetConnectionConnectUi *This, HWND hwndParent, DWORD dwFlags);
	END_INTERFACE
}  INetConnectionConnectUiVtbl;
interface INetConnectionConnectUi
{
	CONST_VTBL struct INetConnectionConnectUiVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define INetConnectionConnectUi_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define INetConnectionConnectUi_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define INetConnectionConnectUi_Release(This) ( (This)->lpVtbl -> Release(This) )
#define INetConnectionConnectUi_SetConnection(This,pCon) ( (This)->lpVtbl -> SetConnection(This,pCon) )
#define INetConnectionConnectUi_Connect(This,hwndParent,dwFlags) ( (This)->lpVtbl -> Connect(This,hwndParent,dwFlags) )
#define INetConnectionConnectUi_Disconnect(This,hwndParent,dwFlags) ( (This)->lpVtbl -> Disconnect(This,hwndParent,dwFlags) )
#endif
#endif
#ifndef __IEnumNetSharingPortMapping_INTERFACE_DEFINED__
#define __IEnumNetSharingPortMapping_INTERFACE_DEFINED__
extern const IID IID_IEnumNetSharingPortMapping;
typedef struct IEnumNetSharingPortMappingVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE *QueryInterface) (IEnumNetSharingPortMapping *This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE *AddRef) (IEnumNetSharingPortMapping *This);
	ULONG(STDMETHODCALLTYPE *Release) (IEnumNetSharingPortMapping *This);
	HRESULT(STDMETHODCALLTYPE *Next) (IEnumNetSharingPortMapping *This, ULONG celt, VARIANT *rgVar, ULONG *pceltFetched);
	HRESULT(STDMETHODCALLTYPE *Skip) (IEnumNetSharingPortMapping *This, ULONG celt);
	HRESULT(STDMETHODCALLTYPE *Reset) (IEnumNetSharingPortMapping *This);
	HRESULT(STDMETHODCALLTYPE *Clone) (IEnumNetSharingPortMapping *This, IEnumNetSharingPortMapping **ppenum);
	END_INTERFACE
}  IEnumNetSharingPortMappingVtbl;
interface IEnumNetSharingPortMapping
{
	CONST_VTBL struct IEnumNetSharingPortMappingVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IEnumNetSharingPortMapping_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IEnumNetSharingPortMapping_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IEnumNetSharingPortMapping_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IEnumNetSharingPortMapping_Next(This,celt,rgVar,pceltFetched) ( (This)->lpVtbl -> Next(This,celt,rgVar,pceltFetched) )
#define IEnumNetSharingPortMapping_Skip(This,celt) ( (This)->lpVtbl -> Skip(This,celt) )
#define IEnumNetSharingPortMapping_Reset(This) ( (This)->lpVtbl -> Reset(This) )
#define IEnumNetSharingPortMapping_Clone(This,ppenum) ( (This)->lpVtbl -> Clone(This,ppenum) )
#endif
#endif
#ifndef __INetSharingPortMappingProps_INTERFACE_DEFINED__
#define __INetSharingPortMappingProps_INTERFACE_DEFINED__
extern const IID IID_INetSharingPortMappingProps;
typedef struct INetSharingPortMappingPropsVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE *QueryInterface) (INetSharingPortMappingProps *This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE *AddRef) (INetSharingPortMappingProps *This);
	ULONG(STDMETHODCALLTYPE *Release) (INetSharingPortMappingProps *This);
	HRESULT(STDMETHODCALLTYPE *GetTypeInfoCount) (INetSharingPortMappingProps *This, UINT *pctinfo);
	HRESULT(STDMETHODCALLTYPE *GetTypeInfo) (INetSharingPortMappingProps *This, UINT iTInfo, LCID lcid, ITypeInfo **ppTInfo);
	HRESULT(STDMETHODCALLTYPE *GetIDsOfNames) (INetSharingPortMappingProps *This, REFIID riid, LPOLESTR *rgszNames, UINT cNames, LCID lcid, DISPID *rgDispId);
	HRESULT(STDMETHODCALLTYPE *Invoke) (INetSharingPortMappingProps *This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS *pDispParams, VARIANT *pVarResult, EXCEPINFO *pExcepInfo, UINT *puArgErr);
	HRESULT(STDMETHODCALLTYPE *get_Name) (INetSharingPortMappingProps *This, BSTR *pbstrName);
	HRESULT(STDMETHODCALLTYPE *get_IPProtocol) (INetSharingPortMappingProps *This, UCHAR *pucIPProt);
	HRESULT(STDMETHODCALLTYPE *get_ExternalPort) (INetSharingPortMappingProps *This, long *pusPort);
	HRESULT(STDMETHODCALLTYPE *get_InternalPort) (INetSharingPortMappingProps *This, long *pusPort);
	HRESULT(STDMETHODCALLTYPE *get_Options) (INetSharingPortMappingProps *This, long *pdwOptions);
	HRESULT(STDMETHODCALLTYPE *get_TargetName) (INetSharingPortMappingProps *This, BSTR *pbstrTargetName);
	HRESULT(STDMETHODCALLTYPE *get_TargetIPAddress) (INetSharingPortMappingProps *This, BSTR *pbstrTargetIPAddress);
	HRESULT(STDMETHODCALLTYPE *get_Enabled) (INetSharingPortMappingProps *This, VARIANT_BOOL *pbool);
	END_INTERFACE
}  INetSharingPortMappingPropsVtbl;
interface INetSharingPortMappingProps
{
	CONST_VTBL struct INetSharingPortMappingPropsVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define INetSharingPortMappingProps_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define INetSharingPortMappingProps_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define INetSharingPortMappingProps_Release(This) ( (This)->lpVtbl -> Release(This) )
#define INetSharingPortMappingProps_GetTypeInfoCount(This,pctinfo) ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define INetSharingPortMappingProps_GetTypeInfo(This,iTInfo,lcid,ppTInfo) ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define INetSharingPortMappingProps_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define INetSharingPortMappingProps_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define INetSharingPortMappingProps_get_Name(This,pbstrName) ( (This)->lpVtbl -> get_Name(This,pbstrName) )
#define INetSharingPortMappingProps_get_IPProtocol(This,pucIPProt) ( (This)->lpVtbl -> get_IPProtocol(This,pucIPProt) )
#define INetSharingPortMappingProps_get_ExternalPort(This,pusPort) ( (This)->lpVtbl -> get_ExternalPort(This,pusPort) )
#define INetSharingPortMappingProps_get_InternalPort(This,pusPort) ( (This)->lpVtbl -> get_InternalPort(This,pusPort) )
#define INetSharingPortMappingProps_get_Options(This,pdwOptions) ( (This)->lpVtbl -> get_Options(This,pdwOptions) )
#define INetSharingPortMappingProps_get_TargetName(This,pbstrTargetName) ( (This)->lpVtbl -> get_TargetName(This,pbstrTargetName) )
#define INetSharingPortMappingProps_get_TargetIPAddress(This,pbstrTargetIPAddress) ( (This)->lpVtbl -> get_TargetIPAddress(This,pbstrTargetIPAddress) )
#define INetSharingPortMappingProps_get_Enabled(This,pbool) ( (This)->lpVtbl -> get_Enabled(This,pbool) )
#endif
#endif
#ifndef __INetSharingPortMapping_INTERFACE_DEFINED__
#define __INetSharingPortMapping_INTERFACE_DEFINED__
extern const IID IID_INetSharingPortMapping;
typedef struct INetSharingPortMappingVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE *QueryInterface) (INetSharingPortMapping *This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE *AddRef) (INetSharingPortMapping *This);
	ULONG(STDMETHODCALLTYPE *Release) (INetSharingPortMapping *This);
	HRESULT(STDMETHODCALLTYPE *GetTypeInfoCount) (INetSharingPortMapping *This, UINT *pctinfo);
	HRESULT(STDMETHODCALLTYPE *GetTypeInfo) (INetSharingPortMapping *This, UINT iTInfo, LCID lcid, ITypeInfo **ppTInfo);
	HRESULT(STDMETHODCALLTYPE *GetIDsOfNames) (INetSharingPortMapping *This, REFIID riid, LPOLESTR *rgszNames, UINT cNames, LCID lcid, DISPID *rgDispId);
	HRESULT(STDMETHODCALLTYPE *Invoke) (INetSharingPortMapping *This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS *pDispParams, VARIANT *pVarResult, EXCEPINFO *pExcepInfo, UINT *puArgErr);
	HRESULT(STDMETHODCALLTYPE *Disable) (INetSharingPortMapping *This);
	HRESULT(STDMETHODCALLTYPE *Enable) (INetSharingPortMapping *This);
	HRESULT(STDMETHODCALLTYPE *get_Properties) (INetSharingPortMapping *This, INetSharingPortMappingProps **ppNSPMP);
	HRESULT(STDMETHODCALLTYPE *Delete) (INetSharingPortMapping *This);
	END_INTERFACE
}  INetSharingPortMappingVtbl;
interface INetSharingPortMapping
{
	CONST_VTBL struct INetSharingPortMappingVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define INetSharingPortMapping_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define INetSharingPortMapping_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define INetSharingPortMapping_Release(This) ( (This)->lpVtbl -> Release(This) )
#define INetSharingPortMapping_GetTypeInfoCount(This,pctinfo) ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define INetSharingPortMapping_GetTypeInfo(This,iTInfo,lcid,ppTInfo) ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define INetSharingPortMapping_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define INetSharingPortMapping_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define INetSharingPortMapping_Disable(This) ( (This)->lpVtbl -> Disable(This) )
#define INetSharingPortMapping_Enable(This) ( (This)->lpVtbl -> Enable(This) )
#define INetSharingPortMapping_get_Properties(This,ppNSPMP) ( (This)->lpVtbl -> get_Properties(This,ppNSPMP) )
#define INetSharingPortMapping_Delete(This) ( (This)->lpVtbl -> Delete(This) )
#endif
#endif
#ifndef __IEnumNetSharingEveryConnection_INTERFACE_DEFINED__
#define __IEnumNetSharingEveryConnection_INTERFACE_DEFINED__
extern const IID IID_IEnumNetSharingEveryConnection;
typedef struct IEnumNetSharingEveryConnectionVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE *QueryInterface) (IEnumNetSharingEveryConnection *This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE *AddRef) (IEnumNetSharingEveryConnection *This);
	ULONG(STDMETHODCALLTYPE *Release) (IEnumNetSharingEveryConnection *This);
	HRESULT(STDMETHODCALLTYPE *Next) (IEnumNetSharingEveryConnection *This, ULONG celt, VARIANT *rgVar, ULONG *pceltFetched);
	HRESULT(STDMETHODCALLTYPE *Skip) (IEnumNetSharingEveryConnection *This, ULONG celt);
	HRESULT(STDMETHODCALLTYPE *Reset) (IEnumNetSharingEveryConnection *This);
	HRESULT(STDMETHODCALLTYPE *Clone) (IEnumNetSharingEveryConnection *This, IEnumNetSharingEveryConnection **ppenum);
	END_INTERFACE
}  IEnumNetSharingEveryConnectionVtbl;
interface IEnumNetSharingEveryConnection
{
	CONST_VTBL struct IEnumNetSharingEveryConnectionVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IEnumNetSharingEveryConnection_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IEnumNetSharingEveryConnection_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IEnumNetSharingEveryConnection_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IEnumNetSharingEveryConnection_Next(This,celt,rgVar,pceltFetched) ( (This)->lpVtbl -> Next(This,celt,rgVar,pceltFetched) )
#define IEnumNetSharingEveryConnection_Skip(This,celt) ( (This)->lpVtbl -> Skip(This,celt) )
#define IEnumNetSharingEveryConnection_Reset(This) ( (This)->lpVtbl -> Reset(This) )
#define IEnumNetSharingEveryConnection_Clone(This,ppenum) ( (This)->lpVtbl -> Clone(This,ppenum) )
#endif
#endif
#ifndef __IEnumNetSharingPublicConnection_INTERFACE_DEFINED__
#define __IEnumNetSharingPublicConnection_INTERFACE_DEFINED__
extern const IID IID_IEnumNetSharingPublicConnection;
typedef struct IEnumNetSharingPublicConnectionVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE *QueryInterface) (IEnumNetSharingPublicConnection *This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE *AddRef) (IEnumNetSharingPublicConnection *This);
	ULONG(STDMETHODCALLTYPE *Release) (IEnumNetSharingPublicConnection *This);
	HRESULT(STDMETHODCALLTYPE *Next) (IEnumNetSharingPublicConnection *This, ULONG celt, VARIANT *rgVar, ULONG *pceltFetched);
	HRESULT(STDMETHODCALLTYPE *Skip) (IEnumNetSharingPublicConnection *This, ULONG celt);
	HRESULT(STDMETHODCALLTYPE *Reset) (IEnumNetSharingPublicConnection *This);
	HRESULT(STDMETHODCALLTYPE *Clone) (IEnumNetSharingPublicConnection *This, IEnumNetSharingPublicConnection **ppenum);
	END_INTERFACE
}  IEnumNetSharingPublicConnectionVtbl;
interface IEnumNetSharingPublicConnection
{
	CONST_VTBL struct IEnumNetSharingPublicConnectionVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IEnumNetSharingPublicConnection_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IEnumNetSharingPublicConnection_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IEnumNetSharingPublicConnection_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IEnumNetSharingPublicConnection_Next(This,celt,rgVar,pceltFetched) ( (This)->lpVtbl -> Next(This,celt,rgVar,pceltFetched) )
#define IEnumNetSharingPublicConnection_Skip(This,celt) ( (This)->lpVtbl -> Skip(This,celt) )
#define IEnumNetSharingPublicConnection_Reset(This) ( (This)->lpVtbl -> Reset(This) )
#define IEnumNetSharingPublicConnection_Clone(This,ppenum) ( (This)->lpVtbl -> Clone(This,ppenum) )
#endif
#endif
#ifndef __IEnumNetSharingPrivateConnection_INTERFACE_DEFINED__
#define __IEnumNetSharingPrivateConnection_INTERFACE_DEFINED__
extern const IID IID_IEnumNetSharingPrivateConnection;
typedef struct IEnumNetSharingPrivateConnectionVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE *QueryInterface) (IEnumNetSharingPrivateConnection *This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE *AddRef) (IEnumNetSharingPrivateConnection *This);
	ULONG(STDMETHODCALLTYPE *Release) (IEnumNetSharingPrivateConnection *This);
	HRESULT(STDMETHODCALLTYPE *Next) (IEnumNetSharingPrivateConnection *This, ULONG celt, VARIANT *rgVar, ULONG *pCeltFetched);
	HRESULT(STDMETHODCALLTYPE *Skip) (IEnumNetSharingPrivateConnection *This, ULONG celt);
	HRESULT(STDMETHODCALLTYPE *Reset) (IEnumNetSharingPrivateConnection *This);
	HRESULT(STDMETHODCALLTYPE *Clone) (IEnumNetSharingPrivateConnection *This, IEnumNetSharingPrivateConnection **ppenum);
	END_INTERFACE
}  IEnumNetSharingPrivateConnectionVtbl;
interface IEnumNetSharingPrivateConnection
{
	CONST_VTBL struct IEnumNetSharingPrivateConnectionVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IEnumNetSharingPrivateConnection_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IEnumNetSharingPrivateConnection_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IEnumNetSharingPrivateConnection_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IEnumNetSharingPrivateConnection_Next(This,celt,rgVar,pCeltFetched) ( (This)->lpVtbl -> Next(This,celt,rgVar,pCeltFetched) )
#define IEnumNetSharingPrivateConnection_Skip(This,celt) ( (This)->lpVtbl -> Skip(This,celt) )
#define IEnumNetSharingPrivateConnection_Reset(This) ( (This)->lpVtbl -> Reset(This) )
#define IEnumNetSharingPrivateConnection_Clone(This,ppenum) ( (This)->lpVtbl -> Clone(This,ppenum) )
#endif
#endif
#ifndef __INetSharingPortMappingCollection_INTERFACE_DEFINED__
#define __INetSharingPortMappingCollection_INTERFACE_DEFINED__
extern const IID IID_INetSharingPortMappingCollection;
typedef struct INetSharingPortMappingCollectionVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE *QueryInterface) (INetSharingPortMappingCollection *This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE *AddRef) (INetSharingPortMappingCollection *This);
	ULONG(STDMETHODCALLTYPE *Release) (INetSharingPortMappingCollection *This);
	HRESULT(STDMETHODCALLTYPE *GetTypeInfoCount) (INetSharingPortMappingCollection *This, UINT *pctinfo);
	HRESULT(STDMETHODCALLTYPE *GetTypeInfo) (INetSharingPortMappingCollection *This, UINT iTInfo, LCID lcid, ITypeInfo **ppTInfo);
	HRESULT(STDMETHODCALLTYPE *GetIDsOfNames) (INetSharingPortMappingCollection *This, REFIID riid, LPOLESTR *rgszNames, UINT cNames, LCID lcid, DISPID *rgDispId);
	HRESULT(STDMETHODCALLTYPE *Invoke) (INetSharingPortMappingCollection *This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS *pDispParams, VARIANT *pVarResult, EXCEPINFO *pExcepInfo, UINT *puArgErr);
	HRESULT(STDMETHODCALLTYPE *get__NewEnum) (INetSharingPortMappingCollection *This, IUnknown **pVal);
	HRESULT(STDMETHODCALLTYPE *get_Count) (INetSharingPortMappingCollection *This, long *pVal);
	END_INTERFACE
}  INetSharingPortMappingCollectionVtbl;
interface INetSharingPortMappingCollection
{
	CONST_VTBL struct INetSharingPortMappingCollectionVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define INetSharingPortMappingCollection_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define INetSharingPortMappingCollection_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define INetSharingPortMappingCollection_Release(This) ( (This)->lpVtbl -> Release(This) )
#define INetSharingPortMappingCollection_GetTypeInfoCount(This,pctinfo) ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define INetSharingPortMappingCollection_GetTypeInfo(This,iTInfo,lcid,ppTInfo) ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define INetSharingPortMappingCollection_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define INetSharingPortMappingCollection_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define INetSharingPortMappingCollection_get__NewEnum(This,pVal) ( (This)->lpVtbl -> get__NewEnum(This,pVal) )
#define INetSharingPortMappingCollection_get_Count(This,pVal) ( (This)->lpVtbl -> get_Count(This,pVal) )
#endif
#endif
extern RPC_IF_HANDLE __MIDL_itf_netcon_0000_0011_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_netcon_0000_0011_v0_0_s_ifspec;
#ifndef __INetConnectionProps_INTERFACE_DEFINED__
#define __INetConnectionProps_INTERFACE_DEFINED__
extern const IID IID_INetConnectionProps;
typedef struct INetConnectionPropsVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE *QueryInterface) (INetConnectionProps *This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE *AddRef) (INetConnectionProps *This);
	ULONG(STDMETHODCALLTYPE *Release) (INetConnectionProps *This);
	HRESULT(STDMETHODCALLTYPE *GetTypeInfoCount) (INetConnectionProps *This, UINT *pctinfo);
	HRESULT(STDMETHODCALLTYPE *GetTypeInfo) (INetConnectionProps *This, UINT iTInfo, LCID lcid, ITypeInfo **ppTInfo);
	HRESULT(STDMETHODCALLTYPE *GetIDsOfNames) (INetConnectionProps *This, REFIID riid, LPOLESTR *rgszNames, UINT cNames, LCID lcid, DISPID *rgDispId);
	HRESULT(STDMETHODCALLTYPE *Invoke) (INetConnectionProps *This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS *pDispParams, VARIANT *pVarResult, EXCEPINFO *pExcepInfo, UINT *puArgErr);
	HRESULT(STDMETHODCALLTYPE *get_Guid) (INetConnectionProps *This, BSTR *pbstrGuid);
	HRESULT(STDMETHODCALLTYPE *get_Name) (INetConnectionProps *This, BSTR *pbstrName);
	HRESULT(STDMETHODCALLTYPE *get_DeviceName) (INetConnectionProps *This, BSTR *pbstrDeviceName);
	HRESULT(STDMETHODCALLTYPE *get_Status) (INetConnectionProps *This, NETCON_STATUS *pStatus);
	HRESULT(STDMETHODCALLTYPE *get_MediaType) (INetConnectionProps *This, NETCON_MEDIATYPE *pMediaType);
	HRESULT(STDMETHODCALLTYPE *get_Characteristics) (INetConnectionProps *This, DWORD *pdwFlags);
	END_INTERFACE
}  INetConnectionPropsVtbl;
interface INetConnectionProps
{
	CONST_VTBL struct INetConnectionPropsVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define INetConnectionProps_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define INetConnectionProps_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define INetConnectionProps_Release(This) ( (This)->lpVtbl -> Release(This) )
#define INetConnectionProps_GetTypeInfoCount(This,pctinfo) ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define INetConnectionProps_GetTypeInfo(This,iTInfo,lcid,ppTInfo) ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define INetConnectionProps_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define INetConnectionProps_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define INetConnectionProps_get_Guid(This,pbstrGuid) ( (This)->lpVtbl -> get_Guid(This,pbstrGuid) )
#define INetConnectionProps_get_Name(This,pbstrName) ( (This)->lpVtbl -> get_Name(This,pbstrName) )
#define INetConnectionProps_get_DeviceName(This,pbstrDeviceName) ( (This)->lpVtbl -> get_DeviceName(This,pbstrDeviceName) )
#define INetConnectionProps_get_Status(This,pStatus) ( (This)->lpVtbl -> get_Status(This,pStatus) )
#define INetConnectionProps_get_MediaType(This,pMediaType) ( (This)->lpVtbl -> get_MediaType(This,pMediaType) )
#define INetConnectionProps_get_Characteristics(This,pdwFlags) ( (This)->lpVtbl -> get_Characteristics(This,pdwFlags) )
#endif
#endif
#ifndef __INetSharingConfiguration_INTERFACE_DEFINED__
#define __INetSharingConfiguration_INTERFACE_DEFINED__
typedef enum tagSHARINGCONNECTIONTYPE
{
	ICSSHARINGTYPE_PUBLIC = 0,
	ICSSHARINGTYPE_PRIVATE = (ICSSHARINGTYPE_PUBLIC + 1)
} SHARINGCONNECTIONTYPE;
typedef enum tagSHARINGCONNECTIONTYPE *LPSHARINGCONNECTIONTYPE;
typedef enum tagSHARINGCONNECTION_ENUM_FLAGS
{
	ICSSC_DEFAULT = 0,
	ICSSC_ENABLED = (ICSSC_DEFAULT + 1)
} SHARINGCONNECTION_ENUM_FLAGS;
typedef enum tagICS_TARGETTYPE
{
	ICSTT_NAME = 0,
	ICSTT_IPADDRESS = (ICSTT_NAME + 1)
} ICS_TARGETTYPE;
extern const IID IID_INetSharingConfiguration;
typedef struct INetSharingConfigurationVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE *QueryInterface) (INetSharingConfiguration *This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE *AddRef) (INetSharingConfiguration *This);
	ULONG(STDMETHODCALLTYPE *Release) (INetSharingConfiguration *This);
	HRESULT(STDMETHODCALLTYPE *GetTypeInfoCount) (INetSharingConfiguration *This, UINT *pctinfo);
	HRESULT(STDMETHODCALLTYPE *GetTypeInfo) (INetSharingConfiguration *This, UINT iTInfo, LCID lcid, ITypeInfo **ppTInfo);
	HRESULT(STDMETHODCALLTYPE *GetIDsOfNames) (INetSharingConfiguration *This, REFIID riid, LPOLESTR *rgszNames, UINT cNames, LCID lcid, DISPID *rgDispId);
	HRESULT(STDMETHODCALLTYPE *Invoke) (INetSharingConfiguration *This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS *pDispParams, VARIANT *pVarResult, EXCEPINFO *pExcepInfo, UINT *puArgErr);
	HRESULT(STDMETHODCALLTYPE *get_SharingEnabled) (INetSharingConfiguration *This, VARIANT_BOOL *pbEnabled);
	HRESULT(STDMETHODCALLTYPE *get_SharingConnectionType) (INetSharingConfiguration *This, SHARINGCONNECTIONTYPE *pType);
	HRESULT(STDMETHODCALLTYPE *DisableSharing) (INetSharingConfiguration *This);
	HRESULT(STDMETHODCALLTYPE *EnableSharing) (INetSharingConfiguration *This, SHARINGCONNECTIONTYPE Type);
	HRESULT(STDMETHODCALLTYPE *get_InternetFirewallEnabled) (INetSharingConfiguration *This, VARIANT_BOOL *pbEnabled);
	HRESULT(STDMETHODCALLTYPE *DisableInternetFirewall) (INetSharingConfiguration *This);
	HRESULT(STDMETHODCALLTYPE *EnableInternetFirewall) (INetSharingConfiguration *This);
	HRESULT(STDMETHODCALLTYPE *get_EnumPortMappings) (INetSharingConfiguration *This, SHARINGCONNECTION_ENUM_FLAGS Flags, INetSharingPortMappingCollection **ppColl);
	HRESULT(STDMETHODCALLTYPE *AddPortMapping) (INetSharingConfiguration *This, BSTR bstrName, UCHAR ucIPProtocol, USHORT usExternalPort, USHORT usInternalPort, DWORD dwOptions, BSTR bstrTargetNameOrIPAddress, ICS_TARGETTYPE eTargetType, INetSharingPortMapping **ppMapping);
	HRESULT(STDMETHODCALLTYPE *RemovePortMapping) (INetSharingConfiguration *This, INetSharingPortMapping *pMapping);
	END_INTERFACE
}  INetSharingConfigurationVtbl;
interface INetSharingConfiguration
{
	CONST_VTBL struct INetSharingConfigurationVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define INetSharingConfiguration_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define INetSharingConfiguration_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define INetSharingConfiguration_Release(This) ( (This)->lpVtbl -> Release(This) )
#define INetSharingConfiguration_GetTypeInfoCount(This,pctinfo) ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define INetSharingConfiguration_GetTypeInfo(This,iTInfo,lcid,ppTInfo) ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define INetSharingConfiguration_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define INetSharingConfiguration_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define INetSharingConfiguration_get_SharingEnabled(This,pbEnabled) ( (This)->lpVtbl -> get_SharingEnabled(This,pbEnabled) )
#define INetSharingConfiguration_get_SharingConnectionType(This,pType) ( (This)->lpVtbl -> get_SharingConnectionType(This,pType) )
#define INetSharingConfiguration_DisableSharing(This) ( (This)->lpVtbl -> DisableSharing(This) )
#define INetSharingConfiguration_EnableSharing(This,Type) ( (This)->lpVtbl -> EnableSharing(This,Type) )
#define INetSharingConfiguration_get_InternetFirewallEnabled(This,pbEnabled) ( (This)->lpVtbl -> get_InternetFirewallEnabled(This,pbEnabled) )
#define INetSharingConfiguration_DisableInternetFirewall(This) ( (This)->lpVtbl -> DisableInternetFirewall(This) )
#define INetSharingConfiguration_EnableInternetFirewall(This) ( (This)->lpVtbl -> EnableInternetFirewall(This) )
#define INetSharingConfiguration_get_EnumPortMappings(This,Flags,ppColl) ( (This)->lpVtbl -> get_EnumPortMappings(This,Flags,ppColl) )
#define INetSharingConfiguration_AddPortMapping(This,bstrName,ucIPProtocol,usExternalPort,usInternalPort,dwOptions,bstrTargetNameOrIPAddress,eTargetType,ppMapping) ( (This)->lpVtbl -> AddPortMapping(This,bstrName,ucIPProtocol,usExternalPort,usInternalPort,dwOptions,bstrTargetNameOrIPAddress,eTargetType,ppMapping) )
#define INetSharingConfiguration_RemovePortMapping(This,pMapping) ( (This)->lpVtbl -> RemovePortMapping(This,pMapping) )
#endif
#endif
#ifndef __INetSharingEveryConnectionCollection_INTERFACE_DEFINED__
#define __INetSharingEveryConnectionCollection_INTERFACE_DEFINED__
extern const IID IID_INetSharingEveryConnectionCollection;
typedef struct INetSharingEveryConnectionCollectionVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE *QueryInterface) (INetSharingEveryConnectionCollection *This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE *AddRef) (INetSharingEveryConnectionCollection *This);
	ULONG(STDMETHODCALLTYPE *Release) (INetSharingEveryConnectionCollection *This);
	HRESULT(STDMETHODCALLTYPE *GetTypeInfoCount) (INetSharingEveryConnectionCollection *This, UINT *pctinfo);
	HRESULT(STDMETHODCALLTYPE *GetTypeInfo) (INetSharingEveryConnectionCollection *This, UINT iTInfo, LCID lcid, ITypeInfo **ppTInfo);
	HRESULT(STDMETHODCALLTYPE *GetIDsOfNames) (INetSharingEveryConnectionCollection *This, REFIID riid, LPOLESTR *rgszNames, UINT cNames, LCID lcid, DISPID *rgDispId);
	HRESULT(STDMETHODCALLTYPE *Invoke) (INetSharingEveryConnectionCollection *This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS *pDispParams, VARIANT *pVarResult, EXCEPINFO *pExcepInfo, UINT *puArgErr);
	HRESULT(STDMETHODCALLTYPE *get__NewEnum) (INetSharingEveryConnectionCollection *This, IUnknown **pVal);
	HRESULT(STDMETHODCALLTYPE *get_Count) (INetSharingEveryConnectionCollection *This, long *pVal);
	END_INTERFACE
}  INetSharingEveryConnectionCollectionVtbl;
interface INetSharingEveryConnectionCollection
{
	CONST_VTBL struct INetSharingEveryConnectionCollectionVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define INetSharingEveryConnectionCollection_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define INetSharingEveryConnectionCollection_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define INetSharingEveryConnectionCollection_Release(This) ( (This)->lpVtbl -> Release(This) )
#define INetSharingEveryConnectionCollection_GetTypeInfoCount(This,pctinfo) ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define INetSharingEveryConnectionCollection_GetTypeInfo(This,iTInfo,lcid,ppTInfo) ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define INetSharingEveryConnectionCollection_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define INetSharingEveryConnectionCollection_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define INetSharingEveryConnectionCollection_get__NewEnum(This,pVal) ( (This)->lpVtbl -> get__NewEnum(This,pVal) )
#define INetSharingEveryConnectionCollection_get_Count(This,pVal) ( (This)->lpVtbl -> get_Count(This,pVal) )
#endif
#endif
#ifndef __INetSharingPublicConnectionCollection_INTERFACE_DEFINED__
#define __INetSharingPublicConnectionCollection_INTERFACE_DEFINED__
extern const IID IID_INetSharingPublicConnectionCollection;
typedef struct INetSharingPublicConnectionCollectionVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE *QueryInterface) (INetSharingPublicConnectionCollection *This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE *AddRef) (INetSharingPublicConnectionCollection *This);
	ULONG(STDMETHODCALLTYPE *Release) (INetSharingPublicConnectionCollection *This);
	HRESULT(STDMETHODCALLTYPE *GetTypeInfoCount) (INetSharingPublicConnectionCollection *This, UINT *pctinfo);
	HRESULT(STDMETHODCALLTYPE *GetTypeInfo) (INetSharingPublicConnectionCollection *This, UINT iTInfo, LCID lcid, ITypeInfo **ppTInfo);
	HRESULT(STDMETHODCALLTYPE *GetIDsOfNames) (INetSharingPublicConnectionCollection *This, REFIID riid, LPOLESTR *rgszNames, UINT cNames, LCID lcid, DISPID *rgDispId);
	HRESULT(STDMETHODCALLTYPE *Invoke) (INetSharingPublicConnectionCollection *This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS *pDispParams, VARIANT *pVarResult, EXCEPINFO *pExcepInfo, UINT *puArgErr);
	HRESULT(STDMETHODCALLTYPE *get__NewEnum) (INetSharingPublicConnectionCollection *This, IUnknown **pVal);
	HRESULT(STDMETHODCALLTYPE *get_Count) (INetSharingPublicConnectionCollection *This, long *pVal);
	END_INTERFACE
}  INetSharingPublicConnectionCollectionVtbl;
interface INetSharingPublicConnectionCollection
{
	CONST_VTBL struct INetSharingPublicConnectionCollectionVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define INetSharingPublicConnectionCollection_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define INetSharingPublicConnectionCollection_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define INetSharingPublicConnectionCollection_Release(This) ( (This)->lpVtbl -> Release(This) )
#define INetSharingPublicConnectionCollection_GetTypeInfoCount(This,pctinfo) ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define INetSharingPublicConnectionCollection_GetTypeInfo(This,iTInfo,lcid,ppTInfo) ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define INetSharingPublicConnectionCollection_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define INetSharingPublicConnectionCollection_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define INetSharingPublicConnectionCollection_get__NewEnum(This,pVal) ( (This)->lpVtbl -> get__NewEnum(This,pVal) )
#define INetSharingPublicConnectionCollection_get_Count(This,pVal) ( (This)->lpVtbl -> get_Count(This,pVal) )
#endif
#endif
#ifndef __INetSharingPrivateConnectionCollection_INTERFACE_DEFINED__
#define __INetSharingPrivateConnectionCollection_INTERFACE_DEFINED__
extern const IID IID_INetSharingPrivateConnectionCollection;
typedef struct INetSharingPrivateConnectionCollectionVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE *QueryInterface) (INetSharingPrivateConnectionCollection *This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE *AddRef) (INetSharingPrivateConnectionCollection *This);
	ULONG(STDMETHODCALLTYPE *Release) (INetSharingPrivateConnectionCollection *This);
	HRESULT(STDMETHODCALLTYPE *GetTypeInfoCount) (INetSharingPrivateConnectionCollection *This, UINT *pctinfo);
	HRESULT(STDMETHODCALLTYPE *GetTypeInfo) (INetSharingPrivateConnectionCollection *This, UINT iTInfo, LCID lcid, ITypeInfo **ppTInfo);
	HRESULT(STDMETHODCALLTYPE *GetIDsOfNames) (INetSharingPrivateConnectionCollection *This, REFIID riid, LPOLESTR *rgszNames, UINT cNames, LCID lcid, DISPID *rgDispId);
	HRESULT(STDMETHODCALLTYPE *Invoke) (INetSharingPrivateConnectionCollection *This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS *pDispParams, VARIANT *pVarResult, EXCEPINFO *pExcepInfo, UINT *puArgErr);
	HRESULT(STDMETHODCALLTYPE *get__NewEnum) (INetSharingPrivateConnectionCollection *This, IUnknown **pVal);
	HRESULT(STDMETHODCALLTYPE *get_Count) (INetSharingPrivateConnectionCollection *This, long *pVal);
	END_INTERFACE
}  INetSharingPrivateConnectionCollectionVtbl;
interface INetSharingPrivateConnectionCollection
{
	CONST_VTBL struct INetSharingPrivateConnectionCollectionVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define INetSharingPrivateConnectionCollection_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define INetSharingPrivateConnectionCollection_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define INetSharingPrivateConnectionCollection_Release(This) ( (This)->lpVtbl -> Release(This) )
#define INetSharingPrivateConnectionCollection_GetTypeInfoCount(This,pctinfo) ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define INetSharingPrivateConnectionCollection_GetTypeInfo(This,iTInfo,lcid,ppTInfo) ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define INetSharingPrivateConnectionCollection_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define INetSharingPrivateConnectionCollection_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define INetSharingPrivateConnectionCollection_get__NewEnum(This,pVal) ( (This)->lpVtbl -> get__NewEnum(This,pVal) )
#define INetSharingPrivateConnectionCollection_get_Count(This,pVal) ( (This)->lpVtbl -> get_Count(This,pVal) )
#endif
#endif
#ifndef __INetSharingManager_INTERFACE_DEFINED__
#define __INetSharingManager_INTERFACE_DEFINED__
extern const IID IID_INetSharingManager;
typedef struct INetSharingManagerVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE *QueryInterface) (INetSharingManager *This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE *AddRef) (INetSharingManager *This);
	ULONG(STDMETHODCALLTYPE *Release) (INetSharingManager *This);
	HRESULT(STDMETHODCALLTYPE *GetTypeInfoCount) (INetSharingManager *This, UINT *pctinfo);
	HRESULT(STDMETHODCALLTYPE *GetTypeInfo) (INetSharingManager *This, UINT iTInfo, LCID lcid, ITypeInfo **ppTInfo);
	HRESULT(STDMETHODCALLTYPE *GetIDsOfNames) (INetSharingManager *This, REFIID riid, LPOLESTR *rgszNames, UINT cNames, LCID lcid, DISPID *rgDispId);
	HRESULT(STDMETHODCALLTYPE *Invoke) (INetSharingManager *This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS *pDispParams, VARIANT *pVarResult, EXCEPINFO *pExcepInfo, UINT *puArgErr);
	HRESULT(STDMETHODCALLTYPE *get_SharingInstalled) (INetSharingManager *This, VARIANT_BOOL *pbInstalled);
	HRESULT(STDMETHODCALLTYPE *get_EnumPublicConnections) (INetSharingManager *This, SHARINGCONNECTION_ENUM_FLAGS Flags, INetSharingPublicConnectionCollection **ppColl);
	HRESULT(STDMETHODCALLTYPE *get_EnumPrivateConnections) (INetSharingManager *This, SHARINGCONNECTION_ENUM_FLAGS Flags, INetSharingPrivateConnectionCollection **ppColl);
	HRESULT(STDMETHODCALLTYPE *get_INetSharingConfigurationForINetConnection) (INetSharingManager *This, INetConnection *pNetConnection, INetSharingConfiguration **ppNetSharingConfiguration);
	HRESULT(STDMETHODCALLTYPE *get_EnumEveryConnection) (INetSharingManager *This, INetSharingEveryConnectionCollection **ppColl);
	HRESULT(STDMETHODCALLTYPE *get_NetConnectionProps) (INetSharingManager *This, INetConnection *pNetConnection, INetConnectionProps **ppProps);
	END_INTERFACE
}  INetSharingManagerVtbl;
interface INetSharingManager
{
	CONST_VTBL struct INetSharingManagerVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define INetSharingManager_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define INetSharingManager_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define INetSharingManager_Release(This) ( (This)->lpVtbl -> Release(This) )
#define INetSharingManager_GetTypeInfoCount(This,pctinfo) ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define INetSharingManager_GetTypeInfo(This,iTInfo,lcid,ppTInfo) ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define INetSharingManager_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define INetSharingManager_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define INetSharingManager_get_SharingInstalled(This,pbInstalled) ( (This)->lpVtbl -> get_SharingInstalled(This,pbInstalled) )
#define INetSharingManager_get_EnumPublicConnections(This,Flags,ppColl) ( (This)->lpVtbl -> get_EnumPublicConnections(This,Flags,ppColl) )
#define INetSharingManager_get_EnumPrivateConnections(This,Flags,ppColl) ( (This)->lpVtbl -> get_EnumPrivateConnections(This,Flags,ppColl) )
#define INetSharingManager_get_INetSharingConfigurationForINetConnection(This,pNetConnection,ppNetSharingConfiguration) ( (This)->lpVtbl -> get_INetSharingConfigurationForINetConnection(This,pNetConnection,ppNetSharingConfiguration) )
#define INetSharingManager_get_EnumEveryConnection(This,ppColl) ( (This)->lpVtbl -> get_EnumEveryConnection(This,ppColl) )
#define INetSharingManager_get_NetConnectionProps(This,pNetConnection,ppProps) ( (This)->lpVtbl -> get_NetConnectionProps(This,pNetConnection,ppProps) )
#endif
#endif
#ifndef __NETCONLib_LIBRARY_DEFINED__
#define __NETCONLib_LIBRARY_DEFINED__
extern const IID LIBID_NETCONLib;
extern const CLSID CLSID_NetSharingManager;
#endif
unsigned long __RPC_USER BSTR_UserSize(unsigned long *, unsigned long, BSTR *);
unsigned char *__RPC_USER BSTR_UserMarshal(unsigned long *, unsigned char *, BSTR *);
unsigned char *__RPC_USER BSTR_UserUnmarshal(unsigned long *, unsigned char *, BSTR *);
void __RPC_USER BSTR_UserFree(unsigned long *, BSTR *);
unsigned long __RPC_USER HWND_UserSize(unsigned long *, unsigned long, HWND *);
unsigned char *__RPC_USER HWND_UserMarshal(unsigned long *, unsigned char *, HWND *);
unsigned char *__RPC_USER HWND_UserUnmarshal(unsigned long *, unsigned char *, HWND *);
void __RPC_USER HWND_UserFree(unsigned long *, HWND *);
unsigned long __RPC_USER VARIANT_UserSize(unsigned long *, unsigned long, VARIANT *);
unsigned char *__RPC_USER VARIANT_UserMarshal(unsigned long *, unsigned char *, VARIANT *);
unsigned char *__RPC_USER VARIANT_UserUnmarshal(unsigned long *, unsigned char *, VARIANT *);
void __RPC_USER VARIANT_UserFree(unsigned long *, VARIANT *);
unsigned long __RPC_USER BSTR_UserSize64(unsigned long *, unsigned long, BSTR *);
unsigned char *__RPC_USER BSTR_UserMarshal64(unsigned long *, unsigned char *, BSTR *);
unsigned char *__RPC_USER BSTR_UserUnmarshal64(unsigned long *, unsigned char *, BSTR *);
void __RPC_USER BSTR_UserFree64(unsigned long *, BSTR *);
unsigned long __RPC_USER HWND_UserSize64(unsigned long *, unsigned long, HWND *);
unsigned char *__RPC_USER HWND_UserMarshal64(unsigned long *, unsigned char *, HWND *);
unsigned char *__RPC_USER HWND_UserUnmarshal64(unsigned long *, unsigned char *, HWND *);
void __RPC_USER HWND_UserFree64(unsigned long *, HWND *);
unsigned long __RPC_USER VARIANT_UserSize64(unsigned long *, unsigned long, VARIANT *);
unsigned char *__RPC_USER VARIANT_UserMarshal64(unsigned long *, unsigned char *, VARIANT *);
unsigned char *__RPC_USER VARIANT_UserUnmarshal64(unsigned long *, unsigned char *, VARIANT *);
void __RPC_USER VARIANT_UserFree64(unsigned long *, VARIANT *);
#endif

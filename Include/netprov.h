/*+@@file@@----------------------------------------------------------------*//*!
 \file		netprov.h
 \par Description 
            Extension and update of headers for PellesC compiler suite.
 \par Project: 
            PellesC Headers extension
 \date		Created  on Sun Sep 11 22:41:42 2016
 \date		Modified on Sun Sep 11 22:41:42 2016
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
#ifndef __netprov_h__
#define __netprov_h__
#if __POCC__ >= 500
#pragma once
#endif
#ifndef __IProvisioningDomain_FWD_DEFINED__
#define __IProvisioningDomain_FWD_DEFINED__
typedef interface IProvisioningDomain IProvisioningDomain;
#endif
#ifndef __IProvisioningProfileWireless_FWD_DEFINED__
#define __IProvisioningProfileWireless_FWD_DEFINED__
typedef interface IProvisioningProfileWireless IProvisioningProfileWireless;
#endif
#ifndef __NetProvisioning_FWD_DEFINED__
#define __NetProvisioning_FWD_DEFINED__
typedef struct NetProvisioning NetProvisioning;
#endif
#include <oaidl.h>
#include <prsht.h>
#include <msxml.h>
#if ( _MSC_VER >= 800 )
#pragma warning(disable:4201)
#endif
extern RPC_IF_HANDLE __MIDL_itf_netprov_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_netprov_0000_0000_v0_0_s_ifspec;
#ifndef __IProvisioningDomain_INTERFACE_DEFINED__
#define __IProvisioningDomain_INTERFACE_DEFINED__
extern const IID IID_IProvisioningDomain;
typedef struct IProvisioningDomainVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IProvisioningDomain * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IProvisioningDomain * This);
	ULONG(STDMETHODCALLTYPE * Release) (IProvisioningDomain * This);
	HRESULT(STDMETHODCALLTYPE * Add) (IProvisioningDomain * This, LPCWSTR pszwPathToFolder);
	HRESULT(STDMETHODCALLTYPE * Query) (IProvisioningDomain * This, LPCWSTR pszwDomain, LPCWSTR pszwLanguage, LPCWSTR pszwXPathQuery, IXMLDOMNodeList ** Nodes);
	END_INTERFACE
}  IProvisioningDomainVtbl;
interface IProvisioningDomain
{
	CONST_VTBL struct IProvisioningDomainVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IProvisioningDomain_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IProvisioningDomain_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IProvisioningDomain_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IProvisioningDomain_Add(This,pszwPathToFolder) ( (This)->lpVtbl -> Add(This,pszwPathToFolder) )
#define IProvisioningDomain_Query(This,pszwDomain,pszwLanguage,pszwXPathQuery,Nodes) ( (This)->lpVtbl -> Query(This,pszwDomain,pszwLanguage,pszwXPathQuery,Nodes) )
#endif
#endif
#define     WZC_PROFILE_SUCCESS                                         0
#define     WZC_PROFILE_XML_ERROR_NO_VERSION                            1
#define     WZC_PROFILE_XML_ERROR_BAD_VERSION                           2
#define     WZC_PROFILE_XML_ERROR_UNSUPPORTED_VERSION                   3
#define     WZC_PROFILE_XML_ERROR_SSID_NOT_FOUND                        4
#define     WZC_PROFILE_XML_ERROR_BAD_SSID                              5
#define     WZC_PROFILE_XML_ERROR_CONNECTION_TYPE                       6
#define     WZC_PROFILE_XML_ERROR_AUTHENTICATION                        7
#define     WZC_PROFILE_XML_ERROR_ENCRYPTION                            8
#define     WZC_PROFILE_XML_ERROR_KEY_PROVIDED_AUTOMATICALLY            9
#define     WZC_PROFILE_XML_ERROR_1X_ENABLED                            10
#define     WZC_PROFILE_XML_ERROR_EAP_METHOD                            11
#define     WZC_PROFILE_XML_ERROR_BAD_KEY_INDEX                         12
#define     WZC_PROFILE_XML_ERROR_KEY_INDEX_RANGE                       13
#define     WZC_PROFILE_XML_ERROR_BAD_NETWORK_KEY                       14
#define     WZC_PROFILE_CONFIG_ERROR_INVALID_AUTH_FOR_CONNECTION_TYPE   15
#define     WZC_PROFILE_CONFIG_ERROR_INVALID_ENCRYPTION_FOR_AUTHMODE    16
#define     WZC_PROFILE_CONFIG_ERROR_KEY_REQUIRED                       17
#define     WZC_PROFILE_CONFIG_ERROR_KEY_INDEX_REQUIRED                 18
#define     WZC_PROFILE_CONFIG_ERROR_KEY_INDEX_NOT_APPLICABLE           19
#define     WZC_PROFILE_CONFIG_ERROR_1X_NOT_ALLOWED                     20
#define     WZC_PROFILE_CONFIG_ERROR_1X_NOT_ALLOWED_KEY_REQUIRED        21
#define     WZC_PROFILE_CONFIG_ERROR_1X_NOT_ENABLED_KEY_PROVIDED        22
#define     WZC_PROFILE_CONFIG_ERROR_EAP_METHOD_REQUIRED                23
#define     WZC_PROFILE_CONFIG_ERROR_EAP_METHOD_NOT_APPLICABLE          24
#define     WZC_PROFILE_CONFIG_ERROR_WPA_NOT_SUPPORTED                  25
#define     WZC_PROFILE_CONFIG_ERROR_WPA_ENCRYPTION_NOT_SUPPORTED       26
#define     WZC_PROFILE_SET_ERROR_DUPLICATE_NETWORK                     27
#define     WZC_PROFILE_SET_ERROR_MEMORY_ALLOCATION                     28
#define     WZC_PROFILE_SET_ERROR_READING_1X_CONFIG                     29
#define     WZC_PROFILE_SET_ERROR_WRITING_1X_CONFIG                     30
#define     WZC_PROFILE_SET_ERROR_WRITING_WZC_CFG                       31
#define     WZC_PROFILE_API_ERROR_NOT_SUPPORTED                         32
#define     WZC_PROFILE_API_ERROR_FAILED_TO_LOAD_XML                    33
#define     WZC_PROFILE_API_ERROR_FAILED_TO_LOAD_SCHEMA                 34
#define     WZC_PROFILE_API_ERROR_XML_VALIDATION_FAILED                 35
#define     WZC_PROFILE_API_ERROR_INTERNAL                              36
extern RPC_IF_HANDLE __MIDL_itf_netprov_0000_0001_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_netprov_0000_0001_v0_0_s_ifspec;
#ifndef __IProvisioningProfileWireless_INTERFACE_DEFINED__
#define __IProvisioningProfileWireless_INTERFACE_DEFINED__
extern const IID IID_IProvisioningProfileWireless;
typedef struct IProvisioningProfileWirelessVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IProvisioningProfileWireless * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IProvisioningProfileWireless * This);
	ULONG(STDMETHODCALLTYPE * Release) (IProvisioningProfileWireless * This);
	HRESULT(STDMETHODCALLTYPE * CreateProfile) (IProvisioningProfileWireless * This, BSTR bstrXMLWirelessConfigProfile, BSTR bstrXMLConnectionConfigProfile, GUID * pAdapterInstanceGuid, ULONG * pulStatus);
	END_INTERFACE
}  IProvisioningProfileWirelessVtbl;
interface IProvisioningProfileWireless
{
	CONST_VTBL struct IProvisioningProfileWirelessVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IProvisioningProfileWireless_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IProvisioningProfileWireless_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IProvisioningProfileWireless_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IProvisioningProfileWireless_CreateProfile(This,bstrXMLWirelessConfigProfile,bstrXMLConnectionConfigProfile,pAdapterInstanceGuid,pulStatus) ( (This)->lpVtbl -> CreateProfile(This,bstrXMLWirelessConfigProfile,bstrXMLConnectionConfigProfile,pAdapterInstanceGuid,pulStatus) )
#endif
#endif
#ifndef __NETPROVLib_LIBRARY_DEFINED__
#define __NETPROVLib_LIBRARY_DEFINED__
extern const IID LIBID_NETPROVLib;
extern const CLSID CLSID_NetProvisioning;
#endif
unsigned long __RPC_USER BSTR_UserSize(unsigned long *, unsigned long, BSTR *);
unsigned char *__RPC_USER BSTR_UserMarshal(unsigned long *, unsigned char *, BSTR *);
unsigned char *__RPC_USER BSTR_UserUnmarshal(unsigned long *, unsigned char *, BSTR *);
void __RPC_USER BSTR_UserFree(unsigned long *, BSTR *);
unsigned long __RPC_USER BSTR_UserSize64(unsigned long *, unsigned long, BSTR *);
unsigned char *__RPC_USER BSTR_UserMarshal64(unsigned long *, unsigned char *, BSTR *);
unsigned char *__RPC_USER BSTR_UserUnmarshal64(unsigned long *, unsigned char *, BSTR *);
void __RPC_USER BSTR_UserFree64(unsigned long *, BSTR *);
#endif

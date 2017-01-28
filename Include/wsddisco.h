/*+@@file@@----------------------------------------------------------------*//*!
 \file		wsddisco.h
 \par Description 
            Extension and update of headers for PellesC compiler suite.
 \par Project: 
            PellesC Headers extension
 \date		Created  on Mon Sep 19 17:38:11 2016
 \date		Modified on Mon Sep 19 17:38:11 2016
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
#ifndef __wsddisco_h__
#define __wsddisco_h__
#if __POCC__ >= 500
#pragma once
#endif
#ifndef __IWSDiscoveryProvider_FWD_DEFINED__
#define __IWSDiscoveryProvider_FWD_DEFINED__
typedef interface IWSDiscoveryProvider IWSDiscoveryProvider;
#endif
#ifndef __IWSDiscoveryProviderNotify_FWD_DEFINED__
#define __IWSDiscoveryProviderNotify_FWD_DEFINED__
typedef interface IWSDiscoveryProviderNotify IWSDiscoveryProviderNotify;
#endif
#ifndef __IWSDiscoveredService_FWD_DEFINED__
#define __IWSDiscoveredService_FWD_DEFINED__
typedef interface IWSDiscoveredService IWSDiscoveredService;
#endif
#ifndef __IWSDiscoveryPublisher_FWD_DEFINED__
#define __IWSDiscoveryPublisher_FWD_DEFINED__
typedef interface IWSDiscoveryPublisher IWSDiscoveryPublisher;
#endif
#ifndef __IWSDiscoveryPublisherNotify_FWD_DEFINED__
#define __IWSDiscoveryPublisherNotify_FWD_DEFINED__
typedef interface IWSDiscoveryPublisherNotify IWSDiscoveryPublisherNotify;
#endif
#ifndef __IWSDScopeMatchingRule_FWD_DEFINED__
#define __IWSDScopeMatchingRule_FWD_DEFINED__
typedef interface IWSDScopeMatchingRule IWSDScopeMatchingRule;
#endif
#include <objidl.h>
#include <wsdxmldom.h>
#include <wsdtypes.h>
HRESULT WINAPI WSDCreateDiscoveryProvider(IWSDXMLContext *pContext, IWSDiscoveryProvider **ppProvider);
#if (WINVER >= _WIN32_WINNT_WIN7)
HRESULT WINAPI WSDCreateDiscoveryProvider2(IWSDXMLContext *pContext, WSD_CONFIG_PARAM *pConfigParams, DWORD dwConfigParamCount, IWSDiscoveryProvider **ppProvider);
#endif
extern RPC_IF_HANDLE __MIDL_itf_wsddisco_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_wsddisco_0000_0000_v0_0_s_ifspec;
#ifndef __IWSDiscoveryProvider_INTERFACE_DEFINED__
#define __IWSDiscoveryProvider_INTERFACE_DEFINED__
extern const IID IID_IWSDiscoveryProvider;
typedef struct IWSDiscoveryProviderVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IWSDiscoveryProvider * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IWSDiscoveryProvider * This);
	ULONG(STDMETHODCALLTYPE * Release) (IWSDiscoveryProvider * This);
	HRESULT(STDMETHODCALLTYPE * SetAddressFamily) (IWSDiscoveryProvider * This, DWORD dwAddressFamily);
	HRESULT(STDMETHODCALLTYPE * Attach) (IWSDiscoveryProvider * This, IWSDiscoveryProviderNotify * pSink);
	HRESULT(STDMETHODCALLTYPE * Detach) (IWSDiscoveryProvider * This);
	HRESULT(STDMETHODCALLTYPE * SearchById) (IWSDiscoveryProvider * This, LPCWSTR pszId, LPCWSTR pszTag);
	HRESULT(STDMETHODCALLTYPE * SearchByAddress) (IWSDiscoveryProvider * This, LPCWSTR pszAddress, LPCWSTR pszTag);
	HRESULT(STDMETHODCALLTYPE * SearchByType) (IWSDiscoveryProvider * This, const WSD_NAME_LIST * pTypesList, const WSD_URI_LIST * pScopesList, LPCWSTR pszMatchBy, LPCWSTR pszTag);
	HRESULT(STDMETHODCALLTYPE * GetXMLContext) (IWSDiscoveryProvider * This, IWSDXMLContext ** ppContext);
	END_INTERFACE
}  IWSDiscoveryProviderVtbl;
interface IWSDiscoveryProvider
{
	CONST_VTBL struct IWSDiscoveryProviderVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IWSDiscoveryProvider_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IWSDiscoveryProvider_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IWSDiscoveryProvider_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IWSDiscoveryProvider_SetAddressFamily(This,dwAddressFamily) ( (This)->lpVtbl -> SetAddressFamily(This,dwAddressFamily) )
#define IWSDiscoveryProvider_Attach(This,pSink) ( (This)->lpVtbl -> Attach(This,pSink) )
#define IWSDiscoveryProvider_Detach(This) ( (This)->lpVtbl -> Detach(This) )
#define IWSDiscoveryProvider_SearchById(This,pszId,pszTag) ( (This)->lpVtbl -> SearchById(This,pszId,pszTag) )
#define IWSDiscoveryProvider_SearchByAddress(This,pszAddress,pszTag) ( (This)->lpVtbl -> SearchByAddress(This,pszAddress,pszTag) )
#define IWSDiscoveryProvider_SearchByType(This,pTypesList,pScopesList,pszMatchBy,pszTag) ( (This)->lpVtbl -> SearchByType(This,pTypesList,pScopesList,pszMatchBy,pszTag) )
#define IWSDiscoveryProvider_GetXMLContext(This,ppContext) ( (This)->lpVtbl -> GetXMLContext(This,ppContext) )
#endif
#endif
#ifndef __IWSDiscoveryProviderNotify_INTERFACE_DEFINED__
#define __IWSDiscoveryProviderNotify_INTERFACE_DEFINED__
extern const IID IID_IWSDiscoveryProviderNotify;
typedef struct IWSDiscoveryProviderNotifyVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IWSDiscoveryProviderNotify * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IWSDiscoveryProviderNotify * This);
	ULONG(STDMETHODCALLTYPE * Release) (IWSDiscoveryProviderNotify * This);
	HRESULT(STDMETHODCALLTYPE * Add) (IWSDiscoveryProviderNotify * This, IWSDiscoveredService * pService);
	HRESULT(STDMETHODCALLTYPE * Remove) (IWSDiscoveryProviderNotify * This, IWSDiscoveredService * pService);
	HRESULT(STDMETHODCALLTYPE * SearchFailed) (IWSDiscoveryProviderNotify * This, HRESULT hr, LPCWSTR pszTag);
	HRESULT(STDMETHODCALLTYPE * SearchComplete) (IWSDiscoveryProviderNotify * This, LPCWSTR pszTag);
	END_INTERFACE
}  IWSDiscoveryProviderNotifyVtbl;
interface IWSDiscoveryProviderNotify
{
	CONST_VTBL struct IWSDiscoveryProviderNotifyVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IWSDiscoveryProviderNotify_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IWSDiscoveryProviderNotify_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IWSDiscoveryProviderNotify_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IWSDiscoveryProviderNotify_Add(This,pService) ( (This)->lpVtbl -> Add(This,pService) )
#define IWSDiscoveryProviderNotify_Remove(This,pService) ( (This)->lpVtbl -> Remove(This,pService) )
#define IWSDiscoveryProviderNotify_SearchFailed(This,hr,pszTag) ( (This)->lpVtbl -> SearchFailed(This,hr,pszTag) )
#define IWSDiscoveryProviderNotify_SearchComplete(This,pszTag) ( (This)->lpVtbl -> SearchComplete(This,pszTag) )
#endif
#endif
#ifndef __IWSDiscoveredService_INTERFACE_DEFINED__
#define __IWSDiscoveredService_INTERFACE_DEFINED__
extern const IID IID_IWSDiscoveredService;
typedef struct IWSDiscoveredServiceVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IWSDiscoveredService * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IWSDiscoveredService * This);
	ULONG(STDMETHODCALLTYPE * Release) (IWSDiscoveredService * This);
	HRESULT(STDMETHODCALLTYPE * GetEndpointReference) (IWSDiscoveredService * This, WSD_ENDPOINT_REFERENCE ** ppEndpointReference);
	HRESULT(STDMETHODCALLTYPE * GetTypes) (IWSDiscoveredService * This, WSD_NAME_LIST ** ppTypesList);
	HRESULT(STDMETHODCALLTYPE * GetScopes) (IWSDiscoveredService * This, WSD_URI_LIST ** ppScopesList);
	HRESULT(STDMETHODCALLTYPE * GetXAddrs) (IWSDiscoveredService * This, WSD_URI_LIST ** ppXAddrsList);
	HRESULT(STDMETHODCALLTYPE * GetMetadataVersion) (IWSDiscoveredService * This, ULONGLONG * pullMetadataVersion);
	HRESULT(STDMETHODCALLTYPE * GetExtendedDiscoXML) (IWSDiscoveredService * This, WSDXML_ELEMENT ** ppHeaderAny, WSDXML_ELEMENT ** ppBodyAny);
	HRESULT(STDMETHODCALLTYPE * GetProbeResolveTag) (IWSDiscoveredService * This, LPCWSTR * ppszTag);
	HRESULT(STDMETHODCALLTYPE * GetRemoteTransportAddress) (IWSDiscoveredService * This, LPCWSTR * ppszRemoteTransportAddress);
	HRESULT(STDMETHODCALLTYPE * GetLocalTransportAddress) (IWSDiscoveredService * This, LPCWSTR * ppszLocalTransportAddress);
	HRESULT(STDMETHODCALLTYPE * GetLocalInterfaceGUID) (IWSDiscoveredService * This, GUID * pGuid);
	HRESULT(STDMETHODCALLTYPE * GetInstanceId) (IWSDiscoveredService * This, ULONGLONG * pullInstanceId);
	END_INTERFACE
}  IWSDiscoveredServiceVtbl;
interface IWSDiscoveredService
{
	CONST_VTBL struct IWSDiscoveredServiceVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IWSDiscoveredService_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IWSDiscoveredService_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IWSDiscoveredService_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IWSDiscoveredService_GetEndpointReference(This,ppEndpointReference) ( (This)->lpVtbl -> GetEndpointReference(This,ppEndpointReference) )
#define IWSDiscoveredService_GetTypes(This,ppTypesList) ( (This)->lpVtbl -> GetTypes(This,ppTypesList) )
#define IWSDiscoveredService_GetScopes(This,ppScopesList) ( (This)->lpVtbl -> GetScopes(This,ppScopesList) )
#define IWSDiscoveredService_GetXAddrs(This,ppXAddrsList) ( (This)->lpVtbl -> GetXAddrs(This,ppXAddrsList) )
#define IWSDiscoveredService_GetMetadataVersion(This,pullMetadataVersion) ( (This)->lpVtbl -> GetMetadataVersion(This,pullMetadataVersion) )
#define IWSDiscoveredService_GetExtendedDiscoXML(This,ppHeaderAny,ppBodyAny) ( (This)->lpVtbl -> GetExtendedDiscoXML(This,ppHeaderAny,ppBodyAny) )
#define IWSDiscoveredService_GetProbeResolveTag(This,ppszTag) ( (This)->lpVtbl -> GetProbeResolveTag(This,ppszTag) )
#define IWSDiscoveredService_GetRemoteTransportAddress(This,ppszRemoteTransportAddress) ( (This)->lpVtbl -> GetRemoteTransportAddress(This,ppszRemoteTransportAddress) )
#define IWSDiscoveredService_GetLocalTransportAddress(This,ppszLocalTransportAddress) ( (This)->lpVtbl -> GetLocalTransportAddress(This,ppszLocalTransportAddress) )
#define IWSDiscoveredService_GetLocalInterfaceGUID(This,pGuid) ( (This)->lpVtbl -> GetLocalInterfaceGUID(This,pGuid) )
#define IWSDiscoveredService_GetInstanceId(This,pullInstanceId) ( (This)->lpVtbl -> GetInstanceId(This,pullInstanceId) )
#endif
#endif
HRESULT WINAPI WSDCreateDiscoveryPublisher(IWSDXMLContext *pContext, IWSDiscoveryPublisher **ppPublisher);
#if (WINVER >= _WIN32_WINNT_WIN7)
HRESULT WINAPI WSDCreateDiscoveryPublisher2(IWSDXMLContext *pContext, WSD_CONFIG_PARAM *pConfigParams, DWORD dwConfigParamCount, IWSDiscoveryPublisher **ppPublisher);
#endif
extern RPC_IF_HANDLE __MIDL_itf_wsddisco_0000_0003_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_wsddisco_0000_0003_v0_0_s_ifspec;
#ifndef __IWSDiscoveryPublisher_INTERFACE_DEFINED__
#define __IWSDiscoveryPublisher_INTERFACE_DEFINED__
extern const IID IID_IWSDiscoveryPublisher;
typedef struct IWSDiscoveryPublisherVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IWSDiscoveryPublisher * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IWSDiscoveryPublisher * This);
	ULONG(STDMETHODCALLTYPE * Release) (IWSDiscoveryPublisher * This);
	HRESULT(STDMETHODCALLTYPE * SetAddressFamily) (IWSDiscoveryPublisher * This, DWORD dwAddressFamily);
	HRESULT(STDMETHODCALLTYPE * RegisterNotificationSink) (IWSDiscoveryPublisher * This, IWSDiscoveryPublisherNotify * pSink);
	HRESULT(STDMETHODCALLTYPE * UnRegisterNotificationSink) (IWSDiscoveryPublisher * This, IWSDiscoveryPublisherNotify * pSink);
	HRESULT(STDMETHODCALLTYPE * Publish) (IWSDiscoveryPublisher * This, LPCWSTR pszId, ULONGLONG ullMetadataVersion, ULONGLONG ullInstanceId, ULONGLONG ullMessageNumber, LPCWSTR pszSessionId, const WSD_NAME_LIST * pTypesList, const WSD_URI_LIST * pScopesList, const WSD_URI_LIST * pXAddrsList);
	HRESULT(STDMETHODCALLTYPE * UnPublish) (IWSDiscoveryPublisher * This, LPCWSTR pszId, ULONGLONG ullInstanceId, ULONGLONG ullMessageNumber, LPCWSTR pszSessionId, const WSDXML_ELEMENT * pAny);
	HRESULT(STDMETHODCALLTYPE * MatchProbe) (IWSDiscoveryPublisher * This, const WSD_SOAP_MESSAGE * pProbeMessage, IWSDMessageParameters * pMessageParameters, LPCWSTR pszId, ULONGLONG ullMetadataVersion, ULONGLONG ullInstanceId, ULONGLONG ullMessageNumber, LPCWSTR pszSessionId, const WSD_NAME_LIST * pTypesList, const WSD_URI_LIST * pScopesList, const WSD_URI_LIST * pXAddrsList);
	HRESULT(STDMETHODCALLTYPE * MatchResolve) (IWSDiscoveryPublisher * This, const WSD_SOAP_MESSAGE * pResolveMessage, IWSDMessageParameters * pMessageParameters, LPCWSTR pszId, ULONGLONG ullMetadataVersion, ULONGLONG ullInstanceId, ULONGLONG ullMessageNumber, LPCWSTR pszSessionId, const WSD_NAME_LIST * pTypesList, const WSD_URI_LIST * pScopesList, const WSD_URI_LIST * pXAddrsList);
	HRESULT(STDMETHODCALLTYPE * PublishEx) (IWSDiscoveryPublisher * This, LPCWSTR pszId, ULONGLONG ullMetadataVersion, ULONGLONG ullInstanceId, ULONGLONG ullMessageNumber, LPCWSTR pszSessionId, const WSD_NAME_LIST * pTypesList, const WSD_URI_LIST * pScopesList, const WSD_URI_LIST * pXAddrsList, const WSDXML_ELEMENT * pHeaderAny, const WSDXML_ELEMENT * pReferenceParameterAny, const WSDXML_ELEMENT * pPolicyAny, const WSDXML_ELEMENT * pEndpointReferenceAny, const WSDXML_ELEMENT * pAny);
	HRESULT(STDMETHODCALLTYPE * MatchProbeEx) (IWSDiscoveryPublisher * This, const WSD_SOAP_MESSAGE * pProbeMessage, IWSDMessageParameters * pMessageParameters, LPCWSTR pszId, ULONGLONG ullMetadataVersion, ULONGLONG ullInstanceId, ULONGLONG ullMessageNumber, LPCWSTR pszSessionId, const WSD_NAME_LIST * pTypesList, const WSD_URI_LIST * pScopesList, const WSD_URI_LIST * pXAddrsList, const WSDXML_ELEMENT * pHeaderAny, const WSDXML_ELEMENT * pReferenceParameterAny, const WSDXML_ELEMENT * pPolicyAny, const WSDXML_ELEMENT * pEndpointReferenceAny, const WSDXML_ELEMENT * pAny);
	HRESULT(STDMETHODCALLTYPE * MatchResolveEx) (IWSDiscoveryPublisher * This, const WSD_SOAP_MESSAGE * pResolveMessage, IWSDMessageParameters * pMessageParameters, LPCWSTR pszId, ULONGLONG ullMetadataVersion, ULONGLONG ullInstanceId, ULONGLONG ullMessageNumber, LPCWSTR pszSessionId, const WSD_NAME_LIST * pTypesList, const WSD_URI_LIST * pScopesList, const WSD_URI_LIST * pXAddrsList, const WSDXML_ELEMENT * pHeaderAny, const WSDXML_ELEMENT * pReferenceParameterAny, const WSDXML_ELEMENT * pPolicyAny, const WSDXML_ELEMENT * pEndpointReferenceAny, const WSDXML_ELEMENT * pAny);
	HRESULT(STDMETHODCALLTYPE * RegisterScopeMatchingRule) (IWSDiscoveryPublisher * This, IWSDScopeMatchingRule * pScopeMatchingRule);
	HRESULT(STDMETHODCALLTYPE * UnRegisterScopeMatchingRule) (IWSDiscoveryPublisher * This, IWSDScopeMatchingRule * pScopeMatchingRule);
	HRESULT(STDMETHODCALLTYPE * GetXMLContext) (IWSDiscoveryPublisher * This, IWSDXMLContext ** ppContext);
	END_INTERFACE
}  IWSDiscoveryPublisherVtbl;
interface IWSDiscoveryPublisher
{
	CONST_VTBL struct IWSDiscoveryPublisherVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IWSDiscoveryPublisher_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IWSDiscoveryPublisher_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IWSDiscoveryPublisher_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IWSDiscoveryPublisher_SetAddressFamily(This,dwAddressFamily) ( (This)->lpVtbl -> SetAddressFamily(This,dwAddressFamily) )
#define IWSDiscoveryPublisher_RegisterNotificationSink(This,pSink) ( (This)->lpVtbl -> RegisterNotificationSink(This,pSink) )
#define IWSDiscoveryPublisher_UnRegisterNotificationSink(This,pSink) ( (This)->lpVtbl -> UnRegisterNotificationSink(This,pSink) )
#define IWSDiscoveryPublisher_Publish(This,pszId,ullMetadataVersion,ullInstanceId,ullMessageNumber,pszSessionId,pTypesList,pScopesList,pXAddrsList) ( (This)->lpVtbl -> Publish(This,pszId,ullMetadataVersion,ullInstanceId,ullMessageNumber,pszSessionId,pTypesList,pScopesList,pXAddrsList) )
#define IWSDiscoveryPublisher_UnPublish(This,pszId,ullInstanceId,ullMessageNumber,pszSessionId,pAny) ( (This)->lpVtbl -> UnPublish(This,pszId,ullInstanceId,ullMessageNumber,pszSessionId,pAny) )
#define IWSDiscoveryPublisher_MatchProbe(This,pProbeMessage,pMessageParameters,pszId,ullMetadataVersion,ullInstanceId,ullMessageNumber,pszSessionId,pTypesList,pScopesList,pXAddrsList) ( (This)->lpVtbl -> MatchProbe(This,pProbeMessage,pMessageParameters,pszId,ullMetadataVersion,ullInstanceId,ullMessageNumber,pszSessionId,pTypesList,pScopesList,pXAddrsList) )
#define IWSDiscoveryPublisher_MatchResolve(This,pResolveMessage,pMessageParameters,pszId,ullMetadataVersion,ullInstanceId,ullMessageNumber,pszSessionId,pTypesList,pScopesList,pXAddrsList) ( (This)->lpVtbl -> MatchResolve(This,pResolveMessage,pMessageParameters,pszId,ullMetadataVersion,ullInstanceId,ullMessageNumber,pszSessionId,pTypesList,pScopesList,pXAddrsList) )
#define IWSDiscoveryPublisher_PublishEx(This,pszId,ullMetadataVersion,ullInstanceId,ullMessageNumber,pszSessionId,pTypesList,pScopesList,pXAddrsList,pHeaderAny,pReferenceParameterAny,pPolicyAny,pEndpointReferenceAny,pAny) ( (This)->lpVtbl -> PublishEx(This,pszId,ullMetadataVersion,ullInstanceId,ullMessageNumber,pszSessionId,pTypesList,pScopesList,pXAddrsList,pHeaderAny,pReferenceParameterAny,pPolicyAny,pEndpointReferenceAny,pAny) )
#define IWSDiscoveryPublisher_MatchProbeEx(This,pProbeMessage,pMessageParameters,pszId,ullMetadataVersion,ullInstanceId,ullMessageNumber,pszSessionId,pTypesList,pScopesList,pXAddrsList,pHeaderAny,pReferenceParameterAny,pPolicyAny,pEndpointReferenceAny,pAny) ( (This)->lpVtbl -> MatchProbeEx(This,pProbeMessage,pMessageParameters,pszId,ullMetadataVersion,ullInstanceId,ullMessageNumber,pszSessionId,pTypesList,pScopesList,pXAddrsList,pHeaderAny,pReferenceParameterAny,pPolicyAny,pEndpointReferenceAny,pAny) )
#define IWSDiscoveryPublisher_MatchResolveEx(This,pResolveMessage,pMessageParameters,pszId,ullMetadataVersion,ullInstanceId,ullMessageNumber,pszSessionId,pTypesList,pScopesList,pXAddrsList,pHeaderAny,pReferenceParameterAny,pPolicyAny,pEndpointReferenceAny,pAny) ( (This)->lpVtbl -> MatchResolveEx(This,pResolveMessage,pMessageParameters,pszId,ullMetadataVersion,ullInstanceId,ullMessageNumber,pszSessionId,pTypesList,pScopesList,pXAddrsList,pHeaderAny,pReferenceParameterAny,pPolicyAny,pEndpointReferenceAny,pAny) )
#define IWSDiscoveryPublisher_RegisterScopeMatchingRule(This,pScopeMatchingRule) ( (This)->lpVtbl -> RegisterScopeMatchingRule(This,pScopeMatchingRule) )
#define IWSDiscoveryPublisher_UnRegisterScopeMatchingRule(This,pScopeMatchingRule) ( (This)->lpVtbl -> UnRegisterScopeMatchingRule(This,pScopeMatchingRule) )
#define IWSDiscoveryPublisher_GetXMLContext(This,ppContext) ( (This)->lpVtbl -> GetXMLContext(This,ppContext) )
#endif
#endif
#ifndef __IWSDiscoveryPublisherNotify_INTERFACE_DEFINED__
#define __IWSDiscoveryPublisherNotify_INTERFACE_DEFINED__
extern const IID IID_IWSDiscoveryPublisherNotify;
typedef struct IWSDiscoveryPublisherNotifyVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IWSDiscoveryPublisherNotify * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IWSDiscoveryPublisherNotify * This);
	ULONG(STDMETHODCALLTYPE * Release) (IWSDiscoveryPublisherNotify * This);
	HRESULT(STDMETHODCALLTYPE * ProbeHandler) (IWSDiscoveryPublisherNotify * This, const WSD_SOAP_MESSAGE * pSoap, IWSDMessageParameters * pMessageParameters);
	HRESULT(STDMETHODCALLTYPE * ResolveHandler) (IWSDiscoveryPublisherNotify * This, const WSD_SOAP_MESSAGE * pSoap, IWSDMessageParameters * pMessageParameters);
	END_INTERFACE
}  IWSDiscoveryPublisherNotifyVtbl;
interface IWSDiscoveryPublisherNotify
{
	CONST_VTBL struct IWSDiscoveryPublisherNotifyVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IWSDiscoveryPublisherNotify_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IWSDiscoveryPublisherNotify_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IWSDiscoveryPublisherNotify_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IWSDiscoveryPublisherNotify_ProbeHandler(This,pSoap,pMessageParameters) ( (This)->lpVtbl -> ProbeHandler(This,pSoap,pMessageParameters) )
#define IWSDiscoveryPublisherNotify_ResolveHandler(This,pSoap,pMessageParameters) ( (This)->lpVtbl -> ResolveHandler(This,pSoap,pMessageParameters) )
#endif
#endif
#ifndef __IWSDScopeMatchingRule_INTERFACE_DEFINED__
#define __IWSDScopeMatchingRule_INTERFACE_DEFINED__
extern const IID IID_IWSDScopeMatchingRule;
typedef struct IWSDScopeMatchingRuleVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IWSDScopeMatchingRule * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IWSDScopeMatchingRule * This);
	ULONG(STDMETHODCALLTYPE * Release) (IWSDScopeMatchingRule * This);
	HRESULT(STDMETHODCALLTYPE * GetScopeRule) (IWSDScopeMatchingRule * This, LPCWSTR * ppszScopeMatchingRule);
	HRESULT(STDMETHODCALLTYPE * MatchScopes) (IWSDScopeMatchingRule * This, LPCWSTR pszScope1, LPCWSTR pszScope2, BOOL * pfMatch);
	END_INTERFACE
}  IWSDScopeMatchingRuleVtbl;
interface IWSDScopeMatchingRule
{
	CONST_VTBL struct IWSDScopeMatchingRuleVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IWSDScopeMatchingRule_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IWSDScopeMatchingRule_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IWSDScopeMatchingRule_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IWSDScopeMatchingRule_GetScopeRule(This,ppszScopeMatchingRule) ( (This)->lpVtbl -> GetScopeRule(This,ppszScopeMatchingRule) )
#define IWSDScopeMatchingRule_MatchScopes(This,pszScope1,pszScope2,pfMatch) ( (This)->lpVtbl -> MatchScopes(This,pszScope1,pszScope2,pfMatch) )
#endif
#endif
#endif

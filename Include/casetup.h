/*+@@file@@----------------------------------------------------------------*//*!
 \file		casetup.h
 \par Description 
            Extension and update of headers for PellesC compiler suite.
 \par Project: 
            PellesC Headers extension
 \date		Created  on Sat Jul  2 23:33:26 2016
 \date		Modified on Sat Jul  2 23:33:26 2016
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
#ifndef __casetup_h__
#define __casetup_h__
#if __POCC__ >= 500
#pragma once
#endif
#ifndef __ICertSrvSetupKeyInformation_FWD_DEFINED__
#define __ICertSrvSetupKeyInformation_FWD_DEFINED__
typedef interface ICertSrvSetupKeyInformation ICertSrvSetupKeyInformation;
#endif
#ifndef __ICertSrvSetupKeyInformationCollection_FWD_DEFINED__
#define __ICertSrvSetupKeyInformationCollection_FWD_DEFINED__
typedef interface ICertSrvSetupKeyInformationCollection ICertSrvSetupKeyInformationCollection;
#endif
#ifndef __ICertSrvSetup_FWD_DEFINED__
#define __ICertSrvSetup_FWD_DEFINED__
typedef interface ICertSrvSetup ICertSrvSetup;
#endif
#ifndef __IMSCEPSetup_FWD_DEFINED__
#define __IMSCEPSetup_FWD_DEFINED__
typedef interface IMSCEPSetup IMSCEPSetup;
#endif
#ifndef __ICertificateEnrollmentServerSetup_FWD_DEFINED__
#define __ICertificateEnrollmentServerSetup_FWD_DEFINED__
typedef interface ICertificateEnrollmentServerSetup ICertificateEnrollmentServerSetup;
#endif
#ifndef __ICertificateEnrollmentPolicyServerSetup_FWD_DEFINED__
#define __ICertificateEnrollmentPolicyServerSetup_FWD_DEFINED__
typedef interface ICertificateEnrollmentPolicyServerSetup ICertificateEnrollmentPolicyServerSetup;
#endif
#ifndef __CCertSrvSetupKeyInformation_FWD_DEFINED__
#define __CCertSrvSetupKeyInformation_FWD_DEFINED__
typedef struct CCertSrvSetupKeyInformation CCertSrvSetupKeyInformation;
#endif
#ifndef __CCertSrvSetup_FWD_DEFINED__
#define __CCertSrvSetup_FWD_DEFINED__
typedef struct CCertSrvSetup CCertSrvSetup;
#endif
#ifndef __CMSCEPSetup_FWD_DEFINED__
#define __CMSCEPSetup_FWD_DEFINED__
typedef struct CMSCEPSetup CMSCEPSetup;
#endif
#ifndef __CCertificateEnrollmentServerSetup_FWD_DEFINED__
#define __CCertificateEnrollmentServerSetup_FWD_DEFINED__
typedef struct CCertificateEnrollmentServerSetup CCertificateEnrollmentServerSetup;
#endif
#ifndef __CCertificateEnrollmentPolicyServerSetup_FWD_DEFINED__
#define __CCertificateEnrollmentPolicyServerSetup_FWD_DEFINED__
typedef struct CCertificateEnrollmentPolicyServerSetup CCertificateEnrollmentPolicyServerSetup;
#endif
#include <wtypes.h>
#include <oaidl.h>
#ifndef __ICertSrvSetupKeyInformation_INTERFACE_DEFINED__
#define __ICertSrvSetupKeyInformation_INTERFACE_DEFINED__
extern const IID IID_ICertSrvSetupKeyInformation;
typedef struct ICertSrvSetupKeyInformationVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (ICertSrvSetupKeyInformation * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (ICertSrvSetupKeyInformation * This);
	ULONG(STDMETHODCALLTYPE * Release) (ICertSrvSetupKeyInformation * This);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfoCount) (ICertSrvSetupKeyInformation * This, UINT * pctinfo);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfo) (ICertSrvSetupKeyInformation * This, UINT iTInfo, LCID lcid, ITypeInfo ** ppTInfo);
	HRESULT(STDMETHODCALLTYPE * GetIDsOfNames) (ICertSrvSetupKeyInformation * This, REFIID riid, LPOLESTR * rgszNames, UINT cNames, LCID lcid, DISPID * rgDispId);
	HRESULT(STDMETHODCALLTYPE * Invoke) (ICertSrvSetupKeyInformation * This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS * pDispParams, VARIANT * pVarResult, EXCEPINFO * pExcepInfo, UINT * puArgErr);
	HRESULT(STDMETHODCALLTYPE * get_ProviderName) (ICertSrvSetupKeyInformation * This, BSTR * pVal);
	HRESULT(STDMETHODCALLTYPE * put_ProviderName) (ICertSrvSetupKeyInformation * This, const BSTR bstrVal);
	HRESULT(STDMETHODCALLTYPE * get_Length) (ICertSrvSetupKeyInformation * This, LONG * pVal);
	HRESULT(STDMETHODCALLTYPE * put_Length) (ICertSrvSetupKeyInformation * This, LONG lVal);
	HRESULT(STDMETHODCALLTYPE * get_Existing) (ICertSrvSetupKeyInformation * This, VARIANT_BOOL * pVal);
	HRESULT(STDMETHODCALLTYPE * put_Existing) (ICertSrvSetupKeyInformation * This, VARIANT_BOOL bVal);
	HRESULT(STDMETHODCALLTYPE * get_ContainerName) (ICertSrvSetupKeyInformation * This, BSTR * pVal);
	HRESULT(STDMETHODCALLTYPE * put_ContainerName) (ICertSrvSetupKeyInformation * This, const BSTR bstrVal);
	HRESULT(STDMETHODCALLTYPE * get_HashAlgorithm) (ICertSrvSetupKeyInformation * This, BSTR * pVal);
	HRESULT(STDMETHODCALLTYPE * put_HashAlgorithm) (ICertSrvSetupKeyInformation * This, const BSTR bstrVal);
	HRESULT(STDMETHODCALLTYPE * get_ExistingCACertificate) (ICertSrvSetupKeyInformation * This, VARIANT * pVal);
	HRESULT(STDMETHODCALLTYPE * put_ExistingCACertificate) (ICertSrvSetupKeyInformation * This, VARIANT varVal);
	END_INTERFACE
}  ICertSrvSetupKeyInformationVtbl;
interface ICertSrvSetupKeyInformation
{
	CONST_VTBL struct ICertSrvSetupKeyInformationVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define ICertSrvSetupKeyInformation_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define ICertSrvSetupKeyInformation_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define ICertSrvSetupKeyInformation_Release(This)( (This)->lpVtbl -> Release(This) )
#define ICertSrvSetupKeyInformation_GetTypeInfoCount(This,pctinfo)( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define ICertSrvSetupKeyInformation_GetTypeInfo(This,iTInfo,lcid,ppTInfo)( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define ICertSrvSetupKeyInformation_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define ICertSrvSetupKeyInformation_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define ICertSrvSetupKeyInformation_get_ProviderName(This,pVal)( (This)->lpVtbl -> get_ProviderName(This,pVal) )
#define ICertSrvSetupKeyInformation_put_ProviderName(This,bstrVal)( (This)->lpVtbl -> put_ProviderName(This,bstrVal) )
#define ICertSrvSetupKeyInformation_get_Length(This,pVal)( (This)->lpVtbl -> get_Length(This,pVal) )
#define ICertSrvSetupKeyInformation_put_Length(This,lVal)( (This)->lpVtbl -> put_Length(This,lVal) )
#define ICertSrvSetupKeyInformation_get_Existing(This,pVal)( (This)->lpVtbl -> get_Existing(This,pVal) )
#define ICertSrvSetupKeyInformation_put_Existing(This,bVal)( (This)->lpVtbl -> put_Existing(This,bVal) )
#define ICertSrvSetupKeyInformation_get_ContainerName(This,pVal)( (This)->lpVtbl -> get_ContainerName(This,pVal) )
#define ICertSrvSetupKeyInformation_put_ContainerName(This,bstrVal)( (This)->lpVtbl -> put_ContainerName(This,bstrVal) )
#define ICertSrvSetupKeyInformation_get_HashAlgorithm(This,pVal)( (This)->lpVtbl -> get_HashAlgorithm(This,pVal) )
#define ICertSrvSetupKeyInformation_put_HashAlgorithm(This,bstrVal)( (This)->lpVtbl -> put_HashAlgorithm(This,bstrVal) )
#define ICertSrvSetupKeyInformation_get_ExistingCACertificate(This,pVal)( (This)->lpVtbl -> get_ExistingCACertificate(This,pVal) )
#define ICertSrvSetupKeyInformation_put_ExistingCACertificate(This,varVal)( (This)->lpVtbl -> put_ExistingCACertificate(This,varVal) )
#endif
#endif
#ifndef __ICertSrvSetupKeyInformationCollection_INTERFACE_DEFINED__
#define __ICertSrvSetupKeyInformationCollection_INTERFACE_DEFINED__
extern const IID IID_ICertSrvSetupKeyInformationCollection;
typedef struct ICertSrvSetupKeyInformationCollectionVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (ICertSrvSetupKeyInformationCollection * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (ICertSrvSetupKeyInformationCollection * This);
	ULONG(STDMETHODCALLTYPE * Release) (ICertSrvSetupKeyInformationCollection * This);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfoCount) (ICertSrvSetupKeyInformationCollection * This, UINT * pctinfo);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfo) (ICertSrvSetupKeyInformationCollection * This, UINT iTInfo, LCID lcid, ITypeInfo ** ppTInfo);
	HRESULT(STDMETHODCALLTYPE * GetIDsOfNames) (ICertSrvSetupKeyInformationCollection * This, REFIID riid, LPOLESTR * rgszNames, UINT cNames, LCID lcid, DISPID * rgDispId);
	HRESULT(STDMETHODCALLTYPE * Invoke) (ICertSrvSetupKeyInformationCollection * This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS * pDispParams, VARIANT * pVarResult, EXCEPINFO * pExcepInfo, UINT * puArgErr);
	HRESULT(STDMETHODCALLTYPE * get__NewEnum) (ICertSrvSetupKeyInformationCollection * This, IUnknown ** ppVal);
	HRESULT(STDMETHODCALLTYPE * get_Item) (ICertSrvSetupKeyInformationCollection * This, LONG Index, VARIANT * pVal);
	HRESULT(STDMETHODCALLTYPE * get_Count) (ICertSrvSetupKeyInformationCollection * This, LONG * pVal);
	HRESULT(STDMETHODCALLTYPE * Add) (ICertSrvSetupKeyInformationCollection * This, ICertSrvSetupKeyInformation * pIKeyInformation);
	END_INTERFACE
}  ICertSrvSetupKeyInformationCollectionVtbl;
interface ICertSrvSetupKeyInformationCollection
{
	CONST_VTBL struct ICertSrvSetupKeyInformationCollectionVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define ICertSrvSetupKeyInformationCollection_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define ICertSrvSetupKeyInformationCollection_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define ICertSrvSetupKeyInformationCollection_Release(This)( (This)->lpVtbl -> Release(This) )
#define ICertSrvSetupKeyInformationCollection_GetTypeInfoCount(This,pctinfo)( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define ICertSrvSetupKeyInformationCollection_GetTypeInfo(This,iTInfo,lcid,ppTInfo)( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define ICertSrvSetupKeyInformationCollection_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define ICertSrvSetupKeyInformationCollection_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define ICertSrvSetupKeyInformationCollection_get__NewEnum(This,ppVal)( (This)->lpVtbl -> get__NewEnum(This,ppVal) )
#define ICertSrvSetupKeyInformationCollection_get_Item(This,Index,pVal)( (This)->lpVtbl -> get_Item(This,Index,pVal) )
#define ICertSrvSetupKeyInformationCollection_get_Count(This,pVal)( (This)->lpVtbl -> get_Count(This,pVal) )
#define ICertSrvSetupKeyInformationCollection_Add(This,pIKeyInformation)( (This)->lpVtbl -> Add(This,pIKeyInformation) )
#endif
#endif
typedef enum __MIDL___MIDL_itf_casetup_0000_0002_0001
{
	ENUM_SETUPPROP_INVALID = -1,
	ENUM_SETUPPROP_CATYPE = 0,
	ENUM_SETUPPROP_CAKEYINFORMATION = 1,
	ENUM_SETUPPROP_INTERACTIVE = 2,
	ENUM_SETUPPROP_CANAME = 3,
	ENUM_SETUPPROP_CADSSUFFIX = 4,
	ENUM_SETUPPROP_VALIDITYPERIOD = 5,
	ENUM_SETUPPROP_VALIDITYPERIODUNIT = 6,
	ENUM_SETUPPROP_EXPIRATIONDATE = 7,
	ENUM_SETUPPROP_PRESERVEDATABASE = 8,
	ENUM_SETUPPROP_DATABASEDIRECTORY = 9,
	ENUM_SETUPPROP_LOGDIRECTORY = 10,
	ENUM_SETUPPROP_SHAREDFOLDER = 11,
	ENUM_SETUPPROP_PARENTCAMACHINE = 12,
	ENUM_SETUPPROP_PARENTCANAME = 13,
	ENUM_SETUPPROP_REQUESTFILE = 14,
	ENUM_SETUPPROP_WEBCAMACHINE = 15,
	ENUM_SETUPPROP_WEBCANAME = 16
} CASetupProperty;
extern RPC_IF_HANDLE __MIDL_itf_casetup_0000_0002_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_casetup_0000_0002_v0_0_s_ifspec;
#ifndef __ICertSrvSetup_INTERFACE_DEFINED__
#define __ICertSrvSetup_INTERFACE_DEFINED__
extern const IID IID_ICertSrvSetup;
typedef struct ICertSrvSetupVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (ICertSrvSetup * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (ICertSrvSetup * This);
	ULONG(STDMETHODCALLTYPE * Release) (ICertSrvSetup * This);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfoCount) (ICertSrvSetup * This, UINT * pctinfo);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfo) (ICertSrvSetup * This, UINT iTInfo, LCID lcid, ITypeInfo ** ppTInfo);
	HRESULT(STDMETHODCALLTYPE * GetIDsOfNames) (ICertSrvSetup * This, REFIID riid, LPOLESTR * rgszNames, UINT cNames, LCID lcid, DISPID * rgDispId);
	HRESULT(STDMETHODCALLTYPE * Invoke) (ICertSrvSetup * This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS * pDispParams, VARIANT * pVarResult, EXCEPINFO * pExcepInfo, UINT * puArgErr);
	HRESULT(STDMETHODCALLTYPE * get_CAErrorId) (ICertSrvSetup * This, LONG * pVal);
	HRESULT(STDMETHODCALLTYPE * get_CAErrorString) (ICertSrvSetup * This, BSTR * pVal);
	HRESULT(STDMETHODCALLTYPE * InitializeDefaults) (ICertSrvSetup * This, VARIANT_BOOL bServer, VARIANT_BOOL bClient);
	HRESULT(STDMETHODCALLTYPE * GetCASetupProperty) (ICertSrvSetup * This, CASetupProperty propertyId, VARIANT * pPropertyValue);
	HRESULT(STDMETHODCALLTYPE * SetCASetupProperty) (ICertSrvSetup * This, CASetupProperty propertyId, VARIANT * pPropertyValue);
	HRESULT(STDMETHODCALLTYPE * IsPropertyEditable) (ICertSrvSetup * This, CASetupProperty propertyId, VARIANT_BOOL * pbEditable);
	HRESULT(STDMETHODCALLTYPE * GetSupportedCATypes) (ICertSrvSetup * This, VARIANT * pCATypes);
	HRESULT(STDMETHODCALLTYPE * GetProviderNameList) (ICertSrvSetup * This, VARIANT * pVal);
	HRESULT(STDMETHODCALLTYPE * GetKeyLengthList) (ICertSrvSetup * This, const BSTR bstrProviderName, VARIANT * pVal);
	HRESULT(STDMETHODCALLTYPE * GetHashAlgorithmList) (ICertSrvSetup * This, const BSTR bstrProviderName, VARIANT * pVal);
	HRESULT(STDMETHODCALLTYPE * GetPrivateKeyContainerList) (ICertSrvSetup * This, const BSTR bstrProviderName, VARIANT * pVal);
	HRESULT(STDMETHODCALLTYPE * GetExistingCACertificates) (ICertSrvSetup * This, ICertSrvSetupKeyInformationCollection ** ppVal);
	HRESULT(STDMETHODCALLTYPE * CAImportPFX) (ICertSrvSetup * This, const BSTR bstrFileName, const BSTR bstrPasswd, VARIANT_BOOL bOverwriteExistingKey, ICertSrvSetupKeyInformation ** ppVal);
	HRESULT(STDMETHODCALLTYPE * SetCADistinguishedName) (ICertSrvSetup * This, const BSTR bstrCADN, VARIANT_BOOL bIgnoreUnicode, VARIANT_BOOL bOverwriteExistingKey, VARIANT_BOOL bOverwriteExistingCAInDS);
	HRESULT(STDMETHODCALLTYPE * SetDatabaseInformation) (ICertSrvSetup * This, const BSTR bstrDBDirectory, const BSTR bstrLogDirectory, const BSTR bstrSharedFolder, VARIANT_BOOL bForceOverwrite);
	HRESULT(STDMETHODCALLTYPE * SetParentCAInformation) (ICertSrvSetup * This, const BSTR bstrCAConfiguration);
	HRESULT(STDMETHODCALLTYPE * SetWebCAInformation) (ICertSrvSetup * This, const BSTR bstrCAConfiguration);
	HRESULT(STDMETHODCALLTYPE * Install) (ICertSrvSetup * This);
	HRESULT(STDMETHODCALLTYPE * PreUnInstall) (ICertSrvSetup * This, VARIANT_BOOL bClientOnly);
	HRESULT(STDMETHODCALLTYPE * PostUnInstall) (ICertSrvSetup * This);
	END_INTERFACE
}  ICertSrvSetupVtbl;
interface ICertSrvSetup
{
	CONST_VTBL struct ICertSrvSetupVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define ICertSrvSetup_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define ICertSrvSetup_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define ICertSrvSetup_Release(This)( (This)->lpVtbl -> Release(This) )
#define ICertSrvSetup_GetTypeInfoCount(This,pctinfo)( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define ICertSrvSetup_GetTypeInfo(This,iTInfo,lcid,ppTInfo)( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define ICertSrvSetup_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define ICertSrvSetup_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define ICertSrvSetup_get_CAErrorId(This,pVal)( (This)->lpVtbl -> get_CAErrorId(This,pVal) )
#define ICertSrvSetup_get_CAErrorString(This,pVal)( (This)->lpVtbl -> get_CAErrorString(This,pVal) )
#define ICertSrvSetup_InitializeDefaults(This,bServer,bClient)( (This)->lpVtbl -> InitializeDefaults(This,bServer,bClient) )
#define ICertSrvSetup_GetCASetupProperty(This,propertyId,pPropertyValue)( (This)->lpVtbl -> GetCASetupProperty(This,propertyId,pPropertyValue) )
#define ICertSrvSetup_SetCASetupProperty(This,propertyId,pPropertyValue)( (This)->lpVtbl -> SetCASetupProperty(This,propertyId,pPropertyValue) )
#define ICertSrvSetup_IsPropertyEditable(This,propertyId,pbEditable)( (This)->lpVtbl -> IsPropertyEditable(This,propertyId,pbEditable) )
#define ICertSrvSetup_GetSupportedCATypes(This,pCATypes)( (This)->lpVtbl -> GetSupportedCATypes(This,pCATypes) )
#define ICertSrvSetup_GetProviderNameList(This,pVal)( (This)->lpVtbl -> GetProviderNameList(This,pVal) )
#define ICertSrvSetup_GetKeyLengthList(This,bstrProviderName,pVal)( (This)->lpVtbl -> GetKeyLengthList(This,bstrProviderName,pVal) )
#define ICertSrvSetup_GetHashAlgorithmList(This,bstrProviderName,pVal)( (This)->lpVtbl -> GetHashAlgorithmList(This,bstrProviderName,pVal) )
#define ICertSrvSetup_GetPrivateKeyContainerList(This,bstrProviderName,pVal)( (This)->lpVtbl -> GetPrivateKeyContainerList(This,bstrProviderName,pVal) )
#define ICertSrvSetup_GetExistingCACertificates(This,ppVal)( (This)->lpVtbl -> GetExistingCACertificates(This,ppVal) )
#define ICertSrvSetup_CAImportPFX(This,bstrFileName,bstrPasswd,bOverwriteExistingKey,ppVal)( (This)->lpVtbl -> CAImportPFX(This,bstrFileName,bstrPasswd,bOverwriteExistingKey,ppVal) )
#define ICertSrvSetup_SetCADistinguishedName(This,bstrCADN,bIgnoreUnicode,bOverwriteExistingKey,bOverwriteExistingCAInDS)( (This)->lpVtbl -> SetCADistinguishedName(This,bstrCADN,bIgnoreUnicode,bOverwriteExistingKey,bOverwriteExistingCAInDS) )
#define ICertSrvSetup_SetDatabaseInformation(This,bstrDBDirectory,bstrLogDirectory,bstrSharedFolder,bForceOverwrite)( (This)->lpVtbl -> SetDatabaseInformation(This,bstrDBDirectory,bstrLogDirectory,bstrSharedFolder,bForceOverwrite) )
#define ICertSrvSetup_SetParentCAInformation(This,bstrCAConfiguration)( (This)->lpVtbl -> SetParentCAInformation(This,bstrCAConfiguration) )
#define ICertSrvSetup_SetWebCAInformation(This,bstrCAConfiguration)( (This)->lpVtbl -> SetWebCAInformation(This,bstrCAConfiguration) )
#define ICertSrvSetup_Install(This)( (This)->lpVtbl -> Install(This) )
#define ICertSrvSetup_PreUnInstall(This,bClientOnly)( (This)->lpVtbl -> PreUnInstall(This,bClientOnly) )
#define ICertSrvSetup_PostUnInstall(This)( (This)->lpVtbl -> PostUnInstall(This) )
#endif
#endif
typedef enum __MIDL___MIDL_itf_casetup_0000_0003_0001
{
	ENUM_CEPSETUPPROP_USELOCALSYSTEM = 0,
	ENUM_CEPSETUPPROP_USECHALLENGE = 1,
	ENUM_CEPSETUPPROP_RANAME_CN = 2,
	ENUM_CEPSETUPPROP_RANAME_EMAIL = 3,
	ENUM_CEPSETUPPROP_RANAME_COMPANY = 4,
	ENUM_CEPSETUPPROP_RANAME_DEPT = 5,
	ENUM_CEPSETUPPROP_RANAME_CITY = 6,
	ENUM_CEPSETUPPROP_RANAME_STATE = 7,
	ENUM_CEPSETUPPROP_RANAME_COUNTRY = 8,
	ENUM_CEPSETUPPROP_SIGNINGKEYINFORMATION = 9,
	ENUM_CEPSETUPPROP_EXCHANGEKEYINFORMATION = 10,
	ENUM_CEPSETUPPROP_CAINFORMATION = 11,
	ENUM_CEPSETUPPROP_MSCEPURL = 12,
	ENUM_CEPSETUPPROP_CHALLENGEURL = 13
} MSCEPSetupProperty;
extern RPC_IF_HANDLE __MIDL_itf_casetup_0000_0003_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_casetup_0000_0003_v0_0_s_ifspec;
#ifndef __IMSCEPSetup_INTERFACE_DEFINED__
#define __IMSCEPSetup_INTERFACE_DEFINED__
extern const IID IID_IMSCEPSetup;
typedef struct IMSCEPSetupVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IMSCEPSetup * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IMSCEPSetup * This);
	ULONG(STDMETHODCALLTYPE * Release) (IMSCEPSetup * This);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfoCount) (IMSCEPSetup * This, UINT * pctinfo);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfo) (IMSCEPSetup * This, UINT iTInfo, LCID lcid, ITypeInfo ** ppTInfo);
	HRESULT(STDMETHODCALLTYPE * GetIDsOfNames) (IMSCEPSetup * This, REFIID riid, LPOLESTR * rgszNames, UINT cNames, LCID lcid, DISPID * rgDispId);
	HRESULT(STDMETHODCALLTYPE * Invoke) (IMSCEPSetup * This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS * pDispParams, VARIANT * pVarResult, EXCEPINFO * pExcepInfo, UINT * puArgErr);
	HRESULT(STDMETHODCALLTYPE * get_MSCEPErrorId) (IMSCEPSetup * This, LONG * pVal);
	HRESULT(STDMETHODCALLTYPE * get_MSCEPErrorString) (IMSCEPSetup * This, BSTR * pVal);
	HRESULT(STDMETHODCALLTYPE * InitializeDefaults) (IMSCEPSetup * This);
	HRESULT(STDMETHODCALLTYPE * GetMSCEPSetupProperty) (IMSCEPSetup * This, MSCEPSetupProperty propertyId, VARIANT * pVal);
	HRESULT(STDMETHODCALLTYPE * SetMSCEPSetupProperty) (IMSCEPSetup * This, MSCEPSetupProperty propertyId, VARIANT * pPropertyValue);
	HRESULT(STDMETHODCALLTYPE * SetAccountInformation) (IMSCEPSetup * This, const BSTR bstrUserName, const BSTR bstrPassword);
	HRESULT(STDMETHODCALLTYPE * IsMSCEPStoreEmpty) (IMSCEPSetup * This, VARIANT_BOOL * pbEmpty);
	HRESULT(STDMETHODCALLTYPE * GetProviderNameList) (IMSCEPSetup * This, VARIANT_BOOL bExchange, VARIANT * pVal);
	HRESULT(STDMETHODCALLTYPE * GetKeyLengthList) (IMSCEPSetup * This, VARIANT_BOOL bExchange, const BSTR bstrProviderName, VARIANT * pVal);
	HRESULT(STDMETHODCALLTYPE * Install) (IMSCEPSetup * This);
	HRESULT(STDMETHODCALLTYPE * PreUnInstall) (IMSCEPSetup * This);
	HRESULT(STDMETHODCALLTYPE * PostUnInstall) (IMSCEPSetup * This);
	END_INTERFACE
}  IMSCEPSetupVtbl;
interface IMSCEPSetup
{
	CONST_VTBL struct IMSCEPSetupVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IMSCEPSetup_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IMSCEPSetup_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define IMSCEPSetup_Release(This)( (This)->lpVtbl -> Release(This) )
#define IMSCEPSetup_GetTypeInfoCount(This,pctinfo)( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define IMSCEPSetup_GetTypeInfo(This,iTInfo,lcid,ppTInfo)( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define IMSCEPSetup_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define IMSCEPSetup_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define IMSCEPSetup_get_MSCEPErrorId(This,pVal)( (This)->lpVtbl -> get_MSCEPErrorId(This,pVal) )
#define IMSCEPSetup_get_MSCEPErrorString(This,pVal)( (This)->lpVtbl -> get_MSCEPErrorString(This,pVal) )
#define IMSCEPSetup_InitializeDefaults(This)( (This)->lpVtbl -> InitializeDefaults(This) )
#define IMSCEPSetup_GetMSCEPSetupProperty(This,propertyId,pVal)( (This)->lpVtbl -> GetMSCEPSetupProperty(This,propertyId,pVal) )
#define IMSCEPSetup_SetMSCEPSetupProperty(This,propertyId,pPropertyValue)( (This)->lpVtbl -> SetMSCEPSetupProperty(This,propertyId,pPropertyValue) )
#define IMSCEPSetup_SetAccountInformation(This,bstrUserName,bstrPassword)( (This)->lpVtbl -> SetAccountInformation(This,bstrUserName,bstrPassword) )
#define IMSCEPSetup_IsMSCEPStoreEmpty(This,pbEmpty)( (This)->lpVtbl -> IsMSCEPStoreEmpty(This,pbEmpty) )
#define IMSCEPSetup_GetProviderNameList(This,bExchange,pVal)( (This)->lpVtbl -> GetProviderNameList(This,bExchange,pVal) )
#define IMSCEPSetup_GetKeyLengthList(This,bExchange,bstrProviderName,pVal)( (This)->lpVtbl -> GetKeyLengthList(This,bExchange,bstrProviderName,pVal) )
#define IMSCEPSetup_Install(This)( (This)->lpVtbl -> Install(This) )
#define IMSCEPSetup_PreUnInstall(This)( (This)->lpVtbl -> PreUnInstall(This) )
#define IMSCEPSetup_PostUnInstall(This)( (This)->lpVtbl -> PostUnInstall(This) )
#endif
#endif
typedef enum __MIDL___MIDL_itf_casetup_0000_0004_0001
{
	ENUM_CESSETUPPROP_USE_IISAPPPOOLIDENTITY = 0,
	ENUM_CESSETUPPROP_CACONFIG = 1,
	ENUM_CESSETUPPROP_AUTHENTICATION = 2,
	ENUM_CESSETUPPROP_SSLCERTHASH = 3,
	ENUM_CESSETUPPROP_URL = 4,
	ENUM_CESSETUPPROP_RENEWALONLY = 5
} CESSetupProperty;
extern RPC_IF_HANDLE __MIDL_itf_casetup_0000_0004_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_casetup_0000_0004_v0_0_s_ifspec;
#ifndef __ICertificateEnrollmentServerSetup_INTERFACE_DEFINED__
#define __ICertificateEnrollmentServerSetup_INTERFACE_DEFINED__
extern const IID IID_ICertificateEnrollmentServerSetup;
typedef struct ICertificateEnrollmentServerSetupVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (ICertificateEnrollmentServerSetup * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (ICertificateEnrollmentServerSetup * This);
	ULONG(STDMETHODCALLTYPE * Release) (ICertificateEnrollmentServerSetup * This);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfoCount) (ICertificateEnrollmentServerSetup * This, UINT * pctinfo);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfo) (ICertificateEnrollmentServerSetup * This, UINT iTInfo, LCID lcid, ITypeInfo ** ppTInfo);
	HRESULT(STDMETHODCALLTYPE * GetIDsOfNames) (ICertificateEnrollmentServerSetup * This, REFIID riid, LPOLESTR * rgszNames, UINT cNames, LCID lcid, DISPID * rgDispId);
	HRESULT(STDMETHODCALLTYPE * Invoke) (ICertificateEnrollmentServerSetup * This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS * pDispParams, VARIANT * pVarResult, EXCEPINFO * pExcepInfo, UINT * puArgErr);
	HRESULT(STDMETHODCALLTYPE * get_ErrorString) (ICertificateEnrollmentServerSetup * This, BSTR * pVal);
	HRESULT(STDMETHODCALLTYPE * InitializeInstallDefaults) (ICertificateEnrollmentServerSetup * This);
	HRESULT(STDMETHODCALLTYPE * GetProperty) (ICertificateEnrollmentServerSetup * This, CESSetupProperty propertyId, VARIANT * pPropertyValue);
	HRESULT(STDMETHODCALLTYPE * SetProperty) (ICertificateEnrollmentServerSetup * This, CESSetupProperty propertyId, VARIANT * pPropertyValue);
	HRESULT(STDMETHODCALLTYPE * SetApplicationPoolCredentials) (ICertificateEnrollmentServerSetup * This, const BSTR bstrUsername, const BSTR bstrPassword);
	HRESULT(STDMETHODCALLTYPE * Install) (ICertificateEnrollmentServerSetup * This);
	HRESULT(STDMETHODCALLTYPE * UnInstall) (ICertificateEnrollmentServerSetup * This, VARIANT * pCAConfig, VARIANT * pAuthentication);
	END_INTERFACE
}  ICertificateEnrollmentServerSetupVtbl;
interface ICertificateEnrollmentServerSetup
{
	CONST_VTBL struct ICertificateEnrollmentServerSetupVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define ICertificateEnrollmentServerSetup_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define ICertificateEnrollmentServerSetup_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define ICertificateEnrollmentServerSetup_Release(This)( (This)->lpVtbl -> Release(This) )
#define ICertificateEnrollmentServerSetup_GetTypeInfoCount(This,pctinfo)( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define ICertificateEnrollmentServerSetup_GetTypeInfo(This,iTInfo,lcid,ppTInfo)( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define ICertificateEnrollmentServerSetup_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define ICertificateEnrollmentServerSetup_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define ICertificateEnrollmentServerSetup_get_ErrorString(This,pVal)( (This)->lpVtbl -> get_ErrorString(This,pVal) )
#define ICertificateEnrollmentServerSetup_InitializeInstallDefaults(This)( (This)->lpVtbl -> InitializeInstallDefaults(This) )
#define ICertificateEnrollmentServerSetup_GetProperty(This,propertyId,pPropertyValue)( (This)->lpVtbl -> GetProperty(This,propertyId,pPropertyValue) )
#define ICertificateEnrollmentServerSetup_SetProperty(This,propertyId,pPropertyValue)( (This)->lpVtbl -> SetProperty(This,propertyId,pPropertyValue) )
#define ICertificateEnrollmentServerSetup_SetApplicationPoolCredentials(This,bstrUsername,bstrPassword)( (This)->lpVtbl -> SetApplicationPoolCredentials(This,bstrUsername,bstrPassword) )
#define ICertificateEnrollmentServerSetup_Install(This)( (This)->lpVtbl -> Install(This) )
#define ICertificateEnrollmentServerSetup_UnInstall(This,pCAConfig,pAuthentication)( (This)->lpVtbl -> UnInstall(This,pCAConfig,pAuthentication) )
#endif
#endif
typedef enum __MIDL___MIDL_itf_casetup_0000_0005_0001
{
	ENUM_CEPSETUPPROP_AUTHENTICATION = 0,
	ENUM_CEPSETUPPROP_SSLCERTHASH = 1,
	ENUM_CEPSETUPPROP_URL = 2
} CEPSetupProperty;
extern RPC_IF_HANDLE __MIDL_itf_casetup_0000_0005_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_casetup_0000_0005_v0_0_s_ifspec;
#ifndef __ICertificateEnrollmentPolicyServerSetup_INTERFACE_DEFINED__
#define __ICertificateEnrollmentPolicyServerSetup_INTERFACE_DEFINED__
extern const IID IID_ICertificateEnrollmentPolicyServerSetup;
typedef struct ICertificateEnrollmentPolicyServerSetupVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (ICertificateEnrollmentPolicyServerSetup * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (ICertificateEnrollmentPolicyServerSetup * This);
	ULONG(STDMETHODCALLTYPE * Release) (ICertificateEnrollmentPolicyServerSetup * This);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfoCount) (ICertificateEnrollmentPolicyServerSetup * This, UINT * pctinfo);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfo) (ICertificateEnrollmentPolicyServerSetup * This, UINT iTInfo, LCID lcid, ITypeInfo ** ppTInfo);
	HRESULT(STDMETHODCALLTYPE * GetIDsOfNames) (ICertificateEnrollmentPolicyServerSetup * This, REFIID riid, LPOLESTR * rgszNames, UINT cNames, LCID lcid, DISPID * rgDispId);
	HRESULT(STDMETHODCALLTYPE * Invoke) (ICertificateEnrollmentPolicyServerSetup * This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS * pDispParams, VARIANT * pVarResult, EXCEPINFO * pExcepInfo, UINT * puArgErr);
	HRESULT(STDMETHODCALLTYPE * get_ErrorString) (ICertificateEnrollmentPolicyServerSetup * This, BSTR * pVal);
	HRESULT(STDMETHODCALLTYPE * InitializeInstallDefaults) (ICertificateEnrollmentPolicyServerSetup * This);
	HRESULT(STDMETHODCALLTYPE * GetProperty) (ICertificateEnrollmentPolicyServerSetup * This, CEPSetupProperty propertyId, VARIANT * pPropertyValue);
	HRESULT(STDMETHODCALLTYPE * SetProperty) (ICertificateEnrollmentPolicyServerSetup * This, CEPSetupProperty propertyId, VARIANT * pPropertyValue);
	HRESULT(STDMETHODCALLTYPE * Install) (ICertificateEnrollmentPolicyServerSetup * This);
	HRESULT(STDMETHODCALLTYPE * UnInstall) (ICertificateEnrollmentPolicyServerSetup * This, VARIANT * pReserved);
	END_INTERFACE
}  ICertificateEnrollmentPolicyServerSetupVtbl;
interface ICertificateEnrollmentPolicyServerSetup
{
	CONST_VTBL struct ICertificateEnrollmentPolicyServerSetupVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define ICertificateEnrollmentPolicyServerSetup_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define ICertificateEnrollmentPolicyServerSetup_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define ICertificateEnrollmentPolicyServerSetup_Release(This)( (This)->lpVtbl -> Release(This) )
#define ICertificateEnrollmentPolicyServerSetup_GetTypeInfoCount(This,pctinfo)( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define ICertificateEnrollmentPolicyServerSetup_GetTypeInfo(This,iTInfo,lcid,ppTInfo)( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define ICertificateEnrollmentPolicyServerSetup_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define ICertificateEnrollmentPolicyServerSetup_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define ICertificateEnrollmentPolicyServerSetup_get_ErrorString(This,pVal)( (This)->lpVtbl -> get_ErrorString(This,pVal) )
#define ICertificateEnrollmentPolicyServerSetup_InitializeInstallDefaults(This)( (This)->lpVtbl -> InitializeInstallDefaults(This) )
#define ICertificateEnrollmentPolicyServerSetup_GetProperty(This,propertyId,pPropertyValue)( (This)->lpVtbl -> GetProperty(This,propertyId,pPropertyValue) )
#define ICertificateEnrollmentPolicyServerSetup_SetProperty(This,propertyId,pPropertyValue)( (This)->lpVtbl -> SetProperty(This,propertyId,pPropertyValue) )
#define ICertificateEnrollmentPolicyServerSetup_Install(This)( (This)->lpVtbl -> Install(This) )
#define ICertificateEnrollmentPolicyServerSetup_UnInstall(This,pReserved)( (This)->lpVtbl -> UnInstall(This,pReserved) )
#endif
#endif
#ifndef __CertSrvSetupLib_LIBRARY_DEFINED__
#define __CertSrvSetupLib_LIBRARY_DEFINED__
extern const IID LIBID_CertSrvSetupLib;
extern const CLSID CLSID_CCertSrvSetupKeyInformation;
extern const CLSID CLSID_CCertSrvSetup;
extern const CLSID CLSID_CMSCEPSetup;
extern const CLSID CLSID_CCertificateEnrollmentServerSetup;
extern const CLSID CLSID_CCertificateEnrollmentPolicyServerSetup;
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
#endif

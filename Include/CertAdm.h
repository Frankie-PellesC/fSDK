/*+@@file@@----------------------------------------------------------------*//*!
 \file		CertAdm.h
 \par Description 
            Extension and update of headers for PellesC compiler suite.
 \par Project: 
            PellesC Headers extension
 \date		Created  on Thu Jun 30 13:55:41 2016
 \date		Modified on Thu Jun 30 13:55:41 2016
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
#ifndef __certadm_h__
#define __certadm_h__
#if __POCC__ >= 500
#pragma once
#endif
#ifndef __ICertAdmin_FWD_DEFINED__
#define __ICertAdmin_FWD_DEFINED__
typedef interface ICertAdmin ICertAdmin;
#endif
#ifndef __ICertAdmin2_FWD_DEFINED__
#define __ICertAdmin2_FWD_DEFINED__
typedef interface ICertAdmin2 ICertAdmin2;
#endif
#ifndef __IOCSPProperty_FWD_DEFINED__
#define __IOCSPProperty_FWD_DEFINED__
typedef interface IOCSPProperty IOCSPProperty;
#endif
#ifndef __IOCSPPropertyCollection_FWD_DEFINED__
#define __IOCSPPropertyCollection_FWD_DEFINED__
typedef interface IOCSPPropertyCollection IOCSPPropertyCollection;
#endif
#ifndef __IOCSPCAConfiguration_FWD_DEFINED__
#define __IOCSPCAConfiguration_FWD_DEFINED__
typedef interface IOCSPCAConfiguration IOCSPCAConfiguration;
#endif
#ifndef __IOCSPCAConfigurationCollection_FWD_DEFINED__
#define __IOCSPCAConfigurationCollection_FWD_DEFINED__
typedef interface IOCSPCAConfigurationCollection IOCSPCAConfigurationCollection;
#endif
#ifndef __IOCSPAdmin_FWD_DEFINED__
#define __IOCSPAdmin_FWD_DEFINED__
typedef interface IOCSPAdmin IOCSPAdmin;
#endif
#ifndef __CCertAdmin_FWD_DEFINED__
#define __CCertAdmin_FWD_DEFINED__
typedef struct CCertAdmin CCertAdmin;
#endif
#ifndef __CCertView_FWD_DEFINED__
#define __CCertView_FWD_DEFINED__
typedef struct CCertView CCertView;
#endif
#ifndef __OCSPPropertyCollection_FWD_DEFINED__
#define __OCSPPropertyCollection_FWD_DEFINED__
typedef struct OCSPPropertyCollection OCSPPropertyCollection;
#endif
#ifndef __OCSPAdmin_FWD_DEFINED__
#define __OCSPAdmin_FWD_DEFINED__
typedef struct OCSPAdmin OCSPAdmin;
#endif
#include "wtypes.h"
#include "certview.h"
#define	CA_DISP_INCOMPLETE	( 0 )
#define	CA_DISP_ERROR	( 0x1 )
#define	CA_DISP_REVOKED	( 0x2 )
#define	CA_DISP_VALID	( 0x3 )
#define	CA_DISP_INVALID	( 0x4 )
#define	CA_DISP_UNDER_SUBMISSION	( 0x5 )
#define	KRA_DISP_EXPIRED	( 0 )
#define	KRA_DISP_NOTFOUND	( 0x1 )
#define	KRA_DISP_REVOKED	( 0x2 )
#define	KRA_DISP_VALID	( 0x3 )
#define	KRA_DISP_INVALID	( 0x4 )
#define	KRA_DISP_UNTRUSTED	( 0x5 )
#define	KRA_DISP_NOTLOADED	( 0x6 )
#define	CA_ACCESS_ADMIN	( 0x1 )
#define	CA_ACCESS_OFFICER	( 0x2 )
#define	CA_ACCESS_AUDITOR	( 0x4 )
#define	CA_ACCESS_OPERATOR	( 0x8 )
#define	CA_ACCESS_MASKROLES	( 0xff )
#define	CA_ACCESS_READ	( 0x100 )
#define	CA_ACCESS_ENROLL	( 0x200 )
extern RPC_IF_HANDLE __MIDL_itf_certadm_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_certadm_0000_0000_v0_0_s_ifspec;
#ifndef __ICertAdmin_INTERFACE_DEFINED__
#define __ICertAdmin_INTERFACE_DEFINED__
extern const IID IID_ICertAdmin;
typedef struct ICertAdminVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (ICertAdmin * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (ICertAdmin * This);
	ULONG(STDMETHODCALLTYPE * Release) (ICertAdmin * This);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfoCount) (ICertAdmin * This, UINT * pctinfo);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfo) (ICertAdmin * This, UINT iTInfo, LCID lcid, ITypeInfo ** ppTInfo);
	HRESULT(STDMETHODCALLTYPE * GetIDsOfNames) (ICertAdmin * This, REFIID riid, LPOLESTR * rgszNames, UINT cNames, LCID lcid, DISPID * rgDispId);
	HRESULT(STDMETHODCALLTYPE * Invoke) (ICertAdmin * This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS * pDispParams, VARIANT * pVarResult, EXCEPINFO * pExcepInfo, UINT * puArgErr);
	HRESULT(STDMETHODCALLTYPE * IsValidCertificate) (ICertAdmin * This, const BSTR strConfig, const BSTR strSerialNumber, LONG * pDisposition);
	HRESULT(STDMETHODCALLTYPE * GetRevocationReason) (ICertAdmin * This, LONG * pReason);
	HRESULT(STDMETHODCALLTYPE * RevokeCertificate) (ICertAdmin * This, const BSTR strConfig, const BSTR strSerialNumber, LONG Reason, DATE Date);
	HRESULT(STDMETHODCALLTYPE * SetRequestAttributes) (ICertAdmin * This, const BSTR strConfig, LONG RequestId, const BSTR strAttributes);
	HRESULT(STDMETHODCALLTYPE * SetCertificateExtension) (ICertAdmin * This, const BSTR strConfig, LONG RequestId, const BSTR strExtensionName, LONG Type, LONG Flags, const VARIANT * pvarValue);
	HRESULT(STDMETHODCALLTYPE * DenyRequest) (ICertAdmin * This, const BSTR strConfig, LONG RequestId);
	HRESULT(STDMETHODCALLTYPE * ResubmitRequest) (ICertAdmin * This, const BSTR strConfig, LONG RequestId, LONG * pDisposition);
	HRESULT(STDMETHODCALLTYPE * PublishCRL) (ICertAdmin * This, const BSTR strConfig, DATE Date);
	HRESULT(STDMETHODCALLTYPE * GetCRL) (ICertAdmin * This, const BSTR strConfig, LONG Flags, BSTR * pstrCRL);
	HRESULT(STDMETHODCALLTYPE * ImportCertificate) (ICertAdmin * This, const BSTR strConfig, const BSTR strCertificate, LONG Flags, LONG * pRequestId);
	END_INTERFACE
}
ICertAdminVtbl;
interface ICertAdmin
{
	CONST_VTBL struct ICertAdminVtbl *lpVtbl;
}
;
#ifdef COBJMACROS
#define ICertAdmin_QueryInterface(This,riid,ppvObject)    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define ICertAdmin_AddRef(This)    ( (This)->lpVtbl -> AddRef(This) )
#define ICertAdmin_Release(This)    ( (This)->lpVtbl -> Release(This) )
#define ICertAdmin_GetTypeInfoCount(This,pctinfo)    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define ICertAdmin_GetTypeInfo(This,iTInfo,lcid,ppTInfo)    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define ICertAdmin_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define ICertAdmin_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define ICertAdmin_IsValidCertificate(This,strConfig,strSerialNumber,pDisposition)    ( (This)->lpVtbl -> IsValidCertificate(This,strConfig,strSerialNumber,pDisposition) )
#define ICertAdmin_GetRevocationReason(This,pReason)    ( (This)->lpVtbl -> GetRevocationReason(This,pReason) )
#define ICertAdmin_RevokeCertificate(This,strConfig,strSerialNumber,Reason,Date)    ( (This)->lpVtbl -> RevokeCertificate(This,strConfig,strSerialNumber,Reason,Date) )
#define ICertAdmin_SetRequestAttributes(This,strConfig,RequestId,strAttributes)    ( (This)->lpVtbl -> SetRequestAttributes(This,strConfig,RequestId,strAttributes) )
#define ICertAdmin_SetCertificateExtension(This,strConfig,RequestId,strExtensionName,Type,Flags,pvarValue)    ( (This)->lpVtbl -> SetCertificateExtension(This,strConfig,RequestId,strExtensionName,Type,Flags,pvarValue) )
#define ICertAdmin_DenyRequest(This,strConfig,RequestId)    ( (This)->lpVtbl -> DenyRequest(This,strConfig,RequestId) )
#define ICertAdmin_ResubmitRequest(This,strConfig,RequestId,pDisposition)    ( (This)->lpVtbl -> ResubmitRequest(This,strConfig,RequestId,pDisposition) )
#define ICertAdmin_PublishCRL(This,strConfig,Date)    ( (This)->lpVtbl -> PublishCRL(This,strConfig,Date) )
#define ICertAdmin_GetCRL(This,strConfig,Flags,pstrCRL)    ( (This)->lpVtbl -> GetCRL(This,strConfig,Flags,pstrCRL) )
#define ICertAdmin_ImportCertificate(This,strConfig,strCertificate,Flags,pRequestId)    ( (This)->lpVtbl -> ImportCertificate(This,strConfig,strCertificate,Flags,pRequestId) )
#endif
#endif
#define	CA_CRL_BASE	( 0x1 )
#define	CA_CRL_DELTA	( 0x2 )
#define	CA_CRL_REPUBLISH	( 0x10 )
#define	ICF_ALLOWFOREIGN	( 0x10000 )
#define	ICF_EXISTINGROW	( 0x20000 )
#define	IKF_OVERWRITE	( 0x10000 )
#define	CDR_EXPIRED	( 1 )
#define	CDR_REQUEST_LAST_CHANGED	( 2 )
extern RPC_IF_HANDLE __MIDL_itf_certadm_0000_0001_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_certadm_0000_0001_v0_0_s_ifspec;
#ifndef __ICertAdmin2_INTERFACE_DEFINED__
#define __ICertAdmin2_INTERFACE_DEFINED__
extern const IID IID_ICertAdmin2;
typedef struct ICertAdmin2Vtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (ICertAdmin2 * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (ICertAdmin2 * This);
	ULONG(STDMETHODCALLTYPE * Release) (ICertAdmin2 * This);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfoCount) (ICertAdmin2 * This, UINT * pctinfo);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfo) (ICertAdmin2 * This, UINT iTInfo, LCID lcid, ITypeInfo ** ppTInfo);
	HRESULT(STDMETHODCALLTYPE * GetIDsOfNames) (ICertAdmin2 * This, REFIID riid, LPOLESTR * rgszNames, UINT cNames, LCID lcid, DISPID * rgDispId);
	HRESULT(STDMETHODCALLTYPE * Invoke) (ICertAdmin2 * This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS * pDispParams, VARIANT * pVarResult, EXCEPINFO * pExcepInfo, UINT * puArgErr);
	HRESULT(STDMETHODCALLTYPE * IsValidCertificate) (ICertAdmin2 * This, const BSTR strConfig, const BSTR strSerialNumber, LONG * pDisposition);
	HRESULT(STDMETHODCALLTYPE * GetRevocationReason) (ICertAdmin2 * This, LONG * pReason);
	HRESULT(STDMETHODCALLTYPE * RevokeCertificate) (ICertAdmin2 * This, const BSTR strConfig, const BSTR strSerialNumber, LONG Reason, DATE Date);
	HRESULT(STDMETHODCALLTYPE * SetRequestAttributes) (ICertAdmin2 * This, const BSTR strConfig, LONG RequestId, const BSTR strAttributes);
	HRESULT(STDMETHODCALLTYPE * SetCertificateExtension) (ICertAdmin2 * This, const BSTR strConfig, LONG RequestId, const BSTR strExtensionName, LONG Type, LONG Flags, const VARIANT * pvarValue);
	HRESULT(STDMETHODCALLTYPE * DenyRequest) (ICertAdmin2 * This, const BSTR strConfig, LONG RequestId);
	HRESULT(STDMETHODCALLTYPE * ResubmitRequest) (ICertAdmin2 * This, const BSTR strConfig, LONG RequestId, LONG * pDisposition);
	HRESULT(STDMETHODCALLTYPE * PublishCRL) (ICertAdmin2 * This, const BSTR strConfig, DATE Date);
	HRESULT(STDMETHODCALLTYPE * GetCRL) (ICertAdmin2 * This, const BSTR strConfig, LONG Flags, BSTR * pstrCRL);
	HRESULT(STDMETHODCALLTYPE * ImportCertificate) (ICertAdmin2 * This, const BSTR strConfig, const BSTR strCertificate, LONG Flags, LONG * pRequestId);
	HRESULT(STDMETHODCALLTYPE * PublishCRLs) (ICertAdmin2 * This, const BSTR strConfig, DATE Date, LONG CRLFlags);
	HRESULT(STDMETHODCALLTYPE * GetCAProperty) (ICertAdmin2 * This, const BSTR strConfig, LONG PropId, LONG PropIndex, LONG PropType, LONG Flags, VARIANT * pvarPropertyValue);
	HRESULT(STDMETHODCALLTYPE * SetCAProperty) (ICertAdmin2 * This, const BSTR strConfig, LONG PropId, LONG PropIndex, LONG PropType, VARIANT * pvarPropertyValue);
	HRESULT(STDMETHODCALLTYPE * GetCAPropertyFlags) (ICertAdmin2 * This, const BSTR strConfig, LONG PropId, LONG * pPropFlags);
	HRESULT(STDMETHODCALLTYPE * GetCAPropertyDisplayName) (ICertAdmin2 * This, const BSTR strConfig, LONG PropId, BSTR * pstrDisplayName);
	HRESULT(STDMETHODCALLTYPE * GetArchivedKey) (ICertAdmin2 * This, const BSTR strConfig, LONG RequestId, LONG Flags, BSTR * pstrArchivedKey);
	HRESULT(STDMETHODCALLTYPE * GetConfigEntry) (ICertAdmin2 * This, const BSTR strConfig, const BSTR strNodePath, const BSTR strEntryName, VARIANT * pvarEntry);
	HRESULT(STDMETHODCALLTYPE * SetConfigEntry) (ICertAdmin2 * This, const BSTR strConfig, const BSTR strNodePath, const BSTR strEntryName, VARIANT * pvarEntry);
	HRESULT(STDMETHODCALLTYPE * ImportKey) (ICertAdmin2 * This, const BSTR strConfig, LONG RequestId, const BSTR strCertHash, LONG Flags, const BSTR strKey);
	HRESULT(STDMETHODCALLTYPE * GetMyRoles) (ICertAdmin2 * This, const BSTR strConfig, LONG * pRoles);
	HRESULT(STDMETHODCALLTYPE * DeleteRow) (ICertAdmin2 * This, const BSTR strConfig, LONG Flags, DATE Date, LONG Table, LONG RowId, LONG * pcDeleted);
	END_INTERFACE
}
ICertAdmin2Vtbl;
interface ICertAdmin2
{
	CONST_VTBL struct ICertAdmin2Vtbl *lpVtbl;
}
;
#ifdef COBJMACROS
#define ICertAdmin2_QueryInterface(This,riid,ppvObject)    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define ICertAdmin2_AddRef(This)    ( (This)->lpVtbl -> AddRef(This) )
#define ICertAdmin2_Release(This)    ( (This)->lpVtbl -> Release(This) )
#define ICertAdmin2_GetTypeInfoCount(This,pctinfo)    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define ICertAdmin2_GetTypeInfo(This,iTInfo,lcid,ppTInfo)    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define ICertAdmin2_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define ICertAdmin2_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define ICertAdmin2_IsValidCertificate(This,strConfig,strSerialNumber,pDisposition)    ( (This)->lpVtbl -> IsValidCertificate(This,strConfig,strSerialNumber,pDisposition) )
#define ICertAdmin2_GetRevocationReason(This,pReason)    ( (This)->lpVtbl -> GetRevocationReason(This,pReason) )
#define ICertAdmin2_RevokeCertificate(This,strConfig,strSerialNumber,Reason,Date)    ( (This)->lpVtbl -> RevokeCertificate(This,strConfig,strSerialNumber,Reason,Date) )
#define ICertAdmin2_SetRequestAttributes(This,strConfig,RequestId,strAttributes)    ( (This)->lpVtbl -> SetRequestAttributes(This,strConfig,RequestId,strAttributes) )
#define ICertAdmin2_SetCertificateExtension(This,strConfig,RequestId,strExtensionName,Type,Flags,pvarValue)    ( (This)->lpVtbl -> SetCertificateExtension(This,strConfig,RequestId,strExtensionName,Type,Flags,pvarValue) )
#define ICertAdmin2_DenyRequest(This,strConfig,RequestId)    ( (This)->lpVtbl -> DenyRequest(This,strConfig,RequestId) )
#define ICertAdmin2_ResubmitRequest(This,strConfig,RequestId,pDisposition)    ( (This)->lpVtbl -> ResubmitRequest(This,strConfig,RequestId,pDisposition) )
#define ICertAdmin2_PublishCRL(This,strConfig,Date)    ( (This)->lpVtbl -> PublishCRL(This,strConfig,Date) )
#define ICertAdmin2_GetCRL(This,strConfig,Flags,pstrCRL)    ( (This)->lpVtbl -> GetCRL(This,strConfig,Flags,pstrCRL) )
#define ICertAdmin2_ImportCertificate(This,strConfig,strCertificate,Flags,pRequestId)    ( (This)->lpVtbl -> ImportCertificate(This,strConfig,strCertificate,Flags,pRequestId) )
#define ICertAdmin2_PublishCRLs(This,strConfig,Date,CRLFlags)    ( (This)->lpVtbl -> PublishCRLs(This,strConfig,Date,CRLFlags) )
#define ICertAdmin2_GetCAProperty(This,strConfig,PropId,PropIndex,PropType,Flags,pvarPropertyValue)    ( (This)->lpVtbl -> GetCAProperty(This,strConfig,PropId,PropIndex,PropType,Flags,pvarPropertyValue) )
#define ICertAdmin2_SetCAProperty(This,strConfig,PropId,PropIndex,PropType,pvarPropertyValue)    ( (This)->lpVtbl -> SetCAProperty(This,strConfig,PropId,PropIndex,PropType,pvarPropertyValue) )
#define ICertAdmin2_GetCAPropertyFlags(This,strConfig,PropId,pPropFlags)    ( (This)->lpVtbl -> GetCAPropertyFlags(This,strConfig,PropId,pPropFlags) )
#define ICertAdmin2_GetCAPropertyDisplayName(This,strConfig,PropId,pstrDisplayName)    ( (This)->lpVtbl -> GetCAPropertyDisplayName(This,strConfig,PropId,pstrDisplayName) )
#define ICertAdmin2_GetArchivedKey(This,strConfig,RequestId,Flags,pstrArchivedKey)    ( (This)->lpVtbl -> GetArchivedKey(This,strConfig,RequestId,Flags,pstrArchivedKey) )
#define ICertAdmin2_GetConfigEntry(This,strConfig,strNodePath,strEntryName,pvarEntry)    ( (This)->lpVtbl -> GetConfigEntry(This,strConfig,strNodePath,strEntryName,pvarEntry) )
#define ICertAdmin2_SetConfigEntry(This,strConfig,strNodePath,strEntryName,pvarEntry)    ( (This)->lpVtbl -> SetConfigEntry(This,strConfig,strNodePath,strEntryName,pvarEntry) )
#define ICertAdmin2_ImportKey(This,strConfig,RequestId,strCertHash,Flags,strKey)    ( (This)->lpVtbl -> ImportKey(This,strConfig,RequestId,strCertHash,Flags,strKey) )
#define ICertAdmin2_GetMyRoles(This,strConfig,pRoles)    ( (This)->lpVtbl -> GetMyRoles(This,strConfig,pRoles) )
#define ICertAdmin2_DeleteRow(This,strConfig,Flags,Date,Table,RowId,pcDeleted)    ( (This)->lpVtbl -> DeleteRow(This,strConfig,Flags,Date,Table,RowId,pcDeleted) )
#endif
#endif
#ifndef __IOCSPProperty_INTERFACE_DEFINED__
#define __IOCSPProperty_INTERFACE_DEFINED__
extern const IID IID_IOCSPProperty;
typedef struct IOCSPPropertyVtbl
{
BEGIN_INTERFACE
HRESULT(STDMETHODCALLTYPE * QueryInterface) (IOCSPProperty * This, REFIID riid, void **ppvObject);
ULONG(STDMETHODCALLTYPE * AddRef) (IOCSPProperty * This);
ULONG(STDMETHODCALLTYPE * Release) (IOCSPProperty * This);
HRESULT(STDMETHODCALLTYPE * GetTypeInfoCount) (IOCSPProperty * This, UINT * pctinfo);
HRESULT(STDMETHODCALLTYPE * GetTypeInfo) (IOCSPProperty * This, UINT iTInfo, LCID lcid, ITypeInfo ** ppTInfo);
HRESULT(STDMETHODCALLTYPE * GetIDsOfNames) (IOCSPProperty * This, REFIID riid, LPOLESTR * rgszNames, UINT cNames, LCID lcid, DISPID * rgDispId);
HRESULT(STDMETHODCALLTYPE * Invoke) (IOCSPProperty * This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS * pDispParams, VARIANT * pVarResult, EXCEPINFO * pExcepInfo, UINT * puArgErr);
HRESULT(STDMETHODCALLTYPE * get_Name) (IOCSPProperty * This, BSTR * pVal);
HRESULT(STDMETHODCALLTYPE * get_Value) (IOCSPProperty * This, VARIANT * pVal);
HRESULT(STDMETHODCALLTYPE * put_Value) (IOCSPProperty * This, VARIANT newVal);
HRESULT(STDMETHODCALLTYPE * get_Modified) (IOCSPProperty * This, VARIANT_BOOL * pVal);
END_INTERFACE
}
IOCSPPropertyVtbl;
interface IOCSPProperty
{
	CONST_VTBL struct IOCSPPropertyVtbl *lpVtbl;
}
;
#ifdef COBJMACROS
#define IOCSPProperty_QueryInterface(This,riid,ppvObject)    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IOCSPProperty_AddRef(This)    ( (This)->lpVtbl -> AddRef(This) )
#define IOCSPProperty_Release(This)    ( (This)->lpVtbl -> Release(This) )
#define IOCSPProperty_GetTypeInfoCount(This,pctinfo)    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define IOCSPProperty_GetTypeInfo(This,iTInfo,lcid,ppTInfo)    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define IOCSPProperty_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define IOCSPProperty_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define IOCSPProperty_get_Name(This,pVal)    ( (This)->lpVtbl -> get_Name(This,pVal) )
#define IOCSPProperty_get_Value(This,pVal)    ( (This)->lpVtbl -> get_Value(This,pVal) )
#define IOCSPProperty_put_Value(This,newVal)    ( (This)->lpVtbl -> put_Value(This,newVal) )
#define IOCSPProperty_get_Modified(This,pVal)    ( (This)->lpVtbl -> get_Modified(This,pVal) )
#endif
#endif
#ifndef __IOCSPPropertyCollection_INTERFACE_DEFINED__
#define __IOCSPPropertyCollection_INTERFACE_DEFINED__
extern const IID IID_IOCSPPropertyCollection;
typedef struct IOCSPPropertyCollectionVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IOCSPPropertyCollection * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IOCSPPropertyCollection * This);
	ULONG(STDMETHODCALLTYPE * Release) (IOCSPPropertyCollection * This);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfoCount) (IOCSPPropertyCollection * This, UINT * pctinfo);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfo) (IOCSPPropertyCollection * This, UINT iTInfo, LCID lcid, ITypeInfo ** ppTInfo);
	HRESULT(STDMETHODCALLTYPE * GetIDsOfNames) (IOCSPPropertyCollection * This, REFIID riid, LPOLESTR * rgszNames, UINT cNames, LCID lcid, DISPID * rgDispId);
	HRESULT(STDMETHODCALLTYPE * Invoke) (IOCSPPropertyCollection * This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS * pDispParams, VARIANT * pVarResult, EXCEPINFO * pExcepInfo, UINT * puArgErr);
	HRESULT(STDMETHODCALLTYPE * get__NewEnum) (IOCSPPropertyCollection * This, IUnknown ** ppVal);
	HRESULT(STDMETHODCALLTYPE * get_Item) (IOCSPPropertyCollection * This, LONG Index, VARIANT * pVal);
	HRESULT(STDMETHODCALLTYPE * get_Count) (IOCSPPropertyCollection * This, LONG * pVal);
	HRESULT(STDMETHODCALLTYPE * get_ItemByName) (IOCSPPropertyCollection * This, const BSTR bstrPropName, VARIANT * pVal);
	HRESULT(STDMETHODCALLTYPE * CreateProperty) (IOCSPPropertyCollection * This, const BSTR bstrPropName, const VARIANT * pVarPropValue, IOCSPProperty ** ppVal);
	HRESULT(STDMETHODCALLTYPE * DeleteProperty) (IOCSPPropertyCollection * This, const BSTR bstrPropName);
	HRESULT(STDMETHODCALLTYPE * InitializeFromProperties) (IOCSPPropertyCollection * This, const VARIANT * pVarProperties);
	HRESULT(STDMETHODCALLTYPE * GetAllProperties) (IOCSPPropertyCollection * This, VARIANT * pVarProperties);
	END_INTERFACE
}
IOCSPPropertyCollectionVtbl;
interface IOCSPPropertyCollection
{
	CONST_VTBL struct IOCSPPropertyCollectionVtbl *lpVtbl;
}
;
#ifdef COBJMACROS
#define IOCSPPropertyCollection_QueryInterface(This,riid,ppvObject)    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IOCSPPropertyCollection_AddRef(This)    ( (This)->lpVtbl -> AddRef(This) )
#define IOCSPPropertyCollection_Release(This)    ( (This)->lpVtbl -> Release(This) )
#define IOCSPPropertyCollection_GetTypeInfoCount(This,pctinfo)    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define IOCSPPropertyCollection_GetTypeInfo(This,iTInfo,lcid,ppTInfo)    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define IOCSPPropertyCollection_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define IOCSPPropertyCollection_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define IOCSPPropertyCollection_get__NewEnum(This,ppVal)    ( (This)->lpVtbl -> get__NewEnum(This,ppVal) )
#define IOCSPPropertyCollection_get_Item(This,Index,pVal)    ( (This)->lpVtbl -> get_Item(This,Index,pVal) )
#define IOCSPPropertyCollection_get_Count(This,pVal)    ( (This)->lpVtbl -> get_Count(This,pVal) )
#define IOCSPPropertyCollection_get_ItemByName(This,bstrPropName,pVal)    ( (This)->lpVtbl -> get_ItemByName(This,bstrPropName,pVal) )
#define IOCSPPropertyCollection_CreateProperty(This,bstrPropName,pVarPropValue,ppVal)    ( (This)->lpVtbl -> CreateProperty(This,bstrPropName,pVarPropValue,ppVal) )
#define IOCSPPropertyCollection_DeleteProperty(This,bstrPropName)    ( (This)->lpVtbl -> DeleteProperty(This,bstrPropName) )
#define IOCSPPropertyCollection_InitializeFromProperties(This,pVarProperties)    ( (This)->lpVtbl -> InitializeFromProperties(This,pVarProperties) )
#define IOCSPPropertyCollection_GetAllProperties(This,pVarProperties)    ( (This)->lpVtbl -> GetAllProperties(This,pVarProperties) )
#endif
#endif
#ifndef __IOCSPCAConfiguration_INTERFACE_DEFINED__
#define __IOCSPCAConfiguration_INTERFACE_DEFINED__
extern const IID IID_IOCSPCAConfiguration;
typedef struct IOCSPCAConfigurationVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IOCSPCAConfiguration * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IOCSPCAConfiguration * This);
	ULONG(STDMETHODCALLTYPE * Release) (IOCSPCAConfiguration * This);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfoCount) (IOCSPCAConfiguration * This, UINT * pctinfo);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfo) (IOCSPCAConfiguration * This, UINT iTInfo, LCID lcid, ITypeInfo ** ppTInfo);
	HRESULT(STDMETHODCALLTYPE * GetIDsOfNames) (IOCSPCAConfiguration * This, REFIID riid, LPOLESTR * rgszNames, UINT cNames, LCID lcid, DISPID * rgDispId);
	HRESULT(STDMETHODCALLTYPE * Invoke) (IOCSPCAConfiguration * This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS * pDispParams, VARIANT * pVarResult, EXCEPINFO * pExcepInfo, UINT * puArgErr);
	HRESULT(STDMETHODCALLTYPE * get_Identifier) (IOCSPCAConfiguration * This, BSTR * pVal);
	HRESULT(STDMETHODCALLTYPE * get_CACertificate) (IOCSPCAConfiguration * This, VARIANT * pVal);
	HRESULT(STDMETHODCALLTYPE * get_HashAlgorithm) (IOCSPCAConfiguration * This, BSTR * pVal);
	HRESULT(STDMETHODCALLTYPE * put_HashAlgorithm) (IOCSPCAConfiguration * This, const BSTR newVal);
	HRESULT(STDMETHODCALLTYPE * get_SigningFlags) (IOCSPCAConfiguration * This, ULONG * pVal);
	HRESULT(STDMETHODCALLTYPE * put_SigningFlags) (IOCSPCAConfiguration * This, ULONG newVal);
	HRESULT(STDMETHODCALLTYPE * get_SigningCertificate) (IOCSPCAConfiguration * This, VARIANT * pVal);
	HRESULT(STDMETHODCALLTYPE * put_SigningCertificate) (IOCSPCAConfiguration * This, VARIANT newVal);
	HRESULT(STDMETHODCALLTYPE * get_ReminderDuration) (IOCSPCAConfiguration * This, ULONG * pVal);
	HRESULT(STDMETHODCALLTYPE * put_ReminderDuration) (IOCSPCAConfiguration * This, ULONG newVal);
	HRESULT(STDMETHODCALLTYPE * get_ErrorCode) (IOCSPCAConfiguration * This, ULONG * pVal);
	HRESULT(STDMETHODCALLTYPE * get_CSPName) (IOCSPCAConfiguration * This, BSTR * pVal);
	HRESULT(STDMETHODCALLTYPE * get_KeySpec) (IOCSPCAConfiguration * This, ULONG * pVal);
	HRESULT(STDMETHODCALLTYPE * get_ProviderCLSID) (IOCSPCAConfiguration * This, BSTR * pVal);
	HRESULT(STDMETHODCALLTYPE * put_ProviderCLSID) (IOCSPCAConfiguration * This, const BSTR newVal);
	HRESULT(STDMETHODCALLTYPE * get_ProviderProperties) (IOCSPCAConfiguration * This, VARIANT * pVal);
	HRESULT(STDMETHODCALLTYPE * put_ProviderProperties) (IOCSPCAConfiguration * This, VARIANT newVal);
	HRESULT(STDMETHODCALLTYPE * get_Modified) (IOCSPCAConfiguration * This, VARIANT_BOOL * pVal);
	HRESULT(STDMETHODCALLTYPE * get_LocalRevocationInformation) (IOCSPCAConfiguration * This, VARIANT * pVal);
	HRESULT(STDMETHODCALLTYPE * put_LocalRevocationInformation) (IOCSPCAConfiguration * This, VARIANT newVal);
	HRESULT(STDMETHODCALLTYPE * get_SigningCertificateTemplate) (IOCSPCAConfiguration * This, BSTR * pVal);
	HRESULT(STDMETHODCALLTYPE * put_SigningCertificateTemplate) (IOCSPCAConfiguration * This, const BSTR newVal);
	HRESULT(STDMETHODCALLTYPE * get_CAConfig) (IOCSPCAConfiguration * This, BSTR * pVal);
	HRESULT(STDMETHODCALLTYPE * put_CAConfig) (IOCSPCAConfiguration * This, const BSTR newVal);
	END_INTERFACE
}
IOCSPCAConfigurationVtbl;
interface IOCSPCAConfiguration
{
	CONST_VTBL struct IOCSPCAConfigurationVtbl *lpVtbl;
}
;
#ifdef COBJMACROS
#define IOCSPCAConfiguration_QueryInterface(This,riid,ppvObject)    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IOCSPCAConfiguration_AddRef(This)    ( (This)->lpVtbl -> AddRef(This) )
#define IOCSPCAConfiguration_Release(This)    ( (This)->lpVtbl -> Release(This) )
#define IOCSPCAConfiguration_GetTypeInfoCount(This,pctinfo)    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define IOCSPCAConfiguration_GetTypeInfo(This,iTInfo,lcid,ppTInfo)    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define IOCSPCAConfiguration_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define IOCSPCAConfiguration_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define IOCSPCAConfiguration_get_Identifier(This,pVal)    ( (This)->lpVtbl -> get_Identifier(This,pVal) )
#define IOCSPCAConfiguration_get_CACertificate(This,pVal)    ( (This)->lpVtbl -> get_CACertificate(This,pVal) )
#define IOCSPCAConfiguration_get_HashAlgorithm(This,pVal)    ( (This)->lpVtbl -> get_HashAlgorithm(This,pVal) )
#define IOCSPCAConfiguration_put_HashAlgorithm(This,newVal)    ( (This)->lpVtbl -> put_HashAlgorithm(This,newVal) )
#define IOCSPCAConfiguration_get_SigningFlags(This,pVal)    ( (This)->lpVtbl -> get_SigningFlags(This,pVal) )
#define IOCSPCAConfiguration_put_SigningFlags(This,newVal)    ( (This)->lpVtbl -> put_SigningFlags(This,newVal) )
#define IOCSPCAConfiguration_get_SigningCertificate(This,pVal)    ( (This)->lpVtbl -> get_SigningCertificate(This,pVal) )
#define IOCSPCAConfiguration_put_SigningCertificate(This,newVal)    ( (This)->lpVtbl -> put_SigningCertificate(This,newVal) )
#define IOCSPCAConfiguration_get_ReminderDuration(This,pVal)    ( (This)->lpVtbl -> get_ReminderDuration(This,pVal) )
#define IOCSPCAConfiguration_put_ReminderDuration(This,newVal)    ( (This)->lpVtbl -> put_ReminderDuration(This,newVal) )
#define IOCSPCAConfiguration_get_ErrorCode(This,pVal)    ( (This)->lpVtbl -> get_ErrorCode(This,pVal) )
#define IOCSPCAConfiguration_get_CSPName(This,pVal)    ( (This)->lpVtbl -> get_CSPName(This,pVal) )
#define IOCSPCAConfiguration_get_KeySpec(This,pVal)    ( (This)->lpVtbl -> get_KeySpec(This,pVal) )
#define IOCSPCAConfiguration_get_ProviderCLSID(This,pVal)    ( (This)->lpVtbl -> get_ProviderCLSID(This,pVal) )
#define IOCSPCAConfiguration_put_ProviderCLSID(This,newVal)    ( (This)->lpVtbl -> put_ProviderCLSID(This,newVal) )
#define IOCSPCAConfiguration_get_ProviderProperties(This,pVal)    ( (This)->lpVtbl -> get_ProviderProperties(This,pVal) )
#define IOCSPCAConfiguration_put_ProviderProperties(This,newVal)    ( (This)->lpVtbl -> put_ProviderProperties(This,newVal) )
#define IOCSPCAConfiguration_get_Modified(This,pVal)    ( (This)->lpVtbl -> get_Modified(This,pVal) )
#define IOCSPCAConfiguration_get_LocalRevocationInformation(This,pVal)    ( (This)->lpVtbl -> get_LocalRevocationInformation(This,pVal) )
#define IOCSPCAConfiguration_put_LocalRevocationInformation(This,newVal)    ( (This)->lpVtbl -> put_LocalRevocationInformation(This,newVal) )
#define IOCSPCAConfiguration_get_SigningCertificateTemplate(This,pVal)    ( (This)->lpVtbl -> get_SigningCertificateTemplate(This,pVal) )
#define IOCSPCAConfiguration_put_SigningCertificateTemplate(This,newVal)    ( (This)->lpVtbl -> put_SigningCertificateTemplate(This,newVal) )
#define IOCSPCAConfiguration_get_CAConfig(This,pVal)    ( (This)->lpVtbl -> get_CAConfig(This,pVal) )
#define IOCSPCAConfiguration_put_CAConfig(This,newVal)    ( (This)->lpVtbl -> put_CAConfig(This,newVal) )
#endif
#endif
#ifndef __IOCSPCAConfigurationCollection_INTERFACE_DEFINED__
#define __IOCSPCAConfigurationCollection_INTERFACE_DEFINED__
extern const IID IID_IOCSPCAConfigurationCollection;
typedef struct IOCSPCAConfigurationCollectionVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IOCSPCAConfigurationCollection * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IOCSPCAConfigurationCollection * This);
	ULONG(STDMETHODCALLTYPE * Release) (IOCSPCAConfigurationCollection * This);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfoCount) (IOCSPCAConfigurationCollection * This, UINT * pctinfo);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfo) (IOCSPCAConfigurationCollection * This, UINT iTInfo, LCID lcid, ITypeInfo ** ppTInfo);
	HRESULT(STDMETHODCALLTYPE * GetIDsOfNames) (IOCSPCAConfigurationCollection * This, REFIID riid, LPOLESTR * rgszNames, UINT cNames, LCID lcid, DISPID * rgDispId);
	HRESULT(STDMETHODCALLTYPE * Invoke) (IOCSPCAConfigurationCollection * This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS * pDispParams, VARIANT * pVarResult, EXCEPINFO * pExcepInfo, UINT * puArgErr);
	HRESULT(STDMETHODCALLTYPE * get__NewEnum) (IOCSPCAConfigurationCollection * This, IUnknown ** pVal);
	HRESULT(STDMETHODCALLTYPE * get_Item) (IOCSPCAConfigurationCollection * This, LONG Index, VARIANT * pVal);
	HRESULT(STDMETHODCALLTYPE * get_Count) (IOCSPCAConfigurationCollection * This, LONG * pVal);
	HRESULT(STDMETHODCALLTYPE * get_ItemByName) (IOCSPCAConfigurationCollection * This, const BSTR bstrIdentifier, VARIANT * pVal);
	HRESULT(STDMETHODCALLTYPE * CreateCAConfiguration) (IOCSPCAConfigurationCollection * This, const BSTR bstrIdentifier, VARIANT varCACert, IOCSPCAConfiguration ** ppVal);
	HRESULT(STDMETHODCALLTYPE * DeleteCAConfiguration) (IOCSPCAConfigurationCollection * This, const BSTR bstrIdentifier);
	END_INTERFACE
}
IOCSPCAConfigurationCollectionVtbl;
interface IOCSPCAConfigurationCollection
{
	CONST_VTBL struct IOCSPCAConfigurationCollectionVtbl *lpVtbl;
}
;
#ifdef COBJMACROS
#define IOCSPCAConfigurationCollection_QueryInterface(This,riid,ppvObject)    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IOCSPCAConfigurationCollection_AddRef(This)    ( (This)->lpVtbl -> AddRef(This) )
#define IOCSPCAConfigurationCollection_Release(This)    ( (This)->lpVtbl -> Release(This) )
#define IOCSPCAConfigurationCollection_GetTypeInfoCount(This,pctinfo)    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define IOCSPCAConfigurationCollection_GetTypeInfo(This,iTInfo,lcid,ppTInfo)    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define IOCSPCAConfigurationCollection_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define IOCSPCAConfigurationCollection_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define IOCSPCAConfigurationCollection_get__NewEnum(This,pVal)    ( (This)->lpVtbl -> get__NewEnum(This,pVal) )
#define IOCSPCAConfigurationCollection_get_Item(This,Index,pVal)    ( (This)->lpVtbl -> get_Item(This,Index,pVal) )
#define IOCSPCAConfigurationCollection_get_Count(This,pVal)    ( (This)->lpVtbl -> get_Count(This,pVal) )
#define IOCSPCAConfigurationCollection_get_ItemByName(This,bstrIdentifier,pVal)    ( (This)->lpVtbl -> get_ItemByName(This,bstrIdentifier,pVal) )
#define IOCSPCAConfigurationCollection_CreateCAConfiguration(This,bstrIdentifier,varCACert,ppVal)    ( (This)->lpVtbl -> CreateCAConfiguration(This,bstrIdentifier,varCACert,ppVal) )
#define IOCSPCAConfigurationCollection_DeleteCAConfiguration(This,bstrIdentifier)    ( (This)->lpVtbl -> DeleteCAConfiguration(This,bstrIdentifier) )
#endif
#endif
#ifndef __IOCSPAdmin_INTERFACE_DEFINED__
#define __IOCSPAdmin_INTERFACE_DEFINED__
extern const IID IID_IOCSPAdmin;
typedef struct IOCSPAdminVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IOCSPAdmin * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IOCSPAdmin * This);
	ULONG(STDMETHODCALLTYPE * Release) (IOCSPAdmin * This);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfoCount) (IOCSPAdmin * This, UINT * pctinfo);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfo) (IOCSPAdmin * This, UINT iTInfo, LCID lcid, ITypeInfo ** ppTInfo);
	HRESULT(STDMETHODCALLTYPE * GetIDsOfNames) (IOCSPAdmin * This, REFIID riid, LPOLESTR * rgszNames, UINT cNames, LCID lcid, DISPID * rgDispId);
	HRESULT(STDMETHODCALLTYPE * Invoke) (IOCSPAdmin * This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS * pDispParams, VARIANT * pVarResult, EXCEPINFO * pExcepInfo, UINT * puArgErr);
	HRESULT(STDMETHODCALLTYPE * get_OCSPServiceProperties) (IOCSPAdmin * This, IOCSPPropertyCollection ** ppVal);
	HRESULT(STDMETHODCALLTYPE * get_OCSPCAConfigurationCollection) (IOCSPAdmin * This, IOCSPCAConfigurationCollection ** pVal);
	HRESULT(STDMETHODCALLTYPE * GetConfiguration) (IOCSPAdmin * This, const BSTR bstrServerName, VARIANT_BOOL bForce);
	HRESULT(STDMETHODCALLTYPE * SetConfiguration) (IOCSPAdmin * This, const BSTR bstrServerName, VARIANT_BOOL bForce);
	HRESULT(STDMETHODCALLTYPE * GetMyRoles) (IOCSPAdmin * This, const BSTR bstrServerName, LONG * pRoles);
	HRESULT(STDMETHODCALLTYPE * Ping) (IOCSPAdmin * This, const BSTR bstrServerName);
	HRESULT(STDMETHODCALLTYPE * SetSecurity) (IOCSPAdmin * This, const BSTR bstrServerName, const BSTR bstrVal);
	HRESULT(STDMETHODCALLTYPE * GetSecurity) (IOCSPAdmin * This, const BSTR bstrServerName, BSTR * pVal);
	HRESULT(STDMETHODCALLTYPE * GetSigningCertificates) (IOCSPAdmin * This, const BSTR bstrServerName, const VARIANT * pCACertVar, VARIANT * pVal);
	HRESULT(STDMETHODCALLTYPE * GetHashAlgorithms) (IOCSPAdmin * This, const BSTR bstrServerName, const BSTR bstrCAId, VARIANT * pVal);
	END_INTERFACE
}
IOCSPAdminVtbl;
interface IOCSPAdmin
{
	CONST_VTBL struct IOCSPAdminVtbl *lpVtbl;
}
;
#ifdef COBJMACROS
#define IOCSPAdmin_QueryInterface(This,riid,ppvObject)    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IOCSPAdmin_AddRef(This)    ( (This)->lpVtbl -> AddRef(This) )
#define IOCSPAdmin_Release(This)    ( (This)->lpVtbl -> Release(This) )
#define IOCSPAdmin_GetTypeInfoCount(This,pctinfo)    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define IOCSPAdmin_GetTypeInfo(This,iTInfo,lcid,ppTInfo)    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define IOCSPAdmin_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define IOCSPAdmin_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define IOCSPAdmin_get_OCSPServiceProperties(This,ppVal)    ( (This)->lpVtbl -> get_OCSPServiceProperties(This,ppVal) )
#define IOCSPAdmin_get_OCSPCAConfigurationCollection(This,pVal)    ( (This)->lpVtbl -> get_OCSPCAConfigurationCollection(This,pVal) )
#define IOCSPAdmin_GetConfiguration(This,bstrServerName,bForce)    ( (This)->lpVtbl -> GetConfiguration(This,bstrServerName,bForce) )
#define IOCSPAdmin_SetConfiguration(This,bstrServerName,bForce)    ( (This)->lpVtbl -> SetConfiguration(This,bstrServerName,bForce) )
#define IOCSPAdmin_GetMyRoles(This,bstrServerName,pRoles)    ( (This)->lpVtbl -> GetMyRoles(This,bstrServerName,pRoles) )
#define IOCSPAdmin_Ping(This,bstrServerName)    ( (This)->lpVtbl -> Ping(This,bstrServerName) )
#define IOCSPAdmin_SetSecurity(This,bstrServerName,bstrVal)    ( (This)->lpVtbl -> SetSecurity(This,bstrServerName,bstrVal) )
#define IOCSPAdmin_GetSecurity(This,bstrServerName,pVal)    ( (This)->lpVtbl -> GetSecurity(This,bstrServerName,pVal) )
#define IOCSPAdmin_GetSigningCertificates(This,bstrServerName,pCACertVar,pVal)    ( (This)->lpVtbl -> GetSigningCertificates(This,bstrServerName,pCACertVar,pVal) )
#define IOCSPAdmin_GetHashAlgorithms(This,bstrServerName,bstrCAId,pVal)    ( (This)->lpVtbl -> GetHashAlgorithms(This,bstrServerName,bstrCAId,pVal) )
#endif
#endif
#ifndef __CERTADMINLib_LIBRARY_DEFINED__
#define __CERTADMINLib_LIBRARY_DEFINED__
enum OCSPSigningFlag { OCSP_SF_SILENT = 0x1,
	OCSP_SF_USE_CACERT = 0x2,
	OCSP_SF_ALLOW_SIGNINGCERT_AUTORENEWAL = 0x4,
	OCSP_SF_FORCE_SIGNINGCERT_ISSUER_ISCA = 0x8,
	OCSP_SF_AUTODISCOVER_SIGNINGCERT = 0x10,
	OCSP_SF_MANUAL_ASSIGN_SIGNINGCERT = 0x20,
	OCSP_SF_RESPONDER_ID_KEYHASH = 0x40,
	OCSP_SF_RESPONDER_ID_NAME = 0x80,
	OCSP_SF_ALLOW_NONCE_EXTENSION = 0x100,
	OCSP_SF_ALLOW_SIGNINGCERT_AUTOENROLLMENT = 0x200
}
;
enum OCSPRequestFlag { OCSP_RF_REJECT_SIGNED_REQUESTS = 0x1
}
;
#define wszOCSPCAPROP_CACERTIFICATE		L"CACertificate"
#define wszOCSPCAPROP_HASHALGORITHMID		L"HashAlgorithmId"
#define wszOCSPCAPROP_SIGNINGFLAGS		L"SigningFlags"
#define wszOCSPCAPROP_REMINDERDURATION		L"ReminderDuration"
#define wszOCSPCAPROP_SIGNINGCERTIFICATE		L"SigningCertificate"
#define wszOCSPCAPROP_CSPNAME			L"CSPName"
#define wszOCSPCAPROP_KEYSPEC			L"KeySpec"
#define wszOCSPCAPROP_ERRORCODE			L"ErrorCode"
#define wszOCSPCAPROP_PROVIDERCLSID		L"ProviderCLSID"
#define wszOCSPCAPROP_PROVIDERPROPERTIES		L"Provider"
#define wszOCSPCAPROP_LOCALREVOCATIONINFORMATION	L"LocalRevocationInformation"
#define wszOCSPCAPROP_SIGNINGCERTIFICATETEMPLATE	L"SigningCertificateTemplate"
#define wszOCSPCAPROP_CACONFIG	L"CAConfig"
#define wszOCSPPROP_LOGLEVEL  			L"LogLevel"
#define wszOCSPPROP_DEBUG                  	L"Debug"
#define wszOCSPPROP_AUDITFILTER			L"AuditFilter"
#define wszOCSPPROP_ARRAYCONTROLLER		L"ArrayController"
#define wszOCSPPROP_ARRAYMEMBERS		    L"ArrayMembers"
#define wszOCSPPROP_ENROLLPOLLINTERVAL   L"EnrollPollInterval"
#define wszOCSPISAPIPROP_VIRTUALROOTNAME		L"VirtualRootName"
#define wszOCSPISAPIPROP_NUMOFTHREADS		L"NumOfThreads"
#define wszOCSPISAPIPROP_NUMOFBACKENDCONNECTIONS	L"NumOfBackendConnections"
#define wszOCSPISAPIPROP_REFRESHRATE		L"RefreshRate"
#define wszOCSPISAPIPROP_MAXNUMOFCACHEENTRIES	L"MaxNumOfCacheEntries"
#define wszOCSPISAPIPROP_MAXAGE			L"MaxAge"
#define wszOCSPISAPIPROP_DEBUG			L"ISAPIDebug"
#define wszOCSPCOMMONPROP_REQFLAGS			        L"RequestFlags"
#define wszOCSPCOMMONPROP_MAXINCOMINGMESSAGESIZE	    L"MaxIncomingMessageSize"
#define wszOCSPREVPROP_CRLURLTIMEOUT		L"CrlUrlTimeOut"
#define wszOCSPREVPROP_BASECRLURLS		L"BaseCrlUrls"
#define wszOCSPREVPROP_BASECRL			L"BaseCrl"
#define wszOCSPREVPROP_DELTACRLURLS		L"DeltaCrlUrls"
#define wszOCSPREVPROP_DELTACRL			L"DeltaCrl"
#define wszOCSPREVPROP_REFRESHTIMEOUT	L"RefreshTimeOut"
#define wszOCSPREVPROP_ERRORCODE			L"RevocationErrorCode"
extern const IID LIBID_CERTADMINLib;
extern const CLSID CLSID_CCertAdmin;
extern const CLSID CLSID_CCertView;
extern const CLSID CLSID_OCSPPropertyCollection;
extern const CLSID CLSID_OCSPAdmin;
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

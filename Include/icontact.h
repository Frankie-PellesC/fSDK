/*+@@file@@----------------------------------------------------------------*//*!
 \file		icontact.h
 \par Description
            Extension and update of headers for PellesC compiler suite.
 \par Project:
            PellesC Headers extension
 \date		Created  on Sat Jul 16 19:28:20 2016
 \date		Modified on Sat Jul 16 19:28:20 2016
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
#ifndef __icontact_h__
#define __icontact_h__
#if __POCC__ >= 500
#pragma once
#endif
#ifndef __IContactManager_FWD_DEFINED__
#define __IContactManager_FWD_DEFINED__
typedef interface IContactManager IContactManager;
#endif
#ifndef __IContactCollection_FWD_DEFINED__
#define __IContactCollection_FWD_DEFINED__
typedef interface IContactCollection IContactCollection;
#endif
#ifndef __IContactProperties_FWD_DEFINED__
#define __IContactProperties_FWD_DEFINED__
typedef interface IContactProperties IContactProperties;
#endif
#ifndef __IContact_FWD_DEFINED__
#define __IContact_FWD_DEFINED__
typedef interface IContact IContact;
#endif
#ifndef __IContactPropertyCollection_FWD_DEFINED__
#define __IContactPropertyCollection_FWD_DEFINED__
typedef interface IContactPropertyCollection IContactPropertyCollection;
#endif
#ifndef __Contact_FWD_DEFINED__
#define __Contact_FWD_DEFINED__
typedef struct Contact Contact;
#endif
#ifndef __ContactManager_FWD_DEFINED__
#define __ContactManager_FWD_DEFINED__
typedef struct ContactManager ContactManager;
#endif
#include "oaidl.h"
#include "ocidl.h"
extern RPC_IF_HANDLE __MIDL_itf_icontact_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_icontact_0000_0000_v0_0_s_ifspec;
#ifndef __IContactManager_INTERFACE_DEFINED__
#define __IContactManager_INTERFACE_DEFINED__
extern const IID IID_IContactManager;
typedef struct IContactManagerVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IContactManager * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IContactManager * This);
	ULONG(STDMETHODCALLTYPE * Release) (IContactManager * This);
	HRESULT(STDMETHODCALLTYPE * Initialize) (IContactManager * This, LPCWSTR pszAppName, LPCWSTR pszAppVersion);
	HRESULT(STDMETHODCALLTYPE * Load) (IContactManager * This, LPCWSTR pszContactID, IContact ** ppContact);
	HRESULT(STDMETHODCALLTYPE * MergeContactIDs) (IContactManager * This, LPCWSTR pszNewContactID, LPCWSTR pszOldContactID);
	HRESULT(STDMETHODCALLTYPE * GetMeContact) (IContactManager * This, IContact ** ppMeContact);
	HRESULT(STDMETHODCALLTYPE * SetMeContact) (IContactManager * This, IContact * pMeContact);
	HRESULT(STDMETHODCALLTYPE * GetContactCollection) (IContactManager * This, IContactCollection ** ppContactCollection);
	END_INTERFACE
}  IContactManagerVtbl;
interface IContactManager
{
	CONST_VTBL struct IContactManagerVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IContactManager_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IContactManager_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define IContactManager_Release(This)( (This)->lpVtbl -> Release(This) )
#define IContactManager_Initialize(This,pszAppName,pszAppVersion)( (This)->lpVtbl -> Initialize(This,pszAppName,pszAppVersion) )
#define IContactManager_Load(This,pszContactID,ppContact)( (This)->lpVtbl -> Load(This,pszContactID,ppContact) )
#define IContactManager_MergeContactIDs(This,pszNewContactID,pszOldContactID)( (This)->lpVtbl -> MergeContactIDs(This,pszNewContactID,pszOldContactID) )
#define IContactManager_GetMeContact(This,ppMeContact)( (This)->lpVtbl -> GetMeContact(This,ppMeContact) )
#define IContactManager_SetMeContact(This,pMeContact)( (This)->lpVtbl -> SetMeContact(This,pMeContact) )
#define IContactManager_GetContactCollection(This,ppContactCollection)( (This)->lpVtbl -> GetContactCollection(This,ppContactCollection) )
#endif
#endif
#ifndef __IContactCollection_INTERFACE_DEFINED__
#define __IContactCollection_INTERFACE_DEFINED__
extern const IID IID_IContactCollection;
typedef struct IContactCollectionVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IContactCollection * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IContactCollection * This);
	ULONG(STDMETHODCALLTYPE * Release) (IContactCollection * This);
	HRESULT(STDMETHODCALLTYPE * Reset) (IContactCollection * This);
	HRESULT(STDMETHODCALLTYPE * Next) (IContactCollection * This);
	HRESULT(STDMETHODCALLTYPE * GetCurrent) (IContactCollection * This, IContact ** ppContact);
	END_INTERFACE
}  IContactCollectionVtbl;
interface IContactCollection
{
	CONST_VTBL struct IContactCollectionVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IContactCollection_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IContactCollection_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define IContactCollection_Release(This)( (This)->lpVtbl -> Release(This) )
#define IContactCollection_Reset(This)( (This)->lpVtbl -> Reset(This) )
#define IContactCollection_Next(This)( (This)->lpVtbl -> Next(This) )
#define IContactCollection_GetCurrent(This,ppContact)( (This)->lpVtbl -> GetCurrent(This,ppContact) )
#endif
#endif
#ifndef __IContactProperties_INTERFACE_DEFINED__
#define __IContactProperties_INTERFACE_DEFINED__
#define CGD_DEFAULT                      0x00000000
extern const IID IID_IContactProperties;
typedef struct IContactPropertiesVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IContactProperties * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IContactProperties * This);
	ULONG(STDMETHODCALLTYPE * Release) (IContactProperties * This);
	HRESULT(STDMETHODCALLTYPE * GetString) (IContactProperties * This, LPCWSTR pszPropertyName, DWORD dwFlags, LPWSTR pszValue, DWORD cchValue, DWORD * pdwcchPropertyValueRequired);
	HRESULT(STDMETHODCALLTYPE * GetDate) (IContactProperties * This, LPCWSTR pszPropertyName, DWORD dwFlags, FILETIME * pftDateTime);
	HRESULT(STDMETHODCALLTYPE * GetBinary) (IContactProperties * This, LPCWSTR pszPropertyName, DWORD dwFlags, LPWSTR pszContentType, DWORD cchContentType, DWORD * pdwcchContentTypeRequired, IStream ** ppStream);
	HRESULT(STDMETHODCALLTYPE * GetLabels) (IContactProperties * This, LPCWSTR pszArrayElementName, DWORD dwFlags, LPWSTR pszLabels, DWORD cchLabels, DWORD * pdwcchLabelsRequired);
	HRESULT(STDMETHODCALLTYPE * SetString) (IContactProperties * This, LPCWSTR pszPropertyName, DWORD dwFlags, LPCWSTR pszValue);
	HRESULT(STDMETHODCALLTYPE * SetDate) (IContactProperties * This, LPCWSTR pszPropertyName, DWORD dwFlags, FILETIME ftDateTime);
	HRESULT(STDMETHODCALLTYPE * SetBinary) (IContactProperties * This, LPCWSTR pszPropertyName, DWORD dwFlags, LPCWSTR pszContentType, IStream * pStream);
	HRESULT(STDMETHODCALLTYPE * SetLabels) (IContactProperties * This, LPCWSTR pszArrayElementName, DWORD dwFlags, DWORD dwLabelCount, LPCWSTR ppszLabels[]);
	HRESULT(STDMETHODCALLTYPE * CreateArrayNode) (IContactProperties * This, LPCWSTR pszArrayName, DWORD dwFlags, BOOL fAppend, LPWSTR pszNewArrayElementName, DWORD cchNewArrayElementName, DWORD * pdwcchNewArrayElementNameRequired);
	HRESULT(STDMETHODCALLTYPE * DeleteProperty) (IContactProperties * This, LPCWSTR pszPropertyName, DWORD dwFlags);
	HRESULT(STDMETHODCALLTYPE * DeleteArrayNode) (IContactProperties * This, LPCWSTR pszArrayElementName, DWORD dwFlags);
	HRESULT(STDMETHODCALLTYPE * DeleteLabels) (IContactProperties * This, LPCWSTR pszArrayElementName, DWORD dwFlags);
	HRESULT(STDMETHODCALLTYPE * GetPropertyCollection) (IContactProperties * This, IContactPropertyCollection ** ppPropertyCollection, DWORD dwFlags, LPCWSTR pszMultiValueName, DWORD dwLabelCount, LPCWSTR ppszLabels[], BOOL fAnyLabelMatches);
	END_INTERFACE
}  IContactPropertiesVtbl;
interface IContactProperties
{
	CONST_VTBL struct IContactPropertiesVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IContactProperties_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IContactProperties_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define IContactProperties_Release(This)( (This)->lpVtbl -> Release(This) )
#define IContactProperties_GetString(This,pszPropertyName,dwFlags,pszValue,cchValue,pdwcchPropertyValueRequired)( (This)->lpVtbl -> GetString(This,pszPropertyName,dwFlags,pszValue,cchValue,pdwcchPropertyValueRequired) )
#define IContactProperties_GetDate(This,pszPropertyName,dwFlags,pftDateTime)( (This)->lpVtbl -> GetDate(This,pszPropertyName,dwFlags,pftDateTime) )
#define IContactProperties_GetBinary(This,pszPropertyName,dwFlags,pszContentType,cchContentType,pdwcchContentTypeRequired,ppStream)( (This)->lpVtbl -> GetBinary(This,pszPropertyName,dwFlags,pszContentType,cchContentType,pdwcchContentTypeRequired,ppStream) )
#define IContactProperties_GetLabels(This,pszArrayElementName,dwFlags,pszLabels,cchLabels,pdwcchLabelsRequired)( (This)->lpVtbl -> GetLabels(This,pszArrayElementName,dwFlags,pszLabels,cchLabels,pdwcchLabelsRequired) )
#define IContactProperties_SetString(This,pszPropertyName,dwFlags,pszValue)( (This)->lpVtbl -> SetString(This,pszPropertyName,dwFlags,pszValue) )
#define IContactProperties_SetDate(This,pszPropertyName,dwFlags,ftDateTime)( (This)->lpVtbl -> SetDate(This,pszPropertyName,dwFlags,ftDateTime) )
#define IContactProperties_SetBinary(This,pszPropertyName,dwFlags,pszContentType,pStream)( (This)->lpVtbl -> SetBinary(This,pszPropertyName,dwFlags,pszContentType,pStream) )
#define IContactProperties_SetLabels(This,pszArrayElementName,dwFlags,dwLabelCount,ppszLabels)( (This)->lpVtbl -> SetLabels(This,pszArrayElementName,dwFlags,dwLabelCount,ppszLabels) )
#define IContactProperties_CreateArrayNode(This,pszArrayName,dwFlags,fAppend,pszNewArrayElementName,cchNewArrayElementName,pdwcchNewArrayElementNameRequired)( (This)->lpVtbl -> CreateArrayNode(This,pszArrayName,dwFlags,fAppend,pszNewArrayElementName,cchNewArrayElementName,pdwcchNewArrayElementNameRequired) )
#define IContactProperties_DeleteProperty(This,pszPropertyName,dwFlags)( (This)->lpVtbl -> DeleteProperty(This,pszPropertyName,dwFlags) )
#define IContactProperties_DeleteArrayNode(This,pszArrayElementName,dwFlags)( (This)->lpVtbl -> DeleteArrayNode(This,pszArrayElementName,dwFlags) )
#define IContactProperties_DeleteLabels(This,pszArrayElementName,dwFlags)( (This)->lpVtbl -> DeleteLabels(This,pszArrayElementName,dwFlags) )
#define IContactProperties_GetPropertyCollection(This,ppPropertyCollection,dwFlags,pszMultiValueName,dwLabelCount,ppszLabels,fAnyLabelMatches)( (This)->lpVtbl -> GetPropertyCollection(This,ppPropertyCollection,dwFlags,pszMultiValueName,dwLabelCount,ppszLabels,fAnyLabelMatches) )
#endif
#endif
#ifndef __IContact_INTERFACE_DEFINED__
#define __IContact_INTERFACE_DEFINED__
extern const IID IID_IContact;
typedef struct IContactVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IContact * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IContact * This);
	ULONG(STDMETHODCALLTYPE * Release) (IContact * This);
	HRESULT(STDMETHODCALLTYPE * GetContactID) (IContact * This, LPWSTR pszContactID, DWORD cchContactID, DWORD * pdwcchContactIDRequired);
	HRESULT(STDMETHODCALLTYPE * GetPath) (IContact * This, LPWSTR pszPath, DWORD cchPath, DWORD * pdwcchPathRequired);
	HRESULT(STDMETHODCALLTYPE * CommitChanges) (IContact * This, DWORD dwCommitFlags);
	END_INTERFACE
}  IContactVtbl;
interface IContact
{
	CONST_VTBL struct IContactVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IContact_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IContact_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define IContact_Release(This)( (This)->lpVtbl -> Release(This) )
#define IContact_GetContactID(This,pszContactID,cchContactID,pdwcchContactIDRequired)( (This)->lpVtbl -> GetContactID(This,pszContactID,cchContactID,pdwcchContactIDRequired) )
#define IContact_GetPath(This,pszPath,cchPath,pdwcchPathRequired)( (This)->lpVtbl -> GetPath(This,pszPath,cchPath,pdwcchPathRequired) )
#define IContact_CommitChanges(This,dwCommitFlags)( (This)->lpVtbl -> CommitChanges(This,dwCommitFlags) )
#endif
#endif
#ifndef __IContactPropertyCollection_INTERFACE_DEFINED__
#define __IContactPropertyCollection_INTERFACE_DEFINED__
#define CGD_UNKNOWN_PROPERTY     0x00000000
#define CGD_STRING_PROPERTY      0x00000001
#define CGD_DATE_PROPERTY        0x00000002
#define CGD_BINARY_PROPERTY      0x00000004
#define CGD_ARRAY_NODE           0x00000008
extern const IID IID_IContactPropertyCollection;
typedef struct IContactPropertyCollectionVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IContactPropertyCollection * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IContactPropertyCollection * This);
	ULONG(STDMETHODCALLTYPE * Release) (IContactPropertyCollection * This);
	HRESULT(STDMETHODCALLTYPE * Reset) (IContactPropertyCollection * This);
	HRESULT(STDMETHODCALLTYPE * Next) (IContactPropertyCollection * This);
	HRESULT(STDMETHODCALLTYPE * GetPropertyName) (IContactPropertyCollection * This, LPWSTR pszPropertyName, DWORD cchPropertyName, DWORD * pdwcchPropertyNameRequired);
	HRESULT(STDMETHODCALLTYPE * GetPropertyType) (IContactPropertyCollection * This, DWORD * pdwType);
	HRESULT(STDMETHODCALLTYPE * GetPropertyVersion) (IContactPropertyCollection * This, DWORD * pdwVersion);
	HRESULT(STDMETHODCALLTYPE * GetPropertyModificationDate) (IContactPropertyCollection * This, FILETIME * pftModificationDate);
	HRESULT(STDMETHODCALLTYPE * GetPropertyArrayElementID) (IContactPropertyCollection * This, LPWSTR pszArrayElementID, DWORD cchArrayElementID, DWORD * pdwcchArrayElementIDRequired);
	END_INTERFACE
}  IContactPropertyCollectionVtbl;
interface IContactPropertyCollection
{
	CONST_VTBL struct IContactPropertyCollectionVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IContactPropertyCollection_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IContactPropertyCollection_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define IContactPropertyCollection_Release(This)( (This)->lpVtbl -> Release(This) )
#define IContactPropertyCollection_Reset(This)( (This)->lpVtbl -> Reset(This) )
#define IContactPropertyCollection_Next(This)( (This)->lpVtbl -> Next(This) )
#define IContactPropertyCollection_GetPropertyName(This,pszPropertyName,cchPropertyName,pdwcchPropertyNameRequired)( (This)->lpVtbl -> GetPropertyName(This,pszPropertyName,cchPropertyName,pdwcchPropertyNameRequired) )
#define IContactPropertyCollection_GetPropertyType(This,pdwType)( (This)->lpVtbl -> GetPropertyType(This,pdwType) )
#define IContactPropertyCollection_GetPropertyVersion(This,pdwVersion)( (This)->lpVtbl -> GetPropertyVersion(This,pdwVersion) )
#define IContactPropertyCollection_GetPropertyModificationDate(This,pftModificationDate)( (This)->lpVtbl -> GetPropertyModificationDate(This,pftModificationDate) )
#define IContactPropertyCollection_GetPropertyArrayElementID(This,pszArrayElementID,cchArrayElementID,pdwcchArrayElementIDRequired)( (This)->lpVtbl -> GetPropertyArrayElementID(This,pszArrayElementID,cchArrayElementID,pdwcchArrayElementIDRequired) )
#endif
#endif
#ifndef __CONTACT_LIBRARY_DEFINED__
#define __CONTACT_LIBRARY_DEFINED__
extern const IID LIBID_CONTACT;
extern const CLSID CLSID_Contact;
extern const CLSID CLSID_ContactManager;
#endif
#endif

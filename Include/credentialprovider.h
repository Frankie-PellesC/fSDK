/*+@@file@@----------------------------------------------------------------*//*!
 \file		credentialprovider.h
 \par Description 
            Extension and update of headers for PellesC compiler suite.
 \par Project: 
            PellesC Headers extension
 \date		Created  on Mon Jul  4 12:43:45 2016
 \date		Modified on Mon Jul  4 12:43:45 2016
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
#ifndef __credentialprovider_h__
#define __credentialprovider_h__
#if __POCC__ >= 500
#pragma once
#endif
#ifndef __ICredentialProviderCredential_FWD_DEFINED__
#define __ICredentialProviderCredential_FWD_DEFINED__
typedef interface ICredentialProviderCredential ICredentialProviderCredential;
#endif
#ifndef __IQueryContinueWithStatus_FWD_DEFINED__
#define __IQueryContinueWithStatus_FWD_DEFINED__
typedef interface IQueryContinueWithStatus IQueryContinueWithStatus;
#endif
#ifndef __IConnectableCredentialProviderCredential_FWD_DEFINED__
#define __IConnectableCredentialProviderCredential_FWD_DEFINED__
typedef interface IConnectableCredentialProviderCredential IConnectableCredentialProviderCredential;
#endif
#ifndef __ICredentialProviderCredentialEvents_FWD_DEFINED__
#define __ICredentialProviderCredentialEvents_FWD_DEFINED__
typedef interface ICredentialProviderCredentialEvents ICredentialProviderCredentialEvents;
#endif
#ifndef __ICredentialProvider_FWD_DEFINED__
#define __ICredentialProvider_FWD_DEFINED__
typedef interface ICredentialProvider ICredentialProvider;
#endif
#ifndef __ICredentialProviderEvents_FWD_DEFINED__
#define __ICredentialProviderEvents_FWD_DEFINED__
typedef interface ICredentialProviderEvents ICredentialProviderEvents;
#endif
#ifndef __ICredentialProviderFilter_FWD_DEFINED__
#define __ICredentialProviderFilter_FWD_DEFINED__
typedef interface ICredentialProviderFilter ICredentialProviderFilter;
#endif
#ifndef __PasswordCredentialProvider_FWD_DEFINED__
#define __PasswordCredentialProvider_FWD_DEFINED__
typedef struct PasswordCredentialProvider PasswordCredentialProvider;
#endif
#ifndef __NPCredentialProvider_FWD_DEFINED__
#define __NPCredentialProvider_FWD_DEFINED__
typedef struct NPCredentialProvider NPCredentialProvider;
#endif
#ifndef __SmartcardCredentialProvider_FWD_DEFINED__
#define __SmartcardCredentialProvider_FWD_DEFINED__
typedef struct SmartcardCredentialProvider SmartcardCredentialProvider;
#endif
#ifndef __SmartcardPinProvider_FWD_DEFINED__
#define __SmartcardPinProvider_FWD_DEFINED__
typedef struct SmartcardPinProvider SmartcardPinProvider;
#endif
#ifndef __GenericCredentialProvider_FWD_DEFINED__
#define __GenericCredentialProvider_FWD_DEFINED__
typedef struct GenericCredentialProvider GenericCredentialProvider;
#endif
#ifndef __RASProvider_FWD_DEFINED__
#define __RASProvider_FWD_DEFINED__
typedef struct RASProvider RASProvider;
#endif
#ifndef __OnexCredentialProvider_FWD_DEFINED__
#define __OnexCredentialProvider_FWD_DEFINED__
typedef struct OnexCredentialProvider OnexCredentialProvider;
#endif
#ifndef __OnexPlapSmartcardCredentialProvider_FWD_DEFINED__
#define __OnexPlapSmartcardCredentialProvider_FWD_DEFINED__
typedef struct OnexPlapSmartcardCredentialProvider OnexPlapSmartcardCredentialProvider;
#endif
#ifndef __VaultProvider_FWD_DEFINED__
#define __VaultProvider_FWD_DEFINED__
typedef struct VaultProvider VaultProvider;
#endif
#ifndef __WinBioCredentialProvider_FWD_DEFINED__
#define __WinBioCredentialProvider_FWD_DEFINED__
typedef struct WinBioCredentialProvider WinBioCredentialProvider;
#endif
#include "wtypes.h"
#include "shobjidl.h"
typedef enum _CREDENTIAL_PROVIDER_USAGE_SCENARIO
{
	CPUS_INVALID = 0,
	CPUS_LOGON = (CPUS_INVALID + 1),
	CPUS_UNLOCK_WORKSTATION = (CPUS_LOGON + 1),
	CPUS_CHANGE_PASSWORD = (CPUS_UNLOCK_WORKSTATION + 1),
	CPUS_CREDUI = (CPUS_CHANGE_PASSWORD + 1),
	CPUS_PLAP = (CPUS_CREDUI + 1)
} CREDENTIAL_PROVIDER_USAGE_SCENARIO;
typedef enum _CREDENTIAL_PROVIDER_FIELD_TYPE
{
	CPFT_INVALID = 0,
	CPFT_LARGE_TEXT = (CPFT_INVALID + 1),
	CPFT_SMALL_TEXT = (CPFT_LARGE_TEXT + 1),
	CPFT_COMMAND_LINK = (CPFT_SMALL_TEXT + 1),
	CPFT_EDIT_TEXT = (CPFT_COMMAND_LINK + 1),
	CPFT_PASSWORD_TEXT = (CPFT_EDIT_TEXT + 1),
	CPFT_TILE_IMAGE = (CPFT_PASSWORD_TEXT + 1),
	CPFT_CHECKBOX = (CPFT_TILE_IMAGE + 1),
	CPFT_COMBOBOX = (CPFT_CHECKBOX + 1),
	CPFT_SUBMIT_BUTTON = (CPFT_COMBOBOX + 1)
} CREDENTIAL_PROVIDER_FIELD_TYPE;
typedef enum _CREDENTIAL_PROVIDER_FIELD_STATE
{
	CPFS_HIDDEN = 0,
	CPFS_DISPLAY_IN_SELECTED_TILE = (CPFS_HIDDEN + 1),
	CPFS_DISPLAY_IN_DESELECTED_TILE = (CPFS_DISPLAY_IN_SELECTED_TILE + 1),
	CPFS_DISPLAY_IN_BOTH = (CPFS_DISPLAY_IN_DESELECTED_TILE + 1)
} CREDENTIAL_PROVIDER_FIELD_STATE;
typedef enum _CREDENTIAL_PROVIDER_FIELD_INTERACTIVE_STATE
{
	CPFIS_NONE = 0,
	CPFIS_READONLY = (CPFIS_NONE + 1),
	CPFIS_DISABLED = (CPFIS_READONLY + 1),
	CPFIS_FOCUSED = (CPFIS_DISABLED + 1)
} CREDENTIAL_PROVIDER_FIELD_INTERACTIVE_STATE;
typedef struct _CREDENTIAL_PROVIDER_FIELD_DESCRIPTOR
{
	DWORD dwFieldID;
	CREDENTIAL_PROVIDER_FIELD_TYPE cpft;
	LPWSTR pszLabel;
	GUID guidFieldType;
} CREDENTIAL_PROVIDER_FIELD_DESCRIPTOR;
typedef enum _CREDENTIAL_PROVIDER_GET_SERIALIZATION_RESPONSE
{
	CPGSR_NO_CREDENTIAL_NOT_FINISHED = 0,
	CPGSR_NO_CREDENTIAL_FINISHED = (CPGSR_NO_CREDENTIAL_NOT_FINISHED + 1),
	CPGSR_RETURN_CREDENTIAL_FINISHED = (CPGSR_NO_CREDENTIAL_FINISHED + 1)
} CREDENTIAL_PROVIDER_GET_SERIALIZATION_RESPONSE;
typedef enum _CREDENTIAL_PROVIDER_STATUS_ICON
{
	CPSI_NONE = 0,
	CPSI_ERROR = (CPSI_NONE + 1),
	CPSI_WARNING = (CPSI_ERROR + 1),
	CPSI_SUCCESS = (CPSI_WARNING + 1)
} CREDENTIAL_PROVIDER_STATUS_ICON;
typedef struct _CREDENTIAL_PROVIDER_CREDENTIAL_SERIALIZATION
{
	ULONG ulAuthenticationPackage;
	GUID clsidCredentialProvider;
	ULONG cbSerialization;
	byte *rgbSerialization;
} CREDENTIAL_PROVIDER_CREDENTIAL_SERIALIZATION;
typedef LONG NTSTATUS;
#define CREDENTIAL_PROVIDER_NO_DEFAULT       ((DWORD)-1)
extern RPC_IF_HANDLE __MIDL_itf_credentialprovider_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_credentialprovider_0000_0000_v0_0_s_ifspec;
#ifndef __ICredentialProviderCredential_INTERFACE_DEFINED__
#define __ICredentialProviderCredential_INTERFACE_DEFINED__
extern const IID IID_ICredentialProviderCredential;
typedef struct ICredentialProviderCredentialVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (ICredentialProviderCredential * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (ICredentialProviderCredential * This);
	ULONG(STDMETHODCALLTYPE * Release) (ICredentialProviderCredential * This);
	HRESULT(STDMETHODCALLTYPE * Advise) (ICredentialProviderCredential * This, ICredentialProviderCredentialEvents * pcpce);
	HRESULT(STDMETHODCALLTYPE * UnAdvise) (ICredentialProviderCredential * This);
	HRESULT(STDMETHODCALLTYPE * SetSelected) (ICredentialProviderCredential * This, BOOL * pbAutoLogon);
	HRESULT(STDMETHODCALLTYPE * SetDeselected) (ICredentialProviderCredential * This);
	HRESULT(STDMETHODCALLTYPE * GetFieldState) (ICredentialProviderCredential * This, DWORD dwFieldID, CREDENTIAL_PROVIDER_FIELD_STATE * pcpfs, CREDENTIAL_PROVIDER_FIELD_INTERACTIVE_STATE * pcpfis);
	HRESULT(STDMETHODCALLTYPE * GetStringValue) (ICredentialProviderCredential * This, DWORD dwFieldID, LPWSTR * ppsz);
	HRESULT(STDMETHODCALLTYPE * GetBitmapValue) (ICredentialProviderCredential * This, DWORD dwFieldID, HBITMAP * phbmp);
	HRESULT(STDMETHODCALLTYPE * GetCheckboxValue) (ICredentialProviderCredential * This, DWORD dwFieldID, BOOL * pbChecked, LPWSTR * ppszLabel);
	HRESULT(STDMETHODCALLTYPE * GetSubmitButtonValue) (ICredentialProviderCredential * This, DWORD dwFieldID, DWORD * pdwAdjacentTo);
	HRESULT(STDMETHODCALLTYPE * GetComboBoxValueCount) (ICredentialProviderCredential * This, DWORD dwFieldID, DWORD * pcItems, DWORD * pdwSelectedItem);
	HRESULT(STDMETHODCALLTYPE * GetComboBoxValueAt) (ICredentialProviderCredential * This, DWORD dwFieldID, DWORD dwItem, LPWSTR * ppszItem);
	HRESULT(STDMETHODCALLTYPE * SetStringValue) (ICredentialProviderCredential * This, DWORD dwFieldID, LPCWSTR psz);
	HRESULT(STDMETHODCALLTYPE * SetCheckboxValue) (ICredentialProviderCredential * This, DWORD dwFieldID, BOOL bChecked);
	HRESULT(STDMETHODCALLTYPE * SetComboBoxSelectedValue) (ICredentialProviderCredential * This, DWORD dwFieldID, DWORD dwSelectedItem);
	HRESULT(STDMETHODCALLTYPE * CommandLinkClicked) (ICredentialProviderCredential * This, DWORD dwFieldID);
	HRESULT(STDMETHODCALLTYPE * GetSerialization) (ICredentialProviderCredential * This, CREDENTIAL_PROVIDER_GET_SERIALIZATION_RESPONSE * pcpgsr, CREDENTIAL_PROVIDER_CREDENTIAL_SERIALIZATION * pcpcs, LPWSTR * ppszOptionalStatusText, CREDENTIAL_PROVIDER_STATUS_ICON * pcpsiOptionalStatusIcon);
	HRESULT(STDMETHODCALLTYPE * ReportResult) (ICredentialProviderCredential * This, NTSTATUS ntsStatus, NTSTATUS ntsSubstatus, LPWSTR * ppszOptionalStatusText, CREDENTIAL_PROVIDER_STATUS_ICON * pcpsiOptionalStatusIcon);
	END_INTERFACE
}  ICredentialProviderCredentialVtbl;
interface ICredentialProviderCredential
{
	CONST_VTBL struct ICredentialProviderCredentialVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define ICredentialProviderCredential_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define ICredentialProviderCredential_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define ICredentialProviderCredential_Release(This)( (This)->lpVtbl -> Release(This) )
#define ICredentialProviderCredential_Advise(This,pcpce)( (This)->lpVtbl -> Advise(This,pcpce) )
#define ICredentialProviderCredential_UnAdvise(This)( (This)->lpVtbl -> UnAdvise(This) )
#define ICredentialProviderCredential_SetSelected(This,pbAutoLogon)( (This)->lpVtbl -> SetSelected(This,pbAutoLogon) )
#define ICredentialProviderCredential_SetDeselected(This)( (This)->lpVtbl -> SetDeselected(This) )
#define ICredentialProviderCredential_GetFieldState(This,dwFieldID,pcpfs,pcpfis)( (This)->lpVtbl -> GetFieldState(This,dwFieldID,pcpfs,pcpfis) )
#define ICredentialProviderCredential_GetStringValue(This,dwFieldID,ppsz)( (This)->lpVtbl -> GetStringValue(This,dwFieldID,ppsz) )
#define ICredentialProviderCredential_GetBitmapValue(This,dwFieldID,phbmp)( (This)->lpVtbl -> GetBitmapValue(This,dwFieldID,phbmp) )
#define ICredentialProviderCredential_GetCheckboxValue(This,dwFieldID,pbChecked,ppszLabel)( (This)->lpVtbl -> GetCheckboxValue(This,dwFieldID,pbChecked,ppszLabel) )
#define ICredentialProviderCredential_GetSubmitButtonValue(This,dwFieldID,pdwAdjacentTo)( (This)->lpVtbl -> GetSubmitButtonValue(This,dwFieldID,pdwAdjacentTo) )
#define ICredentialProviderCredential_GetComboBoxValueCount(This,dwFieldID,pcItems,pdwSelectedItem)( (This)->lpVtbl -> GetComboBoxValueCount(This,dwFieldID,pcItems,pdwSelectedItem) )
#define ICredentialProviderCredential_GetComboBoxValueAt(This,dwFieldID,dwItem,ppszItem)( (This)->lpVtbl -> GetComboBoxValueAt(This,dwFieldID,dwItem,ppszItem) )
#define ICredentialProviderCredential_SetStringValue(This,dwFieldID,psz)( (This)->lpVtbl -> SetStringValue(This,dwFieldID,psz) )
#define ICredentialProviderCredential_SetCheckboxValue(This,dwFieldID,bChecked)( (This)->lpVtbl -> SetCheckboxValue(This,dwFieldID,bChecked) )
#define ICredentialProviderCredential_SetComboBoxSelectedValue(This,dwFieldID,dwSelectedItem)( (This)->lpVtbl -> SetComboBoxSelectedValue(This,dwFieldID,dwSelectedItem) )
#define ICredentialProviderCredential_CommandLinkClicked(This,dwFieldID)( (This)->lpVtbl -> CommandLinkClicked(This,dwFieldID) )
#define ICredentialProviderCredential_GetSerialization(This,pcpgsr,pcpcs,ppszOptionalStatusText,pcpsiOptionalStatusIcon)( (This)->lpVtbl -> GetSerialization(This,pcpgsr,pcpcs,ppszOptionalStatusText,pcpsiOptionalStatusIcon) )
#define ICredentialProviderCredential_ReportResult(This,ntsStatus,ntsSubstatus,ppszOptionalStatusText,pcpsiOptionalStatusIcon)( (This)->lpVtbl -> ReportResult(This,ntsStatus,ntsSubstatus,ppszOptionalStatusText,pcpsiOptionalStatusIcon) )
#endif
#endif
#ifndef __IQueryContinueWithStatus_INTERFACE_DEFINED__
#define __IQueryContinueWithStatus_INTERFACE_DEFINED__
extern const IID IID_IQueryContinueWithStatus;
typedef struct IQueryContinueWithStatusVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IQueryContinueWithStatus * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IQueryContinueWithStatus * This);
	ULONG(STDMETHODCALLTYPE * Release) (IQueryContinueWithStatus * This);
	HRESULT(STDMETHODCALLTYPE * QueryContinue) (IQueryContinueWithStatus * This);
	HRESULT(STDMETHODCALLTYPE * SetStatusMessage) (IQueryContinueWithStatus * This, LPCWSTR psz);
	END_INTERFACE
}  IQueryContinueWithStatusVtbl;
interface IQueryContinueWithStatus
{
	CONST_VTBL struct IQueryContinueWithStatusVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IQueryContinueWithStatus_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IQueryContinueWithStatus_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define IQueryContinueWithStatus_Release(This)( (This)->lpVtbl -> Release(This) )
#define IQueryContinueWithStatus_QueryContinue(This)( (This)->lpVtbl -> QueryContinue(This) )
#define IQueryContinueWithStatus_SetStatusMessage(This,psz)( (This)->lpVtbl -> SetStatusMessage(This,psz) )
#endif
#endif
#ifndef __IConnectableCredentialProviderCredential_INTERFACE_DEFINED__
#define __IConnectableCredentialProviderCredential_INTERFACE_DEFINED__
extern const IID IID_IConnectableCredentialProviderCredential;
typedef struct IConnectableCredentialProviderCredentialVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IConnectableCredentialProviderCredential * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IConnectableCredentialProviderCredential * This);
	ULONG(STDMETHODCALLTYPE * Release) (IConnectableCredentialProviderCredential * This);
	HRESULT(STDMETHODCALLTYPE * Advise) (IConnectableCredentialProviderCredential * This, ICredentialProviderCredentialEvents * pcpce);
	HRESULT(STDMETHODCALLTYPE * UnAdvise) (IConnectableCredentialProviderCredential * This);
	HRESULT(STDMETHODCALLTYPE * SetSelected) (IConnectableCredentialProviderCredential * This, BOOL * pbAutoLogon);
	HRESULT(STDMETHODCALLTYPE * SetDeselected) (IConnectableCredentialProviderCredential * This);
	HRESULT(STDMETHODCALLTYPE * GetFieldState) (IConnectableCredentialProviderCredential * This, DWORD dwFieldID, CREDENTIAL_PROVIDER_FIELD_STATE * pcpfs, CREDENTIAL_PROVIDER_FIELD_INTERACTIVE_STATE * pcpfis);
	HRESULT(STDMETHODCALLTYPE * GetStringValue) (IConnectableCredentialProviderCredential * This, DWORD dwFieldID, LPWSTR * ppsz);
	HRESULT(STDMETHODCALLTYPE * GetBitmapValue) (IConnectableCredentialProviderCredential * This, DWORD dwFieldID, HBITMAP * phbmp);
	HRESULT(STDMETHODCALLTYPE * GetCheckboxValue) (IConnectableCredentialProviderCredential * This, DWORD dwFieldID, BOOL * pbChecked, LPWSTR * ppszLabel);
	HRESULT(STDMETHODCALLTYPE * GetSubmitButtonValue) (IConnectableCredentialProviderCredential * This, DWORD dwFieldID, DWORD * pdwAdjacentTo);
	HRESULT(STDMETHODCALLTYPE * GetComboBoxValueCount) (IConnectableCredentialProviderCredential * This, DWORD dwFieldID, DWORD * pcItems, DWORD * pdwSelectedItem);
	HRESULT(STDMETHODCALLTYPE * GetComboBoxValueAt) (IConnectableCredentialProviderCredential * This, DWORD dwFieldID, DWORD dwItem, LPWSTR * ppszItem);
	HRESULT(STDMETHODCALLTYPE * SetStringValue) (IConnectableCredentialProviderCredential * This, DWORD dwFieldID, LPCWSTR psz);
	HRESULT(STDMETHODCALLTYPE * SetCheckboxValue) (IConnectableCredentialProviderCredential * This, DWORD dwFieldID, BOOL bChecked);
	HRESULT(STDMETHODCALLTYPE * SetComboBoxSelectedValue) (IConnectableCredentialProviderCredential * This, DWORD dwFieldID, DWORD dwSelectedItem);
	HRESULT(STDMETHODCALLTYPE * CommandLinkClicked) (IConnectableCredentialProviderCredential * This, DWORD dwFieldID);
	HRESULT(STDMETHODCALLTYPE * GetSerialization) (IConnectableCredentialProviderCredential * This, CREDENTIAL_PROVIDER_GET_SERIALIZATION_RESPONSE * pcpgsr, CREDENTIAL_PROVIDER_CREDENTIAL_SERIALIZATION * pcpcs, LPWSTR * ppszOptionalStatusText, CREDENTIAL_PROVIDER_STATUS_ICON * pcpsiOptionalStatusIcon);
	HRESULT(STDMETHODCALLTYPE * ReportResult) (IConnectableCredentialProviderCredential * This, NTSTATUS ntsStatus, NTSTATUS ntsSubstatus, LPWSTR * ppszOptionalStatusText, CREDENTIAL_PROVIDER_STATUS_ICON * pcpsiOptionalStatusIcon);
	HRESULT(STDMETHODCALLTYPE * Connect) (IConnectableCredentialProviderCredential * This, IQueryContinueWithStatus * pqcws);
	HRESULT(STDMETHODCALLTYPE * Disconnect) (IConnectableCredentialProviderCredential * This);
	END_INTERFACE
}  IConnectableCredentialProviderCredentialVtbl;
interface IConnectableCredentialProviderCredential
{
	CONST_VTBL struct IConnectableCredentialProviderCredentialVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IConnectableCredentialProviderCredential_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IConnectableCredentialProviderCredential_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define IConnectableCredentialProviderCredential_Release(This)( (This)->lpVtbl -> Release(This) )
#define IConnectableCredentialProviderCredential_Advise(This,pcpce)( (This)->lpVtbl -> Advise(This,pcpce) )
#define IConnectableCredentialProviderCredential_UnAdvise(This)( (This)->lpVtbl -> UnAdvise(This) )
#define IConnectableCredentialProviderCredential_SetSelected(This,pbAutoLogon)( (This)->lpVtbl -> SetSelected(This,pbAutoLogon) )
#define IConnectableCredentialProviderCredential_SetDeselected(This)( (This)->lpVtbl -> SetDeselected(This) )
#define IConnectableCredentialProviderCredential_GetFieldState(This,dwFieldID,pcpfs,pcpfis)( (This)->lpVtbl -> GetFieldState(This,dwFieldID,pcpfs,pcpfis) )
#define IConnectableCredentialProviderCredential_GetStringValue(This,dwFieldID,ppsz)( (This)->lpVtbl -> GetStringValue(This,dwFieldID,ppsz) )
#define IConnectableCredentialProviderCredential_GetBitmapValue(This,dwFieldID,phbmp)( (This)->lpVtbl -> GetBitmapValue(This,dwFieldID,phbmp) )
#define IConnectableCredentialProviderCredential_GetCheckboxValue(This,dwFieldID,pbChecked,ppszLabel)( (This)->lpVtbl -> GetCheckboxValue(This,dwFieldID,pbChecked,ppszLabel) )
#define IConnectableCredentialProviderCredential_GetSubmitButtonValue(This,dwFieldID,pdwAdjacentTo)( (This)->lpVtbl -> GetSubmitButtonValue(This,dwFieldID,pdwAdjacentTo) )
#define IConnectableCredentialProviderCredential_GetComboBoxValueCount(This,dwFieldID,pcItems,pdwSelectedItem)( (This)->lpVtbl -> GetComboBoxValueCount(This,dwFieldID,pcItems,pdwSelectedItem) )
#define IConnectableCredentialProviderCredential_GetComboBoxValueAt(This,dwFieldID,dwItem,ppszItem)( (This)->lpVtbl -> GetComboBoxValueAt(This,dwFieldID,dwItem,ppszItem) )
#define IConnectableCredentialProviderCredential_SetStringValue(This,dwFieldID,psz)( (This)->lpVtbl -> SetStringValue(This,dwFieldID,psz) )
#define IConnectableCredentialProviderCredential_SetCheckboxValue(This,dwFieldID,bChecked)( (This)->lpVtbl -> SetCheckboxValue(This,dwFieldID,bChecked) )
#define IConnectableCredentialProviderCredential_SetComboBoxSelectedValue(This,dwFieldID,dwSelectedItem)( (This)->lpVtbl -> SetComboBoxSelectedValue(This,dwFieldID,dwSelectedItem) )
#define IConnectableCredentialProviderCredential_CommandLinkClicked(This,dwFieldID)( (This)->lpVtbl -> CommandLinkClicked(This,dwFieldID) )
#define IConnectableCredentialProviderCredential_GetSerialization(This,pcpgsr,pcpcs,ppszOptionalStatusText,pcpsiOptionalStatusIcon)( (This)->lpVtbl -> GetSerialization(This,pcpgsr,pcpcs,ppszOptionalStatusText,pcpsiOptionalStatusIcon) )
#define IConnectableCredentialProviderCredential_ReportResult(This,ntsStatus,ntsSubstatus,ppszOptionalStatusText,pcpsiOptionalStatusIcon)( (This)->lpVtbl -> ReportResult(This,ntsStatus,ntsSubstatus,ppszOptionalStatusText,pcpsiOptionalStatusIcon) )
#define IConnectableCredentialProviderCredential_Connect(This,pqcws)( (This)->lpVtbl -> Connect(This,pqcws) )
#define IConnectableCredentialProviderCredential_Disconnect(This)( (This)->lpVtbl -> Disconnect(This) )
#endif
#endif
#ifndef __ICredentialProviderCredentialEvents_INTERFACE_DEFINED__
#define __ICredentialProviderCredentialEvents_INTERFACE_DEFINED__
extern const IID IID_ICredentialProviderCredentialEvents;
typedef struct ICredentialProviderCredentialEventsVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (ICredentialProviderCredentialEvents * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (ICredentialProviderCredentialEvents * This);
	ULONG(STDMETHODCALLTYPE * Release) (ICredentialProviderCredentialEvents * This);
	HRESULT(STDMETHODCALLTYPE * SetFieldState) (ICredentialProviderCredentialEvents * This, ICredentialProviderCredential * pcpc, DWORD dwFieldID, CREDENTIAL_PROVIDER_FIELD_STATE cpfs);
	HRESULT(STDMETHODCALLTYPE * SetFieldInteractiveState) (ICredentialProviderCredentialEvents * This, ICredentialProviderCredential * pcpc, DWORD dwFieldID, CREDENTIAL_PROVIDER_FIELD_INTERACTIVE_STATE cpfis);
	HRESULT(STDMETHODCALLTYPE * SetFieldString) (ICredentialProviderCredentialEvents * This, ICredentialProviderCredential * pcpc, DWORD dwFieldID, LPCWSTR psz);
	HRESULT(STDMETHODCALLTYPE * SetFieldCheckbox) (ICredentialProviderCredentialEvents * This, ICredentialProviderCredential * pcpc, DWORD dwFieldID, BOOL bChecked, LPCWSTR pszLabel);
	HRESULT(STDMETHODCALLTYPE * SetFieldBitmap) (ICredentialProviderCredentialEvents * This, ICredentialProviderCredential * pcpc, DWORD dwFieldID, HBITMAP hbmp);
	HRESULT(STDMETHODCALLTYPE * SetFieldComboBoxSelectedItem) (ICredentialProviderCredentialEvents * This, ICredentialProviderCredential * pcpc, DWORD dwFieldID, DWORD dwSelectedItem);
	HRESULT(STDMETHODCALLTYPE * DeleteFieldComboBoxItem) (ICredentialProviderCredentialEvents * This, ICredentialProviderCredential * pcpc, DWORD dwFieldID, DWORD dwItem);
	HRESULT(STDMETHODCALLTYPE * AppendFieldComboBoxItem) (ICredentialProviderCredentialEvents * This, ICredentialProviderCredential * pcpc, DWORD dwFieldID, LPCWSTR pszItem);
	HRESULT(STDMETHODCALLTYPE * SetFieldSubmitButton) (ICredentialProviderCredentialEvents * This, ICredentialProviderCredential * pcpc, DWORD dwFieldID, DWORD dwAdjacentTo);
	HRESULT(STDMETHODCALLTYPE * OnCreatingWindow) (ICredentialProviderCredentialEvents * This, HWND * phwndOwner);
	END_INTERFACE
}  ICredentialProviderCredentialEventsVtbl;
interface ICredentialProviderCredentialEvents
{
	CONST_VTBL struct ICredentialProviderCredentialEventsVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define ICredentialProviderCredentialEvents_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define ICredentialProviderCredentialEvents_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define ICredentialProviderCredentialEvents_Release(This)( (This)->lpVtbl -> Release(This) )
#define ICredentialProviderCredentialEvents_SetFieldState(This,pcpc,dwFieldID,cpfs)( (This)->lpVtbl -> SetFieldState(This,pcpc,dwFieldID,cpfs) )
#define ICredentialProviderCredentialEvents_SetFieldInteractiveState(This,pcpc,dwFieldID,cpfis)( (This)->lpVtbl -> SetFieldInteractiveState(This,pcpc,dwFieldID,cpfis) )
#define ICredentialProviderCredentialEvents_SetFieldString(This,pcpc,dwFieldID,psz)( (This)->lpVtbl -> SetFieldString(This,pcpc,dwFieldID,psz) )
#define ICredentialProviderCredentialEvents_SetFieldCheckbox(This,pcpc,dwFieldID,bChecked,pszLabel)( (This)->lpVtbl -> SetFieldCheckbox(This,pcpc,dwFieldID,bChecked,pszLabel) )
#define ICredentialProviderCredentialEvents_SetFieldBitmap(This,pcpc,dwFieldID,hbmp)( (This)->lpVtbl -> SetFieldBitmap(This,pcpc,dwFieldID,hbmp) )
#define ICredentialProviderCredentialEvents_SetFieldComboBoxSelectedItem(This,pcpc,dwFieldID,dwSelectedItem)( (This)->lpVtbl -> SetFieldComboBoxSelectedItem(This,pcpc,dwFieldID,dwSelectedItem) )
#define ICredentialProviderCredentialEvents_DeleteFieldComboBoxItem(This,pcpc,dwFieldID,dwItem)( (This)->lpVtbl -> DeleteFieldComboBoxItem(This,pcpc,dwFieldID,dwItem) )
#define ICredentialProviderCredentialEvents_AppendFieldComboBoxItem(This,pcpc,dwFieldID,pszItem)( (This)->lpVtbl -> AppendFieldComboBoxItem(This,pcpc,dwFieldID,pszItem) )
#define ICredentialProviderCredentialEvents_SetFieldSubmitButton(This,pcpc,dwFieldID,dwAdjacentTo)( (This)->lpVtbl -> SetFieldSubmitButton(This,pcpc,dwFieldID,dwAdjacentTo) )
#define ICredentialProviderCredentialEvents_OnCreatingWindow(This,phwndOwner)( (This)->lpVtbl -> OnCreatingWindow(This,phwndOwner) )
#endif
#endif
extern RPC_IF_HANDLE __MIDL_itf_credentialprovider_0000_0004_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_credentialprovider_0000_0004_v0_0_s_ifspec;
#ifndef __ICredentialProvider_INTERFACE_DEFINED__
#define __ICredentialProvider_INTERFACE_DEFINED__
extern const IID IID_ICredentialProvider;
typedef struct ICredentialProviderVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (ICredentialProvider * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (ICredentialProvider * This);
	ULONG(STDMETHODCALLTYPE * Release) (ICredentialProvider * This);
	HRESULT(STDMETHODCALLTYPE * SetUsageScenario) (ICredentialProvider * This, CREDENTIAL_PROVIDER_USAGE_SCENARIO cpus, DWORD dwFlags);
	HRESULT(STDMETHODCALLTYPE * SetSerialization) (ICredentialProvider * This, const CREDENTIAL_PROVIDER_CREDENTIAL_SERIALIZATION * pcpcs);
	HRESULT(STDMETHODCALLTYPE * Advise) (ICredentialProvider * This, ICredentialProviderEvents * pcpe, UINT_PTR upAdviseContext);
	HRESULT(STDMETHODCALLTYPE * UnAdvise) (ICredentialProvider * This);
	HRESULT(STDMETHODCALLTYPE * GetFieldDescriptorCount) (ICredentialProvider * This, DWORD * pdwCount);
	HRESULT(STDMETHODCALLTYPE * GetFieldDescriptorAt) (ICredentialProvider * This, DWORD dwIndex, CREDENTIAL_PROVIDER_FIELD_DESCRIPTOR ** ppcpfd);
	HRESULT(STDMETHODCALLTYPE * GetCredentialCount) (ICredentialProvider * This, DWORD * pdwCount, DWORD * pdwDefault, BOOL * pbAutoLogonWithDefault);
	HRESULT(STDMETHODCALLTYPE * GetCredentialAt) (ICredentialProvider * This, DWORD dwIndex, ICredentialProviderCredential ** ppcpc);
	END_INTERFACE
}  ICredentialProviderVtbl;
interface ICredentialProvider
{
	CONST_VTBL struct ICredentialProviderVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define ICredentialProvider_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define ICredentialProvider_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define ICredentialProvider_Release(This)( (This)->lpVtbl -> Release(This) )
#define ICredentialProvider_SetUsageScenario(This,cpus,dwFlags)( (This)->lpVtbl -> SetUsageScenario(This,cpus,dwFlags) )
#define ICredentialProvider_SetSerialization(This,pcpcs)( (This)->lpVtbl -> SetSerialization(This,pcpcs) )
#define ICredentialProvider_Advise(This,pcpe,upAdviseContext)( (This)->lpVtbl -> Advise(This,pcpe,upAdviseContext) )
#define ICredentialProvider_UnAdvise(This)( (This)->lpVtbl -> UnAdvise(This) )
#define ICredentialProvider_GetFieldDescriptorCount(This,pdwCount)( (This)->lpVtbl -> GetFieldDescriptorCount(This,pdwCount) )
#define ICredentialProvider_GetFieldDescriptorAt(This,dwIndex,ppcpfd)( (This)->lpVtbl -> GetFieldDescriptorAt(This,dwIndex,ppcpfd) )
#define ICredentialProvider_GetCredentialCount(This,pdwCount,pdwDefault,pbAutoLogonWithDefault)( (This)->lpVtbl -> GetCredentialCount(This,pdwCount,pdwDefault,pbAutoLogonWithDefault) )
#define ICredentialProvider_GetCredentialAt(This,dwIndex,ppcpc)( (This)->lpVtbl -> GetCredentialAt(This,dwIndex,ppcpc) )
#endif
#endif
#ifndef __ICredentialProviderEvents_INTERFACE_DEFINED__
#define __ICredentialProviderEvents_INTERFACE_DEFINED__
extern const IID IID_ICredentialProviderEvents;
typedef struct ICredentialProviderEventsVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (ICredentialProviderEvents * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (ICredentialProviderEvents * This);
	ULONG(STDMETHODCALLTYPE * Release) (ICredentialProviderEvents * This);
	HRESULT(STDMETHODCALLTYPE * CredentialsChanged) (ICredentialProviderEvents * This, UINT_PTR upAdviseContext);
	END_INTERFACE
}  ICredentialProviderEventsVtbl;
interface ICredentialProviderEvents
{
	CONST_VTBL struct ICredentialProviderEventsVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define ICredentialProviderEvents_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define ICredentialProviderEvents_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define ICredentialProviderEvents_Release(This)( (This)->lpVtbl -> Release(This) )
#define ICredentialProviderEvents_CredentialsChanged(This,upAdviseContext)( (This)->lpVtbl -> CredentialsChanged(This,upAdviseContext) )
#endif
#endif
#ifndef __ICredentialProviderFilter_INTERFACE_DEFINED__
#define __ICredentialProviderFilter_INTERFACE_DEFINED__
extern const IID IID_ICredentialProviderFilter;
typedef struct ICredentialProviderFilterVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (ICredentialProviderFilter * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (ICredentialProviderFilter * This);
	ULONG(STDMETHODCALLTYPE * Release) (ICredentialProviderFilter * This);
	HRESULT(STDMETHODCALLTYPE * Filter) (ICredentialProviderFilter * This, CREDENTIAL_PROVIDER_USAGE_SCENARIO cpus, DWORD dwFlags, GUID * rgclsidProviders, BOOL * rgbAllow, DWORD cProviders);
	HRESULT(STDMETHODCALLTYPE * UpdateRemoteCredential) (ICredentialProviderFilter * This, const CREDENTIAL_PROVIDER_CREDENTIAL_SERIALIZATION * pcpcsIn, CREDENTIAL_PROVIDER_CREDENTIAL_SERIALIZATION * pcpcsOut);
	END_INTERFACE
}  ICredentialProviderFilterVtbl;
interface ICredentialProviderFilter
{
	CONST_VTBL struct ICredentialProviderFilterVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define ICredentialProviderFilter_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define ICredentialProviderFilter_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define ICredentialProviderFilter_Release(This)( (This)->lpVtbl -> Release(This) )
#define ICredentialProviderFilter_Filter(This,cpus,dwFlags,rgclsidProviders,rgbAllow,cProviders)( (This)->lpVtbl -> Filter(This,cpus,dwFlags,rgclsidProviders,rgbAllow,cProviders) )
#define ICredentialProviderFilter_UpdateRemoteCredential(This,pcpcsIn,pcpcsOut)( (This)->lpVtbl -> UpdateRemoteCredential(This,pcpcsIn,pcpcsOut) )
#endif
#endif
#ifndef __CredentialProviders_LIBRARY_DEFINED__
#define __CredentialProviders_LIBRARY_DEFINED__
extern const IID LIBID_CredentialProviders;
extern const CLSID CLSID_PasswordCredentialProvider;
extern const CLSID CLSID_NPCredentialProvider;
extern const CLSID CLSID_SmartcardCredentialProvider;
extern const CLSID CLSID_SmartcardPinProvider;
extern const CLSID CLSID_GenericCredentialProvider;
extern const CLSID CLSID_RASProvider;
extern const CLSID CLSID_OnexCredentialProvider;
extern const CLSID CLSID_OnexPlapSmartcardCredentialProvider;
extern const CLSID CLSID_VaultProvider;
extern const CLSID CLSID_WinBioCredentialProvider;
#endif
#endif

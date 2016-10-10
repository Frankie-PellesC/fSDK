/*+@@file@@----------------------------------------------------------------*//*!
 \file		Iadmw.h
 \par Description
            Extension and update of headers for PellesC compiler suite.
 \par Project:
            PellesC Headers extension
 \date		Created  on Sat Jul 16 18:34:37 2016
 \date		Modified on Sat Jul 16 18:34:37 2016
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
#ifndef __iadmw_h__
#define __iadmw_h__
#if __POCC__ >= 500
#pragma once
#endif
#ifndef __IMSAdminBaseW_FWD_DEFINED__
#define __IMSAdminBaseW_FWD_DEFINED__
typedef interface IMSAdminBaseW IMSAdminBaseW;
#endif
#ifndef __IMSAdminBase2W_FWD_DEFINED__
#define __IMSAdminBase2W_FWD_DEFINED__
typedef interface IMSAdminBase2W IMSAdminBase2W;
#endif
#ifndef __IMSAdminBase3W_FWD_DEFINED__
#define __IMSAdminBase3W_FWD_DEFINED__
typedef interface IMSAdminBase3W IMSAdminBase3W;
#endif
#ifndef __IMSImpExpHelpW_FWD_DEFINED__
#define __IMSImpExpHelpW_FWD_DEFINED__
typedef interface IMSImpExpHelpW IMSImpExpHelpW;
#endif
#ifndef __IMSAdminBaseSinkW_FWD_DEFINED__
#define __IMSAdminBaseSinkW_FWD_DEFINED__
typedef interface IMSAdminBaseSinkW IMSAdminBaseSinkW;
#endif
#ifndef __AsyncIMSAdminBaseSinkW_FWD_DEFINED__
#define __AsyncIMSAdminBaseSinkW_FWD_DEFINED__
typedef interface AsyncIMSAdminBaseSinkW AsyncIMSAdminBaseSinkW;
#endif
#include "mddefw.h"
#include "objidl.h"
#include "ocidl.h"
#ifndef _ADM_IADMW_
#define _ADM_IADMW_
#include <mdcommsg.h>
#include <mdmsg.h>
#define ADMINDATA_MAX_NAME_LEN           256
#define CLSID_MSAdminBase            CLSID_MSAdminBase_W
#define IID_IMSAdminBase             IID_IMSAdminBase_W
#define IMSAdminBase                 IMSAdminBaseW
#define IID_IMSAdminBase2            IID_IMSAdminBase2_W
#define IMSAdminBase2                IMSAdminBase2W
#define IID_IMSAdminBase3            IID_IMSAdminBase3_W
#define IMSAdminBase3                IMSAdminBase3W
#define IMSAdminBaseSink             IMSAdminBaseSinkW
#define IID_IMSAdminBaseSink         IID_IMSAdminBaseSink_W
#define IMSImpExpHelp                IMSImpExpHelpW
#define IID_IMSImpExpHelp            IID_IMSImpExpHelp_W
#define GETAdminBaseCLSID            GETAdminBaseCLSIDW
#define AsyncIMSAdminBaseSink        AsyncIMSAdminBaseSinkW
#define IID_AsyncIMSAdminBaseSink    IID_AsyncIMSAdminBaseSink_W
DEFINE_GUID(CLSID_MSAdminBase_W, 0xa9e69610, 0xb80d, 0x11d0, 0xb9, 0xb9, 0x00, 0xa0, 0xc9, 0x22, 0xe7, 0x50);
DEFINE_GUID(IID_IMSAdminBase_W, 0x70b51430, 0xb6ca, 0x11d0, 0xb9, 0xb9, 0x00, 0xa0, 0xc9, 0x22, 0xe7, 0x50);
DEFINE_GUID(IID_IMSAdminBase2_W, 0x8298d101, 0xf992, 0x43b7, 0x8e, 0xca, 0x50, 0x52, 0xd8, 0x85, 0xb9, 0x95);
DEFINE_GUID(IID_IMSAdminBase3_W, 0xf612954d, 0x3b0b, 0x4c56, 0x95, 0x63, 0x22, 0x7b, 0x7b, 0xe6, 0x24, 0xb4);
DEFINE_GUID(IID_IMSImpExpHelp_W, 0x29ff67ff, 0x8050, 0x480f, 0x9f, 0x30, 0xcc, 0x41, 0x63, 0x5f, 0x2f, 0x9d);
DEFINE_GUID(IID_IMSAdminBaseSink_W, 0xa9e69612, 0xb80d, 0x11d0, 0xb9, 0xb9, 0x00, 0xa0, 0xc9, 0x22, 0xe7, 0x50);
DEFINE_GUID(IID_AsyncIMSAdminBaseSink_W, 0xa9e69613, 0xb80d, 0x11d0, 0xb9, 0xb9, 0x00, 0xa0, 0xc9, 0x22, 0xe7, 0x50);
#define GETAdminBaseCLSIDW(IsService)    CLSID_MSAdminBase_W
extern RPC_IF_HANDLE __MIDL_itf_iadmw_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_iadmw_0000_0000_v0_0_s_ifspec;
#ifndef __IMSAdminBaseW_INTERFACE_DEFINED__
#define __IMSAdminBaseW_INTERFACE_DEFINED__
extern const IID IID_IMSAdminBaseW;
typedef struct IMSAdminBaseWVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IMSAdminBaseW * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IMSAdminBaseW * This);
	ULONG(STDMETHODCALLTYPE * Release) (IMSAdminBaseW * This);
	HRESULT(STDMETHODCALLTYPE * AddKey) (IMSAdminBaseW * This, METADATA_HANDLE hMDHandle, LPCWSTR pszMDPath);
	HRESULT(STDMETHODCALLTYPE * DeleteKey) (IMSAdminBaseW * This, METADATA_HANDLE hMDHandle, LPCWSTR pszMDPath);
	HRESULT(STDMETHODCALLTYPE * DeleteChildKeys) (IMSAdminBaseW * This, METADATA_HANDLE hMDHandle, LPCWSTR pszMDPath);
	HRESULT(STDMETHODCALLTYPE * EnumKeys) (IMSAdminBaseW * This, METADATA_HANDLE hMDHandle, LPCWSTR pszMDPath, LPWSTR pszMDName, DWORD dwMDEnumObjectIndex);
	HRESULT(STDMETHODCALLTYPE * CopyKey) (IMSAdminBaseW * This, METADATA_HANDLE hMDSourceHandle, LPCWSTR pszMDSourcePath, METADATA_HANDLE hMDDestHandle, LPCWSTR pszMDDestPath, BOOL bMDOverwriteFlag, BOOL bMDCopyFlag);
	HRESULT(STDMETHODCALLTYPE * RenameKey) (IMSAdminBaseW * This, METADATA_HANDLE hMDHandle, LPCWSTR pszMDPath, LPCWSTR pszMDNewName);
	HRESULT(STDMETHODCALLTYPE * SetData) (IMSAdminBaseW * This, METADATA_HANDLE hMDHandle, LPCWSTR pszMDPath, PMETADATA_RECORD pmdrMDData);
	HRESULT(STDMETHODCALLTYPE * GetData) (IMSAdminBaseW * This, METADATA_HANDLE hMDHandle, LPCWSTR pszMDPath, PMETADATA_RECORD pmdrMDData, DWORD * pdwMDRequiredDataLen);
	HRESULT(STDMETHODCALLTYPE * DeleteData) (IMSAdminBaseW * This, METADATA_HANDLE hMDHandle, LPCWSTR pszMDPath, DWORD dwMDIdentifier, DWORD dwMDDataType);
	HRESULT(STDMETHODCALLTYPE * EnumData) (IMSAdminBaseW * This, METADATA_HANDLE hMDHandle, LPCWSTR pszMDPath, PMETADATA_RECORD pmdrMDData, DWORD dwMDEnumDataIndex, DWORD * pdwMDRequiredDataLen);
	HRESULT(STDMETHODCALLTYPE * GetAllData) (IMSAdminBaseW * This, METADATA_HANDLE hMDHandle, LPCWSTR pszMDPath, DWORD dwMDAttributes, DWORD dwMDUserType, DWORD dwMDDataType, DWORD * pdwMDNumDataEntries, DWORD * pdwMDDataSetNumber, DWORD dwMDBufferSize, unsigned char *pbMDBuffer, DWORD * pdwMDRequiredBufferSize);
	HRESULT(STDMETHODCALLTYPE * DeleteAllData) (IMSAdminBaseW * This, METADATA_HANDLE hMDHandle, LPCWSTR pszMDPath, DWORD dwMDUserType, DWORD dwMDDataType);
	HRESULT(STDMETHODCALLTYPE * CopyData) (IMSAdminBaseW * This, METADATA_HANDLE hMDSourceHandle, LPCWSTR pszMDSourcePath, METADATA_HANDLE hMDDestHandle, LPCWSTR pszMDDestPath, DWORD dwMDAttributes, DWORD dwMDUserType, DWORD dwMDDataType, BOOL bMDCopyFlag);
	HRESULT(STDMETHODCALLTYPE * GetDataPaths) (IMSAdminBaseW * This, METADATA_HANDLE hMDHandle, LPCWSTR pszMDPath, DWORD dwMDIdentifier, DWORD dwMDDataType, DWORD dwMDBufferSize, WCHAR * pszBuffer, DWORD * pdwMDRequiredBufferSize);
	HRESULT(STDMETHODCALLTYPE * OpenKey) (IMSAdminBaseW * This, METADATA_HANDLE hMDHandle, LPCWSTR pszMDPath, DWORD dwMDAccessRequested, DWORD dwMDTimeOut, PMETADATA_HANDLE phMDNewHandle);
	HRESULT(STDMETHODCALLTYPE * CloseKey) (IMSAdminBaseW * This, METADATA_HANDLE hMDHandle);
	HRESULT(STDMETHODCALLTYPE * ChangePermissions) (IMSAdminBaseW * This, METADATA_HANDLE hMDHandle, DWORD dwMDTimeOut, DWORD dwMDAccessRequested);
	HRESULT(STDMETHODCALLTYPE * SaveData) (IMSAdminBaseW * This);
	HRESULT(STDMETHODCALLTYPE * GetHandleInfo) (IMSAdminBaseW * This, METADATA_HANDLE hMDHandle, PMETADATA_HANDLE_INFO pmdhiInfo);
	HRESULT(STDMETHODCALLTYPE * GetSystemChangeNumber) (IMSAdminBaseW * This, DWORD * pdwSystemChangeNumber);
	HRESULT(STDMETHODCALLTYPE * GetDataSetNumber) (IMSAdminBaseW * This, METADATA_HANDLE hMDHandle, LPCWSTR pszMDPath, DWORD * pdwMDDataSetNumber);
	HRESULT(STDMETHODCALLTYPE * SetLastChangeTime) (IMSAdminBaseW * This, METADATA_HANDLE hMDHandle, LPCWSTR pszMDPath, PFILETIME pftMDLastChangeTime, BOOL bLocalTime);
	HRESULT(STDMETHODCALLTYPE * GetLastChangeTime) (IMSAdminBaseW * This, METADATA_HANDLE hMDHandle, LPCWSTR pszMDPath, PFILETIME pftMDLastChangeTime, BOOL bLocalTime);
	HRESULT(STDMETHODCALLTYPE * KeyExchangePhase1) (IMSAdminBaseW * This);
	HRESULT(STDMETHODCALLTYPE * KeyExchangePhase2) (IMSAdminBaseW * This);
	HRESULT(STDMETHODCALLTYPE * Backup) (IMSAdminBaseW * This, LPCWSTR pszMDBackupLocation, DWORD dwMDVersion, DWORD dwMDFlags);
	HRESULT(STDMETHODCALLTYPE * Restore) (IMSAdminBaseW * This, LPCWSTR pszMDBackupLocation, DWORD dwMDVersion, DWORD dwMDFlags);
	HRESULT(STDMETHODCALLTYPE * EnumBackups) (IMSAdminBaseW * This, LPWSTR pszMDBackupLocation, DWORD * pdwMDVersion, PFILETIME pftMDBackupTime, DWORD dwMDEnumIndex);
	HRESULT(STDMETHODCALLTYPE * DeleteBackup) (IMSAdminBaseW * This, LPCWSTR pszMDBackupLocation, DWORD dwMDVersion);
	HRESULT(STDMETHODCALLTYPE * UnmarshalInterface) (IMSAdminBaseW * This, IMSAdminBaseW ** piadmbwInterface);
	HRESULT(STDMETHODCALLTYPE * GetServerGuid) (IMSAdminBaseW * This);
	END_INTERFACE
}  IMSAdminBaseWVtbl;
interface IMSAdminBaseW
{
	CONST_VTBL struct IMSAdminBaseWVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IMSAdminBaseW_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IMSAdminBaseW_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define IMSAdminBaseW_Release(This)( (This)->lpVtbl -> Release(This) )
#define IMSAdminBaseW_AddKey(This,hMDHandle,pszMDPath)( (This)->lpVtbl -> AddKey(This,hMDHandle,pszMDPath) )
#define IMSAdminBaseW_DeleteKey(This,hMDHandle,pszMDPath)( (This)->lpVtbl -> DeleteKey(This,hMDHandle,pszMDPath) )
#define IMSAdminBaseW_DeleteChildKeys(This,hMDHandle,pszMDPath)( (This)->lpVtbl -> DeleteChildKeys(This,hMDHandle,pszMDPath) )
#define IMSAdminBaseW_EnumKeys(This,hMDHandle,pszMDPath,pszMDName,dwMDEnumObjectIndex)( (This)->lpVtbl -> EnumKeys(This,hMDHandle,pszMDPath,pszMDName,dwMDEnumObjectIndex) )
#define IMSAdminBaseW_CopyKey(This,hMDSourceHandle,pszMDSourcePath,hMDDestHandle,pszMDDestPath,bMDOverwriteFlag,bMDCopyFlag)( (This)->lpVtbl -> CopyKey(This,hMDSourceHandle,pszMDSourcePath,hMDDestHandle,pszMDDestPath,bMDOverwriteFlag,bMDCopyFlag) )
#define IMSAdminBaseW_RenameKey(This,hMDHandle,pszMDPath,pszMDNewName)( (This)->lpVtbl -> RenameKey(This,hMDHandle,pszMDPath,pszMDNewName) )
#define IMSAdminBaseW_SetData(This,hMDHandle,pszMDPath,pmdrMDData)( (This)->lpVtbl -> SetData(This,hMDHandle,pszMDPath,pmdrMDData) )
#define IMSAdminBaseW_GetData(This,hMDHandle,pszMDPath,pmdrMDData,pdwMDRequiredDataLen)( (This)->lpVtbl -> GetData(This,hMDHandle,pszMDPath,pmdrMDData,pdwMDRequiredDataLen) )
#define IMSAdminBaseW_DeleteData(This,hMDHandle,pszMDPath,dwMDIdentifier,dwMDDataType)( (This)->lpVtbl -> DeleteData(This,hMDHandle,pszMDPath,dwMDIdentifier,dwMDDataType) )
#define IMSAdminBaseW_EnumData(This,hMDHandle,pszMDPath,pmdrMDData,dwMDEnumDataIndex,pdwMDRequiredDataLen)( (This)->lpVtbl -> EnumData(This,hMDHandle,pszMDPath,pmdrMDData,dwMDEnumDataIndex,pdwMDRequiredDataLen) )
#define IMSAdminBaseW_GetAllData(This,hMDHandle,pszMDPath,dwMDAttributes,dwMDUserType,dwMDDataType,pdwMDNumDataEntries,pdwMDDataSetNumber,dwMDBufferSize,pbMDBuffer,pdwMDRequiredBufferSize)( (This)->lpVtbl -> GetAllData(This,hMDHandle,pszMDPath,dwMDAttributes,dwMDUserType,dwMDDataType,pdwMDNumDataEntries,pdwMDDataSetNumber,dwMDBufferSize,pbMDBuffer,pdwMDRequiredBufferSize) )
#define IMSAdminBaseW_DeleteAllData(This,hMDHandle,pszMDPath,dwMDUserType,dwMDDataType)( (This)->lpVtbl -> DeleteAllData(This,hMDHandle,pszMDPath,dwMDUserType,dwMDDataType) )
#define IMSAdminBaseW_CopyData(This,hMDSourceHandle,pszMDSourcePath,hMDDestHandle,pszMDDestPath,dwMDAttributes,dwMDUserType,dwMDDataType,bMDCopyFlag)( (This)->lpVtbl -> CopyData(This,hMDSourceHandle,pszMDSourcePath,hMDDestHandle,pszMDDestPath,dwMDAttributes,dwMDUserType,dwMDDataType,bMDCopyFlag) )
#define IMSAdminBaseW_GetDataPaths(This,hMDHandle,pszMDPath,dwMDIdentifier,dwMDDataType,dwMDBufferSize,pszBuffer,pdwMDRequiredBufferSize)( (This)->lpVtbl -> GetDataPaths(This,hMDHandle,pszMDPath,dwMDIdentifier,dwMDDataType,dwMDBufferSize,pszBuffer,pdwMDRequiredBufferSize) )
#define IMSAdminBaseW_OpenKey(This,hMDHandle,pszMDPath,dwMDAccessRequested,dwMDTimeOut,phMDNewHandle)( (This)->lpVtbl -> OpenKey(This,hMDHandle,pszMDPath,dwMDAccessRequested,dwMDTimeOut,phMDNewHandle) )
#define IMSAdminBaseW_CloseKey(This,hMDHandle)( (This)->lpVtbl -> CloseKey(This,hMDHandle) )
#define IMSAdminBaseW_ChangePermissions(This,hMDHandle,dwMDTimeOut,dwMDAccessRequested)( (This)->lpVtbl -> ChangePermissions(This,hMDHandle,dwMDTimeOut,dwMDAccessRequested) )
#define IMSAdminBaseW_SaveData(This)( (This)->lpVtbl -> SaveData(This) )
#define IMSAdminBaseW_GetHandleInfo(This,hMDHandle,pmdhiInfo)( (This)->lpVtbl -> GetHandleInfo(This,hMDHandle,pmdhiInfo) )
#define IMSAdminBaseW_GetSystemChangeNumber(This,pdwSystemChangeNumber)( (This)->lpVtbl -> GetSystemChangeNumber(This,pdwSystemChangeNumber) )
#define IMSAdminBaseW_GetDataSetNumber(This,hMDHandle,pszMDPath,pdwMDDataSetNumber)( (This)->lpVtbl -> GetDataSetNumber(This,hMDHandle,pszMDPath,pdwMDDataSetNumber) )
#define IMSAdminBaseW_SetLastChangeTime(This,hMDHandle,pszMDPath,pftMDLastChangeTime,bLocalTime)( (This)->lpVtbl -> SetLastChangeTime(This,hMDHandle,pszMDPath,pftMDLastChangeTime,bLocalTime) )
#define IMSAdminBaseW_GetLastChangeTime(This,hMDHandle,pszMDPath,pftMDLastChangeTime,bLocalTime)( (This)->lpVtbl -> GetLastChangeTime(This,hMDHandle,pszMDPath,pftMDLastChangeTime,bLocalTime) )
#define IMSAdminBaseW_KeyExchangePhase1(This)( (This)->lpVtbl -> KeyExchangePhase1(This) )
#define IMSAdminBaseW_KeyExchangePhase2(This)( (This)->lpVtbl -> KeyExchangePhase2(This) )
#define IMSAdminBaseW_Backup(This,pszMDBackupLocation,dwMDVersion,dwMDFlags)( (This)->lpVtbl -> Backup(This,pszMDBackupLocation,dwMDVersion,dwMDFlags) )
#define IMSAdminBaseW_Restore(This,pszMDBackupLocation,dwMDVersion,dwMDFlags)( (This)->lpVtbl -> Restore(This,pszMDBackupLocation,dwMDVersion,dwMDFlags) )
#define IMSAdminBaseW_EnumBackups(This,pszMDBackupLocation,pdwMDVersion,pftMDBackupTime,dwMDEnumIndex)( (This)->lpVtbl -> EnumBackups(This,pszMDBackupLocation,pdwMDVersion,pftMDBackupTime,dwMDEnumIndex) )
#define IMSAdminBaseW_DeleteBackup(This,pszMDBackupLocation,dwMDVersion)( (This)->lpVtbl -> DeleteBackup(This,pszMDBackupLocation,dwMDVersion) )
#define IMSAdminBaseW_UnmarshalInterface(This,piadmbwInterface)( (This)->lpVtbl -> UnmarshalInterface(This,piadmbwInterface) )
#define IMSAdminBaseW_GetServerGuid(This)( (This)->lpVtbl -> GetServerGuid(This) )
#endif
HRESULT STDMETHODCALLTYPE IMSAdminBaseW_R_SetData_Proxy(IMSAdminBaseW *This, METADATA_HANDLE hMDHandle, LPCWSTR pszMDPath, PMETADATA_RECORD pmdrMDData);
void __RPC_STUB IMSAdminBaseW_R_SetData_Stub(IRpcStubBuffer *This, IRpcChannelBuffer *_pRpcChannelBuffer, PRPC_MESSAGE _pRpcMessage, DWORD *_pdwStubPhase);
HRESULT STDMETHODCALLTYPE IMSAdminBaseW_R_GetData_Proxy(IMSAdminBaseW *This, METADATA_HANDLE hMDHandle, LPCWSTR pszMDPath, PMETADATA_RECORD pmdrMDData, DWORD *pdwMDRequiredDataLen, struct _IIS_CRYPTO_BLOB **ppDataBlob);
void __RPC_STUB IMSAdminBaseW_R_GetData_Stub(IRpcStubBuffer *This, IRpcChannelBuffer *_pRpcChannelBuffer, PRPC_MESSAGE _pRpcMessage, DWORD *_pdwStubPhase);
HRESULT STDMETHODCALLTYPE IMSAdminBaseW_R_EnumData_Proxy(IMSAdminBaseW *This, METADATA_HANDLE hMDHandle, LPCWSTR pszMDPath, PMETADATA_RECORD pmdrMDData, DWORD dwMDEnumDataIndex, DWORD *pdwMDRequiredDataLen, struct _IIS_CRYPTO_BLOB **ppDataBlob);
void __RPC_STUB IMSAdminBaseW_R_EnumData_Stub(IRpcStubBuffer *This, IRpcChannelBuffer *_pRpcChannelBuffer, PRPC_MESSAGE _pRpcMessage, DWORD *_pdwStubPhase);
HRESULT STDMETHODCALLTYPE IMSAdminBaseW_R_GetAllData_Proxy(IMSAdminBaseW *This, METADATA_HANDLE hMDHandle, LPCWSTR pszMDPath, DWORD dwMDAttributes, DWORD dwMDUserType, DWORD dwMDDataType, DWORD *pdwMDNumDataEntries, DWORD *pdwMDDataSetNumber, DWORD dwMDBufferSize, DWORD *pdwMDRequiredBufferSize, struct _IIS_CRYPTO_BLOB **ppDataBlob);
void __RPC_STUB IMSAdminBaseW_R_GetAllData_Stub(IRpcStubBuffer *This, IRpcChannelBuffer *_pRpcChannelBuffer, PRPC_MESSAGE _pRpcMessage, DWORD *_pdwStubPhase);
HRESULT STDMETHODCALLTYPE IMSAdminBaseW_R_KeyExchangePhase1_Proxy(IMSAdminBaseW *This, struct _IIS_CRYPTO_BLOB *pClientKeyExchangeKeyBlob, struct _IIS_CRYPTO_BLOB *pClientSignatureKeyBlob, struct _IIS_CRYPTO_BLOB **ppServerKeyExchangeKeyBlob, struct _IIS_CRYPTO_BLOB **ppServerSignatureKeyBlob, struct _IIS_CRYPTO_BLOB **ppServerSessionKeyBlob);
void __RPC_STUB IMSAdminBaseW_R_KeyExchangePhase1_Stub(IRpcStubBuffer *This, IRpcChannelBuffer *_pRpcChannelBuffer, PRPC_MESSAGE _pRpcMessage, DWORD *_pdwStubPhase);
HRESULT STDMETHODCALLTYPE IMSAdminBaseW_R_KeyExchangePhase2_Proxy(IMSAdminBaseW *This, struct _IIS_CRYPTO_BLOB *pClientSessionKeyBlob, struct _IIS_CRYPTO_BLOB *pClientHashBlob, struct _IIS_CRYPTO_BLOB **ppServerHashBlob);
void __RPC_STUB IMSAdminBaseW_R_KeyExchangePhase2_Stub(IRpcStubBuffer *This, IRpcChannelBuffer *_pRpcChannelBuffer, PRPC_MESSAGE _pRpcMessage, DWORD *_pdwStubPhase);
HRESULT STDMETHODCALLTYPE IMSAdminBaseW_R_GetServerGuid_Proxy(IMSAdminBaseW *This, GUID *pServerGuid);
void __RPC_STUB IMSAdminBaseW_R_GetServerGuid_Stub(IRpcStubBuffer *This, IRpcChannelBuffer *_pRpcChannelBuffer, PRPC_MESSAGE _pRpcMessage, DWORD *_pdwStubPhase);
#endif
#ifndef __IMSAdminBase2W_INTERFACE_DEFINED__
#define __IMSAdminBase2W_INTERFACE_DEFINED__
extern const IID IID_IMSAdminBase2W;
typedef struct IMSAdminBase2WVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE *QueryInterface) (IMSAdminBase2W *This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE *AddRef) (IMSAdminBase2W *This);
	ULONG(STDMETHODCALLTYPE *Release) (IMSAdminBase2W *This);
	HRESULT(STDMETHODCALLTYPE *AddKey) (IMSAdminBase2W *This, METADATA_HANDLE hMDHandle, LPCWSTR pszMDPath);
	HRESULT(STDMETHODCALLTYPE *DeleteKey) (IMSAdminBase2W *This, METADATA_HANDLE hMDHandle, LPCWSTR pszMDPath);
	HRESULT(STDMETHODCALLTYPE *DeleteChildKeys) (IMSAdminBase2W *This, METADATA_HANDLE hMDHandle, LPCWSTR pszMDPath);
	HRESULT(STDMETHODCALLTYPE *EnumKeys) (IMSAdminBase2W *This, METADATA_HANDLE hMDHandle, LPCWSTR pszMDPath, LPWSTR pszMDName, DWORD dwMDEnumObjectIndex);
	HRESULT(STDMETHODCALLTYPE *CopyKey) (IMSAdminBase2W *This, METADATA_HANDLE hMDSourceHandle, LPCWSTR pszMDSourcePath, METADATA_HANDLE hMDDestHandle, LPCWSTR pszMDDestPath, BOOL bMDOverwriteFlag, BOOL bMDCopyFlag);
	HRESULT(STDMETHODCALLTYPE *RenameKey) (IMSAdminBase2W *This, METADATA_HANDLE hMDHandle, LPCWSTR pszMDPath, LPCWSTR pszMDNewName);
	HRESULT(STDMETHODCALLTYPE *SetData) (IMSAdminBase2W *This, METADATA_HANDLE hMDHandle, LPCWSTR pszMDPath, PMETADATA_RECORD pmdrMDData);
	HRESULT(STDMETHODCALLTYPE *GetData) (IMSAdminBase2W *This, METADATA_HANDLE hMDHandle, LPCWSTR pszMDPath, PMETADATA_RECORD pmdrMDData, DWORD *pdwMDRequiredDataLen);
	HRESULT(STDMETHODCALLTYPE *DeleteData) (IMSAdminBase2W *This, METADATA_HANDLE hMDHandle, LPCWSTR pszMDPath, DWORD dwMDIdentifier, DWORD dwMDDataType);
	HRESULT(STDMETHODCALLTYPE *EnumData) (IMSAdminBase2W *This, METADATA_HANDLE hMDHandle, LPCWSTR pszMDPath, PMETADATA_RECORD pmdrMDData, DWORD dwMDEnumDataIndex, DWORD *pdwMDRequiredDataLen);
	HRESULT(STDMETHODCALLTYPE *GetAllData) (IMSAdminBase2W *This, METADATA_HANDLE hMDHandle, LPCWSTR pszMDPath, DWORD dwMDAttributes, DWORD dwMDUserType, DWORD dwMDDataType, DWORD *pdwMDNumDataEntries, DWORD *pdwMDDataSetNumber, DWORD dwMDBufferSize, unsigned char *pbMDBuffer, DWORD *pdwMDRequiredBufferSize);
	HRESULT(STDMETHODCALLTYPE *DeleteAllData) (IMSAdminBase2W *This, METADATA_HANDLE hMDHandle, LPCWSTR pszMDPath, DWORD dwMDUserType, DWORD dwMDDataType);
	HRESULT(STDMETHODCALLTYPE *CopyData) (IMSAdminBase2W *This, METADATA_HANDLE hMDSourceHandle, LPCWSTR pszMDSourcePath, METADATA_HANDLE hMDDestHandle, LPCWSTR pszMDDestPath, DWORD dwMDAttributes, DWORD dwMDUserType, DWORD dwMDDataType, BOOL bMDCopyFlag);
	HRESULT(STDMETHODCALLTYPE *GetDataPaths) (IMSAdminBase2W *This, METADATA_HANDLE hMDHandle, LPCWSTR pszMDPath, DWORD dwMDIdentifier, DWORD dwMDDataType, DWORD dwMDBufferSize, WCHAR *pszBuffer, DWORD *pdwMDRequiredBufferSize);
	HRESULT(STDMETHODCALLTYPE *OpenKey) (IMSAdminBase2W *This, METADATA_HANDLE hMDHandle, LPCWSTR pszMDPath, DWORD dwMDAccessRequested, DWORD dwMDTimeOut, PMETADATA_HANDLE phMDNewHandle);
	HRESULT(STDMETHODCALLTYPE *CloseKey) (IMSAdminBase2W *This, METADATA_HANDLE hMDHandle);
	HRESULT(STDMETHODCALLTYPE *ChangePermissions) (IMSAdminBase2W *This, METADATA_HANDLE hMDHandle, DWORD dwMDTimeOut, DWORD dwMDAccessRequested);
	HRESULT(STDMETHODCALLTYPE *SaveData) (IMSAdminBase2W *This);
	HRESULT(STDMETHODCALLTYPE *GetHandleInfo) (IMSAdminBase2W *This, METADATA_HANDLE hMDHandle, PMETADATA_HANDLE_INFO pmdhiInfo);
	HRESULT(STDMETHODCALLTYPE *GetSystemChangeNumber) (IMSAdminBase2W *This, DWORD *pdwSystemChangeNumber);
	HRESULT(STDMETHODCALLTYPE *GetDataSetNumber) (IMSAdminBase2W *This, METADATA_HANDLE hMDHandle, LPCWSTR pszMDPath, DWORD *pdwMDDataSetNumber);
	HRESULT(STDMETHODCALLTYPE *SetLastChangeTime) (IMSAdminBase2W *This, METADATA_HANDLE hMDHandle, LPCWSTR pszMDPath, PFILETIME pftMDLastChangeTime, BOOL bLocalTime);
	HRESULT(STDMETHODCALLTYPE *GetLastChangeTime) (IMSAdminBase2W *This, METADATA_HANDLE hMDHandle, LPCWSTR pszMDPath, PFILETIME pftMDLastChangeTime, BOOL bLocalTime);
	HRESULT(STDMETHODCALLTYPE *KeyExchangePhase1) (IMSAdminBase2W *This);
	HRESULT(STDMETHODCALLTYPE *KeyExchangePhase2) (IMSAdminBase2W *This);
	HRESULT(STDMETHODCALLTYPE *Backup) (IMSAdminBase2W *This, LPCWSTR pszMDBackupLocation, DWORD dwMDVersion, DWORD dwMDFlags);
	HRESULT(STDMETHODCALLTYPE *Restore) (IMSAdminBase2W *This, LPCWSTR pszMDBackupLocation, DWORD dwMDVersion, DWORD dwMDFlags);
	HRESULT(STDMETHODCALLTYPE *EnumBackups) (IMSAdminBase2W *This, LPWSTR pszMDBackupLocation, DWORD *pdwMDVersion, PFILETIME pftMDBackupTime, DWORD dwMDEnumIndex);
	HRESULT(STDMETHODCALLTYPE *DeleteBackup) (IMSAdminBase2W *This, LPCWSTR pszMDBackupLocation, DWORD dwMDVersion);
	HRESULT(STDMETHODCALLTYPE *UnmarshalInterface) (IMSAdminBase2W *This, IMSAdminBaseW **piadmbwInterface);
	HRESULT(STDMETHODCALLTYPE *GetServerGuid) (IMSAdminBase2W *This);
	HRESULT(STDMETHODCALLTYPE *BackupWithPasswd) (IMSAdminBase2W *This, LPCWSTR pszMDBackupLocation, DWORD dwMDVersion, DWORD dwMDFlags, LPCWSTR pszPasswd);
	HRESULT(STDMETHODCALLTYPE *RestoreWithPasswd) (IMSAdminBase2W *This, LPCWSTR pszMDBackupLocation, DWORD dwMDVersion, DWORD dwMDFlags, LPCWSTR pszPasswd);
	HRESULT(STDMETHODCALLTYPE *Export) (IMSAdminBase2W *This, LPCWSTR pszPasswd, LPCWSTR pszFileName, LPCWSTR pszSourcePath, DWORD dwMDFlags);
	HRESULT(STDMETHODCALLTYPE *Import) (IMSAdminBase2W *This, LPCWSTR pszPasswd, LPCWSTR pszFileName, LPCWSTR pszSourcePath, LPCWSTR pszDestPath, DWORD dwMDFlags);
	HRESULT(STDMETHODCALLTYPE *RestoreHistory) (IMSAdminBase2W *This, LPCWSTR pszMDHistoryLocation, DWORD dwMDMajorVersion, DWORD dwMDMinorVersion, DWORD dwMDFlags);
	HRESULT(STDMETHODCALLTYPE *EnumHistory) (IMSAdminBase2W *This, LPWSTR pszMDHistoryLocation, DWORD *pdwMDMajorVersion, DWORD *pdwMDMinorVersion, PFILETIME pftMDHistoryTime, DWORD dwMDEnumIndex);
	END_INTERFACE
}  IMSAdminBase2WVtbl;
interface IMSAdminBase2W
{
	CONST_VTBL struct IMSAdminBase2WVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IMSAdminBase2W_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IMSAdminBase2W_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define IMSAdminBase2W_Release(This)( (This)->lpVtbl -> Release(This) )
#define IMSAdminBase2W_AddKey(This,hMDHandle,pszMDPath)( (This)->lpVtbl -> AddKey(This,hMDHandle,pszMDPath) )
#define IMSAdminBase2W_DeleteKey(This,hMDHandle,pszMDPath)( (This)->lpVtbl -> DeleteKey(This,hMDHandle,pszMDPath) )
#define IMSAdminBase2W_DeleteChildKeys(This,hMDHandle,pszMDPath)( (This)->lpVtbl -> DeleteChildKeys(This,hMDHandle,pszMDPath) )
#define IMSAdminBase2W_EnumKeys(This,hMDHandle,pszMDPath,pszMDName,dwMDEnumObjectIndex)( (This)->lpVtbl -> EnumKeys(This,hMDHandle,pszMDPath,pszMDName,dwMDEnumObjectIndex) )
#define IMSAdminBase2W_CopyKey(This,hMDSourceHandle,pszMDSourcePath,hMDDestHandle,pszMDDestPath,bMDOverwriteFlag,bMDCopyFlag)( (This)->lpVtbl -> CopyKey(This,hMDSourceHandle,pszMDSourcePath,hMDDestHandle,pszMDDestPath,bMDOverwriteFlag,bMDCopyFlag) )
#define IMSAdminBase2W_RenameKey(This,hMDHandle,pszMDPath,pszMDNewName)( (This)->lpVtbl -> RenameKey(This,hMDHandle,pszMDPath,pszMDNewName) )
#define IMSAdminBase2W_SetData(This,hMDHandle,pszMDPath,pmdrMDData)( (This)->lpVtbl -> SetData(This,hMDHandle,pszMDPath,pmdrMDData) )
#define IMSAdminBase2W_GetData(This,hMDHandle,pszMDPath,pmdrMDData,pdwMDRequiredDataLen)( (This)->lpVtbl -> GetData(This,hMDHandle,pszMDPath,pmdrMDData,pdwMDRequiredDataLen) )
#define IMSAdminBase2W_DeleteData(This,hMDHandle,pszMDPath,dwMDIdentifier,dwMDDataType)( (This)->lpVtbl -> DeleteData(This,hMDHandle,pszMDPath,dwMDIdentifier,dwMDDataType) )
#define IMSAdminBase2W_EnumData(This,hMDHandle,pszMDPath,pmdrMDData,dwMDEnumDataIndex,pdwMDRequiredDataLen)( (This)->lpVtbl -> EnumData(This,hMDHandle,pszMDPath,pmdrMDData,dwMDEnumDataIndex,pdwMDRequiredDataLen) )
#define IMSAdminBase2W_GetAllData(This,hMDHandle,pszMDPath,dwMDAttributes,dwMDUserType,dwMDDataType,pdwMDNumDataEntries,pdwMDDataSetNumber,dwMDBufferSize,pbMDBuffer,pdwMDRequiredBufferSize)( (This)->lpVtbl -> GetAllData(This,hMDHandle,pszMDPath,dwMDAttributes,dwMDUserType,dwMDDataType,pdwMDNumDataEntries,pdwMDDataSetNumber,dwMDBufferSize,pbMDBuffer,pdwMDRequiredBufferSize) )
#define IMSAdminBase2W_DeleteAllData(This,hMDHandle,pszMDPath,dwMDUserType,dwMDDataType)( (This)->lpVtbl -> DeleteAllData(This,hMDHandle,pszMDPath,dwMDUserType,dwMDDataType) )
#define IMSAdminBase2W_CopyData(This,hMDSourceHandle,pszMDSourcePath,hMDDestHandle,pszMDDestPath,dwMDAttributes,dwMDUserType,dwMDDataType,bMDCopyFlag)( (This)->lpVtbl -> CopyData(This,hMDSourceHandle,pszMDSourcePath,hMDDestHandle,pszMDDestPath,dwMDAttributes,dwMDUserType,dwMDDataType,bMDCopyFlag) )
#define IMSAdminBase2W_GetDataPaths(This,hMDHandle,pszMDPath,dwMDIdentifier,dwMDDataType,dwMDBufferSize,pszBuffer,pdwMDRequiredBufferSize)( (This)->lpVtbl -> GetDataPaths(This,hMDHandle,pszMDPath,dwMDIdentifier,dwMDDataType,dwMDBufferSize,pszBuffer,pdwMDRequiredBufferSize) )
#define IMSAdminBase2W_OpenKey(This,hMDHandle,pszMDPath,dwMDAccessRequested,dwMDTimeOut,phMDNewHandle)( (This)->lpVtbl -> OpenKey(This,hMDHandle,pszMDPath,dwMDAccessRequested,dwMDTimeOut,phMDNewHandle) )
#define IMSAdminBase2W_CloseKey(This,hMDHandle)( (This)->lpVtbl -> CloseKey(This,hMDHandle) )
#define IMSAdminBase2W_ChangePermissions(This,hMDHandle,dwMDTimeOut,dwMDAccessRequested)( (This)->lpVtbl -> ChangePermissions(This,hMDHandle,dwMDTimeOut,dwMDAccessRequested) )
#define IMSAdminBase2W_SaveData(This)( (This)->lpVtbl -> SaveData(This) )
#define IMSAdminBase2W_GetHandleInfo(This,hMDHandle,pmdhiInfo)( (This)->lpVtbl -> GetHandleInfo(This,hMDHandle,pmdhiInfo) )
#define IMSAdminBase2W_GetSystemChangeNumber(This,pdwSystemChangeNumber)( (This)->lpVtbl -> GetSystemChangeNumber(This,pdwSystemChangeNumber) )
#define IMSAdminBase2W_GetDataSetNumber(This,hMDHandle,pszMDPath,pdwMDDataSetNumber)( (This)->lpVtbl -> GetDataSetNumber(This,hMDHandle,pszMDPath,pdwMDDataSetNumber) )
#define IMSAdminBase2W_SetLastChangeTime(This,hMDHandle,pszMDPath,pftMDLastChangeTime,bLocalTime)( (This)->lpVtbl -> SetLastChangeTime(This,hMDHandle,pszMDPath,pftMDLastChangeTime,bLocalTime) )
#define IMSAdminBase2W_GetLastChangeTime(This,hMDHandle,pszMDPath,pftMDLastChangeTime,bLocalTime)( (This)->lpVtbl -> GetLastChangeTime(This,hMDHandle,pszMDPath,pftMDLastChangeTime,bLocalTime) )
#define IMSAdminBase2W_KeyExchangePhase1(This)( (This)->lpVtbl -> KeyExchangePhase1(This) )
#define IMSAdminBase2W_KeyExchangePhase2(This)( (This)->lpVtbl -> KeyExchangePhase2(This) )
#define IMSAdminBase2W_Backup(This,pszMDBackupLocation,dwMDVersion,dwMDFlags)( (This)->lpVtbl -> Backup(This,pszMDBackupLocation,dwMDVersion,dwMDFlags) )
#define IMSAdminBase2W_Restore(This,pszMDBackupLocation,dwMDVersion,dwMDFlags)( (This)->lpVtbl -> Restore(This,pszMDBackupLocation,dwMDVersion,dwMDFlags) )
#define IMSAdminBase2W_EnumBackups(This,pszMDBackupLocation,pdwMDVersion,pftMDBackupTime,dwMDEnumIndex)( (This)->lpVtbl -> EnumBackups(This,pszMDBackupLocation,pdwMDVersion,pftMDBackupTime,dwMDEnumIndex) )
#define IMSAdminBase2W_DeleteBackup(This,pszMDBackupLocation,dwMDVersion)( (This)->lpVtbl -> DeleteBackup(This,pszMDBackupLocation,dwMDVersion) )
#define IMSAdminBase2W_UnmarshalInterface(This,piadmbwInterface)( (This)->lpVtbl -> UnmarshalInterface(This,piadmbwInterface) )
#define IMSAdminBase2W_GetServerGuid(This)( (This)->lpVtbl -> GetServerGuid(This) )
#define IMSAdminBase2W_BackupWithPasswd(This,pszMDBackupLocation,dwMDVersion,dwMDFlags,pszPasswd)( (This)->lpVtbl -> BackupWithPasswd(This,pszMDBackupLocation,dwMDVersion,dwMDFlags,pszPasswd) )
#define IMSAdminBase2W_RestoreWithPasswd(This,pszMDBackupLocation,dwMDVersion,dwMDFlags,pszPasswd)( (This)->lpVtbl -> RestoreWithPasswd(This,pszMDBackupLocation,dwMDVersion,dwMDFlags,pszPasswd) )
#define IMSAdminBase2W_Export(This,pszPasswd,pszFileName,pszSourcePath,dwMDFlags)( (This)->lpVtbl -> Export(This,pszPasswd,pszFileName,pszSourcePath,dwMDFlags) )
#define IMSAdminBase2W_Import(This,pszPasswd,pszFileName,pszSourcePath,pszDestPath,dwMDFlags)( (This)->lpVtbl -> Import(This,pszPasswd,pszFileName,pszSourcePath,pszDestPath,dwMDFlags) )
#define IMSAdminBase2W_RestoreHistory(This,pszMDHistoryLocation,dwMDMajorVersion,dwMDMinorVersion,dwMDFlags)( (This)->lpVtbl -> RestoreHistory(This,pszMDHistoryLocation,dwMDMajorVersion,dwMDMinorVersion,dwMDFlags) )
#define IMSAdminBase2W_EnumHistory(This,pszMDHistoryLocation,pdwMDMajorVersion,pdwMDMinorVersion,pftMDHistoryTime,dwMDEnumIndex)( (This)->lpVtbl -> EnumHistory(This,pszMDHistoryLocation,pdwMDMajorVersion,pdwMDMinorVersion,pftMDHistoryTime,dwMDEnumIndex) )
#endif
#endif
#ifndef __IMSAdminBase3W_INTERFACE_DEFINED__
#define __IMSAdminBase3W_INTERFACE_DEFINED__
extern const IID IID_IMSAdminBase3W;
typedef struct IMSAdminBase3WVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE *QueryInterface) (IMSAdminBase3W *This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE *AddRef) (IMSAdminBase3W *This);
	ULONG(STDMETHODCALLTYPE *Release) (IMSAdminBase3W *This);
	HRESULT(STDMETHODCALLTYPE *AddKey) (IMSAdminBase3W *This, METADATA_HANDLE hMDHandle, LPCWSTR pszMDPath);
	HRESULT(STDMETHODCALLTYPE *DeleteKey) (IMSAdminBase3W *This, METADATA_HANDLE hMDHandle, LPCWSTR pszMDPath);
	HRESULT(STDMETHODCALLTYPE *DeleteChildKeys) (IMSAdminBase3W *This, METADATA_HANDLE hMDHandle, LPCWSTR pszMDPath);
	HRESULT(STDMETHODCALLTYPE *EnumKeys) (IMSAdminBase3W *This, METADATA_HANDLE hMDHandle, LPCWSTR pszMDPath, LPWSTR pszMDName, DWORD dwMDEnumObjectIndex);
	HRESULT(STDMETHODCALLTYPE *CopyKey) (IMSAdminBase3W *This, METADATA_HANDLE hMDSourceHandle, LPCWSTR pszMDSourcePath, METADATA_HANDLE hMDDestHandle, LPCWSTR pszMDDestPath, BOOL bMDOverwriteFlag, BOOL bMDCopyFlag);
	HRESULT(STDMETHODCALLTYPE *RenameKey) (IMSAdminBase3W *This, METADATA_HANDLE hMDHandle, LPCWSTR pszMDPath, LPCWSTR pszMDNewName);
	HRESULT(STDMETHODCALLTYPE *SetData) (IMSAdminBase3W *This, METADATA_HANDLE hMDHandle, LPCWSTR pszMDPath, PMETADATA_RECORD pmdrMDData);
	HRESULT(STDMETHODCALLTYPE *GetData) (IMSAdminBase3W *This, METADATA_HANDLE hMDHandle, LPCWSTR pszMDPath, PMETADATA_RECORD pmdrMDData, DWORD *pdwMDRequiredDataLen);
	HRESULT(STDMETHODCALLTYPE *DeleteData) (IMSAdminBase3W *This, METADATA_HANDLE hMDHandle, LPCWSTR pszMDPath, DWORD dwMDIdentifier, DWORD dwMDDataType);
	HRESULT(STDMETHODCALLTYPE *EnumData) (IMSAdminBase3W *This, METADATA_HANDLE hMDHandle, LPCWSTR pszMDPath, PMETADATA_RECORD pmdrMDData, DWORD dwMDEnumDataIndex, DWORD *pdwMDRequiredDataLen);
	HRESULT(STDMETHODCALLTYPE *GetAllData) (IMSAdminBase3W *This, METADATA_HANDLE hMDHandle, LPCWSTR pszMDPath, DWORD dwMDAttributes, DWORD dwMDUserType, DWORD dwMDDataType, DWORD *pdwMDNumDataEntries, DWORD *pdwMDDataSetNumber, DWORD dwMDBufferSize, unsigned char *pbMDBuffer, DWORD *pdwMDRequiredBufferSize);
	HRESULT(STDMETHODCALLTYPE *DeleteAllData) (IMSAdminBase3W *This, METADATA_HANDLE hMDHandle, LPCWSTR pszMDPath, DWORD dwMDUserType, DWORD dwMDDataType);
	HRESULT(STDMETHODCALLTYPE *CopyData) (IMSAdminBase3W *This, METADATA_HANDLE hMDSourceHandle, LPCWSTR pszMDSourcePath, METADATA_HANDLE hMDDestHandle, LPCWSTR pszMDDestPath, DWORD dwMDAttributes, DWORD dwMDUserType, DWORD dwMDDataType, BOOL bMDCopyFlag);
	HRESULT(STDMETHODCALLTYPE *GetDataPaths) (IMSAdminBase3W *This, METADATA_HANDLE hMDHandle, LPCWSTR pszMDPath, DWORD dwMDIdentifier, DWORD dwMDDataType, DWORD dwMDBufferSize, WCHAR *pszBuffer, DWORD *pdwMDRequiredBufferSize);
	HRESULT(STDMETHODCALLTYPE *OpenKey) (IMSAdminBase3W *This, METADATA_HANDLE hMDHandle, LPCWSTR pszMDPath, DWORD dwMDAccessRequested, DWORD dwMDTimeOut, PMETADATA_HANDLE phMDNewHandle);
	HRESULT(STDMETHODCALLTYPE *CloseKey) (IMSAdminBase3W *This, METADATA_HANDLE hMDHandle);
	HRESULT(STDMETHODCALLTYPE *ChangePermissions) (IMSAdminBase3W *This, METADATA_HANDLE hMDHandle, DWORD dwMDTimeOut, DWORD dwMDAccessRequested);
	HRESULT(STDMETHODCALLTYPE *SaveData) (IMSAdminBase3W *This);
	HRESULT(STDMETHODCALLTYPE *GetHandleInfo) (IMSAdminBase3W *This, METADATA_HANDLE hMDHandle, PMETADATA_HANDLE_INFO pmdhiInfo);
	HRESULT(STDMETHODCALLTYPE *GetSystemChangeNumber) (IMSAdminBase3W *This, DWORD *pdwSystemChangeNumber);
	HRESULT(STDMETHODCALLTYPE *GetDataSetNumber) (IMSAdminBase3W *This, METADATA_HANDLE hMDHandle, LPCWSTR pszMDPath, DWORD *pdwMDDataSetNumber);
	HRESULT(STDMETHODCALLTYPE *SetLastChangeTime) (IMSAdminBase3W *This, METADATA_HANDLE hMDHandle, LPCWSTR pszMDPath, PFILETIME pftMDLastChangeTime, BOOL bLocalTime);
	HRESULT(STDMETHODCALLTYPE *GetLastChangeTime) (IMSAdminBase3W *This, METADATA_HANDLE hMDHandle, LPCWSTR pszMDPath, PFILETIME pftMDLastChangeTime, BOOL bLocalTime);
	HRESULT(STDMETHODCALLTYPE *KeyExchangePhase1) (IMSAdminBase3W *This);
	HRESULT(STDMETHODCALLTYPE *KeyExchangePhase2) (IMSAdminBase3W *This);
	HRESULT(STDMETHODCALLTYPE *Backup) (IMSAdminBase3W *This, LPCWSTR pszMDBackupLocation, DWORD dwMDVersion, DWORD dwMDFlags);
	HRESULT(STDMETHODCALLTYPE *Restore) (IMSAdminBase3W *This, LPCWSTR pszMDBackupLocation, DWORD dwMDVersion, DWORD dwMDFlags);
	HRESULT(STDMETHODCALLTYPE *EnumBackups) (IMSAdminBase3W *This, LPWSTR pszMDBackupLocation, DWORD *pdwMDVersion, PFILETIME pftMDBackupTime, DWORD dwMDEnumIndex);
	HRESULT(STDMETHODCALLTYPE *DeleteBackup) (IMSAdminBase3W *This, LPCWSTR pszMDBackupLocation, DWORD dwMDVersion);
	HRESULT(STDMETHODCALLTYPE *UnmarshalInterface) (IMSAdminBase3W *This, IMSAdminBaseW **piadmbwInterface);
	HRESULT(STDMETHODCALLTYPE *GetServerGuid) (IMSAdminBase3W *This);
	HRESULT(STDMETHODCALLTYPE *BackupWithPasswd) (IMSAdminBase3W *This, LPCWSTR pszMDBackupLocation, DWORD dwMDVersion, DWORD dwMDFlags, LPCWSTR pszPasswd);
	HRESULT(STDMETHODCALLTYPE *RestoreWithPasswd) (IMSAdminBase3W *This, LPCWSTR pszMDBackupLocation, DWORD dwMDVersion, DWORD dwMDFlags, LPCWSTR pszPasswd);
	HRESULT(STDMETHODCALLTYPE *Export) (IMSAdminBase3W *This, LPCWSTR pszPasswd, LPCWSTR pszFileName, LPCWSTR pszSourcePath, DWORD dwMDFlags);
	HRESULT(STDMETHODCALLTYPE *Import) (IMSAdminBase3W *This, LPCWSTR pszPasswd, LPCWSTR pszFileName, LPCWSTR pszSourcePath, LPCWSTR pszDestPath, DWORD dwMDFlags);
	HRESULT(STDMETHODCALLTYPE *RestoreHistory) (IMSAdminBase3W *This, LPCWSTR pszMDHistoryLocation, DWORD dwMDMajorVersion, DWORD dwMDMinorVersion, DWORD dwMDFlags);
	HRESULT(STDMETHODCALLTYPE *EnumHistory) (IMSAdminBase3W *This, LPWSTR pszMDHistoryLocation, DWORD *pdwMDMajorVersion, DWORD *pdwMDMinorVersion, PFILETIME pftMDHistoryTime, DWORD dwMDEnumIndex);
	HRESULT(STDMETHODCALLTYPE *GetChildPaths) (IMSAdminBase3W *This, METADATA_HANDLE hMDHandle, LPCWSTR pszMDPath, DWORD cchMDBufferSize, WCHAR *pszBuffer, DWORD *pcchMDRequiredBufferSize);
	END_INTERFACE
}  IMSAdminBase3WVtbl;
interface IMSAdminBase3W
{
	CONST_VTBL struct IMSAdminBase3WVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IMSAdminBase3W_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IMSAdminBase3W_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define IMSAdminBase3W_Release(This)( (This)->lpVtbl -> Release(This) )
#define IMSAdminBase3W_AddKey(This,hMDHandle,pszMDPath)( (This)->lpVtbl -> AddKey(This,hMDHandle,pszMDPath) )
#define IMSAdminBase3W_DeleteKey(This,hMDHandle,pszMDPath)( (This)->lpVtbl -> DeleteKey(This,hMDHandle,pszMDPath) )
#define IMSAdminBase3W_DeleteChildKeys(This,hMDHandle,pszMDPath)( (This)->lpVtbl -> DeleteChildKeys(This,hMDHandle,pszMDPath) )
#define IMSAdminBase3W_EnumKeys(This,hMDHandle,pszMDPath,pszMDName,dwMDEnumObjectIndex)( (This)->lpVtbl -> EnumKeys(This,hMDHandle,pszMDPath,pszMDName,dwMDEnumObjectIndex) )
#define IMSAdminBase3W_CopyKey(This,hMDSourceHandle,pszMDSourcePath,hMDDestHandle,pszMDDestPath,bMDOverwriteFlag,bMDCopyFlag)( (This)->lpVtbl -> CopyKey(This,hMDSourceHandle,pszMDSourcePath,hMDDestHandle,pszMDDestPath,bMDOverwriteFlag,bMDCopyFlag) )
#define IMSAdminBase3W_RenameKey(This,hMDHandle,pszMDPath,pszMDNewName)( (This)->lpVtbl -> RenameKey(This,hMDHandle,pszMDPath,pszMDNewName) )
#define IMSAdminBase3W_SetData(This,hMDHandle,pszMDPath,pmdrMDData)( (This)->lpVtbl -> SetData(This,hMDHandle,pszMDPath,pmdrMDData) )
#define IMSAdminBase3W_GetData(This,hMDHandle,pszMDPath,pmdrMDData,pdwMDRequiredDataLen)( (This)->lpVtbl -> GetData(This,hMDHandle,pszMDPath,pmdrMDData,pdwMDRequiredDataLen) )
#define IMSAdminBase3W_DeleteData(This,hMDHandle,pszMDPath,dwMDIdentifier,dwMDDataType)( (This)->lpVtbl -> DeleteData(This,hMDHandle,pszMDPath,dwMDIdentifier,dwMDDataType) )
#define IMSAdminBase3W_EnumData(This,hMDHandle,pszMDPath,pmdrMDData,dwMDEnumDataIndex,pdwMDRequiredDataLen)( (This)->lpVtbl -> EnumData(This,hMDHandle,pszMDPath,pmdrMDData,dwMDEnumDataIndex,pdwMDRequiredDataLen) )
#define IMSAdminBase3W_GetAllData(This,hMDHandle,pszMDPath,dwMDAttributes,dwMDUserType,dwMDDataType,pdwMDNumDataEntries,pdwMDDataSetNumber,dwMDBufferSize,pbMDBuffer,pdwMDRequiredBufferSize)( (This)->lpVtbl -> GetAllData(This,hMDHandle,pszMDPath,dwMDAttributes,dwMDUserType,dwMDDataType,pdwMDNumDataEntries,pdwMDDataSetNumber,dwMDBufferSize,pbMDBuffer,pdwMDRequiredBufferSize) )
#define IMSAdminBase3W_DeleteAllData(This,hMDHandle,pszMDPath,dwMDUserType,dwMDDataType)( (This)->lpVtbl -> DeleteAllData(This,hMDHandle,pszMDPath,dwMDUserType,dwMDDataType) )
#define IMSAdminBase3W_CopyData(This,hMDSourceHandle,pszMDSourcePath,hMDDestHandle,pszMDDestPath,dwMDAttributes,dwMDUserType,dwMDDataType,bMDCopyFlag)( (This)->lpVtbl -> CopyData(This,hMDSourceHandle,pszMDSourcePath,hMDDestHandle,pszMDDestPath,dwMDAttributes,dwMDUserType,dwMDDataType,bMDCopyFlag) )
#define IMSAdminBase3W_GetDataPaths(This,hMDHandle,pszMDPath,dwMDIdentifier,dwMDDataType,dwMDBufferSize,pszBuffer,pdwMDRequiredBufferSize)( (This)->lpVtbl -> GetDataPaths(This,hMDHandle,pszMDPath,dwMDIdentifier,dwMDDataType,dwMDBufferSize,pszBuffer,pdwMDRequiredBufferSize) )
#define IMSAdminBase3W_OpenKey(This,hMDHandle,pszMDPath,dwMDAccessRequested,dwMDTimeOut,phMDNewHandle)( (This)->lpVtbl -> OpenKey(This,hMDHandle,pszMDPath,dwMDAccessRequested,dwMDTimeOut,phMDNewHandle) )
#define IMSAdminBase3W_CloseKey(This,hMDHandle)( (This)->lpVtbl -> CloseKey(This,hMDHandle) )
#define IMSAdminBase3W_ChangePermissions(This,hMDHandle,dwMDTimeOut,dwMDAccessRequested)( (This)->lpVtbl -> ChangePermissions(This,hMDHandle,dwMDTimeOut,dwMDAccessRequested) )
#define IMSAdminBase3W_SaveData(This)( (This)->lpVtbl -> SaveData(This) )
#define IMSAdminBase3W_GetHandleInfo(This,hMDHandle,pmdhiInfo)( (This)->lpVtbl -> GetHandleInfo(This,hMDHandle,pmdhiInfo) )
#define IMSAdminBase3W_GetSystemChangeNumber(This,pdwSystemChangeNumber)( (This)->lpVtbl -> GetSystemChangeNumber(This,pdwSystemChangeNumber) )
#define IMSAdminBase3W_GetDataSetNumber(This,hMDHandle,pszMDPath,pdwMDDataSetNumber)( (This)->lpVtbl -> GetDataSetNumber(This,hMDHandle,pszMDPath,pdwMDDataSetNumber) )
#define IMSAdminBase3W_SetLastChangeTime(This,hMDHandle,pszMDPath,pftMDLastChangeTime,bLocalTime)( (This)->lpVtbl -> SetLastChangeTime(This,hMDHandle,pszMDPath,pftMDLastChangeTime,bLocalTime) )
#define IMSAdminBase3W_GetLastChangeTime(This,hMDHandle,pszMDPath,pftMDLastChangeTime,bLocalTime)( (This)->lpVtbl -> GetLastChangeTime(This,hMDHandle,pszMDPath,pftMDLastChangeTime,bLocalTime) )
#define IMSAdminBase3W_KeyExchangePhase1(This)( (This)->lpVtbl -> KeyExchangePhase1(This) )
#define IMSAdminBase3W_KeyExchangePhase2(This)( (This)->lpVtbl -> KeyExchangePhase2(This) )
#define IMSAdminBase3W_Backup(This,pszMDBackupLocation,dwMDVersion,dwMDFlags)( (This)->lpVtbl -> Backup(This,pszMDBackupLocation,dwMDVersion,dwMDFlags) )
#define IMSAdminBase3W_Restore(This,pszMDBackupLocation,dwMDVersion,dwMDFlags)( (This)->lpVtbl -> Restore(This,pszMDBackupLocation,dwMDVersion,dwMDFlags) )
#define IMSAdminBase3W_EnumBackups(This,pszMDBackupLocation,pdwMDVersion,pftMDBackupTime,dwMDEnumIndex)( (This)->lpVtbl -> EnumBackups(This,pszMDBackupLocation,pdwMDVersion,pftMDBackupTime,dwMDEnumIndex) )
#define IMSAdminBase3W_DeleteBackup(This,pszMDBackupLocation,dwMDVersion)( (This)->lpVtbl -> DeleteBackup(This,pszMDBackupLocation,dwMDVersion) )
#define IMSAdminBase3W_UnmarshalInterface(This,piadmbwInterface)( (This)->lpVtbl -> UnmarshalInterface(This,piadmbwInterface) )
#define IMSAdminBase3W_GetServerGuid(This)( (This)->lpVtbl -> GetServerGuid(This) )
#define IMSAdminBase3W_BackupWithPasswd(This,pszMDBackupLocation,dwMDVersion,dwMDFlags,pszPasswd)( (This)->lpVtbl -> BackupWithPasswd(This,pszMDBackupLocation,dwMDVersion,dwMDFlags,pszPasswd) )
#define IMSAdminBase3W_RestoreWithPasswd(This,pszMDBackupLocation,dwMDVersion,dwMDFlags,pszPasswd)( (This)->lpVtbl -> RestoreWithPasswd(This,pszMDBackupLocation,dwMDVersion,dwMDFlags,pszPasswd) )
#define IMSAdminBase3W_Export(This,pszPasswd,pszFileName,pszSourcePath,dwMDFlags)( (This)->lpVtbl -> Export(This,pszPasswd,pszFileName,pszSourcePath,dwMDFlags) )
#define IMSAdminBase3W_Import(This,pszPasswd,pszFileName,pszSourcePath,pszDestPath,dwMDFlags)( (This)->lpVtbl -> Import(This,pszPasswd,pszFileName,pszSourcePath,pszDestPath,dwMDFlags) )
#define IMSAdminBase3W_RestoreHistory(This,pszMDHistoryLocation,dwMDMajorVersion,dwMDMinorVersion,dwMDFlags)( (This)->lpVtbl -> RestoreHistory(This,pszMDHistoryLocation,dwMDMajorVersion,dwMDMinorVersion,dwMDFlags) )
#define IMSAdminBase3W_EnumHistory(This,pszMDHistoryLocation,pdwMDMajorVersion,pdwMDMinorVersion,pftMDHistoryTime,dwMDEnumIndex)( (This)->lpVtbl -> EnumHistory(This,pszMDHistoryLocation,pdwMDMajorVersion,pdwMDMinorVersion,pftMDHistoryTime,dwMDEnumIndex) )
#define IMSAdminBase3W_GetChildPaths(This,hMDHandle,pszMDPath,cchMDBufferSize,pszBuffer,pcchMDRequiredBufferSize)( (This)->lpVtbl -> GetChildPaths(This,hMDHandle,pszMDPath,cchMDBufferSize,pszBuffer,pcchMDRequiredBufferSize) )
#endif
#endif
#ifndef __IMSImpExpHelpW_INTERFACE_DEFINED__
#define __IMSImpExpHelpW_INTERFACE_DEFINED__
extern const IID IID_IMSImpExpHelpW;
typedef struct IMSImpExpHelpWVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE *QueryInterface) (IMSImpExpHelpW *This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE *AddRef) (IMSImpExpHelpW *This);
	ULONG(STDMETHODCALLTYPE *Release) (IMSImpExpHelpW *This);
	HRESULT(STDMETHODCALLTYPE *EnumeratePathsInFile) (IMSImpExpHelpW *This, LPCWSTR pszFileName, LPCWSTR pszKeyType, DWORD dwMDBufferSize, WCHAR *pszBuffer, DWORD *pdwMDRequiredBufferSize);
	END_INTERFACE
}  IMSImpExpHelpWVtbl;
interface IMSImpExpHelpW
{
	CONST_VTBL struct IMSImpExpHelpWVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IMSImpExpHelpW_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IMSImpExpHelpW_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define IMSImpExpHelpW_Release(This)( (This)->lpVtbl -> Release(This) )
#define IMSImpExpHelpW_EnumeratePathsInFile(This,pszFileName,pszKeyType,dwMDBufferSize,pszBuffer,pdwMDRequiredBufferSize)( (This)->lpVtbl -> EnumeratePathsInFile(This,pszFileName,pszKeyType,dwMDBufferSize,pszBuffer,pdwMDRequiredBufferSize) )
#endif
#endif
#ifndef __IMSAdminBaseSinkW_INTERFACE_DEFINED__
#define __IMSAdminBaseSinkW_INTERFACE_DEFINED__
extern const IID IID_IMSAdminBaseSinkW;
typedef struct IMSAdminBaseSinkWVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE *QueryInterface) (IMSAdminBaseSinkW *This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE *AddRef) (IMSAdminBaseSinkW *This);
	ULONG(STDMETHODCALLTYPE *Release) (IMSAdminBaseSinkW *This);
	HRESULT(STDMETHODCALLTYPE *SinkNotify) (IMSAdminBaseSinkW *This, DWORD dwMDNumElements, MD_CHANGE_OBJECT_W pcoChangeList[]);
	HRESULT(STDMETHODCALLTYPE *ShutdownNotify) (IMSAdminBaseSinkW *This);
	END_INTERFACE
}  IMSAdminBaseSinkWVtbl;
interface IMSAdminBaseSinkW
{
	CONST_VTBL struct IMSAdminBaseSinkWVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IMSAdminBaseSinkW_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IMSAdminBaseSinkW_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define IMSAdminBaseSinkW_Release(This)( (This)->lpVtbl -> Release(This) )
#define IMSAdminBaseSinkW_SinkNotify(This,dwMDNumElements,pcoChangeList)( (This)->lpVtbl -> SinkNotify(This,dwMDNumElements,pcoChangeList) )
#define IMSAdminBaseSinkW_ShutdownNotify(This)( (This)->lpVtbl -> ShutdownNotify(This) )
#endif
#endif
#ifndef __AsyncIMSAdminBaseSinkW_INTERFACE_DEFINED__
#define __AsyncIMSAdminBaseSinkW_INTERFACE_DEFINED__
extern const IID IID_AsyncIMSAdminBaseSinkW;
typedef struct AsyncIMSAdminBaseSinkWVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE *QueryInterface) (AsyncIMSAdminBaseSinkW *This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE *AddRef) (AsyncIMSAdminBaseSinkW *This);
	ULONG(STDMETHODCALLTYPE *Release) (AsyncIMSAdminBaseSinkW *This);
	HRESULT(STDMETHODCALLTYPE *Begin_SinkNotify) (AsyncIMSAdminBaseSinkW *This, DWORD dwMDNumElements, MD_CHANGE_OBJECT_W pcoChangeList[]);
	HRESULT(STDMETHODCALLTYPE *Finish_SinkNotify) (AsyncIMSAdminBaseSinkW *This);
	HRESULT(STDMETHODCALLTYPE *Begin_ShutdownNotify) (AsyncIMSAdminBaseSinkW *This);
	HRESULT(STDMETHODCALLTYPE *Finish_ShutdownNotify) (AsyncIMSAdminBaseSinkW *This);
	END_INTERFACE
}  AsyncIMSAdminBaseSinkWVtbl;
interface AsyncIMSAdminBaseSinkW
{
	CONST_VTBL struct AsyncIMSAdminBaseSinkWVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define AsyncIMSAdminBaseSinkW_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define AsyncIMSAdminBaseSinkW_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define AsyncIMSAdminBaseSinkW_Release(This)( (This)->lpVtbl -> Release(This) )
#define AsyncIMSAdminBaseSinkW_Begin_SinkNotify(This,dwMDNumElements,pcoChangeList)( (This)->lpVtbl -> Begin_SinkNotify(This,dwMDNumElements,pcoChangeList) )
#define AsyncIMSAdminBaseSinkW_Finish_SinkNotify(This)( (This)->lpVtbl -> Finish_SinkNotify(This) )
#define AsyncIMSAdminBaseSinkW_Begin_ShutdownNotify(This)( (This)->lpVtbl -> Begin_ShutdownNotify(This) )
#define AsyncIMSAdminBaseSinkW_Finish_ShutdownNotify(This)( (This)->lpVtbl -> Finish_ShutdownNotify(This) )
#endif
#endif
#endif
extern RPC_IF_HANDLE __MIDL_itf_iadmw_0000_0005_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_iadmw_0000_0005_v0_0_s_ifspec;
HRESULT STDMETHODCALLTYPE IMSAdminBaseW_SetData_Proxy(IMSAdminBaseW *This, METADATA_HANDLE hMDHandle, LPCWSTR pszMDPath, PMETADATA_RECORD pmdrMDData);
HRESULT STDMETHODCALLTYPE IMSAdminBaseW_SetData_Stub(IMSAdminBaseW *This, METADATA_HANDLE hMDHandle, LPCWSTR pszMDPath, PMETADATA_RECORD pmdrMDData);
HRESULT STDMETHODCALLTYPE IMSAdminBaseW_GetData_Proxy(IMSAdminBaseW *This, METADATA_HANDLE hMDHandle, LPCWSTR pszMDPath, PMETADATA_RECORD pmdrMDData, DWORD *pdwMDRequiredDataLen);
HRESULT STDMETHODCALLTYPE IMSAdminBaseW_GetData_Stub(IMSAdminBaseW *This, METADATA_HANDLE hMDHandle, LPCWSTR pszMDPath, PMETADATA_RECORD pmdrMDData, DWORD *pdwMDRequiredDataLen, struct _IIS_CRYPTO_BLOB **ppDataBlob);
HRESULT STDMETHODCALLTYPE IMSAdminBaseW_EnumData_Proxy(IMSAdminBaseW *This, METADATA_HANDLE hMDHandle, LPCWSTR pszMDPath, PMETADATA_RECORD pmdrMDData, DWORD dwMDEnumDataIndex, DWORD *pdwMDRequiredDataLen);
HRESULT STDMETHODCALLTYPE IMSAdminBaseW_EnumData_Stub(IMSAdminBaseW *This, METADATA_HANDLE hMDHandle, LPCWSTR pszMDPath, PMETADATA_RECORD pmdrMDData, DWORD dwMDEnumDataIndex, DWORD *pdwMDRequiredDataLen, struct _IIS_CRYPTO_BLOB **ppDataBlob);
HRESULT STDMETHODCALLTYPE IMSAdminBaseW_GetAllData_Proxy(IMSAdminBaseW *This, METADATA_HANDLE hMDHandle, LPCWSTR pszMDPath, DWORD dwMDAttributes, DWORD dwMDUserType, DWORD dwMDDataType, DWORD *pdwMDNumDataEntries, DWORD *pdwMDDataSetNumber, DWORD dwMDBufferSize, unsigned char *pbMDBuffer, DWORD *pdwMDRequiredBufferSize);
HRESULT STDMETHODCALLTYPE IMSAdminBaseW_GetAllData_Stub(IMSAdminBaseW *This, METADATA_HANDLE hMDHandle, LPCWSTR pszMDPath, DWORD dwMDAttributes, DWORD dwMDUserType, DWORD dwMDDataType, DWORD *pdwMDNumDataEntries, DWORD *pdwMDDataSetNumber, DWORD dwMDBufferSize, DWORD *pdwMDRequiredBufferSize, struct _IIS_CRYPTO_BLOB **ppDataBlob);
HRESULT STDMETHODCALLTYPE IMSAdminBaseW_KeyExchangePhase1_Proxy(IMSAdminBaseW *This);
HRESULT STDMETHODCALLTYPE IMSAdminBaseW_KeyExchangePhase1_Stub(IMSAdminBaseW *This, struct _IIS_CRYPTO_BLOB *pClientKeyExchangeKeyBlob, struct _IIS_CRYPTO_BLOB *pClientSignatureKeyBlob, struct _IIS_CRYPTO_BLOB **ppServerKeyExchangeKeyBlob, struct _IIS_CRYPTO_BLOB **ppServerSignatureKeyBlob, struct _IIS_CRYPTO_BLOB **ppServerSessionKeyBlob);
HRESULT STDMETHODCALLTYPE IMSAdminBaseW_KeyExchangePhase2_Proxy(IMSAdminBaseW *This);
HRESULT STDMETHODCALLTYPE IMSAdminBaseW_KeyExchangePhase2_Stub(IMSAdminBaseW *This, struct _IIS_CRYPTO_BLOB *pClientSessionKeyBlob, struct _IIS_CRYPTO_BLOB *pClientHashBlob, struct _IIS_CRYPTO_BLOB **ppServerHashBlob);
HRESULT STDMETHODCALLTYPE IMSAdminBaseW_GetServerGuid_Proxy(IMSAdminBaseW *This);
HRESULT STDMETHODCALLTYPE IMSAdminBaseW_GetServerGuid_Stub(IMSAdminBaseW *This, GUID *pServerGuid);
#endif

/*+@@file@@----------------------------------------------------------------*//*!
 \file		dpx1.h
 \par Description 
            Extension and update of headers for PellesC compiler suite.
 \par Project: 
            PellesC Headers extension
 \date		Created  on Wed Jul  6 14:14:22 2016
 \date		Modified on Wed Jul  6 14:14:22 2016
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
#ifndef __dpx1_h__
#define __dpx1_h__
#if __POCC__ >= 500
#pragma once
#endif
#ifndef __IDpxJob_FWD_DEFINED__
#define __IDpxJob_FWD_DEFINED__
typedef interface IDpxJob IDpxJob;
#endif
#ifndef __IDpxContainer_FWD_DEFINED__
#define __IDpxContainer_FWD_DEFINED__
typedef interface IDpxContainer IDpxContainer;
#endif
#ifndef __IDpxFile_FWD_DEFINED__
#define __IDpxFile_FWD_DEFINED__
typedef interface IDpxFile IDpxFile;
#endif
#ifndef __IDpxContainerDirectoryEntry_FWD_DEFINED__
#define __IDpxContainerDirectoryEntry_FWD_DEFINED__
typedef interface IDpxContainerDirectoryEntry IDpxContainerDirectoryEntry;
#endif
#ifndef __IDpxDownloadProvider_FWD_DEFINED__
#define __IDpxDownloadProvider_FWD_DEFINED__
typedef interface IDpxDownloadProvider IDpxDownloadProvider;
#endif
#ifndef __IDpxDownloadCallback_FWD_DEFINED__
#define __IDpxDownloadCallback_FWD_DEFINED__
typedef interface IDpxDownloadCallback IDpxDownloadCallback;
#endif
#ifndef __IEnumDpxContainers_FWD_DEFINED__
#define __IEnumDpxContainers_FWD_DEFINED__
typedef interface IEnumDpxContainers IEnumDpxContainers;
#endif
#ifndef __IEnumDpxFiles_FWD_DEFINED__
#define __IEnumDpxFiles_FWD_DEFINED__
typedef interface IEnumDpxFiles IEnumDpxFiles;
#endif
#ifndef __IEnumDpxContainerDirectoryEntries_FWD_DEFINED__
#define __IEnumDpxContainerDirectoryEntries_FWD_DEFINED__
typedef interface IEnumDpxContainerDirectoryEntries IEnumDpxContainerDirectoryEntries;
#endif
#include "oaidl.h"
#include "ocidl.h"
typedef unsigned int ALG_ID;
typedef enum __MIDL___MIDL_itf_dpx1_0000_0000_0001
{
	 DPX_RESUME_AND_DOWNLOAD = 0,
	DPX_RESUME_UNTIL_DOWNLOAD = 0x1,
	DPX_RESUME_AND_DOWNLOAD_FALLBACK = 0x2
} DPX_RESUME_TYPE;
#define DPX_MAX_HASH_SIZE 64
typedef struct __MIDL___MIDL_itf_dpx1_0000_0000_0002
{
	ALG_ID AlgorithmId;
	UINT HashSize;
	BYTE HashData[64];
} DPX_HASH;
typedef struct __MIDL___MIDL_itf_dpx1_0000_0000_0003
{
	UINT64 Offset;
	UINT64 Length;
} DPX_BYTE_RANGE;
typedef enum __MIDL___MIDL_itf_dpx1_0000_0000_0004
{
	 DPX_PHASE_JOB_IDLE = 0,
	DPX_PHASE_DOWNLOAD_INDEX = 0x10,
	DPX_PHASE_INVENTORY = 0x20,
	DPX_PHASE_DOWNLOAD_FILES = 0x30,
	DPX_PHASE_EXPAND_FILES = 0x40,
	DPX_PHASE_JOB_INPROGRESS = 0x50,
	DPX_PHASE_JOB_COMPLETE = 0x7f00,
	DPX_PHASE_JOB_CANCELLED = 0xfffe,
	DPX_PHASE_JOB_FAILURE = 0xffff
} DPX_PROGRESS_PHASE;
typedef struct __MIDL___MIDL_itf_dpx1_0000_0000_0005
{
	UINT64 Completed;
	UINT64 Remaining;
} DPX_PROGRESS_REMAIN;
typedef struct __MIDL___MIDL_itf_dpx1_0000_0000_0006
{
	DPX_PROGRESS_REMAIN Inventory;
	DPX_PROGRESS_REMAIN Download;
	DPX_PROGRESS_REMAIN Expansion;
	DPX_PROGRESS_REMAIN Files;
	DPX_PROGRESS_REMAIN Overall;
	DPX_PROGRESS_PHASE ePhase;
} DPX_PROGRESS;
extern RPC_IF_HANDLE __MIDL_itf_dpx1_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_dpx1_0000_0000_v0_0_s_ifspec;
#ifndef __IDpxJob_INTERFACE_DEFINED__
#define __IDpxJob_INTERFACE_DEFINED__
extern const IID IID_IDpxJob;
typedef struct IDpxJobVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IDpxJob * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IDpxJob * This);
	ULONG(STDMETHODCALLTYPE * Release) (IDpxJob * This);
	HRESULT(STDMETHODCALLTYPE * GetTargetPath) (IDpxJob * This, LPWSTR * TargetPath);
	HRESULT(STDMETHODCALLTYPE * AddContainer) (IDpxJob * This, LPCWSTR ContainerPath, IDpxContainer ** ppContainer);
	HRESULT(STDMETHODCALLTYPE * EnumContainers) (IDpxJob * This, IEnumDpxContainers ** ppEnumContainers);
	HRESULT(STDMETHODCALLTYPE * SetDownloadProvider) (IDpxJob * This, IDpxDownloadProvider * pDownloadProvider);
	HRESULT(STDMETHODCALLTYPE * GetDownloadProvider) (IDpxJob * This, IDpxDownloadProvider ** ppDownloadProvider);
	HRESULT(STDMETHODCALLTYPE * Resume) (IDpxJob * This, DPX_RESUME_TYPE eResumeType);
	HRESULT(STDMETHODCALLTYPE * Suspend) (IDpxJob * This);
	HRESULT(STDMETHODCALLTYPE * Cancel) (IDpxJob * This);
	HRESULT(STDMETHODCALLTYPE * GetProgress) (IDpxJob * This, DPX_PROGRESS * pProgress);
	HRESULT(STDMETHODCALLTYPE * SaveJobState) (IDpxJob * This);
	HRESULT(STDMETHODCALLTYPE * SetUserValue) (IDpxJob * This, UINT64 UserValue);
	HRESULT(STDMETHODCALLTYPE * GetUserValue) (IDpxJob * This, UINT64 * pUserValue);
	HRESULT(STDMETHODCALLTYPE * SetOptionValue) (IDpxJob * This, LPCWSTR OptionName, LPCWSTR OptionValue);
	HRESULT(STDMETHODCALLTYPE * GetOptionValue) (IDpxJob * This, LPCWSTR OptionName, LPWSTR * pOptionValue);
	void (STDMETHODCALLTYPE * FreeMemory) (IDpxJob * This, void *Allocation);
	END_INTERFACE
}  IDpxJobVtbl;
interface IDpxJob
{
	CONST_VTBL struct IDpxJobVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IDpxJob_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IDpxJob_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define IDpxJob_Release(This)( (This)->lpVtbl -> Release(This) )
#define IDpxJob_GetTargetPath(This,TargetPath)( (This)->lpVtbl -> GetTargetPath(This,TargetPath) )
#define IDpxJob_AddContainer(This,ContainerPath,ppContainer)( (This)->lpVtbl -> AddContainer(This,ContainerPath,ppContainer) )
#define IDpxJob_EnumContainers(This,ppEnumContainers)( (This)->lpVtbl -> EnumContainers(This,ppEnumContainers) )
#define IDpxJob_SetDownloadProvider(This,pDownloadProvider)( (This)->lpVtbl -> SetDownloadProvider(This,pDownloadProvider) )
#define IDpxJob_GetDownloadProvider(This,ppDownloadProvider)( (This)->lpVtbl -> GetDownloadProvider(This,ppDownloadProvider) )
#define IDpxJob_Resume(This,eResumeType)( (This)->lpVtbl -> Resume(This,eResumeType) )
#define IDpxJob_Suspend(This)( (This)->lpVtbl -> Suspend(This) )
#define IDpxJob_Cancel(This)( (This)->lpVtbl -> Cancel(This) )
#define IDpxJob_GetProgress(This,pProgress)( (This)->lpVtbl -> GetProgress(This,pProgress) )
#define IDpxJob_SaveJobState(This)( (This)->lpVtbl -> SaveJobState(This) )
#define IDpxJob_SetUserValue(This,UserValue)( (This)->lpVtbl -> SetUserValue(This,UserValue) )
#define IDpxJob_GetUserValue(This,pUserValue)( (This)->lpVtbl -> GetUserValue(This,pUserValue) )
#define IDpxJob_SetOptionValue(This,OptionName,OptionValue)( (This)->lpVtbl -> SetOptionValue(This,OptionName,OptionValue) )
#define IDpxJob_GetOptionValue(This,OptionName,pOptionValue)( (This)->lpVtbl -> GetOptionValue(This,OptionName,pOptionValue) )
#define IDpxJob_FreeMemory(This,Allocation)( (This)->lpVtbl -> FreeMemory(This,Allocation) )
#endif
#endif
#ifndef __IDpxContainer_INTERFACE_DEFINED__
#define __IDpxContainer_INTERFACE_DEFINED__
extern const IID IID_IDpxContainer;
typedef struct IDpxContainerVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IDpxContainer * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IDpxContainer * This);
	ULONG(STDMETHODCALLTYPE * Release) (IDpxContainer * This);
	HRESULT(STDMETHODCALLTYPE * SetContainerPath) (IDpxContainer * This, LPCWSTR ContainerPath);
	HRESULT(STDMETHODCALLTYPE * GetContainerPath) (IDpxContainer * This, LPWSTR * pContainerPath);
	HRESULT(STDMETHODCALLTYPE * AddFileToExtract) (IDpxContainer * This, LPCWSTR SourceFileName, LPCWSTR TargetFileName, DPX_HASH * TargetFileHash);
	HRESULT(STDMETHODCALLTYPE * AddFileToExtract2) (IDpxContainer * This, LPCWSTR SourceFileName, LPCWSTR TargetFileName, IDpxFile ** ppFile);
	HRESULT(STDMETHODCALLTYPE * ExtractAllFiles) (IDpxContainer * This);
	HRESULT(STDMETHODCALLTYPE * EnumFilesToExtract) (IDpxContainer * This, IEnumDpxFiles ** ppEnumFiles);
	HRESULT(STDMETHODCALLTYPE * SetExpectedContainerIndexHash) (IDpxContainer * This, DPX_HASH * pExpectedHash);
	HRESULT(STDMETHODCALLTYPE * GetExpectedContainerIndexHash) (IDpxContainer * This, DPX_HASH ** ppExpectedHash);
	HRESULT(STDMETHODCALLTYPE * ProvideContainerIndex) (IDpxContainer * This, UINT IndexSize, BYTE IndexData[]);
	HRESULT(STDMETHODCALLTYPE * ProvideContainerIndexByFile) (IDpxContainer * This, LPCWSTR IndexFileName);
	HRESULT(STDMETHODCALLTYPE * EnumDirectoryEntries) (IDpxContainer * This, IEnumDpxContainerDirectoryEntries ** ppEnumEntries);
	HRESULT(STDMETHODCALLTYPE * Remove) (IDpxContainer * This);
	HRESULT(STDMETHODCALLTYPE * SetUserValue) (IDpxContainer * This, UINT64 UserValue);
	HRESULT(STDMETHODCALLTYPE * GetUserValue) (IDpxContainer * This, UINT64 * pUserValue);
	void (STDMETHODCALLTYPE * FreeMemory) (IDpxContainer * This, void *Allocation);
	END_INTERFACE
}  IDpxContainerVtbl;
interface IDpxContainer
{
	CONST_VTBL struct IDpxContainerVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IDpxContainer_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IDpxContainer_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define IDpxContainer_Release(This)( (This)->lpVtbl -> Release(This) )
#define IDpxContainer_SetContainerPath(This,ContainerPath)( (This)->lpVtbl -> SetContainerPath(This,ContainerPath) )
#define IDpxContainer_GetContainerPath(This,pContainerPath)( (This)->lpVtbl -> GetContainerPath(This,pContainerPath) )
#define IDpxContainer_AddFileToExtract(This,SourceFileName,TargetFileName,TargetFileHash)( (This)->lpVtbl -> AddFileToExtract(This,SourceFileName,TargetFileName,TargetFileHash) )
#define IDpxContainer_AddFileToExtract2(This,SourceFileName,TargetFileName,ppFile)( (This)->lpVtbl -> AddFileToExtract2(This,SourceFileName,TargetFileName,ppFile) )
#define IDpxContainer_ExtractAllFiles(This)( (This)->lpVtbl -> ExtractAllFiles(This) )
#define IDpxContainer_EnumFilesToExtract(This,ppEnumFiles)( (This)->lpVtbl -> EnumFilesToExtract(This,ppEnumFiles) )
#define IDpxContainer_SetExpectedContainerIndexHash(This,pExpectedHash)( (This)->lpVtbl -> SetExpectedContainerIndexHash(This,pExpectedHash) )
#define IDpxContainer_GetExpectedContainerIndexHash(This,ppExpectedHash)( (This)->lpVtbl -> GetExpectedContainerIndexHash(This,ppExpectedHash) )
#define IDpxContainer_ProvideContainerIndex(This,IndexSize,IndexData)( (This)->lpVtbl -> ProvideContainerIndex(This,IndexSize,IndexData) )
#define IDpxContainer_ProvideContainerIndexByFile(This,IndexFileName)( (This)->lpVtbl -> ProvideContainerIndexByFile(This,IndexFileName) )
#define IDpxContainer_EnumDirectoryEntries(This,ppEnumEntries)( (This)->lpVtbl -> EnumDirectoryEntries(This,ppEnumEntries) )
#define IDpxContainer_Remove(This)( (This)->lpVtbl -> Remove(This) )
#define IDpxContainer_SetUserValue(This,UserValue)( (This)->lpVtbl -> SetUserValue(This,UserValue) )
#define IDpxContainer_GetUserValue(This,pUserValue)( (This)->lpVtbl -> GetUserValue(This,pUserValue) )
#define IDpxContainer_FreeMemory(This,Allocation)( (This)->lpVtbl -> FreeMemory(This,Allocation) )
#endif
#endif
#ifndef __IDpxFile_INTERFACE_DEFINED__
#define __IDpxFile_INTERFACE_DEFINED__
extern const IID IID_IDpxFile;
typedef struct IDpxFileVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IDpxFile * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IDpxFile * This);
	ULONG(STDMETHODCALLTYPE * Release) (IDpxFile * This);
	HRESULT(STDMETHODCALLTYPE * GetSourceFileName) (IDpxFile * This, LPWSTR * pSourceFileName);
	HRESULT(STDMETHODCALLTYPE * GetTargetFileName) (IDpxFile * This, LPWSTR * pTargetFileName);
	HRESULT(STDMETHODCALLTYPE * SetExpectedHash) (IDpxFile * This, DPX_HASH * pExpectedHash);
	HRESULT(STDMETHODCALLTYPE * GetExpectedHash) (IDpxFile * This, DPX_HASH ** ppExpectedHash);
	HRESULT(STDMETHODCALLTYPE * Remove) (IDpxFile * This);
	HRESULT(STDMETHODCALLTYPE * SetUserValue) (IDpxFile * This, UINT64 UserValue);
	HRESULT(STDMETHODCALLTYPE * GetUserValue) (IDpxFile * This, UINT64 * pUserValue);
	HRESULT(STDMETHODCALLTYPE * GetStatus) (IDpxFile * This, HRESULT * pStatus);
	void (STDMETHODCALLTYPE * FreeMemory) (IDpxFile * This, void *Allocation);
	END_INTERFACE
}  IDpxFileVtbl;
interface IDpxFile
{
	CONST_VTBL struct IDpxFileVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IDpxFile_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IDpxFile_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define IDpxFile_Release(This)( (This)->lpVtbl -> Release(This) )
#define IDpxFile_GetSourceFileName(This,pSourceFileName)( (This)->lpVtbl -> GetSourceFileName(This,pSourceFileName) )
#define IDpxFile_GetTargetFileName(This,pTargetFileName)( (This)->lpVtbl -> GetTargetFileName(This,pTargetFileName) )
#define IDpxFile_SetExpectedHash(This,pExpectedHash)( (This)->lpVtbl -> SetExpectedHash(This,pExpectedHash) )
#define IDpxFile_GetExpectedHash(This,ppExpectedHash)( (This)->lpVtbl -> GetExpectedHash(This,ppExpectedHash) )
#define IDpxFile_Remove(This)( (This)->lpVtbl -> Remove(This) )
#define IDpxFile_SetUserValue(This,UserValue)( (This)->lpVtbl -> SetUserValue(This,UserValue) )
#define IDpxFile_GetUserValue(This,pUserValue)( (This)->lpVtbl -> GetUserValue(This,pUserValue) )
#define IDpxFile_GetStatus(This,pStatus)( (This)->lpVtbl -> GetStatus(This,pStatus) )
#define IDpxFile_FreeMemory(This,Allocation)( (This)->lpVtbl -> FreeMemory(This,Allocation) )
#endif
#endif
#ifndef __IDpxContainerDirectoryEntry_INTERFACE_DEFINED__
#define __IDpxContainerDirectoryEntry_INTERFACE_DEFINED__
extern const IID IID_IDpxContainerDirectoryEntry;
typedef struct IDpxContainerDirectoryEntryVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IDpxContainerDirectoryEntry * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IDpxContainerDirectoryEntry * This);
	ULONG(STDMETHODCALLTYPE * Release) (IDpxContainerDirectoryEntry * This);
	HRESULT(STDMETHODCALLTYPE * GetName) (IDpxContainerDirectoryEntry * This, LPWSTR * pDirEntryName);
	HRESULT(STDMETHODCALLTYPE * GetHash) (IDpxContainerDirectoryEntry * This, DPX_HASH ** pDirEntryHash);
	HRESULT(STDMETHODCALLTYPE * GetSize) (IDpxContainerDirectoryEntry * This, UINT64 * pDirEntrySize);
	HRESULT(STDMETHODCALLTYPE * GetTime) (IDpxContainerDirectoryEntry * This, FILETIME * pDirEntryTime);
	void (STDMETHODCALLTYPE * FreeMemory) (IDpxContainerDirectoryEntry * This, void *Allocation);
	END_INTERFACE
}  IDpxContainerDirectoryEntryVtbl;
interface IDpxContainerDirectoryEntry
{
	CONST_VTBL struct IDpxContainerDirectoryEntryVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IDpxContainerDirectoryEntry_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IDpxContainerDirectoryEntry_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define IDpxContainerDirectoryEntry_Release(This)( (This)->lpVtbl -> Release(This) )
#define IDpxContainerDirectoryEntry_GetName(This,pDirEntryName)( (This)->lpVtbl -> GetName(This,pDirEntryName) )
#define IDpxContainerDirectoryEntry_GetHash(This,pDirEntryHash)( (This)->lpVtbl -> GetHash(This,pDirEntryHash) )
#define IDpxContainerDirectoryEntry_GetSize(This,pDirEntrySize)( (This)->lpVtbl -> GetSize(This,pDirEntrySize) )
#define IDpxContainerDirectoryEntry_GetTime(This,pDirEntryTime)( (This)->lpVtbl -> GetTime(This,pDirEntryTime) )
#define IDpxContainerDirectoryEntry_FreeMemory(This,Allocation)( (This)->lpVtbl -> FreeMemory(This,Allocation) )
#endif
#endif
#ifndef __IDpxDownloadProvider_INTERFACE_DEFINED__
#define __IDpxDownloadProvider_INTERFACE_DEFINED__
extern const IID IID_IDpxDownloadProvider;
typedef struct IDpxDownloadProviderVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IDpxDownloadProvider * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IDpxDownloadProvider * This);
	ULONG(STDMETHODCALLTYPE * Release) (IDpxDownloadProvider * This);
	HRESULT(STDMETHODCALLTYPE * SetProvideDataCallback) (IDpxDownloadProvider * This, IDpxDownloadCallback * pProvideData);
	HRESULT(STDMETHODCALLTYPE * GetProvideDataCallback) (IDpxDownloadProvider * This, IDpxDownloadCallback ** ppProvideData);
	HRESULT(STDMETHODCALLTYPE * AddContainer) (IDpxDownloadProvider * This, LPCWSTR ContainerFilePath, UINT64 ContainerId);
	HRESULT(STDMETHODCALLTYPE * AddRanges) (IDpxDownloadProvider * This, UINT64 ContainerId, UINT RangeCount, DPX_BYTE_RANGE RangeList[]);
	HRESULT(STDMETHODCALLTYPE * GetContainers) (IDpxDownloadProvider * This, UINT * ContainerCount, UINT64 ** ppContainerIdArray);
	HRESULT(STDMETHODCALLTYPE * GetContainerPath) (IDpxDownloadProvider * This, UINT64 ContainerId, LPWSTR * ContainerPath);
	HRESULT(STDMETHODCALLTYPE * GetRanges) (IDpxDownloadProvider * This, UINT64 ContainerId, BOOL IncludeCompletedRanges, UINT * RangeCount, DPX_BYTE_RANGE ** ppRangeArray);
	HRESULT(STDMETHODCALLTYPE * Resume) (IDpxDownloadProvider * This);
	HRESULT(STDMETHODCALLTYPE * Suspend) (IDpxDownloadProvider * This);
	HRESULT(STDMETHODCALLTYPE * Cancel) (IDpxDownloadProvider * This);
	HRESULT(STDMETHODCALLTYPE * WaitForCompletion) (IDpxDownloadProvider * This, DWORD TimeoutMilliseconds);
	HRESULT(STDMETHODCALLTYPE * GetProgress) (IDpxDownloadProvider * This, DPX_PROGRESS_REMAIN * pDownloadProgress);
	HRESULT(STDMETHODCALLTYPE * ClearRequest) (IDpxDownloadProvider * This);
	void (STDMETHODCALLTYPE * FreeMemory) (IDpxDownloadProvider * This, void *Allocation);
	END_INTERFACE
}  IDpxDownloadProviderVtbl;
interface IDpxDownloadProvider
{
	CONST_VTBL struct IDpxDownloadProviderVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IDpxDownloadProvider_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IDpxDownloadProvider_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define IDpxDownloadProvider_Release(This)( (This)->lpVtbl -> Release(This) )
#define IDpxDownloadProvider_SetProvideDataCallback(This,pProvideData)( (This)->lpVtbl -> SetProvideDataCallback(This,pProvideData) )
#define IDpxDownloadProvider_GetProvideDataCallback(This,ppProvideData)( (This)->lpVtbl -> GetProvideDataCallback(This,ppProvideData) )
#define IDpxDownloadProvider_AddContainer(This,ContainerFilePath,ContainerId)( (This)->lpVtbl -> AddContainer(This,ContainerFilePath,ContainerId) )
#define IDpxDownloadProvider_AddRanges(This,ContainerId,RangeCount,RangeList)( (This)->lpVtbl -> AddRanges(This,ContainerId,RangeCount,RangeList) )
#define IDpxDownloadProvider_GetContainers(This,ContainerCount,ppContainerIdArray)( (This)->lpVtbl -> GetContainers(This,ContainerCount,ppContainerIdArray) )
#define IDpxDownloadProvider_GetContainerPath(This,ContainerId,ContainerPath)( (This)->lpVtbl -> GetContainerPath(This,ContainerId,ContainerPath) )
#define IDpxDownloadProvider_GetRanges(This,ContainerId,IncludeCompletedRanges,RangeCount,ppRangeArray)( (This)->lpVtbl -> GetRanges(This,ContainerId,IncludeCompletedRanges,RangeCount,ppRangeArray) )
#define IDpxDownloadProvider_Resume(This)( (This)->lpVtbl -> Resume(This) )
#define IDpxDownloadProvider_Suspend(This)( (This)->lpVtbl -> Suspend(This) )
#define IDpxDownloadProvider_Cancel(This)( (This)->lpVtbl -> Cancel(This) )
#define IDpxDownloadProvider_WaitForCompletion(This,TimeoutMilliseconds)( (This)->lpVtbl -> WaitForCompletion(This,TimeoutMilliseconds) )
#define IDpxDownloadProvider_GetProgress(This,pDownloadProgress)( (This)->lpVtbl -> GetProgress(This,pDownloadProgress) )
#define IDpxDownloadProvider_ClearRequest(This)( (This)->lpVtbl -> ClearRequest(This) )
#define IDpxDownloadProvider_FreeMemory(This,Allocation)( (This)->lpVtbl -> FreeMemory(This,Allocation) )
#endif
#endif
#ifndef __IDpxDownloadCallback_INTERFACE_DEFINED__
#define __IDpxDownloadCallback_INTERFACE_DEFINED__
extern const IID IID_IDpxDownloadCallback;
typedef struct IDpxDownloadCallbackVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IDpxDownloadCallback * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IDpxDownloadCallback * This);
	ULONG(STDMETHODCALLTYPE * Release) (IDpxDownloadCallback * This);
	HRESULT(STDMETHODCALLTYPE * ProvideRequestedData) (IDpxDownloadCallback * This, UINT64 ContainerId, UINT RangeCount, DPX_BYTE_RANGE RangeList[], const BYTE * RangeData[]);
	HRESULT(STDMETHODCALLTYPE * ProvideRequestedDataByFile) (IDpxDownloadCallback * This, UINT64 ContainerId, LPCWSTR ResponseFilePath, UINT RangeCount, DPX_BYTE_RANGE RangeArray[], UINT64 OffsetInResponseFile[]);
	HRESULT(STDMETHODCALLTYPE * ProvideRequestedDataByPackedRangeFile) (IDpxDownloadCallback * This, UINT64 ContainerId, LPCWSTR ResponseFilePath);
	END_INTERFACE
}  IDpxDownloadCallbackVtbl;
interface IDpxDownloadCallback
{
	CONST_VTBL struct IDpxDownloadCallbackVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IDpxDownloadCallback_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IDpxDownloadCallback_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define IDpxDownloadCallback_Release(This)( (This)->lpVtbl -> Release(This) )
#define IDpxDownloadCallback_ProvideRequestedData(This,ContainerId,RangeCount,RangeList,RangeData)( (This)->lpVtbl -> ProvideRequestedData(This,ContainerId,RangeCount,RangeList,RangeData) )
#define IDpxDownloadCallback_ProvideRequestedDataByFile(This,ContainerId,ResponseFilePath,RangeCount,RangeArray,OffsetInResponseFile)( (This)->lpVtbl -> ProvideRequestedDataByFile(This,ContainerId,ResponseFilePath,RangeCount,RangeArray,OffsetInResponseFile) )
#define IDpxDownloadCallback_ProvideRequestedDataByPackedRangeFile(This,ContainerId,ResponseFilePath)( (This)->lpVtbl -> ProvideRequestedDataByPackedRangeFile(This,ContainerId,ResponseFilePath) )
#endif
#endif
#ifndef __IEnumDpxContainers_INTERFACE_DEFINED__
#define __IEnumDpxContainers_INTERFACE_DEFINED__
extern const IID IID_IEnumDpxContainers;
typedef struct IEnumDpxContainersVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IEnumDpxContainers * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IEnumDpxContainers * This);
	ULONG(STDMETHODCALLTYPE * Release) (IEnumDpxContainers * This);
	HRESULT(STDMETHODCALLTYPE * Next) (IEnumDpxContainers * This, UINT ItemCount, IDpxContainer ** ppContainers, UINT * pFetchedCount);
	HRESULT(STDMETHODCALLTYPE * Skip) (IEnumDpxContainers * This, UINT ItemCount);
	HRESULT(STDMETHODCALLTYPE * Reset) (IEnumDpxContainers * This);
	HRESULT(STDMETHODCALLTYPE * Clone) (IEnumDpxContainers * This, IEnumDpxContainers ** ppEnum);
	HRESULT(STDMETHODCALLTYPE * GetCount) (IEnumDpxContainers * This, UINT * pItemCount);
	END_INTERFACE
}  IEnumDpxContainersVtbl;
interface IEnumDpxContainers
{
	CONST_VTBL struct IEnumDpxContainersVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IEnumDpxContainers_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IEnumDpxContainers_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define IEnumDpxContainers_Release(This)( (This)->lpVtbl -> Release(This) )
#define IEnumDpxContainers_Next(This,ItemCount,ppContainers,pFetchedCount)( (This)->lpVtbl -> Next(This,ItemCount,ppContainers,pFetchedCount) )
#define IEnumDpxContainers_Skip(This,ItemCount)( (This)->lpVtbl -> Skip(This,ItemCount) )
#define IEnumDpxContainers_Reset(This)( (This)->lpVtbl -> Reset(This) )
#define IEnumDpxContainers_Clone(This,ppEnum)( (This)->lpVtbl -> Clone(This,ppEnum) )
#define IEnumDpxContainers_GetCount(This,pItemCount)( (This)->lpVtbl -> GetCount(This,pItemCount) )
#endif
#endif
#ifndef __IEnumDpxFiles_INTERFACE_DEFINED__
#define __IEnumDpxFiles_INTERFACE_DEFINED__
extern const IID IID_IEnumDpxFiles;
typedef struct IEnumDpxFilesVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IEnumDpxFiles * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IEnumDpxFiles * This);
	ULONG(STDMETHODCALLTYPE * Release) (IEnumDpxFiles * This);
	HRESULT(STDMETHODCALLTYPE * Next) (IEnumDpxFiles * This, UINT ItemCount, IDpxFile ** ppFiles, UINT * pFetchedCount);
	HRESULT(STDMETHODCALLTYPE * Skip) (IEnumDpxFiles * This, UINT ItemCount);
	HRESULT(STDMETHODCALLTYPE * Reset) (IEnumDpxFiles * This);
	HRESULT(STDMETHODCALLTYPE * Clone) (IEnumDpxFiles * This, IEnumDpxFiles ** ppEnum);
	HRESULT(STDMETHODCALLTYPE * GetCount) (IEnumDpxFiles * This, UINT * pItemCount);
	END_INTERFACE
}  IEnumDpxFilesVtbl;
interface IEnumDpxFiles
{
	CONST_VTBL struct IEnumDpxFilesVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IEnumDpxFiles_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IEnumDpxFiles_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define IEnumDpxFiles_Release(This)( (This)->lpVtbl -> Release(This) )
#define IEnumDpxFiles_Next(This,ItemCount,ppFiles,pFetchedCount)( (This)->lpVtbl -> Next(This,ItemCount,ppFiles,pFetchedCount) )
#define IEnumDpxFiles_Skip(This,ItemCount)( (This)->lpVtbl -> Skip(This,ItemCount) )
#define IEnumDpxFiles_Reset(This)( (This)->lpVtbl -> Reset(This) )
#define IEnumDpxFiles_Clone(This,ppEnum)( (This)->lpVtbl -> Clone(This,ppEnum) )
#define IEnumDpxFiles_GetCount(This,pItemCount)( (This)->lpVtbl -> GetCount(This,pItemCount) )
#endif
#endif
#ifndef __IEnumDpxContainerDirectoryEntries_INTERFACE_DEFINED__
#define __IEnumDpxContainerDirectoryEntries_INTERFACE_DEFINED__
extern const IID IID_IEnumDpxContainerDirectoryEntries;
typedef struct IEnumDpxContainerDirectoryEntriesVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IEnumDpxContainerDirectoryEntries * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IEnumDpxContainerDirectoryEntries * This);
	ULONG(STDMETHODCALLTYPE * Release) (IEnumDpxContainerDirectoryEntries * This);
	HRESULT(STDMETHODCALLTYPE * Next) (IEnumDpxContainerDirectoryEntries * This, UINT ItemCount, IDpxContainerDirectoryEntry ** ppDirectoryEntries, UINT * pFetchedCount);
	HRESULT(STDMETHODCALLTYPE * Skip) (IEnumDpxContainerDirectoryEntries * This, UINT ItemCount);
	HRESULT(STDMETHODCALLTYPE * Reset) (IEnumDpxContainerDirectoryEntries * This);
	HRESULT(STDMETHODCALLTYPE * Clone) (IEnumDpxContainerDirectoryEntries * This, IEnumDpxContainerDirectoryEntries ** ppEnum);
	HRESULT(STDMETHODCALLTYPE * GetCount) (IEnumDpxContainerDirectoryEntries * This, UINT * pItemCount);
	END_INTERFACE
}  IEnumDpxContainerDirectoryEntriesVtbl;
interface IEnumDpxContainerDirectoryEntries
{
	CONST_VTBL struct IEnumDpxContainerDirectoryEntriesVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IEnumDpxContainerDirectoryEntries_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IEnumDpxContainerDirectoryEntries_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define IEnumDpxContainerDirectoryEntries_Release(This)( (This)->lpVtbl -> Release(This) )
#define IEnumDpxContainerDirectoryEntries_Next(This,ItemCount,ppDirectoryEntries,pFetchedCount)( (This)->lpVtbl -> Next(This,ItemCount,ppDirectoryEntries,pFetchedCount) )
#define IEnumDpxContainerDirectoryEntries_Skip(This,ItemCount)( (This)->lpVtbl -> Skip(This,ItemCount) )
#define IEnumDpxContainerDirectoryEntries_Reset(This)( (This)->lpVtbl -> Reset(This) )
#define IEnumDpxContainerDirectoryEntries_Clone(This,ppEnum)( (This)->lpVtbl -> Clone(This,ppEnum) )
#define IEnumDpxContainerDirectoryEntries_GetCount(This,pItemCount)( (This)->lpVtbl -> GetCount(This,pItemCount) )
#endif
#endif
#endif

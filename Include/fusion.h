/*+@@file@@----------------------------------------------------------------*//*!
 \file		fusion.h
 \par Description
            Extension and update of headers for PellesC compiler suite.
 \par Project:
            PellesC Headers extension
 \date		Created  on Sun Jul 10 21:09:40 2016
 \date		Modified on Sun Jul 10 21:09:40 2016
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
#ifndef __fusion_h__
#define __fusion_h__
#if __POCC__ >= 500
#pragma once
#endif
#ifndef __IAssemblyCache_FWD_DEFINED__
#define __IAssemblyCache_FWD_DEFINED__
typedef interface IAssemblyCache IAssemblyCache;
#endif
#ifndef __IAssemblyCacheItem_FWD_DEFINED__
#define __IAssemblyCacheItem_FWD_DEFINED__
typedef interface IAssemblyCacheItem IAssemblyCacheItem;
#endif
#ifndef __IAssemblyName_FWD_DEFINED__
#define __IAssemblyName_FWD_DEFINED__
typedef interface IAssemblyName IAssemblyName;
#endif
#ifndef __IAssemblyEnum_FWD_DEFINED__
#define __IAssemblyEnum_FWD_DEFINED__
typedef interface IAssemblyEnum IAssemblyEnum;
#endif
#ifndef __IInstallReferenceItem_FWD_DEFINED__
#define __IInstallReferenceItem_FWD_DEFINED__
typedef interface IInstallReferenceItem IInstallReferenceItem;
#endif
#ifndef __IInstallReferenceEnum_FWD_DEFINED__
#define __IInstallReferenceEnum_FWD_DEFINED__
typedef interface IInstallReferenceEnum IInstallReferenceEnum;
#endif
#include "objidl.h"
#ifdef _MSC_VER
#pragma comment(lib,"uuid.lib")
#endif
#ifdef _MSC_VER
#pragma once
#endif
typedef enum __MIDL___MIDL_itf_fusion_0000_0000_0001
{
	ASM_CACHE_ZAP = 0x1,
	ASM_CACHE_GAC = 0x2,
	ASM_CACHE_DOWNLOAD = 0x4,
	ASM_CACHE_ROOT = 0x8,
	ASM_CACHE_ROOT_EX = 0x80
} ASM_CACHE_FLAGS;
typedef enum _tagPEKIND
{
	peNone = 0,
	peMSIL = 0x1,
	peI386 = 0x2,
	peIA64 = 0x3,
	peAMD64 = 0x4,
	peInvalid = 0xffffffff
} PEKIND;
EXTERN_GUID(IID_IAssemblyCache, 0xE707DCDE, 0xD1CD, 0x11D2, 0xBA, 0xB9, 0x00, 0xC0, 0x4F, 0x8E, 0xCE, 0xAE);
extern RPC_IF_HANDLE __MIDL_itf_fusion_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_fusion_0000_0000_v0_0_s_ifspec;
#ifndef __IAssemblyCache_INTERFACE_DEFINED__
#define __IAssemblyCache_INTERFACE_DEFINED__
EXTERN_GUID(FUSION_REFCOUNT_UNINSTALL_SUBKEY_GUID, 0x8cedc215, 0xac4b, 0x488b, 0x93, 0xc0, 0xa5, 0x0a, 0x49, 0xcb, 0x2f, 0xb8);
EXTERN_GUID(FUSION_REFCOUNT_FILEPATH_GUID, 0xb02f9d65, 0xfb77, 0x4f7a, 0xaf, 0xa5, 0xb3, 0x91, 0x30, 0x9f, 0x11, 0xc9);
EXTERN_GUID(FUSION_REFCOUNT_OPAQUE_STRING_GUID, 0x2ec93463, 0xb0c3, 0x45e1, 0x83, 0x64, 0x32, 0x7e, 0x96, 0xae, 0xa8, 0x56);
EXTERN_GUID(FUSION_REFCOUNT_MSI_GUID, 0x25df0fc1, 0x7f97, 0x4070, 0xad, 0xd7, 0x4b, 0x13, 0xbb, 0xfd, 0x7c, 0xb8);
EXTERN_GUID(FUSION_REFCOUNT_OSINSTALL_GUID, 0xd16d444c, 0x56d8, 0x11d5, 0x88, 0x2d, 0x00, 0x80, 0xc8, 0x47, 0xb1, 0x95);
typedef struct _FUSION_INSTALL_REFERENCE_
{
	DWORD cbSize;
	DWORD dwFlags;
	GUID guidScheme;
	LPCWSTR szIdentifier;
	LPCWSTR szNonCannonicalData;
} FUSION_INSTALL_REFERENCE;
typedef struct _FUSION_INSTALL_REFERENCE_ *LPFUSION_INSTALL_REFERENCE;
typedef const FUSION_INSTALL_REFERENCE *LPCFUSION_INSTALL_REFERENCE;
typedef struct _ASSEMBLY_INFO
{
	ULONG cbAssemblyInfo;
	DWORD dwAssemblyFlags;
	ULARGE_INTEGER uliAssemblySizeInKB;
	LPWSTR pszCurrentAssemblyPathBuf;
	ULONG cchBuf;
} ASSEMBLY_INFO;
#define IASSEMBLYCACHE_INSTALL_FLAG_REFRESH       (0x00000001)
#define IASSEMBLYCACHE_INSTALL_FLAG_FORCE_REFRESH (0x00000002)
#define IASSEMBLYCACHE_UNINSTALL_DISPOSITION_UNINSTALLED (1)
#define IASSEMBLYCACHE_UNINSTALL_DISPOSITION_STILL_IN_USE (2)
#define IASSEMBLYCACHE_UNINSTALL_DISPOSITION_ALREADY_UNINSTALLED (3)
#define IASSEMBLYCACHE_UNINSTALL_DISPOSITION_DELETE_PENDING (4)
#define IASSEMBLYCACHE_UNINSTALL_DISPOSITION_HAS_INSTALL_REFERENCES (5)
#define IASSEMBLYCACHE_UNINSTALL_DISPOSITION_REFERENCE_NOT_FOUND (6)
#define QUERYASMINFO_FLAG_VALIDATE        (0x00000001)
#define QUERYASMINFO_FLAG_GETSIZE         (0x00000002)
#define ASSEMBLYINFO_FLAG_INSTALLED       (0x00000001)
#define ASSEMBLYINFO_FLAG_PAYLOADRESIDENT (0x00000002)
extern const IID IID_IAssemblyCache;
typedef struct IAssemblyCacheVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IAssemblyCache * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IAssemblyCache * This);
	ULONG(STDMETHODCALLTYPE * Release) (IAssemblyCache * This);
	HRESULT(STDMETHODCALLTYPE * UninstallAssembly) (IAssemblyCache * This, DWORD dwFlags, LPCWSTR pszAssemblyName, LPCFUSION_INSTALL_REFERENCE pRefData, ULONG * pulDisposition);
	HRESULT(STDMETHODCALLTYPE * QueryAssemblyInfo) (IAssemblyCache * This, DWORD dwFlags, LPCWSTR pszAssemblyName, ASSEMBLY_INFO * pAsmInfo);
	HRESULT(STDMETHODCALLTYPE * CreateAssemblyCacheItem) (IAssemblyCache * This, DWORD dwFlags, PVOID pvReserved, IAssemblyCacheItem ** ppAsmItem, LPCWSTR pszAssemblyName);
	HRESULT(STDMETHODCALLTYPE * CreateAssemblyScavenger) (IAssemblyCache * This, IUnknown ** ppUnkReserved);
	HRESULT(STDMETHODCALLTYPE * InstallAssembly) (IAssemblyCache * This, DWORD dwFlags, LPCWSTR pszManifestFilePath, LPCFUSION_INSTALL_REFERENCE pRefData);
	END_INTERFACE
}  IAssemblyCacheVtbl;
interface IAssemblyCache
{
	CONST_VTBL struct IAssemblyCacheVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IAssemblyCache_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IAssemblyCache_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define IAssemblyCache_Release(This)( (This)->lpVtbl -> Release(This) )
#define IAssemblyCache_UninstallAssembly(This,dwFlags,pszAssemblyName,pRefData,pulDisposition)( (This)->lpVtbl -> UninstallAssembly(This,dwFlags,pszAssemblyName,pRefData,pulDisposition) )
#define IAssemblyCache_QueryAssemblyInfo(This,dwFlags,pszAssemblyName,pAsmInfo)( (This)->lpVtbl -> QueryAssemblyInfo(This,dwFlags,pszAssemblyName,pAsmInfo) )
#define IAssemblyCache_CreateAssemblyCacheItem(This,dwFlags,pvReserved,ppAsmItem,pszAssemblyName)( (This)->lpVtbl -> CreateAssemblyCacheItem(This,dwFlags,pvReserved,ppAsmItem,pszAssemblyName) )
#define IAssemblyCache_CreateAssemblyScavenger(This,ppUnkReserved)( (This)->lpVtbl -> CreateAssemblyScavenger(This,ppUnkReserved) )
#define IAssemblyCache_InstallAssembly(This,dwFlags,pszManifestFilePath,pRefData)( (This)->lpVtbl -> InstallAssembly(This,dwFlags,pszManifestFilePath,pRefData) )
#endif
#endif
EXTERN_GUID(IID_IAssemblyCacheItem, 0x9e3aaeb4, 0xd1cd, 0x11d2, 0xba, 0xb9, 0x00, 0xc0, 0x4f, 0x8e, 0xce, 0xae);
extern RPC_IF_HANDLE __MIDL_itf_fusion_0000_0001_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_fusion_0000_0001_v0_0_s_ifspec;
#ifndef __IAssemblyCacheItem_INTERFACE_DEFINED__
#define __IAssemblyCacheItem_INTERFACE_DEFINED__
#define STREAM_FORMAT_COMPLIB_MODULE    0
#define STREAM_FORMAT_COMPLIB_MANIFEST  1
#define STREAM_FORMAT_WIN32_MODULE      2
#define STREAM_FORMAT_WIN32_MANIFEST    4
#define IASSEMBLYCACHEITEM_COMMIT_FLAG_REFRESH       (0x00000001)
#define IASSEMBLYCACHEITEM_COMMIT_FLAG_FORCE_REFRESH (0x00000002)
#define IASSEMBLYCACHEITEM_COMMIT_DISPOSITION_INSTALLED (1)
#define IASSEMBLYCACHEITEM_COMMIT_DISPOSITION_REFRESHED (2)
#define IASSEMBLYCACHEITEM_COMMIT_DISPOSITION_ALREADY_INSTALLED (3)
extern const IID IID_IAssemblyCacheItem;
typedef struct IAssemblyCacheItemVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IAssemblyCacheItem * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IAssemblyCacheItem * This);
	ULONG(STDMETHODCALLTYPE * Release) (IAssemblyCacheItem * This);
	HRESULT(STDMETHODCALLTYPE * CreateStream) (IAssemblyCacheItem * This, DWORD dwFlags, LPCWSTR pszStreamName, DWORD dwFormat, DWORD dwFormatFlags, IStream ** ppIStream, ULARGE_INTEGER * puliMaxSize);
	HRESULT(STDMETHODCALLTYPE * Commit) (IAssemblyCacheItem * This, DWORD dwFlags, ULONG * pulDisposition);
	HRESULT(STDMETHODCALLTYPE * AbortItem) (IAssemblyCacheItem * This);
	END_INTERFACE
}  IAssemblyCacheItemVtbl;
interface IAssemblyCacheItem
{
	CONST_VTBL struct IAssemblyCacheItemVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IAssemblyCacheItem_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IAssemblyCacheItem_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define IAssemblyCacheItem_Release(This)( (This)->lpVtbl -> Release(This) )
#define IAssemblyCacheItem_CreateStream(This,dwFlags,pszStreamName,dwFormat,dwFormatFlags,ppIStream,puliMaxSize)( (This)->lpVtbl -> CreateStream(This,dwFlags,pszStreamName,dwFormat,dwFormatFlags,ppIStream,puliMaxSize) )
#define IAssemblyCacheItem_Commit(This,dwFlags,pulDisposition)( (This)->lpVtbl -> Commit(This,dwFlags,pulDisposition) )
#define IAssemblyCacheItem_AbortItem(This)( (This)->lpVtbl -> AbortItem(This) )
#endif
#endif
EXTERN_GUID(IID_IAssemblyName, 0xCD193BC0, 0xB4BC, 0x11d2, 0x98, 0x33, 0x00, 0xC0, 0x4F, 0xC3, 0x1D, 0x2E);
extern RPC_IF_HANDLE __MIDL_itf_fusion_0000_0002_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_fusion_0000_0002_v0_0_s_ifspec;
#ifndef __IAssemblyName_INTERFACE_DEFINED__
#define __IAssemblyName_INTERFACE_DEFINED__
typedef IAssemblyName *LPASSEMBLYNAME;
typedef enum __MIDL_IAssemblyName_0001
{
	CANOF_PARSE_DISPLAY_NAME = 0x1,
	CANOF_SET_DEFAULT_VALUES = 0x2,
	CANOF_VERIFY_FRIEND_ASSEMBLYNAME = 0x4,
	CANOF_PARSE_FRIEND_DISPLAY_NAME = (CANOF_PARSE_DISPLAY_NAME | CANOF_VERIFY_FRIEND_ASSEMBLYNAME)
} CREATE_ASM_NAME_OBJ_FLAGS;
typedef enum __MIDL_IAssemblyName_0002
{
	ASM_NAME_PUBLIC_KEY = 0,
	ASM_NAME_PUBLIC_KEY_TOKEN = (ASM_NAME_PUBLIC_KEY + 1),
	ASM_NAME_HASH_VALUE = (ASM_NAME_PUBLIC_KEY_TOKEN + 1),
	ASM_NAME_NAME = (ASM_NAME_HASH_VALUE + 1),
	ASM_NAME_MAJOR_VERSION = (ASM_NAME_NAME + 1),
	ASM_NAME_MINOR_VERSION = (ASM_NAME_MAJOR_VERSION + 1),
	ASM_NAME_BUILD_NUMBER = (ASM_NAME_MINOR_VERSION + 1),
	ASM_NAME_REVISION_NUMBER = (ASM_NAME_BUILD_NUMBER + 1),
	ASM_NAME_CULTURE = (ASM_NAME_REVISION_NUMBER + 1),
	ASM_NAME_PROCESSOR_ID_ARRAY = (ASM_NAME_CULTURE + 1),
	ASM_NAME_OSINFO_ARRAY = (ASM_NAME_PROCESSOR_ID_ARRAY + 1),
	ASM_NAME_HASH_ALGID = (ASM_NAME_OSINFO_ARRAY + 1),
	ASM_NAME_ALIAS = (ASM_NAME_HASH_ALGID + 1),
	ASM_NAME_CODEBASE_URL = (ASM_NAME_ALIAS + 1),
	ASM_NAME_CODEBASE_LASTMOD = (ASM_NAME_CODEBASE_URL + 1),
	ASM_NAME_NULL_PUBLIC_KEY = (ASM_NAME_CODEBASE_LASTMOD + 1),
	ASM_NAME_NULL_PUBLIC_KEY_TOKEN = (ASM_NAME_NULL_PUBLIC_KEY + 1),
	ASM_NAME_CUSTOM = (ASM_NAME_NULL_PUBLIC_KEY_TOKEN + 1),
	ASM_NAME_NULL_CUSTOM = (ASM_NAME_CUSTOM + 1),
	ASM_NAME_MVID = (ASM_NAME_NULL_CUSTOM + 1),
	ASM_NAME_FILE_MAJOR_VERSION = (ASM_NAME_MVID + 1),
	ASM_NAME_FILE_MINOR_VERSION = (ASM_NAME_FILE_MAJOR_VERSION + 1),
	ASM_NAME_FILE_BUILD_NUMBER = (ASM_NAME_FILE_MINOR_VERSION + 1),
	ASM_NAME_FILE_REVISION_NUMBER = (ASM_NAME_FILE_BUILD_NUMBER + 1),
	ASM_NAME_RETARGET = (ASM_NAME_FILE_REVISION_NUMBER + 1),
	ASM_NAME_SIGNATURE_BLOB = (ASM_NAME_RETARGET + 1),
	ASM_NAME_CONFIG_MASK = (ASM_NAME_SIGNATURE_BLOB + 1),
	ASM_NAME_ARCHITECTURE = (ASM_NAME_CONFIG_MASK + 1),
	ASM_NAME_MAX_PARAMS = (ASM_NAME_ARCHITECTURE + 1)
} ASM_NAME;
typedef enum __MIDL_IAssemblyName_0003
{
	ASM_DISPLAYF_VERSION = 0x1,
	ASM_DISPLAYF_CULTURE = 0x2,
	ASM_DISPLAYF_PUBLIC_KEY_TOKEN = 0x4,
	ASM_DISPLAYF_PUBLIC_KEY = 0x8,
	ASM_DISPLAYF_CUSTOM = 0x10,
	ASM_DISPLAYF_PROCESSORARCHITECTURE = 0x20,
	ASM_DISPLAYF_LANGUAGEID = 0x40,
	ASM_DISPLAYF_RETARGET = 0x80,
	ASM_DISPLAYF_CONFIG_MASK = 0x100,
	ASM_DISPLAYF_MVID = 0x200,
	ASM_DISPLAYF_FULL = ((((ASM_DISPLAYF_VERSION | ASM_DISPLAYF_CULTURE) | ASM_DISPLAYF_PUBLIC_KEY_TOKEN) | ASM_DISPLAYF_RETARGET) | ASM_DISPLAYF_PROCESSORARCHITECTURE)
} ASM_DISPLAY_FLAGS;
typedef enum __MIDL_IAssemblyName_0004
{
	ASM_CMPF_NAME = 0x1,
	ASM_CMPF_MAJOR_VERSION = 0x2,
	ASM_CMPF_MINOR_VERSION = 0x4,
	ASM_CMPF_BUILD_NUMBER = 0x8,
	ASM_CMPF_REVISION_NUMBER = 0x10,
	ASM_CMPF_VERSION = (((ASM_CMPF_MAJOR_VERSION | ASM_CMPF_MINOR_VERSION) | ASM_CMPF_BUILD_NUMBER) | ASM_CMPF_REVISION_NUMBER),
	ASM_CMPF_PUBLIC_KEY_TOKEN = 0x20,
	ASM_CMPF_CULTURE = 0x40,
	ASM_CMPF_CUSTOM = 0x80,
	ASM_CMPF_DEFAULT = 0x100,
	ASM_CMPF_RETARGET = 0x200,
	ASM_CMPF_ARCHITECTURE = 0x400,
	ASM_CMPF_CONFIG_MASK = 0x800,
	ASM_CMPF_MVID = 0x1000,
	ASM_CMPF_SIGNATURE = 0x2000,
	ASM_CMPF_IL_ALL = (((ASM_CMPF_NAME | ASM_CMPF_VERSION) | ASM_CMPF_PUBLIC_KEY_TOKEN) | ASM_CMPF_CULTURE),
	ASM_CMPF_IL_NO_VERSION = ((ASM_CMPF_NAME | ASM_CMPF_PUBLIC_KEY_TOKEN) | ASM_CMPF_CULTURE)
} ASM_CMP_FLAGS;
extern const IID IID_IAssemblyName;
typedef struct IAssemblyNameVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IAssemblyName * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IAssemblyName * This);
	ULONG(STDMETHODCALLTYPE * Release) (IAssemblyName * This);
	HRESULT(STDMETHODCALLTYPE * SetProperty) (IAssemblyName * This, DWORD PropertyId, LPVOID pvProperty, DWORD cbProperty);
	HRESULT(STDMETHODCALLTYPE * GetProperty) (IAssemblyName * This, DWORD PropertyId, LPVOID pvProperty, LPDWORD pcbProperty);
	HRESULT(STDMETHODCALLTYPE * Finalize) (IAssemblyName * This);
	HRESULT(STDMETHODCALLTYPE * GetDisplayName) (IAssemblyName * This, LPOLESTR szDisplayName, LPDWORD pccDisplayName, DWORD dwDisplayFlags);
	HRESULT(STDMETHODCALLTYPE * Reserved) (IAssemblyName * This, REFIID refIID, IUnknown * pUnkReserved1, IUnknown * pUnkReserved2, LPCOLESTR szReserved, LONGLONG llReserved, LPVOID pvReserved, DWORD cbReserved, LPVOID * ppReserved);
	HRESULT(STDMETHODCALLTYPE * GetName) (IAssemblyName * This, LPDWORD lpcwBuffer, WCHAR * pwzName);
	HRESULT(STDMETHODCALLTYPE * GetVersion) (IAssemblyName * This, LPDWORD pdwVersionHi, LPDWORD pdwVersionLow);
	HRESULT(STDMETHODCALLTYPE * IsEqual) (IAssemblyName * This, IAssemblyName * pName, DWORD dwCmpFlags);
	HRESULT(STDMETHODCALLTYPE * Clone) (IAssemblyName * This, IAssemblyName ** pName);
	END_INTERFACE
}  IAssemblyNameVtbl;
interface IAssemblyName
{
	CONST_VTBL struct IAssemblyNameVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IAssemblyName_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IAssemblyName_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define IAssemblyName_Release(This)( (This)->lpVtbl -> Release(This) )
#define IAssemblyName_SetProperty(This,PropertyId,pvProperty,cbProperty)( (This)->lpVtbl -> SetProperty(This,PropertyId,pvProperty,cbProperty) )
#define IAssemblyName_GetProperty(This,PropertyId,pvProperty,pcbProperty)( (This)->lpVtbl -> GetProperty(This,PropertyId,pvProperty,pcbProperty) )
#define IAssemblyName_Finalize(This)( (This)->lpVtbl -> Finalize(This) )
#define IAssemblyName_GetDisplayName(This,szDisplayName,pccDisplayName,dwDisplayFlags)( (This)->lpVtbl -> GetDisplayName(This,szDisplayName,pccDisplayName,dwDisplayFlags) )
#define IAssemblyName_Reserved(This,refIID,pUnkReserved1,pUnkReserved2,szReserved,llReserved,pvReserved,cbReserved,ppReserved)( (This)->lpVtbl -> Reserved(This,refIID,pUnkReserved1,pUnkReserved2,szReserved,llReserved,pvReserved,cbReserved,ppReserved) )
#define IAssemblyName_GetName(This,lpcwBuffer,pwzName)( (This)->lpVtbl -> GetName(This,lpcwBuffer,pwzName) )
#define IAssemblyName_GetVersion(This,pdwVersionHi,pdwVersionLow)( (This)->lpVtbl -> GetVersion(This,pdwVersionHi,pdwVersionLow) )
#define IAssemblyName_IsEqual(This,pName,dwCmpFlags)( (This)->lpVtbl -> IsEqual(This,pName,dwCmpFlags) )
#define IAssemblyName_Clone(This,pName)( (This)->lpVtbl -> Clone(This,pName) )
#endif
#endif
EXTERN_GUID(IID_IAssemblyEnum, 0x21B8916C, 0xF28E, 0x11D2, 0xA4, 0x73, 0x00, 0xC0, 0x4F, 0x8E, 0xF4, 0x48);
extern RPC_IF_HANDLE __MIDL_itf_fusion_0000_0003_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_fusion_0000_0003_v0_0_s_ifspec;
#ifndef __IAssemblyEnum_INTERFACE_DEFINED__
#define __IAssemblyEnum_INTERFACE_DEFINED__
extern const IID IID_IAssemblyEnum;
typedef struct IAssemblyEnumVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IAssemblyEnum * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IAssemblyEnum * This);
	ULONG(STDMETHODCALLTYPE * Release) (IAssemblyEnum * This);
	HRESULT(STDMETHODCALLTYPE * GetNextAssembly) (IAssemblyEnum * This, LPVOID pvReserved, IAssemblyName ** ppName, DWORD dwFlags);
	HRESULT(STDMETHODCALLTYPE * Reset) (IAssemblyEnum * This);
	HRESULT(STDMETHODCALLTYPE * Clone) (IAssemblyEnum * This, IAssemblyEnum ** ppEnum);
	END_INTERFACE
}  IAssemblyEnumVtbl;
interface IAssemblyEnum
{
	CONST_VTBL struct IAssemblyEnumVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IAssemblyEnum_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IAssemblyEnum_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define IAssemblyEnum_Release(This)( (This)->lpVtbl -> Release(This) )
#define IAssemblyEnum_GetNextAssembly(This,pvReserved,ppName,dwFlags)( (This)->lpVtbl -> GetNextAssembly(This,pvReserved,ppName,dwFlags) )
#define IAssemblyEnum_Reset(This)( (This)->lpVtbl -> Reset(This) )
#define IAssemblyEnum_Clone(This,ppEnum)( (This)->lpVtbl -> Clone(This,ppEnum) )
#endif
#endif
EXTERN_GUID(IID_IInstallReferenceItem, 0x582dac66, 0xe678, 0x449f, 0xab, 0xa6, 0x6f, 0xaa, 0xec, 0x8a, 0x93, 0x94);
extern RPC_IF_HANDLE __MIDL_itf_fusion_0000_0004_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_fusion_0000_0004_v0_0_s_ifspec;
#ifndef __IInstallReferenceItem_INTERFACE_DEFINED__
#define __IInstallReferenceItem_INTERFACE_DEFINED__
extern const IID IID_IInstallReferenceItem;
typedef struct IInstallReferenceItemVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IInstallReferenceItem * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IInstallReferenceItem * This);
	ULONG(STDMETHODCALLTYPE * Release) (IInstallReferenceItem * This);
	HRESULT(STDMETHODCALLTYPE * GetReference) (IInstallReferenceItem * This, LPFUSION_INSTALL_REFERENCE * ppRefData, DWORD dwFlags, LPVOID pvReserved);
	END_INTERFACE
}  IInstallReferenceItemVtbl;
interface IInstallReferenceItem
{
	CONST_VTBL struct IInstallReferenceItemVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IInstallReferenceItem_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IInstallReferenceItem_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define IInstallReferenceItem_Release(This)( (This)->lpVtbl -> Release(This) )
#define IInstallReferenceItem_GetReference(This,ppRefData,dwFlags,pvReserved)( (This)->lpVtbl -> GetReference(This,ppRefData,dwFlags,pvReserved) )
#endif
#endif
EXTERN_GUID(IID_IInstallReferenceEnum, 0x56b1a988, 0x7c0c, 0x4aa2, 0x86, 0x39, 0xc3, 0xeb, 0x5a, 0x90, 0x22, 0x6f);
extern RPC_IF_HANDLE __MIDL_itf_fusion_0000_0005_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_fusion_0000_0005_v0_0_s_ifspec;
#ifndef __IInstallReferenceEnum_INTERFACE_DEFINED__
#define __IInstallReferenceEnum_INTERFACE_DEFINED__
extern const IID IID_IInstallReferenceEnum;
typedef struct IInstallReferenceEnumVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IInstallReferenceEnum * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IInstallReferenceEnum * This);
	ULONG(STDMETHODCALLTYPE * Release) (IInstallReferenceEnum * This);
	HRESULT(STDMETHODCALLTYPE * GetNextInstallReferenceItem) (IInstallReferenceEnum * This, IInstallReferenceItem ** ppRefItem, DWORD dwFlags, LPVOID pvReserved);
	END_INTERFACE
}  IInstallReferenceEnumVtbl;
interface IInstallReferenceEnum
{
	CONST_VTBL struct IInstallReferenceEnumVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IInstallReferenceEnum_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IInstallReferenceEnum_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define IInstallReferenceEnum_Release(This)( (This)->lpVtbl -> Release(This) )
#define IInstallReferenceEnum_GetNextInstallReferenceItem(This,ppRefItem,dwFlags,pvReserved)( (This)->lpVtbl -> GetNextInstallReferenceItem(This,ppRefItem,dwFlags,pvReserved) )
#endif
#endif
typedef enum _tagAssemblyComparisonResult
{
	ACR_Unknown = 0,
	ACR_EquivalentFullMatch = (ACR_Unknown + 1),
	ACR_EquivalentWeakNamed = (ACR_EquivalentFullMatch + 1),
	ACR_EquivalentFXUnified = (ACR_EquivalentWeakNamed + 1),
	ACR_EquivalentUnified = (ACR_EquivalentFXUnified + 1),
	ACR_NonEquivalentVersion = (ACR_EquivalentUnified + 1),
	ACR_NonEquivalent = (ACR_NonEquivalentVersion + 1),
	ACR_EquivalentPartialMatch = (ACR_NonEquivalent + 1),
	ACR_EquivalentPartialWeakNamed = (ACR_EquivalentPartialMatch + 1),
	ACR_EquivalentPartialUnified = (ACR_EquivalentPartialWeakNamed + 1),
	ACR_EquivalentPartialFXUnified = (ACR_EquivalentPartialUnified + 1),
	ACR_NonEquivalentPartialVersion = (ACR_EquivalentPartialFXUnified + 1)
} AssemblyComparisonResult;
STDAPI CreateAssemblyConfigCookie(LPCWSTR wzConfigFilePath, struct AssemblyConfig **ppAssemblyConfigOut);
STDAPI DestroyAssemblyConfigCookie(struct AssemblyConfig *pAssemblyConfig);
STDAPI CompareAssemblyIdentity(LPCWSTR pwzAssemblyIdentity1, BOOL fUnified1, LPCWSTR pwzAssemblyIdentity2, BOOL fUnified2, BOOL *pfEquivalent, AssemblyComparisonResult *pResult);
STDAPI CompareAssemblyIdentityWithConfig(LPCWSTR pwzAssemblyIdentity1, BOOL fUnified1, LPCWSTR pwzAssemblyIdentity2, BOOL fUnified2, struct AssemblyConfig *pAssemblyConfig, BOOL *pfEquivalent, AssemblyComparisonResult *pResult);
STDAPI CreateInstallReferenceEnum(IInstallReferenceEnum **ppRefEnum, IAssemblyName *pName, DWORD dwFlags, LPVOID pvReserved);
STDAPI CreateAssemblyEnum(IAssemblyEnum **pEnum, IUnknown *pUnkReserved, IAssemblyName *pName, DWORD dwFlags, LPVOID pvReserved);
STDAPI CreateAssemblyNameObject(LPASSEMBLYNAME *ppAssemblyNameObj, LPCWSTR szAssemblyName, DWORD dwFlags, LPVOID pvReserved);
STDAPI CreateAssemblyCache(IAssemblyCache **ppAsmCache, DWORD dwReserved);
STDAPI GetCachePath(ASM_CACHE_FLAGS dwCacheFlags, LPWSTR pwzCachePath, PDWORD pcchPath);
STDAPI GetAssemblyIdentityFromFile(LPCWSTR pwzFilePAth, REFIID riid, IUnknown **ppIdentity);
STDAPI ClearDownloadCache();
extern RPC_IF_HANDLE __MIDL_itf_fusion_0000_0006_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_fusion_0000_0006_v0_0_s_ifspec;
#endif

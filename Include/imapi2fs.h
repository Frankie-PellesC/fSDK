/*+@@file@@----------------------------------------------------------------*//*!
 \file		imapi2fs.h
 \par Description 
            Extension and update of headers for PellesC compiler suite.
 \par Project: 
            PellesC Headers extension
 \date		Created  on Sat Jul 16 21:25:24 2016
 \date		Modified on Sat Jul 16 21:25:24 2016
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
#ifndef __imapi2fs_h__
#define __imapi2fs_h__
#if __POCC__ >= 500
#pragma once
#endif
#ifndef __IBootOptions_FWD_DEFINED__
#define __IBootOptions_FWD_DEFINED__
typedef interface IBootOptions IBootOptions;
#endif
#ifndef __IProgressItem_FWD_DEFINED__
#define __IProgressItem_FWD_DEFINED__
typedef interface IProgressItem IProgressItem;
#endif
#ifndef __IEnumProgressItems_FWD_DEFINED__
#define __IEnumProgressItems_FWD_DEFINED__
typedef interface IEnumProgressItems IEnumProgressItems;
#endif
#ifndef __IProgressItems_FWD_DEFINED__
#define __IProgressItems_FWD_DEFINED__
typedef interface IProgressItems IProgressItems;
#endif
#ifndef __IFileSystemImageResult_FWD_DEFINED__
#define __IFileSystemImageResult_FWD_DEFINED__
typedef interface IFileSystemImageResult IFileSystemImageResult;
#endif
#ifndef __IFileSystemImageResult2_FWD_DEFINED__
#define __IFileSystemImageResult2_FWD_DEFINED__
typedef interface IFileSystemImageResult2 IFileSystemImageResult2;
#endif
#ifndef __IFsiItem_FWD_DEFINED__
#define __IFsiItem_FWD_DEFINED__
typedef interface IFsiItem IFsiItem;
#endif
#ifndef __IEnumFsiItems_FWD_DEFINED__
#define __IEnumFsiItems_FWD_DEFINED__
typedef interface IEnumFsiItems IEnumFsiItems;
#endif
#ifndef __IFsiFileItem_FWD_DEFINED__
#define __IFsiFileItem_FWD_DEFINED__
typedef interface IFsiFileItem IFsiFileItem;
#endif
#ifndef __IFsiFileItem2_FWD_DEFINED__
#define __IFsiFileItem2_FWD_DEFINED__
typedef interface IFsiFileItem2 IFsiFileItem2;
#endif
#ifndef __IFsiNamedStreams_FWD_DEFINED__
#define __IFsiNamedStreams_FWD_DEFINED__
typedef interface IFsiNamedStreams IFsiNamedStreams;
#endif
#ifndef __IFsiDirectoryItem_FWD_DEFINED__
#define __IFsiDirectoryItem_FWD_DEFINED__
typedef interface IFsiDirectoryItem IFsiDirectoryItem;
#endif
#ifndef __IFsiDirectoryItem2_FWD_DEFINED__
#define __IFsiDirectoryItem2_FWD_DEFINED__
typedef interface IFsiDirectoryItem2 IFsiDirectoryItem2;
#endif
#ifndef __IFileSystemImage_FWD_DEFINED__
#define __IFileSystemImage_FWD_DEFINED__
typedef interface IFileSystemImage IFileSystemImage;
#endif
#ifndef __IFileSystemImage2_FWD_DEFINED__
#define __IFileSystemImage2_FWD_DEFINED__
typedef interface IFileSystemImage2 IFileSystemImage2;
#endif
#ifndef __IFileSystemImage3_FWD_DEFINED__
#define __IFileSystemImage3_FWD_DEFINED__
typedef interface IFileSystemImage3 IFileSystemImage3;
#endif
#ifndef __DFileSystemImageEvents_FWD_DEFINED__
#define __DFileSystemImageEvents_FWD_DEFINED__
typedef interface DFileSystemImageEvents DFileSystemImageEvents;
#endif
#ifndef __DFileSystemImageImportEvents_FWD_DEFINED__
#define __DFileSystemImageImportEvents_FWD_DEFINED__
typedef interface DFileSystemImageImportEvents DFileSystemImageImportEvents;
#endif
#ifndef __IIsoImageManager_FWD_DEFINED__
#define __IIsoImageManager_FWD_DEFINED__
typedef interface IIsoImageManager IIsoImageManager;
#endif
#ifndef __DFileSystemImageEvents_FWD_DEFINED__
#define __DFileSystemImageEvents_FWD_DEFINED__
typedef interface DFileSystemImageEvents DFileSystemImageEvents;
#endif
#ifndef __DFileSystemImageImportEvents_FWD_DEFINED__
#define __DFileSystemImageImportEvents_FWD_DEFINED__
typedef interface DFileSystemImageImportEvents DFileSystemImageImportEvents;
#endif
#ifndef __BootOptions_FWD_DEFINED__
#define __BootOptions_FWD_DEFINED__
typedef struct BootOptions BootOptions;
#endif
#ifndef __FsiStream_FWD_DEFINED__
#define __FsiStream_FWD_DEFINED__
typedef struct FsiStream FsiStream;
#endif
#ifndef __FileSystemImageResult_FWD_DEFINED__
#define __FileSystemImageResult_FWD_DEFINED__
typedef struct FileSystemImageResult FileSystemImageResult;
#endif
#ifndef __ProgressItem_FWD_DEFINED__
#define __ProgressItem_FWD_DEFINED__
typedef struct ProgressItem ProgressItem;
#endif
#ifndef __EnumProgressItems_FWD_DEFINED__
#define __EnumProgressItems_FWD_DEFINED__
typedef struct EnumProgressItems EnumProgressItems;
#endif
#ifndef __ProgressItems_FWD_DEFINED__
#define __ProgressItems_FWD_DEFINED__
typedef struct ProgressItems ProgressItems;
#endif
#ifndef __FsiDirectoryItem_FWD_DEFINED__
#define __FsiDirectoryItem_FWD_DEFINED__
typedef struct FsiDirectoryItem FsiDirectoryItem;
#endif
#ifndef __FsiFileItem_FWD_DEFINED__
#define __FsiFileItem_FWD_DEFINED__
typedef struct FsiFileItem FsiFileItem;
#endif
#ifndef __EnumFsiItems_FWD_DEFINED__
#define __EnumFsiItems_FWD_DEFINED__
typedef struct EnumFsiItems EnumFsiItems;
#endif
#ifndef __FsiNamedStreams_FWD_DEFINED__
#define __FsiNamedStreams_FWD_DEFINED__
typedef struct FsiNamedStreams FsiNamedStreams;
#endif
#ifndef __MsftFileSystemImage_FWD_DEFINED__
#define __MsftFileSystemImage_FWD_DEFINED__
typedef struct MsftFileSystemImage MsftFileSystemImage;
#endif
#ifndef __MsftIsoImageManager_FWD_DEFINED__
#define __MsftIsoImageManager_FWD_DEFINED__
typedef struct MsftIsoImageManager MsftIsoImageManager;
#endif
#ifndef __BlockRange_FWD_DEFINED__
#define __BlockRange_FWD_DEFINED__
typedef struct BlockRange BlockRange;
#endif
#ifndef __BlockRangeList_FWD_DEFINED__
#define __BlockRangeList_FWD_DEFINED__
typedef struct BlockRangeList BlockRangeList;
#endif
#include "oaidl.h"
#include "ocidl.h"
#include "imapi2.h"
#define IMAPI2FS_BOOT_ENTRY_COUNT_MAX    32
typedef enum FsiItemType
{
	FsiItemNotFound = 0,
	FsiItemDirectory = 1,
	FsiItemFile = 2
} FsiItemType;
typedef enum FsiFileSystems
{
	FsiFileSystemNone = 0,
	FsiFileSystemISO9660 = 1,
	FsiFileSystemJoliet = 2,
	FsiFileSystemUDF = 4,
	FsiFileSystemUnknown = 0x40000000
} FsiFileSystems;
typedef enum EmulationType
{
	EmulationNone = 0,
	Emulation12MFloppy = 1,
	Emulation144MFloppy = 2,
	Emulation288MFloppy = 3,
	EmulationHardDisk = 4
} EmulationType;
typedef enum PlatformId
{
	PlatformX86 = 0,
	PlatformPowerPC = 1,
	PlatformMac = 2,
	PlatformEFI = 0xef
} PlatformId;
extern RPC_IF_HANDLE __MIDL_itf_imapi2fs_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_imapi2fs_0000_0000_v0_0_s_ifspec;
#ifndef __IBootOptions_INTERFACE_DEFINED__
#define __IBootOptions_INTERFACE_DEFINED__
extern const IID IID_IBootOptions;
typedef struct IBootOptionsVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IBootOptions * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IBootOptions * This);
	ULONG(STDMETHODCALLTYPE * Release) (IBootOptions * This);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfoCount) (IBootOptions * This, UINT * pctinfo);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfo) (IBootOptions * This, UINT iTInfo, LCID lcid, ITypeInfo ** ppTInfo);
	HRESULT(STDMETHODCALLTYPE * GetIDsOfNames) (IBootOptions * This, REFIID riid, LPOLESTR * rgszNames, UINT cNames, LCID lcid, DISPID * rgDispId);
	HRESULT(STDMETHODCALLTYPE * Invoke) (IBootOptions * This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS * pDispParams, VARIANT * pVarResult, EXCEPINFO * pExcepInfo, UINT * puArgErr);
	HRESULT(STDMETHODCALLTYPE * get_BootImage) (IBootOptions * This, IStream ** pVal);
	HRESULT(STDMETHODCALLTYPE * get_Manufacturer) (IBootOptions * This, BSTR * pVal);
	HRESULT(STDMETHODCALLTYPE * put_Manufacturer) (IBootOptions * This, BSTR newVal);
	HRESULT(STDMETHODCALLTYPE * get_PlatformId) (IBootOptions * This, PlatformId * pVal);
	HRESULT(STDMETHODCALLTYPE * put_PlatformId) (IBootOptions * This, PlatformId newVal);
	HRESULT(STDMETHODCALLTYPE * get_Emulation) (IBootOptions * This, EmulationType * pVal);
	HRESULT(STDMETHODCALLTYPE * put_Emulation) (IBootOptions * This, EmulationType newVal);
	HRESULT(STDMETHODCALLTYPE * get_ImageSize) (IBootOptions * This, ULONG * pVal);
	HRESULT(STDMETHODCALLTYPE * AssignBootImage) (IBootOptions * This, IStream * newVal);
	END_INTERFACE
}  IBootOptionsVtbl;
interface IBootOptions
{
	CONST_VTBL struct IBootOptionsVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IBootOptions_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IBootOptions_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define IBootOptions_Release(This)( (This)->lpVtbl -> Release(This) )
#define IBootOptions_GetTypeInfoCount(This,pctinfo)( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define IBootOptions_GetTypeInfo(This,iTInfo,lcid,ppTInfo)( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define IBootOptions_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define IBootOptions_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define IBootOptions_get_BootImage(This,pVal)( (This)->lpVtbl -> get_BootImage(This,pVal) )
#define IBootOptions_get_Manufacturer(This,pVal)( (This)->lpVtbl -> get_Manufacturer(This,pVal) )
#define IBootOptions_put_Manufacturer(This,newVal)( (This)->lpVtbl -> put_Manufacturer(This,newVal) )
#define IBootOptions_get_PlatformId(This,pVal)( (This)->lpVtbl -> get_PlatformId(This,pVal) )
#define IBootOptions_put_PlatformId(This,newVal)( (This)->lpVtbl -> put_PlatformId(This,newVal) )
#define IBootOptions_get_Emulation(This,pVal)( (This)->lpVtbl -> get_Emulation(This,pVal) )
#define IBootOptions_put_Emulation(This,newVal)( (This)->lpVtbl -> put_Emulation(This,newVal) )
#define IBootOptions_get_ImageSize(This,pVal)( (This)->lpVtbl -> get_ImageSize(This,pVal) )
#define IBootOptions_AssignBootImage(This,newVal)( (This)->lpVtbl -> AssignBootImage(This,newVal) )
#endif
#endif
#ifndef __IProgressItem_INTERFACE_DEFINED__
#define __IProgressItem_INTERFACE_DEFINED__
extern const IID IID_IProgressItem;
typedef struct IProgressItemVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IProgressItem * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IProgressItem * This);
	ULONG(STDMETHODCALLTYPE * Release) (IProgressItem * This);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfoCount) (IProgressItem * This, UINT * pctinfo);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfo) (IProgressItem * This, UINT iTInfo, LCID lcid, ITypeInfo ** ppTInfo);
	HRESULT(STDMETHODCALLTYPE * GetIDsOfNames) (IProgressItem * This, REFIID riid, LPOLESTR * rgszNames, UINT cNames, LCID lcid, DISPID * rgDispId);
	HRESULT(STDMETHODCALLTYPE * Invoke) (IProgressItem * This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS * pDispParams, VARIANT * pVarResult, EXCEPINFO * pExcepInfo, UINT * puArgErr);
	HRESULT(STDMETHODCALLTYPE * get_Description) (IProgressItem * This, BSTR * desc);
	HRESULT(STDMETHODCALLTYPE * get_FirstBlock) (IProgressItem * This, ULONG * block);
	HRESULT(STDMETHODCALLTYPE * get_LastBlock) (IProgressItem * This, ULONG * block);
	HRESULT(STDMETHODCALLTYPE * get_BlockCount) (IProgressItem * This, ULONG * blocks);
	END_INTERFACE
}  IProgressItemVtbl;
interface IProgressItem
{
	CONST_VTBL struct IProgressItemVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IProgressItem_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IProgressItem_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define IProgressItem_Release(This)( (This)->lpVtbl -> Release(This) )
#define IProgressItem_GetTypeInfoCount(This,pctinfo)( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define IProgressItem_GetTypeInfo(This,iTInfo,lcid,ppTInfo)( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define IProgressItem_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define IProgressItem_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define IProgressItem_get_Description(This,desc)( (This)->lpVtbl -> get_Description(This,desc) )
#define IProgressItem_get_FirstBlock(This,block)( (This)->lpVtbl -> get_FirstBlock(This,block) )
#define IProgressItem_get_LastBlock(This,block)( (This)->lpVtbl -> get_LastBlock(This,block) )
#define IProgressItem_get_BlockCount(This,blocks)( (This)->lpVtbl -> get_BlockCount(This,blocks) )
#endif
#endif
#ifndef __IEnumProgressItems_INTERFACE_DEFINED__
#define __IEnumProgressItems_INTERFACE_DEFINED__
extern const IID IID_IEnumProgressItems;
typedef struct IEnumProgressItemsVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IEnumProgressItems * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IEnumProgressItems * This);
	ULONG(STDMETHODCALLTYPE * Release) (IEnumProgressItems * This);
	HRESULT(STDMETHODCALLTYPE * Next) (IEnumProgressItems * This, ULONG celt, IProgressItem ** rgelt, ULONG * pceltFetched);
	HRESULT(STDMETHODCALLTYPE * Skip) (IEnumProgressItems * This, ULONG celt);
	HRESULT(STDMETHODCALLTYPE * Reset) (IEnumProgressItems * This);
	HRESULT(STDMETHODCALLTYPE * Clone) (IEnumProgressItems * This, IEnumProgressItems ** ppEnum);
	END_INTERFACE
}  IEnumProgressItemsVtbl;
interface IEnumProgressItems
{
	CONST_VTBL struct IEnumProgressItemsVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IEnumProgressItems_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IEnumProgressItems_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define IEnumProgressItems_Release(This)( (This)->lpVtbl -> Release(This) )
#define IEnumProgressItems_Next(This,celt,rgelt,pceltFetched)( (This)->lpVtbl -> Next(This,celt,rgelt,pceltFetched) )
#define IEnumProgressItems_Skip(This,celt)( (This)->lpVtbl -> Skip(This,celt) )
#define IEnumProgressItems_Reset(This)( (This)->lpVtbl -> Reset(This) )
#define IEnumProgressItems_Clone(This,ppEnum)( (This)->lpVtbl -> Clone(This,ppEnum) )
#endif
HRESULT STDMETHODCALLTYPE IEnumProgressItems_RemoteNext_Proxy(IEnumProgressItems *This, ULONG celt, IProgressItem **rgelt, ULONG *pceltFetched);
void __RPC_STUB IEnumProgressItems_RemoteNext_Stub(IRpcStubBuffer *This, IRpcChannelBuffer *_pRpcChannelBuffer, PRPC_MESSAGE _pRpcMessage, DWORD *_pdwStubPhase);
#endif
#ifndef __IProgressItems_INTERFACE_DEFINED__
#define __IProgressItems_INTERFACE_DEFINED__
extern const IID IID_IProgressItems;
typedef struct IProgressItemsVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE *QueryInterface) (IProgressItems *This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE *AddRef) (IProgressItems *This);
	ULONG(STDMETHODCALLTYPE *Release) (IProgressItems *This);
	HRESULT(STDMETHODCALLTYPE *GetTypeInfoCount) (IProgressItems *This, UINT *pctinfo);
	HRESULT(STDMETHODCALLTYPE *GetTypeInfo) (IProgressItems *This, UINT iTInfo, LCID lcid, ITypeInfo **ppTInfo);
	HRESULT(STDMETHODCALLTYPE *GetIDsOfNames) (IProgressItems *This, REFIID riid, LPOLESTR *rgszNames, UINT cNames, LCID lcid, DISPID *rgDispId);
	HRESULT(STDMETHODCALLTYPE *Invoke) (IProgressItems *This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS *pDispParams, VARIANT *pVarResult, EXCEPINFO *pExcepInfo, UINT *puArgErr);
	HRESULT(STDMETHODCALLTYPE *get__NewEnum) (IProgressItems *This, IEnumVARIANT **NewEnum);
	HRESULT(STDMETHODCALLTYPE *get_Item) (IProgressItems *This, long Index, IProgressItem **item);
	HRESULT(STDMETHODCALLTYPE *get_Count) (IProgressItems *This, long *Count);
	HRESULT(STDMETHODCALLTYPE *ProgressItemFromBlock) (IProgressItems *This, ULONG block, IProgressItem **item);
	HRESULT(STDMETHODCALLTYPE *ProgressItemFromDescription) (IProgressItems *This, BSTR description, IProgressItem **item);
	HRESULT(STDMETHODCALLTYPE *get_EnumProgressItems) (IProgressItems *This, IEnumProgressItems **NewEnum);
	END_INTERFACE
}  IProgressItemsVtbl;
interface IProgressItems
{
	CONST_VTBL struct IProgressItemsVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IProgressItems_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IProgressItems_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define IProgressItems_Release(This)( (This)->lpVtbl -> Release(This) )
#define IProgressItems_GetTypeInfoCount(This,pctinfo)( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define IProgressItems_GetTypeInfo(This,iTInfo,lcid,ppTInfo)( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define IProgressItems_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define IProgressItems_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define IProgressItems_get__NewEnum(This,NewEnum)( (This)->lpVtbl -> get__NewEnum(This,NewEnum) )
#define IProgressItems_get_Item(This,Index,item)( (This)->lpVtbl -> get_Item(This,Index,item) )
#define IProgressItems_get_Count(This,Count)( (This)->lpVtbl -> get_Count(This,Count) )
#define IProgressItems_ProgressItemFromBlock(This,block,item)( (This)->lpVtbl -> ProgressItemFromBlock(This,block,item) )
#define IProgressItems_ProgressItemFromDescription(This,description,item)( (This)->lpVtbl -> ProgressItemFromDescription(This,description,item) )
#define IProgressItems_get_EnumProgressItems(This,NewEnum)( (This)->lpVtbl -> get_EnumProgressItems(This,NewEnum) )
#endif
#endif
#ifndef __IFileSystemImageResult_INTERFACE_DEFINED__
#define __IFileSystemImageResult_INTERFACE_DEFINED__
extern const IID IID_IFileSystemImageResult;
typedef struct IFileSystemImageResultVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE *QueryInterface) (IFileSystemImageResult *This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE *AddRef) (IFileSystemImageResult *This);
	ULONG(STDMETHODCALLTYPE *Release) (IFileSystemImageResult *This);
	HRESULT(STDMETHODCALLTYPE *GetTypeInfoCount) (IFileSystemImageResult *This, UINT *pctinfo);
	HRESULT(STDMETHODCALLTYPE *GetTypeInfo) (IFileSystemImageResult *This, UINT iTInfo, LCID lcid, ITypeInfo **ppTInfo);
	HRESULT(STDMETHODCALLTYPE *GetIDsOfNames) (IFileSystemImageResult *This, REFIID riid, LPOLESTR *rgszNames, UINT cNames, LCID lcid, DISPID *rgDispId);
	HRESULT(STDMETHODCALLTYPE *Invoke) (IFileSystemImageResult *This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS *pDispParams, VARIANT *pVarResult, EXCEPINFO *pExcepInfo, UINT *puArgErr);
	HRESULT(STDMETHODCALLTYPE *get_ImageStream) (IFileSystemImageResult *This, IStream **pVal);
	HRESULT(STDMETHODCALLTYPE *get_ProgressItems) (IFileSystemImageResult *This, IProgressItems **pVal);
	HRESULT(STDMETHODCALLTYPE *get_TotalBlocks) (IFileSystemImageResult *This, LONG *pVal);
	HRESULT(STDMETHODCALLTYPE *get_BlockSize) (IFileSystemImageResult *This, LONG *pVal);
	HRESULT(STDMETHODCALLTYPE *get_DiscId) (IFileSystemImageResult *This, BSTR *pVal);
	END_INTERFACE
}  IFileSystemImageResultVtbl;
interface IFileSystemImageResult
{
	CONST_VTBL struct IFileSystemImageResultVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IFileSystemImageResult_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IFileSystemImageResult_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define IFileSystemImageResult_Release(This)( (This)->lpVtbl -> Release(This) )
#define IFileSystemImageResult_GetTypeInfoCount(This,pctinfo)( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define IFileSystemImageResult_GetTypeInfo(This,iTInfo,lcid,ppTInfo)( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define IFileSystemImageResult_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define IFileSystemImageResult_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define IFileSystemImageResult_get_ImageStream(This,pVal)( (This)->lpVtbl -> get_ImageStream(This,pVal) )
#define IFileSystemImageResult_get_ProgressItems(This,pVal)( (This)->lpVtbl -> get_ProgressItems(This,pVal) )
#define IFileSystemImageResult_get_TotalBlocks(This,pVal)( (This)->lpVtbl -> get_TotalBlocks(This,pVal) )
#define IFileSystemImageResult_get_BlockSize(This,pVal)( (This)->lpVtbl -> get_BlockSize(This,pVal) )
#define IFileSystemImageResult_get_DiscId(This,pVal)( (This)->lpVtbl -> get_DiscId(This,pVal) )
#endif
#endif
#ifndef __IFileSystemImageResult2_INTERFACE_DEFINED__
#define __IFileSystemImageResult2_INTERFACE_DEFINED__
extern const IID IID_IFileSystemImageResult2;
typedef struct IFileSystemImageResult2Vtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE *QueryInterface) (IFileSystemImageResult2 *This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE *AddRef) (IFileSystemImageResult2 *This);
	ULONG(STDMETHODCALLTYPE *Release) (IFileSystemImageResult2 *This);
	HRESULT(STDMETHODCALLTYPE *GetTypeInfoCount) (IFileSystemImageResult2 *This, UINT *pctinfo);
	HRESULT(STDMETHODCALLTYPE *GetTypeInfo) (IFileSystemImageResult2 *This, UINT iTInfo, LCID lcid, ITypeInfo **ppTInfo);
	HRESULT(STDMETHODCALLTYPE *GetIDsOfNames) (IFileSystemImageResult2 *This, REFIID riid, LPOLESTR *rgszNames, UINT cNames, LCID lcid, DISPID *rgDispId);
	HRESULT(STDMETHODCALLTYPE *Invoke) (IFileSystemImageResult2 *This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS *pDispParams, VARIANT *pVarResult, EXCEPINFO *pExcepInfo, UINT *puArgErr);
	HRESULT(STDMETHODCALLTYPE *get_ImageStream) (IFileSystemImageResult2 *This, IStream **pVal);
	HRESULT(STDMETHODCALLTYPE *get_ProgressItems) (IFileSystemImageResult2 *This, IProgressItems **pVal);
	HRESULT(STDMETHODCALLTYPE *get_TotalBlocks) (IFileSystemImageResult2 *This, LONG *pVal);
	HRESULT(STDMETHODCALLTYPE *get_BlockSize) (IFileSystemImageResult2 *This, LONG *pVal);
	HRESULT(STDMETHODCALLTYPE *get_DiscId) (IFileSystemImageResult2 *This, BSTR *pVal);
	HRESULT(STDMETHODCALLTYPE *get_ModifiedBlocks) (IFileSystemImageResult2 *This, IBlockRangeList **pVal);
	END_INTERFACE
}  IFileSystemImageResult2Vtbl;
interface IFileSystemImageResult2
{
	CONST_VTBL struct IFileSystemImageResult2Vtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IFileSystemImageResult2_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IFileSystemImageResult2_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define IFileSystemImageResult2_Release(This)( (This)->lpVtbl -> Release(This) )
#define IFileSystemImageResult2_GetTypeInfoCount(This,pctinfo)( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define IFileSystemImageResult2_GetTypeInfo(This,iTInfo,lcid,ppTInfo)( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define IFileSystemImageResult2_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define IFileSystemImageResult2_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define IFileSystemImageResult2_get_ImageStream(This,pVal)( (This)->lpVtbl -> get_ImageStream(This,pVal) )
#define IFileSystemImageResult2_get_ProgressItems(This,pVal)( (This)->lpVtbl -> get_ProgressItems(This,pVal) )
#define IFileSystemImageResult2_get_TotalBlocks(This,pVal)( (This)->lpVtbl -> get_TotalBlocks(This,pVal) )
#define IFileSystemImageResult2_get_BlockSize(This,pVal)( (This)->lpVtbl -> get_BlockSize(This,pVal) )
#define IFileSystemImageResult2_get_DiscId(This,pVal)( (This)->lpVtbl -> get_DiscId(This,pVal) )
#define IFileSystemImageResult2_get_ModifiedBlocks(This,pVal)( (This)->lpVtbl -> get_ModifiedBlocks(This,pVal) )
#endif
#endif
#ifndef __IFsiItem_INTERFACE_DEFINED__
#define __IFsiItem_INTERFACE_DEFINED__
extern const IID IID_IFsiItem;
typedef struct IFsiItemVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE *QueryInterface) (IFsiItem *This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE *AddRef) (IFsiItem *This);
	ULONG(STDMETHODCALLTYPE *Release) (IFsiItem *This);
	HRESULT(STDMETHODCALLTYPE *GetTypeInfoCount) (IFsiItem *This, UINT *pctinfo);
	HRESULT(STDMETHODCALLTYPE *GetTypeInfo) (IFsiItem *This, UINT iTInfo, LCID lcid, ITypeInfo **ppTInfo);
	HRESULT(STDMETHODCALLTYPE *GetIDsOfNames) (IFsiItem *This, REFIID riid, LPOLESTR *rgszNames, UINT cNames, LCID lcid, DISPID *rgDispId);
	HRESULT(STDMETHODCALLTYPE *Invoke) (IFsiItem *This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS *pDispParams, VARIANT *pVarResult, EXCEPINFO *pExcepInfo, UINT *puArgErr);
	HRESULT(STDMETHODCALLTYPE *get_Name) (IFsiItem *This, BSTR *pVal);
	HRESULT(STDMETHODCALLTYPE *get_FullPath) (IFsiItem *This, BSTR *pVal);
	HRESULT(STDMETHODCALLTYPE *get_CreationTime) (IFsiItem *This, DATE *pVal);
	HRESULT(STDMETHODCALLTYPE *put_CreationTime) (IFsiItem *This, DATE newVal);
	HRESULT(STDMETHODCALLTYPE *get_LastAccessedTime) (IFsiItem *This, DATE *pVal);
	HRESULT(STDMETHODCALLTYPE *put_LastAccessedTime) (IFsiItem *This, DATE newVal);
	HRESULT(STDMETHODCALLTYPE *get_LastModifiedTime) (IFsiItem *This, DATE *pVal);
	HRESULT(STDMETHODCALLTYPE *put_LastModifiedTime) (IFsiItem *This, DATE newVal);
	HRESULT(STDMETHODCALLTYPE *get_IsHidden) (IFsiItem *This, VARIANT_BOOL *pVal);
	HRESULT(STDMETHODCALLTYPE *put_IsHidden) (IFsiItem *This, VARIANT_BOOL newVal);
	HRESULT(STDMETHODCALLTYPE *FileSystemName) (IFsiItem *This, FsiFileSystems fileSystem, BSTR *pVal);
	HRESULT(STDMETHODCALLTYPE *FileSystemPath) (IFsiItem *This, FsiFileSystems fileSystem, BSTR *pVal);
	END_INTERFACE
}  IFsiItemVtbl;
interface IFsiItem
{
	CONST_VTBL struct IFsiItemVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IFsiItem_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IFsiItem_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define IFsiItem_Release(This)( (This)->lpVtbl -> Release(This) )
#define IFsiItem_GetTypeInfoCount(This,pctinfo)( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define IFsiItem_GetTypeInfo(This,iTInfo,lcid,ppTInfo)( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define IFsiItem_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define IFsiItem_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define IFsiItem_get_Name(This,pVal)( (This)->lpVtbl -> get_Name(This,pVal) )
#define IFsiItem_get_FullPath(This,pVal)( (This)->lpVtbl -> get_FullPath(This,pVal) )
#define IFsiItem_get_CreationTime(This,pVal)( (This)->lpVtbl -> get_CreationTime(This,pVal) )
#define IFsiItem_put_CreationTime(This,newVal)( (This)->lpVtbl -> put_CreationTime(This,newVal) )
#define IFsiItem_get_LastAccessedTime(This,pVal)( (This)->lpVtbl -> get_LastAccessedTime(This,pVal) )
#define IFsiItem_put_LastAccessedTime(This,newVal)( (This)->lpVtbl -> put_LastAccessedTime(This,newVal) )
#define IFsiItem_get_LastModifiedTime(This,pVal)( (This)->lpVtbl -> get_LastModifiedTime(This,pVal) )
#define IFsiItem_put_LastModifiedTime(This,newVal)( (This)->lpVtbl -> put_LastModifiedTime(This,newVal) )
#define IFsiItem_get_IsHidden(This,pVal)( (This)->lpVtbl -> get_IsHidden(This,pVal) )
#define IFsiItem_put_IsHidden(This,newVal)( (This)->lpVtbl -> put_IsHidden(This,newVal) )
#define IFsiItem_FileSystemName(This,fileSystem,pVal)( (This)->lpVtbl -> FileSystemName(This,fileSystem,pVal) )
#define IFsiItem_FileSystemPath(This,fileSystem,pVal)( (This)->lpVtbl -> FileSystemPath(This,fileSystem,pVal) )
#endif
#endif
#ifndef __IEnumFsiItems_INTERFACE_DEFINED__
#define __IEnumFsiItems_INTERFACE_DEFINED__
extern const IID IID_IEnumFsiItems;
typedef struct IEnumFsiItemsVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE *QueryInterface) (IEnumFsiItems *This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE *AddRef) (IEnumFsiItems *This);
	ULONG(STDMETHODCALLTYPE *Release) (IEnumFsiItems *This);
	HRESULT(STDMETHODCALLTYPE *Next) (IEnumFsiItems *This, ULONG celt, IFsiItem **rgelt, ULONG *pceltFetched);
	HRESULT(STDMETHODCALLTYPE *Skip) (IEnumFsiItems *This, ULONG celt);
	HRESULT(STDMETHODCALLTYPE *Reset) (IEnumFsiItems *This);
	HRESULT(STDMETHODCALLTYPE *Clone) (IEnumFsiItems *This, IEnumFsiItems **ppEnum);
	END_INTERFACE
}  IEnumFsiItemsVtbl;
interface IEnumFsiItems
{
	CONST_VTBL struct IEnumFsiItemsVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IEnumFsiItems_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IEnumFsiItems_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define IEnumFsiItems_Release(This)( (This)->lpVtbl -> Release(This) )
#define IEnumFsiItems_Next(This,celt,rgelt,pceltFetched)( (This)->lpVtbl -> Next(This,celt,rgelt,pceltFetched) )
#define IEnumFsiItems_Skip(This,celt)( (This)->lpVtbl -> Skip(This,celt) )
#define IEnumFsiItems_Reset(This)( (This)->lpVtbl -> Reset(This) )
#define IEnumFsiItems_Clone(This,ppEnum)( (This)->lpVtbl -> Clone(This,ppEnum) )
#endif
HRESULT STDMETHODCALLTYPE IEnumFsiItems_RemoteNext_Proxy(IEnumFsiItems *This, ULONG celt, IFsiItem **rgelt, ULONG *pceltFetched);
void __RPC_STUB IEnumFsiItems_RemoteNext_Stub(IRpcStubBuffer *This, IRpcChannelBuffer *_pRpcChannelBuffer, PRPC_MESSAGE _pRpcMessage, DWORD *_pdwStubPhase);
#endif
#ifndef __IFsiFileItem_INTERFACE_DEFINED__
#define __IFsiFileItem_INTERFACE_DEFINED__
extern const IID IID_IFsiFileItem;
typedef struct IFsiFileItemVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE *QueryInterface) (IFsiFileItem *This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE *AddRef) (IFsiFileItem *This);
	ULONG(STDMETHODCALLTYPE *Release) (IFsiFileItem *This);
	HRESULT(STDMETHODCALLTYPE *GetTypeInfoCount) (IFsiFileItem *This, UINT *pctinfo);
	HRESULT(STDMETHODCALLTYPE *GetTypeInfo) (IFsiFileItem *This, UINT iTInfo, LCID lcid, ITypeInfo **ppTInfo);
	HRESULT(STDMETHODCALLTYPE *GetIDsOfNames) (IFsiFileItem *This, REFIID riid, LPOLESTR *rgszNames, UINT cNames, LCID lcid, DISPID *rgDispId);
	HRESULT(STDMETHODCALLTYPE *Invoke) (IFsiFileItem *This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS *pDispParams, VARIANT *pVarResult, EXCEPINFO *pExcepInfo, UINT *puArgErr);
	HRESULT(STDMETHODCALLTYPE *get_Name) (IFsiFileItem *This, BSTR *pVal);
	HRESULT(STDMETHODCALLTYPE *get_FullPath) (IFsiFileItem *This, BSTR *pVal);
	HRESULT(STDMETHODCALLTYPE *get_CreationTime) (IFsiFileItem *This, DATE *pVal);
	HRESULT(STDMETHODCALLTYPE *put_CreationTime) (IFsiFileItem *This, DATE newVal);
	HRESULT(STDMETHODCALLTYPE *get_LastAccessedTime) (IFsiFileItem *This, DATE *pVal);
	HRESULT(STDMETHODCALLTYPE *put_LastAccessedTime) (IFsiFileItem *This, DATE newVal);
	HRESULT(STDMETHODCALLTYPE *get_LastModifiedTime) (IFsiFileItem *This, DATE *pVal);
	HRESULT(STDMETHODCALLTYPE *put_LastModifiedTime) (IFsiFileItem *This, DATE newVal);
	HRESULT(STDMETHODCALLTYPE *get_IsHidden) (IFsiFileItem *This, VARIANT_BOOL *pVal);
	HRESULT(STDMETHODCALLTYPE *put_IsHidden) (IFsiFileItem *This, VARIANT_BOOL newVal);
	HRESULT(STDMETHODCALLTYPE *FileSystemName) (IFsiFileItem *This, FsiFileSystems fileSystem, BSTR *pVal);
	HRESULT(STDMETHODCALLTYPE *FileSystemPath) (IFsiFileItem *This, FsiFileSystems fileSystem, BSTR *pVal);
	HRESULT(STDMETHODCALLTYPE *get_DataSize) (IFsiFileItem *This, LONGLONG *pVal);
	HRESULT(STDMETHODCALLTYPE *get_DataSize32BitLow) (IFsiFileItem *This, LONG *pVal);
	HRESULT(STDMETHODCALLTYPE *get_DataSize32BitHigh) (IFsiFileItem *This, LONG *pVal);
	HRESULT(STDMETHODCALLTYPE *get_Data) (IFsiFileItem *This, IStream **pVal);
	HRESULT(STDMETHODCALLTYPE *put_Data) (IFsiFileItem *This, IStream *newVal);
	END_INTERFACE
}  IFsiFileItemVtbl;
interface IFsiFileItem
{
	CONST_VTBL struct IFsiFileItemVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IFsiFileItem_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IFsiFileItem_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define IFsiFileItem_Release(This)( (This)->lpVtbl -> Release(This) )
#define IFsiFileItem_GetTypeInfoCount(This,pctinfo)( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define IFsiFileItem_GetTypeInfo(This,iTInfo,lcid,ppTInfo)( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define IFsiFileItem_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define IFsiFileItem_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define IFsiFileItem_get_Name(This,pVal)( (This)->lpVtbl -> get_Name(This,pVal) )
#define IFsiFileItem_get_FullPath(This,pVal)( (This)->lpVtbl -> get_FullPath(This,pVal) )
#define IFsiFileItem_get_CreationTime(This,pVal)( (This)->lpVtbl -> get_CreationTime(This,pVal) )
#define IFsiFileItem_put_CreationTime(This,newVal)( (This)->lpVtbl -> put_CreationTime(This,newVal) )
#define IFsiFileItem_get_LastAccessedTime(This,pVal)( (This)->lpVtbl -> get_LastAccessedTime(This,pVal) )
#define IFsiFileItem_put_LastAccessedTime(This,newVal)( (This)->lpVtbl -> put_LastAccessedTime(This,newVal) )
#define IFsiFileItem_get_LastModifiedTime(This,pVal)( (This)->lpVtbl -> get_LastModifiedTime(This,pVal) )
#define IFsiFileItem_put_LastModifiedTime(This,newVal)( (This)->lpVtbl -> put_LastModifiedTime(This,newVal) )
#define IFsiFileItem_get_IsHidden(This,pVal)( (This)->lpVtbl -> get_IsHidden(This,pVal) )
#define IFsiFileItem_put_IsHidden(This,newVal)( (This)->lpVtbl -> put_IsHidden(This,newVal) )
#define IFsiFileItem_FileSystemName(This,fileSystem,pVal)( (This)->lpVtbl -> FileSystemName(This,fileSystem,pVal) )
#define IFsiFileItem_FileSystemPath(This,fileSystem,pVal)( (This)->lpVtbl -> FileSystemPath(This,fileSystem,pVal) )
#define IFsiFileItem_get_DataSize(This,pVal)( (This)->lpVtbl -> get_DataSize(This,pVal) )
#define IFsiFileItem_get_DataSize32BitLow(This,pVal)( (This)->lpVtbl -> get_DataSize32BitLow(This,pVal) )
#define IFsiFileItem_get_DataSize32BitHigh(This,pVal)( (This)->lpVtbl -> get_DataSize32BitHigh(This,pVal) )
#define IFsiFileItem_get_Data(This,pVal)( (This)->lpVtbl -> get_Data(This,pVal) )
#define IFsiFileItem_put_Data(This,newVal)( (This)->lpVtbl -> put_Data(This,newVal) )
#endif
#endif
extern RPC_IF_HANDLE __MIDL_itf_imapi2fs_0000_0009_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_imapi2fs_0000_0009_v0_0_s_ifspec;
#ifndef __IFsiFileItem2_INTERFACE_DEFINED__
#define __IFsiFileItem2_INTERFACE_DEFINED__
extern const IID IID_IFsiFileItem2;
typedef struct IFsiFileItem2Vtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE *QueryInterface) (IFsiFileItem2 *This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE *AddRef) (IFsiFileItem2 *This);
	ULONG(STDMETHODCALLTYPE *Release) (IFsiFileItem2 *This);
	HRESULT(STDMETHODCALLTYPE *GetTypeInfoCount) (IFsiFileItem2 *This, UINT *pctinfo);
	HRESULT(STDMETHODCALLTYPE *GetTypeInfo) (IFsiFileItem2 *This, UINT iTInfo, LCID lcid, ITypeInfo **ppTInfo);
	HRESULT(STDMETHODCALLTYPE *GetIDsOfNames) (IFsiFileItem2 *This, REFIID riid, LPOLESTR *rgszNames, UINT cNames, LCID lcid, DISPID *rgDispId);
	HRESULT(STDMETHODCALLTYPE *Invoke) (IFsiFileItem2 *This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS *pDispParams, VARIANT *pVarResult, EXCEPINFO *pExcepInfo, UINT *puArgErr);
	HRESULT(STDMETHODCALLTYPE *get_Name) (IFsiFileItem2 *This, BSTR *pVal);
	HRESULT(STDMETHODCALLTYPE *get_FullPath) (IFsiFileItem2 *This, BSTR *pVal);
	HRESULT(STDMETHODCALLTYPE *get_CreationTime) (IFsiFileItem2 *This, DATE *pVal);
	HRESULT(STDMETHODCALLTYPE *put_CreationTime) (IFsiFileItem2 *This, DATE newVal);
	HRESULT(STDMETHODCALLTYPE *get_LastAccessedTime) (IFsiFileItem2 *This, DATE *pVal);
	HRESULT(STDMETHODCALLTYPE *put_LastAccessedTime) (IFsiFileItem2 *This, DATE newVal);
	HRESULT(STDMETHODCALLTYPE *get_LastModifiedTime) (IFsiFileItem2 *This, DATE *pVal);
	HRESULT(STDMETHODCALLTYPE *put_LastModifiedTime) (IFsiFileItem2 *This, DATE newVal);
	HRESULT(STDMETHODCALLTYPE *get_IsHidden) (IFsiFileItem2 *This, VARIANT_BOOL *pVal);
	HRESULT(STDMETHODCALLTYPE *put_IsHidden) (IFsiFileItem2 *This, VARIANT_BOOL newVal);
	HRESULT(STDMETHODCALLTYPE *FileSystemName) (IFsiFileItem2 *This, FsiFileSystems fileSystem, BSTR *pVal);
	HRESULT(STDMETHODCALLTYPE *FileSystemPath) (IFsiFileItem2 *This, FsiFileSystems fileSystem, BSTR *pVal);
	HRESULT(STDMETHODCALLTYPE *get_DataSize) (IFsiFileItem2 *This, LONGLONG *pVal);
	HRESULT(STDMETHODCALLTYPE *get_DataSize32BitLow) (IFsiFileItem2 *This, LONG *pVal);
	HRESULT(STDMETHODCALLTYPE *get_DataSize32BitHigh) (IFsiFileItem2 *This, LONG *pVal);
	HRESULT(STDMETHODCALLTYPE *get_Data) (IFsiFileItem2 *This, IStream **pVal);
	HRESULT(STDMETHODCALLTYPE *put_Data) (IFsiFileItem2 *This, IStream *newVal);
	HRESULT(STDMETHODCALLTYPE *get_FsiNamedStreams) (IFsiFileItem2 *This, IFsiNamedStreams **streams);
	HRESULT(STDMETHODCALLTYPE *get_IsNamedStream) (IFsiFileItem2 *This, VARIANT_BOOL *pVal);
	HRESULT(STDMETHODCALLTYPE *AddStream) (IFsiFileItem2 *This, BSTR name, IStream *streamData);
	HRESULT(STDMETHODCALLTYPE *RemoveStream) (IFsiFileItem2 *This, BSTR name);
	HRESULT(STDMETHODCALLTYPE *get_IsRealTime) (IFsiFileItem2 *This, VARIANT_BOOL *pVal);
	HRESULT(STDMETHODCALLTYPE *put_IsRealTime) (IFsiFileItem2 *This, VARIANT_BOOL newVal);
	END_INTERFACE
}  IFsiFileItem2Vtbl;
interface IFsiFileItem2
{
	CONST_VTBL struct IFsiFileItem2Vtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IFsiFileItem2_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IFsiFileItem2_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define IFsiFileItem2_Release(This)( (This)->lpVtbl -> Release(This) )
#define IFsiFileItem2_GetTypeInfoCount(This,pctinfo)( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define IFsiFileItem2_GetTypeInfo(This,iTInfo,lcid,ppTInfo)( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define IFsiFileItem2_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define IFsiFileItem2_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define IFsiFileItem2_get_Name(This,pVal)( (This)->lpVtbl -> get_Name(This,pVal) )
#define IFsiFileItem2_get_FullPath(This,pVal)( (This)->lpVtbl -> get_FullPath(This,pVal) )
#define IFsiFileItem2_get_CreationTime(This,pVal)( (This)->lpVtbl -> get_CreationTime(This,pVal) )
#define IFsiFileItem2_put_CreationTime(This,newVal)( (This)->lpVtbl -> put_CreationTime(This,newVal) )
#define IFsiFileItem2_get_LastAccessedTime(This,pVal)( (This)->lpVtbl -> get_LastAccessedTime(This,pVal) )
#define IFsiFileItem2_put_LastAccessedTime(This,newVal)( (This)->lpVtbl -> put_LastAccessedTime(This,newVal) )
#define IFsiFileItem2_get_LastModifiedTime(This,pVal)( (This)->lpVtbl -> get_LastModifiedTime(This,pVal) )
#define IFsiFileItem2_put_LastModifiedTime(This,newVal)( (This)->lpVtbl -> put_LastModifiedTime(This,newVal) )
#define IFsiFileItem2_get_IsHidden(This,pVal)( (This)->lpVtbl -> get_IsHidden(This,pVal) )
#define IFsiFileItem2_put_IsHidden(This,newVal)( (This)->lpVtbl -> put_IsHidden(This,newVal) )
#define IFsiFileItem2_FileSystemName(This,fileSystem,pVal)( (This)->lpVtbl -> FileSystemName(This,fileSystem,pVal) )
#define IFsiFileItem2_FileSystemPath(This,fileSystem,pVal)( (This)->lpVtbl -> FileSystemPath(This,fileSystem,pVal) )
#define IFsiFileItem2_get_DataSize(This,pVal)( (This)->lpVtbl -> get_DataSize(This,pVal) )
#define IFsiFileItem2_get_DataSize32BitLow(This,pVal)( (This)->lpVtbl -> get_DataSize32BitLow(This,pVal) )
#define IFsiFileItem2_get_DataSize32BitHigh(This,pVal)( (This)->lpVtbl -> get_DataSize32BitHigh(This,pVal) )
#define IFsiFileItem2_get_Data(This,pVal)( (This)->lpVtbl -> get_Data(This,pVal) )
#define IFsiFileItem2_put_Data(This,newVal)( (This)->lpVtbl -> put_Data(This,newVal) )
#define IFsiFileItem2_get_FsiNamedStreams(This,streams)( (This)->lpVtbl -> get_FsiNamedStreams(This,streams) )
#define IFsiFileItem2_get_IsNamedStream(This,pVal)( (This)->lpVtbl -> get_IsNamedStream(This,pVal) )
#define IFsiFileItem2_AddStream(This,name,streamData)( (This)->lpVtbl -> AddStream(This,name,streamData) )
#define IFsiFileItem2_RemoveStream(This,name)( (This)->lpVtbl -> RemoveStream(This,name) )
#define IFsiFileItem2_get_IsRealTime(This,pVal)( (This)->lpVtbl -> get_IsRealTime(This,pVal) )
#define IFsiFileItem2_put_IsRealTime(This,newVal)( (This)->lpVtbl -> put_IsRealTime(This,newVal) )
#endif
#endif
#ifndef __IFsiNamedStreams_INTERFACE_DEFINED__
#define __IFsiNamedStreams_INTERFACE_DEFINED__
extern const IID IID_IFsiNamedStreams;
typedef struct IFsiNamedStreamsVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE *QueryInterface) (IFsiNamedStreams *This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE *AddRef) (IFsiNamedStreams *This);
	ULONG(STDMETHODCALLTYPE *Release) (IFsiNamedStreams *This);
	HRESULT(STDMETHODCALLTYPE *GetTypeInfoCount) (IFsiNamedStreams *This, UINT *pctinfo);
	HRESULT(STDMETHODCALLTYPE *GetTypeInfo) (IFsiNamedStreams *This, UINT iTInfo, LCID lcid, ITypeInfo **ppTInfo);
	HRESULT(STDMETHODCALLTYPE *GetIDsOfNames) (IFsiNamedStreams *This, REFIID riid, LPOLESTR *rgszNames, UINT cNames, LCID lcid, DISPID *rgDispId);
	HRESULT(STDMETHODCALLTYPE *Invoke) (IFsiNamedStreams *This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS *pDispParams, VARIANT *pVarResult, EXCEPINFO *pExcepInfo, UINT *puArgErr);
	HRESULT(STDMETHODCALLTYPE *get__NewEnum) (IFsiNamedStreams *This, IEnumVARIANT **NewEnum);
	HRESULT(STDMETHODCALLTYPE *get_Item) (IFsiNamedStreams *This, LONG index, IFsiFileItem2 **item);
	HRESULT(STDMETHODCALLTYPE *get_Count) (IFsiNamedStreams *This, LONG *count);
	HRESULT(STDMETHODCALLTYPE *get_EnumNamedStreams) (IFsiNamedStreams *This, IEnumFsiItems **NewEnum);
	END_INTERFACE
}  IFsiNamedStreamsVtbl;
interface IFsiNamedStreams
{
	CONST_VTBL struct IFsiNamedStreamsVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IFsiNamedStreams_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IFsiNamedStreams_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define IFsiNamedStreams_Release(This)( (This)->lpVtbl -> Release(This) )
#define IFsiNamedStreams_GetTypeInfoCount(This,pctinfo)( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define IFsiNamedStreams_GetTypeInfo(This,iTInfo,lcid,ppTInfo)( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define IFsiNamedStreams_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define IFsiNamedStreams_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define IFsiNamedStreams_get__NewEnum(This,NewEnum)( (This)->lpVtbl -> get__NewEnum(This,NewEnum) )
#define IFsiNamedStreams_get_Item(This,index,item)( (This)->lpVtbl -> get_Item(This,index,item) )
#define IFsiNamedStreams_get_Count(This,count)( (This)->lpVtbl -> get_Count(This,count) )
#define IFsiNamedStreams_get_EnumNamedStreams(This,NewEnum)( (This)->lpVtbl -> get_EnumNamedStreams(This,NewEnum) )
#endif
#endif
#ifndef __IFsiDirectoryItem_INTERFACE_DEFINED__
#define __IFsiDirectoryItem_INTERFACE_DEFINED__
extern const IID IID_IFsiDirectoryItem;
typedef struct IFsiDirectoryItemVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE *QueryInterface) (IFsiDirectoryItem *This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE *AddRef) (IFsiDirectoryItem *This);
	ULONG(STDMETHODCALLTYPE *Release) (IFsiDirectoryItem *This);
	HRESULT(STDMETHODCALLTYPE *GetTypeInfoCount) (IFsiDirectoryItem *This, UINT *pctinfo);
	HRESULT(STDMETHODCALLTYPE *GetTypeInfo) (IFsiDirectoryItem *This, UINT iTInfo, LCID lcid, ITypeInfo **ppTInfo);
	HRESULT(STDMETHODCALLTYPE *GetIDsOfNames) (IFsiDirectoryItem *This, REFIID riid, LPOLESTR *rgszNames, UINT cNames, LCID lcid, DISPID *rgDispId);
	HRESULT(STDMETHODCALLTYPE *Invoke) (IFsiDirectoryItem *This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS *pDispParams, VARIANT *pVarResult, EXCEPINFO *pExcepInfo, UINT *puArgErr);
	HRESULT(STDMETHODCALLTYPE *get_Name) (IFsiDirectoryItem *This, BSTR *pVal);
	HRESULT(STDMETHODCALLTYPE *get_FullPath) (IFsiDirectoryItem *This, BSTR *pVal);
	HRESULT(STDMETHODCALLTYPE *get_CreationTime) (IFsiDirectoryItem *This, DATE *pVal);
	HRESULT(STDMETHODCALLTYPE *put_CreationTime) (IFsiDirectoryItem *This, DATE newVal);
	HRESULT(STDMETHODCALLTYPE *get_LastAccessedTime) (IFsiDirectoryItem *This, DATE *pVal);
	HRESULT(STDMETHODCALLTYPE *put_LastAccessedTime) (IFsiDirectoryItem *This, DATE newVal);
	HRESULT(STDMETHODCALLTYPE *get_LastModifiedTime) (IFsiDirectoryItem *This, DATE *pVal);
	HRESULT(STDMETHODCALLTYPE *put_LastModifiedTime) (IFsiDirectoryItem *This, DATE newVal);
	HRESULT(STDMETHODCALLTYPE *get_IsHidden) (IFsiDirectoryItem *This, VARIANT_BOOL *pVal);
	HRESULT(STDMETHODCALLTYPE *put_IsHidden) (IFsiDirectoryItem *This, VARIANT_BOOL newVal);
	HRESULT(STDMETHODCALLTYPE *FileSystemName) (IFsiDirectoryItem *This, FsiFileSystems fileSystem, BSTR *pVal);
	HRESULT(STDMETHODCALLTYPE *FileSystemPath) (IFsiDirectoryItem *This, FsiFileSystems fileSystem, BSTR *pVal);
	HRESULT(STDMETHODCALLTYPE *get__NewEnum) (IFsiDirectoryItem *This, IEnumVARIANT **NewEnum);
	HRESULT(STDMETHODCALLTYPE *get_Item) (IFsiDirectoryItem *This, BSTR path, IFsiItem **item);
	HRESULT(STDMETHODCALLTYPE *get_Count) (IFsiDirectoryItem *This, LONG *Count);
	HRESULT(STDMETHODCALLTYPE *get_EnumFsiItems) (IFsiDirectoryItem *This, IEnumFsiItems **NewEnum);
	HRESULT(STDMETHODCALLTYPE *AddDirectory) (IFsiDirectoryItem *This, BSTR path);
	HRESULT(STDMETHODCALLTYPE *AddFile) (IFsiDirectoryItem *This, BSTR path, IStream *fileData);
	HRESULT(STDMETHODCALLTYPE *AddTree) (IFsiDirectoryItem *This, BSTR sourceDirectory, VARIANT_BOOL includeBaseDirectory);
	HRESULT(STDMETHODCALLTYPE *Add) (IFsiDirectoryItem *This, IFsiItem *item);
	HRESULT(STDMETHODCALLTYPE *Remove) (IFsiDirectoryItem *This, BSTR path);
	HRESULT(STDMETHODCALLTYPE *RemoveTree) (IFsiDirectoryItem *This, BSTR path);
	END_INTERFACE
}  IFsiDirectoryItemVtbl;
interface IFsiDirectoryItem
{
	CONST_VTBL struct IFsiDirectoryItemVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IFsiDirectoryItem_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IFsiDirectoryItem_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define IFsiDirectoryItem_Release(This)( (This)->lpVtbl -> Release(This) )
#define IFsiDirectoryItem_GetTypeInfoCount(This,pctinfo)( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define IFsiDirectoryItem_GetTypeInfo(This,iTInfo,lcid,ppTInfo)( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define IFsiDirectoryItem_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define IFsiDirectoryItem_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define IFsiDirectoryItem_get_Name(This,pVal)( (This)->lpVtbl -> get_Name(This,pVal) )
#define IFsiDirectoryItem_get_FullPath(This,pVal)( (This)->lpVtbl -> get_FullPath(This,pVal) )
#define IFsiDirectoryItem_get_CreationTime(This,pVal)( (This)->lpVtbl -> get_CreationTime(This,pVal) )
#define IFsiDirectoryItem_put_CreationTime(This,newVal)( (This)->lpVtbl -> put_CreationTime(This,newVal) )
#define IFsiDirectoryItem_get_LastAccessedTime(This,pVal)( (This)->lpVtbl -> get_LastAccessedTime(This,pVal) )
#define IFsiDirectoryItem_put_LastAccessedTime(This,newVal)( (This)->lpVtbl -> put_LastAccessedTime(This,newVal) )
#define IFsiDirectoryItem_get_LastModifiedTime(This,pVal)( (This)->lpVtbl -> get_LastModifiedTime(This,pVal) )
#define IFsiDirectoryItem_put_LastModifiedTime(This,newVal)( (This)->lpVtbl -> put_LastModifiedTime(This,newVal) )
#define IFsiDirectoryItem_get_IsHidden(This,pVal)( (This)->lpVtbl -> get_IsHidden(This,pVal) )
#define IFsiDirectoryItem_put_IsHidden(This,newVal)( (This)->lpVtbl -> put_IsHidden(This,newVal) )
#define IFsiDirectoryItem_FileSystemName(This,fileSystem,pVal)( (This)->lpVtbl -> FileSystemName(This,fileSystem,pVal) )
#define IFsiDirectoryItem_FileSystemPath(This,fileSystem,pVal)( (This)->lpVtbl -> FileSystemPath(This,fileSystem,pVal) )
#define IFsiDirectoryItem_get__NewEnum(This,NewEnum)( (This)->lpVtbl -> get__NewEnum(This,NewEnum) )
#define IFsiDirectoryItem_get_Item(This,path,item)( (This)->lpVtbl -> get_Item(This,path,item) )
#define IFsiDirectoryItem_get_Count(This,Count)( (This)->lpVtbl -> get_Count(This,Count) )
#define IFsiDirectoryItem_get_EnumFsiItems(This,NewEnum)( (This)->lpVtbl -> get_EnumFsiItems(This,NewEnum) )
#define IFsiDirectoryItem_AddDirectory(This,path)( (This)->lpVtbl -> AddDirectory(This,path) )
#define IFsiDirectoryItem_AddFile(This,path,fileData)( (This)->lpVtbl -> AddFile(This,path,fileData) )
#define IFsiDirectoryItem_AddTree(This,sourceDirectory,includeBaseDirectory)( (This)->lpVtbl -> AddTree(This,sourceDirectory,includeBaseDirectory) )
#define IFsiDirectoryItem_Add(This,item)( (This)->lpVtbl -> Add(This,item) )
#define IFsiDirectoryItem_Remove(This,path)( (This)->lpVtbl -> Remove(This,path) )
#define IFsiDirectoryItem_RemoveTree(This,path)( (This)->lpVtbl -> RemoveTree(This,path) )
#endif
#endif
#ifndef __IFsiDirectoryItem2_INTERFACE_DEFINED__
#define __IFsiDirectoryItem2_INTERFACE_DEFINED__
extern const IID IID_IFsiDirectoryItem2;
typedef struct IFsiDirectoryItem2Vtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE *QueryInterface) (IFsiDirectoryItem2 *This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE *AddRef) (IFsiDirectoryItem2 *This);
	ULONG(STDMETHODCALLTYPE *Release) (IFsiDirectoryItem2 *This);
	HRESULT(STDMETHODCALLTYPE *GetTypeInfoCount) (IFsiDirectoryItem2 *This, UINT *pctinfo);
	HRESULT(STDMETHODCALLTYPE *GetTypeInfo) (IFsiDirectoryItem2 *This, UINT iTInfo, LCID lcid, ITypeInfo **ppTInfo);
	HRESULT(STDMETHODCALLTYPE *GetIDsOfNames) (IFsiDirectoryItem2 *This, REFIID riid, LPOLESTR *rgszNames, UINT cNames, LCID lcid, DISPID *rgDispId);
	HRESULT(STDMETHODCALLTYPE *Invoke) (IFsiDirectoryItem2 *This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS *pDispParams, VARIANT *pVarResult, EXCEPINFO *pExcepInfo, UINT *puArgErr);
	HRESULT(STDMETHODCALLTYPE *get_Name) (IFsiDirectoryItem2 *This, BSTR *pVal);
	HRESULT(STDMETHODCALLTYPE *get_FullPath) (IFsiDirectoryItem2 *This, BSTR *pVal);
	HRESULT(STDMETHODCALLTYPE *get_CreationTime) (IFsiDirectoryItem2 *This, DATE *pVal);
	HRESULT(STDMETHODCALLTYPE *put_CreationTime) (IFsiDirectoryItem2 *This, DATE newVal);
	HRESULT(STDMETHODCALLTYPE *get_LastAccessedTime) (IFsiDirectoryItem2 *This, DATE *pVal);
	HRESULT(STDMETHODCALLTYPE *put_LastAccessedTime) (IFsiDirectoryItem2 *This, DATE newVal);
	HRESULT(STDMETHODCALLTYPE *get_LastModifiedTime) (IFsiDirectoryItem2 *This, DATE *pVal);
	HRESULT(STDMETHODCALLTYPE *put_LastModifiedTime) (IFsiDirectoryItem2 *This, DATE newVal);
	HRESULT(STDMETHODCALLTYPE *get_IsHidden) (IFsiDirectoryItem2 *This, VARIANT_BOOL *pVal);
	HRESULT(STDMETHODCALLTYPE *put_IsHidden) (IFsiDirectoryItem2 *This, VARIANT_BOOL newVal);
	HRESULT(STDMETHODCALLTYPE *FileSystemName) (IFsiDirectoryItem2 *This, FsiFileSystems fileSystem, BSTR *pVal);
	HRESULT(STDMETHODCALLTYPE *FileSystemPath) (IFsiDirectoryItem2 *This, FsiFileSystems fileSystem, BSTR *pVal);
	HRESULT(STDMETHODCALLTYPE *get__NewEnum) (IFsiDirectoryItem2 *This, IEnumVARIANT **NewEnum);
	HRESULT(STDMETHODCALLTYPE *get_Item) (IFsiDirectoryItem2 *This, BSTR path, IFsiItem **item);
	HRESULT(STDMETHODCALLTYPE *get_Count) (IFsiDirectoryItem2 *This, LONG *Count);
	HRESULT(STDMETHODCALLTYPE *get_EnumFsiItems) (IFsiDirectoryItem2 *This, IEnumFsiItems **NewEnum);
	HRESULT(STDMETHODCALLTYPE *AddDirectory) (IFsiDirectoryItem2 *This, BSTR path);
	HRESULT(STDMETHODCALLTYPE *AddFile) (IFsiDirectoryItem2 *This, BSTR path, IStream *fileData);
	HRESULT(STDMETHODCALLTYPE *AddTree) (IFsiDirectoryItem2 *This, BSTR sourceDirectory, VARIANT_BOOL includeBaseDirectory);
	HRESULT(STDMETHODCALLTYPE *Add) (IFsiDirectoryItem2 *This, IFsiItem *item);
	HRESULT(STDMETHODCALLTYPE *Remove) (IFsiDirectoryItem2 *This, BSTR path);
	HRESULT(STDMETHODCALLTYPE *RemoveTree) (IFsiDirectoryItem2 *This, BSTR path);
	HRESULT(STDMETHODCALLTYPE *AddTreeWithNamedStreams) (IFsiDirectoryItem2 *This, BSTR sourceDirectory, VARIANT_BOOL includeBaseDirectory);
	END_INTERFACE
}  IFsiDirectoryItem2Vtbl;
interface IFsiDirectoryItem2
{
	CONST_VTBL struct IFsiDirectoryItem2Vtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IFsiDirectoryItem2_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IFsiDirectoryItem2_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define IFsiDirectoryItem2_Release(This)( (This)->lpVtbl -> Release(This) )
#define IFsiDirectoryItem2_GetTypeInfoCount(This,pctinfo)( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define IFsiDirectoryItem2_GetTypeInfo(This,iTInfo,lcid,ppTInfo)( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define IFsiDirectoryItem2_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define IFsiDirectoryItem2_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define IFsiDirectoryItem2_get_Name(This,pVal)( (This)->lpVtbl -> get_Name(This,pVal) )
#define IFsiDirectoryItem2_get_FullPath(This,pVal)( (This)->lpVtbl -> get_FullPath(This,pVal) )
#define IFsiDirectoryItem2_get_CreationTime(This,pVal)( (This)->lpVtbl -> get_CreationTime(This,pVal) )
#define IFsiDirectoryItem2_put_CreationTime(This,newVal)( (This)->lpVtbl -> put_CreationTime(This,newVal) )
#define IFsiDirectoryItem2_get_LastAccessedTime(This,pVal)( (This)->lpVtbl -> get_LastAccessedTime(This,pVal) )
#define IFsiDirectoryItem2_put_LastAccessedTime(This,newVal)( (This)->lpVtbl -> put_LastAccessedTime(This,newVal) )
#define IFsiDirectoryItem2_get_LastModifiedTime(This,pVal)( (This)->lpVtbl -> get_LastModifiedTime(This,pVal) )
#define IFsiDirectoryItem2_put_LastModifiedTime(This,newVal)( (This)->lpVtbl -> put_LastModifiedTime(This,newVal) )
#define IFsiDirectoryItem2_get_IsHidden(This,pVal)( (This)->lpVtbl -> get_IsHidden(This,pVal) )
#define IFsiDirectoryItem2_put_IsHidden(This,newVal)( (This)->lpVtbl -> put_IsHidden(This,newVal) )
#define IFsiDirectoryItem2_FileSystemName(This,fileSystem,pVal)( (This)->lpVtbl -> FileSystemName(This,fileSystem,pVal) )
#define IFsiDirectoryItem2_FileSystemPath(This,fileSystem,pVal)( (This)->lpVtbl -> FileSystemPath(This,fileSystem,pVal) )
#define IFsiDirectoryItem2_get__NewEnum(This,NewEnum)( (This)->lpVtbl -> get__NewEnum(This,NewEnum) )
#define IFsiDirectoryItem2_get_Item(This,path,item)( (This)->lpVtbl -> get_Item(This,path,item) )
#define IFsiDirectoryItem2_get_Count(This,Count)( (This)->lpVtbl -> get_Count(This,Count) )
#define IFsiDirectoryItem2_get_EnumFsiItems(This,NewEnum)( (This)->lpVtbl -> get_EnumFsiItems(This,NewEnum) )
#define IFsiDirectoryItem2_AddDirectory(This,path)( (This)->lpVtbl -> AddDirectory(This,path) )
#define IFsiDirectoryItem2_AddFile(This,path,fileData)( (This)->lpVtbl -> AddFile(This,path,fileData) )
#define IFsiDirectoryItem2_AddTree(This,sourceDirectory,includeBaseDirectory)( (This)->lpVtbl -> AddTree(This,sourceDirectory,includeBaseDirectory) )
#define IFsiDirectoryItem2_Add(This,item)( (This)->lpVtbl -> Add(This,item) )
#define IFsiDirectoryItem2_Remove(This,path)( (This)->lpVtbl -> Remove(This,path) )
#define IFsiDirectoryItem2_RemoveTree(This,path)( (This)->lpVtbl -> RemoveTree(This,path) )
#define IFsiDirectoryItem2_AddTreeWithNamedStreams(This,sourceDirectory,includeBaseDirectory)( (This)->lpVtbl -> AddTreeWithNamedStreams(This,sourceDirectory,includeBaseDirectory) )
#endif
#endif
#ifndef __IFileSystemImage_INTERFACE_DEFINED__
#define __IFileSystemImage_INTERFACE_DEFINED__
extern const IID IID_IFileSystemImage;
typedef struct IFileSystemImageVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE *QueryInterface) (IFileSystemImage *This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE *AddRef) (IFileSystemImage *This);
	ULONG(STDMETHODCALLTYPE *Release) (IFileSystemImage *This);
	HRESULT(STDMETHODCALLTYPE *GetTypeInfoCount) (IFileSystemImage *This, UINT *pctinfo);
	HRESULT(STDMETHODCALLTYPE *GetTypeInfo) (IFileSystemImage *This, UINT iTInfo, LCID lcid, ITypeInfo **ppTInfo);
	HRESULT(STDMETHODCALLTYPE *GetIDsOfNames) (IFileSystemImage *This, REFIID riid, LPOLESTR *rgszNames, UINT cNames, LCID lcid, DISPID *rgDispId);
	HRESULT(STDMETHODCALLTYPE *Invoke) (IFileSystemImage *This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS *pDispParams, VARIANT *pVarResult, EXCEPINFO *pExcepInfo, UINT *puArgErr);
	HRESULT(STDMETHODCALLTYPE *get_Root) (IFileSystemImage *This, IFsiDirectoryItem **pVal);
	HRESULT(STDMETHODCALLTYPE *get_SessionStartBlock) (IFileSystemImage *This, LONG *pVal);
	HRESULT(STDMETHODCALLTYPE *put_SessionStartBlock) (IFileSystemImage *This, LONG newVal);
	HRESULT(STDMETHODCALLTYPE *get_FreeMediaBlocks) (IFileSystemImage *This, LONG *pVal);
	HRESULT(STDMETHODCALLTYPE *put_FreeMediaBlocks) (IFileSystemImage *This, LONG newVal);
	HRESULT(STDMETHODCALLTYPE *SetMaxMediaBlocksFromDevice) (IFileSystemImage *This, IDiscRecorder2 *discRecorder);
	HRESULT(STDMETHODCALLTYPE *get_UsedBlocks) (IFileSystemImage *This, LONG *pVal);
	HRESULT(STDMETHODCALLTYPE *get_VolumeName) (IFileSystemImage *This, BSTR *pVal);
	HRESULT(STDMETHODCALLTYPE *put_VolumeName) (IFileSystemImage *This, BSTR newVal);
	HRESULT(STDMETHODCALLTYPE *get_ImportedVolumeName) (IFileSystemImage *This, BSTR *pVal);
	HRESULT(STDMETHODCALLTYPE *get_BootImageOptions) (IFileSystemImage *This, IBootOptions **pVal);
	HRESULT(STDMETHODCALLTYPE *put_BootImageOptions) (IFileSystemImage *This, IBootOptions *newVal);
	HRESULT(STDMETHODCALLTYPE *get_FileCount) (IFileSystemImage *This, LONG *pVal);
	HRESULT(STDMETHODCALLTYPE *get_DirectoryCount) (IFileSystemImage *This, LONG *pVal);
	HRESULT(STDMETHODCALLTYPE *get_WorkingDirectory) (IFileSystemImage *This, BSTR *pVal);
	HRESULT(STDMETHODCALLTYPE *put_WorkingDirectory) (IFileSystemImage *This, BSTR newVal);
	HRESULT(STDMETHODCALLTYPE *get_ChangePoint) (IFileSystemImage *This, LONG *pVal);
	HRESULT(STDMETHODCALLTYPE *get_StrictFileSystemCompliance) (IFileSystemImage *This, VARIANT_BOOL *pVal);
	HRESULT(STDMETHODCALLTYPE *put_StrictFileSystemCompliance) (IFileSystemImage *This, VARIANT_BOOL newVal);
	HRESULT(STDMETHODCALLTYPE *get_UseRestrictedCharacterSet) (IFileSystemImage *This, VARIANT_BOOL *pVal);
	HRESULT(STDMETHODCALLTYPE *put_UseRestrictedCharacterSet) (IFileSystemImage *This, VARIANT_BOOL newVal);
	HRESULT(STDMETHODCALLTYPE *get_FileSystemsToCreate) (IFileSystemImage *This, FsiFileSystems *pVal);
	HRESULT(STDMETHODCALLTYPE *put_FileSystemsToCreate) (IFileSystemImage *This, FsiFileSystems newVal);
	HRESULT(STDMETHODCALLTYPE *get_FileSystemsSupported) (IFileSystemImage *This, FsiFileSystems *pVal);
	HRESULT(STDMETHODCALLTYPE *put_UDFRevision) (IFileSystemImage *This, LONG newVal);
	HRESULT(STDMETHODCALLTYPE *get_UDFRevision) (IFileSystemImage *This, LONG *pVal);
	HRESULT(STDMETHODCALLTYPE *get_UDFRevisionsSupported) (IFileSystemImage *This, SAFEARRAY **pVal);
	HRESULT(STDMETHODCALLTYPE *ChooseImageDefaults) (IFileSystemImage *This, IDiscRecorder2 *discRecorder);
	HRESULT(STDMETHODCALLTYPE *ChooseImageDefaultsForMediaType) (IFileSystemImage *This, IMAPI_MEDIA_PHYSICAL_TYPE value);
	HRESULT(STDMETHODCALLTYPE *put_ISO9660InterchangeLevel) (IFileSystemImage *This, LONG newVal);
	HRESULT(STDMETHODCALLTYPE *get_ISO9660InterchangeLevel) (IFileSystemImage *This, LONG *pVal);
	HRESULT(STDMETHODCALLTYPE *get_ISO9660InterchangeLevelsSupported) (IFileSystemImage *This, SAFEARRAY **pVal);
	HRESULT(STDMETHODCALLTYPE *CreateResultImage) (IFileSystemImage *This, IFileSystemImageResult **resultStream);
	HRESULT(STDMETHODCALLTYPE *Exists) (IFileSystemImage *This, BSTR fullPath, FsiItemType *itemType);
	HRESULT(STDMETHODCALLTYPE *CalculateDiscIdentifier) (IFileSystemImage *This, BSTR *discIdentifier);
	HRESULT(STDMETHODCALLTYPE *IdentifyFileSystemsOnDisc) (IFileSystemImage *This, IDiscRecorder2 *discRecorder, FsiFileSystems *fileSystems);
	HRESULT(STDMETHODCALLTYPE *GetDefaultFileSystemForImport) (IFileSystemImage *This, FsiFileSystems fileSystems, FsiFileSystems *importDefault);
	HRESULT(STDMETHODCALLTYPE *ImportFileSystem) (IFileSystemImage *This, FsiFileSystems *importedFileSystem);
	HRESULT(STDMETHODCALLTYPE *ImportSpecificFileSystem) (IFileSystemImage *This, FsiFileSystems fileSystemToUse);
	HRESULT(STDMETHODCALLTYPE *RollbackToChangePoint) (IFileSystemImage *This, LONG changePoint);
	HRESULT(STDMETHODCALLTYPE *LockInChangePoint) (IFileSystemImage *This);
	HRESULT(STDMETHODCALLTYPE *CreateDirectoryItem) (IFileSystemImage *This, BSTR name, IFsiDirectoryItem **newItem);
	HRESULT(STDMETHODCALLTYPE *CreateFileItem) (IFileSystemImage *This, BSTR name, IFsiFileItem **newItem);
	HRESULT(STDMETHODCALLTYPE *get_VolumeNameUDF) (IFileSystemImage *This, BSTR *pVal);
	HRESULT(STDMETHODCALLTYPE *get_VolumeNameJoliet) (IFileSystemImage *This, BSTR *pVal);
	HRESULT(STDMETHODCALLTYPE *get_VolumeNameISO9660) (IFileSystemImage *This, BSTR *pVal);
	HRESULT(STDMETHODCALLTYPE *get_StageFiles) (IFileSystemImage *This, VARIANT_BOOL *pVal);
	HRESULT(STDMETHODCALLTYPE *put_StageFiles) (IFileSystemImage *This, VARIANT_BOOL newVal);
	HRESULT(STDMETHODCALLTYPE *get_MultisessionInterfaces) (IFileSystemImage *This, SAFEARRAY **pVal);
	HRESULT(STDMETHODCALLTYPE *put_MultisessionInterfaces) (IFileSystemImage *This, SAFEARRAY *newVal);
	END_INTERFACE
}  IFileSystemImageVtbl;
interface IFileSystemImage
{
	CONST_VTBL struct IFileSystemImageVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IFileSystemImage_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IFileSystemImage_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define IFileSystemImage_Release(This)( (This)->lpVtbl -> Release(This) )
#define IFileSystemImage_GetTypeInfoCount(This,pctinfo)( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define IFileSystemImage_GetTypeInfo(This,iTInfo,lcid,ppTInfo)( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define IFileSystemImage_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define IFileSystemImage_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define IFileSystemImage_get_Root(This,pVal)( (This)->lpVtbl -> get_Root(This,pVal) )
#define IFileSystemImage_get_SessionStartBlock(This,pVal)( (This)->lpVtbl -> get_SessionStartBlock(This,pVal) )
#define IFileSystemImage_put_SessionStartBlock(This,newVal)( (This)->lpVtbl -> put_SessionStartBlock(This,newVal) )
#define IFileSystemImage_get_FreeMediaBlocks(This,pVal)( (This)->lpVtbl -> get_FreeMediaBlocks(This,pVal) )
#define IFileSystemImage_put_FreeMediaBlocks(This,newVal)( (This)->lpVtbl -> put_FreeMediaBlocks(This,newVal) )
#define IFileSystemImage_SetMaxMediaBlocksFromDevice(This,discRecorder)( (This)->lpVtbl -> SetMaxMediaBlocksFromDevice(This,discRecorder) )
#define IFileSystemImage_get_UsedBlocks(This,pVal)( (This)->lpVtbl -> get_UsedBlocks(This,pVal) )
#define IFileSystemImage_get_VolumeName(This,pVal)( (This)->lpVtbl -> get_VolumeName(This,pVal) )
#define IFileSystemImage_put_VolumeName(This,newVal)( (This)->lpVtbl -> put_VolumeName(This,newVal) )
#define IFileSystemImage_get_ImportedVolumeName(This,pVal)( (This)->lpVtbl -> get_ImportedVolumeName(This,pVal) )
#define IFileSystemImage_get_BootImageOptions(This,pVal)( (This)->lpVtbl -> get_BootImageOptions(This,pVal) )
#define IFileSystemImage_put_BootImageOptions(This,newVal)( (This)->lpVtbl -> put_BootImageOptions(This,newVal) )
#define IFileSystemImage_get_FileCount(This,pVal)( (This)->lpVtbl -> get_FileCount(This,pVal) )
#define IFileSystemImage_get_DirectoryCount(This,pVal)( (This)->lpVtbl -> get_DirectoryCount(This,pVal) )
#define IFileSystemImage_get_WorkingDirectory(This,pVal)( (This)->lpVtbl -> get_WorkingDirectory(This,pVal) )
#define IFileSystemImage_put_WorkingDirectory(This,newVal)( (This)->lpVtbl -> put_WorkingDirectory(This,newVal) )
#define IFileSystemImage_get_ChangePoint(This,pVal)( (This)->lpVtbl -> get_ChangePoint(This,pVal) )
#define IFileSystemImage_get_StrictFileSystemCompliance(This,pVal)( (This)->lpVtbl -> get_StrictFileSystemCompliance(This,pVal) )
#define IFileSystemImage_put_StrictFileSystemCompliance(This,newVal)( (This)->lpVtbl -> put_StrictFileSystemCompliance(This,newVal) )
#define IFileSystemImage_get_UseRestrictedCharacterSet(This,pVal)( (This)->lpVtbl -> get_UseRestrictedCharacterSet(This,pVal) )
#define IFileSystemImage_put_UseRestrictedCharacterSet(This,newVal)( (This)->lpVtbl -> put_UseRestrictedCharacterSet(This,newVal) )
#define IFileSystemImage_get_FileSystemsToCreate(This,pVal)( (This)->lpVtbl -> get_FileSystemsToCreate(This,pVal) )
#define IFileSystemImage_put_FileSystemsToCreate(This,newVal)( (This)->lpVtbl -> put_FileSystemsToCreate(This,newVal) )
#define IFileSystemImage_get_FileSystemsSupported(This,pVal)( (This)->lpVtbl -> get_FileSystemsSupported(This,pVal) )
#define IFileSystemImage_put_UDFRevision(This,newVal)( (This)->lpVtbl -> put_UDFRevision(This,newVal) )
#define IFileSystemImage_get_UDFRevision(This,pVal)( (This)->lpVtbl -> get_UDFRevision(This,pVal) )
#define IFileSystemImage_get_UDFRevisionsSupported(This,pVal)( (This)->lpVtbl -> get_UDFRevisionsSupported(This,pVal) )
#define IFileSystemImage_ChooseImageDefaults(This,discRecorder)( (This)->lpVtbl -> ChooseImageDefaults(This,discRecorder) )
#define IFileSystemImage_ChooseImageDefaultsForMediaType(This,value)( (This)->lpVtbl -> ChooseImageDefaultsForMediaType(This,value) )
#define IFileSystemImage_put_ISO9660InterchangeLevel(This,newVal)( (This)->lpVtbl -> put_ISO9660InterchangeLevel(This,newVal) )
#define IFileSystemImage_get_ISO9660InterchangeLevel(This,pVal)( (This)->lpVtbl -> get_ISO9660InterchangeLevel(This,pVal) )
#define IFileSystemImage_get_ISO9660InterchangeLevelsSupported(This,pVal)( (This)->lpVtbl -> get_ISO9660InterchangeLevelsSupported(This,pVal) )
#define IFileSystemImage_CreateResultImage(This,resultStream)( (This)->lpVtbl -> CreateResultImage(This,resultStream) )
#define IFileSystemImage_Exists(This,fullPath,itemType)( (This)->lpVtbl -> Exists(This,fullPath,itemType) )
#define IFileSystemImage_CalculateDiscIdentifier(This,discIdentifier)( (This)->lpVtbl -> CalculateDiscIdentifier(This,discIdentifier) )
#define IFileSystemImage_IdentifyFileSystemsOnDisc(This,discRecorder,fileSystems)( (This)->lpVtbl -> IdentifyFileSystemsOnDisc(This,discRecorder,fileSystems) )
#define IFileSystemImage_GetDefaultFileSystemForImport(This,fileSystems,importDefault)( (This)->lpVtbl -> GetDefaultFileSystemForImport(This,fileSystems,importDefault) )
#define IFileSystemImage_ImportFileSystem(This,importedFileSystem)( (This)->lpVtbl -> ImportFileSystem(This,importedFileSystem) )
#define IFileSystemImage_ImportSpecificFileSystem(This,fileSystemToUse)( (This)->lpVtbl -> ImportSpecificFileSystem(This,fileSystemToUse) )
#define IFileSystemImage_RollbackToChangePoint(This,changePoint)( (This)->lpVtbl -> RollbackToChangePoint(This,changePoint) )
#define IFileSystemImage_LockInChangePoint(This)( (This)->lpVtbl -> LockInChangePoint(This) )
#define IFileSystemImage_CreateDirectoryItem(This,name,newItem)( (This)->lpVtbl -> CreateDirectoryItem(This,name,newItem) )
#define IFileSystemImage_CreateFileItem(This,name,newItem)( (This)->lpVtbl -> CreateFileItem(This,name,newItem) )
#define IFileSystemImage_get_VolumeNameUDF(This,pVal)( (This)->lpVtbl -> get_VolumeNameUDF(This,pVal) )
#define IFileSystemImage_get_VolumeNameJoliet(This,pVal)( (This)->lpVtbl -> get_VolumeNameJoliet(This,pVal) )
#define IFileSystemImage_get_VolumeNameISO9660(This,pVal)( (This)->lpVtbl -> get_VolumeNameISO9660(This,pVal) )
#define IFileSystemImage_get_StageFiles(This,pVal)( (This)->lpVtbl -> get_StageFiles(This,pVal) )
#define IFileSystemImage_put_StageFiles(This,newVal)( (This)->lpVtbl -> put_StageFiles(This,newVal) )
#define IFileSystemImage_get_MultisessionInterfaces(This,pVal)( (This)->lpVtbl -> get_MultisessionInterfaces(This,pVal) )
#define IFileSystemImage_put_MultisessionInterfaces(This,newVal)( (This)->lpVtbl -> put_MultisessionInterfaces(This,newVal) )
#endif
#endif
#ifndef __IFileSystemImage2_INTERFACE_DEFINED__
#define __IFileSystemImage2_INTERFACE_DEFINED__
extern const IID IID_IFileSystemImage2;
typedef struct IFileSystemImage2Vtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE *QueryInterface) (IFileSystemImage2 *This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE *AddRef) (IFileSystemImage2 *This);
	ULONG(STDMETHODCALLTYPE *Release) (IFileSystemImage2 *This);
	HRESULT(STDMETHODCALLTYPE *GetTypeInfoCount) (IFileSystemImage2 *This, UINT *pctinfo);
	HRESULT(STDMETHODCALLTYPE *GetTypeInfo) (IFileSystemImage2 *This, UINT iTInfo, LCID lcid, ITypeInfo **ppTInfo);
	HRESULT(STDMETHODCALLTYPE *GetIDsOfNames) (IFileSystemImage2 *This, REFIID riid, LPOLESTR *rgszNames, UINT cNames, LCID lcid, DISPID *rgDispId);
	HRESULT(STDMETHODCALLTYPE *Invoke) (IFileSystemImage2 *This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS *pDispParams, VARIANT *pVarResult, EXCEPINFO *pExcepInfo, UINT *puArgErr);
	HRESULT(STDMETHODCALLTYPE *get_Root) (IFileSystemImage2 *This, IFsiDirectoryItem **pVal);
	HRESULT(STDMETHODCALLTYPE *get_SessionStartBlock) (IFileSystemImage2 *This, LONG *pVal);
	HRESULT(STDMETHODCALLTYPE *put_SessionStartBlock) (IFileSystemImage2 *This, LONG newVal);
	HRESULT(STDMETHODCALLTYPE *get_FreeMediaBlocks) (IFileSystemImage2 *This, LONG *pVal);
	HRESULT(STDMETHODCALLTYPE *put_FreeMediaBlocks) (IFileSystemImage2 *This, LONG newVal);
	HRESULT(STDMETHODCALLTYPE *SetMaxMediaBlocksFromDevice) (IFileSystemImage2 *This, IDiscRecorder2 *discRecorder);
	HRESULT(STDMETHODCALLTYPE *get_UsedBlocks) (IFileSystemImage2 *This, LONG *pVal);
	HRESULT(STDMETHODCALLTYPE *get_VolumeName) (IFileSystemImage2 *This, BSTR *pVal);
	HRESULT(STDMETHODCALLTYPE *put_VolumeName) (IFileSystemImage2 *This, BSTR newVal);
	HRESULT(STDMETHODCALLTYPE *get_ImportedVolumeName) (IFileSystemImage2 *This, BSTR *pVal);
	HRESULT(STDMETHODCALLTYPE *get_BootImageOptions) (IFileSystemImage2 *This, IBootOptions **pVal);
	HRESULT(STDMETHODCALLTYPE *put_BootImageOptions) (IFileSystemImage2 *This, IBootOptions *newVal);
	HRESULT(STDMETHODCALLTYPE *get_FileCount) (IFileSystemImage2 *This, LONG *pVal);
	HRESULT(STDMETHODCALLTYPE *get_DirectoryCount) (IFileSystemImage2 *This, LONG *pVal);
	HRESULT(STDMETHODCALLTYPE *get_WorkingDirectory) (IFileSystemImage2 *This, BSTR *pVal);
	HRESULT(STDMETHODCALLTYPE *put_WorkingDirectory) (IFileSystemImage2 *This, BSTR newVal);
	HRESULT(STDMETHODCALLTYPE *get_ChangePoint) (IFileSystemImage2 *This, LONG *pVal);
	HRESULT(STDMETHODCALLTYPE *get_StrictFileSystemCompliance) (IFileSystemImage2 *This, VARIANT_BOOL *pVal);
	HRESULT(STDMETHODCALLTYPE *put_StrictFileSystemCompliance) (IFileSystemImage2 *This, VARIANT_BOOL newVal);
	HRESULT(STDMETHODCALLTYPE *get_UseRestrictedCharacterSet) (IFileSystemImage2 *This, VARIANT_BOOL *pVal);
	HRESULT(STDMETHODCALLTYPE *put_UseRestrictedCharacterSet) (IFileSystemImage2 *This, VARIANT_BOOL newVal);
	HRESULT(STDMETHODCALLTYPE *get_FileSystemsToCreate) (IFileSystemImage2 *This, FsiFileSystems *pVal);
	HRESULT(STDMETHODCALLTYPE *put_FileSystemsToCreate) (IFileSystemImage2 *This, FsiFileSystems newVal);
	HRESULT(STDMETHODCALLTYPE *get_FileSystemsSupported) (IFileSystemImage2 *This, FsiFileSystems *pVal);
	HRESULT(STDMETHODCALLTYPE *put_UDFRevision) (IFileSystemImage2 *This, LONG newVal);
	HRESULT(STDMETHODCALLTYPE *get_UDFRevision) (IFileSystemImage2 *This, LONG *pVal);
	HRESULT(STDMETHODCALLTYPE *get_UDFRevisionsSupported) (IFileSystemImage2 *This, SAFEARRAY **pVal);
	HRESULT(STDMETHODCALLTYPE *ChooseImageDefaults) (IFileSystemImage2 *This, IDiscRecorder2 *discRecorder);
	HRESULT(STDMETHODCALLTYPE *ChooseImageDefaultsForMediaType) (IFileSystemImage2 *This, IMAPI_MEDIA_PHYSICAL_TYPE value);
	HRESULT(STDMETHODCALLTYPE *put_ISO9660InterchangeLevel) (IFileSystemImage2 *This, LONG newVal);
	HRESULT(STDMETHODCALLTYPE *get_ISO9660InterchangeLevel) (IFileSystemImage2 *This, LONG *pVal);
	HRESULT(STDMETHODCALLTYPE *get_ISO9660InterchangeLevelsSupported) (IFileSystemImage2 *This, SAFEARRAY **pVal);
	HRESULT(STDMETHODCALLTYPE *CreateResultImage) (IFileSystemImage2 *This, IFileSystemImageResult **resultStream);
	HRESULT(STDMETHODCALLTYPE *Exists) (IFileSystemImage2 *This, BSTR fullPath, FsiItemType *itemType);
	HRESULT(STDMETHODCALLTYPE *CalculateDiscIdentifier) (IFileSystemImage2 *This, BSTR *discIdentifier);
	HRESULT(STDMETHODCALLTYPE *IdentifyFileSystemsOnDisc) (IFileSystemImage2 *This, IDiscRecorder2 *discRecorder, FsiFileSystems *fileSystems);
	HRESULT(STDMETHODCALLTYPE *GetDefaultFileSystemForImport) (IFileSystemImage2 *This, FsiFileSystems fileSystems, FsiFileSystems *importDefault);
	HRESULT(STDMETHODCALLTYPE *ImportFileSystem) (IFileSystemImage2 *This, FsiFileSystems *importedFileSystem);
	HRESULT(STDMETHODCALLTYPE *ImportSpecificFileSystem) (IFileSystemImage2 *This, FsiFileSystems fileSystemToUse);
	HRESULT(STDMETHODCALLTYPE *RollbackToChangePoint) (IFileSystemImage2 *This, LONG changePoint);
	HRESULT(STDMETHODCALLTYPE *LockInChangePoint) (IFileSystemImage2 *This);
	HRESULT(STDMETHODCALLTYPE *CreateDirectoryItem) (IFileSystemImage2 *This, BSTR name, IFsiDirectoryItem **newItem);
	HRESULT(STDMETHODCALLTYPE *CreateFileItem) (IFileSystemImage2 *This, BSTR name, IFsiFileItem **newItem);
	HRESULT(STDMETHODCALLTYPE *get_VolumeNameUDF) (IFileSystemImage2 *This, BSTR *pVal);
	HRESULT(STDMETHODCALLTYPE *get_VolumeNameJoliet) (IFileSystemImage2 *This, BSTR *pVal);
	HRESULT(STDMETHODCALLTYPE *get_VolumeNameISO9660) (IFileSystemImage2 *This, BSTR *pVal);
	HRESULT(STDMETHODCALLTYPE *get_StageFiles) (IFileSystemImage2 *This, VARIANT_BOOL *pVal);
	HRESULT(STDMETHODCALLTYPE *put_StageFiles) (IFileSystemImage2 *This, VARIANT_BOOL newVal);
	HRESULT(STDMETHODCALLTYPE *get_MultisessionInterfaces) (IFileSystemImage2 *This, SAFEARRAY **pVal);
	HRESULT(STDMETHODCALLTYPE *put_MultisessionInterfaces) (IFileSystemImage2 *This, SAFEARRAY *newVal);
	HRESULT(STDMETHODCALLTYPE *get_BootImageOptionsArray) (IFileSystemImage2 *This, SAFEARRAY **pVal);
	HRESULT(STDMETHODCALLTYPE *put_BootImageOptionsArray) (IFileSystemImage2 *This, SAFEARRAY *newVal);
	END_INTERFACE
}  IFileSystemImage2Vtbl;
interface IFileSystemImage2
{
	CONST_VTBL struct IFileSystemImage2Vtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IFileSystemImage2_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IFileSystemImage2_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define IFileSystemImage2_Release(This)( (This)->lpVtbl -> Release(This) )
#define IFileSystemImage2_GetTypeInfoCount(This,pctinfo)( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define IFileSystemImage2_GetTypeInfo(This,iTInfo,lcid,ppTInfo)( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define IFileSystemImage2_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define IFileSystemImage2_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define IFileSystemImage2_get_Root(This,pVal)( (This)->lpVtbl -> get_Root(This,pVal) )
#define IFileSystemImage2_get_SessionStartBlock(This,pVal)( (This)->lpVtbl -> get_SessionStartBlock(This,pVal) )
#define IFileSystemImage2_put_SessionStartBlock(This,newVal)( (This)->lpVtbl -> put_SessionStartBlock(This,newVal) )
#define IFileSystemImage2_get_FreeMediaBlocks(This,pVal)( (This)->lpVtbl -> get_FreeMediaBlocks(This,pVal) )
#define IFileSystemImage2_put_FreeMediaBlocks(This,newVal)( (This)->lpVtbl -> put_FreeMediaBlocks(This,newVal) )
#define IFileSystemImage2_SetMaxMediaBlocksFromDevice(This,discRecorder)( (This)->lpVtbl -> SetMaxMediaBlocksFromDevice(This,discRecorder) )
#define IFileSystemImage2_get_UsedBlocks(This,pVal)( (This)->lpVtbl -> get_UsedBlocks(This,pVal) )
#define IFileSystemImage2_get_VolumeName(This,pVal)( (This)->lpVtbl -> get_VolumeName(This,pVal) )
#define IFileSystemImage2_put_VolumeName(This,newVal)( (This)->lpVtbl -> put_VolumeName(This,newVal) )
#define IFileSystemImage2_get_ImportedVolumeName(This,pVal)( (This)->lpVtbl -> get_ImportedVolumeName(This,pVal) )
#define IFileSystemImage2_get_BootImageOptions(This,pVal)( (This)->lpVtbl -> get_BootImageOptions(This,pVal) )
#define IFileSystemImage2_put_BootImageOptions(This,newVal)( (This)->lpVtbl -> put_BootImageOptions(This,newVal) )
#define IFileSystemImage2_get_FileCount(This,pVal)( (This)->lpVtbl -> get_FileCount(This,pVal) )
#define IFileSystemImage2_get_DirectoryCount(This,pVal)( (This)->lpVtbl -> get_DirectoryCount(This,pVal) )
#define IFileSystemImage2_get_WorkingDirectory(This,pVal)( (This)->lpVtbl -> get_WorkingDirectory(This,pVal) )
#define IFileSystemImage2_put_WorkingDirectory(This,newVal)( (This)->lpVtbl -> put_WorkingDirectory(This,newVal) )
#define IFileSystemImage2_get_ChangePoint(This,pVal)( (This)->lpVtbl -> get_ChangePoint(This,pVal) )
#define IFileSystemImage2_get_StrictFileSystemCompliance(This,pVal)( (This)->lpVtbl -> get_StrictFileSystemCompliance(This,pVal) )
#define IFileSystemImage2_put_StrictFileSystemCompliance(This,newVal)( (This)->lpVtbl -> put_StrictFileSystemCompliance(This,newVal) )
#define IFileSystemImage2_get_UseRestrictedCharacterSet(This,pVal)( (This)->lpVtbl -> get_UseRestrictedCharacterSet(This,pVal) )
#define IFileSystemImage2_put_UseRestrictedCharacterSet(This,newVal)( (This)->lpVtbl -> put_UseRestrictedCharacterSet(This,newVal) )
#define IFileSystemImage2_get_FileSystemsToCreate(This,pVal)( (This)->lpVtbl -> get_FileSystemsToCreate(This,pVal) )
#define IFileSystemImage2_put_FileSystemsToCreate(This,newVal)( (This)->lpVtbl -> put_FileSystemsToCreate(This,newVal) )
#define IFileSystemImage2_get_FileSystemsSupported(This,pVal)( (This)->lpVtbl -> get_FileSystemsSupported(This,pVal) )
#define IFileSystemImage2_put_UDFRevision(This,newVal)( (This)->lpVtbl -> put_UDFRevision(This,newVal) )
#define IFileSystemImage2_get_UDFRevision(This,pVal)( (This)->lpVtbl -> get_UDFRevision(This,pVal) )
#define IFileSystemImage2_get_UDFRevisionsSupported(This,pVal)( (This)->lpVtbl -> get_UDFRevisionsSupported(This,pVal) )
#define IFileSystemImage2_ChooseImageDefaults(This,discRecorder)( (This)->lpVtbl -> ChooseImageDefaults(This,discRecorder) )
#define IFileSystemImage2_ChooseImageDefaultsForMediaType(This,value)( (This)->lpVtbl -> ChooseImageDefaultsForMediaType(This,value) )
#define IFileSystemImage2_put_ISO9660InterchangeLevel(This,newVal)( (This)->lpVtbl -> put_ISO9660InterchangeLevel(This,newVal) )
#define IFileSystemImage2_get_ISO9660InterchangeLevel(This,pVal)( (This)->lpVtbl -> get_ISO9660InterchangeLevel(This,pVal) )
#define IFileSystemImage2_get_ISO9660InterchangeLevelsSupported(This,pVal)( (This)->lpVtbl -> get_ISO9660InterchangeLevelsSupported(This,pVal) )
#define IFileSystemImage2_CreateResultImage(This,resultStream)( (This)->lpVtbl -> CreateResultImage(This,resultStream) )
#define IFileSystemImage2_Exists(This,fullPath,itemType)( (This)->lpVtbl -> Exists(This,fullPath,itemType) )
#define IFileSystemImage2_CalculateDiscIdentifier(This,discIdentifier)( (This)->lpVtbl -> CalculateDiscIdentifier(This,discIdentifier) )
#define IFileSystemImage2_IdentifyFileSystemsOnDisc(This,discRecorder,fileSystems)( (This)->lpVtbl -> IdentifyFileSystemsOnDisc(This,discRecorder,fileSystems) )
#define IFileSystemImage2_GetDefaultFileSystemForImport(This,fileSystems,importDefault)( (This)->lpVtbl -> GetDefaultFileSystemForImport(This,fileSystems,importDefault) )
#define IFileSystemImage2_ImportFileSystem(This,importedFileSystem)( (This)->lpVtbl -> ImportFileSystem(This,importedFileSystem) )
#define IFileSystemImage2_ImportSpecificFileSystem(This,fileSystemToUse)( (This)->lpVtbl -> ImportSpecificFileSystem(This,fileSystemToUse) )
#define IFileSystemImage2_RollbackToChangePoint(This,changePoint)( (This)->lpVtbl -> RollbackToChangePoint(This,changePoint) )
#define IFileSystemImage2_LockInChangePoint(This)( (This)->lpVtbl -> LockInChangePoint(This) )
#define IFileSystemImage2_CreateDirectoryItem(This,name,newItem)( (This)->lpVtbl -> CreateDirectoryItem(This,name,newItem) )
#define IFileSystemImage2_CreateFileItem(This,name,newItem)( (This)->lpVtbl -> CreateFileItem(This,name,newItem) )
#define IFileSystemImage2_get_VolumeNameUDF(This,pVal)( (This)->lpVtbl -> get_VolumeNameUDF(This,pVal) )
#define IFileSystemImage2_get_VolumeNameJoliet(This,pVal)( (This)->lpVtbl -> get_VolumeNameJoliet(This,pVal) )
#define IFileSystemImage2_get_VolumeNameISO9660(This,pVal)( (This)->lpVtbl -> get_VolumeNameISO9660(This,pVal) )
#define IFileSystemImage2_get_StageFiles(This,pVal)( (This)->lpVtbl -> get_StageFiles(This,pVal) )
#define IFileSystemImage2_put_StageFiles(This,newVal)( (This)->lpVtbl -> put_StageFiles(This,newVal) )
#define IFileSystemImage2_get_MultisessionInterfaces(This,pVal)( (This)->lpVtbl -> get_MultisessionInterfaces(This,pVal) )
#define IFileSystemImage2_put_MultisessionInterfaces(This,newVal)( (This)->lpVtbl -> put_MultisessionInterfaces(This,newVal) )
#define IFileSystemImage2_get_BootImageOptionsArray(This,pVal)( (This)->lpVtbl -> get_BootImageOptionsArray(This,pVal) )
#define IFileSystemImage2_put_BootImageOptionsArray(This,newVal)( (This)->lpVtbl -> put_BootImageOptionsArray(This,newVal) )
#endif
#endif
#ifndef __IFileSystemImage3_INTERFACE_DEFINED__
#define __IFileSystemImage3_INTERFACE_DEFINED__
extern const IID IID_IFileSystemImage3;
typedef struct IFileSystemImage3Vtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE *QueryInterface) (IFileSystemImage3 *This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE *AddRef) (IFileSystemImage3 *This);
	ULONG(STDMETHODCALLTYPE *Release) (IFileSystemImage3 *This);
	HRESULT(STDMETHODCALLTYPE *GetTypeInfoCount) (IFileSystemImage3 *This, UINT *pctinfo);
	HRESULT(STDMETHODCALLTYPE *GetTypeInfo) (IFileSystemImage3 *This, UINT iTInfo, LCID lcid, ITypeInfo **ppTInfo);
	HRESULT(STDMETHODCALLTYPE *GetIDsOfNames) (IFileSystemImage3 *This, REFIID riid, LPOLESTR *rgszNames, UINT cNames, LCID lcid, DISPID *rgDispId);
	HRESULT(STDMETHODCALLTYPE *Invoke) (IFileSystemImage3 *This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS *pDispParams, VARIANT *pVarResult, EXCEPINFO *pExcepInfo, UINT *puArgErr);
	HRESULT(STDMETHODCALLTYPE *get_Root) (IFileSystemImage3 *This, IFsiDirectoryItem **pVal);
	HRESULT(STDMETHODCALLTYPE *get_SessionStartBlock) (IFileSystemImage3 *This, LONG *pVal);
	HRESULT(STDMETHODCALLTYPE *put_SessionStartBlock) (IFileSystemImage3 *This, LONG newVal);
	HRESULT(STDMETHODCALLTYPE *get_FreeMediaBlocks) (IFileSystemImage3 *This, LONG *pVal);
	HRESULT(STDMETHODCALLTYPE *put_FreeMediaBlocks) (IFileSystemImage3 *This, LONG newVal);
	HRESULT(STDMETHODCALLTYPE *SetMaxMediaBlocksFromDevice) (IFileSystemImage3 *This, IDiscRecorder2 *discRecorder);
	HRESULT(STDMETHODCALLTYPE *get_UsedBlocks) (IFileSystemImage3 *This, LONG *pVal);
	HRESULT(STDMETHODCALLTYPE *get_VolumeName) (IFileSystemImage3 *This, BSTR *pVal);
	HRESULT(STDMETHODCALLTYPE *put_VolumeName) (IFileSystemImage3 *This, BSTR newVal);
	HRESULT(STDMETHODCALLTYPE *get_ImportedVolumeName) (IFileSystemImage3 *This, BSTR *pVal);
	HRESULT(STDMETHODCALLTYPE *get_BootImageOptions) (IFileSystemImage3 *This, IBootOptions **pVal);
	HRESULT(STDMETHODCALLTYPE *put_BootImageOptions) (IFileSystemImage3 *This, IBootOptions *newVal);
	HRESULT(STDMETHODCALLTYPE *get_FileCount) (IFileSystemImage3 *This, LONG *pVal);
	HRESULT(STDMETHODCALLTYPE *get_DirectoryCount) (IFileSystemImage3 *This, LONG *pVal);
	HRESULT(STDMETHODCALLTYPE *get_WorkingDirectory) (IFileSystemImage3 *This, BSTR *pVal);
	HRESULT(STDMETHODCALLTYPE *put_WorkingDirectory) (IFileSystemImage3 *This, BSTR newVal);
	HRESULT(STDMETHODCALLTYPE *get_ChangePoint) (IFileSystemImage3 *This, LONG *pVal);
	HRESULT(STDMETHODCALLTYPE *get_StrictFileSystemCompliance) (IFileSystemImage3 *This, VARIANT_BOOL *pVal);
	HRESULT(STDMETHODCALLTYPE *put_StrictFileSystemCompliance) (IFileSystemImage3 *This, VARIANT_BOOL newVal);
	HRESULT(STDMETHODCALLTYPE *get_UseRestrictedCharacterSet) (IFileSystemImage3 *This, VARIANT_BOOL *pVal);
	HRESULT(STDMETHODCALLTYPE *put_UseRestrictedCharacterSet) (IFileSystemImage3 *This, VARIANT_BOOL newVal);
	HRESULT(STDMETHODCALLTYPE *get_FileSystemsToCreate) (IFileSystemImage3 *This, FsiFileSystems *pVal);
	HRESULT(STDMETHODCALLTYPE *put_FileSystemsToCreate) (IFileSystemImage3 *This, FsiFileSystems newVal);
	HRESULT(STDMETHODCALLTYPE *get_FileSystemsSupported) (IFileSystemImage3 *This, FsiFileSystems *pVal);
	HRESULT(STDMETHODCALLTYPE *put_UDFRevision) (IFileSystemImage3 *This, LONG newVal);
	HRESULT(STDMETHODCALLTYPE *get_UDFRevision) (IFileSystemImage3 *This, LONG *pVal);
	HRESULT(STDMETHODCALLTYPE *get_UDFRevisionsSupported) (IFileSystemImage3 *This, SAFEARRAY **pVal);
	HRESULT(STDMETHODCALLTYPE *ChooseImageDefaults) (IFileSystemImage3 *This, IDiscRecorder2 *discRecorder);
	HRESULT(STDMETHODCALLTYPE *ChooseImageDefaultsForMediaType) (IFileSystemImage3 *This, IMAPI_MEDIA_PHYSICAL_TYPE value);
	HRESULT(STDMETHODCALLTYPE *put_ISO9660InterchangeLevel) (IFileSystemImage3 *This, LONG newVal);
	HRESULT(STDMETHODCALLTYPE *get_ISO9660InterchangeLevel) (IFileSystemImage3 *This, LONG *pVal);
	HRESULT(STDMETHODCALLTYPE *get_ISO9660InterchangeLevelsSupported) (IFileSystemImage3 *This, SAFEARRAY **pVal);
	HRESULT(STDMETHODCALLTYPE *CreateResultImage) (IFileSystemImage3 *This, IFileSystemImageResult **resultStream);
	HRESULT(STDMETHODCALLTYPE *Exists) (IFileSystemImage3 *This, BSTR fullPath, FsiItemType *itemType);
	HRESULT(STDMETHODCALLTYPE *CalculateDiscIdentifier) (IFileSystemImage3 *This, BSTR *discIdentifier);
	HRESULT(STDMETHODCALLTYPE *IdentifyFileSystemsOnDisc) (IFileSystemImage3 *This, IDiscRecorder2 *discRecorder, FsiFileSystems *fileSystems);
	HRESULT(STDMETHODCALLTYPE *GetDefaultFileSystemForImport) (IFileSystemImage3 *This, FsiFileSystems fileSystems, FsiFileSystems *importDefault);
	HRESULT(STDMETHODCALLTYPE *ImportFileSystem) (IFileSystemImage3 *This, FsiFileSystems *importedFileSystem);
	HRESULT(STDMETHODCALLTYPE *ImportSpecificFileSystem) (IFileSystemImage3 *This, FsiFileSystems fileSystemToUse);
	HRESULT(STDMETHODCALLTYPE *RollbackToChangePoint) (IFileSystemImage3 *This, LONG changePoint);
	HRESULT(STDMETHODCALLTYPE *LockInChangePoint) (IFileSystemImage3 *This);
	HRESULT(STDMETHODCALLTYPE *CreateDirectoryItem) (IFileSystemImage3 *This, BSTR name, IFsiDirectoryItem **newItem);
	HRESULT(STDMETHODCALLTYPE *CreateFileItem) (IFileSystemImage3 *This, BSTR name, IFsiFileItem **newItem);
	HRESULT(STDMETHODCALLTYPE *get_VolumeNameUDF) (IFileSystemImage3 *This, BSTR *pVal);
	HRESULT(STDMETHODCALLTYPE *get_VolumeNameJoliet) (IFileSystemImage3 *This, BSTR *pVal);
	HRESULT(STDMETHODCALLTYPE *get_VolumeNameISO9660) (IFileSystemImage3 *This, BSTR *pVal);
	HRESULT(STDMETHODCALLTYPE *get_StageFiles) (IFileSystemImage3 *This, VARIANT_BOOL *pVal);
	HRESULT(STDMETHODCALLTYPE *put_StageFiles) (IFileSystemImage3 *This, VARIANT_BOOL newVal);
	HRESULT(STDMETHODCALLTYPE *get_MultisessionInterfaces) (IFileSystemImage3 *This, SAFEARRAY **pVal);
	HRESULT(STDMETHODCALLTYPE *put_MultisessionInterfaces) (IFileSystemImage3 *This, SAFEARRAY *newVal);
	HRESULT(STDMETHODCALLTYPE *get_BootImageOptionsArray) (IFileSystemImage3 *This, SAFEARRAY **pVal);
	HRESULT(STDMETHODCALLTYPE *put_BootImageOptionsArray) (IFileSystemImage3 *This, SAFEARRAY *newVal);
	HRESULT(STDMETHODCALLTYPE *get_CreateRedundantUdfMetadataFiles) (IFileSystemImage3 *This, VARIANT_BOOL *pVal);
	HRESULT(STDMETHODCALLTYPE *put_CreateRedundantUdfMetadataFiles) (IFileSystemImage3 *This, VARIANT_BOOL newVal);
	HRESULT(STDMETHODCALLTYPE *ProbeSpecificFileSystem) (IFileSystemImage3 *This, FsiFileSystems fileSystemToProbe, VARIANT_BOOL *isAppendable);
	END_INTERFACE
}  IFileSystemImage3Vtbl;
interface IFileSystemImage3
{
	CONST_VTBL struct IFileSystemImage3Vtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IFileSystemImage3_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IFileSystemImage3_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define IFileSystemImage3_Release(This)( (This)->lpVtbl -> Release(This) )
#define IFileSystemImage3_GetTypeInfoCount(This,pctinfo)( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define IFileSystemImage3_GetTypeInfo(This,iTInfo,lcid,ppTInfo)( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define IFileSystemImage3_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define IFileSystemImage3_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define IFileSystemImage3_get_Root(This,pVal)( (This)->lpVtbl -> get_Root(This,pVal) )
#define IFileSystemImage3_get_SessionStartBlock(This,pVal)( (This)->lpVtbl -> get_SessionStartBlock(This,pVal) )
#define IFileSystemImage3_put_SessionStartBlock(This,newVal)( (This)->lpVtbl -> put_SessionStartBlock(This,newVal) )
#define IFileSystemImage3_get_FreeMediaBlocks(This,pVal)( (This)->lpVtbl -> get_FreeMediaBlocks(This,pVal) )
#define IFileSystemImage3_put_FreeMediaBlocks(This,newVal)( (This)->lpVtbl -> put_FreeMediaBlocks(This,newVal) )
#define IFileSystemImage3_SetMaxMediaBlocksFromDevice(This,discRecorder)( (This)->lpVtbl -> SetMaxMediaBlocksFromDevice(This,discRecorder) )
#define IFileSystemImage3_get_UsedBlocks(This,pVal)( (This)->lpVtbl -> get_UsedBlocks(This,pVal) )
#define IFileSystemImage3_get_VolumeName(This,pVal)( (This)->lpVtbl -> get_VolumeName(This,pVal) )
#define IFileSystemImage3_put_VolumeName(This,newVal)( (This)->lpVtbl -> put_VolumeName(This,newVal) )
#define IFileSystemImage3_get_ImportedVolumeName(This,pVal)( (This)->lpVtbl -> get_ImportedVolumeName(This,pVal) )
#define IFileSystemImage3_get_BootImageOptions(This,pVal)( (This)->lpVtbl -> get_BootImageOptions(This,pVal) )
#define IFileSystemImage3_put_BootImageOptions(This,newVal)( (This)->lpVtbl -> put_BootImageOptions(This,newVal) )
#define IFileSystemImage3_get_FileCount(This,pVal)( (This)->lpVtbl -> get_FileCount(This,pVal) )
#define IFileSystemImage3_get_DirectoryCount(This,pVal)( (This)->lpVtbl -> get_DirectoryCount(This,pVal) )
#define IFileSystemImage3_get_WorkingDirectory(This,pVal)( (This)->lpVtbl -> get_WorkingDirectory(This,pVal) )
#define IFileSystemImage3_put_WorkingDirectory(This,newVal)( (This)->lpVtbl -> put_WorkingDirectory(This,newVal) )
#define IFileSystemImage3_get_ChangePoint(This,pVal)( (This)->lpVtbl -> get_ChangePoint(This,pVal) )
#define IFileSystemImage3_get_StrictFileSystemCompliance(This,pVal)( (This)->lpVtbl -> get_StrictFileSystemCompliance(This,pVal) )
#define IFileSystemImage3_put_StrictFileSystemCompliance(This,newVal)( (This)->lpVtbl -> put_StrictFileSystemCompliance(This,newVal) )
#define IFileSystemImage3_get_UseRestrictedCharacterSet(This,pVal)( (This)->lpVtbl -> get_UseRestrictedCharacterSet(This,pVal) )
#define IFileSystemImage3_put_UseRestrictedCharacterSet(This,newVal)( (This)->lpVtbl -> put_UseRestrictedCharacterSet(This,newVal) )
#define IFileSystemImage3_get_FileSystemsToCreate(This,pVal)( (This)->lpVtbl -> get_FileSystemsToCreate(This,pVal) )
#define IFileSystemImage3_put_FileSystemsToCreate(This,newVal)( (This)->lpVtbl -> put_FileSystemsToCreate(This,newVal) )
#define IFileSystemImage3_get_FileSystemsSupported(This,pVal)( (This)->lpVtbl -> get_FileSystemsSupported(This,pVal) )
#define IFileSystemImage3_put_UDFRevision(This,newVal)( (This)->lpVtbl -> put_UDFRevision(This,newVal) )
#define IFileSystemImage3_get_UDFRevision(This,pVal)( (This)->lpVtbl -> get_UDFRevision(This,pVal) )
#define IFileSystemImage3_get_UDFRevisionsSupported(This,pVal)( (This)->lpVtbl -> get_UDFRevisionsSupported(This,pVal) )
#define IFileSystemImage3_ChooseImageDefaults(This,discRecorder)( (This)->lpVtbl -> ChooseImageDefaults(This,discRecorder) )
#define IFileSystemImage3_ChooseImageDefaultsForMediaType(This,value)( (This)->lpVtbl -> ChooseImageDefaultsForMediaType(This,value) )
#define IFileSystemImage3_put_ISO9660InterchangeLevel(This,newVal)( (This)->lpVtbl -> put_ISO9660InterchangeLevel(This,newVal) )
#define IFileSystemImage3_get_ISO9660InterchangeLevel(This,pVal)( (This)->lpVtbl -> get_ISO9660InterchangeLevel(This,pVal) )
#define IFileSystemImage3_get_ISO9660InterchangeLevelsSupported(This,pVal)( (This)->lpVtbl -> get_ISO9660InterchangeLevelsSupported(This,pVal) )
#define IFileSystemImage3_CreateResultImage(This,resultStream)( (This)->lpVtbl -> CreateResultImage(This,resultStream) )
#define IFileSystemImage3_Exists(This,fullPath,itemType)( (This)->lpVtbl -> Exists(This,fullPath,itemType) )
#define IFileSystemImage3_CalculateDiscIdentifier(This,discIdentifier)( (This)->lpVtbl -> CalculateDiscIdentifier(This,discIdentifier) )
#define IFileSystemImage3_IdentifyFileSystemsOnDisc(This,discRecorder,fileSystems)( (This)->lpVtbl -> IdentifyFileSystemsOnDisc(This,discRecorder,fileSystems) )
#define IFileSystemImage3_GetDefaultFileSystemForImport(This,fileSystems,importDefault)( (This)->lpVtbl -> GetDefaultFileSystemForImport(This,fileSystems,importDefault) )
#define IFileSystemImage3_ImportFileSystem(This,importedFileSystem)( (This)->lpVtbl -> ImportFileSystem(This,importedFileSystem) )
#define IFileSystemImage3_ImportSpecificFileSystem(This,fileSystemToUse)( (This)->lpVtbl -> ImportSpecificFileSystem(This,fileSystemToUse) )
#define IFileSystemImage3_RollbackToChangePoint(This,changePoint)( (This)->lpVtbl -> RollbackToChangePoint(This,changePoint) )
#define IFileSystemImage3_LockInChangePoint(This)( (This)->lpVtbl -> LockInChangePoint(This) )
#define IFileSystemImage3_CreateDirectoryItem(This,name,newItem)( (This)->lpVtbl -> CreateDirectoryItem(This,name,newItem) )
#define IFileSystemImage3_CreateFileItem(This,name,newItem)( (This)->lpVtbl -> CreateFileItem(This,name,newItem) )
#define IFileSystemImage3_get_VolumeNameUDF(This,pVal)( (This)->lpVtbl -> get_VolumeNameUDF(This,pVal) )
#define IFileSystemImage3_get_VolumeNameJoliet(This,pVal)( (This)->lpVtbl -> get_VolumeNameJoliet(This,pVal) )
#define IFileSystemImage3_get_VolumeNameISO9660(This,pVal)( (This)->lpVtbl -> get_VolumeNameISO9660(This,pVal) )
#define IFileSystemImage3_get_StageFiles(This,pVal)( (This)->lpVtbl -> get_StageFiles(This,pVal) )
#define IFileSystemImage3_put_StageFiles(This,newVal)( (This)->lpVtbl -> put_StageFiles(This,newVal) )
#define IFileSystemImage3_get_MultisessionInterfaces(This,pVal)( (This)->lpVtbl -> get_MultisessionInterfaces(This,pVal) )
#define IFileSystemImage3_put_MultisessionInterfaces(This,newVal)( (This)->lpVtbl -> put_MultisessionInterfaces(This,newVal) )
#define IFileSystemImage3_get_BootImageOptionsArray(This,pVal)( (This)->lpVtbl -> get_BootImageOptionsArray(This,pVal) )
#define IFileSystemImage3_put_BootImageOptionsArray(This,newVal)( (This)->lpVtbl -> put_BootImageOptionsArray(This,newVal) )
#define IFileSystemImage3_get_CreateRedundantUdfMetadataFiles(This,pVal)( (This)->lpVtbl -> get_CreateRedundantUdfMetadataFiles(This,pVal) )
#define IFileSystemImage3_put_CreateRedundantUdfMetadataFiles(This,newVal)( (This)->lpVtbl -> put_CreateRedundantUdfMetadataFiles(This,newVal) )
#define IFileSystemImage3_ProbeSpecificFileSystem(This,fileSystemToProbe,isAppendable)( (This)->lpVtbl -> ProbeSpecificFileSystem(This,fileSystemToProbe,isAppendable) )
#endif
#endif
#define DISPID_DFILESYSTEMIMAGEEVENTS_UPDATE 0x100
extern RPC_IF_HANDLE __MIDL_itf_imapi2fs_0000_0016_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_imapi2fs_0000_0016_v0_0_s_ifspec;
#ifndef __DFileSystemImageEvents_INTERFACE_DEFINED__
#define __DFileSystemImageEvents_INTERFACE_DEFINED__
extern const IID IID_DFileSystemImageEvents;
typedef struct DFileSystemImageEventsVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE *QueryInterface) (DFileSystemImageEvents *This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE *AddRef) (DFileSystemImageEvents *This);
	ULONG(STDMETHODCALLTYPE *Release) (DFileSystemImageEvents *This);
	HRESULT(STDMETHODCALLTYPE *GetTypeInfoCount) (DFileSystemImageEvents *This, UINT *pctinfo);
	HRESULT(STDMETHODCALLTYPE *GetTypeInfo) (DFileSystemImageEvents *This, UINT iTInfo, LCID lcid, ITypeInfo **ppTInfo);
	HRESULT(STDMETHODCALLTYPE *GetIDsOfNames) (DFileSystemImageEvents *This, REFIID riid, LPOLESTR *rgszNames, UINT cNames, LCID lcid, DISPID *rgDispId);
	HRESULT(STDMETHODCALLTYPE *Invoke) (DFileSystemImageEvents *This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS *pDispParams, VARIANT *pVarResult, EXCEPINFO *pExcepInfo, UINT *puArgErr);
	HRESULT(STDMETHODCALLTYPE *Update) (DFileSystemImageEvents *This, IDispatch *object, BSTR currentFile, LONG copiedSectors, LONG totalSectors);
	END_INTERFACE
}  DFileSystemImageEventsVtbl;
interface DFileSystemImageEvents
{
	CONST_VTBL struct DFileSystemImageEventsVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define DFileSystemImageEvents_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define DFileSystemImageEvents_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define DFileSystemImageEvents_Release(This)( (This)->lpVtbl -> Release(This) )
#define DFileSystemImageEvents_GetTypeInfoCount(This,pctinfo)( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define DFileSystemImageEvents_GetTypeInfo(This,iTInfo,lcid,ppTInfo)( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define DFileSystemImageEvents_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define DFileSystemImageEvents_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define DFileSystemImageEvents_Update(This,object,currentFile,copiedSectors,totalSectors)( (This)->lpVtbl -> Update(This,object,currentFile,copiedSectors,totalSectors) )
#endif
#endif
#define DISPID_DFILESYSTEMIMAGEIMPORTEVENTS_UPDATEIMPORT 0x101
extern RPC_IF_HANDLE __MIDL_itf_imapi2fs_0000_0017_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_imapi2fs_0000_0017_v0_0_s_ifspec;
#ifndef __DFileSystemImageImportEvents_INTERFACE_DEFINED__
#define __DFileSystemImageImportEvents_INTERFACE_DEFINED__
extern const IID IID_DFileSystemImageImportEvents;
typedef struct DFileSystemImageImportEventsVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE *QueryInterface) (DFileSystemImageImportEvents *This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE *AddRef) (DFileSystemImageImportEvents *This);
	ULONG(STDMETHODCALLTYPE *Release) (DFileSystemImageImportEvents *This);
	HRESULT(STDMETHODCALLTYPE *GetTypeInfoCount) (DFileSystemImageImportEvents *This, UINT *pctinfo);
	HRESULT(STDMETHODCALLTYPE *GetTypeInfo) (DFileSystemImageImportEvents *This, UINT iTInfo, LCID lcid, ITypeInfo **ppTInfo);
	HRESULT(STDMETHODCALLTYPE *GetIDsOfNames) (DFileSystemImageImportEvents *This, REFIID riid, LPOLESTR *rgszNames, UINT cNames, LCID lcid, DISPID *rgDispId);
	HRESULT(STDMETHODCALLTYPE *Invoke) (DFileSystemImageImportEvents *This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS *pDispParams, VARIANT *pVarResult, EXCEPINFO *pExcepInfo, UINT *puArgErr);
	HRESULT(STDMETHODCALLTYPE *UpdateImport) (DFileSystemImageImportEvents *This, IDispatch *object, FsiFileSystems fileSystem, BSTR currentItem, LONG importedDirectoryItems, LONG totalDirectoryItems, LONG importedFileItems, LONG totalFileItems);
	END_INTERFACE
}  DFileSystemImageImportEventsVtbl;
interface DFileSystemImageImportEvents
{
	CONST_VTBL struct DFileSystemImageImportEventsVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define DFileSystemImageImportEvents_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define DFileSystemImageImportEvents_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define DFileSystemImageImportEvents_Release(This)( (This)->lpVtbl -> Release(This) )
#define DFileSystemImageImportEvents_GetTypeInfoCount(This,pctinfo)( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define DFileSystemImageImportEvents_GetTypeInfo(This,iTInfo,lcid,ppTInfo)( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define DFileSystemImageImportEvents_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define DFileSystemImageImportEvents_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define DFileSystemImageImportEvents_UpdateImport(This,object,fileSystem,currentItem,importedDirectoryItems,totalDirectoryItems,importedFileItems,totalFileItems)( (This)->lpVtbl -> UpdateImport(This,object,fileSystem,currentItem,importedDirectoryItems,totalDirectoryItems,importedFileItems,totalFileItems) )
#endif
#endif
#ifndef __IIsoImageManager_INTERFACE_DEFINED__
#define __IIsoImageManager_INTERFACE_DEFINED__
extern const IID IID_IIsoImageManager;
typedef struct IIsoImageManagerVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE *QueryInterface) (IIsoImageManager *This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE *AddRef) (IIsoImageManager *This);
	ULONG(STDMETHODCALLTYPE *Release) (IIsoImageManager *This);
	HRESULT(STDMETHODCALLTYPE *GetTypeInfoCount) (IIsoImageManager *This, UINT *pctinfo);
	HRESULT(STDMETHODCALLTYPE *GetTypeInfo) (IIsoImageManager *This, UINT iTInfo, LCID lcid, ITypeInfo **ppTInfo);
	HRESULT(STDMETHODCALLTYPE *GetIDsOfNames) (IIsoImageManager *This, REFIID riid, LPOLESTR *rgszNames, UINT cNames, LCID lcid, DISPID *rgDispId);
	HRESULT(STDMETHODCALLTYPE *Invoke) (IIsoImageManager *This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS *pDispParams, VARIANT *pVarResult, EXCEPINFO *pExcepInfo, UINT *puArgErr);
	HRESULT(STDMETHODCALLTYPE *get_Path) (IIsoImageManager *This, BSTR *pVal);
	HRESULT(STDMETHODCALLTYPE *get_Stream) (IIsoImageManager *This, IStream **data);
	HRESULT(STDMETHODCALLTYPE *SetPath) (IIsoImageManager *This, BSTR Val);
	HRESULT(STDMETHODCALLTYPE *SetStream) (IIsoImageManager *This, IStream *data);
	HRESULT(STDMETHODCALLTYPE *Validate) (IIsoImageManager *This);
	END_INTERFACE
}  IIsoImageManagerVtbl;
interface IIsoImageManager
{
	CONST_VTBL struct IIsoImageManagerVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IIsoImageManager_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IIsoImageManager_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define IIsoImageManager_Release(This)( (This)->lpVtbl -> Release(This) )
#define IIsoImageManager_GetTypeInfoCount(This,pctinfo)( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define IIsoImageManager_GetTypeInfo(This,iTInfo,lcid,ppTInfo)( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define IIsoImageManager_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define IIsoImageManager_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define IIsoImageManager_get_Path(This,pVal)( (This)->lpVtbl -> get_Path(This,pVal) )
#define IIsoImageManager_get_Stream(This,data)( (This)->lpVtbl -> get_Stream(This,data) )
#define IIsoImageManager_SetPath(This,Val)( (This)->lpVtbl -> SetPath(This,Val) )
#define IIsoImageManager_SetStream(This,data)( (This)->lpVtbl -> SetStream(This,data) )
#define IIsoImageManager_Validate(This)( (This)->lpVtbl -> Validate(This) )
#endif
#endif
#define IMAPI2FS_MajorVersion          1
#define IMAPI2FS_MinorVersion          0
#define IMAPI2FS_FullVersion_STR    "1.0"
#define IMAPI2FS_FullVersion_WSTR  L"1.0"
extern RPC_IF_HANDLE __MIDL_itf_imapi2fs_0000_0019_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_imapi2fs_0000_0019_v0_0_s_ifspec;
#ifndef __IMAPI2FS_LIBRARY_DEFINED__
#define __IMAPI2FS_LIBRARY_DEFINED__
extern const IID LIBID_IMAPI2FS;
extern const CLSID CLSID_BootOptions;
extern const CLSID CLSID_FsiStream;
extern const CLSID CLSID_FileSystemImageResult;
extern const CLSID CLSID_ProgressItem;
extern const CLSID CLSID_EnumProgressItems;
extern const CLSID CLSID_ProgressItems;
extern const CLSID CLSID_FsiDirectoryItem;
extern const CLSID CLSID_FsiFileItem;
extern const CLSID CLSID_EnumFsiItems;
extern const CLSID CLSID_FsiNamedStreams;
extern const CLSID CLSID_MsftFileSystemImage;
extern const CLSID CLSID_MsftIsoImageManager;
extern const CLSID CLSID_BlockRange;
extern const CLSID CLSID_BlockRangeList;
#endif
unsigned long __RPC_USER BSTR_UserSize(unsigned long *, unsigned long, BSTR *);
unsigned char *__RPC_USER BSTR_UserMarshal(unsigned long *, unsigned char *, BSTR *);
unsigned char *__RPC_USER BSTR_UserUnmarshal(unsigned long *, unsigned char *, BSTR *);
void __RPC_USER BSTR_UserFree(unsigned long *, BSTR *);
unsigned long __RPC_USER LPSAFEARRAY_UserSize(unsigned long *, unsigned long, LPSAFEARRAY *);
unsigned char *__RPC_USER LPSAFEARRAY_UserMarshal(unsigned long *, unsigned char *, LPSAFEARRAY *);
unsigned char *__RPC_USER LPSAFEARRAY_UserUnmarshal(unsigned long *, unsigned char *, LPSAFEARRAY *);
void __RPC_USER LPSAFEARRAY_UserFree(unsigned long *, LPSAFEARRAY *);
unsigned long __RPC_USER BSTR_UserSize64(unsigned long *, unsigned long, BSTR *);
unsigned char *__RPC_USER BSTR_UserMarshal64(unsigned long *, unsigned char *, BSTR *);
unsigned char *__RPC_USER BSTR_UserUnmarshal64(unsigned long *, unsigned char *, BSTR *);
void __RPC_USER BSTR_UserFree64(unsigned long *, BSTR *);
unsigned long __RPC_USER LPSAFEARRAY_UserSize64(unsigned long *, unsigned long, LPSAFEARRAY *);
unsigned char *__RPC_USER LPSAFEARRAY_UserMarshal64(unsigned long *, unsigned char *, LPSAFEARRAY *);
unsigned char *__RPC_USER LPSAFEARRAY_UserUnmarshal64(unsigned long *, unsigned char *, LPSAFEARRAY *);
void __RPC_USER LPSAFEARRAY_UserFree64(unsigned long *, LPSAFEARRAY *);
HRESULT STDMETHODCALLTYPE IEnumProgressItems_Next_Proxy(IEnumProgressItems *This, ULONG celt, IProgressItem **rgelt, ULONG *pceltFetched);
HRESULT STDMETHODCALLTYPE IEnumProgressItems_Next_Stub(IEnumProgressItems *This, ULONG celt, IProgressItem **rgelt, ULONG *pceltFetched);
HRESULT STDMETHODCALLTYPE IEnumFsiItems_Next_Proxy(IEnumFsiItems *This, ULONG celt, IFsiItem **rgelt, ULONG *pceltFetched);
HRESULT STDMETHODCALLTYPE IEnumFsiItems_Next_Stub(IEnumFsiItems *This, ULONG celt, IFsiItem **rgelt, ULONG *pceltFetched);
#endif

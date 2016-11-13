/*+@@file@@----------------------------------------------------------------*//*!
 \file		clrdata.h
 \par Description 
            Extension and update of headers for PellesC compiler suite.
 \par Project: 
            PellesC Headers extension
 \date		Created  on Sun Jul  3 17:21:11 2016
 \date		Modified on Sun Jul  3 17:21:11 2016
 \author	frankie
\*//*-@@file@@----------------------------------------------------------------*/

#ifndef __REQUIRED_RPCNDR_H_VERSION__
#define __REQUIRED_RPCNDR_H_VERSION__ 475
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
#ifndef __clrdata_h__
#define __clrdata_h__
#if __POCC__ >= 500
#pragma once
#endif
#ifndef __ICLRDataTarget_FWD_DEFINED__
#define __ICLRDataTarget_FWD_DEFINED__
typedef interface ICLRDataTarget ICLRDataTarget;
#endif
#ifndef __ICLRDataTarget2_FWD_DEFINED__
#define __ICLRDataTarget2_FWD_DEFINED__
typedef interface ICLRDataTarget2 ICLRDataTarget2;
#endif
#ifndef __ICLRMetadataLocator_FWD_DEFINED__
#define __ICLRMetadataLocator_FWD_DEFINED__
typedef interface ICLRMetadataLocator ICLRMetadataLocator;
#endif
#ifndef __ICLRDataEnumMemoryRegionsCallback_FWD_DEFINED__
#define __ICLRDataEnumMemoryRegionsCallback_FWD_DEFINED__
typedef interface ICLRDataEnumMemoryRegionsCallback ICLRDataEnumMemoryRegionsCallback;
#endif
#ifndef __ICLRDataEnumMemoryRegions_FWD_DEFINED__
#define __ICLRDataEnumMemoryRegions_FWD_DEFINED__
typedef interface ICLRDataEnumMemoryRegions ICLRDataEnumMemoryRegions;
#endif
#include <unknwn.h>
typedef ULONG64 CLRDATA_ADDRESS;
STDAPI CLRDataCreateInstance(REFIID iid, ICLRDataTarget *target, void **iface);
typedef HRESULT(STDAPICALLTYPE *PFN_CLRDataCreateInstance) (REFIID iid, ICLRDataTarget *target, void **iface);
extern RPC_IF_HANDLE __MIDL_itf_clrdata_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_clrdata_0000_0000_v0_0_s_ifspec;
#ifndef __ICLRDataTarget_INTERFACE_DEFINED__
#define __ICLRDataTarget_INTERFACE_DEFINED__
extern const IID IID_ICLRDataTarget;
typedef struct ICLRDataTargetVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE *QueryInterface) (ICLRDataTarget *This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE *AddRef) (ICLRDataTarget *This);
	ULONG(STDMETHODCALLTYPE *Release) (ICLRDataTarget *This);
	HRESULT(STDMETHODCALLTYPE *GetMachineType) (ICLRDataTarget *This, ULONG32 *machineType);
	HRESULT(STDMETHODCALLTYPE *GetPointerSize) (ICLRDataTarget *This, ULONG32 *pointerSize);
	HRESULT(STDMETHODCALLTYPE *GetImageBase) (ICLRDataTarget *This, LPCWSTR imagePath, CLRDATA_ADDRESS *baseAddress);
	HRESULT(STDMETHODCALLTYPE *ReadVirtual) (ICLRDataTarget *This, CLRDATA_ADDRESS address, BYTE *buffer, ULONG32 bytesRequested, ULONG32 *bytesRead);
	HRESULT(STDMETHODCALLTYPE *WriteVirtual) (ICLRDataTarget *This, CLRDATA_ADDRESS address, BYTE *buffer, ULONG32 bytesRequested, ULONG32 *bytesWritten);
	HRESULT(STDMETHODCALLTYPE *GetTLSValue) (ICLRDataTarget *This, ULONG32 threadID, ULONG32 index, CLRDATA_ADDRESS *value);
	HRESULT(STDMETHODCALLTYPE *SetTLSValue) (ICLRDataTarget *This, ULONG32 threadID, ULONG32 index, CLRDATA_ADDRESS value);
	HRESULT(STDMETHODCALLTYPE *GetCurrentThreadID) (ICLRDataTarget *This, ULONG32 *threadID);
	HRESULT(STDMETHODCALLTYPE *GetThreadContext) (ICLRDataTarget *This, ULONG32 threadID, ULONG32 contextFlags, ULONG32 contextSize, BYTE *context);
	HRESULT(STDMETHODCALLTYPE *SetThreadContext) (ICLRDataTarget *This, ULONG32 threadID, ULONG32 contextSize, BYTE *context);
	HRESULT(STDMETHODCALLTYPE *Request) (ICLRDataTarget *This, ULONG32 reqCode, ULONG32 inBufferSize, BYTE *inBuffer, ULONG32 outBufferSize, BYTE *outBuffer);
	END_INTERFACE
}  ICLRDataTargetVtbl;
interface ICLRDataTarget
{
	CONST_VTBL struct ICLRDataTargetVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define ICLRDataTarget_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define ICLRDataTarget_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define ICLRDataTarget_Release(This)( (This)->lpVtbl -> Release(This) )
#define ICLRDataTarget_GetMachineType(This,machineType)( (This)->lpVtbl -> GetMachineType(This,machineType) )
#define ICLRDataTarget_GetPointerSize(This,pointerSize)( (This)->lpVtbl -> GetPointerSize(This,pointerSize) )
#define ICLRDataTarget_GetImageBase(This,imagePath,baseAddress)( (This)->lpVtbl -> GetImageBase(This,imagePath,baseAddress) )
#define ICLRDataTarget_ReadVirtual(This,address,buffer,bytesRequested,bytesRead)( (This)->lpVtbl -> ReadVirtual(This,address,buffer,bytesRequested,bytesRead) )
#define ICLRDataTarget_WriteVirtual(This,address,buffer,bytesRequested,bytesWritten)( (This)->lpVtbl -> WriteVirtual(This,address,buffer,bytesRequested,bytesWritten) )
#define ICLRDataTarget_GetTLSValue(This,threadID,index,value)( (This)->lpVtbl -> GetTLSValue(This,threadID,index,value) )
#define ICLRDataTarget_SetTLSValue(This,threadID,index,value)( (This)->lpVtbl -> SetTLSValue(This,threadID,index,value) )
#define ICLRDataTarget_GetCurrentThreadID(This,threadID)( (This)->lpVtbl -> GetCurrentThreadID(This,threadID) )
#define ICLRDataTarget_GetThreadContext(This,threadID,contextFlags,contextSize,context)( (This)->lpVtbl -> GetThreadContext(This,threadID,contextFlags,contextSize,context) )
#define ICLRDataTarget_SetThreadContext(This,threadID,contextSize,context)( (This)->lpVtbl -> SetThreadContext(This,threadID,contextSize,context) )
#define ICLRDataTarget_Request(This,reqCode,inBufferSize,inBuffer,outBufferSize,outBuffer)( (This)->lpVtbl -> Request(This,reqCode,inBufferSize,inBuffer,outBufferSize,outBuffer) )
#endif
#endif
#ifndef __ICLRDataTarget2_INTERFACE_DEFINED__
#define __ICLRDataTarget2_INTERFACE_DEFINED__
extern const IID IID_ICLRDataTarget2;
typedef struct ICLRDataTarget2Vtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE *QueryInterface) (ICLRDataTarget2 *This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE *AddRef) (ICLRDataTarget2 *This);
	ULONG(STDMETHODCALLTYPE *Release) (ICLRDataTarget2 *This);
	HRESULT(STDMETHODCALLTYPE *GetMachineType) (ICLRDataTarget2 *This, ULONG32 *machineType);
	HRESULT(STDMETHODCALLTYPE *GetPointerSize) (ICLRDataTarget2 *This, ULONG32 *pointerSize);
	HRESULT(STDMETHODCALLTYPE *GetImageBase) (ICLRDataTarget2 *This, LPCWSTR imagePath, CLRDATA_ADDRESS *baseAddress);
	HRESULT(STDMETHODCALLTYPE *ReadVirtual) (ICLRDataTarget2 *This, CLRDATA_ADDRESS address, BYTE *buffer, ULONG32 bytesRequested, ULONG32 *bytesRead);
	HRESULT(STDMETHODCALLTYPE *WriteVirtual) (ICLRDataTarget2 *This, CLRDATA_ADDRESS address, BYTE *buffer, ULONG32 bytesRequested, ULONG32 *bytesWritten);
	HRESULT(STDMETHODCALLTYPE *GetTLSValue) (ICLRDataTarget2 *This, ULONG32 threadID, ULONG32 index, CLRDATA_ADDRESS *value);
	HRESULT(STDMETHODCALLTYPE *SetTLSValue) (ICLRDataTarget2 *This, ULONG32 threadID, ULONG32 index, CLRDATA_ADDRESS value);
	HRESULT(STDMETHODCALLTYPE *GetCurrentThreadID) (ICLRDataTarget2 *This, ULONG32 *threadID);
	HRESULT(STDMETHODCALLTYPE *GetThreadContext) (ICLRDataTarget2 *This, ULONG32 threadID, ULONG32 contextFlags, ULONG32 contextSize, BYTE *context);
	HRESULT(STDMETHODCALLTYPE *SetThreadContext) (ICLRDataTarget2 *This, ULONG32 threadID, ULONG32 contextSize, BYTE *context);
	HRESULT(STDMETHODCALLTYPE *Request) (ICLRDataTarget2 *This, ULONG32 reqCode, ULONG32 inBufferSize, BYTE *inBuffer, ULONG32 outBufferSize, BYTE *outBuffer);
	HRESULT(STDMETHODCALLTYPE *AllocVirtual) (ICLRDataTarget2 *This, CLRDATA_ADDRESS addr, ULONG32 size, ULONG32 typeFlags, ULONG32 protectFlags, CLRDATA_ADDRESS *virt);
	HRESULT(STDMETHODCALLTYPE *FreeVirtual) (ICLRDataTarget2 *This, CLRDATA_ADDRESS addr, ULONG32 size, ULONG32 typeFlags);
	END_INTERFACE
}  ICLRDataTarget2Vtbl;
interface ICLRDataTarget2
{
	CONST_VTBL struct ICLRDataTarget2Vtbl *lpVtbl;
};
#ifdef COBJMACROS
#define ICLRDataTarget2_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define ICLRDataTarget2_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define ICLRDataTarget2_Release(This)( (This)->lpVtbl -> Release(This) )
#define ICLRDataTarget2_GetMachineType(This,machineType)( (This)->lpVtbl -> GetMachineType(This,machineType) )
#define ICLRDataTarget2_GetPointerSize(This,pointerSize)( (This)->lpVtbl -> GetPointerSize(This,pointerSize) )
#define ICLRDataTarget2_GetImageBase(This,imagePath,baseAddress)( (This)->lpVtbl -> GetImageBase(This,imagePath,baseAddress) )
#define ICLRDataTarget2_ReadVirtual(This,address,buffer,bytesRequested,bytesRead)( (This)->lpVtbl -> ReadVirtual(This,address,buffer,bytesRequested,bytesRead) )
#define ICLRDataTarget2_WriteVirtual(This,address,buffer,bytesRequested,bytesWritten)( (This)->lpVtbl -> WriteVirtual(This,address,buffer,bytesRequested,bytesWritten) )
#define ICLRDataTarget2_GetTLSValue(This,threadID,index,value)( (This)->lpVtbl -> GetTLSValue(This,threadID,index,value) )
#define ICLRDataTarget2_SetTLSValue(This,threadID,index,value)( (This)->lpVtbl -> SetTLSValue(This,threadID,index,value) )
#define ICLRDataTarget2_GetCurrentThreadID(This,threadID)( (This)->lpVtbl -> GetCurrentThreadID(This,threadID) )
#define ICLRDataTarget2_GetThreadContext(This,threadID,contextFlags,contextSize,context)( (This)->lpVtbl -> GetThreadContext(This,threadID,contextFlags,contextSize,context) )
#define ICLRDataTarget2_SetThreadContext(This,threadID,contextSize,context)( (This)->lpVtbl -> SetThreadContext(This,threadID,contextSize,context) )
#define ICLRDataTarget2_Request(This,reqCode,inBufferSize,inBuffer,outBufferSize,outBuffer)( (This)->lpVtbl -> Request(This,reqCode,inBufferSize,inBuffer,outBufferSize,outBuffer) )
#define ICLRDataTarget2_AllocVirtual(This,addr,size,typeFlags,protectFlags,virt)( (This)->lpVtbl -> AllocVirtual(This,addr,size,typeFlags,protectFlags,virt) )
#define ICLRDataTarget2_FreeVirtual(This,addr,size,typeFlags)( (This)->lpVtbl -> FreeVirtual(This,addr,size,typeFlags) )
#endif
#endif
#ifndef __ICLRMetadataLocator_INTERFACE_DEFINED__
#define __ICLRMetadataLocator_INTERFACE_DEFINED__
extern const IID IID_ICLRMetadataLocator;
typedef struct ICLRMetadataLocatorVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE *QueryInterface) (ICLRMetadataLocator *This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE *AddRef) (ICLRMetadataLocator *This);
	ULONG(STDMETHODCALLTYPE *Release) (ICLRMetadataLocator *This);
	HRESULT(STDMETHODCALLTYPE *GetMetadata) (ICLRMetadataLocator *This, LPCWSTR imagePath, ULONG32 imageTimestamp, ULONG32 imageSize, GUID *mvid, ULONG32 mdRva, ULONG32 flags, ULONG32 bufferSize, BYTE *buffer, ULONG32 *dataSize);
	END_INTERFACE
}  ICLRMetadataLocatorVtbl;
interface ICLRMetadataLocator
{
	CONST_VTBL struct ICLRMetadataLocatorVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define ICLRMetadataLocator_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define ICLRMetadataLocator_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define ICLRMetadataLocator_Release(This)( (This)->lpVtbl -> Release(This) )
#define ICLRMetadataLocator_GetMetadata(This,imagePath,imageTimestamp,imageSize,mvid,mdRva,flags,bufferSize,buffer,dataSize)( (This)->lpVtbl -> GetMetadata(This,imagePath,imageTimestamp,imageSize,mvid,mdRva,flags,bufferSize,buffer,dataSize) )
#endif
#endif
#ifndef __ICLRDataEnumMemoryRegionsCallback_INTERFACE_DEFINED__
#define __ICLRDataEnumMemoryRegionsCallback_INTERFACE_DEFINED__
extern const IID IID_ICLRDataEnumMemoryRegionsCallback;
typedef struct ICLRDataEnumMemoryRegionsCallbackVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE *QueryInterface) (ICLRDataEnumMemoryRegionsCallback *This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE *AddRef) (ICLRDataEnumMemoryRegionsCallback *This);
	ULONG(STDMETHODCALLTYPE *Release) (ICLRDataEnumMemoryRegionsCallback *This);
	HRESULT(STDMETHODCALLTYPE *EnumMemoryRegion) (ICLRDataEnumMemoryRegionsCallback *This, CLRDATA_ADDRESS address, ULONG32 size);
	END_INTERFACE
}  ICLRDataEnumMemoryRegionsCallbackVtbl;
interface ICLRDataEnumMemoryRegionsCallback
{
	CONST_VTBL struct ICLRDataEnumMemoryRegionsCallbackVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define ICLRDataEnumMemoryRegionsCallback_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define ICLRDataEnumMemoryRegionsCallback_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define ICLRDataEnumMemoryRegionsCallback_Release(This)( (This)->lpVtbl -> Release(This) )
#define ICLRDataEnumMemoryRegionsCallback_EnumMemoryRegion(This,address,size)( (This)->lpVtbl -> EnumMemoryRegion(This,address,size) )
#endif
#endif
typedef enum CLRDataEnumMemoryFlags
{
	CLRDATA_ENUM_MEM_DEFAULT = 0,
	CLRDATA_ENUM_MEM_MINI = CLRDATA_ENUM_MEM_DEFAULT,
	CLRDATA_ENUM_MEM_HEAP = 0x1
} CLRDataEnumMemoryFlags;
extern RPC_IF_HANDLE __MIDL_itf_clrdata_0000_0004_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_clrdata_0000_0004_v0_0_s_ifspec;
#ifndef __ICLRDataEnumMemoryRegions_INTERFACE_DEFINED__
#define __ICLRDataEnumMemoryRegions_INTERFACE_DEFINED__
extern const IID IID_ICLRDataEnumMemoryRegions;
typedef struct ICLRDataEnumMemoryRegionsVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE *QueryInterface) (ICLRDataEnumMemoryRegions *This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE *AddRef) (ICLRDataEnumMemoryRegions *This);
	ULONG(STDMETHODCALLTYPE *Release) (ICLRDataEnumMemoryRegions *This);
	HRESULT(STDMETHODCALLTYPE *EnumMemoryRegions) (ICLRDataEnumMemoryRegions *This, ICLRDataEnumMemoryRegionsCallback *callback, ULONG32 miniDumpFlags, CLRDataEnumMemoryFlags clrFlags);
	END_INTERFACE
}  ICLRDataEnumMemoryRegionsVtbl;
interface ICLRDataEnumMemoryRegions
{
	CONST_VTBL struct ICLRDataEnumMemoryRegionsVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define ICLRDataEnumMemoryRegions_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define ICLRDataEnumMemoryRegions_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define ICLRDataEnumMemoryRegions_Release(This)( (This)->lpVtbl -> Release(This) )
#define ICLRDataEnumMemoryRegions_EnumMemoryRegions(This,callback,miniDumpFlags,clrFlags)( (This)->lpVtbl -> EnumMemoryRegions(This,callback,miniDumpFlags,clrFlags) )
#endif
#endif
#endif

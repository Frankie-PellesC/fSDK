/*+@@file@@----------------------------------------------------------------*//*!
 \file		wmsPacket.h
 \par Description 
            Extension and update of headers for PellesC compiler suite.
 \par Project: 
            PellesC Headers extension
 \date		Created  on Tue Jul  5 13:59:37 2016
 \date		Modified on Tue Jul  5 13:59:37 2016
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
#ifndef __wmspacket_h__
#define __wmspacket_h__
#if __POCC__ >= 500
#pragma once
#endif
#ifndef __IWMSPacket_FWD_DEFINED__
#define __IWMSPacket_FWD_DEFINED__
typedef interface IWMSPacket IWMSPacket;
#endif
#ifndef __IWMSPacketListCallback_FWD_DEFINED__
#define __IWMSPacketListCallback_FWD_DEFINED__
typedef interface IWMSPacketListCallback IWMSPacketListCallback;
#endif
#ifndef __IWMSPacketList_FWD_DEFINED__
#define __IWMSPacketList_FWD_DEFINED__
typedef interface IWMSPacketList IWMSPacketList;
#endif
#ifndef __IWMSPacketParser_FWD_DEFINED__
#define __IWMSPacketParser_FWD_DEFINED__
typedef interface IWMSPacketParser IWMSPacketParser;
#endif
#ifndef __IWMSStreamSignalHandler_FWD_DEFINED__
#define __IWMSStreamSignalHandler_FWD_DEFINED__
typedef interface IWMSStreamSignalHandler IWMSStreamSignalHandler;
#endif
#include <objidl.h>
#include <WMSBuffer.h>
#include <WMSContext.h>
EXTERN_GUID(IID_IWMSPacket, 0x3309C901, 0x10A4, 0x11d2, 0x9E, 0xEE, 0x00, 0x60, 0x97, 0xD2, 0xD7, 0xCF);
EXTERN_GUID(IID_IWMSPacketList, 0x3309C902, 0x10A4, 0x11d2, 0x9E, 0xEE, 0x00, 0x60, 0x97, 0xD2, 0xD7, 0xCF);
EXTERN_GUID(IID_IWMSPacketParser, 0x8b59f7e1, 0x5411, 0x11d2, 0x9e, 0xff, 0x0, 0x60, 0x97, 0xd2, 0xd7, 0xcf);
EXTERN_GUID(IID_IWMSPacketListCallback, 0x49c2a6f1, 0x64b8, 0x11d2, 0x9f, 0xe, 0x0, 0x60, 0x97, 0xd2, 0xd7, 0xcf);
EXTERN_GUID(IID_IWMSStreamSignalHandler, 0x7B10F261, 0x26AA, 0x11d2, 0x9E, 0xF2, 0x00, 0x60, 0x97, 0xD2, 0xD7, 0xCF);
typedef enum WMS_PACKET_ATTRIBUTES
{
	WMS_PACKET_PACKET_NUM = 0,
	WMS_PACKET_NUM_BUFFERS = (WMS_PACKET_PACKET_NUM + 1),
	WMS_PACKET_LENGTH = (WMS_PACKET_NUM_BUFFERS + 1),
	WMS_PACKET_SEND_TIME_HI = (WMS_PACKET_LENGTH + 1),
	WMS_PACKET_SEND_TIME = (WMS_PACKET_SEND_TIME_HI + 1),
	WMS_PACKET_STREAM_NUM = (WMS_PACKET_SEND_TIME + 1),
	WMS_PACKET_FLAGS = (WMS_PACKET_STREAM_NUM + 1),
	WMS_PACKET_NET_SEQUENCE_NUMBER = (WMS_PACKET_FLAGS + 1),
	WMS_PACKET_PRESENT_TIME_HI = (WMS_PACKET_NET_SEQUENCE_NUMBER + 1),
	WMS_PACKET_PRESENT_TIME = (WMS_PACKET_PRESENT_TIME_HI + 1),
	WMS_PACKET_RECV_TIME = (WMS_PACKET_PRESENT_TIME + 1),
	WMS_PACKET_NUM_NACKS = (WMS_PACKET_RECV_TIME + 1),
	WMS_PACKET_DURATION = (WMS_PACKET_NUM_NACKS + 1),
	WMS_PACKET_ERASURES_DETECTED = (WMS_PACKET_DURATION + 1),
	WMS_PACKET_SEND_TIME_ADJUSTMENT = (WMS_PACKET_ERASURES_DETECTED + 1),
	WMS_PACKET_PACKETIZED_HDRLEN = (WMS_PACKET_SEND_TIME_ADJUSTMENT + 1),
	WMS_LAST_PACKET_ATTRIBUTE = WMS_PACKET_PACKETIZED_HDRLEN
} WMS_PACKET_ATTRIBUTES;
typedef enum WMS_PACKET_FLAG_TYPES
{
	WMS_KEY_FRAME_PACKET = 0x1,
	WMS_RETRANSMITTED_PACKET = 0x2,
	WMS_PACKET_REPORTED = 0x4,
	WMS_PACKET_PACKETIZED = 0x8,
	WMS_RECOVERED_PACKET = 0x10,
	WMS_FEC_PACKET = 0x20,
	WMS_FEC_ENCODED_PACKET = 0x40,
	WMS_PACKET_BURST_FLAG = 0x80,
	WMS_PACKET_FIRST_PAYLOAD_FLAG = 0x100
} WMS_PACKET_FLAG_TYPES;
typedef enum WMS_PACKET_LIST_ATTRIBUTES
{
	WMS_PACKET_LIST_FLAGS = 0,
	WMS_STREAM_SIGNAL = 1,
	WMS_PACKET_LIST_GENID = 2,
	WMS_PACKET_LIST_SEND_TIME = 3,
	WMS_PACKET_LIST_SEND_TIME_HI = 4,
	WMS_PACKET_LIST_PLAYLIST_GEN_ID = 5,
	WMS_LAST_PACKET_LIST_ATTRIBUTE = WMS_PACKET_LIST_PLAYLIST_GEN_ID
} WMS_PACKET_LIST_ATTRIBUTES;
typedef enum WMS_PACKET_LIST_FLAG_TYPES
{
	WMS_PACKET_LIST_NEEDS_FIXUP = 0x1,
	WMS_PACKET_LIST_UDP_RESEND = 0x2,
	WMS_PACKET_LIST_PRESTUFF = 0x4,
	WMS_PACKET_LIST_PLAYLIST_CHANGE_RECEDING = 0x8
} WMS_PACKET_LIST_FLAG_TYPES;
typedef enum WMS_PACKET_LIST_EX_FLAGS
{
	WMS_NO_ADDREF = 0x80000000,
	WMS_PACKET_NO_ADDREF = 0x80000000,
	WMS_PACKET_NO_RELEASE = 0x40000000,
	WMS_PLIST_BUFFER_NO_ADDREF = 0x80000000,
	WMS_PLIST_BUFFER_NO_RELEASE = 0x40000000,
	WMS_PLIST_NO_ADDREF = 0x80000000
} WMS_PACKET_LIST_EX_FLAGS;
typedef enum WMS_PACKET_BUFFER_FLAGS
{
	WMS_INSERT_BUFFER_AT_END = 0xffffffff
} WMS_PACKET_BUFFER_FLAGS;
typedef enum WMS_PACKET_BUFFER_EX_FLAGS
{
	WMS_BUFFER_NO_ADDREF = 0x80000000,
	WMS_BUFFER_NO_RELEASE = 0x40000000,
	WMS_BUFFER_NO_REFCOUNT = 0x20000000,
	WMS_BUFFER_COMBINE = 0x10000000
} WMS_PACKET_BUFFER_EX_FLAGS;
typedef enum WMS_PACKET_STATUS_FLAGS
{
	WMS_START_NEXT_READ = 0x1,
	WMS_WRITE_COMPLETED = 0x2,
	WMS_REQUEST_BUFFER = 0x4,
	WMS_HEADER_BUFFER = 0x8
} WMS_PACKET_STATUS_FLAGS;
typedef enum WMS_PARSER_FLAG_TYPES
{
	WMS_PARSER_PRESERVE_PADDING = 0x1
} WMS_PARSER_FLAG_TYPES;
typedef unsigned __int64 QWORD;
extern RPC_IF_HANDLE __MIDL_itf_wmspacket_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_wmspacket_0000_0000_v0_0_s_ifspec;
#ifndef __IWMSPacket_INTERFACE_DEFINED__
#define __IWMSPacket_INTERFACE_DEFINED__
typedef struct __MIDL_IWMSPacket_0001
{
	INSSBuffer *pBuffer;
	DWORD dwBufferOffset;
	DWORD dwBufferLen;
	WORD wFlags;
} WMSBUFFERDESC;
extern const IID IID_IWMSPacket;
typedef struct IWMSPacketVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IWMSPacket * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IWMSPacket * This);
	ULONG(STDMETHODCALLTYPE * Release) (IWMSPacket * This);
	HRESULT(STDMETHODCALLTYPE * GetAllBuffers) (IWMSPacket * This, DWORD dwMaxNumBuffers, WMSBUFFERDESC * pDesc, DWORD * pdwNumBuffers, DWORD dwExFlags);
	HRESULT(STDMETHODCALLTYPE * GetBuffer) (IWMSPacket * This, DWORD dwBufferNum, INSSBuffer ** ppBuffer, DWORD * pdwBufferOffset, DWORD * pdwBufferLen, WORD * pwFlags, DWORD dwExFlags);
	HRESULT(STDMETHODCALLTYPE * InsertBuffer) (IWMSPacket * This, DWORD dwBufferNum, INSSBuffer * pBuffer, DWORD dwBufferOffset, DWORD dwBufferLen, WORD wFlags, DWORD dwExFlags);
	HRESULT(STDMETHODCALLTYPE * RemoveBuffer) (IWMSPacket * This, DWORD dwBufferNum);
	HRESULT(STDMETHODCALLTYPE * RemoveAllBuffers) (IWMSPacket * This);
	HRESULT(STDMETHODCALLTYPE * GetAttribute) (IWMSPacket * This, DWORD dwValueName, DWORD * pdwValue);
	HRESULT(STDMETHODCALLTYPE * SetAttribute) (IWMSPacket * This, DWORD dwValueName, DWORD dwValue);
	HRESULT(STDMETHODCALLTYPE * GetExtendedAttribute) (IWMSPacket * This, DWORD dwValueName, VARIANT * pVariantValue);
	HRESULT(STDMETHODCALLTYPE * GetExtendedAttributeByIndex) (IWMSPacket * This, DWORD dwIndex, DWORD * pdwValueName, VARIANT * pVariantValue);
	HRESULT(STDMETHODCALLTYPE * SetExtendedAttribute) (IWMSPacket * This, DWORD dwValueName, VARIANT VariantValue);
	HRESULT(STDMETHODCALLTYPE * GetExtendedAttributeCount) (IWMSPacket * This, DWORD * pdwAttrs);
	HRESULT(STDMETHODCALLTYPE * CopyAttributes) (IWMSPacket * This, IWMSPacket * pDest, DWORD * pdwAttrNames, DWORD dwNumAttr, BOOL fCopyExtAttr);
	HRESULT(STDMETHODCALLTYPE * AppendHeader) (IWMSPacket * This, IWMSBufferAllocator * pAlloc, DWORD dwHeaderLen, BYTE * pbHeader);
	HRESULT(STDMETHODCALLTYPE * SetInHeader) (IWMSPacket * This, DWORD cbOffset, BYTE * pbData, DWORD cbData);
	END_INTERFACE
}  IWMSPacketVtbl;
interface IWMSPacket
{
	CONST_VTBL struct IWMSPacketVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IWMSPacket_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IWMSPacket_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define IWMSPacket_Release(This)( (This)->lpVtbl -> Release(This) )
#define IWMSPacket_GetAllBuffers(This,dwMaxNumBuffers,pDesc,pdwNumBuffers,dwExFlags)( (This)->lpVtbl -> GetAllBuffers(This,dwMaxNumBuffers,pDesc,pdwNumBuffers,dwExFlags) )
#define IWMSPacket_GetBuffer(This,dwBufferNum,ppBuffer,pdwBufferOffset,pdwBufferLen,pwFlags,dwExFlags)( (This)->lpVtbl -> GetBuffer(This,dwBufferNum,ppBuffer,pdwBufferOffset,pdwBufferLen,pwFlags,dwExFlags) )
#define IWMSPacket_InsertBuffer(This,dwBufferNum,pBuffer,dwBufferOffset,dwBufferLen,wFlags,dwExFlags)( (This)->lpVtbl -> InsertBuffer(This,dwBufferNum,pBuffer,dwBufferOffset,dwBufferLen,wFlags,dwExFlags) )
#define IWMSPacket_RemoveBuffer(This,dwBufferNum)( (This)->lpVtbl -> RemoveBuffer(This,dwBufferNum) )
#define IWMSPacket_RemoveAllBuffers(This)( (This)->lpVtbl -> RemoveAllBuffers(This) )
#define IWMSPacket_GetAttribute(This,dwValueName,pdwValue)( (This)->lpVtbl -> GetAttribute(This,dwValueName,pdwValue) )
#define IWMSPacket_SetAttribute(This,dwValueName,dwValue)( (This)->lpVtbl -> SetAttribute(This,dwValueName,dwValue) )
#define IWMSPacket_GetExtendedAttribute(This,dwValueName,pVariantValue)( (This)->lpVtbl -> GetExtendedAttribute(This,dwValueName,pVariantValue) )
#define IWMSPacket_GetExtendedAttributeByIndex(This,dwIndex,pdwValueName,pVariantValue)( (This)->lpVtbl -> GetExtendedAttributeByIndex(This,dwIndex,pdwValueName,pVariantValue) )
#define IWMSPacket_SetExtendedAttribute(This,dwValueName,VariantValue)( (This)->lpVtbl -> SetExtendedAttribute(This,dwValueName,VariantValue) )
#define IWMSPacket_GetExtendedAttributeCount(This,pdwAttrs)( (This)->lpVtbl -> GetExtendedAttributeCount(This,pdwAttrs) )
#define IWMSPacket_CopyAttributes(This,pDest,pdwAttrNames,dwNumAttr,fCopyExtAttr)( (This)->lpVtbl -> CopyAttributes(This,pDest,pdwAttrNames,dwNumAttr,fCopyExtAttr) )
#define IWMSPacket_AppendHeader(This,pAlloc,dwHeaderLen,pbHeader)( (This)->lpVtbl -> AppendHeader(This,pAlloc,dwHeaderLen,pbHeader) )
#define IWMSPacket_SetInHeader(This,cbOffset,pbData,cbData)( (This)->lpVtbl -> SetInHeader(This,cbOffset,pbData,cbData) )
#endif
#endif
#ifndef __IWMSPacketListCallback_INTERFACE_DEFINED__
#define __IWMSPacketListCallback_INTERFACE_DEFINED__
extern const IID IID_IWMSPacketListCallback;
typedef struct IWMSPacketListCallbackVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IWMSPacketListCallback * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IWMSPacketListCallback * This);
	ULONG(STDMETHODCALLTYPE * Release) (IWMSPacketListCallback * This);
	HRESULT(STDMETHODCALLTYPE * OnReportPacketListStatus) (IWMSPacketListCallback * This, IWMSPacketList * pBuffer, DWORD dwStatus);
	END_INTERFACE
}  IWMSPacketListCallbackVtbl;
interface IWMSPacketListCallback
{
	CONST_VTBL struct IWMSPacketListCallbackVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IWMSPacketListCallback_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IWMSPacketListCallback_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define IWMSPacketListCallback_Release(This)( (This)->lpVtbl -> Release(This) )
#define IWMSPacketListCallback_OnReportPacketListStatus(This,pBuffer,dwStatus)( (This)->lpVtbl -> OnReportPacketListStatus(This,pBuffer,dwStatus) )
#endif
#endif
#ifndef __IWMSPacketList_INTERFACE_DEFINED__
#define __IWMSPacketList_INTERFACE_DEFINED__
typedef struct __MIDL_IWMSPacketList_0001
{
	IWMSPacket *pPacket;
	struct
{
		DWORD dwPacketNum;
		DWORD dwPacketNumBuffers;
		DWORD dwPacketLength;
		DWORD dwPacketSendTimeHi;
		DWORD dwPacketSendTime;
		DWORD dwPacketStreamNum;
		DWORD dwPacketFlags;
		DWORD dwPacketNetSequenceNum;
	} Attrs;
} WMSPACKETDESC;
extern const IID IID_IWMSPacketList;
typedef struct IWMSPacketListVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IWMSPacketList * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IWMSPacketList * This);
	ULONG(STDMETHODCALLTYPE * Release) (IWMSPacketList * This);
	HRESULT(STDMETHODCALLTYPE * AllocateBuffer) (IWMSPacketList * This, DWORD dwMaxBufferSize, INSSBuffer ** ppBuffer);
	HRESULT(STDMETHODCALLTYPE * AllocatePageSizeBuffer) (IWMSPacketList * This, DWORD dwMaxBufferSize, INSSBuffer ** ppBuffer);
	HRESULT(STDMETHODCALLTYPE * GetPacketCount) (IWMSPacketList * This, DWORD * pdwNumPackets);
	HRESULT(STDMETHODCALLTYPE * GetPacket) (IWMSPacketList * This, DWORD dwPacketNum, IWMSPacket ** ppPacket, DWORD dwExFlags);
	HRESULT(STDMETHODCALLTYPE * GetAllPackets) (IWMSPacketList * This, DWORD dwFirstPacket, DWORD dwMaxNumPackets, WMSPACKETDESC * pPacketDesc, IWMSPacket ** ppPacket, DWORD * pdwDescNum, DWORD dwExFlags);
	HRESULT(STDMETHODCALLTYPE * InsertPacket) (IWMSPacketList * This, DWORD dwPacketNum, IWMSPacket * pPacket, DWORD dwExFlags);
	HRESULT(STDMETHODCALLTYPE * AppendPacket) (IWMSPacketList * This, IWMSPacket * pPacket, DWORD dwExFlags);
	HRESULT(STDMETHODCALLTYPE * RemovePacket) (IWMSPacketList * This, DWORD dwPacketNum);
	HRESULT(STDMETHODCALLTYPE * RemoveAllPackets) (IWMSPacketList * This, DWORD dwExFlags);
	HRESULT(STDMETHODCALLTYPE * GetAttribute) (IWMSPacketList * This, DWORD dwValueName, DWORD * pdwValue);
	HRESULT(STDMETHODCALLTYPE * SetAttribute) (IWMSPacketList * This, DWORD dwValueName, DWORD dwValue);
	HRESULT(STDMETHODCALLTYPE * GetStreamSignalParam) (IWMSPacketList * This, VARIANT * pParameter);
	HRESULT(STDMETHODCALLTYPE * SetStreamSignalParam) (IWMSPacketList * This, VARIANT * pParameter);
	HRESULT(STDMETHODCALLTYPE * GetPacketParser) (IWMSPacketList * This, IWMSPacketParser ** ppSource, DWORD dwExFlags);
	HRESULT(STDMETHODCALLTYPE * SetPacketParser) (IWMSPacketList * This, IWMSPacketParser * pSource);
	HRESULT(STDMETHODCALLTYPE * GetBuffer) (IWMSPacketList * This, INSSBuffer ** ppBuffer, DWORD dwExFlags);
	HRESULT(STDMETHODCALLTYPE * SetBuffer) (IWMSPacketList * This, INSSBuffer * pBuffer);
	HRESULT(STDMETHODCALLTYPE * SetCompletionCallback) (IWMSPacketList * This, IWMSPacketListCallback * pCallback);
	HRESULT(STDMETHODCALLTYPE * GetCompletionCallback) (IWMSPacketList * This, IWMSPacketListCallback ** ppCallback);
	HRESULT(STDMETHODCALLTYPE * GetExtendedAttribute) (IWMSPacketList * This, DWORD dwValueName, VARIANT * pVariantValue);
	HRESULT(STDMETHODCALLTYPE * GetExtendedAttributeByIndex) (IWMSPacketList * This, DWORD dwIndex, DWORD * pdwValueName, VARIANT * pVariantValue);
	HRESULT(STDMETHODCALLTYPE * SetExtendedAttribute) (IWMSPacketList * This, DWORD dwValueName, VARIANT VariantValue);
	HRESULT(STDMETHODCALLTYPE * GetExtendedAttributeCount) (IWMSPacketList * This, DWORD * pdwAttrs);
	HRESULT(STDMETHODCALLTYPE * ReportStatus) (IWMSPacketList * This, DWORD dwStatus);
	HRESULT(STDMETHODCALLTYPE * ClonePacketList) (IWMSPacketList * This, IWMSPacketList ** ppClonedPacketList);
	HRESULT(STDMETHODCALLTYPE * AllocPacket) (IWMSPacketList * This, IWMSPacket ** ppPacket);
	END_INTERFACE
}  IWMSPacketListVtbl;
interface IWMSPacketList
{
	CONST_VTBL struct IWMSPacketListVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IWMSPacketList_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IWMSPacketList_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define IWMSPacketList_Release(This)( (This)->lpVtbl -> Release(This) )
#define IWMSPacketList_AllocateBuffer(This,dwMaxBufferSize,ppBuffer)( (This)->lpVtbl -> AllocateBuffer(This,dwMaxBufferSize,ppBuffer) )
#define IWMSPacketList_AllocatePageSizeBuffer(This,dwMaxBufferSize,ppBuffer)( (This)->lpVtbl -> AllocatePageSizeBuffer(This,dwMaxBufferSize,ppBuffer) )
#define IWMSPacketList_GetPacketCount(This,pdwNumPackets)( (This)->lpVtbl -> GetPacketCount(This,pdwNumPackets) )
#define IWMSPacketList_GetPacket(This,dwPacketNum,ppPacket,dwExFlags)( (This)->lpVtbl -> GetPacket(This,dwPacketNum,ppPacket,dwExFlags) )
#define IWMSPacketList_GetAllPackets(This,dwFirstPacket,dwMaxNumPackets,pPacketDesc,ppPacket,pdwDescNum,dwExFlags)( (This)->lpVtbl -> GetAllPackets(This,dwFirstPacket,dwMaxNumPackets,pPacketDesc,ppPacket,pdwDescNum,dwExFlags) )
#define IWMSPacketList_InsertPacket(This,dwPacketNum,pPacket,dwExFlags)( (This)->lpVtbl -> InsertPacket(This,dwPacketNum,pPacket,dwExFlags) )
#define IWMSPacketList_AppendPacket(This,pPacket,dwExFlags)( (This)->lpVtbl -> AppendPacket(This,pPacket,dwExFlags) )
#define IWMSPacketList_RemovePacket(This,dwPacketNum)( (This)->lpVtbl -> RemovePacket(This,dwPacketNum) )
#define IWMSPacketList_RemoveAllPackets(This,dwExFlags)( (This)->lpVtbl -> RemoveAllPackets(This,dwExFlags) )
#define IWMSPacketList_GetAttribute(This,dwValueName,pdwValue)( (This)->lpVtbl -> GetAttribute(This,dwValueName,pdwValue) )
#define IWMSPacketList_SetAttribute(This,dwValueName,dwValue)( (This)->lpVtbl -> SetAttribute(This,dwValueName,dwValue) )
#define IWMSPacketList_GetStreamSignalParam(This,pParameter)( (This)->lpVtbl -> GetStreamSignalParam(This,pParameter) )
#define IWMSPacketList_SetStreamSignalParam(This,pParameter)( (This)->lpVtbl -> SetStreamSignalParam(This,pParameter) )
#define IWMSPacketList_GetPacketParser(This,ppSource,dwExFlags)( (This)->lpVtbl -> GetPacketParser(This,ppSource,dwExFlags) )
#define IWMSPacketList_SetPacketParser(This,pSource)( (This)->lpVtbl -> SetPacketParser(This,pSource) )
#define IWMSPacketList_GetBuffer(This,ppBuffer,dwExFlags)( (This)->lpVtbl -> GetBuffer(This,ppBuffer,dwExFlags) )
#define IWMSPacketList_SetBuffer(This,pBuffer)( (This)->lpVtbl -> SetBuffer(This,pBuffer) )
#define IWMSPacketList_SetCompletionCallback(This,pCallback)( (This)->lpVtbl -> SetCompletionCallback(This,pCallback) )
#define IWMSPacketList_GetCompletionCallback(This,ppCallback)( (This)->lpVtbl -> GetCompletionCallback(This,ppCallback) )
#define IWMSPacketList_GetExtendedAttribute(This,dwValueName,pVariantValue)( (This)->lpVtbl -> GetExtendedAttribute(This,dwValueName,pVariantValue) )
#define IWMSPacketList_GetExtendedAttributeByIndex(This,dwIndex,pdwValueName,pVariantValue)( (This)->lpVtbl -> GetExtendedAttributeByIndex(This,dwIndex,pdwValueName,pVariantValue) )
#define IWMSPacketList_SetExtendedAttribute(This,dwValueName,VariantValue)( (This)->lpVtbl -> SetExtendedAttribute(This,dwValueName,VariantValue) )
#define IWMSPacketList_GetExtendedAttributeCount(This,pdwAttrs)( (This)->lpVtbl -> GetExtendedAttributeCount(This,pdwAttrs) )
#define IWMSPacketList_ReportStatus(This,dwStatus)( (This)->lpVtbl -> ReportStatus(This,dwStatus) )
#define IWMSPacketList_ClonePacketList(This,ppClonedPacketList)( (This)->lpVtbl -> ClonePacketList(This,ppClonedPacketList) )
#define IWMSPacketList_AllocPacket(This,ppPacket)( (This)->lpVtbl -> AllocPacket(This,ppPacket) )
#endif
#endif
#ifndef __IWMSPacketParser_INTERFACE_DEFINED__
#define __IWMSPacketParser_INTERFACE_DEFINED__
extern const IID IID_IWMSPacketParser;
typedef struct IWMSPacketParserVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IWMSPacketParser * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IWMSPacketParser * This);
	ULONG(STDMETHODCALLTYPE * Release) (IWMSPacketParser * This);
	HRESULT(STDMETHODCALLTYPE * UpdatePacket) (IWMSPacketParser * This, IWMSPacket * pPacket);
	HRESULT(STDMETHODCALLTYPE * CombinePackets) (IWMSPacketParser * This, DWORD dwNumInputPackets, IWMSPacket ** pInputPacketArray, IWMSPacketList * pPacketList, DWORD dwFlags);
	END_INTERFACE
}  IWMSPacketParserVtbl;
interface IWMSPacketParser
{
	CONST_VTBL struct IWMSPacketParserVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IWMSPacketParser_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IWMSPacketParser_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define IWMSPacketParser_Release(This)( (This)->lpVtbl -> Release(This) )
#define IWMSPacketParser_UpdatePacket(This,pPacket)( (This)->lpVtbl -> UpdatePacket(This,pPacket) )
#define IWMSPacketParser_CombinePackets(This,dwNumInputPackets,pInputPacketArray,pPacketList,dwFlags)( (This)->lpVtbl -> CombinePackets(This,dwNumInputPackets,pInputPacketArray,pPacketList,dwFlags) )
#endif
#endif
typedef enum WMS_STREAM_SIGNAL_TYPE
{
	WMS_NO_STREAM_CHANGE = 0,
	WMS_STREAM_ERROR = (WMS_NO_STREAM_CHANGE + 1),
	WMS_STREAM_ERROR_HANDLED_BY_PLAYLIST = (WMS_STREAM_ERROR + 1),
	WMS_PLAYLIST_CHANGED = (WMS_STREAM_ERROR_HANDLED_BY_PLAYLIST + 1),
	WMS_END_OF_STREAM = (WMS_PLAYLIST_CHANGED + 1),
	WMS_PLAYLIST_STREAM_QUEUED = (WMS_END_OF_STREAM + 1),
	WMS_BEGIN_NO_DATA_PERIOD = (WMS_PLAYLIST_STREAM_QUEUED + 1),
	WMS_PLAYLIST_EVENT = (WMS_BEGIN_NO_DATA_PERIOD + 1),
	WMS_PLAYLIST_CUE_EVENT = (WMS_PLAYLIST_EVENT + 1),
	WMS_PLAYLIST_UNCUE_EVENT = (WMS_PLAYLIST_CUE_EVENT + 1),
	WMS_PLAYLIST_BEGIN_ELEMENT_EVENT = (WMS_PLAYLIST_UNCUE_EVENT + 1),
	WMS_PLAYLIST_END_ELEMENT_EVENT = (WMS_PLAYLIST_BEGIN_ELEMENT_EVENT + 1),
	WMS_STREAM_SWITCH_DONE = (WMS_PLAYLIST_END_ELEMENT_EVENT + 1),
	WMS_RESET_TO_REAL_TIME = (WMS_STREAM_SWITCH_DONE + 1),
	WMS_DATA_LOSS_DETECTED = (WMS_RESET_TO_REAL_TIME + 1),
	WMS_REUSE_ACCEL_PARAMS = (WMS_DATA_LOSS_DETECTED + 1)
} WMS_STREAM_SIGNAL_TYPE;
typedef enum WMS_STREAM_SIGNAL_EOS_TYPE
{
	WMS_STREAM_SIGNAL_EOS_RESERVED = 1,
	WMS_STREAM_SIGNAL_EOS_RECEDING = 2
} WMS_STREAM_SIGNAL_EOS_TYPE;
extern RPC_IF_HANDLE __MIDL_itf_wmspacket_0000_0004_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_wmspacket_0000_0004_v0_0_s_ifspec;
#ifndef __IWMSStreamSignalHandler_INTERFACE_DEFINED__
#define __IWMSStreamSignalHandler_INTERFACE_DEFINED__
extern const IID IID_IWMSStreamSignalHandler;
typedef struct IWMSStreamSignalHandlerVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IWMSStreamSignalHandler * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IWMSStreamSignalHandler * This);
	ULONG(STDMETHODCALLTYPE * Release) (IWMSStreamSignalHandler * This);
	HRESULT(STDMETHODCALLTYPE * OnStreamSignal) (IWMSStreamSignalHandler * This, DWORD dwSignalType, VARIANT * pSignalParameter, IWMSContext * pPresentation);
	END_INTERFACE
}  IWMSStreamSignalHandlerVtbl;
interface IWMSStreamSignalHandler
{
	CONST_VTBL struct IWMSStreamSignalHandlerVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IWMSStreamSignalHandler_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IWMSStreamSignalHandler_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define IWMSStreamSignalHandler_Release(This)( (This)->lpVtbl -> Release(This) )
#define IWMSStreamSignalHandler_OnStreamSignal(This,dwSignalType,pSignalParameter,pPresentation)( (This)->lpVtbl -> OnStreamSignal(This,dwSignalType,pSignalParameter,pPresentation) )
#endif
#endif
unsigned long __RPC_USER VARIANT_UserSize(unsigned long *, unsigned long, VARIANT *);
unsigned char *__RPC_USER VARIANT_UserMarshal(unsigned long *, unsigned char *, VARIANT *);
unsigned char *__RPC_USER VARIANT_UserUnmarshal(unsigned long *, unsigned char *, VARIANT *);
void __RPC_USER VARIANT_UserFree(unsigned long *, VARIANT *);
unsigned long __RPC_USER VARIANT_UserSize64(unsigned long *, unsigned long, VARIANT *);
unsigned char *__RPC_USER VARIANT_UserMarshal64(unsigned long *, unsigned char *, VARIANT *);
unsigned char *__RPC_USER VARIANT_UserUnmarshal64(unsigned long *, unsigned char *, VARIANT *);
void __RPC_USER VARIANT_UserFree64(unsigned long *, VARIANT *);
#endif

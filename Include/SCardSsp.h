/*+@@file@@----------------------------------------------------------------*//*!
 \file		SCardSsp.h
 \par Description 
            Extension and update of headers for PellesC compiler suite.
 \par Project: 
            PellesC Headers extension
 \date		Created  on Fri Sep 16 22:19:36 2016
 \date		Modified on Fri Sep 16 22:19:36 2016
 \author	frankie
\*//*-@@file@@----------------------------------------------------------------*/

#ifndef __REQUIRED_RPCNDR_H_VERSION__
#define __REQUIRED_RPCNDR_H_VERSION__ 475
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
#ifndef __scardssp_h__
#define __scardssp_h__
#if __POCC__ >= 500
#pragma once
#endif
#ifndef __IByteBuffer_FWD_DEFINED__
#define __IByteBuffer_FWD_DEFINED__
typedef interface IByteBuffer IByteBuffer;
#endif
#ifndef __ISCardTypeConv_FWD_DEFINED__
#define __ISCardTypeConv_FWD_DEFINED__
typedef interface ISCardTypeConv ISCardTypeConv;
#endif
#ifndef __ISCardCmd_FWD_DEFINED__
#define __ISCardCmd_FWD_DEFINED__
typedef interface ISCardCmd ISCardCmd;
#endif
#ifndef __ISCardISO7816_FWD_DEFINED__
#define __ISCardISO7816_FWD_DEFINED__
typedef interface ISCardISO7816 ISCardISO7816;
#endif
#ifndef __ISCard_FWD_DEFINED__
#define __ISCard_FWD_DEFINED__
typedef interface ISCard ISCard;
#endif
#ifndef __ISCardDatabase_FWD_DEFINED__
#define __ISCardDatabase_FWD_DEFINED__
typedef interface ISCardDatabase ISCardDatabase;
#endif
#ifndef __ISCardLocate_FWD_DEFINED__
#define __ISCardLocate_FWD_DEFINED__
typedef interface ISCardLocate ISCardLocate;
#endif
#ifndef __CByteBuffer_FWD_DEFINED__
#define __CByteBuffer_FWD_DEFINED__
typedef struct CByteBuffer CByteBuffer;
#endif
#ifndef __CSCardTypeConv_FWD_DEFINED__
#define __CSCardTypeConv_FWD_DEFINED__
typedef struct CSCardTypeConv CSCardTypeConv;
#endif
#ifndef __CSCardCmd_FWD_DEFINED__
#define __CSCardCmd_FWD_DEFINED__
typedef struct CSCardCmd CSCardCmd;
#endif
#ifndef __CSCardISO7816_FWD_DEFINED__
#define __CSCardISO7816_FWD_DEFINED__
typedef struct CSCardISO7816 CSCardISO7816;
#endif
#ifndef __CSCard_FWD_DEFINED__
#define __CSCard_FWD_DEFINED__
typedef struct CSCard CSCard;
#endif
#ifndef __CSCardDatabase_FWD_DEFINED__
#define __CSCardDatabase_FWD_DEFINED__
typedef struct CSCardDatabase CSCardDatabase;
#endif
#ifndef __CSCardLocate_FWD_DEFINED__
#define __CSCardLocate_FWD_DEFINED__
typedef struct CSCardLocate CSCardLocate;
#endif
#include <oaidl.h>
#include <ocidl.h>
void __RPC_FAR *__RPC_USER MIDL_user_allocate(size_t);
void __RPC_USER MIDL_user_free(void __RPC_FAR *);
#ifndef _NULL_DEFINED
#define _NULL_DEFINED
#endif
#ifndef _BYTE_DEFINED
#define _BYTE_DEFINED
typedef unsigned char BYTE;
#endif
#ifndef _LPBYTE_DEFINED
#define _LPBYTE_DEFINED
typedef BYTE __RPC_FAR *LPBYTE;
#endif
#ifndef _LPCBYTE_DEFINED
#define _LPCBYTE_DEFINED
typedef const BYTE __RPC_FAR *LPCBYTE;
#endif
#ifndef _HSCARD_DEFINED
#define _HSCARD_DEFINED
typedef ULONG_PTR HSCARD;
#endif
#ifndef _LPHSCARD_DEFINED
#define _LPHSCARD_DEFINED
typedef HSCARD __RPC_FAR *PHSCARD;
typedef HSCARD __RPC_FAR *LPHSCARD;
#endif
#ifndef _HSCARDCONTEXT_DEFINED
#define _HSCARDCONTEXT_DEFINED
typedef ULONG_PTR HSCARDCONTEXT;
#endif
#ifndef _LPHSCARDCONTEXT_DEFINED
#define _LPHSCARDCONTEXT_DEFINED
typedef VOID __RPC_FAR *PHSCARDCONTEXT;
typedef VOID __RPC_FAR *LPHSCARDCONTEXT;
#endif
#ifndef _BYTEARRAY_DEFINED
#define _BYTEARRAY_DEFINED
typedef struct tagBYTEARRAY
{
	HGLOBAL hMem;
	DWORD dwSize;
	LPBYTE pbyData;
} BYTEARRAY;
#define _CB_BYTEARRAY_DEFINED
#define CB_BYTEARRAY (sizeof(BYTEARRAY))
#define _PBYTEARRAY_DEFINED
typedef BYTEARRAY __RPC_FAR *PBYTEARRAY;
#define _PCBYTEARRAY_DEFINED
typedef const BYTEARRAY __RPC_FAR *PCBYTEARRAY;
#define _LPBYTEARRAY_DEFINED
typedef BYTEARRAY __RPC_FAR *LPBYTEARRAY;
#define _LPCBYTEARRAY_DEFINED
typedef const BYTEARRAY __RPC_FAR *LPCBYTEARRAY;
#endif
#ifndef _STATSTRUCT
#define _STATSTRUCT
typedef struct tagSTATSTRUCT
{
	LONG type;
	LONG cbSize;
	LONG grfMode;
	LONG grfLocksSupported;
	LONG grfStateBits;
} STATSTRUCT;
#define _CB_STATSTRUCT_DEFINED
#define CB_STATSTRUCT    (sizeof(STATSTRUCT))
#define _LPSTATSTRUCT_DEFINED
typedef STATSTRUCT __RPC_FAR *LPSTATSTRUCT;
#endif
#ifndef _ISO_APDU_TYPE
#define _ISO_APDU_TYPE
typedef enum tagISO_APDU_TYPE
{
	ISO_CASE_1 = 1,
	ISO_CASE_2 = 2,
	ISO_CASE_3 = 3,
	ISO_CASE_4 = 4
} ISO_APDU_TYPE;
#endif
#ifndef _SCARD_SHARE_MODES_DEFINED
#define _SCARD_SHARE_MODES_DEFINED
typedef enum tagSCARD_SHARE_MODES
{
	EXCLUSIVE = 1,
	SHARED = 2
} SCARD_SHARE_MODES;
#endif
#ifndef _SCARD_DISPOSITIONS_DEFINED
#define _SCARD_DISPOSITIONS_DEFINED
typedef enum tagSCARD_DISPOSITIONS
{
	LEAVE = 0,
	RESET = 1,
	UNPOWER = 2,
	EJECT = 3
} SCARD_DISPOSITIONS;
#endif
#ifndef _SCARD_STATES_DEFINED
#define _SCARD_STATES_DEFINED
typedef enum tagSCARD_STATES
{
	ABSENT = 1,
	PRESENT = 2,
	SWALLOWED = 3,
	POWERED = 4,
	NEGOTIABLEMODE = 5,
	SPECIFICMODE = 6
} SCARD_STATES;
#endif
#ifndef _SCARD_PROTOCOLS_DEFINED
#define _SCARD_PROTOCOLS_DEFINED
typedef enum tagSCARD_PROTOCOLS
{
	T0 = 0x1,
	T1 = 0x2,
	RAW = 0xff
} SCARD_PROTOCOLS;
#endif
#ifndef _SCARD_INFO
#define _SCARD_INFO
typedef struct tagSCARDINFO
{
	HSCARD hCard;
	HSCARDCONTEXT hContext;
	SCARD_PROTOCOLS ActiveProtocol;
	SCARD_SHARE_MODES ShareMode;
	LONG_PTR hwndOwner;
	LONG_PTR lpfnConnectProc;
	LONG_PTR lpfnCheckProc;
	LONG_PTR lpfnDisconnectProc;
} SCARDINFO;
#define _LPSCARDINFO
typedef SCARDINFO __RPC_FAR *PSCARDINFO;
typedef SCARDINFO __RPC_FAR *LPSCARDINFO;
#endif
#ifndef _LPBYTEBUFFER_DEFINED
#define _LPBYTEBUFFER_DEFINED
extern RPC_IF_HANDLE __MIDL_itf_scardssp_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_scardssp_0000_v0_0_s_ifspec;
#ifndef __IByteBuffer_INTERFACE_DEFINED__
#define __IByteBuffer_INTERFACE_DEFINED__
typedef IByteBuffer __RPC_FAR *LPBYTEBUFFER;
typedef const IByteBuffer __RPC_FAR *LPCBYTEBUFFER;
extern const IID IID_IByteBuffer;
typedef struct IByteBufferVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE __RPC_FAR * QueryInterface) (IByteBuffer __RPC_FAR * This, REFIID riid, void __RPC_FAR * __RPC_FAR * ppvObject);
	ULONG(STDMETHODCALLTYPE __RPC_FAR * AddRef) (IByteBuffer __RPC_FAR * This);
	ULONG(STDMETHODCALLTYPE __RPC_FAR * Release) (IByteBuffer __RPC_FAR * This);
	HRESULT(STDMETHODCALLTYPE __RPC_FAR * GetTypeInfoCount) (IByteBuffer __RPC_FAR * This, UINT __RPC_FAR * pctinfo);
	HRESULT(STDMETHODCALLTYPE __RPC_FAR * GetTypeInfo) (IByteBuffer __RPC_FAR * This, UINT iTInfo, LCID lcid, ITypeInfo __RPC_FAR * __RPC_FAR * ppTInfo);
	HRESULT(STDMETHODCALLTYPE __RPC_FAR * GetIDsOfNames) (IByteBuffer __RPC_FAR * This, REFIID riid, LPOLESTR __RPC_FAR * rgszNames, UINT cNames, LCID lcid, DISPID __RPC_FAR * rgDispId);
	HRESULT(STDMETHODCALLTYPE __RPC_FAR * Invoke) (IByteBuffer __RPC_FAR * This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS __RPC_FAR * pDispParams, VARIANT __RPC_FAR * pVarResult, EXCEPINFO __RPC_FAR * pExcepInfo, UINT __RPC_FAR * puArgErr);
	HRESULT(STDMETHODCALLTYPE __RPC_FAR * get_Stream) (IByteBuffer __RPC_FAR * This, LPSTREAM __RPC_FAR * ppStream);
	HRESULT(STDMETHODCALLTYPE __RPC_FAR * put_Stream) (IByteBuffer __RPC_FAR * This, LPSTREAM pStream);
	HRESULT(STDMETHODCALLTYPE __RPC_FAR * Clone) (IByteBuffer __RPC_FAR * This, LPBYTEBUFFER __RPC_FAR * ppByteBuffer);
	HRESULT(STDMETHODCALLTYPE __RPC_FAR * Commit) (IByteBuffer __RPC_FAR * This, LONG grfCommitFlags);
	HRESULT(STDMETHODCALLTYPE __RPC_FAR * CopyTo) (IByteBuffer __RPC_FAR * This, LPBYTEBUFFER __RPC_FAR * ppByteBuffer, LONG cb, LONG __RPC_FAR * pcbRead, LONG __RPC_FAR * pcbWritten);
	HRESULT(STDMETHODCALLTYPE __RPC_FAR * Initialize) (IByteBuffer __RPC_FAR * This, LONG lSize, BYTE __RPC_FAR * pData);
	HRESULT(STDMETHODCALLTYPE __RPC_FAR * LockRegion) (IByteBuffer __RPC_FAR * This, LONG libOffset, LONG cb, LONG dwLockType);
	HRESULT(STDMETHODCALLTYPE __RPC_FAR * Read) (IByteBuffer __RPC_FAR * This, BYTE __RPC_FAR * pByte, LONG cb, LONG __RPC_FAR * pcbRead);
	HRESULT(STDMETHODCALLTYPE __RPC_FAR * Revert) (IByteBuffer __RPC_FAR * This);
	HRESULT(STDMETHODCALLTYPE __RPC_FAR * Seek) (IByteBuffer __RPC_FAR * This, LONG dLibMove, LONG dwOrigin, LONG __RPC_FAR * pLibnewPosition);
	HRESULT(STDMETHODCALLTYPE __RPC_FAR * SetSize) (IByteBuffer __RPC_FAR * This, LONG libNewSize);
	HRESULT(STDMETHODCALLTYPE __RPC_FAR * Stat) (IByteBuffer __RPC_FAR * This, LPSTATSTRUCT pstatstg, LONG grfStatFlag);
	HRESULT(STDMETHODCALLTYPE __RPC_FAR * UnlockRegion) (IByteBuffer __RPC_FAR * This, LONG libOffset, LONG cb, LONG dwLockType);
	HRESULT(STDMETHODCALLTYPE __RPC_FAR * Write) (IByteBuffer __RPC_FAR * This, BYTE __RPC_FAR * pByte, LONG cb, LONG __RPC_FAR * pcbWritten);
	END_INTERFACE
}  IByteBufferVtbl;
interface IByteBuffer
{
	CONST_VTBL struct IByteBufferVtbl __RPC_FAR *lpVtbl;
};
#ifdef COBJMACROS
#define IByteBuffer_QueryInterface(This,riid,ppvObject) (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)
#define IByteBuffer_AddRef(This) (This)->lpVtbl -> AddRef(This)
#define IByteBuffer_Release(This) (This)->lpVtbl -> Release(This)
#define IByteBuffer_GetTypeInfoCount(This,pctinfo) (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo)
#define IByteBuffer_GetTypeInfo(This,iTInfo,lcid,ppTInfo) (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo)
#define IByteBuffer_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)
#define IByteBuffer_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)
#define IByteBuffer_get_Stream(This,ppStream) (This)->lpVtbl -> get_Stream(This,ppStream)
#define IByteBuffer_put_Stream(This,pStream) (This)->lpVtbl -> put_Stream(This,pStream)
#define IByteBuffer_Clone(This,ppByteBuffer) (This)->lpVtbl -> Clone(This,ppByteBuffer)
#define IByteBuffer_Commit(This,grfCommitFlags) (This)->lpVtbl -> Commit(This,grfCommitFlags)
#define IByteBuffer_CopyTo(This,ppByteBuffer,cb,pcbRead,pcbWritten) (This)->lpVtbl -> CopyTo(This,ppByteBuffer,cb,pcbRead,pcbWritten)
#define IByteBuffer_Initialize(This,lSize,pData) (This)->lpVtbl -> Initialize(This,lSize,pData)
#define IByteBuffer_LockRegion(This,libOffset,cb,dwLockType) (This)->lpVtbl -> LockRegion(This,libOffset,cb,dwLockType)
#define IByteBuffer_Read(This,pByte,cb,pcbRead) (This)->lpVtbl -> Read(This,pByte,cb,pcbRead)
#define IByteBuffer_Revert(This) (This)->lpVtbl -> Revert(This)
#define IByteBuffer_Seek(This,dLibMove,dwOrigin,pLibnewPosition) (This)->lpVtbl -> Seek(This,dLibMove,dwOrigin,pLibnewPosition)
#define IByteBuffer_SetSize(This,libNewSize) (This)->lpVtbl -> SetSize(This,libNewSize)
#define IByteBuffer_Stat(This,pstatstg,grfStatFlag) (This)->lpVtbl -> Stat(This,pstatstg,grfStatFlag)
#define IByteBuffer_UnlockRegion(This,libOffset,cb,dwLockType) (This)->lpVtbl -> UnlockRegion(This,libOffset,cb,dwLockType)
#define IByteBuffer_Write(This,pByte,cb,pcbWritten) (This)->lpVtbl -> Write(This,pByte,cb,pcbWritten)
#endif
HRESULT STDMETHODCALLTYPE IByteBuffer_get_Stream_Proxy(IByteBuffer __RPC_FAR *This, LPSTREAM __RPC_FAR *ppStream);
void __RPC_STUB IByteBuffer_get_Stream_Stub(IRpcStubBuffer *This, IRpcChannelBuffer *_pRpcChannelBuffer, PRPC_MESSAGE _pRpcMessage, DWORD *_pdwStubPhase);
HRESULT STDMETHODCALLTYPE IByteBuffer_put_Stream_Proxy(IByteBuffer __RPC_FAR *This, LPSTREAM pStream);
void __RPC_STUB IByteBuffer_put_Stream_Stub(IRpcStubBuffer *This, IRpcChannelBuffer *_pRpcChannelBuffer, PRPC_MESSAGE _pRpcMessage, DWORD *_pdwStubPhase);
HRESULT STDMETHODCALLTYPE IByteBuffer_Clone_Proxy(IByteBuffer __RPC_FAR *This, LPBYTEBUFFER __RPC_FAR *ppByteBuffer);
void __RPC_STUB IByteBuffer_Clone_Stub(IRpcStubBuffer *This, IRpcChannelBuffer *_pRpcChannelBuffer, PRPC_MESSAGE _pRpcMessage, DWORD *_pdwStubPhase);
HRESULT STDMETHODCALLTYPE IByteBuffer_Commit_Proxy(IByteBuffer __RPC_FAR *This, LONG grfCommitFlags);
void __RPC_STUB IByteBuffer_Commit_Stub(IRpcStubBuffer *This, IRpcChannelBuffer *_pRpcChannelBuffer, PRPC_MESSAGE _pRpcMessage, DWORD *_pdwStubPhase);
HRESULT STDMETHODCALLTYPE IByteBuffer_CopyTo_Proxy(IByteBuffer __RPC_FAR *This, LPBYTEBUFFER __RPC_FAR *ppByteBuffer, LONG cb, LONG __RPC_FAR *pcbRead, LONG __RPC_FAR *pcbWritten);
void __RPC_STUB IByteBuffer_CopyTo_Stub(IRpcStubBuffer *This, IRpcChannelBuffer *_pRpcChannelBuffer, PRPC_MESSAGE _pRpcMessage, DWORD *_pdwStubPhase);
HRESULT STDMETHODCALLTYPE IByteBuffer_Initialize_Proxy(IByteBuffer __RPC_FAR *This, LONG lSize, BYTE __RPC_FAR *pData);
void __RPC_STUB IByteBuffer_Initialize_Stub(IRpcStubBuffer *This, IRpcChannelBuffer *_pRpcChannelBuffer, PRPC_MESSAGE _pRpcMessage, DWORD *_pdwStubPhase);
HRESULT STDMETHODCALLTYPE IByteBuffer_LockRegion_Proxy(IByteBuffer __RPC_FAR *This, LONG libOffset, LONG cb, LONG dwLockType);
void __RPC_STUB IByteBuffer_LockRegion_Stub(IRpcStubBuffer *This, IRpcChannelBuffer *_pRpcChannelBuffer, PRPC_MESSAGE _pRpcMessage, DWORD *_pdwStubPhase);
HRESULT STDMETHODCALLTYPE IByteBuffer_Read_Proxy(IByteBuffer __RPC_FAR *This, BYTE __RPC_FAR *pByte, LONG cb, LONG __RPC_FAR *pcbRead);
void __RPC_STUB IByteBuffer_Read_Stub(IRpcStubBuffer *This, IRpcChannelBuffer *_pRpcChannelBuffer, PRPC_MESSAGE _pRpcMessage, DWORD *_pdwStubPhase);
HRESULT STDMETHODCALLTYPE IByteBuffer_Revert_Proxy(IByteBuffer __RPC_FAR *This);
void __RPC_STUB IByteBuffer_Revert_Stub(IRpcStubBuffer *This, IRpcChannelBuffer *_pRpcChannelBuffer, PRPC_MESSAGE _pRpcMessage, DWORD *_pdwStubPhase);
HRESULT STDMETHODCALLTYPE IByteBuffer_Seek_Proxy(IByteBuffer __RPC_FAR *This, LONG dLibMove, LONG dwOrigin, LONG __RPC_FAR *pLibnewPosition);
void __RPC_STUB IByteBuffer_Seek_Stub(IRpcStubBuffer *This, IRpcChannelBuffer *_pRpcChannelBuffer, PRPC_MESSAGE _pRpcMessage, DWORD *_pdwStubPhase);
HRESULT STDMETHODCALLTYPE IByteBuffer_SetSize_Proxy(IByteBuffer __RPC_FAR *This, LONG libNewSize);
void __RPC_STUB IByteBuffer_SetSize_Stub(IRpcStubBuffer *This, IRpcChannelBuffer *_pRpcChannelBuffer, PRPC_MESSAGE _pRpcMessage, DWORD *_pdwStubPhase);
HRESULT STDMETHODCALLTYPE IByteBuffer_Stat_Proxy(IByteBuffer __RPC_FAR *This, LPSTATSTRUCT pstatstg, LONG grfStatFlag);
void __RPC_STUB IByteBuffer_Stat_Stub(IRpcStubBuffer *This, IRpcChannelBuffer *_pRpcChannelBuffer, PRPC_MESSAGE _pRpcMessage, DWORD *_pdwStubPhase);
HRESULT STDMETHODCALLTYPE IByteBuffer_UnlockRegion_Proxy(IByteBuffer __RPC_FAR *This, LONG libOffset, LONG cb, LONG dwLockType);
void __RPC_STUB IByteBuffer_UnlockRegion_Stub(IRpcStubBuffer *This, IRpcChannelBuffer *_pRpcChannelBuffer, PRPC_MESSAGE _pRpcMessage, DWORD *_pdwStubPhase);
HRESULT STDMETHODCALLTYPE IByteBuffer_Write_Proxy(IByteBuffer __RPC_FAR *This, BYTE __RPC_FAR *pByte, LONG cb, LONG __RPC_FAR *pcbWritten);
void __RPC_STUB IByteBuffer_Write_Stub(IRpcStubBuffer *This, IRpcChannelBuffer *_pRpcChannelBuffer, PRPC_MESSAGE _pRpcMessage, DWORD *_pdwStubPhase);
#endif
#endif
#ifndef _LPSCARDTYPECONV_DEFINED
#define _LPSCARDTYPECONV_DEFINED
extern RPC_IF_HANDLE __MIDL_itf_scardssp_0244_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_scardssp_0244_v0_0_s_ifspec;
#ifndef __ISCardTypeConv_INTERFACE_DEFINED__
#define __ISCardTypeConv_INTERFACE_DEFINED__
typedef ISCardTypeConv __RPC_FAR *LPSCARDTYPECONV;
extern const IID IID_ISCardTypeConv;
typedef struct ISCardTypeConvVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE __RPC_FAR * QueryInterface) (ISCardTypeConv __RPC_FAR * This, REFIID riid, void __RPC_FAR * __RPC_FAR * ppvObject);
	ULONG(STDMETHODCALLTYPE __RPC_FAR * AddRef) (ISCardTypeConv __RPC_FAR * This);
	ULONG(STDMETHODCALLTYPE __RPC_FAR * Release) (ISCardTypeConv __RPC_FAR * This);
	HRESULT(STDMETHODCALLTYPE __RPC_FAR * GetTypeInfoCount) (ISCardTypeConv __RPC_FAR * This, UINT __RPC_FAR * pctinfo);
	HRESULT(STDMETHODCALLTYPE __RPC_FAR * GetTypeInfo) (ISCardTypeConv __RPC_FAR * This, UINT iTInfo, LCID lcid, ITypeInfo __RPC_FAR * __RPC_FAR * ppTInfo);
	HRESULT(STDMETHODCALLTYPE __RPC_FAR * GetIDsOfNames) (ISCardTypeConv __RPC_FAR * This, REFIID riid, LPOLESTR __RPC_FAR * rgszNames, UINT cNames, LCID lcid, DISPID __RPC_FAR * rgDispId);
	HRESULT(STDMETHODCALLTYPE __RPC_FAR * Invoke) (ISCardTypeConv __RPC_FAR * This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS __RPC_FAR * pDispParams, VARIANT __RPC_FAR * pVarResult, EXCEPINFO __RPC_FAR * pExcepInfo, UINT __RPC_FAR * puArgErr);
	HRESULT(STDMETHODCALLTYPE __RPC_FAR * ConvertByteArrayToByteBuffer) (ISCardTypeConv __RPC_FAR * This, LPBYTE pbyArray, DWORD dwArraySize, LPBYTEBUFFER __RPC_FAR * ppbyBuffer);
	HRESULT(STDMETHODCALLTYPE __RPC_FAR * ConvertByteBufferToByteArray) (ISCardTypeConv __RPC_FAR * This, LPBYTEBUFFER pbyBuffer, LPBYTEARRAY __RPC_FAR * ppArray);
	HRESULT(STDMETHODCALLTYPE __RPC_FAR * ConvertByteBufferToSafeArray) (ISCardTypeConv __RPC_FAR * This, LPBYTEBUFFER pbyBuffer, LPSAFEARRAY __RPC_FAR * ppbyArray);
	HRESULT(STDMETHODCALLTYPE __RPC_FAR * ConvertSafeArrayToByteBuffer) (ISCardTypeConv __RPC_FAR * This, LPSAFEARRAY pbyArray, LPBYTEBUFFER __RPC_FAR * ppbyBuff);
	HRESULT(STDMETHODCALLTYPE __RPC_FAR * CreateByteArray) (ISCardTypeConv __RPC_FAR * This, DWORD dwAllocSize, LPBYTE __RPC_FAR * ppbyArray);
	HRESULT(STDMETHODCALLTYPE __RPC_FAR * CreateByteBuffer) (ISCardTypeConv __RPC_FAR * This, DWORD dwAllocSize, LPBYTEBUFFER __RPC_FAR * ppbyBuff);
	HRESULT(STDMETHODCALLTYPE __RPC_FAR * CreateSafeArray) (ISCardTypeConv __RPC_FAR * This, UINT nAllocSize, LPSAFEARRAY __RPC_FAR * ppArray);
	HRESULT(STDMETHODCALLTYPE __RPC_FAR * FreeIStreamMemoryPtr) (ISCardTypeConv __RPC_FAR * This, LPSTREAM pStrm, LPBYTE pMem);
	HRESULT(STDMETHODCALLTYPE __RPC_FAR * GetAtIStreamMemory) (ISCardTypeConv __RPC_FAR * This, LPSTREAM pStrm, LPBYTEARRAY __RPC_FAR * ppMem);
	HRESULT(STDMETHODCALLTYPE __RPC_FAR * SizeOfIStream) (ISCardTypeConv __RPC_FAR * This, LPSTREAM pStrm, ULARGE_INTEGER __RPC_FAR * puliSize);
	END_INTERFACE
}  ISCardTypeConvVtbl;
interface ISCardTypeConv
{
	CONST_VTBL struct ISCardTypeConvVtbl __RPC_FAR *lpVtbl;
};
#ifdef COBJMACROS
#define ISCardTypeConv_QueryInterface(This,riid,ppvObject) (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)
#define ISCardTypeConv_AddRef(This) (This)->lpVtbl -> AddRef(This)
#define ISCardTypeConv_Release(This) (This)->lpVtbl -> Release(This)
#define ISCardTypeConv_GetTypeInfoCount(This,pctinfo) (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo)
#define ISCardTypeConv_GetTypeInfo(This,iTInfo,lcid,ppTInfo) (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo)
#define ISCardTypeConv_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)
#define ISCardTypeConv_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)
#define ISCardTypeConv_ConvertByteArrayToByteBuffer(This,pbyArray,dwArraySize,ppbyBuffer) (This)->lpVtbl -> ConvertByteArrayToByteBuffer(This,pbyArray,dwArraySize,ppbyBuffer)
#define ISCardTypeConv_ConvertByteBufferToByteArray(This,pbyBuffer,ppArray) (This)->lpVtbl -> ConvertByteBufferToByteArray(This,pbyBuffer,ppArray)
#define ISCardTypeConv_ConvertByteBufferToSafeArray(This,pbyBuffer,ppbyArray) (This)->lpVtbl -> ConvertByteBufferToSafeArray(This,pbyBuffer,ppbyArray)
#define ISCardTypeConv_ConvertSafeArrayToByteBuffer(This,pbyArray,ppbyBuff) (This)->lpVtbl -> ConvertSafeArrayToByteBuffer(This,pbyArray,ppbyBuff)
#define ISCardTypeConv_CreateByteArray(This,dwAllocSize,ppbyArray) (This)->lpVtbl -> CreateByteArray(This,dwAllocSize,ppbyArray)
#define ISCardTypeConv_CreateByteBuffer(This,dwAllocSize,ppbyBuff) (This)->lpVtbl -> CreateByteBuffer(This,dwAllocSize,ppbyBuff)
#define ISCardTypeConv_CreateSafeArray(This,nAllocSize,ppArray) (This)->lpVtbl -> CreateSafeArray(This,nAllocSize,ppArray)
#define ISCardTypeConv_FreeIStreamMemoryPtr(This,pStrm,pMem) (This)->lpVtbl -> FreeIStreamMemoryPtr(This,pStrm,pMem)
#define ISCardTypeConv_GetAtIStreamMemory(This,pStrm,ppMem) (This)->lpVtbl -> GetAtIStreamMemory(This,pStrm,ppMem)
#define ISCardTypeConv_SizeOfIStream(This,pStrm,puliSize) (This)->lpVtbl -> SizeOfIStream(This,pStrm,puliSize)
#endif
HRESULT STDMETHODCALLTYPE ISCardTypeConv_ConvertByteArrayToByteBuffer_Proxy(ISCardTypeConv __RPC_FAR *This, LPBYTE pbyArray, DWORD dwArraySize, LPBYTEBUFFER __RPC_FAR *ppbyBuffer);
void __RPC_STUB ISCardTypeConv_ConvertByteArrayToByteBuffer_Stub(IRpcStubBuffer *This, IRpcChannelBuffer *_pRpcChannelBuffer, PRPC_MESSAGE _pRpcMessage, DWORD *_pdwStubPhase);
HRESULT STDMETHODCALLTYPE ISCardTypeConv_ConvertByteBufferToByteArray_Proxy(ISCardTypeConv __RPC_FAR *This, LPBYTEBUFFER pbyBuffer, LPBYTEARRAY __RPC_FAR *ppArray);
void __RPC_STUB ISCardTypeConv_ConvertByteBufferToByteArray_Stub(IRpcStubBuffer *This, IRpcChannelBuffer *_pRpcChannelBuffer, PRPC_MESSAGE _pRpcMessage, DWORD *_pdwStubPhase);
HRESULT STDMETHODCALLTYPE ISCardTypeConv_ConvertByteBufferToSafeArray_Proxy(ISCardTypeConv __RPC_FAR *This, LPBYTEBUFFER pbyBuffer, LPSAFEARRAY __RPC_FAR *ppbyArray);
void __RPC_STUB ISCardTypeConv_ConvertByteBufferToSafeArray_Stub(IRpcStubBuffer *This, IRpcChannelBuffer *_pRpcChannelBuffer, PRPC_MESSAGE _pRpcMessage, DWORD *_pdwStubPhase);
HRESULT STDMETHODCALLTYPE ISCardTypeConv_ConvertSafeArrayToByteBuffer_Proxy(ISCardTypeConv __RPC_FAR *This, LPSAFEARRAY pbyArray, LPBYTEBUFFER __RPC_FAR *ppbyBuff);
void __RPC_STUB ISCardTypeConv_ConvertSafeArrayToByteBuffer_Stub(IRpcStubBuffer *This, IRpcChannelBuffer *_pRpcChannelBuffer, PRPC_MESSAGE _pRpcMessage, DWORD *_pdwStubPhase);
HRESULT STDMETHODCALLTYPE ISCardTypeConv_CreateByteArray_Proxy(ISCardTypeConv __RPC_FAR *This, DWORD dwAllocSize, LPBYTE __RPC_FAR *ppbyArray);
void __RPC_STUB ISCardTypeConv_CreateByteArray_Stub(IRpcStubBuffer *This, IRpcChannelBuffer *_pRpcChannelBuffer, PRPC_MESSAGE _pRpcMessage, DWORD *_pdwStubPhase);
HRESULT STDMETHODCALLTYPE ISCardTypeConv_CreateByteBuffer_Proxy(ISCardTypeConv __RPC_FAR *This, DWORD dwAllocSize, LPBYTEBUFFER __RPC_FAR *ppbyBuff);
void __RPC_STUB ISCardTypeConv_CreateByteBuffer_Stub(IRpcStubBuffer *This, IRpcChannelBuffer *_pRpcChannelBuffer, PRPC_MESSAGE _pRpcMessage, DWORD *_pdwStubPhase);
HRESULT STDMETHODCALLTYPE ISCardTypeConv_CreateSafeArray_Proxy(ISCardTypeConv __RPC_FAR *This, UINT nAllocSize, LPSAFEARRAY __RPC_FAR *ppArray);
void __RPC_STUB ISCardTypeConv_CreateSafeArray_Stub(IRpcStubBuffer *This, IRpcChannelBuffer *_pRpcChannelBuffer, PRPC_MESSAGE _pRpcMessage, DWORD *_pdwStubPhase);
HRESULT STDMETHODCALLTYPE ISCardTypeConv_FreeIStreamMemoryPtr_Proxy(ISCardTypeConv __RPC_FAR *This, LPSTREAM pStrm, LPBYTE pMem);
void __RPC_STUB ISCardTypeConv_FreeIStreamMemoryPtr_Stub(IRpcStubBuffer *This, IRpcChannelBuffer *_pRpcChannelBuffer, PRPC_MESSAGE _pRpcMessage, DWORD *_pdwStubPhase);
HRESULT STDMETHODCALLTYPE ISCardTypeConv_GetAtIStreamMemory_Proxy(ISCardTypeConv __RPC_FAR *This, LPSTREAM pStrm, LPBYTEARRAY __RPC_FAR *ppMem);
void __RPC_STUB ISCardTypeConv_GetAtIStreamMemory_Stub(IRpcStubBuffer *This, IRpcChannelBuffer *_pRpcChannelBuffer, PRPC_MESSAGE _pRpcMessage, DWORD *_pdwStubPhase);
HRESULT STDMETHODCALLTYPE ISCardTypeConv_SizeOfIStream_Proxy(ISCardTypeConv __RPC_FAR *This, LPSTREAM pStrm, ULARGE_INTEGER __RPC_FAR *puliSize);
void __RPC_STUB ISCardTypeConv_SizeOfIStream_Stub(IRpcStubBuffer *This, IRpcChannelBuffer *_pRpcChannelBuffer, PRPC_MESSAGE _pRpcMessage, DWORD *_pdwStubPhase);
#endif
#endif
#ifndef _LPSCARDCMD_DEFINED
#define _LPSCARDCMD_DEFINED
extern RPC_IF_HANDLE __MIDL_itf_scardssp_0245_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_scardssp_0245_v0_0_s_ifspec;
#ifndef __ISCardCmd_INTERFACE_DEFINED__
#define __ISCardCmd_INTERFACE_DEFINED__
typedef ISCardCmd __RPC_FAR *LPSCARDCMD;
extern const IID IID_ISCardCmd;
typedef struct ISCardCmdVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE __RPC_FAR *QueryInterface) (ISCardCmd __RPC_FAR *This, REFIID riid, void __RPC_FAR *__RPC_FAR *ppvObject);
	ULONG(STDMETHODCALLTYPE __RPC_FAR *AddRef) (ISCardCmd __RPC_FAR *This);
	ULONG(STDMETHODCALLTYPE __RPC_FAR *Release) (ISCardCmd __RPC_FAR *This);
	HRESULT(STDMETHODCALLTYPE __RPC_FAR *GetTypeInfoCount) (ISCardCmd __RPC_FAR *This, UINT __RPC_FAR *pctinfo);
	HRESULT(STDMETHODCALLTYPE __RPC_FAR *GetTypeInfo) (ISCardCmd __RPC_FAR *This, UINT iTInfo, LCID lcid, ITypeInfo __RPC_FAR *__RPC_FAR *ppTInfo);
	HRESULT(STDMETHODCALLTYPE __RPC_FAR *GetIDsOfNames) (ISCardCmd __RPC_FAR *This, REFIID riid, LPOLESTR __RPC_FAR *rgszNames, UINT cNames, LCID lcid, DISPID __RPC_FAR *rgDispId);
	HRESULT(STDMETHODCALLTYPE __RPC_FAR *Invoke) (ISCardCmd __RPC_FAR *This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS __RPC_FAR *pDispParams, VARIANT __RPC_FAR *pVarResult, EXCEPINFO __RPC_FAR *pExcepInfo, UINT __RPC_FAR *puArgErr);
	HRESULT(STDMETHODCALLTYPE __RPC_FAR *get_Apdu) (ISCardCmd __RPC_FAR *This, LPBYTEBUFFER __RPC_FAR *ppApdu);
	HRESULT(STDMETHODCALLTYPE __RPC_FAR *put_Apdu) (ISCardCmd __RPC_FAR *This, LPBYTEBUFFER pApdu);
	HRESULT(STDMETHODCALLTYPE __RPC_FAR *get_ApduLength) (ISCardCmd __RPC_FAR *This, LONG __RPC_FAR *plSize);
	HRESULT(STDMETHODCALLTYPE __RPC_FAR *get_ApduReply) (ISCardCmd __RPC_FAR *This, LPBYTEBUFFER __RPC_FAR *ppReplyApdu);
	HRESULT(STDMETHODCALLTYPE __RPC_FAR *put_ApduReply) (ISCardCmd __RPC_FAR *This, LPBYTEBUFFER pReplyApdu);
	HRESULT(STDMETHODCALLTYPE __RPC_FAR *get_ApduReplyLength) (ISCardCmd __RPC_FAR *This, LONG __RPC_FAR *plSize);
	HRESULT(STDMETHODCALLTYPE __RPC_FAR *put_ApduReplyLength) (ISCardCmd __RPC_FAR *This, LONG lSize);
	HRESULT(STDMETHODCALLTYPE __RPC_FAR *get_ClassId) (ISCardCmd __RPC_FAR *This, BYTE __RPC_FAR *pbyClass);
	HRESULT(STDMETHODCALLTYPE __RPC_FAR *put_ClassId) (ISCardCmd __RPC_FAR *This, BYTE byClass);
	HRESULT(STDMETHODCALLTYPE __RPC_FAR *get_Data) (ISCardCmd __RPC_FAR *This, LPBYTEBUFFER __RPC_FAR *ppData);
	HRESULT(STDMETHODCALLTYPE __RPC_FAR *put_Data) (ISCardCmd __RPC_FAR *This, LPBYTEBUFFER pData);
	HRESULT(STDMETHODCALLTYPE __RPC_FAR *get_InstructionId) (ISCardCmd __RPC_FAR *This, BYTE __RPC_FAR *pbyIns);
	HRESULT(STDMETHODCALLTYPE __RPC_FAR *put_InstructionId) (ISCardCmd __RPC_FAR *This, BYTE byIns);
	HRESULT(STDMETHODCALLTYPE __RPC_FAR *get_LeField) (ISCardCmd __RPC_FAR *This, LONG __RPC_FAR *plSize);
	HRESULT(STDMETHODCALLTYPE __RPC_FAR *get_P1) (ISCardCmd __RPC_FAR *This, BYTE __RPC_FAR *pbyP1);
	HRESULT(STDMETHODCALLTYPE __RPC_FAR *put_P1) (ISCardCmd __RPC_FAR *This, BYTE byP1);
	HRESULT(STDMETHODCALLTYPE __RPC_FAR *get_P2) (ISCardCmd __RPC_FAR *This, BYTE __RPC_FAR *pbyP2);
	HRESULT(STDMETHODCALLTYPE __RPC_FAR *put_P2) (ISCardCmd __RPC_FAR *This, BYTE byP2);
	HRESULT(STDMETHODCALLTYPE __RPC_FAR *get_P3) (ISCardCmd __RPC_FAR *This, BYTE __RPC_FAR *pbyP3);
	HRESULT(STDMETHODCALLTYPE __RPC_FAR *get_ReplyStatus) (ISCardCmd __RPC_FAR *This, LPWORD pwStatus);
	HRESULT(STDMETHODCALLTYPE __RPC_FAR *put_ReplyStatus) (ISCardCmd __RPC_FAR *This, WORD wStatus);
	HRESULT(STDMETHODCALLTYPE __RPC_FAR *get_ReplyStatusSW1) (ISCardCmd __RPC_FAR *This, BYTE __RPC_FAR *pbySW1);
	HRESULT(STDMETHODCALLTYPE __RPC_FAR *get_ReplyStatusSW2) (ISCardCmd __RPC_FAR *This, BYTE __RPC_FAR *pbySW2);
	HRESULT(STDMETHODCALLTYPE __RPC_FAR *get_Type) (ISCardCmd __RPC_FAR *This, ISO_APDU_TYPE __RPC_FAR *pType);
	HRESULT(STDMETHODCALLTYPE __RPC_FAR *get_Nad) (ISCardCmd __RPC_FAR *This, BYTE __RPC_FAR *pbNad);
	HRESULT(STDMETHODCALLTYPE __RPC_FAR *put_Nad) (ISCardCmd __RPC_FAR *This, BYTE bNad);
	HRESULT(STDMETHODCALLTYPE __RPC_FAR *get_ReplyNad) (ISCardCmd __RPC_FAR *This, BYTE __RPC_FAR *pbNad);
	HRESULT(STDMETHODCALLTYPE __RPC_FAR *put_ReplyNad) (ISCardCmd __RPC_FAR *This, BYTE bNad);
	HRESULT(STDMETHODCALLTYPE __RPC_FAR *BuildCmd) (ISCardCmd __RPC_FAR *This, BYTE byClassId, BYTE byInsId, BYTE byP1, BYTE byP2, LPBYTEBUFFER pbyData, LONG __RPC_FAR *plLe);
	HRESULT(STDMETHODCALLTYPE __RPC_FAR *Clear) (ISCardCmd __RPC_FAR *This);
	HRESULT(STDMETHODCALLTYPE __RPC_FAR *Encapsulate) (ISCardCmd __RPC_FAR *This, LPBYTEBUFFER pApdu, ISO_APDU_TYPE ApduType);
	HRESULT(STDMETHODCALLTYPE __RPC_FAR *get_AlternateClassId) (ISCardCmd __RPC_FAR *This, BYTE __RPC_FAR *pbyClass);
	HRESULT(STDMETHODCALLTYPE __RPC_FAR *put_AlternateClassId) (ISCardCmd __RPC_FAR *This, BYTE byClass);
	END_INTERFACE
}  ISCardCmdVtbl;
interface ISCardCmd
{
	CONST_VTBL struct ISCardCmdVtbl __RPC_FAR *lpVtbl;
};
#ifdef COBJMACROS
#define ISCardCmd_QueryInterface(This,riid,ppvObject) (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)
#define ISCardCmd_AddRef(This) (This)->lpVtbl -> AddRef(This)
#define ISCardCmd_Release(This) (This)->lpVtbl -> Release(This)
#define ISCardCmd_GetTypeInfoCount(This,pctinfo) (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo)
#define ISCardCmd_GetTypeInfo(This,iTInfo,lcid,ppTInfo) (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo)
#define ISCardCmd_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)
#define ISCardCmd_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)
#define ISCardCmd_get_Apdu(This,ppApdu) (This)->lpVtbl -> get_Apdu(This,ppApdu)
#define ISCardCmd_put_Apdu(This,pApdu) (This)->lpVtbl -> put_Apdu(This,pApdu)
#define ISCardCmd_get_ApduLength(This,plSize) (This)->lpVtbl -> get_ApduLength(This,plSize)
#define ISCardCmd_get_ApduReply(This,ppReplyApdu) (This)->lpVtbl -> get_ApduReply(This,ppReplyApdu)
#define ISCardCmd_put_ApduReply(This,pReplyApdu) (This)->lpVtbl -> put_ApduReply(This,pReplyApdu)
#define ISCardCmd_get_ApduReplyLength(This,plSize) (This)->lpVtbl -> get_ApduReplyLength(This,plSize)
#define ISCardCmd_put_ApduReplyLength(This,lSize) (This)->lpVtbl -> put_ApduReplyLength(This,lSize)
#define ISCardCmd_get_ClassId(This,pbyClass) (This)->lpVtbl -> get_ClassId(This,pbyClass)
#define ISCardCmd_put_ClassId(This,byClass) (This)->lpVtbl -> put_ClassId(This,byClass)
#define ISCardCmd_get_Data(This,ppData) (This)->lpVtbl -> get_Data(This,ppData)
#define ISCardCmd_put_Data(This,pData) (This)->lpVtbl -> put_Data(This,pData)
#define ISCardCmd_get_InstructionId(This,pbyIns) (This)->lpVtbl -> get_InstructionId(This,pbyIns)
#define ISCardCmd_put_InstructionId(This,byIns) (This)->lpVtbl -> put_InstructionId(This,byIns)
#define ISCardCmd_get_LeField(This,plSize) (This)->lpVtbl -> get_LeField(This,plSize)
#define ISCardCmd_get_P1(This,pbyP1) (This)->lpVtbl -> get_P1(This,pbyP1)
#define ISCardCmd_put_P1(This,byP1) (This)->lpVtbl -> put_P1(This,byP1)
#define ISCardCmd_get_P2(This,pbyP2) (This)->lpVtbl -> get_P2(This,pbyP2)
#define ISCardCmd_put_P2(This,byP2) (This)->lpVtbl -> put_P2(This,byP2)
#define ISCardCmd_get_P3(This,pbyP3) (This)->lpVtbl -> get_P3(This,pbyP3)
#define ISCardCmd_get_ReplyStatus(This,pwStatus) (This)->lpVtbl -> get_ReplyStatus(This,pwStatus)
#define ISCardCmd_put_ReplyStatus(This,wStatus) (This)->lpVtbl -> put_ReplyStatus(This,wStatus)
#define ISCardCmd_get_ReplyStatusSW1(This,pbySW1) (This)->lpVtbl -> get_ReplyStatusSW1(This,pbySW1)
#define ISCardCmd_get_ReplyStatusSW2(This,pbySW2) (This)->lpVtbl -> get_ReplyStatusSW2(This,pbySW2)
#define ISCardCmd_get_Type(This,pType) (This)->lpVtbl -> get_Type(This,pType)
#define ISCardCmd_get_Nad(This,pbNad) (This)->lpVtbl -> get_Nad(This,pbNad)
#define ISCardCmd_put_Nad(This,bNad) (This)->lpVtbl -> put_Nad(This,bNad)
#define ISCardCmd_get_ReplyNad(This,pbNad) (This)->lpVtbl -> get_ReplyNad(This,pbNad)
#define ISCardCmd_put_ReplyNad(This,bNad) (This)->lpVtbl -> put_ReplyNad(This,bNad)
#define ISCardCmd_BuildCmd(This,byClassId,byInsId,byP1,byP2,pbyData,plLe) (This)->lpVtbl -> BuildCmd(This,byClassId,byInsId,byP1,byP2,pbyData,plLe)
#define ISCardCmd_Clear(This) (This)->lpVtbl -> Clear(This)
#define ISCardCmd_Encapsulate(This,pApdu,ApduType) (This)->lpVtbl -> Encapsulate(This,pApdu,ApduType)
#define ISCardCmd_get_AlternateClassId(This,pbyClass) (This)->lpVtbl -> get_AlternateClassId(This,pbyClass)
#define ISCardCmd_put_AlternateClassId(This,byClass) (This)->lpVtbl -> put_AlternateClassId(This,byClass)
#endif
HRESULT STDMETHODCALLTYPE ISCardCmd_get_Apdu_Proxy(ISCardCmd __RPC_FAR *This, LPBYTEBUFFER __RPC_FAR *ppApdu);
void __RPC_STUB ISCardCmd_get_Apdu_Stub(IRpcStubBuffer *This, IRpcChannelBuffer *_pRpcChannelBuffer, PRPC_MESSAGE _pRpcMessage, DWORD *_pdwStubPhase);
HRESULT STDMETHODCALLTYPE ISCardCmd_put_Apdu_Proxy(ISCardCmd __RPC_FAR *This, LPBYTEBUFFER pApdu);
void __RPC_STUB ISCardCmd_put_Apdu_Stub(IRpcStubBuffer *This, IRpcChannelBuffer *_pRpcChannelBuffer, PRPC_MESSAGE _pRpcMessage, DWORD *_pdwStubPhase);
HRESULT STDMETHODCALLTYPE ISCardCmd_get_ApduLength_Proxy(ISCardCmd __RPC_FAR *This, LONG __RPC_FAR *plSize);
void __RPC_STUB ISCardCmd_get_ApduLength_Stub(IRpcStubBuffer *This, IRpcChannelBuffer *_pRpcChannelBuffer, PRPC_MESSAGE _pRpcMessage, DWORD *_pdwStubPhase);
HRESULT STDMETHODCALLTYPE ISCardCmd_get_ApduReply_Proxy(ISCardCmd __RPC_FAR *This, LPBYTEBUFFER __RPC_FAR *ppReplyApdu);
void __RPC_STUB ISCardCmd_get_ApduReply_Stub(IRpcStubBuffer *This, IRpcChannelBuffer *_pRpcChannelBuffer, PRPC_MESSAGE _pRpcMessage, DWORD *_pdwStubPhase);
HRESULT STDMETHODCALLTYPE ISCardCmd_put_ApduReply_Proxy(ISCardCmd __RPC_FAR *This, LPBYTEBUFFER pReplyApdu);
void __RPC_STUB ISCardCmd_put_ApduReply_Stub(IRpcStubBuffer *This, IRpcChannelBuffer *_pRpcChannelBuffer, PRPC_MESSAGE _pRpcMessage, DWORD *_pdwStubPhase);
HRESULT STDMETHODCALLTYPE ISCardCmd_get_ApduReplyLength_Proxy(ISCardCmd __RPC_FAR *This, LONG __RPC_FAR *plSize);
void __RPC_STUB ISCardCmd_get_ApduReplyLength_Stub(IRpcStubBuffer *This, IRpcChannelBuffer *_pRpcChannelBuffer, PRPC_MESSAGE _pRpcMessage, DWORD *_pdwStubPhase);
HRESULT STDMETHODCALLTYPE ISCardCmd_put_ApduReplyLength_Proxy(ISCardCmd __RPC_FAR *This, LONG lSize);
void __RPC_STUB ISCardCmd_put_ApduReplyLength_Stub(IRpcStubBuffer *This, IRpcChannelBuffer *_pRpcChannelBuffer, PRPC_MESSAGE _pRpcMessage, DWORD *_pdwStubPhase);
HRESULT STDMETHODCALLTYPE ISCardCmd_get_ClassId_Proxy(ISCardCmd __RPC_FAR *This, BYTE __RPC_FAR *pbyClass);
void __RPC_STUB ISCardCmd_get_ClassId_Stub(IRpcStubBuffer *This, IRpcChannelBuffer *_pRpcChannelBuffer, PRPC_MESSAGE _pRpcMessage, DWORD *_pdwStubPhase);
HRESULT STDMETHODCALLTYPE ISCardCmd_put_ClassId_Proxy(ISCardCmd __RPC_FAR *This, BYTE byClass);
void __RPC_STUB ISCardCmd_put_ClassId_Stub(IRpcStubBuffer *This, IRpcChannelBuffer *_pRpcChannelBuffer, PRPC_MESSAGE _pRpcMessage, DWORD *_pdwStubPhase);
HRESULT STDMETHODCALLTYPE ISCardCmd_get_Data_Proxy(ISCardCmd __RPC_FAR *This, LPBYTEBUFFER __RPC_FAR *ppData);
void __RPC_STUB ISCardCmd_get_Data_Stub(IRpcStubBuffer *This, IRpcChannelBuffer *_pRpcChannelBuffer, PRPC_MESSAGE _pRpcMessage, DWORD *_pdwStubPhase);
HRESULT STDMETHODCALLTYPE ISCardCmd_put_Data_Proxy(ISCardCmd __RPC_FAR *This, LPBYTEBUFFER pData);
void __RPC_STUB ISCardCmd_put_Data_Stub(IRpcStubBuffer *This, IRpcChannelBuffer *_pRpcChannelBuffer, PRPC_MESSAGE _pRpcMessage, DWORD *_pdwStubPhase);
HRESULT STDMETHODCALLTYPE ISCardCmd_get_InstructionId_Proxy(ISCardCmd __RPC_FAR *This, BYTE __RPC_FAR *pbyIns);
void __RPC_STUB ISCardCmd_get_InstructionId_Stub(IRpcStubBuffer *This, IRpcChannelBuffer *_pRpcChannelBuffer, PRPC_MESSAGE _pRpcMessage, DWORD *_pdwStubPhase);
HRESULT STDMETHODCALLTYPE ISCardCmd_put_InstructionId_Proxy(ISCardCmd __RPC_FAR *This, BYTE byIns);
void __RPC_STUB ISCardCmd_put_InstructionId_Stub(IRpcStubBuffer *This, IRpcChannelBuffer *_pRpcChannelBuffer, PRPC_MESSAGE _pRpcMessage, DWORD *_pdwStubPhase);
HRESULT STDMETHODCALLTYPE ISCardCmd_get_LeField_Proxy(ISCardCmd __RPC_FAR *This, LONG __RPC_FAR *plSize);
void __RPC_STUB ISCardCmd_get_LeField_Stub(IRpcStubBuffer *This, IRpcChannelBuffer *_pRpcChannelBuffer, PRPC_MESSAGE _pRpcMessage, DWORD *_pdwStubPhase);
HRESULT STDMETHODCALLTYPE ISCardCmd_get_P1_Proxy(ISCardCmd __RPC_FAR *This, BYTE __RPC_FAR *pbyP1);
void __RPC_STUB ISCardCmd_get_P1_Stub(IRpcStubBuffer *This, IRpcChannelBuffer *_pRpcChannelBuffer, PRPC_MESSAGE _pRpcMessage, DWORD *_pdwStubPhase);
HRESULT STDMETHODCALLTYPE ISCardCmd_put_P1_Proxy(ISCardCmd __RPC_FAR *This, BYTE byP1);
void __RPC_STUB ISCardCmd_put_P1_Stub(IRpcStubBuffer *This, IRpcChannelBuffer *_pRpcChannelBuffer, PRPC_MESSAGE _pRpcMessage, DWORD *_pdwStubPhase);
HRESULT STDMETHODCALLTYPE ISCardCmd_get_P2_Proxy(ISCardCmd __RPC_FAR *This, BYTE __RPC_FAR *pbyP2);
void __RPC_STUB ISCardCmd_get_P2_Stub(IRpcStubBuffer *This, IRpcChannelBuffer *_pRpcChannelBuffer, PRPC_MESSAGE _pRpcMessage, DWORD *_pdwStubPhase);
HRESULT STDMETHODCALLTYPE ISCardCmd_put_P2_Proxy(ISCardCmd __RPC_FAR *This, BYTE byP2);
void __RPC_STUB ISCardCmd_put_P2_Stub(IRpcStubBuffer *This, IRpcChannelBuffer *_pRpcChannelBuffer, PRPC_MESSAGE _pRpcMessage, DWORD *_pdwStubPhase);
HRESULT STDMETHODCALLTYPE ISCardCmd_get_P3_Proxy(ISCardCmd __RPC_FAR *This, BYTE __RPC_FAR *pbyP3);
void __RPC_STUB ISCardCmd_get_P3_Stub(IRpcStubBuffer *This, IRpcChannelBuffer *_pRpcChannelBuffer, PRPC_MESSAGE _pRpcMessage, DWORD *_pdwStubPhase);
HRESULT STDMETHODCALLTYPE ISCardCmd_get_ReplyStatus_Proxy(ISCardCmd __RPC_FAR *This, LPWORD pwStatus);
void __RPC_STUB ISCardCmd_get_ReplyStatus_Stub(IRpcStubBuffer *This, IRpcChannelBuffer *_pRpcChannelBuffer, PRPC_MESSAGE _pRpcMessage, DWORD *_pdwStubPhase);
HRESULT STDMETHODCALLTYPE ISCardCmd_put_ReplyStatus_Proxy(ISCardCmd __RPC_FAR *This, WORD wStatus);
void __RPC_STUB ISCardCmd_put_ReplyStatus_Stub(IRpcStubBuffer *This, IRpcChannelBuffer *_pRpcChannelBuffer, PRPC_MESSAGE _pRpcMessage, DWORD *_pdwStubPhase);
HRESULT STDMETHODCALLTYPE ISCardCmd_get_ReplyStatusSW1_Proxy(ISCardCmd __RPC_FAR *This, BYTE __RPC_FAR *pbySW1);
void __RPC_STUB ISCardCmd_get_ReplyStatusSW1_Stub(IRpcStubBuffer *This, IRpcChannelBuffer *_pRpcChannelBuffer, PRPC_MESSAGE _pRpcMessage, DWORD *_pdwStubPhase);
HRESULT STDMETHODCALLTYPE ISCardCmd_get_ReplyStatusSW2_Proxy(ISCardCmd __RPC_FAR *This, BYTE __RPC_FAR *pbySW2);
void __RPC_STUB ISCardCmd_get_ReplyStatusSW2_Stub(IRpcStubBuffer *This, IRpcChannelBuffer *_pRpcChannelBuffer, PRPC_MESSAGE _pRpcMessage, DWORD *_pdwStubPhase);
HRESULT STDMETHODCALLTYPE ISCardCmd_get_Type_Proxy(ISCardCmd __RPC_FAR *This, ISO_APDU_TYPE __RPC_FAR *pType);
void __RPC_STUB ISCardCmd_get_Type_Stub(IRpcStubBuffer *This, IRpcChannelBuffer *_pRpcChannelBuffer, PRPC_MESSAGE _pRpcMessage, DWORD *_pdwStubPhase);
HRESULT STDMETHODCALLTYPE ISCardCmd_get_Nad_Proxy(ISCardCmd __RPC_FAR *This, BYTE __RPC_FAR *pbNad);
void __RPC_STUB ISCardCmd_get_Nad_Stub(IRpcStubBuffer *This, IRpcChannelBuffer *_pRpcChannelBuffer, PRPC_MESSAGE _pRpcMessage, DWORD *_pdwStubPhase);
HRESULT STDMETHODCALLTYPE ISCardCmd_put_Nad_Proxy(ISCardCmd __RPC_FAR *This, BYTE bNad);
void __RPC_STUB ISCardCmd_put_Nad_Stub(IRpcStubBuffer *This, IRpcChannelBuffer *_pRpcChannelBuffer, PRPC_MESSAGE _pRpcMessage, DWORD *_pdwStubPhase);
HRESULT STDMETHODCALLTYPE ISCardCmd_get_ReplyNad_Proxy(ISCardCmd __RPC_FAR *This, BYTE __RPC_FAR *pbNad);
void __RPC_STUB ISCardCmd_get_ReplyNad_Stub(IRpcStubBuffer *This, IRpcChannelBuffer *_pRpcChannelBuffer, PRPC_MESSAGE _pRpcMessage, DWORD *_pdwStubPhase);
HRESULT STDMETHODCALLTYPE ISCardCmd_put_ReplyNad_Proxy(ISCardCmd __RPC_FAR *This, BYTE bNad);
void __RPC_STUB ISCardCmd_put_ReplyNad_Stub(IRpcStubBuffer *This, IRpcChannelBuffer *_pRpcChannelBuffer, PRPC_MESSAGE _pRpcMessage, DWORD *_pdwStubPhase);
HRESULT STDMETHODCALLTYPE ISCardCmd_BuildCmd_Proxy(ISCardCmd __RPC_FAR *This, BYTE byClassId, BYTE byInsId, BYTE byP1, BYTE byP2, LPBYTEBUFFER pbyData, LONG __RPC_FAR *plLe);
void __RPC_STUB ISCardCmd_BuildCmd_Stub(IRpcStubBuffer *This, IRpcChannelBuffer *_pRpcChannelBuffer, PRPC_MESSAGE _pRpcMessage, DWORD *_pdwStubPhase);
HRESULT STDMETHODCALLTYPE ISCardCmd_Clear_Proxy(ISCardCmd __RPC_FAR *This);
void __RPC_STUB ISCardCmd_Clear_Stub(IRpcStubBuffer *This, IRpcChannelBuffer *_pRpcChannelBuffer, PRPC_MESSAGE _pRpcMessage, DWORD *_pdwStubPhase);
HRESULT STDMETHODCALLTYPE ISCardCmd_Encapsulate_Proxy(ISCardCmd __RPC_FAR *This, LPBYTEBUFFER pApdu, ISO_APDU_TYPE ApduType);
void __RPC_STUB ISCardCmd_Encapsulate_Stub(IRpcStubBuffer *This, IRpcChannelBuffer *_pRpcChannelBuffer, PRPC_MESSAGE _pRpcMessage, DWORD *_pdwStubPhase);
HRESULT STDMETHODCALLTYPE ISCardCmd_get_AlternateClassId_Proxy(ISCardCmd __RPC_FAR *This, BYTE __RPC_FAR *pbyClass);
void __RPC_STUB ISCardCmd_get_AlternateClassId_Stub(IRpcStubBuffer *This, IRpcChannelBuffer *_pRpcChannelBuffer, PRPC_MESSAGE _pRpcMessage, DWORD *_pdwStubPhase);
HRESULT STDMETHODCALLTYPE ISCardCmd_put_AlternateClassId_Proxy(ISCardCmd __RPC_FAR *This, BYTE byClass);
void __RPC_STUB ISCardCmd_put_AlternateClassId_Stub(IRpcStubBuffer *This, IRpcChannelBuffer *_pRpcChannelBuffer, PRPC_MESSAGE _pRpcMessage, DWORD *_pdwStubPhase);
#endif
#endif
#ifndef _LPSCARDISO7816_DEFINED
#define _LPSCARDISO7816_DEFINED
extern RPC_IF_HANDLE __MIDL_itf_scardssp_0246_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_scardssp_0246_v0_0_s_ifspec;
#ifndef __ISCardISO7816_INTERFACE_DEFINED__
#define __ISCardISO7816_INTERFACE_DEFINED__
typedef ISCardISO7816 __RPC_FAR *LPSCARDISO;
typedef LPSCARDISO LPSCARDISO7816;
extern const IID IID_ISCardISO7816;
typedef struct ISCardISO7816Vtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE __RPC_FAR * QueryInterface) (ISCardISO7816 __RPC_FAR * This, REFIID riid, void __RPC_FAR * __RPC_FAR * ppvObject);
	ULONG(STDMETHODCALLTYPE __RPC_FAR * AddRef) (ISCardISO7816 __RPC_FAR * This);
	ULONG(STDMETHODCALLTYPE __RPC_FAR * Release) (ISCardISO7816 __RPC_FAR * This);
	HRESULT(STDMETHODCALLTYPE __RPC_FAR * GetTypeInfoCount) (ISCardISO7816 __RPC_FAR * This, UINT __RPC_FAR * pctinfo);
	HRESULT(STDMETHODCALLTYPE __RPC_FAR * GetTypeInfo) (ISCardISO7816 __RPC_FAR * This, UINT iTInfo, LCID lcid, ITypeInfo __RPC_FAR * __RPC_FAR * ppTInfo);
	HRESULT(STDMETHODCALLTYPE __RPC_FAR * GetIDsOfNames) (ISCardISO7816 __RPC_FAR * This, REFIID riid, LPOLESTR __RPC_FAR * rgszNames, UINT cNames, LCID lcid, DISPID __RPC_FAR * rgDispId);
	HRESULT(STDMETHODCALLTYPE __RPC_FAR * Invoke) (ISCardISO7816 __RPC_FAR * This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS __RPC_FAR * pDispParams, VARIANT __RPC_FAR * pVarResult, EXCEPINFO __RPC_FAR * pExcepInfo, UINT __RPC_FAR * puArgErr);
	HRESULT(STDMETHODCALLTYPE __RPC_FAR * AppendRecord) (ISCardISO7816 __RPC_FAR * This, BYTE byRefCtrl, LPBYTEBUFFER pData, LPSCARDCMD __RPC_FAR * ppCmd);
	HRESULT(STDMETHODCALLTYPE __RPC_FAR * EraseBinary) (ISCardISO7816 __RPC_FAR * This, BYTE byP1, BYTE byP2, LPBYTEBUFFER pData, LPSCARDCMD __RPC_FAR * ppCmd);
	HRESULT(STDMETHODCALLTYPE __RPC_FAR * ExternalAuthenticate) (ISCardISO7816 __RPC_FAR * This, BYTE byAlgorithmRef, BYTE bySecretRef, LPBYTEBUFFER pChallenge, LPSCARDCMD __RPC_FAR * ppCmd);
	HRESULT(STDMETHODCALLTYPE __RPC_FAR * GetChallenge) (ISCardISO7816 __RPC_FAR * This, LONG lBytesExpected, LPSCARDCMD __RPC_FAR * ppCmd);
	HRESULT(STDMETHODCALLTYPE __RPC_FAR * GetData) (ISCardISO7816 __RPC_FAR * This, BYTE byP1, BYTE byP2, LONG lBytesToGet, LPSCARDCMD __RPC_FAR * ppCmd);
	HRESULT(STDMETHODCALLTYPE __RPC_FAR * GetResponse) (ISCardISO7816 __RPC_FAR * This, BYTE byP1, BYTE byP2, LONG lDataLength, LPSCARDCMD __RPC_FAR * ppCmd);
	HRESULT(STDMETHODCALLTYPE __RPC_FAR * InternalAuthenticate) (ISCardISO7816 __RPC_FAR * This, BYTE byAlgorithmRef, BYTE bySecretRef, LPBYTEBUFFER pChallenge, LONG lReplyBytes, LPSCARDCMD __RPC_FAR * ppCmd);
	HRESULT(STDMETHODCALLTYPE __RPC_FAR * ManageChannel) (ISCardISO7816 __RPC_FAR * This, BYTE byChannelState, BYTE byChannel, LPSCARDCMD __RPC_FAR * ppCmd);
	HRESULT(STDMETHODCALLTYPE __RPC_FAR * PutData) (ISCardISO7816 __RPC_FAR * This, BYTE byP1, BYTE byP2, LPBYTEBUFFER pData, LPSCARDCMD __RPC_FAR * ppCmd);
	HRESULT(STDMETHODCALLTYPE __RPC_FAR * ReadBinary) (ISCardISO7816 __RPC_FAR * This, BYTE byP1, BYTE byP2, LONG lBytesToRead, LPSCARDCMD __RPC_FAR * ppCmd);
	HRESULT(STDMETHODCALLTYPE __RPC_FAR * ReadRecord) (ISCardISO7816 __RPC_FAR * This, BYTE byRecordId, BYTE byRefCtrl, LONG lBytesToRead, LPSCARDCMD __RPC_FAR * ppCmd);
	HRESULT(STDMETHODCALLTYPE __RPC_FAR * SelectFile) (ISCardISO7816 __RPC_FAR * This, BYTE byP1, BYTE byP2, LPBYTEBUFFER pData, LONG lBytesToRead, LPSCARDCMD __RPC_FAR * ppCmd);
	HRESULT(STDMETHODCALLTYPE __RPC_FAR * SetDefaultClassId) (ISCardISO7816 __RPC_FAR * This, BYTE byClass);
	HRESULT(STDMETHODCALLTYPE __RPC_FAR * UpdateBinary) (ISCardISO7816 __RPC_FAR * This, BYTE byP1, BYTE byP2, LPBYTEBUFFER pData, LPSCARDCMD __RPC_FAR * ppCmd);
	HRESULT(STDMETHODCALLTYPE __RPC_FAR * UpdateRecord) (ISCardISO7816 __RPC_FAR * This, BYTE byRecordId, BYTE byRefCtrl, LPBYTEBUFFER pData, LPSCARDCMD __RPC_FAR * ppCmd);
	HRESULT(STDMETHODCALLTYPE __RPC_FAR * Verify) (ISCardISO7816 __RPC_FAR * This, BYTE byRefCtrl, LPBYTEBUFFER pData, LPSCARDCMD __RPC_FAR * ppCmd);
	HRESULT(STDMETHODCALLTYPE __RPC_FAR * WriteBinary) (ISCardISO7816 __RPC_FAR * This, BYTE byP1, BYTE byP2, LPBYTEBUFFER pData, LPSCARDCMD __RPC_FAR * ppCmd);
	HRESULT(STDMETHODCALLTYPE __RPC_FAR * WriteRecord) (ISCardISO7816 __RPC_FAR * This, BYTE byRecordId, BYTE byRefCtrl, LPBYTEBUFFER pData, LPSCARDCMD __RPC_FAR * ppCmd);
	END_INTERFACE
}  ISCardISO7816Vtbl;
interface ISCardISO7816
{
	CONST_VTBL struct ISCardISO7816Vtbl __RPC_FAR *lpVtbl;
};
#ifdef COBJMACROS
#define ISCardISO7816_QueryInterface(This,riid,ppvObject) (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)
#define ISCardISO7816_AddRef(This) (This)->lpVtbl -> AddRef(This)
#define ISCardISO7816_Release(This) (This)->lpVtbl -> Release(This)
#define ISCardISO7816_GetTypeInfoCount(This,pctinfo) (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo)
#define ISCardISO7816_GetTypeInfo(This,iTInfo,lcid,ppTInfo) (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo)
#define ISCardISO7816_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)
#define ISCardISO7816_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)
#define ISCardISO7816_AppendRecord(This,byRefCtrl,pData,ppCmd) (This)->lpVtbl -> AppendRecord(This,byRefCtrl,pData,ppCmd)
#define ISCardISO7816_EraseBinary(This,byP1,byP2,pData,ppCmd) (This)->lpVtbl -> EraseBinary(This,byP1,byP2,pData,ppCmd)
#define ISCardISO7816_ExternalAuthenticate(This,byAlgorithmRef,bySecretRef,pChallenge,ppCmd) (This)->lpVtbl -> ExternalAuthenticate(This,byAlgorithmRef,bySecretRef,pChallenge,ppCmd)
#define ISCardISO7816_GetChallenge(This,lBytesExpected,ppCmd) (This)->lpVtbl -> GetChallenge(This,lBytesExpected,ppCmd)
#define ISCardISO7816_GetData(This,byP1,byP2,lBytesToGet,ppCmd) (This)->lpVtbl -> GetData(This,byP1,byP2,lBytesToGet,ppCmd)
#define ISCardISO7816_GetResponse(This,byP1,byP2,lDataLength,ppCmd) (This)->lpVtbl -> GetResponse(This,byP1,byP2,lDataLength,ppCmd)
#define ISCardISO7816_InternalAuthenticate(This,byAlgorithmRef,bySecretRef,pChallenge,lReplyBytes,ppCmd) (This)->lpVtbl -> InternalAuthenticate(This,byAlgorithmRef,bySecretRef,pChallenge,lReplyBytes,ppCmd)
#define ISCardISO7816_ManageChannel(This,byChannelState,byChannel,ppCmd) (This)->lpVtbl -> ManageChannel(This,byChannelState,byChannel,ppCmd)
#define ISCardISO7816_PutData(This,byP1,byP2,pData,ppCmd) (This)->lpVtbl -> PutData(This,byP1,byP2,pData,ppCmd)
#define ISCardISO7816_ReadBinary(This,byP1,byP2,lBytesToRead,ppCmd) (This)->lpVtbl -> ReadBinary(This,byP1,byP2,lBytesToRead,ppCmd)
#define ISCardISO7816_ReadRecord(This,byRecordId,byRefCtrl,lBytesToRead,ppCmd) (This)->lpVtbl -> ReadRecord(This,byRecordId,byRefCtrl,lBytesToRead,ppCmd)
#define ISCardISO7816_SelectFile(This,byP1,byP2,pData,lBytesToRead,ppCmd) (This)->lpVtbl -> SelectFile(This,byP1,byP2,pData,lBytesToRead,ppCmd)
#define ISCardISO7816_SetDefaultClassId(This,byClass) (This)->lpVtbl -> SetDefaultClassId(This,byClass)
#define ISCardISO7816_UpdateBinary(This,byP1,byP2,pData,ppCmd) (This)->lpVtbl -> UpdateBinary(This,byP1,byP2,pData,ppCmd)
#define ISCardISO7816_UpdateRecord(This,byRecordId,byRefCtrl,pData,ppCmd) (This)->lpVtbl -> UpdateRecord(This,byRecordId,byRefCtrl,pData,ppCmd)
#define ISCardISO7816_Verify(This,byRefCtrl,pData,ppCmd) (This)->lpVtbl -> Verify(This,byRefCtrl,pData,ppCmd)
#define ISCardISO7816_WriteBinary(This,byP1,byP2,pData,ppCmd) (This)->lpVtbl -> WriteBinary(This,byP1,byP2,pData,ppCmd)
#define ISCardISO7816_WriteRecord(This,byRecordId,byRefCtrl,pData,ppCmd) (This)->lpVtbl -> WriteRecord(This,byRecordId,byRefCtrl,pData,ppCmd)
#endif
HRESULT STDMETHODCALLTYPE ISCardISO7816_AppendRecord_Proxy(ISCardISO7816 __RPC_FAR *This, BYTE byRefCtrl, LPBYTEBUFFER pData, LPSCARDCMD __RPC_FAR *ppCmd);
void __RPC_STUB ISCardISO7816_AppendRecord_Stub(IRpcStubBuffer *This, IRpcChannelBuffer *_pRpcChannelBuffer, PRPC_MESSAGE _pRpcMessage, DWORD *_pdwStubPhase);
HRESULT STDMETHODCALLTYPE ISCardISO7816_EraseBinary_Proxy(ISCardISO7816 __RPC_FAR *This, BYTE byP1, BYTE byP2, LPBYTEBUFFER pData, LPSCARDCMD __RPC_FAR *ppCmd);
void __RPC_STUB ISCardISO7816_EraseBinary_Stub(IRpcStubBuffer *This, IRpcChannelBuffer *_pRpcChannelBuffer, PRPC_MESSAGE _pRpcMessage, DWORD *_pdwStubPhase);
HRESULT STDMETHODCALLTYPE ISCardISO7816_ExternalAuthenticate_Proxy(ISCardISO7816 __RPC_FAR *This, BYTE byAlgorithmRef, BYTE bySecretRef, LPBYTEBUFFER pChallenge, LPSCARDCMD __RPC_FAR *ppCmd);
void __RPC_STUB ISCardISO7816_ExternalAuthenticate_Stub(IRpcStubBuffer *This, IRpcChannelBuffer *_pRpcChannelBuffer, PRPC_MESSAGE _pRpcMessage, DWORD *_pdwStubPhase);
HRESULT STDMETHODCALLTYPE ISCardISO7816_GetChallenge_Proxy(ISCardISO7816 __RPC_FAR *This, LONG lBytesExpected, LPSCARDCMD __RPC_FAR *ppCmd);
void __RPC_STUB ISCardISO7816_GetChallenge_Stub(IRpcStubBuffer *This, IRpcChannelBuffer *_pRpcChannelBuffer, PRPC_MESSAGE _pRpcMessage, DWORD *_pdwStubPhase);
HRESULT STDMETHODCALLTYPE ISCardISO7816_GetData_Proxy(ISCardISO7816 __RPC_FAR *This, BYTE byP1, BYTE byP2, LONG lBytesToGet, LPSCARDCMD __RPC_FAR *ppCmd);
void __RPC_STUB ISCardISO7816_GetData_Stub(IRpcStubBuffer *This, IRpcChannelBuffer *_pRpcChannelBuffer, PRPC_MESSAGE _pRpcMessage, DWORD *_pdwStubPhase);
HRESULT STDMETHODCALLTYPE ISCardISO7816_GetResponse_Proxy(ISCardISO7816 __RPC_FAR *This, BYTE byP1, BYTE byP2, LONG lDataLength, LPSCARDCMD __RPC_FAR *ppCmd);
void __RPC_STUB ISCardISO7816_GetResponse_Stub(IRpcStubBuffer *This, IRpcChannelBuffer *_pRpcChannelBuffer, PRPC_MESSAGE _pRpcMessage, DWORD *_pdwStubPhase);
HRESULT STDMETHODCALLTYPE ISCardISO7816_InternalAuthenticate_Proxy(ISCardISO7816 __RPC_FAR *This, BYTE byAlgorithmRef, BYTE bySecretRef, LPBYTEBUFFER pChallenge, LONG lReplyBytes, LPSCARDCMD __RPC_FAR *ppCmd);
void __RPC_STUB ISCardISO7816_InternalAuthenticate_Stub(IRpcStubBuffer *This, IRpcChannelBuffer *_pRpcChannelBuffer, PRPC_MESSAGE _pRpcMessage, DWORD *_pdwStubPhase);
HRESULT STDMETHODCALLTYPE ISCardISO7816_ManageChannel_Proxy(ISCardISO7816 __RPC_FAR *This, BYTE byChannelState, BYTE byChannel, LPSCARDCMD __RPC_FAR *ppCmd);
void __RPC_STUB ISCardISO7816_ManageChannel_Stub(IRpcStubBuffer *This, IRpcChannelBuffer *_pRpcChannelBuffer, PRPC_MESSAGE _pRpcMessage, DWORD *_pdwStubPhase);
HRESULT STDMETHODCALLTYPE ISCardISO7816_PutData_Proxy(ISCardISO7816 __RPC_FAR *This, BYTE byP1, BYTE byP2, LPBYTEBUFFER pData, LPSCARDCMD __RPC_FAR *ppCmd);
void __RPC_STUB ISCardISO7816_PutData_Stub(IRpcStubBuffer *This, IRpcChannelBuffer *_pRpcChannelBuffer, PRPC_MESSAGE _pRpcMessage, DWORD *_pdwStubPhase);
HRESULT STDMETHODCALLTYPE ISCardISO7816_ReadBinary_Proxy(ISCardISO7816 __RPC_FAR *This, BYTE byP1, BYTE byP2, LONG lBytesToRead, LPSCARDCMD __RPC_FAR *ppCmd);
void __RPC_STUB ISCardISO7816_ReadBinary_Stub(IRpcStubBuffer *This, IRpcChannelBuffer *_pRpcChannelBuffer, PRPC_MESSAGE _pRpcMessage, DWORD *_pdwStubPhase);
HRESULT STDMETHODCALLTYPE ISCardISO7816_ReadRecord_Proxy(ISCardISO7816 __RPC_FAR *This, BYTE byRecordId, BYTE byRefCtrl, LONG lBytesToRead, LPSCARDCMD __RPC_FAR *ppCmd);
void __RPC_STUB ISCardISO7816_ReadRecord_Stub(IRpcStubBuffer *This, IRpcChannelBuffer *_pRpcChannelBuffer, PRPC_MESSAGE _pRpcMessage, DWORD *_pdwStubPhase);
HRESULT STDMETHODCALLTYPE ISCardISO7816_SelectFile_Proxy(ISCardISO7816 __RPC_FAR *This, BYTE byP1, BYTE byP2, LPBYTEBUFFER pData, LONG lBytesToRead, LPSCARDCMD __RPC_FAR *ppCmd);
void __RPC_STUB ISCardISO7816_SelectFile_Stub(IRpcStubBuffer *This, IRpcChannelBuffer *_pRpcChannelBuffer, PRPC_MESSAGE _pRpcMessage, DWORD *_pdwStubPhase);
HRESULT STDMETHODCALLTYPE ISCardISO7816_SetDefaultClassId_Proxy(ISCardISO7816 __RPC_FAR *This, BYTE byClass);
void __RPC_STUB ISCardISO7816_SetDefaultClassId_Stub(IRpcStubBuffer *This, IRpcChannelBuffer *_pRpcChannelBuffer, PRPC_MESSAGE _pRpcMessage, DWORD *_pdwStubPhase);
HRESULT STDMETHODCALLTYPE ISCardISO7816_UpdateBinary_Proxy(ISCardISO7816 __RPC_FAR *This, BYTE byP1, BYTE byP2, LPBYTEBUFFER pData, LPSCARDCMD __RPC_FAR *ppCmd);
void __RPC_STUB ISCardISO7816_UpdateBinary_Stub(IRpcStubBuffer *This, IRpcChannelBuffer *_pRpcChannelBuffer, PRPC_MESSAGE _pRpcMessage, DWORD *_pdwStubPhase);
HRESULT STDMETHODCALLTYPE ISCardISO7816_UpdateRecord_Proxy(ISCardISO7816 __RPC_FAR *This, BYTE byRecordId, BYTE byRefCtrl, LPBYTEBUFFER pData, LPSCARDCMD __RPC_FAR *ppCmd);
void __RPC_STUB ISCardISO7816_UpdateRecord_Stub(IRpcStubBuffer *This, IRpcChannelBuffer *_pRpcChannelBuffer, PRPC_MESSAGE _pRpcMessage, DWORD *_pdwStubPhase);
HRESULT STDMETHODCALLTYPE ISCardISO7816_Verify_Proxy(ISCardISO7816 __RPC_FAR *This, BYTE byRefCtrl, LPBYTEBUFFER pData, LPSCARDCMD __RPC_FAR *ppCmd);
void __RPC_STUB ISCardISO7816_Verify_Stub(IRpcStubBuffer *This, IRpcChannelBuffer *_pRpcChannelBuffer, PRPC_MESSAGE _pRpcMessage, DWORD *_pdwStubPhase);
HRESULT STDMETHODCALLTYPE ISCardISO7816_WriteBinary_Proxy(ISCardISO7816 __RPC_FAR *This, BYTE byP1, BYTE byP2, LPBYTEBUFFER pData, LPSCARDCMD __RPC_FAR *ppCmd);
void __RPC_STUB ISCardISO7816_WriteBinary_Stub(IRpcStubBuffer *This, IRpcChannelBuffer *_pRpcChannelBuffer, PRPC_MESSAGE _pRpcMessage, DWORD *_pdwStubPhase);
HRESULT STDMETHODCALLTYPE ISCardISO7816_WriteRecord_Proxy(ISCardISO7816 __RPC_FAR *This, BYTE byRecordId, BYTE byRefCtrl, LPBYTEBUFFER pData, LPSCARDCMD __RPC_FAR *ppCmd);
void __RPC_STUB ISCardISO7816_WriteRecord_Stub(IRpcStubBuffer *This, IRpcChannelBuffer *_pRpcChannelBuffer, PRPC_MESSAGE _pRpcMessage, DWORD *_pdwStubPhase);
#endif
#endif
#ifndef _LPSCARD_DEFINED
#define _LPSCARD_DEFINED
extern RPC_IF_HANDLE __MIDL_itf_scardssp_0247_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_scardssp_0247_v0_0_s_ifspec;
#ifndef __ISCard_INTERFACE_DEFINED__
#define __ISCard_INTERFACE_DEFINED__
typedef ISCard __RPC_FAR *LPSCARD;
typedef LPSCARD LPSMARTCARD;
extern const IID IID_ISCard;
typedef struct ISCardVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE __RPC_FAR * QueryInterface) (ISCard __RPC_FAR * This, REFIID riid, void __RPC_FAR * __RPC_FAR * ppvObject);
	ULONG(STDMETHODCALLTYPE __RPC_FAR * AddRef) (ISCard __RPC_FAR * This);
	ULONG(STDMETHODCALLTYPE __RPC_FAR * Release) (ISCard __RPC_FAR * This);
	HRESULT(STDMETHODCALLTYPE __RPC_FAR * GetTypeInfoCount) (ISCard __RPC_FAR * This, UINT __RPC_FAR * pctinfo);
	HRESULT(STDMETHODCALLTYPE __RPC_FAR * GetTypeInfo) (ISCard __RPC_FAR * This, UINT iTInfo, LCID lcid, ITypeInfo __RPC_FAR * __RPC_FAR * ppTInfo);
	HRESULT(STDMETHODCALLTYPE __RPC_FAR * GetIDsOfNames) (ISCard __RPC_FAR * This, REFIID riid, LPOLESTR __RPC_FAR * rgszNames, UINT cNames, LCID lcid, DISPID __RPC_FAR * rgDispId);
	HRESULT(STDMETHODCALLTYPE __RPC_FAR * Invoke) (ISCard __RPC_FAR * This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS __RPC_FAR * pDispParams, VARIANT __RPC_FAR * pVarResult, EXCEPINFO __RPC_FAR * pExcepInfo, UINT __RPC_FAR * puArgErr);
	HRESULT(STDMETHODCALLTYPE __RPC_FAR * get_Atr) (ISCard __RPC_FAR * This, LPBYTEBUFFER __RPC_FAR * ppAtr);
	HRESULT(STDMETHODCALLTYPE __RPC_FAR * get_CardHandle) (ISCard __RPC_FAR * This, HSCARD __RPC_FAR * pHandle);
	HRESULT(STDMETHODCALLTYPE __RPC_FAR * get_Context) (ISCard __RPC_FAR * This, HSCARDCONTEXT __RPC_FAR * pContext);
	HRESULT(STDMETHODCALLTYPE __RPC_FAR * get_Protocol) (ISCard __RPC_FAR * This, SCARD_PROTOCOLS __RPC_FAR * pProtocol);
	HRESULT(STDMETHODCALLTYPE __RPC_FAR * get_Status) (ISCard __RPC_FAR * This, SCARD_STATES __RPC_FAR * pStatus);
	HRESULT(STDMETHODCALLTYPE __RPC_FAR * AttachByHandle) (ISCard __RPC_FAR * This, HSCARD hCard);
	HRESULT(STDMETHODCALLTYPE __RPC_FAR * AttachByReader) (ISCard __RPC_FAR * This, BSTR bstrReaderName, SCARD_SHARE_MODES ShareMode, SCARD_PROTOCOLS PrefProtocol);
	HRESULT(STDMETHODCALLTYPE __RPC_FAR * Detach) (ISCard __RPC_FAR * This, SCARD_DISPOSITIONS Disposition);
	HRESULT(STDMETHODCALLTYPE __RPC_FAR * LockSCard) (ISCard __RPC_FAR * This);
	HRESULT(STDMETHODCALLTYPE __RPC_FAR * ReAttach) (ISCard __RPC_FAR * This, SCARD_SHARE_MODES ShareMode, SCARD_DISPOSITIONS InitState);
	HRESULT(STDMETHODCALLTYPE __RPC_FAR * Transaction) (ISCard __RPC_FAR * This, LPSCARDCMD __RPC_FAR * ppCmd);
	HRESULT(STDMETHODCALLTYPE __RPC_FAR * UnlockSCard) (ISCard __RPC_FAR * This, SCARD_DISPOSITIONS Disposition);
	END_INTERFACE
}  ISCardVtbl;
interface ISCard
{
	CONST_VTBL struct ISCardVtbl __RPC_FAR *lpVtbl;
};
#ifdef COBJMACROS
#define ISCard_QueryInterface(This,riid,ppvObject) (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)
#define ISCard_AddRef(This) (This)->lpVtbl -> AddRef(This)
#define ISCard_Release(This) (This)->lpVtbl -> Release(This)
#define ISCard_GetTypeInfoCount(This,pctinfo) (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo)
#define ISCard_GetTypeInfo(This,iTInfo,lcid,ppTInfo) (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo)
#define ISCard_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)
#define ISCard_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)
#define ISCard_get_Atr(This,ppAtr) (This)->lpVtbl -> get_Atr(This,ppAtr)
#define ISCard_get_CardHandle(This,pHandle) (This)->lpVtbl -> get_CardHandle(This,pHandle)
#define ISCard_get_Context(This,pContext) (This)->lpVtbl -> get_Context(This,pContext)
#define ISCard_get_Protocol(This,pProtocol) (This)->lpVtbl -> get_Protocol(This,pProtocol)
#define ISCard_get_Status(This,pStatus) (This)->lpVtbl -> get_Status(This,pStatus)
#define ISCard_AttachByHandle(This,hCard) (This)->lpVtbl -> AttachByHandle(This,hCard)
#define ISCard_AttachByReader(This,bstrReaderName,ShareMode,PrefProtocol) (This)->lpVtbl -> AttachByReader(This,bstrReaderName,ShareMode,PrefProtocol)
#define ISCard_Detach(This,Disposition) (This)->lpVtbl -> Detach(This,Disposition)
#define ISCard_LockSCard(This) (This)->lpVtbl -> LockSCard(This)
#define ISCard_ReAttach(This,ShareMode,InitState) (This)->lpVtbl -> ReAttach(This,ShareMode,InitState)
#define ISCard_Transaction(This,ppCmd) (This)->lpVtbl -> Transaction(This,ppCmd)
#define ISCard_UnlockSCard(This,Disposition) (This)->lpVtbl -> UnlockSCard(This,Disposition)
#endif
HRESULT STDMETHODCALLTYPE ISCard_get_Atr_Proxy(ISCard __RPC_FAR *This, LPBYTEBUFFER __RPC_FAR *ppAtr);
void __RPC_STUB ISCard_get_Atr_Stub(IRpcStubBuffer *This, IRpcChannelBuffer *_pRpcChannelBuffer, PRPC_MESSAGE _pRpcMessage, DWORD *_pdwStubPhase);
HRESULT STDMETHODCALLTYPE ISCard_get_CardHandle_Proxy(ISCard __RPC_FAR *This, HSCARD __RPC_FAR *pHandle);
void __RPC_STUB ISCard_get_CardHandle_Stub(IRpcStubBuffer *This, IRpcChannelBuffer *_pRpcChannelBuffer, PRPC_MESSAGE _pRpcMessage, DWORD *_pdwStubPhase);
HRESULT STDMETHODCALLTYPE ISCard_get_Context_Proxy(ISCard __RPC_FAR *This, HSCARDCONTEXT __RPC_FAR *pContext);
void __RPC_STUB ISCard_get_Context_Stub(IRpcStubBuffer *This, IRpcChannelBuffer *_pRpcChannelBuffer, PRPC_MESSAGE _pRpcMessage, DWORD *_pdwStubPhase);
HRESULT STDMETHODCALLTYPE ISCard_get_Protocol_Proxy(ISCard __RPC_FAR *This, SCARD_PROTOCOLS __RPC_FAR *pProtocol);
void __RPC_STUB ISCard_get_Protocol_Stub(IRpcStubBuffer *This, IRpcChannelBuffer *_pRpcChannelBuffer, PRPC_MESSAGE _pRpcMessage, DWORD *_pdwStubPhase);
HRESULT STDMETHODCALLTYPE ISCard_get_Status_Proxy(ISCard __RPC_FAR *This, SCARD_STATES __RPC_FAR *pStatus);
void __RPC_STUB ISCard_get_Status_Stub(IRpcStubBuffer *This, IRpcChannelBuffer *_pRpcChannelBuffer, PRPC_MESSAGE _pRpcMessage, DWORD *_pdwStubPhase);
HRESULT STDMETHODCALLTYPE ISCard_AttachByHandle_Proxy(ISCard __RPC_FAR *This, HSCARD hCard);
void __RPC_STUB ISCard_AttachByHandle_Stub(IRpcStubBuffer *This, IRpcChannelBuffer *_pRpcChannelBuffer, PRPC_MESSAGE _pRpcMessage, DWORD *_pdwStubPhase);
HRESULT STDMETHODCALLTYPE ISCard_AttachByReader_Proxy(ISCard __RPC_FAR *This, BSTR bstrReaderName, SCARD_SHARE_MODES ShareMode, SCARD_PROTOCOLS PrefProtocol);
void __RPC_STUB ISCard_AttachByReader_Stub(IRpcStubBuffer *This, IRpcChannelBuffer *_pRpcChannelBuffer, PRPC_MESSAGE _pRpcMessage, DWORD *_pdwStubPhase);
HRESULT STDMETHODCALLTYPE ISCard_Detach_Proxy(ISCard __RPC_FAR *This, SCARD_DISPOSITIONS Disposition);
void __RPC_STUB ISCard_Detach_Stub(IRpcStubBuffer *This, IRpcChannelBuffer *_pRpcChannelBuffer, PRPC_MESSAGE _pRpcMessage, DWORD *_pdwStubPhase);
HRESULT STDMETHODCALLTYPE ISCard_LockSCard_Proxy(ISCard __RPC_FAR *This);
void __RPC_STUB ISCard_LockSCard_Stub(IRpcStubBuffer *This, IRpcChannelBuffer *_pRpcChannelBuffer, PRPC_MESSAGE _pRpcMessage, DWORD *_pdwStubPhase);
HRESULT STDMETHODCALLTYPE ISCard_ReAttach_Proxy(ISCard __RPC_FAR *This, SCARD_SHARE_MODES ShareMode, SCARD_DISPOSITIONS InitState);
void __RPC_STUB ISCard_ReAttach_Stub(IRpcStubBuffer *This, IRpcChannelBuffer *_pRpcChannelBuffer, PRPC_MESSAGE _pRpcMessage, DWORD *_pdwStubPhase);
HRESULT STDMETHODCALLTYPE ISCard_Transaction_Proxy(ISCard __RPC_FAR *This, LPSCARDCMD __RPC_FAR *ppCmd);
void __RPC_STUB ISCard_Transaction_Stub(IRpcStubBuffer *This, IRpcChannelBuffer *_pRpcChannelBuffer, PRPC_MESSAGE _pRpcMessage, DWORD *_pdwStubPhase);
HRESULT STDMETHODCALLTYPE ISCard_UnlockSCard_Proxy(ISCard __RPC_FAR *This, SCARD_DISPOSITIONS Disposition);
void __RPC_STUB ISCard_UnlockSCard_Stub(IRpcStubBuffer *This, IRpcChannelBuffer *_pRpcChannelBuffer, PRPC_MESSAGE _pRpcMessage, DWORD *_pdwStubPhase);
#endif
#endif
#ifndef _LPSCARDDATABASE_DEFINED
#define _LPSCARDDATABASE_DEFINED
extern RPC_IF_HANDLE __MIDL_itf_scardssp_0248_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_scardssp_0248_v0_0_s_ifspec;
#ifndef __ISCardDatabase_INTERFACE_DEFINED__
#define __ISCardDatabase_INTERFACE_DEFINED__
typedef ISCardDatabase __RPC_FAR *LPSCARDDATABASE;
extern const IID IID_ISCardDatabase;
typedef struct ISCardDatabaseVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE __RPC_FAR * QueryInterface) (ISCardDatabase __RPC_FAR * This, REFIID riid, void __RPC_FAR * __RPC_FAR * ppvObject);
	ULONG(STDMETHODCALLTYPE __RPC_FAR * AddRef) (ISCardDatabase __RPC_FAR * This);
	ULONG(STDMETHODCALLTYPE __RPC_FAR * Release) (ISCardDatabase __RPC_FAR * This);
	HRESULT(STDMETHODCALLTYPE __RPC_FAR * GetTypeInfoCount) (ISCardDatabase __RPC_FAR * This, UINT __RPC_FAR * pctinfo);
	HRESULT(STDMETHODCALLTYPE __RPC_FAR * GetTypeInfo) (ISCardDatabase __RPC_FAR * This, UINT iTInfo, LCID lcid, ITypeInfo __RPC_FAR * __RPC_FAR * ppTInfo);
	HRESULT(STDMETHODCALLTYPE __RPC_FAR * GetIDsOfNames) (ISCardDatabase __RPC_FAR * This, REFIID riid, LPOLESTR __RPC_FAR * rgszNames, UINT cNames, LCID lcid, DISPID __RPC_FAR * rgDispId);
	HRESULT(STDMETHODCALLTYPE __RPC_FAR * Invoke) (ISCardDatabase __RPC_FAR * This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS __RPC_FAR * pDispParams, VARIANT __RPC_FAR * pVarResult, EXCEPINFO __RPC_FAR * pExcepInfo, UINT __RPC_FAR * puArgErr);
	HRESULT(STDMETHODCALLTYPE __RPC_FAR * GetProviderCardId) (ISCardDatabase __RPC_FAR * This, BSTR bstrCardName, LPGUID __RPC_FAR * ppguidProviderId);
	HRESULT(STDMETHODCALLTYPE __RPC_FAR * ListCardInterfaces) (ISCardDatabase __RPC_FAR * This, BSTR bstrCardName, LPSAFEARRAY __RPC_FAR * ppInterfaceGuids);
	HRESULT(STDMETHODCALLTYPE __RPC_FAR * ListCards) (ISCardDatabase __RPC_FAR * This, LPBYTEBUFFER pAtr, LPSAFEARRAY pInterfaceGuids, long localeId, LPSAFEARRAY __RPC_FAR * ppCardNames);
	HRESULT(STDMETHODCALLTYPE __RPC_FAR * ListReaderGroups) (ISCardDatabase __RPC_FAR * This, long localeId, LPSAFEARRAY __RPC_FAR * ppReaderGroups);
	HRESULT(STDMETHODCALLTYPE __RPC_FAR * ListReaders) (ISCardDatabase __RPC_FAR * This, long localeId, LPSAFEARRAY __RPC_FAR * ppReaders);
	END_INTERFACE
}  ISCardDatabaseVtbl;
interface ISCardDatabase
{
	CONST_VTBL struct ISCardDatabaseVtbl __RPC_FAR *lpVtbl;
};
#ifdef COBJMACROS
#define ISCardDatabase_QueryInterface(This,riid,ppvObject) (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)
#define ISCardDatabase_AddRef(This) (This)->lpVtbl -> AddRef(This)
#define ISCardDatabase_Release(This) (This)->lpVtbl -> Release(This)
#define ISCardDatabase_GetTypeInfoCount(This,pctinfo) (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo)
#define ISCardDatabase_GetTypeInfo(This,iTInfo,lcid,ppTInfo) (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo)
#define ISCardDatabase_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)
#define ISCardDatabase_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)
#define ISCardDatabase_GetProviderCardId(This,bstrCardName,ppguidProviderId) (This)->lpVtbl -> GetProviderCardId(This,bstrCardName,ppguidProviderId)
#define ISCardDatabase_ListCardInterfaces(This,bstrCardName,ppInterfaceGuids) (This)->lpVtbl -> ListCardInterfaces(This,bstrCardName,ppInterfaceGuids)
#define ISCardDatabase_ListCards(This,pAtr,pInterfaceGuids,localeId,ppCardNames) (This)->lpVtbl -> ListCards(This,pAtr,pInterfaceGuids,localeId,ppCardNames)
#define ISCardDatabase_ListReaderGroups(This,localeId,ppReaderGroups) (This)->lpVtbl -> ListReaderGroups(This,localeId,ppReaderGroups)
#define ISCardDatabase_ListReaders(This,localeId,ppReaders) (This)->lpVtbl -> ListReaders(This,localeId,ppReaders)
#endif
HRESULT STDMETHODCALLTYPE ISCardDatabase_GetProviderCardId_Proxy(ISCardDatabase __RPC_FAR *This, BSTR bstrCardName, LPGUID __RPC_FAR *ppguidProviderId);
void __RPC_STUB ISCardDatabase_GetProviderCardId_Stub(IRpcStubBuffer *This, IRpcChannelBuffer *_pRpcChannelBuffer, PRPC_MESSAGE _pRpcMessage, DWORD *_pdwStubPhase);
HRESULT STDMETHODCALLTYPE ISCardDatabase_ListCardInterfaces_Proxy(ISCardDatabase __RPC_FAR *This, BSTR bstrCardName, LPSAFEARRAY __RPC_FAR *ppInterfaceGuids);
void __RPC_STUB ISCardDatabase_ListCardInterfaces_Stub(IRpcStubBuffer *This, IRpcChannelBuffer *_pRpcChannelBuffer, PRPC_MESSAGE _pRpcMessage, DWORD *_pdwStubPhase);
HRESULT STDMETHODCALLTYPE ISCardDatabase_ListCards_Proxy(ISCardDatabase __RPC_FAR *This, LPBYTEBUFFER pAtr, LPSAFEARRAY pInterfaceGuids, long localeId, LPSAFEARRAY __RPC_FAR *ppCardNames);
void __RPC_STUB ISCardDatabase_ListCards_Stub(IRpcStubBuffer *This, IRpcChannelBuffer *_pRpcChannelBuffer, PRPC_MESSAGE _pRpcMessage, DWORD *_pdwStubPhase);
HRESULT STDMETHODCALLTYPE ISCardDatabase_ListReaderGroups_Proxy(ISCardDatabase __RPC_FAR *This, long localeId, LPSAFEARRAY __RPC_FAR *ppReaderGroups);
void __RPC_STUB ISCardDatabase_ListReaderGroups_Stub(IRpcStubBuffer *This, IRpcChannelBuffer *_pRpcChannelBuffer, PRPC_MESSAGE _pRpcMessage, DWORD *_pdwStubPhase);
HRESULT STDMETHODCALLTYPE ISCardDatabase_ListReaders_Proxy(ISCardDatabase __RPC_FAR *This, long localeId, LPSAFEARRAY __RPC_FAR *ppReaders);
void __RPC_STUB ISCardDatabase_ListReaders_Stub(IRpcStubBuffer *This, IRpcChannelBuffer *_pRpcChannelBuffer, PRPC_MESSAGE _pRpcMessage, DWORD *_pdwStubPhase);
#endif
#endif
#ifndef _LPSCARDLOCATE_DEFINED
#define _LPSCARDLOCATE_DEFINED
extern RPC_IF_HANDLE __MIDL_itf_scardssp_0249_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_scardssp_0249_v0_0_s_ifspec;
#ifndef __ISCardLocate_INTERFACE_DEFINED__
#define __ISCardLocate_INTERFACE_DEFINED__
typedef ISCardLocate __RPC_FAR *LPSCARDLOCATE;
typedef LPSCARDLOCATE LPSCARDLOC;
extern const IID IID_ISCardLocate;
typedef struct ISCardLocateVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE __RPC_FAR * QueryInterface) (ISCardLocate __RPC_FAR * This, REFIID riid, void __RPC_FAR * __RPC_FAR * ppvObject);
	ULONG(STDMETHODCALLTYPE __RPC_FAR * AddRef) (ISCardLocate __RPC_FAR * This);
	ULONG(STDMETHODCALLTYPE __RPC_FAR * Release) (ISCardLocate __RPC_FAR * This);
	HRESULT(STDMETHODCALLTYPE __RPC_FAR * GetTypeInfoCount) (ISCardLocate __RPC_FAR * This, UINT __RPC_FAR * pctinfo);
	HRESULT(STDMETHODCALLTYPE __RPC_FAR * GetTypeInfo) (ISCardLocate __RPC_FAR * This, UINT iTInfo, LCID lcid, ITypeInfo __RPC_FAR * __RPC_FAR * ppTInfo);
	HRESULT(STDMETHODCALLTYPE __RPC_FAR * GetIDsOfNames) (ISCardLocate __RPC_FAR * This, REFIID riid, LPOLESTR __RPC_FAR * rgszNames, UINT cNames, LCID lcid, DISPID __RPC_FAR * rgDispId);
	HRESULT(STDMETHODCALLTYPE __RPC_FAR * Invoke) (ISCardLocate __RPC_FAR * This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS __RPC_FAR * pDispParams, VARIANT __RPC_FAR * pVarResult, EXCEPINFO __RPC_FAR * pExcepInfo, UINT __RPC_FAR * puArgErr);
	HRESULT(STDMETHODCALLTYPE __RPC_FAR * ConfigureCardGuidSearch) (ISCardLocate __RPC_FAR * This, LPSAFEARRAY pCardGuids, LPSAFEARRAY pGroupNames, BSTR bstrTitle, LONG lFlags);
	HRESULT(STDMETHODCALLTYPE __RPC_FAR * ConfigureCardNameSearch) (ISCardLocate __RPC_FAR * This, LPSAFEARRAY pCardNames, LPSAFEARRAY pGroupNames, BSTR bstrTitle, LONG lFlags);
	HRESULT(STDMETHODCALLTYPE __RPC_FAR * FindCard) (ISCardLocate __RPC_FAR * This, SCARD_SHARE_MODES ShareMode, SCARD_PROTOCOLS Protocols, LONG lFlags, LPSCARDINFO __RPC_FAR * ppCardInfo);
	END_INTERFACE
}  ISCardLocateVtbl;
interface ISCardLocate
{
	CONST_VTBL struct ISCardLocateVtbl __RPC_FAR *lpVtbl;
};
#ifdef COBJMACROS
#define ISCardLocate_QueryInterface(This,riid,ppvObject) (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)
#define ISCardLocate_AddRef(This) (This)->lpVtbl -> AddRef(This)
#define ISCardLocate_Release(This) (This)->lpVtbl -> Release(This)
#define ISCardLocate_GetTypeInfoCount(This,pctinfo) (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo)
#define ISCardLocate_GetTypeInfo(This,iTInfo,lcid,ppTInfo) (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo)
#define ISCardLocate_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)
#define ISCardLocate_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)
#define ISCardLocate_ConfigureCardGuidSearch(This,pCardGuids,pGroupNames,bstrTitle,lFlags) (This)->lpVtbl -> ConfigureCardGuidSearch(This,pCardGuids,pGroupNames,bstrTitle,lFlags)
#define ISCardLocate_ConfigureCardNameSearch(This,pCardNames,pGroupNames,bstrTitle,lFlags) (This)->lpVtbl -> ConfigureCardNameSearch(This,pCardNames,pGroupNames,bstrTitle,lFlags)
#define ISCardLocate_FindCard(This,ShareMode,Protocols,lFlags,ppCardInfo) (This)->lpVtbl -> FindCard(This,ShareMode,Protocols,lFlags,ppCardInfo)
#endif
HRESULT STDMETHODCALLTYPE ISCardLocate_ConfigureCardGuidSearch_Proxy(ISCardLocate __RPC_FAR *This, LPSAFEARRAY pCardGuids, LPSAFEARRAY pGroupNames, BSTR bstrTitle, LONG lFlags);
void __RPC_STUB ISCardLocate_ConfigureCardGuidSearch_Stub(IRpcStubBuffer *This, IRpcChannelBuffer *_pRpcChannelBuffer, PRPC_MESSAGE _pRpcMessage, DWORD *_pdwStubPhase);
HRESULT STDMETHODCALLTYPE ISCardLocate_ConfigureCardNameSearch_Proxy(ISCardLocate __RPC_FAR *This, LPSAFEARRAY pCardNames, LPSAFEARRAY pGroupNames, BSTR bstrTitle, LONG lFlags);
void __RPC_STUB ISCardLocate_ConfigureCardNameSearch_Stub(IRpcStubBuffer *This, IRpcChannelBuffer *_pRpcChannelBuffer, PRPC_MESSAGE _pRpcMessage, DWORD *_pdwStubPhase);
HRESULT STDMETHODCALLTYPE ISCardLocate_FindCard_Proxy(ISCardLocate __RPC_FAR *This, SCARD_SHARE_MODES ShareMode, SCARD_PROTOCOLS Protocols, LONG lFlags, LPSCARDINFO __RPC_FAR *ppCardInfo);
void __RPC_STUB ISCardLocate_FindCard_Stub(IRpcStubBuffer *This, IRpcChannelBuffer *_pRpcChannelBuffer, PRPC_MESSAGE _pRpcMessage, DWORD *_pdwStubPhase);
#endif
#endif
extern RPC_IF_HANDLE __MIDL_itf_scardssp_0250_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_scardssp_0250_v0_0_s_ifspec;
#ifndef __SCARDSSPLib_LIBRARY_DEFINED__
#define __SCARDSSPLib_LIBRARY_DEFINED__
extern const IID LIBID_SCARDSSPLib;
extern const CLSID CLSID_CByteBuffer;
extern const CLSID CLSID_CSCardTypeConv;
extern const CLSID CLSID_CSCardCmd;
extern const CLSID CLSID_CSCardISO7816;
extern const CLSID CLSID_CSCard;
extern const CLSID CLSID_CSCardDatabase;
extern const CLSID CLSID_CSCardLocate;
#endif
unsigned long __RPC_USER BSTR_UserSize(unsigned long __RPC_FAR *, unsigned long, BSTR __RPC_FAR *);
unsigned char __RPC_FAR *__RPC_USER BSTR_UserMarshal(unsigned long __RPC_FAR *, unsigned char __RPC_FAR *, BSTR __RPC_FAR *);
unsigned char __RPC_FAR *__RPC_USER BSTR_UserUnmarshal(unsigned long __RPC_FAR *, unsigned char __RPC_FAR *, BSTR __RPC_FAR *);
void __RPC_USER BSTR_UserFree(unsigned long __RPC_FAR *, BSTR __RPC_FAR *);
unsigned long __RPC_USER HGLOBAL_UserSize(unsigned long __RPC_FAR *, unsigned long, HGLOBAL __RPC_FAR *);
unsigned char __RPC_FAR *__RPC_USER HGLOBAL_UserMarshal(unsigned long __RPC_FAR *, unsigned char __RPC_FAR *, HGLOBAL __RPC_FAR *);
unsigned char __RPC_FAR *__RPC_USER HGLOBAL_UserUnmarshal(unsigned long __RPC_FAR *, unsigned char __RPC_FAR *, HGLOBAL __RPC_FAR *);
void __RPC_USER HGLOBAL_UserFree(unsigned long __RPC_FAR *, HGLOBAL __RPC_FAR *);
unsigned long __RPC_USER LPSAFEARRAY_UserSize(unsigned long __RPC_FAR *, unsigned long, LPSAFEARRAY __RPC_FAR *);
unsigned char __RPC_FAR *__RPC_USER LPSAFEARRAY_UserMarshal(unsigned long __RPC_FAR *, unsigned char __RPC_FAR *, LPSAFEARRAY __RPC_FAR *);
unsigned char __RPC_FAR *__RPC_USER LPSAFEARRAY_UserUnmarshal(unsigned long __RPC_FAR *, unsigned char __RPC_FAR *, LPSAFEARRAY __RPC_FAR *);
void __RPC_USER LPSAFEARRAY_UserFree(unsigned long __RPC_FAR *, LPSAFEARRAY __RPC_FAR *);
#endif

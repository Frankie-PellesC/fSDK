/*+@@file@@----------------------------------------------------------------*//*!
 \file		MultInfo.h
 \par Description 
            Extension and update of headers for PellesC compiler suite.
 \par Project: 
            PellesC Headers extension
 \date		Created  on Sun Sep 11 22:02:52 2016
 \date		Modified on Sun Sep 11 22:02:52 2016
 \author	frankie
\*//*-@@file@@----------------------------------------------------------------*/

#include "rpc.h"
#include "rpcndr.h"
#ifndef COM_NO_WINDOWS_H
#include "windows.h"
#include "ole2.h"
#endif
#ifndef __multinfo_h__
#define __multinfo_h__
#if __POCC__ >= 500
#pragma once
#endif
#ifndef __IProvideClassInfo_FWD_DEFINED__
#define __IProvideClassInfo_FWD_DEFINED__
typedef interface IProvideClassInfo IProvideClassInfo;
#endif
#ifndef __IProvideClassInfo2_FWD_DEFINED__
#define __IProvideClassInfo2_FWD_DEFINED__
typedef interface IProvideClassInfo2 IProvideClassInfo2;
#endif
#ifndef __IProvideMultipleClassInfo_FWD_DEFINED__
#define __IProvideMultipleClassInfo_FWD_DEFINED__
typedef interface IProvideMultipleClassInfo IProvideMultipleClassInfo;
#endif
#include "oaidl.h"
void __RPC_FAR *__RPC_USER MIDL_user_allocate(size_t);
void __RPC_USER MIDL_user_free(void __RPC_FAR *);
#ifndef _OLECTL_H_
#include <olectl.h>
#endif
DEFINE_GUID(IID_IProvideMultipleClassInfo, 0xa7aba9c1, 0x8983, 0x11cf, 0x8f, 0x20, 0x0, 0x80, 0x5f, 0x2c, 0xd0, 0x64);
extern RPC_IF_HANDLE __MIDL__intf_0053_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL__intf_0053_v0_0_s_ifspec;
#ifndef __IProvideMultipleClassInfo_INTERFACE_DEFINED__
#define __IProvideMultipleClassInfo_INTERFACE_DEFINED__
#define MULTICLASSINFO_GETTYPEINFO           0x00000001
#define MULTICLASSINFO_GETNUMRESERVEDDISPIDS 0x00000002
#define MULTICLASSINFO_GETIIDPRIMARY         0x00000004
#define MULTICLASSINFO_GETIIDSOURCE          0x00000008
#define TIFLAGS_EXTENDDISPATCHONLY           0x00000001
extern const IID IID_IProvideMultipleClassInfo;
typedef struct IProvideMultipleClassInfoVtbl
{
	HRESULT(__stdcall __RPC_FAR * QueryInterface) (IProvideMultipleClassInfo __RPC_FAR * This, REFIID riid, void __RPC_FAR * __RPC_FAR * ppvObject);
	ULONG(__stdcall __RPC_FAR * AddRef) (IProvideMultipleClassInfo __RPC_FAR * This);
	ULONG(__stdcall __RPC_FAR * Release) (IProvideMultipleClassInfo __RPC_FAR * This);
	HRESULT(__stdcall __RPC_FAR * GetClassInfo) (IProvideMultipleClassInfo __RPC_FAR * This, LPTYPEINFO __RPC_FAR * ppTI);
	HRESULT(__stdcall __RPC_FAR * GetGUID) (IProvideMultipleClassInfo __RPC_FAR * This, DWORD dwGuidKind, GUID __RPC_FAR * pGUID);
	HRESULT(__stdcall __RPC_FAR * GetMultiTypeInfoCount) (IProvideMultipleClassInfo __RPC_FAR * This, ULONG __RPC_FAR * pcti);
	HRESULT(__stdcall __RPC_FAR * GetInfoOfIndex) (IProvideMultipleClassInfo __RPC_FAR * This, ULONG iti, DWORD dwFlags, ITypeInfo __RPC_FAR * __RPC_FAR * pptiCoClass, DWORD __RPC_FAR * pdwTIFlags, ULONG __RPC_FAR * pcdispidReserved, IID __RPC_FAR * piidPrimary, IID __RPC_FAR * piidSource);
} IProvideMultipleClassInfoVtbl;
interface IProvideMultipleClassInfo
{
	CONST_VTBL struct IProvideMultipleClassInfoVtbl __RPC_FAR *lpVtbl;
};
#ifdef COBJMACROS
#define IProvideMultipleClassInfo_QueryInterface(This,riid,ppvObject) (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)
#define IProvideMultipleClassInfo_AddRef(This) (This)->lpVtbl -> AddRef(This)
#define IProvideMultipleClassInfo_Release(This) (This)->lpVtbl -> Release(This)
#define IProvideMultipleClassInfo_GetClassInfo(This,ppTI) (This)->lpVtbl -> GetClassInfo(This,ppTI)
#define IProvideMultipleClassInfo_GetGUID(This,dwGuidKind,pGUID) (This)->lpVtbl -> GetGUID(This,dwGuidKind,pGUID)
#define IProvideMultipleClassInfo_GetMultiTypeInfoCount(This,pcti) (This)->lpVtbl -> GetMultiTypeInfoCount(This,pcti)
#define IProvideMultipleClassInfo_GetInfoOfIndex(This,iti,dwFlags,pptiCoClass,pdwTIFlags,pcdispidReserved,piidPrimary,piidSource) (This)->lpVtbl -> GetInfoOfIndex(This,iti,dwFlags,pptiCoClass,pdwTIFlags,pcdispidReserved,piidPrimary,piidSource)
#endif
HRESULT __stdcall IProvideMultipleClassInfo_GetMultiTypeInfoCount_Proxy(IProvideMultipleClassInfo __RPC_FAR *This, ULONG __RPC_FAR *pcti);
void __RPC_STUB IProvideMultipleClassInfo_GetMultiTypeInfoCount_Stub(IRpcStubBuffer *This, IRpcChannelBuffer *_pRpcChannelBuffer, PRPC_MESSAGE _pRpcMessage, DWORD *_pdwStubPhase);
HRESULT __stdcall IProvideMultipleClassInfo_GetInfoOfIndex_Proxy(IProvideMultipleClassInfo __RPC_FAR *This, ULONG iti, DWORD dwFlags, ITypeInfo __RPC_FAR *__RPC_FAR *pptiCoClass, DWORD __RPC_FAR *pdwTIFlags, ULONG __RPC_FAR *pcdispidReserved, IID __RPC_FAR *piidPrimary, IID __RPC_FAR *piidSource);
void __RPC_STUB IProvideMultipleClassInfo_GetInfoOfIndex_Stub(IRpcStubBuffer *This, IRpcChannelBuffer *_pRpcChannelBuffer, PRPC_MESSAGE _pRpcMessage, DWORD *_pdwStubPhase);
#endif
#endif

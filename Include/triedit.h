/*+@@file@@----------------------------------------------------------------*//*!
 \file		triedit.h
 \par Description 
            Extension and update of headers for PellesC compiler suite.
 \par Project: 
            PellesC Headers extension
 \date		Created  on Sat Sep 17 12:55:47 2016
 \date		Modified on Sat Sep 17 12:55:47 2016
 \author	frankie
\*//*-@@file@@----------------------------------------------------------------*/

#ifndef __REQUIRED_RPCNDR_H_VERSION__
#define __REQUIRED_RPCNDR_H_VERSION__ 440
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
#ifndef __triedit_h__
#define __triedit_h__
#if __POCC__ >= 500
#pragma once
#endif
#ifndef __ITriEditDocument_FWD_DEFINED__
#define __ITriEditDocument_FWD_DEFINED__
typedef interface ITriEditDocument ITriEditDocument;
#endif
#ifndef __TriEditDocument_FWD_DEFINED__
#define __TriEditDocument_FWD_DEFINED__
typedef struct TriEditDocument TriEditDocument;
#endif
#ifndef __IDocHostDragDropHandler_FWD_DEFINED__
#define __IDocHostDragDropHandler_FWD_DEFINED__
typedef interface IDocHostDragDropHandler IDocHostDragDropHandler;
#endif
#include <oaidl.h>
#include <ocidl.h>
void __RPC_FAR *__RPC_USER MIDL_user_allocate(size_t);
void __RPC_USER MIDL_user_free(void __RPC_FAR *);
#define dwFilterDefaults		0x00000000
#define dwFilterNone			0x00000001
#define dwFilterDTCs			0x00000002
#define dwFilterDTCsWithoutMetaTags	0x00000004
#define dwFilterServerSideScripts	0x00000008
#define dwPreserveSourceCode		0x00000010
#define dwFilterSourceCode		0x00000020
#define dwFilterMultiByteStream	0x10000000
#define dwFilterUsePstmNew           0x20000000
#define E_FILTER_FRAMESET		0x80100001
#define E_FILTER_SERVERSCRIPT	0x80100002
#define E_FILTER_MULTIPLETAGS	0x80100004
#define E_FILTER_SCRIPTLISTING	0x80100008
#define E_FILTER_SCRIPTLABEL		0x80100010
#define E_FILTER_SCRIPTTEXTAREA	0x80100020
#define E_FILTER_SCRIPTSELECT	0x80100040
extern RPC_IF_HANDLE __MIDL_itf_triedit_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_triedit_0000_v0_0_s_ifspec;
#ifndef __ITriEditDocument_INTERFACE_DEFINED__
#define __ITriEditDocument_INTERFACE_DEFINED__
extern const IID IID_ITriEditDocument;
typedef struct ITriEditDocumentVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE __RPC_FAR * QueryInterface) (ITriEditDocument __RPC_FAR * This, REFIID riid, void __RPC_FAR * __RPC_FAR * ppvObject);
	ULONG(STDMETHODCALLTYPE __RPC_FAR * AddRef) (ITriEditDocument __RPC_FAR * This);
	ULONG(STDMETHODCALLTYPE __RPC_FAR * Release) (ITriEditDocument __RPC_FAR * This);
	HRESULT(STDMETHODCALLTYPE __RPC_FAR * GetTypeInfoCount) (ITriEditDocument __RPC_FAR * This, UINT __RPC_FAR * pctinfo);
	HRESULT(STDMETHODCALLTYPE __RPC_FAR * GetTypeInfo) (ITriEditDocument __RPC_FAR * This, UINT iTInfo, LCID lcid, ITypeInfo __RPC_FAR * __RPC_FAR * ppTInfo);
	HRESULT(STDMETHODCALLTYPE __RPC_FAR * GetIDsOfNames) (ITriEditDocument __RPC_FAR * This, REFIID riid, LPOLESTR __RPC_FAR * rgszNames, UINT cNames, LCID lcid, DISPID __RPC_FAR * rgDispId);
	HRESULT(STDMETHODCALLTYPE __RPC_FAR * Invoke) (ITriEditDocument __RPC_FAR * This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS __RPC_FAR * pDispParams, VARIANT __RPC_FAR * pVarResult, EXCEPINFO __RPC_FAR * pExcepInfo, UINT __RPC_FAR * puArgErr);
	HRESULT(STDMETHODCALLTYPE __RPC_FAR * FilterIn) (ITriEditDocument __RPC_FAR * This, IUnknown __RPC_FAR * pStmOld, IUnknown __RPC_FAR * __RPC_FAR * ppStmNew, DWORD dwFlags, BSTR bstrBaseURL);
	HRESULT(STDMETHODCALLTYPE __RPC_FAR * FilterOut) (ITriEditDocument __RPC_FAR * This, IUnknown __RPC_FAR * pStmOld, IUnknown __RPC_FAR * __RPC_FAR * ppStmNew, DWORD dwFlags, BSTR bstrBaseURL);
	END_INTERFACE
}  ITriEditDocumentVtbl;
interface ITriEditDocument
{
	CONST_VTBL struct ITriEditDocumentVtbl __RPC_FAR *lpVtbl;
};
#ifdef COBJMACROS
#define ITriEditDocument_QueryInterface(This,riid,ppvObject) (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)
#define ITriEditDocument_AddRef(This) (This)->lpVtbl -> AddRef(This)
#define ITriEditDocument_Release(This) (This)->lpVtbl -> Release(This)
#define ITriEditDocument_GetTypeInfoCount(This,pctinfo) (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo)
#define ITriEditDocument_GetTypeInfo(This,iTInfo,lcid,ppTInfo) (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo)
#define ITriEditDocument_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)
#define ITriEditDocument_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)
#define ITriEditDocument_FilterIn(This,pStmOld,ppStmNew,dwFlags,bstrBaseURL) (This)->lpVtbl -> FilterIn(This,pStmOld,ppStmNew,dwFlags,bstrBaseURL)
#define ITriEditDocument_FilterOut(This,pStmOld,ppStmNew,dwFlags,bstrBaseURL) (This)->lpVtbl -> FilterOut(This,pStmOld,ppStmNew,dwFlags,bstrBaseURL)
#endif
HRESULT STDMETHODCALLTYPE ITriEditDocument_FilterIn_Proxy(ITriEditDocument __RPC_FAR *This, IUnknown __RPC_FAR *pStmOld, IUnknown __RPC_FAR *__RPC_FAR *ppStmNew, DWORD dwFlags, BSTR bstrBaseURL);
void __RPC_STUB ITriEditDocument_FilterIn_Stub(IRpcStubBuffer *This, IRpcChannelBuffer *_pRpcChannelBuffer, PRPC_MESSAGE _pRpcMessage, DWORD *_pdwStubPhase);
HRESULT STDMETHODCALLTYPE ITriEditDocument_FilterOut_Proxy(ITriEditDocument __RPC_FAR *This, IUnknown __RPC_FAR *pStmOld, IUnknown __RPC_FAR *__RPC_FAR *ppStmNew, DWORD dwFlags, BSTR bstrBaseURL);
void __RPC_STUB ITriEditDocument_FilterOut_Stub(IRpcStubBuffer *This, IRpcChannelBuffer *_pRpcChannelBuffer, PRPC_MESSAGE _pRpcMessage, DWORD *_pdwStubPhase);
#endif
#ifndef __TRIEDITLib_LIBRARY_DEFINED__
#define __TRIEDITLib_LIBRARY_DEFINED__
extern const IID LIBID_TRIEDITLib;
extern const CLSID CLSID_TriEditDocument;
#endif
#ifndef __IDocHostDragDropHandler_INTERFACE_DEFINED__
#define __IDocHostDragDropHandler_INTERFACE_DEFINED__
extern const IID IID_IDocHostDragDropHandler;
typedef struct IDocHostDragDropHandlerVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE __RPC_FAR * QueryInterface) (IDocHostDragDropHandler __RPC_FAR * This, REFIID riid, void __RPC_FAR * __RPC_FAR * ppvObject);
	ULONG(STDMETHODCALLTYPE __RPC_FAR * AddRef) (IDocHostDragDropHandler __RPC_FAR * This);
	ULONG(STDMETHODCALLTYPE __RPC_FAR * Release) (IDocHostDragDropHandler __RPC_FAR * This);
	HRESULT(STDMETHODCALLTYPE __RPC_FAR * DrawDragFeedback) (IDocHostDragDropHandler __RPC_FAR * This, RECT __RPC_FAR * pRect);
	END_INTERFACE
}  IDocHostDragDropHandlerVtbl;
interface IDocHostDragDropHandler
{
	CONST_VTBL struct IDocHostDragDropHandlerVtbl __RPC_FAR *lpVtbl;
};
#ifdef COBJMACROS
#define IDocHostDragDropHandler_QueryInterface(This,riid,ppvObject) (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)
#define IDocHostDragDropHandler_AddRef(This) (This)->lpVtbl -> AddRef(This)
#define IDocHostDragDropHandler_Release(This) (This)->lpVtbl -> Release(This)
#define IDocHostDragDropHandler_DrawDragFeedback(This,pRect) (This)->lpVtbl -> DrawDragFeedback(This,pRect)
#endif
HRESULT STDMETHODCALLTYPE IDocHostDragDropHandler_DrawDragFeedback_Proxy(IDocHostDragDropHandler __RPC_FAR *This, RECT __RPC_FAR *pRect);
void __RPC_STUB IDocHostDragDropHandler_DrawDragFeedback_Stub(IRpcStubBuffer *This, IRpcChannelBuffer *_pRpcChannelBuffer, PRPC_MESSAGE _pRpcMessage, DWORD *_pdwStubPhase);
#endif
unsigned long __RPC_USER BSTR_UserSize(unsigned long __RPC_FAR *, unsigned long, BSTR __RPC_FAR *);
unsigned char __RPC_FAR *__RPC_USER BSTR_UserMarshal(unsigned long __RPC_FAR *, unsigned char __RPC_FAR *, BSTR __RPC_FAR *);
unsigned char __RPC_FAR *__RPC_USER BSTR_UserUnmarshal(unsigned long __RPC_FAR *, unsigned char __RPC_FAR *, BSTR __RPC_FAR *);
void __RPC_USER BSTR_UserFree(unsigned long __RPC_FAR *, BSTR __RPC_FAR *);
#endif

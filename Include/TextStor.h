/*+@@file@@----------------------------------------------------------------*//*!
 \file		TextStor.h
 \par Description 
            Extension and update of headers for PellesC compiler suite.
 \par Project: 
            PellesC Headers extension
 \date		Created  on Mon Jul  4 18:36:03 2016
 \date		Modified on Mon Jul  4 18:36:03 2016
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
#ifndef __textstor_h__
#define __textstor_h__
#if __POCC__ >= 500
#pragma once
#endif
#ifndef __ITextStoreACP_FWD_DEFINED__
#define __ITextStoreACP_FWD_DEFINED__
typedef interface ITextStoreACP ITextStoreACP;
#endif
#ifndef __ITextStoreACPSink_FWD_DEFINED__
#define __ITextStoreACPSink_FWD_DEFINED__
typedef interface ITextStoreACPSink ITextStoreACPSink;
#endif
#ifndef __IAnchor_FWD_DEFINED__
#define __IAnchor_FWD_DEFINED__
typedef interface IAnchor IAnchor;
#endif
#ifndef __ITextStoreAnchor_FWD_DEFINED__
#define __ITextStoreAnchor_FWD_DEFINED__
typedef interface ITextStoreAnchor ITextStoreAnchor;
#endif
#ifndef __ITextStoreAnchorSink_FWD_DEFINED__
#define __ITextStoreAnchorSink_FWD_DEFINED__
typedef interface ITextStoreAnchorSink ITextStoreAnchorSink;
#endif
#include <oaidl.h>
DEFINE_GUID(GUID_TS_SERVICE_DATAOBJECT, 0x6086fbb5, 0xe225, 0x46ce, 0xa7, 0x70, 0xc1, 0xbb, 0xd3, 0xe0, 0x5d, 0x7b);
DEFINE_GUID(GUID_TS_SERVICE_ACCESSIBLE, 0xf9786200, 0xa5bf, 0x4a0f, 0x8c, 0x24, 0xfb, 0x16, 0xf5, 0xd1, 0xaa, 0xbb);
DEFINE_GUID(GUID_TS_SERVICE_ACTIVEX, 0xea937a50, 0xc9a6, 0x4b7d, 0x89, 0x4a, 0x49, 0xd9, 0x9b, 0x78, 0x48, 0x34);
#define TS_E_INVALIDPOS      MAKE_HRESULT(SEVERITY_ERROR, FACILITY_ITF, 0x0200)
#define TS_E_NOLOCK          MAKE_HRESULT(SEVERITY_ERROR, FACILITY_ITF, 0x0201)
#define TS_E_NOOBJECT        MAKE_HRESULT(SEVERITY_ERROR, FACILITY_ITF, 0x0202)
#define TS_E_NOSERVICE       MAKE_HRESULT(SEVERITY_ERROR, FACILITY_ITF, 0x0203)
#define TS_E_NOINTERFACE     MAKE_HRESULT(SEVERITY_ERROR, FACILITY_ITF, 0x0204)
#define TS_E_NOSELECTION     MAKE_HRESULT(SEVERITY_ERROR, FACILITY_ITF, 0x0205)
#define TS_E_NOLAYOUT        MAKE_HRESULT(SEVERITY_ERROR, FACILITY_ITF, 0x0206)
#define TS_E_INVALIDPOINT    MAKE_HRESULT(SEVERITY_ERROR, FACILITY_ITF, 0x0207)
#define TS_E_SYNCHRONOUS     MAKE_HRESULT(SEVERITY_ERROR, FACILITY_ITF, 0x0208)
#define TS_E_READONLY        MAKE_HRESULT(SEVERITY_ERROR, FACILITY_ITF, 0x0209)
#define TS_E_FORMAT          MAKE_HRESULT(SEVERITY_ERROR, FACILITY_ITF, 0x020a)
#define TS_S_ASYNC           MAKE_HRESULT(SEVERITY_SUCCESS, FACILITY_ITF, 0x0300)
#define	TS_AS_TEXT_CHANGE	( 0x1 )
#define	TS_AS_SEL_CHANGE	( 0x2 )
#define	TS_AS_LAYOUT_CHANGE	( 0x4 )
#define	TS_AS_ATTR_CHANGE	( 0x8 )
#define	TS_AS_STATUS_CHANGE	( 0x10 )
#define	TS_AS_ALL_SINKS	( ( ( ( ( TS_AS_TEXT_CHANGE | TS_AS_SEL_CHANGE )  | TS_AS_LAYOUT_CHANGE )  | TS_AS_ATTR_CHANGE )  | TS_AS_STATUS_CHANGE )  )
#define	TS_LF_SYNC	( 0x1 )
#define	TS_LF_READ	( 0x2 )
#define	TS_LF_READWRITE	( 0x6 )
#define	TS_SD_READONLY	( 0x1 )
#define	TS_SD_LOADING	( 0x2 )
#define	TS_SS_DISJOINTSEL	( 0x1 )
#define	TS_SS_REGIONS	( 0x2 )
#define	TS_SS_TRANSITORY	( 0x4 )
#define	TS_SS_NOHIDDENTEXT	( 0x8 )
#define	TS_SD_MASKALL	( ( TS_SD_READONLY | TS_SD_LOADING )  )
#define	TS_ST_CORRECTION	( 0x1 )
#define	TS_IE_CORRECTION	( 0x1 )
#define	TS_IE_COMPOSITION	( 0x2 )
#define	TS_TC_CORRECTION	( 0x1 )
#define	TS_IAS_NOQUERY	( 0x1 )
#define	TS_IAS_QUERYONLY	( 0x2 )
typedef DECLSPEC_UUID("fec4f516-c503-45b1-a5fd-7a3d8ab07049")
struct TS_STATUS
{
	DWORD dwDynamicFlags;
	DWORD dwStaticFlags;
} TS_STATUS;
typedef DECLSPEC_UUID("f3181bd6-bcf0-41d3-a81c-474b17ec38fb")
struct TS_TEXTCHANGE
{
	LONG acpStart;
	LONG acpOldEnd;
	LONG acpNewEnd;
} TS_TEXTCHANGE;
typedef DECLSPEC_UUID("05fcf85b-5e9c-4c3e-ab71-29471d4f38e7")
enum __MIDL___MIDL_itf_textstor_0000_0000_0001
{
	TS_AE_NONE = 0,
	TS_AE_START = 1,
	TS_AE_END = 2
} TsActiveSelEnd;
typedef DECLSPEC_UUID("7ecc3ffa-8f73-4d91-98ed-76f8ac5b1600")
struct TS_SELECTIONSTYLE
{
	TsActiveSelEnd ase;
	BOOL fInterimChar;
} TS_SELECTIONSTYLE;
typedef DECLSPEC_UUID("c4b9c33b-8a0d-4426-bebe-d444a4701fe9")
struct TS_SELECTION_ACP
{
	LONG acpStart;
	LONG acpEnd;
	TS_SELECTIONSTYLE style;
} TS_SELECTION_ACP;
typedef DECLSPEC_UUID("b03413d2-0723-4c4e-9e08-2e9c1ff3772b")
struct TS_SELECTION_ANCHOR
{
	IAnchor *paStart;
	IAnchor *paEnd;
	TS_SELECTIONSTYLE style;
} TS_SELECTION_ANCHOR;
#define	TS_DEFAULT_SELECTION	( ( ULONG  )-1 )
#define	GXFPF_ROUND_NEAREST	( 0x1 )
#define	GXFPF_NEAREST	( 0x2 )
#define	TS_CHAR_EMBEDDED	( 0xfffc )
#define	TS_CHAR_REGION	( 0 )
#define	TS_CHAR_REPLACEMENT	( 0xfffd )
typedef DECLSPEC_UUID("ef3457d9-8446-49a7-a9e6-b50d9d5f3fd9")
GUID TS_ATTRID;
typedef DECLSPEC_UUID("2cc2b33f-1174-4507-b8d9-5bc0eb37c197")
struct TS_ATTRVAL
{
	TS_ATTRID idAttr;
	DWORD dwOverlapId;
	VARIANT varValue;
} TS_ATTRVAL;
#define	TS_ATTR_FIND_BACKWARDS	( 0x1 )
#define	TS_ATTR_FIND_WANT_OFFSET	( 0x2 )
#define	TS_ATTR_FIND_UPDATESTART	( 0x4 )
#define	TS_ATTR_FIND_WANT_VALUE	( 0x8 )
#define	TS_ATTR_FIND_WANT_END	( 0x10 )
#define	TS_ATTR_FIND_HIDDEN	( 0x20 )
typedef DECLSPEC_UUID("1faf509e-44c1-458e-950a-38a96705a62b")
DWORD TsViewCookie;
#define	TS_VCOOKIE_NUL	( 0xffffffff )
typedef DECLSPEC_UUID("7899d7c4-5f07-493c-a89a-fac8e777f476")
enum __MIDL___MIDL_itf_textstor_0000_0000_0002
{
TS_LC_CREATE = 0,
	TS_LC_CHANGE = 1,
	TS_LC_DESTROY = 2
} TsLayoutCode;
typedef DECLSPEC_UUID("033b0df0-f193-4170-b47b-141afc247878")
enum __MIDL___MIDL_itf_textstor_0000_0000_0003
{
	TS_RT_PLAIN = 0,
	TS_RT_HIDDEN = (TS_RT_PLAIN + 1),
	TS_RT_OPAQUE = (TS_RT_HIDDEN + 1)
} TsRunType;
typedef DECLSPEC_UUID("a6231949-37c5-4b74-a24e-2a26c327201d")
struct TS_RUNINFO
{
	ULONG uCount;
	TsRunType type;
} TS_RUNINFO;
extern RPC_IF_HANDLE __MIDL_itf_textstor_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_textstor_0000_0000_v0_0_s_ifspec;
#ifndef __ITextStoreACP_INTERFACE_DEFINED__
#define __ITextStoreACP_INTERFACE_DEFINED__
	extern const IID IID_ITextStoreACP;
	typedef struct ITextStoreACPVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE *QueryInterface) (ITextStoreACP *This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE *AddRef) (ITextStoreACP *This);
	ULONG(STDMETHODCALLTYPE *Release) (ITextStoreACP *This);
	HRESULT(STDMETHODCALLTYPE *AdviseSink) (ITextStoreACP *This, REFIID riid, IUnknown *punk, DWORD dwMask);
	HRESULT(STDMETHODCALLTYPE *UnadviseSink) (ITextStoreACP *This, IUnknown *punk);
	HRESULT(STDMETHODCALLTYPE *RequestLock) (ITextStoreACP *This, DWORD dwLockFlags, HRESULT *phrSession);
	HRESULT(STDMETHODCALLTYPE *GetStatus) (ITextStoreACP *This, TS_STATUS *pdcs);
	HRESULT(STDMETHODCALLTYPE *QueryInsert) (ITextStoreACP *This, LONG acpTestStart, LONG acpTestEnd, ULONG cch, LONG *pacpResultStart, LONG *pacpResultEnd);
	HRESULT(STDMETHODCALLTYPE *GetSelection) (ITextStoreACP *This, ULONG ulIndex, ULONG ulCount, TS_SELECTION_ACP *pSelection, ULONG *pcFetched);
	HRESULT(STDMETHODCALLTYPE *SetSelection) (ITextStoreACP *This, ULONG ulCount, const TS_SELECTION_ACP *pSelection);
	HRESULT(STDMETHODCALLTYPE *GetText) (ITextStoreACP *This, LONG acpStart, LONG acpEnd, WCHAR *pchPlain, ULONG cchPlainReq, ULONG *pcchPlainRet, TS_RUNINFO *prgRunInfo, ULONG cRunInfoReq, ULONG *pcRunInfoRet, LONG *pacpNext);
	HRESULT(STDMETHODCALLTYPE *SetText) (ITextStoreACP *This, DWORD dwFlags, LONG acpStart, LONG acpEnd, const WCHAR *pchText, ULONG cch, TS_TEXTCHANGE *pChange);
	HRESULT(STDMETHODCALLTYPE *GetFormattedText) (ITextStoreACP *This, LONG acpStart, LONG acpEnd, IDataObject **ppDataObject);
	HRESULT(STDMETHODCALLTYPE *GetEmbedded) (ITextStoreACP *This, LONG acpPos, REFGUID rguidService, REFIID riid, IUnknown **ppunk);
	HRESULT(STDMETHODCALLTYPE *QueryInsertEmbedded) (ITextStoreACP *This, const GUID *pguidService, const FORMATETC *pFormatEtc, BOOL *pfInsertable);
	HRESULT(STDMETHODCALLTYPE *InsertEmbedded) (ITextStoreACP *This, DWORD dwFlags, LONG acpStart, LONG acpEnd, IDataObject *pDataObject, TS_TEXTCHANGE *pChange);
	HRESULT(STDMETHODCALLTYPE *InsertTextAtSelection) (ITextStoreACP *This, DWORD dwFlags, const WCHAR *pchText, ULONG cch, LONG *pacpStart, LONG *pacpEnd, TS_TEXTCHANGE *pChange);
	HRESULT(STDMETHODCALLTYPE *InsertEmbeddedAtSelection) (ITextStoreACP *This, DWORD dwFlags, IDataObject *pDataObject, LONG *pacpStart, LONG *pacpEnd, TS_TEXTCHANGE *pChange);
	HRESULT(STDMETHODCALLTYPE *RequestSupportedAttrs) (ITextStoreACP *This, DWORD dwFlags, ULONG cFilterAttrs, const TS_ATTRID *paFilterAttrs);
	HRESULT(STDMETHODCALLTYPE *RequestAttrsAtPosition) (ITextStoreACP *This, LONG acpPos, ULONG cFilterAttrs, const TS_ATTRID *paFilterAttrs, DWORD dwFlags);
	HRESULT(STDMETHODCALLTYPE *RequestAttrsTransitioningAtPosition) (ITextStoreACP *This, LONG acpPos, ULONG cFilterAttrs, const TS_ATTRID *paFilterAttrs, DWORD dwFlags);
	HRESULT(STDMETHODCALLTYPE *FindNextAttrTransition) (ITextStoreACP *This, LONG acpStart, LONG acpHalt, ULONG cFilterAttrs, const TS_ATTRID *paFilterAttrs, DWORD dwFlags, LONG *pacpNext, BOOL *pfFound, LONG *plFoundOffset);
	HRESULT(STDMETHODCALLTYPE *RetrieveRequestedAttrs) (ITextStoreACP *This, ULONG ulCount, TS_ATTRVAL *paAttrVals, ULONG *pcFetched);
	HRESULT(STDMETHODCALLTYPE *GetEndACP) (ITextStoreACP *This, LONG *pacp);
	HRESULT(STDMETHODCALLTYPE *GetActiveView) (ITextStoreACP *This, TsViewCookie *pvcView);
	HRESULT(STDMETHODCALLTYPE *GetACPFromPoint) (ITextStoreACP *This, TsViewCookie vcView, const POINT *ptScreen, DWORD dwFlags, LONG *pacp);
	HRESULT(STDMETHODCALLTYPE *GetTextExt) (ITextStoreACP *This, TsViewCookie vcView, LONG acpStart, LONG acpEnd, RECT *prc, BOOL *pfClipped);
	HRESULT(STDMETHODCALLTYPE *GetScreenExt) (ITextStoreACP *This, TsViewCookie vcView, RECT *prc);
	HRESULT(STDMETHODCALLTYPE *GetWnd) (ITextStoreACP *This, TsViewCookie vcView, HWND *phwnd);
	END_INTERFACE
}  ITextStoreACPVtbl;
interface ITextStoreACP
{
	CONST_VTBL struct ITextStoreACPVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define ITextStoreACP_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define ITextStoreACP_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define ITextStoreACP_Release(This)( (This)->lpVtbl -> Release(This) )
#define ITextStoreACP_AdviseSink(This,riid,punk,dwMask)( (This)->lpVtbl -> AdviseSink(This,riid,punk,dwMask) )
#define ITextStoreACP_UnadviseSink(This,punk)( (This)->lpVtbl -> UnadviseSink(This,punk) )
#define ITextStoreACP_RequestLock(This,dwLockFlags,phrSession)( (This)->lpVtbl -> RequestLock(This,dwLockFlags,phrSession) )
#define ITextStoreACP_GetStatus(This,pdcs)( (This)->lpVtbl -> GetStatus(This,pdcs) )
#define ITextStoreACP_QueryInsert(This,acpTestStart,acpTestEnd,cch,pacpResultStart,pacpResultEnd)( (This)->lpVtbl -> QueryInsert(This,acpTestStart,acpTestEnd,cch,pacpResultStart,pacpResultEnd) )
#define ITextStoreACP_GetSelection(This,ulIndex,ulCount,pSelection,pcFetched)( (This)->lpVtbl -> GetSelection(This,ulIndex,ulCount,pSelection,pcFetched) )
#define ITextStoreACP_SetSelection(This,ulCount,pSelection)( (This)->lpVtbl -> SetSelection(This,ulCount,pSelection) )
#define ITextStoreACP_GetText(This,acpStart,acpEnd,pchPlain,cchPlainReq,pcchPlainRet,prgRunInfo,cRunInfoReq,pcRunInfoRet,pacpNext)( (This)->lpVtbl -> GetText(This,acpStart,acpEnd,pchPlain,cchPlainReq,pcchPlainRet,prgRunInfo,cRunInfoReq,pcRunInfoRet,pacpNext) )
#define ITextStoreACP_SetText(This,dwFlags,acpStart,acpEnd,pchText,cch,pChange)( (This)->lpVtbl -> SetText(This,dwFlags,acpStart,acpEnd,pchText,cch,pChange) )
#define ITextStoreACP_GetFormattedText(This,acpStart,acpEnd,ppDataObject)( (This)->lpVtbl -> GetFormattedText(This,acpStart,acpEnd,ppDataObject) )
#define ITextStoreACP_GetEmbedded(This,acpPos,rguidService,riid,ppunk)( (This)->lpVtbl -> GetEmbedded(This,acpPos,rguidService,riid,ppunk) )
#define ITextStoreACP_QueryInsertEmbedded(This,pguidService,pFormatEtc,pfInsertable)( (This)->lpVtbl -> QueryInsertEmbedded(This,pguidService,pFormatEtc,pfInsertable) )
#define ITextStoreACP_InsertEmbedded(This,dwFlags,acpStart,acpEnd,pDataObject,pChange)( (This)->lpVtbl -> InsertEmbedded(This,dwFlags,acpStart,acpEnd,pDataObject,pChange) )
#define ITextStoreACP_InsertTextAtSelection(This,dwFlags,pchText,cch,pacpStart,pacpEnd,pChange)( (This)->lpVtbl -> InsertTextAtSelection(This,dwFlags,pchText,cch,pacpStart,pacpEnd,pChange) )
#define ITextStoreACP_InsertEmbeddedAtSelection(This,dwFlags,pDataObject,pacpStart,pacpEnd,pChange)( (This)->lpVtbl -> InsertEmbeddedAtSelection(This,dwFlags,pDataObject,pacpStart,pacpEnd,pChange) )
#define ITextStoreACP_RequestSupportedAttrs(This,dwFlags,cFilterAttrs,paFilterAttrs)( (This)->lpVtbl -> RequestSupportedAttrs(This,dwFlags,cFilterAttrs,paFilterAttrs) )
#define ITextStoreACP_RequestAttrsAtPosition(This,acpPos,cFilterAttrs,paFilterAttrs,dwFlags)( (This)->lpVtbl -> RequestAttrsAtPosition(This,acpPos,cFilterAttrs,paFilterAttrs,dwFlags) )
#define ITextStoreACP_RequestAttrsTransitioningAtPosition(This,acpPos,cFilterAttrs,paFilterAttrs,dwFlags)( (This)->lpVtbl -> RequestAttrsTransitioningAtPosition(This,acpPos,cFilterAttrs,paFilterAttrs,dwFlags) )
#define ITextStoreACP_FindNextAttrTransition(This,acpStart,acpHalt,cFilterAttrs,paFilterAttrs,dwFlags,pacpNext,pfFound,plFoundOffset)( (This)->lpVtbl -> FindNextAttrTransition(This,acpStart,acpHalt,cFilterAttrs,paFilterAttrs,dwFlags,pacpNext,pfFound,plFoundOffset) )
#define ITextStoreACP_RetrieveRequestedAttrs(This,ulCount,paAttrVals,pcFetched)( (This)->lpVtbl -> RetrieveRequestedAttrs(This,ulCount,paAttrVals,pcFetched) )
#define ITextStoreACP_GetEndACP(This,pacp)( (This)->lpVtbl -> GetEndACP(This,pacp) )
#define ITextStoreACP_GetActiveView(This,pvcView)( (This)->lpVtbl -> GetActiveView(This,pvcView) )
#define ITextStoreACP_GetACPFromPoint(This,vcView,ptScreen,dwFlags,pacp)( (This)->lpVtbl -> GetACPFromPoint(This,vcView,ptScreen,dwFlags,pacp) )
#define ITextStoreACP_GetTextExt(This,vcView,acpStart,acpEnd,prc,pfClipped)( (This)->lpVtbl -> GetTextExt(This,vcView,acpStart,acpEnd,prc,pfClipped) )
#define ITextStoreACP_GetScreenExt(This,vcView,prc)( (This)->lpVtbl -> GetScreenExt(This,vcView,prc) )
#define ITextStoreACP_GetWnd(This,vcView,phwnd)( (This)->lpVtbl -> GetWnd(This,vcView,phwnd) )
#endif
#endif
#ifndef __ITextStoreACPSink_INTERFACE_DEFINED__
#define __ITextStoreACPSink_INTERFACE_DEFINED__
extern const IID IID_ITextStoreACPSink;
typedef struct ITextStoreACPSinkVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE *QueryInterface) (ITextStoreACPSink *This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE *AddRef) (ITextStoreACPSink *This);
	ULONG(STDMETHODCALLTYPE *Release) (ITextStoreACPSink *This);
	HRESULT(STDMETHODCALLTYPE *OnTextChange) (ITextStoreACPSink *This, DWORD dwFlags, const TS_TEXTCHANGE *pChange);
	HRESULT(STDMETHODCALLTYPE *OnSelectionChange) (ITextStoreACPSink *This);
	HRESULT(STDMETHODCALLTYPE *OnLayoutChange) (ITextStoreACPSink *This, TsLayoutCode lcode, TsViewCookie vcView);
	HRESULT(STDMETHODCALLTYPE *OnStatusChange) (ITextStoreACPSink *This, DWORD dwFlags);
	HRESULT(STDMETHODCALLTYPE *OnAttrsChange) (ITextStoreACPSink *This, LONG acpStart, LONG acpEnd, ULONG cAttrs, const TS_ATTRID *paAttrs);
	HRESULT(STDMETHODCALLTYPE *OnLockGranted) (ITextStoreACPSink *This, DWORD dwLockFlags);
	HRESULT(STDMETHODCALLTYPE *OnStartEditTransaction) (ITextStoreACPSink *This);
	HRESULT(STDMETHODCALLTYPE *OnEndEditTransaction) (ITextStoreACPSink *This);
	END_INTERFACE
}  ITextStoreACPSinkVtbl;
interface ITextStoreACPSink
{
	CONST_VTBL struct ITextStoreACPSinkVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define ITextStoreACPSink_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define ITextStoreACPSink_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define ITextStoreACPSink_Release(This)( (This)->lpVtbl -> Release(This) )
#define ITextStoreACPSink_OnTextChange(This,dwFlags,pChange)( (This)->lpVtbl -> OnTextChange(This,dwFlags,pChange) )
#define ITextStoreACPSink_OnSelectionChange(This)( (This)->lpVtbl -> OnSelectionChange(This) )
#define ITextStoreACPSink_OnLayoutChange(This,lcode,vcView)( (This)->lpVtbl -> OnLayoutChange(This,lcode,vcView) )
#define ITextStoreACPSink_OnStatusChange(This,dwFlags)( (This)->lpVtbl -> OnStatusChange(This,dwFlags) )
#define ITextStoreACPSink_OnAttrsChange(This,acpStart,acpEnd,cAttrs,paAttrs)( (This)->lpVtbl -> OnAttrsChange(This,acpStart,acpEnd,cAttrs,paAttrs) )
#define ITextStoreACPSink_OnLockGranted(This,dwLockFlags)( (This)->lpVtbl -> OnLockGranted(This,dwLockFlags) )
#define ITextStoreACPSink_OnStartEditTransaction(This)( (This)->lpVtbl -> OnStartEditTransaction(This) )
#define ITextStoreACPSink_OnEndEditTransaction(This)( (This)->lpVtbl -> OnEndEditTransaction(This) )
#endif
#endif
#ifndef __IAnchor_INTERFACE_DEFINED__
#define __IAnchor_INTERFACE_DEFINED__
typedef DECLSPEC_UUID("daa8601e-7695-426f-9bb7-498a6aa64b68")
enum __MIDL_IAnchor_0001
{
	TS_GR_BACKWARD = 0,
	TS_GR_FORWARD = 1
} TsGravity;
typedef DECLSPEC_UUID("898e19df-4fb4-4af3-8daf-9b3c1145c79d")
enum __MIDL_IAnchor_0002
{
	TS_SD_BACKWARD = 0,
	TS_SD_FORWARD = 1
} TsShiftDir;
#define	TS_CH_PRECEDING_DEL	( 1 )
#define	TS_CH_FOLLOWING_DEL	( 2 )
#define	TS_SHIFT_COUNT_HIDDEN	( 0x1 )
#define	TS_SHIFT_HALT_HIDDEN	( 0x2 )
#define	TS_SHIFT_HALT_VISIBLE	( 0x4 )
#define	TS_SHIFT_COUNT_ONLY	( 0x8 )
extern const IID IID_IAnchor;
typedef struct IAnchorVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE *QueryInterface) (IAnchor *This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE *AddRef) (IAnchor *This);
	ULONG(STDMETHODCALLTYPE *Release) (IAnchor *This);
	HRESULT(STDMETHODCALLTYPE *SetGravity) (IAnchor *This, TsGravity gravity);
	HRESULT(STDMETHODCALLTYPE *GetGravity) (IAnchor *This, TsGravity *pgravity);
	HRESULT(STDMETHODCALLTYPE *IsEqual) (IAnchor *This, IAnchor *paWith, BOOL *pfEqual);
	HRESULT(STDMETHODCALLTYPE *Compare) (IAnchor *This, IAnchor *paWith, LONG *plResult);
	HRESULT(STDMETHODCALLTYPE *Shift) (IAnchor *This, DWORD dwFlags, LONG cchReq, LONG *pcch, IAnchor *paHaltAnchor);
	HRESULT(STDMETHODCALLTYPE *ShiftTo) (IAnchor *This, IAnchor *paSite);
	HRESULT(STDMETHODCALLTYPE *ShiftRegion) (IAnchor *This, DWORD dwFlags, TsShiftDir dir, BOOL *pfNoRegion);
	HRESULT(STDMETHODCALLTYPE *SetChangeHistoryMask) (IAnchor *This, DWORD dwMask);
	HRESULT(STDMETHODCALLTYPE *GetChangeHistory) (IAnchor *This, DWORD *pdwHistory);
	HRESULT(STDMETHODCALLTYPE *ClearChangeHistory) (IAnchor *This);
	HRESULT(STDMETHODCALLTYPE *Clone) (IAnchor *This, IAnchor **ppaClone);
	END_INTERFACE
}  IAnchorVtbl;
interface IAnchor
{
	CONST_VTBL struct IAnchorVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IAnchor_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IAnchor_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define IAnchor_Release(This)( (This)->lpVtbl -> Release(This) )
#define IAnchor_SetGravity(This,gravity)( (This)->lpVtbl -> SetGravity(This,gravity) )
#define IAnchor_GetGravity(This,pgravity)( (This)->lpVtbl -> GetGravity(This,pgravity) )
#define IAnchor_IsEqual(This,paWith,pfEqual)( (This)->lpVtbl -> IsEqual(This,paWith,pfEqual) )
#define IAnchor_Compare(This,paWith,plResult)( (This)->lpVtbl -> Compare(This,paWith,plResult) )
#define IAnchor_Shift(This,dwFlags,cchReq,pcch,paHaltAnchor)( (This)->lpVtbl -> Shift(This,dwFlags,cchReq,pcch,paHaltAnchor) )
#define IAnchor_ShiftTo(This,paSite)( (This)->lpVtbl -> ShiftTo(This,paSite) )
#define IAnchor_ShiftRegion(This,dwFlags,dir,pfNoRegion)( (This)->lpVtbl -> ShiftRegion(This,dwFlags,dir,pfNoRegion) )
#define IAnchor_SetChangeHistoryMask(This,dwMask)( (This)->lpVtbl -> SetChangeHistoryMask(This,dwMask) )
#define IAnchor_GetChangeHistory(This,pdwHistory)( (This)->lpVtbl -> GetChangeHistory(This,pdwHistory) )
#define IAnchor_ClearChangeHistory(This)( (This)->lpVtbl -> ClearChangeHistory(This) )
#define IAnchor_Clone(This,ppaClone)( (This)->lpVtbl -> Clone(This,ppaClone) )
#endif
#endif
#ifndef __ITextStoreAnchor_INTERFACE_DEFINED__
#define __ITextStoreAnchor_INTERFACE_DEFINED__
#define	TS_GTA_HIDDEN	( 0x1 )
#define	TS_GEA_HIDDEN	( 0x1 )
extern const IID IID_ITextStoreAnchor;
typedef struct ITextStoreAnchorVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE *QueryInterface) (ITextStoreAnchor *This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE *AddRef) (ITextStoreAnchor *This);
	ULONG(STDMETHODCALLTYPE *Release) (ITextStoreAnchor *This);
	HRESULT(STDMETHODCALLTYPE *AdviseSink) (ITextStoreAnchor *This, REFIID riid, IUnknown *punk, DWORD dwMask);
	HRESULT(STDMETHODCALLTYPE *UnadviseSink) (ITextStoreAnchor *This, IUnknown *punk);
	HRESULT(STDMETHODCALLTYPE *RequestLock) (ITextStoreAnchor *This, DWORD dwLockFlags, HRESULT *phrSession);
	HRESULT(STDMETHODCALLTYPE *GetStatus) (ITextStoreAnchor *This, TS_STATUS *pdcs);
	HRESULT(STDMETHODCALLTYPE *QueryInsert) (ITextStoreAnchor *This, IAnchor *paTestStart, IAnchor *paTestEnd, ULONG cch, IAnchor **ppaResultStart, IAnchor **ppaResultEnd);
	HRESULT(STDMETHODCALLTYPE *GetSelection) (ITextStoreAnchor *This, ULONG ulIndex, ULONG ulCount, TS_SELECTION_ANCHOR *pSelection, ULONG *pcFetched);
	HRESULT(STDMETHODCALLTYPE *SetSelection) (ITextStoreAnchor *This, ULONG ulCount, const TS_SELECTION_ANCHOR *pSelection);
	HRESULT(STDMETHODCALLTYPE *GetText) (ITextStoreAnchor *This, DWORD dwFlags, IAnchor *paStart, IAnchor *paEnd, WCHAR *pchText, ULONG cchReq, ULONG *pcch, BOOL fUpdateAnchor);
	HRESULT(STDMETHODCALLTYPE *SetText) (ITextStoreAnchor *This, DWORD dwFlags, IAnchor *paStart, IAnchor *paEnd, const WCHAR *pchText, ULONG cch);
	HRESULT(STDMETHODCALLTYPE *GetFormattedText) (ITextStoreAnchor *This, IAnchor *paStart, IAnchor *paEnd, IDataObject **ppDataObject);
	HRESULT(STDMETHODCALLTYPE *GetEmbedded) (ITextStoreAnchor *This, DWORD dwFlags, IAnchor *paPos, REFGUID rguidService, REFIID riid, IUnknown **ppunk);
	HRESULT(STDMETHODCALLTYPE *InsertEmbedded) (ITextStoreAnchor *This, DWORD dwFlags, IAnchor *paStart, IAnchor *paEnd, IDataObject *pDataObject);
	HRESULT(STDMETHODCALLTYPE *RequestSupportedAttrs) (ITextStoreAnchor *This, DWORD dwFlags, ULONG cFilterAttrs, const TS_ATTRID *paFilterAttrs);
	HRESULT(STDMETHODCALLTYPE *RequestAttrsAtPosition) (ITextStoreAnchor *This, IAnchor *paPos, ULONG cFilterAttrs, const TS_ATTRID *paFilterAttrs, DWORD dwFlags);
	HRESULT(STDMETHODCALLTYPE *RequestAttrsTransitioningAtPosition) (ITextStoreAnchor *This, IAnchor *paPos, ULONG cFilterAttrs, const TS_ATTRID *paFilterAttrs, DWORD dwFlags);
	HRESULT(STDMETHODCALLTYPE *FindNextAttrTransition) (ITextStoreAnchor *This, IAnchor *paStart, IAnchor *paHalt, ULONG cFilterAttrs, const TS_ATTRID *paFilterAttrs, DWORD dwFlags, BOOL *pfFound, LONG *plFoundOffset);
	HRESULT(STDMETHODCALLTYPE *RetrieveRequestedAttrs) (ITextStoreAnchor *This, ULONG ulCount, TS_ATTRVAL *paAttrVals, ULONG *pcFetched);
	HRESULT(STDMETHODCALLTYPE *GetStart) (ITextStoreAnchor *This, IAnchor **ppaStart);
	HRESULT(STDMETHODCALLTYPE *GetEnd) (ITextStoreAnchor *This, IAnchor **ppaEnd);
	HRESULT(STDMETHODCALLTYPE *GetActiveView) (ITextStoreAnchor *This, TsViewCookie *pvcView);
	HRESULT(STDMETHODCALLTYPE *GetAnchorFromPoint) (ITextStoreAnchor *This, TsViewCookie vcView, const POINT *ptScreen, DWORD dwFlags, IAnchor **ppaSite);
	HRESULT(STDMETHODCALLTYPE *GetTextExt) (ITextStoreAnchor *This, TsViewCookie vcView, IAnchor *paStart, IAnchor *paEnd, RECT *prc, BOOL *pfClipped);
	HRESULT(STDMETHODCALLTYPE *GetScreenExt) (ITextStoreAnchor *This, TsViewCookie vcView, RECT *prc);
	HRESULT(STDMETHODCALLTYPE *GetWnd) (ITextStoreAnchor *This, TsViewCookie vcView, HWND *phwnd);
	HRESULT(STDMETHODCALLTYPE *QueryInsertEmbedded) (ITextStoreAnchor *This, const GUID *pguidService, const FORMATETC *pFormatEtc, BOOL *pfInsertable);
	HRESULT(STDMETHODCALLTYPE *InsertTextAtSelection) (ITextStoreAnchor *This, DWORD dwFlags, const WCHAR *pchText, ULONG cch, IAnchor **ppaStart, IAnchor **ppaEnd);
	HRESULT(STDMETHODCALLTYPE *InsertEmbeddedAtSelection) (ITextStoreAnchor *This, DWORD dwFlags, IDataObject *pDataObject, IAnchor **ppaStart, IAnchor **ppaEnd);
	END_INTERFACE
}  ITextStoreAnchorVtbl;
interface ITextStoreAnchor
{
	CONST_VTBL struct ITextStoreAnchorVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define ITextStoreAnchor_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define ITextStoreAnchor_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define ITextStoreAnchor_Release(This)( (This)->lpVtbl -> Release(This) )
#define ITextStoreAnchor_AdviseSink(This,riid,punk,dwMask)( (This)->lpVtbl -> AdviseSink(This,riid,punk,dwMask) )
#define ITextStoreAnchor_UnadviseSink(This,punk)( (This)->lpVtbl -> UnadviseSink(This,punk) )
#define ITextStoreAnchor_RequestLock(This,dwLockFlags,phrSession)( (This)->lpVtbl -> RequestLock(This,dwLockFlags,phrSession) )
#define ITextStoreAnchor_GetStatus(This,pdcs)( (This)->lpVtbl -> GetStatus(This,pdcs) )
#define ITextStoreAnchor_QueryInsert(This,paTestStart,paTestEnd,cch,ppaResultStart,ppaResultEnd)( (This)->lpVtbl -> QueryInsert(This,paTestStart,paTestEnd,cch,ppaResultStart,ppaResultEnd) )
#define ITextStoreAnchor_GetSelection(This,ulIndex,ulCount,pSelection,pcFetched)( (This)->lpVtbl -> GetSelection(This,ulIndex,ulCount,pSelection,pcFetched) )
#define ITextStoreAnchor_SetSelection(This,ulCount,pSelection)( (This)->lpVtbl -> SetSelection(This,ulCount,pSelection) )
#define ITextStoreAnchor_GetText(This,dwFlags,paStart,paEnd,pchText,cchReq,pcch,fUpdateAnchor)( (This)->lpVtbl -> GetText(This,dwFlags,paStart,paEnd,pchText,cchReq,pcch,fUpdateAnchor) )
#define ITextStoreAnchor_SetText(This,dwFlags,paStart,paEnd,pchText,cch)( (This)->lpVtbl -> SetText(This,dwFlags,paStart,paEnd,pchText,cch) )
#define ITextStoreAnchor_GetFormattedText(This,paStart,paEnd,ppDataObject)( (This)->lpVtbl -> GetFormattedText(This,paStart,paEnd,ppDataObject) )
#define ITextStoreAnchor_GetEmbedded(This,dwFlags,paPos,rguidService,riid,ppunk)( (This)->lpVtbl -> GetEmbedded(This,dwFlags,paPos,rguidService,riid,ppunk) )
#define ITextStoreAnchor_InsertEmbedded(This,dwFlags,paStart,paEnd,pDataObject)( (This)->lpVtbl -> InsertEmbedded(This,dwFlags,paStart,paEnd,pDataObject) )
#define ITextStoreAnchor_RequestSupportedAttrs(This,dwFlags,cFilterAttrs,paFilterAttrs)( (This)->lpVtbl -> RequestSupportedAttrs(This,dwFlags,cFilterAttrs,paFilterAttrs) )
#define ITextStoreAnchor_RequestAttrsAtPosition(This,paPos,cFilterAttrs,paFilterAttrs,dwFlags)( (This)->lpVtbl -> RequestAttrsAtPosition(This,paPos,cFilterAttrs,paFilterAttrs,dwFlags) )
#define ITextStoreAnchor_RequestAttrsTransitioningAtPosition(This,paPos,cFilterAttrs,paFilterAttrs,dwFlags)( (This)->lpVtbl -> RequestAttrsTransitioningAtPosition(This,paPos,cFilterAttrs,paFilterAttrs,dwFlags) )
#define ITextStoreAnchor_FindNextAttrTransition(This,paStart,paHalt,cFilterAttrs,paFilterAttrs,dwFlags,pfFound,plFoundOffset)( (This)->lpVtbl -> FindNextAttrTransition(This,paStart,paHalt,cFilterAttrs,paFilterAttrs,dwFlags,pfFound,plFoundOffset) )
#define ITextStoreAnchor_RetrieveRequestedAttrs(This,ulCount,paAttrVals,pcFetched)( (This)->lpVtbl -> RetrieveRequestedAttrs(This,ulCount,paAttrVals,pcFetched) )
#define ITextStoreAnchor_GetStart(This,ppaStart)( (This)->lpVtbl -> GetStart(This,ppaStart) )
#define ITextStoreAnchor_GetEnd(This,ppaEnd)( (This)->lpVtbl -> GetEnd(This,ppaEnd) )
#define ITextStoreAnchor_GetActiveView(This,pvcView)( (This)->lpVtbl -> GetActiveView(This,pvcView) )
#define ITextStoreAnchor_GetAnchorFromPoint(This,vcView,ptScreen,dwFlags,ppaSite)( (This)->lpVtbl -> GetAnchorFromPoint(This,vcView,ptScreen,dwFlags,ppaSite) )
#define ITextStoreAnchor_GetTextExt(This,vcView,paStart,paEnd,prc,pfClipped)( (This)->lpVtbl -> GetTextExt(This,vcView,paStart,paEnd,prc,pfClipped) )
#define ITextStoreAnchor_GetScreenExt(This,vcView,prc)( (This)->lpVtbl -> GetScreenExt(This,vcView,prc) )
#define ITextStoreAnchor_GetWnd(This,vcView,phwnd)( (This)->lpVtbl -> GetWnd(This,vcView,phwnd) )
#define ITextStoreAnchor_QueryInsertEmbedded(This,pguidService,pFormatEtc,pfInsertable)( (This)->lpVtbl -> QueryInsertEmbedded(This,pguidService,pFormatEtc,pfInsertable) )
#define ITextStoreAnchor_InsertTextAtSelection(This,dwFlags,pchText,cch,ppaStart,ppaEnd)( (This)->lpVtbl -> InsertTextAtSelection(This,dwFlags,pchText,cch,ppaStart,ppaEnd) )
#define ITextStoreAnchor_InsertEmbeddedAtSelection(This,dwFlags,pDataObject,ppaStart,ppaEnd)( (This)->lpVtbl -> InsertEmbeddedAtSelection(This,dwFlags,pDataObject,ppaStart,ppaEnd) )
#endif
#endif
#ifndef __ITextStoreAnchorSink_INTERFACE_DEFINED__
#define __ITextStoreAnchorSink_INTERFACE_DEFINED__
extern const IID IID_ITextStoreAnchorSink;
typedef struct ITextStoreAnchorSinkVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE *QueryInterface) (ITextStoreAnchorSink *This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE *AddRef) (ITextStoreAnchorSink *This);
	ULONG(STDMETHODCALLTYPE *Release) (ITextStoreAnchorSink *This);
	HRESULT(STDMETHODCALLTYPE *OnTextChange) (ITextStoreAnchorSink *This, DWORD dwFlags, IAnchor *paStart, IAnchor *paEnd);
	HRESULT(STDMETHODCALLTYPE *OnSelectionChange) (ITextStoreAnchorSink *This);
	HRESULT(STDMETHODCALLTYPE *OnLayoutChange) (ITextStoreAnchorSink *This, TsLayoutCode lcode, TsViewCookie vcView);
	HRESULT(STDMETHODCALLTYPE *OnStatusChange) (ITextStoreAnchorSink *This, DWORD dwFlags);
	HRESULT(STDMETHODCALLTYPE *OnAttrsChange) (ITextStoreAnchorSink *This, IAnchor *paStart, IAnchor *paEnd, ULONG cAttrs, const TS_ATTRID *paAttrs);
	HRESULT(STDMETHODCALLTYPE *OnLockGranted) (ITextStoreAnchorSink *This, DWORD dwLockFlags);
	HRESULT(STDMETHODCALLTYPE *OnStartEditTransaction) (ITextStoreAnchorSink *This);
	HRESULT(STDMETHODCALLTYPE *OnEndEditTransaction) (ITextStoreAnchorSink *This);
	END_INTERFACE
}  ITextStoreAnchorSinkVtbl;
interface ITextStoreAnchorSink
{
	CONST_VTBL struct ITextStoreAnchorSinkVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define ITextStoreAnchorSink_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define ITextStoreAnchorSink_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define ITextStoreAnchorSink_Release(This)( (This)->lpVtbl -> Release(This) )
#define ITextStoreAnchorSink_OnTextChange(This,dwFlags,paStart,paEnd)( (This)->lpVtbl -> OnTextChange(This,dwFlags,paStart,paEnd) )
#define ITextStoreAnchorSink_OnSelectionChange(This)( (This)->lpVtbl -> OnSelectionChange(This) )
#define ITextStoreAnchorSink_OnLayoutChange(This,lcode,vcView)( (This)->lpVtbl -> OnLayoutChange(This,lcode,vcView) )
#define ITextStoreAnchorSink_OnStatusChange(This,dwFlags)( (This)->lpVtbl -> OnStatusChange(This,dwFlags) )
#define ITextStoreAnchorSink_OnAttrsChange(This,paStart,paEnd,cAttrs,paAttrs)( (This)->lpVtbl -> OnAttrsChange(This,paStart,paEnd,cAttrs,paAttrs) )
#define ITextStoreAnchorSink_OnLockGranted(This,dwLockFlags)( (This)->lpVtbl -> OnLockGranted(This,dwLockFlags) )
#define ITextStoreAnchorSink_OnStartEditTransaction(This)( (This)->lpVtbl -> OnStartEditTransaction(This) )
#define ITextStoreAnchorSink_OnEndEditTransaction(This)( (This)->lpVtbl -> OnEndEditTransaction(This) )
#endif
#endif
unsigned long __RPC_USER CLIPFORMAT_UserSize(unsigned long *, unsigned long, CLIPFORMAT *);
unsigned char *__RPC_USER CLIPFORMAT_UserMarshal(unsigned long *, unsigned char *, CLIPFORMAT *);
unsigned char *__RPC_USER CLIPFORMAT_UserUnmarshal(unsigned long *, unsigned char *, CLIPFORMAT *);
void __RPC_USER CLIPFORMAT_UserFree(unsigned long *, CLIPFORMAT *);
unsigned long __RPC_USER HWND_UserSize(unsigned long *, unsigned long, HWND *);
unsigned char *__RPC_USER HWND_UserMarshal(unsigned long *, unsigned char *, HWND *);
unsigned char *__RPC_USER HWND_UserUnmarshal(unsigned long *, unsigned char *, HWND *);
void __RPC_USER HWND_UserFree(unsigned long *, HWND *);
unsigned long __RPC_USER VARIANT_UserSize(unsigned long *, unsigned long, VARIANT *);
unsigned char *__RPC_USER VARIANT_UserMarshal(unsigned long *, unsigned char *, VARIANT *);
unsigned char *__RPC_USER VARIANT_UserUnmarshal(unsigned long *, unsigned char *, VARIANT *);
void __RPC_USER VARIANT_UserFree(unsigned long *, VARIANT *);
unsigned long __RPC_USER CLIPFORMAT_UserSize64(unsigned long *, unsigned long, CLIPFORMAT *);
unsigned char *__RPC_USER CLIPFORMAT_UserMarshal64(unsigned long *, unsigned char *, CLIPFORMAT *);
unsigned char *__RPC_USER CLIPFORMAT_UserUnmarshal64(unsigned long *, unsigned char *, CLIPFORMAT *);
void __RPC_USER CLIPFORMAT_UserFree64(unsigned long *, CLIPFORMAT *);
unsigned long __RPC_USER HWND_UserSize64(unsigned long *, unsigned long, HWND *);
unsigned char *__RPC_USER HWND_UserMarshal64(unsigned long *, unsigned char *, HWND *);
unsigned char *__RPC_USER HWND_UserUnmarshal64(unsigned long *, unsigned char *, HWND *);
void __RPC_USER HWND_UserFree64(unsigned long *, HWND *);
unsigned long __RPC_USER VARIANT_UserSize64(unsigned long *, unsigned long, VARIANT *);
unsigned char *__RPC_USER VARIANT_UserMarshal64(unsigned long *, unsigned char *, VARIANT *);
unsigned char *__RPC_USER VARIANT_UserUnmarshal64(unsigned long *, unsigned char *, VARIANT *);
void __RPC_USER VARIANT_UserFree64(unsigned long *, VARIANT *);
#endif

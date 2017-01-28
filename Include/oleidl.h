/*+@@file@@----------------------------------------------------------------*//*!
 \file		oleidl.h
 \par Description 
            Extension and update of headers for PellesC compiler suite.
 \par Project: 
            PellesC Headers extension
 \date		Created  on Mon Jun 27 13:50:46 2016
 \date		Modified on Mon Jun 27 13:50:46 2016
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
#ifndef __oleidl_h__
#define __oleidl_h__
#if __POCC__ >= 500
#pragma once
#endif
#ifndef __IOleAdviseHolder_FWD_DEFINED__
#define __IOleAdviseHolder_FWD_DEFINED__
typedef interface IOleAdviseHolder IOleAdviseHolder;
#endif
#ifndef __IOleCache_FWD_DEFINED__
#define __IOleCache_FWD_DEFINED__
typedef interface IOleCache IOleCache;
#endif
#ifndef __IOleCache2_FWD_DEFINED__
#define __IOleCache2_FWD_DEFINED__
typedef interface IOleCache2 IOleCache2;
#endif
#ifndef __IOleCacheControl_FWD_DEFINED__
#define __IOleCacheControl_FWD_DEFINED__
typedef interface IOleCacheControl IOleCacheControl;
#endif
#ifndef __IParseDisplayName_FWD_DEFINED__
#define __IParseDisplayName_FWD_DEFINED__
typedef interface IParseDisplayName IParseDisplayName;
#endif
#ifndef __IOleContainer_FWD_DEFINED__
#define __IOleContainer_FWD_DEFINED__
typedef interface IOleContainer IOleContainer;
#endif
#ifndef __IOleClientSite_FWD_DEFINED__
#define __IOleClientSite_FWD_DEFINED__
typedef interface IOleClientSite IOleClientSite;
#endif
#ifndef __IOleObject_FWD_DEFINED__
#define __IOleObject_FWD_DEFINED__
typedef interface IOleObject IOleObject;
#endif
#ifndef __IOleWindow_FWD_DEFINED__
#define __IOleWindow_FWD_DEFINED__
typedef interface IOleWindow IOleWindow;
#endif
#ifndef __IOleLink_FWD_DEFINED__
#define __IOleLink_FWD_DEFINED__
typedef interface IOleLink IOleLink;
#endif
#ifndef __IOleItemContainer_FWD_DEFINED__
#define __IOleItemContainer_FWD_DEFINED__
typedef interface IOleItemContainer IOleItemContainer;
#endif
#ifndef __IOleInPlaceUIWindow_FWD_DEFINED__
#define __IOleInPlaceUIWindow_FWD_DEFINED__
typedef interface IOleInPlaceUIWindow IOleInPlaceUIWindow;
#endif
#ifndef __IOleInPlaceActiveObject_FWD_DEFINED__
#define __IOleInPlaceActiveObject_FWD_DEFINED__
typedef interface IOleInPlaceActiveObject IOleInPlaceActiveObject;
#endif
#ifndef __IOleInPlaceFrame_FWD_DEFINED__
#define __IOleInPlaceFrame_FWD_DEFINED__
typedef interface IOleInPlaceFrame IOleInPlaceFrame;
#endif
#ifndef __IOleInPlaceObject_FWD_DEFINED__
#define __IOleInPlaceObject_FWD_DEFINED__
typedef interface IOleInPlaceObject IOleInPlaceObject;
#endif
#ifndef __IOleInPlaceSite_FWD_DEFINED__
#define __IOleInPlaceSite_FWD_DEFINED__
typedef interface IOleInPlaceSite IOleInPlaceSite;
#endif
#ifndef __IContinue_FWD_DEFINED__
#define __IContinue_FWD_DEFINED__
typedef interface IContinue IContinue;
#endif
#ifndef __IViewObject_FWD_DEFINED__
#define __IViewObject_FWD_DEFINED__
typedef interface IViewObject IViewObject;
#endif
#ifndef __IViewObject2_FWD_DEFINED__
#define __IViewObject2_FWD_DEFINED__
typedef interface IViewObject2 IViewObject2;
#endif
#ifndef __IDropSource_FWD_DEFINED__
#define __IDropSource_FWD_DEFINED__
typedef interface IDropSource IDropSource;
#endif
#ifndef __IDropTarget_FWD_DEFINED__
#define __IDropTarget_FWD_DEFINED__
typedef interface IDropTarget IDropTarget;
#endif
#ifndef __IDropSourceNotify_FWD_DEFINED__
#define __IDropSourceNotify_FWD_DEFINED__
typedef interface IDropSourceNotify IDropSourceNotify;
#endif
#ifndef __IEnumOLEVERB_FWD_DEFINED__
#define __IEnumOLEVERB_FWD_DEFINED__
typedef interface IEnumOLEVERB IEnumOLEVERB;
#endif
#include <objidl.h>
extern RPC_IF_HANDLE __MIDL_itf_oleidl_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_oleidl_0000_0000_v0_0_s_ifspec;
#ifndef __IOleAdviseHolder_INTERFACE_DEFINED__
#define __IOleAdviseHolder_INTERFACE_DEFINED__
typedef IOleAdviseHolder *LPOLEADVISEHOLDER;
extern const IID IID_IOleAdviseHolder;
typedef struct IOleAdviseHolderVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IOleAdviseHolder * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IOleAdviseHolder * This);
	ULONG(STDMETHODCALLTYPE * Release) (IOleAdviseHolder * This);
	HRESULT(STDMETHODCALLTYPE * Advise) (IOleAdviseHolder * This, IAdviseSink * pAdvise, DWORD * pdwConnection);
	HRESULT(STDMETHODCALLTYPE * Unadvise) (IOleAdviseHolder * This, DWORD dwConnection);
	HRESULT(STDMETHODCALLTYPE * EnumAdvise) (IOleAdviseHolder * This, IEnumSTATDATA ** ppenumAdvise);
	HRESULT(STDMETHODCALLTYPE * SendOnRename) (IOleAdviseHolder * This, IMoniker * pmk);
	HRESULT(STDMETHODCALLTYPE * SendOnSave) (IOleAdviseHolder * This);
	HRESULT(STDMETHODCALLTYPE * SendOnClose) (IOleAdviseHolder * This);
	END_INTERFACE
} IOleAdviseHolderVtbl;
interface IOleAdviseHolder
{
	CONST_VTBL struct IOleAdviseHolderVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IOleAdviseHolder_QueryInterface(This,riid,ppvObject)    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IOleAdviseHolder_AddRef(This)    ( (This)->lpVtbl -> AddRef(This) )
#define IOleAdviseHolder_Release(This)    ( (This)->lpVtbl -> Release(This) )
#define IOleAdviseHolder_Advise(This,pAdvise,pdwConnection)    ( (This)->lpVtbl -> Advise(This,pAdvise,pdwConnection) )
#define IOleAdviseHolder_Unadvise(This,dwConnection)    ( (This)->lpVtbl -> Unadvise(This,dwConnection) )
#define IOleAdviseHolder_EnumAdvise(This,ppenumAdvise)    ( (This)->lpVtbl -> EnumAdvise(This,ppenumAdvise) )
#define IOleAdviseHolder_SendOnRename(This,pmk)    ( (This)->lpVtbl -> SendOnRename(This,pmk) )
#define IOleAdviseHolder_SendOnSave(This)    ( (This)->lpVtbl -> SendOnSave(This) )
#define IOleAdviseHolder_SendOnClose(This)    ( (This)->lpVtbl -> SendOnClose(This) )
#endif
#endif
#ifndef __IOleCache_INTERFACE_DEFINED__
#define __IOleCache_INTERFACE_DEFINED__
typedef IOleCache *LPOLECACHE;
extern const IID IID_IOleCache;
typedef struct IOleCacheVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IOleCache * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IOleCache * This);
	ULONG(STDMETHODCALLTYPE * Release) (IOleCache * This);
	HRESULT(STDMETHODCALLTYPE * Cache) (IOleCache * This, FORMATETC * pformatetc, DWORD advf, DWORD * pdwConnection);
	HRESULT(STDMETHODCALLTYPE * Uncache) (IOleCache * This, DWORD dwConnection);
	HRESULT(STDMETHODCALLTYPE * EnumCache) (IOleCache * This, IEnumSTATDATA ** ppenumSTATDATA);
	HRESULT(STDMETHODCALLTYPE * InitCache) (IOleCache * This, IDataObject * pDataObject);
	HRESULT(STDMETHODCALLTYPE * SetData) (IOleCache * This, FORMATETC * pformatetc, STGMEDIUM * pmedium, BOOL fRelease);
	END_INTERFACE
} IOleCacheVtbl;
interface IOleCache
{
	CONST_VTBL struct IOleCacheVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IOleCache_QueryInterface(This,riid,ppvObject)    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IOleCache_AddRef(This)    ( (This)->lpVtbl -> AddRef(This) )
#define IOleCache_Release(This)    ( (This)->lpVtbl -> Release(This) )
#define IOleCache_Cache(This,pformatetc,advf,pdwConnection)    ( (This)->lpVtbl -> Cache(This,pformatetc,advf,pdwConnection) )
#define IOleCache_Uncache(This,dwConnection)    ( (This)->lpVtbl -> Uncache(This,dwConnection) )
#define IOleCache_EnumCache(This,ppenumSTATDATA)    ( (This)->lpVtbl -> EnumCache(This,ppenumSTATDATA) )
#define IOleCache_InitCache(This,pDataObject)    ( (This)->lpVtbl -> InitCache(This,pDataObject) )
#define IOleCache_SetData(This,pformatetc,pmedium,fRelease)    ( (This)->lpVtbl -> SetData(This,pformatetc,pmedium,fRelease) )
#endif
#endif
#ifndef __IOleCache2_INTERFACE_DEFINED__
#define __IOleCache2_INTERFACE_DEFINED__
typedef IOleCache2 *LPOLECACHE2;
#define	UPDFCACHE_NODATACACHE	( 0x1 )
#define	UPDFCACHE_ONSAVECACHE	( 0x2 )
#define	UPDFCACHE_ONSTOPCACHE	( 0x4 )
#define	UPDFCACHE_NORMALCACHE	( 0x8 )
#define	UPDFCACHE_IFBLANK	( 0x10 )
#define	UPDFCACHE_ONLYIFBLANK	( 0x80000000 )
#define	UPDFCACHE_IFBLANKORONSAVECACHE	( ( UPDFCACHE_IFBLANK | UPDFCACHE_ONSAVECACHE )  )
#define	UPDFCACHE_ALL	( ( DWORD  )~UPDFCACHE_ONLYIFBLANK )
#define	UPDFCACHE_ALLBUTNODATACACHE	( ( UPDFCACHE_ALL & ( DWORD  )~UPDFCACHE_NODATACACHE )  )
typedef enum tagDISCARDCACHE
{
	DISCARDCACHE_SAVEIFDIRTY = 0,
	DISCARDCACHE_NOSAVE = 1
} DISCARDCACHE;
extern const IID IID_IOleCache2;
typedef struct IOleCache2Vtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IOleCache2 * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IOleCache2 * This);
	ULONG(STDMETHODCALLTYPE * Release) (IOleCache2 * This);
	HRESULT(STDMETHODCALLTYPE * Cache) (IOleCache2 * This, FORMATETC * pformatetc, DWORD advf, DWORD * pdwConnection);
	HRESULT(STDMETHODCALLTYPE * Uncache) (IOleCache2 * This, DWORD dwConnection);
	HRESULT(STDMETHODCALLTYPE * EnumCache) (IOleCache2 * This, IEnumSTATDATA ** ppenumSTATDATA);
	HRESULT(STDMETHODCALLTYPE * InitCache) (IOleCache2 * This, IDataObject * pDataObject);
	HRESULT(STDMETHODCALLTYPE * SetData) (IOleCache2 * This, FORMATETC * pformatetc, STGMEDIUM * pmedium, BOOL fRelease);
	HRESULT(STDMETHODCALLTYPE * UpdateCache) (IOleCache2 * This, LPDATAOBJECT pDataObject, DWORD grfUpdf, LPVOID pReserved);
	HRESULT(STDMETHODCALLTYPE * DiscardCache) (IOleCache2 * This, DWORD dwDiscardOptions);
	END_INTERFACE
} IOleCache2Vtbl;
interface IOleCache2
{
	CONST_VTBL struct IOleCache2Vtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IOleCache2_QueryInterface(This,riid,ppvObject)    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IOleCache2_AddRef(This)    ( (This)->lpVtbl -> AddRef(This) )
#define IOleCache2_Release(This)    ( (This)->lpVtbl -> Release(This) )
#define IOleCache2_Cache(This,pformatetc,advf,pdwConnection)    ( (This)->lpVtbl -> Cache(This,pformatetc,advf,pdwConnection) )
#define IOleCache2_Uncache(This,dwConnection)    ( (This)->lpVtbl -> Uncache(This,dwConnection) )
#define IOleCache2_EnumCache(This,ppenumSTATDATA)    ( (This)->lpVtbl -> EnumCache(This,ppenumSTATDATA) )
#define IOleCache2_InitCache(This,pDataObject)    ( (This)->lpVtbl -> InitCache(This,pDataObject) )
#define IOleCache2_SetData(This,pformatetc,pmedium,fRelease)    ( (This)->lpVtbl -> SetData(This,pformatetc,pmedium,fRelease) )
#define IOleCache2_UpdateCache(This,pDataObject,grfUpdf,pReserved)    ( (This)->lpVtbl -> UpdateCache(This,pDataObject,grfUpdf,pReserved) )
#define IOleCache2_DiscardCache(This,dwDiscardOptions)    ( (This)->lpVtbl -> DiscardCache(This,dwDiscardOptions) )
#endif
HRESULT STDMETHODCALLTYPE IOleCache2_RemoteUpdateCache_Proxy(IOleCache2 *This, LPDATAOBJECT pDataObject, DWORD grfUpdf, LONG_PTR pReserved);
void __RPC_STUB IOleCache2_RemoteUpdateCache_Stub(IRpcStubBuffer *This, IRpcChannelBuffer *_pRpcChannelBuffer, PRPC_MESSAGE _pRpcMessage, DWORD *_pdwStubPhase);
#endif
#ifndef __IOleCacheControl_INTERFACE_DEFINED__
#define __IOleCacheControl_INTERFACE_DEFINED__
typedef IOleCacheControl *LPOLECACHECONTROL;
extern const IID IID_IOleCacheControl;
typedef struct IOleCacheControlVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE *QueryInterface) (IOleCacheControl *This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE *AddRef) (IOleCacheControl *This);
	ULONG(STDMETHODCALLTYPE *Release) (IOleCacheControl *This);
	HRESULT(STDMETHODCALLTYPE *OnRun) (IOleCacheControl *This, LPDATAOBJECT pDataObject);
	HRESULT(STDMETHODCALLTYPE *OnStop) (IOleCacheControl *This);
	END_INTERFACE
} IOleCacheControlVtbl;
interface IOleCacheControl
{
	CONST_VTBL struct IOleCacheControlVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IOleCacheControl_QueryInterface(This,riid,ppvObject)    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IOleCacheControl_AddRef(This)    ( (This)->lpVtbl -> AddRef(This) )
#define IOleCacheControl_Release(This)    ( (This)->lpVtbl -> Release(This) )
#define IOleCacheControl_OnRun(This,pDataObject)    ( (This)->lpVtbl -> OnRun(This,pDataObject) )
#define IOleCacheControl_OnStop(This)    ( (This)->lpVtbl -> OnStop(This) )
#endif
#endif
#ifndef __IParseDisplayName_INTERFACE_DEFINED__
#define __IParseDisplayName_INTERFACE_DEFINED__
typedef IParseDisplayName *LPPARSEDISPLAYNAME;
extern const IID IID_IParseDisplayName;
typedef struct IParseDisplayNameVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE *QueryInterface) (IParseDisplayName *This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE *AddRef) (IParseDisplayName *This);
	ULONG(STDMETHODCALLTYPE *Release) (IParseDisplayName *This);
	HRESULT(STDMETHODCALLTYPE *ParseDisplayName) (IParseDisplayName *This, IBindCtx *pbc, LPOLESTR pszDisplayName, ULONG *pchEaten, IMoniker **ppmkOut);
	END_INTERFACE
} IParseDisplayNameVtbl;
interface IParseDisplayName
{
	CONST_VTBL struct IParseDisplayNameVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IParseDisplayName_QueryInterface(This,riid,ppvObject)    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IParseDisplayName_AddRef(This)    ( (This)->lpVtbl -> AddRef(This) )
#define IParseDisplayName_Release(This)    ( (This)->lpVtbl -> Release(This) )
#define IParseDisplayName_ParseDisplayName(This,pbc,pszDisplayName,pchEaten,ppmkOut)    ( (This)->lpVtbl -> ParseDisplayName(This,pbc,pszDisplayName,pchEaten,ppmkOut) )
#endif
#endif
#ifndef __IOleContainer_INTERFACE_DEFINED__
#define __IOleContainer_INTERFACE_DEFINED__
typedef IOleContainer *LPOLECONTAINER;
extern const IID IID_IOleContainer;
typedef struct IOleContainerVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE *QueryInterface) (IOleContainer *This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE *AddRef) (IOleContainer *This);
	ULONG(STDMETHODCALLTYPE *Release) (IOleContainer *This);
	HRESULT(STDMETHODCALLTYPE *ParseDisplayName) (IOleContainer *This, IBindCtx *pbc, LPOLESTR pszDisplayName, ULONG *pchEaten, IMoniker **ppmkOut);
	HRESULT(STDMETHODCALLTYPE *EnumObjects) (IOleContainer *This, DWORD grfFlags, IEnumUnknown **ppenum);
	HRESULT(STDMETHODCALLTYPE *LockContainer) (IOleContainer *This, BOOL fLock);
	END_INTERFACE
} IOleContainerVtbl;
interface IOleContainer
{
	CONST_VTBL struct IOleContainerVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IOleContainer_QueryInterface(This,riid,ppvObject)    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IOleContainer_AddRef(This)    ( (This)->lpVtbl -> AddRef(This) )
#define IOleContainer_Release(This)    ( (This)->lpVtbl -> Release(This) )
#define IOleContainer_ParseDisplayName(This,pbc,pszDisplayName,pchEaten,ppmkOut)    ( (This)->lpVtbl -> ParseDisplayName(This,pbc,pszDisplayName,pchEaten,ppmkOut) )
#define IOleContainer_EnumObjects(This,grfFlags,ppenum)    ( (This)->lpVtbl -> EnumObjects(This,grfFlags,ppenum) )
#define IOleContainer_LockContainer(This,fLock)    ( (This)->lpVtbl -> LockContainer(This,fLock) )
#endif
#endif
#ifndef __IOleClientSite_INTERFACE_DEFINED__
#define __IOleClientSite_INTERFACE_DEFINED__
typedef IOleClientSite *LPOLECLIENTSITE;
extern const IID IID_IOleClientSite;
typedef struct IOleClientSiteVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE *QueryInterface) (IOleClientSite *This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE *AddRef) (IOleClientSite *This);
	ULONG(STDMETHODCALLTYPE *Release) (IOleClientSite *This);
	HRESULT(STDMETHODCALLTYPE *SaveObject) (IOleClientSite *This);
	HRESULT(STDMETHODCALLTYPE *GetMoniker) (IOleClientSite *This, DWORD dwAssign, DWORD dwWhichMoniker, IMoniker **ppmk);
	HRESULT(STDMETHODCALLTYPE *GetContainer) (IOleClientSite *This, IOleContainer **ppContainer);
	HRESULT(STDMETHODCALLTYPE *ShowObject) (IOleClientSite *This);
	HRESULT(STDMETHODCALLTYPE *OnShowWindow) (IOleClientSite *This, BOOL fShow);
	HRESULT(STDMETHODCALLTYPE *RequestNewObjectLayout) (IOleClientSite *This);
	END_INTERFACE
} IOleClientSiteVtbl;
interface IOleClientSite
{
	CONST_VTBL struct IOleClientSiteVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IOleClientSite_QueryInterface(This,riid,ppvObject)    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IOleClientSite_AddRef(This)    ( (This)->lpVtbl -> AddRef(This) )
#define IOleClientSite_Release(This)    ( (This)->lpVtbl -> Release(This) )
#define IOleClientSite_SaveObject(This)    ( (This)->lpVtbl -> SaveObject(This) )
#define IOleClientSite_GetMoniker(This,dwAssign,dwWhichMoniker,ppmk)    ( (This)->lpVtbl -> GetMoniker(This,dwAssign,dwWhichMoniker,ppmk) )
#define IOleClientSite_GetContainer(This,ppContainer)    ( (This)->lpVtbl -> GetContainer(This,ppContainer) )
#define IOleClientSite_ShowObject(This)    ( (This)->lpVtbl -> ShowObject(This) )
#define IOleClientSite_OnShowWindow(This,fShow)    ( (This)->lpVtbl -> OnShowWindow(This,fShow) )
#define IOleClientSite_RequestNewObjectLayout(This)    ( (This)->lpVtbl -> RequestNewObjectLayout(This) )
#endif
#endif
#ifndef __IOleObject_INTERFACE_DEFINED__
#define __IOleObject_INTERFACE_DEFINED__
typedef IOleObject *LPOLEOBJECT;
typedef enum tagOLEGETMONIKER
{
	OLEGETMONIKER_ONLYIFTHERE = 1,
	OLEGETMONIKER_FORCEASSIGN = 2,
	OLEGETMONIKER_UNASSIGN = 3,
	OLEGETMONIKER_TEMPFORUSER = 4
} OLEGETMONIKER;
typedef enum tagOLEWHICHMK
{
	OLEWHICHMK_CONTAINER = 1,
	OLEWHICHMK_OBJREL = 2,
	OLEWHICHMK_OBJFULL = 3
} OLEWHICHMK;
typedef enum tagUSERCLASSTYPE
{
	USERCLASSTYPE_FULL = 1,
	USERCLASSTYPE_SHORT = 2,
	USERCLASSTYPE_APPNAME = 3
} USERCLASSTYPE;
typedef enum tagOLEMISC
{
	OLEMISC_RECOMPOSEONRESIZE = 0x1,
	OLEMISC_ONLYICONIC = 0x2,
	OLEMISC_INSERTNOTREPLACE = 0x4,
	OLEMISC_STATIC = 0x8,
	OLEMISC_CANTLINKINSIDE = 0x10,
	OLEMISC_CANLINKBYOLE1 = 0x20,
	OLEMISC_ISLINKOBJECT = 0x40,
	OLEMISC_INSIDEOUT = 0x80,
	OLEMISC_ACTIVATEWHENVISIBLE = 0x100,
	OLEMISC_RENDERINGISDEVICEINDEPENDENT = 0x200,
	OLEMISC_INVISIBLEATRUNTIME = 0x400,
	OLEMISC_ALWAYSRUN = 0x800,
	OLEMISC_ACTSLIKEBUTTON = 0x1000,
	OLEMISC_ACTSLIKELABEL = 0x2000,
	OLEMISC_NOUIACTIVATE = 0x4000,
	OLEMISC_ALIGNABLE = 0x8000,
	OLEMISC_SIMPLEFRAME = 0x10000,
	OLEMISC_SETCLIENTSITEFIRST = 0x20000,
	OLEMISC_IMEMODE = 0x40000,
	OLEMISC_IGNOREACTIVATEWHENVISIBLE = 0x80000,
	OLEMISC_WANTSTOMENUMERGE = 0x100000,
	OLEMISC_SUPPORTSMULTILEVELUNDO = 0x200000
} OLEMISC;
typedef enum tagOLECLOSE
{
	OLECLOSE_SAVEIFDIRTY = 0,
	OLECLOSE_NOSAVE = 1,
	OLECLOSE_PROMPTSAVE = 2
} OLECLOSE;
extern const IID IID_IOleObject;
typedef struct IOleObjectVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE *QueryInterface) (IOleObject *This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE *AddRef) (IOleObject *This);
	ULONG(STDMETHODCALLTYPE *Release) (IOleObject *This);
	HRESULT(STDMETHODCALLTYPE *SetClientSite) (IOleObject *This, IOleClientSite *pClientSite);
	HRESULT(STDMETHODCALLTYPE *GetClientSite) (IOleObject *This, IOleClientSite **ppClientSite);
	HRESULT(STDMETHODCALLTYPE *SetHostNames) (IOleObject *This, LPCOLESTR szContainerApp, LPCOLESTR szContainerObj);
	HRESULT(STDMETHODCALLTYPE *Close) (IOleObject *This, DWORD dwSaveOption);
	HRESULT(STDMETHODCALLTYPE *SetMoniker) (IOleObject *This, DWORD dwWhichMoniker, IMoniker *pmk);
	HRESULT(STDMETHODCALLTYPE *GetMoniker) (IOleObject *This, DWORD dwAssign, DWORD dwWhichMoniker, IMoniker **ppmk);
	HRESULT(STDMETHODCALLTYPE *InitFromData) (IOleObject *This, IDataObject *pDataObject, BOOL fCreation, DWORD dwReserved);
	HRESULT(STDMETHODCALLTYPE *GetClipboardData) (IOleObject *This, DWORD dwReserved, IDataObject **ppDataObject);
	HRESULT(STDMETHODCALLTYPE *DoVerb) (IOleObject *This, LONG iVerb, LPMSG lpmsg, IOleClientSite *pActiveSite, LONG lindex, HWND hwndParent, LPCRECT lprcPosRect);
	HRESULT(STDMETHODCALLTYPE *EnumVerbs) (IOleObject *This, IEnumOLEVERB **ppEnumOleVerb);
	HRESULT(STDMETHODCALLTYPE *Update) (IOleObject *This);
	HRESULT(STDMETHODCALLTYPE *IsUpToDate) (IOleObject *This);
	HRESULT(STDMETHODCALLTYPE *GetUserClassID) (IOleObject *This, CLSID *pClsid);
	HRESULT(STDMETHODCALLTYPE *GetUserType) (IOleObject *This, DWORD dwFormOfType, LPOLESTR *pszUserType);
	HRESULT(STDMETHODCALLTYPE *SetExtent) (IOleObject *This, DWORD dwDrawAspect, SIZEL *psizel);
	HRESULT(STDMETHODCALLTYPE *GetExtent) (IOleObject *This, DWORD dwDrawAspect, SIZEL *psizel);
	HRESULT(STDMETHODCALLTYPE *Advise) (IOleObject *This, IAdviseSink *pAdvSink, DWORD *pdwConnection);
	HRESULT(STDMETHODCALLTYPE *Unadvise) (IOleObject *This, DWORD dwConnection);
	HRESULT(STDMETHODCALLTYPE *EnumAdvise) (IOleObject *This, IEnumSTATDATA **ppenumAdvise);
	HRESULT(STDMETHODCALLTYPE *GetMiscStatus) (IOleObject *This, DWORD dwAspect, DWORD *pdwStatus);
	HRESULT(STDMETHODCALLTYPE *SetColorScheme) (IOleObject *This, LOGPALETTE *pLogpal);
	END_INTERFACE
} IOleObjectVtbl;
interface IOleObject
{
	CONST_VTBL struct IOleObjectVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IOleObject_QueryInterface(This,riid,ppvObject)    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IOleObject_AddRef(This)    ( (This)->lpVtbl -> AddRef(This) )
#define IOleObject_Release(This)    ( (This)->lpVtbl -> Release(This) )
#define IOleObject_SetClientSite(This,pClientSite)    ( (This)->lpVtbl -> SetClientSite(This,pClientSite) )
#define IOleObject_GetClientSite(This,ppClientSite)    ( (This)->lpVtbl -> GetClientSite(This,ppClientSite) )
#define IOleObject_SetHostNames(This,szContainerApp,szContainerObj)    ( (This)->lpVtbl -> SetHostNames(This,szContainerApp,szContainerObj) )
#define IOleObject_Close(This,dwSaveOption)    ( (This)->lpVtbl -> Close(This,dwSaveOption) )
#define IOleObject_SetMoniker(This,dwWhichMoniker,pmk)    ( (This)->lpVtbl -> SetMoniker(This,dwWhichMoniker,pmk) )
#define IOleObject_GetMoniker(This,dwAssign,dwWhichMoniker,ppmk)    ( (This)->lpVtbl -> GetMoniker(This,dwAssign,dwWhichMoniker,ppmk) )
#define IOleObject_InitFromData(This,pDataObject,fCreation,dwReserved)    ( (This)->lpVtbl -> InitFromData(This,pDataObject,fCreation,dwReserved) )
#define IOleObject_GetClipboardData(This,dwReserved,ppDataObject)    ( (This)->lpVtbl -> GetClipboardData(This,dwReserved,ppDataObject) )
#define IOleObject_DoVerb(This,iVerb,lpmsg,pActiveSite,lindex,hwndParent,lprcPosRect)    ( (This)->lpVtbl -> DoVerb(This,iVerb,lpmsg,pActiveSite,lindex,hwndParent,lprcPosRect) )
#define IOleObject_EnumVerbs(This,ppEnumOleVerb)    ( (This)->lpVtbl -> EnumVerbs(This,ppEnumOleVerb) )
#define IOleObject_Update(This)    ( (This)->lpVtbl -> Update(This) )
#define IOleObject_IsUpToDate(This)    ( (This)->lpVtbl -> IsUpToDate(This) )
#define IOleObject_GetUserClassID(This,pClsid)    ( (This)->lpVtbl -> GetUserClassID(This,pClsid) )
#define IOleObject_GetUserType(This,dwFormOfType,pszUserType)    ( (This)->lpVtbl -> GetUserType(This,dwFormOfType,pszUserType) )
#define IOleObject_SetExtent(This,dwDrawAspect,psizel)    ( (This)->lpVtbl -> SetExtent(This,dwDrawAspect,psizel) )
#define IOleObject_GetExtent(This,dwDrawAspect,psizel)    ( (This)->lpVtbl -> GetExtent(This,dwDrawAspect,psizel) )
#define IOleObject_Advise(This,pAdvSink,pdwConnection)    ( (This)->lpVtbl -> Advise(This,pAdvSink,pdwConnection) )
#define IOleObject_Unadvise(This,dwConnection)    ( (This)->lpVtbl -> Unadvise(This,dwConnection) )
#define IOleObject_EnumAdvise(This,ppenumAdvise)    ( (This)->lpVtbl -> EnumAdvise(This,ppenumAdvise) )
#define IOleObject_GetMiscStatus(This,dwAspect,pdwStatus)    ( (This)->lpVtbl -> GetMiscStatus(This,dwAspect,pdwStatus) )
#define IOleObject_SetColorScheme(This,pLogpal)    ( (This)->lpVtbl -> SetColorScheme(This,pLogpal) )
#endif
#endif
#ifndef __IOLETypes_INTERFACE_DEFINED__
#define __IOLETypes_INTERFACE_DEFINED__
typedef enum tagOLERENDER
{
	OLERENDER_NONE = 0,
	OLERENDER_DRAW = 1,
	OLERENDER_FORMAT = 2,
	OLERENDER_ASIS = 3
} OLERENDER;
typedef OLERENDER *LPOLERENDER;
typedef struct tagOBJECTDESCRIPTOR
{
	ULONG cbSize;
	CLSID clsid;
	DWORD dwDrawAspect;
	SIZEL sizel;
	POINTL pointl;
	DWORD dwStatus;
	DWORD dwFullUserTypeName;
	DWORD dwSrcOfCopy;
} OBJECTDESCRIPTOR;
typedef struct tagOBJECTDESCRIPTOR *POBJECTDESCRIPTOR;
typedef struct tagOBJECTDESCRIPTOR *LPOBJECTDESCRIPTOR;
typedef struct tagOBJECTDESCRIPTOR LINKSRCDESCRIPTOR;
typedef struct tagOBJECTDESCRIPTOR *PLINKSRCDESCRIPTOR;
typedef struct tagOBJECTDESCRIPTOR *LPLINKSRCDESCRIPTOR;
extern RPC_IF_HANDLE IOLETypes_v0_0_c_ifspec;
extern RPC_IF_HANDLE IOLETypes_v0_0_s_ifspec;
#endif
#ifndef __IOleWindow_INTERFACE_DEFINED__
#define __IOleWindow_INTERFACE_DEFINED__
typedef IOleWindow *LPOLEWINDOW;
extern const IID IID_IOleWindow;
typedef struct IOleWindowVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE *QueryInterface) (IOleWindow *This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE *AddRef) (IOleWindow *This);
	ULONG(STDMETHODCALLTYPE *Release) (IOleWindow *This);
	HRESULT(STDMETHODCALLTYPE *GetWindow) (IOleWindow *This, HWND *phwnd);
	HRESULT(STDMETHODCALLTYPE *ContextSensitiveHelp) (IOleWindow *This, BOOL fEnterMode);
	END_INTERFACE
} IOleWindowVtbl;
interface IOleWindow
{
	CONST_VTBL struct IOleWindowVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IOleWindow_QueryInterface(This,riid,ppvObject)    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IOleWindow_AddRef(This)    ( (This)->lpVtbl -> AddRef(This) )
#define IOleWindow_Release(This)    ( (This)->lpVtbl -> Release(This) )
#define IOleWindow_GetWindow(This,phwnd)    ( (This)->lpVtbl -> GetWindow(This,phwnd) )
#define IOleWindow_ContextSensitiveHelp(This,fEnterMode)    ( (This)->lpVtbl -> ContextSensitiveHelp(This,fEnterMode) )
#endif
#endif
#ifndef __IOleLink_INTERFACE_DEFINED__
#define __IOleLink_INTERFACE_DEFINED__
typedef IOleLink *LPOLELINK;
typedef enum tagOLEUPDATE
{
	OLEUPDATE_ALWAYS = 1,
	OLEUPDATE_ONCALL = 3
} OLEUPDATE;
typedef OLEUPDATE *LPOLEUPDATE;
typedef OLEUPDATE *POLEUPDATE;
typedef enum tagOLELINKBIND
{
	OLELINKBIND_EVENIFCLASSDIFF = 1
} OLELINKBIND;
extern const IID IID_IOleLink;
typedef struct IOleLinkVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE *QueryInterface) (IOleLink *This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE *AddRef) (IOleLink *This);
	ULONG(STDMETHODCALLTYPE *Release) (IOleLink *This);
	HRESULT(STDMETHODCALLTYPE *SetUpdateOptions) (IOleLink *This, DWORD dwUpdateOpt);
	HRESULT(STDMETHODCALLTYPE *GetUpdateOptions) (IOleLink *This, DWORD *pdwUpdateOpt);
	HRESULT(STDMETHODCALLTYPE *SetSourceMoniker) (IOleLink *This, IMoniker *pmk, REFCLSID rclsid);
	HRESULT(STDMETHODCALLTYPE *GetSourceMoniker) (IOleLink *This, IMoniker **ppmk);
	HRESULT(STDMETHODCALLTYPE *SetSourceDisplayName) (IOleLink *This, LPCOLESTR pszStatusText);
	HRESULT(STDMETHODCALLTYPE *GetSourceDisplayName) (IOleLink *This, LPOLESTR *ppszDisplayName);
	HRESULT(STDMETHODCALLTYPE *BindToSource) (IOleLink *This, DWORD bindflags, IBindCtx *pbc);
	HRESULT(STDMETHODCALLTYPE *BindIfRunning) (IOleLink *This);
	HRESULT(STDMETHODCALLTYPE *GetBoundSource) (IOleLink *This, IUnknown **ppunk);
	HRESULT(STDMETHODCALLTYPE *UnbindSource) (IOleLink *This);
	HRESULT(STDMETHODCALLTYPE *Update) (IOleLink *This, IBindCtx *pbc);
	END_INTERFACE
} IOleLinkVtbl;
interface IOleLink
{
	CONST_VTBL struct IOleLinkVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IOleLink_QueryInterface(This,riid,ppvObject)    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IOleLink_AddRef(This)    ( (This)->lpVtbl -> AddRef(This) )
#define IOleLink_Release(This)    ( (This)->lpVtbl -> Release(This) )
#define IOleLink_SetUpdateOptions(This,dwUpdateOpt)    ( (This)->lpVtbl -> SetUpdateOptions(This,dwUpdateOpt) )
#define IOleLink_GetUpdateOptions(This,pdwUpdateOpt)    ( (This)->lpVtbl -> GetUpdateOptions(This,pdwUpdateOpt) )
#define IOleLink_SetSourceMoniker(This,pmk,rclsid)    ( (This)->lpVtbl -> SetSourceMoniker(This,pmk,rclsid) )
#define IOleLink_GetSourceMoniker(This,ppmk)    ( (This)->lpVtbl -> GetSourceMoniker(This,ppmk) )
#define IOleLink_SetSourceDisplayName(This,pszStatusText)    ( (This)->lpVtbl -> SetSourceDisplayName(This,pszStatusText) )
#define IOleLink_GetSourceDisplayName(This,ppszDisplayName)    ( (This)->lpVtbl -> GetSourceDisplayName(This,ppszDisplayName) )
#define IOleLink_BindToSource(This,bindflags,pbc)    ( (This)->lpVtbl -> BindToSource(This,bindflags,pbc) )
#define IOleLink_BindIfRunning(This)    ( (This)->lpVtbl -> BindIfRunning(This) )
#define IOleLink_GetBoundSource(This,ppunk)    ( (This)->lpVtbl -> GetBoundSource(This,ppunk) )
#define IOleLink_UnbindSource(This)    ( (This)->lpVtbl -> UnbindSource(This) )
#define IOleLink_Update(This,pbc)    ( (This)->lpVtbl -> Update(This,pbc) )
#endif
#endif
#ifndef __IOleItemContainer_INTERFACE_DEFINED__
#define __IOleItemContainer_INTERFACE_DEFINED__
typedef IOleItemContainer *LPOLEITEMCONTAINER;
typedef enum tagBINDSPEED
{
	BINDSPEED_INDEFINITE = 1,
	BINDSPEED_MODERATE = 2,
	BINDSPEED_IMMEDIATE = 3
} BINDSPEED;
typedef enum tagOLECONTF
{
	OLECONTF_EMBEDDINGS = 1,
	OLECONTF_LINKS = 2,
	OLECONTF_OTHERS = 4,
	OLECONTF_ONLYUSER = 8,
	OLECONTF_ONLYIFRUNNING = 16
} OLECONTF;
extern const IID IID_IOleItemContainer;
typedef struct IOleItemContainerVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE *QueryInterface) (IOleItemContainer *This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE *AddRef) (IOleItemContainer *This);
	ULONG(STDMETHODCALLTYPE *Release) (IOleItemContainer *This);
	HRESULT(STDMETHODCALLTYPE *ParseDisplayName) (IOleItemContainer *This, IBindCtx *pbc, LPOLESTR pszDisplayName, ULONG *pchEaten, IMoniker **ppmkOut);
	HRESULT(STDMETHODCALLTYPE *EnumObjects) (IOleItemContainer *This, DWORD grfFlags, IEnumUnknown **ppenum);
	HRESULT(STDMETHODCALLTYPE *LockContainer) (IOleItemContainer *This, BOOL fLock);
	HRESULT(STDMETHODCALLTYPE *GetObject) (IOleItemContainer *This, LPOLESTR pszItem, DWORD dwSpeedNeeded, IBindCtx *pbc, REFIID riid, void **ppvObject);
	HRESULT(STDMETHODCALLTYPE *GetObjectStorage) (IOleItemContainer *This, LPOLESTR pszItem, IBindCtx *pbc, REFIID riid, void **ppvStorage);
	HRESULT(STDMETHODCALLTYPE *IsRunning) (IOleItemContainer *This, LPOLESTR pszItem);
	END_INTERFACE
} IOleItemContainerVtbl;
interface IOleItemContainer
{
	CONST_VTBL struct IOleItemContainerVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IOleItemContainer_QueryInterface(This,riid,ppvObject)    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IOleItemContainer_AddRef(This)    ( (This)->lpVtbl -> AddRef(This) )
#define IOleItemContainer_Release(This)    ( (This)->lpVtbl -> Release(This) )
#define IOleItemContainer_ParseDisplayName(This,pbc,pszDisplayName,pchEaten,ppmkOut)    ( (This)->lpVtbl -> ParseDisplayName(This,pbc,pszDisplayName,pchEaten,ppmkOut) )
#define IOleItemContainer_EnumObjects(This,grfFlags,ppenum)    ( (This)->lpVtbl -> EnumObjects(This,grfFlags,ppenum) )
#define IOleItemContainer_LockContainer(This,fLock)    ( (This)->lpVtbl -> LockContainer(This,fLock) )
#define IOleItemContainer_GetObject(This,pszItem,dwSpeedNeeded,pbc,riid,ppvObject)    ( (This)->lpVtbl -> GetObject(This,pszItem,dwSpeedNeeded,pbc,riid,ppvObject) )
#define IOleItemContainer_GetObjectStorage(This,pszItem,pbc,riid,ppvStorage)    ( (This)->lpVtbl -> GetObjectStorage(This,pszItem,pbc,riid,ppvStorage) )
#define IOleItemContainer_IsRunning(This,pszItem)    ( (This)->lpVtbl -> IsRunning(This,pszItem) )
#endif
#endif
#ifndef __IOleInPlaceUIWindow_INTERFACE_DEFINED__
#define __IOleInPlaceUIWindow_INTERFACE_DEFINED__
typedef IOleInPlaceUIWindow *LPOLEINPLACEUIWINDOW;
typedef RECT BORDERWIDTHS;
typedef LPRECT LPBORDERWIDTHS;
typedef LPCRECT LPCBORDERWIDTHS;
extern const IID IID_IOleInPlaceUIWindow;
typedef struct IOleInPlaceUIWindowVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE *QueryInterface) (IOleInPlaceUIWindow *This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE *AddRef) (IOleInPlaceUIWindow *This);
	ULONG(STDMETHODCALLTYPE *Release) (IOleInPlaceUIWindow *This);
	HRESULT(STDMETHODCALLTYPE *GetWindow) (IOleInPlaceUIWindow *This, HWND *phwnd);
	HRESULT(STDMETHODCALLTYPE *ContextSensitiveHelp) (IOleInPlaceUIWindow *This, BOOL fEnterMode);
	HRESULT(STDMETHODCALLTYPE *GetBorder) (IOleInPlaceUIWindow *This, LPRECT lprectBorder);
	HRESULT(STDMETHODCALLTYPE *RequestBorderSpace) (IOleInPlaceUIWindow *This, LPCBORDERWIDTHS pborderwidths);
	HRESULT(STDMETHODCALLTYPE *SetBorderSpace) (IOleInPlaceUIWindow *This, LPCBORDERWIDTHS pborderwidths);
	HRESULT(STDMETHODCALLTYPE *SetActiveObject) (IOleInPlaceUIWindow *This, IOleInPlaceActiveObject *pActiveObject, LPCOLESTR pszObjName);
	END_INTERFACE
} IOleInPlaceUIWindowVtbl;
interface IOleInPlaceUIWindow
{
	CONST_VTBL struct IOleInPlaceUIWindowVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IOleInPlaceUIWindow_QueryInterface(This,riid,ppvObject)    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IOleInPlaceUIWindow_AddRef(This)    ( (This)->lpVtbl -> AddRef(This) )
#define IOleInPlaceUIWindow_Release(This)    ( (This)->lpVtbl -> Release(This) )
#define IOleInPlaceUIWindow_GetWindow(This,phwnd)    ( (This)->lpVtbl -> GetWindow(This,phwnd) )
#define IOleInPlaceUIWindow_ContextSensitiveHelp(This,fEnterMode)    ( (This)->lpVtbl -> ContextSensitiveHelp(This,fEnterMode) )
#define IOleInPlaceUIWindow_GetBorder(This,lprectBorder)    ( (This)->lpVtbl -> GetBorder(This,lprectBorder) )
#define IOleInPlaceUIWindow_RequestBorderSpace(This,pborderwidths)    ( (This)->lpVtbl -> RequestBorderSpace(This,pborderwidths) )
#define IOleInPlaceUIWindow_SetBorderSpace(This,pborderwidths)    ( (This)->lpVtbl -> SetBorderSpace(This,pborderwidths) )
#define IOleInPlaceUIWindow_SetActiveObject(This,pActiveObject,pszObjName)    ( (This)->lpVtbl -> SetActiveObject(This,pActiveObject,pszObjName) )
#endif
#endif
#ifndef __IOleInPlaceActiveObject_INTERFACE_DEFINED__
#define __IOleInPlaceActiveObject_INTERFACE_DEFINED__
typedef IOleInPlaceActiveObject *LPOLEINPLACEACTIVEOBJECT;
extern const IID IID_IOleInPlaceActiveObject;
typedef struct IOleInPlaceActiveObjectVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE *QueryInterface) (IOleInPlaceActiveObject *This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE *AddRef) (IOleInPlaceActiveObject *This);
	ULONG(STDMETHODCALLTYPE *Release) (IOleInPlaceActiveObject *This);
	HRESULT(STDMETHODCALLTYPE *GetWindow) (IOleInPlaceActiveObject *This, HWND *phwnd);
	HRESULT(STDMETHODCALLTYPE *ContextSensitiveHelp) (IOleInPlaceActiveObject *This, BOOL fEnterMode);
	HRESULT(STDMETHODCALLTYPE *TranslateAccelerator) (IOleInPlaceActiveObject *This, LPMSG lpmsg);
	HRESULT(STDMETHODCALLTYPE *OnFrameWindowActivate) (IOleInPlaceActiveObject *This, BOOL fActivate);
	HRESULT(STDMETHODCALLTYPE *OnDocWindowActivate) (IOleInPlaceActiveObject *This, BOOL fActivate);
	HRESULT(STDMETHODCALLTYPE *ResizeBorder) (IOleInPlaceActiveObject *This, LPCRECT prcBorder, IOleInPlaceUIWindow *pUIWindow, BOOL fFrameWindow);
	HRESULT(STDMETHODCALLTYPE *EnableModeless) (IOleInPlaceActiveObject *This, BOOL fEnable);
	END_INTERFACE
} IOleInPlaceActiveObjectVtbl;
interface IOleInPlaceActiveObject
{
	CONST_VTBL struct IOleInPlaceActiveObjectVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IOleInPlaceActiveObject_QueryInterface(This,riid,ppvObject)    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IOleInPlaceActiveObject_AddRef(This)    ( (This)->lpVtbl -> AddRef(This) )
#define IOleInPlaceActiveObject_Release(This)    ( (This)->lpVtbl -> Release(This) )
#define IOleInPlaceActiveObject_GetWindow(This,phwnd)    ( (This)->lpVtbl -> GetWindow(This,phwnd) )
#define IOleInPlaceActiveObject_ContextSensitiveHelp(This,fEnterMode)    ( (This)->lpVtbl -> ContextSensitiveHelp(This,fEnterMode) )
#define IOleInPlaceActiveObject_TranslateAccelerator(This,lpmsg)    ( (This)->lpVtbl -> TranslateAccelerator(This,lpmsg) )
#define IOleInPlaceActiveObject_OnFrameWindowActivate(This,fActivate)    ( (This)->lpVtbl -> OnFrameWindowActivate(This,fActivate) )
#define IOleInPlaceActiveObject_OnDocWindowActivate(This,fActivate)    ( (This)->lpVtbl -> OnDocWindowActivate(This,fActivate) )
#define IOleInPlaceActiveObject_ResizeBorder(This,prcBorder,pUIWindow,fFrameWindow)    ( (This)->lpVtbl -> ResizeBorder(This,prcBorder,pUIWindow,fFrameWindow) )
#define IOleInPlaceActiveObject_EnableModeless(This,fEnable)    ( (This)->lpVtbl -> EnableModeless(This,fEnable) )
#endif
HRESULT STDMETHODCALLTYPE IOleInPlaceActiveObject_RemoteTranslateAccelerator_Proxy(IOleInPlaceActiveObject *This);
void __RPC_STUB IOleInPlaceActiveObject_RemoteTranslateAccelerator_Stub(IRpcStubBuffer *This, IRpcChannelBuffer *_pRpcChannelBuffer, PRPC_MESSAGE _pRpcMessage, DWORD *_pdwStubPhase);
HRESULT STDMETHODCALLTYPE IOleInPlaceActiveObject_RemoteResizeBorder_Proxy(IOleInPlaceActiveObject *This, LPCRECT prcBorder, REFIID riid, IOleInPlaceUIWindow *pUIWindow, BOOL fFrameWindow);
void __RPC_STUB IOleInPlaceActiveObject_RemoteResizeBorder_Stub(IRpcStubBuffer *This, IRpcChannelBuffer *_pRpcChannelBuffer, PRPC_MESSAGE _pRpcMessage, DWORD *_pdwStubPhase);
#endif
#ifndef __IOleInPlaceFrame_INTERFACE_DEFINED__
#define __IOleInPlaceFrame_INTERFACE_DEFINED__
typedef IOleInPlaceFrame *LPOLEINPLACEFRAME;
typedef struct tagOIFI
{
	UINT cb;
	BOOL fMDIApp;
	HWND hwndFrame;
	HACCEL haccel;
	UINT cAccelEntries;
} OLEINPLACEFRAMEINFO;
typedef struct tagOIFI *LPOLEINPLACEFRAMEINFO;
typedef struct tagOleMenuGroupWidths
{
	LONG width[6];
} OLEMENUGROUPWIDTHS;
typedef struct tagOleMenuGroupWidths *LPOLEMENUGROUPWIDTHS;
typedef HGLOBAL HOLEMENU;
extern const IID IID_IOleInPlaceFrame;
typedef struct IOleInPlaceFrameVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE *QueryInterface) (IOleInPlaceFrame *This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE *AddRef) (IOleInPlaceFrame *This);
	ULONG(STDMETHODCALLTYPE *Release) (IOleInPlaceFrame *This);
	HRESULT(STDMETHODCALLTYPE *GetWindow) (IOleInPlaceFrame *This, HWND *phwnd);
	HRESULT(STDMETHODCALLTYPE *ContextSensitiveHelp) (IOleInPlaceFrame *This, BOOL fEnterMode);
	HRESULT(STDMETHODCALLTYPE *GetBorder) (IOleInPlaceFrame *This, LPRECT lprectBorder);
	HRESULT(STDMETHODCALLTYPE *RequestBorderSpace) (IOleInPlaceFrame *This, LPCBORDERWIDTHS pborderwidths);
	HRESULT(STDMETHODCALLTYPE *SetBorderSpace) (IOleInPlaceFrame *This, LPCBORDERWIDTHS pborderwidths);
	HRESULT(STDMETHODCALLTYPE *SetActiveObject) (IOleInPlaceFrame *This, IOleInPlaceActiveObject *pActiveObject, LPCOLESTR pszObjName);
	HRESULT(STDMETHODCALLTYPE *InsertMenus) (IOleInPlaceFrame *This, HMENU hmenuShared, LPOLEMENUGROUPWIDTHS lpMenuWidths);
	HRESULT(STDMETHODCALLTYPE *SetMenu) (IOleInPlaceFrame *This, HMENU hmenuShared, HOLEMENU holemenu, HWND hwndActiveObject);
	HRESULT(STDMETHODCALLTYPE *RemoveMenus) (IOleInPlaceFrame *This, HMENU hmenuShared);
	HRESULT(STDMETHODCALLTYPE *SetStatusText) (IOleInPlaceFrame *This, LPCOLESTR pszStatusText);
	HRESULT(STDMETHODCALLTYPE *EnableModeless) (IOleInPlaceFrame *This, BOOL fEnable);
	HRESULT(STDMETHODCALLTYPE *TranslateAccelerator) (IOleInPlaceFrame *This, LPMSG lpmsg, WORD wID);
	END_INTERFACE
} IOleInPlaceFrameVtbl;
interface IOleInPlaceFrame
{
	CONST_VTBL struct IOleInPlaceFrameVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IOleInPlaceFrame_QueryInterface(This,riid,ppvObject)    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IOleInPlaceFrame_AddRef(This)    ( (This)->lpVtbl -> AddRef(This) )
#define IOleInPlaceFrame_Release(This)    ( (This)->lpVtbl -> Release(This) )
#define IOleInPlaceFrame_GetWindow(This,phwnd)    ( (This)->lpVtbl -> GetWindow(This,phwnd) )
#define IOleInPlaceFrame_ContextSensitiveHelp(This,fEnterMode)    ( (This)->lpVtbl -> ContextSensitiveHelp(This,fEnterMode) )
#define IOleInPlaceFrame_GetBorder(This,lprectBorder)    ( (This)->lpVtbl -> GetBorder(This,lprectBorder) )
#define IOleInPlaceFrame_RequestBorderSpace(This,pborderwidths)    ( (This)->lpVtbl -> RequestBorderSpace(This,pborderwidths) )
#define IOleInPlaceFrame_SetBorderSpace(This,pborderwidths)    ( (This)->lpVtbl -> SetBorderSpace(This,pborderwidths) )
#define IOleInPlaceFrame_SetActiveObject(This,pActiveObject,pszObjName)    ( (This)->lpVtbl -> SetActiveObject(This,pActiveObject,pszObjName) )
#define IOleInPlaceFrame_InsertMenus(This,hmenuShared,lpMenuWidths)    ( (This)->lpVtbl -> InsertMenus(This,hmenuShared,lpMenuWidths) )
#define IOleInPlaceFrame_SetMenu(This,hmenuShared,holemenu,hwndActiveObject)    ( (This)->lpVtbl -> SetMenu(This,hmenuShared,holemenu,hwndActiveObject) )
#define IOleInPlaceFrame_RemoveMenus(This,hmenuShared)    ( (This)->lpVtbl -> RemoveMenus(This,hmenuShared) )
#define IOleInPlaceFrame_SetStatusText(This,pszStatusText)    ( (This)->lpVtbl -> SetStatusText(This,pszStatusText) )
#define IOleInPlaceFrame_EnableModeless(This,fEnable)    ( (This)->lpVtbl -> EnableModeless(This,fEnable) )
#define IOleInPlaceFrame_TranslateAccelerator(This,lpmsg,wID)    ( (This)->lpVtbl -> TranslateAccelerator(This,lpmsg,wID) )
#endif
#endif
#ifndef __IOleInPlaceObject_INTERFACE_DEFINED__
#define __IOleInPlaceObject_INTERFACE_DEFINED__
typedef IOleInPlaceObject *LPOLEINPLACEOBJECT;
extern const IID IID_IOleInPlaceObject;
typedef struct IOleInPlaceObjectVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE *QueryInterface) (IOleInPlaceObject *This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE *AddRef) (IOleInPlaceObject *This);
	ULONG(STDMETHODCALLTYPE *Release) (IOleInPlaceObject *This);
	HRESULT(STDMETHODCALLTYPE *GetWindow) (IOleInPlaceObject *This, HWND *phwnd);
	HRESULT(STDMETHODCALLTYPE *ContextSensitiveHelp) (IOleInPlaceObject *This, BOOL fEnterMode);
	HRESULT(STDMETHODCALLTYPE *InPlaceDeactivate) (IOleInPlaceObject *This);
	HRESULT(STDMETHODCALLTYPE *UIDeactivate) (IOleInPlaceObject *This);
	HRESULT(STDMETHODCALLTYPE *SetObjectRects) (IOleInPlaceObject *This, LPCRECT lprcPosRect, LPCRECT lprcClipRect);
	HRESULT(STDMETHODCALLTYPE *ReactivateAndUndo) (IOleInPlaceObject *This);
	END_INTERFACE
} IOleInPlaceObjectVtbl;
interface IOleInPlaceObject
{
	CONST_VTBL struct IOleInPlaceObjectVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IOleInPlaceObject_QueryInterface(This,riid,ppvObject)    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IOleInPlaceObject_AddRef(This)    ( (This)->lpVtbl -> AddRef(This) )
#define IOleInPlaceObject_Release(This)    ( (This)->lpVtbl -> Release(This) )
#define IOleInPlaceObject_GetWindow(This,phwnd)    ( (This)->lpVtbl -> GetWindow(This,phwnd) )
#define IOleInPlaceObject_ContextSensitiveHelp(This,fEnterMode)    ( (This)->lpVtbl -> ContextSensitiveHelp(This,fEnterMode) )
#define IOleInPlaceObject_InPlaceDeactivate(This)    ( (This)->lpVtbl -> InPlaceDeactivate(This) )
#define IOleInPlaceObject_UIDeactivate(This)    ( (This)->lpVtbl -> UIDeactivate(This) )
#define IOleInPlaceObject_SetObjectRects(This,lprcPosRect,lprcClipRect)    ( (This)->lpVtbl -> SetObjectRects(This,lprcPosRect,lprcClipRect) )
#define IOleInPlaceObject_ReactivateAndUndo(This)    ( (This)->lpVtbl -> ReactivateAndUndo(This) )
#endif
#endif
#ifndef __IOleInPlaceSite_INTERFACE_DEFINED__
#define __IOleInPlaceSite_INTERFACE_DEFINED__
typedef IOleInPlaceSite *LPOLEINPLACESITE;
extern const IID IID_IOleInPlaceSite;
typedef struct IOleInPlaceSiteVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE *QueryInterface) (IOleInPlaceSite *This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE *AddRef) (IOleInPlaceSite *This);
	ULONG(STDMETHODCALLTYPE *Release) (IOleInPlaceSite *This);
	HRESULT(STDMETHODCALLTYPE *GetWindow) (IOleInPlaceSite *This, HWND *phwnd);
	HRESULT(STDMETHODCALLTYPE *ContextSensitiveHelp) (IOleInPlaceSite *This, BOOL fEnterMode);
	HRESULT(STDMETHODCALLTYPE *CanInPlaceActivate) (IOleInPlaceSite *This);
	HRESULT(STDMETHODCALLTYPE *OnInPlaceActivate) (IOleInPlaceSite *This);
	HRESULT(STDMETHODCALLTYPE *OnUIActivate) (IOleInPlaceSite *This);
	HRESULT(STDMETHODCALLTYPE *GetWindowContext) (IOleInPlaceSite *This, IOleInPlaceFrame **ppFrame, IOleInPlaceUIWindow **ppDoc, LPRECT lprcPosRect, LPRECT lprcClipRect, LPOLEINPLACEFRAMEINFO lpFrameInfo);
	HRESULT(STDMETHODCALLTYPE *Scroll) (IOleInPlaceSite *This, SIZE scrollExtant);
	HRESULT(STDMETHODCALLTYPE *OnUIDeactivate) (IOleInPlaceSite *This, BOOL fUndoable);
	HRESULT(STDMETHODCALLTYPE *OnInPlaceDeactivate) (IOleInPlaceSite *This);
	HRESULT(STDMETHODCALLTYPE *DiscardUndoState) (IOleInPlaceSite *This);
	HRESULT(STDMETHODCALLTYPE *DeactivateAndUndo) (IOleInPlaceSite *This);
	HRESULT(STDMETHODCALLTYPE *OnPosRectChange) (IOleInPlaceSite *This, LPCRECT lprcPosRect);
	END_INTERFACE
} IOleInPlaceSiteVtbl;
interface IOleInPlaceSite
{
	CONST_VTBL struct IOleInPlaceSiteVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IOleInPlaceSite_QueryInterface(This,riid,ppvObject)    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IOleInPlaceSite_AddRef(This)    ( (This)->lpVtbl -> AddRef(This) )
#define IOleInPlaceSite_Release(This)    ( (This)->lpVtbl -> Release(This) )
#define IOleInPlaceSite_GetWindow(This,phwnd)    ( (This)->lpVtbl -> GetWindow(This,phwnd) )
#define IOleInPlaceSite_ContextSensitiveHelp(This,fEnterMode)    ( (This)->lpVtbl -> ContextSensitiveHelp(This,fEnterMode) )
#define IOleInPlaceSite_CanInPlaceActivate(This)    ( (This)->lpVtbl -> CanInPlaceActivate(This) )
#define IOleInPlaceSite_OnInPlaceActivate(This)    ( (This)->lpVtbl -> OnInPlaceActivate(This) )
#define IOleInPlaceSite_OnUIActivate(This)    ( (This)->lpVtbl -> OnUIActivate(This) )
#define IOleInPlaceSite_GetWindowContext(This,ppFrame,ppDoc,lprcPosRect,lprcClipRect,lpFrameInfo)    ( (This)->lpVtbl -> GetWindowContext(This,ppFrame,ppDoc,lprcPosRect,lprcClipRect,lpFrameInfo) )
#define IOleInPlaceSite_Scroll(This,scrollExtant)    ( (This)->lpVtbl -> Scroll(This,scrollExtant) )
#define IOleInPlaceSite_OnUIDeactivate(This,fUndoable)    ( (This)->lpVtbl -> OnUIDeactivate(This,fUndoable) )
#define IOleInPlaceSite_OnInPlaceDeactivate(This)    ( (This)->lpVtbl -> OnInPlaceDeactivate(This) )
#define IOleInPlaceSite_DiscardUndoState(This)    ( (This)->lpVtbl -> DiscardUndoState(This) )
#define IOleInPlaceSite_DeactivateAndUndo(This)    ( (This)->lpVtbl -> DeactivateAndUndo(This) )
#define IOleInPlaceSite_OnPosRectChange(This,lprcPosRect)    ( (This)->lpVtbl -> OnPosRectChange(This,lprcPosRect) )
#endif
#endif
#ifndef __IContinue_INTERFACE_DEFINED__
#define __IContinue_INTERFACE_DEFINED__
extern const IID IID_IContinue;
typedef struct IContinueVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE *QueryInterface) (IContinue *This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE *AddRef) (IContinue *This);
	ULONG(STDMETHODCALLTYPE *Release) (IContinue *This);
	HRESULT(STDMETHODCALLTYPE *FContinue) (IContinue *This);
	END_INTERFACE
} IContinueVtbl;
interface IContinue
{
	CONST_VTBL struct IContinueVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IContinue_QueryInterface(This,riid,ppvObject)    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IContinue_AddRef(This)    ( (This)->lpVtbl -> AddRef(This) )
#define IContinue_Release(This)    ( (This)->lpVtbl -> Release(This) )
#define IContinue_FContinue(This)    ( (This)->lpVtbl -> FContinue(This) )
#endif
#endif
#ifndef __IViewObject_INTERFACE_DEFINED__
#define __IViewObject_INTERFACE_DEFINED__
typedef IViewObject *LPVIEWOBJECT;
extern const IID IID_IViewObject;
typedef struct IViewObjectVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE *QueryInterface) (IViewObject *This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE *AddRef) (IViewObject *This);
	ULONG(STDMETHODCALLTYPE *Release) (IViewObject *This);
	HRESULT(STDMETHODCALLTYPE *Draw) (IViewObject *This, DWORD dwDrawAspect, LONG lindex, void *pvAspect, DVTARGETDEVICE *ptd, HDC hdcTargetDev, HDC hdcDraw, LPCRECTL lprcBounds, LPCRECTL lprcWBounds, BOOL(STDMETHODCALLTYPE *pfnContinue) (ULONG_PTR dwContinue), ULONG_PTR dwContinue);
	HRESULT(STDMETHODCALLTYPE *GetColorSet) (IViewObject *This, DWORD dwDrawAspect, LONG lindex, void *pvAspect, DVTARGETDEVICE *ptd, HDC hicTargetDev, LOGPALETTE **ppColorSet);
	HRESULT(STDMETHODCALLTYPE *Freeze) (IViewObject *This, DWORD dwDrawAspect, LONG lindex, void *pvAspect, DWORD *pdwFreeze);
	HRESULT(STDMETHODCALLTYPE *Unfreeze) (IViewObject *This, DWORD dwFreeze);
	HRESULT(STDMETHODCALLTYPE *SetAdvise) (IViewObject *This, DWORD aspects, DWORD advf, IAdviseSink *pAdvSink);
	HRESULT(STDMETHODCALLTYPE *GetAdvise) (IViewObject *This, DWORD *pAspects, DWORD *pAdvf, IAdviseSink **ppAdvSink);
	END_INTERFACE
} IViewObjectVtbl;
interface IViewObject
{
	CONST_VTBL struct IViewObjectVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IViewObject_QueryInterface(This,riid,ppvObject)    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IViewObject_AddRef(This)    ( (This)->lpVtbl -> AddRef(This) )
#define IViewObject_Release(This)    ( (This)->lpVtbl -> Release(This) )
#define IViewObject_Draw(This,dwDrawAspect,lindex,pvAspect,ptd,hdcTargetDev,hdcDraw,lprcBounds,lprcWBounds,pfnContinue,dwContinue)    ( (This)->lpVtbl -> Draw(This,dwDrawAspect,lindex,pvAspect,ptd,hdcTargetDev,hdcDraw,lprcBounds,lprcWBounds,pfnContinue,dwContinue) )
#define IViewObject_GetColorSet(This,dwDrawAspect,lindex,pvAspect,ptd,hicTargetDev,ppColorSet)    ( (This)->lpVtbl -> GetColorSet(This,dwDrawAspect,lindex,pvAspect,ptd,hicTargetDev,ppColorSet) )
#define IViewObject_Freeze(This,dwDrawAspect,lindex,pvAspect,pdwFreeze)    ( (This)->lpVtbl -> Freeze(This,dwDrawAspect,lindex,pvAspect,pdwFreeze) )
#define IViewObject_Unfreeze(This,dwFreeze)    ( (This)->lpVtbl -> Unfreeze(This,dwFreeze) )
#define IViewObject_SetAdvise(This,aspects,advf,pAdvSink)    ( (This)->lpVtbl -> SetAdvise(This,aspects,advf,pAdvSink) )
#define IViewObject_GetAdvise(This,pAspects,pAdvf,ppAdvSink)    ( (This)->lpVtbl -> GetAdvise(This,pAspects,pAdvf,ppAdvSink) )
#endif
HRESULT STDMETHODCALLTYPE IViewObject_RemoteDraw_Proxy(IViewObject *This, DWORD dwDrawAspect, LONG lindex, ULONG_PTR pvAspect, DVTARGETDEVICE *ptd, HDC hdcTargetDev, HDC hdcDraw, LPCRECTL lprcBounds, LPCRECTL lprcWBounds, IContinue *pContinue);
void __RPC_STUB IViewObject_RemoteDraw_Stub(IRpcStubBuffer *This, IRpcChannelBuffer *_pRpcChannelBuffer, PRPC_MESSAGE _pRpcMessage, DWORD *_pdwStubPhase);
HRESULT STDMETHODCALLTYPE IViewObject_RemoteGetColorSet_Proxy(IViewObject *This, DWORD dwDrawAspect, LONG lindex, ULONG_PTR pvAspect, DVTARGETDEVICE *ptd, ULONG_PTR hicTargetDev, LOGPALETTE **ppColorSet);
void __RPC_STUB IViewObject_RemoteGetColorSet_Stub(IRpcStubBuffer *This, IRpcChannelBuffer *_pRpcChannelBuffer, PRPC_MESSAGE _pRpcMessage, DWORD *_pdwStubPhase);
HRESULT STDMETHODCALLTYPE IViewObject_RemoteFreeze_Proxy(IViewObject *This, DWORD dwDrawAspect, LONG lindex, ULONG_PTR pvAspect, DWORD *pdwFreeze);
void __RPC_STUB IViewObject_RemoteFreeze_Stub(IRpcStubBuffer *This, IRpcChannelBuffer *_pRpcChannelBuffer, PRPC_MESSAGE _pRpcMessage, DWORD *_pdwStubPhase);
HRESULT STDMETHODCALLTYPE IViewObject_RemoteGetAdvise_Proxy(IViewObject *This, DWORD *pAspects, DWORD *pAdvf, IAdviseSink **ppAdvSink);
void __RPC_STUB IViewObject_RemoteGetAdvise_Stub(IRpcStubBuffer *This, IRpcChannelBuffer *_pRpcChannelBuffer, PRPC_MESSAGE _pRpcMessage, DWORD *_pdwStubPhase);
#endif
#ifndef __IViewObject2_INTERFACE_DEFINED__
#define __IViewObject2_INTERFACE_DEFINED__
typedef IViewObject2 *LPVIEWOBJECT2;
extern const IID IID_IViewObject2;
typedef struct IViewObject2Vtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE *QueryInterface) (IViewObject2 *This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE *AddRef) (IViewObject2 *This);
	ULONG(STDMETHODCALLTYPE *Release) (IViewObject2 *This);
	HRESULT(STDMETHODCALLTYPE *Draw) (IViewObject2 *This, DWORD dwDrawAspect, LONG lindex, void *pvAspect, DVTARGETDEVICE *ptd, HDC hdcTargetDev, HDC hdcDraw, LPCRECTL lprcBounds, LPCRECTL lprcWBounds, BOOL(STDMETHODCALLTYPE *pfnContinue) (ULONG_PTR dwContinue), ULONG_PTR dwContinue);
	HRESULT(STDMETHODCALLTYPE *GetColorSet) (IViewObject2 *This, DWORD dwDrawAspect, LONG lindex, void *pvAspect, DVTARGETDEVICE *ptd, HDC hicTargetDev, LOGPALETTE **ppColorSet);
	HRESULT(STDMETHODCALLTYPE *Freeze) (IViewObject2 *This, DWORD dwDrawAspect, LONG lindex, void *pvAspect, DWORD *pdwFreeze);
	HRESULT(STDMETHODCALLTYPE *Unfreeze) (IViewObject2 *This, DWORD dwFreeze);
	HRESULT(STDMETHODCALLTYPE *SetAdvise) (IViewObject2 *This, DWORD aspects, DWORD advf, IAdviseSink *pAdvSink);
	HRESULT(STDMETHODCALLTYPE *GetAdvise) (IViewObject2 *This, DWORD *pAspects, DWORD *pAdvf, IAdviseSink **ppAdvSink);
	HRESULT(STDMETHODCALLTYPE *GetExtent) (IViewObject2 *This, DWORD dwDrawAspect, LONG lindex, DVTARGETDEVICE *ptd, LPSIZEL lpsizel);
	END_INTERFACE
} IViewObject2Vtbl;
interface IViewObject2
{
	CONST_VTBL struct IViewObject2Vtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IViewObject2_QueryInterface(This,riid,ppvObject)    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IViewObject2_AddRef(This)    ( (This)->lpVtbl -> AddRef(This) )
#define IViewObject2_Release(This)    ( (This)->lpVtbl -> Release(This) )
#define IViewObject2_Draw(This,dwDrawAspect,lindex,pvAspect,ptd,hdcTargetDev,hdcDraw,lprcBounds,lprcWBounds,pfnContinue,dwContinue)    ( (This)->lpVtbl -> Draw(This,dwDrawAspect,lindex,pvAspect,ptd,hdcTargetDev,hdcDraw,lprcBounds,lprcWBounds,pfnContinue,dwContinue) )
#define IViewObject2_GetColorSet(This,dwDrawAspect,lindex,pvAspect,ptd,hicTargetDev,ppColorSet)    ( (This)->lpVtbl -> GetColorSet(This,dwDrawAspect,lindex,pvAspect,ptd,hicTargetDev,ppColorSet) )
#define IViewObject2_Freeze(This,dwDrawAspect,lindex,pvAspect,pdwFreeze)    ( (This)->lpVtbl -> Freeze(This,dwDrawAspect,lindex,pvAspect,pdwFreeze) )
#define IViewObject2_Unfreeze(This,dwFreeze)    ( (This)->lpVtbl -> Unfreeze(This,dwFreeze) )
#define IViewObject2_SetAdvise(This,aspects,advf,pAdvSink)    ( (This)->lpVtbl -> SetAdvise(This,aspects,advf,pAdvSink) )
#define IViewObject2_GetAdvise(This,pAspects,pAdvf,ppAdvSink)    ( (This)->lpVtbl -> GetAdvise(This,pAspects,pAdvf,ppAdvSink) )
#define IViewObject2_GetExtent(This,dwDrawAspect,lindex,ptd,lpsizel)    ( (This)->lpVtbl -> GetExtent(This,dwDrawAspect,lindex,ptd,lpsizel) )
#endif
#endif
#ifndef __IDropSource_INTERFACE_DEFINED__
#define __IDropSource_INTERFACE_DEFINED__
typedef IDropSource *LPDROPSOURCE;
extern const IID IID_IDropSource;
typedef struct IDropSourceVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE *QueryInterface) (IDropSource *This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE *AddRef) (IDropSource *This);
	ULONG(STDMETHODCALLTYPE *Release) (IDropSource *This);
	HRESULT(STDMETHODCALLTYPE *QueryContinueDrag) (IDropSource *This, BOOL fEscapePressed, DWORD grfKeyState);
	HRESULT(STDMETHODCALLTYPE *GiveFeedback) (IDropSource *This, DWORD dwEffect);
	END_INTERFACE
} IDropSourceVtbl;
interface IDropSource
{
	CONST_VTBL struct IDropSourceVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IDropSource_QueryInterface(This,riid,ppvObject)    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IDropSource_AddRef(This)    ( (This)->lpVtbl -> AddRef(This) )
#define IDropSource_Release(This)    ( (This)->lpVtbl -> Release(This) )
#define IDropSource_QueryContinueDrag(This,fEscapePressed,grfKeyState)    ( (This)->lpVtbl -> QueryContinueDrag(This,fEscapePressed,grfKeyState) )
#define IDropSource_GiveFeedback(This,dwEffect)    ( (This)->lpVtbl -> GiveFeedback(This,dwEffect) )
#endif
#endif
#ifndef __IDropTarget_INTERFACE_DEFINED__
#define __IDropTarget_INTERFACE_DEFINED__
typedef IDropTarget *LPDROPTARGET;
#define	MK_ALT	( 0x20 )
#define	DROPEFFECT_NONE	( 0 )
#define	DROPEFFECT_COPY	( 1 )
#define	DROPEFFECT_MOVE	( 2 )
#define	DROPEFFECT_LINK	( 4 )
#define	DROPEFFECT_SCROLL	( 0x80000000 )
#define	DD_DEFSCROLLINSET	( 11 )
#define	DD_DEFSCROLLDELAY	( 50 )
#define	DD_DEFSCROLLINTERVAL	( 50 )
#define	DD_DEFDRAGDELAY	( 200 )
#define	DD_DEFDRAGMINDIST	( 2 )
extern const IID IID_IDropTarget;
typedef struct IDropTargetVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE *QueryInterface) (IDropTarget *This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE *AddRef) (IDropTarget *This);
	ULONG(STDMETHODCALLTYPE *Release) (IDropTarget *This);
	HRESULT(STDMETHODCALLTYPE *DragEnter) (IDropTarget *This, IDataObject *pDataObj, DWORD grfKeyState, POINTL pt, DWORD *pdwEffect);
	HRESULT(STDMETHODCALLTYPE *DragOver) (IDropTarget *This, DWORD grfKeyState, POINTL pt, DWORD *pdwEffect);
	HRESULT(STDMETHODCALLTYPE *DragLeave) (IDropTarget *This);
	HRESULT(STDMETHODCALLTYPE *Drop) (IDropTarget *This, IDataObject *pDataObj, DWORD grfKeyState, POINTL pt, DWORD *pdwEffect);
	END_INTERFACE
} IDropTargetVtbl;
interface IDropTarget
{
	CONST_VTBL struct IDropTargetVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IDropTarget_QueryInterface(This,riid,ppvObject)    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IDropTarget_AddRef(This)    ( (This)->lpVtbl -> AddRef(This) )
#define IDropTarget_Release(This)    ( (This)->lpVtbl -> Release(This) )
#define IDropTarget_DragEnter(This,pDataObj,grfKeyState,pt,pdwEffect)    ( (This)->lpVtbl -> DragEnter(This,pDataObj,grfKeyState,pt,pdwEffect) )
#define IDropTarget_DragOver(This,grfKeyState,pt,pdwEffect)    ( (This)->lpVtbl -> DragOver(This,grfKeyState,pt,pdwEffect) )
#define IDropTarget_DragLeave(This)    ( (This)->lpVtbl -> DragLeave(This) )
#define IDropTarget_Drop(This,pDataObj,grfKeyState,pt,pdwEffect)    ( (This)->lpVtbl -> Drop(This,pDataObj,grfKeyState,pt,pdwEffect) )
#endif
#endif
#ifndef __IDropSourceNotify_INTERFACE_DEFINED__
#define __IDropSourceNotify_INTERFACE_DEFINED__
extern const IID IID_IDropSourceNotify;
typedef struct IDropSourceNotifyVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE *QueryInterface) (IDropSourceNotify *This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE *AddRef) (IDropSourceNotify *This);
	ULONG(STDMETHODCALLTYPE *Release) (IDropSourceNotify *This);
	HRESULT(STDMETHODCALLTYPE *DragEnterTarget) (IDropSourceNotify *This, HWND hwndTarget);
	HRESULT(STDMETHODCALLTYPE *DragLeaveTarget) (IDropSourceNotify *This);
	END_INTERFACE
} IDropSourceNotifyVtbl;
interface IDropSourceNotify
{
	CONST_VTBL struct IDropSourceNotifyVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IDropSourceNotify_QueryInterface(This,riid,ppvObject)    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IDropSourceNotify_AddRef(This)    ( (This)->lpVtbl -> AddRef(This) )
#define IDropSourceNotify_Release(This)    ( (This)->lpVtbl -> Release(This) )
#define IDropSourceNotify_DragEnterTarget(This,hwndTarget)    ( (This)->lpVtbl -> DragEnterTarget(This,hwndTarget) )
#define IDropSourceNotify_DragLeaveTarget(This)    ( (This)->lpVtbl -> DragLeaveTarget(This) )
#endif
#endif
#ifndef __IEnumOLEVERB_INTERFACE_DEFINED__
#define __IEnumOLEVERB_INTERFACE_DEFINED__
typedef IEnumOLEVERB *LPENUMOLEVERB;
typedef struct tagOLEVERB
{
	LONG lVerb;
	LPOLESTR lpszVerbName;
	DWORD fuFlags;
	DWORD grfAttribs;
} OLEVERB;
typedef struct tagOLEVERB *LPOLEVERB;
typedef enum tagOLEVERBATTRIB
{
	OLEVERBATTRIB_NEVERDIRTIES = 1,
	OLEVERBATTRIB_ONCONTAINERMENU = 2
} OLEVERBATTRIB;
extern const IID IID_IEnumOLEVERB;
typedef struct IEnumOLEVERBVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE *QueryInterface) (IEnumOLEVERB *This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE *AddRef) (IEnumOLEVERB *This);
	ULONG(STDMETHODCALLTYPE *Release) (IEnumOLEVERB *This);
	HRESULT(STDMETHODCALLTYPE *Next) (IEnumOLEVERB *This, ULONG celt, LPOLEVERB rgelt, ULONG *pceltFetched);
	HRESULT(STDMETHODCALLTYPE *Skip) (IEnumOLEVERB *This, ULONG celt);
	HRESULT(STDMETHODCALLTYPE *Reset) (IEnumOLEVERB *This);
	HRESULT(STDMETHODCALLTYPE *Clone) (IEnumOLEVERB *This, IEnumOLEVERB **ppenum);
	END_INTERFACE
} IEnumOLEVERBVtbl;
interface IEnumOLEVERB
{
	CONST_VTBL struct IEnumOLEVERBVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IEnumOLEVERB_QueryInterface(This,riid,ppvObject)    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IEnumOLEVERB_AddRef(This)    ( (This)->lpVtbl -> AddRef(This) )
#define IEnumOLEVERB_Release(This)    ( (This)->lpVtbl -> Release(This) )
#define IEnumOLEVERB_Next(This,celt,rgelt,pceltFetched)    ( (This)->lpVtbl -> Next(This,celt,rgelt,pceltFetched) )
#define IEnumOLEVERB_Skip(This,celt)    ( (This)->lpVtbl -> Skip(This,celt) )
#define IEnumOLEVERB_Reset(This)    ( (This)->lpVtbl -> Reset(This) )
#define IEnumOLEVERB_Clone(This,ppenum)    ( (This)->lpVtbl -> Clone(This,ppenum) )
#endif
HRESULT STDMETHODCALLTYPE IEnumOLEVERB_RemoteNext_Proxy(IEnumOLEVERB *This, ULONG celt, LPOLEVERB rgelt, ULONG *pceltFetched);
void __RPC_STUB IEnumOLEVERB_RemoteNext_Stub(IRpcStubBuffer *This, IRpcChannelBuffer *_pRpcChannelBuffer, PRPC_MESSAGE _pRpcMessage, DWORD *_pdwStubPhase);
#endif
unsigned long __RPC_USER CLIPFORMAT_UserSize(unsigned long *, unsigned long, CLIPFORMAT *);
unsigned char *__RPC_USER CLIPFORMAT_UserMarshal(unsigned long *, unsigned char *, CLIPFORMAT *);
unsigned char *__RPC_USER CLIPFORMAT_UserUnmarshal(unsigned long *, unsigned char *, CLIPFORMAT *);
void __RPC_USER CLIPFORMAT_UserFree(unsigned long *, CLIPFORMAT *);
unsigned long __RPC_USER HACCEL_UserSize(unsigned long *, unsigned long, HACCEL *);
unsigned char *__RPC_USER HACCEL_UserMarshal(unsigned long *, unsigned char *, HACCEL *);
unsigned char *__RPC_USER HACCEL_UserUnmarshal(unsigned long *, unsigned char *, HACCEL *);
void __RPC_USER HACCEL_UserFree(unsigned long *, HACCEL *);
unsigned long __RPC_USER HDC_UserSize(unsigned long *, unsigned long, HDC *);
unsigned char *__RPC_USER HDC_UserMarshal(unsigned long *, unsigned char *, HDC *);
unsigned char *__RPC_USER HDC_UserUnmarshal(unsigned long *, unsigned char *, HDC *);
void __RPC_USER HDC_UserFree(unsigned long *, HDC *);
unsigned long __RPC_USER HGLOBAL_UserSize(unsigned long *, unsigned long, HGLOBAL *);
unsigned char *__RPC_USER HGLOBAL_UserMarshal(unsigned long *, unsigned char *, HGLOBAL *);
unsigned char *__RPC_USER HGLOBAL_UserUnmarshal(unsigned long *, unsigned char *, HGLOBAL *);
void __RPC_USER HGLOBAL_UserFree(unsigned long *, HGLOBAL *);
unsigned long __RPC_USER HMENU_UserSize(unsigned long *, unsigned long, HMENU *);
unsigned char *__RPC_USER HMENU_UserMarshal(unsigned long *, unsigned char *, HMENU *);
unsigned char *__RPC_USER HMENU_UserUnmarshal(unsigned long *, unsigned char *, HMENU *);
void __RPC_USER HMENU_UserFree(unsigned long *, HMENU *);
unsigned long __RPC_USER HWND_UserSize(unsigned long *, unsigned long, HWND *);
unsigned char *__RPC_USER HWND_UserMarshal(unsigned long *, unsigned char *, HWND *);
unsigned char *__RPC_USER HWND_UserUnmarshal(unsigned long *, unsigned char *, HWND *);
void __RPC_USER HWND_UserFree(unsigned long *, HWND *);
unsigned long __RPC_USER STGMEDIUM_UserSize(unsigned long *, unsigned long, STGMEDIUM *);
unsigned char *__RPC_USER STGMEDIUM_UserMarshal(unsigned long *, unsigned char *, STGMEDIUM *);
unsigned char *__RPC_USER STGMEDIUM_UserUnmarshal(unsigned long *, unsigned char *, STGMEDIUM *);
void __RPC_USER STGMEDIUM_UserFree(unsigned long *, STGMEDIUM *);
unsigned long __RPC_USER CLIPFORMAT_UserSize64(unsigned long *, unsigned long, CLIPFORMAT *);
unsigned char *__RPC_USER CLIPFORMAT_UserMarshal64(unsigned long *, unsigned char *, CLIPFORMAT *);
unsigned char *__RPC_USER CLIPFORMAT_UserUnmarshal64(unsigned long *, unsigned char *, CLIPFORMAT *);
void __RPC_USER CLIPFORMAT_UserFree64(unsigned long *, CLIPFORMAT *);
unsigned long __RPC_USER HACCEL_UserSize64(unsigned long *, unsigned long, HACCEL *);
unsigned char *__RPC_USER HACCEL_UserMarshal64(unsigned long *, unsigned char *, HACCEL *);
unsigned char *__RPC_USER HACCEL_UserUnmarshal64(unsigned long *, unsigned char *, HACCEL *);
void __RPC_USER HACCEL_UserFree64(unsigned long *, HACCEL *);
unsigned long __RPC_USER HDC_UserSize64(unsigned long *, unsigned long, HDC *);
unsigned char *__RPC_USER HDC_UserMarshal64(unsigned long *, unsigned char *, HDC *);
unsigned char *__RPC_USER HDC_UserUnmarshal64(unsigned long *, unsigned char *, HDC *);
void __RPC_USER HDC_UserFree64(unsigned long *, HDC *);
unsigned long __RPC_USER HGLOBAL_UserSize64(unsigned long *, unsigned long, HGLOBAL *);
unsigned char *__RPC_USER HGLOBAL_UserMarshal64(unsigned long *, unsigned char *, HGLOBAL *);
unsigned char *__RPC_USER HGLOBAL_UserUnmarshal64(unsigned long *, unsigned char *, HGLOBAL *);
void __RPC_USER HGLOBAL_UserFree64(unsigned long *, HGLOBAL *);
unsigned long __RPC_USER HMENU_UserSize64(unsigned long *, unsigned long, HMENU *);
unsigned char *__RPC_USER HMENU_UserMarshal64(unsigned long *, unsigned char *, HMENU *);
unsigned char *__RPC_USER HMENU_UserUnmarshal64(unsigned long *, unsigned char *, HMENU *);
void __RPC_USER HMENU_UserFree64(unsigned long *, HMENU *);
unsigned long __RPC_USER HWND_UserSize64(unsigned long *, unsigned long, HWND *);
unsigned char *__RPC_USER HWND_UserMarshal64(unsigned long *, unsigned char *, HWND *);
unsigned char *__RPC_USER HWND_UserUnmarshal64(unsigned long *, unsigned char *, HWND *);
void __RPC_USER HWND_UserFree64(unsigned long *, HWND *);
unsigned long __RPC_USER STGMEDIUM_UserSize64(unsigned long *, unsigned long, STGMEDIUM *);
unsigned char *__RPC_USER STGMEDIUM_UserMarshal64(unsigned long *, unsigned char *, STGMEDIUM *);
unsigned char *__RPC_USER STGMEDIUM_UserUnmarshal64(unsigned long *, unsigned char *, STGMEDIUM *);
void __RPC_USER STGMEDIUM_UserFree64(unsigned long *, STGMEDIUM *);
HRESULT STDMETHODCALLTYPE IOleCache2_UpdateCache_Proxy(IOleCache2 *This, LPDATAOBJECT pDataObject, DWORD grfUpdf, LPVOID pReserved);
HRESULT STDMETHODCALLTYPE IOleCache2_UpdateCache_Stub(IOleCache2 *This, LPDATAOBJECT pDataObject, DWORD grfUpdf, LONG_PTR pReserved);
HRESULT STDMETHODCALLTYPE IOleInPlaceActiveObject_TranslateAccelerator_Proxy(IOleInPlaceActiveObject *This, LPMSG lpmsg);
HRESULT STDMETHODCALLTYPE IOleInPlaceActiveObject_TranslateAccelerator_Stub(IOleInPlaceActiveObject *This);
HRESULT STDMETHODCALLTYPE IOleInPlaceActiveObject_ResizeBorder_Proxy(IOleInPlaceActiveObject *This, LPCRECT prcBorder, IOleInPlaceUIWindow *pUIWindow, BOOL fFrameWindow);
HRESULT STDMETHODCALLTYPE IOleInPlaceActiveObject_ResizeBorder_Stub(IOleInPlaceActiveObject *This, LPCRECT prcBorder, REFIID riid, IOleInPlaceUIWindow *pUIWindow, BOOL fFrameWindow);
HRESULT STDMETHODCALLTYPE IViewObject_Draw_Proxy(IViewObject *This, DWORD dwDrawAspect, LONG lindex, void *pvAspect, DVTARGETDEVICE *ptd, HDC hdcTargetDev, HDC hdcDraw, LPCRECTL lprcBounds, LPCRECTL lprcWBounds, BOOL(STDMETHODCALLTYPE *pfnContinue) (ULONG_PTR dwContinue), ULONG_PTR dwContinue);
HRESULT STDMETHODCALLTYPE IViewObject_Draw_Stub(IViewObject *This, DWORD dwDrawAspect, LONG lindex, ULONG_PTR pvAspect, DVTARGETDEVICE *ptd, HDC hdcTargetDev, HDC hdcDraw, LPCRECTL lprcBounds, LPCRECTL lprcWBounds, IContinue *pContinue);
HRESULT STDMETHODCALLTYPE IViewObject_GetColorSet_Proxy(IViewObject *This, DWORD dwDrawAspect, LONG lindex, void *pvAspect, DVTARGETDEVICE *ptd, HDC hicTargetDev, LOGPALETTE **ppColorSet);
HRESULT STDMETHODCALLTYPE IViewObject_GetColorSet_Stub(IViewObject *This, DWORD dwDrawAspect, LONG lindex, ULONG_PTR pvAspect, DVTARGETDEVICE *ptd, ULONG_PTR hicTargetDev, LOGPALETTE **ppColorSet);
HRESULT STDMETHODCALLTYPE IViewObject_Freeze_Proxy(IViewObject *This, DWORD dwDrawAspect, LONG lindex, void *pvAspect, DWORD *pdwFreeze);
HRESULT STDMETHODCALLTYPE IViewObject_Freeze_Stub(IViewObject *This, DWORD dwDrawAspect, LONG lindex, ULONG_PTR pvAspect, DWORD *pdwFreeze);
HRESULT STDMETHODCALLTYPE IViewObject_GetAdvise_Proxy(IViewObject *This, DWORD *pAspects, DWORD *pAdvf, IAdviseSink **ppAdvSink);
HRESULT STDMETHODCALLTYPE IViewObject_GetAdvise_Stub(IViewObject *This, DWORD *pAspects, DWORD *pAdvf, IAdviseSink **ppAdvSink);
HRESULT STDMETHODCALLTYPE IEnumOLEVERB_Next_Proxy(IEnumOLEVERB *This, ULONG celt, LPOLEVERB rgelt, ULONG *pceltFetched);
HRESULT STDMETHODCALLTYPE IEnumOLEVERB_Next_Stub(IEnumOLEVERB *This, ULONG celt, LPOLEVERB rgelt, ULONG *pceltFetched);
#endif

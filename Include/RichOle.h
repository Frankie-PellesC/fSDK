/*+@@file@@----------------------------------------------------------------*//*!
 \file		RichOle.h
 \par Description 
            Extension and update of headers for PellesC compiler suite.
 \par Project: 
            PellesC Headers extension
 \date		Created  on Sat Sep  3 23:02:32 2016
 \date		Modified on Sat Sep  3 23:02:32 2016
 \author	frankie
\*//*-@@file@@----------------------------------------------------------------*/

#ifndef _RICHOLE_
#define _RICHOLE_
#if __POCC__ >= 500
#pragma once
#endif
typedef struct _reobject
{
	DWORD			cbStruct;
	LONG			cp;
	CLSID			clsid;
	LPOLEOBJECT		poleobj;
	LPSTORAGE		pstg;
	LPOLECLIENTSITE	polesite;
	SIZEL			sizel;
	DWORD			dvaspect;
	DWORD			dwFlags;
	DWORD			dwUser;
} REOBJECT;
#define REO_GETOBJ_NO_INTERFACES	(0x00000000L)
#define REO_GETOBJ_POLEOBJ			(0x00000001L)
#define REO_GETOBJ_PSTG				(0x00000002L)
#define REO_GETOBJ_POLESITE			(0x00000004L)
#define REO_GETOBJ_ALL_INTERFACES	(0x00000007L)
#define REO_CP_SELECTION ((ULONG) -1L)
#define REO_IOB_SELECTION ((ULONG) -1L)
#define REO_IOB_USE_CP ((ULONG) -2L)
#define REO_NULL			(0x00000000L)
#define REO_READWRITEMASK	(0x0000003FL)
#define REO_DONTNEEDPALETTE	(0x00000020L)
#define REO_BLANK			(0x00000010L)
#define REO_DYNAMICSIZE		(0x00000008L)
#define REO_INVERTEDSELECT	(0x00000004L)
#define REO_BELOWBASELINE	(0x00000002L)
#define REO_RESIZABLE		(0x00000001L)
#define REO_LINK			(0x80000000L)
#define REO_STATIC			(0x40000000L)
#define REO_SELECTED		(0x08000000L)
#define REO_OPEN			(0x04000000L)
#define REO_INPLACEACTIVE	(0x02000000L)
#define REO_HILITED			(0x01000000L)
#define REO_LINKAVAILABLE	(0x00800000L)
#define REO_GETMETAFILE		(0x00400000L)
#define RECO_PASTE			(0x00000000L)
#define RECO_DROP			(0x00000001L)
#define RECO_COPY			(0x00000002L)
#define RECO_CUT			(0x00000003L)
#define RECO_DRAG			(0x00000004L)
#undef INTERFACE
#define INTERFACE   IRichEditOle
DECLARE_INTERFACE_(IRichEditOle, IUnknown)
{
	STDMETHOD(QueryInterface) (THIS_ REFIID riid, LPVOID FAR * lplpObj);
	STDMETHOD_(ULONG, AddRef) (THIS);
	STDMETHOD_(ULONG, Release) (THIS);
	STDMETHOD(GetClientSite) (THIS_ LPOLECLIENTSITE FAR * lplpolesite);
	STDMETHOD_(LONG, GetObjectCount) (THIS);
	STDMETHOD_(LONG, GetLinkCount) (THIS);
	STDMETHOD(GetObject) (THIS_ LONG iob, REOBJECT FAR * lpreobject, DWORD dwFlags);
	STDMETHOD(InsertObject) (THIS_ REOBJECT FAR * lpreobject);
	STDMETHOD(ConvertObject) (THIS_ LONG iob, REFCLSID rclsidNew, LPCSTR lpstrUserTypeNew);
	STDMETHOD(ActivateAs) (THIS_ REFCLSID rclsid, REFCLSID rclsidAs);
	STDMETHOD(SetHostNames) (THIS_ LPCSTR lpstrContainerApp, LPCSTR lpstrContainerObj);
	STDMETHOD(SetLinkAvailable) (THIS_ LONG iob, BOOL fAvailable);
	STDMETHOD(SetDvaspect) (THIS_ LONG iob, DWORD dvaspect);
	STDMETHOD(HandsOffStorage) (THIS_ LONG iob);
	STDMETHOD(SaveCompleted) (THIS_ LONG iob, LPSTORAGE lpstg);
	STDMETHOD(InPlaceDeactivate) (THIS);
	STDMETHOD(ContextSensitiveHelp) (THIS_ BOOL fEnterMode);
	STDMETHOD(GetClipboardData) (THIS_ CHARRANGE FAR * lpchrg, DWORD reco, LPDATAOBJECT FAR * lplpdataobj);
	STDMETHOD(ImportDataObject) (THIS_ LPDATAOBJECT lpdataobj, CLIPFORMAT cf, HGLOBAL hMetaPict);
};
typedef         IRichEditOle FAR * LPRICHEDITOLE;
#undef INTERFACE
#define INTERFACE   IRichEditOleCallback
DECLARE_INTERFACE_(IRichEditOleCallback, IUnknown)
{
	STDMETHOD(QueryInterface) (THIS_ REFIID riid, LPVOID FAR * lplpObj);
	STDMETHOD_(ULONG, AddRef) (THIS);
	STDMETHOD_(ULONG, Release) (THIS);
	STDMETHOD(GetNewStorage) (THIS_ LPSTORAGE FAR * lplpstg);
	STDMETHOD(GetInPlaceContext) (THIS_ LPOLEINPLACEFRAME FAR * lplpFrame, LPOLEINPLACEUIWINDOW FAR * lplpDoc, LPOLEINPLACEFRAMEINFO lpFrameInfo);
	STDMETHOD(ShowContainerUI) (THIS_ BOOL fShow);
	STDMETHOD(QueryInsertObject) (THIS_ LPCLSID lpclsid, LPSTORAGE lpstg, LONG cp);
	STDMETHOD(DeleteObject) (THIS_ LPOLEOBJECT lpoleobj);
	STDMETHOD(QueryAcceptData) (THIS_ LPDATAOBJECT lpdataobj, CLIPFORMAT FAR * lpcfFormat, DWORD reco, BOOL fReally, HGLOBAL hMetaPict);
	STDMETHOD(ContextSensitiveHelp) (THIS_ BOOL fEnterMode);
	STDMETHOD(GetClipboardData) (THIS_ CHARRANGE FAR * lpchrg, DWORD reco, LPDATAOBJECT FAR * lplpdataobj);
	STDMETHOD(GetDragDropEffect) (THIS_ BOOL fDrag, DWORD grfKeyState, LPDWORD pdwEffect);
	STDMETHOD(GetContextMenu) (THIS_ WORD seltype, LPOLEOBJECT lpoleobj, CHARRANGE FAR * lpchrg, HMENU FAR * lphmenu);
};
typedef IRichEditOleCallback FAR *LPRICHEDITOLECALLBACK;
DEFINE_GUID(IID_IRichEditOle,         0x00020D00, 0, 0, 0xC0,0,0,0,0,0,0,0x46);
DEFINE_GUID(IID_IRichEditOleCallback, 0x00020D03, 0, 0, 0xC0,0,0,0,0,0,0,0x46);
#endif

/*+@@file@@----------------------------------------------------------------*//*!
 \file		mstime.h
 \par Description 
            Extension and update of headers for PellesC compiler suite.
 \par Project: 
            PellesC Headers extension
 \date		Created  on Sun Aug 14 23:20:10 2016
 \date		Modified on Sun Aug 14 23:20:10 2016
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
#ifndef __mstime_h__
#define __mstime_h__
#if __POCC__ >= 500
#pragma once
#endif
#ifndef __ITIMEActiveElementCollection_FWD_DEFINED__
#define __ITIMEActiveElementCollection_FWD_DEFINED__
typedef interface ITIMEActiveElementCollection ITIMEActiveElementCollection;
#endif
#ifndef __ITIMEElement_FWD_DEFINED__
#define __ITIMEElement_FWD_DEFINED__
typedef interface ITIMEElement ITIMEElement;
#endif
#ifndef __ITIMEBodyElement_FWD_DEFINED__
#define __ITIMEBodyElement_FWD_DEFINED__
typedef interface ITIMEBodyElement ITIMEBodyElement;
#endif
#ifndef __ITIMEMediaElement_FWD_DEFINED__
#define __ITIMEMediaElement_FWD_DEFINED__
typedef interface ITIMEMediaElement ITIMEMediaElement;
#endif
#ifndef __ITIMEMediaElement2_FWD_DEFINED__
#define __ITIMEMediaElement2_FWD_DEFINED__
typedef interface ITIMEMediaElement2 ITIMEMediaElement2;
#endif
#ifndef __ITIMETransitionElement_FWD_DEFINED__
#define __ITIMETransitionElement_FWD_DEFINED__
typedef interface ITIMETransitionElement ITIMETransitionElement;
#endif
#ifndef __ITIMEAnimationElement_FWD_DEFINED__
#define __ITIMEAnimationElement_FWD_DEFINED__
typedef interface ITIMEAnimationElement ITIMEAnimationElement;
#endif
#ifndef __ITIMEAnimationElement2_FWD_DEFINED__
#define __ITIMEAnimationElement2_FWD_DEFINED__
typedef interface ITIMEAnimationElement2 ITIMEAnimationElement2;
#endif
#ifndef __IAnimationComposer_FWD_DEFINED__
#define __IAnimationComposer_FWD_DEFINED__
typedef interface IAnimationComposer IAnimationComposer;
#endif
#ifndef __IAnimationComposer2_FWD_DEFINED__
#define __IAnimationComposer2_FWD_DEFINED__
typedef interface IAnimationComposer2 IAnimationComposer2;
#endif
#ifndef __IAnimationComposerSite_FWD_DEFINED__
#define __IAnimationComposerSite_FWD_DEFINED__
typedef interface IAnimationComposerSite IAnimationComposerSite;
#endif
#ifndef __IAnimationComposerSiteSink_FWD_DEFINED__
#define __IAnimationComposerSiteSink_FWD_DEFINED__
typedef interface IAnimationComposerSiteSink IAnimationComposerSiteSink;
#endif
#ifndef __IAnimationRoot_FWD_DEFINED__
#define __IAnimationRoot_FWD_DEFINED__
typedef interface IAnimationRoot IAnimationRoot;
#endif
#ifndef __IAnimationFragment_FWD_DEFINED__
#define __IAnimationFragment_FWD_DEFINED__
typedef interface IAnimationFragment IAnimationFragment;
#endif
#ifndef __IFilterAnimationInfo_FWD_DEFINED__
#define __IFilterAnimationInfo_FWD_DEFINED__
typedef interface IFilterAnimationInfo IFilterAnimationInfo;
#endif
#ifndef __ITIMEElementCollection_FWD_DEFINED__
#define __ITIMEElementCollection_FWD_DEFINED__
typedef interface ITIMEElementCollection ITIMEElementCollection;
#endif
#ifndef __ITIMEState_FWD_DEFINED__
#define __ITIMEState_FWD_DEFINED__
typedef interface ITIMEState ITIMEState;
#endif
#ifndef __ITIMEPlayItem_FWD_DEFINED__
#define __ITIMEPlayItem_FWD_DEFINED__
typedef interface ITIMEPlayItem ITIMEPlayItem;
#endif
#ifndef __ITIMEPlayItem2_FWD_DEFINED__
#define __ITIMEPlayItem2_FWD_DEFINED__
typedef interface ITIMEPlayItem2 ITIMEPlayItem2;
#endif
#ifndef __ITIMEPlayList_FWD_DEFINED__
#define __ITIMEPlayList_FWD_DEFINED__
typedef interface ITIMEPlayList ITIMEPlayList;
#endif
#ifndef __ITIMEDVDPlayerObject_FWD_DEFINED__
#define __ITIMEDVDPlayerObject_FWD_DEFINED__
typedef interface ITIMEDVDPlayerObject ITIMEDVDPlayerObject;
#endif
#ifndef __ITIMEDMusicPlayerObject_FWD_DEFINED__
#define __ITIMEDMusicPlayerObject_FWD_DEFINED__
typedef interface ITIMEDMusicPlayerObject ITIMEDMusicPlayerObject;
#endif
#ifndef __ITIMEFactory_FWD_DEFINED__
#define __ITIMEFactory_FWD_DEFINED__
typedef interface ITIMEFactory ITIMEFactory;
#endif
#ifndef __TIMEFactory_FWD_DEFINED__
#define __TIMEFactory_FWD_DEFINED__
typedef struct TIMEFactory TIMEFactory;
#endif
#ifndef __IAnimationComposerFactory_FWD_DEFINED__
#define __IAnimationComposerFactory_FWD_DEFINED__
typedef interface IAnimationComposerFactory IAnimationComposerFactory;
#endif
#ifndef __IAnimationComposerSiteFactory_FWD_DEFINED__
#define __IAnimationComposerSiteFactory_FWD_DEFINED__
typedef interface IAnimationComposerSiteFactory IAnimationComposerSiteFactory;
#endif
#ifndef __ITIMEMediaPlayerSite_FWD_DEFINED__
#define __ITIMEMediaPlayerSite_FWD_DEFINED__
typedef interface ITIMEMediaPlayerSite ITIMEMediaPlayerSite;
#endif
#ifndef __ITIMEMediaPlayer_FWD_DEFINED__
#define __ITIMEMediaPlayer_FWD_DEFINED__
typedef interface ITIMEMediaPlayer ITIMEMediaPlayer;
#endif
#ifndef __ITIMEMediaPlayerAudio_FWD_DEFINED__
#define __ITIMEMediaPlayerAudio_FWD_DEFINED__
typedef interface ITIMEMediaPlayerAudio ITIMEMediaPlayerAudio;
#endif
#ifndef __ITIMEMediaPlayerNetwork_FWD_DEFINED__
#define __ITIMEMediaPlayerNetwork_FWD_DEFINED__
typedef interface ITIMEMediaPlayerNetwork ITIMEMediaPlayerNetwork;
#endif
#ifndef __ITIMEMediaPlayerControl_FWD_DEFINED__
#define __ITIMEMediaPlayerControl_FWD_DEFINED__
typedef interface ITIMEMediaPlayerControl ITIMEMediaPlayerControl;
#endif
#include <servprov.h>
#include <olectl.h>
#include <mstimeid.h>
extern RPC_IF_HANDLE __MIDL_itf_mstime_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_mstime_0000_0000_v0_0_s_ifspec;
#ifndef __MSTIME_LIBRARY_DEFINED__
#define __MSTIME_LIBRARY_DEFINED__
typedef enum _TimeState
{
	TS_Inactive = 0,
	TS_Active = 1,
	TS_Cueing = 2,
	TS_Seeking = 3,
	TS_Holding = 4
} TimeState;
extern const IID LIBID_MSTIME;
#ifndef __ITIMEActiveElementCollection_INTERFACE_DEFINED__
#define __ITIMEActiveElementCollection_INTERFACE_DEFINED__
extern const IID IID_ITIMEActiveElementCollection;
typedef struct ITIMEActiveElementCollectionVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (ITIMEActiveElementCollection * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (ITIMEActiveElementCollection * This);
	ULONG(STDMETHODCALLTYPE * Release) (ITIMEActiveElementCollection * This);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfoCount) (ITIMEActiveElementCollection * This, UINT * pctinfo);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfo) (ITIMEActiveElementCollection * This, UINT iTInfo, LCID lcid, ITypeInfo ** ppTInfo);
	HRESULT(STDMETHODCALLTYPE * GetIDsOfNames) (ITIMEActiveElementCollection * This, REFIID riid, LPOLESTR * rgszNames, UINT cNames, LCID lcid, DISPID * rgDispId);
	HRESULT(STDMETHODCALLTYPE * Invoke) (ITIMEActiveElementCollection * This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS * pDispParams, VARIANT * pVarResult, EXCEPINFO * pExcepInfo, UINT * puArgErr);
	HRESULT(STDMETHODCALLTYPE * get_length) (ITIMEActiveElementCollection * This, long *p);
	HRESULT(STDMETHODCALLTYPE * get__newEnum) (ITIMEActiveElementCollection * This, IUnknown ** p);
	HRESULT(STDMETHODCALLTYPE * item) (ITIMEActiveElementCollection * This, VARIANT varIndex, VARIANT * pvarResult);
	END_INTERFACE
}  ITIMEActiveElementCollectionVtbl;
interface ITIMEActiveElementCollection
{
	CONST_VTBL struct ITIMEActiveElementCollectionVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define ITIMEActiveElementCollection_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define ITIMEActiveElementCollection_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define ITIMEActiveElementCollection_Release(This) ( (This)->lpVtbl -> Release(This) )
#define ITIMEActiveElementCollection_GetTypeInfoCount(This,pctinfo) ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define ITIMEActiveElementCollection_GetTypeInfo(This,iTInfo,lcid,ppTInfo) ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define ITIMEActiveElementCollection_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define ITIMEActiveElementCollection_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define ITIMEActiveElementCollection_get_length(This,p) ( (This)->lpVtbl -> get_length(This,p) )
#define ITIMEActiveElementCollection_get__newEnum(This,p) ( (This)->lpVtbl -> get__newEnum(This,p) )
#define ITIMEActiveElementCollection_item(This,varIndex,pvarResult) ( (This)->lpVtbl -> item(This,varIndex,pvarResult) )
#endif
#endif
#ifndef __ITIMEElement_INTERFACE_DEFINED__
#define __ITIMEElement_INTERFACE_DEFINED__
extern const IID IID_ITIMEElement;
typedef struct ITIMEElementVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (ITIMEElement * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (ITIMEElement * This);
	ULONG(STDMETHODCALLTYPE * Release) (ITIMEElement * This);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfoCount) (ITIMEElement * This, UINT * pctinfo);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfo) (ITIMEElement * This, UINT iTInfo, LCID lcid, ITypeInfo ** ppTInfo);
	HRESULT(STDMETHODCALLTYPE * GetIDsOfNames) (ITIMEElement * This, REFIID riid, LPOLESTR * rgszNames, UINT cNames, LCID lcid, DISPID * rgDispId);
	HRESULT(STDMETHODCALLTYPE * Invoke) (ITIMEElement * This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS * pDispParams, VARIANT * pVarResult, EXCEPINFO * pExcepInfo, UINT * puArgErr);
	HRESULT(STDMETHODCALLTYPE * get_accelerate) (ITIMEElement * This, VARIANT * __MIDL__ITIMEElement0000);
	HRESULT(STDMETHODCALLTYPE * put_accelerate) (ITIMEElement * This, VARIANT __MIDL__ITIMEElement0001);
	HRESULT(STDMETHODCALLTYPE * get_autoReverse) (ITIMEElement * This, VARIANT * __MIDL__ITIMEElement0002);
	HRESULT(STDMETHODCALLTYPE * put_autoReverse) (ITIMEElement * This, VARIANT __MIDL__ITIMEElement0003);
	HRESULT(STDMETHODCALLTYPE * get_begin) (ITIMEElement * This, VARIANT * time);
	HRESULT(STDMETHODCALLTYPE * put_begin) (ITIMEElement * This, VARIANT time);
	HRESULT(STDMETHODCALLTYPE * get_decelerate) (ITIMEElement * This, VARIANT * __MIDL__ITIMEElement0004);
	HRESULT(STDMETHODCALLTYPE * put_decelerate) (ITIMEElement * This, VARIANT __MIDL__ITIMEElement0005);
	HRESULT(STDMETHODCALLTYPE * get_dur) (ITIMEElement * This, VARIANT * time);
	HRESULT(STDMETHODCALLTYPE * put_dur) (ITIMEElement * This, VARIANT time);
	HRESULT(STDMETHODCALLTYPE * get_end) (ITIMEElement * This, VARIANT * time);
	HRESULT(STDMETHODCALLTYPE * put_end) (ITIMEElement * This, VARIANT time);
	HRESULT(STDMETHODCALLTYPE * get_fill) (ITIMEElement * This, BSTR * f);
	HRESULT(STDMETHODCALLTYPE * put_fill) (ITIMEElement * This, BSTR f);
	HRESULT(STDMETHODCALLTYPE * get_mute) (ITIMEElement * This, VARIANT * b);
	HRESULT(STDMETHODCALLTYPE * put_mute) (ITIMEElement * This, VARIANT b);
	HRESULT(STDMETHODCALLTYPE * get_repeatCount) (ITIMEElement * This, VARIANT * c);
	HRESULT(STDMETHODCALLTYPE * put_repeatCount) (ITIMEElement * This, VARIANT c);
	HRESULT(STDMETHODCALLTYPE * get_repeatDur) (ITIMEElement * This, VARIANT * time);
	HRESULT(STDMETHODCALLTYPE * put_repeatDur) (ITIMEElement * This, VARIANT time);
	HRESULT(STDMETHODCALLTYPE * get_restart) (ITIMEElement * This, BSTR * __MIDL__ITIMEElement0006);
	HRESULT(STDMETHODCALLTYPE * put_restart) (ITIMEElement * This, BSTR __MIDL__ITIMEElement0007);
	HRESULT(STDMETHODCALLTYPE * get_speed) (ITIMEElement * This, VARIANT * speed);
	HRESULT(STDMETHODCALLTYPE * put_speed) (ITIMEElement * This, VARIANT speed);
	HRESULT(STDMETHODCALLTYPE * get_syncBehavior) (ITIMEElement * This, BSTR * sync);
	HRESULT(STDMETHODCALLTYPE * put_syncBehavior) (ITIMEElement * This, BSTR sync);
	HRESULT(STDMETHODCALLTYPE * get_syncTolerance) (ITIMEElement * This, VARIANT * tol);
	HRESULT(STDMETHODCALLTYPE * put_syncTolerance) (ITIMEElement * This, VARIANT tol);
	HRESULT(STDMETHODCALLTYPE * get_syncMaster) (ITIMEElement * This, VARIANT * b);
	HRESULT(STDMETHODCALLTYPE * put_syncMaster) (ITIMEElement * This, VARIANT b);
	HRESULT(STDMETHODCALLTYPE * get_timeAction) (ITIMEElement * This, BSTR * time);
	HRESULT(STDMETHODCALLTYPE * put_timeAction) (ITIMEElement * This, BSTR time);
	HRESULT(STDMETHODCALLTYPE * get_timeContainer) (ITIMEElement * This, BSTR * __MIDL__ITIMEElement0008);
	HRESULT(STDMETHODCALLTYPE * get_volume) (ITIMEElement * This, VARIANT * val);
	HRESULT(STDMETHODCALLTYPE * put_volume) (ITIMEElement * This, VARIANT val);
	HRESULT(STDMETHODCALLTYPE * get_currTimeState) (ITIMEElement * This, ITIMEState ** TimeState);
	HRESULT(STDMETHODCALLTYPE * get_timeAll) (ITIMEElement * This, ITIMEElementCollection ** allColl);
	HRESULT(STDMETHODCALLTYPE * get_timeChildren) (ITIMEElement * This, ITIMEElementCollection ** childColl);
	HRESULT(STDMETHODCALLTYPE * get_timeParent) (ITIMEElement * This, ITIMEElement ** parent);
	HRESULT(STDMETHODCALLTYPE * get_isPaused) (ITIMEElement * This, VARIANT_BOOL * b);
	HRESULT(STDMETHODCALLTYPE * beginElement) (ITIMEElement * This);
	HRESULT(STDMETHODCALLTYPE * beginElementAt) (ITIMEElement * This, double parentTime);
	HRESULT(STDMETHODCALLTYPE * endElement) (ITIMEElement * This);
	HRESULT(STDMETHODCALLTYPE * endElementAt) (ITIMEElement * This, double parentTime);
	HRESULT(STDMETHODCALLTYPE * pauseElement) (ITIMEElement * This);
	HRESULT(STDMETHODCALLTYPE * resetElement) (ITIMEElement * This);
	HRESULT(STDMETHODCALLTYPE * resumeElement) (ITIMEElement * This);
	HRESULT(STDMETHODCALLTYPE * seekActiveTime) (ITIMEElement * This, double activeTime);
	HRESULT(STDMETHODCALLTYPE * seekSegmentTime) (ITIMEElement * This, double segmentTime);
	HRESULT(STDMETHODCALLTYPE * seekTo) (ITIMEElement * This, LONG repeatCount, double segmentTime);
	HRESULT(STDMETHODCALLTYPE * documentTimeToParentTime) (ITIMEElement * This, double documentTime, double *parentTime);
	HRESULT(STDMETHODCALLTYPE * parentTimeToDocumentTime) (ITIMEElement * This, double parentTime, double *documentTime);
	HRESULT(STDMETHODCALLTYPE * parentTimeToActiveTime) (ITIMEElement * This, double parentTime, double *activeTime);
	HRESULT(STDMETHODCALLTYPE * activeTimeToParentTime) (ITIMEElement * This, double activeTime, double *parentTime);
	HRESULT(STDMETHODCALLTYPE * activeTimeToSegmentTime) (ITIMEElement * This, double activeTime, double *segmentTime);
	HRESULT(STDMETHODCALLTYPE * segmentTimeToActiveTime) (ITIMEElement * This, double segmentTime, double *activeTime);
	HRESULT(STDMETHODCALLTYPE * segmentTimeToSimpleTime) (ITIMEElement * This, double segmentTime, double *simpleTime);
	HRESULT(STDMETHODCALLTYPE * simpleTimeToSegmentTime) (ITIMEElement * This, double simpleTime, double *segmentTime);
	HRESULT(STDMETHODCALLTYPE * get_endSync) (ITIMEElement * This, BSTR * es);
	HRESULT(STDMETHODCALLTYPE * put_endSync) (ITIMEElement * This, BSTR es);
	HRESULT(STDMETHODCALLTYPE * get_activeElements) (ITIMEElement * This, ITIMEActiveElementCollection ** activeColl);
	HRESULT(STDMETHODCALLTYPE * get_hasMedia) (ITIMEElement * This, VARIANT_BOOL * flag);
	HRESULT(STDMETHODCALLTYPE * nextElement) (ITIMEElement * This);
	HRESULT(STDMETHODCALLTYPE * prevElement) (ITIMEElement * This);
	HRESULT(STDMETHODCALLTYPE * get_updateMode) (ITIMEElement * This, BSTR * updateMode);
	HRESULT(STDMETHODCALLTYPE * put_updateMode) (ITIMEElement * This, BSTR updateMode);
	END_INTERFACE
}  ITIMEElementVtbl;
interface ITIMEElement
{
	CONST_VTBL struct ITIMEElementVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define ITIMEElement_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define ITIMEElement_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define ITIMEElement_Release(This) ( (This)->lpVtbl -> Release(This) )
#define ITIMEElement_GetTypeInfoCount(This,pctinfo) ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define ITIMEElement_GetTypeInfo(This,iTInfo,lcid,ppTInfo) ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define ITIMEElement_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define ITIMEElement_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define ITIMEElement_get_accelerate(This,__MIDL__ITIMEElement0000) ( (This)->lpVtbl -> get_accelerate(This,__MIDL__ITIMEElement0000) )
#define ITIMEElement_put_accelerate(This,__MIDL__ITIMEElement0001) ( (This)->lpVtbl -> put_accelerate(This,__MIDL__ITIMEElement0001) )
#define ITIMEElement_get_autoReverse(This,__MIDL__ITIMEElement0002) ( (This)->lpVtbl -> get_autoReverse(This,__MIDL__ITIMEElement0002) )
#define ITIMEElement_put_autoReverse(This,__MIDL__ITIMEElement0003) ( (This)->lpVtbl -> put_autoReverse(This,__MIDL__ITIMEElement0003) )
#define ITIMEElement_get_begin(This,time) ( (This)->lpVtbl -> get_begin(This,time) )
#define ITIMEElement_put_begin(This,time) ( (This)->lpVtbl -> put_begin(This,time) )
#define ITIMEElement_get_decelerate(This,__MIDL__ITIMEElement0004) ( (This)->lpVtbl -> get_decelerate(This,__MIDL__ITIMEElement0004) )
#define ITIMEElement_put_decelerate(This,__MIDL__ITIMEElement0005) ( (This)->lpVtbl -> put_decelerate(This,__MIDL__ITIMEElement0005) )
#define ITIMEElement_get_dur(This,time) ( (This)->lpVtbl -> get_dur(This,time) )
#define ITIMEElement_put_dur(This,time) ( (This)->lpVtbl -> put_dur(This,time) )
#define ITIMEElement_get_end(This,time) ( (This)->lpVtbl -> get_end(This,time) )
#define ITIMEElement_put_end(This,time) ( (This)->lpVtbl -> put_end(This,time) )
#define ITIMEElement_get_fill(This,f) ( (This)->lpVtbl -> get_fill(This,f) )
#define ITIMEElement_put_fill(This,f) ( (This)->lpVtbl -> put_fill(This,f) )
#define ITIMEElement_get_mute(This,b) ( (This)->lpVtbl -> get_mute(This,b) )
#define ITIMEElement_put_mute(This,b) ( (This)->lpVtbl -> put_mute(This,b) )
#define ITIMEElement_get_repeatCount(This,c) ( (This)->lpVtbl -> get_repeatCount(This,c) )
#define ITIMEElement_put_repeatCount(This,c) ( (This)->lpVtbl -> put_repeatCount(This,c) )
#define ITIMEElement_get_repeatDur(This,time) ( (This)->lpVtbl -> get_repeatDur(This,time) )
#define ITIMEElement_put_repeatDur(This,time) ( (This)->lpVtbl -> put_repeatDur(This,time) )
#define ITIMEElement_get_restart(This,__MIDL__ITIMEElement0006) ( (This)->lpVtbl -> get_restart(This,__MIDL__ITIMEElement0006) )
#define ITIMEElement_put_restart(This,__MIDL__ITIMEElement0007) ( (This)->lpVtbl -> put_restart(This,__MIDL__ITIMEElement0007) )
#define ITIMEElement_get_speed(This,speed) ( (This)->lpVtbl -> get_speed(This,speed) )
#define ITIMEElement_put_speed(This,speed) ( (This)->lpVtbl -> put_speed(This,speed) )
#define ITIMEElement_get_syncBehavior(This,sync) ( (This)->lpVtbl -> get_syncBehavior(This,sync) )
#define ITIMEElement_put_syncBehavior(This,sync) ( (This)->lpVtbl -> put_syncBehavior(This,sync) )
#define ITIMEElement_get_syncTolerance(This,tol) ( (This)->lpVtbl -> get_syncTolerance(This,tol) )
#define ITIMEElement_put_syncTolerance(This,tol) ( (This)->lpVtbl -> put_syncTolerance(This,tol) )
#define ITIMEElement_get_syncMaster(This,b) ( (This)->lpVtbl -> get_syncMaster(This,b) )
#define ITIMEElement_put_syncMaster(This,b) ( (This)->lpVtbl -> put_syncMaster(This,b) )
#define ITIMEElement_get_timeAction(This,time) ( (This)->lpVtbl -> get_timeAction(This,time) )
#define ITIMEElement_put_timeAction(This,time) ( (This)->lpVtbl -> put_timeAction(This,time) )
#define ITIMEElement_get_timeContainer(This,__MIDL__ITIMEElement0008) ( (This)->lpVtbl -> get_timeContainer(This,__MIDL__ITIMEElement0008) )
#define ITIMEElement_get_volume(This,val) ( (This)->lpVtbl -> get_volume(This,val) )
#define ITIMEElement_put_volume(This,val) ( (This)->lpVtbl -> put_volume(This,val) )
#define ITIMEElement_get_currTimeState(This,TimeState) ( (This)->lpVtbl -> get_currTimeState(This,TimeState) )
#define ITIMEElement_get_timeAll(This,allColl) ( (This)->lpVtbl -> get_timeAll(This,allColl) )
#define ITIMEElement_get_timeChildren(This,childColl) ( (This)->lpVtbl -> get_timeChildren(This,childColl) )
#define ITIMEElement_get_timeParent(This,parent) ( (This)->lpVtbl -> get_timeParent(This,parent) )
#define ITIMEElement_get_isPaused(This,b) ( (This)->lpVtbl -> get_isPaused(This,b) )
#define ITIMEElement_beginElement(This) ( (This)->lpVtbl -> beginElement(This) )
#define ITIMEElement_beginElementAt(This,parentTime) ( (This)->lpVtbl -> beginElementAt(This,parentTime) )
#define ITIMEElement_endElement(This) ( (This)->lpVtbl -> endElement(This) )
#define ITIMEElement_endElementAt(This,parentTime) ( (This)->lpVtbl -> endElementAt(This,parentTime) )
#define ITIMEElement_pauseElement(This) ( (This)->lpVtbl -> pauseElement(This) )
#define ITIMEElement_resetElement(This) ( (This)->lpVtbl -> resetElement(This) )
#define ITIMEElement_resumeElement(This) ( (This)->lpVtbl -> resumeElement(This) )
#define ITIMEElement_seekActiveTime(This,activeTime) ( (This)->lpVtbl -> seekActiveTime(This,activeTime) )
#define ITIMEElement_seekSegmentTime(This,segmentTime) ( (This)->lpVtbl -> seekSegmentTime(This,segmentTime) )
#define ITIMEElement_seekTo(This,repeatCount,segmentTime) ( (This)->lpVtbl -> seekTo(This,repeatCount,segmentTime) )
#define ITIMEElement_documentTimeToParentTime(This,documentTime,parentTime) ( (This)->lpVtbl -> documentTimeToParentTime(This,documentTime,parentTime) )
#define ITIMEElement_parentTimeToDocumentTime(This,parentTime,documentTime) ( (This)->lpVtbl -> parentTimeToDocumentTime(This,parentTime,documentTime) )
#define ITIMEElement_parentTimeToActiveTime(This,parentTime,activeTime) ( (This)->lpVtbl -> parentTimeToActiveTime(This,parentTime,activeTime) )
#define ITIMEElement_activeTimeToParentTime(This,activeTime,parentTime) ( (This)->lpVtbl -> activeTimeToParentTime(This,activeTime,parentTime) )
#define ITIMEElement_activeTimeToSegmentTime(This,activeTime,segmentTime) ( (This)->lpVtbl -> activeTimeToSegmentTime(This,activeTime,segmentTime) )
#define ITIMEElement_segmentTimeToActiveTime(This,segmentTime,activeTime) ( (This)->lpVtbl -> segmentTimeToActiveTime(This,segmentTime,activeTime) )
#define ITIMEElement_segmentTimeToSimpleTime(This,segmentTime,simpleTime) ( (This)->lpVtbl -> segmentTimeToSimpleTime(This,segmentTime,simpleTime) )
#define ITIMEElement_simpleTimeToSegmentTime(This,simpleTime,segmentTime) ( (This)->lpVtbl -> simpleTimeToSegmentTime(This,simpleTime,segmentTime) )
#define ITIMEElement_get_endSync(This,es) ( (This)->lpVtbl -> get_endSync(This,es) )
#define ITIMEElement_put_endSync(This,es) ( (This)->lpVtbl -> put_endSync(This,es) )
#define ITIMEElement_get_activeElements(This,activeColl) ( (This)->lpVtbl -> get_activeElements(This,activeColl) )
#define ITIMEElement_get_hasMedia(This,flag) ( (This)->lpVtbl -> get_hasMedia(This,flag) )
#define ITIMEElement_nextElement(This) ( (This)->lpVtbl -> nextElement(This) )
#define ITIMEElement_prevElement(This) ( (This)->lpVtbl -> prevElement(This) )
#define ITIMEElement_get_updateMode(This,updateMode) ( (This)->lpVtbl -> get_updateMode(This,updateMode) )
#define ITIMEElement_put_updateMode(This,updateMode) ( (This)->lpVtbl -> put_updateMode(This,updateMode) )
#endif
#endif
#ifndef __ITIMEBodyElement_INTERFACE_DEFINED__
#define __ITIMEBodyElement_INTERFACE_DEFINED__
extern const IID IID_ITIMEBodyElement;
typedef struct ITIMEBodyElementVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (ITIMEBodyElement * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (ITIMEBodyElement * This);
	ULONG(STDMETHODCALLTYPE * Release) (ITIMEBodyElement * This);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfoCount) (ITIMEBodyElement * This, UINT * pctinfo);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfo) (ITIMEBodyElement * This, UINT iTInfo, LCID lcid, ITypeInfo ** ppTInfo);
	HRESULT(STDMETHODCALLTYPE * GetIDsOfNames) (ITIMEBodyElement * This, REFIID riid, LPOLESTR * rgszNames, UINT cNames, LCID lcid, DISPID * rgDispId);
	HRESULT(STDMETHODCALLTYPE * Invoke) (ITIMEBodyElement * This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS * pDispParams, VARIANT * pVarResult, EXCEPINFO * pExcepInfo, UINT * puArgErr);
	HRESULT(STDMETHODCALLTYPE * get_accelerate) (ITIMEBodyElement * This, VARIANT * __MIDL__ITIMEElement0000);
	HRESULT(STDMETHODCALLTYPE * put_accelerate) (ITIMEBodyElement * This, VARIANT __MIDL__ITIMEElement0001);
	HRESULT(STDMETHODCALLTYPE * get_autoReverse) (ITIMEBodyElement * This, VARIANT * __MIDL__ITIMEElement0002);
	HRESULT(STDMETHODCALLTYPE * put_autoReverse) (ITIMEBodyElement * This, VARIANT __MIDL__ITIMEElement0003);
	HRESULT(STDMETHODCALLTYPE * get_begin) (ITIMEBodyElement * This, VARIANT * time);
	HRESULT(STDMETHODCALLTYPE * put_begin) (ITIMEBodyElement * This, VARIANT time);
	HRESULT(STDMETHODCALLTYPE * get_decelerate) (ITIMEBodyElement * This, VARIANT * __MIDL__ITIMEElement0004);
	HRESULT(STDMETHODCALLTYPE * put_decelerate) (ITIMEBodyElement * This, VARIANT __MIDL__ITIMEElement0005);
	HRESULT(STDMETHODCALLTYPE * get_dur) (ITIMEBodyElement * This, VARIANT * time);
	HRESULT(STDMETHODCALLTYPE * put_dur) (ITIMEBodyElement * This, VARIANT time);
	HRESULT(STDMETHODCALLTYPE * get_end) (ITIMEBodyElement * This, VARIANT * time);
	HRESULT(STDMETHODCALLTYPE * put_end) (ITIMEBodyElement * This, VARIANT time);
	HRESULT(STDMETHODCALLTYPE * get_fill) (ITIMEBodyElement * This, BSTR * f);
	HRESULT(STDMETHODCALLTYPE * put_fill) (ITIMEBodyElement * This, BSTR f);
	HRESULT(STDMETHODCALLTYPE * get_mute) (ITIMEBodyElement * This, VARIANT * b);
	HRESULT(STDMETHODCALLTYPE * put_mute) (ITIMEBodyElement * This, VARIANT b);
	HRESULT(STDMETHODCALLTYPE * get_repeatCount) (ITIMEBodyElement * This, VARIANT * c);
	HRESULT(STDMETHODCALLTYPE * put_repeatCount) (ITIMEBodyElement * This, VARIANT c);
	HRESULT(STDMETHODCALLTYPE * get_repeatDur) (ITIMEBodyElement * This, VARIANT * time);
	HRESULT(STDMETHODCALLTYPE * put_repeatDur) (ITIMEBodyElement * This, VARIANT time);
	HRESULT(STDMETHODCALLTYPE * get_restart) (ITIMEBodyElement * This, BSTR * __MIDL__ITIMEElement0006);
	HRESULT(STDMETHODCALLTYPE * put_restart) (ITIMEBodyElement * This, BSTR __MIDL__ITIMEElement0007);
	HRESULT(STDMETHODCALLTYPE * get_speed) (ITIMEBodyElement * This, VARIANT * speed);
	HRESULT(STDMETHODCALLTYPE * put_speed) (ITIMEBodyElement * This, VARIANT speed);
	HRESULT(STDMETHODCALLTYPE * get_syncBehavior) (ITIMEBodyElement * This, BSTR * sync);
	HRESULT(STDMETHODCALLTYPE * put_syncBehavior) (ITIMEBodyElement * This, BSTR sync);
	HRESULT(STDMETHODCALLTYPE * get_syncTolerance) (ITIMEBodyElement * This, VARIANT * tol);
	HRESULT(STDMETHODCALLTYPE * put_syncTolerance) (ITIMEBodyElement * This, VARIANT tol);
	HRESULT(STDMETHODCALLTYPE * get_syncMaster) (ITIMEBodyElement * This, VARIANT * b);
	HRESULT(STDMETHODCALLTYPE * put_syncMaster) (ITIMEBodyElement * This, VARIANT b);
	HRESULT(STDMETHODCALLTYPE * get_timeAction) (ITIMEBodyElement * This, BSTR * time);
	HRESULT(STDMETHODCALLTYPE * put_timeAction) (ITIMEBodyElement * This, BSTR time);
	HRESULT(STDMETHODCALLTYPE * get_timeContainer) (ITIMEBodyElement * This, BSTR * __MIDL__ITIMEElement0008);
	HRESULT(STDMETHODCALLTYPE * get_volume) (ITIMEBodyElement * This, VARIANT * val);
	HRESULT(STDMETHODCALLTYPE * put_volume) (ITIMEBodyElement * This, VARIANT val);
	HRESULT(STDMETHODCALLTYPE * get_currTimeState) (ITIMEBodyElement * This, ITIMEState ** TimeState);
	HRESULT(STDMETHODCALLTYPE * get_timeAll) (ITIMEBodyElement * This, ITIMEElementCollection ** allColl);
	HRESULT(STDMETHODCALLTYPE * get_timeChildren) (ITIMEBodyElement * This, ITIMEElementCollection ** childColl);
	HRESULT(STDMETHODCALLTYPE * get_timeParent) (ITIMEBodyElement * This, ITIMEElement ** parent);
	HRESULT(STDMETHODCALLTYPE * get_isPaused) (ITIMEBodyElement * This, VARIANT_BOOL * b);
	HRESULT(STDMETHODCALLTYPE * beginElement) (ITIMEBodyElement * This);
	HRESULT(STDMETHODCALLTYPE * beginElementAt) (ITIMEBodyElement * This, double parentTime);
	HRESULT(STDMETHODCALLTYPE * endElement) (ITIMEBodyElement * This);
	HRESULT(STDMETHODCALLTYPE * endElementAt) (ITIMEBodyElement * This, double parentTime);
	HRESULT(STDMETHODCALLTYPE * pauseElement) (ITIMEBodyElement * This);
	HRESULT(STDMETHODCALLTYPE * resetElement) (ITIMEBodyElement * This);
	HRESULT(STDMETHODCALLTYPE * resumeElement) (ITIMEBodyElement * This);
	HRESULT(STDMETHODCALLTYPE * seekActiveTime) (ITIMEBodyElement * This, double activeTime);
	HRESULT(STDMETHODCALLTYPE * seekSegmentTime) (ITIMEBodyElement * This, double segmentTime);
	HRESULT(STDMETHODCALLTYPE * seekTo) (ITIMEBodyElement * This, LONG repeatCount, double segmentTime);
	HRESULT(STDMETHODCALLTYPE * documentTimeToParentTime) (ITIMEBodyElement * This, double documentTime, double *parentTime);
	HRESULT(STDMETHODCALLTYPE * parentTimeToDocumentTime) (ITIMEBodyElement * This, double parentTime, double *documentTime);
	HRESULT(STDMETHODCALLTYPE * parentTimeToActiveTime) (ITIMEBodyElement * This, double parentTime, double *activeTime);
	HRESULT(STDMETHODCALLTYPE * activeTimeToParentTime) (ITIMEBodyElement * This, double activeTime, double *parentTime);
	HRESULT(STDMETHODCALLTYPE * activeTimeToSegmentTime) (ITIMEBodyElement * This, double activeTime, double *segmentTime);
	HRESULT(STDMETHODCALLTYPE * segmentTimeToActiveTime) (ITIMEBodyElement * This, double segmentTime, double *activeTime);
	HRESULT(STDMETHODCALLTYPE * segmentTimeToSimpleTime) (ITIMEBodyElement * This, double segmentTime, double *simpleTime);
	HRESULT(STDMETHODCALLTYPE * simpleTimeToSegmentTime) (ITIMEBodyElement * This, double simpleTime, double *segmentTime);
	HRESULT(STDMETHODCALLTYPE * get_endSync) (ITIMEBodyElement * This, BSTR * es);
	HRESULT(STDMETHODCALLTYPE * put_endSync) (ITIMEBodyElement * This, BSTR es);
	HRESULT(STDMETHODCALLTYPE * get_activeElements) (ITIMEBodyElement * This, ITIMEActiveElementCollection ** activeColl);
	HRESULT(STDMETHODCALLTYPE * get_hasMedia) (ITIMEBodyElement * This, VARIANT_BOOL * flag);
	HRESULT(STDMETHODCALLTYPE * nextElement) (ITIMEBodyElement * This);
	HRESULT(STDMETHODCALLTYPE * prevElement) (ITIMEBodyElement * This);
	HRESULT(STDMETHODCALLTYPE * get_updateMode) (ITIMEBodyElement * This, BSTR * updateMode);
	HRESULT(STDMETHODCALLTYPE * put_updateMode) (ITIMEBodyElement * This, BSTR updateMode);
	END_INTERFACE
}  ITIMEBodyElementVtbl;
interface ITIMEBodyElement
{
	CONST_VTBL struct ITIMEBodyElementVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define ITIMEBodyElement_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define ITIMEBodyElement_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define ITIMEBodyElement_Release(This) ( (This)->lpVtbl -> Release(This) )
#define ITIMEBodyElement_GetTypeInfoCount(This,pctinfo) ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define ITIMEBodyElement_GetTypeInfo(This,iTInfo,lcid,ppTInfo) ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define ITIMEBodyElement_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define ITIMEBodyElement_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define ITIMEBodyElement_get_accelerate(This,__MIDL__ITIMEElement0000) ( (This)->lpVtbl -> get_accelerate(This,__MIDL__ITIMEElement0000) )
#define ITIMEBodyElement_put_accelerate(This,__MIDL__ITIMEElement0001) ( (This)->lpVtbl -> put_accelerate(This,__MIDL__ITIMEElement0001) )
#define ITIMEBodyElement_get_autoReverse(This,__MIDL__ITIMEElement0002) ( (This)->lpVtbl -> get_autoReverse(This,__MIDL__ITIMEElement0002) )
#define ITIMEBodyElement_put_autoReverse(This,__MIDL__ITIMEElement0003) ( (This)->lpVtbl -> put_autoReverse(This,__MIDL__ITIMEElement0003) )
#define ITIMEBodyElement_get_begin(This,time) ( (This)->lpVtbl -> get_begin(This,time) )
#define ITIMEBodyElement_put_begin(This,time) ( (This)->lpVtbl -> put_begin(This,time) )
#define ITIMEBodyElement_get_decelerate(This,__MIDL__ITIMEElement0004) ( (This)->lpVtbl -> get_decelerate(This,__MIDL__ITIMEElement0004) )
#define ITIMEBodyElement_put_decelerate(This,__MIDL__ITIMEElement0005) ( (This)->lpVtbl -> put_decelerate(This,__MIDL__ITIMEElement0005) )
#define ITIMEBodyElement_get_dur(This,time) ( (This)->lpVtbl -> get_dur(This,time) )
#define ITIMEBodyElement_put_dur(This,time) ( (This)->lpVtbl -> put_dur(This,time) )
#define ITIMEBodyElement_get_end(This,time) ( (This)->lpVtbl -> get_end(This,time) )
#define ITIMEBodyElement_put_end(This,time) ( (This)->lpVtbl -> put_end(This,time) )
#define ITIMEBodyElement_get_fill(This,f) ( (This)->lpVtbl -> get_fill(This,f) )
#define ITIMEBodyElement_put_fill(This,f) ( (This)->lpVtbl -> put_fill(This,f) )
#define ITIMEBodyElement_get_mute(This,b) ( (This)->lpVtbl -> get_mute(This,b) )
#define ITIMEBodyElement_put_mute(This,b) ( (This)->lpVtbl -> put_mute(This,b) )
#define ITIMEBodyElement_get_repeatCount(This,c) ( (This)->lpVtbl -> get_repeatCount(This,c) )
#define ITIMEBodyElement_put_repeatCount(This,c) ( (This)->lpVtbl -> put_repeatCount(This,c) )
#define ITIMEBodyElement_get_repeatDur(This,time) ( (This)->lpVtbl -> get_repeatDur(This,time) )
#define ITIMEBodyElement_put_repeatDur(This,time) ( (This)->lpVtbl -> put_repeatDur(This,time) )
#define ITIMEBodyElement_get_restart(This,__MIDL__ITIMEElement0006) ( (This)->lpVtbl -> get_restart(This,__MIDL__ITIMEElement0006) )
#define ITIMEBodyElement_put_restart(This,__MIDL__ITIMEElement0007) ( (This)->lpVtbl -> put_restart(This,__MIDL__ITIMEElement0007) )
#define ITIMEBodyElement_get_speed(This,speed) ( (This)->lpVtbl -> get_speed(This,speed) )
#define ITIMEBodyElement_put_speed(This,speed) ( (This)->lpVtbl -> put_speed(This,speed) )
#define ITIMEBodyElement_get_syncBehavior(This,sync) ( (This)->lpVtbl -> get_syncBehavior(This,sync) )
#define ITIMEBodyElement_put_syncBehavior(This,sync) ( (This)->lpVtbl -> put_syncBehavior(This,sync) )
#define ITIMEBodyElement_get_syncTolerance(This,tol) ( (This)->lpVtbl -> get_syncTolerance(This,tol) )
#define ITIMEBodyElement_put_syncTolerance(This,tol) ( (This)->lpVtbl -> put_syncTolerance(This,tol) )
#define ITIMEBodyElement_get_syncMaster(This,b) ( (This)->lpVtbl -> get_syncMaster(This,b) )
#define ITIMEBodyElement_put_syncMaster(This,b) ( (This)->lpVtbl -> put_syncMaster(This,b) )
#define ITIMEBodyElement_get_timeAction(This,time) ( (This)->lpVtbl -> get_timeAction(This,time) )
#define ITIMEBodyElement_put_timeAction(This,time) ( (This)->lpVtbl -> put_timeAction(This,time) )
#define ITIMEBodyElement_get_timeContainer(This,__MIDL__ITIMEElement0008) ( (This)->lpVtbl -> get_timeContainer(This,__MIDL__ITIMEElement0008) )
#define ITIMEBodyElement_get_volume(This,val) ( (This)->lpVtbl -> get_volume(This,val) )
#define ITIMEBodyElement_put_volume(This,val) ( (This)->lpVtbl -> put_volume(This,val) )
#define ITIMEBodyElement_get_currTimeState(This,TimeState) ( (This)->lpVtbl -> get_currTimeState(This,TimeState) )
#define ITIMEBodyElement_get_timeAll(This,allColl) ( (This)->lpVtbl -> get_timeAll(This,allColl) )
#define ITIMEBodyElement_get_timeChildren(This,childColl) ( (This)->lpVtbl -> get_timeChildren(This,childColl) )
#define ITIMEBodyElement_get_timeParent(This,parent) ( (This)->lpVtbl -> get_timeParent(This,parent) )
#define ITIMEBodyElement_get_isPaused(This,b) ( (This)->lpVtbl -> get_isPaused(This,b) )
#define ITIMEBodyElement_beginElement(This) ( (This)->lpVtbl -> beginElement(This) )
#define ITIMEBodyElement_beginElementAt(This,parentTime) ( (This)->lpVtbl -> beginElementAt(This,parentTime) )
#define ITIMEBodyElement_endElement(This) ( (This)->lpVtbl -> endElement(This) )
#define ITIMEBodyElement_endElementAt(This,parentTime) ( (This)->lpVtbl -> endElementAt(This,parentTime) )
#define ITIMEBodyElement_pauseElement(This) ( (This)->lpVtbl -> pauseElement(This) )
#define ITIMEBodyElement_resetElement(This) ( (This)->lpVtbl -> resetElement(This) )
#define ITIMEBodyElement_resumeElement(This) ( (This)->lpVtbl -> resumeElement(This) )
#define ITIMEBodyElement_seekActiveTime(This,activeTime) ( (This)->lpVtbl -> seekActiveTime(This,activeTime) )
#define ITIMEBodyElement_seekSegmentTime(This,segmentTime) ( (This)->lpVtbl -> seekSegmentTime(This,segmentTime) )
#define ITIMEBodyElement_seekTo(This,repeatCount,segmentTime) ( (This)->lpVtbl -> seekTo(This,repeatCount,segmentTime) )
#define ITIMEBodyElement_documentTimeToParentTime(This,documentTime,parentTime) ( (This)->lpVtbl -> documentTimeToParentTime(This,documentTime,parentTime) )
#define ITIMEBodyElement_parentTimeToDocumentTime(This,parentTime,documentTime) ( (This)->lpVtbl -> parentTimeToDocumentTime(This,parentTime,documentTime) )
#define ITIMEBodyElement_parentTimeToActiveTime(This,parentTime,activeTime) ( (This)->lpVtbl -> parentTimeToActiveTime(This,parentTime,activeTime) )
#define ITIMEBodyElement_activeTimeToParentTime(This,activeTime,parentTime) ( (This)->lpVtbl -> activeTimeToParentTime(This,activeTime,parentTime) )
#define ITIMEBodyElement_activeTimeToSegmentTime(This,activeTime,segmentTime) ( (This)->lpVtbl -> activeTimeToSegmentTime(This,activeTime,segmentTime) )
#define ITIMEBodyElement_segmentTimeToActiveTime(This,segmentTime,activeTime) ( (This)->lpVtbl -> segmentTimeToActiveTime(This,segmentTime,activeTime) )
#define ITIMEBodyElement_segmentTimeToSimpleTime(This,segmentTime,simpleTime) ( (This)->lpVtbl -> segmentTimeToSimpleTime(This,segmentTime,simpleTime) )
#define ITIMEBodyElement_simpleTimeToSegmentTime(This,simpleTime,segmentTime) ( (This)->lpVtbl -> simpleTimeToSegmentTime(This,simpleTime,segmentTime) )
#define ITIMEBodyElement_get_endSync(This,es) ( (This)->lpVtbl -> get_endSync(This,es) )
#define ITIMEBodyElement_put_endSync(This,es) ( (This)->lpVtbl -> put_endSync(This,es) )
#define ITIMEBodyElement_get_activeElements(This,activeColl) ( (This)->lpVtbl -> get_activeElements(This,activeColl) )
#define ITIMEBodyElement_get_hasMedia(This,flag) ( (This)->lpVtbl -> get_hasMedia(This,flag) )
#define ITIMEBodyElement_nextElement(This) ( (This)->lpVtbl -> nextElement(This) )
#define ITIMEBodyElement_prevElement(This) ( (This)->lpVtbl -> prevElement(This) )
#define ITIMEBodyElement_get_updateMode(This,updateMode) ( (This)->lpVtbl -> get_updateMode(This,updateMode) )
#define ITIMEBodyElement_put_updateMode(This,updateMode) ( (This)->lpVtbl -> put_updateMode(This,updateMode) )
#endif
#endif
#ifndef __ITIMEMediaElement_INTERFACE_DEFINED__
#define __ITIMEMediaElement_INTERFACE_DEFINED__
extern const IID IID_ITIMEMediaElement;
typedef struct ITIMEMediaElementVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (ITIMEMediaElement * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (ITIMEMediaElement * This);
	ULONG(STDMETHODCALLTYPE * Release) (ITIMEMediaElement * This);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfoCount) (ITIMEMediaElement * This, UINT * pctinfo);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfo) (ITIMEMediaElement * This, UINT iTInfo, LCID lcid, ITypeInfo ** ppTInfo);
	HRESULT(STDMETHODCALLTYPE * GetIDsOfNames) (ITIMEMediaElement * This, REFIID riid, LPOLESTR * rgszNames, UINT cNames, LCID lcid, DISPID * rgDispId);
	HRESULT(STDMETHODCALLTYPE * Invoke) (ITIMEMediaElement * This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS * pDispParams, VARIANT * pVarResult, EXCEPINFO * pExcepInfo, UINT * puArgErr);
	HRESULT(STDMETHODCALLTYPE * get_accelerate) (ITIMEMediaElement * This, VARIANT * __MIDL__ITIMEElement0000);
	HRESULT(STDMETHODCALLTYPE * put_accelerate) (ITIMEMediaElement * This, VARIANT __MIDL__ITIMEElement0001);
	HRESULT(STDMETHODCALLTYPE * get_autoReverse) (ITIMEMediaElement * This, VARIANT * __MIDL__ITIMEElement0002);
	HRESULT(STDMETHODCALLTYPE * put_autoReverse) (ITIMEMediaElement * This, VARIANT __MIDL__ITIMEElement0003);
	HRESULT(STDMETHODCALLTYPE * get_begin) (ITIMEMediaElement * This, VARIANT * time);
	HRESULT(STDMETHODCALLTYPE * put_begin) (ITIMEMediaElement * This, VARIANT time);
	HRESULT(STDMETHODCALLTYPE * get_decelerate) (ITIMEMediaElement * This, VARIANT * __MIDL__ITIMEElement0004);
	HRESULT(STDMETHODCALLTYPE * put_decelerate) (ITIMEMediaElement * This, VARIANT __MIDL__ITIMEElement0005);
	HRESULT(STDMETHODCALLTYPE * get_dur) (ITIMEMediaElement * This, VARIANT * time);
	HRESULT(STDMETHODCALLTYPE * put_dur) (ITIMEMediaElement * This, VARIANT time);
	HRESULT(STDMETHODCALLTYPE * get_end) (ITIMEMediaElement * This, VARIANT * time);
	HRESULT(STDMETHODCALLTYPE * put_end) (ITIMEMediaElement * This, VARIANT time);
	HRESULT(STDMETHODCALLTYPE * get_fill) (ITIMEMediaElement * This, BSTR * f);
	HRESULT(STDMETHODCALLTYPE * put_fill) (ITIMEMediaElement * This, BSTR f);
	HRESULT(STDMETHODCALLTYPE * get_mute) (ITIMEMediaElement * This, VARIANT * b);
	HRESULT(STDMETHODCALLTYPE * put_mute) (ITIMEMediaElement * This, VARIANT b);
	HRESULT(STDMETHODCALLTYPE * get_repeatCount) (ITIMEMediaElement * This, VARIANT * c);
	HRESULT(STDMETHODCALLTYPE * put_repeatCount) (ITIMEMediaElement * This, VARIANT c);
	HRESULT(STDMETHODCALLTYPE * get_repeatDur) (ITIMEMediaElement * This, VARIANT * time);
	HRESULT(STDMETHODCALLTYPE * put_repeatDur) (ITIMEMediaElement * This, VARIANT time);
	HRESULT(STDMETHODCALLTYPE * get_restart) (ITIMEMediaElement * This, BSTR * __MIDL__ITIMEElement0006);
	HRESULT(STDMETHODCALLTYPE * put_restart) (ITIMEMediaElement * This, BSTR __MIDL__ITIMEElement0007);
	HRESULT(STDMETHODCALLTYPE * get_speed) (ITIMEMediaElement * This, VARIANT * speed);
	HRESULT(STDMETHODCALLTYPE * put_speed) (ITIMEMediaElement * This, VARIANT speed);
	HRESULT(STDMETHODCALLTYPE * get_syncBehavior) (ITIMEMediaElement * This, BSTR * sync);
	HRESULT(STDMETHODCALLTYPE * put_syncBehavior) (ITIMEMediaElement * This, BSTR sync);
	HRESULT(STDMETHODCALLTYPE * get_syncTolerance) (ITIMEMediaElement * This, VARIANT * tol);
	HRESULT(STDMETHODCALLTYPE * put_syncTolerance) (ITIMEMediaElement * This, VARIANT tol);
	HRESULT(STDMETHODCALLTYPE * get_syncMaster) (ITIMEMediaElement * This, VARIANT * b);
	HRESULT(STDMETHODCALLTYPE * put_syncMaster) (ITIMEMediaElement * This, VARIANT b);
	HRESULT(STDMETHODCALLTYPE * get_timeAction) (ITIMEMediaElement * This, BSTR * time);
	HRESULT(STDMETHODCALLTYPE * put_timeAction) (ITIMEMediaElement * This, BSTR time);
	HRESULT(STDMETHODCALLTYPE * get_timeContainer) (ITIMEMediaElement * This, BSTR * __MIDL__ITIMEElement0008);
	HRESULT(STDMETHODCALLTYPE * get_volume) (ITIMEMediaElement * This, VARIANT * val);
	HRESULT(STDMETHODCALLTYPE * put_volume) (ITIMEMediaElement * This, VARIANT val);
	HRESULT(STDMETHODCALLTYPE * get_currTimeState) (ITIMEMediaElement * This, ITIMEState ** TimeState);
	HRESULT(STDMETHODCALLTYPE * get_timeAll) (ITIMEMediaElement * This, ITIMEElementCollection ** allColl);
	HRESULT(STDMETHODCALLTYPE * get_timeChildren) (ITIMEMediaElement * This, ITIMEElementCollection ** childColl);
	HRESULT(STDMETHODCALLTYPE * get_timeParent) (ITIMEMediaElement * This, ITIMEElement ** parent);
	HRESULT(STDMETHODCALLTYPE * get_isPaused) (ITIMEMediaElement * This, VARIANT_BOOL * b);
	HRESULT(STDMETHODCALLTYPE * beginElement) (ITIMEMediaElement * This);
	HRESULT(STDMETHODCALLTYPE * beginElementAt) (ITIMEMediaElement * This, double parentTime);
	HRESULT(STDMETHODCALLTYPE * endElement) (ITIMEMediaElement * This);
	HRESULT(STDMETHODCALLTYPE * endElementAt) (ITIMEMediaElement * This, double parentTime);
	HRESULT(STDMETHODCALLTYPE * pauseElement) (ITIMEMediaElement * This);
	HRESULT(STDMETHODCALLTYPE * resetElement) (ITIMEMediaElement * This);
	HRESULT(STDMETHODCALLTYPE * resumeElement) (ITIMEMediaElement * This);
	HRESULT(STDMETHODCALLTYPE * seekActiveTime) (ITIMEMediaElement * This, double activeTime);
	HRESULT(STDMETHODCALLTYPE * seekSegmentTime) (ITIMEMediaElement * This, double segmentTime);
	HRESULT(STDMETHODCALLTYPE * seekTo) (ITIMEMediaElement * This, LONG repeatCount, double segmentTime);
	HRESULT(STDMETHODCALLTYPE * documentTimeToParentTime) (ITIMEMediaElement * This, double documentTime, double *parentTime);
	HRESULT(STDMETHODCALLTYPE * parentTimeToDocumentTime) (ITIMEMediaElement * This, double parentTime, double *documentTime);
	HRESULT(STDMETHODCALLTYPE * parentTimeToActiveTime) (ITIMEMediaElement * This, double parentTime, double *activeTime);
	HRESULT(STDMETHODCALLTYPE * activeTimeToParentTime) (ITIMEMediaElement * This, double activeTime, double *parentTime);
	HRESULT(STDMETHODCALLTYPE * activeTimeToSegmentTime) (ITIMEMediaElement * This, double activeTime, double *segmentTime);
	HRESULT(STDMETHODCALLTYPE * segmentTimeToActiveTime) (ITIMEMediaElement * This, double segmentTime, double *activeTime);
	HRESULT(STDMETHODCALLTYPE * segmentTimeToSimpleTime) (ITIMEMediaElement * This, double segmentTime, double *simpleTime);
	HRESULT(STDMETHODCALLTYPE * simpleTimeToSegmentTime) (ITIMEMediaElement * This, double simpleTime, double *segmentTime);
	HRESULT(STDMETHODCALLTYPE * get_endSync) (ITIMEMediaElement * This, BSTR * es);
	HRESULT(STDMETHODCALLTYPE * put_endSync) (ITIMEMediaElement * This, BSTR es);
	HRESULT(STDMETHODCALLTYPE * get_activeElements) (ITIMEMediaElement * This, ITIMEActiveElementCollection ** activeColl);
	HRESULT(STDMETHODCALLTYPE * get_hasMedia) (ITIMEMediaElement * This, VARIANT_BOOL * flag);
	HRESULT(STDMETHODCALLTYPE * nextElement) (ITIMEMediaElement * This);
	HRESULT(STDMETHODCALLTYPE * prevElement) (ITIMEMediaElement * This);
	HRESULT(STDMETHODCALLTYPE * get_updateMode) (ITIMEMediaElement * This, BSTR * updateMode);
	HRESULT(STDMETHODCALLTYPE * put_updateMode) (ITIMEMediaElement * This, BSTR updateMode);
	HRESULT(STDMETHODCALLTYPE * get_clipBegin) (ITIMEMediaElement * This, VARIANT * time);
	HRESULT(STDMETHODCALLTYPE * put_clipBegin) (ITIMEMediaElement * This, VARIANT time);
	HRESULT(STDMETHODCALLTYPE * get_clipEnd) (ITIMEMediaElement * This, VARIANT * time);
	HRESULT(STDMETHODCALLTYPE * put_clipEnd) (ITIMEMediaElement * This, VARIANT time);
	HRESULT(STDMETHODCALLTYPE * get_player) (ITIMEMediaElement * This, VARIANT * id);
	HRESULT(STDMETHODCALLTYPE * put_player) (ITIMEMediaElement * This, VARIANT id);
	HRESULT(STDMETHODCALLTYPE * get_src) (ITIMEMediaElement * This, VARIANT * url);
	HRESULT(STDMETHODCALLTYPE * put_src) (ITIMEMediaElement * This, VARIANT url);
	HRESULT(STDMETHODCALLTYPE * get_type) (ITIMEMediaElement * This, VARIANT * mimetype);
	HRESULT(STDMETHODCALLTYPE * put_type) (ITIMEMediaElement * This, VARIANT mimetype);
	HRESULT(STDMETHODCALLTYPE * get_abstract) (ITIMEMediaElement * This, BSTR * abs);
	HRESULT(STDMETHODCALLTYPE * get_author) (ITIMEMediaElement * This, BSTR * auth);
	HRESULT(STDMETHODCALLTYPE * get_copyright) (ITIMEMediaElement * This, BSTR * cpyrght);
	HRESULT(STDMETHODCALLTYPE * get_hasAudio) (ITIMEMediaElement * This, VARIANT_BOOL * b);
	HRESULT(STDMETHODCALLTYPE * get_hasVisual) (ITIMEMediaElement * This, VARIANT_BOOL * b);
	HRESULT(STDMETHODCALLTYPE * get_mediaDur) (ITIMEMediaElement * This, double *dur);
	HRESULT(STDMETHODCALLTYPE * get_mediaHeight) (ITIMEMediaElement * This, long *height);
	HRESULT(STDMETHODCALLTYPE * get_mediaWidth) (ITIMEMediaElement * This, long *width);
	HRESULT(STDMETHODCALLTYPE * get_playerObject) (ITIMEMediaElement * This, IDispatch ** ppDisp);
	HRESULT(STDMETHODCALLTYPE * get_playList) (ITIMEMediaElement * This, ITIMEPlayList ** pPlayList);
	HRESULT(STDMETHODCALLTYPE * get_rating) (ITIMEMediaElement * This, BSTR * rate);
	HRESULT(STDMETHODCALLTYPE * get_title) (ITIMEMediaElement * This, BSTR * name);
	HRESULT(STDMETHODCALLTYPE * get_hasPlayList) (ITIMEMediaElement * This, VARIANT_BOOL * b);
	HRESULT(STDMETHODCALLTYPE * get_canPause) (ITIMEMediaElement * This, VARIANT_BOOL * b);
	HRESULT(STDMETHODCALLTYPE * get_canSeek) (ITIMEMediaElement * This, VARIANT_BOOL * b);
	END_INTERFACE
}  ITIMEMediaElementVtbl;
interface ITIMEMediaElement
{
	CONST_VTBL struct ITIMEMediaElementVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define ITIMEMediaElement_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define ITIMEMediaElement_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define ITIMEMediaElement_Release(This) ( (This)->lpVtbl -> Release(This) )
#define ITIMEMediaElement_GetTypeInfoCount(This,pctinfo) ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define ITIMEMediaElement_GetTypeInfo(This,iTInfo,lcid,ppTInfo) ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define ITIMEMediaElement_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define ITIMEMediaElement_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define ITIMEMediaElement_get_accelerate(This,__MIDL__ITIMEElement0000) ( (This)->lpVtbl -> get_accelerate(This,__MIDL__ITIMEElement0000) )
#define ITIMEMediaElement_put_accelerate(This,__MIDL__ITIMEElement0001) ( (This)->lpVtbl -> put_accelerate(This,__MIDL__ITIMEElement0001) )
#define ITIMEMediaElement_get_autoReverse(This,__MIDL__ITIMEElement0002) ( (This)->lpVtbl -> get_autoReverse(This,__MIDL__ITIMEElement0002) )
#define ITIMEMediaElement_put_autoReverse(This,__MIDL__ITIMEElement0003) ( (This)->lpVtbl -> put_autoReverse(This,__MIDL__ITIMEElement0003) )
#define ITIMEMediaElement_get_begin(This,time) ( (This)->lpVtbl -> get_begin(This,time) )
#define ITIMEMediaElement_put_begin(This,time) ( (This)->lpVtbl -> put_begin(This,time) )
#define ITIMEMediaElement_get_decelerate(This,__MIDL__ITIMEElement0004) ( (This)->lpVtbl -> get_decelerate(This,__MIDL__ITIMEElement0004) )
#define ITIMEMediaElement_put_decelerate(This,__MIDL__ITIMEElement0005) ( (This)->lpVtbl -> put_decelerate(This,__MIDL__ITIMEElement0005) )
#define ITIMEMediaElement_get_dur(This,time) ( (This)->lpVtbl -> get_dur(This,time) )
#define ITIMEMediaElement_put_dur(This,time) ( (This)->lpVtbl -> put_dur(This,time) )
#define ITIMEMediaElement_get_end(This,time) ( (This)->lpVtbl -> get_end(This,time) )
#define ITIMEMediaElement_put_end(This,time) ( (This)->lpVtbl -> put_end(This,time) )
#define ITIMEMediaElement_get_fill(This,f) ( (This)->lpVtbl -> get_fill(This,f) )
#define ITIMEMediaElement_put_fill(This,f) ( (This)->lpVtbl -> put_fill(This,f) )
#define ITIMEMediaElement_get_mute(This,b) ( (This)->lpVtbl -> get_mute(This,b) )
#define ITIMEMediaElement_put_mute(This,b) ( (This)->lpVtbl -> put_mute(This,b) )
#define ITIMEMediaElement_get_repeatCount(This,c) ( (This)->lpVtbl -> get_repeatCount(This,c) )
#define ITIMEMediaElement_put_repeatCount(This,c) ( (This)->lpVtbl -> put_repeatCount(This,c) )
#define ITIMEMediaElement_get_repeatDur(This,time) ( (This)->lpVtbl -> get_repeatDur(This,time) )
#define ITIMEMediaElement_put_repeatDur(This,time) ( (This)->lpVtbl -> put_repeatDur(This,time) )
#define ITIMEMediaElement_get_restart(This,__MIDL__ITIMEElement0006) ( (This)->lpVtbl -> get_restart(This,__MIDL__ITIMEElement0006) )
#define ITIMEMediaElement_put_restart(This,__MIDL__ITIMEElement0007) ( (This)->lpVtbl -> put_restart(This,__MIDL__ITIMEElement0007) )
#define ITIMEMediaElement_get_speed(This,speed) ( (This)->lpVtbl -> get_speed(This,speed) )
#define ITIMEMediaElement_put_speed(This,speed) ( (This)->lpVtbl -> put_speed(This,speed) )
#define ITIMEMediaElement_get_syncBehavior(This,sync) ( (This)->lpVtbl -> get_syncBehavior(This,sync) )
#define ITIMEMediaElement_put_syncBehavior(This,sync) ( (This)->lpVtbl -> put_syncBehavior(This,sync) )
#define ITIMEMediaElement_get_syncTolerance(This,tol) ( (This)->lpVtbl -> get_syncTolerance(This,tol) )
#define ITIMEMediaElement_put_syncTolerance(This,tol) ( (This)->lpVtbl -> put_syncTolerance(This,tol) )
#define ITIMEMediaElement_get_syncMaster(This,b) ( (This)->lpVtbl -> get_syncMaster(This,b) )
#define ITIMEMediaElement_put_syncMaster(This,b) ( (This)->lpVtbl -> put_syncMaster(This,b) )
#define ITIMEMediaElement_get_timeAction(This,time) ( (This)->lpVtbl -> get_timeAction(This,time) )
#define ITIMEMediaElement_put_timeAction(This,time) ( (This)->lpVtbl -> put_timeAction(This,time) )
#define ITIMEMediaElement_get_timeContainer(This,__MIDL__ITIMEElement0008) ( (This)->lpVtbl -> get_timeContainer(This,__MIDL__ITIMEElement0008) )
#define ITIMEMediaElement_get_volume(This,val) ( (This)->lpVtbl -> get_volume(This,val) )
#define ITIMEMediaElement_put_volume(This,val) ( (This)->lpVtbl -> put_volume(This,val) )
#define ITIMEMediaElement_get_currTimeState(This,TimeState) ( (This)->lpVtbl -> get_currTimeState(This,TimeState) )
#define ITIMEMediaElement_get_timeAll(This,allColl) ( (This)->lpVtbl -> get_timeAll(This,allColl) )
#define ITIMEMediaElement_get_timeChildren(This,childColl) ( (This)->lpVtbl -> get_timeChildren(This,childColl) )
#define ITIMEMediaElement_get_timeParent(This,parent) ( (This)->lpVtbl -> get_timeParent(This,parent) )
#define ITIMEMediaElement_get_isPaused(This,b) ( (This)->lpVtbl -> get_isPaused(This,b) )
#define ITIMEMediaElement_beginElement(This) ( (This)->lpVtbl -> beginElement(This) )
#define ITIMEMediaElement_beginElementAt(This,parentTime) ( (This)->lpVtbl -> beginElementAt(This,parentTime) )
#define ITIMEMediaElement_endElement(This) ( (This)->lpVtbl -> endElement(This) )
#define ITIMEMediaElement_endElementAt(This,parentTime) ( (This)->lpVtbl -> endElementAt(This,parentTime) )
#define ITIMEMediaElement_pauseElement(This) ( (This)->lpVtbl -> pauseElement(This) )
#define ITIMEMediaElement_resetElement(This) ( (This)->lpVtbl -> resetElement(This) )
#define ITIMEMediaElement_resumeElement(This) ( (This)->lpVtbl -> resumeElement(This) )
#define ITIMEMediaElement_seekActiveTime(This,activeTime) ( (This)->lpVtbl -> seekActiveTime(This,activeTime) )
#define ITIMEMediaElement_seekSegmentTime(This,segmentTime) ( (This)->lpVtbl -> seekSegmentTime(This,segmentTime) )
#define ITIMEMediaElement_seekTo(This,repeatCount,segmentTime) ( (This)->lpVtbl -> seekTo(This,repeatCount,segmentTime) )
#define ITIMEMediaElement_documentTimeToParentTime(This,documentTime,parentTime) ( (This)->lpVtbl -> documentTimeToParentTime(This,documentTime,parentTime) )
#define ITIMEMediaElement_parentTimeToDocumentTime(This,parentTime,documentTime) ( (This)->lpVtbl -> parentTimeToDocumentTime(This,parentTime,documentTime) )
#define ITIMEMediaElement_parentTimeToActiveTime(This,parentTime,activeTime) ( (This)->lpVtbl -> parentTimeToActiveTime(This,parentTime,activeTime) )
#define ITIMEMediaElement_activeTimeToParentTime(This,activeTime,parentTime) ( (This)->lpVtbl -> activeTimeToParentTime(This,activeTime,parentTime) )
#define ITIMEMediaElement_activeTimeToSegmentTime(This,activeTime,segmentTime) ( (This)->lpVtbl -> activeTimeToSegmentTime(This,activeTime,segmentTime) )
#define ITIMEMediaElement_segmentTimeToActiveTime(This,segmentTime,activeTime) ( (This)->lpVtbl -> segmentTimeToActiveTime(This,segmentTime,activeTime) )
#define ITIMEMediaElement_segmentTimeToSimpleTime(This,segmentTime,simpleTime) ( (This)->lpVtbl -> segmentTimeToSimpleTime(This,segmentTime,simpleTime) )
#define ITIMEMediaElement_simpleTimeToSegmentTime(This,simpleTime,segmentTime) ( (This)->lpVtbl -> simpleTimeToSegmentTime(This,simpleTime,segmentTime) )
#define ITIMEMediaElement_get_endSync(This,es) ( (This)->lpVtbl -> get_endSync(This,es) )
#define ITIMEMediaElement_put_endSync(This,es) ( (This)->lpVtbl -> put_endSync(This,es) )
#define ITIMEMediaElement_get_activeElements(This,activeColl) ( (This)->lpVtbl -> get_activeElements(This,activeColl) )
#define ITIMEMediaElement_get_hasMedia(This,flag) ( (This)->lpVtbl -> get_hasMedia(This,flag) )
#define ITIMEMediaElement_nextElement(This) ( (This)->lpVtbl -> nextElement(This) )
#define ITIMEMediaElement_prevElement(This) ( (This)->lpVtbl -> prevElement(This) )
#define ITIMEMediaElement_get_updateMode(This,updateMode) ( (This)->lpVtbl -> get_updateMode(This,updateMode) )
#define ITIMEMediaElement_put_updateMode(This,updateMode) ( (This)->lpVtbl -> put_updateMode(This,updateMode) )
#define ITIMEMediaElement_get_clipBegin(This,time) ( (This)->lpVtbl -> get_clipBegin(This,time) )
#define ITIMEMediaElement_put_clipBegin(This,time) ( (This)->lpVtbl -> put_clipBegin(This,time) )
#define ITIMEMediaElement_get_clipEnd(This,time) ( (This)->lpVtbl -> get_clipEnd(This,time) )
#define ITIMEMediaElement_put_clipEnd(This,time) ( (This)->lpVtbl -> put_clipEnd(This,time) )
#define ITIMEMediaElement_get_player(This,id) ( (This)->lpVtbl -> get_player(This,id) )
#define ITIMEMediaElement_put_player(This,id) ( (This)->lpVtbl -> put_player(This,id) )
#define ITIMEMediaElement_get_src(This,url) ( (This)->lpVtbl -> get_src(This,url) )
#define ITIMEMediaElement_put_src(This,url) ( (This)->lpVtbl -> put_src(This,url) )
#define ITIMEMediaElement_get_type(This,mimetype) ( (This)->lpVtbl -> get_type(This,mimetype) )
#define ITIMEMediaElement_put_type(This,mimetype) ( (This)->lpVtbl -> put_type(This,mimetype) )
#define ITIMEMediaElement_get_abstract(This,abs) ( (This)->lpVtbl -> get_abstract(This,abs) )
#define ITIMEMediaElement_get_author(This,auth) ( (This)->lpVtbl -> get_author(This,auth) )
#define ITIMEMediaElement_get_copyright(This,cpyrght) ( (This)->lpVtbl -> get_copyright(This,cpyrght) )
#define ITIMEMediaElement_get_hasAudio(This,b) ( (This)->lpVtbl -> get_hasAudio(This,b) )
#define ITIMEMediaElement_get_hasVisual(This,b) ( (This)->lpVtbl -> get_hasVisual(This,b) )
#define ITIMEMediaElement_get_mediaDur(This,dur) ( (This)->lpVtbl -> get_mediaDur(This,dur) )
#define ITIMEMediaElement_get_mediaHeight(This,height) ( (This)->lpVtbl -> get_mediaHeight(This,height) )
#define ITIMEMediaElement_get_mediaWidth(This,width) ( (This)->lpVtbl -> get_mediaWidth(This,width) )
#define ITIMEMediaElement_get_playerObject(This,ppDisp) ( (This)->lpVtbl -> get_playerObject(This,ppDisp) )
#define ITIMEMediaElement_get_playList(This,pPlayList) ( (This)->lpVtbl -> get_playList(This,pPlayList) )
#define ITIMEMediaElement_get_rating(This,rate) ( (This)->lpVtbl -> get_rating(This,rate) )
#define ITIMEMediaElement_get_title(This,name) ( (This)->lpVtbl -> get_title(This,name) )
#define ITIMEMediaElement_get_hasPlayList(This,b) ( (This)->lpVtbl -> get_hasPlayList(This,b) )
#define ITIMEMediaElement_get_canPause(This,b) ( (This)->lpVtbl -> get_canPause(This,b) )
#define ITIMEMediaElement_get_canSeek(This,b) ( (This)->lpVtbl -> get_canSeek(This,b) )
#endif
#endif
#ifndef __ITIMEMediaElement2_INTERFACE_DEFINED__
#define __ITIMEMediaElement2_INTERFACE_DEFINED__
extern const IID IID_ITIMEMediaElement2;
typedef struct ITIMEMediaElement2Vtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (ITIMEMediaElement2 * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (ITIMEMediaElement2 * This);
	ULONG(STDMETHODCALLTYPE * Release) (ITIMEMediaElement2 * This);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfoCount) (ITIMEMediaElement2 * This, UINT * pctinfo);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfo) (ITIMEMediaElement2 * This, UINT iTInfo, LCID lcid, ITypeInfo ** ppTInfo);
	HRESULT(STDMETHODCALLTYPE * GetIDsOfNames) (ITIMEMediaElement2 * This, REFIID riid, LPOLESTR * rgszNames, UINT cNames, LCID lcid, DISPID * rgDispId);
	HRESULT(STDMETHODCALLTYPE * Invoke) (ITIMEMediaElement2 * This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS * pDispParams, VARIANT * pVarResult, EXCEPINFO * pExcepInfo, UINT * puArgErr);
	HRESULT(STDMETHODCALLTYPE * get_accelerate) (ITIMEMediaElement2 * This, VARIANT * __MIDL__ITIMEElement0000);
	HRESULT(STDMETHODCALLTYPE * put_accelerate) (ITIMEMediaElement2 * This, VARIANT __MIDL__ITIMEElement0001);
	HRESULT(STDMETHODCALLTYPE * get_autoReverse) (ITIMEMediaElement2 * This, VARIANT * __MIDL__ITIMEElement0002);
	HRESULT(STDMETHODCALLTYPE * put_autoReverse) (ITIMEMediaElement2 * This, VARIANT __MIDL__ITIMEElement0003);
	HRESULT(STDMETHODCALLTYPE * get_begin) (ITIMEMediaElement2 * This, VARIANT * time);
	HRESULT(STDMETHODCALLTYPE * put_begin) (ITIMEMediaElement2 * This, VARIANT time);
	HRESULT(STDMETHODCALLTYPE * get_decelerate) (ITIMEMediaElement2 * This, VARIANT * __MIDL__ITIMEElement0004);
	HRESULT(STDMETHODCALLTYPE * put_decelerate) (ITIMEMediaElement2 * This, VARIANT __MIDL__ITIMEElement0005);
	HRESULT(STDMETHODCALLTYPE * get_dur) (ITIMEMediaElement2 * This, VARIANT * time);
	HRESULT(STDMETHODCALLTYPE * put_dur) (ITIMEMediaElement2 * This, VARIANT time);
	HRESULT(STDMETHODCALLTYPE * get_end) (ITIMEMediaElement2 * This, VARIANT * time);
	HRESULT(STDMETHODCALLTYPE * put_end) (ITIMEMediaElement2 * This, VARIANT time);
	HRESULT(STDMETHODCALLTYPE * get_fill) (ITIMEMediaElement2 * This, BSTR * f);
	HRESULT(STDMETHODCALLTYPE * put_fill) (ITIMEMediaElement2 * This, BSTR f);
	HRESULT(STDMETHODCALLTYPE * get_mute) (ITIMEMediaElement2 * This, VARIANT * b);
	HRESULT(STDMETHODCALLTYPE * put_mute) (ITIMEMediaElement2 * This, VARIANT b);
	HRESULT(STDMETHODCALLTYPE * get_repeatCount) (ITIMEMediaElement2 * This, VARIANT * c);
	HRESULT(STDMETHODCALLTYPE * put_repeatCount) (ITIMEMediaElement2 * This, VARIANT c);
	HRESULT(STDMETHODCALLTYPE * get_repeatDur) (ITIMEMediaElement2 * This, VARIANT * time);
	HRESULT(STDMETHODCALLTYPE * put_repeatDur) (ITIMEMediaElement2 * This, VARIANT time);
	HRESULT(STDMETHODCALLTYPE * get_restart) (ITIMEMediaElement2 * This, BSTR * __MIDL__ITIMEElement0006);
	HRESULT(STDMETHODCALLTYPE * put_restart) (ITIMEMediaElement2 * This, BSTR __MIDL__ITIMEElement0007);
	HRESULT(STDMETHODCALLTYPE * get_speed) (ITIMEMediaElement2 * This, VARIANT * speed);
	HRESULT(STDMETHODCALLTYPE * put_speed) (ITIMEMediaElement2 * This, VARIANT speed);
	HRESULT(STDMETHODCALLTYPE * get_syncBehavior) (ITIMEMediaElement2 * This, BSTR * sync);
	HRESULT(STDMETHODCALLTYPE * put_syncBehavior) (ITIMEMediaElement2 * This, BSTR sync);
	HRESULT(STDMETHODCALLTYPE * get_syncTolerance) (ITIMEMediaElement2 * This, VARIANT * tol);
	HRESULT(STDMETHODCALLTYPE * put_syncTolerance) (ITIMEMediaElement2 * This, VARIANT tol);
	HRESULT(STDMETHODCALLTYPE * get_syncMaster) (ITIMEMediaElement2 * This, VARIANT * b);
	HRESULT(STDMETHODCALLTYPE * put_syncMaster) (ITIMEMediaElement2 * This, VARIANT b);
	HRESULT(STDMETHODCALLTYPE * get_timeAction) (ITIMEMediaElement2 * This, BSTR * time);
	HRESULT(STDMETHODCALLTYPE * put_timeAction) (ITIMEMediaElement2 * This, BSTR time);
	HRESULT(STDMETHODCALLTYPE * get_timeContainer) (ITIMEMediaElement2 * This, BSTR * __MIDL__ITIMEElement0008);
	HRESULT(STDMETHODCALLTYPE * get_volume) (ITIMEMediaElement2 * This, VARIANT * val);
	HRESULT(STDMETHODCALLTYPE * put_volume) (ITIMEMediaElement2 * This, VARIANT val);
	HRESULT(STDMETHODCALLTYPE * get_currTimeState) (ITIMEMediaElement2 * This, ITIMEState ** TimeState);
	HRESULT(STDMETHODCALLTYPE * get_timeAll) (ITIMEMediaElement2 * This, ITIMEElementCollection ** allColl);
	HRESULT(STDMETHODCALLTYPE * get_timeChildren) (ITIMEMediaElement2 * This, ITIMEElementCollection ** childColl);
	HRESULT(STDMETHODCALLTYPE * get_timeParent) (ITIMEMediaElement2 * This, ITIMEElement ** parent);
	HRESULT(STDMETHODCALLTYPE * get_isPaused) (ITIMEMediaElement2 * This, VARIANT_BOOL * b);
	HRESULT(STDMETHODCALLTYPE * beginElement) (ITIMEMediaElement2 * This);
	HRESULT(STDMETHODCALLTYPE * beginElementAt) (ITIMEMediaElement2 * This, double parentTime);
	HRESULT(STDMETHODCALLTYPE * endElement) (ITIMEMediaElement2 * This);
	HRESULT(STDMETHODCALLTYPE * endElementAt) (ITIMEMediaElement2 * This, double parentTime);
	HRESULT(STDMETHODCALLTYPE * pauseElement) (ITIMEMediaElement2 * This);
	HRESULT(STDMETHODCALLTYPE * resetElement) (ITIMEMediaElement2 * This);
	HRESULT(STDMETHODCALLTYPE * resumeElement) (ITIMEMediaElement2 * This);
	HRESULT(STDMETHODCALLTYPE * seekActiveTime) (ITIMEMediaElement2 * This, double activeTime);
	HRESULT(STDMETHODCALLTYPE * seekSegmentTime) (ITIMEMediaElement2 * This, double segmentTime);
	HRESULT(STDMETHODCALLTYPE * seekTo) (ITIMEMediaElement2 * This, LONG repeatCount, double segmentTime);
	HRESULT(STDMETHODCALLTYPE * documentTimeToParentTime) (ITIMEMediaElement2 * This, double documentTime, double *parentTime);
	HRESULT(STDMETHODCALLTYPE * parentTimeToDocumentTime) (ITIMEMediaElement2 * This, double parentTime, double *documentTime);
	HRESULT(STDMETHODCALLTYPE * parentTimeToActiveTime) (ITIMEMediaElement2 * This, double parentTime, double *activeTime);
	HRESULT(STDMETHODCALLTYPE * activeTimeToParentTime) (ITIMEMediaElement2 * This, double activeTime, double *parentTime);
	HRESULT(STDMETHODCALLTYPE * activeTimeToSegmentTime) (ITIMEMediaElement2 * This, double activeTime, double *segmentTime);
	HRESULT(STDMETHODCALLTYPE * segmentTimeToActiveTime) (ITIMEMediaElement2 * This, double segmentTime, double *activeTime);
	HRESULT(STDMETHODCALLTYPE * segmentTimeToSimpleTime) (ITIMEMediaElement2 * This, double segmentTime, double *simpleTime);
	HRESULT(STDMETHODCALLTYPE * simpleTimeToSegmentTime) (ITIMEMediaElement2 * This, double simpleTime, double *segmentTime);
	HRESULT(STDMETHODCALLTYPE * get_endSync) (ITIMEMediaElement2 * This, BSTR * es);
	HRESULT(STDMETHODCALLTYPE * put_endSync) (ITIMEMediaElement2 * This, BSTR es);
	HRESULT(STDMETHODCALLTYPE * get_activeElements) (ITIMEMediaElement2 * This, ITIMEActiveElementCollection ** activeColl);
	HRESULT(STDMETHODCALLTYPE * get_hasMedia) (ITIMEMediaElement2 * This, VARIANT_BOOL * flag);
	HRESULT(STDMETHODCALLTYPE * nextElement) (ITIMEMediaElement2 * This);
	HRESULT(STDMETHODCALLTYPE * prevElement) (ITIMEMediaElement2 * This);
	HRESULT(STDMETHODCALLTYPE * get_updateMode) (ITIMEMediaElement2 * This, BSTR * updateMode);
	HRESULT(STDMETHODCALLTYPE * put_updateMode) (ITIMEMediaElement2 * This, BSTR updateMode);
	HRESULT(STDMETHODCALLTYPE * get_clipBegin) (ITIMEMediaElement2 * This, VARIANT * time);
	HRESULT(STDMETHODCALLTYPE * put_clipBegin) (ITIMEMediaElement2 * This, VARIANT time);
	HRESULT(STDMETHODCALLTYPE * get_clipEnd) (ITIMEMediaElement2 * This, VARIANT * time);
	HRESULT(STDMETHODCALLTYPE * put_clipEnd) (ITIMEMediaElement2 * This, VARIANT time);
	HRESULT(STDMETHODCALLTYPE * get_player) (ITIMEMediaElement2 * This, VARIANT * id);
	HRESULT(STDMETHODCALLTYPE * put_player) (ITIMEMediaElement2 * This, VARIANT id);
	HRESULT(STDMETHODCALLTYPE * get_src) (ITIMEMediaElement2 * This, VARIANT * url);
	HRESULT(STDMETHODCALLTYPE * put_src) (ITIMEMediaElement2 * This, VARIANT url);
	HRESULT(STDMETHODCALLTYPE * get_type) (ITIMEMediaElement2 * This, VARIANT * mimetype);
	HRESULT(STDMETHODCALLTYPE * put_type) (ITIMEMediaElement2 * This, VARIANT mimetype);
	HRESULT(STDMETHODCALLTYPE * get_abstract) (ITIMEMediaElement2 * This, BSTR * abs);
	HRESULT(STDMETHODCALLTYPE * get_author) (ITIMEMediaElement2 * This, BSTR * auth);
	HRESULT(STDMETHODCALLTYPE * get_copyright) (ITIMEMediaElement2 * This, BSTR * cpyrght);
	HRESULT(STDMETHODCALLTYPE * get_hasAudio) (ITIMEMediaElement2 * This, VARIANT_BOOL * b);
	HRESULT(STDMETHODCALLTYPE * get_hasVisual) (ITIMEMediaElement2 * This, VARIANT_BOOL * b);
	HRESULT(STDMETHODCALLTYPE * get_mediaDur) (ITIMEMediaElement2 * This, double *dur);
	HRESULT(STDMETHODCALLTYPE * get_mediaHeight) (ITIMEMediaElement2 * This, long *height);
	HRESULT(STDMETHODCALLTYPE * get_mediaWidth) (ITIMEMediaElement2 * This, long *width);
	HRESULT(STDMETHODCALLTYPE * get_playerObject) (ITIMEMediaElement2 * This, IDispatch ** ppDisp);
	HRESULT(STDMETHODCALLTYPE * get_playList) (ITIMEMediaElement2 * This, ITIMEPlayList ** pPlayList);
	HRESULT(STDMETHODCALLTYPE * get_rating) (ITIMEMediaElement2 * This, BSTR * rate);
	HRESULT(STDMETHODCALLTYPE * get_title) (ITIMEMediaElement2 * This, BSTR * name);
	HRESULT(STDMETHODCALLTYPE * get_hasPlayList) (ITIMEMediaElement2 * This, VARIANT_BOOL * b);
	HRESULT(STDMETHODCALLTYPE * get_canPause) (ITIMEMediaElement2 * This, VARIANT_BOOL * b);
	HRESULT(STDMETHODCALLTYPE * get_canSeek) (ITIMEMediaElement2 * This, VARIANT_BOOL * b);
	HRESULT(STDMETHODCALLTYPE * get_earliestMediaTime) (ITIMEMediaElement2 * This, VARIANT * earliestMediaTime);
	HRESULT(STDMETHODCALLTYPE * get_latestMediaTime) (ITIMEMediaElement2 * This, VARIANT * latestMediaTime);
	HRESULT(STDMETHODCALLTYPE * get_minBufferedMediaDur) (ITIMEMediaElement2 * This, VARIANT * minBufferedMediaDur);
	HRESULT(STDMETHODCALLTYPE * put_minBufferedMediaDur) (ITIMEMediaElement2 * This, VARIANT minBufferedMediaDur);
	HRESULT(STDMETHODCALLTYPE * get_downloadTotal) (ITIMEMediaElement2 * This, VARIANT * downloadTotal);
	HRESULT(STDMETHODCALLTYPE * get_downloadCurrent) (ITIMEMediaElement2 * This, VARIANT * downloadCurrent);
	HRESULT(STDMETHODCALLTYPE * get_isStreamed) (ITIMEMediaElement2 * This, VARIANT_BOOL * b);
	HRESULT(STDMETHODCALLTYPE * get_bufferingProgress) (ITIMEMediaElement2 * This, VARIANT * bufferingProgress);
	HRESULT(STDMETHODCALLTYPE * get_hasDownloadProgress) (ITIMEMediaElement2 * This, VARIANT_BOOL * b);
	HRESULT(STDMETHODCALLTYPE * get_downloadProgress) (ITIMEMediaElement2 * This, VARIANT * downloadProgress);
	HRESULT(STDMETHODCALLTYPE * get_mimeType) (ITIMEMediaElement2 * This, BSTR * mimeType);
	HRESULT(STDMETHODCALLTYPE * seekToFrame) (ITIMEMediaElement2 * This, long frameNr);
	HRESULT(STDMETHODCALLTYPE * decodeMimeType) (ITIMEMediaElement2 * This, TCHAR * header, long headerSize, BSTR * mimeType);
	HRESULT(STDMETHODCALLTYPE * get_currentFrame) (ITIMEMediaElement2 * This, long *currFrame);
	END_INTERFACE
}  ITIMEMediaElement2Vtbl;
interface ITIMEMediaElement2
{
	CONST_VTBL struct ITIMEMediaElement2Vtbl *lpVtbl;
};
#ifdef COBJMACROS
#define ITIMEMediaElement2_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define ITIMEMediaElement2_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define ITIMEMediaElement2_Release(This) ( (This)->lpVtbl -> Release(This) )
#define ITIMEMediaElement2_GetTypeInfoCount(This,pctinfo) ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define ITIMEMediaElement2_GetTypeInfo(This,iTInfo,lcid,ppTInfo) ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define ITIMEMediaElement2_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define ITIMEMediaElement2_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define ITIMEMediaElement2_get_accelerate(This,__MIDL__ITIMEElement0000) ( (This)->lpVtbl -> get_accelerate(This,__MIDL__ITIMEElement0000) )
#define ITIMEMediaElement2_put_accelerate(This,__MIDL__ITIMEElement0001) ( (This)->lpVtbl -> put_accelerate(This,__MIDL__ITIMEElement0001) )
#define ITIMEMediaElement2_get_autoReverse(This,__MIDL__ITIMEElement0002) ( (This)->lpVtbl -> get_autoReverse(This,__MIDL__ITIMEElement0002) )
#define ITIMEMediaElement2_put_autoReverse(This,__MIDL__ITIMEElement0003) ( (This)->lpVtbl -> put_autoReverse(This,__MIDL__ITIMEElement0003) )
#define ITIMEMediaElement2_get_begin(This,time) ( (This)->lpVtbl -> get_begin(This,time) )
#define ITIMEMediaElement2_put_begin(This,time) ( (This)->lpVtbl -> put_begin(This,time) )
#define ITIMEMediaElement2_get_decelerate(This,__MIDL__ITIMEElement0004) ( (This)->lpVtbl -> get_decelerate(This,__MIDL__ITIMEElement0004) )
#define ITIMEMediaElement2_put_decelerate(This,__MIDL__ITIMEElement0005) ( (This)->lpVtbl -> put_decelerate(This,__MIDL__ITIMEElement0005) )
#define ITIMEMediaElement2_get_dur(This,time) ( (This)->lpVtbl -> get_dur(This,time) )
#define ITIMEMediaElement2_put_dur(This,time) ( (This)->lpVtbl -> put_dur(This,time) )
#define ITIMEMediaElement2_get_end(This,time) ( (This)->lpVtbl -> get_end(This,time) )
#define ITIMEMediaElement2_put_end(This,time) ( (This)->lpVtbl -> put_end(This,time) )
#define ITIMEMediaElement2_get_fill(This,f) ( (This)->lpVtbl -> get_fill(This,f) )
#define ITIMEMediaElement2_put_fill(This,f) ( (This)->lpVtbl -> put_fill(This,f) )
#define ITIMEMediaElement2_get_mute(This,b) ( (This)->lpVtbl -> get_mute(This,b) )
#define ITIMEMediaElement2_put_mute(This,b) ( (This)->lpVtbl -> put_mute(This,b) )
#define ITIMEMediaElement2_get_repeatCount(This,c) ( (This)->lpVtbl -> get_repeatCount(This,c) )
#define ITIMEMediaElement2_put_repeatCount(This,c) ( (This)->lpVtbl -> put_repeatCount(This,c) )
#define ITIMEMediaElement2_get_repeatDur(This,time) ( (This)->lpVtbl -> get_repeatDur(This,time) )
#define ITIMEMediaElement2_put_repeatDur(This,time) ( (This)->lpVtbl -> put_repeatDur(This,time) )
#define ITIMEMediaElement2_get_restart(This,__MIDL__ITIMEElement0006) ( (This)->lpVtbl -> get_restart(This,__MIDL__ITIMEElement0006) )
#define ITIMEMediaElement2_put_restart(This,__MIDL__ITIMEElement0007) ( (This)->lpVtbl -> put_restart(This,__MIDL__ITIMEElement0007) )
#define ITIMEMediaElement2_get_speed(This,speed) ( (This)->lpVtbl -> get_speed(This,speed) )
#define ITIMEMediaElement2_put_speed(This,speed) ( (This)->lpVtbl -> put_speed(This,speed) )
#define ITIMEMediaElement2_get_syncBehavior(This,sync) ( (This)->lpVtbl -> get_syncBehavior(This,sync) )
#define ITIMEMediaElement2_put_syncBehavior(This,sync) ( (This)->lpVtbl -> put_syncBehavior(This,sync) )
#define ITIMEMediaElement2_get_syncTolerance(This,tol) ( (This)->lpVtbl -> get_syncTolerance(This,tol) )
#define ITIMEMediaElement2_put_syncTolerance(This,tol) ( (This)->lpVtbl -> put_syncTolerance(This,tol) )
#define ITIMEMediaElement2_get_syncMaster(This,b) ( (This)->lpVtbl -> get_syncMaster(This,b) )
#define ITIMEMediaElement2_put_syncMaster(This,b) ( (This)->lpVtbl -> put_syncMaster(This,b) )
#define ITIMEMediaElement2_get_timeAction(This,time) ( (This)->lpVtbl -> get_timeAction(This,time) )
#define ITIMEMediaElement2_put_timeAction(This,time) ( (This)->lpVtbl -> put_timeAction(This,time) )
#define ITIMEMediaElement2_get_timeContainer(This,__MIDL__ITIMEElement0008) ( (This)->lpVtbl -> get_timeContainer(This,__MIDL__ITIMEElement0008) )
#define ITIMEMediaElement2_get_volume(This,val) ( (This)->lpVtbl -> get_volume(This,val) )
#define ITIMEMediaElement2_put_volume(This,val) ( (This)->lpVtbl -> put_volume(This,val) )
#define ITIMEMediaElement2_get_currTimeState(This,TimeState) ( (This)->lpVtbl -> get_currTimeState(This,TimeState) )
#define ITIMEMediaElement2_get_timeAll(This,allColl) ( (This)->lpVtbl -> get_timeAll(This,allColl) )
#define ITIMEMediaElement2_get_timeChildren(This,childColl) ( (This)->lpVtbl -> get_timeChildren(This,childColl) )
#define ITIMEMediaElement2_get_timeParent(This,parent) ( (This)->lpVtbl -> get_timeParent(This,parent) )
#define ITIMEMediaElement2_get_isPaused(This,b) ( (This)->lpVtbl -> get_isPaused(This,b) )
#define ITIMEMediaElement2_beginElement(This) ( (This)->lpVtbl -> beginElement(This) )
#define ITIMEMediaElement2_beginElementAt(This,parentTime) ( (This)->lpVtbl -> beginElementAt(This,parentTime) )
#define ITIMEMediaElement2_endElement(This) ( (This)->lpVtbl -> endElement(This) )
#define ITIMEMediaElement2_endElementAt(This,parentTime) ( (This)->lpVtbl -> endElementAt(This,parentTime) )
#define ITIMEMediaElement2_pauseElement(This) ( (This)->lpVtbl -> pauseElement(This) )
#define ITIMEMediaElement2_resetElement(This) ( (This)->lpVtbl -> resetElement(This) )
#define ITIMEMediaElement2_resumeElement(This) ( (This)->lpVtbl -> resumeElement(This) )
#define ITIMEMediaElement2_seekActiveTime(This,activeTime) ( (This)->lpVtbl -> seekActiveTime(This,activeTime) )
#define ITIMEMediaElement2_seekSegmentTime(This,segmentTime) ( (This)->lpVtbl -> seekSegmentTime(This,segmentTime) )
#define ITIMEMediaElement2_seekTo(This,repeatCount,segmentTime) ( (This)->lpVtbl -> seekTo(This,repeatCount,segmentTime) )
#define ITIMEMediaElement2_documentTimeToParentTime(This,documentTime,parentTime) ( (This)->lpVtbl -> documentTimeToParentTime(This,documentTime,parentTime) )
#define ITIMEMediaElement2_parentTimeToDocumentTime(This,parentTime,documentTime) ( (This)->lpVtbl -> parentTimeToDocumentTime(This,parentTime,documentTime) )
#define ITIMEMediaElement2_parentTimeToActiveTime(This,parentTime,activeTime) ( (This)->lpVtbl -> parentTimeToActiveTime(This,parentTime,activeTime) )
#define ITIMEMediaElement2_activeTimeToParentTime(This,activeTime,parentTime) ( (This)->lpVtbl -> activeTimeToParentTime(This,activeTime,parentTime) )
#define ITIMEMediaElement2_activeTimeToSegmentTime(This,activeTime,segmentTime) ( (This)->lpVtbl -> activeTimeToSegmentTime(This,activeTime,segmentTime) )
#define ITIMEMediaElement2_segmentTimeToActiveTime(This,segmentTime,activeTime) ( (This)->lpVtbl -> segmentTimeToActiveTime(This,segmentTime,activeTime) )
#define ITIMEMediaElement2_segmentTimeToSimpleTime(This,segmentTime,simpleTime) ( (This)->lpVtbl -> segmentTimeToSimpleTime(This,segmentTime,simpleTime) )
#define ITIMEMediaElement2_simpleTimeToSegmentTime(This,simpleTime,segmentTime) ( (This)->lpVtbl -> simpleTimeToSegmentTime(This,simpleTime,segmentTime) )
#define ITIMEMediaElement2_get_endSync(This,es) ( (This)->lpVtbl -> get_endSync(This,es) )
#define ITIMEMediaElement2_put_endSync(This,es) ( (This)->lpVtbl -> put_endSync(This,es) )
#define ITIMEMediaElement2_get_activeElements(This,activeColl) ( (This)->lpVtbl -> get_activeElements(This,activeColl) )
#define ITIMEMediaElement2_get_hasMedia(This,flag) ( (This)->lpVtbl -> get_hasMedia(This,flag) )
#define ITIMEMediaElement2_nextElement(This) ( (This)->lpVtbl -> nextElement(This) )
#define ITIMEMediaElement2_prevElement(This) ( (This)->lpVtbl -> prevElement(This) )
#define ITIMEMediaElement2_get_updateMode(This,updateMode) ( (This)->lpVtbl -> get_updateMode(This,updateMode) )
#define ITIMEMediaElement2_put_updateMode(This,updateMode) ( (This)->lpVtbl -> put_updateMode(This,updateMode) )
#define ITIMEMediaElement2_get_clipBegin(This,time) ( (This)->lpVtbl -> get_clipBegin(This,time) )
#define ITIMEMediaElement2_put_clipBegin(This,time) ( (This)->lpVtbl -> put_clipBegin(This,time) )
#define ITIMEMediaElement2_get_clipEnd(This,time) ( (This)->lpVtbl -> get_clipEnd(This,time) )
#define ITIMEMediaElement2_put_clipEnd(This,time) ( (This)->lpVtbl -> put_clipEnd(This,time) )
#define ITIMEMediaElement2_get_player(This,id) ( (This)->lpVtbl -> get_player(This,id) )
#define ITIMEMediaElement2_put_player(This,id) ( (This)->lpVtbl -> put_player(This,id) )
#define ITIMEMediaElement2_get_src(This,url) ( (This)->lpVtbl -> get_src(This,url) )
#define ITIMEMediaElement2_put_src(This,url) ( (This)->lpVtbl -> put_src(This,url) )
#define ITIMEMediaElement2_get_type(This,mimetype) ( (This)->lpVtbl -> get_type(This,mimetype) )
#define ITIMEMediaElement2_put_type(This,mimetype) ( (This)->lpVtbl -> put_type(This,mimetype) )
#define ITIMEMediaElement2_get_abstract(This,abs) ( (This)->lpVtbl -> get_abstract(This,abs) )
#define ITIMEMediaElement2_get_author(This,auth) ( (This)->lpVtbl -> get_author(This,auth) )
#define ITIMEMediaElement2_get_copyright(This,cpyrght) ( (This)->lpVtbl -> get_copyright(This,cpyrght) )
#define ITIMEMediaElement2_get_hasAudio(This,b) ( (This)->lpVtbl -> get_hasAudio(This,b) )
#define ITIMEMediaElement2_get_hasVisual(This,b) ( (This)->lpVtbl -> get_hasVisual(This,b) )
#define ITIMEMediaElement2_get_mediaDur(This,dur) ( (This)->lpVtbl -> get_mediaDur(This,dur) )
#define ITIMEMediaElement2_get_mediaHeight(This,height) ( (This)->lpVtbl -> get_mediaHeight(This,height) )
#define ITIMEMediaElement2_get_mediaWidth(This,width) ( (This)->lpVtbl -> get_mediaWidth(This,width) )
#define ITIMEMediaElement2_get_playerObject(This,ppDisp) ( (This)->lpVtbl -> get_playerObject(This,ppDisp) )
#define ITIMEMediaElement2_get_playList(This,pPlayList) ( (This)->lpVtbl -> get_playList(This,pPlayList) )
#define ITIMEMediaElement2_get_rating(This,rate) ( (This)->lpVtbl -> get_rating(This,rate) )
#define ITIMEMediaElement2_get_title(This,name) ( (This)->lpVtbl -> get_title(This,name) )
#define ITIMEMediaElement2_get_hasPlayList(This,b) ( (This)->lpVtbl -> get_hasPlayList(This,b) )
#define ITIMEMediaElement2_get_canPause(This,b) ( (This)->lpVtbl -> get_canPause(This,b) )
#define ITIMEMediaElement2_get_canSeek(This,b) ( (This)->lpVtbl -> get_canSeek(This,b) )
#define ITIMEMediaElement2_get_earliestMediaTime(This,earliestMediaTime) ( (This)->lpVtbl -> get_earliestMediaTime(This,earliestMediaTime) )
#define ITIMEMediaElement2_get_latestMediaTime(This,latestMediaTime) ( (This)->lpVtbl -> get_latestMediaTime(This,latestMediaTime) )
#define ITIMEMediaElement2_get_minBufferedMediaDur(This,minBufferedMediaDur) ( (This)->lpVtbl -> get_minBufferedMediaDur(This,minBufferedMediaDur) )
#define ITIMEMediaElement2_put_minBufferedMediaDur(This,minBufferedMediaDur) ( (This)->lpVtbl -> put_minBufferedMediaDur(This,minBufferedMediaDur) )
#define ITIMEMediaElement2_get_downloadTotal(This,downloadTotal) ( (This)->lpVtbl -> get_downloadTotal(This,downloadTotal) )
#define ITIMEMediaElement2_get_downloadCurrent(This,downloadCurrent) ( (This)->lpVtbl -> get_downloadCurrent(This,downloadCurrent) )
#define ITIMEMediaElement2_get_isStreamed(This,b) ( (This)->lpVtbl -> get_isStreamed(This,b) )
#define ITIMEMediaElement2_get_bufferingProgress(This,bufferingProgress) ( (This)->lpVtbl -> get_bufferingProgress(This,bufferingProgress) )
#define ITIMEMediaElement2_get_hasDownloadProgress(This,b) ( (This)->lpVtbl -> get_hasDownloadProgress(This,b) )
#define ITIMEMediaElement2_get_downloadProgress(This,downloadProgress) ( (This)->lpVtbl -> get_downloadProgress(This,downloadProgress) )
#define ITIMEMediaElement2_get_mimeType(This,mimeType) ( (This)->lpVtbl -> get_mimeType(This,mimeType) )
#define ITIMEMediaElement2_seekToFrame(This,frameNr) ( (This)->lpVtbl -> seekToFrame(This,frameNr) )
#define ITIMEMediaElement2_decodeMimeType(This,header,headerSize,mimeType) ( (This)->lpVtbl -> decodeMimeType(This,header,headerSize,mimeType) )
#define ITIMEMediaElement2_get_currentFrame(This,currFrame) ( (This)->lpVtbl -> get_currentFrame(This,currFrame) )
#endif
#endif
#ifndef __ITIMETransitionElement_INTERFACE_DEFINED__
#define __ITIMETransitionElement_INTERFACE_DEFINED__
extern const IID IID_ITIMETransitionElement;
typedef struct ITIMETransitionElementVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (ITIMETransitionElement * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (ITIMETransitionElement * This);
	ULONG(STDMETHODCALLTYPE * Release) (ITIMETransitionElement * This);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfoCount) (ITIMETransitionElement * This, UINT * pctinfo);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfo) (ITIMETransitionElement * This, UINT iTInfo, LCID lcid, ITypeInfo ** ppTInfo);
	HRESULT(STDMETHODCALLTYPE * GetIDsOfNames) (ITIMETransitionElement * This, REFIID riid, LPOLESTR * rgszNames, UINT cNames, LCID lcid, DISPID * rgDispId);
	HRESULT(STDMETHODCALLTYPE * Invoke) (ITIMETransitionElement * This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS * pDispParams, VARIANT * pVarResult, EXCEPINFO * pExcepInfo, UINT * puArgErr);
	HRESULT(STDMETHODCALLTYPE * get_type) (ITIMETransitionElement * This, VARIANT * type);
	HRESULT(STDMETHODCALLTYPE * put_type) (ITIMETransitionElement * This, VARIANT type);
	HRESULT(STDMETHODCALLTYPE * get_subType) (ITIMETransitionElement * This, VARIANT * subtype);
	HRESULT(STDMETHODCALLTYPE * put_subType) (ITIMETransitionElement * This, VARIANT subtype);
	HRESULT(STDMETHODCALLTYPE * get_dur) (ITIMETransitionElement * This, VARIANT * dur);
	HRESULT(STDMETHODCALLTYPE * put_dur) (ITIMETransitionElement * This, VARIANT dur);
	HRESULT(STDMETHODCALLTYPE * get_startProgress) (ITIMETransitionElement * This, VARIANT * startProgress);
	HRESULT(STDMETHODCALLTYPE * put_startProgress) (ITIMETransitionElement * This, VARIANT startProgress);
	HRESULT(STDMETHODCALLTYPE * get_endProgress) (ITIMETransitionElement * This, VARIANT * endProgress);
	HRESULT(STDMETHODCALLTYPE * put_endProgress) (ITIMETransitionElement * This, VARIANT endProgress);
	HRESULT(STDMETHODCALLTYPE * get_direction) (ITIMETransitionElement * This, VARIANT * direction);
	HRESULT(STDMETHODCALLTYPE * put_direction) (ITIMETransitionElement * This, VARIANT direction);
	HRESULT(STDMETHODCALLTYPE * get_repeatCount) (ITIMETransitionElement * This, VARIANT * repeatCount);
	HRESULT(STDMETHODCALLTYPE * put_repeatCount) (ITIMETransitionElement * This, VARIANT repeatCount);
	HRESULT(STDMETHODCALLTYPE * get_begin) (ITIMETransitionElement * This, VARIANT * begin);
	HRESULT(STDMETHODCALLTYPE * put_begin) (ITIMETransitionElement * This, VARIANT begin);
	HRESULT(STDMETHODCALLTYPE * get_end) (ITIMETransitionElement * This, VARIANT * end);
	HRESULT(STDMETHODCALLTYPE * put_end) (ITIMETransitionElement * This, VARIANT end);
	END_INTERFACE
}  ITIMETransitionElementVtbl;
interface ITIMETransitionElement
{
	CONST_VTBL struct ITIMETransitionElementVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define ITIMETransitionElement_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define ITIMETransitionElement_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define ITIMETransitionElement_Release(This) ( (This)->lpVtbl -> Release(This) )
#define ITIMETransitionElement_GetTypeInfoCount(This,pctinfo) ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define ITIMETransitionElement_GetTypeInfo(This,iTInfo,lcid,ppTInfo) ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define ITIMETransitionElement_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define ITIMETransitionElement_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define ITIMETransitionElement_get_type(This,type) ( (This)->lpVtbl -> get_type(This,type) )
#define ITIMETransitionElement_put_type(This,type) ( (This)->lpVtbl -> put_type(This,type) )
#define ITIMETransitionElement_get_subType(This,subtype) ( (This)->lpVtbl -> get_subType(This,subtype) )
#define ITIMETransitionElement_put_subType(This,subtype) ( (This)->lpVtbl -> put_subType(This,subtype) )
#define ITIMETransitionElement_get_dur(This,dur) ( (This)->lpVtbl -> get_dur(This,dur) )
#define ITIMETransitionElement_put_dur(This,dur) ( (This)->lpVtbl -> put_dur(This,dur) )
#define ITIMETransitionElement_get_startProgress(This,startProgress) ( (This)->lpVtbl -> get_startProgress(This,startProgress) )
#define ITIMETransitionElement_put_startProgress(This,startProgress) ( (This)->lpVtbl -> put_startProgress(This,startProgress) )
#define ITIMETransitionElement_get_endProgress(This,endProgress) ( (This)->lpVtbl -> get_endProgress(This,endProgress) )
#define ITIMETransitionElement_put_endProgress(This,endProgress) ( (This)->lpVtbl -> put_endProgress(This,endProgress) )
#define ITIMETransitionElement_get_direction(This,direction) ( (This)->lpVtbl -> get_direction(This,direction) )
#define ITIMETransitionElement_put_direction(This,direction) ( (This)->lpVtbl -> put_direction(This,direction) )
#define ITIMETransitionElement_get_repeatCount(This,repeatCount) ( (This)->lpVtbl -> get_repeatCount(This,repeatCount) )
#define ITIMETransitionElement_put_repeatCount(This,repeatCount) ( (This)->lpVtbl -> put_repeatCount(This,repeatCount) )
#define ITIMETransitionElement_get_begin(This,begin) ( (This)->lpVtbl -> get_begin(This,begin) )
#define ITIMETransitionElement_put_begin(This,begin) ( (This)->lpVtbl -> put_begin(This,begin) )
#define ITIMETransitionElement_get_end(This,end) ( (This)->lpVtbl -> get_end(This,end) )
#define ITIMETransitionElement_put_end(This,end) ( (This)->lpVtbl -> put_end(This,end) )
#endif
#endif
#ifndef __ITIMEAnimationElement_INTERFACE_DEFINED__
#define __ITIMEAnimationElement_INTERFACE_DEFINED__
extern const IID IID_ITIMEAnimationElement;
typedef struct ITIMEAnimationElementVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (ITIMEAnimationElement * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (ITIMEAnimationElement * This);
	ULONG(STDMETHODCALLTYPE * Release) (ITIMEAnimationElement * This);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfoCount) (ITIMEAnimationElement * This, UINT * pctinfo);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfo) (ITIMEAnimationElement * This, UINT iTInfo, LCID lcid, ITypeInfo ** ppTInfo);
	HRESULT(STDMETHODCALLTYPE * GetIDsOfNames) (ITIMEAnimationElement * This, REFIID riid, LPOLESTR * rgszNames, UINT cNames, LCID lcid, DISPID * rgDispId);
	HRESULT(STDMETHODCALLTYPE * Invoke) (ITIMEAnimationElement * This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS * pDispParams, VARIANT * pVarResult, EXCEPINFO * pExcepInfo, UINT * puArgErr);
	HRESULT(STDMETHODCALLTYPE * get_accelerate) (ITIMEAnimationElement * This, VARIANT * __MIDL__ITIMEElement0000);
	HRESULT(STDMETHODCALLTYPE * put_accelerate) (ITIMEAnimationElement * This, VARIANT __MIDL__ITIMEElement0001);
	HRESULT(STDMETHODCALLTYPE * get_autoReverse) (ITIMEAnimationElement * This, VARIANT * __MIDL__ITIMEElement0002);
	HRESULT(STDMETHODCALLTYPE * put_autoReverse) (ITIMEAnimationElement * This, VARIANT __MIDL__ITIMEElement0003);
	HRESULT(STDMETHODCALLTYPE * get_begin) (ITIMEAnimationElement * This, VARIANT * time);
	HRESULT(STDMETHODCALLTYPE * put_begin) (ITIMEAnimationElement * This, VARIANT time);
	HRESULT(STDMETHODCALLTYPE * get_decelerate) (ITIMEAnimationElement * This, VARIANT * __MIDL__ITIMEElement0004);
	HRESULT(STDMETHODCALLTYPE * put_decelerate) (ITIMEAnimationElement * This, VARIANT __MIDL__ITIMEElement0005);
	HRESULT(STDMETHODCALLTYPE * get_dur) (ITIMEAnimationElement * This, VARIANT * time);
	HRESULT(STDMETHODCALLTYPE * put_dur) (ITIMEAnimationElement * This, VARIANT time);
	HRESULT(STDMETHODCALLTYPE * get_end) (ITIMEAnimationElement * This, VARIANT * time);
	HRESULT(STDMETHODCALLTYPE * put_end) (ITIMEAnimationElement * This, VARIANT time);
	HRESULT(STDMETHODCALLTYPE * get_fill) (ITIMEAnimationElement * This, BSTR * f);
	HRESULT(STDMETHODCALLTYPE * put_fill) (ITIMEAnimationElement * This, BSTR f);
	HRESULT(STDMETHODCALLTYPE * get_mute) (ITIMEAnimationElement * This, VARIANT * b);
	HRESULT(STDMETHODCALLTYPE * put_mute) (ITIMEAnimationElement * This, VARIANT b);
	HRESULT(STDMETHODCALLTYPE * get_repeatCount) (ITIMEAnimationElement * This, VARIANT * c);
	HRESULT(STDMETHODCALLTYPE * put_repeatCount) (ITIMEAnimationElement * This, VARIANT c);
	HRESULT(STDMETHODCALLTYPE * get_repeatDur) (ITIMEAnimationElement * This, VARIANT * time);
	HRESULT(STDMETHODCALLTYPE * put_repeatDur) (ITIMEAnimationElement * This, VARIANT time);
	HRESULT(STDMETHODCALLTYPE * get_restart) (ITIMEAnimationElement * This, BSTR * __MIDL__ITIMEElement0006);
	HRESULT(STDMETHODCALLTYPE * put_restart) (ITIMEAnimationElement * This, BSTR __MIDL__ITIMEElement0007);
	HRESULT(STDMETHODCALLTYPE * get_speed) (ITIMEAnimationElement * This, VARIANT * speed);
	HRESULT(STDMETHODCALLTYPE * put_speed) (ITIMEAnimationElement * This, VARIANT speed);
	HRESULT(STDMETHODCALLTYPE * get_syncBehavior) (ITIMEAnimationElement * This, BSTR * sync);
	HRESULT(STDMETHODCALLTYPE * put_syncBehavior) (ITIMEAnimationElement * This, BSTR sync);
	HRESULT(STDMETHODCALLTYPE * get_syncTolerance) (ITIMEAnimationElement * This, VARIANT * tol);
	HRESULT(STDMETHODCALLTYPE * put_syncTolerance) (ITIMEAnimationElement * This, VARIANT tol);
	HRESULT(STDMETHODCALLTYPE * get_syncMaster) (ITIMEAnimationElement * This, VARIANT * b);
	HRESULT(STDMETHODCALLTYPE * put_syncMaster) (ITIMEAnimationElement * This, VARIANT b);
	HRESULT(STDMETHODCALLTYPE * get_timeAction) (ITIMEAnimationElement * This, BSTR * time);
	HRESULT(STDMETHODCALLTYPE * put_timeAction) (ITIMEAnimationElement * This, BSTR time);
	HRESULT(STDMETHODCALLTYPE * get_timeContainer) (ITIMEAnimationElement * This, BSTR * __MIDL__ITIMEElement0008);
	HRESULT(STDMETHODCALLTYPE * get_volume) (ITIMEAnimationElement * This, VARIANT * val);
	HRESULT(STDMETHODCALLTYPE * put_volume) (ITIMEAnimationElement * This, VARIANT val);
	HRESULT(STDMETHODCALLTYPE * get_currTimeState) (ITIMEAnimationElement * This, ITIMEState ** TimeState);
	HRESULT(STDMETHODCALLTYPE * get_timeAll) (ITIMEAnimationElement * This, ITIMEElementCollection ** allColl);
	HRESULT(STDMETHODCALLTYPE * get_timeChildren) (ITIMEAnimationElement * This, ITIMEElementCollection ** childColl);
	HRESULT(STDMETHODCALLTYPE * get_timeParent) (ITIMEAnimationElement * This, ITIMEElement ** parent);
	HRESULT(STDMETHODCALLTYPE * get_isPaused) (ITIMEAnimationElement * This, VARIANT_BOOL * b);
	HRESULT(STDMETHODCALLTYPE * beginElement) (ITIMEAnimationElement * This);
	HRESULT(STDMETHODCALLTYPE * beginElementAt) (ITIMEAnimationElement * This, double parentTime);
	HRESULT(STDMETHODCALLTYPE * endElement) (ITIMEAnimationElement * This);
	HRESULT(STDMETHODCALLTYPE * endElementAt) (ITIMEAnimationElement * This, double parentTime);
	HRESULT(STDMETHODCALLTYPE * pauseElement) (ITIMEAnimationElement * This);
	HRESULT(STDMETHODCALLTYPE * resetElement) (ITIMEAnimationElement * This);
	HRESULT(STDMETHODCALLTYPE * resumeElement) (ITIMEAnimationElement * This);
	HRESULT(STDMETHODCALLTYPE * seekActiveTime) (ITIMEAnimationElement * This, double activeTime);
	HRESULT(STDMETHODCALLTYPE * seekSegmentTime) (ITIMEAnimationElement * This, double segmentTime);
	HRESULT(STDMETHODCALLTYPE * seekTo) (ITIMEAnimationElement * This, LONG repeatCount, double segmentTime);
	HRESULT(STDMETHODCALLTYPE * documentTimeToParentTime) (ITIMEAnimationElement * This, double documentTime, double *parentTime);
	HRESULT(STDMETHODCALLTYPE * parentTimeToDocumentTime) (ITIMEAnimationElement * This, double parentTime, double *documentTime);
	HRESULT(STDMETHODCALLTYPE * parentTimeToActiveTime) (ITIMEAnimationElement * This, double parentTime, double *activeTime);
	HRESULT(STDMETHODCALLTYPE * activeTimeToParentTime) (ITIMEAnimationElement * This, double activeTime, double *parentTime);
	HRESULT(STDMETHODCALLTYPE * activeTimeToSegmentTime) (ITIMEAnimationElement * This, double activeTime, double *segmentTime);
	HRESULT(STDMETHODCALLTYPE * segmentTimeToActiveTime) (ITIMEAnimationElement * This, double segmentTime, double *activeTime);
	HRESULT(STDMETHODCALLTYPE * segmentTimeToSimpleTime) (ITIMEAnimationElement * This, double segmentTime, double *simpleTime);
	HRESULT(STDMETHODCALLTYPE * simpleTimeToSegmentTime) (ITIMEAnimationElement * This, double simpleTime, double *segmentTime);
	HRESULT(STDMETHODCALLTYPE * get_endSync) (ITIMEAnimationElement * This, BSTR * es);
	HRESULT(STDMETHODCALLTYPE * put_endSync) (ITIMEAnimationElement * This, BSTR es);
	HRESULT(STDMETHODCALLTYPE * get_activeElements) (ITIMEAnimationElement * This, ITIMEActiveElementCollection ** activeColl);
	HRESULT(STDMETHODCALLTYPE * get_hasMedia) (ITIMEAnimationElement * This, VARIANT_BOOL * flag);
	HRESULT(STDMETHODCALLTYPE * nextElement) (ITIMEAnimationElement * This);
	HRESULT(STDMETHODCALLTYPE * prevElement) (ITIMEAnimationElement * This);
	HRESULT(STDMETHODCALLTYPE * get_updateMode) (ITIMEAnimationElement * This, BSTR * updateMode);
	HRESULT(STDMETHODCALLTYPE * put_updateMode) (ITIMEAnimationElement * This, BSTR updateMode);
	HRESULT(STDMETHODCALLTYPE * get_attributeName) (ITIMEAnimationElement * This, BSTR * attrib);
	HRESULT(STDMETHODCALLTYPE * put_attributeName) (ITIMEAnimationElement * This, BSTR attrib);
	HRESULT(STDMETHODCALLTYPE * get_by) (ITIMEAnimationElement * This, VARIANT * val);
	HRESULT(STDMETHODCALLTYPE * put_by) (ITIMEAnimationElement * This, VARIANT val);
	HRESULT(STDMETHODCALLTYPE * get_calcMode) (ITIMEAnimationElement * This, BSTR * calcmode);
	HRESULT(STDMETHODCALLTYPE * put_calcMode) (ITIMEAnimationElement * This, BSTR calcmode);
	HRESULT(STDMETHODCALLTYPE * get_from) (ITIMEAnimationElement * This, VARIANT * val);
	HRESULT(STDMETHODCALLTYPE * put_from) (ITIMEAnimationElement * This, VARIANT val);
	HRESULT(STDMETHODCALLTYPE * get_keySplines) (ITIMEAnimationElement * This, BSTR * val);
	HRESULT(STDMETHODCALLTYPE * put_keySplines) (ITIMEAnimationElement * This, BSTR val);
	HRESULT(STDMETHODCALLTYPE * get_keyTimes) (ITIMEAnimationElement * This, BSTR * val);
	HRESULT(STDMETHODCALLTYPE * put_keyTimes) (ITIMEAnimationElement * This, BSTR val);
	HRESULT(STDMETHODCALLTYPE * get_targetElement) (ITIMEAnimationElement * This, BSTR * target);
	HRESULT(STDMETHODCALLTYPE * put_targetElement) (ITIMEAnimationElement * This, BSTR target);
	HRESULT(STDMETHODCALLTYPE * get_to) (ITIMEAnimationElement * This, VARIANT * val);
	HRESULT(STDMETHODCALLTYPE * put_to) (ITIMEAnimationElement * This, VARIANT val);
	HRESULT(STDMETHODCALLTYPE * get_values) (ITIMEAnimationElement * This, VARIANT * val);
	HRESULT(STDMETHODCALLTYPE * put_values) (ITIMEAnimationElement * This, VARIANT val);
	HRESULT(STDMETHODCALLTYPE * get_origin) (ITIMEAnimationElement * This, BSTR * val);
	HRESULT(STDMETHODCALLTYPE * put_origin) (ITIMEAnimationElement * This, BSTR val);
	HRESULT(STDMETHODCALLTYPE * get_path) (ITIMEAnimationElement * This, VARIANT * val);
	HRESULT(STDMETHODCALLTYPE * put_path) (ITIMEAnimationElement * This, VARIANT val);
	HRESULT(STDMETHODCALLTYPE * get_additive) (ITIMEAnimationElement * This, BSTR * val);
	HRESULT(STDMETHODCALLTYPE * put_additive) (ITIMEAnimationElement * This, BSTR val);
	HRESULT(STDMETHODCALLTYPE * get_accumulate) (ITIMEAnimationElement * This, BSTR * val);
	HRESULT(STDMETHODCALLTYPE * put_accumulate) (ITIMEAnimationElement * This, BSTR val);
	END_INTERFACE
}  ITIMEAnimationElementVtbl;
interface ITIMEAnimationElement
{
	CONST_VTBL struct ITIMEAnimationElementVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define ITIMEAnimationElement_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define ITIMEAnimationElement_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define ITIMEAnimationElement_Release(This) ( (This)->lpVtbl -> Release(This) )
#define ITIMEAnimationElement_GetTypeInfoCount(This,pctinfo) ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define ITIMEAnimationElement_GetTypeInfo(This,iTInfo,lcid,ppTInfo) ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define ITIMEAnimationElement_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define ITIMEAnimationElement_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define ITIMEAnimationElement_get_accelerate(This,__MIDL__ITIMEElement0000) ( (This)->lpVtbl -> get_accelerate(This,__MIDL__ITIMEElement0000) )
#define ITIMEAnimationElement_put_accelerate(This,__MIDL__ITIMEElement0001) ( (This)->lpVtbl -> put_accelerate(This,__MIDL__ITIMEElement0001) )
#define ITIMEAnimationElement_get_autoReverse(This,__MIDL__ITIMEElement0002) ( (This)->lpVtbl -> get_autoReverse(This,__MIDL__ITIMEElement0002) )
#define ITIMEAnimationElement_put_autoReverse(This,__MIDL__ITIMEElement0003) ( (This)->lpVtbl -> put_autoReverse(This,__MIDL__ITIMEElement0003) )
#define ITIMEAnimationElement_get_begin(This,time) ( (This)->lpVtbl -> get_begin(This,time) )
#define ITIMEAnimationElement_put_begin(This,time) ( (This)->lpVtbl -> put_begin(This,time) )
#define ITIMEAnimationElement_get_decelerate(This,__MIDL__ITIMEElement0004) ( (This)->lpVtbl -> get_decelerate(This,__MIDL__ITIMEElement0004) )
#define ITIMEAnimationElement_put_decelerate(This,__MIDL__ITIMEElement0005) ( (This)->lpVtbl -> put_decelerate(This,__MIDL__ITIMEElement0005) )
#define ITIMEAnimationElement_get_dur(This,time) ( (This)->lpVtbl -> get_dur(This,time) )
#define ITIMEAnimationElement_put_dur(This,time) ( (This)->lpVtbl -> put_dur(This,time) )
#define ITIMEAnimationElement_get_end(This,time) ( (This)->lpVtbl -> get_end(This,time) )
#define ITIMEAnimationElement_put_end(This,time) ( (This)->lpVtbl -> put_end(This,time) )
#define ITIMEAnimationElement_get_fill(This,f) ( (This)->lpVtbl -> get_fill(This,f) )
#define ITIMEAnimationElement_put_fill(This,f) ( (This)->lpVtbl -> put_fill(This,f) )
#define ITIMEAnimationElement_get_mute(This,b) ( (This)->lpVtbl -> get_mute(This,b) )
#define ITIMEAnimationElement_put_mute(This,b) ( (This)->lpVtbl -> put_mute(This,b) )
#define ITIMEAnimationElement_get_repeatCount(This,c) ( (This)->lpVtbl -> get_repeatCount(This,c) )
#define ITIMEAnimationElement_put_repeatCount(This,c) ( (This)->lpVtbl -> put_repeatCount(This,c) )
#define ITIMEAnimationElement_get_repeatDur(This,time) ( (This)->lpVtbl -> get_repeatDur(This,time) )
#define ITIMEAnimationElement_put_repeatDur(This,time) ( (This)->lpVtbl -> put_repeatDur(This,time) )
#define ITIMEAnimationElement_get_restart(This,__MIDL__ITIMEElement0006) ( (This)->lpVtbl -> get_restart(This,__MIDL__ITIMEElement0006) )
#define ITIMEAnimationElement_put_restart(This,__MIDL__ITIMEElement0007) ( (This)->lpVtbl -> put_restart(This,__MIDL__ITIMEElement0007) )
#define ITIMEAnimationElement_get_speed(This,speed) ( (This)->lpVtbl -> get_speed(This,speed) )
#define ITIMEAnimationElement_put_speed(This,speed) ( (This)->lpVtbl -> put_speed(This,speed) )
#define ITIMEAnimationElement_get_syncBehavior(This,sync) ( (This)->lpVtbl -> get_syncBehavior(This,sync) )
#define ITIMEAnimationElement_put_syncBehavior(This,sync) ( (This)->lpVtbl -> put_syncBehavior(This,sync) )
#define ITIMEAnimationElement_get_syncTolerance(This,tol) ( (This)->lpVtbl -> get_syncTolerance(This,tol) )
#define ITIMEAnimationElement_put_syncTolerance(This,tol) ( (This)->lpVtbl -> put_syncTolerance(This,tol) )
#define ITIMEAnimationElement_get_syncMaster(This,b) ( (This)->lpVtbl -> get_syncMaster(This,b) )
#define ITIMEAnimationElement_put_syncMaster(This,b) ( (This)->lpVtbl -> put_syncMaster(This,b) )
#define ITIMEAnimationElement_get_timeAction(This,time) ( (This)->lpVtbl -> get_timeAction(This,time) )
#define ITIMEAnimationElement_put_timeAction(This,time) ( (This)->lpVtbl -> put_timeAction(This,time) )
#define ITIMEAnimationElement_get_timeContainer(This,__MIDL__ITIMEElement0008) ( (This)->lpVtbl -> get_timeContainer(This,__MIDL__ITIMEElement0008) )
#define ITIMEAnimationElement_get_volume(This,val) ( (This)->lpVtbl -> get_volume(This,val) )
#define ITIMEAnimationElement_put_volume(This,val) ( (This)->lpVtbl -> put_volume(This,val) )
#define ITIMEAnimationElement_get_currTimeState(This,TimeState) ( (This)->lpVtbl -> get_currTimeState(This,TimeState) )
#define ITIMEAnimationElement_get_timeAll(This,allColl) ( (This)->lpVtbl -> get_timeAll(This,allColl) )
#define ITIMEAnimationElement_get_timeChildren(This,childColl) ( (This)->lpVtbl -> get_timeChildren(This,childColl) )
#define ITIMEAnimationElement_get_timeParent(This,parent) ( (This)->lpVtbl -> get_timeParent(This,parent) )
#define ITIMEAnimationElement_get_isPaused(This,b) ( (This)->lpVtbl -> get_isPaused(This,b) )
#define ITIMEAnimationElement_beginElement(This) ( (This)->lpVtbl -> beginElement(This) )
#define ITIMEAnimationElement_beginElementAt(This,parentTime) ( (This)->lpVtbl -> beginElementAt(This,parentTime) )
#define ITIMEAnimationElement_endElement(This) ( (This)->lpVtbl -> endElement(This) )
#define ITIMEAnimationElement_endElementAt(This,parentTime) ( (This)->lpVtbl -> endElementAt(This,parentTime) )
#define ITIMEAnimationElement_pauseElement(This) ( (This)->lpVtbl -> pauseElement(This) )
#define ITIMEAnimationElement_resetElement(This) ( (This)->lpVtbl -> resetElement(This) )
#define ITIMEAnimationElement_resumeElement(This) ( (This)->lpVtbl -> resumeElement(This) )
#define ITIMEAnimationElement_seekActiveTime(This,activeTime) ( (This)->lpVtbl -> seekActiveTime(This,activeTime) )
#define ITIMEAnimationElement_seekSegmentTime(This,segmentTime) ( (This)->lpVtbl -> seekSegmentTime(This,segmentTime) )
#define ITIMEAnimationElement_seekTo(This,repeatCount,segmentTime) ( (This)->lpVtbl -> seekTo(This,repeatCount,segmentTime) )
#define ITIMEAnimationElement_documentTimeToParentTime(This,documentTime,parentTime) ( (This)->lpVtbl -> documentTimeToParentTime(This,documentTime,parentTime) )
#define ITIMEAnimationElement_parentTimeToDocumentTime(This,parentTime,documentTime) ( (This)->lpVtbl -> parentTimeToDocumentTime(This,parentTime,documentTime) )
#define ITIMEAnimationElement_parentTimeToActiveTime(This,parentTime,activeTime) ( (This)->lpVtbl -> parentTimeToActiveTime(This,parentTime,activeTime) )
#define ITIMEAnimationElement_activeTimeToParentTime(This,activeTime,parentTime) ( (This)->lpVtbl -> activeTimeToParentTime(This,activeTime,parentTime) )
#define ITIMEAnimationElement_activeTimeToSegmentTime(This,activeTime,segmentTime) ( (This)->lpVtbl -> activeTimeToSegmentTime(This,activeTime,segmentTime) )
#define ITIMEAnimationElement_segmentTimeToActiveTime(This,segmentTime,activeTime) ( (This)->lpVtbl -> segmentTimeToActiveTime(This,segmentTime,activeTime) )
#define ITIMEAnimationElement_segmentTimeToSimpleTime(This,segmentTime,simpleTime) ( (This)->lpVtbl -> segmentTimeToSimpleTime(This,segmentTime,simpleTime) )
#define ITIMEAnimationElement_simpleTimeToSegmentTime(This,simpleTime,segmentTime) ( (This)->lpVtbl -> simpleTimeToSegmentTime(This,simpleTime,segmentTime) )
#define ITIMEAnimationElement_get_endSync(This,es) ( (This)->lpVtbl -> get_endSync(This,es) )
#define ITIMEAnimationElement_put_endSync(This,es) ( (This)->lpVtbl -> put_endSync(This,es) )
#define ITIMEAnimationElement_get_activeElements(This,activeColl) ( (This)->lpVtbl -> get_activeElements(This,activeColl) )
#define ITIMEAnimationElement_get_hasMedia(This,flag) ( (This)->lpVtbl -> get_hasMedia(This,flag) )
#define ITIMEAnimationElement_nextElement(This) ( (This)->lpVtbl -> nextElement(This) )
#define ITIMEAnimationElement_prevElement(This) ( (This)->lpVtbl -> prevElement(This) )
#define ITIMEAnimationElement_get_updateMode(This,updateMode) ( (This)->lpVtbl -> get_updateMode(This,updateMode) )
#define ITIMEAnimationElement_put_updateMode(This,updateMode) ( (This)->lpVtbl -> put_updateMode(This,updateMode) )
#define ITIMEAnimationElement_get_attributeName(This,attrib) ( (This)->lpVtbl -> get_attributeName(This,attrib) )
#define ITIMEAnimationElement_put_attributeName(This,attrib) ( (This)->lpVtbl -> put_attributeName(This,attrib) )
#define ITIMEAnimationElement_get_by(This,val) ( (This)->lpVtbl -> get_by(This,val) )
#define ITIMEAnimationElement_put_by(This,val) ( (This)->lpVtbl -> put_by(This,val) )
#define ITIMEAnimationElement_get_calcMode(This,calcmode) ( (This)->lpVtbl -> get_calcMode(This,calcmode) )
#define ITIMEAnimationElement_put_calcMode(This,calcmode) ( (This)->lpVtbl -> put_calcMode(This,calcmode) )
#define ITIMEAnimationElement_get_from(This,val) ( (This)->lpVtbl -> get_from(This,val) )
#define ITIMEAnimationElement_put_from(This,val) ( (This)->lpVtbl -> put_from(This,val) )
#define ITIMEAnimationElement_get_keySplines(This,val) ( (This)->lpVtbl -> get_keySplines(This,val) )
#define ITIMEAnimationElement_put_keySplines(This,val) ( (This)->lpVtbl -> put_keySplines(This,val) )
#define ITIMEAnimationElement_get_keyTimes(This,val) ( (This)->lpVtbl -> get_keyTimes(This,val) )
#define ITIMEAnimationElement_put_keyTimes(This,val) ( (This)->lpVtbl -> put_keyTimes(This,val) )
#define ITIMEAnimationElement_get_targetElement(This,target) ( (This)->lpVtbl -> get_targetElement(This,target) )
#define ITIMEAnimationElement_put_targetElement(This,target) ( (This)->lpVtbl -> put_targetElement(This,target) )
#define ITIMEAnimationElement_get_to(This,val) ( (This)->lpVtbl -> get_to(This,val) )
#define ITIMEAnimationElement_put_to(This,val) ( (This)->lpVtbl -> put_to(This,val) )
#define ITIMEAnimationElement_get_values(This,val) ( (This)->lpVtbl -> get_values(This,val) )
#define ITIMEAnimationElement_put_values(This,val) ( (This)->lpVtbl -> put_values(This,val) )
#define ITIMEAnimationElement_get_origin(This,val) ( (This)->lpVtbl -> get_origin(This,val) )
#define ITIMEAnimationElement_put_origin(This,val) ( (This)->lpVtbl -> put_origin(This,val) )
#define ITIMEAnimationElement_get_path(This,val) ( (This)->lpVtbl -> get_path(This,val) )
#define ITIMEAnimationElement_put_path(This,val) ( (This)->lpVtbl -> put_path(This,val) )
#define ITIMEAnimationElement_get_additive(This,val) ( (This)->lpVtbl -> get_additive(This,val) )
#define ITIMEAnimationElement_put_additive(This,val) ( (This)->lpVtbl -> put_additive(This,val) )
#define ITIMEAnimationElement_get_accumulate(This,val) ( (This)->lpVtbl -> get_accumulate(This,val) )
#define ITIMEAnimationElement_put_accumulate(This,val) ( (This)->lpVtbl -> put_accumulate(This,val) )
#endif
#endif
#ifndef __ITIMEAnimationElement2_INTERFACE_DEFINED__
#define __ITIMEAnimationElement2_INTERFACE_DEFINED__
extern const IID IID_ITIMEAnimationElement2;
typedef struct ITIMEAnimationElement2Vtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (ITIMEAnimationElement2 * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (ITIMEAnimationElement2 * This);
	ULONG(STDMETHODCALLTYPE * Release) (ITIMEAnimationElement2 * This);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfoCount) (ITIMEAnimationElement2 * This, UINT * pctinfo);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfo) (ITIMEAnimationElement2 * This, UINT iTInfo, LCID lcid, ITypeInfo ** ppTInfo);
	HRESULT(STDMETHODCALLTYPE * GetIDsOfNames) (ITIMEAnimationElement2 * This, REFIID riid, LPOLESTR * rgszNames, UINT cNames, LCID lcid, DISPID * rgDispId);
	HRESULT(STDMETHODCALLTYPE * Invoke) (ITIMEAnimationElement2 * This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS * pDispParams, VARIANT * pVarResult, EXCEPINFO * pExcepInfo, UINT * puArgErr);
	HRESULT(STDMETHODCALLTYPE * get_accelerate) (ITIMEAnimationElement2 * This, VARIANT * __MIDL__ITIMEElement0000);
	HRESULT(STDMETHODCALLTYPE * put_accelerate) (ITIMEAnimationElement2 * This, VARIANT __MIDL__ITIMEElement0001);
	HRESULT(STDMETHODCALLTYPE * get_autoReverse) (ITIMEAnimationElement2 * This, VARIANT * __MIDL__ITIMEElement0002);
	HRESULT(STDMETHODCALLTYPE * put_autoReverse) (ITIMEAnimationElement2 * This, VARIANT __MIDL__ITIMEElement0003);
	HRESULT(STDMETHODCALLTYPE * get_begin) (ITIMEAnimationElement2 * This, VARIANT * time);
	HRESULT(STDMETHODCALLTYPE * put_begin) (ITIMEAnimationElement2 * This, VARIANT time);
	HRESULT(STDMETHODCALLTYPE * get_decelerate) (ITIMEAnimationElement2 * This, VARIANT * __MIDL__ITIMEElement0004);
	HRESULT(STDMETHODCALLTYPE * put_decelerate) (ITIMEAnimationElement2 * This, VARIANT __MIDL__ITIMEElement0005);
	HRESULT(STDMETHODCALLTYPE * get_dur) (ITIMEAnimationElement2 * This, VARIANT * time);
	HRESULT(STDMETHODCALLTYPE * put_dur) (ITIMEAnimationElement2 * This, VARIANT time);
	HRESULT(STDMETHODCALLTYPE * get_end) (ITIMEAnimationElement2 * This, VARIANT * time);
	HRESULT(STDMETHODCALLTYPE * put_end) (ITIMEAnimationElement2 * This, VARIANT time);
	HRESULT(STDMETHODCALLTYPE * get_fill) (ITIMEAnimationElement2 * This, BSTR * f);
	HRESULT(STDMETHODCALLTYPE * put_fill) (ITIMEAnimationElement2 * This, BSTR f);
	HRESULT(STDMETHODCALLTYPE * get_mute) (ITIMEAnimationElement2 * This, VARIANT * b);
	HRESULT(STDMETHODCALLTYPE * put_mute) (ITIMEAnimationElement2 * This, VARIANT b);
	HRESULT(STDMETHODCALLTYPE * get_repeatCount) (ITIMEAnimationElement2 * This, VARIANT * c);
	HRESULT(STDMETHODCALLTYPE * put_repeatCount) (ITIMEAnimationElement2 * This, VARIANT c);
	HRESULT(STDMETHODCALLTYPE * get_repeatDur) (ITIMEAnimationElement2 * This, VARIANT * time);
	HRESULT(STDMETHODCALLTYPE * put_repeatDur) (ITIMEAnimationElement2 * This, VARIANT time);
	HRESULT(STDMETHODCALLTYPE * get_restart) (ITIMEAnimationElement2 * This, BSTR * __MIDL__ITIMEElement0006);
	HRESULT(STDMETHODCALLTYPE * put_restart) (ITIMEAnimationElement2 * This, BSTR __MIDL__ITIMEElement0007);
	HRESULT(STDMETHODCALLTYPE * get_speed) (ITIMEAnimationElement2 * This, VARIANT * speed);
	HRESULT(STDMETHODCALLTYPE * put_speed) (ITIMEAnimationElement2 * This, VARIANT speed);
	HRESULT(STDMETHODCALLTYPE * get_syncBehavior) (ITIMEAnimationElement2 * This, BSTR * sync);
	HRESULT(STDMETHODCALLTYPE * put_syncBehavior) (ITIMEAnimationElement2 * This, BSTR sync);
	HRESULT(STDMETHODCALLTYPE * get_syncTolerance) (ITIMEAnimationElement2 * This, VARIANT * tol);
	HRESULT(STDMETHODCALLTYPE * put_syncTolerance) (ITIMEAnimationElement2 * This, VARIANT tol);
	HRESULT(STDMETHODCALLTYPE * get_syncMaster) (ITIMEAnimationElement2 * This, VARIANT * b);
	HRESULT(STDMETHODCALLTYPE * put_syncMaster) (ITIMEAnimationElement2 * This, VARIANT b);
	HRESULT(STDMETHODCALLTYPE * get_timeAction) (ITIMEAnimationElement2 * This, BSTR * time);
	HRESULT(STDMETHODCALLTYPE * put_timeAction) (ITIMEAnimationElement2 * This, BSTR time);
	HRESULT(STDMETHODCALLTYPE * get_timeContainer) (ITIMEAnimationElement2 * This, BSTR * __MIDL__ITIMEElement0008);
	HRESULT(STDMETHODCALLTYPE * get_volume) (ITIMEAnimationElement2 * This, VARIANT * val);
	HRESULT(STDMETHODCALLTYPE * put_volume) (ITIMEAnimationElement2 * This, VARIANT val);
	HRESULT(STDMETHODCALLTYPE * get_currTimeState) (ITIMEAnimationElement2 * This, ITIMEState ** TimeState);
	HRESULT(STDMETHODCALLTYPE * get_timeAll) (ITIMEAnimationElement2 * This, ITIMEElementCollection ** allColl);
	HRESULT(STDMETHODCALLTYPE * get_timeChildren) (ITIMEAnimationElement2 * This, ITIMEElementCollection ** childColl);
	HRESULT(STDMETHODCALLTYPE * get_timeParent) (ITIMEAnimationElement2 * This, ITIMEElement ** parent);
	HRESULT(STDMETHODCALLTYPE * get_isPaused) (ITIMEAnimationElement2 * This, VARIANT_BOOL * b);
	HRESULT(STDMETHODCALLTYPE * beginElement) (ITIMEAnimationElement2 * This);
	HRESULT(STDMETHODCALLTYPE * beginElementAt) (ITIMEAnimationElement2 * This, double parentTime);
	HRESULT(STDMETHODCALLTYPE * endElement) (ITIMEAnimationElement2 * This);
	HRESULT(STDMETHODCALLTYPE * endElementAt) (ITIMEAnimationElement2 * This, double parentTime);
	HRESULT(STDMETHODCALLTYPE * pauseElement) (ITIMEAnimationElement2 * This);
	HRESULT(STDMETHODCALLTYPE * resetElement) (ITIMEAnimationElement2 * This);
	HRESULT(STDMETHODCALLTYPE * resumeElement) (ITIMEAnimationElement2 * This);
	HRESULT(STDMETHODCALLTYPE * seekActiveTime) (ITIMEAnimationElement2 * This, double activeTime);
	HRESULT(STDMETHODCALLTYPE * seekSegmentTime) (ITIMEAnimationElement2 * This, double segmentTime);
	HRESULT(STDMETHODCALLTYPE * seekTo) (ITIMEAnimationElement2 * This, LONG repeatCount, double segmentTime);
	HRESULT(STDMETHODCALLTYPE * documentTimeToParentTime) (ITIMEAnimationElement2 * This, double documentTime, double *parentTime);
	HRESULT(STDMETHODCALLTYPE * parentTimeToDocumentTime) (ITIMEAnimationElement2 * This, double parentTime, double *documentTime);
	HRESULT(STDMETHODCALLTYPE * parentTimeToActiveTime) (ITIMEAnimationElement2 * This, double parentTime, double *activeTime);
	HRESULT(STDMETHODCALLTYPE * activeTimeToParentTime) (ITIMEAnimationElement2 * This, double activeTime, double *parentTime);
	HRESULT(STDMETHODCALLTYPE * activeTimeToSegmentTime) (ITIMEAnimationElement2 * This, double activeTime, double *segmentTime);
	HRESULT(STDMETHODCALLTYPE * segmentTimeToActiveTime) (ITIMEAnimationElement2 * This, double segmentTime, double *activeTime);
	HRESULT(STDMETHODCALLTYPE * segmentTimeToSimpleTime) (ITIMEAnimationElement2 * This, double segmentTime, double *simpleTime);
	HRESULT(STDMETHODCALLTYPE * simpleTimeToSegmentTime) (ITIMEAnimationElement2 * This, double simpleTime, double *segmentTime);
	HRESULT(STDMETHODCALLTYPE * get_endSync) (ITIMEAnimationElement2 * This, BSTR * es);
	HRESULT(STDMETHODCALLTYPE * put_endSync) (ITIMEAnimationElement2 * This, BSTR es);
	HRESULT(STDMETHODCALLTYPE * get_activeElements) (ITIMEAnimationElement2 * This, ITIMEActiveElementCollection ** activeColl);
	HRESULT(STDMETHODCALLTYPE * get_hasMedia) (ITIMEAnimationElement2 * This, VARIANT_BOOL * flag);
	HRESULT(STDMETHODCALLTYPE * nextElement) (ITIMEAnimationElement2 * This);
	HRESULT(STDMETHODCALLTYPE * prevElement) (ITIMEAnimationElement2 * This);
	HRESULT(STDMETHODCALLTYPE * get_updateMode) (ITIMEAnimationElement2 * This, BSTR * updateMode);
	HRESULT(STDMETHODCALLTYPE * put_updateMode) (ITIMEAnimationElement2 * This, BSTR updateMode);
	HRESULT(STDMETHODCALLTYPE * get_attributeName) (ITIMEAnimationElement2 * This, BSTR * attrib);
	HRESULT(STDMETHODCALLTYPE * put_attributeName) (ITIMEAnimationElement2 * This, BSTR attrib);
	HRESULT(STDMETHODCALLTYPE * get_by) (ITIMEAnimationElement2 * This, VARIANT * val);
	HRESULT(STDMETHODCALLTYPE * put_by) (ITIMEAnimationElement2 * This, VARIANT val);
	HRESULT(STDMETHODCALLTYPE * get_calcMode) (ITIMEAnimationElement2 * This, BSTR * calcmode);
	HRESULT(STDMETHODCALLTYPE * put_calcMode) (ITIMEAnimationElement2 * This, BSTR calcmode);
	HRESULT(STDMETHODCALLTYPE * get_from) (ITIMEAnimationElement2 * This, VARIANT * val);
	HRESULT(STDMETHODCALLTYPE * put_from) (ITIMEAnimationElement2 * This, VARIANT val);
	HRESULT(STDMETHODCALLTYPE * get_keySplines) (ITIMEAnimationElement2 * This, BSTR * val);
	HRESULT(STDMETHODCALLTYPE * put_keySplines) (ITIMEAnimationElement2 * This, BSTR val);
	HRESULT(STDMETHODCALLTYPE * get_keyTimes) (ITIMEAnimationElement2 * This, BSTR * val);
	HRESULT(STDMETHODCALLTYPE * put_keyTimes) (ITIMEAnimationElement2 * This, BSTR val);
	HRESULT(STDMETHODCALLTYPE * get_targetElement) (ITIMEAnimationElement2 * This, BSTR * target);
	HRESULT(STDMETHODCALLTYPE * put_targetElement) (ITIMEAnimationElement2 * This, BSTR target);
	HRESULT(STDMETHODCALLTYPE * get_to) (ITIMEAnimationElement2 * This, VARIANT * val);
	HRESULT(STDMETHODCALLTYPE * put_to) (ITIMEAnimationElement2 * This, VARIANT val);
	HRESULT(STDMETHODCALLTYPE * get_values) (ITIMEAnimationElement2 * This, VARIANT * val);
	HRESULT(STDMETHODCALLTYPE * put_values) (ITIMEAnimationElement2 * This, VARIANT val);
	HRESULT(STDMETHODCALLTYPE * get_origin) (ITIMEAnimationElement2 * This, BSTR * val);
	HRESULT(STDMETHODCALLTYPE * put_origin) (ITIMEAnimationElement2 * This, BSTR val);
	HRESULT(STDMETHODCALLTYPE * get_path) (ITIMEAnimationElement2 * This, VARIANT * val);
	HRESULT(STDMETHODCALLTYPE * put_path) (ITIMEAnimationElement2 * This, VARIANT val);
	HRESULT(STDMETHODCALLTYPE * get_additive) (ITIMEAnimationElement2 * This, BSTR * val);
	HRESULT(STDMETHODCALLTYPE * put_additive) (ITIMEAnimationElement2 * This, BSTR val);
	HRESULT(STDMETHODCALLTYPE * get_accumulate) (ITIMEAnimationElement2 * This, BSTR * val);
	HRESULT(STDMETHODCALLTYPE * put_accumulate) (ITIMEAnimationElement2 * This, BSTR val);
	HRESULT(STDMETHODCALLTYPE * get_type) (ITIMEAnimationElement2 * This, BSTR * val);
	HRESULT(STDMETHODCALLTYPE * put_type) (ITIMEAnimationElement2 * This, BSTR val);
	HRESULT(STDMETHODCALLTYPE * get_subType) (ITIMEAnimationElement2 * This, BSTR * val);
	HRESULT(STDMETHODCALLTYPE * put_subType) (ITIMEAnimationElement2 * This, BSTR val);
	HRESULT(STDMETHODCALLTYPE * get_mode) (ITIMEAnimationElement2 * This, BSTR * val);
	HRESULT(STDMETHODCALLTYPE * put_mode) (ITIMEAnimationElement2 * This, BSTR val);
	HRESULT(STDMETHODCALLTYPE * get_fadeColor) (ITIMEAnimationElement2 * This, BSTR * val);
	HRESULT(STDMETHODCALLTYPE * put_fadeColor) (ITIMEAnimationElement2 * This, BSTR val);
	END_INTERFACE
}  ITIMEAnimationElement2Vtbl;
interface ITIMEAnimationElement2
{
	CONST_VTBL struct ITIMEAnimationElement2Vtbl *lpVtbl;
};
#ifdef COBJMACROS
#define ITIMEAnimationElement2_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define ITIMEAnimationElement2_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define ITIMEAnimationElement2_Release(This) ( (This)->lpVtbl -> Release(This) )
#define ITIMEAnimationElement2_GetTypeInfoCount(This,pctinfo) ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define ITIMEAnimationElement2_GetTypeInfo(This,iTInfo,lcid,ppTInfo) ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define ITIMEAnimationElement2_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define ITIMEAnimationElement2_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define ITIMEAnimationElement2_get_accelerate(This,__MIDL__ITIMEElement0000) ( (This)->lpVtbl -> get_accelerate(This,__MIDL__ITIMEElement0000) )
#define ITIMEAnimationElement2_put_accelerate(This,__MIDL__ITIMEElement0001) ( (This)->lpVtbl -> put_accelerate(This,__MIDL__ITIMEElement0001) )
#define ITIMEAnimationElement2_get_autoReverse(This,__MIDL__ITIMEElement0002) ( (This)->lpVtbl -> get_autoReverse(This,__MIDL__ITIMEElement0002) )
#define ITIMEAnimationElement2_put_autoReverse(This,__MIDL__ITIMEElement0003) ( (This)->lpVtbl -> put_autoReverse(This,__MIDL__ITIMEElement0003) )
#define ITIMEAnimationElement2_get_begin(This,time) ( (This)->lpVtbl -> get_begin(This,time) )
#define ITIMEAnimationElement2_put_begin(This,time) ( (This)->lpVtbl -> put_begin(This,time) )
#define ITIMEAnimationElement2_get_decelerate(This,__MIDL__ITIMEElement0004) ( (This)->lpVtbl -> get_decelerate(This,__MIDL__ITIMEElement0004) )
#define ITIMEAnimationElement2_put_decelerate(This,__MIDL__ITIMEElement0005) ( (This)->lpVtbl -> put_decelerate(This,__MIDL__ITIMEElement0005) )
#define ITIMEAnimationElement2_get_dur(This,time) ( (This)->lpVtbl -> get_dur(This,time) )
#define ITIMEAnimationElement2_put_dur(This,time) ( (This)->lpVtbl -> put_dur(This,time) )
#define ITIMEAnimationElement2_get_end(This,time) ( (This)->lpVtbl -> get_end(This,time) )
#define ITIMEAnimationElement2_put_end(This,time) ( (This)->lpVtbl -> put_end(This,time) )
#define ITIMEAnimationElement2_get_fill(This,f) ( (This)->lpVtbl -> get_fill(This,f) )
#define ITIMEAnimationElement2_put_fill(This,f) ( (This)->lpVtbl -> put_fill(This,f) )
#define ITIMEAnimationElement2_get_mute(This,b) ( (This)->lpVtbl -> get_mute(This,b) )
#define ITIMEAnimationElement2_put_mute(This,b) ( (This)->lpVtbl -> put_mute(This,b) )
#define ITIMEAnimationElement2_get_repeatCount(This,c) ( (This)->lpVtbl -> get_repeatCount(This,c) )
#define ITIMEAnimationElement2_put_repeatCount(This,c) ( (This)->lpVtbl -> put_repeatCount(This,c) )
#define ITIMEAnimationElement2_get_repeatDur(This,time) ( (This)->lpVtbl -> get_repeatDur(This,time) )
#define ITIMEAnimationElement2_put_repeatDur(This,time) ( (This)->lpVtbl -> put_repeatDur(This,time) )
#define ITIMEAnimationElement2_get_restart(This,__MIDL__ITIMEElement0006) ( (This)->lpVtbl -> get_restart(This,__MIDL__ITIMEElement0006) )
#define ITIMEAnimationElement2_put_restart(This,__MIDL__ITIMEElement0007) ( (This)->lpVtbl -> put_restart(This,__MIDL__ITIMEElement0007) )
#define ITIMEAnimationElement2_get_speed(This,speed) ( (This)->lpVtbl -> get_speed(This,speed) )
#define ITIMEAnimationElement2_put_speed(This,speed) ( (This)->lpVtbl -> put_speed(This,speed) )
#define ITIMEAnimationElement2_get_syncBehavior(This,sync) ( (This)->lpVtbl -> get_syncBehavior(This,sync) )
#define ITIMEAnimationElement2_put_syncBehavior(This,sync) ( (This)->lpVtbl -> put_syncBehavior(This,sync) )
#define ITIMEAnimationElement2_get_syncTolerance(This,tol) ( (This)->lpVtbl -> get_syncTolerance(This,tol) )
#define ITIMEAnimationElement2_put_syncTolerance(This,tol) ( (This)->lpVtbl -> put_syncTolerance(This,tol) )
#define ITIMEAnimationElement2_get_syncMaster(This,b) ( (This)->lpVtbl -> get_syncMaster(This,b) )
#define ITIMEAnimationElement2_put_syncMaster(This,b) ( (This)->lpVtbl -> put_syncMaster(This,b) )
#define ITIMEAnimationElement2_get_timeAction(This,time) ( (This)->lpVtbl -> get_timeAction(This,time) )
#define ITIMEAnimationElement2_put_timeAction(This,time) ( (This)->lpVtbl -> put_timeAction(This,time) )
#define ITIMEAnimationElement2_get_timeContainer(This,__MIDL__ITIMEElement0008) ( (This)->lpVtbl -> get_timeContainer(This,__MIDL__ITIMEElement0008) )
#define ITIMEAnimationElement2_get_volume(This,val) ( (This)->lpVtbl -> get_volume(This,val) )
#define ITIMEAnimationElement2_put_volume(This,val) ( (This)->lpVtbl -> put_volume(This,val) )
#define ITIMEAnimationElement2_get_currTimeState(This,TimeState) ( (This)->lpVtbl -> get_currTimeState(This,TimeState) )
#define ITIMEAnimationElement2_get_timeAll(This,allColl) ( (This)->lpVtbl -> get_timeAll(This,allColl) )
#define ITIMEAnimationElement2_get_timeChildren(This,childColl) ( (This)->lpVtbl -> get_timeChildren(This,childColl) )
#define ITIMEAnimationElement2_get_timeParent(This,parent) ( (This)->lpVtbl -> get_timeParent(This,parent) )
#define ITIMEAnimationElement2_get_isPaused(This,b) ( (This)->lpVtbl -> get_isPaused(This,b) )
#define ITIMEAnimationElement2_beginElement(This) ( (This)->lpVtbl -> beginElement(This) )
#define ITIMEAnimationElement2_beginElementAt(This,parentTime) ( (This)->lpVtbl -> beginElementAt(This,parentTime) )
#define ITIMEAnimationElement2_endElement(This) ( (This)->lpVtbl -> endElement(This) )
#define ITIMEAnimationElement2_endElementAt(This,parentTime) ( (This)->lpVtbl -> endElementAt(This,parentTime) )
#define ITIMEAnimationElement2_pauseElement(This) ( (This)->lpVtbl -> pauseElement(This) )
#define ITIMEAnimationElement2_resetElement(This) ( (This)->lpVtbl -> resetElement(This) )
#define ITIMEAnimationElement2_resumeElement(This) ( (This)->lpVtbl -> resumeElement(This) )
#define ITIMEAnimationElement2_seekActiveTime(This,activeTime) ( (This)->lpVtbl -> seekActiveTime(This,activeTime) )
#define ITIMEAnimationElement2_seekSegmentTime(This,segmentTime) ( (This)->lpVtbl -> seekSegmentTime(This,segmentTime) )
#define ITIMEAnimationElement2_seekTo(This,repeatCount,segmentTime) ( (This)->lpVtbl -> seekTo(This,repeatCount,segmentTime) )
#define ITIMEAnimationElement2_documentTimeToParentTime(This,documentTime,parentTime) ( (This)->lpVtbl -> documentTimeToParentTime(This,documentTime,parentTime) )
#define ITIMEAnimationElement2_parentTimeToDocumentTime(This,parentTime,documentTime) ( (This)->lpVtbl -> parentTimeToDocumentTime(This,parentTime,documentTime) )
#define ITIMEAnimationElement2_parentTimeToActiveTime(This,parentTime,activeTime) ( (This)->lpVtbl -> parentTimeToActiveTime(This,parentTime,activeTime) )
#define ITIMEAnimationElement2_activeTimeToParentTime(This,activeTime,parentTime) ( (This)->lpVtbl -> activeTimeToParentTime(This,activeTime,parentTime) )
#define ITIMEAnimationElement2_activeTimeToSegmentTime(This,activeTime,segmentTime) ( (This)->lpVtbl -> activeTimeToSegmentTime(This,activeTime,segmentTime) )
#define ITIMEAnimationElement2_segmentTimeToActiveTime(This,segmentTime,activeTime) ( (This)->lpVtbl -> segmentTimeToActiveTime(This,segmentTime,activeTime) )
#define ITIMEAnimationElement2_segmentTimeToSimpleTime(This,segmentTime,simpleTime) ( (This)->lpVtbl -> segmentTimeToSimpleTime(This,segmentTime,simpleTime) )
#define ITIMEAnimationElement2_simpleTimeToSegmentTime(This,simpleTime,segmentTime) ( (This)->lpVtbl -> simpleTimeToSegmentTime(This,simpleTime,segmentTime) )
#define ITIMEAnimationElement2_get_endSync(This,es) ( (This)->lpVtbl -> get_endSync(This,es) )
#define ITIMEAnimationElement2_put_endSync(This,es) ( (This)->lpVtbl -> put_endSync(This,es) )
#define ITIMEAnimationElement2_get_activeElements(This,activeColl) ( (This)->lpVtbl -> get_activeElements(This,activeColl) )
#define ITIMEAnimationElement2_get_hasMedia(This,flag) ( (This)->lpVtbl -> get_hasMedia(This,flag) )
#define ITIMEAnimationElement2_nextElement(This) ( (This)->lpVtbl -> nextElement(This) )
#define ITIMEAnimationElement2_prevElement(This) ( (This)->lpVtbl -> prevElement(This) )
#define ITIMEAnimationElement2_get_updateMode(This,updateMode) ( (This)->lpVtbl -> get_updateMode(This,updateMode) )
#define ITIMEAnimationElement2_put_updateMode(This,updateMode) ( (This)->lpVtbl -> put_updateMode(This,updateMode) )
#define ITIMEAnimationElement2_get_attributeName(This,attrib) ( (This)->lpVtbl -> get_attributeName(This,attrib) )
#define ITIMEAnimationElement2_put_attributeName(This,attrib) ( (This)->lpVtbl -> put_attributeName(This,attrib) )
#define ITIMEAnimationElement2_get_by(This,val) ( (This)->lpVtbl -> get_by(This,val) )
#define ITIMEAnimationElement2_put_by(This,val) ( (This)->lpVtbl -> put_by(This,val) )
#define ITIMEAnimationElement2_get_calcMode(This,calcmode) ( (This)->lpVtbl -> get_calcMode(This,calcmode) )
#define ITIMEAnimationElement2_put_calcMode(This,calcmode) ( (This)->lpVtbl -> put_calcMode(This,calcmode) )
#define ITIMEAnimationElement2_get_from(This,val) ( (This)->lpVtbl -> get_from(This,val) )
#define ITIMEAnimationElement2_put_from(This,val) ( (This)->lpVtbl -> put_from(This,val) )
#define ITIMEAnimationElement2_get_keySplines(This,val) ( (This)->lpVtbl -> get_keySplines(This,val) )
#define ITIMEAnimationElement2_put_keySplines(This,val) ( (This)->lpVtbl -> put_keySplines(This,val) )
#define ITIMEAnimationElement2_get_keyTimes(This,val) ( (This)->lpVtbl -> get_keyTimes(This,val) )
#define ITIMEAnimationElement2_put_keyTimes(This,val) ( (This)->lpVtbl -> put_keyTimes(This,val) )
#define ITIMEAnimationElement2_get_targetElement(This,target) ( (This)->lpVtbl -> get_targetElement(This,target) )
#define ITIMEAnimationElement2_put_targetElement(This,target) ( (This)->lpVtbl -> put_targetElement(This,target) )
#define ITIMEAnimationElement2_get_to(This,val) ( (This)->lpVtbl -> get_to(This,val) )
#define ITIMEAnimationElement2_put_to(This,val) ( (This)->lpVtbl -> put_to(This,val) )
#define ITIMEAnimationElement2_get_values(This,val) ( (This)->lpVtbl -> get_values(This,val) )
#define ITIMEAnimationElement2_put_values(This,val) ( (This)->lpVtbl -> put_values(This,val) )
#define ITIMEAnimationElement2_get_origin(This,val) ( (This)->lpVtbl -> get_origin(This,val) )
#define ITIMEAnimationElement2_put_origin(This,val) ( (This)->lpVtbl -> put_origin(This,val) )
#define ITIMEAnimationElement2_get_path(This,val) ( (This)->lpVtbl -> get_path(This,val) )
#define ITIMEAnimationElement2_put_path(This,val) ( (This)->lpVtbl -> put_path(This,val) )
#define ITIMEAnimationElement2_get_additive(This,val) ( (This)->lpVtbl -> get_additive(This,val) )
#define ITIMEAnimationElement2_put_additive(This,val) ( (This)->lpVtbl -> put_additive(This,val) )
#define ITIMEAnimationElement2_get_accumulate(This,val) ( (This)->lpVtbl -> get_accumulate(This,val) )
#define ITIMEAnimationElement2_put_accumulate(This,val) ( (This)->lpVtbl -> put_accumulate(This,val) )
#define ITIMEAnimationElement2_get_type(This,val) ( (This)->lpVtbl -> get_type(This,val) )
#define ITIMEAnimationElement2_put_type(This,val) ( (This)->lpVtbl -> put_type(This,val) )
#define ITIMEAnimationElement2_get_subType(This,val) ( (This)->lpVtbl -> get_subType(This,val) )
#define ITIMEAnimationElement2_put_subType(This,val) ( (This)->lpVtbl -> put_subType(This,val) )
#define ITIMEAnimationElement2_get_mode(This,val) ( (This)->lpVtbl -> get_mode(This,val) )
#define ITIMEAnimationElement2_put_mode(This,val) ( (This)->lpVtbl -> put_mode(This,val) )
#define ITIMEAnimationElement2_get_fadeColor(This,val) ( (This)->lpVtbl -> get_fadeColor(This,val) )
#define ITIMEAnimationElement2_put_fadeColor(This,val) ( (This)->lpVtbl -> put_fadeColor(This,val) )
#endif
#endif
#ifndef __IAnimationComposer_INTERFACE_DEFINED__
#define __IAnimationComposer_INTERFACE_DEFINED__
extern const IID IID_IAnimationComposer;
typedef struct IAnimationComposerVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IAnimationComposer * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IAnimationComposer * This);
	ULONG(STDMETHODCALLTYPE * Release) (IAnimationComposer * This);
	HRESULT(STDMETHODCALLTYPE * get_attribute) (IAnimationComposer * This, BSTR * attributeName);
	HRESULT(STDMETHODCALLTYPE * ComposerInit) (IAnimationComposer * This, IDispatch * composerSite, BSTR attributeName);
	HRESULT(STDMETHODCALLTYPE * ComposerDetach) (IAnimationComposer * This);
	HRESULT(STDMETHODCALLTYPE * UpdateFragments) (IAnimationComposer * This);
	HRESULT(STDMETHODCALLTYPE * AddFragment) (IAnimationComposer * This, IDispatch * newAnimationFragment);
	HRESULT(STDMETHODCALLTYPE * InsertFragment) (IAnimationComposer * This, IDispatch * newAnimationFragment, VARIANT index);
	HRESULT(STDMETHODCALLTYPE * RemoveFragment) (IAnimationComposer * This, IDispatch * oldAnimationFragment);
	HRESULT(STDMETHODCALLTYPE * EnumerateFragments) (IAnimationComposer * This, IEnumVARIANT ** fragments);
	HRESULT(STDMETHODCALLTYPE * GetNumFragments) (IAnimationComposer * This, long *fragmentCount);
	END_INTERFACE
}  IAnimationComposerVtbl;
interface IAnimationComposer
{
	CONST_VTBL struct IAnimationComposerVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IAnimationComposer_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IAnimationComposer_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IAnimationComposer_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IAnimationComposer_get_attribute(This,attributeName) ( (This)->lpVtbl -> get_attribute(This,attributeName) )
#define IAnimationComposer_ComposerInit(This,composerSite,attributeName) ( (This)->lpVtbl -> ComposerInit(This,composerSite,attributeName) )
#define IAnimationComposer_ComposerDetach(This) ( (This)->lpVtbl -> ComposerDetach(This) )
#define IAnimationComposer_UpdateFragments(This) ( (This)->lpVtbl -> UpdateFragments(This) )
#define IAnimationComposer_AddFragment(This,newAnimationFragment) ( (This)->lpVtbl -> AddFragment(This,newAnimationFragment) )
#define IAnimationComposer_InsertFragment(This,newAnimationFragment,index) ( (This)->lpVtbl -> InsertFragment(This,newAnimationFragment,index) )
#define IAnimationComposer_RemoveFragment(This,oldAnimationFragment) ( (This)->lpVtbl -> RemoveFragment(This,oldAnimationFragment) )
#define IAnimationComposer_EnumerateFragments(This,fragments) ( (This)->lpVtbl -> EnumerateFragments(This,fragments) )
#define IAnimationComposer_GetNumFragments(This,fragmentCount) ( (This)->lpVtbl -> GetNumFragments(This,fragmentCount) )
#endif
#endif
#ifndef __IAnimationComposer2_INTERFACE_DEFINED__
#define __IAnimationComposer2_INTERFACE_DEFINED__
extern const IID IID_IAnimationComposer2;
typedef struct IAnimationComposer2Vtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IAnimationComposer2 * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IAnimationComposer2 * This);
	ULONG(STDMETHODCALLTYPE * Release) (IAnimationComposer2 * This);
	HRESULT(STDMETHODCALLTYPE * get_attribute) (IAnimationComposer2 * This, BSTR * attributeName);
	HRESULT(STDMETHODCALLTYPE * ComposerInit) (IAnimationComposer2 * This, IDispatch * composerSite, BSTR attributeName);
	HRESULT(STDMETHODCALLTYPE * ComposerDetach) (IAnimationComposer2 * This);
	HRESULT(STDMETHODCALLTYPE * UpdateFragments) (IAnimationComposer2 * This);
	HRESULT(STDMETHODCALLTYPE * AddFragment) (IAnimationComposer2 * This, IDispatch * newAnimationFragment);
	HRESULT(STDMETHODCALLTYPE * InsertFragment) (IAnimationComposer2 * This, IDispatch * newAnimationFragment, VARIANT index);
	HRESULT(STDMETHODCALLTYPE * RemoveFragment) (IAnimationComposer2 * This, IDispatch * oldAnimationFragment);
	HRESULT(STDMETHODCALLTYPE * EnumerateFragments) (IAnimationComposer2 * This, IEnumVARIANT ** fragments);
	HRESULT(STDMETHODCALLTYPE * GetNumFragments) (IAnimationComposer2 * This, long *fragmentCount);
	HRESULT(STDMETHODCALLTYPE * ComposerInitFromFragment) (IAnimationComposer2 * This, IDispatch * composerSite, BSTR attributeName, IDispatch * oneFragment);
	END_INTERFACE
}  IAnimationComposer2Vtbl;
interface IAnimationComposer2
{
	CONST_VTBL struct IAnimationComposer2Vtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IAnimationComposer2_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IAnimationComposer2_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IAnimationComposer2_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IAnimationComposer2_get_attribute(This,attributeName) ( (This)->lpVtbl -> get_attribute(This,attributeName) )
#define IAnimationComposer2_ComposerInit(This,composerSite,attributeName) ( (This)->lpVtbl -> ComposerInit(This,composerSite,attributeName) )
#define IAnimationComposer2_ComposerDetach(This) ( (This)->lpVtbl -> ComposerDetach(This) )
#define IAnimationComposer2_UpdateFragments(This) ( (This)->lpVtbl -> UpdateFragments(This) )
#define IAnimationComposer2_AddFragment(This,newAnimationFragment) ( (This)->lpVtbl -> AddFragment(This,newAnimationFragment) )
#define IAnimationComposer2_InsertFragment(This,newAnimationFragment,index) ( (This)->lpVtbl -> InsertFragment(This,newAnimationFragment,index) )
#define IAnimationComposer2_RemoveFragment(This,oldAnimationFragment) ( (This)->lpVtbl -> RemoveFragment(This,oldAnimationFragment) )
#define IAnimationComposer2_EnumerateFragments(This,fragments) ( (This)->lpVtbl -> EnumerateFragments(This,fragments) )
#define IAnimationComposer2_GetNumFragments(This,fragmentCount) ( (This)->lpVtbl -> GetNumFragments(This,fragmentCount) )
#define IAnimationComposer2_ComposerInitFromFragment(This,composerSite,attributeName,oneFragment) ( (This)->lpVtbl -> ComposerInitFromFragment(This,composerSite,attributeName,oneFragment) )
#endif
#endif
#ifndef __IAnimationComposerSite_INTERFACE_DEFINED__
#define __IAnimationComposerSite_INTERFACE_DEFINED__
extern const IID IID_IAnimationComposerSite;
typedef struct IAnimationComposerSiteVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IAnimationComposerSite * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IAnimationComposerSite * This);
	ULONG(STDMETHODCALLTYPE * Release) (IAnimationComposerSite * This);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfoCount) (IAnimationComposerSite * This, UINT * pctinfo);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfo) (IAnimationComposerSite * This, UINT iTInfo, LCID lcid, ITypeInfo ** ppTInfo);
	HRESULT(STDMETHODCALLTYPE * GetIDsOfNames) (IAnimationComposerSite * This, REFIID riid, LPOLESTR * rgszNames, UINT cNames, LCID lcid, DISPID * rgDispId);
	HRESULT(STDMETHODCALLTYPE * Invoke) (IAnimationComposerSite * This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS * pDispParams, VARIANT * pVarResult, EXCEPINFO * pExcepInfo, UINT * puArgErr);
	HRESULT(STDMETHODCALLTYPE * AddFragment) (IAnimationComposerSite * This, BSTR attributeName, IDispatch * fragment);
	HRESULT(STDMETHODCALLTYPE * RemoveFragment) (IAnimationComposerSite * This, BSTR attributeName, IDispatch * fragment);
	HRESULT(STDMETHODCALLTYPE * InsertFragment) (IAnimationComposerSite * This, BSTR attributeName, IDispatch * fragment, VARIANT index);
	HRESULT(STDMETHODCALLTYPE * EnumerateFragments) (IAnimationComposerSite * This, BSTR attributeName, IEnumVARIANT ** fragments);
	HRESULT(STDMETHODCALLTYPE * RegisterComposerFactory) (IAnimationComposerSite * This, VARIANT * factory);
	HRESULT(STDMETHODCALLTYPE * UnregisterComposerFactory) (IAnimationComposerSite * This, VARIANT * factory);
	END_INTERFACE
}  IAnimationComposerSiteVtbl;
interface IAnimationComposerSite
{
	CONST_VTBL struct IAnimationComposerSiteVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IAnimationComposerSite_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IAnimationComposerSite_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IAnimationComposerSite_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IAnimationComposerSite_GetTypeInfoCount(This,pctinfo) ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define IAnimationComposerSite_GetTypeInfo(This,iTInfo,lcid,ppTInfo) ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define IAnimationComposerSite_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define IAnimationComposerSite_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define IAnimationComposerSite_AddFragment(This,attributeName,fragment) ( (This)->lpVtbl -> AddFragment(This,attributeName,fragment) )
#define IAnimationComposerSite_RemoveFragment(This,attributeName,fragment) ( (This)->lpVtbl -> RemoveFragment(This,attributeName,fragment) )
#define IAnimationComposerSite_InsertFragment(This,attributeName,fragment,index) ( (This)->lpVtbl -> InsertFragment(This,attributeName,fragment,index) )
#define IAnimationComposerSite_EnumerateFragments(This,attributeName,fragments) ( (This)->lpVtbl -> EnumerateFragments(This,attributeName,fragments) )
#define IAnimationComposerSite_RegisterComposerFactory(This,factory) ( (This)->lpVtbl -> RegisterComposerFactory(This,factory) )
#define IAnimationComposerSite_UnregisterComposerFactory(This,factory) ( (This)->lpVtbl -> UnregisterComposerFactory(This,factory) )
#endif
#endif
#ifndef __IAnimationComposerSiteSink_INTERFACE_DEFINED__
#define __IAnimationComposerSiteSink_INTERFACE_DEFINED__
extern const IID IID_IAnimationComposerSiteSink;
typedef struct IAnimationComposerSiteSinkVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IAnimationComposerSiteSink * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IAnimationComposerSiteSink * This);
	ULONG(STDMETHODCALLTYPE * Release) (IAnimationComposerSiteSink * This);
	void (STDMETHODCALLTYPE * UpdateAnimations) (IAnimationComposerSiteSink * This);
	void (STDMETHODCALLTYPE * ComposerSiteDetach) (IAnimationComposerSiteSink * This);
	END_INTERFACE
}  IAnimationComposerSiteSinkVtbl;
interface IAnimationComposerSiteSink
{
	CONST_VTBL struct IAnimationComposerSiteSinkVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IAnimationComposerSiteSink_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IAnimationComposerSiteSink_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IAnimationComposerSiteSink_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IAnimationComposerSiteSink_UpdateAnimations(This) ( (This)->lpVtbl -> UpdateAnimations(This) )
#define IAnimationComposerSiteSink_ComposerSiteDetach(This) ( (This)->lpVtbl -> ComposerSiteDetach(This) )
#endif
#endif
#ifndef __IAnimationRoot_INTERFACE_DEFINED__
#define __IAnimationRoot_INTERFACE_DEFINED__
extern const IID IID_IAnimationRoot;
typedef struct IAnimationRootVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IAnimationRoot * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IAnimationRoot * This);
	ULONG(STDMETHODCALLTYPE * Release) (IAnimationRoot * This);
	HRESULT(STDMETHODCALLTYPE * RegisterComposerSite) (IAnimationRoot * This, IUnknown * composerSite);
	HRESULT(STDMETHODCALLTYPE * UnregisterComposerSite) (IAnimationRoot * This, IUnknown * composerSite);
	END_INTERFACE
}  IAnimationRootVtbl;
interface IAnimationRoot
{
	CONST_VTBL struct IAnimationRootVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IAnimationRoot_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IAnimationRoot_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IAnimationRoot_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IAnimationRoot_RegisterComposerSite(This,composerSite) ( (This)->lpVtbl -> RegisterComposerSite(This,composerSite) )
#define IAnimationRoot_UnregisterComposerSite(This,composerSite) ( (This)->lpVtbl -> UnregisterComposerSite(This,composerSite) )
#endif
#endif
#ifndef __IAnimationFragment_INTERFACE_DEFINED__
#define __IAnimationFragment_INTERFACE_DEFINED__
extern const IID IID_IAnimationFragment;
typedef struct IAnimationFragmentVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IAnimationFragment * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IAnimationFragment * This);
	ULONG(STDMETHODCALLTYPE * Release) (IAnimationFragment * This);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfoCount) (IAnimationFragment * This, UINT * pctinfo);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfo) (IAnimationFragment * This, UINT iTInfo, LCID lcid, ITypeInfo ** ppTInfo);
	HRESULT(STDMETHODCALLTYPE * GetIDsOfNames) (IAnimationFragment * This, REFIID riid, LPOLESTR * rgszNames, UINT cNames, LCID lcid, DISPID * rgDispId);
	HRESULT(STDMETHODCALLTYPE * Invoke) (IAnimationFragment * This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS * pDispParams, VARIANT * pVarResult, EXCEPINFO * pExcepInfo, UINT * puArgErr);
	HRESULT(STDMETHODCALLTYPE * get_element) (IAnimationFragment * This, IDispatch ** htmlElement);
	HRESULT(STDMETHODCALLTYPE * get_value) (IAnimationFragment * This, BSTR attributeName, VARIANT origvalue, VARIANT currentvalue, VARIANT * newvalue);
	HRESULT(STDMETHODCALLTYPE * DetachFromComposer) (IAnimationFragment * This);
	END_INTERFACE
}  IAnimationFragmentVtbl;
interface IAnimationFragment
{
	CONST_VTBL struct IAnimationFragmentVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IAnimationFragment_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IAnimationFragment_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IAnimationFragment_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IAnimationFragment_GetTypeInfoCount(This,pctinfo) ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define IAnimationFragment_GetTypeInfo(This,iTInfo,lcid,ppTInfo) ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define IAnimationFragment_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define IAnimationFragment_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define IAnimationFragment_get_element(This,htmlElement) ( (This)->lpVtbl -> get_element(This,htmlElement) )
#define IAnimationFragment_get_value(This,attributeName,origvalue,currentvalue,newvalue) ( (This)->lpVtbl -> get_value(This,attributeName,origvalue,currentvalue,newvalue) )
#define IAnimationFragment_DetachFromComposer(This) ( (This)->lpVtbl -> DetachFromComposer(This) )
#endif
#endif
#ifndef __IFilterAnimationInfo_INTERFACE_DEFINED__
#define __IFilterAnimationInfo_INTERFACE_DEFINED__
extern const IID IID_IFilterAnimationInfo;
typedef struct IFilterAnimationInfoVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IFilterAnimationInfo * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IFilterAnimationInfo * This);
	ULONG(STDMETHODCALLTYPE * Release) (IFilterAnimationInfo * This);
	HRESULT(STDMETHODCALLTYPE * GetParameters) (IFilterAnimationInfo * This, VARIANT * params);
	END_INTERFACE
}  IFilterAnimationInfoVtbl;
interface IFilterAnimationInfo
{
	CONST_VTBL struct IFilterAnimationInfoVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IFilterAnimationInfo_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IFilterAnimationInfo_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IFilterAnimationInfo_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IFilterAnimationInfo_GetParameters(This,params) ( (This)->lpVtbl -> GetParameters(This,params) )
#endif
#endif
#ifndef __ITIMEElementCollection_INTERFACE_DEFINED__
#define __ITIMEElementCollection_INTERFACE_DEFINED__
extern const IID IID_ITIMEElementCollection;
typedef struct ITIMEElementCollectionVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (ITIMEElementCollection * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (ITIMEElementCollection * This);
	ULONG(STDMETHODCALLTYPE * Release) (ITIMEElementCollection * This);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfoCount) (ITIMEElementCollection * This, UINT * pctinfo);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfo) (ITIMEElementCollection * This, UINT iTInfo, LCID lcid, ITypeInfo ** ppTInfo);
	HRESULT(STDMETHODCALLTYPE * GetIDsOfNames) (ITIMEElementCollection * This, REFIID riid, LPOLESTR * rgszNames, UINT cNames, LCID lcid, DISPID * rgDispId);
	HRESULT(STDMETHODCALLTYPE * Invoke) (ITIMEElementCollection * This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS * pDispParams, VARIANT * pVarResult, EXCEPINFO * pExcepInfo, UINT * puArgErr);
	HRESULT(STDMETHODCALLTYPE * put_length) (ITIMEElementCollection * This, long v);
	HRESULT(STDMETHODCALLTYPE * get_length) (ITIMEElementCollection * This, long *p);
	HRESULT(STDMETHODCALLTYPE * get__newEnum) (ITIMEElementCollection * This, IUnknown ** ppIUnknown);
	HRESULT(STDMETHODCALLTYPE * item) (ITIMEElementCollection * This, VARIANT varName, VARIANT varIndex, IDispatch ** ppDisp);
	HRESULT(STDMETHODCALLTYPE * tags) (ITIMEElementCollection * This, VARIANT varName, IDispatch ** ppDisp);
	END_INTERFACE
}  ITIMEElementCollectionVtbl;
interface ITIMEElementCollection
{
	CONST_VTBL struct ITIMEElementCollectionVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define ITIMEElementCollection_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define ITIMEElementCollection_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define ITIMEElementCollection_Release(This) ( (This)->lpVtbl -> Release(This) )
#define ITIMEElementCollection_GetTypeInfoCount(This,pctinfo) ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define ITIMEElementCollection_GetTypeInfo(This,iTInfo,lcid,ppTInfo) ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define ITIMEElementCollection_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define ITIMEElementCollection_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define ITIMEElementCollection_put_length(This,v) ( (This)->lpVtbl -> put_length(This,v) )
#define ITIMEElementCollection_get_length(This,p) ( (This)->lpVtbl -> get_length(This,p) )
#define ITIMEElementCollection_get__newEnum(This,ppIUnknown) ( (This)->lpVtbl -> get__newEnum(This,ppIUnknown) )
#define ITIMEElementCollection_item(This,varName,varIndex,ppDisp) ( (This)->lpVtbl -> item(This,varName,varIndex,ppDisp) )
#define ITIMEElementCollection_tags(This,varName,ppDisp) ( (This)->lpVtbl -> tags(This,varName,ppDisp) )
#endif
#endif
#ifndef __ITIMEState_INTERFACE_DEFINED__
#define __ITIMEState_INTERFACE_DEFINED__
extern const IID IID_ITIMEState;
typedef struct ITIMEStateVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (ITIMEState * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (ITIMEState * This);
	ULONG(STDMETHODCALLTYPE * Release) (ITIMEState * This);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfoCount) (ITIMEState * This, UINT * pctinfo);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfo) (ITIMEState * This, UINT iTInfo, LCID lcid, ITypeInfo ** ppTInfo);
	HRESULT(STDMETHODCALLTYPE * GetIDsOfNames) (ITIMEState * This, REFIID riid, LPOLESTR * rgszNames, UINT cNames, LCID lcid, DISPID * rgDispId);
	HRESULT(STDMETHODCALLTYPE * Invoke) (ITIMEState * This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS * pDispParams, VARIANT * pVarResult, EXCEPINFO * pExcepInfo, UINT * puArgErr);
	HRESULT(STDMETHODCALLTYPE * get_activeDur) (ITIMEState * This, double *dur);
	HRESULT(STDMETHODCALLTYPE * get_activeTime) (ITIMEState * This, double *time);
	HRESULT(STDMETHODCALLTYPE * get_isActive) (ITIMEState * This, VARIANT_BOOL * active);
	HRESULT(STDMETHODCALLTYPE * get_isOn) (ITIMEState * This, VARIANT_BOOL * on);
	HRESULT(STDMETHODCALLTYPE * get_isPaused) (ITIMEState * This, VARIANT_BOOL * paused);
	HRESULT(STDMETHODCALLTYPE * get_isMuted) (ITIMEState * This, VARIANT_BOOL * muted);
	HRESULT(STDMETHODCALLTYPE * get_parentTimeBegin) (ITIMEState * This, double *time);
	HRESULT(STDMETHODCALLTYPE * get_parentTimeEnd) (ITIMEState * This, double *time);
	HRESULT(STDMETHODCALLTYPE * get_progress) (ITIMEState * This, double *progress);
	HRESULT(STDMETHODCALLTYPE * get_repeatCount) (ITIMEState * This, LONG * count);
	HRESULT(STDMETHODCALLTYPE * get_segmentDur) (ITIMEState * This, double *dur);
	HRESULT(STDMETHODCALLTYPE * get_segmentTime) (ITIMEState * This, double *time);
	HRESULT(STDMETHODCALLTYPE * get_simpleDur) (ITIMEState * This, double *dur);
	HRESULT(STDMETHODCALLTYPE * get_simpleTime) (ITIMEState * This, double *time);
	HRESULT(STDMETHODCALLTYPE * get_speed) (ITIMEState * This, float *speed);
	HRESULT(STDMETHODCALLTYPE * get_state) (ITIMEState * This, TimeState * timeState);
	HRESULT(STDMETHODCALLTYPE * get_stateString) (ITIMEState * This, BSTR * state);
	HRESULT(STDMETHODCALLTYPE * get_volume) (ITIMEState * This, float *vol);
	END_INTERFACE
}  ITIMEStateVtbl;
interface ITIMEState
{
	CONST_VTBL struct ITIMEStateVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define ITIMEState_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define ITIMEState_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define ITIMEState_Release(This) ( (This)->lpVtbl -> Release(This) )
#define ITIMEState_GetTypeInfoCount(This,pctinfo) ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define ITIMEState_GetTypeInfo(This,iTInfo,lcid,ppTInfo) ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define ITIMEState_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define ITIMEState_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define ITIMEState_get_activeDur(This,dur) ( (This)->lpVtbl -> get_activeDur(This,dur) )
#define ITIMEState_get_activeTime(This,time) ( (This)->lpVtbl -> get_activeTime(This,time) )
#define ITIMEState_get_isActive(This,active) ( (This)->lpVtbl -> get_isActive(This,active) )
#define ITIMEState_get_isOn(This,on) ( (This)->lpVtbl -> get_isOn(This,on) )
#define ITIMEState_get_isPaused(This,paused) ( (This)->lpVtbl -> get_isPaused(This,paused) )
#define ITIMEState_get_isMuted(This,muted) ( (This)->lpVtbl -> get_isMuted(This,muted) )
#define ITIMEState_get_parentTimeBegin(This,time) ( (This)->lpVtbl -> get_parentTimeBegin(This,time) )
#define ITIMEState_get_parentTimeEnd(This,time) ( (This)->lpVtbl -> get_parentTimeEnd(This,time) )
#define ITIMEState_get_progress(This,progress) ( (This)->lpVtbl -> get_progress(This,progress) )
#define ITIMEState_get_repeatCount(This,count) ( (This)->lpVtbl -> get_repeatCount(This,count) )
#define ITIMEState_get_segmentDur(This,dur) ( (This)->lpVtbl -> get_segmentDur(This,dur) )
#define ITIMEState_get_segmentTime(This,time) ( (This)->lpVtbl -> get_segmentTime(This,time) )
#define ITIMEState_get_simpleDur(This,dur) ( (This)->lpVtbl -> get_simpleDur(This,dur) )
#define ITIMEState_get_simpleTime(This,time) ( (This)->lpVtbl -> get_simpleTime(This,time) )
#define ITIMEState_get_speed(This,speed) ( (This)->lpVtbl -> get_speed(This,speed) )
#define ITIMEState_get_state(This,timeState) ( (This)->lpVtbl -> get_state(This,timeState) )
#define ITIMEState_get_stateString(This,state) ( (This)->lpVtbl -> get_stateString(This,state) )
#define ITIMEState_get_volume(This,vol) ( (This)->lpVtbl -> get_volume(This,vol) )
#endif
#endif
#ifndef __ITIMEPlayItem_INTERFACE_DEFINED__
#define __ITIMEPlayItem_INTERFACE_DEFINED__
extern const IID IID_ITIMEPlayItem;
typedef struct ITIMEPlayItemVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (ITIMEPlayItem * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (ITIMEPlayItem * This);
	ULONG(STDMETHODCALLTYPE * Release) (ITIMEPlayItem * This);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfoCount) (ITIMEPlayItem * This, UINT * pctinfo);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfo) (ITIMEPlayItem * This, UINT iTInfo, LCID lcid, ITypeInfo ** ppTInfo);
	HRESULT(STDMETHODCALLTYPE * GetIDsOfNames) (ITIMEPlayItem * This, REFIID riid, LPOLESTR * rgszNames, UINT cNames, LCID lcid, DISPID * rgDispId);
	HRESULT(STDMETHODCALLTYPE * Invoke) (ITIMEPlayItem * This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS * pDispParams, VARIANT * pVarResult, EXCEPINFO * pExcepInfo, UINT * puArgErr);
	HRESULT(STDMETHODCALLTYPE * get_abstract) (ITIMEPlayItem * This, BSTR * abs);
	HRESULT(STDMETHODCALLTYPE * get_author) (ITIMEPlayItem * This, BSTR * auth);
	HRESULT(STDMETHODCALLTYPE * get_copyright) (ITIMEPlayItem * This, BSTR * cpyrght);
	HRESULT(STDMETHODCALLTYPE * get_dur) (ITIMEPlayItem * This, double *dur);
	HRESULT(STDMETHODCALLTYPE * get_index) (ITIMEPlayItem * This, long *index);
	HRESULT(STDMETHODCALLTYPE * get_rating) (ITIMEPlayItem * This, BSTR * rate);
	HRESULT(STDMETHODCALLTYPE * get_src) (ITIMEPlayItem * This, BSTR * src);
	HRESULT(STDMETHODCALLTYPE * get_title) (ITIMEPlayItem * This, BSTR * title);
	HRESULT(STDMETHODCALLTYPE * setActive) (ITIMEPlayItem * This);
	END_INTERFACE
}  ITIMEPlayItemVtbl;
interface ITIMEPlayItem
{
	CONST_VTBL struct ITIMEPlayItemVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define ITIMEPlayItem_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define ITIMEPlayItem_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define ITIMEPlayItem_Release(This) ( (This)->lpVtbl -> Release(This) )
#define ITIMEPlayItem_GetTypeInfoCount(This,pctinfo) ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define ITIMEPlayItem_GetTypeInfo(This,iTInfo,lcid,ppTInfo) ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define ITIMEPlayItem_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define ITIMEPlayItem_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define ITIMEPlayItem_get_abstract(This,abs) ( (This)->lpVtbl -> get_abstract(This,abs) )
#define ITIMEPlayItem_get_author(This,auth) ( (This)->lpVtbl -> get_author(This,auth) )
#define ITIMEPlayItem_get_copyright(This,cpyrght) ( (This)->lpVtbl -> get_copyright(This,cpyrght) )
#define ITIMEPlayItem_get_dur(This,dur) ( (This)->lpVtbl -> get_dur(This,dur) )
#define ITIMEPlayItem_get_index(This,index) ( (This)->lpVtbl -> get_index(This,index) )
#define ITIMEPlayItem_get_rating(This,rate) ( (This)->lpVtbl -> get_rating(This,rate) )
#define ITIMEPlayItem_get_src(This,src) ( (This)->lpVtbl -> get_src(This,src) )
#define ITIMEPlayItem_get_title(This,title) ( (This)->lpVtbl -> get_title(This,title) )
#define ITIMEPlayItem_setActive(This) ( (This)->lpVtbl -> setActive(This) )
#endif
#endif
#ifndef __ITIMEPlayItem2_INTERFACE_DEFINED__
#define __ITIMEPlayItem2_INTERFACE_DEFINED__
extern const IID IID_ITIMEPlayItem2;
typedef struct ITIMEPlayItem2Vtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (ITIMEPlayItem2 * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (ITIMEPlayItem2 * This);
	ULONG(STDMETHODCALLTYPE * Release) (ITIMEPlayItem2 * This);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfoCount) (ITIMEPlayItem2 * This, UINT * pctinfo);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfo) (ITIMEPlayItem2 * This, UINT iTInfo, LCID lcid, ITypeInfo ** ppTInfo);
	HRESULT(STDMETHODCALLTYPE * GetIDsOfNames) (ITIMEPlayItem2 * This, REFIID riid, LPOLESTR * rgszNames, UINT cNames, LCID lcid, DISPID * rgDispId);
	HRESULT(STDMETHODCALLTYPE * Invoke) (ITIMEPlayItem2 * This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS * pDispParams, VARIANT * pVarResult, EXCEPINFO * pExcepInfo, UINT * puArgErr);
	HRESULT(STDMETHODCALLTYPE * get_abstract) (ITIMEPlayItem2 * This, BSTR * abs);
	HRESULT(STDMETHODCALLTYPE * get_author) (ITIMEPlayItem2 * This, BSTR * auth);
	HRESULT(STDMETHODCALLTYPE * get_copyright) (ITIMEPlayItem2 * This, BSTR * cpyrght);
	HRESULT(STDMETHODCALLTYPE * get_dur) (ITIMEPlayItem2 * This, double *dur);
	HRESULT(STDMETHODCALLTYPE * get_index) (ITIMEPlayItem2 * This, long *index);
	HRESULT(STDMETHODCALLTYPE * get_rating) (ITIMEPlayItem2 * This, BSTR * rate);
	HRESULT(STDMETHODCALLTYPE * get_src) (ITIMEPlayItem2 * This, BSTR * src);
	HRESULT(STDMETHODCALLTYPE * get_title) (ITIMEPlayItem2 * This, BSTR * title);
	HRESULT(STDMETHODCALLTYPE * setActive) (ITIMEPlayItem2 * This);
	HRESULT(STDMETHODCALLTYPE * get_banner) (ITIMEPlayItem2 * This, BSTR * banner);
	HRESULT(STDMETHODCALLTYPE * get_bannerAbstract) (ITIMEPlayItem2 * This, BSTR * abstract);
	HRESULT(STDMETHODCALLTYPE * get_bannerMoreInfo) (ITIMEPlayItem2 * This, BSTR * moreInfo);
	END_INTERFACE
}  ITIMEPlayItem2Vtbl;
interface ITIMEPlayItem2
{
	CONST_VTBL struct ITIMEPlayItem2Vtbl *lpVtbl;
};
#ifdef COBJMACROS
#define ITIMEPlayItem2_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define ITIMEPlayItem2_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define ITIMEPlayItem2_Release(This) ( (This)->lpVtbl -> Release(This) )
#define ITIMEPlayItem2_GetTypeInfoCount(This,pctinfo) ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define ITIMEPlayItem2_GetTypeInfo(This,iTInfo,lcid,ppTInfo) ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define ITIMEPlayItem2_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define ITIMEPlayItem2_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define ITIMEPlayItem2_get_abstract(This,abs) ( (This)->lpVtbl -> get_abstract(This,abs) )
#define ITIMEPlayItem2_get_author(This,auth) ( (This)->lpVtbl -> get_author(This,auth) )
#define ITIMEPlayItem2_get_copyright(This,cpyrght) ( (This)->lpVtbl -> get_copyright(This,cpyrght) )
#define ITIMEPlayItem2_get_dur(This,dur) ( (This)->lpVtbl -> get_dur(This,dur) )
#define ITIMEPlayItem2_get_index(This,index) ( (This)->lpVtbl -> get_index(This,index) )
#define ITIMEPlayItem2_get_rating(This,rate) ( (This)->lpVtbl -> get_rating(This,rate) )
#define ITIMEPlayItem2_get_src(This,src) ( (This)->lpVtbl -> get_src(This,src) )
#define ITIMEPlayItem2_get_title(This,title) ( (This)->lpVtbl -> get_title(This,title) )
#define ITIMEPlayItem2_setActive(This) ( (This)->lpVtbl -> setActive(This) )
#define ITIMEPlayItem2_get_banner(This,banner) ( (This)->lpVtbl -> get_banner(This,banner) )
#define ITIMEPlayItem2_get_bannerAbstract(This,abstract) ( (This)->lpVtbl -> get_bannerAbstract(This,abstract) )
#define ITIMEPlayItem2_get_bannerMoreInfo(This,moreInfo) ( (This)->lpVtbl -> get_bannerMoreInfo(This,moreInfo) )
#endif
#endif
#ifndef __ITIMEPlayList_INTERFACE_DEFINED__
#define __ITIMEPlayList_INTERFACE_DEFINED__
extern const IID IID_ITIMEPlayList;
typedef struct ITIMEPlayListVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (ITIMEPlayList * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (ITIMEPlayList * This);
	ULONG(STDMETHODCALLTYPE * Release) (ITIMEPlayList * This);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfoCount) (ITIMEPlayList * This, UINT * pctinfo);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfo) (ITIMEPlayList * This, UINT iTInfo, LCID lcid, ITypeInfo ** ppTInfo);
	HRESULT(STDMETHODCALLTYPE * GetIDsOfNames) (ITIMEPlayList * This, REFIID riid, LPOLESTR * rgszNames, UINT cNames, LCID lcid, DISPID * rgDispId);
	HRESULT(STDMETHODCALLTYPE * Invoke) (ITIMEPlayList * This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS * pDispParams, VARIANT * pVarResult, EXCEPINFO * pExcepInfo, UINT * puArgErr);
	HRESULT(STDMETHODCALLTYPE * put_activeTrack) (ITIMEPlayList * This, VARIANT vTrack);
	HRESULT(STDMETHODCALLTYPE * get_activeTrack) (ITIMEPlayList * This, ITIMEPlayItem ** pPlayItem);
	HRESULT(STDMETHODCALLTYPE * get_dur) (ITIMEPlayList * This, double *dur);
	HRESULT(STDMETHODCALLTYPE * item) (ITIMEPlayList * This, VARIANT varIndex, ITIMEPlayItem ** pPlayItem);
	HRESULT(STDMETHODCALLTYPE * get_length) (ITIMEPlayList * This, long *p);
	HRESULT(STDMETHODCALLTYPE * get__newEnum) (ITIMEPlayList * This, IUnknown ** p);
	HRESULT(STDMETHODCALLTYPE * nextTrack) (ITIMEPlayList * This);
	HRESULT(STDMETHODCALLTYPE * prevTrack) (ITIMEPlayList * This);
	END_INTERFACE
}  ITIMEPlayListVtbl;
interface ITIMEPlayList
{
	CONST_VTBL struct ITIMEPlayListVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define ITIMEPlayList_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define ITIMEPlayList_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define ITIMEPlayList_Release(This) ( (This)->lpVtbl -> Release(This) )
#define ITIMEPlayList_GetTypeInfoCount(This,pctinfo) ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define ITIMEPlayList_GetTypeInfo(This,iTInfo,lcid,ppTInfo) ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define ITIMEPlayList_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define ITIMEPlayList_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define ITIMEPlayList_put_activeTrack(This,vTrack) ( (This)->lpVtbl -> put_activeTrack(This,vTrack) )
#define ITIMEPlayList_get_activeTrack(This,pPlayItem) ( (This)->lpVtbl -> get_activeTrack(This,pPlayItem) )
#define ITIMEPlayList_get_dur(This,dur) ( (This)->lpVtbl -> get_dur(This,dur) )
#define ITIMEPlayList_item(This,varIndex,pPlayItem) ( (This)->lpVtbl -> item(This,varIndex,pPlayItem) )
#define ITIMEPlayList_get_length(This,p) ( (This)->lpVtbl -> get_length(This,p) )
#define ITIMEPlayList_get__newEnum(This,p) ( (This)->lpVtbl -> get__newEnum(This,p) )
#define ITIMEPlayList_nextTrack(This) ( (This)->lpVtbl -> nextTrack(This) )
#define ITIMEPlayList_prevTrack(This) ( (This)->lpVtbl -> prevTrack(This) )
#endif
#endif
#ifndef __ITIMEDVDPlayerObject_INTERFACE_DEFINED__
#define __ITIMEDVDPlayerObject_INTERFACE_DEFINED__
extern const IID IID_ITIMEDVDPlayerObject;
typedef struct ITIMEDVDPlayerObjectVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (ITIMEDVDPlayerObject * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (ITIMEDVDPlayerObject * This);
	ULONG(STDMETHODCALLTYPE * Release) (ITIMEDVDPlayerObject * This);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfoCount) (ITIMEDVDPlayerObject * This, UINT * pctinfo);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfo) (ITIMEDVDPlayerObject * This, UINT iTInfo, LCID lcid, ITypeInfo ** ppTInfo);
	HRESULT(STDMETHODCALLTYPE * GetIDsOfNames) (ITIMEDVDPlayerObject * This, REFIID riid, LPOLESTR * rgszNames, UINT cNames, LCID lcid, DISPID * rgDispId);
	HRESULT(STDMETHODCALLTYPE * Invoke) (ITIMEDVDPlayerObject * This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS * pDispParams, VARIANT * pVarResult, EXCEPINFO * pExcepInfo, UINT * puArgErr);
	HRESULT(STDMETHODCALLTYPE * upperButtonSelect) (ITIMEDVDPlayerObject * This);
	HRESULT(STDMETHODCALLTYPE * lowerButtonSelect) (ITIMEDVDPlayerObject * This);
	HRESULT(STDMETHODCALLTYPE * leftButtonSelect) (ITIMEDVDPlayerObject * This);
	HRESULT(STDMETHODCALLTYPE * rightButtonSelect) (ITIMEDVDPlayerObject * This);
	HRESULT(STDMETHODCALLTYPE * buttonActivate) (ITIMEDVDPlayerObject * This);
	HRESULT(STDMETHODCALLTYPE * gotoMenu) (ITIMEDVDPlayerObject * This);
	END_INTERFACE
}  ITIMEDVDPlayerObjectVtbl;
interface ITIMEDVDPlayerObject
{
	CONST_VTBL struct ITIMEDVDPlayerObjectVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define ITIMEDVDPlayerObject_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define ITIMEDVDPlayerObject_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define ITIMEDVDPlayerObject_Release(This) ( (This)->lpVtbl -> Release(This) )
#define ITIMEDVDPlayerObject_GetTypeInfoCount(This,pctinfo) ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define ITIMEDVDPlayerObject_GetTypeInfo(This,iTInfo,lcid,ppTInfo) ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define ITIMEDVDPlayerObject_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define ITIMEDVDPlayerObject_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define ITIMEDVDPlayerObject_upperButtonSelect(This) ( (This)->lpVtbl -> upperButtonSelect(This) )
#define ITIMEDVDPlayerObject_lowerButtonSelect(This) ( (This)->lpVtbl -> lowerButtonSelect(This) )
#define ITIMEDVDPlayerObject_leftButtonSelect(This) ( (This)->lpVtbl -> leftButtonSelect(This) )
#define ITIMEDVDPlayerObject_rightButtonSelect(This) ( (This)->lpVtbl -> rightButtonSelect(This) )
#define ITIMEDVDPlayerObject_buttonActivate(This) ( (This)->lpVtbl -> buttonActivate(This) )
#define ITIMEDVDPlayerObject_gotoMenu(This) ( (This)->lpVtbl -> gotoMenu(This) )
#endif
#endif
#ifndef __ITIMEDMusicPlayerObject_INTERFACE_DEFINED__
#define __ITIMEDMusicPlayerObject_INTERFACE_DEFINED__
extern const IID IID_ITIMEDMusicPlayerObject;
typedef struct ITIMEDMusicPlayerObjectVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (ITIMEDMusicPlayerObject * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (ITIMEDMusicPlayerObject * This);
	ULONG(STDMETHODCALLTYPE * Release) (ITIMEDMusicPlayerObject * This);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfoCount) (ITIMEDMusicPlayerObject * This, UINT * pctinfo);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfo) (ITIMEDMusicPlayerObject * This, UINT iTInfo, LCID lcid, ITypeInfo ** ppTInfo);
	HRESULT(STDMETHODCALLTYPE * GetIDsOfNames) (ITIMEDMusicPlayerObject * This, REFIID riid, LPOLESTR * rgszNames, UINT cNames, LCID lcid, DISPID * rgDispId);
	HRESULT(STDMETHODCALLTYPE * Invoke) (ITIMEDMusicPlayerObject * This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS * pDispParams, VARIANT * pVarResult, EXCEPINFO * pExcepInfo, UINT * puArgErr);
	HRESULT(STDMETHODCALLTYPE * get_isDirectMusicInstalled) (ITIMEDMusicPlayerObject * This, VARIANT_BOOL * hasDM);
	END_INTERFACE
}  ITIMEDMusicPlayerObjectVtbl;
interface ITIMEDMusicPlayerObject
{
	CONST_VTBL struct ITIMEDMusicPlayerObjectVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define ITIMEDMusicPlayerObject_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define ITIMEDMusicPlayerObject_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define ITIMEDMusicPlayerObject_Release(This) ( (This)->lpVtbl -> Release(This) )
#define ITIMEDMusicPlayerObject_GetTypeInfoCount(This,pctinfo) ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define ITIMEDMusicPlayerObject_GetTypeInfo(This,iTInfo,lcid,ppTInfo) ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define ITIMEDMusicPlayerObject_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define ITIMEDMusicPlayerObject_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define ITIMEDMusicPlayerObject_get_isDirectMusicInstalled(This,hasDM) ( (This)->lpVtbl -> get_isDirectMusicInstalled(This,hasDM) )
#endif
#endif
#ifndef __ITIMEFactory_INTERFACE_DEFINED__
#define __ITIMEFactory_INTERFACE_DEFINED__
extern const IID IID_ITIMEFactory;
typedef struct ITIMEFactoryVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (ITIMEFactory * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (ITIMEFactory * This);
	ULONG(STDMETHODCALLTYPE * Release) (ITIMEFactory * This);
	END_INTERFACE
}  ITIMEFactoryVtbl;
interface ITIMEFactory
{
	CONST_VTBL struct ITIMEFactoryVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define ITIMEFactory_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define ITIMEFactory_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define ITIMEFactory_Release(This) ( (This)->lpVtbl -> Release(This) )
#endif
#endif
extern const CLSID CLSID_TIMEFactory;
#ifndef __IAnimationComposerFactory_INTERFACE_DEFINED__
#define __IAnimationComposerFactory_INTERFACE_DEFINED__
extern const IID IID_IAnimationComposerFactory;
typedef struct IAnimationComposerFactoryVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IAnimationComposerFactory * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IAnimationComposerFactory * This);
	ULONG(STDMETHODCALLTYPE * Release) (IAnimationComposerFactory * This);
	HRESULT(STDMETHODCALLTYPE * FindComposer) (IAnimationComposerFactory * This, IDispatch * targetElement, BSTR attributeName, IAnimationComposer ** animationComposer);
	END_INTERFACE
}  IAnimationComposerFactoryVtbl;
interface IAnimationComposerFactory
{
	CONST_VTBL struct IAnimationComposerFactoryVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IAnimationComposerFactory_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IAnimationComposerFactory_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IAnimationComposerFactory_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IAnimationComposerFactory_FindComposer(This,targetElement,attributeName,animationComposer) ( (This)->lpVtbl -> FindComposer(This,targetElement,attributeName,animationComposer) )
#endif
#endif
#ifndef __IAnimationComposerSiteFactory_INTERFACE_DEFINED__
#define __IAnimationComposerSiteFactory_INTERFACE_DEFINED__
extern const IID IID_IAnimationComposerSiteFactory;
typedef struct IAnimationComposerSiteFactoryVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IAnimationComposerSiteFactory * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IAnimationComposerSiteFactory * This);
	ULONG(STDMETHODCALLTYPE * Release) (IAnimationComposerSiteFactory * This);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfoCount) (IAnimationComposerSiteFactory * This, UINT * pctinfo);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfo) (IAnimationComposerSiteFactory * This, UINT iTInfo, LCID lcid, ITypeInfo ** ppTInfo);
	HRESULT(STDMETHODCALLTYPE * GetIDsOfNames) (IAnimationComposerSiteFactory * This, REFIID riid, LPOLESTR * rgszNames, UINT cNames, LCID lcid, DISPID * rgDispId);
	HRESULT(STDMETHODCALLTYPE * Invoke) (IAnimationComposerSiteFactory * This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS * pDispParams, VARIANT * pVarResult, EXCEPINFO * pExcepInfo, UINT * puArgErr);
	END_INTERFACE
}  IAnimationComposerSiteFactoryVtbl;
interface IAnimationComposerSiteFactory
{
	CONST_VTBL struct IAnimationComposerSiteFactoryVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IAnimationComposerSiteFactory_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IAnimationComposerSiteFactory_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IAnimationComposerSiteFactory_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IAnimationComposerSiteFactory_GetTypeInfoCount(This,pctinfo) ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define IAnimationComposerSiteFactory_GetTypeInfo(This,iTInfo,lcid,ppTInfo) ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define IAnimationComposerSiteFactory_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define IAnimationComposerSiteFactory_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#endif
#endif
#ifndef __ITIMEMediaPlayerSite_INTERFACE_DEFINED__
#define __ITIMEMediaPlayerSite_INTERFACE_DEFINED__
extern const IID IID_ITIMEMediaPlayerSite;
typedef struct ITIMEMediaPlayerSiteVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (ITIMEMediaPlayerSite * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (ITIMEMediaPlayerSite * This);
	ULONG(STDMETHODCALLTYPE * Release) (ITIMEMediaPlayerSite * This);
	HRESULT(STDMETHODCALLTYPE * get_timeElement) (ITIMEMediaPlayerSite * This, ITIMEElement ** pElm);
	HRESULT(STDMETHODCALLTYPE * get_timeState) (ITIMEMediaPlayerSite * This, ITIMEState ** pState);
	HRESULT(STDMETHODCALLTYPE * reportError) (ITIMEMediaPlayerSite * This, HRESULT hr, BSTR errorString);
	END_INTERFACE
}  ITIMEMediaPlayerSiteVtbl;
interface ITIMEMediaPlayerSite
{
	CONST_VTBL struct ITIMEMediaPlayerSiteVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define ITIMEMediaPlayerSite_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define ITIMEMediaPlayerSite_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define ITIMEMediaPlayerSite_Release(This) ( (This)->lpVtbl -> Release(This) )
#define ITIMEMediaPlayerSite_get_timeElement(This,pElm) ( (This)->lpVtbl -> get_timeElement(This,pElm) )
#define ITIMEMediaPlayerSite_get_timeState(This,pState) ( (This)->lpVtbl -> get_timeState(This,pState) )
#define ITIMEMediaPlayerSite_reportError(This,hr,errorString) ( (This)->lpVtbl -> reportError(This,hr,errorString) )
#endif
#endif
#ifndef __ITIMEMediaPlayer_INTERFACE_DEFINED__
#define __ITIMEMediaPlayer_INTERFACE_DEFINED__
extern const IID IID_ITIMEMediaPlayer;
typedef struct ITIMEMediaPlayerVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (ITIMEMediaPlayer * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (ITIMEMediaPlayer * This);
	ULONG(STDMETHODCALLTYPE * Release) (ITIMEMediaPlayer * This);
	HRESULT(STDMETHODCALLTYPE * Init) (ITIMEMediaPlayer * This, ITIMEMediaPlayerSite * mpsite);
	HRESULT(STDMETHODCALLTYPE * Detach) (ITIMEMediaPlayer * This);
	HRESULT(STDMETHODCALLTYPE * begin) (ITIMEMediaPlayer * This);
	HRESULT(STDMETHODCALLTYPE * end) (ITIMEMediaPlayer * This);
	HRESULT(STDMETHODCALLTYPE * resume) (ITIMEMediaPlayer * This);
	HRESULT(STDMETHODCALLTYPE * pause) (ITIMEMediaPlayer * This);
	HRESULT(STDMETHODCALLTYPE * repeat) (ITIMEMediaPlayer * This);
	HRESULT(STDMETHODCALLTYPE * reset) (ITIMEMediaPlayer * This);
	HRESULT(STDMETHODCALLTYPE * seek) (ITIMEMediaPlayer * This, double time);
	HRESULT(STDMETHODCALLTYPE * put_src) (ITIMEMediaPlayer * This, BSTR url);
	HRESULT(STDMETHODCALLTYPE * put_clipBegin) (ITIMEMediaPlayer * This, VARIANT b);
	HRESULT(STDMETHODCALLTYPE * put_clipEnd) (ITIMEMediaPlayer * This, VARIANT e);
	HRESULT(STDMETHODCALLTYPE * get_abstract) (ITIMEMediaPlayer * This, BSTR * abs);
	HRESULT(STDMETHODCALLTYPE * get_author) (ITIMEMediaPlayer * This, BSTR * auth);
	HRESULT(STDMETHODCALLTYPE * get_canPause) (ITIMEMediaPlayer * This, VARIANT_BOOL * b);
	HRESULT(STDMETHODCALLTYPE * get_canSeek) (ITIMEMediaPlayer * This, VARIANT_BOOL * b);
	HRESULT(STDMETHODCALLTYPE * get_clipDur) (ITIMEMediaPlayer * This, double *dur);
	HRESULT(STDMETHODCALLTYPE * get_copyright) (ITIMEMediaPlayer * This, BSTR * cpyrght);
	HRESULT(STDMETHODCALLTYPE * get_currTime) (ITIMEMediaPlayer * This, double *time);
	HRESULT(STDMETHODCALLTYPE * get_customObject) (ITIMEMediaPlayer * This, IDispatch ** disp);
	HRESULT(STDMETHODCALLTYPE * get_hasAudio) (ITIMEMediaPlayer * This, VARIANT_BOOL * b);
	HRESULT(STDMETHODCALLTYPE * get_hasVisual) (ITIMEMediaPlayer * This, VARIANT_BOOL * b);
	HRESULT(STDMETHODCALLTYPE * get_mediaDur) (ITIMEMediaPlayer * This, double *dur);
	HRESULT(STDMETHODCALLTYPE * get_mediaHeight) (ITIMEMediaPlayer * This, long *height);
	HRESULT(STDMETHODCALLTYPE * get_mediaWidth) (ITIMEMediaPlayer * This, long *width);
	HRESULT(STDMETHODCALLTYPE * get_playList) (ITIMEMediaPlayer * This, ITIMEPlayList ** pPlayList);
	HRESULT(STDMETHODCALLTYPE * get_rating) (ITIMEMediaPlayer * This, BSTR * rate);
	HRESULT(STDMETHODCALLTYPE * get_state) (ITIMEMediaPlayer * This, TimeState * ts);
	HRESULT(STDMETHODCALLTYPE * get_title) (ITIMEMediaPlayer * This, BSTR * name);
	END_INTERFACE
}  ITIMEMediaPlayerVtbl;
interface ITIMEMediaPlayer
{
	CONST_VTBL struct ITIMEMediaPlayerVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define ITIMEMediaPlayer_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define ITIMEMediaPlayer_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define ITIMEMediaPlayer_Release(This) ( (This)->lpVtbl -> Release(This) )
#define ITIMEMediaPlayer_Init(This,mpsite) ( (This)->lpVtbl -> Init(This,mpsite) )
#define ITIMEMediaPlayer_Detach(This) ( (This)->lpVtbl -> Detach(This) )
#define ITIMEMediaPlayer_begin(This) ( (This)->lpVtbl -> begin(This) )
#define ITIMEMediaPlayer_end(This) ( (This)->lpVtbl -> end(This) )
#define ITIMEMediaPlayer_resume(This) ( (This)->lpVtbl -> resume(This) )
#define ITIMEMediaPlayer_pause(This) ( (This)->lpVtbl -> pause(This) )
#define ITIMEMediaPlayer_repeat(This) ( (This)->lpVtbl -> repeat(This) )
#define ITIMEMediaPlayer_reset(This) ( (This)->lpVtbl -> reset(This) )
#define ITIMEMediaPlayer_seek(This,time) ( (This)->lpVtbl -> seek(This,time) )
#define ITIMEMediaPlayer_put_src(This,url) ( (This)->lpVtbl -> put_src(This,url) )
#define ITIMEMediaPlayer_put_clipBegin(This,b) ( (This)->lpVtbl -> put_clipBegin(This,b) )
#define ITIMEMediaPlayer_put_clipEnd(This,e) ( (This)->lpVtbl -> put_clipEnd(This,e) )
#define ITIMEMediaPlayer_get_abstract(This,abs) ( (This)->lpVtbl -> get_abstract(This,abs) )
#define ITIMEMediaPlayer_get_author(This,auth) ( (This)->lpVtbl -> get_author(This,auth) )
#define ITIMEMediaPlayer_get_canPause(This,b) ( (This)->lpVtbl -> get_canPause(This,b) )
#define ITIMEMediaPlayer_get_canSeek(This,b) ( (This)->lpVtbl -> get_canSeek(This,b) )
#define ITIMEMediaPlayer_get_clipDur(This,dur) ( (This)->lpVtbl -> get_clipDur(This,dur) )
#define ITIMEMediaPlayer_get_copyright(This,cpyrght) ( (This)->lpVtbl -> get_copyright(This,cpyrght) )
#define ITIMEMediaPlayer_get_currTime(This,time) ( (This)->lpVtbl -> get_currTime(This,time) )
#define ITIMEMediaPlayer_get_customObject(This,disp) ( (This)->lpVtbl -> get_customObject(This,disp) )
#define ITIMEMediaPlayer_get_hasAudio(This,b) ( (This)->lpVtbl -> get_hasAudio(This,b) )
#define ITIMEMediaPlayer_get_hasVisual(This,b) ( (This)->lpVtbl -> get_hasVisual(This,b) )
#define ITIMEMediaPlayer_get_mediaDur(This,dur) ( (This)->lpVtbl -> get_mediaDur(This,dur) )
#define ITIMEMediaPlayer_get_mediaHeight(This,height) ( (This)->lpVtbl -> get_mediaHeight(This,height) )
#define ITIMEMediaPlayer_get_mediaWidth(This,width) ( (This)->lpVtbl -> get_mediaWidth(This,width) )
#define ITIMEMediaPlayer_get_playList(This,pPlayList) ( (This)->lpVtbl -> get_playList(This,pPlayList) )
#define ITIMEMediaPlayer_get_rating(This,rate) ( (This)->lpVtbl -> get_rating(This,rate) )
#define ITIMEMediaPlayer_get_state(This,ts) ( (This)->lpVtbl -> get_state(This,ts) )
#define ITIMEMediaPlayer_get_title(This,name) ( (This)->lpVtbl -> get_title(This,name) )
#endif
#endif
#ifndef __ITIMEMediaPlayerAudio_INTERFACE_DEFINED__
#define __ITIMEMediaPlayerAudio_INTERFACE_DEFINED__
extern const IID IID_ITIMEMediaPlayerAudio;
typedef struct ITIMEMediaPlayerAudioVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (ITIMEMediaPlayerAudio * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (ITIMEMediaPlayerAudio * This);
	ULONG(STDMETHODCALLTYPE * Release) (ITIMEMediaPlayerAudio * This);
	HRESULT(STDMETHODCALLTYPE * put_volume) (ITIMEMediaPlayerAudio * This, float f);
	HRESULT(STDMETHODCALLTYPE * put_mute) (ITIMEMediaPlayerAudio * This, VARIANT_BOOL m);
	END_INTERFACE
}  ITIMEMediaPlayerAudioVtbl;
interface ITIMEMediaPlayerAudio
{
	CONST_VTBL struct ITIMEMediaPlayerAudioVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define ITIMEMediaPlayerAudio_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define ITIMEMediaPlayerAudio_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define ITIMEMediaPlayerAudio_Release(This) ( (This)->lpVtbl -> Release(This) )
#define ITIMEMediaPlayerAudio_put_volume(This,f) ( (This)->lpVtbl -> put_volume(This,f) )
#define ITIMEMediaPlayerAudio_put_mute(This,m) ( (This)->lpVtbl -> put_mute(This,m) )
#endif
#endif
#ifndef __ITIMEMediaPlayerNetwork_INTERFACE_DEFINED__
#define __ITIMEMediaPlayerNetwork_INTERFACE_DEFINED__
extern const IID IID_ITIMEMediaPlayerNetwork;
typedef struct ITIMEMediaPlayerNetworkVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (ITIMEMediaPlayerNetwork * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (ITIMEMediaPlayerNetwork * This);
	ULONG(STDMETHODCALLTYPE * Release) (ITIMEMediaPlayerNetwork * This);
	HRESULT(STDMETHODCALLTYPE * get_hasDownloadProgress) (ITIMEMediaPlayerNetwork * This, VARIANT_BOOL * b);
	HRESULT(STDMETHODCALLTYPE * get_downloadProgress) (ITIMEMediaPlayerNetwork * This, long *l);
	HRESULT(STDMETHODCALLTYPE * get_isBuffered) (ITIMEMediaPlayerNetwork * This, VARIANT_BOOL * b);
	HRESULT(STDMETHODCALLTYPE * get_bufferingProgress) (ITIMEMediaPlayerNetwork * This, long *l);
	END_INTERFACE
}  ITIMEMediaPlayerNetworkVtbl;
interface ITIMEMediaPlayerNetwork
{
	CONST_VTBL struct ITIMEMediaPlayerNetworkVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define ITIMEMediaPlayerNetwork_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define ITIMEMediaPlayerNetwork_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define ITIMEMediaPlayerNetwork_Release(This) ( (This)->lpVtbl -> Release(This) )
#define ITIMEMediaPlayerNetwork_get_hasDownloadProgress(This,b) ( (This)->lpVtbl -> get_hasDownloadProgress(This,b) )
#define ITIMEMediaPlayerNetwork_get_downloadProgress(This,l) ( (This)->lpVtbl -> get_downloadProgress(This,l) )
#define ITIMEMediaPlayerNetwork_get_isBuffered(This,b) ( (This)->lpVtbl -> get_isBuffered(This,b) )
#define ITIMEMediaPlayerNetwork_get_bufferingProgress(This,l) ( (This)->lpVtbl -> get_bufferingProgress(This,l) )
#endif
#endif
#ifndef __ITIMEMediaPlayerControl_INTERFACE_DEFINED__
#define __ITIMEMediaPlayerControl_INTERFACE_DEFINED__
extern const IID IID_ITIMEMediaPlayerControl;
typedef struct ITIMEMediaPlayerControlVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (ITIMEMediaPlayerControl * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (ITIMEMediaPlayerControl * This);
	ULONG(STDMETHODCALLTYPE * Release) (ITIMEMediaPlayerControl * This);
	HRESULT(STDMETHODCALLTYPE * getControl) (ITIMEMediaPlayerControl * This, IUnknown ** control);
	END_INTERFACE
}  ITIMEMediaPlayerControlVtbl;
interface ITIMEMediaPlayerControl
{
	CONST_VTBL struct ITIMEMediaPlayerControlVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define ITIMEMediaPlayerControl_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define ITIMEMediaPlayerControl_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define ITIMEMediaPlayerControl_Release(This) ( (This)->lpVtbl -> Release(This) )
#define ITIMEMediaPlayerControl_getControl(This,control) ( (This)->lpVtbl -> getControl(This,control) )
#endif
#endif
#endif
#endif

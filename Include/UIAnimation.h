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
#ifndef __UIAnimation_h__
#define __UIAnimation_h__
#if __POCC__ >= 500
#pragma once
#endif
#ifndef __IUIAnimationManager_FWD_DEFINED__
#define __IUIAnimationManager_FWD_DEFINED__
typedef interface IUIAnimationManager IUIAnimationManager;
#endif
#ifndef __IUIAnimationVariable_FWD_DEFINED__
#define __IUIAnimationVariable_FWD_DEFINED__
typedef interface IUIAnimationVariable IUIAnimationVariable;
#endif
#ifndef __IUIAnimationStoryboard_FWD_DEFINED__
#define __IUIAnimationStoryboard_FWD_DEFINED__
typedef interface IUIAnimationStoryboard IUIAnimationStoryboard;
#endif
#ifndef __IUIAnimationTransition_FWD_DEFINED__
#define __IUIAnimationTransition_FWD_DEFINED__
typedef interface IUIAnimationTransition IUIAnimationTransition;
#endif
#ifndef __IUIAnimationManagerEventHandler_FWD_DEFINED__
#define __IUIAnimationManagerEventHandler_FWD_DEFINED__
typedef interface IUIAnimationManagerEventHandler IUIAnimationManagerEventHandler;
#endif
#ifndef __IUIAnimationVariableChangeHandler_FWD_DEFINED__
#define __IUIAnimationVariableChangeHandler_FWD_DEFINED__
typedef interface IUIAnimationVariableChangeHandler IUIAnimationVariableChangeHandler;
#endif
#ifndef __IUIAnimationVariableIntegerChangeHandler_FWD_DEFINED__
#define __IUIAnimationVariableIntegerChangeHandler_FWD_DEFINED__
typedef interface IUIAnimationVariableIntegerChangeHandler IUIAnimationVariableIntegerChangeHandler;
#endif
#ifndef __IUIAnimationStoryboardEventHandler_FWD_DEFINED__
#define __IUIAnimationStoryboardEventHandler_FWD_DEFINED__
typedef interface IUIAnimationStoryboardEventHandler IUIAnimationStoryboardEventHandler;
#endif
#ifndef __IUIAnimationPriorityComparison_FWD_DEFINED__
#define __IUIAnimationPriorityComparison_FWD_DEFINED__
typedef interface IUIAnimationPriorityComparison IUIAnimationPriorityComparison;
#endif
#ifndef __IUIAnimationTransitionLibrary_FWD_DEFINED__
#define __IUIAnimationTransitionLibrary_FWD_DEFINED__
typedef interface IUIAnimationTransitionLibrary IUIAnimationTransitionLibrary;
#endif
#ifndef __IUIAnimationInterpolator_FWD_DEFINED__
#define __IUIAnimationInterpolator_FWD_DEFINED__
typedef interface IUIAnimationInterpolator IUIAnimationInterpolator;
#endif
#ifndef __IUIAnimationTransitionFactory_FWD_DEFINED__
#define __IUIAnimationTransitionFactory_FWD_DEFINED__
typedef interface IUIAnimationTransitionFactory IUIAnimationTransitionFactory;
#endif
#ifndef __IUIAnimationTimer_FWD_DEFINED__
#define __IUIAnimationTimer_FWD_DEFINED__
typedef interface IUIAnimationTimer IUIAnimationTimer;
#endif
#ifndef __IUIAnimationTimerUpdateHandler_FWD_DEFINED__
#define __IUIAnimationTimerUpdateHandler_FWD_DEFINED__
typedef interface IUIAnimationTimerUpdateHandler IUIAnimationTimerUpdateHandler;
#endif
#ifndef __IUIAnimationTimerClientEventHandler_FWD_DEFINED__
#define __IUIAnimationTimerClientEventHandler_FWD_DEFINED__
typedef interface IUIAnimationTimerClientEventHandler IUIAnimationTimerClientEventHandler;
#endif
#ifndef __IUIAnimationTimerEventHandler_FWD_DEFINED__
#define __IUIAnimationTimerEventHandler_FWD_DEFINED__
typedef interface IUIAnimationTimerEventHandler IUIAnimationTimerEventHandler;
#endif
#ifndef __UIAnimationManager_FWD_DEFINED__
#define __UIAnimationManager_FWD_DEFINED__
typedef struct UIAnimationManager UIAnimationManager;
#endif
#ifndef __UIAnimationTransitionLibrary_FWD_DEFINED__
#define __UIAnimationTransitionLibrary_FWD_DEFINED__
typedef struct UIAnimationTransitionLibrary UIAnimationTransitionLibrary;
#endif
#ifndef __UIAnimationTransitionFactory_FWD_DEFINED__
#define __UIAnimationTransitionFactory_FWD_DEFINED__
typedef struct UIAnimationTransitionFactory UIAnimationTransitionFactory;
#endif
#ifndef __UIAnimationTimer_FWD_DEFINED__
#define __UIAnimationTimer_FWD_DEFINED__
typedef struct UIAnimationTimer UIAnimationTimer;
#endif
#include "wtypes.h"
#include "unknwn.h"
typedef DOUBLE UI_ANIMATION_SECONDS;
#define	UI_ANIMATION_SECONDS_EVENTUALLY	( -1 )
typedef
enum __MIDL___MIDL_itf_UIAnimation_0000_0000_0001
    {	UI_ANIMATION_UPDATE_NO_CHANGE	= 0,
	UI_ANIMATION_UPDATE_VARIABLES_CHANGED	= 1
    } 	UI_ANIMATION_UPDATE_RESULT;
typedef
enum __MIDL___MIDL_itf_UIAnimation_0000_0000_0002
    {	UI_ANIMATION_MANAGER_IDLE	= 0,
	UI_ANIMATION_MANAGER_BUSY	= 1
    } 	UI_ANIMATION_MANAGER_STATUS;
typedef
enum __MIDL___MIDL_itf_UIAnimation_0000_0000_0003
    {	UI_ANIMATION_MODE_DISABLED	= 0,
	UI_ANIMATION_MODE_SYSTEM_DEFAULT	= 1,
	UI_ANIMATION_MODE_ENABLED	= 2
    } 	UI_ANIMATION_MODE;
extern RPC_IF_HANDLE __MIDL_itf_UIAnimation_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_UIAnimation_0000_0000_v0_0_s_ifspec;
#ifndef __IUIAnimationManager_INTERFACE_DEFINED__
#define __IUIAnimationManager_INTERFACE_DEFINED__
extern const IID IID_IUIAnimationManager;
typedef struct IUIAnimationManagerVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        IUIAnimationManager * This,
        REFIID riid,
        void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(
        IUIAnimationManager * This);
    ULONG ( STDMETHODCALLTYPE *Release )(
        IUIAnimationManager * This);
    HRESULT ( STDMETHODCALLTYPE *CreateAnimationVariable )(
        IUIAnimationManager * This,
        DOUBLE initialValue,
        IUIAnimationVariable **variable);
    HRESULT ( STDMETHODCALLTYPE *ScheduleTransition )(
        IUIAnimationManager * This,
        IUIAnimationVariable *variable,
        IUIAnimationTransition *transition,
        UI_ANIMATION_SECONDS timeNow);
    HRESULT ( STDMETHODCALLTYPE *CreateStoryboard )(
        IUIAnimationManager * This,
        IUIAnimationStoryboard **storyboard);
    HRESULT ( STDMETHODCALLTYPE *FinishAllStoryboards )(
        IUIAnimationManager * This,
        UI_ANIMATION_SECONDS completionDeadline);
    HRESULT ( STDMETHODCALLTYPE *AbandonAllStoryboards )(
        IUIAnimationManager * This);
    HRESULT ( STDMETHODCALLTYPE *Update )(
        IUIAnimationManager * This,
        UI_ANIMATION_SECONDS timeNow,
        UI_ANIMATION_UPDATE_RESULT *updateResult);
    HRESULT ( STDMETHODCALLTYPE *GetVariableFromTag )(
        IUIAnimationManager * This,
        IUnknown *object,
        UINT32 id,
        IUIAnimationVariable **variable);
    HRESULT ( STDMETHODCALLTYPE *GetStoryboardFromTag )(
        IUIAnimationManager * This,
        IUnknown *object,
        UINT32 id,
        IUIAnimationStoryboard **storyboard);
    HRESULT ( STDMETHODCALLTYPE *GetStatus )(
        IUIAnimationManager * This,
        UI_ANIMATION_MANAGER_STATUS *status);
    HRESULT ( STDMETHODCALLTYPE *SetAnimationMode )(
        IUIAnimationManager * This,
        UI_ANIMATION_MODE mode);
    HRESULT ( STDMETHODCALLTYPE *Pause )(
        IUIAnimationManager * This);
    HRESULT ( STDMETHODCALLTYPE *Resume )(
        IUIAnimationManager * This);
    HRESULT ( STDMETHODCALLTYPE *SetManagerEventHandler )(
        IUIAnimationManager * This,
        IUIAnimationManagerEventHandler *handler);
    HRESULT ( STDMETHODCALLTYPE *SetCancelPriorityComparison )(
        IUIAnimationManager * This,
        IUIAnimationPriorityComparison *comparison);
    HRESULT ( STDMETHODCALLTYPE *SetTrimPriorityComparison )(
        IUIAnimationManager * This,
        IUIAnimationPriorityComparison *comparison);
    HRESULT ( STDMETHODCALLTYPE *SetCompressPriorityComparison )(
        IUIAnimationManager * This,
        IUIAnimationPriorityComparison *comparison);
    HRESULT ( STDMETHODCALLTYPE *SetConcludePriorityComparison )(
        IUIAnimationManager * This,
        IUIAnimationPriorityComparison *comparison);
    HRESULT ( STDMETHODCALLTYPE *SetDefaultLongestAcceptableDelay )(
        IUIAnimationManager * This,
        UI_ANIMATION_SECONDS delay);
    HRESULT ( STDMETHODCALLTYPE *Shutdown )(
        IUIAnimationManager * This);
    END_INTERFACE
} IUIAnimationManagerVtbl;
interface IUIAnimationManager
{
    CONST_VTBL struct IUIAnimationManagerVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IUIAnimationManager_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IUIAnimationManager_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) )
#define IUIAnimationManager_Release(This)	\
    ( (This)->lpVtbl -> Release(This) )
#define IUIAnimationManager_CreateAnimationVariable(This,initialValue,variable)	\
    ( (This)->lpVtbl -> CreateAnimationVariable(This,initialValue,variable) )
#define IUIAnimationManager_ScheduleTransition(This,variable,transition,timeNow)	\
    ( (This)->lpVtbl -> ScheduleTransition(This,variable,transition,timeNow) )
#define IUIAnimationManager_CreateStoryboard(This,storyboard)	\
    ( (This)->lpVtbl -> CreateStoryboard(This,storyboard) )
#define IUIAnimationManager_FinishAllStoryboards(This,completionDeadline)	\
    ( (This)->lpVtbl -> FinishAllStoryboards(This,completionDeadline) )
#define IUIAnimationManager_AbandonAllStoryboards(This)	\
    ( (This)->lpVtbl -> AbandonAllStoryboards(This) )
#define IUIAnimationManager_Update(This,timeNow,updateResult)	\
    ( (This)->lpVtbl -> Update(This,timeNow,updateResult) )
#define IUIAnimationManager_GetVariableFromTag(This,object,id,variable)	\
    ( (This)->lpVtbl -> GetVariableFromTag(This,object,id,variable) )
#define IUIAnimationManager_GetStoryboardFromTag(This,object,id,storyboard)	\
    ( (This)->lpVtbl -> GetStoryboardFromTag(This,object,id,storyboard) )
#define IUIAnimationManager_GetStatus(This,status)	\
    ( (This)->lpVtbl -> GetStatus(This,status) )
#define IUIAnimationManager_SetAnimationMode(This,mode)	\
    ( (This)->lpVtbl -> SetAnimationMode(This,mode) )
#define IUIAnimationManager_Pause(This)	\
    ( (This)->lpVtbl -> Pause(This) )
#define IUIAnimationManager_Resume(This)	\
    ( (This)->lpVtbl -> Resume(This) )
#define IUIAnimationManager_SetManagerEventHandler(This,handler)	\
    ( (This)->lpVtbl -> SetManagerEventHandler(This,handler) )
#define IUIAnimationManager_SetCancelPriorityComparison(This,comparison)	\
    ( (This)->lpVtbl -> SetCancelPriorityComparison(This,comparison) )
#define IUIAnimationManager_SetTrimPriorityComparison(This,comparison)	\
    ( (This)->lpVtbl -> SetTrimPriorityComparison(This,comparison) )
#define IUIAnimationManager_SetCompressPriorityComparison(This,comparison)	\
    ( (This)->lpVtbl -> SetCompressPriorityComparison(This,comparison) )
#define IUIAnimationManager_SetConcludePriorityComparison(This,comparison)	\
    ( (This)->lpVtbl -> SetConcludePriorityComparison(This,comparison) )
#define IUIAnimationManager_SetDefaultLongestAcceptableDelay(This,delay)	\
    ( (This)->lpVtbl -> SetDefaultLongestAcceptableDelay(This,delay) )
#define IUIAnimationManager_Shutdown(This)	\
    ( (This)->lpVtbl -> Shutdown(This) )
#endif
#endif
typedef
enum __MIDL___MIDL_itf_UIAnimation_0000_0001_0001
    {	UI_ANIMATION_ROUNDING_NEAREST	= 0,
	UI_ANIMATION_ROUNDING_FLOOR	= 1,
	UI_ANIMATION_ROUNDING_CEILING	= 2
    } 	UI_ANIMATION_ROUNDING_MODE;
extern RPC_IF_HANDLE __MIDL_itf_UIAnimation_0000_0001_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_UIAnimation_0000_0001_v0_0_s_ifspec;
#ifndef __IUIAnimationVariable_INTERFACE_DEFINED__
#define __IUIAnimationVariable_INTERFACE_DEFINED__
extern const IID IID_IUIAnimationVariable;
typedef struct IUIAnimationVariableVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        IUIAnimationVariable * This,
        REFIID riid,
        void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(
        IUIAnimationVariable * This);
    ULONG ( STDMETHODCALLTYPE *Release )(
        IUIAnimationVariable * This);
    HRESULT ( STDMETHODCALLTYPE *GetValue )(
        IUIAnimationVariable * This,
        DOUBLE *value);
    HRESULT ( STDMETHODCALLTYPE *GetFinalValue )(
        IUIAnimationVariable * This,
        DOUBLE *finalValue);
    HRESULT ( STDMETHODCALLTYPE *GetPreviousValue )(
        IUIAnimationVariable * This,
        DOUBLE *previousValue);
    HRESULT ( STDMETHODCALLTYPE *GetIntegerValue )(
        IUIAnimationVariable * This,
        INT32 *value);
    HRESULT ( STDMETHODCALLTYPE *GetFinalIntegerValue )(
        IUIAnimationVariable * This,
        INT32 *finalValue);
    HRESULT ( STDMETHODCALLTYPE *GetPreviousIntegerValue )(
        IUIAnimationVariable * This,
        INT32 *previousValue);
    HRESULT ( STDMETHODCALLTYPE *GetCurrentStoryboard )(
        IUIAnimationVariable * This,
        IUIAnimationStoryboard **storyboard);
    HRESULT ( STDMETHODCALLTYPE *SetLowerBound )(
        IUIAnimationVariable * This,
        DOUBLE bound);
    HRESULT ( STDMETHODCALLTYPE *SetUpperBound )(
        IUIAnimationVariable * This,
        DOUBLE bound);
    HRESULT ( STDMETHODCALLTYPE *SetRoundingMode )(
        IUIAnimationVariable * This,
        UI_ANIMATION_ROUNDING_MODE mode);
    HRESULT ( STDMETHODCALLTYPE *SetTag )(
        IUIAnimationVariable * This,
        IUnknown *object,
        UINT32 id);
    HRESULT ( STDMETHODCALLTYPE *GetTag )(
        IUIAnimationVariable * This,
        IUnknown **object,
        UINT32 *id);
    HRESULT ( STDMETHODCALLTYPE *SetVariableChangeHandler )(
        IUIAnimationVariable * This,
        IUIAnimationVariableChangeHandler *handler);
    HRESULT ( STDMETHODCALLTYPE *SetVariableIntegerChangeHandler )(
        IUIAnimationVariable * This,
        IUIAnimationVariableIntegerChangeHandler *handler);
    END_INTERFACE
} IUIAnimationVariableVtbl;
interface IUIAnimationVariable
{
    CONST_VTBL struct IUIAnimationVariableVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IUIAnimationVariable_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IUIAnimationVariable_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) )
#define IUIAnimationVariable_Release(This)	\
    ( (This)->lpVtbl -> Release(This) )
#define IUIAnimationVariable_GetValue(This,value)	\
    ( (This)->lpVtbl -> GetValue(This,value) )
#define IUIAnimationVariable_GetFinalValue(This,finalValue)	\
    ( (This)->lpVtbl -> GetFinalValue(This,finalValue) )
#define IUIAnimationVariable_GetPreviousValue(This,previousValue)	\
    ( (This)->lpVtbl -> GetPreviousValue(This,previousValue) )
#define IUIAnimationVariable_GetIntegerValue(This,value)	\
    ( (This)->lpVtbl -> GetIntegerValue(This,value) )
#define IUIAnimationVariable_GetFinalIntegerValue(This,finalValue)	\
    ( (This)->lpVtbl -> GetFinalIntegerValue(This,finalValue) )
#define IUIAnimationVariable_GetPreviousIntegerValue(This,previousValue)	\
    ( (This)->lpVtbl -> GetPreviousIntegerValue(This,previousValue) )
#define IUIAnimationVariable_GetCurrentStoryboard(This,storyboard)	\
    ( (This)->lpVtbl -> GetCurrentStoryboard(This,storyboard) )
#define IUIAnimationVariable_SetLowerBound(This,bound)	\
    ( (This)->lpVtbl -> SetLowerBound(This,bound) )
#define IUIAnimationVariable_SetUpperBound(This,bound)	\
    ( (This)->lpVtbl -> SetUpperBound(This,bound) )
#define IUIAnimationVariable_SetRoundingMode(This,mode)	\
    ( (This)->lpVtbl -> SetRoundingMode(This,mode) )
#define IUIAnimationVariable_SetTag(This,object,id)	\
    ( (This)->lpVtbl -> SetTag(This,object,id) )
#define IUIAnimationVariable_GetTag(This,object,id)	\
    ( (This)->lpVtbl -> GetTag(This,object,id) )
#define IUIAnimationVariable_SetVariableChangeHandler(This,handler)	\
    ( (This)->lpVtbl -> SetVariableChangeHandler(This,handler) )
#define IUIAnimationVariable_SetVariableIntegerChangeHandler(This,handler)	\
    ( (This)->lpVtbl -> SetVariableIntegerChangeHandler(This,handler) )
#endif
#endif
typedef
enum __MIDL___MIDL_itf_UIAnimation_0000_0002_0001
    {	UI_ANIMATION_STORYBOARD_BUILDING	= 0,
	UI_ANIMATION_STORYBOARD_SCHEDULED	= 1,
	UI_ANIMATION_STORYBOARD_CANCELLED	= 2,
	UI_ANIMATION_STORYBOARD_PLAYING	= 3,
	UI_ANIMATION_STORYBOARD_TRUNCATED	= 4,
	UI_ANIMATION_STORYBOARD_FINISHED	= 5,
	UI_ANIMATION_STORYBOARD_READY	= 6,
	UI_ANIMATION_STORYBOARD_INSUFFICIENT_PRIORITY	= 7
    } 	UI_ANIMATION_STORYBOARD_STATUS;
typedef
enum __MIDL___MIDL_itf_UIAnimation_0000_0002_0002
    {	UI_ANIMATION_SCHEDULING_UNEXPECTED_FAILURE	= 0,
	UI_ANIMATION_SCHEDULING_INSUFFICIENT_PRIORITY	= 1,
	UI_ANIMATION_SCHEDULING_ALREADY_SCHEDULED	= 2,
	UI_ANIMATION_SCHEDULING_SUCCEEDED	= 3,
	UI_ANIMATION_SCHEDULING_DEFERRED	= 4
    } 	UI_ANIMATION_SCHEDULING_RESULT;
typedef struct __MIDL___MIDL_itf_UIAnimation_0000_0002_0003
    {
    int _;
    } 	*UI_ANIMATION_KEYFRAME;
#define	UI_ANIMATION_KEYFRAME_STORYBOARD_START	( ( UI_ANIMATION_KEYFRAME  )-1 )
#define	UI_ANIMATION_REPEAT_INDEFINITELY	( -1 )
extern RPC_IF_HANDLE __MIDL_itf_UIAnimation_0000_0002_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_UIAnimation_0000_0002_v0_0_s_ifspec;
#ifndef __IUIAnimationStoryboard_INTERFACE_DEFINED__
#define __IUIAnimationStoryboard_INTERFACE_DEFINED__
extern const IID IID_IUIAnimationStoryboard;
typedef struct IUIAnimationStoryboardVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        IUIAnimationStoryboard * This,
        REFIID riid,
        void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(
        IUIAnimationStoryboard * This);
    ULONG ( STDMETHODCALLTYPE *Release )(
        IUIAnimationStoryboard * This);
    HRESULT ( STDMETHODCALLTYPE *AddTransition )(
        IUIAnimationStoryboard * This,
        IUIAnimationVariable *variable,
        IUIAnimationTransition *transition);
    HRESULT ( STDMETHODCALLTYPE *AddKeyframeAtOffset )(
        IUIAnimationStoryboard * This,
        UI_ANIMATION_KEYFRAME existingKeyframe,
        UI_ANIMATION_SECONDS offset,
        UI_ANIMATION_KEYFRAME *keyframe);
    HRESULT ( STDMETHODCALLTYPE *AddKeyframeAfterTransition )(
        IUIAnimationStoryboard * This,
        IUIAnimationTransition *transition,
        UI_ANIMATION_KEYFRAME *keyframe);
    HRESULT ( STDMETHODCALLTYPE *AddTransitionAtKeyframe )(
        IUIAnimationStoryboard * This,
        IUIAnimationVariable *variable,
        IUIAnimationTransition *transition,
        UI_ANIMATION_KEYFRAME startKeyframe);
    HRESULT ( STDMETHODCALLTYPE *AddTransitionBetweenKeyframes )(
        IUIAnimationStoryboard * This,
        IUIAnimationVariable *variable,
        IUIAnimationTransition *transition,
        UI_ANIMATION_KEYFRAME startKeyframe,
        UI_ANIMATION_KEYFRAME endKeyframe);
    HRESULT ( STDMETHODCALLTYPE *RepeatBetweenKeyframes )(
        IUIAnimationStoryboard * This,
        UI_ANIMATION_KEYFRAME startKeyframe,
        UI_ANIMATION_KEYFRAME endKeyframe,
        INT32 repetitionCount);
    HRESULT ( STDMETHODCALLTYPE *HoldVariable )(
        IUIAnimationStoryboard * This,
        IUIAnimationVariable *variable);
    HRESULT ( STDMETHODCALLTYPE *SetLongestAcceptableDelay )(
        IUIAnimationStoryboard * This,
        UI_ANIMATION_SECONDS delay);
    HRESULT ( STDMETHODCALLTYPE *Schedule )(
        IUIAnimationStoryboard * This,
        UI_ANIMATION_SECONDS timeNow,
        UI_ANIMATION_SCHEDULING_RESULT *schedulingResult);
    HRESULT ( STDMETHODCALLTYPE *Conclude )(
        IUIAnimationStoryboard * This);
    HRESULT ( STDMETHODCALLTYPE *Finish )(
        IUIAnimationStoryboard * This,
        UI_ANIMATION_SECONDS completionDeadline);
    HRESULT ( STDMETHODCALLTYPE *Abandon )(
        IUIAnimationStoryboard * This);
    HRESULT ( STDMETHODCALLTYPE *SetTag )(
        IUIAnimationStoryboard * This,
        IUnknown *object,
        UINT32 id);
    HRESULT ( STDMETHODCALLTYPE *GetTag )(
        IUIAnimationStoryboard * This,
        IUnknown **object,
        UINT32 *id);
    HRESULT ( STDMETHODCALLTYPE *GetStatus )(
        IUIAnimationStoryboard * This,
        UI_ANIMATION_STORYBOARD_STATUS *status);
    HRESULT ( STDMETHODCALLTYPE *GetElapsedTime )(
        IUIAnimationStoryboard * This,
        UI_ANIMATION_SECONDS *elapsedTime);
    HRESULT ( STDMETHODCALLTYPE *SetStoryboardEventHandler )(
        IUIAnimationStoryboard * This,
        IUIAnimationStoryboardEventHandler *handler);
    END_INTERFACE
} IUIAnimationStoryboardVtbl;
interface IUIAnimationStoryboard
{
    CONST_VTBL struct IUIAnimationStoryboardVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IUIAnimationStoryboard_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IUIAnimationStoryboard_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) )
#define IUIAnimationStoryboard_Release(This)	\
    ( (This)->lpVtbl -> Release(This) )
#define IUIAnimationStoryboard_AddTransition(This,variable,transition)	\
    ( (This)->lpVtbl -> AddTransition(This,variable,transition) )
#define IUIAnimationStoryboard_AddKeyframeAtOffset(This,existingKeyframe,offset,keyframe)	\
    ( (This)->lpVtbl -> AddKeyframeAtOffset(This,existingKeyframe,offset,keyframe) )
#define IUIAnimationStoryboard_AddKeyframeAfterTransition(This,transition,keyframe)	\
    ( (This)->lpVtbl -> AddKeyframeAfterTransition(This,transition,keyframe) )
#define IUIAnimationStoryboard_AddTransitionAtKeyframe(This,variable,transition,startKeyframe)	\
    ( (This)->lpVtbl -> AddTransitionAtKeyframe(This,variable,transition,startKeyframe) )
#define IUIAnimationStoryboard_AddTransitionBetweenKeyframes(This,variable,transition,startKeyframe,endKeyframe)	\
    ( (This)->lpVtbl -> AddTransitionBetweenKeyframes(This,variable,transition,startKeyframe,endKeyframe) )
#define IUIAnimationStoryboard_RepeatBetweenKeyframes(This,startKeyframe,endKeyframe,repetitionCount)	\
    ( (This)->lpVtbl -> RepeatBetweenKeyframes(This,startKeyframe,endKeyframe,repetitionCount) )
#define IUIAnimationStoryboard_HoldVariable(This,variable)	\
    ( (This)->lpVtbl -> HoldVariable(This,variable) )
#define IUIAnimationStoryboard_SetLongestAcceptableDelay(This,delay)	\
    ( (This)->lpVtbl -> SetLongestAcceptableDelay(This,delay) )
#define IUIAnimationStoryboard_Schedule(This,timeNow,schedulingResult)	\
    ( (This)->lpVtbl -> Schedule(This,timeNow,schedulingResult) )
#define IUIAnimationStoryboard_Conclude(This)	\
    ( (This)->lpVtbl -> Conclude(This) )
#define IUIAnimationStoryboard_Finish(This,completionDeadline)	\
    ( (This)->lpVtbl -> Finish(This,completionDeadline) )
#define IUIAnimationStoryboard_Abandon(This)	\
    ( (This)->lpVtbl -> Abandon(This) )
#define IUIAnimationStoryboard_SetTag(This,object,id)	\
    ( (This)->lpVtbl -> SetTag(This,object,id) )
#define IUIAnimationStoryboard_GetTag(This,object,id)	\
    ( (This)->lpVtbl -> GetTag(This,object,id) )
#define IUIAnimationStoryboard_GetStatus(This,status)	\
    ( (This)->lpVtbl -> GetStatus(This,status) )
#define IUIAnimationStoryboard_GetElapsedTime(This,elapsedTime)	\
    ( (This)->lpVtbl -> GetElapsedTime(This,elapsedTime) )
#define IUIAnimationStoryboard_SetStoryboardEventHandler(This,handler)	\
    ( (This)->lpVtbl -> SetStoryboardEventHandler(This,handler) )
#endif
#endif
#ifndef __IUIAnimationTransition_INTERFACE_DEFINED__
#define __IUIAnimationTransition_INTERFACE_DEFINED__
extern const IID IID_IUIAnimationTransition;
typedef struct IUIAnimationTransitionVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        IUIAnimationTransition * This,
        REFIID riid,
        void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(
        IUIAnimationTransition * This);
    ULONG ( STDMETHODCALLTYPE *Release )(
        IUIAnimationTransition * This);
    HRESULT ( STDMETHODCALLTYPE *SetInitialValue )(
        IUIAnimationTransition * This,
        DOUBLE value);
    HRESULT ( STDMETHODCALLTYPE *SetInitialVelocity )(
        IUIAnimationTransition * This,
        DOUBLE velocity);
    HRESULT ( STDMETHODCALLTYPE *IsDurationKnown )(
        IUIAnimationTransition * This);
    HRESULT ( STDMETHODCALLTYPE *GetDuration )(
        IUIAnimationTransition * This,
        UI_ANIMATION_SECONDS *duration);
    END_INTERFACE
} IUIAnimationTransitionVtbl;
interface IUIAnimationTransition
{
    CONST_VTBL struct IUIAnimationTransitionVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IUIAnimationTransition_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IUIAnimationTransition_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) )
#define IUIAnimationTransition_Release(This)	\
    ( (This)->lpVtbl -> Release(This) )
#define IUIAnimationTransition_SetInitialValue(This,value)	\
    ( (This)->lpVtbl -> SetInitialValue(This,value) )
#define IUIAnimationTransition_SetInitialVelocity(This,velocity)	\
    ( (This)->lpVtbl -> SetInitialVelocity(This,velocity) )
#define IUIAnimationTransition_IsDurationKnown(This)	\
    ( (This)->lpVtbl -> IsDurationKnown(This) )
#define IUIAnimationTransition_GetDuration(This,duration)	\
    ( (This)->lpVtbl -> GetDuration(This,duration) )
#endif
#endif
#ifndef __IUIAnimationManagerEventHandler_INTERFACE_DEFINED__
#define __IUIAnimationManagerEventHandler_INTERFACE_DEFINED__
extern const IID IID_IUIAnimationManagerEventHandler;
typedef struct IUIAnimationManagerEventHandlerVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        IUIAnimationManagerEventHandler * This,
        REFIID riid,
        void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(
        IUIAnimationManagerEventHandler * This);
    ULONG ( STDMETHODCALLTYPE *Release )(
        IUIAnimationManagerEventHandler * This);
    HRESULT ( STDMETHODCALLTYPE *OnManagerStatusChanged )(
        IUIAnimationManagerEventHandler * This,
        UI_ANIMATION_MANAGER_STATUS newStatus,
        UI_ANIMATION_MANAGER_STATUS previousStatus);
    END_INTERFACE
} IUIAnimationManagerEventHandlerVtbl;
interface IUIAnimationManagerEventHandler
{
    CONST_VTBL struct IUIAnimationManagerEventHandlerVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IUIAnimationManagerEventHandler_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IUIAnimationManagerEventHandler_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) )
#define IUIAnimationManagerEventHandler_Release(This)	\
    ( (This)->lpVtbl -> Release(This) )
#define IUIAnimationManagerEventHandler_OnManagerStatusChanged(This,newStatus,previousStatus)	\
    ( (This)->lpVtbl -> OnManagerStatusChanged(This,newStatus,previousStatus) )
#endif
#endif
#ifndef __IUIAnimationVariableChangeHandler_INTERFACE_DEFINED__
#define __IUIAnimationVariableChangeHandler_INTERFACE_DEFINED__
extern const IID IID_IUIAnimationVariableChangeHandler;
typedef struct IUIAnimationVariableChangeHandlerVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        IUIAnimationVariableChangeHandler * This,
        REFIID riid,
        void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(
        IUIAnimationVariableChangeHandler * This);
    ULONG ( STDMETHODCALLTYPE *Release )(
        IUIAnimationVariableChangeHandler * This);
    HRESULT ( STDMETHODCALLTYPE *OnValueChanged )(
        IUIAnimationVariableChangeHandler * This,
        IUIAnimationStoryboard *storyboard,
        IUIAnimationVariable *variable,
        DOUBLE newValue,
        DOUBLE previousValue);
    END_INTERFACE
} IUIAnimationVariableChangeHandlerVtbl;
interface IUIAnimationVariableChangeHandler
{
    CONST_VTBL struct IUIAnimationVariableChangeHandlerVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IUIAnimationVariableChangeHandler_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IUIAnimationVariableChangeHandler_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) )
#define IUIAnimationVariableChangeHandler_Release(This)	\
    ( (This)->lpVtbl -> Release(This) )
#define IUIAnimationVariableChangeHandler_OnValueChanged(This,storyboard,variable,newValue,previousValue)	\
    ( (This)->lpVtbl -> OnValueChanged(This,storyboard,variable,newValue,previousValue) )
#endif
#endif
#ifndef __IUIAnimationVariableIntegerChangeHandler_INTERFACE_DEFINED__
#define __IUIAnimationVariableIntegerChangeHandler_INTERFACE_DEFINED__
extern const IID IID_IUIAnimationVariableIntegerChangeHandler;
typedef struct IUIAnimationVariableIntegerChangeHandlerVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        IUIAnimationVariableIntegerChangeHandler * This,
        REFIID riid,
        void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(
        IUIAnimationVariableIntegerChangeHandler * This);
    ULONG ( STDMETHODCALLTYPE *Release )(
        IUIAnimationVariableIntegerChangeHandler * This);
    HRESULT ( STDMETHODCALLTYPE *OnIntegerValueChanged )(
        IUIAnimationVariableIntegerChangeHandler * This,
        IUIAnimationStoryboard *storyboard,
        IUIAnimationVariable *variable,
        INT32 newValue,
        INT32 previousValue);
    END_INTERFACE
} IUIAnimationVariableIntegerChangeHandlerVtbl;
interface IUIAnimationVariableIntegerChangeHandler
{
    CONST_VTBL struct IUIAnimationVariableIntegerChangeHandlerVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IUIAnimationVariableIntegerChangeHandler_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IUIAnimationVariableIntegerChangeHandler_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) )
#define IUIAnimationVariableIntegerChangeHandler_Release(This)	\
    ( (This)->lpVtbl -> Release(This) )
#define IUIAnimationVariableIntegerChangeHandler_OnIntegerValueChanged(This,storyboard,variable,newValue,previousValue)	\
    ( (This)->lpVtbl -> OnIntegerValueChanged(This,storyboard,variable,newValue,previousValue) )
#endif
#endif
#ifndef __IUIAnimationStoryboardEventHandler_INTERFACE_DEFINED__
#define __IUIAnimationStoryboardEventHandler_INTERFACE_DEFINED__
extern const IID IID_IUIAnimationStoryboardEventHandler;
typedef struct IUIAnimationStoryboardEventHandlerVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        IUIAnimationStoryboardEventHandler * This,
        REFIID riid,
        void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(
        IUIAnimationStoryboardEventHandler * This);
    ULONG ( STDMETHODCALLTYPE *Release )(
        IUIAnimationStoryboardEventHandler * This);
    HRESULT ( STDMETHODCALLTYPE *OnStoryboardStatusChanged )(
        IUIAnimationStoryboardEventHandler * This,
        IUIAnimationStoryboard *storyboard,
        UI_ANIMATION_STORYBOARD_STATUS newStatus,
        UI_ANIMATION_STORYBOARD_STATUS previousStatus);
    HRESULT ( STDMETHODCALLTYPE *OnStoryboardUpdated )(
        IUIAnimationStoryboardEventHandler * This,
        IUIAnimationStoryboard *storyboard);
    END_INTERFACE
} IUIAnimationStoryboardEventHandlerVtbl;
interface IUIAnimationStoryboardEventHandler
{
    CONST_VTBL struct IUIAnimationStoryboardEventHandlerVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IUIAnimationStoryboardEventHandler_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IUIAnimationStoryboardEventHandler_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) )
#define IUIAnimationStoryboardEventHandler_Release(This)	\
    ( (This)->lpVtbl -> Release(This) )
#define IUIAnimationStoryboardEventHandler_OnStoryboardStatusChanged(This,storyboard,newStatus,previousStatus)	\
    ( (This)->lpVtbl -> OnStoryboardStatusChanged(This,storyboard,newStatus,previousStatus) )
#define IUIAnimationStoryboardEventHandler_OnStoryboardUpdated(This,storyboard)	\
    ( (This)->lpVtbl -> OnStoryboardUpdated(This,storyboard) )
#endif
#endif
typedef
enum __MIDL___MIDL_itf_UIAnimation_0000_0008_0001
    {	UI_ANIMATION_PRIORITY_EFFECT_FAILURE	= 0,
	UI_ANIMATION_PRIORITY_EFFECT_DELAY	= 1
    } 	UI_ANIMATION_PRIORITY_EFFECT;
extern RPC_IF_HANDLE __MIDL_itf_UIAnimation_0000_0008_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_UIAnimation_0000_0008_v0_0_s_ifspec;
#ifndef __IUIAnimationPriorityComparison_INTERFACE_DEFINED__
#define __IUIAnimationPriorityComparison_INTERFACE_DEFINED__
extern const IID IID_IUIAnimationPriorityComparison;
typedef struct IUIAnimationPriorityComparisonVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        IUIAnimationPriorityComparison * This,
        REFIID riid,
        void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(
        IUIAnimationPriorityComparison * This);
    ULONG ( STDMETHODCALLTYPE *Release )(
        IUIAnimationPriorityComparison * This);
    HRESULT ( STDMETHODCALLTYPE *HasPriority )(
        IUIAnimationPriorityComparison * This,
        IUIAnimationStoryboard *scheduledStoryboard,
        IUIAnimationStoryboard *newStoryboard,
        UI_ANIMATION_PRIORITY_EFFECT priorityEffect);
    END_INTERFACE
} IUIAnimationPriorityComparisonVtbl;
interface IUIAnimationPriorityComparison
{
    CONST_VTBL struct IUIAnimationPriorityComparisonVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IUIAnimationPriorityComparison_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IUIAnimationPriorityComparison_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) )
#define IUIAnimationPriorityComparison_Release(This)	\
    ( (This)->lpVtbl -> Release(This) )
#define IUIAnimationPriorityComparison_HasPriority(This,scheduledStoryboard,newStoryboard,priorityEffect)	\
    ( (This)->lpVtbl -> HasPriority(This,scheduledStoryboard,newStoryboard,priorityEffect) )
#endif
#endif
typedef
enum __MIDL___MIDL_itf_UIAnimation_0000_0009_0001
    {	UI_ANIMATION_SLOPE_INCREASING	= 0,
	UI_ANIMATION_SLOPE_DECREASING	= 1
    } 	UI_ANIMATION_SLOPE;
extern RPC_IF_HANDLE __MIDL_itf_UIAnimation_0000_0009_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_UIAnimation_0000_0009_v0_0_s_ifspec;
#ifndef __IUIAnimationTransitionLibrary_INTERFACE_DEFINED__
#define __IUIAnimationTransitionLibrary_INTERFACE_DEFINED__
extern const IID IID_IUIAnimationTransitionLibrary;
typedef struct IUIAnimationTransitionLibraryVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        IUIAnimationTransitionLibrary * This,
        REFIID riid,
        void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(
        IUIAnimationTransitionLibrary * This);
    ULONG ( STDMETHODCALLTYPE *Release )(
        IUIAnimationTransitionLibrary * This);
    HRESULT ( STDMETHODCALLTYPE *CreateInstantaneousTransition )(
        IUIAnimationTransitionLibrary * This,
        DOUBLE finalValue,
        IUIAnimationTransition **transition);
    HRESULT ( STDMETHODCALLTYPE *CreateConstantTransition )(
        IUIAnimationTransitionLibrary * This,
        UI_ANIMATION_SECONDS duration,
        IUIAnimationTransition **transition);
    HRESULT ( STDMETHODCALLTYPE *CreateDiscreteTransition )(
        IUIAnimationTransitionLibrary * This,
        UI_ANIMATION_SECONDS delay,
        DOUBLE finalValue,
        UI_ANIMATION_SECONDS hold,
        IUIAnimationTransition **transition);
    HRESULT ( STDMETHODCALLTYPE *CreateLinearTransition )(
        IUIAnimationTransitionLibrary * This,
        UI_ANIMATION_SECONDS duration,
        DOUBLE finalValue,
        IUIAnimationTransition **transition);
    HRESULT ( STDMETHODCALLTYPE *CreateLinearTransitionFromSpeed )(
        IUIAnimationTransitionLibrary * This,
        DOUBLE speed,
        DOUBLE finalValue,
        IUIAnimationTransition **transition);
    HRESULT ( STDMETHODCALLTYPE *CreateSinusoidalTransitionFromVelocity )(
        IUIAnimationTransitionLibrary * This,
        UI_ANIMATION_SECONDS duration,
        UI_ANIMATION_SECONDS period,
        IUIAnimationTransition **transition);
    HRESULT ( STDMETHODCALLTYPE *CreateSinusoidalTransitionFromRange )(
        IUIAnimationTransitionLibrary * This,
        UI_ANIMATION_SECONDS duration,
        DOUBLE minimumValue,
        DOUBLE maximumValue,
        UI_ANIMATION_SECONDS period,
        UI_ANIMATION_SLOPE slope,
        IUIAnimationTransition **transition);
    HRESULT ( STDMETHODCALLTYPE *CreateAccelerateDecelerateTransition )(
        IUIAnimationTransitionLibrary * This,
        UI_ANIMATION_SECONDS duration,
        DOUBLE finalValue,
        DOUBLE accelerationRatio,
        DOUBLE decelerationRatio,
        IUIAnimationTransition **transition);
    HRESULT ( STDMETHODCALLTYPE *CreateReversalTransition )(
        IUIAnimationTransitionLibrary * This,
        UI_ANIMATION_SECONDS duration,
        IUIAnimationTransition **transition);
    HRESULT ( STDMETHODCALLTYPE *CreateCubicTransition )(
        IUIAnimationTransitionLibrary * This,
        UI_ANIMATION_SECONDS duration,
        DOUBLE finalValue,
        DOUBLE finalVelocity,
        IUIAnimationTransition **transition);
    HRESULT ( STDMETHODCALLTYPE *CreateSmoothStopTransition )(
        IUIAnimationTransitionLibrary * This,
        UI_ANIMATION_SECONDS maximumDuration,
        DOUBLE finalValue,
        IUIAnimationTransition **transition);
    HRESULT ( STDMETHODCALLTYPE *CreateParabolicTransitionFromAcceleration )(
        IUIAnimationTransitionLibrary * This,
        DOUBLE finalValue,
        DOUBLE finalVelocity,
        DOUBLE acceleration,
        IUIAnimationTransition **transition);
    END_INTERFACE
} IUIAnimationTransitionLibraryVtbl;
interface IUIAnimationTransitionLibrary
{
    CONST_VTBL struct IUIAnimationTransitionLibraryVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IUIAnimationTransitionLibrary_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IUIAnimationTransitionLibrary_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) )
#define IUIAnimationTransitionLibrary_Release(This)	\
    ( (This)->lpVtbl -> Release(This) )
#define IUIAnimationTransitionLibrary_CreateInstantaneousTransition(This,finalValue,transition)	\
    ( (This)->lpVtbl -> CreateInstantaneousTransition(This,finalValue,transition) )
#define IUIAnimationTransitionLibrary_CreateConstantTransition(This,duration,transition)	\
    ( (This)->lpVtbl -> CreateConstantTransition(This,duration,transition) )
#define IUIAnimationTransitionLibrary_CreateDiscreteTransition(This,delay,finalValue,hold,transition)	\
    ( (This)->lpVtbl -> CreateDiscreteTransition(This,delay,finalValue,hold,transition) )
#define IUIAnimationTransitionLibrary_CreateLinearTransition(This,duration,finalValue,transition)	\
    ( (This)->lpVtbl -> CreateLinearTransition(This,duration,finalValue,transition) )
#define IUIAnimationTransitionLibrary_CreateLinearTransitionFromSpeed(This,speed,finalValue,transition)	\
    ( (This)->lpVtbl -> CreateLinearTransitionFromSpeed(This,speed,finalValue,transition) )
#define IUIAnimationTransitionLibrary_CreateSinusoidalTransitionFromVelocity(This,duration,period,transition)	\
    ( (This)->lpVtbl -> CreateSinusoidalTransitionFromVelocity(This,duration,period,transition) )
#define IUIAnimationTransitionLibrary_CreateSinusoidalTransitionFromRange(This,duration,minimumValue,maximumValue,period,slope,transition)	\
    ( (This)->lpVtbl -> CreateSinusoidalTransitionFromRange(This,duration,minimumValue,maximumValue,period,slope,transition) )
#define IUIAnimationTransitionLibrary_CreateAccelerateDecelerateTransition(This,duration,finalValue,accelerationRatio,decelerationRatio,transition)	\
    ( (This)->lpVtbl -> CreateAccelerateDecelerateTransition(This,duration,finalValue,accelerationRatio,decelerationRatio,transition) )
#define IUIAnimationTransitionLibrary_CreateReversalTransition(This,duration,transition)	\
    ( (This)->lpVtbl -> CreateReversalTransition(This,duration,transition) )
#define IUIAnimationTransitionLibrary_CreateCubicTransition(This,duration,finalValue,finalVelocity,transition)	\
    ( (This)->lpVtbl -> CreateCubicTransition(This,duration,finalValue,finalVelocity,transition) )
#define IUIAnimationTransitionLibrary_CreateSmoothStopTransition(This,maximumDuration,finalValue,transition)	\
    ( (This)->lpVtbl -> CreateSmoothStopTransition(This,maximumDuration,finalValue,transition) )
#define IUIAnimationTransitionLibrary_CreateParabolicTransitionFromAcceleration(This,finalValue,finalVelocity,acceleration,transition)	\
    ( (This)->lpVtbl -> CreateParabolicTransitionFromAcceleration(This,finalValue,finalVelocity,acceleration,transition) )
#endif
#endif
typedef
enum __MIDL___MIDL_itf_UIAnimation_0000_0010_0001
    {	UI_ANIMATION_DEPENDENCY_NONE	= 0,
	UI_ANIMATION_DEPENDENCY_INTERMEDIATE_VALUES	= 0x1,
	UI_ANIMATION_DEPENDENCY_FINAL_VALUE	= 0x2,
	UI_ANIMATION_DEPENDENCY_FINAL_VELOCITY	= 0x4,
	UI_ANIMATION_DEPENDENCY_DURATION	= 0x8
    } 	UI_ANIMATION_DEPENDENCIES;
DEFINE_ENUM_FLAG_OPERATORS(UI_ANIMATION_DEPENDENCIES);
extern RPC_IF_HANDLE __MIDL_itf_UIAnimation_0000_0010_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_UIAnimation_0000_0010_v0_0_s_ifspec;
#ifndef __IUIAnimationInterpolator_INTERFACE_DEFINED__
#define __IUIAnimationInterpolator_INTERFACE_DEFINED__
extern const IID IID_IUIAnimationInterpolator;
typedef struct IUIAnimationInterpolatorVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        IUIAnimationInterpolator * This,
        REFIID riid,
        void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(
        IUIAnimationInterpolator * This);
    ULONG ( STDMETHODCALLTYPE *Release )(
        IUIAnimationInterpolator * This);
    HRESULT ( STDMETHODCALLTYPE *SetInitialValueAndVelocity )(
        IUIAnimationInterpolator * This,
        DOUBLE initialValue,
        DOUBLE initialVelocity);
    HRESULT ( STDMETHODCALLTYPE *SetDuration )(
        IUIAnimationInterpolator * This,
        UI_ANIMATION_SECONDS duration);
    HRESULT ( STDMETHODCALLTYPE *GetDuration )(
        IUIAnimationInterpolator * This,
        UI_ANIMATION_SECONDS *duration);
    HRESULT ( STDMETHODCALLTYPE *GetFinalValue )(
        IUIAnimationInterpolator * This,
        DOUBLE *value);
    HRESULT ( STDMETHODCALLTYPE *InterpolateValue )(
        IUIAnimationInterpolator * This,
        UI_ANIMATION_SECONDS offset,
        DOUBLE *value);
    HRESULT ( STDMETHODCALLTYPE *InterpolateVelocity )(
        IUIAnimationInterpolator * This,
        UI_ANIMATION_SECONDS offset,
        DOUBLE *velocity);
    HRESULT ( STDMETHODCALLTYPE *GetDependencies )(
        IUIAnimationInterpolator * This,
        UI_ANIMATION_DEPENDENCIES *initialValueDependencies,
        UI_ANIMATION_DEPENDENCIES *initialVelocityDependencies,
        UI_ANIMATION_DEPENDENCIES *durationDependencies);
    END_INTERFACE
} IUIAnimationInterpolatorVtbl;
interface IUIAnimationInterpolator
{
    CONST_VTBL struct IUIAnimationInterpolatorVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IUIAnimationInterpolator_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IUIAnimationInterpolator_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) )
#define IUIAnimationInterpolator_Release(This)	\
    ( (This)->lpVtbl -> Release(This) )
#define IUIAnimationInterpolator_SetInitialValueAndVelocity(This,initialValue,initialVelocity)	\
    ( (This)->lpVtbl -> SetInitialValueAndVelocity(This,initialValue,initialVelocity) )
#define IUIAnimationInterpolator_SetDuration(This,duration)	\
    ( (This)->lpVtbl -> SetDuration(This,duration) )
#define IUIAnimationInterpolator_GetDuration(This,duration)	\
    ( (This)->lpVtbl -> GetDuration(This,duration) )
#define IUIAnimationInterpolator_GetFinalValue(This,value)	\
    ( (This)->lpVtbl -> GetFinalValue(This,value) )
#define IUIAnimationInterpolator_InterpolateValue(This,offset,value)	\
    ( (This)->lpVtbl -> InterpolateValue(This,offset,value) )
#define IUIAnimationInterpolator_InterpolateVelocity(This,offset,velocity)	\
    ( (This)->lpVtbl -> InterpolateVelocity(This,offset,velocity) )
#define IUIAnimationInterpolator_GetDependencies(This,initialValueDependencies,initialVelocityDependencies,durationDependencies)	\
    ( (This)->lpVtbl -> GetDependencies(This,initialValueDependencies,initialVelocityDependencies,durationDependencies) )
#endif
#endif
#ifndef __IUIAnimationTransitionFactory_INTERFACE_DEFINED__
#define __IUIAnimationTransitionFactory_INTERFACE_DEFINED__
extern const IID IID_IUIAnimationTransitionFactory;
typedef struct IUIAnimationTransitionFactoryVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        IUIAnimationTransitionFactory * This,
        REFIID riid,
        void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(
        IUIAnimationTransitionFactory * This);
    ULONG ( STDMETHODCALLTYPE *Release )(
        IUIAnimationTransitionFactory * This);
    HRESULT ( STDMETHODCALLTYPE *CreateTransition )(
        IUIAnimationTransitionFactory * This,
        IUIAnimationInterpolator *interpolator,
        IUIAnimationTransition **transition);
    END_INTERFACE
} IUIAnimationTransitionFactoryVtbl;
interface IUIAnimationTransitionFactory
{
    CONST_VTBL struct IUIAnimationTransitionFactoryVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IUIAnimationTransitionFactory_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IUIAnimationTransitionFactory_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) )
#define IUIAnimationTransitionFactory_Release(This)	\
    ( (This)->lpVtbl -> Release(This) )
#define IUIAnimationTransitionFactory_CreateTransition(This,interpolator,transition)	\
    ( (This)->lpVtbl -> CreateTransition(This,interpolator,transition) )
#endif
#endif
typedef
enum __MIDL___MIDL_itf_UIAnimation_0000_0012_0001
    {	UI_ANIMATION_IDLE_BEHAVIOR_CONTINUE	= 0,
	UI_ANIMATION_IDLE_BEHAVIOR_DISABLE	= 1
    } 	UI_ANIMATION_IDLE_BEHAVIOR;
extern RPC_IF_HANDLE __MIDL_itf_UIAnimation_0000_0012_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_UIAnimation_0000_0012_v0_0_s_ifspec;
#ifndef __IUIAnimationTimer_INTERFACE_DEFINED__
#define __IUIAnimationTimer_INTERFACE_DEFINED__
extern const IID IID_IUIAnimationTimer;
typedef struct IUIAnimationTimerVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        IUIAnimationTimer * This,
        REFIID riid,
        void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(
        IUIAnimationTimer * This);
    ULONG ( STDMETHODCALLTYPE *Release )(
        IUIAnimationTimer * This);
    HRESULT ( STDMETHODCALLTYPE *SetTimerUpdateHandler )(
        IUIAnimationTimer * This,
        IUIAnimationTimerUpdateHandler *updateHandler,
        UI_ANIMATION_IDLE_BEHAVIOR idleBehavior);
    HRESULT ( STDMETHODCALLTYPE *SetTimerEventHandler )(
        IUIAnimationTimer * This,
        IUIAnimationTimerEventHandler *handler);
    HRESULT ( STDMETHODCALLTYPE *Enable )(
        IUIAnimationTimer * This);
    HRESULT ( STDMETHODCALLTYPE *Disable )(
        IUIAnimationTimer * This);
    HRESULT ( STDMETHODCALLTYPE *IsEnabled )(
        IUIAnimationTimer * This);
    HRESULT ( STDMETHODCALLTYPE *GetTime )(
        IUIAnimationTimer * This,
        UI_ANIMATION_SECONDS *seconds);
    HRESULT ( STDMETHODCALLTYPE *SetFrameRateThreshold )(
        IUIAnimationTimer * This,
        UINT32 framesPerSecond);
    END_INTERFACE
} IUIAnimationTimerVtbl;
interface IUIAnimationTimer
{
    CONST_VTBL struct IUIAnimationTimerVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IUIAnimationTimer_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IUIAnimationTimer_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) )
#define IUIAnimationTimer_Release(This)	\
    ( (This)->lpVtbl -> Release(This) )
#define IUIAnimationTimer_SetTimerUpdateHandler(This,updateHandler,idleBehavior)	\
    ( (This)->lpVtbl -> SetTimerUpdateHandler(This,updateHandler,idleBehavior) )
#define IUIAnimationTimer_SetTimerEventHandler(This,handler)	\
    ( (This)->lpVtbl -> SetTimerEventHandler(This,handler) )
#define IUIAnimationTimer_Enable(This)	\
    ( (This)->lpVtbl -> Enable(This) )
#define IUIAnimationTimer_Disable(This)	\
    ( (This)->lpVtbl -> Disable(This) )
#define IUIAnimationTimer_IsEnabled(This)	\
    ( (This)->lpVtbl -> IsEnabled(This) )
#define IUIAnimationTimer_GetTime(This,seconds)	\
    ( (This)->lpVtbl -> GetTime(This,seconds) )
#define IUIAnimationTimer_SetFrameRateThreshold(This,framesPerSecond)	\
    ( (This)->lpVtbl -> SetFrameRateThreshold(This,framesPerSecond) )
#endif
#endif
#ifndef __IUIAnimationTimerUpdateHandler_INTERFACE_DEFINED__
#define __IUIAnimationTimerUpdateHandler_INTERFACE_DEFINED__
extern const IID IID_IUIAnimationTimerUpdateHandler;
typedef struct IUIAnimationTimerUpdateHandlerVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        IUIAnimationTimerUpdateHandler * This,
        REFIID riid,
        void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(
        IUIAnimationTimerUpdateHandler * This);
    ULONG ( STDMETHODCALLTYPE *Release )(
        IUIAnimationTimerUpdateHandler * This);
    HRESULT ( STDMETHODCALLTYPE *OnUpdate )(
        IUIAnimationTimerUpdateHandler * This,
        UI_ANIMATION_SECONDS timeNow,
        UI_ANIMATION_UPDATE_RESULT *result);
    HRESULT ( STDMETHODCALLTYPE *SetTimerClientEventHandler )(
        IUIAnimationTimerUpdateHandler * This,
        IUIAnimationTimerClientEventHandler *handler);
    HRESULT ( STDMETHODCALLTYPE *ClearTimerClientEventHandler )(
        IUIAnimationTimerUpdateHandler * This);
    END_INTERFACE
} IUIAnimationTimerUpdateHandlerVtbl;
interface IUIAnimationTimerUpdateHandler
{
    CONST_VTBL struct IUIAnimationTimerUpdateHandlerVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IUIAnimationTimerUpdateHandler_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IUIAnimationTimerUpdateHandler_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) )
#define IUIAnimationTimerUpdateHandler_Release(This)	\
    ( (This)->lpVtbl -> Release(This) )
#define IUIAnimationTimerUpdateHandler_OnUpdate(This,timeNow,result)	\
    ( (This)->lpVtbl -> OnUpdate(This,timeNow,result) )
#define IUIAnimationTimerUpdateHandler_SetTimerClientEventHandler(This,handler)	\
    ( (This)->lpVtbl -> SetTimerClientEventHandler(This,handler) )
#define IUIAnimationTimerUpdateHandler_ClearTimerClientEventHandler(This)	\
    ( (This)->lpVtbl -> ClearTimerClientEventHandler(This) )
#endif
#endif
typedef
enum __MIDL___MIDL_itf_UIAnimation_0000_0014_0001
    {	UI_ANIMATION_TIMER_CLIENT_IDLE	= 0,
	UI_ANIMATION_TIMER_CLIENT_BUSY	= 1
    } 	UI_ANIMATION_TIMER_CLIENT_STATUS;
extern RPC_IF_HANDLE __MIDL_itf_UIAnimation_0000_0014_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_UIAnimation_0000_0014_v0_0_s_ifspec;
#ifndef __IUIAnimationTimerClientEventHandler_INTERFACE_DEFINED__
#define __IUIAnimationTimerClientEventHandler_INTERFACE_DEFINED__
extern const IID IID_IUIAnimationTimerClientEventHandler;
typedef struct IUIAnimationTimerClientEventHandlerVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        IUIAnimationTimerClientEventHandler * This,
        REFIID riid,
        void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(
        IUIAnimationTimerClientEventHandler * This);
    ULONG ( STDMETHODCALLTYPE *Release )(
        IUIAnimationTimerClientEventHandler * This);
    HRESULT ( STDMETHODCALLTYPE *OnTimerClientStatusChanged )(
        IUIAnimationTimerClientEventHandler * This,
        UI_ANIMATION_TIMER_CLIENT_STATUS newStatus,
        UI_ANIMATION_TIMER_CLIENT_STATUS previousStatus);
    END_INTERFACE
} IUIAnimationTimerClientEventHandlerVtbl;
interface IUIAnimationTimerClientEventHandler
{
    CONST_VTBL struct IUIAnimationTimerClientEventHandlerVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IUIAnimationTimerClientEventHandler_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IUIAnimationTimerClientEventHandler_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) )
#define IUIAnimationTimerClientEventHandler_Release(This)	\
    ( (This)->lpVtbl -> Release(This) )
#define IUIAnimationTimerClientEventHandler_OnTimerClientStatusChanged(This,newStatus,previousStatus)	\
    ( (This)->lpVtbl -> OnTimerClientStatusChanged(This,newStatus,previousStatus) )
#endif
#endif
#ifndef __IUIAnimationTimerEventHandler_INTERFACE_DEFINED__
#define __IUIAnimationTimerEventHandler_INTERFACE_DEFINED__
extern const IID IID_IUIAnimationTimerEventHandler;
typedef struct IUIAnimationTimerEventHandlerVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        IUIAnimationTimerEventHandler * This,
        REFIID riid,
        void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(
        IUIAnimationTimerEventHandler * This);
    ULONG ( STDMETHODCALLTYPE *Release )(
        IUIAnimationTimerEventHandler * This);
    HRESULT ( STDMETHODCALLTYPE *OnPreUpdate )(
        IUIAnimationTimerEventHandler * This);
    HRESULT ( STDMETHODCALLTYPE *OnPostUpdate )(
        IUIAnimationTimerEventHandler * This);
    HRESULT ( STDMETHODCALLTYPE *OnRenderingTooSlow )(
        IUIAnimationTimerEventHandler * This,
        UINT32 framesPerSecond);
    END_INTERFACE
} IUIAnimationTimerEventHandlerVtbl;
interface IUIAnimationTimerEventHandler
{
    CONST_VTBL struct IUIAnimationTimerEventHandlerVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IUIAnimationTimerEventHandler_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IUIAnimationTimerEventHandler_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) )
#define IUIAnimationTimerEventHandler_Release(This)	\
    ( (This)->lpVtbl -> Release(This) )
#define IUIAnimationTimerEventHandler_OnPreUpdate(This)	\
    ( (This)->lpVtbl -> OnPreUpdate(This) )
#define IUIAnimationTimerEventHandler_OnPostUpdate(This)	\
    ( (This)->lpVtbl -> OnPostUpdate(This) )
#define IUIAnimationTimerEventHandler_OnRenderingTooSlow(This,framesPerSecond)	\
    ( (This)->lpVtbl -> OnRenderingTooSlow(This,framesPerSecond) )
#endif
#endif
#ifndef __UIAnimation_LIBRARY_DEFINED__
#define __UIAnimation_LIBRARY_DEFINED__
extern const IID LIBID_UIAnimation;
extern const CLSID CLSID_UIAnimationManager;
#if 0
class DECLSPEC_UUID("4C1FC63A-695C-47E8-A339-1A194BE3D0B8")
UIAnimationManager;
#endif
extern const CLSID CLSID_UIAnimationTransitionLibrary;
#if 0
class DECLSPEC_UUID("1D6322AD-AA85-4EF5-A828-86D71067D145")
UIAnimationTransitionLibrary;
#endif
extern const CLSID CLSID_UIAnimationTransitionFactory;
#if 0
#endif
extern const CLSID CLSID_UIAnimationTimer;
#if 0
class DECLSPEC_UUID("BFCD4A0C-06B6-4384-B768-0DAA792C380E")
UIAnimationTimer;
#endif
#endif
#endif

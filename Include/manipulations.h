/*+@@file@@----------------------------------------------------------------*//*!
 \file		manipulations.h
 \par Description
            Extension and update of headers for PellesC compiler suite.
 \par Project:
            PellesC Headers extension
 \date		Created  on Sun Jul 24 19:41:37 2016
 \date		Modified on Sun Jul 24 19:41:37 2016
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
#ifndef __manipulations_h__
#define __manipulations_h__
#if __POCC__ >= 500
#pragma once
#endif
#ifndef ___IManipulationEvents_FWD_DEFINED__
#define ___IManipulationEvents_FWD_DEFINED__
typedef interface _IManipulationEvents _IManipulationEvents;
#endif
#ifndef __IInertiaProcessor_FWD_DEFINED__
#define __IInertiaProcessor_FWD_DEFINED__
typedef interface IInertiaProcessor IInertiaProcessor;
#endif
#ifndef __IManipulationProcessor_FWD_DEFINED__
#define __IManipulationProcessor_FWD_DEFINED__
typedef interface IManipulationProcessor IManipulationProcessor;
#endif
#ifndef __InertiaProcessor_FWD_DEFINED__
#define __InertiaProcessor_FWD_DEFINED__
typedef struct InertiaProcessor InertiaProcessor;
#endif
#ifndef __ManipulationProcessor_FWD_DEFINED__
#define __ManipulationProcessor_FWD_DEFINED__
typedef struct ManipulationProcessor ManipulationProcessor;
#endif
typedef enum MANIPULATION_PROCESSOR_MANIPULATIONS
{
	MANIPULATION_NONE = 0,
	MANIPULATION_TRANSLATE_X = 0x1,
	MANIPULATION_TRANSLATE_Y = 0x2,
	MANIPULATION_SCALE = 0x4,
	MANIPULATION_ROTATE = 0x8,
	MANIPULATION_ALL = 0xf
} MANIPULATION_PROCESSOR_MANIPULATIONS;
DEFINE_ENUM_FLAG_OPERATORS(MANIPULATION_PROCESSOR_MANIPULATIONS)
#pragma warn(push)
#pragma warn(disable:2071)
extern const float POSITIVE_INFINITY = ((float)(1e308 * 10));
extern const float NEGATIVE_INFINITY = ((float)(-1e308 * 10));
extern const float NaN = ((float)((1e308 * 10) * 0.));
#pragma warn(pop)
typedef unsigned long MANIPULATOR_ID;
extern RPC_IF_HANDLE __MIDL_itf_manipulations_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_manipulations_0000_0000_v0_0_s_ifspec;
#ifndef __ManipulationsLib_LIBRARY_DEFINED__
#define __ManipulationsLib_LIBRARY_DEFINED__
extern const IID LIBID_ManipulationsLib;
#ifndef ___IManipulationEvents_INTERFACE_DEFINED__
#define ___IManipulationEvents_INTERFACE_DEFINED__
extern const IID IID__IManipulationEvents;
typedef struct _IManipulationEventsVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (_IManipulationEvents * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (_IManipulationEvents * This);
	ULONG(STDMETHODCALLTYPE * Release) (_IManipulationEvents * This);
	HRESULT(STDMETHODCALLTYPE * ManipulationStarted) (_IManipulationEvents * This, FLOAT x, FLOAT y);
	HRESULT(STDMETHODCALLTYPE * ManipulationDelta) (_IManipulationEvents * This, FLOAT x, FLOAT y, FLOAT translationDeltaX, FLOAT translationDeltaY, FLOAT scaleDelta, FLOAT expansionDelta, FLOAT rotationDelta, FLOAT cumulativeTranslationX, FLOAT cumulativeTranslationY, FLOAT cumulativeScale, FLOAT cumulativeExpansion, FLOAT cumulativeRotation);
	HRESULT(STDMETHODCALLTYPE * ManipulationCompleted) (_IManipulationEvents * This, FLOAT x, FLOAT y, FLOAT cumulativeTranslationX, FLOAT cumulativeTranslationY, FLOAT cumulativeScale, FLOAT cumulativeExpansion, FLOAT cumulativeRotation);
	END_INTERFACE
}  _IManipulationEventsVtbl;
interface _IManipulationEvents
{
	CONST_VTBL struct _IManipulationEventsVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define _IManipulationEvents_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define _IManipulationEvents_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define _IManipulationEvents_Release(This) ( (This)->lpVtbl -> Release(This) )
#define _IManipulationEvents_ManipulationStarted(This,x,y) ( (This)->lpVtbl -> ManipulationStarted(This,x,y) )
#define _IManipulationEvents_ManipulationDelta(This,x,y,translationDeltaX,translationDeltaY,scaleDelta,expansionDelta,rotationDelta,cumulativeTranslationX,cumulativeTranslationY,cumulativeScale,cumulativeExpansion,cumulativeRotation) ( (This)->lpVtbl -> ManipulationDelta(This,x,y,translationDeltaX,translationDeltaY,scaleDelta,expansionDelta,rotationDelta,cumulativeTranslationX,cumulativeTranslationY,cumulativeScale,cumulativeExpansion,cumulativeRotation) )
#define _IManipulationEvents_ManipulationCompleted(This,x,y,cumulativeTranslationX,cumulativeTranslationY,cumulativeScale,cumulativeExpansion,cumulativeRotation) ( (This)->lpVtbl -> ManipulationCompleted(This,x,y,cumulativeTranslationX,cumulativeTranslationY,cumulativeScale,cumulativeExpansion,cumulativeRotation) )
#endif
#endif
#ifndef __IInertiaProcessor_INTERFACE_DEFINED__
#define __IInertiaProcessor_INTERFACE_DEFINED__
extern const IID IID_IInertiaProcessor;
typedef struct IInertiaProcessorVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IInertiaProcessor * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IInertiaProcessor * This);
	ULONG(STDMETHODCALLTYPE * Release) (IInertiaProcessor * This);
	HRESULT(STDMETHODCALLTYPE * get_InitialOriginX) (IInertiaProcessor * This, FLOAT * x);
	HRESULT(STDMETHODCALLTYPE * put_InitialOriginX) (IInertiaProcessor * This, FLOAT x);
	HRESULT(STDMETHODCALLTYPE * get_InitialOriginY) (IInertiaProcessor * This, FLOAT * y);
	HRESULT(STDMETHODCALLTYPE * put_InitialOriginY) (IInertiaProcessor * This, FLOAT y);
	HRESULT(STDMETHODCALLTYPE * get_InitialVelocityX) (IInertiaProcessor * This, FLOAT * x);
	HRESULT(STDMETHODCALLTYPE * put_InitialVelocityX) (IInertiaProcessor * This, FLOAT x);
	HRESULT(STDMETHODCALLTYPE * get_InitialVelocityY) (IInertiaProcessor * This, FLOAT * y);
	HRESULT(STDMETHODCALLTYPE * put_InitialVelocityY) (IInertiaProcessor * This, FLOAT y);
	HRESULT(STDMETHODCALLTYPE * get_InitialAngularVelocity) (IInertiaProcessor * This, FLOAT * velocity);
	HRESULT(STDMETHODCALLTYPE * put_InitialAngularVelocity) (IInertiaProcessor * This, FLOAT velocity);
	HRESULT(STDMETHODCALLTYPE * get_InitialExpansionVelocity) (IInertiaProcessor * This, FLOAT * velocity);
	HRESULT(STDMETHODCALLTYPE * put_InitialExpansionVelocity) (IInertiaProcessor * This, FLOAT velocity);
	HRESULT(STDMETHODCALLTYPE * get_InitialRadius) (IInertiaProcessor * This, FLOAT * radius);
	HRESULT(STDMETHODCALLTYPE * put_InitialRadius) (IInertiaProcessor * This, FLOAT radius);
	HRESULT(STDMETHODCALLTYPE * get_BoundaryLeft) (IInertiaProcessor * This, FLOAT * left);
	HRESULT(STDMETHODCALLTYPE * put_BoundaryLeft) (IInertiaProcessor * This, FLOAT left);
	HRESULT(STDMETHODCALLTYPE * get_BoundaryTop) (IInertiaProcessor * This, FLOAT * top);
	HRESULT(STDMETHODCALLTYPE * put_BoundaryTop) (IInertiaProcessor * This, FLOAT top);
	HRESULT(STDMETHODCALLTYPE * get_BoundaryRight) (IInertiaProcessor * This, FLOAT * right);
	HRESULT(STDMETHODCALLTYPE * put_BoundaryRight) (IInertiaProcessor * This, FLOAT right);
	HRESULT(STDMETHODCALLTYPE * get_BoundaryBottom) (IInertiaProcessor * This, FLOAT * bottom);
	HRESULT(STDMETHODCALLTYPE * put_BoundaryBottom) (IInertiaProcessor * This, FLOAT bottom);
	HRESULT(STDMETHODCALLTYPE * get_ElasticMarginLeft) (IInertiaProcessor * This, FLOAT * left);
	HRESULT(STDMETHODCALLTYPE * put_ElasticMarginLeft) (IInertiaProcessor * This, FLOAT left);
	HRESULT(STDMETHODCALLTYPE * get_ElasticMarginTop) (IInertiaProcessor * This, FLOAT * top);
	HRESULT(STDMETHODCALLTYPE * put_ElasticMarginTop) (IInertiaProcessor * This, FLOAT top);
	HRESULT(STDMETHODCALLTYPE * get_ElasticMarginRight) (IInertiaProcessor * This, FLOAT * right);
	HRESULT(STDMETHODCALLTYPE * put_ElasticMarginRight) (IInertiaProcessor * This, FLOAT right);
	HRESULT(STDMETHODCALLTYPE * get_ElasticMarginBottom) (IInertiaProcessor * This, FLOAT * bottom);
	HRESULT(STDMETHODCALLTYPE * put_ElasticMarginBottom) (IInertiaProcessor * This, FLOAT bottom);
	HRESULT(STDMETHODCALLTYPE * get_DesiredDisplacement) (IInertiaProcessor * This, FLOAT * displacement);
	HRESULT(STDMETHODCALLTYPE * put_DesiredDisplacement) (IInertiaProcessor * This, FLOAT displacement);
	HRESULT(STDMETHODCALLTYPE * get_DesiredRotation) (IInertiaProcessor * This, FLOAT * rotation);
	HRESULT(STDMETHODCALLTYPE * put_DesiredRotation) (IInertiaProcessor * This, FLOAT rotation);
	HRESULT(STDMETHODCALLTYPE * get_DesiredExpansion) (IInertiaProcessor * This, FLOAT * expansion);
	HRESULT(STDMETHODCALLTYPE * put_DesiredExpansion) (IInertiaProcessor * This, FLOAT expansion);
	HRESULT(STDMETHODCALLTYPE * get_DesiredDeceleration) (IInertiaProcessor * This, FLOAT * deceleration);
	HRESULT(STDMETHODCALLTYPE * put_DesiredDeceleration) (IInertiaProcessor * This, FLOAT deceleration);
	HRESULT(STDMETHODCALLTYPE * get_DesiredAngularDeceleration) (IInertiaProcessor * This, FLOAT * deceleration);
	HRESULT(STDMETHODCALLTYPE * put_DesiredAngularDeceleration) (IInertiaProcessor * This, FLOAT deceleration);
	HRESULT(STDMETHODCALLTYPE * get_DesiredExpansionDeceleration) (IInertiaProcessor * This, FLOAT * deceleration);
	HRESULT(STDMETHODCALLTYPE * put_DesiredExpansionDeceleration) (IInertiaProcessor * This, FLOAT deceleration);
	HRESULT(STDMETHODCALLTYPE * get_InitialTimestamp) (IInertiaProcessor * This, DWORD * timestamp);
	HRESULT(STDMETHODCALLTYPE * put_InitialTimestamp) (IInertiaProcessor * This, DWORD timestamp);
	HRESULT(STDMETHODCALLTYPE * Reset) (IInertiaProcessor * This);
	HRESULT(STDMETHODCALLTYPE * Process) (IInertiaProcessor * This, BOOL * completed);
	HRESULT(STDMETHODCALLTYPE * ProcessTime) (IInertiaProcessor * This, DWORD timestamp, BOOL * completed);
	HRESULT(STDMETHODCALLTYPE * Complete) (IInertiaProcessor * This);
	HRESULT(STDMETHODCALLTYPE * CompleteTime) (IInertiaProcessor * This, DWORD timestamp);
	END_INTERFACE
}  IInertiaProcessorVtbl;
interface IInertiaProcessor
{
	CONST_VTBL struct IInertiaProcessorVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IInertiaProcessor_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IInertiaProcessor_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IInertiaProcessor_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IInertiaProcessor_get_InitialOriginX(This,x) ( (This)->lpVtbl -> get_InitialOriginX(This,x) )
#define IInertiaProcessor_put_InitialOriginX(This,x) ( (This)->lpVtbl -> put_InitialOriginX(This,x) )
#define IInertiaProcessor_get_InitialOriginY(This,y) ( (This)->lpVtbl -> get_InitialOriginY(This,y) )
#define IInertiaProcessor_put_InitialOriginY(This,y) ( (This)->lpVtbl -> put_InitialOriginY(This,y) )
#define IInertiaProcessor_get_InitialVelocityX(This,x) ( (This)->lpVtbl -> get_InitialVelocityX(This,x) )
#define IInertiaProcessor_put_InitialVelocityX(This,x) ( (This)->lpVtbl -> put_InitialVelocityX(This,x) )
#define IInertiaProcessor_get_InitialVelocityY(This,y) ( (This)->lpVtbl -> get_InitialVelocityY(This,y) )
#define IInertiaProcessor_put_InitialVelocityY(This,y) ( (This)->lpVtbl -> put_InitialVelocityY(This,y) )
#define IInertiaProcessor_get_InitialAngularVelocity(This,velocity) ( (This)->lpVtbl -> get_InitialAngularVelocity(This,velocity) )
#define IInertiaProcessor_put_InitialAngularVelocity(This,velocity) ( (This)->lpVtbl -> put_InitialAngularVelocity(This,velocity) )
#define IInertiaProcessor_get_InitialExpansionVelocity(This,velocity) ( (This)->lpVtbl -> get_InitialExpansionVelocity(This,velocity) )
#define IInertiaProcessor_put_InitialExpansionVelocity(This,velocity) ( (This)->lpVtbl -> put_InitialExpansionVelocity(This,velocity) )
#define IInertiaProcessor_get_InitialRadius(This,radius) ( (This)->lpVtbl -> get_InitialRadius(This,radius) )
#define IInertiaProcessor_put_InitialRadius(This,radius) ( (This)->lpVtbl -> put_InitialRadius(This,radius) )
#define IInertiaProcessor_get_BoundaryLeft(This,left) ( (This)->lpVtbl -> get_BoundaryLeft(This,left) )
#define IInertiaProcessor_put_BoundaryLeft(This,left) ( (This)->lpVtbl -> put_BoundaryLeft(This,left) )
#define IInertiaProcessor_get_BoundaryTop(This,top) ( (This)->lpVtbl -> get_BoundaryTop(This,top) )
#define IInertiaProcessor_put_BoundaryTop(This,top) ( (This)->lpVtbl -> put_BoundaryTop(This,top) )
#define IInertiaProcessor_get_BoundaryRight(This,right) ( (This)->lpVtbl -> get_BoundaryRight(This,right) )
#define IInertiaProcessor_put_BoundaryRight(This,right) ( (This)->lpVtbl -> put_BoundaryRight(This,right) )
#define IInertiaProcessor_get_BoundaryBottom(This,bottom) ( (This)->lpVtbl -> get_BoundaryBottom(This,bottom) )
#define IInertiaProcessor_put_BoundaryBottom(This,bottom) ( (This)->lpVtbl -> put_BoundaryBottom(This,bottom) )
#define IInertiaProcessor_get_ElasticMarginLeft(This,left) ( (This)->lpVtbl -> get_ElasticMarginLeft(This,left) )
#define IInertiaProcessor_put_ElasticMarginLeft(This,left) ( (This)->lpVtbl -> put_ElasticMarginLeft(This,left) )
#define IInertiaProcessor_get_ElasticMarginTop(This,top) ( (This)->lpVtbl -> get_ElasticMarginTop(This,top) )
#define IInertiaProcessor_put_ElasticMarginTop(This,top) ( (This)->lpVtbl -> put_ElasticMarginTop(This,top) )
#define IInertiaProcessor_get_ElasticMarginRight(This,right) ( (This)->lpVtbl -> get_ElasticMarginRight(This,right) )
#define IInertiaProcessor_put_ElasticMarginRight(This,right) ( (This)->lpVtbl -> put_ElasticMarginRight(This,right) )
#define IInertiaProcessor_get_ElasticMarginBottom(This,bottom) ( (This)->lpVtbl -> get_ElasticMarginBottom(This,bottom) )
#define IInertiaProcessor_put_ElasticMarginBottom(This,bottom) ( (This)->lpVtbl -> put_ElasticMarginBottom(This,bottom) )
#define IInertiaProcessor_get_DesiredDisplacement(This,displacement) ( (This)->lpVtbl -> get_DesiredDisplacement(This,displacement) )
#define IInertiaProcessor_put_DesiredDisplacement(This,displacement) ( (This)->lpVtbl -> put_DesiredDisplacement(This,displacement) )
#define IInertiaProcessor_get_DesiredRotation(This,rotation) ( (This)->lpVtbl -> get_DesiredRotation(This,rotation) )
#define IInertiaProcessor_put_DesiredRotation(This,rotation) ( (This)->lpVtbl -> put_DesiredRotation(This,rotation) )
#define IInertiaProcessor_get_DesiredExpansion(This,expansion) ( (This)->lpVtbl -> get_DesiredExpansion(This,expansion) )
#define IInertiaProcessor_put_DesiredExpansion(This,expansion) ( (This)->lpVtbl -> put_DesiredExpansion(This,expansion) )
#define IInertiaProcessor_get_DesiredDeceleration(This,deceleration) ( (This)->lpVtbl -> get_DesiredDeceleration(This,deceleration) )
#define IInertiaProcessor_put_DesiredDeceleration(This,deceleration) ( (This)->lpVtbl -> put_DesiredDeceleration(This,deceleration) )
#define IInertiaProcessor_get_DesiredAngularDeceleration(This,deceleration) ( (This)->lpVtbl -> get_DesiredAngularDeceleration(This,deceleration) )
#define IInertiaProcessor_put_DesiredAngularDeceleration(This,deceleration) ( (This)->lpVtbl -> put_DesiredAngularDeceleration(This,deceleration) )
#define IInertiaProcessor_get_DesiredExpansionDeceleration(This,deceleration) ( (This)->lpVtbl -> get_DesiredExpansionDeceleration(This,deceleration) )
#define IInertiaProcessor_put_DesiredExpansionDeceleration(This,deceleration) ( (This)->lpVtbl -> put_DesiredExpansionDeceleration(This,deceleration) )
#define IInertiaProcessor_get_InitialTimestamp(This,timestamp) ( (This)->lpVtbl -> get_InitialTimestamp(This,timestamp) )
#define IInertiaProcessor_put_InitialTimestamp(This,timestamp) ( (This)->lpVtbl -> put_InitialTimestamp(This,timestamp) )
#define IInertiaProcessor_Reset(This) ( (This)->lpVtbl -> Reset(This) )
#define IInertiaProcessor_Process(This,completed) ( (This)->lpVtbl -> Process(This,completed) )
#define IInertiaProcessor_ProcessTime(This,timestamp,completed) ( (This)->lpVtbl -> ProcessTime(This,timestamp,completed) )
#define IInertiaProcessor_Complete(This) ( (This)->lpVtbl -> Complete(This) )
#define IInertiaProcessor_CompleteTime(This,timestamp) ( (This)->lpVtbl -> CompleteTime(This,timestamp) )
#endif
#endif
#ifndef __IManipulationProcessor_INTERFACE_DEFINED__
#define __IManipulationProcessor_INTERFACE_DEFINED__
extern const IID IID_IManipulationProcessor;
typedef struct IManipulationProcessorVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IManipulationProcessor * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IManipulationProcessor * This);
	ULONG(STDMETHODCALLTYPE * Release) (IManipulationProcessor * This);
	HRESULT(STDMETHODCALLTYPE * get_SupportedManipulations) (IManipulationProcessor * This, MANIPULATION_PROCESSOR_MANIPULATIONS * manipulations);
	HRESULT(STDMETHODCALLTYPE * put_SupportedManipulations) (IManipulationProcessor * This, MANIPULATION_PROCESSOR_MANIPULATIONS manipulations);
	HRESULT(STDMETHODCALLTYPE * get_PivotPointX) (IManipulationProcessor * This, FLOAT * pivotPointX);
	HRESULT(STDMETHODCALLTYPE * put_PivotPointX) (IManipulationProcessor * This, FLOAT pivotPointX);
	HRESULT(STDMETHODCALLTYPE * get_PivotPointY) (IManipulationProcessor * This, FLOAT * pivotPointY);
	HRESULT(STDMETHODCALLTYPE * put_PivotPointY) (IManipulationProcessor * This, FLOAT pivotPointY);
	HRESULT(STDMETHODCALLTYPE * get_PivotRadius) (IManipulationProcessor * This, FLOAT * pivotRadius);
	HRESULT(STDMETHODCALLTYPE * put_PivotRadius) (IManipulationProcessor * This, FLOAT pivotRadius);
	HRESULT(STDMETHODCALLTYPE * CompleteManipulation) (IManipulationProcessor * This);
	HRESULT(STDMETHODCALLTYPE * ProcessDown) (IManipulationProcessor * This, MANIPULATOR_ID manipulatorId, FLOAT x, FLOAT y);
	HRESULT(STDMETHODCALLTYPE * ProcessMove) (IManipulationProcessor * This, MANIPULATOR_ID manipulatorId, FLOAT x, FLOAT y);
	HRESULT(STDMETHODCALLTYPE * ProcessUp) (IManipulationProcessor * This, MANIPULATOR_ID manipulatorId, FLOAT x, FLOAT y);
	HRESULT(STDMETHODCALLTYPE * ProcessDownWithTime) (IManipulationProcessor * This, MANIPULATOR_ID manipulatorId, FLOAT x, FLOAT y, DWORD timestamp);
	HRESULT(STDMETHODCALLTYPE * ProcessMoveWithTime) (IManipulationProcessor * This, MANIPULATOR_ID manipulatorId, FLOAT x, FLOAT y, DWORD timestamp);
	HRESULT(STDMETHODCALLTYPE * ProcessUpWithTime) (IManipulationProcessor * This, MANIPULATOR_ID manipulatorId, FLOAT x, FLOAT y, DWORD timestamp);
	HRESULT(STDMETHODCALLTYPE * GetVelocityX) (IManipulationProcessor * This, FLOAT * velocityX);
	HRESULT(STDMETHODCALLTYPE * GetVelocityY) (IManipulationProcessor * This, FLOAT * velocityY);
	HRESULT(STDMETHODCALLTYPE * GetExpansionVelocity) (IManipulationProcessor * This, FLOAT * expansionVelocity);
	HRESULT(STDMETHODCALLTYPE * GetAngularVelocity) (IManipulationProcessor * This, FLOAT * angularVelocity);
	HRESULT(STDMETHODCALLTYPE * get_MinimumScaleRotateRadius) (IManipulationProcessor * This, FLOAT * minRadius);
	HRESULT(STDMETHODCALLTYPE * put_MinimumScaleRotateRadius) (IManipulationProcessor * This, FLOAT minRadius);
	END_INTERFACE
}  IManipulationProcessorVtbl;
interface IManipulationProcessor
{
	CONST_VTBL struct IManipulationProcessorVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IManipulationProcessor_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IManipulationProcessor_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IManipulationProcessor_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IManipulationProcessor_get_SupportedManipulations(This,manipulations) ( (This)->lpVtbl -> get_SupportedManipulations(This,manipulations) )
#define IManipulationProcessor_put_SupportedManipulations(This,manipulations) ( (This)->lpVtbl -> put_SupportedManipulations(This,manipulations) )
#define IManipulationProcessor_get_PivotPointX(This,pivotPointX) ( (This)->lpVtbl -> get_PivotPointX(This,pivotPointX) )
#define IManipulationProcessor_put_PivotPointX(This,pivotPointX) ( (This)->lpVtbl -> put_PivotPointX(This,pivotPointX) )
#define IManipulationProcessor_get_PivotPointY(This,pivotPointY) ( (This)->lpVtbl -> get_PivotPointY(This,pivotPointY) )
#define IManipulationProcessor_put_PivotPointY(This,pivotPointY) ( (This)->lpVtbl -> put_PivotPointY(This,pivotPointY) )
#define IManipulationProcessor_get_PivotRadius(This,pivotRadius) ( (This)->lpVtbl -> get_PivotRadius(This,pivotRadius) )
#define IManipulationProcessor_put_PivotRadius(This,pivotRadius) ( (This)->lpVtbl -> put_PivotRadius(This,pivotRadius) )
#define IManipulationProcessor_CompleteManipulation(This) ( (This)->lpVtbl -> CompleteManipulation(This) )
#define IManipulationProcessor_ProcessDown(This,manipulatorId,x,y) ( (This)->lpVtbl -> ProcessDown(This,manipulatorId,x,y) )
#define IManipulationProcessor_ProcessMove(This,manipulatorId,x,y) ( (This)->lpVtbl -> ProcessMove(This,manipulatorId,x,y) )
#define IManipulationProcessor_ProcessUp(This,manipulatorId,x,y) ( (This)->lpVtbl -> ProcessUp(This,manipulatorId,x,y) )
#define IManipulationProcessor_ProcessDownWithTime(This,manipulatorId,x,y,timestamp) ( (This)->lpVtbl -> ProcessDownWithTime(This,manipulatorId,x,y,timestamp) )
#define IManipulationProcessor_ProcessMoveWithTime(This,manipulatorId,x,y,timestamp) ( (This)->lpVtbl -> ProcessMoveWithTime(This,manipulatorId,x,y,timestamp) )
#define IManipulationProcessor_ProcessUpWithTime(This,manipulatorId,x,y,timestamp) ( (This)->lpVtbl -> ProcessUpWithTime(This,manipulatorId,x,y,timestamp) )
#define IManipulationProcessor_GetVelocityX(This,velocityX) ( (This)->lpVtbl -> GetVelocityX(This,velocityX) )
#define IManipulationProcessor_GetVelocityY(This,velocityY) ( (This)->lpVtbl -> GetVelocityY(This,velocityY) )
#define IManipulationProcessor_GetExpansionVelocity(This,expansionVelocity) ( (This)->lpVtbl -> GetExpansionVelocity(This,expansionVelocity) )
#define IManipulationProcessor_GetAngularVelocity(This,angularVelocity) ( (This)->lpVtbl -> GetAngularVelocity(This,angularVelocity) )
#define IManipulationProcessor_get_MinimumScaleRotateRadius(This,minRadius) ( (This)->lpVtbl -> get_MinimumScaleRotateRadius(This,minRadius) )
#define IManipulationProcessor_put_MinimumScaleRotateRadius(This,minRadius) ( (This)->lpVtbl -> put_MinimumScaleRotateRadius(This,minRadius) )
#endif
#endif
extern const CLSID CLSID_InertiaProcessor;
extern const CLSID CLSID_ManipulationProcessor;
#endif
#endif

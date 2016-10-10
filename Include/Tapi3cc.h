/*+@@file@@----------------------------------------------------------------*//*!
 \file		Tapi3cc.h
 \par Description 
            Extension and update of headers for PellesC compiler suite.
 \par Project: 
            PellesC Headers extension
 \date		Created  on Sat Sep 17 02:18:43 2016
 \date		Modified on Sat Sep 17 02:18:43 2016
 \author	frankie
\*//*-@@file@@----------------------------------------------------------------*/

#ifndef __REQUIRED_RPCNDR_H_VERSION__
#define __REQUIRED_RPCNDR_H_VERSION__ 500
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
#ifndef __tapi3cc_h__
#define __tapi3cc_h__
#if __POCC__ >= 500
#pragma once
#endif
#ifndef __ITAgent_FWD_DEFINED__
#define __ITAgent_FWD_DEFINED__
typedef interface ITAgent ITAgent;
#endif
#ifndef __ITAgentSession_FWD_DEFINED__
#define __ITAgentSession_FWD_DEFINED__
typedef interface ITAgentSession ITAgentSession;
#endif
#ifndef __ITACDGroup_FWD_DEFINED__
#define __ITACDGroup_FWD_DEFINED__
typedef interface ITACDGroup ITACDGroup;
#endif
#ifndef __ITQueue_FWD_DEFINED__
#define __ITQueue_FWD_DEFINED__
typedef interface ITQueue ITQueue;
#endif
#ifndef __ITAgentEvent_FWD_DEFINED__
#define __ITAgentEvent_FWD_DEFINED__
typedef interface ITAgentEvent ITAgentEvent;
#endif
#ifndef __ITAgentSessionEvent_FWD_DEFINED__
#define __ITAgentSessionEvent_FWD_DEFINED__
typedef interface ITAgentSessionEvent ITAgentSessionEvent;
#endif
#ifndef __ITACDGroupEvent_FWD_DEFINED__
#define __ITACDGroupEvent_FWD_DEFINED__
typedef interface ITACDGroupEvent ITACDGroupEvent;
#endif
#ifndef __ITQueueEvent_FWD_DEFINED__
#define __ITQueueEvent_FWD_DEFINED__
typedef interface ITQueueEvent ITQueueEvent;
#endif
#ifndef __ITAgentHandlerEvent_FWD_DEFINED__
#define __ITAgentHandlerEvent_FWD_DEFINED__
typedef interface ITAgentHandlerEvent ITAgentHandlerEvent;
#endif
#ifndef __ITTAPICallCenter_FWD_DEFINED__
#define __ITTAPICallCenter_FWD_DEFINED__
typedef interface ITTAPICallCenter ITTAPICallCenter;
#endif
#ifndef __ITAgentHandler_FWD_DEFINED__
#define __ITAgentHandler_FWD_DEFINED__
typedef interface ITAgentHandler ITAgentHandler;
#endif
#ifndef __IEnumAgent_FWD_DEFINED__
#define __IEnumAgent_FWD_DEFINED__
typedef interface IEnumAgent IEnumAgent;
#endif
#ifndef __IEnumAgentSession_FWD_DEFINED__
#define __IEnumAgentSession_FWD_DEFINED__
typedef interface IEnumAgentSession IEnumAgentSession;
#endif
#ifndef __IEnumQueue_FWD_DEFINED__
#define __IEnumQueue_FWD_DEFINED__
typedef interface IEnumQueue IEnumQueue;
#endif
#ifndef __IEnumACDGroup_FWD_DEFINED__
#define __IEnumACDGroup_FWD_DEFINED__
typedef interface IEnumACDGroup IEnumACDGroup;
#endif
#ifndef __IEnumAgentHandler_FWD_DEFINED__
#define __IEnumAgentHandler_FWD_DEFINED__
typedef interface IEnumAgentHandler IEnumAgentHandler;
#endif
#include "oaidl.h"
#include "tapi3if.h"
typedef enum AGENT_EVENT
{
	AE_NOT_READY = 0,
	AE_READY = (AE_NOT_READY + 1),
	AE_BUSY_ACD = (AE_READY + 1),
	AE_BUSY_INCOMING = (AE_BUSY_ACD + 1),
	AE_BUSY_OUTGOING = (AE_BUSY_INCOMING + 1),
	AE_UNKNOWN = (AE_BUSY_OUTGOING + 1)
} AGENT_EVENT;
typedef enum AGENT_STATE
{
	AS_NOT_READY = 0,
	AS_READY = (AS_NOT_READY + 1),
	AS_BUSY_ACD = (AS_READY + 1),
	AS_BUSY_INCOMING = (AS_BUSY_ACD + 1),
	AS_BUSY_OUTGOING = (AS_BUSY_INCOMING + 1),
	AS_UNKNOWN = (AS_BUSY_OUTGOING + 1)
} AGENT_STATE;
typedef enum AGENT_SESSION_EVENT
{
	ASE_NEW_SESSION = 0,
	ASE_NOT_READY = (ASE_NEW_SESSION + 1),
	ASE_READY = (ASE_NOT_READY + 1),
	ASE_BUSY = (ASE_READY + 1),
	ASE_WRAPUP = (ASE_BUSY + 1),
	ASE_END = (ASE_WRAPUP + 1)
} AGENT_SESSION_EVENT;
typedef enum AGENT_SESSION_STATE
{
	ASST_NOT_READY = 0,
	ASST_READY = (ASST_NOT_READY + 1),
	ASST_BUSY_ON_CALL = (ASST_READY + 1),
	ASST_BUSY_WRAPUP = (ASST_BUSY_ON_CALL + 1),
	ASST_SESSION_ENDED = (ASST_BUSY_WRAPUP + 1)
} AGENT_SESSION_STATE;
typedef enum AGENTHANDLER_EVENT
{
	AHE_NEW_AGENTHANDLER = 0,
	AHE_AGENTHANDLER_REMOVED = (AHE_NEW_AGENTHANDLER + 1)
} AGENTHANDLER_EVENT;
typedef enum ACDGROUP_EVENT
{
	ACDGE_NEW_GROUP = 0,
	ACDGE_GROUP_REMOVED = (ACDGE_NEW_GROUP + 1)
} ACDGROUP_EVENT;
typedef enum ACDQUEUE_EVENT
{
	ACDQE_NEW_QUEUE = 0,
	ACDQE_QUEUE_REMOVED = (ACDQE_NEW_QUEUE + 1)
} ACDQUEUE_EVENT;
extern RPC_IF_HANDLE __MIDL_itf_tapi3cc_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_tapi3cc_0000_0000_v0_0_s_ifspec;
#ifndef __ITAgent_INTERFACE_DEFINED__
#define __ITAgent_INTERFACE_DEFINED__
extern const IID IID_ITAgent;
typedef struct ITAgentVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (ITAgent * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (ITAgent * This);
	ULONG(STDMETHODCALLTYPE * Release) (ITAgent * This);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfoCount) (ITAgent * This, UINT * pctinfo);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfo) (ITAgent * This, UINT iTInfo, LCID lcid, ITypeInfo ** ppTInfo);
	HRESULT(STDMETHODCALLTYPE * GetIDsOfNames) (ITAgent * This, REFIID riid, LPOLESTR * rgszNames, UINT cNames, LCID lcid, DISPID * rgDispId);
	HRESULT(STDMETHODCALLTYPE * Invoke) (ITAgent * This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS * pDispParams, VARIANT * pVarResult, EXCEPINFO * pExcepInfo, UINT * puArgErr);
	HRESULT(STDMETHODCALLTYPE * EnumerateAgentSessions) (ITAgent * This, IEnumAgentSession ** ppEnumAgentSession);
	HRESULT(STDMETHODCALLTYPE * CreateSession) (ITAgent * This, ITACDGroup * pACDGroup, ITAddress * pAddress, ITAgentSession ** ppAgentSession);
	HRESULT(STDMETHODCALLTYPE * CreateSessionWithPIN) (ITAgent * This, ITACDGroup * pACDGroup, ITAddress * pAddress, BSTR pPIN, ITAgentSession ** ppAgentSession);
	HRESULT(STDMETHODCALLTYPE * get_ID) (ITAgent * This, BSTR * ppID);
	HRESULT(STDMETHODCALLTYPE * get_User) (ITAgent * This, BSTR * ppUser);
	HRESULT(STDMETHODCALLTYPE * put_State) (ITAgent * This, AGENT_STATE AgentState);
	HRESULT(STDMETHODCALLTYPE * get_State) (ITAgent * This, AGENT_STATE * pAgentState);
	HRESULT(STDMETHODCALLTYPE * put_MeasurementPeriod) (ITAgent * This, long lPeriod);
	HRESULT(STDMETHODCALLTYPE * get_MeasurementPeriod) (ITAgent * This, long *plPeriod);
	HRESULT(STDMETHODCALLTYPE * get_OverallCallRate) (ITAgent * This, CURRENCY * pcyCallrate);
	HRESULT(STDMETHODCALLTYPE * get_NumberOfACDCalls) (ITAgent * This, long *plCalls);
	HRESULT(STDMETHODCALLTYPE * get_NumberOfIncomingCalls) (ITAgent * This, long *plCalls);
	HRESULT(STDMETHODCALLTYPE * get_NumberOfOutgoingCalls) (ITAgent * This, long *plCalls);
	HRESULT(STDMETHODCALLTYPE * get_TotalACDTalkTime) (ITAgent * This, long *plTalkTime);
	HRESULT(STDMETHODCALLTYPE * get_TotalACDCallTime) (ITAgent * This, long *plCallTime);
	HRESULT(STDMETHODCALLTYPE * get_TotalWrapUpTime) (ITAgent * This, long *plWrapUpTime);
	HRESULT(STDMETHODCALLTYPE * get_AgentSessions) (ITAgent * This, VARIANT * pVariant);
	END_INTERFACE
}  ITAgentVtbl;
interface ITAgent
{
	CONST_VTBL struct ITAgentVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define ITAgent_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define ITAgent_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define ITAgent_Release(This) ( (This)->lpVtbl -> Release(This) )
#define ITAgent_GetTypeInfoCount(This,pctinfo) ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define ITAgent_GetTypeInfo(This,iTInfo,lcid,ppTInfo) ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define ITAgent_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define ITAgent_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define ITAgent_EnumerateAgentSessions(This,ppEnumAgentSession) ( (This)->lpVtbl -> EnumerateAgentSessions(This,ppEnumAgentSession) )
#define ITAgent_CreateSession(This,pACDGroup,pAddress,ppAgentSession) ( (This)->lpVtbl -> CreateSession(This,pACDGroup,pAddress,ppAgentSession) )
#define ITAgent_CreateSessionWithPIN(This,pACDGroup,pAddress,pPIN,ppAgentSession) ( (This)->lpVtbl -> CreateSessionWithPIN(This,pACDGroup,pAddress,pPIN,ppAgentSession) )
#define ITAgent_get_ID(This,ppID) ( (This)->lpVtbl -> get_ID(This,ppID) )
#define ITAgent_get_User(This,ppUser) ( (This)->lpVtbl -> get_User(This,ppUser) )
#define ITAgent_put_State(This,AgentState) ( (This)->lpVtbl -> put_State(This,AgentState) )
#define ITAgent_get_State(This,pAgentState) ( (This)->lpVtbl -> get_State(This,pAgentState) )
#define ITAgent_put_MeasurementPeriod(This,lPeriod) ( (This)->lpVtbl -> put_MeasurementPeriod(This,lPeriod) )
#define ITAgent_get_MeasurementPeriod(This,plPeriod) ( (This)->lpVtbl -> get_MeasurementPeriod(This,plPeriod) )
#define ITAgent_get_OverallCallRate(This,pcyCallrate) ( (This)->lpVtbl -> get_OverallCallRate(This,pcyCallrate) )
#define ITAgent_get_NumberOfACDCalls(This,plCalls) ( (This)->lpVtbl -> get_NumberOfACDCalls(This,plCalls) )
#define ITAgent_get_NumberOfIncomingCalls(This,plCalls) ( (This)->lpVtbl -> get_NumberOfIncomingCalls(This,plCalls) )
#define ITAgent_get_NumberOfOutgoingCalls(This,plCalls) ( (This)->lpVtbl -> get_NumberOfOutgoingCalls(This,plCalls) )
#define ITAgent_get_TotalACDTalkTime(This,plTalkTime) ( (This)->lpVtbl -> get_TotalACDTalkTime(This,plTalkTime) )
#define ITAgent_get_TotalACDCallTime(This,plCallTime) ( (This)->lpVtbl -> get_TotalACDCallTime(This,plCallTime) )
#define ITAgent_get_TotalWrapUpTime(This,plWrapUpTime) ( (This)->lpVtbl -> get_TotalWrapUpTime(This,plWrapUpTime) )
#define ITAgent_get_AgentSessions(This,pVariant) ( (This)->lpVtbl -> get_AgentSessions(This,pVariant) )
#endif
#endif
#ifndef __ITAgentSession_INTERFACE_DEFINED__
#define __ITAgentSession_INTERFACE_DEFINED__
extern const IID IID_ITAgentSession;
typedef struct ITAgentSessionVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (ITAgentSession * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (ITAgentSession * This);
	ULONG(STDMETHODCALLTYPE * Release) (ITAgentSession * This);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfoCount) (ITAgentSession * This, UINT * pctinfo);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfo) (ITAgentSession * This, UINT iTInfo, LCID lcid, ITypeInfo ** ppTInfo);
	HRESULT(STDMETHODCALLTYPE * GetIDsOfNames) (ITAgentSession * This, REFIID riid, LPOLESTR * rgszNames, UINT cNames, LCID lcid, DISPID * rgDispId);
	HRESULT(STDMETHODCALLTYPE * Invoke) (ITAgentSession * This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS * pDispParams, VARIANT * pVarResult, EXCEPINFO * pExcepInfo, UINT * puArgErr);
	HRESULT(STDMETHODCALLTYPE * get_Agent) (ITAgentSession * This, ITAgent ** ppAgent);
	HRESULT(STDMETHODCALLTYPE * get_Address) (ITAgentSession * This, ITAddress ** ppAddress);
	HRESULT(STDMETHODCALLTYPE * get_ACDGroup) (ITAgentSession * This, ITACDGroup ** ppACDGroup);
	HRESULT(STDMETHODCALLTYPE * put_State) (ITAgentSession * This, AGENT_SESSION_STATE SessionState);
	HRESULT(STDMETHODCALLTYPE * get_State) (ITAgentSession * This, AGENT_SESSION_STATE * pSessionState);
	HRESULT(STDMETHODCALLTYPE * get_SessionStartTime) (ITAgentSession * This, DATE * pdateSessionStart);
	HRESULT(STDMETHODCALLTYPE * get_SessionDuration) (ITAgentSession * This, long *plDuration);
	HRESULT(STDMETHODCALLTYPE * get_NumberOfCalls) (ITAgentSession * This, long *plCalls);
	HRESULT(STDMETHODCALLTYPE * get_TotalTalkTime) (ITAgentSession * This, long *plTalkTime);
	HRESULT(STDMETHODCALLTYPE * get_AverageTalkTime) (ITAgentSession * This, long *plTalkTime);
	HRESULT(STDMETHODCALLTYPE * get_TotalCallTime) (ITAgentSession * This, long *plCallTime);
	HRESULT(STDMETHODCALLTYPE * get_AverageCallTime) (ITAgentSession * This, long *plCallTime);
	HRESULT(STDMETHODCALLTYPE * get_TotalWrapUpTime) (ITAgentSession * This, long *plWrapUpTime);
	HRESULT(STDMETHODCALLTYPE * get_AverageWrapUpTime) (ITAgentSession * This, long *plWrapUpTime);
	HRESULT(STDMETHODCALLTYPE * get_ACDCallRate) (ITAgentSession * This, CURRENCY * pcyCallrate);
	HRESULT(STDMETHODCALLTYPE * get_LongestTimeToAnswer) (ITAgentSession * This, long *plAnswerTime);
	HRESULT(STDMETHODCALLTYPE * get_AverageTimeToAnswer) (ITAgentSession * This, long *plAnswerTime);
	END_INTERFACE
}  ITAgentSessionVtbl;
interface ITAgentSession
{
	CONST_VTBL struct ITAgentSessionVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define ITAgentSession_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define ITAgentSession_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define ITAgentSession_Release(This) ( (This)->lpVtbl -> Release(This) )
#define ITAgentSession_GetTypeInfoCount(This,pctinfo) ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define ITAgentSession_GetTypeInfo(This,iTInfo,lcid,ppTInfo) ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define ITAgentSession_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define ITAgentSession_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define ITAgentSession_get_Agent(This,ppAgent) ( (This)->lpVtbl -> get_Agent(This,ppAgent) )
#define ITAgentSession_get_Address(This,ppAddress) ( (This)->lpVtbl -> get_Address(This,ppAddress) )
#define ITAgentSession_get_ACDGroup(This,ppACDGroup) ( (This)->lpVtbl -> get_ACDGroup(This,ppACDGroup) )
#define ITAgentSession_put_State(This,SessionState) ( (This)->lpVtbl -> put_State(This,SessionState) )
#define ITAgentSession_get_State(This,pSessionState) ( (This)->lpVtbl -> get_State(This,pSessionState) )
#define ITAgentSession_get_SessionStartTime(This,pdateSessionStart) ( (This)->lpVtbl -> get_SessionStartTime(This,pdateSessionStart) )
#define ITAgentSession_get_SessionDuration(This,plDuration) ( (This)->lpVtbl -> get_SessionDuration(This,plDuration) )
#define ITAgentSession_get_NumberOfCalls(This,plCalls) ( (This)->lpVtbl -> get_NumberOfCalls(This,plCalls) )
#define ITAgentSession_get_TotalTalkTime(This,plTalkTime) ( (This)->lpVtbl -> get_TotalTalkTime(This,plTalkTime) )
#define ITAgentSession_get_AverageTalkTime(This,plTalkTime) ( (This)->lpVtbl -> get_AverageTalkTime(This,plTalkTime) )
#define ITAgentSession_get_TotalCallTime(This,plCallTime) ( (This)->lpVtbl -> get_TotalCallTime(This,plCallTime) )
#define ITAgentSession_get_AverageCallTime(This,plCallTime) ( (This)->lpVtbl -> get_AverageCallTime(This,plCallTime) )
#define ITAgentSession_get_TotalWrapUpTime(This,plWrapUpTime) ( (This)->lpVtbl -> get_TotalWrapUpTime(This,plWrapUpTime) )
#define ITAgentSession_get_AverageWrapUpTime(This,plWrapUpTime) ( (This)->lpVtbl -> get_AverageWrapUpTime(This,plWrapUpTime) )
#define ITAgentSession_get_ACDCallRate(This,pcyCallrate) ( (This)->lpVtbl -> get_ACDCallRate(This,pcyCallrate) )
#define ITAgentSession_get_LongestTimeToAnswer(This,plAnswerTime) ( (This)->lpVtbl -> get_LongestTimeToAnswer(This,plAnswerTime) )
#define ITAgentSession_get_AverageTimeToAnswer(This,plAnswerTime) ( (This)->lpVtbl -> get_AverageTimeToAnswer(This,plAnswerTime) )
#endif
#endif
#ifndef __ITACDGroup_INTERFACE_DEFINED__
#define __ITACDGroup_INTERFACE_DEFINED__
extern const IID IID_ITACDGroup;
typedef struct ITACDGroupVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (ITACDGroup * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (ITACDGroup * This);
	ULONG(STDMETHODCALLTYPE * Release) (ITACDGroup * This);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfoCount) (ITACDGroup * This, UINT * pctinfo);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfo) (ITACDGroup * This, UINT iTInfo, LCID lcid, ITypeInfo ** ppTInfo);
	HRESULT(STDMETHODCALLTYPE * GetIDsOfNames) (ITACDGroup * This, REFIID riid, LPOLESTR * rgszNames, UINT cNames, LCID lcid, DISPID * rgDispId);
	HRESULT(STDMETHODCALLTYPE * Invoke) (ITACDGroup * This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS * pDispParams, VARIANT * pVarResult, EXCEPINFO * pExcepInfo, UINT * puArgErr);
	HRESULT(STDMETHODCALLTYPE * get_Name) (ITACDGroup * This, BSTR * ppName);
	HRESULT(STDMETHODCALLTYPE * EnumerateQueues) (ITACDGroup * This, IEnumQueue ** ppEnumQueue);
	HRESULT(STDMETHODCALLTYPE * get_Queues) (ITACDGroup * This, VARIANT * pVariant);
	END_INTERFACE
}  ITACDGroupVtbl;
interface ITACDGroup
{
	CONST_VTBL struct ITACDGroupVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define ITACDGroup_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define ITACDGroup_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define ITACDGroup_Release(This) ( (This)->lpVtbl -> Release(This) )
#define ITACDGroup_GetTypeInfoCount(This,pctinfo) ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define ITACDGroup_GetTypeInfo(This,iTInfo,lcid,ppTInfo) ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define ITACDGroup_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define ITACDGroup_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define ITACDGroup_get_Name(This,ppName) ( (This)->lpVtbl -> get_Name(This,ppName) )
#define ITACDGroup_EnumerateQueues(This,ppEnumQueue) ( (This)->lpVtbl -> EnumerateQueues(This,ppEnumQueue) )
#define ITACDGroup_get_Queues(This,pVariant) ( (This)->lpVtbl -> get_Queues(This,pVariant) )
#endif
#endif
#ifndef __ITQueue_INTERFACE_DEFINED__
#define __ITQueue_INTERFACE_DEFINED__
extern const IID IID_ITQueue;
typedef struct ITQueueVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (ITQueue * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (ITQueue * This);
	ULONG(STDMETHODCALLTYPE * Release) (ITQueue * This);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfoCount) (ITQueue * This, UINT * pctinfo);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfo) (ITQueue * This, UINT iTInfo, LCID lcid, ITypeInfo ** ppTInfo);
	HRESULT(STDMETHODCALLTYPE * GetIDsOfNames) (ITQueue * This, REFIID riid, LPOLESTR * rgszNames, UINT cNames, LCID lcid, DISPID * rgDispId);
	HRESULT(STDMETHODCALLTYPE * Invoke) (ITQueue * This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS * pDispParams, VARIANT * pVarResult, EXCEPINFO * pExcepInfo, UINT * puArgErr);
	HRESULT(STDMETHODCALLTYPE * put_MeasurementPeriod) (ITQueue * This, long lPeriod);
	HRESULT(STDMETHODCALLTYPE * get_MeasurementPeriod) (ITQueue * This, long *plPeriod);
	HRESULT(STDMETHODCALLTYPE * get_TotalCallsQueued) (ITQueue * This, long *plCalls);
	HRESULT(STDMETHODCALLTYPE * get_CurrentCallsQueued) (ITQueue * This, long *plCalls);
	HRESULT(STDMETHODCALLTYPE * get_TotalCallsAbandoned) (ITQueue * This, long *plCalls);
	HRESULT(STDMETHODCALLTYPE * get_TotalCallsFlowedIn) (ITQueue * This, long *plCalls);
	HRESULT(STDMETHODCALLTYPE * get_TotalCallsFlowedOut) (ITQueue * This, long *plCalls);
	HRESULT(STDMETHODCALLTYPE * get_LongestEverWaitTime) (ITQueue * This, long *plWaitTime);
	HRESULT(STDMETHODCALLTYPE * get_CurrentLongestWaitTime) (ITQueue * This, long *plWaitTime);
	HRESULT(STDMETHODCALLTYPE * get_AverageWaitTime) (ITQueue * This, long *plWaitTime);
	HRESULT(STDMETHODCALLTYPE * get_FinalDisposition) (ITQueue * This, long *plCalls);
	HRESULT(STDMETHODCALLTYPE * get_Name) (ITQueue * This, BSTR * ppName);
	END_INTERFACE
}  ITQueueVtbl;
interface ITQueue
{
	CONST_VTBL struct ITQueueVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define ITQueue_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define ITQueue_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define ITQueue_Release(This) ( (This)->lpVtbl -> Release(This) )
#define ITQueue_GetTypeInfoCount(This,pctinfo) ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define ITQueue_GetTypeInfo(This,iTInfo,lcid,ppTInfo) ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define ITQueue_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define ITQueue_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define ITQueue_put_MeasurementPeriod(This,lPeriod) ( (This)->lpVtbl -> put_MeasurementPeriod(This,lPeriod) )
#define ITQueue_get_MeasurementPeriod(This,plPeriod) ( (This)->lpVtbl -> get_MeasurementPeriod(This,plPeriod) )
#define ITQueue_get_TotalCallsQueued(This,plCalls) ( (This)->lpVtbl -> get_TotalCallsQueued(This,plCalls) )
#define ITQueue_get_CurrentCallsQueued(This,plCalls) ( (This)->lpVtbl -> get_CurrentCallsQueued(This,plCalls) )
#define ITQueue_get_TotalCallsAbandoned(This,plCalls) ( (This)->lpVtbl -> get_TotalCallsAbandoned(This,plCalls) )
#define ITQueue_get_TotalCallsFlowedIn(This,plCalls) ( (This)->lpVtbl -> get_TotalCallsFlowedIn(This,plCalls) )
#define ITQueue_get_TotalCallsFlowedOut(This,plCalls) ( (This)->lpVtbl -> get_TotalCallsFlowedOut(This,plCalls) )
#define ITQueue_get_LongestEverWaitTime(This,plWaitTime) ( (This)->lpVtbl -> get_LongestEverWaitTime(This,plWaitTime) )
#define ITQueue_get_CurrentLongestWaitTime(This,plWaitTime) ( (This)->lpVtbl -> get_CurrentLongestWaitTime(This,plWaitTime) )
#define ITQueue_get_AverageWaitTime(This,plWaitTime) ( (This)->lpVtbl -> get_AverageWaitTime(This,plWaitTime) )
#define ITQueue_get_FinalDisposition(This,plCalls) ( (This)->lpVtbl -> get_FinalDisposition(This,plCalls) )
#define ITQueue_get_Name(This,ppName) ( (This)->lpVtbl -> get_Name(This,ppName) )
#endif
#endif
#ifndef __ITAgentEvent_INTERFACE_DEFINED__
#define __ITAgentEvent_INTERFACE_DEFINED__
extern const IID IID_ITAgentEvent;
typedef struct ITAgentEventVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (ITAgentEvent * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (ITAgentEvent * This);
	ULONG(STDMETHODCALLTYPE * Release) (ITAgentEvent * This);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfoCount) (ITAgentEvent * This, UINT * pctinfo);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfo) (ITAgentEvent * This, UINT iTInfo, LCID lcid, ITypeInfo ** ppTInfo);
	HRESULT(STDMETHODCALLTYPE * GetIDsOfNames) (ITAgentEvent * This, REFIID riid, LPOLESTR * rgszNames, UINT cNames, LCID lcid, DISPID * rgDispId);
	HRESULT(STDMETHODCALLTYPE * Invoke) (ITAgentEvent * This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS * pDispParams, VARIANT * pVarResult, EXCEPINFO * pExcepInfo, UINT * puArgErr);
	HRESULT(STDMETHODCALLTYPE * get_Agent) (ITAgentEvent * This, ITAgent ** ppAgent);
	HRESULT(STDMETHODCALLTYPE * get_Event) (ITAgentEvent * This, AGENT_EVENT * pEvent);
	END_INTERFACE
}  ITAgentEventVtbl;
interface ITAgentEvent
{
	CONST_VTBL struct ITAgentEventVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define ITAgentEvent_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define ITAgentEvent_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define ITAgentEvent_Release(This) ( (This)->lpVtbl -> Release(This) )
#define ITAgentEvent_GetTypeInfoCount(This,pctinfo) ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define ITAgentEvent_GetTypeInfo(This,iTInfo,lcid,ppTInfo) ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define ITAgentEvent_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define ITAgentEvent_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define ITAgentEvent_get_Agent(This,ppAgent) ( (This)->lpVtbl -> get_Agent(This,ppAgent) )
#define ITAgentEvent_get_Event(This,pEvent) ( (This)->lpVtbl -> get_Event(This,pEvent) )
#endif
#endif
#ifndef __ITAgentSessionEvent_INTERFACE_DEFINED__
#define __ITAgentSessionEvent_INTERFACE_DEFINED__
extern const IID IID_ITAgentSessionEvent;
typedef struct ITAgentSessionEventVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (ITAgentSessionEvent * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (ITAgentSessionEvent * This);
	ULONG(STDMETHODCALLTYPE * Release) (ITAgentSessionEvent * This);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfoCount) (ITAgentSessionEvent * This, UINT * pctinfo);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfo) (ITAgentSessionEvent * This, UINT iTInfo, LCID lcid, ITypeInfo ** ppTInfo);
	HRESULT(STDMETHODCALLTYPE * GetIDsOfNames) (ITAgentSessionEvent * This, REFIID riid, LPOLESTR * rgszNames, UINT cNames, LCID lcid, DISPID * rgDispId);
	HRESULT(STDMETHODCALLTYPE * Invoke) (ITAgentSessionEvent * This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS * pDispParams, VARIANT * pVarResult, EXCEPINFO * pExcepInfo, UINT * puArgErr);
	HRESULT(STDMETHODCALLTYPE * get_Session) (ITAgentSessionEvent * This, ITAgentSession ** ppSession);
	HRESULT(STDMETHODCALLTYPE * get_Event) (ITAgentSessionEvent * This, AGENT_SESSION_EVENT * pEvent);
	END_INTERFACE
}  ITAgentSessionEventVtbl;
interface ITAgentSessionEvent
{
	CONST_VTBL struct ITAgentSessionEventVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define ITAgentSessionEvent_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define ITAgentSessionEvent_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define ITAgentSessionEvent_Release(This) ( (This)->lpVtbl -> Release(This) )
#define ITAgentSessionEvent_GetTypeInfoCount(This,pctinfo) ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define ITAgentSessionEvent_GetTypeInfo(This,iTInfo,lcid,ppTInfo) ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define ITAgentSessionEvent_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define ITAgentSessionEvent_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define ITAgentSessionEvent_get_Session(This,ppSession) ( (This)->lpVtbl -> get_Session(This,ppSession) )
#define ITAgentSessionEvent_get_Event(This,pEvent) ( (This)->lpVtbl -> get_Event(This,pEvent) )
#endif
#endif
#ifndef __ITACDGroupEvent_INTERFACE_DEFINED__
#define __ITACDGroupEvent_INTERFACE_DEFINED__
extern const IID IID_ITACDGroupEvent;
typedef struct ITACDGroupEventVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (ITACDGroupEvent * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (ITACDGroupEvent * This);
	ULONG(STDMETHODCALLTYPE * Release) (ITACDGroupEvent * This);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfoCount) (ITACDGroupEvent * This, UINT * pctinfo);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfo) (ITACDGroupEvent * This, UINT iTInfo, LCID lcid, ITypeInfo ** ppTInfo);
	HRESULT(STDMETHODCALLTYPE * GetIDsOfNames) (ITACDGroupEvent * This, REFIID riid, LPOLESTR * rgszNames, UINT cNames, LCID lcid, DISPID * rgDispId);
	HRESULT(STDMETHODCALLTYPE * Invoke) (ITACDGroupEvent * This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS * pDispParams, VARIANT * pVarResult, EXCEPINFO * pExcepInfo, UINT * puArgErr);
	HRESULT(STDMETHODCALLTYPE * get_Group) (ITACDGroupEvent * This, ITACDGroup ** ppGroup);
	HRESULT(STDMETHODCALLTYPE * get_Event) (ITACDGroupEvent * This, ACDGROUP_EVENT * pEvent);
	END_INTERFACE
}  ITACDGroupEventVtbl;
interface ITACDGroupEvent
{
	CONST_VTBL struct ITACDGroupEventVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define ITACDGroupEvent_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define ITACDGroupEvent_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define ITACDGroupEvent_Release(This) ( (This)->lpVtbl -> Release(This) )
#define ITACDGroupEvent_GetTypeInfoCount(This,pctinfo) ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define ITACDGroupEvent_GetTypeInfo(This,iTInfo,lcid,ppTInfo) ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define ITACDGroupEvent_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define ITACDGroupEvent_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define ITACDGroupEvent_get_Group(This,ppGroup) ( (This)->lpVtbl -> get_Group(This,ppGroup) )
#define ITACDGroupEvent_get_Event(This,pEvent) ( (This)->lpVtbl -> get_Event(This,pEvent) )
#endif
#endif
#ifndef __ITQueueEvent_INTERFACE_DEFINED__
#define __ITQueueEvent_INTERFACE_DEFINED__
extern const IID IID_ITQueueEvent;
typedef struct ITQueueEventVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (ITQueueEvent * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (ITQueueEvent * This);
	ULONG(STDMETHODCALLTYPE * Release) (ITQueueEvent * This);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfoCount) (ITQueueEvent * This, UINT * pctinfo);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfo) (ITQueueEvent * This, UINT iTInfo, LCID lcid, ITypeInfo ** ppTInfo);
	HRESULT(STDMETHODCALLTYPE * GetIDsOfNames) (ITQueueEvent * This, REFIID riid, LPOLESTR * rgszNames, UINT cNames, LCID lcid, DISPID * rgDispId);
	HRESULT(STDMETHODCALLTYPE * Invoke) (ITQueueEvent * This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS * pDispParams, VARIANT * pVarResult, EXCEPINFO * pExcepInfo, UINT * puArgErr);
	HRESULT(STDMETHODCALLTYPE * get_Queue) (ITQueueEvent * This, ITQueue ** ppQueue);
	HRESULT(STDMETHODCALLTYPE * get_Event) (ITQueueEvent * This, ACDQUEUE_EVENT * pEvent);
	END_INTERFACE
}  ITQueueEventVtbl;
interface ITQueueEvent
{
	CONST_VTBL struct ITQueueEventVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define ITQueueEvent_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define ITQueueEvent_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define ITQueueEvent_Release(This) ( (This)->lpVtbl -> Release(This) )
#define ITQueueEvent_GetTypeInfoCount(This,pctinfo) ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define ITQueueEvent_GetTypeInfo(This,iTInfo,lcid,ppTInfo) ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define ITQueueEvent_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define ITQueueEvent_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define ITQueueEvent_get_Queue(This,ppQueue) ( (This)->lpVtbl -> get_Queue(This,ppQueue) )
#define ITQueueEvent_get_Event(This,pEvent) ( (This)->lpVtbl -> get_Event(This,pEvent) )
#endif
#endif
#ifndef __ITAgentHandlerEvent_INTERFACE_DEFINED__
#define __ITAgentHandlerEvent_INTERFACE_DEFINED__
extern const IID IID_ITAgentHandlerEvent;
typedef struct ITAgentHandlerEventVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (ITAgentHandlerEvent * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (ITAgentHandlerEvent * This);
	ULONG(STDMETHODCALLTYPE * Release) (ITAgentHandlerEvent * This);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfoCount) (ITAgentHandlerEvent * This, UINT * pctinfo);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfo) (ITAgentHandlerEvent * This, UINT iTInfo, LCID lcid, ITypeInfo ** ppTInfo);
	HRESULT(STDMETHODCALLTYPE * GetIDsOfNames) (ITAgentHandlerEvent * This, REFIID riid, LPOLESTR * rgszNames, UINT cNames, LCID lcid, DISPID * rgDispId);
	HRESULT(STDMETHODCALLTYPE * Invoke) (ITAgentHandlerEvent * This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS * pDispParams, VARIANT * pVarResult, EXCEPINFO * pExcepInfo, UINT * puArgErr);
	HRESULT(STDMETHODCALLTYPE * get_AgentHandler) (ITAgentHandlerEvent * This, ITAgentHandler ** ppAgentHandler);
	HRESULT(STDMETHODCALLTYPE * get_Event) (ITAgentHandlerEvent * This, AGENTHANDLER_EVENT * pEvent);
	END_INTERFACE
}  ITAgentHandlerEventVtbl;
interface ITAgentHandlerEvent
{
	CONST_VTBL struct ITAgentHandlerEventVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define ITAgentHandlerEvent_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define ITAgentHandlerEvent_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define ITAgentHandlerEvent_Release(This) ( (This)->lpVtbl -> Release(This) )
#define ITAgentHandlerEvent_GetTypeInfoCount(This,pctinfo) ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define ITAgentHandlerEvent_GetTypeInfo(This,iTInfo,lcid,ppTInfo) ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define ITAgentHandlerEvent_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define ITAgentHandlerEvent_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define ITAgentHandlerEvent_get_AgentHandler(This,ppAgentHandler) ( (This)->lpVtbl -> get_AgentHandler(This,ppAgentHandler) )
#define ITAgentHandlerEvent_get_Event(This,pEvent) ( (This)->lpVtbl -> get_Event(This,pEvent) )
#endif
#endif
#ifndef __ITTAPICallCenter_INTERFACE_DEFINED__
#define __ITTAPICallCenter_INTERFACE_DEFINED__
extern const IID IID_ITTAPICallCenter;
typedef struct ITTAPICallCenterVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (ITTAPICallCenter * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (ITTAPICallCenter * This);
	ULONG(STDMETHODCALLTYPE * Release) (ITTAPICallCenter * This);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfoCount) (ITTAPICallCenter * This, UINT * pctinfo);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfo) (ITTAPICallCenter * This, UINT iTInfo, LCID lcid, ITypeInfo ** ppTInfo);
	HRESULT(STDMETHODCALLTYPE * GetIDsOfNames) (ITTAPICallCenter * This, REFIID riid, LPOLESTR * rgszNames, UINT cNames, LCID lcid, DISPID * rgDispId);
	HRESULT(STDMETHODCALLTYPE * Invoke) (ITTAPICallCenter * This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS * pDispParams, VARIANT * pVarResult, EXCEPINFO * pExcepInfo, UINT * puArgErr);
	HRESULT(STDMETHODCALLTYPE * EnumerateAgentHandlers) (ITTAPICallCenter * This, IEnumAgentHandler ** ppEnumHandler);
	HRESULT(STDMETHODCALLTYPE * get_AgentHandlers) (ITTAPICallCenter * This, VARIANT * pVariant);
	END_INTERFACE
}  ITTAPICallCenterVtbl;
interface ITTAPICallCenter
{
	CONST_VTBL struct ITTAPICallCenterVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define ITTAPICallCenter_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define ITTAPICallCenter_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define ITTAPICallCenter_Release(This) ( (This)->lpVtbl -> Release(This) )
#define ITTAPICallCenter_GetTypeInfoCount(This,pctinfo) ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define ITTAPICallCenter_GetTypeInfo(This,iTInfo,lcid,ppTInfo) ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define ITTAPICallCenter_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define ITTAPICallCenter_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define ITTAPICallCenter_EnumerateAgentHandlers(This,ppEnumHandler) ( (This)->lpVtbl -> EnumerateAgentHandlers(This,ppEnumHandler) )
#define ITTAPICallCenter_get_AgentHandlers(This,pVariant) ( (This)->lpVtbl -> get_AgentHandlers(This,pVariant) )
#endif
#endif
#ifndef __ITAgentHandler_INTERFACE_DEFINED__
#define __ITAgentHandler_INTERFACE_DEFINED__
extern const IID IID_ITAgentHandler;
typedef struct ITAgentHandlerVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (ITAgentHandler * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (ITAgentHandler * This);
	ULONG(STDMETHODCALLTYPE * Release) (ITAgentHandler * This);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfoCount) (ITAgentHandler * This, UINT * pctinfo);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfo) (ITAgentHandler * This, UINT iTInfo, LCID lcid, ITypeInfo ** ppTInfo);
	HRESULT(STDMETHODCALLTYPE * GetIDsOfNames) (ITAgentHandler * This, REFIID riid, LPOLESTR * rgszNames, UINT cNames, LCID lcid, DISPID * rgDispId);
	HRESULT(STDMETHODCALLTYPE * Invoke) (ITAgentHandler * This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS * pDispParams, VARIANT * pVarResult, EXCEPINFO * pExcepInfo, UINT * puArgErr);
	HRESULT(STDMETHODCALLTYPE * get_Name) (ITAgentHandler * This, BSTR * ppName);
	HRESULT(STDMETHODCALLTYPE * CreateAgent) (ITAgentHandler * This, ITAgent ** ppAgent);
	HRESULT(STDMETHODCALLTYPE * CreateAgentWithID) (ITAgentHandler * This, BSTR pID, BSTR pPIN, ITAgent ** ppAgent);
	HRESULT(STDMETHODCALLTYPE * EnumerateACDGroups) (ITAgentHandler * This, IEnumACDGroup ** ppEnumACDGroup);
	HRESULT(STDMETHODCALLTYPE * EnumerateUsableAddresses) (ITAgentHandler * This, IEnumAddress ** ppEnumAddress);
	HRESULT(STDMETHODCALLTYPE * get_ACDGroups) (ITAgentHandler * This, VARIANT * pVariant);
	HRESULT(STDMETHODCALLTYPE * get_UsableAddresses) (ITAgentHandler * This, VARIANT * pVariant);
	END_INTERFACE
}  ITAgentHandlerVtbl;
interface ITAgentHandler
{
	CONST_VTBL struct ITAgentHandlerVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define ITAgentHandler_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define ITAgentHandler_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define ITAgentHandler_Release(This) ( (This)->lpVtbl -> Release(This) )
#define ITAgentHandler_GetTypeInfoCount(This,pctinfo) ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define ITAgentHandler_GetTypeInfo(This,iTInfo,lcid,ppTInfo) ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define ITAgentHandler_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define ITAgentHandler_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define ITAgentHandler_get_Name(This,ppName) ( (This)->lpVtbl -> get_Name(This,ppName) )
#define ITAgentHandler_CreateAgent(This,ppAgent) ( (This)->lpVtbl -> CreateAgent(This,ppAgent) )
#define ITAgentHandler_CreateAgentWithID(This,pID,pPIN,ppAgent) ( (This)->lpVtbl -> CreateAgentWithID(This,pID,pPIN,ppAgent) )
#define ITAgentHandler_EnumerateACDGroups(This,ppEnumACDGroup) ( (This)->lpVtbl -> EnumerateACDGroups(This,ppEnumACDGroup) )
#define ITAgentHandler_EnumerateUsableAddresses(This,ppEnumAddress) ( (This)->lpVtbl -> EnumerateUsableAddresses(This,ppEnumAddress) )
#define ITAgentHandler_get_ACDGroups(This,pVariant) ( (This)->lpVtbl -> get_ACDGroups(This,pVariant) )
#define ITAgentHandler_get_UsableAddresses(This,pVariant) ( (This)->lpVtbl -> get_UsableAddresses(This,pVariant) )
#endif
#endif
#ifndef __IEnumAgent_INTERFACE_DEFINED__
#define __IEnumAgent_INTERFACE_DEFINED__
extern const IID IID_IEnumAgent;
typedef struct IEnumAgentVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IEnumAgent * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IEnumAgent * This);
	ULONG(STDMETHODCALLTYPE * Release) (IEnumAgent * This);
	HRESULT(STDMETHODCALLTYPE * Next) (IEnumAgent * This, ULONG celt, ITAgent ** ppElements, ULONG * pceltFetched);
	HRESULT(STDMETHODCALLTYPE * Reset) (IEnumAgent * This);
	HRESULT(STDMETHODCALLTYPE * Skip) (IEnumAgent * This, ULONG celt);
	HRESULT(STDMETHODCALLTYPE * Clone) (IEnumAgent * This, IEnumAgent ** ppEnum);
	END_INTERFACE
}  IEnumAgentVtbl;
interface IEnumAgent
{
	CONST_VTBL struct IEnumAgentVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IEnumAgent_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IEnumAgent_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IEnumAgent_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IEnumAgent_Next(This,celt,ppElements,pceltFetched) ( (This)->lpVtbl -> Next(This,celt,ppElements,pceltFetched) )
#define IEnumAgent_Reset(This) ( (This)->lpVtbl -> Reset(This) )
#define IEnumAgent_Skip(This,celt) ( (This)->lpVtbl -> Skip(This,celt) )
#define IEnumAgent_Clone(This,ppEnum) ( (This)->lpVtbl -> Clone(This,ppEnum) )
#endif
#endif
#ifndef __IEnumAgentSession_INTERFACE_DEFINED__
#define __IEnumAgentSession_INTERFACE_DEFINED__
extern const IID IID_IEnumAgentSession;
typedef struct IEnumAgentSessionVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IEnumAgentSession * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IEnumAgentSession * This);
	ULONG(STDMETHODCALLTYPE * Release) (IEnumAgentSession * This);
	HRESULT(STDMETHODCALLTYPE * Next) (IEnumAgentSession * This, ULONG celt, ITAgentSession ** ppElements, ULONG * pceltFetched);
	HRESULT(STDMETHODCALLTYPE * Reset) (IEnumAgentSession * This);
	HRESULT(STDMETHODCALLTYPE * Skip) (IEnumAgentSession * This, ULONG celt);
	HRESULT(STDMETHODCALLTYPE * Clone) (IEnumAgentSession * This, IEnumAgentSession ** ppEnum);
	END_INTERFACE
}  IEnumAgentSessionVtbl;
interface IEnumAgentSession
{
	CONST_VTBL struct IEnumAgentSessionVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IEnumAgentSession_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IEnumAgentSession_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IEnumAgentSession_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IEnumAgentSession_Next(This,celt,ppElements,pceltFetched) ( (This)->lpVtbl -> Next(This,celt,ppElements,pceltFetched) )
#define IEnumAgentSession_Reset(This) ( (This)->lpVtbl -> Reset(This) )
#define IEnumAgentSession_Skip(This,celt) ( (This)->lpVtbl -> Skip(This,celt) )
#define IEnumAgentSession_Clone(This,ppEnum) ( (This)->lpVtbl -> Clone(This,ppEnum) )
#endif
#endif
#ifndef __IEnumQueue_INTERFACE_DEFINED__
#define __IEnumQueue_INTERFACE_DEFINED__
extern const IID IID_IEnumQueue;
typedef struct IEnumQueueVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IEnumQueue * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IEnumQueue * This);
	ULONG(STDMETHODCALLTYPE * Release) (IEnumQueue * This);
	HRESULT(STDMETHODCALLTYPE * Next) (IEnumQueue * This, ULONG celt, ITQueue ** ppElements, ULONG * pceltFetched);
	HRESULT(STDMETHODCALLTYPE * Reset) (IEnumQueue * This);
	HRESULT(STDMETHODCALLTYPE * Skip) (IEnumQueue * This, ULONG celt);
	HRESULT(STDMETHODCALLTYPE * Clone) (IEnumQueue * This, IEnumQueue ** ppEnum);
	END_INTERFACE
}  IEnumQueueVtbl;
interface IEnumQueue
{
	CONST_VTBL struct IEnumQueueVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IEnumQueue_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IEnumQueue_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IEnumQueue_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IEnumQueue_Next(This,celt,ppElements,pceltFetched) ( (This)->lpVtbl -> Next(This,celt,ppElements,pceltFetched) )
#define IEnumQueue_Reset(This) ( (This)->lpVtbl -> Reset(This) )
#define IEnumQueue_Skip(This,celt) ( (This)->lpVtbl -> Skip(This,celt) )
#define IEnumQueue_Clone(This,ppEnum) ( (This)->lpVtbl -> Clone(This,ppEnum) )
#endif
#endif
#ifndef __IEnumACDGroup_INTERFACE_DEFINED__
#define __IEnumACDGroup_INTERFACE_DEFINED__
extern const IID IID_IEnumACDGroup;
typedef struct IEnumACDGroupVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IEnumACDGroup * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IEnumACDGroup * This);
	ULONG(STDMETHODCALLTYPE * Release) (IEnumACDGroup * This);
	HRESULT(STDMETHODCALLTYPE * Next) (IEnumACDGroup * This, ULONG celt, ITACDGroup ** ppElements, ULONG * pceltFetched);
	HRESULT(STDMETHODCALLTYPE * Reset) (IEnumACDGroup * This);
	HRESULT(STDMETHODCALLTYPE * Skip) (IEnumACDGroup * This, ULONG celt);
	HRESULT(STDMETHODCALLTYPE * Clone) (IEnumACDGroup * This, IEnumACDGroup ** ppEnum);
	END_INTERFACE
}  IEnumACDGroupVtbl;
interface IEnumACDGroup
{
	CONST_VTBL struct IEnumACDGroupVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IEnumACDGroup_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IEnumACDGroup_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IEnumACDGroup_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IEnumACDGroup_Next(This,celt,ppElements,pceltFetched) ( (This)->lpVtbl -> Next(This,celt,ppElements,pceltFetched) )
#define IEnumACDGroup_Reset(This) ( (This)->lpVtbl -> Reset(This) )
#define IEnumACDGroup_Skip(This,celt) ( (This)->lpVtbl -> Skip(This,celt) )
#define IEnumACDGroup_Clone(This,ppEnum) ( (This)->lpVtbl -> Clone(This,ppEnum) )
#endif
#endif
#ifndef __IEnumAgentHandler_INTERFACE_DEFINED__
#define __IEnumAgentHandler_INTERFACE_DEFINED__
extern const IID IID_IEnumAgentHandler;
typedef struct IEnumAgentHandlerVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IEnumAgentHandler * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IEnumAgentHandler * This);
	ULONG(STDMETHODCALLTYPE * Release) (IEnumAgentHandler * This);
	HRESULT(STDMETHODCALLTYPE * Next) (IEnumAgentHandler * This, ULONG celt, ITAgentHandler ** ppElements, ULONG * pceltFetched);
	HRESULT(STDMETHODCALLTYPE * Reset) (IEnumAgentHandler * This);
	HRESULT(STDMETHODCALLTYPE * Skip) (IEnumAgentHandler * This, ULONG celt);
	HRESULT(STDMETHODCALLTYPE * Clone) (IEnumAgentHandler * This, IEnumAgentHandler ** ppEnum);
	END_INTERFACE
}  IEnumAgentHandlerVtbl;
interface IEnumAgentHandler
{
	CONST_VTBL struct IEnumAgentHandlerVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IEnumAgentHandler_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IEnumAgentHandler_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IEnumAgentHandler_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IEnumAgentHandler_Next(This,celt,ppElements,pceltFetched) ( (This)->lpVtbl -> Next(This,celt,ppElements,pceltFetched) )
#define IEnumAgentHandler_Reset(This) ( (This)->lpVtbl -> Reset(This) )
#define IEnumAgentHandler_Skip(This,celt) ( (This)->lpVtbl -> Skip(This,celt) )
#define IEnumAgentHandler_Clone(This,ppEnum) ( (This)->lpVtbl -> Clone(This,ppEnum) )
#endif
#endif
unsigned long __RPC_USER BSTR_UserSize(unsigned long *, unsigned long, BSTR *);
unsigned char *__RPC_USER BSTR_UserMarshal(unsigned long *, unsigned char *, BSTR *);
unsigned char *__RPC_USER BSTR_UserUnmarshal(unsigned long *, unsigned char *, BSTR *);
void __RPC_USER BSTR_UserFree(unsigned long *, BSTR *);
unsigned long __RPC_USER VARIANT_UserSize(unsigned long *, unsigned long, VARIANT *);
unsigned char *__RPC_USER VARIANT_UserMarshal(unsigned long *, unsigned char *, VARIANT *);
unsigned char *__RPC_USER VARIANT_UserUnmarshal(unsigned long *, unsigned char *, VARIANT *);
void __RPC_USER VARIANT_UserFree(unsigned long *, VARIANT *);
unsigned long __RPC_USER BSTR_UserSize64(unsigned long *, unsigned long, BSTR *);
unsigned char *__RPC_USER BSTR_UserMarshal64(unsigned long *, unsigned char *, BSTR *);
unsigned char *__RPC_USER BSTR_UserUnmarshal64(unsigned long *, unsigned char *, BSTR *);
void __RPC_USER BSTR_UserFree64(unsigned long *, BSTR *);
unsigned long __RPC_USER VARIANT_UserSize64(unsigned long *, unsigned long, VARIANT *);
unsigned char *__RPC_USER VARIANT_UserMarshal64(unsigned long *, unsigned char *, VARIANT *);
unsigned char *__RPC_USER VARIANT_UserUnmarshal64(unsigned long *, unsigned char *, VARIANT *);
void __RPC_USER VARIANT_UserFree64(unsigned long *, VARIANT *);
#endif

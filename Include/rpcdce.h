/*+@@file@@----------------------------------------------------------------*//*!
 \file		rpcdce.h
 \par Description 
            Extension and update of headers for PellesC compiler suite.
 \par Project: 
            PellesC Headers extension
 \date		Created  on Mon Jun 27 01:31:46 2016
 \date		Modified on Mon Jun 27 01:31:46 2016
 \author	frankie
\*//*-@@file@@----------------------------------------------------------------*/

#ifndef __RPCDCE_H__
#define __RPCDCE_H__
#if __POCC__ >= 500
#pragma once
#endif
#ifndef DECLSPEC_NORETURN
#if (__POCC__ >= 500)
#define DECLSPEC_NORETURN   __declspec(noreturn)
#else
#define DECLSPEC_NORETURN
#endif
#endif
typedef unsigned char __RPC_FAR *RPC_CSTR;
#if defined(RPC_USE_NATIVE_WCHAR) && defined(_NATIVE_WCHAR_T_DEFINED)
typedef wchar_t __RPC_FAR *RPC_WSTR;
typedef const wchar_t *RPC_CWSTR;
#else
typedef unsigned short __RPC_FAR *RPC_WSTR;
typedef const unsigned short *RPC_CWSTR;
#endif
typedef I_RPC_HANDLE RPC_BINDING_HANDLE;
typedef RPC_BINDING_HANDLE handle_t;
#define rpc_binding_handle_t RPC_BINDING_HANDLE
#ifndef GUID_DEFINED
#include <guiddef.h>
#endif
#ifndef UUID_DEFINED
#define UUID_DEFINED
typedef GUID UUID;
#ifndef uuid_t
#define uuid_t UUID
#endif
#endif
typedef struct _RPC_BINDING_VECTOR {
	unsigned long Count;
	RPC_BINDING_HANDLE BindingH[1];
} RPC_BINDING_VECTOR;
#ifndef rpc_binding_vector_t
#define rpc_binding_vector_t RPC_BINDING_VECTOR
#endif
typedef struct _UUID_VECTOR {
	unsigned long Count;
	UUID *Uuid[1];
} UUID_VECTOR;
#ifndef uuid_vector_t
#define uuid_vector_t UUID_VECTOR
#endif
typedef void __RPC_FAR *RPC_IF_HANDLE;
#ifndef IFID_DEFINED
#define IFID_DEFINED
typedef struct _RPC_IF_ID {
	UUID Uuid;
	unsigned short VersMajor;
	unsigned short VersMinor;
} RPC_IF_ID;
#endif
#define RPC_C_BINDING_INFINITE_TIME10
#define RPC_C_BINDING_MIN_TIME0
#define RPC_C_BINDING_DEFAULT_TIME5
#define RPC_C_BINDING_MAX_TIME9
#define RPC_C_CANCEL_INFINITE_TIME-1
#define RPC_C_LISTEN_MAX_CALLS_DEFAULT 1234
#define RPC_C_PROTSEQ_MAX_REQS_DEFAULT 10
#define RPC_C_BIND_TO_ALL_NICS          1
#define RPC_C_USE_INTERNET_PORT         0x1
#define RPC_C_USE_INTRANET_PORT         0x2
#define RPC_C_DONT_FAIL                 0x4
#define RPC_C_RPCHTTP_USE_LOAD_BALANCE  0x8
#if (NTDDI_VERSION < NTDDI_VISTA)
#define RPC_C_MQ_TEMPORARY                  0x0000
#define RPC_C_MQ_PERMANENT                  0x0001
#define RPC_C_MQ_CLEAR_ON_OPEN              0x0002
#define RPC_C_MQ_USE_EXISTING_SECURITY      0x0004
#define RPC_C_MQ_AUTHN_LEVEL_NONE           0x0000
#define RPC_C_MQ_AUTHN_LEVEL_PKT_INTEGRITY  0x0008
#define RPC_C_MQ_AUTHN_LEVEL_PKT_PRIVACY    0x0010
#define RPC_C_MQ_EXPRESS                0
#define RPC_C_MQ_RECOVERABLE            1
#define RPC_C_MQ_JOURNAL_NONE           0
#define RPC_C_MQ_JOURNAL_DEADLETTER     1
#define RPC_C_MQ_JOURNAL_ALWAYS         2
#define RPC_C_OPT_MQ_DELIVERY            1
#define RPC_C_OPT_MQ_PRIORITY            2
#define RPC_C_OPT_MQ_JOURNAL             3
#define RPC_C_OPT_MQ_ACKNOWLEDGE         4
#define RPC_C_OPT_MQ_AUTHN_SERVICE       5
#define RPC_C_OPT_MQ_AUTHN_LEVEL         6
#define RPC_C_OPT_MQ_TIME_TO_REACH_QUEUE 7
#define RPC_C_OPT_MQ_TIME_TO_BE_RECEIVED 8
#endif
#define RPC_C_OPT_BINDING_NONCAUSAL      9
#define RPC_C_OPT_SECURITY_CALLBACK      10
#define RPC_C_OPT_UNIQUE_BINDING         11
#if (NTDDI_VERSION <= NTDDI_WIN2K)
#define RPC_C_OPT_MAX_OPTIONS            12
#elif (NTDDI_VERSION <= NTDDI_WS03)
#define RPC_C_OPT_CALL_TIME          12
#define RPC_C_OPT_DONT_LINGER            13
#define RPC_C_OPT_MAX_OPTIONS            14
#else
#define RPC_C_OPT_TRANS_SEND_BUFFER_SIZE 5
#define RPC_C_OPT_CALL_TIME          12
#define RPC_C_OPT_DONT_LINGER            13
#define RPC_C_OPT_TRUST_PEER             14
#define RPC_C_OPT_ASYNC_BLOCK            15
#define RPC_C_OPT_OPTIMIZE_TIME          16
#define RPC_C_OPT_MAX_OPTIONS            17
#endif
#define RPC_C_FULL_CERT_CHA0x0001
#ifdef RPC_UNICODE_SUPPORTED
typedef struct _RPC_PROTSEQ_VECTORA {
	unsigned int Count;
	unsigned char __RPC_FAR *Protseq[1];
} RPC_PROTSEQ_VECTORA;
typedef struct _RPC_PROTSEQ_VECTORW {
	unsigned int Count;
	unsigned short __RPC_FAR *Protseq[1];
} RPC_PROTSEQ_VECTORW;
#ifdef UNICODE
#define RPC_PROTSEQ_VECTOR RPC_PROTSEQ_VECTORW
#else
#define RPC_PROTSEQ_VECTOR RPC_PROTSEQ_VECTORA
#endif
#else
typedef struct _RPC_PROTSEQ_VECTOR {
	unsigned int Count;
	unsigned char __RPC_FAR *Protseq[1];
} RPC_PROTSEQ_VECTOR;
#endif
typedef struct _RPC_POLICY {
	unsigned int Length;
	unsigned long EndpointFlags;
	unsigned long NICFlags;
} RPC_POLICY, __RPC_FAR * PRPC_POLICY;
typedef void __RPC_USER RPC_OBJECT_INQ_FN(UUID __RPC_FAR *ObjectUuid, UUID __RPC_FAR *TypeUuid, RPC_STATUS __RPC_FAR *Status);

typedef RPC_STATUS RPC_ENTRY RPC_IF_CALLBACK_FN(RPC_IF_HANDLE InterfaceUuid, void *Context);
typedef void RPC_ENTRY RPC_SECURITY_CALLBACK_FN(void *Context);
#define RPC_MGR_EPV void
typedef struct {
	unsigned int Count;
	unsigned long Stats[1];
} RPC_STATS_VECTOR;
#define RPC_C_STATS_CALLS_0
#define RPC_C_STATS_CALLS_1
#define RPC_C_STATS_PKTS_2
#define RPC_C_STATS_PKTS_3
typedef struct {
	unsigned long Count;
	RPC_IF_ID __RPC_FAR *IfId[1];
} RPC_IF_ID_VECTOR;
RPCRTAPI RPC_STATUS RPC_ENTRY RpcBindingCopy(RPC_BINDING_HANDLE SourceBinding, RPC_BINDING_HANDLE __RPC_FAR *DestinationBinding);
RPCRTAPI RPC_STATUS RPC_ENTRY RpcBindingFree(RPC_BINDING_HANDLE __RPC_FAR *Binding);
RPCRTAPI RPC_STATUS RPC_ENTRY RpcBindingSetOption(RPC_BINDING_HANDLE hBinding, unsigned long option, ULONG_PTR optionValue);
RPCRTAPI RPC_STATUS RPC_ENTRY RpcBindingInqOption(RPC_BINDING_HANDLE hBinding, unsigned long option, ULONG_PTR *pOptionValue);
#if !defined(_KRPCENV_)
#ifdef RPC_UNICODE_SUPPORTED
RPCRTAPI RPC_STATUS RPC_ENTRY RpcBindingFromStringBindingA(RPC_CSTR StringBinding, RPC_BINDING_HANDLE __RPC_FAR *Binding);
RPCRTAPI RPC_STATUS RPC_ENTRY RpcBindingFromStringBindingW(RPC_WSTR StringBinding, RPC_BINDING_HANDLE __RPC_FAR *Binding);
#ifdef UNICODE
#define RpcBindingFromStringBinding RpcBindingFromStringBindingW
#else
#define RpcBindingFromStringBinding RpcBindingFromStringBindingA
#endif
#else
RPCRTAPI RPC_STATUS RPC_ENTRY RpcBindingFromStringBinding(RPC_CSTR StringBinding RPC_BINDING_HANDLE __RPC_FAR *Binding);
#endif
#endif
RPCRTAPI RPC_STATUS RPC_ENTRY RpcSsGetContextBinding(void *ContextHandle, RPC_BINDING_HANDLE __RPC_FAR *Binding);
RPCRTAPI RPC_STATUS RPC_ENTRY RpcBindingInqObject(RPC_BINDING_HANDLE Binding, UUID __RPC_FAR *ObjectUuid);
RPCRTAPI RPC_STATUS RPC_ENTRY RpcBindingReset(RPC_BINDING_HANDLE Binding);
RPCRTAPI RPC_STATUS RPC_ENTRY RpcBindingSetObject(RPC_BINDING_HANDLE Binding, UUID __RPC_FAR *ObjectUuid);
RPCRTAPI RPC_STATUS RPC_ENTRY RpcMgmtInqDefaultProtectLevel(unsigned long AuthnSvc, unsigned long __RPC_FAR *AuthnLevel);
#ifdef RPC_UNICODE_SUPPORTED
RPCRTAPI RPC_STATUS RPC_ENTRY RpcBindingToStringBindingA(RPC_BINDING_HANDLE Binding, RPC_CSTR __RPC_FAR *StringBinding);
RPCRTAPI RPC_STATUS RPC_ENTRY RpcBindingToStringBindingW(RPC_BINDING_HANDLE Binding, RPC_WSTR __RPC_FAR *StringBinding);
#ifdef UNICODE
#define RpcBindingToStringBinding RpcBindingToStringBindingW
#else
#define RpcBindingToStringBinding RpcBindingToStringBindingA
#endif
#else
RPCRTAPI RPC_STATUS RPC_ENTRY RpcBindingToStringBinding(RPC_BINDING_HANDLE Binding, RPC_CSTR __RPC_FAR *StringBinding);
#endif
RPCRTAPI RPC_STATUS RPC_ENTRY RpcBindingVectorFree(RPC_BINDING_VECTOR __RPC_FAR *__RPC_FAR *BindingVector);
#if !defined(_KRPCENV_)
#ifdef RPC_UNICODE_SUPPORTED
RPCRTAPI RPC_STATUS RPC_ENTRY RpcStringBindingComposeA(RPC_CSTR ObjUuid, RPC_CSTR ProtSeq, RPC_CSTR NetworkAddr, RPC_CSTR Endpoint, RPC_CSTR Options, RPC_CSTR __RPC_FAR *StringBinding);
RPCRTAPI RPC_STATUS RPC_ENTRY RpcStringBindingComposeW(RPC_WSTR ObjUuid, RPC_WSTR ProtSeq, RPC_WSTR NetworkAddr, RPC_WSTR Endpoint, RPC_WSTR Options, RPC_WSTR __RPC_FAR *StringBinding);
#ifdef UNICODE
#define RpcStringBindingCompose RpcStringBindingComposeW
#else
#define RpcStringBindingCompose RpcStringBindingComposeA
#endif
#else
RPCRTAPI RPC_STATUS RPC_ENTRY RpcStringBindingCompose(RPC_CSTR ObjUuid, RPC_CSTR ProtSeq, RPC_CSTR NetworkAddr, RPC_CSTR Endpoint, RPC_CSTR Options, RPC_CSTR __RPC_FAR *StringBinding);
#endif
#ifdef RPC_UNICODE_SUPPORTED
RPCRTAPI RPC_STATUS RPC_ENTRY RpcStringBindingParseA(RPC_CSTR StringBinding, RPC_CSTR __RPC_FAR *ObjUuid, RPC_CSTR __RPC_FAR *Protseq, RPC_CSTR __RPC_FAR *NetworkAddr, RPC_CSTR __RPC_FAR *Endpoint, RPC_CSTR __RPC_FAR *NetworkOptions);
RPCRTAPI RPC_STATUS RPC_ENTRY RpcStringBindingParseW(RPC_WSTR StringBinding, RPC_WSTR __RPC_FAR *ObjUuid, RPC_WSTR __RPC_FAR *Protseq, RPC_WSTR __RPC_FAR *NetworkAddr, RPC_WSTR __RPC_FAR *Endpoint, RPC_WSTR __RPC_FAR *NetworkOptions);
#ifdef UNICODE
#define RpcStringBindingParse RpcStringBindingParseW
#else
#define RpcStringBindingParse RpcStringBindingParseA
#endif
#else
RPCRTAPI RPC_STATUS RPC_ENTRY RpcStringBindingParse(RPC_CSTR StringBinding, RPC_CSTR __RPC_FAR *ObjUuid, RPC_CSTR __RPC_FAR *Protseq, RPC_CSTR __RPC_FAR *NetworkAddr, RPC_CSTR __RPC_FAR *Endpoint, RPC_CSTR __RPC_FAR *NetworkOptions);
#endif
#endif
#ifdef RPC_UNICODE_SUPPORTED
RPCRTAPI RPC_STATUS RPC_ENTRY RpcStringFreeA(RPC_CSTR __RPC_FAR *String);
RPCRTAPI RPC_STATUS RPC_ENTRY RpcStringFreeW(RPC_WSTR __RPC_FAR *String);
#ifdef UNICODE
#define RpcStringFree RpcStringFreeW
#else
#define RpcStringFree RpcStringFreeA
#endif
#else
RPCRTAPI RPC_STATUS RPC_ENTRY RpcStringFree(RPC_CSTR __RPC_FAR *String);
#endif
RPCRTAPI RPC_STATUS RPC_ENTRY RpcIfInqId(RPC_IF_HANDLE RpcIfHandle, RPC_IF_ID __RPC_FAR *RpcIfId);
#ifdef RPC_UNICODE_SUPPORTED
RPCRTAPI RPC_STATUS RPC_ENTRY RpcNetworkIsProtseqValidA(RPC_CSTR Protseq);
RPCRTAPI RPC_STATUS RPC_ENTRY RpcNetworkIsProtseqValidW(RPC_WSTR Protseq);
#ifdef UNICODE
#define RpcNetworkIsProtseqValid RpcNetworkIsProtseqValidW
#else
#define RpcNetworkIsProtseqValid RpcNetworkIsProtseqValidA
#endif
#else
RPCRTAPI RPC_STATUS RPC_ENTRY RpcNetworkIsProtseqValid(RPC_CSTR Protseq);
#endif
RPCRTAPI RPC_STATUS RPC_ENTRY RpcMgmtInqComTimeout(RPC_BINDING_HANDLE Binding, unsigned int __RPC_FAR *Timeout);
RPCRTAPI RPC_STATUS RPC_ENTRY RpcMgmtSetComTimeout(RPC_BINDING_HANDLE Binding, unsigned int Timeout);
RPCRTAPI RPC_STATUS RPC_ENTRY RpcMgmtSetCancelTimeout(long Timeout);
#ifdef RPC_UNICODE_SUPPORTED
RPCRTAPI RPC_STATUS RPC_ENTRY RpcNetworkInqProtseqsA(RPC_PROTSEQ_VECTORA __RPC_FAR *__RPC_FAR *ProtseqVector);
RPCRTAPI RPC_STATUS RPC_ENTRY RpcNetworkInqProtseqsW(RPC_PROTSEQ_VECTORW __RPC_FAR *__RPC_FAR *ProtseqVector);
#ifdef UNICODE
#define RpcNetworkInqProtseqs RpcNetworkInqProtseqsW
#else
#define RpcNetworkInqProtseqs RpcNetworkInqProtseqsA
#endif
#else
RPCRTAPI RPC_STATUS RPC_ENTRY RpcNetworkInqProtseqs(RPC_PROTSEQ_VECTOR __RPC_FAR *__RPC_FAR *ProtseqVector);
#endif
RPCRTAPI RPC_STATUS RPC_ENTRY RpcObjectInqType(UUID __RPC_FAR *ObjUuid, UUID __RPC_FAR *TypeUuid);
RPCRTAPI RPC_STATUS RPC_ENTRY RpcObjectSetInqFn(RPC_OBJECT_INQ_FN __RPC_FAR *InquiryFn);
RPCRTAPI RPC_STATUS RPC_ENTRY RpcObjectSetType(UUID __RPC_FAR *ObjUuid, UUID __RPC_FAR *TypeUuid);
#ifdef RPC_UNICODE_SUPPORTED
RPCRTAPI RPC_STATUS RPC_ENTRY RpcProtseqVectorFreeA(RPC_PROTSEQ_VECTORA __RPC_FAR *__RPC_FAR *ProtseqVector);
RPCRTAPI RPC_STATUS RPC_ENTRY RpcProtseqVectorFreeW(RPC_PROTSEQ_VECTORW __RPC_FAR *__RPC_FAR *ProtseqVector);
#ifdef UNICODE
#define RpcProtseqVectorFree RpcProtseqVectorFreeW
#else
#define RpcProtseqVectorFree RpcProtseqVectorFreeA
#endif
#else
RPCRTAPI RPC_STATUS RPC_ENTRY RpcProtseqVectorFree(RPC_PROTSEQ_VECTOR __RPC_FAR *__RPC_FAR *ProtseqVector);
#endif
RPCRTAPI RPC_STATUS RPC_ENTRY RpcServerInqBindings(RPC_BINDING_VECTOR __RPC_FAR *__RPC_FAR *BindingVector);
RPCRTAPI RPC_STATUS RPC_ENTRY RpcServerInqIf(RPC_IF_HANDLE IfSpec, UUID __RPC_FAR *MgrTypeUuid, RPC_MGR_EPV __RPC_FAR *__RPC_FAR *MgrEpv);
RPCRTAPI RPC_STATUS RPC_ENTRY RpcServerListen(unsigned int MinimumCallThreads, unsigned int MaxCalls, unsigned int DontWait);
RPCRTAPI RPC_STATUS RPC_ENTRY RpcServerRegisterIf(RPC_IF_HANDLE IfSpec, UUID __RPC_FAR *MgrTypeUuid, RPC_MGR_EPV __RPC_FAR *MgrEpv);
RPCRTAPI RPC_STATUS RPC_ENTRY RpcServerRegisterIfEx(RPC_IF_HANDLE IfSpec, UUID __RPC_FAR *MgrTypeUuid, RPC_MGR_EPV __RPC_FAR *MgrEpv, unsigned int Flags, unsigned int MaxCalls, RPC_IF_CALLBACK_FN __RPC_FAR *IfCallback);
RPCRTAPI RPC_STATUS RPC_ENTRY RpcServerRegisterIf2(RPC_IF_HANDLE IfSpec, UUID *MgrTypeUuid, RPC_MGR_EPV *MgrEpv, unsigned int Flags, unsigned int MaxCalls, unsigned int MaxRpcSize, RPC_IF_CALLBACK_FN *IfCallbackFn);
RPCRTAPI RPC_STATUS RPC_ENTRY RpcServerUnregisterIf(RPC_IF_HANDLE IfSpec, UUID __RPC_FAR *MgrTypeUuid, unsigned int WaitForCallsToComplete);
#if (NTDDI_VERSION >= NTDDI_WINXP)
RPCRTAPI RPC_STATUS RPC_ENTRY RpcServerUnregisterIfEx(RPC_IF_HANDLE IfSpec, UUID __RPC_FAR *MgrTypeUuid, int RundownContextHandles);
#endif
RPCRTAPI RPC_STATUS RPC_ENTRY RpcServerUseAllProtseqs(unsigned int MaxCalls, void __RPC_FAR *SecurityDescriptor);
RPCRTAPI RPC_STATUS RPC_ENTRY RpcServerUseAllProtseqsEx(unsigned int MaxCalls, void __RPC_FAR *SecurityDescriptor, PRPC_POLICY Policy);
RPCRTAPI RPC_STATUS RPC_ENTRY RpcServerUseAllProtseqsIf(unsigned int MaxCalls, RPC_IF_HANDLE IfSpec, void __RPC_FAR *SecurityDescriptor);
RPCRTAPI RPC_STATUS RPC_ENTRY RpcServerUseAllProtseqsIfEx(unsigned int MaxCalls, RPC_IF_HANDLE IfSpec, void __RPC_FAR *SecurityDescriptor, PRPC_POLICY Policy);
#ifdef RPC_UNICODE_SUPPORTED
RPCRTAPI RPC_STATUS RPC_ENTRY RpcServerUseProtseqA(RPC_CSTR Protseq, unsigned int MaxCalls, void __RPC_FAR *SecurityDescriptor);
RPCRTAPI RPC_STATUS RPC_ENTRY RpcServerUseProtseqExA(RPC_CSTR Protseq, unsigned int MaxCalls, void __RPC_FAR *SecurityDescriptor, PRPC_POLICY Policy);
RPCRTAPI RPC_STATUS RPC_ENTRY RpcServerUseProtseqW(RPC_WSTR Protseq, unsigned int MaxCalls, void __RPC_FAR *SecurityDescriptor);
RPCRTAPI RPC_STATUS RPC_ENTRY RpcServerUseProtseqExW(RPC_WSTR Protseq, unsigned int MaxCalls, void __RPC_FAR *SecurityDescriptor, PRPC_POLICY Policy);
#ifdef UNICODE
#define RpcServerUseProtseq RpcServerUseProtseqW
#define RpcServerUseProtseqEx RpcServerUseProtseqExW
#else
#define RpcServerUseProtseq RpcServerUseProtseqA
#define RpcServerUseProtseqEx RpcServerUseProtseqExA
#endif
#else
RPCRTAPI RPC_STATUS RPC_ENTRY RpcServerUseProtseq(RPC_CSTR Protseq, unsigned int MaxCalls, void __RPC_FAR *SecurityDescriptor);
RPCRTAPI RPC_STATUS RPC_ENTRY RpcServerUseProtseqEx(RPC_CSTR Protseq, unsigned int MaxCalls, void __RPC_FAR *SecurityDescriptor, PRPC_POLICY Policy);
#endif
#ifdef RPC_UNICODE_SUPPORTED
RPCRTAPI RPC_STATUS RPC_ENTRY RpcServerUseProtseqEpA(RPC_CSTR Protseq, unsigned int MaxCalls, RPC_CSTR Endpoint, void __RPC_FAR *SecurityDescriptor);
RPCRTAPI RPC_STATUS RPC_ENTRY RpcServerUseProtseqEpExA(RPC_CSTR Protseq, unsigned int MaxCalls, RPC_CSTR Endpoint, void __RPC_FAR *SecurityDescriptor, PRPC_POLICY Policy);
RPCRTAPI RPC_STATUS RPC_ENTRY RpcServerUseProtseqEpW(RPC_WSTR Protseq, unsigned int MaxCalls, RPC_WSTR Endpoint, void __RPC_FAR *SecurityDescriptor);
RPCRTAPI RPC_STATUS RPC_ENTRY RpcServerUseProtseqEpExW(RPC_WSTR Protseq, unsigned int MaxCalls, RPC_WSTR Endpoint, void __RPC_FAR *SecurityDescriptor, PRPC_POLICY Policy);
#ifdef UNICODE
#define RpcServerUseProtseqEp RpcServerUseProtseqEpW
#define RpcServerUseProtseqEpEx RpcServerUseProtseqEpExW
#else
#define RpcServerUseProtseqEp RpcServerUseProtseqEpA
#define RpcServerUseProtseqEpEx RpcServerUseProtseqEpExA
#endif
#else
RPCRTAPI RPC_STATUS RPC_ENTRY RpcServerUseProtseqEp(RPC_CSTR Protseq, unsigned int MaxCalls, RPC_CSTR Endpoint, void __RPC_FAR *SecurityDescriptor);
RPCRTAPI RPC_STATUS RPC_ENTRY RpcServerUseProtseqEpEx(RPC_WSTR Protseq, unsigned int MaxCalls, RPC_WSTR Endpoint, void __RPC_FAR *SecurityDescriptor, PRPC_POLICY Policy);
#endif
#ifdef RPC_UNICODE_SUPPORTED
RPCRTAPI RPC_STATUS RPC_ENTRY RpcServerUseProtseqIfA(RPC_CSTR Protseq, unsigned int MaxCalls, RPC_IF_HANDLE IfSpec, void __RPC_FAR *SecurityDescriptor);
RPCRTAPI RPC_STATUS RPC_ENTRY RpcServerUseProtseqIfExA(RPC_CSTR Protseq, unsigned int MaxCalls, RPC_IF_HANDLE IfSpec, void __RPC_FAR *SecurityDescriptor, PRPC_POLICY Policy);
RPCRTAPI RPC_STATUS RPC_ENTRY RpcServerUseProtseqIfW(RPC_WSTR Protseq, unsigned int MaxCalls, RPC_IF_HANDLE IfSpec, void __RPC_FAR *SecurityDescriptor);
RPCRTAPI RPC_STATUS RPC_ENTRY RpcServerUseProtseqIfExW(RPC_WSTR Protseq, unsigned int MaxCalls, RPC_IF_HANDLE IfSpec, void __RPC_FAR *SecurityDescriptor, PRPC_POLICY Policy);
#ifdef UNICODE
#define RpcServerUseProtseqIf RpcServerUseProtseqIfW
#define RpcServerUseProtseqIfEx RpcServerUseProtseqIfExW
#else
#define RpcServerUseProtseqIf RpcServerUseProtseqIfA
#define RpcServerUseProtseqIfEx RpcServerUseProtseqIfExA
#endif
#else
RPCRTAPI RPC_STATUS RPC_ENTRY RpcServerUseProtseqIf(RPC_CSTR Protseq, unsigned int MaxCalls, RPC_IF_HANDLE IfSpec, void __RPC_FAR *SecurityDescriptor);
RPCRTAPI RPC_STATUS RPC_ENTRY RpcServerUseProtseqIfEx(RPC_CSTR Protseq, unsigned int MaxCalls, RPC_IF_HANDLE IfSpec, void __RPC_FAR *SecurityDescriptor, PRPC_POLICY Policy);
#endif
RPCRTAPI void RPC_ENTRY RpcServerYield(void
	);
RPCRTAPI RPC_STATUS RPC_ENTRY RpcMgmtStatsVectorFree(RPC_STATS_VECTOR **StatsVector);
RPCRTAPI RPC_STATUS RPC_ENTRY RpcMgmtInqStats(RPC_BINDING_HANDLE Binding, RPC_STATS_VECTOR **Statistics);
RPCRTAPI RPC_STATUS RPC_ENTRY RpcMgmtIsServerListening(RPC_BINDING_HANDLE Binding);
RPCRTAPI RPC_STATUS RPC_ENTRY RpcMgmtStopServerListening(RPC_BINDING_HANDLE Binding);
RPCRTAPI RPC_STATUS RPC_ENTRY RpcMgmtWaitServerListen(void
	);
RPCRTAPI RPC_STATUS RPC_ENTRY RpcMgmtSetServerStackSize(unsigned long ThreadStackSize);
RPCRTAPI void RPC_ENTRY RpcSsDontSerializeContext(void
	);
RPCRTAPI RPC_STATUS RPC_ENTRY RpcMgmtEnableIdleCleanup(void
	);
RPCRTAPI RPC_STATUS RPC_ENTRY RpcMgmtInqIfIds(RPC_BINDING_HANDLE Binding, RPC_IF_ID_VECTOR __RPC_FAR *__RPC_FAR *IfIdVector);
RPCRTAPI RPC_STATUS RPC_ENTRY RpcIfIdVectorFree(RPC_IF_ID_VECTOR __RPC_FAR *__RPC_FAR *IfIdVector);
#ifdef RPC_UNICODE_SUPPORTED
RPCRTAPI RPC_STATUS RPC_ENTRY RpcMgmtInqServerPrincNameA(RPC_BINDING_HANDLE Binding, unsigned long AuthnSvc, RPC_CSTR __RPC_FAR *ServerPrincName);
RPCRTAPI RPC_STATUS RPC_ENTRY RpcMgmtInqServerPrincNameW(RPC_BINDING_HANDLE Binding, unsigned long AuthnSvc, RPC_WSTR __RPC_FAR *ServerPrincName);
#ifdef UNICODE
#define RpcMgmtInqServerPrincName RpcMgmtInqServerPrincNameW
#else
#define RpcMgmtInqServerPrincName RpcMgmtInqServerPrincNameA
#endif
#else
RPCRTAPI RPC_STATUS RPC_ENTRY RpcMgmtInqServerPrincName(RPC_BINDING_HANDLE Binding, unsigned long AuthnSvc, RPC_WSTR __RPC_FAR *ServerPrincName);
#endif
#ifdef RPC_UNICODE_SUPPORTED
RPCRTAPI RPC_STATUS RPC_ENTRY RpcServerInqDefaultPrincNameA(unsigned long AuthnSvc, RPC_CSTR __RPC_FAR *PrincName);
RPCRTAPI RPC_STATUS RPC_ENTRY RpcServerInqDefaultPrincNameW(unsigned long AuthnSvc, RPC_WSTR __RPC_FAR *PrincName);
#ifdef UNICODE
#define RpcServerInqDefaultPrincName RpcServerInqDefaultPrincNameW
#else
#define RpcServerInqDefaultPrincName RpcServerInqDefaultPrincNameA
#endif
#else
RPCRTAPI RPC_STATUS RPC_ENTRY RpcServerInqDefaultPrincName(unsigned long AuthnSvc, RPC_WSTR __RPC_FAR *PrincName);
#endif
RPCRTAPI RPC_STATUS RPC_ENTRY RpcEpResolveBinding(RPC_BINDING_HANDLE Binding, RPC_IF_HANDLE IfSpec);
#ifdef RPC_UNICODE_SUPPORTED
RPCRTAPI RPC_STATUS RPC_ENTRY RpcNsBindingInqEntryNameA(RPC_BINDING_HANDLE Binding, unsigned long EntryNameSyntax, RPC_CSTR __RPC_FAR *EntryName);
RPCRTAPI RPC_STATUS RPC_ENTRY RpcNsBindingInqEntryNameW(RPC_BINDING_HANDLE Binding, unsigned long EntryNameSyntax, RPC_WSTR __RPC_FAR *EntryName);
#ifdef UNICODE
#define RpcNsBindingInqEntryName RpcNsBindingInqEntryNameW
#else
#define RpcNsBindingInqEntryName RpcNsBindingInqEntryNameA
#endif
#else
RPCRTAPI RPC_STATUS RPC_ENTRY RpcNsBindingInqEntryName(RPC_BINDING_HANDLE Binding, unsigned long EntryNameSyntax, RPC_CSTR __RPC_FAR *EntryName);
#endif
typedef void __RPC_FAR *RPC_AUTH_IDENTITY_HANDLE;
typedef void __RPC_FAR *RPC_AUTHZ_HANDLE;
#define RPC_C_AUTHN_LEVEL_DEFAULT       0
#define RPC_C_AUTHN_LEVEL_NONE          1
#define RPC_C_AUTHN_LEVEL_CONNECT       2
#define RPC_C_AUTHN_LEVEL_CALL          3
#define RPC_C_AUTHN_LEVEL_PKT           4
#define RPC_C_AUTHN_LEVEL_PKT_INTEGRITY 5
#define RPC_C_AUTHN_LEVEL_PKT_PRIVACY   6
#define RPC_C_IMP_LEVEL_DEFAULT      0
#define RPC_C_IMP_LEVEL_ANONYMOUS    1
#define RPC_C_IMP_LEVEL_IDENTIFY     2
#define RPC_C_IMP_LEVEL_IMPERSONATE  3
#define RPC_C_IMP_LEVEL_DELEGATE     4
#define RPC_C_QOS_IDENTITY_STATIC    0
#define RPC_C_QOS_IDENTITY_DYNAMIC   1
#define RPC_C_QOS_CAPABILITIES_DEFAULT                        0x0
#define RPC_C_QOS_CAPABILITIES_MUTUAL_AUTH                    0x1
#define RPC_C_QOS_CAPABILITIES_MAKE_FULLSIC                   0x2
#define RPC_C_QOS_CAPABILITIES_ANY_AUTHORITY                  0x4
#if (NTDDI_VERSION >= NTDDI_WS03)
#define RPC_C_QOS_CAPABILITIES_IGNORE_DELEGATE_FAILURE        0x8
#define RPC_C_QOS_CAPABILITIES_LOCAL_MA_HINT                 0x10
#endif
#if (NTDDI_VERSION >= NTDDI_VISTA)
#define RPC_C_QOS_CAPABILITIES_SCHANNEL_FULL_AUTH_IDENTITY   0x20
#endif
#define RPC_C_PROTECT_LEVEL_DEFAULT       (RPC_C_AUTHN_LEVEL_DEFAULT)
#define RPC_C_PROTECT_LEVEL_NONE          (RPC_C_AUTHN_LEVEL_NONE)
#define RPC_C_PROTECT_LEVEL_CONNECT       (RPC_C_AUTHN_LEVEL_CONNECT)
#define RPC_C_PROTECT_LEVEL_CALL          (RPC_C_AUTHN_LEVEL_CALL)
#define RPC_C_PROTECT_LEVEL_PKT           (RPC_C_AUTHN_LEVEL_PKT)
#define RPC_C_PROTECT_LEVEL_PKT_INTEGRITY (RPC_C_AUTHN_LEVEL_PKT_INTEGRITY)
#define RPC_C_PROTECT_LEVEL_PKT_PRIVACY   (RPC_C_AUTHN_LEVEL_PKT_PRIVACY)
#define RPC_C_AUTHN_NONE          0
#define RPC_C_AUTHN_DCE_PRIVATE   1
#define RPC_C_AUTHN_DCE_PUBLIC    2
#define RPC_C_AUTHN_DEC_PUBLIC    4
#define RPC_C_AUTHN_GSS_NEGOTIATE 9
#define RPC_C_AUTHN_WINNT        10
#define RPC_C_AUTHN_GSS_SCHANNEL 14
#define RPC_C_AUTHN_GSS_KERBEROS 16
#define RPC_C_AUTHN_DPA          17
#define RPC_C_AUTHN_MSN          18
#if (NTDDI_VERSION >= WINXP)
#define RPC_C_AUTHN_DIGEST       21
#endif
#if (NTDDI_VERSION >= NTDDI_WIN7)
#define RPC_C_AUTHN_KERNEL         20
#endif
#define RPC_C_AUTHN_NEGO_EXTENDER 30
#define RPC_C_AUTHN_PKU2U         31
#define RPC_C_AUTHN_MQ          100
#define RPC_C_AUTHN_DEFAULT     0xFFFFFFFFL
#define RPC_C_NO_CREDENTIALS ((RPC_AUTH_IDENTITY_HANDLE) MAXUINT_PTR)
#define RPC_C_SECURITY_QOS_VERSION      1L
#define RPC_C_SECURITY_QOS_VERSION_1    1L
typedef struct _RPC_SECURITY_QOS {
	unsigned long Version;
	unsigned long Capabilities;
	unsigned long IdentityTracking;
	unsigned long ImpersonationType;
} RPC_SECURITY_QOS, *PRPC_SECURITY_QOS;
#ifndef _AUTH_IDENTITY_DEFINED
#define _AUTH_IDENTITY_DEFINED
#define SEC_WINNT_AUTH_IDENTITY_ANSI    0x1
#define SEC_WINNT_AUTH_IDENTITY_UNICODE 0x2
typedef struct _SEC_WINNT_AUTH_IDENTITY_W {
	unsigned short __RPC_FAR *User;
	unsigned long UserLength;
	unsigned short __RPC_FAR *Domain;
	unsigned long DomainLength;
	unsigned short __RPC_FAR *Password;
	unsigned long PasswordLength;
	unsigned long Flags;
} SEC_WINNT_AUTH_IDENTITY_W, *PSEC_WINNT_AUTH_IDENTITY_W;
#if (NTDDI_VERSION >= NTDDI_VISTA)
#define _AUTH_IDENTITY_A_DEFINED
#endif
typedef struct _SEC_WINNT_AUTH_IDENTITY_A {
	unsigned char __RPC_FAR *User;
	unsigned long UserLength;
	unsigned char __RPC_FAR *Domain;
	unsigned long DomainLength;
	unsigned char __RPC_FAR *Password;
	unsigned long PasswordLength;
	unsigned long Flags;
} SEC_WINNT_AUTH_IDENTITY_A, *PSEC_WINNT_AUTH_IDENTITY_A;
#ifdef UNICODE
#define SEC_WINNT_AUTH_IDENTITY SEC_WINNT_AUTH_IDENTITY_W
#define PSEC_WINNT_AUTH_IDENTITY PSEC_WINNT_AUTH_IDENTITY_W
#define _SEC_WINNT_AUTH_IDENTITY _SEC_WINNT_AUTH_IDENTITY_W
#else
#define SEC_WINNT_AUTH_IDENTITY SEC_WINNT_AUTH_IDENTITY_A
#define PSEC_WINNT_AUTH_IDENTITY PSEC_WINNT_AUTH_IDENTITY_A
#define _SEC_WINNT_AUTH_IDENTITY _SEC_WINNT_AUTH_IDENTITY_A
#endif
#if (NTDDI_VERSION >= NTDDI_WINXP)
#define RPC_C_SECURITY_QOS_VERSION_2 2L
#define RPC_C_AUTHN_INFO_TYPE_HTTP                  1
#define RPC_C_HTTP_AUTHN_TARGET_SERVER              1
#if (NTDDI_VERSION >= NTDDI_VISTA)
#define RPC_C_HTTP_AUTHN_TARGET_PROXY               2
#endif
#define RPC_C_HTTP_AUTHN_SCHEME_BASIC      0x00000001
#define RPC_C_HTTP_AUTHN_SCHEME_NTLM       0x00000002
#define RPC_C_HTTP_AUTHN_SCHEME_PASSPORT   0x00000004
#define RPC_C_HTTP_AUTHN_SCHEME_DIGEST     0x00000008
#define RPC_C_HTTP_AUTHN_SCHEME_NEGOTIATE  0x00000010
#if (NTDDI_VERSION >= NTDDI_WS03)
#define RPC_C_HTTP_AUTHN_SCHEME_CERT       0x00010000
#endif
#define RPC_C_HTTP_FLAG_USE_SSL                     1
#define RPC_C_HTTP_FLAG_USE_FIRST_AUTH_SCHEME       2
#if (NTDDI_VERSION >= NTDDI_WS03)
#define RPC_C_HTTP_FLAG_IGNORE_CERT_CN_INVALID      8
#endif
#if (NTDDI_VERSION >= NTDDI_VISTASP1)
#define RPC_C_HTTP_FLAG_ENABLE_CERT_REVOCATION_CHECK 16
#endif
typedef struct _RPC_HTTP_TRANSPORT_CREDENTIALS_W {
	SEC_WINNT_AUTH_IDENTITY_W *TransportCredentials;
	unsigned long Flags;
	unsigned long AuthenticationTarget;
	unsigned long NumberOfAuthnSchemes;
	unsigned long *AuthnSchemes;
	unsigned short __RPC_FAR *ServerCertificateSubject;
} RPC_HTTP_TRANSPORT_CREDENTIALS_W, *PRPC_HTTP_TRANSPORT_CREDENTIALS_W;
typedef struct _RPC_HTTP_TRANSPORT_CREDENTIALS_A {
	SEC_WINNT_AUTH_IDENTITY_A *TransportCredentials;
	unsigned long Flags;
	unsigned long AuthenticationTarget;
	unsigned long NumberOfAuthnSchemes;
	unsigned long *AuthnSchemes;
	unsigned char __RPC_FAR *ServerCertificateSubject;
} RPC_HTTP_TRANSPORT_CREDENTIALS_A, *PRPC_HTTP_TRANSPORT_CREDENTIALS_A;
#if (NTDDI_VERSION >= NTDDI_VISTA)
typedef struct _RPC_HTTP_TRANSPORT_CREDENTIALS_V2_W {
	SEC_WINNT_AUTH_IDENTITY_W *TransportCredentials;
	unsigned long Flags;
	unsigned long AuthenticationTarget;
	unsigned long NumberOfAuthnSchemes;
	unsigned long *AuthnSchemes;
	unsigned short __RPC_FAR *ServerCertificateSubject;
	SEC_WINNT_AUTH_IDENTITY_W *ProxyCredentials;
	unsigned long NumberOfProxyAuthnSchemes;
	unsigned long *ProxyAuthnSchemes;
} RPC_HTTP_TRANSPORT_CREDENTIALS_V2_W, *PRPC_HTTP_TRANSPORT_CREDENTIALS_V2_W;
typedef struct _RPC_HTTP_TRANSPORT_CREDENTIALS_V2_A {
	SEC_WINNT_AUTH_IDENTITY_A *TransportCredentials;
	unsigned long Flags;
	unsigned long AuthenticationTarget;
	unsigned long NumberOfAuthnSchemes;
	unsigned long *AuthnSchemes;
	unsigned char __RPC_FAR *ServerCertificateSubject;
	SEC_WINNT_AUTH_IDENTITY_A *ProxyCredentials;
	unsigned long NumberOfProxyAuthnSchemes;
	unsigned long *ProxyAuthnSchemes;
} RPC_HTTP_TRANSPORT_CREDENTIALS_V2_A, *PRPC_HTTP_TRANSPORT_CREDENTIALS_V2_A;
#endif
#if (NTDDI_VERSION >= NTDDI_WIN7)
typedef struct _RPC_HTTP_TRANSPORT_CREDENTIALS_V3_W {
	RPC_AUTH_IDENTITY_HANDLE TransportCredentials;
	unsigned long Flags;
	unsigned long AuthenticationTarget;
	unsigned long NumberOfAuthnSchemes;
	unsigned long *AuthnSchemes;
	unsigned short __RPC_FAR *ServerCertificateSubject;
	RPC_AUTH_IDENTITY_HANDLE ProxyCredentials;
	unsigned long NumberOfProxyAuthnSchemes;
	unsigned long *ProxyAuthnSchemes;
} RPC_HTTP_TRANSPORT_CREDENTIALS_V3_W, *PRPC_HTTP_TRANSPORT_CREDENTIALS_V3_W;
typedef struct _RPC_HTTP_TRANSPORT_CREDENTIALS_V3_A {
	RPC_AUTH_IDENTITY_HANDLE TransportCredentials;
	unsigned long Flags;
	unsigned long AuthenticationTarget;
	unsigned long NumberOfAuthnSchemes;
	unsigned long *AuthnSchemes;
	unsigned char __RPC_FAR *ServerCertificateSubject;
	RPC_AUTH_IDENTITY_HANDLE ProxyCredentials;
	unsigned long NumberOfProxyAuthnSchemes;
	unsigned long *ProxyAuthnSchemes;
} RPC_HTTP_TRANSPORT_CREDENTIALS_V3_A, *PRPC_HTTP_TRANSPORT_CREDENTIALS_V3_A;
#endif
typedef struct _RPC_SECURITY_QOS_V2_W {
	unsigned long Version;
	unsigned long Capabilities;
	unsigned long IdentityTracking;
	unsigned long ImpersonationType;
	unsigned long AdditionalSecurityInfoType;
	union {
		RPC_HTTP_TRANSPORT_CREDENTIALS_W *HttpCredentials;
	} u;
} RPC_SECURITY_QOS_V2_W, *PRPC_SECURITY_QOS_V2_W;
typedef struct _RPC_SECURITY_QOS_V2_A {
	unsigned long Version;
	unsigned long Capabilities;
	unsigned long IdentityTracking;
	unsigned long ImpersonationType;
	unsigned long AdditionalSecurityInfoType;
	union {
		RPC_HTTP_TRANSPORT_CREDENTIALS_A *HttpCredentials;
	} u;
} RPC_SECURITY_QOS_V2_A, *PRPC_SECURITY_QOS_V2_A;
#if (NTDDI_VERSION >= NTDDI_WS03)
#define RPC_C_SECURITY_QOS_VERSION_3 3L
typedef struct _RPC_SECURITY_QOS_V3_W {
	unsigned long Version;
	unsigned long Capabilities;
	unsigned long IdentityTracking;
	unsigned long ImpersonationType;
	unsigned long AdditionalSecurityInfoType;
	union {
		RPC_HTTP_TRANSPORT_CREDENTIALS_W *HttpCredentials;
	} u;
	void *Sid;
} RPC_SECURITY_QOS_V3_W, *PRPC_SECURITY_QOS_V3_W;
typedef struct _RPC_SECURITY_QOS_V3_A {
	unsigned long Version;
	unsigned long Capabilities;
	unsigned long IdentityTracking;
	unsigned long ImpersonationType;
	unsigned long AdditionalSecurityInfoType;
	union {
		RPC_HTTP_TRANSPORT_CREDENTIALS_A *HttpCredentials;
	} u;
	void *Sid;
} RPC_SECURITY_QOS_V3_A, *PRPC_SECURITY_QOS_V3_A;
#endif
#if (NTDDI_VERSION >= NTDDI_VISTA)
#define RPC_C_SECURITY_QOS_VERSION_4 4L
typedef struct _RPC_SECURITY_QOS_V4_W {
	unsigned long Version;
	unsigned long Capabilities;
	unsigned long IdentityTracking;
	unsigned long ImpersonationType;
	unsigned long AdditionalSecurityInfoType;
	union {
		RPC_HTTP_TRANSPORT_CREDENTIALS_W *HttpCredentials;
	} u;
	void *Sid;
	unsigned int EffectiveOnly;
} RPC_SECURITY_QOS_V4_W, *PRPC_SECURITY_QOS_V4_W;
typedef struct _RPC_SECURITY_QOS_V4_A {
	unsigned long Version;
	unsigned long Capabilities;
	unsigned long IdentityTracking;
	unsigned long ImpersonationType;
	unsigned long AdditionalSecurityInfoType;
	union {
		RPC_HTTP_TRANSPORT_CREDENTIALS_A *HttpCredentials;
	} u;
	void *Sid;
	unsigned int EffectiveOnly;
} RPC_SECURITY_QOS_V4_A, *PRPC_SECURITY_QOS_V4_A;
#endif
#endif
#endif
#if (NTDDI_VERSION >= WINXP)
#ifdef UNICODE
#define RPC_SECURITY_QOS_V2 RPC_SECURITY_QOS_V2_W
#define PRPC_SECURITY_QOS_V2 PRPC_SECURITY_QOS_V2_W
#define _RPC_SECURITY_QOS_V2 _RPC_SECURITY_QOS_V2_W
#define RPC_HTTP_TRANSPORT_CREDENTIALS RPC_HTTP_TRANSPORT_CREDENTIALS_W
#define PRPC_HTTP_TRANSPORT_CREDENTIALS PRPC_HTTP_TRANSPORT_CREDENTIALS_W
#define _RPC_HTTP_TRANSPORT_CREDENTIALS _RPC_HTTP_TRANSPORT_CREDENTIALS_W
#if (NTDDI_VERSION >= NTDDI_VISTA)
#define RPC_HTTP_TRANSPORT_CREDENTIALS_V2 RPC_HTTP_TRANSPORT_CREDENTIALS_V2_W
#define PRPC_HTTP_TRANSPORT_CREDENTIALS_V2 PRPC_HTTP_TRANSPORT_CREDENTIALS_V2_W
#define _RPC_HTTP_TRANSPORT_CREDENTIALS_V2 _RPC_HTTP_TRANSPORT_CREDENTIALS_V2_W
#endif
#if (NTDDI_VERSION >= NTDDI_WIN7)
#define RPC_HTTP_TRANSPORT_CREDENTIALS_V3 RPC_HTTP_TRANSPORT_CREDENTIALS_V3_W
#define PRPC_HTTP_TRANSPORT_CREDENTIALS_V3 PRPC_HTTP_TRANSPORT_CREDENTIALS_V3_W
#define _RPC_HTTP_TRANSPORT_CREDENTIALS_V3 _RPC_HTTP_TRANSPORT_CREDENTIALS_V3_W
#endif
#if (NTDDI_VERSION >= NTDDI_WS03)
#define RPC_SECURITY_QOS_V3 RPC_SECURITY_QOS_V3_W
#define PRPC_SECURITY_QOS_V3 PRPC_SECURITY_QOS_V3_W
#define _RPC_SECURITY_QOS_V3 _RPC_SECURITY_QOS_V3_W
#endif
#if (NTDDI_VERSION >= NTDDI_VISTA)
#define RPC_SECURITY_QOS_V4 RPC_SECURITY_QOS_V4_W
#define PRPC_SECURITY_QOS_V4 PRPC_SECURITY_QOS_V4_W
#define _RPC_SECURITY_QOS_V4 _RPC_SECURITY_QOS_V4_W
#endif
#else
#define RPC_SECURITY_QOS_V2 RPC_SECURITY_QOS_V2_A
#define PRPC_SECURITY_QOS_V2 PRPC_SECURITY_QOS_V2_A
#define _RPC_SECURITY_QOS_V2 _RPC_SECURITY_QOS_V2_A
#define RPC_HTTP_TRANSPORT_CREDENTIALS RPC_HTTP_TRANSPORT_CREDENTIALS_A
#define PRPC_HTTP_TRANSPORT_CREDENTIALS PRPC_HTTP_TRANSPORT_CREDENTIALS_A
#define _RPC_HTTP_TRANSPORT_CREDENTIALS _RPC_HTTP_TRANSPORT_CREDENTIALS_A
#if (NTDDI_VERSION >= NTDDI_VISTA)
#define RPC_HTTP_TRANSPORT_CREDENTIALS_V2 RPC_HTTP_TRANSPORT_CREDENTIALS_V2_A
#define PRPC_HTTP_TRANSPORT_CREDENTIALS_V2 PRPC_HTTP_TRANSPORT_CREDENTIALS_V2_A
#define _RPC_HTTP_TRANSPORT_CREDENTIALS_V2 _RPC_HTTP_TRANSPORT_CREDENTIALS_V2_A
#endif
#if (NTDDI_VERSION >= NTDDI_WIN7)
#define RPC_HTTP_TRANSPORT_CREDENTIALS_V3 RPC_HTTP_TRANSPORT_CREDENTIALS_V3_A
#define PRPC_HTTP_TRANSPORT_CREDENTIALS_V3 PRPC_HTTP_TRANSPORT_CREDENTIALS_V3_A
#define _RPC_HTTP_TRANSPORT_CREDENTIALS_V3 _RPC_HTTP_TRANSPORT_CREDENTIALS_V3_A
#endif
#if (NTDDI_VERSION >= NTDDI_WS03)
#define RPC_SECURITY_QOS_V3 RPC_SECURITY_QOS_V3_A
#define PRPC_SECURITY_QOS_V3 PRPC_SECURITY_QOS_V3_A
#define _RPC_SECURITY_QOS_V3 _RPC_SECURITY_QOS_V3_A
#endif
#if (NTDDI_VERSION >= NTDDI_VISTA)
#define RPC_SECURITY_QOS_V4 RPC_SECURITY_QOS_V4_A
#define PRPC_SECURITY_QOS_V4 PRPC_SECURITY_QOS_V4_A
#define _RPC_SECURITY_QOS_V4 _RPC_SECURITY_QOS_V4_A
#endif
#endif
#if (NTDDI_VERSION >= NTDDI_VISTA)
#define RPC_PROTSEQ_TCP                             (0x1)
#define RPC_PROTSEQ_NMP                             (0x2)
#define RPC_PROTSEQ_LRPC                            (0x3)
#define RPC_PROTSEQ_HTTP                            (0x4)
#define RPC_BHT_OBJECT_UUID_VALID                   (0x1)
#define RPC_BHO_NONCAUSAL                           (0x1)
#define RPC_BHO_DONTLINGER                          (0x2)
#define RPC_BHO_EXCLUSIVE_AND_GUARANTEED            (0x4)
typedef struct _RPC_BINDING_HANDLE_TEMPLATE_V1_W {
	unsigned long Version;
	unsigned long Flags;
	unsigned long ProtocolSequence;
	unsigned short *NetworkAddress;
	unsigned short *StringEndpoint;
	union {
		unsigned short *Reserved;
	} u1;
	UUID ObjectUuid;
} RPC_BINDING_HANDLE_TEMPLATE_V1_W, *PRPC_BINDING_HANDLE_TEMPLATE_V1_W;
typedef struct _RPC_BINDING_HANDLE_TEMPLATE_V1_A {
	unsigned long Version;
	unsigned long Flags;
	unsigned long ProtocolSequence;
	unsigned char *NetworkAddress;
	unsigned char *StringEndpoint;
	union {
		unsigned char *Reserved;
	} u1;
	UUID ObjectUuid;
} RPC_BINDING_HANDLE_TEMPLATE_V1_A, *PRPC_BINDING_HANDLE_TEMPLATE_V1_A;
typedef struct _RPC_BINDING_HANDLE_SECURITY_V1_W {
	unsigned long Version;
	unsigned short *ServerPrincName;
	unsigned long AuthnLevel;
	unsigned long AuthnSvc;
	SEC_WINNT_AUTH_IDENTITY_W *AuthIdentity;
	RPC_SECURITY_QOS *SecurityQos;
} RPC_BINDING_HANDLE_SECURITY_V1_W, *PRPC_BINDING_HANDLE_SECURITY_V1_W;
#ifdef _AUTH_IDENTITY_A_DEFINED
typedef struct _RPC_BINDING_HANDLE_SECURITY_V1_A {
	unsigned long Version;
	unsigned char *ServerPrincName;
	unsigned long AuthnLevel;
	unsigned long AuthnSvc;
	SEC_WINNT_AUTH_IDENTITY_A *AuthIdentity;
	RPC_SECURITY_QOS *SecurityQos;
} RPC_BINDING_HANDLE_SECURITY_V1_A, *PRPC_BINDING_HANDLE_SECURITY_V1_A;
#endif
typedef struct _RPC_BINDING_HANDLE_OPTIONS_V1 {
	unsigned long Version;
	unsigned long Flags;
	unsigned long ComTimeout;
	unsigned long CallTimeout;
} RPC_BINDING_HANDLE_OPTIONS_V1, *PRPC_BINDING_HANDLE_OPTIONS_V1;
#ifdef UNICODE
#define RPC_BINDING_HANDLE_TEMPLATE_V1 RPC_BINDING_HANDLE_TEMPLATE_V1_W
#define PRPC_BINDING_HANDLE_TEMPLATE_V1 PRPC_BINDING_HANDLE_TEMPLATE_V1_W
#define _RPC_BINDING_HANDLE_TEMPLATE_V1 _RPC_BINDING_HANDLE_TEMPLATE_V1_W
#define RPC_BINDING_HANDLE_SECURITY_V1 RPC_BINDING_HANDLE_SECURITY_V1_W
#define PRPC_BINDING_HANDLE_SECURITY_V1 PRPC_BINDING_HANDLE_SECURITY_V1_W
#define _RPC_BINDING_HANDLE_SECURITY_V1 _RPC_BINDING_HANDLE_SECURITY_V1_W
#else
#define RPC_BINDING_HANDLE_TEMPLATE_V1 RPC_BINDING_HANDLE_TEMPLATE_V1_A
#define PRPC_BINDING_HANDLE_TEMPLATE_V1 PRPC_BINDING_HANDLE_TEMPLATE_V1_A
#define _RPC_BINDING_HANDLE_TEMPLATE_V1 _RPC_BINDING_HANDLE_TEMPLATE_V1_A
#define RPC_BINDING_HANDLE_SECURITY_V1 RPC_BINDING_HANDLE_SECURITY_V1_A
#define PRPC_BINDING_HANDLE_SECURITY_V1 PRPC_BINDING_HANDLE_SECURITY_V1_A
#define _RPC_BINDING_HANDLE_SECURITY_V1 _RPC_BINDING_HANDLE_SECURITY_V1_A
#endif
#ifdef _AUTH_IDENTITY_A_DEFINED
RPCRTAPI RPC_STATUS RPC_ENTRY RpcBindingCreateA(RPC_BINDING_HANDLE_TEMPLATE_V1_A *Template, RPC_BINDING_HANDLE_SECURITY_V1_A *Security, RPC_BINDING_HANDLE_OPTIONS_V1 *Options, RPC_BINDING_HANDLE *Binding);
#endif
RPCRTAPI RPC_STATUS RPC_ENTRY RpcBindingCreateW(RPC_BINDING_HANDLE_TEMPLATE_V1_W *Template, RPC_BINDING_HANDLE_SECURITY_V1_W *Security, RPC_BINDING_HANDLE_OPTIONS_V1 *Options, RPC_BINDING_HANDLE *Binding);
#ifdef UNICODE
#define RpcBindingCreate RpcBindingCreateW
#else
#define RpcBindingCreate RpcBindingCreateA
#endif
RPCRTAPI RPC_STATUS RPC_ENTRY RpcBindingGetTrainingContextHandle(RPC_BINDING_HANDLE Binding, void **ContextHandle);
RPCRTAPI RPC_STATUS RPC_ENTRY RpcServerInqBindingHandle(RPC_BINDING_HANDLE *Binding);
#endif
#if (NTDDI_VERSION >= NTDDI_WS03)
typedef enum _RPC_HTTP_REDIRECTOR_STAGE {
	RPCHTTP_RS_REDIRECT = 1,
	RPCHTTP_RS_ACCESS_1,
	RPCHTTP_RS_SESSION,
	RPCHTTP_RS_ACCESS_2,
	RPCHTTP_RS_INTERFACE
} RPC_HTTP_REDIRECTOR_STAGE;
#endif
#if (NTDDI_VERSION >= NTDDI_WS03)
typedef RPC_STATUS(__RPC_USER *RPC_NEW_HTTP_PROXY_CHANNEL) (RPC_HTTP_REDIRECTOR_STAGE RedirectorStage, RPC_WSTR ServerName, RPC_WSTR ServerPort, RPC_WSTR RemoteUser, RPC_WSTR AuthType, void __RPC_FAR *ResourceUuid, void __RPC_FAR *SessionId, void __RPC_FAR *Interface, void __RPC_FAR *Reserved, unsigned long Flags, RPC_WSTR __RPC_FAR *NewServerName, RPC_WSTR __RPC_FAR *NewServerPort);

#else
typedef RPC_STATUS(__RPC_USER *RPC_NEW_HTTP_PROXY_CHANNEL) (unsigned short __RPC_FAR *ServerName, unsigned short __RPC_FAR *ServerPort, unsigned char __RPC_FAR *RemoteUser, unsigned short __RPC_FAR **NewServerName);
#endif
typedef void
     (__RPC_USER *RPC_HTTP_PROXY_FREE_STRING) (RPC_WSTR String);
#endif
#define RPC_C_AUTHZ_NONE    0
#define RPC_C_AUTHZ_NAME    1
#define RPC_C_AUTHZ_DCE     2
#define RPC_C_AUTHZ_DEFAULT 0xffffffff
RPCRTAPI RPC_STATUS RPC_ENTRY RpcImpersonateClient(RPC_BINDING_HANDLE BindingHandle);
RPCRTAPI RPC_STATUS RPC_ENTRY RpcRevertToSelfEx(RPC_BINDING_HANDLE BindingHandle);
RPCRTAPI RPC_STATUS RPC_ENTRY RpcRevertToSelf(void
	);
#ifdef RPC_UNICODE_SUPPORTED
RPCRTAPI RPC_STATUS RPC_ENTRY RpcBindingInqAuthClientA(RPC_BINDING_HANDLE ClientBinding, RPC_AUTHZ_HANDLE __RPC_FAR *Privs, RPC_CSTR __RPC_FAR *ServerPrincName, unsigned long __RPC_FAR *AuthnLevel, unsigned long __RPC_FAR *AuthnSvc, unsigned long __RPC_FAR *AuthzSvc);
RPCRTAPI RPC_STATUS RPC_ENTRY RpcBindingInqAuthClientW(RPC_BINDING_HANDLE ClientBinding, RPC_AUTHZ_HANDLE __RPC_FAR *Privs, RPC_WSTR __RPC_FAR *ServerPrincName, unsigned long __RPC_FAR *AuthnLevel, unsigned long __RPC_FAR *AuthnSvc, unsigned long __RPC_FAR *AuthzSvc);
RPCRTAPI RPC_STATUS RPC_ENTRY RpcBindingInqAuthClientExA(RPC_BINDING_HANDLE ClientBinding, RPC_AUTHZ_HANDLE __RPC_FAR *Privs, RPC_CSTR __RPC_FAR *ServerPrincName, unsigned long __RPC_FAR *AuthnLevel, unsigned long __RPC_FAR *AuthnSvc, unsigned long __RPC_FAR *AuthzSvc, unsigned long Flags);
RPCRTAPI RPC_STATUS RPC_ENTRY RpcBindingInqAuthClientExW(RPC_BINDING_HANDLE ClientBinding, RPC_AUTHZ_HANDLE __RPC_FAR *Privs, RPC_WSTR __RPC_FAR *ServerPrincName, unsigned long __RPC_FAR *AuthnLevel, unsigned long __RPC_FAR *AuthnSvc, unsigned long __RPC_FAR *AuthzSvc, unsigned long Flags);
RPCRTAPI RPC_STATUS RPC_ENTRY RpcBindingInqAuthInfoA(RPC_BINDING_HANDLE Binding, RPC_CSTR __RPC_FAR *ServerPrincName, unsigned long __RPC_FAR *AuthnLevel, unsigned long __RPC_FAR *AuthnSvc, RPC_AUTH_IDENTITY_HANDLE __RPC_FAR *AuthIdentity, unsigned long __RPC_FAR *AuthzSvc);
RPCRTAPI RPC_STATUS RPC_ENTRY RpcBindingInqAuthInfoW(RPC_BINDING_HANDLE Binding, RPC_WSTR __RPC_FAR *ServerPrincName, unsigned long __RPC_FAR *AuthnLevel, unsigned long __RPC_FAR *AuthnSvc, RPC_AUTH_IDENTITY_HANDLE __RPC_FAR *AuthIdentity, unsigned long __RPC_FAR *AuthzSvc);
RPCRTAPI RPC_STATUS RPC_ENTRY RpcBindingSetAuthInfoA(RPC_BINDING_HANDLE Binding, RPC_CSTR ServerPrincName, unsigned long AuthnLevel, unsigned long AuthnSvc, RPC_AUTH_IDENTITY_HANDLE AuthIdentity, unsigned long AuthzSvc);
RPCRTAPI RPC_STATUS RPC_ENTRY RpcBindingSetAuthInfoExA(RPC_BINDING_HANDLE Binding, RPC_CSTR ServerPrincName, unsigned long AuthnLevel, unsigned long AuthnSvc, RPC_AUTH_IDENTITY_HANDLE AuthIdentity, unsigned long AuthzSvc, RPC_SECURITY_QOS *SecurityQos);
RPCRTAPI RPC_STATUS RPC_ENTRY RpcBindingSetAuthInfoW(RPC_BINDING_HANDLE Binding, RPC_WSTR ServerPrincName, unsigned long AuthnLevel, unsigned long AuthnSvc, RPC_AUTH_IDENTITY_HANDLE AuthIdentity, unsigned long AuthzSvc);
RPCRTAPI RPC_STATUS RPC_ENTRY RpcBindingSetAuthInfoExW(RPC_BINDING_HANDLE Binding, RPC_WSTR ServerPrincName, unsigned long AuthnLevel, unsigned long AuthnSvc, RPC_AUTH_IDENTITY_HANDLE AuthIdentity, unsigned long AuthzSvc, RPC_SECURITY_QOS *SecurityQOS);
RPCRTAPI RPC_STATUS RPC_ENTRY RpcBindingInqAuthInfoExA(RPC_BINDING_HANDLE Binding, RPC_CSTR __RPC_FAR *ServerPrincName, unsigned long __RPC_FAR *AuthnLevel, unsigned long __RPC_FAR *AuthnSvc, RPC_AUTH_IDENTITY_HANDLE __RPC_FAR *AuthIdentity, unsigned long __RPC_FAR *AuthzSvc, unsigned long RpcQosVersion, RPC_SECURITY_QOS *SecurityQOS);
RPCRTAPI RPC_STATUS RPC_ENTRY RpcBindingInqAuthInfoExW(RPC_BINDING_HANDLE Binding, RPC_WSTR __RPC_FAR *ServerPrincName, unsigned long __RPC_FAR *AuthnLevel, unsigned long __RPC_FAR *AuthnSvc, RPC_AUTH_IDENTITY_HANDLE __RPC_FAR *AuthIdentity, unsigned long __RPC_FAR *AuthzSvc, unsigned long RpcQosVersion, RPC_SECURITY_QOS *SecurityQOS);
typedef void
     (__RPC_USER *RPC_AUTH_KEY_RETRIEVAL_FN) (void __RPC_FAR *Arg, RPC_WSTR ServerPrincName, unsigned long KeyVer, void __RPC_FAR *__RPC_FAR *Key, RPC_STATUS __RPC_FAR *Status);
RPCRTAPI RPC_STATUS RPC_ENTRY RpcServerCompleteSecurityCallback(RPC_BINDING_HANDLE BindingHandle, RPC_STATUS Status);
RPCRTAPI RPC_STATUS RPC_ENTRY RpcServerRegisterAuthInfoA(RPC_CSTR ServerPrincName, unsigned long AuthnSvc, RPC_AUTH_KEY_RETRIEVAL_FN GetKeyFn, void __RPC_FAR *Arg);
RPCRTAPI RPC_STATUS RPC_ENTRY RpcServerRegisterAuthInfoW(RPC_WSTR ServerPrincName, unsigned long AuthnSvc, RPC_AUTH_KEY_RETRIEVAL_FN GetKeyFn, void __RPC_FAR *Arg);
#ifdef UNICODE
#define RpcBindingInqAuthClient RpcBindingInqAuthClientW
#define RpcBindingInqAuthClientEx RpcBindingInqAuthClientExW
#define RpcBindingInqAuthInfo RpcBindingInqAuthInfoW
#define RpcBindingSetAuthInfo RpcBindingSetAuthInfoW
#define RpcServerRegisterAuthInfo RpcServerRegisterAuthInfoW
#define RpcBindingInqAuthInfoEx RpcBindingInqAuthInfoExW
#define RpcBindingSetAuthInfoEx RpcBindingSetAuthInfoExW
#else
#define RpcBindingInqAuthClient RpcBindingInqAuthClientA
#define RpcBindingInqAuthClientEx RpcBindingInqAuthClientExA
#define RpcBindingInqAuthInfo RpcBindingInqAuthInfoA
#define RpcBindingSetAuthInfo RpcBindingSetAuthInfoA
#define RpcServerRegisterAuthInfo RpcServerRegisterAuthInfoA
#define RpcBindingInqAuthInfoEx RpcBindingInqAuthInfoExA
#define RpcBindingSetAuthInfoEx RpcBindingSetAuthInfoExA
#endif
#else
RPCRTAPI RPC_STATUS RPC_ENTRY RpcBindingInqAuthClient(RPC_BINDING_HANDLE ClientBinding, RPC_AUTHZ_HANDLE __RPC_FAR *Privs, RPC_WSTR __RPC_FAR *ServerPrincName, unsigned long __RPC_FAR *AuthnLevel, unsigned long __RPC_FAR *AuthnSvc, unsigned long __RPC_FAR *AuthzSvc);
RPCRTAPI RPC_STATUS RPC_ENTRY RpcBindingInqAuthClientEx(RPC_BINDING_HANDLE ClientBinding, RPC_AUTHZ_HANDLE __RPC_FAR *Privs, RPC_CSTR __RPC_FAR *ServerPrincName, unsigned long __RPC_FAR *AuthnLevel, unsigned long __RPC_FAR *AuthnSvc, unsigned long __RPC_FAR *AuthzSvc, unsigned long Flags);
RPCRTAPI RPC_STATUS RPC_ENTRY RpcBindingInqAuthInfo(RPC_BINDING_HANDLE Binding, RPC_CSTR __RPC_FAR *ServerPrincName, unsigned long __RPC_FAR *AuthnLevel, unsigned long __RPC_FAR *AuthnSvc, RPC_AUTH_IDENTITY_HANDLE __RPC_FAR *AuthIdentity, unsigned long __RPC_FAR *AuthzSvc);
RPCRTAPI RPC_STATUS RPC_ENTRY RpcBindingSetAuthInfo(RPC_BINDING_HANDLE Binding, RPC_CSTR ServerPrincName, unsigned long AuthnLevel, unsigned long AuthnSvc, RPC_AUTH_IDENTITY_HANDLE AuthIdentity, unsigned long AuthzSvc);
typedef void
     (__RPC_USER *RPC_AUTH_KEY_RETRIEVAL_FN) (void __RPC_FAR *Arg, unsigned char __RPC_FAR *ServerPrincName, unsigned long KeyVer, void __RPC_FAR *__RPC_FAR *Key, RPC_STATUS __RPC_FAR *Status);
RPCRTAPI RPC_STATUS RPC_ENTRY RpcServerRegisterAuthInfo(RPC_CSTR ServerPrincName, unsigned long AuthnSvc, RPC_AUTH_KEY_RETRIEVAL_FN GetKeyFn, void __RPC_FAR *Arg);
#endif
#if (NTDDI_VERSION >= NTDDI_WINXP)
#if !defined(_M_IA64)
typedef struct {
	unsigned char __RPC_FAR *UserName;
	unsigned char __RPC_FAR *ComputerName;
	unsigned short Privilege;
	unsigned long AuthFlags;
} RPC_CLIENT_INFORMATION1, __RPC_FAR * PRPC_CLIENT_INFORMATION1;
#endif
#endif
RPCRTAPI RPC_STATUS RPC_ENTRY RpcBindingServerFromClient(RPC_BINDING_HANDLE ClientBinding, RPC_BINDING_HANDLE __RPC_FAR *ServerBinding);
RPCRTAPI DECLSPEC_NORETURN void RPC_ENTRY RpcRaiseException(RPC_STATUS exception);
RPCRTAPI RPC_STATUS RPC_ENTRY RpcTestCancel(void
	);
RPCRTAPI RPC_STATUS RPC_ENTRY RpcServerTestCancel(RPC_BINDING_HANDLE BindingHandle);
RPCRTAPI RPC_STATUS RPC_ENTRY RpcCancelThread(void *Thread);
RPCRTAPI RPC_STATUS RPC_ENTRY RpcCancelThreadEx(void *Thread, long Timeout);
RPCRTAPI RPC_STATUS RPC_ENTRY UuidCreate(UUID __RPC_FAR *Uuid);
RPCRTAPI RPC_STATUS RPC_ENTRY UuidCreateSequential(UUID __RPC_FAR *Uuid);
#ifdef RPC_UNICODE_SUPPORTED
RPCRTAPI RPC_STATUS RPC_ENTRY UuidToStringA(const UUID __RPC_FAR *Uuid, RPC_CSTR __RPC_FAR *StringUuid);
RPCRTAPI RPC_STATUS RPC_ENTRY UuidFromStringA(RPC_CSTR StringUuid, UUID __RPC_FAR *Uuid);
RPCRTAPI RPC_STATUS RPC_ENTRY UuidToStringW(const UUID __RPC_FAR *Uuid, RPC_WSTR __RPC_FAR *StringUuid);
RPCRTAPI RPC_STATUS RPC_ENTRY UuidFromStringW(RPC_WSTR StringUuid, UUID __RPC_FAR *Uuid);
#ifdef UNICODE
#define UuidFromString UuidFromStringW
#define UuidToString UuidToStringW
#else
#define UuidFromString UuidFromStringA
#define UuidToString UuidToStringA
#endif
#else
RPCRTAPI RPC_STATUS RPC_ENTRY UuidToString(const UUID __RPC_FAR *Uuid, RPC_CSTR __RPC_FAR *StringUuid);
RPCRTAPI RPC_STATUS RPC_ENTRY UuidFromString(RPC_CSTR StringUuid, UUID __RPC_FAR *Uuid);
#endif
RPCRTAPI signed int RPC_ENTRY UuidCompare(UUID __RPC_FAR *Uuid1, UUID __RPC_FAR *Uuid2, RPC_STATUS __RPC_FAR *Status);
RPCRTAPI RPC_STATUS RPC_ENTRY UuidCreateNil(UUID __RPC_FAR *NilUuid);
RPCRTAPI int RPC_ENTRY UuidEqual(UUID __RPC_FAR *Uuid1, UUID __RPC_FAR *Uuid2, RPC_STATUS __RPC_FAR *Status);
RPCRTAPI unsigned short RPC_ENTRY UuidHash(UUID __RPC_FAR *Uuid, RPC_STATUS __RPC_FAR *Status);
RPCRTAPI int RPC_ENTRY UuidIsNil(UUID __RPC_FAR *Uuid, RPC_STATUS __RPC_FAR *Status);
#ifdef RPC_UNICODE_SUPPORTED
RPCRTAPI RPC_STATUS RPC_ENTRY RpcEpRegisterNoReplaceA(RPC_IF_HANDLE IfSpec, RPC_BINDING_VECTOR *BindingVector, UUID_VECTOR *UuidVector, RPC_CSTR Annotation);
RPCRTAPI RPC_STATUS RPC_ENTRY RpcEpRegisterNoReplaceW(RPC_IF_HANDLE IfSpec, RPC_BINDING_VECTOR *BindingVector, UUID_VECTOR *UuidVector, RPC_WSTR Annotation);
RPCRTAPI RPC_STATUS RPC_ENTRY RpcEpRegisterA(RPC_IF_HANDLE IfSpec, RPC_BINDING_VECTOR *BindingVector, UUID_VECTOR *UuidVector, RPC_CSTR Annotation);
RPCRTAPI RPC_STATUS RPC_ENTRY RpcEpRegisterW(RPC_IF_HANDLE IfSpec, RPC_BINDING_VECTOR *BindingVector, UUID_VECTOR *UuidVector, RPC_WSTR Annotation);
#ifdef UNICODE
#define RpcEpRegisterNoReplace RpcEpRegisterNoReplaceW
#define RpcEpRegister RpcEpRegisterW
#else
#define RpcEpRegisterNoReplace RpcEpRegisterNoReplaceA
#define RpcEpRegister RpcEpRegisterA
#endif
#else
RPCRTAPI RPC_STATUS RPC_ENTRY RpcEpRegisterNoReplace(RPC_IF_HANDLE IfSpec, RPC_BINDING_VECTOR *BindingVector, UUID_VECTOR *UuidVector, RPC_CSTR Annotation);
RPCRTAPI RPC_STATUS RPC_ENTRY RpcEpRegister(RPC_IF_HANDLE IfSpec, RPC_BINDING_VECTOR *BindingVector, UUID_VECTOR *UuidVector, RPC_CSTR Annotation);
#endif
RPCRTAPI RPC_STATUS RPC_ENTRY RpcEpUnregister(RPC_IF_HANDLE IfSpec, RPC_BINDING_VECTOR *BindingVector, UUID_VECTOR *UuidVector);
#define DCE_C_ERROR_STRING_LEN 256
#ifdef RPC_UNICODE_SUPPORTED
RPCRTAPI RPC_STATUS RPC_ENTRY DceErrorInqTextA(RPC_STATUS RpcStatus, RPC_CSTR ErrorText);
RPCRTAPI RPC_STATUS RPC_ENTRY DceErrorInqTextW(RPC_STATUS RpcStatus, RPC_WSTR ErrorText);
#ifdef UNICODE
#define DceErrorInqText DceErrorInqTextW
#else
#define DceErrorInqText DceErrorInqTextA
#endif
#else
RPCRTAPI RPC_STATUS RPC_ENTRY DceErrorInqText(RPC_STATUS RpcStatus, RPC_CSTR ErrorText);
#endif
typedef I_RPC_HANDLE *RPC_EP_INQ_HANDLE;
#define  RPC_C_EP_ALL_ELTS        0
#define  RPC_C_EP_MATCH_BY_IF     1
#define  RPC_C_EP_MATCH_BY_OBJ    2
#define  RPC_C_EP_MATCH_BY_BOTH   3
#define  RPC_C_VERS_ALL           1
#define  RPC_C_VERS_COMPATIBLE    2
#define  RPC_C_VERS_EXACT         3
#define  RPC_C_VERS_MAJOR_ONLY    4
#define  RPC_C_VERS_UPTO          5
RPCRTAPI RPC_STATUS RPC_ENTRY RpcMgmtEpEltInqBegin(RPC_BINDING_HANDLE EpBinding, unsigned long InquiryType, RPC_IF_ID __RPC_FAR *IfId, unsigned long VersOption, UUID __RPC_FAR *ObjectUuid, RPC_EP_INQ_HANDLE __RPC_FAR *InquiryContext);
RPCRTAPI RPC_STATUS RPC_ENTRY RpcMgmtEpEltInqDone(RPC_EP_INQ_HANDLE __RPC_FAR *InquiryContext);
#ifdef RPC_UNICODE_SUPPORTED
RPCRTAPI RPC_STATUS RPC_ENTRY RpcMgmtEpEltInqNextA(RPC_EP_INQ_HANDLE InquiryContext, RPC_IF_ID __RPC_FAR *IfId, RPC_BINDING_HANDLE __RPC_FAR *Binding, UUID __RPC_FAR *ObjectUuid, RPC_CSTR __RPC_FAR *Annotation);
RPCRTAPI RPC_STATUS RPC_ENTRY RpcMgmtEpEltInqNextW(RPC_EP_INQ_HANDLE InquiryContext, RPC_IF_ID __RPC_FAR *IfId, RPC_BINDING_HANDLE __RPC_FAR *Binding, UUID __RPC_FAR *ObjectUuid, RPC_WSTR __RPC_FAR *Annotation);
#ifdef UNICODE
#define RpcMgmtEpEltInqNext RpcMgmtEpEltInqNextW
#else
#define RpcMgmtEpEltInqNext RpcMgmtEpEltInqNextA
#endif
#else
RPCRTAPI RPC_STATUS RPC_ENTRY RpcMgmtEpEltInqNext(RPC_EP_INQ_HANDLE InquiryContext, RPC_IF_ID __RPC_FAR *IfId, RPC_BINDING_HANDLE __RPC_FAR *Binding, RPC_CSTR __RPC_FAR *Annotation);
#endif
RPCRTAPI RPC_STATUS RPC_ENTRY RpcMgmtEpUnregister(RPC_BINDING_HANDLE EpBinding, RPC_IF_ID __RPC_FAR *IfId, RPC_BINDING_HANDLE Binding, UUID __RPC_FAR *ObjectUuid);
typedef int
    (__RPC_API *RPC_MGMT_AUTHORIZATION_FN) (RPC_BINDING_HANDLE ClientBinding, unsigned long RequestedMgmtOperation, RPC_STATUS __RPC_FAR *Status);
#define RPC_C_MGMT_INQ_IF_IDS         0
#define RPC_C_MGMT_INQ_PRINC_NAME     1
#define RPC_C_MGMT_INQ_STATS          2
#define RPC_C_MGMT_IS_SERVER_LISTEN   3
#define RPC_C_MGMT_STOP_SERVER_LISTEN 4
RPCRTAPI RPC_STATUS RPC_ENTRY RpcMgmtSetAuthorizationFn(RPC_MGMT_AUTHORIZATION_FN AuthorizationFn);
#if (NTDDI_VERSION >= NTDDI_VISTA)
RPCRTAPI int RPC_ENTRY RpcExceptionFilter(unsigned long ExceptionCode);
#endif
#define RPC_C_PARM_MAX_PACKET_LENGTH    1
#define RPC_C_PARM_BUFFER_LENGTH        2
#define RPC_IF_AUTOLISTEN                   0x0001
#define RPC_IF_OLE                          0x0002
#define RPC_IF_ALLOW_UNKNOWN_AUTHORITY      0x0004
#define RPC_IF_ALLOW_SECURE_ONLY            0x0008
#define RPC_IF_ALLOW_CALLBACKS_WITH_NO_AUTH 0x0010
#define RPC_IF_ALLOW_LOCAL_ONLY             0x0020
#define RPC_IF_SEC_NO_CACHE                 0x0040
#if (NTDDI_VERSION >= NTDDI_VISTA)
#define RPC_IF_SEC_CACHE_PER_PROC           0x0080
#define RPC_IF_ASYNC_CALLBACK               0x0100
#endif
#if (NTDDI_VERSION >= NTDDI_VISTA)
#define RPC_FW_IF_FLAG_DCOM                 0x0001
#endif
#include <rpcdcep.h>

#endif

/*+@@file@@----------------------------------------------------------------*//*!
 \file		NapTypes.h
 \par Description 
            Extension and update of headers for PellesC compiler suite.
 \par Project: 
            PellesC Headers extension
 \date		Created  on Sun Sep 11 22:08:29 2016
 \date		Modified on Sun Sep 11 22:08:29 2016
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
#ifndef __naptypes_h__
#define __naptypes_h__
#if __POCC__ >= 500
#pragma once
#endif
#include "oaidl.h"
#include "ocidl.h"
extern RPC_IF_HANDLE __MIDL_itf_naptypes_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_naptypes_0000_0000_v0_0_s_ifspec;
#ifndef __INapTypes_INTERFACE_DEFINED__
#define __INapTypes_INTERFACE_DEFINED__
#define	maxSoHAttributeCount	( 100 )
#define	maxSoHAttributeSize	( 4000 )
#define	minNetworkSoHSize	( 12 )
#define	maxNetworkSoHSize	( 4000 )
#define	maxDwordCountPerSoHAttribute	( ( maxSoHAttributeSize / sizeof( DWORD  ) )  )
#define	maxIpv4CountPerSoHAttribute	( ( maxSoHAttributeSize / 4 )  )
#define	maxIpv6CountPerSoHAttribute	( ( maxSoHAttributeSize / 16 )  )
#define	maxStringLength	( 1024 )
#define	maxStringLengthInBytes	( ( (( maxStringLength + 1 ) ) * sizeof( WCHAR  ) )  )
#define	maxSystemHealthEntityCount	( 20 )
#define	maxEnforcerCount	( 20 )
#define	maxPrivateDataSize	( 200 )
#define	maxConnectionCountPerEnforcer	( 20 )
#define	maxCachedSoHCount	( ( ( maxSystemHealthEntityCount * maxEnforcerCount )  * maxConnectionCountPerEnforcer )  )
#define	freshSoHRequest	( 0x1 )
#define	shaFixup	( 0x1 )
typedef enum tagIsolationState
{
	isolationStateNotRestricted = 1,
	isolationStateInProbation = 2,
	isolationStateRestrictedAccess = 3
} IsolationState;
typedef enum tagExtendedIsolationState
{
	extendedIsolationStateNoData = 0,
	extendedIsolationStateTransition = 0x1,
	extendedIsolationStateInfected = 0x2,
	extendedIsolationStateUnknown = 0x3
} ExtendedIsolationState;
typedef enum tagNapTracingLevel
{
	tracingLevelUndefined = 0,
	tracingLevelBasic = 1,
	tracingLevelAdvanced = 2,
	tracingLevelDebug = 3
} NapTracingLevel;
typedef FILETIME ProbationTime;
typedef struct tagCountedString
{
	UINT16 length;
	WCHAR *string;
} CountedString;
typedef struct tagIsolationInfo
{
	IsolationState isolationState;
	ProbationTime probEndTime;
	CountedString failureUrl;
} IsolationInfo;
typedef struct tagIsolationInfoEx
{
	IsolationState isolationState;
	ExtendedIsolationState extendedIsolationState;
	ProbationTime probEndTime;
	CountedString failureUrl;
} IsolationInfoEx;
#define	failureCategoryCount	( 5 )
typedef enum tagFailureCategory
{
	failureCategoryNone = 0,
	failureCategoryOther = 1,
	failureCategoryClientComponent = 2,
	failureCategoryClientCommunication = 3,
	failureCategoryServerComponent = 4,
	failureCategoryServerCommunication = 5
} FailureCategory;
typedef struct tagFailureCategoryMapping
{
	BOOL mappingCompliance[5];
} FailureCategoryMapping;
typedef UINT32 NapComponentId;
typedef NapComponentId SystemHealthEntityId;
typedef NapComponentId EnforcementEntityId;
#define	ComponentTypeEnforcementClientSoH	( 0x1 )
#define	ComponentTypeEnforcementClientRp	( 0x2 )
typedef UINT16 SystemHealthEntityCount;
typedef UINT16 EnforcementEntityCount;
typedef struct tagCorrelationId
{
	GUID connId;
	FILETIME timeStamp;
} CorrelationId;
typedef CountedString StringCorrelationId;
typedef GUID ConnectionId;
#define	percentageNotSupported	( 101 )
typedef UINT8 Percentage;
typedef UINT32 MessageId;
typedef struct tagResultCodes
{
	UINT16 count;
	HRESULT *results;
} ResultCodes;
typedef struct tagIpv4Address
{
	BYTE addr[4];
} Ipv4Address;
typedef struct tagIpv6Address
{
	BYTE addr[16];
} Ipv6Address;
typedef enum tagFixupState
{
	fixupStateSuccess = 0,
	fixupStateInProgress = 1,
	fixupStateCouldNotUpdate = 2
} FixupState;
typedef struct tagFixupInfo
{
	FixupState state;
	Percentage percentage;
	ResultCodes resultCodes;
	MessageId fixupMsgId;
} FixupInfo;
typedef enum tagNapNotifyType
{
	napNotifyTypeUnknown = 0,
	napNotifyTypeServiceState = 1,
	napNotifyTypeQuarState = 2
} NapNotifyType;
typedef struct tagSystemHealthAgentState
{
	SystemHealthEntityId id;
	ResultCodes shaResultCodes;
	FailureCategory failureCategory;
	FixupInfo fixupInfo;
} SystemHealthAgentState;
typedef struct tagSoHAttribute
{
	UINT16 type;
	UINT16 size;
	BYTE *value;
} SoHAttribute;
typedef struct tagSoH
{
	UINT16 count;
	SoHAttribute *attributes;
} SoH;
typedef struct tagSoH SoHRequest;
typedef struct tagSoH SoHResponse;
typedef struct tagNetworkSoH
{
	UINT16 size;
	BYTE *data;
} NetworkSoH;
typedef struct tagNetworkSoH NetworkSoHRequest;
typedef struct tagNetworkSoH NetworkSoHResponse;
typedef struct tagPrivateData
{
	UINT16 size;
	BYTE *data;
} PrivateData;
typedef struct tagNapComponentRegistrationInfo
{
	NapComponentId id;
	CountedString friendlyName;
	CountedString description;
	CountedString version;
	CountedString vendorName;
	CLSID infoClsid;
	CLSID configClsid;
	FILETIME registrationDate;
	UINT32 componentType;
} NapComponentRegistrationInfo;
typedef enum tagRemoteConfigurationType
{
	remoteConfigTypeMachine = 1,
	remoteConfigTypeConfigBlob = (remoteConfigTypeMachine + 1)
} RemoteConfigurationType;
extern RPC_IF_HANDLE INapTypes_v0_0_c_ifspec;
extern RPC_IF_HANDLE INapTypes_v0_0_s_ifspec;
#endif
#endif

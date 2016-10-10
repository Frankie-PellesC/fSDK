/*+@@file@@----------------------------------------------------------------*//*!
 \file		ComSvcs.h
 \par Description 
            Extension and update of headers for PellesC compiler suite.
 \par Project: 
            PellesC Headers extension
 \date		Created  on Sun Jul  3 20:55:26 2016
 \date		Modified on Sun Jul  3 20:55:26 2016
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
#ifndef __autosvcs_h__
#define __autosvcs_h__
#if __POCC__ >= 500
#pragma once
#endif
#ifndef __ISecurityIdentityColl_FWD_DEFINED__
#define __ISecurityIdentityColl_FWD_DEFINED__
typedef interface ISecurityIdentityColl ISecurityIdentityColl;
#endif
#ifndef __ISecurityCallersColl_FWD_DEFINED__
#define __ISecurityCallersColl_FWD_DEFINED__
typedef interface ISecurityCallersColl ISecurityCallersColl;
#endif
#ifndef __ISecurityCallContext_FWD_DEFINED__
#define __ISecurityCallContext_FWD_DEFINED__
typedef interface ISecurityCallContext ISecurityCallContext;
#endif
#ifndef __IGetSecurityCallContext_FWD_DEFINED__
#define __IGetSecurityCallContext_FWD_DEFINED__
typedef interface IGetSecurityCallContext IGetSecurityCallContext;
#endif
#ifndef __SecurityProperty_FWD_DEFINED__
#define __SecurityProperty_FWD_DEFINED__
typedef interface SecurityProperty SecurityProperty;
#endif
#ifndef __ContextInfo_FWD_DEFINED__
#define __ContextInfo_FWD_DEFINED__
typedef interface ContextInfo ContextInfo;
#endif
#ifndef __ContextInfo2_FWD_DEFINED__
#define __ContextInfo2_FWD_DEFINED__
typedef interface ContextInfo2 ContextInfo2;
#endif
#ifndef __ObjectContext_FWD_DEFINED__
#define __ObjectContext_FWD_DEFINED__
typedef interface ObjectContext ObjectContext;
#endif
#ifndef __ITransactionContextEx_FWD_DEFINED__
#define __ITransactionContextEx_FWD_DEFINED__
typedef interface ITransactionContextEx ITransactionContextEx;
#endif
#ifndef __ITransactionContext_FWD_DEFINED__
#define __ITransactionContext_FWD_DEFINED__
typedef interface ITransactionContext ITransactionContext;
#endif
#ifndef __ICreateWithTransactionEx_FWD_DEFINED__
#define __ICreateWithTransactionEx_FWD_DEFINED__
typedef interface ICreateWithTransactionEx ICreateWithTransactionEx;
#endif
#ifndef __ICreateWithLocalTransaction_FWD_DEFINED__
#define __ICreateWithLocalTransaction_FWD_DEFINED__
typedef interface ICreateWithLocalTransaction ICreateWithLocalTransaction;
#endif
#ifndef __ICreateWithTipTransactionEx_FWD_DEFINED__
#define __ICreateWithTipTransactionEx_FWD_DEFINED__
typedef interface ICreateWithTipTransactionEx ICreateWithTipTransactionEx;
#endif
#ifndef __IComLTxEvents_FWD_DEFINED__
#define __IComLTxEvents_FWD_DEFINED__
typedef interface IComLTxEvents IComLTxEvents;
#endif
#ifndef __IComUserEvent_FWD_DEFINED__
#define __IComUserEvent_FWD_DEFINED__
typedef interface IComUserEvent IComUserEvent;
#endif
#ifndef __IComThreadEvents_FWD_DEFINED__
#define __IComThreadEvents_FWD_DEFINED__
typedef interface IComThreadEvents IComThreadEvents;
#endif
#ifndef __IComAppEvents_FWD_DEFINED__
#define __IComAppEvents_FWD_DEFINED__
typedef interface IComAppEvents IComAppEvents;
#endif
#ifndef __IComInstanceEvents_FWD_DEFINED__
#define __IComInstanceEvents_FWD_DEFINED__
typedef interface IComInstanceEvents IComInstanceEvents;
#endif
#ifndef __IComTransactionEvents_FWD_DEFINED__
#define __IComTransactionEvents_FWD_DEFINED__
typedef interface IComTransactionEvents IComTransactionEvents;
#endif
#ifndef __IComMethodEvents_FWD_DEFINED__
#define __IComMethodEvents_FWD_DEFINED__
typedef interface IComMethodEvents IComMethodEvents;
#endif
#ifndef __IComObjectEvents_FWD_DEFINED__
#define __IComObjectEvents_FWD_DEFINED__
typedef interface IComObjectEvents IComObjectEvents;
#endif
#ifndef __IComResourceEvents_FWD_DEFINED__
#define __IComResourceEvents_FWD_DEFINED__
typedef interface IComResourceEvents IComResourceEvents;
#endif
#ifndef __IComSecurityEvents_FWD_DEFINED__
#define __IComSecurityEvents_FWD_DEFINED__
typedef interface IComSecurityEvents IComSecurityEvents;
#endif
#ifndef __IComObjectPoolEvents_FWD_DEFINED__
#define __IComObjectPoolEvents_FWD_DEFINED__
typedef interface IComObjectPoolEvents IComObjectPoolEvents;
#endif
#ifndef __IComObjectPoolEvents2_FWD_DEFINED__
#define __IComObjectPoolEvents2_FWD_DEFINED__
typedef interface IComObjectPoolEvents2 IComObjectPoolEvents2;
#endif
#ifndef __IComObjectConstructionEvents_FWD_DEFINED__
#define __IComObjectConstructionEvents_FWD_DEFINED__
typedef interface IComObjectConstructionEvents IComObjectConstructionEvents;
#endif
#ifndef __IComActivityEvents_FWD_DEFINED__
#define __IComActivityEvents_FWD_DEFINED__
typedef interface IComActivityEvents IComActivityEvents;
#endif
#ifndef __IComIdentityEvents_FWD_DEFINED__
#define __IComIdentityEvents_FWD_DEFINED__
typedef interface IComIdentityEvents IComIdentityEvents;
#endif
#ifndef __IComQCEvents_FWD_DEFINED__
#define __IComQCEvents_FWD_DEFINED__
typedef interface IComQCEvents IComQCEvents;
#endif
#ifndef __IComExceptionEvents_FWD_DEFINED__
#define __IComExceptionEvents_FWD_DEFINED__
typedef interface IComExceptionEvents IComExceptionEvents;
#endif
#ifndef __ILBEvents_FWD_DEFINED__
#define __ILBEvents_FWD_DEFINED__
typedef interface ILBEvents ILBEvents;
#endif
#ifndef __IComCRMEvents_FWD_DEFINED__
#define __IComCRMEvents_FWD_DEFINED__
typedef interface IComCRMEvents IComCRMEvents;
#endif
#ifndef __IComMethod2Events_FWD_DEFINED__
#define __IComMethod2Events_FWD_DEFINED__
typedef interface IComMethod2Events IComMethod2Events;
#endif
#ifndef __IComTrackingInfoEvents_FWD_DEFINED__
#define __IComTrackingInfoEvents_FWD_DEFINED__
typedef interface IComTrackingInfoEvents IComTrackingInfoEvents;
#endif
#ifndef __IComTrackingInfoCollection_FWD_DEFINED__
#define __IComTrackingInfoCollection_FWD_DEFINED__
typedef interface IComTrackingInfoCollection IComTrackingInfoCollection;
#endif
#ifndef __IComTrackingInfoObject_FWD_DEFINED__
#define __IComTrackingInfoObject_FWD_DEFINED__
typedef interface IComTrackingInfoObject IComTrackingInfoObject;
#endif
#ifndef __IComTrackingInfoProperties_FWD_DEFINED__
#define __IComTrackingInfoProperties_FWD_DEFINED__
typedef interface IComTrackingInfoProperties IComTrackingInfoProperties;
#endif
#ifndef __IComApp2Events_FWD_DEFINED__
#define __IComApp2Events_FWD_DEFINED__
typedef interface IComApp2Events IComApp2Events;
#endif
#ifndef __IComTransaction2Events_FWD_DEFINED__
#define __IComTransaction2Events_FWD_DEFINED__
typedef interface IComTransaction2Events IComTransaction2Events;
#endif
#ifndef __IComInstance2Events_FWD_DEFINED__
#define __IComInstance2Events_FWD_DEFINED__
typedef interface IComInstance2Events IComInstance2Events;
#endif
#ifndef __IComObjectPool2Events_FWD_DEFINED__
#define __IComObjectPool2Events_FWD_DEFINED__
typedef interface IComObjectPool2Events IComObjectPool2Events;
#endif
#ifndef __IComObjectConstruction2Events_FWD_DEFINED__
#define __IComObjectConstruction2Events_FWD_DEFINED__
typedef interface IComObjectConstruction2Events IComObjectConstruction2Events;
#endif
#ifndef __ISystemAppEventData_FWD_DEFINED__
#define __ISystemAppEventData_FWD_DEFINED__
typedef interface ISystemAppEventData ISystemAppEventData;
#endif
#ifndef __IMtsEvents_FWD_DEFINED__
#define __IMtsEvents_FWD_DEFINED__
typedef interface IMtsEvents IMtsEvents;
#endif
#ifndef __IMtsEventInfo_FWD_DEFINED__
#define __IMtsEventInfo_FWD_DEFINED__
typedef interface IMtsEventInfo IMtsEventInfo;
#endif
#ifndef __IMTSLocator_FWD_DEFINED__
#define __IMTSLocator_FWD_DEFINED__
typedef interface IMTSLocator IMTSLocator;
#endif
#ifndef __IMtsGrp_FWD_DEFINED__
#define __IMtsGrp_FWD_DEFINED__
typedef interface IMtsGrp IMtsGrp;
#endif
#ifndef __IMessageMover_FWD_DEFINED__
#define __IMessageMover_FWD_DEFINED__
typedef interface IMessageMover IMessageMover;
#endif
#ifndef __IEventServerTrace_FWD_DEFINED__
#define __IEventServerTrace_FWD_DEFINED__
typedef interface IEventServerTrace IEventServerTrace;
#endif
#ifndef __IGetAppTrackerData_FWD_DEFINED__
#define __IGetAppTrackerData_FWD_DEFINED__
typedef interface IGetAppTrackerData IGetAppTrackerData;
#endif
#ifndef __IDispenserManager_FWD_DEFINED__
#define __IDispenserManager_FWD_DEFINED__
typedef interface IDispenserManager IDispenserManager;
#endif
#ifndef __IHolder_FWD_DEFINED__
#define __IHolder_FWD_DEFINED__
typedef interface IHolder IHolder;
#endif
#ifndef __IDispenserDriver_FWD_DEFINED__
#define __IDispenserDriver_FWD_DEFINED__
typedef interface IDispenserDriver IDispenserDriver;
#endif
#ifndef __ITransactionProxy_FWD_DEFINED__
#define __ITransactionProxy_FWD_DEFINED__
typedef interface ITransactionProxy ITransactionProxy;
#endif
#ifndef __IContextSecurityPerimeter_FWD_DEFINED__
#define __IContextSecurityPerimeter_FWD_DEFINED__
typedef interface IContextSecurityPerimeter IContextSecurityPerimeter;
#endif
#ifndef __ITxProxyHolder_FWD_DEFINED__
#define __ITxProxyHolder_FWD_DEFINED__
typedef interface ITxProxyHolder ITxProxyHolder;
#endif
#ifndef __IObjectContext_FWD_DEFINED__
#define __IObjectContext_FWD_DEFINED__
typedef interface IObjectContext IObjectContext;
#endif
#ifndef __IObjectControl_FWD_DEFINED__
#define __IObjectControl_FWD_DEFINED__
typedef interface IObjectControl IObjectControl;
#endif
#ifndef __IEnumNames_FWD_DEFINED__
#define __IEnumNames_FWD_DEFINED__
typedef interface IEnumNames IEnumNames;
#endif
#ifndef __ISecurityProperty_FWD_DEFINED__
#define __ISecurityProperty_FWD_DEFINED__
typedef interface ISecurityProperty ISecurityProperty;
#endif
#ifndef __ObjectControl_FWD_DEFINED__
#define __ObjectControl_FWD_DEFINED__
typedef interface ObjectControl ObjectControl;
#endif
#ifndef __ISharedProperty_FWD_DEFINED__
#define __ISharedProperty_FWD_DEFINED__
typedef interface ISharedProperty ISharedProperty;
#endif
#ifndef __ISharedPropertyGroup_FWD_DEFINED__
#define __ISharedPropertyGroup_FWD_DEFINED__
typedef interface ISharedPropertyGroup ISharedPropertyGroup;
#endif
#ifndef __ISharedPropertyGroupManager_FWD_DEFINED__
#define __ISharedPropertyGroupManager_FWD_DEFINED__
typedef interface ISharedPropertyGroupManager ISharedPropertyGroupManager;
#endif
#ifndef __IObjectConstruct_FWD_DEFINED__
#define __IObjectConstruct_FWD_DEFINED__
typedef interface IObjectConstruct IObjectConstruct;
#endif
#ifndef __IObjectConstructString_FWD_DEFINED__
#define __IObjectConstructString_FWD_DEFINED__
typedef interface IObjectConstructString IObjectConstructString;
#endif
#ifndef __IObjectContextActivity_FWD_DEFINED__
#define __IObjectContextActivity_FWD_DEFINED__
typedef interface IObjectContextActivity IObjectContextActivity;
#endif
#ifndef __IObjectContextInfo_FWD_DEFINED__
#define __IObjectContextInfo_FWD_DEFINED__
typedef interface IObjectContextInfo IObjectContextInfo;
#endif
#ifndef __IObjectContextInfo2_FWD_DEFINED__
#define __IObjectContextInfo2_FWD_DEFINED__
typedef interface IObjectContextInfo2 IObjectContextInfo2;
#endif
#ifndef __ITransactionStatus_FWD_DEFINED__
#define __ITransactionStatus_FWD_DEFINED__
typedef interface ITransactionStatus ITransactionStatus;
#endif
#ifndef __IObjectContextTip_FWD_DEFINED__
#define __IObjectContextTip_FWD_DEFINED__
typedef interface IObjectContextTip IObjectContextTip;
#endif
#ifndef __IPlaybackControl_FWD_DEFINED__
#define __IPlaybackControl_FWD_DEFINED__
typedef interface IPlaybackControl IPlaybackControl;
#endif
#ifndef __IGetContextProperties_FWD_DEFINED__
#define __IGetContextProperties_FWD_DEFINED__
typedef interface IGetContextProperties IGetContextProperties;
#endif
#ifndef __IContextState_FWD_DEFINED__
#define __IContextState_FWD_DEFINED__
typedef interface IContextState IContextState;
#endif
#ifndef __IPoolManager_FWD_DEFINED__
#define __IPoolManager_FWD_DEFINED__
typedef interface IPoolManager IPoolManager;
#endif
#ifndef __ISelectCOMLBServer_FWD_DEFINED__
#define __ISelectCOMLBServer_FWD_DEFINED__
typedef interface ISelectCOMLBServer ISelectCOMLBServer;
#endif
#ifndef __ICOMLBArguments_FWD_DEFINED__
#define __ICOMLBArguments_FWD_DEFINED__
typedef interface ICOMLBArguments ICOMLBArguments;
#endif
#ifndef __ICrmLogControl_FWD_DEFINED__
#define __ICrmLogControl_FWD_DEFINED__
typedef interface ICrmLogControl ICrmLogControl;
#endif
#ifndef __ICrmCompensatorVariants_FWD_DEFINED__
#define __ICrmCompensatorVariants_FWD_DEFINED__
typedef interface ICrmCompensatorVariants ICrmCompensatorVariants;
#endif
#ifndef __ICrmCompensator_FWD_DEFINED__
#define __ICrmCompensator_FWD_DEFINED__
typedef interface ICrmCompensator ICrmCompensator;
#endif
#ifndef __ICrmMonitorLogRecords_FWD_DEFINED__
#define __ICrmMonitorLogRecords_FWD_DEFINED__
typedef interface ICrmMonitorLogRecords ICrmMonitorLogRecords;
#endif
#ifndef __ICrmMonitorClerks_FWD_DEFINED__
#define __ICrmMonitorClerks_FWD_DEFINED__
typedef interface ICrmMonitorClerks ICrmMonitorClerks;
#endif
#ifndef __ICrmMonitor_FWD_DEFINED__
#define __ICrmMonitor_FWD_DEFINED__
typedef interface ICrmMonitor ICrmMonitor;
#endif
#ifndef __ICrmFormatLogRecords_FWD_DEFINED__
#define __ICrmFormatLogRecords_FWD_DEFINED__
typedef interface ICrmFormatLogRecords ICrmFormatLogRecords;
#endif
#ifndef __IServiceIISIntrinsicsConfig_FWD_DEFINED__
#define __IServiceIISIntrinsicsConfig_FWD_DEFINED__
typedef interface IServiceIISIntrinsicsConfig IServiceIISIntrinsicsConfig;
#endif
#ifndef __IServiceComTIIntrinsicsConfig_FWD_DEFINED__
#define __IServiceComTIIntrinsicsConfig_FWD_DEFINED__
typedef interface IServiceComTIIntrinsicsConfig IServiceComTIIntrinsicsConfig;
#endif
#ifndef __IServiceSxsConfig_FWD_DEFINED__
#define __IServiceSxsConfig_FWD_DEFINED__
typedef interface IServiceSxsConfig IServiceSxsConfig;
#endif
#ifndef __ICheckSxsConfig_FWD_DEFINED__
#define __ICheckSxsConfig_FWD_DEFINED__
typedef interface ICheckSxsConfig ICheckSxsConfig;
#endif
#ifndef __IServiceInheritanceConfig_FWD_DEFINED__
#define __IServiceInheritanceConfig_FWD_DEFINED__
typedef interface IServiceInheritanceConfig IServiceInheritanceConfig;
#endif
#ifndef __IServiceThreadPoolConfig_FWD_DEFINED__
#define __IServiceThreadPoolConfig_FWD_DEFINED__
typedef interface IServiceThreadPoolConfig IServiceThreadPoolConfig;
#endif
#ifndef __IServiceTransactionConfigBase_FWD_DEFINED__
#define __IServiceTransactionConfigBase_FWD_DEFINED__
typedef interface IServiceTransactionConfigBase IServiceTransactionConfigBase;
#endif
#ifndef __IServiceTransactionConfig_FWD_DEFINED__
#define __IServiceTransactionConfig_FWD_DEFINED__
typedef interface IServiceTransactionConfig IServiceTransactionConfig;
#endif
#ifndef __IServiceSysTxnConfig_FWD_DEFINED__
#define __IServiceSysTxnConfig_FWD_DEFINED__
typedef interface IServiceSysTxnConfig IServiceSysTxnConfig;
#endif
#ifndef __IServiceSynchronizationConfig_FWD_DEFINED__
#define __IServiceSynchronizationConfig_FWD_DEFINED__
typedef interface IServiceSynchronizationConfig IServiceSynchronizationConfig;
#endif
#ifndef __IServiceTrackerConfig_FWD_DEFINED__
#define __IServiceTrackerConfig_FWD_DEFINED__
typedef interface IServiceTrackerConfig IServiceTrackerConfig;
#endif
#ifndef __IServicePartitionConfig_FWD_DEFINED__
#define __IServicePartitionConfig_FWD_DEFINED__
typedef interface IServicePartitionConfig IServicePartitionConfig;
#endif
#ifndef __IServiceCall_FWD_DEFINED__
#define __IServiceCall_FWD_DEFINED__
typedef interface IServiceCall IServiceCall;
#endif
#ifndef __IAsyncErrorNotify_FWD_DEFINED__
#define __IAsyncErrorNotify_FWD_DEFINED__
typedef interface IAsyncErrorNotify IAsyncErrorNotify;
#endif
#ifndef __IServiceActivity_FWD_DEFINED__
#define __IServiceActivity_FWD_DEFINED__
typedef interface IServiceActivity IServiceActivity;
#endif
#ifndef __IThreadPoolKnobs_FWD_DEFINED__
#define __IThreadPoolKnobs_FWD_DEFINED__
typedef interface IThreadPoolKnobs IThreadPoolKnobs;
#endif
#ifndef __IComStaThreadPoolKnobs_FWD_DEFINED__
#define __IComStaThreadPoolKnobs_FWD_DEFINED__
typedef interface IComStaThreadPoolKnobs IComStaThreadPoolKnobs;
#endif
#ifndef __IComMtaThreadPoolKnobs_FWD_DEFINED__
#define __IComMtaThreadPoolKnobs_FWD_DEFINED__
typedef interface IComMtaThreadPoolKnobs IComMtaThreadPoolKnobs;
#endif
#ifndef __IComStaThreadPoolKnobs2_FWD_DEFINED__
#define __IComStaThreadPoolKnobs2_FWD_DEFINED__
typedef interface IComStaThreadPoolKnobs2 IComStaThreadPoolKnobs2;
#endif
#ifndef __IProcessInitializer_FWD_DEFINED__
#define __IProcessInitializer_FWD_DEFINED__
typedef interface IProcessInitializer IProcessInitializer;
#endif
#ifndef __IServicePoolConfig_FWD_DEFINED__
#define __IServicePoolConfig_FWD_DEFINED__
typedef interface IServicePoolConfig IServicePoolConfig;
#endif
#ifndef __IServicePool_FWD_DEFINED__
#define __IServicePool_FWD_DEFINED__
typedef interface IServicePool IServicePool;
#endif
#ifndef __IManagedPooledObj_FWD_DEFINED__
#define __IManagedPooledObj_FWD_DEFINED__
typedef interface IManagedPooledObj IManagedPooledObj;
#endif
#ifndef __IManagedPoolAction_FWD_DEFINED__
#define __IManagedPoolAction_FWD_DEFINED__
typedef interface IManagedPoolAction IManagedPoolAction;
#endif
#ifndef __IManagedObjectInfo_FWD_DEFINED__
#define __IManagedObjectInfo_FWD_DEFINED__
typedef interface IManagedObjectInfo IManagedObjectInfo;
#endif
#ifndef __IAppDomainHelper_FWD_DEFINED__
#define __IAppDomainHelper_FWD_DEFINED__
typedef interface IAppDomainHelper IAppDomainHelper;
#endif
#ifndef __IAssemblyLocator_FWD_DEFINED__
#define __IAssemblyLocator_FWD_DEFINED__
typedef interface IAssemblyLocator IAssemblyLocator;
#endif
#ifndef __IManagedActivationEvents_FWD_DEFINED__
#define __IManagedActivationEvents_FWD_DEFINED__
typedef interface IManagedActivationEvents IManagedActivationEvents;
#endif
#ifndef __ISendMethodEvents_FWD_DEFINED__
#define __ISendMethodEvents_FWD_DEFINED__
typedef interface ISendMethodEvents ISendMethodEvents;
#endif
#ifndef __ITransactionResourcePool_FWD_DEFINED__
#define __ITransactionResourcePool_FWD_DEFINED__
typedef interface ITransactionResourcePool ITransactionResourcePool;
#endif
#ifndef __IMTSCall_FWD_DEFINED__
#define __IMTSCall_FWD_DEFINED__
typedef interface IMTSCall IMTSCall;
#endif
#ifndef __IContextProperties_FWD_DEFINED__
#define __IContextProperties_FWD_DEFINED__
typedef interface IContextProperties IContextProperties;
#endif
#ifndef __IObjPool_FWD_DEFINED__
#define __IObjPool_FWD_DEFINED__
typedef interface IObjPool IObjPool;
#endif
#ifndef __ITransactionProperty_FWD_DEFINED__
#define __ITransactionProperty_FWD_DEFINED__
typedef interface ITransactionProperty ITransactionProperty;
#endif
#ifndef __IMTSActivity_FWD_DEFINED__
#define __IMTSActivity_FWD_DEFINED__
typedef interface IMTSActivity IMTSActivity;
#endif
#ifndef __SecurityIdentity_FWD_DEFINED__
#define __SecurityIdentity_FWD_DEFINED__
typedef struct SecurityIdentity SecurityIdentity;
#endif
#ifndef __SecurityCallers_FWD_DEFINED__
#define __SecurityCallers_FWD_DEFINED__
typedef struct SecurityCallers SecurityCallers;
#endif
#ifndef __SecurityCallContext_FWD_DEFINED__
#define __SecurityCallContext_FWD_DEFINED__
typedef struct SecurityCallContext SecurityCallContext;
#endif
#ifndef __GetSecurityCallContextAppObject_FWD_DEFINED__
#define __GetSecurityCallContextAppObject_FWD_DEFINED__
typedef struct GetSecurityCallContextAppObject GetSecurityCallContextAppObject;
#endif
#ifndef __IContextState_FWD_DEFINED__
#define __IContextState_FWD_DEFINED__
typedef interface IContextState IContextState;
#endif
#ifndef __Dummy30040732_FWD_DEFINED__
#define __Dummy30040732_FWD_DEFINED__
typedef struct Dummy30040732 Dummy30040732;
#endif
#ifndef __ContextInfo_FWD_DEFINED__
#define __ContextInfo_FWD_DEFINED__
typedef interface ContextInfo ContextInfo;
#endif
#ifndef __ContextInfo2_FWD_DEFINED__
#define __ContextInfo2_FWD_DEFINED__
typedef interface ContextInfo2 ContextInfo2;
#endif
#ifndef __ObjectControl_FWD_DEFINED__
#define __ObjectControl_FWD_DEFINED__
typedef interface ObjectControl ObjectControl;
#endif
#ifndef __TransactionContext_FWD_DEFINED__
#define __TransactionContext_FWD_DEFINED__
typedef struct TransactionContext TransactionContext;
#endif
#ifndef __TransactionContextEx_FWD_DEFINED__
#define __TransactionContextEx_FWD_DEFINED__
typedef struct TransactionContextEx TransactionContextEx;
#endif
#ifndef __ByotServerEx_FWD_DEFINED__
#define __ByotServerEx_FWD_DEFINED__
typedef struct ByotServerEx ByotServerEx;
#endif
#ifndef __CServiceConfig_FWD_DEFINED__
#define __CServiceConfig_FWD_DEFINED__
typedef struct CServiceConfig CServiceConfig;
#endif
#ifndef __ServicePool_FWD_DEFINED__
#define __ServicePool_FWD_DEFINED__
typedef struct ServicePool ServicePool;
#endif
#ifndef __ServicePoolConfig_FWD_DEFINED__
#define __ServicePoolConfig_FWD_DEFINED__
typedef struct ServicePoolConfig ServicePoolConfig;
#endif
#ifndef __SharedProperty_FWD_DEFINED__
#define __SharedProperty_FWD_DEFINED__
typedef struct SharedProperty SharedProperty;
#endif
#ifndef __SharedPropertyGroup_FWD_DEFINED__
#define __SharedPropertyGroup_FWD_DEFINED__
typedef struct SharedPropertyGroup SharedPropertyGroup;
#endif
#ifndef __SharedPropertyGroupManager_FWD_DEFINED__
#define __SharedPropertyGroupManager_FWD_DEFINED__
typedef struct SharedPropertyGroupManager SharedPropertyGroupManager;
#endif
#ifndef __COMEvents_FWD_DEFINED__
#define __COMEvents_FWD_DEFINED__
typedef struct COMEvents COMEvents;
#endif
#ifndef __CoMTSLocator_FWD_DEFINED__
#define __CoMTSLocator_FWD_DEFINED__
typedef struct CoMTSLocator CoMTSLocator;
#endif
#ifndef __MtsGrp_FWD_DEFINED__
#define __MtsGrp_FWD_DEFINED__
typedef struct MtsGrp MtsGrp;
#endif
#ifndef __ComServiceEvents_FWD_DEFINED__
#define __ComServiceEvents_FWD_DEFINED__
typedef struct ComServiceEvents ComServiceEvents;
#endif
#ifndef __ComSystemAppEventData_FWD_DEFINED__
#define __ComSystemAppEventData_FWD_DEFINED__
typedef struct ComSystemAppEventData ComSystemAppEventData;
#endif
#ifndef __CRMClerk_FWD_DEFINED__
#define __CRMClerk_FWD_DEFINED__
typedef struct CRMClerk CRMClerk;
#endif
#ifndef __CRMRecoveryClerk_FWD_DEFINED__
#define __CRMRecoveryClerk_FWD_DEFINED__
typedef struct CRMRecoveryClerk CRMRecoveryClerk;
#endif
#ifndef __LBEvents_FWD_DEFINED__
#define __LBEvents_FWD_DEFINED__
typedef struct LBEvents LBEvents;
#endif
#ifndef __MessageMover_FWD_DEFINED__
#define __MessageMover_FWD_DEFINED__
typedef struct MessageMover MessageMover;
#endif
#ifndef __DispenserManager_FWD_DEFINED__
#define __DispenserManager_FWD_DEFINED__
typedef struct DispenserManager DispenserManager;
#endif
#ifndef __PoolMgr_FWD_DEFINED__
#define __PoolMgr_FWD_DEFINED__
typedef struct PoolMgr PoolMgr;
#endif
#ifndef __EventServer_FWD_DEFINED__
#define __EventServer_FWD_DEFINED__
typedef struct EventServer EventServer;
#endif
#ifndef __TrackerServer_FWD_DEFINED__
#define __TrackerServer_FWD_DEFINED__
typedef struct TrackerServer TrackerServer;
#endif
#ifndef __AppDomainHelper_FWD_DEFINED__
#define __AppDomainHelper_FWD_DEFINED__
typedef struct AppDomainHelper AppDomainHelper;
#endif
#ifndef __ClrAssemblyLocator_FWD_DEFINED__
#define __ClrAssemblyLocator_FWD_DEFINED__
typedef struct ClrAssemblyLocator ClrAssemblyLocator;
#endif
#include "unknwn.h"
#include "oaidl.h"
#include "ocidl.h"
#include "comadmin.h"
#include "transact.h"
#include "txdtc.h"
#include <objbase.h>
#ifndef DECLSPEC_UUID
#define DECLSPEC_UUID(x)
#endif
extern RPC_IF_HANDLE __MIDL_itf_autosvcs_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_autosvcs_0000_0000_v0_0_s_ifspec;
#ifndef __ISecurityIdentityColl_INTERFACE_DEFINED__
#define __ISecurityIdentityColl_INTERFACE_DEFINED__
extern const IID IID_ISecurityIdentityColl;
typedef struct ISecurityIdentityCollVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (ISecurityIdentityColl * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (ISecurityIdentityColl * This);
	ULONG(STDMETHODCALLTYPE * Release) (ISecurityIdentityColl * This);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfoCount) (ISecurityIdentityColl * This, UINT * pctinfo);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfo) (ISecurityIdentityColl * This, UINT iTInfo, LCID lcid, ITypeInfo ** ppTInfo);
	HRESULT(STDMETHODCALLTYPE * GetIDsOfNames) (ISecurityIdentityColl * This, REFIID riid, LPOLESTR * rgszNames, UINT cNames, LCID lcid, DISPID * rgDispId);
	HRESULT(STDMETHODCALLTYPE * Invoke) (ISecurityIdentityColl * This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS * pDispParams, VARIANT * pVarResult, EXCEPINFO * pExcepInfo, UINT * puArgErr);
	HRESULT(STDMETHODCALLTYPE * get_Count) (ISecurityIdentityColl * This, long *plCount);
	HRESULT(STDMETHODCALLTYPE * get_Item) (ISecurityIdentityColl * This, BSTR name, VARIANT * pItem);
	HRESULT(STDMETHODCALLTYPE * get__NewEnum) (ISecurityIdentityColl * This, IUnknown ** ppEnum);
	END_INTERFACE
}  ISecurityIdentityCollVtbl;
interface ISecurityIdentityColl
{
	CONST_VTBL struct ISecurityIdentityCollVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define ISecurityIdentityColl_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define ISecurityIdentityColl_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define ISecurityIdentityColl_Release(This)( (This)->lpVtbl -> Release(This) )
#define ISecurityIdentityColl_GetTypeInfoCount(This,pctinfo)( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define ISecurityIdentityColl_GetTypeInfo(This,iTInfo,lcid,ppTInfo)( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define ISecurityIdentityColl_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define ISecurityIdentityColl_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define ISecurityIdentityColl_get_Count(This,plCount)( (This)->lpVtbl -> get_Count(This,plCount) )
#define ISecurityIdentityColl_get_Item(This,name,pItem)( (This)->lpVtbl -> get_Item(This,name,pItem) )
#define ISecurityIdentityColl_get__NewEnum(This,ppEnum)( (This)->lpVtbl -> get__NewEnum(This,ppEnum) )
#endif
#endif
#ifndef __ISecurityCallersColl_INTERFACE_DEFINED__
#define __ISecurityCallersColl_INTERFACE_DEFINED__
extern const IID IID_ISecurityCallersColl;
typedef struct ISecurityCallersCollVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (ISecurityCallersColl * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (ISecurityCallersColl * This);
	ULONG(STDMETHODCALLTYPE * Release) (ISecurityCallersColl * This);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfoCount) (ISecurityCallersColl * This, UINT * pctinfo);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfo) (ISecurityCallersColl * This, UINT iTInfo, LCID lcid, ITypeInfo ** ppTInfo);
	HRESULT(STDMETHODCALLTYPE * GetIDsOfNames) (ISecurityCallersColl * This, REFIID riid, LPOLESTR * rgszNames, UINT cNames, LCID lcid, DISPID * rgDispId);
	HRESULT(STDMETHODCALLTYPE * Invoke) (ISecurityCallersColl * This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS * pDispParams, VARIANT * pVarResult, EXCEPINFO * pExcepInfo, UINT * puArgErr);
	HRESULT(STDMETHODCALLTYPE * get_Count) (ISecurityCallersColl * This, long *plCount);
	HRESULT(STDMETHODCALLTYPE * get_Item) (ISecurityCallersColl * This, long lIndex, ISecurityIdentityColl ** pObj);
	HRESULT(STDMETHODCALLTYPE * get__NewEnum) (ISecurityCallersColl * This, IUnknown ** ppEnum);
	END_INTERFACE
}  ISecurityCallersCollVtbl;
interface ISecurityCallersColl
{
	CONST_VTBL struct ISecurityCallersCollVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define ISecurityCallersColl_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define ISecurityCallersColl_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define ISecurityCallersColl_Release(This)( (This)->lpVtbl -> Release(This) )
#define ISecurityCallersColl_GetTypeInfoCount(This,pctinfo)( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define ISecurityCallersColl_GetTypeInfo(This,iTInfo,lcid,ppTInfo)( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define ISecurityCallersColl_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define ISecurityCallersColl_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define ISecurityCallersColl_get_Count(This,plCount)( (This)->lpVtbl -> get_Count(This,plCount) )
#define ISecurityCallersColl_get_Item(This,lIndex,pObj)( (This)->lpVtbl -> get_Item(This,lIndex,pObj) )
#define ISecurityCallersColl_get__NewEnum(This,ppEnum)( (This)->lpVtbl -> get__NewEnum(This,ppEnum) )
#endif
#endif
#ifndef __ISecurityCallContext_INTERFACE_DEFINED__
#define __ISecurityCallContext_INTERFACE_DEFINED__
extern const IID IID_ISecurityCallContext;
typedef struct ISecurityCallContextVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (ISecurityCallContext * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (ISecurityCallContext * This);
	ULONG(STDMETHODCALLTYPE * Release) (ISecurityCallContext * This);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfoCount) (ISecurityCallContext * This, UINT * pctinfo);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfo) (ISecurityCallContext * This, UINT iTInfo, LCID lcid, ITypeInfo ** ppTInfo);
	HRESULT(STDMETHODCALLTYPE * GetIDsOfNames) (ISecurityCallContext * This, REFIID riid, LPOLESTR * rgszNames, UINT cNames, LCID lcid, DISPID * rgDispId);
	HRESULT(STDMETHODCALLTYPE * Invoke) (ISecurityCallContext * This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS * pDispParams, VARIANT * pVarResult, EXCEPINFO * pExcepInfo, UINT * puArgErr);
	HRESULT(STDMETHODCALLTYPE * get_Count) (ISecurityCallContext * This, long *plCount);
	HRESULT(STDMETHODCALLTYPE * get_Item) (ISecurityCallContext * This, BSTR name, VARIANT * pItem);
	HRESULT(STDMETHODCALLTYPE * get__NewEnum) (ISecurityCallContext * This, IUnknown ** ppEnum);
	HRESULT(STDMETHODCALLTYPE * IsCallerInRole) (ISecurityCallContext * This, BSTR bstrRole, VARIANT_BOOL * pfInRole);
	HRESULT(STDMETHODCALLTYPE * IsSecurityEnabled) (ISecurityCallContext * This, VARIANT_BOOL * pfIsEnabled);
	HRESULT(STDMETHODCALLTYPE * IsUserInRole) (ISecurityCallContext * This, VARIANT * pUser, BSTR bstrRole, VARIANT_BOOL * pfInRole);
	END_INTERFACE
}  ISecurityCallContextVtbl;
interface ISecurityCallContext
{
	CONST_VTBL struct ISecurityCallContextVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define ISecurityCallContext_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define ISecurityCallContext_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define ISecurityCallContext_Release(This)( (This)->lpVtbl -> Release(This) )
#define ISecurityCallContext_GetTypeInfoCount(This,pctinfo)( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define ISecurityCallContext_GetTypeInfo(This,iTInfo,lcid,ppTInfo)( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define ISecurityCallContext_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define ISecurityCallContext_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define ISecurityCallContext_get_Count(This,plCount)( (This)->lpVtbl -> get_Count(This,plCount) )
#define ISecurityCallContext_get_Item(This,name,pItem)( (This)->lpVtbl -> get_Item(This,name,pItem) )
#define ISecurityCallContext_get__NewEnum(This,ppEnum)( (This)->lpVtbl -> get__NewEnum(This,ppEnum) )
#define ISecurityCallContext_IsCallerInRole(This,bstrRole,pfInRole)( (This)->lpVtbl -> IsCallerInRole(This,bstrRole,pfInRole) )
#define ISecurityCallContext_IsSecurityEnabled(This,pfIsEnabled)( (This)->lpVtbl -> IsSecurityEnabled(This,pfIsEnabled) )
#define ISecurityCallContext_IsUserInRole(This,pUser,bstrRole,pfInRole)( (This)->lpVtbl -> IsUserInRole(This,pUser,bstrRole,pfInRole) )
#endif
#endif
#ifndef __IGetSecurityCallContext_INTERFACE_DEFINED__
#define __IGetSecurityCallContext_INTERFACE_DEFINED__
extern const IID IID_IGetSecurityCallContext;
typedef struct IGetSecurityCallContextVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IGetSecurityCallContext * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IGetSecurityCallContext * This);
	ULONG(STDMETHODCALLTYPE * Release) (IGetSecurityCallContext * This);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfoCount) (IGetSecurityCallContext * This, UINT * pctinfo);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfo) (IGetSecurityCallContext * This, UINT iTInfo, LCID lcid, ITypeInfo ** ppTInfo);
	HRESULT(STDMETHODCALLTYPE * GetIDsOfNames) (IGetSecurityCallContext * This, REFIID riid, LPOLESTR * rgszNames, UINT cNames, LCID lcid, DISPID * rgDispId);
	HRESULT(STDMETHODCALLTYPE * Invoke) (IGetSecurityCallContext * This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS * pDispParams, VARIANT * pVarResult, EXCEPINFO * pExcepInfo, UINT * puArgErr);
	HRESULT(STDMETHODCALLTYPE * GetSecurityCallContext) (IGetSecurityCallContext * This, ISecurityCallContext ** ppObject);
	END_INTERFACE
}  IGetSecurityCallContextVtbl;
interface IGetSecurityCallContext
{
	CONST_VTBL struct IGetSecurityCallContextVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IGetSecurityCallContext_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IGetSecurityCallContext_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define IGetSecurityCallContext_Release(This)( (This)->lpVtbl -> Release(This) )
#define IGetSecurityCallContext_GetTypeInfoCount(This,pctinfo)( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define IGetSecurityCallContext_GetTypeInfo(This,iTInfo,lcid,ppTInfo)( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define IGetSecurityCallContext_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define IGetSecurityCallContext_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define IGetSecurityCallContext_GetSecurityCallContext(This,ppObject)( (This)->lpVtbl -> GetSecurityCallContext(This,ppObject) )
#endif
#endif
#ifndef __SecurityProperty_INTERFACE_DEFINED__
#define __SecurityProperty_INTERFACE_DEFINED__
extern const IID IID_SecurityProperty;
typedef struct SecurityPropertyVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (SecurityProperty * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (SecurityProperty * This);
	ULONG(STDMETHODCALLTYPE * Release) (SecurityProperty * This);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfoCount) (SecurityProperty * This, UINT * pctinfo);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfo) (SecurityProperty * This, UINT iTInfo, LCID lcid, ITypeInfo ** ppTInfo);
	HRESULT(STDMETHODCALLTYPE * GetIDsOfNames) (SecurityProperty * This, REFIID riid, LPOLESTR * rgszNames, UINT cNames, LCID lcid, DISPID * rgDispId);
	HRESULT(STDMETHODCALLTYPE * Invoke) (SecurityProperty * This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS * pDispParams, VARIANT * pVarResult, EXCEPINFO * pExcepInfo, UINT * puArgErr);
	HRESULT(STDMETHODCALLTYPE * GetDirectCallerName) (SecurityProperty * This, BSTR * bstrUserName);
	HRESULT(STDMETHODCALLTYPE * GetDirectCreatorName) (SecurityProperty * This, BSTR * bstrUserName);
	HRESULT(STDMETHODCALLTYPE * GetOriginalCallerName) (SecurityProperty * This, BSTR * bstrUserName);
	HRESULT(STDMETHODCALLTYPE * GetOriginalCreatorName) (SecurityProperty * This, BSTR * bstrUserName);
	END_INTERFACE
}  SecurityPropertyVtbl;
interface SecurityProperty
{
	CONST_VTBL struct SecurityPropertyVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define SecurityProperty_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define SecurityProperty_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define SecurityProperty_Release(This)( (This)->lpVtbl -> Release(This) )
#define SecurityProperty_GetTypeInfoCount(This,pctinfo)( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define SecurityProperty_GetTypeInfo(This,iTInfo,lcid,ppTInfo)( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define SecurityProperty_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define SecurityProperty_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define SecurityProperty_GetDirectCallerName(This,bstrUserName)( (This)->lpVtbl -> GetDirectCallerName(This,bstrUserName) )
#define SecurityProperty_GetDirectCreatorName(This,bstrUserName)( (This)->lpVtbl -> GetDirectCreatorName(This,bstrUserName) )
#define SecurityProperty_GetOriginalCallerName(This,bstrUserName)( (This)->lpVtbl -> GetOriginalCallerName(This,bstrUserName) )
#define SecurityProperty_GetOriginalCreatorName(This,bstrUserName)( (This)->lpVtbl -> GetOriginalCreatorName(This,bstrUserName) )
#endif
#endif
#ifndef __ContextInfo_INTERFACE_DEFINED__
#define __ContextInfo_INTERFACE_DEFINED__
extern const IID IID_ContextInfo;
typedef struct ContextInfoVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (ContextInfo * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (ContextInfo * This);
	ULONG(STDMETHODCALLTYPE * Release) (ContextInfo * This);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfoCount) (ContextInfo * This, UINT * pctinfo);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfo) (ContextInfo * This, UINT iTInfo, LCID lcid, ITypeInfo ** ppTInfo);
	HRESULT(STDMETHODCALLTYPE * GetIDsOfNames) (ContextInfo * This, REFIID riid, LPOLESTR * rgszNames, UINT cNames, LCID lcid, DISPID * rgDispId);
	HRESULT(STDMETHODCALLTYPE * Invoke) (ContextInfo * This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS * pDispParams, VARIANT * pVarResult, EXCEPINFO * pExcepInfo, UINT * puArgErr);
	HRESULT(STDMETHODCALLTYPE * IsInTransaction) (ContextInfo * This, VARIANT_BOOL * pbIsInTx);
	HRESULT(STDMETHODCALLTYPE * GetTransaction) (ContextInfo * This, IUnknown ** ppTx);
	HRESULT(STDMETHODCALLTYPE * GetTransactionId) (ContextInfo * This, BSTR * pbstrTxId);
	HRESULT(STDMETHODCALLTYPE * GetActivityId) (ContextInfo * This, BSTR * pbstrActivityId);
	HRESULT(STDMETHODCALLTYPE * GetContextId) (ContextInfo * This, BSTR * pbstrCtxId);
	END_INTERFACE
}  ContextInfoVtbl;
interface ContextInfo
{
	CONST_VTBL struct ContextInfoVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define ContextInfo_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define ContextInfo_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define ContextInfo_Release(This)( (This)->lpVtbl -> Release(This) )
#define ContextInfo_GetTypeInfoCount(This,pctinfo)( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define ContextInfo_GetTypeInfo(This,iTInfo,lcid,ppTInfo)( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define ContextInfo_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define ContextInfo_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define ContextInfo_IsInTransaction(This,pbIsInTx)( (This)->lpVtbl -> IsInTransaction(This,pbIsInTx) )
#define ContextInfo_GetTransaction(This,ppTx)( (This)->lpVtbl -> GetTransaction(This,ppTx) )
#define ContextInfo_GetTransactionId(This,pbstrTxId)( (This)->lpVtbl -> GetTransactionId(This,pbstrTxId) )
#define ContextInfo_GetActivityId(This,pbstrActivityId)( (This)->lpVtbl -> GetActivityId(This,pbstrActivityId) )
#define ContextInfo_GetContextId(This,pbstrCtxId)( (This)->lpVtbl -> GetContextId(This,pbstrCtxId) )
#endif
#endif
#ifndef __ContextInfo2_INTERFACE_DEFINED__
#define __ContextInfo2_INTERFACE_DEFINED__
extern const IID IID_ContextInfo2;
typedef struct ContextInfo2Vtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (ContextInfo2 * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (ContextInfo2 * This);
	ULONG(STDMETHODCALLTYPE * Release) (ContextInfo2 * This);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfoCount) (ContextInfo2 * This, UINT * pctinfo);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfo) (ContextInfo2 * This, UINT iTInfo, LCID lcid, ITypeInfo ** ppTInfo);
	HRESULT(STDMETHODCALLTYPE * GetIDsOfNames) (ContextInfo2 * This, REFIID riid, LPOLESTR * rgszNames, UINT cNames, LCID lcid, DISPID * rgDispId);
	HRESULT(STDMETHODCALLTYPE * Invoke) (ContextInfo2 * This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS * pDispParams, VARIANT * pVarResult, EXCEPINFO * pExcepInfo, UINT * puArgErr);
	HRESULT(STDMETHODCALLTYPE * IsInTransaction) (ContextInfo2 * This, VARIANT_BOOL * pbIsInTx);
	HRESULT(STDMETHODCALLTYPE * GetTransaction) (ContextInfo2 * This, IUnknown ** ppTx);
	HRESULT(STDMETHODCALLTYPE * GetTransactionId) (ContextInfo2 * This, BSTR * pbstrTxId);
	HRESULT(STDMETHODCALLTYPE * GetActivityId) (ContextInfo2 * This, BSTR * pbstrActivityId);
	HRESULT(STDMETHODCALLTYPE * GetContextId) (ContextInfo2 * This, BSTR * pbstrCtxId);
	HRESULT(STDMETHODCALLTYPE * GetPartitionId) (ContextInfo2 * This, BSTR * __MIDL__ContextInfo20000);
	HRESULT(STDMETHODCALLTYPE * GetApplicationId) (ContextInfo2 * This, BSTR * __MIDL__ContextInfo20001);
	HRESULT(STDMETHODCALLTYPE * GetApplicationInstanceId) (ContextInfo2 * This, BSTR * __MIDL__ContextInfo20002);
	END_INTERFACE
}  ContextInfo2Vtbl;
interface ContextInfo2
{
	CONST_VTBL struct ContextInfo2Vtbl *lpVtbl;
};
#ifdef COBJMACROS
#define ContextInfo2_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define ContextInfo2_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define ContextInfo2_Release(This)( (This)->lpVtbl -> Release(This) )
#define ContextInfo2_GetTypeInfoCount(This,pctinfo)( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define ContextInfo2_GetTypeInfo(This,iTInfo,lcid,ppTInfo)( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define ContextInfo2_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define ContextInfo2_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define ContextInfo2_IsInTransaction(This,pbIsInTx)( (This)->lpVtbl -> IsInTransaction(This,pbIsInTx) )
#define ContextInfo2_GetTransaction(This,ppTx)( (This)->lpVtbl -> GetTransaction(This,ppTx) )
#define ContextInfo2_GetTransactionId(This,pbstrTxId)( (This)->lpVtbl -> GetTransactionId(This,pbstrTxId) )
#define ContextInfo2_GetActivityId(This,pbstrActivityId)( (This)->lpVtbl -> GetActivityId(This,pbstrActivityId) )
#define ContextInfo2_GetContextId(This,pbstrCtxId)( (This)->lpVtbl -> GetContextId(This,pbstrCtxId) )
#define ContextInfo2_GetPartitionId(This,__MIDL__ContextInfo20000)( (This)->lpVtbl -> GetPartitionId(This,__MIDL__ContextInfo20000) )
#define ContextInfo2_GetApplicationId(This,__MIDL__ContextInfo20001)( (This)->lpVtbl -> GetApplicationId(This,__MIDL__ContextInfo20001) )
#define ContextInfo2_GetApplicationInstanceId(This,__MIDL__ContextInfo20002)( (This)->lpVtbl -> GetApplicationInstanceId(This,__MIDL__ContextInfo20002) )
#endif
#endif
#ifndef __ObjectContext_INTERFACE_DEFINED__
#define __ObjectContext_INTERFACE_DEFINED__
extern const IID IID_ObjectContext;
typedef struct ObjectContextVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (ObjectContext * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (ObjectContext * This);
	ULONG(STDMETHODCALLTYPE * Release) (ObjectContext * This);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfoCount) (ObjectContext * This, UINT * pctinfo);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfo) (ObjectContext * This, UINT iTInfo, LCID lcid, ITypeInfo ** ppTInfo);
	HRESULT(STDMETHODCALLTYPE * GetIDsOfNames) (ObjectContext * This, REFIID riid, LPOLESTR * rgszNames, UINT cNames, LCID lcid, DISPID * rgDispId);
	HRESULT(STDMETHODCALLTYPE * Invoke) (ObjectContext * This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS * pDispParams, VARIANT * pVarResult, EXCEPINFO * pExcepInfo, UINT * puArgErr);
	HRESULT(STDMETHODCALLTYPE * CreateInstance) (ObjectContext * This, BSTR bstrProgID, VARIANT * pObject);
	HRESULT(STDMETHODCALLTYPE * SetComplete) (ObjectContext * This);
	HRESULT(STDMETHODCALLTYPE * SetAbort) (ObjectContext * This);
	HRESULT(STDMETHODCALLTYPE * EnableCommit) (ObjectContext * This);
	HRESULT(STDMETHODCALLTYPE * DisableCommit) (ObjectContext * This);
	HRESULT(STDMETHODCALLTYPE * IsInTransaction) (ObjectContext * This, VARIANT_BOOL * pbIsInTx);
	HRESULT(STDMETHODCALLTYPE * IsSecurityEnabled) (ObjectContext * This, VARIANT_BOOL * pbIsEnabled);
	HRESULT(STDMETHODCALLTYPE * IsCallerInRole) (ObjectContext * This, BSTR bstrRole, VARIANT_BOOL * pbInRole);
	HRESULT(STDMETHODCALLTYPE * get_Count) (ObjectContext * This, long *plCount);
	HRESULT(STDMETHODCALLTYPE * get_Item) (ObjectContext * This, BSTR name, VARIANT * pItem);
	HRESULT(STDMETHODCALLTYPE * get__NewEnum) (ObjectContext * This, IUnknown ** ppEnum);
	HRESULT(STDMETHODCALLTYPE * get_Security) (ObjectContext * This, SecurityProperty ** ppSecurityProperty);
	HRESULT(STDMETHODCALLTYPE * get_ContextInfo) (ObjectContext * This, ContextInfo ** ppContextInfo);
	END_INTERFACE
}  ObjectContextVtbl;
interface ObjectContext
{
	CONST_VTBL struct ObjectContextVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define ObjectContext_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define ObjectContext_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define ObjectContext_Release(This)( (This)->lpVtbl -> Release(This) )
#define ObjectContext_GetTypeInfoCount(This,pctinfo)( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define ObjectContext_GetTypeInfo(This,iTInfo,lcid,ppTInfo)( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define ObjectContext_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define ObjectContext_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define ObjectContext_CreateInstance(This,bstrProgID,pObject)( (This)->lpVtbl -> CreateInstance(This,bstrProgID,pObject) )
#define ObjectContext_SetComplete(This)( (This)->lpVtbl -> SetComplete(This) )
#define ObjectContext_SetAbort(This)( (This)->lpVtbl -> SetAbort(This) )
#define ObjectContext_EnableCommit(This)( (This)->lpVtbl -> EnableCommit(This) )
#define ObjectContext_DisableCommit(This)( (This)->lpVtbl -> DisableCommit(This) )
#define ObjectContext_IsInTransaction(This,pbIsInTx)( (This)->lpVtbl -> IsInTransaction(This,pbIsInTx) )
#define ObjectContext_IsSecurityEnabled(This,pbIsEnabled)( (This)->lpVtbl -> IsSecurityEnabled(This,pbIsEnabled) )
#define ObjectContext_IsCallerInRole(This,bstrRole,pbInRole)( (This)->lpVtbl -> IsCallerInRole(This,bstrRole,pbInRole) )
#define ObjectContext_get_Count(This,plCount)( (This)->lpVtbl -> get_Count(This,plCount) )
#define ObjectContext_get_Item(This,name,pItem)( (This)->lpVtbl -> get_Item(This,name,pItem) )
#define ObjectContext_get__NewEnum(This,ppEnum)( (This)->lpVtbl -> get__NewEnum(This,ppEnum) )
#define ObjectContext_get_Security(This,ppSecurityProperty)( (This)->lpVtbl -> get_Security(This,ppSecurityProperty) )
#define ObjectContext_get_ContextInfo(This,ppContextInfo)( (This)->lpVtbl -> get_ContextInfo(This,ppContextInfo) )
#endif
#endif
#ifndef __ITransactionContextEx_INTERFACE_DEFINED__
#define __ITransactionContextEx_INTERFACE_DEFINED__
extern const IID IID_ITransactionContextEx;
typedef struct ITransactionContextExVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (ITransactionContextEx * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (ITransactionContextEx * This);
	ULONG(STDMETHODCALLTYPE * Release) (ITransactionContextEx * This);
	HRESULT(STDMETHODCALLTYPE * CreateInstance) (ITransactionContextEx * This, REFCLSID rclsid, REFIID riid, void **pObject);
	HRESULT(STDMETHODCALLTYPE * Commit) (ITransactionContextEx * This);
	HRESULT(STDMETHODCALLTYPE * Abort) (ITransactionContextEx * This);
	END_INTERFACE
}  ITransactionContextExVtbl;
interface ITransactionContextEx
{
	CONST_VTBL struct ITransactionContextExVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define ITransactionContextEx_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define ITransactionContextEx_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define ITransactionContextEx_Release(This)( (This)->lpVtbl -> Release(This) )
#define ITransactionContextEx_CreateInstance(This,rclsid,riid,pObject)( (This)->lpVtbl -> CreateInstance(This,rclsid,riid,pObject) )
#define ITransactionContextEx_Commit(This)( (This)->lpVtbl -> Commit(This) )
#define ITransactionContextEx_Abort(This)( (This)->lpVtbl -> Abort(This) )
#endif
#endif
#ifndef __ITransactionContext_INTERFACE_DEFINED__
#define __ITransactionContext_INTERFACE_DEFINED__
extern const IID IID_ITransactionContext;
typedef struct ITransactionContextVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (ITransactionContext * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (ITransactionContext * This);
	ULONG(STDMETHODCALLTYPE * Release) (ITransactionContext * This);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfoCount) (ITransactionContext * This, UINT * pctinfo);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfo) (ITransactionContext * This, UINT iTInfo, LCID lcid, ITypeInfo ** ppTInfo);
	HRESULT(STDMETHODCALLTYPE * GetIDsOfNames) (ITransactionContext * This, REFIID riid, LPOLESTR * rgszNames, UINT cNames, LCID lcid, DISPID * rgDispId);
	HRESULT(STDMETHODCALLTYPE * Invoke) (ITransactionContext * This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS * pDispParams, VARIANT * pVarResult, EXCEPINFO * pExcepInfo, UINT * puArgErr);
	HRESULT(STDMETHODCALLTYPE * CreateInstance) (ITransactionContext * This, BSTR pszProgId, VARIANT * pObject);
	HRESULT(STDMETHODCALLTYPE * Commit) (ITransactionContext * This);
	HRESULT(STDMETHODCALLTYPE * Abort) (ITransactionContext * This);
	END_INTERFACE
}  ITransactionContextVtbl;
interface ITransactionContext
{
	CONST_VTBL struct ITransactionContextVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define ITransactionContext_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define ITransactionContext_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define ITransactionContext_Release(This)( (This)->lpVtbl -> Release(This) )
#define ITransactionContext_GetTypeInfoCount(This,pctinfo)( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define ITransactionContext_GetTypeInfo(This,iTInfo,lcid,ppTInfo)( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define ITransactionContext_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define ITransactionContext_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define ITransactionContext_CreateInstance(This,pszProgId,pObject)( (This)->lpVtbl -> CreateInstance(This,pszProgId,pObject) )
#define ITransactionContext_Commit(This)( (This)->lpVtbl -> Commit(This) )
#define ITransactionContext_Abort(This)( (This)->lpVtbl -> Abort(This) )
#endif
#endif
#ifndef __ICreateWithTransactionEx_INTERFACE_DEFINED__
#define __ICreateWithTransactionEx_INTERFACE_DEFINED__
extern const IID IID_ICreateWithTransactionEx;
typedef struct ICreateWithTransactionExVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (ICreateWithTransactionEx * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (ICreateWithTransactionEx * This);
	ULONG(STDMETHODCALLTYPE * Release) (ICreateWithTransactionEx * This);
	HRESULT(STDMETHODCALLTYPE * CreateInstance) (ICreateWithTransactionEx * This, ITransaction * pTransaction, REFCLSID rclsid, REFIID riid, void **pObject);
	END_INTERFACE
}  ICreateWithTransactionExVtbl;
interface ICreateWithTransactionEx
{
	CONST_VTBL struct ICreateWithTransactionExVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define ICreateWithTransactionEx_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define ICreateWithTransactionEx_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define ICreateWithTransactionEx_Release(This)( (This)->lpVtbl -> Release(This) )
#define ICreateWithTransactionEx_CreateInstance(This,pTransaction,rclsid,riid,pObject)( (This)->lpVtbl -> CreateInstance(This,pTransaction,rclsid,riid,pObject) )
#endif
#endif
#ifndef __ICreateWithLocalTransaction_INTERFACE_DEFINED__
#define __ICreateWithLocalTransaction_INTERFACE_DEFINED__
extern const IID IID_ICreateWithLocalTransaction;
typedef struct ICreateWithLocalTransactionVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (ICreateWithLocalTransaction * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (ICreateWithLocalTransaction * This);
	ULONG(STDMETHODCALLTYPE * Release) (ICreateWithLocalTransaction * This);
	HRESULT(STDMETHODCALLTYPE * CreateInstanceWithSysTx) (ICreateWithLocalTransaction * This, IUnknown * pTransaction, REFCLSID rclsid, REFIID riid, void **pObject);
	END_INTERFACE
}  ICreateWithLocalTransactionVtbl;
interface ICreateWithLocalTransaction
{
	CONST_VTBL struct ICreateWithLocalTransactionVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define ICreateWithLocalTransaction_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define ICreateWithLocalTransaction_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define ICreateWithLocalTransaction_Release(This)( (This)->lpVtbl -> Release(This) )
#define ICreateWithLocalTransaction_CreateInstanceWithSysTx(This,pTransaction,rclsid,riid,pObject)( (This)->lpVtbl -> CreateInstanceWithSysTx(This,pTransaction,rclsid,riid,pObject) )
#endif
#endif
#ifndef __ICreateWithTipTransactionEx_INTERFACE_DEFINED__
#define __ICreateWithTipTransactionEx_INTERFACE_DEFINED__
extern const IID IID_ICreateWithTipTransactionEx;
typedef struct ICreateWithTipTransactionExVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (ICreateWithTipTransactionEx * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (ICreateWithTipTransactionEx * This);
	ULONG(STDMETHODCALLTYPE * Release) (ICreateWithTipTransactionEx * This);
	HRESULT(STDMETHODCALLTYPE * CreateInstance) (ICreateWithTipTransactionEx * This, BSTR bstrTipUrl, REFCLSID rclsid, REFIID riid, void **pObject);
	END_INTERFACE
}  ICreateWithTipTransactionExVtbl;
interface ICreateWithTipTransactionEx
{
	CONST_VTBL struct ICreateWithTipTransactionExVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define ICreateWithTipTransactionEx_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define ICreateWithTipTransactionEx_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define ICreateWithTipTransactionEx_Release(This)( (This)->lpVtbl -> Release(This) )
#define ICreateWithTipTransactionEx_CreateInstance(This,bstrTipUrl,rclsid,riid,pObject)( (This)->lpVtbl -> CreateInstance(This,bstrTipUrl,rclsid,riid,pObject) )
#endif
#endif
#pragma deprecated (ICreateWithTipTransactionEx)
typedef unsigned __int64 MTS_OBJID;
typedef unsigned __int64 MTS_RESID;
typedef unsigned __int64 ULONG64;
#ifndef _COMSVCSEVENTINFO_
#define _COMSVCSEVENTINFO_
typedef struct __MIDL___MIDL_itf_autosvcs_0000_0013_0001
{
	DWORD cbSize;
	DWORD dwPid;
	LONGLONG lTime;
	LONG lMicroTime;
	LONGLONG perfCount;
	GUID guidApp;
	LPOLESTR sMachineName;
} COMSVCSEVENTINFO;
#endif /* _COMSVCSEVENTINFO_ */
extern RPC_IF_HANDLE __MIDL_itf_autosvcs_0000_0013_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_autosvcs_0000_0013_v0_0_s_ifspec;
#ifndef __IComLTxEvents_INTERFACE_DEFINED__
#define __IComLTxEvents_INTERFACE_DEFINED__
extern const IID IID_IComLTxEvents;
typedef struct IComLTxEventsVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IComLTxEvents * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IComLTxEvents * This);
	ULONG(STDMETHODCALLTYPE * Release) (IComLTxEvents * This);
	HRESULT(STDMETHODCALLTYPE * OnLtxTransactionStart) (IComLTxEvents * This, COMSVCSEVENTINFO * pInfo, GUID guidLtx, GUID tsid, BOOL fRoot, int nIsolationLevel);
	HRESULT(STDMETHODCALLTYPE * OnLtxTransactionPrepare) (IComLTxEvents * This, COMSVCSEVENTINFO * pInfo, GUID guidLtx, BOOL fVote);
	HRESULT(STDMETHODCALLTYPE * OnLtxTransactionAbort) (IComLTxEvents * This, COMSVCSEVENTINFO * pInfo, GUID guidLtx);
	HRESULT(STDMETHODCALLTYPE * OnLtxTransactionCommit) (IComLTxEvents * This, COMSVCSEVENTINFO * pInfo, GUID guidLtx);
	HRESULT(STDMETHODCALLTYPE * OnLtxTransactionPromote) (IComLTxEvents * This, COMSVCSEVENTINFO * pInfo, GUID guidLtx, GUID txnId);
	END_INTERFACE
}  IComLTxEventsVtbl;
interface IComLTxEvents
{
	CONST_VTBL struct IComLTxEventsVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IComLTxEvents_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IComLTxEvents_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define IComLTxEvents_Release(This)( (This)->lpVtbl -> Release(This) )
#define IComLTxEvents_OnLtxTransactionStart(This,pInfo,guidLtx,tsid,fRoot,nIsolationLevel)( (This)->lpVtbl -> OnLtxTransactionStart(This,pInfo,guidLtx,tsid,fRoot,nIsolationLevel) )
#define IComLTxEvents_OnLtxTransactionPrepare(This,pInfo,guidLtx,fVote)( (This)->lpVtbl -> OnLtxTransactionPrepare(This,pInfo,guidLtx,fVote) )
#define IComLTxEvents_OnLtxTransactionAbort(This,pInfo,guidLtx)( (This)->lpVtbl -> OnLtxTransactionAbort(This,pInfo,guidLtx) )
#define IComLTxEvents_OnLtxTransactionCommit(This,pInfo,guidLtx)( (This)->lpVtbl -> OnLtxTransactionCommit(This,pInfo,guidLtx) )
#define IComLTxEvents_OnLtxTransactionPromote(This,pInfo,guidLtx,txnId)( (This)->lpVtbl -> OnLtxTransactionPromote(This,pInfo,guidLtx,txnId) )
#endif
#endif
#ifndef __IComUserEvent_INTERFACE_DEFINED__
#define __IComUserEvent_INTERFACE_DEFINED__
extern const IID IID_IComUserEvent;
typedef struct IComUserEventVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IComUserEvent * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IComUserEvent * This);
	ULONG(STDMETHODCALLTYPE * Release) (IComUserEvent * This);
	HRESULT(STDMETHODCALLTYPE * OnUserEvent) (IComUserEvent * This, COMSVCSEVENTINFO * pInfo, VARIANT * pvarEvent);
	END_INTERFACE
}  IComUserEventVtbl;
interface IComUserEvent
{
	CONST_VTBL struct IComUserEventVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IComUserEvent_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IComUserEvent_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define IComUserEvent_Release(This)( (This)->lpVtbl -> Release(This) )
#define IComUserEvent_OnUserEvent(This,pInfo,pvarEvent)( (This)->lpVtbl -> OnUserEvent(This,pInfo,pvarEvent) )
#endif
#endif
#ifndef __IComThreadEvents_INTERFACE_DEFINED__
#define __IComThreadEvents_INTERFACE_DEFINED__
extern const IID IID_IComThreadEvents;
typedef struct IComThreadEventsVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IComThreadEvents * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IComThreadEvents * This);
	ULONG(STDMETHODCALLTYPE * Release) (IComThreadEvents * This);
	HRESULT(STDMETHODCALLTYPE * OnThreadStart) (IComThreadEvents * This, COMSVCSEVENTINFO * pInfo, ULONG64 ThreadID, DWORD dwThread, DWORD dwTheadCnt);
	HRESULT(STDMETHODCALLTYPE * OnThreadTerminate) (IComThreadEvents * This, COMSVCSEVENTINFO * pInfo, ULONG64 ThreadID, DWORD dwThread, DWORD dwTheadCnt);
	HRESULT(STDMETHODCALLTYPE * OnThreadBindToApartment) (IComThreadEvents * This, COMSVCSEVENTINFO * pInfo, ULONG64 ThreadID, ULONG64 AptID, DWORD dwActCnt, DWORD dwLowCnt);
	HRESULT(STDMETHODCALLTYPE * OnThreadUnBind) (IComThreadEvents * This, COMSVCSEVENTINFO * pInfo, ULONG64 ThreadID, ULONG64 AptID, DWORD dwActCnt);
	HRESULT(STDMETHODCALLTYPE * OnThreadWorkEnque) (IComThreadEvents * This, COMSVCSEVENTINFO * pInfo, ULONG64 ThreadID, ULONG64 MsgWorkID, DWORD QueueLen);
	HRESULT(STDMETHODCALLTYPE * OnThreadWorkPrivate) (IComThreadEvents * This, COMSVCSEVENTINFO * pInfo, ULONG64 ThreadID, ULONG64 MsgWorkID);
	HRESULT(STDMETHODCALLTYPE * OnThreadWorkPublic) (IComThreadEvents * This, COMSVCSEVENTINFO * pInfo, ULONG64 ThreadID, ULONG64 MsgWorkID, DWORD QueueLen);
	HRESULT(STDMETHODCALLTYPE * OnThreadWorkRedirect) (IComThreadEvents * This, COMSVCSEVENTINFO * pInfo, ULONG64 ThreadID, ULONG64 MsgWorkID, DWORD QueueLen, ULONG64 ThreadNum);
	HRESULT(STDMETHODCALLTYPE * OnThreadWorkReject) (IComThreadEvents * This, COMSVCSEVENTINFO * pInfo, ULONG64 ThreadID, ULONG64 MsgWorkID, DWORD QueueLen);
	HRESULT(STDMETHODCALLTYPE * OnThreadAssignApartment) (IComThreadEvents * This, COMSVCSEVENTINFO * pInfo, REFGUID guidActivity, ULONG64 AptID);
	HRESULT(STDMETHODCALLTYPE * OnThreadUnassignApartment) (IComThreadEvents * This, COMSVCSEVENTINFO * pInfo, ULONG64 AptID);
	END_INTERFACE
}  IComThreadEventsVtbl;
interface IComThreadEvents
{
	CONST_VTBL struct IComThreadEventsVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IComThreadEvents_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IComThreadEvents_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define IComThreadEvents_Release(This)( (This)->lpVtbl -> Release(This) )
#define IComThreadEvents_OnThreadStart(This,pInfo,ThreadID,dwThread,dwTheadCnt)( (This)->lpVtbl -> OnThreadStart(This,pInfo,ThreadID,dwThread,dwTheadCnt) )
#define IComThreadEvents_OnThreadTerminate(This,pInfo,ThreadID,dwThread,dwTheadCnt)( (This)->lpVtbl -> OnThreadTerminate(This,pInfo,ThreadID,dwThread,dwTheadCnt) )
#define IComThreadEvents_OnThreadBindToApartment(This,pInfo,ThreadID,AptID,dwActCnt,dwLowCnt)( (This)->lpVtbl -> OnThreadBindToApartment(This,pInfo,ThreadID,AptID,dwActCnt,dwLowCnt) )
#define IComThreadEvents_OnThreadUnBind(This,pInfo,ThreadID,AptID,dwActCnt)( (This)->lpVtbl -> OnThreadUnBind(This,pInfo,ThreadID,AptID,dwActCnt) )
#define IComThreadEvents_OnThreadWorkEnque(This,pInfo,ThreadID,MsgWorkID,QueueLen)( (This)->lpVtbl -> OnThreadWorkEnque(This,pInfo,ThreadID,MsgWorkID,QueueLen) )
#define IComThreadEvents_OnThreadWorkPrivate(This,pInfo,ThreadID,MsgWorkID)( (This)->lpVtbl -> OnThreadWorkPrivate(This,pInfo,ThreadID,MsgWorkID) )
#define IComThreadEvents_OnThreadWorkPublic(This,pInfo,ThreadID,MsgWorkID,QueueLen)( (This)->lpVtbl -> OnThreadWorkPublic(This,pInfo,ThreadID,MsgWorkID,QueueLen) )
#define IComThreadEvents_OnThreadWorkRedirect(This,pInfo,ThreadID,MsgWorkID,QueueLen,ThreadNum)( (This)->lpVtbl -> OnThreadWorkRedirect(This,pInfo,ThreadID,MsgWorkID,QueueLen,ThreadNum) )
#define IComThreadEvents_OnThreadWorkReject(This,pInfo,ThreadID,MsgWorkID,QueueLen)( (This)->lpVtbl -> OnThreadWorkReject(This,pInfo,ThreadID,MsgWorkID,QueueLen) )
#define IComThreadEvents_OnThreadAssignApartment(This,pInfo,guidActivity,AptID)( (This)->lpVtbl -> OnThreadAssignApartment(This,pInfo,guidActivity,AptID) )
#define IComThreadEvents_OnThreadUnassignApartment(This,pInfo,AptID)( (This)->lpVtbl -> OnThreadUnassignApartment(This,pInfo,AptID) )
#endif
#endif
#ifndef __IComAppEvents_INTERFACE_DEFINED__
#define __IComAppEvents_INTERFACE_DEFINED__
extern const IID IID_IComAppEvents;
typedef struct IComAppEventsVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IComAppEvents * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IComAppEvents * This);
	ULONG(STDMETHODCALLTYPE * Release) (IComAppEvents * This);
	HRESULT(STDMETHODCALLTYPE * OnAppActivation) (IComAppEvents * This, COMSVCSEVENTINFO * pInfo, GUID guidApp);
	HRESULT(STDMETHODCALLTYPE * OnAppShutdown) (IComAppEvents * This, COMSVCSEVENTINFO * pInfo, GUID guidApp);
	HRESULT(STDMETHODCALLTYPE * OnAppForceShutdown) (IComAppEvents * This, COMSVCSEVENTINFO * pInfo, GUID guidApp);
	END_INTERFACE
}  IComAppEventsVtbl;
interface IComAppEvents
{
	CONST_VTBL struct IComAppEventsVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IComAppEvents_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IComAppEvents_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define IComAppEvents_Release(This)( (This)->lpVtbl -> Release(This) )
#define IComAppEvents_OnAppActivation(This,pInfo,guidApp)( (This)->lpVtbl -> OnAppActivation(This,pInfo,guidApp) )
#define IComAppEvents_OnAppShutdown(This,pInfo,guidApp)( (This)->lpVtbl -> OnAppShutdown(This,pInfo,guidApp) )
#define IComAppEvents_OnAppForceShutdown(This,pInfo,guidApp)( (This)->lpVtbl -> OnAppForceShutdown(This,pInfo,guidApp) )
#endif
#endif
#ifndef __IComInstanceEvents_INTERFACE_DEFINED__
#define __IComInstanceEvents_INTERFACE_DEFINED__
extern const IID IID_IComInstanceEvents;
typedef struct IComInstanceEventsVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IComInstanceEvents * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IComInstanceEvents * This);
	ULONG(STDMETHODCALLTYPE * Release) (IComInstanceEvents * This);
	HRESULT(STDMETHODCALLTYPE * OnObjectCreate) (IComInstanceEvents * This, COMSVCSEVENTINFO * pInfo, REFGUID guidActivity, REFCLSID clsid, REFGUID tsid, ULONG64 CtxtID, ULONG64 ObjectID);
	HRESULT(STDMETHODCALLTYPE * OnObjectDestroy) (IComInstanceEvents * This, COMSVCSEVENTINFO * pInfo, ULONG64 CtxtID);
	END_INTERFACE
}  IComInstanceEventsVtbl;
interface IComInstanceEvents
{
	CONST_VTBL struct IComInstanceEventsVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IComInstanceEvents_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IComInstanceEvents_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define IComInstanceEvents_Release(This)( (This)->lpVtbl -> Release(This) )
#define IComInstanceEvents_OnObjectCreate(This,pInfo,guidActivity,clsid,tsid,CtxtID,ObjectID)( (This)->lpVtbl -> OnObjectCreate(This,pInfo,guidActivity,clsid,tsid,CtxtID,ObjectID) )
#define IComInstanceEvents_OnObjectDestroy(This,pInfo,CtxtID)( (This)->lpVtbl -> OnObjectDestroy(This,pInfo,CtxtID) )
#endif
#endif
#ifndef __IComTransactionEvents_INTERFACE_DEFINED__
#define __IComTransactionEvents_INTERFACE_DEFINED__
extern const IID IID_IComTransactionEvents;
typedef struct IComTransactionEventsVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IComTransactionEvents * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IComTransactionEvents * This);
	ULONG(STDMETHODCALLTYPE * Release) (IComTransactionEvents * This);
	HRESULT(STDMETHODCALLTYPE * OnTransactionStart) (IComTransactionEvents * This, COMSVCSEVENTINFO * pInfo, REFGUID guidTx, REFGUID tsid, BOOL fRoot);
	HRESULT(STDMETHODCALLTYPE * OnTransactionPrepare) (IComTransactionEvents * This, COMSVCSEVENTINFO * pInfo, REFGUID guidTx, BOOL fVoteYes);
	HRESULT(STDMETHODCALLTYPE * OnTransactionAbort) (IComTransactionEvents * This, COMSVCSEVENTINFO * pInfo, REFGUID guidTx);
	HRESULT(STDMETHODCALLTYPE * OnTransactionCommit) (IComTransactionEvents * This, COMSVCSEVENTINFO * pInfo, REFGUID guidTx);
	END_INTERFACE
}  IComTransactionEventsVtbl;
interface IComTransactionEvents
{
	CONST_VTBL struct IComTransactionEventsVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IComTransactionEvents_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IComTransactionEvents_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define IComTransactionEvents_Release(This)( (This)->lpVtbl -> Release(This) )
#define IComTransactionEvents_OnTransactionStart(This,pInfo,guidTx,tsid,fRoot)( (This)->lpVtbl -> OnTransactionStart(This,pInfo,guidTx,tsid,fRoot) )
#define IComTransactionEvents_OnTransactionPrepare(This,pInfo,guidTx,fVoteYes)( (This)->lpVtbl -> OnTransactionPrepare(This,pInfo,guidTx,fVoteYes) )
#define IComTransactionEvents_OnTransactionAbort(This,pInfo,guidTx)( (This)->lpVtbl -> OnTransactionAbort(This,pInfo,guidTx) )
#define IComTransactionEvents_OnTransactionCommit(This,pInfo,guidTx)( (This)->lpVtbl -> OnTransactionCommit(This,pInfo,guidTx) )
#endif
#endif
#ifndef __IComMethodEvents_INTERFACE_DEFINED__
#define __IComMethodEvents_INTERFACE_DEFINED__
extern const IID IID_IComMethodEvents;
typedef struct IComMethodEventsVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IComMethodEvents * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IComMethodEvents * This);
	ULONG(STDMETHODCALLTYPE * Release) (IComMethodEvents * This);
	HRESULT(STDMETHODCALLTYPE * OnMethodCall) (IComMethodEvents * This, COMSVCSEVENTINFO * pInfo, ULONG64 oid, REFCLSID guidCid, REFIID guidRid, ULONG iMeth);
	HRESULT(STDMETHODCALLTYPE * OnMethodReturn) (IComMethodEvents * This, COMSVCSEVENTINFO * pInfo, ULONG64 oid, REFCLSID guidCid, REFIID guidRid, ULONG iMeth, HRESULT hresult);
	HRESULT(STDMETHODCALLTYPE * OnMethodException) (IComMethodEvents * This, COMSVCSEVENTINFO * pInfo, ULONG64 oid, REFCLSID guidCid, REFIID guidRid, ULONG iMeth);
	END_INTERFACE
}  IComMethodEventsVtbl;
interface IComMethodEvents
{
	CONST_VTBL struct IComMethodEventsVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IComMethodEvents_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IComMethodEvents_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define IComMethodEvents_Release(This)( (This)->lpVtbl -> Release(This) )
#define IComMethodEvents_OnMethodCall(This,pInfo,oid,guidCid,guidRid,iMeth)( (This)->lpVtbl -> OnMethodCall(This,pInfo,oid,guidCid,guidRid,iMeth) )
#define IComMethodEvents_OnMethodReturn(This,pInfo,oid,guidCid,guidRid,iMeth,hresult)( (This)->lpVtbl -> OnMethodReturn(This,pInfo,oid,guidCid,guidRid,iMeth,hresult) )
#define IComMethodEvents_OnMethodException(This,pInfo,oid,guidCid,guidRid,iMeth)( (This)->lpVtbl -> OnMethodException(This,pInfo,oid,guidCid,guidRid,iMeth) )
#endif
#endif
#ifndef __IComObjectEvents_INTERFACE_DEFINED__
#define __IComObjectEvents_INTERFACE_DEFINED__
extern const IID IID_IComObjectEvents;
typedef struct IComObjectEventsVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IComObjectEvents * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IComObjectEvents * This);
	ULONG(STDMETHODCALLTYPE * Release) (IComObjectEvents * This);
	HRESULT(STDMETHODCALLTYPE * OnObjectActivate) (IComObjectEvents * This, COMSVCSEVENTINFO * pInfo, ULONG64 CtxtID, ULONG64 ObjectID);
	HRESULT(STDMETHODCALLTYPE * OnObjectDeactivate) (IComObjectEvents * This, COMSVCSEVENTINFO * pInfo, ULONG64 CtxtID, ULONG64 ObjectID);
	HRESULT(STDMETHODCALLTYPE * OnDisableCommit) (IComObjectEvents * This, COMSVCSEVENTINFO * pInfo, ULONG64 CtxtID);
	HRESULT(STDMETHODCALLTYPE * OnEnableCommit) (IComObjectEvents * This, COMSVCSEVENTINFO * pInfo, ULONG64 CtxtID);
	HRESULT(STDMETHODCALLTYPE * OnSetComplete) (IComObjectEvents * This, COMSVCSEVENTINFO * pInfo, ULONG64 CtxtID);
	HRESULT(STDMETHODCALLTYPE * OnSetAbort) (IComObjectEvents * This, COMSVCSEVENTINFO * pInfo, ULONG64 CtxtID);
	END_INTERFACE
}  IComObjectEventsVtbl;
interface IComObjectEvents
{
	CONST_VTBL struct IComObjectEventsVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IComObjectEvents_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IComObjectEvents_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define IComObjectEvents_Release(This)( (This)->lpVtbl -> Release(This) )
#define IComObjectEvents_OnObjectActivate(This,pInfo,CtxtID,ObjectID)( (This)->lpVtbl -> OnObjectActivate(This,pInfo,CtxtID,ObjectID) )
#define IComObjectEvents_OnObjectDeactivate(This,pInfo,CtxtID,ObjectID)( (This)->lpVtbl -> OnObjectDeactivate(This,pInfo,CtxtID,ObjectID) )
#define IComObjectEvents_OnDisableCommit(This,pInfo,CtxtID)( (This)->lpVtbl -> OnDisableCommit(This,pInfo,CtxtID) )
#define IComObjectEvents_OnEnableCommit(This,pInfo,CtxtID)( (This)->lpVtbl -> OnEnableCommit(This,pInfo,CtxtID) )
#define IComObjectEvents_OnSetComplete(This,pInfo,CtxtID)( (This)->lpVtbl -> OnSetComplete(This,pInfo,CtxtID) )
#define IComObjectEvents_OnSetAbort(This,pInfo,CtxtID)( (This)->lpVtbl -> OnSetAbort(This,pInfo,CtxtID) )
#endif
#endif
#ifndef __IComResourceEvents_INTERFACE_DEFINED__
#define __IComResourceEvents_INTERFACE_DEFINED__
extern const IID IID_IComResourceEvents;
typedef struct IComResourceEventsVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IComResourceEvents * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IComResourceEvents * This);
	ULONG(STDMETHODCALLTYPE * Release) (IComResourceEvents * This);
	HRESULT(STDMETHODCALLTYPE * OnResourceCreate) (IComResourceEvents * This, COMSVCSEVENTINFO * pInfo, ULONG64 ObjectID, LPCOLESTR pszType, ULONG64 resId, BOOL enlisted);
	HRESULT(STDMETHODCALLTYPE * OnResourceAllocate) (IComResourceEvents * This, COMSVCSEVENTINFO * pInfo, ULONG64 ObjectID, LPCOLESTR pszType, ULONG64 resId, BOOL enlisted, DWORD NumRated, DWORD Rating);
	HRESULT(STDMETHODCALLTYPE * OnResourceRecycle) (IComResourceEvents * This, COMSVCSEVENTINFO * pInfo, ULONG64 ObjectID, LPCOLESTR pszType, ULONG64 resId);
	HRESULT(STDMETHODCALLTYPE * OnResourceDestroy) (IComResourceEvents * This, COMSVCSEVENTINFO * pInfo, ULONG64 ObjectID, HRESULT hr, LPCOLESTR pszType, ULONG64 resId);
	HRESULT(STDMETHODCALLTYPE * OnResourceTrack) (IComResourceEvents * This, COMSVCSEVENTINFO * pInfo, ULONG64 ObjectID, LPCOLESTR pszType, ULONG64 resId, BOOL enlisted);
	END_INTERFACE
}  IComResourceEventsVtbl;
interface IComResourceEvents
{
	CONST_VTBL struct IComResourceEventsVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IComResourceEvents_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IComResourceEvents_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define IComResourceEvents_Release(This)( (This)->lpVtbl -> Release(This) )
#define IComResourceEvents_OnResourceCreate(This,pInfo,ObjectID,pszType,resId,enlisted)( (This)->lpVtbl -> OnResourceCreate(This,pInfo,ObjectID,pszType,resId,enlisted) )
#define IComResourceEvents_OnResourceAllocate(This,pInfo,ObjectID,pszType,resId,enlisted,NumRated,Rating)( (This)->lpVtbl -> OnResourceAllocate(This,pInfo,ObjectID,pszType,resId,enlisted,NumRated,Rating) )
#define IComResourceEvents_OnResourceRecycle(This,pInfo,ObjectID,pszType,resId)( (This)->lpVtbl -> OnResourceRecycle(This,pInfo,ObjectID,pszType,resId) )
#define IComResourceEvents_OnResourceDestroy(This,pInfo,ObjectID,hr,pszType,resId)( (This)->lpVtbl -> OnResourceDestroy(This,pInfo,ObjectID,hr,pszType,resId) )
#define IComResourceEvents_OnResourceTrack(This,pInfo,ObjectID,pszType,resId,enlisted)( (This)->lpVtbl -> OnResourceTrack(This,pInfo,ObjectID,pszType,resId,enlisted) )
#endif
#endif
#ifndef __IComSecurityEvents_INTERFACE_DEFINED__
#define __IComSecurityEvents_INTERFACE_DEFINED__
extern const IID IID_IComSecurityEvents;
typedef struct IComSecurityEventsVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IComSecurityEvents * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IComSecurityEvents * This);
	ULONG(STDMETHODCALLTYPE * Release) (IComSecurityEvents * This);
	HRESULT(STDMETHODCALLTYPE * OnAuthenticate) (IComSecurityEvents * This, COMSVCSEVENTINFO * pInfo, REFGUID guidActivity, ULONG64 ObjectID, REFGUID guidIID, ULONG iMeth, ULONG cbByteOrig, BYTE * pSidOriginalUser, ULONG cbByteCur, BYTE * pSidCurrentUser, BOOL bCurrentUserInpersonatingInProc);
	HRESULT(STDMETHODCALLTYPE * OnAuthenticateFail) (IComSecurityEvents * This, COMSVCSEVENTINFO * pInfo, REFGUID guidActivity, ULONG64 ObjectID, REFGUID guidIID, ULONG iMeth, ULONG cbByteOrig, BYTE * pSidOriginalUser, ULONG cbByteCur, BYTE * pSidCurrentUser, BOOL bCurrentUserInpersonatingInProc);
	END_INTERFACE
}  IComSecurityEventsVtbl;
interface IComSecurityEvents
{
	CONST_VTBL struct IComSecurityEventsVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IComSecurityEvents_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IComSecurityEvents_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define IComSecurityEvents_Release(This)( (This)->lpVtbl -> Release(This) )
#define IComSecurityEvents_OnAuthenticate(This,pInfo,guidActivity,ObjectID,guidIID,iMeth,cbByteOrig,pSidOriginalUser,cbByteCur,pSidCurrentUser,bCurrentUserInpersonatingInProc)( (This)->lpVtbl -> OnAuthenticate(This,pInfo,guidActivity,ObjectID,guidIID,iMeth,cbByteOrig,pSidOriginalUser,cbByteCur,pSidCurrentUser,bCurrentUserInpersonatingInProc) )
#define IComSecurityEvents_OnAuthenticateFail(This,pInfo,guidActivity,ObjectID,guidIID,iMeth,cbByteOrig,pSidOriginalUser,cbByteCur,pSidCurrentUser,bCurrentUserInpersonatingInProc)( (This)->lpVtbl -> OnAuthenticateFail(This,pInfo,guidActivity,ObjectID,guidIID,iMeth,cbByteOrig,pSidOriginalUser,cbByteCur,pSidCurrentUser,bCurrentUserInpersonatingInProc) )
#endif
#endif
#ifndef __IComObjectPoolEvents_INTERFACE_DEFINED__
#define __IComObjectPoolEvents_INTERFACE_DEFINED__
extern const IID IID_IComObjectPoolEvents;
typedef struct IComObjectPoolEventsVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IComObjectPoolEvents * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IComObjectPoolEvents * This);
	ULONG(STDMETHODCALLTYPE * Release) (IComObjectPoolEvents * This);
	HRESULT(STDMETHODCALLTYPE * OnObjPoolPutObject) (IComObjectPoolEvents * This, COMSVCSEVENTINFO * pInfo, REFGUID guidObject, int nReason, DWORD dwAvailable, ULONG64 oid);
	HRESULT(STDMETHODCALLTYPE * OnObjPoolGetObject) (IComObjectPoolEvents * This, COMSVCSEVENTINFO * pInfo, REFGUID guidActivity, REFGUID guidObject, DWORD dwAvailable, ULONG64 oid);
	HRESULT(STDMETHODCALLTYPE * OnObjPoolRecycleToTx) (IComObjectPoolEvents * This, COMSVCSEVENTINFO * pInfo, REFGUID guidActivity, REFGUID guidObject, REFGUID guidTx, ULONG64 objid);
	HRESULT(STDMETHODCALLTYPE * OnObjPoolGetFromTx) (IComObjectPoolEvents * This, COMSVCSEVENTINFO * pInfo, REFGUID guidActivity, REFGUID guidObject, REFGUID guidTx, ULONG64 objid);
	END_INTERFACE
}  IComObjectPoolEventsVtbl;
interface IComObjectPoolEvents
{
	CONST_VTBL struct IComObjectPoolEventsVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IComObjectPoolEvents_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IComObjectPoolEvents_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define IComObjectPoolEvents_Release(This)( (This)->lpVtbl -> Release(This) )
#define IComObjectPoolEvents_OnObjPoolPutObject(This,pInfo,guidObject,nReason,dwAvailable,oid)( (This)->lpVtbl -> OnObjPoolPutObject(This,pInfo,guidObject,nReason,dwAvailable,oid) )
#define IComObjectPoolEvents_OnObjPoolGetObject(This,pInfo,guidActivity,guidObject,dwAvailable,oid)( (This)->lpVtbl -> OnObjPoolGetObject(This,pInfo,guidActivity,guidObject,dwAvailable,oid) )
#define IComObjectPoolEvents_OnObjPoolRecycleToTx(This,pInfo,guidActivity,guidObject,guidTx,objid)( (This)->lpVtbl -> OnObjPoolRecycleToTx(This,pInfo,guidActivity,guidObject,guidTx,objid) )
#define IComObjectPoolEvents_OnObjPoolGetFromTx(This,pInfo,guidActivity,guidObject,guidTx,objid)( (This)->lpVtbl -> OnObjPoolGetFromTx(This,pInfo,guidActivity,guidObject,guidTx,objid) )
#endif
#endif
#ifndef __IComObjectPoolEvents2_INTERFACE_DEFINED__
#define __IComObjectPoolEvents2_INTERFACE_DEFINED__
extern const IID IID_IComObjectPoolEvents2;
typedef struct IComObjectPoolEvents2Vtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IComObjectPoolEvents2 * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IComObjectPoolEvents2 * This);
	ULONG(STDMETHODCALLTYPE * Release) (IComObjectPoolEvents2 * This);
	HRESULT(STDMETHODCALLTYPE * OnObjPoolCreateObject) (IComObjectPoolEvents2 * This, COMSVCSEVENTINFO * pInfo, REFGUID guidObject, DWORD dwObjsCreated, ULONG64 oid);
	HRESULT(STDMETHODCALLTYPE * OnObjPoolDestroyObject) (IComObjectPoolEvents2 * This, COMSVCSEVENTINFO * pInfo, REFGUID guidObject, DWORD dwObjsCreated, ULONG64 oid);
	HRESULT(STDMETHODCALLTYPE * OnObjPoolCreateDecision) (IComObjectPoolEvents2 * This, COMSVCSEVENTINFO * pInfo, DWORD dwThreadsWaiting, DWORD dwAvail, DWORD dwCreated, DWORD dwMin, DWORD dwMax);
	HRESULT(STDMETHODCALLTYPE * OnObjPoolTimeout) (IComObjectPoolEvents2 * This, COMSVCSEVENTINFO * pInfo, REFGUID guidObject, REFGUID guidActivity, DWORD dwTimeout);
	HRESULT(STDMETHODCALLTYPE * OnObjPoolCreatePool) (IComObjectPoolEvents2 * This, COMSVCSEVENTINFO * pInfo, REFGUID guidObject, DWORD dwMin, DWORD dwMax, DWORD dwTimeout);
	END_INTERFACE
}  IComObjectPoolEvents2Vtbl;
interface IComObjectPoolEvents2
{
	CONST_VTBL struct IComObjectPoolEvents2Vtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IComObjectPoolEvents2_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IComObjectPoolEvents2_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define IComObjectPoolEvents2_Release(This)( (This)->lpVtbl -> Release(This) )
#define IComObjectPoolEvents2_OnObjPoolCreateObject(This,pInfo,guidObject,dwObjsCreated,oid)( (This)->lpVtbl -> OnObjPoolCreateObject(This,pInfo,guidObject,dwObjsCreated,oid) )
#define IComObjectPoolEvents2_OnObjPoolDestroyObject(This,pInfo,guidObject,dwObjsCreated,oid)( (This)->lpVtbl -> OnObjPoolDestroyObject(This,pInfo,guidObject,dwObjsCreated,oid) )
#define IComObjectPoolEvents2_OnObjPoolCreateDecision(This,pInfo,dwThreadsWaiting,dwAvail,dwCreated,dwMin,dwMax)( (This)->lpVtbl -> OnObjPoolCreateDecision(This,pInfo,dwThreadsWaiting,dwAvail,dwCreated,dwMin,dwMax) )
#define IComObjectPoolEvents2_OnObjPoolTimeout(This,pInfo,guidObject,guidActivity,dwTimeout)( (This)->lpVtbl -> OnObjPoolTimeout(This,pInfo,guidObject,guidActivity,dwTimeout) )
#define IComObjectPoolEvents2_OnObjPoolCreatePool(This,pInfo,guidObject,dwMin,dwMax,dwTimeout)( (This)->lpVtbl -> OnObjPoolCreatePool(This,pInfo,guidObject,dwMin,dwMax,dwTimeout) )
#endif
#endif
#ifndef __IComObjectConstructionEvents_INTERFACE_DEFINED__
#define __IComObjectConstructionEvents_INTERFACE_DEFINED__
extern const IID IID_IComObjectConstructionEvents;
typedef struct IComObjectConstructionEventsVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IComObjectConstructionEvents * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IComObjectConstructionEvents * This);
	ULONG(STDMETHODCALLTYPE * Release) (IComObjectConstructionEvents * This);
	HRESULT(STDMETHODCALLTYPE * OnObjectConstruct) (IComObjectConstructionEvents * This, COMSVCSEVENTINFO * pInfo, REFGUID guidObject, LPCOLESTR sConstructString, ULONG64 oid);
	END_INTERFACE
}  IComObjectConstructionEventsVtbl;
interface IComObjectConstructionEvents
{
	CONST_VTBL struct IComObjectConstructionEventsVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IComObjectConstructionEvents_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IComObjectConstructionEvents_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define IComObjectConstructionEvents_Release(This)( (This)->lpVtbl -> Release(This) )
#define IComObjectConstructionEvents_OnObjectConstruct(This,pInfo,guidObject,sConstructString,oid)( (This)->lpVtbl -> OnObjectConstruct(This,pInfo,guidObject,sConstructString,oid) )
#endif
#endif
#ifndef __IComActivityEvents_INTERFACE_DEFINED__
#define __IComActivityEvents_INTERFACE_DEFINED__
extern const IID IID_IComActivityEvents;
typedef struct IComActivityEventsVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IComActivityEvents * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IComActivityEvents * This);
	ULONG(STDMETHODCALLTYPE * Release) (IComActivityEvents * This);
	HRESULT(STDMETHODCALLTYPE * OnActivityCreate) (IComActivityEvents * This, COMSVCSEVENTINFO * pInfo, REFGUID guidActivity);
	HRESULT(STDMETHODCALLTYPE * OnActivityDestroy) (IComActivityEvents * This, COMSVCSEVENTINFO * pInfo, REFGUID guidActivity);
	HRESULT(STDMETHODCALLTYPE * OnActivityEnter) (IComActivityEvents * This, COMSVCSEVENTINFO * pInfo, REFGUID guidCurrent, REFGUID guidEntered, DWORD dwThread);
	HRESULT(STDMETHODCALLTYPE * OnActivityTimeout) (IComActivityEvents * This, COMSVCSEVENTINFO * pInfo, REFGUID guidCurrent, REFGUID guidEntered, DWORD dwThread, DWORD dwTimeout);
	HRESULT(STDMETHODCALLTYPE * OnActivityReenter) (IComActivityEvents * This, COMSVCSEVENTINFO * pInfo, REFGUID guidCurrent, DWORD dwThread, DWORD dwCallDepth);
	HRESULT(STDMETHODCALLTYPE * OnActivityLeave) (IComActivityEvents * This, COMSVCSEVENTINFO * pInfo, REFGUID guidCurrent, REFGUID guidLeft);
	HRESULT(STDMETHODCALLTYPE * OnActivityLeaveSame) (IComActivityEvents * This, COMSVCSEVENTINFO * pInfo, REFGUID guidCurrent, DWORD dwCallDepth);
	END_INTERFACE
}  IComActivityEventsVtbl;
interface IComActivityEvents
{
	CONST_VTBL struct IComActivityEventsVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IComActivityEvents_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IComActivityEvents_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define IComActivityEvents_Release(This)( (This)->lpVtbl -> Release(This) )
#define IComActivityEvents_OnActivityCreate(This,pInfo,guidActivity)( (This)->lpVtbl -> OnActivityCreate(This,pInfo,guidActivity) )
#define IComActivityEvents_OnActivityDestroy(This,pInfo,guidActivity)( (This)->lpVtbl -> OnActivityDestroy(This,pInfo,guidActivity) )
#define IComActivityEvents_OnActivityEnter(This,pInfo,guidCurrent,guidEntered,dwThread)( (This)->lpVtbl -> OnActivityEnter(This,pInfo,guidCurrent,guidEntered,dwThread) )
#define IComActivityEvents_OnActivityTimeout(This,pInfo,guidCurrent,guidEntered,dwThread,dwTimeout)( (This)->lpVtbl -> OnActivityTimeout(This,pInfo,guidCurrent,guidEntered,dwThread,dwTimeout) )
#define IComActivityEvents_OnActivityReenter(This,pInfo,guidCurrent,dwThread,dwCallDepth)( (This)->lpVtbl -> OnActivityReenter(This,pInfo,guidCurrent,dwThread,dwCallDepth) )
#define IComActivityEvents_OnActivityLeave(This,pInfo,guidCurrent,guidLeft)( (This)->lpVtbl -> OnActivityLeave(This,pInfo,guidCurrent,guidLeft) )
#define IComActivityEvents_OnActivityLeaveSame(This,pInfo,guidCurrent,dwCallDepth)( (This)->lpVtbl -> OnActivityLeaveSame(This,pInfo,guidCurrent,dwCallDepth) )
#endif
#endif
#ifndef __IComIdentityEvents_INTERFACE_DEFINED__
#define __IComIdentityEvents_INTERFACE_DEFINED__
extern const IID IID_IComIdentityEvents;
typedef struct IComIdentityEventsVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IComIdentityEvents * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IComIdentityEvents * This);
	ULONG(STDMETHODCALLTYPE * Release) (IComIdentityEvents * This);
	HRESULT(STDMETHODCALLTYPE * OnIISRequestInfo) (IComIdentityEvents * This, COMSVCSEVENTINFO * pInfo, ULONG64 ObjId, LPCOLESTR pszClientIP, LPCOLESTR pszServerIP, LPCOLESTR pszURL);
	END_INTERFACE
}  IComIdentityEventsVtbl;
interface IComIdentityEvents
{
	CONST_VTBL struct IComIdentityEventsVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IComIdentityEvents_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IComIdentityEvents_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define IComIdentityEvents_Release(This)( (This)->lpVtbl -> Release(This) )
#define IComIdentityEvents_OnIISRequestInfo(This,pInfo,ObjId,pszClientIP,pszServerIP,pszURL)( (This)->lpVtbl -> OnIISRequestInfo(This,pInfo,ObjId,pszClientIP,pszServerIP,pszURL) )
#endif
#endif
#ifndef __IComQCEvents_INTERFACE_DEFINED__
#define __IComQCEvents_INTERFACE_DEFINED__
extern const IID IID_IComQCEvents;
typedef struct IComQCEventsVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IComQCEvents * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IComQCEvents * This);
	ULONG(STDMETHODCALLTYPE * Release) (IComQCEvents * This);
	HRESULT(STDMETHODCALLTYPE * OnQCRecord) (IComQCEvents * This, COMSVCSEVENTINFO * pInfo, ULONG64 objid, WCHAR szQueue[60], REFGUID guidMsgId, REFGUID guidWorkFlowId, HRESULT msmqhr);
	HRESULT(STDMETHODCALLTYPE * OnQCQueueOpen) (IComQCEvents * This, COMSVCSEVENTINFO * pInfo, WCHAR szQueue[60], ULONG64 QueueID, HRESULT hr);
	HRESULT(STDMETHODCALLTYPE * OnQCReceive) (IComQCEvents * This, COMSVCSEVENTINFO * pInfo, ULONG64 QueueID, REFGUID guidMsgId, REFGUID guidWorkFlowId, HRESULT hr);
	HRESULT(STDMETHODCALLTYPE * OnQCReceiveFail) (IComQCEvents * This, COMSVCSEVENTINFO * pInfo, ULONG64 QueueID, HRESULT msmqhr);
	HRESULT(STDMETHODCALLTYPE * OnQCMoveToReTryQueue) (IComQCEvents * This, COMSVCSEVENTINFO * pInfo, REFGUID guidMsgId, REFGUID guidWorkFlowId, ULONG RetryIndex);
	HRESULT(STDMETHODCALLTYPE * OnQCMoveToDeadQueue) (IComQCEvents * This, COMSVCSEVENTINFO * pInfo, REFGUID guidMsgId, REFGUID guidWorkFlowId);
	HRESULT(STDMETHODCALLTYPE * OnQCPlayback) (IComQCEvents * This, COMSVCSEVENTINFO * pInfo, ULONG64 objid, REFGUID guidMsgId, REFGUID guidWorkFlowId, HRESULT hr);
	END_INTERFACE
}  IComQCEventsVtbl;
interface IComQCEvents
{
	CONST_VTBL struct IComQCEventsVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IComQCEvents_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IComQCEvents_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define IComQCEvents_Release(This)( (This)->lpVtbl -> Release(This) )
#define IComQCEvents_OnQCRecord(This,pInfo,objid,szQueue,guidMsgId,guidWorkFlowId,msmqhr)( (This)->lpVtbl -> OnQCRecord(This,pInfo,objid,szQueue,guidMsgId,guidWorkFlowId,msmqhr) )
#define IComQCEvents_OnQCQueueOpen(This,pInfo,szQueue,QueueID,hr)( (This)->lpVtbl -> OnQCQueueOpen(This,pInfo,szQueue,QueueID,hr) )
#define IComQCEvents_OnQCReceive(This,pInfo,QueueID,guidMsgId,guidWorkFlowId,hr)( (This)->lpVtbl -> OnQCReceive(This,pInfo,QueueID,guidMsgId,guidWorkFlowId,hr) )
#define IComQCEvents_OnQCReceiveFail(This,pInfo,QueueID,msmqhr)( (This)->lpVtbl -> OnQCReceiveFail(This,pInfo,QueueID,msmqhr) )
#define IComQCEvents_OnQCMoveToReTryQueue(This,pInfo,guidMsgId,guidWorkFlowId,RetryIndex)( (This)->lpVtbl -> OnQCMoveToReTryQueue(This,pInfo,guidMsgId,guidWorkFlowId,RetryIndex) )
#define IComQCEvents_OnQCMoveToDeadQueue(This,pInfo,guidMsgId,guidWorkFlowId)( (This)->lpVtbl -> OnQCMoveToDeadQueue(This,pInfo,guidMsgId,guidWorkFlowId) )
#define IComQCEvents_OnQCPlayback(This,pInfo,objid,guidMsgId,guidWorkFlowId,hr)( (This)->lpVtbl -> OnQCPlayback(This,pInfo,objid,guidMsgId,guidWorkFlowId,hr) )
#endif
#endif
#ifndef __IComExceptionEvents_INTERFACE_DEFINED__
#define __IComExceptionEvents_INTERFACE_DEFINED__
extern const IID IID_IComExceptionEvents;
typedef struct IComExceptionEventsVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IComExceptionEvents * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IComExceptionEvents * This);
	ULONG(STDMETHODCALLTYPE * Release) (IComExceptionEvents * This);
	HRESULT(STDMETHODCALLTYPE * OnExceptionUser) (IComExceptionEvents * This, COMSVCSEVENTINFO * pInfo, ULONG code, ULONG64 address, LPCOLESTR pszStackTrace);
	END_INTERFACE
}  IComExceptionEventsVtbl;
interface IComExceptionEvents
{
	CONST_VTBL struct IComExceptionEventsVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IComExceptionEvents_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IComExceptionEvents_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define IComExceptionEvents_Release(This)( (This)->lpVtbl -> Release(This) )
#define IComExceptionEvents_OnExceptionUser(This,pInfo,code,address,pszStackTrace)( (This)->lpVtbl -> OnExceptionUser(This,pInfo,code,address,pszStackTrace) )
#endif
#endif
#ifndef __ILBEvents_INTERFACE_DEFINED__
#define __ILBEvents_INTERFACE_DEFINED__
extern const IID IID_ILBEvents;
typedef struct ILBEventsVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (ILBEvents * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (ILBEvents * This);
	ULONG(STDMETHODCALLTYPE * Release) (ILBEvents * This);
	HRESULT(STDMETHODCALLTYPE * TargetUp) (ILBEvents * This, BSTR bstrServerName, BSTR bstrClsidEng);
	HRESULT(STDMETHODCALLTYPE * TargetDown) (ILBEvents * This, BSTR bstrServerName, BSTR bstrClsidEng);
	HRESULT(STDMETHODCALLTYPE * EngineDefined) (ILBEvents * This, BSTR bstrPropName, VARIANT * varPropValue, BSTR bstrClsidEng);
	END_INTERFACE
}  ILBEventsVtbl;
interface ILBEvents
{
	CONST_VTBL struct ILBEventsVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define ILBEvents_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define ILBEvents_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define ILBEvents_Release(This)( (This)->lpVtbl -> Release(This) )
#define ILBEvents_TargetUp(This,bstrServerName,bstrClsidEng)( (This)->lpVtbl -> TargetUp(This,bstrServerName,bstrClsidEng) )
#define ILBEvents_TargetDown(This,bstrServerName,bstrClsidEng)( (This)->lpVtbl -> TargetDown(This,bstrServerName,bstrClsidEng) )
#define ILBEvents_EngineDefined(This,bstrPropName,varPropValue,bstrClsidEng)( (This)->lpVtbl -> EngineDefined(This,bstrPropName,varPropValue,bstrClsidEng) )
#endif
#endif
#ifndef __IComCRMEvents_INTERFACE_DEFINED__
#define __IComCRMEvents_INTERFACE_DEFINED__
extern const IID IID_IComCRMEvents;
typedef struct IComCRMEventsVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IComCRMEvents * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IComCRMEvents * This);
	ULONG(STDMETHODCALLTYPE * Release) (IComCRMEvents * This);
	HRESULT(STDMETHODCALLTYPE * OnCRMRecoveryStart) (IComCRMEvents * This, COMSVCSEVENTINFO * pInfo, GUID guidApp);
	HRESULT(STDMETHODCALLTYPE * OnCRMRecoveryDone) (IComCRMEvents * This, COMSVCSEVENTINFO * pInfo, GUID guidApp);
	HRESULT(STDMETHODCALLTYPE * OnCRMCheckpoint) (IComCRMEvents * This, COMSVCSEVENTINFO * pInfo, GUID guidApp);
	HRESULT(STDMETHODCALLTYPE * OnCRMBegin) (IComCRMEvents * This, COMSVCSEVENTINFO * pInfo, GUID guidClerkCLSID, GUID guidActivity, GUID guidTx, WCHAR szProgIdCompensator[64], WCHAR szDescription[64]);
	HRESULT(STDMETHODCALLTYPE * OnCRMPrepare) (IComCRMEvents * This, COMSVCSEVENTINFO * pInfo, GUID guidClerkCLSID);
	HRESULT(STDMETHODCALLTYPE * OnCRMCommit) (IComCRMEvents * This, COMSVCSEVENTINFO * pInfo, GUID guidClerkCLSID);
	HRESULT(STDMETHODCALLTYPE * OnCRMAbort) (IComCRMEvents * This, COMSVCSEVENTINFO * pInfo, GUID guidClerkCLSID);
	HRESULT(STDMETHODCALLTYPE * OnCRMIndoubt) (IComCRMEvents * This, COMSVCSEVENTINFO * pInfo, GUID guidClerkCLSID);
	HRESULT(STDMETHODCALLTYPE * OnCRMDone) (IComCRMEvents * This, COMSVCSEVENTINFO * pInfo, GUID guidClerkCLSID);
	HRESULT(STDMETHODCALLTYPE * OnCRMRelease) (IComCRMEvents * This, COMSVCSEVENTINFO * pInfo, GUID guidClerkCLSID);
	HRESULT(STDMETHODCALLTYPE * OnCRMAnalyze) (IComCRMEvents * This, COMSVCSEVENTINFO * pInfo, GUID guidClerkCLSID, DWORD dwCrmRecordType, DWORD dwRecordSize);
	HRESULT(STDMETHODCALLTYPE * OnCRMWrite) (IComCRMEvents * This, COMSVCSEVENTINFO * pInfo, GUID guidClerkCLSID, BOOL fVariants, DWORD dwRecordSize);
	HRESULT(STDMETHODCALLTYPE * OnCRMForget) (IComCRMEvents * This, COMSVCSEVENTINFO * pInfo, GUID guidClerkCLSID);
	HRESULT(STDMETHODCALLTYPE * OnCRMForce) (IComCRMEvents * This, COMSVCSEVENTINFO * pInfo, GUID guidClerkCLSID);
	HRESULT(STDMETHODCALLTYPE * OnCRMDeliver) (IComCRMEvents * This, COMSVCSEVENTINFO * pInfo, GUID guidClerkCLSID, BOOL fVariants, DWORD dwRecordSize);
	END_INTERFACE
}  IComCRMEventsVtbl;
interface IComCRMEvents
{
	CONST_VTBL struct IComCRMEventsVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IComCRMEvents_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IComCRMEvents_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define IComCRMEvents_Release(This)( (This)->lpVtbl -> Release(This) )
#define IComCRMEvents_OnCRMRecoveryStart(This,pInfo,guidApp)( (This)->lpVtbl -> OnCRMRecoveryStart(This,pInfo,guidApp) )
#define IComCRMEvents_OnCRMRecoveryDone(This,pInfo,guidApp)( (This)->lpVtbl -> OnCRMRecoveryDone(This,pInfo,guidApp) )
#define IComCRMEvents_OnCRMCheckpoint(This,pInfo,guidApp)( (This)->lpVtbl -> OnCRMCheckpoint(This,pInfo,guidApp) )
#define IComCRMEvents_OnCRMBegin(This,pInfo,guidClerkCLSID,guidActivity,guidTx,szProgIdCompensator,szDescription)( (This)->lpVtbl -> OnCRMBegin(This,pInfo,guidClerkCLSID,guidActivity,guidTx,szProgIdCompensator,szDescription) )
#define IComCRMEvents_OnCRMPrepare(This,pInfo,guidClerkCLSID)( (This)->lpVtbl -> OnCRMPrepare(This,pInfo,guidClerkCLSID) )
#define IComCRMEvents_OnCRMCommit(This,pInfo,guidClerkCLSID)( (This)->lpVtbl -> OnCRMCommit(This,pInfo,guidClerkCLSID) )
#define IComCRMEvents_OnCRMAbort(This,pInfo,guidClerkCLSID)( (This)->lpVtbl -> OnCRMAbort(This,pInfo,guidClerkCLSID) )
#define IComCRMEvents_OnCRMIndoubt(This,pInfo,guidClerkCLSID)( (This)->lpVtbl -> OnCRMIndoubt(This,pInfo,guidClerkCLSID) )
#define IComCRMEvents_OnCRMDone(This,pInfo,guidClerkCLSID)( (This)->lpVtbl -> OnCRMDone(This,pInfo,guidClerkCLSID) )
#define IComCRMEvents_OnCRMRelease(This,pInfo,guidClerkCLSID)( (This)->lpVtbl -> OnCRMRelease(This,pInfo,guidClerkCLSID) )
#define IComCRMEvents_OnCRMAnalyze(This,pInfo,guidClerkCLSID,dwCrmRecordType,dwRecordSize)( (This)->lpVtbl -> OnCRMAnalyze(This,pInfo,guidClerkCLSID,dwCrmRecordType,dwRecordSize) )
#define IComCRMEvents_OnCRMWrite(This,pInfo,guidClerkCLSID,fVariants,dwRecordSize)( (This)->lpVtbl -> OnCRMWrite(This,pInfo,guidClerkCLSID,fVariants,dwRecordSize) )
#define IComCRMEvents_OnCRMForget(This,pInfo,guidClerkCLSID)( (This)->lpVtbl -> OnCRMForget(This,pInfo,guidClerkCLSID) )
#define IComCRMEvents_OnCRMForce(This,pInfo,guidClerkCLSID)( (This)->lpVtbl -> OnCRMForce(This,pInfo,guidClerkCLSID) )
#define IComCRMEvents_OnCRMDeliver(This,pInfo,guidClerkCLSID,fVariants,dwRecordSize)( (This)->lpVtbl -> OnCRMDeliver(This,pInfo,guidClerkCLSID,fVariants,dwRecordSize) )
#endif
#endif
#ifndef __IComMethod2Events_INTERFACE_DEFINED__
#define __IComMethod2Events_INTERFACE_DEFINED__
extern const IID IID_IComMethod2Events;
typedef struct IComMethod2EventsVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IComMethod2Events * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IComMethod2Events * This);
	ULONG(STDMETHODCALLTYPE * Release) (IComMethod2Events * This);
	HRESULT(STDMETHODCALLTYPE * OnMethodCall2) (IComMethod2Events * This, COMSVCSEVENTINFO * pInfo, ULONG64 oid, REFCLSID guidCid, REFIID guidRid, DWORD dwThread, ULONG iMeth);
	HRESULT(STDMETHODCALLTYPE * OnMethodReturn2) (IComMethod2Events * This, COMSVCSEVENTINFO * pInfo, ULONG64 oid, REFCLSID guidCid, REFIID guidRid, DWORD dwThread, ULONG iMeth, HRESULT hresult);
	HRESULT(STDMETHODCALLTYPE * OnMethodException2) (IComMethod2Events * This, COMSVCSEVENTINFO * pInfo, ULONG64 oid, REFCLSID guidCid, REFIID guidRid, DWORD dwThread, ULONG iMeth);
	END_INTERFACE
}  IComMethod2EventsVtbl;
interface IComMethod2Events
{
	CONST_VTBL struct IComMethod2EventsVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IComMethod2Events_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IComMethod2Events_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define IComMethod2Events_Release(This)( (This)->lpVtbl -> Release(This) )
#define IComMethod2Events_OnMethodCall2(This,pInfo,oid,guidCid,guidRid,dwThread,iMeth)( (This)->lpVtbl -> OnMethodCall2(This,pInfo,oid,guidCid,guidRid,dwThread,iMeth) )
#define IComMethod2Events_OnMethodReturn2(This,pInfo,oid,guidCid,guidRid,dwThread,iMeth,hresult)( (This)->lpVtbl -> OnMethodReturn2(This,pInfo,oid,guidCid,guidRid,dwThread,iMeth,hresult) )
#define IComMethod2Events_OnMethodException2(This,pInfo,oid,guidCid,guidRid,dwThread,iMeth)( (This)->lpVtbl -> OnMethodException2(This,pInfo,oid,guidCid,guidRid,dwThread,iMeth) )
#endif
#endif
#ifndef __IComTrackingInfoEvents_INTERFACE_DEFINED__
#define __IComTrackingInfoEvents_INTERFACE_DEFINED__
extern const IID IID_IComTrackingInfoEvents;
typedef struct IComTrackingInfoEventsVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IComTrackingInfoEvents * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IComTrackingInfoEvents * This);
	ULONG(STDMETHODCALLTYPE * Release) (IComTrackingInfoEvents * This);
	HRESULT(STDMETHODCALLTYPE * OnNewTrackingInfo) (IComTrackingInfoEvents * This, IUnknown * pToplevelCollection);
	END_INTERFACE
}  IComTrackingInfoEventsVtbl;
interface IComTrackingInfoEvents
{
	CONST_VTBL struct IComTrackingInfoEventsVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IComTrackingInfoEvents_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IComTrackingInfoEvents_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define IComTrackingInfoEvents_Release(This)( (This)->lpVtbl -> Release(This) )
#define IComTrackingInfoEvents_OnNewTrackingInfo(This,pToplevelCollection)( (This)->lpVtbl -> OnNewTrackingInfo(This,pToplevelCollection) )
#endif
#endif
typedef enum __MIDL___MIDL_itf_autosvcs_0000_0034_0001
{
	TRKCOLL_PROCESSES = 0,
	TRKCOLL_APPLICATIONS = (TRKCOLL_PROCESSES + 1),
	TRKCOLL_COMPONENTS = (TRKCOLL_APPLICATIONS + 1)
} TRACKING_COLL_TYPE;
extern RPC_IF_HANDLE __MIDL_itf_autosvcs_0000_0034_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_autosvcs_0000_0034_v0_0_s_ifspec;
#ifndef __IComTrackingInfoCollection_INTERFACE_DEFINED__
#define __IComTrackingInfoCollection_INTERFACE_DEFINED__
extern const IID IID_IComTrackingInfoCollection;
typedef struct IComTrackingInfoCollectionVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IComTrackingInfoCollection * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IComTrackingInfoCollection * This);
	ULONG(STDMETHODCALLTYPE * Release) (IComTrackingInfoCollection * This);
	HRESULT(STDMETHODCALLTYPE * Type) (IComTrackingInfoCollection * This, TRACKING_COLL_TYPE * pType);
	HRESULT(STDMETHODCALLTYPE * Count) (IComTrackingInfoCollection * This, ULONG * pCount);
	HRESULT(STDMETHODCALLTYPE * Item) (IComTrackingInfoCollection * This, ULONG ulIndex, REFIID riid, void **ppv);
	END_INTERFACE
}  IComTrackingInfoCollectionVtbl;
interface IComTrackingInfoCollection
{
	CONST_VTBL struct IComTrackingInfoCollectionVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IComTrackingInfoCollection_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IComTrackingInfoCollection_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define IComTrackingInfoCollection_Release(This)( (This)->lpVtbl -> Release(This) )
#define IComTrackingInfoCollection_Type(This,pType)( (This)->lpVtbl -> Type(This,pType) )
#define IComTrackingInfoCollection_Count(This,pCount)( (This)->lpVtbl -> Count(This,pCount) )
#define IComTrackingInfoCollection_Item(This,ulIndex,riid,ppv)( (This)->lpVtbl -> Item(This,ulIndex,riid,ppv) )
#endif
#endif
#ifndef __IComTrackingInfoObject_INTERFACE_DEFINED__
#define __IComTrackingInfoObject_INTERFACE_DEFINED__
extern const IID IID_IComTrackingInfoObject;
typedef struct IComTrackingInfoObjectVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IComTrackingInfoObject * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IComTrackingInfoObject * This);
	ULONG(STDMETHODCALLTYPE * Release) (IComTrackingInfoObject * This);
	HRESULT(STDMETHODCALLTYPE * GetValue) (IComTrackingInfoObject * This, LPOLESTR szPropertyName, VARIANT * pvarOut);
	END_INTERFACE
}  IComTrackingInfoObjectVtbl;
interface IComTrackingInfoObject
{
	CONST_VTBL struct IComTrackingInfoObjectVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IComTrackingInfoObject_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IComTrackingInfoObject_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define IComTrackingInfoObject_Release(This)( (This)->lpVtbl -> Release(This) )
#define IComTrackingInfoObject_GetValue(This,szPropertyName,pvarOut)( (This)->lpVtbl -> GetValue(This,szPropertyName,pvarOut) )
#endif
#endif
#ifndef __IComTrackingInfoProperties_INTERFACE_DEFINED__
#define __IComTrackingInfoProperties_INTERFACE_DEFINED__
extern const IID IID_IComTrackingInfoProperties;
typedef struct IComTrackingInfoPropertiesVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IComTrackingInfoProperties * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IComTrackingInfoProperties * This);
	ULONG(STDMETHODCALLTYPE * Release) (IComTrackingInfoProperties * This);
	HRESULT(STDMETHODCALLTYPE * PropCount) (IComTrackingInfoProperties * This, ULONG * pCount);
	HRESULT(STDMETHODCALLTYPE * GetPropName) (IComTrackingInfoProperties * This, ULONG ulIndex, LPOLESTR * ppszPropName);
	END_INTERFACE
}  IComTrackingInfoPropertiesVtbl;
interface IComTrackingInfoProperties
{
	CONST_VTBL struct IComTrackingInfoPropertiesVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IComTrackingInfoProperties_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IComTrackingInfoProperties_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define IComTrackingInfoProperties_Release(This)( (This)->lpVtbl -> Release(This) )
#define IComTrackingInfoProperties_PropCount(This,pCount)( (This)->lpVtbl -> PropCount(This,pCount) )
#define IComTrackingInfoProperties_GetPropName(This,ulIndex,ppszPropName)( (This)->lpVtbl -> GetPropName(This,ulIndex,ppszPropName) )
#endif
#endif
#ifndef __IComApp2Events_INTERFACE_DEFINED__
#define __IComApp2Events_INTERFACE_DEFINED__
extern const IID IID_IComApp2Events;
typedef struct IComApp2EventsVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IComApp2Events * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IComApp2Events * This);
	ULONG(STDMETHODCALLTYPE * Release) (IComApp2Events * This);
	HRESULT(STDMETHODCALLTYPE * OnAppActivation2) (IComApp2Events * This, COMSVCSEVENTINFO * pInfo, GUID guidApp, GUID guidProcess);
	HRESULT(STDMETHODCALLTYPE * OnAppShutdown2) (IComApp2Events * This, COMSVCSEVENTINFO * pInfo, GUID guidApp);
	HRESULT(STDMETHODCALLTYPE * OnAppForceShutdown2) (IComApp2Events * This, COMSVCSEVENTINFO * pInfo, GUID guidApp);
	HRESULT(STDMETHODCALLTYPE * OnAppPaused2) (IComApp2Events * This, COMSVCSEVENTINFO * pInfo, GUID guidApp, BOOL bPaused);
	HRESULT(STDMETHODCALLTYPE * OnAppRecycle2) (IComApp2Events * This, COMSVCSEVENTINFO * pInfo, GUID guidApp, GUID guidProcess, long lReason);
	END_INTERFACE
}  IComApp2EventsVtbl;
interface IComApp2Events
{
	CONST_VTBL struct IComApp2EventsVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IComApp2Events_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IComApp2Events_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define IComApp2Events_Release(This)( (This)->lpVtbl -> Release(This) )
#define IComApp2Events_OnAppActivation2(This,pInfo,guidApp,guidProcess)( (This)->lpVtbl -> OnAppActivation2(This,pInfo,guidApp,guidProcess) )
#define IComApp2Events_OnAppShutdown2(This,pInfo,guidApp)( (This)->lpVtbl -> OnAppShutdown2(This,pInfo,guidApp) )
#define IComApp2Events_OnAppForceShutdown2(This,pInfo,guidApp)( (This)->lpVtbl -> OnAppForceShutdown2(This,pInfo,guidApp) )
#define IComApp2Events_OnAppPaused2(This,pInfo,guidApp,bPaused)( (This)->lpVtbl -> OnAppPaused2(This,pInfo,guidApp,bPaused) )
#define IComApp2Events_OnAppRecycle2(This,pInfo,guidApp,guidProcess,lReason)( (This)->lpVtbl -> OnAppRecycle2(This,pInfo,guidApp,guidProcess,lReason) )
#endif
#endif
#ifndef __IComTransaction2Events_INTERFACE_DEFINED__
#define __IComTransaction2Events_INTERFACE_DEFINED__
extern const IID IID_IComTransaction2Events;
typedef struct IComTransaction2EventsVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IComTransaction2Events * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IComTransaction2Events * This);
	ULONG(STDMETHODCALLTYPE * Release) (IComTransaction2Events * This);
	HRESULT(STDMETHODCALLTYPE * OnTransactionStart2) (IComTransaction2Events * This, COMSVCSEVENTINFO * pInfo, REFGUID guidTx, REFGUID tsid, BOOL fRoot, int nIsolationLevel);
	HRESULT(STDMETHODCALLTYPE * OnTransactionPrepare2) (IComTransaction2Events * This, COMSVCSEVENTINFO * pInfo, REFGUID guidTx, BOOL fVoteYes);
	HRESULT(STDMETHODCALLTYPE * OnTransactionAbort2) (IComTransaction2Events * This, COMSVCSEVENTINFO * pInfo, REFGUID guidTx);
	HRESULT(STDMETHODCALLTYPE * OnTransactionCommit2) (IComTransaction2Events * This, COMSVCSEVENTINFO * pInfo, REFGUID guidTx);
	END_INTERFACE
}  IComTransaction2EventsVtbl;
interface IComTransaction2Events
{
	CONST_VTBL struct IComTransaction2EventsVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IComTransaction2Events_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IComTransaction2Events_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define IComTransaction2Events_Release(This)( (This)->lpVtbl -> Release(This) )
#define IComTransaction2Events_OnTransactionStart2(This,pInfo,guidTx,tsid,fRoot,nIsolationLevel)( (This)->lpVtbl -> OnTransactionStart2(This,pInfo,guidTx,tsid,fRoot,nIsolationLevel) )
#define IComTransaction2Events_OnTransactionPrepare2(This,pInfo,guidTx,fVoteYes)( (This)->lpVtbl -> OnTransactionPrepare2(This,pInfo,guidTx,fVoteYes) )
#define IComTransaction2Events_OnTransactionAbort2(This,pInfo,guidTx)( (This)->lpVtbl -> OnTransactionAbort2(This,pInfo,guidTx) )
#define IComTransaction2Events_OnTransactionCommit2(This,pInfo,guidTx)( (This)->lpVtbl -> OnTransactionCommit2(This,pInfo,guidTx) )
#endif
#endif
#ifndef __IComInstance2Events_INTERFACE_DEFINED__
#define __IComInstance2Events_INTERFACE_DEFINED__
extern const IID IID_IComInstance2Events;
typedef struct IComInstance2EventsVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IComInstance2Events * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IComInstance2Events * This);
	ULONG(STDMETHODCALLTYPE * Release) (IComInstance2Events * This);
	HRESULT(STDMETHODCALLTYPE * OnObjectCreate2) (IComInstance2Events * This, COMSVCSEVENTINFO * pInfo, REFGUID guidActivity, REFCLSID clsid, REFGUID tsid, ULONG64 CtxtID, ULONG64 ObjectID, REFGUID guidPartition);
	HRESULT(STDMETHODCALLTYPE * OnObjectDestroy2) (IComInstance2Events * This, COMSVCSEVENTINFO * pInfo, ULONG64 CtxtID);
	END_INTERFACE
}  IComInstance2EventsVtbl;
interface IComInstance2Events
{
	CONST_VTBL struct IComInstance2EventsVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IComInstance2Events_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IComInstance2Events_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define IComInstance2Events_Release(This)( (This)->lpVtbl -> Release(This) )
#define IComInstance2Events_OnObjectCreate2(This,pInfo,guidActivity,clsid,tsid,CtxtID,ObjectID,guidPartition)( (This)->lpVtbl -> OnObjectCreate2(This,pInfo,guidActivity,clsid,tsid,CtxtID,ObjectID,guidPartition) )
#define IComInstance2Events_OnObjectDestroy2(This,pInfo,CtxtID)( (This)->lpVtbl -> OnObjectDestroy2(This,pInfo,CtxtID) )
#endif
#endif
#ifndef __IComObjectPool2Events_INTERFACE_DEFINED__
#define __IComObjectPool2Events_INTERFACE_DEFINED__
extern const IID IID_IComObjectPool2Events;
typedef struct IComObjectPool2EventsVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IComObjectPool2Events * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IComObjectPool2Events * This);
	ULONG(STDMETHODCALLTYPE * Release) (IComObjectPool2Events * This);
	HRESULT(STDMETHODCALLTYPE * OnObjPoolPutObject2) (IComObjectPool2Events * This, COMSVCSEVENTINFO * pInfo, REFGUID guidObject, int nReason, DWORD dwAvailable, ULONG64 oid);
	HRESULT(STDMETHODCALLTYPE * OnObjPoolGetObject2) (IComObjectPool2Events * This, COMSVCSEVENTINFO * pInfo, REFGUID guidActivity, REFGUID guidObject, DWORD dwAvailable, ULONG64 oid, REFGUID guidPartition);
	HRESULT(STDMETHODCALLTYPE * OnObjPoolRecycleToTx2) (IComObjectPool2Events * This, COMSVCSEVENTINFO * pInfo, REFGUID guidActivity, REFGUID guidObject, REFGUID guidTx, ULONG64 objid);
	HRESULT(STDMETHODCALLTYPE * OnObjPoolGetFromTx2) (IComObjectPool2Events * This, COMSVCSEVENTINFO * pInfo, REFGUID guidActivity, REFGUID guidObject, REFGUID guidTx, ULONG64 objid, REFGUID guidPartition);
	END_INTERFACE
}  IComObjectPool2EventsVtbl;
interface IComObjectPool2Events
{
	CONST_VTBL struct IComObjectPool2EventsVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IComObjectPool2Events_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IComObjectPool2Events_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define IComObjectPool2Events_Release(This)( (This)->lpVtbl -> Release(This) )
#define IComObjectPool2Events_OnObjPoolPutObject2(This,pInfo,guidObject,nReason,dwAvailable,oid)( (This)->lpVtbl -> OnObjPoolPutObject2(This,pInfo,guidObject,nReason,dwAvailable,oid) )
#define IComObjectPool2Events_OnObjPoolGetObject2(This,pInfo,guidActivity,guidObject,dwAvailable,oid,guidPartition)( (This)->lpVtbl -> OnObjPoolGetObject2(This,pInfo,guidActivity,guidObject,dwAvailable,oid,guidPartition) )
#define IComObjectPool2Events_OnObjPoolRecycleToTx2(This,pInfo,guidActivity,guidObject,guidTx,objid)( (This)->lpVtbl -> OnObjPoolRecycleToTx2(This,pInfo,guidActivity,guidObject,guidTx,objid) )
#define IComObjectPool2Events_OnObjPoolGetFromTx2(This,pInfo,guidActivity,guidObject,guidTx,objid,guidPartition)( (This)->lpVtbl -> OnObjPoolGetFromTx2(This,pInfo,guidActivity,guidObject,guidTx,objid,guidPartition) )
#endif
#endif
#ifndef __IComObjectConstruction2Events_INTERFACE_DEFINED__
#define __IComObjectConstruction2Events_INTERFACE_DEFINED__
extern const IID IID_IComObjectConstruction2Events;
typedef struct IComObjectConstruction2EventsVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IComObjectConstruction2Events * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IComObjectConstruction2Events * This);
	ULONG(STDMETHODCALLTYPE * Release) (IComObjectConstruction2Events * This);
	HRESULT(STDMETHODCALLTYPE * OnObjectConstruct2) (IComObjectConstruction2Events * This, COMSVCSEVENTINFO * pInfo, REFGUID guidObject, LPCOLESTR sConstructString, ULONG64 oid, REFGUID guidPartition);
	END_INTERFACE
}  IComObjectConstruction2EventsVtbl;
interface IComObjectConstruction2Events
{
	CONST_VTBL struct IComObjectConstruction2EventsVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IComObjectConstruction2Events_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IComObjectConstruction2Events_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define IComObjectConstruction2Events_Release(This)( (This)->lpVtbl -> Release(This) )
#define IComObjectConstruction2Events_OnObjectConstruct2(This,pInfo,guidObject,sConstructString,oid,guidPartition)( (This)->lpVtbl -> OnObjectConstruct2(This,pInfo,guidObject,sConstructString,oid,guidPartition) )
#endif
#endif
#ifndef __ISystemAppEventData_INTERFACE_DEFINED__
#define __ISystemAppEventData_INTERFACE_DEFINED__
extern const IID IID_ISystemAppEventData;
typedef struct ISystemAppEventDataVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (ISystemAppEventData * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (ISystemAppEventData * This);
	ULONG(STDMETHODCALLTYPE * Release) (ISystemAppEventData * This);
	HRESULT(STDMETHODCALLTYPE * Startup) (ISystemAppEventData * This);
	HRESULT(STDMETHODCALLTYPE * OnDataChanged) (ISystemAppEventData * This, DWORD dwPID, DWORD dwMask, DWORD dwNumberSinks, BSTR bstrDwMethodMask, DWORD dwReason, ULONG64 u64TraceHandle);
	END_INTERFACE
}  ISystemAppEventDataVtbl;
interface ISystemAppEventData
{
	CONST_VTBL struct ISystemAppEventDataVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define ISystemAppEventData_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define ISystemAppEventData_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define ISystemAppEventData_Release(This)( (This)->lpVtbl -> Release(This) )
#define ISystemAppEventData_Startup(This)( (This)->lpVtbl -> Startup(This) )
#define ISystemAppEventData_OnDataChanged(This,dwPID,dwMask,dwNumberSinks,bstrDwMethodMask,dwReason,u64TraceHandle)( (This)->lpVtbl -> OnDataChanged(This,dwPID,dwMask,dwNumberSinks,bstrDwMethodMask,dwReason,u64TraceHandle) )
#endif
#endif
#ifndef __IMtsEvents_INTERFACE_DEFINED__
#define __IMtsEvents_INTERFACE_DEFINED__
extern const IID IID_IMtsEvents;
typedef struct IMtsEventsVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IMtsEvents * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IMtsEvents * This);
	ULONG(STDMETHODCALLTYPE * Release) (IMtsEvents * This);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfoCount) (IMtsEvents * This, UINT * pctinfo);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfo) (IMtsEvents * This, UINT iTInfo, LCID lcid, ITypeInfo ** ppTInfo);
	HRESULT(STDMETHODCALLTYPE * GetIDsOfNames) (IMtsEvents * This, REFIID riid, LPOLESTR * rgszNames, UINT cNames, LCID lcid, DISPID * rgDispId);
	HRESULT(STDMETHODCALLTYPE * Invoke) (IMtsEvents * This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS * pDispParams, VARIANT * pVarResult, EXCEPINFO * pExcepInfo, UINT * puArgErr);
	HRESULT(STDMETHODCALLTYPE * get_PackageName) (IMtsEvents * This, BSTR * pVal);
	HRESULT(STDMETHODCALLTYPE * get_PackageGuid) (IMtsEvents * This, BSTR * pVal);
	HRESULT(STDMETHODCALLTYPE * PostEvent) (IMtsEvents * This, VARIANT * vEvent);
	HRESULT(STDMETHODCALLTYPE * get_FireEvents) (IMtsEvents * This, VARIANT_BOOL * pVal);
	HRESULT(STDMETHODCALLTYPE * GetProcessID) (IMtsEvents * This, long *id);
	END_INTERFACE
}  IMtsEventsVtbl;
interface IMtsEvents
{
	CONST_VTBL struct IMtsEventsVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IMtsEvents_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IMtsEvents_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define IMtsEvents_Release(This)( (This)->lpVtbl -> Release(This) )
#define IMtsEvents_GetTypeInfoCount(This,pctinfo)( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define IMtsEvents_GetTypeInfo(This,iTInfo,lcid,ppTInfo)( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define IMtsEvents_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define IMtsEvents_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define IMtsEvents_get_PackageName(This,pVal)( (This)->lpVtbl -> get_PackageName(This,pVal) )
#define IMtsEvents_get_PackageGuid(This,pVal)( (This)->lpVtbl -> get_PackageGuid(This,pVal) )
#define IMtsEvents_PostEvent(This,vEvent)( (This)->lpVtbl -> PostEvent(This,vEvent) )
#define IMtsEvents_get_FireEvents(This,pVal)( (This)->lpVtbl -> get_FireEvents(This,pVal) )
#define IMtsEvents_GetProcessID(This,id)( (This)->lpVtbl -> GetProcessID(This,id) )
#endif
#endif
#ifndef __IMtsEventInfo_INTERFACE_DEFINED__
#define __IMtsEventInfo_INTERFACE_DEFINED__
extern const IID IID_IMtsEventInfo;
typedef struct IMtsEventInfoVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IMtsEventInfo * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IMtsEventInfo * This);
	ULONG(STDMETHODCALLTYPE * Release) (IMtsEventInfo * This);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfoCount) (IMtsEventInfo * This, UINT * pctinfo);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfo) (IMtsEventInfo * This, UINT iTInfo, LCID lcid, ITypeInfo ** ppTInfo);
	HRESULT(STDMETHODCALLTYPE * GetIDsOfNames) (IMtsEventInfo * This, REFIID riid, LPOLESTR * rgszNames, UINT cNames, LCID lcid, DISPID * rgDispId);
	HRESULT(STDMETHODCALLTYPE * Invoke) (IMtsEventInfo * This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS * pDispParams, VARIANT * pVarResult, EXCEPINFO * pExcepInfo, UINT * puArgErr);
	HRESULT(STDMETHODCALLTYPE * get_Names) (IMtsEventInfo * This, IUnknown ** pUnk);
	HRESULT(STDMETHODCALLTYPE * get_DisplayName) (IMtsEventInfo * This, BSTR * sDisplayName);
	HRESULT(STDMETHODCALLTYPE * get_EventID) (IMtsEventInfo * This, BSTR * sGuidEventID);
	HRESULT(STDMETHODCALLTYPE * get_Count) (IMtsEventInfo * This, long *lCount);
	HRESULT(STDMETHODCALLTYPE * get_Value) (IMtsEventInfo * This, BSTR sKey, VARIANT * pVal);
	END_INTERFACE
}  IMtsEventInfoVtbl;
interface IMtsEventInfo
{
	CONST_VTBL struct IMtsEventInfoVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IMtsEventInfo_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IMtsEventInfo_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define IMtsEventInfo_Release(This)( (This)->lpVtbl -> Release(This) )
#define IMtsEventInfo_GetTypeInfoCount(This,pctinfo)( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define IMtsEventInfo_GetTypeInfo(This,iTInfo,lcid,ppTInfo)( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define IMtsEventInfo_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define IMtsEventInfo_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define IMtsEventInfo_get_Names(This,pUnk)( (This)->lpVtbl -> get_Names(This,pUnk) )
#define IMtsEventInfo_get_DisplayName(This,sDisplayName)( (This)->lpVtbl -> get_DisplayName(This,sDisplayName) )
#define IMtsEventInfo_get_EventID(This,sGuidEventID)( (This)->lpVtbl -> get_EventID(This,sGuidEventID) )
#define IMtsEventInfo_get_Count(This,lCount)( (This)->lpVtbl -> get_Count(This,lCount) )
#define IMtsEventInfo_get_Value(This,sKey,pVal)( (This)->lpVtbl -> get_Value(This,sKey,pVal) )
#endif
#endif
#ifndef __IMTSLocator_INTERFACE_DEFINED__
#define __IMTSLocator_INTERFACE_DEFINED__
extern const IID IID_IMTSLocator;
typedef struct IMTSLocatorVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IMTSLocator * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IMTSLocator * This);
	ULONG(STDMETHODCALLTYPE * Release) (IMTSLocator * This);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfoCount) (IMTSLocator * This, UINT * pctinfo);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfo) (IMTSLocator * This, UINT iTInfo, LCID lcid, ITypeInfo ** ppTInfo);
	HRESULT(STDMETHODCALLTYPE * GetIDsOfNames) (IMTSLocator * This, REFIID riid, LPOLESTR * rgszNames, UINT cNames, LCID lcid, DISPID * rgDispId);
	HRESULT(STDMETHODCALLTYPE * Invoke) (IMTSLocator * This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS * pDispParams, VARIANT * pVarResult, EXCEPINFO * pExcepInfo, UINT * puArgErr);
	HRESULT(STDMETHODCALLTYPE * GetEventDispatcher) (IMTSLocator * This, IUnknown ** pUnk);
	END_INTERFACE
}  IMTSLocatorVtbl;
interface IMTSLocator
{
	CONST_VTBL struct IMTSLocatorVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IMTSLocator_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IMTSLocator_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define IMTSLocator_Release(This)( (This)->lpVtbl -> Release(This) )
#define IMTSLocator_GetTypeInfoCount(This,pctinfo)( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define IMTSLocator_GetTypeInfo(This,iTInfo,lcid,ppTInfo)( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define IMTSLocator_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define IMTSLocator_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define IMTSLocator_GetEventDispatcher(This,pUnk)( (This)->lpVtbl -> GetEventDispatcher(This,pUnk) )
#endif
#endif
#ifndef __IMtsGrp_INTERFACE_DEFINED__
#define __IMtsGrp_INTERFACE_DEFINED__
extern const IID IID_IMtsGrp;
typedef struct IMtsGrpVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IMtsGrp * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IMtsGrp * This);
	ULONG(STDMETHODCALLTYPE * Release) (IMtsGrp * This);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfoCount) (IMtsGrp * This, UINT * pctinfo);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfo) (IMtsGrp * This, UINT iTInfo, LCID lcid, ITypeInfo ** ppTInfo);
	HRESULT(STDMETHODCALLTYPE * GetIDsOfNames) (IMtsGrp * This, REFIID riid, LPOLESTR * rgszNames, UINT cNames, LCID lcid, DISPID * rgDispId);
	HRESULT(STDMETHODCALLTYPE * Invoke) (IMtsGrp * This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS * pDispParams, VARIANT * pVarResult, EXCEPINFO * pExcepInfo, UINT * puArgErr);
	HRESULT(STDMETHODCALLTYPE * get_Count) (IMtsGrp * This, long *pVal);
	HRESULT(STDMETHODCALLTYPE * Item) (IMtsGrp * This, long lIndex, IUnknown ** ppUnkDispatcher);
	HRESULT(STDMETHODCALLTYPE * Refresh) (IMtsGrp * This);
	END_INTERFACE
}  IMtsGrpVtbl;
interface IMtsGrp
{
	CONST_VTBL struct IMtsGrpVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IMtsGrp_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IMtsGrp_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define IMtsGrp_Release(This)( (This)->lpVtbl -> Release(This) )
#define IMtsGrp_GetTypeInfoCount(This,pctinfo)( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define IMtsGrp_GetTypeInfo(This,iTInfo,lcid,ppTInfo)( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define IMtsGrp_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define IMtsGrp_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define IMtsGrp_get_Count(This,pVal)( (This)->lpVtbl -> get_Count(This,pVal) )
#define IMtsGrp_Item(This,lIndex,ppUnkDispatcher)( (This)->lpVtbl -> Item(This,lIndex,ppUnkDispatcher) )
#define IMtsGrp_Refresh(This)( (This)->lpVtbl -> Refresh(This) )
#endif
#endif
#ifndef __IMessageMover_INTERFACE_DEFINED__
#define __IMessageMover_INTERFACE_DEFINED__
extern const IID IID_IMessageMover;
typedef struct IMessageMoverVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IMessageMover * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IMessageMover * This);
	ULONG(STDMETHODCALLTYPE * Release) (IMessageMover * This);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfoCount) (IMessageMover * This, UINT * pctinfo);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfo) (IMessageMover * This, UINT iTInfo, LCID lcid, ITypeInfo ** ppTInfo);
	HRESULT(STDMETHODCALLTYPE * GetIDsOfNames) (IMessageMover * This, REFIID riid, LPOLESTR * rgszNames, UINT cNames, LCID lcid, DISPID * rgDispId);
	HRESULT(STDMETHODCALLTYPE * Invoke) (IMessageMover * This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS * pDispParams, VARIANT * pVarResult, EXCEPINFO * pExcepInfo, UINT * puArgErr);
	HRESULT(STDMETHODCALLTYPE * get_SourcePath) (IMessageMover * This, BSTR * pVal);
	HRESULT(STDMETHODCALLTYPE * put_SourcePath) (IMessageMover * This, BSTR newVal);
	HRESULT(STDMETHODCALLTYPE * get_DestPath) (IMessageMover * This, BSTR * pVal);
	HRESULT(STDMETHODCALLTYPE * put_DestPath) (IMessageMover * This, BSTR newVal);
	HRESULT(STDMETHODCALLTYPE * get_CommitBatchSize) (IMessageMover * This, long *pVal);
	HRESULT(STDMETHODCALLTYPE * put_CommitBatchSize) (IMessageMover * This, long newVal);
	HRESULT(STDMETHODCALLTYPE * MoveMessages) (IMessageMover * This, long *plMessagesMoved);
	END_INTERFACE
}  IMessageMoverVtbl;
interface IMessageMover
{
	CONST_VTBL struct IMessageMoverVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IMessageMover_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IMessageMover_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define IMessageMover_Release(This)( (This)->lpVtbl -> Release(This) )
#define IMessageMover_GetTypeInfoCount(This,pctinfo)( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define IMessageMover_GetTypeInfo(This,iTInfo,lcid,ppTInfo)( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define IMessageMover_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define IMessageMover_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define IMessageMover_get_SourcePath(This,pVal)( (This)->lpVtbl -> get_SourcePath(This,pVal) )
#define IMessageMover_put_SourcePath(This,newVal)( (This)->lpVtbl -> put_SourcePath(This,newVal) )
#define IMessageMover_get_DestPath(This,pVal)( (This)->lpVtbl -> get_DestPath(This,pVal) )
#define IMessageMover_put_DestPath(This,newVal)( (This)->lpVtbl -> put_DestPath(This,newVal) )
#define IMessageMover_get_CommitBatchSize(This,pVal)( (This)->lpVtbl -> get_CommitBatchSize(This,pVal) )
#define IMessageMover_put_CommitBatchSize(This,newVal)( (This)->lpVtbl -> put_CommitBatchSize(This,newVal) )
#define IMessageMover_MoveMessages(This,plMessagesMoved)( (This)->lpVtbl -> MoveMessages(This,plMessagesMoved) )
#endif
#endif
#ifndef __IEventServerTrace_INTERFACE_DEFINED__
#define __IEventServerTrace_INTERFACE_DEFINED__
extern const IID IID_IEventServerTrace;
typedef struct IEventServerTraceVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IEventServerTrace * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IEventServerTrace * This);
	ULONG(STDMETHODCALLTYPE * Release) (IEventServerTrace * This);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfoCount) (IEventServerTrace * This, UINT * pctinfo);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfo) (IEventServerTrace * This, UINT iTInfo, LCID lcid, ITypeInfo ** ppTInfo);
	HRESULT(STDMETHODCALLTYPE * GetIDsOfNames) (IEventServerTrace * This, REFIID riid, LPOLESTR * rgszNames, UINT cNames, LCID lcid, DISPID * rgDispId);
	HRESULT(STDMETHODCALLTYPE * Invoke) (IEventServerTrace * This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS * pDispParams, VARIANT * pVarResult, EXCEPINFO * pExcepInfo, UINT * puArgErr);
	HRESULT(STDMETHODCALLTYPE * StartTraceGuid) (IEventServerTrace * This, BSTR bstrguidEvent, BSTR bstrguidFilter, LONG lPidFilter);
	HRESULT(STDMETHODCALLTYPE * StopTraceGuid) (IEventServerTrace * This, BSTR bstrguidEvent, BSTR bstrguidFilter, LONG lPidFilter);
	HRESULT(STDMETHODCALLTYPE * EnumTraceGuid) (IEventServerTrace * This, LONG * plCntGuids, BSTR * pbstrGuidList);
	END_INTERFACE
}  IEventServerTraceVtbl;
interface IEventServerTrace
{
	CONST_VTBL struct IEventServerTraceVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IEventServerTrace_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IEventServerTrace_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define IEventServerTrace_Release(This)( (This)->lpVtbl -> Release(This) )
#define IEventServerTrace_GetTypeInfoCount(This,pctinfo)( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define IEventServerTrace_GetTypeInfo(This,iTInfo,lcid,ppTInfo)( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define IEventServerTrace_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define IEventServerTrace_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define IEventServerTrace_StartTraceGuid(This,bstrguidEvent,bstrguidFilter,lPidFilter)( (This)->lpVtbl -> StartTraceGuid(This,bstrguidEvent,bstrguidFilter,lPidFilter) )
#define IEventServerTrace_StopTraceGuid(This,bstrguidEvent,bstrguidFilter,lPidFilter)( (This)->lpVtbl -> StopTraceGuid(This,bstrguidEvent,bstrguidFilter,lPidFilter) )
#define IEventServerTrace_EnumTraceGuid(This,plCntGuids,pbstrGuidList)( (This)->lpVtbl -> EnumTraceGuid(This,plCntGuids,pbstrGuidList) )
#endif
#endif
typedef struct _RECYCLE_INFO
{
	GUID guidCombaseProcessIdentifier;
	LONGLONG ProcessStartTime;
	DWORD dwRecycleLifetimeLimit;
	DWORD dwRecycleMemoryLimit;
	DWORD dwRecycleExpirationTimeout;
} RECYCLE_INFO;
typedef enum tagDUMPTYPE
{
	DUMPTYPE_FULL = 0,
	DUMPTYPE_MINI = (DUMPTYPE_FULL + 1),
	DUMPTYPE_NONE = (DUMPTYPE_MINI + 1)
} DUMPTYPE;
typedef struct _HANG_INFO
{
	BOOL fAppHangMonitorEnabled;
	BOOL fTerminateOnHang;
	DUMPTYPE DumpType;
	DWORD dwHangTimeout;
	DWORD dwDumpCount;
	DWORD dwInfoMsgCount;
} HANG_INFO;
typedef enum tagCOMPLUS_APPTYPE
{
	APPTYPE_UNKNOWN = 0xffffffff,
	APPTYPE_SERVER = 1,
	APPTYPE_LIBRARY = 0,
	APPTYPE_SWC = 2
} COMPLUS_APPTYPE;
#define TRACKER_STARTSTOP_EVENT L"Global\\COM+ Tracker Push Event"
#define TRACKER_INIT_EVENT L"Global\\COM+ Tracker Init Event"
#ifndef GUID_STRING_SIZE
#define GUID_STRING_SIZE				40
#endif
typedef struct CAppStatistics
{
	DWORD m_cTotalCalls;
	DWORD m_cTotalInstances;
	DWORD m_cTotalClasses;
	DWORD m_cCallsPerSecond;
} APPSTATISTICS;
typedef struct CAppData
{
	DWORD m_idApp;
	WCHAR m_szAppGuid[40];
	DWORD m_dwAppProcessId;
	APPSTATISTICS m_AppStatistics;
} APPDATA;
typedef struct CCLSIDData
{
	CLSID m_clsid;
	DWORD m_cReferences;
	DWORD m_cBound;
	DWORD m_cPooled;
	DWORD m_cInCall;
	DWORD m_dwRespTime;
	DWORD m_cCallsCompleted;
	DWORD m_cCallsFailed;
} CLSIDDATA;
typedef struct CCLSIDData2
{
	CLSID m_clsid;
	GUID m_appid;
	GUID m_partid;
	WCHAR *m_pwszAppName;
	WCHAR *m_pwszCtxName;
	COMPLUS_APPTYPE m_eAppType;
	DWORD m_cReferences;
	DWORD m_cBound;
	DWORD m_cPooled;
	DWORD m_cInCall;
	DWORD m_dwRespTime;
	DWORD m_cCallsCompleted;
	DWORD m_cCallsFailed;
} CLSIDDATA2;
extern RPC_IF_HANDLE __MIDL_itf_autosvcs_0000_0049_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_autosvcs_0000_0049_v0_0_s_ifspec;
#ifndef __IGetAppTrackerData_INTERFACE_DEFINED__
#define __IGetAppTrackerData_INTERFACE_DEFINED__
#define	DATA_NOT_AVAILABLE	( 0xffffffff )
typedef enum _GetAppTrackerDataFlags
{
	GATD_INCLUDE_PROCESS_EXE_NAME = 0x1,
	GATD_INCLUDE_LIBRARY_APPS = 0x2,
	GATD_INCLUDE_SWC = 0x4,
	GATD_INCLUDE_CLASS_NAME = 0x8,
	GATD_INCLUDE_APPLICATION_NAME = 0x10
} GetAppTrackerDataFlags;
typedef struct _ApplicationProcessSummary
{
	GUID PartitionIdPrimaryApplication;
	GUID ApplicationIdPrimaryApplication;
	GUID ApplicationInstanceId;
	DWORD ProcessId;
	COMPLUS_APPTYPE Type;
	LPWSTR ProcessExeName;
	BOOL IsService;
	BOOL IsPaused;
	BOOL IsRecycled;
} ApplicationProcessSummary;
typedef struct _ApplicationProcessStatistics
{
	ULONG NumCallsOutstanding;
	ULONG NumTrackedComponents;
	ULONG NumComponentInstances;
	ULONG AvgCallsPerSecond;
	ULONG Reserved1;
	ULONG Reserved2;
	ULONG Reserved3;
	ULONG Reserved4;
} ApplicationProcessStatistics;
typedef struct _ApplicationProcessRecycleInfo
{
	BOOL IsRecyclable;
	BOOL IsRecycled;
	FILETIME TimeRecycled;
	FILETIME TimeToTerminate;
	long RecycleReasonCode;
	BOOL IsPendingRecycle;
	BOOL HasAutomaticLifetimeRecycling;
	FILETIME TimeForAutomaticRecycling;
	ULONG MemoryLimitInKB;
	ULONG MemoryUsageInKBLastCheck;
	ULONG ActivationLimit;
	ULONG NumActivationsLastReported;
	ULONG CallLimit;
	ULONG NumCallsLastReported;
} ApplicationProcessRecycleInfo;
typedef struct _ApplicationSummary
{
	GUID ApplicationInstanceId;
	GUID PartitionId;
	GUID ApplicationId;
	COMPLUS_APPTYPE Type;
	LPWSTR ApplicationName;
	ULONG NumTrackedComponents;
	ULONG NumComponentInstances;
} ApplicationSummary;
typedef struct _ComponentSummary
{
	GUID ApplicationInstanceId;
	GUID PartitionId;
	GUID ApplicationId;
	CLSID Clsid;
	LPWSTR ClassName;
	LPWSTR ApplicationName;
} ComponentSummary;
typedef struct _ComponentStatistics
{
	ULONG NumInstances;
	ULONG NumBoundReferences;
	ULONG NumPooledObjects;
	ULONG NumObjectsInCall;
	ULONG AvgResponseTimeInMs;
	ULONG NumCallsCompletedRecent;
	ULONG NumCallsFailedRecent;
	ULONG NumCallsCompletedTotal;
	ULONG NumCallsFailedTotal;
	ULONG Reserved1;
	ULONG Reserved2;
	ULONG Reserved3;
	ULONG Reserved4;
} ComponentStatistics;
typedef struct _ComponentHangMonitorInfo
{
	BOOL IsMonitored;
	BOOL TerminateOnHang;
	ULONG AvgCallThresholdInMs;
} ComponentHangMonitorInfo;
extern const IID IID_IGetAppTrackerData;
typedef struct IGetAppTrackerDataVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IGetAppTrackerData * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IGetAppTrackerData * This);
	ULONG(STDMETHODCALLTYPE * Release) (IGetAppTrackerData * This);
	HRESULT(STDMETHODCALLTYPE * GetApplicationProcesses) (IGetAppTrackerData * This, REFGUID PartitionId, REFGUID ApplicationId, DWORD Flags, ULONG * NumApplicationProcesses, ApplicationProcessSummary ** ApplicationProcesses);
	HRESULT(STDMETHODCALLTYPE * GetApplicationProcessDetails) (IGetAppTrackerData * This, REFGUID ApplicationInstanceId, DWORD ProcessId, DWORD Flags, ApplicationProcessSummary * Summary, ApplicationProcessStatistics * Statistics, ApplicationProcessRecycleInfo * RecycleInfo, BOOL * AnyComponentsHangMonitored);
	HRESULT(STDMETHODCALLTYPE * GetApplicationsInProcess) (IGetAppTrackerData * This, REFGUID ApplicationInstanceId, DWORD ProcessId, REFGUID PartitionId, DWORD Flags, ULONG * NumApplicationsInProcess, ApplicationSummary ** Applications);
	HRESULT(STDMETHODCALLTYPE * GetComponentsInProcess) (IGetAppTrackerData * This, REFGUID ApplicationInstanceId, DWORD ProcessId, REFGUID PartitionId, REFGUID ApplicationId, DWORD Flags, ULONG * NumComponentsInProcess, ComponentSummary ** Components);
	HRESULT(STDMETHODCALLTYPE * GetComponentDetails) (IGetAppTrackerData * This, REFGUID ApplicationInstanceId, DWORD ProcessId, REFCLSID Clsid, DWORD Flags, ComponentSummary * Summary, ComponentStatistics * Statistics, ComponentHangMonitorInfo * HangMonitorInfo);
	HRESULT(STDMETHODCALLTYPE * GetTrackerDataAsCollectionObject) (IGetAppTrackerData * This, IUnknown ** TopLevelCollection);
	HRESULT(STDMETHODCALLTYPE * GetSuggestedPollingInterval) (IGetAppTrackerData * This, DWORD * PollingIntervalInSeconds);
	END_INTERFACE
}  IGetAppTrackerDataVtbl;
interface IGetAppTrackerData
{
	CONST_VTBL struct IGetAppTrackerDataVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IGetAppTrackerData_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IGetAppTrackerData_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define IGetAppTrackerData_Release(This)( (This)->lpVtbl -> Release(This) )
#define IGetAppTrackerData_GetApplicationProcesses(This,PartitionId,ApplicationId,Flags,NumApplicationProcesses,ApplicationProcesses)( (This)->lpVtbl -> GetApplicationProcesses(This,PartitionId,ApplicationId,Flags,NumApplicationProcesses,ApplicationProcesses) )
#define IGetAppTrackerData_GetApplicationProcessDetails(This,ApplicationInstanceId,ProcessId,Flags,Summary,Statistics,RecycleInfo,AnyComponentsHangMonitored)( (This)->lpVtbl -> GetApplicationProcessDetails(This,ApplicationInstanceId,ProcessId,Flags,Summary,Statistics,RecycleInfo,AnyComponentsHangMonitored) )
#define IGetAppTrackerData_GetApplicationsInProcess(This,ApplicationInstanceId,ProcessId,PartitionId,Flags,NumApplicationsInProcess,Applications)( (This)->lpVtbl -> GetApplicationsInProcess(This,ApplicationInstanceId,ProcessId,PartitionId,Flags,NumApplicationsInProcess,Applications) )
#define IGetAppTrackerData_GetComponentsInProcess(This,ApplicationInstanceId,ProcessId,PartitionId,ApplicationId,Flags,NumComponentsInProcess,Components)( (This)->lpVtbl -> GetComponentsInProcess(This,ApplicationInstanceId,ProcessId,PartitionId,ApplicationId,Flags,NumComponentsInProcess,Components) )
#define IGetAppTrackerData_GetComponentDetails(This,ApplicationInstanceId,ProcessId,Clsid,Flags,Summary,Statistics,HangMonitorInfo)( (This)->lpVtbl -> GetComponentDetails(This,ApplicationInstanceId,ProcessId,Clsid,Flags,Summary,Statistics,HangMonitorInfo) )
#define IGetAppTrackerData_GetTrackerDataAsCollectionObject(This,TopLevelCollection)( (This)->lpVtbl -> GetTrackerDataAsCollectionObject(This,TopLevelCollection) )
#define IGetAppTrackerData_GetSuggestedPollingInterval(This,PollingIntervalInSeconds)( (This)->lpVtbl -> GetSuggestedPollingInterval(This,PollingIntervalInSeconds) )
#endif
HRESULT STDMETHODCALLTYPE IGetAppTrackerData_RemoteGetApplicationProcessDetails_Proxy(IGetAppTrackerData *This, REFGUID ApplicationInstanceId, DWORD ProcessId, DWORD Flags, ApplicationProcessSummary *Summary, ApplicationProcessStatistics *Statistics, ApplicationProcessRecycleInfo *RecycleInfo, BOOL *AnyComponentsHangMonitored);
void __RPC_STUB IGetAppTrackerData_RemoteGetApplicationProcessDetails_Stub(IRpcStubBuffer *This, IRpcChannelBuffer *_pRpcChannelBuffer, PRPC_MESSAGE _pRpcMessage, DWORD *_pdwStubPhase);
HRESULT STDMETHODCALLTYPE IGetAppTrackerData_RemoteGetComponentDetails_Proxy(IGetAppTrackerData *This, REFGUID ApplicationInstanceId, DWORD ProcessId, REFCLSID Clsid, DWORD Flags, ComponentSummary *Summary, ComponentStatistics *Statistics, ComponentHangMonitorInfo *HangMonitorInfo);
void __RPC_STUB IGetAppTrackerData_RemoteGetComponentDetails_Stub(IRpcStubBuffer *This, IRpcChannelBuffer *_pRpcChannelBuffer, PRPC_MESSAGE _pRpcMessage, DWORD *_pdwStubPhase);
#endif
#ifndef DECLSPEC_UUID
#define DECLSPEC_UUID(x)
#endif
typedef DWORD_PTR RESTYPID;
typedef DWORD_PTR RESID;
typedef LPOLESTR SRESID;
typedef LPCOLESTR constSRESID;
typedef DWORD RESOURCERATING;
typedef long TIMEINSECS;
typedef DWORD_PTR INSTID;
typedef DWORD_PTR TRANSID;
#define MTXDM_E_ENLISTRESOURCEFAILED 0x8004E100
extern RPC_IF_HANDLE __MIDL_itf_autosvcs_0000_0050_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_autosvcs_0000_0050_v0_0_s_ifspec;
#ifndef __IDispenserManager_INTERFACE_DEFINED__
#define __IDispenserManager_INTERFACE_DEFINED__
extern const IID IID_IDispenserManager;
typedef struct IDispenserManagerVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE *QueryInterface) (IDispenserManager *This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE *AddRef) (IDispenserManager *This);
	ULONG(STDMETHODCALLTYPE *Release) (IDispenserManager *This);
	HRESULT(STDMETHODCALLTYPE *RegisterDispenser) (IDispenserManager *This, IDispenserDriver *__MIDL__IDispenserManager0000, LPCOLESTR szDispenserName, IHolder **__MIDL__IDispenserManager0001);
	HRESULT(STDMETHODCALLTYPE *GetContext) (IDispenserManager *This, INSTID *__MIDL__IDispenserManager0002, TRANSID *__MIDL__IDispenserManager0003);
	END_INTERFACE
}  IDispenserManagerVtbl;
interface IDispenserManager
{
	CONST_VTBL struct IDispenserManagerVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IDispenserManager_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IDispenserManager_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define IDispenserManager_Release(This)( (This)->lpVtbl -> Release(This) )
#define IDispenserManager_RegisterDispenser(This,__MIDL__IDispenserManager0000,szDispenserName,__MIDL__IDispenserManager0001)( (This)->lpVtbl -> RegisterDispenser(This,__MIDL__IDispenserManager0000,szDispenserName,__MIDL__IDispenserManager0001) )
#define IDispenserManager_GetContext(This,__MIDL__IDispenserManager0002,__MIDL__IDispenserManager0003)( (This)->lpVtbl -> GetContext(This,__MIDL__IDispenserManager0002,__MIDL__IDispenserManager0003) )
#endif
#endif
extern RPC_IF_HANDLE __MIDL_itf_autosvcs_0000_0051_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_autosvcs_0000_0051_v0_0_s_ifspec;
#ifndef __IHolder_INTERFACE_DEFINED__
#define __IHolder_INTERFACE_DEFINED__
extern const IID IID_IHolder;
typedef struct IHolderVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE *QueryInterface) (IHolder *This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE *AddRef) (IHolder *This);
	ULONG(STDMETHODCALLTYPE *Release) (IHolder *This);
	HRESULT(STDMETHODCALLTYPE *AllocResource) (IHolder *This, const RESTYPID __MIDL__IHolder0000, RESID *__MIDL__IHolder0001);
	HRESULT(STDMETHODCALLTYPE *FreeResource) (IHolder *This, const RESID __MIDL__IHolder0002);
	HRESULT(STDMETHODCALLTYPE *TrackResource) (IHolder *This, const RESID __MIDL__IHolder0003);
	HRESULT(STDMETHODCALLTYPE *TrackResourceS) (IHolder *This, constSRESID __MIDL__IHolder0004);
	HRESULT(STDMETHODCALLTYPE *UntrackResource) (IHolder *This, const RESID __MIDL__IHolder0005, const BOOL __MIDL__IHolder0006);
	HRESULT(STDMETHODCALLTYPE *UntrackResourceS) (IHolder *This, constSRESID __MIDL__IHolder0007, const BOOL __MIDL__IHolder0008);
	HRESULT(STDMETHODCALLTYPE *Close) (IHolder *This);
	HRESULT(STDMETHODCALLTYPE *RequestDestroyResource) (IHolder *This, const RESID __MIDL__IHolder0009);
	END_INTERFACE
}  IHolderVtbl;
interface IHolder
{
	CONST_VTBL struct IHolderVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IHolder_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IHolder_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define IHolder_Release(This)( (This)->lpVtbl -> Release(This) )
#define IHolder_AllocResource(This,__MIDL__IHolder0000,__MIDL__IHolder0001)( (This)->lpVtbl -> AllocResource(This,__MIDL__IHolder0000,__MIDL__IHolder0001) )
#define IHolder_FreeResource(This,__MIDL__IHolder0002)( (This)->lpVtbl -> FreeResource(This,__MIDL__IHolder0002) )
#define IHolder_TrackResource(This,__MIDL__IHolder0003)( (This)->lpVtbl -> TrackResource(This,__MIDL__IHolder0003) )
#define IHolder_TrackResourceS(This,__MIDL__IHolder0004)( (This)->lpVtbl -> TrackResourceS(This,__MIDL__IHolder0004) )
#define IHolder_UntrackResource(This,__MIDL__IHolder0005,__MIDL__IHolder0006)( (This)->lpVtbl -> UntrackResource(This,__MIDL__IHolder0005,__MIDL__IHolder0006) )
#define IHolder_UntrackResourceS(This,__MIDL__IHolder0007,__MIDL__IHolder0008)( (This)->lpVtbl -> UntrackResourceS(This,__MIDL__IHolder0007,__MIDL__IHolder0008) )
#define IHolder_Close(This)( (This)->lpVtbl -> Close(This) )
#define IHolder_RequestDestroyResource(This,__MIDL__IHolder0009)( (This)->lpVtbl -> RequestDestroyResource(This,__MIDL__IHolder0009) )
#endif
#endif
extern RPC_IF_HANDLE __MIDL_itf_autosvcs_0000_0052_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_autosvcs_0000_0052_v0_0_s_ifspec;
#ifndef __IDispenserDriver_INTERFACE_DEFINED__
#define __IDispenserDriver_INTERFACE_DEFINED__
extern const IID IID_IDispenserDriver;
typedef struct IDispenserDriverVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE *QueryInterface) (IDispenserDriver *This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE *AddRef) (IDispenserDriver *This);
	ULONG(STDMETHODCALLTYPE *Release) (IDispenserDriver *This);
	HRESULT(STDMETHODCALLTYPE *CreateResource) (IDispenserDriver *This, const RESTYPID ResTypId, RESID *pResId, TIMEINSECS *pSecsFreeBeforeDestroy);
	HRESULT(STDMETHODCALLTYPE *RateResource) (IDispenserDriver *This, const RESTYPID ResTypId, const RESID ResId, const BOOL fRequiresTransactionEnlistment, RESOURCERATING *pRating);
	HRESULT(STDMETHODCALLTYPE *EnlistResource) (IDispenserDriver *This, const RESID ResId, const TRANSID TransId);
	HRESULT(STDMETHODCALLTYPE *ResetResource) (IDispenserDriver *This, const RESID ResId);
	HRESULT(STDMETHODCALLTYPE *DestroyResource) (IDispenserDriver *This, const RESID ResId);
	HRESULT(STDMETHODCALLTYPE *DestroyResourceS) (IDispenserDriver *This, constSRESID ResId);
	END_INTERFACE
}  IDispenserDriverVtbl;
interface IDispenserDriver
{
	CONST_VTBL struct IDispenserDriverVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IDispenserDriver_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IDispenserDriver_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define IDispenserDriver_Release(This)( (This)->lpVtbl -> Release(This) )
#define IDispenserDriver_CreateResource(This,ResTypId,pResId,pSecsFreeBeforeDestroy)( (This)->lpVtbl -> CreateResource(This,ResTypId,pResId,pSecsFreeBeforeDestroy) )
#define IDispenserDriver_RateResource(This,ResTypId,ResId,fRequiresTransactionEnlistment,pRating)( (This)->lpVtbl -> RateResource(This,ResTypId,ResId,fRequiresTransactionEnlistment,pRating) )
#define IDispenserDriver_EnlistResource(This,ResId,TransId)( (This)->lpVtbl -> EnlistResource(This,ResId,TransId) )
#define IDispenserDriver_ResetResource(This,ResId)( (This)->lpVtbl -> ResetResource(This,ResId) )
#define IDispenserDriver_DestroyResource(This,ResId)( (This)->lpVtbl -> DestroyResource(This,ResId) )
#define IDispenserDriver_DestroyResourceS(This,ResId)( (This)->lpVtbl -> DestroyResourceS(This,ResId) )
#endif
#endif
#ifdef USE_UUIDOF_FOR_IID_
#define  IID_IHolder             __uuidof(IIHolder)
#define  IID_IDispenserManager   __uuidof(IDispenserManager)
#define  IID_IDispenserDriver    __uuidof(IDispenserDriver)
#endif
#define CRR_NO_REASON_SUPPLIED  0x00000000
#define CRR_LIFETIME_LIMIT      0xFFFFFFFF
#define CRR_ACTIVATION_LIMIT    0xFFFFFFFE
#define CRR_CALL_LIMIT          0xFFFFFFFD
#define CRR_MEMORY_LIMIT        0xFFFFFFFC
#define CRR_RECYCLED_FROM_UI    0xFFFFFFFB
extern const CLSID CLSID_MTSPackage;
extern const GUID GUID_DefaultAppPartition;
extern const GUID GUID_FinalizerCID;
extern const GUID IID_IEnterActivityWithNoLock;
extern RPC_IF_HANDLE __MIDL_itf_autosvcs_0000_0053_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_autosvcs_0000_0053_v0_0_s_ifspec;
#ifndef __ITransactionProxy_INTERFACE_DEFINED__
#define __ITransactionProxy_INTERFACE_DEFINED__
extern const IID IID_ITransactionProxy;
typedef struct ITransactionProxyVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE *QueryInterface) (ITransactionProxy *This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE *AddRef) (ITransactionProxy *This);
	ULONG(STDMETHODCALLTYPE *Release) (ITransactionProxy *This);
	HRESULT(STDMETHODCALLTYPE *Commit) (ITransactionProxy *This, GUID guid);
	HRESULT(STDMETHODCALLTYPE *Abort) (ITransactionProxy *This);
	HRESULT(STDMETHODCALLTYPE *Promote) (ITransactionProxy *This, ITransaction **pTransaction);
	HRESULT(STDMETHODCALLTYPE *CreateVoter) (ITransactionProxy *This, ITransactionVoterNotifyAsync2 *pTxAsync, ITransactionVoterBallotAsync2 **ppBallot);
	HRESULT(STDMETHODCALLTYPE *GetIsolationLevel) (ITransactionProxy *This, ISOLEVEL *__MIDL__ITransactionProxy0000);
	HRESULT(STDMETHODCALLTYPE *GetIdentifier) (ITransactionProxy *This, GUID *pbstrIdentifier);
	HRESULT(STDMETHODCALLTYPE *IsReusable) (ITransactionProxy *This, BOOL *pfIsReusable);
	END_INTERFACE
}  ITransactionProxyVtbl;
interface ITransactionProxy
{
	CONST_VTBL struct ITransactionProxyVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define ITransactionProxy_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define ITransactionProxy_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define ITransactionProxy_Release(This)( (This)->lpVtbl -> Release(This) )
#define ITransactionProxy_Commit(This,guid)( (This)->lpVtbl -> Commit(This,guid) )
#define ITransactionProxy_Abort(This)( (This)->lpVtbl -> Abort(This) )
#define ITransactionProxy_Promote(This,pTransaction)( (This)->lpVtbl -> Promote(This,pTransaction) )
#define ITransactionProxy_CreateVoter(This,pTxAsync,ppBallot)( (This)->lpVtbl -> CreateVoter(This,pTxAsync,ppBallot) )
#define ITransactionProxy_GetIsolationLevel(This,__MIDL__ITransactionProxy0000)( (This)->lpVtbl -> GetIsolationLevel(This,__MIDL__ITransactionProxy0000) )
#define ITransactionProxy_GetIdentifier(This,pbstrIdentifier)( (This)->lpVtbl -> GetIdentifier(This,pbstrIdentifier) )
#define ITransactionProxy_IsReusable(This,pfIsReusable)( (This)->lpVtbl -> IsReusable(This,pfIsReusable) )
#endif
#endif
#ifndef __IContextSecurityPerimeter_INTERFACE_DEFINED__
#define __IContextSecurityPerimeter_INTERFACE_DEFINED__
extern const IID IID_IContextSecurityPerimeter;
typedef struct IContextSecurityPerimeterVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE *QueryInterface) (IContextSecurityPerimeter *This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE *AddRef) (IContextSecurityPerimeter *This);
	ULONG(STDMETHODCALLTYPE *Release) (IContextSecurityPerimeter *This);
	HRESULT(STDMETHODCALLTYPE *GetPerimeterFlag) (IContextSecurityPerimeter *This, BOOL *pFlag);
	HRESULT(STDMETHODCALLTYPE *SetPerimeterFlag) (IContextSecurityPerimeter *This, BOOL fFlag);
	END_INTERFACE
}  IContextSecurityPerimeterVtbl;
interface IContextSecurityPerimeter
{
	CONST_VTBL struct IContextSecurityPerimeterVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IContextSecurityPerimeter_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IContextSecurityPerimeter_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define IContextSecurityPerimeter_Release(This)( (This)->lpVtbl -> Release(This) )
#define IContextSecurityPerimeter_GetPerimeterFlag(This,pFlag)( (This)->lpVtbl -> GetPerimeterFlag(This,pFlag) )
#define IContextSecurityPerimeter_SetPerimeterFlag(This,fFlag)( (This)->lpVtbl -> SetPerimeterFlag(This,fFlag) )
#endif
#endif
#ifndef __ITxProxyHolder_INTERFACE_DEFINED__
#define __ITxProxyHolder_INTERFACE_DEFINED__
extern const IID IID_ITxProxyHolder;
typedef struct ITxProxyHolderVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE *QueryInterface) (ITxProxyHolder *This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE *AddRef) (ITxProxyHolder *This);
	ULONG(STDMETHODCALLTYPE *Release) (ITxProxyHolder *This);
	void (STDMETHODCALLTYPE *GetIdentifier) (ITxProxyHolder *This, GUID *pGuidLtx);
	END_INTERFACE
}  ITxProxyHolderVtbl;
interface ITxProxyHolder
{
	CONST_VTBL struct ITxProxyHolderVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define ITxProxyHolder_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define ITxProxyHolder_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define ITxProxyHolder_Release(This)( (This)->lpVtbl -> Release(This) )
#define ITxProxyHolder_GetIdentifier(This,pGuidLtx)( (This)->lpVtbl -> GetIdentifier(This,pGuidLtx) )
#endif
#endif
#ifndef __IObjectContext_INTERFACE_DEFINED__
#define __IObjectContext_INTERFACE_DEFINED__
extern const IID IID_IObjectContext;
typedef struct IObjectContextVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE *QueryInterface) (IObjectContext *This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE *AddRef) (IObjectContext *This);
	ULONG(STDMETHODCALLTYPE *Release) (IObjectContext *This);
	HRESULT(STDMETHODCALLTYPE *CreateInstance) (IObjectContext *This, REFCLSID rclsid, REFIID riid, LPVOID *ppv);
	HRESULT(STDMETHODCALLTYPE *SetComplete) (IObjectContext *This);
	HRESULT(STDMETHODCALLTYPE *SetAbort) (IObjectContext *This);
	HRESULT(STDMETHODCALLTYPE *EnableCommit) (IObjectContext *This);
	HRESULT(STDMETHODCALLTYPE *DisableCommit) (IObjectContext *This);
	BOOL(STDMETHODCALLTYPE *IsInTransaction) (IObjectContext *This);
	BOOL(STDMETHODCALLTYPE *IsSecurityEnabled) (IObjectContext *This);
	HRESULT(STDMETHODCALLTYPE *IsCallerInRole) (IObjectContext *This, BSTR bstrRole, BOOL *pfIsInRole);
	END_INTERFACE
}  IObjectContextVtbl;
interface IObjectContext
{
	CONST_VTBL struct IObjectContextVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IObjectContext_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IObjectContext_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define IObjectContext_Release(This)( (This)->lpVtbl -> Release(This) )
#define IObjectContext_CreateInstance(This,rclsid,riid,ppv)( (This)->lpVtbl -> CreateInstance(This,rclsid,riid,ppv) )
#define IObjectContext_SetComplete(This)( (This)->lpVtbl -> SetComplete(This) )
#define IObjectContext_SetAbort(This)( (This)->lpVtbl -> SetAbort(This) )
#define IObjectContext_EnableCommit(This)( (This)->lpVtbl -> EnableCommit(This) )
#define IObjectContext_DisableCommit(This)( (This)->lpVtbl -> DisableCommit(This) )
#define IObjectContext_IsInTransaction(This)( (This)->lpVtbl -> IsInTransaction(This) )
#define IObjectContext_IsSecurityEnabled(This)( (This)->lpVtbl -> IsSecurityEnabled(This) )
#define IObjectContext_IsCallerInRole(This,bstrRole,pfIsInRole)( (This)->lpVtbl -> IsCallerInRole(This,bstrRole,pfIsInRole) )
#endif
#endif
#ifndef __IObjectControl_INTERFACE_DEFINED__
#define __IObjectControl_INTERFACE_DEFINED__
extern const IID IID_IObjectControl;
typedef struct IObjectControlVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE *QueryInterface) (IObjectControl *This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE *AddRef) (IObjectControl *This);
	ULONG(STDMETHODCALLTYPE *Release) (IObjectControl *This);
	HRESULT(STDMETHODCALLTYPE *Activate) (IObjectControl *This);
	void (STDMETHODCALLTYPE *Deactivate) (IObjectControl *This);
	BOOL(STDMETHODCALLTYPE *CanBePooled) (IObjectControl *This);
	END_INTERFACE
}  IObjectControlVtbl;
interface IObjectControl
{
	CONST_VTBL struct IObjectControlVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IObjectControl_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IObjectControl_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define IObjectControl_Release(This)( (This)->lpVtbl -> Release(This) )
#define IObjectControl_Activate(This)( (This)->lpVtbl -> Activate(This) )
#define IObjectControl_Deactivate(This)( (This)->lpVtbl -> Deactivate(This) )
#define IObjectControl_CanBePooled(This)( (This)->lpVtbl -> CanBePooled(This) )
#endif
#endif
#ifndef __IEnumNames_INTERFACE_DEFINED__
#define __IEnumNames_INTERFACE_DEFINED__
extern const IID IID_IEnumNames;
typedef struct IEnumNamesVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE *QueryInterface) (IEnumNames *This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE *AddRef) (IEnumNames *This);
	ULONG(STDMETHODCALLTYPE *Release) (IEnumNames *This);
	HRESULT(STDMETHODCALLTYPE *Next) (IEnumNames *This, unsigned long celt, BSTR *rgname, unsigned long *pceltFetched);
	HRESULT(STDMETHODCALLTYPE *Skip) (IEnumNames *This, unsigned long celt);
	HRESULT(STDMETHODCALLTYPE *Reset) (IEnumNames *This);
	HRESULT(STDMETHODCALLTYPE *Clone) (IEnumNames *This, IEnumNames **ppenum);
	END_INTERFACE
}  IEnumNamesVtbl;
interface IEnumNames
{
	CONST_VTBL struct IEnumNamesVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IEnumNames_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IEnumNames_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define IEnumNames_Release(This)( (This)->lpVtbl -> Release(This) )
#define IEnumNames_Next(This,celt,rgname,pceltFetched)( (This)->lpVtbl -> Next(This,celt,rgname,pceltFetched) )
#define IEnumNames_Skip(This,celt)( (This)->lpVtbl -> Skip(This,celt) )
#define IEnumNames_Reset(This)( (This)->lpVtbl -> Reset(This) )
#define IEnumNames_Clone(This,ppenum)( (This)->lpVtbl -> Clone(This,ppenum) )
#endif
#endif
#ifndef __ISecurityProperty_INTERFACE_DEFINED__
#define __ISecurityProperty_INTERFACE_DEFINED__
extern const IID IID_ISecurityProperty;
typedef struct ISecurityPropertyVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE *QueryInterface) (ISecurityProperty *This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE *AddRef) (ISecurityProperty *This);
	ULONG(STDMETHODCALLTYPE *Release) (ISecurityProperty *This);
	HRESULT(STDMETHODCALLTYPE *GetDirectCreatorSID) (ISecurityProperty *This, PSID *pSID);
	HRESULT(STDMETHODCALLTYPE *GetOriginalCreatorSID) (ISecurityProperty *This, PSID *pSID);
	HRESULT(STDMETHODCALLTYPE *GetDirectCallerSID) (ISecurityProperty *This, PSID *pSID);
	HRESULT(STDMETHODCALLTYPE *GetOriginalCallerSID) (ISecurityProperty *This, PSID *pSID);
	HRESULT(STDMETHODCALLTYPE *ReleaseSID) (ISecurityProperty *This, PSID pSID);
	END_INTERFACE
}  ISecurityPropertyVtbl;
interface ISecurityProperty
{
	CONST_VTBL struct ISecurityPropertyVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define ISecurityProperty_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define ISecurityProperty_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define ISecurityProperty_Release(This)( (This)->lpVtbl -> Release(This) )
#define ISecurityProperty_GetDirectCreatorSID(This,pSID)( (This)->lpVtbl -> GetDirectCreatorSID(This,pSID) )
#define ISecurityProperty_GetOriginalCreatorSID(This,pSID)( (This)->lpVtbl -> GetOriginalCreatorSID(This,pSID) )
#define ISecurityProperty_GetDirectCallerSID(This,pSID)( (This)->lpVtbl -> GetDirectCallerSID(This,pSID) )
#define ISecurityProperty_GetOriginalCallerSID(This,pSID)( (This)->lpVtbl -> GetOriginalCallerSID(This,pSID) )
#define ISecurityProperty_ReleaseSID(This,pSID)( (This)->lpVtbl -> ReleaseSID(This,pSID) )
#endif
#endif
#ifndef __ObjectControl_INTERFACE_DEFINED__
#define __ObjectControl_INTERFACE_DEFINED__
extern const IID IID_ObjectControl;
typedef struct ObjectControlVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE *QueryInterface) (ObjectControl *This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE *AddRef) (ObjectControl *This);
	ULONG(STDMETHODCALLTYPE *Release) (ObjectControl *This);
	HRESULT(STDMETHODCALLTYPE *Activate) (ObjectControl *This);
	HRESULT(STDMETHODCALLTYPE *Deactivate) (ObjectControl *This);
	HRESULT(STDMETHODCALLTYPE *CanBePooled) (ObjectControl *This, VARIANT_BOOL *pbPoolable);
	END_INTERFACE
}  ObjectControlVtbl;
interface ObjectControl
{
	CONST_VTBL struct ObjectControlVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define ObjectControl_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define ObjectControl_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define ObjectControl_Release(This)( (This)->lpVtbl -> Release(This) )
#define ObjectControl_Activate(This)( (This)->lpVtbl -> Activate(This) )
#define ObjectControl_Deactivate(This)( (This)->lpVtbl -> Deactivate(This) )
#define ObjectControl_CanBePooled(This,pbPoolable)( (This)->lpVtbl -> CanBePooled(This,pbPoolable) )
#endif
#endif
#ifndef __ISharedProperty_INTERFACE_DEFINED__
#define __ISharedProperty_INTERFACE_DEFINED__
extern const IID IID_ISharedProperty;
typedef struct ISharedPropertyVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE *QueryInterface) (ISharedProperty *This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE *AddRef) (ISharedProperty *This);
	ULONG(STDMETHODCALLTYPE *Release) (ISharedProperty *This);
	HRESULT(STDMETHODCALLTYPE *GetTypeInfoCount) (ISharedProperty *This, UINT *pctinfo);
	HRESULT(STDMETHODCALLTYPE *GetTypeInfo) (ISharedProperty *This, UINT iTInfo, LCID lcid, ITypeInfo **ppTInfo);
	HRESULT(STDMETHODCALLTYPE *GetIDsOfNames) (ISharedProperty *This, REFIID riid, LPOLESTR *rgszNames, UINT cNames, LCID lcid, DISPID *rgDispId);
	HRESULT(STDMETHODCALLTYPE *Invoke) (ISharedProperty *This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS *pDispParams, VARIANT *pVarResult, EXCEPINFO *pExcepInfo, UINT *puArgErr);
	HRESULT(STDMETHODCALLTYPE *get_Value) (ISharedProperty *This, VARIANT *pVal);
	HRESULT(STDMETHODCALLTYPE *put_Value) (ISharedProperty *This, VARIANT val);
	END_INTERFACE
}  ISharedPropertyVtbl;
interface ISharedProperty
{
	CONST_VTBL struct ISharedPropertyVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define ISharedProperty_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define ISharedProperty_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define ISharedProperty_Release(This)( (This)->lpVtbl -> Release(This) )
#define ISharedProperty_GetTypeInfoCount(This,pctinfo)( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define ISharedProperty_GetTypeInfo(This,iTInfo,lcid,ppTInfo)( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define ISharedProperty_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define ISharedProperty_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define ISharedProperty_get_Value(This,pVal)( (This)->lpVtbl -> get_Value(This,pVal) )
#define ISharedProperty_put_Value(This,val)( (This)->lpVtbl -> put_Value(This,val) )
#endif
#endif
#ifndef __ISharedPropertyGroup_INTERFACE_DEFINED__
#define __ISharedPropertyGroup_INTERFACE_DEFINED__
extern const IID IID_ISharedPropertyGroup;
typedef struct ISharedPropertyGroupVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE *QueryInterface) (ISharedPropertyGroup *This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE *AddRef) (ISharedPropertyGroup *This);
	ULONG(STDMETHODCALLTYPE *Release) (ISharedPropertyGroup *This);
	HRESULT(STDMETHODCALLTYPE *GetTypeInfoCount) (ISharedPropertyGroup *This, UINT *pctinfo);
	HRESULT(STDMETHODCALLTYPE *GetTypeInfo) (ISharedPropertyGroup *This, UINT iTInfo, LCID lcid, ITypeInfo **ppTInfo);
	HRESULT(STDMETHODCALLTYPE *GetIDsOfNames) (ISharedPropertyGroup *This, REFIID riid, LPOLESTR *rgszNames, UINT cNames, LCID lcid, DISPID *rgDispId);
	HRESULT(STDMETHODCALLTYPE *Invoke) (ISharedPropertyGroup *This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS *pDispParams, VARIANT *pVarResult, EXCEPINFO *pExcepInfo, UINT *puArgErr);
	HRESULT(STDMETHODCALLTYPE *CreatePropertyByPosition) (ISharedPropertyGroup *This, int Index, VARIANT_BOOL *fExists, ISharedProperty **ppProp);
	HRESULT(STDMETHODCALLTYPE *get_PropertyByPosition) (ISharedPropertyGroup *This, int Index, ISharedProperty **ppProperty);
	HRESULT(STDMETHODCALLTYPE *CreateProperty) (ISharedPropertyGroup *This, BSTR Name, VARIANT_BOOL *fExists, ISharedProperty **ppProp);
	HRESULT(STDMETHODCALLTYPE *get_Property) (ISharedPropertyGroup *This, BSTR Name, ISharedProperty **ppProperty);
	END_INTERFACE
}  ISharedPropertyGroupVtbl;
interface ISharedPropertyGroup
{
	CONST_VTBL struct ISharedPropertyGroupVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define ISharedPropertyGroup_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define ISharedPropertyGroup_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define ISharedPropertyGroup_Release(This)( (This)->lpVtbl -> Release(This) )
#define ISharedPropertyGroup_GetTypeInfoCount(This,pctinfo)( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define ISharedPropertyGroup_GetTypeInfo(This,iTInfo,lcid,ppTInfo)( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define ISharedPropertyGroup_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define ISharedPropertyGroup_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define ISharedPropertyGroup_CreatePropertyByPosition(This,Index,fExists,ppProp)( (This)->lpVtbl -> CreatePropertyByPosition(This,Index,fExists,ppProp) )
#define ISharedPropertyGroup_get_PropertyByPosition(This,Index,ppProperty)( (This)->lpVtbl -> get_PropertyByPosition(This,Index,ppProperty) )
#define ISharedPropertyGroup_CreateProperty(This,Name,fExists,ppProp)( (This)->lpVtbl -> CreateProperty(This,Name,fExists,ppProp) )
#define ISharedPropertyGroup_get_Property(This,Name,ppProperty)( (This)->lpVtbl -> get_Property(This,Name,ppProperty) )
#endif
#endif
#ifndef __ISharedPropertyGroupManager_INTERFACE_DEFINED__
#define __ISharedPropertyGroupManager_INTERFACE_DEFINED__
extern const IID IID_ISharedPropertyGroupManager;
typedef struct ISharedPropertyGroupManagerVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE *QueryInterface) (ISharedPropertyGroupManager *This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE *AddRef) (ISharedPropertyGroupManager *This);
	ULONG(STDMETHODCALLTYPE *Release) (ISharedPropertyGroupManager *This);
	HRESULT(STDMETHODCALLTYPE *GetTypeInfoCount) (ISharedPropertyGroupManager *This, UINT *pctinfo);
	HRESULT(STDMETHODCALLTYPE *GetTypeInfo) (ISharedPropertyGroupManager *This, UINT iTInfo, LCID lcid, ITypeInfo **ppTInfo);
	HRESULT(STDMETHODCALLTYPE *GetIDsOfNames) (ISharedPropertyGroupManager *This, REFIID riid, LPOLESTR *rgszNames, UINT cNames, LCID lcid, DISPID *rgDispId);
	HRESULT(STDMETHODCALLTYPE *Invoke) (ISharedPropertyGroupManager *This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS *pDispParams, VARIANT *pVarResult, EXCEPINFO *pExcepInfo, UINT *puArgErr);
	HRESULT(STDMETHODCALLTYPE *CreatePropertyGroup) (ISharedPropertyGroupManager *This, BSTR Name, LONG *dwIsoMode, LONG *dwRelMode, VARIANT_BOOL *fExists, ISharedPropertyGroup **ppGroup);
	HRESULT(STDMETHODCALLTYPE *get_Group) (ISharedPropertyGroupManager *This, BSTR Name, ISharedPropertyGroup **ppGroup);
	HRESULT(STDMETHODCALLTYPE *get__NewEnum) (ISharedPropertyGroupManager *This, IUnknown **retval);
	END_INTERFACE
}  ISharedPropertyGroupManagerVtbl;
interface ISharedPropertyGroupManager
{
	CONST_VTBL struct ISharedPropertyGroupManagerVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define ISharedPropertyGroupManager_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define ISharedPropertyGroupManager_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define ISharedPropertyGroupManager_Release(This)( (This)->lpVtbl -> Release(This) )
#define ISharedPropertyGroupManager_GetTypeInfoCount(This,pctinfo)( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define ISharedPropertyGroupManager_GetTypeInfo(This,iTInfo,lcid,ppTInfo)( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define ISharedPropertyGroupManager_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define ISharedPropertyGroupManager_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define ISharedPropertyGroupManager_CreatePropertyGroup(This,Name,dwIsoMode,dwRelMode,fExists,ppGroup)( (This)->lpVtbl -> CreatePropertyGroup(This,Name,dwIsoMode,dwRelMode,fExists,ppGroup) )
#define ISharedPropertyGroupManager_get_Group(This,Name,ppGroup)( (This)->lpVtbl -> get_Group(This,Name,ppGroup) )
#define ISharedPropertyGroupManager_get__NewEnum(This,retval)( (This)->lpVtbl -> get__NewEnum(This,retval) )
#endif
#endif
#ifndef __IObjectConstruct_INTERFACE_DEFINED__
#define __IObjectConstruct_INTERFACE_DEFINED__
extern const IID IID_IObjectConstruct;
typedef struct IObjectConstructVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE *QueryInterface) (IObjectConstruct *This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE *AddRef) (IObjectConstruct *This);
	ULONG(STDMETHODCALLTYPE *Release) (IObjectConstruct *This);
	HRESULT(STDMETHODCALLTYPE *Construct) (IObjectConstruct *This, IDispatch *pCtorObj);
	END_INTERFACE
}  IObjectConstructVtbl;
interface IObjectConstruct
{
	CONST_VTBL struct IObjectConstructVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IObjectConstruct_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IObjectConstruct_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define IObjectConstruct_Release(This)( (This)->lpVtbl -> Release(This) )
#define IObjectConstruct_Construct(This,pCtorObj)( (This)->lpVtbl -> Construct(This,pCtorObj) )
#endif
#endif
#ifndef __IObjectConstructString_INTERFACE_DEFINED__
#define __IObjectConstructString_INTERFACE_DEFINED__
extern const IID IID_IObjectConstructString;
typedef struct IObjectConstructStringVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE *QueryInterface) (IObjectConstructString *This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE *AddRef) (IObjectConstructString *This);
	ULONG(STDMETHODCALLTYPE *Release) (IObjectConstructString *This);
	HRESULT(STDMETHODCALLTYPE *GetTypeInfoCount) (IObjectConstructString *This, UINT *pctinfo);
	HRESULT(STDMETHODCALLTYPE *GetTypeInfo) (IObjectConstructString *This, UINT iTInfo, LCID lcid, ITypeInfo **ppTInfo);
	HRESULT(STDMETHODCALLTYPE *GetIDsOfNames) (IObjectConstructString *This, REFIID riid, LPOLESTR *rgszNames, UINT cNames, LCID lcid, DISPID *rgDispId);
	HRESULT(STDMETHODCALLTYPE *Invoke) (IObjectConstructString *This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS *pDispParams, VARIANT *pVarResult, EXCEPINFO *pExcepInfo, UINT *puArgErr);
	HRESULT(STDMETHODCALLTYPE *get_ConstructString) (IObjectConstructString *This, BSTR *pVal);
	END_INTERFACE
}  IObjectConstructStringVtbl;
interface IObjectConstructString
{
	CONST_VTBL struct IObjectConstructStringVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IObjectConstructString_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IObjectConstructString_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define IObjectConstructString_Release(This)( (This)->lpVtbl -> Release(This) )
#define IObjectConstructString_GetTypeInfoCount(This,pctinfo)( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define IObjectConstructString_GetTypeInfo(This,iTInfo,lcid,ppTInfo)( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define IObjectConstructString_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define IObjectConstructString_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define IObjectConstructString_get_ConstructString(This,pVal)( (This)->lpVtbl -> get_ConstructString(This,pVal) )
#endif
#endif
#ifndef __IObjectContextActivity_INTERFACE_DEFINED__
#define __IObjectContextActivity_INTERFACE_DEFINED__
extern const IID IID_IObjectContextActivity;
typedef struct IObjectContextActivityVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE *QueryInterface) (IObjectContextActivity *This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE *AddRef) (IObjectContextActivity *This);
	ULONG(STDMETHODCALLTYPE *Release) (IObjectContextActivity *This);
	HRESULT(STDMETHODCALLTYPE *GetActivityId) (IObjectContextActivity *This, GUID *pGUID);
	END_INTERFACE
}  IObjectContextActivityVtbl;
interface IObjectContextActivity
{
	CONST_VTBL struct IObjectContextActivityVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IObjectContextActivity_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IObjectContextActivity_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define IObjectContextActivity_Release(This)( (This)->lpVtbl -> Release(This) )
#define IObjectContextActivity_GetActivityId(This,pGUID)( (This)->lpVtbl -> GetActivityId(This,pGUID) )
#endif
#endif
#ifndef __IObjectContextInfo_INTERFACE_DEFINED__
#define __IObjectContextInfo_INTERFACE_DEFINED__
extern const IID IID_IObjectContextInfo;
typedef struct IObjectContextInfoVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE *QueryInterface) (IObjectContextInfo *This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE *AddRef) (IObjectContextInfo *This);
	ULONG(STDMETHODCALLTYPE *Release) (IObjectContextInfo *This);
	BOOL(STDMETHODCALLTYPE *IsInTransaction) (IObjectContextInfo *This);
	HRESULT(STDMETHODCALLTYPE *GetTransaction) (IObjectContextInfo *This, IUnknown **pptrans);
	HRESULT(STDMETHODCALLTYPE *GetTransactionId) (IObjectContextInfo *This, GUID *pGuid);
	HRESULT(STDMETHODCALLTYPE *GetActivityId) (IObjectContextInfo *This, GUID *pGUID);
	HRESULT(STDMETHODCALLTYPE *GetContextId) (IObjectContextInfo *This, GUID *pGuid);
	END_INTERFACE
}  IObjectContextInfoVtbl;
interface IObjectContextInfo
{
	CONST_VTBL struct IObjectContextInfoVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IObjectContextInfo_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IObjectContextInfo_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define IObjectContextInfo_Release(This)( (This)->lpVtbl -> Release(This) )
#define IObjectContextInfo_IsInTransaction(This)( (This)->lpVtbl -> IsInTransaction(This) )
#define IObjectContextInfo_GetTransaction(This,pptrans)( (This)->lpVtbl -> GetTransaction(This,pptrans) )
#define IObjectContextInfo_GetTransactionId(This,pGuid)( (This)->lpVtbl -> GetTransactionId(This,pGuid) )
#define IObjectContextInfo_GetActivityId(This,pGUID)( (This)->lpVtbl -> GetActivityId(This,pGUID) )
#define IObjectContextInfo_GetContextId(This,pGuid)( (This)->lpVtbl -> GetContextId(This,pGuid) )
#endif
#endif
#ifndef __IObjectContextInfo2_INTERFACE_DEFINED__
#define __IObjectContextInfo2_INTERFACE_DEFINED__
extern const IID IID_IObjectContextInfo2;
typedef struct IObjectContextInfo2Vtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE *QueryInterface) (IObjectContextInfo2 *This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE *AddRef) (IObjectContextInfo2 *This);
	ULONG(STDMETHODCALLTYPE *Release) (IObjectContextInfo2 *This);
	BOOL(STDMETHODCALLTYPE *IsInTransaction) (IObjectContextInfo2 *This);
	HRESULT(STDMETHODCALLTYPE *GetTransaction) (IObjectContextInfo2 *This, IUnknown **pptrans);
	HRESULT(STDMETHODCALLTYPE *GetTransactionId) (IObjectContextInfo2 *This, GUID *pGuid);
	HRESULT(STDMETHODCALLTYPE *GetActivityId) (IObjectContextInfo2 *This, GUID *pGUID);
	HRESULT(STDMETHODCALLTYPE *GetContextId) (IObjectContextInfo2 *This, GUID *pGuid);
	HRESULT(STDMETHODCALLTYPE *GetPartitionId) (IObjectContextInfo2 *This, GUID *pGuid);
	HRESULT(STDMETHODCALLTYPE *GetApplicationId) (IObjectContextInfo2 *This, GUID *pGuid);
	HRESULT(STDMETHODCALLTYPE *GetApplicationInstanceId) (IObjectContextInfo2 *This, GUID *pGuid);
	END_INTERFACE
}  IObjectContextInfo2Vtbl;
interface IObjectContextInfo2
{
	CONST_VTBL struct IObjectContextInfo2Vtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IObjectContextInfo2_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IObjectContextInfo2_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define IObjectContextInfo2_Release(This)( (This)->lpVtbl -> Release(This) )
#define IObjectContextInfo2_IsInTransaction(This)( (This)->lpVtbl -> IsInTransaction(This) )
#define IObjectContextInfo2_GetTransaction(This,pptrans)( (This)->lpVtbl -> GetTransaction(This,pptrans) )
#define IObjectContextInfo2_GetTransactionId(This,pGuid)( (This)->lpVtbl -> GetTransactionId(This,pGuid) )
#define IObjectContextInfo2_GetActivityId(This,pGUID)( (This)->lpVtbl -> GetActivityId(This,pGUID) )
#define IObjectContextInfo2_GetContextId(This,pGuid)( (This)->lpVtbl -> GetContextId(This,pGuid) )
#define IObjectContextInfo2_GetPartitionId(This,pGuid)( (This)->lpVtbl -> GetPartitionId(This,pGuid) )
#define IObjectContextInfo2_GetApplicationId(This,pGuid)( (This)->lpVtbl -> GetApplicationId(This,pGuid) )
#define IObjectContextInfo2_GetApplicationInstanceId(This,pGuid)( (This)->lpVtbl -> GetApplicationInstanceId(This,pGuid) )
#endif
#endif
#ifndef __ITransactionStatus_INTERFACE_DEFINED__
#define __ITransactionStatus_INTERFACE_DEFINED__
extern const IID IID_ITransactionStatus;
typedef struct ITransactionStatusVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE *QueryInterface) (ITransactionStatus *This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE *AddRef) (ITransactionStatus *This);
	ULONG(STDMETHODCALLTYPE *Release) (ITransactionStatus *This);
	HRESULT(STDMETHODCALLTYPE *SetTransactionStatus) (ITransactionStatus *This, HRESULT hrStatus);
	HRESULT(STDMETHODCALLTYPE *GetTransactionStatus) (ITransactionStatus *This, HRESULT *pHrStatus);
	END_INTERFACE
}  ITransactionStatusVtbl;
interface ITransactionStatus
{
	CONST_VTBL struct ITransactionStatusVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define ITransactionStatus_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define ITransactionStatus_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define ITransactionStatus_Release(This)( (This)->lpVtbl -> Release(This) )
#define ITransactionStatus_SetTransactionStatus(This,hrStatus)( (This)->lpVtbl -> SetTransactionStatus(This,hrStatus) )
#define ITransactionStatus_GetTransactionStatus(This,pHrStatus)( (This)->lpVtbl -> GetTransactionStatus(This,pHrStatus) )
#endif
#endif
#ifndef __IObjectContextTip_INTERFACE_DEFINED__
#define __IObjectContextTip_INTERFACE_DEFINED__
extern const IID IID_IObjectContextTip;
typedef struct IObjectContextTipVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE *QueryInterface) (IObjectContextTip *This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE *AddRef) (IObjectContextTip *This);
	ULONG(STDMETHODCALLTYPE *Release) (IObjectContextTip *This);
	HRESULT(STDMETHODCALLTYPE *GetTipUrl) (IObjectContextTip *This, BSTR *pTipUrl);
	END_INTERFACE
}  IObjectContextTipVtbl;
interface IObjectContextTip
{
	CONST_VTBL struct IObjectContextTipVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IObjectContextTip_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IObjectContextTip_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define IObjectContextTip_Release(This)( (This)->lpVtbl -> Release(This) )
#define IObjectContextTip_GetTipUrl(This,pTipUrl)( (This)->lpVtbl -> GetTipUrl(This,pTipUrl) )
#endif
#endif
#ifndef __IPlaybackControl_INTERFACE_DEFINED__
#define __IPlaybackControl_INTERFACE_DEFINED__
extern const IID IID_IPlaybackControl;
typedef struct IPlaybackControlVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE *QueryInterface) (IPlaybackControl *This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE *AddRef) (IPlaybackControl *This);
	ULONG(STDMETHODCALLTYPE *Release) (IPlaybackControl *This);
	HRESULT(STDMETHODCALLTYPE *FinalClientRetry) (IPlaybackControl *This);
	HRESULT(STDMETHODCALLTYPE *FinalServerRetry) (IPlaybackControl *This);
	END_INTERFACE
}  IPlaybackControlVtbl;
interface IPlaybackControl
{
	CONST_VTBL struct IPlaybackControlVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IPlaybackControl_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IPlaybackControl_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define IPlaybackControl_Release(This)( (This)->lpVtbl -> Release(This) )
#define IPlaybackControl_FinalClientRetry(This)( (This)->lpVtbl -> FinalClientRetry(This) )
#define IPlaybackControl_FinalServerRetry(This)( (This)->lpVtbl -> FinalServerRetry(This) )
#endif
#endif
#ifndef __IGetContextProperties_INTERFACE_DEFINED__
#define __IGetContextProperties_INTERFACE_DEFINED__
extern const IID IID_IGetContextProperties;
typedef struct IGetContextPropertiesVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE *QueryInterface) (IGetContextProperties *This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE *AddRef) (IGetContextProperties *This);
	ULONG(STDMETHODCALLTYPE *Release) (IGetContextProperties *This);
	HRESULT(STDMETHODCALLTYPE *Count) (IGetContextProperties *This, long *plCount);
	HRESULT(STDMETHODCALLTYPE *GetProperty) (IGetContextProperties *This, BSTR name, VARIANT *pProperty);
	HRESULT(STDMETHODCALLTYPE *EnumNames) (IGetContextProperties *This, IEnumNames **ppenum);
	END_INTERFACE
}  IGetContextPropertiesVtbl;
interface IGetContextProperties
{
	CONST_VTBL struct IGetContextPropertiesVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IGetContextProperties_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IGetContextProperties_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define IGetContextProperties_Release(This)( (This)->lpVtbl -> Release(This) )
#define IGetContextProperties_Count(This,plCount)( (This)->lpVtbl -> Count(This,plCount) )
#define IGetContextProperties_GetProperty(This,name,pProperty)( (This)->lpVtbl -> GetProperty(This,name,pProperty) )
#define IGetContextProperties_EnumNames(This,ppenum)( (This)->lpVtbl -> EnumNames(This,ppenum) )
#endif
#endif
typedef enum tagTransactionVote
{
	TxCommit = 0,
	TxAbort = (TxCommit + 1)
} TransactionVote;
extern RPC_IF_HANDLE __MIDL_itf_autosvcs_0000_0073_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_autosvcs_0000_0073_v0_0_s_ifspec;
#ifndef __IContextState_INTERFACE_DEFINED__
#define __IContextState_INTERFACE_DEFINED__
extern const IID IID_IContextState;
typedef struct IContextStateVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE *QueryInterface) (IContextState *This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE *AddRef) (IContextState *This);
	ULONG(STDMETHODCALLTYPE *Release) (IContextState *This);
	HRESULT(STDMETHODCALLTYPE *SetDeactivateOnReturn) (IContextState *This, VARIANT_BOOL bDeactivate);
	HRESULT(STDMETHODCALLTYPE *GetDeactivateOnReturn) (IContextState *This, VARIANT_BOOL *pbDeactivate);
	HRESULT(STDMETHODCALLTYPE *SetMyTransactionVote) (IContextState *This, TransactionVote txVote);
	HRESULT(STDMETHODCALLTYPE *GetMyTransactionVote) (IContextState *This, TransactionVote *ptxVote);
	END_INTERFACE
}  IContextStateVtbl;
interface IContextState
{
	CONST_VTBL struct IContextStateVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IContextState_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IContextState_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define IContextState_Release(This)( (This)->lpVtbl -> Release(This) )
#define IContextState_SetDeactivateOnReturn(This,bDeactivate)( (This)->lpVtbl -> SetDeactivateOnReturn(This,bDeactivate) )
#define IContextState_GetDeactivateOnReturn(This,pbDeactivate)( (This)->lpVtbl -> GetDeactivateOnReturn(This,pbDeactivate) )
#define IContextState_SetMyTransactionVote(This,txVote)( (This)->lpVtbl -> SetMyTransactionVote(This,txVote) )
#define IContextState_GetMyTransactionVote(This,ptxVote)( (This)->lpVtbl -> GetMyTransactionVote(This,ptxVote) )
#endif
#endif
#ifndef __IPoolManager_INTERFACE_DEFINED__
#define __IPoolManager_INTERFACE_DEFINED__
extern const IID IID_IPoolManager;
typedef struct IPoolManagerVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE *QueryInterface) (IPoolManager *This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE *AddRef) (IPoolManager *This);
	ULONG(STDMETHODCALLTYPE *Release) (IPoolManager *This);
	HRESULT(STDMETHODCALLTYPE *GetTypeInfoCount) (IPoolManager *This, UINT *pctinfo);
	HRESULT(STDMETHODCALLTYPE *GetTypeInfo) (IPoolManager *This, UINT iTInfo, LCID lcid, ITypeInfo **ppTInfo);
	HRESULT(STDMETHODCALLTYPE *GetIDsOfNames) (IPoolManager *This, REFIID riid, LPOLESTR *rgszNames, UINT cNames, LCID lcid, DISPID *rgDispId);
	HRESULT(STDMETHODCALLTYPE *Invoke) (IPoolManager *This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS *pDispParams, VARIANT *pVarResult, EXCEPINFO *pExcepInfo, UINT *puArgErr);
	HRESULT(STDMETHODCALLTYPE *ShutdownPool) (IPoolManager *This, BSTR CLSIDOrProgID);
	END_INTERFACE
}  IPoolManagerVtbl;
interface IPoolManager
{
	CONST_VTBL struct IPoolManagerVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IPoolManager_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IPoolManager_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define IPoolManager_Release(This)( (This)->lpVtbl -> Release(This) )
#define IPoolManager_GetTypeInfoCount(This,pctinfo)( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define IPoolManager_GetTypeInfo(This,iTInfo,lcid,ppTInfo)( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define IPoolManager_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define IPoolManager_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define IPoolManager_ShutdownPool(This,CLSIDOrProgID)( (This)->lpVtbl -> ShutdownPool(This,CLSIDOrProgID) )
#endif
#endif
#ifndef __ISelectCOMLBServer_INTERFACE_DEFINED__
#define __ISelectCOMLBServer_INTERFACE_DEFINED__
extern const IID IID_ISelectCOMLBServer;
typedef struct ISelectCOMLBServerVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE *QueryInterface) (ISelectCOMLBServer *This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE *AddRef) (ISelectCOMLBServer *This);
	ULONG(STDMETHODCALLTYPE *Release) (ISelectCOMLBServer *This);
	HRESULT(STDMETHODCALLTYPE *Init) (ISelectCOMLBServer *This);
	HRESULT(STDMETHODCALLTYPE *GetLBServer) (ISelectCOMLBServer *This, IUnknown *pUnk);
	END_INTERFACE
}  ISelectCOMLBServerVtbl;
interface ISelectCOMLBServer
{
	CONST_VTBL struct ISelectCOMLBServerVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define ISelectCOMLBServer_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define ISelectCOMLBServer_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define ISelectCOMLBServer_Release(This)( (This)->lpVtbl -> Release(This) )
#define ISelectCOMLBServer_Init(This)( (This)->lpVtbl -> Init(This) )
#define ISelectCOMLBServer_GetLBServer(This,pUnk)( (This)->lpVtbl -> GetLBServer(This,pUnk) )
#endif
#endif
#ifndef __ICOMLBArguments_INTERFACE_DEFINED__
#define __ICOMLBArguments_INTERFACE_DEFINED__
extern const IID IID_ICOMLBArguments;
typedef struct ICOMLBArgumentsVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE *QueryInterface) (ICOMLBArguments *This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE *AddRef) (ICOMLBArguments *This);
	ULONG(STDMETHODCALLTYPE *Release) (ICOMLBArguments *This);
	HRESULT(STDMETHODCALLTYPE *GetCLSID) (ICOMLBArguments *This, CLSID *pCLSID);
	HRESULT(STDMETHODCALLTYPE *SetCLSID) (ICOMLBArguments *This, CLSID *pCLSID);
	HRESULT(STDMETHODCALLTYPE *GetMachineName) (ICOMLBArguments *This, ULONG cchSvr, WCHAR szServerName[]);
	HRESULT(STDMETHODCALLTYPE *SetMachineName) (ICOMLBArguments *This, ULONG cchSvr, WCHAR szServerName[]);
	END_INTERFACE
}  ICOMLBArgumentsVtbl;
interface ICOMLBArguments
{
	CONST_VTBL struct ICOMLBArgumentsVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define ICOMLBArguments_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define ICOMLBArguments_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define ICOMLBArguments_Release(This)( (This)->lpVtbl -> Release(This) )
#define ICOMLBArguments_GetCLSID(This,pCLSID)( (This)->lpVtbl -> GetCLSID(This,pCLSID) )
#define ICOMLBArguments_SetCLSID(This,pCLSID)( (This)->lpVtbl -> SetCLSID(This,pCLSID) )
#define ICOMLBArguments_GetMachineName(This,cchSvr,szServerName)( (This)->lpVtbl -> GetMachineName(This,cchSvr,szServerName) )
#define ICOMLBArguments_SetMachineName(This,cchSvr,szServerName)( (This)->lpVtbl -> SetMachineName(This,cchSvr,szServerName) )
#endif
#endif
#if (_WIN32_WINNT >= 0x0500)
#define GetObjectContext(ppIOC) (CoGetObjectContext(IID_IObjectContext, (void **) (ppIOC)) == S_OK ? S_OK : CONTEXT_E_NOCONTEXT)
#else
extern HRESULT __cdecl GetObjectContext(IObjectContext **ppInstanceContext);
#endif
extern HRESULT __stdcall CoCreateActivity(IUnknown *pIUnknown, REFIID riid, void **ppObj);
extern HRESULT __stdcall CoEnterServiceDomain(IUnknown *pConfigObject);
extern void __stdcall CoLeaveServiceDomain(IUnknown *pUnkStatus);
extern HRESULT __stdcall GetManagedExtensions(DWORD *dwExts);
extern void *__cdecl SafeRef(REFIID rid, IUnknown *pUnk);
extern HRESULT __cdecl RecycleSurrogate(long lReasonCode);
extern RPC_IF_HANDLE __MIDL_itf_autosvcs_0000_0077_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_autosvcs_0000_0077_v0_0_s_ifspec;
#ifndef __ICrmLogControl_INTERFACE_DEFINED__
#define __ICrmLogControl_INTERFACE_DEFINED__
extern const IID IID_ICrmLogControl;
typedef struct ICrmLogControlVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE *QueryInterface) (ICrmLogControl *This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE *AddRef) (ICrmLogControl *This);
	ULONG(STDMETHODCALLTYPE *Release) (ICrmLogControl *This);
	HRESULT(STDMETHODCALLTYPE *get_TransactionUOW) (ICrmLogControl *This, BSTR *pVal);
	HRESULT(STDMETHODCALLTYPE *RegisterCompensator) (ICrmLogControl *This, LPCWSTR lpcwstrProgIdCompensator, LPCWSTR lpcwstrDescription, LONG lCrmRegFlags);
	HRESULT(STDMETHODCALLTYPE *WriteLogRecordVariants) (ICrmLogControl *This, VARIANT *pLogRecord);
	HRESULT(STDMETHODCALLTYPE *ForceLog) (ICrmLogControl *This);
	HRESULT(STDMETHODCALLTYPE *ForgetLogRecord) (ICrmLogControl *This);
	HRESULT(STDMETHODCALLTYPE *ForceTransactionToAbort) (ICrmLogControl *This);
	HRESULT(STDMETHODCALLTYPE *WriteLogRecord) (ICrmLogControl *This, BLOB rgBlob[], ULONG cBlob);
	END_INTERFACE
}  ICrmLogControlVtbl;
interface ICrmLogControl
{
	CONST_VTBL struct ICrmLogControlVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define ICrmLogControl_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define ICrmLogControl_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define ICrmLogControl_Release(This)( (This)->lpVtbl -> Release(This) )
#define ICrmLogControl_get_TransactionUOW(This,pVal)( (This)->lpVtbl -> get_TransactionUOW(This,pVal) )
#define ICrmLogControl_RegisterCompensator(This,lpcwstrProgIdCompensator,lpcwstrDescription,lCrmRegFlags)( (This)->lpVtbl -> RegisterCompensator(This,lpcwstrProgIdCompensator,lpcwstrDescription,lCrmRegFlags) )
#define ICrmLogControl_WriteLogRecordVariants(This,pLogRecord)( (This)->lpVtbl -> WriteLogRecordVariants(This,pLogRecord) )
#define ICrmLogControl_ForceLog(This)( (This)->lpVtbl -> ForceLog(This) )
#define ICrmLogControl_ForgetLogRecord(This)( (This)->lpVtbl -> ForgetLogRecord(This) )
#define ICrmLogControl_ForceTransactionToAbort(This)( (This)->lpVtbl -> ForceTransactionToAbort(This) )
#define ICrmLogControl_WriteLogRecord(This,rgBlob,cBlob)( (This)->lpVtbl -> WriteLogRecord(This,rgBlob,cBlob) )
#endif
#endif
#ifndef __ICrmCompensatorVariants_INTERFACE_DEFINED__
#define __ICrmCompensatorVariants_INTERFACE_DEFINED__
extern const IID IID_ICrmCompensatorVariants;
typedef struct ICrmCompensatorVariantsVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE *QueryInterface) (ICrmCompensatorVariants *This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE *AddRef) (ICrmCompensatorVariants *This);
	ULONG(STDMETHODCALLTYPE *Release) (ICrmCompensatorVariants *This);
	HRESULT(STDMETHODCALLTYPE *SetLogControlVariants) (ICrmCompensatorVariants *This, ICrmLogControl *pLogControl);
	HRESULT(STDMETHODCALLTYPE *BeginPrepareVariants) (ICrmCompensatorVariants *This);
	HRESULT(STDMETHODCALLTYPE *PrepareRecordVariants) (ICrmCompensatorVariants *This, VARIANT *pLogRecord, VARIANT_BOOL *pbForget);
	HRESULT(STDMETHODCALLTYPE *EndPrepareVariants) (ICrmCompensatorVariants *This, VARIANT_BOOL *pbOkToPrepare);
	HRESULT(STDMETHODCALLTYPE *BeginCommitVariants) (ICrmCompensatorVariants *This, VARIANT_BOOL bRecovery);
	HRESULT(STDMETHODCALLTYPE *CommitRecordVariants) (ICrmCompensatorVariants *This, VARIANT *pLogRecord, VARIANT_BOOL *pbForget);
	HRESULT(STDMETHODCALLTYPE *EndCommitVariants) (ICrmCompensatorVariants *This);
	HRESULT(STDMETHODCALLTYPE *BeginAbortVariants) (ICrmCompensatorVariants *This, VARIANT_BOOL bRecovery);
	HRESULT(STDMETHODCALLTYPE *AbortRecordVariants) (ICrmCompensatorVariants *This, VARIANT *pLogRecord, VARIANT_BOOL *pbForget);
	HRESULT(STDMETHODCALLTYPE *EndAbortVariants) (ICrmCompensatorVariants *This);
	END_INTERFACE
}  ICrmCompensatorVariantsVtbl;
interface ICrmCompensatorVariants
{
	CONST_VTBL struct ICrmCompensatorVariantsVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define ICrmCompensatorVariants_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define ICrmCompensatorVariants_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define ICrmCompensatorVariants_Release(This)( (This)->lpVtbl -> Release(This) )
#define ICrmCompensatorVariants_SetLogControlVariants(This,pLogControl)( (This)->lpVtbl -> SetLogControlVariants(This,pLogControl) )
#define ICrmCompensatorVariants_BeginPrepareVariants(This)( (This)->lpVtbl -> BeginPrepareVariants(This) )
#define ICrmCompensatorVariants_PrepareRecordVariants(This,pLogRecord,pbForget)( (This)->lpVtbl -> PrepareRecordVariants(This,pLogRecord,pbForget) )
#define ICrmCompensatorVariants_EndPrepareVariants(This,pbOkToPrepare)( (This)->lpVtbl -> EndPrepareVariants(This,pbOkToPrepare) )
#define ICrmCompensatorVariants_BeginCommitVariants(This,bRecovery)( (This)->lpVtbl -> BeginCommitVariants(This,bRecovery) )
#define ICrmCompensatorVariants_CommitRecordVariants(This,pLogRecord,pbForget)( (This)->lpVtbl -> CommitRecordVariants(This,pLogRecord,pbForget) )
#define ICrmCompensatorVariants_EndCommitVariants(This)( (This)->lpVtbl -> EndCommitVariants(This) )
#define ICrmCompensatorVariants_BeginAbortVariants(This,bRecovery)( (This)->lpVtbl -> BeginAbortVariants(This,bRecovery) )
#define ICrmCompensatorVariants_AbortRecordVariants(This,pLogRecord,pbForget)( (This)->lpVtbl -> AbortRecordVariants(This,pLogRecord,pbForget) )
#define ICrmCompensatorVariants_EndAbortVariants(This)( (This)->lpVtbl -> EndAbortVariants(This) )
#endif
#endif
#ifndef _tagCrmLogRecordRead_
#define _tagCrmLogRecordRead_
typedef struct tagCrmLogRecordRead
{
	DWORD dwCrmFlags;
	DWORD dwSequenceNumber;
	BLOB blobUserData;
} CrmLogRecordRead;
#endif /* _tagCrmLogRecordRead_ */
extern RPC_IF_HANDLE __MIDL_itf_autosvcs_0000_0079_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_autosvcs_0000_0079_v0_0_s_ifspec;
#ifndef __ICrmCompensator_INTERFACE_DEFINED__
#define __ICrmCompensator_INTERFACE_DEFINED__
extern const IID IID_ICrmCompensator;
typedef struct ICrmCompensatorVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE *QueryInterface) (ICrmCompensator *This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE *AddRef) (ICrmCompensator *This);
	ULONG(STDMETHODCALLTYPE *Release) (ICrmCompensator *This);
	HRESULT(STDMETHODCALLTYPE *SetLogControl) (ICrmCompensator *This, ICrmLogControl *pLogControl);
	HRESULT(STDMETHODCALLTYPE *BeginPrepare) (ICrmCompensator *This);
	HRESULT(STDMETHODCALLTYPE *PrepareRecord) (ICrmCompensator *This, CrmLogRecordRead crmLogRec, BOOL *pfForget);
	HRESULT(STDMETHODCALLTYPE *EndPrepare) (ICrmCompensator *This, BOOL *pfOkToPrepare);
	HRESULT(STDMETHODCALLTYPE *BeginCommit) (ICrmCompensator *This, BOOL fRecovery);
	HRESULT(STDMETHODCALLTYPE *CommitRecord) (ICrmCompensator *This, CrmLogRecordRead crmLogRec, BOOL *pfForget);
	HRESULT(STDMETHODCALLTYPE *EndCommit) (ICrmCompensator *This);
	HRESULT(STDMETHODCALLTYPE *BeginAbort) (ICrmCompensator *This, BOOL fRecovery);
	HRESULT(STDMETHODCALLTYPE *AbortRecord) (ICrmCompensator *This, CrmLogRecordRead crmLogRec, BOOL *pfForget);
	HRESULT(STDMETHODCALLTYPE *EndAbort) (ICrmCompensator *This);
	END_INTERFACE
}  ICrmCompensatorVtbl;
interface ICrmCompensator
{
	CONST_VTBL struct ICrmCompensatorVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define ICrmCompensator_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define ICrmCompensator_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define ICrmCompensator_Release(This)( (This)->lpVtbl -> Release(This) )
#define ICrmCompensator_SetLogControl(This,pLogControl)( (This)->lpVtbl -> SetLogControl(This,pLogControl) )
#define ICrmCompensator_BeginPrepare(This)( (This)->lpVtbl -> BeginPrepare(This) )
#define ICrmCompensator_PrepareRecord(This,crmLogRec,pfForget)( (This)->lpVtbl -> PrepareRecord(This,crmLogRec,pfForget) )
#define ICrmCompensator_EndPrepare(This,pfOkToPrepare)( (This)->lpVtbl -> EndPrepare(This,pfOkToPrepare) )
#define ICrmCompensator_BeginCommit(This,fRecovery)( (This)->lpVtbl -> BeginCommit(This,fRecovery) )
#define ICrmCompensator_CommitRecord(This,crmLogRec,pfForget)( (This)->lpVtbl -> CommitRecord(This,crmLogRec,pfForget) )
#define ICrmCompensator_EndCommit(This)( (This)->lpVtbl -> EndCommit(This) )
#define ICrmCompensator_BeginAbort(This,fRecovery)( (This)->lpVtbl -> BeginAbort(This,fRecovery) )
#define ICrmCompensator_AbortRecord(This,crmLogRec,pfForget)( (This)->lpVtbl -> AbortRecord(This,crmLogRec,pfForget) )
#define ICrmCompensator_EndAbort(This)( (This)->lpVtbl -> EndAbort(This) )
#endif
#endif
#ifndef _tagCrmTransactionState_
#define _tagCrmTransactionState_
typedef enum tagCrmTransactionState
{
	TxState_Active = 0,
	TxState_Committed = (TxState_Active + 1),
	TxState_Aborted = (TxState_Committed + 1),
	TxState_Indoubt = (TxState_Aborted + 1)
} CrmTransactionState;
#endif /* _tagCrmTransactionState_ */
extern RPC_IF_HANDLE __MIDL_itf_autosvcs_0000_0080_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_autosvcs_0000_0080_v0_0_s_ifspec;
#ifndef __ICrmMonitorLogRecords_INTERFACE_DEFINED__
#define __ICrmMonitorLogRecords_INTERFACE_DEFINED__
extern const IID IID_ICrmMonitorLogRecords;
typedef struct ICrmMonitorLogRecordsVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE *QueryInterface) (ICrmMonitorLogRecords *This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE *AddRef) (ICrmMonitorLogRecords *This);
	ULONG(STDMETHODCALLTYPE *Release) (ICrmMonitorLogRecords *This);
	HRESULT(STDMETHODCALLTYPE *get_Count) (ICrmMonitorLogRecords *This, long *pVal);
	HRESULT(STDMETHODCALLTYPE *get_TransactionState) (ICrmMonitorLogRecords *This, CrmTransactionState *pVal);
	HRESULT(STDMETHODCALLTYPE *get_StructuredRecords) (ICrmMonitorLogRecords *This, VARIANT_BOOL *pVal);
	HRESULT(STDMETHODCALLTYPE *GetLogRecord) (ICrmMonitorLogRecords *This, DWORD dwIndex, CrmLogRecordRead *pCrmLogRec);
	HRESULT(STDMETHODCALLTYPE *GetLogRecordVariants) (ICrmMonitorLogRecords *This, VARIANT IndexNumber, LPVARIANT pLogRecord);
	END_INTERFACE
}  ICrmMonitorLogRecordsVtbl;
interface ICrmMonitorLogRecords
{
	CONST_VTBL struct ICrmMonitorLogRecordsVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define ICrmMonitorLogRecords_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define ICrmMonitorLogRecords_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define ICrmMonitorLogRecords_Release(This)( (This)->lpVtbl -> Release(This) )
#define ICrmMonitorLogRecords_get_Count(This,pVal)( (This)->lpVtbl -> get_Count(This,pVal) )
#define ICrmMonitorLogRecords_get_TransactionState(This,pVal)( (This)->lpVtbl -> get_TransactionState(This,pVal) )
#define ICrmMonitorLogRecords_get_StructuredRecords(This,pVal)( (This)->lpVtbl -> get_StructuredRecords(This,pVal) )
#define ICrmMonitorLogRecords_GetLogRecord(This,dwIndex,pCrmLogRec)( (This)->lpVtbl -> GetLogRecord(This,dwIndex,pCrmLogRec) )
#define ICrmMonitorLogRecords_GetLogRecordVariants(This,IndexNumber,pLogRecord)( (This)->lpVtbl -> GetLogRecordVariants(This,IndexNumber,pLogRecord) )
#endif
#endif
#ifndef __ICrmMonitorClerks_INTERFACE_DEFINED__
#define __ICrmMonitorClerks_INTERFACE_DEFINED__
extern const IID IID_ICrmMonitorClerks;
typedef struct ICrmMonitorClerksVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE *QueryInterface) (ICrmMonitorClerks *This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE *AddRef) (ICrmMonitorClerks *This);
	ULONG(STDMETHODCALLTYPE *Release) (ICrmMonitorClerks *This);
	HRESULT(STDMETHODCALLTYPE *GetTypeInfoCount) (ICrmMonitorClerks *This, UINT *pctinfo);
	HRESULT(STDMETHODCALLTYPE *GetTypeInfo) (ICrmMonitorClerks *This, UINT iTInfo, LCID lcid, ITypeInfo **ppTInfo);
	HRESULT(STDMETHODCALLTYPE *GetIDsOfNames) (ICrmMonitorClerks *This, REFIID riid, LPOLESTR *rgszNames, UINT cNames, LCID lcid, DISPID *rgDispId);
	HRESULT(STDMETHODCALLTYPE *Invoke) (ICrmMonitorClerks *This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS *pDispParams, VARIANT *pVarResult, EXCEPINFO *pExcepInfo, UINT *puArgErr);
	HRESULT(STDMETHODCALLTYPE *Item) (ICrmMonitorClerks *This, VARIANT Index, LPVARIANT pItem);
	HRESULT(STDMETHODCALLTYPE *get__NewEnum) (ICrmMonitorClerks *This, LPUNKNOWN *pVal);
	HRESULT(STDMETHODCALLTYPE *get_Count) (ICrmMonitorClerks *This, long *pVal);
	HRESULT(STDMETHODCALLTYPE *ProgIdCompensator) (ICrmMonitorClerks *This, VARIANT Index, LPVARIANT pItem);
	HRESULT(STDMETHODCALLTYPE *Description) (ICrmMonitorClerks *This, VARIANT Index, LPVARIANT pItem);
	HRESULT(STDMETHODCALLTYPE *TransactionUOW) (ICrmMonitorClerks *This, VARIANT Index, LPVARIANT pItem);
	HRESULT(STDMETHODCALLTYPE *ActivityId) (ICrmMonitorClerks *This, VARIANT Index, LPVARIANT pItem);
	END_INTERFACE
}  ICrmMonitorClerksVtbl;
interface ICrmMonitorClerks
{
	CONST_VTBL struct ICrmMonitorClerksVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define ICrmMonitorClerks_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define ICrmMonitorClerks_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define ICrmMonitorClerks_Release(This)( (This)->lpVtbl -> Release(This) )
#define ICrmMonitorClerks_GetTypeInfoCount(This,pctinfo)( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define ICrmMonitorClerks_GetTypeInfo(This,iTInfo,lcid,ppTInfo)( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define ICrmMonitorClerks_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define ICrmMonitorClerks_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define ICrmMonitorClerks_Item(This,Index,pItem)( (This)->lpVtbl -> Item(This,Index,pItem) )
#define ICrmMonitorClerks_get__NewEnum(This,pVal)( (This)->lpVtbl -> get__NewEnum(This,pVal) )
#define ICrmMonitorClerks_get_Count(This,pVal)( (This)->lpVtbl -> get_Count(This,pVal) )
#define ICrmMonitorClerks_ProgIdCompensator(This,Index,pItem)( (This)->lpVtbl -> ProgIdCompensator(This,Index,pItem) )
#define ICrmMonitorClerks_Description(This,Index,pItem)( (This)->lpVtbl -> Description(This,Index,pItem) )
#define ICrmMonitorClerks_TransactionUOW(This,Index,pItem)( (This)->lpVtbl -> TransactionUOW(This,Index,pItem) )
#define ICrmMonitorClerks_ActivityId(This,Index,pItem)( (This)->lpVtbl -> ActivityId(This,Index,pItem) )
#endif
#endif
#ifndef __ICrmMonitor_INTERFACE_DEFINED__
#define __ICrmMonitor_INTERFACE_DEFINED__
extern const IID IID_ICrmMonitor;
typedef struct ICrmMonitorVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE *QueryInterface) (ICrmMonitor *This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE *AddRef) (ICrmMonitor *This);
	ULONG(STDMETHODCALLTYPE *Release) (ICrmMonitor *This);
	HRESULT(STDMETHODCALLTYPE *GetClerks) (ICrmMonitor *This, ICrmMonitorClerks **pClerks);
	HRESULT(STDMETHODCALLTYPE *HoldClerk) (ICrmMonitor *This, VARIANT Index, LPVARIANT pItem);
	END_INTERFACE
}  ICrmMonitorVtbl;
interface ICrmMonitor
{
	CONST_VTBL struct ICrmMonitorVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define ICrmMonitor_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define ICrmMonitor_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define ICrmMonitor_Release(This)( (This)->lpVtbl -> Release(This) )
#define ICrmMonitor_GetClerks(This,pClerks)( (This)->lpVtbl -> GetClerks(This,pClerks) )
#define ICrmMonitor_HoldClerk(This,Index,pItem)( (This)->lpVtbl -> HoldClerk(This,Index,pItem) )
#endif
#endif
#ifndef __ICrmFormatLogRecords_INTERFACE_DEFINED__
#define __ICrmFormatLogRecords_INTERFACE_DEFINED__
extern const IID IID_ICrmFormatLogRecords;
typedef struct ICrmFormatLogRecordsVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE *QueryInterface) (ICrmFormatLogRecords *This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE *AddRef) (ICrmFormatLogRecords *This);
	ULONG(STDMETHODCALLTYPE *Release) (ICrmFormatLogRecords *This);
	HRESULT(STDMETHODCALLTYPE *GetColumnCount) (ICrmFormatLogRecords *This, long *plColumnCount);
	HRESULT(STDMETHODCALLTYPE *GetColumnHeaders) (ICrmFormatLogRecords *This, LPVARIANT pHeaders);
	HRESULT(STDMETHODCALLTYPE *GetColumn) (ICrmFormatLogRecords *This, CrmLogRecordRead CrmLogRec, LPVARIANT pFormattedLogRecord);
	HRESULT(STDMETHODCALLTYPE *GetColumnVariants) (ICrmFormatLogRecords *This, VARIANT LogRecord, LPVARIANT pFormattedLogRecord);
	END_INTERFACE
}  ICrmFormatLogRecordsVtbl;
interface ICrmFormatLogRecords
{
	CONST_VTBL struct ICrmFormatLogRecordsVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define ICrmFormatLogRecords_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define ICrmFormatLogRecords_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define ICrmFormatLogRecords_Release(This)( (This)->lpVtbl -> Release(This) )
#define ICrmFormatLogRecords_GetColumnCount(This,plColumnCount)( (This)->lpVtbl -> GetColumnCount(This,plColumnCount) )
#define ICrmFormatLogRecords_GetColumnHeaders(This,pHeaders)( (This)->lpVtbl -> GetColumnHeaders(This,pHeaders) )
#define ICrmFormatLogRecords_GetColumn(This,CrmLogRec,pFormattedLogRecord)( (This)->lpVtbl -> GetColumn(This,CrmLogRec,pFormattedLogRecord) )
#define ICrmFormatLogRecords_GetColumnVariants(This,LogRecord,pFormattedLogRecord)( (This)->lpVtbl -> GetColumnVariants(This,LogRecord,pFormattedLogRecord) )
#endif
#endif
typedef enum tagCSC_InheritanceConfig
{
	CSC_Inherit = 0,
	CSC_Ignore = (CSC_Inherit + 1)
} CSC_InheritanceConfig;
typedef enum tagCSC_ThreadPool
{
	CSC_ThreadPoolNone = 0,
	CSC_ThreadPoolInherit = (CSC_ThreadPoolNone + 1),
	CSC_STAThreadPool = (CSC_ThreadPoolInherit + 1),
	CSC_MTAThreadPool = (CSC_STAThreadPool + 1)
} CSC_ThreadPool;
typedef enum tagCSC_Binding
{
	CSC_NoBinding = 0,
	CSC_BindToPoolThread = (CSC_NoBinding + 1)
} CSC_Binding;
typedef enum tagCSC_TransactionConfig
{
	CSC_NoTransaction = 0,
	CSC_IfContainerIsTransactional = (CSC_NoTransaction + 1),
	CSC_CreateTransactionIfNecessary = (CSC_IfContainerIsTransactional + 1),
	CSC_NewTransaction = (CSC_CreateTransactionIfNecessary + 1)
} CSC_TransactionConfig;
typedef enum tagCSC_SynchronizationConfig
{
	CSC_NoSynchronization = 0,
	CSC_IfContainerIsSynchronized = (CSC_NoSynchronization + 1),
	CSC_NewSynchronizationIfNecessary = (CSC_IfContainerIsSynchronized + 1),
	CSC_NewSynchronization = (CSC_NewSynchronizationIfNecessary + 1)
} CSC_SynchronizationConfig;
typedef enum tagCSC_TrackerConfig
{
	CSC_DontUseTracker = 0,
	CSC_UseTracker = (CSC_DontUseTracker + 1)
} CSC_TrackerConfig;
typedef enum tagCSC_PartitionConfig
{
	CSC_NoPartition = 0,
	CSC_InheritPartition = (CSC_NoPartition + 1),
	CSC_NewPartition = (CSC_InheritPartition + 1)
} CSC_PartitionConfig;
typedef enum tagCSC_IISIntrinsicsConfig
{
	CSC_NoIISIntrinsics = 0,
	CSC_InheritIISIntrinsics = (CSC_NoIISIntrinsics + 1)
} CSC_IISIntrinsicsConfig;
typedef enum tagCSC_COMTIIntrinsicsConfig
{
	CSC_NoCOMTIIntrinsics = 0,
	CSC_InheritCOMTIIntrinsics = (CSC_NoCOMTIIntrinsics + 1)
} CSC_COMTIIntrinsicsConfig;
typedef enum tagCSC_SxsConfig
{
	CSC_NoSxs = 0,
	CSC_InheritSxs = (CSC_NoSxs + 1),
	CSC_NewSxs = (CSC_InheritSxs + 1)
} CSC_SxsConfig;
extern RPC_IF_HANDLE __MIDL_itf_autosvcs_0000_0084_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_autosvcs_0000_0084_v0_0_s_ifspec;
#ifndef __IServiceIISIntrinsicsConfig_INTERFACE_DEFINED__
#define __IServiceIISIntrinsicsConfig_INTERFACE_DEFINED__
extern const IID IID_IServiceIISIntrinsicsConfig;
typedef struct IServiceIISIntrinsicsConfigVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE *QueryInterface) (IServiceIISIntrinsicsConfig *This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE *AddRef) (IServiceIISIntrinsicsConfig *This);
	ULONG(STDMETHODCALLTYPE *Release) (IServiceIISIntrinsicsConfig *This);
	HRESULT(STDMETHODCALLTYPE *IISIntrinsicsConfig) (IServiceIISIntrinsicsConfig *This, CSC_IISIntrinsicsConfig iisIntrinsicsConfig);
	END_INTERFACE
}  IServiceIISIntrinsicsConfigVtbl;
interface IServiceIISIntrinsicsConfig
{
	CONST_VTBL struct IServiceIISIntrinsicsConfigVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IServiceIISIntrinsicsConfig_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IServiceIISIntrinsicsConfig_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define IServiceIISIntrinsicsConfig_Release(This)( (This)->lpVtbl -> Release(This) )
#define IServiceIISIntrinsicsConfig_IISIntrinsicsConfig(This,iisIntrinsicsConfig)( (This)->lpVtbl -> IISIntrinsicsConfig(This,iisIntrinsicsConfig) )
#endif
#endif
#ifndef __IServiceComTIIntrinsicsConfig_INTERFACE_DEFINED__
#define __IServiceComTIIntrinsicsConfig_INTERFACE_DEFINED__
extern const IID IID_IServiceComTIIntrinsicsConfig;
typedef struct IServiceComTIIntrinsicsConfigVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE *QueryInterface) (IServiceComTIIntrinsicsConfig *This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE *AddRef) (IServiceComTIIntrinsicsConfig *This);
	ULONG(STDMETHODCALLTYPE *Release) (IServiceComTIIntrinsicsConfig *This);
	HRESULT(STDMETHODCALLTYPE *ComTIIntrinsicsConfig) (IServiceComTIIntrinsicsConfig *This, CSC_COMTIIntrinsicsConfig comtiIntrinsicsConfig);
	END_INTERFACE
}  IServiceComTIIntrinsicsConfigVtbl;
interface IServiceComTIIntrinsicsConfig
{
	CONST_VTBL struct IServiceComTIIntrinsicsConfigVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IServiceComTIIntrinsicsConfig_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IServiceComTIIntrinsicsConfig_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define IServiceComTIIntrinsicsConfig_Release(This)( (This)->lpVtbl -> Release(This) )
#define IServiceComTIIntrinsicsConfig_ComTIIntrinsicsConfig(This,comtiIntrinsicsConfig)( (This)->lpVtbl -> ComTIIntrinsicsConfig(This,comtiIntrinsicsConfig) )
#endif
#endif
#ifndef __IServiceSxsConfig_INTERFACE_DEFINED__
#define __IServiceSxsConfig_INTERFACE_DEFINED__
extern const IID IID_IServiceSxsConfig;
typedef struct IServiceSxsConfigVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE *QueryInterface) (IServiceSxsConfig *This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE *AddRef) (IServiceSxsConfig *This);
	ULONG(STDMETHODCALLTYPE *Release) (IServiceSxsConfig *This);
	HRESULT(STDMETHODCALLTYPE *SxsConfig) (IServiceSxsConfig *This, CSC_SxsConfig scsConfig);
	HRESULT(STDMETHODCALLTYPE *SxsName) (IServiceSxsConfig *This, LPCWSTR szSxsName);
	HRESULT(STDMETHODCALLTYPE *SxsDirectory) (IServiceSxsConfig *This, LPCWSTR szSxsDirectory);
	END_INTERFACE
}  IServiceSxsConfigVtbl;
interface IServiceSxsConfig
{
	CONST_VTBL struct IServiceSxsConfigVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IServiceSxsConfig_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IServiceSxsConfig_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define IServiceSxsConfig_Release(This)( (This)->lpVtbl -> Release(This) )
#define IServiceSxsConfig_SxsConfig(This,scsConfig)( (This)->lpVtbl -> SxsConfig(This,scsConfig) )
#define IServiceSxsConfig_SxsName(This,szSxsName)( (This)->lpVtbl -> SxsName(This,szSxsName) )
#define IServiceSxsConfig_SxsDirectory(This,szSxsDirectory)( (This)->lpVtbl -> SxsDirectory(This,szSxsDirectory) )
#endif
#endif
#ifndef __ICheckSxsConfig_INTERFACE_DEFINED__
#define __ICheckSxsConfig_INTERFACE_DEFINED__
extern const IID IID_ICheckSxsConfig;
typedef struct ICheckSxsConfigVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE *QueryInterface) (ICheckSxsConfig *This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE *AddRef) (ICheckSxsConfig *This);
	ULONG(STDMETHODCALLTYPE *Release) (ICheckSxsConfig *This);
	HRESULT(STDMETHODCALLTYPE *IsSameSxsConfig) (ICheckSxsConfig *This, LPCWSTR wszSxsName, LPCWSTR wszSxsDirectory, LPCWSTR wszSxsAppName);
	END_INTERFACE
}  ICheckSxsConfigVtbl;
interface ICheckSxsConfig
{
	CONST_VTBL struct ICheckSxsConfigVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define ICheckSxsConfig_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define ICheckSxsConfig_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define ICheckSxsConfig_Release(This)( (This)->lpVtbl -> Release(This) )
#define ICheckSxsConfig_IsSameSxsConfig(This,wszSxsName,wszSxsDirectory,wszSxsAppName)( (This)->lpVtbl -> IsSameSxsConfig(This,wszSxsName,wszSxsDirectory,wszSxsAppName) )
#endif
#endif
#ifndef __IServiceInheritanceConfig_INTERFACE_DEFINED__
#define __IServiceInheritanceConfig_INTERFACE_DEFINED__
extern const IID IID_IServiceInheritanceConfig;
typedef struct IServiceInheritanceConfigVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE *QueryInterface) (IServiceInheritanceConfig *This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE *AddRef) (IServiceInheritanceConfig *This);
	ULONG(STDMETHODCALLTYPE *Release) (IServiceInheritanceConfig *This);
	HRESULT(STDMETHODCALLTYPE *ContainingContextTreatment) (IServiceInheritanceConfig *This, CSC_InheritanceConfig inheritanceConfig);
	END_INTERFACE
}  IServiceInheritanceConfigVtbl;
interface IServiceInheritanceConfig
{
	CONST_VTBL struct IServiceInheritanceConfigVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IServiceInheritanceConfig_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IServiceInheritanceConfig_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define IServiceInheritanceConfig_Release(This)( (This)->lpVtbl -> Release(This) )
#define IServiceInheritanceConfig_ContainingContextTreatment(This,inheritanceConfig)( (This)->lpVtbl -> ContainingContextTreatment(This,inheritanceConfig) )
#endif
#endif
#ifndef __IServiceThreadPoolConfig_INTERFACE_DEFINED__
#define __IServiceThreadPoolConfig_INTERFACE_DEFINED__
extern const IID IID_IServiceThreadPoolConfig;
typedef struct IServiceThreadPoolConfigVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE *QueryInterface) (IServiceThreadPoolConfig *This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE *AddRef) (IServiceThreadPoolConfig *This);
	ULONG(STDMETHODCALLTYPE *Release) (IServiceThreadPoolConfig *This);
	HRESULT(STDMETHODCALLTYPE *SelectThreadPool) (IServiceThreadPoolConfig *This, CSC_ThreadPool threadPool);
	HRESULT(STDMETHODCALLTYPE *SetBindingInfo) (IServiceThreadPoolConfig *This, CSC_Binding binding);
	END_INTERFACE
}  IServiceThreadPoolConfigVtbl;
interface IServiceThreadPoolConfig
{
	CONST_VTBL struct IServiceThreadPoolConfigVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IServiceThreadPoolConfig_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IServiceThreadPoolConfig_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define IServiceThreadPoolConfig_Release(This)( (This)->lpVtbl -> Release(This) )
#define IServiceThreadPoolConfig_SelectThreadPool(This,threadPool)( (This)->lpVtbl -> SelectThreadPool(This,threadPool) )
#define IServiceThreadPoolConfig_SetBindingInfo(This,binding)( (This)->lpVtbl -> SetBindingInfo(This,binding) )
#endif
#endif
#ifndef __IServiceTransactionConfigBase_INTERFACE_DEFINED__
#define __IServiceTransactionConfigBase_INTERFACE_DEFINED__
extern const IID IID_IServiceTransactionConfigBase;
typedef struct IServiceTransactionConfigBaseVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE *QueryInterface) (IServiceTransactionConfigBase *This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE *AddRef) (IServiceTransactionConfigBase *This);
	ULONG(STDMETHODCALLTYPE *Release) (IServiceTransactionConfigBase *This);
	HRESULT(STDMETHODCALLTYPE *ConfigureTransaction) (IServiceTransactionConfigBase *This, CSC_TransactionConfig transactionConfig);
	HRESULT(STDMETHODCALLTYPE *IsolationLevel) (IServiceTransactionConfigBase *This, COMAdminTxIsolationLevelOptions option);
	HRESULT(STDMETHODCALLTYPE *TransactionTimeout) (IServiceTransactionConfigBase *This, ULONG ulTimeoutSec);
	HRESULT(STDMETHODCALLTYPE *BringYourOwnTransaction) (IServiceTransactionConfigBase *This, LPCWSTR szTipURL);
	HRESULT(STDMETHODCALLTYPE *NewTransactionDescription) (IServiceTransactionConfigBase *This, LPCWSTR szTxDesc);
	END_INTERFACE
}  IServiceTransactionConfigBaseVtbl;
interface IServiceTransactionConfigBase
{
	CONST_VTBL struct IServiceTransactionConfigBaseVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IServiceTransactionConfigBase_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IServiceTransactionConfigBase_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define IServiceTransactionConfigBase_Release(This)( (This)->lpVtbl -> Release(This) )
#define IServiceTransactionConfigBase_ConfigureTransaction(This,transactionConfig)( (This)->lpVtbl -> ConfigureTransaction(This,transactionConfig) )
#define IServiceTransactionConfigBase_IsolationLevel(This,option)( (This)->lpVtbl -> IsolationLevel(This,option) )
#define IServiceTransactionConfigBase_TransactionTimeout(This,ulTimeoutSec)( (This)->lpVtbl -> TransactionTimeout(This,ulTimeoutSec) )
#define IServiceTransactionConfigBase_BringYourOwnTransaction(This,szTipURL)( (This)->lpVtbl -> BringYourOwnTransaction(This,szTipURL) )
#define IServiceTransactionConfigBase_NewTransactionDescription(This,szTxDesc)( (This)->lpVtbl -> NewTransactionDescription(This,szTxDesc) )
#endif
#endif
#ifndef __IServiceTransactionConfig_INTERFACE_DEFINED__
#define __IServiceTransactionConfig_INTERFACE_DEFINED__
extern const IID IID_IServiceTransactionConfig;
typedef struct IServiceTransactionConfigVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE *QueryInterface) (IServiceTransactionConfig *This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE *AddRef) (IServiceTransactionConfig *This);
	ULONG(STDMETHODCALLTYPE *Release) (IServiceTransactionConfig *This);
	HRESULT(STDMETHODCALLTYPE *ConfigureTransaction) (IServiceTransactionConfig *This, CSC_TransactionConfig transactionConfig);
	HRESULT(STDMETHODCALLTYPE *IsolationLevel) (IServiceTransactionConfig *This, COMAdminTxIsolationLevelOptions option);
	HRESULT(STDMETHODCALLTYPE *TransactionTimeout) (IServiceTransactionConfig *This, ULONG ulTimeoutSec);
	HRESULT(STDMETHODCALLTYPE *BringYourOwnTransaction) (IServiceTransactionConfig *This, LPCWSTR szTipURL);
	HRESULT(STDMETHODCALLTYPE *NewTransactionDescription) (IServiceTransactionConfig *This, LPCWSTR szTxDesc);
	HRESULT(STDMETHODCALLTYPE *ConfigureBYOT) (IServiceTransactionConfig *This, ITransaction *pITxByot);
	END_INTERFACE
}  IServiceTransactionConfigVtbl;
interface IServiceTransactionConfig
{
	CONST_VTBL struct IServiceTransactionConfigVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IServiceTransactionConfig_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IServiceTransactionConfig_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define IServiceTransactionConfig_Release(This)( (This)->lpVtbl -> Release(This) )
#define IServiceTransactionConfig_ConfigureTransaction(This,transactionConfig)( (This)->lpVtbl -> ConfigureTransaction(This,transactionConfig) )
#define IServiceTransactionConfig_IsolationLevel(This,option)( (This)->lpVtbl -> IsolationLevel(This,option) )
#define IServiceTransactionConfig_TransactionTimeout(This,ulTimeoutSec)( (This)->lpVtbl -> TransactionTimeout(This,ulTimeoutSec) )
#define IServiceTransactionConfig_BringYourOwnTransaction(This,szTipURL)( (This)->lpVtbl -> BringYourOwnTransaction(This,szTipURL) )
#define IServiceTransactionConfig_NewTransactionDescription(This,szTxDesc)( (This)->lpVtbl -> NewTransactionDescription(This,szTxDesc) )
#define IServiceTransactionConfig_ConfigureBYOT(This,pITxByot)( (This)->lpVtbl -> ConfigureBYOT(This,pITxByot) )
#endif
#endif
#ifndef __IServiceSysTxnConfig_INTERFACE_DEFINED__
#define __IServiceSysTxnConfig_INTERFACE_DEFINED__
extern const IID IID_IServiceSysTxnConfig;
typedef struct IServiceSysTxnConfigVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE *QueryInterface) (IServiceSysTxnConfig *This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE *AddRef) (IServiceSysTxnConfig *This);
	ULONG(STDMETHODCALLTYPE *Release) (IServiceSysTxnConfig *This);
	HRESULT(STDMETHODCALLTYPE *ConfigureTransaction) (IServiceSysTxnConfig *This, CSC_TransactionConfig transactionConfig);
	HRESULT(STDMETHODCALLTYPE *IsolationLevel) (IServiceSysTxnConfig *This, COMAdminTxIsolationLevelOptions option);
	HRESULT(STDMETHODCALLTYPE *TransactionTimeout) (IServiceSysTxnConfig *This, ULONG ulTimeoutSec);
	HRESULT(STDMETHODCALLTYPE *BringYourOwnTransaction) (IServiceSysTxnConfig *This, LPCWSTR szTipURL);
	HRESULT(STDMETHODCALLTYPE *NewTransactionDescription) (IServiceSysTxnConfig *This, LPCWSTR szTxDesc);
	HRESULT(STDMETHODCALLTYPE *ConfigureBYOT) (IServiceSysTxnConfig *This, ITransaction *pITxByot);
	HRESULT(STDMETHODCALLTYPE *ConfigureBYOTSysTxn) (IServiceSysTxnConfig *This, ITransactionProxy *pTxProxy);
	END_INTERFACE
}  IServiceSysTxnConfigVtbl;
interface IServiceSysTxnConfig
{
	CONST_VTBL struct IServiceSysTxnConfigVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IServiceSysTxnConfig_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IServiceSysTxnConfig_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define IServiceSysTxnConfig_Release(This)( (This)->lpVtbl -> Release(This) )
#define IServiceSysTxnConfig_ConfigureTransaction(This,transactionConfig)( (This)->lpVtbl -> ConfigureTransaction(This,transactionConfig) )
#define IServiceSysTxnConfig_IsolationLevel(This,option)( (This)->lpVtbl -> IsolationLevel(This,option) )
#define IServiceSysTxnConfig_TransactionTimeout(This,ulTimeoutSec)( (This)->lpVtbl -> TransactionTimeout(This,ulTimeoutSec) )
#define IServiceSysTxnConfig_BringYourOwnTransaction(This,szTipURL)( (This)->lpVtbl -> BringYourOwnTransaction(This,szTipURL) )
#define IServiceSysTxnConfig_NewTransactionDescription(This,szTxDesc)( (This)->lpVtbl -> NewTransactionDescription(This,szTxDesc) )
#define IServiceSysTxnConfig_ConfigureBYOT(This,pITxByot)( (This)->lpVtbl -> ConfigureBYOT(This,pITxByot) )
#define IServiceSysTxnConfig_ConfigureBYOTSysTxn(This,pTxProxy)( (This)->lpVtbl -> ConfigureBYOTSysTxn(This,pTxProxy) )
#endif
#endif
#ifndef __IServiceSynchronizationConfig_INTERFACE_DEFINED__
#define __IServiceSynchronizationConfig_INTERFACE_DEFINED__
extern const IID IID_IServiceSynchronizationConfig;
typedef struct IServiceSynchronizationConfigVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE *QueryInterface) (IServiceSynchronizationConfig *This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE *AddRef) (IServiceSynchronizationConfig *This);
	ULONG(STDMETHODCALLTYPE *Release) (IServiceSynchronizationConfig *This);
	HRESULT(STDMETHODCALLTYPE *ConfigureSynchronization) (IServiceSynchronizationConfig *This, CSC_SynchronizationConfig synchConfig);
	END_INTERFACE
}  IServiceSynchronizationConfigVtbl;
interface IServiceSynchronizationConfig
{
	CONST_VTBL struct IServiceSynchronizationConfigVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IServiceSynchronizationConfig_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IServiceSynchronizationConfig_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define IServiceSynchronizationConfig_Release(This)( (This)->lpVtbl -> Release(This) )
#define IServiceSynchronizationConfig_ConfigureSynchronization(This,synchConfig)( (This)->lpVtbl -> ConfigureSynchronization(This,synchConfig) )
#endif
#endif
#ifndef __IServiceTrackerConfig_INTERFACE_DEFINED__
#define __IServiceTrackerConfig_INTERFACE_DEFINED__
extern const IID IID_IServiceTrackerConfig;
typedef struct IServiceTrackerConfigVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE *QueryInterface) (IServiceTrackerConfig *This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE *AddRef) (IServiceTrackerConfig *This);
	ULONG(STDMETHODCALLTYPE *Release) (IServiceTrackerConfig *This);
	HRESULT(STDMETHODCALLTYPE *TrackerConfig) (IServiceTrackerConfig *This, CSC_TrackerConfig trackerConfig, LPCWSTR szTrackerAppName, LPCWSTR szTrackerCtxName);
	END_INTERFACE
}  IServiceTrackerConfigVtbl;
interface IServiceTrackerConfig
{
	CONST_VTBL struct IServiceTrackerConfigVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IServiceTrackerConfig_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IServiceTrackerConfig_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define IServiceTrackerConfig_Release(This)( (This)->lpVtbl -> Release(This) )
#define IServiceTrackerConfig_TrackerConfig(This,trackerConfig,szTrackerAppName,szTrackerCtxName)( (This)->lpVtbl -> TrackerConfig(This,trackerConfig,szTrackerAppName,szTrackerCtxName) )
#endif
#endif
#ifndef __IServicePartitionConfig_INTERFACE_DEFINED__
#define __IServicePartitionConfig_INTERFACE_DEFINED__
extern const IID IID_IServicePartitionConfig;
typedef struct IServicePartitionConfigVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE *QueryInterface) (IServicePartitionConfig *This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE *AddRef) (IServicePartitionConfig *This);
	ULONG(STDMETHODCALLTYPE *Release) (IServicePartitionConfig *This);
	HRESULT(STDMETHODCALLTYPE *PartitionConfig) (IServicePartitionConfig *This, CSC_PartitionConfig partitionConfig);
	HRESULT(STDMETHODCALLTYPE *PartitionID) (IServicePartitionConfig *This, REFGUID guidPartitionID);
	END_INTERFACE
}  IServicePartitionConfigVtbl;
interface IServicePartitionConfig
{
	CONST_VTBL struct IServicePartitionConfigVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IServicePartitionConfig_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IServicePartitionConfig_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define IServicePartitionConfig_Release(This)( (This)->lpVtbl -> Release(This) )
#define IServicePartitionConfig_PartitionConfig(This,partitionConfig)( (This)->lpVtbl -> PartitionConfig(This,partitionConfig) )
#define IServicePartitionConfig_PartitionID(This,guidPartitionID)( (This)->lpVtbl -> PartitionID(This,guidPartitionID) )
#endif
#endif
#ifndef __IServiceCall_INTERFACE_DEFINED__
#define __IServiceCall_INTERFACE_DEFINED__
extern const IID IID_IServiceCall;
typedef struct IServiceCallVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE *QueryInterface) (IServiceCall *This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE *AddRef) (IServiceCall *This);
	ULONG(STDMETHODCALLTYPE *Release) (IServiceCall *This);
	HRESULT(STDMETHODCALLTYPE *OnCall) (IServiceCall *This);
	END_INTERFACE
}  IServiceCallVtbl;
interface IServiceCall
{
	CONST_VTBL struct IServiceCallVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IServiceCall_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IServiceCall_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define IServiceCall_Release(This)( (This)->lpVtbl -> Release(This) )
#define IServiceCall_OnCall(This)( (This)->lpVtbl -> OnCall(This) )
#endif
#endif
#ifndef __IAsyncErrorNotify_INTERFACE_DEFINED__
#define __IAsyncErrorNotify_INTERFACE_DEFINED__
extern const IID IID_IAsyncErrorNotify;
typedef struct IAsyncErrorNotifyVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE *QueryInterface) (IAsyncErrorNotify *This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE *AddRef) (IAsyncErrorNotify *This);
	ULONG(STDMETHODCALLTYPE *Release) (IAsyncErrorNotify *This);
	HRESULT(STDMETHODCALLTYPE *OnError) (IAsyncErrorNotify *This, HRESULT hr);
	END_INTERFACE
}  IAsyncErrorNotifyVtbl;
interface IAsyncErrorNotify
{
	CONST_VTBL struct IAsyncErrorNotifyVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IAsyncErrorNotify_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IAsyncErrorNotify_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define IAsyncErrorNotify_Release(This)( (This)->lpVtbl -> Release(This) )
#define IAsyncErrorNotify_OnError(This,hr)( (This)->lpVtbl -> OnError(This,hr) )
#endif
#endif
#ifndef __IServiceActivity_INTERFACE_DEFINED__
#define __IServiceActivity_INTERFACE_DEFINED__
extern const IID IID_IServiceActivity;
typedef struct IServiceActivityVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE *QueryInterface) (IServiceActivity *This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE *AddRef) (IServiceActivity *This);
	ULONG(STDMETHODCALLTYPE *Release) (IServiceActivity *This);
	HRESULT(STDMETHODCALLTYPE *SynchronousCall) (IServiceActivity *This, IServiceCall *pIServiceCall);
	HRESULT(STDMETHODCALLTYPE *AsynchronousCall) (IServiceActivity *This, IServiceCall *pIServiceCall);
	HRESULT(STDMETHODCALLTYPE *BindToCurrentThread) (IServiceActivity *This);
	HRESULT(STDMETHODCALLTYPE *UnbindFromThread) (IServiceActivity *This);
	END_INTERFACE
}  IServiceActivityVtbl;
interface IServiceActivity
{
	CONST_VTBL struct IServiceActivityVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IServiceActivity_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IServiceActivity_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define IServiceActivity_Release(This)( (This)->lpVtbl -> Release(This) )
#define IServiceActivity_SynchronousCall(This,pIServiceCall)( (This)->lpVtbl -> SynchronousCall(This,pIServiceCall) )
#define IServiceActivity_AsynchronousCall(This,pIServiceCall)( (This)->lpVtbl -> AsynchronousCall(This,pIServiceCall) )
#define IServiceActivity_BindToCurrentThread(This)( (This)->lpVtbl -> BindToCurrentThread(This) )
#define IServiceActivity_UnbindFromThread(This)( (This)->lpVtbl -> UnbindFromThread(This) )
#endif
#endif
#ifndef __IThreadPoolKnobs_INTERFACE_DEFINED__
#define __IThreadPoolKnobs_INTERFACE_DEFINED__
extern const IID IID_IThreadPoolKnobs;
typedef struct IThreadPoolKnobsVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE *QueryInterface) (IThreadPoolKnobs *This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE *AddRef) (IThreadPoolKnobs *This);
	ULONG(STDMETHODCALLTYPE *Release) (IThreadPoolKnobs *This);
	HRESULT(STDMETHODCALLTYPE *GetMaxThreads) (IThreadPoolKnobs *This, long *plcMaxThreads);
	HRESULT(STDMETHODCALLTYPE *GetCurrentThreads) (IThreadPoolKnobs *This, long *plcCurrentThreads);
	HRESULT(STDMETHODCALLTYPE *SetMaxThreads) (IThreadPoolKnobs *This, long lcMaxThreads);
	HRESULT(STDMETHODCALLTYPE *GetDeleteDelay) (IThreadPoolKnobs *This, long *pmsecDeleteDelay);
	HRESULT(STDMETHODCALLTYPE *SetDeleteDelay) (IThreadPoolKnobs *This, long msecDeleteDelay);
	HRESULT(STDMETHODCALLTYPE *GetMaxQueuedRequests) (IThreadPoolKnobs *This, long *plcMaxQueuedRequests);
	HRESULT(STDMETHODCALLTYPE *GetCurrentQueuedRequests) (IThreadPoolKnobs *This, long *plcCurrentQueuedRequests);
	HRESULT(STDMETHODCALLTYPE *SetMaxQueuedRequests) (IThreadPoolKnobs *This, long lcMaxQueuedRequests);
	HRESULT(STDMETHODCALLTYPE *SetMinThreads) (IThreadPoolKnobs *This, long lcMinThreads);
	HRESULT(STDMETHODCALLTYPE *SetQueueDepth) (IThreadPoolKnobs *This, long lcQueueDepth);
	END_INTERFACE
}  IThreadPoolKnobsVtbl;
interface IThreadPoolKnobs
{
	CONST_VTBL struct IThreadPoolKnobsVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IThreadPoolKnobs_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IThreadPoolKnobs_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define IThreadPoolKnobs_Release(This)( (This)->lpVtbl -> Release(This) )
#define IThreadPoolKnobs_GetMaxThreads(This,plcMaxThreads)( (This)->lpVtbl -> GetMaxThreads(This,plcMaxThreads) )
#define IThreadPoolKnobs_GetCurrentThreads(This,plcCurrentThreads)( (This)->lpVtbl -> GetCurrentThreads(This,plcCurrentThreads) )
#define IThreadPoolKnobs_SetMaxThreads(This,lcMaxThreads)( (This)->lpVtbl -> SetMaxThreads(This,lcMaxThreads) )
#define IThreadPoolKnobs_GetDeleteDelay(This,pmsecDeleteDelay)( (This)->lpVtbl -> GetDeleteDelay(This,pmsecDeleteDelay) )
#define IThreadPoolKnobs_SetDeleteDelay(This,msecDeleteDelay)( (This)->lpVtbl -> SetDeleteDelay(This,msecDeleteDelay) )
#define IThreadPoolKnobs_GetMaxQueuedRequests(This,plcMaxQueuedRequests)( (This)->lpVtbl -> GetMaxQueuedRequests(This,plcMaxQueuedRequests) )
#define IThreadPoolKnobs_GetCurrentQueuedRequests(This,plcCurrentQueuedRequests)( (This)->lpVtbl -> GetCurrentQueuedRequests(This,plcCurrentQueuedRequests) )
#define IThreadPoolKnobs_SetMaxQueuedRequests(This,lcMaxQueuedRequests)( (This)->lpVtbl -> SetMaxQueuedRequests(This,lcMaxQueuedRequests) )
#define IThreadPoolKnobs_SetMinThreads(This,lcMinThreads)( (This)->lpVtbl -> SetMinThreads(This,lcMinThreads) )
#define IThreadPoolKnobs_SetQueueDepth(This,lcQueueDepth)( (This)->lpVtbl -> SetQueueDepth(This,lcQueueDepth) )
#endif
#endif
#ifndef __IComStaThreadPoolKnobs_INTERFACE_DEFINED__
#define __IComStaThreadPoolKnobs_INTERFACE_DEFINED__
extern const IID IID_IComStaThreadPoolKnobs;
typedef struct IComStaThreadPoolKnobsVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE *QueryInterface) (IComStaThreadPoolKnobs *This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE *AddRef) (IComStaThreadPoolKnobs *This);
	ULONG(STDMETHODCALLTYPE *Release) (IComStaThreadPoolKnobs *This);
	HRESULT(STDMETHODCALLTYPE *SetMinThreadCount) (IComStaThreadPoolKnobs *This, DWORD minThreads);
	HRESULT(STDMETHODCALLTYPE *GetMinThreadCount) (IComStaThreadPoolKnobs *This, DWORD *minThreads);
	HRESULT(STDMETHODCALLTYPE *SetMaxThreadCount) (IComStaThreadPoolKnobs *This, DWORD maxThreads);
	HRESULT(STDMETHODCALLTYPE *GetMaxThreadCount) (IComStaThreadPoolKnobs *This, DWORD *maxThreads);
	HRESULT(STDMETHODCALLTYPE *SetActivityPerThread) (IComStaThreadPoolKnobs *This, DWORD activitiesPerThread);
	HRESULT(STDMETHODCALLTYPE *GetActivityPerThread) (IComStaThreadPoolKnobs *This, DWORD *activitiesPerThread);
	HRESULT(STDMETHODCALLTYPE *SetActivityRatio) (IComStaThreadPoolKnobs *This, DOUBLE activityRatio);
	HRESULT(STDMETHODCALLTYPE *GetActivityRatio) (IComStaThreadPoolKnobs *This, DOUBLE *activityRatio);
	HRESULT(STDMETHODCALLTYPE *GetThreadCount) (IComStaThreadPoolKnobs *This, DWORD *pdwThreads);
	HRESULT(STDMETHODCALLTYPE *GetQueueDepth) (IComStaThreadPoolKnobs *This, DWORD *pdwQDepth);
	HRESULT(STDMETHODCALLTYPE *SetQueueDepth) (IComStaThreadPoolKnobs *This, long dwQDepth);
	END_INTERFACE
}  IComStaThreadPoolKnobsVtbl;
interface IComStaThreadPoolKnobs
{
	CONST_VTBL struct IComStaThreadPoolKnobsVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IComStaThreadPoolKnobs_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IComStaThreadPoolKnobs_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define IComStaThreadPoolKnobs_Release(This)( (This)->lpVtbl -> Release(This) )
#define IComStaThreadPoolKnobs_SetMinThreadCount(This,minThreads)( (This)->lpVtbl -> SetMinThreadCount(This,minThreads) )
#define IComStaThreadPoolKnobs_GetMinThreadCount(This,minThreads)( (This)->lpVtbl -> GetMinThreadCount(This,minThreads) )
#define IComStaThreadPoolKnobs_SetMaxThreadCount(This,maxThreads)( (This)->lpVtbl -> SetMaxThreadCount(This,maxThreads) )
#define IComStaThreadPoolKnobs_GetMaxThreadCount(This,maxThreads)( (This)->lpVtbl -> GetMaxThreadCount(This,maxThreads) )
#define IComStaThreadPoolKnobs_SetActivityPerThread(This,activitiesPerThread)( (This)->lpVtbl -> SetActivityPerThread(This,activitiesPerThread) )
#define IComStaThreadPoolKnobs_GetActivityPerThread(This,activitiesPerThread)( (This)->lpVtbl -> GetActivityPerThread(This,activitiesPerThread) )
#define IComStaThreadPoolKnobs_SetActivityRatio(This,activityRatio)( (This)->lpVtbl -> SetActivityRatio(This,activityRatio) )
#define IComStaThreadPoolKnobs_GetActivityRatio(This,activityRatio)( (This)->lpVtbl -> GetActivityRatio(This,activityRatio) )
#define IComStaThreadPoolKnobs_GetThreadCount(This,pdwThreads)( (This)->lpVtbl -> GetThreadCount(This,pdwThreads) )
#define IComStaThreadPoolKnobs_GetQueueDepth(This,pdwQDepth)( (This)->lpVtbl -> GetQueueDepth(This,pdwQDepth) )
#define IComStaThreadPoolKnobs_SetQueueDepth(This,dwQDepth)( (This)->lpVtbl -> SetQueueDepth(This,dwQDepth) )
#endif
#endif
#ifndef __IComMtaThreadPoolKnobs_INTERFACE_DEFINED__
#define __IComMtaThreadPoolKnobs_INTERFACE_DEFINED__
extern const IID IID_IComMtaThreadPoolKnobs;
typedef struct IComMtaThreadPoolKnobsVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE *QueryInterface) (IComMtaThreadPoolKnobs *This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE *AddRef) (IComMtaThreadPoolKnobs *This);
	ULONG(STDMETHODCALLTYPE *Release) (IComMtaThreadPoolKnobs *This);
	HRESULT(STDMETHODCALLTYPE *MTASetMaxThreadCount) (IComMtaThreadPoolKnobs *This, DWORD dwMaxThreads);
	HRESULT(STDMETHODCALLTYPE *MTAGetMaxThreadCount) (IComMtaThreadPoolKnobs *This, DWORD *pdwMaxThreads);
	HRESULT(STDMETHODCALLTYPE *MTASetThrottleValue) (IComMtaThreadPoolKnobs *This, DWORD dwThrottle);
	HRESULT(STDMETHODCALLTYPE *MTAGetThrottleValue) (IComMtaThreadPoolKnobs *This, DWORD *pdwThrottle);
	END_INTERFACE
}  IComMtaThreadPoolKnobsVtbl;
interface IComMtaThreadPoolKnobs
{
	CONST_VTBL struct IComMtaThreadPoolKnobsVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IComMtaThreadPoolKnobs_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IComMtaThreadPoolKnobs_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define IComMtaThreadPoolKnobs_Release(This)( (This)->lpVtbl -> Release(This) )
#define IComMtaThreadPoolKnobs_MTASetMaxThreadCount(This,dwMaxThreads)( (This)->lpVtbl -> MTASetMaxThreadCount(This,dwMaxThreads) )
#define IComMtaThreadPoolKnobs_MTAGetMaxThreadCount(This,pdwMaxThreads)( (This)->lpVtbl -> MTAGetMaxThreadCount(This,pdwMaxThreads) )
#define IComMtaThreadPoolKnobs_MTASetThrottleValue(This,dwThrottle)( (This)->lpVtbl -> MTASetThrottleValue(This,dwThrottle) )
#define IComMtaThreadPoolKnobs_MTAGetThrottleValue(This,pdwThrottle)( (This)->lpVtbl -> MTAGetThrottleValue(This,pdwThrottle) )
#endif
#endif
#ifndef __IComStaThreadPoolKnobs2_INTERFACE_DEFINED__
#define __IComStaThreadPoolKnobs2_INTERFACE_DEFINED__
extern const IID IID_IComStaThreadPoolKnobs2;
typedef struct IComStaThreadPoolKnobs2Vtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE *QueryInterface) (IComStaThreadPoolKnobs2 *This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE *AddRef) (IComStaThreadPoolKnobs2 *This);
	ULONG(STDMETHODCALLTYPE *Release) (IComStaThreadPoolKnobs2 *This);
	HRESULT(STDMETHODCALLTYPE *SetMinThreadCount) (IComStaThreadPoolKnobs2 *This, DWORD minThreads);
	HRESULT(STDMETHODCALLTYPE *GetMinThreadCount) (IComStaThreadPoolKnobs2 *This, DWORD *minThreads);
	HRESULT(STDMETHODCALLTYPE *SetMaxThreadCount) (IComStaThreadPoolKnobs2 *This, DWORD maxThreads);
	HRESULT(STDMETHODCALLTYPE *GetMaxThreadCount) (IComStaThreadPoolKnobs2 *This, DWORD *maxThreads);
	HRESULT(STDMETHODCALLTYPE *SetActivityPerThread) (IComStaThreadPoolKnobs2 *This, DWORD activitiesPerThread);
	HRESULT(STDMETHODCALLTYPE *GetActivityPerThread) (IComStaThreadPoolKnobs2 *This, DWORD *activitiesPerThread);
	HRESULT(STDMETHODCALLTYPE *SetActivityRatio) (IComStaThreadPoolKnobs2 *This, DOUBLE activityRatio);
	HRESULT(STDMETHODCALLTYPE *GetActivityRatio) (IComStaThreadPoolKnobs2 *This, DOUBLE *activityRatio);
	HRESULT(STDMETHODCALLTYPE *GetThreadCount) (IComStaThreadPoolKnobs2 *This, DWORD *pdwThreads);
	HRESULT(STDMETHODCALLTYPE *GetQueueDepth) (IComStaThreadPoolKnobs2 *This, DWORD *pdwQDepth);
	HRESULT(STDMETHODCALLTYPE *SetQueueDepth) (IComStaThreadPoolKnobs2 *This, long dwQDepth);
	HRESULT(STDMETHODCALLTYPE *GetMaxCPULoad) (IComStaThreadPoolKnobs2 *This, DWORD *pdwLoad);
	HRESULT(STDMETHODCALLTYPE *SetMaxCPULoad) (IComStaThreadPoolKnobs2 *This, long pdwLoad);
	HRESULT(STDMETHODCALLTYPE *GetCPUMetricEnabled) (IComStaThreadPoolKnobs2 *This, BOOL *pbMetricEnabled);
	HRESULT(STDMETHODCALLTYPE *SetCPUMetricEnabled) (IComStaThreadPoolKnobs2 *This, BOOL bMetricEnabled);
	HRESULT(STDMETHODCALLTYPE *GetCreateThreadsAggressively) (IComStaThreadPoolKnobs2 *This, BOOL *pbMetricEnabled);
	HRESULT(STDMETHODCALLTYPE *SetCreateThreadsAggressively) (IComStaThreadPoolKnobs2 *This, BOOL bMetricEnabled);
	HRESULT(STDMETHODCALLTYPE *GetMaxCSR) (IComStaThreadPoolKnobs2 *This, DWORD *pdwCSR);
	HRESULT(STDMETHODCALLTYPE *SetMaxCSR) (IComStaThreadPoolKnobs2 *This, long dwCSR);
	HRESULT(STDMETHODCALLTYPE *GetWaitTimeForThreadCleanup) (IComStaThreadPoolKnobs2 *This, DWORD *pdwThreadCleanupWaitTime);
	HRESULT(STDMETHODCALLTYPE *SetWaitTimeForThreadCleanup) (IComStaThreadPoolKnobs2 *This, long dwThreadCleanupWaitTime);
	END_INTERFACE
}  IComStaThreadPoolKnobs2Vtbl;
interface IComStaThreadPoolKnobs2
{
	CONST_VTBL struct IComStaThreadPoolKnobs2Vtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IComStaThreadPoolKnobs2_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IComStaThreadPoolKnobs2_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define IComStaThreadPoolKnobs2_Release(This)( (This)->lpVtbl -> Release(This) )
#define IComStaThreadPoolKnobs2_SetMinThreadCount(This,minThreads)( (This)->lpVtbl -> SetMinThreadCount(This,minThreads) )
#define IComStaThreadPoolKnobs2_GetMinThreadCount(This,minThreads)( (This)->lpVtbl -> GetMinThreadCount(This,minThreads) )
#define IComStaThreadPoolKnobs2_SetMaxThreadCount(This,maxThreads)( (This)->lpVtbl -> SetMaxThreadCount(This,maxThreads) )
#define IComStaThreadPoolKnobs2_GetMaxThreadCount(This,maxThreads)( (This)->lpVtbl -> GetMaxThreadCount(This,maxThreads) )
#define IComStaThreadPoolKnobs2_SetActivityPerThread(This,activitiesPerThread)( (This)->lpVtbl -> SetActivityPerThread(This,activitiesPerThread) )
#define IComStaThreadPoolKnobs2_GetActivityPerThread(This,activitiesPerThread)( (This)->lpVtbl -> GetActivityPerThread(This,activitiesPerThread) )
#define IComStaThreadPoolKnobs2_SetActivityRatio(This,activityRatio)( (This)->lpVtbl -> SetActivityRatio(This,activityRatio) )
#define IComStaThreadPoolKnobs2_GetActivityRatio(This,activityRatio)( (This)->lpVtbl -> GetActivityRatio(This,activityRatio) )
#define IComStaThreadPoolKnobs2_GetThreadCount(This,pdwThreads)( (This)->lpVtbl -> GetThreadCount(This,pdwThreads) )
#define IComStaThreadPoolKnobs2_GetQueueDepth(This,pdwQDepth)( (This)->lpVtbl -> GetQueueDepth(This,pdwQDepth) )
#define IComStaThreadPoolKnobs2_SetQueueDepth(This,dwQDepth)( (This)->lpVtbl -> SetQueueDepth(This,dwQDepth) )
#define IComStaThreadPoolKnobs2_GetMaxCPULoad(This,pdwLoad)( (This)->lpVtbl -> GetMaxCPULoad(This,pdwLoad) )
#define IComStaThreadPoolKnobs2_SetMaxCPULoad(This,pdwLoad)( (This)->lpVtbl -> SetMaxCPULoad(This,pdwLoad) )
#define IComStaThreadPoolKnobs2_GetCPUMetricEnabled(This,pbMetricEnabled)( (This)->lpVtbl -> GetCPUMetricEnabled(This,pbMetricEnabled) )
#define IComStaThreadPoolKnobs2_SetCPUMetricEnabled(This,bMetricEnabled)( (This)->lpVtbl -> SetCPUMetricEnabled(This,bMetricEnabled) )
#define IComStaThreadPoolKnobs2_GetCreateThreadsAggressively(This,pbMetricEnabled)( (This)->lpVtbl -> GetCreateThreadsAggressively(This,pbMetricEnabled) )
#define IComStaThreadPoolKnobs2_SetCreateThreadsAggressively(This,bMetricEnabled)( (This)->lpVtbl -> SetCreateThreadsAggressively(This,bMetricEnabled) )
#define IComStaThreadPoolKnobs2_GetMaxCSR(This,pdwCSR)( (This)->lpVtbl -> GetMaxCSR(This,pdwCSR) )
#define IComStaThreadPoolKnobs2_SetMaxCSR(This,dwCSR)( (This)->lpVtbl -> SetMaxCSR(This,dwCSR) )
#define IComStaThreadPoolKnobs2_GetWaitTimeForThreadCleanup(This,pdwThreadCleanupWaitTime)( (This)->lpVtbl -> GetWaitTimeForThreadCleanup(This,pdwThreadCleanupWaitTime) )
#define IComStaThreadPoolKnobs2_SetWaitTimeForThreadCleanup(This,dwThreadCleanupWaitTime)( (This)->lpVtbl -> SetWaitTimeForThreadCleanup(This,dwThreadCleanupWaitTime) )
#endif
#endif
#ifndef __IProcessInitializer_INTERFACE_DEFINED__
#define __IProcessInitializer_INTERFACE_DEFINED__
extern const IID IID_IProcessInitializer;
typedef struct IProcessInitializerVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE *QueryInterface) (IProcessInitializer *This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE *AddRef) (IProcessInitializer *This);
	ULONG(STDMETHODCALLTYPE *Release) (IProcessInitializer *This);
	HRESULT(STDMETHODCALLTYPE *Startup) (IProcessInitializer *This, IUnknown *punkProcessControl);
	HRESULT(STDMETHODCALLTYPE *Shutdown) (IProcessInitializer *This);
	END_INTERFACE
}  IProcessInitializerVtbl;
interface IProcessInitializer
{
	CONST_VTBL struct IProcessInitializerVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IProcessInitializer_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IProcessInitializer_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define IProcessInitializer_Release(This)( (This)->lpVtbl -> Release(This) )
#define IProcessInitializer_Startup(This,punkProcessControl)( (This)->lpVtbl -> Startup(This,punkProcessControl) )
#define IProcessInitializer_Shutdown(This)( (This)->lpVtbl -> Shutdown(This) )
#endif
#endif
#ifndef __IServicePoolConfig_INTERFACE_DEFINED__
#define __IServicePoolConfig_INTERFACE_DEFINED__
extern const IID IID_IServicePoolConfig;
typedef struct IServicePoolConfigVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE *QueryInterface) (IServicePoolConfig *This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE *AddRef) (IServicePoolConfig *This);
	ULONG(STDMETHODCALLTYPE *Release) (IServicePoolConfig *This);
	HRESULT(STDMETHODCALLTYPE *put_MaxPoolSize) (IServicePoolConfig *This, DWORD dwMaxPool);
	HRESULT(STDMETHODCALLTYPE *get_MaxPoolSize) (IServicePoolConfig *This, DWORD *pdwMaxPool);
	HRESULT(STDMETHODCALLTYPE *put_MinPoolSize) (IServicePoolConfig *This, DWORD dwMinPool);
	HRESULT(STDMETHODCALLTYPE *get_MinPoolSize) (IServicePoolConfig *This, DWORD *pdwMinPool);
	HRESULT(STDMETHODCALLTYPE *put_CreationTimeout) (IServicePoolConfig *This, DWORD dwCreationTimeout);
	HRESULT(STDMETHODCALLTYPE *get_CreationTimeout) (IServicePoolConfig *This, DWORD *pdwCreationTimeout);
	HRESULT(STDMETHODCALLTYPE *put_TransactionAffinity) (IServicePoolConfig *This, BOOL fTxAffinity);
	HRESULT(STDMETHODCALLTYPE *get_TransactionAffinity) (IServicePoolConfig *This, BOOL *pfTxAffinity);
	HRESULT(STDMETHODCALLTYPE *put_ClassFactory) (IServicePoolConfig *This, IClassFactory *pFactory);
	HRESULT(STDMETHODCALLTYPE *get_ClassFactory) (IServicePoolConfig *This, IClassFactory **pFactory);
	END_INTERFACE
}  IServicePoolConfigVtbl;
interface IServicePoolConfig
{
	CONST_VTBL struct IServicePoolConfigVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IServicePoolConfig_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IServicePoolConfig_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define IServicePoolConfig_Release(This)( (This)->lpVtbl -> Release(This) )
#define IServicePoolConfig_put_MaxPoolSize(This,dwMaxPool)( (This)->lpVtbl -> put_MaxPoolSize(This,dwMaxPool) )
#define IServicePoolConfig_get_MaxPoolSize(This,pdwMaxPool)( (This)->lpVtbl -> get_MaxPoolSize(This,pdwMaxPool) )
#define IServicePoolConfig_put_MinPoolSize(This,dwMinPool)( (This)->lpVtbl -> put_MinPoolSize(This,dwMinPool) )
#define IServicePoolConfig_get_MinPoolSize(This,pdwMinPool)( (This)->lpVtbl -> get_MinPoolSize(This,pdwMinPool) )
#define IServicePoolConfig_put_CreationTimeout(This,dwCreationTimeout)( (This)->lpVtbl -> put_CreationTimeout(This,dwCreationTimeout) )
#define IServicePoolConfig_get_CreationTimeout(This,pdwCreationTimeout)( (This)->lpVtbl -> get_CreationTimeout(This,pdwCreationTimeout) )
#define IServicePoolConfig_put_TransactionAffinity(This,fTxAffinity)( (This)->lpVtbl -> put_TransactionAffinity(This,fTxAffinity) )
#define IServicePoolConfig_get_TransactionAffinity(This,pfTxAffinity)( (This)->lpVtbl -> get_TransactionAffinity(This,pfTxAffinity) )
#define IServicePoolConfig_put_ClassFactory(This,pFactory)( (This)->lpVtbl -> put_ClassFactory(This,pFactory) )
#define IServicePoolConfig_get_ClassFactory(This,pFactory)( (This)->lpVtbl -> get_ClassFactory(This,pFactory) )
#endif
#endif
#ifndef __IServicePool_INTERFACE_DEFINED__
#define __IServicePool_INTERFACE_DEFINED__
extern const IID IID_IServicePool;
typedef struct IServicePoolVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE *QueryInterface) (IServicePool *This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE *AddRef) (IServicePool *This);
	ULONG(STDMETHODCALLTYPE *Release) (IServicePool *This);
	HRESULT(STDMETHODCALLTYPE *Initialize) (IServicePool *This, IUnknown *pPoolConfig);
	HRESULT(STDMETHODCALLTYPE *GetObject) (IServicePool *This, REFIID riid, void **ppv);
	HRESULT(STDMETHODCALLTYPE *Shutdown) (IServicePool *This);
	END_INTERFACE
}  IServicePoolVtbl;
interface IServicePool
{
	CONST_VTBL struct IServicePoolVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IServicePool_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IServicePool_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define IServicePool_Release(This)( (This)->lpVtbl -> Release(This) )
#define IServicePool_Initialize(This,pPoolConfig)( (This)->lpVtbl -> Initialize(This,pPoolConfig) )
#define IServicePool_GetObject(This,riid,ppv)( (This)->lpVtbl -> GetObject(This,riid,ppv) )
#define IServicePool_Shutdown(This)( (This)->lpVtbl -> Shutdown(This) )
#endif
#endif
#ifndef __IManagedPooledObj_INTERFACE_DEFINED__
#define __IManagedPooledObj_INTERFACE_DEFINED__
extern const IID IID_IManagedPooledObj;
typedef struct IManagedPooledObjVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE *QueryInterface) (IManagedPooledObj *This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE *AddRef) (IManagedPooledObj *This);
	ULONG(STDMETHODCALLTYPE *Release) (IManagedPooledObj *This);
	HRESULT(STDMETHODCALLTYPE *SetHeld) (IManagedPooledObj *This, BOOL m_bHeld);
	END_INTERFACE
}  IManagedPooledObjVtbl;
interface IManagedPooledObj
{
	CONST_VTBL struct IManagedPooledObjVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IManagedPooledObj_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IManagedPooledObj_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define IManagedPooledObj_Release(This)( (This)->lpVtbl -> Release(This) )
#define IManagedPooledObj_SetHeld(This,m_bHeld)( (This)->lpVtbl -> SetHeld(This,m_bHeld) )
#endif
#endif
#ifndef __IManagedPoolAction_INTERFACE_DEFINED__
#define __IManagedPoolAction_INTERFACE_DEFINED__
extern const IID IID_IManagedPoolAction;
typedef struct IManagedPoolActionVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE *QueryInterface) (IManagedPoolAction *This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE *AddRef) (IManagedPoolAction *This);
	ULONG(STDMETHODCALLTYPE *Release) (IManagedPoolAction *This);
	HRESULT(STDMETHODCALLTYPE *LastRelease) (IManagedPoolAction *This);
	END_INTERFACE
}  IManagedPoolActionVtbl;
interface IManagedPoolAction
{
	CONST_VTBL struct IManagedPoolActionVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IManagedPoolAction_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IManagedPoolAction_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define IManagedPoolAction_Release(This)( (This)->lpVtbl -> Release(This) )
#define IManagedPoolAction_LastRelease(This)( (This)->lpVtbl -> LastRelease(This) )
#endif
#endif
#ifndef __IManagedObjectInfo_INTERFACE_DEFINED__
#define __IManagedObjectInfo_INTERFACE_DEFINED__
extern const IID IID_IManagedObjectInfo;
typedef struct IManagedObjectInfoVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE *QueryInterface) (IManagedObjectInfo *This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE *AddRef) (IManagedObjectInfo *This);
	ULONG(STDMETHODCALLTYPE *Release) (IManagedObjectInfo *This);
	HRESULT(STDMETHODCALLTYPE *GetIUnknown) (IManagedObjectInfo *This, IUnknown **pUnk);
	HRESULT(STDMETHODCALLTYPE *GetIObjectControl) (IManagedObjectInfo *This, IObjectControl **pCtrl);
	HRESULT(STDMETHODCALLTYPE *SetInPool) (IManagedObjectInfo *This, BOOL bInPool, IManagedPooledObj *pPooledObj);
	HRESULT(STDMETHODCALLTYPE *SetWrapperStrength) (IManagedObjectInfo *This, BOOL bStrong);
	END_INTERFACE
}  IManagedObjectInfoVtbl;
interface IManagedObjectInfo
{
	CONST_VTBL struct IManagedObjectInfoVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IManagedObjectInfo_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IManagedObjectInfo_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define IManagedObjectInfo_Release(This)( (This)->lpVtbl -> Release(This) )
#define IManagedObjectInfo_GetIUnknown(This,pUnk)( (This)->lpVtbl -> GetIUnknown(This,pUnk) )
#define IManagedObjectInfo_GetIObjectControl(This,pCtrl)( (This)->lpVtbl -> GetIObjectControl(This,pCtrl) )
#define IManagedObjectInfo_SetInPool(This,bInPool,pPooledObj)( (This)->lpVtbl -> SetInPool(This,bInPool,pPooledObj) )
#define IManagedObjectInfo_SetWrapperStrength(This,bStrong)( (This)->lpVtbl -> SetWrapperStrength(This,bStrong) )
#endif
#endif
#ifndef __IAppDomainHelper_INTERFACE_DEFINED__
#define __IAppDomainHelper_INTERFACE_DEFINED__
extern const IID IID_IAppDomainHelper;
typedef struct IAppDomainHelperVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE *QueryInterface) (IAppDomainHelper *This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE *AddRef) (IAppDomainHelper *This);
	ULONG(STDMETHODCALLTYPE *Release) (IAppDomainHelper *This);
	HRESULT(STDMETHODCALLTYPE *GetTypeInfoCount) (IAppDomainHelper *This, UINT *pctinfo);
	HRESULT(STDMETHODCALLTYPE *GetTypeInfo) (IAppDomainHelper *This, UINT iTInfo, LCID lcid, ITypeInfo **ppTInfo);
	HRESULT(STDMETHODCALLTYPE *GetIDsOfNames) (IAppDomainHelper *This, REFIID riid, LPOLESTR *rgszNames, UINT cNames, LCID lcid, DISPID *rgDispId);
	HRESULT(STDMETHODCALLTYPE *Invoke) (IAppDomainHelper *This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS *pDispParams, VARIANT *pVarResult, EXCEPINFO *pExcepInfo, UINT *puArgErr);
	HRESULT(STDMETHODCALLTYPE *Initialize) (IAppDomainHelper *This, IUnknown *pUnkAD, HRESULT(STDMETHODCALLTYPE __MIDL__IAppDomainHelper0000) (void *pv), void *pPool);
	HRESULT(STDMETHODCALLTYPE *DoCallback) (IAppDomainHelper *This, IUnknown *pUnkAD, HRESULT(STDMETHODCALLTYPE __MIDL__IAppDomainHelper0001) (void *pv), void *pPool);
	END_INTERFACE
}  IAppDomainHelperVtbl;
interface IAppDomainHelper
{
	CONST_VTBL struct IAppDomainHelperVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IAppDomainHelper_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IAppDomainHelper_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define IAppDomainHelper_Release(This)( (This)->lpVtbl -> Release(This) )
#define IAppDomainHelper_GetTypeInfoCount(This,pctinfo)( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define IAppDomainHelper_GetTypeInfo(This,iTInfo,lcid,ppTInfo)( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define IAppDomainHelper_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define IAppDomainHelper_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define IAppDomainHelper_Initialize(This,pUnkAD,__MIDL__IAppDomainHelper0000,pPool)( (This)->lpVtbl -> Initialize(This,pUnkAD,__MIDL__IAppDomainHelper0000,pPool) )
#define IAppDomainHelper_DoCallback(This,pUnkAD,__MIDL__IAppDomainHelper0001,pPool)( (This)->lpVtbl -> DoCallback(This,pUnkAD,__MIDL__IAppDomainHelper0001,pPool) )
#endif
#endif
#ifndef __IAssemblyLocator_INTERFACE_DEFINED__
#define __IAssemblyLocator_INTERFACE_DEFINED__
extern const IID IID_IAssemblyLocator;
typedef struct IAssemblyLocatorVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE *QueryInterface) (IAssemblyLocator *This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE *AddRef) (IAssemblyLocator *This);
	ULONG(STDMETHODCALLTYPE *Release) (IAssemblyLocator *This);
	HRESULT(STDMETHODCALLTYPE *GetTypeInfoCount) (IAssemblyLocator *This, UINT *pctinfo);
	HRESULT(STDMETHODCALLTYPE *GetTypeInfo) (IAssemblyLocator *This, UINT iTInfo, LCID lcid, ITypeInfo **ppTInfo);
	HRESULT(STDMETHODCALLTYPE *GetIDsOfNames) (IAssemblyLocator *This, REFIID riid, LPOLESTR *rgszNames, UINT cNames, LCID lcid, DISPID *rgDispId);
	HRESULT(STDMETHODCALLTYPE *Invoke) (IAssemblyLocator *This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS *pDispParams, VARIANT *pVarResult, EXCEPINFO *pExcepInfo, UINT *puArgErr);
	HRESULT(STDMETHODCALLTYPE *GetModules) (IAssemblyLocator *This, BSTR applicationDir, BSTR applicationName, BSTR assemblyName, SAFEARRAY **pModules);
	END_INTERFACE
}  IAssemblyLocatorVtbl;
interface IAssemblyLocator
{
	CONST_VTBL struct IAssemblyLocatorVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IAssemblyLocator_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IAssemblyLocator_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define IAssemblyLocator_Release(This)( (This)->lpVtbl -> Release(This) )
#define IAssemblyLocator_GetTypeInfoCount(This,pctinfo)( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define IAssemblyLocator_GetTypeInfo(This,iTInfo,lcid,ppTInfo)( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define IAssemblyLocator_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define IAssemblyLocator_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define IAssemblyLocator_GetModules(This,applicationDir,applicationName,assemblyName,pModules)( (This)->lpVtbl -> GetModules(This,applicationDir,applicationName,assemblyName,pModules) )
#endif
#endif
#ifndef __IManagedActivationEvents_INTERFACE_DEFINED__
#define __IManagedActivationEvents_INTERFACE_DEFINED__
extern const IID IID_IManagedActivationEvents;
typedef struct IManagedActivationEventsVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE *QueryInterface) (IManagedActivationEvents *This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE *AddRef) (IManagedActivationEvents *This);
	ULONG(STDMETHODCALLTYPE *Release) (IManagedActivationEvents *This);
	HRESULT(STDMETHODCALLTYPE *CreateManagedStub) (IManagedActivationEvents *This, IManagedObjectInfo *pInfo, BOOL fDist);
	HRESULT(STDMETHODCALLTYPE *DestroyManagedStub) (IManagedActivationEvents *This, IManagedObjectInfo *pInfo);
	END_INTERFACE
}  IManagedActivationEventsVtbl;
interface IManagedActivationEvents
{
	CONST_VTBL struct IManagedActivationEventsVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IManagedActivationEvents_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IManagedActivationEvents_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define IManagedActivationEvents_Release(This)( (This)->lpVtbl -> Release(This) )
#define IManagedActivationEvents_CreateManagedStub(This,pInfo,fDist)( (This)->lpVtbl -> CreateManagedStub(This,pInfo,fDist) )
#define IManagedActivationEvents_DestroyManagedStub(This,pInfo)( (This)->lpVtbl -> DestroyManagedStub(This,pInfo) )
#endif
#endif
#ifndef __ISendMethodEvents_INTERFACE_DEFINED__
#define __ISendMethodEvents_INTERFACE_DEFINED__
extern const IID IID_ISendMethodEvents;
typedef struct ISendMethodEventsVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE *QueryInterface) (ISendMethodEvents *This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE *AddRef) (ISendMethodEvents *This);
	ULONG(STDMETHODCALLTYPE *Release) (ISendMethodEvents *This);
	HRESULT(STDMETHODCALLTYPE *SendMethodCall) (ISendMethodEvents *This, const void *pIdentity, REFIID riid, DWORD dwMeth);
	HRESULT(STDMETHODCALLTYPE *SendMethodReturn) (ISendMethodEvents *This, const void *pIdentity, REFIID riid, DWORD dwMeth, HRESULT hrCall, HRESULT hrServer);
	END_INTERFACE
}  ISendMethodEventsVtbl;
interface ISendMethodEvents
{
	CONST_VTBL struct ISendMethodEventsVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define ISendMethodEvents_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define ISendMethodEvents_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define ISendMethodEvents_Release(This)( (This)->lpVtbl -> Release(This) )
#define ISendMethodEvents_SendMethodCall(This,pIdentity,riid,dwMeth)( (This)->lpVtbl -> SendMethodCall(This,pIdentity,riid,dwMeth) )
#define ISendMethodEvents_SendMethodReturn(This,pIdentity,riid,dwMeth,hrCall,hrServer)( (This)->lpVtbl -> SendMethodReturn(This,pIdentity,riid,dwMeth,hrCall,hrServer) )
#endif
#endif
extern RPC_IF_HANDLE __MIDL_itf_autosvcs_0000_0113_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_autosvcs_0000_0113_v0_0_s_ifspec;
#ifndef __ITransactionResourcePool_INTERFACE_DEFINED__
#define __ITransactionResourcePool_INTERFACE_DEFINED__
extern const IID IID_ITransactionResourcePool;
typedef struct ITransactionResourcePoolVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE *QueryInterface) (ITransactionResourcePool *This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE *AddRef) (ITransactionResourcePool *This);
	ULONG(STDMETHODCALLTYPE *Release) (ITransactionResourcePool *This);
	HRESULT(STDMETHODCALLTYPE *PutResource) (ITransactionResourcePool *This, IObjPool *pPool, IUnknown *pUnk);
	HRESULT(STDMETHODCALLTYPE *GetResource) (ITransactionResourcePool *This, IObjPool *pPool, IUnknown **ppUnk);
	END_INTERFACE
}  ITransactionResourcePoolVtbl;
interface ITransactionResourcePool
{
	CONST_VTBL struct ITransactionResourcePoolVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define ITransactionResourcePool_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define ITransactionResourcePool_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define ITransactionResourcePool_Release(This)( (This)->lpVtbl -> Release(This) )
#define ITransactionResourcePool_PutResource(This,pPool,pUnk)( (This)->lpVtbl -> PutResource(This,pPool,pUnk) )
#define ITransactionResourcePool_GetResource(This,pPool,ppUnk)( (This)->lpVtbl -> GetResource(This,pPool,ppUnk) )
#endif
#endif
extern HRESULT __stdcall MTSCreateActivity(REFIID riid, void **ppobj);
extern RPC_IF_HANDLE __MIDL_itf_autosvcs_0000_0114_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_autosvcs_0000_0114_v0_0_s_ifspec;
#ifndef __IMTSCall_INTERFACE_DEFINED__
#define __IMTSCall_INTERFACE_DEFINED__
extern const IID IID_IMTSCall;
typedef struct IMTSCallVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE *QueryInterface) (IMTSCall *This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE *AddRef) (IMTSCall *This);
	ULONG(STDMETHODCALLTYPE *Release) (IMTSCall *This);
	HRESULT(STDMETHODCALLTYPE *OnCall) (IMTSCall *This);
	END_INTERFACE
}  IMTSCallVtbl;
interface IMTSCall
{
	CONST_VTBL struct IMTSCallVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IMTSCall_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IMTSCall_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define IMTSCall_Release(This)( (This)->lpVtbl -> Release(This) )
#define IMTSCall_OnCall(This)( (This)->lpVtbl -> OnCall(This) )
#endif
#endif
#ifndef __IContextProperties_INTERFACE_DEFINED__
#define __IContextProperties_INTERFACE_DEFINED__
extern const IID IID_IContextProperties;
typedef struct IContextPropertiesVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE *QueryInterface) (IContextProperties *This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE *AddRef) (IContextProperties *This);
	ULONG(STDMETHODCALLTYPE *Release) (IContextProperties *This);
	HRESULT(STDMETHODCALLTYPE *Count) (IContextProperties *This, long *plCount);
	HRESULT(STDMETHODCALLTYPE *GetProperty) (IContextProperties *This, BSTR name, VARIANT *pProperty);
	HRESULT(STDMETHODCALLTYPE *EnumNames) (IContextProperties *This, IEnumNames **ppenum);
	HRESULT(STDMETHODCALLTYPE *SetProperty) (IContextProperties *This, BSTR name, VARIANT property);
	HRESULT(STDMETHODCALLTYPE *RemoveProperty) (IContextProperties *This, BSTR name);
	END_INTERFACE
}  IContextPropertiesVtbl;
interface IContextProperties
{
	CONST_VTBL struct IContextPropertiesVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IContextProperties_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IContextProperties_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define IContextProperties_Release(This)( (This)->lpVtbl -> Release(This) )
#define IContextProperties_Count(This,plCount)( (This)->lpVtbl -> Count(This,plCount) )
#define IContextProperties_GetProperty(This,name,pProperty)( (This)->lpVtbl -> GetProperty(This,name,pProperty) )
#define IContextProperties_EnumNames(This,ppenum)( (This)->lpVtbl -> EnumNames(This,ppenum) )
#define IContextProperties_SetProperty(This,name,property)( (This)->lpVtbl -> SetProperty(This,name,property) )
#define IContextProperties_RemoveProperty(This,name)( (This)->lpVtbl -> RemoveProperty(This,name) )
#endif
#endif
#ifndef __IObjPool_INTERFACE_DEFINED__
#define __IObjPool_INTERFACE_DEFINED__
extern const IID IID_IObjPool;
typedef struct IObjPoolVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE *QueryInterface) (IObjPool *This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE *AddRef) (IObjPool *This);
	ULONG(STDMETHODCALLTYPE *Release) (IObjPool *This);
	void (STDMETHODCALLTYPE *Reserved1) (IObjPool *This);
	void (STDMETHODCALLTYPE *Reserved2) (IObjPool *This);
	void (STDMETHODCALLTYPE *Reserved3) (IObjPool *This);
	void (STDMETHODCALLTYPE *Reserved4) (IObjPool *This);
	void (STDMETHODCALLTYPE *PutEndTx) (IObjPool *This, IUnknown *pObj);
	void (STDMETHODCALLTYPE *Reserved5) (IObjPool *This);
	void (STDMETHODCALLTYPE *Reserved6) (IObjPool *This);
	END_INTERFACE
}  IObjPoolVtbl;
interface IObjPool
{
	CONST_VTBL struct IObjPoolVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IObjPool_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IObjPool_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define IObjPool_Release(This)( (This)->lpVtbl -> Release(This) )
#define IObjPool_Reserved1(This)( (This)->lpVtbl -> Reserved1(This) )
#define IObjPool_Reserved2(This)( (This)->lpVtbl -> Reserved2(This) )
#define IObjPool_Reserved3(This)( (This)->lpVtbl -> Reserved3(This) )
#define IObjPool_Reserved4(This)( (This)->lpVtbl -> Reserved4(This) )
#define IObjPool_PutEndTx(This,pObj)( (This)->lpVtbl -> PutEndTx(This,pObj) )
#define IObjPool_Reserved5(This)( (This)->lpVtbl -> Reserved5(This) )
#define IObjPool_Reserved6(This)( (This)->lpVtbl -> Reserved6(This) )
#endif
#endif
#ifndef __ITransactionProperty_INTERFACE_DEFINED__
#define __ITransactionProperty_INTERFACE_DEFINED__
extern const IID IID_ITransactionProperty;
typedef struct ITransactionPropertyVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE *QueryInterface) (ITransactionProperty *This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE *AddRef) (ITransactionProperty *This);
	ULONG(STDMETHODCALLTYPE *Release) (ITransactionProperty *This);
	void (STDMETHODCALLTYPE *Reserved1) (ITransactionProperty *This);
	void (STDMETHODCALLTYPE *Reserved2) (ITransactionProperty *This);
	void (STDMETHODCALLTYPE *Reserved3) (ITransactionProperty *This);
	void (STDMETHODCALLTYPE *Reserved4) (ITransactionProperty *This);
	void (STDMETHODCALLTYPE *Reserved5) (ITransactionProperty *This);
	void (STDMETHODCALLTYPE *Reserved6) (ITransactionProperty *This);
	void (STDMETHODCALLTYPE *Reserved7) (ITransactionProperty *This);
	void (STDMETHODCALLTYPE *Reserved8) (ITransactionProperty *This);
	void (STDMETHODCALLTYPE *Reserved9) (ITransactionProperty *This);
	HRESULT(STDMETHODCALLTYPE *GetTransactionResourcePool) (ITransactionProperty *This, ITransactionResourcePool **ppTxPool);
	void (STDMETHODCALLTYPE *Reserved10) (ITransactionProperty *This);
	void (STDMETHODCALLTYPE *Reserved11) (ITransactionProperty *This);
	void (STDMETHODCALLTYPE *Reserved12) (ITransactionProperty *This);
	void (STDMETHODCALLTYPE *Reserved13) (ITransactionProperty *This);
	void (STDMETHODCALLTYPE *Reserved14) (ITransactionProperty *This);
	void (STDMETHODCALLTYPE *Reserved15) (ITransactionProperty *This);
	void (STDMETHODCALLTYPE *Reserved16) (ITransactionProperty *This);
	void (STDMETHODCALLTYPE *Reserved17) (ITransactionProperty *This);
	END_INTERFACE
}  ITransactionPropertyVtbl;
interface ITransactionProperty
{
	CONST_VTBL struct ITransactionPropertyVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define ITransactionProperty_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define ITransactionProperty_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define ITransactionProperty_Release(This)( (This)->lpVtbl -> Release(This) )
#define ITransactionProperty_Reserved1(This)( (This)->lpVtbl -> Reserved1(This) )
#define ITransactionProperty_Reserved2(This)( (This)->lpVtbl -> Reserved2(This) )
#define ITransactionProperty_Reserved3(This)( (This)->lpVtbl -> Reserved3(This) )
#define ITransactionProperty_Reserved4(This)( (This)->lpVtbl -> Reserved4(This) )
#define ITransactionProperty_Reserved5(This)( (This)->lpVtbl -> Reserved5(This) )
#define ITransactionProperty_Reserved6(This)( (This)->lpVtbl -> Reserved6(This) )
#define ITransactionProperty_Reserved7(This)( (This)->lpVtbl -> Reserved7(This) )
#define ITransactionProperty_Reserved8(This)( (This)->lpVtbl -> Reserved8(This) )
#define ITransactionProperty_Reserved9(This)( (This)->lpVtbl -> Reserved9(This) )
#define ITransactionProperty_GetTransactionResourcePool(This,ppTxPool)( (This)->lpVtbl -> GetTransactionResourcePool(This,ppTxPool) )
#define ITransactionProperty_Reserved10(This)( (This)->lpVtbl -> Reserved10(This) )
#define ITransactionProperty_Reserved11(This)( (This)->lpVtbl -> Reserved11(This) )
#define ITransactionProperty_Reserved12(This)( (This)->lpVtbl -> Reserved12(This) )
#define ITransactionProperty_Reserved13(This)( (This)->lpVtbl -> Reserved13(This) )
#define ITransactionProperty_Reserved14(This)( (This)->lpVtbl -> Reserved14(This) )
#define ITransactionProperty_Reserved15(This)( (This)->lpVtbl -> Reserved15(This) )
#define ITransactionProperty_Reserved16(This)( (This)->lpVtbl -> Reserved16(This) )
#define ITransactionProperty_Reserved17(This)( (This)->lpVtbl -> Reserved17(This) )
#endif
#endif
#ifndef __IMTSActivity_INTERFACE_DEFINED__
#define __IMTSActivity_INTERFACE_DEFINED__
extern const IID IID_IMTSActivity;
typedef struct IMTSActivityVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE *QueryInterface) (IMTSActivity *This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE *AddRef) (IMTSActivity *This);
	ULONG(STDMETHODCALLTYPE *Release) (IMTSActivity *This);
	HRESULT(STDMETHODCALLTYPE *SynchronousCall) (IMTSActivity *This, IMTSCall *pCall);
	HRESULT(STDMETHODCALLTYPE *AsyncCall) (IMTSActivity *This, IMTSCall *pCall);
	void (STDMETHODCALLTYPE *Reserved1) (IMTSActivity *This);
	HRESULT(STDMETHODCALLTYPE *BindToCurrentThread) (IMTSActivity *This);
	HRESULT(STDMETHODCALLTYPE *UnbindFromThread) (IMTSActivity *This);
	END_INTERFACE
}  IMTSActivityVtbl;
interface IMTSActivity
{
	CONST_VTBL struct IMTSActivityVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IMTSActivity_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IMTSActivity_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define IMTSActivity_Release(This)( (This)->lpVtbl -> Release(This) )
#define IMTSActivity_SynchronousCall(This,pCall)( (This)->lpVtbl -> SynchronousCall(This,pCall) )
#define IMTSActivity_AsyncCall(This,pCall)( (This)->lpVtbl -> AsyncCall(This,pCall) )
#define IMTSActivity_Reserved1(This)( (This)->lpVtbl -> Reserved1(This) )
#define IMTSActivity_BindToCurrentThread(This)( (This)->lpVtbl -> BindToCurrentThread(This) )
#define IMTSActivity_UnbindFromThread(This)( (This)->lpVtbl -> UnbindFromThread(This) )
#endif
#endif
#ifndef __COMSVCSLib_LIBRARY_DEFINED__
#define __COMSVCSLib_LIBRARY_DEFINED__
typedef enum __MIDL___MIDL_itf_autosvcs_0000_0119_0001
{
	mtsErrCtxAborted = 0x8004e002,
	mtsErrCtxAborting = 0x8004e003,
	mtsErrCtxNoContext = 0x8004e004,
	mtsErrCtxNotRegistered = 0x8004e005,
	mtsErrCtxSynchTimeout = 0x8004e006,
	mtsErrCtxOldReference = 0x8004e007,
	mtsErrCtxRoleNotFound = 0x8004e00c,
	mtsErrCtxNoSecurity = 0x8004e00d,
	mtsErrCtxWrongThread = 0x8004e00e,
	mtsErrCtxTMNotAvailable = 0x8004e00f,
	comQCErrApplicationNotQueued = 0x80110600,
	comQCErrNoQueueableInterfaces = 0x80110601,
	comQCErrQueuingServiceNotAvailable = 0x80110602,
	comQCErrQueueTransactMismatch = 0x80110603,
	comqcErrRecorderMarshalled = 0x80110604,
	comqcErrOutParam = 0x80110605,
	comqcErrRecorderNotTrusted = 0x80110606,
	comqcErrPSLoad = 0x80110607,
	comqcErrMarshaledObjSameTxn = 0x80110608,
	comqcErrInvalidMessage = 0x80110650,
	comqcErrMsmqSidUnavailable = 0x80110651,
	comqcErrWrongMsgExtension = 0x80110652,
	comqcErrMsmqServiceUnavailable = 0x80110653,
	comqcErrMsgNotAuthenticated = 0x80110654,
	comqcErrMsmqConnectorUsed = 0x80110655,
	comqcErrBadMarshaledObject = 0x80110656
} Error_Constants;
typedef enum __MIDL___MIDL_itf_autosvcs_0000_0119_0002
{
	LockSetGet = 0,
	LockMethod = (LockSetGet + 1)
} LockModes;
typedef enum __MIDL___MIDL_itf_autosvcs_0000_0119_0003
{
	Standard = 0,
	Process = (Standard + 1)
} ReleaseModes;
#ifndef _tagCrmFlags_
#define _tagCrmFlags_
typedef enum tagCRMFLAGS
{
	CRMFLAG_FORGETTARGET = 0x1,
	CRMFLAG_WRITTENDURINGPREPARE = 0x2,
	CRMFLAG_WRITTENDURINGCOMMIT = 0x4,
	CRMFLAG_WRITTENDURINGABORT = 0x8,
	CRMFLAG_WRITTENDURINGRECOVERY = 0x10,
	CRMFLAG_WRITTENDURINGREPLAY = 0x20,
	CRMFLAG_REPLAYINPROGRESS = 0x40
} CRMFLAGS;
#endif /* _tagCrmFlags_ */
#ifndef _tagCrmRegFlags_
#define _tagCrmRegFlags_
typedef enum tagCRMREGFLAGS
{
	CRMREGFLAG_PREPAREPHASE = 0x1,
	CRMREGFLAG_COMMITPHASE = 0x2,
	CRMREGFLAG_ABORTPHASE = 0x4,
	CRMREGFLAG_ALLPHASES = 0x7,
	CRMREGFLAG_FAILIFINDOUBTSREMAIN = 0x10
} CRMREGFLAGS;
#endif /* _tagCrmRegFlags_ */
extern const IID LIBID_COMSVCSLib;
extern const CLSID CLSID_SecurityIdentity;
extern const CLSID CLSID_SecurityCallers;
extern const CLSID CLSID_SecurityCallContext;
extern const CLSID CLSID_GetSecurityCallContextAppObject;
extern const CLSID CLSID_Dummy30040732;
extern const CLSID CLSID_TransactionContext;
extern const CLSID CLSID_TransactionContextEx;
extern const CLSID CLSID_ByotServerEx;
extern const CLSID CLSID_CServiceConfig;
extern const CLSID CLSID_ServicePool;
extern const CLSID CLSID_ServicePoolConfig;
extern const CLSID CLSID_SharedProperty;
extern const CLSID CLSID_SharedPropertyGroup;
extern const CLSID CLSID_SharedPropertyGroupManager;
extern const CLSID CLSID_COMEvents;
extern const CLSID CLSID_CoMTSLocator;
extern const CLSID CLSID_MtsGrp;
extern const CLSID CLSID_ComServiceEvents;
extern const CLSID CLSID_ComSystemAppEventData;
extern const CLSID CLSID_CRMClerk;
extern const CLSID CLSID_CRMRecoveryClerk;
extern const CLSID CLSID_LBEvents;
extern const CLSID CLSID_MessageMover;
extern const CLSID CLSID_DispenserManager;
extern const CLSID CLSID_PoolMgr;
extern const CLSID CLSID_EventServer;
extern const CLSID CLSID_TrackerServer;
extern const CLSID CLSID_AppDomainHelper;
extern const CLSID CLSID_ClrAssemblyLocator;
#endif
unsigned long __RPC_USER BSTR_UserSize(unsigned long *, unsigned long, BSTR *);
unsigned char *__RPC_USER BSTR_UserMarshal(unsigned long *, unsigned char *, BSTR *);
unsigned char *__RPC_USER BSTR_UserUnmarshal(unsigned long *, unsigned char *, BSTR *);
void __RPC_USER BSTR_UserFree(unsigned long *, BSTR *);
unsigned long __RPC_USER LPSAFEARRAY_UserSize(unsigned long *, unsigned long, LPSAFEARRAY *);
unsigned char *__RPC_USER LPSAFEARRAY_UserMarshal(unsigned long *, unsigned char *, LPSAFEARRAY *);
unsigned char *__RPC_USER LPSAFEARRAY_UserUnmarshal(unsigned long *, unsigned char *, LPSAFEARRAY *);
void __RPC_USER LPSAFEARRAY_UserFree(unsigned long *, LPSAFEARRAY *);
unsigned long __RPC_USER VARIANT_UserSize(unsigned long *, unsigned long, VARIANT *);
unsigned char *__RPC_USER VARIANT_UserMarshal(unsigned long *, unsigned char *, VARIANT *);
unsigned char *__RPC_USER VARIANT_UserUnmarshal(unsigned long *, unsigned char *, VARIANT *);
void __RPC_USER VARIANT_UserFree(unsigned long *, VARIANT *);
unsigned long __RPC_USER BSTR_UserSize64(unsigned long *, unsigned long, BSTR *);
unsigned char *__RPC_USER BSTR_UserMarshal64(unsigned long *, unsigned char *, BSTR *);
unsigned char *__RPC_USER BSTR_UserUnmarshal64(unsigned long *, unsigned char *, BSTR *);
void __RPC_USER BSTR_UserFree64(unsigned long *, BSTR *);
unsigned long __RPC_USER LPSAFEARRAY_UserSize64(unsigned long *, unsigned long, LPSAFEARRAY *);
unsigned char *__RPC_USER LPSAFEARRAY_UserMarshal64(unsigned long *, unsigned char *, LPSAFEARRAY *);
unsigned char *__RPC_USER LPSAFEARRAY_UserUnmarshal64(unsigned long *, unsigned char *, LPSAFEARRAY *);
void __RPC_USER LPSAFEARRAY_UserFree64(unsigned long *, LPSAFEARRAY *);
unsigned long __RPC_USER VARIANT_UserSize64(unsigned long *, unsigned long, VARIANT *);
unsigned char *__RPC_USER VARIANT_UserMarshal64(unsigned long *, unsigned char *, VARIANT *);
unsigned char *__RPC_USER VARIANT_UserUnmarshal64(unsigned long *, unsigned char *, VARIANT *);
void __RPC_USER VARIANT_UserFree64(unsigned long *, VARIANT *);
HRESULT STDMETHODCALLTYPE IGetAppTrackerData_GetApplicationProcessDetails_Proxy(IGetAppTrackerData *This, REFGUID ApplicationInstanceId, DWORD ProcessId, DWORD Flags, ApplicationProcessSummary *Summary, ApplicationProcessStatistics *Statistics, ApplicationProcessRecycleInfo *RecycleInfo, BOOL *AnyComponentsHangMonitored);
HRESULT STDMETHODCALLTYPE IGetAppTrackerData_GetApplicationProcessDetails_Stub(IGetAppTrackerData *This, REFGUID ApplicationInstanceId, DWORD ProcessId, DWORD Flags, ApplicationProcessSummary *Summary, ApplicationProcessStatistics *Statistics, ApplicationProcessRecycleInfo *RecycleInfo, BOOL *AnyComponentsHangMonitored);
HRESULT STDMETHODCALLTYPE IGetAppTrackerData_GetComponentDetails_Proxy(IGetAppTrackerData *This, REFGUID ApplicationInstanceId, DWORD ProcessId, REFCLSID Clsid, DWORD Flags, ComponentSummary *Summary, ComponentStatistics *Statistics, ComponentHangMonitorInfo *HangMonitorInfo);
HRESULT STDMETHODCALLTYPE IGetAppTrackerData_GetComponentDetails_Stub(IGetAppTrackerData *This, REFGUID ApplicationInstanceId, DWORD ProcessId, REFCLSID Clsid, DWORD Flags, ComponentSummary *Summary, ComponentStatistics *Statistics, ComponentHangMonitorInfo *HangMonitorInfo);
#endif

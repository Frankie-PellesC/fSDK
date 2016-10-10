/*+@@file@@----------------------------------------------------------------*//*!
 \file		fullenumsyncdeviceservice.h
 \par Description 
            Extension and update of headers for PellesC compiler suite.
 \par Project: 
            PellesC Headers extension
 \date		Created  on Sun Jul 10 19:10:52 2016
 \date		Modified on Sun Jul 10 19:10:52 2016
 \author	frankie
\*//*-@@file@@----------------------------------------------------------------*/

#ifndef _FULLENUMSYNCSERVICE_H_
#define _FULLENUMSYNCSERVICE_H_
#if __POCC__ >= 500
#pragma once
#endif
#include <DeviceServices.h>
#include <SyncDeviceService.h>
DEFINE_DEVSVCGUID(SERVICE_FullEnumSync, 0x28d3aac9, 0xc075, 0x44be, 0x88, 0x81, 0x65, 0xf3, 0x8d, 0x30, 0x59, 0x09);
#define NAME_FullEnumSyncSvc                L"FullEnumSync"
#define TYPE_FullEnumSyncSvc                DEVSVCTYPE_ABSTRACT
DEFINE_DEVSVCGUID(NAMESPACE_FullEnumSyncSvc, 0x63b10e6c, 0x4f3a, 0x456d, 0x95, 0xcb, 0x98, 0x94, 0xed, 0xec, 0x9f, 0xa5);
DEFINE_DEVSVCPROPKEY(PKEY_FullEnumSyncSvc_VersionProps, 0x63b10e6c, 0x4f3a, 0x456d, 0x95, 0xcb, 0x98, 0x94, 0xed, 0xec, 0x9f, 0xa5, 3);
#define NAME_FullEnumSyncSvc_VersionProps       L"FullEnumVersionProps"
DEFINE_DEVSVCPROPKEY(PKEY_FullEnumSyncSvc_ReplicaID, 0x63b10e6c, 0x4f3a, 0x456d, 0x95, 0xcb, 0x98, 0x94, 0xed, 0xec, 0x9f, 0xa5, 4);
#define NAME_FullEnumSyncSvc_ReplicaID          L"FullEnumReplicaID"
DEFINE_DEVSVCPROPKEY(PKEY_FullEnumSyncSvc_KnowledgeObjectID, 0x63b10e6c, 0x4f3a, 0x456d, 0x95, 0xcb, 0x98, 0x94, 0xed, 0xec, 0x9f, 0xa5, 7);
#define NAME_FullEnumSyncSvc_KnowledgeObjectID  L"FullEnumKnowledgeObjectID"
DEFINE_DEVSVCPROPKEY(PKEY_FullEnumSyncSvc_LastSyncProxyID, 0x63b10e6c, 0x4f3a, 0x456d, 0x95, 0xcb, 0x98, 0x94, 0xed, 0xec, 0x9f, 0xa5, 8);
#define NAME_FullEnumSyncSvc_LastSyncProxyID    L"FullEnumLastSyncProxyID"
DEFINE_DEVSVCPROPKEY(PKEY_FullEnumSyncSvc_ProviderVersion, 0x63b10e6c, 0x4f3a, 0x456d, 0x95, 0xcb, 0x98, 0x94, 0xed, 0xec, 0x9f, 0xa5, 9);
#define NAME_FullEnumSyncSvc_ProviderVersion    L"FullEnumProviderVersion"
#define PKEY_FullEnumSyncSvc_SyncFormat         PKEY_SyncSvc_SyncFormat
#define NAME_FullEnumSyncSvc_SyncFormat         NAME_SyncSvc_SyncFormat
#define PKEY_FullEnumSyncSvc_LocalOnlyDelete    PKEY_SyncSvc_LocalOnlyDelete
#define NAME_FullEnumSyncSvc_LocalOnlyDelete    NAME_SyncSvc_LocalOnlyDelete
#define PKEY_FullEnumSyncSvc_FilterType         PKEY_SyncSvc_FilterType
#define NAME_FullEnumSyncSvc_FilterType         NAME_SyncSvc_FilterType
DEFINE_DEVSVCGUID(FORMAT_FullEnumSyncKnowledge, 0x221bce32, 0x221b, 0x4f45, 0xb4, 0x8b, 0x80, 0xde, 0x9a, 0x93, 0xa4, 0x4a);
#define NAME_FullEnumSyncKnowledge          L"FullEnumSyncKnowledge"
#define METHOD_FullEnumSyncSvc_BeginSync    METHOD_SyncSvc_BeginSync
#define NAME_FullEnumSyncSvc_BeginSync      NAME_SyncSvc_BeginSync
#define METHOD_FullEnumSyncSvc_EndSync      METHOD_SyncSvc_EndSync
#define NAME_FullEnumSyncSvc_EndSync        NAME_SyncSvc_EndSync
#endif

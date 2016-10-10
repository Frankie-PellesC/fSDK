/*+@@file@@----------------------------------------------------------------*//*!
 \file		anchorsyncdeviceservice.h
 \par Description 
            Extension and update of headers for PellesC compiler suite.
 \par Project: 
            PellesC Headers extension
 \date		Created  on Sat Jul  2 17:20:10 2016
 \date		Modified on Sat Jul  2 17:20:10 2016
 \author	frankie
\*//*-@@file@@----------------------------------------------------------------*/

#ifndef _ANCHORSYNCSERVICE_H_
#define _ANCHORSYNCSERVICE_H_
#if __POCC__ >= 500
#pragma once
#endif
#include <DeviceServices.h>
#include <SyncDeviceService.h>
DEFINE_DEVSVCGUID(SERVICE_AnchorSync, 0x056d8b9e, 0xad7a, 0x44fc, 0x94, 0x6f, 0x1d, 0x63, 0xa2, 0x5c, 0xda, 0x9a);
#define NAME_AnchorSyncSvc                  L"AnchorSync"
#define TYPE_AnchorSyncSvc                  DEVSVCTYPE_ABSTRACT
DEFINE_DEVSVCGUID(NAMESPACE_AnchorSyncSvc, 0xe65b8fb7, 0x8fc7, 0x4278, 0xb9, 0xa3, 0xba, 0x14, 0xc2, 0xdb, 0x40, 0xfa);
DEFINE_DEVSVCPROPKEY(PKEY_AnchorSyncSvc_VersionProps, 0xe65b8fb7, 0x8fc7, 0x4278, 0xb9, 0xa3, 0xba, 0x14, 0xc2, 0xdb, 0x40, 0xfa, 2);
#define NAME_AnchorSyncSvc_VersionProps         L"AnchorVersionProps"
DEFINE_DEVSVCPROPKEY(PKEY_AnchorSyncSvc_ReplicaID, 0xe65b8fb7, 0x8fc7, 0x4278, 0xb9, 0xa3, 0xba, 0x14, 0xc2, 0xdb, 0x40, 0xfa, 3);
#define NAME_AnchorSyncSvc_ReplicaID            L"AnchorReplicaID"
DEFINE_DEVSVCPROPKEY(PKEY_AnchorSyncSvc_KnowledgeObjectID, 0xe65b8fb7, 0x8fc7, 0x4278, 0xb9, 0xa3, 0xba, 0x14, 0xc2, 0xdb, 0x40, 0xfa, 4);
#define NAME_AnchorSyncSvc_KnowledgeObjectID    L"AnchorKnowledgeObjectID"
DEFINE_DEVSVCPROPKEY(PKEY_AnchorSyncSvc_LastSyncProxyID, 0xe65b8fb7, 0x8fc7, 0x4278, 0xb9, 0xa3, 0xba, 0x14, 0xc2, 0xdb, 0x40, 0xfa, 5);
#define NAME_AnchorSyncSvc_LastSyncProxyID      L"AnchorLastSyncProxyID"
DEFINE_DEVSVCPROPKEY(PKEY_AnchorSyncSvc_CurrentAnchor, 0xe65b8fb7, 0x8fc7, 0x4278, 0xb9, 0xa3, 0xba, 0x14, 0xc2, 0xdb, 0x40, 0xfa, 6);
#define NAME_AnchorSyncSvc_CurrentAnchor        L"AnchorCurrentAnchor"
DEFINE_DEVSVCPROPKEY(PKEY_AnchorSyncSvc_ProviderVersion, 0xe65b8fb7, 0x8fc7, 0x4278, 0xb9, 0xa3, 0xba, 0x14, 0xc2, 0xdb, 0x40, 0xfa, 7);
#define NAME_AnchorSyncSvc_ProviderVersion      L"AnchorProviderVersion"
#define PKEY_AnchorSyncSvc_SyncFormat           PKEY_SyncSvc_SyncFormat
#define NAME_AnchorSyncSvc_SyncFormat           NAME_SyncSvc_SyncFormat
#define PKEY_AnchorSyncSvc_LocalOnlyDelete      PKEY_SyncSvc_LocalOnlyDelete
#define NAME_AnchorSyncSvc_LocalOnlyDelete      NAME_SyncSvc_LocalOnlyDelete
#define PKEY_AnchorSyncSvc_FilterType           PKEY_SyncSvc_FilterType
#define NAME_AnchorSyncSvc_FilterType           NAME_SyncSvc_FilterType
DEFINE_DEVSVCGUID(FORMAT_AnchorSyncKnowledge, 0x37c550bc, 0xf231, 0x4727, 0xbb, 0xbc, 0x4c, 0xb3, 0x3a, 0x3f, 0x3e, 0xcd);
#define NAME_AnchorSyncKnowledge            L"AnchorSyncKnowledge"
DEFINE_DEVSVCGUID(FORMAT_AnchorSyncSvc_AnchorResults, 0xf35527c1, 0xce4a, 0x487a, 0x9d, 0x29, 0x93, 0x83, 0x35, 0x69, 0x32, 0x1e);
#define NAME_AnchorResults                  L"AnchorResults"
DEFINE_DEVSVCGUID(NAMESPACE_AnchorResults, 0x516b5dce, 0x8d45, 0x430f, 0x80, 0x5c, 0x25, 0xe5, 0x10, 0x6d, 0x8b, 0x1f);
DEFINE_DEVSVCPROPKEY(PKEY_AnchorResults_AnchorState, 0x516b5dce, 0x8d45, 0x430f, 0x80, 0x5c, 0x25, 0xe5, 0x10, 0x6d, 0x8b, 0x1f, 2);
#define NAME_AnchorResults_AnchorState      L"AnchorState"
#define ENUM_AnchorResults_AnchorStateNormal    0x00000000
#define ENUM_AnchorResults_AnchorStateInvalid   0x00000001
#define ENUM_AnchorResults_AnchorStateOld       0x00000002
DEFINE_DEVSVCPROPKEY(PKEY_AnchorResults_Anchor, 0x516b5dce, 0x8d45, 0x430f, 0x80, 0x5c, 0x25, 0xe5, 0x10, 0x6d, 0x8b, 0x1f, 3);
#define NAME_AnchorResults_Anchor           L"Anchor"
DEFINE_DEVSVCPROPKEY(PKEY_AnchorResults_ResultObjectID, 0x516b5dce, 0x8d45, 0x430f, 0x80, 0x5c, 0x25, 0xe5, 0x10, 0x6d, 0x8b, 0x1f, 4);
#define NAME_AnchorResults_ResultObjectID   L"ResultObjectID"
DEFINE_DEVSVCGUID(METHOD_AnchorSyncSvc_GetChangesSinceAnchor, 0x37c550bc, 0xf231, 0x4727, 0xbb, 0xbc, 0x4c, 0xb3, 0x3a, 0x3f, 0x3e, 0xcd);
#define NAME_AnchorSyncSvc_GetChangesSinceAnchor    L"GetChangesSinceAnchor"
#define METHOD_AnchorSyncSvc_BeginSync      METHOD_SyncSvc_BeginSync
#define NAME_AnchorSyncSvc_BeginSync        NAME_SyncSvc_BeginSync
#define METHOD_AnchorSyncSvc_EndSync        METHOD_SyncSvc_EndSync
#define NAME_AnchorSyncSvc_EndSync          NAME_SyncSvc_EndSync
#define ENUM_AnchorResults_ItemStateInvalid 0x00000000
#define ENUM_AnchorResults_ItemStateDeleted 0x00000001
#define ENUM_AnchorResults_ItemStateCreated 0x00000002
#define ENUM_AnchorResults_ItemStateUpdated 0x00000003
#define ENUM_AnchorResults_ItemStateChanged 0x00000004
#endif

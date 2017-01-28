/*+@@file@@----------------------------------------------------------------*//*!
 \file		vdshwprv.h
 \par Description 
            Extension and update of headers for PellesC compiler suite.
 \par Project: 
            PellesC Headers extension
 \date		Created  on Sat Sep 17 16:27:50 2016
 \date		Modified on Sat Sep 17 16:27:50 2016
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
#ifndef COM_NO_WINDOWS_H
#include <windows.h>
#include <ole2.h>
#endif
#ifndef __vdshwprv_h__
#define __vdshwprv_h__
#if __POCC__ >= 500
#pragma once
#endif
#ifndef __IEnumVdsObject_FWD_DEFINED__
#define __IEnumVdsObject_FWD_DEFINED__
typedef interface IEnumVdsObject IEnumVdsObject;
#endif
#ifndef __IVdsAsync_FWD_DEFINED__
#define __IVdsAsync_FWD_DEFINED__
typedef interface IVdsAsync IVdsAsync;
#endif
#ifndef __IVdsAdviseSink_FWD_DEFINED__
#define __IVdsAdviseSink_FWD_DEFINED__
typedef interface IVdsAdviseSink IVdsAdviseSink;
#endif
#ifndef __IVdsProvider_FWD_DEFINED__
#define __IVdsProvider_FWD_DEFINED__
typedef interface IVdsProvider IVdsProvider;
#endif
#ifndef __IVdsProviderSupport_FWD_DEFINED__
#define __IVdsProviderSupport_FWD_DEFINED__
typedef interface IVdsProviderSupport IVdsProviderSupport;
#endif
#ifndef __IVdsProviderPrivate_FWD_DEFINED__
#define __IVdsProviderPrivate_FWD_DEFINED__
typedef interface IVdsProviderPrivate IVdsProviderPrivate;
#endif
#ifndef __IVdsHwProvider_FWD_DEFINED__
#define __IVdsHwProvider_FWD_DEFINED__
typedef interface IVdsHwProvider IVdsHwProvider;
#endif
#ifndef __IVdsHwProviderType_FWD_DEFINED__
#define __IVdsHwProviderType_FWD_DEFINED__
typedef interface IVdsHwProviderType IVdsHwProviderType;
#endif
#ifndef __IVdsHwProviderType2_FWD_DEFINED__
#define __IVdsHwProviderType2_FWD_DEFINED__
typedef interface IVdsHwProviderType2 IVdsHwProviderType2;
#endif
#ifndef __IVdsHwProviderStoragePools_FWD_DEFINED__
#define __IVdsHwProviderStoragePools_FWD_DEFINED__
typedef interface IVdsHwProviderStoragePools IVdsHwProviderStoragePools;
#endif
#ifndef __IVdsSubSystem_FWD_DEFINED__
#define __IVdsSubSystem_FWD_DEFINED__
typedef interface IVdsSubSystem IVdsSubSystem;
#endif
#ifndef __IVdsSubSystem2_FWD_DEFINED__
#define __IVdsSubSystem2_FWD_DEFINED__
typedef interface IVdsSubSystem2 IVdsSubSystem2;
#endif
#ifndef __IVdsSubSystemNaming_FWD_DEFINED__
#define __IVdsSubSystemNaming_FWD_DEFINED__
typedef interface IVdsSubSystemNaming IVdsSubSystemNaming;
#endif
#ifndef __IVdsSubSystemIscsi_FWD_DEFINED__
#define __IVdsSubSystemIscsi_FWD_DEFINED__
typedef interface IVdsSubSystemIscsi IVdsSubSystemIscsi;
#endif
#ifndef __IVdsSubSystemInterconnect_FWD_DEFINED__
#define __IVdsSubSystemInterconnect_FWD_DEFINED__
typedef interface IVdsSubSystemInterconnect IVdsSubSystemInterconnect;
#endif
#ifndef __IVdsControllerPort_FWD_DEFINED__
#define __IVdsControllerPort_FWD_DEFINED__
typedef interface IVdsControllerPort IVdsControllerPort;
#endif
#ifndef __IVdsController_FWD_DEFINED__
#define __IVdsController_FWD_DEFINED__
typedef interface IVdsController IVdsController;
#endif
#ifndef __IVdsControllerControllerPort_FWD_DEFINED__
#define __IVdsControllerControllerPort_FWD_DEFINED__
typedef interface IVdsControllerControllerPort IVdsControllerControllerPort;
#endif
#ifndef __IVdsDrive_FWD_DEFINED__
#define __IVdsDrive_FWD_DEFINED__
typedef interface IVdsDrive IVdsDrive;
#endif
#ifndef __IVdsDrive2_FWD_DEFINED__
#define __IVdsDrive2_FWD_DEFINED__
typedef interface IVdsDrive2 IVdsDrive2;
#endif
#ifndef __IVdsLun_FWD_DEFINED__
#define __IVdsLun_FWD_DEFINED__
typedef interface IVdsLun IVdsLun;
#endif
#ifndef __IVdsLun2_FWD_DEFINED__
#define __IVdsLun2_FWD_DEFINED__
typedef interface IVdsLun2 IVdsLun2;
#endif
#ifndef __IVdsLunNaming_FWD_DEFINED__
#define __IVdsLunNaming_FWD_DEFINED__
typedef interface IVdsLunNaming IVdsLunNaming;
#endif
#ifndef __IVdsLunNumber_FWD_DEFINED__
#define __IVdsLunNumber_FWD_DEFINED__
typedef interface IVdsLunNumber IVdsLunNumber;
#endif
#ifndef __IVdsLunControllerPorts_FWD_DEFINED__
#define __IVdsLunControllerPorts_FWD_DEFINED__
typedef interface IVdsLunControllerPorts IVdsLunControllerPorts;
#endif
#ifndef __IVdsLunMpio_FWD_DEFINED__
#define __IVdsLunMpio_FWD_DEFINED__
typedef interface IVdsLunMpio IVdsLunMpio;
#endif
#ifndef __IVdsLunIscsi_FWD_DEFINED__
#define __IVdsLunIscsi_FWD_DEFINED__
typedef interface IVdsLunIscsi IVdsLunIscsi;
#endif
#ifndef __IVdsLunPlex_FWD_DEFINED__
#define __IVdsLunPlex_FWD_DEFINED__
typedef interface IVdsLunPlex IVdsLunPlex;
#endif
#ifndef __IVdsIscsiPortal_FWD_DEFINED__
#define __IVdsIscsiPortal_FWD_DEFINED__
typedef interface IVdsIscsiPortal IVdsIscsiPortal;
#endif
#ifndef __IVdsIscsiTarget_FWD_DEFINED__
#define __IVdsIscsiTarget_FWD_DEFINED__
typedef interface IVdsIscsiTarget IVdsIscsiTarget;
#endif
#ifndef __IVdsIscsiPortalGroup_FWD_DEFINED__
#define __IVdsIscsiPortalGroup_FWD_DEFINED__
typedef interface IVdsIscsiPortalGroup IVdsIscsiPortalGroup;
#endif
#ifndef __IVdsStoragePool_FWD_DEFINED__
#define __IVdsStoragePool_FWD_DEFINED__
typedef interface IVdsStoragePool IVdsStoragePool;
#endif
#ifndef __IVdsMaintenance_FWD_DEFINED__
#define __IVdsMaintenance_FWD_DEFINED__
typedef interface IVdsMaintenance IVdsMaintenance;
#endif
#ifndef __IVdsHwProviderPrivate_FWD_DEFINED__
#define __IVdsHwProviderPrivate_FWD_DEFINED__
typedef interface IVdsHwProviderPrivate IVdsHwProviderPrivate;
#endif
#ifndef __IVdsHwProviderPrivateMpio_FWD_DEFINED__
#define __IVdsHwProviderPrivateMpio_FWD_DEFINED__
typedef interface IVdsHwProviderPrivateMpio IVdsHwProviderPrivateMpio;
#endif
#ifndef __IVdsAdmin_FWD_DEFINED__
#define __IVdsAdmin_FWD_DEFINED__
typedef interface IVdsAdmin IVdsAdmin;
#endif
#include <oaidl.h>
#include <vdserr.h>
#include <vdslun.h>
typedef GUID VDS_OBJECT_ID;
typedef enum _VDS_OBJECT_TYPE
{
	VDS_OT_UNKNOWN = 0,
	VDS_OT_PROVIDER = 1,
	VDS_OT_PACK = 10,
	VDS_OT_VOLUME = 11,
	VDS_OT_VOLUME_PLEX = 12,
	VDS_OT_DISK = 13,
	VDS_OT_SUB_SYSTEM = 30,
	VDS_OT_CONTROLLER = 31,
	VDS_OT_DRIVE = 32,
	VDS_OT_LUN = 33,
	VDS_OT_LUN_PLEX = 34,
	VDS_OT_PORT = 35,
	VDS_OT_PORTAL = 36,
	VDS_OT_TARGET = 37,
	VDS_OT_PORTAL_GROUP = 38,
	VDS_OT_STORAGE_POOL = 39,
	VDS_OT_HBAPORT = 90,
	VDS_OT_INIT_ADAPTER = 91,
	VDS_OT_INIT_PORTAL = 92,
	VDS_OT_ASYNC = 100,
	VDS_OT_ENUM = 101,
	VDS_OT_VDISK = 200,
	VDS_OT_OPEN_VDISK = 201
} VDS_OBJECT_TYPE;
typedef enum _VDS_PROVIDER_TYPE
{
	VDS_PT_UNKNOWN = 0,
	VDS_PT_SOFTWARE = 1,
	VDS_PT_HARDWARE = 2,
	VDS_PT_VIRTUALDISK = 3,
	VDS_PT_MAX = 4
} VDS_PROVIDER_TYPE;
typedef enum _VDS_PROVIDER_FLAG
{
	VDS_PF_DYNAMIC = 0x1,
	VDS_PF_INTERNAL_HARDWARE_PROVIDER = 0x2,
	VDS_PF_ONE_DISK_ONLY_PER_PACK = 0x4,
	VDS_PF_ONE_PACK_ONLINE_ONLY = 0x8,
	VDS_PF_VOLUME_SPACE_MUST_BE_CONTIGUOUS = 0x10,
	VDS_PF_SUPPORT_DYNAMIC = 0x80000000,
	VDS_PF_SUPPORT_FAULT_TOLERANT = 0x40000000,
	VDS_PF_SUPPORT_DYNAMIC_1394 = 0x20000000,
	VDS_PF_SUPPORT_MIRROR = 0x20,
	VDS_PF_SUPPORT_RAID5 = 0x40
} VDS_PROVIDER_FLAG;
typedef enum _VDS_RECOVER_ACTION
{
	VDS_RA_UNKNOWN = 0,
	VDS_RA_REFRESH = 1,
	VDS_RA_RESTART = 2
} VDS_RECOVER_ACTION;
typedef enum _VDS_NOTIFICATION_TARGET_TYPE
{
	VDS_NTT_UNKNOWN = 0,
	VDS_NTT_PACK = VDS_OT_PACK,
	VDS_NTT_VOLUME = VDS_OT_VOLUME,
	VDS_NTT_DISK = VDS_OT_DISK,
	VDS_NTT_PARTITION = 60,
	VDS_NTT_DRIVE_LETTER = 61,
	VDS_NTT_FILE_SYSTEM = 62,
	VDS_NTT_MOUNT_POINT = 63,
	VDS_NTT_SUB_SYSTEM = VDS_OT_SUB_SYSTEM,
	VDS_NTT_CONTROLLER = VDS_OT_CONTROLLER,
	VDS_NTT_DRIVE = VDS_OT_DRIVE,
	VDS_NTT_LUN = VDS_OT_LUN,
	VDS_NTT_PORT = VDS_OT_PORT,
	VDS_NTT_PORTAL = VDS_OT_PORTAL,
	VDS_NTT_TARGET = VDS_OT_TARGET,
	VDS_NTT_PORTAL_GROUP = VDS_OT_PORTAL_GROUP,
	VDS_NTT_SERVICE = 200
} VDS_NOTIFICATION_TARGET_TYPE;
#define	VDS_NF_PACK_ARRIVE	( 1 )
#define	VDS_NF_PACK_DEPART	( 2 )
#define	VDS_NF_PACK_MODIFY	( 3 )
#define	VDS_NF_VOLUME_ARRIVE	( 4 )
#define	VDS_NF_VOLUME_DEPART	( 5 )
#define	VDS_NF_VOLUME_MODIFY	( 6 )
#define	VDS_NF_VOLUME_REBUILDING_PROGRESS	( 7 )
#define	VDS_NF_DISK_ARRIVE	( 8 )
#define	VDS_NF_DISK_DEPART	( 9 )
#define	VDS_NF_DISK_MODIFY	( 10 )
#define	VDS_NF_PARTITION_ARRIVE	( 11 )
#define	VDS_NF_PARTITION_DEPART	( 12 )
#define	VDS_NF_PARTITION_MODIFY	( 13 )
#define	VDS_NF_SUB_SYSTEM_ARRIVE	( 101 )
#define	VDS_NF_SUB_SYSTEM_DEPART	( 102 )
#define	VDS_NF_CONTROLLER_ARRIVE	( 103 )
#define	VDS_NF_CONTROLLER_DEPART	( 104 )
#define	VDS_NF_DRIVE_ARRIVE	( 105 )
#define	VDS_NF_DRIVE_DEPART	( 106 )
#define	VDS_NF_DRIVE_MODIFY	( 107 )
#define	VDS_NF_LUN_ARRIVE	( 108 )
#define	VDS_NF_LUN_DEPART	( 109 )
#define	VDS_NF_LUN_MODIFY	( 110 )
#define	VDS_NF_PORT_ARRIVE	( 121 )
#define	VDS_NF_PORT_DEPART	( 122 )
#define	VDS_NF_PORTAL_ARRIVE	( 123 )
#define	VDS_NF_PORTAL_DEPART	( 124 )
#define	VDS_NF_PORTAL_MODIFY	( 125 )
#define	VDS_NF_TARGET_ARRIVE	( 126 )
#define	VDS_NF_TARGET_DEPART	( 127 )
#define	VDS_NF_TARGET_MODIFY	( 128 )
#define	VDS_NF_PORTAL_GROUP_ARRIVE	( 129 )
#define	VDS_NF_PORTAL_GROUP_DEPART	( 130 )
#define	VDS_NF_PORTAL_GROUP_MODIFY	( 131 )
#define	VDS_NF_SUB_SYSTEM_MODIFY	( 151 )
#define	VDS_NF_DRIVE_LETTER_FREE	( 201 )
#define	VDS_NF_DRIVE_LETTER_ASSIGN	( 202 )
#define	VDS_NF_FILE_SYSTEM_MODIFY	( 203 )
#define	VDS_NF_FILE_SYSTEM_FORMAT_PROGRESS	( 204 )
#define	VDS_NF_MOUNT_POINTS_CHANGE	( 205 )
#define	VDS_NF_FILE_SYSTEM_SHRINKING_PROGRESS	( 206 )
#define	VDS_NF_SERVICE_OUT_OF_SYNC	( 301 )
#define	VDS_NF_CONTROLLER_MODIFY	( 350 )
#define	VDS_NF_CONTROLLER_REMOVED	( 351 )
#define	VDS_NF_PORT_MODIFY	( 352 )
#define	VDS_NF_PORT_REMOVED	( 353 )
#define	VDS_NF_DRIVE_REMOVED	( 354 )
typedef struct _VDS_PACK_NOTIFICATION
{
	ULONG ulEvent;
	VDS_OBJECT_ID packId;
} VDS_PACK_NOTIFICATION;
typedef struct _VDS_DISK_NOTIFICATION
{
	ULONG ulEvent;
	VDS_OBJECT_ID diskId;
} VDS_DISK_NOTIFICATION;
typedef struct _VDS_VOLUME_NOTIFICATION
{
	ULONG ulEvent;
	VDS_OBJECT_ID volumeId;
	VDS_OBJECT_ID plexId;
	ULONG ulPercentCompleted;
} VDS_VOLUME_NOTIFICATION;
typedef struct _VDS_PARTITION_NOTIFICATION
{
	ULONG ulEvent;
	VDS_OBJECT_ID diskId;
	ULONGLONG ullOffset;
} VDS_PARTITION_NOTIFICATION;
typedef struct _VDS_SERVICE_NOTIFICATION
{
	ULONG ulEvent;
	VDS_RECOVER_ACTION action;
} VDS_SERVICE_NOTIFICATION;
typedef struct _VDS_DRIVE_LETTER_NOTIFICATION
{
	ULONG ulEvent;
	WCHAR wcLetter;
	VDS_OBJECT_ID volumeId;
} VDS_DRIVE_LETTER_NOTIFICATION;
typedef struct _VDS_FILE_SYSTEM_NOTIFICATION
{
	ULONG ulEvent;
	VDS_OBJECT_ID volumeId;
	DWORD dwPercentCompleted;
} VDS_FILE_SYSTEM_NOTIFICATION;
typedef struct _VDS_MOUNT_POINT_NOTIFICATION
{
	ULONG ulEvent;
	VDS_OBJECT_ID volumeId;
} VDS_MOUNT_POINT_NOTIFICATION;
typedef struct _VDS_SUB_SYSTEM_NOTIFICATION
{
	ULONG ulEvent;
	VDS_OBJECT_ID subSystemId;
} VDS_SUB_SYSTEM_NOTIFICATION;
typedef struct _VDS_CONTROLLER_NOTIFICATION
{
	ULONG ulEvent;
	VDS_OBJECT_ID controllerId;
} VDS_CONTROLLER_NOTIFICATION;
typedef struct _VDS_DRIVE_NOTIFICATION
{
	ULONG ulEvent;
	VDS_OBJECT_ID driveId;
} VDS_DRIVE_NOTIFICATION;
typedef struct _VDS_LUN_NOTIFICATION
{
	ULONG ulEvent;
	VDS_OBJECT_ID LunId;
} VDS_LUN_NOTIFICATION;
typedef struct _VDS_PORT_NOTIFICATION
{
	ULONG ulEvent;
	VDS_OBJECT_ID portId;
} VDS_PORT_NOTIFICATION;
typedef struct _VDS_PORTAL_NOTIFICATION
{
	ULONG ulEvent;
	VDS_OBJECT_ID portalId;
} VDS_PORTAL_NOTIFICATION;
typedef struct _VDS_TARGET_NOTIFICATION
{
	ULONG ulEvent;
	VDS_OBJECT_ID targetId;
} VDS_TARGET_NOTIFICATION;
typedef struct _VDS_PORTAL_GROUP_NOTIFICATION
{
	ULONG ulEvent;
	VDS_OBJECT_ID portalGroupId;
} VDS_PORTAL_GROUP_NOTIFICATION;
typedef struct _VDS_NOTIFICATION
{
	VDS_NOTIFICATION_TARGET_TYPE objectType;
	union
	{
		VDS_PACK_NOTIFICATION Pack;
		VDS_DISK_NOTIFICATION Disk;
		VDS_VOLUME_NOTIFICATION Volume;
		VDS_PARTITION_NOTIFICATION Partition;
		VDS_DRIVE_LETTER_NOTIFICATION Letter;
		VDS_FILE_SYSTEM_NOTIFICATION FileSystem;
		VDS_MOUNT_POINT_NOTIFICATION MountPoint;
		VDS_SUB_SYSTEM_NOTIFICATION SubSystem;
		VDS_CONTROLLER_NOTIFICATION Controller;
		VDS_DRIVE_NOTIFICATION Drive;
		VDS_LUN_NOTIFICATION Lun;
		VDS_PORT_NOTIFICATION Port;
		VDS_PORTAL_NOTIFICATION Portal;
		VDS_TARGET_NOTIFICATION Target;
		VDS_PORTAL_GROUP_NOTIFICATION PortalGroup;
		VDS_SERVICE_NOTIFICATION Service;
	};
} VDS_NOTIFICATION;
typedef enum _VDS_ASYNC_OUTPUT_TYPE
{
	VDS_ASYNCOUT_UNKNOWN = 0,
	VDS_ASYNCOUT_CREATEVOLUME = 1,
	VDS_ASYNCOUT_EXTENDVOLUME = 2,
	VDS_ASYNCOUT_SHRINKVOLUME = 3,
	VDS_ASYNCOUT_ADDVOLUMEPLEX = 4,
	VDS_ASYNCOUT_BREAKVOLUMEPLEX = 5,
	VDS_ASYNCOUT_REMOVEVOLUMEPLEX = 6,
	VDS_ASYNCOUT_REPAIRVOLUMEPLEX = 7,
	VDS_ASYNCOUT_RECOVERPACK = 8,
	VDS_ASYNCOUT_REPLACEDISK = 9,
	VDS_ASYNCOUT_CREATEPARTITION = 10,
	VDS_ASYNCOUT_CLEAN = 11,
	VDS_ASYNCOUT_CREATELUN = 50,
	VDS_ASYNCOUT_ADDLUNPLEX = 52,
	VDS_ASYNCOUT_REMOVELUNPLEX = 53,
	VDS_ASYNCOUT_EXTENDLUN = 54,
	VDS_ASYNCOUT_SHRINKLUN = 55,
	VDS_ASYNCOUT_RECOVERLUN = 56,
	VDS_ASYNCOUT_LOGINTOTARGET = 60,
	VDS_ASYNCOUT_LOGOUTFROMTARGET = 61,
	VDS_ASYNCOUT_CREATETARGET = 62,
	VDS_ASYNCOUT_CREATEPORTALGROUP = 63,
	VDS_ASYNCOUT_DELETETARGET = 64,
	VDS_ASYNCOUT_ADDPORTAL = 65,
	VDS_ASYNCOUT_REMOVEPORTAL = 66,
	VDS_ASYNCOUT_DELETEPORTALGROUP = 67,
	VDS_ASYNCOUT_FORMAT = 101,
	VDS_ASYNCOUT_CREATE_VDISK = 200,
	VDS_ASYNCOUT_ATTACH_VDISK = 201,
	VDS_ASYNCOUT_COMPACT_VDISK = 202,
	VDS_ASYNCOUT_MERGE_VDISK = 203,
	VDS_ASYNCOUT_EXPAND_VDISK = 204
} VDS_ASYNC_OUTPUT_TYPE;
typedef struct _VDS_ASYNC_OUTPUT
{
	VDS_ASYNC_OUTPUT_TYPE type;
	union
	{
		struct _cp
		{
			ULONGLONG ullOffset;
			VDS_OBJECT_ID volumeId;
		} cp;
		struct _cv
		{
			IUnknown *pVolumeUnk;
		} cv;
		struct _bvp
		{
			IUnknown *pVolumeUnk;
		} bvp;
		struct _sv
		{
			ULONGLONG ullReclaimedBytes;
		} sv;
		struct _cl
		{
			IUnknown *pLunUnk;
		} cl;
		struct _ct
		{
			IUnknown *pTargetUnk;
		} ct;
		struct _cpg
		{
			IUnknown *pPortalGroupUnk;
		} cpg;
		struct _cvd
		{
			IUnknown *pVDiskUnk;
		} cvd;
	};
} VDS_ASYNC_OUTPUT;
typedef USHORT VDS_ISCSI_PORTALGROUP_TAG;
typedef enum VDS_IPADDRESS_TYPE
{
	VDS_IPT_TEXT = 0,
	VDS_IPT_IPV4 = 1,
	VDS_IPT_IPV6 = 2,
	VDS_IPT_EMPTY = 3
} VDS_IPADDRESS_TYPE;
typedef enum _VDS_HEALTH
{
	VDS_H_UNKNOWN = 0,
	VDS_H_HEALTHY = 1,
	VDS_H_REBUILDING = 2,
	VDS_H_STALE = 3,
	VDS_H_FAILING = 4,
	VDS_H_FAILING_REDUNDANCY = 5,
	VDS_H_FAILED_REDUNDANCY = 6,
	VDS_H_FAILED_REDUNDANCY_FAILING = 7,
	VDS_H_FAILED = 8,
	VDS_H_REPLACED = 9,
	VDS_H_PENDING_FAILURE = 10,
	VDS_H_DEGRADED = 11
} VDS_HEALTH;
typedef enum _VDS_TRANSITION_STATE
{
	VDS_TS_UNKNOWN = 0,
	VDS_TS_STABLE = 1,
	VDS_TS_EXTENDING = 2,
	VDS_TS_SHRINKING = 3,
	VDS_TS_RECONFIGING = 4,
	VDS_TS_RESTRIPING = 5
} VDS_TRANSITION_STATE;
typedef enum _VDS_FILE_SYSTEM_TYPE
{
	VDS_FST_UNKNOWN = 0,
	VDS_FST_RAW = (VDS_FST_UNKNOWN + 1),
	VDS_FST_FAT = (VDS_FST_RAW + 1),
	VDS_FST_FAT32 = (VDS_FST_FAT + 1),
	VDS_FST_NTFS = (VDS_FST_FAT32 + 1),
	VDS_FST_CDFS = (VDS_FST_NTFS + 1),
	VDS_FST_UDF = (VDS_FST_CDFS + 1),
	VDS_FST_EXFAT = (VDS_FST_UDF + 1)
} VDS_FILE_SYSTEM_TYPE;
typedef enum _VDS_HBAPORT_TYPE
{
	VDS_HPT_UNKNOWN = 1,
	VDS_HPT_OTHER = 2,
	VDS_HPT_NOTPRESENT = 3,
	VDS_HPT_NPORT = 5,
	VDS_HPT_NLPORT = 6,
	VDS_HPT_FLPORT = 7,
	VDS_HPT_FPORT = 8,
	VDS_HPT_EPORT = 9,
	VDS_HPT_GPORT = 10,
	VDS_HPT_LPORT = 20,
	VDS_HPT_PTP = 21
} VDS_HBAPORT_TYPE;
typedef enum _VDS_HBAPORT_STATUS
{
	VDS_HPS_UNKNOWN = 1,
	VDS_HPS_ONLINE = 2,
	VDS_HPS_OFFLINE = 3,
	VDS_HPS_BYPASSED = 4,
	VDS_HPS_DIAGNOSTICS = 5,
	VDS_HPS_LINKDOWN = 6,
	VDS_HPS_ERROR = 7,
	VDS_HPS_LOOPBACK = 8
} VDS_HBAPORT_STATUS;
typedef enum _VDS_HBAPORT_SPEED_FLAG
{
	VDS_HSF_UNKNOWN = 0,
	VDS_HSF_1GBIT = 0x1,
	VDS_HSF_2GBIT = 0x2,
	VDS_HSF_10GBIT = 0x4,
	VDS_HSF_4GBIT = 0x8,
	VDS_HSF_NOT_NEGOTIATED = (1 << 15)
} VDS_HBAPORT_SPEED_FLAG;
typedef enum _VDS_PATH_STATUS
{
	VDS_MPS_UNKNOWN = 0,
	VDS_MPS_ONLINE = 1,
	VDS_MPS_FAILED = 5,
	VDS_MPS_STANDBY = 7
} VDS_PATH_STATUS;
typedef enum _VDS_LOADBALANCE_POLICY_ENUM
{
	VDS_LBP_UNKNOWN = 0,
	VDS_LBP_FAILOVER = 1,
	VDS_LBP_ROUND_ROBIN = 2,
	VDS_LBP_ROUND_ROBIN_WITH_SUBSET = 3,
	VDS_LBP_DYN_LEAST_QUEUE_DEPTH = 4,
	VDS_LBP_WEIGHTED_PATHS = 5,
	VDS_LBP_LEAST_BLOCKS = 6,
	VDS_LBP_VENDOR_SPECIFIC = 7
} VDS_LOADBALANCE_POLICY_ENUM;
typedef enum _VDS_PROVIDER_LBSUPPORT_FLAG
{
	VDS_LBF_FAILOVER = 0x1,
	VDS_LBF_ROUND_ROBIN = 0x2,
	VDS_LBF_ROUND_ROBIN_WITH_SUBSET = 0x4,
	VDS_LBF_DYN_LEAST_QUEUE_DEPTH = 0x8,
	VDS_LBF_WEIGHTED_PATHS = 0x10,
	VDS_LBF_LEAST_BLOCKS = 0x20,
	VDS_LBF_VENDOR_SPECIFIC = 0x40
} VDS_PROVIDER_LBSUPPORT_FLAG;
typedef enum _VDS_VERSION_SUPPORT_FLAG
{
	VDS_VSF_1_0 = 0x1,
	VDS_VSF_1_1 = 0x2,
	VDS_VSF_2_0 = 0x4,
	VDS_VSF_2_1 = 0x8,
	VDS_VSF_3_0 = 0x10
} VDS_VERSION_SUPPORT_FLAG;
typedef enum _VDS_HWPROVIDER_TYPE
{
	VDS_HWT_UNKNOWN = 0,
	VDS_HWT_PCI_RAID = 1,
	VDS_HWT_FIBRE_CHANNEL = 2,
	VDS_HWT_ISCSI = 3,
	VDS_HWT_SAS = 4,
	VDS_HWT_HYBRID = 5
} VDS_HWPROVIDER_TYPE;
typedef enum _VDS_ISCSI_LOGIN_TYPE
{
	VDS_ILT_MANUAL = 0,
	VDS_ILT_PERSISTENT = 1,
	VDS_ILT_BOOT = 2
} VDS_ISCSI_LOGIN_TYPE;
typedef enum _VDS_ISCSI_AUTH_TYPE
{
	VDS_IAT_NONE = 0,
	VDS_IAT_CHAP = 1,
	VDS_IAT_MUTUAL_CHAP = 2
} VDS_ISCSI_AUTH_TYPE;
typedef enum _VDS_ISCSI_IPSEC_FLAG
{
	VDS_IIF_VALID = 0x1,
	VDS_IIF_IKE = 0x2,
	VDS_IIF_MAIN_MODE = 0x4,
	VDS_IIF_AGGRESSIVE_MODE = 0x8,
	VDS_IIF_PFS_ENABLE = 0x10,
	VDS_IIF_TRANSPORT_MODE_PREFERRED = 0x20,
	VDS_IIF_TUNNEL_MODE_PREFERRED = 0x40
} VDS_ISCSI_IPSEC_FLAG;
typedef enum _VDS_ISCSI_LOGIN_FLAG
{
	VDS_ILF_REQUIRE_IPSEC = 0x1,
	VDS_ILF_MULTIPATH_ENABLED = 0x2
} VDS_ISCSI_LOGIN_FLAG;
typedef struct _VDS_PATH_ID
{
	ULONGLONG ullSourceId;
	ULONGLONG ullPathId;
} VDS_PATH_ID;
typedef struct _VDS_WWN
{
	UCHAR rguchWwn[8];
} VDS_WWN;
typedef struct _VDS_IPADDRESS
{
	VDS_IPADDRESS_TYPE type;
	ULONG ipv4Address;
	UCHAR ipv6Address[16];
	ULONG ulIpv6FlowInfo;
	ULONG ulIpv6ScopeId;
	WCHAR wszTextAddress[257];
	ULONG ulPort;
} VDS_IPADDRESS;
typedef struct _VDS_ISCSI_IPSEC_KEY
{
	UCHAR *pKey;
	ULONG ulKeySize;
} VDS_ISCSI_IPSEC_KEY;
typedef struct _VDS_ISCSI_SHARED_SECRET
{
	UCHAR *pSharedSecret;
	ULONG ulSharedSecretSize;
} VDS_ISCSI_SHARED_SECRET;
typedef struct _VDS_HBAPORT_PROP
{
	VDS_OBJECT_ID id;
	VDS_WWN wwnNode;
	VDS_WWN wwnPort;
	VDS_HBAPORT_TYPE type;
	VDS_HBAPORT_STATUS status;
	ULONG ulPortSpeed;
	ULONG ulSupportedPortSpeed;
} VDS_HBAPORT_PROP;
typedef struct _VDS_ISCSI_INITIATOR_ADAPTER_PROP
{
	VDS_OBJECT_ID id;
	LPWSTR pwszName;
} VDS_ISCSI_INITIATOR_ADAPTER_PROP;
typedef struct _VDS_ISCSI_INITIATOR_PORTAL_PROP
{
	VDS_OBJECT_ID id;
	VDS_IPADDRESS address;
	ULONG ulPortIndex;
} VDS_ISCSI_INITIATOR_PORTAL_PROP;
typedef struct _VDS_PROVIDER_PROP
{
	VDS_OBJECT_ID id;
	LPWSTR pwszName;
	GUID guidVersionId;
	LPWSTR pwszVersion;
	VDS_PROVIDER_TYPE type;
	ULONG ulFlags;
	ULONG ulStripeSizeFlags;
	SHORT sRebuildPriority;
} VDS_PROVIDER_PROP;
typedef struct _VDS_PATH_INFO
{
	VDS_PATH_ID pathId;
	VDS_HWPROVIDER_TYPE type;
	VDS_PATH_STATUS status;
	union
	{
		VDS_OBJECT_ID controllerPortId;
		VDS_OBJECT_ID targetPortalId;
	};
	union
	{
		VDS_OBJECT_ID hbaPortId;
		VDS_OBJECT_ID initiatorAdapterId;
	};
	union
	{
		VDS_HBAPORT_PROP *pHbaPortProp;
		VDS_IPADDRESS *pInitiatorPortalIpAddr;
	};
} VDS_PATH_INFO;
typedef struct _VDS_PATH_POLICY
{
	VDS_PATH_ID pathId;
	BOOL bPrimaryPath;
	ULONG ulWeight;
} VDS_PATH_POLICY;
extern RPC_IF_HANDLE __MIDL_itf_vdshwprv_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_vdshwprv_0000_0000_v0_0_s_ifspec;
#ifndef __IEnumVdsObject_INTERFACE_DEFINED__
#define __IEnumVdsObject_INTERFACE_DEFINED__
extern const IID IID_IEnumVdsObject;
typedef struct IEnumVdsObjectVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IEnumVdsObject * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IEnumVdsObject * This);
	ULONG(STDMETHODCALLTYPE * Release) (IEnumVdsObject * This);
	HRESULT(STDMETHODCALLTYPE * Next) (IEnumVdsObject * This, ULONG celt, IUnknown ** ppObjectArray, ULONG * pcFetched);
	HRESULT(STDMETHODCALLTYPE * Skip) (IEnumVdsObject * This, ULONG celt);
	HRESULT(STDMETHODCALLTYPE * Reset) (IEnumVdsObject * This);
	HRESULT(STDMETHODCALLTYPE * Clone) (IEnumVdsObject * This, IEnumVdsObject ** ppEnum);
	END_INTERFACE
}  IEnumVdsObjectVtbl;
interface IEnumVdsObject
{
	CONST_VTBL struct IEnumVdsObjectVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IEnumVdsObject_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IEnumVdsObject_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IEnumVdsObject_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IEnumVdsObject_Next(This,celt,ppObjectArray,pcFetched) ( (This)->lpVtbl -> Next(This,celt,ppObjectArray,pcFetched) )
#define IEnumVdsObject_Skip(This,celt) ( (This)->lpVtbl -> Skip(This,celt) )
#define IEnumVdsObject_Reset(This) ( (This)->lpVtbl -> Reset(This) )
#define IEnumVdsObject_Clone(This,ppEnum) ( (This)->lpVtbl -> Clone(This,ppEnum) )
#endif
#endif
#ifndef __IVdsAsync_INTERFACE_DEFINED__
#define __IVdsAsync_INTERFACE_DEFINED__
extern const IID IID_IVdsAsync;
typedef struct IVdsAsyncVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IVdsAsync * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IVdsAsync * This);
	ULONG(STDMETHODCALLTYPE * Release) (IVdsAsync * This);
	HRESULT(STDMETHODCALLTYPE * Cancel) (IVdsAsync * This);
	HRESULT(STDMETHODCALLTYPE * Wait) (IVdsAsync * This, HRESULT * pHrResult, VDS_ASYNC_OUTPUT * pAsyncOut);
	HRESULT(STDMETHODCALLTYPE * QueryStatus) (IVdsAsync * This, HRESULT * pHrResult, ULONG * pulPercentCompleted);
	END_INTERFACE
}  IVdsAsyncVtbl;
interface IVdsAsync
{
	CONST_VTBL struct IVdsAsyncVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IVdsAsync_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IVdsAsync_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IVdsAsync_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IVdsAsync_Cancel(This) ( (This)->lpVtbl -> Cancel(This) )
#define IVdsAsync_Wait(This,pHrResult,pAsyncOut) ( (This)->lpVtbl -> Wait(This,pHrResult,pAsyncOut) )
#define IVdsAsync_QueryStatus(This,pHrResult,pulPercentCompleted) ( (This)->lpVtbl -> QueryStatus(This,pHrResult,pulPercentCompleted) )
#endif
#endif
#ifndef __IVdsAdviseSink_INTERFACE_DEFINED__
#define __IVdsAdviseSink_INTERFACE_DEFINED__
extern const IID IID_IVdsAdviseSink;
typedef struct IVdsAdviseSinkVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IVdsAdviseSink * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IVdsAdviseSink * This);
	ULONG(STDMETHODCALLTYPE * Release) (IVdsAdviseSink * This);
	HRESULT(STDMETHODCALLTYPE * OnNotify) (IVdsAdviseSink * This, LONG lNumberOfNotifications, VDS_NOTIFICATION * pNotificationArray);
	END_INTERFACE
}  IVdsAdviseSinkVtbl;
interface IVdsAdviseSink
{
	CONST_VTBL struct IVdsAdviseSinkVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IVdsAdviseSink_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IVdsAdviseSink_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IVdsAdviseSink_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IVdsAdviseSink_OnNotify(This,lNumberOfNotifications,pNotificationArray) ( (This)->lpVtbl -> OnNotify(This,lNumberOfNotifications,pNotificationArray) )
#endif
#endif
#ifndef __IVdsProvider_INTERFACE_DEFINED__
#define __IVdsProvider_INTERFACE_DEFINED__
extern const IID IID_IVdsProvider;
typedef struct IVdsProviderVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IVdsProvider * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IVdsProvider * This);
	ULONG(STDMETHODCALLTYPE * Release) (IVdsProvider * This);
	HRESULT(STDMETHODCALLTYPE * GetProperties) (IVdsProvider * This, VDS_PROVIDER_PROP * pProviderProp);
	END_INTERFACE
}  IVdsProviderVtbl;
interface IVdsProvider
{
	CONST_VTBL struct IVdsProviderVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IVdsProvider_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IVdsProvider_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IVdsProvider_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IVdsProvider_GetProperties(This,pProviderProp) ( (This)->lpVtbl -> GetProperties(This,pProviderProp) )
#endif
#endif
#ifndef __IVdsProviderSupport_INTERFACE_DEFINED__
#define __IVdsProviderSupport_INTERFACE_DEFINED__
extern const IID IID_IVdsProviderSupport;
typedef struct IVdsProviderSupportVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IVdsProviderSupport * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IVdsProviderSupport * This);
	ULONG(STDMETHODCALLTYPE * Release) (IVdsProviderSupport * This);
	HRESULT(STDMETHODCALLTYPE * GetVersionSupport) (IVdsProviderSupport * This, ULONG * ulVersionSupport);
	END_INTERFACE
}  IVdsProviderSupportVtbl;
interface IVdsProviderSupport
{
	CONST_VTBL struct IVdsProviderSupportVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IVdsProviderSupport_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IVdsProviderSupport_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IVdsProviderSupport_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IVdsProviderSupport_GetVersionSupport(This,ulVersionSupport) ( (This)->lpVtbl -> GetVersionSupport(This,ulVersionSupport) )
#endif
#endif
extern RPC_IF_HANDLE __MIDL_itf_vdshwprv_0000_0005_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_vdshwprv_0000_0005_v0_0_s_ifspec;
#ifndef __IVdsProviderPrivate_INTERFACE_DEFINED__
#define __IVdsProviderPrivate_INTERFACE_DEFINED__
extern const IID IID_IVdsProviderPrivate;
typedef struct IVdsProviderPrivateVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IVdsProviderPrivate * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IVdsProviderPrivate * This);
	ULONG(STDMETHODCALLTYPE * Release) (IVdsProviderPrivate * This);
	HRESULT(STDMETHODCALLTYPE * GetObject) (IVdsProviderPrivate * This, VDS_OBJECT_ID ObjectId, VDS_OBJECT_TYPE type, IUnknown ** ppObjectUnk);
	HRESULT(STDMETHODCALLTYPE * OnLoad) (IVdsProviderPrivate * This, LPWSTR pwszMachineName, IUnknown * pCallbackObject);
	HRESULT(STDMETHODCALLTYPE * OnUnload) (IVdsProviderPrivate * This, BOOL bForceUnload);
	END_INTERFACE
}  IVdsProviderPrivateVtbl;
interface IVdsProviderPrivate
{
	CONST_VTBL struct IVdsProviderPrivateVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IVdsProviderPrivate_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IVdsProviderPrivate_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IVdsProviderPrivate_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IVdsProviderPrivate_GetObject(This,ObjectId,type,ppObjectUnk) ( (This)->lpVtbl -> GetObject(This,ObjectId,type,ppObjectUnk) )
#define IVdsProviderPrivate_OnLoad(This,pwszMachineName,pCallbackObject) ( (This)->lpVtbl -> OnLoad(This,pwszMachineName,pCallbackObject) )
#define IVdsProviderPrivate_OnUnload(This,bForceUnload) ( (This)->lpVtbl -> OnUnload(This,bForceUnload) )
#endif
#endif
typedef enum _VDS_SUB_SYSTEM_STATUS
{
	VDS_SSS_UNKNOWN = 0,
	VDS_SSS_ONLINE = 1,
	VDS_SSS_NOT_READY = 2,
	VDS_SSS_OFFLINE = 4,
	VDS_SSS_FAILED = 5,
	VDS_SSS_PARTIALLY_MANAGED = 9
} VDS_SUB_SYSTEM_STATUS;
typedef enum _VDS_SUB_SYSTEM_FLAG
{
	VDS_SF_LUN_MASKING_CAPABLE = 0x1,
	VDS_SF_LUN_PLEXING_CAPABLE = 0x2,
	VDS_SF_LUN_REMAPPING_CAPABLE = 0x4,
	VDS_SF_DRIVE_EXTENT_CAPABLE = 0x8,
	VDS_SF_HARDWARE_CHECKSUM_CAPABLE = 0x10,
	VDS_SF_RADIUS_CAPABLE = 0x20,
	VDS_SF_READ_BACK_VERIFY_CAPABLE = 0x40,
	VDS_SF_WRITE_THROUGH_CACHING_CAPABLE = 0x80,
	VDS_SF_SUPPORTS_FAULT_TOLERANT_LUNS = 0x200,
	VDS_SF_SUPPORTS_NON_FAULT_TOLERANT_LUNS = 0x400,
	VDS_SF_SUPPORTS_SIMPLE_LUNS = 0x800,
	VDS_SF_SUPPORTS_SPAN_LUNS = 0x1000,
	VDS_SF_SUPPORTS_STRIPE_LUNS = 0x2000,
	VDS_SF_SUPPORTS_MIRROR_LUNS = 0x4000,
	VDS_SF_SUPPORTS_PARITY_LUNS = 0x8000,
	VDS_SF_SUPPORTS_AUTH_CHAP = 0x10000,
	VDS_SF_SUPPORTS_AUTH_MUTUAL_CHAP = 0x20000,
	VDS_SF_SUPPORTS_SIMPLE_TARGET_CONFIG = 0x40000,
	VDS_SF_SUPPORTS_LUN_NUMBER = 0x80000,
	VDS_SF_SUPPORTS_MIRRORED_CACHE = 0x100000,
	VDS_SF_READ_CACHING_CAPABLE = 0x200000,
	VDS_SF_WRITE_CACHING_CAPABLE = 0x400000,
	VDS_SF_MEDIA_SCAN_CAPABLE = 0x800000,
	VDS_SF_CONSISTENCY_CHECK_CAPABLE = 0x1000000
} VDS_SUB_SYSTEM_FLAG;
typedef enum _VDS_SUB_SYSTEM_SUPPORTED_RAID_TYPE_FLAG
{
	VDS_SF_SUPPORTS_RAID2_LUNS = 0x1,
	VDS_SF_SUPPORTS_RAID3_LUNS = 0x2,
	VDS_SF_SUPPORTS_RAID4_LUNS = 0x4,
	VDS_SF_SUPPORTS_RAID5_LUNS = 0x8,
	VDS_SF_SUPPORTS_RAID6_LUNS = 0x10,
	VDS_SF_SUPPORTS_RAID01_LUNS = 0x20,
	VDS_SF_SUPPORTS_RAID03_LUNS = 0x40,
	VDS_SF_SUPPORTS_RAID05_LUNS = 0x80,
	VDS_SF_SUPPORTS_RAID10_LUNS = 0x100,
	VDS_SF_SUPPORTS_RAID15_LUNS = 0x200,
	VDS_SF_SUPPORTS_RAID30_LUNS = 0x400,
	VDS_SF_SUPPORTS_RAID50_LUNS = 0x800,
	VDS_SF_SUPPORTS_RAID51_LUNS = 0x1000,
	VDS_SF_SUPPORTS_RAID53_LUNS = 0x2000,
	VDS_SF_SUPPORTS_RAID60_LUNS = 0x4000,
	VDS_SF_SUPPORTS_RAID61_LUNS = 0x8000
} VDS_SUB_SYSTEM_SUPPORTED_RAID_TYPE_FLAG;
typedef enum _VDS_INTERCONNECT_FLAG
{
	VDS_ITF_PCI_RAID = 0x1,
	VDS_ITF_FIBRE_CHANNEL = 0x2,
	VDS_ITF_ISCSI = 0x4,
	VDS_ITF_SAS = 0x8
} VDS_INTERCONNECT_FLAG;
typedef enum _VDS_CONTROLLER_STATUS
{
	VDS_CS_UNKNOWN = 0,
	VDS_CS_ONLINE = 1,
	VDS_CS_NOT_READY = 2,
	VDS_CS_OFFLINE = 4,
	VDS_CS_FAILED = 5,
	VDS_CS_REMOVED = 8
} VDS_CONTROLLER_STATUS;
typedef enum _VDS_PORT_STATUS
{
	VDS_PRS_UNKNOWN = 0,
	VDS_PRS_ONLINE = 1,
	VDS_PRS_NOT_READY = 2,
	VDS_PRS_OFFLINE = 4,
	VDS_PRS_FAILED = 5,
	VDS_PRS_REMOVED = 8
} VDS_PORT_STATUS;
typedef enum _VDS_DRIVE_STATUS
{
	VDS_DRS_UNKNOWN = 0,
	VDS_DRS_ONLINE = 1,
	VDS_DRS_NOT_READY = 2,
	VDS_DRS_OFFLINE = 4,
	VDS_DRS_FAILED = 5,
	VDS_DRS_REMOVED = 8
} VDS_DRIVE_STATUS;
typedef enum _VDS_DRIVE_FLAG
{
	VDS_DRF_HOTSPARE = 0x1,
	VDS_DRF_ASSIGNED = 0x2,
	VDS_DRF_UNASSIGNED = 0x4,
	VDS_DRF_HOTSPARE_IN_USE = 0x8,
	VDS_DRF_HOTSPARE_STANDBY = 0x10
} VDS_DRIVE_FLAG;
typedef enum _VDS_LUN_TYPE
{
	VDS_LT_UNKNOWN = 0,
	VDS_LT_DEFAULT = 1,
	VDS_LT_FAULT_TOLERANT = 2,
	VDS_LT_NON_FAULT_TOLERANT = 3,
	VDS_LT_SIMPLE = 10,
	VDS_LT_SPAN = 11,
	VDS_LT_STRIPE = 12,
	VDS_LT_MIRROR = 13,
	VDS_LT_PARITY = 14,
	VDS_LT_RAID2 = 15,
	VDS_LT_RAID3 = 16,
	VDS_LT_RAID4 = 17,
	VDS_LT_RAID5 = 18,
	VDS_LT_RAID6 = 19,
	VDS_LT_RAID01 = 20,
	VDS_LT_RAID03 = 21,
	VDS_LT_RAID05 = 22,
	VDS_LT_RAID10 = 23,
	VDS_LT_RAID15 = 24,
	VDS_LT_RAID30 = 25,
	VDS_LT_RAID50 = 26,
	VDS_LT_RAID51 = 27,
	VDS_LT_RAID53 = 28,
	VDS_LT_RAID60 = 29,
	VDS_LT_RAID61 = 30
} VDS_LUN_TYPE;
typedef enum _VDS_LUN_STATUS
{
	VDS_LS_UNKNOWN = 0,
	VDS_LS_ONLINE = 1,
	VDS_LS_NOT_READY = 2,
	VDS_LS_OFFLINE = 4,
	VDS_LS_FAILED = 5
} VDS_LUN_STATUS;
typedef enum _VDS_LUN_FLAG
{
	VDS_LF_LBN_REMAP_ENABLED = 0x1,
	VDS_LF_READ_BACK_VERIFY_ENABLED = 0x2,
	VDS_LF_WRITE_THROUGH_CACHING_ENABLED = 0x4,
	VDS_LF_HARDWARE_CHECKSUM_ENABLED = 0x8,
	VDS_LF_READ_CACHE_ENABLED = 0x10,
	VDS_LF_WRITE_CACHE_ENABLED = 0x20,
	VDS_LF_MEDIA_SCAN_ENABLED = 0x40,
	VDS_LF_CONSISTENCY_CHECK_ENABLED = 0x80,
	VDS_LF_SNAPSHOT = 0x100
} VDS_LUN_FLAG;
typedef enum _VDS_LUN_PLEX_TYPE
{
	VDS_LPT_UNKNOWN = 0,
	VDS_LPT_SIMPLE = VDS_LT_SIMPLE,
	VDS_LPT_SPAN = VDS_LT_SPAN,
	VDS_LPT_STRIPE = VDS_LT_STRIPE,
	VDS_LPT_PARITY = VDS_LT_PARITY,
	VDS_LPT_RAID2 = VDS_LT_RAID2,
	VDS_LPT_RAID3 = VDS_LT_RAID3,
	VDS_LPT_RAID4 = VDS_LT_RAID4,
	VDS_LPT_RAID5 = VDS_LT_RAID5,
	VDS_LPT_RAID6 = VDS_LT_RAID6,
	VDS_LPT_RAID03 = VDS_LT_RAID03,
	VDS_LPT_RAID05 = VDS_LT_RAID05,
	VDS_LPT_RAID10 = VDS_LT_RAID10,
	VDS_LPT_RAID15 = VDS_LT_RAID15,
	VDS_LPT_RAID30 = VDS_LT_RAID30,
	VDS_LPT_RAID50 = VDS_LT_RAID50,
	VDS_LPT_RAID53 = VDS_LT_RAID53,
	VDS_LPT_RAID60 = VDS_LT_RAID60
} VDS_LUN_PLEX_TYPE;
typedef enum _VDS_LUN_PLEX_STATUS
{
	VDS_LPS_UNKNOWN = 0,
	VDS_LPS_ONLINE = 1,
	VDS_LPS_NOT_READY = 2,
	VDS_LPS_OFFLINE = 4,
	VDS_LPS_FAILED = 5
} VDS_LUN_PLEX_STATUS;
typedef enum _VDS_LUN_PLEX_FLAG
{
	VDS_LPF_LBN_REMAP_ENABLED = VDS_LF_LBN_REMAP_ENABLED
} VDS_LUN_PLEX_FLAG;
typedef enum _VDS_ISCSI_PORTAL_STATUS
{
	VDS_IPS_UNKNOWN = 0,
	VDS_IPS_ONLINE = 1,
	VDS_IPS_NOT_READY = 2,
	VDS_IPS_OFFLINE = 4,
	VDS_IPS_FAILED = 5
} VDS_ISCSI_PORTAL_STATUS;
typedef enum _VDS_STORAGE_POOL_STATUS
{
	VDS_SPS_UNKNOWN = 0,
	VDS_SPS_ONLINE = 1,
	VDS_SPS_NOT_READY = 2,
	VDS_SPS_OFFLINE = 4
} VDS_STORAGE_POOL_STATUS;
typedef enum _VDS_STORAGE_POOL_TYPE
{
	VDS_SPT_UNKNOWN = 0,
	VDS_SPT_PRIMORDIAL = 0x1,
	VDS_SPT_CONCRETE = 0x2
} VDS_STORAGE_POOL_TYPE;
typedef enum _VDS_MAINTENANCE_OPERATION
{
	BlinkLight = 1,
	BeepAlarm = 2,
	SpinDown = 3,
	SpinUp = 4,
	Ping = 5
} VDS_MAINTENANCE_OPERATION;
typedef struct _VDS_HINTS
{
	ULONGLONG ullHintMask;
	ULONGLONG ullExpectedMaximumSize;
	ULONG ulOptimalReadSize;
	ULONG ulOptimalReadAlignment;
	ULONG ulOptimalWriteSize;
	ULONG ulOptimalWriteAlignment;
	ULONG ulMaximumDriveCount;
	ULONG ulStripeSize;
	BOOL bFastCrashRecoveryRequired;
	BOOL bMostlyReads;
	BOOL bOptimizeForSequentialReads;
	BOOL bOptimizeForSequentialWrites;
	BOOL bRemapEnabled;
	BOOL bReadBackVerifyEnabled;
	BOOL bWriteThroughCachingEnabled;
	BOOL bHardwareChecksumEnabled;
	BOOL bIsYankable;
	SHORT sRebuildPriority;
} VDS_HINTS;
typedef struct _VDS_HINTS *PVDS_HINTS;
#define	VDS_HINT_FASTCRASHRECOVERYREQUIRED	( 0x1L )
#define	VDS_HINT_MOSTLYREADS	( 0x2L )
#define	VDS_HINT_OPTIMIZEFORSEQUENTIALREADS	( 0x4L )
#define	VDS_HINT_OPTIMIZEFORSEQUENTIALWRITES	( 0x8L )
#define	VDS_HINT_READBACKVERIFYENABLED	( 0x10L )
#define	VDS_HINT_REMAPENABLED	( 0x20L )
#define	VDS_HINT_WRITETHROUGHCACHINGENABLED	( 0x40L )
#define	VDS_HINT_HARDWARECHECKSUMENABLED	( 0x80L )
#define	VDS_HINT_ISYANKABLE	( 0x100L )
typedef struct _VDS_HINTS2
{
	ULONGLONG ullHintMask;
	ULONGLONG ullExpectedMaximumSize;
	ULONG ulOptimalReadSize;
	ULONG ulOptimalReadAlignment;
	ULONG ulOptimalWriteSize;
	ULONG ulOptimalWriteAlignment;
	ULONG ulMaximumDriveCount;
	ULONG ulStripeSize;
	ULONG ulReserved1;
	ULONG ulReserved2;
	ULONG ulReserved3;
	BOOL bFastCrashRecoveryRequired;
	BOOL bMostlyReads;
	BOOL bOptimizeForSequentialReads;
	BOOL bOptimizeForSequentialWrites;
	BOOL bRemapEnabled;
	BOOL bReadBackVerifyEnabled;
	BOOL bWriteThroughCachingEnabled;
	BOOL bHardwareChecksumEnabled;
	BOOL bIsYankable;
	BOOL bAllocateHotSpare;
	BOOL bUseMirroredCache;
	BOOL bReadCachingEnabled;
	BOOL bWriteCachingEnabled;
	BOOL bMediaScanEnabled;
	BOOL bConsistencyCheckEnabled;
	VDS_STORAGE_BUS_TYPE BusType;
	BOOL bReserved1;
	BOOL bReserved2;
	BOOL bReserved3;
	SHORT sRebuildPriority;
} VDS_HINTS2;
typedef struct _VDS_HINTS2 *PVDS_HINTS2;
#define	VDS_HINT_ALLOCATEHOTSPARE	( 0x200L )
#define	VDS_HINT_BUSTYPE	( 0x400L )
#define	VDS_HINT_USEMIRROREDCACHE	( 0x800L )
#define	VDS_HINT_READCACHINGENABLED	( 0x1000L )
#define	VDS_HINT_WRITECACHINGENABLED	( 0x2000L )
#define	VDS_HINT_MEDIASCANENABLED	( 0x4000L )
#define	VDS_HINT_CONSISTENCYCHECKENABLED	( 0x8000L )
typedef struct _VDS_SUB_SYSTEM_PROP
{
	VDS_OBJECT_ID id;
	LPWSTR pwszFriendlyName;
	LPWSTR pwszIdentification;
	ULONG ulFlags;
	ULONG ulStripeSizeFlags;
	VDS_SUB_SYSTEM_STATUS status;
	VDS_HEALTH health;
	SHORT sNumberOfInternalBuses;
	SHORT sMaxNumberOfSlotsEachBus;
	SHORT sMaxNumberOfControllers;
	SHORT sRebuildPriority;
} VDS_SUB_SYSTEM_PROP;
typedef struct _VDS_SUB_SYSTEM_PROP2
{
	VDS_OBJECT_ID id;
	LPWSTR pwszFriendlyName;
	LPWSTR pwszIdentification;
	ULONG ulFlags;
	ULONG ulStripeSizeFlags;
	ULONG ulSupportedRaidTypeFlags;
	VDS_SUB_SYSTEM_STATUS status;
	VDS_HEALTH health;
	SHORT sNumberOfInternalBuses;
	SHORT sMaxNumberOfSlotsEachBus;
	SHORT sMaxNumberOfControllers;
	SHORT sRebuildPriority;
	ULONG ulNumberOfEnclosures;
} VDS_SUB_SYSTEM_PROP2;
typedef struct _VDS_CONTROLLER_PROP
{
	VDS_OBJECT_ID id;
	LPWSTR pwszFriendlyName;
	LPWSTR pwszIdentification;
	VDS_CONTROLLER_STATUS status;
	VDS_HEALTH health;
	SHORT sNumberOfPorts;
} VDS_CONTROLLER_PROP;
typedef struct _VDS_DRIVE_PROP
{
	VDS_OBJECT_ID id;
	ULONGLONG ullSize;
	LPWSTR pwszFriendlyName;
	LPWSTR pwszIdentification;
	ULONG ulFlags;
	VDS_DRIVE_STATUS status;
	VDS_HEALTH health;
	SHORT sInternalBusNumber;
	SHORT sSlotNumber;
} VDS_DRIVE_PROP;
typedef struct _VDS_DRIVE_PROP2
{
	VDS_OBJECT_ID id;
	ULONGLONG ullSize;
	LPWSTR pwszFriendlyName;
	LPWSTR pwszIdentification;
	ULONG ulFlags;
	VDS_DRIVE_STATUS status;
	VDS_HEALTH health;
	SHORT sInternalBusNumber;
	SHORT sSlotNumber;
	ULONG ulEnclosureNumber;
	VDS_STORAGE_BUS_TYPE busType;
	ULONG ulSpindleSpeed;
} VDS_DRIVE_PROP2;
typedef struct _VDS_DRIVE_EXTENT
{
	VDS_OBJECT_ID id;
	VDS_OBJECT_ID LunId;
	ULONGLONG ullSize;
	BOOL bUsed;
} VDS_DRIVE_EXTENT;
#define VDS_REBUILD_PRIORITY_MIN        0
#define VDS_REBUILD_PRIORITY_MAX        16
typedef struct _VDS_LUN_PROP
{
	VDS_OBJECT_ID id;
	ULONGLONG ullSize;
	LPWSTR pwszFriendlyName;
	LPWSTR pwszIdentification;
	LPWSTR pwszUnmaskingList;
	ULONG ulFlags;
	VDS_LUN_TYPE type;
	VDS_LUN_STATUS status;
	VDS_HEALTH health;
	VDS_TRANSITION_STATE TransitionState;
	SHORT sRebuildPriority;
} VDS_LUN_PROP;
typedef struct _VDS_LUN_PROP *PVDS_LUN_PROP;
typedef struct _VDS_LUN_PLEX_PROP
{
	VDS_OBJECT_ID id;
	ULONGLONG ullSize;
	VDS_LUN_PLEX_TYPE type;
	VDS_LUN_PLEX_STATUS status;
	VDS_HEALTH health;
	VDS_TRANSITION_STATE TransitionState;
	ULONG ulFlags;
	ULONG ulStripeSize;
	SHORT sRebuildPriority;
} VDS_LUN_PLEX_PROP;
typedef struct _VDS_PORT_PROP
{
	VDS_OBJECT_ID id;
	LPWSTR pwszFriendlyName;
	LPWSTR pwszIdentification;
	VDS_PORT_STATUS status;
} VDS_PORT_PROP;
typedef struct _VDS_ISCSI_PORTAL_PROP
{
	VDS_OBJECT_ID id;
	VDS_IPADDRESS address;
	VDS_ISCSI_PORTAL_STATUS status;
} VDS_ISCSI_PORTAL_PROP;
typedef struct _VDS_ISCSI_TARGET_PROP
{
	VDS_OBJECT_ID id;
	LPWSTR pwszIscsiName;
	LPWSTR pwszFriendlyName;
	BOOL bChapEnabled;
} VDS_ISCSI_TARGET_PROP;
typedef struct _VDS_ISCSI_PORTALGROUP_PROP
{
	VDS_OBJECT_ID id;
	VDS_ISCSI_PORTALGROUP_TAG tag;
} VDS_ISCSI_PORTALGROUP_PROP;
typedef enum _VDS_RAID_TYPE
{
	VDS_RT_UNKNOWN = 0,
	VDS_RT_RAID0 = 10,
	VDS_RT_RAID1 = 11,
	VDS_RT_RAID2 = 12,
	VDS_RT_RAID3 = 13,
	VDS_RT_RAID4 = 14,
	VDS_RT_RAID5 = 15,
	VDS_RT_RAID6 = 16,
	VDS_RT_RAID01 = 17,
	VDS_RT_RAID03 = 18,
	VDS_RT_RAID05 = 19,
	VDS_RT_RAID10 = 20,
	VDS_RT_RAID15 = 21,
	VDS_RT_RAID30 = 22,
	VDS_RT_RAID50 = 23,
	VDS_RT_RAID51 = 24,
	VDS_RT_RAID53 = 25,
	VDS_RT_RAID60 = 26,
	VDS_RT_RAID61 = 27
} VDS_RAID_TYPE;
typedef struct _VDS_POOL_CUSTOM_ATTRIBUTES
{
	LPWSTR pwszName;
	LPWSTR pwszValue;
} VDS_POOL_CUSTOM_ATTRIBUTES;
typedef struct _VDS_POOL_CUSTOM_ATTRIBUTES *PVDS_POOL_CUSTOM_ATTRIBUTES;
typedef struct _VDS_POOL_ATTRIBUTES
{
	ULONGLONG ullAttributeMask;
	VDS_RAID_TYPE raidType;
	VDS_STORAGE_BUS_TYPE busType;
	LPWSTR pwszIntendedUsage;
	BOOL bSpinDown;
	BOOL bIsThinProvisioned;
	ULONGLONG ullProvisionedSpace;
	BOOL bNoSinglePointOfFailure;
	ULONG ulDataRedundancyMax;
	ULONG ulDataRedundancyMin;
	ULONG ulDataRedundancyDefault;
	ULONG ulPackageRedundancyMax;
	ULONG ulPackageRedundancyMin;
	ULONG ulPackageRedundancyDefault;
	ULONG ulStripeSize;
	ULONG ulStripeSizeMax;
	ULONG ulStripeSizeMin;
	ULONG ulDefaultStripeSize;
	ULONG ulNumberOfColumns;
	ULONG ulNumberOfColumnsMax;
	ULONG ulNumberOfColumnsMin;
	ULONG ulDefaultNumberofColumns;
	ULONG ulDataAvailabilityHint;
	ULONG ulAccessRandomnessHint;
	ULONG ulAccessDirectionHint;
	ULONG ulAccessSizeHint;
	ULONG ulAccessLatencyHint;
	ULONG ulAccessBandwidthWeightHint;
	ULONG ulStorageCostHint;
	ULONG ulStorageEfficiencyHint;
	ULONG ulNumOfCustomAttributes;
	VDS_POOL_CUSTOM_ATTRIBUTES *pPoolCustomAttributes;
	BOOL bReserved1;
	BOOL bReserved2;
	ULONG ulReserved1;
	ULONG ulReserved2;
	ULONGLONG ullReserved1;
	ULONGLONG ullReserved2;
} VDS_POOL_ATTRIBUTES;
typedef struct _VDS_POOL_ATTRIBUTES *PVDS_POOL_ATTRIBUTES;
#define	VDS_POOL_ATTRIB_RAIDTYPE	( 0x1L )
#define	VDS_POOL_ATTRIB_BUSTYPE	( 0x2L )
#define	VDS_POOL_ATTRIB_ALLOW_SPINDOWN	( 0x4L )
#define	VDS_POOL_ATTRIB_THIN_PROVISION	( 0x8L )
#define	VDS_POOL_ATTRIB_NO_SINGLE_POF	( 0x10L )
#define	VDS_POOL_ATTRIB_DATA_RDNCY_MAX	( 0x20L )
#define	VDS_POOL_ATTRIB_DATA_RDNCY_MIN	( 0x40L )
#define	VDS_POOL_ATTRIB_DATA_RDNCY_DEF	( 0x80L )
#define	VDS_POOL_ATTRIB_PKG_RDNCY_MAX	( 0x100L )
#define	VDS_POOL_ATTRIB_PKG_RDNCY_MIN	( 0x200L )
#define	VDS_POOL_ATTRIB_PKG_RDNCY_DEF	( 0x400L )
#define	VDS_POOL_ATTRIB_STRIPE_SIZE	( 0x800L )
#define	VDS_POOL_ATTRIB_STRIPE_SIZE_MAX	( 0x1000L )
#define	VDS_POOL_ATTRIB_STRIPE_SIZE_MIN	( 0x2000L )
#define	VDS_POOL_ATTRIB_STRIPE_SIZE_DEF	( 0x4000L )
#define	VDS_POOL_ATTRIB_NUM_CLMNS	( 0x8000L )
#define	VDS_POOL_ATTRIB_NUM_CLMNS_MAX	( 0x10000L )
#define	VDS_POOL_ATTRIB_NUM_CLMNS_MIN	( 0x20000L )
#define	VDS_POOL_ATTRIB_NUM_CLMNS_DEF	( 0x40000L )
#define	VDS_POOL_ATTRIB_DATA_AVL_HINT	( 0x80000L )
#define	VDS_POOL_ATTRIB_ACCS_RNDM_HINT	( 0x100000L )
#define	VDS_POOL_ATTRIB_ACCS_DIR_HINT	( 0x200000L )
#define	VDS_POOL_ATTRIB_ACCS_SIZE_HINT	( 0x400000L )
#define	VDS_POOL_ATTRIB_ACCS_LTNCY_HINT	( 0x800000L )
#define	VDS_POOL_ATTRIB_ACCS_BDW_WT_HINT	( 0x1000000L )
#define	VDS_POOL_ATTRIB_STOR_COST_HINT	( 0x2000000L )
#define	VDS_POOL_ATTRIB_STOR_EFFCY_HINT	( 0x4000000L )
#define	VDS_POOL_ATTRIB_CUSTOM_ATTRIB	( 0x8000000L )
typedef struct _VDS_STORAGE_POOL_PROP
{
	VDS_OBJECT_ID id;
	VDS_STORAGE_POOL_STATUS status;
	VDS_HEALTH health;
	VDS_STORAGE_POOL_TYPE type;
	LPWSTR pwszName;
	LPWSTR pwszDescription;
	ULONGLONG ullTotalConsumedSpace;
	ULONGLONG ullTotalManagedSpace;
	ULONGLONG ullRemainingFreeSpace;
} VDS_STORAGE_POOL_PROP;
typedef struct _VDS_STORAGE_POOL_PROP *PVDS_STORAGE_POOL_PROP;
typedef struct _VDS_STORAGE_POOL_DRIVE_EXTENT
{
	VDS_OBJECT_ID id;
	ULONGLONG ullSize;
	BOOL bUsed;
} VDS_STORAGE_POOL_DRIVE_EXTENT;
extern RPC_IF_HANDLE __MIDL_itf_vdshwprv_0000_0006_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_vdshwprv_0000_0006_v0_0_s_ifspec;
#ifndef __IVdsHwProvider_INTERFACE_DEFINED__
#define __IVdsHwProvider_INTERFACE_DEFINED__
extern const IID IID_IVdsHwProvider;
typedef struct IVdsHwProviderVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IVdsHwProvider * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IVdsHwProvider * This);
	ULONG(STDMETHODCALLTYPE * Release) (IVdsHwProvider * This);
	HRESULT(STDMETHODCALLTYPE * QuerySubSystems) (IVdsHwProvider * This, IEnumVdsObject ** ppEnum);
	HRESULT(STDMETHODCALLTYPE * Reenumerate) (IVdsHwProvider * This);
	HRESULT(STDMETHODCALLTYPE * Refresh) (IVdsHwProvider * This);
	END_INTERFACE
}  IVdsHwProviderVtbl;
interface IVdsHwProvider
{
	CONST_VTBL struct IVdsHwProviderVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IVdsHwProvider_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IVdsHwProvider_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IVdsHwProvider_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IVdsHwProvider_QuerySubSystems(This,ppEnum) ( (This)->lpVtbl -> QuerySubSystems(This,ppEnum) )
#define IVdsHwProvider_Reenumerate(This) ( (This)->lpVtbl -> Reenumerate(This) )
#define IVdsHwProvider_Refresh(This) ( (This)->lpVtbl -> Refresh(This) )
#endif
#endif
#ifndef __IVdsHwProviderType_INTERFACE_DEFINED__
#define __IVdsHwProviderType_INTERFACE_DEFINED__
extern const IID IID_IVdsHwProviderType;
typedef struct IVdsHwProviderTypeVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IVdsHwProviderType * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IVdsHwProviderType * This);
	ULONG(STDMETHODCALLTYPE * Release) (IVdsHwProviderType * This);
	HRESULT(STDMETHODCALLTYPE * GetProviderType) (IVdsHwProviderType * This, VDS_HWPROVIDER_TYPE * pType);
	END_INTERFACE
}  IVdsHwProviderTypeVtbl;
interface IVdsHwProviderType
{
	CONST_VTBL struct IVdsHwProviderTypeVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IVdsHwProviderType_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IVdsHwProviderType_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IVdsHwProviderType_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IVdsHwProviderType_GetProviderType(This,pType) ( (This)->lpVtbl -> GetProviderType(This,pType) )
#endif
#endif
#ifndef __IVdsHwProviderType2_INTERFACE_DEFINED__
#define __IVdsHwProviderType2_INTERFACE_DEFINED__
extern const IID IID_IVdsHwProviderType2;
typedef struct IVdsHwProviderType2Vtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IVdsHwProviderType2 * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IVdsHwProviderType2 * This);
	ULONG(STDMETHODCALLTYPE * Release) (IVdsHwProviderType2 * This);
	HRESULT(STDMETHODCALLTYPE * GetProviderType2) (IVdsHwProviderType2 * This, VDS_HWPROVIDER_TYPE * pType);
	END_INTERFACE
}  IVdsHwProviderType2Vtbl;
interface IVdsHwProviderType2
{
	CONST_VTBL struct IVdsHwProviderType2Vtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IVdsHwProviderType2_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IVdsHwProviderType2_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IVdsHwProviderType2_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IVdsHwProviderType2_GetProviderType2(This,pType) ( (This)->lpVtbl -> GetProviderType2(This,pType) )
#endif
#endif
#ifndef __IVdsHwProviderStoragePools_INTERFACE_DEFINED__
#define __IVdsHwProviderStoragePools_INTERFACE_DEFINED__
extern const IID IID_IVdsHwProviderStoragePools;
typedef struct IVdsHwProviderStoragePoolsVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IVdsHwProviderStoragePools * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IVdsHwProviderStoragePools * This);
	ULONG(STDMETHODCALLTYPE * Release) (IVdsHwProviderStoragePools * This);
	HRESULT(STDMETHODCALLTYPE * QueryStoragePools) (IVdsHwProviderStoragePools * This, ULONG ulFlags, ULONGLONG ullRemainingFreeSpace, VDS_POOL_ATTRIBUTES * pPoolAttributes, IEnumVdsObject ** ppEnum);
	HRESULT(STDMETHODCALLTYPE * CreateLunInStoragePool) (IVdsHwProviderStoragePools * This, VDS_LUN_TYPE type, ULONGLONG ullSizeInBytes, VDS_OBJECT_ID StoragePoolId, LPWSTR pwszUnmaskingList, VDS_HINTS2 * pHints2, IVdsAsync ** ppAsync);
	HRESULT(STDMETHODCALLTYPE * QueryMaxLunCreateSizeInStoragePool) (IVdsHwProviderStoragePools * This, VDS_LUN_TYPE type, VDS_OBJECT_ID StoragePoolId, VDS_HINTS2 * pHints2, ULONGLONG * pullMaxLunSize);
	END_INTERFACE
}  IVdsHwProviderStoragePoolsVtbl;
interface IVdsHwProviderStoragePools
{
	CONST_VTBL struct IVdsHwProviderStoragePoolsVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IVdsHwProviderStoragePools_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IVdsHwProviderStoragePools_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IVdsHwProviderStoragePools_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IVdsHwProviderStoragePools_QueryStoragePools(This,ulFlags,ullRemainingFreeSpace,pPoolAttributes,ppEnum) ( (This)->lpVtbl -> QueryStoragePools(This,ulFlags,ullRemainingFreeSpace,pPoolAttributes,ppEnum) )
#define IVdsHwProviderStoragePools_CreateLunInStoragePool(This,type,ullSizeInBytes,StoragePoolId,pwszUnmaskingList,pHints2,ppAsync) ( (This)->lpVtbl -> CreateLunInStoragePool(This,type,ullSizeInBytes,StoragePoolId,pwszUnmaskingList,pHints2,ppAsync) )
#define IVdsHwProviderStoragePools_QueryMaxLunCreateSizeInStoragePool(This,type,StoragePoolId,pHints2,pullMaxLunSize) ( (This)->lpVtbl -> QueryMaxLunCreateSizeInStoragePool(This,type,StoragePoolId,pHints2,pullMaxLunSize) )
#endif
#endif
#ifndef __IVdsSubSystem_INTERFACE_DEFINED__
#define __IVdsSubSystem_INTERFACE_DEFINED__
extern const IID IID_IVdsSubSystem;
typedef struct IVdsSubSystemVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IVdsSubSystem * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IVdsSubSystem * This);
	ULONG(STDMETHODCALLTYPE * Release) (IVdsSubSystem * This);
	HRESULT(STDMETHODCALLTYPE * GetProperties) (IVdsSubSystem * This, VDS_SUB_SYSTEM_PROP * pSubSystemProp);
	HRESULT(STDMETHODCALLTYPE * GetProvider) (IVdsSubSystem * This, IVdsProvider ** ppProvider);
	HRESULT(STDMETHODCALLTYPE * QueryControllers) (IVdsSubSystem * This, IEnumVdsObject ** ppEnum);
	HRESULT(STDMETHODCALLTYPE * QueryLuns) (IVdsSubSystem * This, IEnumVdsObject ** ppEnum);
	HRESULT(STDMETHODCALLTYPE * QueryDrives) (IVdsSubSystem * This, IEnumVdsObject ** ppEnum);
	HRESULT(STDMETHODCALLTYPE * GetDrive) (IVdsSubSystem * This, SHORT sBusNumber, SHORT sSlotNumber, IVdsDrive ** ppDrive);
	HRESULT(STDMETHODCALLTYPE * Reenumerate) (IVdsSubSystem * This);
	HRESULT(STDMETHODCALLTYPE * SetControllerStatus) (IVdsSubSystem * This, VDS_OBJECT_ID * pOnlineControllerIdArray, LONG lNumberOfOnlineControllers, VDS_OBJECT_ID * pOfflineControllerIdArray, LONG lNumberOfOfflineControllers);
	HRESULT(STDMETHODCALLTYPE * CreateLun) (IVdsSubSystem * This, VDS_LUN_TYPE type, ULONGLONG ullSizeInBytes, VDS_OBJECT_ID * pDriveIdArray, LONG lNumberOfDrives, LPWSTR pwszUnmaskingList, VDS_HINTS * pHints, IVdsAsync ** ppAsync);
	HRESULT(STDMETHODCALLTYPE * ReplaceDrive) (IVdsSubSystem * This, VDS_OBJECT_ID DriveToBeReplaced, VDS_OBJECT_ID ReplacementDrive);
	HRESULT(STDMETHODCALLTYPE * SetStatus) (IVdsSubSystem * This, VDS_SUB_SYSTEM_STATUS status);
	HRESULT(STDMETHODCALLTYPE * QueryMaxLunCreateSize) (IVdsSubSystem * This, VDS_LUN_TYPE type, VDS_OBJECT_ID * pDriveIdArray, LONG lNumberOfDrives, VDS_HINTS * pHints, ULONGLONG * pullMaxLunSize);
	END_INTERFACE
}  IVdsSubSystemVtbl;
interface IVdsSubSystem
{
	CONST_VTBL struct IVdsSubSystemVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IVdsSubSystem_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IVdsSubSystem_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IVdsSubSystem_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IVdsSubSystem_GetProperties(This,pSubSystemProp) ( (This)->lpVtbl -> GetProperties(This,pSubSystemProp) )
#define IVdsSubSystem_GetProvider(This,ppProvider) ( (This)->lpVtbl -> GetProvider(This,ppProvider) )
#define IVdsSubSystem_QueryControllers(This,ppEnum) ( (This)->lpVtbl -> QueryControllers(This,ppEnum) )
#define IVdsSubSystem_QueryLuns(This,ppEnum) ( (This)->lpVtbl -> QueryLuns(This,ppEnum) )
#define IVdsSubSystem_QueryDrives(This,ppEnum) ( (This)->lpVtbl -> QueryDrives(This,ppEnum) )
#define IVdsSubSystem_GetDrive(This,sBusNumber,sSlotNumber,ppDrive) ( (This)->lpVtbl -> GetDrive(This,sBusNumber,sSlotNumber,ppDrive) )
#define IVdsSubSystem_Reenumerate(This) ( (This)->lpVtbl -> Reenumerate(This) )
#define IVdsSubSystem_SetControllerStatus(This,pOnlineControllerIdArray,lNumberOfOnlineControllers,pOfflineControllerIdArray,lNumberOfOfflineControllers) ( (This)->lpVtbl -> SetControllerStatus(This,pOnlineControllerIdArray,lNumberOfOnlineControllers,pOfflineControllerIdArray,lNumberOfOfflineControllers) )
#define IVdsSubSystem_CreateLun(This,type,ullSizeInBytes,pDriveIdArray,lNumberOfDrives,pwszUnmaskingList,pHints,ppAsync) ( (This)->lpVtbl -> CreateLun(This,type,ullSizeInBytes,pDriveIdArray,lNumberOfDrives,pwszUnmaskingList,pHints,ppAsync) )
#define IVdsSubSystem_ReplaceDrive(This,DriveToBeReplaced,ReplacementDrive) ( (This)->lpVtbl -> ReplaceDrive(This,DriveToBeReplaced,ReplacementDrive) )
#define IVdsSubSystem_SetStatus(This,status) ( (This)->lpVtbl -> SetStatus(This,status) )
#define IVdsSubSystem_QueryMaxLunCreateSize(This,type,pDriveIdArray,lNumberOfDrives,pHints,pullMaxLunSize) ( (This)->lpVtbl -> QueryMaxLunCreateSize(This,type,pDriveIdArray,lNumberOfDrives,pHints,pullMaxLunSize) )
#endif
#endif
#ifndef __IVdsSubSystem2_INTERFACE_DEFINED__
#define __IVdsSubSystem2_INTERFACE_DEFINED__
extern const IID IID_IVdsSubSystem2;
typedef struct IVdsSubSystem2Vtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IVdsSubSystem2 * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IVdsSubSystem2 * This);
	ULONG(STDMETHODCALLTYPE * Release) (IVdsSubSystem2 * This);
	HRESULT(STDMETHODCALLTYPE * GetProperties2) (IVdsSubSystem2 * This, VDS_SUB_SYSTEM_PROP2 * pSubSystemProp2);
	HRESULT(STDMETHODCALLTYPE * GetDrive2) (IVdsSubSystem2 * This, SHORT sBusNumber, SHORT sSlotNumber, ULONG ulEnclosureNumber, IVdsDrive ** ppDrive);
	HRESULT(STDMETHODCALLTYPE * CreateLun2) (IVdsSubSystem2 * This, VDS_LUN_TYPE type, ULONGLONG ullSizeInBytes, VDS_OBJECT_ID * pDriveIdArray, LONG lNumberOfDrives, LPWSTR pwszUnmaskingList, VDS_HINTS2 * pHints2, IVdsAsync ** ppAsync);
	HRESULT(STDMETHODCALLTYPE * QueryMaxLunCreateSize2) (IVdsSubSystem2 * This, VDS_LUN_TYPE type, VDS_OBJECT_ID * pDriveIdArray, LONG lNumberOfDrives, VDS_HINTS2 * pHints2, ULONGLONG * pullMaxLunSize);
	END_INTERFACE
}  IVdsSubSystem2Vtbl;
interface IVdsSubSystem2
{
	CONST_VTBL struct IVdsSubSystem2Vtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IVdsSubSystem2_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IVdsSubSystem2_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IVdsSubSystem2_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IVdsSubSystem2_GetProperties2(This,pSubSystemProp2) ( (This)->lpVtbl -> GetProperties2(This,pSubSystemProp2) )
#define IVdsSubSystem2_GetDrive2(This,sBusNumber,sSlotNumber,ulEnclosureNumber,ppDrive) ( (This)->lpVtbl -> GetDrive2(This,sBusNumber,sSlotNumber,ulEnclosureNumber,ppDrive) )
#define IVdsSubSystem2_CreateLun2(This,type,ullSizeInBytes,pDriveIdArray,lNumberOfDrives,pwszUnmaskingList,pHints2,ppAsync) ( (This)->lpVtbl -> CreateLun2(This,type,ullSizeInBytes,pDriveIdArray,lNumberOfDrives,pwszUnmaskingList,pHints2,ppAsync) )
#define IVdsSubSystem2_QueryMaxLunCreateSize2(This,type,pDriveIdArray,lNumberOfDrives,pHints2,pullMaxLunSize) ( (This)->lpVtbl -> QueryMaxLunCreateSize2(This,type,pDriveIdArray,lNumberOfDrives,pHints2,pullMaxLunSize) )
#endif
#endif
#ifndef __IVdsSubSystemNaming_INTERFACE_DEFINED__
#define __IVdsSubSystemNaming_INTERFACE_DEFINED__
extern const IID IID_IVdsSubSystemNaming;
typedef struct IVdsSubSystemNamingVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IVdsSubSystemNaming * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IVdsSubSystemNaming * This);
	ULONG(STDMETHODCALLTYPE * Release) (IVdsSubSystemNaming * This);
	HRESULT(STDMETHODCALLTYPE * SetFriendlyName) (IVdsSubSystemNaming * This, LPWSTR pwszFriendlyName);
	END_INTERFACE
}  IVdsSubSystemNamingVtbl;
interface IVdsSubSystemNaming
{
	CONST_VTBL struct IVdsSubSystemNamingVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IVdsSubSystemNaming_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IVdsSubSystemNaming_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IVdsSubSystemNaming_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IVdsSubSystemNaming_SetFriendlyName(This,pwszFriendlyName) ( (This)->lpVtbl -> SetFriendlyName(This,pwszFriendlyName) )
#endif
#endif
#ifndef __IVdsSubSystemIscsi_INTERFACE_DEFINED__
#define __IVdsSubSystemIscsi_INTERFACE_DEFINED__
extern const IID IID_IVdsSubSystemIscsi;
typedef struct IVdsSubSystemIscsiVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IVdsSubSystemIscsi * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IVdsSubSystemIscsi * This);
	ULONG(STDMETHODCALLTYPE * Release) (IVdsSubSystemIscsi * This);
	HRESULT(STDMETHODCALLTYPE * QueryTargets) (IVdsSubSystemIscsi * This, IEnumVdsObject ** ppEnum);
	HRESULT(STDMETHODCALLTYPE * QueryPortals) (IVdsSubSystemIscsi * This, IEnumVdsObject ** ppEnum);
	HRESULT(STDMETHODCALLTYPE * CreateTarget) (IVdsSubSystemIscsi * This, LPWSTR pwszIscsiName, LPWSTR pwszFriendlyName, IVdsAsync ** ppAsync);
	HRESULT(STDMETHODCALLTYPE * SetIpsecGroupPresharedKey) (IVdsSubSystemIscsi * This, VDS_ISCSI_IPSEC_KEY * pIpsecKey);
	END_INTERFACE
}  IVdsSubSystemIscsiVtbl;
interface IVdsSubSystemIscsi
{
	CONST_VTBL struct IVdsSubSystemIscsiVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IVdsSubSystemIscsi_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IVdsSubSystemIscsi_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IVdsSubSystemIscsi_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IVdsSubSystemIscsi_QueryTargets(This,ppEnum) ( (This)->lpVtbl -> QueryTargets(This,ppEnum) )
#define IVdsSubSystemIscsi_QueryPortals(This,ppEnum) ( (This)->lpVtbl -> QueryPortals(This,ppEnum) )
#define IVdsSubSystemIscsi_CreateTarget(This,pwszIscsiName,pwszFriendlyName,ppAsync) ( (This)->lpVtbl -> CreateTarget(This,pwszIscsiName,pwszFriendlyName,ppAsync) )
#define IVdsSubSystemIscsi_SetIpsecGroupPresharedKey(This,pIpsecKey) ( (This)->lpVtbl -> SetIpsecGroupPresharedKey(This,pIpsecKey) )
#endif
#endif
#ifndef __IVdsSubSystemInterconnect_INTERFACE_DEFINED__
#define __IVdsSubSystemInterconnect_INTERFACE_DEFINED__
extern const IID IID_IVdsSubSystemInterconnect;
typedef struct IVdsSubSystemInterconnectVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IVdsSubSystemInterconnect * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IVdsSubSystemInterconnect * This);
	ULONG(STDMETHODCALLTYPE * Release) (IVdsSubSystemInterconnect * This);
	HRESULT(STDMETHODCALLTYPE * GetSupportedInterconnects) (IVdsSubSystemInterconnect * This, ULONG * pulSupportedInterconnectsFlag);
	END_INTERFACE
}  IVdsSubSystemInterconnectVtbl;
interface IVdsSubSystemInterconnect
{
	CONST_VTBL struct IVdsSubSystemInterconnectVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IVdsSubSystemInterconnect_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IVdsSubSystemInterconnect_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IVdsSubSystemInterconnect_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IVdsSubSystemInterconnect_GetSupportedInterconnects(This,pulSupportedInterconnectsFlag) ( (This)->lpVtbl -> GetSupportedInterconnects(This,pulSupportedInterconnectsFlag) )
#endif
#endif
#ifndef __IVdsControllerPort_INTERFACE_DEFINED__
#define __IVdsControllerPort_INTERFACE_DEFINED__
extern const IID IID_IVdsControllerPort;
typedef struct IVdsControllerPortVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IVdsControllerPort * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IVdsControllerPort * This);
	ULONG(STDMETHODCALLTYPE * Release) (IVdsControllerPort * This);
	HRESULT(STDMETHODCALLTYPE * GetProperties) (IVdsControllerPort * This, VDS_PORT_PROP * pPortProp);
	HRESULT(STDMETHODCALLTYPE * GetController) (IVdsControllerPort * This, IVdsController ** ppController);
	HRESULT(STDMETHODCALLTYPE * QueryAssociatedLuns) (IVdsControllerPort * This, IEnumVdsObject ** ppEnum);
	HRESULT(STDMETHODCALLTYPE * Reset) (IVdsControllerPort * This);
	HRESULT(STDMETHODCALLTYPE * SetStatus) (IVdsControllerPort * This, VDS_PORT_STATUS status);
	END_INTERFACE
}  IVdsControllerPortVtbl;
interface IVdsControllerPort
{
	CONST_VTBL struct IVdsControllerPortVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IVdsControllerPort_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IVdsControllerPort_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IVdsControllerPort_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IVdsControllerPort_GetProperties(This,pPortProp) ( (This)->lpVtbl -> GetProperties(This,pPortProp) )
#define IVdsControllerPort_GetController(This,ppController) ( (This)->lpVtbl -> GetController(This,ppController) )
#define IVdsControllerPort_QueryAssociatedLuns(This,ppEnum) ( (This)->lpVtbl -> QueryAssociatedLuns(This,ppEnum) )
#define IVdsControllerPort_Reset(This) ( (This)->lpVtbl -> Reset(This) )
#define IVdsControllerPort_SetStatus(This,status) ( (This)->lpVtbl -> SetStatus(This,status) )
#endif
#endif
#ifndef __IVdsController_INTERFACE_DEFINED__
#define __IVdsController_INTERFACE_DEFINED__
extern const IID IID_IVdsController;
typedef struct IVdsControllerVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IVdsController * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IVdsController * This);
	ULONG(STDMETHODCALLTYPE * Release) (IVdsController * This);
	HRESULT(STDMETHODCALLTYPE * GetProperties) (IVdsController * This, VDS_CONTROLLER_PROP * pControllerProp);
	HRESULT(STDMETHODCALLTYPE * GetSubSystem) (IVdsController * This, IVdsSubSystem ** ppSubSystem);
	HRESULT(STDMETHODCALLTYPE * GetPortProperties) (IVdsController * This, SHORT sPortNumber, VDS_PORT_PROP * pPortProp);
	HRESULT(STDMETHODCALLTYPE * FlushCache) (IVdsController * This);
	HRESULT(STDMETHODCALLTYPE * InvalidateCache) (IVdsController * This);
	HRESULT(STDMETHODCALLTYPE * Reset) (IVdsController * This);
	HRESULT(STDMETHODCALLTYPE * QueryAssociatedLuns) (IVdsController * This, IEnumVdsObject ** ppEnum);
	HRESULT(STDMETHODCALLTYPE * SetStatus) (IVdsController * This, VDS_CONTROLLER_STATUS status);
	END_INTERFACE
}  IVdsControllerVtbl;
interface IVdsController
{
	CONST_VTBL struct IVdsControllerVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IVdsController_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IVdsController_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IVdsController_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IVdsController_GetProperties(This,pControllerProp) ( (This)->lpVtbl -> GetProperties(This,pControllerProp) )
#define IVdsController_GetSubSystem(This,ppSubSystem) ( (This)->lpVtbl -> GetSubSystem(This,ppSubSystem) )
#define IVdsController_GetPortProperties(This,sPortNumber,pPortProp) ( (This)->lpVtbl -> GetPortProperties(This,sPortNumber,pPortProp) )
#define IVdsController_FlushCache(This) ( (This)->lpVtbl -> FlushCache(This) )
#define IVdsController_InvalidateCache(This) ( (This)->lpVtbl -> InvalidateCache(This) )
#define IVdsController_Reset(This) ( (This)->lpVtbl -> Reset(This) )
#define IVdsController_QueryAssociatedLuns(This,ppEnum) ( (This)->lpVtbl -> QueryAssociatedLuns(This,ppEnum) )
#define IVdsController_SetStatus(This,status) ( (This)->lpVtbl -> SetStatus(This,status) )
#endif
#endif
#ifndef __IVdsControllerControllerPort_INTERFACE_DEFINED__
#define __IVdsControllerControllerPort_INTERFACE_DEFINED__
extern const IID IID_IVdsControllerControllerPort;
typedef struct IVdsControllerControllerPortVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IVdsControllerControllerPort * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IVdsControllerControllerPort * This);
	ULONG(STDMETHODCALLTYPE * Release) (IVdsControllerControllerPort * This);
	HRESULT(STDMETHODCALLTYPE * QueryControllerPorts) (IVdsControllerControllerPort * This, IEnumVdsObject ** ppEnum);
	END_INTERFACE
}  IVdsControllerControllerPortVtbl;
interface IVdsControllerControllerPort
{
	CONST_VTBL struct IVdsControllerControllerPortVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IVdsControllerControllerPort_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IVdsControllerControllerPort_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IVdsControllerControllerPort_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IVdsControllerControllerPort_QueryControllerPorts(This,ppEnum) ( (This)->lpVtbl -> QueryControllerPorts(This,ppEnum) )
#endif
#endif
#ifndef __IVdsDrive_INTERFACE_DEFINED__
#define __IVdsDrive_INTERFACE_DEFINED__
extern const IID IID_IVdsDrive;
typedef struct IVdsDriveVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IVdsDrive * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IVdsDrive * This);
	ULONG(STDMETHODCALLTYPE * Release) (IVdsDrive * This);
	HRESULT(STDMETHODCALLTYPE * GetProperties) (IVdsDrive * This, VDS_DRIVE_PROP * pDriveProp);
	HRESULT(STDMETHODCALLTYPE * GetSubSystem) (IVdsDrive * This, IVdsSubSystem ** ppSubSystem);
	HRESULT(STDMETHODCALLTYPE * QueryExtents) (IVdsDrive * This, VDS_DRIVE_EXTENT ** ppExtentArray, LONG * plNumberOfExtents);
	HRESULT(STDMETHODCALLTYPE * SetFlags) (IVdsDrive * This, ULONG ulFlags);
	HRESULT(STDMETHODCALLTYPE * ClearFlags) (IVdsDrive * This, ULONG ulFlags);
	HRESULT(STDMETHODCALLTYPE * SetStatus) (IVdsDrive * This, VDS_DRIVE_STATUS status);
	END_INTERFACE
}  IVdsDriveVtbl;
interface IVdsDrive
{
	CONST_VTBL struct IVdsDriveVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IVdsDrive_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IVdsDrive_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IVdsDrive_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IVdsDrive_GetProperties(This,pDriveProp) ( (This)->lpVtbl -> GetProperties(This,pDriveProp) )
#define IVdsDrive_GetSubSystem(This,ppSubSystem) ( (This)->lpVtbl -> GetSubSystem(This,ppSubSystem) )
#define IVdsDrive_QueryExtents(This,ppExtentArray,plNumberOfExtents) ( (This)->lpVtbl -> QueryExtents(This,ppExtentArray,plNumberOfExtents) )
#define IVdsDrive_SetFlags(This,ulFlags) ( (This)->lpVtbl -> SetFlags(This,ulFlags) )
#define IVdsDrive_ClearFlags(This,ulFlags) ( (This)->lpVtbl -> ClearFlags(This,ulFlags) )
#define IVdsDrive_SetStatus(This,status) ( (This)->lpVtbl -> SetStatus(This,status) )
#endif
#endif
#ifndef __IVdsDrive2_INTERFACE_DEFINED__
#define __IVdsDrive2_INTERFACE_DEFINED__
extern const IID IID_IVdsDrive2;
typedef struct IVdsDrive2Vtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IVdsDrive2 * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IVdsDrive2 * This);
	ULONG(STDMETHODCALLTYPE * Release) (IVdsDrive2 * This);
	HRESULT(STDMETHODCALLTYPE * GetProperties2) (IVdsDrive2 * This, VDS_DRIVE_PROP2 * pDriveProp2);
	END_INTERFACE
}  IVdsDrive2Vtbl;
interface IVdsDrive2
{
	CONST_VTBL struct IVdsDrive2Vtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IVdsDrive2_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IVdsDrive2_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IVdsDrive2_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IVdsDrive2_GetProperties2(This,pDriveProp2) ( (This)->lpVtbl -> GetProperties2(This,pDriveProp2) )
#endif
#endif
#ifndef __IVdsLun_INTERFACE_DEFINED__
#define __IVdsLun_INTERFACE_DEFINED__
extern const IID IID_IVdsLun;
typedef struct IVdsLunVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IVdsLun * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IVdsLun * This);
	ULONG(STDMETHODCALLTYPE * Release) (IVdsLun * This);
	HRESULT(STDMETHODCALLTYPE * GetProperties) (IVdsLun * This, VDS_LUN_PROP * pLunProp);
	HRESULT(STDMETHODCALLTYPE * GetSubSystem) (IVdsLun * This, IVdsSubSystem ** ppSubSystem);
	HRESULT(STDMETHODCALLTYPE * GetIdentificationData) (IVdsLun * This, VDS_LUN_INFORMATION * pLunInfo);
	HRESULT(STDMETHODCALLTYPE * QueryActiveControllers) (IVdsLun * This, IEnumVdsObject ** ppEnum);
	HRESULT(STDMETHODCALLTYPE * Extend) (IVdsLun * This, ULONGLONG ullNumberOfBytesToAdd, VDS_OBJECT_ID * pDriveIdArray, LONG lNumberOfDrives, IVdsAsync ** ppAsync);
	HRESULT(STDMETHODCALLTYPE * Shrink) (IVdsLun * This, ULONGLONG ullNumberOfBytesToRemove, IVdsAsync ** ppAsync);
	HRESULT(STDMETHODCALLTYPE * QueryPlexes) (IVdsLun * This, IEnumVdsObject ** ppEnum);
	HRESULT(STDMETHODCALLTYPE * AddPlex) (IVdsLun * This, VDS_OBJECT_ID lunId, IVdsAsync ** ppAsync);
	HRESULT(STDMETHODCALLTYPE * RemovePlex) (IVdsLun * This, VDS_OBJECT_ID plexId, IVdsAsync ** ppAsync);
	HRESULT(STDMETHODCALLTYPE * Recover) (IVdsLun * This, IVdsAsync ** ppAsync);
	HRESULT(STDMETHODCALLTYPE * SetMask) (IVdsLun * This, LPWSTR pwszUnmaskingList);
	HRESULT(STDMETHODCALLTYPE * Delete) (IVdsLun * This);
	HRESULT(STDMETHODCALLTYPE * AssociateControllers) (IVdsLun * This, VDS_OBJECT_ID * pActiveControllerIdArray, LONG lNumberOfActiveControllers, VDS_OBJECT_ID * pInactiveControllerIdArray, LONG lNumberOfInactiveControllers);
	HRESULT(STDMETHODCALLTYPE * QueryHints) (IVdsLun * This, VDS_HINTS * pHints);
	HRESULT(STDMETHODCALLTYPE * ApplyHints) (IVdsLun * This, VDS_HINTS * pHints);
	HRESULT(STDMETHODCALLTYPE * SetStatus) (IVdsLun * This, VDS_LUN_STATUS status);
	HRESULT(STDMETHODCALLTYPE * QueryMaxLunExtendSize) (IVdsLun * This, VDS_OBJECT_ID * pDriveIdArray, LONG lNumberOfDrives, ULONGLONG * pullMaxBytesToBeAdded);
	END_INTERFACE
}  IVdsLunVtbl;
interface IVdsLun
{
	CONST_VTBL struct IVdsLunVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IVdsLun_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IVdsLun_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IVdsLun_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IVdsLun_GetProperties(This,pLunProp) ( (This)->lpVtbl -> GetProperties(This,pLunProp) )
#define IVdsLun_GetSubSystem(This,ppSubSystem) ( (This)->lpVtbl -> GetSubSystem(This,ppSubSystem) )
#define IVdsLun_GetIdentificationData(This,pLunInfo) ( (This)->lpVtbl -> GetIdentificationData(This,pLunInfo) )
#define IVdsLun_QueryActiveControllers(This,ppEnum) ( (This)->lpVtbl -> QueryActiveControllers(This,ppEnum) )
#define IVdsLun_Extend(This,ullNumberOfBytesToAdd,pDriveIdArray,lNumberOfDrives,ppAsync) ( (This)->lpVtbl -> Extend(This,ullNumberOfBytesToAdd,pDriveIdArray,lNumberOfDrives,ppAsync) )
#define IVdsLun_Shrink(This,ullNumberOfBytesToRemove,ppAsync) ( (This)->lpVtbl -> Shrink(This,ullNumberOfBytesToRemove,ppAsync) )
#define IVdsLun_QueryPlexes(This,ppEnum) ( (This)->lpVtbl -> QueryPlexes(This,ppEnum) )
#define IVdsLun_AddPlex(This,lunId,ppAsync) ( (This)->lpVtbl -> AddPlex(This,lunId,ppAsync) )
#define IVdsLun_RemovePlex(This,plexId,ppAsync) ( (This)->lpVtbl -> RemovePlex(This,plexId,ppAsync) )
#define IVdsLun_Recover(This,ppAsync) ( (This)->lpVtbl -> Recover(This,ppAsync) )
#define IVdsLun_SetMask(This,pwszUnmaskingList) ( (This)->lpVtbl -> SetMask(This,pwszUnmaskingList) )
#define IVdsLun_Delete(This) ( (This)->lpVtbl -> Delete(This) )
#define IVdsLun_AssociateControllers(This,pActiveControllerIdArray,lNumberOfActiveControllers,pInactiveControllerIdArray,lNumberOfInactiveControllers) ( (This)->lpVtbl -> AssociateControllers(This,pActiveControllerIdArray,lNumberOfActiveControllers,pInactiveControllerIdArray,lNumberOfInactiveControllers) )
#define IVdsLun_QueryHints(This,pHints) ( (This)->lpVtbl -> QueryHints(This,pHints) )
#define IVdsLun_ApplyHints(This,pHints) ( (This)->lpVtbl -> ApplyHints(This,pHints) )
#define IVdsLun_SetStatus(This,status) ( (This)->lpVtbl -> SetStatus(This,status) )
#define IVdsLun_QueryMaxLunExtendSize(This,pDriveIdArray,lNumberOfDrives,pullMaxBytesToBeAdded) ( (This)->lpVtbl -> QueryMaxLunExtendSize(This,pDriveIdArray,lNumberOfDrives,pullMaxBytesToBeAdded) )
#endif
#endif
#ifndef __IVdsLun2_INTERFACE_DEFINED__
#define __IVdsLun2_INTERFACE_DEFINED__
extern const IID IID_IVdsLun2;
typedef struct IVdsLun2Vtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IVdsLun2 * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IVdsLun2 * This);
	ULONG(STDMETHODCALLTYPE * Release) (IVdsLun2 * This);
	HRESULT(STDMETHODCALLTYPE * QueryHints2) (IVdsLun2 * This, VDS_HINTS2 * pHints2);
	HRESULT(STDMETHODCALLTYPE * ApplyHints2) (IVdsLun2 * This, VDS_HINTS2 * pHints2);
	END_INTERFACE
}  IVdsLun2Vtbl;
interface IVdsLun2
{
	CONST_VTBL struct IVdsLun2Vtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IVdsLun2_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IVdsLun2_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IVdsLun2_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IVdsLun2_QueryHints2(This,pHints2) ( (This)->lpVtbl -> QueryHints2(This,pHints2) )
#define IVdsLun2_ApplyHints2(This,pHints2) ( (This)->lpVtbl -> ApplyHints2(This,pHints2) )
#endif
#endif
#ifndef __IVdsLunNaming_INTERFACE_DEFINED__
#define __IVdsLunNaming_INTERFACE_DEFINED__
extern const IID IID_IVdsLunNaming;
typedef struct IVdsLunNamingVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IVdsLunNaming * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IVdsLunNaming * This);
	ULONG(STDMETHODCALLTYPE * Release) (IVdsLunNaming * This);
	HRESULT(STDMETHODCALLTYPE * SetFriendlyName) (IVdsLunNaming * This, LPWSTR pwszFriendlyName);
	END_INTERFACE
}  IVdsLunNamingVtbl;
interface IVdsLunNaming
{
	CONST_VTBL struct IVdsLunNamingVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IVdsLunNaming_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IVdsLunNaming_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IVdsLunNaming_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IVdsLunNaming_SetFriendlyName(This,pwszFriendlyName) ( (This)->lpVtbl -> SetFriendlyName(This,pwszFriendlyName) )
#endif
#endif
#ifndef __IVdsLunNumber_INTERFACE_DEFINED__
#define __IVdsLunNumber_INTERFACE_DEFINED__
extern const IID IID_IVdsLunNumber;
typedef struct IVdsLunNumberVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IVdsLunNumber * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IVdsLunNumber * This);
	ULONG(STDMETHODCALLTYPE * Release) (IVdsLunNumber * This);
	HRESULT(STDMETHODCALLTYPE * GetLunNumber) (IVdsLunNumber * This, ULONG * pulLunNumber);
	END_INTERFACE
}  IVdsLunNumberVtbl;
interface IVdsLunNumber
{
	CONST_VTBL struct IVdsLunNumberVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IVdsLunNumber_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IVdsLunNumber_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IVdsLunNumber_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IVdsLunNumber_GetLunNumber(This,pulLunNumber) ( (This)->lpVtbl -> GetLunNumber(This,pulLunNumber) )
#endif
#endif
#ifndef __IVdsLunControllerPorts_INTERFACE_DEFINED__
#define __IVdsLunControllerPorts_INTERFACE_DEFINED__
extern const IID IID_IVdsLunControllerPorts;
typedef struct IVdsLunControllerPortsVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IVdsLunControllerPorts * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IVdsLunControllerPorts * This);
	ULONG(STDMETHODCALLTYPE * Release) (IVdsLunControllerPorts * This);
	HRESULT(STDMETHODCALLTYPE * AssociateControllerPorts) (IVdsLunControllerPorts * This, VDS_OBJECT_ID * pActiveControllerPortIdArray, LONG lNumberOfActiveControllerPorts, VDS_OBJECT_ID * pInactiveControllerPortIdArray, LONG lNumberOfInactiveControllerPorts);
	HRESULT(STDMETHODCALLTYPE * QueryActiveControllerPorts) (IVdsLunControllerPorts * This, IEnumVdsObject ** ppEnum);
	END_INTERFACE
}  IVdsLunControllerPortsVtbl;
interface IVdsLunControllerPorts
{
	CONST_VTBL struct IVdsLunControllerPortsVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IVdsLunControllerPorts_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IVdsLunControllerPorts_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IVdsLunControllerPorts_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IVdsLunControllerPorts_AssociateControllerPorts(This,pActiveControllerPortIdArray,lNumberOfActiveControllerPorts,pInactiveControllerPortIdArray,lNumberOfInactiveControllerPorts) ( (This)->lpVtbl -> AssociateControllerPorts(This,pActiveControllerPortIdArray,lNumberOfActiveControllerPorts,pInactiveControllerPortIdArray,lNumberOfInactiveControllerPorts) )
#define IVdsLunControllerPorts_QueryActiveControllerPorts(This,ppEnum) ( (This)->lpVtbl -> QueryActiveControllerPorts(This,ppEnum) )
#endif
#endif
#ifndef __IVdsLunMpio_INTERFACE_DEFINED__
#define __IVdsLunMpio_INTERFACE_DEFINED__
extern const IID IID_IVdsLunMpio;
typedef struct IVdsLunMpioVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IVdsLunMpio * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IVdsLunMpio * This);
	ULONG(STDMETHODCALLTYPE * Release) (IVdsLunMpio * This);
	HRESULT(STDMETHODCALLTYPE * GetPathInfo) (IVdsLunMpio * This, VDS_PATH_INFO ** ppPaths, LONG * plNumberOfPaths);
	HRESULT(STDMETHODCALLTYPE * GetLoadBalancePolicy) (IVdsLunMpio * This, VDS_LOADBALANCE_POLICY_ENUM * pPolicy, VDS_PATH_POLICY ** ppPaths, LONG * plNumberOfPaths);
	HRESULT(STDMETHODCALLTYPE * SetLoadBalancePolicy) (IVdsLunMpio * This, VDS_LOADBALANCE_POLICY_ENUM policy, VDS_PATH_POLICY * pPaths, LONG lNumberOfPaths);
	HRESULT(STDMETHODCALLTYPE * GetSupportedLbPolicies) (IVdsLunMpio * This, ULONG * pulLbFlags);
	END_INTERFACE
}  IVdsLunMpioVtbl;
interface IVdsLunMpio
{
	CONST_VTBL struct IVdsLunMpioVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IVdsLunMpio_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IVdsLunMpio_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IVdsLunMpio_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IVdsLunMpio_GetPathInfo(This,ppPaths,plNumberOfPaths) ( (This)->lpVtbl -> GetPathInfo(This,ppPaths,plNumberOfPaths) )
#define IVdsLunMpio_GetLoadBalancePolicy(This,pPolicy,ppPaths,plNumberOfPaths) ( (This)->lpVtbl -> GetLoadBalancePolicy(This,pPolicy,ppPaths,plNumberOfPaths) )
#define IVdsLunMpio_SetLoadBalancePolicy(This,policy,pPaths,lNumberOfPaths) ( (This)->lpVtbl -> SetLoadBalancePolicy(This,policy,pPaths,lNumberOfPaths) )
#define IVdsLunMpio_GetSupportedLbPolicies(This,pulLbFlags) ( (This)->lpVtbl -> GetSupportedLbPolicies(This,pulLbFlags) )
#endif
#endif
#ifndef __IVdsLunIscsi_INTERFACE_DEFINED__
#define __IVdsLunIscsi_INTERFACE_DEFINED__
extern const IID IID_IVdsLunIscsi;
typedef struct IVdsLunIscsiVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IVdsLunIscsi * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IVdsLunIscsi * This);
	ULONG(STDMETHODCALLTYPE * Release) (IVdsLunIscsi * This);
	HRESULT(STDMETHODCALLTYPE * AssociateTargets) (IVdsLunIscsi * This, VDS_OBJECT_ID * pTargetIdArray, LONG lNumberOfTargets);
	HRESULT(STDMETHODCALLTYPE * QueryAssociatedTargets) (IVdsLunIscsi * This, IEnumVdsObject ** ppEnum);
	END_INTERFACE
}  IVdsLunIscsiVtbl;
interface IVdsLunIscsi
{
	CONST_VTBL struct IVdsLunIscsiVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IVdsLunIscsi_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IVdsLunIscsi_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IVdsLunIscsi_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IVdsLunIscsi_AssociateTargets(This,pTargetIdArray,lNumberOfTargets) ( (This)->lpVtbl -> AssociateTargets(This,pTargetIdArray,lNumberOfTargets) )
#define IVdsLunIscsi_QueryAssociatedTargets(This,ppEnum) ( (This)->lpVtbl -> QueryAssociatedTargets(This,ppEnum) )
#endif
#endif
#ifndef __IVdsLunPlex_INTERFACE_DEFINED__
#define __IVdsLunPlex_INTERFACE_DEFINED__
extern const IID IID_IVdsLunPlex;
typedef struct IVdsLunPlexVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IVdsLunPlex * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IVdsLunPlex * This);
	ULONG(STDMETHODCALLTYPE * Release) (IVdsLunPlex * This);
	HRESULT(STDMETHODCALLTYPE * GetProperties) (IVdsLunPlex * This, VDS_LUN_PLEX_PROP * pPlexProp);
	HRESULT(STDMETHODCALLTYPE * GetLun) (IVdsLunPlex * This, IVdsLun ** ppLun);
	HRESULT(STDMETHODCALLTYPE * QueryExtents) (IVdsLunPlex * This, VDS_DRIVE_EXTENT ** ppExtentArray, LONG * plNumberOfExtents);
	HRESULT(STDMETHODCALLTYPE * QueryHints) (IVdsLunPlex * This, VDS_HINTS * pHints);
	HRESULT(STDMETHODCALLTYPE * ApplyHints) (IVdsLunPlex * This, VDS_HINTS * pHints);
	END_INTERFACE
}  IVdsLunPlexVtbl;
interface IVdsLunPlex
{
	CONST_VTBL struct IVdsLunPlexVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IVdsLunPlex_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IVdsLunPlex_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IVdsLunPlex_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IVdsLunPlex_GetProperties(This,pPlexProp) ( (This)->lpVtbl -> GetProperties(This,pPlexProp) )
#define IVdsLunPlex_GetLun(This,ppLun) ( (This)->lpVtbl -> GetLun(This,ppLun) )
#define IVdsLunPlex_QueryExtents(This,ppExtentArray,plNumberOfExtents) ( (This)->lpVtbl -> QueryExtents(This,ppExtentArray,plNumberOfExtents) )
#define IVdsLunPlex_QueryHints(This,pHints) ( (This)->lpVtbl -> QueryHints(This,pHints) )
#define IVdsLunPlex_ApplyHints(This,pHints) ( (This)->lpVtbl -> ApplyHints(This,pHints) )
#endif
#endif
#ifndef __IVdsIscsiPortal_INTERFACE_DEFINED__
#define __IVdsIscsiPortal_INTERFACE_DEFINED__
extern const IID IID_IVdsIscsiPortal;
typedef struct IVdsIscsiPortalVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IVdsIscsiPortal * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IVdsIscsiPortal * This);
	ULONG(STDMETHODCALLTYPE * Release) (IVdsIscsiPortal * This);
	HRESULT(STDMETHODCALLTYPE * GetProperties) (IVdsIscsiPortal * This, VDS_ISCSI_PORTAL_PROP * pPortalProp);
	HRESULT(STDMETHODCALLTYPE * GetSubSystem) (IVdsIscsiPortal * This, IVdsSubSystem ** ppSubSystem);
	HRESULT(STDMETHODCALLTYPE * QueryAssociatedPortalGroups) (IVdsIscsiPortal * This, IEnumVdsObject ** ppEnum);
	HRESULT(STDMETHODCALLTYPE * SetStatus) (IVdsIscsiPortal * This, VDS_ISCSI_PORTAL_STATUS status);
	HRESULT(STDMETHODCALLTYPE * SetIpsecTunnelAddress) (IVdsIscsiPortal * This, VDS_IPADDRESS * pTunnelAddress, VDS_IPADDRESS * pDestinationAddress);
	HRESULT(STDMETHODCALLTYPE * GetIpsecSecurity) (IVdsIscsiPortal * This, VDS_IPADDRESS * pInitiatorPortalAddress, ULONGLONG * pullSecurityFlags);
	HRESULT(STDMETHODCALLTYPE * SetIpsecSecurity) (IVdsIscsiPortal * This, VDS_IPADDRESS * pInitiatorPortalAddress, ULONGLONG ullSecurityFlags, VDS_ISCSI_IPSEC_KEY * pIpsecKey);
	END_INTERFACE
}  IVdsIscsiPortalVtbl;
interface IVdsIscsiPortal
{
	CONST_VTBL struct IVdsIscsiPortalVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IVdsIscsiPortal_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IVdsIscsiPortal_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IVdsIscsiPortal_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IVdsIscsiPortal_GetProperties(This,pPortalProp) ( (This)->lpVtbl -> GetProperties(This,pPortalProp) )
#define IVdsIscsiPortal_GetSubSystem(This,ppSubSystem) ( (This)->lpVtbl -> GetSubSystem(This,ppSubSystem) )
#define IVdsIscsiPortal_QueryAssociatedPortalGroups(This,ppEnum) ( (This)->lpVtbl -> QueryAssociatedPortalGroups(This,ppEnum) )
#define IVdsIscsiPortal_SetStatus(This,status) ( (This)->lpVtbl -> SetStatus(This,status) )
#define IVdsIscsiPortal_SetIpsecTunnelAddress(This,pTunnelAddress,pDestinationAddress) ( (This)->lpVtbl -> SetIpsecTunnelAddress(This,pTunnelAddress,pDestinationAddress) )
#define IVdsIscsiPortal_GetIpsecSecurity(This,pInitiatorPortalAddress,pullSecurityFlags) ( (This)->lpVtbl -> GetIpsecSecurity(This,pInitiatorPortalAddress,pullSecurityFlags) )
#define IVdsIscsiPortal_SetIpsecSecurity(This,pInitiatorPortalAddress,ullSecurityFlags,pIpsecKey) ( (This)->lpVtbl -> SetIpsecSecurity(This,pInitiatorPortalAddress,ullSecurityFlags,pIpsecKey) )
#endif
#endif
#ifndef __IVdsIscsiTarget_INTERFACE_DEFINED__
#define __IVdsIscsiTarget_INTERFACE_DEFINED__
extern const IID IID_IVdsIscsiTarget;
typedef struct IVdsIscsiTargetVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IVdsIscsiTarget * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IVdsIscsiTarget * This);
	ULONG(STDMETHODCALLTYPE * Release) (IVdsIscsiTarget * This);
	HRESULT(STDMETHODCALLTYPE * GetProperties) (IVdsIscsiTarget * This, VDS_ISCSI_TARGET_PROP * pTargetProp);
	HRESULT(STDMETHODCALLTYPE * GetSubSystem) (IVdsIscsiTarget * This, IVdsSubSystem ** ppSubSystem);
	HRESULT(STDMETHODCALLTYPE * QueryPortalGroups) (IVdsIscsiTarget * This, IEnumVdsObject ** ppEnum);
	HRESULT(STDMETHODCALLTYPE * QueryAssociatedLuns) (IVdsIscsiTarget * This, IEnumVdsObject ** ppEnum);
	HRESULT(STDMETHODCALLTYPE * CreatePortalGroup) (IVdsIscsiTarget * This, IVdsAsync ** ppAsync);
	HRESULT(STDMETHODCALLTYPE * Delete) (IVdsIscsiTarget * This, IVdsAsync ** ppAsync);
	HRESULT(STDMETHODCALLTYPE * SetFriendlyName) (IVdsIscsiTarget * This, LPWSTR pwszFriendlyName);
	HRESULT(STDMETHODCALLTYPE * SetSharedSecret) (IVdsIscsiTarget * This, VDS_ISCSI_SHARED_SECRET * pTargetSharedSecret, LPWSTR pwszInitiatorName);
	HRESULT(STDMETHODCALLTYPE * RememberInitiatorSharedSecret) (IVdsIscsiTarget * This, LPWSTR pwszInitiatorName, VDS_ISCSI_SHARED_SECRET * pInitiatorSharedSecret);
	HRESULT(STDMETHODCALLTYPE * GetConnectedInitiators) (IVdsIscsiTarget * This, LPWSTR ** pppwszInitiatorList, LONG * plNumberOfInitiators);
	END_INTERFACE
}  IVdsIscsiTargetVtbl;
interface IVdsIscsiTarget
{
	CONST_VTBL struct IVdsIscsiTargetVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IVdsIscsiTarget_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IVdsIscsiTarget_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IVdsIscsiTarget_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IVdsIscsiTarget_GetProperties(This,pTargetProp) ( (This)->lpVtbl -> GetProperties(This,pTargetProp) )
#define IVdsIscsiTarget_GetSubSystem(This,ppSubSystem) ( (This)->lpVtbl -> GetSubSystem(This,ppSubSystem) )
#define IVdsIscsiTarget_QueryPortalGroups(This,ppEnum) ( (This)->lpVtbl -> QueryPortalGroups(This,ppEnum) )
#define IVdsIscsiTarget_QueryAssociatedLuns(This,ppEnum) ( (This)->lpVtbl -> QueryAssociatedLuns(This,ppEnum) )
#define IVdsIscsiTarget_CreatePortalGroup(This,ppAsync) ( (This)->lpVtbl -> CreatePortalGroup(This,ppAsync) )
#define IVdsIscsiTarget_Delete(This,ppAsync) ( (This)->lpVtbl -> Delete(This,ppAsync) )
#define IVdsIscsiTarget_SetFriendlyName(This,pwszFriendlyName) ( (This)->lpVtbl -> SetFriendlyName(This,pwszFriendlyName) )
#define IVdsIscsiTarget_SetSharedSecret(This,pTargetSharedSecret,pwszInitiatorName) ( (This)->lpVtbl -> SetSharedSecret(This,pTargetSharedSecret,pwszInitiatorName) )
#define IVdsIscsiTarget_RememberInitiatorSharedSecret(This,pwszInitiatorName,pInitiatorSharedSecret) ( (This)->lpVtbl -> RememberInitiatorSharedSecret(This,pwszInitiatorName,pInitiatorSharedSecret) )
#define IVdsIscsiTarget_GetConnectedInitiators(This,pppwszInitiatorList,plNumberOfInitiators) ( (This)->lpVtbl -> GetConnectedInitiators(This,pppwszInitiatorList,plNumberOfInitiators) )
#endif
#endif
#ifndef __IVdsIscsiPortalGroup_INTERFACE_DEFINED__
#define __IVdsIscsiPortalGroup_INTERFACE_DEFINED__
extern const IID IID_IVdsIscsiPortalGroup;
typedef struct IVdsIscsiPortalGroupVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IVdsIscsiPortalGroup * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IVdsIscsiPortalGroup * This);
	ULONG(STDMETHODCALLTYPE * Release) (IVdsIscsiPortalGroup * This);
	HRESULT(STDMETHODCALLTYPE * GetProperties) (IVdsIscsiPortalGroup * This, VDS_ISCSI_PORTALGROUP_PROP * pPortalGroupProp);
	HRESULT(STDMETHODCALLTYPE * GetTarget) (IVdsIscsiPortalGroup * This, IVdsIscsiTarget ** ppTarget);
	HRESULT(STDMETHODCALLTYPE * QueryAssociatedPortals) (IVdsIscsiPortalGroup * This, IEnumVdsObject ** ppEnum);
	HRESULT(STDMETHODCALLTYPE * AddPortal) (IVdsIscsiPortalGroup * This, VDS_OBJECT_ID portalId, IVdsAsync ** ppAsync);
	HRESULT(STDMETHODCALLTYPE * RemovePortal) (IVdsIscsiPortalGroup * This, VDS_OBJECT_ID portalId, IVdsAsync ** ppAsync);
	HRESULT(STDMETHODCALLTYPE * Delete) (IVdsIscsiPortalGroup * This, IVdsAsync ** ppAsync);
	END_INTERFACE
}  IVdsIscsiPortalGroupVtbl;
interface IVdsIscsiPortalGroup
{
	CONST_VTBL struct IVdsIscsiPortalGroupVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IVdsIscsiPortalGroup_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IVdsIscsiPortalGroup_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IVdsIscsiPortalGroup_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IVdsIscsiPortalGroup_GetProperties(This,pPortalGroupProp) ( (This)->lpVtbl -> GetProperties(This,pPortalGroupProp) )
#define IVdsIscsiPortalGroup_GetTarget(This,ppTarget) ( (This)->lpVtbl -> GetTarget(This,ppTarget) )
#define IVdsIscsiPortalGroup_QueryAssociatedPortals(This,ppEnum) ( (This)->lpVtbl -> QueryAssociatedPortals(This,ppEnum) )
#define IVdsIscsiPortalGroup_AddPortal(This,portalId,ppAsync) ( (This)->lpVtbl -> AddPortal(This,portalId,ppAsync) )
#define IVdsIscsiPortalGroup_RemovePortal(This,portalId,ppAsync) ( (This)->lpVtbl -> RemovePortal(This,portalId,ppAsync) )
#define IVdsIscsiPortalGroup_Delete(This,ppAsync) ( (This)->lpVtbl -> Delete(This,ppAsync) )
#endif
#endif
#ifndef __IVdsStoragePool_INTERFACE_DEFINED__
#define __IVdsStoragePool_INTERFACE_DEFINED__
extern const IID IID_IVdsStoragePool;
typedef struct IVdsStoragePoolVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IVdsStoragePool * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IVdsStoragePool * This);
	ULONG(STDMETHODCALLTYPE * Release) (IVdsStoragePool * This);
	HRESULT(STDMETHODCALLTYPE * GetProvider) (IVdsStoragePool * This, IVdsProvider ** ppProvider);
	HRESULT(STDMETHODCALLTYPE * GetProperties) (IVdsStoragePool * This, VDS_STORAGE_POOL_PROP * pStoragePoolProp);
	HRESULT(STDMETHODCALLTYPE * GetAttributes) (IVdsStoragePool * This, VDS_POOL_ATTRIBUTES * pStoragePoolAttributes);
	HRESULT(STDMETHODCALLTYPE * QueryDriveExtents) (IVdsStoragePool * This, VDS_STORAGE_POOL_DRIVE_EXTENT ** ppExtentArray, LONG * plNumberOfExtents);
	HRESULT(STDMETHODCALLTYPE * QueryAllocatedLuns) (IVdsStoragePool * This, IEnumVdsObject ** ppEnum);
	HRESULT(STDMETHODCALLTYPE * QueryAllocatedStoragePools) (IVdsStoragePool * This, IEnumVdsObject ** ppEnum);
	END_INTERFACE
}  IVdsStoragePoolVtbl;
interface IVdsStoragePool
{
	CONST_VTBL struct IVdsStoragePoolVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IVdsStoragePool_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IVdsStoragePool_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IVdsStoragePool_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IVdsStoragePool_GetProvider(This,ppProvider) ( (This)->lpVtbl -> GetProvider(This,ppProvider) )
#define IVdsStoragePool_GetProperties(This,pStoragePoolProp) ( (This)->lpVtbl -> GetProperties(This,pStoragePoolProp) )
#define IVdsStoragePool_GetAttributes(This,pStoragePoolAttributes) ( (This)->lpVtbl -> GetAttributes(This,pStoragePoolAttributes) )
#define IVdsStoragePool_QueryDriveExtents(This,ppExtentArray,plNumberOfExtents) ( (This)->lpVtbl -> QueryDriveExtents(This,ppExtentArray,plNumberOfExtents) )
#define IVdsStoragePool_QueryAllocatedLuns(This,ppEnum) ( (This)->lpVtbl -> QueryAllocatedLuns(This,ppEnum) )
#define IVdsStoragePool_QueryAllocatedStoragePools(This,ppEnum) ( (This)->lpVtbl -> QueryAllocatedStoragePools(This,ppEnum) )
#endif
#endif
#ifndef __IVdsMaintenance_INTERFACE_DEFINED__
#define __IVdsMaintenance_INTERFACE_DEFINED__
extern const IID IID_IVdsMaintenance;
typedef struct IVdsMaintenanceVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IVdsMaintenance * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IVdsMaintenance * This);
	ULONG(STDMETHODCALLTYPE * Release) (IVdsMaintenance * This);
	HRESULT(STDMETHODCALLTYPE * StartMaintenance) (IVdsMaintenance * This, VDS_MAINTENANCE_OPERATION operation);
	HRESULT(STDMETHODCALLTYPE * StopMaintenance) (IVdsMaintenance * This, VDS_MAINTENANCE_OPERATION operation);
	HRESULT(STDMETHODCALLTYPE * PulseMaintenance) (IVdsMaintenance * This, VDS_MAINTENANCE_OPERATION operation, ULONG ulCount);
	END_INTERFACE
}  IVdsMaintenanceVtbl;
interface IVdsMaintenance
{
	CONST_VTBL struct IVdsMaintenanceVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IVdsMaintenance_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IVdsMaintenance_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IVdsMaintenance_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IVdsMaintenance_StartMaintenance(This,operation) ( (This)->lpVtbl -> StartMaintenance(This,operation) )
#define IVdsMaintenance_StopMaintenance(This,operation) ( (This)->lpVtbl -> StopMaintenance(This,operation) )
#define IVdsMaintenance_PulseMaintenance(This,operation,ulCount) ( (This)->lpVtbl -> PulseMaintenance(This,operation,ulCount) )
#endif
#endif
extern RPC_IF_HANDLE __MIDL_itf_vdshwprv_0000_0033_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_vdshwprv_0000_0033_v0_0_s_ifspec;
#ifndef __IVdsHwProviderPrivate_INTERFACE_DEFINED__
#define __IVdsHwProviderPrivate_INTERFACE_DEFINED__
extern const IID IID_IVdsHwProviderPrivate;
typedef struct IVdsHwProviderPrivateVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IVdsHwProviderPrivate * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IVdsHwProviderPrivate * This);
	ULONG(STDMETHODCALLTYPE * Release) (IVdsHwProviderPrivate * This);
	HRESULT(STDMETHODCALLTYPE * QueryIfCreatedLun) (IVdsHwProviderPrivate * This, LPWSTR pwszDevicePath, VDS_LUN_INFORMATION * pVdsLunInformation, VDS_OBJECT_ID * pLunId);
	END_INTERFACE
}  IVdsHwProviderPrivateVtbl;
interface IVdsHwProviderPrivate
{
	CONST_VTBL struct IVdsHwProviderPrivateVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IVdsHwProviderPrivate_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IVdsHwProviderPrivate_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IVdsHwProviderPrivate_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IVdsHwProviderPrivate_QueryIfCreatedLun(This,pwszDevicePath,pVdsLunInformation,pLunId) ( (This)->lpVtbl -> QueryIfCreatedLun(This,pwszDevicePath,pVdsLunInformation,pLunId) )
#endif
#endif
#ifndef __IVdsHwProviderPrivateMpio_INTERFACE_DEFINED__
#define __IVdsHwProviderPrivateMpio_INTERFACE_DEFINED__
extern const IID IID_IVdsHwProviderPrivateMpio;
typedef struct IVdsHwProviderPrivateMpioVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IVdsHwProviderPrivateMpio * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IVdsHwProviderPrivateMpio * This);
	ULONG(STDMETHODCALLTYPE * Release) (IVdsHwProviderPrivateMpio * This);
	HRESULT(STDMETHODCALLTYPE * SetAllPathStatusesFromHbaPort) (IVdsHwProviderPrivateMpio * This, VDS_HBAPORT_PROP hbaPortProp, VDS_PATH_STATUS status);
	END_INTERFACE
}  IVdsHwProviderPrivateMpioVtbl;
interface IVdsHwProviderPrivateMpio
{
	CONST_VTBL struct IVdsHwProviderPrivateMpioVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IVdsHwProviderPrivateMpio_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IVdsHwProviderPrivateMpio_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IVdsHwProviderPrivateMpio_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IVdsHwProviderPrivateMpio_SetAllPathStatusesFromHbaPort(This,hbaPortProp,status) ( (This)->lpVtbl -> SetAllPathStatusesFromHbaPort(This,hbaPortProp,status) )
#endif
#endif
extern RPC_IF_HANDLE __MIDL_itf_vdshwprv_0000_0035_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_vdshwprv_0000_0035_v0_0_s_ifspec;
#ifndef __IVdsAdmin_INTERFACE_DEFINED__
#define __IVdsAdmin_INTERFACE_DEFINED__
extern const IID IID_IVdsAdmin;
typedef struct IVdsAdminVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IVdsAdmin * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IVdsAdmin * This);
	ULONG(STDMETHODCALLTYPE * Release) (IVdsAdmin * This);
	HRESULT(STDMETHODCALLTYPE * RegisterProvider) (IVdsAdmin * This, VDS_OBJECT_ID providerId, CLSID providerClsid, LPWSTR pwszName, VDS_PROVIDER_TYPE type, LPWSTR pwszMachineName, LPWSTR pwszVersion, GUID guidVersionId);
	HRESULT(STDMETHODCALLTYPE * UnregisterProvider) (IVdsAdmin * This, VDS_OBJECT_ID providerId);
	END_INTERFACE
}  IVdsAdminVtbl;
interface IVdsAdmin
{
	CONST_VTBL struct IVdsAdminVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IVdsAdmin_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IVdsAdmin_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IVdsAdmin_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IVdsAdmin_RegisterProvider(This,providerId,providerClsid,pwszName,type,pwszMachineName,pwszVersion,guidVersionId) ( (This)->lpVtbl -> RegisterProvider(This,providerId,providerClsid,pwszName,type,pwszMachineName,pwszVersion,guidVersionId) )
#define IVdsAdmin_UnregisterProvider(This,providerId) ( (This)->lpVtbl -> UnregisterProvider(This,providerId) )
#endif
#endif
#endif

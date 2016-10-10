/*+@@file@@----------------------------------------------------------------*//*!
 \file		vds.h
 \par Description 
            Extension and update of headers for PellesC compiler suite.
 \par Project: 
            PellesC Headers extension
 \date		Created  on Sat Sep 17 16:04:51 2016
 \date		Modified on Sat Sep 17 16:04:51 2016
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
#ifndef __vds_h__
#define __vds_h__
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
#ifndef __IVdsSwProvider_FWD_DEFINED__
#define __IVdsSwProvider_FWD_DEFINED__
typedef interface IVdsSwProvider IVdsSwProvider;
#endif
#ifndef __IVdsPack_FWD_DEFINED__
#define __IVdsPack_FWD_DEFINED__
typedef interface IVdsPack IVdsPack;
#endif
#ifndef __IVdsPack2_FWD_DEFINED__
#define __IVdsPack2_FWD_DEFINED__
typedef interface IVdsPack2 IVdsPack2;
#endif
#ifndef __IVdsDisk_FWD_DEFINED__
#define __IVdsDisk_FWD_DEFINED__
typedef interface IVdsDisk IVdsDisk;
#endif
#ifndef __IVdsDisk2_FWD_DEFINED__
#define __IVdsDisk2_FWD_DEFINED__
typedef interface IVdsDisk2 IVdsDisk2;
#endif
#ifndef __IVdsDiskOnline_FWD_DEFINED__
#define __IVdsDiskOnline_FWD_DEFINED__
typedef interface IVdsDiskOnline IVdsDiskOnline;
#endif
#ifndef __IVdsAdvancedDisk_FWD_DEFINED__
#define __IVdsAdvancedDisk_FWD_DEFINED__
typedef interface IVdsAdvancedDisk IVdsAdvancedDisk;
#endif
#ifndef __IVdsAdvancedDisk2_FWD_DEFINED__
#define __IVdsAdvancedDisk2_FWD_DEFINED__
typedef interface IVdsAdvancedDisk2 IVdsAdvancedDisk2;
#endif
#ifndef __IVdsCreatePartitionEx_FWD_DEFINED__
#define __IVdsCreatePartitionEx_FWD_DEFINED__
typedef interface IVdsCreatePartitionEx IVdsCreatePartitionEx;
#endif
#ifndef __IVdsRemovable_FWD_DEFINED__
#define __IVdsRemovable_FWD_DEFINED__
typedef interface IVdsRemovable IVdsRemovable;
#endif
#ifndef __IVdsVolume_FWD_DEFINED__
#define __IVdsVolume_FWD_DEFINED__
typedef interface IVdsVolume IVdsVolume;
#endif
#ifndef __IVdsVolume2_FWD_DEFINED__
#define __IVdsVolume2_FWD_DEFINED__
typedef interface IVdsVolume2 IVdsVolume2;
#endif
#ifndef __IVdsVolumeOnline_FWD_DEFINED__
#define __IVdsVolumeOnline_FWD_DEFINED__
typedef interface IVdsVolumeOnline IVdsVolumeOnline;
#endif
#ifndef __IVdsVolumePlex_FWD_DEFINED__
#define __IVdsVolumePlex_FWD_DEFINED__
typedef interface IVdsVolumePlex IVdsVolumePlex;
#endif
#ifndef __IVdsDisk3_FWD_DEFINED__
#define __IVdsDisk3_FWD_DEFINED__
typedef interface IVdsDisk3 IVdsDisk3;
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
#ifndef __IVdsVdProvider_FWD_DEFINED__
#define __IVdsVdProvider_FWD_DEFINED__
typedef interface IVdsVdProvider IVdsVdProvider;
#endif
#ifndef __IVdsVDisk_FWD_DEFINED__
#define __IVdsVDisk_FWD_DEFINED__
typedef interface IVdsVDisk IVdsVDisk;
#endif
#ifndef __IVdsOpenVDisk_FWD_DEFINED__
#define __IVdsOpenVDisk_FWD_DEFINED__
typedef interface IVdsOpenVDisk IVdsOpenVDisk;
#endif
#ifndef __IVdsServiceLoader_FWD_DEFINED__
#define __IVdsServiceLoader_FWD_DEFINED__
typedef interface IVdsServiceLoader IVdsServiceLoader;
#endif
#ifndef __IVdsService_FWD_DEFINED__
#define __IVdsService_FWD_DEFINED__
typedef interface IVdsService IVdsService;
#endif
#ifndef __IVdsServiceUninstallDisk_FWD_DEFINED__
#define __IVdsServiceUninstallDisk_FWD_DEFINED__
typedef interface IVdsServiceUninstallDisk IVdsServiceUninstallDisk;
#endif
#ifndef __IVdsServiceHba_FWD_DEFINED__
#define __IVdsServiceHba_FWD_DEFINED__
typedef interface IVdsServiceHba IVdsServiceHba;
#endif
#ifndef __IVdsServiceIscsi_FWD_DEFINED__
#define __IVdsServiceIscsi_FWD_DEFINED__
typedef interface IVdsServiceIscsi IVdsServiceIscsi;
#endif
#ifndef __IVdsServiceInitialization_FWD_DEFINED__
#define __IVdsServiceInitialization_FWD_DEFINED__
typedef interface IVdsServiceInitialization IVdsServiceInitialization;
#endif
#ifndef __IVdsHbaPort_FWD_DEFINED__
#define __IVdsHbaPort_FWD_DEFINED__
typedef interface IVdsHbaPort IVdsHbaPort;
#endif
#ifndef __IVdsIscsiInitiatorAdapter_FWD_DEFINED__
#define __IVdsIscsiInitiatorAdapter_FWD_DEFINED__
typedef interface IVdsIscsiInitiatorAdapter IVdsIscsiInitiatorAdapter;
#endif
#ifndef __IVdsIscsiInitiatorPortal_FWD_DEFINED__
#define __IVdsIscsiInitiatorPortal_FWD_DEFINED__
typedef interface IVdsIscsiInitiatorPortal IVdsIscsiInitiatorPortal;
#endif
#ifndef __IVdsDiskPartitionMF_FWD_DEFINED__
#define __IVdsDiskPartitionMF_FWD_DEFINED__
typedef interface IVdsDiskPartitionMF IVdsDiskPartitionMF;
#endif
#ifndef __IVdsVolumeMF_FWD_DEFINED__
#define __IVdsVolumeMF_FWD_DEFINED__
typedef interface IVdsVolumeMF IVdsVolumeMF;
#endif
#ifndef __IVdsVolumeMF2_FWD_DEFINED__
#define __IVdsVolumeMF2_FWD_DEFINED__
typedef interface IVdsVolumeMF2 IVdsVolumeMF2;
#endif
#ifndef __IVdsVolumeShrink_FWD_DEFINED__
#define __IVdsVolumeShrink_FWD_DEFINED__
typedef interface IVdsVolumeShrink IVdsVolumeShrink;
#endif
#ifndef __IVdsSubSystemImportTarget_FWD_DEFINED__
#define __IVdsSubSystemImportTarget_FWD_DEFINED__
typedef interface IVdsSubSystemImportTarget IVdsSubSystemImportTarget;
#endif
#ifndef __IVdsIscsiPortalLocal_FWD_DEFINED__
#define __IVdsIscsiPortalLocal_FWD_DEFINED__
typedef interface IVdsIscsiPortalLocal IVdsIscsiPortalLocal;
#endif
#ifndef __IVdsServiceSAN_FWD_DEFINED__
#define __IVdsServiceSAN_FWD_DEFINED__
typedef interface IVdsServiceSAN IVdsServiceSAN;
#endif
#ifndef __IVdsVolumeMF3_FWD_DEFINED__
#define __IVdsVolumeMF3_FWD_DEFINED__
typedef interface IVdsVolumeMF3 IVdsVolumeMF3;
#endif
#ifndef __IVdsDiskPartitionMF2_FWD_DEFINED__
#define __IVdsDiskPartitionMF2_FWD_DEFINED__
typedef interface IVdsDiskPartitionMF2 IVdsDiskPartitionMF2;
#endif
#include "oaidl.h"
#include "vdssys.h"
#include "vdserr.h"
#include "vdslun.h"
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
extern RPC_IF_HANDLE __MIDL_itf_vds_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_vds_0000_0000_v0_0_s_ifspec;
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
typedef enum _VDS_PACK_STATUS
{
	VDS_PS_UNKNOWN = 0,
	VDS_PS_ONLINE = 1,
	VDS_PS_OFFLINE = 4
} VDS_PACK_STATUS;
typedef enum _VDS_PACK_FLAG
{
	VDS_PKF_FOREIGN = 0x1,
	VDS_PKF_NOQUORUM = 0x2,
	VDS_PKF_POLICY = 0x4,
	VDS_PKF_CORRUPTED = 0x8,
	VDS_PKF_ONLINE_ERROR = 0x10
} VDS_PACK_FLAG;
typedef enum _VDS_DISK_STATUS
{
	VDS_DS_UNKNOWN = 0,
	VDS_DS_ONLINE = 1,
	VDS_DS_NOT_READY = 2,
	VDS_DS_NO_MEDIA = 3,
	VDS_DS_FAILED = 5,
	VDS_DS_MISSING = 6,
	VDS_DS_OFFLINE = 4
} VDS_DISK_STATUS;
typedef enum _VDS_PARTITION_STYLE
{
	VDS_PST_UNKNOWN = 0,
	VDS_PST_MBR = 1,
	VDS_PST_GPT = 2
} VDS_PARTITION_STYLE;
typedef enum _VDS_DISK_FLAG
{
	VDS_DF_AUDIO_CD = 0x1,
	VDS_DF_HOTSPARE = 0x2,
	VDS_DF_RESERVE_CAPABLE = 0x4,
	VDS_DF_MASKED = 0x8,
	VDS_DF_STYLE_CONVERTIBLE = 0x10,
	VDS_DF_CLUSTERED = 0x20,
	VDS_DF_READ_ONLY = 0x40,
	VDS_DF_SYSTEM_DISK = 0x80,
	VDS_DF_BOOT_DISK = 0x100,
	VDS_DF_PAGEFILE_DISK = 0x200,
	VDS_DF_HIBERNATIONFILE_DISK = 0x400,
	VDS_DF_CRASHDUMP_DISK = 0x800,
	VDS_DF_HAS_ARC_PATH = 0x1000,
	VDS_DF_DYNAMIC = 0x2000,
	VDS_DF_BOOT_FROM_DISK = 0x4000,
	VDS_DF_CURRENT_READ_ONLY = 0x8000
} VDS_DISK_FLAG;
typedef enum _VDS_PARTITION_FLAG
{
	VDS_PTF_SYSTEM = 0x1
} VDS_PARTITION_FLAG;
typedef enum _VDS_LUN_RESERVE_MODE
{
	VDS_LRM_NONE = 0,
	VDS_LRM_EXCLUSIVE_RW = 1,
	VDS_LRM_EXCLUSIVE_RO = 2,
	VDS_LRM_SHARED_RO = 3,
	VDS_LRM_SHARED_RW = 4
} VDS_LUN_RESERVE_MODE;
typedef enum _VDS_VOLUME_STATUS
{
	VDS_VS_UNKNOWN = 0,
	VDS_VS_ONLINE = 1,
	VDS_VS_NO_MEDIA = 3,
	VDS_VS_FAILED = 5,
	VDS_VS_OFFLINE = 4
} VDS_VOLUME_STATUS;
typedef enum _VDS_VOLUME_TYPE
{
	VDS_VT_UNKNOWN = 0,
	VDS_VT_SIMPLE = 10,
	VDS_VT_SPAN = 11,
	VDS_VT_STRIPE = 12,
	VDS_VT_MIRROR = 13,
	VDS_VT_PARITY = 14
} VDS_VOLUME_TYPE;
typedef enum _VDS_VOLUME_FLAG
{
	VDS_VF_SYSTEM_VOLUME = 0x1,
	VDS_VF_BOOT_VOLUME = 0x2,
	VDS_VF_ACTIVE = 0x4,
	VDS_VF_READONLY = 0x8,
	VDS_VF_HIDDEN = 0x10,
	VDS_VF_CAN_EXTEND = 0x20,
	VDS_VF_CAN_SHRINK = 0x40,
	VDS_VF_PAGEFILE = 0x80,
	VDS_VF_HIBERNATION = 0x100,
	VDS_VF_CRASHDUMP = 0x200,
	VDS_VF_INSTALLABLE = 0x400,
	VDS_VF_LBN_REMAP_ENABLED = 0x800,
	VDS_VF_FORMATTING = 0x1000,
	VDS_VF_NOT_FORMATTABLE = 0x2000,
	VDS_VF_NTFS_NOT_SUPPORTED = 0x4000,
	VDS_VF_FAT32_NOT_SUPPORTED = 0x8000,
	VDS_VF_FAT_NOT_SUPPORTED = 0x10000,
	VDS_VF_NO_DEFAULT_DRIVE_LETTER = 0x20000,
	VDS_VF_PERMANENTLY_DISMOUNTED = 0x40000,
	VDS_VF_PERMANENT_DISMOUNT_SUPPORTED = 0x80000,
	VDS_VF_SHADOW_COPY = 0x100000,
	VDS_VF_FVE_ENABLED = 0x200000,
	VDS_VF_DIRTY = 0x400000
} VDS_VOLUME_FLAG;
typedef enum _VDS_VOLUME_PLEX_TYPE
{
	VDS_VPT_UNKNOWN = 0,
	VDS_VPT_SIMPLE = VDS_VT_SIMPLE,
	VDS_VPT_SPAN = VDS_VT_SPAN,
	VDS_VPT_STRIPE = VDS_VT_STRIPE,
	VDS_VPT_PARITY = VDS_VT_PARITY
} VDS_VOLUME_PLEX_TYPE;
typedef enum _VDS_VOLUME_PLEX_STATUS
{
	VDS_VPS_UNKNOWN = 0,
	VDS_VPS_ONLINE = 1,
	VDS_VPS_NO_MEDIA = 3,
	VDS_VPS_FAILED = 5
} VDS_VOLUME_PLEX_STATUS;
typedef enum _VDS_DISK_EXTENT_TYPE
{
	VDS_DET_UNKNOWN = 0,
	VDS_DET_FREE = 1,
	VDS_DET_DATA = 2,
	VDS_DET_OEM = 3,
	VDS_DET_ESP = 4,
	VDS_DET_MSR = 5,
	VDS_DET_LDM = 6,
	VDS_DET_CLUSTER = 7,
	VDS_DET_UNUSABLE = 0x7fff
} VDS_DISK_EXTENT_TYPE;
typedef struct _VDS_PACK_PROP
{
	VDS_OBJECT_ID id;
	LPWSTR pwszName;
	VDS_PACK_STATUS status;
	ULONG ulFlags;
} VDS_PACK_PROP;
typedef struct _VDS_PACK_PROP *PVDS_PACK_PROP;
typedef struct _VDS_DISK_PROP
{
	VDS_OBJECT_ID id;
	VDS_DISK_STATUS status;
	VDS_LUN_RESERVE_MODE ReserveMode;
	VDS_HEALTH health;
	DWORD dwDeviceType;
	DWORD dwMediaType;
	ULONGLONG ullSize;
	ULONG ulBytesPerSector;
	ULONG ulSectorsPerTrack;
	ULONG ulTracksPerCylinder;
	ULONG ulFlags;
	VDS_STORAGE_BUS_TYPE BusType;
	VDS_PARTITION_STYLE PartitionStyle;
	union
	{
		DWORD dwSignature;
		GUID DiskGuid;
	};
	LPWSTR pwszDiskAddress;
	LPWSTR pwszName;
	LPWSTR pwszFriendlyName;
	LPWSTR pwszAdaptorName;
	LPWSTR pwszDevicePath;
} VDS_DISK_PROP;
typedef struct _VDS_DISK_PROP *PVDS_DISK_PROP;
typedef enum _VDS_DISK_OFFLINE_REASON
{
	VDSDiskOfflineReasonNone = 0,
	VDSDiskOfflineReasonPolicy = 1,
	VDSDiskOfflineReasonRedundantPath = 2,
	VDSDiskOfflineReasonSnapshot = 3,
	VDSDiskOfflineReasonCollision = 4
} VDS_DISK_OFFLINE_REASON;
typedef struct _VDS_DISK_PROP2
{
	VDS_OBJECT_ID id;
	VDS_DISK_STATUS status;
	VDS_DISK_OFFLINE_REASON OfflineReason;
	VDS_LUN_RESERVE_MODE ReserveMode;
	VDS_HEALTH health;
	DWORD dwDeviceType;
	DWORD dwMediaType;
	ULONGLONG ullSize;
	ULONG ulBytesPerSector;
	ULONG ulSectorsPerTrack;
	ULONG ulTracksPerCylinder;
	ULONG ulFlags;
	VDS_STORAGE_BUS_TYPE BusType;
	VDS_PARTITION_STYLE PartitionStyle;
	union
	{
		DWORD dwSignature;
		GUID DiskGuid;
	};
	LPWSTR pwszDiskAddress;
	LPWSTR pwszName;
	LPWSTR pwszFriendlyName;
	LPWSTR pwszAdaptorName;
	LPWSTR pwszDevicePath;
	LPWSTR pwszLocationPath;
} VDS_DISK_PROP2;
typedef struct _VDS_DISK_PROP2 *PVDS_DISK_PROP2;
typedef struct _VDS_VOLUME_PROP
{
	VDS_OBJECT_ID id;
	VDS_VOLUME_TYPE type;
	VDS_VOLUME_STATUS status;
	VDS_HEALTH health;
	VDS_TRANSITION_STATE TransitionState;
	ULONGLONG ullSize;
	ULONG ulFlags;
	VDS_FILE_SYSTEM_TYPE RecommendedFileSystemType;
	LPWSTR pwszName;
} VDS_VOLUME_PROP;
typedef struct _VDS_VOLUME_PROP *PVDS_VOLUME_PROP;
typedef struct _VDS_VOLUME_PROP2
{
	VDS_OBJECT_ID id;
	VDS_VOLUME_TYPE type;
	VDS_VOLUME_STATUS status;
	VDS_HEALTH health;
	VDS_TRANSITION_STATE TransitionState;
	ULONGLONG ullSize;
	ULONG ulFlags;
	VDS_FILE_SYSTEM_TYPE RecommendedFileSystemType;
	ULONG cbUniqueId;
	LPWSTR pwszName;
	BYTE *pUniqueId;
} VDS_VOLUME_PROP2;
typedef struct _VDS_VOLUME_PROP2 *PVDS_VOLUME_PROP2;
typedef struct _VDS_VOLUME_PLEX_PROP
{
	VDS_OBJECT_ID id;
	VDS_VOLUME_PLEX_TYPE type;
	VDS_VOLUME_PLEX_STATUS status;
	VDS_HEALTH health;
	VDS_TRANSITION_STATE TransitionState;
	ULONGLONG ullSize;
	ULONG ulStripeSize;
	ULONG ulNumberOfMembers;
} VDS_VOLUME_PLEX_PROP;
typedef struct _VDS_VOLUME_PLEX_PROP *PVDS_VOLUME_PLEX_PROP;
typedef struct _VDS_DISK_EXTENT
{
	VDS_OBJECT_ID diskId;
	VDS_DISK_EXTENT_TYPE type;
	ULONGLONG ullOffset;
	ULONGLONG ullSize;
	VDS_OBJECT_ID volumeId;
	VDS_OBJECT_ID plexId;
	ULONG memberIdx;
} VDS_DISK_EXTENT;
typedef struct _VDS_DISK_EXTENT *PVDS_DISK_EXTENT;
typedef struct _VDS_DISK_FREE_EXTENT
{
	VDS_OBJECT_ID diskId;
	ULONGLONG ullOffset;
	ULONGLONG ullSize;
} VDS_DISK_FREE_EXTENT;
typedef struct _VDS_DISK_FREE_EXTENT *PVDS_DISK_FREE_EXTENT;
typedef struct _VDS_INPUT_DISK
{
	VDS_OBJECT_ID diskId;
	ULONGLONG ullSize;
	VDS_OBJECT_ID plexId;
	ULONG memberIdx;
} VDS_INPUT_DISK;
#define GPT_PARTITION_NAME_LENGTH    36
typedef struct _VDS_PARTITION_INFO_GPT
{
	GUID partitionType;
	GUID partitionId;
	ULONGLONG attributes;
	WCHAR name[36];
} VDS_PARTITION_INFO_GPT;
typedef struct _VDS_PARTITION_INFO_MBR
{
	BYTE partitionType;
	BOOLEAN bootIndicator;
	BOOLEAN recognizedPartition;
	DWORD hiddenSectors;
} VDS_PARTITION_INFO_MBR;
typedef struct _VDS_PARTITION_PROP
{
	VDS_PARTITION_STYLE PartitionStyle;
	ULONG ulFlags;
	ULONG ulPartitionNumber;
	ULONGLONG ullOffset;
	ULONGLONG ullSize;
	union
	{
		VDS_PARTITION_INFO_MBR Mbr;
		VDS_PARTITION_INFO_GPT Gpt;
	};
} VDS_PARTITION_PROP;
typedef enum tag_VDS_PARTITION_STYLE
{
	VDS_PARTITION_STYLE_MBR = 0,
	VDS_PARTITION_STYLE_GPT = (VDS_PARTITION_STYLE_MBR + 1),
	VDS_PARTITION_STYLE_RAW = (VDS_PARTITION_STYLE_GPT + 1)
} __VDS_PARTITION_STYLE;
typedef struct _VDS_PARTITION_INFORMATION_EX
{
	__VDS_PARTITION_STYLE dwPartitionStyle;
	ULONGLONG ullStartingOffset;
	ULONGLONG ullPartitionLength;
	DWORD dwPartitionNumber;
	BOOLEAN bRewritePartition;
	union
	{
		VDS_PARTITION_INFO_MBR Mbr;
		VDS_PARTITION_INFO_GPT Gpt;
	};
} VDS_PARTITION_INFORMATION_EX;
typedef struct _CREATE_PARTITION_PARAMETERS
{
	VDS_PARTITION_STYLE style;
	union
	{
		struct
		{
			BYTE partitionType;
			BOOLEAN bootIndicator;
		} MbrPartInfo;
		struct
		{
			GUID partitionType;
			GUID partitionId;
			ULONGLONG attributes;
			WCHAR name[36];
		} GptPartInfo;
	};
} CREATE_PARTITION_PARAMETERS;
typedef struct _CHANGE_ATTRIBUTES_PARAMETERS
{
	VDS_PARTITION_STYLE style;
	union
	{
		struct
		{
			BOOLEAN bootIndicator;
		} MbrPartInfo;
		struct
		{
			ULONGLONG attributes;
		} GptPartInfo;
	};
} CHANGE_ATTRIBUTES_PARAMETERS;
typedef struct _CHANGE_PARTITION_TYPE_PARAMETERS
{
	VDS_PARTITION_STYLE style;
	union
	{
		struct
		{
			BYTE partitionType;
		} MbrPartInfo;
		struct
		{
			GUID partitionType;
		} GptPartInfo;
	};
} CHANGE_PARTITION_TYPE_PARAMETERS;
extern RPC_IF_HANDLE __MIDL_itf_vds_0000_0005_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_vds_0000_0005_v0_0_s_ifspec;
#ifndef __IVdsSwProvider_INTERFACE_DEFINED__
#define __IVdsSwProvider_INTERFACE_DEFINED__
extern const IID IID_IVdsSwProvider;
typedef struct IVdsSwProviderVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IVdsSwProvider * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IVdsSwProvider * This);
	ULONG(STDMETHODCALLTYPE * Release) (IVdsSwProvider * This);
	HRESULT(STDMETHODCALLTYPE * QueryPacks) (IVdsSwProvider * This, IEnumVdsObject ** ppEnum);
	HRESULT(STDMETHODCALLTYPE * CreatePack) (IVdsSwProvider * This, IVdsPack ** ppPack);
	END_INTERFACE
}  IVdsSwProviderVtbl;
interface IVdsSwProvider
{
	CONST_VTBL struct IVdsSwProviderVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IVdsSwProvider_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IVdsSwProvider_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IVdsSwProvider_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IVdsSwProvider_QueryPacks(This,ppEnum) ( (This)->lpVtbl -> QueryPacks(This,ppEnum) )
#define IVdsSwProvider_CreatePack(This,ppPack) ( (This)->lpVtbl -> CreatePack(This,ppPack) )
#endif
#endif
#ifndef __IVdsPack_INTERFACE_DEFINED__
#define __IVdsPack_INTERFACE_DEFINED__
extern const IID IID_IVdsPack;
typedef struct IVdsPackVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IVdsPack * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IVdsPack * This);
	ULONG(STDMETHODCALLTYPE * Release) (IVdsPack * This);
	HRESULT(STDMETHODCALLTYPE * GetProperties) (IVdsPack * This, VDS_PACK_PROP * pPackProp);
	HRESULT(STDMETHODCALLTYPE * GetProvider) (IVdsPack * This, IVdsProvider ** ppProvider);
	HRESULT(STDMETHODCALLTYPE * QueryVolumes) (IVdsPack * This, IEnumVdsObject ** ppEnum);
	HRESULT(STDMETHODCALLTYPE * QueryDisks) (IVdsPack * This, IEnumVdsObject ** ppEnum);
	HRESULT(STDMETHODCALLTYPE * CreateVolume) (IVdsPack * This, VDS_VOLUME_TYPE type, VDS_INPUT_DISK * pInputDiskArray, LONG lNumberOfDisks, ULONG ulStripeSize, IVdsAsync ** ppAsync);
	HRESULT(STDMETHODCALLTYPE * AddDisk) (IVdsPack * This, VDS_OBJECT_ID DiskId, VDS_PARTITION_STYLE PartitionStyle, BOOL bAsHotSpare);
	HRESULT(STDMETHODCALLTYPE * MigrateDisks) (IVdsPack * This, VDS_OBJECT_ID * pDiskArray, LONG lNumberOfDisks, VDS_OBJECT_ID TargetPack, BOOL bForce, BOOL bQueryOnly, HRESULT * pResults, BOOL * pbRebootNeeded);
	HRESULT(STDMETHODCALLTYPE * ReplaceDisk) (IVdsPack * This, VDS_OBJECT_ID OldDiskId, VDS_OBJECT_ID NewDiskId, IVdsAsync ** ppAsync);
	HRESULT(STDMETHODCALLTYPE * RemoveMissingDisk) (IVdsPack * This, VDS_OBJECT_ID DiskId);
	HRESULT(STDMETHODCALLTYPE * Recover) (IVdsPack * This, IVdsAsync ** ppAsync);
	END_INTERFACE
}  IVdsPackVtbl;
interface IVdsPack
{
	CONST_VTBL struct IVdsPackVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IVdsPack_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IVdsPack_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IVdsPack_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IVdsPack_GetProperties(This,pPackProp) ( (This)->lpVtbl -> GetProperties(This,pPackProp) )
#define IVdsPack_GetProvider(This,ppProvider) ( (This)->lpVtbl -> GetProvider(This,ppProvider) )
#define IVdsPack_QueryVolumes(This,ppEnum) ( (This)->lpVtbl -> QueryVolumes(This,ppEnum) )
#define IVdsPack_QueryDisks(This,ppEnum) ( (This)->lpVtbl -> QueryDisks(This,ppEnum) )
#define IVdsPack_CreateVolume(This,type,pInputDiskArray,lNumberOfDisks,ulStripeSize,ppAsync) ( (This)->lpVtbl -> CreateVolume(This,type,pInputDiskArray,lNumberOfDisks,ulStripeSize,ppAsync) )
#define IVdsPack_AddDisk(This,DiskId,PartitionStyle,bAsHotSpare) ( (This)->lpVtbl -> AddDisk(This,DiskId,PartitionStyle,bAsHotSpare) )
#define IVdsPack_MigrateDisks(This,pDiskArray,lNumberOfDisks,TargetPack,bForce,bQueryOnly,pResults,pbRebootNeeded) ( (This)->lpVtbl -> MigrateDisks(This,pDiskArray,lNumberOfDisks,TargetPack,bForce,bQueryOnly,pResults,pbRebootNeeded) )
#define IVdsPack_ReplaceDisk(This,OldDiskId,NewDiskId,ppAsync) ( (This)->lpVtbl -> ReplaceDisk(This,OldDiskId,NewDiskId,ppAsync) )
#define IVdsPack_RemoveMissingDisk(This,DiskId) ( (This)->lpVtbl -> RemoveMissingDisk(This,DiskId) )
#define IVdsPack_Recover(This,ppAsync) ( (This)->lpVtbl -> Recover(This,ppAsync) )
#endif
#endif
#ifndef __IVdsPack2_INTERFACE_DEFINED__
#define __IVdsPack2_INTERFACE_DEFINED__
extern const IID IID_IVdsPack2;
typedef struct IVdsPack2Vtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IVdsPack2 * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IVdsPack2 * This);
	ULONG(STDMETHODCALLTYPE * Release) (IVdsPack2 * This);
	HRESULT(STDMETHODCALLTYPE * CreateVolume2) (IVdsPack2 * This, VDS_VOLUME_TYPE type, VDS_INPUT_DISK * pInputDiskArray, LONG lNumberOfDisks, ULONG ulStripeSize, ULONG ulAlign, IVdsAsync ** ppAsync);
	END_INTERFACE
}  IVdsPack2Vtbl;
interface IVdsPack2
{
	CONST_VTBL struct IVdsPack2Vtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IVdsPack2_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IVdsPack2_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IVdsPack2_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IVdsPack2_CreateVolume2(This,type,pInputDiskArray,lNumberOfDisks,ulStripeSize,ulAlign,ppAsync) ( (This)->lpVtbl -> CreateVolume2(This,type,pInputDiskArray,lNumberOfDisks,ulStripeSize,ulAlign,ppAsync) )
#endif
#endif
#ifndef __IVdsDisk_INTERFACE_DEFINED__
#define __IVdsDisk_INTERFACE_DEFINED__
extern const IID IID_IVdsDisk;
typedef struct IVdsDiskVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IVdsDisk * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IVdsDisk * This);
	ULONG(STDMETHODCALLTYPE * Release) (IVdsDisk * This);
	HRESULT(STDMETHODCALLTYPE * GetProperties) (IVdsDisk * This, VDS_DISK_PROP * pDiskProperties);
	HRESULT(STDMETHODCALLTYPE * GetPack) (IVdsDisk * This, IVdsPack ** ppPack);
	HRESULT(STDMETHODCALLTYPE * GetIdentificationData) (IVdsDisk * This, VDS_LUN_INFORMATION * pLunInfo);
	HRESULT(STDMETHODCALLTYPE * QueryExtents) (IVdsDisk * This, VDS_DISK_EXTENT ** ppExtentArray, LONG * plNumberOfExtents);
	HRESULT(STDMETHODCALLTYPE * ConvertStyle) (IVdsDisk * This, VDS_PARTITION_STYLE NewStyle);
	HRESULT(STDMETHODCALLTYPE * SetFlags) (IVdsDisk * This, ULONG ulFlags);
	HRESULT(STDMETHODCALLTYPE * ClearFlags) (IVdsDisk * This, ULONG ulFlags);
	END_INTERFACE
}  IVdsDiskVtbl;
interface IVdsDisk
{
	CONST_VTBL struct IVdsDiskVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IVdsDisk_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IVdsDisk_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IVdsDisk_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IVdsDisk_GetProperties(This,pDiskProperties) ( (This)->lpVtbl -> GetProperties(This,pDiskProperties) )
#define IVdsDisk_GetPack(This,ppPack) ( (This)->lpVtbl -> GetPack(This,ppPack) )
#define IVdsDisk_GetIdentificationData(This,pLunInfo) ( (This)->lpVtbl -> GetIdentificationData(This,pLunInfo) )
#define IVdsDisk_QueryExtents(This,ppExtentArray,plNumberOfExtents) ( (This)->lpVtbl -> QueryExtents(This,ppExtentArray,plNumberOfExtents) )
#define IVdsDisk_ConvertStyle(This,NewStyle) ( (This)->lpVtbl -> ConvertStyle(This,NewStyle) )
#define IVdsDisk_SetFlags(This,ulFlags) ( (This)->lpVtbl -> SetFlags(This,ulFlags) )
#define IVdsDisk_ClearFlags(This,ulFlags) ( (This)->lpVtbl -> ClearFlags(This,ulFlags) )
#endif
#endif
#ifndef __IVdsDisk2_INTERFACE_DEFINED__
#define __IVdsDisk2_INTERFACE_DEFINED__
extern const IID IID_IVdsDisk2;
typedef struct IVdsDisk2Vtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IVdsDisk2 * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IVdsDisk2 * This);
	ULONG(STDMETHODCALLTYPE * Release) (IVdsDisk2 * This);
	HRESULT(STDMETHODCALLTYPE * SetSANMode) (IVdsDisk2 * This, BOOL bEnable);
	END_INTERFACE
}  IVdsDisk2Vtbl;
interface IVdsDisk2
{
	CONST_VTBL struct IVdsDisk2Vtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IVdsDisk2_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IVdsDisk2_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IVdsDisk2_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IVdsDisk2_SetSANMode(This,bEnable) ( (This)->lpVtbl -> SetSANMode(This,bEnable) )
#endif
#endif
#ifndef __IVdsDiskOnline_INTERFACE_DEFINED__
#define __IVdsDiskOnline_INTERFACE_DEFINED__
extern const IID IID_IVdsDiskOnline;
typedef struct IVdsDiskOnlineVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IVdsDiskOnline * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IVdsDiskOnline * This);
	ULONG(STDMETHODCALLTYPE * Release) (IVdsDiskOnline * This);
	HRESULT(STDMETHODCALLTYPE * Online) (IVdsDiskOnline * This);
	HRESULT(STDMETHODCALLTYPE * Offline) (IVdsDiskOnline * This);
	END_INTERFACE
}  IVdsDiskOnlineVtbl;
interface IVdsDiskOnline
{
	CONST_VTBL struct IVdsDiskOnlineVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IVdsDiskOnline_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IVdsDiskOnline_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IVdsDiskOnline_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IVdsDiskOnline_Online(This) ( (This)->lpVtbl -> Online(This) )
#define IVdsDiskOnline_Offline(This) ( (This)->lpVtbl -> Offline(This) )
#endif
#endif
#ifndef __IVdsAdvancedDisk_INTERFACE_DEFINED__
#define __IVdsAdvancedDisk_INTERFACE_DEFINED__
extern const IID IID_IVdsAdvancedDisk;
typedef struct IVdsAdvancedDiskVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IVdsAdvancedDisk * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IVdsAdvancedDisk * This);
	ULONG(STDMETHODCALLTYPE * Release) (IVdsAdvancedDisk * This);
	HRESULT(STDMETHODCALLTYPE * GetPartitionProperties) (IVdsAdvancedDisk * This, ULONGLONG ullOffset, VDS_PARTITION_PROP * pPartitionProp);
	HRESULT(STDMETHODCALLTYPE * QueryPartitions) (IVdsAdvancedDisk * This, VDS_PARTITION_PROP ** ppPartitionPropArray, LONG * plNumberOfPartitions);
	HRESULT(STDMETHODCALLTYPE * CreatePartition) (IVdsAdvancedDisk * This, ULONGLONG ullOffset, ULONGLONG ullSize, CREATE_PARTITION_PARAMETERS * para, IVdsAsync ** ppAsync);
	HRESULT(STDMETHODCALLTYPE * DeletePartition) (IVdsAdvancedDisk * This, ULONGLONG ullOffset, BOOL bForce, BOOL bForceProtected);
	HRESULT(STDMETHODCALLTYPE * ChangeAttributes) (IVdsAdvancedDisk * This, ULONGLONG ullOffset, CHANGE_ATTRIBUTES_PARAMETERS * para);
	HRESULT(STDMETHODCALLTYPE * AssignDriveLetter) (IVdsAdvancedDisk * This, ULONGLONG ullOffset, WCHAR wcLetter);
	HRESULT(STDMETHODCALLTYPE * DeleteDriveLetter) (IVdsAdvancedDisk * This, ULONGLONG ullOffset, WCHAR wcLetter);
	HRESULT(STDMETHODCALLTYPE * GetDriveLetter) (IVdsAdvancedDisk * This, ULONGLONG ullOffset, WCHAR * pwcLetter);
	HRESULT(STDMETHODCALLTYPE * FormatPartition) (IVdsAdvancedDisk * This, ULONGLONG ullOffset, VDS_FILE_SYSTEM_TYPE type, LPWSTR pwszLabel, DWORD dwUnitAllocationSize, BOOL bForce, BOOL bQuickFormat, BOOL bEnableCompression, IVdsAsync ** ppAsync);
	HRESULT(STDMETHODCALLTYPE * Clean) (IVdsAdvancedDisk * This, BOOL bForce, BOOL bForceOEM, BOOL bFullClean, IVdsAsync ** ppAsync);
	END_INTERFACE
}  IVdsAdvancedDiskVtbl;
interface IVdsAdvancedDisk
{
	CONST_VTBL struct IVdsAdvancedDiskVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IVdsAdvancedDisk_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IVdsAdvancedDisk_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IVdsAdvancedDisk_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IVdsAdvancedDisk_GetPartitionProperties(This,ullOffset,pPartitionProp) ( (This)->lpVtbl -> GetPartitionProperties(This,ullOffset,pPartitionProp) )
#define IVdsAdvancedDisk_QueryPartitions(This,ppPartitionPropArray,plNumberOfPartitions) ( (This)->lpVtbl -> QueryPartitions(This,ppPartitionPropArray,plNumberOfPartitions) )
#define IVdsAdvancedDisk_CreatePartition(This,ullOffset,ullSize,para,ppAsync) ( (This)->lpVtbl -> CreatePartition(This,ullOffset,ullSize,para,ppAsync) )
#define IVdsAdvancedDisk_DeletePartition(This,ullOffset,bForce,bForceProtected) ( (This)->lpVtbl -> DeletePartition(This,ullOffset,bForce,bForceProtected) )
#define IVdsAdvancedDisk_ChangeAttributes(This,ullOffset,para) ( (This)->lpVtbl -> ChangeAttributes(This,ullOffset,para) )
#define IVdsAdvancedDisk_AssignDriveLetter(This,ullOffset,wcLetter) ( (This)->lpVtbl -> AssignDriveLetter(This,ullOffset,wcLetter) )
#define IVdsAdvancedDisk_DeleteDriveLetter(This,ullOffset,wcLetter) ( (This)->lpVtbl -> DeleteDriveLetter(This,ullOffset,wcLetter) )
#define IVdsAdvancedDisk_GetDriveLetter(This,ullOffset,pwcLetter) ( (This)->lpVtbl -> GetDriveLetter(This,ullOffset,pwcLetter) )
#define IVdsAdvancedDisk_FormatPartition(This,ullOffset,type,pwszLabel,dwUnitAllocationSize,bForce,bQuickFormat,bEnableCompression,ppAsync) ( (This)->lpVtbl -> FormatPartition(This,ullOffset,type,pwszLabel,dwUnitAllocationSize,bForce,bQuickFormat,bEnableCompression,ppAsync) )
#define IVdsAdvancedDisk_Clean(This,bForce,bForceOEM,bFullClean,ppAsync) ( (This)->lpVtbl -> Clean(This,bForce,bForceOEM,bFullClean,ppAsync) )
#endif
#endif
#ifndef __IVdsAdvancedDisk2_INTERFACE_DEFINED__
#define __IVdsAdvancedDisk2_INTERFACE_DEFINED__
extern const IID IID_IVdsAdvancedDisk2;
typedef struct IVdsAdvancedDisk2Vtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IVdsAdvancedDisk2 * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IVdsAdvancedDisk2 * This);
	ULONG(STDMETHODCALLTYPE * Release) (IVdsAdvancedDisk2 * This);
	HRESULT(STDMETHODCALLTYPE * ChangePartitionType) (IVdsAdvancedDisk2 * This, ULONGLONG ullOffset, BOOL bForce, CHANGE_PARTITION_TYPE_PARAMETERS * para);
	END_INTERFACE
}  IVdsAdvancedDisk2Vtbl;
interface IVdsAdvancedDisk2
{
	CONST_VTBL struct IVdsAdvancedDisk2Vtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IVdsAdvancedDisk2_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IVdsAdvancedDisk2_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IVdsAdvancedDisk2_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IVdsAdvancedDisk2_ChangePartitionType(This,ullOffset,bForce,para) ( (This)->lpVtbl -> ChangePartitionType(This,ullOffset,bForce,para) )
#endif
#endif
#ifndef __IVdsCreatePartitionEx_INTERFACE_DEFINED__
#define __IVdsCreatePartitionEx_INTERFACE_DEFINED__
extern const IID IID_IVdsCreatePartitionEx;
typedef struct IVdsCreatePartitionExVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IVdsCreatePartitionEx * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IVdsCreatePartitionEx * This);
	ULONG(STDMETHODCALLTYPE * Release) (IVdsCreatePartitionEx * This);
	HRESULT(STDMETHODCALLTYPE * CreatePartitionEx) (IVdsCreatePartitionEx * This, ULONGLONG ullOffset, ULONGLONG ullSize, ULONG ulAlign, CREATE_PARTITION_PARAMETERS * para, IVdsAsync ** ppAsync);
	END_INTERFACE
}  IVdsCreatePartitionExVtbl;
interface IVdsCreatePartitionEx
{
	CONST_VTBL struct IVdsCreatePartitionExVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IVdsCreatePartitionEx_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IVdsCreatePartitionEx_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IVdsCreatePartitionEx_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IVdsCreatePartitionEx_CreatePartitionEx(This,ullOffset,ullSize,ulAlign,para,ppAsync) ( (This)->lpVtbl -> CreatePartitionEx(This,ullOffset,ullSize,ulAlign,para,ppAsync) )
#endif
#endif
#ifndef __IVdsRemovable_INTERFACE_DEFINED__
#define __IVdsRemovable_INTERFACE_DEFINED__
extern const IID IID_IVdsRemovable;
typedef struct IVdsRemovableVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IVdsRemovable * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IVdsRemovable * This);
	ULONG(STDMETHODCALLTYPE * Release) (IVdsRemovable * This);
	HRESULT(STDMETHODCALLTYPE * QueryMedia) (IVdsRemovable * This);
	HRESULT(STDMETHODCALLTYPE * Eject) (IVdsRemovable * This);
	END_INTERFACE
}  IVdsRemovableVtbl;
interface IVdsRemovable
{
	CONST_VTBL struct IVdsRemovableVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IVdsRemovable_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IVdsRemovable_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IVdsRemovable_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IVdsRemovable_QueryMedia(This) ( (This)->lpVtbl -> QueryMedia(This) )
#define IVdsRemovable_Eject(This) ( (This)->lpVtbl -> Eject(This) )
#endif
#endif
#ifndef __IVdsVolume_INTERFACE_DEFINED__
#define __IVdsVolume_INTERFACE_DEFINED__
extern const IID IID_IVdsVolume;
typedef struct IVdsVolumeVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IVdsVolume * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IVdsVolume * This);
	ULONG(STDMETHODCALLTYPE * Release) (IVdsVolume * This);
	HRESULT(STDMETHODCALLTYPE * GetProperties) (IVdsVolume * This, VDS_VOLUME_PROP * pVolumeProperties);
	HRESULT(STDMETHODCALLTYPE * GetPack) (IVdsVolume * This, IVdsPack ** ppPack);
	HRESULT(STDMETHODCALLTYPE * QueryPlexes) (IVdsVolume * This, IEnumVdsObject ** ppEnum);
	HRESULT(STDMETHODCALLTYPE * Extend) (IVdsVolume * This, VDS_INPUT_DISK * pInputDiskArray, LONG lNumberOfDisks, IVdsAsync ** ppAsync);
	HRESULT(STDMETHODCALLTYPE * Shrink) (IVdsVolume * This, ULONGLONG ullNumberOfBytesToRemove, IVdsAsync ** ppAsync);
	HRESULT(STDMETHODCALLTYPE * AddPlex) (IVdsVolume * This, VDS_OBJECT_ID VolumeId, IVdsAsync ** ppAsync);
	HRESULT(STDMETHODCALLTYPE * BreakPlex) (IVdsVolume * This, VDS_OBJECT_ID plexId, IVdsAsync ** ppAsync);
	HRESULT(STDMETHODCALLTYPE * RemovePlex) (IVdsVolume * This, VDS_OBJECT_ID plexId, IVdsAsync ** ppAsync);
	HRESULT(STDMETHODCALLTYPE * Delete) (IVdsVolume * This, BOOL bForce);
	HRESULT(STDMETHODCALLTYPE * SetFlags) (IVdsVolume * This, ULONG ulFlags, BOOL bRevertOnClose);
	HRESULT(STDMETHODCALLTYPE * ClearFlags) (IVdsVolume * This, ULONG ulFlags);
	END_INTERFACE
}  IVdsVolumeVtbl;
interface IVdsVolume
{
	CONST_VTBL struct IVdsVolumeVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IVdsVolume_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IVdsVolume_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IVdsVolume_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IVdsVolume_GetProperties(This,pVolumeProperties) ( (This)->lpVtbl -> GetProperties(This,pVolumeProperties) )
#define IVdsVolume_GetPack(This,ppPack) ( (This)->lpVtbl -> GetPack(This,ppPack) )
#define IVdsVolume_QueryPlexes(This,ppEnum) ( (This)->lpVtbl -> QueryPlexes(This,ppEnum) )
#define IVdsVolume_Extend(This,pInputDiskArray,lNumberOfDisks,ppAsync) ( (This)->lpVtbl -> Extend(This,pInputDiskArray,lNumberOfDisks,ppAsync) )
#define IVdsVolume_Shrink(This,ullNumberOfBytesToRemove,ppAsync) ( (This)->lpVtbl -> Shrink(This,ullNumberOfBytesToRemove,ppAsync) )
#define IVdsVolume_AddPlex(This,VolumeId,ppAsync) ( (This)->lpVtbl -> AddPlex(This,VolumeId,ppAsync) )
#define IVdsVolume_BreakPlex(This,plexId,ppAsync) ( (This)->lpVtbl -> BreakPlex(This,plexId,ppAsync) )
#define IVdsVolume_RemovePlex(This,plexId,ppAsync) ( (This)->lpVtbl -> RemovePlex(This,plexId,ppAsync) )
#define IVdsVolume_Delete(This,bForce) ( (This)->lpVtbl -> Delete(This,bForce) )
#define IVdsVolume_SetFlags(This,ulFlags,bRevertOnClose) ( (This)->lpVtbl -> SetFlags(This,ulFlags,bRevertOnClose) )
#define IVdsVolume_ClearFlags(This,ulFlags) ( (This)->lpVtbl -> ClearFlags(This,ulFlags) )
#endif
#endif
#ifndef __IVdsVolume2_INTERFACE_DEFINED__
#define __IVdsVolume2_INTERFACE_DEFINED__
extern const IID IID_IVdsVolume2;
typedef struct IVdsVolume2Vtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IVdsVolume2 * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IVdsVolume2 * This);
	ULONG(STDMETHODCALLTYPE * Release) (IVdsVolume2 * This);
	HRESULT(STDMETHODCALLTYPE * GetProperties2) (IVdsVolume2 * This, VDS_VOLUME_PROP2 * pVolumeProperties);
	END_INTERFACE
}  IVdsVolume2Vtbl;
interface IVdsVolume2
{
	CONST_VTBL struct IVdsVolume2Vtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IVdsVolume2_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IVdsVolume2_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IVdsVolume2_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IVdsVolume2_GetProperties2(This,pVolumeProperties) ( (This)->lpVtbl -> GetProperties2(This,pVolumeProperties) )
#endif
#endif
#ifndef __IVdsVolumeOnline_INTERFACE_DEFINED__
#define __IVdsVolumeOnline_INTERFACE_DEFINED__
extern const IID IID_IVdsVolumeOnline;
typedef struct IVdsVolumeOnlineVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IVdsVolumeOnline * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IVdsVolumeOnline * This);
	ULONG(STDMETHODCALLTYPE * Release) (IVdsVolumeOnline * This);
	HRESULT(STDMETHODCALLTYPE * Online) (IVdsVolumeOnline * This);
	END_INTERFACE
}  IVdsVolumeOnlineVtbl;
interface IVdsVolumeOnline
{
	CONST_VTBL struct IVdsVolumeOnlineVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IVdsVolumeOnline_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IVdsVolumeOnline_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IVdsVolumeOnline_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IVdsVolumeOnline_Online(This) ( (This)->lpVtbl -> Online(This) )
#endif
#endif
#ifndef __IVdsVolumePlex_INTERFACE_DEFINED__
#define __IVdsVolumePlex_INTERFACE_DEFINED__
extern const IID IID_IVdsVolumePlex;
typedef struct IVdsVolumePlexVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IVdsVolumePlex * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IVdsVolumePlex * This);
	ULONG(STDMETHODCALLTYPE * Release) (IVdsVolumePlex * This);
	HRESULT(STDMETHODCALLTYPE * GetProperties) (IVdsVolumePlex * This, VDS_VOLUME_PLEX_PROP * pPlexProperties);
	HRESULT(STDMETHODCALLTYPE * GetVolume) (IVdsVolumePlex * This, IVdsVolume ** ppVolume);
	HRESULT(STDMETHODCALLTYPE * QueryExtents) (IVdsVolumePlex * This, VDS_DISK_EXTENT ** ppExtentArray, LONG * plNumberOfExtents);
	HRESULT(STDMETHODCALLTYPE * Repair) (IVdsVolumePlex * This, VDS_INPUT_DISK * pInputDiskArray, LONG lNumberOfDisks, IVdsAsync ** ppAsync);
	END_INTERFACE
}  IVdsVolumePlexVtbl;
interface IVdsVolumePlex
{
	CONST_VTBL struct IVdsVolumePlexVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IVdsVolumePlex_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IVdsVolumePlex_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IVdsVolumePlex_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IVdsVolumePlex_GetProperties(This,pPlexProperties) ( (This)->lpVtbl -> GetProperties(This,pPlexProperties) )
#define IVdsVolumePlex_GetVolume(This,ppVolume) ( (This)->lpVtbl -> GetVolume(This,ppVolume) )
#define IVdsVolumePlex_QueryExtents(This,ppExtentArray,plNumberOfExtents) ( (This)->lpVtbl -> QueryExtents(This,ppExtentArray,plNumberOfExtents) )
#define IVdsVolumePlex_Repair(This,pInputDiskArray,lNumberOfDisks,ppAsync) ( (This)->lpVtbl -> Repair(This,pInputDiskArray,lNumberOfDisks,ppAsync) )
#endif
#endif
#ifndef __IVdsDisk3_INTERFACE_DEFINED__
#define __IVdsDisk3_INTERFACE_DEFINED__
extern const IID IID_IVdsDisk3;
typedef struct IVdsDisk3Vtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IVdsDisk3 * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IVdsDisk3 * This);
	ULONG(STDMETHODCALLTYPE * Release) (IVdsDisk3 * This);
	HRESULT(STDMETHODCALLTYPE * GetProperties2) (IVdsDisk3 * This, VDS_DISK_PROP2 * pDiskProperties);
	HRESULT(STDMETHODCALLTYPE * QueryFreeExtents) (IVdsDisk3 * This, ULONG ulAlign, VDS_DISK_FREE_EXTENT ** ppFreeExtentArray, LONG * plNumberOfFreeExtents);
	END_INTERFACE
}  IVdsDisk3Vtbl;
interface IVdsDisk3
{
	CONST_VTBL struct IVdsDisk3Vtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IVdsDisk3_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IVdsDisk3_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IVdsDisk3_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IVdsDisk3_GetProperties2(This,pDiskProperties) ( (This)->lpVtbl -> GetProperties2(This,pDiskProperties) )
#define IVdsDisk3_QueryFreeExtents(This,ulAlign,ppFreeExtentArray,plNumberOfFreeExtents) ( (This)->lpVtbl -> QueryFreeExtents(This,ulAlign,ppFreeExtentArray,plNumberOfFreeExtents) )
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
extern RPC_IF_HANDLE __MIDL_itf_vds_0000_0020_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_vds_0000_0020_v0_0_s_ifspec;
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
#if (WINVER >= _WIN32_WINNT_WIN7)
typedef struct _VDS_CREATE_VDISK_PARAMETERS
{
	GUID UniqueId;
	ULONGLONG MaximumSize;
	ULONG BlockSizeInBytes;
	ULONG SectorSizeInBytes;
	LPWSTR pParentPath;
	LPWSTR pSourcePath;
} VDS_CREATE_VDISK_PARAMETERS;
typedef struct _VDS_CREATE_VDISK_PARAMETERS *PVDS_CREATE_VDISK_PARAMETERS;
extern RPC_IF_HANDLE __MIDL_itf_vds_0000_0047_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_vds_0000_0047_v0_0_s_ifspec;
#ifndef __IVdsVdProvider_INTERFACE_DEFINED__
#define __IVdsVdProvider_INTERFACE_DEFINED__
extern const IID IID_IVdsVdProvider;
typedef struct IVdsVdProviderVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IVdsVdProvider * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IVdsVdProvider * This);
	ULONG(STDMETHODCALLTYPE * Release) (IVdsVdProvider * This);
	HRESULT(STDMETHODCALLTYPE * QueryVDisks) (IVdsVdProvider * This, IEnumVdsObject ** ppEnum);
	HRESULT(STDMETHODCALLTYPE * CreateVDisk) (IVdsVdProvider * This, PVIRTUAL_STORAGE_TYPE VirtualDeviceType, LPWSTR pPath, LPWSTR pStringSecurityDescriptor, CREATE_VIRTUAL_DISK_FLAG Flags, ULONG ProviderSpecificFlags, ULONG Reserved, PVDS_CREATE_VDISK_PARAMETERS pCreateDiskParameters, IVdsAsync ** ppAsync);
	HRESULT(STDMETHODCALLTYPE * AddVDisk) (IVdsVdProvider * This, PVIRTUAL_STORAGE_TYPE VirtualDeviceType, LPWSTR pPath, IVdsVDisk ** ppVDisk);
	HRESULT(STDMETHODCALLTYPE * GetDiskFromVDisk) (IVdsVdProvider * This, IVdsVDisk * pVDisk, IVdsDisk ** ppDisk);
	HRESULT(STDMETHODCALLTYPE * GetVDiskFromDisk) (IVdsVdProvider * This, IVdsDisk * pDisk, IVdsVDisk ** ppVDisk);
	END_INTERFACE
}  IVdsVdProviderVtbl;
interface IVdsVdProvider
{
	CONST_VTBL struct IVdsVdProviderVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IVdsVdProvider_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IVdsVdProvider_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IVdsVdProvider_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IVdsVdProvider_QueryVDisks(This,ppEnum) ( (This)->lpVtbl -> QueryVDisks(This,ppEnum) )
#define IVdsVdProvider_CreateVDisk(This,VirtualDeviceType,pPath,pStringSecurityDescriptor,Flags,ProviderSpecificFlags,Reserved,pCreateDiskParameters,ppAsync) ( (This)->lpVtbl -> CreateVDisk(This,VirtualDeviceType,pPath,pStringSecurityDescriptor,Flags,ProviderSpecificFlags,Reserved,pCreateDiskParameters,ppAsync) )
#define IVdsVdProvider_AddVDisk(This,VirtualDeviceType,pPath,ppVDisk) ( (This)->lpVtbl -> AddVDisk(This,VirtualDeviceType,pPath,ppVDisk) )
#define IVdsVdProvider_GetDiskFromVDisk(This,pVDisk,ppDisk) ( (This)->lpVtbl -> GetDiskFromVDisk(This,pVDisk,ppDisk) )
#define IVdsVdProvider_GetVDiskFromDisk(This,pDisk,ppVDisk) ( (This)->lpVtbl -> GetVDiskFromDisk(This,pDisk,ppVDisk) )
#endif
#endif
typedef enum _VDS_VDISK_STATE
{
	VDS_VST_UNKNOWN = 0,
	VDS_VST_ADDED = (VDS_VST_UNKNOWN + 1),
	VDS_VST_OPEN = (VDS_VST_ADDED + 1),
	VDS_VST_ATTACH_PENDING = (VDS_VST_OPEN + 1),
	VDS_VST_ATTACHED_NOT_OPEN = (VDS_VST_ATTACH_PENDING + 1),
	VDS_VST_ATTACHED = (VDS_VST_ATTACHED_NOT_OPEN + 1),
	VDS_VST_DETACH_PENDING = (VDS_VST_ATTACHED + 1),
	VDS_VST_COMPACTING = (VDS_VST_DETACH_PENDING + 1),
	VDS_VST_MERGING = (VDS_VST_COMPACTING + 1),
	VDS_VST_EXPANDING = (VDS_VST_MERGING + 1),
	VDS_VST_DELETED = (VDS_VST_EXPANDING + 1),
	VDS_VST_MAX = (VDS_VST_DELETED + 1)
} VDS_VDISK_STATE;
typedef struct _VDS_VDISK_PROPERTIES
{
	VDS_OBJECT_ID Id;
	VDS_VDISK_STATE State;
	VIRTUAL_STORAGE_TYPE VirtualDeviceType;
	ULONGLONG VirtualSize;
	ULONGLONG PhysicalSize;
	LPWSTR pPath;
	LPWSTR pDeviceName;
	DEPENDENT_DISK_FLAG DiskFlag;
	BOOL bIsChild;
	LPWSTR pParentPath;
} VDS_VDISK_PROPERTIES;
typedef struct _VDS_VDISK_PROPERTIES *PVDS_VDISK_PROPERTIES;
extern RPC_IF_HANDLE __MIDL_itf_vds_0000_0048_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_vds_0000_0048_v0_0_s_ifspec;
#ifndef __IVdsVDisk_INTERFACE_DEFINED__
#define __IVdsVDisk_INTERFACE_DEFINED__
extern const IID IID_IVdsVDisk;
typedef struct IVdsVDiskVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IVdsVDisk * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IVdsVDisk * This);
	ULONG(STDMETHODCALLTYPE * Release) (IVdsVDisk * This);
	HRESULT(STDMETHODCALLTYPE * Open) (IVdsVDisk * This, VIRTUAL_DISK_ACCESS_MASK AccessMask, OPEN_VIRTUAL_DISK_FLAG Flags, ULONG ReadWriteDepth, IVdsOpenVDisk ** ppOpenVDisk);
	HRESULT(STDMETHODCALLTYPE * GetProperties) (IVdsVDisk * This, PVDS_VDISK_PROPERTIES pDiskProperties);
	HRESULT(STDMETHODCALLTYPE * GetHostVolume) (IVdsVDisk * This, IVdsVolume ** ppVolume);
	HRESULT(STDMETHODCALLTYPE * GetDeviceName) (IVdsVDisk * This, LPWSTR * ppDeviceName);
	END_INTERFACE
}  IVdsVDiskVtbl;
interface IVdsVDisk
{
	CONST_VTBL struct IVdsVDiskVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IVdsVDisk_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IVdsVDisk_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IVdsVDisk_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IVdsVDisk_Open(This,AccessMask,Flags,ReadWriteDepth,ppOpenVDisk) ( (This)->lpVtbl -> Open(This,AccessMask,Flags,ReadWriteDepth,ppOpenVDisk) )
#define IVdsVDisk_GetProperties(This,pDiskProperties) ( (This)->lpVtbl -> GetProperties(This,pDiskProperties) )
#define IVdsVDisk_GetHostVolume(This,ppVolume) ( (This)->lpVtbl -> GetHostVolume(This,ppVolume) )
#define IVdsVDisk_GetDeviceName(This,ppDeviceName) ( (This)->lpVtbl -> GetDeviceName(This,ppDeviceName) )
#endif
#endif
#ifndef __IVdsOpenVDisk_INTERFACE_DEFINED__
#define __IVdsOpenVDisk_INTERFACE_DEFINED__
extern const IID IID_IVdsOpenVDisk;
typedef struct IVdsOpenVDiskVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IVdsOpenVDisk * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IVdsOpenVDisk * This);
	ULONG(STDMETHODCALLTYPE * Release) (IVdsOpenVDisk * This);
	HRESULT(STDMETHODCALLTYPE * Attach) (IVdsOpenVDisk * This, LPWSTR pStringSecurityDescriptor, ATTACH_VIRTUAL_DISK_FLAG Flags, ULONG ProviderSpecificFlags, ULONG TimeoutInMs, IVdsAsync ** ppAsync);
	HRESULT(STDMETHODCALLTYPE * Detach) (IVdsOpenVDisk * This, DETACH_VIRTUAL_DISK_FLAG Flags, ULONG ProviderSpecificFlags);
	HRESULT(STDMETHODCALLTYPE * DetachAndDelete) (IVdsOpenVDisk * This, DETACH_VIRTUAL_DISK_FLAG Flags, ULONG ProviderSpecificFlags);
	HRESULT(STDMETHODCALLTYPE * Compact) (IVdsOpenVDisk * This, COMPACT_VIRTUAL_DISK_FLAG Flags, ULONG Reserved, IVdsAsync ** ppAsync);
	HRESULT(STDMETHODCALLTYPE * Merge) (IVdsOpenVDisk * This, MERGE_VIRTUAL_DISK_FLAG Flags, ULONG MergeDepth, IVdsAsync ** ppAsync);
	HRESULT(STDMETHODCALLTYPE * Expand) (IVdsOpenVDisk * This, EXPAND_VIRTUAL_DISK_FLAG Flags, ULONGLONG NewSize, IVdsAsync ** ppAsync);
	END_INTERFACE
}  IVdsOpenVDiskVtbl;
interface IVdsOpenVDisk
{
	CONST_VTBL struct IVdsOpenVDiskVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IVdsOpenVDisk_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IVdsOpenVDisk_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IVdsOpenVDisk_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IVdsOpenVDisk_Attach(This,pStringSecurityDescriptor,Flags,ProviderSpecificFlags,TimeoutInMs,ppAsync) ( (This)->lpVtbl -> Attach(This,pStringSecurityDescriptor,Flags,ProviderSpecificFlags,TimeoutInMs,ppAsync) )
#define IVdsOpenVDisk_Detach(This,Flags,ProviderSpecificFlags) ( (This)->lpVtbl -> Detach(This,Flags,ProviderSpecificFlags) )
#define IVdsOpenVDisk_DetachAndDelete(This,Flags,ProviderSpecificFlags) ( (This)->lpVtbl -> DetachAndDelete(This,Flags,ProviderSpecificFlags) )
#define IVdsOpenVDisk_Compact(This,Flags,Reserved,ppAsync) ( (This)->lpVtbl -> Compact(This,Flags,Reserved,ppAsync) )
#define IVdsOpenVDisk_Merge(This,Flags,MergeDepth,ppAsync) ( (This)->lpVtbl -> Merge(This,Flags,MergeDepth,ppAsync) )
#define IVdsOpenVDisk_Expand(This,Flags,NewSize,ppAsync) ( (This)->lpVtbl -> Expand(This,Flags,NewSize,ppAsync) )
#endif
#endif
#define	VDS_ATTACH_VIRTUAL_DISK_FLAG_USE_FILE_ACL	( 0x1 )
#endif
DEFINE_GUID(CLSID_VdsLoader, 0X9C38ED61, 0xD565, 0x4728, 0xAE, 0xEE, 0xC8, 0x09, 0x52, 0xF0, 0xEC, 0xDE);
DEFINE_GUID(CLSID_VdsService, 0x7D1933CB, 0x86F6, 0x4A98, 0x86, 0x28, 0x01, 0xBE, 0x94, 0xC9, 0xA5, 0x75);
#define	MAX_FS_NAME_SIZE	( 8 )
#define	MAX_FS_FORMAT_SUPPORT_NAME_SIZE	( 32 )
#define	MAX_FS_ALLOWED_CLUSTER_SIZES_SIZE	( 32 )
typedef enum _VDS_SERVICE_FLAG
{
	VDS_SVF_SUPPORT_DYNAMIC = 0x1,
	VDS_SVF_SUPPORT_FAULT_TOLERANT = 0x2,
	VDS_SVF_SUPPORT_GPT = 0x4,
	VDS_SVF_SUPPORT_DYNAMIC_1394 = 0x8,
	VDS_SVF_CLUSTER_SERVICE_CONFIGURED = 0x10,
	VDS_SVF_AUTO_MOUNT_OFF = 0x20,
	VDS_SVF_OS_UNINSTALL_VALID = 0x40,
	VDS_SVF_EFI = 0x80,
	VDS_SVF_SUPPORT_MIRROR = 0x100L,
	VDS_SVF_SUPPORT_RAID5 = 0x200L
} VDS_SERVICE_FLAG;
typedef struct _VDS_SERVICE_PROP
{
	LPWSTR pwszVersion;
	ULONG ulFlags;
} VDS_SERVICE_PROP;
typedef enum _VDS_SAN_POLICY
{
	VDS_SP_UNKNOWN = 0,
	VDS_SP_ONLINE = 0x1,
	VDS_SP_OFFLINE_SHARED = 0x2,
	VDS_SP_OFFLINE = 0x3
} VDS_SAN_POLICY;
typedef struct VDS_REPARSE_POINT_PROP
{
	VDS_OBJECT_ID SourceVolumeId;
	LPWSTR pwszPath;
} VDS_REPARSE_POINT_PROP;
typedef struct VDS_REPARSE_POINT_PROP *PVDS_REPARSE_POINT_PROP;
typedef enum _VDS_DRIVE_LETTER_FLAG
{
	VDS_DLF_NON_PERSISTENT = 0x1
} VDS_DRIVE_LETTER_FLAG;
typedef struct _VDS_DRIVE_LETTER_PROP
{
	WCHAR wcLetter;
	VDS_OBJECT_ID volumeId;
	ULONG ulFlags;
	BOOL bUsed;
} VDS_DRIVE_LETTER_PROP;
typedef struct _VDS_DRIVE_LETTER_PROP *PVDS_DRIVE_LETTER_PROP;
typedef enum _VDS_FILE_SYSTEM_FLAG
{
	VDS_FSF_SUPPORT_FORMAT = 0x1,
	VDS_FSF_SUPPORT_QUICK_FORMAT = 0x2,
	VDS_FSF_SUPPORT_COMPRESS = 0x4,
	VDS_FSF_SUPPORT_SPECIFY_LABEL = 0x8,
	VDS_FSF_SUPPORT_MOUNT_POINT = 0x10,
	VDS_FSF_SUPPORT_REMOVABLE_MEDIA = 0x20,
	VDS_FSF_SUPPORT_EXTEND = 0x40,
	VDS_FSF_ALLOCATION_UNIT_512 = 0x10000,
	VDS_FSF_ALLOCATION_UNIT_1K = 0x20000,
	VDS_FSF_ALLOCATION_UNIT_2K = 0x40000,
	VDS_FSF_ALLOCATION_UNIT_4K = 0x80000,
	VDS_FSF_ALLOCATION_UNIT_8K = 0x100000,
	VDS_FSF_ALLOCATION_UNIT_16K = 0x200000,
	VDS_FSF_ALLOCATION_UNIT_32K = 0x400000,
	VDS_FSF_ALLOCATION_UNIT_64K = 0x800000,
	VDS_FSF_ALLOCATION_UNIT_128K = 0x1000000,
	VDS_FSF_ALLOCATION_UNIT_256K = 0x2000000
} VDS_FILE_SYSTEM_FLAG;
typedef struct _VDS_FILE_SYSTEM_TYPE_PROP
{
	VDS_FILE_SYSTEM_TYPE type;
	WCHAR wszName[8];
	ULONG ulFlags;
	ULONG ulCompressionFlags;
	ULONG ulMaxLableLength;
	LPWSTR pwszIllegalLabelCharSet;
} VDS_FILE_SYSTEM_TYPE_PROP;
typedef struct _VDS_FILE_SYSTEM_TYPE_PROP *PVDS_FILE_SYSTEM_TYPE_PROP;
typedef enum _VDS_FILE_SYSTEM_FORMAT_SUPPORT_FLAG
{
	VDS_FSS_DEFAULT = 0x1,
	VDS_FSS_PREVIOUS_REVISION = 0x2,
	VDS_FSS_RECOMMENDED = 0x4
} VDS_FILE_SYSTEM_FORMAT_SUPPORT_FLAG;
typedef struct _VDS_FILE_SYSTEM_FORMAT_SUPPORT_PROP
{
	ULONG ulFlags;
	USHORT usRevision;
	ULONG ulDefaultUnitAllocationSize;
	ULONG rgulAllowedUnitAllocationSizes[32];
	WCHAR wszName[32];
} VDS_FILE_SYSTEM_FORMAT_SUPPORT_PROP;
typedef struct _VDS_FILE_SYSTEM_FORMAT_SUPPORT_PROP *PVDS_FILE_SYSTEM_FORMAT_SUPPORT_PROP;
typedef enum _VDS_FILE_SYSTEM_PROP_FLAG
{
	VDS_FPF_COMPRESSED = 0x1
} VDS_FILE_SYSTEM_PROP_FLAG;
typedef enum _VDS_FORMAT_OPTION_FLAGS
{
	VDS_FSOF_NONE = 0,
	VDS_FSOF_FORCE = 0x1,
	VDS_FSOF_QUICK = 0x2,
	VDS_FSOF_COMPRESSION = 0x4,
	VDS_FSOF_DUPLICATE_METADATA = 0x8
} VDS_FORMAT_OPTION_FLAGS;
typedef struct _VDS_FILE_SYSTEM_PROP
{
	VDS_FILE_SYSTEM_TYPE type;
	VDS_OBJECT_ID volumeId;
	ULONG ulFlags;
	ULONGLONG ullTotalAllocationUnits;
	ULONGLONG ullAvailableAllocationUnits;
	ULONG ulAllocationUnitSize;
	LPWSTR pwszLabel;
} VDS_FILE_SYSTEM_PROP;
typedef struct _VDS_FILE_SYSTEM_PROP *PVDS_FILE_SYSTEM_PROP;
typedef enum _VDS_QUERY_PROVIDER_FLAG
{
	VDS_QUERY_SOFTWARE_PROVIDERS = 0x1,
	VDS_QUERY_HARDWARE_PROVIDERS = 0x2,
	VDS_QUERY_VIRTUALDISK_PROVIDERS = 0x4
} VDS_QUERY_PROVIDER_FLAG;
extern RPC_IF_HANDLE __MIDL_itf_vds_0000_0050_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_vds_0000_0050_v0_0_s_ifspec;
#ifndef __IVdsServiceLoader_INTERFACE_DEFINED__
#define __IVdsServiceLoader_INTERFACE_DEFINED__
extern const IID IID_IVdsServiceLoader;
typedef struct IVdsServiceLoaderVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IVdsServiceLoader * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IVdsServiceLoader * This);
	ULONG(STDMETHODCALLTYPE * Release) (IVdsServiceLoader * This);
	HRESULT(STDMETHODCALLTYPE * LoadService) (IVdsServiceLoader * This, LPWSTR pwszMachineName, IVdsService ** ppService);
	END_INTERFACE
}  IVdsServiceLoaderVtbl;
interface IVdsServiceLoader
{
	CONST_VTBL struct IVdsServiceLoaderVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IVdsServiceLoader_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IVdsServiceLoader_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IVdsServiceLoader_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IVdsServiceLoader_LoadService(This,pwszMachineName,ppService) ( (This)->lpVtbl -> LoadService(This,pwszMachineName,ppService) )
#endif
#endif
#ifndef __IVdsService_INTERFACE_DEFINED__
#define __IVdsService_INTERFACE_DEFINED__
extern const IID IID_IVdsService;
typedef struct IVdsServiceVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IVdsService * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IVdsService * This);
	ULONG(STDMETHODCALLTYPE * Release) (IVdsService * This);
	HRESULT(STDMETHODCALLTYPE * IsServiceReady) (IVdsService * This);
	HRESULT(STDMETHODCALLTYPE * WaitForServiceReady) (IVdsService * This);
	HRESULT(STDMETHODCALLTYPE * GetProperties) (IVdsService * This, VDS_SERVICE_PROP * pServiceProp);
	HRESULT(STDMETHODCALLTYPE * QueryProviders) (IVdsService * This, DWORD masks, IEnumVdsObject ** ppEnum);
	HRESULT(STDMETHODCALLTYPE * QueryMaskedDisks) (IVdsService * This, IEnumVdsObject ** ppEnum);
	HRESULT(STDMETHODCALLTYPE * QueryUnallocatedDisks) (IVdsService * This, IEnumVdsObject ** ppEnum);
	HRESULT(STDMETHODCALLTYPE * GetObject) (IVdsService * This, VDS_OBJECT_ID ObjectId, VDS_OBJECT_TYPE type, IUnknown ** ppObjectUnk);
	HRESULT(STDMETHODCALLTYPE * QueryDriveLetters) (IVdsService * This, WCHAR wcFirstLetter, DWORD count, VDS_DRIVE_LETTER_PROP * pDriveLetterPropArray);
	HRESULT(STDMETHODCALLTYPE * QueryFileSystemTypes) (IVdsService * This, VDS_FILE_SYSTEM_TYPE_PROP ** ppFileSystemTypeProps, LONG * plNumberOfFileSystems);
	HRESULT(STDMETHODCALLTYPE * Reenumerate) (IVdsService * This);
	HRESULT(STDMETHODCALLTYPE * Refresh) (IVdsService * This);
	HRESULT(STDMETHODCALLTYPE * CleanupObsoleteMountPoints) (IVdsService * This);
	HRESULT(STDMETHODCALLTYPE * Advise) (IVdsService * This, IVdsAdviseSink * pSink, DWORD * pdwCookie);
	HRESULT(STDMETHODCALLTYPE * Unadvise) (IVdsService * This, DWORD dwCookie);
	HRESULT(STDMETHODCALLTYPE * Reboot) (IVdsService * This);
	HRESULT(STDMETHODCALLTYPE * SetFlags) (IVdsService * This, ULONG ulFlags);
	HRESULT(STDMETHODCALLTYPE * ClearFlags) (IVdsService * This, ULONG ulFlags);
	END_INTERFACE
}  IVdsServiceVtbl;
interface IVdsService
{
	CONST_VTBL struct IVdsServiceVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IVdsService_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IVdsService_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IVdsService_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IVdsService_IsServiceReady(This) ( (This)->lpVtbl -> IsServiceReady(This) )
#define IVdsService_WaitForServiceReady(This) ( (This)->lpVtbl -> WaitForServiceReady(This) )
#define IVdsService_GetProperties(This,pServiceProp) ( (This)->lpVtbl -> GetProperties(This,pServiceProp) )
#define IVdsService_QueryProviders(This,masks,ppEnum) ( (This)->lpVtbl -> QueryProviders(This,masks,ppEnum) )
#define IVdsService_QueryMaskedDisks(This,ppEnum) ( (This)->lpVtbl -> QueryMaskedDisks(This,ppEnum) )
#define IVdsService_QueryUnallocatedDisks(This,ppEnum) ( (This)->lpVtbl -> QueryUnallocatedDisks(This,ppEnum) )
#define IVdsService_GetObject(This,ObjectId,type,ppObjectUnk) ( (This)->lpVtbl -> GetObject(This,ObjectId,type,ppObjectUnk) )
#define IVdsService_QueryDriveLetters(This,wcFirstLetter,count,pDriveLetterPropArray) ( (This)->lpVtbl -> QueryDriveLetters(This,wcFirstLetter,count,pDriveLetterPropArray) )
#define IVdsService_QueryFileSystemTypes(This,ppFileSystemTypeProps,plNumberOfFileSystems) ( (This)->lpVtbl -> QueryFileSystemTypes(This,ppFileSystemTypeProps,plNumberOfFileSystems) )
#define IVdsService_Reenumerate(This) ( (This)->lpVtbl -> Reenumerate(This) )
#define IVdsService_Refresh(This) ( (This)->lpVtbl -> Refresh(This) )
#define IVdsService_CleanupObsoleteMountPoints(This) ( (This)->lpVtbl -> CleanupObsoleteMountPoints(This) )
#define IVdsService_Advise(This,pSink,pdwCookie) ( (This)->lpVtbl -> Advise(This,pSink,pdwCookie) )
#define IVdsService_Unadvise(This,dwCookie) ( (This)->lpVtbl -> Unadvise(This,dwCookie) )
#define IVdsService_Reboot(This) ( (This)->lpVtbl -> Reboot(This) )
#define IVdsService_SetFlags(This,ulFlags) ( (This)->lpVtbl -> SetFlags(This,ulFlags) )
#define IVdsService_ClearFlags(This,ulFlags) ( (This)->lpVtbl -> ClearFlags(This,ulFlags) )
#endif
#endif
#ifndef __IVdsServiceUninstallDisk_INTERFACE_DEFINED__
#define __IVdsServiceUninstallDisk_INTERFACE_DEFINED__
extern const IID IID_IVdsServiceUninstallDisk;
typedef struct IVdsServiceUninstallDiskVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IVdsServiceUninstallDisk * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IVdsServiceUninstallDisk * This);
	ULONG(STDMETHODCALLTYPE * Release) (IVdsServiceUninstallDisk * This);
	HRESULT(STDMETHODCALLTYPE * GetDiskIdFromLunInfo) (IVdsServiceUninstallDisk * This, VDS_LUN_INFORMATION * pLunInfo, VDS_OBJECT_ID * pDiskId);
	HRESULT(STDMETHODCALLTYPE * UninstallDisks) (IVdsServiceUninstallDisk * This, VDS_OBJECT_ID * pDiskIdArray, ULONG ulCount, BOOLEAN bForce, BOOLEAN * pbReboot, HRESULT * pResults);
	END_INTERFACE
}  IVdsServiceUninstallDiskVtbl;
interface IVdsServiceUninstallDisk
{
	CONST_VTBL struct IVdsServiceUninstallDiskVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IVdsServiceUninstallDisk_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IVdsServiceUninstallDisk_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IVdsServiceUninstallDisk_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IVdsServiceUninstallDisk_GetDiskIdFromLunInfo(This,pLunInfo,pDiskId) ( (This)->lpVtbl -> GetDiskIdFromLunInfo(This,pLunInfo,pDiskId) )
#define IVdsServiceUninstallDisk_UninstallDisks(This,pDiskIdArray,ulCount,bForce,pbReboot,pResults) ( (This)->lpVtbl -> UninstallDisks(This,pDiskIdArray,ulCount,bForce,pbReboot,pResults) )
#endif
#endif
#ifndef __IVdsServiceHba_INTERFACE_DEFINED__
#define __IVdsServiceHba_INTERFACE_DEFINED__
extern const IID IID_IVdsServiceHba;
typedef struct IVdsServiceHbaVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IVdsServiceHba * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IVdsServiceHba * This);
	ULONG(STDMETHODCALLTYPE * Release) (IVdsServiceHba * This);
	HRESULT(STDMETHODCALLTYPE * QueryHbaPorts) (IVdsServiceHba * This, IEnumVdsObject ** ppEnum);
	END_INTERFACE
}  IVdsServiceHbaVtbl;
interface IVdsServiceHba
{
	CONST_VTBL struct IVdsServiceHbaVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IVdsServiceHba_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IVdsServiceHba_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IVdsServiceHba_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IVdsServiceHba_QueryHbaPorts(This,ppEnum) ( (This)->lpVtbl -> QueryHbaPorts(This,ppEnum) )
#endif
#endif
#ifndef __IVdsServiceIscsi_INTERFACE_DEFINED__
#define __IVdsServiceIscsi_INTERFACE_DEFINED__
extern const IID IID_IVdsServiceIscsi;
typedef struct IVdsServiceIscsiVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IVdsServiceIscsi * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IVdsServiceIscsi * This);
	ULONG(STDMETHODCALLTYPE * Release) (IVdsServiceIscsi * This);
	HRESULT(STDMETHODCALLTYPE * GetInitiatorName) (IVdsServiceIscsi * This, LPWSTR * ppwszIscsiName);
	HRESULT(STDMETHODCALLTYPE * QueryInitiatorAdapters) (IVdsServiceIscsi * This, IEnumVdsObject ** ppEnum);
	HRESULT(STDMETHODCALLTYPE * SetIpsecGroupPresharedKey) (IVdsServiceIscsi * This, VDS_ISCSI_IPSEC_KEY * pIpsecKey);
	HRESULT(STDMETHODCALLTYPE * SetAllIpsecTunnelAddresses) (IVdsServiceIscsi * This, VDS_IPADDRESS * pTunnelAddress, VDS_IPADDRESS * pDestinationAddress);
	HRESULT(STDMETHODCALLTYPE * SetAllIpsecSecurity) (IVdsServiceIscsi * This, VDS_OBJECT_ID targetPortalId, ULONGLONG ullSecurityFlags, VDS_ISCSI_IPSEC_KEY * pIpsecKey);
	HRESULT(STDMETHODCALLTYPE * SetInitiatorSharedSecret) (IVdsServiceIscsi * This, VDS_ISCSI_SHARED_SECRET * pInitiatorSharedSecret, VDS_OBJECT_ID targetId);
	HRESULT(STDMETHODCALLTYPE * RememberTargetSharedSecret) (IVdsServiceIscsi * This, VDS_OBJECT_ID targetId, VDS_ISCSI_SHARED_SECRET * pTargetSharedSecret);
	END_INTERFACE
}  IVdsServiceIscsiVtbl;
interface IVdsServiceIscsi
{
	CONST_VTBL struct IVdsServiceIscsiVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IVdsServiceIscsi_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IVdsServiceIscsi_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IVdsServiceIscsi_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IVdsServiceIscsi_GetInitiatorName(This,ppwszIscsiName) ( (This)->lpVtbl -> GetInitiatorName(This,ppwszIscsiName) )
#define IVdsServiceIscsi_QueryInitiatorAdapters(This,ppEnum) ( (This)->lpVtbl -> QueryInitiatorAdapters(This,ppEnum) )
#define IVdsServiceIscsi_SetIpsecGroupPresharedKey(This,pIpsecKey) ( (This)->lpVtbl -> SetIpsecGroupPresharedKey(This,pIpsecKey) )
#define IVdsServiceIscsi_SetAllIpsecTunnelAddresses(This,pTunnelAddress,pDestinationAddress) ( (This)->lpVtbl -> SetAllIpsecTunnelAddresses(This,pTunnelAddress,pDestinationAddress) )
#define IVdsServiceIscsi_SetAllIpsecSecurity(This,targetPortalId,ullSecurityFlags,pIpsecKey) ( (This)->lpVtbl -> SetAllIpsecSecurity(This,targetPortalId,ullSecurityFlags,pIpsecKey) )
#define IVdsServiceIscsi_SetInitiatorSharedSecret(This,pInitiatorSharedSecret,targetId) ( (This)->lpVtbl -> SetInitiatorSharedSecret(This,pInitiatorSharedSecret,targetId) )
#define IVdsServiceIscsi_RememberTargetSharedSecret(This,targetId,pTargetSharedSecret) ( (This)->lpVtbl -> RememberTargetSharedSecret(This,targetId,pTargetSharedSecret) )
#endif
#endif
#ifndef __IVdsServiceInitialization_INTERFACE_DEFINED__
#define __IVdsServiceInitialization_INTERFACE_DEFINED__
extern const IID IID_IVdsServiceInitialization;
typedef struct IVdsServiceInitializationVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IVdsServiceInitialization * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IVdsServiceInitialization * This);
	ULONG(STDMETHODCALLTYPE * Release) (IVdsServiceInitialization * This);
	HRESULT(STDMETHODCALLTYPE * Initialize) (IVdsServiceInitialization * This, LPWSTR pwszMachineName);
	END_INTERFACE
}  IVdsServiceInitializationVtbl;
interface IVdsServiceInitialization
{
	CONST_VTBL struct IVdsServiceInitializationVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IVdsServiceInitialization_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IVdsServiceInitialization_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IVdsServiceInitialization_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IVdsServiceInitialization_Initialize(This,pwszMachineName) ( (This)->lpVtbl -> Initialize(This,pwszMachineName) )
#endif
#endif
#ifndef __IVdsHbaPort_INTERFACE_DEFINED__
#define __IVdsHbaPort_INTERFACE_DEFINED__
extern const IID IID_IVdsHbaPort;
typedef struct IVdsHbaPortVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IVdsHbaPort * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IVdsHbaPort * This);
	ULONG(STDMETHODCALLTYPE * Release) (IVdsHbaPort * This);
	HRESULT(STDMETHODCALLTYPE * GetProperties) (IVdsHbaPort * This, VDS_HBAPORT_PROP * pHbaPortProp);
	HRESULT(STDMETHODCALLTYPE * SetAllPathStatuses) (IVdsHbaPort * This, VDS_PATH_STATUS status);
	END_INTERFACE
}  IVdsHbaPortVtbl;
interface IVdsHbaPort
{
	CONST_VTBL struct IVdsHbaPortVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IVdsHbaPort_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IVdsHbaPort_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IVdsHbaPort_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IVdsHbaPort_GetProperties(This,pHbaPortProp) ( (This)->lpVtbl -> GetProperties(This,pHbaPortProp) )
#define IVdsHbaPort_SetAllPathStatuses(This,status) ( (This)->lpVtbl -> SetAllPathStatuses(This,status) )
#endif
#endif
#ifndef __IVdsIscsiInitiatorAdapter_INTERFACE_DEFINED__
#define __IVdsIscsiInitiatorAdapter_INTERFACE_DEFINED__
extern const IID IID_IVdsIscsiInitiatorAdapter;
typedef struct IVdsIscsiInitiatorAdapterVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IVdsIscsiInitiatorAdapter * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IVdsIscsiInitiatorAdapter * This);
	ULONG(STDMETHODCALLTYPE * Release) (IVdsIscsiInitiatorAdapter * This);
	HRESULT(STDMETHODCALLTYPE * GetProperties) (IVdsIscsiInitiatorAdapter * This, VDS_ISCSI_INITIATOR_ADAPTER_PROP * pInitiatorAdapterProp);
	HRESULT(STDMETHODCALLTYPE * QueryInitiatorPortals) (IVdsIscsiInitiatorAdapter * This, IEnumVdsObject ** ppEnum);
	HRESULT(STDMETHODCALLTYPE * LoginToTarget) (IVdsIscsiInitiatorAdapter * This, VDS_ISCSI_LOGIN_TYPE loginType, VDS_OBJECT_ID targetId, VDS_OBJECT_ID targetPortalId, VDS_OBJECT_ID initiatorPortalId, ULONG ulLoginFlags, BOOL bHeaderDigest, BOOL bDataDigest, VDS_ISCSI_AUTH_TYPE authType, IVdsAsync ** ppAsync);
	HRESULT(STDMETHODCALLTYPE * LogoutFromTarget) (IVdsIscsiInitiatorAdapter * This, VDS_OBJECT_ID targetId, IVdsAsync ** ppAsync);
	END_INTERFACE
}  IVdsIscsiInitiatorAdapterVtbl;
interface IVdsIscsiInitiatorAdapter
{
	CONST_VTBL struct IVdsIscsiInitiatorAdapterVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IVdsIscsiInitiatorAdapter_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IVdsIscsiInitiatorAdapter_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IVdsIscsiInitiatorAdapter_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IVdsIscsiInitiatorAdapter_GetProperties(This,pInitiatorAdapterProp) ( (This)->lpVtbl -> GetProperties(This,pInitiatorAdapterProp) )
#define IVdsIscsiInitiatorAdapter_QueryInitiatorPortals(This,ppEnum) ( (This)->lpVtbl -> QueryInitiatorPortals(This,ppEnum) )
#define IVdsIscsiInitiatorAdapter_LoginToTarget(This,loginType,targetId,targetPortalId,initiatorPortalId,ulLoginFlags,bHeaderDigest,bDataDigest,authType,ppAsync) ( (This)->lpVtbl -> LoginToTarget(This,loginType,targetId,targetPortalId,initiatorPortalId,ulLoginFlags,bHeaderDigest,bDataDigest,authType,ppAsync) )
#define IVdsIscsiInitiatorAdapter_LogoutFromTarget(This,targetId,ppAsync) ( (This)->lpVtbl -> LogoutFromTarget(This,targetId,ppAsync) )
#endif
#endif
#ifndef __IVdsIscsiInitiatorPortal_INTERFACE_DEFINED__
#define __IVdsIscsiInitiatorPortal_INTERFACE_DEFINED__
extern const IID IID_IVdsIscsiInitiatorPortal;
typedef struct IVdsIscsiInitiatorPortalVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IVdsIscsiInitiatorPortal * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IVdsIscsiInitiatorPortal * This);
	ULONG(STDMETHODCALLTYPE * Release) (IVdsIscsiInitiatorPortal * This);
	HRESULT(STDMETHODCALLTYPE * GetProperties) (IVdsIscsiInitiatorPortal * This, VDS_ISCSI_INITIATOR_PORTAL_PROP * pInitiatorPortalProp);
	HRESULT(STDMETHODCALLTYPE * GetInitiatorAdapter) (IVdsIscsiInitiatorPortal * This, IVdsIscsiInitiatorAdapter ** ppInitiatorAdapter);
	HRESULT(STDMETHODCALLTYPE * SetIpsecTunnelAddress) (IVdsIscsiInitiatorPortal * This, VDS_IPADDRESS * pTunnelAddress, VDS_IPADDRESS * pDestinationAddress);
	HRESULT(STDMETHODCALLTYPE * GetIpsecSecurity) (IVdsIscsiInitiatorPortal * This, VDS_OBJECT_ID targetPortalId, ULONGLONG * pullSecurityFlags);
	HRESULT(STDMETHODCALLTYPE * SetIpsecSecurity) (IVdsIscsiInitiatorPortal * This, VDS_OBJECT_ID targetPortalId, ULONGLONG ullSecurityFlags, VDS_ISCSI_IPSEC_KEY * pIpsecKey);
	END_INTERFACE
}  IVdsIscsiInitiatorPortalVtbl;
interface IVdsIscsiInitiatorPortal
{
	CONST_VTBL struct IVdsIscsiInitiatorPortalVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IVdsIscsiInitiatorPortal_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IVdsIscsiInitiatorPortal_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IVdsIscsiInitiatorPortal_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IVdsIscsiInitiatorPortal_GetProperties(This,pInitiatorPortalProp) ( (This)->lpVtbl -> GetProperties(This,pInitiatorPortalProp) )
#define IVdsIscsiInitiatorPortal_GetInitiatorAdapter(This,ppInitiatorAdapter) ( (This)->lpVtbl -> GetInitiatorAdapter(This,ppInitiatorAdapter) )
#define IVdsIscsiInitiatorPortal_SetIpsecTunnelAddress(This,pTunnelAddress,pDestinationAddress) ( (This)->lpVtbl -> SetIpsecTunnelAddress(This,pTunnelAddress,pDestinationAddress) )
#define IVdsIscsiInitiatorPortal_GetIpsecSecurity(This,targetPortalId,pullSecurityFlags) ( (This)->lpVtbl -> GetIpsecSecurity(This,targetPortalId,pullSecurityFlags) )
#define IVdsIscsiInitiatorPortal_SetIpsecSecurity(This,targetPortalId,ullSecurityFlags,pIpsecKey) ( (This)->lpVtbl -> SetIpsecSecurity(This,targetPortalId,ullSecurityFlags,pIpsecKey) )
#endif
#endif
#ifndef __IVdsDiskPartitionMF_INTERFACE_DEFINED__
#define __IVdsDiskPartitionMF_INTERFACE_DEFINED__
extern const IID IID_IVdsDiskPartitionMF;
typedef struct IVdsDiskPartitionMFVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IVdsDiskPartitionMF * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IVdsDiskPartitionMF * This);
	ULONG(STDMETHODCALLTYPE * Release) (IVdsDiskPartitionMF * This);
	HRESULT(STDMETHODCALLTYPE * GetPartitionFileSystemProperties) (IVdsDiskPartitionMF * This, ULONGLONG ullOffset, VDS_FILE_SYSTEM_PROP * pFileSystemProp);
	HRESULT(STDMETHODCALLTYPE * GetPartitionFileSystemTypeName) (IVdsDiskPartitionMF * This, ULONGLONG ullOffset, LPWSTR * ppwszFileSystemTypeName);
	HRESULT(STDMETHODCALLTYPE * QueryPartitionFileSystemFormatSupport) (IVdsDiskPartitionMF * This, ULONGLONG ullOffset, VDS_FILE_SYSTEM_FORMAT_SUPPORT_PROP ** ppFileSystemSupportProps, LONG * plNumberOfFileSystems);
	HRESULT(STDMETHODCALLTYPE * FormatPartitionEx) (IVdsDiskPartitionMF * This, ULONGLONG ullOffset, LPWSTR pwszFileSystemTypeName, USHORT usFileSystemRevision, ULONG ulDesiredUnitAllocationSize, LPWSTR pwszLabel, BOOL bForce, BOOL bQuickFormat, BOOL bEnableCompression, IVdsAsync ** ppAsync);
	END_INTERFACE
}  IVdsDiskPartitionMFVtbl;
interface IVdsDiskPartitionMF
{
	CONST_VTBL struct IVdsDiskPartitionMFVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IVdsDiskPartitionMF_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IVdsDiskPartitionMF_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IVdsDiskPartitionMF_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IVdsDiskPartitionMF_GetPartitionFileSystemProperties(This,ullOffset,pFileSystemProp) ( (This)->lpVtbl -> GetPartitionFileSystemProperties(This,ullOffset,pFileSystemProp) )
#define IVdsDiskPartitionMF_GetPartitionFileSystemTypeName(This,ullOffset,ppwszFileSystemTypeName) ( (This)->lpVtbl -> GetPartitionFileSystemTypeName(This,ullOffset,ppwszFileSystemTypeName) )
#define IVdsDiskPartitionMF_QueryPartitionFileSystemFormatSupport(This,ullOffset,ppFileSystemSupportProps,plNumberOfFileSystems) ( (This)->lpVtbl -> QueryPartitionFileSystemFormatSupport(This,ullOffset,ppFileSystemSupportProps,plNumberOfFileSystems) )
#define IVdsDiskPartitionMF_FormatPartitionEx(This,ullOffset,pwszFileSystemTypeName,usFileSystemRevision,ulDesiredUnitAllocationSize,pwszLabel,bForce,bQuickFormat,bEnableCompression,ppAsync) ( (This)->lpVtbl -> FormatPartitionEx(This,ullOffset,pwszFileSystemTypeName,usFileSystemRevision,ulDesiredUnitAllocationSize,pwszLabel,bForce,bQuickFormat,bEnableCompression,ppAsync) )
#endif
#endif
#ifndef __IVdsVolumeMF_INTERFACE_DEFINED__
#define __IVdsVolumeMF_INTERFACE_DEFINED__
extern const IID IID_IVdsVolumeMF;
typedef struct IVdsVolumeMFVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IVdsVolumeMF * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IVdsVolumeMF * This);
	ULONG(STDMETHODCALLTYPE * Release) (IVdsVolumeMF * This);
	HRESULT(STDMETHODCALLTYPE * GetFileSystemProperties) (IVdsVolumeMF * This, VDS_FILE_SYSTEM_PROP * pFileSystemProp);
	HRESULT(STDMETHODCALLTYPE * Format) (IVdsVolumeMF * This, VDS_FILE_SYSTEM_TYPE type, LPWSTR pwszLabel, DWORD dwUnitAllocationSize, BOOL bForce, BOOL bQuickFormat, BOOL bEnableCompression, IVdsAsync ** ppAsync);
	HRESULT(STDMETHODCALLTYPE * AddAccessPath) (IVdsVolumeMF * This, LPWSTR pwszPath);
	HRESULT(STDMETHODCALLTYPE * QueryAccessPaths) (IVdsVolumeMF * This, LPWSTR ** pwszPathArray, LONG * plNumberOfAccessPaths);
	HRESULT(STDMETHODCALLTYPE * QueryReparsePoints) (IVdsVolumeMF * This, VDS_REPARSE_POINT_PROP ** ppReparsePointProps, LONG * plNumberOfReparsePointProps);
	HRESULT(STDMETHODCALLTYPE * DeleteAccessPath) (IVdsVolumeMF * This, LPWSTR pwszPath, BOOL bForce);
	HRESULT(STDMETHODCALLTYPE * Mount) (IVdsVolumeMF * This);
	HRESULT(STDMETHODCALLTYPE * Dismount) (IVdsVolumeMF * This, BOOL bForce, BOOL bPermanent);
	HRESULT(STDMETHODCALLTYPE * SetFileSystemFlags) (IVdsVolumeMF * This, ULONG ulFlags);
	HRESULT(STDMETHODCALLTYPE * ClearFileSystemFlags) (IVdsVolumeMF * This, ULONG ulFlags);
	END_INTERFACE
}  IVdsVolumeMFVtbl;
interface IVdsVolumeMF
{
	CONST_VTBL struct IVdsVolumeMFVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IVdsVolumeMF_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IVdsVolumeMF_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IVdsVolumeMF_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IVdsVolumeMF_GetFileSystemProperties(This,pFileSystemProp) ( (This)->lpVtbl -> GetFileSystemProperties(This,pFileSystemProp) )
#define IVdsVolumeMF_Format(This,type,pwszLabel,dwUnitAllocationSize,bForce,bQuickFormat,bEnableCompression,ppAsync) ( (This)->lpVtbl -> Format(This,type,pwszLabel,dwUnitAllocationSize,bForce,bQuickFormat,bEnableCompression,ppAsync) )
#define IVdsVolumeMF_AddAccessPath(This,pwszPath) ( (This)->lpVtbl -> AddAccessPath(This,pwszPath) )
#define IVdsVolumeMF_QueryAccessPaths(This,pwszPathArray,plNumberOfAccessPaths) ( (This)->lpVtbl -> QueryAccessPaths(This,pwszPathArray,plNumberOfAccessPaths) )
#define IVdsVolumeMF_QueryReparsePoints(This,ppReparsePointProps,plNumberOfReparsePointProps) ( (This)->lpVtbl -> QueryReparsePoints(This,ppReparsePointProps,plNumberOfReparsePointProps) )
#define IVdsVolumeMF_DeleteAccessPath(This,pwszPath,bForce) ( (This)->lpVtbl -> DeleteAccessPath(This,pwszPath,bForce) )
#define IVdsVolumeMF_Mount(This) ( (This)->lpVtbl -> Mount(This) )
#define IVdsVolumeMF_Dismount(This,bForce,bPermanent) ( (This)->lpVtbl -> Dismount(This,bForce,bPermanent) )
#define IVdsVolumeMF_SetFileSystemFlags(This,ulFlags) ( (This)->lpVtbl -> SetFileSystemFlags(This,ulFlags) )
#define IVdsVolumeMF_ClearFileSystemFlags(This,ulFlags) ( (This)->lpVtbl -> ClearFileSystemFlags(This,ulFlags) )
#endif
#endif
#ifndef __IVdsVolumeMF2_INTERFACE_DEFINED__
#define __IVdsVolumeMF2_INTERFACE_DEFINED__
extern const IID IID_IVdsVolumeMF2;
typedef struct IVdsVolumeMF2Vtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IVdsVolumeMF2 * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IVdsVolumeMF2 * This);
	ULONG(STDMETHODCALLTYPE * Release) (IVdsVolumeMF2 * This);
	HRESULT(STDMETHODCALLTYPE * GetFileSystemTypeName) (IVdsVolumeMF2 * This, LPWSTR * ppwszFileSystemTypeName);
	HRESULT(STDMETHODCALLTYPE * QueryFileSystemFormatSupport) (IVdsVolumeMF2 * This, VDS_FILE_SYSTEM_FORMAT_SUPPORT_PROP ** ppFileSystemSupportProps, LONG * plNumberOfFileSystems);
	HRESULT(STDMETHODCALLTYPE * FormatEx) (IVdsVolumeMF2 * This, LPWSTR pwszFileSystemTypeName, USHORT usFileSystemRevision, ULONG ulDesiredUnitAllocationSize, LPWSTR pwszLabel, BOOL bForce, BOOL bQuickFormat, BOOL bEnableCompression, IVdsAsync ** ppAsync);
	END_INTERFACE
}  IVdsVolumeMF2Vtbl;
interface IVdsVolumeMF2
{
	CONST_VTBL struct IVdsVolumeMF2Vtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IVdsVolumeMF2_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IVdsVolumeMF2_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IVdsVolumeMF2_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IVdsVolumeMF2_GetFileSystemTypeName(This,ppwszFileSystemTypeName) ( (This)->lpVtbl -> GetFileSystemTypeName(This,ppwszFileSystemTypeName) )
#define IVdsVolumeMF2_QueryFileSystemFormatSupport(This,ppFileSystemSupportProps,plNumberOfFileSystems) ( (This)->lpVtbl -> QueryFileSystemFormatSupport(This,ppFileSystemSupportProps,plNumberOfFileSystems) )
#define IVdsVolumeMF2_FormatEx(This,pwszFileSystemTypeName,usFileSystemRevision,ulDesiredUnitAllocationSize,pwszLabel,bForce,bQuickFormat,bEnableCompression,ppAsync) ( (This)->lpVtbl -> FormatEx(This,pwszFileSystemTypeName,usFileSystemRevision,ulDesiredUnitAllocationSize,pwszLabel,bForce,bQuickFormat,bEnableCompression,ppAsync) )
#endif
#endif
#ifndef __IVdsVolumeShrink_INTERFACE_DEFINED__
#define __IVdsVolumeShrink_INTERFACE_DEFINED__
extern const IID IID_IVdsVolumeShrink;
typedef struct IVdsVolumeShrinkVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IVdsVolumeShrink * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IVdsVolumeShrink * This);
	ULONG(STDMETHODCALLTYPE * Release) (IVdsVolumeShrink * This);
	HRESULT(STDMETHODCALLTYPE * QueryMaxReclaimableBytes) (IVdsVolumeShrink * This, ULONGLONG * pullMaxNumberOfReclaimableBytes);
	HRESULT(STDMETHODCALLTYPE * Shrink) (IVdsVolumeShrink * This, ULONGLONG ullDesiredNumberOfReclaimableBytes, ULONGLONG ullMinNumberOfReclaimableBytes, IVdsAsync ** ppAsync);
	END_INTERFACE
}  IVdsVolumeShrinkVtbl;
interface IVdsVolumeShrink
{
	CONST_VTBL struct IVdsVolumeShrinkVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IVdsVolumeShrink_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IVdsVolumeShrink_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IVdsVolumeShrink_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IVdsVolumeShrink_QueryMaxReclaimableBytes(This,pullMaxNumberOfReclaimableBytes) ( (This)->lpVtbl -> QueryMaxReclaimableBytes(This,pullMaxNumberOfReclaimableBytes) )
#define IVdsVolumeShrink_Shrink(This,ullDesiredNumberOfReclaimableBytes,ullMinNumberOfReclaimableBytes,ppAsync) ( (This)->lpVtbl -> Shrink(This,ullDesiredNumberOfReclaimableBytes,ullMinNumberOfReclaimableBytes,ppAsync) )
#endif
#endif
#ifndef __IVdsSubSystemImportTarget_INTERFACE_DEFINED__
#define __IVdsSubSystemImportTarget_INTERFACE_DEFINED__
extern const IID IID_IVdsSubSystemImportTarget;
typedef struct IVdsSubSystemImportTargetVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IVdsSubSystemImportTarget * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IVdsSubSystemImportTarget * This);
	ULONG(STDMETHODCALLTYPE * Release) (IVdsSubSystemImportTarget * This);
	HRESULT(STDMETHODCALLTYPE * GetImportTarget) (IVdsSubSystemImportTarget * This, LPWSTR * ppwszIscsiName);
	HRESULT(STDMETHODCALLTYPE * SetImportTarget) (IVdsSubSystemImportTarget * This, LPWSTR pwszIscsiName);
	END_INTERFACE
}  IVdsSubSystemImportTargetVtbl;
interface IVdsSubSystemImportTarget
{
	CONST_VTBL struct IVdsSubSystemImportTargetVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IVdsSubSystemImportTarget_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IVdsSubSystemImportTarget_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IVdsSubSystemImportTarget_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IVdsSubSystemImportTarget_GetImportTarget(This,ppwszIscsiName) ( (This)->lpVtbl -> GetImportTarget(This,ppwszIscsiName) )
#define IVdsSubSystemImportTarget_SetImportTarget(This,pwszIscsiName) ( (This)->lpVtbl -> SetImportTarget(This,pwszIscsiName) )
#endif
#endif
#ifndef __IVdsIscsiPortalLocal_INTERFACE_DEFINED__
#define __IVdsIscsiPortalLocal_INTERFACE_DEFINED__
extern const IID IID_IVdsIscsiPortalLocal;
typedef struct IVdsIscsiPortalLocalVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IVdsIscsiPortalLocal * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IVdsIscsiPortalLocal * This);
	ULONG(STDMETHODCALLTYPE * Release) (IVdsIscsiPortalLocal * This);
	HRESULT(STDMETHODCALLTYPE * SetIpsecSecurityLocal) (IVdsIscsiPortalLocal * This, ULONGLONG ullSecurityFlags, VDS_ISCSI_IPSEC_KEY * pIpsecKey);
	END_INTERFACE
}  IVdsIscsiPortalLocalVtbl;
interface IVdsIscsiPortalLocal
{
	CONST_VTBL struct IVdsIscsiPortalLocalVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IVdsIscsiPortalLocal_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IVdsIscsiPortalLocal_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IVdsIscsiPortalLocal_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IVdsIscsiPortalLocal_SetIpsecSecurityLocal(This,ullSecurityFlags,pIpsecKey) ( (This)->lpVtbl -> SetIpsecSecurityLocal(This,ullSecurityFlags,pIpsecKey) )
#endif
#endif
#ifndef __IVdsServiceSAN_INTERFACE_DEFINED__
#define __IVdsServiceSAN_INTERFACE_DEFINED__
extern const IID IID_IVdsServiceSAN;
typedef struct IVdsServiceSANVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IVdsServiceSAN * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IVdsServiceSAN * This);
	ULONG(STDMETHODCALLTYPE * Release) (IVdsServiceSAN * This);
	HRESULT(STDMETHODCALLTYPE * GetSANPolicy) (IVdsServiceSAN * This, VDS_SAN_POLICY * pSanPolicy);
	HRESULT(STDMETHODCALLTYPE * SetSANPolicy) (IVdsServiceSAN * This, VDS_SAN_POLICY SanPolicy);
	END_INTERFACE
}  IVdsServiceSANVtbl;
interface IVdsServiceSAN
{
	CONST_VTBL struct IVdsServiceSANVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IVdsServiceSAN_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IVdsServiceSAN_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IVdsServiceSAN_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IVdsServiceSAN_GetSANPolicy(This,pSanPolicy) ( (This)->lpVtbl -> GetSANPolicy(This,pSanPolicy) )
#define IVdsServiceSAN_SetSANPolicy(This,SanPolicy) ( (This)->lpVtbl -> SetSANPolicy(This,SanPolicy) )
#endif
#endif
#ifndef __IVdsVolumeMF3_INTERFACE_DEFINED__
#define __IVdsVolumeMF3_INTERFACE_DEFINED__
extern const IID IID_IVdsVolumeMF3;
typedef struct IVdsVolumeMF3Vtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IVdsVolumeMF3 * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IVdsVolumeMF3 * This);
	ULONG(STDMETHODCALLTYPE * Release) (IVdsVolumeMF3 * This);
	HRESULT(STDMETHODCALLTYPE * QueryVolumeGuidPathnames) (IVdsVolumeMF3 * This, LPWSTR ** pwszPathArray, ULONG * pulNumberOfPaths);
	HRESULT(STDMETHODCALLTYPE * FormatEx2) (IVdsVolumeMF3 * This, LPWSTR pwszFileSystemTypeName, USHORT usFileSystemRevision, ULONG ulDesiredUnitAllocationSize, LPWSTR pwszLabel, DWORD Options, IVdsAsync ** ppAsync);
	HRESULT(STDMETHODCALLTYPE * OfflineVolume) (IVdsVolumeMF3 * This);
	END_INTERFACE
}  IVdsVolumeMF3Vtbl;
interface IVdsVolumeMF3
{
	CONST_VTBL struct IVdsVolumeMF3Vtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IVdsVolumeMF3_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IVdsVolumeMF3_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IVdsVolumeMF3_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IVdsVolumeMF3_QueryVolumeGuidPathnames(This,pwszPathArray,pulNumberOfPaths) ( (This)->lpVtbl -> QueryVolumeGuidPathnames(This,pwszPathArray,pulNumberOfPaths) )
#define IVdsVolumeMF3_FormatEx2(This,pwszFileSystemTypeName,usFileSystemRevision,ulDesiredUnitAllocationSize,pwszLabel,Options,ppAsync) ( (This)->lpVtbl -> FormatEx2(This,pwszFileSystemTypeName,usFileSystemRevision,ulDesiredUnitAllocationSize,pwszLabel,Options,ppAsync) )
#define IVdsVolumeMF3_OfflineVolume(This) ( (This)->lpVtbl -> OfflineVolume(This) )
#endif
#endif
#ifndef __IVdsDiskPartitionMF2_INTERFACE_DEFINED__
#define __IVdsDiskPartitionMF2_INTERFACE_DEFINED__
extern const IID IID_IVdsDiskPartitionMF2;
typedef struct IVdsDiskPartitionMF2Vtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IVdsDiskPartitionMF2 * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IVdsDiskPartitionMF2 * This);
	ULONG(STDMETHODCALLTYPE * Release) (IVdsDiskPartitionMF2 * This);
	HRESULT(STDMETHODCALLTYPE * FormatPartitionEx2) (IVdsDiskPartitionMF2 * This, ULONGLONG ullOffset, LPWSTR pwszFileSystemTypeName, USHORT usFileSystemRevision, ULONG ulDesiredUnitAllocationSize, LPWSTR pwszLabel, DWORD Options, IVdsAsync ** ppAsync);
	END_INTERFACE
}  IVdsDiskPartitionMF2Vtbl;
interface IVdsDiskPartitionMF2
{
	CONST_VTBL struct IVdsDiskPartitionMF2Vtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IVdsDiskPartitionMF2_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IVdsDiskPartitionMF2_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IVdsDiskPartitionMF2_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IVdsDiskPartitionMF2_FormatPartitionEx2(This,ullOffset,pwszFileSystemTypeName,usFileSystemRevision,ulDesiredUnitAllocationSize,pwszLabel,Options,ppAsync) ( (This)->lpVtbl -> FormatPartitionEx2(This,ullOffset,pwszFileSystemTypeName,usFileSystemRevision,ulDesiredUnitAllocationSize,pwszLabel,Options,ppAsync) )
#endif
#endif
#endif

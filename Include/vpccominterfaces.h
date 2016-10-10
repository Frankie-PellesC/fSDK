/*+@@file@@----------------------------------------------------------------*//*!
 \file		vpccominterfaces.h
 \par Description 
            Extension and update of headers for PellesC compiler suite.
 \par Project: 
            PellesC Headers extension
 \date		Created  on Sat Sep 17 16:40:47 2016
 \date		Modified on Sat Sep 17 16:40:47 2016
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
#ifndef __vpccominterfaces_h__
#define __vpccominterfaces_h__
#if __POCC__ >= 500
#pragma once
#endif
#ifndef __IVMAccountant_FWD_DEFINED__
#define __IVMAccountant_FWD_DEFINED__
typedef interface IVMAccountant IVMAccountant;
#endif
#ifndef __IVMHardDiskConnection_FWD_DEFINED__
#define __IVMHardDiskConnection_FWD_DEFINED__
typedef interface IVMHardDiskConnection IVMHardDiskConnection;
#endif
#ifndef __IVMHardDiskConnectionCollection_FWD_DEFINED__
#define __IVMHardDiskConnectionCollection_FWD_DEFINED__
typedef interface IVMHardDiskConnectionCollection IVMHardDiskConnectionCollection;
#endif
#ifndef __IVMFloppyDrive_FWD_DEFINED__
#define __IVMFloppyDrive_FWD_DEFINED__
typedef interface IVMFloppyDrive IVMFloppyDrive;
#endif
#ifndef __IVMFloppyDriveCollection_FWD_DEFINED__
#define __IVMFloppyDriveCollection_FWD_DEFINED__
typedef interface IVMFloppyDriveCollection IVMFloppyDriveCollection;
#endif
#ifndef __IVMDVDDrive_FWD_DEFINED__
#define __IVMDVDDrive_FWD_DEFINED__
typedef interface IVMDVDDrive IVMDVDDrive;
#endif
#ifndef __IVMDVDDriveCollection_FWD_DEFINED__
#define __IVMDVDDriveCollection_FWD_DEFINED__
typedef interface IVMDVDDriveCollection IVMDVDDriveCollection;
#endif
#ifndef __IVMGuestOS_FWD_DEFINED__
#define __IVMGuestOS_FWD_DEFINED__
typedef interface IVMGuestOS IVMGuestOS;
#endif
#ifndef __IVMNetworkAdapter_FWD_DEFINED__
#define __IVMNetworkAdapter_FWD_DEFINED__
typedef interface IVMNetworkAdapter IVMNetworkAdapter;
#endif
#ifndef __IVMNetworkAdapterCollection_FWD_DEFINED__
#define __IVMNetworkAdapterCollection_FWD_DEFINED__
typedef interface IVMNetworkAdapterCollection IVMNetworkAdapterCollection;
#endif
#ifndef __IVMDisplay_FWD_DEFINED__
#define __IVMDisplay_FWD_DEFINED__
typedef interface IVMDisplay IVMDisplay;
#endif
#ifndef __IVMMouse_FWD_DEFINED__
#define __IVMMouse_FWD_DEFINED__
typedef interface IVMMouse IVMMouse;
#endif
#ifndef __IVMKeyboard_FWD_DEFINED__
#define __IVMKeyboard_FWD_DEFINED__
typedef interface IVMKeyboard IVMKeyboard;
#endif
#ifndef __IVMParallelPort_FWD_DEFINED__
#define __IVMParallelPort_FWD_DEFINED__
typedef interface IVMParallelPort IVMParallelPort;
#endif
#ifndef __IVMParallelPortCollection_FWD_DEFINED__
#define __IVMParallelPortCollection_FWD_DEFINED__
typedef interface IVMParallelPortCollection IVMParallelPortCollection;
#endif
#ifndef __IVMSerialPort_FWD_DEFINED__
#define __IVMSerialPort_FWD_DEFINED__
typedef interface IVMSerialPort IVMSerialPort;
#endif
#ifndef __IVMSerialPortCollection_FWD_DEFINED__
#define __IVMSerialPortCollection_FWD_DEFINED__
typedef interface IVMSerialPortCollection IVMSerialPortCollection;
#endif
#ifndef __IVMTask_FWD_DEFINED__
#define __IVMTask_FWD_DEFINED__
typedef interface IVMTask IVMTask;
#endif
#ifndef __IVMUSBDevice_FWD_DEFINED__
#define __IVMUSBDevice_FWD_DEFINED__
typedef interface IVMUSBDevice IVMUSBDevice;
#endif
#ifndef __IVMUSBDeviceCollection_FWD_DEFINED__
#define __IVMUSBDeviceCollection_FWD_DEFINED__
typedef interface IVMUSBDeviceCollection IVMUSBDeviceCollection;
#endif
#ifndef __IVMVirtualMachine_FWD_DEFINED__
#define __IVMVirtualMachine_FWD_DEFINED__
typedef interface IVMVirtualMachine IVMVirtualMachine;
#endif
#ifndef __IVMVirtualMachineEvents_FWD_DEFINED__
#define __IVMVirtualMachineEvents_FWD_DEFINED__
typedef interface IVMVirtualMachineEvents IVMVirtualMachineEvents;
#endif
#ifndef __IVMVirtualMachineCollection_FWD_DEFINED__
#define __IVMVirtualMachineCollection_FWD_DEFINED__
typedef interface IVMVirtualMachineCollection IVMVirtualMachineCollection;
#endif
#ifndef __VMVirtualMachine_FWD_DEFINED__
#define __VMVirtualMachine_FWD_DEFINED__
typedef struct VMVirtualMachine VMVirtualMachine;
#endif
#ifndef __IVMSupportDriver_FWD_DEFINED__
#define __IVMSupportDriver_FWD_DEFINED__
typedef interface IVMSupportDriver IVMSupportDriver;
#endif
#ifndef __IVMSupportDriverCollection_FWD_DEFINED__
#define __IVMSupportDriverCollection_FWD_DEFINED__
typedef interface IVMSupportDriverCollection IVMSupportDriverCollection;
#endif
#ifndef __VMSupportDriver_FWD_DEFINED__
#define __VMSupportDriver_FWD_DEFINED__
typedef struct VMSupportDriver VMSupportDriver;
#endif
#ifndef __IVMHostInfo_FWD_DEFINED__
#define __IVMHostInfo_FWD_DEFINED__
typedef interface IVMHostInfo IVMHostInfo;
#endif
#ifndef __IVMVirtualNetworkCollection_FWD_DEFINED__
#define __IVMVirtualNetworkCollection_FWD_DEFINED__
typedef interface IVMVirtualNetworkCollection IVMVirtualNetworkCollection;
#endif
#ifndef __IVMVirtualNetwork_FWD_DEFINED__
#define __IVMVirtualNetwork_FWD_DEFINED__
typedef interface IVMVirtualNetwork IVMVirtualNetwork;
#endif
#ifndef __IVMHardDisk_FWD_DEFINED__
#define __IVMHardDisk_FWD_DEFINED__
typedef interface IVMHardDisk IVMHardDisk;
#endif
#ifndef __IVMTaskCollection_FWD_DEFINED__
#define __IVMTaskCollection_FWD_DEFINED__
typedef interface IVMTaskCollection IVMTaskCollection;
#endif
#ifndef __IVMVirtualPC_FWD_DEFINED__
#define __IVMVirtualPC_FWD_DEFINED__
typedef interface IVMVirtualPC IVMVirtualPC;
#endif
#ifndef __IVMVirtualPCEvents_FWD_DEFINED__
#define __IVMVirtualPCEvents_FWD_DEFINED__
typedef interface IVMVirtualPCEvents IVMVirtualPCEvents;
#endif
#ifndef __VMVirtualPC_FWD_DEFINED__
#define __VMVirtualPC_FWD_DEFINED__
typedef struct VMVirtualPC VMVirtualPC;
#endif
#ifndef __VMAccountant_FWD_DEFINED__
#define __VMAccountant_FWD_DEFINED__
typedef struct VMAccountant VMAccountant;
#endif
#ifndef __VMDisplay_FWD_DEFINED__
#define __VMDisplay_FWD_DEFINED__
typedef struct VMDisplay VMDisplay;
#endif
#ifndef __IVMDVDDriveEvents_FWD_DEFINED__
#define __IVMDVDDriveEvents_FWD_DEFINED__
typedef interface IVMDVDDriveEvents IVMDVDDriveEvents;
#endif
#ifndef __VMDVDDrive_FWD_DEFINED__
#define __VMDVDDrive_FWD_DEFINED__
typedef struct VMDVDDrive VMDVDDrive;
#endif
#ifndef __IVMFloppyDriveEvents_FWD_DEFINED__
#define __IVMFloppyDriveEvents_FWD_DEFINED__
typedef interface IVMFloppyDriveEvents IVMFloppyDriveEvents;
#endif
#ifndef __VMFloppyDrive_FWD_DEFINED__
#define __VMFloppyDrive_FWD_DEFINED__
typedef struct VMFloppyDrive VMFloppyDrive;
#endif
#ifndef __VMGuestOS_FWD_DEFINED__
#define __VMGuestOS_FWD_DEFINED__
typedef struct VMGuestOS VMGuestOS;
#endif
#ifndef __VMHardDiskConnection_FWD_DEFINED__
#define __VMHardDiskConnection_FWD_DEFINED__
typedef struct VMHardDiskConnection VMHardDiskConnection;
#endif
#ifndef __VMHardDisk_FWD_DEFINED__
#define __VMHardDisk_FWD_DEFINED__
typedef struct VMHardDisk VMHardDisk;
#endif
#ifndef __VMHostInfo_FWD_DEFINED__
#define __VMHostInfo_FWD_DEFINED__
typedef struct VMHostInfo VMHostInfo;
#endif
#ifndef __VMKeyboard_FWD_DEFINED__
#define __VMKeyboard_FWD_DEFINED__
typedef struct VMKeyboard VMKeyboard;
#endif
#ifndef __VMMouseDevice_FWD_DEFINED__
#define __VMMouseDevice_FWD_DEFINED__
typedef struct VMMouseDevice VMMouseDevice;
#endif
#ifndef __VMNetworkAdapter_FWD_DEFINED__
#define __VMNetworkAdapter_FWD_DEFINED__
typedef struct VMNetworkAdapter VMNetworkAdapter;
#endif
#ifndef __VMParallelPort_FWD_DEFINED__
#define __VMParallelPort_FWD_DEFINED__
typedef struct VMParallelPort VMParallelPort;
#endif
#ifndef __VMSerialPort_FWD_DEFINED__
#define __VMSerialPort_FWD_DEFINED__
typedef struct VMSerialPort VMSerialPort;
#endif
#ifndef __VMVirtualNetwork_FWD_DEFINED__
#define __VMVirtualNetwork_FWD_DEFINED__
typedef struct VMVirtualNetwork VMVirtualNetwork;
#endif
#ifndef __VMTask_FWD_DEFINED__
#define __VMTask_FWD_DEFINED__
typedef struct VMTask VMTask;
#endif
#ifndef __VMUSBDevice_FWD_DEFINED__
#define __VMUSBDevice_FWD_DEFINED__
typedef struct VMUSBDevice VMUSBDevice;
#endif
#include "unknwn.h"
#define	VM_E_TIMED_OUT	( ( ( HRESULT  )(( ( ( ( unsigned long  )1 << 31 )  | ( ( unsigned long  )4 << 16 )  )  | ( unsigned long  )0x202 ) ) | ( HRESULT  )(( 1 << 29 ) ) )  )
#define	VM_E_OUT_OF_RESOURCE	( ( ( HRESULT  )(( ( ( ( unsigned long  )1 << 31 )  | ( ( unsigned long  )4 << 16 )  )  | ( unsigned long  )0x203 ) ) | ( HRESULT  )(( 1 << 29 ) ) )  )
#define	VM_E_TOO_MANY_VMS	( ( ( HRESULT  )(( ( ( ( unsigned long  )1 << 31 )  | ( ( unsigned long  )4 << 16 )  )  | ( unsigned long  )0x204 ) ) | ( HRESULT  )(( 1 << 29 ) ) )  )
#define	VM_E_VM_NOT_RUNNING	( ( ( HRESULT  )(( ( ( ( unsigned long  )1 << 31 )  | ( ( unsigned long  )4 << 16 )  )  | ( unsigned long  )0x206 ) ) | ( HRESULT  )(( 1 << 29 ) ) )  )
#define	VM_E_VM_UNKNOWN	( ( ( HRESULT  )(( ( ( ( unsigned long  )1 << 31 )  | ( ( unsigned long  )4 << 16 )  )  | ( unsigned long  )0x207 ) ) | ( HRESULT  )(( 1 << 29 ) ) )  )
#define	VM_E_OUT_OF_RESERVE	( ( ( HRESULT  )(( ( ( ( unsigned long  )1 << 31 )  | ( ( unsigned long  )4 << 16 )  )  | ( unsigned long  )0x208 ) ) | ( HRESULT  )(( 1 << 29 ) ) )  )
#define	VM_E_APP_SHUTTING_DOWN	( ( ( HRESULT  )(( ( ( ( unsigned long  )1 << 31 )  | ( ( unsigned long  )4 << 16 )  )  | ( unsigned long  )0x209 ) ) | ( HRESULT  )(( 1 << 29 ) ) )  )
#define	VM_E_SCRIPT_ALREADY_EXISTS	( ( ( HRESULT  )(( ( ( ( unsigned long  )1 << 31 )  | ( ( unsigned long  )4 << 16 )  )  | ( unsigned long  )0x20a ) ) | ( HRESULT  )(( 1 << 29 ) ) )  )
#define	VM_E_VM_RUNNING_OR_SAVED	( ( ( HRESULT  )(( ( ( ( unsigned long  )1 << 31 )  | ( ( unsigned long  )4 << 16 )  )  | ( unsigned long  )0x20b ) ) | ( HRESULT  )(( 1 << 29 ) ) )  )
#define	VM_E_PREF_NOT_FOUND	( ( ( HRESULT  )(( ( ( ( unsigned long  )1 << 31 )  | ( ( unsigned long  )4 << 16 )  )  | ( unsigned long  )0x300 ) ) | ( HRESULT  )(( 1 << 29 ) ) )  )
#define	VM_E_PREF_ILLEGAL_VALUE	( ( ( HRESULT  )(( ( ( ( unsigned long  )1 << 31 )  | ( ( unsigned long  )4 << 16 )  )  | ( unsigned long  )0x301 ) ) | ( HRESULT  )(( 1 << 29 ) ) )  )
#define	VM_E_PREF_VM_ACTIVE	( ( ( HRESULT  )(( ( ( ( unsigned long  )1 << 31 )  | ( ( unsigned long  )4 << 16 )  )  | ( unsigned long  )0x302 ) ) | ( HRESULT  )(( 1 << 29 ) ) )  )
#define	VM_E_PREF_CONFIG_UPDATED_VM_ACTIVE	( ( ( HRESULT  )(( ( ( ( unsigned long  )1 << 31 )  | ( ( unsigned long  )4 << 16 )  )  | ( unsigned long  )0x303 ) ) | ( HRESULT  )(( 1 << 29 ) ) )  )
#define	VM_E_PREF_UNLOADABLE_ACTIVATION	( ( ( HRESULT  )(( ( ( ( unsigned long  )1 << 31 )  | ( ( unsigned long  )4 << 16 )  )  | ( unsigned long  )0x306 ) ) | ( HRESULT  )(( 1 << 29 ) ) )  )
#define	VM_E_PREF_SAVED_STATE_BAD_VERSION	( ( ( HRESULT  )(( ( ( ( unsigned long  )1 << 31 )  | ( ( unsigned long  )4 << 16 )  )  | ( unsigned long  )0x307 ) ) | ( HRESULT  )(( 1 << 29 ) ) )  )
#define	VM_E_PREF_SAVED_STATE_ACCESS_DENIED	( ( ( HRESULT  )(( ( ( ( unsigned long  )1 << 31 )  | ( ( unsigned long  )4 << 16 )  )  | ( unsigned long  )0x308 ) ) | ( HRESULT  )(( 1 << 29 ) ) )  )
#define	VM_E_CONFIG_NO_NAME	( ( ( HRESULT  )(( ( ( ( unsigned long  )1 << 31 )  | ( ( unsigned long  )4 << 16 )  )  | ( unsigned long  )0x400 ) ) | ( HRESULT  )(( 1 << 29 ) ) )  )
#define	VM_E_CONFIG_NAME_TOO_LONG	( ( ( HRESULT  )(( ( ( ( unsigned long  )1 << 31 )  | ( ( unsigned long  )4 << 16 )  )  | ( unsigned long  )0x401 ) ) | ( HRESULT  )(( 1 << 29 ) ) )  )
#define	VM_E_CONFIG_NAME_INVALID_CHAR	( ( ( HRESULT  )(( ( ( ( unsigned long  )1 << 31 )  | ( ( unsigned long  )4 << 16 )  )  | ( unsigned long  )0x402 ) ) | ( HRESULT  )(( 1 << 29 ) ) )  )
#define	VM_E_CONFIG_DUPLICATE_NAME	( ( ( HRESULT  )(( ( ( ( unsigned long  )1 << 31 )  | ( ( unsigned long  )4 << 16 )  )  | ( unsigned long  )0x403 ) ) | ( HRESULT  )(( 1 << 29 ) ) )  )
#define	VM_E_VM_RUNNING	( ( ( HRESULT  )(( ( ( ( unsigned long  )1 << 31 )  | ( ( unsigned long  )4 << 16 )  )  | ( unsigned long  )0x500 ) ) | ( HRESULT  )(( 1 << 29 ) ) )  )
#define	VM_E_VM_NO_SAVED_STATE	( ( ( HRESULT  )(( ( ( ( unsigned long  )1 << 31 )  | ( ( unsigned long  )4 << 16 )  )  | ( unsigned long  )0x501 ) ) | ( HRESULT  )(( 1 << 29 ) ) )  )
#define	VM_E_DRIVE_INVALID	( ( ( HRESULT  )(( ( ( ( unsigned long  )1 << 31 )  | ( ( unsigned long  )4 << 16 )  )  | ( unsigned long  )0x502 ) ) | ( HRESULT  )(( 1 << 29 ) ) )  )
#define	VM_E_DRIVE_BUS_LOC_IN_USE	( ( ( HRESULT  )(( ( ( ( unsigned long  )1 << 31 )  | ( ( unsigned long  )4 << 16 )  )  | ( unsigned long  )0x503 ) ) | ( HRESULT  )(( 1 << 29 ) ) )  )
#define	VM_E_ADDITIONS_NOT_AVAIL	( ( ( HRESULT  )(( ( ( ( unsigned long  )1 << 31 )  | ( ( unsigned long  )4 << 16 )  )  | ( unsigned long  )0x504 ) ) | ( HRESULT  )(( 1 << 29 ) ) )  )
#define	VM_E_ADDITIONS_FEATURE_NOT_AVAIL	( ( ( HRESULT  )(( ( ( ( unsigned long  )1 << 31 )  | ( ( unsigned long  )4 << 16 )  )  | ( unsigned long  )0x505 ) ) | ( HRESULT  )(( 1 << 29 ) ) )  )
#define	VM_E_FOLDER_NOT_SHARED	( ( ( HRESULT  )(( ( ( ( unsigned long  )1 << 31 )  | ( ( unsigned long  )4 << 16 )  )  | ( unsigned long  )0x506 ) ) | ( HRESULT  )(( 1 << 29 ) ) )  )
#define	VM_E_VM_PAUSED	( ( ( HRESULT  )(( ( ( ( unsigned long  )1 << 31 )  | ( ( unsigned long  )4 << 16 )  )  | ( unsigned long  )0x507 ) ) | ( HRESULT  )(( 1 << 29 ) ) )  )
#define	VM_E_MEDIA_UNMOUNT_FAIL	( ( ( HRESULT  )(( ( ( ( unsigned long  )1 << 31 )  | ( ( unsigned long  )4 << 16 )  )  | ( unsigned long  )0x508 ) ) | ( HRESULT  )(( 1 << 29 ) ) )  )
#define	VM_E_IMAGE_CAPTURE_FAIL	( ( ( HRESULT  )(( ( ( ( unsigned long  )1 << 31 )  | ( ( unsigned long  )4 << 16 )  )  | ( unsigned long  )0x650 ) ) | ( HRESULT  )(( 1 << 29 ) ) )  )
#define	VM_E_HOST_FLOPPY_CAPTURE_FAIL	( ( ( HRESULT  )(( ( ( ( unsigned long  )1 << 31 )  | ( ( unsigned long  )4 << 16 )  )  | ( unsigned long  )0x651 ) ) | ( HRESULT  )(( 1 << 29 ) ) )  )
#define	VM_E_NO_MEDIA_CAPTURED	( ( ( HRESULT  )(( ( ( ( unsigned long  )1 << 31 )  | ( ( unsigned long  )4 << 16 )  )  | ( unsigned long  )0x652 ) ) | ( HRESULT  )(( 1 << 29 ) ) )  )
#define	VM_E_PARENT_PATH_NOT_FOUND	( ( ( HRESULT  )(( ( ( ( unsigned long  )1 << 31 )  | ( ( unsigned long  )4 << 16 )  )  | ( unsigned long  )0x677 ) ) | ( HRESULT  )(( 1 << 29 ) ) )  )
#define	VM_E_FILE_TOO_LARGE_FOR_VOLUME	( ( ( HRESULT  )(( ( ( ( unsigned long  )1 << 31 )  | ( ( unsigned long  )4 << 16 )  )  | ( unsigned long  )0x679 ) ) | ( HRESULT  )(( 1 << 29 ) ) )  )
#define	VM_E_FILE_READ_ONLY	( ( ( HRESULT  )(( ( ( ( unsigned long  )1 << 31 )  | ( ( unsigned long  )4 << 16 )  )  | ( unsigned long  )0x67a ) ) | ( HRESULT  )(( 1 << 29 ) ) )  )
#define	VM_E_WRONG_HD_IMAGE_TYPE	( ( ( HRESULT  )(( ( ( ( unsigned long  )1 << 31 )  | ( ( unsigned long  )4 << 16 )  )  | ( unsigned long  )0x67b ) ) | ( HRESULT  )(( 1 << 29 ) ) )  )
#define	VM_E_HD_IMAGE_OPEN_FAIL	( ( ( HRESULT  )(( ( ( ( unsigned long  )1 << 31 )  | ( ( unsigned long  )4 << 16 )  )  | ( unsigned long  )0x67c ) ) | ( HRESULT  )(( 1 << 29 ) ) )  )
#define	VM_E_HOST_DRIVE_NOT_FOUND	( ( ( HRESULT  )(( ( ( ( unsigned long  )1 << 31 )  | ( ( unsigned long  )4 << 16 )  )  | ( unsigned long  )0x67e ) ) | ( HRESULT  )(( 1 << 29 ) ) )  )
#define	VM_E_HD_IMAGE_ACCESS	( ( ( HRESULT  )(( ( ( ( unsigned long  )1 << 31 )  | ( ( unsigned long  )4 << 16 )  )  | ( unsigned long  )0x681 ) ) | ( HRESULT  )(( 1 << 29 ) ) )  )
#define	VM_E_INVALID_HD_FILE	( ( ( HRESULT  )(( ( ( ( unsigned long  )1 << 31 )  | ( ( unsigned long  )4 << 16 )  )  | ( unsigned long  )0x682 ) ) | ( HRESULT  )(( 1 << 29 ) ) )  )
#define	VM_E_IMAGE_SIZE_TOO_LARGE	( ( ( HRESULT  )(( ( ( ( unsigned long  )1 << 31 )  | ( ( unsigned long  )4 << 16 )  )  | ( unsigned long  )0x683 ) ) | ( HRESULT  )(( 1 << 29 ) ) )  )
#define	VM_E_IMAGE_SIZE_TOO_SMALL	( ( ( HRESULT  )(( ( ( ( unsigned long  )1 << 31 )  | ( ( unsigned long  )4 << 16 )  )  | ( unsigned long  )0x684 ) ) | ( HRESULT  )(( 1 << 29 ) ) )  )
#define	VM_E_PARENT_CHILD_ID_MISMATCH	( ( ( HRESULT  )(( ( ( ( unsigned long  )1 << 31 )  | ( ( unsigned long  )4 << 16 )  )  | ( unsigned long  )0x685 ) ) | ( HRESULT  )(( 1 << 29 ) ) )  )
#define	VM_E_UNSUPPORTED_HD_DISK_TYPE	( ( ( HRESULT  )(( ( ( ( unsigned long  )1 << 31 )  | ( ( unsigned long  )4 << 16 )  )  | ( unsigned long  )0x686 ) ) | ( HRESULT  )(( 1 << 29 ) ) )  )
#define	VM_E_PARENT_MODIFIED	( ( ( HRESULT  )(( ( ( ( unsigned long  )1 << 31 )  | ( ( unsigned long  )4 << 16 )  )  | ( unsigned long  )0x687 ) ) | ( HRESULT  )(( 1 << 29 ) ) )  )
#define	VM_E_ADAPTER_NOT_FOUND	( ( ( HRESULT  )(( ( ( ( unsigned long  )1 << 31 )  | ( ( unsigned long  )4 << 16 )  )  | ( unsigned long  )0x700 ) ) | ( HRESULT  )(( 1 << 29 ) ) )  )
#define	VM_E_VIRTUAL_NETWORK_NAME_ALREADY_EXISTS	( ( ( HRESULT  )(( ( ( ( unsigned long  )1 << 31 )  | ( ( unsigned long  )4 << 16 )  )  | ( unsigned long  )0x701 ) ) | ( HRESULT  )(( 1 << 29 ) ) )  )
#define	VM_E_INVALID_VIRTUAL_NETWORK_ID	( ( ( HRESULT  )(( ( ( ( unsigned long  )1 << 31 )  | ( ( unsigned long  )4 << 16 )  )  | ( unsigned long  )0x702 ) ) | ( HRESULT  )(( 1 << 29 ) ) )  )
#define	VM_E_CANT_SET_ETHERNET_ADDRESS	( ( ( HRESULT  )(( ( ( ( unsigned long  )1 << 31 )  | ( ( unsigned long  )4 << 16 )  )  | ( unsigned long  )0x703 ) ) | ( HRESULT  )(( 1 << 29 ) ) )  )
#define	VM_E_INVALID_IP_ADDRESS	( ( ( HRESULT  )(( ( ( ( unsigned long  )1 << 31 )  | ( ( unsigned long  )4 << 16 )  )  | ( unsigned long  )0x704 ) ) | ( HRESULT  )(( 1 << 29 ) ) )  )
#define	VM_E_INVALID_NETWORK_ADDRESS	( ( ( HRESULT  )(( ( ( ( unsigned long  )1 << 31 )  | ( ( unsigned long  )4 << 16 )  )  | ( unsigned long  )0x705 ) ) | ( HRESULT  )(( 1 << 29 ) ) )  )
#define	VM_E_INVALID_NETWORK_MASK	( ( ( HRESULT  )(( ( ( ( unsigned long  )1 << 31 )  | ( ( unsigned long  )4 << 16 )  )  | ( unsigned long  )0x706 ) ) | ( HRESULT  )(( 1 << 29 ) ) )  )
#define	VM_E_INVALID_STARTING_ADDRESS	( ( ( HRESULT  )(( ( ( ( unsigned long  )1 << 31 )  | ( ( unsigned long  )4 << 16 )  )  | ( unsigned long  )0x707 ) ) | ( HRESULT  )(( 1 << 29 ) ) )  )
#define	VM_E_INVALID_ENDING_ADDRESS	( ( ( HRESULT  )(( ( ( ( unsigned long  )1 << 31 )  | ( ( unsigned long  )4 << 16 )  )  | ( unsigned long  )0x708 ) ) | ( HRESULT  )(( 1 << 29 ) ) )  )
#define	VM_E_INVALID_ADDRESS_RANGE	( ( ( HRESULT  )(( ( ( ( unsigned long  )1 << 31 )  | ( ( unsigned long  )4 << 16 )  )  | ( unsigned long  )0x709 ) ) | ( HRESULT  )(( 1 << 29 ) ) )  )
#define	VM_E_CANT_SET_DYNAMIC_MAC_ADDRESS	( ( ( HRESULT  )(( ( ( ( unsigned long  )1 << 31 )  | ( ( unsigned long  )4 << 16 )  )  | ( unsigned long  )0x70a ) ) | ( HRESULT  )(( 1 << 29 ) ) )  )
#define	VM_E_DRIVE_IN_USE	( ( ( HRESULT  )(( ( ( ( unsigned long  )1 << 31 )  | ( ( unsigned long  )4 << 16 )  )  | ( unsigned long  )0x727 ) ) | ( HRESULT  )(( 1 << 29 ) ) )  )
#define	VM_E_MEDIA_WRONG_TYPE	( ( ( HRESULT  )(( ( ( ( unsigned long  )1 << 31 )  | ( ( unsigned long  )4 << 16 )  )  | ( unsigned long  )0x728 ) ) | ( HRESULT  )(( 1 << 29 ) ) )  )
#define	VM_E_NO_LICENSE	( ( ( HRESULT  )(( ( ( ( unsigned long  )1 << 31 )  | ( ( unsigned long  )4 << 16 )  )  | ( unsigned long  )0x750 ) ) | ( HRESULT  )(( 1 << 29 ) ) )  )
#define	VM_E_INVALID_LICENSE	( ( ( HRESULT  )(( ( ( ( unsigned long  )1 << 31 )  | ( ( unsigned long  )4 << 16 )  )  | ( unsigned long  )0x751 ) ) | ( HRESULT  )(( 1 << 29 ) ) )  )
#define	VM_E_INVALID_LICENSE_KEY	( ( ( HRESULT  )(( ( ( ( unsigned long  )1 << 31 )  | ( ( unsigned long  )4 << 16 )  )  | ( unsigned long  )0x752 ) ) | ( HRESULT  )(( 1 << 29 ) ) )  )
#define	VM_E_INVALID_LICENSE_VALUE	( ( ( HRESULT  )(( ( ( ( unsigned long  )1 << 31 )  | ( ( unsigned long  )4 << 16 )  )  | ( unsigned long  )0x753 ) ) | ( HRESULT  )(( 1 << 29 ) ) )  )
#define	VM_E_LICENSE_ACTIVE_VM_LIMIT	( ( ( HRESULT  )(( ( ( ( unsigned long  )1 << 31 )  | ( ( unsigned long  )4 << 16 )  )  | ( unsigned long  )0x754 ) ) | ( HRESULT  )(( 1 << 29 ) ) )  )
#define	VM_E_LICENSE_HOST_MEMORY_LIMIT	( ( ( HRESULT  )(( ( ( ( unsigned long  )1 << 31 )  | ( ( unsigned long  )4 << 16 )  )  | ( unsigned long  )0x755 ) ) | ( HRESULT  )(( 1 << 29 ) ) )  )
#define	VM_E_LICENSE_VM_MEMORY_LIMIT	( ( ( HRESULT  )(( ( ( ( unsigned long  )1 << 31 )  | ( ( unsigned long  )4 << 16 )  )  | ( unsigned long  )0x756 ) ) | ( HRESULT  )(( 1 << 29 ) ) )  )
#define	VM_E_NOT_A_TRIAL_VERSION	( ( ( HRESULT  )(( ( ( ( unsigned long  )1 << 31 )  | ( ( unsigned long  )4 << 16 )  )  | ( unsigned long  )0x757 ) ) | ( HRESULT  )(( 1 << 29 ) ) )  )
#define	VM_E_NON_ACTIVE_TRIAL	( ( ( HRESULT  )(( ( ( ( unsigned long  )1 << 31 )  | ( ( unsigned long  )4 << 16 )  )  | ( unsigned long  )0x758 ) ) | ( HRESULT  )(( 1 << 29 ) ) )  )
#define	VM_E_MOUSE_NOT_ACTIVE	( ( ( HRESULT  )(( ( ( ( unsigned long  )1 << 31 )  | ( ( unsigned long  )4 << 16 )  )  | ( unsigned long  )0x800 ) ) | ( HRESULT  )(( 1 << 29 ) ) )  )
#define	VM_E_USING_ABSOLUTE_COORDINATES	( ( ( HRESULT  )(( ( ( ( unsigned long  )1 << 31 )  | ( ( unsigned long  )4 << 16 )  )  | ( unsigned long  )0x801 ) ) | ( HRESULT  )(( 1 << 29 ) ) )  )
#define	VM_E_USING_RELATIVE_COORDINATES	( ( ( HRESULT  )(( ( ( ( unsigned long  )1 << 31 )  | ( ( unsigned long  )4 << 16 )  )  | ( unsigned long  )0x802 ) ) | ( HRESULT  )(( 1 << 29 ) ) )  )
#define	VM_E_SET_EXCLUSIVE_MODE_FAIL	( ( ( HRESULT  )(( ( ( ( unsigned long  )1 << 31 )  | ( ( unsigned long  )4 << 16 )  )  | ( unsigned long  )0x825 ) ) | ( HRESULT  )(( 1 << 29 ) ) )  )
#define	VM_E_NO_DISPLAY	( ( ( HRESULT  )(( ( ( ( unsigned long  )1 << 31 )  | ( ( unsigned long  )4 << 16 )  )  | ( unsigned long  )0x850 ) ) | ( HRESULT  )(( 1 << 29 ) ) )  )
#define	VM_E_SECURITY_DUPLICATE_USER	( ( ( HRESULT  )(( ( ( ( unsigned long  )1 << 31 )  | ( ( unsigned long  )4 << 16 )  )  | ( unsigned long  )0x900 ) ) | ( HRESULT  )(( 1 << 29 ) ) )  )
#define	VM_E_USB_CONNECTOR_DRIVER_ERROR	( ( ( HRESULT  )(( ( ( ( unsigned long  )1 << 31 )  | ( ( unsigned long  )4 << 16 )  )  | ( unsigned long  )0x925 ) ) | ( HRESULT  )(( 1 << 29 ) ) )  )
#define	VM_E_USB_ATTACH_FAILED	( ( ( HRESULT  )(( ( ( ( unsigned long  )1 << 31 )  | ( ( unsigned long  )4 << 16 )  )  | ( unsigned long  )0x926 ) ) | ( HRESULT  )(( 1 << 29 ) ) )  )
#define	VM_E_USB_DETACH_FAILED	( ( ( HRESULT  )(( ( ( ( unsigned long  )1 << 31 )  | ( ( unsigned long  )4 << 16 )  )  | ( unsigned long  )0x927 ) ) | ( HRESULT  )(( 1 << 29 ) ) )  )
#define	VM_E_USB_ENUMERATION_FAILED	( ( ( HRESULT  )(( ( ( ( unsigned long  )1 << 31 )  | ( ( unsigned long  )4 << 16 )  )  | ( unsigned long  )0x928 ) ) | ( HRESULT  )(( 1 << 29 ) ) )  )
#define	VM_E_USB_EXTERNAL_VM	( ( ( HRESULT  )(( ( ( ( unsigned long  )1 << 31 )  | ( ( unsigned long  )4 << 16 )  )  | ( unsigned long  )0x929 ) ) | ( HRESULT  )(( 1 << 29 ) ) )  )
#define	VM_E_USB_ENUMERATION_FAILED_MORE_DEVICES	( ( ( HRESULT  )(( ( ( ( unsigned long  )1 << 31 )  | ( ( unsigned long  )4 << 16 )  )  | ( unsigned long  )0x930 ) ) | ( HRESULT  )(( 1 << 29 ) ) )  )
#define	VM_E_USB_ATTACH_FAILED_MORE_DEVICES	( ( ( HRESULT  )(( ( ( ( unsigned long  )1 << 31 )  | ( ( unsigned long  )4 << 16 )  )  | ( unsigned long  )0x931 ) ) | ( HRESULT  )(( 1 << 29 ) ) )  )
#define	VM_E_USB_ATTACH_FAILED_GP_ERROR	( ( ( HRESULT  )(( ( ( ( unsigned long  )1 << 31 )  | ( ( unsigned long  )4 << 16 )  )  | ( unsigned long  )0x932 ) ) | ( HRESULT  )(( 1 << 29 ) ) )  )
#define	VM_E_USB_ATTACH_FAILED_ALREADY_ASSIGNED	( ( ( HRESULT  )(( ( ( ( unsigned long  )1 << 31 )  | ( ( unsigned long  )4 << 16 )  )  | ( unsigned long  )0x933 ) ) | ( HRESULT  )(( 1 << 29 ) ) )  )
#define	VM_E_UNSUPPORTED_HARDWARE	( ( ( HRESULT  )(( ( ( ( unsigned long  )1 << 31 )  | ( ( unsigned long  )4 << 16 )  )  | ( unsigned long  )0x950 ) ) | ( HRESULT  )(( 1 << 29 ) ) )  )
#define	VM_E_HARDWARE_VIRTUALIZATION_DISABLED	( ( ( HRESULT  )(( ( ( ( unsigned long  )1 << 31 )  | ( ( unsigned long  )4 << 16 )  )  | ( unsigned long  )0x951 ) ) | ( HRESULT  )(( 1 << 29 ) ) )  )
#define	VM_E_VMVIRTUALPC_OLDER_VERSION	( ( ( HRESULT  )(( ( ( ( unsigned long  )1 << 31 )  | ( ( unsigned long  )4 << 16 )  )  | ( unsigned long  )0x952 ) ) | ( HRESULT  )(( 1 << 29 ) ) )  )
const ULONG kVSTypeLibrary_MajorVersion = 1;
const ULONG kVSTypeLibrary_MinorVersion = 0;
extern RPC_IF_HANDLE __MIDL_itf_vpccominterfaces_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_vpccominterfaces_0000_0000_v0_0_s_ifspec;
#ifndef __VirtualPC_LIBRARY_DEFINED__
#define __VirtualPC_LIBRARY_DEFINED__
typedef DECLSPEC_UUID("24e65079-6dc8-4655-802b-0baff6352998")
enum __MIDL___MIDL_itf_vpccominterfaces_0000_0000_0001
{
	vmEvent_VirtualPCStarted = 0,
	vmEvent_VirtualPCStopped = (vmEvent_VirtualPCStarted + 1),
	vmEvent_VirtualMachineLaunched = (vmEvent_VirtualPCStopped + 1),
	vmEvent_VirtualMachineStateRestored = (vmEvent_VirtualMachineLaunched + 1),
	vmEvent_VirtualMachineStateSaved = (vmEvent_VirtualMachineStateRestored + 1),
	vmEvent_VirtualMachineTurnedOff = (vmEvent_VirtualMachineStateSaved + 1),
	vmEvent_VirtualMachineTurnedOffByGuest = (vmEvent_VirtualMachineTurnedOff + 1),
	vmEvent_VirtualMachineReset = (vmEvent_VirtualMachineTurnedOffByGuest + 1),
	vmEvent_VirtualMachineNoHeartbeat = (vmEvent_VirtualMachineReset + 1),
	vmEvent_VirtualMachineProcessorError = (vmEvent_VirtualMachineNoHeartbeat + 1),
	vmEvent_VirtualMachineHostDiskSpaceWarning = (vmEvent_VirtualMachineProcessorError + 1),
	vmEvent_VirtualMachineHostDiskSpaceError = (vmEvent_VirtualMachineHostDiskSpaceWarning + 1)
} VMEventType;
typedef DECLSPEC_UUID("ba5a8f81-8bf3-497e-ada5-1d91ec015469")
enum __MIDL___MIDL_itf_vpccominterfaces_0000_0000_0002
{
	vmUndoAction_Discard = 0,
	vmUndoAction_Keep = (vmUndoAction_Discard + 1),
	vmUndoAction_Commit = (vmUndoAction_Keep + 1)
} VMUndoAction;
typedef DECLSPEC_UUID("942984fb-1d9c-4b65-8cb2-43928a452b7a")
enum __MIDL___MIDL_itf_vpccominterfaces_0000_0000_0003
{
	vmVMState_Invalid = 0,
	vmVMState_TurnedOff = (vmVMState_Invalid + 1),
	vmVMState_Saved = (vmVMState_TurnedOff + 1),
	vmVMState_TurningOn = (vmVMState_Saved + 1),
	vmVMState_Restoring = (vmVMState_TurningOn + 1),
	vmVMState_Running = (vmVMState_Restoring + 1),
	vmVMState_Paused = (vmVMState_Running + 1),
	vmVMState_Saving = (vmVMState_Paused + 1),
	vmVMState_TurningOff = (vmVMState_Saving + 1),
	vmVMState_MergingDrives = (vmVMState_TurningOff + 1),
	vmVMState_DeleteMachine = (vmVMState_MergingDrives + 1)
} VMVMState;
typedef DECLSPEC_UUID("a21f0a07-10bf-494f-a9b5-f5c6b3a646fe")
enum __MIDL___MIDL_itf_vpccominterfaces_0000_0000_0004
{
	vmDriveType_Null = 0,
	vmDriveType_HardDisk = (vmDriveType_Null + 1),
	vmDriveType_DVD = (vmDriveType_HardDisk + 1)
} VMDriveType;
typedef DECLSPEC_UUID("6657ecee-2a47-421b-9488-7f75d6588bca")
enum __MIDL___MIDL_itf_vpccominterfaces_0000_0000_0005
{
	vmDriveBusType_Invalid = -1,
	vmDriveBusType_IDE = 0,
	vmDriveBusType_SCSI = 1
} VMDriveBusType;
typedef DECLSPEC_UUID("37e07d0a-6aea-41a1-994f-fe134590263c")
enum __MIDL___MIDL_itf_vpccominterfaces_0000_0000_0006
{
	vmSerialPort_HostPort = 0,
	vmSerialPort_TextFile = (vmSerialPort_HostPort + 1),
	vmSerialPort_NamedPipe = (vmSerialPort_TextFile + 1),
	vmSerialPort_Null = (vmSerialPort_NamedPipe + 1)
} VMSerialPortType;
typedef DECLSPEC_UUID("263c1019-8285-4a3e-9f37-b2a361be28ac")
enum __MIDL___MIDL_itf_vpccominterfaces_0000_0000_0007
{
	vmShutdownAction_Save = 0,
	vmShutdownAction_TurnOff = (vmShutdownAction_Save + 1),
	vmShutdownAction_Shutdown = (vmShutdownAction_TurnOff + 1)
} VMShutdownAction;
typedef DECLSPEC_UUID("F581CDF8-B92B-475e-8167-6C448B642216")
enum __MIDL___MIDL_itf_vpccominterfaces_0000_0000_0008
{
	vmStartupOption_Normal = 0,
	vmStartupOption_FixParentTimestampMismatch = (vmStartupOption_Normal + 1)
} VMStartupOption;
typedef DECLSPEC_UUID("2af36ec0-cfe5-11dd-ad8b-0800200c9a66")
enum __MIDL___MIDL_itf_vpccominterfaces_0000_0000_0009
{
	vmEndpoint_NamedPipe = 0,
	vmEndpoint_TCPIP = (vmEndpoint_NamedPipe + 1)
} VMEndpointType;
typedef DECLSPEC_UUID("7aa05db2-2aec-4b9e-b011-875303424da6")
enum __MIDL___MIDL_itf_vpccominterfaces_0000_0000_0010
{
	vmLogoff_Normal = 0,
	vmLogoff_Forced = (vmLogoff_Normal + 1),
	vmLogoff_External = (vmLogoff_Forced + 1)
} VMLogoffType;
extern const IID DIID_IVMVirtualMachineEvents;
typedef DECLSPEC_UUID("e6ad021d-4c84-420d-a0fc-a7bd19250949")
enum __MIDL___MIDL_itf_vpccominterfaces_0001_0004_0001
{
	vmVirtualMachineEvent_StateChanged = 1,
	vmVirtualMachineEvent_RequestShutdown = (vmVirtualMachineEvent_StateChanged + 1),
	vmVirtualMachineEvent_Reset = (vmVirtualMachineEvent_RequestShutdown + 1),
	vmVirtualMachineEvent_TripleFault = (vmVirtualMachineEvent_Reset + 1),
	vmVirtualMachineEvent_HeartbeatStopped = (vmVirtualMachineEvent_TripleFault + 1),
	vmVirtualMachineEvent_ConfigurationChanged = (vmVirtualMachineEvent_HeartbeatStopped + 1),
	vmVirtualMachineEvent_EnhancedVideoModeChanged = (vmVirtualMachineEvent_ConfigurationChanged + 1),
	vmVirtualMachineEvent_AdditionsUninstalled = (vmVirtualMachineEvent_EnhancedVideoModeChanged + 1),
	vmVirtualMachineEvent_AdditionsAvailable = (vmVirtualMachineEvent_AdditionsUninstalled + 1),
	vmVirtualMachineEvent_GuestShutdown = (vmVirtualMachineEvent_AdditionsAvailable + 1),
	vmVirtualMachineEvent_GuestLogoff = (vmVirtualMachineEvent_GuestShutdown + 1),
	vmVirtualMachineEvent_DiskOutOfSpace = (vmVirtualMachineEvent_GuestLogoff + 1)
} VMVirtualMachineEvents;
typedef DECLSPEC_UUID("c3a4a6cc-d87b-4109-b352-e2e689d8b5af")
enum __MIDL___MIDL_itf_vpccominterfaces_0001_0006_0001
{
	vmSupportDriver_InvalidType = -1,
	vmSupportDriver_VirtualMachineMonitor = 0,
	vmSupportDriver_NetworkServices = (vmSupportDriver_VirtualMachineMonitor + 1)
} VMSupportDriverType;
typedef DECLSPEC_UUID("537df63f-75f4-4871-a1b1-3af93279f9cc")
enum __MIDL___MIDL_itf_vpccominterfaces_0001_0008_0001
{
	vmFloppyDiskImage_Unknown = 0,
	vmFloppyDiskImage_LowDensity = (vmFloppyDiskImage_Unknown + 1),
	vmFloppyDiskImage_HighDensity = (vmFloppyDiskImage_LowDensity + 1),
	vmFloppyDiskImage_DMF = (vmFloppyDiskImage_HighDensity + 1),
	vmFloppyDiskImage_LowDensitySingleSided = (vmFloppyDiskImage_DMF + 1),
	vmFloppyDiskImage_MediumDensity = (vmFloppyDiskImage_LowDensitySingleSided + 1),
	vmFloppyDiskImage_HighDensityMSS = (vmFloppyDiskImage_MediumDensity + 1)
} VMFloppyDiskImageType;
extern const IID DIID_IVMVirtualPCEvents;
typedef DECLSPEC_UUID("5b030e37-c851-4cd8-b44e-0dadf07d866e")
enum __MIDL___MIDL_itf_vpccominterfaces_0001_0009_0001
{
	vmVirtualPCEvent_ServiceEvent = 1,
	vmVirtualPCEvent_VMStateChange = (vmVirtualPCEvent_ServiceEvent + 1),
	vmVirtualPCEvent_EventLogged = (vmVirtualPCEvent_VMStateChange + 1),
	vmVirtualPCEvent_VMHeartbeatStopped = (vmVirtualPCEvent_EventLogged + 1)
} VMVirtualPCEvent;
typedef DECLSPEC_UUID("4c1fe6af-54dc-4c06-9efc-cf59819cbd47")
enum __MIDL___MIDL_itf_vpccominterfaces_0001_0011_0001
{
	vmVideoMode_TextMode = 0,
	vmVideoMode_CGAMode = (vmVideoMode_TextMode + 1),
	vmVideoMode_VGAMode = (vmVideoMode_CGAMode + 1),
	vmVideoMode_SVGAMode = (vmVideoMode_VGAMode + 1)
} VMDisplayVideoMode;
typedef DECLSPEC_UUID("739bd96f-00e0-45b3-938d-c9a3026e0145")
enum __MIDL___MIDL_itf_vpccominterfaces_0001_0012_0001
{
	vmDVDDrive_None = 0,
	vmDVDDrive_Image = (vmDVDDrive_None + 1),
	vmDVDDrive_HostDrive = (vmDVDDrive_Image + 1)
} VMDVDDriveAttachmentType;
extern const IID DIID_IVMDVDDriveEvents;
typedef DECLSPEC_UUID("27834185-e110-4dbf-9a99-ca56e6bff436")
enum __MIDL___MIDL_itf_vpccominterfaces_0001_0013_0001
{
	vmDVDDriveEvent_OnInsert = 1,
	vmDVDDriveEvent_OnEject = (vmDVDDriveEvent_OnInsert + 1)
} VMDVDDriveEvent;
typedef DECLSPEC_UUID("6af87b8a-9078-4993-99fc-86c0895f6b9c")
enum __MIDL___MIDL_itf_vpccominterfaces_0001_0015_0001
{
	vmFloppyDrive_None = 0,
	vmFloppyDrive_Image = (vmFloppyDrive_None + 1),
	vmFloppyDrive_HostDrive = (vmFloppyDrive_Image + 1)
} VMFloppyDriveAttachmentType;
extern const IID DIID_IVMFloppyDriveEvents;
typedef DECLSPEC_UUID("dfd0275a-ffd0-4c66-be25-fc73a4cff255")
enum __MIDL___MIDL_itf_vpccominterfaces_0001_0016_0001
{
	vmFloppyDriveEvent_OnInsert = 1,
	vmFloppyDriveEvent_OnEject = (vmFloppyDriveEvent_OnInsert + 1)
} vmFloppyDriveEvent;
typedef DECLSPEC_UUID("6A21E5E1-8A1F-4d79-A6CD-65332D187F75")
enum __MIDL___MIDL_itf_vpccominterfaces_0001_0018_0001
{
	vmGuestOS_Shutdown = 0,
	vmGuestOS_LogOff = (vmGuestOS_Shutdown + 1),
	vmGuestOS_Reboot = (vmGuestOS_LogOff + 1)
} VMGuestOSOperationType;
typedef DECLSPEC_UUID("1a075387-a2d1-47ea-aaad-b64288cc7d42")
enum __MIDL___MIDL_itf_vpccominterfaces_0001_0021_0001
{
	vmDiskType_Dynamic = 0,
	vmDiskType_FixedSize = (vmDiskType_Dynamic + 1),
	vmDiskType_Differencing = (vmDiskType_FixedSize + 1)
} VMHardDiskType;
typedef DECLSPEC_UUID("1e2d0ecf-d9f1-40d2-86f1-d4ff7d05ae33")
enum __MIDL___MIDL_itf_vpccominterfaces_0001_0024_0001
{
	vmMouseButton_Left = 1,
	vmMouseButton_Right = (vmMouseButton_Left + 1),
	vmMouseButton_Center = (vmMouseButton_Right + 1)
} VMMouseButton;
typedef DECLSPEC_UUID("ae3756b8-21e3-476a-a249-e032cf5be685")
enum __MIDL___MIDL_itf_vpccominterfaces_0001_0033_0001
{
	vmTaskResult_Success = 0,
	vmTaskResult_Cancelled = (vmTaskResult_Success + 1),
	vmTaskResult_UnexpectedError = (vmTaskResult_Cancelled + 1),
	vmTaskResult_OutOfMemoryError = (vmTaskResult_UnexpectedError + 1),
	vmTaskResult_DiskRelatedError = (vmTaskResult_OutOfMemoryError + 1),
	vmTaskResult_IncompatibleSavedStateError = (vmTaskResult_DiskRelatedError + 1),
	vmTaskResult_TimeOutError = (vmTaskResult_IncompatibleSavedStateError + 1),
	vmTaskResult_IllegalValueError = (vmTaskResult_TimeOutError + 1),
	vmTaskResult_ThreadCrashError = (vmTaskResult_IllegalValueError + 1),
	vmTaskResult_ShutdownAbort = (vmTaskResult_ThreadCrashError + 1)
} VMTaskResult;
typedef DECLSPEC_UUID("F3BD102C-E664-43fd-9E8E-4D4EF3E45021")
enum __MIDL___MIDL_itf_vpccominterfaces_0001_0035_0001
{
	vmUSBDeviceClass_InterfaceDescriptor = 0,
	vmUSBDeviceClass_Audio = 0x1,
	vmUSBDeviceClass_Communication = 0x2,
	vmUSBDeviceClass_HID = 0x3,
	vmUSBDeviceClass_Physical = 0x5,
	vmUSBDeviceClass_Image = 0x6,
	vmUSBDeviceClass_Printer = 0x7,
	vmUSBDeviceClass_MassStorage = 0x8,
	vmUSBDeviceClass_Hub = 0x9,
	vmUSBDeviceClass_CDCData = 0xa,
	vmUSBDeviceClass_SmartCard = 0xb,
	vmUSBDeviceClass_ContentSecurity = 0xd,
	vmUSBDeviceClass_Video = 0xe,
	vmUSBDeviceClass_PersonalHealthcare = 0xf,
	vmUSBDeviceClass_DiagnosticDevice = 0xdc,
	vmUSBDeviceClass_WirelessController = 0xe0,
	vmUSBDeviceClass_Miscellaneous = 0xef,
	vmUSBDeviceClass_ApplicationSpecific = 0xfe,
	vmUSBDeviceClass_VendorSpecific = 0xff
} VMUSBDeviceClassEnum;
extern const IID LIBID_VirtualPC;
#ifndef __IVMAccountant_INTERFACE_DEFINED__
#define __IVMAccountant_INTERFACE_DEFINED__
extern const IID IID_IVMAccountant;
typedef struct IVMAccountantVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE *QueryInterface) (IVMAccountant *This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE *AddRef) (IVMAccountant *This);
	ULONG(STDMETHODCALLTYPE *Release) (IVMAccountant *This);
	HRESULT(STDMETHODCALLTYPE *GetTypeInfoCount) (IVMAccountant *This, UINT *pctinfo);
	HRESULT(STDMETHODCALLTYPE *GetTypeInfo) (IVMAccountant *This, UINT iTInfo, LCID lcid, ITypeInfo **ppTInfo);
	HRESULT(STDMETHODCALLTYPE *GetIDsOfNames) (IVMAccountant *This, REFIID riid, LPOLESTR *rgszNames, UINT cNames, LCID lcid, DISPID *rgDispId);
	HRESULT(STDMETHODCALLTYPE *Invoke) (IVMAccountant *This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS *pDispParams, VARIANT *pVarResult, EXCEPINFO *pExcepInfo, UINT *puArgErr);
	HRESULT(STDMETHODCALLTYPE *get_CPUUtilization) (IVMAccountant *This, long *percentageUtilization);
	HRESULT(STDMETHODCALLTYPE *get_CPUUtilizationHistory) (IVMAccountant *This, VARIANT *percentageUtilization);
	HRESULT(STDMETHODCALLTYPE *get_DiskBytesRead) (IVMAccountant *This, VARIANT *bytesRead);
	HRESULT(STDMETHODCALLTYPE *get_DiskBytesWritten) (IVMAccountant *This, VARIANT *bytesWritten);
	HRESULT(STDMETHODCALLTYPE *get_NetworkBytesReceived) (IVMAccountant *This, VARIANT *bytesReceived);
	HRESULT(STDMETHODCALLTYPE *get_NetworkBytesSent) (IVMAccountant *This, VARIANT *bytesSent);
	HRESULT(STDMETHODCALLTYPE *get_UpTime) (IVMAccountant *This, long *secondsAlive);
	END_INTERFACE
}  IVMAccountantVtbl;
interface IVMAccountant
{
	CONST_VTBL struct IVMAccountantVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IVMAccountant_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IVMAccountant_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IVMAccountant_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IVMAccountant_GetTypeInfoCount(This,pctinfo) ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define IVMAccountant_GetTypeInfo(This,iTInfo,lcid,ppTInfo) ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define IVMAccountant_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define IVMAccountant_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define IVMAccountant_get_CPUUtilization(This,percentageUtilization) ( (This)->lpVtbl -> get_CPUUtilization(This,percentageUtilization) )
#define IVMAccountant_get_CPUUtilizationHistory(This,percentageUtilization) ( (This)->lpVtbl -> get_CPUUtilizationHistory(This,percentageUtilization) )
#define IVMAccountant_get_DiskBytesRead(This,bytesRead) ( (This)->lpVtbl -> get_DiskBytesRead(This,bytesRead) )
#define IVMAccountant_get_DiskBytesWritten(This,bytesWritten) ( (This)->lpVtbl -> get_DiskBytesWritten(This,bytesWritten) )
#define IVMAccountant_get_NetworkBytesReceived(This,bytesReceived) ( (This)->lpVtbl -> get_NetworkBytesReceived(This,bytesReceived) )
#define IVMAccountant_get_NetworkBytesSent(This,bytesSent) ( (This)->lpVtbl -> get_NetworkBytesSent(This,bytesSent) )
#define IVMAccountant_get_UpTime(This,secondsAlive) ( (This)->lpVtbl -> get_UpTime(This,secondsAlive) )
#endif
#endif
#ifndef __IVMHardDiskConnection_INTERFACE_DEFINED__
#define __IVMHardDiskConnection_INTERFACE_DEFINED__
extern const IID IID_IVMHardDiskConnection;
typedef struct IVMHardDiskConnectionVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE *QueryInterface) (IVMHardDiskConnection *This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE *AddRef) (IVMHardDiskConnection *This);
	ULONG(STDMETHODCALLTYPE *Release) (IVMHardDiskConnection *This);
	HRESULT(STDMETHODCALLTYPE *GetTypeInfoCount) (IVMHardDiskConnection *This, UINT *pctinfo);
	HRESULT(STDMETHODCALLTYPE *GetTypeInfo) (IVMHardDiskConnection *This, UINT iTInfo, LCID lcid, ITypeInfo **ppTInfo);
	HRESULT(STDMETHODCALLTYPE *GetIDsOfNames) (IVMHardDiskConnection *This, REFIID riid, LPOLESTR *rgszNames, UINT cNames, LCID lcid, DISPID *rgDispId);
	HRESULT(STDMETHODCALLTYPE *Invoke) (IVMHardDiskConnection *This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS *pDispParams, VARIANT *pVarResult, EXCEPINFO *pExcepInfo, UINT *puArgErr);
	HRESULT(STDMETHODCALLTYPE *get_HardDisk) (IVMHardDiskConnection *This, IVMHardDisk **hardDisk);
	HRESULT(STDMETHODCALLTYPE *get_UndoHardDisk) (IVMHardDiskConnection *This, IVMHardDisk **undoHardDisk);
	HRESULT(STDMETHODCALLTYPE *SetBusLocation) (IVMHardDiskConnection *This, long vmBusNumber, long vmDeviceNumber);
	HRESULT(STDMETHODCALLTYPE *get_BusNumber) (IVMHardDiskConnection *This, long *vmBusNumber);
	HRESULT(STDMETHODCALLTYPE *get_DeviceNumber) (IVMHardDiskConnection *This, long *vmDeviceNumber);
	END_INTERFACE
}  IVMHardDiskConnectionVtbl;
interface IVMHardDiskConnection
{
	CONST_VTBL struct IVMHardDiskConnectionVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IVMHardDiskConnection_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IVMHardDiskConnection_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IVMHardDiskConnection_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IVMHardDiskConnection_GetTypeInfoCount(This,pctinfo) ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define IVMHardDiskConnection_GetTypeInfo(This,iTInfo,lcid,ppTInfo) ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define IVMHardDiskConnection_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define IVMHardDiskConnection_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define IVMHardDiskConnection_get_HardDisk(This,hardDisk) ( (This)->lpVtbl -> get_HardDisk(This,hardDisk) )
#define IVMHardDiskConnection_get_UndoHardDisk(This,undoHardDisk) ( (This)->lpVtbl -> get_UndoHardDisk(This,undoHardDisk) )
#define IVMHardDiskConnection_SetBusLocation(This,vmBusNumber,vmDeviceNumber) ( (This)->lpVtbl -> SetBusLocation(This,vmBusNumber,vmDeviceNumber) )
#define IVMHardDiskConnection_get_BusNumber(This,vmBusNumber) ( (This)->lpVtbl -> get_BusNumber(This,vmBusNumber) )
#define IVMHardDiskConnection_get_DeviceNumber(This,vmDeviceNumber) ( (This)->lpVtbl -> get_DeviceNumber(This,vmDeviceNumber) )
#endif
#endif
#ifndef __IVMHardDiskConnectionCollection_INTERFACE_DEFINED__
#define __IVMHardDiskConnectionCollection_INTERFACE_DEFINED__
extern const IID IID_IVMHardDiskConnectionCollection;
typedef struct IVMHardDiskConnectionCollectionVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE *QueryInterface) (IVMHardDiskConnectionCollection *This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE *AddRef) (IVMHardDiskConnectionCollection *This);
	ULONG(STDMETHODCALLTYPE *Release) (IVMHardDiskConnectionCollection *This);
	HRESULT(STDMETHODCALLTYPE *GetTypeInfoCount) (IVMHardDiskConnectionCollection *This, UINT *pctinfo);
	HRESULT(STDMETHODCALLTYPE *GetTypeInfo) (IVMHardDiskConnectionCollection *This, UINT iTInfo, LCID lcid, ITypeInfo **ppTInfo);
	HRESULT(STDMETHODCALLTYPE *GetIDsOfNames) (IVMHardDiskConnectionCollection *This, REFIID riid, LPOLESTR *rgszNames, UINT cNames, LCID lcid, DISPID *rgDispId);
	HRESULT(STDMETHODCALLTYPE *Invoke) (IVMHardDiskConnectionCollection *This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS *pDispParams, VARIANT *pVarResult, EXCEPINFO *pExcepInfo, UINT *puArgErr);
	HRESULT(STDMETHODCALLTYPE *get_Count) (IVMHardDiskConnectionCollection *This, long *count);
	HRESULT(STDMETHODCALLTYPE *get_Item) (IVMHardDiskConnectionCollection *This, long index, IVMHardDiskConnection **hardDiskConnection);
	HRESULT(STDMETHODCALLTYPE *get__NewEnum) (IVMHardDiskConnectionCollection *This, IUnknown **enumerator);
	END_INTERFACE
}  IVMHardDiskConnectionCollectionVtbl;
interface IVMHardDiskConnectionCollection
{
	CONST_VTBL struct IVMHardDiskConnectionCollectionVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IVMHardDiskConnectionCollection_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IVMHardDiskConnectionCollection_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IVMHardDiskConnectionCollection_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IVMHardDiskConnectionCollection_GetTypeInfoCount(This,pctinfo) ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define IVMHardDiskConnectionCollection_GetTypeInfo(This,iTInfo,lcid,ppTInfo) ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define IVMHardDiskConnectionCollection_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define IVMHardDiskConnectionCollection_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define IVMHardDiskConnectionCollection_get_Count(This,count) ( (This)->lpVtbl -> get_Count(This,count) )
#define IVMHardDiskConnectionCollection_get_Item(This,index,hardDiskConnection) ( (This)->lpVtbl -> get_Item(This,index,hardDiskConnection) )
#define IVMHardDiskConnectionCollection_get__NewEnum(This,enumerator) ( (This)->lpVtbl -> get__NewEnum(This,enumerator) )
#endif
#endif
#ifndef __IVMFloppyDrive_INTERFACE_DEFINED__
#define __IVMFloppyDrive_INTERFACE_DEFINED__
extern const IID IID_IVMFloppyDrive;
typedef struct IVMFloppyDriveVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE *QueryInterface) (IVMFloppyDrive *This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE *AddRef) (IVMFloppyDrive *This);
	ULONG(STDMETHODCALLTYPE *Release) (IVMFloppyDrive *This);
	HRESULT(STDMETHODCALLTYPE *GetTypeInfoCount) (IVMFloppyDrive *This, UINT *pctinfo);
	HRESULT(STDMETHODCALLTYPE *GetTypeInfo) (IVMFloppyDrive *This, UINT iTInfo, LCID lcid, ITypeInfo **ppTInfo);
	HRESULT(STDMETHODCALLTYPE *GetIDsOfNames) (IVMFloppyDrive *This, REFIID riid, LPOLESTR *rgszNames, UINT cNames, LCID lcid, DISPID *rgDispId);
	HRESULT(STDMETHODCALLTYPE *Invoke) (IVMFloppyDrive *This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS *pDispParams, VARIANT *pVarResult, EXCEPINFO *pExcepInfo, UINT *puArgErr);
	HRESULT(STDMETHODCALLTYPE *AttachImage) (IVMFloppyDrive *This, BSTR mediaImagePath);
	HRESULT(STDMETHODCALLTYPE *ReleaseImage) (IVMFloppyDrive *This);
	HRESULT(STDMETHODCALLTYPE *get_ImageFile) (IVMFloppyDrive *This, BSTR *imageFile);
	HRESULT(STDMETHODCALLTYPE *AttachHostDrive) (IVMFloppyDrive *This, BSTR driveLetter);
	HRESULT(STDMETHODCALLTYPE *ReleaseHostDrive) (IVMFloppyDrive *This);
	HRESULT(STDMETHODCALLTYPE *get_HostDriveLetter) (IVMFloppyDrive *This, BSTR *driveLetter);
	HRESULT(STDMETHODCALLTYPE *get_DriveNumber) (IVMFloppyDrive *This, long *driveNumber);
	HRESULT(STDMETHODCALLTYPE *get_Attachment) (IVMFloppyDrive *This, VMFloppyDriveAttachmentType *driveAttachment);
	END_INTERFACE
}  IVMFloppyDriveVtbl;
interface IVMFloppyDrive
{
	CONST_VTBL struct IVMFloppyDriveVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IVMFloppyDrive_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IVMFloppyDrive_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IVMFloppyDrive_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IVMFloppyDrive_GetTypeInfoCount(This,pctinfo) ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define IVMFloppyDrive_GetTypeInfo(This,iTInfo,lcid,ppTInfo) ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define IVMFloppyDrive_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define IVMFloppyDrive_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define IVMFloppyDrive_AttachImage(This,mediaImagePath) ( (This)->lpVtbl -> AttachImage(This,mediaImagePath) )
#define IVMFloppyDrive_ReleaseImage(This) ( (This)->lpVtbl -> ReleaseImage(This) )
#define IVMFloppyDrive_get_ImageFile(This,imageFile) ( (This)->lpVtbl -> get_ImageFile(This,imageFile) )
#define IVMFloppyDrive_AttachHostDrive(This,driveLetter) ( (This)->lpVtbl -> AttachHostDrive(This,driveLetter) )
#define IVMFloppyDrive_ReleaseHostDrive(This) ( (This)->lpVtbl -> ReleaseHostDrive(This) )
#define IVMFloppyDrive_get_HostDriveLetter(This,driveLetter) ( (This)->lpVtbl -> get_HostDriveLetter(This,driveLetter) )
#define IVMFloppyDrive_get_DriveNumber(This,driveNumber) ( (This)->lpVtbl -> get_DriveNumber(This,driveNumber) )
#define IVMFloppyDrive_get_Attachment(This,driveAttachment) ( (This)->lpVtbl -> get_Attachment(This,driveAttachment) )
#endif
#endif
#ifndef __IVMFloppyDriveCollection_INTERFACE_DEFINED__
#define __IVMFloppyDriveCollection_INTERFACE_DEFINED__
extern const IID IID_IVMFloppyDriveCollection;
typedef struct IVMFloppyDriveCollectionVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE *QueryInterface) (IVMFloppyDriveCollection *This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE *AddRef) (IVMFloppyDriveCollection *This);
	ULONG(STDMETHODCALLTYPE *Release) (IVMFloppyDriveCollection *This);
	HRESULT(STDMETHODCALLTYPE *GetTypeInfoCount) (IVMFloppyDriveCollection *This, UINT *pctinfo);
	HRESULT(STDMETHODCALLTYPE *GetTypeInfo) (IVMFloppyDriveCollection *This, UINT iTInfo, LCID lcid, ITypeInfo **ppTInfo);
	HRESULT(STDMETHODCALLTYPE *GetIDsOfNames) (IVMFloppyDriveCollection *This, REFIID riid, LPOLESTR *rgszNames, UINT cNames, LCID lcid, DISPID *rgDispId);
	HRESULT(STDMETHODCALLTYPE *Invoke) (IVMFloppyDriveCollection *This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS *pDispParams, VARIANT *pVarResult, EXCEPINFO *pExcepInfo, UINT *puArgErr);
	HRESULT(STDMETHODCALLTYPE *get_Count) (IVMFloppyDriveCollection *This, long *count);
	HRESULT(STDMETHODCALLTYPE *get_Item) (IVMFloppyDriveCollection *This, long index, IVMFloppyDrive **floppyDrive);
	HRESULT(STDMETHODCALLTYPE *get__NewEnum) (IVMFloppyDriveCollection *This, IUnknown **enumerator);
	END_INTERFACE
}  IVMFloppyDriveCollectionVtbl;
interface IVMFloppyDriveCollection
{
	CONST_VTBL struct IVMFloppyDriveCollectionVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IVMFloppyDriveCollection_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IVMFloppyDriveCollection_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IVMFloppyDriveCollection_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IVMFloppyDriveCollection_GetTypeInfoCount(This,pctinfo) ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define IVMFloppyDriveCollection_GetTypeInfo(This,iTInfo,lcid,ppTInfo) ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define IVMFloppyDriveCollection_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define IVMFloppyDriveCollection_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define IVMFloppyDriveCollection_get_Count(This,count) ( (This)->lpVtbl -> get_Count(This,count) )
#define IVMFloppyDriveCollection_get_Item(This,index,floppyDrive) ( (This)->lpVtbl -> get_Item(This,index,floppyDrive) )
#define IVMFloppyDriveCollection_get__NewEnum(This,enumerator) ( (This)->lpVtbl -> get__NewEnum(This,enumerator) )
#endif
#endif
#ifndef __IVMDVDDrive_INTERFACE_DEFINED__
#define __IVMDVDDrive_INTERFACE_DEFINED__
extern const IID IID_IVMDVDDrive;
typedef struct IVMDVDDriveVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE *QueryInterface) (IVMDVDDrive *This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE *AddRef) (IVMDVDDrive *This);
	ULONG(STDMETHODCALLTYPE *Release) (IVMDVDDrive *This);
	HRESULT(STDMETHODCALLTYPE *GetTypeInfoCount) (IVMDVDDrive *This, UINT *pctinfo);
	HRESULT(STDMETHODCALLTYPE *GetTypeInfo) (IVMDVDDrive *This, UINT iTInfo, LCID lcid, ITypeInfo **ppTInfo);
	HRESULT(STDMETHODCALLTYPE *GetIDsOfNames) (IVMDVDDrive *This, REFIID riid, LPOLESTR *rgszNames, UINT cNames, LCID lcid, DISPID *rgDispId);
	HRESULT(STDMETHODCALLTYPE *Invoke) (IVMDVDDrive *This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS *pDispParams, VARIANT *pVarResult, EXCEPINFO *pExcepInfo, UINT *puArgErr);
	HRESULT(STDMETHODCALLTYPE *SetBusLocation) (IVMDVDDrive *This, long busNumber, long deviceNumber);
	HRESULT(STDMETHODCALLTYPE *get_BusNumber) (IVMDVDDrive *This, long *vmBusNumber);
	HRESULT(STDMETHODCALLTYPE *get_DeviceNumber) (IVMDVDDrive *This, long *vmDeviceNumber);
	HRESULT(STDMETHODCALLTYPE *AttachImage) (IVMDVDDrive *This, BSTR imagePath);
	HRESULT(STDMETHODCALLTYPE *ReleaseImage) (IVMDVDDrive *This);
	HRESULT(STDMETHODCALLTYPE *get_ImageFile) (IVMDVDDrive *This, BSTR *imagePath);
	HRESULT(STDMETHODCALLTYPE *AttachHostDrive) (IVMDVDDrive *This, BSTR driveLetter);
	HRESULT(STDMETHODCALLTYPE *ReleaseHostDrive) (IVMDVDDrive *This);
	HRESULT(STDMETHODCALLTYPE *get_HostDriveLetter) (IVMDVDDrive *This, BSTR *driveLetter);
	HRESULT(STDMETHODCALLTYPE *get_Attachment) (IVMDVDDrive *This, VMDVDDriveAttachmentType *driveAttachment);
	END_INTERFACE
}  IVMDVDDriveVtbl;
interface IVMDVDDrive
{
	CONST_VTBL struct IVMDVDDriveVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IVMDVDDrive_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IVMDVDDrive_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IVMDVDDrive_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IVMDVDDrive_GetTypeInfoCount(This,pctinfo) ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define IVMDVDDrive_GetTypeInfo(This,iTInfo,lcid,ppTInfo) ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define IVMDVDDrive_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define IVMDVDDrive_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define IVMDVDDrive_SetBusLocation(This,busNumber,deviceNumber) ( (This)->lpVtbl -> SetBusLocation(This,busNumber,deviceNumber) )
#define IVMDVDDrive_get_BusNumber(This,vmBusNumber) ( (This)->lpVtbl -> get_BusNumber(This,vmBusNumber) )
#define IVMDVDDrive_get_DeviceNumber(This,vmDeviceNumber) ( (This)->lpVtbl -> get_DeviceNumber(This,vmDeviceNumber) )
#define IVMDVDDrive_AttachImage(This,imagePath) ( (This)->lpVtbl -> AttachImage(This,imagePath) )
#define IVMDVDDrive_ReleaseImage(This) ( (This)->lpVtbl -> ReleaseImage(This) )
#define IVMDVDDrive_get_ImageFile(This,imagePath) ( (This)->lpVtbl -> get_ImageFile(This,imagePath) )
#define IVMDVDDrive_AttachHostDrive(This,driveLetter) ( (This)->lpVtbl -> AttachHostDrive(This,driveLetter) )
#define IVMDVDDrive_ReleaseHostDrive(This) ( (This)->lpVtbl -> ReleaseHostDrive(This) )
#define IVMDVDDrive_get_HostDriveLetter(This,driveLetter) ( (This)->lpVtbl -> get_HostDriveLetter(This,driveLetter) )
#define IVMDVDDrive_get_Attachment(This,driveAttachment) ( (This)->lpVtbl -> get_Attachment(This,driveAttachment) )
#endif
#endif
#ifndef __IVMDVDDriveCollection_INTERFACE_DEFINED__
#define __IVMDVDDriveCollection_INTERFACE_DEFINED__
extern const IID IID_IVMDVDDriveCollection;
typedef struct IVMDVDDriveCollectionVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE *QueryInterface) (IVMDVDDriveCollection *This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE *AddRef) (IVMDVDDriveCollection *This);
	ULONG(STDMETHODCALLTYPE *Release) (IVMDVDDriveCollection *This);
	HRESULT(STDMETHODCALLTYPE *GetTypeInfoCount) (IVMDVDDriveCollection *This, UINT *pctinfo);
	HRESULT(STDMETHODCALLTYPE *GetTypeInfo) (IVMDVDDriveCollection *This, UINT iTInfo, LCID lcid, ITypeInfo **ppTInfo);
	HRESULT(STDMETHODCALLTYPE *GetIDsOfNames) (IVMDVDDriveCollection *This, REFIID riid, LPOLESTR *rgszNames, UINT cNames, LCID lcid, DISPID *rgDispId);
	HRESULT(STDMETHODCALLTYPE *Invoke) (IVMDVDDriveCollection *This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS *pDispParams, VARIANT *pVarResult, EXCEPINFO *pExcepInfo, UINT *puArgErr);
	HRESULT(STDMETHODCALLTYPE *get_Count) (IVMDVDDriveCollection *This, long *count);
	HRESULT(STDMETHODCALLTYPE *get_Item) (IVMDVDDriveCollection *This, long index, IVMDVDDrive **dvdDrive);
	HRESULT(STDMETHODCALLTYPE *get__NewEnum) (IVMDVDDriveCollection *This, IUnknown **enumerator);
	END_INTERFACE
}  IVMDVDDriveCollectionVtbl;
interface IVMDVDDriveCollection
{
	CONST_VTBL struct IVMDVDDriveCollectionVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IVMDVDDriveCollection_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IVMDVDDriveCollection_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IVMDVDDriveCollection_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IVMDVDDriveCollection_GetTypeInfoCount(This,pctinfo) ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define IVMDVDDriveCollection_GetTypeInfo(This,iTInfo,lcid,ppTInfo) ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define IVMDVDDriveCollection_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define IVMDVDDriveCollection_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define IVMDVDDriveCollection_get_Count(This,count) ( (This)->lpVtbl -> get_Count(This,count) )
#define IVMDVDDriveCollection_get_Item(This,index,dvdDrive) ( (This)->lpVtbl -> get_Item(This,index,dvdDrive) )
#define IVMDVDDriveCollection_get__NewEnum(This,enumerator) ( (This)->lpVtbl -> get__NewEnum(This,enumerator) )
#endif
#endif
#ifndef __IVMGuestOS_INTERFACE_DEFINED__
#define __IVMGuestOS_INTERFACE_DEFINED__
typedef struct _GUESTOSVERSIONINFOEX
{
	long dwOSVersionInfoSize;
	long dwMajorVersion;
	long dwMinorVersion;
	long dwBuildNumber;
	long dwPlatformId;
	wchar_t szCSDVersion[128];
	short wServicePackMajor;
	short wServicePackMinor;
	short wSuiteMask;
	byte wProductType;
	byte wReserved;
} GUESTOSVERSIONINFOEX;
extern const IID IID_IVMGuestOS;
typedef struct IVMGuestOSVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE *QueryInterface) (IVMGuestOS *This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE *AddRef) (IVMGuestOS *This);
	ULONG(STDMETHODCALLTYPE *Release) (IVMGuestOS *This);
	HRESULT(STDMETHODCALLTYPE *GetTypeInfoCount) (IVMGuestOS *This, UINT *pctinfo);
	HRESULT(STDMETHODCALLTYPE *GetTypeInfo) (IVMGuestOS *This, UINT iTInfo, LCID lcid, ITypeInfo **ppTInfo);
	HRESULT(STDMETHODCALLTYPE *GetIDsOfNames) (IVMGuestOS *This, REFIID riid, LPOLESTR *rgszNames, UINT cNames, LCID lcid, DISPID *rgDispId);
	HRESULT(STDMETHODCALLTYPE *Invoke) (IVMGuestOS *This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS *pDispParams, VARIANT *pVarResult, EXCEPINFO *pExcepInfo, UINT *puArgErr);
	HRESULT(STDMETHODCALLTYPE *InstallIntegrationComponents) (IVMGuestOS *This);
	HRESULT(STDMETHODCALLTYPE *SetParameter) (IVMGuestOS *This, BSTR inParameterName, BSTR inParameterValue);
	HRESULT(STDMETHODCALLTYPE *Shutdown) (IVMGuestOS *This, VARIANT_BOOL inForced, IVMTask **outShutdownTask);
	HRESULT(STDMETHODCALLTYPE *Restart) (IVMGuestOS *This, VARIANT_BOOL inForced, IVMTask **outRestartTask);
	HRESULT(STDMETHODCALLTYPE *Logoff) (IVMGuestOS *This, IVMTask **outLogoffTask);
	HRESULT(STDMETHODCALLTYPE *GetOsVersionInfo) (IVMGuestOS *This, GUESTOSVERSIONINFOEX **guestOsVersionInfo);
	HRESULT(STDMETHODCALLTYPE *get_IsHostTimeSyncEnabled) (IVMGuestOS *This, VARIANT_BOOL *isEnabled);
	HRESULT(STDMETHODCALLTYPE *put_IsHostTimeSyncEnabled) (IVMGuestOS *This, VARIANT_BOOL shouldEnable);
	HRESULT(STDMETHODCALLTYPE *get_HeartbeatPercentage) (IVMGuestOS *This, long *heartbeatPercentage);
	HRESULT(STDMETHODCALLTYPE *get_IsHeartbeating) (IVMGuestOS *This, VARIANT_BOOL *heartBeating);
	HRESULT(STDMETHODCALLTYPE *get_OSName) (IVMGuestOS *This, BSTR *guestOSName);
	HRESULT(STDMETHODCALLTYPE *get_IntegrationComponentsVersion) (IVMGuestOS *This, BSTR *ICVersion);
	HRESULT(STDMETHODCALLTYPE *get_CanShutdown) (IVMGuestOS *This, VARIANT_BOOL *canShutdown);
	HRESULT(STDMETHODCALLTYPE *get_TerminalServicesInitialized) (IVMGuestOS *This, VARIANT_BOOL *termServStatus);
	HRESULT(STDMETHODCALLTYPE *get_MultipleUserSessionsAllowed) (IVMGuestOS *This, VARIANT_BOOL *sessionStatus);
	HRESULT(STDMETHODCALLTYPE *get_TerminalServerPort) (IVMGuestOS *This, long *tsPort);
	HRESULT(STDMETHODCALLTYPE *get_OSMajorVersion) (IVMGuestOS *This, BSTR *majorVersion);
	HRESULT(STDMETHODCALLTYPE *get_OSMinorVersion) (IVMGuestOS *This, BSTR *minorVersion);
	HRESULT(STDMETHODCALLTYPE *get_OSBuildNumber) (IVMGuestOS *This, BSTR *buildNumber);
	HRESULT(STDMETHODCALLTYPE *get_OSVersion) (IVMGuestOS *This, BSTR *OSVersion);
	HRESULT(STDMETHODCALLTYPE *get_OSPlatformId) (IVMGuestOS *This, BSTR *platformId);
	HRESULT(STDMETHODCALLTYPE *get_CSDVersion) (IVMGuestOS *This, BSTR *csdVersion);
	HRESULT(STDMETHODCALLTYPE *get_ServicePackMajor) (IVMGuestOS *This, BSTR *servicePackMajor);
	HRESULT(STDMETHODCALLTYPE *get_ServicePackMinor) (IVMGuestOS *This, BSTR *servicePackMinor);
	HRESULT(STDMETHODCALLTYPE *get_SuiteMask) (IVMGuestOS *This, BSTR *suiteMask);
	HRESULT(STDMETHODCALLTYPE *get_ProductType) (IVMGuestOS *This, BSTR *productType);
	HRESULT(STDMETHODCALLTYPE *GetParameter) (IVMGuestOS *This, BSTR inParameterName, BSTR *outParameterValue);
	HRESULT(STDMETHODCALLTYPE *get_ComputerName) (IVMGuestOS *This, BSTR *guestComputerName);
	HRESULT(STDMETHODCALLTYPE *get_ScreenLocked) (IVMGuestOS *This, VARIANT_BOOL *guestScreenLocked);
	HRESULT(STDMETHODCALLTYPE *IsUserLoggedOn) (IVMGuestOS *This, long inRailSession, VARIANT_BOOL *outSessionPresent);
	END_INTERFACE
}  IVMGuestOSVtbl;
interface IVMGuestOS
{
	CONST_VTBL struct IVMGuestOSVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IVMGuestOS_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IVMGuestOS_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IVMGuestOS_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IVMGuestOS_GetTypeInfoCount(This,pctinfo) ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define IVMGuestOS_GetTypeInfo(This,iTInfo,lcid,ppTInfo) ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define IVMGuestOS_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define IVMGuestOS_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define IVMGuestOS_InstallIntegrationComponents(This) ( (This)->lpVtbl -> InstallIntegrationComponents(This) )
#define IVMGuestOS_SetParameter(This,inParameterName,inParameterValue) ( (This)->lpVtbl -> SetParameter(This,inParameterName,inParameterValue) )
#define IVMGuestOS_Shutdown(This,inForced,outShutdownTask) ( (This)->lpVtbl -> Shutdown(This,inForced,outShutdownTask) )
#define IVMGuestOS_Restart(This,inForced,outRestartTask) ( (This)->lpVtbl -> Restart(This,inForced,outRestartTask) )
#define IVMGuestOS_Logoff(This,outLogoffTask) ( (This)->lpVtbl -> Logoff(This,outLogoffTask) )
#define IVMGuestOS_GetOsVersionInfo(This,guestOsVersionInfo) ( (This)->lpVtbl -> GetOsVersionInfo(This,guestOsVersionInfo) )
#define IVMGuestOS_get_IsHostTimeSyncEnabled(This,isEnabled) ( (This)->lpVtbl -> get_IsHostTimeSyncEnabled(This,isEnabled) )
#define IVMGuestOS_put_IsHostTimeSyncEnabled(This,shouldEnable) ( (This)->lpVtbl -> put_IsHostTimeSyncEnabled(This,shouldEnable) )
#define IVMGuestOS_get_HeartbeatPercentage(This,heartbeatPercentage) ( (This)->lpVtbl -> get_HeartbeatPercentage(This,heartbeatPercentage) )
#define IVMGuestOS_get_IsHeartbeating(This,heartBeating) ( (This)->lpVtbl -> get_IsHeartbeating(This,heartBeating) )
#define IVMGuestOS_get_OSName(This,guestOSName) ( (This)->lpVtbl -> get_OSName(This,guestOSName) )
#define IVMGuestOS_get_IntegrationComponentsVersion(This,ICVersion) ( (This)->lpVtbl -> get_IntegrationComponentsVersion(This,ICVersion) )
#define IVMGuestOS_get_CanShutdown(This,canShutdown) ( (This)->lpVtbl -> get_CanShutdown(This,canShutdown) )
#define IVMGuestOS_get_TerminalServicesInitialized(This,termServStatus) ( (This)->lpVtbl -> get_TerminalServicesInitialized(This,termServStatus) )
#define IVMGuestOS_get_MultipleUserSessionsAllowed(This,sessionStatus) ( (This)->lpVtbl -> get_MultipleUserSessionsAllowed(This,sessionStatus) )
#define IVMGuestOS_get_TerminalServerPort(This,tsPort) ( (This)->lpVtbl -> get_TerminalServerPort(This,tsPort) )
#define IVMGuestOS_get_OSMajorVersion(This,majorVersion) ( (This)->lpVtbl -> get_OSMajorVersion(This,majorVersion) )
#define IVMGuestOS_get_OSMinorVersion(This,minorVersion) ( (This)->lpVtbl -> get_OSMinorVersion(This,minorVersion) )
#define IVMGuestOS_get_OSBuildNumber(This,buildNumber) ( (This)->lpVtbl -> get_OSBuildNumber(This,buildNumber) )
#define IVMGuestOS_get_OSVersion(This,OSVersion) ( (This)->lpVtbl -> get_OSVersion(This,OSVersion) )
#define IVMGuestOS_get_OSPlatformId(This,platformId) ( (This)->lpVtbl -> get_OSPlatformId(This,platformId) )
#define IVMGuestOS_get_CSDVersion(This,csdVersion) ( (This)->lpVtbl -> get_CSDVersion(This,csdVersion) )
#define IVMGuestOS_get_ServicePackMajor(This,servicePackMajor) ( (This)->lpVtbl -> get_ServicePackMajor(This,servicePackMajor) )
#define IVMGuestOS_get_ServicePackMinor(This,servicePackMinor) ( (This)->lpVtbl -> get_ServicePackMinor(This,servicePackMinor) )
#define IVMGuestOS_get_SuiteMask(This,suiteMask) ( (This)->lpVtbl -> get_SuiteMask(This,suiteMask) )
#define IVMGuestOS_get_ProductType(This,productType) ( (This)->lpVtbl -> get_ProductType(This,productType) )
#define IVMGuestOS_GetParameter(This,inParameterName,outParameterValue) ( (This)->lpVtbl -> GetParameter(This,inParameterName,outParameterValue) )
#define IVMGuestOS_get_ComputerName(This,guestComputerName) ( (This)->lpVtbl -> get_ComputerName(This,guestComputerName) )
#define IVMGuestOS_get_ScreenLocked(This,guestScreenLocked) ( (This)->lpVtbl -> get_ScreenLocked(This,guestScreenLocked) )
#define IVMGuestOS_IsUserLoggedOn(This,inRailSession,outSessionPresent) ( (This)->lpVtbl -> IsUserLoggedOn(This,inRailSession,outSessionPresent) )
#endif
#endif
#ifndef __IVMNetworkAdapter_INTERFACE_DEFINED__
#define __IVMNetworkAdapter_INTERFACE_DEFINED__
extern const IID IID_IVMNetworkAdapter;
typedef struct IVMNetworkAdapterVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE *QueryInterface) (IVMNetworkAdapter *This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE *AddRef) (IVMNetworkAdapter *This);
	ULONG(STDMETHODCALLTYPE *Release) (IVMNetworkAdapter *This);
	HRESULT(STDMETHODCALLTYPE *GetTypeInfoCount) (IVMNetworkAdapter *This, UINT *pctinfo);
	HRESULT(STDMETHODCALLTYPE *GetTypeInfo) (IVMNetworkAdapter *This, UINT iTInfo, LCID lcid, ITypeInfo **ppTInfo);
	HRESULT(STDMETHODCALLTYPE *GetIDsOfNames) (IVMNetworkAdapter *This, REFIID riid, LPOLESTR *rgszNames, UINT cNames, LCID lcid, DISPID *rgDispId);
	HRESULT(STDMETHODCALLTYPE *Invoke) (IVMNetworkAdapter *This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS *pDispParams, VARIANT *pVarResult, EXCEPINFO *pExcepInfo, UINT *puArgErr);
	HRESULT(STDMETHODCALLTYPE *_ID) (IVMNetworkAdapter *This, long *identifier);
	HRESULT(STDMETHODCALLTYPE *get_VirtualMachine) (IVMNetworkAdapter *This, IVMVirtualMachine **virtualMachine);
	HRESULT(STDMETHODCALLTYPE *AttachToVirtualNetwork) (IVMNetworkAdapter *This, IVMVirtualNetwork *virtualNetwork);
	HRESULT(STDMETHODCALLTYPE *DetachFromVirtualNetwork) (IVMNetworkAdapter *This);
	HRESULT(STDMETHODCALLTYPE *get_VirtualNetwork) (IVMNetworkAdapter *This, IVMVirtualNetwork **virtualNetwork);
	HRESULT(STDMETHODCALLTYPE *get_EthernetAddress) (IVMNetworkAdapter *This, BSTR *ethernetAddress);
	HRESULT(STDMETHODCALLTYPE *put_EthernetAddress) (IVMNetworkAdapter *This, BSTR ethernetAddress);
	HRESULT(STDMETHODCALLTYPE *get_IsEthernetAddressDynamic) (IVMNetworkAdapter *This, VARIANT_BOOL *isDynamic);
	HRESULT(STDMETHODCALLTYPE *put_IsEthernetAddressDynamic) (IVMNetworkAdapter *This, VARIANT_BOOL isDynamic);
	END_INTERFACE
}  IVMNetworkAdapterVtbl;
interface IVMNetworkAdapter
{
	CONST_VTBL struct IVMNetworkAdapterVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IVMNetworkAdapter_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IVMNetworkAdapter_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IVMNetworkAdapter_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IVMNetworkAdapter_GetTypeInfoCount(This,pctinfo) ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define IVMNetworkAdapter_GetTypeInfo(This,iTInfo,lcid,ppTInfo) ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define IVMNetworkAdapter_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define IVMNetworkAdapter_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define IVMNetworkAdapter__ID(This,identifier) ( (This)->lpVtbl -> _ID(This,identifier) )
#define IVMNetworkAdapter_get_VirtualMachine(This,virtualMachine) ( (This)->lpVtbl -> get_VirtualMachine(This,virtualMachine) )
#define IVMNetworkAdapter_AttachToVirtualNetwork(This,virtualNetwork) ( (This)->lpVtbl -> AttachToVirtualNetwork(This,virtualNetwork) )
#define IVMNetworkAdapter_DetachFromVirtualNetwork(This) ( (This)->lpVtbl -> DetachFromVirtualNetwork(This) )
#define IVMNetworkAdapter_get_VirtualNetwork(This,virtualNetwork) ( (This)->lpVtbl -> get_VirtualNetwork(This,virtualNetwork) )
#define IVMNetworkAdapter_get_EthernetAddress(This,ethernetAddress) ( (This)->lpVtbl -> get_EthernetAddress(This,ethernetAddress) )
#define IVMNetworkAdapter_put_EthernetAddress(This,ethernetAddress) ( (This)->lpVtbl -> put_EthernetAddress(This,ethernetAddress) )
#define IVMNetworkAdapter_get_IsEthernetAddressDynamic(This,isDynamic) ( (This)->lpVtbl -> get_IsEthernetAddressDynamic(This,isDynamic) )
#define IVMNetworkAdapter_put_IsEthernetAddressDynamic(This,isDynamic) ( (This)->lpVtbl -> put_IsEthernetAddressDynamic(This,isDynamic) )
#endif
#endif
#ifndef __IVMNetworkAdapterCollection_INTERFACE_DEFINED__
#define __IVMNetworkAdapterCollection_INTERFACE_DEFINED__
extern const IID IID_IVMNetworkAdapterCollection;
typedef struct IVMNetworkAdapterCollectionVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE *QueryInterface) (IVMNetworkAdapterCollection *This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE *AddRef) (IVMNetworkAdapterCollection *This);
	ULONG(STDMETHODCALLTYPE *Release) (IVMNetworkAdapterCollection *This);
	HRESULT(STDMETHODCALLTYPE *GetTypeInfoCount) (IVMNetworkAdapterCollection *This, UINT *pctinfo);
	HRESULT(STDMETHODCALLTYPE *GetTypeInfo) (IVMNetworkAdapterCollection *This, UINT iTInfo, LCID lcid, ITypeInfo **ppTInfo);
	HRESULT(STDMETHODCALLTYPE *GetIDsOfNames) (IVMNetworkAdapterCollection *This, REFIID riid, LPOLESTR *rgszNames, UINT cNames, LCID lcid, DISPID *rgDispId);
	HRESULT(STDMETHODCALLTYPE *Invoke) (IVMNetworkAdapterCollection *This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS *pDispParams, VARIANT *pVarResult, EXCEPINFO *pExcepInfo, UINT *puArgErr);
	HRESULT(STDMETHODCALLTYPE *get_Count) (IVMNetworkAdapterCollection *This, long *count);
	HRESULT(STDMETHODCALLTYPE *get_Item) (IVMNetworkAdapterCollection *This, long index, IVMNetworkAdapter **networkInterface);
	HRESULT(STDMETHODCALLTYPE *get__NewEnum) (IVMNetworkAdapterCollection *This, IUnknown **enumerator);
	END_INTERFACE
}  IVMNetworkAdapterCollectionVtbl;
interface IVMNetworkAdapterCollection
{
	CONST_VTBL struct IVMNetworkAdapterCollectionVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IVMNetworkAdapterCollection_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IVMNetworkAdapterCollection_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IVMNetworkAdapterCollection_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IVMNetworkAdapterCollection_GetTypeInfoCount(This,pctinfo) ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define IVMNetworkAdapterCollection_GetTypeInfo(This,iTInfo,lcid,ppTInfo) ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define IVMNetworkAdapterCollection_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define IVMNetworkAdapterCollection_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define IVMNetworkAdapterCollection_get_Count(This,count) ( (This)->lpVtbl -> get_Count(This,count) )
#define IVMNetworkAdapterCollection_get_Item(This,index,networkInterface) ( (This)->lpVtbl -> get_Item(This,index,networkInterface) )
#define IVMNetworkAdapterCollection_get__NewEnum(This,enumerator) ( (This)->lpVtbl -> get__NewEnum(This,enumerator) )
#endif
#endif
#ifndef __IVMDisplay_INTERFACE_DEFINED__
#define __IVMDisplay_INTERFACE_DEFINED__
extern const IID IID_IVMDisplay;
typedef struct IVMDisplayVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE *QueryInterface) (IVMDisplay *This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE *AddRef) (IVMDisplay *This);
	ULONG(STDMETHODCALLTYPE *Release) (IVMDisplay *This);
	HRESULT(STDMETHODCALLTYPE *GetTypeInfoCount) (IVMDisplay *This, UINT *pctinfo);
	HRESULT(STDMETHODCALLTYPE *GetTypeInfo) (IVMDisplay *This, UINT iTInfo, LCID lcid, ITypeInfo **ppTInfo);
	HRESULT(STDMETHODCALLTYPE *GetIDsOfNames) (IVMDisplay *This, REFIID riid, LPOLESTR *rgszNames, UINT cNames, LCID lcid, DISPID *rgDispId);
	HRESULT(STDMETHODCALLTYPE *Invoke) (IVMDisplay *This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS *pDispParams, VARIANT *pVarResult, EXCEPINFO *pExcepInfo, UINT *puArgErr);
	HRESULT(STDMETHODCALLTYPE *SetDimensions) (IVMDisplay *This, long displayPixelWidth, long displayPixelHeight);
	HRESULT(STDMETHODCALLTYPE *get_Width) (IVMDisplay *This, long *displayPixelWidth);
	HRESULT(STDMETHODCALLTYPE *get_Height) (IVMDisplay *This, long *displayPixelHeight);
	HRESULT(STDMETHODCALLTYPE *get_CanResize) (IVMDisplay *This, VARIANT_BOOL *canResize);
	HRESULT(STDMETHODCALLTYPE *get_VideoMode) (IVMDisplay *This, VMDisplayVideoMode *videoMode);
	HRESULT(STDMETHODCALLTYPE *_GenerateThumbnail) (IVMDisplay *This, unsigned long thumbnailImage[3072]);
	HRESULT(STDMETHODCALLTYPE *get_Thumbnail) (IVMDisplay *This, VARIANT *thumbnailImage);
	END_INTERFACE
}  IVMDisplayVtbl;
interface IVMDisplay
{
	CONST_VTBL struct IVMDisplayVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IVMDisplay_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IVMDisplay_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IVMDisplay_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IVMDisplay_GetTypeInfoCount(This,pctinfo) ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define IVMDisplay_GetTypeInfo(This,iTInfo,lcid,ppTInfo) ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define IVMDisplay_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define IVMDisplay_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define IVMDisplay_SetDimensions(This,displayPixelWidth,displayPixelHeight) ( (This)->lpVtbl -> SetDimensions(This,displayPixelWidth,displayPixelHeight) )
#define IVMDisplay_get_Width(This,displayPixelWidth) ( (This)->lpVtbl -> get_Width(This,displayPixelWidth) )
#define IVMDisplay_get_Height(This,displayPixelHeight) ( (This)->lpVtbl -> get_Height(This,displayPixelHeight) )
#define IVMDisplay_get_CanResize(This,canResize) ( (This)->lpVtbl -> get_CanResize(This,canResize) )
#define IVMDisplay_get_VideoMode(This,videoMode) ( (This)->lpVtbl -> get_VideoMode(This,videoMode) )
#define IVMDisplay__GenerateThumbnail(This,thumbnailImage) ( (This)->lpVtbl -> _GenerateThumbnail(This,thumbnailImage) )
#define IVMDisplay_get_Thumbnail(This,thumbnailImage) ( (This)->lpVtbl -> get_Thumbnail(This,thumbnailImage) )
#endif
#endif
#ifndef __IVMMouse_INTERFACE_DEFINED__
#define __IVMMouse_INTERFACE_DEFINED__
extern const IID IID_IVMMouse;
typedef struct IVMMouseVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE *QueryInterface) (IVMMouse *This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE *AddRef) (IVMMouse *This);
	ULONG(STDMETHODCALLTYPE *Release) (IVMMouse *This);
	HRESULT(STDMETHODCALLTYPE *GetTypeInfoCount) (IVMMouse *This, UINT *pctinfo);
	HRESULT(STDMETHODCALLTYPE *GetTypeInfo) (IVMMouse *This, UINT iTInfo, LCID lcid, ITypeInfo **ppTInfo);
	HRESULT(STDMETHODCALLTYPE *GetIDsOfNames) (IVMMouse *This, REFIID riid, LPOLESTR *rgszNames, UINT cNames, LCID lcid, DISPID *rgDispId);
	HRESULT(STDMETHODCALLTYPE *Invoke) (IVMMouse *This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS *pDispParams, VARIANT *pVarResult, EXCEPINFO *pExcepInfo, UINT *puArgErr);
	HRESULT(STDMETHODCALLTYPE *GetButton) (IVMMouse *This, VMMouseButton buttonIndex, VARIANT_BOOL *isDown);
	HRESULT(STDMETHODCALLTYPE *SetButton) (IVMMouse *This, VMMouseButton buttonIndex, VARIANT_BOOL down);
	HRESULT(STDMETHODCALLTYPE *Click) (IVMMouse *This, VMMouseButton buttonIndex);
	HRESULT(STDMETHODCALLTYPE *get_HorizontalPosition) (IVMMouse *This, long *position);
	HRESULT(STDMETHODCALLTYPE *put_HorizontalPosition) (IVMMouse *This, long position);
	HRESULT(STDMETHODCALLTYPE *get_VerticalPosition) (IVMMouse *This, long *position);
	HRESULT(STDMETHODCALLTYPE *put_VerticalPosition) (IVMMouse *This, long position);
	HRESULT(STDMETHODCALLTYPE *put_ScrollWheelPosition) (IVMMouse *This, long position);
	HRESULT(STDMETHODCALLTYPE *get_UsingAbsoluteCoordinates) (IVMMouse *This, VARIANT_BOOL *usingAbsoluteCoordinates);
	HRESULT(STDMETHODCALLTYPE *put_UsingAbsoluteCoordinates) (IVMMouse *This, VARIANT_BOOL usingAbsoluteCoordinates);
	END_INTERFACE
}  IVMMouseVtbl;
interface IVMMouse
{
	CONST_VTBL struct IVMMouseVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IVMMouse_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IVMMouse_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IVMMouse_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IVMMouse_GetTypeInfoCount(This,pctinfo) ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define IVMMouse_GetTypeInfo(This,iTInfo,lcid,ppTInfo) ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define IVMMouse_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define IVMMouse_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define IVMMouse_GetButton(This,buttonIndex,isDown) ( (This)->lpVtbl -> GetButton(This,buttonIndex,isDown) )
#define IVMMouse_SetButton(This,buttonIndex,down) ( (This)->lpVtbl -> SetButton(This,buttonIndex,down) )
#define IVMMouse_Click(This,buttonIndex) ( (This)->lpVtbl -> Click(This,buttonIndex) )
#define IVMMouse_get_HorizontalPosition(This,position) ( (This)->lpVtbl -> get_HorizontalPosition(This,position) )
#define IVMMouse_put_HorizontalPosition(This,position) ( (This)->lpVtbl -> put_HorizontalPosition(This,position) )
#define IVMMouse_get_VerticalPosition(This,position) ( (This)->lpVtbl -> get_VerticalPosition(This,position) )
#define IVMMouse_put_VerticalPosition(This,position) ( (This)->lpVtbl -> put_VerticalPosition(This,position) )
#define IVMMouse_put_ScrollWheelPosition(This,position) ( (This)->lpVtbl -> put_ScrollWheelPosition(This,position) )
#define IVMMouse_get_UsingAbsoluteCoordinates(This,usingAbsoluteCoordinates) ( (This)->lpVtbl -> get_UsingAbsoluteCoordinates(This,usingAbsoluteCoordinates) )
#define IVMMouse_put_UsingAbsoluteCoordinates(This,usingAbsoluteCoordinates) ( (This)->lpVtbl -> put_UsingAbsoluteCoordinates(This,usingAbsoluteCoordinates) )
#endif
#endif
#ifndef __IVMKeyboard_INTERFACE_DEFINED__
#define __IVMKeyboard_INTERFACE_DEFINED__
extern const IID IID_IVMKeyboard;
typedef struct IVMKeyboardVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE *QueryInterface) (IVMKeyboard *This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE *AddRef) (IVMKeyboard *This);
	ULONG(STDMETHODCALLTYPE *Release) (IVMKeyboard *This);
	HRESULT(STDMETHODCALLTYPE *GetTypeInfoCount) (IVMKeyboard *This, UINT *pctinfo);
	HRESULT(STDMETHODCALLTYPE *GetTypeInfo) (IVMKeyboard *This, UINT iTInfo, LCID lcid, ITypeInfo **ppTInfo);
	HRESULT(STDMETHODCALLTYPE *GetIDsOfNames) (IVMKeyboard *This, REFIID riid, LPOLESTR *rgszNames, UINT cNames, LCID lcid, DISPID *rgDispId);
	HRESULT(STDMETHODCALLTYPE *Invoke) (IVMKeyboard *This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS *pDispParams, VARIANT *pVarResult, EXCEPINFO *pExcepInfo, UINT *puArgErr);
	HRESULT(STDMETHODCALLTYPE *PressKey) (IVMKeyboard *This, BSTR key);
	HRESULT(STDMETHODCALLTYPE *ReleaseKey) (IVMKeyboard *This, BSTR key);
	HRESULT(STDMETHODCALLTYPE *PressAndReleaseKey) (IVMKeyboard *This, BSTR key);
	HRESULT(STDMETHODCALLTYPE *IsPressed) (IVMKeyboard *This, BSTR key, VARIANT_BOOL *pressed);
	HRESULT(STDMETHODCALLTYPE *TypeAsciiText) (IVMKeyboard *This, BSTR text);
	HRESULT(STDMETHODCALLTYPE *TypeKeySequence) (IVMKeyboard *This, BSTR keySequence);
	HRESULT(STDMETHODCALLTYPE *get_HasExclusiveAccess) (IVMKeyboard *This, VARIANT_BOOL *isExclusive);
	HRESULT(STDMETHODCALLTYPE *put_HasExclusiveAccess) (IVMKeyboard *This, VARIANT_BOOL makeExclusive);
	END_INTERFACE
}  IVMKeyboardVtbl;
interface IVMKeyboard
{
	CONST_VTBL struct IVMKeyboardVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IVMKeyboard_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IVMKeyboard_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IVMKeyboard_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IVMKeyboard_GetTypeInfoCount(This,pctinfo) ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define IVMKeyboard_GetTypeInfo(This,iTInfo,lcid,ppTInfo) ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define IVMKeyboard_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define IVMKeyboard_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define IVMKeyboard_PressKey(This,key) ( (This)->lpVtbl -> PressKey(This,key) )
#define IVMKeyboard_ReleaseKey(This,key) ( (This)->lpVtbl -> ReleaseKey(This,key) )
#define IVMKeyboard_PressAndReleaseKey(This,key) ( (This)->lpVtbl -> PressAndReleaseKey(This,key) )
#define IVMKeyboard_IsPressed(This,key,pressed) ( (This)->lpVtbl -> IsPressed(This,key,pressed) )
#define IVMKeyboard_TypeAsciiText(This,text) ( (This)->lpVtbl -> TypeAsciiText(This,text) )
#define IVMKeyboard_TypeKeySequence(This,keySequence) ( (This)->lpVtbl -> TypeKeySequence(This,keySequence) )
#define IVMKeyboard_get_HasExclusiveAccess(This,isExclusive) ( (This)->lpVtbl -> get_HasExclusiveAccess(This,isExclusive) )
#define IVMKeyboard_put_HasExclusiveAccess(This,makeExclusive) ( (This)->lpVtbl -> put_HasExclusiveAccess(This,makeExclusive) )
#endif
#endif
#ifndef __IVMParallelPort_INTERFACE_DEFINED__
#define __IVMParallelPort_INTERFACE_DEFINED__
extern const IID IID_IVMParallelPort;
typedef struct IVMParallelPortVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE *QueryInterface) (IVMParallelPort *This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE *AddRef) (IVMParallelPort *This);
	ULONG(STDMETHODCALLTYPE *Release) (IVMParallelPort *This);
	HRESULT(STDMETHODCALLTYPE *GetTypeInfoCount) (IVMParallelPort *This, UINT *pctinfo);
	HRESULT(STDMETHODCALLTYPE *GetTypeInfo) (IVMParallelPort *This, UINT iTInfo, LCID lcid, ITypeInfo **ppTInfo);
	HRESULT(STDMETHODCALLTYPE *GetIDsOfNames) (IVMParallelPort *This, REFIID riid, LPOLESTR *rgszNames, UINT cNames, LCID lcid, DISPID *rgDispId);
	HRESULT(STDMETHODCALLTYPE *Invoke) (IVMParallelPort *This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS *pDispParams, VARIANT *pVarResult, EXCEPINFO *pExcepInfo, UINT *puArgErr);
	HRESULT(STDMETHODCALLTYPE *_ID) (IVMParallelPort *This, long *portID);
	HRESULT(STDMETHODCALLTYPE *get_Name) (IVMParallelPort *This, BSTR *portName);
	HRESULT(STDMETHODCALLTYPE *put_Name) (IVMParallelPort *This, BSTR portName);
	END_INTERFACE
}  IVMParallelPortVtbl;
interface IVMParallelPort
{
	CONST_VTBL struct IVMParallelPortVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IVMParallelPort_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IVMParallelPort_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IVMParallelPort_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IVMParallelPort_GetTypeInfoCount(This,pctinfo) ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define IVMParallelPort_GetTypeInfo(This,iTInfo,lcid,ppTInfo) ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define IVMParallelPort_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define IVMParallelPort_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define IVMParallelPort__ID(This,portID) ( (This)->lpVtbl -> _ID(This,portID) )
#define IVMParallelPort_get_Name(This,portName) ( (This)->lpVtbl -> get_Name(This,portName) )
#define IVMParallelPort_put_Name(This,portName) ( (This)->lpVtbl -> put_Name(This,portName) )
#endif
#endif
#ifndef __IVMParallelPortCollection_INTERFACE_DEFINED__
#define __IVMParallelPortCollection_INTERFACE_DEFINED__
extern const IID IID_IVMParallelPortCollection;
typedef struct IVMParallelPortCollectionVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE *QueryInterface) (IVMParallelPortCollection *This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE *AddRef) (IVMParallelPortCollection *This);
	ULONG(STDMETHODCALLTYPE *Release) (IVMParallelPortCollection *This);
	HRESULT(STDMETHODCALLTYPE *GetTypeInfoCount) (IVMParallelPortCollection *This, UINT *pctinfo);
	HRESULT(STDMETHODCALLTYPE *GetTypeInfo) (IVMParallelPortCollection *This, UINT iTInfo, LCID lcid, ITypeInfo **ppTInfo);
	HRESULT(STDMETHODCALLTYPE *GetIDsOfNames) (IVMParallelPortCollection *This, REFIID riid, LPOLESTR *rgszNames, UINT cNames, LCID lcid, DISPID *rgDispId);
	HRESULT(STDMETHODCALLTYPE *Invoke) (IVMParallelPortCollection *This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS *pDispParams, VARIANT *pVarResult, EXCEPINFO *pExcepInfo, UINT *puArgErr);
	HRESULT(STDMETHODCALLTYPE *get_Count) (IVMParallelPortCollection *This, long *count);
	HRESULT(STDMETHODCALLTYPE *get_Item) (IVMParallelPortCollection *This, long index, IVMParallelPort **vmParallelPort);
	HRESULT(STDMETHODCALLTYPE *get__NewEnum) (IVMParallelPortCollection *This, IUnknown **enumerator);
	END_INTERFACE
}  IVMParallelPortCollectionVtbl;
interface IVMParallelPortCollection
{
	CONST_VTBL struct IVMParallelPortCollectionVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IVMParallelPortCollection_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IVMParallelPortCollection_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IVMParallelPortCollection_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IVMParallelPortCollection_GetTypeInfoCount(This,pctinfo) ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define IVMParallelPortCollection_GetTypeInfo(This,iTInfo,lcid,ppTInfo) ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define IVMParallelPortCollection_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define IVMParallelPortCollection_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define IVMParallelPortCollection_get_Count(This,count) ( (This)->lpVtbl -> get_Count(This,count) )
#define IVMParallelPortCollection_get_Item(This,index,vmParallelPort) ( (This)->lpVtbl -> get_Item(This,index,vmParallelPort) )
#define IVMParallelPortCollection_get__NewEnum(This,enumerator) ( (This)->lpVtbl -> get__NewEnum(This,enumerator) )
#endif
#endif
#ifndef __IVMSerialPort_INTERFACE_DEFINED__
#define __IVMSerialPort_INTERFACE_DEFINED__
extern const IID IID_IVMSerialPort;
typedef struct IVMSerialPortVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE *QueryInterface) (IVMSerialPort *This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE *AddRef) (IVMSerialPort *This);
	ULONG(STDMETHODCALLTYPE *Release) (IVMSerialPort *This);
	HRESULT(STDMETHODCALLTYPE *GetTypeInfoCount) (IVMSerialPort *This, UINT *pctinfo);
	HRESULT(STDMETHODCALLTYPE *GetTypeInfo) (IVMSerialPort *This, UINT iTInfo, LCID lcid, ITypeInfo **ppTInfo);
	HRESULT(STDMETHODCALLTYPE *GetIDsOfNames) (IVMSerialPort *This, REFIID riid, LPOLESTR *rgszNames, UINT cNames, LCID lcid, DISPID *rgDispId);
	HRESULT(STDMETHODCALLTYPE *Invoke) (IVMSerialPort *This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS *pDispParams, VARIANT *pVarResult, EXCEPINFO *pExcepInfo, UINT *puArgErr);
	HRESULT(STDMETHODCALLTYPE *Configure) (IVMSerialPort *This, VMSerialPortType portType, BSTR portName, VARIANT_BOOL vmConnectImmediately);
	HRESULT(STDMETHODCALLTYPE *_ID) (IVMSerialPort *This, long *portID);
	HRESULT(STDMETHODCALLTYPE *get_Type) (IVMSerialPort *This, VMSerialPortType *portType);
	HRESULT(STDMETHODCALLTYPE *get_Name) (IVMSerialPort *This, BSTR *portName);
	HRESULT(STDMETHODCALLTYPE *get_ConnectImmediately) (IVMSerialPort *This, VARIANT_BOOL *vmConnectImmediately);
	END_INTERFACE
}  IVMSerialPortVtbl;
interface IVMSerialPort
{
	CONST_VTBL struct IVMSerialPortVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IVMSerialPort_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IVMSerialPort_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IVMSerialPort_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IVMSerialPort_GetTypeInfoCount(This,pctinfo) ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define IVMSerialPort_GetTypeInfo(This,iTInfo,lcid,ppTInfo) ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define IVMSerialPort_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define IVMSerialPort_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define IVMSerialPort_Configure(This,portType,portName,vmConnectImmediately) ( (This)->lpVtbl -> Configure(This,portType,portName,vmConnectImmediately) )
#define IVMSerialPort__ID(This,portID) ( (This)->lpVtbl -> _ID(This,portID) )
#define IVMSerialPort_get_Type(This,portType) ( (This)->lpVtbl -> get_Type(This,portType) )
#define IVMSerialPort_get_Name(This,portName) ( (This)->lpVtbl -> get_Name(This,portName) )
#define IVMSerialPort_get_ConnectImmediately(This,vmConnectImmediately) ( (This)->lpVtbl -> get_ConnectImmediately(This,vmConnectImmediately) )
#endif
#endif
#ifndef __IVMSerialPortCollection_INTERFACE_DEFINED__
#define __IVMSerialPortCollection_INTERFACE_DEFINED__
extern const IID IID_IVMSerialPortCollection;
typedef struct IVMSerialPortCollectionVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE *QueryInterface) (IVMSerialPortCollection *This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE *AddRef) (IVMSerialPortCollection *This);
	ULONG(STDMETHODCALLTYPE *Release) (IVMSerialPortCollection *This);
	HRESULT(STDMETHODCALLTYPE *GetTypeInfoCount) (IVMSerialPortCollection *This, UINT *pctinfo);
	HRESULT(STDMETHODCALLTYPE *GetTypeInfo) (IVMSerialPortCollection *This, UINT iTInfo, LCID lcid, ITypeInfo **ppTInfo);
	HRESULT(STDMETHODCALLTYPE *GetIDsOfNames) (IVMSerialPortCollection *This, REFIID riid, LPOLESTR *rgszNames, UINT cNames, LCID lcid, DISPID *rgDispId);
	HRESULT(STDMETHODCALLTYPE *Invoke) (IVMSerialPortCollection *This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS *pDispParams, VARIANT *pVarResult, EXCEPINFO *pExcepInfo, UINT *puArgErr);
	HRESULT(STDMETHODCALLTYPE *get_Count) (IVMSerialPortCollection *This, long *count);
	HRESULT(STDMETHODCALLTYPE *get_Item) (IVMSerialPortCollection *This, long index, IVMSerialPort **serialPort);
	HRESULT(STDMETHODCALLTYPE *get__NewEnum) (IVMSerialPortCollection *This, IUnknown **enumerator);
	END_INTERFACE
}  IVMSerialPortCollectionVtbl;
interface IVMSerialPortCollection
{
	CONST_VTBL struct IVMSerialPortCollectionVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IVMSerialPortCollection_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IVMSerialPortCollection_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IVMSerialPortCollection_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IVMSerialPortCollection_GetTypeInfoCount(This,pctinfo) ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define IVMSerialPortCollection_GetTypeInfo(This,iTInfo,lcid,ppTInfo) ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define IVMSerialPortCollection_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define IVMSerialPortCollection_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define IVMSerialPortCollection_get_Count(This,count) ( (This)->lpVtbl -> get_Count(This,count) )
#define IVMSerialPortCollection_get_Item(This,index,serialPort) ( (This)->lpVtbl -> get_Item(This,index,serialPort) )
#define IVMSerialPortCollection_get__NewEnum(This,enumerator) ( (This)->lpVtbl -> get__NewEnum(This,enumerator) )
#endif
#endif
#ifndef __IVMTask_INTERFACE_DEFINED__
#define __IVMTask_INTERFACE_DEFINED__
extern const IID IID_IVMTask;
typedef struct IVMTaskVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE *QueryInterface) (IVMTask *This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE *AddRef) (IVMTask *This);
	ULONG(STDMETHODCALLTYPE *Release) (IVMTask *This);
	HRESULT(STDMETHODCALLTYPE *GetTypeInfoCount) (IVMTask *This, UINT *pctinfo);
	HRESULT(STDMETHODCALLTYPE *GetTypeInfo) (IVMTask *This, UINT iTInfo, LCID lcid, ITypeInfo **ppTInfo);
	HRESULT(STDMETHODCALLTYPE *GetIDsOfNames) (IVMTask *This, REFIID riid, LPOLESTR *rgszNames, UINT cNames, LCID lcid, DISPID *rgDispId);
	HRESULT(STDMETHODCALLTYPE *Invoke) (IVMTask *This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS *pDispParams, VARIANT *pVarResult, EXCEPINFO *pExcepInfo, UINT *puArgErr);
	HRESULT(STDMETHODCALLTYPE *WaitForCompletion) (IVMTask *This, long timeout);
	HRESULT(STDMETHODCALLTYPE *Cancel) (IVMTask *This);
	HRESULT(STDMETHODCALLTYPE *get_PercentCompleted) (IVMTask *This, long *percentCompleted);
	HRESULT(STDMETHODCALLTYPE *get_Description) (IVMTask *This, BSTR *description);
	HRESULT(STDMETHODCALLTYPE *get_Result) (IVMTask *This, VMTaskResult *result);
	HRESULT(STDMETHODCALLTYPE *get_IsCancelable) (IVMTask *This, VARIANT_BOOL *isCancelable);
	HRESULT(STDMETHODCALLTYPE *get_ID) (IVMTask *This, long *ID);
	HRESULT(STDMETHODCALLTYPE *get_IsComplete) (IVMTask *This, VARIANT_BOOL *isComplete);
	HRESULT(STDMETHODCALLTYPE *get_Error) (IVMTask *This, long *outError);
	HRESULT(STDMETHODCALLTYPE *get_ErrorDescription) (IVMTask *This, BSTR *outErrorDesc);
	END_INTERFACE
}  IVMTaskVtbl;
interface IVMTask
{
	CONST_VTBL struct IVMTaskVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IVMTask_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IVMTask_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IVMTask_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IVMTask_GetTypeInfoCount(This,pctinfo) ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define IVMTask_GetTypeInfo(This,iTInfo,lcid,ppTInfo) ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define IVMTask_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define IVMTask_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define IVMTask_WaitForCompletion(This,timeout) ( (This)->lpVtbl -> WaitForCompletion(This,timeout) )
#define IVMTask_Cancel(This) ( (This)->lpVtbl -> Cancel(This) )
#define IVMTask_get_PercentCompleted(This,percentCompleted) ( (This)->lpVtbl -> get_PercentCompleted(This,percentCompleted) )
#define IVMTask_get_Description(This,description) ( (This)->lpVtbl -> get_Description(This,description) )
#define IVMTask_get_Result(This,result) ( (This)->lpVtbl -> get_Result(This,result) )
#define IVMTask_get_IsCancelable(This,isCancelable) ( (This)->lpVtbl -> get_IsCancelable(This,isCancelable) )
#define IVMTask_get_ID(This,ID) ( (This)->lpVtbl -> get_ID(This,ID) )
#define IVMTask_get_IsComplete(This,isComplete) ( (This)->lpVtbl -> get_IsComplete(This,isComplete) )
#define IVMTask_get_Error(This,outError) ( (This)->lpVtbl -> get_Error(This,outError) )
#define IVMTask_get_ErrorDescription(This,outErrorDesc) ( (This)->lpVtbl -> get_ErrorDescription(This,outErrorDesc) )
#endif
#endif
#ifndef __IVMUSBDevice_INTERFACE_DEFINED__
#define __IVMUSBDevice_INTERFACE_DEFINED__
extern const IID IID_IVMUSBDevice;
typedef struct IVMUSBDeviceVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE *QueryInterface) (IVMUSBDevice *This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE *AddRef) (IVMUSBDevice *This);
	ULONG(STDMETHODCALLTYPE *Release) (IVMUSBDevice *This);
	HRESULT(STDMETHODCALLTYPE *GetTypeInfoCount) (IVMUSBDevice *This, UINT *pctinfo);
	HRESULT(STDMETHODCALLTYPE *GetTypeInfo) (IVMUSBDevice *This, UINT iTInfo, LCID lcid, ITypeInfo **ppTInfo);
	HRESULT(STDMETHODCALLTYPE *GetIDsOfNames) (IVMUSBDevice *This, REFIID riid, LPOLESTR *rgszNames, UINT cNames, LCID lcid, DISPID *rgDispId);
	HRESULT(STDMETHODCALLTYPE *Invoke) (IVMUSBDevice *This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS *pDispParams, VARIANT *pVarResult, EXCEPINFO *pExcepInfo, UINT *puArgErr);
	HRESULT(STDMETHODCALLTYPE *get_DeviceString) (IVMUSBDevice *This, BSTR *deviceName);
	HRESULT(STDMETHODCALLTYPE *get_ManufacturerString) (IVMUSBDevice *This, BSTR *manufacturerName);
	HRESULT(STDMETHODCALLTYPE *get_AttachedToVM) (IVMUSBDevice *This, BSTR *ConfigName);
	HRESULT(STDMETHODCALLTYPE *get_HubID) (IVMUSBDevice *This, long *hubID);
	HRESULT(STDMETHODCALLTYPE *get_Port) (IVMUSBDevice *This, long *port);
	HRESULT(STDMETHODCALLTYPE *get_DeviceClass) (IVMUSBDevice *This, VMUSBDeviceClassEnum *deviceClass);
	END_INTERFACE
}  IVMUSBDeviceVtbl;
interface IVMUSBDevice
{
	CONST_VTBL struct IVMUSBDeviceVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IVMUSBDevice_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IVMUSBDevice_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IVMUSBDevice_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IVMUSBDevice_GetTypeInfoCount(This,pctinfo) ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define IVMUSBDevice_GetTypeInfo(This,iTInfo,lcid,ppTInfo) ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define IVMUSBDevice_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define IVMUSBDevice_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define IVMUSBDevice_get_DeviceString(This,deviceName) ( (This)->lpVtbl -> get_DeviceString(This,deviceName) )
#define IVMUSBDevice_get_ManufacturerString(This,manufacturerName) ( (This)->lpVtbl -> get_ManufacturerString(This,manufacturerName) )
#define IVMUSBDevice_get_AttachedToVM(This,ConfigName) ( (This)->lpVtbl -> get_AttachedToVM(This,ConfigName) )
#define IVMUSBDevice_get_HubID(This,hubID) ( (This)->lpVtbl -> get_HubID(This,hubID) )
#define IVMUSBDevice_get_Port(This,port) ( (This)->lpVtbl -> get_Port(This,port) )
#define IVMUSBDevice_get_DeviceClass(This,deviceClass) ( (This)->lpVtbl -> get_DeviceClass(This,deviceClass) )
#endif
#endif
#ifndef __IVMUSBDeviceCollection_INTERFACE_DEFINED__
#define __IVMUSBDeviceCollection_INTERFACE_DEFINED__
extern const IID IID_IVMUSBDeviceCollection;
typedef struct IVMUSBDeviceCollectionVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE *QueryInterface) (IVMUSBDeviceCollection *This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE *AddRef) (IVMUSBDeviceCollection *This);
	ULONG(STDMETHODCALLTYPE *Release) (IVMUSBDeviceCollection *This);
	HRESULT(STDMETHODCALLTYPE *GetTypeInfoCount) (IVMUSBDeviceCollection *This, UINT *pctinfo);
	HRESULT(STDMETHODCALLTYPE *GetTypeInfo) (IVMUSBDeviceCollection *This, UINT iTInfo, LCID lcid, ITypeInfo **ppTInfo);
	HRESULT(STDMETHODCALLTYPE *GetIDsOfNames) (IVMUSBDeviceCollection *This, REFIID riid, LPOLESTR *rgszNames, UINT cNames, LCID lcid, DISPID *rgDispId);
	HRESULT(STDMETHODCALLTYPE *Invoke) (IVMUSBDeviceCollection *This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS *pDispParams, VARIANT *pVarResult, EXCEPINFO *pExcepInfo, UINT *puArgErr);
	HRESULT(STDMETHODCALLTYPE *get_Count) (IVMUSBDeviceCollection *This, long *count);
	HRESULT(STDMETHODCALLTYPE *get_Item) (IVMUSBDeviceCollection *This, long index, IVMUSBDevice **usbDevice);
	HRESULT(STDMETHODCALLTYPE *get__NewEnum) (IVMUSBDeviceCollection *This, IUnknown **enumerator);
	END_INTERFACE
}  IVMUSBDeviceCollectionVtbl;
interface IVMUSBDeviceCollection
{
	CONST_VTBL struct IVMUSBDeviceCollectionVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IVMUSBDeviceCollection_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IVMUSBDeviceCollection_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IVMUSBDeviceCollection_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IVMUSBDeviceCollection_GetTypeInfoCount(This,pctinfo) ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define IVMUSBDeviceCollection_GetTypeInfo(This,iTInfo,lcid,ppTInfo) ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define IVMUSBDeviceCollection_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define IVMUSBDeviceCollection_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define IVMUSBDeviceCollection_get_Count(This,count) ( (This)->lpVtbl -> get_Count(This,count) )
#define IVMUSBDeviceCollection_get_Item(This,index,usbDevice) ( (This)->lpVtbl -> get_Item(This,index,usbDevice) )
#define IVMUSBDeviceCollection_get__NewEnum(This,enumerator) ( (This)->lpVtbl -> get__NewEnum(This,enumerator) )
#endif
#endif
#ifndef __IVMVirtualMachine_INTERFACE_DEFINED__
#define __IVMVirtualMachine_INTERFACE_DEFINED__
extern const IID IID_IVMVirtualMachine;
typedef struct IVMVirtualMachineVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE *QueryInterface) (IVMVirtualMachine *This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE *AddRef) (IVMVirtualMachine *This);
	ULONG(STDMETHODCALLTYPE *Release) (IVMVirtualMachine *This);
	HRESULT(STDMETHODCALLTYPE *GetTypeInfoCount) (IVMVirtualMachine *This, UINT *pctinfo);
	HRESULT(STDMETHODCALLTYPE *GetTypeInfo) (IVMVirtualMachine *This, UINT iTInfo, LCID lcid, ITypeInfo **ppTInfo);
	HRESULT(STDMETHODCALLTYPE *GetIDsOfNames) (IVMVirtualMachine *This, REFIID riid, LPOLESTR *rgszNames, UINT cNames, LCID lcid, DISPID *rgDispId);
	HRESULT(STDMETHODCALLTYPE *Invoke) (IVMVirtualMachine *This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS *pDispParams, VARIANT *pVarResult, EXCEPINFO *pExcepInfo, UINT *puArgErr);
	HRESULT(STDMETHODCALLTYPE *get_Name) (IVMVirtualMachine *This, BSTR *virtualMachineName);
	HRESULT(STDMETHODCALLTYPE *put_Name) (IVMVirtualMachine *This, BSTR virtualMachineName);
	HRESULT(STDMETHODCALLTYPE *get_ConfigID) (IVMVirtualMachine *This, BSTR *virtualMachineConfigID);
	HRESULT(STDMETHODCALLTYPE *get_File) (IVMVirtualMachine *This, BSTR *virtualMachineXMLFile);
	HRESULT(STDMETHODCALLTYPE *get_Accountant) (IVMVirtualMachine *This, IVMAccountant **accountant);
	HRESULT(STDMETHODCALLTYPE *get_GuestOS) (IVMVirtualMachine *This, IVMGuestOS **guestOS);
	HRESULT(STDMETHODCALLTYPE *get_Display) (IVMVirtualMachine *This, IVMDisplay **display);
	HRESULT(STDMETHODCALLTYPE *get_Keyboard) (IVMVirtualMachine *This, IVMKeyboard **keyboard);
	HRESULT(STDMETHODCALLTYPE *get_Mouse) (IVMVirtualMachine *This, IVMMouse **mouse);
	HRESULT(STDMETHODCALLTYPE *Startup) (IVMVirtualMachine *This, IVMTask **startupTask);
	HRESULT(STDMETHODCALLTYPE *Startup2) (IVMVirtualMachine *This, VMStartupOption startupOption, IVMTask **startupTask);
	HRESULT(STDMETHODCALLTYPE *TurnOff) (IVMVirtualMachine *This, IVMTask **turnOffTask);
	HRESULT(STDMETHODCALLTYPE *Save) (IVMVirtualMachine *This, IVMTask **saveTask);
	HRESULT(STDMETHODCALLTYPE *Reset) (IVMVirtualMachine *This, IVMTask **resetTask);
	HRESULT(STDMETHODCALLTYPE *DiscardSavedState) (IVMVirtualMachine *This);
	HRESULT(STDMETHODCALLTYPE *Pause) (IVMVirtualMachine *This);
	HRESULT(STDMETHODCALLTYPE *Resume) (IVMVirtualMachine *This);
	HRESULT(STDMETHODCALLTYPE *get_State) (IVMVirtualMachine *This, VMVMState *virtualMachineState);
	HRESULT(STDMETHODCALLTYPE *get_ShutdownActionOnQuit) (IVMVirtualMachine *This, VMShutdownAction *shutdownAction);
	HRESULT(STDMETHODCALLTYPE *put_ShutdownActionOnQuit) (IVMVirtualMachine *This, VMShutdownAction shutdownAction);
	HRESULT(STDMETHODCALLTYPE *get_SavedStateFilePath) (IVMVirtualMachine *This, BSTR *savedStateFilePath);
	HRESULT(STDMETHODCALLTYPE *get_BIOSGUID) (IVMVirtualMachine *This, BSTR *biosGUID);
	HRESULT(STDMETHODCALLTYPE *put_BIOSGUID) (IVMVirtualMachine *This, BSTR biosGUID);
	HRESULT(STDMETHODCALLTYPE *get_BIOSSerialNumber) (IVMVirtualMachine *This, BSTR *biosSerialNumber);
	HRESULT(STDMETHODCALLTYPE *put_BIOSSerialNumber) (IVMVirtualMachine *This, BSTR biosSerialNumber);
	HRESULT(STDMETHODCALLTYPE *get_BaseBoardSerialNumber) (IVMVirtualMachine *This, BSTR *baseBoardSerialNumber);
	HRESULT(STDMETHODCALLTYPE *put_BaseBoardSerialNumber) (IVMVirtualMachine *This, BSTR baseBoardSerialNumber);
	HRESULT(STDMETHODCALLTYPE *get_ChassisSerialNumber) (IVMVirtualMachine *This, BSTR *chassisSerialNumber);
	HRESULT(STDMETHODCALLTYPE *put_ChassisSerialNumber) (IVMVirtualMachine *This, BSTR chasisSerialNumber);
	HRESULT(STDMETHODCALLTYPE *get_ChassisAssetTag) (IVMVirtualMachine *This, BSTR *chassisAssetTag);
	HRESULT(STDMETHODCALLTYPE *put_ChassisAssetTag) (IVMVirtualMachine *This, BSTR chassisAssetTag);
	HRESULT(STDMETHODCALLTYPE *AddHardDiskConnection) (IVMVirtualMachine *This, BSTR hardDiskPath, long busNumber, long deviceNumber, IVMHardDiskConnection **hardDiskConnection);
	HRESULT(STDMETHODCALLTYPE *RemoveHardDiskConnection) (IVMVirtualMachine *This, IVMHardDiskConnection *hardDiskConnection);
	HRESULT(STDMETHODCALLTYPE *get_HardDiskConnections) (IVMVirtualMachine *This, IVMHardDiskConnectionCollection **hardDiskConnectionCollection);
	HRESULT(STDMETHODCALLTYPE *MergeUndoDisks) (IVMVirtualMachine *This, IVMTask **undoMergeTask);
	HRESULT(STDMETHODCALLTYPE *DiscardUndoDisks) (IVMVirtualMachine *This);
	HRESULT(STDMETHODCALLTYPE *get_Undoable) (IVMVirtualMachine *This, VARIANT_BOOL *isUndoable);
	HRESULT(STDMETHODCALLTYPE *put_Undoable) (IVMVirtualMachine *This, VARIANT_BOOL enableUndo);
	HRESULT(STDMETHODCALLTYPE *get_UndoAction) (IVMVirtualMachine *This, VMUndoAction *undoAction);
	HRESULT(STDMETHODCALLTYPE *put_UndoAction) (IVMVirtualMachine *This, VMUndoAction undoAction);
	HRESULT(STDMETHODCALLTYPE *AddDVDROMDrive) (IVMVirtualMachine *This, long busNumber, long deviceNumber, IVMDVDDrive **dvdDrive);
	HRESULT(STDMETHODCALLTYPE *RemoveDVDROMDrive) (IVMVirtualMachine *This, IVMDVDDrive *dvdDrive);
	HRESULT(STDMETHODCALLTYPE *get_DVDROMDrives) (IVMVirtualMachine *This, IVMDVDDriveCollection **dvdROMCollection);
	HRESULT(STDMETHODCALLTYPE *get_FloppyDrives) (IVMVirtualMachine *This, IVMFloppyDriveCollection **floppyCollection);
	HRESULT(STDMETHODCALLTYPE *AddNetworkAdapter) (IVMVirtualMachine *This, IVMNetworkAdapter **networkAdapter);
	HRESULT(STDMETHODCALLTYPE *RemoveNetworkAdapter) (IVMVirtualMachine *This, IVMNetworkAdapter *networkAdapter);
	HRESULT(STDMETHODCALLTYPE *get_NetworkAdapters) (IVMVirtualMachine *This, IVMNetworkAdapterCollection **networkAdapterCollection);
	HRESULT(STDMETHODCALLTYPE *get_SerialPorts) (IVMVirtualMachine *This, IVMSerialPortCollection **serialPortCollection);
	HRESULT(STDMETHODCALLTYPE *get_ParallelPorts) (IVMVirtualMachine *This, IVMParallelPortCollection **parallelPortCollection);
	HRESULT(STDMETHODCALLTYPE *get_ProcessorSpeed) (IVMVirtualMachine *This, long *processorSpeed);
	HRESULT(STDMETHODCALLTYPE *get_HasMMX) (IVMVirtualMachine *This, VARIANT_BOOL *mmxEnabled);
	HRESULT(STDMETHODCALLTYPE *get_HasSSE) (IVMVirtualMachine *This, VARIANT_BOOL *sseEnabled);
	HRESULT(STDMETHODCALLTYPE *get_HasSSE2) (IVMVirtualMachine *This, VARIANT_BOOL *sse2Enabled);
	HRESULT(STDMETHODCALLTYPE *get_Has3DNow) (IVMVirtualMachine *This, VARIANT_BOOL *threeDNowEnabled);
	HRESULT(STDMETHODCALLTYPE *get_RdpPipeName) (IVMVirtualMachine *This, BSTR *RdpPipeName);
	HRESULT(STDMETHODCALLTYPE *AttachUSBDevice) (IVMVirtualMachine *This, IVMUSBDevice *inUSBDevice);
	HRESULT(STDMETHODCALLTYPE *DetachUSBDevice) (IVMVirtualMachine *This, IVMUSBDevice *inUSBDevice);
	HRESULT(STDMETHODCALLTYPE *get_Notes) (IVMVirtualMachine *This, BSTR *virtualMachineNotes);
	HRESULT(STDMETHODCALLTYPE *put_Notes) (IVMVirtualMachine *This, BSTR virtualMachineNotes);
	HRESULT(STDMETHODCALLTYPE *get_Memory) (IVMVirtualMachine *This, long *megabytesOfMemory);
	HRESULT(STDMETHODCALLTYPE *put_Memory) (IVMVirtualMachine *This, long megabytesOfMemory);
	HRESULT(STDMETHODCALLTYPE *get_AttachedDriveTypes) (IVMVirtualMachine *This, VARIANT *driveTypes);
	HRESULT(STDMETHODCALLTYPE *GetConfigurationValue) (IVMVirtualMachine *This, BSTR configurationKey, VARIANT *configurationValue);
	HRESULT(STDMETHODCALLTYPE *SetConfigurationValue) (IVMVirtualMachine *This, BSTR configurationKey, VARIANT configurationValue);
	HRESULT(STDMETHODCALLTYPE *RemoveConfigurationValue) (IVMVirtualMachine *This, BSTR configurationKey);
	HRESULT(STDMETHODCALLTYPE *GetActivationValue) (IVMVirtualMachine *This, BSTR activationKey, VARIANT *activationValue);
	HRESULT(STDMETHODCALLTYPE *SetActivationValue) (IVMVirtualMachine *This, BSTR activationKey, VARIANT activationValue);
	HRESULT(STDMETHODCALLTYPE *RemoveActivationValue) (IVMVirtualMachine *This, BSTR activationKey);
	HRESULT(STDMETHODCALLTYPE *StartCommunicationChannel) (IVMVirtualMachine *This, VMEndpointType inHostEndpointType, BSTR inHostEndPointName, VMEndpointType inGuestEndpointType, BSTR inGuestEndpointName);
	END_INTERFACE
}  IVMVirtualMachineVtbl;
interface IVMVirtualMachine
{
	CONST_VTBL struct IVMVirtualMachineVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IVMVirtualMachine_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IVMVirtualMachine_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IVMVirtualMachine_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IVMVirtualMachine_GetTypeInfoCount(This,pctinfo) ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define IVMVirtualMachine_GetTypeInfo(This,iTInfo,lcid,ppTInfo) ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define IVMVirtualMachine_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define IVMVirtualMachine_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define IVMVirtualMachine_get_Name(This,virtualMachineName) ( (This)->lpVtbl -> get_Name(This,virtualMachineName) )
#define IVMVirtualMachine_put_Name(This,virtualMachineName) ( (This)->lpVtbl -> put_Name(This,virtualMachineName) )
#define IVMVirtualMachine_get_ConfigID(This,virtualMachineConfigID) ( (This)->lpVtbl -> get_ConfigID(This,virtualMachineConfigID) )
#define IVMVirtualMachine_get_File(This,virtualMachineXMLFile) ( (This)->lpVtbl -> get_File(This,virtualMachineXMLFile) )
#define IVMVirtualMachine_get_Accountant(This,accountant) ( (This)->lpVtbl -> get_Accountant(This,accountant) )
#define IVMVirtualMachine_get_GuestOS(This,guestOS) ( (This)->lpVtbl -> get_GuestOS(This,guestOS) )
#define IVMVirtualMachine_get_Display(This,display) ( (This)->lpVtbl -> get_Display(This,display) )
#define IVMVirtualMachine_get_Keyboard(This,keyboard) ( (This)->lpVtbl -> get_Keyboard(This,keyboard) )
#define IVMVirtualMachine_get_Mouse(This,mouse) ( (This)->lpVtbl -> get_Mouse(This,mouse) )
#define IVMVirtualMachine_Startup(This,startupTask) ( (This)->lpVtbl -> Startup(This,startupTask) )
#define IVMVirtualMachine_Startup2(This,startupOption,startupTask) ( (This)->lpVtbl -> Startup2(This,startupOption,startupTask) )
#define IVMVirtualMachine_TurnOff(This,turnOffTask) ( (This)->lpVtbl -> TurnOff(This,turnOffTask) )
#define IVMVirtualMachine_Save(This,saveTask) ( (This)->lpVtbl -> Save(This,saveTask) )
#define IVMVirtualMachine_Reset(This,resetTask) ( (This)->lpVtbl -> Reset(This,resetTask) )
#define IVMVirtualMachine_DiscardSavedState(This) ( (This)->lpVtbl -> DiscardSavedState(This) )
#define IVMVirtualMachine_Pause(This) ( (This)->lpVtbl -> Pause(This) )
#define IVMVirtualMachine_Resume(This) ( (This)->lpVtbl -> Resume(This) )
#define IVMVirtualMachine_get_State(This,virtualMachineState) ( (This)->lpVtbl -> get_State(This,virtualMachineState) )
#define IVMVirtualMachine_get_ShutdownActionOnQuit(This,shutdownAction) ( (This)->lpVtbl -> get_ShutdownActionOnQuit(This,shutdownAction) )
#define IVMVirtualMachine_put_ShutdownActionOnQuit(This,shutdownAction) ( (This)->lpVtbl -> put_ShutdownActionOnQuit(This,shutdownAction) )
#define IVMVirtualMachine_get_SavedStateFilePath(This,savedStateFilePath) ( (This)->lpVtbl -> get_SavedStateFilePath(This,savedStateFilePath) )
#define IVMVirtualMachine_get_BIOSGUID(This,biosGUID) ( (This)->lpVtbl -> get_BIOSGUID(This,biosGUID) )
#define IVMVirtualMachine_put_BIOSGUID(This,biosGUID) ( (This)->lpVtbl -> put_BIOSGUID(This,biosGUID) )
#define IVMVirtualMachine_get_BIOSSerialNumber(This,biosSerialNumber) ( (This)->lpVtbl -> get_BIOSSerialNumber(This,biosSerialNumber) )
#define IVMVirtualMachine_put_BIOSSerialNumber(This,biosSerialNumber) ( (This)->lpVtbl -> put_BIOSSerialNumber(This,biosSerialNumber) )
#define IVMVirtualMachine_get_BaseBoardSerialNumber(This,baseBoardSerialNumber) ( (This)->lpVtbl -> get_BaseBoardSerialNumber(This,baseBoardSerialNumber) )
#define IVMVirtualMachine_put_BaseBoardSerialNumber(This,baseBoardSerialNumber) ( (This)->lpVtbl -> put_BaseBoardSerialNumber(This,baseBoardSerialNumber) )
#define IVMVirtualMachine_get_ChassisSerialNumber(This,chassisSerialNumber) ( (This)->lpVtbl -> get_ChassisSerialNumber(This,chassisSerialNumber) )
#define IVMVirtualMachine_put_ChassisSerialNumber(This,chasisSerialNumber) ( (This)->lpVtbl -> put_ChassisSerialNumber(This,chasisSerialNumber) )
#define IVMVirtualMachine_get_ChassisAssetTag(This,chassisAssetTag) ( (This)->lpVtbl -> get_ChassisAssetTag(This,chassisAssetTag) )
#define IVMVirtualMachine_put_ChassisAssetTag(This,chassisAssetTag) ( (This)->lpVtbl -> put_ChassisAssetTag(This,chassisAssetTag) )
#define IVMVirtualMachine_AddHardDiskConnection(This,hardDiskPath,busNumber,deviceNumber,hardDiskConnection) ( (This)->lpVtbl -> AddHardDiskConnection(This,hardDiskPath,busNumber,deviceNumber,hardDiskConnection) )
#define IVMVirtualMachine_RemoveHardDiskConnection(This,hardDiskConnection) ( (This)->lpVtbl -> RemoveHardDiskConnection(This,hardDiskConnection) )
#define IVMVirtualMachine_get_HardDiskConnections(This,hardDiskConnectionCollection) ( (This)->lpVtbl -> get_HardDiskConnections(This,hardDiskConnectionCollection) )
#define IVMVirtualMachine_MergeUndoDisks(This,undoMergeTask) ( (This)->lpVtbl -> MergeUndoDisks(This,undoMergeTask) )
#define IVMVirtualMachine_DiscardUndoDisks(This) ( (This)->lpVtbl -> DiscardUndoDisks(This) )
#define IVMVirtualMachine_get_Undoable(This,isUndoable) ( (This)->lpVtbl -> get_Undoable(This,isUndoable) )
#define IVMVirtualMachine_put_Undoable(This,enableUndo) ( (This)->lpVtbl -> put_Undoable(This,enableUndo) )
#define IVMVirtualMachine_get_UndoAction(This,undoAction) ( (This)->lpVtbl -> get_UndoAction(This,undoAction) )
#define IVMVirtualMachine_put_UndoAction(This,undoAction) ( (This)->lpVtbl -> put_UndoAction(This,undoAction) )
#define IVMVirtualMachine_AddDVDROMDrive(This,busNumber,deviceNumber,dvdDrive) ( (This)->lpVtbl -> AddDVDROMDrive(This,busNumber,deviceNumber,dvdDrive) )
#define IVMVirtualMachine_RemoveDVDROMDrive(This,dvdDrive) ( (This)->lpVtbl -> RemoveDVDROMDrive(This,dvdDrive) )
#define IVMVirtualMachine_get_DVDROMDrives(This,dvdROMCollection) ( (This)->lpVtbl -> get_DVDROMDrives(This,dvdROMCollection) )
#define IVMVirtualMachine_get_FloppyDrives(This,floppyCollection) ( (This)->lpVtbl -> get_FloppyDrives(This,floppyCollection) )
#define IVMVirtualMachine_AddNetworkAdapter(This,networkAdapter) ( (This)->lpVtbl -> AddNetworkAdapter(This,networkAdapter) )
#define IVMVirtualMachine_RemoveNetworkAdapter(This,networkAdapter) ( (This)->lpVtbl -> RemoveNetworkAdapter(This,networkAdapter) )
#define IVMVirtualMachine_get_NetworkAdapters(This,networkAdapterCollection) ( (This)->lpVtbl -> get_NetworkAdapters(This,networkAdapterCollection) )
#define IVMVirtualMachine_get_SerialPorts(This,serialPortCollection) ( (This)->lpVtbl -> get_SerialPorts(This,serialPortCollection) )
#define IVMVirtualMachine_get_ParallelPorts(This,parallelPortCollection) ( (This)->lpVtbl -> get_ParallelPorts(This,parallelPortCollection) )
#define IVMVirtualMachine_get_ProcessorSpeed(This,processorSpeed) ( (This)->lpVtbl -> get_ProcessorSpeed(This,processorSpeed) )
#define IVMVirtualMachine_get_HasMMX(This,mmxEnabled) ( (This)->lpVtbl -> get_HasMMX(This,mmxEnabled) )
#define IVMVirtualMachine_get_HasSSE(This,sseEnabled) ( (This)->lpVtbl -> get_HasSSE(This,sseEnabled) )
#define IVMVirtualMachine_get_HasSSE2(This,sse2Enabled) ( (This)->lpVtbl -> get_HasSSE2(This,sse2Enabled) )
#define IVMVirtualMachine_get_Has3DNow(This,threeDNowEnabled) ( (This)->lpVtbl -> get_Has3DNow(This,threeDNowEnabled) )
#define IVMVirtualMachine_get_RdpPipeName(This,RdpPipeName) ( (This)->lpVtbl -> get_RdpPipeName(This,RdpPipeName) )
#define IVMVirtualMachine_AttachUSBDevice(This,inUSBDevice) ( (This)->lpVtbl -> AttachUSBDevice(This,inUSBDevice) )
#define IVMVirtualMachine_DetachUSBDevice(This,inUSBDevice) ( (This)->lpVtbl -> DetachUSBDevice(This,inUSBDevice) )
#define IVMVirtualMachine_get_Notes(This,virtualMachineNotes) ( (This)->lpVtbl -> get_Notes(This,virtualMachineNotes) )
#define IVMVirtualMachine_put_Notes(This,virtualMachineNotes) ( (This)->lpVtbl -> put_Notes(This,virtualMachineNotes) )
#define IVMVirtualMachine_get_Memory(This,megabytesOfMemory) ( (This)->lpVtbl -> get_Memory(This,megabytesOfMemory) )
#define IVMVirtualMachine_put_Memory(This,megabytesOfMemory) ( (This)->lpVtbl -> put_Memory(This,megabytesOfMemory) )
#define IVMVirtualMachine_get_AttachedDriveTypes(This,driveTypes) ( (This)->lpVtbl -> get_AttachedDriveTypes(This,driveTypes) )
#define IVMVirtualMachine_GetConfigurationValue(This,configurationKey,configurationValue) ( (This)->lpVtbl -> GetConfigurationValue(This,configurationKey,configurationValue) )
#define IVMVirtualMachine_SetConfigurationValue(This,configurationKey,configurationValue) ( (This)->lpVtbl -> SetConfigurationValue(This,configurationKey,configurationValue) )
#define IVMVirtualMachine_RemoveConfigurationValue(This,configurationKey) ( (This)->lpVtbl -> RemoveConfigurationValue(This,configurationKey) )
#define IVMVirtualMachine_GetActivationValue(This,activationKey,activationValue) ( (This)->lpVtbl -> GetActivationValue(This,activationKey,activationValue) )
#define IVMVirtualMachine_SetActivationValue(This,activationKey,activationValue) ( (This)->lpVtbl -> SetActivationValue(This,activationKey,activationValue) )
#define IVMVirtualMachine_RemoveActivationValue(This,activationKey) ( (This)->lpVtbl -> RemoveActivationValue(This,activationKey) )
#define IVMVirtualMachine_StartCommunicationChannel(This,inHostEndpointType,inHostEndPointName,inGuestEndpointType,inGuestEndpointName) ( (This)->lpVtbl -> StartCommunicationChannel(This,inHostEndpointType,inHostEndPointName,inGuestEndpointType,inGuestEndpointName) )
#endif
#endif
#ifndef __IVMVirtualMachineEvents_DISPINTERFACE_DEFINED__
#define __IVMVirtualMachineEvents_DISPINTERFACE_DEFINED__
extern const IID DIID_IVMVirtualMachineEvents;
typedef struct IVMVirtualMachineEventsVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE *QueryInterface) (IVMVirtualMachineEvents *This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE *AddRef) (IVMVirtualMachineEvents *This);
	ULONG(STDMETHODCALLTYPE *Release) (IVMVirtualMachineEvents *This);
	HRESULT(STDMETHODCALLTYPE *GetTypeInfoCount) (IVMVirtualMachineEvents *This, UINT *pctinfo);
	HRESULT(STDMETHODCALLTYPE *GetTypeInfo) (IVMVirtualMachineEvents *This, UINT iTInfo, LCID lcid, ITypeInfo **ppTInfo);
	HRESULT(STDMETHODCALLTYPE *GetIDsOfNames) (IVMVirtualMachineEvents *This, REFIID riid, LPOLESTR *rgszNames, UINT cNames, LCID lcid, DISPID *rgDispId);
	HRESULT(STDMETHODCALLTYPE *Invoke) (IVMVirtualMachineEvents *This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS *pDispParams, VARIANT *pVarResult, EXCEPINFO *pExcepInfo, UINT *puArgErr);
	END_INTERFACE
}  IVMVirtualMachineEventsVtbl;
interface IVMVirtualMachineEvents
{
	CONST_VTBL struct IVMVirtualMachineEventsVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IVMVirtualMachineEvents_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IVMVirtualMachineEvents_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IVMVirtualMachineEvents_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IVMVirtualMachineEvents_GetTypeInfoCount(This,pctinfo) ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define IVMVirtualMachineEvents_GetTypeInfo(This,iTInfo,lcid,ppTInfo) ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define IVMVirtualMachineEvents_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define IVMVirtualMachineEvents_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#endif
#endif
#ifndef __IVMVirtualMachineCollection_INTERFACE_DEFINED__
#define __IVMVirtualMachineCollection_INTERFACE_DEFINED__
extern const IID IID_IVMVirtualMachineCollection;
typedef struct IVMVirtualMachineCollectionVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE *QueryInterface) (IVMVirtualMachineCollection *This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE *AddRef) (IVMVirtualMachineCollection *This);
	ULONG(STDMETHODCALLTYPE *Release) (IVMVirtualMachineCollection *This);
	HRESULT(STDMETHODCALLTYPE *GetTypeInfoCount) (IVMVirtualMachineCollection *This, UINT *pctinfo);
	HRESULT(STDMETHODCALLTYPE *GetTypeInfo) (IVMVirtualMachineCollection *This, UINT iTInfo, LCID lcid, ITypeInfo **ppTInfo);
	HRESULT(STDMETHODCALLTYPE *GetIDsOfNames) (IVMVirtualMachineCollection *This, REFIID riid, LPOLESTR *rgszNames, UINT cNames, LCID lcid, DISPID *rgDispId);
	HRESULT(STDMETHODCALLTYPE *Invoke) (IVMVirtualMachineCollection *This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS *pDispParams, VARIANT *pVarResult, EXCEPINFO *pExcepInfo, UINT *puArgErr);
	HRESULT(STDMETHODCALLTYPE *get_Count) (IVMVirtualMachineCollection *This, long *count);
	HRESULT(STDMETHODCALLTYPE *get_Item) (IVMVirtualMachineCollection *This, long index, IVMVirtualMachine **virtualMachine);
	HRESULT(STDMETHODCALLTYPE *get__NewEnum) (IVMVirtualMachineCollection *This, IUnknown **enumerator);
	END_INTERFACE
}  IVMVirtualMachineCollectionVtbl;
interface IVMVirtualMachineCollection
{
	CONST_VTBL struct IVMVirtualMachineCollectionVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IVMVirtualMachineCollection_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IVMVirtualMachineCollection_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IVMVirtualMachineCollection_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IVMVirtualMachineCollection_GetTypeInfoCount(This,pctinfo) ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define IVMVirtualMachineCollection_GetTypeInfo(This,iTInfo,lcid,ppTInfo) ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define IVMVirtualMachineCollection_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define IVMVirtualMachineCollection_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define IVMVirtualMachineCollection_get_Count(This,count) ( (This)->lpVtbl -> get_Count(This,count) )
#define IVMVirtualMachineCollection_get_Item(This,index,virtualMachine) ( (This)->lpVtbl -> get_Item(This,index,virtualMachine) )
#define IVMVirtualMachineCollection_get__NewEnum(This,enumerator) ( (This)->lpVtbl -> get__NewEnum(This,enumerator) )
#endif
#endif
extern const CLSID CLSID_VMVirtualMachine;
#ifndef __IVMSupportDriver_INTERFACE_DEFINED__
#define __IVMSupportDriver_INTERFACE_DEFINED__
extern const IID IID_IVMSupportDriver;
typedef struct IVMSupportDriverVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE *QueryInterface) (IVMSupportDriver *This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE *AddRef) (IVMSupportDriver *This);
	ULONG(STDMETHODCALLTYPE *Release) (IVMSupportDriver *This);
	HRESULT(STDMETHODCALLTYPE *GetTypeInfoCount) (IVMSupportDriver *This, UINT *pctinfo);
	HRESULT(STDMETHODCALLTYPE *GetTypeInfo) (IVMSupportDriver *This, UINT iTInfo, LCID lcid, ITypeInfo **ppTInfo);
	HRESULT(STDMETHODCALLTYPE *GetIDsOfNames) (IVMSupportDriver *This, REFIID riid, LPOLESTR *rgszNames, UINT cNames, LCID lcid, DISPID *rgDispId);
	HRESULT(STDMETHODCALLTYPE *Invoke) (IVMSupportDriver *This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS *pDispParams, VARIANT *pVarResult, EXCEPINFO *pExcepInfo, UINT *puArgErr);
	HRESULT(STDMETHODCALLTYPE *get_Type) (IVMSupportDriver *This, VMSupportDriverType *driverType);
	HRESULT(STDMETHODCALLTYPE *get_Description) (IVMSupportDriver *This, BSTR *description);
	HRESULT(STDMETHODCALLTYPE *get_Manufacturer) (IVMSupportDriver *This, BSTR *manufacturer);
	HRESULT(STDMETHODCALLTYPE *get_Provider) (IVMSupportDriver *This, BSTR *provider);
	HRESULT(STDMETHODCALLTYPE *get_Version) (IVMSupportDriver *This, BSTR *version);
	HRESULT(STDMETHODCALLTYPE *get_Date) (IVMSupportDriver *This, BSTR *date);
	END_INTERFACE
}  IVMSupportDriverVtbl;
interface IVMSupportDriver
{
	CONST_VTBL struct IVMSupportDriverVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IVMSupportDriver_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IVMSupportDriver_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IVMSupportDriver_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IVMSupportDriver_GetTypeInfoCount(This,pctinfo) ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define IVMSupportDriver_GetTypeInfo(This,iTInfo,lcid,ppTInfo) ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define IVMSupportDriver_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define IVMSupportDriver_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define IVMSupportDriver_get_Type(This,driverType) ( (This)->lpVtbl -> get_Type(This,driverType) )
#define IVMSupportDriver_get_Description(This,description) ( (This)->lpVtbl -> get_Description(This,description) )
#define IVMSupportDriver_get_Manufacturer(This,manufacturer) ( (This)->lpVtbl -> get_Manufacturer(This,manufacturer) )
#define IVMSupportDriver_get_Provider(This,provider) ( (This)->lpVtbl -> get_Provider(This,provider) )
#define IVMSupportDriver_get_Version(This,version) ( (This)->lpVtbl -> get_Version(This,version) )
#define IVMSupportDriver_get_Date(This,date) ( (This)->lpVtbl -> get_Date(This,date) )
#endif
#endif
#ifndef __IVMSupportDriverCollection_INTERFACE_DEFINED__
#define __IVMSupportDriverCollection_INTERFACE_DEFINED__
extern const IID IID_IVMSupportDriverCollection;
typedef struct IVMSupportDriverCollectionVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE *QueryInterface) (IVMSupportDriverCollection *This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE *AddRef) (IVMSupportDriverCollection *This);
	ULONG(STDMETHODCALLTYPE *Release) (IVMSupportDriverCollection *This);
	HRESULT(STDMETHODCALLTYPE *GetTypeInfoCount) (IVMSupportDriverCollection *This, UINT *pctinfo);
	HRESULT(STDMETHODCALLTYPE *GetTypeInfo) (IVMSupportDriverCollection *This, UINT iTInfo, LCID lcid, ITypeInfo **ppTInfo);
	HRESULT(STDMETHODCALLTYPE *GetIDsOfNames) (IVMSupportDriverCollection *This, REFIID riid, LPOLESTR *rgszNames, UINT cNames, LCID lcid, DISPID *rgDispId);
	HRESULT(STDMETHODCALLTYPE *Invoke) (IVMSupportDriverCollection *This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS *pDispParams, VARIANT *pVarResult, EXCEPINFO *pExcepInfo, UINT *puArgErr);
	HRESULT(STDMETHODCALLTYPE *get_Count) (IVMSupportDriverCollection *This, long *count);
	HRESULT(STDMETHODCALLTYPE *get_Item) (IVMSupportDriverCollection *This, long index, IVMSupportDriver **supportDriver);
	HRESULT(STDMETHODCALLTYPE *get__NewEnum) (IVMSupportDriverCollection *This, IUnknown **enumerator);
	END_INTERFACE
}  IVMSupportDriverCollectionVtbl;
interface IVMSupportDriverCollection
{
	CONST_VTBL struct IVMSupportDriverCollectionVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IVMSupportDriverCollection_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IVMSupportDriverCollection_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IVMSupportDriverCollection_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IVMSupportDriverCollection_GetTypeInfoCount(This,pctinfo) ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define IVMSupportDriverCollection_GetTypeInfo(This,iTInfo,lcid,ppTInfo) ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define IVMSupportDriverCollection_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define IVMSupportDriverCollection_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define IVMSupportDriverCollection_get_Count(This,count) ( (This)->lpVtbl -> get_Count(This,count) )
#define IVMSupportDriverCollection_get_Item(This,index,supportDriver) ( (This)->lpVtbl -> get_Item(This,index,supportDriver) )
#define IVMSupportDriverCollection_get__NewEnum(This,enumerator) ( (This)->lpVtbl -> get__NewEnum(This,enumerator) )
#endif
#endif
extern const CLSID CLSID_VMSupportDriver;
#ifndef __IVMHostInfo_INTERFACE_DEFINED__
#define __IVMHostInfo_INTERFACE_DEFINED__
extern const IID IID_IVMHostInfo;
typedef struct IVMHostInfoVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE *QueryInterface) (IVMHostInfo *This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE *AddRef) (IVMHostInfo *This);
	ULONG(STDMETHODCALLTYPE *Release) (IVMHostInfo *This);
	HRESULT(STDMETHODCALLTYPE *GetTypeInfoCount) (IVMHostInfo *This, UINT *pctinfo);
	HRESULT(STDMETHODCALLTYPE *GetTypeInfo) (IVMHostInfo *This, UINT iTInfo, LCID lcid, ITypeInfo **ppTInfo);
	HRESULT(STDMETHODCALLTYPE *GetIDsOfNames) (IVMHostInfo *This, REFIID riid, LPOLESTR *rgszNames, UINT cNames, LCID lcid, DISPID *rgDispId);
	HRESULT(STDMETHODCALLTYPE *Invoke) (IVMHostInfo *This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS *pDispParams, VARIANT *pVarResult, EXCEPINFO *pExcepInfo, UINT *puArgErr);
	HRESULT(STDMETHODCALLTYPE *get_LogicalProcessorCount) (IVMHostInfo *This, long *processorCount);
	HRESULT(STDMETHODCALLTYPE *get_PhysicalProcessorCount) (IVMHostInfo *This, long *processorCount);
	HRESULT(STDMETHODCALLTYPE *get_ProcessorSpeed) (IVMHostInfo *This, long *processorSpeed);
	HRESULT(STDMETHODCALLTYPE *get_ProcessorSpeedString) (IVMHostInfo *This, BSTR *processorSpeedString);
	HRESULT(STDMETHODCALLTYPE *get_ProcessorManufacturerString) (IVMHostInfo *This, BSTR *processorManufacturerString);
	HRESULT(STDMETHODCALLTYPE *get_ProcessorVersionString) (IVMHostInfo *This, BSTR *processorVersionString);
	HRESULT(STDMETHODCALLTYPE *get_ProcessorFeaturesString) (IVMHostInfo *This, BSTR *featuresString);
	HRESULT(STDMETHODCALLTYPE *get_MMX) (IVMHostInfo *This, VARIANT_BOOL *mmxEnabled);
	HRESULT(STDMETHODCALLTYPE *get_SSE) (IVMHostInfo *This, VARIANT_BOOL *sseEnabled);
	HRESULT(STDMETHODCALLTYPE *get_SSE2) (IVMHostInfo *This, VARIANT_BOOL *sse2Enabled);
	HRESULT(STDMETHODCALLTYPE *get_ThreeDNow) (IVMHostInfo *This, VARIANT_BOOL *threeDNowEnabled);
	HRESULT(STDMETHODCALLTYPE *get_Memory) (IVMHostInfo *This, VARIANT *megabytesOfMemory);
	HRESULT(STDMETHODCALLTYPE *get_MemoryTotalString) (IVMHostInfo *This, BSTR *megabytesOfMemory);
	HRESULT(STDMETHODCALLTYPE *get_MemoryAvail) (IVMHostInfo *This, VARIANT *megabytesOfMemory);
	HRESULT(STDMETHODCALLTYPE *get_MemoryAvailString) (IVMHostInfo *This, BSTR *megabytesOfMemory);
	HRESULT(STDMETHODCALLTYPE *get_OperatingSystem) (IVMHostInfo *This, BSTR *operatingSystem);
	HRESULT(STDMETHODCALLTYPE *get_OSVersionString) (IVMHostInfo *This, BSTR *OSVersion);
	HRESULT(STDMETHODCALLTYPE *get_OSMajorVersion) (IVMHostInfo *This, long *osMajorVersion);
	HRESULT(STDMETHODCALLTYPE *get_OSMinorVersion) (IVMHostInfo *This, long *osMinorVersion);
	HRESULT(STDMETHODCALLTYPE *get_OSServicePackString) (IVMHostInfo *This, BSTR *OSServicePack);
	HRESULT(STDMETHODCALLTYPE *get_NetworkAdapters) (IVMHostInfo *This, VARIANT *hostNICs);
	HRESULT(STDMETHODCALLTYPE *get_NetworkAddresses) (IVMHostInfo *This, VARIANT *hostAddresses);
	HRESULT(STDMETHODCALLTYPE *get_DVDDrives) (IVMHostInfo *This, VARIANT *DVDDrives);
	HRESULT(STDMETHODCALLTYPE *get_FloppyDrives) (IVMHostInfo *This, VARIANT *floppyDrives);
	HRESULT(STDMETHODCALLTYPE *get_SerialPorts) (IVMHostInfo *This, BSTR *serialPorts);
	HRESULT(STDMETHODCALLTYPE *get_ParallelPort) (IVMHostInfo *This, BSTR *vmParallelPort);
	HRESULT(STDMETHODCALLTYPE *get_UTCTime) (IVMHostInfo *This, DATE *UTCTime);
	END_INTERFACE
}  IVMHostInfoVtbl;
interface IVMHostInfo
{
	CONST_VTBL struct IVMHostInfoVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IVMHostInfo_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IVMHostInfo_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IVMHostInfo_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IVMHostInfo_GetTypeInfoCount(This,pctinfo) ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define IVMHostInfo_GetTypeInfo(This,iTInfo,lcid,ppTInfo) ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define IVMHostInfo_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define IVMHostInfo_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define IVMHostInfo_get_LogicalProcessorCount(This,processorCount) ( (This)->lpVtbl -> get_LogicalProcessorCount(This,processorCount) )
#define IVMHostInfo_get_PhysicalProcessorCount(This,processorCount) ( (This)->lpVtbl -> get_PhysicalProcessorCount(This,processorCount) )
#define IVMHostInfo_get_ProcessorSpeed(This,processorSpeed) ( (This)->lpVtbl -> get_ProcessorSpeed(This,processorSpeed) )
#define IVMHostInfo_get_ProcessorSpeedString(This,processorSpeedString) ( (This)->lpVtbl -> get_ProcessorSpeedString(This,processorSpeedString) )
#define IVMHostInfo_get_ProcessorManufacturerString(This,processorManufacturerString) ( (This)->lpVtbl -> get_ProcessorManufacturerString(This,processorManufacturerString) )
#define IVMHostInfo_get_ProcessorVersionString(This,processorVersionString) ( (This)->lpVtbl -> get_ProcessorVersionString(This,processorVersionString) )
#define IVMHostInfo_get_ProcessorFeaturesString(This,featuresString) ( (This)->lpVtbl -> get_ProcessorFeaturesString(This,featuresString) )
#define IVMHostInfo_get_MMX(This,mmxEnabled) ( (This)->lpVtbl -> get_MMX(This,mmxEnabled) )
#define IVMHostInfo_get_SSE(This,sseEnabled) ( (This)->lpVtbl -> get_SSE(This,sseEnabled) )
#define IVMHostInfo_get_SSE2(This,sse2Enabled) ( (This)->lpVtbl -> get_SSE2(This,sse2Enabled) )
#define IVMHostInfo_get_ThreeDNow(This,threeDNowEnabled) ( (This)->lpVtbl -> get_ThreeDNow(This,threeDNowEnabled) )
#define IVMHostInfo_get_Memory(This,megabytesOfMemory) ( (This)->lpVtbl -> get_Memory(This,megabytesOfMemory) )
#define IVMHostInfo_get_MemoryTotalString(This,megabytesOfMemory) ( (This)->lpVtbl -> get_MemoryTotalString(This,megabytesOfMemory) )
#define IVMHostInfo_get_MemoryAvail(This,megabytesOfMemory) ( (This)->lpVtbl -> get_MemoryAvail(This,megabytesOfMemory) )
#define IVMHostInfo_get_MemoryAvailString(This,megabytesOfMemory) ( (This)->lpVtbl -> get_MemoryAvailString(This,megabytesOfMemory) )
#define IVMHostInfo_get_OperatingSystem(This,operatingSystem) ( (This)->lpVtbl -> get_OperatingSystem(This,operatingSystem) )
#define IVMHostInfo_get_OSVersionString(This,OSVersion) ( (This)->lpVtbl -> get_OSVersionString(This,OSVersion) )
#define IVMHostInfo_get_OSMajorVersion(This,osMajorVersion) ( (This)->lpVtbl -> get_OSMajorVersion(This,osMajorVersion) )
#define IVMHostInfo_get_OSMinorVersion(This,osMinorVersion) ( (This)->lpVtbl -> get_OSMinorVersion(This,osMinorVersion) )
#define IVMHostInfo_get_OSServicePackString(This,OSServicePack) ( (This)->lpVtbl -> get_OSServicePackString(This,OSServicePack) )
#define IVMHostInfo_get_NetworkAdapters(This,hostNICs) ( (This)->lpVtbl -> get_NetworkAdapters(This,hostNICs) )
#define IVMHostInfo_get_NetworkAddresses(This,hostAddresses) ( (This)->lpVtbl -> get_NetworkAddresses(This,hostAddresses) )
#define IVMHostInfo_get_DVDDrives(This,DVDDrives) ( (This)->lpVtbl -> get_DVDDrives(This,DVDDrives) )
#define IVMHostInfo_get_FloppyDrives(This,floppyDrives) ( (This)->lpVtbl -> get_FloppyDrives(This,floppyDrives) )
#define IVMHostInfo_get_SerialPorts(This,serialPorts) ( (This)->lpVtbl -> get_SerialPorts(This,serialPorts) )
#define IVMHostInfo_get_ParallelPort(This,vmParallelPort) ( (This)->lpVtbl -> get_ParallelPort(This,vmParallelPort) )
#define IVMHostInfo_get_UTCTime(This,UTCTime) ( (This)->lpVtbl -> get_UTCTime(This,UTCTime) )
#endif
#endif
#ifndef __IVMVirtualNetworkCollection_INTERFACE_DEFINED__
#define __IVMVirtualNetworkCollection_INTERFACE_DEFINED__
extern const IID IID_IVMVirtualNetworkCollection;
typedef struct IVMVirtualNetworkCollectionVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE *QueryInterface) (IVMVirtualNetworkCollection *This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE *AddRef) (IVMVirtualNetworkCollection *This);
	ULONG(STDMETHODCALLTYPE *Release) (IVMVirtualNetworkCollection *This);
	HRESULT(STDMETHODCALLTYPE *GetTypeInfoCount) (IVMVirtualNetworkCollection *This, UINT *pctinfo);
	HRESULT(STDMETHODCALLTYPE *GetTypeInfo) (IVMVirtualNetworkCollection *This, UINT iTInfo, LCID lcid, ITypeInfo **ppTInfo);
	HRESULT(STDMETHODCALLTYPE *GetIDsOfNames) (IVMVirtualNetworkCollection *This, REFIID riid, LPOLESTR *rgszNames, UINT cNames, LCID lcid, DISPID *rgDispId);
	HRESULT(STDMETHODCALLTYPE *Invoke) (IVMVirtualNetworkCollection *This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS *pDispParams, VARIANT *pVarResult, EXCEPINFO *pExcepInfo, UINT *puArgErr);
	HRESULT(STDMETHODCALLTYPE *get_Count) (IVMVirtualNetworkCollection *This, long *count);
	HRESULT(STDMETHODCALLTYPE *get_Item) (IVMVirtualNetworkCollection *This, long index, IVMVirtualNetwork **virtualNetwork);
	HRESULT(STDMETHODCALLTYPE *get__NewEnum) (IVMVirtualNetworkCollection *This, IUnknown **enumerator);
	END_INTERFACE
}  IVMVirtualNetworkCollectionVtbl;
interface IVMVirtualNetworkCollection
{
	CONST_VTBL struct IVMVirtualNetworkCollectionVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IVMVirtualNetworkCollection_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IVMVirtualNetworkCollection_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IVMVirtualNetworkCollection_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IVMVirtualNetworkCollection_GetTypeInfoCount(This,pctinfo) ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define IVMVirtualNetworkCollection_GetTypeInfo(This,iTInfo,lcid,ppTInfo) ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define IVMVirtualNetworkCollection_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define IVMVirtualNetworkCollection_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define IVMVirtualNetworkCollection_get_Count(This,count) ( (This)->lpVtbl -> get_Count(This,count) )
#define IVMVirtualNetworkCollection_get_Item(This,index,virtualNetwork) ( (This)->lpVtbl -> get_Item(This,index,virtualNetwork) )
#define IVMVirtualNetworkCollection_get__NewEnum(This,enumerator) ( (This)->lpVtbl -> get__NewEnum(This,enumerator) )
#endif
#endif
#ifndef __IVMVirtualNetwork_INTERFACE_DEFINED__
#define __IVMVirtualNetwork_INTERFACE_DEFINED__
extern const IID IID_IVMVirtualNetwork;
typedef struct IVMVirtualNetworkVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE *QueryInterface) (IVMVirtualNetwork *This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE *AddRef) (IVMVirtualNetwork *This);
	ULONG(STDMETHODCALLTYPE *Release) (IVMVirtualNetwork *This);
	HRESULT(STDMETHODCALLTYPE *GetTypeInfoCount) (IVMVirtualNetwork *This, UINT *pctinfo);
	HRESULT(STDMETHODCALLTYPE *GetTypeInfo) (IVMVirtualNetwork *This, UINT iTInfo, LCID lcid, ITypeInfo **ppTInfo);
	HRESULT(STDMETHODCALLTYPE *GetIDsOfNames) (IVMVirtualNetwork *This, REFIID riid, LPOLESTR *rgszNames, UINT cNames, LCID lcid, DISPID *rgDispId);
	HRESULT(STDMETHODCALLTYPE *Invoke) (IVMVirtualNetwork *This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS *pDispParams, VARIANT *pVarResult, EXCEPINFO *pExcepInfo, UINT *puArgErr);
	HRESULT(STDMETHODCALLTYPE *_ID) (IVMVirtualNetwork *This, VARIANT *virtualNetworkID);
	HRESULT(STDMETHODCALLTYPE *get_Name) (IVMVirtualNetwork *This, BSTR *virtualNetworkName);
	HRESULT(STDMETHODCALLTYPE *get_MediaType) (IVMVirtualNetwork *This, VARIANT_BOOL *isWireless);
	HRESULT(STDMETHODCALLTYPE *get_HostAdapter) (IVMVirtualNetwork *This, BSTR *hostAdapter);
	HRESULT(STDMETHODCALLTYPE *get_NetworkAdapters) (IVMVirtualNetwork *This, IVMNetworkAdapterCollection **networkInterfaceCollection);
	END_INTERFACE
}  IVMVirtualNetworkVtbl;
interface IVMVirtualNetwork
{
	CONST_VTBL struct IVMVirtualNetworkVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IVMVirtualNetwork_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IVMVirtualNetwork_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IVMVirtualNetwork_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IVMVirtualNetwork_GetTypeInfoCount(This,pctinfo) ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define IVMVirtualNetwork_GetTypeInfo(This,iTInfo,lcid,ppTInfo) ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define IVMVirtualNetwork_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define IVMVirtualNetwork_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define IVMVirtualNetwork__ID(This,virtualNetworkID) ( (This)->lpVtbl -> _ID(This,virtualNetworkID) )
#define IVMVirtualNetwork_get_Name(This,virtualNetworkName) ( (This)->lpVtbl -> get_Name(This,virtualNetworkName) )
#define IVMVirtualNetwork_get_MediaType(This,isWireless) ( (This)->lpVtbl -> get_MediaType(This,isWireless) )
#define IVMVirtualNetwork_get_HostAdapter(This,hostAdapter) ( (This)->lpVtbl -> get_HostAdapter(This,hostAdapter) )
#define IVMVirtualNetwork_get_NetworkAdapters(This,networkInterfaceCollection) ( (This)->lpVtbl -> get_NetworkAdapters(This,networkInterfaceCollection) )
#endif
#endif
#ifndef __IVMHardDisk_INTERFACE_DEFINED__
#define __IVMHardDisk_INTERFACE_DEFINED__
extern const IID IID_IVMHardDisk;
typedef struct IVMHardDiskVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE *QueryInterface) (IVMHardDisk *This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE *AddRef) (IVMHardDisk *This);
	ULONG(STDMETHODCALLTYPE *Release) (IVMHardDisk *This);
	HRESULT(STDMETHODCALLTYPE *GetTypeInfoCount) (IVMHardDisk *This, UINT *pctinfo);
	HRESULT(STDMETHODCALLTYPE *GetTypeInfo) (IVMHardDisk *This, UINT iTInfo, LCID lcid, ITypeInfo **ppTInfo);
	HRESULT(STDMETHODCALLTYPE *GetIDsOfNames) (IVMHardDisk *This, REFIID riid, LPOLESTR *rgszNames, UINT cNames, LCID lcid, DISPID *rgDispId);
	HRESULT(STDMETHODCALLTYPE *Invoke) (IVMHardDisk *This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS *pDispParams, VARIANT *pVarResult, EXCEPINFO *pExcepInfo, UINT *puArgErr);
	HRESULT(STDMETHODCALLTYPE *Merge) (IVMHardDisk *This, IVMTask **mergeTask);
	HRESULT(STDMETHODCALLTYPE *MergeTo) (IVMHardDisk *This, BSTR newDiskImagePath, VMHardDiskType newDiskImageType, IVMTask **mergeTask);
	HRESULT(STDMETHODCALLTYPE *Compact) (IVMHardDisk *This, IVMTask **compactTask);
	HRESULT(STDMETHODCALLTYPE *Convert) (IVMHardDisk *This, BSTR convertedDiskImagePath, VMHardDiskType convertedDiskImageType, IVMTask **convertTask);
	HRESULT(STDMETHODCALLTYPE *get_File) (IVMHardDisk *This, BSTR *hardDiskfile);
	HRESULT(STDMETHODCALLTYPE *get_Type) (IVMHardDisk *This, VMHardDiskType *type);
	HRESULT(STDMETHODCALLTYPE *get_SizeInGuest) (IVMHardDisk *This, VARIANT *fileSize);
	HRESULT(STDMETHODCALLTYPE *get_SizeOnHost) (IVMHardDisk *This, VARIANT *fileSize);
	HRESULT(STDMETHODCALLTYPE *get_HostFreeDiskSpace) (IVMHardDisk *This, VARIANT *freeBytes);
	HRESULT(STDMETHODCALLTYPE *get_Parent) (IVMHardDisk *This, IVMHardDisk **parent);
	HRESULT(STDMETHODCALLTYPE *put_Parent) (IVMHardDisk *This, IVMHardDisk *parent);
	END_INTERFACE
}  IVMHardDiskVtbl;
interface IVMHardDisk
{
	CONST_VTBL struct IVMHardDiskVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IVMHardDisk_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IVMHardDisk_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IVMHardDisk_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IVMHardDisk_GetTypeInfoCount(This,pctinfo) ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define IVMHardDisk_GetTypeInfo(This,iTInfo,lcid,ppTInfo) ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define IVMHardDisk_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define IVMHardDisk_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define IVMHardDisk_Merge(This,mergeTask) ( (This)->lpVtbl -> Merge(This,mergeTask) )
#define IVMHardDisk_MergeTo(This,newDiskImagePath,newDiskImageType,mergeTask) ( (This)->lpVtbl -> MergeTo(This,newDiskImagePath,newDiskImageType,mergeTask) )
#define IVMHardDisk_Compact(This,compactTask) ( (This)->lpVtbl -> Compact(This,compactTask) )
#define IVMHardDisk_Convert(This,convertedDiskImagePath,convertedDiskImageType,convertTask) ( (This)->lpVtbl -> Convert(This,convertedDiskImagePath,convertedDiskImageType,convertTask) )
#define IVMHardDisk_get_File(This,hardDiskfile) ( (This)->lpVtbl -> get_File(This,hardDiskfile) )
#define IVMHardDisk_get_Type(This,type) ( (This)->lpVtbl -> get_Type(This,type) )
#define IVMHardDisk_get_SizeInGuest(This,fileSize) ( (This)->lpVtbl -> get_SizeInGuest(This,fileSize) )
#define IVMHardDisk_get_SizeOnHost(This,fileSize) ( (This)->lpVtbl -> get_SizeOnHost(This,fileSize) )
#define IVMHardDisk_get_HostFreeDiskSpace(This,freeBytes) ( (This)->lpVtbl -> get_HostFreeDiskSpace(This,freeBytes) )
#define IVMHardDisk_get_Parent(This,parent) ( (This)->lpVtbl -> get_Parent(This,parent) )
#define IVMHardDisk_put_Parent(This,parent) ( (This)->lpVtbl -> put_Parent(This,parent) )
#endif
#endif
#ifndef __IVMTaskCollection_INTERFACE_DEFINED__
#define __IVMTaskCollection_INTERFACE_DEFINED__
extern const IID IID_IVMTaskCollection;
typedef struct IVMTaskCollectionVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE *QueryInterface) (IVMTaskCollection *This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE *AddRef) (IVMTaskCollection *This);
	ULONG(STDMETHODCALLTYPE *Release) (IVMTaskCollection *This);
	HRESULT(STDMETHODCALLTYPE *GetTypeInfoCount) (IVMTaskCollection *This, UINT *pctinfo);
	HRESULT(STDMETHODCALLTYPE *GetTypeInfo) (IVMTaskCollection *This, UINT iTInfo, LCID lcid, ITypeInfo **ppTInfo);
	HRESULT(STDMETHODCALLTYPE *GetIDsOfNames) (IVMTaskCollection *This, REFIID riid, LPOLESTR *rgszNames, UINT cNames, LCID lcid, DISPID *rgDispId);
	HRESULT(STDMETHODCALLTYPE *Invoke) (IVMTaskCollection *This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS *pDispParams, VARIANT *pVarResult, EXCEPINFO *pExcepInfo, UINT *puArgErr);
	HRESULT(STDMETHODCALLTYPE *get_Count) (IVMTaskCollection *This, long *count);
	HRESULT(STDMETHODCALLTYPE *get_Item) (IVMTaskCollection *This, long index, IVMTask **task);
	HRESULT(STDMETHODCALLTYPE *get__NewEnum) (IVMTaskCollection *This, IUnknown **enumerator);
	END_INTERFACE
}  IVMTaskCollectionVtbl;
interface IVMTaskCollection
{
	CONST_VTBL struct IVMTaskCollectionVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IVMTaskCollection_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IVMTaskCollection_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IVMTaskCollection_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IVMTaskCollection_GetTypeInfoCount(This,pctinfo) ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define IVMTaskCollection_GetTypeInfo(This,iTInfo,lcid,ppTInfo) ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define IVMTaskCollection_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define IVMTaskCollection_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define IVMTaskCollection_get_Count(This,count) ( (This)->lpVtbl -> get_Count(This,count) )
#define IVMTaskCollection_get_Item(This,index,task) ( (This)->lpVtbl -> get_Item(This,index,task) )
#define IVMTaskCollection_get__NewEnum(This,enumerator) ( (This)->lpVtbl -> get__NewEnum(This,enumerator) )
#endif
#endif
#ifndef __IVMVirtualPC_INTERFACE_DEFINED__
#define __IVMVirtualPC_INTERFACE_DEFINED__
extern const IID IID_IVMVirtualPC;
typedef struct IVMVirtualPCVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE *QueryInterface) (IVMVirtualPC *This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE *AddRef) (IVMVirtualPC *This);
	ULONG(STDMETHODCALLTYPE *Release) (IVMVirtualPC *This);
	HRESULT(STDMETHODCALLTYPE *GetTypeInfoCount) (IVMVirtualPC *This, UINT *pctinfo);
	HRESULT(STDMETHODCALLTYPE *GetTypeInfo) (IVMVirtualPC *This, UINT iTInfo, LCID lcid, ITypeInfo **ppTInfo);
	HRESULT(STDMETHODCALLTYPE *GetIDsOfNames) (IVMVirtualPC *This, REFIID riid, LPOLESTR *rgszNames, UINT cNames, LCID lcid, DISPID *rgDispId);
	HRESULT(STDMETHODCALLTYPE *Invoke) (IVMVirtualPC *This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS *pDispParams, VARIANT *pVarResult, EXCEPINFO *pExcepInfo, UINT *puArgErr);
	HRESULT(STDMETHODCALLTYPE *get_HostInfo) (IVMVirtualPC *This, IVMHostInfo **hostInfo);
	HRESULT(STDMETHODCALLTYPE *FindVirtualMachine) (IVMVirtualPC *This, BSTR configurationName, IVMVirtualMachine **virtualMachine);
	HRESULT(STDMETHODCALLTYPE *CreateVirtualMachine) (IVMVirtualPC *This, BSTR configurationName, BSTR configurationPath, IVMVirtualMachine **virtualMachine);
	HRESULT(STDMETHODCALLTYPE *DeleteVirtualMachine) (IVMVirtualPC *This, IVMVirtualMachine *virtualMachine);
	HRESULT(STDMETHODCALLTYPE *RegisterVirtualMachine) (IVMVirtualPC *This, BSTR configurationName, BSTR configurationPath, IVMVirtualMachine **virtualMachine);
	HRESULT(STDMETHODCALLTYPE *UnregisterVirtualMachine) (IVMVirtualPC *This, IVMVirtualMachine *virtualMachine);
	HRESULT(STDMETHODCALLTYPE *get_VirtualMachines) (IVMVirtualPC *This, IVMVirtualMachineCollection **virtualMachineCollection);
	HRESULT(STDMETHODCALLTYPE *FindVirtualNetwork) (IVMVirtualPC *This, BSTR virtualNetworkName, IVMVirtualNetwork **virtualNetwork);
	HRESULT(STDMETHODCALLTYPE *get_VirtualNetworks) (IVMVirtualPC *This, IVMVirtualNetworkCollection **virtualNetworkCollection);
	HRESULT(STDMETHODCALLTYPE *get_UnconnectedNetworkAdapters) (IVMVirtualPC *This, IVMNetworkAdapterCollection **unconnectedNetworkAdapterCollection);
	HRESULT(STDMETHODCALLTYPE *get_SupportDrivers) (IVMVirtualPC *This, IVMSupportDriverCollection **supportDriverCollection);
	HRESULT(STDMETHODCALLTYPE *get_Tasks) (IVMVirtualPC *This, IVMTaskCollection **taskCollection);
	HRESULT(STDMETHODCALLTYPE *CreateDynamicVirtualHardDisk) (IVMVirtualPC *This, BSTR imagePath, long size, IVMTask **diskTask);
	HRESULT(STDMETHODCALLTYPE *CreateFixedVirtualHardDisk) (IVMVirtualPC *This, BSTR imagePath, long size, IVMTask **diskTask);
	HRESULT(STDMETHODCALLTYPE *CreateDifferencingVirtualHardDisk) (IVMVirtualPC *This, BSTR imagePath, BSTR parentPath, IVMTask **diskTask);
	HRESULT(STDMETHODCALLTYPE *GetHardDisk) (IVMVirtualPC *This, BSTR imagePath, IVMHardDisk **hardDisk);
	HRESULT(STDMETHODCALLTYPE *CreateFloppyDiskImage) (IVMVirtualPC *This, BSTR imagePath, VMFloppyDiskImageType imageType);
	HRESULT(STDMETHODCALLTYPE *GetFloppyDiskImageType) (IVMVirtualPC *This, BSTR imagePath, VMFloppyDiskImageType *imageType);
	HRESULT(STDMETHODCALLTYPE *GetConfigurationValue) (IVMVirtualPC *This, BSTR preferenceKey, VARIANT *preferenceValue);
	HRESULT(STDMETHODCALLTYPE *SetConfigurationValue) (IVMVirtualPC *This, BSTR preferenceKey, VARIANT preferenceValue);
	HRESULT(STDMETHODCALLTYPE *RemoveConfigurationValue) (IVMVirtualPC *This, BSTR preferenceKey);
	HRESULT(STDMETHODCALLTYPE *get_MinimumMemoryPerVM) (IVMVirtualPC *This, long *megabytesOfMemory);
	HRESULT(STDMETHODCALLTYPE *get_MaximumMemoryPerVM) (IVMVirtualPC *This, long *megabytesOfMemory);
	HRESULT(STDMETHODCALLTYPE *get_SuggestedMaximumMemoryPerVM) (IVMVirtualPC *This, long *megabytesOfMemory);
	HRESULT(STDMETHODCALLTYPE *get_MaximumFloppyDrivesPerVM) (IVMVirtualPC *This, long *maxDrives);
	HRESULT(STDMETHODCALLTYPE *get_MaximumSerialPortsPerVM) (IVMVirtualPC *This, long *maxPorts);
	HRESULT(STDMETHODCALLTYPE *get_MaximumParallelPortsPerVM) (IVMVirtualPC *This, long *maxPorts);
	HRESULT(STDMETHODCALLTYPE *get_MaximumNetworkAdaptersPerVM) (IVMVirtualPC *This, long *maxNetworkAdapters);
	HRESULT(STDMETHODCALLTYPE *get_MaximumNumberOfIDEBuses) (IVMVirtualPC *This, long *maxNumBuses);
	HRESULT(STDMETHODCALLTYPE *get_DefaultVMConfigurationPath) (IVMVirtualPC *This, BSTR *configurationPath);
	HRESULT(STDMETHODCALLTYPE *put_DefaultVMConfigurationPath) (IVMVirtualPC *This, BSTR configurationPath);
	HRESULT(STDMETHODCALLTYPE *get_SearchPaths) (IVMVirtualPC *This, VARIANT *searchPaths);
	HRESULT(STDMETHODCALLTYPE *put_SearchPaths) (IVMVirtualPC *This, VARIANT searchPaths);
	HRESULT(STDMETHODCALLTYPE *GetHardDiskFiles) (IVMVirtualPC *This, VARIANT inAdditionalSearchPaths, VARIANT *outHardDiskFileList);
	HRESULT(STDMETHODCALLTYPE *GetVirtualMachineFiles) (IVMVirtualPC *This, VARIANT inAdditionalSearchPaths, VARIANT_BOOL inExcludedRegisteredVMs, VARIANT *outVirtualMachineFileList);
	HRESULT(STDMETHODCALLTYPE *GetFloppyDiskFiles) (IVMVirtualPC *This, VARIANT inAdditionalSearchPaths, VARIANT *outFloppyDiskFileList);
	HRESULT(STDMETHODCALLTYPE *GetDVDFiles) (IVMVirtualPC *This, VARIANT inAdditionalSearchPaths, VARIANT *outDVDFileList);
	HRESULT(STDMETHODCALLTYPE *get_USBDeviceCollection) (IVMVirtualPC *This, IVMUSBDeviceCollection **usbDeviceCollection);
	HRESULT(STDMETHODCALLTYPE *get_Name) (IVMVirtualPC *This, BSTR *virtualPCName);
	HRESULT(STDMETHODCALLTYPE *get_Version) (IVMVirtualPC *This, BSTR *version);
	HRESULT(STDMETHODCALLTYPE *get_UpTime) (IVMVirtualPC *This, long *secondsAlive);
	END_INTERFACE
}  IVMVirtualPCVtbl;
interface IVMVirtualPC
{
	CONST_VTBL struct IVMVirtualPCVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IVMVirtualPC_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IVMVirtualPC_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IVMVirtualPC_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IVMVirtualPC_GetTypeInfoCount(This,pctinfo) ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define IVMVirtualPC_GetTypeInfo(This,iTInfo,lcid,ppTInfo) ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define IVMVirtualPC_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define IVMVirtualPC_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define IVMVirtualPC_get_HostInfo(This,hostInfo) ( (This)->lpVtbl -> get_HostInfo(This,hostInfo) )
#define IVMVirtualPC_FindVirtualMachine(This,configurationName,virtualMachine) ( (This)->lpVtbl -> FindVirtualMachine(This,configurationName,virtualMachine) )
#define IVMVirtualPC_CreateVirtualMachine(This,configurationName,configurationPath,virtualMachine) ( (This)->lpVtbl -> CreateVirtualMachine(This,configurationName,configurationPath,virtualMachine) )
#define IVMVirtualPC_DeleteVirtualMachine(This,virtualMachine) ( (This)->lpVtbl -> DeleteVirtualMachine(This,virtualMachine) )
#define IVMVirtualPC_RegisterVirtualMachine(This,configurationName,configurationPath,virtualMachine) ( (This)->lpVtbl -> RegisterVirtualMachine(This,configurationName,configurationPath,virtualMachine) )
#define IVMVirtualPC_UnregisterVirtualMachine(This,virtualMachine) ( (This)->lpVtbl -> UnregisterVirtualMachine(This,virtualMachine) )
#define IVMVirtualPC_get_VirtualMachines(This,virtualMachineCollection) ( (This)->lpVtbl -> get_VirtualMachines(This,virtualMachineCollection) )
#define IVMVirtualPC_FindVirtualNetwork(This,virtualNetworkName,virtualNetwork) ( (This)->lpVtbl -> FindVirtualNetwork(This,virtualNetworkName,virtualNetwork) )
#define IVMVirtualPC_get_VirtualNetworks(This,virtualNetworkCollection) ( (This)->lpVtbl -> get_VirtualNetworks(This,virtualNetworkCollection) )
#define IVMVirtualPC_get_UnconnectedNetworkAdapters(This,unconnectedNetworkAdapterCollection) ( (This)->lpVtbl -> get_UnconnectedNetworkAdapters(This,unconnectedNetworkAdapterCollection) )
#define IVMVirtualPC_get_SupportDrivers(This,supportDriverCollection) ( (This)->lpVtbl -> get_SupportDrivers(This,supportDriverCollection) )
#define IVMVirtualPC_get_Tasks(This,taskCollection) ( (This)->lpVtbl -> get_Tasks(This,taskCollection) )
#define IVMVirtualPC_CreateDynamicVirtualHardDisk(This,imagePath,size,diskTask) ( (This)->lpVtbl -> CreateDynamicVirtualHardDisk(This,imagePath,size,diskTask) )
#define IVMVirtualPC_CreateFixedVirtualHardDisk(This,imagePath,size,diskTask) ( (This)->lpVtbl -> CreateFixedVirtualHardDisk(This,imagePath,size,diskTask) )
#define IVMVirtualPC_CreateDifferencingVirtualHardDisk(This,imagePath,parentPath,diskTask) ( (This)->lpVtbl -> CreateDifferencingVirtualHardDisk(This,imagePath,parentPath,diskTask) )
#define IVMVirtualPC_GetHardDisk(This,imagePath,hardDisk) ( (This)->lpVtbl -> GetHardDisk(This,imagePath,hardDisk) )
#define IVMVirtualPC_CreateFloppyDiskImage(This,imagePath,imageType) ( (This)->lpVtbl -> CreateFloppyDiskImage(This,imagePath,imageType) )
#define IVMVirtualPC_GetFloppyDiskImageType(This,imagePath,imageType) ( (This)->lpVtbl -> GetFloppyDiskImageType(This,imagePath,imageType) )
#define IVMVirtualPC_GetConfigurationValue(This,preferenceKey,preferenceValue) ( (This)->lpVtbl -> GetConfigurationValue(This,preferenceKey,preferenceValue) )
#define IVMVirtualPC_SetConfigurationValue(This,preferenceKey,preferenceValue) ( (This)->lpVtbl -> SetConfigurationValue(This,preferenceKey,preferenceValue) )
#define IVMVirtualPC_RemoveConfigurationValue(This,preferenceKey) ( (This)->lpVtbl -> RemoveConfigurationValue(This,preferenceKey) )
#define IVMVirtualPC_get_MinimumMemoryPerVM(This,megabytesOfMemory) ( (This)->lpVtbl -> get_MinimumMemoryPerVM(This,megabytesOfMemory) )
#define IVMVirtualPC_get_MaximumMemoryPerVM(This,megabytesOfMemory) ( (This)->lpVtbl -> get_MaximumMemoryPerVM(This,megabytesOfMemory) )
#define IVMVirtualPC_get_SuggestedMaximumMemoryPerVM(This,megabytesOfMemory) ( (This)->lpVtbl -> get_SuggestedMaximumMemoryPerVM(This,megabytesOfMemory) )
#define IVMVirtualPC_get_MaximumFloppyDrivesPerVM(This,maxDrives) ( (This)->lpVtbl -> get_MaximumFloppyDrivesPerVM(This,maxDrives) )
#define IVMVirtualPC_get_MaximumSerialPortsPerVM(This,maxPorts) ( (This)->lpVtbl -> get_MaximumSerialPortsPerVM(This,maxPorts) )
#define IVMVirtualPC_get_MaximumParallelPortsPerVM(This,maxPorts) ( (This)->lpVtbl -> get_MaximumParallelPortsPerVM(This,maxPorts) )
#define IVMVirtualPC_get_MaximumNetworkAdaptersPerVM(This,maxNetworkAdapters) ( (This)->lpVtbl -> get_MaximumNetworkAdaptersPerVM(This,maxNetworkAdapters) )
#define IVMVirtualPC_get_MaximumNumberOfIDEBuses(This,maxNumBuses) ( (This)->lpVtbl -> get_MaximumNumberOfIDEBuses(This,maxNumBuses) )
#define IVMVirtualPC_get_DefaultVMConfigurationPath(This,configurationPath) ( (This)->lpVtbl -> get_DefaultVMConfigurationPath(This,configurationPath) )
#define IVMVirtualPC_put_DefaultVMConfigurationPath(This,configurationPath) ( (This)->lpVtbl -> put_DefaultVMConfigurationPath(This,configurationPath) )
#define IVMVirtualPC_get_SearchPaths(This,searchPaths) ( (This)->lpVtbl -> get_SearchPaths(This,searchPaths) )
#define IVMVirtualPC_put_SearchPaths(This,searchPaths) ( (This)->lpVtbl -> put_SearchPaths(This,searchPaths) )
#define IVMVirtualPC_GetHardDiskFiles(This,inAdditionalSearchPaths,outHardDiskFileList) ( (This)->lpVtbl -> GetHardDiskFiles(This,inAdditionalSearchPaths,outHardDiskFileList) )
#define IVMVirtualPC_GetVirtualMachineFiles(This,inAdditionalSearchPaths,inExcludedRegisteredVMs,outVirtualMachineFileList) ( (This)->lpVtbl -> GetVirtualMachineFiles(This,inAdditionalSearchPaths,inExcludedRegisteredVMs,outVirtualMachineFileList) )
#define IVMVirtualPC_GetFloppyDiskFiles(This,inAdditionalSearchPaths,outFloppyDiskFileList) ( (This)->lpVtbl -> GetFloppyDiskFiles(This,inAdditionalSearchPaths,outFloppyDiskFileList) )
#define IVMVirtualPC_GetDVDFiles(This,inAdditionalSearchPaths,outDVDFileList) ( (This)->lpVtbl -> GetDVDFiles(This,inAdditionalSearchPaths,outDVDFileList) )
#define IVMVirtualPC_get_USBDeviceCollection(This,usbDeviceCollection) ( (This)->lpVtbl -> get_USBDeviceCollection(This,usbDeviceCollection) )
#define IVMVirtualPC_get_Name(This,virtualPCName) ( (This)->lpVtbl -> get_Name(This,virtualPCName) )
#define IVMVirtualPC_get_Version(This,version) ( (This)->lpVtbl -> get_Version(This,version) )
#define IVMVirtualPC_get_UpTime(This,secondsAlive) ( (This)->lpVtbl -> get_UpTime(This,secondsAlive) )
#endif
#endif
#ifndef __IVMVirtualPCEvents_DISPINTERFACE_DEFINED__
#define __IVMVirtualPCEvents_DISPINTERFACE_DEFINED__
extern const IID DIID_IVMVirtualPCEvents;
typedef struct IVMVirtualPCEventsVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE *QueryInterface) (IVMVirtualPCEvents *This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE *AddRef) (IVMVirtualPCEvents *This);
	ULONG(STDMETHODCALLTYPE *Release) (IVMVirtualPCEvents *This);
	HRESULT(STDMETHODCALLTYPE *GetTypeInfoCount) (IVMVirtualPCEvents *This, UINT *pctinfo);
	HRESULT(STDMETHODCALLTYPE *GetTypeInfo) (IVMVirtualPCEvents *This, UINT iTInfo, LCID lcid, ITypeInfo **ppTInfo);
	HRESULT(STDMETHODCALLTYPE *GetIDsOfNames) (IVMVirtualPCEvents *This, REFIID riid, LPOLESTR *rgszNames, UINT cNames, LCID lcid, DISPID *rgDispId);
	HRESULT(STDMETHODCALLTYPE *Invoke) (IVMVirtualPCEvents *This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS *pDispParams, VARIANT *pVarResult, EXCEPINFO *pExcepInfo, UINT *puArgErr);
	END_INTERFACE
}  IVMVirtualPCEventsVtbl;
interface IVMVirtualPCEvents
{
	CONST_VTBL struct IVMVirtualPCEventsVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IVMVirtualPCEvents_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IVMVirtualPCEvents_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IVMVirtualPCEvents_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IVMVirtualPCEvents_GetTypeInfoCount(This,pctinfo) ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define IVMVirtualPCEvents_GetTypeInfo(This,iTInfo,lcid,ppTInfo) ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define IVMVirtualPCEvents_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define IVMVirtualPCEvents_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#endif
#endif
extern const CLSID CLSID_VMVirtualPC;
extern const CLSID CLSID_VMAccountant;
extern const CLSID CLSID_VMDisplay;
#ifndef __IVMDVDDriveEvents_DISPINTERFACE_DEFINED__
#define __IVMDVDDriveEvents_DISPINTERFACE_DEFINED__
extern const IID DIID_IVMDVDDriveEvents;
typedef struct IVMDVDDriveEventsVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE *QueryInterface) (IVMDVDDriveEvents *This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE *AddRef) (IVMDVDDriveEvents *This);
	ULONG(STDMETHODCALLTYPE *Release) (IVMDVDDriveEvents *This);
	HRESULT(STDMETHODCALLTYPE *GetTypeInfoCount) (IVMDVDDriveEvents *This, UINT *pctinfo);
	HRESULT(STDMETHODCALLTYPE *GetTypeInfo) (IVMDVDDriveEvents *This, UINT iTInfo, LCID lcid, ITypeInfo **ppTInfo);
	HRESULT(STDMETHODCALLTYPE *GetIDsOfNames) (IVMDVDDriveEvents *This, REFIID riid, LPOLESTR *rgszNames, UINT cNames, LCID lcid, DISPID *rgDispId);
	HRESULT(STDMETHODCALLTYPE *Invoke) (IVMDVDDriveEvents *This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS *pDispParams, VARIANT *pVarResult, EXCEPINFO *pExcepInfo, UINT *puArgErr);
	END_INTERFACE
}  IVMDVDDriveEventsVtbl;
interface IVMDVDDriveEvents
{
	CONST_VTBL struct IVMDVDDriveEventsVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IVMDVDDriveEvents_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IVMDVDDriveEvents_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IVMDVDDriveEvents_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IVMDVDDriveEvents_GetTypeInfoCount(This,pctinfo) ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define IVMDVDDriveEvents_GetTypeInfo(This,iTInfo,lcid,ppTInfo) ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define IVMDVDDriveEvents_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define IVMDVDDriveEvents_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#endif
#endif
extern const CLSID CLSID_VMDVDDrive;
#ifndef __IVMFloppyDriveEvents_DISPINTERFACE_DEFINED__
#define __IVMFloppyDriveEvents_DISPINTERFACE_DEFINED__
extern const IID DIID_IVMFloppyDriveEvents;
typedef struct IVMFloppyDriveEventsVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE *QueryInterface) (IVMFloppyDriveEvents *This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE *AddRef) (IVMFloppyDriveEvents *This);
	ULONG(STDMETHODCALLTYPE *Release) (IVMFloppyDriveEvents *This);
	HRESULT(STDMETHODCALLTYPE *GetTypeInfoCount) (IVMFloppyDriveEvents *This, UINT *pctinfo);
	HRESULT(STDMETHODCALLTYPE *GetTypeInfo) (IVMFloppyDriveEvents *This, UINT iTInfo, LCID lcid, ITypeInfo **ppTInfo);
	HRESULT(STDMETHODCALLTYPE *GetIDsOfNames) (IVMFloppyDriveEvents *This, REFIID riid, LPOLESTR *rgszNames, UINT cNames, LCID lcid, DISPID *rgDispId);
	HRESULT(STDMETHODCALLTYPE *Invoke) (IVMFloppyDriveEvents *This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS *pDispParams, VARIANT *pVarResult, EXCEPINFO *pExcepInfo, UINT *puArgErr);
	END_INTERFACE
}  IVMFloppyDriveEventsVtbl;
interface IVMFloppyDriveEvents
{
	CONST_VTBL struct IVMFloppyDriveEventsVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IVMFloppyDriveEvents_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IVMFloppyDriveEvents_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IVMFloppyDriveEvents_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IVMFloppyDriveEvents_GetTypeInfoCount(This,pctinfo) ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define IVMFloppyDriveEvents_GetTypeInfo(This,iTInfo,lcid,ppTInfo) ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define IVMFloppyDriveEvents_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define IVMFloppyDriveEvents_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#endif
#endif
extern const CLSID CLSID_VMFloppyDrive;
extern const CLSID CLSID_VMGuestOS;
extern const CLSID CLSID_VMHardDiskConnection;
extern const CLSID CLSID_VMHardDisk;
extern const CLSID CLSID_VMHostInfo;
extern const CLSID CLSID_VMKeyboard;
extern const CLSID CLSID_VMMouseDevice;
extern const CLSID CLSID_VMNetworkAdapter;
extern const CLSID CLSID_VMParallelPort;
extern const CLSID CLSID_VMSerialPort;
extern const CLSID CLSID_VMVirtualNetwork;
extern const CLSID CLSID_VMTask;
extern const CLSID CLSID_VMUSBDevice;
#endif
#endif

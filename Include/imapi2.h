/*+@@file@@----------------------------------------------------------------*//*!
 \file		imapi2.h
 \par Description 
            Extension and update of headers for PellesC compiler suite.
 \par Project: 
            PellesC Headers extension
 \date		Created  on Sat Jul 16 21:16:55 2016
 \date		Modified on Sat Jul 16 21:16:55 2016
 \author	frankie
\*//*-@@file@@----------------------------------------------------------------*/

#ifndef __REQUIRED_RPCNDR_H_VERSION__
#define __REQUIRED_RPCNDR_H_VERSION__ 475
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
#ifndef __imapi2_h__
#define __imapi2_h__
#if __POCC__ >= 500
#pragma once
#endif
#ifndef __IDiscMaster2_FWD_DEFINED__
#define __IDiscMaster2_FWD_DEFINED__
typedef interface IDiscMaster2 IDiscMaster2;
#endif
#ifndef __DDiscMaster2Events_FWD_DEFINED__
#define __DDiscMaster2Events_FWD_DEFINED__
typedef interface DDiscMaster2Events DDiscMaster2Events;
#endif
#ifndef __IDiscRecorder2Ex_FWD_DEFINED__
#define __IDiscRecorder2Ex_FWD_DEFINED__
typedef interface IDiscRecorder2Ex IDiscRecorder2Ex;
#endif
#ifndef __IDiscRecorder2_FWD_DEFINED__
#define __IDiscRecorder2_FWD_DEFINED__
typedef interface IDiscRecorder2 IDiscRecorder2;
#endif
#ifndef __IWriteEngine2_FWD_DEFINED__
#define __IWriteEngine2_FWD_DEFINED__
typedef interface IWriteEngine2 IWriteEngine2;
#endif
#ifndef __IWriteEngine2EventArgs_FWD_DEFINED__
#define __IWriteEngine2EventArgs_FWD_DEFINED__
typedef interface IWriteEngine2EventArgs IWriteEngine2EventArgs;
#endif
#ifndef __DWriteEngine2Events_FWD_DEFINED__
#define __DWriteEngine2Events_FWD_DEFINED__
typedef interface DWriteEngine2Events DWriteEngine2Events;
#endif
#ifndef __IDiscFormat2_FWD_DEFINED__
#define __IDiscFormat2_FWD_DEFINED__
typedef interface IDiscFormat2 IDiscFormat2;
#endif
#ifndef __IDiscFormat2Erase_FWD_DEFINED__
#define __IDiscFormat2Erase_FWD_DEFINED__
typedef interface IDiscFormat2Erase IDiscFormat2Erase;
#endif
#ifndef __DDiscFormat2EraseEvents_FWD_DEFINED__
#define __DDiscFormat2EraseEvents_FWD_DEFINED__
typedef interface DDiscFormat2EraseEvents DDiscFormat2EraseEvents;
#endif
#ifndef __IDiscFormat2Data_FWD_DEFINED__
#define __IDiscFormat2Data_FWD_DEFINED__
typedef interface IDiscFormat2Data IDiscFormat2Data;
#endif
#ifndef __DDiscFormat2DataEvents_FWD_DEFINED__
#define __DDiscFormat2DataEvents_FWD_DEFINED__
typedef interface DDiscFormat2DataEvents DDiscFormat2DataEvents;
#endif
#ifndef __IDiscFormat2DataEventArgs_FWD_DEFINED__
#define __IDiscFormat2DataEventArgs_FWD_DEFINED__
typedef interface IDiscFormat2DataEventArgs IDiscFormat2DataEventArgs;
#endif
#ifndef __IDiscFormat2TrackAtOnce_FWD_DEFINED__
#define __IDiscFormat2TrackAtOnce_FWD_DEFINED__
typedef interface IDiscFormat2TrackAtOnce IDiscFormat2TrackAtOnce;
#endif
#ifndef __DDiscFormat2TrackAtOnceEvents_FWD_DEFINED__
#define __DDiscFormat2TrackAtOnceEvents_FWD_DEFINED__
typedef interface DDiscFormat2TrackAtOnceEvents DDiscFormat2TrackAtOnceEvents;
#endif
#ifndef __IDiscFormat2TrackAtOnceEventArgs_FWD_DEFINED__
#define __IDiscFormat2TrackAtOnceEventArgs_FWD_DEFINED__
typedef interface IDiscFormat2TrackAtOnceEventArgs IDiscFormat2TrackAtOnceEventArgs;
#endif
#ifndef __IDiscFormat2RawCD_FWD_DEFINED__
#define __IDiscFormat2RawCD_FWD_DEFINED__
typedef interface IDiscFormat2RawCD IDiscFormat2RawCD;
#endif
#ifndef __DDiscFormat2RawCDEvents_FWD_DEFINED__
#define __DDiscFormat2RawCDEvents_FWD_DEFINED__
typedef interface DDiscFormat2RawCDEvents DDiscFormat2RawCDEvents;
#endif
#ifndef __IDiscFormat2RawCDEventArgs_FWD_DEFINED__
#define __IDiscFormat2RawCDEventArgs_FWD_DEFINED__
typedef interface IDiscFormat2RawCDEventArgs IDiscFormat2RawCDEventArgs;
#endif
#ifndef __IBurnVerification_FWD_DEFINED__
#define __IBurnVerification_FWD_DEFINED__
typedef interface IBurnVerification IBurnVerification;
#endif
#ifndef __IWriteSpeedDescriptor_FWD_DEFINED__
#define __IWriteSpeedDescriptor_FWD_DEFINED__
typedef interface IWriteSpeedDescriptor IWriteSpeedDescriptor;
#endif
#ifndef __IMultisession_FWD_DEFINED__
#define __IMultisession_FWD_DEFINED__
typedef interface IMultisession IMultisession;
#endif
#ifndef __IMultisessionSequential_FWD_DEFINED__
#define __IMultisessionSequential_FWD_DEFINED__
typedef interface IMultisessionSequential IMultisessionSequential;
#endif
#ifndef __IMultisessionSequential2_FWD_DEFINED__
#define __IMultisessionSequential2_FWD_DEFINED__
typedef interface IMultisessionSequential2 IMultisessionSequential2;
#endif
#ifndef __IMultisessionRandomWrite_FWD_DEFINED__
#define __IMultisessionRandomWrite_FWD_DEFINED__
typedef interface IMultisessionRandomWrite IMultisessionRandomWrite;
#endif
#ifndef __IStreamPseudoRandomBased_FWD_DEFINED__
#define __IStreamPseudoRandomBased_FWD_DEFINED__
typedef interface IStreamPseudoRandomBased IStreamPseudoRandomBased;
#endif
#ifndef __IStreamConcatenate_FWD_DEFINED__
#define __IStreamConcatenate_FWD_DEFINED__
typedef interface IStreamConcatenate IStreamConcatenate;
#endif
#ifndef __IStreamInterleave_FWD_DEFINED__
#define __IStreamInterleave_FWD_DEFINED__
typedef interface IStreamInterleave IStreamInterleave;
#endif
#ifndef __IRawCDImageCreator_FWD_DEFINED__
#define __IRawCDImageCreator_FWD_DEFINED__
typedef interface IRawCDImageCreator IRawCDImageCreator;
#endif
#ifndef __IRawCDImageTrackInfo_FWD_DEFINED__
#define __IRawCDImageTrackInfo_FWD_DEFINED__
typedef interface IRawCDImageTrackInfo IRawCDImageTrackInfo;
#endif
#ifndef __IBlockRange_FWD_DEFINED__
#define __IBlockRange_FWD_DEFINED__
typedef interface IBlockRange IBlockRange;
#endif
#ifndef __IBlockRangeList_FWD_DEFINED__
#define __IBlockRangeList_FWD_DEFINED__
typedef interface IBlockRangeList IBlockRangeList;
#endif
#ifndef __IWriteEngine2EventArgs_FWD_DEFINED__
#define __IWriteEngine2EventArgs_FWD_DEFINED__
typedef interface IWriteEngine2EventArgs IWriteEngine2EventArgs;
#endif
#ifndef __IDiscFormat2DataEventArgs_FWD_DEFINED__
#define __IDiscFormat2DataEventArgs_FWD_DEFINED__
typedef interface IDiscFormat2DataEventArgs IDiscFormat2DataEventArgs;
#endif
#ifndef __IDiscFormat2TrackAtOnceEventArgs_FWD_DEFINED__
#define __IDiscFormat2TrackAtOnceEventArgs_FWD_DEFINED__
typedef interface IDiscFormat2TrackAtOnceEventArgs IDiscFormat2TrackAtOnceEventArgs;
#endif
#ifndef __IDiscFormat2RawCDEventArgs_FWD_DEFINED__
#define __IDiscFormat2RawCDEventArgs_FWD_DEFINED__
typedef interface IDiscFormat2RawCDEventArgs IDiscFormat2RawCDEventArgs;
#endif
#ifndef __IWriteSpeedDescriptor_FWD_DEFINED__
#define __IWriteSpeedDescriptor_FWD_DEFINED__
typedef interface IWriteSpeedDescriptor IWriteSpeedDescriptor;
#endif
#ifndef __DDiscMaster2Events_FWD_DEFINED__
#define __DDiscMaster2Events_FWD_DEFINED__
typedef interface DDiscMaster2Events DDiscMaster2Events;
#endif
#ifndef __DWriteEngine2Events_FWD_DEFINED__
#define __DWriteEngine2Events_FWD_DEFINED__
typedef interface DWriteEngine2Events DWriteEngine2Events;
#endif
#ifndef __DDiscFormat2EraseEvents_FWD_DEFINED__
#define __DDiscFormat2EraseEvents_FWD_DEFINED__
typedef interface DDiscFormat2EraseEvents DDiscFormat2EraseEvents;
#endif
#ifndef __DDiscFormat2DataEvents_FWD_DEFINED__
#define __DDiscFormat2DataEvents_FWD_DEFINED__
typedef interface DDiscFormat2DataEvents DDiscFormat2DataEvents;
#endif
#ifndef __DDiscFormat2TrackAtOnceEvents_FWD_DEFINED__
#define __DDiscFormat2TrackAtOnceEvents_FWD_DEFINED__
typedef interface DDiscFormat2TrackAtOnceEvents DDiscFormat2TrackAtOnceEvents;
#endif
#ifndef __DDiscFormat2RawCDEvents_FWD_DEFINED__
#define __DDiscFormat2RawCDEvents_FWD_DEFINED__
typedef interface DDiscFormat2RawCDEvents DDiscFormat2RawCDEvents;
#endif
#ifndef __IRawCDImageCreator_FWD_DEFINED__
#define __IRawCDImageCreator_FWD_DEFINED__
typedef interface IRawCDImageCreator IRawCDImageCreator;
#endif
#ifndef __IRawCDImageTrackInfo_FWD_DEFINED__
#define __IRawCDImageTrackInfo_FWD_DEFINED__
typedef interface IRawCDImageTrackInfo IRawCDImageTrackInfo;
#endif
#ifndef __IBurnVerification_FWD_DEFINED__
#define __IBurnVerification_FWD_DEFINED__
typedef interface IBurnVerification IBurnVerification;
#endif
#ifndef __IBlockRange_FWD_DEFINED__
#define __IBlockRange_FWD_DEFINED__
typedef interface IBlockRange IBlockRange;
#endif
#ifndef __IBlockRangeList_FWD_DEFINED__
#define __IBlockRangeList_FWD_DEFINED__
typedef interface IBlockRangeList IBlockRangeList;
#endif
#ifndef __MsftDiscMaster2_FWD_DEFINED__
#define __MsftDiscMaster2_FWD_DEFINED__
typedef struct MsftDiscMaster2 MsftDiscMaster2;
#endif
#ifndef __MsftDiscRecorder2_FWD_DEFINED__
#define __MsftDiscRecorder2_FWD_DEFINED__
typedef struct MsftDiscRecorder2 MsftDiscRecorder2;
#endif
#ifndef __MsftWriteEngine2_FWD_DEFINED__
#define __MsftWriteEngine2_FWD_DEFINED__
typedef struct MsftWriteEngine2 MsftWriteEngine2;
#endif
#ifndef __MsftDiscFormat2Erase_FWD_DEFINED__
#define __MsftDiscFormat2Erase_FWD_DEFINED__
typedef struct MsftDiscFormat2Erase MsftDiscFormat2Erase;
#endif
#ifndef __MsftDiscFormat2Data_FWD_DEFINED__
#define __MsftDiscFormat2Data_FWD_DEFINED__
typedef struct MsftDiscFormat2Data MsftDiscFormat2Data;
#endif
#ifndef __MsftDiscFormat2TrackAtOnce_FWD_DEFINED__
#define __MsftDiscFormat2TrackAtOnce_FWD_DEFINED__
typedef struct MsftDiscFormat2TrackAtOnce MsftDiscFormat2TrackAtOnce;
#endif
#ifndef __MsftDiscFormat2RawCD_FWD_DEFINED__
#define __MsftDiscFormat2RawCD_FWD_DEFINED__
typedef struct MsftDiscFormat2RawCD MsftDiscFormat2RawCD;
#endif
#ifndef __MsftStreamZero_FWD_DEFINED__
#define __MsftStreamZero_FWD_DEFINED__
typedef struct MsftStreamZero MsftStreamZero;
#endif
#ifndef __MsftStreamPrng001_FWD_DEFINED__
#define __MsftStreamPrng001_FWD_DEFINED__
typedef struct MsftStreamPrng001 MsftStreamPrng001;
#endif
#ifndef __MsftStreamConcatenate_FWD_DEFINED__
#define __MsftStreamConcatenate_FWD_DEFINED__
typedef struct MsftStreamConcatenate MsftStreamConcatenate;
#endif
#ifndef __MsftStreamInterleave_FWD_DEFINED__
#define __MsftStreamInterleave_FWD_DEFINED__
typedef struct MsftStreamInterleave MsftStreamInterleave;
#endif
#ifndef __MsftWriteSpeedDescriptor_FWD_DEFINED__
#define __MsftWriteSpeedDescriptor_FWD_DEFINED__
typedef struct MsftWriteSpeedDescriptor MsftWriteSpeedDescriptor;
#endif
#ifndef __MsftMultisessionSequential_FWD_DEFINED__
#define __MsftMultisessionSequential_FWD_DEFINED__
typedef struct MsftMultisessionSequential MsftMultisessionSequential;
#endif
#ifndef __MsftMultisessionRandomWrite_FWD_DEFINED__
#define __MsftMultisessionRandomWrite_FWD_DEFINED__
typedef struct MsftMultisessionRandomWrite MsftMultisessionRandomWrite;
#endif
#ifndef __MsftRawCDImageCreator_FWD_DEFINED__
#define __MsftRawCDImageCreator_FWD_DEFINED__
typedef struct MsftRawCDImageCreator MsftRawCDImageCreator;
#endif
#include "oaidl.h"
#include "ocidl.h"
#include "propidl.h"
#define	IMAPI_SECTOR_SIZE	( 2048 )
#define IMAPI2_DEFAULT_COMMAND_TIMEOUT 10
typedef enum _IMAPI_MEDIA_PHYSICAL_TYPE
{
	IMAPI_MEDIA_TYPE_UNKNOWN = 0,
	IMAPI_MEDIA_TYPE_CDROM = 0x1,
	IMAPI_MEDIA_TYPE_CDR = 0x2,
	IMAPI_MEDIA_TYPE_CDRW = 0x3,
	IMAPI_MEDIA_TYPE_DVDROM = 0x4,
	IMAPI_MEDIA_TYPE_DVDRAM = 0x5,
	IMAPI_MEDIA_TYPE_DVDPLUSR = 0x6,
	IMAPI_MEDIA_TYPE_DVDPLUSRW = 0x7,
	IMAPI_MEDIA_TYPE_DVDPLUSR_DUALLAYER = 0x8,
	IMAPI_MEDIA_TYPE_DVDDASHR = 0x9,
	IMAPI_MEDIA_TYPE_DVDDASHRW = 0xa,
	IMAPI_MEDIA_TYPE_DVDDASHR_DUALLAYER = 0xb,
	IMAPI_MEDIA_TYPE_DISK = 0xc,
	IMAPI_MEDIA_TYPE_DVDPLUSRW_DUALLAYER = 0xd,
	IMAPI_MEDIA_TYPE_HDDVDROM = 0xe,
	IMAPI_MEDIA_TYPE_HDDVDR = 0xf,
	IMAPI_MEDIA_TYPE_HDDVDRAM = 0x10,
	IMAPI_MEDIA_TYPE_BDROM = 0x11,
	IMAPI_MEDIA_TYPE_BDR = 0x12,
	IMAPI_MEDIA_TYPE_BDRE = 0x13,
	IMAPI_MEDIA_TYPE_MAX = 0x13
} IMAPI_MEDIA_PHYSICAL_TYPE;
typedef enum _IMAPI_MEDIA_PHYSICAL_TYPE *PIMAPI_MEDIA_PHYSICAL_TYPE;
typedef enum _IMAPI_MEDIA_WRITE_PROTECT_STATE
{
	IMAPI_WRITEPROTECTED_UNTIL_POWERDOWN = 0x1,
	IMAPI_WRITEPROTECTED_BY_CARTRIDGE = 0x2,
	IMAPI_WRITEPROTECTED_BY_MEDIA_SPECIFIC_REASON = 0x4,
	IMAPI_WRITEPROTECTED_BY_SOFTWARE_WRITE_PROTECT = 0x8,
	IMAPI_WRITEPROTECTED_BY_DISC_CONTROL_BLOCK = 0x10,
	IMAPI_WRITEPROTECTED_READ_ONLY_MEDIA = 0x4000
} IMAPI_MEDIA_WRITE_PROTECT_STATE;
typedef enum _IMAPI_MEDIA_WRITE_PROTECT_STATE *PIMAPI_MEDIA_WRITE_PROTECT_STATE;
typedef enum _IMAPI_READ_TRACK_ADDRESS_TYPE
{
	IMAPI_READ_TRACK_ADDRESS_TYPE_LBA = 0,
	IMAPI_READ_TRACK_ADDRESS_TYPE_TRACK = 1,
	IMAPI_READ_TRACK_ADDRESS_TYPE_SESSION = 2
} IMAPI_READ_TRACK_ADDRESS_TYPE;
typedef enum _IMAPI_READ_TRACK_ADDRESS_TYPE *PIMAPI_READ_TRACK_ADDRESS_TYPE;
typedef enum _IMAPI_MODE_PAGE_REQUEST_TYPE
{
	IMAPI_MODE_PAGE_REQUEST_TYPE_CURRENT_VALUES = 0,
	IMAPI_MODE_PAGE_REQUEST_TYPE_CHANGEABLE_VALUES = 1,
	IMAPI_MODE_PAGE_REQUEST_TYPE_DEFAULT_VALUES = 2,
	IMAPI_MODE_PAGE_REQUEST_TYPE_SAVED_VALUES = 3
} IMAPI_MODE_PAGE_REQUEST_TYPE;
typedef enum _IMAPI_MODE_PAGE_REQUEST_TYPE *PIMAPI_MODE_PAGE_REQUEST_TYPE;
typedef enum _IMAPI_MODE_PAGE_TYPE
{
	IMAPI_MODE_PAGE_TYPE_READ_WRITE_ERROR_RECOVERY = 0x1,
	IMAPI_MODE_PAGE_TYPE_MRW = 0x3,
	IMAPI_MODE_PAGE_TYPE_WRITE_PARAMETERS = 0x5,
	IMAPI_MODE_PAGE_TYPE_CACHING = 0x8,
	IMAPI_MODE_PAGE_TYPE_INFORMATIONAL_EXCEPTIONS = 0x1c,
	IMAPI_MODE_PAGE_TYPE_TIMEOUT_AND_PROTECT = 0x1d,
	IMAPI_MODE_PAGE_TYPE_POWER_CONDITION = 0x1a,
	IMAPI_MODE_PAGE_TYPE_LEGACY_CAPABILITIES = 0x2a
} IMAPI_MODE_PAGE_TYPE;
typedef enum _IMAPI_MODE_PAGE_TYPE *PIMAPI_MODE_PAGE_TYPE;
typedef enum _IMAPI_FEATURE_PAGE_TYPE
{
	IMAPI_FEATURE_PAGE_TYPE_PROFILE_LIST = 0,
	IMAPI_FEATURE_PAGE_TYPE_CORE = 0x1,
	IMAPI_FEATURE_PAGE_TYPE_MORPHING = 0x2,
	IMAPI_FEATURE_PAGE_TYPE_REMOVABLE_MEDIUM = 0x3,
	IMAPI_FEATURE_PAGE_TYPE_WRITE_PROTECT = 0x4,
	IMAPI_FEATURE_PAGE_TYPE_RANDOMLY_READABLE = 0x10,
	IMAPI_FEATURE_PAGE_TYPE_CD_MULTIREAD = 0x1d,
	IMAPI_FEATURE_PAGE_TYPE_CD_READ = 0x1e,
	IMAPI_FEATURE_PAGE_TYPE_DVD_READ = 0x1f,
	IMAPI_FEATURE_PAGE_TYPE_RANDOMLY_WRITABLE = 0x20,
	IMAPI_FEATURE_PAGE_TYPE_INCREMENTAL_STREAMING_WRITABLE = 0x21,
	IMAPI_FEATURE_PAGE_TYPE_SECTOR_ERASABLE = 0x22,
	IMAPI_FEATURE_PAGE_TYPE_FORMATTABLE = 0x23,
	IMAPI_FEATURE_PAGE_TYPE_HARDWARE_DEFECT_MANAGEMENT = 0x24,
	IMAPI_FEATURE_PAGE_TYPE_WRITE_ONCE = 0x25,
	IMAPI_FEATURE_PAGE_TYPE_RESTRICTED_OVERWRITE = 0x26,
	IMAPI_FEATURE_PAGE_TYPE_CDRW_CAV_WRITE = 0x27,
	IMAPI_FEATURE_PAGE_TYPE_MRW = 0x28,
	IMAPI_FEATURE_PAGE_TYPE_ENHANCED_DEFECT_REPORTING = 0x29,
	IMAPI_FEATURE_PAGE_TYPE_DVD_PLUS_RW = 0x2a,
	IMAPI_FEATURE_PAGE_TYPE_DVD_PLUS_R = 0x2b,
	IMAPI_FEATURE_PAGE_TYPE_RIGID_RESTRICTED_OVERWRITE = 0x2c,
	IMAPI_FEATURE_PAGE_TYPE_CD_TRACK_AT_ONCE = 0x2d,
	IMAPI_FEATURE_PAGE_TYPE_CD_MASTERING = 0x2e,
	IMAPI_FEATURE_PAGE_TYPE_DVD_DASH_WRITE = 0x2f,
	IMAPI_FEATURE_PAGE_TYPE_DOUBLE_DENSITY_CD_READ = 0x30,
	IMAPI_FEATURE_PAGE_TYPE_DOUBLE_DENSITY_CD_R_WRITE = 0x31,
	IMAPI_FEATURE_PAGE_TYPE_DOUBLE_DENSITY_CD_RW_WRITE = 0x32,
	IMAPI_FEATURE_PAGE_TYPE_LAYER_JUMP_RECORDING = 0x33,
	IMAPI_FEATURE_PAGE_TYPE_CD_RW_MEDIA_WRITE_SUPPORT = 0x37,
	IMAPI_FEATURE_PAGE_TYPE_BD_PSEUDO_OVERWRITE = 0x38,
	IMAPI_FEATURE_PAGE_TYPE_DVD_PLUS_R_DUAL_LAYER = 0x3b,
	IMAPI_FEATURE_PAGE_TYPE_BD_READ = 0x40,
	IMAPI_FEATURE_PAGE_TYPE_BD_WRITE = 0x41,
	IMAPI_FEATURE_PAGE_TYPE_HD_DVD_READ = 0x50,
	IMAPI_FEATURE_PAGE_TYPE_HD_DVD_WRITE = 0x51,
	IMAPI_FEATURE_PAGE_TYPE_POWER_MANAGEMENT = 0x100,
	IMAPI_FEATURE_PAGE_TYPE_SMART = 0x101,
	IMAPI_FEATURE_PAGE_TYPE_EMBEDDED_CHANGER = 0x102,
	IMAPI_FEATURE_PAGE_TYPE_CD_ANALOG_PLAY = 0x103,
	IMAPI_FEATURE_PAGE_TYPE_MICROCODE_UPDATE = 0x104,
	IMAPI_FEATURE_PAGE_TYPE_TIMEOUT = 0x105,
	IMAPI_FEATURE_PAGE_TYPE_DVD_CSS = 0x106,
	IMAPI_FEATURE_PAGE_TYPE_REAL_TIME_STREAMING = 0x107,
	IMAPI_FEATURE_PAGE_TYPE_LOGICAL_UNIT_SERIAL_NUMBER = 0x108,
	IMAPI_FEATURE_PAGE_TYPE_MEDIA_SERIAL_NUMBER = 0x109,
	IMAPI_FEATURE_PAGE_TYPE_DISC_CONTROL_BLOCKS = 0x10a,
	IMAPI_FEATURE_PAGE_TYPE_DVD_CPRM = 0x10b,
	IMAPI_FEATURE_PAGE_TYPE_FIRMWARE_INFORMATION = 0x10c,
	IMAPI_FEATURE_PAGE_TYPE_AACS = 0x10d,
	IMAPI_FEATURE_PAGE_TYPE_VCPS = 0x110
} IMAPI_FEATURE_PAGE_TYPE;
typedef enum _IMAPI_FEATURE_PAGE_TYPE *PIMAPI_FEATURE_PAGE_TYPE;
typedef enum _IMAPI_PROFILE_TYPE
{
	IMAPI_PROFILE_TYPE_INVALID = 0,
	IMAPI_PROFILE_TYPE_NON_REMOVABLE_DISK = 0x1,
	IMAPI_PROFILE_TYPE_REMOVABLE_DISK = 0x2,
	IMAPI_PROFILE_TYPE_MO_ERASABLE = 0x3,
	IMAPI_PROFILE_TYPE_MO_WRITE_ONCE = 0x4,
	IMAPI_PROFILE_TYPE_AS_MO = 0x5,
	IMAPI_PROFILE_TYPE_CDROM = 0x8,
	IMAPI_PROFILE_TYPE_CD_RECORDABLE = 0x9,
	IMAPI_PROFILE_TYPE_CD_REWRITABLE = 0xa,
	IMAPI_PROFILE_TYPE_DVDROM = 0x10,
	IMAPI_PROFILE_TYPE_DVD_DASH_RECORDABLE = 0x11,
	IMAPI_PROFILE_TYPE_DVD_RAM = 0x12,
	IMAPI_PROFILE_TYPE_DVD_DASH_REWRITABLE = 0x13,
	IMAPI_PROFILE_TYPE_DVD_DASH_RW_SEQUENTIAL = 0x14,
	IMAPI_PROFILE_TYPE_DVD_DASH_R_DUAL_SEQUENTIAL = 0x15,
	IMAPI_PROFILE_TYPE_DVD_DASH_R_DUAL_LAYER_JUMP = 0x16,
	IMAPI_PROFILE_TYPE_DVD_PLUS_RW = 0x1a,
	IMAPI_PROFILE_TYPE_DVD_PLUS_R = 0x1b,
	IMAPI_PROFILE_TYPE_DDCDROM = 0x20,
	IMAPI_PROFILE_TYPE_DDCD_RECORDABLE = 0x21,
	IMAPI_PROFILE_TYPE_DDCD_REWRITABLE = 0x22,
	IMAPI_PROFILE_TYPE_DVD_PLUS_RW_DUAL = 0x2a,
	IMAPI_PROFILE_TYPE_DVD_PLUS_R_DUAL = 0x2b,
	IMAPI_PROFILE_TYPE_BD_ROM = 0x40,
	IMAPI_PROFILE_TYPE_BD_R_SEQUENTIAL = 0x41,
	IMAPI_PROFILE_TYPE_BD_R_RANDOM_RECORDING = 0x42,
	IMAPI_PROFILE_TYPE_BD_REWRITABLE = 0x43,
	IMAPI_PROFILE_TYPE_HD_DVD_ROM = 0x50,
	IMAPI_PROFILE_TYPE_HD_DVD_RECORDABLE = 0x51,
	IMAPI_PROFILE_TYPE_HD_DVD_RAM = 0x52,
	IMAPI_PROFILE_TYPE_NON_STANDARD = 0xffff
} IMAPI_PROFILE_TYPE;
typedef enum _IMAPI_PROFILE_TYPE *PIMAPI_PROFILE_TYPE;
typedef enum _IMAPI_FORMAT2_DATA_WRITE_ACTION
{
	IMAPI_FORMAT2_DATA_WRITE_ACTION_VALIDATING_MEDIA = 0,
	IMAPI_FORMAT2_DATA_WRITE_ACTION_FORMATTING_MEDIA = 0x1,
	IMAPI_FORMAT2_DATA_WRITE_ACTION_INITIALIZING_HARDWARE = 0x2,
	IMAPI_FORMAT2_DATA_WRITE_ACTION_CALIBRATING_POWER = 0x3,
	IMAPI_FORMAT2_DATA_WRITE_ACTION_WRITING_DATA = 0x4,
	IMAPI_FORMAT2_DATA_WRITE_ACTION_FINALIZATION = 0x5,
	IMAPI_FORMAT2_DATA_WRITE_ACTION_COMPLETED = 0x6,
	IMAPI_FORMAT2_DATA_WRITE_ACTION_VERIFYING = 0x7
} IMAPI_FORMAT2_DATA_WRITE_ACTION;
typedef enum _IMAPI_FORMAT2_DATA_WRITE_ACTION *PIMAPI_FORMAT2_DATA_WRITE_ACTION;
typedef enum _IMAPI_FORMAT2_DATA_MEDIA_STATE
{
	IMAPI_FORMAT2_DATA_MEDIA_STATE_UNKNOWN = 0,
	IMAPI_FORMAT2_DATA_MEDIA_STATE_INFORMATIONAL_MASK = 0xf,
	IMAPI_FORMAT2_DATA_MEDIA_STATE_UNSUPPORTED_MASK = 0xfc00,
	IMAPI_FORMAT2_DATA_MEDIA_STATE_OVERWRITE_ONLY = 0x1,
	IMAPI_FORMAT2_DATA_MEDIA_STATE_RANDOMLY_WRITABLE = 0x1,
	IMAPI_FORMAT2_DATA_MEDIA_STATE_BLANK = 0x2,
	IMAPI_FORMAT2_DATA_MEDIA_STATE_APPENDABLE = 0x4,
	IMAPI_FORMAT2_DATA_MEDIA_STATE_FINAL_SESSION = 0x8,
	IMAPI_FORMAT2_DATA_MEDIA_STATE_DAMAGED = 0x400,
	IMAPI_FORMAT2_DATA_MEDIA_STATE_ERASE_REQUIRED = 0x800,
	IMAPI_FORMAT2_DATA_MEDIA_STATE_NON_EMPTY_SESSION = 0x1000,
	IMAPI_FORMAT2_DATA_MEDIA_STATE_WRITE_PROTECTED = 0x2000,
	IMAPI_FORMAT2_DATA_MEDIA_STATE_FINALIZED = 0x4000,
	IMAPI_FORMAT2_DATA_MEDIA_STATE_UNSUPPORTED_MEDIA = 0x8000
} IMAPI_FORMAT2_DATA_MEDIA_STATE;
typedef enum _IMAPI_FORMAT2_DATA_MEDIA_STATE *PIMAPI_FORMAT2_DATA_MEDIA_STATE;
typedef enum _IMAPI_FORMAT2_TAO_WRITE_ACTION
{
	IMAPI_FORMAT2_TAO_WRITE_ACTION_UNKNOWN = 0,
	IMAPI_FORMAT2_TAO_WRITE_ACTION_PREPARING = 0x1,
	IMAPI_FORMAT2_TAO_WRITE_ACTION_WRITING = 0x2,
	IMAPI_FORMAT2_TAO_WRITE_ACTION_FINISHING = 0x3,
	IMAPI_FORMAT2_TAO_WRITE_ACTION_VERIFYING = 0x4
} IMAPI_FORMAT2_TAO_WRITE_ACTION;
typedef enum _IMAPI_FORMAT2_TAO_WRITE_ACTION *PIMAPI_FORMAT2_TAO_WRITE_ACTION;
typedef enum _IMAPI_FORMAT2_RAW_CD_DATA_SECTOR_TYPE
{
	IMAPI_FORMAT2_RAW_CD_SUBCODE_PQ_ONLY = 0x1,
	IMAPI_FORMAT2_RAW_CD_SUBCODE_IS_COOKED = 0x2,
	IMAPI_FORMAT2_RAW_CD_SUBCODE_IS_RAW = 0x3
} IMAPI_FORMAT2_RAW_CD_DATA_SECTOR_TYPE;
typedef enum _IMAPI_FORMAT2_RAW_CD_DATA_SECTOR_TYPE *PIMAPI_FORMAT2_RAW_CD_DATA_SECTOR_TYPE;
typedef enum _IMAPI_FORMAT2_RAW_CD_WRITE_ACTION
{
	IMAPI_FORMAT2_RAW_CD_WRITE_ACTION_UNKNOWN = 0,
	IMAPI_FORMAT2_RAW_CD_WRITE_ACTION_PREPARING = 0x1,
	IMAPI_FORMAT2_RAW_CD_WRITE_ACTION_WRITING = 0x2,
	IMAPI_FORMAT2_RAW_CD_WRITE_ACTION_FINISHING = 0x3
} IMAPI_FORMAT2_RAW_CD_WRITE_ACTION;
typedef enum _IMAPI_FORMAT2_RAW_CD_WRITE_ACTION *PIMAPI_FORMAT2_RAW_CD_WRITE_ACTION;
typedef enum _IMAPI_CD_SECTOR_TYPE
{
	IMAPI_CD_SECTOR_AUDIO = 0,
	IMAPI_CD_SECTOR_MODE_ZERO = 0x1,
	IMAPI_CD_SECTOR_MODE1 = 0x2,
	IMAPI_CD_SECTOR_MODE2FORM0 = 0x3,
	IMAPI_CD_SECTOR_MODE2FORM1 = 0x4,
	IMAPI_CD_SECTOR_MODE2FORM2 = 0x5,
	IMAPI_CD_SECTOR_MODE1RAW = 0x6,
	IMAPI_CD_SECTOR_MODE2FORM0RAW = 0x7,
	IMAPI_CD_SECTOR_MODE2FORM1RAW = 0x8,
	IMAPI_CD_SECTOR_MODE2FORM2RAW = 0x9
} IMAPI_CD_SECTOR_TYPE;
typedef enum _IMAPI_CD_SECTOR_TYPE *PIMAPI_CD_SECTOR_TYPE;
typedef enum _IMAPI_CD_TRACK_DIGITAL_COPY_SETTING
{
	IMAPI_CD_TRACK_DIGITAL_COPY_PERMITTED = 0,
	IMAPI_CD_TRACK_DIGITAL_COPY_PROHIBITED = 0x1,
	IMAPI_CD_TRACK_DIGITAL_COPY_SCMS = 0x2
} IMAPI_CD_TRACK_DIGITAL_COPY_SETTING;
typedef enum _IMAPI_CD_TRACK_DIGITAL_COPY_SETTING *PIMAPI_CD_TRACK_DIGITAL_COPY_SETTING;
typedef enum _IMAPI_BURN_VERIFICATION_LEVEL
{
	IMAPI_BURN_VERIFICATION_NONE = 0,
	IMAPI_BURN_VERIFICATION_QUICK = 1,
	IMAPI_BURN_VERIFICATION_FULL = 2
} IMAPI_BURN_VERIFICATION_LEVEL;
typedef enum _IMAPI_BURN_VERIFICATION_LEVEL *PIMAPI_BURN_VERIFICATION_LEVEL;
extern RPC_IF_HANDLE __MIDL_itf_imapi2_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_imapi2_0000_0000_v0_0_s_ifspec;
#ifndef __IDiscMaster2_INTERFACE_DEFINED__
#define __IDiscMaster2_INTERFACE_DEFINED__
extern const IID IID_IDiscMaster2;
typedef struct IDiscMaster2Vtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IDiscMaster2 * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IDiscMaster2 * This);
	ULONG(STDMETHODCALLTYPE * Release) (IDiscMaster2 * This);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfoCount) (IDiscMaster2 * This, UINT * pctinfo);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfo) (IDiscMaster2 * This, UINT iTInfo, LCID lcid, ITypeInfo ** ppTInfo);
	HRESULT(STDMETHODCALLTYPE * GetIDsOfNames) (IDiscMaster2 * This, REFIID riid, LPOLESTR * rgszNames, UINT cNames, LCID lcid, DISPID * rgDispId);
	HRESULT(STDMETHODCALLTYPE * Invoke) (IDiscMaster2 * This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS * pDispParams, VARIANT * pVarResult, EXCEPINFO * pExcepInfo, UINT * puArgErr);
	HRESULT(STDMETHODCALLTYPE * get__NewEnum) (IDiscMaster2 * This, IEnumVARIANT ** ppunk);
	HRESULT(STDMETHODCALLTYPE * get_Item) (IDiscMaster2 * This, LONG index, BSTR * value);
	HRESULT(STDMETHODCALLTYPE * get_Count) (IDiscMaster2 * This, LONG * value);
	HRESULT(STDMETHODCALLTYPE * get_IsSupportedEnvironment) (IDiscMaster2 * This, VARIANT_BOOL * value);
	END_INTERFACE
}  IDiscMaster2Vtbl;
interface IDiscMaster2
{
	CONST_VTBL struct IDiscMaster2Vtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IDiscMaster2_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IDiscMaster2_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define IDiscMaster2_Release(This)( (This)->lpVtbl -> Release(This) )
#define IDiscMaster2_GetTypeInfoCount(This,pctinfo)( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define IDiscMaster2_GetTypeInfo(This,iTInfo,lcid,ppTInfo)( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define IDiscMaster2_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define IDiscMaster2_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define IDiscMaster2_get__NewEnum(This,ppunk)( (This)->lpVtbl -> get__NewEnum(This,ppunk) )
#define IDiscMaster2_get_Item(This,index,value)( (This)->lpVtbl -> get_Item(This,index,value) )
#define IDiscMaster2_get_Count(This,value)( (This)->lpVtbl -> get_Count(This,value) )
#define IDiscMaster2_get_IsSupportedEnvironment(This,value)( (This)->lpVtbl -> get_IsSupportedEnvironment(This,value) )
#endif
#endif
#define DISPID_DDISCMASTER2EVENTS_DEVICEADDED   0x100
#define DISPID_DDISCMASTER2EVENTS_DEVICEREMOVED 0x101
extern RPC_IF_HANDLE __MIDL_itf_imapi2_0000_0001_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_imapi2_0000_0001_v0_0_s_ifspec;
#ifndef __DDiscMaster2Events_INTERFACE_DEFINED__
#define __DDiscMaster2Events_INTERFACE_DEFINED__
extern const IID IID_DDiscMaster2Events;
typedef struct DDiscMaster2EventsVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (DDiscMaster2Events * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (DDiscMaster2Events * This);
	ULONG(STDMETHODCALLTYPE * Release) (DDiscMaster2Events * This);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfoCount) (DDiscMaster2Events * This, UINT * pctinfo);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfo) (DDiscMaster2Events * This, UINT iTInfo, LCID lcid, ITypeInfo ** ppTInfo);
	HRESULT(STDMETHODCALLTYPE * GetIDsOfNames) (DDiscMaster2Events * This, REFIID riid, LPOLESTR * rgszNames, UINT cNames, LCID lcid, DISPID * rgDispId);
	HRESULT(STDMETHODCALLTYPE * Invoke) (DDiscMaster2Events * This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS * pDispParams, VARIANT * pVarResult, EXCEPINFO * pExcepInfo, UINT * puArgErr);
	HRESULT(STDMETHODCALLTYPE * NotifyDeviceAdded) (DDiscMaster2Events * This, IDispatch * object, BSTR uniqueId);
	HRESULT(STDMETHODCALLTYPE * NotifyDeviceRemoved) (DDiscMaster2Events * This, IDispatch * object, BSTR uniqueId);
	END_INTERFACE
}  DDiscMaster2EventsVtbl;
interface DDiscMaster2Events
{
	CONST_VTBL struct DDiscMaster2EventsVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define DDiscMaster2Events_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define DDiscMaster2Events_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define DDiscMaster2Events_Release(This)( (This)->lpVtbl -> Release(This) )
#define DDiscMaster2Events_GetTypeInfoCount(This,pctinfo)( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define DDiscMaster2Events_GetTypeInfo(This,iTInfo,lcid,ppTInfo)( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define DDiscMaster2Events_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define DDiscMaster2Events_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define DDiscMaster2Events_NotifyDeviceAdded(This,object,uniqueId)( (This)->lpVtbl -> NotifyDeviceAdded(This,object,uniqueId) )
#define DDiscMaster2Events_NotifyDeviceRemoved(This,object,uniqueId)( (This)->lpVtbl -> NotifyDeviceRemoved(This,object,uniqueId) )
#endif
#endif
typedef ULONG ULONG_IMAPI2_DVD_STRUCTURE;
typedef ULONG ULONG_IMAPI2_ADAPTER_DESCRIPTOR;
typedef ULONG ULONG_IMAPI2_DEVICE_DESCRIPTOR;
typedef ULONG ULONG_IMAPI2_DISC_INFORMATION;
typedef ULONG ULONG_IMAPI2_TRACK_INFORMATION;
typedef ULONG ULONG_IMAPI2_FEATURE_PAGE;
typedef ULONG ULONG_IMAPI2_MODE_PAGE;
typedef ULONG ULONG_IMAPI2_ALL_FEATURE_PAGES;
typedef ULONG ULONG_IMAPI2_ALL_PROFILES;
typedef ULONG ULONG_IMAPI2_ALL_MODE_PAGES;
typedef ULONG ULONG_IMAPI2_NONZERO;
typedef ULONG ULONG_IMAPI2_NOT_NEGATIVE;
extern RPC_IF_HANDLE __MIDL_itf_imapi2_0000_0002_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_imapi2_0000_0002_v0_0_s_ifspec;
#ifndef __IDiscRecorder2Ex_INTERFACE_DEFINED__
#define __IDiscRecorder2Ex_INTERFACE_DEFINED__
extern const IID IID_IDiscRecorder2Ex;
typedef struct IDiscRecorder2ExVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IDiscRecorder2Ex * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IDiscRecorder2Ex * This);
	ULONG(STDMETHODCALLTYPE * Release) (IDiscRecorder2Ex * This);
	HRESULT(STDMETHODCALLTYPE * SendCommandNoData) (IDiscRecorder2Ex * This, BYTE * Cdb, ULONG CdbSize, BYTE SenseBuffer[18], ULONG Timeout);
	HRESULT(STDMETHODCALLTYPE * SendCommandSendDataToDevice) (IDiscRecorder2Ex * This, BYTE * Cdb, ULONG CdbSize, BYTE SenseBuffer[18], ULONG Timeout, BYTE * Buffer, ULONG_IMAPI2_NONZERO BufferSize);
	HRESULT(STDMETHODCALLTYPE * SendCommandGetDataFromDevice) (IDiscRecorder2Ex * This, BYTE * Cdb, ULONG CdbSize, BYTE SenseBuffer[18], ULONG Timeout, BYTE * Buffer, ULONG_IMAPI2_NONZERO BufferSize, ULONG_IMAPI2_NOT_NEGATIVE * BufferFetched);
	HRESULT(STDMETHODCALLTYPE * ReadDvdStructure) (IDiscRecorder2Ex * This, ULONG format, ULONG address, ULONG layer, ULONG agid, BYTE ** data, ULONG_IMAPI2_DVD_STRUCTURE * count);
	HRESULT(STDMETHODCALLTYPE * SendDvdStructure) (IDiscRecorder2Ex * This, ULONG format, BYTE * data, ULONG_IMAPI2_DVD_STRUCTURE count);
	HRESULT(STDMETHODCALLTYPE * GetAdapterDescriptor) (IDiscRecorder2Ex * This, BYTE ** data, ULONG_IMAPI2_ADAPTER_DESCRIPTOR * byteSize);
	HRESULT(STDMETHODCALLTYPE * GetDeviceDescriptor) (IDiscRecorder2Ex * This, BYTE ** data, ULONG_IMAPI2_DEVICE_DESCRIPTOR * byteSize);
	HRESULT(STDMETHODCALLTYPE * GetDiscInformation) (IDiscRecorder2Ex * This, BYTE ** discInformation, ULONG_IMAPI2_DISC_INFORMATION * byteSize);
	HRESULT(STDMETHODCALLTYPE * GetTrackInformation) (IDiscRecorder2Ex * This, ULONG address, IMAPI_READ_TRACK_ADDRESS_TYPE addressType, BYTE ** trackInformation, ULONG_IMAPI2_TRACK_INFORMATION * byteSize);
	HRESULT(STDMETHODCALLTYPE * GetFeaturePage) (IDiscRecorder2Ex * This, IMAPI_FEATURE_PAGE_TYPE requestedFeature, BOOLEAN currentFeatureOnly, BYTE ** featureData, ULONG_IMAPI2_FEATURE_PAGE * byteSize);
	HRESULT(STDMETHODCALLTYPE * GetModePage) (IDiscRecorder2Ex * This, IMAPI_MODE_PAGE_TYPE requestedModePage, IMAPI_MODE_PAGE_REQUEST_TYPE requestType, BYTE ** modePageData, ULONG_IMAPI2_MODE_PAGE * byteSize);
	HRESULT(STDMETHODCALLTYPE * SetModePage) (IDiscRecorder2Ex * This, IMAPI_MODE_PAGE_REQUEST_TYPE requestType, BYTE * data, ULONG_IMAPI2_MODE_PAGE byteSize);
	HRESULT(STDMETHODCALLTYPE * GetSupportedFeaturePages) (IDiscRecorder2Ex * This, BOOLEAN currentFeatureOnly, IMAPI_FEATURE_PAGE_TYPE ** featureData, ULONG_IMAPI2_ALL_FEATURE_PAGES * byteSize);
	HRESULT(STDMETHODCALLTYPE * GetSupportedProfiles) (IDiscRecorder2Ex * This, BOOLEAN currentOnly, IMAPI_PROFILE_TYPE ** profileTypes, ULONG_IMAPI2_ALL_PROFILES * validProfiles);
	HRESULT(STDMETHODCALLTYPE * GetSupportedModePages) (IDiscRecorder2Ex * This, IMAPI_MODE_PAGE_REQUEST_TYPE requestType, IMAPI_MODE_PAGE_TYPE ** modePageTypes, ULONG_IMAPI2_ALL_MODE_PAGES * validPages);
	HRESULT(STDMETHODCALLTYPE * GetByteAlignmentMask) (IDiscRecorder2Ex * This, ULONG * value);
	HRESULT(STDMETHODCALLTYPE * GetMaximumNonPageAlignedTransferSize) (IDiscRecorder2Ex * This, ULONG * value);
	HRESULT(STDMETHODCALLTYPE * GetMaximumPageAlignedTransferSize) (IDiscRecorder2Ex * This, ULONG * value);
	END_INTERFACE
}  IDiscRecorder2ExVtbl;
interface IDiscRecorder2Ex
{
	CONST_VTBL struct IDiscRecorder2ExVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IDiscRecorder2Ex_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IDiscRecorder2Ex_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define IDiscRecorder2Ex_Release(This)( (This)->lpVtbl -> Release(This) )
#define IDiscRecorder2Ex_SendCommandNoData(This,Cdb,CdbSize,SenseBuffer,Timeout)( (This)->lpVtbl -> SendCommandNoData(This,Cdb,CdbSize,SenseBuffer,Timeout) )
#define IDiscRecorder2Ex_SendCommandSendDataToDevice(This,Cdb,CdbSize,SenseBuffer,Timeout,Buffer,BufferSize)( (This)->lpVtbl -> SendCommandSendDataToDevice(This,Cdb,CdbSize,SenseBuffer,Timeout,Buffer,BufferSize) )
#define IDiscRecorder2Ex_SendCommandGetDataFromDevice(This,Cdb,CdbSize,SenseBuffer,Timeout,Buffer,BufferSize,BufferFetched)( (This)->lpVtbl -> SendCommandGetDataFromDevice(This,Cdb,CdbSize,SenseBuffer,Timeout,Buffer,BufferSize,BufferFetched) )
#define IDiscRecorder2Ex_ReadDvdStructure(This,format,address,layer,agid,data,count)( (This)->lpVtbl -> ReadDvdStructure(This,format,address,layer,agid,data,count) )
#define IDiscRecorder2Ex_SendDvdStructure(This,format,data,count)( (This)->lpVtbl -> SendDvdStructure(This,format,data,count) )
#define IDiscRecorder2Ex_GetAdapterDescriptor(This,data,byteSize)( (This)->lpVtbl -> GetAdapterDescriptor(This,data,byteSize) )
#define IDiscRecorder2Ex_GetDeviceDescriptor(This,data,byteSize)( (This)->lpVtbl -> GetDeviceDescriptor(This,data,byteSize) )
#define IDiscRecorder2Ex_GetDiscInformation(This,discInformation,byteSize)( (This)->lpVtbl -> GetDiscInformation(This,discInformation,byteSize) )
#define IDiscRecorder2Ex_GetTrackInformation(This,address,addressType,trackInformation,byteSize)( (This)->lpVtbl -> GetTrackInformation(This,address,addressType,trackInformation,byteSize) )
#define IDiscRecorder2Ex_GetFeaturePage(This,requestedFeature,currentFeatureOnly,featureData,byteSize)( (This)->lpVtbl -> GetFeaturePage(This,requestedFeature,currentFeatureOnly,featureData,byteSize) )
#define IDiscRecorder2Ex_GetModePage(This,requestedModePage,requestType,modePageData,byteSize)( (This)->lpVtbl -> GetModePage(This,requestedModePage,requestType,modePageData,byteSize) )
#define IDiscRecorder2Ex_SetModePage(This,requestType,data,byteSize)( (This)->lpVtbl -> SetModePage(This,requestType,data,byteSize) )
#define IDiscRecorder2Ex_GetSupportedFeaturePages(This,currentFeatureOnly,featureData,byteSize)( (This)->lpVtbl -> GetSupportedFeaturePages(This,currentFeatureOnly,featureData,byteSize) )
#define IDiscRecorder2Ex_GetSupportedProfiles(This,currentOnly,profileTypes,validProfiles)( (This)->lpVtbl -> GetSupportedProfiles(This,currentOnly,profileTypes,validProfiles) )
#define IDiscRecorder2Ex_GetSupportedModePages(This,requestType,modePageTypes,validPages)( (This)->lpVtbl -> GetSupportedModePages(This,requestType,modePageTypes,validPages) )
#define IDiscRecorder2Ex_GetByteAlignmentMask(This,value)( (This)->lpVtbl -> GetByteAlignmentMask(This,value) )
#define IDiscRecorder2Ex_GetMaximumNonPageAlignedTransferSize(This,value)( (This)->lpVtbl -> GetMaximumNonPageAlignedTransferSize(This,value) )
#define IDiscRecorder2Ex_GetMaximumPageAlignedTransferSize(This,value)( (This)->lpVtbl -> GetMaximumPageAlignedTransferSize(This,value) )
#endif
#endif
#define DISPID_IDISCRECORDER2_EJECTMEDIA             0x100
#define DISPID_IDISCRECORDER2_CLOSETRAY              0x101
#define DISPID_IDISCRECORDER2_ACQUIREEXCLUSIVEACCESS 0x102
#define DISPID_IDISCRECORDER2_RELEASEEXCLUSIVEACCESS 0x103
#define DISPID_IDISCRECORDER2_DISABLEMCN             0x104
#define DISPID_IDISCRECORDER2_ENABLEMCN              0x105
#define DISPID_IDISCRECORDER2_INITIALIZEDISCRECORDER 0x106
#define DISPID_IDISCRECORDER2_ACTIVEDISCRECORDER     DISPID_VALUE
#define DISPID_IDISCRECORDER2_VENDORID               0x201
#define DISPID_IDISCRECORDER2_PRODUCTID              0x202
#define DISPID_IDISCRECORDER2_PRODUCTREVISION        0x203
#define DISPID_IDISCRECORDER2_VOLUMENAME             0x204
#define DISPID_IDISCRECORDER2_VOLUMEPATHNAMES        0x205
#define DISPID_IDISCRECORDER2_DEVICECANLOADMEDIA     0x206
#define DISPID_IDISCRECORDER2_LEGACYDEVICENUMBER     0x207
#define DISPID_IDISCRECORDER2_SUPPORTEDFEATUREPAGES  0x208
#define DISPID_IDISCRECORDER2_CURRENTFEATUREPAGES    0x209
#define DISPID_IDISCRECORDER2_SUPPORTEDPROFILES      0x20A
#define DISPID_IDISCRECORDER2_CURRENTPROFILES        0x20B
#define DISPID_IDISCRECORDER2_SUPPORTEDMODEPAGES     0x20C
#define DISPID_IDISCRECORDER2_EXCLUSIVEACCESSOWNER   0x20D
extern RPC_IF_HANDLE __MIDL_itf_imapi2_0000_0003_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_imapi2_0000_0003_v0_0_s_ifspec;
#ifndef __IDiscRecorder2_INTERFACE_DEFINED__
#define __IDiscRecorder2_INTERFACE_DEFINED__
extern const IID IID_IDiscRecorder2;
typedef struct IDiscRecorder2Vtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IDiscRecorder2 * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IDiscRecorder2 * This);
	ULONG(STDMETHODCALLTYPE * Release) (IDiscRecorder2 * This);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfoCount) (IDiscRecorder2 * This, UINT * pctinfo);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfo) (IDiscRecorder2 * This, UINT iTInfo, LCID lcid, ITypeInfo ** ppTInfo);
	HRESULT(STDMETHODCALLTYPE * GetIDsOfNames) (IDiscRecorder2 * This, REFIID riid, LPOLESTR * rgszNames, UINT cNames, LCID lcid, DISPID * rgDispId);
	HRESULT(STDMETHODCALLTYPE * Invoke) (IDiscRecorder2 * This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS * pDispParams, VARIANT * pVarResult, EXCEPINFO * pExcepInfo, UINT * puArgErr);
	HRESULT(STDMETHODCALLTYPE * EjectMedia) (IDiscRecorder2 * This);
	HRESULT(STDMETHODCALLTYPE * CloseTray) (IDiscRecorder2 * This);
	HRESULT(STDMETHODCALLTYPE * AcquireExclusiveAccess) (IDiscRecorder2 * This, VARIANT_BOOL force, BSTR __MIDL__IDiscRecorder20000);
	HRESULT(STDMETHODCALLTYPE * ReleaseExclusiveAccess) (IDiscRecorder2 * This);
	HRESULT(STDMETHODCALLTYPE * DisableMcn) (IDiscRecorder2 * This);
	HRESULT(STDMETHODCALLTYPE * EnableMcn) (IDiscRecorder2 * This);
	HRESULT(STDMETHODCALLTYPE * InitializeDiscRecorder) (IDiscRecorder2 * This, BSTR recorderUniqueId);
	HRESULT(STDMETHODCALLTYPE * get_ActiveDiscRecorder) (IDiscRecorder2 * This, BSTR * value);
	HRESULT(STDMETHODCALLTYPE * get_VendorId) (IDiscRecorder2 * This, BSTR * value);
	HRESULT(STDMETHODCALLTYPE * get_ProductId) (IDiscRecorder2 * This, BSTR * value);
	HRESULT(STDMETHODCALLTYPE * get_ProductRevision) (IDiscRecorder2 * This, BSTR * value);
	HRESULT(STDMETHODCALLTYPE * get_VolumeName) (IDiscRecorder2 * This, BSTR * value);
	HRESULT(STDMETHODCALLTYPE * get_VolumePathNames) (IDiscRecorder2 * This, SAFEARRAY * *value);
	HRESULT(STDMETHODCALLTYPE * get_DeviceCanLoadMedia) (IDiscRecorder2 * This, VARIANT_BOOL * value);
	HRESULT(STDMETHODCALLTYPE * get_LegacyDeviceNumber) (IDiscRecorder2 * This, LONG * legacyDeviceNumber);
	HRESULT(STDMETHODCALLTYPE * get_SupportedFeaturePages) (IDiscRecorder2 * This, SAFEARRAY * *value);
	HRESULT(STDMETHODCALLTYPE * get_CurrentFeaturePages) (IDiscRecorder2 * This, SAFEARRAY * *value);
	HRESULT(STDMETHODCALLTYPE * get_SupportedProfiles) (IDiscRecorder2 * This, SAFEARRAY * *value);
	HRESULT(STDMETHODCALLTYPE * get_CurrentProfiles) (IDiscRecorder2 * This, SAFEARRAY * *value);
	HRESULT(STDMETHODCALLTYPE * get_SupportedModePages) (IDiscRecorder2 * This, SAFEARRAY * *value);
	HRESULT(STDMETHODCALLTYPE * get_ExclusiveAccessOwner) (IDiscRecorder2 * This, BSTR * value);
	END_INTERFACE
}  IDiscRecorder2Vtbl;
interface IDiscRecorder2
{
	CONST_VTBL struct IDiscRecorder2Vtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IDiscRecorder2_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IDiscRecorder2_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define IDiscRecorder2_Release(This)( (This)->lpVtbl -> Release(This) )
#define IDiscRecorder2_GetTypeInfoCount(This,pctinfo)( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define IDiscRecorder2_GetTypeInfo(This,iTInfo,lcid,ppTInfo)( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define IDiscRecorder2_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define IDiscRecorder2_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define IDiscRecorder2_EjectMedia(This)( (This)->lpVtbl -> EjectMedia(This) )
#define IDiscRecorder2_CloseTray(This)( (This)->lpVtbl -> CloseTray(This) )
#define IDiscRecorder2_AcquireExclusiveAccess(This,force,__MIDL__IDiscRecorder20000)( (This)->lpVtbl -> AcquireExclusiveAccess(This,force,__MIDL__IDiscRecorder20000) )
#define IDiscRecorder2_ReleaseExclusiveAccess(This)( (This)->lpVtbl -> ReleaseExclusiveAccess(This) )
#define IDiscRecorder2_DisableMcn(This)( (This)->lpVtbl -> DisableMcn(This) )
#define IDiscRecorder2_EnableMcn(This)( (This)->lpVtbl -> EnableMcn(This) )
#define IDiscRecorder2_InitializeDiscRecorder(This,recorderUniqueId)( (This)->lpVtbl -> InitializeDiscRecorder(This,recorderUniqueId) )
#define IDiscRecorder2_get_ActiveDiscRecorder(This,value)( (This)->lpVtbl -> get_ActiveDiscRecorder(This,value) )
#define IDiscRecorder2_get_VendorId(This,value)( (This)->lpVtbl -> get_VendorId(This,value) )
#define IDiscRecorder2_get_ProductId(This,value)( (This)->lpVtbl -> get_ProductId(This,value) )
#define IDiscRecorder2_get_ProductRevision(This,value)( (This)->lpVtbl -> get_ProductRevision(This,value) )
#define IDiscRecorder2_get_VolumeName(This,value)( (This)->lpVtbl -> get_VolumeName(This,value) )
#define IDiscRecorder2_get_VolumePathNames(This,value)( (This)->lpVtbl -> get_VolumePathNames(This,value) )
#define IDiscRecorder2_get_DeviceCanLoadMedia(This,value)( (This)->lpVtbl -> get_DeviceCanLoadMedia(This,value) )
#define IDiscRecorder2_get_LegacyDeviceNumber(This,legacyDeviceNumber)( (This)->lpVtbl -> get_LegacyDeviceNumber(This,legacyDeviceNumber) )
#define IDiscRecorder2_get_SupportedFeaturePages(This,value)( (This)->lpVtbl -> get_SupportedFeaturePages(This,value) )
#define IDiscRecorder2_get_CurrentFeaturePages(This,value)( (This)->lpVtbl -> get_CurrentFeaturePages(This,value) )
#define IDiscRecorder2_get_SupportedProfiles(This,value)( (This)->lpVtbl -> get_SupportedProfiles(This,value) )
#define IDiscRecorder2_get_CurrentProfiles(This,value)( (This)->lpVtbl -> get_CurrentProfiles(This,value) )
#define IDiscRecorder2_get_SupportedModePages(This,value)( (This)->lpVtbl -> get_SupportedModePages(This,value) )
#define IDiscRecorder2_get_ExclusiveAccessOwner(This,value)( (This)->lpVtbl -> get_ExclusiveAccessOwner(This,value) )
#endif
#endif
#define DISPID_IWRITEENGINE2_WRITESECTION              0x200
#define DISPID_IWRITEENGINE2_CANCELWRITE               0x201
#define DISPID_IWRITEENGINE2_DISCRECORDER              0x100
#define DISPID_IWRITEENGINE2_USESTREAMINGWRITE12       0x101
#define DISPID_IWRITEENGINE2_STARTINGSECTORSPERSECOND  0x102
#define DISPID_IWRITEENGINE2_ENDINGSECTORSPERSECOND    0x103
#define DISPID_IWRITEENGINE2_BYTESPERSECTOR            0x104
#define DISPID_IWRITEENGINE2_WRITEINPROGRESS           0x105
extern RPC_IF_HANDLE __MIDL_itf_imapi2_0000_0004_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_imapi2_0000_0004_v0_0_s_ifspec;
#ifndef __IWriteEngine2_INTERFACE_DEFINED__
#define __IWriteEngine2_INTERFACE_DEFINED__
extern const IID IID_IWriteEngine2;
typedef struct IWriteEngine2Vtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IWriteEngine2 * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IWriteEngine2 * This);
	ULONG(STDMETHODCALLTYPE * Release) (IWriteEngine2 * This);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfoCount) (IWriteEngine2 * This, UINT * pctinfo);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfo) (IWriteEngine2 * This, UINT iTInfo, LCID lcid, ITypeInfo ** ppTInfo);
	HRESULT(STDMETHODCALLTYPE * GetIDsOfNames) (IWriteEngine2 * This, REFIID riid, LPOLESTR * rgszNames, UINT cNames, LCID lcid, DISPID * rgDispId);
	HRESULT(STDMETHODCALLTYPE * Invoke) (IWriteEngine2 * This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS * pDispParams, VARIANT * pVarResult, EXCEPINFO * pExcepInfo, UINT * puArgErr);
	HRESULT(STDMETHODCALLTYPE * WriteSection) (IWriteEngine2 * This, IStream * data, LONG startingBlockAddress, LONG numberOfBlocks);
	HRESULT(STDMETHODCALLTYPE * CancelWrite) (IWriteEngine2 * This);
	HRESULT(STDMETHODCALLTYPE * put_Recorder) (IWriteEngine2 * This, IDiscRecorder2Ex * value);
	HRESULT(STDMETHODCALLTYPE * get_Recorder) (IWriteEngine2 * This, IDiscRecorder2Ex ** value);
	HRESULT(STDMETHODCALLTYPE * put_UseStreamingWrite12) (IWriteEngine2 * This, VARIANT_BOOL value);
	HRESULT(STDMETHODCALLTYPE * get_UseStreamingWrite12) (IWriteEngine2 * This, VARIANT_BOOL * value);
	HRESULT(STDMETHODCALLTYPE * put_StartingSectorsPerSecond) (IWriteEngine2 * This, LONG value);
	HRESULT(STDMETHODCALLTYPE * get_StartingSectorsPerSecond) (IWriteEngine2 * This, LONG * value);
	HRESULT(STDMETHODCALLTYPE * put_EndingSectorsPerSecond) (IWriteEngine2 * This, LONG value);
	HRESULT(STDMETHODCALLTYPE * get_EndingSectorsPerSecond) (IWriteEngine2 * This, LONG * value);
	HRESULT(STDMETHODCALLTYPE * put_BytesPerSector) (IWriteEngine2 * This, LONG value);
	HRESULT(STDMETHODCALLTYPE * get_BytesPerSector) (IWriteEngine2 * This, LONG * value);
	HRESULT(STDMETHODCALLTYPE * get_WriteInProgress) (IWriteEngine2 * This, VARIANT_BOOL * value);
	END_INTERFACE
}  IWriteEngine2Vtbl;
interface IWriteEngine2
{
	CONST_VTBL struct IWriteEngine2Vtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IWriteEngine2_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IWriteEngine2_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define IWriteEngine2_Release(This)( (This)->lpVtbl -> Release(This) )
#define IWriteEngine2_GetTypeInfoCount(This,pctinfo)( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define IWriteEngine2_GetTypeInfo(This,iTInfo,lcid,ppTInfo)( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define IWriteEngine2_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define IWriteEngine2_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define IWriteEngine2_WriteSection(This,data,startingBlockAddress,numberOfBlocks)( (This)->lpVtbl -> WriteSection(This,data,startingBlockAddress,numberOfBlocks) )
#define IWriteEngine2_CancelWrite(This)( (This)->lpVtbl -> CancelWrite(This) )
#define IWriteEngine2_put_Recorder(This,value)( (This)->lpVtbl -> put_Recorder(This,value) )
#define IWriteEngine2_get_Recorder(This,value)( (This)->lpVtbl -> get_Recorder(This,value) )
#define IWriteEngine2_put_UseStreamingWrite12(This,value)( (This)->lpVtbl -> put_UseStreamingWrite12(This,value) )
#define IWriteEngine2_get_UseStreamingWrite12(This,value)( (This)->lpVtbl -> get_UseStreamingWrite12(This,value) )
#define IWriteEngine2_put_StartingSectorsPerSecond(This,value)( (This)->lpVtbl -> put_StartingSectorsPerSecond(This,value) )
#define IWriteEngine2_get_StartingSectorsPerSecond(This,value)( (This)->lpVtbl -> get_StartingSectorsPerSecond(This,value) )
#define IWriteEngine2_put_EndingSectorsPerSecond(This,value)( (This)->lpVtbl -> put_EndingSectorsPerSecond(This,value) )
#define IWriteEngine2_get_EndingSectorsPerSecond(This,value)( (This)->lpVtbl -> get_EndingSectorsPerSecond(This,value) )
#define IWriteEngine2_put_BytesPerSector(This,value)( (This)->lpVtbl -> put_BytesPerSector(This,value) )
#define IWriteEngine2_get_BytesPerSector(This,value)( (This)->lpVtbl -> get_BytesPerSector(This,value) )
#define IWriteEngine2_get_WriteInProgress(This,value)( (This)->lpVtbl -> get_WriteInProgress(This,value) )
#endif
#endif
#define DISPID_IWRITEENGINE2EVENTARGS_STARTLBA             0x100
#define DISPID_IWRITEENGINE2EVENTARGS_SECTORCOUNT          0x101
#define DISPID_IWRITEENGINE2EVENTARGS_LASTREADLBA          0x102
#define DISPID_IWRITEENGINE2EVENTARGS_LASTWRITTENLBA       0x103
#define DISPID_IWRITEENGINE2EVENTARGS_TOTALDEVICEBUFFER    0x104
#define DISPID_IWRITEENGINE2EVENTARGS_USEDDEVICEBUFFER     0x105
#define DISPID_IWRITEENGINE2EVENTARGS_TOTALSYSTEMBUFFER    0x106
#define DISPID_IWRITEENGINE2EVENTARGS_USEDSYSTEMBUFFER     0x107
#define DISPID_IWRITEENGINE2EVENTARGS_FREESYSTEMBUFFER     0x108
extern RPC_IF_HANDLE __MIDL_itf_imapi2_0000_0005_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_imapi2_0000_0005_v0_0_s_ifspec;
#ifndef __IWriteEngine2EventArgs_INTERFACE_DEFINED__
#define __IWriteEngine2EventArgs_INTERFACE_DEFINED__
extern const IID IID_IWriteEngine2EventArgs;
typedef struct IWriteEngine2EventArgsVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IWriteEngine2EventArgs * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IWriteEngine2EventArgs * This);
	ULONG(STDMETHODCALLTYPE * Release) (IWriteEngine2EventArgs * This);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfoCount) (IWriteEngine2EventArgs * This, UINT * pctinfo);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfo) (IWriteEngine2EventArgs * This, UINT iTInfo, LCID lcid, ITypeInfo ** ppTInfo);
	HRESULT(STDMETHODCALLTYPE * GetIDsOfNames) (IWriteEngine2EventArgs * This, REFIID riid, LPOLESTR * rgszNames, UINT cNames, LCID lcid, DISPID * rgDispId);
	HRESULT(STDMETHODCALLTYPE * Invoke) (IWriteEngine2EventArgs * This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS * pDispParams, VARIANT * pVarResult, EXCEPINFO * pExcepInfo, UINT * puArgErr);
	HRESULT(STDMETHODCALLTYPE * get_StartLba) (IWriteEngine2EventArgs * This, LONG * value);
	HRESULT(STDMETHODCALLTYPE * get_SectorCount) (IWriteEngine2EventArgs * This, LONG * value);
	HRESULT(STDMETHODCALLTYPE * get_LastReadLba) (IWriteEngine2EventArgs * This, LONG * value);
	HRESULT(STDMETHODCALLTYPE * get_LastWrittenLba) (IWriteEngine2EventArgs * This, LONG * value);
	HRESULT(STDMETHODCALLTYPE * get_TotalSystemBuffer) (IWriteEngine2EventArgs * This, LONG * value);
	HRESULT(STDMETHODCALLTYPE * get_UsedSystemBuffer) (IWriteEngine2EventArgs * This, LONG * value);
	HRESULT(STDMETHODCALLTYPE * get_FreeSystemBuffer) (IWriteEngine2EventArgs * This, LONG * value);
	END_INTERFACE
}  IWriteEngine2EventArgsVtbl;
interface IWriteEngine2EventArgs
{
	CONST_VTBL struct IWriteEngine2EventArgsVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IWriteEngine2EventArgs_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IWriteEngine2EventArgs_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define IWriteEngine2EventArgs_Release(This)( (This)->lpVtbl -> Release(This) )
#define IWriteEngine2EventArgs_GetTypeInfoCount(This,pctinfo)( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define IWriteEngine2EventArgs_GetTypeInfo(This,iTInfo,lcid,ppTInfo)( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define IWriteEngine2EventArgs_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define IWriteEngine2EventArgs_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define IWriteEngine2EventArgs_get_StartLba(This,value)( (This)->lpVtbl -> get_StartLba(This,value) )
#define IWriteEngine2EventArgs_get_SectorCount(This,value)( (This)->lpVtbl -> get_SectorCount(This,value) )
#define IWriteEngine2EventArgs_get_LastReadLba(This,value)( (This)->lpVtbl -> get_LastReadLba(This,value) )
#define IWriteEngine2EventArgs_get_LastWrittenLba(This,value)( (This)->lpVtbl -> get_LastWrittenLba(This,value) )
#define IWriteEngine2EventArgs_get_TotalSystemBuffer(This,value)( (This)->lpVtbl -> get_TotalSystemBuffer(This,value) )
#define IWriteEngine2EventArgs_get_UsedSystemBuffer(This,value)( (This)->lpVtbl -> get_UsedSystemBuffer(This,value) )
#define IWriteEngine2EventArgs_get_FreeSystemBuffer(This,value)( (This)->lpVtbl -> get_FreeSystemBuffer(This,value) )
#endif
#endif
#define DISPID_DWRITEENGINE2EVENTS_UPDATE 0x100
extern RPC_IF_HANDLE __MIDL_itf_imapi2_0000_0006_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_imapi2_0000_0006_v0_0_s_ifspec;
#ifndef __DWriteEngine2Events_INTERFACE_DEFINED__
#define __DWriteEngine2Events_INTERFACE_DEFINED__
extern const IID IID_DWriteEngine2Events;
typedef struct DWriteEngine2EventsVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (DWriteEngine2Events * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (DWriteEngine2Events * This);
	ULONG(STDMETHODCALLTYPE * Release) (DWriteEngine2Events * This);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfoCount) (DWriteEngine2Events * This, UINT * pctinfo);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfo) (DWriteEngine2Events * This, UINT iTInfo, LCID lcid, ITypeInfo ** ppTInfo);
	HRESULT(STDMETHODCALLTYPE * GetIDsOfNames) (DWriteEngine2Events * This, REFIID riid, LPOLESTR * rgszNames, UINT cNames, LCID lcid, DISPID * rgDispId);
	HRESULT(STDMETHODCALLTYPE * Invoke) (DWriteEngine2Events * This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS * pDispParams, VARIANT * pVarResult, EXCEPINFO * pExcepInfo, UINT * puArgErr);
	HRESULT(STDMETHODCALLTYPE * Update) (DWriteEngine2Events * This, IDispatch * object, IDispatch * progress);
	END_INTERFACE
}  DWriteEngine2EventsVtbl;
interface DWriteEngine2Events
{
	CONST_VTBL struct DWriteEngine2EventsVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define DWriteEngine2Events_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define DWriteEngine2Events_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define DWriteEngine2Events_Release(This)( (This)->lpVtbl -> Release(This) )
#define DWriteEngine2Events_GetTypeInfoCount(This,pctinfo)( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define DWriteEngine2Events_GetTypeInfo(This,iTInfo,lcid,ppTInfo)( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define DWriteEngine2Events_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define DWriteEngine2Events_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define DWriteEngine2Events_Update(This,object,progress)( (This)->lpVtbl -> Update(This,object,progress) )
#endif
#endif
#define DISPID_IDISCFORMAT2_RECORDERSUPPORTED        0x800
#define DISPID_IDISCFORMAT2_MEDIASUPPORTED           0x801
#define DISPID_IDISCFORMAT2_MEDIAPHYSICALLYBLANK     0x700
#define DISPID_IDISCFORMAT2_MEDIAHEURISTICALLYBLANK  0x701
#define DISPID_IDISCFORMAT2_SUPPORTEDMEDIATYPES      0x702
extern RPC_IF_HANDLE __MIDL_itf_imapi2_0000_0007_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_imapi2_0000_0007_v0_0_s_ifspec;
#ifndef __IDiscFormat2_INTERFACE_DEFINED__
#define __IDiscFormat2_INTERFACE_DEFINED__
extern const IID IID_IDiscFormat2;
typedef struct IDiscFormat2Vtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IDiscFormat2 * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IDiscFormat2 * This);
	ULONG(STDMETHODCALLTYPE * Release) (IDiscFormat2 * This);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfoCount) (IDiscFormat2 * This, UINT * pctinfo);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfo) (IDiscFormat2 * This, UINT iTInfo, LCID lcid, ITypeInfo ** ppTInfo);
	HRESULT(STDMETHODCALLTYPE * GetIDsOfNames) (IDiscFormat2 * This, REFIID riid, LPOLESTR * rgszNames, UINT cNames, LCID lcid, DISPID * rgDispId);
	HRESULT(STDMETHODCALLTYPE * Invoke) (IDiscFormat2 * This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS * pDispParams, VARIANT * pVarResult, EXCEPINFO * pExcepInfo, UINT * puArgErr);
	HRESULT(STDMETHODCALLTYPE * IsRecorderSupported) (IDiscFormat2 * This, IDiscRecorder2 * recorder, VARIANT_BOOL * value);
	HRESULT(STDMETHODCALLTYPE * IsCurrentMediaSupported) (IDiscFormat2 * This, IDiscRecorder2 * recorder, VARIANT_BOOL * value);
	HRESULT(STDMETHODCALLTYPE * get_MediaPhysicallyBlank) (IDiscFormat2 * This, VARIANT_BOOL * value);
	HRESULT(STDMETHODCALLTYPE * get_MediaHeuristicallyBlank) (IDiscFormat2 * This, VARIANT_BOOL * value);
	HRESULT(STDMETHODCALLTYPE * get_SupportedMediaTypes) (IDiscFormat2 * This, SAFEARRAY * *value);
	END_INTERFACE
}  IDiscFormat2Vtbl;
interface IDiscFormat2
{
	CONST_VTBL struct IDiscFormat2Vtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IDiscFormat2_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IDiscFormat2_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define IDiscFormat2_Release(This)( (This)->lpVtbl -> Release(This) )
#define IDiscFormat2_GetTypeInfoCount(This,pctinfo)( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define IDiscFormat2_GetTypeInfo(This,iTInfo,lcid,ppTInfo)( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define IDiscFormat2_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define IDiscFormat2_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define IDiscFormat2_IsRecorderSupported(This,recorder,value)( (This)->lpVtbl -> IsRecorderSupported(This,recorder,value) )
#define IDiscFormat2_IsCurrentMediaSupported(This,recorder,value)( (This)->lpVtbl -> IsCurrentMediaSupported(This,recorder,value) )
#define IDiscFormat2_get_MediaPhysicallyBlank(This,value)( (This)->lpVtbl -> get_MediaPhysicallyBlank(This,value) )
#define IDiscFormat2_get_MediaHeuristicallyBlank(This,value)( (This)->lpVtbl -> get_MediaHeuristicallyBlank(This,value) )
#define IDiscFormat2_get_SupportedMediaTypes(This,value)( (This)->lpVtbl -> get_SupportedMediaTypes(This,value) )
#endif
#endif
#define DISPID_IDISCFORMAT2ERASE_RECORDER            0x100
#define DISPID_IDISCFORMAT2ERASE_FULLERASE           0x101
#define DISPID_IDISCFORMAT2ERASE_MEDIATYPE           0x102
#define DISPID_IDISCFORMAT2ERASE_CLIENTNAME          0x103
#define DISPID_IDISCFORMAT2ERASE_ERASEMEDIA          0x201
extern RPC_IF_HANDLE __MIDL_itf_imapi2_0000_0008_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_imapi2_0000_0008_v0_0_s_ifspec;
#ifndef __IDiscFormat2Erase_INTERFACE_DEFINED__
#define __IDiscFormat2Erase_INTERFACE_DEFINED__
extern const IID IID_IDiscFormat2Erase;
typedef struct IDiscFormat2EraseVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IDiscFormat2Erase * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IDiscFormat2Erase * This);
	ULONG(STDMETHODCALLTYPE * Release) (IDiscFormat2Erase * This);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfoCount) (IDiscFormat2Erase * This, UINT * pctinfo);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfo) (IDiscFormat2Erase * This, UINT iTInfo, LCID lcid, ITypeInfo ** ppTInfo);
	HRESULT(STDMETHODCALLTYPE * GetIDsOfNames) (IDiscFormat2Erase * This, REFIID riid, LPOLESTR * rgszNames, UINT cNames, LCID lcid, DISPID * rgDispId);
	HRESULT(STDMETHODCALLTYPE * Invoke) (IDiscFormat2Erase * This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS * pDispParams, VARIANT * pVarResult, EXCEPINFO * pExcepInfo, UINT * puArgErr);
	HRESULT(STDMETHODCALLTYPE * IsRecorderSupported) (IDiscFormat2Erase * This, IDiscRecorder2 * recorder, VARIANT_BOOL * value);
	HRESULT(STDMETHODCALLTYPE * IsCurrentMediaSupported) (IDiscFormat2Erase * This, IDiscRecorder2 * recorder, VARIANT_BOOL * value);
	HRESULT(STDMETHODCALLTYPE * get_MediaPhysicallyBlank) (IDiscFormat2Erase * This, VARIANT_BOOL * value);
	HRESULT(STDMETHODCALLTYPE * get_MediaHeuristicallyBlank) (IDiscFormat2Erase * This, VARIANT_BOOL * value);
	HRESULT(STDMETHODCALLTYPE * get_SupportedMediaTypes) (IDiscFormat2Erase * This, SAFEARRAY * *value);
	HRESULT(STDMETHODCALLTYPE * put_Recorder) (IDiscFormat2Erase * This, IDiscRecorder2 * value);
	HRESULT(STDMETHODCALLTYPE * get_Recorder) (IDiscFormat2Erase * This, IDiscRecorder2 ** value);
	HRESULT(STDMETHODCALLTYPE * put_FullErase) (IDiscFormat2Erase * This, VARIANT_BOOL value);
	HRESULT(STDMETHODCALLTYPE * get_FullErase) (IDiscFormat2Erase * This, VARIANT_BOOL * value);
	HRESULT(STDMETHODCALLTYPE * get_CurrentPhysicalMediaType) (IDiscFormat2Erase * This, IMAPI_MEDIA_PHYSICAL_TYPE * value);
	HRESULT(STDMETHODCALLTYPE * put_ClientName) (IDiscFormat2Erase * This, BSTR value);
	HRESULT(STDMETHODCALLTYPE * get_ClientName) (IDiscFormat2Erase * This, BSTR * value);
	HRESULT(STDMETHODCALLTYPE * EraseMedia) (IDiscFormat2Erase * This);
	END_INTERFACE
}  IDiscFormat2EraseVtbl;
interface IDiscFormat2Erase
{
	CONST_VTBL struct IDiscFormat2EraseVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IDiscFormat2Erase_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IDiscFormat2Erase_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define IDiscFormat2Erase_Release(This)( (This)->lpVtbl -> Release(This) )
#define IDiscFormat2Erase_GetTypeInfoCount(This,pctinfo)( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define IDiscFormat2Erase_GetTypeInfo(This,iTInfo,lcid,ppTInfo)( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define IDiscFormat2Erase_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define IDiscFormat2Erase_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define IDiscFormat2Erase_IsRecorderSupported(This,recorder,value)( (This)->lpVtbl -> IsRecorderSupported(This,recorder,value) )
#define IDiscFormat2Erase_IsCurrentMediaSupported(This,recorder,value)( (This)->lpVtbl -> IsCurrentMediaSupported(This,recorder,value) )
#define IDiscFormat2Erase_get_MediaPhysicallyBlank(This,value)( (This)->lpVtbl -> get_MediaPhysicallyBlank(This,value) )
#define IDiscFormat2Erase_get_MediaHeuristicallyBlank(This,value)( (This)->lpVtbl -> get_MediaHeuristicallyBlank(This,value) )
#define IDiscFormat2Erase_get_SupportedMediaTypes(This,value)( (This)->lpVtbl -> get_SupportedMediaTypes(This,value) )
#define IDiscFormat2Erase_put_Recorder(This,value)( (This)->lpVtbl -> put_Recorder(This,value) )
#define IDiscFormat2Erase_get_Recorder(This,value)( (This)->lpVtbl -> get_Recorder(This,value) )
#define IDiscFormat2Erase_put_FullErase(This,value)( (This)->lpVtbl -> put_FullErase(This,value) )
#define IDiscFormat2Erase_get_FullErase(This,value)( (This)->lpVtbl -> get_FullErase(This,value) )
#define IDiscFormat2Erase_get_CurrentPhysicalMediaType(This,value)( (This)->lpVtbl -> get_CurrentPhysicalMediaType(This,value) )
#define IDiscFormat2Erase_put_ClientName(This,value)( (This)->lpVtbl -> put_ClientName(This,value) )
#define IDiscFormat2Erase_get_ClientName(This,value)( (This)->lpVtbl -> get_ClientName(This,value) )
#define IDiscFormat2Erase_EraseMedia(This)( (This)->lpVtbl -> EraseMedia(This) )
#endif
#endif
#define DISPID_IDISCFORMAT2ERASEEVENTS_UPDATE 0x200
extern RPC_IF_HANDLE __MIDL_itf_imapi2_0000_0009_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_imapi2_0000_0009_v0_0_s_ifspec;
#ifndef __DDiscFormat2EraseEvents_INTERFACE_DEFINED__
#define __DDiscFormat2EraseEvents_INTERFACE_DEFINED__
extern const IID IID_DDiscFormat2EraseEvents;
typedef struct DDiscFormat2EraseEventsVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (DDiscFormat2EraseEvents * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (DDiscFormat2EraseEvents * This);
	ULONG(STDMETHODCALLTYPE * Release) (DDiscFormat2EraseEvents * This);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfoCount) (DDiscFormat2EraseEvents * This, UINT * pctinfo);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfo) (DDiscFormat2EraseEvents * This, UINT iTInfo, LCID lcid, ITypeInfo ** ppTInfo);
	HRESULT(STDMETHODCALLTYPE * GetIDsOfNames) (DDiscFormat2EraseEvents * This, REFIID riid, LPOLESTR * rgszNames, UINT cNames, LCID lcid, DISPID * rgDispId);
	HRESULT(STDMETHODCALLTYPE * Invoke) (DDiscFormat2EraseEvents * This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS * pDispParams, VARIANT * pVarResult, EXCEPINFO * pExcepInfo, UINT * puArgErr);
	HRESULT(STDMETHODCALLTYPE * Update) (DDiscFormat2EraseEvents * This, IDispatch * object, LONG elapsedSeconds, LONG estimatedTotalSeconds);
	END_INTERFACE
}  DDiscFormat2EraseEventsVtbl;
interface DDiscFormat2EraseEvents
{
	CONST_VTBL struct DDiscFormat2EraseEventsVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define DDiscFormat2EraseEvents_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define DDiscFormat2EraseEvents_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define DDiscFormat2EraseEvents_Release(This)( (This)->lpVtbl -> Release(This) )
#define DDiscFormat2EraseEvents_GetTypeInfoCount(This,pctinfo)( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define DDiscFormat2EraseEvents_GetTypeInfo(This,iTInfo,lcid,ppTInfo)( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define DDiscFormat2EraseEvents_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define DDiscFormat2EraseEvents_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define DDiscFormat2EraseEvents_Update(This,object,elapsedSeconds,estimatedTotalSeconds)( (This)->lpVtbl -> Update(This,object,elapsedSeconds,estimatedTotalSeconds) )
#endif
#endif
#define DISPID_IDISCFORMAT2DATA_RECORDER                         0x100
#define DISPID_IDISCFORMAT2DATA_BUFFERUNDERRUNFREEDISABLED       0x101
#define DISPID_IDISCFORMAT2DATA_POSTGAPALREADYINIMAGE            0x104
#define DISPID_IDISCFORMAT2DATA_CURRENTMEDIASTATUS               0x106
#define DISPID_IDISCFORMAT2DATA_WRITEPROTECTSTATUS               0x107
#define DISPID_IDISCFORMAT2DATA_TOTALSECTORS                     0x108
#define DISPID_IDISCFORMAT2DATA_FREESECTORS                      0x109
#define DISPID_IDISCFORMAT2DATA_NEXTWRITABLEADDRESS              0x10A
#define DISPID_IDISCFORMAT2DATA_STARTSECTOROFPREVIOUSSESSION     0x10B
#define DISPID_IDISCFORMAT2DATA_LASTSECTOROFPREVIOUSSESSION      0x10C
#define DISPID_IDISCFORMAT2DATA_FORCEMEDIATOBECLOSED             0x10D
#define DISPID_IDISCFORMAT2DATA_DISABLEDVDCOMPATIBILITYMODE      0x10E
#define DISPID_IDISCFORMAT2DATA_CURRENTMEDIATYPE                 0x10F
#define DISPID_IDISCFORMAT2DATA_CLIENTNAME                       0x110
#define DISPID_IDISCFORMAT2DATA_REQUESTEDWRITESPEED              0x111
#define DISPID_IDISCFORMAT2DATA_REQUESTEDROTATIONTYPEISPURECAV   0x112
#define DISPID_IDISCFORMAT2DATA_CURRENTWRITESPEED                0x113
#define DISPID_IDISCFORMAT2DATA_CURRENTROTATIONTYPEISPURECAV     0x114
#define DISPID_IDISCFORMAT2DATA_SUPPORTEDWRITESPEEDS             0x115
#define DISPID_IDISCFORMAT2DATA_SUPPORTEDWRITESPEEDDESCRIPTORS   0x116
#define DISPID_IDISCFORMAT2DATA_FORCEOVERWRITE                   0x117
#define DISPID_IDISCFORMAT2DATA_MUTLISESSIONINTERFACES           0x118
#define DISPID_IDISCFORMAT2DATA_WRITE                            0x200
#define DISPID_IDISCFORMAT2DATA_CANCELWRITE                      0x201
#define DISPID_IDISCFORMAT2DATA_SETWRITESPEED                    0x202
extern RPC_IF_HANDLE __MIDL_itf_imapi2_0000_0010_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_imapi2_0000_0010_v0_0_s_ifspec;
#ifndef __IDiscFormat2Data_INTERFACE_DEFINED__
#define __IDiscFormat2Data_INTERFACE_DEFINED__
extern const IID IID_IDiscFormat2Data;
typedef struct IDiscFormat2DataVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IDiscFormat2Data * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IDiscFormat2Data * This);
	ULONG(STDMETHODCALLTYPE * Release) (IDiscFormat2Data * This);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfoCount) (IDiscFormat2Data * This, UINT * pctinfo);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfo) (IDiscFormat2Data * This, UINT iTInfo, LCID lcid, ITypeInfo ** ppTInfo);
	HRESULT(STDMETHODCALLTYPE * GetIDsOfNames) (IDiscFormat2Data * This, REFIID riid, LPOLESTR * rgszNames, UINT cNames, LCID lcid, DISPID * rgDispId);
	HRESULT(STDMETHODCALLTYPE * Invoke) (IDiscFormat2Data * This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS * pDispParams, VARIANT * pVarResult, EXCEPINFO * pExcepInfo, UINT * puArgErr);
	HRESULT(STDMETHODCALLTYPE * IsRecorderSupported) (IDiscFormat2Data * This, IDiscRecorder2 * recorder, VARIANT_BOOL * value);
	HRESULT(STDMETHODCALLTYPE * IsCurrentMediaSupported) (IDiscFormat2Data * This, IDiscRecorder2 * recorder, VARIANT_BOOL * value);
	HRESULT(STDMETHODCALLTYPE * get_MediaPhysicallyBlank) (IDiscFormat2Data * This, VARIANT_BOOL * value);
	HRESULT(STDMETHODCALLTYPE * get_MediaHeuristicallyBlank) (IDiscFormat2Data * This, VARIANT_BOOL * value);
	HRESULT(STDMETHODCALLTYPE * get_SupportedMediaTypes) (IDiscFormat2Data * This, SAFEARRAY * *value);
	HRESULT(STDMETHODCALLTYPE * put_Recorder) (IDiscFormat2Data * This, IDiscRecorder2 * value);
	HRESULT(STDMETHODCALLTYPE * get_Recorder) (IDiscFormat2Data * This, IDiscRecorder2 ** value);
	HRESULT(STDMETHODCALLTYPE * put_BufferUnderrunFreeDisabled) (IDiscFormat2Data * This, VARIANT_BOOL value);
	HRESULT(STDMETHODCALLTYPE * get_BufferUnderrunFreeDisabled) (IDiscFormat2Data * This, VARIANT_BOOL * value);
	HRESULT(STDMETHODCALLTYPE * put_PostgapAlreadyInImage) (IDiscFormat2Data * This, VARIANT_BOOL value);
	HRESULT(STDMETHODCALLTYPE * get_PostgapAlreadyInImage) (IDiscFormat2Data * This, VARIANT_BOOL * value);
	HRESULT(STDMETHODCALLTYPE * get_CurrentMediaStatus) (IDiscFormat2Data * This, IMAPI_FORMAT2_DATA_MEDIA_STATE * value);
	HRESULT(STDMETHODCALLTYPE * get_WriteProtectStatus) (IDiscFormat2Data * This, IMAPI_MEDIA_WRITE_PROTECT_STATE * value);
	HRESULT(STDMETHODCALLTYPE * get_TotalSectorsOnMedia) (IDiscFormat2Data * This, LONG * value);
	HRESULT(STDMETHODCALLTYPE * get_FreeSectorsOnMedia) (IDiscFormat2Data * This, LONG * value);
	HRESULT(STDMETHODCALLTYPE * get_NextWritableAddress) (IDiscFormat2Data * This, LONG * value);
	HRESULT(STDMETHODCALLTYPE * get_StartAddressOfPreviousSession) (IDiscFormat2Data * This, LONG * value);
	HRESULT(STDMETHODCALLTYPE * get_LastWrittenAddressOfPreviousSession) (IDiscFormat2Data * This, LONG * value);
	HRESULT(STDMETHODCALLTYPE * put_ForceMediaToBeClosed) (IDiscFormat2Data * This, VARIANT_BOOL value);
	HRESULT(STDMETHODCALLTYPE * get_ForceMediaToBeClosed) (IDiscFormat2Data * This, VARIANT_BOOL * value);
	HRESULT(STDMETHODCALLTYPE * put_DisableConsumerDvdCompatibilityMode) (IDiscFormat2Data * This, VARIANT_BOOL value);
	HRESULT(STDMETHODCALLTYPE * get_DisableConsumerDvdCompatibilityMode) (IDiscFormat2Data * This, VARIANT_BOOL * value);
	HRESULT(STDMETHODCALLTYPE * get_CurrentPhysicalMediaType) (IDiscFormat2Data * This, IMAPI_MEDIA_PHYSICAL_TYPE * value);
	HRESULT(STDMETHODCALLTYPE * put_ClientName) (IDiscFormat2Data * This, BSTR value);
	HRESULT(STDMETHODCALLTYPE * get_ClientName) (IDiscFormat2Data * This, BSTR * value);
	HRESULT(STDMETHODCALLTYPE * get_RequestedWriteSpeed) (IDiscFormat2Data * This, LONG * value);
	HRESULT(STDMETHODCALLTYPE * get_RequestedRotationTypeIsPureCAV) (IDiscFormat2Data * This, VARIANT_BOOL * value);
	HRESULT(STDMETHODCALLTYPE * get_CurrentWriteSpeed) (IDiscFormat2Data * This, LONG * value);
	HRESULT(STDMETHODCALLTYPE * get_CurrentRotationTypeIsPureCAV) (IDiscFormat2Data * This, VARIANT_BOOL * value);
	HRESULT(STDMETHODCALLTYPE * get_SupportedWriteSpeeds) (IDiscFormat2Data * This, SAFEARRAY * *supportedSpeeds);
	HRESULT(STDMETHODCALLTYPE * get_SupportedWriteSpeedDescriptors) (IDiscFormat2Data * This, SAFEARRAY * *supportedSpeedDescriptors);
	HRESULT(STDMETHODCALLTYPE * put_ForceOverwrite) (IDiscFormat2Data * This, VARIANT_BOOL value);
	HRESULT(STDMETHODCALLTYPE * get_ForceOverwrite) (IDiscFormat2Data * This, VARIANT_BOOL * value);
	HRESULT(STDMETHODCALLTYPE * get_MultisessionInterfaces) (IDiscFormat2Data * This, SAFEARRAY * *value);
	HRESULT(STDMETHODCALLTYPE * Write) (IDiscFormat2Data * This, IStream * data);
	HRESULT(STDMETHODCALLTYPE * CancelWrite) (IDiscFormat2Data * This);
	HRESULT(STDMETHODCALLTYPE * SetWriteSpeed) (IDiscFormat2Data * This, LONG RequestedSectorsPerSecond, VARIANT_BOOL RotationTypeIsPureCAV);
	END_INTERFACE
}  IDiscFormat2DataVtbl;
interface IDiscFormat2Data
{
	CONST_VTBL struct IDiscFormat2DataVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IDiscFormat2Data_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IDiscFormat2Data_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define IDiscFormat2Data_Release(This)( (This)->lpVtbl -> Release(This) )
#define IDiscFormat2Data_GetTypeInfoCount(This,pctinfo)( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define IDiscFormat2Data_GetTypeInfo(This,iTInfo,lcid,ppTInfo)( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define IDiscFormat2Data_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define IDiscFormat2Data_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define IDiscFormat2Data_IsRecorderSupported(This,recorder,value)( (This)->lpVtbl -> IsRecorderSupported(This,recorder,value) )
#define IDiscFormat2Data_IsCurrentMediaSupported(This,recorder,value)( (This)->lpVtbl -> IsCurrentMediaSupported(This,recorder,value) )
#define IDiscFormat2Data_get_MediaPhysicallyBlank(This,value)( (This)->lpVtbl -> get_MediaPhysicallyBlank(This,value) )
#define IDiscFormat2Data_get_MediaHeuristicallyBlank(This,value)( (This)->lpVtbl -> get_MediaHeuristicallyBlank(This,value) )
#define IDiscFormat2Data_get_SupportedMediaTypes(This,value)( (This)->lpVtbl -> get_SupportedMediaTypes(This,value) )
#define IDiscFormat2Data_put_Recorder(This,value)( (This)->lpVtbl -> put_Recorder(This,value) )
#define IDiscFormat2Data_get_Recorder(This,value)( (This)->lpVtbl -> get_Recorder(This,value) )
#define IDiscFormat2Data_put_BufferUnderrunFreeDisabled(This,value)( (This)->lpVtbl -> put_BufferUnderrunFreeDisabled(This,value) )
#define IDiscFormat2Data_get_BufferUnderrunFreeDisabled(This,value)( (This)->lpVtbl -> get_BufferUnderrunFreeDisabled(This,value) )
#define IDiscFormat2Data_put_PostgapAlreadyInImage(This,value)( (This)->lpVtbl -> put_PostgapAlreadyInImage(This,value) )
#define IDiscFormat2Data_get_PostgapAlreadyInImage(This,value)( (This)->lpVtbl -> get_PostgapAlreadyInImage(This,value) )
#define IDiscFormat2Data_get_CurrentMediaStatus(This,value)( (This)->lpVtbl -> get_CurrentMediaStatus(This,value) )
#define IDiscFormat2Data_get_WriteProtectStatus(This,value)( (This)->lpVtbl -> get_WriteProtectStatus(This,value) )
#define IDiscFormat2Data_get_TotalSectorsOnMedia(This,value)( (This)->lpVtbl -> get_TotalSectorsOnMedia(This,value) )
#define IDiscFormat2Data_get_FreeSectorsOnMedia(This,value)( (This)->lpVtbl -> get_FreeSectorsOnMedia(This,value) )
#define IDiscFormat2Data_get_NextWritableAddress(This,value)( (This)->lpVtbl -> get_NextWritableAddress(This,value) )
#define IDiscFormat2Data_get_StartAddressOfPreviousSession(This,value)( (This)->lpVtbl -> get_StartAddressOfPreviousSession(This,value) )
#define IDiscFormat2Data_get_LastWrittenAddressOfPreviousSession(This,value)( (This)->lpVtbl -> get_LastWrittenAddressOfPreviousSession(This,value) )
#define IDiscFormat2Data_put_ForceMediaToBeClosed(This,value)( (This)->lpVtbl -> put_ForceMediaToBeClosed(This,value) )
#define IDiscFormat2Data_get_ForceMediaToBeClosed(This,value)( (This)->lpVtbl -> get_ForceMediaToBeClosed(This,value) )
#define IDiscFormat2Data_put_DisableConsumerDvdCompatibilityMode(This,value)( (This)->lpVtbl -> put_DisableConsumerDvdCompatibilityMode(This,value) )
#define IDiscFormat2Data_get_DisableConsumerDvdCompatibilityMode(This,value)( (This)->lpVtbl -> get_DisableConsumerDvdCompatibilityMode(This,value) )
#define IDiscFormat2Data_get_CurrentPhysicalMediaType(This,value)( (This)->lpVtbl -> get_CurrentPhysicalMediaType(This,value) )
#define IDiscFormat2Data_put_ClientName(This,value)( (This)->lpVtbl -> put_ClientName(This,value) )
#define IDiscFormat2Data_get_ClientName(This,value)( (This)->lpVtbl -> get_ClientName(This,value) )
#define IDiscFormat2Data_get_RequestedWriteSpeed(This,value)( (This)->lpVtbl -> get_RequestedWriteSpeed(This,value) )
#define IDiscFormat2Data_get_RequestedRotationTypeIsPureCAV(This,value)( (This)->lpVtbl -> get_RequestedRotationTypeIsPureCAV(This,value) )
#define IDiscFormat2Data_get_CurrentWriteSpeed(This,value)( (This)->lpVtbl -> get_CurrentWriteSpeed(This,value) )
#define IDiscFormat2Data_get_CurrentRotationTypeIsPureCAV(This,value)( (This)->lpVtbl -> get_CurrentRotationTypeIsPureCAV(This,value) )
#define IDiscFormat2Data_get_SupportedWriteSpeeds(This,supportedSpeeds)( (This)->lpVtbl -> get_SupportedWriteSpeeds(This,supportedSpeeds) )
#define IDiscFormat2Data_get_SupportedWriteSpeedDescriptors(This,supportedSpeedDescriptors)( (This)->lpVtbl -> get_SupportedWriteSpeedDescriptors(This,supportedSpeedDescriptors) )
#define IDiscFormat2Data_put_ForceOverwrite(This,value)( (This)->lpVtbl -> put_ForceOverwrite(This,value) )
#define IDiscFormat2Data_get_ForceOverwrite(This,value)( (This)->lpVtbl -> get_ForceOverwrite(This,value) )
#define IDiscFormat2Data_get_MultisessionInterfaces(This,value)( (This)->lpVtbl -> get_MultisessionInterfaces(This,value) )
#define IDiscFormat2Data_Write(This,data)( (This)->lpVtbl -> Write(This,data) )
#define IDiscFormat2Data_CancelWrite(This)( (This)->lpVtbl -> CancelWrite(This) )
#define IDiscFormat2Data_SetWriteSpeed(This,RequestedSectorsPerSecond,RotationTypeIsPureCAV)( (This)->lpVtbl -> SetWriteSpeed(This,RequestedSectorsPerSecond,RotationTypeIsPureCAV) )
#endif
#endif
#define DISPID_DDISCFORMAT2DATAEVENTS_UPDATE  0x200
extern RPC_IF_HANDLE __MIDL_itf_imapi2_0000_0011_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_imapi2_0000_0011_v0_0_s_ifspec;
#ifndef __DDiscFormat2DataEvents_INTERFACE_DEFINED__
#define __DDiscFormat2DataEvents_INTERFACE_DEFINED__
extern const IID IID_DDiscFormat2DataEvents;
typedef struct DDiscFormat2DataEventsVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (DDiscFormat2DataEvents * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (DDiscFormat2DataEvents * This);
	ULONG(STDMETHODCALLTYPE * Release) (DDiscFormat2DataEvents * This);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfoCount) (DDiscFormat2DataEvents * This, UINT * pctinfo);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfo) (DDiscFormat2DataEvents * This, UINT iTInfo, LCID lcid, ITypeInfo ** ppTInfo);
	HRESULT(STDMETHODCALLTYPE * GetIDsOfNames) (DDiscFormat2DataEvents * This, REFIID riid, LPOLESTR * rgszNames, UINT cNames, LCID lcid, DISPID * rgDispId);
	HRESULT(STDMETHODCALLTYPE * Invoke) (DDiscFormat2DataEvents * This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS * pDispParams, VARIANT * pVarResult, EXCEPINFO * pExcepInfo, UINT * puArgErr);
	HRESULT(STDMETHODCALLTYPE * Update) (DDiscFormat2DataEvents * This, IDispatch * object, IDispatch * progress);
	END_INTERFACE
}  DDiscFormat2DataEventsVtbl;
interface DDiscFormat2DataEvents
{
	CONST_VTBL struct DDiscFormat2DataEventsVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define DDiscFormat2DataEvents_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define DDiscFormat2DataEvents_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define DDiscFormat2DataEvents_Release(This)( (This)->lpVtbl -> Release(This) )
#define DDiscFormat2DataEvents_GetTypeInfoCount(This,pctinfo)( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define DDiscFormat2DataEvents_GetTypeInfo(This,iTInfo,lcid,ppTInfo)( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define DDiscFormat2DataEvents_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define DDiscFormat2DataEvents_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define DDiscFormat2DataEvents_Update(This,object,progress)( (This)->lpVtbl -> Update(This,object,progress) )
#endif
#endif
#define DISPID_IDISCFORMAT2DATAEVENTARGS_ELAPSEDTIME            0x300
#define DISPID_IDISCFORMAT2DATAEVENTARGS_ESTIMATEDREMAININGTIME 0x301
#define DISPID_IDISCFORMAT2DATAEVENTARGS_ESTIMATEDTOTALTIME     0x302
#define DISPID_IDISCFORMAT2DATAEVENTARGS_CURRENTACTION          0x303
extern RPC_IF_HANDLE __MIDL_itf_imapi2_0000_0012_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_imapi2_0000_0012_v0_0_s_ifspec;
#ifndef __IDiscFormat2DataEventArgs_INTERFACE_DEFINED__
#define __IDiscFormat2DataEventArgs_INTERFACE_DEFINED__
extern const IID IID_IDiscFormat2DataEventArgs;
typedef struct IDiscFormat2DataEventArgsVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IDiscFormat2DataEventArgs * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IDiscFormat2DataEventArgs * This);
	ULONG(STDMETHODCALLTYPE * Release) (IDiscFormat2DataEventArgs * This);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfoCount) (IDiscFormat2DataEventArgs * This, UINT * pctinfo);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfo) (IDiscFormat2DataEventArgs * This, UINT iTInfo, LCID lcid, ITypeInfo ** ppTInfo);
	HRESULT(STDMETHODCALLTYPE * GetIDsOfNames) (IDiscFormat2DataEventArgs * This, REFIID riid, LPOLESTR * rgszNames, UINT cNames, LCID lcid, DISPID * rgDispId);
	HRESULT(STDMETHODCALLTYPE * Invoke) (IDiscFormat2DataEventArgs * This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS * pDispParams, VARIANT * pVarResult, EXCEPINFO * pExcepInfo, UINT * puArgErr);
	HRESULT(STDMETHODCALLTYPE * get_StartLba) (IDiscFormat2DataEventArgs * This, LONG * value);
	HRESULT(STDMETHODCALLTYPE * get_SectorCount) (IDiscFormat2DataEventArgs * This, LONG * value);
	HRESULT(STDMETHODCALLTYPE * get_LastReadLba) (IDiscFormat2DataEventArgs * This, LONG * value);
	HRESULT(STDMETHODCALLTYPE * get_LastWrittenLba) (IDiscFormat2DataEventArgs * This, LONG * value);
	HRESULT(STDMETHODCALLTYPE * get_TotalSystemBuffer) (IDiscFormat2DataEventArgs * This, LONG * value);
	HRESULT(STDMETHODCALLTYPE * get_UsedSystemBuffer) (IDiscFormat2DataEventArgs * This, LONG * value);
	HRESULT(STDMETHODCALLTYPE * get_FreeSystemBuffer) (IDiscFormat2DataEventArgs * This, LONG * value);
	HRESULT(STDMETHODCALLTYPE * get_ElapsedTime) (IDiscFormat2DataEventArgs * This, LONG * value);
	HRESULT(STDMETHODCALLTYPE * get_RemainingTime) (IDiscFormat2DataEventArgs * This, LONG * value);
	HRESULT(STDMETHODCALLTYPE * get_TotalTime) (IDiscFormat2DataEventArgs * This, LONG * value);
	HRESULT(STDMETHODCALLTYPE * get_CurrentAction) (IDiscFormat2DataEventArgs * This, IMAPI_FORMAT2_DATA_WRITE_ACTION * value);
	END_INTERFACE
}  IDiscFormat2DataEventArgsVtbl;
interface IDiscFormat2DataEventArgs
{
	CONST_VTBL struct IDiscFormat2DataEventArgsVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IDiscFormat2DataEventArgs_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IDiscFormat2DataEventArgs_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define IDiscFormat2DataEventArgs_Release(This)( (This)->lpVtbl -> Release(This) )
#define IDiscFormat2DataEventArgs_GetTypeInfoCount(This,pctinfo)( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define IDiscFormat2DataEventArgs_GetTypeInfo(This,iTInfo,lcid,ppTInfo)( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define IDiscFormat2DataEventArgs_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define IDiscFormat2DataEventArgs_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define IDiscFormat2DataEventArgs_get_StartLba(This,value)( (This)->lpVtbl -> get_StartLba(This,value) )
#define IDiscFormat2DataEventArgs_get_SectorCount(This,value)( (This)->lpVtbl -> get_SectorCount(This,value) )
#define IDiscFormat2DataEventArgs_get_LastReadLba(This,value)( (This)->lpVtbl -> get_LastReadLba(This,value) )
#define IDiscFormat2DataEventArgs_get_LastWrittenLba(This,value)( (This)->lpVtbl -> get_LastWrittenLba(This,value) )
#define IDiscFormat2DataEventArgs_get_TotalSystemBuffer(This,value)( (This)->lpVtbl -> get_TotalSystemBuffer(This,value) )
#define IDiscFormat2DataEventArgs_get_UsedSystemBuffer(This,value)( (This)->lpVtbl -> get_UsedSystemBuffer(This,value) )
#define IDiscFormat2DataEventArgs_get_FreeSystemBuffer(This,value)( (This)->lpVtbl -> get_FreeSystemBuffer(This,value) )
#define IDiscFormat2DataEventArgs_get_ElapsedTime(This,value)( (This)->lpVtbl -> get_ElapsedTime(This,value) )
#define IDiscFormat2DataEventArgs_get_RemainingTime(This,value)( (This)->lpVtbl -> get_RemainingTime(This,value) )
#define IDiscFormat2DataEventArgs_get_TotalTime(This,value)( (This)->lpVtbl -> get_TotalTime(This,value) )
#define IDiscFormat2DataEventArgs_get_CurrentAction(This,value)( (This)->lpVtbl -> get_CurrentAction(This,value) )
#endif
#endif
#define DISPID_IDISCFORMAT2TAO_RECORDER                          0x100
#define DISPID_IDISCFORMAT2TAO_BUFFERUNDERRUNFREEDISABLED        0x102
#define DISPID_IDISCFORMAT2TAO_NUMBEROFEXISTINGTRACKS            0x103
#define DISPID_IDISCFORMAT2TAO_TOTALSECTORSONMEDIA               0x104
#define DISPID_IDISCFORMAT2TAO_FREESECTORSONMEDIA                0x105
#define DISPID_IDISCFORMAT2TAO_USEDSECTORSONMEDIA                0x106
#define DISPID_IDISCFORMAT2TAO_DONOTFINALIZEMEDIA                0x107
#define DISPID_IDISCFORMAT2TAO_EXPECTEDTABLEOFCONTENTS           0x10A
#define DISPID_IDISCFORMAT2TAO_CURRENTMEDIATYPE                  0x10B
#define DISPID_IDISCFORMAT2TAO_CLIENTNAME                        0x10E
#define DISPID_IDISCFORMAT2TAO_REQUESTEDWRITESPEED               0x10F
#define DISPID_IDISCFORMAT2TAO_REQUESTEDROTATIONTYPEISPURECAV    0x110
#define DISPID_IDISCFORMAT2TAO_CURRENTWRITESPEED                 0x111
#define DISPID_IDISCFORMAT2TAO_CURRENTROTATIONTYPEISPURECAV      0x112
#define DISPID_IDISCFORMAT2TAO_SUPPORTEDWRITESPEEDS              0x113
#define DISPID_IDISCFORMAT2TAO_SUPPORTEDWRITESPEEDDESCRIPTORS    0x114
#define DISPID_IDISCFORMAT2TAO_PREPAREMEDIA                      0x200
#define DISPID_IDISCFORMAT2TAO_ADDAUDIOTRACK                     0x201
#define DISPID_IDISCFORMAT2TAO_CANCELADDTRACK                    0x202
#define DISPID_IDISCFORMAT2TAO_FINISHMEDIA                       0x203
#define DISPID_IDISCFORMAT2TAO_SETWRITESPEED                     0x204
extern RPC_IF_HANDLE __MIDL_itf_imapi2_0000_0013_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_imapi2_0000_0013_v0_0_s_ifspec;
#ifndef __IDiscFormat2TrackAtOnce_INTERFACE_DEFINED__
#define __IDiscFormat2TrackAtOnce_INTERFACE_DEFINED__
extern const IID IID_IDiscFormat2TrackAtOnce;
typedef struct IDiscFormat2TrackAtOnceVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IDiscFormat2TrackAtOnce * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IDiscFormat2TrackAtOnce * This);
	ULONG(STDMETHODCALLTYPE * Release) (IDiscFormat2TrackAtOnce * This);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfoCount) (IDiscFormat2TrackAtOnce * This, UINT * pctinfo);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfo) (IDiscFormat2TrackAtOnce * This, UINT iTInfo, LCID lcid, ITypeInfo ** ppTInfo);
	HRESULT(STDMETHODCALLTYPE * GetIDsOfNames) (IDiscFormat2TrackAtOnce * This, REFIID riid, LPOLESTR * rgszNames, UINT cNames, LCID lcid, DISPID * rgDispId);
	HRESULT(STDMETHODCALLTYPE * Invoke) (IDiscFormat2TrackAtOnce * This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS * pDispParams, VARIANT * pVarResult, EXCEPINFO * pExcepInfo, UINT * puArgErr);
	HRESULT(STDMETHODCALLTYPE * IsRecorderSupported) (IDiscFormat2TrackAtOnce * This, IDiscRecorder2 * recorder, VARIANT_BOOL * value);
	HRESULT(STDMETHODCALLTYPE * IsCurrentMediaSupported) (IDiscFormat2TrackAtOnce * This, IDiscRecorder2 * recorder, VARIANT_BOOL * value);
	HRESULT(STDMETHODCALLTYPE * get_MediaPhysicallyBlank) (IDiscFormat2TrackAtOnce * This, VARIANT_BOOL * value);
	HRESULT(STDMETHODCALLTYPE * get_MediaHeuristicallyBlank) (IDiscFormat2TrackAtOnce * This, VARIANT_BOOL * value);
	HRESULT(STDMETHODCALLTYPE * get_SupportedMediaTypes) (IDiscFormat2TrackAtOnce * This, SAFEARRAY * *value);
	HRESULT(STDMETHODCALLTYPE * PrepareMedia) (IDiscFormat2TrackAtOnce * This);
	HRESULT(STDMETHODCALLTYPE * AddAudioTrack) (IDiscFormat2TrackAtOnce * This, IStream * data);
	HRESULT(STDMETHODCALLTYPE * CancelAddTrack) (IDiscFormat2TrackAtOnce * This);
	HRESULT(STDMETHODCALLTYPE * ReleaseMedia) (IDiscFormat2TrackAtOnce * This);
	HRESULT(STDMETHODCALLTYPE * SetWriteSpeed) (IDiscFormat2TrackAtOnce * This, LONG RequestedSectorsPerSecond, VARIANT_BOOL RotationTypeIsPureCAV);
	HRESULT(STDMETHODCALLTYPE * put_Recorder) (IDiscFormat2TrackAtOnce * This, IDiscRecorder2 * value);
	HRESULT(STDMETHODCALLTYPE * get_Recorder) (IDiscFormat2TrackAtOnce * This, IDiscRecorder2 ** value);
	HRESULT(STDMETHODCALLTYPE * put_BufferUnderrunFreeDisabled) (IDiscFormat2TrackAtOnce * This, VARIANT_BOOL value);
	HRESULT(STDMETHODCALLTYPE * get_BufferUnderrunFreeDisabled) (IDiscFormat2TrackAtOnce * This, VARIANT_BOOL * value);
	HRESULT(STDMETHODCALLTYPE * get_NumberOfExistingTracks) (IDiscFormat2TrackAtOnce * This, LONG * value);
	HRESULT(STDMETHODCALLTYPE * get_TotalSectorsOnMedia) (IDiscFormat2TrackAtOnce * This, LONG * value);
	HRESULT(STDMETHODCALLTYPE * get_FreeSectorsOnMedia) (IDiscFormat2TrackAtOnce * This, LONG * value);
	HRESULT(STDMETHODCALLTYPE * get_UsedSectorsOnMedia) (IDiscFormat2TrackAtOnce * This, LONG * value);
	HRESULT(STDMETHODCALLTYPE * put_DoNotFinalizeMedia) (IDiscFormat2TrackAtOnce * This, VARIANT_BOOL value);
	HRESULT(STDMETHODCALLTYPE * get_DoNotFinalizeMedia) (IDiscFormat2TrackAtOnce * This, VARIANT_BOOL * value);
	HRESULT(STDMETHODCALLTYPE * get_ExpectedTableOfContents) (IDiscFormat2TrackAtOnce * This, SAFEARRAY * *value);
	HRESULT(STDMETHODCALLTYPE * get_CurrentPhysicalMediaType) (IDiscFormat2TrackAtOnce * This, IMAPI_MEDIA_PHYSICAL_TYPE * value);
	HRESULT(STDMETHODCALLTYPE * put_ClientName) (IDiscFormat2TrackAtOnce * This, BSTR value);
	HRESULT(STDMETHODCALLTYPE * get_ClientName) (IDiscFormat2TrackAtOnce * This, BSTR * value);
	HRESULT(STDMETHODCALLTYPE * get_RequestedWriteSpeed) (IDiscFormat2TrackAtOnce * This, LONG * value);
	HRESULT(STDMETHODCALLTYPE * get_RequestedRotationTypeIsPureCAV) (IDiscFormat2TrackAtOnce * This, VARIANT_BOOL * value);
	HRESULT(STDMETHODCALLTYPE * get_CurrentWriteSpeed) (IDiscFormat2TrackAtOnce * This, LONG * value);
	HRESULT(STDMETHODCALLTYPE * get_CurrentRotationTypeIsPureCAV) (IDiscFormat2TrackAtOnce * This, VARIANT_BOOL * value);
	HRESULT(STDMETHODCALLTYPE * get_SupportedWriteSpeeds) (IDiscFormat2TrackAtOnce * This, SAFEARRAY * *supportedSpeeds);
	HRESULT(STDMETHODCALLTYPE * get_SupportedWriteSpeedDescriptors) (IDiscFormat2TrackAtOnce * This, SAFEARRAY * *supportedSpeedDescriptors);
	END_INTERFACE
}  IDiscFormat2TrackAtOnceVtbl;
interface IDiscFormat2TrackAtOnce
{
	CONST_VTBL struct IDiscFormat2TrackAtOnceVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IDiscFormat2TrackAtOnce_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IDiscFormat2TrackAtOnce_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define IDiscFormat2TrackAtOnce_Release(This)( (This)->lpVtbl -> Release(This) )
#define IDiscFormat2TrackAtOnce_GetTypeInfoCount(This,pctinfo)( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define IDiscFormat2TrackAtOnce_GetTypeInfo(This,iTInfo,lcid,ppTInfo)( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define IDiscFormat2TrackAtOnce_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define IDiscFormat2TrackAtOnce_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define IDiscFormat2TrackAtOnce_IsRecorderSupported(This,recorder,value)( (This)->lpVtbl -> IsRecorderSupported(This,recorder,value) )
#define IDiscFormat2TrackAtOnce_IsCurrentMediaSupported(This,recorder,value)( (This)->lpVtbl -> IsCurrentMediaSupported(This,recorder,value) )
#define IDiscFormat2TrackAtOnce_get_MediaPhysicallyBlank(This,value)( (This)->lpVtbl -> get_MediaPhysicallyBlank(This,value) )
#define IDiscFormat2TrackAtOnce_get_MediaHeuristicallyBlank(This,value)( (This)->lpVtbl -> get_MediaHeuristicallyBlank(This,value) )
#define IDiscFormat2TrackAtOnce_get_SupportedMediaTypes(This,value)( (This)->lpVtbl -> get_SupportedMediaTypes(This,value) )
#define IDiscFormat2TrackAtOnce_PrepareMedia(This)( (This)->lpVtbl -> PrepareMedia(This) )
#define IDiscFormat2TrackAtOnce_AddAudioTrack(This,data)( (This)->lpVtbl -> AddAudioTrack(This,data) )
#define IDiscFormat2TrackAtOnce_CancelAddTrack(This)( (This)->lpVtbl -> CancelAddTrack(This) )
#define IDiscFormat2TrackAtOnce_ReleaseMedia(This)( (This)->lpVtbl -> ReleaseMedia(This) )
#define IDiscFormat2TrackAtOnce_SetWriteSpeed(This,RequestedSectorsPerSecond,RotationTypeIsPureCAV)( (This)->lpVtbl -> SetWriteSpeed(This,RequestedSectorsPerSecond,RotationTypeIsPureCAV) )
#define IDiscFormat2TrackAtOnce_put_Recorder(This,value)( (This)->lpVtbl -> put_Recorder(This,value) )
#define IDiscFormat2TrackAtOnce_get_Recorder(This,value)( (This)->lpVtbl -> get_Recorder(This,value) )
#define IDiscFormat2TrackAtOnce_put_BufferUnderrunFreeDisabled(This,value)( (This)->lpVtbl -> put_BufferUnderrunFreeDisabled(This,value) )
#define IDiscFormat2TrackAtOnce_get_BufferUnderrunFreeDisabled(This,value)( (This)->lpVtbl -> get_BufferUnderrunFreeDisabled(This,value) )
#define IDiscFormat2TrackAtOnce_get_NumberOfExistingTracks(This,value)( (This)->lpVtbl -> get_NumberOfExistingTracks(This,value) )
#define IDiscFormat2TrackAtOnce_get_TotalSectorsOnMedia(This,value)( (This)->lpVtbl -> get_TotalSectorsOnMedia(This,value) )
#define IDiscFormat2TrackAtOnce_get_FreeSectorsOnMedia(This,value)( (This)->lpVtbl -> get_FreeSectorsOnMedia(This,value) )
#define IDiscFormat2TrackAtOnce_get_UsedSectorsOnMedia(This,value)( (This)->lpVtbl -> get_UsedSectorsOnMedia(This,value) )
#define IDiscFormat2TrackAtOnce_put_DoNotFinalizeMedia(This,value)( (This)->lpVtbl -> put_DoNotFinalizeMedia(This,value) )
#define IDiscFormat2TrackAtOnce_get_DoNotFinalizeMedia(This,value)( (This)->lpVtbl -> get_DoNotFinalizeMedia(This,value) )
#define IDiscFormat2TrackAtOnce_get_ExpectedTableOfContents(This,value)( (This)->lpVtbl -> get_ExpectedTableOfContents(This,value) )
#define IDiscFormat2TrackAtOnce_get_CurrentPhysicalMediaType(This,value)( (This)->lpVtbl -> get_CurrentPhysicalMediaType(This,value) )
#define IDiscFormat2TrackAtOnce_put_ClientName(This,value)( (This)->lpVtbl -> put_ClientName(This,value) )
#define IDiscFormat2TrackAtOnce_get_ClientName(This,value)( (This)->lpVtbl -> get_ClientName(This,value) )
#define IDiscFormat2TrackAtOnce_get_RequestedWriteSpeed(This,value)( (This)->lpVtbl -> get_RequestedWriteSpeed(This,value) )
#define IDiscFormat2TrackAtOnce_get_RequestedRotationTypeIsPureCAV(This,value)( (This)->lpVtbl -> get_RequestedRotationTypeIsPureCAV(This,value) )
#define IDiscFormat2TrackAtOnce_get_CurrentWriteSpeed(This,value)( (This)->lpVtbl -> get_CurrentWriteSpeed(This,value) )
#define IDiscFormat2TrackAtOnce_get_CurrentRotationTypeIsPureCAV(This,value)( (This)->lpVtbl -> get_CurrentRotationTypeIsPureCAV(This,value) )
#define IDiscFormat2TrackAtOnce_get_SupportedWriteSpeeds(This,supportedSpeeds)( (This)->lpVtbl -> get_SupportedWriteSpeeds(This,supportedSpeeds) )
#define IDiscFormat2TrackAtOnce_get_SupportedWriteSpeedDescriptors(This,supportedSpeedDescriptors)( (This)->lpVtbl -> get_SupportedWriteSpeedDescriptors(This,supportedSpeedDescriptors) )
#endif
#endif
#define DISPID_DDISCFORMAT2TAOEVENTS_UPDATE  0x200
extern RPC_IF_HANDLE __MIDL_itf_imapi2_0000_0014_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_imapi2_0000_0014_v0_0_s_ifspec;
#ifndef __DDiscFormat2TrackAtOnceEvents_INTERFACE_DEFINED__
#define __DDiscFormat2TrackAtOnceEvents_INTERFACE_DEFINED__
extern const IID IID_DDiscFormat2TrackAtOnceEvents;
typedef struct DDiscFormat2TrackAtOnceEventsVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (DDiscFormat2TrackAtOnceEvents * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (DDiscFormat2TrackAtOnceEvents * This);
	ULONG(STDMETHODCALLTYPE * Release) (DDiscFormat2TrackAtOnceEvents * This);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfoCount) (DDiscFormat2TrackAtOnceEvents * This, UINT * pctinfo);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfo) (DDiscFormat2TrackAtOnceEvents * This, UINT iTInfo, LCID lcid, ITypeInfo ** ppTInfo);
	HRESULT(STDMETHODCALLTYPE * GetIDsOfNames) (DDiscFormat2TrackAtOnceEvents * This, REFIID riid, LPOLESTR * rgszNames, UINT cNames, LCID lcid, DISPID * rgDispId);
	HRESULT(STDMETHODCALLTYPE * Invoke) (DDiscFormat2TrackAtOnceEvents * This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS * pDispParams, VARIANT * pVarResult, EXCEPINFO * pExcepInfo, UINT * puArgErr);
	HRESULT(STDMETHODCALLTYPE * Update) (DDiscFormat2TrackAtOnceEvents * This, IDispatch * object, IDispatch * progress);
	END_INTERFACE
}  DDiscFormat2TrackAtOnceEventsVtbl;
interface DDiscFormat2TrackAtOnceEvents
{
	CONST_VTBL struct DDiscFormat2TrackAtOnceEventsVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define DDiscFormat2TrackAtOnceEvents_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define DDiscFormat2TrackAtOnceEvents_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define DDiscFormat2TrackAtOnceEvents_Release(This)( (This)->lpVtbl -> Release(This) )
#define DDiscFormat2TrackAtOnceEvents_GetTypeInfoCount(This,pctinfo)( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define DDiscFormat2TrackAtOnceEvents_GetTypeInfo(This,iTInfo,lcid,ppTInfo)( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define DDiscFormat2TrackAtOnceEvents_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define DDiscFormat2TrackAtOnceEvents_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define DDiscFormat2TrackAtOnceEvents_Update(This,object,progress)( (This)->lpVtbl -> Update(This,object,progress) )
#endif
#endif
#define DISPID_IDISCFORMAT2TAOEVENTARGS_CURRENTTRACKNUMBER     0x300
#define DISPID_IDISCFORMAT2TAOEVENTARGS_CURRENTACTION          0x301
#define DISPID_IDISCFORMAT2TAOEVENTARGS_ELAPSEDTIME            0x302
#define DISPID_IDISCFORMAT2TAOEVENTARGS_ESTIMATEDREMAININGTIME 0x303
#define DISPID_IDISCFORMAT2TAOEVENTARGS_ESTIMATEDTOTALTIME     0x304
extern RPC_IF_HANDLE __MIDL_itf_imapi2_0000_0015_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_imapi2_0000_0015_v0_0_s_ifspec;
#ifndef __IDiscFormat2TrackAtOnceEventArgs_INTERFACE_DEFINED__
#define __IDiscFormat2TrackAtOnceEventArgs_INTERFACE_DEFINED__
extern const IID IID_IDiscFormat2TrackAtOnceEventArgs;
typedef struct IDiscFormat2TrackAtOnceEventArgsVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IDiscFormat2TrackAtOnceEventArgs * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IDiscFormat2TrackAtOnceEventArgs * This);
	ULONG(STDMETHODCALLTYPE * Release) (IDiscFormat2TrackAtOnceEventArgs * This);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfoCount) (IDiscFormat2TrackAtOnceEventArgs * This, UINT * pctinfo);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfo) (IDiscFormat2TrackAtOnceEventArgs * This, UINT iTInfo, LCID lcid, ITypeInfo ** ppTInfo);
	HRESULT(STDMETHODCALLTYPE * GetIDsOfNames) (IDiscFormat2TrackAtOnceEventArgs * This, REFIID riid, LPOLESTR * rgszNames, UINT cNames, LCID lcid, DISPID * rgDispId);
	HRESULT(STDMETHODCALLTYPE * Invoke) (IDiscFormat2TrackAtOnceEventArgs * This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS * pDispParams, VARIANT * pVarResult, EXCEPINFO * pExcepInfo, UINT * puArgErr);
	HRESULT(STDMETHODCALLTYPE * get_StartLba) (IDiscFormat2TrackAtOnceEventArgs * This, LONG * value);
	HRESULT(STDMETHODCALLTYPE * get_SectorCount) (IDiscFormat2TrackAtOnceEventArgs * This, LONG * value);
	HRESULT(STDMETHODCALLTYPE * get_LastReadLba) (IDiscFormat2TrackAtOnceEventArgs * This, LONG * value);
	HRESULT(STDMETHODCALLTYPE * get_LastWrittenLba) (IDiscFormat2TrackAtOnceEventArgs * This, LONG * value);
	HRESULT(STDMETHODCALLTYPE * get_TotalSystemBuffer) (IDiscFormat2TrackAtOnceEventArgs * This, LONG * value);
	HRESULT(STDMETHODCALLTYPE * get_UsedSystemBuffer) (IDiscFormat2TrackAtOnceEventArgs * This, LONG * value);
	HRESULT(STDMETHODCALLTYPE * get_FreeSystemBuffer) (IDiscFormat2TrackAtOnceEventArgs * This, LONG * value);
	HRESULT(STDMETHODCALLTYPE * get_CurrentTrackNumber) (IDiscFormat2TrackAtOnceEventArgs * This, LONG * value);
	HRESULT(STDMETHODCALLTYPE * get_CurrentAction) (IDiscFormat2TrackAtOnceEventArgs * This, IMAPI_FORMAT2_TAO_WRITE_ACTION * value);
	HRESULT(STDMETHODCALLTYPE * get_ElapsedTime) (IDiscFormat2TrackAtOnceEventArgs * This, LONG * value);
	HRESULT(STDMETHODCALLTYPE * get_RemainingTime) (IDiscFormat2TrackAtOnceEventArgs * This, LONG * value);
	END_INTERFACE
}  IDiscFormat2TrackAtOnceEventArgsVtbl;
interface IDiscFormat2TrackAtOnceEventArgs
{
	CONST_VTBL struct IDiscFormat2TrackAtOnceEventArgsVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IDiscFormat2TrackAtOnceEventArgs_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IDiscFormat2TrackAtOnceEventArgs_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define IDiscFormat2TrackAtOnceEventArgs_Release(This)( (This)->lpVtbl -> Release(This) )
#define IDiscFormat2TrackAtOnceEventArgs_GetTypeInfoCount(This,pctinfo)( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define IDiscFormat2TrackAtOnceEventArgs_GetTypeInfo(This,iTInfo,lcid,ppTInfo)( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define IDiscFormat2TrackAtOnceEventArgs_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define IDiscFormat2TrackAtOnceEventArgs_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define IDiscFormat2TrackAtOnceEventArgs_get_StartLba(This,value)( (This)->lpVtbl -> get_StartLba(This,value) )
#define IDiscFormat2TrackAtOnceEventArgs_get_SectorCount(This,value)( (This)->lpVtbl -> get_SectorCount(This,value) )
#define IDiscFormat2TrackAtOnceEventArgs_get_LastReadLba(This,value)( (This)->lpVtbl -> get_LastReadLba(This,value) )
#define IDiscFormat2TrackAtOnceEventArgs_get_LastWrittenLba(This,value)( (This)->lpVtbl -> get_LastWrittenLba(This,value) )
#define IDiscFormat2TrackAtOnceEventArgs_get_TotalSystemBuffer(This,value)( (This)->lpVtbl -> get_TotalSystemBuffer(This,value) )
#define IDiscFormat2TrackAtOnceEventArgs_get_UsedSystemBuffer(This,value)( (This)->lpVtbl -> get_UsedSystemBuffer(This,value) )
#define IDiscFormat2TrackAtOnceEventArgs_get_FreeSystemBuffer(This,value)( (This)->lpVtbl -> get_FreeSystemBuffer(This,value) )
#define IDiscFormat2TrackAtOnceEventArgs_get_CurrentTrackNumber(This,value)( (This)->lpVtbl -> get_CurrentTrackNumber(This,value) )
#define IDiscFormat2TrackAtOnceEventArgs_get_CurrentAction(This,value)( (This)->lpVtbl -> get_CurrentAction(This,value) )
#define IDiscFormat2TrackAtOnceEventArgs_get_ElapsedTime(This,value)( (This)->lpVtbl -> get_ElapsedTime(This,value) )
#define IDiscFormat2TrackAtOnceEventArgs_get_RemainingTime(This,value)( (This)->lpVtbl -> get_RemainingTime(This,value) )
#endif
#endif
#define DISPID_IDISCFORMAT2RAWCD_RECORDER                        0x100
#define DISPID_IDISCFORMAT2RAWCD_BUFFERUNDERRUNFREEDISABLED      0x102
#define DISPID_IDISCFORMAT2RAWCD_STARTOFNEXTSESSION              0x103
#define DISPID_IDISCFORMAT2RAWCD_LASTPOSSIBLESTARTOFLEADOUT      0x104
#define DISPID_IDISCFORMAT2RAWCD_CURRENTMEDIATYPE                0x105
#define DISPID_IDISCFORMAT2RAWCD_SUPPORTEDDATASECTORTYPES        0x108
#define DISPID_IDISCFORMAT2RAWCD_REQUESTEDDATASECTORTYPE         0x109
#define DISPID_IDISCFORMAT2RAWCD_CLIENTNAME                      0x10A
#define DISPID_IDISCFORMAT2RAWCD_REQUESTEDWRITESPEED             0x10B
#define DISPID_IDISCFORMAT2RAWCD_REQUESTEDROTATIONTYPEISPURECAV  0x10C
#define DISPID_IDISCFORMAT2RAWCD_CURRENTWRITESPEED               0x10D
#define DISPID_IDISCFORMAT2RAWCD_CURRENTROTATIONTYPEISPURECAV    0x10E
#define DISPID_IDISCFORMAT2RAWCD_SUPPORTEDWRITESPEEDS            0x10F
#define DISPID_IDISCFORMAT2RAWCD_SUPPORTEDWRITESPEEDDESCRIPTORS  0x110
#define DISPID_IDISCFORMAT2RAWCD_PREPAREMEDIA                    0x200
#define DISPID_IDISCFORMAT2RAWCD_WRITEMEDIA                      0x201
#define DISPID_IDISCFORMAT2RAWCD_WRITEMEDIAWITHVALIDATION        0x202
#define DISPID_IDISCFORMAT2RAWCD_CANCELWRITE                     0x203
#define DISPID_IDISCFORMAT2RAWCD_RELEASEMEDIA                    0x204
#define DISPID_IDISCFORMAT2RAWCD_SETWRITESPEED                   0x205
extern RPC_IF_HANDLE __MIDL_itf_imapi2_0000_0016_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_imapi2_0000_0016_v0_0_s_ifspec;
#ifndef __IDiscFormat2RawCD_INTERFACE_DEFINED__
#define __IDiscFormat2RawCD_INTERFACE_DEFINED__
extern const IID IID_IDiscFormat2RawCD;
typedef struct IDiscFormat2RawCDVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IDiscFormat2RawCD * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IDiscFormat2RawCD * This);
	ULONG(STDMETHODCALLTYPE * Release) (IDiscFormat2RawCD * This);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfoCount) (IDiscFormat2RawCD * This, UINT * pctinfo);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfo) (IDiscFormat2RawCD * This, UINT iTInfo, LCID lcid, ITypeInfo ** ppTInfo);
	HRESULT(STDMETHODCALLTYPE * GetIDsOfNames) (IDiscFormat2RawCD * This, REFIID riid, LPOLESTR * rgszNames, UINT cNames, LCID lcid, DISPID * rgDispId);
	HRESULT(STDMETHODCALLTYPE * Invoke) (IDiscFormat2RawCD * This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS * pDispParams, VARIANT * pVarResult, EXCEPINFO * pExcepInfo, UINT * puArgErr);
	HRESULT(STDMETHODCALLTYPE * IsRecorderSupported) (IDiscFormat2RawCD * This, IDiscRecorder2 * recorder, VARIANT_BOOL * value);
	HRESULT(STDMETHODCALLTYPE * IsCurrentMediaSupported) (IDiscFormat2RawCD * This, IDiscRecorder2 * recorder, VARIANT_BOOL * value);
	HRESULT(STDMETHODCALLTYPE * get_MediaPhysicallyBlank) (IDiscFormat2RawCD * This, VARIANT_BOOL * value);
	HRESULT(STDMETHODCALLTYPE * get_MediaHeuristicallyBlank) (IDiscFormat2RawCD * This, VARIANT_BOOL * value);
	HRESULT(STDMETHODCALLTYPE * get_SupportedMediaTypes) (IDiscFormat2RawCD * This, SAFEARRAY * *value);
	HRESULT(STDMETHODCALLTYPE * PrepareMedia) (IDiscFormat2RawCD * This);
	HRESULT(STDMETHODCALLTYPE * WriteMedia) (IDiscFormat2RawCD * This, IStream * data);
	HRESULT(STDMETHODCALLTYPE * WriteMedia2) (IDiscFormat2RawCD * This, IStream * data, LONG streamLeadInSectors);
	HRESULT(STDMETHODCALLTYPE * CancelWrite) (IDiscFormat2RawCD * This);
	HRESULT(STDMETHODCALLTYPE * ReleaseMedia) (IDiscFormat2RawCD * This);
	HRESULT(STDMETHODCALLTYPE * SetWriteSpeed) (IDiscFormat2RawCD * This, LONG RequestedSectorsPerSecond, VARIANT_BOOL RotationTypeIsPureCAV);
	HRESULT(STDMETHODCALLTYPE * put_Recorder) (IDiscFormat2RawCD * This, IDiscRecorder2 * value);
	HRESULT(STDMETHODCALLTYPE * get_Recorder) (IDiscFormat2RawCD * This, IDiscRecorder2 ** value);
	HRESULT(STDMETHODCALLTYPE * put_BufferUnderrunFreeDisabled) (IDiscFormat2RawCD * This, VARIANT_BOOL value);
	HRESULT(STDMETHODCALLTYPE * get_BufferUnderrunFreeDisabled) (IDiscFormat2RawCD * This, VARIANT_BOOL * value);
	HRESULT(STDMETHODCALLTYPE * get_StartOfNextSession) (IDiscFormat2RawCD * This, LONG * value);
	HRESULT(STDMETHODCALLTYPE * get_LastPossibleStartOfLeadout) (IDiscFormat2RawCD * This, LONG * value);
	HRESULT(STDMETHODCALLTYPE * get_CurrentPhysicalMediaType) (IDiscFormat2RawCD * This, IMAPI_MEDIA_PHYSICAL_TYPE * value);
	HRESULT(STDMETHODCALLTYPE * get_SupportedSectorTypes) (IDiscFormat2RawCD * This, SAFEARRAY * *value);
	HRESULT(STDMETHODCALLTYPE * put_RequestedSectorType) (IDiscFormat2RawCD * This, IMAPI_FORMAT2_RAW_CD_DATA_SECTOR_TYPE value);
	HRESULT(STDMETHODCALLTYPE * get_RequestedSectorType) (IDiscFormat2RawCD * This, IMAPI_FORMAT2_RAW_CD_DATA_SECTOR_TYPE * value);
	HRESULT(STDMETHODCALLTYPE * put_ClientName) (IDiscFormat2RawCD * This, BSTR value);
	HRESULT(STDMETHODCALLTYPE * get_ClientName) (IDiscFormat2RawCD * This, BSTR * value);
	HRESULT(STDMETHODCALLTYPE * get_RequestedWriteSpeed) (IDiscFormat2RawCD * This, LONG * value);
	HRESULT(STDMETHODCALLTYPE * get_RequestedRotationTypeIsPureCAV) (IDiscFormat2RawCD * This, VARIANT_BOOL * value);
	HRESULT(STDMETHODCALLTYPE * get_CurrentWriteSpeed) (IDiscFormat2RawCD * This, LONG * value);
	HRESULT(STDMETHODCALLTYPE * get_CurrentRotationTypeIsPureCAV) (IDiscFormat2RawCD * This, VARIANT_BOOL * value);
	HRESULT(STDMETHODCALLTYPE * get_SupportedWriteSpeeds) (IDiscFormat2RawCD * This, SAFEARRAY * *supportedSpeeds);
	HRESULT(STDMETHODCALLTYPE * get_SupportedWriteSpeedDescriptors) (IDiscFormat2RawCD * This, SAFEARRAY * *supportedSpeedDescriptors);
	END_INTERFACE
}  IDiscFormat2RawCDVtbl;
interface IDiscFormat2RawCD
{
	CONST_VTBL struct IDiscFormat2RawCDVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IDiscFormat2RawCD_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IDiscFormat2RawCD_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define IDiscFormat2RawCD_Release(This)( (This)->lpVtbl -> Release(This) )
#define IDiscFormat2RawCD_GetTypeInfoCount(This,pctinfo)( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define IDiscFormat2RawCD_GetTypeInfo(This,iTInfo,lcid,ppTInfo)( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define IDiscFormat2RawCD_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define IDiscFormat2RawCD_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define IDiscFormat2RawCD_IsRecorderSupported(This,recorder,value)( (This)->lpVtbl -> IsRecorderSupported(This,recorder,value) )
#define IDiscFormat2RawCD_IsCurrentMediaSupported(This,recorder,value)( (This)->lpVtbl -> IsCurrentMediaSupported(This,recorder,value) )
#define IDiscFormat2RawCD_get_MediaPhysicallyBlank(This,value)( (This)->lpVtbl -> get_MediaPhysicallyBlank(This,value) )
#define IDiscFormat2RawCD_get_MediaHeuristicallyBlank(This,value)( (This)->lpVtbl -> get_MediaHeuristicallyBlank(This,value) )
#define IDiscFormat2RawCD_get_SupportedMediaTypes(This,value)( (This)->lpVtbl -> get_SupportedMediaTypes(This,value) )
#define IDiscFormat2RawCD_PrepareMedia(This)( (This)->lpVtbl -> PrepareMedia(This) )
#define IDiscFormat2RawCD_WriteMedia(This,data)( (This)->lpVtbl -> WriteMedia(This,data) )
#define IDiscFormat2RawCD_WriteMedia2(This,data,streamLeadInSectors)( (This)->lpVtbl -> WriteMedia2(This,data,streamLeadInSectors) )
#define IDiscFormat2RawCD_CancelWrite(This)( (This)->lpVtbl -> CancelWrite(This) )
#define IDiscFormat2RawCD_ReleaseMedia(This)( (This)->lpVtbl -> ReleaseMedia(This) )
#define IDiscFormat2RawCD_SetWriteSpeed(This,RequestedSectorsPerSecond,RotationTypeIsPureCAV)( (This)->lpVtbl -> SetWriteSpeed(This,RequestedSectorsPerSecond,RotationTypeIsPureCAV) )
#define IDiscFormat2RawCD_put_Recorder(This,value)( (This)->lpVtbl -> put_Recorder(This,value) )
#define IDiscFormat2RawCD_get_Recorder(This,value)( (This)->lpVtbl -> get_Recorder(This,value) )
#define IDiscFormat2RawCD_put_BufferUnderrunFreeDisabled(This,value)( (This)->lpVtbl -> put_BufferUnderrunFreeDisabled(This,value) )
#define IDiscFormat2RawCD_get_BufferUnderrunFreeDisabled(This,value)( (This)->lpVtbl -> get_BufferUnderrunFreeDisabled(This,value) )
#define IDiscFormat2RawCD_get_StartOfNextSession(This,value)( (This)->lpVtbl -> get_StartOfNextSession(This,value) )
#define IDiscFormat2RawCD_get_LastPossibleStartOfLeadout(This,value)( (This)->lpVtbl -> get_LastPossibleStartOfLeadout(This,value) )
#define IDiscFormat2RawCD_get_CurrentPhysicalMediaType(This,value)( (This)->lpVtbl -> get_CurrentPhysicalMediaType(This,value) )
#define IDiscFormat2RawCD_get_SupportedSectorTypes(This,value)( (This)->lpVtbl -> get_SupportedSectorTypes(This,value) )
#define IDiscFormat2RawCD_put_RequestedSectorType(This,value)( (This)->lpVtbl -> put_RequestedSectorType(This,value) )
#define IDiscFormat2RawCD_get_RequestedSectorType(This,value)( (This)->lpVtbl -> get_RequestedSectorType(This,value) )
#define IDiscFormat2RawCD_put_ClientName(This,value)( (This)->lpVtbl -> put_ClientName(This,value) )
#define IDiscFormat2RawCD_get_ClientName(This,value)( (This)->lpVtbl -> get_ClientName(This,value) )
#define IDiscFormat2RawCD_get_RequestedWriteSpeed(This,value)( (This)->lpVtbl -> get_RequestedWriteSpeed(This,value) )
#define IDiscFormat2RawCD_get_RequestedRotationTypeIsPureCAV(This,value)( (This)->lpVtbl -> get_RequestedRotationTypeIsPureCAV(This,value) )
#define IDiscFormat2RawCD_get_CurrentWriteSpeed(This,value)( (This)->lpVtbl -> get_CurrentWriteSpeed(This,value) )
#define IDiscFormat2RawCD_get_CurrentRotationTypeIsPureCAV(This,value)( (This)->lpVtbl -> get_CurrentRotationTypeIsPureCAV(This,value) )
#define IDiscFormat2RawCD_get_SupportedWriteSpeeds(This,supportedSpeeds)( (This)->lpVtbl -> get_SupportedWriteSpeeds(This,supportedSpeeds) )
#define IDiscFormat2RawCD_get_SupportedWriteSpeedDescriptors(This,supportedSpeedDescriptors)( (This)->lpVtbl -> get_SupportedWriteSpeedDescriptors(This,supportedSpeedDescriptors) )
#endif
#endif
#define DISPID_DDISCFORMAT2RAWCDEVENTS_UPDATE  0x200
extern RPC_IF_HANDLE __MIDL_itf_imapi2_0000_0017_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_imapi2_0000_0017_v0_0_s_ifspec;
#ifndef __DDiscFormat2RawCDEvents_INTERFACE_DEFINED__
#define __DDiscFormat2RawCDEvents_INTERFACE_DEFINED__
extern const IID IID_DDiscFormat2RawCDEvents;
typedef struct DDiscFormat2RawCDEventsVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (DDiscFormat2RawCDEvents * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (DDiscFormat2RawCDEvents * This);
	ULONG(STDMETHODCALLTYPE * Release) (DDiscFormat2RawCDEvents * This);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfoCount) (DDiscFormat2RawCDEvents * This, UINT * pctinfo);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfo) (DDiscFormat2RawCDEvents * This, UINT iTInfo, LCID lcid, ITypeInfo ** ppTInfo);
	HRESULT(STDMETHODCALLTYPE * GetIDsOfNames) (DDiscFormat2RawCDEvents * This, REFIID riid, LPOLESTR * rgszNames, UINT cNames, LCID lcid, DISPID * rgDispId);
	HRESULT(STDMETHODCALLTYPE * Invoke) (DDiscFormat2RawCDEvents * This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS * pDispParams, VARIANT * pVarResult, EXCEPINFO * pExcepInfo, UINT * puArgErr);
	HRESULT(STDMETHODCALLTYPE * Update) (DDiscFormat2RawCDEvents * This, IDispatch * object, IDispatch * progress);
	END_INTERFACE
}  DDiscFormat2RawCDEventsVtbl;
interface DDiscFormat2RawCDEvents
{
	CONST_VTBL struct DDiscFormat2RawCDEventsVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define DDiscFormat2RawCDEvents_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define DDiscFormat2RawCDEvents_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define DDiscFormat2RawCDEvents_Release(This)( (This)->lpVtbl -> Release(This) )
#define DDiscFormat2RawCDEvents_GetTypeInfoCount(This,pctinfo)( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define DDiscFormat2RawCDEvents_GetTypeInfo(This,iTInfo,lcid,ppTInfo)( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define DDiscFormat2RawCDEvents_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define DDiscFormat2RawCDEvents_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define DDiscFormat2RawCDEvents_Update(This,object,progress)( (This)->lpVtbl -> Update(This,object,progress) )
#endif
#endif
#define DISPID_IDISCFORMAT2RAWCDEVENTARGS_CURRENTTRACKNUMBER     0x300
#define DISPID_IDISCFORMAT2RAWCDEVENTARGS_CURRENTACTION          0x301
#define DISPID_IDISCFORMAT2RAWCDEVENTARGS_ELAPSEDTIME            0x300
#define DISPID_IDISCFORMAT2RAWCDEVENTARGS_ESTIMATEDREMAININGTIME 0x301
#define DISPID_IDISCFORMAT2RAWCDEVENTARGS_ESTIMATEDTOTALTIME     0x302
extern RPC_IF_HANDLE __MIDL_itf_imapi2_0000_0018_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_imapi2_0000_0018_v0_0_s_ifspec;
#ifndef __IDiscFormat2RawCDEventArgs_INTERFACE_DEFINED__
#define __IDiscFormat2RawCDEventArgs_INTERFACE_DEFINED__
extern const IID IID_IDiscFormat2RawCDEventArgs;
typedef struct IDiscFormat2RawCDEventArgsVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IDiscFormat2RawCDEventArgs * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IDiscFormat2RawCDEventArgs * This);
	ULONG(STDMETHODCALLTYPE * Release) (IDiscFormat2RawCDEventArgs * This);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfoCount) (IDiscFormat2RawCDEventArgs * This, UINT * pctinfo);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfo) (IDiscFormat2RawCDEventArgs * This, UINT iTInfo, LCID lcid, ITypeInfo ** ppTInfo);
	HRESULT(STDMETHODCALLTYPE * GetIDsOfNames) (IDiscFormat2RawCDEventArgs * This, REFIID riid, LPOLESTR * rgszNames, UINT cNames, LCID lcid, DISPID * rgDispId);
	HRESULT(STDMETHODCALLTYPE * Invoke) (IDiscFormat2RawCDEventArgs * This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS * pDispParams, VARIANT * pVarResult, EXCEPINFO * pExcepInfo, UINT * puArgErr);
	HRESULT(STDMETHODCALLTYPE * get_StartLba) (IDiscFormat2RawCDEventArgs * This, LONG * value);
	HRESULT(STDMETHODCALLTYPE * get_SectorCount) (IDiscFormat2RawCDEventArgs * This, LONG * value);
	HRESULT(STDMETHODCALLTYPE * get_LastReadLba) (IDiscFormat2RawCDEventArgs * This, LONG * value);
	HRESULT(STDMETHODCALLTYPE * get_LastWrittenLba) (IDiscFormat2RawCDEventArgs * This, LONG * value);
	HRESULT(STDMETHODCALLTYPE * get_TotalSystemBuffer) (IDiscFormat2RawCDEventArgs * This, LONG * value);
	HRESULT(STDMETHODCALLTYPE * get_UsedSystemBuffer) (IDiscFormat2RawCDEventArgs * This, LONG * value);
	HRESULT(STDMETHODCALLTYPE * get_FreeSystemBuffer) (IDiscFormat2RawCDEventArgs * This, LONG * value);
	HRESULT(STDMETHODCALLTYPE * get_CurrentAction) (IDiscFormat2RawCDEventArgs * This, IMAPI_FORMAT2_RAW_CD_WRITE_ACTION * value);
	HRESULT(STDMETHODCALLTYPE * get_ElapsedTime) (IDiscFormat2RawCDEventArgs * This, LONG * value);
	HRESULT(STDMETHODCALLTYPE * get_RemainingTime) (IDiscFormat2RawCDEventArgs * This, LONG * value);
	END_INTERFACE
}  IDiscFormat2RawCDEventArgsVtbl;
interface IDiscFormat2RawCDEventArgs
{
	CONST_VTBL struct IDiscFormat2RawCDEventArgsVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IDiscFormat2RawCDEventArgs_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IDiscFormat2RawCDEventArgs_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define IDiscFormat2RawCDEventArgs_Release(This)( (This)->lpVtbl -> Release(This) )
#define IDiscFormat2RawCDEventArgs_GetTypeInfoCount(This,pctinfo)( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define IDiscFormat2RawCDEventArgs_GetTypeInfo(This,iTInfo,lcid,ppTInfo)( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define IDiscFormat2RawCDEventArgs_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define IDiscFormat2RawCDEventArgs_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define IDiscFormat2RawCDEventArgs_get_StartLba(This,value)( (This)->lpVtbl -> get_StartLba(This,value) )
#define IDiscFormat2RawCDEventArgs_get_SectorCount(This,value)( (This)->lpVtbl -> get_SectorCount(This,value) )
#define IDiscFormat2RawCDEventArgs_get_LastReadLba(This,value)( (This)->lpVtbl -> get_LastReadLba(This,value) )
#define IDiscFormat2RawCDEventArgs_get_LastWrittenLba(This,value)( (This)->lpVtbl -> get_LastWrittenLba(This,value) )
#define IDiscFormat2RawCDEventArgs_get_TotalSystemBuffer(This,value)( (This)->lpVtbl -> get_TotalSystemBuffer(This,value) )
#define IDiscFormat2RawCDEventArgs_get_UsedSystemBuffer(This,value)( (This)->lpVtbl -> get_UsedSystemBuffer(This,value) )
#define IDiscFormat2RawCDEventArgs_get_FreeSystemBuffer(This,value)( (This)->lpVtbl -> get_FreeSystemBuffer(This,value) )
#define IDiscFormat2RawCDEventArgs_get_CurrentAction(This,value)( (This)->lpVtbl -> get_CurrentAction(This,value) )
#define IDiscFormat2RawCDEventArgs_get_ElapsedTime(This,value)( (This)->lpVtbl -> get_ElapsedTime(This,value) )
#define IDiscFormat2RawCDEventArgs_get_RemainingTime(This,value)( (This)->lpVtbl -> get_RemainingTime(This,value) )
#endif
#endif
#ifndef __IBurnVerification_INTERFACE_DEFINED__
#define __IBurnVerification_INTERFACE_DEFINED__
extern const IID IID_IBurnVerification;
typedef struct IBurnVerificationVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IBurnVerification * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IBurnVerification * This);
	ULONG(STDMETHODCALLTYPE * Release) (IBurnVerification * This);
	HRESULT(STDMETHODCALLTYPE * put_BurnVerificationLevel) (IBurnVerification * This, IMAPI_BURN_VERIFICATION_LEVEL value);
	HRESULT(STDMETHODCALLTYPE * get_BurnVerificationLevel) (IBurnVerification * This, IMAPI_BURN_VERIFICATION_LEVEL * value);
	END_INTERFACE
}  IBurnVerificationVtbl;
interface IBurnVerification
{
	CONST_VTBL struct IBurnVerificationVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IBurnVerification_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IBurnVerification_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define IBurnVerification_Release(This)( (This)->lpVtbl -> Release(This) )
#define IBurnVerification_put_BurnVerificationLevel(This,value)( (This)->lpVtbl -> put_BurnVerificationLevel(This,value) )
#define IBurnVerification_get_BurnVerificationLevel(This,value)( (This)->lpVtbl -> get_BurnVerificationLevel(This,value) )
#endif
#endif
#define IMAPI_SECTORS_PER_SECOND_AT_1X_CD      75
#define IMAPI_SECTORS_PER_SECOND_AT_1X_DVD     680
#define IMAPI_SECTORS_PER_SECOND_AT_1X_BD      2195
#define IMAPI_SECTORS_PER_SECOND_AT_1X_HD_DVD  4568
extern RPC_IF_HANDLE __MIDL_itf_imapi2_0000_0020_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_imapi2_0000_0020_v0_0_s_ifspec;
#ifndef __IWriteSpeedDescriptor_INTERFACE_DEFINED__
#define __IWriteSpeedDescriptor_INTERFACE_DEFINED__
extern const IID IID_IWriteSpeedDescriptor;
typedef struct IWriteSpeedDescriptorVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IWriteSpeedDescriptor * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IWriteSpeedDescriptor * This);
	ULONG(STDMETHODCALLTYPE * Release) (IWriteSpeedDescriptor * This);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfoCount) (IWriteSpeedDescriptor * This, UINT * pctinfo);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfo) (IWriteSpeedDescriptor * This, UINT iTInfo, LCID lcid, ITypeInfo ** ppTInfo);
	HRESULT(STDMETHODCALLTYPE * GetIDsOfNames) (IWriteSpeedDescriptor * This, REFIID riid, LPOLESTR * rgszNames, UINT cNames, LCID lcid, DISPID * rgDispId);
	HRESULT(STDMETHODCALLTYPE * Invoke) (IWriteSpeedDescriptor * This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS * pDispParams, VARIANT * pVarResult, EXCEPINFO * pExcepInfo, UINT * puArgErr);
	HRESULT(STDMETHODCALLTYPE * get_MediaType) (IWriteSpeedDescriptor * This, IMAPI_MEDIA_PHYSICAL_TYPE * value);
	HRESULT(STDMETHODCALLTYPE * get_RotationTypeIsPureCAV) (IWriteSpeedDescriptor * This, VARIANT_BOOL * value);
	HRESULT(STDMETHODCALLTYPE * get_WriteSpeed) (IWriteSpeedDescriptor * This, LONG * value);
	END_INTERFACE
}  IWriteSpeedDescriptorVtbl;
interface IWriteSpeedDescriptor
{
	CONST_VTBL struct IWriteSpeedDescriptorVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IWriteSpeedDescriptor_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IWriteSpeedDescriptor_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define IWriteSpeedDescriptor_Release(This)( (This)->lpVtbl -> Release(This) )
#define IWriteSpeedDescriptor_GetTypeInfoCount(This,pctinfo)( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define IWriteSpeedDescriptor_GetTypeInfo(This,iTInfo,lcid,ppTInfo)( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define IWriteSpeedDescriptor_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define IWriteSpeedDescriptor_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define IWriteSpeedDescriptor_get_MediaType(This,value)( (This)->lpVtbl -> get_MediaType(This,value) )
#define IWriteSpeedDescriptor_get_RotationTypeIsPureCAV(This,value)( (This)->lpVtbl -> get_RotationTypeIsPureCAV(This,value) )
#define IWriteSpeedDescriptor_get_WriteSpeed(This,value)( (This)->lpVtbl -> get_WriteSpeed(This,value) )
#endif
#endif
#define DISPID_IMULTISESSION_SUPPORTEDONCURRENTMEDIA 0x100
#define DISPID_IMULTISESSION_INUSE                   0x101
#define DISPID_IMULTISESSION_IMPORTRECORDER          0x102
extern RPC_IF_HANDLE __MIDL_itf_imapi2_0000_0021_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_imapi2_0000_0021_v0_0_s_ifspec;
#ifndef __IMultisession_INTERFACE_DEFINED__
#define __IMultisession_INTERFACE_DEFINED__
extern const IID IID_IMultisession;
typedef struct IMultisessionVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IMultisession * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IMultisession * This);
	ULONG(STDMETHODCALLTYPE * Release) (IMultisession * This);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfoCount) (IMultisession * This, UINT * pctinfo);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfo) (IMultisession * This, UINT iTInfo, LCID lcid, ITypeInfo ** ppTInfo);
	HRESULT(STDMETHODCALLTYPE * GetIDsOfNames) (IMultisession * This, REFIID riid, LPOLESTR * rgszNames, UINT cNames, LCID lcid, DISPID * rgDispId);
	HRESULT(STDMETHODCALLTYPE * Invoke) (IMultisession * This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS * pDispParams, VARIANT * pVarResult, EXCEPINFO * pExcepInfo, UINT * puArgErr);
	HRESULT(STDMETHODCALLTYPE * get_IsSupportedOnCurrentMediaState) (IMultisession * This, VARIANT_BOOL * value);
	HRESULT(STDMETHODCALLTYPE * put_InUse) (IMultisession * This, VARIANT_BOOL value);
	HRESULT(STDMETHODCALLTYPE * get_InUse) (IMultisession * This, VARIANT_BOOL * value);
	HRESULT(STDMETHODCALLTYPE * get_ImportRecorder) (IMultisession * This, IDiscRecorder2 ** value);
	END_INTERFACE
}  IMultisessionVtbl;
interface IMultisession
{
	CONST_VTBL struct IMultisessionVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IMultisession_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IMultisession_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define IMultisession_Release(This)( (This)->lpVtbl -> Release(This) )
#define IMultisession_GetTypeInfoCount(This,pctinfo)( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define IMultisession_GetTypeInfo(This,iTInfo,lcid,ppTInfo)( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define IMultisession_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define IMultisession_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define IMultisession_get_IsSupportedOnCurrentMediaState(This,value)( (This)->lpVtbl -> get_IsSupportedOnCurrentMediaState(This,value) )
#define IMultisession_put_InUse(This,value)( (This)->lpVtbl -> put_InUse(This,value) )
#define IMultisession_get_InUse(This,value)( (This)->lpVtbl -> get_InUse(This,value) )
#define IMultisession_get_ImportRecorder(This,value)( (This)->lpVtbl -> get_ImportRecorder(This,value) )
#endif
#endif
#define DISPID_IMULTISESSION_FIRSTDATASESSION             0x200
#define DISPID_IMULTISESSION_STARTSECTOROFPREVIOUSSESSION 0x201
#define DISPID_IMULTISESSION_LASTSECTOROFPREVIOUSSESSION  0x202
#define DISPID_IMULTISESSION_NEXTWRITABLEADDRESS          0x203
#define DISPID_IMULTISESSION_FREESECTORS                  0x204
#define DISPID_IMULTISESSION_WRITEUNITSIZE                0x205
extern RPC_IF_HANDLE __MIDL_itf_imapi2_0000_0022_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_imapi2_0000_0022_v0_0_s_ifspec;
#ifndef __IMultisessionSequential_INTERFACE_DEFINED__
#define __IMultisessionSequential_INTERFACE_DEFINED__
extern const IID IID_IMultisessionSequential;
typedef struct IMultisessionSequentialVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IMultisessionSequential * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IMultisessionSequential * This);
	ULONG(STDMETHODCALLTYPE * Release) (IMultisessionSequential * This);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfoCount) (IMultisessionSequential * This, UINT * pctinfo);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfo) (IMultisessionSequential * This, UINT iTInfo, LCID lcid, ITypeInfo ** ppTInfo);
	HRESULT(STDMETHODCALLTYPE * GetIDsOfNames) (IMultisessionSequential * This, REFIID riid, LPOLESTR * rgszNames, UINT cNames, LCID lcid, DISPID * rgDispId);
	HRESULT(STDMETHODCALLTYPE * Invoke) (IMultisessionSequential * This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS * pDispParams, VARIANT * pVarResult, EXCEPINFO * pExcepInfo, UINT * puArgErr);
	HRESULT(STDMETHODCALLTYPE * get_IsSupportedOnCurrentMediaState) (IMultisessionSequential * This, VARIANT_BOOL * value);
	HRESULT(STDMETHODCALLTYPE * put_InUse) (IMultisessionSequential * This, VARIANT_BOOL value);
	HRESULT(STDMETHODCALLTYPE * get_InUse) (IMultisessionSequential * This, VARIANT_BOOL * value);
	HRESULT(STDMETHODCALLTYPE * get_ImportRecorder) (IMultisessionSequential * This, IDiscRecorder2 ** value);
	HRESULT(STDMETHODCALLTYPE * get_IsFirstDataSession) (IMultisessionSequential * This, VARIANT_BOOL * value);
	HRESULT(STDMETHODCALLTYPE * get_StartAddressOfPreviousSession) (IMultisessionSequential * This, LONG * value);
	HRESULT(STDMETHODCALLTYPE * get_LastWrittenAddressOfPreviousSession) (IMultisessionSequential * This, LONG * value);
	HRESULT(STDMETHODCALLTYPE * get_NextWritableAddress) (IMultisessionSequential * This, LONG * value);
	HRESULT(STDMETHODCALLTYPE * get_FreeSectorsOnMedia) (IMultisessionSequential * This, LONG * value);
	END_INTERFACE
}  IMultisessionSequentialVtbl;
interface IMultisessionSequential
{
	CONST_VTBL struct IMultisessionSequentialVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IMultisessionSequential_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IMultisessionSequential_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define IMultisessionSequential_Release(This)( (This)->lpVtbl -> Release(This) )
#define IMultisessionSequential_GetTypeInfoCount(This,pctinfo)( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define IMultisessionSequential_GetTypeInfo(This,iTInfo,lcid,ppTInfo)( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define IMultisessionSequential_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define IMultisessionSequential_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define IMultisessionSequential_get_IsSupportedOnCurrentMediaState(This,value)( (This)->lpVtbl -> get_IsSupportedOnCurrentMediaState(This,value) )
#define IMultisessionSequential_put_InUse(This,value)( (This)->lpVtbl -> put_InUse(This,value) )
#define IMultisessionSequential_get_InUse(This,value)( (This)->lpVtbl -> get_InUse(This,value) )
#define IMultisessionSequential_get_ImportRecorder(This,value)( (This)->lpVtbl -> get_ImportRecorder(This,value) )
#define IMultisessionSequential_get_IsFirstDataSession(This,value)( (This)->lpVtbl -> get_IsFirstDataSession(This,value) )
#define IMultisessionSequential_get_StartAddressOfPreviousSession(This,value)( (This)->lpVtbl -> get_StartAddressOfPreviousSession(This,value) )
#define IMultisessionSequential_get_LastWrittenAddressOfPreviousSession(This,value)( (This)->lpVtbl -> get_LastWrittenAddressOfPreviousSession(This,value) )
#define IMultisessionSequential_get_NextWritableAddress(This,value)( (This)->lpVtbl -> get_NextWritableAddress(This,value) )
#define IMultisessionSequential_get_FreeSectorsOnMedia(This,value)( (This)->lpVtbl -> get_FreeSectorsOnMedia(This,value) )
#endif
#endif
#ifndef __IMultisessionSequential2_INTERFACE_DEFINED__
#define __IMultisessionSequential2_INTERFACE_DEFINED__
extern const IID IID_IMultisessionSequential2;
typedef struct IMultisessionSequential2Vtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IMultisessionSequential2 * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IMultisessionSequential2 * This);
	ULONG(STDMETHODCALLTYPE * Release) (IMultisessionSequential2 * This);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfoCount) (IMultisessionSequential2 * This, UINT * pctinfo);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfo) (IMultisessionSequential2 * This, UINT iTInfo, LCID lcid, ITypeInfo ** ppTInfo);
	HRESULT(STDMETHODCALLTYPE * GetIDsOfNames) (IMultisessionSequential2 * This, REFIID riid, LPOLESTR * rgszNames, UINT cNames, LCID lcid, DISPID * rgDispId);
	HRESULT(STDMETHODCALLTYPE * Invoke) (IMultisessionSequential2 * This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS * pDispParams, VARIANT * pVarResult, EXCEPINFO * pExcepInfo, UINT * puArgErr);
	HRESULT(STDMETHODCALLTYPE * get_IsSupportedOnCurrentMediaState) (IMultisessionSequential2 * This, VARIANT_BOOL * value);
	HRESULT(STDMETHODCALLTYPE * put_InUse) (IMultisessionSequential2 * This, VARIANT_BOOL value);
	HRESULT(STDMETHODCALLTYPE * get_InUse) (IMultisessionSequential2 * This, VARIANT_BOOL * value);
	HRESULT(STDMETHODCALLTYPE * get_ImportRecorder) (IMultisessionSequential2 * This, IDiscRecorder2 ** value);
	HRESULT(STDMETHODCALLTYPE * get_IsFirstDataSession) (IMultisessionSequential2 * This, VARIANT_BOOL * value);
	HRESULT(STDMETHODCALLTYPE * get_StartAddressOfPreviousSession) (IMultisessionSequential2 * This, LONG * value);
	HRESULT(STDMETHODCALLTYPE * get_LastWrittenAddressOfPreviousSession) (IMultisessionSequential2 * This, LONG * value);
	HRESULT(STDMETHODCALLTYPE * get_NextWritableAddress) (IMultisessionSequential2 * This, LONG * value);
	HRESULT(STDMETHODCALLTYPE * get_FreeSectorsOnMedia) (IMultisessionSequential2 * This, LONG * value);
	HRESULT(STDMETHODCALLTYPE * get_WriteUnitSize) (IMultisessionSequential2 * This, LONG * value);
	END_INTERFACE
}  IMultisessionSequential2Vtbl;
interface IMultisessionSequential2
{
	CONST_VTBL struct IMultisessionSequential2Vtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IMultisessionSequential2_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IMultisessionSequential2_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define IMultisessionSequential2_Release(This)( (This)->lpVtbl -> Release(This) )
#define IMultisessionSequential2_GetTypeInfoCount(This,pctinfo)( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define IMultisessionSequential2_GetTypeInfo(This,iTInfo,lcid,ppTInfo)( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define IMultisessionSequential2_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define IMultisessionSequential2_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define IMultisessionSequential2_get_IsSupportedOnCurrentMediaState(This,value)( (This)->lpVtbl -> get_IsSupportedOnCurrentMediaState(This,value) )
#define IMultisessionSequential2_put_InUse(This,value)( (This)->lpVtbl -> put_InUse(This,value) )
#define IMultisessionSequential2_get_InUse(This,value)( (This)->lpVtbl -> get_InUse(This,value) )
#define IMultisessionSequential2_get_ImportRecorder(This,value)( (This)->lpVtbl -> get_ImportRecorder(This,value) )
#define IMultisessionSequential2_get_IsFirstDataSession(This,value)( (This)->lpVtbl -> get_IsFirstDataSession(This,value) )
#define IMultisessionSequential2_get_StartAddressOfPreviousSession(This,value)( (This)->lpVtbl -> get_StartAddressOfPreviousSession(This,value) )
#define IMultisessionSequential2_get_LastWrittenAddressOfPreviousSession(This,value)( (This)->lpVtbl -> get_LastWrittenAddressOfPreviousSession(This,value) )
#define IMultisessionSequential2_get_NextWritableAddress(This,value)( (This)->lpVtbl -> get_NextWritableAddress(This,value) )
#define IMultisessionSequential2_get_FreeSectorsOnMedia(This,value)( (This)->lpVtbl -> get_FreeSectorsOnMedia(This,value) )
#define IMultisessionSequential2_get_WriteUnitSize(This,value)( (This)->lpVtbl -> get_WriteUnitSize(This,value) )
#endif
#endif
#define DISPID_IMULTISESSION_LASTWRITTENADDRESS           0x206
#define DISPID_IMULTISESSION_SECTORSONMEDIA               0x207
extern RPC_IF_HANDLE __MIDL_itf_imapi2_0000_0024_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_imapi2_0000_0024_v0_0_s_ifspec;
#ifndef __IMultisessionRandomWrite_INTERFACE_DEFINED__
#define __IMultisessionRandomWrite_INTERFACE_DEFINED__
extern const IID IID_IMultisessionRandomWrite;
typedef struct IMultisessionRandomWriteVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IMultisessionRandomWrite * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IMultisessionRandomWrite * This);
	ULONG(STDMETHODCALLTYPE * Release) (IMultisessionRandomWrite * This);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfoCount) (IMultisessionRandomWrite * This, UINT * pctinfo);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfo) (IMultisessionRandomWrite * This, UINT iTInfo, LCID lcid, ITypeInfo ** ppTInfo);
	HRESULT(STDMETHODCALLTYPE * GetIDsOfNames) (IMultisessionRandomWrite * This, REFIID riid, LPOLESTR * rgszNames, UINT cNames, LCID lcid, DISPID * rgDispId);
	HRESULT(STDMETHODCALLTYPE * Invoke) (IMultisessionRandomWrite * This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS * pDispParams, VARIANT * pVarResult, EXCEPINFO * pExcepInfo, UINT * puArgErr);
	HRESULT(STDMETHODCALLTYPE * get_IsSupportedOnCurrentMediaState) (IMultisessionRandomWrite * This, VARIANT_BOOL * value);
	HRESULT(STDMETHODCALLTYPE * put_InUse) (IMultisessionRandomWrite * This, VARIANT_BOOL value);
	HRESULT(STDMETHODCALLTYPE * get_InUse) (IMultisessionRandomWrite * This, VARIANT_BOOL * value);
	HRESULT(STDMETHODCALLTYPE * get_ImportRecorder) (IMultisessionRandomWrite * This, IDiscRecorder2 ** value);
	HRESULT(STDMETHODCALLTYPE * get_WriteUnitSize) (IMultisessionRandomWrite * This, LONG * value);
	HRESULT(STDMETHODCALLTYPE * get_LastWrittenAddress) (IMultisessionRandomWrite * This, LONG * value);
	HRESULT(STDMETHODCALLTYPE * get_TotalSectorsOnMedia) (IMultisessionRandomWrite * This, LONG * value);
	END_INTERFACE
}  IMultisessionRandomWriteVtbl;
interface IMultisessionRandomWrite
{
	CONST_VTBL struct IMultisessionRandomWriteVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IMultisessionRandomWrite_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IMultisessionRandomWrite_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define IMultisessionRandomWrite_Release(This)( (This)->lpVtbl -> Release(This) )
#define IMultisessionRandomWrite_GetTypeInfoCount(This,pctinfo)( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define IMultisessionRandomWrite_GetTypeInfo(This,iTInfo,lcid,ppTInfo)( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define IMultisessionRandomWrite_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define IMultisessionRandomWrite_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define IMultisessionRandomWrite_get_IsSupportedOnCurrentMediaState(This,value)( (This)->lpVtbl -> get_IsSupportedOnCurrentMediaState(This,value) )
#define IMultisessionRandomWrite_put_InUse(This,value)( (This)->lpVtbl -> put_InUse(This,value) )
#define IMultisessionRandomWrite_get_InUse(This,value)( (This)->lpVtbl -> get_InUse(This,value) )
#define IMultisessionRandomWrite_get_ImportRecorder(This,value)( (This)->lpVtbl -> get_ImportRecorder(This,value) )
#define IMultisessionRandomWrite_get_WriteUnitSize(This,value)( (This)->lpVtbl -> get_WriteUnitSize(This,value) )
#define IMultisessionRandomWrite_get_LastWrittenAddress(This,value)( (This)->lpVtbl -> get_LastWrittenAddress(This,value) )
#define IMultisessionRandomWrite_get_TotalSectorsOnMedia(This,value)( (This)->lpVtbl -> get_TotalSectorsOnMedia(This,value) )
#endif
#endif
#ifndef __IStreamPseudoRandomBased_INTERFACE_DEFINED__
#define __IStreamPseudoRandomBased_INTERFACE_DEFINED__
extern const IID IID_IStreamPseudoRandomBased;
typedef struct IStreamPseudoRandomBasedVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IStreamPseudoRandomBased * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IStreamPseudoRandomBased * This);
	ULONG(STDMETHODCALLTYPE * Release) (IStreamPseudoRandomBased * This);
	HRESULT(STDMETHODCALLTYPE * Read) (IStreamPseudoRandomBased * This, void *pv, ULONG cb, ULONG * pcbRead);
	HRESULT(STDMETHODCALLTYPE * Write) (IStreamPseudoRandomBased * This, const void *pv, ULONG cb, ULONG * pcbWritten);
	HRESULT(STDMETHODCALLTYPE * Seek) (IStreamPseudoRandomBased * This, LARGE_INTEGER dlibMove, DWORD dwOrigin, ULARGE_INTEGER * plibNewPosition);
	HRESULT(STDMETHODCALLTYPE * SetSize) (IStreamPseudoRandomBased * This, ULARGE_INTEGER libNewSize);
	HRESULT(STDMETHODCALLTYPE * CopyTo) (IStreamPseudoRandomBased * This, IStream * pstm, ULARGE_INTEGER cb, ULARGE_INTEGER * pcbRead, ULARGE_INTEGER * pcbWritten);
	HRESULT(STDMETHODCALLTYPE * Commit) (IStreamPseudoRandomBased * This, DWORD grfCommitFlags);
	HRESULT(STDMETHODCALLTYPE * Revert) (IStreamPseudoRandomBased * This);
	HRESULT(STDMETHODCALLTYPE * LockRegion) (IStreamPseudoRandomBased * This, ULARGE_INTEGER libOffset, ULARGE_INTEGER cb, DWORD dwLockType);
	HRESULT(STDMETHODCALLTYPE * UnlockRegion) (IStreamPseudoRandomBased * This, ULARGE_INTEGER libOffset, ULARGE_INTEGER cb, DWORD dwLockType);
	HRESULT(STDMETHODCALLTYPE * Stat) (IStreamPseudoRandomBased * This, STATSTG * pstatstg, DWORD grfStatFlag);
	HRESULT(STDMETHODCALLTYPE * Clone) (IStreamPseudoRandomBased * This, IStream ** ppstm);
	HRESULT(STDMETHODCALLTYPE * put_Seed) (IStreamPseudoRandomBased * This, ULONG value);
	HRESULT(STDMETHODCALLTYPE * get_Seed) (IStreamPseudoRandomBased * This, ULONG * value);
	HRESULT(STDMETHODCALLTYPE * put_ExtendedSeed) (IStreamPseudoRandomBased * This, ULONG * values, ULONG eCount);
	HRESULT(STDMETHODCALLTYPE * get_ExtendedSeed) (IStreamPseudoRandomBased * This, ULONG ** values, ULONG * eCount);
	END_INTERFACE
}  IStreamPseudoRandomBasedVtbl;
interface IStreamPseudoRandomBased
{
	CONST_VTBL struct IStreamPseudoRandomBasedVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IStreamPseudoRandomBased_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IStreamPseudoRandomBased_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define IStreamPseudoRandomBased_Release(This)( (This)->lpVtbl -> Release(This) )
#define IStreamPseudoRandomBased_Read(This,pv,cb,pcbRead)( (This)->lpVtbl -> Read(This,pv,cb,pcbRead) )
#define IStreamPseudoRandomBased_Write(This,pv,cb,pcbWritten)( (This)->lpVtbl -> Write(This,pv,cb,pcbWritten) )
#define IStreamPseudoRandomBased_Seek(This,dlibMove,dwOrigin,plibNewPosition)( (This)->lpVtbl -> Seek(This,dlibMove,dwOrigin,plibNewPosition) )
#define IStreamPseudoRandomBased_SetSize(This,libNewSize)( (This)->lpVtbl -> SetSize(This,libNewSize) )
#define IStreamPseudoRandomBased_CopyTo(This,pstm,cb,pcbRead,pcbWritten)( (This)->lpVtbl -> CopyTo(This,pstm,cb,pcbRead,pcbWritten) )
#define IStreamPseudoRandomBased_Commit(This,grfCommitFlags)( (This)->lpVtbl -> Commit(This,grfCommitFlags) )
#define IStreamPseudoRandomBased_Revert(This)( (This)->lpVtbl -> Revert(This) )
#define IStreamPseudoRandomBased_LockRegion(This,libOffset,cb,dwLockType)( (This)->lpVtbl -> LockRegion(This,libOffset,cb,dwLockType) )
#define IStreamPseudoRandomBased_UnlockRegion(This,libOffset,cb,dwLockType)( (This)->lpVtbl -> UnlockRegion(This,libOffset,cb,dwLockType) )
#define IStreamPseudoRandomBased_Stat(This,pstatstg,grfStatFlag)( (This)->lpVtbl -> Stat(This,pstatstg,grfStatFlag) )
#define IStreamPseudoRandomBased_Clone(This,ppstm)( (This)->lpVtbl -> Clone(This,ppstm) )
#define IStreamPseudoRandomBased_put_Seed(This,value)( (This)->lpVtbl -> put_Seed(This,value) )
#define IStreamPseudoRandomBased_get_Seed(This,value)( (This)->lpVtbl -> get_Seed(This,value) )
#define IStreamPseudoRandomBased_put_ExtendedSeed(This,values,eCount)( (This)->lpVtbl -> put_ExtendedSeed(This,values,eCount) )
#define IStreamPseudoRandomBased_get_ExtendedSeed(This,values,eCount)( (This)->lpVtbl -> get_ExtendedSeed(This,values,eCount) )
#endif
#endif
#ifndef __IStreamConcatenate_INTERFACE_DEFINED__
#define __IStreamConcatenate_INTERFACE_DEFINED__
extern const IID IID_IStreamConcatenate;
typedef struct IStreamConcatenateVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IStreamConcatenate * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IStreamConcatenate * This);
	ULONG(STDMETHODCALLTYPE * Release) (IStreamConcatenate * This);
	HRESULT(STDMETHODCALLTYPE * Read) (IStreamConcatenate * This, void *pv, ULONG cb, ULONG * pcbRead);
	HRESULT(STDMETHODCALLTYPE * Write) (IStreamConcatenate * This, const void *pv, ULONG cb, ULONG * pcbWritten);
	HRESULT(STDMETHODCALLTYPE * Seek) (IStreamConcatenate * This, LARGE_INTEGER dlibMove, DWORD dwOrigin, ULARGE_INTEGER * plibNewPosition);
	HRESULT(STDMETHODCALLTYPE * SetSize) (IStreamConcatenate * This, ULARGE_INTEGER libNewSize);
	HRESULT(STDMETHODCALLTYPE * CopyTo) (IStreamConcatenate * This, IStream * pstm, ULARGE_INTEGER cb, ULARGE_INTEGER * pcbRead, ULARGE_INTEGER * pcbWritten);
	HRESULT(STDMETHODCALLTYPE * Commit) (IStreamConcatenate * This, DWORD grfCommitFlags);
	HRESULT(STDMETHODCALLTYPE * Revert) (IStreamConcatenate * This);
	HRESULT(STDMETHODCALLTYPE * LockRegion) (IStreamConcatenate * This, ULARGE_INTEGER libOffset, ULARGE_INTEGER cb, DWORD dwLockType);
	HRESULT(STDMETHODCALLTYPE * UnlockRegion) (IStreamConcatenate * This, ULARGE_INTEGER libOffset, ULARGE_INTEGER cb, DWORD dwLockType);
	HRESULT(STDMETHODCALLTYPE * Stat) (IStreamConcatenate * This, STATSTG * pstatstg, DWORD grfStatFlag);
	HRESULT(STDMETHODCALLTYPE * Clone) (IStreamConcatenate * This, IStream ** ppstm);
	HRESULT(STDMETHODCALLTYPE * Initialize) (IStreamConcatenate * This, IStream * stream1, IStream * stream2);
	HRESULT(STDMETHODCALLTYPE * Initialize2) (IStreamConcatenate * This, IStream ** streams, ULONG streamCount);
	HRESULT(STDMETHODCALLTYPE * Append) (IStreamConcatenate * This, IStream * stream);
	HRESULT(STDMETHODCALLTYPE * Append2) (IStreamConcatenate * This, IStream ** streams, ULONG streamCount);
	END_INTERFACE
}  IStreamConcatenateVtbl;
interface IStreamConcatenate
{
	CONST_VTBL struct IStreamConcatenateVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IStreamConcatenate_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IStreamConcatenate_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define IStreamConcatenate_Release(This)( (This)->lpVtbl -> Release(This) )
#define IStreamConcatenate_Read(This,pv,cb,pcbRead)( (This)->lpVtbl -> Read(This,pv,cb,pcbRead) )
#define IStreamConcatenate_Write(This,pv,cb,pcbWritten)( (This)->lpVtbl -> Write(This,pv,cb,pcbWritten) )
#define IStreamConcatenate_Seek(This,dlibMove,dwOrigin,plibNewPosition)( (This)->lpVtbl -> Seek(This,dlibMove,dwOrigin,plibNewPosition) )
#define IStreamConcatenate_SetSize(This,libNewSize)( (This)->lpVtbl -> SetSize(This,libNewSize) )
#define IStreamConcatenate_CopyTo(This,pstm,cb,pcbRead,pcbWritten)( (This)->lpVtbl -> CopyTo(This,pstm,cb,pcbRead,pcbWritten) )
#define IStreamConcatenate_Commit(This,grfCommitFlags)( (This)->lpVtbl -> Commit(This,grfCommitFlags) )
#define IStreamConcatenate_Revert(This)( (This)->lpVtbl -> Revert(This) )
#define IStreamConcatenate_LockRegion(This,libOffset,cb,dwLockType)( (This)->lpVtbl -> LockRegion(This,libOffset,cb,dwLockType) )
#define IStreamConcatenate_UnlockRegion(This,libOffset,cb,dwLockType)( (This)->lpVtbl -> UnlockRegion(This,libOffset,cb,dwLockType) )
#define IStreamConcatenate_Stat(This,pstatstg,grfStatFlag)( (This)->lpVtbl -> Stat(This,pstatstg,grfStatFlag) )
#define IStreamConcatenate_Clone(This,ppstm)( (This)->lpVtbl -> Clone(This,ppstm) )
#define IStreamConcatenate_Initialize(This,stream1,stream2)( (This)->lpVtbl -> Initialize(This,stream1,stream2) )
#define IStreamConcatenate_Initialize2(This,streams,streamCount)( (This)->lpVtbl -> Initialize2(This,streams,streamCount) )
#define IStreamConcatenate_Append(This,stream)( (This)->lpVtbl -> Append(This,stream) )
#define IStreamConcatenate_Append2(This,streams,streamCount)( (This)->lpVtbl -> Append2(This,streams,streamCount) )
#endif
#endif
#ifndef __IStreamInterleave_INTERFACE_DEFINED__
#define __IStreamInterleave_INTERFACE_DEFINED__
extern const IID IID_IStreamInterleave;
typedef struct IStreamInterleaveVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IStreamInterleave * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IStreamInterleave * This);
	ULONG(STDMETHODCALLTYPE * Release) (IStreamInterleave * This);
	HRESULT(STDMETHODCALLTYPE * Read) (IStreamInterleave * This, void *pv, ULONG cb, ULONG * pcbRead);
	HRESULT(STDMETHODCALLTYPE * Write) (IStreamInterleave * This, const void *pv, ULONG cb, ULONG * pcbWritten);
	HRESULT(STDMETHODCALLTYPE * Seek) (IStreamInterleave * This, LARGE_INTEGER dlibMove, DWORD dwOrigin, ULARGE_INTEGER * plibNewPosition);
	HRESULT(STDMETHODCALLTYPE * SetSize) (IStreamInterleave * This, ULARGE_INTEGER libNewSize);
	HRESULT(STDMETHODCALLTYPE * CopyTo) (IStreamInterleave * This, IStream * pstm, ULARGE_INTEGER cb, ULARGE_INTEGER * pcbRead, ULARGE_INTEGER * pcbWritten);
	HRESULT(STDMETHODCALLTYPE * Commit) (IStreamInterleave * This, DWORD grfCommitFlags);
	HRESULT(STDMETHODCALLTYPE * Revert) (IStreamInterleave * This);
	HRESULT(STDMETHODCALLTYPE * LockRegion) (IStreamInterleave * This, ULARGE_INTEGER libOffset, ULARGE_INTEGER cb, DWORD dwLockType);
	HRESULT(STDMETHODCALLTYPE * UnlockRegion) (IStreamInterleave * This, ULARGE_INTEGER libOffset, ULARGE_INTEGER cb, DWORD dwLockType);
	HRESULT(STDMETHODCALLTYPE * Stat) (IStreamInterleave * This, STATSTG * pstatstg, DWORD grfStatFlag);
	HRESULT(STDMETHODCALLTYPE * Clone) (IStreamInterleave * This, IStream ** ppstm);
	HRESULT(STDMETHODCALLTYPE * Initialize) (IStreamInterleave * This, IStream ** streams, ULONG * interleaveSizes, ULONG streamCount);
	END_INTERFACE
}  IStreamInterleaveVtbl;
interface IStreamInterleave
{
	CONST_VTBL struct IStreamInterleaveVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IStreamInterleave_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IStreamInterleave_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define IStreamInterleave_Release(This)( (This)->lpVtbl -> Release(This) )
#define IStreamInterleave_Read(This,pv,cb,pcbRead)( (This)->lpVtbl -> Read(This,pv,cb,pcbRead) )
#define IStreamInterleave_Write(This,pv,cb,pcbWritten)( (This)->lpVtbl -> Write(This,pv,cb,pcbWritten) )
#define IStreamInterleave_Seek(This,dlibMove,dwOrigin,plibNewPosition)( (This)->lpVtbl -> Seek(This,dlibMove,dwOrigin,plibNewPosition) )
#define IStreamInterleave_SetSize(This,libNewSize)( (This)->lpVtbl -> SetSize(This,libNewSize) )
#define IStreamInterleave_CopyTo(This,pstm,cb,pcbRead,pcbWritten)( (This)->lpVtbl -> CopyTo(This,pstm,cb,pcbRead,pcbWritten) )
#define IStreamInterleave_Commit(This,grfCommitFlags)( (This)->lpVtbl -> Commit(This,grfCommitFlags) )
#define IStreamInterleave_Revert(This)( (This)->lpVtbl -> Revert(This) )
#define IStreamInterleave_LockRegion(This,libOffset,cb,dwLockType)( (This)->lpVtbl -> LockRegion(This,libOffset,cb,dwLockType) )
#define IStreamInterleave_UnlockRegion(This,libOffset,cb,dwLockType)( (This)->lpVtbl -> UnlockRegion(This,libOffset,cb,dwLockType) )
#define IStreamInterleave_Stat(This,pstatstg,grfStatFlag)( (This)->lpVtbl -> Stat(This,pstatstg,grfStatFlag) )
#define IStreamInterleave_Clone(This,ppstm)( (This)->lpVtbl -> Clone(This,ppstm) )
#define IStreamInterleave_Initialize(This,streams,interleaveSizes,streamCount)( (This)->lpVtbl -> Initialize(This,streams,interleaveSizes,streamCount) )
#endif
#endif
#define DISPID_IRAWCDIMAGECREATOR_CREATERESULTIMAGE        0x200
#define DISPID_IRAWCDIMAGECREATOR_ADDTRACK                 0x201
#define DISPID_IRAWCDIMAGECREATOR_ADDSPECIALPREGAP         0x202
#define DISPID_IRAWCDIMAGECREATOR_ADDSUBCODERWGENERATOR    0x203
#define DISPID_IRAWCDIMAGECREATOR_RESULTINGIMAGETYPE       0x100
#define DISPID_IRAWCDIMAGECREATOR_STARTOFLEADOUT           0x101
#define DISPID_IRAWCDIMAGECREATOR_STARTOFLEADOUTLIMIT      0x102
#define DISPID_IRAWCDIMAGECREATOR_DISABLEGAPLESSAUDIO      0x103
#define DISPID_IRAWCDIMAGECREATOR_MEDIACATALOGNUMBER       0x104
#define DISPID_IRAWCDIMAGECREATOR_STARTINGTRACKNUMBER      0x105
#define DISPID_IRAWCDIMAGECREATOR_TRACKINFO                0x106
#define DISPID_IRAWCDIMAGECREATOR_NUMBEROFEXISTINGTRACKS   0x107
#define DISPID_IRAWCDIMAGECREATOR_USEDSECTORSONDISC        0x108
#define DISPID_IRAWCDIMAGECREATOR_EXPECTEDTABLEOFCONTENTS  0x109
extern RPC_IF_HANDLE __MIDL_itf_imapi2_0000_0028_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_imapi2_0000_0028_v0_0_s_ifspec;
#ifndef __IRawCDImageCreator_INTERFACE_DEFINED__
#define __IRawCDImageCreator_INTERFACE_DEFINED__
extern const IID IID_IRawCDImageCreator;
typedef struct IRawCDImageCreatorVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IRawCDImageCreator * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IRawCDImageCreator * This);
	ULONG(STDMETHODCALLTYPE * Release) (IRawCDImageCreator * This);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfoCount) (IRawCDImageCreator * This, UINT * pctinfo);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfo) (IRawCDImageCreator * This, UINT iTInfo, LCID lcid, ITypeInfo ** ppTInfo);
	HRESULT(STDMETHODCALLTYPE * GetIDsOfNames) (IRawCDImageCreator * This, REFIID riid, LPOLESTR * rgszNames, UINT cNames, LCID lcid, DISPID * rgDispId);
	HRESULT(STDMETHODCALLTYPE * Invoke) (IRawCDImageCreator * This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS * pDispParams, VARIANT * pVarResult, EXCEPINFO * pExcepInfo, UINT * puArgErr);
	HRESULT(STDMETHODCALLTYPE * CreateResultImage) (IRawCDImageCreator * This, IStream ** resultStream);
	HRESULT(STDMETHODCALLTYPE * AddTrack) (IRawCDImageCreator * This, IMAPI_CD_SECTOR_TYPE dataType, IStream * data, LONG * trackIndex);
	HRESULT(STDMETHODCALLTYPE * AddSpecialPregap) (IRawCDImageCreator * This, IStream * data);
	HRESULT(STDMETHODCALLTYPE * AddSubcodeRWGenerator) (IRawCDImageCreator * This, IStream * subcode);
	HRESULT(STDMETHODCALLTYPE * put_ResultingImageType) (IRawCDImageCreator * This, IMAPI_FORMAT2_RAW_CD_DATA_SECTOR_TYPE value);
	HRESULT(STDMETHODCALLTYPE * get_ResultingImageType) (IRawCDImageCreator * This, IMAPI_FORMAT2_RAW_CD_DATA_SECTOR_TYPE * value);
	HRESULT(STDMETHODCALLTYPE * get_StartOfLeadout) (IRawCDImageCreator * This, LONG * value);
	HRESULT(STDMETHODCALLTYPE * put_StartOfLeadoutLimit) (IRawCDImageCreator * This, LONG value);
	HRESULT(STDMETHODCALLTYPE * get_StartOfLeadoutLimit) (IRawCDImageCreator * This, LONG * value);
	HRESULT(STDMETHODCALLTYPE * put_DisableGaplessAudio) (IRawCDImageCreator * This, VARIANT_BOOL value);
	HRESULT(STDMETHODCALLTYPE * get_DisableGaplessAudio) (IRawCDImageCreator * This, VARIANT_BOOL * value);
	HRESULT(STDMETHODCALLTYPE * put_MediaCatalogNumber) (IRawCDImageCreator * This, BSTR value);
	HRESULT(STDMETHODCALLTYPE * get_MediaCatalogNumber) (IRawCDImageCreator * This, BSTR * value);
	HRESULT(STDMETHODCALLTYPE * put_StartingTrackNumber) (IRawCDImageCreator * This, LONG value);
	HRESULT(STDMETHODCALLTYPE * get_StartingTrackNumber) (IRawCDImageCreator * This, LONG * value);
	HRESULT(STDMETHODCALLTYPE * get_TrackInfo) (IRawCDImageCreator * This, LONG trackIndex, IRawCDImageTrackInfo ** value);
	HRESULT(STDMETHODCALLTYPE * get_NumberOfExistingTracks) (IRawCDImageCreator * This, LONG * value);
	HRESULT(STDMETHODCALLTYPE * get_LastUsedUserSectorInImage) (IRawCDImageCreator * This, LONG * value);
	HRESULT(STDMETHODCALLTYPE * get_ExpectedTableOfContents) (IRawCDImageCreator * This, SAFEARRAY * *value);
	END_INTERFACE
}  IRawCDImageCreatorVtbl;
interface IRawCDImageCreator
{
	CONST_VTBL struct IRawCDImageCreatorVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IRawCDImageCreator_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IRawCDImageCreator_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define IRawCDImageCreator_Release(This)( (This)->lpVtbl -> Release(This) )
#define IRawCDImageCreator_GetTypeInfoCount(This,pctinfo)( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define IRawCDImageCreator_GetTypeInfo(This,iTInfo,lcid,ppTInfo)( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define IRawCDImageCreator_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define IRawCDImageCreator_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define IRawCDImageCreator_CreateResultImage(This,resultStream)( (This)->lpVtbl -> CreateResultImage(This,resultStream) )
#define IRawCDImageCreator_AddTrack(This,dataType,data,trackIndex)( (This)->lpVtbl -> AddTrack(This,dataType,data,trackIndex) )
#define IRawCDImageCreator_AddSpecialPregap(This,data)( (This)->lpVtbl -> AddSpecialPregap(This,data) )
#define IRawCDImageCreator_AddSubcodeRWGenerator(This,subcode)( (This)->lpVtbl -> AddSubcodeRWGenerator(This,subcode) )
#define IRawCDImageCreator_put_ResultingImageType(This,value)( (This)->lpVtbl -> put_ResultingImageType(This,value) )
#define IRawCDImageCreator_get_ResultingImageType(This,value)( (This)->lpVtbl -> get_ResultingImageType(This,value) )
#define IRawCDImageCreator_get_StartOfLeadout(This,value)( (This)->lpVtbl -> get_StartOfLeadout(This,value) )
#define IRawCDImageCreator_put_StartOfLeadoutLimit(This,value)( (This)->lpVtbl -> put_StartOfLeadoutLimit(This,value) )
#define IRawCDImageCreator_get_StartOfLeadoutLimit(This,value)( (This)->lpVtbl -> get_StartOfLeadoutLimit(This,value) )
#define IRawCDImageCreator_put_DisableGaplessAudio(This,value)( (This)->lpVtbl -> put_DisableGaplessAudio(This,value) )
#define IRawCDImageCreator_get_DisableGaplessAudio(This,value)( (This)->lpVtbl -> get_DisableGaplessAudio(This,value) )
#define IRawCDImageCreator_put_MediaCatalogNumber(This,value)( (This)->lpVtbl -> put_MediaCatalogNumber(This,value) )
#define IRawCDImageCreator_get_MediaCatalogNumber(This,value)( (This)->lpVtbl -> get_MediaCatalogNumber(This,value) )
#define IRawCDImageCreator_put_StartingTrackNumber(This,value)( (This)->lpVtbl -> put_StartingTrackNumber(This,value) )
#define IRawCDImageCreator_get_StartingTrackNumber(This,value)( (This)->lpVtbl -> get_StartingTrackNumber(This,value) )
#define IRawCDImageCreator_get_TrackInfo(This,trackIndex,value)( (This)->lpVtbl -> get_TrackInfo(This,trackIndex,value) )
#define IRawCDImageCreator_get_NumberOfExistingTracks(This,value)( (This)->lpVtbl -> get_NumberOfExistingTracks(This,value) )
#define IRawCDImageCreator_get_LastUsedUserSectorInImage(This,value)( (This)->lpVtbl -> get_LastUsedUserSectorInImage(This,value) )
#define IRawCDImageCreator_get_ExpectedTableOfContents(This,value)( (This)->lpVtbl -> get_ExpectedTableOfContents(This,value) )
#endif
#endif
#define DISPID_IRAWCDTRACKINFO_STARTINGLBA              0x100
#define DISPID_IRAWCDTRACKINFO_SECTORCOUNT              0x101
#define DISPID_IRAWCDTRACKINFO_TRACKNUMBER              0x102
#define DISPID_IRAWCDTRACKINFO_SECTORTYPE               0x103
#define DISPID_IRAWCDTRACKINFO_ISRC                     0x104
#define DISPID_IRAWCDTRACKINFO_DIGITALAUDIOCOPYSETTING  0x105
#define DISPID_IRAWCDTRACKINFO_AUDIOHASPREEMPHASIS      0x106
extern RPC_IF_HANDLE __MIDL_itf_imapi2_0000_0029_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_imapi2_0000_0029_v0_0_s_ifspec;
#ifndef __IRawCDImageTrackInfo_INTERFACE_DEFINED__
#define __IRawCDImageTrackInfo_INTERFACE_DEFINED__
extern const IID IID_IRawCDImageTrackInfo;
typedef struct IRawCDImageTrackInfoVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IRawCDImageTrackInfo * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IRawCDImageTrackInfo * This);
	ULONG(STDMETHODCALLTYPE * Release) (IRawCDImageTrackInfo * This);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfoCount) (IRawCDImageTrackInfo * This, UINT * pctinfo);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfo) (IRawCDImageTrackInfo * This, UINT iTInfo, LCID lcid, ITypeInfo ** ppTInfo);
	HRESULT(STDMETHODCALLTYPE * GetIDsOfNames) (IRawCDImageTrackInfo * This, REFIID riid, LPOLESTR * rgszNames, UINT cNames, LCID lcid, DISPID * rgDispId);
	HRESULT(STDMETHODCALLTYPE * Invoke) (IRawCDImageTrackInfo * This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS * pDispParams, VARIANT * pVarResult, EXCEPINFO * pExcepInfo, UINT * puArgErr);
	HRESULT(STDMETHODCALLTYPE * get_StartingLba) (IRawCDImageTrackInfo * This, LONG * value);
	HRESULT(STDMETHODCALLTYPE * get_SectorCount) (IRawCDImageTrackInfo * This, LONG * value);
	HRESULT(STDMETHODCALLTYPE * get_TrackNumber) (IRawCDImageTrackInfo * This, LONG * value);
	HRESULT(STDMETHODCALLTYPE * get_SectorType) (IRawCDImageTrackInfo * This, IMAPI_CD_SECTOR_TYPE * value);
	HRESULT(STDMETHODCALLTYPE * get_ISRC) (IRawCDImageTrackInfo * This, BSTR * value);
	HRESULT(STDMETHODCALLTYPE * put_ISRC) (IRawCDImageTrackInfo * This, BSTR value);
	HRESULT(STDMETHODCALLTYPE * get_DigitalAudioCopySetting) (IRawCDImageTrackInfo * This, IMAPI_CD_TRACK_DIGITAL_COPY_SETTING * value);
	HRESULT(STDMETHODCALLTYPE * put_DigitalAudioCopySetting) (IRawCDImageTrackInfo * This, IMAPI_CD_TRACK_DIGITAL_COPY_SETTING value);
	HRESULT(STDMETHODCALLTYPE * get_AudioHasPreemphasis) (IRawCDImageTrackInfo * This, VARIANT_BOOL * value);
	HRESULT(STDMETHODCALLTYPE * put_AudioHasPreemphasis) (IRawCDImageTrackInfo * This, VARIANT_BOOL value);
	HRESULT(STDMETHODCALLTYPE * get_TrackIndexes) (IRawCDImageTrackInfo * This, SAFEARRAY * *value);
	HRESULT(STDMETHODCALLTYPE * AddTrackIndex) (IRawCDImageTrackInfo * This, LONG lbaOffset);
	HRESULT(STDMETHODCALLTYPE * ClearTrackIndex) (IRawCDImageTrackInfo * This, LONG lbaOffset);
	END_INTERFACE
}  IRawCDImageTrackInfoVtbl;
interface IRawCDImageTrackInfo
{
	CONST_VTBL struct IRawCDImageTrackInfoVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IRawCDImageTrackInfo_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IRawCDImageTrackInfo_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define IRawCDImageTrackInfo_Release(This)( (This)->lpVtbl -> Release(This) )
#define IRawCDImageTrackInfo_GetTypeInfoCount(This,pctinfo)( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define IRawCDImageTrackInfo_GetTypeInfo(This,iTInfo,lcid,ppTInfo)( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define IRawCDImageTrackInfo_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define IRawCDImageTrackInfo_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define IRawCDImageTrackInfo_get_StartingLba(This,value)( (This)->lpVtbl -> get_StartingLba(This,value) )
#define IRawCDImageTrackInfo_get_SectorCount(This,value)( (This)->lpVtbl -> get_SectorCount(This,value) )
#define IRawCDImageTrackInfo_get_TrackNumber(This,value)( (This)->lpVtbl -> get_TrackNumber(This,value) )
#define IRawCDImageTrackInfo_get_SectorType(This,value)( (This)->lpVtbl -> get_SectorType(This,value) )
#define IRawCDImageTrackInfo_get_ISRC(This,value)( (This)->lpVtbl -> get_ISRC(This,value) )
#define IRawCDImageTrackInfo_put_ISRC(This,value)( (This)->lpVtbl -> put_ISRC(This,value) )
#define IRawCDImageTrackInfo_get_DigitalAudioCopySetting(This,value)( (This)->lpVtbl -> get_DigitalAudioCopySetting(This,value) )
#define IRawCDImageTrackInfo_put_DigitalAudioCopySetting(This,value)( (This)->lpVtbl -> put_DigitalAudioCopySetting(This,value) )
#define IRawCDImageTrackInfo_get_AudioHasPreemphasis(This,value)( (This)->lpVtbl -> get_AudioHasPreemphasis(This,value) )
#define IRawCDImageTrackInfo_put_AudioHasPreemphasis(This,value)( (This)->lpVtbl -> put_AudioHasPreemphasis(This,value) )
#define IRawCDImageTrackInfo_get_TrackIndexes(This,value)( (This)->lpVtbl -> get_TrackIndexes(This,value) )
#define IRawCDImageTrackInfo_AddTrackIndex(This,lbaOffset)( (This)->lpVtbl -> AddTrackIndex(This,lbaOffset) )
#define IRawCDImageTrackInfo_ClearTrackIndex(This,lbaOffset)( (This)->lpVtbl -> ClearTrackIndex(This,lbaOffset) )
#endif
#endif
#define DISPID_IBLOCKRANGE_STARTLBA                       0x100
#define DISPID_IBLOCKRANGE_ENDLBA                         0x101
extern RPC_IF_HANDLE __MIDL_itf_imapi2_0000_0030_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_imapi2_0000_0030_v0_0_s_ifspec;
#ifndef __IBlockRange_INTERFACE_DEFINED__
#define __IBlockRange_INTERFACE_DEFINED__
extern const IID IID_IBlockRange;
typedef struct IBlockRangeVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IBlockRange * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IBlockRange * This);
	ULONG(STDMETHODCALLTYPE * Release) (IBlockRange * This);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfoCount) (IBlockRange * This, UINT * pctinfo);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfo) (IBlockRange * This, UINT iTInfo, LCID lcid, ITypeInfo ** ppTInfo);
	HRESULT(STDMETHODCALLTYPE * GetIDsOfNames) (IBlockRange * This, REFIID riid, LPOLESTR * rgszNames, UINT cNames, LCID lcid, DISPID * rgDispId);
	HRESULT(STDMETHODCALLTYPE * Invoke) (IBlockRange * This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS * pDispParams, VARIANT * pVarResult, EXCEPINFO * pExcepInfo, UINT * puArgErr);
	HRESULT(STDMETHODCALLTYPE * get_StartLba) (IBlockRange * This, LONG * value);
	HRESULT(STDMETHODCALLTYPE * get_EndLba) (IBlockRange * This, LONG * value);
	END_INTERFACE
}  IBlockRangeVtbl;
interface IBlockRange
{
	CONST_VTBL struct IBlockRangeVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IBlockRange_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IBlockRange_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define IBlockRange_Release(This)( (This)->lpVtbl -> Release(This) )
#define IBlockRange_GetTypeInfoCount(This,pctinfo)( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define IBlockRange_GetTypeInfo(This,iTInfo,lcid,ppTInfo)( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define IBlockRange_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define IBlockRange_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define IBlockRange_get_StartLba(This,value)( (This)->lpVtbl -> get_StartLba(This,value) )
#define IBlockRange_get_EndLba(This,value)( (This)->lpVtbl -> get_EndLba(This,value) )
#endif
#endif
#define DISPID_IBLOCKRANGELIST_BLOCKRANGES                0x100
extern RPC_IF_HANDLE __MIDL_itf_imapi2_0000_0031_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_imapi2_0000_0031_v0_0_s_ifspec;
#ifndef __IBlockRangeList_INTERFACE_DEFINED__
#define __IBlockRangeList_INTERFACE_DEFINED__
extern const IID IID_IBlockRangeList;
typedef struct IBlockRangeListVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IBlockRangeList * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IBlockRangeList * This);
	ULONG(STDMETHODCALLTYPE * Release) (IBlockRangeList * This);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfoCount) (IBlockRangeList * This, UINT * pctinfo);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfo) (IBlockRangeList * This, UINT iTInfo, LCID lcid, ITypeInfo ** ppTInfo);
	HRESULT(STDMETHODCALLTYPE * GetIDsOfNames) (IBlockRangeList * This, REFIID riid, LPOLESTR * rgszNames, UINT cNames, LCID lcid, DISPID * rgDispId);
	HRESULT(STDMETHODCALLTYPE * Invoke) (IBlockRangeList * This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS * pDispParams, VARIANT * pVarResult, EXCEPINFO * pExcepInfo, UINT * puArgErr);
	HRESULT(STDMETHODCALLTYPE * get_BlockRanges) (IBlockRangeList * This, SAFEARRAY * *value);
	END_INTERFACE
}  IBlockRangeListVtbl;
interface IBlockRangeList
{
	CONST_VTBL struct IBlockRangeListVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IBlockRangeList_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IBlockRangeList_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define IBlockRangeList_Release(This)( (This)->lpVtbl -> Release(This) )
#define IBlockRangeList_GetTypeInfoCount(This,pctinfo)( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define IBlockRangeList_GetTypeInfo(This,iTInfo,lcid,ppTInfo)( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define IBlockRangeList_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define IBlockRangeList_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define IBlockRangeList_get_BlockRanges(This,value)( (This)->lpVtbl -> get_BlockRanges(This,value) )
#endif
#endif
#define IMAPILib2_MajorVersion 1
#define IMAPILib2_MinorVersion 0
#define LIBID_IMAPILib2 LIBID_IMAPI2
extern RPC_IF_HANDLE __MIDL_itf_imapi2_0000_0032_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_imapi2_0000_0032_v0_0_s_ifspec;
#ifndef __IMAPI2_LIBRARY_DEFINED__
#define __IMAPI2_LIBRARY_DEFINED__
extern const IID LIBID_IMAPI2;
extern const CLSID CLSID_MsftDiscMaster2;
extern const CLSID CLSID_MsftDiscRecorder2;
extern const CLSID CLSID_MsftWriteEngine2;
extern const CLSID CLSID_MsftDiscFormat2Erase;
extern const CLSID CLSID_MsftDiscFormat2Data;
extern const CLSID CLSID_MsftDiscFormat2TrackAtOnce;
extern const CLSID CLSID_MsftDiscFormat2RawCD;
extern const CLSID CLSID_MsftStreamZero;
extern const CLSID CLSID_MsftStreamPrng001;
extern const CLSID CLSID_MsftStreamConcatenate;
extern const CLSID CLSID_MsftStreamInterleave;
extern const CLSID CLSID_MsftWriteSpeedDescriptor;
extern const CLSID CLSID_MsftMultisessionSequential;
extern const CLSID CLSID_MsftMultisessionRandomWrite;
extern const CLSID CLSID_MsftRawCDImageCreator;
#endif
unsigned long __RPC_USER BSTR_UserSize(unsigned long *, unsigned long, BSTR *);
unsigned char *__RPC_USER BSTR_UserMarshal(unsigned long *, unsigned char *, BSTR *);
unsigned char *__RPC_USER BSTR_UserUnmarshal(unsigned long *, unsigned char *, BSTR *);
void __RPC_USER BSTR_UserFree(unsigned long *, BSTR *);
unsigned long __RPC_USER LPSAFEARRAY_UserSize(unsigned long *, unsigned long, LPSAFEARRAY *);
unsigned char *__RPC_USER LPSAFEARRAY_UserMarshal(unsigned long *, unsigned char *, LPSAFEARRAY *);
unsigned char *__RPC_USER LPSAFEARRAY_UserUnmarshal(unsigned long *, unsigned char *, LPSAFEARRAY *);
void __RPC_USER LPSAFEARRAY_UserFree(unsigned long *, LPSAFEARRAY *);
unsigned long __RPC_USER BSTR_UserSize64(unsigned long *, unsigned long, BSTR *);
unsigned char *__RPC_USER BSTR_UserMarshal64(unsigned long *, unsigned char *, BSTR *);
unsigned char *__RPC_USER BSTR_UserUnmarshal64(unsigned long *, unsigned char *, BSTR *);
void __RPC_USER BSTR_UserFree64(unsigned long *, BSTR *);
unsigned long __RPC_USER LPSAFEARRAY_UserSize64(unsigned long *, unsigned long, LPSAFEARRAY *);
unsigned char *__RPC_USER LPSAFEARRAY_UserMarshal64(unsigned long *, unsigned char *, LPSAFEARRAY *);
unsigned char *__RPC_USER LPSAFEARRAY_UserUnmarshal64(unsigned long *, unsigned char *, LPSAFEARRAY *);
void __RPC_USER LPSAFEARRAY_UserFree64(unsigned long *, LPSAFEARRAY *);
#endif

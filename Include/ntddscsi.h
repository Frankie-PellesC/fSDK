/*+@@file@@----------------------------------------------------------------*//*!
 \file		ntddscsi.h
 \par Description 
            Extension and update of headers for PellesC compiler suite.
 \par Project: 
            PellesC Headers extension
 \date		Created  on Sun Jul 17 20:43:39 2016
 \date		Modified on Sun Jul 17 20:43:39 2016
 \author	frankie
\*//*-@@file@@----------------------------------------------------------------*/

#ifndef _NTDDSCSIH_
#define _NTDDSCSIH_
#if __POCC__ >= 500
#pragma once
#endif
#ifdef DEFINE_GUID
#ifndef FAR
#ifdef _WIN32
#define FAR
#else
#define FAR _far
#endif
#endif
DEFINE_GUID(ScsiRawInterfaceGuid, 0x53f56309L, 0xb6bf, 0x11d0, 0x94, 0xf2, 0x00, 0xa0, 0xc9, 0x1e, 0xfb, 0x8b);
DEFINE_GUID(WmiScsiAddressGuid,   0x53f5630fL, 0xb6bf, 0x11d0, 0x94, 0xf2, 0x00, 0xa0, 0xc9, 0x1e, 0xfb, 0x8b);
#endif
#define IOCTL_SCSI_BASE                 FILE_DEVICE_CONTROLLER
#define FILE_DEVICE_SCSI                0x0000001b
#define DD_SCSI_DEVICE_NAME				"\\Device\\ScsiPort"
#define IOCTL_SCSI_PASS_THROUGH         CTL_CODE(IOCTL_SCSI_BASE, 0x0401, METHOD_BUFFERED, FILE_READ_ACCESS | FILE_WRITE_ACCESS)
#define IOCTL_SCSI_MINIPORT             CTL_CODE(IOCTL_SCSI_BASE, 0x0402, METHOD_BUFFERED, FILE_READ_ACCESS | FILE_WRITE_ACCESS)
#define IOCTL_SCSI_GET_INQUIRY_DATA     CTL_CODE(IOCTL_SCSI_BASE, 0x0403, METHOD_BUFFERED, FILE_ANY_ACCESS)
#define IOCTL_SCSI_GET_CAPABILITIES     CTL_CODE(IOCTL_SCSI_BASE, 0x0404, METHOD_BUFFERED, FILE_ANY_ACCESS)
#define IOCTL_SCSI_PASS_THROUGH_DIRECT  CTL_CODE(IOCTL_SCSI_BASE, 0x0405, METHOD_BUFFERED, FILE_READ_ACCESS | FILE_WRITE_ACCESS)
#define IOCTL_SCSI_GET_ADDRESS          CTL_CODE(IOCTL_SCSI_BASE, 0x0406, METHOD_BUFFERED, FILE_ANY_ACCESS)
#define IOCTL_SCSI_RESCAN_BUS           CTL_CODE(IOCTL_SCSI_BASE, 0x0407, METHOD_BUFFERED, FILE_ANY_ACCESS)
#define IOCTL_SCSI_GET_DUMP_POINTERS    CTL_CODE(IOCTL_SCSI_BASE, 0x0408, METHOD_BUFFERED, FILE_ANY_ACCESS)
#define IOCTL_SCSI_FREE_DUMP_POINTERS   CTL_CODE(IOCTL_SCSI_BASE, 0x0409, METHOD_BUFFERED, FILE_ANY_ACCESS)
#define IOCTL_IDE_PASS_THROUGH          CTL_CODE(IOCTL_SCSI_BASE, 0x040a, METHOD_BUFFERED, FILE_READ_ACCESS | FILE_WRITE_ACCESS)
#define IOCTL_ATA_PASS_THROUGH          CTL_CODE(IOCTL_SCSI_BASE, 0x040b, METHOD_BUFFERED, FILE_READ_ACCESS | FILE_WRITE_ACCESS)
#define IOCTL_ATA_PASS_THROUGH_DIRECT   CTL_CODE(IOCTL_SCSI_BASE, 0x040c, METHOD_BUFFERED, FILE_READ_ACCESS | FILE_WRITE_ACCESS)
#define IOCTL_ATA_MINIPORT              CTL_CODE(IOCTL_SCSI_BASE, 0x040d, METHOD_BUFFERED, FILE_READ_ACCESS | FILE_WRITE_ACCESS)
#define IOCTL_MINIPORT_PROCESS_SERVICE_IRP CTL_CODE(IOCTL_SCSI_BASE,  0x040e, METHOD_BUFFERED, FILE_READ_ACCESS | FILE_WRITE_ACCESS)
#define IOCTL_MPIO_PASS_THROUGH_PATH    CTL_CODE(IOCTL_SCSI_BASE, 0x040f, METHOD_BUFFERED, FILE_READ_ACCESS | FILE_WRITE_ACCESS)
#define IOCTL_MPIO_PASS_THROUGH_PATH_DIRECT CTL_CODE(IOCTL_SCSI_BASE, 0x0410, METHOD_BUFFERED, FILE_READ_ACCESS | FILE_WRITE_ACCESS)
#define IOCTL_SCSI_MINIPORT_NVCACHE           ((FILE_DEVICE_SCSI << 16) + 0x0600)
typedef struct _SCSI_PASS_THROUGH
{
    USHORT Length;
    UCHAR ScsiStatus;
    UCHAR PathId;
    UCHAR TargetId;
    UCHAR Lun;
    UCHAR CdbLength;
    UCHAR SenseInfoLength;
    UCHAR DataIn;
    ULONG DataTransferLength;
    ULONG TimeOutValue;
    ULONG_PTR DataBufferOffset;
    ULONG SenseInfoOffset;
    UCHAR Cdb[16];
}SCSI_PASS_THROUGH, *PSCSI_PASS_THROUGH;
typedef struct _SCSI_PASS_THROUGH_DIRECT
{
    USHORT Length;
    UCHAR ScsiStatus;
    UCHAR PathId;
    UCHAR TargetId;
    UCHAR Lun;
    UCHAR CdbLength;
    UCHAR SenseInfoLength;
    UCHAR DataIn;
    ULONG DataTransferLength;
    ULONG TimeOutValue;
    PVOID DataBuffer;
    ULONG SenseInfoOffset;
    UCHAR Cdb[16];
}SCSI_PASS_THROUGH_DIRECT, *PSCSI_PASS_THROUGH_DIRECT;
#if defined(_WIN64)
typedef struct _SCSI_PASS_THROUGH32
{
    USHORT Length;
    UCHAR ScsiStatus;
    UCHAR PathId;
    UCHAR TargetId;
    UCHAR Lun;
    UCHAR CdbLength;
    UCHAR SenseInfoLength;
    UCHAR DataIn;
    ULONG DataTransferLength;
    ULONG TimeOutValue;
    ULONG32 DataBufferOffset;
    ULONG SenseInfoOffset;
    UCHAR Cdb[16];
}SCSI_PASS_THROUGH32, *PSCSI_PASS_THROUGH32;
typedef struct _SCSI_PASS_THROUGH_DIRECT32
{
    USHORT Length;
    UCHAR ScsiStatus;
    UCHAR PathId;
    UCHAR TargetId;
    UCHAR Lun;
    UCHAR CdbLength;
    UCHAR SenseInfoLength;
    UCHAR DataIn;
    ULONG DataTransferLength;
    ULONG TimeOutValue;
    VOID * POINTER_32 DataBuffer;
    ULONG SenseInfoOffset;
    UCHAR Cdb[16];
}SCSI_PASS_THROUGH_DIRECT32, *PSCSI_PASS_THROUGH_DIRECT32;
#endif
typedef struct _ATA_PASS_THROUGH_EX
{
    USHORT Length;
    USHORT AtaFlags;
    UCHAR PathId;
    UCHAR TargetId;
    UCHAR Lun;
    UCHAR ReservedAsUchar;
    ULONG DataTransferLength;
    ULONG TimeOutValue;
    ULONG ReservedAsUlong;
    ULONG_PTR DataBufferOffset;
    UCHAR PreviousTaskFile[8];
    UCHAR CurrentTaskFile[8];
} ATA_PASS_THROUGH_EX, *PATA_PASS_THROUGH_EX;
typedef struct _ATA_PASS_THROUGH_DIRECT
{
    USHORT Length;
    USHORT AtaFlags;
    UCHAR PathId;
    UCHAR TargetId;
    UCHAR Lun;
    UCHAR ReservedAsUchar;
    ULONG DataTransferLength;
    ULONG TimeOutValue;
    ULONG ReservedAsUlong;
    PVOID DataBuffer;
    UCHAR PreviousTaskFile[8];
    UCHAR CurrentTaskFile[8];
} ATA_PASS_THROUGH_DIRECT, *PATA_PASS_THROUGH_DIRECT;
#if defined(_WIN64)
typedef struct _ATA_PASS_THROUGH_EX32
{
    USHORT Length;
    USHORT AtaFlags;
    UCHAR PathId;
    UCHAR TargetId;
    UCHAR Lun;
    UCHAR ReservedAsUchar;
    ULONG DataTransferLength;
    ULONG TimeOutValue;
    ULONG ReservedAsUlong;
    ULONG32 DataBufferOffset;
    UCHAR PreviousTaskFile[8];
    UCHAR CurrentTaskFile[8];
} ATA_PASS_THROUGH_EX32, *PATA_PASS_THROUGH_EX32;
typedef struct _ATA_PASS_THROUGH_DIRECT32
{
    USHORT Length;
    USHORT AtaFlags;
    UCHAR PathId;
    UCHAR TargetId;
    UCHAR Lun;
    UCHAR ReservedAsUchar;
    ULONG DataTransferLength;
    ULONG TimeOutValue;
    ULONG ReservedAsUlong;
    VOID * POINTER_32 DataBuffer;
    UCHAR PreviousTaskFile[8];
    UCHAR CurrentTaskFile[8];
} ATA_PASS_THROUGH_DIRECT32, *PATA_PASS_THROUGH_DIRECT32;
#endif
#define ATA_FLAGS_DRDY_REQUIRED         (1 << 0)
#define ATA_FLAGS_DATA_IN               (1 << 1)
#define ATA_FLAGS_DATA_OUT              (1 << 2)
#define ATA_FLAGS_48BIT_COMMAND         (1 << 3)
#define ATA_FLAGS_USE_DMA               (1 << 4)
#define ATA_FLAGS_NO_MULTIPLE           (1 << 5)
typedef struct _IDE_IO_CONTROL
{
        ULONG HeaderLength;
        UCHAR Signature[8];
        ULONG Timeout;
        ULONG ControlCode;
        ULONG ReturnStatus;
        ULONG DataLength;
} IDE_IO_CONTROL, *PIDE_IO_CONTROL;
typedef struct _MPIO_PASS_THROUGH_PATH
{
        SCSI_PASS_THROUGH PassThrough;
        ULONG   Version;
        USHORT  Length;
        UCHAR   Flags;
        UCHAR   PortNumber;
        ULONGLONG MpioPathId;
} MPIO_PASS_THROUGH_PATH, *PMPIO_PASS_THROUGH_PATH;
typedef struct _MPIO_PASS_THROUGH_PATH_DIRECT
{
        SCSI_PASS_THROUGH_DIRECT PassThrough;
        ULONG   Version;
        USHORT  Length;
        UCHAR   Flags;
        UCHAR   PortNumber;
        ULONGLONG MpioPathId;
} MPIO_PASS_THROUGH_PATH_DIRECT, *PMPIO_PASS_THROUGH_PATH_DIRECT;
#if defined(_WIN64)
typedef struct _MPIO_PASS_THROUGH_PATH32
{
        SCSI_PASS_THROUGH32 PassThrough;
        ULONG   Version;
        USHORT  Length;
        UCHAR   Flags;
        UCHAR   PortNumber;
        ULONGLONG MpioPathId;
} MPIO_PASS_THROUGH_PATH32, *PMPIO_PASS_THROUGH_PATH32;
typedef struct _MPIO_PASS_THROUGH_PATH_DIRECT32
{
        SCSI_PASS_THROUGH_DIRECT32 PassThrough;
        ULONG   Version;
        USHORT  Length;
        UCHAR   Flags;
        UCHAR   PortNumber;
        ULONGLONG MpioPathId;
} MPIO_PASS_THROUGH_PATH_DIRECT32, *PMPIO_PASS_THROUGH_PATH_DIRECT32;
#endif
typedef struct _SCSI_BUS_DATA
{
    UCHAR NumberOfLogicalUnits;
    UCHAR InitiatorBusId;
    ULONG InquiryDataOffset;
}SCSI_BUS_DATA, *PSCSI_BUS_DATA;
typedef struct _SCSI_ADAPTER_BUS_INFO
{
    UCHAR NumberOfBuses;
    SCSI_BUS_DATA BusData[1];
} SCSI_ADAPTER_BUS_INFO, *PSCSI_ADAPTER_BUS_INFO;
typedef struct _SCSI_INQUIRY_DATA
{
    UCHAR PathId;
    UCHAR TargetId;
    UCHAR Lun;
    BOOLEAN DeviceClaimed;
    ULONG InquiryDataLength;
    ULONG NextInquiryDataOffset;
    UCHAR InquiryData[1];
}SCSI_INQUIRY_DATA, *PSCSI_INQUIRY_DATA;
typedef struct _SRB_IO_CONTROL
{
        ULONG HeaderLength;
        UCHAR Signature[8];
        ULONG Timeout;
        ULONG ControlCode;
        ULONG ReturnCode;
        ULONG Length;
} SRB_IO_CONTROL, *PSRB_IO_CONTROL;
typedef struct _NVCACHE_REQUEST_BLOCK
{
    ULONG           NRBSize;
    USHORT          Function;
    ULONG           NRBFlags;
    ULONG           NRBStatus;
    ULONG           Count;
    ULONGLONG       LBA;
    ULONG           DataBufSize;
    ULONG           NVCacheStatus;
    ULONG           NVCacheSubStatus;
} NVCACHE_REQUEST_BLOCK, *PNVCACHE_REQUEST_BLOCK;
#define NRB_FUNCTION_NVCACHE_INFO               0xEC
#define NRB_FUNCTION_SPINDLE_STATUS             0xE5
#define NRB_FUNCTION_NVCACHE_POWER_MODE_SET     0x00
#define NRB_FUNCTION_NVCACHE_POWER_MODE_RETURN  0x01
#define NRB_FUNCTION_FLUSH_NVCACHE              0x14
#define NRB_FUNCTION_QUERY_PINNED_SET           0x12
#define NRB_FUNCTION_QUERY_CACHE_MISS           0x13
#define NRB_FUNCTION_ADD_LBAS_PINNED_SET        0x10
#define NRB_FUNCTION_REMOVE_LBAS_PINNED_SET     0x11
#define NRB_FUNCTION_QUERY_ASCENDER_STATUS      0xD0
#define NRB_FUNCTION_QUERY_HYBRID_DISK_STATUS   0xD1
#define NRB_SUCCESS                             0
#define NRB_ILLEGAL_REQUEST                     1
#define NRB_INVALID_PARAMETER                   2
#define NRB_INPUT_DATA_OVERRUN                  3
#define NRB_INPUT_DATA_UNDERRUN                 4
#define NRB_OUTPUT_DATA_OVERRUN                 5
#define NRB_OUTPUT_DATA_UNDERRUN                6
typedef struct _NV_FEATURE_PARAMETER
{
        USHORT NVPowerModeEnabled;
        USHORT NVParameterReserv1;
        USHORT NVCmdEnabled;
        USHORT NVParameterReserv2;
        USHORT NVPowerModeVer;
        USHORT NVCmdVer;
        ULONG  NVSize;
        USHORT NVReadSpeed;
        USHORT NVWrtSpeed;
        ULONG  DeviceSpinUpTime;
} NV_FEATURE_PARAMETER, *PNV_FEATURE_PARAMETER;
typedef struct _IO_SCSI_CAPABILITIES
{
    ULONG Length;
    ULONG MaximumTransferLength;
    ULONG MaximumPhysicalPages;
    ULONG SupportedAsynchronousEvents;
    ULONG AlignmentMask;
    BOOLEAN TaggedQueuing;
    BOOLEAN AdapterScansDown;
    BOOLEAN AdapterUsesPio;
} IO_SCSI_CAPABILITIES, *PIO_SCSI_CAPABILITIES;
typedef struct _SCSI_ADDRESS
{
    ULONG Length;
    UCHAR PortNumber;
    UCHAR PathId;
    UCHAR TargetId;
    UCHAR Lun;
}SCSI_ADDRESS, *PSCSI_ADDRESS;
struct _ADAPTER_OBJECT;
#define DUMP_POINTERS_VERSION_1         1
#define DUMP_POINTERS_VERSION_2         2
#define DUMP_DRIVER_NAME_LENGTH         15
typedef struct _DUMP_POINTERS_VERSION
{
    ULONG Version;
    ULONG Size;
} DUMP_POINTERS_VERSION, *PDUMP_POINTERS_VERSION;
typedef struct _DUMP_POINTERS
{
    struct _ADAPTER_OBJECT *AdapterObject;
    PVOID MappedRegisterBase;
    PVOID DumpData;
    PVOID CommonBufferVa;
    LARGE_INTEGER CommonBufferPa;
    ULONG CommonBufferSize;
    BOOLEAN AllocateCommonBuffers;
#if (NTDDI_VERSION < NTDDI_WINXP)
    UCHAR Spare1[3];
#else
    BOOLEAN UseDiskDump;
    UCHAR Spare1[2];
#endif
    PVOID DeviceObject;
} DUMP_POINTERS, *PDUMP_POINTERS;
typedef struct _DUMP_POINTERS_EX
{
    DUMP_POINTERS_VERSION Header;
    PVOID DumpData;
    PVOID CommonBufferVa;
    ULONG CommonBufferSize;
    BOOLEAN AllocateCommonBuffers;
    PVOID DeviceObject;
    PVOID DriverList;
} DUMP_POINTERS_EX, *PDUMP_POINTERS_EX;
typedef struct _DUMP_DRIVER {
    PVOID DumpDriverList;
    WCHAR DriverName[DUMP_DRIVER_NAME_LENGTH];
    WCHAR BaseName[DUMP_DRIVER_NAME_LENGTH];
} DUMP_DRIVER, *PDUMP_DRIVER;
#define SCSI_IOCTL_DATA_OUT      		0
#define SCSI_IOCTL_DATA_IN        		1
#define SCSI_IOCTL_DATA_UNSPECIFIED		2
#define MPIO_IOCTL_FLAG_USE_PATHID      1
#define MPIO_IOCTL_FLAG_USE_SCSIADDRESS 2
#define MPIO_IOCTL_FLAG_INVOLVE_DSM     4
#endif

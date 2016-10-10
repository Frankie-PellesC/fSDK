/*+@@file@@----------------------------------------------------------------*//*!
 \file		wmpdevices.h
 \par Description 
            Extension and update of headers for PellesC compiler suite.
 \par Project: 
            PellesC Headers extension
 \date		Created  on Mon Sep 19 15:05:11 2016
 \date		Modified on Mon Sep 19 15:05:11 2016
 \author	frankie
\*//*-@@file@@----------------------------------------------------------------*/

#ifndef WMPDEVICES_H__
#define WMPDEVICES_H__
#if __POCC__ >= 500
#pragma once
#endif
#define WMP_MDRT_FLAGS_UNREPORTED_DELETED_ITEMS     0x00000001
#define WMP_MDRT_FLAGS_UNREPORTED_ADDED_ITEMS       0x00000002
#pragma pack(push, Old, 1)
#define IOCTL_WMP_METADATA_ROUND_TRIP       0x31504d57
typedef struct _WMP_WMDM_METADATA_ROUND_TRIP_PC2DEVICE
{
    DWORD   dwChangesSinceTransactionID;
    DWORD   dwResultSetStartingIndex;
} WMP_WMDM_METADATA_ROUND_TRIP_PC2DEVICE;
typedef struct _WMP_WMDM_METADATA_ROUND_TRIP_DEVICE2PC
{
    DWORD   dwCurrentTransactionID;
    DWORD   dwReturnedObjectCount;
    DWORD   dwUnretrievedObjectCount;
    DWORD   dwDeletedObjectStartingOffset;
    DWORD   dwFlags;
    WCHAR   wsObjectPathnameList[1];
} WMP_WMDM_METADATA_ROUND_TRIP_DEVICE2PC;
#define IOCTL_WMP_DEVICE_CAN_SYNC           0x32504d57
#pragma pack(pop, Old)
__inline BOOL WMPNotifyDeviceArrival(void)
{
	return (PostMessage(HWND_BROADCAST, RegisterWindowMessageA("WMPlayer_PluginAddRemove"), 2, 0));
}
__inline BOOL WMPNotifyDeviceRemoval(void)
{
	return (PostMessage(HWND_BROADCAST, RegisterWindowMessageA("WMPlayer_PluginAddRemove"), 3, 0));
}
#endif

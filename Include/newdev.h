/*+@@file@@----------------------------------------------------------------*//*!
 \file		newdev.h
 \par Description 
            Extension and update of headers for PellesC compiler suite.
 \par Project: 
            PellesC Headers extension
 \date		Created  on Sun Sep  4 23:54:00 2016
 \date		Modified on Sun Sep  4 23:54:00 2016
 \author	frankie
\*//*-@@file@@----------------------------------------------------------------*/

#ifndef _INC_NEWDEV
#define _INC_NEWDEV
#if __POCC__ >= 500
#pragma once
#endif
#include <pshpack1.h>
#include <setupapi.h>
#define INSTALLFLAG_FORCE               0x00000001
#define INSTALLFLAG_READONLY            0x00000002
#define INSTALLFLAG_NONINTERACTIVE      0x00000004
#define INSTALLFLAG_BITS                0x00000007
#if (WINVER >= _WIN32_WINNT_WIN2K)
BOOL WINAPI UpdateDriverForPlugAndPlayDevicesA(HWND hwndParent, LPCSTR HardwareId, LPCSTR FullInfPath, DWORD InstallFlags, PBOOL bRebootRequired);
BOOL WINAPI UpdateDriverForPlugAndPlayDevicesW(HWND hwndParent, LPCWSTR HardwareId, LPCWSTR FullInfPath, DWORD InstallFlags, PBOOL bRebootRequired);
#ifdef UNICODE
#define UpdateDriverForPlugAndPlayDevices UpdateDriverForPlugAndPlayDevicesW
#else
#define UpdateDriverForPlugAndPlayDevices UpdateDriverForPlugAndPlayDevicesA
#endif
#endif
#if (WINVER >= _WIN32_WINNT_LONGHORN)
#define DIIDFLAG_SHOWSEARCHUI           0x00000001
#define DIIDFLAG_NOFINISHINSTALLUI      0x00000002
#define DIIDFLAG_INSTALLNULLDRIVER      0x00000004
#define DIIDFLAG_BITS                   0x00000007
BOOL WINAPI DiInstallDevice(HWND hwndParent, HDEVINFO DeviceInfoSet, PSP_DEVINFO_DATA DeviceInfoData, PSP_DRVINFO_DATA DriverInfoData, DWORD Flags, PBOOL NeedReboot);
#endif
#if (WINVER >= _WIN32_WINNT_LONGHORN)
#define DIIRFLAG_INF_ALREADY_COPIED 0x00000001
#define DIIRFLAG_FORCE_INF          0x00000002
#define DIIRFLAG_HW_USING_THE_INF   0x00000004
#define DIIRFLAG_HOTPATCH           0x00000008
#define DIIRFLAG_NOBACKUP           0x00000010
#define DIIRFLAG_BITS ( DIIRFLAG_FORCE_INF | DIIRFLAG_HOTPATCH)
#define DIIRFLAG_SYSTEM_BITS ( DIIRFLAG_INF_ALREADY_COPIED | DIIRFLAG_FORCE_INF | DIIRFLAG_HW_USING_THE_INF | DIIRFLAG_HOTPATCH | DIIRFLAG_NOBACKUP )
BOOL WINAPI DiInstallDriverW(HWND hwndParent, LPCWSTR InfPath, DWORD Flags, PBOOL NeedReboot);
BOOL WINAPI DiInstallDriverA(HWND hwndParent, LPCSTR InfPath, DWORD Flags, PBOOL NeedReboot);
#ifdef UNICODE
#define DiInstallDriver DiInstallDriverW
#else
#define DiInstallDriver DiInstallDriverA
#endif
#endif
#if (WINVER >= _WIN32_WINNT_WIN7)
BOOL WINAPI DiUninstallDevice(HWND hwndParent, HDEVINFO DeviceInfoSet, PSP_DEVINFO_DATA DeviceInfoData, DWORD Flags, PBOOL NeedReboot);
#endif
#if (WINVER >= _WIN32_WINNT_LONGHORN)
BOOL WINAPI DiShowUpdateDevice(HWND hwndParent, HDEVINFO DeviceInfoSet, PSP_DEVINFO_DATA DeviceInfoData, DWORD Flags, PBOOL NeedReboot);
#define ROLLBACK_FLAG_NO_UI             0x00000001
#define ROLLBACK_BITS                   0x00000001
BOOL WINAPI DiRollbackDriver(HDEVINFO DeviceInfoSet, PSP_DEVINFO_DATA DeviceInfoData, HWND hwndParent, DWORD Flags, PBOOL NeedReboot);
#endif
#include <poppack.h>
#endif

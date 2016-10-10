/*+@@file@@----------------------------------------------------------------*//*!
 \file		powrprof.h
 \par Description 
            Extension and update of headers for PellesC compiler suite.
 \par Project: 
            PellesC Headers extension
 \date		Created  on Sat Sep  3 20:16:53 2016
 \date		Modified on Sat Sep  3 20:16:53 2016
 \author	frankie
\*//*-@@file@@----------------------------------------------------------------*/

#ifndef __powrprof_h__
#define __powrprof_h__
#if __POCC__ >= 500
#pragma once
#endif
typedef struct _GLOBAL_MACHINE_POWER_POLICY
{
    ULONG                   Revision;
    SYSTEM_POWER_STATE      LidOpenWakeAc;
    SYSTEM_POWER_STATE      LidOpenWakeDc;
    ULONG                   BroadcastCapacityResolution;
} GLOBAL_MACHINE_POWER_POLICY, *PGLOBAL_MACHINE_POWER_POLICY;
typedef struct _GLOBAL_USER_POWER_POLICY
{
    ULONG                   Revision;
    POWER_ACTION_POLICY     PowerButtonAc;
    POWER_ACTION_POLICY     PowerButtonDc;
    POWER_ACTION_POLICY     SleepButtonAc;
    POWER_ACTION_POLICY     SleepButtonDc;
    POWER_ACTION_POLICY     LidCloseAc;
    POWER_ACTION_POLICY     LidCloseDc;
    SYSTEM_POWER_LEVEL      DischargePolicy[NUM_DISCHARGE_POLICIES];
    ULONG                   GlobalFlags;
} GLOBAL_USER_POWER_POLICY, *PGLOBAL_USER_POWER_POLICY;
typedef struct _GLOBAL_POWER_POLICY
{
    GLOBAL_USER_POWER_POLICY    user;
    GLOBAL_MACHINE_POWER_POLICY mach;
} GLOBAL_POWER_POLICY, *PGLOBAL_POWER_POLICY;
typedef struct _MACHINE_POWER_POLICY
{
    ULONG                   Revision;
    SYSTEM_POWER_STATE      MinSleepAc;
    SYSTEM_POWER_STATE      MinSleepDc;
    SYSTEM_POWER_STATE      ReducedLatencySleepAc;
    SYSTEM_POWER_STATE      ReducedLatencySleepDc;
    ULONG                   DozeTimeoutAc;
    ULONG                   DozeTimeoutDc;
    ULONG                   DozeS4TimeoutAc;
    ULONG                   DozeS4TimeoutDc;
    UCHAR                   MinThrottleAc;
    UCHAR                   MinThrottleDc;
    UCHAR                   pad1[2];
    POWER_ACTION_POLICY     OverThrottledAc;
    POWER_ACTION_POLICY     OverThrottledDc;
} MACHINE_POWER_POLICY, *PMACHINE_POWER_POLICY;
typedef struct _MACHINE_PROCESSOR_POWER_POLICY
{
    ULONG                   Revision;
    PROCESSOR_POWER_POLICY  ProcessorPolicyAc;    
    PROCESSOR_POWER_POLICY  ProcessorPolicyDc;    
} MACHINE_PROCESSOR_POWER_POLICY, *PMACHINE_PROCESSOR_POWER_POLICY;
typedef struct _USER_POWER_POLICY
{
    ULONG                   Revision;
    POWER_ACTION_POLICY     IdleAc;
    POWER_ACTION_POLICY     IdleDc;
    ULONG                   IdleTimeoutAc;
    ULONG                   IdleTimeoutDc;
    UCHAR                   IdleSensitivityAc;
    UCHAR                   IdleSensitivityDc;
    UCHAR                   ThrottlePolicyAc;
    UCHAR                   ThrottlePolicyDc;
    SYSTEM_POWER_STATE      MaxSleepAc;
    SYSTEM_POWER_STATE      MaxSleepDc;
    ULONG                   Reserved[2];
    ULONG                   VideoTimeoutAc;
    ULONG                   VideoTimeoutDc;
    ULONG                   SpindownTimeoutAc;
    ULONG                   SpindownTimeoutDc;
    BOOLEAN                 OptimizeForPowerAc;
    BOOLEAN                 OptimizeForPowerDc;
    UCHAR                   FanThrottleToleranceAc;
    UCHAR                   FanThrottleToleranceDc;
    UCHAR                   ForcedThrottleAc;
    UCHAR                   ForcedThrottleDc;
} USER_POWER_POLICY, *PUSER_POWER_POLICY;
typedef struct _POWER_POLICY
{
    USER_POWER_POLICY       user;
    MACHINE_POWER_POLICY    mach;
} POWER_POLICY, *PPOWER_POLICY;
#define EnableSysTrayBatteryMeter   0x01
#define EnableMultiBatteryDisplay   0x02
#define EnablePasswordLogon         0x04
#define EnableWakeOnRing            0x08
#define EnableVideoDimDisplay       0x10
#define POWER_ATTRIBUTE_HIDE        0x00000001
#define NEWSCHEME (UINT)-1
typedef BOOLEAN CALLBACK PWRSCHEMESENUMPROC_V1(UINT Index, DWORD NameSize, LPTSTR Name, DWORD DescriptionSize, LPTSTR Description, PPOWER_POLICY Policy, LPARAM Context);
typedef BOOLEAN CALLBACK PWRSCHEMESENUMPROC_V2(UINT Index, DWORD NameSize, LPWSTR Name, DWORD DescriptionSize, LPWSTR Description, PPOWER_POLICY Policy, LPARAM Context);
#if (NTDDI_VERSION >= NTDDI_VISTA)
typedef PWRSCHEMESENUMPROC_V2 *PWRSCHEMESENUMPROC;
#else
typedef PWRSCHEMESENUMPROC_V1 *PWRSCHEMESENUMPROC;
#endif
STDAPI_(BOOLEAN)GetPwrDiskSpindownRange(PUINT puiMax, PUINT puiMin);
STDAPI_(BOOLEAN)EnumPwrSchemes(PWRSCHEMESENUMPROC lpfn, LPARAM lParam);
STDAPI_(BOOLEAN)ReadGlobalPwrPolicy(PGLOBAL_POWER_POLICY pGlobalPowerPolicy);
STDAPI_(BOOLEAN)ReadPwrScheme(UINT uiID, PPOWER_POLICY pPowerPolicy);
STDAPI_(BOOLEAN)WritePwrScheme(PUINT puiID, LPCWSTR lpszSchemeName, LPCWSTR lpszDescription, PPOWER_POLICY lpScheme);
STDAPI_(BOOLEAN)WriteGlobalPwrPolicy(PGLOBAL_POWER_POLICY pGlobalPowerPolicy);
STDAPI_(BOOLEAN)DeletePwrScheme(UINT uiID);
STDAPI_(BOOLEAN)GetActivePwrScheme(PUINT puiID);
STDAPI_(BOOLEAN)SetActivePwrScheme(UINT uiID, PGLOBAL_POWER_POLICY pGlobalPowerPolicy, PPOWER_POLICY pPowerPolicy);
STDAPI_(BOOLEAN)GetPwrCapabilities(PSYSTEM_POWER_CAPABILITIES lpspc);
STDAPI_(BOOLEAN)IsPwrSuspendAllowed(VOID);
STDAPI_(BOOLEAN)IsPwrHibernateAllowed(VOID);
STDAPI_(BOOLEAN)IsPwrShutdownAllowed(VOID);
STDAPI_(BOOLEAN)IsAdminOverrideActive(PADMINISTRATOR_POWER_POLICY);
STDAPI_(BOOLEAN)SetSuspendState(BOOLEAN bHibernate, BOOLEAN bForce, BOOLEAN bWakeupEventsDisabled);
STDAPI_(BOOLEAN)GetCurrentPowerPolicies(PGLOBAL_POWER_POLICY pGlobalPowerPolicy, PPOWER_POLICY pPowerPolicy);
STDAPI_(BOOLEAN)CanUserWritePwrScheme(VOID);
#if (NTDDI_VERSION >= NTDDI_WINXP)
STDAPI_(BOOLEAN)ReadProcessorPwrScheme(UINT uiID, PMACHINE_PROCESSOR_POWER_POLICY pMachineProcessorPowerPolicy);
#endif
#if (NTDDI_VERSION >= NTDDI_WINXP)
STDAPI_(BOOLEAN)WriteProcessorPwrScheme(UINT uiID, PMACHINE_PROCESSOR_POWER_POLICY pMachineProcessorPowerPolicy);
#endif
STDAPI_(BOOLEAN)ValidatePowerPolicies(PGLOBAL_POWER_POLICY pGlobalPowerPolicy, PPOWER_POLICY pPowerPolicy);
#ifndef NT_SUCCESS
#define NTSTATUS LONG
#define _OVERRIDE_NTSTATUS_
#endif
NTSTATUS WINAPI CallNtPowerInformation(POWER_INFORMATION_LEVEL InformationLevel, PVOID InputBuffer, ULONG InputBufferLength, PVOID OutputBuffer, ULONG OutputBufferLength);
#ifdef _OVERRIDE_NTSTATUS_
#undef NTSTATUS
#endif
typedef enum _POWER_DATA_ACCESSOR
{
        ACCESS_AC_POWER_SETTING_INDEX = 0,
        ACCESS_DC_POWER_SETTING_INDEX,
        ACCESS_FRIENDLY_NAME,
        ACCESS_DESCRIPTION,
        ACCESS_POSSIBLE_POWER_SETTING,
        ACCESS_POSSIBLE_POWER_SETTING_FRIENDLY_NAME,
        ACCESS_POSSIBLE_POWER_SETTING_DESCRIPTION,
        ACCESS_DEFAULT_AC_POWER_SETTING,
        ACCESS_DEFAULT_DC_POWER_SETTING,
        ACCESS_POSSIBLE_VALUE_MIN,
        ACCESS_POSSIBLE_VALUE_MAX,
        ACCESS_POSSIBLE_VALUE_INCREMENT,
        ACCESS_POSSIBLE_VALUE_UNITS,
        ACCESS_ICON_RESOURCE,
        ACCESS_DEFAULT_SECURITY_DESCRIPTOR,
        ACCESS_ATTRIBUTES,
        ACCESS_SCHEME,
        ACCESS_SUBGROUP,
        ACCESS_INDIVIDUAL_SETTING,
        ACCESS_ACTIVE_SCHEME,
        ACCESS_CREATE_SCHEME,
        ACCESS_AC_POWER_SETTING_MAX,
        ACCESS_DC_POWER_SETTING_MAX,
        ACCESS_AC_POWER_SETTING_MIN,
        ACCESS_DC_POWER_SETTING_MIN
        
} POWER_DATA_ACCESSOR, *PPOWER_DATA_ACCESSOR;
#if !defined(_HPOWERNOTIFY_DEF_)
#define _HPOWERNOTIFY_DEF_
typedef  PVOID           HPOWERNOTIFY;
typedef  HPOWERNOTIFY   *PHPOWERNOTIFY;
#endif
#if (NTDDI_VERSION >= NTDDI_WIN7)
DWORD PowerSettingRegisterNotification(LPCGUID SettingGuid, DWORD Flags, HANDLE Recipient, PHPOWERNOTIFY RegistrationHandle);
#endif
#if (NTDDI_VERSION >= NTDDI_WIN7)
DWORD PowerSettingUnregisterNotification(HPOWERNOTIFY RegistrationHandle);
#endif
#if (NTDDI_VERSION >= NTDDI_VISTA)
STDAPI_(DWORD)PowerSettingAccessCheck(POWER_DATA_ACCESSOR AccessFlags, CONST GUID * PowerGuid);
#endif
#if (NTDDI_VERSION >= NTDDI_VISTA)
STDAPI_(DWORD)PowerReadACValueIndex(HKEY RootPowerKey, CONST GUID * SchemeGuid, CONST GUID * SubGroupOfPowerSettingsGuid, CONST GUID * PowerSettingGuid, LPDWORD AcValueIndex);
#endif
#if (NTDDI_VERSION >= NTDDI_VISTA)
STDAPI_(DWORD)PowerReadDCValueIndex(HKEY RootPowerKey, CONST GUID * SchemeGuid, CONST GUID * SubGroupOfPowerSettingsGuid, CONST GUID * PowerSettingGuid, LPDWORD DcValueIndex);
#endif
#if (NTDDI_VERSION >= NTDDI_VISTA)
STDAPI_(DWORD)PowerReadACValue(HKEY RootPowerKey, CONST GUID * SchemeGuid, CONST GUID * SubGroupOfPowerSettingsGuid, CONST GUID * PowerSettingGuid, PULONG Type, LPBYTE Buffer, LPDWORD BufferSize);
#endif
#if (NTDDI_VERSION >= NTDDI_VISTA)
STDAPI_(DWORD)PowerReadDCValue(HKEY RootPowerKey, CONST GUID * SchemeGuid, CONST GUID * SubGroupOfPowerSettingsGuid, CONST GUID * PowerSettingGuid, PULONG Type, PUCHAR Buffer, LPDWORD BufferSize);
#endif
#if (NTDDI_VERSION >= NTDDI_VISTA)
STDAPI_(DWORD)PowerReadFriendlyName(HKEY RootPowerKey, CONST GUID * SchemeGuid, CONST GUID * SubGroupOfPowerSettingsGuid, CONST GUID * PowerSettingGuid, PUCHAR Buffer, LPDWORD BufferSize);
#endif
#if (NTDDI_VERSION >= NTDDI_VISTA)
STDAPI_(DWORD)PowerReadDescription(HKEY RootPowerKey, CONST GUID * SchemeGuid, CONST GUID * SubGroupOfPowerSettingsGuid, CONST GUID * PowerSettingGuid, PUCHAR Buffer, LPDWORD BufferSize);
#endif
#if (NTDDI_VERSION >= NTDDI_VISTA)
STDAPI_(DWORD)PowerReadPossibleValue(HKEY RootPowerKey, CONST GUID * SubGroupOfPowerSettingsGuid, CONST GUID * PowerSettingGuid, PULONG Type, ULONG PossibleSettingIndex, PUCHAR Buffer, LPDWORD BufferSize);
#endif
#if (NTDDI_VERSION >= NTDDI_VISTA)
STDAPI_(DWORD)PowerReadPossibleFriendlyName(HKEY RootPowerKey, CONST GUID * SubGroupOfPowerSettingsGuid, CONST GUID * PowerSettingGuid, ULONG PossibleSettingIndex, PUCHAR Buffer, LPDWORD BufferSize);
#endif
#if (NTDDI_VERSION >= NTDDI_VISTA)
STDAPI_(DWORD)PowerReadPossibleDescription(HKEY RootPowerKey, CONST GUID * SubGroupOfPowerSettingsGuid, CONST GUID * PowerSettingGuid, ULONG PossibleSettingIndex, PUCHAR Buffer, LPDWORD BufferSize);
#endif
#if (NTDDI_VERSION >= NTDDI_VISTA)
STDAPI_(DWORD)PowerReadValueMin(HKEY RootPowerKey, CONST GUID * SubGroupOfPowerSettingsGuid, CONST GUID * PowerSettingGuid, LPDWORD ValueMinimum);
#endif
#if (NTDDI_VERSION >= NTDDI_VISTA)
STDAPI_(DWORD)PowerReadValueMax(HKEY RootPowerKey, CONST GUID * SubGroupOfPowerSettingsGuid, CONST GUID * PowerSettingGuid, LPDWORD ValueMaximum);
#endif
#if (NTDDI_VERSION >= NTDDI_VISTA)
STDAPI_(DWORD)PowerReadValueIncrement(HKEY RootPowerKey, CONST GUID * SubGroupOfPowerSettingsGuid, CONST GUID * PowerSettingGuid, LPDWORD ValueIncrement);
#endif
#if (NTDDI_VERSION >= NTDDI_VISTA)
STDAPI_(DWORD)PowerReadValueUnitsSpecifier(HKEY RootPowerKey, CONST GUID * SubGroupOfPowerSettingsGuid, CONST GUID * PowerSettingGuid, UCHAR * Buffer, LPDWORD BufferSize);
#endif
#if (NTDDI_VERSION >= NTDDI_VISTA)
STDAPI_(DWORD)PowerReadACDefaultIndex(HKEY RootPowerKey, CONST GUID * SchemePersonalityGuid, CONST GUID * SubGroupOfPowerSettingsGuid, CONST GUID * PowerSettingGuid, LPDWORD AcDefaultIndex);
#endif
#if (NTDDI_VERSION >= NTDDI_VISTA)
STDAPI_(DWORD)PowerReadDCDefaultIndex(HKEY RootPowerKey, CONST GUID * SchemePersonalityGuid, CONST GUID * SubGroupOfPowerSettingsGuid, CONST GUID * PowerSettingGuid, LPDWORD DcDefaultIndex);
#endif
#if (NTDDI_VERSION >= NTDDI_VISTA)
STDAPI_(DWORD)PowerReadIconResourceSpecifier(HKEY RootPowerKey, CONST GUID * SchemeGuid, CONST GUID * SubGroupOfPowerSettingsGuid, CONST GUID * PowerSettingGuid, PUCHAR Buffer, LPDWORD BufferSize);
#endif
#if (NTDDI_VERSION >= NTDDI_VISTA)
STDAPI_(DWORD)PowerReadSettingAttributes(CONST GUID * SubGroupGuid, CONST GUID * PowerSettingGuid);
#endif
#if (NTDDI_VERSION >= NTDDI_VISTA)
STDAPI_(DWORD)PowerWriteACValueIndex(HKEY RootPowerKey, CONST GUID * SchemeGuid, CONST GUID * SubGroupOfPowerSettingsGuid, CONST GUID * PowerSettingGuid, DWORD AcValueIndex);
#endif
#if (NTDDI_VERSION >= NTDDI_VISTA)
STDAPI_(DWORD)PowerWriteDCValueIndex(HKEY RootPowerKey, CONST GUID * SchemeGuid, CONST GUID * SubGroupOfPowerSettingsGuid, CONST GUID * PowerSettingGuid, DWORD DcValueIndex);
#endif
#if (NTDDI_VERSION >= NTDDI_VISTA)
STDAPI_(DWORD)PowerWriteFriendlyName(HKEY RootPowerKey, CONST GUID * SchemeGuid, CONST GUID * SubGroupOfPowerSettingsGuid, CONST GUID * PowerSettingGuid, UCHAR * Buffer, DWORD BufferSize);
#endif
#if (NTDDI_VERSION >= NTDDI_VISTA)
STDAPI_(DWORD)PowerWriteDescription(HKEY RootPowerKey, CONST GUID * SchemeGuid, CONST GUID * SubGroupOfPowerSettingsGuid, CONST GUID * PowerSettingGuid, UCHAR * Buffer, DWORD BufferSize);
#endif
#if (NTDDI_VERSION >= NTDDI_VISTA)
STDAPI_(DWORD)PowerWritePossibleValue(HKEY RootPowerKey, CONST GUID * SubGroupOfPowerSettingsGuid, CONST GUID * PowerSettingGuid, ULONG Type, ULONG PossibleSettingIndex, UCHAR * Buffer, DWORD BufferSize);
#endif
#if (NTDDI_VERSION >= NTDDI_VISTA)
STDAPI_(DWORD)PowerWritePossibleFriendlyName(HKEY RootPowerKey, CONST GUID * SubGroupOfPowerSettingsGuid, CONST GUID * PowerSettingGuid, ULONG PossibleSettingIndex, UCHAR * Buffer, DWORD BufferSize);
#endif
#if (NTDDI_VERSION >= NTDDI_VISTA)
STDAPI_(DWORD)PowerWritePossibleDescription(HKEY RootPowerKey, CONST GUID * SubGroupOfPowerSettingsGuid, CONST GUID * PowerSettingGuid, ULONG PossibleSettingIndex, UCHAR * Buffer, DWORD BufferSize);
#endif
#if (NTDDI_VERSION >= NTDDI_VISTA)
STDAPI_(DWORD)PowerWriteValueMin(HKEY RootPowerKey, CONST GUID * SubGroupOfPowerSettingsGuid, CONST GUID * PowerSettingGuid, DWORD ValueMinimum);
#endif
#if (NTDDI_VERSION >= NTDDI_VISTA)
STDAPI_(DWORD)PowerWriteValueMax(HKEY RootPowerKey, CONST GUID * SubGroupOfPowerSettingsGuid, CONST GUID * PowerSettingGuid, DWORD ValueMaximum);
#endif
#if (NTDDI_VERSION >= NTDDI_VISTA)
STDAPI_(DWORD)PowerWriteValueIncrement(HKEY RootPowerKey, CONST GUID * SubGroupOfPowerSettingsGuid, CONST GUID * PowerSettingGuid, DWORD ValueIncrement);
#endif
#if (NTDDI_VERSION >= NTDDI_VISTA)
STDAPI_(DWORD)PowerWriteValueUnitsSpecifier(HKEY RootPowerKey, CONST GUID * SubGroupOfPowerSettingsGuid, CONST GUID * PowerSettingGuid, UCHAR * Buffer, DWORD BufferSize);
#endif
#if (NTDDI_VERSION >= NTDDI_VISTA)
STDAPI_(DWORD)PowerWriteACDefaultIndex(HKEY RootSystemPowerKey, CONST GUID * SchemePersonalityGuid, CONST GUID * SubGroupOfPowerSettingsGuid, CONST GUID * PowerSettingGuid, DWORD DefaultAcIndex);
#endif
#if (NTDDI_VERSION >= NTDDI_VISTA)
STDAPI_(DWORD)PowerWriteDCDefaultIndex(HKEY RootSystemPowerKey, CONST GUID * SchemePersonalityGuid, CONST GUID * SubGroupOfPowerSettingsGuid, CONST GUID * PowerSettingGuid, DWORD DefaultDcIndex);
#endif
#if (NTDDI_VERSION >= NTDDI_VISTA)
STDAPI_(DWORD)PowerWriteIconResourceSpecifier(HKEY RootPowerKey, CONST GUID * SchemeGuid, CONST GUID * SubGroupOfPowerSettingsGuid, CONST GUID * PowerSettingGuid, UCHAR * Buffer, DWORD BufferSize);
#endif
#if (NTDDI_VERSION >= NTDDI_VISTA)
STDAPI_(DWORD)PowerWriteSettingAttributes(CONST GUID * SubGroupGuid, CONST GUID * PowerSettingGuid, DWORD Attributes);
#endif
#if (NTDDI_VERSION >= NTDDI_VISTA)
STDAPI_(DWORD)PowerDuplicateScheme(HKEY RootPowerKey, const GUID *SourceSchemeGuid, GUID **DestinationSchemeGuid);
#endif
#if (NTDDI_VERSION >= NTDDI_VISTA)
STDAPI_(DWORD)PowerImportPowerScheme(HKEY RootPowerKey, LPCWSTR ImportFileNamePath, GUID ** DestinationSchemeGuid);
#endif
#if (NTDDI_VERSION >= NTDDI_VISTA)
STDAPI_(DWORD)PowerDeleteScheme(HKEY RootPowerKey, CONST GUID * SchemeGuid);
#endif
#if (NTDDI_VERSION >= NTDDI_VISTA)
STDAPI_(DWORD)PowerRemovePowerSetting(CONST GUID * PowerSettingSubKeyGuid, CONST GUID * PowerSettingGuid);
#endif
#if (NTDDI_VERSION >= NTDDI_VISTA)
STDAPI_(DWORD)PowerCreateSetting(HKEY RootSystemPowerKey, CONST GUID * SubGroupOfPowerSettingsGuid, CONST GUID * PowerSettingGuid);
#endif
#if (NTDDI_VERSION >= NTDDI_VISTA)
STDAPI_(DWORD)PowerCreatePossibleSetting(HKEY RootSystemPowerKey, CONST GUID * SubGroupOfPowerSettingsGuid, CONST GUID * PowerSettingGuid, ULONG PossibleSettingIndex);
#endif
#if (NTDDI_VERSION >= NTDDI_VISTA)
STDAPI_(DWORD)PowerEnumerate(HKEY RootPowerKey, CONST GUID * SchemeGuid, CONST GUID * SubGroupOfPowerSettingsGuid, POWER_DATA_ACCESSOR AccessFlags, ULONG Index, UCHAR * Buffer, DWORD * BufferSize);
#endif
#if (NTDDI_VERSION >= NTDDI_VISTA)
STDAPI_(DWORD)PowerSetActiveScheme(HKEY UserRootPowerKey, CONST GUID * SchemeGuid);
#endif
#if (NTDDI_VERSION >= NTDDI_VISTA)
STDAPI_(DWORD)PowerGetActiveScheme(HKEY UserRootPowerKey, GUID ** ActivePolicyGuid);
#endif
#if (NTDDI_VERSION >= NTDDI_VISTA)
STDAPI_(DWORD)PowerOpenUserPowerKey(HKEY * phUserPowerKey, REGSAM Access, BOOL OpenExisting);
#endif
#if (NTDDI_VERSION >= NTDDI_VISTA)
STDAPI_(DWORD)PowerOpenSystemPowerKey(HKEY * phSystemPowerKey, REGSAM Access, BOOL OpenExisting);
#endif
#if (NTDDI_VERSION >= NTDDI_VISTA)
STDAPI_(DWORD)PowerCanRestoreIndividualDefaultPowerScheme(CONST GUID * SchemeGuid);
#endif
#if (NTDDI_VERSION >= NTDDI_VISTA)
STDAPI_(DWORD)PowerRestoreIndividualDefaultPowerScheme(CONST GUID * SchemeGuid);
#endif
#if (NTDDI_VERSION >= NTDDI_VISTA)
STDAPI_(DWORD)PowerRestoreDefaultPowerSchemes(VOID);
#endif
#if (NTDDI_VERSION >= NTDDI_VISTA)
STDAPI_(DWORD)PowerReplaceDefaultPowerSchemes(VOID);
#endif
#if (NTDDI_VERSION >= NTDDI_VISTA)
STDAPI_(POWER_PLATFORM_ROLE)PowerDeterminePlatformRole(VOID);
#endif
#define DEVICEPOWER_HARDWAREID             (0x80000000)
#define DEVICEPOWER_AND_OPERATION          (0x40000000)
#define DEVICEPOWER_FILTER_DEVICES_PRESENT (0x20000000)
#define DEVICEPOWER_FILTER_HARDWARE        (0x10000000)
#define DEVICEPOWER_FILTER_WAKEENABLED     (0x08000000)
#define DEVICEPOWER_FILTER_WAKEPROGRAMMABLE (0x04000000)
#define DEVICEPOWER_FILTER_ON_NAME         (0x02000000)
#define DEVICEPOWER_SET_WAKEENABLED (0x00000001)
#define DEVICEPOWER_CLEAR_WAKEENABLED (0x00000002)
#define PDCAP_S0_SUPPORTED              0x00010000
#define PDCAP_S1_SUPPORTED              0x00020000
#define PDCAP_S2_SUPPORTED              0x00040000
#define PDCAP_S3_SUPPORTED              0x00080000
#define PDCAP_WAKE_FROM_S0_SUPPORTED    0x00100000
#define PDCAP_WAKE_FROM_S1_SUPPORTED    0x00200000
#define PDCAP_WAKE_FROM_S2_SUPPORTED    0x00400000
#define PDCAP_WAKE_FROM_S3_SUPPORTED    0x00800000
#define PDCAP_S4_SUPPORTED              0x01000000
#define PDCAP_S5_SUPPORTED              0x02000000
#if (NTDDI_VERSION >= NTDDI_WS03)
STDAPI_(BOOLEAN)DevicePowerEnumDevices(ULONG QueryIndex, ULONG QueryInterpretationFlags, ULONG QueryFlags, PBYTE pReturnBuffer, PULONG pBufferSize);
#endif
#if (NTDDI_VERSION >= NTDDI_WS03)
STDAPI_(DWORD)DevicePowerSetDeviceState(LPCWSTR DeviceDescription, ULONG SetFlags, PVOID SetData);
#endif
#if (NTDDI_VERSION >= NTDDI_WS03)
STDAPI_(BOOLEAN)DevicePowerOpen(ULONG DebugMask);
#endif
#if (NTDDI_VERSION >= NTDDI_WS03)
STDAPI_(BOOLEAN)DevicePowerClose(VOID);
#endif
#endif

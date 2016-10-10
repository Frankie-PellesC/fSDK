/*+@@file@@----------------------------------------------------------------*//*!
 \file		WtsApi32.h
 \par Description 
            Extension and update of headers for PellesC compiler suite.
 \par Project: 
            PellesC Headers extension
 \date		Created  on Sun Sep  4 15:19:06 2016
 \date		Modified on Sun Sep  4 15:19:06 2016
 \author	frankie
\*//*-@@file@@----------------------------------------------------------------*/

#ifndef _INC_WTSAPI
#define _INC_WTSAPI
#if __POCC__ >= 500
#pragma once
#endif
#define WTS_CURRENT_SERVER         ((HANDLE)NULL)
#define WTS_CURRENT_SERVER_HANDLE  ((HANDLE)NULL)
#define WTS_CURRENT_SERVER_NAME    (NULL)
#define WTS_CURRENT_SESSION ((DWORD)-1)
#define WTS_ANY_SESSION ((DWORD)-2)
#ifndef IDTIMEOUT
#define IDTIME32000
#endif
#ifndef IDASYNC
#define IDASYNC   32001
#endif
#ifndef __HYDRIX_H__
#define USERNAME_LENGTH          20
#define CLIENTNAME_LENGTH        20
#define CLIENTADDRESS_LENGTH     30
#endif
#define WTS_WSD_LOGOFF      0x00000001
#define WTS_WSD_SHUTDOWN    0x00000002
#define WTS_WSD_REBOOT      0x00000004
#define WTS_WSD_POWEROFF    0x00000008
#define WTS_WSD_FASTREBOOT  0x00000010
#define MAX_ELAPSED_TIME_LENGTH         15
#define MAX_DATE_TIME_LENGTH            56
#define WINSTATIONNAME_LENGTH    32
#define DOMAIN_LENGTH            17
#define WTS_DRIVE_LENGTH                3
#define WTS_LISTENER_NAME_LENGTH        32
#define WTS_COMMENT_LENGTH              60
#define WTS_LISTENER_CREATE 0x00000001
#define WTS_LISTENER_UPDATE 0x00000010
#define WTS_SECURITY_QUERY_INFORMATION        0x00000001
#define WTS_SECURITY_SET_INFORMATION          0x00000002
#define WTS_SECURITY_RESET                    0x00000004
#define WTS_SECURITY_VIRTUAL_CHANNELS         0x00000008
#define WTS_SECURITY_REMOTE_CONTROL           0x00000010
#define WTS_SECURITY_LOGON                    0x00000020
#define WTS_SECURITY_LOGOFF                   0x00000040
#define WTS_SECURITY_MESSAGE                  0x00000080
#define WTS_SECURITY_CONNECT                  0x00000100
#define WTS_SECURITY_DISCONNECT               0x00000200
#define WTS_SECURITY_GUEST_ACCESS             (WTS_SECURITY_LOGON)
#define WTS_SECURITY_CURRENT_GUEST_ACCESS     (WTS_SECURITY_VIRTUAL_CHANNELS | WTS_SECURITY_LOGOFF)
#define WTS_SECURITY_USER_ACCESS              (WTS_SECURITY_CURRENT_GUEST_ACCESS | WTS_SECURITY_QUERY_INFORMATION | WTS_SECURITY_CONNECT )
#define WTS_SECURITY_CURRENT_USER_ACCESS      (WTS_SECURITY_SET_INFORMATION | WTS_SECURITY_RESET \
                                               WTS_SECURITY_VIRTUAL_CHANNELS | WTS_SECURITY_LOGOFF \
                                               WTS_SECURITY_DISCONNECT)
#define WTS_SECURITY_ALL_ACCESS               (STANDARD_RIGHTS_REQUIRED | WTS_SECURITY_QUERY_INFORMATION |       \
                                               WTS_SECURITY_SET_INFORMATION | WTS_SECURITY_RESET |               \
                                               WTS_SECURITY_VIRTUAL_CHANNELS |    WTS_SECURITY_REMOTE_CONTROL |  \
                                               WTS_SECURITY_LOGON |                                              \
                                               WTS_SECURITY_MESSAGE |                                            \
                                               WTS_SECURITY_CONNECT | WTS_SECURITY_DISCONNECT)
typedef enum _WTS_CONNECTSTATE_CLASS
{
    WTSActive,
    WTSConnected,
    WTSConnectQuery,
    WTSShadow,
    WTSDisconnected,
    WTSIdle,
    WTSListen,
    WTSReset,
    WTSDown,
    WTSInit,
} WTS_CONNECTSTATE_CLASS;
typedef struct _WTS_SERVER_INFOW
{
    LPWSTR pServerName;
} WTS_SERVER_INFOW, * PWTS_SERVER_INFOW;
typedef struct _WTS_SERVER_INFOA
{
    LPSTR pServerName;
} WTS_SERVER_INFOA, * PWTS_SERVER_INFOA;
#ifdef UNICODE
#define WTS_SERVER_INFO  WTS_SERVER_INFOW
#define PWTS_SERVER_INFO PWTS_SERVER_INFOW
#else
#define WTS_SERVER_INFO  WTS_SERVER_INFOA
#define PWTS_SERVER_INFO PWTS_SERVER_INFOA
#endif
typedef struct _WTS_SESSION_INFOW
{
    DWORD SessionId;
    LPWSTR pWinStationName;
    WTS_CONNECTSTATE_CLASS State;
} WTS_SESSION_INFOW, * PWTS_SESSION_INFOW;
typedef struct _WTS_SESSION_INFOA
{
    DWORD SessionId;
    LPSTR pWinStationName;
    WTS_CONNECTSTATE_CLASS State;
} WTS_SESSION_INFOA, * PWTS_SESSION_INFOA;
typedef struct _WTS_SESSION_INFO_1W
{
    DWORD ExecEnvId;
    WTS_CONNECTSTATE_CLASS State;
    DWORD SessionId;
    LPWSTR pSessionName;
    LPWSTR pHostName;
    LPWSTR pUserName;
    LPWSTR pDomainName;
    LPWSTR pFarmName;
} WTS_SESSION_INFO_1W, * PWTS_SESSION_INFO_1W;
typedef struct _WTS_SESSION_INFO_1A
{
    DWORD ExecEnvId;
    WTS_CONNECTSTATE_CLASS State;
    DWORD SessionId;
    LPSTR pSessionName;
    LPSTR pHostName;
    LPSTR pUserName;
    LPSTR pDomainName;
    LPSTR pFarmName;
} WTS_SESSION_INFO_1A, * PWTS_SESSION_INFO_1A;
#ifdef UNICODE
#define WTS_SESSION_INFO  WTS_SESSION_INFOW
#define PWTS_SESSION_INFO PWTS_SESSION_INFOW
#define WTS_SESSION_INFO_1  WTS_SESSION_INFO_1W
#define PWTS_SESSION_INFO_1 PWTS_SESSION_INFO_1W
#else
#define WTS_SESSION_INFO  WTS_SESSION_INFOA
#define PWTS_SESSION_INFO PWTS_SESSION_INFOA
#define WTS_SESSION_INFO_1  WTS_SESSION_INFO_1A
#define PWTS_SESSION_INFO_1 PWTS_SESSION_INFO_1A
#endif
typedef struct _WTS_PROCESS_INFOW
{
    DWORD SessionId;
    DWORD ProcessId;
    LPWSTR pProcessName;
    PSID pUserSid;
} WTS_PROCESS_INFOW, * PWTS_PROCESS_INFOW;
typedef struct _WTS_PROCESS_INFOA
{
    DWORD SessionId;
    DWORD ProcessId;
    LPSTR pProcessName;
    PSID pUserSid;
} WTS_PROCESS_INFOA, * PWTS_PROCESS_INFOA;
#ifdef UNICODE
#define WTS_PROCESS_INFO  WTS_PROCESS_INFOW
#define PWTS_PROCESS_INFO PWTS_PROCESS_INFOW
#else
#define WTS_PROCESS_INFO  WTS_PROCESS_INFOA
#define PWTS_PROCESS_INFO PWTS_PROCESS_INFOA
#endif
#define WTS_PROTOCOL_TYPE_CONSOLE         0
#define WTS_PROTOCOL_TYPE_ICA             1
#define WTS_PROTOCOL_TYPE_RDP             2
typedef enum _WTS_INFO_CLASS
{
    WTSInitialProgram,
    WTSApplicationName,
    WTSWorkingDirectory,
    WTSOEMId,
    WTSSessionId,
    WTSUserName,
    WTSWinStationName,
    WTSDomainName,
    WTSConnectState,
    WTSClientBuildNumber,
    WTSClientName,
    WTSClientDirectory,
    WTSClientProductId,
    WTSClientHardwareId,
    WTSClientAddress,
    WTSClientDisplay,
    WTSClientProtocolType,
    WTSIdleTime,
    WTSLogonTime,
    WTSIncomingBytes,
    WTSOutgoingBytes,
    WTSIncomingFrames,
    WTSOutgoingFrames,
    WTSClientInfo,
    WTSSessionInfo,
    WTSSessionInfoEx,
    WTSConfigInfo,
    WTSValidationInfo,
    WTSSessionAddressV4,
    WTSIsRemoteSession
} WTS_INFO_CLASS;
typedef struct  _WTSCONFIGINFOW
{
    ULONG version; 
    ULONG fConnectClientDrivesAtLogon;
    ULONG fConnectPrinterAtLogon;
    ULONG fDisablePrinterRedirection;
    ULONG fDisableDefaultMainClientPrinter;
    ULONG ShadowSettings;
    WCHAR LogonUserName[USERNAME_LENGTH + 1 ];
    WCHAR LogonDomain[DOMAIN_LENGTH + 1 ];
    WCHAR WorkDirectory[MAX_PATH + 1 ];
    WCHAR InitialProgram[MAX_PATH + 1 ];
    WCHAR ApplicationName[MAX_PATH + 1 ];
} WTSCONFIGINFOW, *PWTSCONFIGINFOW;
typedef struct  _WTSCONFIGINFOA
{
    ULONG version; 
    ULONG fConnectClientDrivesAtLogon;
    ULONG fConnectPrinterAtLogon;
    ULONG fDisablePrinterRedirection;
    ULONG fDisableDefaultMainClientPrinter;
    ULONG ShadowSettings;
    CHAR LogonUserName[USERNAME_LENGTH + 1 ];
    CHAR LogonDomain[DOMAIN_LENGTH + 1 ];
    CHAR WorkDirectory[MAX_PATH + 1 ];
    CHAR InitialProgram[MAX_PATH + 1 ];
    CHAR ApplicationName[MAX_PATH + 1 ];
} WTSCONFIGINFOA, *PWTSCONFIGINFOA;
typedef struct _WTSINFOW
{
    WTS_CONNECTSTATE_CLASS State;
    DWORD SessionId;
    DWORD IncomingBytes;
    DWORD OutgoingBytes;
    DWORD IncomingFrames;
    DWORD OutgoingFrames;
    DWORD IncomingCompressedBytes;
    DWORD OutgoingCompressedBytes;
    WCHAR WinStationName[WINSTATIONNAME_LENGTH];
    WCHAR Domain[DOMAIN_LENGTH];
    WCHAR UserName[USERNAME_LENGTH+1];
    LARGE_INTEGER ConnectTime;
    LARGE_INTEGER DisconnectTime;
    LARGE_INTEGER LastInputTime;
    LARGE_INTEGER LogonTime;
    LARGE_INTEGER CurrentTime;
} WTSINFOW, * PWTSINFOW;
typedef struct _WTSINFOA
{
    WTS_CONNECTSTATE_CLASS State;
    DWORD SessionId;
    DWORD IncomingBytes;
    DWORD OutgoingBytes;
    DWORD IncomingFrames;
    DWORD OutgoingFrames;
    DWORD IncomingCompressedBytes;
    DWORD OutgoingCompressedBy;
    CHAR WinStationName[WINSTATIONNAME_LENGTH];
    CHAR Domain[DOMAIN_LENGTH];
    CHAR UserName[USERNAME_LENGTH+1];
    LARGE_INTEGER ConnectTime;
    LARGE_INTEGER DisconnectTime;
    LARGE_INTEGER LastInputTime;
    LARGE_INTEGER LogonTime;
    LARGE_INTEGER CurrentTime;
} WTSINFOA, * PWTSINFOA;
#define WTS_SESSIONSTATE_UNKNOWN    0xFFFFFFFF
#define WTS_SESSIONSTATE_LOCK       0x00000000
#define WTS_SESSIONSTATE_UNLOCK     0x00000001
typedef struct _WTSINFOEX_LEVEL1_W
{
    ULONG SessionId;
    WTS_CONNECTSTATE_CLASS SessionState;
    LONG SessionFlags;
    WCHAR WinStationName[WINSTATIONNAME_LENGTH + 1] ;
    WCHAR UserName[USERNAME_LENGTH + 1];
    WCHAR DomainName[DOMAIN_LENGTH + 1];
    LARGE_INTEGER LogonTime;
    LARGE_INTEGER ConnectTime;
    LARGE_INTEGER DisconnectTime;
    LARGE_INTEGER LastInputTime;
    LARGE_INTEGER CurrentTime;
    DWORD IncomingBytes;
    DWORD OutgoingBytes;
    DWORD IncomingFrames;
    DWORD OutgoingFrames;
    DWORD IncomingCompressedBytes;
    DWORD OutgoingCompressedBytes;
} WTSINFOEX_LEVEL1_W, *PWTSINFOEX_LEVEL1_W;
typedef struct _WTSINFOEX_LEVEL1_A
{
    ULONG SessionId;
    WTS_CONNECTSTATE_CLASS SessionState;
    LONG SessionFlags;
    CHAR WinStationName[WINSTATIONNAME_LENGTH + 1];
    CHAR UserName[USERNAME_LENGTH + 1];
    CHAR DomainName[DOMAIN_LENGTH + 1];
    LARGE_INTEGER LogonTime;
    LARGE_INTEGER ConnectTime;
    LARGE_INTEGER DisconnectTime;
    LARGE_INTEGER LastInputTime;
    LARGE_INTEGER CurrentTime;
    DWORD IncomingBytes;
    DWORD OutgoingBytes;
    DWORD IncomingFrames;
    DWORD OutgoingFrames;
    DWORD IncomingCompressedBytes;
    DWORD OutgoingCompressedBytes;
} WTSINFOEX_LEVEL1_A, *PWTSINFOEX_LEVEL1_A;
typedef union _WTSINFOEX_LEVEL_W
{
    WTSINFOEX_LEVEL1_W WTSInfoExLevel1;
} WTSINFOEX_LEVEL_W, *PWTSINFOEX_LEVEL_W;
typedef union _WTSINFOEX_LEVEL_A
{
    WTSINFOEX_LEVEL1_A WTSInfoExLevel1;
} WTSINFOEX_LEVEL_A, *PWTSINFOEX_LEVEL_A;
typedef struct _WTSINFOEXW
{
    DWORD Level;
    WTSINFOEX_LEVEL_W Data;
} WTSINFOEXW, *PWTSINFOEXW;
typedef struct _WTSINFOEXA
{
    DWORD Level;
    WTSINFOEX_LEVEL_A Data;
} WTSINFOEXA, *PWTSINFOEXA;
typedef struct _WTSCLIENTW
{
    WCHAR ClientName[ CLIENTNAME_LENGTH + 1 ];
    WCHAR Domain[ DOMAIN_LENGTH + 1 ];
    WCHAR UserName[ USERNAME_LENGTH + 1 ];
    WCHAR WorkDirectory[ MAX_PATH + 1];
    WCHAR InitialProgram[ MAX_PATH + 1];
    BYTE EncryptionLevel;
    ULONG ClientAddressFamily;
    USHORT ClientAddress[ CLIENTADDRESS_LENGTH + 1 ];
    USHORT HRes;
    USHORT VRes;
    USHORT ColorDepth;
    WCHAR ClientDirectory[ MAX_PATH + 1 ];
    ULONG ClientBuildNumber;
    ULONG ClientHardwareId;
    USHORT ClientProductId;
    USHORT OutBufCountHost;
    USHORT OutBufCountClient;
    USHORT OutBufLength;
    WCHAR  DeviceId[ MAX_PATH + 1];
} WTSCLIENTW, * PWTSCLIENTW;
typedef struct _WTSCLIENTA
{
    CHAR ClientName[ CLIENTNAME_LENGTH + 1 ];
    CHAR Domain[ DOMAIN_LENGTH + 1 ];
    CHAR UserName[ USERNAME_LENGTH + 1 ];
    CHAR WorkDirectory[ MAX_PATH + 1];
    CHAR InitialProgram[ MAX_PATH + 1 ];
    BYTE EncryptionLevel;
    ULONG ClientAddressFamily;
    USHORT ClientAddress[ CLIENTADDRESS_LENGTH + 1 ];
    USHORT HRes;
    USHORT VRes;
    USHORT ColorDepth;
    CHAR ClientDirectory[ MAX_PATH + 1 ];
    ULONG ClientBuildNumber;
    ULONG ClientHardwareId;
    USHORT ClientProductId;
    USHORT OutBufCountHost;
    USHORT OutBufCountClient;
    USHORT OutBufLength;
    CHAR  DeviceId[ MAX_PATH + 1];
} WTSCLIENTA, * PWTSCLIENTA;
#define PRODUCTINFO_COMPANYNAME_LENGTH 256
#define PRODUCTINFO_PRODUCTID_LENGTH 4
typedef struct _WTS_PRODUCT_INFOA
{
    CHAR CompanyName[PRODUCTINFO_COMPANYNAME_LENGTH];
    CHAR ProductID[PRODUCTINFO_PRODUCTID_LENGTH];
} PRODUCT_INFOA;
typedef struct _WTS_PRODUCT_INFOW
{
    WCHAR CompanyName[PRODUCTINFO_COMPANYNAME_LENGTH];
    WCHAR ProductID[PRODUCTINFO_PRODUCTID_LENGTH];
} PRODUCT_INFOW;
#define VALIDATIONINFORMATION_LICENSE_LENGTH 16384
#define VALIDATIONINFORMATION_HARDWAREID_LENGTH 20
typedef struct _WTS_VALIDATION_INFORMATIONA
{
    PRODUCT_INFOA ProductInfo;
    BYTE License[VALIDATIONINFORMATION_LICENSE_LENGTH];
    DWORD LicenseLength;
    BYTE HardwareID[VALIDATIONINFORMATION_HARDWAREID_LENGTH];
    DWORD HardwareIDLength;
} WTS_VALIDATION_INFORMATIONA, * PWTS_VALIDATION_INFORMATIONA;
typedef struct _WTS_VALIDATION_INFORMATIONW
{
    PRODUCT_INFOW ProductInfo;
    BYTE License[VALIDATIONINFORMATION_LICENSE_LENGTH];
    DWORD LicenseLength;
    BYTE HardwareID[VALIDATIONINFORMATION_HARDWAREID_LENGTH];
    DWORD HardwareIDLength;
} WTS_VALIDATION_INFORMATIONW, * PWTS_VALIDATION_INFORMATIONW;
#ifdef UNICODE
#define WTSCONFIGINFO WTSCONFIGINFOW
#define PWTSCONFIGINFO PWTSCONFIGINFOW
#define PRODUCT_INFO PRODUCT_INFOW
#define WTS_VALIDATION_INFORMATION WTS_VALIDATION_INFORMATIONW
#define PWTS_VALIDATION_INFORMATION PWTS_VALIDATION_INFORMATIONW
#define WTSINFO  WTSINFOW
#define PWTSINFO PWTSINFOW
#define WTSINFOEX  WTSINFOEXW
#define PWTSINFOEX PWTSINFOEXW
#define WTSINFOEX_LEVEL WTSINFOEX_LEVEL_W
#define PWTSINFOEX_LEVEL PWTSINFOEX_LEVEL_W
#define WTSINFOEX_LEVEL1 WTSINFOEX_LEVEL1_W
#define PWTSINFOEX_LEVEL1 PWTSINFOEX_LEVEL1_W
#define WTSCLIENT WTSCLIENTW
#define PWTSCLIENT PWTSCLIENTW
#else
#define WTSCONFIGINFO WTSCONFIGINFOA
#define PWTSCONFIGINFO PWTSCONFIGINFOA
#define PRODUCT_INFO PRODUCT_INFOA
#define WTS_VALIDATION_INFORMATION WTS_VALIDATION_INFORMATIONA
#define PWTS_VALIDATION_INFORMATION PWTS_VALIDATION_INFORMATIONA
#define WTSINFO  WTSINFOA
#define PWTSINFO PWTSINFOA
#define WTSINFOEX  WTSINFOEXA
#define PWTSINFOEX PWTSINFOEXA
#define WTSINFOEX_LEVEL WTSINFOEX_LEVEL_A
#define PWTSINFOEX_LEVEL PWTSINFOEX_LEVEL_A
#define WTSINFOEX_LEVEL1 WTSINFOEX_LEVEL1_A
#define PWTSINFOEX_LEVEL1 PWTSINFOEX_LEVEL1_A
#define WTSCLIENT WTSCLIENTA
#define PWTSCLIENT PWTSCLIENTA
#endif
typedef struct _WTS_CLIENT_ADDRESS
{
    DWORD AddressFamily;
    BYTE  Address[20];
} WTS_CLIENT_ADDRESS, * PWTS_CLIENT_ADDRESS;
typedef struct _WTS_CLIENT_DISPLAY
{
    DWORD HorizontalResolution;
    DWORD VerticalResolution;
    DWORD ColorDepth;
} WTS_CLIENT_DISPLAY, * PWTS_CLIENT_DISPLAY;
typedef enum _WTS_CONFIG_CLASS
{
    WTSUserConfigInitialProgram,
    WTSUserConfigWorkingDirectory,
    WTSUserConfigfInheritInitialProgram,
    WTSUserConfigfAllowLogonTerminalServer,
    WTSUserConfigTimeoutSettingsConnections,
    WTSUserConfigTimeoutSettingsDisconnections,
    WTSUserConfigTimeoutSettingsIdle,
    WTSUserConfigfDeviceClientDrives,
    WTSUserConfigfDeviceClientPrinters,
    WTSUserConfigfDeviceClientDefaultPrinter,
    WTSUserConfigBrokenTimeoutSettings,
    WTSUserConfigReconnectSettings,
    WTSUserConfigModemCallbackSettings,
    WTSUserConfigModemCallbackPhoneNumber,
    WTSUserConfigShadowingSettings,
    WTSUserConfigTerminalServerProfilePath,
    WTSUserConfigTerminalServerHomeDir,
    WTSUserConfigTerminalServerHomeDirDrive,
    WTSUserConfigfTerminalServerRemoteHomeDir,
    WTSUserConfigUser,
} WTS_CONFIG_CLASS;
typedef enum _WTS_CONFIG_SOURCE
{
    WTSUserConfigSourceSAM
} WTS_CONFIG_SOURCE;
typedef struct _WTSUSERCONFIGA
{
    DWORD Source;
    DWORD InheritInitialProgram;
    DWORD AllowLogonTerminalServer;
    DWORD TimeoutSettingsConnections;
    DWORD TimeoutSettingsDisconnections;
    DWORD TimeoutSettingsIdle;
    DWORD DeviceClientDrives;
    DWORD DeviceClientPrinters;
    DWORD ClientDefaultPrinter;
    DWORD BrokenTimeoutSettings;
    DWORD ReconnectSettings;
    DWORD ShadowingSettings;
    DWORD TerminalServerRemoteHomeDir;
    CHAR InitialProgram[ MAX_PATH + 1 ];
    CHAR WorkDirectory[ MAX_PATH + 1 ];
    CHAR TerminalServerProfilePath[ MAX_PATH + 1 ];
    CHAR TerminalServerHomeDir[ MAX_PATH + 1 ];
    CHAR TerminalServerHomeDirDrive[ WTS_DRIVE_LENGTH + 1 ];
} WTSUSERCONFIGA, * PWTSUSERCONFIGA;
typedef struct _WTSUSERCONFIGW
{
    DWORD Source;
    DWORD InheritInitialProgram;
    DWORD AllowLogonTerminalServer;
    DWORD TimeoutSettingsConnections;
    DWORD TimeoutSettingsDisconnections;
    DWORD TimeoutSettingsIdle;
    DWORD DeviceClientDrives;
    DWORD DeviceClientPrinters;
    DWORD ClientDefaultPrinter;
    DWORD BrokenTimeoutSettings;
    DWORD ReconnectSettings;
    DWORD ShadowingSettings;
    DWORD TerminalServerRemoteHomeDir;
    WCHAR InitialProgram[ MAX_PATH + 1 ];
    WCHAR WorkDirectory[ MAX_PATH + 1 ];
    WCHAR TerminalServerProfilePath[ MAX_PATH + 1 ];
    WCHAR TerminalServerHomeDir[ MAX_PATH + 1 ];
    WCHAR TerminalServerHomeDirDrive[ WTS_DRIVE_LENGTH + 1 ];
} WTSUSERCONFIGW, * PWTSUSERCONFIGW;
#ifdef UNICODE
#define WTSUSERCONFIG WTSUSERCONFIGW
#define PWTSUSERCONFIG PWTSUSERCONFIGW
#else
#define WTSUSERCONFIG WTSUSERCONFIGA
#define PWTSUSERCONFIG PWTSUSERCONFIGA
#endif
#define WTS_EVENT_NONE         0x00000000
#define WTS_EVENT_CREATE       0x00000001
#define WTS_EVENT_DELETE       0x00000002
#define WTS_EVENT_RENAME       0x00000004
#define WTS_EVENT_CONNECT      0x00000008
#define WTS_EVENT_DISCONNECT   0x00000010
#define WTS_EVENT_LOGON        0x00000020
#define WTS_EVENT_LOGOFF       0x00000040
#define WTS_EVENT_STATECHANGE  0x00000080
#define WTS_EVENT_LICENSE      0x00000100
#define WTS_EVENT_ALL          0x7fffffff
#define WTS_EVENT_FLUSH        0x80000000
#define REMOTECONTROL_KBDSHIFT_HOTKEY              0x1
#define REMOTECONTROL_KBDCTRL_HOTKEY               0x2
#define REMOTECONTROL_KBDALT_HOTKEY                0x4
typedef enum _WTS_VIRTUAL_CLASS
{
    WTSVirtualClientData,
    WTSVirtualFileHandle
} WTS_VIRTUAL_CLASS;
typedef struct _WTS_SESSION_ADDRESS
{
    DWORD AddressFamily;
    BYTE  Address[20];
} WTS_SESSION_ADDRESS, * PWTS_SESSION_ADDRESS;
BOOL WINAPI WTSStopRemoteControlSession(ULONG LogonId);
BOOL WINAPI WTSStartRemoteControlSessionW(LPWSTR pTargetServerName, ULONG TargetLogonId, BYTE HotkeyVk, USHORT HotkeyModifiers);
BOOL WINAPI WTSStartRemoteControlSessionA(LPSTR pTargetServerName, ULONG TargetLogonId, BYTE HotkeyVk, USHORT HotkeyModifiers);
#ifdef UNICODE
#define WTSStartRemoteControlSession WTSStartRemoteControlSessionW
#else
#define WTSStartRemoteControlSession WTSStartRemoteControlSessionA
#endif
BOOL WINAPI WTSConnectSessionA(ULONG LogonId, ULONG TargetLogonId, PSTR pPassword, BOOL bWait);
BOOL WINAPI WTSConnectSessionW(ULONG LogonId, ULONG TargetLogonId, PWSTR pPassword, BOOL bWait);
#ifdef UNICODE
#define WTSConnectSession WTSConnectSessionW
#else
#define WTSConnectSession WTSConnectSessionA
#endif
BOOL WINAPI WTSEnumerateServersW(LPWSTR pDomainName, DWORD Reserved, DWORD Version, PWTS_SERVER_INFOW *ppServerInfo, DWORD *pCount);
BOOL WINAPI WTSEnumerateServersA(LPSTR pDomainName, DWORD Reserved, DWORD Version, PWTS_SERVER_INFOA *ppServerInfo, DWORD *pCount);
#ifdef UNICODE
#define WTSEnumerateServers WTSEnumerateServersW
#else
#define WTSEnumerateServers WTSEnumerateServersA
#endif
HANDLE WINAPI WTSOpenServerW(LPWSTR pServerName);
HANDLE WINAPI WTSOpenServerA(LPSTR pServerName);
HANDLE WINAPI WTSOpenServerExW(LPWSTR pServerName);
HANDLE WINAPI WTSOpenServerExA(LPSTR pServerName);
#ifdef UNICODE
#define WTSOpenServer WTSOpenServerW
#define WTSOpenServerEx WTSOpenServerExW
#else
#define WTSOpenServer WTSOpenServerA
#define WTSOpenServerEx WTSOpenServerExA
#endif
VOID WINAPI WTSCloseServer(HANDLE hServer);
BOOL WINAPI WTSEnumerateSessionsW(HANDLE hServer, DWORD Reserved, DWORD Version, PWTS_SESSION_INFOW *ppSessionInfo, DWORD *pCount);
BOOL WINAPI WTSEnumerateSessionsA(HANDLE hServer, DWORD Reserved, DWORD Version, PWTS_SESSION_INFOA *ppSessionInfo, DWORD *pCount);
BOOL WINAPI WTSEnumerateSessionsExW(HANDLE hServer, DWORD *pLevel, DWORD Filter, PWTS_SESSION_INFO_1W *ppSessionInfo, DWORD *pCount);
BOOL WINAPI WTSEnumerateSessionsExA(HANDLE hServer, DWORD *pLevel, DWORD Filter, PWTS_SESSION_INFO_1A *ppSessionInfo, DWORD *pCount);
#ifdef UNICODE
#define WTSEnumerateSessions WTSEnumerateSessionsW
#define WTSEnumerateSessionsEx WTSEnumerateSessionsExW
#else
#define WTSEnumerateSessions WTSEnumerateSessionsA
#define WTSEnumerateSessionsEx WTSEnumerateSessionsExA
#endif
BOOL WINAPI WTSEnumerateProcessesW(HANDLE hServer, DWORD Reserved, DWORD Version, PWTS_PROCESS_INFOW *ppProcessInfo, DWORD *pCount);
BOOL WINAPI WTSEnumerateProcessesA(HANDLE hServer, DWORD Reserved, DWORD Version, PWTS_PROCESS_INFOA *ppProcessInfo, DWORD *pCount);
#ifdef UNICODE
#define WTSEnumerateProcesses WTSEnumerateProcessesW
#else
#define WTSEnumerateProcesses WTSEnumerateProcessesA
#endif
BOOL WINAPI WTSTerminateProcess(HANDLE hServer, DWORD ProcessId, DWORD ExitCode);
BOOL WINAPI WTSQuerySessionInformationW(HANDLE hServer, DWORD SessionId, WTS_INFO_CLASS WTSInfoClass, LPWSTR *ppBuffer, DWORD *pBytesReturned);
BOOL WINAPI WTSQuerySessionInformationA(HANDLE hServer, DWORD SessionId, WTS_INFO_CLASS WTSInfoClass, LPSTR *ppBuffer, DWORD *pBytesReturned);
#ifdef UNICODE
#define WTSQuerySessionInformation WTSQuerySessionInformationW
#else
#define WTSQuerySessionInformation WTSQuerySessionInformationA
#endif
BOOL WINAPI WTSQueryUserConfigW(LPWSTR pServerName, LPWSTR pUserName, WTS_CONFIG_CLASS WTSConfigClass, LPWSTR *ppBuffer, DWORD *pBytesReturned);
BOOL WINAPI WTSQueryUserConfigA(LPSTR pServerName, LPSTR pUserName, WTS_CONFIG_CLASS WTSConfigClass, LPSTR *ppBuffer, DWORD *pBytesReturned);
#ifdef UNICODE
#define WTSQueryUserConfig WTSQueryUserConfigW
#else
#define WTSQueryUserConfig WTSQueryUserConfigA
#endif
BOOL WINAPI WTSSetUserConfigW(LPWSTR pServerName, LPWSTR pUserName, WTS_CONFIG_CLASS WTSConfigClass, LPWSTR pBuffer, DWORD DataLength);
BOOL WINAPI WTSSetUserConfigA(LPSTR pServerName, LPSTR pUserName, WTS_CONFIG_CLASS WTSConfigClass, LPSTR pBuffer, DWORD DataLength);
#ifdef UNICODE
#define WTSSetUserConfig WTSSetUserConfigW
#else
#define WTSSetUserConfig WTSSetUserConfigA
#endif
BOOL WINAPI WTSSendMessageW(HANDLE hServer, DWORD SessionId, LPWSTR pTitle, DWORD TitleLength, LPWSTR pMessage, DWORD MessageLength, DWORD Style, DWORD Timeout, DWORD *pResponse, BOOL bWait);
BOOL WINAPI WTSSendMessageA(HANDLE hServer, DWORD SessionId, LPSTR pTitle, DWORD TitleLength, LPSTR pMessage, DWORD MessageLength, DWORD Style, DWORD Timeout, DWORD *pResponse, BOOL bWait);
#ifdef UNICODE
#define WTSSendMessage WTSSendMessageW
#else
#define WTSSendMessage WTSSendMessageA
#endif
BOOL WINAPI WTSDisconnectSession(HANDLE hServer, DWORD SessionId, BOOL bWait);
BOOL WINAPI WTSLogoffSession(HANDLE hServer, DWORD SessionId, BOOL bWait);
BOOL WINAPI WTSShutdownSystem(HANDLE hServer, DWORD ShutdownFlag);
BOOL WINAPI WTSWaitSystemEvent(HANDLE hServer, DWORD EventMask, DWORD *pEventFlags);
HANDLE WINAPI WTSVirtualChannelOpen(HANDLE hServer, DWORD SessionId, LPSTR pVirtualName);
#define WTS_CHANNEL_OPTION_DYNAMIC          0x00000001
#define WTS_CHANNEL_OPTION_DYNAMIC_PRI_LOW  0x00000000
#define WTS_CHANNEL_OPTION_DYNAMIC_PRI_MED  0x00000002
#define WTS_CHANNEL_OPTION_DYNAMIC_PRI_HIGH 0x00000004
#define WTS_CHANNEL_OPTION_DYNAMIC_PRI_REAL 0x00000006
#define WTS_CHANNEL_OPTION_DYNAMIC_NO_COMPRESS 0x00000008
HANDLE WINAPI WTSVirtualChannelOpenEx(DWORD SessionId, LPSTR pVirtualName, DWORD flags);
BOOL WINAPI WTSVirtualChannelClose(HANDLE hChannelHandle);
BOOL WINAPI WTSVirtualChannelRead(HANDLE hChannelHandle, ULONG TimeOut, PCHAR Buffer, ULONG BufferSize, PULONG pBytesRead);
BOOL WINAPI WTSVirtualChannelWrite(HANDLE hChannelHandle, PCHAR Buffer, ULONG Length, PULONG pBytesWritten);
BOOL WINAPI WTSVirtualChannelPurgeInput(HANDLE hChannelHandle);
BOOL WINAPI WTSVirtualChannelPurgeOutput(HANDLE hChannelHandle);
BOOL WINAPI WTSVirtualChannelQuery(HANDLE hChannelHandle, WTS_VIRTUAL_CLASS, PVOID *ppBuffer, DWORD *pBytesReturned);
VOID WINAPI WTSFreeMemory(PVOID pMemory);
#define NOTIFY_FOR_ALL_SESSIONS     1
#define NOTIFY_FOR_THIS_SESSION     0
BOOL WINAPI WTSRegisterSessionNotification(HWND hWnd, DWORD dwFlags);
BOOL WINAPI WTSUnRegisterSessionNotification(HWND hWnd);
BOOL WINAPI WTSRegisterSessionNotificationEx(HANDLE hServer, HWND hWnd, DWORD dwFlags);
BOOL WINAPI WTSUnRegisterSessionNotificationEx(HANDLE hServer, HWND hWnd);
BOOL WINAPI WTSQueryUserToken(ULONG SessionId, PHANDLE phToken);
#define WTS_PROCESS_INFO_LEVEL_0 0
#define WTS_PROCESS_INFO_LEVEL_1 1
typedef struct _WTS_PROCESS_INFO_EXW
{
	DWORD SessionId;
	DWORD ProcessId;
	LPWSTR pProcessName;
	PSID pUserSid;
	DWORD NumberOfThreads;
	DWORD HandleCount;
	DWORD PagefileUsage;
	DWORD PeakPagefileUsage;
	DWORD WorkingSetSize;
	DWORD PeakWorkingSetSize;
	LARGE_INTEGER UserTime;
	LARGE_INTEGER KernelTime;
} WTS_PROCESS_INFO_EXW, *PWTS_PROCESS_INFO_EXW;
typedef struct _WTS_PROCESS_INFO_EXA
{
	DWORD SessionId;
	DWORD ProcessId;
	LPSTR pProcessName;
	PSID pUserSid;
	DWORD NumberOfThreads;
	DWORD HandleCount;
	DWORD PagefileUsage;
	DWORD PeakPagefileUsage;
	DWORD WorkingSetSize;
	DWORD PeakWorkingSetSize;
	LARGE_INTEGER UserTime;
	LARGE_INTEGER KernelTime;
} WTS_PROCESS_INFO_EXA, *PWTS_PROCESS_INFO_EXA;
#ifdef UNICODE
#define WTS_PROCESS_INFO_EX  WTS_PROCESS_INFO_EXW
#define PWTS_PROCESS_INFO_EX PWTS_PROCESS_INFO_EXW
#else
#define WTS_PROCESS_INFO_EX  WTS_PROCESS_INFO_EXA
#define PWTS_PROCESS_INFO_EX PWTS_PROCESS_INFO_EXA
#endif
typedef enum _WTS_TYPE_CLASS
{
	WTSTypeProcessInfoLevel0,
	WTSTypeProcessInfoLevel1,
	WTSTypeSessionInfoLevel1,
} WTS_TYPE_CLASS;
BOOL WINAPI WTSFreeMemoryExW(WTS_TYPE_CLASS WTSTypeClass, PVOID pMemory, ULONG NumberOfEntries);
BOOL WINAPI WTSFreeMemoryExA(WTS_TYPE_CLASS WTSTypeClass, PVOID pMemory, ULONG NumberOfEntries);
#ifdef UNICODE
#define WTSFreeMemoryEx WTSFreeMemoryExW
#else
#define WTSFreeMemoryEx WTSFreeMemoryExA
#endif
BOOL WINAPI WTSEnumerateProcessesExW(HANDLE hServer, DWORD *pLevel, DWORD SessionId, LPWSTR *ppProcessInfo, DWORD *pCount);
BOOL WINAPI WTSEnumerateProcessesExA(HANDLE hServer, DWORD *pLevel, DWORD SessionId, LPSTR *ppProcessInfo, DWORD *pCount);
#ifdef UNICODE
#define WTSEnumerateProcessesEx WTSEnumerateProcessesExW
#else
#define WTSEnumerateProcessesEx WTSEnumerateProcessesExA
#endif
typedef WCHAR WTSLISTENERNAMEW[WTS_LISTENER_NAME_LENGTH + 1];
typedef WTSLISTENERNAMEW *PWTSLISTENERNAMEW;
typedef CHAR WTSLISTENERNAMEA[WTS_LISTENER_NAME_LENGTH + 1];
typedef WTSLISTENERNAMEA *PWTSLISTENERNAMEA;
#ifdef UNICODE
#define WTSLISTENERNAME WTSLISTENERNAMEW
#define PWTSLISTENERNAME PWTSLISTENERNAMEW
#else
#define WTSLISTENERNAME WTSLISTENERNAMEA
#define PWTSLISTENERNAME PWTSLISTENERNAMEW
#endif
BOOL WINAPI WTSEnumerateListenersW(HANDLE hServer, PVOID pReserved, DWORD Reserved, PWTSLISTENERNAMEW pListeners, DWORD *pCount);
BOOL WINAPI WTSEnumerateListenersA(HANDLE hServer, PVOID pReserved, DWORD Reserved, PWTSLISTENERNAMEA pListeners, DWORD *pCount);
#ifdef UNICODE
#define WTSEnumerateListeners WTSEnumerateListenersW
#else
#define WTSEnumerateListeners WTSEnumerateListenersA
#endif
typedef struct _WTSLISTENERCONFIGW
{
	ULONG version;
	ULONG fEnableListener;
	ULONG MaxConnectionCount;
	ULONG fPromptForPassword;
	ULONG fInheritColorDepth;
	ULONG ColorDepth;
	ULONG fInheritBrokenTimeoutSettings;
	ULONG BrokenTimeoutSettings;
	ULONG fDisablePrinterRedirection;
	ULONG fDisableDriveRedirection;
	ULONG fDisableComPortRedirection;
	ULONG fDisableLPTPortRedirection;
	ULONG fDisableClipboardRedirection;
	ULONG fDisableAudioRedirection;
	ULONG fDisablePNPRedirection;
	ULONG fDisableDefaultMainClientPrinter;
	ULONG LanAdapter;
	ULONG PortNumber;
	ULONG fInheritShadowSettings;
	ULONG ShadowSettings;
	ULONG TimeoutSettingsConnection;
	ULONG TimeoutSettingsDisconnection;
	ULONG TimeoutSettingsIdle;
	ULONG SecurityLayer;
	ULONG MinEncryptionLevel;
	ULONG UserAuthentication;
	WCHAR Comment[WTS_COMMENT_LENGTH + 1];
	WCHAR LogonUserName[USERNAME_LENGTH + 1];
	WCHAR LogonDomain[DOMAIN_LENGTH + 1];
	WCHAR WorkDirectory[MAX_PATH + 1];
	WCHAR InitialProgram[MAX_PATH + 1];
} WTSLISTENERCONFIGW, *PWTSLISTENERCONFIGW;
typedef struct _WTSLISTENERCONFIGA
{
	ULONG version;
	ULONG fEnableListener;
	ULONG MaxConnectionCount;
	ULONG fPromptForPassword;
	ULONG fInheritColorDepth;
	ULONG ColorDepth;
	ULONG fInheritBrokenTimeoutSettings;
	ULONG BrokenTimeoutSettings;
	ULONG fDisablePrinterRedirection;
	ULONG fDisableDriveRedirection;
	ULONG fDisableComPortRedirection;
	ULONG fDisableLPTPortRedirection;
	ULONG fDisableClipboardRedirection;
	ULONG fDisableAudioRedirection;
	ULONG fDisablePNPRedirection;
	ULONG fDisableDefaultMainClientPrinter;
	ULONG LanAdapter;
	ULONG PortNumber;
	ULONG fInheritShadowSettings;
	ULONG ShadowSettings;
	ULONG TimeoutSettingsConnection;
	ULONG TimeoutSettingsDisconnection;
	ULONG TimeoutSettingsIdle;
	ULONG SecurityLayer;
	ULONG MinEncryptionLevel;
	ULONG UserAuthentication;

	CHAR Comment[WTS_COMMENT_LENGTH + 1];
	CHAR LogonUserName[USERNAME_LENGTH + 1];
	CHAR LogonDomain[DOMAIN_LENGTH + 1];
	CHAR WorkDirectory[MAX_PATH + 1];
	CHAR InitialProgram[MAX_PATH + 1];
} WTSLISTENERCONFIGA, *PWTSLISTENERCONFIGA;
BOOL WINAPI WTSQueryListenerConfigW(HANDLE hServer, PVOID pReserved, DWORD Reserved, LPWSTR pListenerName, PWTSLISTENERCONFIGW pBuffer);
BOOL WINAPI WTSQueryListenerConfigA(HANDLE hServer, PVOID pReserved, DWORD Reserved, LPSTR pListenerName, PWTSLISTENERCONFIGA pBuffer);
BOOL WINAPI WTSCreateListenerW(HANDLE hServer, PVOID pReserved, DWORD Reserved, LPWSTR pListenerName, PWTSLISTENERCONFIGW pBuffer, DWORD flag);
BOOL WINAPI WTSCreateListenerA(HANDLE hServer, PVOID pReserved, DWORD Reserved, LPSTR pListenerName, PWTSLISTENERCONFIGA pBuffer, DWORD flag);
BOOL WINAPI WTSSetListenerSecurityW(HANDLE hServer, PVOID pReserved, DWORD Reserved, LPWSTR pListenerName, SECURITY_INFORMATION SecurityInformation, PSECURITY_DESCRIPTOR pSecurityDescriptor);
BOOL WINAPI WTSSetListenerSecurityA(HANDLE hServer, PVOID pReserved, DWORD Reserved, LPSTR pListenerName, SECURITY_INFORMATION SecurityInformation, PSECURITY_DESCRIPTOR pSecurityDescriptor);
BOOL WINAPI WTSGetListenerSecurityW(HANDLE hServer, PVOID pReserved, DWORD Reserved, LPWSTR pListenerName, SECURITY_INFORMATION SecurityInformation, PSECURITY_DESCRIPTOR pSecurityDescriptor, DWORD nLength, LPDWORD lpnLengthNeeded);
BOOL WINAPI WTSGetListenerSecurityA(HANDLE hServer, PVOID pReserved, DWORD Reserved, LPSTR pListenerName, SECURITY_INFORMATION SecurityInformation, PSECURITY_DESCRIPTOR pSecurityDescriptor, DWORD nLength, LPDWORD lpnLengthNeeded);
#ifdef UNICODE
#define WTSLISTENERCONFIG WTSLISTENERCONFIGW
#define PWTSLISTENERCONFIG PWTSLISTENERCONFIGW
#define WTSQueryListenerConfig WTSQueryListenerConfigW
#define WTSCreateListener WTSCreateListenerW
#define WTSSetListenerSecurity WTSSetListenerSecurityW
#define WTSGetListenerSecurity WTSGetListenerSecurityW
#else
#define WTSLISTENERCONFIG WTSLISTENERCONFIGA
#define PWTSLISTENERCONFIG PWTSLISTENERCONFIGA
#define WTSQueryListenerConfig WTSQueryListenerConfigA
#define WTSCreateListener WTSCreateListenerA
#define WTSSetListenerSecurity WTSSetListenerSecurityA
#define WTSGetListenerSecurity WTSGetListenerSecurityA
#endif
#endif

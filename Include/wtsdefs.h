/*+@@file@@----------------------------------------------------------------*//*!
 \file		wtsdefs.h
 \par Description 
            Extension and update of headers for PellesC compiler suite.
 \par Project: 
            PellesC Headers extension
 \date		Created  on Mon Sep 19 18:53:43 2016
 \date		Modified on Mon Sep 19 18:53:43 2016
 \author	frankie
\*//*-@@file@@----------------------------------------------------------------*/

#ifndef _INC_WTSDEFS
#define _INC_WTSDEFS
#if __POCC__ >= 500
#pragma once
#endif
#define WTS_DOMAIN_LENGTH            255
#define WTS_USERNAME_LENGTH          255
#define WTS_PASSWORD_LENGTH          255
#define WTS_DIRECTORY_LENGTH         256
#define WTS_INITIALPROGRAM_LENGTH    256
#define WTS_PROTOCOL_NAME_LENGTH     8
#define WTS_DRIVER_NAME_LENGTH       8
#define WTS_DEVICE_NAME_LENGTH       19
#define WTS_IMEFILENAME_LENGTH       32
#define WTS_CLIENTNAME_LENGTH        20
#define WTS_CLIENTADDRESS_LENGTH     30
#define WTS_CLIENT_PRODUCT_ID_LENGTH 32
#define WTS_MAX_PROTOCOL_CACHE       4
#define WTS_MAX_CACHE_RESERVED       20
#define WTS_MAX_RESERVED             100
#define WTS_MAX_COUNTERS             100
#define WTS_MAX_DISPLAY_IOCTL_DATA   256
#define WTS_PERF_DISABLE_NOTHING                              0x00000000
#define WTS_PERF_DISABLE_WALLPAPER                            0x00000001
#define WTS_PERF_DISABLE_FULLWINDOWDRAG                       0x00000002
#define WTS_PERF_DISABLE_MENUANIMATIONS                       0x00000004
#define WTS_PERF_DISABLE_THEMING                              0x00000008
#define WTS_PERF_ENABLE_ENHANCED_GRAPHICS                     0x00000010
#define WTS_PERF_DISABLE_CURSOR_SHADOW                        0x00000020
#define WTS_PERF_DISABLE_CURSORSETTINGS                       0x00000040
#define WTS_PERF_ENABLE_FONT_SMOOTHING                        0x00000080
#define WTS_PERF_ENABLE_DESKTOP_COMPOSITION                   0x00000100
typedef BYTE *PBYTE;
typedef struct _WTS_SOCKADDR
{
    USHORT sin_family;
    union
	{
        struct
		{
            USHORT sin_port;
            ULONG  in_addr;
            UCHAR  sin_zero[8];
        } ipv4;
        struct
		{
            USHORT sin6_port;
            ULONG  sin6_flowinfo;
            USHORT sin6_addr[8];
            ULONG  sin6_scope_id;
        } ipv6;               
    } u;
} WTS_SOCKADDR, *PWTS_SOCKADDR;
typedef struct _WTS_SMALL_RECT
{  
    SHORT Left;  
    SHORT Top;  
    SHORT Right;  
    SHORT Bottom;
} WTS_SMALL_RECT, *PWTS_SMALL_RECT;
typedef enum
{
    WTS_SERVICE_NONE,
    WTS_SERVICE_START,
    WTS_SERVICE_STOP
} WTS_RCM_SERVICE_STATE;
typedef enum
{
    WTS_DRAIN_STATE_NONE,
    WTS_DRAIN_IN_DRAIN,
    WTS_DRAIN_NOT_IN_DRAIN
} WTS_RCM_DRAIN_STATE;
typedef struct _WTS_SERVICE_STATE
{
    WTS_RCM_SERVICE_STATE   RcmServiceState;
    WTS_RCM_DRAIN_STATE     RcmDrainState;
}WTS_SERVICE_STATE, *PWTS_SERVICE_STATE;
typedef struct _WTS_SESSION_ID
{
    GUID    SessionUniqueGuid;
    ULONG   SessionId;
}WTS_SESSION_ID, *PWTS_SESSION_ID;
typedef struct _WTS_USER_CREDENTIAL
{
    WCHAR   UserName[ WTS_USERNAME_LENGTH + 1 ];
    WCHAR   Password[ WTS_PASSWORD_LENGTH + 1 ];
    WCHAR   Domain[ WTS_DOMAIN_LENGTH + 1 ];
} WTS_USER_CREDENTIAL, *PWTS_USER_CREDENTIAL;
typedef struct _WTS_SYSTEMTIME
{
    USHORT wYear;
    USHORT wMonth;
    USHORT wDayOfWeek;
    USHORT wDay;
    USHORT wHour;
    USHORT wMinute;
    USHORT wSecond;
    USHORT wMilliseconds;
} WTS_SYSTEMTIME, *PWTS_SYSTEMTIME;
typedef struct _WTS_TIME_ZONE_INFORMATION
{
    LONG Bias;
    WCHAR StandardName[ 32 ];
    WTS_SYSTEMTIME StandardDate;
    LONG StandardBias;
    WCHAR DaylightName[ 32 ];
    WTS_SYSTEMTIME DaylightDate;
    LONG DaylightBias;
} WTS_TIME_ZONE_INFORMATION, *PWTS_TIME_ZONE_INFORMATION;
typedef struct _WTS_CLIENT_DATA
{
    BOOLEAN fDisableCtrlAltDel;
    BOOLEAN fDoubleClickDetect;
    BOOLEAN fEnableWindowsKey;
    BOOLEAN fHideTitleBar;
    BOOL fInheritAutoLogon;
    BOOLEAN fPromptForPassword;
    BOOLEAN fUsingSavedCreds;
    WCHAR Domain[WTS_DOMAIN_LENGTH + 1];
    WCHAR UserName[ WTS_USERNAME_LENGTH + 1 ];
    WCHAR Password[ WTS_PASSWORD_LENGTH + 1 ];
    BOOLEAN fPasswordIsScPin;
    BOOL fInheritInitialProgram;
    WCHAR WorkDirectory[ WTS_DIRECTORY_LENGTH + 1 ];
    WCHAR InitialProgram[ WTS_INITIALPROGRAM_LENGTH + 1 ];
    BOOLEAN fMaximizeShell;
    BYTE EncryptionLevel;
    ULONG PerformanceFlags;
    WCHAR ProtocolName[ WTS_PROTOCOL_NAME_LENGTH + 1 ];
    USHORT ProtocolType;
    BOOL fInheritColorDepth;
    USHORT HRes;
    USHORT VRes;
    USHORT ColorDepth;
    WCHAR  DisplayDriverName[ WTS_DRIVER_NAME_LENGTH + 1 ];
    WCHAR  DisplayDeviceName[ WTS_DEVICE_NAME_LENGTH + 1 ];
    BOOLEAN fMouse;
    ULONG KeyboardLayout;
    ULONG KeyboardType;
    ULONG KeyboardSubType;
    ULONG KeyboardFunctionKey;
    WCHAR imeFileName[ WTS_IMEFILENAME_LENGTH + 1 ];
    ULONG ActiveInputLocale;
    BOOLEAN fNoAudioPlayback;
    BOOLEAN fRemoteConsoleAudio;
    WCHAR AudioDriverName[ WTS_DRIVER_NAME_LENGTH + 1 ];
    WTS_TIME_ZONE_INFORMATION ClientTimeZone;
    WCHAR ClientName[ WTS_CLIENTNAME_LENGTH + 1 ];
    ULONG SerialNumber;
    ULONG ClientAddressFamily;
    WCHAR ClientAddress[ WTS_CLIENTADDRESS_LENGTH + 1 ];
    WTS_SOCKADDR ClientSockAddress;
    WCHAR ClientDirectory[ WTS_DIRECTORY_LENGTH + 1 ];
    ULONG ClientBuildNumber;
    USHORT ClientProductId;
    USHORT OutBufCountHost;
    USHORT OutBufCountClient;
    USHORT OutBufLength;
    ULONG ClientSessionId;
    WCHAR ClientDigProductId[ WTS_CLIENT_PRODUCT_ID_LENGTH + 1 ];
    BOOLEAN fDisableCpm;
    BOOLEAN fDisableCdm;
    BOOLEAN fDisableCcm;
    BOOLEAN fDisableLPT;
    BOOLEAN fDisableClip;
    BOOLEAN fDisablePNP;
} WTS_CLIENT_DATA, *PWTS_CLIENT_DATA;
typedef struct _WTS_USER_DATA
{
    WCHAR WorkDirectory[ WTS_DIRECTORY_LENGTH + 1 ];
    WCHAR InitialProgram[ WTS_INITIALPROGRAM_LENGTH + 1 ];
    WTS_TIME_ZONE_INFORMATION UserTimeZone;
}WTS_USER_DATA, *PWTS_USER_DATA;
typedef struct _WTS_POLICY_DATA
{
    BOOLEAN fDisableEncryption;
    BOOLEAN fDisableAutoReconnect;
    ULONG ColorDepth;
    BYTE MinEncryptionLevel;
    BOOLEAN fDisableCpm;
    BOOLEAN fDisableCdm;
    BOOLEAN fDisableCcm;
    BOOLEAN fDisableLPT;
    BOOLEAN fDisableClip;
    BOOLEAN fDisablePNPRedir;
} WTS_POLICY_DATA, *PWTS_POLICY_DATA;
typedef struct _WTS_PROTOCOL_CACHE
{
    ULONG CacheReads;
    ULONG CacheHits;
} WTS_PROTOCOL_CACHE, *PWTS_PROTOCOL_CACHE;
typedef union _WTS_CACHE_STATS_UN
{
    WTS_PROTOCOL_CACHE ProtocolCache[ WTS_MAX_PROTOCOL_CACHE ];  
    ULONG TShareCacheStats;
    ULONG Reserved[ WTS_MAX_CACHE_RESERVED ];
} WTS_CACHE_STATS_UN, *PWTS_CACHE_STATS_UN;
typedef struct _WTS_CACHE_STATS
{
    DWORD Specific;
    WTS_CACHE_STATS_UN Data;
    USHORT ProtocolType;
    USHORT Length;
} WTS_CACHE_STATS, *PWTS_CACHE_STATS;
typedef struct _WTS_PROTOCOL_COUNTERS {
    ULONG WdBytes;
    ULONG WdFrames;
    ULONG WaitForOutBuf;
    ULONG Frames;
    ULONG Bytes;
    ULONG CompressedBytes;
    ULONG CompressFlushes;
    ULONG Errors;
    ULONG Timeouts;
    ULONG AsyncFramingError;
    ULONG AsyncOverrunError;
    ULONG AsyncOverflowError;
    ULONG AsyncParityError;
    ULONG TdErrors;
    USHORT ProtocolType;
    USHORT Length;
    USHORT Specific;
    ULONG Reserved[ WTS_MAX_RESERVED ];        
} WTS_PROTOCOL_COUNTERS, * PWTS_PROTOCOL_COUNTERS;
typedef struct _WTS_PROTOCOL_STATUS
{
    WTS_PROTOCOL_COUNTERS Output;
    WTS_PROTOCOL_COUNTERS Input;
    WTS_CACHE_STATS Cache;
    ULONG AsyncSignal;
    ULONG AsyncSignalMask;
    LARGE_INTEGER  Counters[ WTS_MAX_COUNTERS ];      
} WTS_PROTOCOL_STATUS, * PWTS_PROTOCOL_STATUS;
typedef struct _WTS_DISPLAY_IOCTL
{
    BYTE  pDisplayIOCtlData[ WTS_MAX_DISPLAY_IOCTL_DATA ];
    ULONG cbDisplayIOCtlData;
} WTS_DISPLAY_IOCTL, * PWTS_DISPLAY_IOCTL;
typedef enum _WTS_LOGON_ERROR_REDIRECTOR_RESPONSE
{
    WTS_LOGON_ERR_INVALID = 0,
    WTS_LOGON_ERR_NOT_HANDLED,
    WTS_LOGON_ERR_HANDLED_SHOW,
    WTS_LOGON_ERR_HANDLED_DONT_SHOW,
    WTS_LOGON_ERR_HANDLED_DONT_SHOW_START_OVER,
} WTS_LOGON_ERROR_REDIRECTOR_RESPONSE;
#define WTS_VALUE_TYPE_ULONG        1
#define WTS_VALUE_TYPE_STRING       2
#define WTS_VALUE_TYPE_BINARY       3
#define WTS_VALUE_TYPE_GUID         4
typedef struct __WTS_PROPERTY_VALUE
{
    unsigned short Type;
    union
	{
        ULONG ulVal;
        struct
		{
            ULONG size;
            WCHAR* pstrVal;
        } strVal;
        struct
		{
            ULONG size;
            char* pbVal;
        } bVal; 
        GUID guidVal;               
    } u;
} WTS_PROPERTY_VALUE, *PWTS_PROPERTY_VALUE;
DEFINE_GUID(WTS_QUERY_ALLOWED_INITIAL_APP, 0xc77d1b30, 0x5be1, 0x4c6b, 0xa0, 0xe1, 0xbd, 0x6d, 0x2e, 0x5c, 0x9f, 0xcc);
DEFINE_GUID(WTS_QUERY_LOGON_SCREEN_SIZE, 0x8b8e0fe7, 0x0804, 0x4a0e, 0xb2, 0x79, 0x86, 0x60, 0xb1, 0xdf, 0x00, 0x49);
DEFINE_GUID(WTS_QUERY_AUDIOENUM_DLL, 0x9bf4fa97, 0xc883, 0x4c2a, 0x80, 0xab, 0x5a, 0x39, 0xc9, 0xaf, 0x00, 0xdb);
DEFINE_GUID(WTS_QUERY_MF_FORMAT_SUPPORT, 0x41869ad0, 0x6332, 0x4dc8, 0x95, 0xd5, 0xdb, 0x74, 0x9e, 0x2f, 0x1d, 0x94);
#define WTS_KEY_EXCHANGE_ALG_RSA    1
#define WTS_KEY_EXCHANGE_ALG_DH     2
#define WTS_LICENSE_PROTOCOL_VERSION            0x00010000
#define WTS_LICENSE_PREAMBLE_VERSION            0x03
#define WTS_LICENSE_CURRENT_PROTOCOL_VERSION    WTS_LICENSE_PROTOCOL_VERSION | WTS_LICENSE_PREAMBLE_VERSION
typedef enum
{
    WTS_CERT_TYPE_INVALID       = 0,
    WTS_CERT_TYPE_PROPRIETORY   = 1,
    WTS_CERT_TYPE_X509          = 2
} WTS_CERT_TYPE;
#define WTS_LICENSE_CLIENT_NAME_BYTE_LENGTH (WTS_CLIENTNAME_LENGTH + 1) * sizeof( WCHAR )
typedef struct _WTS_LICENSE_CAPABILITIES
{
    DWORD           KeyExchangeAlg;
    DWORD           ProtocolVer;    
    BOOL            fAuthenticateServer;
    WTS_CERT_TYPE   CertType;
    DWORD           cbClientName;
    BYTE            rgbClientName[WTS_LICENSE_CLIENT_NAME_BYTE_LENGTH];
} WTS_LICENSE_CAPABILITIES, *PWTS_LICENSE_CAPABILITIES;
#endif

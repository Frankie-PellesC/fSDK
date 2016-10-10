/*+@@file@@----------------------------------------------------------------*//*!
 \file		Winineti.h
 \par Description 
            Extension and update of headers for PellesC compiler suite.
 \par Project: 
            PellesC Headers extension
 \date		Created  on Sun Sep  4 22:19:01 2016
 \date		Modified on Sun Sep  4 22:19:01 2016
 \author	frankie
\*//*-@@file@@----------------------------------------------------------------*/

#if __POCC__ >= 500
#pragma once
#endif
#include <iedial.h>
#include <schannel.h>
#define SECURITY_WIN32
#include <sspi.h>
#if !defined(_WININETEX_)
#define _WININETEX_
#define MAX_CACHE_ENTRY_INFO_SIZE       4096
#define INTERNET_FLAG_BGUPDATE          0x00000008
#define INTERNET_FLAG_FTP_FOLDER_VIEW   0x00000004
#define INTERNET_FLAGS_MASK_INTERNAL (INTERNET_FLAGS_MASK | INTERNET_FLAG_FTP_FOLDER_VIEW)
typedef struct
{
    DWORD dwStatus;
    DWORD dwSize;
} INTERNET_PREFETCH_STATUS, * LPINTERNET_PREFETCH_STATUS;
#define INTERNET_PREFETCH_PROGRESS  0
#define INTERNET_PREFETCH_COMPLETE  1
#define INTERNET_PREFETCH_ABORTED   2
#define INTERNET_ONLINE_OFFLINE_INFO    INTERNET_CONNECTED_INFO
#define LPINTERNET_ONLINE_OFFLINE_INFO  LPINTERNET_CONNECTED_INFO
#define dwOfflineState                  dwConnectedState
#define ISO_FORCE_OFFLINE       ISO_FORCE_DISCONNECTED
#define DLG_FLAGS_INVALID_CA                    0x01000000
#define DLG_FLAGS_SEC_CERT_CN_INVALID           0x02000000
#define DLG_FLAGS_SEC_CERT_DATE_INVALID         0x04000000
#define DLG_FLAGS_SEC_CERT_REV_FAILED           0x00800000
#ifdef __WINCRYPT_H__
#ifdef ALGIDDEF
#define INTERNET_SECURITY_INFO_DEFINED
typedef struct
{
    DWORD dwSize;
    PCCERT_CONTEXT pCertificate;
    PCCERT_CHAIN_CONTEXT pcCertChain;
    SecPkgContext_ConnectionInfo connectionInfo;
    SecPkgContext_CipherInfo cipherInfo;
    PCCERT_CHAIN_CONTEXT pcUnverifiedCertChain;
    SecPkgContext_Bindings channelBindingToken;
} INTERNET_SECURITY_INFO, * LPINTERNET_SECURITY_INFO;
typedef struct
{
    DWORD dwSize;
    BOOL fSecure;
    SecPkgContext_ConnectionInfo connectionInfo;
    SecPkgContext_CipherInfo cipherInfo;
} INTERNET_SECURITY_CONNECTION_INFO , * LPINTERNET_SECURITY_CONNECTION_INFO;
INTERNETAPI_(BOOL)InternetAlgIdToStringA(ALG_ID ai, LPSTR lpstr, LPDWORD lpdwBufferLength, DWORD dwReserved);
INTERNETAPI_(BOOL)InternetAlgIdToStringW(ALG_ID ai, LPWSTR lpstr, LPDWORD lpdwBufferLength, DWORD dwReserved);
#ifdef UNICODE
#define InternetAlgIdToString  InternetAlgIdToStringW
#else
#define InternetAlgIdToString  InternetAlgIdToStringA
#endif
INTERNETAPI_(BOOL)InternetSecurityProtocolToStringA(DWORD dwProtocol, LPSTR lpstr, LPDWORD lpdwBufferLength, DWORD dwReserved);
INTERNETAPI_(BOOL)InternetSecurityProtocolToStringW(DWORD dwProtocol, LPWSTR lpstr, LPDWORD lpdwBufferLength, DWORD dwReserved);
#ifdef UNICODE
#define InternetSecurityProtocolToString  InternetSecurityProtocolToStringW
#else
#define InternetSecurityProtocolToString  InternetSecurityProtocolToStringA
#endif
#if (_WIN32_IE >= _WIN32_IE_IE70)
INTERNETAPI_(BOOL)InternetGetSecurityInfoByURLA(LPSTR lpszURL, PCCERT_CHAIN_CONTEXT * ppCertChain, DWORD * pdwSecureFlags);
INTERNETAPI_(BOOL)InternetGetSecurityInfoByURLW(LPCWSTR lpszURL, PCCERT_CHAIN_CONTEXT * ppCertChain, DWORD * pdwSecureFlags);
#ifdef UNICODE
#define InternetGetSecurityInfoByURL  InternetGetSecurityInfoByURLW
#else
#ifdef _WINX32_
#define InternetGetSecurityInfoByURL  InternetGetSecurityInfoByURLA
#else
INTERNETAPI_(BOOL)InternetGetSecurityInfoByURL(LPSTR lpszURL, PCCERT_CHAIN_CONTEXT * ppCertChain, DWORD * pdwSecureFlags);
#endif
#endif
#endif
#endif
#endif
#ifdef INTERNET_SECURITY_INFO_DEFINED
INTERNETAPI_(DWORD)ShowSecurityInfo(HWND hWndParent, LPINTERNET_SECURITY_INFO pSecurityInfo);
#endif
INTERNETAPI_(DWORD)ShowX509EncodedCertificate(HWND hWndParent, LPBYTE lpCert, DWORD cbCert);
INTERNETAPI_(DWORD)ShowClientAuthCerts(HWND hWndParent);
INTERNETAPI_(DWORD)ParseX509EncodedCertificateForListBoxEntry(LPBYTE lpCert, DWORD cbCert, LPSTR lpszListBoxEntry, LPDWORD lpdwListBoxEntry);
INTERNETAPI_(BOOL)InternetShowSecurityInfoByURLA(LPSTR lpszURL, HWND hwndParent);
INTERNETAPI_(BOOL)InternetShowSecurityInfoByURLW(LPCWSTR lpszURL, HWND hwndParent);
#ifdef UNICODE
#define InternetShowSecurityInfoByURL  InternetShowSecurityInfoByURLW
#else
#ifdef _WINX32_
#define InternetShowSecurityInfoByURL  InternetShowSecurityInfoByURLA
#else
INTERNETAPI_(BOOL)InternetShowSecurityInfoByURL(LPSTR lpszURL, HWND hwndParent);
#endif
#endif
typedef enum
{
	FORTCMD_LOGON = 1,
	FORTCMD_LOGOFF = 2,
	FORTCMD_CHG_PERSONALITY = 3,
} FORTCMD;
INTERNETAPI_(BOOL)InternetFortezzaCommand(DWORD dwCommand, HWND hwnd, DWORD_PTR dwReserved);
typedef enum
{
	FORTSTAT_INSTALLED = 0x00000001,
	FORTSTAT_LOGGEDON = 0x00000002,
} FORTSTAT;
INTERNETAPI_(BOOL)InternetQueryFortezzaStatus(DWORD * pdwStatus, DWORD_PTR dwReserved);
	BOOLAPI InternetDebugGetLocalTime(SYSTEMTIME *pstLocalTime, DWORD *pdwReserved);
#define ICU_ESCAPE_AUTHORITY 0x00002000
#define INTERNET_SERVICE_URL    0
#define InternetConnectUrl(hInternet, lpszUrl, dwFlags, dwContext) \
					    InternetConnect(hInternet,                      \
					                    lpszUrl,                        \
					                    INTERNET_INVALID_PORT_NUMBER,   \
					                    NULL,                           \
					                    NULL,                           \
					                    INTERNET_SERVICE_URL,           \
					                    dwFlags,                        \
					                    dwContext                       \
					                    )
INTERNETAPI_(BOOL)InternetWriteFileExA(HINTERNET hFile, LPINTERNET_BUFFERSA lpBuffersIn, DWORD dwFlags, DWORD_PTR dwContext);
INTERNETAPI_(BOOL)InternetWriteFileExW(HINTERNET hFile, LPINTERNET_BUFFERSW lpBuffersIn, DWORD dwFlags, DWORD_PTR dwContext);
#ifdef UNICODE
#define InternetWriteFileEx  InternetWriteFileExW
#else
#define InternetWriteFileEx  InternetWriteFileExA
#endif
#define INTERNET_OPTION_CONTEXT_VALUE_OLD       10
#define INTERNET_OPTION_NET_SPEED               61
#define INTERNET_OPTION_SECURITY_CONNECTION_INFO  66
#define INTERNET_OPTION_DETECT_POST_SEND        71
#define INTERNET_OPTION_DISABLE_NTLM_PREAUTH    72
#define INTERNET_OPTION_ORIGINAL_CONNECT_FLAGS                  97
#define INTERNET_OPTION_CERT_ERROR_FLAGS             98
#define INTERNET_OPTION_IGNORE_CERT_ERROR_FLAGS      99
#define INTERNET_OPTION_SESSION_START_TIME           106
#define INTERNET_OPTION_PROXY_CREDENTIALS            107
#define INTERNET_OPTION_EXTENDED_CALLBACKS           108
#define INTERNET_OPTION_PROXY_FROM_REQUEST           109
#define INTERNET_OPTION_ALLOW_FAILED_CONNECT_CONTENT 110
#define INTERNET_OPTION_CACHE_PARTITION              111
#define INTERNET_OPTION_AUTODIAL_HWND                112
#define INTERNET_OPTION_SERVER_CREDENTIALS           113
#define INTERNET_OPTION_WPAD_SLEEP                   114
#define INTERNET_LAST_OPTION_INTERNAL           INTERNET_OPTION_WPAD_SLEEP
#define INTERNET_OPTION_OFFLINE_TIMEOUT INTERNET_OPTION_DISCONNECTED_TIMEOUT
#define INTERNET_OPTION_LINE_STATE      INTERNET_OPTION_CONNECTED_STATE
#define AUTH_FLAG_RESET                         0x00000000
#define INTERNET_STATUS_PROXY_CREDENTIALS       400
#define INTERNET_STATUS_SERVER_CREDENTIALS      401
#define INTERNET_STATUS_SERVER_CONNECTION_STATE 410
#define INTERNET_STATUS_END_BROWSER_SESSION     420
#define INTERNET_STATUS_COOKIE                  430
typedef struct _INTERNET_SERVER_CONNECTION_STATE
{
    LPCWSTR lpcwszHostName;
    BOOL fProxy;
    DWORD dwCounter;
    DWORD dwConnectionLimit;
    DWORD dwAvailableCreates;
    DWORD dwAvailableKeepAlives;
    DWORD dwActiveConnections;
    DWORD dwWaiters;
} INTERNET_SERVER_CONNECTION_STATE, *PINTERNET_SERVER_CONNECTION_STATE;
typedef struct _INTERNET_END_BROWSER_SESSION_DATA
{
    LPVOID lpBuffer;
    DWORD dwBufferLength;
} INTERNET_END_BROWSER_SESSION_DATA, *PINTERNET_END_BROWSER_SESSION_DATA;
typedef struct _INTERNET_CALLBACK_COOKIE
{
    PCWSTR pcwszName;
    PCWSTR pcwszValue;
    PCWSTR pcwszDomain;
    PCWSTR pcwszPath;
    FILETIME ftExpires;
    DWORD dwFlags;
} INTERNET_CALLBACK_COOKIE, *PINTERNET_CALLBACK_COOKIE;
typedef struct _INTERNET_CREDENTIALS
{
    LPCWSTR lpcwszHostName;
    DWORD dwPort;
    DWORD dwScheme;
    LPCWSTR lpcwszUrl;
    LPCWSTR lpcwszRealm;
    BOOL fAuthIdentity;
    union
	{
        struct
		{
            LPCWSTR lpcwszUserName;
            LPCWSTR lpcwszPassword;
        };
        PVOID pAuthIdentityOpaque;
    };
} INTERNET_CREDENTIALS, *PINTERNET_CREDENTIALS;
#define COOKIE_STATE_LB     0
#define COOKIE_STATE_UB     5
#define     MaxPrivacySettings      0x4000
INTERNETAPI_(int)   FindP3PPolicySymbol(const char *pszSymbol);
#define INTERNET_STATE_ONLINE       INTERNET_STATE_CONNECTED
#define INTERNET_STATE_OFFLINE      INTERNET_STATE_DISCONNECTED
#define INTERNET_STATE_OFFLINE_USER INTERNET_STATE_DISCONNECTED_BY_USER
#define INTERNET_LINE_STATE_MASK    (INTERNET_STATE_ONLINE | INTERNET_STATE_OFFLINE)
#define INTERNET_BUSY_STATE_MASK    (INTERNET_STATE_IDLE | INTERNET_STATE_BUSY)
#define INTERNET_STATUS_FILTER_RESOLVING        0x00000001
#define INTERNET_STATUS_FILTER_RESOLVED         0x00000002
#define INTERNET_STATUS_FILTER_CONNECTING       0x00000004
#define INTERNET_STATUS_FILTER_CONNECTED        0x00000008
#define INTERNET_STATUS_FILTER_SENDING          0x00000010
#define INTERNET_STATUS_FILTER_SENT             0x00000020
#define INTERNET_STATUS_FILTER_RECEIVING        0x00000040
#define INTERNET_STATUS_FILTER_RECEIVED         0x00000080
#define INTERNET_STATUS_FILTER_CLOSING          0x00000100
#define INTERNET_STATUS_FILTER_CLOSED           0x00000200
#define INTERNET_STATUS_FILTER_HANDLE_CREATED   0x00000400
#define INTERNET_STATUS_FILTER_HANDLE_CLOSING   0x00000800
#define INTERNET_STATUS_FILTER_PREFETCH         0x00001000
#define INTERNET_STATUS_FILTER_REDIRECT         0x00002000
#define INTERNET_STATUS_FILTER_STATE_CHANGE     0x00004000
typedef struct _INTERNET_COOKIE
{
    DWORD cbSize;
    LPSTR pszName;
    LPSTR pszData;
    LPSTR pszDomain;
    LPSTR pszPath;
    FILETIME *pftExpires;
    DWORD dwFlags;
    LPSTR pszUrl;
    LPSTR pszP3PPolicy;
} INTERNET_COOKIE, *PINTERNET_COOKIE;
typedef struct _COOKIE_DLG_INFO
{
    LPWSTR  pszServer;
    PINTERNET_COOKIE pic;
    DWORD   dwStopWarning;
    INT     cx;
    INT     cy;
    LPWSTR  pszHeader;
    DWORD   dwOperation;
} COOKIE_DLG_INFO, *PCOOKIE_DLG_INFO;
#define COOKIE_DONT_ALLOW       1
#define COOKIE_ALLOW            2
#define COOKIE_ALLOW_ALL        4
#define COOKIE_DONT_ALLOW_ALL   8
#define COOKIE_OP_SET           0x01
#define COOKIE_OP_MODIFY        0x02
#define COOKIE_OP_GET           0x04
#define COOKIE_OP_SESSION       0x08
#define COOKIE_OP_PERSISTENT    0x10
#define COOKIE_OP_3RD_PARTY     0x20
#define INTERNET_COOKIE_RESTRICTED_ZONE 0x00020000
#define INTERNET_COOKIE_NO_CALLBACK     0x40000000
#define INTERNET_COOKIE_ECTX_3RDPARTY   0x80000000
BOOLAPI HttpCheckDavComplianceA(LPCSTR lpszUrl, LPCSTR lpszComplianceToken, LPBOOL lpfFound, HWND hWnd, LPVOID lpvReserved);
#define INTERNET_COOKIE_RESTRICTED_ZONE 0x00020000
#define INTERNET_COOKIE_NO_CALLBACK     0x40000000
#define INTERNET_COOKIE_ECTX_3RDPARTY   0x80000000
BOOLAPI HttpCheckDavComplianceW(LPCWSTR lpszUrl, LPCWSTR lpszComplianceToken, LPBOOL lpfFound, HWND hWnd, LPVOID lpvReserved);
#ifdef UNICODE
#define HttpCheckDavCompliance  HttpCheckDavComplianceW
#else
#define HttpCheckDavCompliance  HttpCheckDavComplianceA
#endif
BOOLAPI HttpCheckCachedDavStatusA(LPCSTR lpszUrl, LPDWORD lpdwStatus);
BOOLAPI HttpCheckCachedDavStatusW(LPCWSTR lpszUrl, LPDWORD lpdwStatus);
#ifdef UNICODE
#define HttpCheckCachedDavStatus  HttpCheckCachedDavStatusW
#else
#define HttpCheckCachedDavStatus  HttpCheckCachedDavStatusA
#endif
BOOLAPI HttpCheckDavCollectionA(LPCSTR lpszUrl, LPBOOL lpfFound, HWND hWnd, LPVOID lpvReserved);
BOOLAPI HttpCheckDavCollectionW(LPCWSTR lpszUrl, LPBOOL lpfFound, HWND hWnd, LPVOID lpvReserved);
#ifdef UNICODE
#define HttpCheckDavCollection  HttpCheckDavCollectionW
#else
#define HttpCheckDavCollection  HttpCheckDavCollectionA
#endif
#define DAV_LEVEL1_STATUS               0x00000001
#define DAV_COLLECTION_STATUS           0x00004000
#define DAV_DETECTION_REQUIRED          0x00008000
#define FLAGS_ERROR_UI_SHOW_IDN_HOSTNAME        0x20
#define ERROR_INTERNET_NO_NEW_CONTAINERS        (INTERNET_ERROR_BASE + 51)
#define ERROR_INTERNET_OFFLINE  ERROR_INTERNET_DISCONNECTED
#define INTERNET_INTERNAL_ERROR_BASE            (INTERNET_ERROR_BASE + 900)
#define ERROR_INTERNET_INTERNAL_SOCKET_ERROR    (INTERNET_INTERNAL_ERROR_BASE + 1)
#define ERROR_INTERNET_CONNECTION_AVAILABLE     (INTERNET_INTERNAL_ERROR_BASE + 2)
#define ERROR_INTERNET_NO_KNOWN_SERVERS         (INTERNET_INTERNAL_ERROR_BASE + 3)
#define ERROR_INTERNET_PING_FAILED              (INTERNET_INTERNAL_ERROR_BASE + 4)
#define ERROR_INTERNET_NO_PING_SUPPORT          (INTERNET_INTERNAL_ERROR_BASE + 5)
#define ERROR_INTERNET_CACHE_SUCCESS            (INTERNET_INTERNAL_ERROR_BASE + 6)
#define ERROR_HTTP_COOKIE_NEEDS_CONFIRMATION_EX (INTERNET_INTERNAL_ERROR_BASE + 7)
#define HTTP_1_1_CACHE_ENTRY            0x00000040
#define STATIC_CACHE_ENTRY              0x00000080
#define MUST_REVALIDATE_CACHE_ENTRY     0x00000100
#define SHORTPATH_CACHE_ENTRY           0x00000200
#define COOKIE_ACCEPTED_CACHE_ENTRY     0x00001000
#define COOKIE_LEASHED_CACHE_ENTRY      0x00002000
#define COOKIE_DOWNGRADED_CACHE_ENTRY   0x00004000
#define COOKIE_REJECTED_CACHE_ENTRY     0x00008000
#define PRIVACY_MODE_CACHE_ENTRY        0x00020000
#define XDR_CACHE_ENTRY                 0x00040000
#define PENDING_DELETE_CACHE_ENTRY      0x00400000
#define OTHER_USER_CACHE_ENTRY          0x00800000
#define PRIVACY_IMPACTED_CACHE_ENTRY    0x02000000
#define POST_RESPONSE_CACHE_ENTRY       0x04000000
#define INSTALLED_CACHE_ENTRY           0x10000000
#define POST_CHECK_CACHE_ENTRY          0x20000000
#define IDENTITY_CACHE_ENTRY            0x80000000
#define ANY_CACHE_ENTRY                 0xFFFFFFFF
#define INCLUDE_BY_DEFAULT_CACHE_ENTRY \
  ( HTTP_1_1_CACHE_ENTRY \
  | STATIC_CACHE_ENTRY \
  | MUST_REVALIDATE_CACHE_ENTRY \
  | PRIVACY_IMPACTED_CACHE_ENTRY \
  | POST_CHECK_CACHE_ENTRY \
  | COOKIE_ACCEPTED_CACHE_ENTRY \
  | COOKIE_LEASHED_CACHE_ENTRY \
  | COOKIE_DOWNGRADED_CACHE_ENTRY \
  | COOKIE_REJECTED_CACHE_ENTRY \
  | SHORTPATH_CACHE_ENTRY \
  )
#define CACHEGROUP_FLAG_VALID               0x00000007
#define CACHEGROUP_ID_BUILTIN_STICKY       0x1000000000000007
typedef struct _INTERNET_CACHE_CONFIG_PATH_ENTRYA
{
    CHAR   CachePath[MAX_PATH];
    DWORD dwCacheSize;
} INTERNET_CACHE_CONFIG_PATH_ENTRYA, * LPINTERNET_CACHE_CONFIG_PATH_ENTRYA;
typedef struct _INTERNET_CACHE_CONFIG_PATH_ENTRYW
{
    WCHAR  CachePath[MAX_PATH];
    DWORD dwCacheSize;
} INTERNET_CACHE_CONFIG_PATH_ENTRYW, * LPINTERNET_CACHE_CONFIG_PATH_ENTRYW;
#ifdef UNICODE
typedef INTERNET_CACHE_CONFIG_PATH_ENTRYW INTERNET_CACHE_CONFIG_PATH_ENTRY;
typedef LPINTERNET_CACHE_CONFIG_PATH_ENTRYW LPINTERNET_CACHE_CONFIG_PATH_ENTRY;
#else
typedef INTERNET_CACHE_CONFIG_PATH_ENTRYA INTERNET_CACHE_CONFIG_PATH_ENTRY;
typedef LPINTERNET_CACHE_CONFIG_PATH_ENTRYA LPINTERNET_CACHE_CONFIG_PATH_ENTRY;
#endif
typedef struct _INTERNET_CACHE_CONFIG_INFOA
{
    DWORD dwStructSize;
    DWORD dwContainer;
    DWORD dwQuota;
    DWORD dwReserved4;
    BOOL  fPerUser;
    DWORD dwSyncMode;
    DWORD dwNumCachePaths;
    union
    {
        struct
        {
            CHAR   CachePath[MAX_PATH];
            DWORD dwCacheSize;
        };
        INTERNET_CACHE_CONFIG_PATH_ENTRYA CachePaths[ANYSIZE_ARRAY];
    };
    DWORD dwNormalUsage;
    DWORD dwExemptUsage;
} INTERNET_CACHE_CONFIG_INFOA, * LPINTERNET_CACHE_CONFIG_INFOA;
typedef struct _INTERNET_CACHE_CONFIG_INFOW
{
    DWORD dwStructSize;
    DWORD dwContainer;
    DWORD dwQuota;
    DWORD dwReserved4;
    BOOL  fPerUser;
    DWORD dwSyncMode;
    DWORD dwNumCachePaths;
    union
    {
        struct
        {
            WCHAR  CachePath[MAX_PATH];
            DWORD dwCacheSize;
        };
        INTERNET_CACHE_CONFIG_PATH_ENTRYW CachePaths[ANYSIZE_ARRAY];
    };
    DWORD dwNormalUsage;
    DWORD dwExemptUsage;
} INTERNET_CACHE_CONFIG_INFOW, * LPINTERNET_CACHE_CONFIG_INFOW;
#ifdef UNICODE
typedef INTERNET_CACHE_CONFIG_INFOW INTERNET_CACHE_CONFIG_INFO;
typedef LPINTERNET_CACHE_CONFIG_INFOW LPINTERNET_CACHE_CONFIG_INFO;
#else
typedef INTERNET_CACHE_CONFIG_INFOA INTERNET_CACHE_CONFIG_INFO;
typedef LPINTERNET_CACHE_CONFIG_INFOA LPINTERNET_CACHE_CONFIG_INFO;
#endif
#if _MSC_VER >= 1200
#pragma warning(pop)
#else
#pragma warning(default:4201)
#endif
BOOLAPI IsUrlCacheEntryExpiredA(LPCSTR lpszUrlName, DWORD dwFlags, FILETIME *pftLastModified);
BOOLAPI IsUrlCacheEntryExpiredW(LPCWSTR lpszUrlName, DWORD dwFlags, FILETIME *pftLastModified);
#ifdef UNICODE
#define IsUrlCacheEntryExpired  IsUrlCacheEntryExpiredW
#else
#define IsUrlCacheEntryExpired  IsUrlCacheEntryExpiredA
#endif
#define INTERNET_CACHE_FLAG_ALLOW_COLLISIONS     0x00000100
#define INTERNET_CACHE_FLAG_INSTALLED_ENTRY      0x00000200
#define INTERNET_CACHE_FLAG_ENTRY_OR_MAPPING     0x00000400
#define INTERNET_CACHE_FLAG_ADD_FILENAME_ONLY    0x00000800
#define INTERNET_CACHE_FLAG_GET_STRUCT_ONLY      0x00001000
#define CACHE_ENTRY_TYPE_FC         0x00001000
#define CACHE_ENTRY_MODIFY_DATA_FC  0x80000000
#define INTERNET_CACHE_CONTAINER_NOSUBDIRS (0x1)
#define INTERNET_CACHE_CONTAINER_AUTODELETE (0x2)
#define INTERNET_CACHE_CONTAINER_RESERVED1 (0x4)
#define INTERNET_CACHE_CONTAINER_NODESKTOPINIT (0x8)
#define INTERNET_CACHE_CONTAINER_MAP_ENABLED (0x10)
BOOLAPI CreateUrlCacheContainerA(LPCSTR Name, LPCSTR lpCachePrefix, LPCSTR lpszCachePath, DWORD KBCacheLimit, DWORD dwContainerType, DWORD dwOptions, LPVOID pvBuffer, LPDWORD cbBuffer);
BOOLAPI CreateUrlCacheContainerW(LPCWSTR Name, LPCWSTR lpCachePrefix, LPCWSTR lpszCachePath, DWORD KBCacheLimit, DWORD dwContainerType, DWORD dwOptions, LPVOID pvBuffer, LPDWORD cbBuffer);
#ifdef UNICODE
#define CreateUrlCacheContainer  CreateUrlCacheContainerW
#else
#define CreateUrlCacheContainer  CreateUrlCacheContainerA
#endif
BOOLAPI DeleteUrlCacheContainerA(LPCSTR Name, DWORD dwOptions);
BOOLAPI DeleteUrlCacheContainerW(LPCWSTR Name, DWORD dwOptions);
#ifdef UNICODE
#define DeleteUrlCacheContainer  DeleteUrlCacheContainerW
#else
#define DeleteUrlCacheContainer  DeleteUrlCacheContainerA
#endif
typedef struct _INTERNET_CACHE_CONTAINER_INFOA
{
    DWORD dwCacheVersion;
    LPSTR   lpszName;
    LPSTR   lpszCachePrefix;
    LPSTR   lpszVolumeLabel;
    LPSTR   lpszVolumeTitle;
} INTERNET_CACHE_CONTAINER_INFOA, * LPINTERNET_CACHE_CONTAINER_INFOA;
typedef struct _INTERNET_CACHE_CONTAINER_INFOW
{
    DWORD dwCacheVersion;
    LPWSTR  lpszName;
    LPWSTR  lpszCachePrefix;
    LPWSTR  lpszVolumeLabel;
    LPWSTR  lpszVolumeTitle;
} INTERNET_CACHE_CONTAINER_INFOW, * LPINTERNET_CACHE_CONTAINER_INFOW;
#ifdef UNICODE
typedef INTERNET_CACHE_CONTAINER_INFOW INTERNET_CACHE_CONTAINER_INFO;
typedef LPINTERNET_CACHE_CONTAINER_INFOW LPINTERNET_CACHE_CONTAINER_INFO;
#else
typedef INTERNET_CACHE_CONTAINER_INFOA INTERNET_CACHE_CONTAINER_INFO;
typedef LPINTERNET_CACHE_CONTAINER_INFOA LPINTERNET_CACHE_CONTAINER_INFO;
#endif
#define CACHE_FIND_CONTAINER_RETURN_NOCHANGE (0x1)
INTERNETAPI_(HANDLE)FindFirstUrlCacheContainerA(LPDWORD pdwModified, LPINTERNET_CACHE_CONTAINER_INFOA lpContainerInfo, LPDWORD lpcbContainerInfo, DWORD dwOptions);
INTERNETAPI_(HANDLE)FindFirstUrlCacheContainerW(LPDWORD pdwModified, LPINTERNET_CACHE_CONTAINER_INFOW lpContainerInfo, LPDWORD lpcbContainerInfo, DWORD dwOptions);
#ifdef UNICODE
#define FindFirstUrlCacheContainer  FindFirstUrlCacheContainerW
#else
#define FindFirstUrlCacheContainer  FindFirstUrlCacheContainerA
#endif
BOOLAPI FindNextUrlCacheContainerA(HANDLE hEnumHandle, LPINTERNET_CACHE_CONTAINER_INFOA lpContainerInfo, LPDWORD lpcbContainerInfo);
BOOLAPI FindNextUrlCacheContainerW(HANDLE hEnumHandle, LPINTERNET_CACHE_CONTAINER_INFOW lpContainerInfo, LPDWORD lpcbContainerInfo);
#ifdef UNICODE
#define FindNextUrlCacheContainer  FindNextUrlCacheContainerW
#else
#define FindNextUrlCacheContainer  FindNextUrlCacheContainerA
#endif
typedef enum
{
    WININET_SYNC_MODE_NEVER=0,
    WININET_SYNC_MODE_ON_EXPIRY,
    WININET_SYNC_MODE_ONCE_PER_SESSION,
    WININET_SYNC_MODE_ALWAYS,
    WININET_SYNC_MODE_AUTOMATIC,
    WININET_SYNC_MODE_DEFAULT = WININET_SYNC_MODE_AUTOMATIC
} WININET_SYNC_MODE;
BOOLAPI FreeUrlCacheSpaceA(LPCSTR lpszCachePath, DWORD dwSize, DWORD dwFilter);
BOOLAPI FreeUrlCacheSpaceW(LPCWSTR lpszCachePath, DWORD dwSize, DWORD dwFilter);
#ifdef UNICODE
#define FreeUrlCacheSpace  FreeUrlCacheSpaceW
#else
#define FreeUrlCacheSpace  FreeUrlCacheSpaceA
#endif
#define CACHE_CONFIG_FORCE_CLEANUP_FC           0x00000020
#define CACHE_CONFIG_DISK_CACHE_PATHS_FC        0x00000040
#define CACHE_CONFIG_SYNC_MODE_FC               0x00000080
#define CACHE_CONFIG_CONTENT_PATHS_FC           0x00000100
#define CACHE_CONFIG_COOKIES_PATHS_FC           0x00000200
#define CACHE_CONFIG_HISTORY_PATHS_FC           0x00000400
#define CACHE_CONFIG_QUOTA_FC                   0x00000800
#define CACHE_CONFIG_USER_MODE_FC               0x00001000
#define CACHE_CONFIG_CONTENT_USAGE_FC           0x00002000
#define CACHE_CONFIG_STICKY_CONTENT_USAGE_FC    0x00004000
BOOLAPI GetUrlCacheConfigInfoA(LPINTERNET_CACHE_CONFIG_INFOA lpCacheConfigInfo, LPDWORD lpcbCacheConfigInfo, DWORD dwFieldControl);
BOOLAPI GetUrlCacheConfigInfoW(LPINTERNET_CACHE_CONFIG_INFOW lpCacheConfigInfo, LPDWORD lpcbCacheConfigInfo, DWORD dwFieldControl);
#ifdef UNICODE
#define GetUrlCacheConfigInfo  GetUrlCacheConfigInfoW
#else
#define GetUrlCacheConfigInfo  GetUrlCacheConfigInfoA
#endif
BOOLAPI SetUrlCacheConfigInfoA(LPINTERNET_CACHE_CONFIG_INFOA lpCacheConfigInfo, DWORD dwFieldControl);
BOOLAPI SetUrlCacheConfigInfoW(LPINTERNET_CACHE_CONFIG_INFOW lpCacheConfigInfo, DWORD dwFieldControl);
#ifdef UNICODE
#define SetUrlCacheConfigInfo  SetUrlCacheConfigInfoW
#else
#define SetUrlCacheConfigInfo  SetUrlCacheConfigInfoA
#endif
INTERNETAPI_(DWORD)RunOnceUrlCache(HWND hwnd, HINSTANCE hinst, LPSTR lpszCmd, int nCmdShow);
INTERNETAPI_(DWORD)DeleteIE3Cache(HWND hwnd, HINSTANCE hinst, LPSTR lpszCmd, int nCmdShow);
BOOLAPI UpdateUrlCacheContentPath(LPCSTR szNewPath);
#define CACHE_HEADER_DATA_CURRENT_SETTINGS_VERSION  0
#define CACHE_HEADER_DATA_CONLIST_CHANGE_COUNT      1
#define CACHE_HEADER_DATA_COOKIE_CHANGE_COUNT       2
#define CACHE_HEADER_DATA_NOTIFICATION_HWND         3
#define CACHE_HEADER_DATA_NOTIFICATION_MESG         4
#define CACHE_HEADER_DATA_ROOTGROUP_OFFSET          5
#define CACHE_HEADER_DATA_GID_LOW                   6
#define CACHE_HEADER_DATA_GID_HIGH                  7
#define CACHE_HEADER_DATA_CACHE_RESERVED_8          8
#define CACHE_HEADER_DATA_CACHE_RESERVED_9          9
#define CACHE_HEADER_DATA_CACHE_RESERVED_10         10
#define CACHE_HEADER_DATA_CACHE_RESERVED_11         11
#define CACHE_HEADER_DATA_CACHE_RESERVED_12         12
#define CACHE_HEADER_DATA_CACHE_RESERVED_13         13
#define CACHE_HEADER_DATA_SSL_STATE_COUNT           14
#define CACHE_HEADER_DATA_DOWNLOAD_PARTIAL CACHE_HEADER_DATA_SSL_STATE_COUNT
#define CACHE_HEADER_DATA_CACHE_RESERVED_15         15
#define CACHE_HEADER_DATA_CACHE_RESERVED_16         16
#define CACHE_HEADER_DATA_CACHE_RESERVED_17         17
#define CACHE_HEADER_DATA_CACHE_RESERVED_18         18
#define CACHE_HEADER_DATA_CACHE_RESERVED_19         19
#define CACHE_HEADER_DATA_CACHE_RESERVED_20         20
#define CACHE_HEADER_DATA_NOTIFICATION_FILTER       21
#define CACHE_HEADER_DATA_ROOT_LEAK_OFFSET          22
#define CACHE_HEADER_DATA_CACHE_RESERVED_23         23
#define CACHE_HEADER_DATA_CACHE_RESERVED_24         24
#define CACHE_HEADER_DATA_CACHE_RESERVED_25         25
#define CACHE_HEADER_DATA_CACHE_RESERVED_26         26
#define CACHE_HEADER_DATA_ROOT_GROUPLIST_OFFSET     27
#define CACHE_HEADER_DATA_CACHE_RESERVED_28         28
#define CACHE_HEADER_DATA_CACHE_RESERVED_29         29
#define CACHE_HEADER_DATA_CACHE_RESERVED_30         30
#define CACHE_HEADER_DATA_CACHE_RESERVED_31         31
#define CACHE_HEADER_DATA_LAST                      31
#define CACHE_NOTIFY_ADD_URL                        0x00000001
#define CACHE_NOTIFY_DELETE_URL                     0x00000002
#define CACHE_NOTIFY_UPDATE_URL                     0x00000004
#define CACHE_NOTIFY_DELETE_ALL                     0x00000008
#define CACHE_NOTIFY_URL_SET_STICKY                 0x00000010
#define CACHE_NOTIFY_URL_UNSET_STICKY               0x00000020
#define CACHE_NOTIFY_SET_ONLINE                     0x00000100
#define CACHE_NOTIFY_SET_OFFLINE                    0x00000200
#define CACHE_NOTIFY_FILTER_CHANGED                 0x10000000
BOOLAPI RegisterUrlCacheNotification(HWND hWnd, UINT uMsg, GROUPID gid, DWORD dwOpsFilter, DWORD dwReserved);
BOOL GetUrlCacheHeaderData(DWORD nIdx, LPDWORD lpdwData);
BOOL SetUrlCacheHeaderData(DWORD nIdx, DWORD dwData);
BOOL IncrementUrlCacheHeaderData(DWORD nIdx, LPDWORD lpdwData);
BOOL LoadUrlCacheContent();
BOOL GetUrlCacheContainerInfoA(LPSTR lpszUrlName, LPINTERNET_CACHE_CONTAINER_INFOA lpContainerInfo, LPDWORD lpdwContainerInfoBufferSize, DWORD dwOptions);
BOOL GetUrlCacheContainerInfoW(LPWSTR lpszUrlName, LPINTERNET_CACHE_CONTAINER_INFOW lpContainerInfo, LPDWORD lpdwContainerInfoBufferSize, DWORD dwOptions);
#ifdef UNICODE
#define GetUrlCacheContainerInfo  GetUrlCacheContainerInfoW
#else
#define GetUrlCacheContainerInfo  GetUrlCacheContainerInfoA
#endif
INTERNETAPI_(DWORD)InternetDialA(HWND hwndParent, LPSTR lpszConnectoid, DWORD dwFlags, DWORD_PTR * lpdwConnection, DWORD dwReserved);
INTERNETAPI_(DWORD)InternetDialW(HWND hwndParent, LPWSTR lpszConnectoid, DWORD dwFlags, DWORD_PTR * lpdwConnection, DWORD dwReserved);
#ifdef UNICODE
#define InternetDial  InternetDialW
#else
#ifdef _WINX32_
#define InternetDial  InternetDialA
#else
INTERNETAPI_(DWORD)InternetDial(HWND hwndParent, LPSTR lpszConnectoid, DWORD dwFlags, LPDWORD lpdwConnection, DWORD dwReserved);
#endif
#endif
#define INTERNET_DIAL_FORCE_PROMPT     0x2000
#define INTERNET_DIAL_SHOW_OFFLINE     0x4000
#define INTERNET_DIAL_UNATTENDED       0x8000
INTERNETAPI_(DWORD)InternetHangUp(DWORD_PTR dwConnection, DWORD dwReserved);
#define INTERENT_GOONLINE_REFRESH 0x00000001
#define INTERENT_GOONLINE_MASK 0x00000001
INTERNETAPI_(BOOL)InternetGoOnlineA(LPCSTR lpszURL, HWND hwndParent, DWORD dwFlags);
INTERNETAPI_(BOOL)InternetGoOnlineW(LPCWSTR lpszURL, HWND hwndParent, DWORD dwFlags);
#ifdef UNICODE
#define InternetGoOnline  InternetGoOnlineW
#else
#ifdef _WINX32_
#define InternetGoOnline  InternetGoOnlineA
#else
INTERNETAPI_(BOOL)InternetGoOnline(LPSTR lpszURL, HWND hwndParent, DWORD dwFlags);
#endif
#endif
INTERNETAPI_(BOOL)InternetAutodial(DWORD dwFlags, HWND hwndParent);
#define INTERNET_AUTODIAL_FORCE_ONLINE          1
#define INTERNET_AUTODIAL_FORCE_UNATTENDED      2
#define INTERNET_AUTODIAL_FAILIFSECURITYCHECK   4
#define INTERNET_AUTODIAL_OVERRIDE_NET_PRESENT  8
#define INTERNET_AUTODIAL_FLAGS_MASK (INTERNET_AUTODIAL_FORCE_ONLINE | INTERNET_AUTODIAL_FORCE_UNATTENDED | INTERNET_AUTODIAL_FAILIFSECURITYCHECK | INTERNET_AUTODIAL_OVERRIDE_NET_PRESENT)
INTERNETAPI_(BOOL)InternetAutodialHangup(DWORD dwReserved);
INTERNETAPI_(BOOL)InternetGetConnectedState(LPDWORD lpdwFlags, DWORD dwReserved);
INTERNETAPI_(BOOL)InternetGetConnectedStateExA(LPDWORD lpdwFlags, LPSTR lpszConnectionName, DWORD dwBufLen, DWORD dwReserved);
INTERNETAPI_(BOOL)InternetGetConnectedStateExW(LPDWORD lpdwFlags, LPWSTR lpszConnectionName, DWORD dwBufLen, DWORD dwReserved);
INTERNETAPI InternetGetDialEngineW(LPWSTR pwzConnectoid, IDialEventSink *pdes, IDialEngine **ppde);
INTERNETAPI InternetGetDialBrandingW(LPWSTR pwzConnectoid, IDialBranding **ppdb);
BOOLAPI ReadGuidsForConnectedNetworks(DWORD *pcNetworks, PWSTR **pppwszNetworkGuids, BSTR **pppbstrNetworkNames, PWSTR **pppwszGWMacs, DWORD *pcGatewayMacs, DWORD *pdwFlags);
#define INTERNET_AUTOPROXY_INIT_DEFAULT 0x1
#define INTERNET_AUTOPROXY_INIT_DOWNLOADSYNC 0x2
#define INTERNET_AUTOPROXY_INIT_QUERYSTATE 0x4
#define INTERNET_AUTOPROXY_INIT_ONLYQUERY 0x8
#define INTERNET_AUTOPROXY_INIT_MASK (INTERNET_AUTOPROXY_INIT_DEFAULT|INTERNET_AUTOPROXY_INIT_DOWNLOADSYNC|INTERNET_AUTOPROXY_INIT_QUERYSTATE|INTERNET_AUTOPROXY_INIT_ONLYQUERY)
INTERNETAPI_(BOOL)InternetInitializeAutoProxyDll(DWORD dwReserved);
INTERNETAPI_(BOOL)DetectAutoProxyUrl(LPSTR lpszAutoProxyUrl, DWORD dwAutoProxyUrlLength, DWORD dwDetectFlags);
INTERNETAPI_(BOOL)CreateMD5SSOHash(PWSTR pszChallengeInfo, PWSTR pwszRealm, PWSTR pwszTarget, PBYTE pbHexHash);
#ifdef UNICODE
#define InternetGetConnectedStateEx  InternetGetConnectedStateExW
#else
#ifdef _WINX32_
#define InternetGetConnectedStateEx  InternetGetConnectedStateExA
#else
INTERNETAPI_(BOOL)InternetGetConnectedStateEx(LPDWORD lpdwFlags, LPSTR lpszConnectionName, DWORD dwNameLen, DWORD dwReserved);
#endif
#endif
#define INTERNET_CONNECTION_MODEM           0x01
#define INTERNET_CONNECTION_LAN             0x02
#define INTERNET_CONNECTION_PROXY           0x04
#define INTERNET_CONNECTION_MODEM_BUSY      0x08
#define INTERNET_RAS_INSTALLED              0x10
#define INTERNET_CONNECTION_OFFLINE         0x20
#define INTERNET_CONNECTION_CONFIGURED      0x40
typedef DWORD (CALLBACK * PFN_DIAL_HANDLER) (HWND, LPCSTR, DWORD, LPDWORD);
#define INTERNET_CUSTOMDIAL_CONNECT         0
#define INTERNET_CUSTOMDIAL_UNATTENDED      1
#define INTERNET_CUSTOMDIAL_DISCONNECT      2
#define INTERNET_CUSTOMDIAL_SHOWOFFLINE     4
#define INTERNET_CUSTOMDIAL_SAFE_FOR_UNATTENDED 1
#define INTERNET_CUSTOMDIAL_WILL_SUPPLY_STATE   2
#define INTERNET_CUSTOMDIAL_CAN_HANGUP          4
INTERNETAPI_(BOOL)InternetSetDialStateA(LPCSTR lpszConnectoid, DWORD dwState, DWORD dwReserved);
INTERNETAPI_(BOOL)InternetSetDialStateW(LPCWSTR lpszConnectoid, DWORD dwState, DWORD dwReserved);
#ifdef UNICODE
#define InternetSetDialState  InternetSetDialStateW
#else
#ifdef _WINX32_
#define InternetSetDialState  InternetSetDialStateA
#else
INTERNETAPI_(BOOL)InternetSetDialState(LPCSTR lpszConnectoid, DWORD dwState, DWORD dwReserved);
#endif
#endif
#define INTERNET_DIALSTATE_DISCONNECTED     1
#define REGSTR_DIAL_AUTOCONNECT     "AutoConnect"
#define REGSTR_LEASH_LEGACY_COOKIES "LeashLegacyCookies"
INTERNETAPI_(BOOL)IsHostInProxyBypassList(INTERNET_SCHEME tScheme, LPCSTR lpszHost, DWORD cchHost);
#if _WIN32_WINNT >= _WIN32_WINNT_WINXP
#define LOCAL_NAMESPACE_PREFIX            "Local\\"
#else
#define LOCAL_NAMESPACE_PREFIX
#endif
#define WININET_STARTUP_MUTEX LOCAL_NAMESPACE_PREFIX "WininetStartupMutex"
BOOL DoConnectoidsExist(void);
BOOL GetDiskInfoA(PCSTR pszPath, PDWORD pdwClusterSize, PDWORDLONG pdlAvail, PDWORDLONG pdlTotal);
typedef BOOL(*CACHE_OPERATOR) (INTERNET_CACHE_ENTRY_INFO *pcei, PDWORD pcbcei, PVOID pOpData);
BOOL PerformOperationOverUrlCacheA(PCSTR pszUrlSearchPattern, DWORD dwFlags, DWORD dwFilter, GROUPID GroupId, PVOID pReserved1, PDWORD pdwReserved2, PVOID pReserved3, CACHE_OPERATOR op, PVOID pOperatorData);
BOOL IsProfilesEnabled();
INTERNETAPI_(DWORD)_GetFileExtensionFromUrl(LPSTR lpszUrl, DWORD dwFlags, LPSTR lpszExt, DWORD * pcchExt);
INTERNETAPI_(DWORD)InternalInternetGetCookie(LPCSTR lpszUrl, LPSTR lpszCookieData, DWORD * lpdwDataSize);
BOOLAPI ImportCookieFileA(LPCSTR szFilename);
BOOLAPI ImportCookieFileW(LPCWSTR szFilename);
#ifdef UNICODE
#define ImportCookieFile  ImportCookieFileW
#else
#define ImportCookieFile  ImportCookieFileA
#endif
BOOLAPI ExportCookieFileA(LPCSTR szFilename, BOOL fAppend);
BOOLAPI ExportCookieFileW(LPCWSTR szFilename, BOOL fAppend);
#ifdef UNICODE
#define ExportCookieFile  ExportCookieFileW
#else
#define ExportCookieFile  ExportCookieFileA
#endif
BOOLAPI IsDomainLegalCookieDomainA(LPCSTR pchDomain, LPCSTR pchFullDomain);
BOOLAPI IsDomainLegalCookieDomainW(LPCWSTR pchDomain, LPCWSTR pchFullDomain);
#ifdef UNICODE
#define IsDomainLegalCookieDomain  IsDomainLegalCookieDomainW
#else
#define IsDomainLegalCookieDomain  IsDomainLegalCookieDomainA
#endif
INTERNETAPI_(BOOL)InternetEnumPerSiteCookieDecisionA(LPSTR pszSiteName, unsigned long *pcSiteNameSize, unsigned long *pdwDecision, unsigned long dwIndex);
INTERNETAPI_(BOOL)InternetEnumPerSiteCookieDecisionW(LPWSTR pszSiteName, unsigned long *pcSiteNameSize, unsigned long *pdwDecision, unsigned long dwIndex);
#ifdef UNICODE
#define InternetEnumPerSiteCookieDecision  InternetEnumPerSiteCookieDecisionW
#else
#define InternetEnumPerSiteCookieDecision  InternetEnumPerSiteCookieDecisionA
#endif
#define INTERNET_SUPPRESS_COOKIE_PERSIST            0x03
#define INTERNET_SUPPRESS_COOKIE_PERSIST_RESET      0x04
#define PRIVACY_TEMPLATE_NO_COOKIES     0
#define PRIVACY_TEMPLATE_HIGH           1
#define PRIVACY_TEMPLATE_MEDIUM_HIGH    2
#define PRIVACY_TEMPLATE_MEDIUM         3
#define PRIVACY_TEMPLATE_MEDIUM_LOW     4
#define PRIVACY_TEMPLATE_LOW            5
#define PRIVACY_TEMPLATE_CUSTOM         100
#define PRIVACY_TEMPLATE_ADVANCED       101
#define PRIVACY_TEMPLATE_MAX            PRIVACY_TEMPLATE_LOW
#define PRIVACY_TYPE_FIRST_PARTY        0
#define PRIVACY_TYPE_THIRD_PARTY        1
INTERNETAPI_(DWORD)PrivacySetZonePreferenceW(DWORD dwZone, DWORD dwType, DWORD dwTemplate, LPCWSTR pszPreference);
INTERNETAPI_(DWORD)PrivacyGetZonePreferenceW(DWORD dwZone, DWORD dwType, LPDWORD pdwTemplate, LPWSTR pszBuffer, LPDWORD pdwBufferLength);
#define _P3PGLOBAL_H_
typedef char  P3PCHAR;
typedef char *P3PURL;
typedef char *P3PVERB;
typedef const char *P3PCURL;
typedef BSTR P3PCXSL;
typedef void *P3PHANDLE;
#define URL_LIMIT INTERNET_MAX_URL_LENGTH
struct P3PResource
{
   P3PCURL  pszLocation;
   P3PVERB  pszVerb;
   P3PCURL  pszP3PHeaderRef;
   P3PCURL  pszLinkTagRef;
   struct P3PResource *pContainer;
};
struct P3PSignal
{
	HWND hwnd;
	unsigned int message;
	HANDLE hEvent;
	void *pContext;
	P3PHANDLE hRequest;
};
typedef enum
{
   P3P_Done       = 0x0,
   P3P_Success    = 0x0,
   P3P_NoPolicy   = 0x2,
   P3P_InProgress = 0x3,
   P3P_Failed     = 0x4,
   P3P_NotFound   = 0x5,
   P3P_FormatErr  = 0x6,
   P3P_Cancelled  = 0x7,
   P3P_NotStarted = 0x8,
   P3P_XMLError   = 0x9,
   P3P_Expired    = 0xA,
   P3P_Error      = 0xFF,
} P3PStatus;
INTERNETAPI_(int) MapResourceToPolicy(struct P3PResource *pResource, P3PURL pszPolicy, unsigned long dwSize, struct P3PSignal *pSignal);
INTERNETAPI_(int) GetP3PPolicy(P3PCURL pszPolicyURL, HANDLE hDestination, P3PCXSL pszXSLtransform, struct P3PSignal *pSignal);
INTERNETAPI_(int) FreeP3PObject(P3PHANDLE hObject);
INTERNETAPI_(int) GetP3PRequestStatus(P3PHANDLE hObject);
#endif

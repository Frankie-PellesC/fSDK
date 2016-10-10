/*+@@file@@----------------------------------------------------------------*//*!
 \file		winnetwk.h
 \par Description 
            Extension and update of headers for PellesC compiler suite.
 \par Project: 
            PellesC Headers extension
 \date		Created  on Mon Jun 27 01:17:20 2016
 \date		Modified on Mon Jun 27 01:17:20 2016
 \author	frankie
\*//*-@@file@@----------------------------------------------------------------*/

#ifndef _WINNETWK_
#define _WINNETWK_
#if __POCC__ >= 500
#pragma once
#endif
#include <wnnc.h>
#define RESOURCE_CONNECTED      0x00000001
#define RESOURCE_GLOBALNET      0x00000002
#define RESOURCE_REMEMBERED     0x00000003
#if(WINVER >= 0x0400)
#define RESOURCE_RECENT         0x00000004
#define RESOURCE_CONTEXT        0x00000005
#endif
#define RESOURCETYPE_ANY        0x00000000
#define RESOURCETYPE_DISK       0x00000001
#define RESOURCETYPE_PRINT      0x00000002
#if(WINVER >= 0x0400)
#define RESOURCETYPE_RESERVED   0x00000008
#endif
#define RESOURCETYPE_UNKNOWN    0xFFFFFFFF
#define RESOURCEUSAGE_CONNECTABLE   0x00000001
#define RESOURCEUSAGE_CONTAINER     0x00000002
#if(WINVER >= 0x0400)
#define RESOURCEUSAGE_NOLOCALDEVICE 0x00000004
#define RESOURCEUSAGE_SIBLING       0x00000008
#define RESOURCEUSAGE_ATTACHED      0x00000010
#define RESOURCEUSAGE_ALL           (RESOURCEUSAGE_CONNECTABLE | RESOURCEUSAGE_CONTAINER | RESOURCEUSAGE_ATTACHED)
#endif
#define RESOURCEUSAGE_RESERVED      0x80000000
#define RESOURCEDISPLAYTYPE_GENERIC        0x00000000
#define RESOURCEDISPLAYTYPE_DOMAIN         0x00000001
#define RESOURCEDISPLAYTYPE_SERVER         0x00000002
#define RESOURCEDISPLAYTYPE_SHARE          0x00000003
#define RESOURCEDISPLAYTYPE_FILE           0x00000004
#define RESOURCEDISPLAYTYPE_GROUP          0x00000005
#if(WINVER >= 0x0400)
#define RESOURCEDISPLAYTYPE_NETWORK        0x00000006
#define RESOURCEDISPLAYTYPE_ROOT           0x00000007
#define RESOURCEDISPLAYTYPE_SHAREADMIN     0x00000008
#define RESOURCEDISPLAYTYPE_DIRECTORY      0x00000009
#endif
#define RESOURCEDISPLAYTYPE_TREE           0x0000000A
#if(WINVER >= 0x0400)
#define RESOURCEDISPLAYTYPE_NDSCONTAINER   0x0000000B
#endif
typedef struct _NETRESOURCEA {
	DWORD dwScope;
	DWORD dwType;
	DWORD dwDisplayType;
	DWORD dwUsage;
	LPSTR lpLocalName;
	LPSTR lpRemoteName;
	LPSTR lpComment;
	LPSTR lpProvider;
} NETRESOURCEA, *LPNETRESOURCEA;
typedef struct _NETRESOURCEW {
	DWORD dwScope;
	DWORD dwType;
	DWORD dwDisplayType;
	DWORD dwUsage;
	LPWSTR lpLocalName;
	LPWSTR lpRemoteName;
	LPWSTR lpComment;
	LPWSTR lpProvider;
} NETRESOURCEW, *LPNETRESOURCEW;
#ifdef UNICODE
typedef NETRESOURCEW NETRESOURCE;
typedef LPNETRESOURCEW LPNETRESOURCE;
#else
typedef NETRESOURCEA NETRESOURCE;
typedef LPNETRESOURCEA LPNETRESOURCE;
#endif
#define NETPROPERTY_PERSISTENT       1
#define CONNECT_UPDATE_PROFILE      0x00000001
#define CONNECT_UPDATE_RECENT       0x00000002
#define CONNECT_TEMPORARY           0x00000004
#define CONNECT_INTERACTIVE         0x00000008
#define CONNECT_PROMPT              0x00000010
#define CONNECT_NEED_DRIVE          0x00000020
#if(WINVER >= 0x0400)
#define CONNECT_REFCOUNT            0x00000040
#define CONNECT_REDIRECT            0x00000080
#define CONNECT_LOCALDRIVE          0x00000100
#define CONNECT_CURRENT_MEDIA       0x00000200
#define CONNECT_DEFERRED            0x00000400
#define CONNECT_RESERVED            0xFF000000
#endif
#if(WINVER >= 0x0500)
#define CONNECT_COMMANDLINE         0x00000800
#define CONNECT_CMD_SAVECRED        0x00001000
#endif
#if(WINVER >= 0x0600)
#define CONNECT_CRED_RESET          0x00002000
#endif
DWORD APIENTRY WNetAddConnectionA(LPCSTR lpRemoteName, LPCSTR lpPassword, LPCSTR lpLocalName);
DWORD APIENTRY WNetAddConnectionW(LPCWSTR lpRemoteName, LPCWSTR lpPassword, LPCWSTR lpLocalName);
#ifdef UNICODE
#define WNetAddConnection  WNetAddConnectionW
#else
#define WNetAddConnection  WNetAddConnectionA
#endif
DWORD APIENTRY WNetAddConnection2A(LPNETRESOURCEA lpNetResource, LPCSTR lpPassword, LPCSTR lpUserName, DWORD dwFlags);
DWORD APIENTRY WNetAddConnection2W(LPNETRESOURCEW lpNetResource, LPCWSTR lpPassword, LPCWSTR lpUserName, DWORD dwFlags);
#ifdef UNICODE
#define WNetAddConnection2  WNetAddConnection2W
#else
#define WNetAddConnection2  WNetAddConnection2A
#endif
DWORD APIENTRY WNetAddConnection3A(HWND hwndOwner, LPNETRESOURCEA lpNetResource, LPCSTR lpPassword, LPCSTR lpUserName, DWORD dwFlags);
DWORD APIENTRY WNetAddConnection3W(HWND hwndOwner, LPNETRESOURCEW lpNetResource, LPCWSTR lpPassword, LPCWSTR lpUserName, DWORD dwFlags);
#ifdef UNICODE
#define WNetAddConnection3  WNetAddConnection3W
#else
#define WNetAddConnection3  WNetAddConnection3A
#endif
DWORD APIENTRY WNetCancelConnectionA(LPCSTR lpName, BOOL fForce);
DWORD APIENTRY WNetCancelConnectionW(LPCWSTR lpName, BOOL fForce);
#ifdef UNICODE
#define WNetCancelConnection  WNetCancelConnectionW
#else
#define WNetCancelConnection  WNetCancelConnectionA
#endif
DWORD APIENTRY WNetCancelConnection2A(LPCSTR lpName, DWORD dwFlags, BOOL fForce);
DWORD APIENTRY WNetCancelConnection2W(LPCWSTR lpName, DWORD dwFlags, BOOL fForce);
#ifdef UNICODE
#define WNetCancelConnection2  WNetCancelConnection2W
#else
#define WNetCancelConnection2  WNetCancelConnection2A
#endif
DWORD APIENTRY WNetGetConnectionA(LPCSTR lpLocalName, LPSTR lpRemoteName, LPDWORD lpnLength);
DWORD APIENTRY WNetGetConnectionW(LPCWSTR lpLocalName, LPWSTR lpRemoteName, LPDWORD lpnLength);
#ifdef UNICODE
#define WNetGetConnection  WNetGetConnectionW
#else
#define WNetGetConnection  WNetGetConnectionA
#endif
#if (_WIN32_WINNT >= _WIN32_WINNT_LONGHORN)
DWORD APIENTRY WNetRestoreSingleConnectionW(HWND hwndParent, LPCWSTR lpDevice, BOOL fUseUI);
#else
DWORD APIENTRY WNetRestoreConnectionW(HWND hWnd, LPCWSTR lpDevice);
#endif
#if(WINVER >= 0x0400)
DWORD APIENTRY WNetUseConnectionA(HWND hwndOwner, LPNETRESOURCEA lpNetResource, LPCSTR lpPassword, LPCSTR lpUserId, DWORD dwFlags, LPSTR lpAccessName, LPDWORD lpBufferSize, LPDWORD lpResult);
DWORD APIENTRY WNetUseConnectionW(HWND hwndOwner, LPNETRESOURCEW lpNetResource, LPCWSTR lpPassword, LPCWSTR lpUserId, DWORD dwFlags, LPWSTR lpAccessName, LPDWORD lpBufferSize, LPDWORD lpResult);
#ifdef UNICODE
#define WNetUseConnection  WNetUseConnectionW
#else
#define WNetUseConnection  WNetUseConnectionA
#endif
#endif
DWORD APIENTRY WNetConnectionDialog(HWND hwnd, DWORD dwType);
DWORD APIENTRY WNetDisconnectDialog(HWND hwnd, DWORD dwType);
#if(WINVER >= 0x0400)
typedef struct _CONNECTDLGSTRUCTA {
	DWORD cbStructure;
	HWND hwndOwner;
	LPNETRESOURCEA lpConnRes;
	DWORD dwFlags;
	DWORD dwDevNum;
} CONNECTDLGSTRUCTA, FAR * LPCONNECTDLGSTRUCTA;
typedef struct _CONNECTDLGSTRUCTW {
	DWORD cbStructure;
	HWND hwndOwner;
	LPNETRESOURCEW lpConnRes;
	DWORD dwFlags;
	DWORD dwDevNum;
} CONNECTDLGSTRUCTW, FAR * LPCONNECTDLGSTRUCTW;
#ifdef UNICODE
typedef CONNECTDLGSTRUCTW CONNECTDLGSTRUCT;
typedef LPCONNECTDLGSTRUCTW LPCONNECTDLGSTRUCT;
#else
typedef CONNECTDLGSTRUCTA CONNECTDLGSTRUCT;
typedef LPCONNECTDLGSTRUCTA LPCONNECTDLGSTRUCT;
#endif
#define CONNDLG_RO_PATH     0x00000001
#define CONNDLG_CONN_POINT  0x00000002
#define CONNDLG_USE_MRU     0x00000004
#define CONNDLG_HIDE_BOX    0x00000008
#define CONNDLG_PERSIST     0x00000010
#define CONNDLG_NOT_PERSIST 0x00000020
DWORD APIENTRY WNetConnectionDialog1A(LPCONNECTDLGSTRUCTA lpConnDlgStruct);
DWORD APIENTRY WNetConnectionDialog1W(LPCONNECTDLGSTRUCTW lpConnDlgStruct);
#ifdef UNICODE
#define WNetConnectionDialog1  WNetConnectionDialog1W
#else
#define WNetConnectionDialog1  WNetConnectionDialog1A
#endif
typedef struct _DISCDLGSTRUCTA {
	DWORD cbStructure;
	HWND hwndOwner;
	LPSTR lpLocalName;
	LPSTR lpRemoteName;
	DWORD dwFlags;
} DISCDLGSTRUCTA, FAR * LPDISCDLGSTRUCTA;
typedef struct _DISCDLGSTRUCTW {
	DWORD cbStructure;
	HWND hwndOwner;
	LPWSTR lpLocalName;
	LPWSTR lpRemoteName;
	DWORD dwFlags;
} DISCDLGSTRUCTW, FAR * LPDISCDLGSTRUCTW;
#ifdef UNICODE
typedef DISCDLGSTRUCTW DISCDLGSTRUCT;
typedef LPDISCDLGSTRUCTW LPDISCDLGSTRUCT;
#else
typedef DISCDLGSTRUCTA DISCDLGSTRUCT;
typedef LPDISCDLGSTRUCTA LPDISCDLGSTRUCT;
#endif
#define DISC_UPDATE_PROFILE         0x00000001
#define DISC_NO_FORCE               0x00000040
DWORD APIENTRY WNetDisconnectDialog1A(LPDISCDLGSTRUCTA lpConnDlgStruct);
DWORD APIENTRY WNetDisconnectDialog1W(LPDISCDLGSTRUCTW lpConnDlgStruct);
#ifdef UNICODE
#define WNetDisconnectDialog1  WNetDisconnectDialog1W
#else
#define WNetDisconnectDialog1  WNetDisconnectDialog1A
#endif
#endif
DWORD APIENTRY WNetOpenEnumA(DWORD dwScope, DWORD dwType, DWORD dwUsage, LPNETRESOURCEA lpNetResource, LPHANDLE lphEnum);
DWORD APIENTRY WNetOpenEnumW(DWORD dwScope, DWORD dwType, DWORD dwUsage, LPNETRESOURCEW lpNetResource, LPHANDLE lphEnum);
#ifdef UNICODE
#define WNetOpenEnum  WNetOpenEnumW
#else
#define WNetOpenEnum  WNetOpenEnumA
#endif
DWORD APIENTRY WNetEnumResourceA(HANDLE hEnum, LPDWORD lpcCount, LPVOID lpBuffer, LPDWORD lpBufferSize);
DWORD APIENTRY WNetEnumResourceW(HANDLE hEnum, LPDWORD lpcCount, LPVOID lpBuffer, LPDWORD lpBufferSize);
#ifdef UNICODE
#define WNetEnumResource  WNetEnumResourceW
#else
#define WNetEnumResource  WNetEnumResourceA
#endif
DWORD APIENTRY WNetCloseEnum(HANDLE hEnum);
#if(WINVER >= 0x0400)
DWORD APIENTRY WNetGetResourceParentA(LPNETRESOURCEA lpNetResource, LPVOID lpBuffer, LPDWORD lpcbBuffer);
DWORD APIENTRY WNetGetResourceParentW(LPNETRESOURCEW lpNetResource, LPVOID lpBuffer, LPDWORD lpcbBuffer);
#ifdef UNICODE
#define WNetGetResourceParent  WNetGetResourceParentW
#else
#define WNetGetResourceParent  WNetGetResourceParentA
#endif
DWORD APIENTRY WNetGetResourceInformationA(LPNETRESOURCEA lpNetResource, LPVOID lpBuffer, LPDWORD lpcbBuffer, LPSTR *lplpSystem);
DWORD APIENTRY WNetGetResourceInformationW(LPNETRESOURCEW lpNetResource, LPVOID lpBuffer, LPDWORD lpcbBuffer, LPWSTR *lplpSystem);
#ifdef UNICODE
#define WNetGetResourceInformation  WNetGetResourceInformationW
#else
#define WNetGetResourceInformation  WNetGetResourceInformationA
#endif
#endif
#define UNIVERSAL_NAME_INFO_LEVEL   0x00000001
#define REMOTE_NAME_INFO_LEVEL      0x00000002
typedef struct _UNIVERSAL_NAME_INFOA {
	LPSTR lpUniversalName;
} UNIVERSAL_NAME_INFOA, *LPUNIVERSAL_NAME_INFOA;
typedef struct _UNIVERSAL_NAME_INFOW {
	LPWSTR lpUniversalName;
} UNIVERSAL_NAME_INFOW, *LPUNIVERSAL_NAME_INFOW;
#ifdef UNICODE
typedef UNIVERSAL_NAME_INFOW UNIVERSAL_NAME_INFO;
typedef LPUNIVERSAL_NAME_INFOW LPUNIVERSAL_NAME_INFO;
#else
typedef UNIVERSAL_NAME_INFOA UNIVERSAL_NAME_INFO;
typedef LPUNIVERSAL_NAME_INFOA LPUNIVERSAL_NAME_INFO;
#endif
typedef struct _REMOTE_NAME_INFOA {
	LPSTR lpUniversalName;
	LPSTR lpConnectionName;
	LPSTR lpRemainingPath;
} REMOTE_NAME_INFOA, *LPREMOTE_NAME_INFOA;
typedef struct _REMOTE_NAME_INFOW {
	LPWSTR lpUniversalName;
	LPWSTR lpConnectionName;
	LPWSTR lpRemainingPath;
} REMOTE_NAME_INFOW, *LPREMOTE_NAME_INFOW;
#ifdef UNICODE
typedef REMOTE_NAME_INFOW REMOTE_NAME_INFO;
typedef LPREMOTE_NAME_INFOW LPREMOTE_NAME_INFO;
#else
typedef REMOTE_NAME_INFOA REMOTE_NAME_INFO;
typedef LPREMOTE_NAME_INFOA LPREMOTE_NAME_INFO;
#endif
DWORD APIENTRY WNetGetUniversalNameA(LPCSTR lpLocalPath, DWORD dwInfoLevel, LPVOID lpBuffer, LPDWORD lpBufferSize);
DWORD APIENTRY WNetGetUniversalNameW(LPCWSTR lpLocalPath, DWORD dwInfoLevel, LPVOID lpBuffer, LPDWORD lpBufferSize);
#ifdef UNICODE
#define WNetGetUniversalName  WNetGetUniversalNameW
#else
#define WNetGetUniversalName  WNetGetUniversalNameA
#endif
DWORD APIENTRY WNetGetUserA(LPCSTR lpName, LPSTR lpUserName, LPDWORD lpnLength);
DWORD APIENTRY WNetGetUserW(LPCWSTR lpName, LPWSTR lpUserName, LPDWORD lpnLength);
#ifdef UNICODE
#define WNetGetUser  WNetGetUserW
#else
#define WNetGetUser  WNetGetUserA
#endif
#if(WINVER >= 0x0400)
#define WNFMT_MULTILINE         0x01
#define WNFMT_ABBREVIATED       0x02
#define WNFMT_INENUM            0x10
#define WNFMT_CONNECTION        0x20
#endif
#if(WINVER >= 0x0400)
DWORD APIENTRY WNetGetProviderNameA(DWORD dwNetType, LPSTR lpProviderName, LPDWORD lpBufferSize);
DWORD APIENTRY WNetGetProviderNameW(DWORD dwNetType, LPWSTR lpProviderName, LPDWORD lpBufferSize);
#ifdef UNICODE
#define WNetGetProviderName  WNetGetProviderNameW
#else
#define WNetGetProviderName  WNetGetProviderNameA
#endif
typedef struct _NETINFOSTRUCT {
	DWORD cbStructure;
	DWORD dwProviderVersion;
	DWORD dwStatus;
	DWORD dwCharacteristics;
	ULONG_PTR dwHandle;
	WORD wNetType;
	DWORD dwPrinters;
	DWORD dwDrives;
} NETINFOSTRUCT, FAR * LPNETINFOSTRUCT;
#define NETINFO_DLL16       0x00000001
#define NETINFO_DISKRED     0x00000004
#define NETINFO_PRINTERRED  0x00000008
DWORD APIENTRY WNetGetNetworkInformationA(LPCSTR lpProvider, LPNETINFOSTRUCT lpNetInfoStruct);
DWORD APIENTRY WNetGetNetworkInformationW(LPCWSTR lpProvider, LPNETINFOSTRUCT lpNetInfoStruct);
#ifdef UNICODE
#define WNetGetNetworkInformation  WNetGetNetworkInformationW
#else
#define WNetGetNetworkInformation  WNetGetNetworkInformationA
#endif
#endif
DWORD APIENTRY WNetGetLastErrorA(LPDWORD lpError, LPSTR lpErrorBuf, DWORD nErrorBufSize, LPSTR lpNameBuf, DWORD nNameBufSize);
DWORD APIENTRY WNetGetLastErrorW(LPDWORD lpError, LPWSTR lpErrorBuf, DWORD nErrorBufSize, LPWSTR lpNameBuf, DWORD nNameBufSize);
#ifdef UNICODE
#define WNetGetLastError  WNetGetLastErrorW
#else
#define WNetGetLastError  WNetGetLastErrorA
#endif
#define WN_SUCCESS                      NO_ERROR
#define WN_NO_ERROR                     NO_ERROR
#define WN_NOT_SUPPORTED                ERROR_NOT_SUPPORTED
#define WN_CANCEL                       ERROR_CANCELLED
#define WN_RETRY                        ERROR_RETRY
#define WN_NET_ERROR                    ERROR_UNEXP_NET_ERR
#define WN_MORE_DATA                    ERROR_MORE_DATA
#define WN_BAD_POINTER                  ERROR_INVALID_ADDRESS
#define WN_BAD_VALUE                    ERROR_INVALID_PARAMETER
#define WN_BAD_USER                     ERROR_BAD_USERNAME
#define WN_BAD_PASSWORD                 ERROR_INVALID_PASSWORD
#define WN_ACCESS_DENIED                ERROR_ACCESS_DENIED
#define WN_FUNCTION_BUSY                ERROR_BUSY
#define WN_WINDOWS_ERROR                ERROR_UNEXP_NET_ERR
#define WN_OUT_OF_MEMORY                ERROR_NOT_ENOUGH_MEMORY
#define WN_NO_NETWORK                   ERROR_NO_NETWORK
#define WN_EXTENDED_ERROR               ERROR_EXTENDED_ERROR
#define WN_BAD_LEVEL                    ERROR_INVALID_LEVEL
#define WN_BAD_HANDLE                   ERROR_INVALID_HANDLE
#if(WINVER >= 0x0400)
#define WN_NOT_INITIALIZING             ERROR_ALREADY_INITIALIZED
#define WN_NO_MORE_DEVICES              ERROR_NO_MORE_DEVICES
#endif
#define WN_NOT_CONNECTED                       ERROR_NOT_CONNECTED
#define WN_OPEN_FILES                          ERROR_OPEN_FILES
#define WN_DEVICE_IN_USE                       ERROR_DEVICE_IN_USE
#define WN_BAD_NETNAME                         ERROR_BAD_NET_NAME
#define WN_BAD_LOCALNAME                       ERROR_BAD_DEVICE
#define WN_ALREADY_CONNECTED                   ERROR_ALREADY_ASSIGNED
#define WN_DEVICE_ERROR                        ERROR_GEN_FAILURE
#define WN_CONNECTION_CLOSED                   ERROR_CONNECTION_UNAVAIL
#define WN_NO_NET_OR_BAD_PATH                  ERROR_NO_NET_OR_BAD_PATH
#define WN_BAD_PROVIDER                        ERROR_BAD_PROVIDER
#define WN_CANNOT_OPEN_PROFILE                 ERROR_CANNOT_OPEN_PROFILE
#define WN_BAD_PROFILE                         ERROR_BAD_PROFILE
#define WN_BAD_DEV_TYPE                        ERROR_BAD_DEV_TYPE
#define WN_DEVICE_ALREADY_REMEMBERED           ERROR_DEVICE_ALREADY_REMEMBERED
#define WN_CONNECTED_OTHER_PASSWORD            ERROR_CONNECTED_OTHER_PASSWORD
#if(WINVER >= 0x0501)
#define WN_CONNECTED_OTHER_PASSWORD_DEFAULT    ERROR_CONNECTED_OTHER_PASSWORD_DEFAULT
#endif
#define WN_NO_MORE_ENTRIES              ERROR_NO_MORE_ITEMS
#define WN_NOT_CONTAINER                ERROR_NOT_CONTAINER
#if(WINVER >= 0x0400)
#define WN_NOT_AUTHENTICATED            ERROR_NOT_AUTHENTICATED
#define WN_NOT_LOGGED_ON                ERROR_NOT_LOGGED_ON
#define WN_NOT_VALIDATED                ERROR_NO_LOGON_SERVERS
#endif
#if(WINVER >= 0x0400)
typedef struct _NETCONNECTINFOSTRUCT {
	DWORD cbStructure;
	DWORD dwFlags;
	DWORD dwSpeed;
	DWORD dwDelay;
	DWORD dwOptDataSize;
} NETCONNECTINFOSTRUCT, *LPNETCONNECTINFOSTRUCT;
#define WNCON_FORNETCARD        0x00000001
#define WNCON_NOTROUTED         0x00000002
#define WNCON_SLOWLINK          0x00000004
#define WNCON_DYNAMIC           0x00000008
DWORD APIENTRY MultinetGetConnectionPerformanceA(LPNETRESOURCEA lpNetResource, LPNETCONNECTINFOSTRUCT lpNetConnectInfoStruct);
DWORD APIENTRY MultinetGetConnectionPerformanceW(LPNETRESOURCEW lpNetResource, LPNETCONNECTINFOSTRUCT lpNetConnectInfoStruct);
#ifdef UNICODE
#define MultinetGetConnectionPerformance  MultinetGetConnectionPerformanceW
#else
#define MultinetGetConnectionPerformance  MultinetGetConnectionPerformanceA
#endif
#endif

#endif

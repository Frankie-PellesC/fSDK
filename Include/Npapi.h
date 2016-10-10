/*+@@file@@----------------------------------------------------------------*//*!
 \file		Npapi.h
 \par Description 
            Extension and update of headers for PellesC compiler suite.
 \par Project: 
            PellesC Headers extension
 \date		Created  on Sun Sep  4 23:56:17 2016
 \date		Modified on Sun Sep  4 23:56:17 2016
 \author	frankie
\*//*-@@file@@----------------------------------------------------------------*/

#ifndef _NPAPI_INCLUDED
#define _NPAPI_INCLUDED
#if __POCC__ >= 500
#pragma once
#endif
DWORD APIENTRY NPAddConnection(LPNETRESOURCEW lpNetResource, LPWSTR lpPassword, LPWSTR lpUserName);
typedef DWORD(APIENTRY *PF_NPAddConnection) (LPNETRESOURCEW lpNetResource, LPWSTR lpPassword, LPWSTR lpUserName);
DWORD APIENTRY NPAddConnection3(HWND hwndOwner, LPNETRESOURCEW lpNetResource, LPWSTR lpPassword, LPWSTR lpUserName, DWORD dwFlags);
typedef DWORD(APIENTRY *PF_NPAddConnection3) (HWND hwndOwner, LPNETRESOURCEW lpNetResource, LPWSTR lpPassword, LPWSTR lpUserName, DWORD dwFlags);
DWORD APIENTRY NPCancelConnection(LPWSTR lpName, BOOL fForce);
typedef DWORD(APIENTRY *PF_NPCancelConnection) (LPWSTR lpName, BOOL fForce);
DWORD APIENTRY NPGetConnection(LPWSTR lpLocalName, LPWSTR lpRemoteName, LPDWORD lpnBufferLen);
typedef DWORD(APIENTRY *PF_NPGetConnection) (LPWSTR lpLocalName, LPWSTR lpRemoteName, LPDWORD lpnBufferLen);
#define WNGETCON_CONNECTED      0x00000000
#define WNGETCON_DISCONNECTED   0x00000001
DWORD APIENTRY NPGetConnection3(LPCWSTR lpLocalName, DWORD dwLevel, LPVOID lpBuffer, LPDWORD lpBufferSize);
typedef DWORD(APIENTRY *PF_NPGetConnection3) (LPCWSTR lpLocalName, DWORD dwLevel, LPVOID lpBuffer, LPDWORD lpBufferSize);
DWORD APIENTRY NPGetUniversalName(LPCWSTR lpLocalPath, DWORD dwInfoLevel, LPVOID lpBuffer, LPDWORD lpBufferSize);
typedef DWORD(APIENTRY *PF_NPGetUniversalName) (LPCWSTR lpLocalPath, DWORD dwInfoLevel, LPVOID lpBuffer, LPDWORD lpnBufferSize);
DWORD APIENTRY NPGetConnectionPerformance(LPCWSTR lpRemoteName, LPNETCONNECTINFOSTRUCT lpNetConnectInfo);
typedef DWORD(APIENTRY *PF_NPGetConnectionPerformance) (LPCWSTR lpRemoteName, LPNETCONNECTINFOSTRUCT lpNetConnectInfo);
DWORD APIENTRY NPOpenEnum(DWORD dwScope, DWORD dwType, DWORD dwUsage, LPNETRESOURCEW lpNetResource, LPHANDLE lphEnum);
typedef DWORD(APIENTRY *PF_NPOpenEnum) (DWORD dwScope, DWORD dwType, DWORD dwUsage, LPNETRESOURCEW lpNetResource, LPHANDLE lphEnum);
DWORD APIENTRY NPEnumResource(HANDLE hEnum, LPDWORD lpcCount, LPVOID lpBuffer, LPDWORD lpBufferSize);
typedef DWORD(APIENTRY *PF_NPEnumResource) (HANDLE hEnum, LPDWORD lpcCount, LPVOID lpBuffer, LPDWORD lpBufferSize);
DWORD APIENTRY NPCloseEnum(HANDLE hEnum);
typedef DWORD(APIENTRY *PF_NPCloseEnum) (HANDLE hEnum);
#define WNNC_SPEC_VERSION                0x00000001
#define WNNC_SPEC_VERSION51              0x00050001
#define WNNC_NET_TYPE                    0x00000002
#define WNNC_NET_NONE                    0x00000000
#define WNNC_DRIVER_VERSION              0x00000003
#define WNNC_USER                        0x00000004
#define WNNC_USR_GETUSER                 0x00000001
#define WNNC_CONNECTION                  0x00000006
#define WNNC_CON_ADDCONNECTION           0x00000001
#define WNNC_CON_CANCELCONNECTION        0x00000002
#define WNNC_CON_GETCONNECTIONS          0x00000004
#define WNNC_CON_ADDCONNECTION3          0x00000008
#define WNNC_CON_GETPERFORMANCE          0x00000040
#define WNNC_CON_DEFER                   0x00000080
#define WNNC_DIALOG                      0x00000008
#define WNNC_DLG_DEVICEMODE              0x00000001
#define WNNC_DLG_PROPERTYDIALOG          0x00000020
#define WNNC_DLG_SEARCHDIALOG            0x00000040
#define WNNC_DLG_FORMATNETWORKNAME       0x00000080
#define WNNC_DLG_PERMISSIONEDITOR        0x00000100
#define WNNC_DLG_GETRESOURCEPARENT       0x00000200
#define WNNC_DLG_GETRESOURCEINFORMATION  0x00000800
#define WNNC_ADMIN                       0x00000009
#define WNNC_ADM_GETDIRECTORYTYPE        0x00000001
#define WNNC_ADM_DIRECTORYNOTIFY         0x00000002
#define WNNC_ENUMERATION                 0x0000000B
#define WNNC_ENUM_GLOBAL                 0x00000001
#define WNNC_ENUM_LOCAL                  0x00000002
#define WNNC_ENUM_CONTEXT                0x00000004
#define WNNC_ENUM_SHAREABLE              0x00000008
#define WNNC_START                       0x0000000C
#define WNNC_WAIT_FOR_START              0x00000001
#define WNNC_CONNECTION_FLAGS            0x0000000D
#define WNNC_CF_DEFAULT ( CONNECT_TEMPORARY | CONNECT_INTERACTIVE | CONNECT_PROMPT )
#define WNNC_CF_MAXIMUM (WNNC_CF_DEFAULT | CONNECT_DEFERRED | CONNECT_COMMANDLINE | CONNECT_CMD_SAVECRED | CONNECT_CRED_RESET)
DWORD APIENTRY NPGetCaps(DWORD ndex);
typedef DWORD(APIENTRY *PF_NPGetCaps) (DWORD ndex);
DWORD APIENTRY NPGetUser(LPWSTR lpName, LPWSTR lpUserName, LPDWORD lpnBufferLen);
typedef DWORD(APIENTRY *PF_NPGetUser) (LPWSTR lpName, LPWSTR lpUserName, LPDWORD lpnBufferLen);
#define WNTYPE_DRIVE    1
#define WNTYPE_FILE     2
#define WNTYPE_PRINTER  3
#define WNTYPE_COMM     4
#define WNPS_FILE       0
#define WNPS_DIR        1
#define WNPS_MULT       2
DWORD APIENTRY NPDeviceMode(HWND hParent);
typedef DWORD(APIENTRY *PF_NPDeviceMode) (HWND hParent);
#define WNSRCH_REFRESH_FIRST_LEVEL 0x00000001
DWORD APIENTRY NPSearchDialog(HWND hwndParent, LPNETRESOURCEW lpNetResource, LPVOID lpBuffer, DWORD cbBuffer, LPDWORD lpnFlags);
typedef DWORD(APIENTRY *PF_NPSearchDialog) (HWND hwndParent, LPNETRESOURCEW lpNetResource, LPVOID lpBuffer, DWORD cbBuffer, LPDWORD lpnFlags);
DWORD APIENTRY NPGetResourceParent(LPNETRESOURCEW lpNetResource, LPVOID lpBuffer, LPDWORD lpBufferSize);
typedef DWORD(APIENTRY *PF_NPGetResourceParent) (LPNETRESOURCEW lpNetResource, LPVOID lpBuffer, LPDWORD lpBufferSize);
DWORD APIENTRY NPGetResourceInformation(LPNETRESOURCEW lpNetResource, LPVOID lpBuffer, LPDWORD lpBufferSize, LPWSTR *lplpSystem);
typedef DWORD(APIENTRY *PF_NPGetResourceInformation) (LPNETRESOURCEW lpNetResource, LPVOID lpBuffer, LPDWORD lpBufferSize, LPWSTR *lplpSystem);
DWORD APIENTRY NPFormatNetworkName(LPWSTR lpRemoteName, LPWSTR lpFormattedName, LPDWORD lpnLength, DWORD dwFlags, DWORD dwAveCharPerLine);
typedef DWORD(APIENTRY *PF_NPFormatNetworkName) (LPWSTR lpRemoteName, LPWSTR lpFormattedName, LPDWORD lpnLength, DWORD dwFlags, DWORD dwAveCharPerLine);
DWORD APIENTRY NPGetPropertyText(DWORD iButton, DWORD nPropSel, LPWSTR lpName, LPWSTR lpButtonName, DWORD nButtonNameLen, DWORD nType);
typedef DWORD(APIENTRY *PF_NPGetPropertyText) (DWORD iButton, DWORD nPropSel, LPWSTR lpName, LPWSTR lpButtonName, DWORD nButtonNameLen, DWORD nType);
DWORD APIENTRY NPPropertyDialog(HWND hwndParent, DWORD iButtonDlg, DWORD nPropSel, LPWSTR lpFileName, DWORD nType);
typedef DWORD(APIENTRY *PF_NPPropertyDialog) (HWND hwndParent, DWORD iButtonDlg, DWORD nPropSel, LPWSTR lpFileName, DWORD nType);
#define WNDT_NORMAL   0
#define WNDT_NETWORK  1
#define WNDN_MKDIR    1
#define WNDN_RMDIR    2
#define WNDN_MVDIR    3
DWORD APIENTRY NPGetDirectoryType(LPWSTR lpName, LPINT lpType, BOOL bFlushCache);
typedef DWORD(APIENTRY *PF_NPGetDirectoryType) (LPWSTR lpName, LPINT lpType, BOOL bFlushCache);
DWORD APIENTRY NPDirectoryNotify(HWND hwnd, LPWSTR lpDir, DWORD dwOper);
typedef DWORD(APIENTRY *PF_NPDirectoryNotify) (HWND hwnd, LPWSTR lpDir, DWORD dwOper);
VOID  WNetSetLastErrorA(DWORD err, LPSTR lpError, LPSTR lpProviders);
VOID  WNetSetLastErrorW(DWORD err, LPWSTR lpError, LPWSTR lpProviders);
#ifdef UNICODE
#define WNetSetLastError   WNetSetLastErrorW
#else
#define WNetSetLastError   WNetSetLastErrorA
#endif
#define WN_NETWORK_CLASS            0x00000001
#define WN_CREDENTIAL_CLASS         0x00000002
#define WN_PRIMARY_AUTHENT_CLASS    0x00000004
#define WN_SERVICE_CLASS            0x00000008
#define WN_VALID_LOGON_ACCOUNT      0x00000001
#define WN_NT_PASSWORD_CHANGED      0x00000002
DWORD APIENTRY NPLogonNotify(PLUID lpLogonId, LPCWSTR lpAuthentInfoType, LPVOID lpAuthentInfo, LPCWSTR lpPreviousAuthentInfoType, LPVOID lpPreviousAuthentInfo, LPWSTR lpStationName, LPVOID StationHandle, LPWSTR *lpLogonScript);
typedef DWORD(APIENTRY *PF_NPLogonNotify) (PLUID lpLogonId, LPCWSTR lpAuthentInfoType, LPVOID lpAuthentInfo, LPCWSTR lpPreviousAuthentInfoType, LPVOID lpPreviousAuthentInfo, LPWSTR lpStationName, LPVOID StationHandle, LPWSTR *lpLogonScript);
DWORD APIENTRY NPPasswordChangeNotify(LPCWSTR lpAuthentInfoType, LPVOID lpAuthentInfo, LPCWSTR lpPreviousAuthentInfoType, LPVOID lpPreviousAuthentInfo, LPWSTR lpStationName, LPVOID StationHandle, DWORD dwChangeInfo);
typedef DWORD(APIENTRY *PF_NPPasswordChangeNotify) (LPCWSTR lpAuthentInfoType, LPVOID lpAuthentInfo, LPCWSTR lpPreviousAuthentInfoType, LPVOID lpPreviousAuthentInfo, LPWSTR lpStationName, LPVOID StationHandle, DWORD dwChangeInfo);
#define NOTIFY_PRE      0x00000001
#define NOTIFY_POST     0x00000002
typedef struct _NOTIFYINFO
{
	DWORD dwNotifyStatus;
	DWORD dwOperationStatus;
	LPVOID lpContext;
}
NOTIFYINFO, *LPNOTIFYINFO;
typedef struct _NOTIFYADD
{
	HWND hwndOwner;
	NETRESOURCE NetResource;
	DWORD dwAddFlags;
}
NOTIFYADD, *LPNOTIFYADD;
typedef struct _NOTIFYCANCEL
{
	LPWSTR lpName;
	LPWSTR lpProvider;
	DWORD dwFlags;
	BOOL fForce;
}
NOTIFYCANCEL, *LPNOTIFYCANCEL;
DWORD APIENTRY AddConnectNotify(LPNOTIFYINFO lpNotifyInfo, LPNOTIFYADD lpAddInfo);
typedef DWORD(APIENTRY *PF_AddConnectNotify) (LPNOTIFYINFO lpNotifyInfo, LPNOTIFYADD lpAddInfo);
DWORD APIENTRY CancelConnectNotify(LPNOTIFYINFO lpNotifyInfo, LPNOTIFYCANCEL lpCancelInfo);
typedef DWORD(APIENTRY *PF_CancelConnectNotify) (LPNOTIFYINFO lpNotifyInfo, LPNOTIFYCANCEL lpCancelInfo);
#define WNPERMC_PERM  0x00000001
#define WNPERMC_AUDIT 0x00000002
#define WNPERMC_OWNER 0x00000004
DWORD APIENTRY NPFMXGetPermCaps(LPWSTR lpDriveName);
typedef DWORD(APIENTRY *PF_NPFMXGetPermCaps) (LPWSTR lpDriveName);
#define WNPERM_DLG_PERM   0
#define WNPERM_DLG_AUDIT  1
#define WNPERM_DLG_OWNER  2
DWORD APIENTRY NPFMXEditPerm(LPWSTR lpDriveName, HWND hwndFMX, DWORD nDialogType);
typedef DWORD(APIENTRY *PF_NPFMXEditPerm) (LPWSTR lpDriveName, HWND hwndFMX, DWORD nDialogType);
DWORD APIENTRY NPFMXGetPermHelp(LPWSTR lpDriveName, DWORD nDialogType, BOOL fDirectory, LPVOID lpFileNameBuffer, LPDWORD lpBufferSize, LPDWORD lpnHelpContext);
typedef DWORD(APIENTRY *PF_NPFMXGetPermHelp) (LPWSTR lpDriveName, DWORD nDialogType, BOOL fDirectory, LPVOID lpFileNameBuffer, LPDWORD lpBufferSize, LPDWORD lpnHelpContext);
#endif

/*+@@file@@----------------------------------------------------------------*//*!
 \file		WS2spi.h
 \par Description 
            Extension and update of headers for PellesC compiler suite.
 \par Project: 
            PellesC Headers extension
 \date		Created  on Sun Sep  4 00:40:43 2016
 \date		Modified on Sun Sep  4 00:40:43 2016
 \author	frankie
\*//*-@@file@@----------------------------------------------------------------*/

#ifndef _WINSOCK2SPI_
#define _WINSOCK2SPI_
#if __POCC__ >= 500
#pragma once
#endif
#ifndef _WINSOCK2API_
#include <winsock2.h>
#endif
#if !defined(_WIN64)
#include <pshpack4.h>
#endif
#define WSPDESCRIPTION_LEN 255
#define WSS_OPERATION_IN_PROGRESS 0x00000103L
typedef struct WSPData
{
    WORD         wVersion;
    WORD         wHighVersion;
    WCHAR        szDescription[WSPDESCRIPTION_LEN+1];
} WSPDATA, FAR * LPWSPDATA;
typedef struct _WSATHREADID
{
    HANDLE      ThreadHandle;
    DWORD_PTR    Reserved;
} WSATHREADID, FAR * LPWSATHREADID;
#define WSPAPI WSAAPI
typedef BOOL(CALLBACK FAR *LPBLOCKINGCALLBACK) (DWORD_PTR dwContext);
typedef VOID(CALLBACK FAR *LPWSAUSERAPC) (DWORD_PTR dwContext);
typedef SOCKET(WSPAPI *LPWSPACCEPT) (SOCKET s, struct sockaddr FAR *addr, LPINT addrlen, LPCONDITIONPROC lpfnCondition, DWORD_PTR dwCallbackData, LPINT lpErrno);
typedef INT(WSPAPI *LPWSPADDRESSTOSTRING) (LPSOCKADDR lpsaAddress, DWORD dwAddressLength, LPWSAPROTOCOL_INFOW lpProtocolInfo, LPWSTR lpszAddressString, LPDWORD lpdwAddressStringLength, LPINT lpErrno);
typedef int (WSPAPI *LPWSPASYNCSELECT) (SOCKET s, HWND hWnd, unsigned int wMsg, long lEvent, LPINT lpErrno);
typedef int (WSPAPI *LPWSPBIND) (SOCKET s, const struct sockaddr FAR *name, int namelen, LPINT lpErrno);
typedef int (WSPAPI *LPWSPCANCELBLOCKINGCALL) (LPINT lpErrno);
typedef int (WSPAPI *LPWSPCLEANUP) (LPINT lpErrno);
typedef int (WSPAPI *LPWSPCLOSESOCKET) (SOCKET s, LPINT lpErrno);
typedef int (WSPAPI *LPWSPCONNECT) (SOCKET s, const struct sockaddr FAR *name, int namelen, LPWSABUF lpCallerData, LPWSABUF lpCalleeData, LPQOS lpSQOS, LPQOS lpGQOS, LPINT lpErrno);
typedef int (WSPAPI *LPWSPDUPLICATESOCKET) (SOCKET s, DWORD dwProcessId, LPWSAPROTOCOL_INFOW lpProtocolInfo, LPINT lpErrno);
typedef int (WSPAPI *LPWSPENUMNETWORKEVENTS) (SOCKET s, WSAEVENT hEventObject, LPWSANETWORKEVENTS lpNetworkEvents, LPINT lpErrno);
typedef int (WSPAPI *LPWSPEVENTSELECT) (SOCKET s, WSAEVENT hEventObject, long lNetworkEvents, LPINT lpErrno);
typedef BOOL(WSPAPI *LPWSPGETOVERLAPPEDRESULT) (SOCKET s, LPWSAOVERLAPPED lpOverlapped, LPDWORD lpcbTransfer, BOOL fWait, LPDWORD lpdwFlags, LPINT lpErrno);
typedef int (WSPAPI *LPWSPGETPEERNAME) (SOCKET s, struct sockaddr FAR *name, LPINT namelen, LPINT lpErrno);
typedef int (WSPAPI *LPWSPGETSOCKNAME) (SOCKET s, struct sockaddr FAR *name, LPINT namelen, LPINT lpErrno);
typedef int (WSPAPI *LPWSPGETSOCKOPT) (SOCKET s, int level, int optname, char FAR *optval, LPINT optlen, LPINT lpErrno);
typedef BOOL(WSPAPI *LPWSPGETQOSBYNAME) (SOCKET s, LPWSABUF lpQOSName, LPQOS lpQOS, LPINT lpErrno);
typedef int (WSPAPI *LPWSPIOCTL) (SOCKET s, DWORD dwIoControlCode, LPVOID lpvInBuffer, DWORD cbInBuffer, LPVOID lpvOutBuffer, DWORD cbOutBuffer, LPDWORD lpcbBytesReturned, LPWSAOVERLAPPED lpOverlapped, LPWSAOVERLAPPED_COMPLETION_ROUTINE lpCompletionRoutine, LPWSATHREADID lpThreadId, LPINT lpErrno);
typedef SOCKET(WSPAPI *LPWSPJOINLEAF) (SOCKET s, const struct sockaddr FAR *name, int namelen, LPWSABUF lpCallerData, LPWSABUF lpCalleeData, LPQOS lpSQOS, LPQOS lpGQOS, DWORD dwFlags, LPINT lpErrno);
typedef int (WSPAPI *LPWSPLISTEN) (SOCKET s, int backlog, LPINT lpErrno);
typedef int (WSPAPI *LPWSPRECV) (SOCKET s, LPWSABUF lpBuffers, DWORD dwBufferCount, LPDWORD lpNumberOfBytesRecvd, LPDWORD lpFlags, LPWSAOVERLAPPED lpOverlapped, LPWSAOVERLAPPED_COMPLETION_ROUTINE lpCompletionRoutine, LPWSATHREADID lpThreadId, LPINT lpErrno);
typedef int (WSPAPI *LPWSPRECVDISCONNECT) (SOCKET s, LPWSABUF lpInboundDisconnectData, LPINT lpErrno);
typedef int (WSPAPI *LPWSPRECVFROM) (SOCKET s, LPWSABUF lpBuffers, DWORD dwBufferCount, LPDWORD lpNumberOfBytesRecvd, LPDWORD lpFlags, struct sockaddr FAR *lpFrom, LPINT lpFromlen, LPWSAOVERLAPPED lpOverlapped, LPWSAOVERLAPPED_COMPLETION_ROUTINE lpCompletionRoutine, LPWSATHREADID lpThreadId, LPINT lpErrno);
typedef int (WSPAPI *LPWSPSELECT) (int nfds, fd_set FAR *readfds, fd_set FAR *writefds, fd_set FAR *exceptfds, const struct timeval FAR *timeout, LPINT lpErrno);
typedef int (WSPAPI *LPWSPSEND) (SOCKET s, LPWSABUF lpBuffers, DWORD dwBufferCount, LPDWORD lpNumberOfBytesSent, DWORD dwFlags, LPWSAOVERLAPPED lpOverlapped, LPWSAOVERLAPPED_COMPLETION_ROUTINE lpCompletionRoutine, LPWSATHREADID lpThreadId, LPINT lpErrno);
typedef int (WSPAPI *LPWSPSENDDISCONNECT) (SOCKET s, LPWSABUF lpOutboundDisconnectData, LPINT lpErrno);
typedef int (WSPAPI *LPWSPSENDTO) (SOCKET s, LPWSABUF lpBuffers, DWORD dwBufferCount, LPDWORD lpNumberOfBytesSent, DWORD dwFlags, const struct sockaddr FAR *lpTo, int iTolen, LPWSAOVERLAPPED lpOverlapped, LPWSAOVERLAPPED_COMPLETION_ROUTINE lpCompletionRoutine, LPWSATHREADID lpThreadId, LPINT lpErrno);
typedef int (WSPAPI *LPWSPSETSOCKOPT) (SOCKET s, int level, int optname, const char FAR *optval, int optlen, LPINT lpErrno);
typedef int (WSPAPI *LPWSPSHUTDOWN) (SOCKET s, int how, LPINT lpErrno);
typedef SOCKET(WSPAPI *LPWSPSOCKET) (int af, int type, int protocol, LPWSAPROTOCOL_INFOW lpProtocolInfo, GROUP g, DWORD dwFlags, LPINT lpErrno);
typedef INT(WSPAPI *LPWSPSTRINGTOADDRESS) (LPWSTR AddressString, INT AddressFamily, LPWSAPROTOCOL_INFOW lpProtocolInfo, LPSOCKADDR lpAddress, LPINT lpAddressLength, LPINT lpErrno);
typedef struct _WSPPROC_TABLE
{
	LPWSPACCEPT lpWSPAccept;
	LPWSPADDRESSTOSTRING lpWSPAddressToString;
	LPWSPASYNCSELECT lpWSPAsyncSelect;
	LPWSPBIND lpWSPBind;
	LPWSPCANCELBLOCKINGCALL lpWSPCancelBlockingCall;
	LPWSPCLEANUP lpWSPCleanup;
	LPWSPCLOSESOCKET lpWSPCloseSocket;
	LPWSPCONNECT lpWSPConnect;
	LPWSPDUPLICATESOCKET lpWSPDuplicateSocket;
	LPWSPENUMNETWORKEVENTS lpWSPEnumNetworkEvents;
	LPWSPEVENTSELECT lpWSPEventSelect;
	LPWSPGETOVERLAPPEDRESULT lpWSPGetOverlappedResult;
	LPWSPGETPEERNAME lpWSPGetPeerName;
	LPWSPGETSOCKNAME lpWSPGetSockName;
	LPWSPGETSOCKOPT lpWSPGetSockOpt;
	LPWSPGETQOSBYNAME lpWSPGetQOSByName;
	LPWSPIOCTL lpWSPIoctl;
	LPWSPJOINLEAF lpWSPJoinLeaf;
	LPWSPLISTEN lpWSPListen;
	LPWSPRECV lpWSPRecv;
	LPWSPRECVDISCONNECT lpWSPRecvDisconnect;
	LPWSPRECVFROM lpWSPRecvFrom;
	LPWSPSELECT lpWSPSelect;
	LPWSPSEND lpWSPSend;
	LPWSPSENDDISCONNECT lpWSPSendDisconnect;
	LPWSPSENDTO lpWSPSendTo;
	LPWSPSETSOCKOPT lpWSPSetSockOpt;
	LPWSPSHUTDOWN lpWSPShutdown;
	LPWSPSOCKET lpWSPSocket;
	LPWSPSTRINGTOADDRESS lpWSPStringToAddress;
} WSPPROC_TABLE, FAR * LPWSPPROC_TABLE;
typedef BOOL(WSPAPI *LPWPUCLOSEEVENT) (WSAEVENT hEvent, LPINT lpErrno);
typedef int (WSPAPI *LPWPUCLOSESOCKETHANDLE) (SOCKET s, LPINT lpErrno);
typedef WSAEVENT(WSPAPI *LPWPUCREATEEVENT) (LPINT lpErrno);
typedef SOCKET(WSPAPI *LPWPUCREATESOCKETHANDLE) (DWORD dwCatalogEntryId, DWORD_PTR dwContext, LPINT lpErrno);
typedef int (WSPAPI *LPWPUFDISSET) (SOCKET s, fd_set FAR *fdset);
typedef int (WSPAPI *LPWPUGETPROVIDERPATH) (LPGUID lpProviderId, WCHAR FAR *lpszProviderDllPath, LPINT lpProviderDllPathLen, LPINT lpErrno);
typedef SOCKET(WSPAPI *LPWPUMODIFYIFSHANDLE) (DWORD dwCatalogEntryId, SOCKET ProposedHandle, LPINT lpErrno);
typedef BOOL(WSPAPI *LPWPUPOSTMESSAGE) (HWND hWnd, UINT Msg, WPARAM wParam, LPARAM lParam);
typedef int (WSPAPI *LPWPUQUERYBLOCKINGCALLBACK) (DWORD dwCatalogEntryId, LPBLOCKINGCALLBACK FAR *lplpfnCallback, PDWORD_PTR lpdwContext, LPINT lpErrno);
typedef int (WSPAPI *LPWPUQUERYSOCKETHANDLECONTEXT) (SOCKET s, PDWORD_PTR lpContext, LPINT lpErrno);
typedef int (WSPAPI *LPWPUQUEUEAPC) (LPWSATHREADID lpThreadId, LPWSAUSERAPC lpfnUserApc, DWORD_PTR dwContext, LPINT lpErrno);
typedef BOOL(WSPAPI *LPWPURESETEVENT) (WSAEVENT hEvent, LPINT lpErrno);
typedef BOOL(WSPAPI *LPWPUSETEVENT) (WSAEVENT hEvent, LPINT lpErrno);
typedef int (WSPAPI *LPWPUOPENCURRENTTHREAD) (LPWSATHREADID lpThreadId, LPINT lpErrno);
typedef int (WSPAPI *LPWPUCLOSETHREAD) (LPWSATHREADID lpThreadId, LPINT lpErrno);
typedef int (WSPAPI *LPWPUCOMPLETEOVERLAPPEDREQUEST) (SOCKET s, LPWSAOVERLAPPED lpOverlapped, DWORD dwError, DWORD cbTransferred, LPINT lpErrno);
typedef struct _WSPUPCALLTABLE
{
	LPWPUCLOSEEVENT lpWPUCloseEvent;
	LPWPUCLOSESOCKETHANDLE lpWPUCloseSocketHandle;
	LPWPUCREATEEVENT lpWPUCreateEvent;
	LPWPUCREATESOCKETHANDLE lpWPUCreateSocketHandle;
	LPWPUFDISSET lpWPUFDIsSet;
	LPWPUGETPROVIDERPATH lpWPUGetProviderPath;
	LPWPUMODIFYIFSHANDLE lpWPUModifyIFSHandle;
	LPWPUPOSTMESSAGE lpWPUPostMessage;
	LPWPUQUERYBLOCKINGCALLBACK lpWPUQueryBlockingCallback;
	LPWPUQUERYSOCKETHANDLECONTEXT lpWPUQuerySocketHandleContext;
	LPWPUQUEUEAPC lpWPUQueueApc;
	LPWPURESETEVENT lpWPUResetEvent;
	LPWPUSETEVENT lpWPUSetEvent;
	LPWPUOPENCURRENTTHREAD lpWPUOpenCurrentThread;
	LPWPUCLOSETHREAD lpWPUCloseThread;
} WSPUPCALLTABLE, FAR * LPWSPUPCALLTABLE;
int WSPAPI WSPStartup(WORD wVersionRequested, LPWSPDATA lpWSPData, LPWSAPROTOCOL_INFOW lpProtocolInfo, WSPUPCALLTABLE UpcallTable, LPWSPPROC_TABLE lpProcTable);
typedef int (WSPAPI *LPWSPSTARTUP) (WORD wVersionRequested, LPWSPDATA lpWSPData, LPWSAPROTOCOL_INFOW lpProtocolInfo, WSPUPCALLTABLE UpcallTable, LPWSPPROC_TABLE lpProcTable);
int WSPAPI WSCEnumProtocols(LPINT lpiProtocols, LPWSAPROTOCOL_INFOW lpProtocolBuffer, LPDWORD lpdwBufferLength, LPINT lpErrno);
typedef int (WSPAPI * LPWSCENUMPROTOCOLS) (LPINT lpiProtocols, LPWSAPROTOCOL_INFOW lpProtocolBuffer, LPDWORD lpdwBufferLength, LPINT lpErrno);
#if(defined(_WIN64) && (_WIN32_WINNT >= 0x0501))
int WSPAPI WSCEnumProtocols32(LPINT lpiProtocols, LPWSAPROTOCOL_INFOW lpProtocolBuffer, LPDWORD lpdwBufferLength, LPINT lpErrno);
#endif
int WSPAPI WSCDeinstallProvider(LPGUID lpProviderId, LPINT lpErrno);
typedef int (WSPAPI * LPWSCDEINSTALLPROVIDER) (LPGUID lpProviderId, LPINT lpErrno);
#if(defined(_WIN64) && (_WIN32_WINNT >= 0x0501))
int WSPAPI WSCDeinstallProvider32(LPGUID lpProviderId, LPINT lpErrno);
#endif
int WSPAPI WSCInstallProvider(LPGUID lpProviderId, const WCHAR FAR * lpszProviderDllPath, const LPWSAPROTOCOL_INFOW lpProtocolInfoList, DWORD dwNumberOfEntries, LPINT lpErrno);
typedef int (WSPAPI * LPWSCINSTALLPROVIDER) (LPGUID lpProviderId, const WCHAR FAR * lpszProviderDllPath, const LPWSAPROTOCOL_INFOW lpProtocolInfoList, DWORD dwNumberOfEntries, LPINT lpErrno);
#if(defined(_WIN64) && (_WIN32_WINNT >= 0x0501))
int WSPAPI WSCInstallProvider64_32(LPGUID lpProviderId, const WCHAR FAR * lpszProviderDllPath, const LPWSAPROTOCOL_INFOW lpProtocolInfoList, DWORD dwNumberOfEntries, LPINT lpErrno);
#endif
int WSPAPI WSCGetProviderPath(LPGUID lpProviderId, WCHAR FAR * lpszProviderDllPath, LPINT lpProviderDllPathLen, LPINT lpErrno);
typedef int (WSPAPI * LPWSCGETPROVIDERPATH) (LPGUID lpProviderId, WCHAR FAR * lpszProviderDllPath, LPINT lpProviderDllPathLen, LPINT lpErrno);
#if(_WIN32_WINNT >= 0x0501)
#if defined(_WIN64)
int WSPAPI WSCGetProviderPath32(LPGUID lpProviderId, WCHAR FAR *lpszProviderDllPath, LPINT lpProviderDllPathLen, LPINT lpErrno);
#endif
int WSPAPI WSCUpdateProvider(LPGUID lpProviderId, const WCHAR FAR * lpszProviderDllPath, const LPWSAPROTOCOL_INFOW lpProtocolInfoList, DWORD dwNumberOfEntries, LPINT lpErrno);
typedef int (WSPAPI * LPWSCUPDATEPROVIDER) (LPGUID lpProviderId, const WCHAR FAR * lpszProviderDllPath, const LPWSAPROTOCOL_INFOW lpProtocolInfoList, DWORD dwNumberOfEntries, LPINT lpErrno);
#if defined(_WIN64)
int WSPAPI WSCUpdateProvider32(LPGUID lpProviderId, const WCHAR FAR * lpszProviderDllPath, const LPWSAPROTOCOL_INFOW lpProtocolInfoList, DWORD dwNumberOfEntries, LPINT lpErrno);
#endif
#endif
#if (_WIN32_WINNT < 0x0600)
int WSPAPI WSCInstallQOSTemplate(const LPGUID Guid, LPWSABUF QosName, LPQOS Qos);
typedef int (WSPAPI *LPWSCINSTALLQOSTEMPLATE) (const LPGUID Guid, LPWSABUF QosName, LPQOS Qos);
int WSPAPI WSCRemoveQOSTemplate(const LPGUID Guid, LPWSABUF QosName);
typedef int (WSPAPI *LPWSCREMOVEQOSTEMPLATE) (const LPGUID Guid, LPWSABUF QosName);
#endif
#if(_WIN32_WINNT >= 0x0600)
#define LSP_SYSTEM             0x80000000
#define LSP_INSPECTOR          0x00000001
#define LSP_REDIRECTOR         0x00000002
#define LSP_PROXY              0x00000004
#define LSP_FIREWALL           0x00000008
#define LSP_INBOUND_MODIFY     0x00000010
#define LSP_OUTBOUND_MODIFY    0x00000020
#define LSP_CRYPTO_COMPRESS    0x00000040
#define LSP_LOCAL_CACHE        0x00000080
typedef enum _WSC_PROVIDER_INFO_TYPE
{
	ProviderInfoLspCategories,
	ProviderInfoAudit,
} WSC_PROVIDER_INFO_TYPE;
typedef struct _WSC_PROVIDER_AUDIT_INFO
{
	DWORD RecordSize;
	PVOID Reserved;
} WSC_PROVIDER_AUDIT_INFO;
int WSPAPI WSCSetProviderInfo(LPGUID lpProviderId, WSC_PROVIDER_INFO_TYPE InfoType, PBYTE Info, size_t InfoSize, DWORD Flags, LPINT lpErrno);
int WSPAPI WSCGetProviderInfo(LPGUID lpProviderId, WSC_PROVIDER_INFO_TYPE InfoType, PBYTE Info, size_t * InfoSize, DWORD Flags, LPINT lpErrno);
#if defined(_WIN64)
int WSPAPI WSCSetProviderInfo32(LPGUID lpProviderId, WSC_PROVIDER_INFO_TYPE InfoType, PBYTE Info, size_t InfoSize, DWORD Flags, LPINT lpErrno);
int WSPAPI WSCGetProviderInfo32(LPGUID lpProviderId, WSC_PROVIDER_INFO_TYPE InfoType, PBYTE Info, size_t * InfoSize, DWORD Flags, LPINT lpErrno);
#endif
int WSPAPI WSCSetApplicationCategory(LPCWSTR Path, DWORD PathLength, LPCWSTR Extra, DWORD ExtraLength, DWORD PermittedLspCategories, DWORD * pPrevPermLspCat, LPINT lpErrno);
int WSPAPI WSCGetApplicationCategory(LPCWSTR Path, DWORD PathLength, LPCWSTR Extra, DWORD ExtraLength, DWORD * pPermittedLspCategories, LPINT lpErrno);
#endif
BOOL WSPAPI WPUCloseEvent(WSAEVENT hEvent, LPINT lpErrno);
int WSPAPI WPUCloseSocketHandle(SOCKET s, LPINT lpErrno);
WSAEVENT WSPAPI WPUCreateEvent(LPINT lpErrno);
SOCKET WSPAPI WPUCreateSocketHandle(DWORD dwCatalogEntryId, DWORD_PTR dwContext, LPINT lpErrno);
int WSPAPI WPUFDIsSet(SOCKET s, fd_set FAR * fdset);
int WSPAPI WPUGetProviderPath(LPGUID lpProviderId, WCHAR FAR * lpszProviderDllPath, LPINT lpProviderDllPathLen, LPINT lpErrno);
SOCKET WSPAPI WPUModifyIFSHandle(DWORD dwCatalogEntryId, SOCKET ProposedHandle, LPINT lpErrno);
BOOL WSPAPI WPUPostMessage(HWND hWnd, UINT Msg, WPARAM wParam, LPARAM lParam);
int WSPAPI WPUQueryBlockingCallback(DWORD dwCatalogEntryId, LPBLOCKINGCALLBACK FAR * lplpfnCallback, PDWORD_PTR lpdwContext, LPINT lpErrno);
int WSPAPI WPUQuerySocketHandleContext(SOCKET s, PDWORD_PTR lpContext, LPINT lpErrno);
int WSPAPI WPUQueueApc(LPWSATHREADID lpThreadId, LPWSAUSERAPC lpfnUserApc, DWORD_PTR dwContext, LPINT lpErrno);
BOOL WSPAPI WPUResetEvent(WSAEVENT hEvent, LPINT lpErrno);
BOOL WSPAPI WPUSetEvent(WSAEVENT hEvent, LPINT lpErrno);
int WSPAPI WPUCompleteOverlappedRequest(SOCKET s, LPWSAOVERLAPPED lpOverlapped, DWORD dwError, DWORD cbTransferred, LPINT lpErrno);
#if(_WIN32_WINNT >= 0x0501)
int WSPAPI WPUOpenCurrentThread(LPWSATHREADID lpThreadId, LPINT lpErrno);
int WSPAPI WPUCloseThread(LPWSATHREADID lpThreadId, LPINT lpErrno);
#endif
#if(_WIN32_WINNT >= 0x0501)
#define WSCEnumNameSpaceProviders WSAEnumNameSpaceProvidersW
#define LPFN_WSCENUMNAMESPACEPROVIDERS LPFN_WSAENUMNAMESPACEPROVIDERSW
#if defined(_WIN64)
INT WSAAPI WSCEnumNameSpaceProviders32(LPDWORD lpdwBufferLength, LPWSANAMESPACE_INFOW lpnspBuffer);
#endif
#endif
#if(_WIN32_WINNT >= 0x0600)
#define WSCEnumNameSpaceProvidersEx WSAEnumNameSpaceProvidersExW
#define LPFN_WSCENUMNAMESPACEPROVIDERSEX LPFN_WSAENUMNAMESPACEPROVIDERSEXW
#if defined(_WIN64)
INT WSAAPI WSCEnumNameSpaceProvidersEx32(LPDWORD lpdwBufferLength, LPWSANAMESPACE_INFOEXW lpnspBuffer);
#endif
#endif
INT WSPAPI WSCInstallNameSpace(LPWSTR lpszIdentifier, LPWSTR lpszPathName, DWORD dwNameSpace, DWORD dwVersion, LPGUID lpProviderId);
typedef INT(WSPAPI * LPWSCINSTALLNAMESPACE) (LPWSTR lpszIdentifier, LPWSTR lpszPathName, DWORD dwNameSpace, DWORD dwVersion, LPGUID lpProviderId);
#if(defined(_WIN64) && (_WIN32_WINNT >= 0x0501))
INT WSPAPI WSCInstallNameSpace32(LPWSTR lpszIdentifier, LPWSTR lpszPathName, DWORD dwNameSpace, DWORD dwVersion, LPGUID lpProviderId);
#endif
INT WSPAPI WSCUnInstallNameSpace(LPGUID lpProviderId);
typedef INT(WSPAPI * LPWSCUNINSTALLNAMESPACE) (LPGUID lpProviderId);
#if (_WIN32_WINNT >= 0x0600 )
INT WSPAPI WSCInstallNameSpaceEx(LPWSTR lpszIdentifier, LPWSTR lpszPathName, DWORD dwNameSpace, DWORD dwVersion, LPGUID lpProviderId, LPBLOB lpProviderSpecific);
#endif
#if(defined(_WIN64) && (_WIN32_WINNT >= 0x0600))
INT WSPAPI WSCInstallNameSpaceEx32(LPWSTR lpszIdentifier, LPWSTR lpszPathName, DWORD dwNameSpace, DWORD dwVersion, LPGUID lpProviderId, LPBLOB lpProviderSpecific);
#endif
#if(defined(_WIN64) && (_WIN32_WINNT >= 0x0501))
INT WSPAPI WSCUnInstallNameSpace32(LPGUID lpProviderId);
#endif
INT WSPAPI WSCEnableNSProvider(LPGUID lpProviderId, BOOL fEnable);
typedef INT(WSPAPI * LPWSCENABLENSPROVIDER) (LPGUID lpProviderId, BOOL fEnable);
#if(defined(_WIN64) && (_WIN32_WINNT >= 0x0501))
INT WSPAPI WSCEnableNSProvider32(LPGUID lpProviderId, BOOL fEnable);
#endif
#if (_WIN32_WINNT >= 0x0600)
#if defined(_WIN64)
int WSPAPI WSCInstallProviderAndChains64_32(
#else
int WSPAPI WSCInstallProviderAndChains(
#endif
LPGUID lpProviderId, const LPWSTR lpszProviderDllPath,
#if defined(_WIN64)
const LPWSTR lpszProviderDllPath32,
#endif
const LPWSTR lpszLspName, DWORD dwServiceFlags, LPWSAPROTOCOL_INFOW lpProtocolInfoList, DWORD dwNumberOfEntries, LPDWORD lpdwCatalogEntryId, LPINT lpErrno);
#endif
typedef INT(WSAAPI * LPNSPCLEANUP) (LPGUID lpProviderId);
typedef INT(WSAAPI * LPNSPLOOKUPSERVICEBEGIN) (LPGUID lpProviderId, LPWSAQUERYSETW lpqsRestrictions, LPWSASERVICECLASSINFOW lpServiceClassInfo, DWORD dwControlFlags, LPHANDLE lphLookup);
typedef INT(WSAAPI * LPNSPLOOKUPSERVICENEXT) (HANDLE hLookup, DWORD dwControlFlags, LPDWORD lpdwBufferLength, LPWSAQUERYSETW lpqsResults);
#if(_WIN32_WINNT >= 0x0501)
typedef INT(WSAAPI * LPNSPIOCTL) (HANDLE hLookup, DWORD dwControlCode, LPVOID lpvInBuffer, DWORD cbInBuffer, LPVOID lpvOutBuffer, DWORD cbOutBuffer, LPDWORD lpcbBytesReturned, LPWSACOMPLETION lpCompletion, LPWSATHREADID lpThreadId);
#endif
typedef INT(WSAAPI * LPNSPLOOKUPSERVICEEND) (HANDLE hLookup);
typedef INT(WSAAPI * LPNSPSETSERVICE) (LPGUID lpProviderId, LPWSASERVICECLASSINFOW lpServiceClassInfo, LPWSAQUERYSETW lpqsRegInfo, WSAESETSERVICEOP essOperation, DWORD dwControlFlags);
typedef INT(WSAAPI * LPNSPINSTALLSERVICECLASS) (LPGUID lpProviderId, LPWSASERVICECLASSINFOW lpServiceClassInfo);
typedef INT(WSAAPI * LPNSPREMOVESERVICECLASS) (LPGUID lpProviderId, LPGUID lpServiceClassId);
typedef INT(WSAAPI * LPNSPGETSERVICECLASSINFO) (LPGUID lpProviderId, LPDWORD lpdwBufSize, LPWSASERVICECLASSINFOW lpServiceClassInfo);
typedef struct _NSP_ROUTINE
{
	DWORD cbSize;
	DWORD dwMajorVersion;
	DWORD dwMinorVersion;
	LPNSPCLEANUP NSPCleanup;
	LPNSPLOOKUPSERVICEBEGIN NSPLookupServiceBegin;
	LPNSPLOOKUPSERVICENEXT NSPLookupServiceNext;
	LPNSPLOOKUPSERVICEEND NSPLookupServiceEnd;
	LPNSPSETSERVICE NSPSetService;
	LPNSPINSTALLSERVICECLASS NSPInstallServiceClass;
	LPNSPREMOVESERVICECLASS NSPRemoveServiceClass;
	LPNSPGETSERVICECLASSINFO NSPGetServiceClassInfo;
#if(_WIN32_WINNT >= 0x0501)
	LPNSPIOCTL NSPIoctl;
#endif
} NSP_ROUTINE, FAR * LPNSP_ROUTINE;
INT WSAAPI NSPStartup(LPGUID lpProviderId, LPNSP_ROUTINE lpnspRoutines);
typedef INT(WSAAPI * LPNSPSTARTUP) (LPGUID lpProviderId, LPNSP_ROUTINE lpnspRoutines);
typedef INT(WSAAPI * LPNSPV2STARTUP) (LPGUID lpProviderId, LPVOID * ppvClientSessionArg);
typedef INT(WSAAPI * LPNSPV2CLEANUP) (LPGUID lpProviderId, LPVOID pvClientSessionArg);
typedef INT(WSAAPI * LPNSPV2LOOKUPSERVICEBEGIN) (LPGUID lpProviderId, LPWSAQUERYSET2W lpqsRestrictions, DWORD dwControlFlags, LPVOID lpvClientSessionArg, LPHANDLE lphLookup);
typedef VOID(WSAAPI * LPNSPV2LOOKUPSERVICENEXTEX) (HANDLE hAsyncCall, HANDLE hLookup, DWORD dwControlFlags, LPDWORD lpdwBufferLength, LPWSAQUERYSET2W lpqsResults);
typedef INT(WSAAPI * LPNSPV2LOOKUPSERVICEEND) (HANDLE hLookup);
typedef VOID(WSAAPI * LPNSPV2SETSERVICEEX) (HANDLE hAsyncCall, LPGUID lpProviderId, LPWSAQUERYSET2W lpqsRegInfo, WSAESETSERVICEOP essOperation, DWORD dwControlFlags, LPVOID lpvClientSessionArg);
typedef VOID(WSAAPI * LPNSPV2CLIENTSESSIONRUNDOWN) (LPGUID lpProviderId, LPVOID pvClientSessionArg);
typedef struct _NSPV2_ROUTINE
{
	DWORD cbSize;
	DWORD dwMajorVersion;
	DWORD dwMinorVersion;
	LPNSPV2STARTUP NSPv2Startup;
	LPNSPV2CLEANUP NSPv2Cleanup;
	LPNSPV2LOOKUPSERVICEBEGIN NSPv2LookupServiceBegin;
	LPNSPV2LOOKUPSERVICENEXTEX NSPv2LookupServiceNextEx;
	LPNSPV2LOOKUPSERVICEEND NSPv2LookupServiceEnd;
	LPNSPV2SETSERVICEEX NSPv2SetServiceEx;
	LPNSPV2CLIENTSESSIONRUNDOWN NSPv2ClientSessionRundown;
} NSPV2_ROUTINE, *PNSPV2_ROUTINE, *LPNSPV2_ROUTINE;
typedef const NSPV2_ROUTINE *PCNSPV2_ROUTINE, *LPCNSPV2_ROUTINE;
#if(_WIN32_WINNT >= 0x0600)
INT WSAAPI WSAAdvertiseProvider(const GUID * puuidProviderId, const LPCNSPV2_ROUTINE pNSPv2Routine);
INT WSAAPI WSAUnadvertiseProvider(const GUID * puuidProviderId);
INT WSAAPI WSAProviderCompleteAsyncCall(HANDLE hAsyncCall, INT iRetCode);
#endif
#if !defined(_WIN64)
#include <poppack.h>
#endif
#endif

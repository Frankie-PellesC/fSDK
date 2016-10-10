/*+@@file@@----------------------------------------------------------------*//*!
 \file		WS2tcpip.h
 \par Description 
            Extension and update of headers for PellesC compiler suite.
 \par Project: 
            PellesC Headers extension
 \date		Created  on Tue Jun 28 18:06:48 2016
 \date		Modified on Tue Jun 28 18:06:48 2016
 \author	frankie
\*//*-@@file@@----------------------------------------------------------------*/

#ifndef _WS2TCPIP_H_
#define _WS2TCPIP_H_
#if __POCC__ >= 500
#pragma once
#endif
#include <winsock2.h>
#include <ws2ipdef.h>
#include <limits.h>
#define UDP_NOCHECKSUM  1
#define UDP_CHECKSUM_COVERAGE   20
#ifdef _MSC_VER
#define WS2TCPIP_INLINE __inline
#else
#define WS2TCPIP_INLINE extern inline
#endif
#define EAI_AGAIN           WSATRY_AGAIN
#define EAI_BADFLAGS        WSAEINVAL
#define EAI_FAIL            WSANO_RECOVERY
#define EAI_FAMILY          WSAEAFNOSUPPORT
#define EAI_MEMORY          WSA_NOT_ENOUGH_MEMORY
#define EAI_NOSECURENAME    WSA_SECURE_HOST_NOT_FOUND
#define EAI_NONAME          WSAHOST_NOT_FOUND
#define EAI_SERVICE         WSATYPE_NOT_FOUND
#define EAI_SOCKTYPE        WSAESOCKTNOSUPPORT
#define EAI_IPSECPOLICY     WSA_IPSEC_NAME_POLICY_ERROR
#define EAI_NODATA      EAI_NONAME
#ifdef UNICODE
typedef ADDRINFOW ADDRINFOT, *PADDRINFOT;
#else
typedef ADDRINFOA ADDRINFOT, *PADDRINFOT;
#endif
typedef ADDRINFOA ADDRINFO, FAR * LPADDRINFO;
#if (_WIN32_WINNT >= 0x0600)
#ifdef UNICODE
typedef ADDRINFOEXW ADDRINFOEX, *PADDRINFOEX;
#else
typedef ADDRINFOEXA ADDRINFOEX, *PADDRINFOEX;
#endif
#endif
WINSOCK_API_LINKAGE INT WSAAPI getaddrinfo(PCSTR pNodeName, PCSTR pServiceName, const ADDRINFOA *pHints, PADDRINFOA *ppResult);
#if (NTDDI_VERSION >= NTDDI_WINXPSP2) || (_WIN32_WINNT >= 0x0502)
WINSOCK_API_LINKAGE INT WSAAPI GetAddrInfoW(PCWSTR pNodeName, PCWSTR pServiceName, const ADDRINFOW *pHints, PADDRINFOW *ppResult);
#define GetAddrInfoA    getaddrinfo
#ifdef UNICODE
#define GetAddrInfo     GetAddrInfoW
#else
#define GetAddrInfo     GetAddrInfoA
#endif
#endif
#if INCL_WINSOCK_API_TYPEDEFS
typedef INT(WSAAPI *LPFN_GETADDRINFO) (PCSTR pNodeName, PCSTR pServiceName, const ADDRINFOA *pHints, PADDRINFOA *ppResult);
typedef INT(WSAAPI *LPFN_GETADDRINFOW) (PCWSTR pNodeName, PCWSTR pServiceName, const ADDRINFOW *pHints, PADDRINFOW *ppResult);
#define LPFN_GETADDRINFOA      LPFN_GETADDRINFO
#ifdef UNICODE
#define LPFN_GETADDRINFOT      LPFN_GETADDRINFOW
#else
#define LPFN_GETADDRINFOT      LPFN_GETADDRINFOA
#endif
#endif
#if (_WIN32_WINNT >= 0x0600)
typedef void (CALLBACK *LPLOOKUPSERVICE_COMPLETION_ROUTINE) (DWORD dwError, DWORD dwBytes, LPWSAOVERLAPPED lpOverlapped);
WINSOCK_API_LINKAGE INT WSAAPI GetAddrInfoExA(PCSTR pName, PCSTR pServiceName, DWORD dwNameSpace, LPGUID lpNspId, const ADDRINFOEXA *hints, PADDRINFOEXA *ppResult, struct timeval *timeout, LPOVERLAPPED lpOverlapped, LPLOOKUPSERVICE_COMPLETION_ROUTINE lpCompletionRoutine, LPHANDLE lpNameHandle);
WINSOCK_API_LINKAGE INT WSAAPI GetAddrInfoExW(PCWSTR pName, PCWSTR pServiceName, DWORD dwNameSpace, LPGUID lpNspId, const ADDRINFOEXW *hints, PADDRINFOEXW *ppResult, struct timeval *timeout, LPOVERLAPPED lpOverlapped, LPLOOKUPSERVICE_COMPLETION_ROUTINE lpCompletionRoutine, LPHANDLE lpHandle);
#ifdef UNICODE
#define GetAddrInfoEx       GetAddrInfoExW
#else
#define GetAddrInfoEx       GetAddrInfoExA
#endif
#if INCL_WINSOCK_API_TYPEDEFS
typedef INT(WSAAPI *LPFN_GETADDRINFOEXA) (PCSTR pName, PCSTR pServiceName, DWORD dwNameSpace, LPGUID lpNspId, const ADDRINFOEXA *hints, PADDRINFOEXA *ppResult, struct timeval *timeout, LPOVERLAPPED lpOverlapped, LPLOOKUPSERVICE_COMPLETION_ROUTINE lpCompletionRoutine, LPHANDLE lpNameHandle);
typedef INT(WSAAPI *LPFN_GETADDRINFOEXW) (PCWSTR pName, PCWSTR pServiceName, DWORD dwNameSpace, LPGUID lpNspId, const ADDRINFOEXW *hints, PADDRINFOEXW *ppResult, struct timeval *timeout, LPOVERLAPPED lpOverlapped, LPLOOKUPSERVICE_COMPLETION_ROUTINE lpCompletionRoutine, LPHANDLE lpHandle);
#ifdef UNICODE
#define LPFN_GETADDRINFOEX      LPFN_GETADDRINFOEXW
#else
#define LPFN_GETADDRINFOEX      LPFN_GETADDRINFOEXA
#endif
#endif
#endif
#if (_WIN32_WINNT >= 0x0600)
WINSOCK_API_LINKAGE INT WSAAPI SetAddrInfoExA(PCSTR pName, PCSTR pServiceName, SOCKET_ADDRESS *pAddresses, DWORD dwAddressCount, LPBLOB lpBlob, DWORD dwFlags, DWORD dwNameSpace, LPGUID lpNspId, struct timeval *timeout, LPOVERLAPPED lpOverlapped, LPLOOKUPSERVICE_COMPLETION_ROUTINE lpCompletionRoutine, LPHANDLE lpNameHandle);
WINSOCK_API_LINKAGE INT WSAAPI SetAddrInfoExW(PCWSTR pName, PCWSTR pServiceName, SOCKET_ADDRESS *pAddresses, DWORD dwAddressCount, LPBLOB lpBlob, DWORD dwFlags, DWORD dwNameSpace, LPGUID lpNspId, struct timeval *timeout, LPOVERLAPPED lpOverlapped, LPLOOKUPSERVICE_COMPLETION_ROUTINE lpCompletionRoutine, LPHANDLE lpNameHandle);
#ifdef UNICODE
#define SetAddrInfoEx       SetAddrInfoExW
#else
#define SetAddrInfoEx       SetAddrInfoExA
#endif
#if INCL_WINSOCK_API_TYPEDEFS
typedef INT(WSAAPI *LPFN_SETADDRINFOEXA) (PCSTR pName, PCSTR pServiceName, SOCKET_ADDRESS *pAddresses, DWORD dwAddressCount, LPBLOB lpBlob, DWORD dwFlags, DWORD dwNameSpace, LPGUID lpNspId, struct timeval *timeout, LPOVERLAPPED lpOverlapped, LPLOOKUPSERVICE_COMPLETION_ROUTINE lpCompletionRoutine, LPHANDLE lpNameHandle);
typedef INT(WSAAPI *LPFN_SETADDRINFOEXW) (PCWSTR pName, PCWSTR pServiceName, SOCKET_ADDRESS *pAddresses, DWORD dwAddressCount, LPBLOB lpBlob, DWORD dwFlags, DWORD dwNameSpace, LPGUID lpNspId, struct timeval *timeout, LPOVERLAPPED lpOverlapped, LPLOOKUPSERVICE_COMPLETION_ROUTINE lpCompletionRoutine, LPHANDLE lpNameHandle);
#ifdef UNICODE
#define LPFN_SETADDRINFOEX      LPFN_SETADDRINFOEXW
#else
#define LPFN_SETADDRINFOEX      LPFN_SETADDRINFOEXA
#endif
#endif
#endif
WINSOCK_API_LINKAGE VOID WSAAPI freeaddrinfo(PADDRINFOA pAddrInfo);
#if (NTDDI_VERSION >= NTDDI_WINXPSP2) || (_WIN32_WINNT >= 0x0502)
WINSOCK_API_LINKAGE VOID WSAAPI FreeAddrInfoW(PADDRINFOW pAddrInfo);
#define FreeAddrInfoA   freeaddrinfo
#ifdef UNICODE
#define FreeAddrInfo    FreeAddrInfoW
#else
#define FreeAddrInfo    FreeAddrInfoA
#endif
#endif
#if INCL_WINSOCK_API_TYPEDEFS
typedef VOID(WSAAPI *LPFN_FREEADDRINFO) (PADDRINFOA pAddrInfo);
typedef VOID(WSAAPI *LPFN_FREEADDRINFOW) (PADDRINFOW pAddrInfo);
#define LPFN_FREEADDRINFOA      LPFN_FREEADDRINFO
#ifdef UNICODE
#define LPFN_FREEADDRINFOT      LPFN_FREEADDRINFOW
#else
#define LPFN_FREEADDRINFOT      LPFN_FREEADDRINFOA
#endif
#endif
#if (_WIN32_WINNT >= 0x0600)
WINSOCK_API_LINKAGE void WSAAPI FreeAddrInfoEx(PADDRINFOEXA pAddrInfoEx);
WINSOCK_API_LINKAGE void WSAAPI FreeAddrInfoExW(PADDRINFOEXW pAddrInfoEx);
#define FreeAddrInfoExA     FreeAddrInfoEx
#ifdef UNICODE
#define FreeAddrInfoEx      FreeAddrInfoExW
#endif
#ifdef INCL_WINSOCK_API_TYPEDEFS
typedef void (WSAAPI *LPFN_FREEADDRINFOEXA) (PADDRINFOEXA pAddrInfoEx);
typedef void (WSAAPI *LPFN_FREEADDRINFOEXW) (PADDRINFOEXW pAddrInfoEx);
#ifdef UNICODE
#define LPFN_FREEADDRINFOEX     LPFN_FREEADDRINFOEXW
#else
#define LPFN_FREEADDRINFOEX     LPFN_FREEADDRINFOEXA
#endif
#endif
#endif
typedef int socklen_t;
WINSOCK_API_LINKAGE INT WSAAPI getnameinfo(const SOCKADDR *pSockaddr, socklen_t SockaddrLength, PCHAR pNodeBuffer, DWORD NodeBufferSize, PCHAR pServiceBuffer, DWORD ServiceBufferSize, INT Flags);
#if (NTDDI_VERSION >= NTDDI_WINXPSP2) || (_WIN32_WINNT >= 0x0502)
WINSOCK_API_LINKAGE INT WSAAPI GetNameInfoW(const SOCKADDR *pSockaddr, socklen_t SockaddrLength, PWCHAR pNodeBuffer, DWORD NodeBufferSize, PWCHAR pServiceBuffer, DWORD ServiceBufferSize, INT Flags);
#define GetNameInfoA    getnameinfo
#ifdef UNICODE
#define GetNameInfo     GetNameInfoW
#else
#define GetNameInfo     GetNameInfoA
#endif
#endif
#if INCL_WINSOCK_API_TYPEDEFS
typedef int (WSAAPI *LPFN_GETNAMEINFO) (const SOCKADDR *pSockaddr, socklen_t SockaddrLength, PCHAR pNodeBuffer, DWORD NodeBufferSize, PCHAR pServiceBuffer, DWORD ServiceBufferSize, INT Flags);
typedef INT(WSAAPI *LPFN_GETNAMEINFOW) (const SOCKADDR *pSockaddr, socklen_t SockaddrLength, PWCHAR pNodeBuffer, DWORD NodeBufferSize, PWCHAR pServiceBuffer, DWORD ServiceBufferSize, INT Flags);
#define LPFN_GETNAMEINFOA      LPFN_GETNAMEINFO
#ifdef UNICODE
#define LPFN_GETNAMEINFOT      LPFN_GETNAMEINFOW
#else
#define LPFN_GETNAMEINFOT      LPFN_GETNAMEINFOA
#endif
#endif
#if (NTDDI_VERSION >= NTDDI_VISTA)
WINSOCK_API_LINKAGE INT WSAAPI inet_pton(INT Family, PCSTR pszAddrString, PVOID pAddrBuf);
INT WSAAPI InetPtonW(INT Family, PCWSTR pszAddrString, PVOID pAddrBuf);
PCSTR WSAAPI inet_ntop(INT Family, PVOID pAddr, PSTR pStringBuf, size_t StringBufSize);
PCWSTR WSAAPI InetNtopW(INT Family, PVOID pAddr, PWSTR pStringBuf, size_t StringBufSize);
#define InetPtonA       inet_pton
#define InetNtopA       inet_ntop
#ifdef UNICODE
#define InetPton        InetPtonW
#define InetNtop        InetNtopW
#else
#define InetPton        InetPtonA
#define InetNtop        InetNtopA
#endif
#if INCL_WINSOCK_API_TYPEDEFS
typedef INT(WSAAPI *LPFN_INET_PTONA) (INT Family, PCSTR pszAddrString, PVOID pAddrBuf);
typedef INT(WSAAPI *LPFN_INET_PTONW) (INT Family, PCWSTR pszAddrString, PVOID pAddrBuf);
typedef PCSTR(WSAAPI *LPFN_INET_NTOPA) (INT Family, PVOID pAddr, PSTR pStringBuf, size_t StringBufSize);
typedef PCWSTR(WSAAPI *LPFN_INET_NTOPW) (INT Family, PVOID pAddr, PWSTR pStringBuf, size_t StringBufSize);
#ifdef UNICODE
#define LPFN_INET_PTON          LPFN_INET_PTONW
#define LPFN_INET_NTOP          LPFN_INET_NTOPW
#else
#define LPFN_INET_PTON          LPFN_INET_PTONA
#define LPFN_INET_NTOP          LPFN_INET_NTOPA
#endif
#endif
#endif
#if INCL_WINSOCK_API_PROTOTYPES
#ifdef UNICODE
#define gai_strerror   gai_strerrorW
#else
#define gai_strerror   gai_strerrorA
#endif
#define GAI_STRERROR_BUFFER_SIZE 1024
WS2TCPIP_INLINE char *gai_strerrorA(int ecode)
{
	DWORD dwMsgLen;
	static char buff[GAI_STRERROR_BUFFER_SIZE + 1];
	dwMsgLen = FormatMessageA(FORMAT_MESSAGE_FROM_SYSTEM | FORMAT_MESSAGE_IGNORE_INSERTS | FORMAT_MESSAGE_MAX_WIDTH_MASK, NULL, ecode, MAKELANGID(LANG_NEUTRAL, SUBLANG_DEFAULT), (LPSTR)buff, GAI_STRERROR_BUFFER_SIZE, NULL);
	return buff;
}
WS2TCPIP_INLINE WCHAR *gai_strerrorW(int ecode)
{
	DWORD dwMsgLen;
	static WCHAR buff[GAI_STRERROR_BUFFER_SIZE + 1];
	dwMsgLen = FormatMessageW(FORMAT_MESSAGE_FROM_SYSTEM | FORMAT_MESSAGE_IGNORE_INSERTS | FORMAT_MESSAGE_MAX_WIDTH_MASK, NULL, ecode, MAKELANGID(LANG_NEUTRAL, SUBLANG_DEFAULT), (LPWSTR)buff, GAI_STRERROR_BUFFER_SIZE, NULL);
	return buff;
}
#endif
WS2TCPIP_INLINE int setipv4sourcefilter(SOCKET Socket, IN_ADDR Interface, IN_ADDR Group, MULTICAST_MODE_TYPE FilterMode, ULONG SourceCount, CONST IN_ADDR *SourceList)
{
	int Error;
	DWORD Size, Returned;
	PIP_MSFILTER Filter;
	if (SourceCount > (((ULONG) (ULONG_MAX - sizeof(*Filter))) / sizeof(*SourceList)))
	{
		WSASetLastError(WSAENOBUFS);
		return SOCKET_ERROR;
	}
	Size = IP_MSFILTER_SIZE(SourceCount);
	Filter = (PIP_MSFILTER)HeapAlloc(GetProcessHeap(), 0, Size);
	if (Filter == NULL)
	{
		WSASetLastError(WSAENOBUFS);
		return SOCKET_ERROR;
	}
	Filter->imsf_multiaddr = Group;
	Filter->imsf_interface = Interface;
	Filter->imsf_fmode = FilterMode;
	Filter->imsf_numsrc = SourceCount;
	if (SourceCount > 0)
	{
		CopyMemory(Filter->imsf_slist, SourceList, SourceCount * sizeof(*SourceList));
	}
	Error = WSAIoctl(Socket, SIOCSIPMSFILTER, Filter, Size, NULL, 0, &Returned, NULL, NULL);
	HeapFree(GetProcessHeap(), 0, Filter);
	return Error;
}
WS2TCPIP_INLINE int getipv4sourcefilter(SOCKET Socket, IN_ADDR Interface, IN_ADDR Group, MULTICAST_MODE_TYPE *FilterMode, ULONG *SourceCount, IN_ADDR *SourceList)
{
	int Error;
	DWORD Size, Returned;
	PIP_MSFILTER Filter;
	if (*SourceCount > (((ULONG) (ULONG_MAX - sizeof(*Filter))) / sizeof(*SourceList)))
	{
		WSASetLastError(WSAENOBUFS);
		return SOCKET_ERROR;
	}
	Size = IP_MSFILTER_SIZE(*SourceCount);
	Filter = (PIP_MSFILTER)HeapAlloc(GetProcessHeap(), 0, Size);
	if (Filter == NULL)
	{
		WSASetLastError(WSAENOBUFS);
		return SOCKET_ERROR;
	}
	Filter->imsf_multiaddr = Group;
	Filter->imsf_interface = Interface;
	Filter->imsf_numsrc = *SourceCount;
	Error = WSAIoctl(Socket, SIOCGIPMSFILTER, Filter, Size, Filter, Size, &Returned, NULL, NULL);
	if (Error == 0)
	{
		if (*SourceCount > 0)
		{
			CopyMemory(SourceList, Filter->imsf_slist, *SourceCount * sizeof(*SourceList));
			*SourceCount = Filter->imsf_numsrc;
		}
		*FilterMode = Filter->imsf_fmode;
	}
	HeapFree(GetProcessHeap(), 0, Filter);
	return Error;
}
#if (NTDDI_VERSION >= NTDDI_WINXP)
WS2TCPIP_INLINE int setsourcefilter(SOCKET Socket, ULONG Interface, CONST SOCKADDR *Group, int GroupLength, MULTICAST_MODE_TYPE FilterMode, ULONG SourceCount, CONST SOCKADDR_STORAGE *SourceList)
{
	int Error;
	DWORD Size, Returned;
	PGROUP_FILTER Filter;
	if (SourceCount >= (((ULONG) (ULONG_MAX - sizeof(*Filter))) / sizeof(*SourceList)))
	{
		WSASetLastError(WSAENOBUFS);
		return SOCKET_ERROR;
	}
	Size = GROUP_FILTER_SIZE(SourceCount);
	Filter = (PGROUP_FILTER)HeapAlloc(GetProcessHeap(), 0, Size);
	if (Filter == NULL)
	{
		WSASetLastError(WSAENOBUFS);
		return SOCKET_ERROR;
	}
	Filter->gf_interface = Interface;
	ZeroMemory(&Filter->gf_group, sizeof(Filter->gf_group));
	CopyMemory(&Filter->gf_group, Group, GroupLength);
	Filter->gf_fmode = FilterMode;
	Filter->gf_numsrc = SourceCount;
	if (SourceCount > 0)
	{
		CopyMemory(Filter->gf_slist, SourceList, SourceCount * sizeof(*SourceList));
	}
	Error = WSAIoctl(Socket, SIOCSMSFILTER, Filter, Size, NULL, 0, &Returned, NULL, NULL);
	HeapFree(GetProcessHeap(), 0, Filter);
	return Error;
}
WS2TCPIP_INLINE int getsourcefilter(SOCKET Socket, ULONG Interface, CONST SOCKADDR *Group, int GroupLength, MULTICAST_MODE_TYPE *FilterMode, ULONG *SourceCount, SOCKADDR_STORAGE *SourceList)
{
	int Error;
	DWORD Size, Returned;
	PGROUP_FILTER Filter;
	if (*SourceCount > (((ULONG) (ULONG_MAX - sizeof(*Filter))) / sizeof(*SourceList)))
	{
		WSASetLastError(WSAENOBUFS);
		return SOCKET_ERROR;
	}
	Size = GROUP_FILTER_SIZE(*SourceCount);
	Filter = (PGROUP_FILTER)HeapAlloc(GetProcessHeap(), 0, Size);
	if (Filter == NULL)
	{
		WSASetLastError(WSAENOBUFS);
		return SOCKET_ERROR;
	}
	Filter->gf_interface = Interface;
	ZeroMemory(&Filter->gf_group, sizeof(Filter->gf_group));
	CopyMemory(&Filter->gf_group, Group, GroupLength);
	Filter->gf_numsrc = *SourceCount;
	Error = WSAIoctl(Socket, SIOCGMSFILTER, Filter, Size, Filter, Size, &Returned, NULL, NULL);
	if (Error == 0)
	{
		if (*SourceCount > 0)
		{
			CopyMemory(SourceList, Filter->gf_slist, *SourceCount * sizeof(*SourceList));
			*SourceCount = Filter->gf_numsrc;
		}
		*FilterMode = Filter->gf_fmode;
	}
	HeapFree(GetProcessHeap(), 0, Filter);
	return Error;
}
#endif
#ifdef IDEAL_SEND_BACKLOG_IOCTLS
WS2TCPIP_INLINE int idealsendbacklogquery(SOCKET s, ULONG *pISB)
{
	DWORD bytes;
	return WSAIoctl(s, SIO_IDEAL_SEND_BACKLOG_QUERY, NULL, 0, pISB, sizeof(*pISB), &bytes, NULL, NULL);
}
WS2TCPIP_INLINE int idealsendbacklognotify(SOCKET s, LPWSAOVERLAPPED lpOverlapped, LPWSAOVERLAPPED_COMPLETION_ROUTINE lpCompletionRoutine)
{
	DWORD bytes;
	return WSAIoctl(s, SIO_IDEAL_SEND_BACKLOG_CHANGE, NULL, 0, NULL, 0, &bytes, lpOverlapped, lpCompletionRoutine);
}
#endif
#if (_WIN32_WINNT >= 0x0600)
#ifdef _SECURE_SOCKET_TYPES_DEFINED_
WINSOCK_API_LINKAGE INT WSAAPI WSASetSocketSecurity(SOCKET Socket, const SOCKET_SECURITY_SETTINGS *SecuritySettings, ULONG SecuritySettingsLen, LPWSAOVERLAPPED Overlapped, LPWSAOVERLAPPED_COMPLETION_ROUTINE CompletionRoutine);
WINSOCK_API_LINKAGE INT WSAAPI WSAQuerySocketSecurity(SOCKET Socket, const SOCKET_SECURITY_QUERY_TEMPLATE *SecurityQueryTemplate, ULONG SecurityQueryTemplateLen, SOCKET_SECURITY_QUERY_INFO *SecurityQueryInfo, ULONG *SecurityQueryInfoLen, LPWSAOVERLAPPED Overlapped, LPWSAOVERLAPPED_COMPLETION_ROUTINE CompletionRoutine);
WINSOCK_API_LINKAGE INT WSAAPI WSASetSocketPeerTargetName(SOCKET Socket, const SOCKET_PEER_TARGET_NAME *PeerTargetName, ULONG PeerTargetNameLen, LPWSAOVERLAPPED Overlapped, LPWSAOVERLAPPED_COMPLETION_ROUTINE CompletionRoutine);
WINSOCK_API_LINKAGE INT WSAAPI WSADeleteSocketPeerTargetName(SOCKET Socket, const struct sockaddr *PeerAddr, ULONG PeerAddrLen, LPWSAOVERLAPPED Overlapped, LPWSAOVERLAPPED_COMPLETION_ROUTINE CompletionRoutine);
WINSOCK_API_LINKAGE INT WSAAPI WSAImpersonateSocketPeer(SOCKET Socket, const struct sockaddr *PeerAddr, ULONG PeerAddrLen);
WINSOCK_API_LINKAGE INT WSAAPI WSARevertImpersonation();
#endif
#endif
#if !defined(_WIN32_WINNT) || (_WIN32_WINNT <= 0x0500)
#include <wspiapi.h>
#endif
#endif

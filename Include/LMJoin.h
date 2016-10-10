/*+@@file@@----------------------------------------------------------------*//*!
 \file		LMJoin.h
 \par Description 
            Extension and update of headers for PellesC compiler suite.
 \par Project: 
            PellesC Headers extension
 \date		Created  on Sun Jul 17 23:34:40 2016
 \date		Modified on Sun Jul 17 23:34:40 2016
 \author	frankie
\*//*-@@file@@----------------------------------------------------------------*/

#ifndef __LMJOIN_H__
#define __LMJOIN_H__
#if __POCC__ >= 500
#pragma once
#endif
typedef enum  _NETSETUP_NAME_TYPE
{
    NetSetupUnknown = 0,
    NetSetupMachine,
    NetSetupWorkgroup,
    NetSetupDomain,
    NetSetupNonExistentDomain,
#if(_WIN32_WINNT >= 0x0500)
    NetSetupDnsMachine
#endif
} NETSETUP_NAME_TYPE, *PNETSETUP_NAME_TYPE;
typedef enum _NETSETUP_JOIN_STATUS
{
    NetSetupUnknownStatus = 0,
    NetSetupUnjoined,
    NetSetupWorkgroupName,
    NetSetupDomainName
} NETSETUP_JOIN_STATUS, *PNETSETUP_JOIN_STATUS;
#define NETSETUP_JOIN_DOMAIN    0x00000001
#define NETSETUP_ACCT_CREATE    0x00000002
#define NETSETUP_ACCT_DELETE    0x00000004
#define NETSETUP_WIN9X_UPGRADE  0x00000010
#define NETSETUP_DOMAIN_JOIN_IF_JOINED  0x00000020
#define NETSETUP_JOIN_UNSECURE  0x00000040
#define NETSETUP_MACHINE_PWD_PASSED 0x00000080
#define NETSETUP_DEFER_SPN_SET  0x00000100
#define NETSETUP_JOIN_DC_ACCOUNT    0x00000200
#define NETSETUP_JOIN_WITH_NEW_NAME 0x00000400
#define NETSETUP_JOIN_READONLY      0x00000800
#define NETSETUP_DNS_NAME_CHANGES_ONLY 0x00001000
#define NETSETUP_INSTALL_INVOCATION 0x00040000
#define NETSETUP_AMBIGUOUS_DC       0x00001000
#define NETSETUP_NO_NETLOGON_CACHE  0x00002000
#define NETSETUP_DONT_CONTROL_SERVICES 0x00004000
#define NETSETUP_SET_MACHINE_NAME   0x00008000
#define NETSETUP_FORCE_SPN_SET      0x00010000
#define NETSETUP_NO_ACCT_REUSE      0x00020000
#define NETSETUP_IGNORE_UNSUPPORTED_FLAGS  0x10000000
#define NETSETUP_VALID_UNJOIN_FLAGS (NETSETUP_ACCT_DELETE | NETSETUP_IGNORE_UNSUPPORTED_FLAGS | NETSETUP_JOIN_DC_ACCOUNT)
#define NETSETUP_PROCESS_OFFLINE_FLAGS ( NETSETUP_JOIN_DOMAIN |                     \
                                         NETSETUP_DOMAIN_JOIN_IF_JOINED |           \
                                         NETSETUP_JOIN_WITH_NEW_NAME |              \
                                         NETSETUP_DONT_CONTROL_SERVICES |           \
                                         NETSETUP_MACHINE_PWD_PASSED)
NET_API_STATUS NET_API_FUNCTION NetJoinDomain(LPCWSTR lpServer, LPCWSTR lpDomain, LPCWSTR lpAccountOU, LPCWSTR lpAccount, LPCWSTR lpPassword, DWORD fJoinOptions);
#if(_WIN32_WINNT >= 0x0601)
#define NETSETUP_PROVISION_DOWNLEVEL_PRIV_SUPPORT 0x00000001
#define NETSETUP_PROVISION_REUSE_ACCOUNT          0x00000002
#define NETSETUP_PROVISION_USE_DEFAULT_PASSWORD   0x00000004
#define NETSETUP_PROVISION_SKIP_ACCOUNT_SEARCH    0x00000008
#define NETSETUP_PROVISION_ONLINE_CALLER          0x40000000
#define NETSETUP_PROVISION_CHECK_PWD_ONLY         0x80000000
NET_API_STATUS NET_API_FUNCTION NetProvisionComputerAccount(LPCWSTR lpDomain, LPCWSTR lpMachineName, LPCWSTR lpMachineAccountOU, LPCWSTR lpDcName, DWORD dwOptions, PBYTE *pProvisionBinData, DWORD *pdwProvisionBinDataSize, LPWSTR *pProvisionTextData);
NET_API_STATUS NET_API_FUNCTION NetRequestOfflineDomainJoin(BYTE *pProvisionBinData, DWORD cbProvisionBinDataSize, DWORD dwOptions, LPCWSTR lpWindowsPath);
#endif
NET_API_STATUS NET_API_FUNCTION NetUnjoinDomain(LPCWSTR lpServer, LPCWSTR lpAccount, LPCWSTR lpPassword, DWORD fUnjoinOptions);
NET_API_STATUS NET_API_FUNCTION NetRenameMachineInDomain(LPCWSTR lpServer, LPCWSTR lpNewMachineName, LPCWSTR lpAccount, LPCWSTR lpPassword, DWORD fRenameOptions);
NET_API_STATUS NET_API_FUNCTION NetValidateName(LPCWSTR lpServer, LPCWSTR lpName, LPCWSTR lpAccount, LPCWSTR lpPassword, NETSETUP_NAME_TYPE NameType);
NET_API_STATUS NET_API_FUNCTION NetGetJoinInformation(LPCWSTR lpServer, LPWSTR *lpNameBuffer, PNETSETUP_JOIN_STATUS BufferType);
NET_API_STATUS NET_API_FUNCTION NetGetJoinableOUs(LPCWSTR lpServer, LPCWSTR lpDomain, LPCWSTR lpAccount, LPCWSTR lpPassword, DWORD *OUCount, LPWSTR **OUs);
#if(_WIN32_WINNT >= 0x0501)
#define NET_IGNORE_UNSUPPORTED_FLAGS  0x01
NET_API_STATUS NET_API_FUNCTION NetAddAlternateComputerName(LPCWSTR Server, LPCWSTR AlternateName, LPCWSTR DomainAccount, LPCWSTR DomainAccountPassword, ULONG Reserved);
NET_API_STATUS NET_API_FUNCTION NetRemoveAlternateComputerName(LPCWSTR Server, LPCWSTR AlternateName, LPCWSTR DomainAccount, LPCWSTR DomainAccountPassword, ULONG Reserved);
NET_API_STATUS NET_API_FUNCTION NetSetPrimaryComputerName(LPCWSTR Server, LPCWSTR PrimaryName, LPCWSTR DomainAccount, LPCWSTR DomainAccountPassword, ULONG Reserved);
typedef enum _NET_COMPUTER_NAME_TYPE
{
    NetPrimaryComputerName,
    NetAlternateComputerNames,
    NetAllComputerNames,
    NetComputerNameTypeMax
} NET_COMPUTER_NAME_TYPE, *PNET_COMPUTER_NAME_TYPE;
NET_API_STATUS NET_API_FUNCTION NetEnumerateComputerNames(LPCWSTR Server, NET_COMPUTER_NAME_TYPE NameType, ULONG Reserved, PDWORD EntryCount, LPWSTR **ComputerNames);
#endif
#endif

/*+@@file@@----------------------------------------------------------------*//*!
 \file		ktmw32.h
 \par Description 
            Extension and update of headers for PellesC compiler suite.
 \par Project: 
            PellesC Headers extension
 \date		Created  on Sun Jul 17 21:58:39 2016
 \date		Modified on Sun Jul 17 21:58:39 2016
 \author	frankie
\*//*-@@file@@----------------------------------------------------------------*/

#ifndef _KTMUSER_
#define _KTMUSER_
#if __POCC__ >= 500
#pragma once
#endif
HANDLE APIENTRY CreateTransaction(LPSECURITY_ATTRIBUTES lpTransactionAttributes, LPGUID UOW, DWORD CreateOptions, DWORD IsolationLevel, DWORD IsolationFlags, DWORD Timeout, LPWSTR Description);
HANDLE APIENTRY OpenTransaction(DWORD dwDesiredAccess, LPGUID TransactionId);
BOOL APIENTRY CommitTransaction(HANDLE TransactionHandle);
BOOL APIENTRY CommitTransactionAsync(HANDLE TransactionHandle);
BOOL APIENTRY RollbackTransaction(HANDLE TransactionHandle);
BOOL APIENTRY RollbackTransactionAsync(HANDLE TransactionHandle);
BOOL APIENTRY GetTransactionId(HANDLE TransactionHandle, LPGUID TransactionId);
BOOL APIENTRY GetTransactionInformation(HANDLE TransactionHandle, PDWORD Outcome, PDWORD IsolationLevel, PDWORD IsolationFlags, PDWORD Timeout, DWORD BufferLength, LPWSTR Description);
BOOL APIENTRY SetTransactionInformation(HANDLE TransactionHandle, DWORD IsolationLevel, DWORD IsolationFlags, DWORD Timeout, LPWSTR Description);
HANDLE APIENTRY CreateTransactionManager(LPSECURITY_ATTRIBUTES lpTransactionAttributes, LPWSTR LogFileName, ULONG CreateOptions, ULONG CommitStrength);
HANDLE APIENTRY OpenTransactionManager(LPWSTR LogFileName, ACCESS_MASK DesiredAccess, ULONG OpenOptions);
HANDLE APIENTRY OpenTransactionManagerById(LPGUID TransactionManagerId, ACCESS_MASK DesiredAccess, ULONG OpenOptions);
BOOL APIENTRY RenameTransactionManager(LPWSTR LogFileName, LPGUID ExistingTransactionManagerGuid);
BOOL APIENTRY RollforwardTransactionManager(HANDLE TransactionManagerHandle, PLARGE_INTEGER TmVirtualClock);
BOOL APIENTRY RecoverTransactionManager(HANDLE TransactionManagerHandle);
BOOL GetCurrentClockTransactionManager(HANDLE TransactionManagerHandle, PLARGE_INTEGER TmVirtualClock);
BOOL GetTransactionManagerId(HANDLE TransactionManagerHandle, LPGUID TransactionManagerId);
HANDLE APIENTRY CreateResourceManager(LPSECURITY_ATTRIBUTES lpResourceManagerAttributes, LPGUID ResourceManagerId, DWORD CreateOptions, HANDLE TmHandle, LPWSTR Description);
HANDLE APIENTRY OpenResourceManager(DWORD dwDesiredAccess, HANDLE TmHandle, LPGUID ResourceManagerId);
BOOL APIENTRY RecoverResourceManager(HANDLE ResourceManagerHandle);
BOOL APIENTRY GetNotificationResourceManager(HANDLE ResourceManagerHandle, PTRANSACTION_NOTIFICATION TransactionNotification, ULONG NotificationLength, DWORD dwMilliseconds, PULONG ReturnLength);
BOOL APIENTRY GetNotificationResourceManagerAsync(HANDLE ResourceManagerHandle, PTRANSACTION_NOTIFICATION TransactionNotification, ULONG TransactionNotificationLength, PULONG ReturnLength, LPOVERLAPPED lpOverlapped);
BOOL APIENTRY SetResourceManagerCompletionPort(HANDLE ResourceManagerHandle, HANDLE IoCompletionPortHandle, ULONG_PTR CompletionKey);
HANDLE APIENTRY CreateEnlistment(LPSECURITY_ATTRIBUTES lpEnlistmentAttributes, HANDLE ResourceManagerHandle, HANDLE TransactionHandle, NOTIFICATION_MASK NotificationMask, DWORD CreateOptions, PVOID EnlistmentKey);
HANDLE APIENTRY OpenEnlistment(DWORD dwDesiredAccess, HANDLE ResourceManagerHandle, LPGUID EnlistmentId);
BOOL APIENTRY RecoverEnlistment(HANDLE EnlistmentHandle, PVOID EnlistmentKey);
BOOL APIENTRY GetEnlistmentRecoveryInformation(HANDLE EnlistmentHandle, ULONG BufferSize, PVOID Buffer, PULONG BufferUsed);
BOOL APIENTRY GetEnlistmentId(HANDLE EnlistmentHandle, LPGUID EnlistmentId);
BOOL APIENTRY SetEnlistmentRecoveryInformation(HANDLE EnlistmentHandle, ULONG BufferSize, PVOID Buffer);
BOOL APIENTRY PrepareEnlistment(HANDLE EnlistmentHandle, PLARGE_INTEGER TmVirtualClock);
BOOL APIENTRY PrePrepareEnlistment(HANDLE EnlistmentHandle, PLARGE_INTEGER TmVirtualClock);
BOOL APIENTRY CommitEnlistment(HANDLE EnlistmentHandle, PLARGE_INTEGER TmVirtualClock);
BOOL APIENTRY RollbackEnlistment(HANDLE EnlistmentHandle, PLARGE_INTEGER TmVirtualClock);
BOOL APIENTRY PrePrepareComplete(HANDLE EnlistmentHandle, PLARGE_INTEGER TmVirtualClock);
BOOL APIENTRY PrepareComplete(HANDLE EnlistmentHandle, PLARGE_INTEGER TmVirtualClock);
BOOL APIENTRY ReadOnlyEnlistment(HANDLE EnlistmentHandle, PLARGE_INTEGER TmVirtualClock);
BOOL APIENTRY CommitComplete(HANDLE EnlistmentHandle, PLARGE_INTEGER TmVirtualClock);
BOOL APIENTRY RollbackComplete(HANDLE EnlistmentHandle, PLARGE_INTEGER TmVirtualClock);
BOOL APIENTRY SinglePhaseReject(HANDLE EnlistmentHandle, PLARGE_INTEGER TmVirtualClock);
#endif

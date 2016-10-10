/*+@@file@@----------------------------------------------------------------*//*!
 \file		naputil.h
 \par Description 
            Extension and update of headers for PellesC compiler suite.
 \par Project: 
            PellesC Headers extension
 \date		Created  on Sun Sep 11 22:33:53 2016
 \date		Modified on Sun Sep 11 22:33:53 2016
 \author	frankie
\*//*-@@file@@----------------------------------------------------------------*/

#ifndef NAPUTIL_H
#define NAPUTIL_H
#if __POCC__ >= 500
#pragma once
#endif
#include "naptypes.h"
#include "napmanagement.h"
#include "napservermanagement.h"
#include "napprotocol.h"
#include "napenforcementclient.h"
#ifndef NAPAPI
#define NAPAPI DECLSPEC_IMPORT
#endif
NAPAPI HRESULT WINAPI AllocFixupInfo(FixupInfo **fixupInfo, UINT16 countResultCodes);
NAPAPI HRESULT WINAPI AllocConnections(Connections **connections, UINT16 connectionsCount);
NAPAPI HRESULT WINAPI AllocCountedString(CountedString **countedString, CONST WCHAR *string);
NAPAPI VOID WINAPI FreeFixupInfo(FixupInfo *fixupInfo);
NAPAPI VOID WINAPI FreeConnections(Connections *connections);
NAPAPI VOID WINAPI FreeIsolationInfo(IsolationInfo *isolationInfo);
NAPAPI VOID WINAPI FreeIsolationInfoEx(IsolationInfoEx *isolationInfo);
NAPAPI VOID WINAPI FreeCountedString(CountedString *countedString);
NAPAPI VOID WINAPI FreeSoH(SoH *soh);
NAPAPI VOID WINAPI FreeNetworkSoH(NetworkSoH *networkSoh);
NAPAPI VOID WINAPI FreePrivateData(PrivateData *privateData);
NAPAPI VOID WINAPI FreeSoHAttributeValue(SoHAttributeType type, SoHAttributeValue *value);
NAPAPI VOID WINAPI FreeNapComponentRegistrationInfoArray(UINT16 count, NapComponentRegistrationInfo **info);
NAPAPI VOID WINAPI FreeSystemHealthAgentState(SystemHealthAgentState *state);
NAPAPI HRESULT WINAPI InitializeNapAgentNotifier(NapNotifyType type, HANDLE hNotifyEvent);
NAPAPI VOID WINAPI UninitializeNapAgentNotifier(NapNotifyType type);
#endif

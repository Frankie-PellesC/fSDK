/*+@@file@@----------------------------------------------------------------*//*!
 \file		MgmtAPI.h
 \par Description 
            Extension and update of headers for PellesC compiler suite.
 \par Project: 
            PellesC Headers extension
 \date		Created  on Sun Aug  7 21:14:26 2016
 \date		Modified on Sun Aug  7 21:14:26 2016
 \author	frankie
\*//*-@@file@@----------------------------------------------------------------*/

#ifndef _INC_MGMTAPI
#define _INC_MGMTAPI
#if __POCC__ >= 500
#pragma once
#endif
#include <snmp.h>
#include <winsock.h>
#define SNMP_MGMTAPI_TIMEOUT                40
#define SNMP_MGMTAPI_SELECT_FDERRORS        41
#define SNMP_MGMTAPI_TRAP_ERRORS            42
#define SNMP_MGMTAPI_TRAP_DUPINIT           43
#define SNMP_MGMTAPI_NOTRAPS                44
#define SNMP_MGMTAPI_AGAIN                  45
#define SNMP_MGMTAPI_INVALID_CTL            46
#define SNMP_MGMTAPI_INVALID_SESSION        47
#define SNMP_MGMTAPI_INVALID_BUFFER         48
#define MGMCTL_SETAGENTPORT             0x01
typedef PVOID LPSNMP_MGR_SESSION;
LPSNMP_MGR_SESSION SNMP_FUNC_TYPE SnmpMgrOpen(LPSTR lpAgentAddress, LPSTR lpAgentCommunity, INT nTimeOut, INT nRetries);
BOOL SNMP_FUNC_TYPE SnmpMgrCtl(LPSNMP_MGR_SESSION session, DWORD dwCtlCode, LPVOID lpvInBuffer, DWORD cbInBuffer, LPVOID lpvOUTBuffer, DWORD cbOUTBuffer, LPDWORD lpcbBytesReturned);
BOOL SNMP_FUNC_TYPE SnmpMgrClose(LPSNMP_MGR_SESSION session);
SNMPAPI SNMP_FUNC_TYPE SnmpMgrRequest(LPSNMP_MGR_SESSION session, BYTE requestType, RFC1157VarBindList *variableBindings, AsnInteger *errorStatus, AsnInteger *errorIndex);
BOOL SNMP_FUNC_TYPE SnmpMgrStrToOid(LPSTR string, AsnObjectIdentifier *oid);
BOOL SNMP_FUNC_TYPE SnmpMgrOidToStr(AsnObjectIdentifier *oid, LPSTR *string);
BOOL SNMP_FUNC_TYPE SnmpMgrTrapListen(HANDLE *phTrapAvailable);
BOOL SNMP_FUNC_TYPE SnmpMgrGetTrap(AsnObjectIdentifier *enterprise, AsnNetworkAddress *IPAddress, AsnInteger *genericTrap, AsnInteger *specificTrap, AsnTimeticks *timeStamp, RFC1157VarBindList *variableBindings);
BOOL SNMP_FUNC_TYPE SnmpMgrGetTrapEx(AsnObjectIdentifier *enterprise, AsnNetworkAddress *agentAddress, AsnNetworkAddress *sourceAddress, AsnInteger *genericTrap, AsnInteger *specificTrap, AsnOctetString *community, AsnTimeticks *timeStamp, RFC1157VarBindList *variableBindings);
#endif

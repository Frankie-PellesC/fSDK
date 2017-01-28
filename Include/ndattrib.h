/*+@@file@@----------------------------------------------------------------*//*!
 \file		ndattrib.h
 \par Description 
            Extension and update of headers for PellesC compiler suite.
 \par Project: 
            PellesC Headers extension
 \date		Created  on Sun Sep  4 23:38:13 2016
 \date		Modified on Sun Sep  4 23:38:13 2016
 \author	frankie
\*//*-@@file@@----------------------------------------------------------------*/

#ifndef __REQUIRED_RPCNDR_H_VERSION__
#define __REQUIRED_RPCNDR_H_VERSION__ 500
#endif
#ifndef __REQUIRED_RPCSAL_H_VERSION__
#define __REQUIRED_RPCSAL_H_VERSION__ 100
#endif
#include <rpc.h>
#include <rpcndr.h>
#ifndef __RPCNDR_H_VERSION__
#error this stub requires an updated version of <rpcndr.h>
#endif
#ifndef __ndattrib_h__
#define __ndattrib_h__
#if __POCC__ >= 500
#pragma once
#endif
#include <oaidl.h>
#include <ocidl.h>
#define NDF_ERROR_START (0xF900)
#define NDF_E_LENGTH_EXCEEDED               MAKE_HRESULT(SEVERITY_ERROR, FACILITY_WINDOWS, NDF_ERROR_START)
#define NDF_E_NOHELPERCLASS                 MAKE_HRESULT(SEVERITY_ERROR, FACILITY_WINDOWS, NDF_ERROR_START + 1)
#define NDF_E_CANCELLED                     MAKE_HRESULT(SEVERITY_ERROR, FACILITY_WINDOWS, NDF_ERROR_START + 2)
#define NDF_E_DISABLED                      MAKE_HRESULT(SEVERITY_ERROR, FACILITY_WINDOWS, NDF_ERROR_START + 4)
#define NDF_E_BAD_PARAM						MAKE_HRESULT(SEVERITY_ERROR, FACILITY_WINDOWS, NDF_ERROR_START + 5)
#define NDF_E_VALIDATION					MAKE_HRESULT(SEVERITY_ERROR, FACILITY_WINDOWS, NDF_ERROR_START + 6)
#define NDF_E_UNKNOWN                MAKE_HRESULT(SEVERITY_ERROR, FACILITY_WINDOWS, NDF_ERROR_START + 7)
#define NDF_E_PROBLEM_PRESENT                MAKE_HRESULT(SEVERITY_ERROR, FACILITY_WINDOWS, NDF_ERROR_START + 8)
typedef enum tagATTRIBUTE_TYPE
{
	AT_INVALID	= 0,
	AT_BOOLEAN	= ( AT_INVALID + 1 ) ,
	AT_INT8	= ( AT_BOOLEAN + 1 ) ,
	AT_UINT8	= ( AT_INT8 + 1 ) ,
	AT_INT16	= ( AT_UINT8 + 1 ) ,
	AT_UINT16	= ( AT_INT16 + 1 ) ,
	AT_INT32	= ( AT_UINT16 + 1 ) ,
	AT_UINT32	= ( AT_INT32 + 1 ) ,
	AT_INT64	= ( AT_UINT32 + 1 ) ,
	AT_UINT64	= ( AT_INT64 + 1 ) ,
	AT_STRING	= ( AT_UINT64 + 1 ) ,
	AT_GUID	= ( AT_STRING + 1 ) ,
	AT_LIFE_TIME	= ( AT_GUID + 1 ) ,
	AT_SOCKADDR	= ( AT_LIFE_TIME + 1 ) ,
	AT_OCTET_STRING	= ( AT_SOCKADDR + 1 ) 
} 	ATTRIBUTE_TYPE;
typedef struct tagOCTET_STRING
{
	DWORD dwLength;
	BYTE *lpValue;
} OCTET_STRING;
typedef struct tagOCTET_STRING *POCTET_STRING;
typedef struct tagLIFE_TIME
{
	FILETIME startTime;
	FILETIME endTime;
} LIFE_TIME;
typedef struct tagLIFE_TIME *PLIFE_TIME;
typedef struct tagSOCK_ADDR
{
	USHORT family;
	CHAR data[126];
} DIAG_SOCKADDR;
typedef struct tagSOCK_ADDR *PDIAG_SOCK_ADDR;
typedef struct tagHELPER_ATTRIBUTE
{
	LPWSTR pwszName;
	ATTRIBUTE_TYPE type;
	union
	{
		BOOL Boolean;
		char Char;
		byte Byte;
		short Short;
		WORD Word;
		int Int;
		DWORD DWord;
		LONGLONG Int64;
		ULONGLONG UInt64;
		LPWSTR PWStr;
		GUID Guid;
		LIFE_TIME LifeTime;
		DIAG_SOCKADDR Address;
		OCTET_STRING OctetString;
	};
} HELPER_ATTRIBUTE;
typedef struct tagHELPER_ATTRIBUTE *PHELPER_ATTRIBUTE;
typedef enum tagREPAIR_SCOPE
{
	RS_SYSTEM = 0,
	RS_USER = (RS_SYSTEM + 1),
	RS_APPLICATION = (RS_USER + 1),
	RS_PROCESS = (RS_APPLICATION + 1)
} REPAIR_SCOPE;
typedef enum tagREPAIR_SCOPE *PREPAIR_SCOPE;
typedef enum __MIDL___MIDL_itf_ndattrib_0000_0000_0002
{
	RR_NOROLLBACK = 0,
	RR_ROLLBACK = (RR_NOROLLBACK + 1),
	RR_NORISK = (RR_ROLLBACK + 1)
} REPAIR_RISK;
typedef enum __MIDL___MIDL_itf_ndattrib_0000_0000_0003
{
	UIT_INVALID = 0,
	UIT_NONE = 1,
	UIT_SHELL_COMMAND = (UIT_NONE + 1),
	UIT_HELP_PANE = (UIT_SHELL_COMMAND + 1),
	UIT_DUI = (UIT_HELP_PANE + 1)
} UI_INFO_TYPE;
typedef struct tagShellCommandInfo
{
	LPWSTR pwszOperation;
	LPWSTR pwszFile;
	LPWSTR pwszParameters;
	LPWSTR pwszDirectory;
	ULONG nShowCmd;
} ShellCommandInfo;
typedef struct tagShellCommandInfo *PShellCommandInfo;
typedef struct tagUiInfo
{
	UI_INFO_TYPE type;
	union
	{
		LPWSTR pwzNull;
		ShellCommandInfo ShellInfo;
		LPWSTR pwzHelpUrl;
		LPWSTR pwzDui;
	};
} UiInfo;
typedef struct tagUiInfo *PUiInfo;
#define RF_WORKAROUND          0x20000000
#define RF_USER_ACTION         0x10000000
#define RF_USER_CONFIRMATION   0x8000000
#define RF_INFORMATION_ONLY    0x2000000
#define RF_UI_ONLY             0x1000000
#define RF_SHOW_EVENTS         0x800000
#define RF_VALIDATE_HELPTOPIC  0x400000
#define RF_REPRO               0x200000
#define RF_CONTACT_ADMIN    	  0x20000
#define RF_RESERVED            0x40000000
#define RF_RESERVED_CA         0x80000000
#define RF_RESERVED_LNI        0x10000
typedef struct tagRepairInfo
{
	GUID guid;
	LPWSTR pwszClassName;
	LPWSTR pwszDescription;
	DWORD sidType;
	long cost;
	ULONG flags;
	REPAIR_SCOPE scope;
	REPAIR_RISK risk;
	UiInfo UiInfo;
	int rootCauseIndex;
} RepairInfo;
typedef struct tagRepairInfo *PRepairInfo;
typedef struct tagRepairInfoEx
{
	RepairInfo repair;
	USHORT repairRank;
} RepairInfoEx;
typedef struct tagRepairInfoEx *PRepairInfoEx;
#define RCF_ISLEAF         0x1
#define RCF_ISCONFIRMED    0x2
#define RCF_ISTHIRDPARTY   0x4
typedef struct tagRootCauseInfo
{
	LPWSTR pwszDescription;
	GUID rootCauseID;
	DWORD rootCauseFlags;
	GUID networkInterfaceID;
	RepairInfoEx *pRepairs;
	USHORT repairCount;
} RootCauseInfo;
typedef struct tagRootCauseInfo *PRootCauseInfo;
extern HRESULT EncodeHelperAttribute(HELPER_ATTRIBUTE *attribute, BYTE **buf, size_t *bufSize);
extern HRESULT DecodeHelperAttribute(BYTE *buf, size_t bufSize, HELPER_ATTRIBUTE *attribute);
extern HRESULT EncodeRepairInfo(RepairInfo *info, BYTE **buf, size_t *bufSize);
extern HRESULT DecodeRepairInfo(BYTE *buf, size_t bufSize, RepairInfo *info);
extern HRESULT EncodeRepairInfoEx(RepairInfoEx *info, BYTE **buf, size_t *bufSize);
extern HRESULT DecodeRepairInfoEx(BYTE *buf, size_t bufSize, RepairInfoEx *info);
extern HRESULT EncodeRootCauseInfo(RootCauseInfo *info, BYTE **buf, size_t *bufSize);
extern HRESULT DecodeRootCauseInfo(BYTE *buf, size_t bufSize, RootCauseInfo *info);
extern GUID NetDiagModuleId;
extern GUID NetDiagScenarioId;
extern RPC_IF_HANDLE __MIDL_itf_ndattrib_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_ndattrib_0000_0000_v0_0_s_ifspec;
#endif

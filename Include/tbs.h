/*+@@file@@----------------------------------------------------------------*//*!
 \file		tbs.h
 \par Description 
            Extension and update of headers for PellesC compiler suite.
 \par Project: 
            PellesC Headers extension
 \date		Created  on Sat Sep 17 12:12:37 2016
 \date		Modified on Sat Sep 17 12:12:37 2016
 \author	frankie
\*//*-@@file@@----------------------------------------------------------------*/

#ifndef TBS_H__
#define TBS_H__
#if __POCC__ >= 500
#pragma once
#endif
#if (NTDDI_VERSION >= NTDDI_VISTA)
typedef BOOL TBS_BOOL;
typedef UINT32 TBS_RESULT;
typedef void *TBS_HCONTEXT;
typedef UINT32 TBS_COMMAND_PRIORITY;
typedef UINT32 TBS_COMMAND_LOCALITY;
#define TBS_CONTEXT_VERSION_ONE 1
#define TBS_COMMAND_PRIORITY_LOW        100
#define TBS_COMMAND_PRIORITY_NORMAL     200
#define TBS_COMMAND_PRIORITY_HIGH       300
#define TBS_COMMAND_PRIORITY_SYSTEM     400
#define TBS_COMMAND_PRIORITY_MAX        0x80000000
#define TBS_COMMAND_LOCALITY_ZERO       0
#define TBS_COMMAND_LOCALITY_ONE        1
#define TBS_COMMAND_LOCALITY_TWO        2
#define TBS_COMMAND_LOCALITY_THREE      3
#define TBS_COMMAND_LOCALITY_FOUR       4
#define TBS_SUCCESS                     S_OK
#define TBS_IN_OUT_BUF_SIZE_MAX         (256*1024)
typedef struct tdTBS_CONTEXT_PARAMS
{
    UINT32 version;
} TBS_CONTEXT_PARAMS;
TBS_RESULT WINAPI Tbsi_Context_Create(const TBS_CONTEXT_PARAMS *pContextParams, TBS_HCONTEXT *phContext);
TBS_RESULT WINAPI Tbsip_Context_Close(TBS_HCONTEXT hContext);
TBS_RESULT WINAPI Tbsip_Submit_Command(TBS_HCONTEXT hContext, TBS_COMMAND_LOCALITY Locality, TBS_COMMAND_PRIORITY Priority, const BYTE *pCommandBuf, UINT32 CommandBufLen, BYTE *pResultBuf, UINT32 *pResultBufLen);
TBS_RESULT WINAPI Tbsip_Cancel_Commands(TBS_HCONTEXT hContext);
TBS_RESULT WINAPI Tbsi_Physical_Presence_Command(TBS_HCONTEXT hContext, const BYTE *pInputBuf, UINT32 InputBufLen, PBYTE pOutputBuf, PUINT32 pOutputBufLen);
#if (NTDDI_VERSION >= NTDDI_VISTASP1)
TBS_RESULT WINAPI Tbsi_Get_TCG_Log(TBS_HCONTEXT hContext, PBYTE pOutputBuf, PUINT32 pOutputBufLen);
#endif
#endif
#endif

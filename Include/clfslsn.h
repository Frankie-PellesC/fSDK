/*+@@file@@----------------------------------------------------------------*//*!
 \file		clfslsn.h
 \par Description 
            Extension and update of headers for PellesC compiler suite.
 \par Project: 
            PellesC Headers extension
 \date		Created  on Sun Jul  3 17:03:56 2016
 \date		Modified on Sun Jul  3 17:03:56 2016
 \author	frankie
\*//*-@@file@@----------------------------------------------------------------*/

#ifndef _CLFS_LSN_H_
#define _CLFS_LSN_H_
#if __POCC__ >= 500
#pragma once
#endif
#if (NTDDI_VERSION >= NTDDI_WS03SP1) || (_WIN32_WINNT >= _WIN32_WINNT_WS03)
typedef UINT32                      CLFS_RECORD_INDEX;
#endif
#if (NTDDI_VERSION >= NTDDI_WS03SP1) || (_WIN32_WINNT >= _WIN32_WINNT_WS03)
typedef union _CLS_LSN
{
    struct
    {
       CLFS_RECORD_INDEX   idxRecord;
       CLFS_CONTAINER_ID   cidContainer;
    } offset;
    
    ULONGLONG               ullOffset;
} CLS_LSN, *PCLS_LSN, **PPCLS_LSN;
typedef CLS_LSN CLFS_LSN;
typedef CLFS_LSN *PCLFS_LSN, **PPCLFS_LSN;
#endif
#endif

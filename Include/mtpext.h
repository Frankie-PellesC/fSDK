/*+@@file@@----------------------------------------------------------------*//*!
 \file		mtpext.h
 \par Description 
            Extension and update of headers for PellesC compiler suite.
 \par Project: 
            PellesC Headers extension
 \date		Created  on Sun Sep 11 21:38:25 2016
 \date		Modified on Sun Sep 11 21:38:25 2016
 \author	frankie
\*//*-@@file@@----------------------------------------------------------------*/

#ifndef MTPEXT_H__
#define MTPEXT_H__
#if __POCC__ >= 500
#pragma once
#endif
#define IOCTL_MTP_CUSTOM_COMMAND    0x3150544d
//const DWORD MTP_COMMAND_MAX_PARAMS  = 5;
//const DWORD MTP_RESPONSE_MAX_PARAMS = 5;
//const WORD MTP_RESPONSE_OK = 0x2001;
#define MTP_COMMAND_MAX_PARAMS		 5
#define MTP_RESPONSE_MAX_PARAMS		 5
#define MTP_RESPONSE_OK			0x2001
#pragma pack(push, 1)
typedef struct _MTP_COMMAND_DATA_IN
{
    WORD    OpCode;
    DWORD   NumParams;
    DWORD   Params[MTP_COMMAND_MAX_PARAMS];
    DWORD   NextPhase;
    DWORD   CommandWriteDataSize;
    BYTE    CommandWriteData[1];
} MTP_COMMAND_DATA_IN, *PMTP_COMMAND_DATA_IN;
typedef struct _MTP_COMMAND_DATA_OUT
{
    WORD    ResponseCode;
    DWORD   NumParams;
    DWORD   Params[MTP_RESPONSE_MAX_PARAMS];
    DWORD   CommandReadDataSize;
    BYTE    CommandReadData[1];
} MTP_COMMAND_DATA_OUT, *PMTP_COMMAND_DATA_OUT;
#pragma pack(pop, Old)
#define SIZEOF_REQUIRED_COMMAND_DATA_IN (sizeof(MTP_COMMAND_DATA_IN) - 1)
#define SIZEOF_REQUIRED_COMMAND_DATA_OUT (sizeof(MTP_COMMAND_DATA_OUT) - 1)
#define MTP_NEXTPHASE_READ_DATA     1
#define MTP_NEXTPHASE_WRITE_DATA    2
#define MTP_NEXTPHASE_NO_DATA       3
#endif

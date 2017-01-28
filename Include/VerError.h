/*+@@file@@----------------------------------------------------------------*//*!
 \file		VerError.h
 \par Description 
            Extension and update of headers for PellesC compiler suite.
 \par Project: 
            PellesC Headers extension
 \date		Created  on Sat Sep 17 16:36:49 2016
 \date		Modified on Sat Sep 17 16:36:49 2016
 \author	frankie
\*//*-@@file@@----------------------------------------------------------------*/

#ifndef __VERERROR_h__
#define __VERERROR_h__
#if __POCC__ >= 500
#pragma once
#endif
#ifndef _VER_RAW_STRUCT_FOR_IDL_
#ifndef _JIT64_PEV_
#include <corhdr.h>
#include <openum.h>
#include <corerror.h>
#endif
#define VER_ERR_FATAL		0x80000000L
#define VER_ERR_OFFSET		0x00000001L
#define VER_ERR_OPCODE	  	0x00000002L
#define VER_ERR_OPERAND		0x00000004L
#define VER_ERR_TOKEN		0x00000008L
#define VER_ERR_EXCEP_NUM_1	0x00000010L
#define VER_ERR_EXCEP_NUM_2	0x00000020L
#define VER_ERR_STACK_SLOT  0x00000040L
#define VER_ERR_ITEM_1      0x00000080L
#define VER_ERR_ITEM_2      0x00000100L
#define VER_ERR_ITEM_F      0x00000200L
#define VER_ERR_ITEM_E      0x00000400L
#define VER_ERR_TYPE_1      0x00000800L
#define VER_ERR_TYPE_2      0x00001000L
#define VER_ERR_TYPE_F      0x00002000L
#define VER_ERR_TYPE_E      0x00004000L
#define VER_ERR_ADDL_MSG    0x00008000L
#define VER_ERR_SIG_MASK	0x07000000L
#define VER_ERR_METHOD_SIG 	0x01000000L
#define VER_ERR_LOCAL_SIG  	0x02000000L
#define VER_ERR_FIELD_SIG	0x03000000L
#define VER_ERR_CALL_SIG	0x04000000L
#define VER_ERR_OPCODE_OFFSET (VER_ERR_OPCODE|VER_ERR_OFFSET)
#define VER_ERR_LOCAL_VAR   VER_ERR_LOCAL_SIG
#define VER_ERR_ARGUMENT    VER_ERR_METHOD_SIG
#define VER_ERR_ARG_RET	    0xFFFFFFFEL
#define VER_ERR_NO_ARG	    0xFFFFFFFFL
#define VER_ERR_NO_LOC	    VER_ERR_NO_ARG
typedef struct
{
	DWORD dwFlags;
	void* pv;
} _VerItem;
typedef struct VerErrorStruct
{
	DWORD   dwFlags;
    union
	{
#ifndef _JIT64_PEV_
        OPCODE  opcode;
#endif
        unsigned long padding1;
    };
    union
	{
        DWORD   dwOffset;
        long    uOffset;
    };
    union
	{
        mdToken         token;
        mdToken         Token;
        BYTE	        bCallConv;
        CorElementType  elem;
        DWORD           dwStackSlot;
        unsigned long   padding2;
    };
    union
	{
        _VerItem sItem1;
        _VerItem sItemFound;
        WCHAR* wszType1;
        WCHAR* wszTypeFound;
        DWORD dwException1;
        DWORD dwVarNumber;
        DWORD dwArgNumber;
        DWORD dwOperand;
        WCHAR* wszAdditionalMessage;
    };
    union
	{
        _VerItem sItem2;
        _VerItem sItemExpected;
        WCHAR* wszType2;
        WCHAR* wszTypeExpected;
        DWORD dwException2;
    };
} VerError;
#else
typedef struct tag_VerError
{
    unsigned long flags;
    unsigned long opcode;
    unsigned long uOffset;
    unsigned long Token;
    unsigned long item1_flags;
    int           *item1_data;
    unsigned long item2_flags;
    int           *item2_data;
}  _VerError;
#endif
#endif

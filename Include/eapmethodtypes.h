/*+@@file@@----------------------------------------------------------------*//*!
 \file		eapmethodtypes.h
 \par Description 
            Extension and update of headers for PellesC compiler suite.
 \par Project: 
            PellesC Headers extension
 \date		Created  on Fri Jul  8 18:14:42 2016
 \date		Modified on Fri Jul  8 18:14:42 2016
 \author	frankie
\*//*-@@file@@----------------------------------------------------------------*/

#ifndef EAPMETHODAPIS_H
#define EAPMETHODAPIS_H
#if __POCC__ >= 500
#pragma once
#endif
typedef struct tagEapPacket
{
	BYTE Code;
	BYTE Id;
	BYTE Length[2];
	BYTE Data[1];
} EapPacket;
typedef enum tagEapCode
{
	EapCodeMinimum = 1,
	EapCodeRequest = 1,
	EapCodeResponse,
	EapCodeSuccess,
	EapCodeFailure,
	EapCodeMaximum = EapCodeFailure
} EapCode;
typedef VOID* EAP_SESSION_HANDLE;
#endif

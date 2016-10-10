/*+@@file@@----------------------------------------------------------------*//*!
 \file		fxsutility.h
 \par Description 
            Extension and update of headers for PellesC compiler suite.
 \par Project: 
            PellesC Headers extension
 \date		Created  on Mon Jul 11 00:08:25 2016
 \date		Modified on Mon Jul 11 00:08:25 2016
 \author	frankie
\*//*-@@file@@----------------------------------------------------------------*/

#ifndef _FXS_UTILITY_H_
#define _FXS_UTILITY_H_
#if __POCC__ >= 500
#pragma once
#endif
typedef enum
{
	  SEND_TO_FAX_RECIPIENT_ATTACHMENT
} SendToMode;
BOOL WINAPI CanSendToFaxRecipient(void);
DWORD WINAPI SendToFaxRecipient(SendToMode sndMode, LPCWSTR lpFileName);
#endif

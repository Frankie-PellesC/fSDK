/*+@@file@@----------------------------------------------------------------*//*!
 \file		syncregistrationerrors.h
 \par Description 
            Extension and update of headers for PellesC compiler suite.
 \par Project: 
            PellesC Headers extension
 \date		Created  on Sat Sep 17 02:16:50 2016
 \date		Modified on Sat Sep 17 02:16:50 2016
 \author	frankie
\*//*-@@file@@----------------------------------------------------------------*/

#if __POCC__ >= 500
#pragma once
#endif
#define SYNC_E_REGISTRATION_INTERNAL_ERROR		0x80041600L
#define SYNC_E_REGISTRATION_ALREADY_REGISTERED	0x80041601L
#define SYNC_E_REGISTRATION_NOT_REGISTERED		0x80041602L
#define SYNC_E_REGISTRATION_CORRUPT_DATA		0x80041603L
#define SYNC_E_REGISTRATION_ALREADY_COMMITTED	0x80041604L

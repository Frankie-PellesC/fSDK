/*+@@file@@----------------------------------------------------------------*//*!
 \file		Mdmsg.h
 \par Description 
            Extension and update of headers for PellesC compiler suite.
 \par Project: 
            PellesC Headers extension
 \date		Created  on Sat Jul 16 18:45:03 2016
 \date		Modified on Sat Jul 16 18:45:03 2016
 \author	frankie
\*//*-@@file@@----------------------------------------------------------------*/

#ifndef _MDMSG_H_
#define _MDMSG_H_
#if __POCC__ >= 500
#pragma once
#endif
#define MD_ERROR_NOT_INITIALIZED         0x800CC800L
#define MD_ERROR_DATA_NOT_FOUND          0x800CC801L
#define MD_ERROR_INVALID_VERSION         0x800CC802L
#define MD_WARNING_PATH_NOT_FOUND        0x000CC803L
#define MD_WARNING_DUP_NAME              0x000CC804L
#define MD_WARNING_INVALID_DATA          0x000CC805L
#define MD_ERROR_SECURE_CHANNEL_FAILURE  0x800CC806L
#define MD_WARNING_PATH_NOT_INSERTED     0x000CC807L
#define MD_ERROR_CANNOT_REMOVE_SECURE_ATTRIBUTE 0x800CC808L
#define MD_WARNING_SAVE_FAILED           0x000CC809L
#define MD_ERROR_IISAO_INVALID_SCHEMA    0x800CC810L
#define MD_ERROR_READ_METABASE_FILE      0x800CC819L
#define MD_ERROR_NO_SESSION_KEY          0x800CC81DL
#endif

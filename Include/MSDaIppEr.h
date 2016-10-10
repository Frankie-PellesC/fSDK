/*+@@file@@----------------------------------------------------------------*//*!
 \file		MSDaIppEr.h
 \par Description 
            Extension and update of headers for PellesC compiler suite.
 \par Project: 
            PellesC Headers extension
 \date		Created  on Sun Aug 14 18:55:15 2016
 \date		Modified on Sun Aug 14 18:55:15 2016
 \author	frankie
\*//*-@@file@@----------------------------------------------------------------*/

#ifndef __MSDaIppEr_h__
#define __MSDaIppEr_h__
#if __POCC__ >= 500
#pragma once
#endif
#define IPP_E_FIRST                      0x40048000L
#define IPP_E_SYNCCONFLICT               0xC0048003L
#define IPP_E_FILENOTDIRTY               0xC0048004L
#define IPP_E_MARKFOROFFLINE_FAILED      0xC0048006L
#define IPP_E_OFFLINE                    0xC0048007L
#define IPP_E_UNSYNCHRONIZED             0xC0048008L
#define IPP_E_SERVERTYPE_NOT_SUPPORTED   0xC004800AL
#define IPP_E_MDAC_VERSION               0xC004800DL
#define IPP_E_COLLECTIONEXISTS           0xC004800EL
#define IPP_E_CANNOTCREATEOFFLINE        0xC004800FL
#define IPP_E_STATUS_CANNOTCOMPLETE      0xC0048101L
#define IPP_E_RESELECTPROVIDER           0xC0048102L
#define IPP_E_CLIENTMUSTEMULATE          0xC0048103L
#define IPP_S_WEAKRESERVE                0x00048104L
#define IPP_S_TRUNCATED                  0x00048105L
#define IPP_E_LAST                       0x40048106L
#endif

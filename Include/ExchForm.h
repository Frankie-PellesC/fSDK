/*+@@file@@----------------------------------------------------------------*//*!
 \file		ExchForm.h
 \par Description 
            Extension and update of headers for PellesC compiler suite.
 \par Project: 
            PellesC Headers extension
 \date		Created  on Sat Jul  9 22:19:12 2016
 \date		Modified on Sat Jul  9 22:19:12 2016
 \author	frankie
\*//*-@@file@@----------------------------------------------------------------*/

#ifndef __ExchForm_h__
#define __ExchForm_h__
#if __POCC__ >= 500
#pragma once
#endif
#ifndef EXCHFORM_H
#define EXCHFORM_H
#define EXCHIVERB_OPEN              0
#define EXCHIVERB_RESERVED_COMPOSE  100
#define EXCHIVERB_RESERVED_OPEN     101
#define EXCHIVERB_REPLYTOSENDER     102
#define EXCHIVERB_REPLYTOALL        103
#define EXCHIVERB_FORWARD           104
#define EXCHIVERB_PRINT             105
#define EXCHIVERB_SAVEAS            106
#define EXCHIVERB_RESERVED_DELIVERY 107
#define EXCHIVERB_REPLYTOFOLDER     108
#define DEFINE_EXCHFORMGUID(name, b)    DEFINE_GUID(name, 0x00020D00 | (b), 0, 0, 0xC0,0,0,0,0,0,0,0x46)
#ifndef NOEXCHFORMGUIDS
DEFINE_EXCHFORMGUID(PS_EXCHFORM, 0x0C);
#endif
#define psOpMap                     PS_EXCHFORM
#define ulKindOpMap                 MNID_ID
#define lidOpMap                    1
#define ptOpMap                     PT_STRING8
#define ichOpMapReservedCompose     0
#define ichOpMapOpen                1
#define ichOpMapReplyToSender       2
#define ichOpMapReplyToAll          3
#define ichOpMapForward             4
#define ichOpMapPrint               5
#define ichOpMapSaveAs              6
#define ichOpMapReservedDelivery    7
#define ichOpMapReplyToFolder       8
#define chOpMapByClient             '0'
#define chOpMapByForm               '1'
#define chOpMapDisable              '2'
#endif
#endif

/*+@@file@@----------------------------------------------------------------*//*!
 \file		notesdeviceservice.h
 \par Description 
            Extension and update of headers for PellesC compiler suite.
 \par Project: 
            PellesC Headers extension
 \date		Created  on Sun Sep 11 22:49:42 2016
 \date		Modified on Sun Sep 11 22:49:42 2016
 \author	frankie
\*//*-@@file@@----------------------------------------------------------------*/

#ifndef _NOTESDEVICESERVICE_H_
#define _NOTESDEVICESERVICE_H_
#if __POCC__ >= 500
#pragma once
#endif
#include <DeviceServices.h>
#include <MessageDeviceService.h>
DEFINE_DEVSVCGUID(SERVICE_Notes, 0x5c017aea, 0xe706, 0x4719, 0x8c, 0xc0, 0xa3, 0x03, 0x83, 0x6f, 0xd3, 0x21);
#define NAME_NotesSvc	L"Notes"
#define TYPE_NotesSvc	DEVSVCTYPE_DEFAULT
DEFINE_DEVSVCGUID(FORMAT_AbstractNote, 0xb3d1b688, 0x39f6, 0x4703, 0xb3, 0x39, 0xc6, 0x9b, 0x7d, 0x2a, 0xbb, 0x3f);
#define NAME_AbstractNote	L"AbstractNote"
DEFINE_DEVSVCGUID(NAMESPACE_NotesObj, 0x5FFBFC7B, 0x7483, 0x41AD, 0xAF, 0xB9, 0xDA, 0x3F, 0x4E, 0x59, 0x2B, 0x8D);
#endif

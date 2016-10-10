/*+@@file@@----------------------------------------------------------------*//*!
 \file		ringtonedeviceservice.h
 \par Description 
            Extension and update of headers for PellesC compiler suite.
 \par Project: 
            PellesC Headers extension
 \date		Created  on Fri Sep 16 19:46:56 2016
 \date		Modified on Fri Sep 16 19:46:56 2016
 \author	frankie
\*//*-@@file@@----------------------------------------------------------------*/

#ifndef _RINGTONEDEVICESERVICE_H_
#define _RINGTONEDEVICESERVICE_H_
#if __POCC__ >= 500
#pragma once
#endif
#include <DeviceServices.h>
#include <MessageDeviceService.h>
DEFINE_DEVSVCGUID(SERVICE_Ringtones, 0xd0eace0e, 0x707d, 0x4106, 0x8d, 0x38, 0x4f, 0x56, 0xe, 0x6a, 0x9f, 0x8e);
#define NAME_RingtonesSvc	L"Ringtones"
#define TYPE_RingtonesSvc	DEVSVCTYPE_DEFAULT
DEFINE_DEVSVCGUID(NAMESPACE_RingtonesSvc, 0x7d05d925, 0x32e6, 0x4790, 0x92, 0x05, 0x54, 0x76, 0x4b, 0xb3, 0xcb, 0x74);
DEFINE_DEVSVCPROPKEY(PKEY_RingtonesSvc_DefaultRingtone, 0x7d05d925, 0x32e6, 0x4790, 0x92, 0x05, 0x54, 0x76, 0x4b, 0xb3, 0xcb, 0x74, 2);
#define NAME_RingtonesSvc_DefaultRingtone   L"DefaultRingtone"
DEFINE_DEVSVCGUID(NAMESPACE_RingtonesObj, 0x8d943c78, 0x2c7d, 0x4c74, 0x94, 0x5a, 0x42, 0xd8, 0x3c, 0xb5, 0x8b, 0x5a);
#endif

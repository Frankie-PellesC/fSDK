/*+@@file@@----------------------------------------------------------------*//*!
 \file		DeviceServices.h
 \par Description 
            Extension and update of headers for PellesC compiler suite.
 \par Project: 
            PellesC Headers extension
 \date		Created  on Sat Jul  2 17:22:58 2016
 \date		Modified on Sat Jul  2 17:22:58 2016
 \author	frankie
\*//*-@@file@@----------------------------------------------------------------*/

#ifndef _DEVICESERVICES_H_
#define _DEVICESERVICES_H_
#if __POCC__ >= 500
#pragma once
#endif
#include "BridgeDeviceService.h"
#define DEVSVC_SERVICEINFO_VERSION      0x00000064
#define DEVSVCTYPE_DEFAULT              0x00000000
#define DEVSVCTYPE_ABSTRACT             0x00000001
DEFINE_DEVSVCGUID(NAMESPACE_Services, 0x14fa7268, 0x0b6c, 0x4214, 0x94, 0x87, 0x43, 0x5b, 0x48, 0x0a, 0x8c, 0x4f);
DEFINE_DEVSVCPROPKEY(PKEY_Services_ServiceDisplayName, 0x14fa7268, 0x0b6c, 0x4214, 0x94, 0x87, 0x43, 0x5b, 0x48, 0x0a, 0x8c, 0x4f, 2);
#define NAME_Services_ServiceDisplayName    L"ServiceDisplayName"
DEFINE_DEVSVCPROPKEY(PKEY_Services_ServiceIcon, 0x14fa7268, 0x0b6c, 0x4214, 0x94, 0x87, 0x43, 0x5b, 0x48, 0x0a, 0x8c, 0x4f, 3);
#define NAME_Services_ServiceIcon           L"ServiceIcon"
DEFINE_DEVSVCPROPKEY(PKEY_Services_ServiceLocale, 0x14fa7268, 0x0b6c, 0x4214, 0x94, 0x87, 0x43, 0x5b, 0x48, 0x0a, 0x8c, 0x4f, 4);
#define NAME_Services_ServiceLocale         L"ServiceLocale"
#endif

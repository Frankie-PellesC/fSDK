/*+@@file@@----------------------------------------------------------------*//*!
 \file		metadatadeviceservice.h
 \par Description 
            Extension and update of headers for PellesC compiler suite.
 \par Project: 
            PellesC Headers extension
 \date		Created  on Sun Aug  7 19:55:18 2016
 \date		Modified on Sun Aug  7 19:55:18 2016
 \author	frankie
\*//*-@@file@@----------------------------------------------------------------*/

#ifndef _METADATADEVICESERVICE_H_
#define _METADATADEVICESERVICE_H_
#if __POCC__ >= 500
#pragma once
#endif
#include <DeviceServices.h>
DEFINE_DEVSVCGUID(SERVICE_DeviceMetadata, 0x332ffe6a, 0xaf65, 0x41e1, 0xa0, 0xaf, 0xd3, 0xe2, 0x62, 0x7b, 0xdf, 0x54);
#define NAME_DeviceMetadataSvc              L"Metadata"
#define TYPE_DeviceMetadataSvc              DEVSVCTYPE_DEFAULT
DEFINE_DEVSVCGUID(FORMAT_DeviceMetadataCAB, 0xe1809599, 0x4303, 0x4e3b, 0x92, 0x44, 0x99, 0xc6, 0x2c, 0x25, 0x45, 0x51);
#define NAME_DeviceMetadataCAB              L"DeviceMetadataCAB"
DEFINE_DEVSVCGUID(NAMESPACE_DeviceMetadataObj, 0x68bb7eeb, 0x9eef, 0x45bd, 0x8d, 0xe6, 0x3b, 0x92, 0xa5, 0x7c, 0xae, 0x1e);
DEFINE_DEVSVCPROPKEY(PKEY_DeviceMetadataObj_ContentID, 0x68bb7eeb, 0x9eef, 0x45bd, 0x8d, 0xe6, 0x3b, 0x92, 0xa5, 0x7c, 0xae, 0x1e, 3);
#define NAME_DeviceMetadataObj_ContentID    L"ContentID"
DEFINE_DEVSVCPROPKEY(PKEY_DeviceMetadataObj_DefaultCAB, 0x68bb7eeb, 0x9eef, 0x45bd, 0x8d, 0xe6, 0x3b, 0x92, 0xa5, 0x7c, 0xae, 0x1e, 4);
#define NAME_DeviceMetadataObj_DefaultCAB   L"DefaultCAB"
#define ENUM_DeviceMetadataObj_DefaultCABFalse  0
#define ENUM_DeviceMetadataObj_DefaultCABTrue   1
#endif

/*+@@file@@----------------------------------------------------------------*//*!
 \file		WcnFunctionDiscoveryKeys.h
 \par Description 
            Extension and update of headers for PellesC compiler suite.
 \par Project: 
            PellesC Headers extension
 \date		Created  on Sun Sep  4 18:24:50 2016
 \date		Modified on Sun Sep  4 18:24:50 2016
 \author	frankie
\*//*-@@file@@----------------------------------------------------------------*/

#ifndef _wcnfunctiondiscoverykeys_h_
#define _wcnfunctiondiscoverykeys_h_
#if __POCC__ >= 500
#pragma once
#endif
#if NTDDI_VERSION >= NTDDI_WIN7
#include <PropKeyDef.h>
DEFINE_GUID( SID_WcnProvider, 0xC100BECA,0xD33A,0x4A4B,0xBF,0x23,0xBB,0xEF,0x46,0x63,0xD0,0x17);
DEFINE_PROPERTYKEY(PKEY_WCN_DeviceType_Category,       0x88190b8b, 0x4684, 0x11da, 0xa2, 0x6a, 0x00, 0x02, 0xb3, 0x98, 0x8e, 0x81, 0x00000010);
DEFINE_PROPERTYKEY(PKEY_WCN_DeviceType_SubCategoryOUI, 0x88190b8b, 0x4684, 0x11da, 0xa2, 0x6a, 0x00, 0x02, 0xb3, 0x98, 0x8e, 0x81, 0x00000011);
DEFINE_PROPERTYKEY(PKEY_WCN_DeviceType_SubCategory,    0x88190b8b, 0x4684, 0x11da, 0xa2, 0x6a, 0x00, 0x02, 0xb3, 0x98, 0x8e, 0x81, 0x00000012);
DEFINE_PROPERTYKEY(PKEY_WCN_SSID,                      0x88190b8b, 0x4684, 0x11da, 0xa2, 0x6a, 0x00, 0x02, 0xb3, 0x98, 0x8e, 0x81, 0x00000020);
#endif
#endif

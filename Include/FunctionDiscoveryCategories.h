/*+@@file@@----------------------------------------------------------------*//*!
 \file		FunctionDiscoveryCategories.h
 \par Description 
            Extension and update of headers for PellesC compiler suite.
 \par Project: 
            PellesC Headers extension
 \date		Created  on Sun Jul 10 19:28:01 2016
 \date		Modified on Sun Jul 10 19:28:01 2016
 \author	frankie
\*//*-@@file@@----------------------------------------------------------------*/

#ifndef __FunctionDiscoveryCategories_h__
#define __FunctionDiscoveryCategories_h__
#if __POCC__ >= 500
#pragma once
#endif
#define FD_SUBKEY                               L"SOFTWARE\\Microsoft\\Function Discovery\\"
#define FD_SUBKEY_CATEGORIES                    FD_SUBKEY L"Categories\\"
#define FCTN_CATEGORY_PNP                       L"Provider\\Microsoft.Base.PnP"
#define FCTN_CATEGORY_REGISTRY                  L"Provider\\Microsoft.Base.Registry"
#define FCTN_CATEGORY_SSDP                      L"Provider\\Microsoft.Networking.SSDP"
#define FCTN_CATEGORY_WSDISCOVERY               L"Provider\\Microsoft.Networking.WSD"
#define FCTN_CATEGORY_NETBIOS                   L"Provider\\Microsoft.Networking.Netbios"
#define FCTN_CATEGORY_WCN                       L"Provider\\Microsoft.Networking.WCN"
#define FCTN_CATEGORY_PUBLICATION               L"Provider\\Microsoft.Base.Publication"
#define FCTN_CATEGORY_PNPXASSOCIATION           L"Provider\\Microsoft.PnPX.Association"
#define FCTN_CATEGORY_BT                        L"Provider\\Microsoft.Devices.Bluetooth"
#define FCTN_CATEGORY_WUSB                      L"Provider\\Microsoft.Devices.WirelessUSB"
#define FCTN_CATEGORY_DEVICEDISPLAYOBJECTS      L"Provider\\Microsoft.Base.DeviceDisplayObjects"
#define FCTN_CATEGORY_NETWORKDEVICES            L"Layered\\Microsoft.Networking.Devices"
#define FCTN_CATEGORY_DEVICES                   L"Layered\\Microsoft.Base.Devices"
#define FCTN_CATEGORY_DEVICEFUNCTIONENUMERATORS L"Layered\\Microsoft.Devices.FunctionEnumerators"
#define FCTN_CATEGORY_DEVICEPAIRING             L"Layered\\Microsoft.Base.DevicePairing"
#define FCTN_SUBCAT_DEVICES_WSDPRINTERS         L"WSDPrinters"
#define FCTN_SUBCAT_NETWORKDEVICES_SSDP         L"SSDP"
#define FCTN_SUBCAT_NETWORKDEVICES_WSD          L"WSD"
#define FCTN_SUBCAT_REG_PUBLICATION             L"Publication"
#define FCTN_SUBCAT_REG_DIRECTED                L"Directed"
#endif

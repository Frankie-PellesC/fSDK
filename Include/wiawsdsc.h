/*+@@file@@----------------------------------------------------------------*//*!
 \file		wiawsdsc.h
 \par Description 
            Extension and update of headers for PellesC compiler suite.
 \par Project: 
            PellesC Headers extension
 \date		Created  on Mon Sep 19 02:11:34 2016
 \date		Modified on Mon Sep 19 02:11:34 2016
 \author	frankie
\*//*-@@file@@----------------------------------------------------------------*/

#ifndef _WIAWSDSC_
#define _WIAWSDSC_
#if __POCC__ >= 500
#pragma once
#endif
#ifndef _WIADEF_
#include <wiadef.h>
#endif
#define WIA_WSD_MANUFACTURER             WIA_PRIVATE_DEVPROP
#define WIA_WSD_MANUFACTURER_STR         L"Device manufacturer"
#define WIA_WSD_MANUFACTURER_URL         (WIA_PRIVATE_DEVPROP + 1)
#define WIA_WSD_MANUFACTURER_URL_STR     L"Manufacurer URL"
#define WIA_WSD_MODEL_NAME               (WIA_PRIVATE_DEVPROP + 2)
#define WIA_WSD_MODEL_NAME_STR           L"Model name"
#define WIA_WSD_MODEL_NUMBER             (WIA_PRIVATE_DEVPROP + 3)
#define WIA_WSD_MODEL_NUMBER_STR         L"Model number"
#define WIA_WSD_MODEL_URL                (WIA_PRIVATE_DEVPROP + 4)
#define WIA_WSD_MODEL_URL_STR            L"Model URL"
#define WIA_WSD_PRESENTATION_URL         (WIA_PRIVATE_DEVPROP + 5)
#define WIA_WSD_PRESENTATION_URL_STR     L"Presentation URL"
#define WIA_WSD_FRIENDLY_NAME            (WIA_PRIVATE_DEVPROP + 6)
#define WIA_WSD_FRIENDLY_NAME_STR        L"Friendly name"
#define WIA_WSD_SERIAL_NUMBER            (WIA_PRIVATE_DEVPROP + 7)
#define WIA_WSD_SERIAL_NUMBER_STR        L"Serial number"
#define WIA_WSD_SCAN_AVAILABLE_ITEM      (WIA_PRIVATE_DEVPROP + 8)
#define WIA_WSD_SCAN_AVAILABLE_ITEM_STR  WIA_DPS_SCAN_AVAILABLE_ITEM_STR
#endif

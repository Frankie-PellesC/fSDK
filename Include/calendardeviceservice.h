/*+@@file@@----------------------------------------------------------------*//*!
 \file		calendardeviceservice.h
 \par Description 
            Extension and update of headers for PellesC compiler suite.
 \par Project: 
            PellesC Headers extension
 \date		Created  on Sat Jul  2 21:46:13 2016
 \date		Modified on Sat Jul  2 21:46:13 2016
 \author	frankie
\*//*-@@file@@----------------------------------------------------------------*/

#ifndef _CALENDARDEVICESERVICE_H_
#define _CALENDARDEVICESERVICE_H_
#if __POCC__ >= 500
#pragma once
#endif
#include <DeviceServices.h>
#include <MessageDeviceService.h>
#include <SyncDeviceService.h>
DEFINE_DEVSVCGUID(SERVICE_Calendar, 0xE4DFDBD3, 0x7F04, 0x45E9, 0x9F, 0xA1, 0x5C, 0xA0, 0xEA, 0xEB, 0x0A, 0xE3);
#define NAME_CalendarSvc                    L"Calendar"
#define TYPE_CalendarSvc                    DEVSVCTYPE_DEFAULT
DEFINE_DEVSVCGUID(NAMESPACE_CalendarSvc, 0x63816297, 0x61E5, 0x4306, 0xB1, 0xA3, 0xCE, 0xDF, 0x48, 0x1B, 0x86, 0x29);
#define PKEY_CalendarSvc_SyncInWindowOnly   PKEY_SyncSvc_FilterType
#define NAME_CalendarSvc_SyncInWindowOnly   NAME_SyncSvc_FilterType
DEFINE_DEVSVCPROPKEY(PKEY_CalendarSvc_SyncWindowStart, 0x63816297, 0x61E5, 0x4306, 0xB1, 0xA3, 0xCE, 0xDF, 0x48, 0x1B, 0x86, 0x29, 2);
#define NAME_CalendarSvc_SyncWindowStart    L"SyncWindowStart"
DEFINE_DEVSVCPROPKEY(PKEY_CalendarSvc_SyncWindowEnd, 0x63816297, 0x61E5, 0x4306, 0xB1, 0xA3, 0xCE, 0xDF, 0x48, 0x1B, 0x86, 0x29, 3);
#define NAME_CalendarSvc_SyncWindowEnd      L"SyncWindowEnd"
DEFINE_DEVSVCGUID(FORMAT_AbstractActivity, 0xbf70e114, 0x3901, 0x4449, 0xbe, 0xe7, 0xd9, 0xea, 0x14, 0x93, 0xc3, 0x09);
#define NAME_AbstractActivity               L"AbstractActivity"
DEFINE_DEVSVCGUID(FORMAT_AbstractActivityOccurrence, 0xE87A7008, 0x32D1, 0x42C5, 0x84, 0x88, 0x4C, 0x23, 0x58, 0x66, 0xAF, 0x32);
#define NAME_AbstractActivityOccurrence     L"AbstractActivityOccurrence"
DEFINE_DEVSVCGUID(FORMAT_VCalendar1Activity, 0x23F7A5A5, 0xF7D3, 0x4585, 0xA1, 0xFF, 0x76, 0xE2, 0xD4, 0x5C, 0x91, 0x21);
#define NAME_VCalendar1Activity             L"VCalendar1"
DEFINE_DEVSVCGUID(FORMAT_ICalendarActivity, 0xCC4538CB, 0x7890, 0x41B7, 0xA3, 0xF1, 0xB6, 0xE6, 0x0B, 0xDD, 0x2A, 0x61);
#define NAME_ICalendarActivity              L"ICalendar"
DEFINE_DEVSVCGUID(NAMESPACE_CalendarObj, 0xF99EFD03, 0x431D, 0x40D8, 0xA1, 0xC9, 0x4E, 0x22, 0x0D, 0x9C, 0x88, 0xD3);
DEFINE_DEVSVCPROPKEY(PKEY_CalendarObj_Location, 0xF99EFD03, 0x431D, 0x40D8, 0xA1, 0xC9, 0x4E, 0x22, 0x0D, 0x9C, 0x88, 0xD3, 3);
#define NAME_CalendarObj_Location           L"Location"
DEFINE_DEVSVCPROPKEY(PKEY_CalendarObj_Accepted, 0xF99EFD03, 0x431D, 0x40D8, 0xA1, 0xC9, 0x4E, 0x22, 0x0D, 0x9C, 0x88, 0xD3, 10);
#define NAME_CalendarObj_Accepted           L"Accepted"
DEFINE_DEVSVCPROPKEY(PKEY_CalendarObj_Tentative, 0xF99EFD03, 0x431D, 0x40D8, 0xA1, 0xC9, 0x4E, 0x22, 0x0D, 0x9C, 0x88, 0xD3, 12);
#define NAME_CalendarObj_Tentative          L"Tentative"
DEFINE_DEVSVCPROPKEY(PKEY_CalendarObj_Declined, 0xF99EFD03, 0x431D, 0x40D8, 0xA1, 0xC9, 0x4E, 0x22, 0x0D, 0x9C, 0x88, 0xD3, 13);
#define NAME_CalendarObj_Declined           L"Declined"
DEFINE_DEVSVCPROPKEY(PKEY_CalendarObj_TimeZone, 0xF99EFD03, 0x431D, 0x40D8, 0xA1, 0xC9, 0x4E, 0x22, 0x0D, 0x9C, 0x88, 0xD3, 14);
#define NAME_CalendarObj_TimeZone           L"TimeZone"
DEFINE_DEVSVCPROPKEY(PKEY_CalendarObj_ReminderOffset, 0xF99EFD03, 0x431D, 0x40D8, 0xA1, 0xC9, 0x4E, 0x22, 0x0D, 0x9C, 0x88, 0xD3, 15);
#define NAME_CalendarObj_ReminderOffset     L"ReminderOffset"
DEFINE_DEVSVCPROPKEY(PKEY_CalendarObj_BusyStatus, 0xF99EFD03, 0x431D, 0x40D8, 0xA1, 0xC9, 0x4E, 0x22, 0x0D, 0x9C, 0x88, 0xD3, 16);
#define NAME_CalendarObj_BusyStatus         L"BusyStatus"
#define ENUM_CalendarObj_BusyStatusFree         0x0000
#define ENUM_CalendarObj_BusyStatusBusy         0x0001
#define ENUM_CalendarObj_BusyStatusOutOfOffice  0x0002
#define ENUM_CalendarObj_BusyStatusTentative    0x0003
DEFINE_DEVSVCPROPKEY(PKEY_CalendarObj_PatternStartTime, 0xF99EFD03, 0x431D, 0x40D8, 0xA1, 0xC9, 0x4E, 0x22, 0x0D, 0x9C, 0x88, 0xD3, 17);
#define NAME_CalendarObj_PatternStartTime   L"PatternStartTime"
DEFINE_DEVSVCPROPKEY(PKEY_CalendarObj_PatternDuration, 0xF99EFD03, 0x431D, 0x40D8, 0xA1, 0xC9, 0x4E, 0x22, 0x0D, 0x9C, 0x88, 0xD3, 18);
#define NAME_CalendarObj_PatternDuration    L"PatternDuration"
DEFINE_DEVSVCPROPKEY(PKEY_CalendarObj_BeginDateTime, 0xF99EFD03, 0x431D, 0x40D8, 0xA1, 0xC9, 0x4E, 0x22, 0x0D, 0x9C, 0x88, 0xD3, 19);
#define NAME_CalendarObj_BeginDateTime      L"BeginDateTime"
DEFINE_DEVSVCPROPKEY(PKEY_CalendarObj_EndDateTime, 0xF99EFD03, 0x431D, 0x40D8, 0xA1, 0xC9, 0x4E, 0x22, 0x0D, 0x9C, 0x88, 0xD3, 20);
#define NAME_CalendarObj_EndDateTime        L"EndDateTime"
#endif

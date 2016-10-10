/*+@@file@@----------------------------------------------------------------*//*!
 \file		taskdeviceservice.h
 \par Description 
            Extension and update of headers for PellesC compiler suite.
 \par Project: 
            PellesC Headers extension
 \date		Created  on Sat Sep 17 02:30:26 2016
 \date		Modified on Sat Sep 17 02:30:26 2016
 \author	frankie
\*//*-@@file@@----------------------------------------------------------------*/

#ifndef _TASKDEVICESERVICE_H_
#define _TASKDEVICESERVICE_H_
#if __POCC__ >= 500
#pragma once
#endif
#include <DeviceServices.h>
#include <MessageDeviceService.h>
#include <SyncDeviceService.h>
DEFINE_DEVSVCGUID(SERVICE_Tasks, 0xBB340C54, 0xB5C6, 0x491D, 0x88, 0x27, 0x28, 0xD0, 0xE7, 0x63, 0x19, 0x03);
#define NAME_TasksSvc                       L"Tasks"
#define TYPE_TasksSvc                       DEVSVCTYPE_DEFAULT
#define PKEY_TasksSvc_SyncActiveOnly        PKEY_SyncSvc_FilterType
DEFINE_DEVSVCGUID(FORMAT_AbstractTask, 0x522979c0, 0x74cf, 0x44ab, 0x97, 0x54, 0x55, 0xbc, 0x59, 0x6a, 0x67, 0xdf);
#define NAME_AbstractTask                   L"AbstractTask"
DEFINE_DEVSVCGUID(NAMESPACE_TaskObj, 0xE354E95E, 0xD8A0, 0x4637, 0xA0, 0x3A, 0x0C, 0xB2, 0x68, 0x38, 0xDB, 0xC7);
DEFINE_DEVSVCPROPKEY(PKEY_TaskObj_ReminderDateTime, 0xE354E95E, 0xD8A0, 0x4637, 0xA0, 0x3A, 0x0C, 0xB2, 0x68, 0x38, 0xDB, 0xC7, 13);
#define NAME_TaskObj_ReminderDateTime       L"ReminderDateTime"
DEFINE_DEVSVCPROPKEY(PKEY_TaskObj_Complete, 0xE354E95E, 0xD8A0, 0x4637, 0xA0, 0x3A, 0x0C, 0xB2, 0x68, 0x38, 0xDB, 0xC7, 14);
#define NAME_TaskObj_Complete               L"Complete"
#define ENUM_TaskObj_CompleteFalse          0x00
#define ENUM_TaskObj_CompleteTrue           0xff
DEFINE_DEVSVCPROPKEY(PKEY_TaskObj_BeginDate, 0xE354E95E, 0xD8A0, 0x4637, 0xA0, 0x3A, 0x0C, 0xB2, 0x68, 0x38, 0xDB, 0xC7, 15);
#define NAME_TaskObj_BeginDate              L"BeginDate"
DEFINE_DEVSVCPROPKEY(PKEY_TaskObj_EndDate, 0xE354E95E, 0xD8A0, 0x4637, 0xA0, 0x3A, 0x0C, 0xB2, 0x68, 0x38, 0xDB, 0xC7, 16);
#define NAME_TaskObj_EndDate                L"EndDate"
#endif

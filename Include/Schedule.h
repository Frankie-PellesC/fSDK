/*+@@file@@----------------------------------------------------------------*//*!
 \file		Schedule.h
 \par Description 
            Extension and update of headers for PellesC compiler suite.
 \par Project: 
            PellesC Headers extension
 \date		Created  on Sat Sep  3 17:50:59 2016
 \date		Modified on Sat Sep  3 17:50:59 2016
 \author	frankie
\*//*-@@file@@----------------------------------------------------------------*/

#ifndef _SCHEDULE_H_
#define _SCHEDULE_H_
#if __POCC__ >= 500
#pragma once
#endif
#define SCHEDULE_INTERVAL       0
#define SCHEDULE_BANDWIDTH      1
#define SCHEDULE_PRIORITY       2
typedef struct _SCHEDULE_HEADER
{
    ULONG   Type;
    ULONG   Offset;
} SCHEDULE_HEADER, *PSCHEDULE_HEADER;
typedef struct _SCHEDULE
{
    ULONG           Size;
    ULONG           Bandwidth;
    ULONG           NumberOfSchedules;
    SCHEDULE_HEADER Schedules[1];
} SCHEDULE, *PSCHEDULE;
#define SCHEDULE_DATA_ENTRIES   (7 * 24)
#endif

#ifndef __DSHOW_INCLUDED__
#define __DSHOW_INCLUDED__
#if __POCC__ >= 500
#pragma once
#endif
#include <windows.h>
#include <windowsx.h>
#include <olectl.h>
#include <ddraw.h>
#include <mmsystem.h>
#ifndef NO_DSHOW_STRSAFE
#define NO_SHLWAPI_STRFCNS
#include <strsafe.h>  
#endif
#ifndef NUMELMS
   #define NUMELMS(aa) (sizeof(aa)/sizeof((aa)[0]))
#endif
#include <strmif.h>
#include <amvideo.h>
#ifdef DSHOW_USE_AMAUDIO
#include <amaudio.h>
#endif
#include <control.h>
#include <evcode.h>
#include <uuids.h>
#include <errors.h>
#include <edevdefs.h>
#include <audevcod.h>
#include <dvdevcod.h>
#ifndef OATRUE
#define OATRUE (-1)
#endif
#ifndef OAFALSE
#define OAFALSE (0)
#endif
#ifndef InterlockedExchangePointer
#define InterlockedExchangePointer(Target, Value) \
   (PVOID)InterlockedExchange((PLONG)(Target), (LONG)(Value))
#endif 
#endif


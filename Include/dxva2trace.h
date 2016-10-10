/*+@@file@@----------------------------------------------------------------*//*!
 \file		dxva2trace.h
 \par Description 
            Extension and update of headers for PellesC compiler suite.
 \par Project: 
            PellesC Headers extension
 \date		Created  on Wed Jul  6 17:48:35 2016
 \date		Modified on Wed Jul  6 17:48:35 2016
 \author	frankie
\*//*-@@file@@----------------------------------------------------------------*/

#ifndef __inc_dxva2Trace_h
#define __inc_dxva2Trace_h
#if __POCC__ >= 500
#pragma once
#endif
DEFINE_GUID(DXVA2Trace_Control, 0xa0386e75, 0xf70c, 0x464c, 0xa9, 0xce, 0x33, 0xc4, 0x4e, 0x09, 0x16, 0x23);
typedef struct
{
#ifndef DXVA2Trace_PostProcessing
    EVENT_TRACE_HEADER  wmiHeader;
#endif
    ULONGLONG           pObject;
    ULONGLONG           pD3DDevice;
    GUID                DeviceGuid;
    ULONG               Width;
    ULONG               Height;
    BOOL                Enter;
} DXVA2Trace_DecodeDevCreatedData;
typedef struct
{
#ifndef DXVA2Trace_PostProcessing
    EVENT_TRACE_HEADER  wmiHeader;
#endif
    ULONGLONG           pObject;
    BOOL                Enter;
} DXVA2Trace_DecodeDeviceData;
typedef DXVA2Trace_DecodeDeviceData DXVA2Trace_DecodeDevDestroyedData;
typedef DXVA2Trace_DecodeDeviceData DXVA2Trace_DecodeDevExecuteData;
typedef DXVA2Trace_DecodeDeviceData DXVA2Trace_DecodeDevEndFrameData;
typedef struct
{
#ifndef DXVA2Trace_PostProcessing
    EVENT_TRACE_HEADER  wmiHeader;
#endif
    ULONGLONG           pObject;
    ULONGLONG           pRenderTarget;
    BOOL                Enter;
} DXVA2Trace_DecodeDevBeginFrameData;
typedef struct
{
#ifndef DXVA2Trace_PostProcessing
    EVENT_TRACE_HEADER  wmiHeader;
#endif
    ULONGLONG           pObject;
    UINT                BufferType;
    BOOL                Enter;
} DXVA2Trace_DecodeDevGetBufferData;
DEFINE_GUID(DXVA2Trace_DecodeDevCreated, 0xb4de17a1, 0xc5b2, 0x44fe, 0x86, 0xd5, 0xd9, 0x7a, 0x64, 0x81, 0x14, 0xff);
DEFINE_GUID(DXVA2Trace_DecodeDevDestroyed, 0x853ebdf2, 0x4160, 0x421d, 0x88, 0x93, 0x63, 0xdc, 0xea, 0x4f, 0x18, 0xbb);
DEFINE_GUID(DXVA2Trace_DecodeDevBeginFrame, 0x9fd1acf6, 0x44cb, 0x4637, 0xbc, 0x62, 0x2c, 0x11, 0xa9, 0x60, 0x8f, 0x90);
DEFINE_GUID(DXVA2Trace_DecodeDevExecute, 0x850aeb4c, 0xd19a, 0x4609, 0xb3, 0xb4, 0xbc, 0xbf, 0x0e, 0x22, 0x12, 0x1e);
DEFINE_GUID(DXVA2Trace_DecodeDevGetBuffer, 0x57b128fb, 0x72cb, 0x4137, 0xa5, 0x75, 0xd9, 0x1f, 0xa3, 0x16, 0x08, 0x97);
DEFINE_GUID(DXVA2Trace_DecodeDevEndFrame, 0x9fb3cb33, 0x47dc, 0x4899, 0x98, 0xc8, 0xc0, 0xc6, 0xcd, 0x7c, 0xd3, 0xcb);
typedef struct
{
#ifndef DXVA2Trace_PostProcessing
    EVENT_TRACE_HEADER  wmiHeader;
#endif
    ULONGLONG           pObject;
    ULONGLONG           pD3DDevice;
    GUID                DeviceGuid;
    ULONG               RTFourCC;
    ULONG               Width;
    ULONG               Height;
    BOOL                Enter;
} DXVA2Trace_VideoProcessDevCreatedData;
typedef struct
{
#ifndef DXVA2Trace_PostProcessing
    EVENT_TRACE_HEADER  wmiHeader;
#endif
    ULONGLONG           pObject;
    BOOL                Enter;
} DXVA2Trace_VideoProcessDeviceData;
typedef DXVA2Trace_VideoProcessDeviceData DXVA2Trace_VideoProcessDevDestroyedData;
typedef DXVA2Trace_VideoProcessDeviceData DXVA2Trace_VideoProcessBltEndData;
typedef struct
{
#ifndef DXVA2Trace_PostProcessing
    EVENT_TRACE_HEADER  wmiHeader;
#endif
    ULONGLONG           pObject;
    ULONGLONG           pRenderTarget;
    ULONGLONG           TargetFrameTime;
    RECT                TargetRect;
    BOOL                Enter;
} DXVA2TraceVideoProcessBltData;
#define DXVA2TraceVideoProcessBltDataData DXVA2TraceVideoProcessBltData;
DEFINE_GUID(DXVA2Trace_VideoProcessDevCreated, 0x895508c6, 0x540d, 0x4c87, 0x98, 0xf8, 0x8d, 0xcb, 0xf2, 0xda, 0xbb, 0x2a);
DEFINE_GUID(DXVA2Trace_VideoProcessDevDestroyed, 0xf97f30b1, 0xfb49, 0x42c7, 0x8e, 0xe8, 0x88, 0xbd, 0xfa, 0x92, 0xd4, 0xe2);
DEFINE_GUID(DXVA2Trace_VideoProcessBlt, 0x69089cc0, 0x71ab, 0x42d0, 0x95, 0x3a, 0x28, 0x87, 0xbf, 0x05, 0xa8, 0xaf);
#endif

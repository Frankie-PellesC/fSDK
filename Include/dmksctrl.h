/*+@@file@@----------------------------------------------------------------*//*!
 \file		dmksctrl.h
 \par Description 
            Extension and update of headers for PellesC compiler suite.
 \par Project: 
            PellesC Headers extension
 \date		Created  on Sun Jun 19 16:43:01 2016
 \date		Modified on Sun Jun 19 16:43:01 2016
 \author	frankie
\*//*-@@file@@----------------------------------------------------------------*/

#ifndef _DMKSCTRL_
#define _DMKSCTRL_
#if __POCC__ >= 500
#pragma once
#endif
#include <pshpack8.h>
#include <objbase.h>
#if !defined(_NTRTL_)
    #ifndef DEFINE_GUIDEX
        #define DEFINE_GUIDEX(name) extern const CDECL GUID name
    #endif
    #ifndef STATICGUIDOF
        #define STATICGUIDOF(guid) STATIC_##guid
    #endif
#endif
#ifndef STATIC_IID_IKsControl
#define STATIC_IID_IKsControl 0x28F54685L, 0x06FD, 0x11D2, 0xB2, 0x7A, 0x00, 0xA0, 0xC9, 0x22, 0x31, 0x96
#endif
#ifndef _KS_
#define _KS_

typedef struct
{
    union
	{
        struct
			{
	            GUID    Set;
	            ULONG   Id;
	            ULONG   Flags;
        	} Data;
        LONGLONG    Alignment;
    };
} KSIDENTIFIER, *PKSIDENTIFIER;

typedef KSIDENTIFIER KSPROPERTY, *PKSPROPERTY, KSMETHOD, *PKSMETHOD, KSEVENT, *PKSEVENT;
#define KSMETHOD_TYPE_NONE                  0x00000000
#define KSMETHOD_TYPE_READ                  0x00000001
#define KSMETHOD_TYPE_WRITE                 0x00000002
#define KSMETHOD_TYPE_MODIFY                0x00000003
#define KSMETHOD_TYPE_SOURCE                0x00000004
#define KSMETHOD_TYPE_SEND                  0x00000001
#define KSMETHOD_TYPE_SETSUPPORT            0x00000100
#define KSMETHOD_TYPE_BASICSUPPORT          0x00000200
#define KSPROPERTY_TYPE_GET                 0x00000001
#define KSPROPERTY_TYPE_SET                 0x00000002
#define KSPROPERTY_TYPE_SETSUPPORT          0x00000100
#define KSPROPERTY_TYPE_BASICSUPPORT        0x00000200
#define KSPROPERTY_TYPE_RELATIONS           0x00000400
#define KSPROPERTY_TYPE_SERIALIZESET        0x00000800
#define KSPROPERTY_TYPE_UNSERIALIZESET      0x00001000
#define KSPROPERTY_TYPE_SERIALIZERAW        0x00002000
#define KSPROPERTY_TYPE_UNSERIALIZERAW      0x00004000
#define KSPROPERTY_TYPE_SERIALIZESIZE       0x00008000
#define KSPROPERTY_TYPE_DEFAULTVALUES       0x00010000
#define KSPROPERTY_TYPE_TOPOLOGY            0x10000000
#endif
#ifndef _IKsControl_
#define _IKsControl_
#ifdef DECLARE_INTERFACE_
#undef INTERFACE
#define INTERFACE IKsControl
DECLARE_INTERFACE_(IKsControl, IUnknown)
{
	STDMETHOD(QueryInterface) (THIS_ REFIID, LPVOID FAR *);
	STDMETHOD_(ULONG, AddRef) (THIS);
	STDMETHOD_(ULONG, Release) (THIS);
	STDMETHOD(KsProperty) (THIS_ PKSPROPERTY Property, ULONG PropertyLength, LPVOID PropertyData, ULONG DataLength, ULONG * BytesReturned);
	STDMETHOD(KsMethod) (THIS_ PKSMETHOD Method, ULONG MethodLength, LPVOID MethodData, ULONG DataLength, ULONG * BytesReturned);
	STDMETHOD(KsEvent) (THIS_ PKSEVENT Event, ULONG EventLength, LPVOID EventData, ULONG DataLength, ULONG * BytesReturned);
};
#endif
#endif
#include <poppack.h>
DEFINE_GUID(IID_IKsControl, 0x28F54685, 0x06FD, 0x11D2, 0xB2, 0x7A, 0x00, 0xA0, 0xC9, 0x22, 0x31, 0x96);
#ifndef _KSMEDIA_
DEFINE_GUID(KSDATAFORMAT_SUBTYPE_MIDI, 0x1D262760L, 0xE957, 0x11CF, 0xA5, 0xD6, 0x28, 0xDB, 0x04, 0xC1, 0x00, 0x00);
DEFINE_GUID(KSDATAFORMAT_SUBTYPE_DIRECTMUSIC, 0x1a82f8bc,  0x3f8b, 0x11d2, 0xb7, 0x74, 0x00, 0x60, 0x08, 0x33, 0x16, 0xc1);
#endif
#endif

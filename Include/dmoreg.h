/*+@@file@@----------------------------------------------------------------*//*!
 \file		dmoreg.h
 \par Description 
            Extension and update of headers for PellesC compiler suite.
 \par Project: 
            PellesC Headers extension
 \date		Created  on Sun Jun 19 16:48:06 2016
 \date		Modified on Sun Jun 19 16:48:06 2016
 \author	frankie
\*//*-@@file@@----------------------------------------------------------------*/

#ifndef __DMOREG_H__
#define __DMOREG_H__
#if __POCC__ >= 500
#pragma once
#endif
#include "mediaobj.h"
DEFINE_GUID(DMOCATEGORY_AUDIO_DECODER, 0x57f2db8b,0xe6bb,0x4513,0x9d,0x43,0xdc,0xd2,0xa6,0x59,0x31,0x25);
DEFINE_GUID(DMOCATEGORY_AUDIO_ENCODER, 0x33D9A761,0x90C8,0x11d0,0xBD,0x43,0x00,0xA0,0xC9,0x11,0xCE,0x86);
DEFINE_GUID(DMOCATEGORY_VIDEO_DECODER, 0x4a69b442,0x28be,0x4991,0x96,0x9c,0xb5,0x00,0xad,0xf5,0xd8,0xa8);
DEFINE_GUID(DMOCATEGORY_VIDEO_ENCODER, 0x33D9A760,0x90C8,0x11d0,0xBD,0x43,0x00,0xA0,0xC9,0x11,0xCE,0x86);
DEFINE_GUID(DMOCATEGORY_AUDIO_EFFECT, 0xf3602b3f,0x0592,0x48df,0xa4,0xcd,0x67,0x47,0x21,0xe7,0xeb,0xeb);
DEFINE_GUID(DMOCATEGORY_VIDEO_EFFECT, 0xd990ee14,0x776c,0x4723,0xbe,0x46,0x3d,0xa2,0xf5,0x6f,0x10,0xb9);
DEFINE_GUID(DMOCATEGORY_AUDIO_CAPTURE_EFFECT, 0xf665aaba,0x3e09,0x4920,0xaa,0x5f,0x21,0x98,0x11,0x14,0x8f,0x09);
DEFINE_GUID(DMOCATEGORY_ACOUSTIC_ECHO_CANCEL, 0xBF963D80L, 0xC559, 0x11D0, 0x8A, 0x2B, 0x00, 0xA0, 0xC9, 0x25, 0x5A, 0xC1);
DEFINE_GUID(DMOCATEGORY_AUDIO_NOISE_SUPPRESS, 0xe07f903f, 0x62fd, 0x4e60, 0x8c, 0xdd, 0xde, 0xa7, 0x23, 0x66, 0x65, 0xb5);
DEFINE_GUID(DMOCATEGORY_AGC, 0xE88C9BA0L, 0xC557, 0x11D0, 0x8A, 0x2B, 0x00, 0xA0, 0xC9, 0x25, 0x5A, 0xC1);
typedef struct _DMO_PARTIAL_MEDIATYP
{
   GUID type;
   GUID subtype;
} DMO_PARTIAL_MEDIATYPE, *PDMO_PARTIAL_MEDIATYPE;
typedef enum DMO_REGISTER_FLAGS
{
   DMO_REGISTERF_IS_KEYED = 0x00000001
} DMO_REGISTER_FLAGS;
typedef enum DMO_ENUM_FLAGS
{
   DMO_ENUMF_INCLUDE_KEYED = 0x00000001
} DMO_ENUM_FLAGS;
STDAPI DMORegister(LPCWSTR szName, REFCLSID clsidDMO, REFGUID guidCategory, DWORD dwFlags, DWORD cInTypes, const DMO_PARTIAL_MEDIATYPE *pInTypes, DWORD cOutTypes, const DMO_PARTIAL_MEDIATYPE *pOutTypes);
STDAPI DMOUnregister(REFCLSID clsidDMO, REFGUID guidCategory);
STDAPI DMOEnum(REFGUID guidCategory, DWORD dwFlags, DWORD cInTypes, const DMO_PARTIAL_MEDIATYPE *pInTypes, DWORD cOutTypes, const DMO_PARTIAL_MEDIATYPE *pOutTypes, IEnumDMO **ppEnum);
STDAPI DMOGetTypes(REFCLSID clsidDMO, unsigned long ulInputTypesRequested, unsigned long *pulInputTypesSupplied, DMO_PARTIAL_MEDIATYPE *pInputTypes, unsigned long ulOutputTypesRequested, unsigned long *pulOutputTypesSupplied, DMO_PARTIAL_MEDIATYPE *pOutputTypes);
STDAPI DMOGetName(REFCLSID clsidDMO, WCHAR szName[80]);
#endif



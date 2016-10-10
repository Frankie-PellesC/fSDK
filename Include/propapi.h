/*+@@file@@----------------------------------------------------------------*//*!
 \file		propapi.h
 \par Description 
            Extension and update of headers for PellesC compiler suite.
 \par Project: 
            PellesC Headers extension
 \date		Created  on Mon Sep 12 00:40:16 2016
 \date		Modified on Mon Sep 12 00:40:16 2016
 \author	frankie
\*//*-@@file@@----------------------------------------------------------------*/

#ifndef _PROPAPI_H_
#define _PROPAPI_H_
#if __POCC__ >= 500
#pragma once
#endif
typedef VOID* NTPROP;
#include <propidl.h>
ULONG __stdcall StgPropertyLengthAsVariant(const SERIALIZEDPROPERTYVALUE *pProp, ULONG cbProp, USHORT CodePage, BYTE bReserved);
#endif

/*+@@file@@----------------------------------------------------------------*//*!
 \file		UIRibbonKeydef.h
 \par Description 
            Extension and update of headers for PellesC compiler suite.
 \par Project: 
            PellesC Headers extension
 \date		Created  on Sun Sep  4 19:23:03 2016
 \date		Modified on Sun Sep  4 19:23:03 2016
 \author	frankie
\*//*-@@file@@----------------------------------------------------------------*/

#if __POCC__ >= 500
#pragma once
#endif
#include <propkeydef.h>
#define DEFINE_UIPROPERTYKEY(name, type, index) extern const PROPERTYKEY DECLSPEC_SELECTANY name = { { 0x00000000 + index, 0x7363, 0x696e, { 0x84, 0x41, 0x79, 0x8a, 0xcf, 0x5a, 0xeb, 0xb7 } }, type }

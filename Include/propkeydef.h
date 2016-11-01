/*+@@file@@----------------------------------------------------------------*//*!
 \file		propkeydef.h
 \par Description 
            Extension and update of headers for PellesC compiler suite.
 \par Project: 
            PellesC Headers extension
 \date		Created  on Tue Jun 28 19:42:36 2016
 \date		Modified on Tue Jun 28 19:42:36 2016
 \author	frankie
\*//*-@@file@@----------------------------------------------------------------*/

#ifndef __propkeydef_h__
#define __propkeydef_h__
#if __POCC__ >= 500
#pragma once
#endif
#ifndef PID_FIRST_USABLE
#define PID_FIRST_USABLE 2
#endif
#ifndef REFPROPERTYKEY
#define REFPROPERTYKEY const PROPERTYKEY * __MIDL_CONST
#endif
#ifdef DEFINE_PROPERTYKEY
#undef DEFINE_PROPERTYKEY
#endif
#ifdef INITGUID
#define DEFINE_PROPERTYKEY(name, l, w1, w2, b1, b2, b3, b4, b5, b6, b7, b8, pid) extern const PROPERTYKEY DECLSPEC_SELECTANY name = { { l, w1, w2, { b1, b2,  b3,  b4,  b5,  b6,  b7,  b8 } }, pid }
#else
#define DEFINE_PROPERTYKEY(name, l, w1, w2, b1, b2, b3, b4, b5, b6, b7, b8, pid) extern const PROPERTYKEY name
#endif
#ifndef IsEqualPropertyKey
#define IsEqualPropertyKey(a, b)   (((a)->pid == (b)->pid) && IsEqualIID(&((a)->fmtid), &((b)->fmtid)) )
#endif
#ifndef _PROPERTYKEY_EQUALITY_OPERATORS_
#define _PROPERTYKEY_EQUALITY_OPERATORS_
#endif
#endif

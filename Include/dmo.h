/*+@@file@@----------------------------------------------------------------*//*!
 \file		dmo.h
 \par Description 
            Extension and update of headers for PellesC compiler suite.
 \par Project: 
            PellesC Headers extension
 \date		Created  on Sun Jun 19 16:44:30 2016
 \date		Modified on Sun Jun 19 16:44:30 2016
 \author	frankie
\*//*-@@file@@----------------------------------------------------------------*/
#if __POCC__ >= 500
#pragma once
#endif

#ifndef __DMO_H__
#define __DMO_H__
#include "mediaerr.h"
#ifdef FIX_LOCK_NAME
#define Lock DMOLock
#endif
#include "mediaobj.h"
#ifdef FIX_LOCK_NAME
#undef Lock
#endif
#include "dmoreg.h"
#include "dmort.h"
#endif



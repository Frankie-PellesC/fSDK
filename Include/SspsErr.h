/*+@@file@@----------------------------------------------------------------*//*!
 \file		SspsErr.h
 \par Description 
            Extension and update of headers for PellesC compiler suite.
 \par Project: 
            PellesC Headers extension
 \date		Created  on Sat Sep 17 01:21:19 2016
 \date		Modified on Sat Sep 17 01:21:19 2016
 \author	frankie
\*//*-@@file@@----------------------------------------------------------------*/

#ifndef __SSPSERR_H__
#define __SSPSERR_H__
#if __POCC__ >= 500
#pragma once
#endif
#ifndef SCARD_S_SUCCESS
#include "scarderr.h"
#endif
#ifdef _DEBUG
#pragma message("sspserr.h is obsolete.")
#endif
#endif

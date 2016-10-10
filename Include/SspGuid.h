/*+@@file@@----------------------------------------------------------------*//*!
 \file		SspGuid.h
 \par Description 
            Extension and update of headers for PellesC compiler suite.
 \par Project: 
            PellesC Headers extension
 \date		Created  on Sat Sep 17 01:15:14 2016
 \date		Modified on Sat Sep 17 01:15:14 2016
 \author	frankie
\*//*-@@file@@----------------------------------------------------------------*/

#ifndef _SSPGUID_H_
#define _SSPGUID_H_
#if __POCC__ >= 500
#pragma once
#endif
#define IID_DEFINED
#include "scardssp_i.c"
#ifndef CLSCTX_LOCAL
#define CLSCTX_LOCAL            (CLSCTX_INPROC_SERVER | CLSCTX_INPROC_HANDLER | CLSCTX_LOCAL_SERVER)
#endif
#endif

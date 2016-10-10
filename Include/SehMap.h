/*+@@file@@----------------------------------------------------------------*//*!
 \file		SehMap.h
 \par Description 
            Extension and update of headers for PellesC compiler suite.
 \par Project: 
            PellesC Headers extension
 \date		Created  on Fri Sep 16 23:10:41 2016
 \date		Modified on Fri Sep 16 23:10:41 2016
 \author	frankie
\*//*-@@file@@----------------------------------------------------------------*/

#if __POCC__ >= 500
#pragma once
#endif
#undef try
#undef except
#undef finally
#undef leave
#define try     __try
#define except  __except
#define finally __finally
#define leave   __leave

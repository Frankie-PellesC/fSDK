/*+@@file@@----------------------------------------------------------------*//*!
 \file		polarity.h
 \par Description 
            Extension and update of headers for PellesC compiler suite.
 \par Project: 
            PellesC Headers extension
 \date		Created  on Sun Jul  3 16:27:21 2016
 \date		Modified on Sun Jul  3 16:27:21 2016
 \author	frankie
\*//*-@@file@@----------------------------------------------------------------*/

//ONLY C++
#if __POCC__ >= 500
#pragma once
#endif
#ifndef POLARITY_HEADERFILE_IS_INCLUDED
#define POLARITY_HEADERFILE_IS_INCLUDED
 #ifdef USE_POLARITY
  #ifdef BUILDING_DLL
   #define POLARITY __declspec( dllexport )
  #else
   #define POLARITY __declspec( dllimport )
  #endif
 #else
  #define POLARITY
 #endif
#endif

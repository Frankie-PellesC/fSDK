/*+@@file@@----------------------------------------------------------------*//*!
 \file		tpcver.h
 \par Description 
            Extension and update of headers for PellesC compiler suite.
 \par Project: 
            PellesC Headers extension
 \date		Created  on Sat Sep 17 12:51:48 2016
 \date		Modified on Sat Sep 17 12:51:48 2016
 \author	frankie
\*//*-@@file@@----------------------------------------------------------------*/

#ifndef TPCVER_H__
#define TPCVER_H__
#if __POCC__ >= 500
#pragma once
#endif
#ifdef VER_PRODUCTBUILD
#undef VER_PRODUCTBUILD
#endif
#define VER_PRODUCTBUILD 3027
#ifdef VER_PRODUCTBUILD_QFE
#undef VER_PRODUCTBUILD_QFE
#endif
#define VER_PRODUCTBUILD_QFE 0
#endif

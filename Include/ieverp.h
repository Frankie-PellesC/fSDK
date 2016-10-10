/*+@@file@@----------------------------------------------------------------*//*!
 \file		ieverp.h
 \par Description 
            Extension and update of headers for PellesC compiler suite.
 \par Project: 
            PellesC Headers extension
 \date		Created  on Sat Jul 16 20:41:46 2016
 \date		Modified on Sat Jul 16 20:41:46 2016
 \author	frankie
\*//*-@@file@@----------------------------------------------------------------*/

#ifndef __ieverp_h__
#define __ieverp_h__
#if __POCC__ >= 500
#pragma once
#endif
#define VER_USE_OTHER_MAJOR_MINOR_VER
#define VER_PRODUCTMAJORVERSION         8
#define VER_PRODUCTMINORVERSION         00
#define VER_PRODUCTVERSION_W            (0x0800)
#define VER_PRODUCTVERSION_DW           (0x08000000 | VER_PRODUCTBUILD)
#ifdef RC_INVOKED
#define VER_PRODUCTNAME_STR L"Windows\256 Internet Explorer"
#else
#define VER_PRODUCTNAME_STR "Windows (R) Internet Explorer"
#endif
//#include <ntverp.h>
#define USE_IE_COMPONENT_VERSIONS
#define VER_IEPACKAGEVERSION                17136
#ifdef USE_IE_COMPONENT_VERSIONS
#define VER_IEMAJORVERSION                  8
#define VER_IEMINORVERSION                  0
#define VER_IEBUILDVERSION                  VER_PRODUCTBUILD
#define VER_IEQFEVERSION                    VER_PRODUCTBUILD_QFE
#else
#define VER_IEMAJORVERSION                  VER_PRODUCTMAJORVERSION
#define VER_IEMINORVERSION                  VER_PRODUCTMINORVERSION
#define VER_IEBUILDVERSION                  VER_PRODUCTBUILD
#define VER_IEQFEVERSION                    VER_PRODUCTBUILD_QFE
#endif
#define VER_IEVERSION                       VER_IEMAJORVERSION,VER_IEMINORVERSION,VER_IEBUILDVERSION,VER_IEQFEVERSION
#define VER_IEVERSION_MAJORMINOR2(x,y)      #x "." #y
#define VER_IEVERSION_MAJORMINOR1(x,y)      VER_IEVERSION_MAJORMINOR2(x, y)
#define VER_IEVERSION_STRING                VER_IEVERSION_MAJORMINOR1(VER_IEMAJORVERSION, VER_IEMINORVERSION)
#define VER_IEVERSION_STR2(x,y)             VER_IEVERSION_STRING "." VER_BPAD #x "." #y
#define VER_IEVERSION_STR1(x,y)             VER_IEVERSION_STR2(x, y)
#define VER_IEVERSION_STR                   VER_IEVERSION_STR1(VER_IEBUILDVERSION, VER_IEQFEVERSION)
#endif

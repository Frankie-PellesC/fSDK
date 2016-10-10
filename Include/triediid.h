/*+@@file@@----------------------------------------------------------------*//*!
 \file		triediid.h
 \par Description 
            Extension and update of headers for PellesC compiler suite.
 \par Project: 
            PellesC Headers extension
 \date		Created  on Sat Sep 17 12:54:33 2016
 \date		Modified on Sat Sep 17 12:54:33 2016
 \author	frankie
\*//*-@@file@@----------------------------------------------------------------*/

#ifndef _triediid_h_
#define _triediid_h_
#if __POCC__ >= 500
#pragma once
#endif
extern const GUID  GUID_TriEditCommandGroup;
extern const IID   IID_ITriEditDocument;
extern const IID   LIBID_TRIEDITLib;
extern const CLSID CLSID_TriEditDocument;
DEFINE_GUID(GUID_TriEditCommandGroup, 0x2582f1c0, 0x084e, 0x11d1, 0x9a, 0x0e, 0x00, 0x60, 0x97, 0xc9, 0xb3, 0x44);
DEFINE_GUID(IID_ITriEditDocument, 0x438DA5DF, 0xF171, 0x11D0, 0x98, 0x4E, 0x00, 0x00, 0xF8, 0x02, 0x70, 0xF8);
DEFINE_GUID(LIBID_TRIEDITLib, 0x438DA5D1, 0xF171, 0x11D0, 0x98, 0x4E, 0x00, 0x00, 0xF8, 0x02, 0x70, 0xF8);
DEFINE_GUID(CLSID_TriEditDocument, 0x438DA5E0, 0xF171, 0x11D0, 0x98, 0x4E, 0x00, 0x00, 0xF8, 0x02, 0x70, 0xF8);
#endif

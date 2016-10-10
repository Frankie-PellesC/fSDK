/*+@@file@@----------------------------------------------------------------*//*!
 \file		Idf.h
 \par Description 
            Extension and update of headers for PellesC compiler suite.
 \par Project: 
            PellesC Headers extension
 \date		Created  on Sat Jul 16 20:18:23 2016
 \date		Modified on Sat Jul 16 20:18:23 2016
 \author	frankie
\*//*-@@file@@----------------------------------------------------------------*/

#ifndef __IDF_H__
#define __IDF_H__
#if __POCC__ >= 500
#pragma once
#endif
typedef struct tag_IDFHEADER
{
   DWORD cbStruct;
   DWORD dwVersion;
   DWORD dwCreator;
   DWORD cbInstID;
   BYTE  abInstID[1];
} IDFHEADER, *PIDFHEADER, FAR *LPIDFHEADER;
typedef struct tag_IDFINSTINFO
{
   DWORD cbStruct;
   DWORD dwManufactID;
   DWORD dwProductID;
   DWORD dwRevision;
   DWORD cbManufactASCII;
   DWORD cbManufactUNICODE;
   DWORD cbProductASCII;
   DWORD cbProductUNICODE;
   BYTE  abData[1];
} IDFINSTINFO, FAR *LPIDFINSTINFO;
typedef struct tag_IDFINSTCAPS
{
   DWORD cbStruct;
   DWORD fdwFlags;
   DWORD dwBasicChannel;
   DWORD cNumChannels;
   DWORD cInstrumentPolyphony;
   DWORD cChannelPolyphony;
} IDFINSTCAPS, *PIDFINSTCAPS, FAR *LPIDFINSTCAPS;
#define  IDFINSTCAPS_F_GENERAL_MIDI       0x00000001
#define  IDFINSTCAPS_F_SYSTEMEXCLUSIVE    0x00000002
typedef struct tag_IDFCHANNELHDR
{
   DWORD cbStruct;
   DWORD dwGeneralMask;
   DWORD dwDrumMask;
   DWORD dwReserved;
   DWORD fdwFlags;
} IDFCHANNELHDR, *PIDFCHANNELHDR, FAR *LPIDFCHANNELHDR;
#define  IDFCHANNELHDR_F_GENERAL_MIDI     0x00000001
typedef struct tag_IDFCHANNELINFO
{
   DWORD cbStruct;
   DWORD dwChannel;
   DWORD cbInitData;
   BYTE  abData[];
} IDFCHANNELINFO, *PIDFCHANNELINFO, FAR *LPIDFCHANNELINFO;
typedef struct tag_IDFPATCHMAPHDR
{
   DWORD cbStruct;
   BYTE  abPatchMap[128];
           
} IDFPATCHMAPHDR, *PIDFPATCHMAPHDR, FAR *LPIDFPATCHMAPHDR;
typedef struct tag_IDFKEYMAPHDR
{
   DWORD cbStruct;
   DWORD cNumKeyMaps;
   DWORD cbKeyMap;
} IDFKEYMAPHDR, *PIDFKEYMAPHDR, FAR *LPIDFKEYMAPHDR;
typedef struct tag_IDFKEYMAP
{
   DWORD cbStruct;
   BYTE  abKeyMap[128];
} IDFKEYMAP, *PIDFKEYMAP, FAR *LPIDFKEYMAP;
#endif

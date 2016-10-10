/*+@@file@@----------------------------------------------------------------*//*!
 \file		dls2.h
 \par Description 
            Extension and update of headers for PellesC compiler suite.
 \par Project: 
            PellesC Headers extension
 \date		Created  on Sun Jun 19 16:40:40 2016
 \date		Modified on Sun Jun 19 16:40:40 2016
 \author	frankie
\*//*-@@file@@----------------------------------------------------------------*/

#ifndef _INC_DLS2
#define _INC_DLS2
#if __POCC__ >= 500
#pragma once
#endif
#define FOURCC_RGN2  mmioFOURCC('r','g','n','2')
#define FOURCC_LAR2  mmioFOURCC('l','a','r','2')
#define FOURCC_ART2  mmioFOURCC('a','r','t','2')
#define FOURCC_CDL   mmioFOURCC('c','d','l',' ')
#define FOURCC_DLID  mmioFOURCC('d','l','i','d')
#define CONN_SRC_POLYPRESSURE		0x0007	
#define CONN_SRC_CHANNELPRESSURE		0x0008	
#define CONN_SRC_VIBRATO			0x0009	
#define CONN_SRC_MONOPRESSURE       	0x000a  
#define CONN_SRC_CC91			0x00db	
#define CONN_SRC_CC93			0x00dd	
#define CONN_DST_GAIN			0x0001	
#define CONN_DST_KEYNUMBER 0x0005  
#define CONN_DST_LEFT			0x0010	
#define CONN_DST_RIGHT			0x0011	
#define CONN_DST_CENTER			0x0012	
#define CONN_DST_LEFTREAR			0x0013	
#define CONN_DST_RIGHTREAR			0x0014	
#define CONN_DST_LFE_CHANNEL		0x0015	
#define CONN_DST_CHORUS			0x0080	
#define CONN_DST_REVERB			0x0081	
#define CONN_DST_VIB_FREQUENCY		0x0114	
#define CONN_DST_VIB_STARTDELAY		0x0115	
#define CONN_DST_EG1_DELAYTIME		0x020B	
#define CONN_DST_EG1_HOLDTIME		0x020C	
#if (NTDDI_VERSION >= NTDDI_WINXP)
#define CONN_DST_EG1_SHUTDOWNTIME	0x020D	
#endif
#define CONN_DST_EG2_DELAYTIME		0x030F	
#define CONN_DST_EG2_HOLDTIME		0x0310	
#define CONN_DST_FILTER_CUTOFF		0x0500	
#define CONN_DST_FILTER_Q			0x0501	
#define CONN_TRN_CONVEX			0x0002	
#define CONN_TRN_SWITCH			0x0003	
 #define DLS_CDL_AND			0x0001	
 #define DLS_CDL_OR			0x0002	
 #define DLS_CDL_XOR			0x0003	
 #define DLS_CDL_ADD			0x0004	
 #define DLS_CDL_SUBTRACT		0x0005	
 #define DLS_CDL_MULTIPLY		0x0006	
 #define DLS_CDL_DIVIDE		0x0007	
 #define DLS_CDL_LOGICAL_AND	0x0008	
 #define DLS_CDL_LOGICAL_OR		0x0009	
 #define DLS_CDL_LT			0x000A	
 #define DLS_CDL_LE			0x000B	
 #define DLS_CDL_GT			0x000C	
 #define DLS_CDL_GE			0x000D	
 #define DLS_CDL_EQ			0x000E	
 #define DLS_CDL_NOT			0x000F	
 #define DLS_CDL_CONST		0x0010	
 #define DLS_CDL_QUERY		0x0011	
 #define DLS_CDL_QUERYSUPPORTED	0x0012	
#if (NTDDI_VERSION < NTDDI_WINXP)
#define WLOOP_TYPE_RELEASE 2
#else
#define WLOOP_TYPE_RELEASE 1
#endif
#if (NTDDI_VERSION >= NTDDI_WINXP)
#define F_WAVELINK_MULTICHANNEL 0x0002
#endif
#define F_WAVELINK_MULTICHANNEL 0x0002
DEFINE_GUID(DLSID_GMInHardware, 0x178f2f24, 0xc364, 0x11d1, 0xa7, 0x60, 0x00, 0x00, 0xf8, 0x75, 0xac, 0x12);
DEFINE_GUID(DLSID_GSInHardware, 0x178f2f25, 0xc364, 0x11d1, 0xa7, 0x60, 0x00, 0x00, 0xf8, 0x75, 0xac, 0x12);
DEFINE_GUID(DLSID_XGInHardware, 0x178f2f26, 0xc364, 0x11d1, 0xa7, 0x60, 0x00, 0x00, 0xf8, 0x75, 0xac, 0x12);
DEFINE_GUID(DLSID_SupportsDLS1, 0x178f2f27, 0xc364, 0x11d1, 0xa7, 0x60, 0x00, 0x00, 0xf8, 0x75, 0xac, 0x12);
DEFINE_GUID(DLSID_SupportsDLS2, 0xf14599e5, 0x4689, 0x11d2, 0xaf, 0xa6, 0x0, 0xaa, 0x0, 0x24, 0xd8, 0xb6);
DEFINE_GUID(DLSID_SampleMemorySize, 0x178f2f28, 0xc364, 0x11d1, 0xa7, 0x60, 0x00, 0x00, 0xf8, 0x75, 0xac, 0x12);
DEFINE_GUID(DLSID_ManufacturersID, 0xb03e1181, 0x8095, 0x11d2, 0xa1, 0xef, 0x0, 0x60, 0x8, 0x33, 0xdb, 0xd8);
DEFINE_GUID(DLSID_ProductID, 0xb03e1182, 0x8095, 0x11d2, 0xa1, 0xef, 0x0, 0x60, 0x8, 0x33, 0xdb, 0xd8);
DEFINE_GUID(DLSID_SamplePlaybackRate, 0x2a91f713, 0xa4bf, 0x11d2, 0xbb, 0xdf, 0x0, 0x60, 0x8, 0x33, 0xdb, 0xd8);
#endif



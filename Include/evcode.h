/*+@@file@@----------------------------------------------------------------*//*!
 \file		evcode.h
 \par Description 
			List of standard Quartz event codes and the expected params.
 \par  Status: 
			
 \par Project: 
			PellesC Headers extension
 \date		Created  on Sun Mar 15 00:11:16 2015
 \date		Modified on Sun Mar 15 00:11:16 2015
 \author	Frankie
\*//*-@@file@@----------------------------------------------------------------*/
#ifndef EVCODE_H
#define EVCODE_H
#if __POCC__ >= 500
#pragma once
#endif
#define EC_SYSTEMBASE					0x00
#define EC_USER 						0x8000
#define EC_COMPLETE 					0x01
#define EC_USERABORT					0x02
#define EC_ERRORABORT					0x03
#define EC_TIME 						0x04
#define EC_REPAINT						0x05
#define EC_STREAM_ERROR_STOPPED 		0x06
#define EC_STREAM_ERROR_STILLPLAYING	0x07
#define EC_ERROR_STILLPLAYING			0x08
#define EC_PALETTE_CHANGED				0x09
#define EC_VIDEO_SIZE_CHANGED			0x0A
#define EC_QUALITY_CHANGE				0x0B
#define EC_SHUTTING_DOWN				0x0C
#define EC_CLOCK_CHANGED				0x0D
#define EC_PAUSED						0x0E
#define EC_OPENING_FILE 				0x10
#define EC_BUFFERING_DATA				0x11
#define EC_FULLSCREEN_LOST				0x12
#define EC_ACTIVATE 					0x13
#define EC_NEED_RESTART 				0x14
#define EC_WINDOW_DESTROYED 			0x15
#define EC_DISPLAY_CHANGED				0x16
#define EC_STARVATION					0x17
#define EC_OLE_EVENT					0x18
#define EC_NOTIFY_WINDOW				0x19
#define EC_STREAM_CONTROL_STOPPED		0x1A
#define EC_STREAM_CONTROL_STARTED		0x1B
#define EC_END_OF_SEGMENT				0x1C
#define EC_SEGMENT_STARTED				0x1D
#define EC_LENGTH_CHANGED				0x1E
#define EC_DEVICE_LOST					0x1f
#define EC_SAMPLE_NEEDED				0x20
#define EC_PROCESSING_LATENCY			0x21
#define EC_SAMPLE_LATENCY				0x22
#define EC_SCRUB_TIME					0x23
#define EC_STEP_COMPLETE				0x24
#define EC_TIMECODE_AVAILABLE			0x30
#define EC_EXTDEVICE_MODE_CHANGE		0x31
#define EC_STATE_CHANGE 				0x32
#define EC_GRAPH_CHANGED				0x50
#define EC_CLOCK_UNSET					0x51
#define EC_VMR_RENDERDEVICE_SET 		0x53
#define VMR_RENDER_DEVICE_OVERLAY		0x01
#define VMR_RENDER_DEVICE_VIDMEM		0x02
#define VMR_RENDER_DEVICE_SYSMEM		0x04
#define EC_VMR_SURFACE_FLIPPED			0x54
#define EC_VMR_RECONNECTION_FAILED		0x55
#define EC_PREPROCESS_COMPLETE			0x56
#define EC_CODECAPI_EVENT				0x57
#ifndef AM_WMT_EVENT_DATA_DEFINED
#define AM_WMT_EVENT_DATA_DEFINED
typedef struct {
	HRESULT hrStatus;
	void * pData;
} AM_WMT_EVENT_DATA;
#endif
#define EC_WMT_EVENT_BASE				0x0251
#define EC_WMT_INDEX_EVENT				EC_WMT_EVENT_BASE
#define EC_WMT_EVENT					EC_WMT_EVENT_BASE+1
#define EC_BUILT						0x300
#define EC_UNBUILT						0x301
#define EC_SKIP_FRAMES					0x25
#define EC_PLEASE_REOPEN				0x40
#define EC_STATUS						0x41
#define EC_MARKER_HIT					0x42
#define EC_LOADSTATUS					0x43
#define EC_FILE_CLOSED					0x44
#define EC_ERRORABORTEX					0x45
#define AM_LOADSTATUS_CLOSED			0x0000
#define AM_LOADSTATUS_LOADINGDESCR		0x0001
#define AM_LOADSTATUS_LOADINGMCAST		0x0002
#define AM_LOADSTATUS_LOCATING			0x0003
#define AM_LOADSTATUS_CONNECTING		0x0004
#define AM_LOADSTATUS_OPENING			0x0005
#define AM_LOADSTATUS_OPEN				0x0006
#define EC_NEW_PIN				 		0x20
#define	EC_RENDER_FINISHED				0x21
#define EC_EOS_SOON						0x046
#define EC_CONTENTPROPERTY_CHANGED		0x47
#define AM_CONTENTPROPERTY_TITLE		0x0001
#define AM_CONTENTPROPERTY_AUTHOR		0x0002
#define AM_CONTENTPROPERTY_COPYRIGHT	0x0004
#define AM_CONTENTPROPERTY_DESCRIPTION	0x0008
#define EC_BANDWIDTHCHANGE				0x48
#define EC_VIDEOFRAMEREADY				0x49
#endif

/*+@@file@@----------------------------------------------------------------*//*!
 \file		dmusici.h
 \par Description 
            Extension and update of headers for PellesC compiler suite.
 \par Project: 
            PellesC Headers extension
 \date		Created  on Sat Nov 26 23:46:43 2016
 \date		Modified on Sat Nov 26 23:46:43 2016
 \author	frankie
\*//*-@@file@@----------------------------------------------------------------*/

#ifndef _DMUSICI_
#define _DMUSICI_
#if __POCC__ >= 500
#pragma once
#endif
#include <windows.h>
#define COM_NO_WINDOWS_H
#include <objbase.h>
#include <mmsystem.h>
#include <dmusicc.h>
#include <dmplugin.h>
#include <pshpack8.h>
typedef WORD            TRANSITION_TYPE;
typedef __int64         REFERENCE_TIME;
typedef long            MUSIC_TIME;
#define MT_MIN          0x80000000
#define MT_MAX          0x7FFFFFFF
#define DMUS_PPQ        768
typedef interface IDirectMusicTrack IDirectMusicTrack;
typedef interface IDirectMusicPerformance IDirectMusicPerformance;
typedef interface IDirectMusicPerformance8 IDirectMusicPerformance8;
typedef interface IDirectMusicTool IDirectMusicTool;
typedef interface IDirectMusicSegment IDirectMusicSegment;
typedef interface IDirectMusicSegment8 IDirectMusicSegment8;
typedef interface IDirectMusicSegmentState IDirectMusicSegmentState;
typedef interface IDirectMusicSegmentState8 IDirectMusicSegmentState8;
typedef interface IDirectMusicGraph IDirectMusicGraph;
typedef interface IDirectMusicBuffer IDirectMusicBuffer;
typedef interface IDirectMusicInstrument IDirectMusicInstrument;
typedef interface IDirectMusicDownloadedInstrument IDirectMusicDownloadedInstrument;
typedef interface IDirectMusicBand IDirectMusicBand;
typedef interface IDirectMusicChordMap IDirectMusicChordMap;
typedef interface IDirectMusicLoader IDirectMusicLoader;
typedef interface IDirectMusicLoader8 IDirectMusicLoader8;
typedef interface IDirectMusicScript IDirectMusicScript;
typedef interface IDirectMusicObject IDirectMusicObject;
typedef interface IDirectMusicStyle8 IDirectMusicStyle8;
typedef interface IDirectMusicPatternTrack IDirectMusicPatternTrack;
typedef interface IDirectMusicContainer IDirectMusicContainer;
typedef interface IDirectMusicTool8 IDirectMusicTool8;
typedef interface IDirectMusicTrack8 IDirectMusicTrack8;
typedef interface IDirectMusicSong IDirectMusicSong;
typedef interface IDirectMusicAudioPath IDirectMusicAudioPath;

typedef enum enumDMUS_STYLET_TYPES
{
    DMUS_STYLET_PATTERN         = 0,
    DMUS_STYLET_MOTIF           = 1,
    DMUS_STYLET_FRAGMENT        = 2,
} DMUS_STYLET_TYPES;
typedef enum enumDMUS_COMMANDT_TYPES
{
    DMUS_COMMANDT_GROOVE            = 0,
    DMUS_COMMANDT_FILL              = 1,
    DMUS_COMMANDT_INTRO             = 2,
    DMUS_COMMANDT_BREAK             = 3,
    DMUS_COMMANDT_END               = 4,
    DMUS_COMMANDT_ENDANDINTRO       = 5
} DMUS_COMMANDT_TYPES;
typedef enum enumDMUS_SHAPET_TYPES
{
    DMUS_SHAPET_FALLING             = 0,
    DMUS_SHAPET_LEVEL               = 1,
    DMUS_SHAPET_LOOPABLE            = 2,
    DMUS_SHAPET_LOUD                = 3,
    DMUS_SHAPET_QUIET               = 4,
    DMUS_SHAPET_PEAKING             = 5,
    DMUS_SHAPET_RANDOM              = 6,
    DMUS_SHAPET_RISING              = 7,
    DMUS_SHAPET_SONG                = 8
}   DMUS_SHAPET_TYPES;
typedef enum enumDMUS_COMPOSEF_FLAGS
{       
    DMUS_COMPOSEF_NONE              = 0,
    DMUS_COMPOSEF_ALIGN             = 0x1,
    DMUS_COMPOSEF_OVERLAP           = 0x2,
    DMUS_COMPOSEF_IMMEDIATE         = 0x4,
    DMUS_COMPOSEF_GRID              = 0x8,
    DMUS_COMPOSEF_BEAT              = 0x10,
    DMUS_COMPOSEF_MEASURE           = 0x20,
    DMUS_COMPOSEF_AFTERPREPARETIME  = 0x40,
    DMUS_COMPOSEF_VALID_START_BEAT  = 0x80,
    DMUS_COMPOSEF_VALID_START_GRID  = 0x100,
    DMUS_COMPOSEF_VALID_START_TICK  = 0x200,
    DMUS_COMPOSEF_SEGMENTEND        = 0x400,
    DMUS_COMPOSEF_MARKER            = 0x800,
    DMUS_COMPOSEF_MODULATE          = 0x1000,
    DMUS_COMPOSEF_LONG              = 0x2000,
    DMUS_COMPOSEF_ENTIRE_TRANSITION = 0x4000,
    DMUS_COMPOSEF_1BAR_TRANSITION   = 0x8000,
    DMUS_COMPOSEF_ENTIRE_ADDITION   = 0x10000,
    DMUS_COMPOSEF_1BAR_ADDITION     = 0x20000,
    DMUS_COMPOSEF_VALID_START_MEASURE = 0x40000,
    DMUS_COMPOSEF_DEFAULT           = 0x80000,
    DMUS_COMPOSEF_NOINVALIDATE      = 0x100000,
    DMUS_COMPOSEF_USE_AUDIOPATH     = 0x200000,
    DMUS_COMPOSEF_INVALIDATE_PRI    = 0x400000
}   DMUS_COMPOSEF_FLAGS;
#define DMUS_PMSG_PART						\
    DWORD               dwSize;				\
    REFERENCE_TIME      rtTime;				\
    MUSIC_TIME          mtTime;				\
    DWORD               dwFlags;			\
    DWORD               dwPChannel;			\
    DWORD               dwVirtualTrackID;	\
    IDirectMusicTool*   pTool;				\
    IDirectMusicGraph*  pGraph;				\
    DWORD               dwType;				\
    DWORD               dwVoiceID;			\
    DWORD               dwGroupID;			\
    IUnknown*           punkUser;
typedef struct _DMUS_PMSG
{
    DMUS_PMSG_PART
} DMUS_PMSG;
#define DMUS_PCHANNEL_BROADCAST_PERFORMANCE	0xFFFFFFFF
#define DMUS_PCHANNEL_BROADCAST_AUDIOPATH   0xFFFFFFFE
#define DMUS_PCHANNEL_BROADCAST_SEGMENT	    0xFFFFFFFD
#define DMUS_PCHANNEL_BROADCAST_GROUPS  	0xFFFFFFFC
#define DMUS_PATH_SEGMENT          0x1000
#define DMUS_PATH_SEGMENT_TRACK    0x1100
#define DMUS_PATH_SEGMENT_GRAPH    0x1200
#define DMUS_PATH_SEGMENT_TOOL     0x1300
#define DMUS_PATH_AUDIOPATH        0x2000
#define DMUS_PATH_AUDIOPATH_GRAPH  0x2200
#define DMUS_PATH_AUDIOPATH_TOOL   0x2300
#define DMUS_PATH_PERFORMANCE      0x3000
#define DMUS_PATH_PERFORMANCE_GRAPH 0x3200
#define DMUS_PATH_PERFORMANCE_TOOL 0x3300
#define DMUS_PATH_PORT             0x4000
#define DMUS_PATH_BUFFER           0x6000
#define DMUS_PATH_BUFFER_DMO       0x6100
#define DMUS_PATH_MIXIN_BUFFER     0x7000 
#define DMUS_PATH_MIXIN_BUFFER_DMO 0x7100 
#define DMUS_PATH_PRIMARY_BUFFER   0x8000
#define DMUS_PCHANNEL_ALL           0xFFFFFFFB
#define DMUS_APATH_SHARED_STEREOPLUSREVERB   1
#define DMUS_APATH_DYNAMIC_3D                6
#define DMUS_APATH_DYNAMIC_MONO              7
#define DMUS_APATH_DYNAMIC_STEREO            8
typedef struct _DMUS_AUDIOPARAMS
{
    DWORD   dwSize;
    BOOL    fInitNow;
    DWORD 	dwValidData;
    DWORD   dwFeatures;
    DWORD   dwVoices;
    DWORD   dwSampleRate;
    CLSID   clsidDefaultSynth;
} DMUS_AUDIOPARAMS;
#define DMUS_AUDIOF_3D          0x1
#define DMUS_AUDIOF_ENVIRON     0x2
#define DMUS_AUDIOF_EAX         0x4
#define DMUS_AUDIOF_DMOS        0x8
#define DMUS_AUDIOF_STREAMING   0x10
#define DMUS_AUDIOF_BUFFERS     0x20
#define DMUS_AUDIOF_ALL         0x3F
#define DMUS_AUDIOPARAMS_FEATURES       0x00000001
#define DMUS_AUDIOPARAMS_VOICES         0x00000002
#define DMUS_AUDIOPARAMS_SAMPLERATE     0x00000004
#define DMUS_AUDIOPARAMS_DEFAULTSYNTH   0x00000008
typedef enum enumDMUS_PMSGF_FLAGS
{
    DMUS_PMSGF_REFTIME          = 1,
    DMUS_PMSGF_MUSICTIME        = 2,
    DMUS_PMSGF_TOOL_IMMEDIATE   = 4, 
    DMUS_PMSGF_TOOL_QUEUE       = 8,
    DMUS_PMSGF_TOOL_ATTIME      = 0x10,
    DMUS_PMSGF_TOOL_FLUSH       = 0x20,
    DMUS_PMSGF_LOCKTOREFTIME    = 0x40,
    DMUS_PMSGF_DX8              = 0x80
} DMUS_PMSGF_FLAGS;
typedef enum enumDMUS_PMSGT_TYPES
{
    DMUS_PMSGT_MIDI             = 0,
    DMUS_PMSGT_NOTE             = 1,
    DMUS_PMSGT_SYSEX            = 2,
    DMUS_PMSGT_NOTIFICATION     = 3,
    DMUS_PMSGT_TEMPO            = 4,
    DMUS_PMSGT_CURVE            = 5,
    DMUS_PMSGT_TIMESIG          = 6,
    DMUS_PMSGT_PATCH            = 7,
    DMUS_PMSGT_TRANSPOSE        = 8,
    DMUS_PMSGT_CHANNEL_PRIORITY = 9,
    DMUS_PMSGT_STOP             = 10,
    DMUS_PMSGT_DIRTY            = 11,
    DMUS_PMSGT_WAVE             = 12,
    DMUS_PMSGT_LYRIC            = 13,
    DMUS_PMSGT_SCRIPTLYRIC      = 14,
    DMUS_PMSGT_USER             = 255
} DMUS_PMSGT_TYPES;
typedef enum enumDMUS_SEGF_FLAGS
{
    DMUS_SEGF_REFTIME           = 1<<6,
    DMUS_SEGF_SECONDARY         = 1<<7,
    DMUS_SEGF_QUEUE             = 1<<8,
    DMUS_SEGF_CONTROL           = 1<<9,
    DMUS_SEGF_AFTERPREPARETIME  = 1<<10,
    DMUS_SEGF_GRID              = 1<<11,
    DMUS_SEGF_BEAT              = 1<<12,
    DMUS_SEGF_MEASURE           = 1<<13,
    DMUS_SEGF_DEFAULT           = 1<<14,
    DMUS_SEGF_NOINVALIDATE      = 1<<15,
    DMUS_SEGF_ALIGN             = 1<<16,
    DMUS_SEGF_VALID_START_BEAT  = 1<<17,
    DMUS_SEGF_VALID_START_GRID  = 1<<18,
    DMUS_SEGF_VALID_START_TICK  = 1<<19,
    DMUS_SEGF_AUTOTRANSITION    = 1<<20,
    DMUS_SEGF_AFTERQUEUETIME    = 1<<21,
    DMUS_SEGF_AFTERLATENCYTIME  = 1<<22,
    DMUS_SEGF_SEGMENTEND        = 1<<23,
    DMUS_SEGF_MARKER            = 1<<24,
    DMUS_SEGF_TIMESIG_ALWAYS    = 1<<25,
    DMUS_SEGF_USE_AUDIOPATH     = 1<<26,
    DMUS_SEGF_VALID_START_MEASURE = 1<<27,
    DMUS_SEGF_INVALIDATE_PRI    = 1<<28
} DMUS_SEGF_FLAGS;
#define DMUS_SEG_REPEAT_INFINITE    0xFFFFFFFF
#define DMUS_SEG_ALLTRACKS          0x80000000
#define DMUS_SEG_ANYTRACK           0x80000000
typedef enum enumDMUS_TIME_RESOLVE_FLAGS
{
    DMUS_TIME_RESOLVE_AFTERPREPARETIME  = DMUS_SEGF_AFTERPREPARETIME,
    DMUS_TIME_RESOLVE_AFTERQUEUETIME    = DMUS_SEGF_AFTERQUEUETIME,
    DMUS_TIME_RESOLVE_AFTERLATENCYTIME  = DMUS_SEGF_AFTERLATENCYTIME,
    DMUS_TIME_RESOLVE_GRID              = DMUS_SEGF_GRID,
    DMUS_TIME_RESOLVE_BEAT              = DMUS_SEGF_BEAT,
    DMUS_TIME_RESOLVE_MEASURE           = DMUS_SEGF_MEASURE,
    DMUS_TIME_RESOLVE_MARKER            = DMUS_SEGF_MARKER,
    DMUS_TIME_RESOLVE_SEGMENTEND        = DMUS_SEGF_SEGMENTEND,
} DMUS_TIME_RESOLVE_FLAGS;
typedef enum enumDMUS_CHORDKEYF_FLAGS
{
    DMUS_CHORDKEYF_SILENT            = 1,
} DMUS_CHORDKEYF_FLAGS;
#define DMUS_MAXSUBCHORD 8
typedef struct _DMUS_SUBCHORD
{
    DWORD   dwChordPattern;
    DWORD   dwScalePattern;
    DWORD   dwInversionPoints;
    DWORD   dwLevels;
    BYTE    bChordRoot;
    BYTE    bScaleRoot;
} DMUS_SUBCHORD;
typedef struct _DMUS_CHORD_KEY
{
    WCHAR           wszName[16];
    WORD            wMeasure;
    BYTE            bBeat;
    BYTE            bSubChordCount;
    DMUS_SUBCHORD   SubChordList[DMUS_MAXSUBCHORD];
    DWORD           dwScale;
    BYTE            bKey;
    BYTE            bFlags;
} DMUS_CHORD_KEY;
typedef struct _DMUS_NOTE_PMSG
{
    DMUS_PMSG_PART
    MUSIC_TIME mtDuration;
    WORD    wMusicValue;
    WORD    wMeasure;
    short   nOffset;
    BYTE    bBeat;
    BYTE    bGrid;
    BYTE    bVelocity;
    BYTE    bFlags;
    BYTE    bTimeRange;
    BYTE    bDurRange;
    BYTE    bVelRange;
    BYTE    bPlayModeFlags;
    BYTE    bSubChordLevel;
    BYTE    bMidiValue;
    char    cTranspose;
} DMUS_NOTE_PMSG;
typedef enum enumDMUS_NOTEF_FLAGS
{
    DMUS_NOTEF_NOTEON = 1,
    DMUS_NOTEF_NOINVALIDATE = 2,
    DMUS_NOTEF_NOINVALIDATE_INSCALE = 4,
    DMUS_NOTEF_NOINVALIDATE_INCHORD = 8,
    DMUS_NOTEF_REGENERATE = 0x10,
} DMUS_NOTEF_FLAGS;
typedef enum enumDMUS_PLAYMODE_FLAGS
{
    DMUS_PLAYMODE_KEY_ROOT          = 1,
    DMUS_PLAYMODE_CHORD_ROOT        = 2,
    DMUS_PLAYMODE_SCALE_INTERVALS   = 4,
    DMUS_PLAYMODE_CHORD_INTERVALS   = 8,
    DMUS_PLAYMODE_NONE              = 16,
} DMUS_PLAYMODE_FLAGS;
#define DMUS_PLAYMODE_FIXED             0
#define DMUS_PLAYMODE_FIXEDTOKEY        DMUS_PLAYMODE_KEY_ROOT
#define DMUS_PLAYMODE_FIXEDTOCHORD      DMUS_PLAYMODE_CHORD_ROOT
#define DMUS_PLAYMODE_PEDALPOINT        (DMUS_PLAYMODE_KEY_ROOT | DMUS_PLAYMODE_SCALE_INTERVALS)
#define DMUS_PLAYMODE_MELODIC           (DMUS_PLAYMODE_CHORD_ROOT | DMUS_PLAYMODE_SCALE_INTERVALS)
#define DMUS_PLAYMODE_NORMALCHORD       (DMUS_PLAYMODE_CHORD_ROOT | DMUS_PLAYMODE_CHORD_INTERVALS)
#define DMUS_PLAYMODE_ALWAYSPLAY        (DMUS_PLAYMODE_MELODIC | DMUS_PLAYMODE_NORMALCHORD)
#define DMUS_PLAYMODE_PEDALPOINTCHORD   (DMUS_PLAYMODE_KEY_ROOT | DMUS_PLAYMODE_CHORD_INTERVALS)
#define DMUS_PLAYMODE_PEDALPOINTALWAYS  (DMUS_PLAYMODE_PEDALPOINT | DMUS_PLAYMODE_PEDALPOINTCHORD)
#define DMUS_PLAYMODE_PURPLEIZED        DMUS_PLAYMODE_ALWAYSPLAY
#define DMUS_PLAYMODE_SCALE_ROOT        DMUS_PLAYMODE_KEY_ROOT
#define DMUS_PLAYMODE_FIXEDTOSCALE      DMUS_PLAYMODE_FIXEDTOKEY
typedef struct _DMUS_MIDI_PMSG
{
    DMUS_PMSG_PART
    BYTE    bStatus;
    BYTE    bByte1;
    BYTE    bByte2;
    BYTE    bPad[1];
} DMUS_MIDI_PMSG;
typedef struct _DMUS_PATCH_PMSG
{
    DMUS_PMSG_PART
    BYTE    byInstrument;
    BYTE    byMSB;
    BYTE    byLSB;
    BYTE    byPad[1];
} DMUS_PATCH_PMSG;
typedef struct _DMUS_TRANSPOSE_PMSG
{
    DMUS_PMSG_PART
    short   nTranspose;
    WORD            wMergeIndex;
} DMUS_TRANSPOSE_PMSG;
typedef struct _DMUS_CHANNEL_PRIORITY_PMSG
{
    DMUS_PMSG_PART
    DWORD   dwChannelPriority;
} DMUS_CHANNEL_PRIORITY_PMSG;
typedef struct _DMUS_TEMPO_PMSG
{
    DMUS_PMSG_PART
    double  dblTempo;
} DMUS_TEMPO_PMSG;
#define DMUS_TEMPO_MAX          1000
#define DMUS_TEMPO_MIN          1
#define DMUS_MASTERTEMPO_MAX    100.0f
#define DMUS_MASTERTEMPO_MIN    0.01f
typedef struct _DMUS_SYSEX_PMSG
{
    DMUS_PMSG_PART
    DWORD   dwLen;
    BYTE    abData[1];
} DMUS_SYSEX_PMSG;
typedef struct _DMUS_CURVE_PMSG
{
    DMUS_PMSG_PART
    MUSIC_TIME      mtDuration;
    MUSIC_TIME      mtOriginalStart;
    MUSIC_TIME      mtResetDuration;
    short           nStartValue;
    short           nEndValue;
    short           nResetValue;
    WORD            wMeasure;
    short           nOffset;
    BYTE            bBeat;
    BYTE            bGrid;
    BYTE            bType;
    BYTE            bCurveShape;
    BYTE            bCCData;
    BYTE            bFlags;
    WORD            wParamType;
    WORD            wMergeIndex;
} DMUS_CURVE_PMSG;
typedef enum enumDMUS_CURVE_FLAGS
{
    DMUS_CURVE_RESET = 1,
    DMUS_CURVE_START_FROM_CURRENT = 2
} DMUS_CURVE_FLAGS;
#define DMUS_CURVE_RESET    1
enum
{ 
    DMUS_CURVES_LINEAR  = 0,
    DMUS_CURVES_INSTANT = 1,
    DMUS_CURVES_EXP     = 2,
    DMUS_CURVES_LOG     = 3,
    DMUS_CURVES_SINE    = 4
};
#define DMUS_CURVET_PBCURVE      0x03
#define DMUS_CURVET_CCCURVE      0x04
#define DMUS_CURVET_MATCURVE     0x05
#define DMUS_CURVET_PATCURVE     0x06
#define DMUS_CURVET_RPNCURVE     0x07
#define DMUS_CURVET_NRPNCURVE    0x08
typedef struct _DMUS_TIMESIG_PMSG
{
    DMUS_PMSG_PART
    BYTE    bBeatsPerMeasure;
    BYTE    bBeat;
    WORD    wGridsPerBeat;
} DMUS_TIMESIG_PMSG;
#define DMUS_NOTIFICATION_SEGSTART       0
#define DMUS_NOTIFICATION_SEGEND         1
#define DMUS_NOTIFICATION_SEGALMOSTEND   2
#define DMUS_NOTIFICATION_SEGLOOP        3
#define DMUS_NOTIFICATION_SEGABORT       4
#define DMUS_NOTIFICATION_MUSICSTARTED   0
#define DMUS_NOTIFICATION_MUSICSTOPPED   1
#define DMUS_NOTIFICATION_MUSICALMOSTEND 2
#define DMUS_NOTIFICATION_MEASUREBEAT    0
#define DMUS_NOTIFICATION_CHORD          0
#define DMUS_NOTIFICATION_GROOVE         0
#define DMUS_NOTIFICATION_EMBELLISHMENT  1
#define DMUS_NOTIFICATION_RECOMPOSE          0
typedef struct _DMUS_NOTIFICATION_PMSG
{
    DMUS_PMSG_PART
    GUID    guidNotificationType;
    DWORD   dwNotificationOption;
    DWORD   dwField1;
    DWORD   dwField2;
} DMUS_NOTIFICATION_PMSG;
typedef struct _DMUS_WAVE_PMSG
{
    DMUS_PMSG_PART
    
    REFERENCE_TIME rtStartOffset;
    REFERENCE_TIME rtDuration;  
    long    lOffset;
    long    lVolume;
    long    lPitch;
    BYTE    bFlags;
} DMUS_WAVE_PMSG;
#define DMUS_WAVEF_OFF           1
#define DMUS_WAVEF_STREAMING     2
#define DMUS_WAVEF_NOINVALIDATE  4
#define DMUS_WAVEF_NOPREROLL     8
typedef struct _DMUS_LYRIC_PMSG
{
    DMUS_PMSG_PART
    
    WCHAR    wszString[1];
} DMUS_LYRIC_PMSG;
#define DMUS_MAX_NAME           64
#define DMUS_MAX_CATEGORY       64
#define DMUS_MAX_FILENAME       MAX_PATH
typedef struct _DMUS_VERSION
{
  DWORD    dwVersionMS;
  DWORD    dwVersionLS;
}DMUS_VERSION, FAR *LPDMUS_VERSION;
typedef struct _DMUS_TIMESIGNATURE
{
    MUSIC_TIME mtTime;
    BYTE    bBeatsPerMeasure;
    BYTE    bBeat;
    WORD    wGridsPerBeat;
} DMUS_TIMESIGNATURE;
typedef struct _DMUS_VALID_START_PARAM
{
    MUSIC_TIME mtTime;
} DMUS_VALID_START_PARAM;
typedef struct _DMUS_PLAY_MARKER_PARAM
{
    MUSIC_TIME mtTime;
} DMUS_PLAY_MARKER_PARAM;
typedef struct _DMUS_OBJECTDESC
{
    DWORD          dwSize;
    DWORD          dwValidData;
    GUID           guidObject;
    GUID           guidClass;
    FILETIME       ftDate;
    DMUS_VERSION   vVersion;
    WCHAR          wszName[DMUS_MAX_NAME];
    WCHAR          wszCategory[DMUS_MAX_CATEGORY];
    WCHAR          wszFileName[DMUS_MAX_FILENAME];
    LONGLONG       llMemLength;
    LPBYTE         pbMemData;
    IStream *      pStream;
} DMUS_OBJECTDESC;
typedef DMUS_OBJECTDESC *LPDMUS_OBJECTDESC;
#define DMUS_OBJ_OBJECT         (1 << 0)
#define DMUS_OBJ_CLASS          (1 << 1)
#define DMUS_OBJ_NAME           (1 << 2)
#define DMUS_OBJ_CATEGORY       (1 << 3)
#define DMUS_OBJ_FILENAME       (1 << 4)
#define DMUS_OBJ_FULLPATH       (1 << 5)
#define DMUS_OBJ_URL            (1 << 6)
#define DMUS_OBJ_VERSION        (1 << 7)
#define DMUS_OBJ_DATE           (1 << 8)
#define DMUS_OBJ_LOADED         (1 << 9)
#define DMUS_OBJ_MEMORY         (1 << 10)
#define DMUS_OBJ_STREAM         (1 << 11)
typedef struct _DMUS_SCRIPT_ERRORINFO
{
    DWORD dwSize;
    HRESULT hr;
    ULONG ulLineNumber;
    LONG ichCharPosition;
    WCHAR wszSourceFile[DMUS_MAX_FILENAME];
    WCHAR wszSourceComponent[DMUS_MAX_FILENAME];
    WCHAR wszDescription[DMUS_MAX_FILENAME];
    WCHAR wszSourceLineText[DMUS_MAX_FILENAME];
} DMUS_SCRIPT_ERRORINFO;
#define DMUS_TRACKCONFIG_OVERRIDE_ALL           1
#define DMUS_TRACKCONFIG_OVERRIDE_PRIMARY       2
#define DMUS_TRACKCONFIG_FALLBACK               4
#define DMUS_TRACKCONFIG_CONTROL_ENABLED        8
#define DMUS_TRACKCONFIG_PLAY_ENABLED           0x10
#define DMUS_TRACKCONFIG_NOTIFICATION_ENABLED	0x20
#define DMUS_TRACKCONFIG_PLAY_CLOCKTIME         0x40
#define DMUS_TRACKCONFIG_PLAY_COMPOSE 	        0x80
#define DMUS_TRACKCONFIG_LOOP_COMPOSE           0x100
#define DMUS_TRACKCONFIG_COMPOSING              0x200
#define DMUS_TRACKCONFIG_CONTROL_PLAY           0x10000
#define DMUS_TRACKCONFIG_CONTROL_NOTIFICATION   0x20000
#define DMUS_TRACKCONFIG_TRANS1_FROMSEGSTART    0x400
#define DMUS_TRACKCONFIG_TRANS1_FROMSEGCURRENT  0x800
#define DMUS_TRACKCONFIG_TRANS1_TOSEGSTART      0x1000
#define DMUS_TRACKCONFIG_DEFAULT    (DMUS_TRACKCONFIG_CONTROL_ENABLED | DMUS_TRACKCONFIG_PLAY_ENABLED | DMUS_TRACKCONFIG_NOTIFICATION_ENABLED)
#define DMUS_MAX_FRAGMENTLABEL 20
#define DMUS_FRAGMENTF_USE_REPEAT      0x1
#define DMUS_FRAGMENTF_REJECT_REPEAT   (0x1 << 1)
#define DMUS_FRAGMENTF_USE_LABEL       (0x1 << 2)
#define DMUS_CONNECTIONF_INTERVALS     (0x1 << 1)
#define DMUS_CONNECTIONF_OVERLAP       (0x1 << 2)
typedef struct _DMUS_COMMAND_PARAM
{
    BYTE bCommand;
    BYTE bGrooveLevel;
    BYTE bGrooveRange;
    BYTE bRepeatMode;
} DMUS_COMMAND_PARAM;
typedef struct _DMUS_COMMAND_PARAM_2
{
	MUSIC_TIME mtTime;
    BYTE bCommand;
    BYTE bGrooveLevel;
    BYTE bGrooveRange;
    BYTE bRepeatMode;
} DMUS_COMMAND_PARAM_2;
typedef struct _DMUS_CONNECTION_RULE
{
    DWORD       dwFlags;
    DWORD       dwIntervals;
} DMUS_CONNECTION_RULE;
typedef struct _DMUS_MELODY_FRAGMENT
{
    MUSIC_TIME  mtTime;
    DWORD       dwID;
    WCHAR       wszVariationLabel[DMUS_MAX_FRAGMENTLABEL];
    DWORD       dwVariationFlags;
    DWORD       dwRepeatFragmentID;
    DWORD       dwFragmentFlags;
    DWORD       dwPlayModeFlags;
    DWORD       dwTransposeIntervals;
    DMUS_COMMAND_PARAM      Command;
    DMUS_CONNECTION_RULE    ConnectionArc;
} DMUS_MELODY_FRAGMENT;
typedef IDirectMusicObject __RPC_FAR *LPDMUS_OBJECT;
typedef IDirectMusicLoader __RPC_FAR *LPDMUS_LOADER;
typedef IDirectMusicBand __RPC_FAR *LPDMUS_BAND;
#define DMUSB_LOADED    (1 << 0)
#define DMUSB_DEFAULT   (1 << 1)
#undef  INTERFACE
#define INTERFACE  IDirectMusicBand
DECLARE_INTERFACE_(IDirectMusicBand, IUnknown)
{
	STDMETHOD(QueryInterface) (THIS_ REFIID, LPVOID FAR *);
	STDMETHOD_(ULONG, AddRef) (THIS);
	STDMETHOD_(ULONG, Release) (THIS);
	STDMETHOD(CreateSegment) (THIS_ IDirectMusicSegment ** ppSegment);
	STDMETHOD(Download) (THIS_ IDirectMusicPerformance * pPerformance);
	STDMETHOD(Unload) (THIS_ IDirectMusicPerformance * pPerformance);
};
typedef IDirectMusicBand IDirectMusicBand8;
#undef  INTERFACE
#define INTERFACE  IDirectMusicObject
DECLARE_INTERFACE_(IDirectMusicObject, IUnknown)
{
	STDMETHOD(QueryInterface) (THIS_ REFIID, LPVOID FAR *);
	STDMETHOD_(ULONG, AddRef) (THIS);
	STDMETHOD_(ULONG, Release) (THIS);
	STDMETHOD(GetDescriptor) (THIS_ LPDMUS_OBJECTDESC pDesc);
	STDMETHOD(SetDescriptor) (THIS_ LPDMUS_OBJECTDESC pDesc);
	STDMETHOD(ParseDescriptor) (THIS_ LPSTREAM pStream, LPDMUS_OBJECTDESC pDesc);
};
typedef IDirectMusicObject IDirectMusicObject8;
#undef  INTERFACE
#define INTERFACE  IDirectMusicLoader
DECLARE_INTERFACE_(IDirectMusicLoader, IUnknown)
{
	STDMETHOD(QueryInterface) (THIS_ REFIID, LPVOID FAR *);
	STDMETHOD_(ULONG, AddRef) (THIS);
	STDMETHOD_(ULONG, Release) (THIS);
	STDMETHOD(GetObject) (THIS_ LPDMUS_OBJECTDESC pDesc, REFIID riid, LPVOID FAR * ppv);
	STDMETHOD(SetObject) (THIS_ LPDMUS_OBJECTDESC pDesc);
	STDMETHOD(SetSearchDirectory) (THIS_ REFGUID rguidClass, WCHAR * pwzPath, BOOL fClear);
	STDMETHOD(ScanDirectory) (THIS_ REFGUID rguidClass, WCHAR * pwzFileExtension, WCHAR * pwzScanFileName);
	STDMETHOD(CacheObject) (THIS_ IDirectMusicObject * pObject);
	STDMETHOD(ReleaseObject) (THIS_ IDirectMusicObject * pObject);
	STDMETHOD(ClearCache) (THIS_ REFGUID rguidClass);
	STDMETHOD(EnableCache) (THIS_ REFGUID rguidClass, BOOL fEnable);
	STDMETHOD(EnumObject) (THIS_ REFGUID rguidClass, DWORD dwIndex, LPDMUS_OBJECTDESC pDesc);
};
#undef  INTERFACE
#define INTERFACE  IDirectMusicLoader8
DECLARE_INTERFACE_(IDirectMusicLoader8, IDirectMusicLoader)
{
	STDMETHOD(QueryInterface) (THIS_ REFIID, LPVOID FAR *);
	STDMETHOD_(ULONG, AddRef) (THIS);
	STDMETHOD_(ULONG, Release) (THIS);
	STDMETHOD(GetObject) (THIS_ LPDMUS_OBJECTDESC pDesc, REFIID riid, LPVOID FAR * ppv);
	STDMETHOD(SetObject) (THIS_ LPDMUS_OBJECTDESC pDesc);
	STDMETHOD(SetSearchDirectory) (THIS_ REFGUID rguidClass, WCHAR * pwzPath, BOOL fClear);
	STDMETHOD(ScanDirectory) (THIS_ REFGUID rguidClass, WCHAR * pwzFileExtension, WCHAR * pwzScanFileName);
	STDMETHOD(CacheObject) (THIS_ IDirectMusicObject * pObject);
	STDMETHOD(ReleaseObject) (THIS_ IDirectMusicObject * pObject);
	STDMETHOD(ClearCache) (THIS_ REFGUID rguidClass);
	STDMETHOD(EnableCache) (THIS_ REFGUID rguidClass, BOOL fEnable);
	STDMETHOD(EnumObject) (THIS_ REFGUID rguidClass, DWORD dwIndex, LPDMUS_OBJECTDESC pDesc);
	STDMETHOD_(void, CollectGarbage) (THIS);
	STDMETHOD(ReleaseObjectByUnknown) (THIS_ IUnknown * pObject);
	STDMETHOD(LoadObjectFromFile) (THIS_ REFGUID rguidClassID, REFIID iidInterfaceID, WCHAR * pwzFilePath, void **ppObject);
};
#undef  INTERFACE
#define INTERFACE  IDirectMusicGetLoader
DECLARE_INTERFACE_(IDirectMusicGetLoader, IUnknown)
{
	STDMETHOD(QueryInterface) (THIS_ REFIID, LPVOID FAR *);
	STDMETHOD_(ULONG, AddRef) (THIS);
	STDMETHOD_(ULONG, Release) (THIS);
	STDMETHOD(GetLoader) (THIS_ IDirectMusicLoader ** ppLoader);
};
typedef IDirectMusicGetLoader IDirectMusicGetLoader8;
#undef  INTERFACE
#define INTERFACE  IDirectMusicSegment
DECLARE_INTERFACE_(IDirectMusicSegment, IUnknown)
{
	STDMETHOD(QueryInterface) (THIS_ REFIID, LPVOID FAR *);
	STDMETHOD_(ULONG, AddRef) (THIS);
	STDMETHOD_(ULONG, Release) (THIS);
	STDMETHOD(GetLength) (THIS_ MUSIC_TIME * pmtLength);
	STDMETHOD(SetLength) (THIS_ MUSIC_TIME mtLength);
	STDMETHOD(GetRepeats) (THIS_ DWORD * pdwRepeats);
	STDMETHOD(SetRepeats) (THIS_ DWORD dwRepeats);
	STDMETHOD(GetDefaultResolution) (THIS_ DWORD * pdwResolution);
	STDMETHOD(SetDefaultResolution) (THIS_ DWORD dwResolution);
	STDMETHOD(GetTrack) (THIS_ REFGUID rguidType, DWORD dwGroupBits, DWORD dwIndex, IDirectMusicTrack ** ppTrack);
	STDMETHOD(GetTrackGroup) (THIS_ IDirectMusicTrack * pTrack, DWORD * pdwGroupBits);
	STDMETHOD(InsertTrack) (THIS_ IDirectMusicTrack * pTrack, DWORD dwGroupBits);
	STDMETHOD(RemoveTrack) (THIS_ IDirectMusicTrack * pTrack);
	STDMETHOD(InitPlay) (THIS_ IDirectMusicSegmentState ** ppSegState, IDirectMusicPerformance * pPerformance, DWORD dwFlags);
	STDMETHOD(GetGraph) (THIS_ IDirectMusicGraph ** ppGraph);
	STDMETHOD(SetGraph) (THIS_ IDirectMusicGraph * pGraph);
	STDMETHOD(AddNotificationType) (THIS_ REFGUID rguidNotificationType);
	STDMETHOD(RemoveNotificationType) (THIS_ REFGUID rguidNotificationType);
	STDMETHOD(GetParam) (THIS_ REFGUID rguidType, DWORD dwGroupBits, DWORD dwIndex, MUSIC_TIME mtTime, MUSIC_TIME * pmtNext, void *pParam);
	STDMETHOD(SetParam) (THIS_ REFGUID rguidType, DWORD dwGroupBits, DWORD dwIndex, MUSIC_TIME mtTime, void *pParam);
	STDMETHOD(Clone) (THIS_ MUSIC_TIME mtStart, MUSIC_TIME mtEnd, IDirectMusicSegment ** ppSegment);
	STDMETHOD(SetStartPoint) (THIS_ MUSIC_TIME mtStart);
	STDMETHOD(GetStartPoint) (THIS_ MUSIC_TIME * pmtStart);
	STDMETHOD(SetLoopPoints) (THIS_ MUSIC_TIME mtStart, MUSIC_TIME mtEnd);
	STDMETHOD(GetLoopPoints) (THIS_ MUSIC_TIME * pmtStart, MUSIC_TIME * pmtEnd);
	STDMETHOD(SetPChannelsUsed) (THIS_ DWORD dwNumPChannels, DWORD * paPChannels);
};
#undef  INTERFACE
#define INTERFACE  IDirectMusicSegment8
DECLARE_INTERFACE_(IDirectMusicSegment8, IDirectMusicSegment)
{
	STDMETHOD(QueryInterface) (THIS_ REFIID, LPVOID FAR *);
	STDMETHOD_(ULONG, AddRef) (THIS);
	STDMETHOD_(ULONG, Release) (THIS);
	STDMETHOD(GetLength) (THIS_ MUSIC_TIME * pmtLength);
	STDMETHOD(SetLength) (THIS_ MUSIC_TIME mtLength);
	STDMETHOD(GetRepeats) (THIS_ DWORD * pdwRepeats);
	STDMETHOD(SetRepeats) (THIS_ DWORD dwRepeats);
	STDMETHOD(GetDefaultResolution) (THIS_ DWORD * pdwResolution);
	STDMETHOD(SetDefaultResolution) (THIS_ DWORD dwResolution);
	STDMETHOD(GetTrack) (THIS_ REFGUID rguidType, DWORD dwGroupBits, DWORD dwIndex, IDirectMusicTrack ** ppTrack);
	STDMETHOD(GetTrackGroup) (THIS_ IDirectMusicTrack * pTrack, DWORD * pdwGroupBits);
	STDMETHOD(InsertTrack) (THIS_ IDirectMusicTrack * pTrack, DWORD dwGroupBits);
	STDMETHOD(RemoveTrack) (THIS_ IDirectMusicTrack * pTrack);
	STDMETHOD(InitPlay) (THIS_ IDirectMusicSegmentState ** ppSegState, IDirectMusicPerformance * pPerformance, DWORD dwFlags);
	STDMETHOD(GetGraph) (THIS_ IDirectMusicGraph ** ppGraph);
	STDMETHOD(SetGraph) (THIS_ IDirectMusicGraph * pGraph);
	STDMETHOD(AddNotificationType) (THIS_ REFGUID rguidNotificationType);
	STDMETHOD(RemoveNotificationType) (THIS_ REFGUID rguidNotificationType);
	STDMETHOD(GetParam) (THIS_ REFGUID rguidType, DWORD dwGroupBits, DWORD dwIndex, MUSIC_TIME mtTime, MUSIC_TIME * pmtNext, void *pParam);
	STDMETHOD(SetParam) (THIS_ REFGUID rguidType, DWORD dwGroupBits, DWORD dwIndex, MUSIC_TIME mtTime, void *pParam);
	STDMETHOD(Clone) (THIS_ MUSIC_TIME mtStart, MUSIC_TIME mtEnd, IDirectMusicSegment ** ppSegment);
	STDMETHOD(SetStartPoint) (THIS_ MUSIC_TIME mtStart);
	STDMETHOD(GetStartPoint) (THIS_ MUSIC_TIME * pmtStart);
	STDMETHOD(SetLoopPoints) (THIS_ MUSIC_TIME mtStart, MUSIC_TIME mtEnd);
	STDMETHOD(GetLoopPoints) (THIS_ MUSIC_TIME * pmtStart, MUSIC_TIME * pmtEnd);
	STDMETHOD(SetPChannelsUsed) (THIS_ DWORD dwNumPChannels, DWORD * paPChannels);
	STDMETHOD(SetTrackConfig) (THIS_ REFGUID rguidTrackClassID, DWORD dwGroupBits, DWORD dwIndex, DWORD dwFlagsOn, DWORD dwFlagsOff);
	STDMETHOD(GetAudioPathConfig) (THIS_ IUnknown ** ppAudioPathConfig);
	STDMETHOD(Compose) (THIS_ MUSIC_TIME mtTime, IDirectMusicSegment * pFromSegment, IDirectMusicSegment * pToSegment, IDirectMusicSegment ** ppComposedSegment);
	STDMETHOD(Download) (THIS_ IUnknown * pAudioPath);
	STDMETHOD(Unload) (THIS_ IUnknown * pAudioPath);
};
#undef  INTERFACE
#define INTERFACE  IDirectMusicSegmentState
DECLARE_INTERFACE_(IDirectMusicSegmentState, IUnknown)
{
	STDMETHOD(QueryInterface) (THIS_ REFIID, LPVOID FAR *);
	STDMETHOD_(ULONG, AddRef) (THIS);
	STDMETHOD_(ULONG, Release) (THIS);
	STDMETHOD(GetRepeats) (THIS_ DWORD * pdwRepeats);
	STDMETHOD(GetSegment) (THIS_ IDirectMusicSegment ** ppSegment);
	STDMETHOD(GetStartTime) (THIS_ MUSIC_TIME * pmtStart);
	STDMETHOD(GetSeek) (THIS_ MUSIC_TIME * pmtSeek);
	STDMETHOD(GetStartPoint) (THIS_ MUSIC_TIME * pmtStart);
};
#undef  INTERFACE
#define INTERFACE  IDirectMusicSegmentState8
DECLARE_INTERFACE_(IDirectMusicSegmentState8, IDirectMusicSegmentState)
{
	STDMETHOD(QueryInterface) (THIS_ REFIID, LPVOID FAR *);
	STDMETHOD_(ULONG, AddRef) (THIS);
	STDMETHOD_(ULONG, Release) (THIS);
	STDMETHOD(GetRepeats) (THIS_ DWORD * pdwRepeats);
	STDMETHOD(GetSegment) (THIS_ IDirectMusicSegment ** ppSegment);
	STDMETHOD(GetStartTime) (THIS_ MUSIC_TIME * pmtStart);
	STDMETHOD(GetSeek) (THIS_ MUSIC_TIME * pmtSeek);
	STDMETHOD(GetStartPoint) (THIS_ MUSIC_TIME * pmtStart);
	STDMETHOD(SetTrackConfig) (THIS_ REFGUID rguidTrackClassID, DWORD dwGroupBits, DWORD dwIndex, DWORD dwFlagsOn, DWORD dwFlagsOff);
	STDMETHOD(GetObjectInPath) (THIS_ DWORD dwPChannel, DWORD dwStage, DWORD dwBuffer, REFGUID guidObject, DWORD dwIndex, REFGUID iidInterface, void **ppObject);
};
#undef  INTERFACE
#define INTERFACE  IDirectMusicAudioPath
DECLARE_INTERFACE_(IDirectMusicAudioPath, IUnknown)
{
	STDMETHOD(QueryInterface) (THIS_ REFIID, LPVOID FAR *);
	STDMETHOD_(ULONG, AddRef) (THIS);
	STDMETHOD_(ULONG, Release) (THIS);
	STDMETHOD(GetObjectInPath) (THIS_ DWORD dwPChannel, DWORD dwStage, DWORD dwBuffer, REFGUID guidObject, DWORD dwIndex, REFGUID iidInterface, void **ppObject);
	STDMETHOD(Activate) (THIS_ BOOL fActivate);
	STDMETHOD(SetVolume) (THIS_ long lVolume, DWORD dwDuration);
	STDMETHOD(ConvertPChannel) (THIS_ DWORD dwPChannelIn, DWORD * pdwPChannelOut);
};
typedef IDirectMusicAudioPath IDirectMusicAudioPath8;
#undef  INTERFACE
#define INTERFACE  IDirectMusicPerformance
DECLARE_INTERFACE_(IDirectMusicPerformance, IUnknown)
{
	STDMETHOD(QueryInterface) (THIS_ REFIID, LPVOID FAR *);
	STDMETHOD_(ULONG, AddRef) (THIS);
	STDMETHOD_(ULONG, Release) (THIS);
	STDMETHOD(Init) (THIS_ IDirectMusic ** ppDirectMusic, LPDIRECTSOUND pDirectSound, HWND hWnd);
	STDMETHOD(PlaySegment) (THIS_ IDirectMusicSegment * pSegment, DWORD dwFlags, __int64 i64StartTime, IDirectMusicSegmentState ** ppSegmentState);
	STDMETHOD(Stop) (THIS_ IDirectMusicSegment * pSegment, IDirectMusicSegmentState * pSegmentState, MUSIC_TIME mtTime, DWORD dwFlags);
	STDMETHOD(GetSegmentState) (THIS_ IDirectMusicSegmentState ** ppSegmentState, MUSIC_TIME mtTime);
	STDMETHOD(SetPrepareTime) (THIS_ DWORD dwMilliSeconds);
	STDMETHOD(GetPrepareTime) (THIS_ DWORD * pdwMilliSeconds);
	STDMETHOD(SetBumperLength) (THIS_ DWORD dwMilliSeconds);
	STDMETHOD(GetBumperLength) (THIS_ DWORD * pdwMilliSeconds);
	STDMETHOD(SendPMsg) (THIS_ DMUS_PMSG * pPMSG);
	STDMETHOD(MusicToReferenceTime) (THIS_ MUSIC_TIME mtTime, REFERENCE_TIME * prtTime);
	STDMETHOD(ReferenceToMusicTime) (THIS_ REFERENCE_TIME rtTime, MUSIC_TIME * pmtTime);
	STDMETHOD(IsPlaying) (THIS_ IDirectMusicSegment * pSegment, IDirectMusicSegmentState * pSegState);
	STDMETHOD(GetTime) (THIS_ REFERENCE_TIME * prtNow, MUSIC_TIME * pmtNow);
	STDMETHOD(AllocPMsg) (THIS_ ULONG cb, DMUS_PMSG ** ppPMSG);
	STDMETHOD(FreePMsg) (THIS_ DMUS_PMSG * pPMSG);
	STDMETHOD(GetGraph) (THIS_ IDirectMusicGraph ** ppGraph);
	STDMETHOD(SetGraph) (THIS_ IDirectMusicGraph * pGraph);
	STDMETHOD(SetNotificationHandle) (THIS_ HANDLE hNotification, REFERENCE_TIME rtMinimum);
	STDMETHOD(GetNotificationPMsg) (THIS_ DMUS_NOTIFICATION_PMSG ** ppNotificationPMsg);
	STDMETHOD(AddNotificationType) (THIS_ REFGUID rguidNotificationType);
	STDMETHOD(RemoveNotificationType) (THIS_ REFGUID rguidNotificationType);
	STDMETHOD(AddPort) (THIS_ IDirectMusicPort * pPort);
	STDMETHOD(RemovePort) (THIS_ IDirectMusicPort * pPort);
	STDMETHOD(AssignPChannelBlock) (THIS_ DWORD dwBlockNum, IDirectMusicPort * pPort, DWORD dwGroup);
	STDMETHOD(AssignPChannel) (THIS_ DWORD dwPChannel, IDirectMusicPort * pPort, DWORD dwGroup, DWORD dwMChannel);
	STDMETHOD(PChannelInfo) (THIS_ DWORD dwPChannel, IDirectMusicPort ** ppPort, DWORD * pdwGroup, DWORD * pdwMChannel);
	STDMETHOD(DownloadInstrument) (THIS_ IDirectMusicInstrument * pInst, DWORD dwPChannel, IDirectMusicDownloadedInstrument ** ppDownInst, DMUS_NOTERANGE * pNoteRanges, DWORD dwNumNoteRanges, IDirectMusicPort ** ppPort, DWORD * pdwGroup, DWORD * pdwMChannel);
	STDMETHOD(Invalidate) (THIS_ MUSIC_TIME mtTime, DWORD dwFlags);
	STDMETHOD(GetParam) (THIS_ REFGUID rguidType, DWORD dwGroupBits, DWORD dwIndex, MUSIC_TIME mtTime, MUSIC_TIME * pmtNext, void *pParam);
	STDMETHOD(SetParam) (THIS_ REFGUID rguidType, DWORD dwGroupBits, DWORD dwIndex, MUSIC_TIME mtTime, void *pParam);
	STDMETHOD(GetGlobalParam) (THIS_ REFGUID rguidType, void *pParam, DWORD dwSize);
	STDMETHOD(SetGlobalParam) (THIS_ REFGUID rguidType, void *pParam, DWORD dwSize);
	STDMETHOD(GetLatencyTime) (THIS_ REFERENCE_TIME * prtTime);
	STDMETHOD(GetQueueTime) (THIS_ REFERENCE_TIME * prtTime);
	STDMETHOD(AdjustTime) (THIS_ REFERENCE_TIME rtAmount);
	STDMETHOD(CloseDown) (THIS);
	STDMETHOD(GetResolvedTime) (THIS_ REFERENCE_TIME rtTime, REFERENCE_TIME * prtResolved, DWORD dwTimeResolveFlags);
	STDMETHOD(MIDIToMusic) (THIS_ BYTE bMIDIValue, DMUS_CHORD_KEY * pChord, BYTE bPlayMode, BYTE bChordLevel, WORD * pwMusicValue);
	STDMETHOD(MusicToMIDI) (THIS_ WORD wMusicValue, DMUS_CHORD_KEY * pChord, BYTE bPlayMode, BYTE bChordLevel, BYTE * pbMIDIValue);
	STDMETHOD(TimeToRhythm) (THIS_ MUSIC_TIME mtTime, DMUS_TIMESIGNATURE * pTimeSig, WORD * pwMeasure, BYTE * pbBeat, BYTE * pbGrid, short *pnOffset);
	STDMETHOD(RhythmToTime) (THIS_ WORD wMeasure, BYTE bBeat, BYTE bGrid, short nOffset, DMUS_TIMESIGNATURE * pTimeSig, MUSIC_TIME * pmtTime);
};
#undef  INTERFACE
#define INTERFACE  IDirectMusicPerformance8
DECLARE_INTERFACE_(IDirectMusicPerformance8, IDirectMusicPerformance)
{
	STDMETHOD(QueryInterface) (THIS_ REFIID, LPVOID FAR *);
	STDMETHOD_(ULONG, AddRef) (THIS);
	STDMETHOD_(ULONG, Release) (THIS);
	STDMETHOD(Init) (THIS_ IDirectMusic ** ppDirectMusic, LPDIRECTSOUND pDirectSound, HWND hWnd);
	STDMETHOD(PlaySegment) (THIS_ IDirectMusicSegment * pSegment, DWORD dwFlags, __int64 i64StartTime, IDirectMusicSegmentState ** ppSegmentState);
	STDMETHOD(Stop) (THIS_ IDirectMusicSegment * pSegment, IDirectMusicSegmentState * pSegmentState, MUSIC_TIME mtTime, DWORD dwFlags);
	STDMETHOD(GetSegmentState) (THIS_ IDirectMusicSegmentState ** ppSegmentState, MUSIC_TIME mtTime);
	STDMETHOD(SetPrepareTime) (THIS_ DWORD dwMilliSeconds);
	STDMETHOD(GetPrepareTime) (THIS_ DWORD * pdwMilliSeconds);
	STDMETHOD(SetBumperLength) (THIS_ DWORD dwMilliSeconds);
	STDMETHOD(GetBumperLength) (THIS_ DWORD * pdwMilliSeconds);
	STDMETHOD(SendPMsg) (THIS_ DMUS_PMSG * pPMSG);
	STDMETHOD(MusicToReferenceTime) (THIS_ MUSIC_TIME mtTime, REFERENCE_TIME * prtTime);
	STDMETHOD(ReferenceToMusicTime) (THIS_ REFERENCE_TIME rtTime, MUSIC_TIME * pmtTime);
	STDMETHOD(IsPlaying) (THIS_ IDirectMusicSegment * pSegment, IDirectMusicSegmentState * pSegState);
	STDMETHOD(GetTime) (THIS_ REFERENCE_TIME * prtNow, MUSIC_TIME * pmtNow);
	STDMETHOD(AllocPMsg) (THIS_ ULONG cb, DMUS_PMSG ** ppPMSG);
	STDMETHOD(FreePMsg) (THIS_ DMUS_PMSG * pPMSG);
	STDMETHOD(GetGraph) (THIS_ IDirectMusicGraph ** ppGraph);
	STDMETHOD(SetGraph) (THIS_ IDirectMusicGraph * pGraph);
	STDMETHOD(SetNotificationHandle) (THIS_ HANDLE hNotification, REFERENCE_TIME rtMinimum);
	STDMETHOD(GetNotificationPMsg) (THIS_ DMUS_NOTIFICATION_PMSG ** ppNotificationPMsg);
	STDMETHOD(AddNotificationType) (THIS_ REFGUID rguidNotificationType);
	STDMETHOD(RemoveNotificationType) (THIS_ REFGUID rguidNotificationType);
	STDMETHOD(AddPort) (THIS_ IDirectMusicPort * pPort);
	STDMETHOD(RemovePort) (THIS_ IDirectMusicPort * pPort);
	STDMETHOD(AssignPChannelBlock) (THIS_ DWORD dwBlockNum, IDirectMusicPort * pPort, DWORD dwGroup);
	STDMETHOD(AssignPChannel) (THIS_ DWORD dwPChannel, IDirectMusicPort * pPort, DWORD dwGroup, DWORD dwMChannel);
	STDMETHOD(PChannelInfo) (THIS_ DWORD dwPChannel, IDirectMusicPort ** ppPort, DWORD * pdwGroup, DWORD * pdwMChannel);
	STDMETHOD(DownloadInstrument) (THIS_ IDirectMusicInstrument * pInst, DWORD dwPChannel, IDirectMusicDownloadedInstrument ** ppDownInst, DMUS_NOTERANGE * pNoteRanges, DWORD dwNumNoteRanges, IDirectMusicPort ** ppPort, DWORD * pdwGroup, DWORD * pdwMChannel);
	STDMETHOD(Invalidate) (THIS_ MUSIC_TIME mtTime, DWORD dwFlags);
	STDMETHOD(GetParam) (THIS_ REFGUID rguidType, DWORD dwGroupBits, DWORD dwIndex, MUSIC_TIME mtTime, MUSIC_TIME * pmtNext, void *pParam);
	STDMETHOD(SetParam) (THIS_ REFGUID rguidType, DWORD dwGroupBits, DWORD dwIndex, MUSIC_TIME mtTime, void *pParam);
	STDMETHOD(GetGlobalParam) (THIS_ REFGUID rguidType, void *pParam, DWORD dwSize);
	STDMETHOD(SetGlobalParam) (THIS_ REFGUID rguidType, void *pParam, DWORD dwSize);
	STDMETHOD(GetLatencyTime) (THIS_ REFERENCE_TIME * prtTime);
	STDMETHOD(GetQueueTime) (THIS_ REFERENCE_TIME * prtTime);
	STDMETHOD(AdjustTime) (THIS_ REFERENCE_TIME rtAmount);
	STDMETHOD(CloseDown) (THIS);
	STDMETHOD(GetResolvedTime) (THIS_ REFERENCE_TIME rtTime, REFERENCE_TIME * prtResolved, DWORD dwTimeResolveFlags);
	STDMETHOD(MIDIToMusic) (THIS_ BYTE bMIDIValue, DMUS_CHORD_KEY * pChord, BYTE bPlayMode, BYTE bChordLevel, WORD * pwMusicValue);
	STDMETHOD(MusicToMIDI) (THIS_ WORD wMusicValue, DMUS_CHORD_KEY * pChord, BYTE bPlayMode, BYTE bChordLevel, BYTE * pbMIDIValue);
	STDMETHOD(TimeToRhythm) (THIS_ MUSIC_TIME mtTime, DMUS_TIMESIGNATURE * pTimeSig, WORD * pwMeasure, BYTE * pbBeat, BYTE * pbGrid, short *pnOffset);
	STDMETHOD(RhythmToTime) (THIS_ WORD wMeasure, BYTE bBeat, BYTE bGrid, short nOffset, DMUS_TIMESIGNATURE * pTimeSig, MUSIC_TIME * pmtTime);
	STDMETHOD(InitAudio) (THIS_ IDirectMusic ** ppDirectMusic, IDirectSound ** ppDirectSound, HWND hWnd, DWORD dwDefaultPathType, DWORD dwPChannelCount, DWORD dwFlags, DMUS_AUDIOPARAMS * pParams);
	STDMETHOD(PlaySegmentEx) (THIS_ IUnknown * pSource, WCHAR * pwzSegmentName, IUnknown * pTransition, DWORD dwFlags, __int64 i64StartTime, IDirectMusicSegmentState ** ppSegmentState, IUnknown * pFrom, IUnknown * pAudioPath);
	STDMETHOD(StopEx) (THIS_ IUnknown * pObjectToStop, __int64 i64StopTime, DWORD dwFlags);
	STDMETHOD(ClonePMsg) (THIS_ DMUS_PMSG * pSourcePMSG, DMUS_PMSG ** ppCopyPMSG);
	STDMETHOD(CreateAudioPath) (THIS_ IUnknown * pSourceConfig, BOOL fActivate, IDirectMusicAudioPath ** ppNewPath);
	STDMETHOD(CreateStandardAudioPath) (THIS_ DWORD dwType, DWORD dwPChannelCount, BOOL fActivate, IDirectMusicAudioPath ** ppNewPath);
	STDMETHOD(SetDefaultAudioPath) (THIS_ IDirectMusicAudioPath * pAudioPath);
	STDMETHOD(GetDefaultAudioPath) (THIS_ IDirectMusicAudioPath ** ppAudioPath);
	STDMETHOD(GetParamEx) (THIS_ REFGUID rguidType, DWORD dwTrackID, DWORD dwGroupBits, DWORD dwIndex, MUSIC_TIME mtTime, MUSIC_TIME * pmtNext, void *pParam);
};
#undef  INTERFACE
#define INTERFACE  IDirectMusicGraph
DECLARE_INTERFACE_(IDirectMusicGraph, IUnknown)
{
	STDMETHOD(QueryInterface) (THIS_ REFIID, LPVOID FAR *);
	STDMETHOD_(ULONG, AddRef) (THIS);
	STDMETHOD_(ULONG, Release) (THIS);
	STDMETHOD(StampPMsg) (THIS_ DMUS_PMSG * pPMSG);
	STDMETHOD(InsertTool) (THIS_ IDirectMusicTool * pTool, DWORD * pdwPChannels, DWORD cPChannels, LONG lIndex);
	STDMETHOD(GetTool) (THIS_ DWORD dwIndex, IDirectMusicTool ** ppTool);
	STDMETHOD(RemoveTool) (THIS_ IDirectMusicTool * pTool);
};
typedef IDirectMusicGraph IDirectMusicGraph8;
#undef  INTERFACE
#define INTERFACE  IDirectMusicStyle
DECLARE_INTERFACE_(IDirectMusicStyle, IUnknown)
{
	STDMETHOD(QueryInterface) (THIS_ REFIID, LPVOID FAR *);
	STDMETHOD_(ULONG, AddRef) (THIS);
	STDMETHOD_(ULONG, Release) (THIS);
	STDMETHOD(GetBand) (THIS_ WCHAR * pwszName, IDirectMusicBand ** ppBand);
	STDMETHOD(EnumBand) (THIS_ DWORD dwIndex, WCHAR * pwszName);
	STDMETHOD(GetDefaultBand) (THIS_ IDirectMusicBand ** ppBand);
	STDMETHOD(EnumMotif) (THIS_ DWORD dwIndex, WCHAR * pwszName);
	STDMETHOD(GetMotif) (THIS_ WCHAR * pwszName, IDirectMusicSegment ** ppSegment);
	STDMETHOD(GetDefaultChordMap) (THIS_ IDirectMusicChordMap ** ppChordMap);
	STDMETHOD(EnumChordMap) (THIS_ DWORD dwIndex, WCHAR * pwszName);
	STDMETHOD(GetChordMap) (THIS_ WCHAR * pwszName, IDirectMusicChordMap ** ppChordMap);
	STDMETHOD(GetTimeSignature) (THIS_ DMUS_TIMESIGNATURE * pTimeSig);
	STDMETHOD(GetEmbellishmentLength) (THIS_ DWORD dwType, DWORD dwLevel, DWORD * pdwMin, DWORD * pdwMax);
	STDMETHOD(GetTempo) (THIS_ double *pTempo);
};
#undef  INTERFACE
#define INTERFACE  IDirectMusicStyle8
DECLARE_INTERFACE_(IDirectMusicStyle8, IDirectMusicStyle)
{
	STDMETHOD(QueryInterface) (THIS_ REFIID, LPVOID FAR *);
	STDMETHOD_(ULONG, AddRef) (THIS);
	STDMETHOD_(ULONG, Release) (THIS);
	STDMETHOD(GetBand) (THIS_ WCHAR * pwszName, IDirectMusicBand ** ppBand);
	STDMETHOD(EnumBand) (THIS_ DWORD dwIndex, WCHAR * pwszName);
	STDMETHOD(GetDefaultBand) (THIS_ IDirectMusicBand ** ppBand);
	STDMETHOD(EnumMotif) (THIS_ DWORD dwIndex, WCHAR * pwszName);
	STDMETHOD(GetMotif) (THIS_ WCHAR * pwszName, IDirectMusicSegment ** ppSegment);
	STDMETHOD(GetDefaultChordMap) (THIS_ IDirectMusicChordMap ** ppChordMap);
	STDMETHOD(EnumChordMap) (THIS_ DWORD dwIndex, WCHAR * pwszName);
	STDMETHOD(GetChordMap) (THIS_ WCHAR * pwszName, IDirectMusicChordMap ** ppChordMap);
	STDMETHOD(GetTimeSignature) (THIS_ DMUS_TIMESIGNATURE * pTimeSig);
	STDMETHOD(GetEmbellishmentLength) (THIS_ DWORD dwType, DWORD dwLevel, DWORD * pdwMin, DWORD * pdwMax);
	STDMETHOD(GetTempo) (THIS_ double *pTempo);
	STDMETHOD(EnumPattern) (THIS_ DWORD dwIndex, DWORD dwPatternType, WCHAR * pwszName);
};
#undef  INTERFACE
#define INTERFACE  IDirectMusicChordMap
DECLARE_INTERFACE_(IDirectMusicChordMap, IUnknown)
{
	STDMETHOD(QueryInterface) (THIS_ REFIID, LPVOID FAR *);
	STDMETHOD_(ULONG, AddRef) (THIS);
	STDMETHOD_(ULONG, Release) (THIS);
	STDMETHOD(GetScale) (THIS_ DWORD * pdwScale);
};
typedef IDirectMusicChordMap IDirectMusicChordMap8;
#undef  INTERFACE
#define INTERFACE  IDirectMusicComposer
DECLARE_INTERFACE_(IDirectMusicComposer, IUnknown)
{
	STDMETHOD(QueryInterface) (THIS_ REFIID, LPVOID FAR *);
	STDMETHOD_(ULONG, AddRef) (THIS);
	STDMETHOD_(ULONG, Release) (THIS);
	STDMETHOD(ComposeSegmentFromTemplate) (THIS_ IDirectMusicStyle * pStyle, IDirectMusicSegment * pTemplate, WORD wActivity, IDirectMusicChordMap * pChordMap, IDirectMusicSegment ** ppSegment);
	STDMETHOD(ComposeSegmentFromShape) (THIS_ IDirectMusicStyle * pStyle, WORD wNumMeasures, WORD wShape, WORD wActivity, BOOL fIntro, BOOL fEnd, IDirectMusicChordMap * pChordMap, IDirectMusicSegment ** ppSegment);
	STDMETHOD(ComposeTransition) (THIS_ IDirectMusicSegment * pFromSeg, IDirectMusicSegment * pToSeg, MUSIC_TIME mtTime, WORD wCommand, DWORD dwFlags, IDirectMusicChordMap * pChordMap, IDirectMusicSegment ** ppTransSeg);
	STDMETHOD(AutoTransition) (THIS_ IDirectMusicPerformance * pPerformance, IDirectMusicSegment * pToSeg, WORD wCommand, DWORD dwFlags, IDirectMusicChordMap * pChordMap, IDirectMusicSegment ** ppTransSeg, IDirectMusicSegmentState ** ppToSegState, IDirectMusicSegmentState ** ppTransSegState);
	STDMETHOD(ComposeTemplateFromShape) (THIS_ WORD wNumMeasures, WORD wShape, BOOL fIntro, BOOL fEnd, WORD wEndLength, IDirectMusicSegment ** ppTemplate);
	STDMETHOD(ChangeChordMap) (THIS_ IDirectMusicSegment * pSegment, BOOL fTrackScale, IDirectMusicChordMap * pChordMap);
};
typedef IDirectMusicComposer IDirectMusicComposer8;
#undef  INTERFACE
#define INTERFACE  IDirectMusicPatternTrack
DECLARE_INTERFACE_(IDirectMusicPatternTrack, IUnknown)
{
	STDMETHOD(QueryInterface) (THIS_ REFIID, LPVOID FAR *);
	STDMETHOD_(ULONG, AddRef) (THIS);
	STDMETHOD_(ULONG, Release) (THIS);
	STDMETHOD(CreateSegment) (THIS_ IDirectMusicStyle * pStyle, IDirectMusicSegment ** ppSegment);
	STDMETHOD(SetVariation) (THIS_ IDirectMusicSegmentState * pSegState, DWORD dwVariationFlags, DWORD dwPart);
	STDMETHOD(SetPatternByName) (THIS_ IDirectMusicSegmentState * pSegState, WCHAR * wszName, IDirectMusicStyle * pStyle, DWORD dwPatternType, DWORD * pdwLength);
};
typedef IDirectMusicPatternTrack IDirectMusicPatternTrack8;
#undef  INTERFACE
#define INTERFACE  IDirectMusicScript
DECLARE_INTERFACE_(IDirectMusicScript, IUnknown)
{
	STDMETHOD(QueryInterface) (THIS_ REFIID, LPVOID FAR *);
	STDMETHOD_(ULONG, AddRef) (THIS);
	STDMETHOD_(ULONG, Release) (THIS);
	STDMETHOD(Init) (THIS_ IDirectMusicPerformance * pPerformance, DMUS_SCRIPT_ERRORINFO * pErrorInfo);
	STDMETHOD(CallRoutine) (THIS_ WCHAR * pwszRoutineName, DMUS_SCRIPT_ERRORINFO * pErrorInfo);
	STDMETHOD(SetVariableVariant) (THIS_ WCHAR * pwszVariableName, VARIANT varValue, BOOL fSetRef, DMUS_SCRIPT_ERRORINFO * pErrorInfo);
	STDMETHOD(GetVariableVariant) (THIS_ WCHAR * pwszVariableName, VARIANT * pvarValue, DMUS_SCRIPT_ERRORINFO * pErrorInfo);
	STDMETHOD(SetVariableNumber) (THIS_ WCHAR * pwszVariableName, LONG lValue, DMUS_SCRIPT_ERRORINFO * pErrorInfo);
	STDMETHOD(GetVariableNumber) (THIS_ WCHAR * pwszVariableName, LONG * plValue, DMUS_SCRIPT_ERRORINFO * pErrorInfo);
	STDMETHOD(SetVariableObject) (THIS_ WCHAR * pwszVariableName, IUnknown * punkValue, DMUS_SCRIPT_ERRORINFO * pErrorInfo);
	STDMETHOD(GetVariableObject) (THIS_ WCHAR * pwszVariableName, REFIID riid, LPVOID FAR * ppv, DMUS_SCRIPT_ERRORINFO * pErrorInfo);
	STDMETHOD(EnumRoutine) (THIS_ DWORD dwIndex, WCHAR * pwszName);
	STDMETHOD(EnumVariable) (THIS_ DWORD dwIndex, WCHAR * pwszName);
};
typedef IDirectMusicScript IDirectMusicScript8;
#undef  INTERFACE
#define INTERFACE  IDirectMusicContainer
DECLARE_INTERFACE_(IDirectMusicContainer, IUnknown)
{
	STDMETHOD(QueryInterface) (THIS_ REFIID, LPVOID FAR *);
	STDMETHOD_(ULONG, AddRef) (THIS);
	STDMETHOD_(ULONG, Release) (THIS);
	STDMETHOD(EnumObject) (THIS_ REFGUID rguidClass, DWORD dwIndex, LPDMUS_OBJECTDESC pDesc, WCHAR * pwszAlias);
};
typedef IDirectMusicContainer IDirectMusicContainer8;
#undef  INTERFACE
#define INTERFACE  IDirectMusicSong
DECLARE_INTERFACE_(IDirectMusicSong, IUnknown)
{
	STDMETHOD(QueryInterface) (THIS_ REFIID, LPVOID FAR *);
	STDMETHOD_(ULONG, AddRef) (THIS);
	STDMETHOD_(ULONG, Release) (THIS);
	STDMETHOD(Compose) (THIS);
	STDMETHOD(GetParam) (THIS_ REFGUID rguidType, DWORD dwGroupBits, DWORD dwIndex, MUSIC_TIME mtTime, MUSIC_TIME * pmtNext, void *pParam);
	STDMETHOD(GetSegment) (THIS_ WCHAR * pwzName, IDirectMusicSegment ** ppSegment);
	STDMETHOD(GetAudioPathConfig) (THIS_ IUnknown ** ppAudioPathConfig);
	STDMETHOD(Download) (THIS_ IUnknown * pAudioPath);
	STDMETHOD(Unload) (THIS_ IUnknown * pAudioPath);
	STDMETHOD(EnumSegment) (THIS_ DWORD dwIndex, IDirectMusicSegment ** ppSegment);
};
typedef IDirectMusicSong IDirectMusicSong8;
DEFINE_GUID(CLSID_DirectMusicPerformance,0xd2ac2881, 0xb39b, 0x11d1, 0x87, 0x4, 0x0, 0x60, 0x8, 0x93, 0xb1, 0xbd);
DEFINE_GUID(CLSID_DirectMusicSegment,0xd2ac2882, 0xb39b, 0x11d1, 0x87, 0x4, 0x0, 0x60, 0x8, 0x93, 0xb1, 0xbd);
DEFINE_GUID(CLSID_DirectMusicSegmentState,0xd2ac2883, 0xb39b, 0x11d1, 0x87, 0x4, 0x0, 0x60, 0x8, 0x93, 0xb1, 0xbd);
DEFINE_GUID(CLSID_DirectMusicGraph,0xd2ac2884, 0xb39b, 0x11d1, 0x87, 0x4, 0x0, 0x60, 0x8, 0x93, 0xb1, 0xbd);
DEFINE_GUID(CLSID_DirectMusicStyle,0xd2ac288a, 0xb39b, 0x11d1, 0x87, 0x4, 0x0, 0x60, 0x8, 0x93, 0xb1, 0xbd);
DEFINE_GUID(CLSID_DirectMusicChordMap,0xd2ac288f, 0xb39b, 0x11d1, 0x87, 0x4, 0x0, 0x60, 0x8, 0x93, 0xb1, 0xbd);
DEFINE_GUID(CLSID_DirectMusicComposer,0xd2ac2890, 0xb39b, 0x11d1, 0x87, 0x4, 0x0, 0x60, 0x8, 0x93, 0xb1, 0xbd);
DEFINE_GUID(CLSID_DirectMusicLoader,0xd2ac2892, 0xb39b, 0x11d1, 0x87, 0x4, 0x0, 0x60, 0x8, 0x93, 0xb1, 0xbd);
DEFINE_GUID(CLSID_DirectMusicBand,0x79ba9e00, 0xb6ee, 0x11d1, 0x86, 0xbe, 0x0, 0xc0, 0x4f, 0xbf, 0x8f, 0xef);
DEFINE_GUID(CLSID_DirectMusicPatternTrack,0xd2ac2897, 0xb39b, 0x11d1, 0x87, 0x4, 0x0, 0x60, 0x8, 0x93, 0xb1, 0xbd);
DEFINE_GUID(CLSID_DirectMusicScript,0x810b5013, 0xe88d, 0x11d2, 0x8b, 0xc1, 0x0, 0x60, 0x8, 0x93, 0xb1, 0xb6);
DEFINE_GUID(CLSID_DirectMusicContainer,0x9301e380, 0x1f22, 0x11d3, 0x82, 0x26, 0xd2, 0xfa, 0x76, 0x25, 0x5d, 0x47);
DEFINE_GUID(CLSID_DirectSoundWave,0x8a667154, 0xf9cb, 0x11d2, 0xad, 0x8a, 0x0, 0x60, 0xb0, 0x57, 0x5a, 0xbc);
DEFINE_GUID(CLSID_DirectMusicSong, 0xaed5f0a5, 0xd972, 0x483d, 0xa3, 0x84, 0x64, 0x9d, 0xfe, 0xb9, 0xc1, 0x81);
DEFINE_GUID(CLSID_DirectMusicAudioPathConfig,0xee0b9ca0, 0xa81e, 0x11d3, 0x9b, 0xd1, 0x0, 0x80, 0xc7, 0x15, 0xa, 0x74);
DEFINE_GUID(GUID_DirectMusicAllTypes,0xd2ac2893, 0xb39b, 0x11d1, 0x87, 0x4, 0x0, 0x60, 0x8, 0x93, 0xb1, 0xbd);
DEFINE_GUID(GUID_NOTIFICATION_SEGMENT,0xd2ac2899, 0xb39b, 0x11d1, 0x87, 0x4, 0x0, 0x60, 0x8, 0x93, 0xb1, 0xbd);
DEFINE_GUID(GUID_NOTIFICATION_PERFORMANCE,0x81f75bc5, 0x4e5d, 0x11d2, 0xbc, 0xc7, 0x0, 0xa0, 0xc9, 0x22, 0xe6, 0xeb);
DEFINE_GUID(GUID_NOTIFICATION_MEASUREANDBEAT,0xd2ac289a, 0xb39b, 0x11d1, 0x87, 0x4, 0x0, 0x60, 0x8, 0x93, 0xb1, 0xbd);
DEFINE_GUID(GUID_NOTIFICATION_CHORD,0xd2ac289b, 0xb39b, 0x11d1, 0x87, 0x4, 0x0, 0x60, 0x8, 0x93, 0xb1, 0xbd);
DEFINE_GUID(GUID_NOTIFICATION_COMMAND,0xd2ac289c, 0xb39b, 0x11d1, 0x87, 0x4, 0x0, 0x60, 0x8, 0x93, 0xb1, 0xbd);
DEFINE_GUID(GUID_NOTIFICATION_RECOMPOSE, 0xd348372b, 0x945b, 0x45ae, 0xa5, 0x22, 0x45, 0xf, 0x12, 0x5b, 0x84, 0xa5);
DEFINE_GUID(GUID_CommandParam,0xd2ac289d, 0xb39b, 0x11d1, 0x87, 0x4, 0x0, 0x60, 0x8, 0x93, 0xb1, 0xbd);
DEFINE_GUID(GUID_CommandParam2, 0x28f97ef7, 0x9538, 0x11d2, 0x97, 0xa9, 0x0, 0xc0, 0x4f, 0xa3, 0x6e, 0x58);
DEFINE_GUID(GUID_CommandParamNext, 0x472afe7a, 0x281b, 0x11d3, 0x81, 0x7d, 0x0, 0xc0, 0x4f, 0xa3, 0x6e, 0x58);
DEFINE_GUID(GUID_ChordParam,0xd2ac289e, 0xb39b, 0x11d1, 0x87, 0x4, 0x0, 0x60, 0x8, 0x93, 0xb1, 0xbd);
DEFINE_GUID(GUID_RhythmParam,0xd2ac289f, 0xb39b, 0x11d1, 0x87, 0x4, 0x0, 0x60, 0x8, 0x93, 0xb1, 0xbd);
DEFINE_GUID(GUID_IDirectMusicStyle,0xd2ac28a1, 0xb39b, 0x11d1, 0x87, 0x4, 0x0, 0x60, 0x8, 0x93, 0xb1, 0xbd);
DEFINE_GUID(GUID_TimeSignature,0xd2ac28a4, 0xb39b, 0x11d1, 0x87, 0x4, 0x0, 0x60, 0x8, 0x93, 0xb1, 0xbd);
DEFINE_GUID(GUID_TempoParam,0xd2ac28a5, 0xb39b, 0x11d1, 0x87, 0x4, 0x0, 0x60, 0x8, 0x93, 0xb1, 0xbd);
DEFINE_GUID(GUID_Valid_Start_Time,0x7f6b1760, 0x1fdb, 0x11d3, 0x82, 0x26, 0x44, 0x45, 0x53, 0x54, 0x0, 0x0);
DEFINE_GUID(GUID_Play_Marker,0xd8761a41, 0x801a, 0x11d3, 0x9b, 0xd1, 0xda, 0xf7, 0xe1, 0xc3, 0xd8, 0x34);
DEFINE_GUID(GUID_BandParam,0x2bb1938, 0xcb8b, 0x11d2, 0x8b, 0xb9, 0x0, 0x60, 0x8, 0x93, 0xb1, 0xb6);
typedef struct _DMUS_BAND_PARAM
{
    MUSIC_TIME  mtTimePhysical;
    IDirectMusicBand *pBand;
} DMUS_BAND_PARAM;
DEFINE_GUID(GUID_IDirectMusicBand,0xd2ac28ac, 0xb39b, 0x11d1, 0x87, 0x4, 0x0, 0x60, 0x8, 0x93, 0xb1, 0xbd);
DEFINE_GUID(GUID_IDirectMusicChordMap,0xd2ac28ad, 0xb39b, 0x11d1, 0x87, 0x4, 0x0, 0x60, 0x8, 0x93, 0xb1, 0xbd);
DEFINE_GUID(GUID_MuteParam,0xd2ac28af, 0xb39b, 0x11d1, 0x87, 0x4, 0x0, 0x60, 0x8, 0x93, 0xb1, 0xbd);
DEFINE_GUID(GUID_Download,0xd2ac28a7, 0xb39b, 0x11d1, 0x87, 0x4, 0x0, 0x60, 0x8, 0x93, 0xb1, 0xbd);
DEFINE_GUID(GUID_Unload,0xd2ac28a8, 0xb39b, 0x11d1, 0x87, 0x4, 0x0, 0x60, 0x8, 0x93, 0xb1, 0xbd);
DEFINE_GUID(GUID_ConnectToDLSCollection, 0x1db1ae6b, 0xe92e, 0x11d1, 0xa8, 0xc5, 0x0, 0xc0, 0x4f, 0xa3, 0x72, 0x6e);
DEFINE_GUID(GUID_Enable_Auto_Download,0xd2ac28a9, 0xb39b, 0x11d1, 0x87, 0x4, 0x0, 0x60, 0x8, 0x93, 0xb1, 0xbd);
DEFINE_GUID(GUID_Disable_Auto_Download,0xd2ac28aa, 0xb39b, 0x11d1, 0x87, 0x4, 0x0, 0x60, 0x8, 0x93, 0xb1, 0xbd);
DEFINE_GUID(GUID_Clear_All_Bands,0xd2ac28ab, 0xb39b, 0x11d1, 0x87, 0x4, 0x0, 0x60, 0x8, 0x93, 0xb1, 0xbd);
DEFINE_GUID(GUID_StandardMIDIFile, 0x6621075, 0xe92e, 0x11d1, 0xa8, 0xc5, 0x0, 0xc0, 0x4f, 0xa3, 0x72, 0x6e);
#define GUID_IgnoreBankSelectForGM 	GUID_StandardMIDIFile
DEFINE_GUID(GUID_DisableTimeSig, 0x45fc707b, 0x1db4, 0x11d2, 0xbc, 0xac, 0x0, 0xa0, 0xc9, 0x22, 0xe6, 0xeb);
DEFINE_GUID(GUID_EnableTimeSig, 0x45fc707c, 0x1db4, 0x11d2, 0xbc, 0xac, 0x0, 0xa0, 0xc9, 0x22, 0xe6, 0xeb);
DEFINE_GUID(GUID_DisableTempo, 0x45fc707d, 0x1db4, 0x11d2, 0xbc, 0xac, 0x0, 0xa0, 0xc9, 0x22, 0xe6, 0xeb);
DEFINE_GUID(GUID_EnableTempo, 0x45fc707e, 0x1db4, 0x11d2, 0xbc, 0xac, 0x0, 0xa0, 0xc9, 0x22, 0xe6, 0xeb);
DEFINE_GUID(GUID_SeedVariations, 0x65b76fa5, 0xff37, 0x11d2, 0x81, 0x4e, 0x0, 0xc0, 0x4f, 0xa3, 0x6e, 0x58);
DEFINE_GUID(GUID_MelodyFragment, 0xb291c7f2, 0xb616, 0x11d2, 0x97, 0xfa, 0x0, 0xc0, 0x4f, 0xa3, 0x6e, 0x58);
DEFINE_GUID(GUID_Clear_All_MelodyFragments, 0x8509fee6, 0xb617, 0x11d2, 0x97, 0xfa, 0x0, 0xc0, 0x4f, 0xa3, 0x6e, 0x58);
DEFINE_GUID(GUID_Variations, 0x11f72cce, 0x26e6, 0x4ecd, 0xaf, 0x2e, 0xd6, 0x68, 0xe6, 0x67, 0x7, 0xd8);
typedef struct _DMUS_VARIATIONS_PARAM
{
    DWORD   dwPChannelsUsed;
    DWORD*  padwPChannels;
    DWORD*  padwVariations;
} DMUS_VARIATIONS_PARAM;
DEFINE_GUID(GUID_DownloadToAudioPath,0x9f2c0341, 0xc5c4, 0x11d3, 0x9b, 0xd1, 0x44, 0x45, 0x53, 0x54, 0x0, 0x0);
DEFINE_GUID(GUID_UnloadFromAudioPath,0x9f2c0342, 0xc5c4, 0x11d3, 0x9b, 0xd1, 0x44, 0x45, 0x53, 0x54, 0x0, 0x0);
DEFINE_GUID(GUID_PerfMasterTempo,0xd2ac28b0, 0xb39b, 0x11d1, 0x87, 0x4, 0x0, 0x60, 0x8, 0x93, 0xb1, 0xbd);
DEFINE_GUID(GUID_PerfMasterVolume,0xd2ac28b1, 0xb39b, 0x11d1, 0x87, 0x4, 0x0, 0x60, 0x8, 0x93, 0xb1, 0xbd);
DEFINE_GUID(GUID_PerfMasterGrooveLevel,0xd2ac28b2, 0xb39b, 0x11d1, 0x87, 0x4, 0x0, 0x60, 0x8, 0x93, 0xb1, 0xbd);
DEFINE_GUID(GUID_PerfAutoDownload, 0xfb09565b, 0x3631, 0x11d2, 0xbc, 0xb8, 0x0, 0xa0, 0xc9, 0x22, 0xe6, 0xeb);
DEFINE_GUID(GUID_DefaultGMCollection, 0xf17e8673, 0xc3b4, 0x11d1, 0x87, 0xb, 0x0, 0x60, 0x8, 0x93, 0xb1, 0xbd);
DEFINE_GUID(GUID_Synth_Default,0x26bb9432, 0x45fe, 0x48d3, 0xa3, 0x75, 0x24, 0x72, 0xc5, 0xe3, 0xe7, 0x86);
DEFINE_GUID(GUID_Buffer_Reverb,0x186cc541, 0xdb29, 0x11d3, 0x9b, 0xd1, 0x0, 0x80, 0xc7, 0x15, 0xa, 0x74);
DEFINE_GUID(GUID_Buffer_EnvReverb,0x186cc542, 0xdb29, 0x11d3, 0x9b, 0xd1, 0x0, 0x80, 0xc7, 0x15, 0xa, 0x74);
DEFINE_GUID(GUID_Buffer_Stereo,0x186cc545, 0xdb29, 0x11d3, 0x9b, 0xd1, 0x0, 0x80, 0xc7, 0x15, 0xa, 0x74);
DEFINE_GUID(GUID_Buffer_3D_Dry,0x186cc546, 0xdb29, 0x11d3, 0x9b, 0xd1, 0x0, 0x80, 0xc7, 0x15, 0xa, 0x74);
DEFINE_GUID(GUID_Buffer_Mono,0x186cc547, 0xdb29, 0x11d3, 0x9b, 0xd1, 0x0, 0x80, 0xc7, 0x15, 0xa, 0x74);
DEFINE_GUID(IID_IDirectMusicLoader, 0x2ffaaca2, 0x5dca, 0x11d2, 0xaf, 0xa6, 0x0, 0xaa, 0x0, 0x24, 0xd8, 0xb6);
DEFINE_GUID(IID_IDirectMusicGetLoader,0x68a04844, 0xd13d, 0x11d1, 0xaf, 0xa6, 0x0, 0xaa, 0x0, 0x24, 0xd8, 0xb6);
DEFINE_GUID(IID_IDirectMusicObject,0xd2ac28b5, 0xb39b, 0x11d1, 0x87, 0x4, 0x0, 0x60, 0x8, 0x93, 0xb1, 0xbd);
DEFINE_GUID(IID_IDirectMusicSegment, 0xf96029a2, 0x4282, 0x11d2, 0x87, 0x17, 0x0, 0x60, 0x8, 0x93, 0xb1, 0xbd);
DEFINE_GUID(IID_IDirectMusicSegmentState, 0xa3afdcc7, 0xd3ee, 0x11d1, 0xbc, 0x8d, 0x0, 0xa0, 0xc9, 0x22, 0xe6, 0xeb);
DEFINE_GUID(IID_IDirectMusicPerformance,0x7d43d03, 0x6523, 0x11d2, 0x87, 0x1d, 0x0, 0x60, 0x8, 0x93, 0xb1, 0xbd);
DEFINE_GUID(IID_IDirectMusicGraph,0x2befc277, 0x5497, 0x11d2, 0xbc, 0xcb, 0x0, 0xa0, 0xc9, 0x22, 0xe6, 0xeb);
DEFINE_GUID(IID_IDirectMusicStyle,0xd2ac28bd, 0xb39b, 0x11d1, 0x87, 0x4, 0x0, 0x60, 0x8, 0x93, 0xb1, 0xbd);
DEFINE_GUID(IID_IDirectMusicChordMap,0xd2ac28be, 0xb39b, 0x11d1, 0x87, 0x4, 0x0, 0x60, 0x8, 0x93, 0xb1, 0xbd);
DEFINE_GUID(IID_IDirectMusicComposer,0xd2ac28bf, 0xb39b, 0x11d1, 0x87, 0x4, 0x0, 0x60, 0x8, 0x93, 0xb1, 0xbd);
DEFINE_GUID(IID_IDirectMusicBand,0xd2ac28c0, 0xb39b, 0x11d1, 0x87, 0x4, 0x0, 0x60, 0x8, 0x93, 0xb1, 0xbd);
DEFINE_GUID(IID_IDirectMusicPerformance2,0x6fc2cae0, 0xbc78, 0x11d2, 0xaf, 0xa6, 0x0, 0xaa, 0x0, 0x24, 0xd8, 0xb6);
DEFINE_GUID(IID_IDirectMusicSegment2, 0xd38894d1, 0xc052, 0x11d2, 0x87, 0x2f, 0x0, 0x60, 0x8, 0x93, 0xb1, 0xbd);
DEFINE_GUID(IID_IDirectMusicLoader8, 0x19e7c08c, 0xa44, 0x4e6a, 0xa1, 0x16, 0x59, 0x5a, 0x7c, 0xd5, 0xde, 0x8c);
DEFINE_GUID(IID_IDirectMusicPerformance8, 0x679c4137, 0xc62e, 0x4147, 0xb2, 0xb4, 0x9d, 0x56, 0x9a, 0xcb, 0x25, 0x4c);
DEFINE_GUID(IID_IDirectMusicSegment8,0xc6784488, 0x41a3, 0x418f, 0xaa, 0x15, 0xb3, 0x50, 0x93, 0xba, 0x42, 0xd4);
DEFINE_GUID(IID_IDirectMusicSegmentState8, 0xa50e4730, 0xae4, 0x48a7, 0x98, 0x39, 0xbc, 0x4, 0xbf, 0xe0, 0x77, 0x72);
DEFINE_GUID(IID_IDirectMusicStyle8, 0xfd24ad8a, 0xa260, 0x453d, 0xbf, 0x50, 0x6f, 0x93, 0x84, 0xf7, 0x9, 0x85);
DEFINE_GUID(IID_IDirectMusicPatternTrack, 0x51c22e10, 0xb49f, 0x46fc, 0xbe, 0xc2, 0xe6, 0x28, 0x8f, 0xb9, 0xed, 0xe6);
#define IID_IDirectMusicPatternTrack8 IID_IDirectMusicPatternTrack
DEFINE_GUID(IID_IDirectMusicScript, 0x2252373a, 0x5814, 0x489b, 0x82, 0x9, 0x31, 0xfe, 0xde, 0xba, 0xf1, 0x37);
#define IID_IDirectMusicScript8 IID_IDirectMusicScript
DEFINE_GUID(IID_IDirectMusicContainer, 0x9301e386, 0x1f22, 0x11d3, 0x82, 0x26, 0xd2, 0xfa, 0x76, 0x25, 0x5d, 0x47);
#define IID_IDirectMusicContainer8 IID_IDirectMusicContainer
DEFINE_GUID(IID_IDirectMusicSong, 0xa862b2ec, 0x3676, 0x4982, 0x85, 0xa, 0x78, 0x42, 0x77, 0x5e, 0x1d, 0x86);
#define IID_IDirectMusicSong8 IID_IDirectMusicSong
DEFINE_GUID(IID_IDirectMusicAudioPath,0xc87631f5, 0x23be, 0x4986, 0x88, 0x36, 0x5, 0x83, 0x2f, 0xcc, 0x48, 0xf9);
#define IID_IDirectMusicAudioPath8 IID_IDirectMusicAudioPath
#define IID_IDirectMusicGetLoader8 IID_IDirectMusicGetLoader
#define IID_IDirectMusicChordMap8 IID_IDirectMusicChordMap
#define IID_IDirectMusicGraph8 IID_IDirectMusicGraph
#define IID_IDirectMusicBand8 IID_IDirectMusicBand
#define IID_IDirectMusicObject8 IID_IDirectMusicObject
#define IID_IDirectMusicComposer8 IID_IDirectMusicComposer
#include <poppack.h>
#endif

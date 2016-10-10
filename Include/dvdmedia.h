/*+@@file@@----------------------------------------------------------------*//*!
 \file		dvdmedia.h
 \par Description 
            Extension and update of headers for PellesC compiler suite.
 \par Project: 
            PellesC Headers extension
 \date		Created  on Sun Jun 19 17:05:52 2016
 \date		Modified on Sun Jun 19 17:05:52 2016
 \author	frankie
\*//*-@@file@@----------------------------------------------------------------*/

#ifndef __DVDMEDIA_H__
#define __DVDMEDIA_H__
#if __POCC__ >= 500
#pragma once
#endif
typedef enum {
    AM_PROPERTY_AC3_ERROR_CONCEALMENT = 1,
    AM_PROPERTY_AC3_ALTERNATE_AUDIO = 2,
    AM_PROPERTY_AC3_DOWNMIX = 3,
    AM_PROPERTY_AC3_BIT_STREAM_MODE = 4,
    AM_PROPERTY_AC3_DIALOGUE_LEVEL = 5,
    AM_PROPERTY_AC3_LANGUAGE_CODE = 6,
    AM_PROPERTY_AC3_ROOM_TYPE = 7
} AM_PROPERTY_AC3;
typedef struct  {
    BOOL        fRepeatPreviousBlock;
    BOOL        fErrorInCurrentBlock;
} AM_AC3_ERROR_CONCEALMENT, *PAM_AC3_ERROR_CONCEALMENT;
typedef struct {
    BOOL    fStereo;
    ULONG   DualMode;
} AM_AC3_ALTERNATE_AUDIO, *PAM_AC3_ALTERNATE_AUDIO;
#define AM_AC3_ALTERNATE_AUDIO_1     1
#define AM_AC3_ALTERNATE_AUDIO_2     2
#define AM_AC3_ALTERNATE_AUDIO_BOTH  3
typedef struct {
    BOOL        fDownMix;
    BOOL        fDolbySurround;
} AM_AC3_DOWNMIX, *PAM_AC3_DOWNMIX;
typedef struct {
    LONG        BitStreamMode;
} AM_AC3_BIT_STREAM_MODE, *PAM_AC3_BIT_STREAM_MODE;
#define AM_AC3_SERVICE_MAIN_AUDIO            0
#define AM_AC3_SERVICE_NO_DIALOG             1
#define AM_AC3_SERVICE_VISUALLY_IMPAIRED     2
#define AM_AC3_SERVICE_HEARING_IMPAIRED      3
#define AM_AC3_SERVICE_DIALOG_ONLY           4
#define AM_AC3_SERVICE_COMMENTARY            5
#define AM_AC3_SERVICE_EMERGENCY_FLASH       6
#define AM_AC3_SERVICE_VOICE_OVER            7
typedef struct {
    ULONG   DialogueLevel;
} AM_AC3_DIALOGUE_LEVEL, *PAM_AC3_DIALOGUE_LEVEL;
typedef struct {
    BOOL    fLargeRoom;
} AM_AC3_ROOM_TYPE, *PAM_AC3_ROOM_TYPE;
typedef enum {
    AM_PROPERTY_DVDSUBPIC_PALETTE = 0,
    AM_PROPERTY_DVDSUBPIC_HLI = 1,
    AM_PROPERTY_DVDSUBPIC_COMPOSIT_ON = 2
} AM_PROPERTY_DVDSUBPIC;
typedef struct _AM_DVD_YUV {
    UCHAR   Reserved;
    UCHAR   Y;
    UCHAR   U;
    UCHAR   V;
} AM_DVD_YUV, *PAM_DVD_YUV;
typedef struct _AM_PROPERTY_SPPAL {
    AM_DVD_YUV sppal[16];
} AM_PROPERTY_SPPAL, *PAM_PROPERTY_SPPAL;
typedef struct _AM_COLCON {
    UCHAR emph1col:4;
    UCHAR emph2col:4;
    UCHAR backcol:4;
    UCHAR patcol:4;
    UCHAR emph1con:4;
    UCHAR emph2con:4;
    UCHAR backcon:4;
    UCHAR patcon:4;
} AM_COLCON, *PAM_COLCON;
typedef struct _AM_PROPERTY_SPHLI {
    USHORT     HLISS;
    USHORT     Reserved;
    ULONG      StartPTM;
    ULONG      EndPTM;
    USHORT     StartX;
    USHORT     StartY;
    USHORT     StopX;
    USHORT     StopY;
    AM_COLCON  ColCon;
} AM_PROPERTY_SPHLI, *PAM_PROPERTY_SPHLI;
typedef BOOL AM_PROPERTY_COMPOSIT_ON, *PAM_PROPERTY_COMPOSIT_ON;
#define AM_UseNewCSSKey       0x1
#define AM_ReverseBlockStart  0x2
#define AM_ReverseBlockEnd    0x4
typedef enum {
    AM_PROPERTY_DVDCOPY_CHLG_KEY = 0x01,
    AM_PROPERTY_DVDCOPY_DVD_KEY1 = 0x02,
    AM_PROPERTY_DVDCOPY_DEC_KEY2 = 0x03,
    AM_PROPERTY_DVDCOPY_TITLE_KEY = 0x04,
    AM_PROPERTY_COPY_MACROVISION = 0x05,
    AM_PROPERTY_DVDCOPY_REGION = 0x06,
    AM_PROPERTY_DVDCOPY_SET_COPY_STATE = 0x07,
    AM_PROPERTY_COPY_ANALOG_COMPONENT = 0x08,
    AM_PROPERTY_COPY_DIGITAL_CP =   0x09, 
    AM_PROPERTY_COPY_DVD_SRM =          0x0a,
    AM_PROPERTY_DVDCOPY_SUPPORTS_NEW_KEYCOUNT = 0x0b,
    AM_PROPERTY_DVDCOPY_DISC_KEY = 0x80
} AM_PROPERTY_DVDCOPYPROT;
typedef enum _AM_DIGITAL_CP {
    AM_DIGITAL_CP_OFF = 0,
    AM_DIGITAL_CP_ON = 1,
    AM_DIGITAL_CP_DVD_COMPLIANT = 2
} AM_DIGITAL_CP;
typedef struct _AM_DVDCOPY_CHLGKEY {
    BYTE ChlgKey[10];
    BYTE Reserved[2];
} AM_DVDCOPY_CHLGKEY, *PAM_DVDCOPY_CHLGKEY;
typedef struct _AM_DVDCOPY_BUSKEY {
    BYTE BusKey[5];
    BYTE Reserved[1];
} AM_DVDCOPY_BUSKEY, *PAM_DVDCOPY_BUSKEY;
typedef struct _AM_DVDCOPY_DISCKEY {
    BYTE DiscKey[2048];
} AM_DVDCOPY_DISCKEY, *PAM_DVDCOPY_DISCKEY;
typedef struct AM_DVDCOPY_TITLEKEY {
    ULONG KeyFlags;
    ULONG Reserved1[2];
    UCHAR TitleKey[6];
    UCHAR Reserved2[2];
} AM_DVDCOPY_TITLEKEY, *PAM_DVDCOPY_TITLEKEY;
typedef struct _AM_COPY_MACROVISION {
    ULONG MACROVISIONLevel;
} AM_COPY_MACROVISION, *PAM_COPY_MACROVISION;
typedef struct AM_DVDCOPY_SET_COPY_STATE {
    ULONG DVDCopyState;
} AM_DVDCOPY_SET_COPY_STATE, *PAM_DVDCOPY_SET_COPY_STATE;
typedef enum {
    AM_DVDCOPYSTATE_INITIALIZE = 0,
    AM_DVDCOPYSTATE_INITIALIZE_TITLE = 1,
    AM_DVDCOPYSTATE_AUTHENTICATION_NOT_REQUIRED = 2,
    AM_DVDCOPYSTATE_AUTHENTICATION_REQUIRED = 3,
    AM_DVDCOPYSTATE_DONE = 4
} AM_DVDCOPYSTATE;
typedef enum {
    AM_MACROVISION_DISABLED = 0,
    AM_MACROVISION_LEVEL1 = 1,
    AM_MACROVISION_LEVEL2 = 2,
    AM_MACROVISION_LEVEL3 = 3
} AM_COPY_MACROVISION_LEVEL, *PAM_COPY_MACROVISION_LEVEL;
typedef struct _DVD_REGION {
    UCHAR CopySystem;
    UCHAR RegionData;
    UCHAR SystemRegion;
    UCHAR ResetCount;
} DVD_REGION, *PDVD_REGION;
#define AM_DVD_CGMS_RESERVED_MASK      0x00000078
#define AM_DVD_CGMS_COPY_PROTECT_MASK  0x00000018
#define AM_DVD_CGMS_COPY_PERMITTED     0x00000000
#define AM_DVD_CGMS_COPY_ONCE          0x00000010
#define AM_DVD_CGMS_NO_COPY            0x00000018
#define AM_DVD_COPYRIGHT_MASK          0x00000040
#define AM_DVD_NOT_COPYRIGHTED         0x00000000
#define AM_DVD_COPYRIGHTED             0x00000040
#define AM_DVD_SECTOR_PROTECT_MASK     0x00000020
#define AM_DVD_SECTOR_NOT_PROTECTED    0x00000000
#define AM_DVD_SECTOR_PROTECTED        0x00000020
enum AM_MPEG2Level {
    AM_MPEG2Level_Low = 1,
    AM_MPEG2Level_Main = 2,
    AM_MPEG2Level_High1440 = 3,
    AM_MPEG2Level_High = 4
};
enum AM_MPEG2Profile {
    AM_MPEG2Profile_Simple = 1,
    AM_MPEG2Profile_Main = 2,
    AM_MPEG2Profile_SNRScalable = 3,
    AM_MPEG2Profile_SpatiallyScalable = 4,
    AM_MPEG2Profile_High = 5
};
#define AMINTERLACE_IsInterlaced            0x00000001  
#define AMINTERLACE_1FieldPerSample         0x00000002  
#define AMINTERLACE_Field1First             0x00000004  
#define AMINTERLACE_UNUSED                  0x00000008  
#define AMINTERLACE_FieldPatternMask        0x00000030  
#define AMINTERLACE_FieldPatField1Only      0x00000000  
#define AMINTERLACE_FieldPatField2Only      0x00000010  
#define AMINTERLACE_FieldPatBothRegular     0x00000020  
#define AMINTERLACE_FieldPatBothIrregular   0x00000030  
#define AMINTERLACE_DisplayModeMask         0x000000c0
#define AMINTERLACE_DisplayModeBobOnly      0x00000000
#define AMINTERLACE_DisplayModeWeaveOnly    0x00000040
#define AMINTERLACE_DisplayModeBobOrWeave   0x00000080
#define AMCOPYPROTECT_RestrictDuplication   0x00000001  
#define AMMPEG2_DoPanScan           0x00000001  
#define AMMPEG2_DVDLine21Field1     0x00000002  
#define AMMPEG2_DVDLine21Field2     0x00000004  
#define AMMPEG2_SourceIsLetterboxed 0x00000008  
#define AMMPEG2_FilmCameraMode      0x00000010  
#define AMMPEG2_LetterboxAnalogOut  0x00000020  
#define AMMPEG2_DSS_UserData        0x00000040  
#define AMMPEG2_DVB_UserData        0x00000080  
#define AMMPEG2_27MhzTimebase       0x00000100  
#define AMMPEG2_WidescreenAnalogOut 0x00000200  
#define AMCONTROL_USED              0x00000001 
#define AMCONTROL_PAD_TO_4x3        0x00000002 
#define AMCONTROL_PAD_TO_16x9       0x00000004 
#define AMCONTROL_COLORINFO_PRESENT 0x00000080 
typedef struct tagVIDEOINFOHEADER2 {
    RECT                rcSource;
    RECT                rcTarget;
    DWORD               dwBitRate;
    DWORD               dwBitErrorRate;
    REFERENCE_TIME      AvgTimePerFrame;
    DWORD               dwInterlaceFlags;
    DWORD               dwCopyProtectFlags;
    DWORD               dwPictAspectRatioX;
    DWORD               dwPictAspectRatioY;
    union {
        DWORD dwControlFlags;
        DWORD dwReserved1;
    };
    DWORD               dwReserved2;
    BITMAPINFOHEADER    bmiHeader;
} VIDEOINFOHEADER2;
typedef struct tagMPEG2VIDEOINFO {
    VIDEOINFOHEADER2    hdr;
    DWORD               dwStartTimeCode;
    DWORD               cbSequenceHeader;
    DWORD               dwProfile;
    DWORD               dwLevel;
    DWORD               dwFlags;
    DWORD               dwSequenceHeader[1];
} MPEG2VIDEOINFO;
#define SIZE_MPEG2VIDEOINFO(pv) (FIELD_OFFSET(MPEG2VIDEOINFO, dwSequenceHeader[0]) + (pv)->cbSequenceHeader)
#define MPEG1_SEQUENCE_INFO(pv) ((const BYTE *)(pv)->bSequenceHeader)
#define MPEG2_SEQUENCE_INFO(pv) ((const BYTE *)(pv)->dwSequenceHeader)
#define AM_VIDEO_FLAG_FIELD_MASK        0x0003L 
#define AM_VIDEO_FLAG_INTERLEAVED_FRAME 0x0000L 
#define AM_VIDEO_FLAG_FIELD1            0x0001L 
#define AM_VIDEO_FLAG_FIELD2            0x0002L 
#define AM_VIDEO_FLAG_FIELD1FIRST       0x0004L 
#define AM_VIDEO_FLAG_WEAVE             0x0008L 
#define AM_VIDEO_FLAG_IPB_MASK          0x0030L 
#define AM_VIDEO_FLAG_I_SAMPLE          0x0000L 
#define AM_VIDEO_FLAG_P_SAMPLE          0x0010L 
#define AM_VIDEO_FLAG_B_SAMPLE          0x0020L 
#define AM_VIDEO_FLAG_REPEAT_FIELD      0x0040L 
typedef struct tagAM_DvdKaraokeData
{
    DWORD   dwDownmix;
    DWORD   dwSpeakerAssignment;
} AM_DvdKaraokeData;
typedef enum {
    AM_PROPERTY_DVDKARAOKE_ENABLE = 0,
    AM_PROPERTY_DVDKARAOKE_DATA = 1,
} AM_PROPERTY_DVDKARAOKE;
typedef enum {
    AM_RATE_SimpleRateChange = 1,
    AM_RATE_ExactRateChange  = 2,
    AM_RATE_MaxFullDataRate  = 3,
    AM_RATE_Step             = 4,
    AM_RATE_UseRateVersion   = 5,
    AM_RATE_QueryFullFrameRate =6,
    AM_RATE_QueryLastRateSegPTS =7,
    AM_RATE_CorrectTS        = 8,
    AM_RATE_ReverseMaxFullDataRate = 9,
    AM_RATE_ResetOnTimeDisc = 10,
    AM_RATE_QueryMapping    = 11
} AM_PROPERTY_TS_RATE_CHANGE;
typedef enum {
    AM_RATE_ChangeRate       = 1,
    AM_RATE_FullDataRateMax  = 2,
    AM_RATE_ReverseDecode    = 3,
    AM_RATE_DecoderPosition  = 4,
    AM_RATE_DecoderVersion   = 5
} AM_PROPERTY_DVD_RATE_CHANGE;
typedef struct {
    REFERENCE_TIME  StartTime;
    LONG        Rate;
} AM_SimpleRateChange;
typedef struct {
    LONG    lMaxForwardFullFrame ;
    LONG    lMaxReverseFullFrame ;
} AM_QueryRate ;
typedef struct {
    REFERENCE_TIME  OutputZeroTime;
    LONG        Rate;
} AM_ExactRateChange;
typedef LONG AM_MaxFullDataRate;
typedef DWORD AM_Step;
typedef struct {
    REFERENCE_TIME  StartInTime;
    REFERENCE_TIME  StartOutTime;
    LONG            Rate;
} AM_DVD_ChangeRate ;
typedef LONGLONG  AM_DVD_DecoderPosition ;
typedef enum {
    DVD_DIR_FORWARD  = 0,
    DVD_DIR_BACKWARD = 1
} DVD_PLAY_DIRECTION ;

#endif



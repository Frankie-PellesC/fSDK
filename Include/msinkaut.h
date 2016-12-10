/*+@@file@@----------------------------------------------------------------*//*!
 \file		msinkaut.h
 \par Description 
            Extension and update of headers for PellesC compiler suite.
 \par Project: 
            PellesC Headers extension
 \date		Created  on Sun Jul 17 00:53:48 2016
 \date		Modified on Sun Jul 17 00:53:48 2016
 \author	frankie
\*//*-@@file@@----------------------------------------------------------------*/

#ifndef __REQUIRED_RPCNDR_H_VERSION__
#define __REQUIRED_RPCNDR_H_VERSION__ 500
#endif
#ifndef __REQUIRED_RPCSAL_H_VERSION__
#define __REQUIRED_RPCSAL_H_VERSION__ 100
#endif
#include <rpc.h>
#include <rpcndr.h>
#ifndef __RPCNDR_H_VERSION__
#error this stub requires an updated version of <rpcndr.h>
#endif
#ifndef __msinkaut_h__
#define __msinkaut_h__
#if __POCC__ >= 500
#pragma once
#endif
#ifndef __IInkRectangle_FWD_DEFINED__
#define __IInkRectangle_FWD_DEFINED__
typedef interface IInkRectangle IInkRectangle;
#endif
#ifndef __IInkExtendedProperty_FWD_DEFINED__
#define __IInkExtendedProperty_FWD_DEFINED__
typedef interface IInkExtendedProperty IInkExtendedProperty;
#endif
#ifndef __IInkExtendedProperties_FWD_DEFINED__
#define __IInkExtendedProperties_FWD_DEFINED__
typedef interface IInkExtendedProperties IInkExtendedProperties;
#endif
#ifndef __IInkDrawingAttributes_FWD_DEFINED__
#define __IInkDrawingAttributes_FWD_DEFINED__
typedef interface IInkDrawingAttributes IInkDrawingAttributes;
#endif
#ifndef __IInkTransform_FWD_DEFINED__
#define __IInkTransform_FWD_DEFINED__
typedef interface IInkTransform IInkTransform;
#endif
#ifndef __IInkGesture_FWD_DEFINED__
#define __IInkGesture_FWD_DEFINED__
typedef interface IInkGesture IInkGesture;
#endif
#ifndef __IInkCursor_FWD_DEFINED__
#define __IInkCursor_FWD_DEFINED__
typedef interface IInkCursor IInkCursor;
#endif
#ifndef __IInkCursors_FWD_DEFINED__
#define __IInkCursors_FWD_DEFINED__
typedef interface IInkCursors IInkCursors;
#endif
#ifndef __IInkCursorButton_FWD_DEFINED__
#define __IInkCursorButton_FWD_DEFINED__
typedef interface IInkCursorButton IInkCursorButton;
#endif
#ifndef __IInkCursorButtons_FWD_DEFINED__
#define __IInkCursorButtons_FWD_DEFINED__
typedef interface IInkCursorButtons IInkCursorButtons;
#endif
#ifndef __IInkTablet_FWD_DEFINED__
#define __IInkTablet_FWD_DEFINED__
typedef interface IInkTablet IInkTablet;
#endif
#ifndef __IInkTablet2_FWD_DEFINED__
#define __IInkTablet2_FWD_DEFINED__
typedef interface IInkTablet2 IInkTablet2;
#endif
#ifndef __IInkTablet3_FWD_DEFINED__
#define __IInkTablet3_FWD_DEFINED__
typedef interface IInkTablet3 IInkTablet3;
#endif
#ifndef __IInkTablets_FWD_DEFINED__
#define __IInkTablets_FWD_DEFINED__
typedef interface IInkTablets IInkTablets;
#endif
#ifndef __IInkStrokeDisp_FWD_DEFINED__
#define __IInkStrokeDisp_FWD_DEFINED__
typedef interface IInkStrokeDisp IInkStrokeDisp;
#endif
#ifndef __IInkStrokes_FWD_DEFINED__
#define __IInkStrokes_FWD_DEFINED__
typedef interface IInkStrokes IInkStrokes;
#endif
#ifndef __IInkCustomStrokes_FWD_DEFINED__
#define __IInkCustomStrokes_FWD_DEFINED__
typedef interface IInkCustomStrokes IInkCustomStrokes;
#endif
#ifndef ___IInkStrokesEvents_FWD_DEFINED__
#define ___IInkStrokesEvents_FWD_DEFINED__
typedef interface _IInkStrokesEvents _IInkStrokesEvents;
#endif
#ifndef __IInkDisp_FWD_DEFINED__
#define __IInkDisp_FWD_DEFINED__
typedef interface IInkDisp IInkDisp;
#endif
#ifndef ___IInkEvents_FWD_DEFINED__
#define ___IInkEvents_FWD_DEFINED__
typedef interface _IInkEvents _IInkEvents;
#endif
#ifndef __IInkRenderer_FWD_DEFINED__
#define __IInkRenderer_FWD_DEFINED__
typedef interface IInkRenderer IInkRenderer;
#endif
#ifndef __IInkCollector_FWD_DEFINED__
#define __IInkCollector_FWD_DEFINED__
typedef interface IInkCollector IInkCollector;
#endif
#ifndef ___IInkCollectorEvents_FWD_DEFINED__
#define ___IInkCollectorEvents_FWD_DEFINED__
typedef interface _IInkCollectorEvents _IInkCollectorEvents;
#endif
#ifndef __IInkOverlay_FWD_DEFINED__
#define __IInkOverlay_FWD_DEFINED__
typedef interface IInkOverlay IInkOverlay;
#endif
#ifndef ___IInkOverlayEvents_FWD_DEFINED__
#define ___IInkOverlayEvents_FWD_DEFINED__
typedef interface _IInkOverlayEvents _IInkOverlayEvents;
#endif
#ifndef __IInkPicture_FWD_DEFINED__
#define __IInkPicture_FWD_DEFINED__
typedef interface IInkPicture IInkPicture;
#endif
#ifndef ___IInkPictureEvents_FWD_DEFINED__
#define ___IInkPictureEvents_FWD_DEFINED__
typedef interface _IInkPictureEvents _IInkPictureEvents;
#endif
#ifndef __IInkRecognizer_FWD_DEFINED__
#define __IInkRecognizer_FWD_DEFINED__
typedef interface IInkRecognizer IInkRecognizer;
#endif
#ifndef __IInkRecognizer2_FWD_DEFINED__
#define __IInkRecognizer2_FWD_DEFINED__
typedef interface IInkRecognizer2 IInkRecognizer2;
#endif
#ifndef __IInkRecognizers_FWD_DEFINED__
#define __IInkRecognizers_FWD_DEFINED__
typedef interface IInkRecognizers IInkRecognizers;
#endif
#ifndef ___IInkRecognitionEvents_FWD_DEFINED__
#define ___IInkRecognitionEvents_FWD_DEFINED__
typedef interface _IInkRecognitionEvents _IInkRecognitionEvents;
#endif
#ifndef __IInkRecognizerContext_FWD_DEFINED__
#define __IInkRecognizerContext_FWD_DEFINED__
typedef interface IInkRecognizerContext IInkRecognizerContext;
#endif
#ifndef __IInkRecognizerContext2_FWD_DEFINED__
#define __IInkRecognizerContext2_FWD_DEFINED__
typedef interface IInkRecognizerContext2 IInkRecognizerContext2;
#endif
#ifndef __IInkRecognitionResult_FWD_DEFINED__
#define __IInkRecognitionResult_FWD_DEFINED__
typedef interface IInkRecognitionResult IInkRecognitionResult;
#endif
#ifndef __IInkRecognitionAlternate_FWD_DEFINED__
#define __IInkRecognitionAlternate_FWD_DEFINED__
typedef interface IInkRecognitionAlternate IInkRecognitionAlternate;
#endif
#ifndef __IInkRecognitionAlternates_FWD_DEFINED__
#define __IInkRecognitionAlternates_FWD_DEFINED__
typedef interface IInkRecognitionAlternates IInkRecognitionAlternates;
#endif
#ifndef __IInkRecognizerGuide_FWD_DEFINED__
#define __IInkRecognizerGuide_FWD_DEFINED__
typedef interface IInkRecognizerGuide IInkRecognizerGuide;
#endif
#ifndef __IInkWordList_FWD_DEFINED__
#define __IInkWordList_FWD_DEFINED__
typedef interface IInkWordList IInkWordList;
#endif
#ifndef __IInkWordList2_FWD_DEFINED__
#define __IInkWordList2_FWD_DEFINED__
typedef interface IInkWordList2 IInkWordList2;
#endif
#ifndef __InkDisp_FWD_DEFINED__
#define __InkDisp_FWD_DEFINED__
typedef struct InkDisp InkDisp;
#endif
#ifndef __InkOverlay_FWD_DEFINED__
#define __InkOverlay_FWD_DEFINED__
typedef struct InkOverlay InkOverlay;
#endif
#ifndef __InkPicture_FWD_DEFINED__
#define __InkPicture_FWD_DEFINED__
typedef struct InkPicture InkPicture;
#endif
#ifndef __InkCollector_FWD_DEFINED__
#define __InkCollector_FWD_DEFINED__
typedef struct InkCollector InkCollector;
#endif
#ifndef __InkDrawingAttributes_FWD_DEFINED__
#define __InkDrawingAttributes_FWD_DEFINED__
typedef struct InkDrawingAttributes InkDrawingAttributes;
#endif
#ifndef __InkRectangle_FWD_DEFINED__
#define __InkRectangle_FWD_DEFINED__
typedef struct InkRectangle InkRectangle;
#endif
#ifndef __InkRenderer_FWD_DEFINED__
#define __InkRenderer_FWD_DEFINED__
typedef struct InkRenderer InkRenderer;
#endif
#ifndef __InkTransform_FWD_DEFINED__
#define __InkTransform_FWD_DEFINED__
typedef struct InkTransform InkTransform;
#endif
#ifndef __InkRecognizers_FWD_DEFINED__
#define __InkRecognizers_FWD_DEFINED__
typedef struct InkRecognizers InkRecognizers;
#endif
#ifndef __InkRecognizerContext_FWD_DEFINED__
#define __InkRecognizerContext_FWD_DEFINED__
typedef struct InkRecognizerContext InkRecognizerContext;
#endif
#ifndef __InkRecognizerGuide_FWD_DEFINED__
#define __InkRecognizerGuide_FWD_DEFINED__
typedef struct InkRecognizerGuide InkRecognizerGuide;
#endif
#ifndef __InkTablets_FWD_DEFINED__
#define __InkTablets_FWD_DEFINED__
typedef struct InkTablets InkTablets;
#endif
#ifndef __InkWordList_FWD_DEFINED__
#define __InkWordList_FWD_DEFINED__
typedef struct InkWordList InkWordList;
#endif
#ifndef __InkStrokes_FWD_DEFINED__
#define __InkStrokes_FWD_DEFINED__
typedef struct InkStrokes InkStrokes;
#endif
#ifndef __IInk_FWD_DEFINED__
#define __IInk_FWD_DEFINED__
typedef interface IInk IInk;
#endif
#ifndef __IInkLineInfo_FWD_DEFINED__
#define __IInkLineInfo_FWD_DEFINED__
typedef interface IInkLineInfo IInkLineInfo;
#endif
#ifndef __ISketchInk_FWD_DEFINED__
#define __ISketchInk_FWD_DEFINED__
typedef interface ISketchInk ISketchInk;
#endif
#ifndef __Ink_FWD_DEFINED__
#define __Ink_FWD_DEFINED__
typedef struct Ink Ink;
#endif
#ifndef __SketchInk_FWD_DEFINED__
#define __SketchInk_FWD_DEFINED__
typedef struct SketchInk SketchInk;
#endif
#include <oaidl.h>
#include <ocidl.h>
#include <tpcshrd.h>
#ifndef _MSINKAUT_IDL_H_
#define _MSINKAUT_IDL_H_
#include <TPCError.h>
typedef enum enumINKMETRIC_FLAGS
{
	IMF_FONT_SELECTED_IN_HDC = 0x1,
	IMF_ITALIC = 0x2,
	IMF_BOLD = 0x4
} INK_METRIC_FLAGS;
typedef enum enumGetCandidateFlags
{
	TCF_ALLOW_RECOGNITION = 0x1,
	TCF_FORCE_RECOGNITION = 0x2
} GET_DANDIDATE_FLAGS;
typedef struct tagINKMETRIC
{
	INT iHeight;
	INT iFontAscent;
	INT iFontDescent;
	DWORD dwFlags;
	COLORREF color;
} INKMETRIC;
typedef struct tagINKMETRIC *PINKMETRIC;
extern RPC_IF_HANDLE __MIDL_itf_msinkaut_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_msinkaut_0000_0000_v0_0_s_ifspec;
#ifndef __MSINKAUTLib_LIBRARY_DEFINED__
#define __MSINKAUTLib_LIBRARY_DEFINED__
#define INK_SERIALIZED_FORMAT	L"Ink Serialized Format"
typedef enum ItemSelectionConstants
{
	ISC_FirstElement = 0,
	ISC_AllElements = -1
} InkSelectionConstants;
#define STR_GUID_X                          L"{598A6A8F-52C0-4BA0-93AF-AF357411A561}"
#define STR_GUID_Y                          L"{B53F9F75-04E0-4498-A7EE-C30DBB5A9011}"
#define STR_GUID_Z                          L"{735ADB30-0EBB-4788-A0E4-0F316490055D}"
#define STR_GUID_PAKETSTATUS                L"{6E0E07BF-AFE7-4CF7-87D1-AF6446208418}"
#define STR_GUID_TIMERTICK                  L"{436510C5-FED3-45D1-8B76-71D3EA7A829D}"
#define STR_GUID_SERIALNUMBER               L"{78A81B56-0935-4493-BAAE-00541A8A16C4}"
#define STR_GUID_NORMALPRESSURE             L"{7307502D-F9F4-4E18-B3F2-2CE1B1A3610C}"
#define STR_GUID_TANGENTPRESSURE            L"{6DA4488B-5244-41EC-905B-32D89AB80809}"
#define STR_GUID_BUTTONPRESSURE             L"{8B7FEFC4-96AA-4BFE-AC26-8A5F0BE07BF5}"
#define STR_GUID_XTILTORIENTATION           L"{A8D07B3A-8BF0-40B0-95A9-B80A6BB787BF}"
#define STR_GUID_YTILTORIENTATION           L"{0E932389-1D77-43AF-AC00-5B950D6D4B2D}"
#define STR_GUID_AZIMUTHORIENTATION         L"{029123B4-8828-410B-B250-A0536595E5DC}"
#define STR_GUID_ALTITUDEORIENTATION        L"{82DEC5C7-F6BA-4906-894F-66D68DFC456C}"
#define STR_GUID_TWISTORIENTATION           L"{0D324960-13B2-41E4-ACE6-7AE9D43D2D3B}"
#define STR_GUID_PITCHROTATION              L"{7F7E57B7-BE37-4BE1-A356-7A84160E1893}"
#define STR_GUID_ROLLROTATION               L"{5D5D5E56-6BA9-4C5B-9FB0-851C91714E56}"
#define STR_GUID_YAWROTATION                L"{6A849980-7C3A-45B7-AA82-90A262950E89}"
#define STR_GUID_WIDTH                      L"{BAABE94D-2712-48F5-BE9D-8F8B5EA0711A}"
#define STR_GUID_HEIGHT                     L"{E61858D2-E447-4218-9D3F-18865C203DF4}"
#define STR_GUID_FINGERCONTACTCONFIDENCE    L"{E706C804-57F0-4F00-8A0C-853D57789BE9}"
#define STR_GUID_DEVICE_CONTACT_ID          L"{02585B91-049B-4750-9615-DF8948AB3C9C}"
const GUID GUID_PACKETPROPERTY_GUID_X = { 0x598a6a8f, 0x52c0, 0x4ba0, {0x93, 0xaf, 0xaf, 0x35, 0x74, 0x11, 0xa5, 0x61}};
const GUID GUID_PACKETPROPERTY_GUID_Y = { 0xb53f9f75, 0x04e0, 0x4498, {0xa7, 0xee, 0xc3, 0x0d, 0xbb, 0x5a, 0x90, 0x11}};
const GUID GUID_PACKETPROPERTY_GUID_Z = { 0x735adb30, 0x0ebb, 0x4788, {0xa0, 0xe4, 0x0f, 0x31, 0x64, 0x90, 0x05, 0x5d}};
const GUID GUID_PACKETPROPERTY_GUID_PACKET_STATUS = { 0x6e0e07bf, 0xafe7, 0x4cf7, {0x87, 0xd1, 0xaf, 0x64, 0x46, 0x20, 0x84, 0x18}};
const GUID GUID_PACKETPROPERTY_GUID_TIMER_TICK = { 0x436510c5, 0xfed3, 0x45d1, {0x8b, 0x76, 0x71, 0xd3, 0xea, 0x7a, 0x82, 0x9d}};
const GUID GUID_PACKETPROPERTY_GUID_SERIAL_NUMBER = { 0x78a81b56, 0x0935, 0x4493, {0xba, 0xae, 0x00, 0x54, 0x1a, 0x8a, 0x16, 0xc4}};
const GUID GUID_PACKETPROPERTY_GUID_NORMAL_PRESSURE = { 0x7307502d, 0xf9f4, 0x4e18, {0xb3, 0xf2, 0x2c, 0xe1, 0xb1, 0xa3, 0x61, 0x0c}};
const GUID GUID_PACKETPROPERTY_GUID_TANGENT_PRESSURE = { 0x6da4488b, 0x5244, 0x41ec, {0x90, 0x5b, 0x32, 0xd8, 0x9a, 0xb8, 0x08, 0x09}};
const GUID GUID_PACKETPROPERTY_GUID_BUTTON_PRESSURE = { 0x8b7fefc4, 0x96aa, 0x4bfe, {0xac, 0x26, 0x8a, 0x5f, 0x0b, 0xe0, 0x7b, 0xf5}};
const GUID GUID_PACKETPROPERTY_GUID_X_TILT_ORIENTATION = { 0xa8d07b3a, 0x8bf0, 0x40b0, {0x95, 0xa9, 0xb8, 0x0a, 0x6b, 0xb7, 0x87, 0xbf}};
const GUID GUID_PACKETPROPERTY_GUID_Y_TILT_ORIENTATION = { 0x0e932389, 0x1d77, 0x43af, {0xac, 0x00, 0x5b, 0x95, 0x0d, 0x6d, 0x4b, 0x2d}};
const GUID GUID_PACKETPROPERTY_GUID_AZIMUTH_ORIENTATION = { 0x029123b4, 0x8828, 0x410b, {0xb2, 0x50, 0xa0, 0x53, 0x65, 0x95, 0xe5, 0xdc}};
const GUID GUID_PACKETPROPERTY_GUID_ALTITUDE_ORIENTATION = { 0x82dec5c7, 0xf6ba, 0x4906, {0x89, 0x4f, 0x66, 0xd6, 0x8d, 0xfc, 0x45, 0x6c}};
const GUID GUID_PACKETPROPERTY_GUID_TWIST_ORIENTATION = { 0x0d324960, 0x13b2, 0x41e4, {0xac, 0xe6, 0x7a, 0xe9, 0xd4, 0x3d, 0x2d, 0x3b}};
const GUID GUID_PACKETPROPERTY_GUID_PITCH_ROTATION = { 0x7f7e57b7, 0xbe37, 0x4be1, {0xa3, 0x56, 0x7a, 0x84, 0x16, 0x0e, 0x18, 0x93}};
const GUID GUID_PACKETPROPERTY_GUID_ROLL_ROTATION = { 0x5d5d5e56, 0x6ba9, 0x4c5b, {0x9f, 0xb0, 0x85, 0x1c, 0x91, 0x71, 0x4e, 0x56}};
const GUID GUID_PACKETPROPERTY_GUID_YAW_ROTATION = { 0x6a849980, 0x7c3a, 0x45b7, {0xaa, 0x82, 0x90, 0xa2, 0x62, 0x95, 0x0e, 0x89}};
const GUID GUID_PACKETPROPERTY_GUID_WIDTH = { 0xbaabe94d, 0x2712, 0x48f5, {0xbe, 0x9d, 0x8f, 0x8b, 0x5e, 0xa0, 0x71, 0x1a}};
const GUID GUID_PACKETPROPERTY_GUID_HEIGHT = { 0xe61858d2, 0xe447, 0x4218, {0x9d, 0x3f, 0x18, 0x86, 0x5c, 0x20, 0x3d, 0xf4}};
const GUID GUID_PACKETPROPERTY_GUID_FINGERCONTACTCONFIDENCE = { 0xe706c804, 0x57f0, 0x4f00, {0x8a, 0x0c, 0x85, 0x3d, 0x57, 0x78, 0x9b, 0xe9}};
const GUID GUID_PACKETPROPERTY_GUID_DEVICE_CONTACT_ID = { 0x02585b91, 0x049b, 0x4750, {0x96, 0x15, 0xdf, 0x89, 0x48, 0xab, 0x3c, 0x9c}};
#define INKRECOGNITIONPROPERTY_LINENUMBER		  L"{DBF29F2C-5289-4BE8-B3D8-6EF63246253E}"
#define INKRECOGNITIONPROPERTY_BOXNUMBER		  L"{2C243E3A-F733-4EB6-B1F8-B5DC5C2C4CDA}"
#define INKRECOGNITIONPROPERTY_SEGMENTATION       L"{B3C0FE6C-FB51-4164-BA2F-844AF8F983DA}"
#define INKRECOGNITIONPROPERTY_HOTPOINT           L"{CA6F40DC-5292-452a-91FB-2181C0BEC0DE}"
#define INKRECOGNITIONPROPERTY_MAXIMUMSTROKECOUNT L"{BF0EEC4E-4B7D-47a9-8CFA-234DD24BD22A}"
#define INKRECOGNITIONPROPERTY_POINTSPERINCH      L"{7ED16B76-889C-468e-8276-0021B770187E}"
#define INKRECOGNITIONPROPERTY_CONFIDENCELEVEL    L"{7DFE11A7-FB5D-4958-8765-154ADF0D833F}"
#define INKRECOGNITIONPROPERTY_LINEMETRICS        L"{8CC24B27-30A9-4b96-9056-2D3A90DA0727}"
#define FACTOID_NONE				L"NONE"
#define FACTOID_DEFAULT				L"DEFAULT"
#define FACTOID_SYSTEMDICTIONARY	L"SYSDICT"
#define FACTOID_WORDLIST			L"WORDLIST"
#define FACTOID_EMAIL				L"EMAIL"
#define FACTOID_WEB					L"WEB"
#define FACTOID_ONECHAR				L"ONECHAR"
#define FACTOID_NUMBER				L"NUMBER"
#define FACTOID_DIGIT				L"DIGIT"
#define FACTOID_NUMBERSIMPLE		L"NUMSIMPLE"
#define FACTOID_CURRENCY			L"CURRENCY"
#define FACTOID_POSTALCODE			L"POSTALCODE"
#define FACTOID_PERCENT				L"PERCENT"
#define FACTOID_DATE				L"DATE"
#define FACTOID_TIME				L"TIME"
#define FACTOID_TELEPHONE			L"TELEPHONE"
#define FACTOID_FILENAME			L"FILENAME"
#define FACTOID_UPPERCHAR			L"UPPERCHAR"
#define FACTOID_LOWERCHAR			L"LOWERCHAR"
#define FACTOID_PUNCCHAR			L"PUNCCHAR"
#define FACTOID_JAPANESECOMMON		L"JPN_COMMON"
#define FACTOID_CHINESESIMPLECOMMON	L"CHS_COMMON"
#define FACTOID_CHINESETRADITIONALCOMMON L"CHT_COMMON"
#define FACTOID_KOREANCOMMON		L"KOR_COMMON"
#define FACTOID_HIRAGANA			L"HIRAGANA"
#define FACTOID_KATAKANA			L"KATAKANA"
#define FACTOID_KANJICOMMON		    L"KANJI_COMMON"
#define FACTOID_KANJIRARE			L"KANJI_RARE"
#define FACTOID_BOPOMOFO	        L"BOPOMOFO"
#define FACTOID_JAMO				L"JAMO"
#define FACTOID_HANGULCOMMON		L"HANGUL_COMMON"
#define FACTOID_HANGULRARE			L"HANGUL_RARE"
typedef enum InkBoundingBoxMode
{
	IBBM_Default = 0,
	IBBM_NoCurveFit = 1,
	IBBM_CurveFit = 2,
	IBBM_PointsOnly = 3,
	IBBM_Union = 4
} InkBoundingBoxMode;
#define IBBM_Last IBBM_Union + 1
typedef enum InkExtractFlags
{
	IEF_CopyFromOriginal = 0,
	IEF_RemoveFromOriginal = 0x1,
	IEF_Default = IEF_RemoveFromOriginal
} InkExtractFlags;
#define IEF_All  (IEF_RemoveFromOriginal | IEF_CopyFromOriginal)
typedef enum InkPersistenceFormat
{
	IPF_InkSerializedFormat = 0,
	IPF_Base64InkSerializedFormat = 1,
	IPF_GIF = 2,
	IPF_Base64GIF = 3
} InkPersistenceFormat;
#define IPF_Last     IPF_Base64GIF + 1
typedef enum InkPersistenceCompressionMode
{
	IPCM_Default = 0,
	IPCM_MaximumCompression = 1,
	IPCM_NoCompression = 2
} InkPersistenceCompressionMode;
typedef enum InkPenTip
{
	IPT_Ball = 0,
	IPT_Rectangle = 1
} InkPenTip;
#define IPT_Last     IPT_Rectangle + 1
typedef enum InkRasterOperation
{
	IRO_Black = 1,
	IRO_NotMergePen = 2,
	IRO_MaskNotPen = 3,
	IRO_NotCopyPen = 4,
	IRO_MaskPenNot = 5,
	IRO_Not = 6,
	IRO_XOrPen = 7,
	IRO_NotMaskPen = 8,
	IRO_MaskPen = 9,
	IRO_NotXOrPen = 10,
	IRO_NoOperation = 11,
	IRO_MergeNotPen = 12,
	IRO_CopyPen = 13,
	IRO_MergePenNot = 14,
	IRO_MergePen = 15,
	IRO_White = 16
} InkRasterOperation;
#define IRO_Last IRO_White+1
typedef enum InkMousePointer
{
	IMP_Default = 0,
	IMP_Arrow = 1,
	IMP_Crosshair = 2,
	IMP_Ibeam = 3,
	IMP_SizeNESW = 4,
	IMP_SizeNS = 5,
	IMP_SizeNWSE = 6,
	IMP_SizeWE = 7,
	IMP_UpArrow = 8,
	IMP_Hourglass = 9,
	IMP_NoDrop = 10,
	IMP_ArrowHourglass = 11,
	IMP_ArrowQuestion = 12,
	IMP_SizeAll = 13,
	IMP_Hand = 14,
	IMP_Custom = 99
} InkMousePointer;
typedef enum InkClipboardModes
{
	ICB_Copy = 0,
	ICB_Cut = 0x1,
	ICB_ExtractOnly = 0x30,
	ICB_DelayedCopy = 0x20,
	ICB_Default = ICB_Copy
} InkClipboardModes;
#define ICB_Last ICB_DelayedCopy+1
typedef enum InkClipboardFormats
{
	ICF_None = 0,
	ICF_InkSerializedFormat = 0x1,
	ICF_SketchInk = 0x2,
	ICF_TextInk = 0x6,
	ICF_EnhancedMetafile = 0x8,
	ICF_Metafile = 0x20,
	ICF_Bitmap = 0x40,
	ICF_PasteMask = 0x7,
	ICF_CopyMask = 0x7f,
	ICF_Default = ICF_CopyMask
} InkClipboardFormats;
#define ICF_Last ICF_CopyMask+1
typedef enum SelectionHitResult
{
	SHR_None = 0,
	SHR_NW = (SHR_None + 1),
	SHR_SE = (SHR_NW + 1),
	SHR_NE = (SHR_SE + 1),
	SHR_SW = (SHR_NE + 1),
	SHR_E = (SHR_SW + 1),
	SHR_W = (SHR_E + 1),
	SHR_N = (SHR_W + 1),
	SHR_S = (SHR_N + 1),
	SHR_Selection = (SHR_S + 1)
} SelectionHitResult;
typedef enum InkRecognitionStatus
{
	IRS_NoError = 0,
	IRS_Interrupted = 0x1,
	IRS_ProcessFailed = 0x2,
	IRS_InkAddedFailed = 0x4,
	IRS_SetAutoCompletionModeFailed = 0x8,
	IRS_SetStrokesFailed = 0x10,
	IRS_SetGuideFailed = 0x20,
	IRS_SetFlagsFailed = 0x40,
	IRS_SetFactoidFailed = 0x80,
	IRS_SetPrefixSuffixFailed = 0x100,
	IRS_SetWordListFailed = 0x200
} InkRecognitionStatus;
typedef enum DISPID_InkRectangle
{
	DISPID_IRTop = 1,
	DISPID_IRLeft = (DISPID_IRTop + 1),
	DISPID_IRBottom = (DISPID_IRLeft + 1),
	DISPID_IRRight = (DISPID_IRBottom + 1),
	DISPID_IRGetRectangle = (DISPID_IRRight + 1),
	DISPID_IRSetRectangle = (DISPID_IRGetRectangle + 1),
	DISPID_IRData = (DISPID_IRSetRectangle + 1)
} DISPID_InkRectangle;
typedef enum DISPID_InkExtendedProperty
{
	DISPID_IEPGuid = 1,
	DISPID_IEPData = (DISPID_IEPGuid + 1)
} DISPID_InkExtendedProperty;
typedef enum DISPID_InkExtendedProperties
{
	DISPID_IEPs_NewEnum = DISPID_NEWENUM,
	DISPID_IEPsItem = DISPID_VALUE,
	DISPID_IEPsCount = 1,
	DISPID_IEPsAdd = (DISPID_IEPsCount + 1),
	DISPID_IEPsRemove = (DISPID_IEPsAdd + 1),
	DISPID_IEPsClear = (DISPID_IEPsRemove + 1),
	DISPID_IEPsDoesPropertyExist = (DISPID_IEPsClear + 1)
} DISPID_InkExtendedProperties;
typedef enum DISPID_InkDrawingAttributes
{
	DISPID_DAHeight = 1,
	DISPID_DAColor = (DISPID_DAHeight + 1),
	DISPID_DAWidth = (DISPID_DAColor + 1),
	DISPID_DAFitToCurve = (DISPID_DAWidth + 1),
	DISPID_DAIgnorePressure = (DISPID_DAFitToCurve + 1),
	DISPID_DAAntiAliased = (DISPID_DAIgnorePressure + 1),
	DISPID_DATransparency = (DISPID_DAAntiAliased + 1),
	DISPID_DARasterOperation = (DISPID_DATransparency + 1),
	DISPID_DAPenTip = (DISPID_DARasterOperation + 1),
	DISPID_DAClone = (DISPID_DAPenTip + 1),
	DISPID_DAExtendedProperties = (DISPID_DAClone + 1)
} DISPID_InkDrawingAttributes;
typedef enum DISPID_InkTransform
{
	DISPID_ITReset = 1,
	DISPID_ITTranslate = (DISPID_ITReset + 1),
	DISPID_ITRotate = (DISPID_ITTranslate + 1),
	DISPID_ITReflect = (DISPID_ITRotate + 1),
	DISPID_ITShear = (DISPID_ITReflect + 1),
	DISPID_ITScale = (DISPID_ITShear + 1),
	DISPID_ITeM11 = (DISPID_ITScale + 1),
	DISPID_ITeM12 = (DISPID_ITeM11 + 1),
	DISPID_ITeM21 = (DISPID_ITeM12 + 1),
	DISPID_ITeM22 = (DISPID_ITeM21 + 1),
	DISPID_ITeDx = (DISPID_ITeM22 + 1),
	DISPID_ITeDy = (DISPID_ITeDx + 1),
	DISPID_ITGetTransform = (DISPID_ITeDy + 1),
	DISPID_ITSetTransform = (DISPID_ITGetTransform + 1),
	DISPID_ITData = (DISPID_ITSetTransform + 1)
} DISPID_InkTransform;
typedef enum InkApplicationGesture
{
	IAG_AllGestures = 0,
	IAG_NoGesture = 0xf000,
	IAG_Scratchout = 0xf001,
	IAG_Triangle = 0xf002,
	IAG_Square = 0xf003,
	IAG_Star = 0xf004,
	IAG_Check = 0xf005,
	IAG_Curlicue = 0xf010,
	IAG_DoubleCurlicue = 0xf011,
	IAG_Circle = 0xf020,
	IAG_DoubleCircle = 0xf021,
	IAG_SemiCircleLeft = 0xf028,
	IAG_SemiCircleRight = 0xf029,
	IAG_ChevronUp = 0xf030,
	IAG_ChevronDown = 0xf031,
	IAG_ChevronLeft = 0xf032,
	IAG_ChevronRight = 0xf033,
	IAG_ArrowUp = 0xf038,
	IAG_ArrowDown = 0xf039,
	IAG_ArrowLeft = 0xf03a,
	IAG_ArrowRight = 0xf03b,
	IAG_Up = 0xf058,
	IAG_Down = 0xf059,
	IAG_Left = 0xf05a,
	IAG_Right = 0xf05b,
	IAG_UpDown = 0xf060,
	IAG_DownUp = 0xf061,
	IAG_LeftRight = 0xf062,
	IAG_RightLeft = 0xf063,
	IAG_UpLeftLong = 0xf064,
	IAG_UpRightLong = 0xf065,
	IAG_DownLeftLong = 0xf066,
	IAG_DownRightLong = 0xf067,
	IAG_UpLeft = 0xf068,
	IAG_UpRight = 0xf069,
	IAG_DownLeft = 0xf06a,
	IAG_DownRight = 0xf06b,
	IAG_LeftUp = 0xf06c,
	IAG_LeftDown = 0xf06d,
	IAG_RightUp = 0xf06e,
	IAG_RightDown = 0xf06f,
	IAG_Exclamation = 0xf0a4,
	IAG_Tap = 0xf0f0,
	IAG_DoubleTap = 0xf0f1
} InkApplicationGesture;
typedef enum InkSystemGesture
{
	ISG_Tap = 0x10,
	ISG_DoubleTap = 0x11,
	ISG_RightTap = 0x12,
	ISG_Drag = 0x13,
	ISG_RightDrag = 0x14,
	ISG_HoldEnter = 0x15,
	ISG_HoldLeave = 0x16,
	ISG_HoverEnter = 0x17,
	ISG_HoverLeave = 0x18,
	ISG_Flick = 0x1f
} InkSystemGesture;
#define ISG_First ISG_Tap
#define ISG_Last ISG_Flick
typedef enum InkRecognitionConfidence
{
	IRC_Strong = 0,
	IRC_Intermediate = 1,
	IRC_Poor = 2
} InkRecognitionConfidence;
typedef enum DISPID_InkGesture
{
	DISPID_IGId = DISPID_VALUE,
	DISPID_IGGetHotPoint = (DISPID_IGId + 1),
	DISPID_IGConfidence = (DISPID_IGGetHotPoint + 1)
} DISPID_InkGesture;
typedef enum DISPID_InkCursor
{
	DISPID_ICsrName = DISPID_VALUE,
	DISPID_ICsrId = 1,
	DISPID_ICsrDrawingAttributes = (DISPID_ICsrId + 1),
	DISPID_ICsrButtons = (DISPID_ICsrDrawingAttributes + 1),
	DISPID_ICsrInverted = (DISPID_ICsrButtons + 1),
	DISPID_ICsrTablet = (DISPID_ICsrInverted + 1)
} DISPID_InkCursor;
typedef enum DISPID_InkCursors
{
	DISPID_ICs_NewEnum = DISPID_NEWENUM,
	DISPID_ICsItem = DISPID_VALUE,
	DISPID_ICsCount = 1
} DISPID_InkCursors;
typedef enum InkCursorButtonState
{
	ICBS_Unavailable = 0,
	ICBS_Up = (ICBS_Unavailable + 1),
	ICBS_Down = (ICBS_Up + 1)
} InkCursorButtonState;
#define ICBS_Last ICBS_Down
typedef enum DISPID_InkCursorButton
{
	DISPID_ICBName = DISPID_VALUE,
	DISPID_ICBId = 1,
	DISPID_ICBState = (DISPID_ICBId + 1)
} DISPID_InkCursorButton;
typedef enum DISPID_InkCursorButtons
{
	DISPID_ICBs_NewEnum = DISPID_NEWENUM,
	DISPID_ICBsItem = DISPID_VALUE,
	DISPID_ICBsCount = 1
} DISPID_InkCursorButtons;
typedef enum TabletHardwareCapabilities
{
	THWC_Integrated = 0x1,
	THWC_CursorMustTouch = 0x2,
	THWC_HardProximity = 0x4,
	THWC_CursorsHavePhysicalIds = 0x8
} TabletHardwareCapabilities;
typedef enum TabletPropertyMetricUnit
{
	TPMU_Default = 0,
	TPMU_Inches = (TPMU_Default + 1),
	TPMU_Centimeters = (TPMU_Inches + 1),
	TPMU_Degrees = (TPMU_Centimeters + 1),
	TPMU_Radians = (TPMU_Degrees + 1),
	TPMU_Seconds = (TPMU_Radians + 1),
	TPMU_Pounds = (TPMU_Seconds + 1),
	TPMU_Grams = (TPMU_Pounds + 1)
} TabletPropertyMetricUnit;
typedef enum DISPID_InkTablet
{
	DISPID_ITName = DISPID_VALUE,
	DISPID_ITPlugAndPlayId = 1,
	DISPID_ITPropertyMetrics = (DISPID_ITPlugAndPlayId + 1),
	DISPID_ITIsPacketPropertySupported = (DISPID_ITPropertyMetrics + 1),
	DISPID_ITMaximumInputRectangle = (DISPID_ITIsPacketPropertySupported + 1),
	DISPID_ITHardwareCapabilities = (DISPID_ITMaximumInputRectangle + 1)
} DISPID_InkTablet;
typedef enum TabletDeviceKind
{
	TDK_Mouse = 0,
	TDK_Pen = (TDK_Mouse + 1),
	TDK_Touch = (TDK_Pen + 1)
} TabletDeviceKind;
typedef enum DISPID_InkTablet2
{
	DISPID_IT2DeviceKind = DISPID_VALUE
} DISPID_InkTablet2;
typedef enum DISPID_InkTablet3
{
	DISPID_IT3IsMultiTouch = DISPID_VALUE,
	DISPID_IT3MaximumCursors = (DISPID_IT3IsMultiTouch + 1)
} DISPID_InkTablet3;
typedef enum DISPID_InkTablets
{
	DISPID_ITs_NewEnum = DISPID_NEWENUM,
	DISPID_ITsItem = DISPID_VALUE,
	DISPID_ITsDefaultTablet = 1,
	DISPID_ITsCount = (DISPID_ITsDefaultTablet + 1),
	DISPID_ITsIsPacketPropertySupported = (DISPID_ITsCount + 1)
} DISPID_InkTablets;
typedef enum DISPID_InkStrokeDisp
{
	DISPID_ISDInkIndex = 1,
	DISPID_ISDID = (DISPID_ISDInkIndex + 1),
	DISPID_ISDGetBoundingBox = (DISPID_ISDID + 1),
	DISPID_ISDDrawingAttributes = (DISPID_ISDGetBoundingBox + 1),
	DISPID_ISDFindIntersections = (DISPID_ISDDrawingAttributes + 1),
	DISPID_ISDGetRectangleIntersections = (DISPID_ISDFindIntersections + 1),
	DISPID_ISDClip = (DISPID_ISDGetRectangleIntersections + 1),
	DISPID_ISDHitTestCircle = (DISPID_ISDClip + 1),
	DISPID_ISDNearestPoint = (DISPID_ISDHitTestCircle + 1),
	DISPID_ISDSplit = (DISPID_ISDNearestPoint + 1),
	DISPID_ISDExtendedProperties = (DISPID_ISDSplit + 1),
	DISPID_ISDInk = (DISPID_ISDExtendedProperties + 1),
	DISPID_ISDBezierPoints = (DISPID_ISDInk + 1),
	DISPID_ISDPolylineCusps = (DISPID_ISDBezierPoints + 1),
	DISPID_ISDBezierCusps = (DISPID_ISDPolylineCusps + 1),
	DISPID_ISDSelfIntersections = (DISPID_ISDBezierCusps + 1),
	DISPID_ISDPacketCount = (DISPID_ISDSelfIntersections + 1),
	DISPID_ISDPacketSize = (DISPID_ISDPacketCount + 1),
	DISPID_ISDPacketDescription = (DISPID_ISDPacketSize + 1),
	DISPID_ISDDeleted = (DISPID_ISDPacketDescription + 1),
	DISPID_ISDGetPacketDescriptionPropertyMetrics = (DISPID_ISDDeleted + 1),
	DISPID_ISDGetPoints = (DISPID_ISDGetPacketDescriptionPropertyMetrics + 1),
	DISPID_ISDSetPoints = (DISPID_ISDGetPoints + 1),
	DISPID_ISDGetPacketData = (DISPID_ISDSetPoints + 1),
	DISPID_ISDGetPacketValuesByProperty = (DISPID_ISDGetPacketData + 1),
	DISPID_ISDSetPacketValuesByProperty = (DISPID_ISDGetPacketValuesByProperty + 1),
	DISPID_ISDGetFlattenedBezierPoints = (DISPID_ISDSetPacketValuesByProperty + 1),
	DISPID_ISDScaleToRectangle = (DISPID_ISDGetFlattenedBezierPoints + 1),
	DISPID_ISDTransform = (DISPID_ISDScaleToRectangle + 1),
	DISPID_ISDMove = (DISPID_ISDTransform + 1),
	DISPID_ISDRotate = (DISPID_ISDMove + 1),
	DISPID_ISDShear = (DISPID_ISDRotate + 1),
	DISPID_ISDScale = (DISPID_ISDShear + 1)
} DISPID_InkStrokeDisp;
typedef enum DISPID_InkStrokes
{
	DISPID_ISs_NewEnum = DISPID_NEWENUM,
	DISPID_ISsItem = DISPID_VALUE,
	DISPID_ISsCount = 1,
	DISPID_ISsValid = (DISPID_ISsCount + 1),
	DISPID_ISsInk = (DISPID_ISsValid + 1),
	DISPID_ISsAdd = (DISPID_ISsInk + 1),
	DISPID_ISsAddStrokes = (DISPID_ISsAdd + 1),
	DISPID_ISsRemove = (DISPID_ISsAddStrokes + 1),
	DISPID_ISsRemoveStrokes = (DISPID_ISsRemove + 1),
	DISPID_ISsToString = (DISPID_ISsRemoveStrokes + 1),
	DISPID_ISsModifyDrawingAttributes = (DISPID_ISsToString + 1),
	DISPID_ISsGetBoundingBox = (DISPID_ISsModifyDrawingAttributes + 1),
	DISPID_ISsScaleToRectangle = (DISPID_ISsGetBoundingBox + 1),
	DISPID_ISsTransform = (DISPID_ISsScaleToRectangle + 1),
	DISPID_ISsMove = (DISPID_ISsTransform + 1),
	DISPID_ISsRotate = (DISPID_ISsMove + 1),
	DISPID_ISsShear = (DISPID_ISsRotate + 1),
	DISPID_ISsScale = (DISPID_ISsShear + 1),
	DISPID_ISsClip = (DISPID_ISsScale + 1),
	DISPID_ISsRecognitionResult = (DISPID_ISsClip + 1),
	DISPID_ISsRemoveRecognitionResult = (DISPID_ISsRecognitionResult + 1)
} DISPID_InkStrokes;
typedef enum DISPID_InkCustomStrokes
{
	DISPID_ICSs_NewEnum = DISPID_NEWENUM,
	DISPID_ICSsItem = DISPID_VALUE,
	DISPID_ICSsCount = 1,
	DISPID_ICSsAdd = (DISPID_ICSsCount + 1),
	DISPID_ICSsRemove = (DISPID_ICSsAdd + 1),
	DISPID_ICSsClear = (DISPID_ICSsRemove + 1)
} DISPID_InkCustomStrokes;
typedef enum DISPID_StrokeEvent
{
	DISPID_SEStrokesAdded = 1,
	DISPID_SEStrokesRemoved = (DISPID_SEStrokesAdded + 1)
} DISPID_StrokeEvent;
typedef enum DISPID_Ink
{
	DISPID_IStrokes = 1,
	DISPID_IExtendedProperties = (DISPID_IStrokes + 1),
	DISPID_IGetBoundingBox = (DISPID_IExtendedProperties + 1),
	DISPID_IDeleteStrokes = (DISPID_IGetBoundingBox + 1),
	DISPID_IDeleteStroke = (DISPID_IDeleteStrokes + 1),
	DISPID_IExtractStrokes = (DISPID_IDeleteStroke + 1),
	DISPID_IExtractWithRectangle = (DISPID_IExtractStrokes + 1),
	DISPID_IDirty = (DISPID_IExtractWithRectangle + 1),
	DISPID_ICustomStrokes = (DISPID_IDirty + 1),
	DISPID_IClone = (DISPID_ICustomStrokes + 1),
	DISPID_IHitTestCircle = (DISPID_IClone + 1),
	DISPID_IHitTestWithRectangle = (DISPID_IHitTestCircle + 1),
	DISPID_IHitTestWithLasso = (DISPID_IHitTestWithRectangle + 1),
	DISPID_INearestPoint = (DISPID_IHitTestWithLasso + 1),
	DISPID_ICreateStrokes = (DISPID_INearestPoint + 1),
	DISPID_ICreateStroke = (DISPID_ICreateStrokes + 1),
	DISPID_IAddStrokesAtRectangle = (DISPID_ICreateStroke + 1),
	DISPID_IClip = (DISPID_IAddStrokesAtRectangle + 1),
	DISPID_ISave = (DISPID_IClip + 1),
	DISPID_ILoad = (DISPID_ISave + 1),
	DISPID_ICreateStrokeFromPoints = (DISPID_ILoad + 1),
	DISPID_IClipboardCopyWithRectangle = (DISPID_ICreateStrokeFromPoints + 1),
	DISPID_IClipboardCopy = (DISPID_IClipboardCopyWithRectangle + 1),
	DISPID_ICanPaste = (DISPID_IClipboardCopy + 1),
	DISPID_IClipboardPaste = (DISPID_ICanPaste + 1)
} DISPID_Ink;
typedef enum DISPID_InkEvent
{
	DISPID_IEInkAdded = 1,
	DISPID_IEInkDeleted = (DISPID_IEInkAdded + 1)
} DISPID_InkEvent;
typedef enum DISPID_InkRenderer
{
	DISPID_IRGetViewTransform = 1,
	DISPID_IRSetViewTransform = (DISPID_IRGetViewTransform + 1),
	DISPID_IRGetObjectTransform = (DISPID_IRSetViewTransform + 1),
	DISPID_IRSetObjectTransform = (DISPID_IRGetObjectTransform + 1),
	DISPID_IRDraw = (DISPID_IRSetObjectTransform + 1),
	DISPID_IRDrawStroke = (DISPID_IRDraw + 1),
	DISPID_IRPixelToInkSpace = (DISPID_IRDrawStroke + 1),
	DISPID_IRInkSpaceToPixel = (DISPID_IRPixelToInkSpace + 1),
	DISPID_IRPixelToInkSpaceFromPoints = (DISPID_IRInkSpaceToPixel + 1),
	DISPID_IRInkSpaceToPixelFromPoints = (DISPID_IRPixelToInkSpaceFromPoints + 1),
	DISPID_IRMeasure = (DISPID_IRInkSpaceToPixelFromPoints + 1),
	DISPID_IRMeasureStroke = (DISPID_IRMeasure + 1),
	DISPID_IRMove = (DISPID_IRMeasureStroke + 1),
	DISPID_IRRotate = (DISPID_IRMove + 1),
	DISPID_IRScale = (DISPID_IRRotate + 1)
} DISPID_InkRenderer;
typedef enum InkCollectorEventInterest
{
	ICEI_DefaultEvents = -1,
	ICEI_CursorDown = (ICEI_DefaultEvents + 1),
	ICEI_Stroke = (ICEI_CursorDown + 1),
	ICEI_NewPackets = (ICEI_Stroke + 1),
	ICEI_NewInAirPackets = (ICEI_NewPackets + 1),
	ICEI_CursorButtonDown = (ICEI_NewInAirPackets + 1),
	ICEI_CursorButtonUp = (ICEI_CursorButtonDown + 1),
	ICEI_CursorInRange = (ICEI_CursorButtonUp + 1),
	ICEI_CursorOutOfRange = (ICEI_CursorInRange + 1),
	ICEI_SystemGesture = (ICEI_CursorOutOfRange + 1),
	ICEI_TabletAdded = (ICEI_SystemGesture + 1),
	ICEI_TabletRemoved = (ICEI_TabletAdded + 1),
	ICEI_MouseDown = (ICEI_TabletRemoved + 1),
	ICEI_MouseMove = (ICEI_MouseDown + 1),
	ICEI_MouseUp = (ICEI_MouseMove + 1),
	ICEI_MouseWheel = (ICEI_MouseUp + 1),
	ICEI_DblClick = (ICEI_MouseWheel + 1),
	ICEI_AllEvents = (ICEI_DblClick + 1)
} InkCollectorEventInterest;
typedef enum InkMouseButton
{
	IMF_Left = 1,
	IMF_Right = 2,
	IMF_Middle = 4
} InkMouseButton;
typedef enum InkShiftKeyModifierFlags
{
	IKM_Shift = 0x1,
	IKM_Control = 0x2,
	IKM_Alt = 0x4
} InkShiftKeyModifierFlags;
typedef enum DISPID_InkCollectorEvent
{
	DISPID_ICEStroke = 1,
	DISPID_ICECursorDown = (DISPID_ICEStroke + 1),
	DISPID_ICENewPackets = (DISPID_ICECursorDown + 1),
	DISPID_ICENewInAirPackets = (DISPID_ICENewPackets + 1),
	DISPID_ICECursorButtonDown = (DISPID_ICENewInAirPackets + 1),
	DISPID_ICECursorButtonUp = (DISPID_ICECursorButtonDown + 1),
	DISPID_ICECursorInRange = (DISPID_ICECursorButtonUp + 1),
	DISPID_ICECursorOutOfRange = (DISPID_ICECursorInRange + 1),
	DISPID_ICESystemGesture = (DISPID_ICECursorOutOfRange + 1),
	DISPID_ICEGesture = (DISPID_ICESystemGesture + 1),
	DISPID_ICETabletAdded = (DISPID_ICEGesture + 1),
	DISPID_ICETabletRemoved = (DISPID_ICETabletAdded + 1),
	DISPID_IOEPainting = (DISPID_ICETabletRemoved + 1),
	DISPID_IOEPainted = (DISPID_IOEPainting + 1),
	DISPID_IOESelectionChanging = (DISPID_IOEPainted + 1),
	DISPID_IOESelectionChanged = (DISPID_IOESelectionChanging + 1),
	DISPID_IOESelectionMoving = (DISPID_IOESelectionChanged + 1),
	DISPID_IOESelectionMoved = (DISPID_IOESelectionMoving + 1),
	DISPID_IOESelectionResizing = (DISPID_IOESelectionMoved + 1),
	DISPID_IOESelectionResized = (DISPID_IOESelectionResizing + 1),
	DISPID_IOEStrokesDeleting = (DISPID_IOESelectionResized + 1),
	DISPID_IOEStrokesDeleted = (DISPID_IOEStrokesDeleting + 1),
	DISPID_IPEChangeUICues = (DISPID_IOEStrokesDeleted + 1),
	DISPID_IPEClick = (DISPID_IPEChangeUICues + 1),
	DISPID_IPEDblClick = (DISPID_IPEClick + 1),
	DISPID_IPEInvalidated = (DISPID_IPEDblClick + 1),
	DISPID_IPEMouseDown = (DISPID_IPEInvalidated + 1),
	DISPID_IPEMouseEnter = (DISPID_IPEMouseDown + 1),
	DISPID_IPEMouseHover = (DISPID_IPEMouseEnter + 1),
	DISPID_IPEMouseLeave = (DISPID_IPEMouseHover + 1),
	DISPID_IPEMouseMove = (DISPID_IPEMouseLeave + 1),
	DISPID_IPEMouseUp = (DISPID_IPEMouseMove + 1),
	DISPID_IPEMouseWheel = (DISPID_IPEMouseUp + 1),
	DISPID_IPESizeModeChanged = (DISPID_IPEMouseWheel + 1),
	DISPID_IPEStyleChanged = (DISPID_IPESizeModeChanged + 1),
	DISPID_IPESystemColorsChanged = (DISPID_IPEStyleChanged + 1),
	DISPID_IPEKeyDown = (DISPID_IPESystemColorsChanged + 1),
	DISPID_IPEKeyPress = (DISPID_IPEKeyDown + 1),
	DISPID_IPEKeyUp = (DISPID_IPEKeyPress + 1),
	DISPID_IPEResize = (DISPID_IPEKeyUp + 1),
	DISPID_IPESizeChanged = (DISPID_IPEResize + 1)
} DISPID_InkCollectorEvent;
typedef enum InkOverlayEditingMode
{
	IOEM_Ink = 0,
	IOEM_Delete = 1,
	IOEM_Select = 2
} InkOverlayEditingMode;
#define IOEM_Last IOEM_Select + 1
typedef enum InkOverlayAttachMode
{
	IOAM_Behind = 0,
	IOAM_InFront = 1
} InkOverlayAttachMode;
#define IOAM_Last IOAM_InFront+1
typedef enum InkPictureSizeMode
{
	IPSM_AutoSize = 0,
	IPSM_CenterImage = 1,
	IPSM_Normal = 2,
	IPSM_StretchImage = 3
} InkPictureSizeMode;
#define IPSM_Last IPSM_StretchImage + 1
typedef enum InkOverlayEraserMode
{
	IOERM_StrokeErase = 0,
	IOERM_PointErase = 1
} InkOverlayEraserMode;
#define IOERM_Last IOERM_PointErase + 1
typedef enum InkCollectionMode
{
	ICM_InkOnly = 0,
	ICM_GestureOnly = (ICM_InkOnly + 1),
	ICM_InkAndGesture = (ICM_GestureOnly + 1)
} InkCollectionMode;
#define ICM_Last ICM_InkAndGesture
typedef enum DISPID_InkCollector
{
	DISPID_ICEnabled = 1,
	DISPID_ICHwnd = (DISPID_ICEnabled + 1),
	DISPID_ICPaint = (DISPID_ICHwnd + 1),
	DISPID_ICText = (DISPID_ICPaint + 1),
	DISPID_ICDefaultDrawingAttributes = (DISPID_ICText + 1),
	DISPID_ICRenderer = (DISPID_ICDefaultDrawingAttributes + 1),
	DISPID_ICInk = (DISPID_ICRenderer + 1),
	DISPID_ICAutoRedraw = (DISPID_ICInk + 1),
	DISPID_ICCollectingInk = (DISPID_ICAutoRedraw + 1),
	DISPID_ICSetEventInterest = (DISPID_ICCollectingInk + 1),
	DISPID_ICGetEventInterest = (DISPID_ICSetEventInterest + 1),
	DISPID_IOEditingMode = (DISPID_ICGetEventInterest + 1),
	DISPID_IOSelection = (DISPID_IOEditingMode + 1),
	DISPID_IOAttachMode = (DISPID_IOSelection + 1),
	DISPID_IOHitTestSelection = (DISPID_IOAttachMode + 1),
	DISPID_IODraw = (DISPID_IOHitTestSelection + 1),
	DISPID_IPPicture = (DISPID_IODraw + 1),
	DISPID_IPSizeMode = (DISPID_IPPicture + 1),
	DISPID_IPBackColor = (DISPID_IPSizeMode + 1),
	DISPID_ICCursors = (DISPID_IPBackColor + 1),
	DISPID_ICMarginX = (DISPID_ICCursors + 1),
	DISPID_ICMarginY = (DISPID_ICMarginX + 1),
	DISPID_ICSetWindowInputRectangle = (DISPID_ICMarginY + 1),
	DISPID_ICGetWindowInputRectangle = (DISPID_ICSetWindowInputRectangle + 1),
	DISPID_ICTablet = (DISPID_ICGetWindowInputRectangle + 1),
	DISPID_ICSetAllTabletsMode = (DISPID_ICTablet + 1),
	DISPID_ICSetSingleTabletIntegratedMode = (DISPID_ICSetAllTabletsMode + 1),
	DISPID_ICCollectionMode = (DISPID_ICSetSingleTabletIntegratedMode + 1),
	DISPID_ICSetGestureStatus = (DISPID_ICCollectionMode + 1),
	DISPID_ICGetGestureStatus = (DISPID_ICSetGestureStatus + 1),
	DISPID_ICDynamicRendering = (DISPID_ICGetGestureStatus + 1),
	DISPID_ICDesiredPacketDescription = (DISPID_ICDynamicRendering + 1),
	DISPID_IOEraserMode = (DISPID_ICDesiredPacketDescription + 1),
	DISPID_IOEraserWidth = (DISPID_IOEraserMode + 1),
	DISPID_ICMouseIcon = (DISPID_IOEraserWidth + 1),
	DISPID_ICMousePointer = (DISPID_ICMouseIcon + 1),
	DISPID_IPInkEnabled = (DISPID_ICMousePointer + 1),
	DISPID_ICSupportHighContrastInk = (DISPID_IPInkEnabled + 1),
	DISPID_IOSupportHighContrastSelectionUI = (DISPID_ICSupportHighContrastInk + 1)
} DISPID_InkCollector;
typedef enum DISPID_InkRecognizer
{
	DISPID_RecoClsid = 1,
	DISPID_RecoName = (DISPID_RecoClsid + 1),
	DISPID_RecoVendor = (DISPID_RecoName + 1),
	DISPID_RecoCapabilities = (DISPID_RecoVendor + 1),
	DISPID_RecoLanguageID = (DISPID_RecoCapabilities + 1),
	DISPID_RecoPreferredPacketDescription = (DISPID_RecoLanguageID + 1),
	DISPID_RecoCreateRecognizerContext = (DISPID_RecoPreferredPacketDescription + 1),
	DISPID_RecoSupportedProperties = (DISPID_RecoCreateRecognizerContext + 1)
} DISPID_InkRecognizer;
typedef enum InkRecognizerCapabilities
{
	IRC_DontCare = 1,
	IRC_Object = 2,
	IRC_FreeInput = 4,
	IRC_LinedInput = 8,
	IRC_BoxedInput = 16,
	IRC_CharacterAutoCompletionInput = 32,
	IRC_RightAndDown = 64,
	IRC_LeftAndDown = 128,
	IRC_DownAndLeft = 256,
	IRC_DownAndRight = 512,
	IRC_ArbitraryAngle = 1024,
	IRC_Lattice = 2048,
	IRC_AdviseInkChange = 4096,
	IRC_StrokeReorder = 8192,
	IRC_Personalizable = 16384
} InkRecognizerCapabilities;
typedef enum DISPID_InkRecognizer2
{
	DISPID_RecoId = DISPID_VALUE,
	DISPID_RecoUnicodeRanges = 1
} DISPID_InkRecognizer2;
typedef enum DISPID_InkRecognizers
{
	DISPID_IRecos_NewEnum = DISPID_NEWENUM,
	DISPID_IRecosItem = DISPID_VALUE,
	DISPID_IRecosCount = 1,
	DISPID_IRecosGetDefaultRecognizer = (DISPID_IRecosCount + 1)
} DISPID_InkRecognizers;
typedef enum InkRecognizerCharacterAutoCompletionMode
{
	IRCACM_Full = 0,
	IRCACM_Prefix = (IRCACM_Full + 1),
	IRCACM_Random = (IRCACM_Prefix + 1)
} InkRecognizerCharacterAutoCompletionMode;
typedef enum InkRecognitionModes
{
	IRM_None = 0,
	IRM_WordModeOnly = 0x1,
	IRM_Coerce = 0x2,
	IRM_TopInkBreaksOnly = 0x4,
	IRM_PrefixOk = 0x8,
	IRM_LineMode = 0x10,
	IRM_DisablePersonalization = 0x20,
	IRM_AutoSpace = 0x40,
	IRM_Max = 0x80
} InkRecognitionModes;
typedef enum DISPID_InkRecognitionEvent
{
	DISPID_IRERecognitionWithAlternates = 1,
	DISPID_IRERecognition = (DISPID_IRERecognitionWithAlternates + 1)
} DISPID_InkRecognitionEvent;
typedef enum DISPID_InkRecoContext
{
	DISPID_IRecoCtx_Strokes = 1,
	DISPID_IRecoCtx_CharacterAutoCompletionMode = (DISPID_IRecoCtx_Strokes + 1),
	DISPID_IRecoCtx_Factoid = (DISPID_IRecoCtx_CharacterAutoCompletionMode + 1),
	DISPID_IRecoCtx_WordList = (DISPID_IRecoCtx_Factoid + 1),
	DISPID_IRecoCtx_Recognizer = (DISPID_IRecoCtx_WordList + 1),
	DISPID_IRecoCtx_Guide = (DISPID_IRecoCtx_Recognizer + 1),
	DISPID_IRecoCtx_Flags = (DISPID_IRecoCtx_Guide + 1),
	DISPID_IRecoCtx_PrefixText = (DISPID_IRecoCtx_Flags + 1),
	DISPID_IRecoCtx_SuffixText = (DISPID_IRecoCtx_PrefixText + 1),
	DISPID_IRecoCtx_StopRecognition = (DISPID_IRecoCtx_SuffixText + 1),
	DISPID_IRecoCtx_Clone = (DISPID_IRecoCtx_StopRecognition + 1),
	DISPID_IRecoCtx_Recognize = (DISPID_IRecoCtx_Clone + 1),
	DISPID_IRecoCtx_StopBackgroundRecognition = (DISPID_IRecoCtx_Recognize + 1),
	DISPID_IRecoCtx_EndInkInput = (DISPID_IRecoCtx_StopBackgroundRecognition + 1),
	DISPID_IRecoCtx_BackgroundRecognize = (DISPID_IRecoCtx_EndInkInput + 1),
	DISPID_IRecoCtx_BackgroundRecognizeWithAlternates = (DISPID_IRecoCtx_BackgroundRecognize + 1),
	DISPID_IRecoCtx_IsStringSupported = (DISPID_IRecoCtx_BackgroundRecognizeWithAlternates + 1)
} DISPID_InkRecoContext;
typedef enum DISPID_InkRecoContext2
{
	DISPID_IRecoCtx2_EnabledUnicodeRanges = DISPID_VALUE
} DISPID_InkRecoContext2;
typedef enum InkRecognitionAlternatesSelection
{
	IRAS_Start = 0,
	IRAS_DefaultCount = 10,
	IRAS_All = -1
} InkRecognitionAlternatesSelection;
typedef enum DISPID_InkRecognitionResult
{
	DISPID_InkRecognitionResult_TopString = 1,
	DISPID_InkRecognitionResult_TopAlternate = (DISPID_InkRecognitionResult_TopString + 1),
	DISPID_InkRecognitionResult_Strokes = (DISPID_InkRecognitionResult_TopAlternate + 1),
	DISPID_InkRecognitionResult_TopConfidence = (DISPID_InkRecognitionResult_Strokes + 1),
	DISPID_InkRecognitionResult_AlternatesFromSelection = (DISPID_InkRecognitionResult_TopConfidence + 1),
	DISPID_InkRecognitionResult_ModifyTopAlternate = (DISPID_InkRecognitionResult_AlternatesFromSelection + 1),
	DISPID_InkRecognitionResult_SetResultOnStrokes = (DISPID_InkRecognitionResult_ModifyTopAlternate + 1)
} DISPID_InkRecognitionResult;
typedef enum DISPID_InkRecoAlternate
{
	DISPID_InkRecoAlternate_String = 1,
	DISPID_InkRecoAlternate_LineNumber = (DISPID_InkRecoAlternate_String + 1),
	DISPID_InkRecoAlternate_Baseline = (DISPID_InkRecoAlternate_LineNumber + 1),
	DISPID_InkRecoAlternate_Midline = (DISPID_InkRecoAlternate_Baseline + 1),
	DISPID_InkRecoAlternate_Ascender = (DISPID_InkRecoAlternate_Midline + 1),
	DISPID_InkRecoAlternate_Descender = (DISPID_InkRecoAlternate_Ascender + 1),
	DISPID_InkRecoAlternate_Confidence = (DISPID_InkRecoAlternate_Descender + 1),
	DISPID_InkRecoAlternate_Strokes = (DISPID_InkRecoAlternate_Confidence + 1),
	DISPID_InkRecoAlternate_GetStrokesFromStrokeRanges = (DISPID_InkRecoAlternate_Strokes + 1),
	DISPID_InkRecoAlternate_GetStrokesFromTextRange = (DISPID_InkRecoAlternate_GetStrokesFromStrokeRanges + 1),
	DISPID_InkRecoAlternate_GetTextRangeFromStrokes = (DISPID_InkRecoAlternate_GetStrokesFromTextRange + 1),
	DISPID_InkRecoAlternate_GetPropertyValue = (DISPID_InkRecoAlternate_GetTextRangeFromStrokes + 1),
	DISPID_InkRecoAlternate_LineAlternates = (DISPID_InkRecoAlternate_GetPropertyValue + 1),
	DISPID_InkRecoAlternate_ConfidenceAlternates = (DISPID_InkRecoAlternate_LineAlternates + 1),
	DISPID_InkRecoAlternate_AlternatesWithConstantPropertyValues = (DISPID_InkRecoAlternate_ConfidenceAlternates + 1)
} DISPID_InkRecoAlternate;
typedef enum DISPID_InkRecognitionAlternates
{
	DISPID_InkRecognitionAlternates_NewEnum = DISPID_NEWENUM,
	DISPID_InkRecognitionAlternates_Item = DISPID_VALUE,
	DISPID_InkRecognitionAlternates_Count = 1,
	DISPID_InkRecognitionAlternates_Strokes = (DISPID_InkRecognitionAlternates_Count + 1)
} DISPID_InkRecognitionAlternates;
typedef struct _InkRecoGuide
{
	RECT rectWritingBox;
	RECT rectDrawnBox;
	long cRows;
	long cColumns;
	long midline;
} InkRecoGuide;
typedef enum DISPID_InkRecognizerGuide
{
	DISPID_IRGWritingBox = 1,
	DISPID_IRGDrawnBox = (DISPID_IRGWritingBox + 1),
	DISPID_IRGRows = (DISPID_IRGDrawnBox + 1),
	DISPID_IRGColumns = (DISPID_IRGRows + 1),
	DISPID_IRGMidline = (DISPID_IRGColumns + 1),
	DISPID_IRGGuideData = (DISPID_IRGMidline + 1)
} DISPID_InkRecognizerGuide;
typedef enum DISPID_InkWordList
{
	DISPID_InkWordList_AddWord = 0,
	DISPID_InkWordList_RemoveWord = (DISPID_InkWordList_AddWord + 1),
	DISPID_InkWordList_Merge = (DISPID_InkWordList_RemoveWord + 1)
} DISPID_InkWordList;
typedef enum DISPID_InkWordList2
{
	DISPID_InkWordList2_AddWords = (DISPID_InkWordList_Merge + 1)
} DISPID_InkWordList2;
extern const IID LIBID_MSINKAUTLib;
#ifndef __InkConstants_MODULE_DEFINED__
#define __InkConstants_MODULE_DEFINED__
const LONG InkMinTransparencyValue = 0;
const LONG InkMaxTransparencyValue = 255;
#endif
#ifndef __InkCollectorConstants_MODULE_DEFINED__
#define __InkCollectorConstants_MODULE_DEFINED__
const LONG InkCollectorClipInkToMargin = 0;
const LONG InkCollectorDefaultMargin = (-2147483647L - 1);
#endif
#ifndef __IInkRectangle_INTERFACE_DEFINED__
#define __IInkRectangle_INTERFACE_DEFINED__
extern const IID IID_IInkRectangle;
typedef struct IInkRectangleVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IInkRectangle * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IInkRectangle * This);
	ULONG(STDMETHODCALLTYPE * Release) (IInkRectangle * This);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfoCount) (IInkRectangle * This, UINT * pctinfo);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfo) (IInkRectangle * This, UINT iTInfo, LCID lcid, ITypeInfo ** ppTInfo);
	HRESULT(STDMETHODCALLTYPE * GetIDsOfNames) (IInkRectangle * This, REFIID riid, LPOLESTR * rgszNames, UINT cNames, LCID lcid, DISPID * rgDispId);
	HRESULT(STDMETHODCALLTYPE * Invoke) (IInkRectangle * This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS * pDispParams, VARIANT * pVarResult, EXCEPINFO * pExcepInfo, UINT * puArgErr);
	HRESULT(STDMETHODCALLTYPE * get_Top) (IInkRectangle * This, long *Units);
	HRESULT(STDMETHODCALLTYPE * put_Top) (IInkRectangle * This, long Units);
	HRESULT(STDMETHODCALLTYPE * get_Left) (IInkRectangle * This, long *Units);
	HRESULT(STDMETHODCALLTYPE * put_Left) (IInkRectangle * This, long Units);
	HRESULT(STDMETHODCALLTYPE * get_Bottom) (IInkRectangle * This, long *Units);
	HRESULT(STDMETHODCALLTYPE * put_Bottom) (IInkRectangle * This, long Units);
	HRESULT(STDMETHODCALLTYPE * get_Right) (IInkRectangle * This, long *Units);
	HRESULT(STDMETHODCALLTYPE * put_Right) (IInkRectangle * This, long Units);
	HRESULT(STDMETHODCALLTYPE * get_Data) (IInkRectangle * This, RECT * Rect);
	HRESULT(STDMETHODCALLTYPE * put_Data) (IInkRectangle * This, RECT Rect);
	HRESULT(STDMETHODCALLTYPE * GetRectangle) (IInkRectangle * This, long *Top, long *Left, long *Bottom, long *Right);
	HRESULT(STDMETHODCALLTYPE * SetRectangle) (IInkRectangle * This, long Top, long Left, long Bottom, long Right);
	END_INTERFACE
}  IInkRectangleVtbl;
interface IInkRectangle
{
	CONST_VTBL struct IInkRectangleVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IInkRectangle_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IInkRectangle_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define IInkRectangle_Release(This)( (This)->lpVtbl -> Release(This) )
#define IInkRectangle_GetTypeInfoCount(This,pctinfo)( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define IInkRectangle_GetTypeInfo(This,iTInfo,lcid,ppTInfo)( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define IInkRectangle_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define IInkRectangle_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define IInkRectangle_get_Top(This,Units)( (This)->lpVtbl -> get_Top(This,Units) )
#define IInkRectangle_put_Top(This,Units)( (This)->lpVtbl -> put_Top(This,Units) )
#define IInkRectangle_get_Left(This,Units)( (This)->lpVtbl -> get_Left(This,Units) )
#define IInkRectangle_put_Left(This,Units)( (This)->lpVtbl -> put_Left(This,Units) )
#define IInkRectangle_get_Bottom(This,Units)( (This)->lpVtbl -> get_Bottom(This,Units) )
#define IInkRectangle_put_Bottom(This,Units)( (This)->lpVtbl -> put_Bottom(This,Units) )
#define IInkRectangle_get_Right(This,Units)( (This)->lpVtbl -> get_Right(This,Units) )
#define IInkRectangle_put_Right(This,Units)( (This)->lpVtbl -> put_Right(This,Units) )
#define IInkRectangle_get_Data(This,Rect)( (This)->lpVtbl -> get_Data(This,Rect) )
#define IInkRectangle_put_Data(This,Rect)( (This)->lpVtbl -> put_Data(This,Rect) )
#define IInkRectangle_GetRectangle(This,Top,Left,Bottom,Right)( (This)->lpVtbl -> GetRectangle(This,Top,Left,Bottom,Right) )
#define IInkRectangle_SetRectangle(This,Top,Left,Bottom,Right)( (This)->lpVtbl -> SetRectangle(This,Top,Left,Bottom,Right) )
#endif
#endif
#ifndef __IInkExtendedProperty_INTERFACE_DEFINED__
#define __IInkExtendedProperty_INTERFACE_DEFINED__
extern const IID IID_IInkExtendedProperty;
typedef struct IInkExtendedPropertyVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IInkExtendedProperty * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IInkExtendedProperty * This);
	ULONG(STDMETHODCALLTYPE * Release) (IInkExtendedProperty * This);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfoCount) (IInkExtendedProperty * This, UINT * pctinfo);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfo) (IInkExtendedProperty * This, UINT iTInfo, LCID lcid, ITypeInfo ** ppTInfo);
	HRESULT(STDMETHODCALLTYPE * GetIDsOfNames) (IInkExtendedProperty * This, REFIID riid, LPOLESTR * rgszNames, UINT cNames, LCID lcid, DISPID * rgDispId);
	HRESULT(STDMETHODCALLTYPE * Invoke) (IInkExtendedProperty * This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS * pDispParams, VARIANT * pVarResult, EXCEPINFO * pExcepInfo, UINT * puArgErr);
	HRESULT(STDMETHODCALLTYPE * get_Guid) (IInkExtendedProperty * This, BSTR * Guid);
	HRESULT(STDMETHODCALLTYPE * get_Data) (IInkExtendedProperty * This, VARIANT * Data);
	HRESULT(STDMETHODCALLTYPE * put_Data) (IInkExtendedProperty * This, VARIANT Data);
	END_INTERFACE
}  IInkExtendedPropertyVtbl;
interface IInkExtendedProperty
{
	CONST_VTBL struct IInkExtendedPropertyVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IInkExtendedProperty_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IInkExtendedProperty_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define IInkExtendedProperty_Release(This)( (This)->lpVtbl -> Release(This) )
#define IInkExtendedProperty_GetTypeInfoCount(This,pctinfo)( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define IInkExtendedProperty_GetTypeInfo(This,iTInfo,lcid,ppTInfo)( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define IInkExtendedProperty_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define IInkExtendedProperty_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define IInkExtendedProperty_get_Guid(This,Guid)( (This)->lpVtbl -> get_Guid(This,Guid) )
#define IInkExtendedProperty_get_Data(This,Data)( (This)->lpVtbl -> get_Data(This,Data) )
#define IInkExtendedProperty_put_Data(This,Data)( (This)->lpVtbl -> put_Data(This,Data) )
#endif
#endif
#ifndef __IInkExtendedProperties_INTERFACE_DEFINED__
#define __IInkExtendedProperties_INTERFACE_DEFINED__
extern const IID IID_IInkExtendedProperties;
typedef struct IInkExtendedPropertiesVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IInkExtendedProperties * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IInkExtendedProperties * This);
	ULONG(STDMETHODCALLTYPE * Release) (IInkExtendedProperties * This);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfoCount) (IInkExtendedProperties * This, UINT * pctinfo);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfo) (IInkExtendedProperties * This, UINT iTInfo, LCID lcid, ITypeInfo ** ppTInfo);
	HRESULT(STDMETHODCALLTYPE * GetIDsOfNames) (IInkExtendedProperties * This, REFIID riid, LPOLESTR * rgszNames, UINT cNames, LCID lcid, DISPID * rgDispId);
	HRESULT(STDMETHODCALLTYPE * Invoke) (IInkExtendedProperties * This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS * pDispParams, VARIANT * pVarResult, EXCEPINFO * pExcepInfo, UINT * puArgErr);
	HRESULT(STDMETHODCALLTYPE * get_Count) (IInkExtendedProperties * This, long *Count);
	HRESULT(STDMETHODCALLTYPE * get__NewEnum) (IInkExtendedProperties * This, IUnknown ** _NewEnum);
	HRESULT(STDMETHODCALLTYPE * Item) (IInkExtendedProperties * This, VARIANT Identifier, IInkExtendedProperty ** Item);
	HRESULT(STDMETHODCALLTYPE * Add) (IInkExtendedProperties * This, BSTR Guid, VARIANT Data, IInkExtendedProperty ** InkExtendedProperty);
	HRESULT(STDMETHODCALLTYPE * Remove) (IInkExtendedProperties * This, VARIANT Identifier);
	HRESULT(STDMETHODCALLTYPE * Clear) (IInkExtendedProperties * This);
	HRESULT(STDMETHODCALLTYPE * DoesPropertyExist) (IInkExtendedProperties * This, BSTR Guid, VARIANT_BOOL * DoesPropertyExist);
	END_INTERFACE
}  IInkExtendedPropertiesVtbl;
interface IInkExtendedProperties
{
	CONST_VTBL struct IInkExtendedPropertiesVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IInkExtendedProperties_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IInkExtendedProperties_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define IInkExtendedProperties_Release(This)( (This)->lpVtbl -> Release(This) )
#define IInkExtendedProperties_GetTypeInfoCount(This,pctinfo)( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define IInkExtendedProperties_GetTypeInfo(This,iTInfo,lcid,ppTInfo)( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define IInkExtendedProperties_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define IInkExtendedProperties_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define IInkExtendedProperties_get_Count(This,Count)( (This)->lpVtbl -> get_Count(This,Count) )
#define IInkExtendedProperties_get__NewEnum(This,_NewEnum)( (This)->lpVtbl -> get__NewEnum(This,_NewEnum) )
#define IInkExtendedProperties_Item(This,Identifier,Item)( (This)->lpVtbl -> Item(This,Identifier,Item) )
#define IInkExtendedProperties_Add(This,Guid,Data,InkExtendedProperty)( (This)->lpVtbl -> Add(This,Guid,Data,InkExtendedProperty) )
#define IInkExtendedProperties_Remove(This,Identifier)( (This)->lpVtbl -> Remove(This,Identifier) )
#define IInkExtendedProperties_Clear(This)( (This)->lpVtbl -> Clear(This) )
#define IInkExtendedProperties_DoesPropertyExist(This,Guid,DoesPropertyExist)( (This)->lpVtbl -> DoesPropertyExist(This,Guid,DoesPropertyExist) )
#endif
#endif
#ifndef __IInkDrawingAttributes_INTERFACE_DEFINED__
#define __IInkDrawingAttributes_INTERFACE_DEFINED__
extern const IID IID_IInkDrawingAttributes;
typedef struct IInkDrawingAttributesVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IInkDrawingAttributes * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IInkDrawingAttributes * This);
	ULONG(STDMETHODCALLTYPE * Release) (IInkDrawingAttributes * This);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfoCount) (IInkDrawingAttributes * This, UINT * pctinfo);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfo) (IInkDrawingAttributes * This, UINT iTInfo, LCID lcid, ITypeInfo ** ppTInfo);
	HRESULT(STDMETHODCALLTYPE * GetIDsOfNames) (IInkDrawingAttributes * This, REFIID riid, LPOLESTR * rgszNames, UINT cNames, LCID lcid, DISPID * rgDispId);
	HRESULT(STDMETHODCALLTYPE * Invoke) (IInkDrawingAttributes * This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS * pDispParams, VARIANT * pVarResult, EXCEPINFO * pExcepInfo, UINT * puArgErr);
	HRESULT(STDMETHODCALLTYPE * get_Color) (IInkDrawingAttributes * This, long *CurrentColor);
	HRESULT(STDMETHODCALLTYPE * put_Color) (IInkDrawingAttributes * This, long NewColor);
	HRESULT(STDMETHODCALLTYPE * get_Width) (IInkDrawingAttributes * This, float *CurrentWidth);
	HRESULT(STDMETHODCALLTYPE * put_Width) (IInkDrawingAttributes * This, float NewWidth);
	HRESULT(STDMETHODCALLTYPE * get_Height) (IInkDrawingAttributes * This, float *CurrentHeight);
	HRESULT(STDMETHODCALLTYPE * put_Height) (IInkDrawingAttributes * This, float NewHeight);
	HRESULT(STDMETHODCALLTYPE * get_FitToCurve) (IInkDrawingAttributes * This, VARIANT_BOOL * Flag);
	HRESULT(STDMETHODCALLTYPE * put_FitToCurve) (IInkDrawingAttributes * This, VARIANT_BOOL Flag);
	HRESULT(STDMETHODCALLTYPE * get_IgnorePressure) (IInkDrawingAttributes * This, VARIANT_BOOL * Flag);
	HRESULT(STDMETHODCALLTYPE * put_IgnorePressure) (IInkDrawingAttributes * This, VARIANT_BOOL Flag);
	HRESULT(STDMETHODCALLTYPE * get_AntiAliased) (IInkDrawingAttributes * This, VARIANT_BOOL * Flag);
	HRESULT(STDMETHODCALLTYPE * put_AntiAliased) (IInkDrawingAttributes * This, VARIANT_BOOL Flag);
	HRESULT(STDMETHODCALLTYPE * get_Transparency) (IInkDrawingAttributes * This, long *CurrentTransparency);
	HRESULT(STDMETHODCALLTYPE * put_Transparency) (IInkDrawingAttributes * This, long NewTransparency);
	HRESULT(STDMETHODCALLTYPE * get_RasterOperation) (IInkDrawingAttributes * This, InkRasterOperation * CurrentRasterOperation);
	HRESULT(STDMETHODCALLTYPE * put_RasterOperation) (IInkDrawingAttributes * This, InkRasterOperation NewRasterOperation);
	HRESULT(STDMETHODCALLTYPE * get_PenTip) (IInkDrawingAttributes * This, InkPenTip * CurrentPenTip);
	HRESULT(STDMETHODCALLTYPE * put_PenTip) (IInkDrawingAttributes * This, InkPenTip NewPenTip);
	HRESULT(STDMETHODCALLTYPE * get_ExtendedProperties) (IInkDrawingAttributes * This, IInkExtendedProperties ** Properties);
	HRESULT(STDMETHODCALLTYPE * Clone) (IInkDrawingAttributes * This, IInkDrawingAttributes ** DrawingAttributes);
	END_INTERFACE
}  IInkDrawingAttributesVtbl;
interface IInkDrawingAttributes
{
	CONST_VTBL struct IInkDrawingAttributesVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IInkDrawingAttributes_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IInkDrawingAttributes_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define IInkDrawingAttributes_Release(This)( (This)->lpVtbl -> Release(This) )
#define IInkDrawingAttributes_GetTypeInfoCount(This,pctinfo)( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define IInkDrawingAttributes_GetTypeInfo(This,iTInfo,lcid,ppTInfo)( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define IInkDrawingAttributes_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define IInkDrawingAttributes_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define IInkDrawingAttributes_get_Color(This,CurrentColor)( (This)->lpVtbl -> get_Color(This,CurrentColor) )
#define IInkDrawingAttributes_put_Color(This,NewColor)( (This)->lpVtbl -> put_Color(This,NewColor) )
#define IInkDrawingAttributes_get_Width(This,CurrentWidth)( (This)->lpVtbl -> get_Width(This,CurrentWidth) )
#define IInkDrawingAttributes_put_Width(This,NewWidth)( (This)->lpVtbl -> put_Width(This,NewWidth) )
#define IInkDrawingAttributes_get_Height(This,CurrentHeight)( (This)->lpVtbl -> get_Height(This,CurrentHeight) )
#define IInkDrawingAttributes_put_Height(This,NewHeight)( (This)->lpVtbl -> put_Height(This,NewHeight) )
#define IInkDrawingAttributes_get_FitToCurve(This,Flag)( (This)->lpVtbl -> get_FitToCurve(This,Flag) )
#define IInkDrawingAttributes_put_FitToCurve(This,Flag)( (This)->lpVtbl -> put_FitToCurve(This,Flag) )
#define IInkDrawingAttributes_get_IgnorePressure(This,Flag)( (This)->lpVtbl -> get_IgnorePressure(This,Flag) )
#define IInkDrawingAttributes_put_IgnorePressure(This,Flag)( (This)->lpVtbl -> put_IgnorePressure(This,Flag) )
#define IInkDrawingAttributes_get_AntiAliased(This,Flag)( (This)->lpVtbl -> get_AntiAliased(This,Flag) )
#define IInkDrawingAttributes_put_AntiAliased(This,Flag)( (This)->lpVtbl -> put_AntiAliased(This,Flag) )
#define IInkDrawingAttributes_get_Transparency(This,CurrentTransparency)( (This)->lpVtbl -> get_Transparency(This,CurrentTransparency) )
#define IInkDrawingAttributes_put_Transparency(This,NewTransparency)( (This)->lpVtbl -> put_Transparency(This,NewTransparency) )
#define IInkDrawingAttributes_get_RasterOperation(This,CurrentRasterOperation)( (This)->lpVtbl -> get_RasterOperation(This,CurrentRasterOperation) )
#define IInkDrawingAttributes_put_RasterOperation(This,NewRasterOperation)( (This)->lpVtbl -> put_RasterOperation(This,NewRasterOperation) )
#define IInkDrawingAttributes_get_PenTip(This,CurrentPenTip)( (This)->lpVtbl -> get_PenTip(This,CurrentPenTip) )
#define IInkDrawingAttributes_put_PenTip(This,NewPenTip)( (This)->lpVtbl -> put_PenTip(This,NewPenTip) )
#define IInkDrawingAttributes_get_ExtendedProperties(This,Properties)( (This)->lpVtbl -> get_ExtendedProperties(This,Properties) )
#define IInkDrawingAttributes_Clone(This,DrawingAttributes)( (This)->lpVtbl -> Clone(This,DrawingAttributes) )
#endif
#endif
#ifndef __IInkTransform_INTERFACE_DEFINED__
#define __IInkTransform_INTERFACE_DEFINED__
extern const IID IID_IInkTransform;
typedef struct IInkTransformVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IInkTransform * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IInkTransform * This);
	ULONG(STDMETHODCALLTYPE * Release) (IInkTransform * This);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfoCount) (IInkTransform * This, UINT * pctinfo);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfo) (IInkTransform * This, UINT iTInfo, LCID lcid, ITypeInfo ** ppTInfo);
	HRESULT(STDMETHODCALLTYPE * GetIDsOfNames) (IInkTransform * This, REFIID riid, LPOLESTR * rgszNames, UINT cNames, LCID lcid, DISPID * rgDispId);
	HRESULT(STDMETHODCALLTYPE * Invoke) (IInkTransform * This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS * pDispParams, VARIANT * pVarResult, EXCEPINFO * pExcepInfo, UINT * puArgErr);
	HRESULT(STDMETHODCALLTYPE * Reset) (IInkTransform * This);
	HRESULT(STDMETHODCALLTYPE * Translate) (IInkTransform * This, float HorizontalComponent, float VerticalComponent);
	HRESULT(STDMETHODCALLTYPE * Rotate) (IInkTransform * This, float Degrees, float x, float y);
	HRESULT(STDMETHODCALLTYPE * Reflect) (IInkTransform * This, VARIANT_BOOL Horizontally, VARIANT_BOOL Vertically);
	HRESULT(STDMETHODCALLTYPE * Shear) (IInkTransform * This, float HorizontalComponent, float VerticalComponent);
	HRESULT(STDMETHODCALLTYPE * ScaleTransform) (IInkTransform * This, float HorizontalMultiplier, float VerticalMultiplier);
	HRESULT(STDMETHODCALLTYPE * GetTransform) (IInkTransform * This, float *eM11, float *eM12, float *eM21, float *eM22, float *eDx, float *eDy);
	HRESULT(STDMETHODCALLTYPE * SetTransform) (IInkTransform * This, float eM11, float eM12, float eM21, float eM22, float eDx, float eDy);
	HRESULT(STDMETHODCALLTYPE * get_eM11) (IInkTransform * This, float *Value);
	HRESULT(STDMETHODCALLTYPE * put_eM11) (IInkTransform * This, float Value);
	HRESULT(STDMETHODCALLTYPE * get_eM12) (IInkTransform * This, float *Value);
	HRESULT(STDMETHODCALLTYPE * put_eM12) (IInkTransform * This, float Value);
	HRESULT(STDMETHODCALLTYPE * get_eM21) (IInkTransform * This, float *Value);
	HRESULT(STDMETHODCALLTYPE * put_eM21) (IInkTransform * This, float Value);
	HRESULT(STDMETHODCALLTYPE * get_eM22) (IInkTransform * This, float *Value);
	HRESULT(STDMETHODCALLTYPE * put_eM22) (IInkTransform * This, float Value);
	HRESULT(STDMETHODCALLTYPE * get_eDx) (IInkTransform * This, float *Value);
	HRESULT(STDMETHODCALLTYPE * put_eDx) (IInkTransform * This, float Value);
	HRESULT(STDMETHODCALLTYPE * get_eDy) (IInkTransform * This, float *Value);
	HRESULT(STDMETHODCALLTYPE * put_eDy) (IInkTransform * This, float Value);
	HRESULT(STDMETHODCALLTYPE * get_Data) (IInkTransform * This, XFORM * XForm);
	HRESULT(STDMETHODCALLTYPE * put_Data) (IInkTransform * This, XFORM XForm);
	END_INTERFACE
}  IInkTransformVtbl;
interface IInkTransform
{
	CONST_VTBL struct IInkTransformVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IInkTransform_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IInkTransform_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define IInkTransform_Release(This)( (This)->lpVtbl -> Release(This) )
#define IInkTransform_GetTypeInfoCount(This,pctinfo)( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define IInkTransform_GetTypeInfo(This,iTInfo,lcid,ppTInfo)( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define IInkTransform_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define IInkTransform_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define IInkTransform_Reset(This)( (This)->lpVtbl -> Reset(This) )
#define IInkTransform_Translate(This,HorizontalComponent,VerticalComponent)( (This)->lpVtbl -> Translate(This,HorizontalComponent,VerticalComponent) )
#define IInkTransform_Rotate(This,Degrees,x,y)( (This)->lpVtbl -> Rotate(This,Degrees,x,y) )
#define IInkTransform_Reflect(This,Horizontally,Vertically)( (This)->lpVtbl -> Reflect(This,Horizontally,Vertically) )
#define IInkTransform_Shear(This,HorizontalComponent,VerticalComponent)( (This)->lpVtbl -> Shear(This,HorizontalComponent,VerticalComponent) )
#define IInkTransform_ScaleTransform(This,HorizontalMultiplier,VerticalMultiplier)( (This)->lpVtbl -> ScaleTransform(This,HorizontalMultiplier,VerticalMultiplier) )
#define IInkTransform_GetTransform(This,eM11,eM12,eM21,eM22,eDx,eDy)( (This)->lpVtbl -> GetTransform(This,eM11,eM12,eM21,eM22,eDx,eDy) )
#define IInkTransform_SetTransform(This,eM11,eM12,eM21,eM22,eDx,eDy)( (This)->lpVtbl -> SetTransform(This,eM11,eM12,eM21,eM22,eDx,eDy) )
#define IInkTransform_get_eM11(This,Value)( (This)->lpVtbl -> get_eM11(This,Value) )
#define IInkTransform_put_eM11(This,Value)( (This)->lpVtbl -> put_eM11(This,Value) )
#define IInkTransform_get_eM12(This,Value)( (This)->lpVtbl -> get_eM12(This,Value) )
#define IInkTransform_put_eM12(This,Value)( (This)->lpVtbl -> put_eM12(This,Value) )
#define IInkTransform_get_eM21(This,Value)( (This)->lpVtbl -> get_eM21(This,Value) )
#define IInkTransform_put_eM21(This,Value)( (This)->lpVtbl -> put_eM21(This,Value) )
#define IInkTransform_get_eM22(This,Value)( (This)->lpVtbl -> get_eM22(This,Value) )
#define IInkTransform_put_eM22(This,Value)( (This)->lpVtbl -> put_eM22(This,Value) )
#define IInkTransform_get_eDx(This,Value)( (This)->lpVtbl -> get_eDx(This,Value) )
#define IInkTransform_put_eDx(This,Value)( (This)->lpVtbl -> put_eDx(This,Value) )
#define IInkTransform_get_eDy(This,Value)( (This)->lpVtbl -> get_eDy(This,Value) )
#define IInkTransform_put_eDy(This,Value)( (This)->lpVtbl -> put_eDy(This,Value) )
#define IInkTransform_get_Data(This,XForm)( (This)->lpVtbl -> get_Data(This,XForm) )
#define IInkTransform_put_Data(This,XForm)( (This)->lpVtbl -> put_Data(This,XForm) )
#endif
#endif
#ifndef __IInkGesture_INTERFACE_DEFINED__
#define __IInkGesture_INTERFACE_DEFINED__
extern const IID IID_IInkGesture;
typedef struct IInkGestureVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IInkGesture * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IInkGesture * This);
	ULONG(STDMETHODCALLTYPE * Release) (IInkGesture * This);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfoCount) (IInkGesture * This, UINT * pctinfo);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfo) (IInkGesture * This, UINT iTInfo, LCID lcid, ITypeInfo ** ppTInfo);
	HRESULT(STDMETHODCALLTYPE * GetIDsOfNames) (IInkGesture * This, REFIID riid, LPOLESTR * rgszNames, UINT cNames, LCID lcid, DISPID * rgDispId);
	HRESULT(STDMETHODCALLTYPE * Invoke) (IInkGesture * This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS * pDispParams, VARIANT * pVarResult, EXCEPINFO * pExcepInfo, UINT * puArgErr);
	HRESULT(STDMETHODCALLTYPE * get_Confidence) (IInkGesture * This, InkRecognitionConfidence * Confidence);
	HRESULT(STDMETHODCALLTYPE * get_Id) (IInkGesture * This, InkApplicationGesture * Id);
	HRESULT(STDMETHODCALLTYPE * GetHotPoint) (IInkGesture * This, long *X, long *Y);
	END_INTERFACE
}  IInkGestureVtbl;
interface IInkGesture
{
	CONST_VTBL struct IInkGestureVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IInkGesture_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IInkGesture_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define IInkGesture_Release(This)( (This)->lpVtbl -> Release(This) )
#define IInkGesture_GetTypeInfoCount(This,pctinfo)( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define IInkGesture_GetTypeInfo(This,iTInfo,lcid,ppTInfo)( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define IInkGesture_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define IInkGesture_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define IInkGesture_get_Confidence(This,Confidence)( (This)->lpVtbl -> get_Confidence(This,Confidence) )
#define IInkGesture_get_Id(This,Id)( (This)->lpVtbl -> get_Id(This,Id) )
#define IInkGesture_GetHotPoint(This,X,Y)( (This)->lpVtbl -> GetHotPoint(This,X,Y) )
#endif
#endif
#ifndef __IInkCursor_INTERFACE_DEFINED__
#define __IInkCursor_INTERFACE_DEFINED__
extern const IID IID_IInkCursor;
typedef struct IInkCursorVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IInkCursor * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IInkCursor * This);
	ULONG(STDMETHODCALLTYPE * Release) (IInkCursor * This);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfoCount) (IInkCursor * This, UINT * pctinfo);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfo) (IInkCursor * This, UINT iTInfo, LCID lcid, ITypeInfo ** ppTInfo);
	HRESULT(STDMETHODCALLTYPE * GetIDsOfNames) (IInkCursor * This, REFIID riid, LPOLESTR * rgszNames, UINT cNames, LCID lcid, DISPID * rgDispId);
	HRESULT(STDMETHODCALLTYPE * Invoke) (IInkCursor * This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS * pDispParams, VARIANT * pVarResult, EXCEPINFO * pExcepInfo, UINT * puArgErr);
	HRESULT(STDMETHODCALLTYPE * get_Name) (IInkCursor * This, BSTR * Name);
	HRESULT(STDMETHODCALLTYPE * get_Id) (IInkCursor * This, long *Id);
	HRESULT(STDMETHODCALLTYPE * get_Inverted) (IInkCursor * This, VARIANT_BOOL * Status);
	HRESULT(STDMETHODCALLTYPE * get_DrawingAttributes) (IInkCursor * This, IInkDrawingAttributes ** Attributes);
	HRESULT(STDMETHODCALLTYPE * putref_DrawingAttributes) (IInkCursor * This, IInkDrawingAttributes * Attributes);
	HRESULT(STDMETHODCALLTYPE * get_Tablet) (IInkCursor * This, IInkTablet ** Tablet);
	HRESULT(STDMETHODCALLTYPE * get_Buttons) (IInkCursor * This, IInkCursorButtons ** Buttons);
	END_INTERFACE
}  IInkCursorVtbl;
interface IInkCursor
{
	CONST_VTBL struct IInkCursorVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IInkCursor_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IInkCursor_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define IInkCursor_Release(This)( (This)->lpVtbl -> Release(This) )
#define IInkCursor_GetTypeInfoCount(This,pctinfo)( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define IInkCursor_GetTypeInfo(This,iTInfo,lcid,ppTInfo)( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define IInkCursor_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define IInkCursor_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define IInkCursor_get_Name(This,Name)( (This)->lpVtbl -> get_Name(This,Name) )
#define IInkCursor_get_Id(This,Id)( (This)->lpVtbl -> get_Id(This,Id) )
#define IInkCursor_get_Inverted(This,Status)( (This)->lpVtbl -> get_Inverted(This,Status) )
#define IInkCursor_get_DrawingAttributes(This,Attributes)( (This)->lpVtbl -> get_DrawingAttributes(This,Attributes) )
#define IInkCursor_putref_DrawingAttributes(This,Attributes)( (This)->lpVtbl -> putref_DrawingAttributes(This,Attributes) )
#define IInkCursor_get_Tablet(This,Tablet)( (This)->lpVtbl -> get_Tablet(This,Tablet) )
#define IInkCursor_get_Buttons(This,Buttons)( (This)->lpVtbl -> get_Buttons(This,Buttons) )
#endif
#endif
#ifndef __IInkCursors_INTERFACE_DEFINED__
#define __IInkCursors_INTERFACE_DEFINED__
extern const IID IID_IInkCursors;
typedef struct IInkCursorsVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IInkCursors * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IInkCursors * This);
	ULONG(STDMETHODCALLTYPE * Release) (IInkCursors * This);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfoCount) (IInkCursors * This, UINT * pctinfo);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfo) (IInkCursors * This, UINT iTInfo, LCID lcid, ITypeInfo ** ppTInfo);
	HRESULT(STDMETHODCALLTYPE * GetIDsOfNames) (IInkCursors * This, REFIID riid, LPOLESTR * rgszNames, UINT cNames, LCID lcid, DISPID * rgDispId);
	HRESULT(STDMETHODCALLTYPE * Invoke) (IInkCursors * This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS * pDispParams, VARIANT * pVarResult, EXCEPINFO * pExcepInfo, UINT * puArgErr);
	HRESULT(STDMETHODCALLTYPE * get_Count) (IInkCursors * This, long *Count);
	HRESULT(STDMETHODCALLTYPE * get__NewEnum) (IInkCursors * This, IUnknown ** _NewEnum);
	HRESULT(STDMETHODCALLTYPE * Item) (IInkCursors * This, long Index, IInkCursor ** Cursor);
	END_INTERFACE
}  IInkCursorsVtbl;
interface IInkCursors
{
	CONST_VTBL struct IInkCursorsVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IInkCursors_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IInkCursors_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define IInkCursors_Release(This)( (This)->lpVtbl -> Release(This) )
#define IInkCursors_GetTypeInfoCount(This,pctinfo)( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define IInkCursors_GetTypeInfo(This,iTInfo,lcid,ppTInfo)( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define IInkCursors_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define IInkCursors_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define IInkCursors_get_Count(This,Count)( (This)->lpVtbl -> get_Count(This,Count) )
#define IInkCursors_get__NewEnum(This,_NewEnum)( (This)->lpVtbl -> get__NewEnum(This,_NewEnum) )
#define IInkCursors_Item(This,Index,Cursor)( (This)->lpVtbl -> Item(This,Index,Cursor) )
#endif
#endif
#ifndef __IInkCursorButton_INTERFACE_DEFINED__
#define __IInkCursorButton_INTERFACE_DEFINED__
extern const IID IID_IInkCursorButton;
typedef struct IInkCursorButtonVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IInkCursorButton * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IInkCursorButton * This);
	ULONG(STDMETHODCALLTYPE * Release) (IInkCursorButton * This);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfoCount) (IInkCursorButton * This, UINT * pctinfo);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfo) (IInkCursorButton * This, UINT iTInfo, LCID lcid, ITypeInfo ** ppTInfo);
	HRESULT(STDMETHODCALLTYPE * GetIDsOfNames) (IInkCursorButton * This, REFIID riid, LPOLESTR * rgszNames, UINT cNames, LCID lcid, DISPID * rgDispId);
	HRESULT(STDMETHODCALLTYPE * Invoke) (IInkCursorButton * This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS * pDispParams, VARIANT * pVarResult, EXCEPINFO * pExcepInfo, UINT * puArgErr);
	HRESULT(STDMETHODCALLTYPE * get_Name) (IInkCursorButton * This, BSTR * Name);
	HRESULT(STDMETHODCALLTYPE * get_Id) (IInkCursorButton * This, BSTR * Id);
	HRESULT(STDMETHODCALLTYPE * get_State) (IInkCursorButton * This, InkCursorButtonState * CurrentState);
	END_INTERFACE
}  IInkCursorButtonVtbl;
interface IInkCursorButton
{
	CONST_VTBL struct IInkCursorButtonVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IInkCursorButton_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IInkCursorButton_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define IInkCursorButton_Release(This)( (This)->lpVtbl -> Release(This) )
#define IInkCursorButton_GetTypeInfoCount(This,pctinfo)( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define IInkCursorButton_GetTypeInfo(This,iTInfo,lcid,ppTInfo)( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define IInkCursorButton_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define IInkCursorButton_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define IInkCursorButton_get_Name(This,Name)( (This)->lpVtbl -> get_Name(This,Name) )
#define IInkCursorButton_get_Id(This,Id)( (This)->lpVtbl -> get_Id(This,Id) )
#define IInkCursorButton_get_State(This,CurrentState)( (This)->lpVtbl -> get_State(This,CurrentState) )
#endif
#endif
#ifndef __IInkCursorButtons_INTERFACE_DEFINED__
#define __IInkCursorButtons_INTERFACE_DEFINED__
extern const IID IID_IInkCursorButtons;
typedef struct IInkCursorButtonsVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IInkCursorButtons * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IInkCursorButtons * This);
	ULONG(STDMETHODCALLTYPE * Release) (IInkCursorButtons * This);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfoCount) (IInkCursorButtons * This, UINT * pctinfo);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfo) (IInkCursorButtons * This, UINT iTInfo, LCID lcid, ITypeInfo ** ppTInfo);
	HRESULT(STDMETHODCALLTYPE * GetIDsOfNames) (IInkCursorButtons * This, REFIID riid, LPOLESTR * rgszNames, UINT cNames, LCID lcid, DISPID * rgDispId);
	HRESULT(STDMETHODCALLTYPE * Invoke) (IInkCursorButtons * This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS * pDispParams, VARIANT * pVarResult, EXCEPINFO * pExcepInfo, UINT * puArgErr);
	HRESULT(STDMETHODCALLTYPE * get_Count) (IInkCursorButtons * This, long *Count);
	HRESULT(STDMETHODCALLTYPE * get__NewEnum) (IInkCursorButtons * This, IUnknown ** _NewEnum);
	HRESULT(STDMETHODCALLTYPE * Item) (IInkCursorButtons * This, VARIANT Identifier, IInkCursorButton ** Button);
	END_INTERFACE
}  IInkCursorButtonsVtbl;
interface IInkCursorButtons
{
	CONST_VTBL struct IInkCursorButtonsVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IInkCursorButtons_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IInkCursorButtons_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define IInkCursorButtons_Release(This)( (This)->lpVtbl -> Release(This) )
#define IInkCursorButtons_GetTypeInfoCount(This,pctinfo)( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define IInkCursorButtons_GetTypeInfo(This,iTInfo,lcid,ppTInfo)( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define IInkCursorButtons_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define IInkCursorButtons_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define IInkCursorButtons_get_Count(This,Count)( (This)->lpVtbl -> get_Count(This,Count) )
#define IInkCursorButtons_get__NewEnum(This,_NewEnum)( (This)->lpVtbl -> get__NewEnum(This,_NewEnum) )
#define IInkCursorButtons_Item(This,Identifier,Button)( (This)->lpVtbl -> Item(This,Identifier,Button) )
#endif
#endif
#ifndef __IInkTablet_INTERFACE_DEFINED__
#define __IInkTablet_INTERFACE_DEFINED__
extern const IID IID_IInkTablet;
typedef struct IInkTabletVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IInkTablet * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IInkTablet * This);
	ULONG(STDMETHODCALLTYPE * Release) (IInkTablet * This);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfoCount) (IInkTablet * This, UINT * pctinfo);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfo) (IInkTablet * This, UINT iTInfo, LCID lcid, ITypeInfo ** ppTInfo);
	HRESULT(STDMETHODCALLTYPE * GetIDsOfNames) (IInkTablet * This, REFIID riid, LPOLESTR * rgszNames, UINT cNames, LCID lcid, DISPID * rgDispId);
	HRESULT(STDMETHODCALLTYPE * Invoke) (IInkTablet * This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS * pDispParams, VARIANT * pVarResult, EXCEPINFO * pExcepInfo, UINT * puArgErr);
	HRESULT(STDMETHODCALLTYPE * get_Name) (IInkTablet * This, BSTR * Name);
	HRESULT(STDMETHODCALLTYPE * get_PlugAndPlayId) (IInkTablet * This, BSTR * Id);
	HRESULT(STDMETHODCALLTYPE * get_MaximumInputRectangle) (IInkTablet * This, IInkRectangle ** Rectangle);
	HRESULT(STDMETHODCALLTYPE * get_HardwareCapabilities) (IInkTablet * This, TabletHardwareCapabilities * Capabilities);
	HRESULT(STDMETHODCALLTYPE * IsPacketPropertySupported) (IInkTablet * This, BSTR packetPropertyName, VARIANT_BOOL * Supported);
	HRESULT(STDMETHODCALLTYPE * GetPropertyMetrics) (IInkTablet * This, BSTR propertyName, long *Minimum, long *Maximum, TabletPropertyMetricUnit * Units, float *Resolution);
	END_INTERFACE
}  IInkTabletVtbl;
interface IInkTablet
{
	CONST_VTBL struct IInkTabletVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IInkTablet_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IInkTablet_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define IInkTablet_Release(This)( (This)->lpVtbl -> Release(This) )
#define IInkTablet_GetTypeInfoCount(This,pctinfo)( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define IInkTablet_GetTypeInfo(This,iTInfo,lcid,ppTInfo)( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define IInkTablet_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define IInkTablet_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define IInkTablet_get_Name(This,Name)( (This)->lpVtbl -> get_Name(This,Name) )
#define IInkTablet_get_PlugAndPlayId(This,Id)( (This)->lpVtbl -> get_PlugAndPlayId(This,Id) )
#define IInkTablet_get_MaximumInputRectangle(This,Rectangle)( (This)->lpVtbl -> get_MaximumInputRectangle(This,Rectangle) )
#define IInkTablet_get_HardwareCapabilities(This,Capabilities)( (This)->lpVtbl -> get_HardwareCapabilities(This,Capabilities) )
#define IInkTablet_IsPacketPropertySupported(This,packetPropertyName,Supported)( (This)->lpVtbl -> IsPacketPropertySupported(This,packetPropertyName,Supported) )
#define IInkTablet_GetPropertyMetrics(This,propertyName,Minimum,Maximum,Units,Resolution)( (This)->lpVtbl -> GetPropertyMetrics(This,propertyName,Minimum,Maximum,Units,Resolution) )
#endif
#endif
#ifndef __IInkTablet2_INTERFACE_DEFINED__
#define __IInkTablet2_INTERFACE_DEFINED__
extern const IID IID_IInkTablet2;
typedef struct IInkTablet2Vtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IInkTablet2 * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IInkTablet2 * This);
	ULONG(STDMETHODCALLTYPE * Release) (IInkTablet2 * This);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfoCount) (IInkTablet2 * This, UINT * pctinfo);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfo) (IInkTablet2 * This, UINT iTInfo, LCID lcid, ITypeInfo ** ppTInfo);
	HRESULT(STDMETHODCALLTYPE * GetIDsOfNames) (IInkTablet2 * This, REFIID riid, LPOLESTR * rgszNames, UINT cNames, LCID lcid, DISPID * rgDispId);
	HRESULT(STDMETHODCALLTYPE * Invoke) (IInkTablet2 * This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS * pDispParams, VARIANT * pVarResult, EXCEPINFO * pExcepInfo, UINT * puArgErr);
	HRESULT(STDMETHODCALLTYPE * get_DeviceKind) (IInkTablet2 * This, TabletDeviceKind * Kind);
	END_INTERFACE
}  IInkTablet2Vtbl;
interface IInkTablet2
{
	CONST_VTBL struct IInkTablet2Vtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IInkTablet2_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IInkTablet2_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define IInkTablet2_Release(This)( (This)->lpVtbl -> Release(This) )
#define IInkTablet2_GetTypeInfoCount(This,pctinfo)( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define IInkTablet2_GetTypeInfo(This,iTInfo,lcid,ppTInfo)( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define IInkTablet2_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define IInkTablet2_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define IInkTablet2_get_DeviceKind(This,Kind)( (This)->lpVtbl -> get_DeviceKind(This,Kind) )
#endif
#endif
#ifndef __IInkTablet3_INTERFACE_DEFINED__
#define __IInkTablet3_INTERFACE_DEFINED__
extern const IID IID_IInkTablet3;
typedef struct IInkTablet3Vtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IInkTablet3 * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IInkTablet3 * This);
	ULONG(STDMETHODCALLTYPE * Release) (IInkTablet3 * This);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfoCount) (IInkTablet3 * This, UINT * pctinfo);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfo) (IInkTablet3 * This, UINT iTInfo, LCID lcid, ITypeInfo ** ppTInfo);
	HRESULT(STDMETHODCALLTYPE * GetIDsOfNames) (IInkTablet3 * This, REFIID riid, LPOLESTR * rgszNames, UINT cNames, LCID lcid, DISPID * rgDispId);
	HRESULT(STDMETHODCALLTYPE * Invoke) (IInkTablet3 * This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS * pDispParams, VARIANT * pVarResult, EXCEPINFO * pExcepInfo, UINT * puArgErr);
	HRESULT(STDMETHODCALLTYPE * get_IsMultiTouch) (IInkTablet3 * This, VARIANT_BOOL * pIsMultiTouch);
	HRESULT(STDMETHODCALLTYPE * get_MaximumCursors) (IInkTablet3 * This, ULONG * pMaximumCursors);
	END_INTERFACE
}  IInkTablet3Vtbl;
interface IInkTablet3
{
	CONST_VTBL struct IInkTablet3Vtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IInkTablet3_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IInkTablet3_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define IInkTablet3_Release(This)( (This)->lpVtbl -> Release(This) )
#define IInkTablet3_GetTypeInfoCount(This,pctinfo)( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define IInkTablet3_GetTypeInfo(This,iTInfo,lcid,ppTInfo)( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define IInkTablet3_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define IInkTablet3_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define IInkTablet3_get_IsMultiTouch(This,pIsMultiTouch)( (This)->lpVtbl -> get_IsMultiTouch(This,pIsMultiTouch) )
#define IInkTablet3_get_MaximumCursors(This,pMaximumCursors)( (This)->lpVtbl -> get_MaximumCursors(This,pMaximumCursors) )
#endif
#endif
#ifndef __IInkTablets_INTERFACE_DEFINED__
#define __IInkTablets_INTERFACE_DEFINED__
extern const IID IID_IInkTablets;
typedef struct IInkTabletsVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IInkTablets * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IInkTablets * This);
	ULONG(STDMETHODCALLTYPE * Release) (IInkTablets * This);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfoCount) (IInkTablets * This, UINT * pctinfo);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfo) (IInkTablets * This, UINT iTInfo, LCID lcid, ITypeInfo ** ppTInfo);
	HRESULT(STDMETHODCALLTYPE * GetIDsOfNames) (IInkTablets * This, REFIID riid, LPOLESTR * rgszNames, UINT cNames, LCID lcid, DISPID * rgDispId);
	HRESULT(STDMETHODCALLTYPE * Invoke) (IInkTablets * This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS * pDispParams, VARIANT * pVarResult, EXCEPINFO * pExcepInfo, UINT * puArgErr);
	HRESULT(STDMETHODCALLTYPE * get_Count) (IInkTablets * This, long *Count);
	HRESULT(STDMETHODCALLTYPE * get__NewEnum) (IInkTablets * This, IUnknown ** _NewEnum);
	HRESULT(STDMETHODCALLTYPE * get_DefaultTablet) (IInkTablets * This, IInkTablet ** DefaultTablet);
	HRESULT(STDMETHODCALLTYPE * Item) (IInkTablets * This, long Index, IInkTablet ** Tablet);
	HRESULT(STDMETHODCALLTYPE * IsPacketPropertySupported) (IInkTablets * This, BSTR packetPropertyName, VARIANT_BOOL * Supported);
	END_INTERFACE
}  IInkTabletsVtbl;
interface IInkTablets
{
	CONST_VTBL struct IInkTabletsVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IInkTablets_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IInkTablets_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define IInkTablets_Release(This)( (This)->lpVtbl -> Release(This) )
#define IInkTablets_GetTypeInfoCount(This,pctinfo)( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define IInkTablets_GetTypeInfo(This,iTInfo,lcid,ppTInfo)( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define IInkTablets_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define IInkTablets_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define IInkTablets_get_Count(This,Count)( (This)->lpVtbl -> get_Count(This,Count) )
#define IInkTablets_get__NewEnum(This,_NewEnum)( (This)->lpVtbl -> get__NewEnum(This,_NewEnum) )
#define IInkTablets_get_DefaultTablet(This,DefaultTablet)( (This)->lpVtbl -> get_DefaultTablet(This,DefaultTablet) )
#define IInkTablets_Item(This,Index,Tablet)( (This)->lpVtbl -> Item(This,Index,Tablet) )
#define IInkTablets_IsPacketPropertySupported(This,packetPropertyName,Supported)( (This)->lpVtbl -> IsPacketPropertySupported(This,packetPropertyName,Supported) )
#endif
#endif
#ifndef __IInkStrokeDisp_INTERFACE_DEFINED__
#define __IInkStrokeDisp_INTERFACE_DEFINED__
extern const IID IID_IInkStrokeDisp;
typedef struct IInkStrokeDispVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IInkStrokeDisp * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IInkStrokeDisp * This);
	ULONG(STDMETHODCALLTYPE * Release) (IInkStrokeDisp * This);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfoCount) (IInkStrokeDisp * This, UINT * pctinfo);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfo) (IInkStrokeDisp * This, UINT iTInfo, LCID lcid, ITypeInfo ** ppTInfo);
	HRESULT(STDMETHODCALLTYPE * GetIDsOfNames) (IInkStrokeDisp * This, REFIID riid, LPOLESTR * rgszNames, UINT cNames, LCID lcid, DISPID * rgDispId);
	HRESULT(STDMETHODCALLTYPE * Invoke) (IInkStrokeDisp * This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS * pDispParams, VARIANT * pVarResult, EXCEPINFO * pExcepInfo, UINT * puArgErr);
	HRESULT(STDMETHODCALLTYPE * get_ID) (IInkStrokeDisp * This, long *ID);
	HRESULT(STDMETHODCALLTYPE * get_BezierPoints) (IInkStrokeDisp * This, VARIANT * Points);
	HRESULT(STDMETHODCALLTYPE * get_DrawingAttributes) (IInkStrokeDisp * This, IInkDrawingAttributes ** DrawAttrs);
	HRESULT(STDMETHODCALLTYPE * putref_DrawingAttributes) (IInkStrokeDisp * This, IInkDrawingAttributes * DrawAttrs);
	HRESULT(STDMETHODCALLTYPE * get_Ink) (IInkStrokeDisp * This, IInkDisp ** Ink);
	HRESULT(STDMETHODCALLTYPE * get_ExtendedProperties) (IInkStrokeDisp * This, IInkExtendedProperties ** Properties);
	HRESULT(STDMETHODCALLTYPE * get_PolylineCusps) (IInkStrokeDisp * This, VARIANT * Cusps);
	HRESULT(STDMETHODCALLTYPE * get_BezierCusps) (IInkStrokeDisp * This, VARIANT * Cusps);
	HRESULT(STDMETHODCALLTYPE * get_SelfIntersections) (IInkStrokeDisp * This, VARIANT * Intersections);
	HRESULT(STDMETHODCALLTYPE * get_PacketCount) (IInkStrokeDisp * This, long *plCount);
	HRESULT(STDMETHODCALLTYPE * get_PacketSize) (IInkStrokeDisp * This, long *plSize);
	HRESULT(STDMETHODCALLTYPE * get_PacketDescription) (IInkStrokeDisp * This, VARIANT * PacketDescription);
	HRESULT(STDMETHODCALLTYPE * get_Deleted) (IInkStrokeDisp * This, VARIANT_BOOL * Deleted);
	HRESULT(STDMETHODCALLTYPE * GetBoundingBox) (IInkStrokeDisp * This, InkBoundingBoxMode BoundingBoxMode, IInkRectangle ** Rectangle);
	HRESULT(STDMETHODCALLTYPE * FindIntersections) (IInkStrokeDisp * This, IInkStrokes * Strokes, VARIANT * Intersections);
	HRESULT(STDMETHODCALLTYPE * GetRectangleIntersections) (IInkStrokeDisp * This, IInkRectangle * Rectangle, VARIANT * Intersections);
	HRESULT(STDMETHODCALLTYPE * Clip) (IInkStrokeDisp * This, IInkRectangle * Rectangle);
	HRESULT(STDMETHODCALLTYPE * HitTestCircle) (IInkStrokeDisp * This, long X, long Y, float Radius, VARIANT_BOOL * Intersects);
	HRESULT(STDMETHODCALLTYPE * NearestPoint) (IInkStrokeDisp * This, long X, long Y, float *Distance, float *Point);
	HRESULT(STDMETHODCALLTYPE * Split) (IInkStrokeDisp * This, float SplitAt, IInkStrokeDisp ** NewStroke);
	HRESULT(STDMETHODCALLTYPE * GetPacketDescriptionPropertyMetrics) (IInkStrokeDisp * This, BSTR PropertyName, long *Minimum, long *Maximum, TabletPropertyMetricUnit * Units, float *Resolution);
	HRESULT(STDMETHODCALLTYPE * GetPoints) (IInkStrokeDisp * This, long Index, long Count, VARIANT * Points);
	HRESULT(STDMETHODCALLTYPE * SetPoints) (IInkStrokeDisp * This, VARIANT Points, long Index, long Count, long *NumberOfPointsSet);
	HRESULT(STDMETHODCALLTYPE * GetPacketData) (IInkStrokeDisp * This, long Index, long Count, VARIANT * PacketData);
	HRESULT(STDMETHODCALLTYPE * GetPacketValuesByProperty) (IInkStrokeDisp * This, BSTR PropertyName, long Index, long Count, VARIANT * PacketValues);
	HRESULT(STDMETHODCALLTYPE * SetPacketValuesByProperty) (IInkStrokeDisp * This, BSTR bstrPropertyName, VARIANT PacketValues, long Index, long Count, long *NumberOfPacketsSet);
	HRESULT(STDMETHODCALLTYPE * GetFlattenedBezierPoints) (IInkStrokeDisp * This, long FittingError, VARIANT * FlattenedBezierPoints);
	HRESULT(STDMETHODCALLTYPE * Transform) (IInkStrokeDisp * This, IInkTransform * Transform, VARIANT_BOOL ApplyOnPenWidth);
	HRESULT(STDMETHODCALLTYPE * ScaleToRectangle) (IInkStrokeDisp * This, IInkRectangle * Rectangle);
	HRESULT(STDMETHODCALLTYPE * Move) (IInkStrokeDisp * This, float HorizontalComponent, float VerticalComponent);
	HRESULT(STDMETHODCALLTYPE * Rotate) (IInkStrokeDisp * This, float Degrees, float x, float y);
	HRESULT(STDMETHODCALLTYPE * Shear) (IInkStrokeDisp * This, float HorizontalMultiplier, float VerticalMultiplier);
	HRESULT(STDMETHODCALLTYPE * ScaleTransform) (IInkStrokeDisp * This, float HorizontalMultiplier, float VerticalMultiplier);
	END_INTERFACE
}  IInkStrokeDispVtbl;
interface IInkStrokeDisp
{
	CONST_VTBL struct IInkStrokeDispVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IInkStrokeDisp_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IInkStrokeDisp_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define IInkStrokeDisp_Release(This)( (This)->lpVtbl -> Release(This) )
#define IInkStrokeDisp_GetTypeInfoCount(This,pctinfo)( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define IInkStrokeDisp_GetTypeInfo(This,iTInfo,lcid,ppTInfo)( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define IInkStrokeDisp_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define IInkStrokeDisp_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define IInkStrokeDisp_get_ID(This,ID)( (This)->lpVtbl -> get_ID(This,ID) )
#define IInkStrokeDisp_get_BezierPoints(This,Points)( (This)->lpVtbl -> get_BezierPoints(This,Points) )
#define IInkStrokeDisp_get_DrawingAttributes(This,DrawAttrs)( (This)->lpVtbl -> get_DrawingAttributes(This,DrawAttrs) )
#define IInkStrokeDisp_putref_DrawingAttributes(This,DrawAttrs)( (This)->lpVtbl -> putref_DrawingAttributes(This,DrawAttrs) )
#define IInkStrokeDisp_get_Ink(This,Ink)( (This)->lpVtbl -> get_Ink(This,Ink) )
#define IInkStrokeDisp_get_ExtendedProperties(This,Properties)( (This)->lpVtbl -> get_ExtendedProperties(This,Properties) )
#define IInkStrokeDisp_get_PolylineCusps(This,Cusps)( (This)->lpVtbl -> get_PolylineCusps(This,Cusps) )
#define IInkStrokeDisp_get_BezierCusps(This,Cusps)( (This)->lpVtbl -> get_BezierCusps(This,Cusps) )
#define IInkStrokeDisp_get_SelfIntersections(This,Intersections)( (This)->lpVtbl -> get_SelfIntersections(This,Intersections) )
#define IInkStrokeDisp_get_PacketCount(This,plCount)( (This)->lpVtbl -> get_PacketCount(This,plCount) )
#define IInkStrokeDisp_get_PacketSize(This,plSize)( (This)->lpVtbl -> get_PacketSize(This,plSize) )
#define IInkStrokeDisp_get_PacketDescription(This,PacketDescription)( (This)->lpVtbl -> get_PacketDescription(This,PacketDescription) )
#define IInkStrokeDisp_get_Deleted(This,Deleted)( (This)->lpVtbl -> get_Deleted(This,Deleted) )
#define IInkStrokeDisp_GetBoundingBox(This,BoundingBoxMode,Rectangle)( (This)->lpVtbl -> GetBoundingBox(This,BoundingBoxMode,Rectangle) )
#define IInkStrokeDisp_FindIntersections(This,Strokes,Intersections)( (This)->lpVtbl -> FindIntersections(This,Strokes,Intersections) )
#define IInkStrokeDisp_GetRectangleIntersections(This,Rectangle,Intersections)( (This)->lpVtbl -> GetRectangleIntersections(This,Rectangle,Intersections) )
#define IInkStrokeDisp_Clip(This,Rectangle)( (This)->lpVtbl -> Clip(This,Rectangle) )
#define IInkStrokeDisp_HitTestCircle(This,X,Y,Radius,Intersects)( (This)->lpVtbl -> HitTestCircle(This,X,Y,Radius,Intersects) )
#define IInkStrokeDisp_NearestPoint(This,X,Y,Distance,Point)( (This)->lpVtbl -> NearestPoint(This,X,Y,Distance,Point) )
#define IInkStrokeDisp_Split(This,SplitAt,NewStroke)( (This)->lpVtbl -> Split(This,SplitAt,NewStroke) )
#define IInkStrokeDisp_GetPacketDescriptionPropertyMetrics(This,PropertyName,Minimum,Maximum,Units,Resolution)( (This)->lpVtbl -> GetPacketDescriptionPropertyMetrics(This,PropertyName,Minimum,Maximum,Units,Resolution) )
#define IInkStrokeDisp_GetPoints(This,Index,Count,Points)( (This)->lpVtbl -> GetPoints(This,Index,Count,Points) )
#define IInkStrokeDisp_SetPoints(This,Points,Index,Count,NumberOfPointsSet)( (This)->lpVtbl -> SetPoints(This,Points,Index,Count,NumberOfPointsSet) )
#define IInkStrokeDisp_GetPacketData(This,Index,Count,PacketData)( (This)->lpVtbl -> GetPacketData(This,Index,Count,PacketData) )
#define IInkStrokeDisp_GetPacketValuesByProperty(This,PropertyName,Index,Count,PacketValues)( (This)->lpVtbl -> GetPacketValuesByProperty(This,PropertyName,Index,Count,PacketValues) )
#define IInkStrokeDisp_SetPacketValuesByProperty(This,bstrPropertyName,PacketValues,Index,Count,NumberOfPacketsSet)( (This)->lpVtbl -> SetPacketValuesByProperty(This,bstrPropertyName,PacketValues,Index,Count,NumberOfPacketsSet) )
#define IInkStrokeDisp_GetFlattenedBezierPoints(This,FittingError,FlattenedBezierPoints)( (This)->lpVtbl -> GetFlattenedBezierPoints(This,FittingError,FlattenedBezierPoints) )
#define IInkStrokeDisp_Transform(This,Transform,ApplyOnPenWidth)( (This)->lpVtbl -> Transform(This,Transform,ApplyOnPenWidth) )
#define IInkStrokeDisp_ScaleToRectangle(This,Rectangle)( (This)->lpVtbl -> ScaleToRectangle(This,Rectangle) )
#define IInkStrokeDisp_Move(This,HorizontalComponent,VerticalComponent)( (This)->lpVtbl -> Move(This,HorizontalComponent,VerticalComponent) )
#define IInkStrokeDisp_Rotate(This,Degrees,x,y)( (This)->lpVtbl -> Rotate(This,Degrees,x,y) )
#define IInkStrokeDisp_Shear(This,HorizontalMultiplier,VerticalMultiplier)( (This)->lpVtbl -> Shear(This,HorizontalMultiplier,VerticalMultiplier) )
#define IInkStrokeDisp_ScaleTransform(This,HorizontalMultiplier,VerticalMultiplier)( (This)->lpVtbl -> ScaleTransform(This,HorizontalMultiplier,VerticalMultiplier) )
#endif
#endif
#ifndef __IInkStrokes_INTERFACE_DEFINED__
#define __IInkStrokes_INTERFACE_DEFINED__
extern const IID IID_IInkStrokes;
typedef struct IInkStrokesVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IInkStrokes * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IInkStrokes * This);
	ULONG(STDMETHODCALLTYPE * Release) (IInkStrokes * This);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfoCount) (IInkStrokes * This, UINT * pctinfo);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfo) (IInkStrokes * This, UINT iTInfo, LCID lcid, ITypeInfo ** ppTInfo);
	HRESULT(STDMETHODCALLTYPE * GetIDsOfNames) (IInkStrokes * This, REFIID riid, LPOLESTR * rgszNames, UINT cNames, LCID lcid, DISPID * rgDispId);
	HRESULT(STDMETHODCALLTYPE * Invoke) (IInkStrokes * This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS * pDispParams, VARIANT * pVarResult, EXCEPINFO * pExcepInfo, UINT * puArgErr);
	HRESULT(STDMETHODCALLTYPE * get_Count) (IInkStrokes * This, long *Count);
	HRESULT(STDMETHODCALLTYPE * get__NewEnum) (IInkStrokes * This, IUnknown ** _NewEnum);
	HRESULT(STDMETHODCALLTYPE * get_Ink) (IInkStrokes * This, IInkDisp ** Ink);
	HRESULT(STDMETHODCALLTYPE * get_RecognitionResult) (IInkStrokes * This, IInkRecognitionResult ** RecognitionResult);
	HRESULT(STDMETHODCALLTYPE * ToString) (IInkStrokes * This, BSTR * ToString);
	HRESULT(STDMETHODCALLTYPE * Item) (IInkStrokes * This, long Index, IInkStrokeDisp ** Stroke);
	HRESULT(STDMETHODCALLTYPE * Add) (IInkStrokes * This, IInkStrokeDisp * InkStroke);
	HRESULT(STDMETHODCALLTYPE * AddStrokes) (IInkStrokes * This, IInkStrokes * InkStrokes);
	HRESULT(STDMETHODCALLTYPE * Remove) (IInkStrokes * This, IInkStrokeDisp * InkStroke);
	HRESULT(STDMETHODCALLTYPE * RemoveStrokes) (IInkStrokes * This, IInkStrokes * InkStrokes);
	HRESULT(STDMETHODCALLTYPE * ModifyDrawingAttributes) (IInkStrokes * This, IInkDrawingAttributes * DrawAttrs);
	HRESULT(STDMETHODCALLTYPE * GetBoundingBox) (IInkStrokes * This, InkBoundingBoxMode BoundingBoxMode, IInkRectangle ** BoundingBox);
	HRESULT(STDMETHODCALLTYPE * Transform) (IInkStrokes * This, IInkTransform * Transform, VARIANT_BOOL ApplyOnPenWidth);
	HRESULT(STDMETHODCALLTYPE * ScaleToRectangle) (IInkStrokes * This, IInkRectangle * Rectangle);
	HRESULT(STDMETHODCALLTYPE * Move) (IInkStrokes * This, float HorizontalComponent, float VerticalComponent);
	HRESULT(STDMETHODCALLTYPE * Rotate) (IInkStrokes * This, float Degrees, float x, float y);
	HRESULT(STDMETHODCALLTYPE * Shear) (IInkStrokes * This, float HorizontalMultiplier, float VerticalMultiplier);
	HRESULT(STDMETHODCALLTYPE * ScaleTransform) (IInkStrokes * This, float HorizontalMultiplier, float VerticalMultiplier);
	HRESULT(STDMETHODCALLTYPE * Clip) (IInkStrokes * This, IInkRectangle * Rectangle);
	HRESULT(STDMETHODCALLTYPE * RemoveRecognitionResult) (IInkStrokes * This);
	END_INTERFACE
}  IInkStrokesVtbl;
interface IInkStrokes
{
	CONST_VTBL struct IInkStrokesVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IInkStrokes_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IInkStrokes_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define IInkStrokes_Release(This)( (This)->lpVtbl -> Release(This) )
#define IInkStrokes_GetTypeInfoCount(This,pctinfo)( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define IInkStrokes_GetTypeInfo(This,iTInfo,lcid,ppTInfo)( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define IInkStrokes_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define IInkStrokes_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define IInkStrokes_get_Count(This,Count)( (This)->lpVtbl -> get_Count(This,Count) )
#define IInkStrokes_get__NewEnum(This,_NewEnum)( (This)->lpVtbl -> get__NewEnum(This,_NewEnum) )
#define IInkStrokes_get_Ink(This,Ink)( (This)->lpVtbl -> get_Ink(This,Ink) )
#define IInkStrokes_get_RecognitionResult(This,RecognitionResult)( (This)->lpVtbl -> get_RecognitionResult(This,RecognitionResult) )
#define IInkStrokes_ToString(This,ToString)( (This)->lpVtbl -> ToString(This,ToString) )
#define IInkStrokes_Item(This,Index,Stroke)( (This)->lpVtbl -> Item(This,Index,Stroke) )
#define IInkStrokes_Add(This,InkStroke)( (This)->lpVtbl -> Add(This,InkStroke) )
#define IInkStrokes_AddStrokes(This,InkStrokes)( (This)->lpVtbl -> AddStrokes(This,InkStrokes) )
#define IInkStrokes_Remove(This,InkStroke)( (This)->lpVtbl -> Remove(This,InkStroke) )
#define IInkStrokes_RemoveStrokes(This,InkStrokes)( (This)->lpVtbl -> RemoveStrokes(This,InkStrokes) )
#define IInkStrokes_ModifyDrawingAttributes(This,DrawAttrs)( (This)->lpVtbl -> ModifyDrawingAttributes(This,DrawAttrs) )
#define IInkStrokes_GetBoundingBox(This,BoundingBoxMode,BoundingBox)( (This)->lpVtbl -> GetBoundingBox(This,BoundingBoxMode,BoundingBox) )
#define IInkStrokes_Transform(This,Transform,ApplyOnPenWidth)( (This)->lpVtbl -> Transform(This,Transform,ApplyOnPenWidth) )
#define IInkStrokes_ScaleToRectangle(This,Rectangle)( (This)->lpVtbl -> ScaleToRectangle(This,Rectangle) )
#define IInkStrokes_Move(This,HorizontalComponent,VerticalComponent)( (This)->lpVtbl -> Move(This,HorizontalComponent,VerticalComponent) )
#define IInkStrokes_Rotate(This,Degrees,x,y)( (This)->lpVtbl -> Rotate(This,Degrees,x,y) )
#define IInkStrokes_Shear(This,HorizontalMultiplier,VerticalMultiplier)( (This)->lpVtbl -> Shear(This,HorizontalMultiplier,VerticalMultiplier) )
#define IInkStrokes_ScaleTransform(This,HorizontalMultiplier,VerticalMultiplier)( (This)->lpVtbl -> ScaleTransform(This,HorizontalMultiplier,VerticalMultiplier) )
#define IInkStrokes_Clip(This,Rectangle)( (This)->lpVtbl -> Clip(This,Rectangle) )
#define IInkStrokes_RemoveRecognitionResult(This)( (This)->lpVtbl -> RemoveRecognitionResult(This) )
#endif
#endif
#ifndef __IInkCustomStrokes_INTERFACE_DEFINED__
#define __IInkCustomStrokes_INTERFACE_DEFINED__
extern const IID IID_IInkCustomStrokes;
typedef struct IInkCustomStrokesVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IInkCustomStrokes * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IInkCustomStrokes * This);
	ULONG(STDMETHODCALLTYPE * Release) (IInkCustomStrokes * This);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfoCount) (IInkCustomStrokes * This, UINT * pctinfo);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfo) (IInkCustomStrokes * This, UINT iTInfo, LCID lcid, ITypeInfo ** ppTInfo);
	HRESULT(STDMETHODCALLTYPE * GetIDsOfNames) (IInkCustomStrokes * This, REFIID riid, LPOLESTR * rgszNames, UINT cNames, LCID lcid, DISPID * rgDispId);
	HRESULT(STDMETHODCALLTYPE * Invoke) (IInkCustomStrokes * This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS * pDispParams, VARIANT * pVarResult, EXCEPINFO * pExcepInfo, UINT * puArgErr);
	HRESULT(STDMETHODCALLTYPE * get_Count) (IInkCustomStrokes * This, long *Count);
	HRESULT(STDMETHODCALLTYPE * get__NewEnum) (IInkCustomStrokes * This, IUnknown ** _NewEnum);
	HRESULT(STDMETHODCALLTYPE * Item) (IInkCustomStrokes * This, VARIANT Identifier, IInkStrokes ** Strokes);
	HRESULT(STDMETHODCALLTYPE * Add) (IInkCustomStrokes * This, BSTR Name, IInkStrokes * Strokes);
	HRESULT(STDMETHODCALLTYPE * Remove) (IInkCustomStrokes * This, VARIANT Identifier);
	HRESULT(STDMETHODCALLTYPE * Clear) (IInkCustomStrokes * This);
	END_INTERFACE
}  IInkCustomStrokesVtbl;
interface IInkCustomStrokes
{
	CONST_VTBL struct IInkCustomStrokesVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IInkCustomStrokes_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IInkCustomStrokes_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define IInkCustomStrokes_Release(This)( (This)->lpVtbl -> Release(This) )
#define IInkCustomStrokes_GetTypeInfoCount(This,pctinfo)( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define IInkCustomStrokes_GetTypeInfo(This,iTInfo,lcid,ppTInfo)( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define IInkCustomStrokes_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define IInkCustomStrokes_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define IInkCustomStrokes_get_Count(This,Count)( (This)->lpVtbl -> get_Count(This,Count) )
#define IInkCustomStrokes_get__NewEnum(This,_NewEnum)( (This)->lpVtbl -> get__NewEnum(This,_NewEnum) )
#define IInkCustomStrokes_Item(This,Identifier,Strokes)( (This)->lpVtbl -> Item(This,Identifier,Strokes) )
#define IInkCustomStrokes_Add(This,Name,Strokes)( (This)->lpVtbl -> Add(This,Name,Strokes) )
#define IInkCustomStrokes_Remove(This,Identifier)( (This)->lpVtbl -> Remove(This,Identifier) )
#define IInkCustomStrokes_Clear(This)( (This)->lpVtbl -> Clear(This) )
#endif
#endif
#ifndef ___IInkStrokesEvents_DISPINTERFACE_DEFINED__
#define ___IInkStrokesEvents_DISPINTERFACE_DEFINED__
extern const IID DIID__IInkStrokesEvents;
typedef struct _IInkStrokesEventsVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (_IInkStrokesEvents * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (_IInkStrokesEvents * This);
	ULONG(STDMETHODCALLTYPE * Release) (_IInkStrokesEvents * This);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfoCount) (_IInkStrokesEvents * This, UINT * pctinfo);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfo) (_IInkStrokesEvents * This, UINT iTInfo, LCID lcid, ITypeInfo ** ppTInfo);
	HRESULT(STDMETHODCALLTYPE * GetIDsOfNames) (_IInkStrokesEvents * This, REFIID riid, LPOLESTR * rgszNames, UINT cNames, LCID lcid, DISPID * rgDispId);
	HRESULT(STDMETHODCALLTYPE * Invoke) (_IInkStrokesEvents * This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS * pDispParams, VARIANT * pVarResult, EXCEPINFO * pExcepInfo, UINT * puArgErr);
	END_INTERFACE
}  _IInkStrokesEventsVtbl;
interface _IInkStrokesEvents
{
	CONST_VTBL struct _IInkStrokesEventsVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define _IInkStrokesEvents_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define _IInkStrokesEvents_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define _IInkStrokesEvents_Release(This)( (This)->lpVtbl -> Release(This) )
#define _IInkStrokesEvents_GetTypeInfoCount(This,pctinfo)( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define _IInkStrokesEvents_GetTypeInfo(This,iTInfo,lcid,ppTInfo)( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define _IInkStrokesEvents_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define _IInkStrokesEvents_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#endif
#endif
#ifndef __IInkDisp_INTERFACE_DEFINED__
#define __IInkDisp_INTERFACE_DEFINED__
extern const IID IID_IInkDisp;
typedef struct IInkDispVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IInkDisp * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IInkDisp * This);
	ULONG(STDMETHODCALLTYPE * Release) (IInkDisp * This);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfoCount) (IInkDisp * This, UINT * pctinfo);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfo) (IInkDisp * This, UINT iTInfo, LCID lcid, ITypeInfo ** ppTInfo);
	HRESULT(STDMETHODCALLTYPE * GetIDsOfNames) (IInkDisp * This, REFIID riid, LPOLESTR * rgszNames, UINT cNames, LCID lcid, DISPID * rgDispId);
	HRESULT(STDMETHODCALLTYPE * Invoke) (IInkDisp * This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS * pDispParams, VARIANT * pVarResult, EXCEPINFO * pExcepInfo, UINT * puArgErr);
	HRESULT(STDMETHODCALLTYPE * get_Strokes) (IInkDisp * This, IInkStrokes ** Strokes);
	HRESULT(STDMETHODCALLTYPE * get_ExtendedProperties) (IInkDisp * This, IInkExtendedProperties ** Properties);
	HRESULT(STDMETHODCALLTYPE * get_Dirty) (IInkDisp * This, VARIANT_BOOL * Dirty);
	HRESULT(STDMETHODCALLTYPE * put_Dirty) (IInkDisp * This, VARIANT_BOOL Dirty);
	HRESULT(STDMETHODCALLTYPE * get_CustomStrokes) (IInkDisp * This, IInkCustomStrokes ** ppunkInkCustomStrokes);
	HRESULT(STDMETHODCALLTYPE * GetBoundingBox) (IInkDisp * This, InkBoundingBoxMode BoundingBoxMode, IInkRectangle ** Rectangle);
	HRESULT(STDMETHODCALLTYPE * DeleteStrokes) (IInkDisp * This, IInkStrokes * Strokes);
	HRESULT(STDMETHODCALLTYPE * DeleteStroke) (IInkDisp * This, IInkStrokeDisp * Stroke);
	HRESULT(STDMETHODCALLTYPE * ExtractStrokes) (IInkDisp * This, IInkStrokes * Strokes, InkExtractFlags ExtractFlags, IInkDisp ** ExtractedInk);
	HRESULT(STDMETHODCALLTYPE * ExtractWithRectangle) (IInkDisp * This, IInkRectangle * Rectangle, InkExtractFlags extractFlags, IInkDisp ** ExtractedInk);
	HRESULT(STDMETHODCALLTYPE * Clip) (IInkDisp * This, IInkRectangle * Rectangle);
	HRESULT(STDMETHODCALLTYPE * Clone) (IInkDisp * This, IInkDisp ** NewInk);
	HRESULT(STDMETHODCALLTYPE * HitTestCircle) (IInkDisp * This, long X, long Y, float radius, IInkStrokes ** Strokes);
	HRESULT(STDMETHODCALLTYPE * HitTestWithRectangle) (IInkDisp * This, IInkRectangle * SelectionRectangle, float IntersectPercent, IInkStrokes ** Strokes);
	HRESULT(STDMETHODCALLTYPE * HitTestWithLasso) (IInkDisp * This, VARIANT Points, float IntersectPercent, VARIANT * LassoPoints, IInkStrokes ** Strokes);
	HRESULT(STDMETHODCALLTYPE * NearestPoint) (IInkDisp * This, long X, long Y, float *PointOnStroke, float *DistanceFromPacket, IInkStrokeDisp ** Stroke);
	HRESULT(STDMETHODCALLTYPE * CreateStrokes) (IInkDisp * This, VARIANT StrokeIds, IInkStrokes ** Strokes);
	HRESULT(STDMETHODCALLTYPE * AddStrokesAtRectangle) (IInkDisp * This, IInkStrokes * SourceStrokes, IInkRectangle * TargetRectangle);
	HRESULT(STDMETHODCALLTYPE * Save) (IInkDisp * This, InkPersistenceFormat PersistenceFormat, InkPersistenceCompressionMode CompressionMode, VARIANT * Data);
	HRESULT(STDMETHODCALLTYPE * Load) (IInkDisp * This, VARIANT Data);
	HRESULT(STDMETHODCALLTYPE * CreateStroke) (IInkDisp * This, VARIANT PacketData, VARIANT PacketDescription, IInkStrokeDisp ** Stroke);
	HRESULT(STDMETHODCALLTYPE * ClipboardCopyWithRectangle) (IInkDisp * This, IInkRectangle * Rectangle, InkClipboardFormats ClipboardFormats, InkClipboardModes ClipboardModes, IDataObject ** DataObject);
	HRESULT(STDMETHODCALLTYPE * ClipboardCopy) (IInkDisp * This, IInkStrokes * strokes, InkClipboardFormats ClipboardFormats, InkClipboardModes ClipboardModes, IDataObject ** DataObject);
	HRESULT(STDMETHODCALLTYPE * CanPaste) (IInkDisp * This, IDataObject * DataObject, VARIANT_BOOL * CanPaste);
	HRESULT(STDMETHODCALLTYPE * ClipboardPaste) (IInkDisp * This, long x, long y, IDataObject * DataObject, IInkStrokes ** Strokes);
	END_INTERFACE
}  IInkDispVtbl;
interface IInkDisp
{
	CONST_VTBL struct IInkDispVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IInkDisp_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IInkDisp_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define IInkDisp_Release(This)( (This)->lpVtbl -> Release(This) )
#define IInkDisp_GetTypeInfoCount(This,pctinfo)( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define IInkDisp_GetTypeInfo(This,iTInfo,lcid,ppTInfo)( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define IInkDisp_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define IInkDisp_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define IInkDisp_get_Strokes(This,Strokes)( (This)->lpVtbl -> get_Strokes(This,Strokes) )
#define IInkDisp_get_ExtendedProperties(This,Properties)( (This)->lpVtbl -> get_ExtendedProperties(This,Properties) )
#define IInkDisp_get_Dirty(This,Dirty)( (This)->lpVtbl -> get_Dirty(This,Dirty) )
#define IInkDisp_put_Dirty(This,Dirty)( (This)->lpVtbl -> put_Dirty(This,Dirty) )
#define IInkDisp_get_CustomStrokes(This,ppunkInkCustomStrokes)( (This)->lpVtbl -> get_CustomStrokes(This,ppunkInkCustomStrokes) )
#define IInkDisp_GetBoundingBox(This,BoundingBoxMode,Rectangle)( (This)->lpVtbl -> GetBoundingBox(This,BoundingBoxMode,Rectangle) )
#define IInkDisp_DeleteStrokes(This,Strokes)( (This)->lpVtbl -> DeleteStrokes(This,Strokes) )
#define IInkDisp_DeleteStroke(This,Stroke)( (This)->lpVtbl -> DeleteStroke(This,Stroke) )
#define IInkDisp_ExtractStrokes(This,Strokes,ExtractFlags,ExtractedInk)( (This)->lpVtbl -> ExtractStrokes(This,Strokes,ExtractFlags,ExtractedInk) )
#define IInkDisp_ExtractWithRectangle(This,Rectangle,extractFlags,ExtractedInk)( (This)->lpVtbl -> ExtractWithRectangle(This,Rectangle,extractFlags,ExtractedInk) )
#define IInkDisp_Clip(This,Rectangle)( (This)->lpVtbl -> Clip(This,Rectangle) )
#define IInkDisp_Clone(This,NewInk)( (This)->lpVtbl -> Clone(This,NewInk) )
#define IInkDisp_HitTestCircle(This,X,Y,radius,Strokes)( (This)->lpVtbl -> HitTestCircle(This,X,Y,radius,Strokes) )
#define IInkDisp_HitTestWithRectangle(This,SelectionRectangle,IntersectPercent,Strokes)( (This)->lpVtbl -> HitTestWithRectangle(This,SelectionRectangle,IntersectPercent,Strokes) )
#define IInkDisp_HitTestWithLasso(This,Points,IntersectPercent,LassoPoints,Strokes)( (This)->lpVtbl -> HitTestWithLasso(This,Points,IntersectPercent,LassoPoints,Strokes) )
#define IInkDisp_NearestPoint(This,X,Y,PointOnStroke,DistanceFromPacket,Stroke)( (This)->lpVtbl -> NearestPoint(This,X,Y,PointOnStroke,DistanceFromPacket,Stroke) )
#define IInkDisp_CreateStrokes(This,StrokeIds,Strokes)( (This)->lpVtbl -> CreateStrokes(This,StrokeIds,Strokes) )
#define IInkDisp_AddStrokesAtRectangle(This,SourceStrokes,TargetRectangle)( (This)->lpVtbl -> AddStrokesAtRectangle(This,SourceStrokes,TargetRectangle) )
#define IInkDisp_Save(This,PersistenceFormat,CompressionMode,Data)( (This)->lpVtbl -> Save(This,PersistenceFormat,CompressionMode,Data) )
#define IInkDisp_Load(This,Data)( (This)->lpVtbl -> Load(This,Data) )
#define IInkDisp_CreateStroke(This,PacketData,PacketDescription,Stroke)( (This)->lpVtbl -> CreateStroke(This,PacketData,PacketDescription,Stroke) )
#define IInkDisp_ClipboardCopyWithRectangle(This,Rectangle,ClipboardFormats,ClipboardModes,DataObject)( (This)->lpVtbl -> ClipboardCopyWithRectangle(This,Rectangle,ClipboardFormats,ClipboardModes,DataObject) )
#define IInkDisp_ClipboardCopy(This,strokes,ClipboardFormats,ClipboardModes,DataObject)( (This)->lpVtbl -> ClipboardCopy(This,strokes,ClipboardFormats,ClipboardModes,DataObject) )
#define IInkDisp_CanPaste(This,DataObject,CanPaste)( (This)->lpVtbl -> CanPaste(This,DataObject,CanPaste) )
#define IInkDisp_ClipboardPaste(This,x,y,DataObject,Strokes)( (This)->lpVtbl -> ClipboardPaste(This,x,y,DataObject,Strokes) )
#endif
#endif
#ifndef ___IInkEvents_DISPINTERFACE_DEFINED__
#define ___IInkEvents_DISPINTERFACE_DEFINED__
extern const IID DIID__IInkEvents;
typedef struct _IInkEventsVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (_IInkEvents * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (_IInkEvents * This);
	ULONG(STDMETHODCALLTYPE * Release) (_IInkEvents * This);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfoCount) (_IInkEvents * This, UINT * pctinfo);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfo) (_IInkEvents * This, UINT iTInfo, LCID lcid, ITypeInfo ** ppTInfo);
	HRESULT(STDMETHODCALLTYPE * GetIDsOfNames) (_IInkEvents * This, REFIID riid, LPOLESTR * rgszNames, UINT cNames, LCID lcid, DISPID * rgDispId);
	HRESULT(STDMETHODCALLTYPE * Invoke) (_IInkEvents * This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS * pDispParams, VARIANT * pVarResult, EXCEPINFO * pExcepInfo, UINT * puArgErr);
	END_INTERFACE
}  _IInkEventsVtbl;
interface _IInkEvents
{
	CONST_VTBL struct _IInkEventsVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define _IInkEvents_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define _IInkEvents_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define _IInkEvents_Release(This)( (This)->lpVtbl -> Release(This) )
#define _IInkEvents_GetTypeInfoCount(This,pctinfo)( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define _IInkEvents_GetTypeInfo(This,iTInfo,lcid,ppTInfo)( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define _IInkEvents_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define _IInkEvents_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#endif
#endif
#ifndef __IInkRenderer_INTERFACE_DEFINED__
#define __IInkRenderer_INTERFACE_DEFINED__
extern const IID IID_IInkRenderer;
typedef struct IInkRendererVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IInkRenderer * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IInkRenderer * This);
	ULONG(STDMETHODCALLTYPE * Release) (IInkRenderer * This);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfoCount) (IInkRenderer * This, UINT * pctinfo);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfo) (IInkRenderer * This, UINT iTInfo, LCID lcid, ITypeInfo ** ppTInfo);
	HRESULT(STDMETHODCALLTYPE * GetIDsOfNames) (IInkRenderer * This, REFIID riid, LPOLESTR * rgszNames, UINT cNames, LCID lcid, DISPID * rgDispId);
	HRESULT(STDMETHODCALLTYPE * Invoke) (IInkRenderer * This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS * pDispParams, VARIANT * pVarResult, EXCEPINFO * pExcepInfo, UINT * puArgErr);
	HRESULT(STDMETHODCALLTYPE * GetViewTransform) (IInkRenderer * This, IInkTransform * ViewTransform);
	HRESULT(STDMETHODCALLTYPE * SetViewTransform) (IInkRenderer * This, IInkTransform * ViewTransform);
	HRESULT(STDMETHODCALLTYPE * GetObjectTransform) (IInkRenderer * This, IInkTransform * ObjectTransform);
	HRESULT(STDMETHODCALLTYPE * SetObjectTransform) (IInkRenderer * This, IInkTransform * ObjectTransform);
	HRESULT(STDMETHODCALLTYPE * Draw) (IInkRenderer * This, LONG_PTR hDC, IInkStrokes * Strokes);
	HRESULT(STDMETHODCALLTYPE * DrawStroke) (IInkRenderer * This, LONG_PTR hDC, IInkStrokeDisp * Stroke, IInkDrawingAttributes * DrawingAttributes);
	HRESULT(STDMETHODCALLTYPE * PixelToInkSpace) (IInkRenderer * This, LONG_PTR hDC, long *x, long *y);
	HRESULT(STDMETHODCALLTYPE * InkSpaceToPixel) (IInkRenderer * This, LONG_PTR hdcDisplay, long *x, long *y);
	HRESULT(STDMETHODCALLTYPE * PixelToInkSpaceFromPoints) (IInkRenderer * This, LONG_PTR hDC, VARIANT * Points);
	HRESULT(STDMETHODCALLTYPE * InkSpaceToPixelFromPoints) (IInkRenderer * This, LONG_PTR hDC, VARIANT * Points);
	HRESULT(STDMETHODCALLTYPE * Measure) (IInkRenderer * This, IInkStrokes * Strokes, IInkRectangle ** Rectangle);
	HRESULT(STDMETHODCALLTYPE * MeasureStroke) (IInkRenderer * This, IInkStrokeDisp * Stroke, IInkDrawingAttributes * DrawingAttributes, IInkRectangle ** Rectangle);
	HRESULT(STDMETHODCALLTYPE * Move) (IInkRenderer * This, float HorizontalComponent, float VerticalComponent);
	HRESULT(STDMETHODCALLTYPE * Rotate) (IInkRenderer * This, float Degrees, float x, float y);
	HRESULT(STDMETHODCALLTYPE * ScaleTransform) (IInkRenderer * This, float HorizontalMultiplier, float VerticalMultiplier, VARIANT_BOOL ApplyOnPenWidth);
	END_INTERFACE
}  IInkRendererVtbl;
interface IInkRenderer
{
	CONST_VTBL struct IInkRendererVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IInkRenderer_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IInkRenderer_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define IInkRenderer_Release(This)( (This)->lpVtbl -> Release(This) )
#define IInkRenderer_GetTypeInfoCount(This,pctinfo)( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define IInkRenderer_GetTypeInfo(This,iTInfo,lcid,ppTInfo)( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define IInkRenderer_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define IInkRenderer_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define IInkRenderer_GetViewTransform(This,ViewTransform)( (This)->lpVtbl -> GetViewTransform(This,ViewTransform) )
#define IInkRenderer_SetViewTransform(This,ViewTransform)( (This)->lpVtbl -> SetViewTransform(This,ViewTransform) )
#define IInkRenderer_GetObjectTransform(This,ObjectTransform)( (This)->lpVtbl -> GetObjectTransform(This,ObjectTransform) )
#define IInkRenderer_SetObjectTransform(This,ObjectTransform)( (This)->lpVtbl -> SetObjectTransform(This,ObjectTransform) )
#define IInkRenderer_Draw(This,hDC,Strokes)( (This)->lpVtbl -> Draw(This,hDC,Strokes) )
#define IInkRenderer_DrawStroke(This,hDC,Stroke,DrawingAttributes)( (This)->lpVtbl -> DrawStroke(This,hDC,Stroke,DrawingAttributes) )
#define IInkRenderer_PixelToInkSpace(This,hDC,x,y)( (This)->lpVtbl -> PixelToInkSpace(This,hDC,x,y) )
#define IInkRenderer_InkSpaceToPixel(This,hdcDisplay,x,y)( (This)->lpVtbl -> InkSpaceToPixel(This,hdcDisplay,x,y) )
#define IInkRenderer_PixelToInkSpaceFromPoints(This,hDC,Points)( (This)->lpVtbl -> PixelToInkSpaceFromPoints(This,hDC,Points) )
#define IInkRenderer_InkSpaceToPixelFromPoints(This,hDC,Points)( (This)->lpVtbl -> InkSpaceToPixelFromPoints(This,hDC,Points) )
#define IInkRenderer_Measure(This,Strokes,Rectangle)( (This)->lpVtbl -> Measure(This,Strokes,Rectangle) )
#define IInkRenderer_MeasureStroke(This,Stroke,DrawingAttributes,Rectangle)( (This)->lpVtbl -> MeasureStroke(This,Stroke,DrawingAttributes,Rectangle) )
#define IInkRenderer_Move(This,HorizontalComponent,VerticalComponent)( (This)->lpVtbl -> Move(This,HorizontalComponent,VerticalComponent) )
#define IInkRenderer_Rotate(This,Degrees,x,y)( (This)->lpVtbl -> Rotate(This,Degrees,x,y) )
#define IInkRenderer_ScaleTransform(This,HorizontalMultiplier,VerticalMultiplier,ApplyOnPenWidth)( (This)->lpVtbl -> ScaleTransform(This,HorizontalMultiplier,VerticalMultiplier,ApplyOnPenWidth) )
#endif
#endif
#ifndef __IInkCollector_INTERFACE_DEFINED__
#define __IInkCollector_INTERFACE_DEFINED__
extern const IID IID_IInkCollector;
typedef struct IInkCollectorVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IInkCollector * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IInkCollector * This);
	ULONG(STDMETHODCALLTYPE * Release) (IInkCollector * This);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfoCount) (IInkCollector * This, UINT * pctinfo);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfo) (IInkCollector * This, UINT iTInfo, LCID lcid, ITypeInfo ** ppTInfo);
	HRESULT(STDMETHODCALLTYPE * GetIDsOfNames) (IInkCollector * This, REFIID riid, LPOLESTR * rgszNames, UINT cNames, LCID lcid, DISPID * rgDispId);
	HRESULT(STDMETHODCALLTYPE * Invoke) (IInkCollector * This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS * pDispParams, VARIANT * pVarResult, EXCEPINFO * pExcepInfo, UINT * puArgErr);
	HRESULT(STDMETHODCALLTYPE * get_hWnd) (IInkCollector * This, LONG_PTR * CurrentWindow);
	HRESULT(STDMETHODCALLTYPE * put_hWnd) (IInkCollector * This, LONG_PTR NewWindow);
	HRESULT(STDMETHODCALLTYPE * get_Enabled) (IInkCollector * This, VARIANT_BOOL * Collecting);
	HRESULT(STDMETHODCALLTYPE * put_Enabled) (IInkCollector * This, VARIANT_BOOL Collecting);
	HRESULT(STDMETHODCALLTYPE * get_DefaultDrawingAttributes) (IInkCollector * This, IInkDrawingAttributes ** CurrentAttributes);
	HRESULT(STDMETHODCALLTYPE * putref_DefaultDrawingAttributes) (IInkCollector * This, IInkDrawingAttributes * NewAttributes);
	HRESULT(STDMETHODCALLTYPE * get_Renderer) (IInkCollector * This, IInkRenderer ** CurrentInkRenderer);
	HRESULT(STDMETHODCALLTYPE * putref_Renderer) (IInkCollector * This, IInkRenderer * NewInkRenderer);
	HRESULT(STDMETHODCALLTYPE * get_Ink) (IInkCollector * This, IInkDisp ** Ink);
	HRESULT(STDMETHODCALLTYPE * putref_Ink) (IInkCollector * This, IInkDisp * NewInk);
	HRESULT(STDMETHODCALLTYPE * get_AutoRedraw) (IInkCollector * This, VARIANT_BOOL * AutoRedraw);
	HRESULT(STDMETHODCALLTYPE * put_AutoRedraw) (IInkCollector * This, VARIANT_BOOL AutoRedraw);
	HRESULT(STDMETHODCALLTYPE * get_CollectingInk) (IInkCollector * This, VARIANT_BOOL * Collecting);
	HRESULT(STDMETHODCALLTYPE * get_CollectionMode) (IInkCollector * This, InkCollectionMode * Mode);
	HRESULT(STDMETHODCALLTYPE * put_CollectionMode) (IInkCollector * This, InkCollectionMode Mode);
	HRESULT(STDMETHODCALLTYPE * get_DynamicRendering) (IInkCollector * This, VARIANT_BOOL * Enabled);
	HRESULT(STDMETHODCALLTYPE * put_DynamicRendering) (IInkCollector * This, VARIANT_BOOL Enabled);
	HRESULT(STDMETHODCALLTYPE * get_DesiredPacketDescription) (IInkCollector * This, VARIANT * PacketGuids);
	HRESULT(STDMETHODCALLTYPE * put_DesiredPacketDescription) (IInkCollector * This, VARIANT PacketGuids);
	HRESULT(STDMETHODCALLTYPE * get_MouseIcon) (IInkCollector * This, IPictureDisp ** MouseIcon);
	HRESULT(STDMETHODCALLTYPE * put_MouseIcon) (IInkCollector * This, IPictureDisp * MouseIcon);
	HRESULT(STDMETHODCALLTYPE * putref_MouseIcon) (IInkCollector * This, IPictureDisp * MouseIcon);
	HRESULT(STDMETHODCALLTYPE * get_MousePointer) (IInkCollector * This, InkMousePointer * MousePointer);
	HRESULT(STDMETHODCALLTYPE * put_MousePointer) (IInkCollector * This, InkMousePointer MousePointer);
	HRESULT(STDMETHODCALLTYPE * get_Cursors) (IInkCollector * This, IInkCursors ** Cursors);
	HRESULT(STDMETHODCALLTYPE * get_MarginX) (IInkCollector * This, long *MarginX);
	HRESULT(STDMETHODCALLTYPE * put_MarginX) (IInkCollector * This, long MarginX);
	HRESULT(STDMETHODCALLTYPE * get_MarginY) (IInkCollector * This, long *MarginY);
	HRESULT(STDMETHODCALLTYPE * put_MarginY) (IInkCollector * This, long MarginY);
	HRESULT(STDMETHODCALLTYPE * get_Tablet) (IInkCollector * This, IInkTablet ** SingleTablet);
	HRESULT(STDMETHODCALLTYPE * get_SupportHighContrastInk) (IInkCollector * This, VARIANT_BOOL * Support);
	HRESULT(STDMETHODCALLTYPE * put_SupportHighContrastInk) (IInkCollector * This, VARIANT_BOOL Support);
	HRESULT(STDMETHODCALLTYPE * SetGestureStatus) (IInkCollector * This, InkApplicationGesture Gesture, VARIANT_BOOL Listen);
	HRESULT(STDMETHODCALLTYPE * GetGestureStatus) (IInkCollector * This, InkApplicationGesture Gesture, VARIANT_BOOL * Listening);
	HRESULT(STDMETHODCALLTYPE * GetWindowInputRectangle) (IInkCollector * This, IInkRectangle ** WindowInputRectangle);
	HRESULT(STDMETHODCALLTYPE * SetWindowInputRectangle) (IInkCollector * This, IInkRectangle * WindowInputRectangle);
	HRESULT(STDMETHODCALLTYPE * SetAllTabletsMode) (IInkCollector * This, VARIANT_BOOL UseMouseForInput);
	HRESULT(STDMETHODCALLTYPE * SetSingleTabletIntegratedMode) (IInkCollector * This, IInkTablet * Tablet);
	HRESULT(STDMETHODCALLTYPE * GetEventInterest) (IInkCollector * This, InkCollectorEventInterest EventId, VARIANT_BOOL * Listen);
	HRESULT(STDMETHODCALLTYPE * SetEventInterest) (IInkCollector * This, InkCollectorEventInterest EventId, VARIANT_BOOL Listen);
	END_INTERFACE
}  IInkCollectorVtbl;
interface IInkCollector
{
	CONST_VTBL struct IInkCollectorVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IInkCollector_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IInkCollector_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define IInkCollector_Release(This)( (This)->lpVtbl -> Release(This) )
#define IInkCollector_GetTypeInfoCount(This,pctinfo)( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define IInkCollector_GetTypeInfo(This,iTInfo,lcid,ppTInfo)( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define IInkCollector_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define IInkCollector_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define IInkCollector_get_hWnd(This,CurrentWindow)( (This)->lpVtbl -> get_hWnd(This,CurrentWindow) )
#define IInkCollector_put_hWnd(This,NewWindow)( (This)->lpVtbl -> put_hWnd(This,NewWindow) )
#define IInkCollector_get_Enabled(This,Collecting)( (This)->lpVtbl -> get_Enabled(This,Collecting) )
#define IInkCollector_put_Enabled(This,Collecting)( (This)->lpVtbl -> put_Enabled(This,Collecting) )
#define IInkCollector_get_DefaultDrawingAttributes(This,CurrentAttributes)( (This)->lpVtbl -> get_DefaultDrawingAttributes(This,CurrentAttributes) )
#define IInkCollector_putref_DefaultDrawingAttributes(This,NewAttributes)( (This)->lpVtbl -> putref_DefaultDrawingAttributes(This,NewAttributes) )
#define IInkCollector_get_Renderer(This,CurrentInkRenderer)( (This)->lpVtbl -> get_Renderer(This,CurrentInkRenderer) )
#define IInkCollector_putref_Renderer(This,NewInkRenderer)( (This)->lpVtbl -> putref_Renderer(This,NewInkRenderer) )
#define IInkCollector_get_Ink(This,Ink)( (This)->lpVtbl -> get_Ink(This,Ink) )
#define IInkCollector_putref_Ink(This,NewInk)( (This)->lpVtbl -> putref_Ink(This,NewInk) )
#define IInkCollector_get_AutoRedraw(This,AutoRedraw)( (This)->lpVtbl -> get_AutoRedraw(This,AutoRedraw) )
#define IInkCollector_put_AutoRedraw(This,AutoRedraw)( (This)->lpVtbl -> put_AutoRedraw(This,AutoRedraw) )
#define IInkCollector_get_CollectingInk(This,Collecting)( (This)->lpVtbl -> get_CollectingInk(This,Collecting) )
#define IInkCollector_get_CollectionMode(This,Mode)( (This)->lpVtbl -> get_CollectionMode(This,Mode) )
#define IInkCollector_put_CollectionMode(This,Mode)( (This)->lpVtbl -> put_CollectionMode(This,Mode) )
#define IInkCollector_get_DynamicRendering(This,Enabled)( (This)->lpVtbl -> get_DynamicRendering(This,Enabled) )
#define IInkCollector_put_DynamicRendering(This,Enabled)( (This)->lpVtbl -> put_DynamicRendering(This,Enabled) )
#define IInkCollector_get_DesiredPacketDescription(This,PacketGuids)( (This)->lpVtbl -> get_DesiredPacketDescription(This,PacketGuids) )
#define IInkCollector_put_DesiredPacketDescription(This,PacketGuids)( (This)->lpVtbl -> put_DesiredPacketDescription(This,PacketGuids) )
#define IInkCollector_get_MouseIcon(This,MouseIcon)( (This)->lpVtbl -> get_MouseIcon(This,MouseIcon) )
#define IInkCollector_put_MouseIcon(This,MouseIcon)( (This)->lpVtbl -> put_MouseIcon(This,MouseIcon) )
#define IInkCollector_putref_MouseIcon(This,MouseIcon)( (This)->lpVtbl -> putref_MouseIcon(This,MouseIcon) )
#define IInkCollector_get_MousePointer(This,MousePointer)( (This)->lpVtbl -> get_MousePointer(This,MousePointer) )
#define IInkCollector_put_MousePointer(This,MousePointer)( (This)->lpVtbl -> put_MousePointer(This,MousePointer) )
#define IInkCollector_get_Cursors(This,Cursors)( (This)->lpVtbl -> get_Cursors(This,Cursors) )
#define IInkCollector_get_MarginX(This,MarginX)( (This)->lpVtbl -> get_MarginX(This,MarginX) )
#define IInkCollector_put_MarginX(This,MarginX)( (This)->lpVtbl -> put_MarginX(This,MarginX) )
#define IInkCollector_get_MarginY(This,MarginY)( (This)->lpVtbl -> get_MarginY(This,MarginY) )
#define IInkCollector_put_MarginY(This,MarginY)( (This)->lpVtbl -> put_MarginY(This,MarginY) )
#define IInkCollector_get_Tablet(This,SingleTablet)( (This)->lpVtbl -> get_Tablet(This,SingleTablet) )
#define IInkCollector_get_SupportHighContrastInk(This,Support)( (This)->lpVtbl -> get_SupportHighContrastInk(This,Support) )
#define IInkCollector_put_SupportHighContrastInk(This,Support)( (This)->lpVtbl -> put_SupportHighContrastInk(This,Support) )
#define IInkCollector_SetGestureStatus(This,Gesture,Listen)( (This)->lpVtbl -> SetGestureStatus(This,Gesture,Listen) )
#define IInkCollector_GetGestureStatus(This,Gesture,Listening)( (This)->lpVtbl -> GetGestureStatus(This,Gesture,Listening) )
#define IInkCollector_GetWindowInputRectangle(This,WindowInputRectangle)( (This)->lpVtbl -> GetWindowInputRectangle(This,WindowInputRectangle) )
#define IInkCollector_SetWindowInputRectangle(This,WindowInputRectangle)( (This)->lpVtbl -> SetWindowInputRectangle(This,WindowInputRectangle) )
#define IInkCollector_SetAllTabletsMode(This,UseMouseForInput)( (This)->lpVtbl -> SetAllTabletsMode(This,UseMouseForInput) )
#define IInkCollector_SetSingleTabletIntegratedMode(This,Tablet)( (This)->lpVtbl -> SetSingleTabletIntegratedMode(This,Tablet) )
#define IInkCollector_GetEventInterest(This,EventId,Listen)( (This)->lpVtbl -> GetEventInterest(This,EventId,Listen) )
#define IInkCollector_SetEventInterest(This,EventId,Listen)( (This)->lpVtbl -> SetEventInterest(This,EventId,Listen) )
#endif
#endif
#ifndef ___IInkCollectorEvents_DISPINTERFACE_DEFINED__
#define ___IInkCollectorEvents_DISPINTERFACE_DEFINED__
extern const IID DIID__IInkCollectorEvents;
typedef struct _IInkCollectorEventsVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (_IInkCollectorEvents * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (_IInkCollectorEvents * This);
	ULONG(STDMETHODCALLTYPE * Release) (_IInkCollectorEvents * This);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfoCount) (_IInkCollectorEvents * This, UINT * pctinfo);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfo) (_IInkCollectorEvents * This, UINT iTInfo, LCID lcid, ITypeInfo ** ppTInfo);
	HRESULT(STDMETHODCALLTYPE * GetIDsOfNames) (_IInkCollectorEvents * This, REFIID riid, LPOLESTR * rgszNames, UINT cNames, LCID lcid, DISPID * rgDispId);
	HRESULT(STDMETHODCALLTYPE * Invoke) (_IInkCollectorEvents * This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS * pDispParams, VARIANT * pVarResult, EXCEPINFO * pExcepInfo, UINT * puArgErr);
	END_INTERFACE
}  _IInkCollectorEventsVtbl;
interface _IInkCollectorEvents
{
	CONST_VTBL struct _IInkCollectorEventsVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define _IInkCollectorEvents_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define _IInkCollectorEvents_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define _IInkCollectorEvents_Release(This)( (This)->lpVtbl -> Release(This) )
#define _IInkCollectorEvents_GetTypeInfoCount(This,pctinfo)( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define _IInkCollectorEvents_GetTypeInfo(This,iTInfo,lcid,ppTInfo)( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define _IInkCollectorEvents_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define _IInkCollectorEvents_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#endif
#endif
#ifndef __IInkOverlay_INTERFACE_DEFINED__
#define __IInkOverlay_INTERFACE_DEFINED__
extern const IID IID_IInkOverlay;
typedef struct IInkOverlayVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IInkOverlay * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IInkOverlay * This);
	ULONG(STDMETHODCALLTYPE * Release) (IInkOverlay * This);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfoCount) (IInkOverlay * This, UINT * pctinfo);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfo) (IInkOverlay * This, UINT iTInfo, LCID lcid, ITypeInfo ** ppTInfo);
	HRESULT(STDMETHODCALLTYPE * GetIDsOfNames) (IInkOverlay * This, REFIID riid, LPOLESTR * rgszNames, UINT cNames, LCID lcid, DISPID * rgDispId);
	HRESULT(STDMETHODCALLTYPE * Invoke) (IInkOverlay * This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS * pDispParams, VARIANT * pVarResult, EXCEPINFO * pExcepInfo, UINT * puArgErr);
	HRESULT(STDMETHODCALLTYPE * get_hWnd) (IInkOverlay * This, LONG_PTR * CurrentWindow);
	HRESULT(STDMETHODCALLTYPE * put_hWnd) (IInkOverlay * This, LONG_PTR NewWindow);
	HRESULT(STDMETHODCALLTYPE * get_Enabled) (IInkOverlay * This, VARIANT_BOOL * Collecting);
	HRESULT(STDMETHODCALLTYPE * put_Enabled) (IInkOverlay * This, VARIANT_BOOL Collecting);
	HRESULT(STDMETHODCALLTYPE * get_DefaultDrawingAttributes) (IInkOverlay * This, IInkDrawingAttributes ** CurrentAttributes);
	HRESULT(STDMETHODCALLTYPE * putref_DefaultDrawingAttributes) (IInkOverlay * This, IInkDrawingAttributes * NewAttributes);
	HRESULT(STDMETHODCALLTYPE * get_Renderer) (IInkOverlay * This, IInkRenderer ** CurrentInkRenderer);
	HRESULT(STDMETHODCALLTYPE * putref_Renderer) (IInkOverlay * This, IInkRenderer * NewInkRenderer);
	HRESULT(STDMETHODCALLTYPE * get_Ink) (IInkOverlay * This, IInkDisp ** Ink);
	HRESULT(STDMETHODCALLTYPE * putref_Ink) (IInkOverlay * This, IInkDisp * NewInk);
	HRESULT(STDMETHODCALLTYPE * get_AutoRedraw) (IInkOverlay * This, VARIANT_BOOL * AutoRedraw);
	HRESULT(STDMETHODCALLTYPE * put_AutoRedraw) (IInkOverlay * This, VARIANT_BOOL AutoRedraw);
	HRESULT(STDMETHODCALLTYPE * get_CollectingInk) (IInkOverlay * This, VARIANT_BOOL * Collecting);
	HRESULT(STDMETHODCALLTYPE * get_CollectionMode) (IInkOverlay * This, InkCollectionMode * Mode);
	HRESULT(STDMETHODCALLTYPE * put_CollectionMode) (IInkOverlay * This, InkCollectionMode Mode);
	HRESULT(STDMETHODCALLTYPE * get_DynamicRendering) (IInkOverlay * This, VARIANT_BOOL * Enabled);
	HRESULT(STDMETHODCALLTYPE * put_DynamicRendering) (IInkOverlay * This, VARIANT_BOOL Enabled);
	HRESULT(STDMETHODCALLTYPE * get_DesiredPacketDescription) (IInkOverlay * This, VARIANT * PacketGuids);
	HRESULT(STDMETHODCALLTYPE * put_DesiredPacketDescription) (IInkOverlay * This, VARIANT PacketGuids);
	HRESULT(STDMETHODCALLTYPE * get_MouseIcon) (IInkOverlay * This, IPictureDisp ** MouseIcon);
	HRESULT(STDMETHODCALLTYPE * put_MouseIcon) (IInkOverlay * This, IPictureDisp * MouseIcon);
	HRESULT(STDMETHODCALLTYPE * putref_MouseIcon) (IInkOverlay * This, IPictureDisp * MouseIcon);
	HRESULT(STDMETHODCALLTYPE * get_MousePointer) (IInkOverlay * This, InkMousePointer * MousePointer);
	HRESULT(STDMETHODCALLTYPE * put_MousePointer) (IInkOverlay * This, InkMousePointer MousePointer);
	HRESULT(STDMETHODCALLTYPE * get_EditingMode) (IInkOverlay * This, InkOverlayEditingMode * EditingMode);
	HRESULT(STDMETHODCALLTYPE * put_EditingMode) (IInkOverlay * This, InkOverlayEditingMode EditingMode);
	HRESULT(STDMETHODCALLTYPE * get_Selection) (IInkOverlay * This, IInkStrokes ** Selection);
	HRESULT(STDMETHODCALLTYPE * put_Selection) (IInkOverlay * This, IInkStrokes * Selection);
	HRESULT(STDMETHODCALLTYPE * get_EraserMode) (IInkOverlay * This, InkOverlayEraserMode * EraserMode);
	HRESULT(STDMETHODCALLTYPE * put_EraserMode) (IInkOverlay * This, InkOverlayEraserMode EraserMode);
	HRESULT(STDMETHODCALLTYPE * get_EraserWidth) (IInkOverlay * This, long *EraserWidth);
	HRESULT(STDMETHODCALLTYPE * put_EraserWidth) (IInkOverlay * This, long newEraserWidth);
	HRESULT(STDMETHODCALLTYPE * get_AttachMode) (IInkOverlay * This, InkOverlayAttachMode * AttachMode);
	HRESULT(STDMETHODCALLTYPE * put_AttachMode) (IInkOverlay * This, InkOverlayAttachMode AttachMode);
	HRESULT(STDMETHODCALLTYPE * get_Cursors) (IInkOverlay * This, IInkCursors ** Cursors);
	HRESULT(STDMETHODCALLTYPE * get_MarginX) (IInkOverlay * This, long *MarginX);
	HRESULT(STDMETHODCALLTYPE * put_MarginX) (IInkOverlay * This, long MarginX);
	HRESULT(STDMETHODCALLTYPE * get_MarginY) (IInkOverlay * This, long *MarginY);
	HRESULT(STDMETHODCALLTYPE * put_MarginY) (IInkOverlay * This, long MarginY);
	HRESULT(STDMETHODCALLTYPE * get_Tablet) (IInkOverlay * This, IInkTablet ** SingleTablet);
	HRESULT(STDMETHODCALLTYPE * get_SupportHighContrastInk) (IInkOverlay * This, VARIANT_BOOL * Support);
	HRESULT(STDMETHODCALLTYPE * put_SupportHighContrastInk) (IInkOverlay * This, VARIANT_BOOL Support);
	HRESULT(STDMETHODCALLTYPE * get_SupportHighContrastSelectionUI) (IInkOverlay * This, VARIANT_BOOL * Support);
	HRESULT(STDMETHODCALLTYPE * put_SupportHighContrastSelectionUI) (IInkOverlay * This, VARIANT_BOOL Support);
	HRESULT(STDMETHODCALLTYPE * HitTestSelection) (IInkOverlay * This, long x, long y, SelectionHitResult * SelArea);
	HRESULT(STDMETHODCALLTYPE * Draw) (IInkOverlay * This, IInkRectangle * Rect);
	HRESULT(STDMETHODCALLTYPE * SetGestureStatus) (IInkOverlay * This, InkApplicationGesture Gesture, VARIANT_BOOL Listen);
	HRESULT(STDMETHODCALLTYPE * GetGestureStatus) (IInkOverlay * This, InkApplicationGesture Gesture, VARIANT_BOOL * Listening);
	HRESULT(STDMETHODCALLTYPE * GetWindowInputRectangle) (IInkOverlay * This, IInkRectangle ** WindowInputRectangle);
	HRESULT(STDMETHODCALLTYPE * SetWindowInputRectangle) (IInkOverlay * This, IInkRectangle * WindowInputRectangle);
	HRESULT(STDMETHODCALLTYPE * SetAllTabletsMode) (IInkOverlay * This, VARIANT_BOOL UseMouseForInput);
	HRESULT(STDMETHODCALLTYPE * SetSingleTabletIntegratedMode) (IInkOverlay * This, IInkTablet * Tablet);
	HRESULT(STDMETHODCALLTYPE * GetEventInterest) (IInkOverlay * This, InkCollectorEventInterest EventId, VARIANT_BOOL * Listen);
	HRESULT(STDMETHODCALLTYPE * SetEventInterest) (IInkOverlay * This, InkCollectorEventInterest EventId, VARIANT_BOOL Listen);
	END_INTERFACE
}  IInkOverlayVtbl;
interface IInkOverlay
{
	CONST_VTBL struct IInkOverlayVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IInkOverlay_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IInkOverlay_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define IInkOverlay_Release(This)( (This)->lpVtbl -> Release(This) )
#define IInkOverlay_GetTypeInfoCount(This,pctinfo)( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define IInkOverlay_GetTypeInfo(This,iTInfo,lcid,ppTInfo)( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define IInkOverlay_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define IInkOverlay_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define IInkOverlay_get_hWnd(This,CurrentWindow)( (This)->lpVtbl -> get_hWnd(This,CurrentWindow) )
#define IInkOverlay_put_hWnd(This,NewWindow)( (This)->lpVtbl -> put_hWnd(This,NewWindow) )
#define IInkOverlay_get_Enabled(This,Collecting)( (This)->lpVtbl -> get_Enabled(This,Collecting) )
#define IInkOverlay_put_Enabled(This,Collecting)( (This)->lpVtbl -> put_Enabled(This,Collecting) )
#define IInkOverlay_get_DefaultDrawingAttributes(This,CurrentAttributes)( (This)->lpVtbl -> get_DefaultDrawingAttributes(This,CurrentAttributes) )
#define IInkOverlay_putref_DefaultDrawingAttributes(This,NewAttributes)( (This)->lpVtbl -> putref_DefaultDrawingAttributes(This,NewAttributes) )
#define IInkOverlay_get_Renderer(This,CurrentInkRenderer)( (This)->lpVtbl -> get_Renderer(This,CurrentInkRenderer) )
#define IInkOverlay_putref_Renderer(This,NewInkRenderer)( (This)->lpVtbl -> putref_Renderer(This,NewInkRenderer) )
#define IInkOverlay_get_Ink(This,Ink)( (This)->lpVtbl -> get_Ink(This,Ink) )
#define IInkOverlay_putref_Ink(This,NewInk)( (This)->lpVtbl -> putref_Ink(This,NewInk) )
#define IInkOverlay_get_AutoRedraw(This,AutoRedraw)( (This)->lpVtbl -> get_AutoRedraw(This,AutoRedraw) )
#define IInkOverlay_put_AutoRedraw(This,AutoRedraw)( (This)->lpVtbl -> put_AutoRedraw(This,AutoRedraw) )
#define IInkOverlay_get_CollectingInk(This,Collecting)( (This)->lpVtbl -> get_CollectingInk(This,Collecting) )
#define IInkOverlay_get_CollectionMode(This,Mode)( (This)->lpVtbl -> get_CollectionMode(This,Mode) )
#define IInkOverlay_put_CollectionMode(This,Mode)( (This)->lpVtbl -> put_CollectionMode(This,Mode) )
#define IInkOverlay_get_DynamicRendering(This,Enabled)( (This)->lpVtbl -> get_DynamicRendering(This,Enabled) )
#define IInkOverlay_put_DynamicRendering(This,Enabled)( (This)->lpVtbl -> put_DynamicRendering(This,Enabled) )
#define IInkOverlay_get_DesiredPacketDescription(This,PacketGuids)( (This)->lpVtbl -> get_DesiredPacketDescription(This,PacketGuids) )
#define IInkOverlay_put_DesiredPacketDescription(This,PacketGuids)( (This)->lpVtbl -> put_DesiredPacketDescription(This,PacketGuids) )
#define IInkOverlay_get_MouseIcon(This,MouseIcon)( (This)->lpVtbl -> get_MouseIcon(This,MouseIcon) )
#define IInkOverlay_put_MouseIcon(This,MouseIcon)( (This)->lpVtbl -> put_MouseIcon(This,MouseIcon) )
#define IInkOverlay_putref_MouseIcon(This,MouseIcon)( (This)->lpVtbl -> putref_MouseIcon(This,MouseIcon) )
#define IInkOverlay_get_MousePointer(This,MousePointer)( (This)->lpVtbl -> get_MousePointer(This,MousePointer) )
#define IInkOverlay_put_MousePointer(This,MousePointer)( (This)->lpVtbl -> put_MousePointer(This,MousePointer) )
#define IInkOverlay_get_EditingMode(This,EditingMode)( (This)->lpVtbl -> get_EditingMode(This,EditingMode) )
#define IInkOverlay_put_EditingMode(This,EditingMode)( (This)->lpVtbl -> put_EditingMode(This,EditingMode) )
#define IInkOverlay_get_Selection(This,Selection)( (This)->lpVtbl -> get_Selection(This,Selection) )
#define IInkOverlay_put_Selection(This,Selection)( (This)->lpVtbl -> put_Selection(This,Selection) )
#define IInkOverlay_get_EraserMode(This,EraserMode)( (This)->lpVtbl -> get_EraserMode(This,EraserMode) )
#define IInkOverlay_put_EraserMode(This,EraserMode)( (This)->lpVtbl -> put_EraserMode(This,EraserMode) )
#define IInkOverlay_get_EraserWidth(This,EraserWidth)( (This)->lpVtbl -> get_EraserWidth(This,EraserWidth) )
#define IInkOverlay_put_EraserWidth(This,newEraserWidth)( (This)->lpVtbl -> put_EraserWidth(This,newEraserWidth) )
#define IInkOverlay_get_AttachMode(This,AttachMode)( (This)->lpVtbl -> get_AttachMode(This,AttachMode) )
#define IInkOverlay_put_AttachMode(This,AttachMode)( (This)->lpVtbl -> put_AttachMode(This,AttachMode) )
#define IInkOverlay_get_Cursors(This,Cursors)( (This)->lpVtbl -> get_Cursors(This,Cursors) )
#define IInkOverlay_get_MarginX(This,MarginX)( (This)->lpVtbl -> get_MarginX(This,MarginX) )
#define IInkOverlay_put_MarginX(This,MarginX)( (This)->lpVtbl -> put_MarginX(This,MarginX) )
#define IInkOverlay_get_MarginY(This,MarginY)( (This)->lpVtbl -> get_MarginY(This,MarginY) )
#define IInkOverlay_put_MarginY(This,MarginY)( (This)->lpVtbl -> put_MarginY(This,MarginY) )
#define IInkOverlay_get_Tablet(This,SingleTablet)( (This)->lpVtbl -> get_Tablet(This,SingleTablet) )
#define IInkOverlay_get_SupportHighContrastInk(This,Support)( (This)->lpVtbl -> get_SupportHighContrastInk(This,Support) )
#define IInkOverlay_put_SupportHighContrastInk(This,Support)( (This)->lpVtbl -> put_SupportHighContrastInk(This,Support) )
#define IInkOverlay_get_SupportHighContrastSelectionUI(This,Support)( (This)->lpVtbl -> get_SupportHighContrastSelectionUI(This,Support) )
#define IInkOverlay_put_SupportHighContrastSelectionUI(This,Support)( (This)->lpVtbl -> put_SupportHighContrastSelectionUI(This,Support) )
#define IInkOverlay_HitTestSelection(This,x,y,SelArea)( (This)->lpVtbl -> HitTestSelection(This,x,y,SelArea) )
#define IInkOverlay_Draw(This,Rect)( (This)->lpVtbl -> Draw(This,Rect) )
#define IInkOverlay_SetGestureStatus(This,Gesture,Listen)( (This)->lpVtbl -> SetGestureStatus(This,Gesture,Listen) )
#define IInkOverlay_GetGestureStatus(This,Gesture,Listening)( (This)->lpVtbl -> GetGestureStatus(This,Gesture,Listening) )
#define IInkOverlay_GetWindowInputRectangle(This,WindowInputRectangle)( (This)->lpVtbl -> GetWindowInputRectangle(This,WindowInputRectangle) )
#define IInkOverlay_SetWindowInputRectangle(This,WindowInputRectangle)( (This)->lpVtbl -> SetWindowInputRectangle(This,WindowInputRectangle) )
#define IInkOverlay_SetAllTabletsMode(This,UseMouseForInput)( (This)->lpVtbl -> SetAllTabletsMode(This,UseMouseForInput) )
#define IInkOverlay_SetSingleTabletIntegratedMode(This,Tablet)( (This)->lpVtbl -> SetSingleTabletIntegratedMode(This,Tablet) )
#define IInkOverlay_GetEventInterest(This,EventId,Listen)( (This)->lpVtbl -> GetEventInterest(This,EventId,Listen) )
#define IInkOverlay_SetEventInterest(This,EventId,Listen)( (This)->lpVtbl -> SetEventInterest(This,EventId,Listen) )
#endif
#endif
#ifndef ___IInkOverlayEvents_DISPINTERFACE_DEFINED__
#define ___IInkOverlayEvents_DISPINTERFACE_DEFINED__
extern const IID DIID__IInkOverlayEvents;
typedef struct _IInkOverlayEventsVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (_IInkOverlayEvents * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (_IInkOverlayEvents * This);
	ULONG(STDMETHODCALLTYPE * Release) (_IInkOverlayEvents * This);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfoCount) (_IInkOverlayEvents * This, UINT * pctinfo);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfo) (_IInkOverlayEvents * This, UINT iTInfo, LCID lcid, ITypeInfo ** ppTInfo);
	HRESULT(STDMETHODCALLTYPE * GetIDsOfNames) (_IInkOverlayEvents * This, REFIID riid, LPOLESTR * rgszNames, UINT cNames, LCID lcid, DISPID * rgDispId);
	HRESULT(STDMETHODCALLTYPE * Invoke) (_IInkOverlayEvents * This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS * pDispParams, VARIANT * pVarResult, EXCEPINFO * pExcepInfo, UINT * puArgErr);
	END_INTERFACE
}  _IInkOverlayEventsVtbl;
interface _IInkOverlayEvents
{
	CONST_VTBL struct _IInkOverlayEventsVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define _IInkOverlayEvents_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define _IInkOverlayEvents_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define _IInkOverlayEvents_Release(This)( (This)->lpVtbl -> Release(This) )
#define _IInkOverlayEvents_GetTypeInfoCount(This,pctinfo)( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define _IInkOverlayEvents_GetTypeInfo(This,iTInfo,lcid,ppTInfo)( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define _IInkOverlayEvents_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define _IInkOverlayEvents_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#endif
#endif
#ifndef __IInkPicture_INTERFACE_DEFINED__
#define __IInkPicture_INTERFACE_DEFINED__
extern const IID IID_IInkPicture;
typedef struct IInkPictureVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IInkPicture * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IInkPicture * This);
	ULONG(STDMETHODCALLTYPE * Release) (IInkPicture * This);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfoCount) (IInkPicture * This, UINT * pctinfo);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfo) (IInkPicture * This, UINT iTInfo, LCID lcid, ITypeInfo ** ppTInfo);
	HRESULT(STDMETHODCALLTYPE * GetIDsOfNames) (IInkPicture * This, REFIID riid, LPOLESTR * rgszNames, UINT cNames, LCID lcid, DISPID * rgDispId);
	HRESULT(STDMETHODCALLTYPE * Invoke) (IInkPicture * This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS * pDispParams, VARIANT * pVarResult, EXCEPINFO * pExcepInfo, UINT * puArgErr);
	HRESULT(STDMETHODCALLTYPE * get_hWnd) (IInkPicture * This, LONG_PTR * CurrentWindow);
	HRESULT(STDMETHODCALLTYPE * get_DefaultDrawingAttributes) (IInkPicture * This, IInkDrawingAttributes ** CurrentAttributes);
	HRESULT(STDMETHODCALLTYPE * putref_DefaultDrawingAttributes) (IInkPicture * This, IInkDrawingAttributes * NewAttributes);
	HRESULT(STDMETHODCALLTYPE * get_Renderer) (IInkPicture * This, IInkRenderer ** CurrentInkRenderer);
	HRESULT(STDMETHODCALLTYPE * putref_Renderer) (IInkPicture * This, IInkRenderer * NewInkRenderer);
	HRESULT(STDMETHODCALLTYPE * get_Ink) (IInkPicture * This, IInkDisp ** Ink);
	HRESULT(STDMETHODCALLTYPE * putref_Ink) (IInkPicture * This, IInkDisp * NewInk);
	HRESULT(STDMETHODCALLTYPE * get_AutoRedraw) (IInkPicture * This, VARIANT_BOOL * AutoRedraw);
	HRESULT(STDMETHODCALLTYPE * put_AutoRedraw) (IInkPicture * This, VARIANT_BOOL AutoRedraw);
	HRESULT(STDMETHODCALLTYPE * get_CollectingInk) (IInkPicture * This, VARIANT_BOOL * Collecting);
	HRESULT(STDMETHODCALLTYPE * get_CollectionMode) (IInkPicture * This, InkCollectionMode * Mode);
	HRESULT(STDMETHODCALLTYPE * put_CollectionMode) (IInkPicture * This, InkCollectionMode Mode);
	HRESULT(STDMETHODCALLTYPE * get_DynamicRendering) (IInkPicture * This, VARIANT_BOOL * Enabled);
	HRESULT(STDMETHODCALLTYPE * put_DynamicRendering) (IInkPicture * This, VARIANT_BOOL Enabled);
	HRESULT(STDMETHODCALLTYPE * get_DesiredPacketDescription) (IInkPicture * This, VARIANT * PacketGuids);
	HRESULT(STDMETHODCALLTYPE * put_DesiredPacketDescription) (IInkPicture * This, VARIANT PacketGuids);
	HRESULT(STDMETHODCALLTYPE * get_MouseIcon) (IInkPicture * This, IPictureDisp ** MouseIcon);
	HRESULT(STDMETHODCALLTYPE * put_MouseIcon) (IInkPicture * This, IPictureDisp * MouseIcon);
	HRESULT(STDMETHODCALLTYPE * putref_MouseIcon) (IInkPicture * This, IPictureDisp * MouseIcon);
	HRESULT(STDMETHODCALLTYPE * get_MousePointer) (IInkPicture * This, InkMousePointer * MousePointer);
	HRESULT(STDMETHODCALLTYPE * put_MousePointer) (IInkPicture * This, InkMousePointer MousePointer);
	HRESULT(STDMETHODCALLTYPE * get_EditingMode) (IInkPicture * This, InkOverlayEditingMode * EditingMode);
	HRESULT(STDMETHODCALLTYPE * put_EditingMode) (IInkPicture * This, InkOverlayEditingMode EditingMode);
	HRESULT(STDMETHODCALLTYPE * get_Selection) (IInkPicture * This, IInkStrokes ** Selection);
	HRESULT(STDMETHODCALLTYPE * put_Selection) (IInkPicture * This, IInkStrokes * Selection);
	HRESULT(STDMETHODCALLTYPE * get_EraserMode) (IInkPicture * This, InkOverlayEraserMode * EraserMode);
	HRESULT(STDMETHODCALLTYPE * put_EraserMode) (IInkPicture * This, InkOverlayEraserMode EraserMode);
	HRESULT(STDMETHODCALLTYPE * get_EraserWidth) (IInkPicture * This, long *EraserWidth);
	HRESULT(STDMETHODCALLTYPE * put_EraserWidth) (IInkPicture * This, long newEraserWidth);
	HRESULT(STDMETHODCALLTYPE * putref_Picture) (IInkPicture * This, IPictureDisp * pPicture);
	HRESULT(STDMETHODCALLTYPE * put_Picture) (IInkPicture * This, IPictureDisp * pPicture);
	HRESULT(STDMETHODCALLTYPE * get_Picture) (IInkPicture * This, IPictureDisp ** ppPicture);
	HRESULT(STDMETHODCALLTYPE * put_SizeMode) (IInkPicture * This, InkPictureSizeMode smNewSizeMode);
	HRESULT(STDMETHODCALLTYPE * get_SizeMode) (IInkPicture * This, InkPictureSizeMode * smSizeMode);
	HRESULT(STDMETHODCALLTYPE * put_BackColor) (IInkPicture * This, OLE_COLOR newColor);
	HRESULT(STDMETHODCALLTYPE * get_BackColor) (IInkPicture * This, OLE_COLOR * pColor);
	HRESULT(STDMETHODCALLTYPE * get_Cursors) (IInkPicture * This, IInkCursors ** Cursors);
	HRESULT(STDMETHODCALLTYPE * get_MarginX) (IInkPicture * This, long *MarginX);
	HRESULT(STDMETHODCALLTYPE * put_MarginX) (IInkPicture * This, long MarginX);
	HRESULT(STDMETHODCALLTYPE * get_MarginY) (IInkPicture * This, long *MarginY);
	HRESULT(STDMETHODCALLTYPE * put_MarginY) (IInkPicture * This, long MarginY);
	HRESULT(STDMETHODCALLTYPE * get_Tablet) (IInkPicture * This, IInkTablet ** SingleTablet);
	HRESULT(STDMETHODCALLTYPE * get_SupportHighContrastInk) (IInkPicture * This, VARIANT_BOOL * Support);
	HRESULT(STDMETHODCALLTYPE * put_SupportHighContrastInk) (IInkPicture * This, VARIANT_BOOL Support);
	HRESULT(STDMETHODCALLTYPE * get_SupportHighContrastSelectionUI) (IInkPicture * This, VARIANT_BOOL * Support);
	HRESULT(STDMETHODCALLTYPE * put_SupportHighContrastSelectionUI) (IInkPicture * This, VARIANT_BOOL Support);
	HRESULT(STDMETHODCALLTYPE * HitTestSelection) (IInkPicture * This, long x, long y, SelectionHitResult * SelArea);
	HRESULT(STDMETHODCALLTYPE * SetGestureStatus) (IInkPicture * This, InkApplicationGesture Gesture, VARIANT_BOOL Listen);
	HRESULT(STDMETHODCALLTYPE * GetGestureStatus) (IInkPicture * This, InkApplicationGesture Gesture, VARIANT_BOOL * Listening);
	HRESULT(STDMETHODCALLTYPE * GetWindowInputRectangle) (IInkPicture * This, IInkRectangle ** WindowInputRectangle);
	HRESULT(STDMETHODCALLTYPE * SetWindowInputRectangle) (IInkPicture * This, IInkRectangle * WindowInputRectangle);
	HRESULT(STDMETHODCALLTYPE * SetAllTabletsMode) (IInkPicture * This, VARIANT_BOOL UseMouseForInput);
	HRESULT(STDMETHODCALLTYPE * SetSingleTabletIntegratedMode) (IInkPicture * This, IInkTablet * Tablet);
	HRESULT(STDMETHODCALLTYPE * GetEventInterest) (IInkPicture * This, InkCollectorEventInterest EventId, VARIANT_BOOL * Listen);
	HRESULT(STDMETHODCALLTYPE * SetEventInterest) (IInkPicture * This, InkCollectorEventInterest EventId, VARIANT_BOOL Listen);
	HRESULT(STDMETHODCALLTYPE * get_InkEnabled) (IInkPicture * This, VARIANT_BOOL * Collecting);
	HRESULT(STDMETHODCALLTYPE * put_InkEnabled) (IInkPicture * This, VARIANT_BOOL Collecting);
	HRESULT(STDMETHODCALLTYPE * get_Enabled) (IInkPicture * This, VARIANT_BOOL * pbool);
	HRESULT(STDMETHODCALLTYPE * put_Enabled) (IInkPicture * This, VARIANT_BOOL vbool);
	END_INTERFACE
}  IInkPictureVtbl;
interface IInkPicture
{
	CONST_VTBL struct IInkPictureVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IInkPicture_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IInkPicture_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define IInkPicture_Release(This)( (This)->lpVtbl -> Release(This) )
#define IInkPicture_GetTypeInfoCount(This,pctinfo)( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define IInkPicture_GetTypeInfo(This,iTInfo,lcid,ppTInfo)( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define IInkPicture_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define IInkPicture_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define IInkPicture_get_hWnd(This,CurrentWindow)( (This)->lpVtbl -> get_hWnd(This,CurrentWindow) )
#define IInkPicture_get_DefaultDrawingAttributes(This,CurrentAttributes)( (This)->lpVtbl -> get_DefaultDrawingAttributes(This,CurrentAttributes) )
#define IInkPicture_putref_DefaultDrawingAttributes(This,NewAttributes)( (This)->lpVtbl -> putref_DefaultDrawingAttributes(This,NewAttributes) )
#define IInkPicture_get_Renderer(This,CurrentInkRenderer)( (This)->lpVtbl -> get_Renderer(This,CurrentInkRenderer) )
#define IInkPicture_putref_Renderer(This,NewInkRenderer)( (This)->lpVtbl -> putref_Renderer(This,NewInkRenderer) )
#define IInkPicture_get_Ink(This,Ink)( (This)->lpVtbl -> get_Ink(This,Ink) )
#define IInkPicture_putref_Ink(This,NewInk)( (This)->lpVtbl -> putref_Ink(This,NewInk) )
#define IInkPicture_get_AutoRedraw(This,AutoRedraw)( (This)->lpVtbl -> get_AutoRedraw(This,AutoRedraw) )
#define IInkPicture_put_AutoRedraw(This,AutoRedraw)( (This)->lpVtbl -> put_AutoRedraw(This,AutoRedraw) )
#define IInkPicture_get_CollectingInk(This,Collecting)( (This)->lpVtbl -> get_CollectingInk(This,Collecting) )
#define IInkPicture_get_CollectionMode(This,Mode)( (This)->lpVtbl -> get_CollectionMode(This,Mode) )
#define IInkPicture_put_CollectionMode(This,Mode)( (This)->lpVtbl -> put_CollectionMode(This,Mode) )
#define IInkPicture_get_DynamicRendering(This,Enabled)( (This)->lpVtbl -> get_DynamicRendering(This,Enabled) )
#define IInkPicture_put_DynamicRendering(This,Enabled)( (This)->lpVtbl -> put_DynamicRendering(This,Enabled) )
#define IInkPicture_get_DesiredPacketDescription(This,PacketGuids)( (This)->lpVtbl -> get_DesiredPacketDescription(This,PacketGuids) )
#define IInkPicture_put_DesiredPacketDescription(This,PacketGuids)( (This)->lpVtbl -> put_DesiredPacketDescription(This,PacketGuids) )
#define IInkPicture_get_MouseIcon(This,MouseIcon)( (This)->lpVtbl -> get_MouseIcon(This,MouseIcon) )
#define IInkPicture_put_MouseIcon(This,MouseIcon)( (This)->lpVtbl -> put_MouseIcon(This,MouseIcon) )
#define IInkPicture_putref_MouseIcon(This,MouseIcon)( (This)->lpVtbl -> putref_MouseIcon(This,MouseIcon) )
#define IInkPicture_get_MousePointer(This,MousePointer)( (This)->lpVtbl -> get_MousePointer(This,MousePointer) )
#define IInkPicture_put_MousePointer(This,MousePointer)( (This)->lpVtbl -> put_MousePointer(This,MousePointer) )
#define IInkPicture_get_EditingMode(This,EditingMode)( (This)->lpVtbl -> get_EditingMode(This,EditingMode) )
#define IInkPicture_put_EditingMode(This,EditingMode)( (This)->lpVtbl -> put_EditingMode(This,EditingMode) )
#define IInkPicture_get_Selection(This,Selection)( (This)->lpVtbl -> get_Selection(This,Selection) )
#define IInkPicture_put_Selection(This,Selection)( (This)->lpVtbl -> put_Selection(This,Selection) )
#define IInkPicture_get_EraserMode(This,EraserMode)( (This)->lpVtbl -> get_EraserMode(This,EraserMode) )
#define IInkPicture_put_EraserMode(This,EraserMode)( (This)->lpVtbl -> put_EraserMode(This,EraserMode) )
#define IInkPicture_get_EraserWidth(This,EraserWidth)( (This)->lpVtbl -> get_EraserWidth(This,EraserWidth) )
#define IInkPicture_put_EraserWidth(This,newEraserWidth)( (This)->lpVtbl -> put_EraserWidth(This,newEraserWidth) )
#define IInkPicture_putref_Picture(This,pPicture)( (This)->lpVtbl -> putref_Picture(This,pPicture) )
#define IInkPicture_put_Picture(This,pPicture)( (This)->lpVtbl -> put_Picture(This,pPicture) )
#define IInkPicture_get_Picture(This,ppPicture)( (This)->lpVtbl -> get_Picture(This,ppPicture) )
#define IInkPicture_put_SizeMode(This,smNewSizeMode)( (This)->lpVtbl -> put_SizeMode(This,smNewSizeMode) )
#define IInkPicture_get_SizeMode(This,smSizeMode)( (This)->lpVtbl -> get_SizeMode(This,smSizeMode) )
#define IInkPicture_put_BackColor(This,newColor)( (This)->lpVtbl -> put_BackColor(This,newColor) )
#define IInkPicture_get_BackColor(This,pColor)( (This)->lpVtbl -> get_BackColor(This,pColor) )
#define IInkPicture_get_Cursors(This,Cursors)( (This)->lpVtbl -> get_Cursors(This,Cursors) )
#define IInkPicture_get_MarginX(This,MarginX)( (This)->lpVtbl -> get_MarginX(This,MarginX) )
#define IInkPicture_put_MarginX(This,MarginX)( (This)->lpVtbl -> put_MarginX(This,MarginX) )
#define IInkPicture_get_MarginY(This,MarginY)( (This)->lpVtbl -> get_MarginY(This,MarginY) )
#define IInkPicture_put_MarginY(This,MarginY)( (This)->lpVtbl -> put_MarginY(This,MarginY) )
#define IInkPicture_get_Tablet(This,SingleTablet)( (This)->lpVtbl -> get_Tablet(This,SingleTablet) )
#define IInkPicture_get_SupportHighContrastInk(This,Support)( (This)->lpVtbl -> get_SupportHighContrastInk(This,Support) )
#define IInkPicture_put_SupportHighContrastInk(This,Support)( (This)->lpVtbl -> put_SupportHighContrastInk(This,Support) )
#define IInkPicture_get_SupportHighContrastSelectionUI(This,Support)( (This)->lpVtbl -> get_SupportHighContrastSelectionUI(This,Support) )
#define IInkPicture_put_SupportHighContrastSelectionUI(This,Support)( (This)->lpVtbl -> put_SupportHighContrastSelectionUI(This,Support) )
#define IInkPicture_HitTestSelection(This,x,y,SelArea)( (This)->lpVtbl -> HitTestSelection(This,x,y,SelArea) )
#define IInkPicture_SetGestureStatus(This,Gesture,Listen)( (This)->lpVtbl -> SetGestureStatus(This,Gesture,Listen) )
#define IInkPicture_GetGestureStatus(This,Gesture,Listening)( (This)->lpVtbl -> GetGestureStatus(This,Gesture,Listening) )
#define IInkPicture_GetWindowInputRectangle(This,WindowInputRectangle)( (This)->lpVtbl -> GetWindowInputRectangle(This,WindowInputRectangle) )
#define IInkPicture_SetWindowInputRectangle(This,WindowInputRectangle)( (This)->lpVtbl -> SetWindowInputRectangle(This,WindowInputRectangle) )
#define IInkPicture_SetAllTabletsMode(This,UseMouseForInput)( (This)->lpVtbl -> SetAllTabletsMode(This,UseMouseForInput) )
#define IInkPicture_SetSingleTabletIntegratedMode(This,Tablet)( (This)->lpVtbl -> SetSingleTabletIntegratedMode(This,Tablet) )
#define IInkPicture_GetEventInterest(This,EventId,Listen)( (This)->lpVtbl -> GetEventInterest(This,EventId,Listen) )
#define IInkPicture_SetEventInterest(This,EventId,Listen)( (This)->lpVtbl -> SetEventInterest(This,EventId,Listen) )
#define IInkPicture_get_InkEnabled(This,Collecting)( (This)->lpVtbl -> get_InkEnabled(This,Collecting) )
#define IInkPicture_put_InkEnabled(This,Collecting)( (This)->lpVtbl -> put_InkEnabled(This,Collecting) )
#define IInkPicture_get_Enabled(This,pbool)( (This)->lpVtbl -> get_Enabled(This,pbool) )
#define IInkPicture_put_Enabled(This,vbool)( (This)->lpVtbl -> put_Enabled(This,vbool) )
#endif
#endif
#ifndef ___IInkPictureEvents_DISPINTERFACE_DEFINED__
#define ___IInkPictureEvents_DISPINTERFACE_DEFINED__
extern const IID DIID__IInkPictureEvents;
typedef struct _IInkPictureEventsVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (_IInkPictureEvents * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (_IInkPictureEvents * This);
	ULONG(STDMETHODCALLTYPE * Release) (_IInkPictureEvents * This);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfoCount) (_IInkPictureEvents * This, UINT * pctinfo);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfo) (_IInkPictureEvents * This, UINT iTInfo, LCID lcid, ITypeInfo ** ppTInfo);
	HRESULT(STDMETHODCALLTYPE * GetIDsOfNames) (_IInkPictureEvents * This, REFIID riid, LPOLESTR * rgszNames, UINT cNames, LCID lcid, DISPID * rgDispId);
	HRESULT(STDMETHODCALLTYPE * Invoke) (_IInkPictureEvents * This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS * pDispParams, VARIANT * pVarResult, EXCEPINFO * pExcepInfo, UINT * puArgErr);
	END_INTERFACE
}  _IInkPictureEventsVtbl;
interface _IInkPictureEvents
{
	CONST_VTBL struct _IInkPictureEventsVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define _IInkPictureEvents_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define _IInkPictureEvents_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define _IInkPictureEvents_Release(This)( (This)->lpVtbl -> Release(This) )
#define _IInkPictureEvents_GetTypeInfoCount(This,pctinfo)( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define _IInkPictureEvents_GetTypeInfo(This,iTInfo,lcid,ppTInfo)( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define _IInkPictureEvents_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define _IInkPictureEvents_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#endif
#endif
#ifndef __IInkRecognizer_INTERFACE_DEFINED__
#define __IInkRecognizer_INTERFACE_DEFINED__
extern const IID IID_IInkRecognizer;
typedef struct IInkRecognizerVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IInkRecognizer * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IInkRecognizer * This);
	ULONG(STDMETHODCALLTYPE * Release) (IInkRecognizer * This);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfoCount) (IInkRecognizer * This, UINT * pctinfo);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfo) (IInkRecognizer * This, UINT iTInfo, LCID lcid, ITypeInfo ** ppTInfo);
	HRESULT(STDMETHODCALLTYPE * GetIDsOfNames) (IInkRecognizer * This, REFIID riid, LPOLESTR * rgszNames, UINT cNames, LCID lcid, DISPID * rgDispId);
	HRESULT(STDMETHODCALLTYPE * Invoke) (IInkRecognizer * This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS * pDispParams, VARIANT * pVarResult, EXCEPINFO * pExcepInfo, UINT * puArgErr);
	HRESULT(STDMETHODCALLTYPE * get_Name) (IInkRecognizer * This, BSTR * Name);
	HRESULT(STDMETHODCALLTYPE * get_Vendor) (IInkRecognizer * This, BSTR * Vendor);
	HRESULT(STDMETHODCALLTYPE * get_Capabilities) (IInkRecognizer * This, InkRecognizerCapabilities * CapabilitiesFlags);
	HRESULT(STDMETHODCALLTYPE * get_Languages) (IInkRecognizer * This, VARIANT * Languages);
	HRESULT(STDMETHODCALLTYPE * get_SupportedProperties) (IInkRecognizer * This, VARIANT * SupportedProperties);
	HRESULT(STDMETHODCALLTYPE * get_PreferredPacketDescription) (IInkRecognizer * This, VARIANT * PreferredPacketDescription);
	HRESULT(STDMETHODCALLTYPE * CreateRecognizerContext) (IInkRecognizer * This, IInkRecognizerContext ** Context);
	END_INTERFACE
}  IInkRecognizerVtbl;
interface IInkRecognizer
{
	CONST_VTBL struct IInkRecognizerVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IInkRecognizer_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IInkRecognizer_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define IInkRecognizer_Release(This)( (This)->lpVtbl -> Release(This) )
#define IInkRecognizer_GetTypeInfoCount(This,pctinfo)( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define IInkRecognizer_GetTypeInfo(This,iTInfo,lcid,ppTInfo)( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define IInkRecognizer_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define IInkRecognizer_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define IInkRecognizer_get_Name(This,Name)( (This)->lpVtbl -> get_Name(This,Name) )
#define IInkRecognizer_get_Vendor(This,Vendor)( (This)->lpVtbl -> get_Vendor(This,Vendor) )
#define IInkRecognizer_get_Capabilities(This,CapabilitiesFlags)( (This)->lpVtbl -> get_Capabilities(This,CapabilitiesFlags) )
#define IInkRecognizer_get_Languages(This,Languages)( (This)->lpVtbl -> get_Languages(This,Languages) )
#define IInkRecognizer_get_SupportedProperties(This,SupportedProperties)( (This)->lpVtbl -> get_SupportedProperties(This,SupportedProperties) )
#define IInkRecognizer_get_PreferredPacketDescription(This,PreferredPacketDescription)( (This)->lpVtbl -> get_PreferredPacketDescription(This,PreferredPacketDescription) )
#define IInkRecognizer_CreateRecognizerContext(This,Context)( (This)->lpVtbl -> CreateRecognizerContext(This,Context) )
#endif
#endif
#ifndef __IInkRecognizer2_INTERFACE_DEFINED__
#define __IInkRecognizer2_INTERFACE_DEFINED__
extern const IID IID_IInkRecognizer2;
typedef struct IInkRecognizer2Vtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IInkRecognizer2 * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IInkRecognizer2 * This);
	ULONG(STDMETHODCALLTYPE * Release) (IInkRecognizer2 * This);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfoCount) (IInkRecognizer2 * This, UINT * pctinfo);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfo) (IInkRecognizer2 * This, UINT iTInfo, LCID lcid, ITypeInfo ** ppTInfo);
	HRESULT(STDMETHODCALLTYPE * GetIDsOfNames) (IInkRecognizer2 * This, REFIID riid, LPOLESTR * rgszNames, UINT cNames, LCID lcid, DISPID * rgDispId);
	HRESULT(STDMETHODCALLTYPE * Invoke) (IInkRecognizer2 * This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS * pDispParams, VARIANT * pVarResult, EXCEPINFO * pExcepInfo, UINT * puArgErr);
	HRESULT(STDMETHODCALLTYPE * get_Id) (IInkRecognizer2 * This, BSTR * pbstrId);
	HRESULT(STDMETHODCALLTYPE * get_UnicodeRanges) (IInkRecognizer2 * This, VARIANT * UnicodeRanges);
	END_INTERFACE
}  IInkRecognizer2Vtbl;
interface IInkRecognizer2
{
	CONST_VTBL struct IInkRecognizer2Vtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IInkRecognizer2_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IInkRecognizer2_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define IInkRecognizer2_Release(This)( (This)->lpVtbl -> Release(This) )
#define IInkRecognizer2_GetTypeInfoCount(This,pctinfo)( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define IInkRecognizer2_GetTypeInfo(This,iTInfo,lcid,ppTInfo)( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define IInkRecognizer2_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define IInkRecognizer2_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define IInkRecognizer2_get_Id(This,pbstrId)( (This)->lpVtbl -> get_Id(This,pbstrId) )
#define IInkRecognizer2_get_UnicodeRanges(This,UnicodeRanges)( (This)->lpVtbl -> get_UnicodeRanges(This,UnicodeRanges) )
#endif
#endif
#ifndef __IInkRecognizers_INTERFACE_DEFINED__
#define __IInkRecognizers_INTERFACE_DEFINED__
extern const IID IID_IInkRecognizers;
typedef struct IInkRecognizersVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IInkRecognizers * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IInkRecognizers * This);
	ULONG(STDMETHODCALLTYPE * Release) (IInkRecognizers * This);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfoCount) (IInkRecognizers * This, UINT * pctinfo);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfo) (IInkRecognizers * This, UINT iTInfo, LCID lcid, ITypeInfo ** ppTInfo);
	HRESULT(STDMETHODCALLTYPE * GetIDsOfNames) (IInkRecognizers * This, REFIID riid, LPOLESTR * rgszNames, UINT cNames, LCID lcid, DISPID * rgDispId);
	HRESULT(STDMETHODCALLTYPE * Invoke) (IInkRecognizers * This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS * pDispParams, VARIANT * pVarResult, EXCEPINFO * pExcepInfo, UINT * puArgErr);
	HRESULT(STDMETHODCALLTYPE * get_Count) (IInkRecognizers * This, long *Count);
	HRESULT(STDMETHODCALLTYPE * get__NewEnum) (IInkRecognizers * This, IUnknown ** _NewEnum);
	HRESULT(STDMETHODCALLTYPE * GetDefaultRecognizer) (IInkRecognizers * This, long lcid, IInkRecognizer ** DefaultRecognizer);
	HRESULT(STDMETHODCALLTYPE * Item) (IInkRecognizers * This, long Index, IInkRecognizer ** InkRecognizer);
	END_INTERFACE
}  IInkRecognizersVtbl;
interface IInkRecognizers
{
	CONST_VTBL struct IInkRecognizersVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IInkRecognizers_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IInkRecognizers_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define IInkRecognizers_Release(This)( (This)->lpVtbl -> Release(This) )
#define IInkRecognizers_GetTypeInfoCount(This,pctinfo)( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define IInkRecognizers_GetTypeInfo(This,iTInfo,lcid,ppTInfo)( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define IInkRecognizers_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define IInkRecognizers_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define IInkRecognizers_get_Count(This,Count)( (This)->lpVtbl -> get_Count(This,Count) )
#define IInkRecognizers_get__NewEnum(This,_NewEnum)( (This)->lpVtbl -> get__NewEnum(This,_NewEnum) )
#define IInkRecognizers_GetDefaultRecognizer(This,lcid,DefaultRecognizer)( (This)->lpVtbl -> GetDefaultRecognizer(This,lcid,DefaultRecognizer) )
#define IInkRecognizers_Item(This,Index,InkRecognizer)( (This)->lpVtbl -> Item(This,Index,InkRecognizer) )
#endif
#endif
#ifndef ___IInkRecognitionEvents_DISPINTERFACE_DEFINED__
#define ___IInkRecognitionEvents_DISPINTERFACE_DEFINED__
extern const IID DIID__IInkRecognitionEvents;
typedef struct _IInkRecognitionEventsVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (_IInkRecognitionEvents * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (_IInkRecognitionEvents * This);
	ULONG(STDMETHODCALLTYPE * Release) (_IInkRecognitionEvents * This);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfoCount) (_IInkRecognitionEvents * This, UINT * pctinfo);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfo) (_IInkRecognitionEvents * This, UINT iTInfo, LCID lcid, ITypeInfo ** ppTInfo);
	HRESULT(STDMETHODCALLTYPE * GetIDsOfNames) (_IInkRecognitionEvents * This, REFIID riid, LPOLESTR * rgszNames, UINT cNames, LCID lcid, DISPID * rgDispId);
	HRESULT(STDMETHODCALLTYPE * Invoke) (_IInkRecognitionEvents * This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS * pDispParams, VARIANT * pVarResult, EXCEPINFO * pExcepInfo, UINT * puArgErr);
	END_INTERFACE
}  _IInkRecognitionEventsVtbl;
interface _IInkRecognitionEvents
{
	CONST_VTBL struct _IInkRecognitionEventsVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define _IInkRecognitionEvents_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define _IInkRecognitionEvents_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define _IInkRecognitionEvents_Release(This)( (This)->lpVtbl -> Release(This) )
#define _IInkRecognitionEvents_GetTypeInfoCount(This,pctinfo)( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define _IInkRecognitionEvents_GetTypeInfo(This,iTInfo,lcid,ppTInfo)( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define _IInkRecognitionEvents_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define _IInkRecognitionEvents_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#endif
#endif
#ifndef __IInkRecognizerContext_INTERFACE_DEFINED__
#define __IInkRecognizerContext_INTERFACE_DEFINED__
extern const IID IID_IInkRecognizerContext;
typedef struct IInkRecognizerContextVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IInkRecognizerContext * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IInkRecognizerContext * This);
	ULONG(STDMETHODCALLTYPE * Release) (IInkRecognizerContext * This);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfoCount) (IInkRecognizerContext * This, UINT * pctinfo);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfo) (IInkRecognizerContext * This, UINT iTInfo, LCID lcid, ITypeInfo ** ppTInfo);
	HRESULT(STDMETHODCALLTYPE * GetIDsOfNames) (IInkRecognizerContext * This, REFIID riid, LPOLESTR * rgszNames, UINT cNames, LCID lcid, DISPID * rgDispId);
	HRESULT(STDMETHODCALLTYPE * Invoke) (IInkRecognizerContext * This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS * pDispParams, VARIANT * pVarResult, EXCEPINFO * pExcepInfo, UINT * puArgErr);
	HRESULT(STDMETHODCALLTYPE * get_Strokes) (IInkRecognizerContext * This, IInkStrokes ** Strokes);
	HRESULT(STDMETHODCALLTYPE * putref_Strokes) (IInkRecognizerContext * This, IInkStrokes * Strokes);
	HRESULT(STDMETHODCALLTYPE * get_CharacterAutoCompletionMode) (IInkRecognizerContext * This, InkRecognizerCharacterAutoCompletionMode * Mode);
	HRESULT(STDMETHODCALLTYPE * put_CharacterAutoCompletionMode) (IInkRecognizerContext * This, InkRecognizerCharacterAutoCompletionMode Mode);
	HRESULT(STDMETHODCALLTYPE * get_Factoid) (IInkRecognizerContext * This, BSTR * Factoid);
	HRESULT(STDMETHODCALLTYPE * put_Factoid) (IInkRecognizerContext * This, BSTR factoid);
	HRESULT(STDMETHODCALLTYPE * get_Guide) (IInkRecognizerContext * This, IInkRecognizerGuide ** RecognizerGuide);
	HRESULT(STDMETHODCALLTYPE * putref_Guide) (IInkRecognizerContext * This, IInkRecognizerGuide * RecognizerGuide);
	HRESULT(STDMETHODCALLTYPE * get_PrefixText) (IInkRecognizerContext * This, BSTR * Prefix);
	HRESULT(STDMETHODCALLTYPE * put_PrefixText) (IInkRecognizerContext * This, BSTR Prefix);
	HRESULT(STDMETHODCALLTYPE * get_SuffixText) (IInkRecognizerContext * This, BSTR * Suffix);
	HRESULT(STDMETHODCALLTYPE * put_SuffixText) (IInkRecognizerContext * This, BSTR Suffix);
	HRESULT(STDMETHODCALLTYPE * get_RecognitionFlags) (IInkRecognizerContext * This, InkRecognitionModes * Modes);
	HRESULT(STDMETHODCALLTYPE * put_RecognitionFlags) (IInkRecognizerContext * This, InkRecognitionModes Modes);
	HRESULT(STDMETHODCALLTYPE * get_WordList) (IInkRecognizerContext * This, IInkWordList ** WordList);
	HRESULT(STDMETHODCALLTYPE * putref_WordList) (IInkRecognizerContext * This, IInkWordList * WordList);
	HRESULT(STDMETHODCALLTYPE * get_Recognizer) (IInkRecognizerContext * This, IInkRecognizer ** Recognizer);
	HRESULT(STDMETHODCALLTYPE * Recognize) (IInkRecognizerContext * This, InkRecognitionStatus * RecognitionStatus, IInkRecognitionResult ** RecognitionResult);
	HRESULT(STDMETHODCALLTYPE * StopBackgroundRecognition) (IInkRecognizerContext * This);
	HRESULT(STDMETHODCALLTYPE * EndInkInput) (IInkRecognizerContext * This);
	HRESULT(STDMETHODCALLTYPE * BackgroundRecognize) (IInkRecognizerContext * This, VARIANT CustomData);
	HRESULT(STDMETHODCALLTYPE * BackgroundRecognizeWithAlternates) (IInkRecognizerContext * This, VARIANT CustomData);
	HRESULT(STDMETHODCALLTYPE * Clone) (IInkRecognizerContext * This, IInkRecognizerContext ** RecoContext);
	HRESULT(STDMETHODCALLTYPE * IsStringSupported) (IInkRecognizerContext * This, BSTR String, VARIANT_BOOL * Supported);
	END_INTERFACE
}  IInkRecognizerContextVtbl;
interface IInkRecognizerContext
{
	CONST_VTBL struct IInkRecognizerContextVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IInkRecognizerContext_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IInkRecognizerContext_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define IInkRecognizerContext_Release(This)( (This)->lpVtbl -> Release(This) )
#define IInkRecognizerContext_GetTypeInfoCount(This,pctinfo)( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define IInkRecognizerContext_GetTypeInfo(This,iTInfo,lcid,ppTInfo)( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define IInkRecognizerContext_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define IInkRecognizerContext_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define IInkRecognizerContext_get_Strokes(This,Strokes)( (This)->lpVtbl -> get_Strokes(This,Strokes) )
#define IInkRecognizerContext_putref_Strokes(This,Strokes)( (This)->lpVtbl -> putref_Strokes(This,Strokes) )
#define IInkRecognizerContext_get_CharacterAutoCompletionMode(This,Mode)( (This)->lpVtbl -> get_CharacterAutoCompletionMode(This,Mode) )
#define IInkRecognizerContext_put_CharacterAutoCompletionMode(This,Mode)( (This)->lpVtbl -> put_CharacterAutoCompletionMode(This,Mode) )
#define IInkRecognizerContext_get_Factoid(This,Factoid)( (This)->lpVtbl -> get_Factoid(This,Factoid) )
#define IInkRecognizerContext_put_Factoid(This,factoid)( (This)->lpVtbl -> put_Factoid(This,factoid) )
#define IInkRecognizerContext_get_Guide(This,RecognizerGuide)( (This)->lpVtbl -> get_Guide(This,RecognizerGuide) )
#define IInkRecognizerContext_putref_Guide(This,RecognizerGuide)( (This)->lpVtbl -> putref_Guide(This,RecognizerGuide) )
#define IInkRecognizerContext_get_PrefixText(This,Prefix)( (This)->lpVtbl -> get_PrefixText(This,Prefix) )
#define IInkRecognizerContext_put_PrefixText(This,Prefix)( (This)->lpVtbl -> put_PrefixText(This,Prefix) )
#define IInkRecognizerContext_get_SuffixText(This,Suffix)( (This)->lpVtbl -> get_SuffixText(This,Suffix) )
#define IInkRecognizerContext_put_SuffixText(This,Suffix)( (This)->lpVtbl -> put_SuffixText(This,Suffix) )
#define IInkRecognizerContext_get_RecognitionFlags(This,Modes)( (This)->lpVtbl -> get_RecognitionFlags(This,Modes) )
#define IInkRecognizerContext_put_RecognitionFlags(This,Modes)( (This)->lpVtbl -> put_RecognitionFlags(This,Modes) )
#define IInkRecognizerContext_get_WordList(This,WordList)( (This)->lpVtbl -> get_WordList(This,WordList) )
#define IInkRecognizerContext_putref_WordList(This,WordList)( (This)->lpVtbl -> putref_WordList(This,WordList) )
#define IInkRecognizerContext_get_Recognizer(This,Recognizer)( (This)->lpVtbl -> get_Recognizer(This,Recognizer) )
#define IInkRecognizerContext_Recognize(This,RecognitionStatus,RecognitionResult)( (This)->lpVtbl -> Recognize(This,RecognitionStatus,RecognitionResult) )
#define IInkRecognizerContext_StopBackgroundRecognition(This)( (This)->lpVtbl -> StopBackgroundRecognition(This) )
#define IInkRecognizerContext_EndInkInput(This)( (This)->lpVtbl -> EndInkInput(This) )
#define IInkRecognizerContext_BackgroundRecognize(This,CustomData)( (This)->lpVtbl -> BackgroundRecognize(This,CustomData) )
#define IInkRecognizerContext_BackgroundRecognizeWithAlternates(This,CustomData)( (This)->lpVtbl -> BackgroundRecognizeWithAlternates(This,CustomData) )
#define IInkRecognizerContext_Clone(This,RecoContext)( (This)->lpVtbl -> Clone(This,RecoContext) )
#define IInkRecognizerContext_IsStringSupported(This,String,Supported)( (This)->lpVtbl -> IsStringSupported(This,String,Supported) )
#endif
#endif
#ifndef __IInkRecognizerContext2_INTERFACE_DEFINED__
#define __IInkRecognizerContext2_INTERFACE_DEFINED__
extern const IID IID_IInkRecognizerContext2;
typedef struct IInkRecognizerContext2Vtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IInkRecognizerContext2 * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IInkRecognizerContext2 * This);
	ULONG(STDMETHODCALLTYPE * Release) (IInkRecognizerContext2 * This);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfoCount) (IInkRecognizerContext2 * This, UINT * pctinfo);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfo) (IInkRecognizerContext2 * This, UINT iTInfo, LCID lcid, ITypeInfo ** ppTInfo);
	HRESULT(STDMETHODCALLTYPE * GetIDsOfNames) (IInkRecognizerContext2 * This, REFIID riid, LPOLESTR * rgszNames, UINT cNames, LCID lcid, DISPID * rgDispId);
	HRESULT(STDMETHODCALLTYPE * Invoke) (IInkRecognizerContext2 * This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS * pDispParams, VARIANT * pVarResult, EXCEPINFO * pExcepInfo, UINT * puArgErr);
	HRESULT(STDMETHODCALLTYPE * get_EnabledUnicodeRanges) (IInkRecognizerContext2 * This, VARIANT * UnicodeRanges);
	HRESULT(STDMETHODCALLTYPE * put_EnabledUnicodeRanges) (IInkRecognizerContext2 * This, VARIANT UnicodeRanges);
	END_INTERFACE
}  IInkRecognizerContext2Vtbl;
interface IInkRecognizerContext2
{
	CONST_VTBL struct IInkRecognizerContext2Vtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IInkRecognizerContext2_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IInkRecognizerContext2_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define IInkRecognizerContext2_Release(This)( (This)->lpVtbl -> Release(This) )
#define IInkRecognizerContext2_GetTypeInfoCount(This,pctinfo)( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define IInkRecognizerContext2_GetTypeInfo(This,iTInfo,lcid,ppTInfo)( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define IInkRecognizerContext2_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define IInkRecognizerContext2_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define IInkRecognizerContext2_get_EnabledUnicodeRanges(This,UnicodeRanges)( (This)->lpVtbl -> get_EnabledUnicodeRanges(This,UnicodeRanges) )
#define IInkRecognizerContext2_put_EnabledUnicodeRanges(This,UnicodeRanges)( (This)->lpVtbl -> put_EnabledUnicodeRanges(This,UnicodeRanges) )
#endif
#endif
#ifndef __IInkRecognitionResult_INTERFACE_DEFINED__
#define __IInkRecognitionResult_INTERFACE_DEFINED__
extern const IID IID_IInkRecognitionResult;
typedef struct IInkRecognitionResultVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IInkRecognitionResult * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IInkRecognitionResult * This);
	ULONG(STDMETHODCALLTYPE * Release) (IInkRecognitionResult * This);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfoCount) (IInkRecognitionResult * This, UINT * pctinfo);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfo) (IInkRecognitionResult * This, UINT iTInfo, LCID lcid, ITypeInfo ** ppTInfo);
	HRESULT(STDMETHODCALLTYPE * GetIDsOfNames) (IInkRecognitionResult * This, REFIID riid, LPOLESTR * rgszNames, UINT cNames, LCID lcid, DISPID * rgDispId);
	HRESULT(STDMETHODCALLTYPE * Invoke) (IInkRecognitionResult * This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS * pDispParams, VARIANT * pVarResult, EXCEPINFO * pExcepInfo, UINT * puArgErr);
	HRESULT(STDMETHODCALLTYPE * get_TopString) (IInkRecognitionResult * This, BSTR * TopString);
	HRESULT(STDMETHODCALLTYPE * get_TopAlternate) (IInkRecognitionResult * This, IInkRecognitionAlternate ** TopAlternate);
	HRESULT(STDMETHODCALLTYPE * get_TopConfidence) (IInkRecognitionResult * This, InkRecognitionConfidence * TopConfidence);
	HRESULT(STDMETHODCALLTYPE * get_Strokes) (IInkRecognitionResult * This, IInkStrokes ** Strokes);
	HRESULT(STDMETHODCALLTYPE * AlternatesFromSelection) (IInkRecognitionResult * This, long selectionStart, long selectionLength, long maximumAlternates, IInkRecognitionAlternates ** AlternatesFromSelection);
	HRESULT(STDMETHODCALLTYPE * ModifyTopAlternate) (IInkRecognitionResult * This, IInkRecognitionAlternate * Alternate);
	HRESULT(STDMETHODCALLTYPE * SetResultOnStrokes) (IInkRecognitionResult * This);
	END_INTERFACE
}  IInkRecognitionResultVtbl;
interface IInkRecognitionResult
{
	CONST_VTBL struct IInkRecognitionResultVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IInkRecognitionResult_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IInkRecognitionResult_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define IInkRecognitionResult_Release(This)( (This)->lpVtbl -> Release(This) )
#define IInkRecognitionResult_GetTypeInfoCount(This,pctinfo)( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define IInkRecognitionResult_GetTypeInfo(This,iTInfo,lcid,ppTInfo)( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define IInkRecognitionResult_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define IInkRecognitionResult_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define IInkRecognitionResult_get_TopString(This,TopString)( (This)->lpVtbl -> get_TopString(This,TopString) )
#define IInkRecognitionResult_get_TopAlternate(This,TopAlternate)( (This)->lpVtbl -> get_TopAlternate(This,TopAlternate) )
#define IInkRecognitionResult_get_TopConfidence(This,TopConfidence)( (This)->lpVtbl -> get_TopConfidence(This,TopConfidence) )
#define IInkRecognitionResult_get_Strokes(This,Strokes)( (This)->lpVtbl -> get_Strokes(This,Strokes) )
#define IInkRecognitionResult_AlternatesFromSelection(This,selectionStart,selectionLength,maximumAlternates,AlternatesFromSelection)( (This)->lpVtbl -> AlternatesFromSelection(This,selectionStart,selectionLength,maximumAlternates,AlternatesFromSelection) )
#define IInkRecognitionResult_ModifyTopAlternate(This,Alternate)( (This)->lpVtbl -> ModifyTopAlternate(This,Alternate) )
#define IInkRecognitionResult_SetResultOnStrokes(This)( (This)->lpVtbl -> SetResultOnStrokes(This) )
#endif
#endif
#ifndef __IInkRecognitionAlternate_INTERFACE_DEFINED__
#define __IInkRecognitionAlternate_INTERFACE_DEFINED__
extern const IID IID_IInkRecognitionAlternate;
typedef struct IInkRecognitionAlternateVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IInkRecognitionAlternate * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IInkRecognitionAlternate * This);
	ULONG(STDMETHODCALLTYPE * Release) (IInkRecognitionAlternate * This);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfoCount) (IInkRecognitionAlternate * This, UINT * pctinfo);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfo) (IInkRecognitionAlternate * This, UINT iTInfo, LCID lcid, ITypeInfo ** ppTInfo);
	HRESULT(STDMETHODCALLTYPE * GetIDsOfNames) (IInkRecognitionAlternate * This, REFIID riid, LPOLESTR * rgszNames, UINT cNames, LCID lcid, DISPID * rgDispId);
	HRESULT(STDMETHODCALLTYPE * Invoke) (IInkRecognitionAlternate * This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS * pDispParams, VARIANT * pVarResult, EXCEPINFO * pExcepInfo, UINT * puArgErr);
	HRESULT(STDMETHODCALLTYPE * get_String) (IInkRecognitionAlternate * This, BSTR * RecoString);
	HRESULT(STDMETHODCALLTYPE * get_Confidence) (IInkRecognitionAlternate * This, InkRecognitionConfidence * Confidence);
	HRESULT(STDMETHODCALLTYPE * get_Baseline) (IInkRecognitionAlternate * This, VARIANT * Baseline);
	HRESULT(STDMETHODCALLTYPE * get_Midline) (IInkRecognitionAlternate * This, VARIANT * Midline);
	HRESULT(STDMETHODCALLTYPE * get_Ascender) (IInkRecognitionAlternate * This, VARIANT * Ascender);
	HRESULT(STDMETHODCALLTYPE * get_Descender) (IInkRecognitionAlternate * This, VARIANT * Descender);
	HRESULT(STDMETHODCALLTYPE * get_LineNumber) (IInkRecognitionAlternate * This, long *LineNumber);
	HRESULT(STDMETHODCALLTYPE * get_Strokes) (IInkRecognitionAlternate * This, IInkStrokes ** Strokes);
	HRESULT(STDMETHODCALLTYPE * get_LineAlternates) (IInkRecognitionAlternate * This, IInkRecognitionAlternates ** LineAlternates);
	HRESULT(STDMETHODCALLTYPE * get_ConfidenceAlternates) (IInkRecognitionAlternate * This, IInkRecognitionAlternates ** ConfidenceAlternates);
	HRESULT(STDMETHODCALLTYPE * GetStrokesFromStrokeRanges) (IInkRecognitionAlternate * This, IInkStrokes * Strokes, IInkStrokes ** GetStrokesFromStrokeRanges);
	HRESULT(STDMETHODCALLTYPE * GetStrokesFromTextRange) (IInkRecognitionAlternate * This, long *selectionStart, long *selectionLength, IInkStrokes ** GetStrokesFromTextRange);
	HRESULT(STDMETHODCALLTYPE * GetTextRangeFromStrokes) (IInkRecognitionAlternate * This, IInkStrokes * Strokes, long *selectionStart, long *selectionLength);
	HRESULT(STDMETHODCALLTYPE * AlternatesWithConstantPropertyValues) (IInkRecognitionAlternate * This, BSTR PropertyType, IInkRecognitionAlternates ** AlternatesWithConstantPropertyValues);
	HRESULT(STDMETHODCALLTYPE * GetPropertyValue) (IInkRecognitionAlternate * This, BSTR PropertyType, VARIANT * PropertyValue);
	END_INTERFACE
}  IInkRecognitionAlternateVtbl;
interface IInkRecognitionAlternate
{
	CONST_VTBL struct IInkRecognitionAlternateVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IInkRecognitionAlternate_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IInkRecognitionAlternate_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define IInkRecognitionAlternate_Release(This)( (This)->lpVtbl -> Release(This) )
#define IInkRecognitionAlternate_GetTypeInfoCount(This,pctinfo)( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define IInkRecognitionAlternate_GetTypeInfo(This,iTInfo,lcid,ppTInfo)( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define IInkRecognitionAlternate_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define IInkRecognitionAlternate_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define IInkRecognitionAlternate_get_String(This,RecoString)( (This)->lpVtbl -> get_String(This,RecoString) )
#define IInkRecognitionAlternate_get_Confidence(This,Confidence)( (This)->lpVtbl -> get_Confidence(This,Confidence) )
#define IInkRecognitionAlternate_get_Baseline(This,Baseline)( (This)->lpVtbl -> get_Baseline(This,Baseline) )
#define IInkRecognitionAlternate_get_Midline(This,Midline)( (This)->lpVtbl -> get_Midline(This,Midline) )
#define IInkRecognitionAlternate_get_Ascender(This,Ascender)( (This)->lpVtbl -> get_Ascender(This,Ascender) )
#define IInkRecognitionAlternate_get_Descender(This,Descender)( (This)->lpVtbl -> get_Descender(This,Descender) )
#define IInkRecognitionAlternate_get_LineNumber(This,LineNumber)( (This)->lpVtbl -> get_LineNumber(This,LineNumber) )
#define IInkRecognitionAlternate_get_Strokes(This,Strokes)( (This)->lpVtbl -> get_Strokes(This,Strokes) )
#define IInkRecognitionAlternate_get_LineAlternates(This,LineAlternates)( (This)->lpVtbl -> get_LineAlternates(This,LineAlternates) )
#define IInkRecognitionAlternate_get_ConfidenceAlternates(This,ConfidenceAlternates)( (This)->lpVtbl -> get_ConfidenceAlternates(This,ConfidenceAlternates) )
#define IInkRecognitionAlternate_GetStrokesFromStrokeRanges(This,Strokes,GetStrokesFromStrokeRanges)( (This)->lpVtbl -> GetStrokesFromStrokeRanges(This,Strokes,GetStrokesFromStrokeRanges) )
#define IInkRecognitionAlternate_GetStrokesFromTextRange(This,selectionStart,selectionLength,GetStrokesFromTextRange)( (This)->lpVtbl -> GetStrokesFromTextRange(This,selectionStart,selectionLength,GetStrokesFromTextRange) )
#define IInkRecognitionAlternate_GetTextRangeFromStrokes(This,Strokes,selectionStart,selectionLength)( (This)->lpVtbl -> GetTextRangeFromStrokes(This,Strokes,selectionStart,selectionLength) )
#define IInkRecognitionAlternate_AlternatesWithConstantPropertyValues(This,PropertyType,AlternatesWithConstantPropertyValues)( (This)->lpVtbl -> AlternatesWithConstantPropertyValues(This,PropertyType,AlternatesWithConstantPropertyValues) )
#define IInkRecognitionAlternate_GetPropertyValue(This,PropertyType,PropertyValue)( (This)->lpVtbl -> GetPropertyValue(This,PropertyType,PropertyValue) )
#endif
#endif
#ifndef __IInkRecognitionAlternates_INTERFACE_DEFINED__
#define __IInkRecognitionAlternates_INTERFACE_DEFINED__
extern const IID IID_IInkRecognitionAlternates;
typedef struct IInkRecognitionAlternatesVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IInkRecognitionAlternates * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IInkRecognitionAlternates * This);
	ULONG(STDMETHODCALLTYPE * Release) (IInkRecognitionAlternates * This);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfoCount) (IInkRecognitionAlternates * This, UINT * pctinfo);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfo) (IInkRecognitionAlternates * This, UINT iTInfo, LCID lcid, ITypeInfo ** ppTInfo);
	HRESULT(STDMETHODCALLTYPE * GetIDsOfNames) (IInkRecognitionAlternates * This, REFIID riid, LPOLESTR * rgszNames, UINT cNames, LCID lcid, DISPID * rgDispId);
	HRESULT(STDMETHODCALLTYPE * Invoke) (IInkRecognitionAlternates * This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS * pDispParams, VARIANT * pVarResult, EXCEPINFO * pExcepInfo, UINT * puArgErr);
	HRESULT(STDMETHODCALLTYPE * get_Count) (IInkRecognitionAlternates * This, long *Count);
	HRESULT(STDMETHODCALLTYPE * get__NewEnum) (IInkRecognitionAlternates * This, IUnknown ** _NewEnum);
	HRESULT(STDMETHODCALLTYPE * get_Strokes) (IInkRecognitionAlternates * This, IInkStrokes ** Strokes);
	HRESULT(STDMETHODCALLTYPE * Item) (IInkRecognitionAlternates * This, long Index, IInkRecognitionAlternate ** InkRecoAlternate);
	END_INTERFACE
}  IInkRecognitionAlternatesVtbl;
interface IInkRecognitionAlternates
{
	CONST_VTBL struct IInkRecognitionAlternatesVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IInkRecognitionAlternates_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IInkRecognitionAlternates_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define IInkRecognitionAlternates_Release(This)( (This)->lpVtbl -> Release(This) )
#define IInkRecognitionAlternates_GetTypeInfoCount(This,pctinfo)( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define IInkRecognitionAlternates_GetTypeInfo(This,iTInfo,lcid,ppTInfo)( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define IInkRecognitionAlternates_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define IInkRecognitionAlternates_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define IInkRecognitionAlternates_get_Count(This,Count)( (This)->lpVtbl -> get_Count(This,Count) )
#define IInkRecognitionAlternates_get__NewEnum(This,_NewEnum)( (This)->lpVtbl -> get__NewEnum(This,_NewEnum) )
#define IInkRecognitionAlternates_get_Strokes(This,Strokes)( (This)->lpVtbl -> get_Strokes(This,Strokes) )
#define IInkRecognitionAlternates_Item(This,Index,InkRecoAlternate)( (This)->lpVtbl -> Item(This,Index,InkRecoAlternate) )
#endif
#endif
#ifndef __IInkRecognizerGuide_INTERFACE_DEFINED__
#define __IInkRecognizerGuide_INTERFACE_DEFINED__
extern const IID IID_IInkRecognizerGuide;
typedef struct IInkRecognizerGuideVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IInkRecognizerGuide * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IInkRecognizerGuide * This);
	ULONG(STDMETHODCALLTYPE * Release) (IInkRecognizerGuide * This);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfoCount) (IInkRecognizerGuide * This, UINT * pctinfo);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfo) (IInkRecognizerGuide * This, UINT iTInfo, LCID lcid, ITypeInfo ** ppTInfo);
	HRESULT(STDMETHODCALLTYPE * GetIDsOfNames) (IInkRecognizerGuide * This, REFIID riid, LPOLESTR * rgszNames, UINT cNames, LCID lcid, DISPID * rgDispId);
	HRESULT(STDMETHODCALLTYPE * Invoke) (IInkRecognizerGuide * This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS * pDispParams, VARIANT * pVarResult, EXCEPINFO * pExcepInfo, UINT * puArgErr);
	HRESULT(STDMETHODCALLTYPE * get_WritingBox) (IInkRecognizerGuide * This, IInkRectangle ** Rectangle);
	HRESULT(STDMETHODCALLTYPE * put_WritingBox) (IInkRecognizerGuide * This, IInkRectangle * Rectangle);
	HRESULT(STDMETHODCALLTYPE * get_DrawnBox) (IInkRecognizerGuide * This, IInkRectangle ** Rectangle);
	HRESULT(STDMETHODCALLTYPE * put_DrawnBox) (IInkRecognizerGuide * This, IInkRectangle * Rectangle);
	HRESULT(STDMETHODCALLTYPE * get_Rows) (IInkRecognizerGuide * This, long *Units);
	HRESULT(STDMETHODCALLTYPE * put_Rows) (IInkRecognizerGuide * This, long Units);
	HRESULT(STDMETHODCALLTYPE * get_Columns) (IInkRecognizerGuide * This, long *Units);
	HRESULT(STDMETHODCALLTYPE * put_Columns) (IInkRecognizerGuide * This, long Units);
	HRESULT(STDMETHODCALLTYPE * get_Midline) (IInkRecognizerGuide * This, long *Units);
	HRESULT(STDMETHODCALLTYPE * put_Midline) (IInkRecognizerGuide * This, long Units);
	HRESULT(STDMETHODCALLTYPE * get_GuideData) (IInkRecognizerGuide * This, InkRecoGuide * pRecoGuide);
	HRESULT(STDMETHODCALLTYPE * put_GuideData) (IInkRecognizerGuide * This, InkRecoGuide recoGuide);
	END_INTERFACE
}  IInkRecognizerGuideVtbl;
interface IInkRecognizerGuide
{
	CONST_VTBL struct IInkRecognizerGuideVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IInkRecognizerGuide_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IInkRecognizerGuide_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define IInkRecognizerGuide_Release(This)( (This)->lpVtbl -> Release(This) )
#define IInkRecognizerGuide_GetTypeInfoCount(This,pctinfo)( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define IInkRecognizerGuide_GetTypeInfo(This,iTInfo,lcid,ppTInfo)( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define IInkRecognizerGuide_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define IInkRecognizerGuide_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define IInkRecognizerGuide_get_WritingBox(This,Rectangle)( (This)->lpVtbl -> get_WritingBox(This,Rectangle) )
#define IInkRecognizerGuide_put_WritingBox(This,Rectangle)( (This)->lpVtbl -> put_WritingBox(This,Rectangle) )
#define IInkRecognizerGuide_get_DrawnBox(This,Rectangle)( (This)->lpVtbl -> get_DrawnBox(This,Rectangle) )
#define IInkRecognizerGuide_put_DrawnBox(This,Rectangle)( (This)->lpVtbl -> put_DrawnBox(This,Rectangle) )
#define IInkRecognizerGuide_get_Rows(This,Units)( (This)->lpVtbl -> get_Rows(This,Units) )
#define IInkRecognizerGuide_put_Rows(This,Units)( (This)->lpVtbl -> put_Rows(This,Units) )
#define IInkRecognizerGuide_get_Columns(This,Units)( (This)->lpVtbl -> get_Columns(This,Units) )
#define IInkRecognizerGuide_put_Columns(This,Units)( (This)->lpVtbl -> put_Columns(This,Units) )
#define IInkRecognizerGuide_get_Midline(This,Units)( (This)->lpVtbl -> get_Midline(This,Units) )
#define IInkRecognizerGuide_put_Midline(This,Units)( (This)->lpVtbl -> put_Midline(This,Units) )
#define IInkRecognizerGuide_get_GuideData(This,pRecoGuide)( (This)->lpVtbl -> get_GuideData(This,pRecoGuide) )
#define IInkRecognizerGuide_put_GuideData(This,recoGuide)( (This)->lpVtbl -> put_GuideData(This,recoGuide) )
#endif
#endif
#ifndef __IInkWordList_INTERFACE_DEFINED__
#define __IInkWordList_INTERFACE_DEFINED__
extern const IID IID_IInkWordList;
typedef struct IInkWordListVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IInkWordList * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IInkWordList * This);
	ULONG(STDMETHODCALLTYPE * Release) (IInkWordList * This);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfoCount) (IInkWordList * This, UINT * pctinfo);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfo) (IInkWordList * This, UINT iTInfo, LCID lcid, ITypeInfo ** ppTInfo);
	HRESULT(STDMETHODCALLTYPE * GetIDsOfNames) (IInkWordList * This, REFIID riid, LPOLESTR * rgszNames, UINT cNames, LCID lcid, DISPID * rgDispId);
	HRESULT(STDMETHODCALLTYPE * Invoke) (IInkWordList * This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS * pDispParams, VARIANT * pVarResult, EXCEPINFO * pExcepInfo, UINT * puArgErr);
	HRESULT(STDMETHODCALLTYPE * AddWord) (IInkWordList * This, BSTR NewWord);
	HRESULT(STDMETHODCALLTYPE * RemoveWord) (IInkWordList * This, BSTR RemoveWord);
	HRESULT(STDMETHODCALLTYPE * Merge) (IInkWordList * This, IInkWordList * MergeWordList);
	END_INTERFACE
}  IInkWordListVtbl;
interface IInkWordList
{
	CONST_VTBL struct IInkWordListVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IInkWordList_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IInkWordList_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define IInkWordList_Release(This)( (This)->lpVtbl -> Release(This) )
#define IInkWordList_GetTypeInfoCount(This,pctinfo)( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define IInkWordList_GetTypeInfo(This,iTInfo,lcid,ppTInfo)( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define IInkWordList_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define IInkWordList_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define IInkWordList_AddWord(This,NewWord)( (This)->lpVtbl -> AddWord(This,NewWord) )
#define IInkWordList_RemoveWord(This,RemoveWord)( (This)->lpVtbl -> RemoveWord(This,RemoveWord) )
#define IInkWordList_Merge(This,MergeWordList)( (This)->lpVtbl -> Merge(This,MergeWordList) )
#endif
#endif
#ifndef __IInkWordList2_INTERFACE_DEFINED__
#define __IInkWordList2_INTERFACE_DEFINED__
extern const IID IID_IInkWordList2;
typedef struct IInkWordList2Vtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IInkWordList2 * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IInkWordList2 * This);
	ULONG(STDMETHODCALLTYPE * Release) (IInkWordList2 * This);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfoCount) (IInkWordList2 * This, UINT * pctinfo);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfo) (IInkWordList2 * This, UINT iTInfo, LCID lcid, ITypeInfo ** ppTInfo);
	HRESULT(STDMETHODCALLTYPE * GetIDsOfNames) (IInkWordList2 * This, REFIID riid, LPOLESTR * rgszNames, UINT cNames, LCID lcid, DISPID * rgDispId);
	HRESULT(STDMETHODCALLTYPE * Invoke) (IInkWordList2 * This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS * pDispParams, VARIANT * pVarResult, EXCEPINFO * pExcepInfo, UINT * puArgErr);
	HRESULT(STDMETHODCALLTYPE * AddWords) (IInkWordList2 * This, BSTR NewWords);
	END_INTERFACE
}  IInkWordList2Vtbl;
interface IInkWordList2
{
	CONST_VTBL struct IInkWordList2Vtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IInkWordList2_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IInkWordList2_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define IInkWordList2_Release(This)( (This)->lpVtbl -> Release(This) )
#define IInkWordList2_GetTypeInfoCount(This,pctinfo)( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define IInkWordList2_GetTypeInfo(This,iTInfo,lcid,ppTInfo)( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define IInkWordList2_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define IInkWordList2_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define IInkWordList2_AddWords(This,NewWords)( (This)->lpVtbl -> AddWords(This,NewWords) )
#endif
#endif
extern const CLSID CLSID_InkDisp;
extern const CLSID CLSID_InkOverlay;
extern const CLSID CLSID_InkPicture;
extern const CLSID CLSID_InkCollector;
extern const CLSID CLSID_InkDrawingAttributes;
extern const CLSID CLSID_InkRectangle;
extern const CLSID CLSID_InkRenderer;
extern const CLSID CLSID_InkTransform;
extern const CLSID CLSID_InkRecognizers;
extern const CLSID CLSID_InkRecognizerContext;
extern const CLSID CLSID_InkRecognizerGuide;
extern const CLSID CLSID_InkTablets;
extern const CLSID CLSID_InkWordList;
extern const CLSID CLSID_InkStrokes;
#ifndef __IInk_INTERFACE_DEFINED__
#define __IInk_INTERFACE_DEFINED__
extern const IID IID_IInk;
typedef struct IInkVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IInk * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IInk * This);
	ULONG(STDMETHODCALLTYPE * Release) (IInk * This);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfoCount) (IInk * This, UINT * pctinfo);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfo) (IInk * This, UINT iTInfo, LCID lcid, ITypeInfo ** ppTInfo);
	HRESULT(STDMETHODCALLTYPE * GetIDsOfNames) (IInk * This, REFIID riid, LPOLESTR * rgszNames, UINT cNames, LCID lcid, DISPID * rgDispId);
	HRESULT(STDMETHODCALLTYPE * Invoke) (IInk * This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS * pDispParams, VARIANT * pVarResult, EXCEPINFO * pExcepInfo, UINT * puArgErr);
	END_INTERFACE
}  IInkVtbl;
interface IInk
{
	CONST_VTBL struct IInkVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IInk_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IInk_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define IInk_Release(This)( (This)->lpVtbl -> Release(This) )
#define IInk_GetTypeInfoCount(This,pctinfo)( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define IInk_GetTypeInfo(This,iTInfo,lcid,ppTInfo)( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define IInk_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define IInk_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#endif
#endif
#ifndef __IInkLineInfo_INTERFACE_DEFINED__
#define __IInkLineInfo_INTERFACE_DEFINED__
extern const IID IID_IInkLineInfo;
typedef struct IInkLineInfoVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IInkLineInfo * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IInkLineInfo * This);
	ULONG(STDMETHODCALLTYPE * Release) (IInkLineInfo * This);
	HRESULT(STDMETHODCALLTYPE * SetFormat) (IInkLineInfo * This, INKMETRIC * pim);
	HRESULT(STDMETHODCALLTYPE * GetFormat) (IInkLineInfo * This, INKMETRIC * pim);
	HRESULT(STDMETHODCALLTYPE * GetInkExtent) (IInkLineInfo * This, INKMETRIC * pim, UINT * pnWidth);
	HRESULT(STDMETHODCALLTYPE * GetCandidate) (IInkLineInfo * This, UINT nCandidateNum, LPWSTR pwcRecogWord, UINT * pcwcRecogWord, DWORD dwFlags);
	HRESULT(STDMETHODCALLTYPE * SetCandidate) (IInkLineInfo * This, UINT nCandidateNum, LPWSTR strRecogWord);
	HRESULT(STDMETHODCALLTYPE * Recognize) (IInkLineInfo * This);
	END_INTERFACE
}  IInkLineInfoVtbl;
interface IInkLineInfo
{
	CONST_VTBL struct IInkLineInfoVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IInkLineInfo_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IInkLineInfo_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define IInkLineInfo_Release(This)( (This)->lpVtbl -> Release(This) )
#define IInkLineInfo_SetFormat(This,pim)( (This)->lpVtbl -> SetFormat(This,pim) )
#define IInkLineInfo_GetFormat(This,pim)( (This)->lpVtbl -> GetFormat(This,pim) )
#define IInkLineInfo_GetInkExtent(This,pim,pnWidth)( (This)->lpVtbl -> GetInkExtent(This,pim,pnWidth) )
#define IInkLineInfo_GetCandidate(This,nCandidateNum,pwcRecogWord,pcwcRecogWord,dwFlags)( (This)->lpVtbl -> GetCandidate(This,nCandidateNum,pwcRecogWord,pcwcRecogWord,dwFlags) )
#define IInkLineInfo_SetCandidate(This,nCandidateNum,strRecogWord)( (This)->lpVtbl -> SetCandidate(This,nCandidateNum,strRecogWord) )
#define IInkLineInfo_Recognize(This)( (This)->lpVtbl -> Recognize(This) )
#endif
#endif
#ifndef __ISketchInk_INTERFACE_DEFINED__
#define __ISketchInk_INTERFACE_DEFINED__
extern const IID IID_ISketchInk;
typedef struct ISketchInkVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (ISketchInk * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (ISketchInk * This);
	ULONG(STDMETHODCALLTYPE * Release) (ISketchInk * This);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfoCount) (ISketchInk * This, UINT * pctinfo);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfo) (ISketchInk * This, UINT iTInfo, LCID lcid, ITypeInfo ** ppTInfo);
	HRESULT(STDMETHODCALLTYPE * GetIDsOfNames) (ISketchInk * This, REFIID riid, LPOLESTR * rgszNames, UINT cNames, LCID lcid, DISPID * rgDispId);
	HRESULT(STDMETHODCALLTYPE * Invoke) (ISketchInk * This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS * pDispParams, VARIANT * pVarResult, EXCEPINFO * pExcepInfo, UINT * puArgErr);
	END_INTERFACE
}  ISketchInkVtbl;
interface ISketchInk
{
	CONST_VTBL struct ISketchInkVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define ISketchInk_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define ISketchInk_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define ISketchInk_Release(This)( (This)->lpVtbl -> Release(This) )
#define ISketchInk_GetTypeInfoCount(This,pctinfo)( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define ISketchInk_GetTypeInfo(This,iTInfo,lcid,ppTInfo)( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define ISketchInk_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define ISketchInk_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#endif
#endif
extern const CLSID CLSID_Ink;
extern const CLSID CLSID_SketchInk;
#endif
#endif
extern RPC_IF_HANDLE __MIDL_itf_msinkaut_0001_0108_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_msinkaut_0001_0108_v0_0_s_ifspec;
#endif
